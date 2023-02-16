.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80495A28, local
	.asciz "efxPikmin.cpp"
.endobj lbl_80495A28
.balign 4
.obj lbl_80495A38, local
	.asciz "P2Assert"
.endobj lbl_80495A38
.balign 4
.obj lbl_80495A44, local
	.asciz "ArgDopingSmoke"
.endobj lbl_80495A44
.balign 4
.obj lbl_80495A54, local
	.asciz "ArgCursor"
.endobj lbl_80495A54
.balign 4
.obj lbl_80495A60, local
	.asciz "ArgScale"
.endobj lbl_80495A60

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx12TStoneAttack, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx12TStoneAttack
.obj __vt__Q23efx13TBridgeAttack, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx13TBridgeAttack
.obj __vt__Q23efx12TGate2Attack, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx12TGate2Attack
.obj __vt__Q23efx10TPkInstick, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx10TPkInstick
.obj __vt__Q23efx12TGate1Attack, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx12TGate1Attack
.obj __vt__Q23efx12TPkBlackDrop, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.endobj __vt__Q23efx12TPkBlackDrop
.obj __vt__Q23efx15TFueactBiriBase, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx15TFueactBiriBaseFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx15TFueactBiriBaseFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx15TFueactBiriBaseFv
.endobj __vt__Q23efx15TFueactBiriBase
.obj __vt__Q23efx13TFueactCircle, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx13TFueactCircleFPQ23efx3Arg
	.4byte forceKill__Q23efx13TFueactCircleFv
	.4byte fade__Q23efx13TFueactCircleFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx13TFueactCircleFv"
	.4byte "@4@execute__Q23efx13TFueactCircleFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q23efx13TFueactCircleFv"
	.4byte "@8@execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle"
	.4byte draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle
	.4byte execute__Q23efx13TFueactCircleFP14JPABaseEmitter
	.4byte execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle
	.4byte executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter
	.4byte __dt__Q23efx13TFueactCircleFv
.endobj __vt__Q23efx13TFueactCircle
.obj __vt__Q23efx7TCursor, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx7TCursorFPQ23efx3Arg
	.4byte forceKill__Q23efx7TCursorFv
	.4byte fade__Q23efx7TCursorFv
.endobj __vt__Q23efx7TCursor
.obj __vt__Q23efx14TOrimaLightAct, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx14TOrimaLightActFPQ23efx3Arg
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx14TOrimaLightAct
.obj __vt__Q23efx11TOrimaLight, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TOrimaLightFPQ23efx3Arg
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx11TOrimaLight
.obj __vt__Q23efx12TDopingSmoke, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx12TDopingSmokeFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx12TDopingSmoke
.obj __vt__Q23efx11TPkNageBlur, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TPkNageBlurFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx11TPkNageBlurFv"
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
	.4byte __dt__Q23efx11TPkNageBlurFv
.endobj __vt__Q23efx11TPkNageBlur

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051F670, local
	.float 0.0
.endobj lbl_8051F670
.balign 4
.obj lbl_8051F674, local
	.asciz "ArgType"
.endobj lbl_8051F674
.balign 4
.obj lbl_8051F67C, local
	.float 1.0
.endobj lbl_8051F67C
.obj lbl_8051F680, local # tau
	.float 6.2831855
.endobj lbl_8051F680
.obj lbl_8051F684, local # pi
	.float 3.1415927
.endobj lbl_8051F684
.obj lbl_8051F688, local
	.float 2.0
.endobj lbl_8051F688
.obj lbl_8051F68C, local
	.float 325.9493
.endobj lbl_8051F68C
.obj lbl_8051F690, local
	.float -325.9493
.endobj lbl_8051F690
.balign 8
.obj lbl_8051F698, local
	.8byte 0x4330000080000000
.endobj lbl_8051F698
.obj lbl_8051F6A0, local
	.float 32.0
.endobj lbl_8051F6A0
.obj lbl_8051F6A4, local
	.float 0.5
.endobj lbl_8051F6A4
.obj lbl_8051F6A8, local
	.float 3.0
.endobj lbl_8051F6A8
.obj lbl_8051F6AC, local
	.float 175.0
.endobj lbl_8051F6AC
.obj lbl_8051F6B0, local
	.float 100.0
.endobj lbl_8051F6B0
.obj lbl_8051F6B4, local
	.float 12.0
.endobj lbl_8051F6B4
.obj lbl_8051F6B8, local
	.float 22.0
.endobj lbl_8051F6B8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn create__Q23efx11TPkNageBlurFPQ23efx3Arg, global
/* 803B66B0 003B35F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B66B4 003B35F4  7C 08 02 A6 */	mflr r0
/* 803B66B8 003B35F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B66BC 003B35FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B66C0 003B3600  7C 9F 23 78 */	mr r31, r4
/* 803B66C4 003B3604  93 C1 00 08 */	stw r30, 8(r1)
/* 803B66C8 003B3608  7C 7E 1B 78 */	mr r30, r3
/* 803B66CC 003B360C  7F E3 FB 78 */	mr r3, r31
/* 803B66D0 003B3610  81 9F 00 00 */	lwz r12, 0(r31)
/* 803B66D4 003B3614  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B66D8 003B3618  7D 89 03 A6 */	mtctr r12
/* 803B66DC 003B361C  4E 80 04 21 */	bctrl 
/* 803B66E0 003B3620  7C 64 1B 78 */	mr r4, r3
/* 803B66E4 003B3624  38 62 13 14 */	addi r3, r2, lbl_8051F674@sda21
/* 803B66E8 003B3628  4B D1 3F D9 */	bl strcmp
/* 803B66EC 003B362C  7C 60 00 34 */	cntlzw r0, r3
/* 803B66F0 003B3630  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B66F4 003B3634  40 82 00 20 */	bne .L_803B6714
/* 803B66F8 003B3638  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B66FC 003B363C  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B6700 003B3640  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B6704 003B3644  38 80 01 3F */	li r4, 0x13f
/* 803B6708 003B3648  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B670C 003B364C  4C C6 31 82 */	crclr 6
/* 803B6710 003B3650  4B C7 3F 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B6714:
/* 803B6714 003B3654  A0 1F 00 10 */	lhz r0, 0x10(r31)
/* 803B6718 003B3658  2C 00 00 02 */	cmpwi r0, 2
/* 803B671C 003B365C  41 82 00 40 */	beq .L_803B675C
/* 803B6720 003B3660  40 80 00 14 */	bge .L_803B6734
/* 803B6724 003B3664  2C 00 00 00 */	cmpwi r0, 0
/* 803B6728 003B3668  41 82 00 1C */	beq .L_803B6744
/* 803B672C 003B366C  40 80 00 24 */	bge .L_803B6750
/* 803B6730 003B3670  48 00 00 4C */	b .L_803B677C
.L_803B6734:
/* 803B6734 003B3674  2C 00 00 04 */	cmpwi r0, 4
/* 803B6738 003B3678  41 82 00 3C */	beq .L_803B6774
/* 803B673C 003B367C  40 80 00 40 */	bge .L_803B677C
/* 803B6740 003B3680  48 00 00 28 */	b .L_803B6768
.L_803B6744:
/* 803B6744 003B3684  38 00 01 73 */	li r0, 0x173
/* 803B6748 003B3688  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 803B674C 003B368C  48 00 00 30 */	b .L_803B677C
.L_803B6750:
/* 803B6750 003B3690  38 00 01 74 */	li r0, 0x174
/* 803B6754 003B3694  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 803B6758 003B3698  48 00 00 24 */	b .L_803B677C
.L_803B675C:
/* 803B675C 003B369C  38 00 01 76 */	li r0, 0x176
/* 803B6760 003B36A0  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 803B6764 003B36A4  48 00 00 18 */	b .L_803B677C
.L_803B6768:
/* 803B6768 003B36A8  38 00 01 72 */	li r0, 0x172
/* 803B676C 003B36AC  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 803B6770 003B36B0  48 00 00 0C */	b .L_803B677C
.L_803B6774:
/* 803B6774 003B36B4  38 00 01 75 */	li r0, 0x175
/* 803B6778 003B36B8  B0 1E 00 0C */	sth r0, 0xc(r30)
.L_803B677C:
/* 803B677C 003B36BC  7F C3 F3 78 */	mr r3, r30
/* 803B6780 003B36C0  7F E4 FB 78 */	mr r4, r31
/* 803B6784 003B36C4  4B FF 8F 69 */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803B6788 003B36C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B678C 003B36CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B6790 003B36D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B6794 003B36D4  7C 08 03 A6 */	mtlr r0
/* 803B6798 003B36D8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B679C 003B36DC  4E 80 00 20 */	blr 
.endfn create__Q23efx11TPkNageBlurFPQ23efx3Arg

.fn create__Q23efx12TDopingSmokeFPQ23efx3Arg, global
/* 803B67A0 003B36E0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B67A4 003B36E4  7C 08 02 A6 */	mflr r0
/* 803B67A8 003B36E8  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B67AC 003B36EC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803B67B0 003B36F0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803B67B4 003B36F4  7C 9E 23 78 */	mr r30, r4
/* 803B67B8 003B36F8  3C 80 80 49 */	lis r4, lbl_80495A28@ha
/* 803B67BC 003B36FC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803B67C0 003B3700  7C 7D 1B 78 */	mr r29, r3
/* 803B67C4 003B3704  7F C3 F3 78 */	mr r3, r30
/* 803B67C8 003B3708  3B E4 5A 28 */	addi r31, r4, lbl_80495A28@l
/* 803B67CC 003B370C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B67D0 003B3710  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B67D4 003B3714  7D 89 03 A6 */	mtctr r12
/* 803B67D8 003B3718  4E 80 04 21 */	bctrl 
/* 803B67DC 003B371C  7C 64 1B 78 */	mr r4, r3
/* 803B67E0 003B3720  38 7F 00 1C */	addi r3, r31, 0x1c
/* 803B67E4 003B3724  4B D1 3E DD */	bl strcmp
/* 803B67E8 003B3728  7C 60 00 34 */	cntlzw r0, r3
/* 803B67EC 003B372C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B67F0 003B3730  40 82 00 18 */	bne .L_803B6808
/* 803B67F4 003B3734  38 7F 00 00 */	addi r3, r31, 0
/* 803B67F8 003B3738  38 BF 00 10 */	addi r5, r31, 0x10
/* 803B67FC 003B373C  38 80 01 5D */	li r4, 0x15d
/* 803B6800 003B3740  4C C6 31 82 */	crclr 6
/* 803B6804 003B3744  4B C7 3E 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B6808:
/* 803B6808 003B3748  A0 1E 00 1C */	lhz r0, 0x1c(r30)
/* 803B680C 003B374C  2C 00 00 01 */	cmpwi r0, 1
/* 803B6810 003B3750  41 82 00 20 */	beq .L_803B6830
/* 803B6814 003B3754  40 80 00 28 */	bge .L_803B683C
/* 803B6818 003B3758  2C 00 00 00 */	cmpwi r0, 0
/* 803B681C 003B375C  40 80 00 08 */	bge .L_803B6824
/* 803B6820 003B3760  48 00 00 1C */	b .L_803B683C
.L_803B6824:
/* 803B6824 003B3764  38 00 00 45 */	li r0, 0x45
/* 803B6828 003B3768  B0 1D 00 04 */	sth r0, 4(r29)
/* 803B682C 003B376C  48 00 00 18 */	b .L_803B6844
.L_803B6830:
/* 803B6830 003B3770  38 00 00 43 */	li r0, 0x43
/* 803B6834 003B3774  B0 1D 00 04 */	sth r0, 4(r29)
/* 803B6838 003B3778  48 00 00 0C */	b .L_803B6844
.L_803B683C:
/* 803B683C 003B377C  38 00 02 B2 */	li r0, 0x2b2
/* 803B6840 003B3780  B0 1D 00 04 */	sth r0, 4(r29)
.L_803B6844:
/* 803B6844 003B3784  7F A3 EB 78 */	mr r3, r29
/* 803B6848 003B3788  7F C4 F3 78 */	mr r4, r30
/* 803B684C 003B378C  4B FF 87 39 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803B6850 003B3790  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B6854 003B3794  41 82 01 0C */	beq .L_803B6960
/* 803B6858 003B3798  C0 9E 00 10 */	lfs f4, 0x10(r30)
/* 803B685C 003B379C  C0 7E 00 14 */	lfs f3, 0x14(r30)
/* 803B6860 003B37A0  EC 04 01 32 */	fmuls f0, f4, f4
/* 803B6864 003B37A4  C0 5E 00 18 */	lfs f2, 0x18(r30)
/* 803B6868 003B37A8  EC A3 00 F2 */	fmuls f5, f3, f3
/* 803B686C 003B37AC  C0 22 13 10 */	lfs f1, lbl_8051F670@sda21(r2)
/* 803B6870 003B37B0  EC C2 00 B2 */	fmuls f6, f2, f2
/* 803B6874 003B37B4  D0 81 00 08 */	stfs f4, 8(r1)
/* 803B6878 003B37B8  EC 00 28 2A */	fadds f0, f0, f5
/* 803B687C 003B37BC  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 803B6880 003B37C0  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 803B6884 003B37C4  EC 06 00 2A */	fadds f0, f6, f0
/* 803B6888 003B37C8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803B688C 003B37CC  40 81 00 20 */	ble .L_803B68AC
/* 803B6890 003B37D0  EC 04 29 3A */	fmadds f0, f4, f4, f5
/* 803B6894 003B37D4  EC 66 00 2A */	fadds f3, f6, f0
/* 803B6898 003B37D8  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 803B689C 003B37DC  40 81 00 14 */	ble .L_803B68B0
/* 803B68A0 003B37E0  FC 00 18 34 */	frsqrte f0, f3
/* 803B68A4 003B37E4  EC 60 00 F2 */	fmuls f3, f0, f3
/* 803B68A8 003B37E8  48 00 00 08 */	b .L_803B68B0
.L_803B68AC:
/* 803B68AC 003B37EC  FC 60 08 90 */	fmr f3, f1
.L_803B68B0:
/* 803B68B0 003B37F0  C0 02 13 10 */	lfs f0, lbl_8051F670@sda21(r2)
/* 803B68B4 003B37F4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803B68B8 003B37F8  40 81 00 30 */	ble .L_803B68E8
/* 803B68BC 003B37FC  C0 02 13 1C */	lfs f0, lbl_8051F67C@sda21(r2)
/* 803B68C0 003B3800  C0 41 00 08 */	lfs f2, 8(r1)
/* 803B68C4 003B3804  EC 60 18 24 */	fdivs f3, f0, f3
/* 803B68C8 003B3808  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803B68CC 003B380C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803B68D0 003B3810  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803B68D4 003B3814  EC 21 00 F2 */	fmuls f1, f1, f3
/* 803B68D8 003B3818  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803B68DC 003B381C  D0 41 00 08 */	stfs f2, 8(r1)
/* 803B68E0 003B3820  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 803B68E4 003B3824  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_803B68E8:
/* 803B68E8 003B3828  80 7D 00 08 */	lwz r3, 8(r29)
/* 803B68EC 003B382C  C0 01 00 08 */	lfs f0, 8(r1)
/* 803B68F0 003B3830  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803B68F4 003B3834  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 803B68F8 003B3838  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803B68FC 003B383C  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 803B6900 003B3840  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 803B6904 003B3844  A0 1E 00 1C */	lhz r0, 0x1c(r30)
/* 803B6908 003B3848  28 00 00 00 */	cmplwi r0, 0
/* 803B690C 003B384C  40 82 00 4C */	bne .L_803B6958
/* 803B6910 003B3850  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803B6914 003B3854  38 BE 00 04 */	addi r5, r30, 4
/* 803B6918 003B3858  38 80 00 44 */	li r4, 0x44
/* 803B691C 003B385C  38 C0 00 00 */	li r6, 0
/* 803B6920 003B3860  48 00 4F 95 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803B6924 003B3864  28 03 00 00 */	cmplwi r3, 0
/* 803B6928 003B3868  41 82 00 28 */	beq .L_803B6950
/* 803B692C 003B386C  38 0D 99 F8 */	addi r0, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
/* 803B6930 003B3870  C0 01 00 08 */	lfs f0, 8(r1)
/* 803B6934 003B3874  90 03 00 EC */	stw r0, 0xec(r3)
/* 803B6938 003B3878  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803B693C 003B387C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 803B6940 003B3880  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803B6944 003B3884  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 803B6948 003B3888  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 803B694C 003B388C  48 00 00 0C */	b .L_803B6958
.L_803B6950:
/* 803B6950 003B3890  38 60 00 00 */	li r3, 0
/* 803B6954 003B3894  48 00 00 10 */	b .L_803B6964
.L_803B6958:
/* 803B6958 003B3898  38 60 00 01 */	li r3, 1
/* 803B695C 003B389C  48 00 00 08 */	b .L_803B6964
.L_803B6960:
/* 803B6960 003B38A0  38 60 00 00 */	li r3, 0
.L_803B6964:
/* 803B6964 003B38A4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B6968 003B38A8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803B696C 003B38AC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803B6970 003B38B0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803B6974 003B38B4  7C 08 03 A6 */	mtlr r0
/* 803B6978 003B38B8  38 21 00 30 */	addi r1, r1, 0x30
/* 803B697C 003B38BC  4E 80 00 20 */	blr 
.endfn create__Q23efx12TDopingSmokeFPQ23efx3Arg

.fn create__Q23efx11TOrimaLightFPQ23efx3Arg, global
/* 803B6980 003B38C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B6984 003B38C4  7C 08 02 A6 */	mflr r0
/* 803B6988 003B38C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B698C 003B38CC  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 803B6990 003B38D0  2C 00 00 01 */	cmpwi r0, 1
/* 803B6994 003B38D4  41 82 00 28 */	beq .L_803B69BC
/* 803B6998 003B38D8  40 80 00 34 */	bge .L_803B69CC
/* 803B699C 003B38DC  2C 00 00 00 */	cmpwi r0, 0
/* 803B69A0 003B38E0  40 80 00 08 */	bge .L_803B69A8
/* 803B69A4 003B38E4  48 00 00 28 */	b .L_803B69CC
.L_803B69A8:
/* 803B69A8 003B38E8  38 A0 01 23 */	li r5, 0x123
/* 803B69AC 003B38EC  38 00 01 26 */	li r0, 0x126
/* 803B69B0 003B38F0  B0 A3 00 10 */	sth r5, 0x10(r3)
/* 803B69B4 003B38F4  B0 03 00 24 */	sth r0, 0x24(r3)
/* 803B69B8 003B38F8  48 00 00 14 */	b .L_803B69CC
.L_803B69BC:
/* 803B69BC 003B38FC  38 A0 00 DE */	li r5, 0xde
/* 803B69C0 003B3900  38 00 00 E1 */	li r0, 0xe1
/* 803B69C4 003B3904  B0 A3 00 10 */	sth r5, 0x10(r3)
/* 803B69C8 003B3908  B0 03 00 24 */	sth r0, 0x24(r3)
.L_803B69CC:
/* 803B69CC 003B390C  4B FF BD 71 */	bl "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
/* 803B69D0 003B3910  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B69D4 003B3914  7C 08 03 A6 */	mtlr r0
/* 803B69D8 003B3918  38 21 00 10 */	addi r1, r1, 0x10
/* 803B69DC 003B391C  4E 80 00 20 */	blr 
.endfn create__Q23efx11TOrimaLightFPQ23efx3Arg

.fn create__Q23efx14TOrimaLightActFPQ23efx3Arg, global
/* 803B69E0 003B3920  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B69E4 003B3924  7C 08 02 A6 */	mflr r0
/* 803B69E8 003B3928  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B69EC 003B392C  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 803B69F0 003B3930  2C 00 00 01 */	cmpwi r0, 1
/* 803B69F4 003B3934  41 82 00 28 */	beq .L_803B6A1C
/* 803B69F8 003B3938  40 80 00 34 */	bge .L_803B6A2C
/* 803B69FC 003B393C  2C 00 00 00 */	cmpwi r0, 0
/* 803B6A00 003B3940  40 80 00 08 */	bge .L_803B6A08
/* 803B6A04 003B3944  48 00 00 28 */	b .L_803B6A2C
.L_803B6A08:
/* 803B6A08 003B3948  38 A0 01 24 */	li r5, 0x124
/* 803B6A0C 003B394C  38 00 01 25 */	li r0, 0x125
/* 803B6A10 003B3950  B0 A3 00 10 */	sth r5, 0x10(r3)
/* 803B6A14 003B3954  B0 03 00 24 */	sth r0, 0x24(r3)
/* 803B6A18 003B3958  48 00 00 14 */	b .L_803B6A2C
.L_803B6A1C:
/* 803B6A1C 003B395C  38 A0 00 DF */	li r5, 0xdf
/* 803B6A20 003B3960  38 00 00 E0 */	li r0, 0xe0
/* 803B6A24 003B3964  B0 A3 00 10 */	sth r5, 0x10(r3)
/* 803B6A28 003B3968  B0 03 00 24 */	sth r0, 0x24(r3)
.L_803B6A2C:
/* 803B6A2C 003B396C  4B FF BD 11 */	bl "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
/* 803B6A30 003B3970  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B6A34 003B3974  7C 08 03 A6 */	mtlr r0
/* 803B6A38 003B3978  38 21 00 10 */	addi r1, r1, 0x10
/* 803B6A3C 003B397C  4E 80 00 20 */	blr 
.endfn create__Q23efx14TOrimaLightActFPQ23efx3Arg

.fn init__Q23efx7TCursorFll, global
/* 803B6A40 003B3980  2C 05 00 00 */	cmpwi r5, 0
/* 803B6A44 003B3984  40 81 00 0C */	ble .L_803B6A50
/* 803B6A48 003B3988  2C 05 00 10 */	cmpwi r5, 0x10
/* 803B6A4C 003B398C  40 81 00 08 */	ble .L_803B6A54
.L_803B6A50:
/* 803B6A50 003B3990  38 A0 00 10 */	li r5, 0x10
.L_803B6A54:
/* 803B6A54 003B3994  90 A3 00 38 */	stw r5, 0x38(r3)
/* 803B6A58 003B3998  2C 04 00 02 */	cmpwi r4, 2
/* 803B6A5C 003B399C  C0 0D 84 08 */	lfs f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
/* 803B6A60 003B39A0  D0 03 02 8C */	stfs f0, 0x28c(r3)
/* 803B6A64 003B39A4  41 82 00 3C */	beq .L_803B6AA0
/* 803B6A68 003B39A8  40 80 00 14 */	bge .L_803B6A7C
/* 803B6A6C 003B39AC  2C 04 00 00 */	cmpwi r4, 0
/* 803B6A70 003B39B0  41 82 00 18 */	beq .L_803B6A88
/* 803B6A74 003B39B4  40 80 00 20 */	bge .L_803B6A94
/* 803B6A78 003B39B8  4E 80 00 20 */	blr 
.L_803B6A7C:
/* 803B6A7C 003B39BC  2C 04 00 04 */	cmpwi r4, 4
/* 803B6A80 003B39C0  4C 80 00 20 */	bgelr 
/* 803B6A84 003B39C4  48 00 00 28 */	b .L_803B6AAC
.L_803B6A88:
/* 803B6A88 003B39C8  38 00 00 19 */	li r0, 0x19
/* 803B6A8C 003B39CC  B0 03 00 10 */	sth r0, 0x10(r3)
/* 803B6A90 003B39D0  4E 80 00 20 */	blr 
.L_803B6A94:
/* 803B6A94 003B39D4  38 00 00 1B */	li r0, 0x1b
/* 803B6A98 003B39D8  B0 03 00 10 */	sth r0, 0x10(r3)
/* 803B6A9C 003B39DC  4E 80 00 20 */	blr 
.L_803B6AA0:
/* 803B6AA0 003B39E0  38 00 00 1A */	li r0, 0x1a
/* 803B6AA4 003B39E4  B0 03 00 10 */	sth r0, 0x10(r3)
/* 803B6AA8 003B39E8  4E 80 00 20 */	blr 
.L_803B6AAC:
/* 803B6AAC 003B39EC  38 00 00 6A */	li r0, 0x6a
/* 803B6AB0 003B39F0  B0 03 00 10 */	sth r0, 0x10(r3)
/* 803B6AB4 003B39F4  4E 80 00 20 */	blr 
.endfn init__Q23efx7TCursorFll

.fn create__Q23efx7TCursorFPQ23efx3Arg, global
/* 803B6AB8 003B39F8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803B6ABC 003B39FC  7C 08 02 A6 */	mflr r0
/* 803B6AC0 003B3A00  90 01 00 44 */	stw r0, 0x44(r1)
/* 803B6AC4 003B3A04  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 803B6AC8 003B3A08  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 803B6ACC 003B3A0C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803B6AD0 003B3A10  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803B6AD4 003B3A14  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803B6AD8 003B3A18  93 81 00 20 */	stw r28, 0x20(r1)
/* 803B6ADC 003B3A1C  C0 02 13 10 */	lfs f0, lbl_8051F670@sda21(r2)
/* 803B6AE0 003B3A20  7C 7C 1B 78 */	mr r28, r3
/* 803B6AE4 003B3A24  7C 9D 23 78 */	mr r29, r4
/* 803B6AE8 003B3A28  3C 80 80 49 */	lis r4, lbl_80495A28@ha
/* 803B6AEC 003B3A2C  D0 03 02 88 */	stfs f0, 0x288(r3)
/* 803B6AF0 003B3A30  7F A3 EB 78 */	mr r3, r29
/* 803B6AF4 003B3A34  3B E4 5A 28 */	addi r31, r4, lbl_80495A28@l
/* 803B6AF8 003B3A38  81 9D 00 00 */	lwz r12, 0(r29)
/* 803B6AFC 003B3A3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B6B00 003B3A40  7D 89 03 A6 */	mtctr r12
/* 803B6B04 003B3A44  4E 80 04 21 */	bctrl 
/* 803B6B08 003B3A48  7C 64 1B 78 */	mr r4, r3
/* 803B6B0C 003B3A4C  38 7F 00 2C */	addi r3, r31, 0x2c
/* 803B6B10 003B3A50  4B D1 3B B1 */	bl strcmp
/* 803B6B14 003B3A54  7C 60 00 34 */	cntlzw r0, r3
/* 803B6B18 003B3A58  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B6B1C 003B3A5C  40 82 00 18 */	bne .L_803B6B34
/* 803B6B20 003B3A60  38 7F 00 00 */	addi r3, r31, 0
/* 803B6B24 003B3A64  38 BF 00 10 */	addi r5, r31, 0x10
/* 803B6B28 003B3A68  38 80 01 CB */	li r4, 0x1cb
/* 803B6B2C 003B3A6C  4C C6 31 82 */	crclr 6
/* 803B6B30 003B3A70  4B C7 3B 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B6B34:
/* 803B6B34 003B3A74  C0 1D 00 04 */	lfs f0, 4(r29)
/* 803B6B38 003B3A78  7F 9F E3 78 */	mr r31, r28
/* 803B6B3C 003B3A7C  3B C0 00 00 */	li r30, 0
/* 803B6B40 003B3A80  D0 1C 02 7C */	stfs f0, 0x27c(r28)
/* 803B6B44 003B3A84  C0 1D 00 08 */	lfs f0, 8(r29)
/* 803B6B48 003B3A88  D0 1C 02 80 */	stfs f0, 0x280(r28)
/* 803B6B4C 003B3A8C  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 803B6B50 003B3A90  D0 1C 02 84 */	stfs f0, 0x284(r28)
/* 803B6B54 003B3A94  C3 FD 00 10 */	lfs f31, 0x10(r29)
/* 803B6B58 003B3A98  48 00 00 38 */	b .L_803B6B90
.L_803B6B5C:
/* 803B6B5C 003B3A9C  FC 20 F8 90 */	fmr f1, f31
/* 803B6B60 003B3AA0  7F 83 E3 78 */	mr r3, r28
/* 803B6B64 003B3AA4  7F C5 F3 78 */	mr r5, r30
/* 803B6B68 003B3AA8  38 81 00 08 */	addi r4, r1, 8
/* 803B6B6C 003B3AAC  48 00 01 A1 */	bl "calcPos___Q23efx7TCursorFP10Vector3<f>fl"
/* 803B6B70 003B3AB0  C0 01 00 08 */	lfs f0, 8(r1)
/* 803B6B74 003B3AB4  3B DE 00 01 */	addi r30, r30, 1
/* 803B6B78 003B3AB8  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 803B6B7C 003B3ABC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803B6B80 003B3AC0  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 803B6B84 003B3AC4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803B6B88 003B3AC8  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 803B6B8C 003B3ACC  3B FF 00 24 */	addi r31, r31, 0x24
.L_803B6B90:
/* 803B6B90 003B3AD0  80 1C 00 38 */	lwz r0, 0x38(r28)
/* 803B6B94 003B3AD4  7C 1E 00 00 */	cmpw r30, r0
/* 803B6B98 003B3AD8  41 80 FF C4 */	blt .L_803B6B5C
/* 803B6B9C 003B3ADC  7F 9F E3 78 */	mr r31, r28
/* 803B6BA0 003B3AE0  3B C0 00 00 */	li r30, 0
/* 803B6BA4 003B3AE4  48 00 00 18 */	b .L_803B6BBC
.L_803B6BA8:
/* 803B6BA8 003B3AE8  38 7C 00 04 */	addi r3, r28, 4
/* 803B6BAC 003B3AEC  38 9F 00 3C */	addi r4, r31, 0x3c
/* 803B6BB0 003B3AF0  4B FF 7D 3D */	bl add__Q23efx11TOneEmitterFPQ23efx7Context
/* 803B6BB4 003B3AF4  3B FF 00 24 */	addi r31, r31, 0x24
/* 803B6BB8 003B3AF8  3B DE 00 01 */	addi r30, r30, 1
.L_803B6BBC:
/* 803B6BBC 003B3AFC  80 1C 00 38 */	lwz r0, 0x38(r28)
/* 803B6BC0 003B3B00  7C 1E 00 00 */	cmpw r30, r0
/* 803B6BC4 003B3B04  41 80 FF E4 */	blt .L_803B6BA8
/* 803B6BC8 003B3B08  38 7C 00 04 */	addi r3, r28, 4
/* 803B6BCC 003B3B0C  7F A4 EB 78 */	mr r4, r29
/* 803B6BD0 003B3B10  81 9C 00 04 */	lwz r12, 4(r28)
/* 803B6BD4 003B3B14  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B6BD8 003B3B18  7D 89 03 A6 */	mtctr r12
/* 803B6BDC 003B3B1C  4E 80 04 21 */	bctrl 
/* 803B6BE0 003B3B20  38 60 00 01 */	li r3, 1
/* 803B6BE4 003B3B24  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 803B6BE8 003B3B28  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803B6BEC 003B3B2C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 803B6BF0 003B3B30  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803B6BF4 003B3B34  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803B6BF8 003B3B38  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803B6BFC 003B3B3C  83 81 00 20 */	lwz r28, 0x20(r1)
/* 803B6C00 003B3B40  7C 08 03 A6 */	mtlr r0
/* 803B6C04 003B3B44  38 21 00 40 */	addi r1, r1, 0x40
/* 803B6C08 003B3B48  4E 80 00 20 */	blr 
.endfn create__Q23efx7TCursorFPQ23efx3Arg

.fn update__Q23efx7TCursorFPQ23efx3Arg, global
/* 803B6C0C 003B3B4C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803B6C10 003B3B50  7C 08 02 A6 */	mflr r0
/* 803B6C14 003B3B54  90 01 00 44 */	stw r0, 0x44(r1)
/* 803B6C18 003B3B58  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 803B6C1C 003B3B5C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 803B6C20 003B3B60  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803B6C24 003B3B64  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803B6C28 003B3B68  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803B6C2C 003B3B6C  7C 9E 23 79 */	or. r30, r4, r4
/* 803B6C30 003B3B70  7C 7D 1B 78 */	mr r29, r3
/* 803B6C34 003B3B74  40 82 00 20 */	bne .L_803B6C54
/* 803B6C38 003B3B78  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B6C3C 003B3B7C  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B6C40 003B3B80  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B6C44 003B3B84  38 80 01 E0 */	li r4, 0x1e0
/* 803B6C48 003B3B88  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B6C4C 003B3B8C  4C C6 31 82 */	crclr 6
/* 803B6C50 003B3B90  4B C7 39 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B6C54:
/* 803B6C54 003B3B94  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B6C58 003B3B98  C0 3E 00 04 */	lfs f1, 4(r30)
/* 803B6C5C 003B3B9C  C0 02 13 10 */	lfs f0, lbl_8051F670@sda21(r2)
/* 803B6C60 003B3BA0  D0 3D 02 7C */	stfs f1, 0x27c(r29)
/* 803B6C64 003B3BA4  C0 3E 00 08 */	lfs f1, 8(r30)
/* 803B6C68 003B3BA8  D0 3D 02 80 */	stfs f1, 0x280(r29)
/* 803B6C6C 003B3BAC  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 803B6C70 003B3BB0  D0 3D 02 84 */	stfs f1, 0x284(r29)
/* 803B6C74 003B3BB4  C0 5D 02 88 */	lfs f2, 0x288(r29)
/* 803B6C78 003B3BB8  C0 3D 02 8C */	lfs f1, 0x28c(r29)
/* 803B6C7C 003B3BBC  EC 22 08 28 */	fsubs f1, f2, f1
/* 803B6C80 003B3BC0  D0 3D 02 88 */	stfs f1, 0x288(r29)
/* 803B6C84 003B3BC4  C0 3D 02 88 */	lfs f1, 0x288(r29)
/* 803B6C88 003B3BC8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803B6C8C 003B3BCC  40 80 00 10 */	bge .L_803B6C9C
/* 803B6C90 003B3BD0  C0 02 13 20 */	lfs f0, lbl_8051F680@sda21(r2)
/* 803B6C94 003B3BD4  EC 01 00 2A */	fadds f0, f1, f0
/* 803B6C98 003B3BD8  D0 1D 02 88 */	stfs f0, 0x288(r29)
.L_803B6C9C:
/* 803B6C9C 003B3BDC  7F BF EB 78 */	mr r31, r29
/* 803B6CA0 003B3BE0  3B C0 00 00 */	li r30, 0
/* 803B6CA4 003B3BE4  48 00 00 38 */	b .L_803B6CDC
.L_803B6CA8:
/* 803B6CA8 003B3BE8  FC 20 F8 90 */	fmr f1, f31
/* 803B6CAC 003B3BEC  7F A3 EB 78 */	mr r3, r29
/* 803B6CB0 003B3BF0  7F C5 F3 78 */	mr r5, r30
/* 803B6CB4 003B3BF4  38 81 00 08 */	addi r4, r1, 8
/* 803B6CB8 003B3BF8  48 00 00 55 */	bl "calcPos___Q23efx7TCursorFP10Vector3<f>fl"
/* 803B6CBC 003B3BFC  C0 01 00 08 */	lfs f0, 8(r1)
/* 803B6CC0 003B3C00  3B DE 00 01 */	addi r30, r30, 1
/* 803B6CC4 003B3C04  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 803B6CC8 003B3C08  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803B6CCC 003B3C0C  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 803B6CD0 003B3C10  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803B6CD4 003B3C14  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 803B6CD8 003B3C18  3B FF 00 24 */	addi r31, r31, 0x24
.L_803B6CDC:
/* 803B6CDC 003B3C1C  80 1D 00 38 */	lwz r0, 0x38(r29)
/* 803B6CE0 003B3C20  7C 1E 00 00 */	cmpw r30, r0
/* 803B6CE4 003B3C24  41 80 FF C4 */	blt .L_803B6CA8
/* 803B6CE8 003B3C28  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 803B6CEC 003B3C2C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803B6CF0 003B3C30  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 803B6CF4 003B3C34  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803B6CF8 003B3C38  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803B6CFC 003B3C3C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803B6D00 003B3C40  7C 08 03 A6 */	mtlr r0
/* 803B6D04 003B3C44  38 21 00 40 */	addi r1, r1, 0x40
/* 803B6D08 003B3C48  4E 80 00 20 */	blr 
.endfn update__Q23efx7TCursorFPQ23efx3Arg

.fn "calcPos___Q23efx7TCursorFP10Vector3<f>fl", global
/* 803B6D0C 003B3C4C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803B6D10 003B3C50  7C 08 02 A6 */	mflr r0
/* 803B6D14 003B3C54  3C C0 43 30 */	lis r6, 0x4330
/* 803B6D18 003B3C58  C8 82 13 38 */	lfd f4, lbl_8051F698@sda21(r2)
/* 803B6D1C 003B3C5C  90 01 00 44 */	stw r0, 0x44(r1)
/* 803B6D20 003B3C60  6C A0 80 00 */	xoris r0, r5, 0x8000
/* 803B6D24 003B3C64  C0 42 13 28 */	lfs f2, lbl_8051F688@sda21(r2)
/* 803B6D28 003B3C68  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803B6D2C 003B3C6C  7C 9F 23 78 */	mr r31, r4
/* 803B6D30 003B3C70  C0 A2 13 24 */	lfs f5, lbl_8051F684@sda21(r2)
/* 803B6D34 003B3C74  90 01 00 0C */	stw r0, 0xc(r1)
/* 803B6D38 003B3C78  80 03 00 38 */	lwz r0, 0x38(r3)
/* 803B6D3C 003B3C7C  90 C1 00 08 */	stw r6, 8(r1)
/* 803B6D40 003B3C80  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803B6D44 003B3C84  C0 C3 02 88 */	lfs f6, 0x288(r3)
/* 803B6D48 003B3C88  C8 01 00 08 */	lfd f0, 8(r1)
/* 803B6D4C 003B3C8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B6D50 003B3C90  EC 00 20 28 */	fsubs f0, f0, f4
/* 803B6D54 003B3C94  90 C1 00 10 */	stw r6, 0x10(r1)
/* 803B6D58 003B3C98  EC 62 00 32 */	fmuls f3, f2, f0
/* 803B6D5C 003B3C9C  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 803B6D60 003B3CA0  C0 02 13 10 */	lfs f0, lbl_8051F670@sda21(r2)
/* 803B6D64 003B3CA4  EC 42 20 28 */	fsubs f2, f2, f4
/* 803B6D68 003B3CA8  EC 65 00 F2 */	fmuls f3, f5, f3
/* 803B6D6C 003B3CAC  EC 43 10 24 */	fdivs f2, f3, f2
/* 803B6D70 003B3CB0  EC A6 10 2A */	fadds f5, f6, f2
/* 803B6D74 003B3CB4  FC 40 28 90 */	fmr f2, f5
/* 803B6D78 003B3CB8  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 803B6D7C 003B3CBC  40 80 00 08 */	bge .L_803B6D84
/* 803B6D80 003B3CC0  FC 40 28 50 */	fneg f2, f5
.L_803B6D84:
/* 803B6D84 003B3CC4  C0 82 13 2C */	lfs f4, lbl_8051F68C@sda21(r2)
/* 803B6D88 003B3CC8  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 803B6D8C 003B3CCC  C0 02 13 10 */	lfs f0, lbl_8051F670@sda21(r2)
/* 803B6D90 003B3CD0  38 A4 71 A0 */	addi r5, r4, sincosTable___5JMath@l
/* 803B6D94 003B3CD4  EC 62 01 32 */	fmuls f3, f2, f4
/* 803B6D98 003B3CD8  C0 43 02 7C */	lfs f2, 0x27c(r3)
/* 803B6D9C 003B3CDC  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 803B6DA0 003B3CE0  FC 00 18 1E */	fctiwz f0, f3
/* 803B6DA4 003B3CE4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803B6DA8 003B3CE8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 803B6DAC 003B3CEC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803B6DB0 003B3CF0  7C 85 02 14 */	add r4, r5, r0
/* 803B6DB4 003B3CF4  C0 04 00 04 */	lfs f0, 4(r4)
/* 803B6DB8 003B3CF8  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 803B6DBC 003B3CFC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 803B6DC0 003B3D00  40 80 00 28 */	bge .L_803B6DE8
/* 803B6DC4 003B3D04  C0 02 13 30 */	lfs f0, lbl_8051F690@sda21(r2)
/* 803B6DC8 003B3D08  EC 05 00 32 */	fmuls f0, f5, f0
/* 803B6DCC 003B3D0C  FC 00 00 1E */	fctiwz f0, f0
/* 803B6DD0 003B3D10  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803B6DD4 003B3D14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B6DD8 003B3D18  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803B6DDC 003B3D1C  7C 05 04 2E */	lfsx f0, r5, r0
/* 803B6DE0 003B3D20  FC 40 00 50 */	fneg f2, f0
/* 803B6DE4 003B3D24  48 00 00 1C */	b .L_803B6E00
.L_803B6DE8:
/* 803B6DE8 003B3D28  EC 05 01 32 */	fmuls f0, f5, f4
/* 803B6DEC 003B3D2C  FC 00 00 1E */	fctiwz f0, f0
/* 803B6DF0 003B3D30  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 803B6DF4 003B3D34  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803B6DF8 003B3D38  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803B6DFC 003B3D3C  7C 45 04 2E */	lfsx f2, r5, r0
.L_803B6E00:
/* 803B6E00 003B3D40  C0 03 02 84 */	lfs f0, 0x284(r3)
/* 803B6E04 003B3D44  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 803B6E08 003B3D48  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803B6E0C 003B3D4C  80 0D 93 08 */	lwz r0, mapMgr__4Game@sda21(r13)
/* 803B6E10 003B3D50  28 00 00 00 */	cmplwi r0, 0
/* 803B6E14 003B3D54  41 82 00 24 */	beq .L_803B6E38
/* 803B6E18 003B3D58  7C 03 03 78 */	mr r3, r0
/* 803B6E1C 003B3D5C  7F E4 FB 78 */	mr r4, r31
/* 803B6E20 003B3D60  81 83 00 04 */	lwz r12, 4(r3)
/* 803B6E24 003B3D64  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803B6E28 003B3D68  7D 89 03 A6 */	mtctr r12
/* 803B6E2C 003B3D6C  4E 80 04 21 */	bctrl 
/* 803B6E30 003B3D70  D0 3F 00 04 */	stfs f1, 4(r31)
/* 803B6E34 003B3D74  48 00 00 0C */	b .L_803B6E40
.L_803B6E38:
/* 803B6E38 003B3D78  C0 03 02 80 */	lfs f0, 0x280(r3)
/* 803B6E3C 003B3D7C  D0 1F 00 04 */	stfs f0, 4(r31)
.L_803B6E40:
/* 803B6E40 003B3D80  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803B6E44 003B3D84  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803B6E48 003B3D88  7C 08 03 A6 */	mtlr r0
/* 803B6E4C 003B3D8C  38 21 00 40 */	addi r1, r1, 0x40
/* 803B6E50 003B3D90  4E 80 00 20 */	blr 
.endfn "calcPos___Q23efx7TCursorFP10Vector3<f>fl"

.fn create__Q23efx13TFueactCircleFPQ23efx3Arg, global
/* 803B6E54 003B3D94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B6E58 003B3D98  7C 08 02 A6 */	mflr r0
/* 803B6E5C 003B3D9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B6E60 003B3DA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B6E64 003B3DA4  7C 7F 1B 78 */	mr r31, r3
/* 803B6E68 003B3DA8  80 03 00 14 */	lwz r0, 0x14(r3)
/* 803B6E6C 003B3DAC  28 00 00 00 */	cmplwi r0, 0
/* 803B6E70 003B3DB0  41 82 00 0C */	beq .L_803B6E7C
/* 803B6E74 003B3DB4  38 60 00 00 */	li r3, 0
/* 803B6E78 003B3DB8  48 00 00 74 */	b .L_803B6EEC
.L_803B6E7C:
/* 803B6E7C 003B3DBC  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 803B6E80 003B3DC0  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803B6E84 003B3DC4  38 A4 41 E4 */	addi r5, r4, "zero__10Vector3<f>"@l
/* 803B6E88 003B3DC8  38 C0 00 00 */	li r6, 0
/* 803B6E8C 003B3DCC  38 80 00 69 */	li r4, 0x69
/* 803B6E90 003B3DD0  48 00 4A 25 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803B6E94 003B3DD4  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803B6E98 003B3DD8  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 803B6E9C 003B3DDC  28 03 00 00 */	cmplwi r3, 0
/* 803B6EA0 003B3DE0  41 82 00 48 */	beq .L_803B6EE8
/* 803B6EA4 003B3DE4  28 1F 00 00 */	cmplwi r31, 0
/* 803B6EA8 003B3DE8  7F E0 FB 78 */	mr r0, r31
/* 803B6EAC 003B3DEC  41 82 00 08 */	beq .L_803B6EB4
/* 803B6EB0 003B3DF0  38 1F 00 04 */	addi r0, r31, 4
.L_803B6EB4:
/* 803B6EB4 003B3DF4  28 1F 00 00 */	cmplwi r31, 0
/* 803B6EB8 003B3DF8  90 03 00 EC */	stw r0, 0xec(r3)
/* 803B6EBC 003B3DFC  7F E0 FB 78 */	mr r0, r31
/* 803B6EC0 003B3E00  41 82 00 08 */	beq .L_803B6EC8
/* 803B6EC4 003B3E04  38 1F 00 08 */	addi r0, r31, 8
.L_803B6EC8:
/* 803B6EC8 003B3E08  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 803B6ECC 003B3E0C  38 60 00 01 */	li r3, 1
/* 803B6ED0 003B3E10  90 04 00 F0 */	stw r0, 0xf0(r4)
/* 803B6ED4 003B3E14  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 803B6ED8 003B3E18  80 04 00 F4 */	lwz r0, 0xf4(r4)
/* 803B6EDC 003B3E1C  60 00 00 40 */	ori r0, r0, 0x40
/* 803B6EE0 003B3E20  90 04 00 F4 */	stw r0, 0xf4(r4)
/* 803B6EE4 003B3E24  48 00 00 08 */	b .L_803B6EEC
.L_803B6EE8:
/* 803B6EE8 003B3E28  38 60 00 00 */	li r3, 0
.L_803B6EEC:
/* 803B6EEC 003B3E2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B6EF0 003B3E30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B6EF4 003B3E34  7C 08 03 A6 */	mtlr r0
/* 803B6EF8 003B3E38  38 21 00 10 */	addi r1, r1, 0x10
/* 803B6EFC 003B3E3C  4E 80 00 20 */	blr 
.endfn create__Q23efx13TFueactCircleFPQ23efx3Arg

.fn execute__Q23efx13TFueactCircleFP14JPABaseEmitter, global
/* 803B6F00 003B3E40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B6F04 003B3E44  7C 08 02 A6 */	mflr r0
/* 803B6F08 003B3E48  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B6F0C 003B3E4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B6F10 003B3E50  7C 9F 23 78 */	mr r31, r4
/* 803B6F14 003B3E54  93 C1 00 08 */	stw r30, 8(r1)
/* 803B6F18 003B3E58  7C 7E 1B 78 */	mr r30, r3
/* 803B6F1C 003B3E5C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803B6F20 003B3E60  28 00 00 00 */	cmplwi r0, 0
/* 803B6F24 003B3E64  40 82 00 20 */	bne .L_803B6F44
/* 803B6F28 003B3E68  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B6F2C 003B3E6C  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B6F30 003B3E70  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B6F34 003B3E74  38 80 02 12 */	li r4, 0x212
/* 803B6F38 003B3E78  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B6F3C 003B3E7C  4C C6 31 82 */	crclr 6
/* 803B6F40 003B3E80  4B C7 37 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B6F44:
/* 803B6F44 003B3E84  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 803B6F48 003B3E88  28 00 00 00 */	cmplwi r0, 0
/* 803B6F4C 003B3E8C  40 82 00 20 */	bne .L_803B6F6C
/* 803B6F50 003B3E90  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B6F54 003B3E94  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B6F58 003B3E98  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B6F5C 003B3E9C  38 80 02 13 */	li r4, 0x213
/* 803B6F60 003B3EA0  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B6F64 003B3EA4  4C C6 31 82 */	crclr 6
/* 803B6F68 003B3EA8  4B C7 36 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B6F6C:
/* 803B6F6C 003B3EAC  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 803B6F70 003B3EB0  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 803B6F74 003B3EB4  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 803B6F78 003B3EB8  C0 25 00 04 */	lfs f1, 4(r5)
/* 803B6F7C 003B3EBC  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 803B6F80 003B3EC0  C0 45 00 00 */	lfs f2, 0(r5)
/* 803B6F84 003B3EC4  EC A1 00 28 */	fsubs f5, f1, f0
/* 803B6F88 003B3EC8  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 803B6F8C 003B3ECC  C0 25 00 08 */	lfs f1, 8(r5)
/* 803B6F90 003B3ED0  EC 82 00 28 */	fsubs f4, f2, f0
/* 803B6F94 003B3ED4  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 803B6F98 003B3ED8  EC 45 01 72 */	fmuls f2, f5, f5
/* 803B6F9C 003B3EDC  EC C1 00 28 */	fsubs f6, f1, f0
/* 803B6FA0 003B3EE0  C0 22 13 40 */	lfs f1, lbl_8051F6A0@sda21(r2)
/* 803B6FA4 003B3EE4  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 803B6FA8 003B3EE8  EC 44 11 3A */	fmadds f2, f4, f4, f2
/* 803B6FAC 003B3EEC  EC 01 00 32 */	fmuls f0, f1, f0
/* 803B6FB0 003B3EF0  EC E6 11 BA */	fmadds f7, f6, f6, f2
/* 803B6FB4 003B3EF4  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 803B6FB8 003B3EF8  4C 40 13 82 */	cror 2, 0, 2
/* 803B6FBC 003B3EFC  41 82 00 44 */	beq .L_803B7000
/* 803B6FC0 003B3F00  C0 02 13 10 */	lfs f0, lbl_8051F670@sda21(r2)
/* 803B6FC4 003B3F04  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 803B6FC8 003B3F08  4C 40 13 82 */	cror 2, 0, 2
/* 803B6FCC 003B3F0C  40 82 00 08 */	bne .L_803B6FD4
/* 803B6FD0 003B3F10  48 00 00 24 */	b .L_803B6FF4
.L_803B6FD4:
/* 803B6FD4 003B3F14  FC 60 38 34 */	frsqrte f3, f7
/* 803B6FD8 003B3F18  C0 42 13 44 */	lfs f2, lbl_8051F6A4@sda21(r2)
/* 803B6FDC 003B3F1C  C0 02 13 48 */	lfs f0, lbl_8051F6A8@sda21(r2)
/* 803B6FE0 003B3F20  FC 60 18 18 */	frsp f3, f3
/* 803B6FE4 003B3F24  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803B6FE8 003B3F28  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803B6FEC 003B3F2C  EC 07 00 7C */	fnmsubs f0, f7, f1, f0
/* 803B6FF0 003B3F30  EC E2 00 32 */	fmuls f7, f2, f0
.L_803B6FF4:
/* 803B6FF4 003B3F34  EC 84 01 F2 */	fmuls f4, f4, f7
/* 803B6FF8 003B3F38  EC A5 01 F2 */	fmuls f5, f5, f7
/* 803B6FFC 003B3F3C  EC C6 01 F2 */	fmuls f6, f6, f7
.L_803B7000:
/* 803B7000 003B3F40  D0 9F 00 18 */	stfs f4, 0x18(r31)
/* 803B7004 003B3F44  D0 BF 00 1C */	stfs f5, 0x1c(r31)
/* 803B7008 003B3F48  D0 DF 00 20 */	stfs f6, 0x20(r31)
/* 803B700C 003B3F4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B7010 003B3F50  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B7014 003B3F54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B7018 003B3F58  7C 08 03 A6 */	mtlr r0
/* 803B701C 003B3F5C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7020 003B3F60  4E 80 00 20 */	blr 
.endfn execute__Q23efx13TFueactCircleFP14JPABaseEmitter

.fn execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle, global
/* 803B7024 003B3F64  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 803B7028 003B3F68  7C 08 02 A6 */	mflr r0
/* 803B702C 003B3F6C  90 01 00 64 */	stw r0, 0x64(r1)
/* 803B7030 003B3F70  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803B7034 003B3F74  7C BF 2B 78 */	mr r31, r5
/* 803B7038 003B3F78  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803B703C 003B3F7C  7C 7E 1B 78 */	mr r30, r3
/* 803B7040 003B3F80  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803B7044 003B3F84  28 00 00 00 */	cmplwi r0, 0
/* 803B7048 003B3F88  40 82 00 20 */	bne .L_803B7068
/* 803B704C 003B3F8C  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B7050 003B3F90  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B7054 003B3F94  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B7058 003B3F98  38 80 02 23 */	li r4, 0x223
/* 803B705C 003B3F9C  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B7060 003B3FA0  4C C6 31 82 */	crclr 6
/* 803B7064 003B3FA4  4B C7 35 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7068:
/* 803B7068 003B3FA8  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 803B706C 003B3FAC  28 00 00 00 */	cmplwi r0, 0
/* 803B7070 003B3FB0  40 82 00 20 */	bne .L_803B7090
/* 803B7074 003B3FB4  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B7078 003B3FB8  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B707C 003B3FBC  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B7080 003B3FC0  38 80 02 24 */	li r4, 0x224
/* 803B7084 003B3FC4  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B7088 003B3FC8  4C C6 31 82 */	crclr 6
/* 803B708C 003B3FCC  4B C7 35 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7090:
/* 803B7090 003B3FD0  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 803B7094 003B3FD4  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 803B7098 003B3FD8  C0 03 00 00 */	lfs f0, 0(r3)
/* 803B709C 003B3FDC  C0 23 00 04 */	lfs f1, 4(r3)
/* 803B70A0 003B3FE0  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 803B70A4 003B3FE4  C0 03 00 08 */	lfs f0, 8(r3)
/* 803B70A8 003B3FE8  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 803B70AC 003B3FEC  80 01 00 38 */	lwz r0, 0x38(r1)
/* 803B70B0 003B3FF0  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 803B70B4 003B3FF4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 803B70B8 003B3FF8  C0 A4 00 0C */	lfs f5, 0xc(r4)
/* 803B70BC 003B3FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B70C0 003B4000  80 01 00 40 */	lwz r0, 0x40(r1)
/* 803B70C4 003B4004  90 61 00 18 */	stw r3, 0x18(r1)
/* 803B70C8 003B4008  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 803B70CC 003B400C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 803B70D0 003B4010  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803B70D4 003B4014  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803B70D8 003B4018  EC 62 28 28 */	fsubs f3, f2, f5
/* 803B70DC 003B401C  EC 80 08 28 */	fsubs f4, f0, f1
/* 803B70E0 003B4020  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 803B70E4 003B4024  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 803B70E8 003B4028  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 803B70EC 003B402C  EC 62 00 28 */	fsubs f3, f2, f0
/* 803B70F0 003B4030  C0 42 13 10 */	lfs f2, lbl_8051F670@sda21(r2)
/* 803B70F4 003B4034  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 803B70F8 003B4038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B70FC 003B403C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 803B7100 003B4040  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 803B7104 003B4044  90 01 00 2C */	stw r0, 0x2c(r1)
/* 803B7108 003B4048  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 803B710C 003B404C  90 61 00 30 */	stw r3, 0x30(r1)
/* 803B7110 003B4050  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 803B7114 003B4054  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 803B7118 003B4058  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B711C 003B405C  EC 84 01 32 */	fmuls f4, f4, f4
/* 803B7120 003B4060  EC 63 00 F2 */	fmuls f3, f3, f3
/* 803B7124 003B4064  C0 C1 00 34 */	lfs f6, 0x34(r1)
/* 803B7128 003B4068  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 803B712C 003B406C  EC A6 01 B2 */	fmuls f5, f6, f6
/* 803B7130 003B4070  EC 64 18 2A */	fadds f3, f4, f3
/* 803B7134 003B4074  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 803B7138 003B4078  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 803B713C 003B407C  EC C5 18 2A */	fadds f6, f5, f3
/* 803B7140 003B4080  FC 06 10 40 */	fcmpo cr0, f6, f2
/* 803B7144 003B4084  4C 40 13 82 */	cror 2, 0, 2
/* 803B7148 003B4088  40 82 00 0C */	bne .L_803B7154
/* 803B714C 003B408C  FC 60 30 90 */	fmr f3, f6
/* 803B7150 003B4090  48 00 00 28 */	b .L_803B7178
.L_803B7154:
/* 803B7154 003B4094  FC A0 30 34 */	frsqrte f5, f6
/* 803B7158 003B4098  C0 82 13 44 */	lfs f4, lbl_8051F6A4@sda21(r2)
/* 803B715C 003B409C  C0 42 13 48 */	lfs f2, lbl_8051F6A8@sda21(r2)
/* 803B7160 003B40A0  FC A0 28 18 */	frsp f5, f5
/* 803B7164 003B40A4  EC 65 01 72 */	fmuls f3, f5, f5
/* 803B7168 003B40A8  EC 84 01 72 */	fmuls f4, f4, f5
/* 803B716C 003B40AC  EC 46 10 FC */	fnmsubs f2, f6, f3, f2
/* 803B7170 003B40B0  EC 44 00 B2 */	fmuls f2, f4, f2
/* 803B7174 003B40B4  EC 66 00 B2 */	fmuls f3, f6, f2
.L_803B7178:
/* 803B7178 003B40B8  C0 42 13 4C */	lfs f2, lbl_8051F6AC@sda21(r2)
/* 803B717C 003B40BC  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 803B7180 003B40C0  40 81 01 0C */	ble .L_803B728C
/* 803B7184 003B40C4  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 803B7188 003B40C8  C0 62 13 40 */	lfs f3, lbl_8051F6A0@sda21(r2)
/* 803B718C 003B40CC  C0 43 48 DC */	lfs f2, __float_epsilon@l(r3)
/* 803B7190 003B40D0  EC 43 00 B2 */	fmuls f2, f3, f2
/* 803B7194 003B40D4  FC 06 10 40 */	fcmpo cr0, f6, f2
/* 803B7198 003B40D8  4C 40 13 82 */	cror 2, 0, 2
/* 803B719C 003B40DC  41 82 00 5C */	beq .L_803B71F8
/* 803B71A0 003B40E0  C0 42 13 10 */	lfs f2, lbl_8051F670@sda21(r2)
/* 803B71A4 003B40E4  FC 06 10 40 */	fcmpo cr0, f6, f2
/* 803B71A8 003B40E8  4C 40 13 82 */	cror 2, 0, 2
/* 803B71AC 003B40EC  40 82 00 08 */	bne .L_803B71B4
/* 803B71B0 003B40F0  48 00 00 24 */	b .L_803B71D4
.L_803B71B4:
/* 803B71B4 003B40F4  FC A0 30 34 */	frsqrte f5, f6
/* 803B71B8 003B40F8  C0 82 13 44 */	lfs f4, lbl_8051F6A4@sda21(r2)
/* 803B71BC 003B40FC  C0 42 13 48 */	lfs f2, lbl_8051F6A8@sda21(r2)
/* 803B71C0 003B4100  FC A0 28 18 */	frsp f5, f5
/* 803B71C4 003B4104  EC 65 01 72 */	fmuls f3, f5, f5
/* 803B71C8 003B4108  EC 84 01 72 */	fmuls f4, f4, f5
/* 803B71CC 003B410C  EC 46 10 FC */	fnmsubs f2, f6, f3, f2
/* 803B71D0 003B4110  EC C4 00 B2 */	fmuls f6, f4, f2
.L_803B71D4:
/* 803B71D4 003B4114  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 803B71D8 003B4118  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 803B71DC 003B411C  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 803B71E0 003B4120  EC 84 01 B2 */	fmuls f4, f4, f6
/* 803B71E4 003B4124  EC 63 01 B2 */	fmuls f3, f3, f6
/* 803B71E8 003B4128  EC 42 01 B2 */	fmuls f2, f2, f6
/* 803B71EC 003B412C  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 803B71F0 003B4130  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 803B71F4 003B4134  D0 41 00 34 */	stfs f2, 0x34(r1)
.L_803B71F8:
/* 803B71F8 003B4138  80 81 00 44 */	lwz r4, 0x44(r1)
/* 803B71FC 003B413C  80 61 00 48 */	lwz r3, 0x48(r1)
/* 803B7200 003B4140  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 803B7204 003B4144  90 81 00 08 */	stw r4, 8(r1)
/* 803B7208 003B4148  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 803B720C 003B414C  C0 82 13 4C */	lfs f4, lbl_8051F6AC@sda21(r2)
/* 803B7210 003B4150  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 803B7214 003B4154  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 803B7218 003B4158  EC E5 01 32 */	fmuls f7, f5, f4
/* 803B721C 003B415C  90 61 00 0C */	stw r3, 0xc(r1)
/* 803B7220 003B4160  EC C3 01 32 */	fmuls f6, f3, f4
/* 803B7224 003B4164  EC A2 01 32 */	fmuls f5, f2, f4
/* 803B7228 003B4168  C0 41 00 08 */	lfs f2, 8(r1)
/* 803B722C 003B416C  90 01 00 10 */	stw r0, 0x10(r1)
/* 803B7230 003B4170  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 803B7234 003B4174  EC 82 38 2A */	fadds f4, f2, f7
/* 803B7238 003B4178  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 803B723C 003B417C  EC 63 30 2A */	fadds f3, f3, f6
/* 803B7240 003B4180  D0 E1 00 2C */	stfs f7, 0x2c(r1)
/* 803B7244 003B4184  EC 42 28 2A */	fadds f2, f2, f5
/* 803B7248 003B4188  D0 81 00 08 */	stfs f4, 8(r1)
/* 803B724C 003B418C  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 803B7250 003B4190  80 81 00 08 */	lwz r4, 8(r1)
/* 803B7254 003B4194  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 803B7258 003B4198  80 61 00 0C */	lwz r3, 0xc(r1)
/* 803B725C 003B419C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 803B7260 003B41A0  90 81 00 20 */	stw r4, 0x20(r1)
/* 803B7264 003B41A4  90 61 00 24 */	stw r3, 0x24(r1)
/* 803B7268 003B41A8  C0 81 00 20 */	lfs f4, 0x20(r1)
/* 803B726C 003B41AC  90 01 00 28 */	stw r0, 0x28(r1)
/* 803B7270 003B41B0  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 803B7274 003B41B4  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 803B7278 003B41B8  D0 C1 00 30 */	stfs f6, 0x30(r1)
/* 803B727C 003B41BC  D0 A1 00 34 */	stfs f5, 0x34(r1)
/* 803B7280 003B41C0  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 803B7284 003B41C4  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 803B7288 003B41C8  D0 41 00 40 */	stfs f2, 0x40(r1)
.L_803B728C:
/* 803B728C 003B41CC  80 1F 00 7C */	lwz r0, 0x7c(r31)
/* 803B7290 003B41D0  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 803B7294 003B41D4  40 82 00 44 */	bne .L_803B72D8
/* 803B7298 003B41D8  C0 DF 00 84 */	lfs f6, 0x84(r31)
/* 803B729C 003B41DC  C0 42 13 1C */	lfs f2, lbl_8051F67C@sda21(r2)
/* 803B72A0 003B41E0  C0 81 00 38 */	lfs f4, 0x38(r1)
/* 803B72A4 003B41E4  C0 61 00 3C */	lfs f3, 0x3c(r1)
/* 803B72A8 003B41E8  EC E2 30 28 */	fsubs f7, f2, f6
/* 803B72AC 003B41EC  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 803B72B0 003B41F0  EC 84 01 B2 */	fmuls f4, f4, f6
/* 803B72B4 003B41F4  C0 A1 00 44 */	lfs f5, 0x44(r1)
/* 803B72B8 003B41F8  EC 63 01 B2 */	fmuls f3, f3, f6
/* 803B72BC 003B41FC  EC 42 01 B2 */	fmuls f2, f2, f6
/* 803B72C0 003B4200  EC 85 21 FA */	fmadds f4, f5, f7, f4
/* 803B72C4 003B4204  EC 21 19 FA */	fmadds f1, f1, f7, f3
/* 803B72C8 003B4208  EC 00 11 FA */	fmadds f0, f0, f7, f2
/* 803B72CC 003B420C  D0 9F 00 18 */	stfs f4, 0x18(r31)
/* 803B72D0 003B4210  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 803B72D4 003B4214  D0 1F 00 20 */	stfs f0, 0x20(r31)
.L_803B72D8:
/* 803B72D8 003B4218  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803B72DC 003B421C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803B72E0 003B4220  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803B72E4 003B4224  7C 08 03 A6 */	mtlr r0
/* 803B72E8 003B4228  38 21 00 60 */	addi r1, r1, 0x60
/* 803B72EC 003B422C  4E 80 00 20 */	blr 
.endfn execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle

.fn doExecuteEmitterOperation__Q23efx15TFueactBiriBaseFP14JPABaseEmitter, global
/* 803B72F0 003B4230  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803B72F4 003B4234  7C 08 02 A6 */	mflr r0
/* 803B72F8 003B4238  90 01 00 54 */	stw r0, 0x54(r1)
/* 803B72FC 003B423C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803B7300 003B4240  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803B7304 003B4244  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803B7308 003B4248  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803B730C 003B424C  7C 7E 1B 78 */	mr r30, r3
/* 803B7310 003B4250  7C 9F 23 78 */	mr r31, r4
/* 803B7314 003B4254  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803B7318 003B4258  28 00 00 00 */	cmplwi r0, 0
/* 803B731C 003B425C  40 82 00 20 */	bne .L_803B733C
/* 803B7320 003B4260  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B7324 003B4264  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B7328 003B4268  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B732C 003B426C  38 80 02 43 */	li r4, 0x243
/* 803B7330 003B4270  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B7334 003B4274  4C C6 31 82 */	crclr 6
/* 803B7338 003B4278  4B C7 33 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B733C:
/* 803B733C 003B427C  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803B7340 003B4280  28 00 00 00 */	cmplwi r0, 0
/* 803B7344 003B4284  40 82 00 20 */	bne .L_803B7364
/* 803B7348 003B4288  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B734C 003B428C  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B7350 003B4290  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B7354 003B4294  38 80 02 44 */	li r4, 0x244
/* 803B7358 003B4298  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B735C 003B429C  4C C6 31 82 */	crclr 6
/* 803B7360 003B42A0  4B C7 32 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7364:
/* 803B7364 003B42A4  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 803B7368 003B42A8  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 803B736C 003B42AC  C0 04 00 04 */	lfs f0, 4(r4)
/* 803B7370 003B42B0  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 803B7374 003B42B4  C0 24 00 08 */	lfs f1, 8(r4)
/* 803B7378 003B42B8  EC 00 18 28 */	fsubs f0, f0, f3
/* 803B737C 003B42BC  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803B7380 003B42C0  C0 84 00 00 */	lfs f4, 0(r4)
/* 803B7384 003B42C4  C1 43 00 0C */	lfs f10, 0xc(r3)
/* 803B7388 003B42C8  EC 21 10 28 */	fsubs f1, f1, f2
/* 803B738C 003B42CC  EC C0 00 32 */	fmuls f6, f0, f0
/* 803B7390 003B42D0  ED 04 50 28 */	fsubs f8, f4, f10
/* 803B7394 003B42D4  C3 E2 13 10 */	lfs f31, lbl_8051F670@sda21(r2)
/* 803B7398 003B42D8  EC E1 00 72 */	fmuls f7, f1, f1
/* 803B739C 003B42DC  EC 88 32 3A */	fmadds f4, f8, f8, f6
/* 803B73A0 003B42E0  ED 27 20 2A */	fadds f9, f7, f4
/* 803B73A4 003B42E4  FC 09 F8 40 */	fcmpo cr0, f9, f31
/* 803B73A8 003B42E8  40 81 00 18 */	ble .L_803B73C0
/* 803B73AC 003B42EC  40 81 00 10 */	ble .L_803B73BC
/* 803B73B0 003B42F0  FC 80 48 34 */	frsqrte f4, f9
/* 803B73B4 003B42F4  EF E4 02 72 */	fmuls f31, f4, f9
/* 803B73B8 003B42F8  48 00 00 08 */	b .L_803B73C0
.L_803B73BC:
/* 803B73BC 003B42FC  FF E0 48 90 */	fmr f31, f9
.L_803B73C0:
/* 803B73C0 003B4300  C0 A2 13 10 */	lfs f5, lbl_8051F670@sda21(r2)
/* 803B73C4 003B4304  FC 09 28 40 */	fcmpo cr0, f9, f5
/* 803B73C8 003B4308  40 81 00 20 */	ble .L_803B73E8
/* 803B73CC 003B430C  EC 88 32 3A */	fmadds f4, f8, f8, f6
/* 803B73D0 003B4310  EC C7 20 2A */	fadds f6, f7, f4
/* 803B73D4 003B4314  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 803B73D8 003B4318  40 81 00 14 */	ble .L_803B73EC
/* 803B73DC 003B431C  FC 80 30 34 */	frsqrte f4, f6
/* 803B73E0 003B4320  EC C4 01 B2 */	fmuls f6, f4, f6
/* 803B73E4 003B4324  48 00 00 08 */	b .L_803B73EC
.L_803B73E8:
/* 803B73E8 003B4328  FC C0 28 90 */	fmr f6, f5
.L_803B73EC:
/* 803B73EC 003B432C  C0 82 13 10 */	lfs f4, lbl_8051F670@sda21(r2)
/* 803B73F0 003B4330  FC 06 20 40 */	fcmpo cr0, f6, f4
/* 803B73F4 003B4334  40 81 00 18 */	ble .L_803B740C
/* 803B73F8 003B4338  C0 82 13 1C */	lfs f4, lbl_8051F67C@sda21(r2)
/* 803B73FC 003B433C  EC 84 30 24 */	fdivs f4, f4, f6
/* 803B7400 003B4340  ED 08 01 32 */	fmuls f8, f8, f4
/* 803B7404 003B4344  EC 00 01 32 */	fmuls f0, f0, f4
/* 803B7408 003B4348  EC 21 01 32 */	fmuls f1, f1, f4
.L_803B740C:
/* 803B740C 003B434C  C0 A2 13 10 */	lfs f5, lbl_8051F670@sda21(r2)
/* 803B7410 003B4350  38 61 00 08 */	addi r3, r1, 8
/* 803B7414 003B4354  C0 C2 13 1C */	lfs f6, lbl_8051F67C@sda21(r2)
/* 803B7418 003B4358  38 9F 00 68 */	addi r4, r31, 0x68
/* 803B741C 003B435C  ED 25 00 32 */	fmuls f9, f5, f0
/* 803B7420 003B4360  D1 01 00 10 */	stfs f8, 0x10(r1)
/* 803B7424 003B4364  EC 85 00 72 */	fmuls f4, f5, f1
/* 803B7428 003B4368  38 BF 00 A4 */	addi r5, r31, 0xa4
/* 803B742C 003B436C  D1 41 00 14 */	stfs f10, 0x14(r1)
/* 803B7430 003B4370  EC E6 4A 3C */	fnmsubs f7, f6, f8, f9
/* 803B7434 003B4374  EC C6 48 78 */	fmsubs f6, f6, f1, f9
/* 803B7438 003B4378  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B743C 003B437C  ED 25 22 38 */	fmsubs f9, f5, f8, f4
/* 803B7440 003B4380  EC 88 01 F2 */	fmuls f4, f8, f7
/* 803B7444 003B4384  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 803B7448 003B4388  EC 60 01 B2 */	fmuls f3, f0, f6
/* 803B744C 003B438C  EC A1 02 72 */	fmuls f5, f1, f9
/* 803B7450 003B4390  D0 C1 00 08 */	stfs f6, 8(r1)
/* 803B7454 003B4394  EC 81 21 B8 */	fmsubs f4, f1, f6, f4
/* 803B7458 003B4398  EC 68 1A 78 */	fmsubs f3, f8, f9, f3
/* 803B745C 003B439C  D1 21 00 18 */	stfs f9, 0x18(r1)
/* 803B7460 003B43A0  EC 00 29 F8 */	fmsubs f0, f0, f7, f5
/* 803B7464 003B43A4  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 803B7468 003B43A8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803B746C 003B43AC  D0 E1 00 28 */	stfs f7, 0x28(r1)
/* 803B7470 003B43B0  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 803B7474 003B43B4  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 803B7478 003B43B8  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 803B747C 003B43BC  4B CD C8 A1 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803B7480 003B43C0  C0 02 13 4C */	lfs f0, lbl_8051F6AC@sda21(r2)
/* 803B7484 003B43C4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803B7488 003B43C8  40 81 00 08 */	ble .L_803B7490
/* 803B748C 003B43CC  FF E0 00 90 */	fmr f31, f0
.L_803B7490:
/* 803B7490 003B43D0  C0 02 13 50 */	lfs f0, lbl_8051F6B0@sda21(r2)
/* 803B7494 003B43D4  EC 1F 00 24 */	fdivs f0, f31, f0
/* 803B7498 003B43D8  D0 1F 00 98 */	stfs f0, 0x98(r31)
/* 803B749C 003B43DC  D0 1F 00 9C */	stfs f0, 0x9c(r31)
/* 803B74A0 003B43E0  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 803B74A4 003B43E4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803B74A8 003B43E8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803B74AC 003B43EC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803B74B0 003B43F0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803B74B4 003B43F4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803B74B8 003B43F8  7C 08 03 A6 */	mtlr r0
/* 803B74BC 003B43FC  38 21 00 50 */	addi r1, r1, 0x50
/* 803B74C0 003B4400  4E 80 00 20 */	blr 
.endfn doExecuteEmitterOperation__Q23efx15TFueactBiriBaseFP14JPABaseEmitter

.fn "createSimpleDead__3efxFR10Vector3<f>l", global
/* 803B74C4 003B4404  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803B74C8 003B4408  7C 08 02 A6 */	mflr r0
/* 803B74CC 003B440C  90 01 00 44 */	stw r0, 0x44(r1)
/* 803B74D0 003B4410  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803B74D4 003B4414  7C 7F 1B 78 */	mr r31, r3
/* 803B74D8 003B4418  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803B74DC 003B441C  7C 9E 23 78 */	mr r30, r4
/* 803B74E0 003B4420  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B74E4 003B4424  28 00 00 00 */	cmplwi r0, 0
/* 803B74E8 003B4428  40 82 00 20 */	bne .L_803B7508
/* 803B74EC 003B442C  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B74F0 003B4430  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B74F4 003B4434  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B74F8 003B4438  38 80 02 6A */	li r4, 0x26a
/* 803B74FC 003B443C  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B7500 003B4440  4C C6 31 82 */	crclr 6
/* 803B7504 003B4444  4B C7 31 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7508:
/* 803B7508 003B4448  2C 1E 00 05 */	cmpwi r30, 5
/* 803B750C 003B444C  41 82 00 08 */	beq .L_803B7514
/* 803B7510 003B4450  48 00 00 98 */	b .L_803B75A8
.L_803B7514:
/* 803B7514 003B4454  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 803B7518 003B4458  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 803B751C 003B445C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 803B7520 003B4460  3C 60 80 4F */	lis r3, __vt__Q23efx19TEnemyDead_ArgScale@ha
/* 803B7524 003B4464  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7528 003B4468  38 84 6A 78 */	addi r4, r4, __vt__Q23efx8TSimple1@l
/* 803B752C 003B446C  38 00 00 52 */	li r0, 0x52
/* 803B7530 003B4470  38 E0 00 00 */	li r7, 0
/* 803B7534 003B4474  90 81 00 14 */	stw r4, 0x14(r1)
/* 803B7538 003B4478  38 C3 86 74 */	addi r6, r3, __vt__Q23efx19TEnemyDead_ArgScale@l
/* 803B753C 003B447C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803B7540 003B4480  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 803B7544 003B4484  B0 01 00 18 */	sth r0, 0x18(r1)
/* 803B7548 003B4488  38 A4 A7 EC */	addi r5, r4, __vt__Q23efx3Arg@l
/* 803B754C 003B448C  C0 02 13 44 */	lfs f0, lbl_8051F6A4@sda21(r2)
/* 803B7550 003B4490  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 803B7554 003B4494  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 803B7558 003B4498  38 61 00 14 */	addi r3, r1, 0x14
/* 803B755C 003B449C  38 81 00 20 */	addi r4, r1, 0x20
/* 803B7560 003B44A0  90 C1 00 14 */	stw r6, 0x14(r1)
/* 803B7564 003B44A4  81 1F 00 00 */	lwz r8, 0(r31)
/* 803B7568 003B44A8  80 FF 00 04 */	lwz r7, 4(r31)
/* 803B756C 003B44AC  80 DF 00 08 */	lwz r6, 8(r31)
/* 803B7570 003B44B0  91 01 00 08 */	stw r8, 8(r1)
/* 803B7574 003B44B4  90 E1 00 0C */	stw r7, 0xc(r1)
/* 803B7578 003B44B8  C0 61 00 08 */	lfs f3, 8(r1)
/* 803B757C 003B44BC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 803B7580 003B44C0  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 803B7584 003B44C4  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803B7588 003B44C8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 803B758C 003B44CC  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 803B7590 003B44D0  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 803B7594 003B44D4  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 803B7598 003B44D8  90 01 00 20 */	stw r0, 0x20(r1)
/* 803B759C 003B44DC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 803B75A0 003B44E0  48 01 0A 31 */	bl create__Q23efx19TEnemyDead_ArgScaleFPQ23efx3Arg
/* 803B75A4 003B44E4  48 00 00 14 */	b .L_803B75B8
.L_803B75A8:
/* 803B75A8 003B44E8  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B75AC 003B44EC  7F E4 FB 78 */	mr r4, r31
/* 803B75B0 003B44F0  7F C5 F3 78 */	mr r5, r30
/* 803B75B4 003B44F4  48 00 F1 E5 */	bl "createS_Dead__Q23efx12TPkEffectMgrFR10Vector3<f>l"
.L_803B75B8:
/* 803B75B8 003B44F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803B75BC 003B44FC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803B75C0 003B4500  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803B75C4 003B4504  7C 08 03 A6 */	mtlr r0
/* 803B75C8 003B4508  38 21 00 40 */	addi r1, r1, 0x40
/* 803B75CC 003B450C  4E 80 00 20 */	blr 
.endfn "createSimpleDead__3efxFR10Vector3<f>l"

.fn "createSimpleChinka__3efxFR10Vector3<f>", global
/* 803B75D0 003B4510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B75D4 003B4514  7C 08 02 A6 */	mflr r0
/* 803B75D8 003B4518  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B75DC 003B451C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B75E0 003B4520  7C 7F 1B 78 */	mr r31, r3
/* 803B75E4 003B4524  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B75E8 003B4528  28 00 00 00 */	cmplwi r0, 0
/* 803B75EC 003B452C  40 82 00 20 */	bne .L_803B760C
/* 803B75F0 003B4530  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B75F4 003B4534  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B75F8 003B4538  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B75FC 003B453C  38 80 02 90 */	li r4, 0x290
/* 803B7600 003B4540  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B7604 003B4544  4C C6 31 82 */	crclr 6
/* 803B7608 003B4548  4B C7 30 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B760C:
/* 803B760C 003B454C  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B7610 003B4550  7F E4 FB 78 */	mr r4, r31
/* 803B7614 003B4554  48 00 F3 A1 */	bl "createS_Chinka__Q23efx12TPkEffectMgrFR10Vector3<f>"
/* 803B7618 003B4558  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B761C 003B455C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B7620 003B4560  7C 08 03 A6 */	mtlr r0
/* 803B7624 003B4564  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7628 003B4568  4E 80 00 20 */	blr 
.endfn "createSimpleChinka__3efxFR10Vector3<f>"

.fn "createSimpleGedoku__3efxFR10Vector3<f>", global
/* 803B762C 003B456C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B7630 003B4570  7C 08 02 A6 */	mflr r0
/* 803B7634 003B4574  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7638 003B4578  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B763C 003B457C  7C 7F 1B 78 */	mr r31, r3
/* 803B7640 003B4580  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B7644 003B4584  28 00 00 00 */	cmplwi r0, 0
/* 803B7648 003B4588  40 82 00 20 */	bne .L_803B7668
/* 803B764C 003B458C  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B7650 003B4590  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B7654 003B4594  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B7658 003B4598  38 80 02 96 */	li r4, 0x296
/* 803B765C 003B459C  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B7660 003B45A0  4C C6 31 82 */	crclr 6
/* 803B7664 003B45A4  4B C7 2F DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7668:
/* 803B7668 003B45A8  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B766C 003B45AC  7F E4 FB 78 */	mr r4, r31
/* 803B7670 003B45B0  48 00 F4 0D */	bl "createS_Gedoku__Q23efx12TPkEffectMgrFR10Vector3<f>"
/* 803B7674 003B45B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B7678 003B45B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B767C 003B45BC  7C 08 03 A6 */	mtlr r0
/* 803B7680 003B45C0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7684 003B45C4  4E 80 00 20 */	blr 
.endfn "createSimpleGedoku__3efxFR10Vector3<f>"

.fn "createSimpleBlackDrop__3efxFR10Vector3<f>", global
/* 803B7688 003B45C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B768C 003B45CC  7C 08 02 A6 */	mflr r0
/* 803B7690 003B45D0  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 803B7694 003B45D4  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple3@ha
/* 803B7698 003B45D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B769C 003B45DC  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803B76A0 003B45E0  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803B76A4 003B45E4  39 46 A7 F8 */	addi r10, r6, __vt__Q23efx5TBase@l
/* 803B76A8 003B45E8  90 01 00 08 */	stw r0, 8(r1)
/* 803B76AC 003B45EC  39 25 6A 50 */	addi r9, r5, __vt__Q23efx8TSimple3@l
/* 803B76B0 003B45F0  3C 80 80 4E */	lis r4, __vt__Q23efx12TPkBlackDrop@ha
/* 803B76B4 003B45F4  39 00 01 4B */	li r8, 0x14b
/* 803B76B8 003B45F8  C0 03 00 00 */	lfs f0, 0(r3)
/* 803B76BC 003B45FC  38 04 72 04 */	addi r0, r4, __vt__Q23efx12TPkBlackDrop@l
/* 803B76C0 003B4600  38 E0 01 4C */	li r7, 0x14c
/* 803B76C4 003B4604  38 C0 01 4D */	li r6, 0x14d
/* 803B76C8 003B4608  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803B76CC 003B460C  38 A0 00 00 */	li r5, 0
/* 803B76D0 003B4610  38 81 00 08 */	addi r4, r1, 8
/* 803B76D4 003B4614  C0 03 00 04 */	lfs f0, 4(r3)
/* 803B76D8 003B4618  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803B76DC 003B461C  C0 03 00 08 */	lfs f0, 8(r3)
/* 803B76E0 003B4620  38 61 00 18 */	addi r3, r1, 0x18
/* 803B76E4 003B4624  91 41 00 18 */	stw r10, 0x18(r1)
/* 803B76E8 003B4628  91 21 00 18 */	stw r9, 0x18(r1)
/* 803B76EC 003B462C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803B76F0 003B4630  B1 01 00 1C */	sth r8, 0x1c(r1)
/* 803B76F4 003B4634  B0 E1 00 1E */	sth r7, 0x1e(r1)
/* 803B76F8 003B4638  B0 C1 00 20 */	sth r6, 0x20(r1)
/* 803B76FC 003B463C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 803B7700 003B4640  90 A1 00 28 */	stw r5, 0x28(r1)
/* 803B7704 003B4644  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 803B7708 003B4648  90 01 00 18 */	stw r0, 0x18(r1)
/* 803B770C 003B464C  4B FF 79 B1 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 803B7710 003B4650  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B7714 003B4654  7C 08 03 A6 */	mtlr r0
/* 803B7718 003B4658  38 21 00 30 */	addi r1, r1, 0x30
/* 803B771C 003B465C  4E 80 00 20 */	blr 
.endfn "createSimpleBlackDrop__3efxFR10Vector3<f>"

.fn "createSimpleGate1Attack__3efxFR10Vector3<f>", global
/* 803B7720 003B4660  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B7724 003B4664  7C 08 02 A6 */	mflr r0
/* 803B7728 003B4668  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 803B772C 003B466C  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple2@ha
/* 803B7730 003B4670  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B7734 003B4674  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803B7738 003B4678  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803B773C 003B467C  39 26 A7 F8 */	addi r9, r6, __vt__Q23efx5TBase@l
/* 803B7740 003B4680  90 01 00 18 */	stw r0, 0x18(r1)
/* 803B7744 003B4684  39 05 6A 64 */	addi r8, r5, __vt__Q23efx8TSimple2@l
/* 803B7748 003B4688  3C 80 80 4E */	lis r4, __vt__Q23efx12TGate1Attack@ha
/* 803B774C 003B468C  38 E0 00 76 */	li r7, 0x76
/* 803B7750 003B4690  C0 03 00 00 */	lfs f0, 0(r3)
/* 803B7754 003B4694  38 04 71 F0 */	addi r0, r4, __vt__Q23efx12TGate1Attack@l
/* 803B7758 003B4698  38 C0 00 77 */	li r6, 0x77
/* 803B775C 003B469C  38 A0 00 00 */	li r5, 0
/* 803B7760 003B46A0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803B7764 003B46A4  38 81 00 18 */	addi r4, r1, 0x18
/* 803B7768 003B46A8  C0 03 00 04 */	lfs f0, 4(r3)
/* 803B776C 003B46AC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B7770 003B46B0  C0 03 00 08 */	lfs f0, 8(r3)
/* 803B7774 003B46B4  38 61 00 08 */	addi r3, r1, 8
/* 803B7778 003B46B8  91 21 00 08 */	stw r9, 8(r1)
/* 803B777C 003B46BC  91 01 00 08 */	stw r8, 8(r1)
/* 803B7780 003B46C0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803B7784 003B46C4  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 803B7788 003B46C8  B0 C1 00 0E */	sth r6, 0xe(r1)
/* 803B778C 003B46CC  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803B7790 003B46D0  90 A1 00 14 */	stw r5, 0x14(r1)
/* 803B7794 003B46D4  90 01 00 08 */	stw r0, 8(r1)
/* 803B7798 003B46D8  4B FF 78 7D */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803B779C 003B46DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B77A0 003B46E0  7C 08 03 A6 */	mtlr r0
/* 803B77A4 003B46E4  38 21 00 30 */	addi r1, r1, 0x30
/* 803B77A8 003B46E8  4E 80 00 20 */	blr 
.endfn "createSimpleGate1Attack__3efxFR10Vector3<f>"

.fn "createSimplePkAp__3efxFR10Vector3<f>", global
/* 803B77AC 003B46EC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B77B0 003B46F0  7C 08 02 A6 */	mflr r0
/* 803B77B4 003B46F4  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 803B77B8 003B46F8  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple2@ha
/* 803B77BC 003B46FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B77C0 003B4700  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803B77C4 003B4704  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803B77C8 003B4708  39 26 A7 F8 */	addi r9, r6, __vt__Q23efx5TBase@l
/* 803B77CC 003B470C  90 01 00 18 */	stw r0, 0x18(r1)
/* 803B77D0 003B4710  39 05 6A 64 */	addi r8, r5, __vt__Q23efx8TSimple2@l
/* 803B77D4 003B4714  3C 80 80 4B */	lis r4, __vt__Q23efx5TPkAp@ha
/* 803B77D8 003B4718  38 E0 01 46 */	li r7, 0x146
/* 803B77DC 003B471C  C0 03 00 00 */	lfs f0, 0(r3)
/* 803B77E0 003B4720  38 04 45 8C */	addi r0, r4, __vt__Q23efx5TPkAp@l
/* 803B77E4 003B4724  38 C0 01 47 */	li r6, 0x147
/* 803B77E8 003B4728  38 A0 00 00 */	li r5, 0
/* 803B77EC 003B472C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803B77F0 003B4730  38 81 00 18 */	addi r4, r1, 0x18
/* 803B77F4 003B4734  C0 03 00 04 */	lfs f0, 4(r3)
/* 803B77F8 003B4738  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B77FC 003B473C  C0 03 00 08 */	lfs f0, 8(r3)
/* 803B7800 003B4740  38 61 00 08 */	addi r3, r1, 8
/* 803B7804 003B4744  91 21 00 08 */	stw r9, 8(r1)
/* 803B7808 003B4748  91 01 00 08 */	stw r8, 8(r1)
/* 803B780C 003B474C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803B7810 003B4750  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 803B7814 003B4754  B0 C1 00 0E */	sth r6, 0xe(r1)
/* 803B7818 003B4758  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803B781C 003B475C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 803B7820 003B4760  90 01 00 08 */	stw r0, 8(r1)
/* 803B7824 003B4764  4B FF 77 F1 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803B7828 003B4768  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B782C 003B476C  7C 08 03 A6 */	mtlr r0
/* 803B7830 003B4770  38 21 00 30 */	addi r1, r1, 0x30
/* 803B7834 003B4774  4E 80 00 20 */	blr 
.endfn "createSimplePkAp__3efxFR10Vector3<f>"

.fn "createSimpleWaterOff__3efxFR10Vector3<f>", global
/* 803B7838 003B4778  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B783C 003B477C  7C 08 02 A6 */	mflr r0
/* 803B7840 003B4780  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7844 003B4784  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B7848 003B4788  7C 7F 1B 78 */	mr r31, r3
/* 803B784C 003B478C  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B7850 003B4790  28 00 00 00 */	cmplwi r0, 0
/* 803B7854 003B4794  40 82 00 20 */	bne .L_803B7874
/* 803B7858 003B4798  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B785C 003B479C  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B7860 003B47A0  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B7864 003B47A4  38 80 02 B1 */	li r4, 0x2b1
/* 803B7868 003B47A8  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B786C 003B47AC  4C C6 31 82 */	crclr 6
/* 803B7870 003B47B0  4B C7 2D D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7874:
/* 803B7874 003B47B4  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B7878 003B47B8  7F E4 FB 78 */	mr r4, r31
/* 803B787C 003B47BC  48 00 F2 C9 */	bl "createS_WaterOff__Q23efx12TPkEffectMgrFR10Vector3<f>"
/* 803B7880 003B47C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B7884 003B47C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B7888 003B47C8  7C 08 03 A6 */	mtlr r0
/* 803B788C 003B47CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7890 003B47D0  4E 80 00 20 */	blr 
.endfn "createSimpleWaterOff__3efxFR10Vector3<f>"

.fn "createSimpleDive__3efxFR10Vector3<f>", global
/* 803B7894 003B47D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B7898 003B47D8  7C 08 02 A6 */	mflr r0
/* 803B789C 003B47DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B78A0 003B47E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B78A4 003B47E4  7C 7F 1B 78 */	mr r31, r3
/* 803B78A8 003B47E8  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B78AC 003B47EC  28 00 00 00 */	cmplwi r0, 0
/* 803B78B0 003B47F0  40 82 00 20 */	bne .L_803B78D0
/* 803B78B4 003B47F4  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B78B8 003B47F8  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B78BC 003B47FC  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B78C0 003B4800  38 80 02 B7 */	li r4, 0x2b7
/* 803B78C4 003B4804  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B78C8 003B4808  4C C6 31 82 */	crclr 6
/* 803B78CC 003B480C  4B C7 2D 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B78D0:
/* 803B78D0 003B4810  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B78D4 003B4814  7F E4 FB 78 */	mr r4, r31
/* 803B78D8 003B4818  48 00 F3 35 */	bl "createS_Dive__Q23efx12TPkEffectMgrFR10Vector3<f>"
/* 803B78DC 003B481C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B78E0 003B4820  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B78E4 003B4824  7C 08 03 A6 */	mtlr r0
/* 803B78E8 003B4828  38 21 00 10 */	addi r1, r1, 0x10
/* 803B78EC 003B482C  4E 80 00 20 */	blr 
.endfn "createSimpleDive__3efxFR10Vector3<f>"

.fn "createSimpleChiru__3efxFR10Vector3<f>l", global
/* 803B78F0 003B4830  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B78F4 003B4834  7C 08 02 A6 */	mflr r0
/* 803B78F8 003B4838  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B78FC 003B483C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B7900 003B4840  7C 9F 23 78 */	mr r31, r4
/* 803B7904 003B4844  93 C1 00 08 */	stw r30, 8(r1)
/* 803B7908 003B4848  7C 7E 1B 78 */	mr r30, r3
/* 803B790C 003B484C  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B7910 003B4850  28 00 00 00 */	cmplwi r0, 0
/* 803B7914 003B4854  40 82 00 20 */	bne .L_803B7934
/* 803B7918 003B4858  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B791C 003B485C  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B7920 003B4860  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B7924 003B4864  38 80 02 BD */	li r4, 0x2bd
/* 803B7928 003B4868  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B792C 003B486C  4C C6 31 82 */	crclr 6
/* 803B7930 003B4870  4B C7 2D 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7934:
/* 803B7934 003B4874  2C 1F 00 03 */	cmpwi r31, 3
/* 803B7938 003B4878  40 80 00 10 */	bge .L_803B7948
/* 803B793C 003B487C  2C 1F 00 00 */	cmpwi r31, 0
/* 803B7940 003B4880  40 80 00 14 */	bge .L_803B7954
/* 803B7944 003B4884  48 00 00 2C */	b .L_803B7970
.L_803B7948:
/* 803B7948 003B4888  2C 1F 00 05 */	cmpwi r31, 5
/* 803B794C 003B488C  40 80 00 24 */	bge .L_803B7970
/* 803B7950 003B4890  48 00 00 14 */	b .L_803B7964
.L_803B7954:
/* 803B7954 003B4894  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B7958 003B4898  7F C4 F3 78 */	mr r4, r30
/* 803B795C 003B489C  48 00 F3 79 */	bl "createS_Chiru__Q23efx12TPkEffectMgrFR10Vector3<f>"
/* 803B7960 003B48A0  48 00 00 10 */	b .L_803B7970
.L_803B7964:
/* 803B7964 003B48A4  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B7968 003B48A8  7F C4 F3 78 */	mr r4, r30
/* 803B796C 003B48AC  48 00 F5 39 */	bl "createS_ChiruRed__Q23efx12TPkEffectMgrFR10Vector3<f>"
.L_803B7970:
/* 803B7970 003B48B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B7974 003B48B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B7978 003B48B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B797C 003B48BC  7C 08 03 A6 */	mtlr r0
/* 803B7980 003B48C0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7984 003B48C4  4E 80 00 20 */	blr 
.endfn "createSimpleChiru__3efxFR10Vector3<f>l"

.fn "createSimpleInattack__3efxFR10Vector3<f>", global
/* 803B7988 003B48C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B798C 003B48CC  7C 08 02 A6 */	mflr r0
/* 803B7990 003B48D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7994 003B48D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B7998 003B48D8  7C 7F 1B 78 */	mr r31, r3
/* 803B799C 003B48DC  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B79A0 003B48E0  28 00 00 00 */	cmplwi r0, 0
/* 803B79A4 003B48E4  40 82 00 20 */	bne .L_803B79C4
/* 803B79A8 003B48E8  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B79AC 003B48EC  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B79B0 003B48F0  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B79B4 003B48F4  38 80 02 CD */	li r4, 0x2cd
/* 803B79B8 003B48F8  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B79BC 003B48FC  4C C6 31 82 */	crclr 6
/* 803B79C0 003B4900  4B C7 2C 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B79C4:
/* 803B79C4 003B4904  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B79C8 003B4908  7F E4 FB 78 */	mr r4, r31
/* 803B79CC 003B490C  48 00 F3 7D */	bl "createS_Inattack__Q23efx12TPkEffectMgrFR10Vector3<f>"
/* 803B79D0 003B4910  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B79D4 003B4914  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B79D8 003B4918  7C 08 03 A6 */	mtlr r0
/* 803B79DC 003B491C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B79E0 003B4920  4E 80 00 20 */	blr 
.endfn "createSimpleInattack__3efxFR10Vector3<f>"

.fn "createSimpleInstick__3efxFR10Vector3<f>", global
/* 803B79E4 003B4924  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B79E8 003B4928  7C 08 02 A6 */	mflr r0
/* 803B79EC 003B492C  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 803B79F0 003B4930  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple1@ha
/* 803B79F4 003B4934  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B79F8 003B4938  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803B79FC 003B493C  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803B7A00 003B4940  39 06 A7 F8 */	addi r8, r6, __vt__Q23efx5TBase@l
/* 803B7A04 003B4944  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7A08 003B4948  38 E5 6A 78 */	addi r7, r5, __vt__Q23efx8TSimple1@l
/* 803B7A0C 003B494C  3C 80 80 4E */	lis r4, __vt__Q23efx10TPkInstick@ha
/* 803B7A10 003B4950  38 C0 01 64 */	li r6, 0x164
/* 803B7A14 003B4954  C0 03 00 00 */	lfs f0, 0(r3)
/* 803B7A18 003B4958  38 04 71 DC */	addi r0, r4, __vt__Q23efx10TPkInstick@l
/* 803B7A1C 003B495C  38 A0 00 00 */	li r5, 0
/* 803B7A20 003B4960  38 81 00 14 */	addi r4, r1, 0x14
/* 803B7A24 003B4964  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803B7A28 003B4968  C0 03 00 04 */	lfs f0, 4(r3)
/* 803B7A2C 003B496C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803B7A30 003B4970  C0 03 00 08 */	lfs f0, 8(r3)
/* 803B7A34 003B4974  38 61 00 08 */	addi r3, r1, 8
/* 803B7A38 003B4978  91 01 00 08 */	stw r8, 8(r1)
/* 803B7A3C 003B497C  90 E1 00 08 */	stw r7, 8(r1)
/* 803B7A40 003B4980  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B7A44 003B4984  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 803B7A48 003B4988  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803B7A4C 003B498C  90 01 00 08 */	stw r0, 8(r1)
/* 803B7A50 003B4990  4B FF 75 35 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803B7A54 003B4994  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B7A58 003B4998  7C 08 03 A6 */	mtlr r0
/* 803B7A5C 003B499C  38 21 00 30 */	addi r1, r1, 0x30
/* 803B7A60 003B49A0  4E 80 00 20 */	blr 
.endfn "createSimpleInstick__3efxFR10Vector3<f>"

.fn "createSimpleGate2Attack__3efxFR10Vector3<f>", global
/* 803B7A64 003B49A4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B7A68 003B49A8  7C 08 02 A6 */	mflr r0
/* 803B7A6C 003B49AC  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 803B7A70 003B49B0  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple2@ha
/* 803B7A74 003B49B4  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B7A78 003B49B8  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803B7A7C 003B49BC  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803B7A80 003B49C0  39 26 A7 F8 */	addi r9, r6, __vt__Q23efx5TBase@l
/* 803B7A84 003B49C4  90 01 00 18 */	stw r0, 0x18(r1)
/* 803B7A88 003B49C8  39 05 6A 64 */	addi r8, r5, __vt__Q23efx8TSimple2@l
/* 803B7A8C 003B49CC  3C 80 80 4E */	lis r4, __vt__Q23efx12TGate2Attack@ha
/* 803B7A90 003B49D0  38 E0 00 7A */	li r7, 0x7a
/* 803B7A94 003B49D4  C0 03 00 00 */	lfs f0, 0(r3)
/* 803B7A98 003B49D8  38 04 71 C8 */	addi r0, r4, __vt__Q23efx12TGate2Attack@l
/* 803B7A9C 003B49DC  38 C0 00 7B */	li r6, 0x7b
/* 803B7AA0 003B49E0  38 A0 00 00 */	li r5, 0
/* 803B7AA4 003B49E4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803B7AA8 003B49E8  38 81 00 18 */	addi r4, r1, 0x18
/* 803B7AAC 003B49EC  C0 03 00 04 */	lfs f0, 4(r3)
/* 803B7AB0 003B49F0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B7AB4 003B49F4  C0 03 00 08 */	lfs f0, 8(r3)
/* 803B7AB8 003B49F8  38 61 00 08 */	addi r3, r1, 8
/* 803B7ABC 003B49FC  91 21 00 08 */	stw r9, 8(r1)
/* 803B7AC0 003B4A00  91 01 00 08 */	stw r8, 8(r1)
/* 803B7AC4 003B4A04  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803B7AC8 003B4A08  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 803B7ACC 003B4A0C  B0 C1 00 0E */	sth r6, 0xe(r1)
/* 803B7AD0 003B4A10  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803B7AD4 003B4A14  90 A1 00 14 */	stw r5, 0x14(r1)
/* 803B7AD8 003B4A18  90 01 00 08 */	stw r0, 8(r1)
/* 803B7ADC 003B4A1C  4B FF 75 39 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803B7AE0 003B4A20  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B7AE4 003B4A24  7C 08 03 A6 */	mtlr r0
/* 803B7AE8 003B4A28  38 21 00 30 */	addi r1, r1, 0x30
/* 803B7AEC 003B4A2C  4E 80 00 20 */	blr 
.endfn "createSimpleGate2Attack__3efxFR10Vector3<f>"

.fn "createSimpleBridgeAttack__3efxFR10Vector3<f>", global
/* 803B7AF0 003B4A30  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B7AF4 003B4A34  7C 08 02 A6 */	mflr r0
/* 803B7AF8 003B4A38  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 803B7AFC 003B4A3C  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple1@ha
/* 803B7B00 003B4A40  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B7B04 003B4A44  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803B7B08 003B4A48  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803B7B0C 003B4A4C  39 06 A7 F8 */	addi r8, r6, __vt__Q23efx5TBase@l
/* 803B7B10 003B4A50  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7B14 003B4A54  38 E5 6A 78 */	addi r7, r5, __vt__Q23efx8TSimple1@l
/* 803B7B18 003B4A58  3C 80 80 4E */	lis r4, __vt__Q23efx13TBridgeAttack@ha
/* 803B7B1C 003B4A5C  38 C0 00 10 */	li r6, 0x10
/* 803B7B20 003B4A60  C0 03 00 00 */	lfs f0, 0(r3)
/* 803B7B24 003B4A64  38 04 71 B4 */	addi r0, r4, __vt__Q23efx13TBridgeAttack@l
/* 803B7B28 003B4A68  38 A0 00 00 */	li r5, 0
/* 803B7B2C 003B4A6C  38 81 00 14 */	addi r4, r1, 0x14
/* 803B7B30 003B4A70  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803B7B34 003B4A74  C0 03 00 04 */	lfs f0, 4(r3)
/* 803B7B38 003B4A78  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803B7B3C 003B4A7C  C0 03 00 08 */	lfs f0, 8(r3)
/* 803B7B40 003B4A80  38 61 00 08 */	addi r3, r1, 8
/* 803B7B44 003B4A84  91 01 00 08 */	stw r8, 8(r1)
/* 803B7B48 003B4A88  90 E1 00 08 */	stw r7, 8(r1)
/* 803B7B4C 003B4A8C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B7B50 003B4A90  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 803B7B54 003B4A94  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803B7B58 003B4A98  90 01 00 08 */	stw r0, 8(r1)
/* 803B7B5C 003B4A9C  4B FF 74 29 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803B7B60 003B4AA0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B7B64 003B4AA4  7C 08 03 A6 */	mtlr r0
/* 803B7B68 003B4AA8  38 21 00 30 */	addi r1, r1, 0x30
/* 803B7B6C 003B4AAC  4E 80 00 20 */	blr 
.endfn "createSimpleBridgeAttack__3efxFR10Vector3<f>"

.fn "createSimpleWalksmoke__3efxFR10Vector3<f>", global
/* 803B7B70 003B4AB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B7B74 003B4AB4  7C 08 02 A6 */	mflr r0
/* 803B7B78 003B4AB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7B7C 003B4ABC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B7B80 003B4AC0  7C 7F 1B 78 */	mr r31, r3
/* 803B7B84 003B4AC4  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B7B88 003B4AC8  28 00 00 00 */	cmplwi r0, 0
/* 803B7B8C 003B4ACC  40 82 00 20 */	bne .L_803B7BAC
/* 803B7B90 003B4AD0  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B7B94 003B4AD4  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B7B98 003B4AD8  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B7B9C 003B4ADC  38 80 02 E8 */	li r4, 0x2e8
/* 803B7BA0 003B4AE0  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B7BA4 003B4AE4  4C C6 31 82 */	crclr 6
/* 803B7BA8 003B4AE8  4B C7 2A 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7BAC:
/* 803B7BAC 003B4AEC  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B7BB0 003B4AF0  7F E4 FB 78 */	mr r4, r31
/* 803B7BB4 003B4AF4  48 00 F2 09 */	bl "createS_Walksmoke__Q23efx12TPkEffectMgrFR10Vector3<f>"
/* 803B7BB8 003B4AF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B7BBC 003B4AFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B7BC0 003B4B00  7C 08 03 A6 */	mtlr r0
/* 803B7BC4 003B4B04  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7BC8 003B4B08  4E 80 00 20 */	blr 
.endfn "createSimpleWalksmoke__3efxFR10Vector3<f>"

.fn "createSimpleGlow2__3efxFR10Vector3<f>", global
/* 803B7BCC 003B4B0C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B7BD0 003B4B10  7C 08 02 A6 */	mflr r0
/* 803B7BD4 003B4B14  3C A0 80 4C */	lis r5, __vt__Q23efx8TPkGlow2@ha
/* 803B7BD8 003B4B18  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803B7BDC 003B4B1C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B7BE0 003B4B20  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803B7BE4 003B4B24  38 C0 00 00 */	li r6, 0
/* 803B7BE8 003B4B28  38 E0 01 60 */	li r7, 0x160
/* 803B7BEC 003B4B2C  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 803B7BF0 003B4B30  90 01 00 18 */	stw r0, 0x18(r1)
/* 803B7BF4 003B4B34  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 803B7BF8 003B4B38  38 A5 15 20 */	addi r5, r5, __vt__Q23efx8TPkGlow2@l
/* 803B7BFC 003B4B3C  90 01 00 18 */	stw r0, 0x18(r1)
/* 803B7C00 003B4B40  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803B7C04 003B4B44  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803B7C08 003B4B48  38 80 01 5F */	li r4, 0x15f
/* 803B7C0C 003B4B4C  B0 E1 00 1E */	sth r7, 0x1e(r1)
/* 803B7C10 003B4B50  B0 81 00 1C */	sth r4, 0x1c(r1)
/* 803B7C14 003B4B54  38 81 00 08 */	addi r4, r1, 8
/* 803B7C18 003B4B58  90 C1 00 20 */	stw r6, 0x20(r1)
/* 803B7C1C 003B4B5C  90 C1 00 24 */	stw r6, 0x24(r1)
/* 803B7C20 003B4B60  90 A1 00 18 */	stw r5, 0x18(r1)
/* 803B7C24 003B4B64  90 01 00 08 */	stw r0, 8(r1)
/* 803B7C28 003B4B68  C0 03 00 00 */	lfs f0, 0(r3)
/* 803B7C2C 003B4B6C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803B7C30 003B4B70  C0 03 00 04 */	lfs f0, 4(r3)
/* 803B7C34 003B4B74  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803B7C38 003B4B78  C0 03 00 08 */	lfs f0, 8(r3)
/* 803B7C3C 003B4B7C  38 61 00 18 */	addi r3, r1, 0x18
/* 803B7C40 003B4B80  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803B7C44 003B4B84  4B FF 73 D1 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803B7C48 003B4B88  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B7C4C 003B4B8C  7C 08 03 A6 */	mtlr r0
/* 803B7C50 003B4B90  38 21 00 30 */	addi r1, r1, 0x30
/* 803B7C54 003B4B94  4E 80 00 20 */	blr 
.endfn "createSimpleGlow2__3efxFR10Vector3<f>"

.fn "createSimpleStoneAttack__3efxFR10Vector3<f>", global
/* 803B7C58 003B4B98  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B7C5C 003B4B9C  7C 08 02 A6 */	mflr r0
/* 803B7C60 003B4BA0  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 803B7C64 003B4BA4  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 803B7C68 003B4BA8  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B7C6C 003B4BAC  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 803B7C70 003B4BB0  3C A0 80 4E */	lis r5, __vt__Q23efx12TStoneAttack@ha
/* 803B7C74 003B4BB4  38 E0 01 AF */	li r7, 0x1af
/* 803B7C78 003B4BB8  90 01 00 18 */	stw r0, 0x18(r1)
/* 803B7C7C 003B4BBC  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 803B7C80 003B4BC0  38 C0 00 00 */	li r6, 0
/* 803B7C84 003B4BC4  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803B7C88 003B4BC8  90 01 00 18 */	stw r0, 0x18(r1)
/* 803B7C8C 003B4BCC  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803B7C90 003B4BD0  38 A5 71 A0 */	addi r5, r5, __vt__Q23efx12TStoneAttack@l
/* 803B7C94 003B4BD4  38 81 00 08 */	addi r4, r1, 8
/* 803B7C98 003B4BD8  B0 E1 00 1C */	sth r7, 0x1c(r1)
/* 803B7C9C 003B4BDC  90 C1 00 20 */	stw r6, 0x20(r1)
/* 803B7CA0 003B4BE0  90 A1 00 18 */	stw r5, 0x18(r1)
/* 803B7CA4 003B4BE4  90 01 00 08 */	stw r0, 8(r1)
/* 803B7CA8 003B4BE8  C0 03 00 00 */	lfs f0, 0(r3)
/* 803B7CAC 003B4BEC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803B7CB0 003B4BF0  C0 03 00 04 */	lfs f0, 4(r3)
/* 803B7CB4 003B4BF4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803B7CB8 003B4BF8  C0 03 00 08 */	lfs f0, 8(r3)
/* 803B7CBC 003B4BFC  38 61 00 18 */	addi r3, r1, 0x18
/* 803B7CC0 003B4C00  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803B7CC4 003B4C04  4B FF 72 C1 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803B7CC8 003B4C08  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B7CCC 003B4C0C  7C 08 03 A6 */	mtlr r0
/* 803B7CD0 003B4C10  38 21 00 30 */	addi r1, r1, 0x30
/* 803B7CD4 003B4C14  4E 80 00 20 */	blr 
.endfn "createSimpleStoneAttack__3efxFR10Vector3<f>"

.fn "createSimpleDig__3efxFR10Vector3<f>", global
/* 803B7CD8 003B4C18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B7CDC 003B4C1C  7C 08 02 A6 */	mflr r0
/* 803B7CE0 003B4C20  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7CE4 003B4C24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B7CE8 003B4C28  7C 7F 1B 78 */	mr r31, r3
/* 803B7CEC 003B4C2C  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B7CF0 003B4C30  28 00 00 00 */	cmplwi r0, 0
/* 803B7CF4 003B4C34  40 82 00 20 */	bne .L_803B7D14
/* 803B7CF8 003B4C38  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B7CFC 003B4C3C  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B7D00 003B4C40  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B7D04 003B4C44  38 80 02 FC */	li r4, 0x2fc
/* 803B7D08 003B4C48  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B7D0C 003B4C4C  4C C6 31 82 */	crclr 6
/* 803B7D10 003B4C50  4B C7 29 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7D14:
/* 803B7D14 003B4C54  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B7D18 003B4C58  7F E4 FB 78 */	mr r4, r31
/* 803B7D1C 003B4C5C  48 00 F1 15 */	bl "createS_Dig__Q23efx12TPkEffectMgrFR10Vector3<f>"
/* 803B7D20 003B4C60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B7D24 003B4C64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B7D28 003B4C68  7C 08 03 A6 */	mtlr r0
/* 803B7D2C 003B4C6C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7D30 003B4C70  4E 80 00 20 */	blr 
.endfn "createSimpleDig__3efxFR10Vector3<f>"

.fn "createSimpleGate3Attack__3efxFR10Vector3<f>", global
/* 803B7D34 003B4C74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B7D38 003B4C78  7C 08 02 A6 */	mflr r0
/* 803B7D3C 003B4C7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7D40 003B4C80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B7D44 003B4C84  7C 7F 1B 78 */	mr r31, r3
/* 803B7D48 003B4C88  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B7D4C 003B4C8C  28 00 00 00 */	cmplwi r0, 0
/* 803B7D50 003B4C90  40 82 00 20 */	bne .L_803B7D70
/* 803B7D54 003B4C94  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B7D58 003B4C98  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B7D5C 003B4C9C  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B7D60 003B4CA0  38 80 03 02 */	li r4, 0x302
/* 803B7D64 003B4CA4  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B7D68 003B4CA8  4C C6 31 82 */	crclr 6
/* 803B7D6C 003B4CAC  4B C7 28 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7D70:
/* 803B7D70 003B4CB0  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B7D74 003B4CB4  7F E4 FB 78 */	mr r4, r31
/* 803B7D78 003B4CB8  48 00 F1 A1 */	bl "createS_Gate3Attack__Q23efx12TPkEffectMgrFR10Vector3<f>"
/* 803B7D7C 003B4CBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B7D80 003B4CC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B7D84 003B4CC4  7C 08 03 A6 */	mtlr r0
/* 803B7D88 003B4CC8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7D8C 003B4CCC  4E 80 00 20 */	blr 
.endfn "createSimpleGate3Attack__3efxFR10Vector3<f>"

.fn "createSimpleWalkwater__3efxFR10Vector3<f>", global
/* 803B7D90 003B4CD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B7D94 003B4CD4  7C 08 02 A6 */	mflr r0
/* 803B7D98 003B4CD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7D9C 003B4CDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B7DA0 003B4CE0  7C 7F 1B 78 */	mr r31, r3
/* 803B7DA4 003B4CE4  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803B7DA8 003B4CE8  28 00 00 00 */	cmplwi r0, 0
/* 803B7DAC 003B4CEC  40 82 00 20 */	bne .L_803B7DCC
/* 803B7DB0 003B4CF0  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B7DB4 003B4CF4  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B7DB8 003B4CF8  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B7DBC 003B4CFC  38 80 03 08 */	li r4, 0x308
/* 803B7DC0 003B4D00  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B7DC4 003B4D04  4C C6 31 82 */	crclr 6
/* 803B7DC8 003B4D08  4B C7 28 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B7DCC:
/* 803B7DCC 003B4D0C  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803B7DD0 003B4D10  7F E4 FB 78 */	mr r4, r31
/* 803B7DD4 003B4D14  48 00 F1 B9 */	bl "createS_Walkwater__Q23efx12TPkEffectMgrFR10Vector3<f>"
/* 803B7DD8 003B4D18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B7DDC 003B4D1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B7DE0 003B4D20  7C 08 03 A6 */	mtlr r0
/* 803B7DE4 003B4D24  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7DE8 003B4D28  4E 80 00 20 */	blr 
.endfn "createSimpleWalkwater__3efxFR10Vector3<f>"

.fn "init__Q23efx11TNaviEffectFP10Vector3<f>PA4_fP10Vector3<f>Q33efx11TNaviEffect12enumNaviType", global
/* 803B7DEC 003B4D2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B7DF0 003B4D30  7C 08 02 A6 */	mflr r0
/* 803B7DF4 003B4D34  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7DF8 003B4D38  38 00 00 00 */	li r0, 0
/* 803B7DFC 003B4D3C  90 83 00 08 */	stw r4, 8(r3)
/* 803B7E00 003B4D40  7C E4 3B 78 */	mr r4, r7
/* 803B7E04 003B4D44  90 A3 00 10 */	stw r5, 0x10(r3)
/* 803B7E08 003B4D48  90 C3 00 0C */	stw r6, 0xc(r3)
/* 803B7E0C 003B4D4C  90 03 00 18 */	stw r0, 0x18(r3)
/* 803B7E10 003B4D50  48 00 00 15 */	bl setNaviType__Q23efx11TNaviEffectFQ33efx11TNaviEffect12enumNaviType
/* 803B7E14 003B4D54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B7E18 003B4D58  7C 08 03 A6 */	mtlr r0
/* 803B7E1C 003B4D5C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7E20 003B4D60  4E 80 00 20 */	blr 
.endfn "init__Q23efx11TNaviEffectFP10Vector3<f>PA4_fP10Vector3<f>Q33efx11TNaviEffect12enumNaviType"

.fn setNaviType__Q23efx11TNaviEffectFQ33efx11TNaviEffect12enumNaviType, global
/* 803B7E24 003B4D64  2C 04 00 02 */	cmpwi r4, 2
/* 803B7E28 003B4D68  41 82 00 7C */	beq .L_803B7EA4
/* 803B7E2C 003B4D6C  40 80 00 14 */	bge .L_803B7E40
/* 803B7E30 003B4D70  2C 04 00 00 */	cmpwi r4, 0
/* 803B7E34 003B4D74  41 82 00 18 */	beq .L_803B7E4C
/* 803B7E38 003B4D78  40 80 00 40 */	bge .L_803B7E78
/* 803B7E3C 003B4D7C  4E 80 00 20 */	blr 
.L_803B7E40:
/* 803B7E40 003B4D80  2C 04 00 04 */	cmpwi r4, 4
/* 803B7E44 003B4D84  4C 80 00 20 */	bgelr 
/* 803B7E48 003B4D88  48 00 00 88 */	b .L_803B7ED0
.L_803B7E4C:
/* 803B7E4C 003B4D8C  38 00 00 10 */	li r0, 0x10
/* 803B7E50 003B4D90  2C 00 00 00 */	cmpwi r0, 0
/* 803B7E54 003B4D94  90 03 00 E4 */	stw r0, 0xe4(r3)
/* 803B7E58 003B4D98  38 80 00 19 */	li r4, 0x19
/* 803B7E5C 003B4D9C  38 00 00 00 */	li r0, 0
/* 803B7E60 003B4DA0  C0 0D 84 08 */	lfs f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
/* 803B7E64 003B4DA4  D0 03 03 38 */	stfs f0, 0x338(r3)
/* 803B7E68 003B4DA8  B0 83 00 BC */	sth r4, 0xbc(r3)
/* 803B7E6C 003B4DAC  90 03 03 68 */	stw r0, 0x368(r3)
/* 803B7E70 003B4DB0  90 03 03 98 */	stw r0, 0x398(r3)
/* 803B7E74 003B4DB4  4E 80 00 20 */	blr 
.L_803B7E78:
/* 803B7E78 003B4DB8  38 00 00 10 */	li r0, 0x10
/* 803B7E7C 003B4DBC  2C 00 00 00 */	cmpwi r0, 0
/* 803B7E80 003B4DC0  90 03 00 E4 */	stw r0, 0xe4(r3)
/* 803B7E84 003B4DC4  38 80 00 19 */	li r4, 0x19
/* 803B7E88 003B4DC8  38 00 00 01 */	li r0, 1
/* 803B7E8C 003B4DCC  C0 0D 84 08 */	lfs f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
/* 803B7E90 003B4DD0  D0 03 03 38 */	stfs f0, 0x338(r3)
/* 803B7E94 003B4DD4  B0 83 00 BC */	sth r4, 0xbc(r3)
/* 803B7E98 003B4DD8  90 03 03 68 */	stw r0, 0x368(r3)
/* 803B7E9C 003B4DDC  90 03 03 98 */	stw r0, 0x398(r3)
/* 803B7EA0 003B4DE0  4E 80 00 20 */	blr 
.L_803B7EA4:
/* 803B7EA4 003B4DE4  38 00 00 10 */	li r0, 0x10
/* 803B7EA8 003B4DE8  2C 00 00 00 */	cmpwi r0, 0
/* 803B7EAC 003B4DEC  90 03 00 E4 */	stw r0, 0xe4(r3)
/* 803B7EB0 003B4DF0  38 80 00 1B */	li r4, 0x1b
/* 803B7EB4 003B4DF4  38 00 00 00 */	li r0, 0
/* 803B7EB8 003B4DF8  C0 0D 84 08 */	lfs f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
/* 803B7EBC 003B4DFC  D0 03 03 38 */	stfs f0, 0x338(r3)
/* 803B7EC0 003B4E00  B0 83 00 BC */	sth r4, 0xbc(r3)
/* 803B7EC4 003B4E04  90 03 03 68 */	stw r0, 0x368(r3)
/* 803B7EC8 003B4E08  90 03 03 98 */	stw r0, 0x398(r3)
/* 803B7ECC 003B4E0C  4E 80 00 20 */	blr 
.L_803B7ED0:
/* 803B7ED0 003B4E10  38 00 00 10 */	li r0, 0x10
/* 803B7ED4 003B4E14  2C 00 00 00 */	cmpwi r0, 0
/* 803B7ED8 003B4E18  90 03 00 E4 */	stw r0, 0xe4(r3)
/* 803B7EDC 003B4E1C  38 80 00 1A */	li r4, 0x1a
/* 803B7EE0 003B4E20  38 00 00 01 */	li r0, 1
/* 803B7EE4 003B4E24  C0 0D 84 08 */	lfs f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
/* 803B7EE8 003B4E28  D0 03 03 38 */	stfs f0, 0x338(r3)
/* 803B7EEC 003B4E2C  B0 83 00 BC */	sth r4, 0xbc(r3)
/* 803B7EF0 003B4E30  90 03 03 68 */	stw r0, 0x368(r3)
/* 803B7EF4 003B4E34  90 03 03 98 */	stw r0, 0x398(r3)
/* 803B7EF8 003B4E38  4E 80 00 20 */	blr 
.endfn setNaviType__Q23efx11TNaviEffectFQ33efx11TNaviEffect12enumNaviType

.fn update__Q23efx11TNaviEffectFv, global
/* 803B7EFC 003B4E3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B7F00 003B4E40  7C 08 02 A6 */	mflr r0
/* 803B7F04 003B4E44  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B7F08 003B4E48  48 00 00 15 */	bl updateHamon___Q23efx11TNaviEffectFv
/* 803B7F0C 003B4E4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B7F10 003B4E50  7C 08 03 A6 */	mtlr r0
/* 803B7F14 003B4E54  38 21 00 10 */	addi r1, r1, 0x10
/* 803B7F18 003B4E58  4E 80 00 20 */	blr 
.endfn update__Q23efx11TNaviEffectFv

.fn updateHamon___Q23efx11TNaviEffectFv, global
/* 803B7F1C 003B4E5C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B7F20 003B4E60  7C 08 02 A6 */	mflr r0
/* 803B7F24 003B4E64  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B7F28 003B4E68  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 803B7F2C 003B4E6C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 803B7F30 003B4E70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B7F34 003B4E74  7C 7F 1B 78 */	mr r31, r3
/* 803B7F38 003B4E78  80 03 00 18 */	lwz r0, 0x18(r3)
/* 803B7F3C 003B4E7C  28 00 00 00 */	cmplwi r0, 0
/* 803B7F40 003B4E80  41 82 00 98 */	beq .L_803B7FD8
/* 803B7F44 003B4E84  80 9F 00 08 */	lwz r4, 8(r31)
/* 803B7F48 003B4E88  28 04 00 00 */	cmplwi r4, 0
/* 803B7F4C 003B4E8C  41 82 00 8C */	beq .L_803B7FD8
/* 803B7F50 003B4E90  80 1F 00 00 */	lwz r0, 0(r31)
/* 803B7F54 003B4E94  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803B7F58 003B4E98  41 82 00 80 */	beq .L_803B7FD8
/* 803B7F5C 003B4E9C  C0 04 00 00 */	lfs f0, 0(r4)
/* 803B7F60 003B4EA0  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 803B7F64 003B4EA4  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 803B7F68 003B4EA8  C0 04 00 00 */	lfs f0, 0(r4)
/* 803B7F6C 003B4EAC  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 803B7F70 003B4EB0  80 9F 00 08 */	lwz r4, 8(r31)
/* 803B7F74 003B4EB4  C0 04 00 08 */	lfs f0, 8(r4)
/* 803B7F78 003B4EB8  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 803B7F7C 003B4EBC  48 00 00 08 */	b .L_803B7F84
/* 803B7F80 003B4EC0  48 00 00 58 */	b .L_803B7FD8
.L_803B7F84:
/* 803B7F84 003B4EC4  80 BF 00 18 */	lwz r5, 0x18(r31)
/* 803B7F88 003B4EC8  80 9F 00 08 */	lwz r4, 8(r31)
/* 803B7F8C 003B4ECC  C0 45 00 00 */	lfs f2, 0(r5)
/* 803B7F90 003B4ED0  C0 24 00 04 */	lfs f1, 4(r4)
/* 803B7F94 003B4ED4  C0 02 13 54 */	lfs f0, lbl_8051F6B4@sda21(r2)
/* 803B7F98 003B4ED8  EF E2 08 28 */	fsubs f31, f2, f1
/* 803B7F9C 003B4EDC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803B7FA0 003B4EE0  40 80 00 10 */	bge .L_803B7FB0
/* 803B7FA4 003B4EE4  38 9F 00 1C */	addi r4, r31, 0x1c
/* 803B7FA8 003B4EE8  48 00 00 4D */	bl "createHamonA___Q23efx11TNaviEffectFP10Vector3<f>"
/* 803B7FAC 003B4EEC  48 00 00 08 */	b .L_803B7FB4
.L_803B7FB0:
/* 803B7FB0 003B4EF0  48 00 00 A5 */	bl killHamonA___Q23efx11TNaviEffectFv
.L_803B7FB4:
/* 803B7FB4 003B4EF4  C0 02 13 58 */	lfs f0, lbl_8051F6B8@sda21(r2)
/* 803B7FB8 003B4EF8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803B7FBC 003B4EFC  40 80 00 14 */	bge .L_803B7FD0
/* 803B7FC0 003B4F00  7F E3 FB 78 */	mr r3, r31
/* 803B7FC4 003B4F04  38 9F 00 1C */	addi r4, r31, 0x1c
/* 803B7FC8 003B4F08  48 00 00 B1 */	bl "createHamonB___Q23efx11TNaviEffectFP10Vector3<f>"
/* 803B7FCC 003B4F0C  48 00 00 0C */	b .L_803B7FD8
.L_803B7FD0:
/* 803B7FD0 003B4F10  7F E3 FB 78 */	mr r3, r31
/* 803B7FD4 003B4F14  48 00 01 05 */	bl killHamonB___Q23efx11TNaviEffectFv
.L_803B7FD8:
/* 803B7FD8 003B4F18  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 803B7FDC 003B4F1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B7FE0 003B4F20  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 803B7FE4 003B4F24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B7FE8 003B4F28  7C 08 03 A6 */	mtlr r0
/* 803B7FEC 003B4F2C  38 21 00 20 */	addi r1, r1, 0x20
/* 803B7FF0 003B4F30  4E 80 00 20 */	blr 
.endfn updateHamon___Q23efx11TNaviEffectFv

.fn "createHamonA___Q23efx11TNaviEffectFP10Vector3<f>", global
/* 803B7FF4 003B4F34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B7FF8 003B4F38  7C 08 02 A6 */	mflr r0
/* 803B7FFC 003B4F3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8000 003B4F40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8004 003B4F44  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8008 003B4F48  93 C1 00 08 */	stw r30, 8(r1)
/* 803B800C 003B4F4C  7C 7E 1B 78 */	mr r30, r3
/* 803B8010 003B4F50  40 82 00 20 */	bne .L_803B8030
/* 803B8014 003B4F54  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8018 003B4F58  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B801C 003B4F5C  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8020 003B4F60  38 80 03 5F */	li r4, 0x35f
/* 803B8024 003B4F64  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8028 003B4F68  4C C6 31 82 */	crclr 6
/* 803B802C 003B4F6C  4B C7 26 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8030:
/* 803B8030 003B4F70  7F E4 FB 78 */	mr r4, r31
/* 803B8034 003B4F74  38 7E 00 28 */	addi r3, r30, 0x28
/* 803B8038 003B4F78  48 00 F5 41 */	bl "create__Q23efx9ToeHamonAFP10Vector3<f>"
/* 803B803C 003B4F7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8040 003B4F80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8044 003B4F84  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8048 003B4F88  7C 08 03 A6 */	mtlr r0
/* 803B804C 003B4F8C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8050 003B4F90  4E 80 00 20 */	blr 
.endfn "createHamonA___Q23efx11TNaviEffectFP10Vector3<f>"

.fn killHamonA___Q23efx11TNaviEffectFv, global
/* 803B8054 003B4F94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8058 003B4F98  7C 08 02 A6 */	mflr r0
/* 803B805C 003B4F9C  38 63 00 28 */	addi r3, r3, 0x28
/* 803B8060 003B4FA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8064 003B4FA4  48 00 F5 89 */	bl kill__Q23efx9ToeHamonAFv
/* 803B8068 003B4FA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B806C 003B4FAC  7C 08 03 A6 */	mtlr r0
/* 803B8070 003B4FB0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8074 003B4FB4  4E 80 00 20 */	blr 
.endfn killHamonA___Q23efx11TNaviEffectFv

.fn "createHamonB___Q23efx11TNaviEffectFP10Vector3<f>", global
/* 803B8078 003B4FB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B807C 003B4FBC  7C 08 02 A6 */	mflr r0
/* 803B8080 003B4FC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8084 003B4FC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8088 003B4FC8  7C 9F 23 79 */	or. r31, r4, r4
/* 803B808C 003B4FCC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8090 003B4FD0  7C 7E 1B 78 */	mr r30, r3
/* 803B8094 003B4FD4  40 82 00 20 */	bne .L_803B80B4
/* 803B8098 003B4FD8  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B809C 003B4FDC  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B80A0 003B4FE0  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B80A4 003B4FE4  38 80 03 6A */	li r4, 0x36a
/* 803B80A8 003B4FE8  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B80AC 003B4FEC  4C C6 31 82 */	crclr 6
/* 803B80B0 003B4FF0  4B C7 25 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B80B4:
/* 803B80B4 003B4FF4  7F E4 FB 78 */	mr r4, r31
/* 803B80B8 003B4FF8  38 7E 00 44 */	addi r3, r30, 0x44
/* 803B80BC 003B4FFC  48 00 F5 5D */	bl "create__Q23efx9ToeHamonBFP10Vector3<f>"
/* 803B80C0 003B5000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B80C4 003B5004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B80C8 003B5008  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B80CC 003B500C  7C 08 03 A6 */	mtlr r0
/* 803B80D0 003B5010  38 21 00 10 */	addi r1, r1, 0x10
/* 803B80D4 003B5014  4E 80 00 20 */	blr 
.endfn "createHamonB___Q23efx11TNaviEffectFP10Vector3<f>"

.fn killHamonB___Q23efx11TNaviEffectFv, global
/* 803B80D8 003B5018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B80DC 003B501C  7C 08 02 A6 */	mflr r0
/* 803B80E0 003B5020  38 63 00 44 */	addi r3, r3, 0x44
/* 803B80E4 003B5024  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B80E8 003B5028  48 00 F5 A5 */	bl kill__Q23efx9ToeHamonBFv
/* 803B80EC 003B502C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B80F0 003B5030  7C 08 03 A6 */	mtlr r0
/* 803B80F4 003B5034  38 21 00 10 */	addi r1, r1, 0x10
/* 803B80F8 003B5038  4E 80 00 20 */	blr 
.endfn killHamonB___Q23efx11TNaviEffectFv

.fn createLight___Q23efx11TNaviEffectFPA4_f, global
/* 803B80FC 003B503C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8100 003B5040  7C 08 02 A6 */	mflr r0
/* 803B8104 003B5044  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8108 003B5048  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B810C 003B504C  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8110 003B5050  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8114 003B5054  7C 7E 1B 78 */	mr r30, r3
/* 803B8118 003B5058  40 82 00 20 */	bne .L_803B8138
/* 803B811C 003B505C  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8120 003B5060  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8124 003B5064  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8128 003B5068  38 80 03 76 */	li r4, 0x376
/* 803B812C 003B506C  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8130 003B5070  4C C6 31 82 */	crclr 6
/* 803B8134 003B5074  4B C7 25 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8138:
/* 803B8138 003B5078  7F E4 FB 78 */	mr r4, r31
/* 803B813C 003B507C  38 7E 03 3C */	addi r3, r30, 0x33c
/* 803B8140 003B5080  4B FF 84 61 */	bl setMtxptr__Q23efx10TChaseMtx2FPA4_f
/* 803B8144 003B5084  38 7E 03 3C */	addi r3, r30, 0x33c
/* 803B8148 003B5088  38 80 00 00 */	li r4, 0
/* 803B814C 003B508C  81 9E 03 3C */	lwz r12, 0x33c(r30)
/* 803B8150 003B5090  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B8154 003B5094  7D 89 03 A6 */	mtctr r12
/* 803B8158 003B5098  4E 80 04 21 */	bctrl 
/* 803B815C 003B509C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8160 003B50A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8164 003B50A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8168 003B50A8  7C 08 03 A6 */	mtlr r0
/* 803B816C 003B50AC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8170 003B50B0  4E 80 00 20 */	blr 
.endfn createLight___Q23efx11TNaviEffectFPA4_f

.fn killLight___Q23efx11TNaviEffectFv, global
/* 803B8174 003B50B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8178 003B50B8  7C 08 02 A6 */	mflr r0
/* 803B817C 003B50BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8180 003B50C0  85 83 03 3C */	lwzu r12, 0x33c(r3)
/* 803B8184 003B50C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B8188 003B50C8  7D 89 03 A6 */	mtctr r12
/* 803B818C 003B50CC  4E 80 04 21 */	bctrl 
/* 803B8190 003B50D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8194 003B50D4  7C 08 03 A6 */	mtlr r0
/* 803B8198 003B50D8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B819C 003B50DC  4E 80 00 20 */	blr 
.endfn killLight___Q23efx11TNaviEffectFv

.fn createLightAct___Q23efx11TNaviEffectFPA4_f, global
/* 803B81A0 003B50E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B81A4 003B50E4  7C 08 02 A6 */	mflr r0
/* 803B81A8 003B50E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B81AC 003B50EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B81B0 003B50F0  7C 9F 23 79 */	or. r31, r4, r4
/* 803B81B4 003B50F4  93 C1 00 08 */	stw r30, 8(r1)
/* 803B81B8 003B50F8  7C 7E 1B 78 */	mr r30, r3
/* 803B81BC 003B50FC  40 82 00 20 */	bne .L_803B81DC
/* 803B81C0 003B5100  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B81C4 003B5104  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B81C8 003B5108  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B81CC 003B510C  38 80 03 83 */	li r4, 0x383
/* 803B81D0 003B5110  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B81D4 003B5114  4C C6 31 82 */	crclr 6
/* 803B81D8 003B5118  4B C7 24 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B81DC:
/* 803B81DC 003B511C  7F E4 FB 78 */	mr r4, r31
/* 803B81E0 003B5120  38 7E 03 6C */	addi r3, r30, 0x36c
/* 803B81E4 003B5124  4B FF 83 BD */	bl setMtxptr__Q23efx10TChaseMtx2FPA4_f
/* 803B81E8 003B5128  38 7E 03 6C */	addi r3, r30, 0x36c
/* 803B81EC 003B512C  38 80 00 00 */	li r4, 0
/* 803B81F0 003B5130  81 9E 03 6C */	lwz r12, 0x36c(r30)
/* 803B81F4 003B5134  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B81F8 003B5138  7D 89 03 A6 */	mtctr r12
/* 803B81FC 003B513C  4E 80 04 21 */	bctrl 
/* 803B8200 003B5140  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8204 003B5144  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8208 003B5148  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B820C 003B514C  7C 08 03 A6 */	mtlr r0
/* 803B8210 003B5150  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8214 003B5154  4E 80 00 20 */	blr 
.endfn createLightAct___Q23efx11TNaviEffectFPA4_f

.fn killLightAct___Q23efx11TNaviEffectFv, global
/* 803B8218 003B5158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B821C 003B515C  7C 08 02 A6 */	mflr r0
/* 803B8220 003B5160  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8224 003B5164  85 83 03 6C */	lwzu r12, 0x36c(r3)
/* 803B8228 003B5168  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B822C 003B516C  7D 89 03 A6 */	mtctr r12
/* 803B8230 003B5170  4E 80 04 21 */	bctrl 
/* 803B8234 003B5174  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8238 003B5178  7C 08 03 A6 */	mtlr r0
/* 803B823C 003B517C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8240 003B5180  4E 80 00 20 */	blr 
.endfn killLightAct___Q23efx11TNaviEffectFv

.fn "createCursor___Q23efx11TNaviEffectF10Vector3<f>f", global
/* 803B8244 003B5184  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B8248 003B5188  7C 08 02 A6 */	mflr r0
/* 803B824C 003B518C  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 803B8250 003B5190  C0 64 00 00 */	lfs f3, 0(r4)
/* 803B8254 003B5194  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B8258 003B5198  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 803B825C 003B519C  C0 44 00 04 */	lfs f2, 4(r4)
/* 803B8260 003B51A0  C0 04 00 08 */	lfs f0, 8(r4)
/* 803B8264 003B51A4  3C 80 80 4D */	lis r4, __vt__Q23efx9ArgCursor@ha
/* 803B8268 003B51A8  90 01 00 08 */	stw r0, 8(r1)
/* 803B826C 003B51AC  38 04 C2 80 */	addi r0, r4, __vt__Q23efx9ArgCursor@l
/* 803B8270 003B51B0  38 81 00 08 */	addi r4, r1, 8
/* 803B8274 003B51B4  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 803B8278 003B51B8  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 803B827C 003B51BC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803B8280 003B51C0  90 01 00 08 */	stw r0, 8(r1)
/* 803B8284 003B51C4  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803B8288 003B51C8  85 83 00 AC */	lwzu r12, 0xac(r3)
/* 803B828C 003B51CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B8290 003B51D0  7D 89 03 A6 */	mtctr r12
/* 803B8294 003B51D4  4E 80 04 21 */	bctrl 
/* 803B8298 003B51D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B829C 003B51DC  7C 08 03 A6 */	mtlr r0
/* 803B82A0 003B51E0  38 21 00 20 */	addi r1, r1, 0x20
/* 803B82A4 003B51E4  4E 80 00 20 */	blr 
.endfn "createCursor___Q23efx11TNaviEffectF10Vector3<f>f"

.fn killCursor___Q23efx11TNaviEffectFv, global
/* 803B82A8 003B51E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B82AC 003B51EC  7C 08 02 A6 */	mflr r0
/* 803B82B0 003B51F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B82B4 003B51F4  85 83 00 AC */	lwzu r12, 0xac(r3)
/* 803B82B8 003B51F8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B82BC 003B51FC  7D 89 03 A6 */	mtctr r12
/* 803B82C0 003B5200  4E 80 04 21 */	bctrl 
/* 803B82C4 003B5204  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B82C8 003B5208  7C 08 03 A6 */	mtlr r0
/* 803B82CC 003B520C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B82D0 003B5210  4E 80 00 20 */	blr 
.endfn killCursor___Q23efx11TNaviEffectFv

.fn "updateCursor___Q23efx11TNaviEffectF10Vector3<f>f", global
/* 803B82D4 003B5214  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 803B82D8 003B5218  7C 08 02 A6 */	mflr r0
/* 803B82DC 003B521C  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 803B82E0 003B5220  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 803B82E4 003B5224  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 803B82E8 003B5228  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 803B82EC 003B522C  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 803B82F0 003B5230  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 803B82F4 003B5234  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 803B82F8 003B5238  DB 81 00 90 */	stfd f28, 0x90(r1)
/* 803B82FC 003B523C  F3 81 00 98 */	psq_st f28, 152(r1), 0, qr0
/* 803B8300 003B5240  DB 61 00 80 */	stfd f27, 0x80(r1)
/* 803B8304 003B5244  F3 61 00 88 */	psq_st f27, 136(r1), 0, qr0
/* 803B8308 003B5248  DB 41 00 70 */	stfd f26, 0x70(r1)
/* 803B830C 003B524C  F3 41 00 78 */	psq_st f26, 120(r1), 0, qr0
/* 803B8310 003B5250  BF 61 00 5C */	stmw r27, 0x5c(r1)
/* 803B8314 003B5254  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 803B8318 003B5258  C0 64 00 00 */	lfs f3, 0(r4)
/* 803B831C 003B525C  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 803B8320 003B5260  C0 44 00 04 */	lfs f2, 4(r4)
/* 803B8324 003B5264  C0 04 00 08 */	lfs f0, 8(r4)
/* 803B8328 003B5268  3C 80 80 4D */	lis r4, __vt__Q23efx9ArgCursor@ha
/* 803B832C 003B526C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8330 003B5270  38 84 C2 80 */	addi r4, r4, __vt__Q23efx9ArgCursor@l
/* 803B8334 003B5274  34 01 00 14 */	addic. r0, r1, 0x14
/* 803B8338 003B5278  7C 7C 1B 78 */	mr r28, r3
/* 803B833C 003B527C  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 803B8340 003B5280  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 803B8344 003B5284  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B8348 003B5288  90 81 00 14 */	stw r4, 0x14(r1)
/* 803B834C 003B528C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803B8350 003B5290  40 82 00 20 */	bne .L_803B8370
/* 803B8354 003B5294  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8358 003B5298  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B835C 003B529C  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8360 003B52A0  38 80 01 E0 */	li r4, 0x1e0
/* 803B8364 003B52A4  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8368 003B52A8  4C C6 31 82 */	crclr 6
/* 803B836C 003B52AC  4B C7 22 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8370:
/* 803B8370 003B52B0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 803B8374 003B52B4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 803B8378 003B52B8  D0 3C 03 28 */	stfs f1, 0x328(r28)
/* 803B837C 003B52BC  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 803B8380 003B52C0  D0 1C 03 2C */	stfs f0, 0x32c(r28)
/* 803B8384 003B52C4  C0 02 13 10 */	lfs f0, lbl_8051F670@sda21(r2)
/* 803B8388 003B52C8  D0 3C 03 30 */	stfs f1, 0x330(r28)
/* 803B838C 003B52CC  C3 41 00 24 */	lfs f26, 0x24(r1)
/* 803B8390 003B52D0  C0 5C 03 34 */	lfs f2, 0x334(r28)
/* 803B8394 003B52D4  C0 3C 03 38 */	lfs f1, 0x338(r28)
/* 803B8398 003B52D8  EC 22 08 28 */	fsubs f1, f2, f1
/* 803B839C 003B52DC  D0 3C 03 34 */	stfs f1, 0x334(r28)
/* 803B83A0 003B52E0  C0 3C 03 34 */	lfs f1, 0x334(r28)
/* 803B83A4 003B52E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803B83A8 003B52E8  40 80 00 10 */	bge .L_803B83B8
/* 803B83AC 003B52EC  C0 02 13 20 */	lfs f0, lbl_8051F680@sda21(r2)
/* 803B83B0 003B52F0  EC 01 00 2A */	fadds f0, f1, f0
/* 803B83B4 003B52F4  D0 1C 03 34 */	stfs f0, 0x334(r28)
.L_803B83B8:
/* 803B83B8 003B52F8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803B83BC 003B52FC  C3 62 13 24 */	lfs f27, lbl_8051F684@sda21(r2)
/* 803B83C0 003B5300  C3 82 13 28 */	lfs f28, lbl_8051F688@sda21(r2)
/* 803B83C4 003B5304  3B BC 00 AC */	addi r29, r28, 0xac
/* 803B83C8 003B5308  CB A2 13 38 */	lfd f29, lbl_8051F698@sda21(r2)
/* 803B83CC 003B530C  3B 63 71 A0 */	addi r27, r3, sincosTable___5JMath@l
/* 803B83D0 003B5310  C3 C2 13 10 */	lfs f30, lbl_8051F670@sda21(r2)
/* 803B83D4 003B5314  3B C0 00 00 */	li r30, 0
/* 803B83D8 003B5318  C3 E2 13 2C */	lfs f31, lbl_8051F68C@sda21(r2)
/* 803B83DC 003B531C  3F E0 43 30 */	lis r31, 0x4330
/* 803B83E0 003B5320  48 00 01 28 */	b .L_803B8508
.L_803B83E4:
/* 803B83E4 003B5324  6F C3 80 00 */	xoris r3, r30, 0x8000
/* 803B83E8 003B5328  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803B83EC 003B532C  90 61 00 2C */	stw r3, 0x2c(r1)
/* 803B83F0 003B5330  C0 5C 03 34 */	lfs f2, 0x334(r28)
/* 803B83F4 003B5334  93 E1 00 28 */	stw r31, 0x28(r1)
/* 803B83F8 003B5338  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 803B83FC 003B533C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B8400 003B5340  EC 00 E8 28 */	fsubs f0, f0, f29
/* 803B8404 003B5344  93 E1 00 30 */	stw r31, 0x30(r1)
/* 803B8408 003B5348  EC 3C 00 32 */	fmuls f1, f28, f0
/* 803B840C 003B534C  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 803B8410 003B5350  EC 00 E8 28 */	fsubs f0, f0, f29
/* 803B8414 003B5354  EC 3B 00 72 */	fmuls f1, f27, f1
/* 803B8418 003B5358  EC 01 00 24 */	fdivs f0, f1, f0
/* 803B841C 003B535C  EC 42 00 2A */	fadds f2, f2, f0
/* 803B8420 003B5360  FC 00 10 90 */	fmr f0, f2
/* 803B8424 003B5364  FC 02 F0 40 */	fcmpo cr0, f2, f30
/* 803B8428 003B5368  40 80 00 08 */	bge .L_803B8430
/* 803B842C 003B536C  FC 00 10 50 */	fneg f0, f2
.L_803B8430:
/* 803B8430 003B5370  EC 20 07 F2 */	fmuls f1, f0, f31
/* 803B8434 003B5374  C0 1C 03 28 */	lfs f0, 0x328(r28)
/* 803B8438 003B5378  FC 02 F0 40 */	fcmpo cr0, f2, f30
/* 803B843C 003B537C  FC 20 08 1E */	fctiwz f1, f1
/* 803B8440 003B5380  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 803B8444 003B5384  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 803B8448 003B5388  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803B844C 003B538C  7C 7B 02 14 */	add r3, r27, r0
/* 803B8450 003B5390  C0 23 00 04 */	lfs f1, 4(r3)
/* 803B8454 003B5394  EC 1A 00 7A */	fmadds f0, f26, f1, f0
/* 803B8458 003B5398  D0 01 00 08 */	stfs f0, 8(r1)
/* 803B845C 003B539C  40 80 00 30 */	bge .L_803B848C
/* 803B8460 003B53A0  C0 02 13 30 */	lfs f0, lbl_8051F690@sda21(r2)
/* 803B8464 003B53A4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803B8468 003B53A8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803B846C 003B53AC  EC 02 00 32 */	fmuls f0, f2, f0
/* 803B8470 003B53B0  FC 00 00 1E */	fctiwz f0, f0
/* 803B8474 003B53B4  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 803B8478 003B53B8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803B847C 003B53BC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803B8480 003B53C0  7C 03 04 2E */	lfsx f0, r3, r0
/* 803B8484 003B53C4  FC 20 00 50 */	fneg f1, f0
/* 803B8488 003B53C8  48 00 00 24 */	b .L_803B84AC
.L_803B848C:
/* 803B848C 003B53CC  EC 02 07 F2 */	fmuls f0, f2, f31
/* 803B8490 003B53D0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803B8494 003B53D4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803B8498 003B53D8  FC 00 00 1E */	fctiwz f0, f0
/* 803B849C 003B53DC  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 803B84A0 003B53E0  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 803B84A4 003B53E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803B84A8 003B53E8  7C 23 04 2E */	lfsx f1, r3, r0
.L_803B84AC:
/* 803B84AC 003B53EC  C0 1C 03 30 */	lfs f0, 0x330(r28)
/* 803B84B0 003B53F0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803B84B4 003B53F4  EC 1A 00 7A */	fmadds f0, f26, f1, f0
/* 803B84B8 003B53F8  28 03 00 00 */	cmplwi r3, 0
/* 803B84BC 003B53FC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803B84C0 003B5400  41 82 00 20 */	beq .L_803B84E0
/* 803B84C4 003B5404  81 83 00 04 */	lwz r12, 4(r3)
/* 803B84C8 003B5408  38 81 00 08 */	addi r4, r1, 8
/* 803B84CC 003B540C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803B84D0 003B5410  7D 89 03 A6 */	mtctr r12
/* 803B84D4 003B5414  4E 80 04 21 */	bctrl 
/* 803B84D8 003B5418  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 803B84DC 003B541C  48 00 00 0C */	b .L_803B84E8
.L_803B84E0:
/* 803B84E0 003B5420  C0 1C 03 2C */	lfs f0, 0x32c(r28)
/* 803B84E4 003B5424  D0 01 00 0C */	stfs f0, 0xc(r1)
.L_803B84E8:
/* 803B84E8 003B5428  C0 01 00 08 */	lfs f0, 8(r1)
/* 803B84EC 003B542C  3B DE 00 01 */	addi r30, r30, 1
/* 803B84F0 003B5430  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 803B84F4 003B5434  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803B84F8 003B5438  D0 1D 00 58 */	stfs f0, 0x58(r29)
/* 803B84FC 003B543C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803B8500 003B5440  D0 1D 00 5C */	stfs f0, 0x5c(r29)
/* 803B8504 003B5444  3B BD 00 24 */	addi r29, r29, 0x24
.L_803B8508:
/* 803B8508 003B5448  80 1C 00 E4 */	lwz r0, 0xe4(r28)
/* 803B850C 003B544C  7C 1E 00 00 */	cmpw r30, r0
/* 803B8510 003B5450  41 80 FE D4 */	blt .L_803B83E4
/* 803B8514 003B5454  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 803B8518 003B5458  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 803B851C 003B545C  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 803B8520 003B5460  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 803B8524 003B5464  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 803B8528 003B5468  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 803B852C 003B546C  E3 81 00 98 */	psq_l f28, 152(r1), 0, qr0
/* 803B8530 003B5470  CB 81 00 90 */	lfd f28, 0x90(r1)
/* 803B8534 003B5474  E3 61 00 88 */	psq_l f27, 136(r1), 0, qr0
/* 803B8538 003B5478  CB 61 00 80 */	lfd f27, 0x80(r1)
/* 803B853C 003B547C  E3 41 00 78 */	psq_l f26, 120(r1), 0, qr0
/* 803B8540 003B5480  CB 41 00 70 */	lfd f26, 0x70(r1)
/* 803B8544 003B5484  BB 61 00 5C */	lmw r27, 0x5c(r1)
/* 803B8548 003B5488  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 803B854C 003B548C  7C 08 03 A6 */	mtlr r0
/* 803B8550 003B5490  38 21 00 D0 */	addi r1, r1, 0xd0
/* 803B8554 003B5494  4E 80 00 20 */	blr 
.endfn "updateCursor___Q23efx11TNaviEffectF10Vector3<f>f"

.fn "createFueact___Q23efx11TNaviEffectFPA4_fP10Vector3<f>", global
/* 803B8558 003B5498  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B855C 003B549C  7C 08 02 A6 */	mflr r0
/* 803B8560 003B54A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B8564 003B54A4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B8568 003B54A8  7C BF 2B 78 */	mr r31, r5
/* 803B856C 003B54AC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B8570 003B54B0  7C 9E 23 79 */	or. r30, r4, r4
/* 803B8574 003B54B4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B8578 003B54B8  7C 7D 1B 78 */	mr r29, r3
/* 803B857C 003B54BC  40 82 00 20 */	bne .L_803B859C
/* 803B8580 003B54C0  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8584 003B54C4  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8588 003B54C8  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B858C 003B54CC  38 80 03 A2 */	li r4, 0x3a2
/* 803B8590 003B54D0  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8594 003B54D4  4C C6 31 82 */	crclr 6
/* 803B8598 003B54D8  4B C7 20 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B859C:
/* 803B859C 003B54DC  28 1F 00 00 */	cmplwi r31, 0
/* 803B85A0 003B54E0  40 82 00 20 */	bne .L_803B85C0
/* 803B85A4 003B54E4  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B85A8 003B54E8  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B85AC 003B54EC  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B85B0 003B54F0  38 80 03 A3 */	li r4, 0x3a3
/* 803B85B4 003B54F4  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B85B8 003B54F8  4C C6 31 82 */	crclr 6
/* 803B85BC 003B54FC  4B C7 20 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B85C0:
/* 803B85C0 003B5500  93 DD 00 70 */	stw r30, 0x70(r29)
/* 803B85C4 003B5504  38 7D 00 60 */	addi r3, r29, 0x60
/* 803B85C8 003B5508  38 80 00 00 */	li r4, 0
/* 803B85CC 003B550C  93 FD 00 74 */	stw r31, 0x74(r29)
/* 803B85D0 003B5510  93 DD 00 8C */	stw r30, 0x8c(r29)
/* 803B85D4 003B5514  93 FD 00 90 */	stw r31, 0x90(r29)
/* 803B85D8 003B5518  93 DD 00 A4 */	stw r30, 0xa4(r29)
/* 803B85DC 003B551C  93 FD 00 A8 */	stw r31, 0xa8(r29)
/* 803B85E0 003B5520  81 9D 00 60 */	lwz r12, 0x60(r29)
/* 803B85E4 003B5524  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B85E8 003B5528  7D 89 03 A6 */	mtctr r12
/* 803B85EC 003B552C  4E 80 04 21 */	bctrl 
/* 803B85F0 003B5530  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B85F4 003B5534  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B85F8 003B5538  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B85FC 003B553C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B8600 003B5540  7C 08 03 A6 */	mtlr r0
/* 803B8604 003B5544  38 21 00 20 */	addi r1, r1, 0x20
/* 803B8608 003B5548  4E 80 00 20 */	blr 
.endfn "createFueact___Q23efx11TNaviEffectFPA4_fP10Vector3<f>"

.fn killFueact___Q23efx11TNaviEffectFv, global
/* 803B860C 003B554C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8610 003B5550  7C 08 02 A6 */	mflr r0
/* 803B8614 003B5554  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8618 003B5558  85 83 00 60 */	lwzu r12, 0x60(r3)
/* 803B861C 003B555C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B8620 003B5560  7D 89 03 A6 */	mtctr r12
/* 803B8624 003B5564  4E 80 04 21 */	bctrl 
/* 803B8628 003B5568  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B862C 003B556C  7C 08 03 A6 */	mtlr r0
/* 803B8630 003B5570  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8634 003B5574  4E 80 00 20 */	blr 
.endfn killFueact___Q23efx11TNaviEffectFv

.fn createOrimadamage___Q23efx11TNaviEffectFPA4_f, global
/* 803B8638 003B5578  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B863C 003B557C  7C 08 02 A6 */	mflr r0
/* 803B8640 003B5580  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8644 003B5584  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8648 003B5588  7C 9F 23 79 */	or. r31, r4, r4
/* 803B864C 003B558C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8650 003B5590  7C 7E 1B 78 */	mr r30, r3
/* 803B8654 003B5594  40 82 00 20 */	bne .L_803B8674
/* 803B8658 003B5598  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B865C 003B559C  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8660 003B55A0  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8664 003B55A4  38 80 03 B1 */	li r4, 0x3b1
/* 803B8668 003B55A8  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B866C 003B55AC  4C C6 31 82 */	crclr 6
/* 803B8670 003B55B0  4B C7 1F D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8674:
/* 803B8674 003B55B4  7F E4 FB 78 */	mr r4, r31
/* 803B8678 003B55B8  38 7E 03 9C */	addi r3, r30, 0x39c
/* 803B867C 003B55BC  4B FF 82 85 */	bl setMtxptr__Q23efx11TChaseMtxT2FPA4_f
/* 803B8680 003B55C0  38 7E 03 9C */	addi r3, r30, 0x39c
/* 803B8684 003B55C4  38 80 00 00 */	li r4, 0
/* 803B8688 003B55C8  81 9E 03 9C */	lwz r12, 0x39c(r30)
/* 803B868C 003B55CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B8690 003B55D0  7D 89 03 A6 */	mtctr r12
/* 803B8694 003B55D4  4E 80 04 21 */	bctrl 
/* 803B8698 003B55D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B869C 003B55DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B86A0 003B55E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B86A4 003B55E4  7C 08 03 A6 */	mtlr r0
/* 803B86A8 003B55E8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B86AC 003B55EC  4E 80 00 20 */	blr 
.endfn createOrimadamage___Q23efx11TNaviEffectFPA4_f

.fn init__Q23efx9TPkEffectFv, global
/* 803B86B0 003B55F0  38 80 FF FF */	li r4, -1
/* 803B86B4 003B55F4  38 00 00 00 */	li r0, 0
/* 803B86B8 003B55F8  90 83 00 08 */	stw r4, 8(r3)
/* 803B86BC 003B55FC  90 03 00 0C */	stw r0, 0xc(r3)
/* 803B86C0 003B5600  90 03 00 10 */	stw r0, 0x10(r3)
/* 803B86C4 003B5604  90 03 00 14 */	stw r0, 0x14(r3)
/* 803B86C8 003B5608  90 03 00 18 */	stw r0, 0x18(r3)
/* 803B86CC 003B560C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803B86D0 003B5610  90 03 00 20 */	stw r0, 0x20(r3)
/* 803B86D4 003B5614  90 03 00 24 */	stw r0, 0x24(r3)
/* 803B86D8 003B5618  98 03 00 00 */	stb r0, 0(r3)
/* 803B86DC 003B561C  98 03 00 01 */	stb r0, 1(r3)
/* 803B86E0 003B5620  98 03 00 02 */	stb r0, 2(r3)
/* 803B86E4 003B5624  98 03 00 03 */	stb r0, 3(r3)
/* 803B86E8 003B5628  4E 80 00 20 */	blr 
.endfn init__Q23efx9TPkEffectFv

.fn update__Q23efx9TPkEffectFv, global
/* 803B86EC 003B562C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B86F0 003B5630  7C 08 02 A6 */	mflr r0
/* 803B86F4 003B5634  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B86F8 003B5638  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B86FC 003B563C  7C 7F 1B 78 */	mr r31, r3
/* 803B8700 003B5640  48 00 00 21 */	bl updateMoeSmoke___Q23efx9TPkEffectFv
/* 803B8704 003B5644  7F E3 FB 78 */	mr r3, r31
/* 803B8708 003B5648  48 00 00 51 */	bl updateHamon___Q23efx9TPkEffectFv
/* 803B870C 003B564C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8710 003B5650  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8714 003B5654  7C 08 03 A6 */	mtlr r0
/* 803B8718 003B5658  38 21 00 10 */	addi r1, r1, 0x10
/* 803B871C 003B565C  4E 80 00 20 */	blr 
.endfn update__Q23efx9TPkEffectFv

.fn updateMoeSmoke___Q23efx9TPkEffectFv, global
/* 803B8720 003B5660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8724 003B5664  7C 08 02 A6 */	mflr r0
/* 803B8728 003B5668  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B872C 003B566C  80 83 00 24 */	lwz r4, 0x24(r3)
/* 803B8730 003B5670  2C 04 00 00 */	cmpwi r4, 0
/* 803B8734 003B5674  40 82 00 0C */	bne .L_803B8740
/* 803B8738 003B5678  48 00 04 DD */	bl killMoeSmoke___Q23efx9TPkEffectFv
/* 803B873C 003B567C  48 00 00 0C */	b .L_803B8748
.L_803B8740:
/* 803B8740 003B5680  38 04 FF FF */	addi r0, r4, -1
/* 803B8744 003B5684  90 03 00 24 */	stw r0, 0x24(r3)
.L_803B8748:
/* 803B8748 003B5688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B874C 003B568C  7C 08 03 A6 */	mtlr r0
/* 803B8750 003B5690  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8754 003B5694  4E 80 00 20 */	blr 
.endfn updateMoeSmoke___Q23efx9TPkEffectFv

.fn updateHamon___Q23efx9TPkEffectFv, global
/* 803B8758 003B5698  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B875C 003B569C  7C 08 02 A6 */	mflr r0
/* 803B8760 003B56A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B8764 003B56A4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 803B8768 003B56A8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 803B876C 003B56AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8770 003B56B0  7C 7F 1B 78 */	mr r31, r3
/* 803B8774 003B56B4  80 A3 00 20 */	lwz r5, 0x20(r3)
/* 803B8778 003B56B8  28 05 00 00 */	cmplwi r5, 0
/* 803B877C 003B56BC  41 82 00 90 */	beq .L_803B880C
/* 803B8780 003B56C0  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 803B8784 003B56C4  28 04 00 00 */	cmplwi r4, 0
/* 803B8788 003B56C8  41 82 00 84 */	beq .L_803B880C
/* 803B878C 003B56CC  80 1F 00 00 */	lwz r0, 0(r31)
/* 803B8790 003B56D0  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 803B8794 003B56D4  41 82 00 78 */	beq .L_803B880C
/* 803B8798 003B56D8  C0 44 00 08 */	lfs f2, 8(r4)
/* 803B879C 003B56DC  C0 25 00 00 */	lfs f1, 0(r5)
/* 803B87A0 003B56E0  C0 04 00 00 */	lfs f0, 0(r4)
/* 803B87A4 003B56E4  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 803B87A8 003B56E8  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 803B87AC 003B56EC  D0 5F 00 30 */	stfs f2, 0x30(r31)
/* 803B87B0 003B56F0  48 00 00 08 */	b .L_803B87B8
/* 803B87B4 003B56F4  48 00 00 58 */	b .L_803B880C
.L_803B87B8:
/* 803B87B8 003B56F8  80 BF 00 20 */	lwz r5, 0x20(r31)
/* 803B87BC 003B56FC  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 803B87C0 003B5700  C0 45 00 00 */	lfs f2, 0(r5)
/* 803B87C4 003B5704  C0 24 00 04 */	lfs f1, 4(r4)
/* 803B87C8 003B5708  C0 02 13 54 */	lfs f0, lbl_8051F6B4@sda21(r2)
/* 803B87CC 003B570C  EF E2 08 28 */	fsubs f31, f2, f1
/* 803B87D0 003B5710  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803B87D4 003B5714  40 80 00 10 */	bge .L_803B87E4
/* 803B87D8 003B5718  38 9F 00 28 */	addi r4, r31, 0x28
/* 803B87DC 003B571C  48 00 05 7D */	bl "createHamonA___Q23efx9TPkEffectFP10Vector3<f>"
/* 803B87E0 003B5720  48 00 00 08 */	b .L_803B87E8
.L_803B87E4:
/* 803B87E4 003B5724  48 00 05 D5 */	bl killHamonA___Q23efx9TPkEffectFv
.L_803B87E8:
/* 803B87E8 003B5728  C0 02 13 58 */	lfs f0, lbl_8051F6B8@sda21(r2)
/* 803B87EC 003B572C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803B87F0 003B5730  40 80 00 14 */	bge .L_803B8804
/* 803B87F4 003B5734  7F E3 FB 78 */	mr r3, r31
/* 803B87F8 003B5738  38 9F 00 28 */	addi r4, r31, 0x28
/* 803B87FC 003B573C  48 00 05 E1 */	bl "createHamonB___Q23efx9TPkEffectFP10Vector3<f>"
/* 803B8800 003B5740  48 00 00 0C */	b .L_803B880C
.L_803B8804:
/* 803B8804 003B5744  7F E3 FB 78 */	mr r3, r31
/* 803B8808 003B5748  48 00 06 35 */	bl killHamonB___Q23efx9TPkEffectFv
.L_803B880C:
/* 803B880C 003B574C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 803B8810 003B5750  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B8814 003B5754  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 803B8818 003B5758  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B881C 003B575C  7C 08 03 A6 */	mtlr r0
/* 803B8820 003B5760  38 21 00 20 */	addi r1, r1, 0x20
/* 803B8824 003B5764  4E 80 00 20 */	blr 
.endfn updateHamon___Q23efx9TPkEffectFv

.fn "createKourin___Q23efx9TPkEffectFP10Vector3<f>", global
/* 803B8828 003B5768  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B882C 003B576C  7C 08 02 A6 */	mflr r0
/* 803B8830 003B5770  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8834 003B5774  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8838 003B5778  7C 9F 23 79 */	or. r31, r4, r4
/* 803B883C 003B577C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8840 003B5780  7C 7E 1B 78 */	mr r30, r3
/* 803B8844 003B5784  40 82 00 20 */	bne .L_803B8864
/* 803B8848 003B5788  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B884C 003B578C  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8850 003B5790  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8854 003B5794  38 80 03 FB */	li r4, 0x3fb
/* 803B8858 003B5798  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B885C 003B579C  4C C6 31 82 */	crclr 6
/* 803B8860 003B57A0  4B C7 1D E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8864:
/* 803B8864 003B57A4  80 BE 00 08 */	lwz r5, 8(r30)
/* 803B8868 003B57A8  7F E4 FB 78 */	mr r4, r31
/* 803B886C 003B57AC  38 7E 00 70 */	addi r3, r30, 0x70
/* 803B8870 003B57B0  48 00 E7 E5 */	bl "create__Q23efx9ToeKourinFP10Vector3<f>l"
/* 803B8874 003B57B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8878 003B57B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B887C 003B57BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8880 003B57C0  7C 08 03 A6 */	mtlr r0
/* 803B8884 003B57C4  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8888 003B57C8  4E 80 00 20 */	blr 
.endfn "createKourin___Q23efx9TPkEffectFP10Vector3<f>"

.fn killKourin___Q23efx9TPkEffectFv, global
/* 803B888C 003B57CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8890 003B57D0  7C 08 02 A6 */	mflr r0
/* 803B8894 003B57D4  38 63 00 70 */	addi r3, r3, 0x70
/* 803B8898 003B57D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B889C 003B57DC  48 00 E8 E1 */	bl kill__Q23efx9ToeKourinFv
/* 803B88A0 003B57E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B88A4 003B57E4  7C 08 03 A6 */	mtlr r0
/* 803B88A8 003B57E8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B88AC 003B57EC  4E 80 00 20 */	blr 
.endfn killKourin___Q23efx9TPkEffectFv

.fn "createDoping___Q23efx9TPkEffectFP10Vector3<f>", global
/* 803B88B0 003B57F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B88B4 003B57F4  7C 08 02 A6 */	mflr r0
/* 803B88B8 003B57F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B88BC 003B57FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B88C0 003B5800  7C 9F 23 79 */	or. r31, r4, r4
/* 803B88C4 003B5804  93 C1 00 08 */	stw r30, 8(r1)
/* 803B88C8 003B5808  7C 7E 1B 78 */	mr r30, r3
/* 803B88CC 003B580C  40 82 00 20 */	bne .L_803B88EC
/* 803B88D0 003B5810  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B88D4 003B5814  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B88D8 003B5818  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B88DC 003B581C  38 80 04 09 */	li r4, 0x409
/* 803B88E0 003B5820  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B88E4 003B5824  4C C6 31 82 */	crclr 6
/* 803B88E8 003B5828  4B C7 1D 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B88EC:
/* 803B88EC 003B582C  7F E4 FB 78 */	mr r4, r31
/* 803B88F0 003B5830  38 7E 00 90 */	addi r3, r30, 0x90
/* 803B88F4 003B5834  48 00 E9 41 */	bl "create__Q23efx9ToeDopingFP10Vector3<f>"
/* 803B88F8 003B5838  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B88FC 003B583C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8900 003B5840  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8904 003B5844  7C 08 03 A6 */	mtlr r0
/* 803B8908 003B5848  38 21 00 10 */	addi r1, r1, 0x10
/* 803B890C 003B584C  4E 80 00 20 */	blr 
.endfn "createDoping___Q23efx9TPkEffectFP10Vector3<f>"

.fn killDoping___Q23efx9TPkEffectFv, global
/* 803B8910 003B5850  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8914 003B5854  7C 08 02 A6 */	mflr r0
/* 803B8918 003B5858  38 63 00 90 */	addi r3, r3, 0x90
/* 803B891C 003B585C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8920 003B5860  48 00 E9 7D */	bl kill__Q23efx9ToeDopingFv
/* 803B8924 003B5864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8928 003B5868  7C 08 03 A6 */	mtlr r0
/* 803B892C 003B586C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8930 003B5870  4E 80 00 20 */	blr 
.endfn killDoping___Q23efx9TPkEffectFv

.fn "createNage___Q23efx9TPkEffectFP10Vector3<f>PA4_f", global
/* 803B8934 003B5874  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B8938 003B5878  7C 08 02 A6 */	mflr r0
/* 803B893C 003B587C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B8940 003B5880  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803B8944 003B5884  7C 7F 1B 78 */	mr r31, r3
/* 803B8948 003B5888  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803B894C 003B588C  7C BE 2B 78 */	mr r30, r5
/* 803B8950 003B5890  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803B8954 003B5894  7C 9D 23 79 */	or. r29, r4, r4
/* 803B8958 003B5898  40 82 00 20 */	bne .L_803B8978
/* 803B895C 003B589C  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8960 003B58A0  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8964 003B58A4  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8968 003B58A8  38 80 04 16 */	li r4, 0x416
/* 803B896C 003B58AC  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8970 003B58B0  4C C6 31 82 */	crclr 6
/* 803B8974 003B58B4  4B C7 1C CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8978:
/* 803B8978 003B58B8  7F A4 EB 78 */	mr r4, r29
/* 803B897C 003B58BC  38 7F 00 AC */	addi r3, r31, 0xac
/* 803B8980 003B58C0  48 00 E9 49 */	bl "create__Q23efx11ToeNagekiraFP10Vector3<f>"
/* 803B8984 003B58C4  28 1E 00 00 */	cmplwi r30, 0
/* 803B8988 003B58C8  40 82 00 20 */	bne .L_803B89A8
/* 803B898C 003B58CC  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8990 003B58D0  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8994 003B58D4  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8998 003B58D8  38 80 04 19 */	li r4, 0x419
/* 803B899C 003B58DC  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B89A0 003B58E0  4C C6 31 82 */	crclr 6
/* 803B89A4 003B58E4  4B C7 1C 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B89A8:
/* 803B89A8 003B58E8  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 803B89AC 003B58EC  80 DF 00 08 */	lwz r6, 8(r31)
/* 803B89B0 003B58F0  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 803B89B4 003B58F4  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 803B89B8 003B58F8  C0 04 00 00 */	lfs f0, 0(r4)
/* 803B89BC 003B58FC  38 A3 A7 EC */	addi r5, r3, __vt__Q23efx3Arg@l
/* 803B89C0 003B5900  C0 24 00 04 */	lfs f1, 4(r4)
/* 803B89C4 003B5904  C0 44 00 08 */	lfs f2, 8(r4)
/* 803B89C8 003B5908  3C 60 80 4B */	lis r3, __vt__Q23efx7ArgType@ha
/* 803B89CC 003B590C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803B89D0 003B5910  38 03 26 80 */	addi r0, r3, __vt__Q23efx7ArgType@l
/* 803B89D4 003B5914  38 7F 00 34 */	addi r3, r31, 0x34
/* 803B89D8 003B5918  38 81 00 08 */	addi r4, r1, 8
/* 803B89DC 003B591C  90 A1 00 08 */	stw r5, 8(r1)
/* 803B89E0 003B5920  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803B89E4 003B5924  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803B89E8 003B5928  90 01 00 08 */	stw r0, 8(r1)
/* 803B89EC 003B592C  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 803B89F0 003B5930  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803B89F4 003B5934  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803B89F8 003B5938  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803B89FC 003B593C  93 DF 00 44 */	stw r30, 0x44(r31)
/* 803B8A00 003B5940  81 9F 00 34 */	lwz r12, 0x34(r31)
/* 803B8A04 003B5944  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B8A08 003B5948  7D 89 03 A6 */	mtctr r12
/* 803B8A0C 003B594C  4E 80 04 21 */	bctrl 
/* 803B8A10 003B5950  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B8A14 003B5954  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803B8A18 003B5958  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803B8A1C 003B595C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803B8A20 003B5960  7C 08 03 A6 */	mtlr r0
/* 803B8A24 003B5964  38 21 00 30 */	addi r1, r1, 0x30
/* 803B8A28 003B5968  4E 80 00 20 */	blr 
.endfn "createNage___Q23efx9TPkEffectFP10Vector3<f>PA4_f"

.fn killNage___Q23efx9TPkEffectFv, global
/* 803B8A2C 003B596C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8A30 003B5970  7C 08 02 A6 */	mflr r0
/* 803B8A34 003B5974  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8A38 003B5978  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8A3C 003B597C  7C 7F 1B 78 */	mr r31, r3
/* 803B8A40 003B5980  38 7F 00 AC */	addi r3, r31, 0xac
/* 803B8A44 003B5984  48 00 E8 ED */	bl kill__Q23efx11ToeNagekiraFv
/* 803B8A48 003B5988  38 7F 00 34 */	addi r3, r31, 0x34
/* 803B8A4C 003B598C  81 9F 00 34 */	lwz r12, 0x34(r31)
/* 803B8A50 003B5990  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B8A54 003B5994  7D 89 03 A6 */	mtctr r12
/* 803B8A58 003B5998  4E 80 04 21 */	bctrl 
/* 803B8A5C 003B599C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8A60 003B59A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8A64 003B59A4  7C 08 03 A6 */	mtlr r0
/* 803B8A68 003B59A8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8A6C 003B59AC  4E 80 00 20 */	blr 
.endfn killNage___Q23efx9TPkEffectFv

.fn "createMoe___Q23efx9TPkEffectFP10Vector3<f>", global
/* 803B8A70 003B59B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8A74 003B59B4  7C 08 02 A6 */	mflr r0
/* 803B8A78 003B59B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8A7C 003B59BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8A80 003B59C0  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8A84 003B59C4  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8A88 003B59C8  7C 7E 1B 78 */	mr r30, r3
/* 803B8A8C 003B59CC  40 82 00 20 */	bne .L_803B8AAC
/* 803B8A90 003B59D0  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8A94 003B59D4  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8A98 003B59D8  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8A9C 003B59DC  38 80 04 2A */	li r4, 0x42a
/* 803B8AA0 003B59E0  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8AA4 003B59E4  4C C6 31 82 */	crclr 6
/* 803B8AA8 003B59E8  4B C7 1B 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8AAC:
/* 803B8AAC 003B59EC  7F E4 FB 78 */	mr r4, r31
/* 803B8AB0 003B59F0  38 7E 00 C8 */	addi r3, r30, 0xc8
/* 803B8AB4 003B59F4  48 00 E8 A9 */	bl "create__Q23efx8ToeMoeBCFP10Vector3<f>"
/* 803B8AB8 003B59F8  93 FE 00 58 */	stw r31, 0x58(r30)
/* 803B8ABC 003B59FC  38 7E 00 48 */	addi r3, r30, 0x48
/* 803B8AC0 003B5A00  38 80 00 00 */	li r4, 0
/* 803B8AC4 003B5A04  81 9E 00 48 */	lwz r12, 0x48(r30)
/* 803B8AC8 003B5A08  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B8ACC 003B5A0C  7D 89 03 A6 */	mtctr r12
/* 803B8AD0 003B5A10  4E 80 04 21 */	bctrl 
/* 803B8AD4 003B5A14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8AD8 003B5A18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8ADC 003B5A1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8AE0 003B5A20  7C 08 03 A6 */	mtlr r0
/* 803B8AE4 003B5A24  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8AE8 003B5A28  4E 80 00 20 */	blr 
.endfn "createMoe___Q23efx9TPkEffectFP10Vector3<f>"

.fn killMoe___Q23efx9TPkEffectFv, global
/* 803B8AEC 003B5A2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8AF0 003B5A30  7C 08 02 A6 */	mflr r0
/* 803B8AF4 003B5A34  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8AF8 003B5A38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8AFC 003B5A3C  7C 7F 1B 78 */	mr r31, r3
/* 803B8B00 003B5A40  38 7F 00 C8 */	addi r3, r31, 0xc8
/* 803B8B04 003B5A44  48 00 E8 D5 */	bl kill__Q23efx8ToeMoeBCFv
/* 803B8B08 003B5A48  38 7F 00 48 */	addi r3, r31, 0x48
/* 803B8B0C 003B5A4C  81 9F 00 48 */	lwz r12, 0x48(r31)
/* 803B8B10 003B5A50  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B8B14 003B5A54  7D 89 03 A6 */	mtctr r12
/* 803B8B18 003B5A58  4E 80 04 21 */	bctrl 
/* 803B8B1C 003B5A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8B20 003B5A60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8B24 003B5A64  7C 08 03 A6 */	mtlr r0
/* 803B8B28 003B5A68  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8B2C 003B5A6C  4E 80 00 20 */	blr 
.endfn killMoe___Q23efx9TPkEffectFv

.fn "createChudoku___Q23efx9TPkEffectFP10Vector3<f>", global
/* 803B8B30 003B5A70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8B34 003B5A74  7C 08 02 A6 */	mflr r0
/* 803B8B38 003B5A78  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8B3C 003B5A7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8B40 003B5A80  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8B44 003B5A84  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8B48 003B5A88  7C 7E 1B 78 */	mr r30, r3
/* 803B8B4C 003B5A8C  40 82 00 20 */	bne .L_803B8B6C
/* 803B8B50 003B5A90  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8B54 003B5A94  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8B58 003B5A98  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8B5C 003B5A9C  38 80 04 3B */	li r4, 0x43b
/* 803B8B60 003B5AA0  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8B64 003B5AA4  4C C6 31 82 */	crclr 6
/* 803B8B68 003B5AA8  4B C7 1A D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8B6C:
/* 803B8B6C 003B5AAC  7F E4 FB 78 */	mr r4, r31
/* 803B8B70 003B5AB0  38 7E 01 00 */	addi r3, r30, 0x100
/* 803B8B74 003B5AB4  48 00 E8 AD */	bl "create__Q23efx10ToeChudokuFP10Vector3<f>"
/* 803B8B78 003B5AB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8B7C 003B5ABC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8B80 003B5AC0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8B84 003B5AC4  7C 08 03 A6 */	mtlr r0
/* 803B8B88 003B5AC8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8B8C 003B5ACC  4E 80 00 20 */	blr 
.endfn "createChudoku___Q23efx9TPkEffectFP10Vector3<f>"

.fn killChudoku___Q23efx9TPkEffectFv, global
/* 803B8B90 003B5AD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8B94 003B5AD4  7C 08 02 A6 */	mflr r0
/* 803B8B98 003B5AD8  38 63 01 00 */	addi r3, r3, 0x100
/* 803B8B9C 003B5ADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8BA0 003B5AE0  48 00 E8 E9 */	bl kill__Q23efx10ToeChudokuFv
/* 803B8BA4 003B5AE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8BA8 003B5AE8  7C 08 03 A6 */	mtlr r0
/* 803B8BAC 003B5AEC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8BB0 003B5AF0  4E 80 00 20 */	blr 
.endfn killChudoku___Q23efx9TPkEffectFv

.fn "createMoeSmoke___Q23efx9TPkEffectFP10Vector3<f>", global
/* 803B8BB4 003B5AF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8BB8 003B5AF8  7C 08 02 A6 */	mflr r0
/* 803B8BBC 003B5AFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8BC0 003B5B00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8BC4 003B5B04  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8BC8 003B5B08  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8BCC 003B5B0C  7C 7E 1B 78 */	mr r30, r3
/* 803B8BD0 003B5B10  40 82 00 20 */	bne .L_803B8BF0
/* 803B8BD4 003B5B14  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8BD8 003B5B18  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8BDC 003B5B1C  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8BE0 003B5B20  38 80 04 49 */	li r4, 0x449
/* 803B8BE4 003B5B24  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8BE8 003B5B28  4C C6 31 82 */	crclr 6
/* 803B8BEC 003B5B2C  4B C7 1A 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8BF0:
/* 803B8BF0 003B5B30  7F E4 FB 78 */	mr r4, r31
/* 803B8BF4 003B5B34  38 7E 01 8C */	addi r3, r30, 0x18c
/* 803B8BF8 003B5B38  48 00 EA C1 */	bl "create__Q23efx11ToeMoeSmokeFP10Vector3<f>"
/* 803B8BFC 003B5B3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8C00 003B5B40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8C04 003B5B44  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8C08 003B5B48  7C 08 03 A6 */	mtlr r0
/* 803B8C0C 003B5B4C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8C10 003B5B50  4E 80 00 20 */	blr 
.endfn "createMoeSmoke___Q23efx9TPkEffectFP10Vector3<f>"

.fn killMoeSmoke___Q23efx9TPkEffectFv, global
/* 803B8C14 003B5B54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8C18 003B5B58  7C 08 02 A6 */	mflr r0
/* 803B8C1C 003B5B5C  38 63 01 8C */	addi r3, r3, 0x18c
/* 803B8C20 003B5B60  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8C24 003B5B64  48 00 EA FD */	bl kill__Q23efx11ToeMoeSmokeFv
/* 803B8C28 003B5B68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8C2C 003B5B6C  7C 08 03 A6 */	mtlr r0
/* 803B8C30 003B5B70  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8C34 003B5B74  4E 80 00 20 */	blr 
.endfn killMoeSmoke___Q23efx9TPkEffectFv

.fn "createBlackDown___Q23efx9TPkEffectFP10Vector3<f>", global
/* 803B8C38 003B5B78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8C3C 003B5B7C  7C 08 02 A6 */	mflr r0
/* 803B8C40 003B5B80  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8C44 003B5B84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8C48 003B5B88  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8C4C 003B5B8C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8C50 003B5B90  7C 7E 1B 78 */	mr r30, r3
/* 803B8C54 003B5B94  40 82 00 20 */	bne .L_803B8C74
/* 803B8C58 003B5B98  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8C5C 003B5B9C  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8C60 003B5BA0  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8C64 003B5BA4  38 80 04 57 */	li r4, 0x457
/* 803B8C68 003B5BA8  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8C6C 003B5BAC  4C C6 31 82 */	crclr 6
/* 803B8C70 003B5BB0  4B C7 19 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8C74:
/* 803B8C74 003B5BB4  93 FE 00 6C */	stw r31, 0x6c(r30)
/* 803B8C78 003B5BB8  38 7E 00 5C */	addi r3, r30, 0x5c
/* 803B8C7C 003B5BBC  38 80 00 00 */	li r4, 0
/* 803B8C80 003B5BC0  81 9E 00 5C */	lwz r12, 0x5c(r30)
/* 803B8C84 003B5BC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B8C88 003B5BC8  7D 89 03 A6 */	mtctr r12
/* 803B8C8C 003B5BCC  4E 80 04 21 */	bctrl 
/* 803B8C90 003B5BD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8C94 003B5BD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8C98 003B5BD8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8C9C 003B5BDC  7C 08 03 A6 */	mtlr r0
/* 803B8CA0 003B5BE0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8CA4 003B5BE4  4E 80 00 20 */	blr 
.endfn "createBlackDown___Q23efx9TPkEffectFP10Vector3<f>"

.fn killBlackDown___Q23efx9TPkEffectFv, global
/* 803B8CA8 003B5BE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8CAC 003B5BEC  7C 08 02 A6 */	mflr r0
/* 803B8CB0 003B5BF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8CB4 003B5BF4  85 83 00 5C */	lwzu r12, 0x5c(r3)
/* 803B8CB8 003B5BF8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B8CBC 003B5BFC  7D 89 03 A6 */	mtctr r12
/* 803B8CC0 003B5C00  4E 80 04 21 */	bctrl 
/* 803B8CC4 003B5C04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8CC8 003B5C08  7C 08 03 A6 */	mtlr r0
/* 803B8CCC 003B5C0C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8CD0 003B5C10  4E 80 00 20 */	blr 
.endfn killBlackDown___Q23efx9TPkEffectFv

.fn "createWater___Q23efx9TPkEffectFP10Vector3<f>" global
/* 803B8CD4 003B5C14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8CD8 003B5C18  7C 08 02 A6 */	mflr r0
/* 803B8CDC 003B5C1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8CE0 003B5C20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8CE4 003B5C24  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8CE8 003B5C28  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8CEC 003B5C2C  7C 7E 1B 78 */	mr r30, r3
/* 803B8CF0 003B5C30  40 82 00 20 */	bne .L_803B8D10
/* 803B8CF4 003B5C34  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8CF8 003B5C38  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8CFC 003B5C3C  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8D00 003B5C40  38 80 04 65 */	li r4, 0x465
/* 803B8D04 003B5C44  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8D08 003B5C48  4C C6 31 82 */	crclr 6
/* 803B8D0C 003B5C4C  4B C7 19 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8D10:
/* 803B8D10 003B5C50  7F E4 FB 78 */	mr r4, r31
/* 803B8D14 003B5C54  38 7E 01 1C */	addi r3, r30, 0x11c
/* 803B8D18 003B5C58  48 00 E7 9D */	bl "create__Q23efx8ToeWaterFP10Vector3<f>"
/* 803B8D1C 003B5C5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8D20 003B5C60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8D24 003B5C64  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8D28 003B5C68  7C 08 03 A6 */	mtlr r0
/* 803B8D2C 003B5C6C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8D30 003B5C70  4E 80 00 20 */	blr 
.endfn "createWater___Q23efx9TPkEffectFP10Vector3<f>"

.fn killWater___Q23efx9TPkEffectFv, global
/* 803B8D34 003B5C74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8D38 003B5C78  7C 08 02 A6 */	mflr r0
/* 803B8D3C 003B5C7C  38 63 01 1C */	addi r3, r3, 0x11c
/* 803B8D40 003B5C80  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8D44 003B5C84  48 00 E7 ED */	bl kill__Q23efx8ToeWaterFv
/* 803B8D48 003B5C88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8D4C 003B5C8C  7C 08 03 A6 */	mtlr r0
/* 803B8D50 003B5C90  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8D54 003B5C94  4E 80 00 20 */	blr 
.endfn killWater___Q23efx9TPkEffectFv

.fn "createHamonA___Q23efx9TPkEffectFP10Vector3<f>", global
/* 803B8D58 003B5C98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8D5C 003B5C9C  7C 08 02 A6 */	mflr r0
/* 803B8D60 003B5CA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8D64 003B5CA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8D68 003B5CA8  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8D6C 003B5CAC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8D70 003B5CB0  7C 7E 1B 78 */	mr r30, r3
/* 803B8D74 003B5CB4  40 82 00 20 */	bne .L_803B8D94
/* 803B8D78 003B5CB8  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8D7C 003B5CBC  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8D80 003B5CC0  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8D84 003B5CC4  38 80 04 71 */	li r4, 0x471
/* 803B8D88 003B5CC8  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8D8C 003B5CCC  4C C6 31 82 */	crclr 6
/* 803B8D90 003B5CD0  4B C7 18 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8D94:
/* 803B8D94 003B5CD4  7F E4 FB 78 */	mr r4, r31
/* 803B8D98 003B5CD8  38 7E 01 54 */	addi r3, r30, 0x154
/* 803B8D9C 003B5CDC  48 00 E7 DD */	bl "create__Q23efx9ToeHamonAFP10Vector3<f>"
/* 803B8DA0 003B5CE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8DA4 003B5CE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8DA8 003B5CE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8DAC 003B5CEC  7C 08 03 A6 */	mtlr r0
/* 803B8DB0 003B5CF0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8DB4 003B5CF4  4E 80 00 20 */	blr 
.endfn "createHamonA___Q23efx9TPkEffectFP10Vector3<f>"

.fn killHamonA___Q23efx9TPkEffectFv, global
/* 803B8DB8 003B5CF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8DBC 003B5CFC  7C 08 02 A6 */	mflr r0
/* 803B8DC0 003B5D00  38 63 01 54 */	addi r3, r3, 0x154
/* 803B8DC4 003B5D04  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8DC8 003B5D08  48 00 E8 25 */	bl kill__Q23efx9ToeHamonAFv
/* 803B8DCC 003B5D0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8DD0 003B5D10  7C 08 03 A6 */	mtlr r0
/* 803B8DD4 003B5D14  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8DD8 003B5D18  4E 80 00 20 */	blr 
.endfn killHamonA___Q23efx9TPkEffectFv

.fn "createHamonB___Q23efx9TPkEffectFP10Vector3<f>", global
/* 803B8DDC 003B5D1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8DE0 003B5D20  7C 08 02 A6 */	mflr r0
/* 803B8DE4 003B5D24  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8DE8 003B5D28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8DEC 003B5D2C  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8DF0 003B5D30  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8DF4 003B5D34  7C 7E 1B 78 */	mr r30, r3
/* 803B8DF8 003B5D38  40 82 00 20 */	bne .L_803B8E18
/* 803B8DFC 003B5D3C  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8E00 003B5D40  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8E04 003B5D44  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8E08 003B5D48  38 80 04 7C */	li r4, 0x47c
/* 803B8E0C 003B5D4C  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8E10 003B5D50  4C C6 31 82 */	crclr 6
/* 803B8E14 003B5D54  4B C7 18 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8E18:
/* 803B8E18 003B5D58  7F E4 FB 78 */	mr r4, r31
/* 803B8E1C 003B5D5C  38 7E 01 70 */	addi r3, r30, 0x170
/* 803B8E20 003B5D60  48 00 E7 F9 */	bl "create__Q23efx9ToeHamonBFP10Vector3<f>"
/* 803B8E24 003B5D64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8E28 003B5D68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8E2C 003B5D6C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8E30 003B5D70  7C 08 03 A6 */	mtlr r0
/* 803B8E34 003B5D74  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8E38 003B5D78  4E 80 00 20 */	blr 
.endfn "createHamonB___Q23efx9TPkEffectFP10Vector3<f>"

.fn killHamonB___Q23efx9TPkEffectFv, global
/* 803B8E3C 003B5D7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8E40 003B5D80  7C 08 02 A6 */	mflr r0
/* 803B8E44 003B5D84  38 63 01 70 */	addi r3, r3, 0x170
/* 803B8E48 003B5D88  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8E4C 003B5D8C  48 00 E8 41 */	bl kill__Q23efx9ToeHamonBFv
/* 803B8E50 003B5D90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8E54 003B5D94  7C 08 03 A6 */	mtlr r0
/* 803B8E58 003B5D98  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8E5C 003B5D9C  4E 80 00 20 */	blr 
.endfn killHamonB___Q23efx9TPkEffectFv

.fn init__Q23efx13TPkEffectTaneFv, global
/* 803B8E60 003B5DA0  38 80 FF FF */	li r4, -1
/* 803B8E64 003B5DA4  38 00 00 00 */	li r0, 0
/* 803B8E68 003B5DA8  90 83 00 00 */	stw r4, 0(r3)
/* 803B8E6C 003B5DAC  90 03 00 04 */	stw r0, 4(r3)
/* 803B8E70 003B5DB0  90 03 00 0C */	stw r0, 0xc(r3)
/* 803B8E74 003B5DB4  90 03 00 08 */	stw r0, 8(r3)
/* 803B8E78 003B5DB8  90 03 00 10 */	stw r0, 0x10(r3)
/* 803B8E7C 003B5DBC  4E 80 00 20 */	blr 
.endfn init__Q23efx13TPkEffectTaneFv

.fn "createTanekira___Q23efx13TPkEffectTaneFP10Vector3<f>", global
/* 803B8E80 003B5DC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8E84 003B5DC4  7C 08 02 A6 */	mflr r0
/* 803B8E88 003B5DC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8E8C 003B5DCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8E90 003B5DD0  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8E94 003B5DD4  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8E98 003B5DD8  7C 7E 1B 78 */	mr r30, r3
/* 803B8E9C 003B5DDC  40 82 00 20 */	bne .L_803B8EBC
/* 803B8EA0 003B5DE0  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8EA4 003B5DE4  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8EA8 003B5DE8  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8EAC 003B5DEC  38 80 04 96 */	li r4, 0x496
/* 803B8EB0 003B5DF0  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8EB4 003B5DF4  4C C6 31 82 */	crclr 6
/* 803B8EB8 003B5DF8  4B C7 17 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8EBC:
/* 803B8EBC 003B5DFC  7F E4 FB 78 */	mr r4, r31
/* 803B8EC0 003B5E00  38 7E 00 28 */	addi r3, r30, 0x28
/* 803B8EC4 003B5E04  48 00 E8 89 */	bl "create__Q23efx11ToeTanekiraFP10Vector3<f>"
/* 803B8EC8 003B5E08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8ECC 003B5E0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8ED0 003B5E10  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8ED4 003B5E14  7C 08 03 A6 */	mtlr r0
/* 803B8ED8 003B5E18  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8EDC 003B5E1C  4E 80 00 20 */	blr 
.endfn "createTanekira___Q23efx13TPkEffectTaneFP10Vector3<f>"

.fn killTanekira___Q23efx13TPkEffectTaneFv, global
/* 803B8EE0 003B5E20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8EE4 003B5E24  7C 08 02 A6 */	mflr r0
/* 803B8EE8 003B5E28  38 63 00 28 */	addi r3, r3, 0x28
/* 803B8EEC 003B5E2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8EF0 003B5E30  48 00 E8 C5 */	bl kill__Q23efx11ToeTanekiraFv
/* 803B8EF4 003B5E34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8EF8 003B5E38  7C 08 03 A6 */	mtlr r0
/* 803B8EFC 003B5E3C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8F00 003B5E40  4E 80 00 20 */	blr 
.endfn killTanekira___Q23efx13TPkEffectTaneFv

.fn "createKourin___Q23efx13TPkEffectTaneFP10Vector3<f>", global
/* 803B8F04 003B5E44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8F08 003B5E48  7C 08 02 A6 */	mflr r0
/* 803B8F0C 003B5E4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8F10 003B5E50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8F14 003B5E54  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8F18 003B5E58  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8F1C 003B5E5C  7C 7E 1B 78 */	mr r30, r3
/* 803B8F20 003B5E60  40 82 00 20 */	bne .L_803B8F40
/* 803B8F24 003B5E64  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8F28 003B5E68  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8F2C 003B5E6C  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8F30 003B5E70  38 80 04 A5 */	li r4, 0x4a5
/* 803B8F34 003B5E74  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8F38 003B5E78  4C C6 31 82 */	crclr 6
/* 803B8F3C 003B5E7C  4B C7 17 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8F40:
/* 803B8F40 003B5E80  80 BE 00 00 */	lwz r5, 0(r30)
/* 803B8F44 003B5E84  7F E4 FB 78 */	mr r4, r31
/* 803B8F48 003B5E88  38 7E 00 44 */	addi r3, r30, 0x44
/* 803B8F4C 003B5E8C  48 00 E1 09 */	bl "create__Q23efx9ToeKourinFP10Vector3<f>l"
/* 803B8F50 003B5E90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8F54 003B5E94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8F58 003B5E98  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8F5C 003B5E9C  7C 08 03 A6 */	mtlr r0
/* 803B8F60 003B5EA0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8F64 003B5EA4  4E 80 00 20 */	blr 
.endfn "createKourin___Q23efx13TPkEffectTaneFP10Vector3<f>"

.fn killKourin___Q23efx13TPkEffectTaneFv, global
/* 803B8F68 003B5EA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8F6C 003B5EAC  7C 08 02 A6 */	mflr r0
/* 803B8F70 003B5EB0  38 63 00 44 */	addi r3, r3, 0x44
/* 803B8F74 003B5EB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8F78 003B5EB8  48 00 E2 05 */	bl kill__Q23efx9ToeKourinFv
/* 803B8F7C 003B5EBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8F80 003B5EC0  7C 08 03 A6 */	mtlr r0
/* 803B8F84 003B5EC4  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8F88 003B5EC8  4E 80 00 20 */	blr 
.endfn killKourin___Q23efx13TPkEffectTaneFv

.fn "createGlow1___Q23efx13TPkEffectTaneFP10Vector3<f>", global
/* 803B8F8C 003B5ECC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B8F90 003B5ED0  7C 08 02 A6 */	mflr r0
/* 803B8F94 003B5ED4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B8F98 003B5ED8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B8F9C 003B5EDC  7C 9F 23 79 */	or. r31, r4, r4
/* 803B8FA0 003B5EE0  93 C1 00 08 */	stw r30, 8(r1)
/* 803B8FA4 003B5EE4  7C 7E 1B 78 */	mr r30, r3
/* 803B8FA8 003B5EE8  40 82 00 20 */	bne .L_803B8FC8
/* 803B8FAC 003B5EEC  3C 60 80 49 */	lis r3, lbl_80495A28@ha
/* 803B8FB0 003B5EF0  3C A0 80 49 */	lis r5, lbl_80495A38@ha
/* 803B8FB4 003B5EF4  38 63 5A 28 */	addi r3, r3, lbl_80495A28@l
/* 803B8FB8 003B5EF8  38 80 04 B2 */	li r4, 0x4b2
/* 803B8FBC 003B5EFC  38 A5 5A 38 */	addi r5, r5, lbl_80495A38@l
/* 803B8FC0 003B5F00  4C C6 31 82 */	crclr 6
/* 803B8FC4 003B5F04  4B C7 16 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B8FC8:
/* 803B8FC8 003B5F08  93 FE 00 24 */	stw r31, 0x24(r30)
/* 803B8FCC 003B5F0C  38 7E 00 14 */	addi r3, r30, 0x14
/* 803B8FD0 003B5F10  38 80 00 00 */	li r4, 0
/* 803B8FD4 003B5F14  81 9E 00 14 */	lwz r12, 0x14(r30)
/* 803B8FD8 003B5F18  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B8FDC 003B5F1C  7D 89 03 A6 */	mtctr r12
/* 803B8FE0 003B5F20  4E 80 04 21 */	bctrl 
/* 803B8FE4 003B5F24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B8FE8 003B5F28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B8FEC 003B5F2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B8FF0 003B5F30  7C 08 03 A6 */	mtlr r0
/* 803B8FF4 003B5F34  38 21 00 10 */	addi r1, r1, 0x10
/* 803B8FF8 003B5F38  4E 80 00 20 */	blr 
.endfn "createGlow1___Q23efx13TPkEffectTaneFP10Vector3<f>"

.fn executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter, weak
/* 803B8FFC 003B5F3C  4E 80 00 20 */	blr 
.endfn executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter

.fn forceKill__Q23efx7TCursorFv, weak
/* 803B9000 003B5F40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B9004 003B5F44  7C 08 02 A6 */	mflr r0
/* 803B9008 003B5F48  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B900C 003B5F4C  85 83 00 04 */	lwzu r12, 4(r3)
/* 803B9010 003B5F50  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B9014 003B5F54  7D 89 03 A6 */	mtctr r12
/* 803B9018 003B5F58  4E 80 04 21 */	bctrl 
/* 803B901C 003B5F5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B9020 003B5F60  7C 08 03 A6 */	mtlr r0
/* 803B9024 003B5F64  38 21 00 10 */	addi r1, r1, 0x10
/* 803B9028 003B5F68  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx7TCursorFv

.fn "@4@__dt__Q23efx11TPkNageBlurFv", weak
/* 803B902C 003B5F6C  38 63 FF FC */	addi r3, r3, -4
/* 803B9030 003B5F70  4B D8 EC 44 */	b __dt__Q23efx11TPkNageBlurFv
.endfn "@4@__dt__Q23efx11TPkNageBlurFv"

.fn "@4@executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter", weak
/* 803B9034 003B5F74  38 63 FF FC */	addi r3, r3, -4
/* 803B9038 003B5F78  4B FF FF C4 */	b executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter
.endfn "@4@executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter"

.fn "@4@execute__Q23efx13TFueactCircleFP14JPABaseEmitter", weak
/* 803B903C 003B5F7C  38 63 FF FC */	addi r3, r3, -4
/* 803B9040 003B5F80  4B FF DE C0 */	b execute__Q23efx13TFueactCircleFP14JPABaseEmitter
.endfn "@4@execute__Q23efx13TFueactCircleFP14JPABaseEmitter"

.fn "@4@__dt__Q23efx13TFueactCircleFv", weak
/* 803B9044 003B5F84  38 63 FF FC */	addi r3, r3, -4
/* 803B9048 003B5F88  4B D8 6F 34 */	b __dt__Q23efx13TFueactCircleFv
.endfn "@4@__dt__Q23efx13TFueactCircleFv"

.fn "@8@execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle"
/* 803B904C 003B5F8C  38 63 FF F8 */	addi r3, r3, -8
/* 803B9050 003B5F90  4B FF DF D4 */	b execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle
.endfn "@8@execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle"

.fn "@8@__dt__Q23efx13TFueactCircleFv", weak
/* 803B9054 003B5F94  38 63 FF F8 */	addi r3, r3, -8
/* 803B9058 003B5F98  4B D8 6F 24 */	b __dt__Q23efx13TFueactCircleFv
.endfn "@8@__dt__Q23efx13TFueactCircleFv"

.fn "@4@__dt__Q23efx15TFueactBiriBaseFv", weak
/* 803B905C 003B5F9C  38 63 FF FC */	addi r3, r3, -4
/* 803B9060 003B5FA0  4B D8 6E 98 */	b __dt__Q23efx15TFueactBiriBaseFv
.endfn "@4@__dt__Q23efx15TFueactBiriBaseFv"
