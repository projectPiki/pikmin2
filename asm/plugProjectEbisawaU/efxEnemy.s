.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80495898, local
	.asciz "efxEnemy.cpp"
.endobj lbl_80495898
.balign 4
.obj lbl_804958A8, local
	.asciz "ArgScale"
.endobj lbl_804958A8
.balign 4
.obj lbl_804958B4, local
	.asciz "P2Assert"
.endobj lbl_804958B4
.balign 4
.obj lbl_804958C0, local
	.asciz "ArgImoEat"
.endobj lbl_804958C0
.balign 4
.obj lbl_804958CC, local
	.float 0.2
	.float 0.2
	.float 0.2
	.float 1.0
	.float 1.0
	.float 1.0
	.float 0.082
	.float 0.05
	.float 0.0
	.float 2.3
	.float 1.7
	.float 0.0
.endobj lbl_804958CC
.obj lbl_804958FC, local
	.float 0.85
	.float 0.5
	.float 0.35
	.float 0.3
	.float 0.2
	.float 0.0
	.float 0.25
	.float 0.25
	.float 0.2
	.float 0.25
	.float 0.15
	.float 0.0
.endobj lbl_804958FC
.balign 4
.obj lbl_8049592C, local
	.asciz "ArgGasuHiba"
.endobj lbl_8049592C
.balign 4
.obj lbl_80495938, local
	.float 0.5
	.float 0.4
	.float 0.25
	.float 0.35
	.float 0.2
	.float 0.1
.endobj lbl_80495938
.balign 4
.obj lbl_80495950, local
	.asciz "ArgDenkiHiba"
.endobj lbl_80495950
.balign 4
.obj lbl_80495960, local
	.float 1.0
	.float 1.0
	.float 1.0
	.float 1.0
	.float 1.0
	.float 1.0
	.float 0.15
	.float 0.07
	.float 0.02
.endobj lbl_80495960

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx13TDenkiHibaMgr, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx13TDenkiHibaMgrFPQ23efx3Arg
	.4byte forceKill__Q23efx13TDenkiHibaMgrFv
	.4byte fade__Q23efx13TDenkiHibaMgrFv
.endobj __vt__Q23efx13TDenkiHibaMgr
.obj __vt__Q23efx10TDenkiHiba, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx10TDenkiHibaFPQ23efx3Arg
	.4byte "forceKill__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
	.4byte "fade__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
	.4byte "startDemoDrawOff__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
	.4byte "endDemoDrawOn__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"
.endobj __vt__Q23efx10TDenkiHiba
.obj __vt__Q23efx9TGasuHiba, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx9TGasuHibaFPQ23efx3Arg
	.4byte "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
	.4byte "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"
.endobj __vt__Q23efx9TGasuHiba
.obj __vt__Q23efx14TDnkmsThunderB, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TDnkmsThunderBFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx14TDnkmsThunderBFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx14TDnkmsThunderBFv
.endobj __vt__Q23efx14TDnkmsThunderB
.obj __vt__Q23efx14TDnkmsThunderA, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TDnkmsThunderAFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx14TDnkmsThunderAFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx14TDnkmsThunderAFv
.endobj __vt__Q23efx14TDnkmsThunderA
.obj __vt__Q23efx8TTankWat, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TTankWatFPQ23efx3Arg
	.4byte forceKill__Q23efx8TTankWatFv
	.4byte fade__Q23efx8TTankWatFv
	.4byte startDemoDrawOff__Q23efx8TTankWatFv
	.4byte endDemoDrawOn__Q23efx8TTankWatFv
.endobj __vt__Q23efx8TTankWat
.obj __vt__Q23efx9TTankFire, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx9TTankFireFPQ23efx3Arg
	.4byte forceKill__Q23efx9TTankFireFv
	.4byte fade__Q23efx9TTankFireFv
.endobj __vt__Q23efx9TTankFire
.obj __vt__Q23efx12TTankFireIND, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx12TTankFireINDFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TTankFireINDFv"
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
	.4byte __dt__Q23efx12TTankFireINDFv
.endobj __vt__Q23efx12TTankFireIND
.obj __vt__Q23efx12TTankFireABC, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx12TTankFireABCFPQ23efx3Arg
	.4byte forceKill__Q23efx12TTankFireABCFv
	.4byte fade__Q23efx12TTankFireABCFv
	.4byte startDemoDrawOff__Q23efx12TTankFireABCFv
	.4byte endDemoDrawOn__Q23efx12TTankFireABCFv
.endobj __vt__Q23efx12TTankFireABC
.obj __vt__Q23efx26TParticleCallBack_TankFire, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23efx26TParticleCallBack_TankFireFv
	.4byte execute__Q23efx26TParticleCallBack_TankFireFP14JPABaseEmitterP15JPABaseParticle
	.4byte draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle
	.4byte init__Q23efx26TParticleCallBack_TankFireFP14JPABaseEmitterP15JPABaseParticle
.endobj __vt__Q23efx26TParticleCallBack_TankFire
.obj __vt__Q23efx11TKoganeDive, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TKoganeDiveFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx11TKoganeDive
.obj __vt__Q23efx10TKoganeHit, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx10TKoganeHitFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx10TKoganeHit
.obj __vt__Q23efx7TBabaHe, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx7TBabaHeFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx7TBabaHe
.obj __vt__Q23efx14TBabaFly_ver01, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx14TBabaFly_ver01FPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TBabaFly_ver01Fv"
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
	.4byte __dt__Q23efx14TBabaFly_ver01Fv
.endobj __vt__Q23efx14TBabaFly_ver01
.obj __vt__Q23efx9TPanSmoke, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx9TPanSmokeFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TPanSmokeFv"
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
	.4byte __dt__Q23efx9TPanSmokeFv
.endobj __vt__Q23efx9TPanSmoke
.obj __vt__Q23efx8TPanHide, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TPanHideFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx8TPanHideFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx8TForeverFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx8TPanHideFv
.endobj __vt__Q23efx8TPanHide
.obj __vt__Q23efx7TPanApp, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx7TPanAppFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx7TPanApp
.obj __vt__Q23efx14THebiAphd_base, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx14THebiAphd_baseFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx14THebiAphd_base
.obj __vt__Q23efx12TOtaPartsoff, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx12TOtaPartsoffFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx12TOtaPartsoff
.obj __vt__Q23efx9TImoSmoke, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx9TImoSmokeFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TImoSmokeFv"
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
	.4byte __dt__Q23efx9TImoSmokeFv
.endobj __vt__Q23efx9TImoSmoke
.obj __vt__Q23efx13TUjinkoAp_Imo, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx13TUjinkoAp_ImoFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx13TUjinkoAp_Imo
.obj __vt__Q23efx13TUjinkoHd_Imo, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx13TUjinkoHd_ImoFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx13TUjinkoHd_Imo
.obj __vt__Q23efx7TImoEat, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx7TImoEatFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx7TImoEatFv"
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
	.4byte __dt__Q23efx7TImoEatFv
.endobj __vt__Q23efx7TImoEat
.obj __vt__Q23efx9TJgmBackW, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx9TJgmBackWFPQ23efx3Arg
	.4byte "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx9TJgmBackW
.obj __vt__Q23efx8TJgmBack, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TJgmBackFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx8TJgmBackFv"
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
	.4byte __dt__Q23efx8TJgmBackFv
.endobj __vt__Q23efx8TJgmBack
.obj __vt__Q23efx11TJgmAttackW, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TJgmAttackWFPQ23efx3Arg
	.4byte "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx11TJgmAttackW
.obj __vt__Q23efx10TJgmAttack, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx10TJgmAttackFPQ23efx3Arg
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
.endobj __vt__Q23efx10TJgmAttack
.obj __vt__Q23efx12TUmiDeadmelt, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx12TUmiDeadmeltFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx12TUmiDeadmelt
.obj __vt__Q23efx10TUmiAttack, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx10TUmiAttackFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx10TUmiAttack
.obj __vt__Q23efx9TUmiFlick, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx9TUmiFlickFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.endobj __vt__Q23efx9TUmiFlick
.obj __vt__Q23efx9TChouDown, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx9TChouDownFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TChouDownFv"
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
	.4byte __dt__Q23efx9TChouDownFv
.endobj __vt__Q23efx9TChouDown
.obj __vt__Q23efx9TChibiHit, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx9TChibiHitFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx9TChibiHit

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051F620, local
	.asciz "ArgChou"
.endobj lbl_8051F620
.balign 4
.obj lbl_8051F628, local
	.float 1.3
.endobj lbl_8051F628
.balign 4
.obj lbl_8051F62C, local
	.asciz "ArgRotY"
.endobj lbl_8051F62C
.balign 4
.obj lbl_8051F634, local
	.float -35.0
.endobj lbl_8051F634
.obj lbl_8051F638, local
	.float 0.0
.endobj lbl_8051F638
.obj lbl_8051F63C, local
	.float 0.5
.endobj lbl_8051F63C
.obj lbl_8051F640, local
	.float 3.0
.endobj lbl_8051F640
.obj lbl_8051F644, local
	.float 1000.0
.endobj lbl_8051F644
.obj lbl_8051F648, local
	.float 120.0
.endobj lbl_8051F648
.obj lbl_8051F64C, local
	.float 1.0
.endobj lbl_8051F64C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn create__Q23efx9TChibiHitFPQ23efx3Arg, global
/* 803B2D84 003AFCC4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803B2D88 003AFCC8  7C 08 02 A6 */	mflr r0
/* 803B2D8C 003AFCCC  90 01 00 44 */	stw r0, 0x44(r1)
/* 803B2D90 003AFCD0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 803B2D94 003AFCD4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 803B2D98 003AFCD8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803B2D9C 003AFCDC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803B2DA0 003AFCE0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803B2DA4 003AFCE4  7C 9E 23 78 */	mr r30, r4
/* 803B2DA8 003AFCE8  7C 7D 1B 78 */	mr r29, r3
/* 803B2DAC 003AFCEC  7F C3 F3 78 */	mr r3, r30
/* 803B2DB0 003AFCF0  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B2DB4 003AFCF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B2DB8 003AFCF8  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B2DBC 003AFCFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B2DC0 003AFD00  7D 89 03 A6 */	mtctr r12
/* 803B2DC4 003AFD04  4E 80 04 21 */	bctrl 
/* 803B2DC8 003AFD08  7C 64 1B 78 */	mr r4, r3
/* 803B2DCC 003AFD0C  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B2DD0 003AFD10  4B D1 78 F1 */	bl strcmp
/* 803B2DD4 003AFD14  7C 60 00 34 */	cntlzw r0, r3
/* 803B2DD8 003AFD18  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B2DDC 003AFD1C  40 82 00 18 */	bne .L_803B2DF4
/* 803B2DE0 003AFD20  38 7F 00 00 */	addi r3, r31, 0
/* 803B2DE4 003AFD24  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B2DE8 003AFD28  38 80 00 17 */	li r4, 0x17
/* 803B2DEC 003AFD2C  4C C6 31 82 */	crclr 6
/* 803B2DF0 003AFD30  4B C7 78 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B2DF4:
/* 803B2DF4 003AFD34  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B2DF8 003AFD38  7F A3 EB 78 */	mr r3, r29
/* 803B2DFC 003AFD3C  7F C4 F3 78 */	mr r4, r30
/* 803B2E00 003AFD40  4B FF C3 65 */	bl create__Q23efx8TSimple4FPQ23efx3Arg
/* 803B2E04 003AFD44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B2E08 003AFD48  41 82 00 78 */	beq .L_803B2E80
/* 803B2E0C 003AFD4C  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 803B2E10 003AFD50  38 60 00 01 */	li r3, 1
/* 803B2E14 003AFD54  D3 E1 00 08 */	stfs f31, 8(r1)
/* 803B2E18 003AFD58  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B2E1C 003AFD5C  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B2E20 003AFD60  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B2E24 003AFD64  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B2E28 003AFD68  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B2E2C 003AFD6C  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 803B2E30 003AFD70  D3 E1 00 0C */	stfs f31, 0xc(r1)
/* 803B2E34 003AFD74  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B2E38 003AFD78  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B2E3C 003AFD7C  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B2E40 003AFD80  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B2E44 003AFD84  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B2E48 003AFD88  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 803B2E4C 003AFD8C  D3 E1 00 10 */	stfs f31, 0x10(r1)
/* 803B2E50 003AFD90  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B2E54 003AFD94  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B2E58 003AFD98  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B2E5C 003AFD9C  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B2E60 003AFDA0  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B2E64 003AFDA4  80 9D 00 18 */	lwz r4, 0x18(r29)
/* 803B2E68 003AFDA8  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B2E6C 003AFDAC  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B2E70 003AFDB0  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B2E74 003AFDB4  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B2E78 003AFDB8  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B2E7C 003AFDBC  48 00 00 08 */	b .L_803B2E84
.L_803B2E80:
/* 803B2E80 003AFDC0  38 60 00 00 */	li r3, 0
.L_803B2E84:
/* 803B2E84 003AFDC4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 803B2E88 003AFDC8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803B2E8C 003AFDCC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 803B2E90 003AFDD0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803B2E94 003AFDD4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803B2E98 003AFDD8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803B2E9C 003AFDDC  7C 08 03 A6 */	mtlr r0
/* 803B2EA0 003AFDE0  38 21 00 40 */	addi r1, r1, 0x40
/* 803B2EA4 003AFDE4  4E 80 00 20 */	blr 
.endfn create__Q23efx9TChibiHitFPQ23efx3Arg

.fn create__Q23efx9TChouDownFPQ23efx3Arg, global
/* 803B2EA8 003AFDE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2EAC 003AFDEC  7C 08 02 A6 */	mflr r0
/* 803B2EB0 003AFDF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2EB4 003AFDF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2EB8 003AFDF8  7C 9F 23 78 */	mr r31, r4
/* 803B2EBC 003AFDFC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2EC0 003AFE00  7C 7E 1B 78 */	mr r30, r3
/* 803B2EC4 003AFE04  7F E3 FB 78 */	mr r3, r31
/* 803B2EC8 003AFE08  81 9F 00 00 */	lwz r12, 0(r31)
/* 803B2ECC 003AFE0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B2ED0 003AFE10  7D 89 03 A6 */	mtctr r12
/* 803B2ED4 003AFE14  4E 80 04 21 */	bctrl 
/* 803B2ED8 003AFE18  7C 64 1B 78 */	mr r4, r3
/* 803B2EDC 003AFE1C  38 62 12 C0 */	addi r3, r2, lbl_8051F620@sda21
/* 803B2EE0 003AFE20  4B D1 77 E1 */	bl strcmp
/* 803B2EE4 003AFE24  7C 60 00 34 */	cntlzw r0, r3
/* 803B2EE8 003AFE28  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B2EEC 003AFE2C  40 82 00 20 */	bne .L_803B2F0C
/* 803B2EF0 003AFE30  3C 60 80 49 */	lis r3, lbl_80495898@ha
/* 803B2EF4 003AFE34  3C A0 80 49 */	lis r5, lbl_804958B4@ha
/* 803B2EF8 003AFE38  38 63 58 98 */	addi r3, r3, lbl_80495898@l
/* 803B2EFC 003AFE3C  38 80 00 2B */	li r4, 0x2b
/* 803B2F00 003AFE40  38 A5 58 B4 */	addi r5, r5, lbl_804958B4@l
/* 803B2F04 003AFE44  4C C6 31 82 */	crclr 6
/* 803B2F08 003AFE48  4B C7 77 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B2F0C:
/* 803B2F0C 003AFE4C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 803B2F10 003AFE50  2C 00 00 01 */	cmpwi r0, 1
/* 803B2F14 003AFE54  41 82 00 2C */	beq .L_803B2F40
/* 803B2F18 003AFE58  40 80 00 10 */	bge .L_803B2F28
/* 803B2F1C 003AFE5C  2C 00 00 00 */	cmpwi r0, 0
/* 803B2F20 003AFE60  40 80 00 14 */	bge .L_803B2F34
/* 803B2F24 003AFE64  48 00 00 30 */	b .L_803B2F54
.L_803B2F28:
/* 803B2F28 003AFE68  2C 00 00 03 */	cmpwi r0, 3
/* 803B2F2C 003AFE6C  40 80 00 28 */	bge .L_803B2F54
/* 803B2F30 003AFE70  48 00 00 1C */	b .L_803B2F4C
.L_803B2F34:
/* 803B2F34 003AFE74  38 00 00 17 */	li r0, 0x17
/* 803B2F38 003AFE78  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 803B2F3C 003AFE7C  48 00 00 18 */	b .L_803B2F54
.L_803B2F40:
/* 803B2F40 003AFE80  38 00 00 16 */	li r0, 0x16
/* 803B2F44 003AFE84  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 803B2F48 003AFE88  48 00 00 0C */	b .L_803B2F54
.L_803B2F4C:
/* 803B2F4C 003AFE8C  38 00 00 15 */	li r0, 0x15
/* 803B2F50 003AFE90  B0 1E 00 0C */	sth r0, 0xc(r30)
.L_803B2F54:
/* 803B2F54 003AFE94  7F C3 F3 78 */	mr r3, r30
/* 803B2F58 003AFE98  7F E4 FB 78 */	mr r4, r31
/* 803B2F5C 003AFE9C  4B FF C7 91 */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803B2F60 003AFEA0  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 803B2F64 003AFEA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2F68 003AFEA8  7C 03 00 D0 */	neg r0, r3
/* 803B2F6C 003AFEAC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2F70 003AFEB0  7C 00 1B 78 */	or r0, r0, r3
/* 803B2F74 003AFEB4  54 03 0F FE */	srwi r3, r0, 0x1f
/* 803B2F78 003AFEB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2F7C 003AFEBC  7C 08 03 A6 */	mtlr r0
/* 803B2F80 003AFEC0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2F84 003AFEC4  4E 80 00 20 */	blr 
.endfn create__Q23efx9TChouDownFPQ23efx3Arg

.fn setGlobalScale__Q23efx9TUmiHamonFf, global
/* 803B2F88 003AFEC8  80 83 00 0C */	lwz r4, 0xc(r3)
/* 803B2F8C 003AFECC  28 04 00 00 */	cmplwi r4, 0
/* 803B2F90 003AFED0  41 82 00 18 */	beq .L_803B2FA8
/* 803B2F94 003AFED4  D0 24 00 98 */	stfs f1, 0x98(r4)
/* 803B2F98 003AFED8  D0 24 00 9C */	stfs f1, 0x9c(r4)
/* 803B2F9C 003AFEDC  D0 24 00 A0 */	stfs f1, 0xa0(r4)
/* 803B2FA0 003AFEE0  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803B2FA4 003AFEE4  D0 24 00 B4 */	stfs f1, 0xb4(r4)
.L_803B2FA8:
/* 803B2FA8 003AFEE8  80 83 00 20 */	lwz r4, 0x20(r3)
/* 803B2FAC 003AFEEC  28 04 00 00 */	cmplwi r4, 0
/* 803B2FB0 003AFEF0  4D 82 00 20 */	beqlr 
/* 803B2FB4 003AFEF4  D0 24 00 98 */	stfs f1, 0x98(r4)
/* 803B2FB8 003AFEF8  D0 24 00 9C */	stfs f1, 0x9c(r4)
/* 803B2FBC 003AFEFC  D0 24 00 A0 */	stfs f1, 0xa0(r4)
/* 803B2FC0 003AFF00  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803B2FC4 003AFF04  D0 24 00 B4 */	stfs f1, 0xb4(r4)
/* 803B2FC8 003AFF08  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx9TUmiHamonFf

.fn create__Q23efx9TUmiFlickFPQ23efx3Arg, global
/* 803B2FCC 003AFF0C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B2FD0 003AFF10  7C 08 02 A6 */	mflr r0
/* 803B2FD4 003AFF14  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B2FD8 003AFF18  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B2FDC 003AFF1C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B2FE0 003AFF20  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B2FE4 003AFF24  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B2FE8 003AFF28  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B2FEC 003AFF2C  7C 9E 23 78 */	mr r30, r4
/* 803B2FF0 003AFF30  7C 7D 1B 78 */	mr r29, r3
/* 803B2FF4 003AFF34  7F C3 F3 78 */	mr r3, r30
/* 803B2FF8 003AFF38  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B2FFC 003AFF3C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B3000 003AFF40  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B3004 003AFF44  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B3008 003AFF48  7D 89 03 A6 */	mtctr r12
/* 803B300C 003AFF4C  4E 80 04 21 */	bctrl 
/* 803B3010 003AFF50  7C 64 1B 78 */	mr r4, r3
/* 803B3014 003AFF54  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B3018 003AFF58  4B D1 76 A9 */	bl strcmp
/* 803B301C 003AFF5C  7C 60 00 34 */	cntlzw r0, r3
/* 803B3020 003AFF60  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B3024 003AFF64  40 82 00 18 */	bne .L_803B303C
/* 803B3028 003AFF68  38 7F 00 00 */	addi r3, r31, 0
/* 803B302C 003AFF6C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3030 003AFF70  38 80 00 50 */	li r4, 0x50
/* 803B3034 003AFF74  4C C6 31 82 */	crclr 6
/* 803B3038 003AFF78  4B C7 76 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B303C:
/* 803B303C 003AFF7C  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3040 003AFF80  7F A3 EB 78 */	mr r3, r29
/* 803B3044 003AFF84  7F C4 F3 78 */	mr r4, r30
/* 803B3048 003AFF88  4B FF C0 75 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 803B304C 003AFF8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3050 003AFF90  41 82 00 54 */	beq .L_803B30A4
/* 803B3054 003AFF94  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 803B3058 003AFF98  38 60 00 01 */	li r3, 1
/* 803B305C 003AFF9C  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3060 003AFFA0  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3064 003AFFA4  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3068 003AFFA8  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B306C 003AFFAC  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3070 003AFFB0  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 803B3074 003AFFB4  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3078 003AFFB8  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B307C 003AFFBC  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3080 003AFFC0  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B3084 003AFFC4  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3088 003AFFC8  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 803B308C 003AFFCC  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3090 003AFFD0  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3094 003AFFD4  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3098 003AFFD8  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B309C 003AFFDC  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B30A0 003AFFE0  48 00 00 08 */	b .L_803B30A8
.L_803B30A4:
/* 803B30A4 003AFFE4  38 60 00 00 */	li r3, 0
.L_803B30A8:
/* 803B30A8 003AFFE8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B30AC 003AFFEC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B30B0 003AFFF0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B30B4 003AFFF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B30B8 003AFFF8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B30BC 003AFFFC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B30C0 003B0000  7C 08 03 A6 */	mtlr r0
/* 803B30C4 003B0004  38 21 00 30 */	addi r1, r1, 0x30
/* 803B30C8 003B0008  4E 80 00 20 */	blr 
.endfn create__Q23efx9TUmiFlickFPQ23efx3Arg

.fn create__Q23efx10TUmiAttackFPQ23efx3Arg, global
/* 803B30CC 003B000C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B30D0 003B0010  7C 08 02 A6 */	mflr r0
/* 803B30D4 003B0014  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B30D8 003B0018  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B30DC 003B001C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B30E0 003B0020  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B30E4 003B0024  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B30E8 003B0028  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B30EC 003B002C  7C 9E 23 78 */	mr r30, r4
/* 803B30F0 003B0030  7C 7D 1B 78 */	mr r29, r3
/* 803B30F4 003B0034  7F C3 F3 78 */	mr r3, r30
/* 803B30F8 003B0038  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B30FC 003B003C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B3100 003B0040  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B3104 003B0044  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B3108 003B0048  7D 89 03 A6 */	mtctr r12
/* 803B310C 003B004C  4E 80 04 21 */	bctrl 
/* 803B3110 003B0050  7C 64 1B 78 */	mr r4, r3
/* 803B3114 003B0054  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B3118 003B0058  4B D1 75 A9 */	bl strcmp
/* 803B311C 003B005C  7C 60 00 34 */	cntlzw r0, r3
/* 803B3120 003B0060  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B3124 003B0064  40 82 00 18 */	bne .L_803B313C
/* 803B3128 003B0068  38 7F 00 00 */	addi r3, r31, 0
/* 803B312C 003B006C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3130 003B0070  38 80 00 61 */	li r4, 0x61
/* 803B3134 003B0074  4C C6 31 82 */	crclr 6
/* 803B3138 003B0078  4B C7 75 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B313C:
/* 803B313C 003B007C  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3140 003B0080  7F A3 EB 78 */	mr r3, r29
/* 803B3144 003B0084  7F C4 F3 78 */	mr r4, r30
/* 803B3148 003B0088  4B FF C1 6D */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 803B314C 003B008C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3150 003B0090  41 82 00 24 */	beq .L_803B3174
/* 803B3154 003B0094  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B3158 003B0098  38 60 00 01 */	li r3, 1
/* 803B315C 003B009C  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3160 003B00A0  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3164 003B00A4  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3168 003B00A8  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B316C 003B00AC  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3170 003B00B0  48 00 00 08 */	b .L_803B3178
.L_803B3174:
/* 803B3174 003B00B4  38 60 00 00 */	li r3, 0
.L_803B3178:
/* 803B3178 003B00B8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B317C 003B00BC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B3180 003B00C0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B3184 003B00C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B3188 003B00C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B318C 003B00CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B3190 003B00D0  7C 08 03 A6 */	mtlr r0
/* 803B3194 003B00D4  38 21 00 30 */	addi r1, r1, 0x30
/* 803B3198 003B00D8  4E 80 00 20 */	blr 
.endfn create__Q23efx10TUmiAttackFPQ23efx3Arg

.fn setGlobalScale__Q23efx7TUmiEatFf, global
/* 803B319C 003B00DC  80 63 00 08 */	lwz r3, 8(r3)
/* 803B31A0 003B00E0  28 03 00 00 */	cmplwi r3, 0
/* 803B31A4 003B00E4  4D 82 00 20 */	beqlr 
/* 803B31A8 003B00E8  D0 23 00 98 */	stfs f1, 0x98(r3)
/* 803B31AC 003B00EC  D0 23 00 9C */	stfs f1, 0x9c(r3)
/* 803B31B0 003B00F0  D0 23 00 A0 */	stfs f1, 0xa0(r3)
/* 803B31B4 003B00F4  D0 23 00 B0 */	stfs f1, 0xb0(r3)
/* 803B31B8 003B00F8  D0 23 00 B4 */	stfs f1, 0xb4(r3)
/* 803B31BC 003B00FC  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx7TUmiEatFf

.fn setGlobalScale__Q23efx11TUmiDeadawaFf, global
/* 803B31C0 003B0100  80 63 00 08 */	lwz r3, 8(r3)
/* 803B31C4 003B0104  28 03 00 00 */	cmplwi r3, 0
/* 803B31C8 003B0108  4D 82 00 20 */	beqlr 
/* 803B31CC 003B010C  D0 23 00 98 */	stfs f1, 0x98(r3)
/* 803B31D0 003B0110  D0 23 00 9C */	stfs f1, 0x9c(r3)
/* 803B31D4 003B0114  D0 23 00 A0 */	stfs f1, 0xa0(r3)
/* 803B31D8 003B0118  D0 23 00 B0 */	stfs f1, 0xb0(r3)
/* 803B31DC 003B011C  D0 23 00 B4 */	stfs f1, 0xb4(r3)
/* 803B31E0 003B0120  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx11TUmiDeadawaFf

.fn create__Q23efx12TUmiDeadmeltFPQ23efx3Arg, global
/* 803B31E4 003B0124  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B31E8 003B0128  7C 08 02 A6 */	mflr r0
/* 803B31EC 003B012C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B31F0 003B0130  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B31F4 003B0134  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B31F8 003B0138  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B31FC 003B013C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B3200 003B0140  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B3204 003B0144  7C 9E 23 78 */	mr r30, r4
/* 803B3208 003B0148  7C 7D 1B 78 */	mr r29, r3
/* 803B320C 003B014C  7F C3 F3 78 */	mr r3, r30
/* 803B3210 003B0150  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B3214 003B0154  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B3218 003B0158  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B321C 003B015C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B3220 003B0160  7D 89 03 A6 */	mtctr r12
/* 803B3224 003B0164  4E 80 04 21 */	bctrl 
/* 803B3228 003B0168  7C 64 1B 78 */	mr r4, r3
/* 803B322C 003B016C  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B3230 003B0170  4B D1 74 91 */	bl strcmp
/* 803B3234 003B0174  7C 60 00 34 */	cntlzw r0, r3
/* 803B3238 003B0178  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B323C 003B017C  40 82 00 18 */	bne .L_803B3254
/* 803B3240 003B0180  38 7F 00 00 */	addi r3, r31, 0
/* 803B3244 003B0184  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3248 003B0188  38 80 00 86 */	li r4, 0x86
/* 803B324C 003B018C  4C C6 31 82 */	crclr 6
/* 803B3250 003B0190  4B C7 73 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B3254:
/* 803B3254 003B0194  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3258 003B0198  7F A3 EB 78 */	mr r3, r29
/* 803B325C 003B019C  7F C4 F3 78 */	mr r4, r30
/* 803B3260 003B01A0  4B FF BD 25 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803B3264 003B01A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3268 003B01A8  41 82 00 24 */	beq .L_803B328C
/* 803B326C 003B01AC  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B3270 003B01B0  38 60 00 01 */	li r3, 1
/* 803B3274 003B01B4  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3278 003B01B8  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B327C 003B01BC  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3280 003B01C0  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B3284 003B01C4  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3288 003B01C8  48 00 00 08 */	b .L_803B3290
.L_803B328C:
/* 803B328C 003B01CC  38 60 00 00 */	li r3, 0
.L_803B3290:
/* 803B3290 003B01D0  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B3294 003B01D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B3298 003B01D8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B329C 003B01DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B32A0 003B01E0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B32A4 003B01E4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B32A8 003B01E8  7C 08 03 A6 */	mtlr r0
/* 803B32AC 003B01EC  38 21 00 30 */	addi r1, r1, 0x30
/* 803B32B0 003B01F0  4E 80 00 20 */	blr 
.endfn create__Q23efx12TUmiDeadmeltFPQ23efx3Arg

.fn create__Q23efx10TJgmAttackFPQ23efx3Arg, global
/* 803B32B4 003B01F4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B32B8 003B01F8  7C 08 02 A6 */	mflr r0
/* 803B32BC 003B01FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B32C0 003B0200  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B32C4 003B0204  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B32C8 003B0208  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B32CC 003B020C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B32D0 003B0210  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B32D4 003B0214  7C 9E 23 78 */	mr r30, r4
/* 803B32D8 003B0218  7C 7D 1B 78 */	mr r29, r3
/* 803B32DC 003B021C  7F C3 F3 78 */	mr r3, r30
/* 803B32E0 003B0220  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B32E4 003B0224  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B32E8 003B0228  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B32EC 003B022C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B32F0 003B0230  7D 89 03 A6 */	mtctr r12
/* 803B32F4 003B0234  4E 80 04 21 */	bctrl 
/* 803B32F8 003B0238  7C 64 1B 78 */	mr r4, r3
/* 803B32FC 003B023C  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B3300 003B0240  4B D1 73 C1 */	bl strcmp
/* 803B3304 003B0244  7C 60 00 34 */	cntlzw r0, r3
/* 803B3308 003B0248  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B330C 003B024C  40 82 00 18 */	bne .L_803B3324
/* 803B3310 003B0250  38 7F 00 00 */	addi r3, r31, 0
/* 803B3314 003B0254  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3318 003B0258  38 80 00 99 */	li r4, 0x99
/* 803B331C 003B025C  4C C6 31 82 */	crclr 6
/* 803B3320 003B0260  4B C7 73 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B3324:
/* 803B3324 003B0264  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3328 003B0268  7F A3 EB 78 */	mr r3, r29
/* 803B332C 003B026C  7F C4 F3 78 */	mr r4, r30
/* 803B3330 003B0270  4B FF F5 E9 */	bl "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
/* 803B3334 003B0274  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3338 003B0278  41 82 00 3C */	beq .L_803B3374
/* 803B333C 003B027C  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 803B3340 003B0280  38 60 00 01 */	li r3, 1
/* 803B3344 003B0284  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3348 003B0288  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B334C 003B028C  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3350 003B0290  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B3354 003B0294  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3358 003B0298  80 9D 00 20 */	lwz r4, 0x20(r29)
/* 803B335C 003B029C  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3360 003B02A0  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3364 003B02A4  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3368 003B02A8  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B336C 003B02AC  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3370 003B02B0  48 00 00 08 */	b .L_803B3378
.L_803B3374:
/* 803B3374 003B02B4  38 60 00 00 */	li r3, 0
.L_803B3378:
/* 803B3378 003B02B8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B337C 003B02BC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B3380 003B02C0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B3384 003B02C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B3388 003B02C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B338C 003B02CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B3390 003B02D0  7C 08 03 A6 */	mtlr r0
/* 803B3394 003B02D4  38 21 00 30 */	addi r1, r1, 0x30
/* 803B3398 003B02D8  4E 80 00 20 */	blr 
.endfn create__Q23efx10TJgmAttackFPQ23efx3Arg

.fn create__Q23efx11TJgmAttackWFPQ23efx3Arg, global
/* 803B339C 003B02DC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B33A0 003B02E0  7C 08 02 A6 */	mflr r0
/* 803B33A4 003B02E4  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B33A8 003B02E8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B33AC 003B02EC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B33B0 003B02F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B33B4 003B02F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B33B8 003B02F8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B33BC 003B02FC  7C 9E 23 78 */	mr r30, r4
/* 803B33C0 003B0300  7C 7D 1B 78 */	mr r29, r3
/* 803B33C4 003B0304  7F C3 F3 78 */	mr r3, r30
/* 803B33C8 003B0308  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B33CC 003B030C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B33D0 003B0310  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B33D4 003B0314  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B33D8 003B0318  7D 89 03 A6 */	mtctr r12
/* 803B33DC 003B031C  4E 80 04 21 */	bctrl 
/* 803B33E0 003B0320  7C 64 1B 78 */	mr r4, r3
/* 803B33E4 003B0324  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B33E8 003B0328  4B D1 72 D9 */	bl strcmp
/* 803B33EC 003B032C  7C 60 00 34 */	cntlzw r0, r3
/* 803B33F0 003B0330  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B33F4 003B0334  40 82 00 18 */	bne .L_803B340C
/* 803B33F8 003B0338  38 7F 00 00 */	addi r3, r31, 0
/* 803B33FC 003B033C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3400 003B0340  38 80 00 A9 */	li r4, 0xa9
/* 803B3404 003B0344  4C C6 31 82 */	crclr 6
/* 803B3408 003B0348  4B C7 72 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B340C:
/* 803B340C 003B034C  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3410 003B0350  7F A3 EB 78 */	mr r3, r29
/* 803B3414 003B0354  7F C4 F3 78 */	mr r4, r30
/* 803B3418 003B0358  4B FF E7 FD */	bl "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg"
/* 803B341C 003B035C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3420 003B0360  41 82 00 54 */	beq .L_803B3474
/* 803B3424 003B0364  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 803B3428 003B0368  38 60 00 01 */	li r3, 1
/* 803B342C 003B036C  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3430 003B0370  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3434 003B0374  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3438 003B0378  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B343C 003B037C  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3440 003B0380  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 803B3444 003B0384  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3448 003B0388  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B344C 003B038C  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3450 003B0390  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B3454 003B0394  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3458 003B0398  80 9D 00 3C */	lwz r4, 0x3c(r29)
/* 803B345C 003B039C  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3460 003B03A0  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3464 003B03A4  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3468 003B03A8  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B346C 003B03AC  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3470 003B03B0  48 00 00 08 */	b .L_803B3478
.L_803B3474:
/* 803B3474 003B03B4  38 60 00 00 */	li r3, 0
.L_803B3478:
/* 803B3478 003B03B8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B347C 003B03BC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B3480 003B03C0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B3484 003B03C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B3488 003B03C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B348C 003B03CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B3490 003B03D0  7C 08 03 A6 */	mtlr r0
/* 803B3494 003B03D4  38 21 00 30 */	addi r1, r1, 0x30
/* 803B3498 003B03D8  4E 80 00 20 */	blr 
.endfn create__Q23efx11TJgmAttackWFPQ23efx3Arg

.fn create__Q23efx8TJgmBackFPQ23efx3Arg, global
/* 803B349C 003B03DC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B34A0 003B03E0  7C 08 02 A6 */	mflr r0
/* 803B34A4 003B03E4  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B34A8 003B03E8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B34AC 003B03EC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B34B0 003B03F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B34B4 003B03F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B34B8 003B03F8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B34BC 003B03FC  7C 9E 23 78 */	mr r30, r4
/* 803B34C0 003B0400  7C 7D 1B 78 */	mr r29, r3
/* 803B34C4 003B0404  7F C3 F3 78 */	mr r3, r30
/* 803B34C8 003B0408  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B34CC 003B040C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B34D0 003B0410  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B34D4 003B0414  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B34D8 003B0418  7D 89 03 A6 */	mtctr r12
/* 803B34DC 003B041C  4E 80 04 21 */	bctrl 
/* 803B34E0 003B0420  7C 64 1B 78 */	mr r4, r3
/* 803B34E4 003B0424  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B34E8 003B0428  4B D1 71 D9 */	bl strcmp
/* 803B34EC 003B042C  7C 60 00 34 */	cntlzw r0, r3
/* 803B34F0 003B0430  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B34F4 003B0434  40 82 00 18 */	bne .L_803B350C
/* 803B34F8 003B0438  38 7F 00 00 */	addi r3, r31, 0
/* 803B34FC 003B043C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3500 003B0440  38 80 00 B9 */	li r4, 0xb9
/* 803B3504 003B0444  4C C6 31 82 */	crclr 6
/* 803B3508 003B0448  4B C7 71 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B350C:
/* 803B350C 003B044C  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3510 003B0450  7F A3 EB 78 */	mr r3, r29
/* 803B3514 003B0454  7F C4 F3 78 */	mr r4, r30
/* 803B3518 003B0458  4B FF C1 D5 */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803B351C 003B045C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3520 003B0460  41 82 00 24 */	beq .L_803B3544
/* 803B3524 003B0464  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B3528 003B0468  38 60 00 01 */	li r3, 1
/* 803B352C 003B046C  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3530 003B0470  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3534 003B0474  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3538 003B0478  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B353C 003B047C  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3540 003B0480  48 00 00 08 */	b .L_803B3548
.L_803B3544:
/* 803B3544 003B0484  38 60 00 00 */	li r3, 0
.L_803B3548:
/* 803B3548 003B0488  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B354C 003B048C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B3550 003B0490  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B3554 003B0494  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B3558 003B0498  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B355C 003B049C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B3560 003B04A0  7C 08 03 A6 */	mtlr r0
/* 803B3564 003B04A4  38 21 00 30 */	addi r1, r1, 0x30
/* 803B3568 003B04A8  4E 80 00 20 */	blr 
.endfn create__Q23efx8TJgmBackFPQ23efx3Arg

.fn create__Q23efx9TJgmBackWFPQ23efx3Arg, global
/* 803B356C 003B04AC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B3570 003B04B0  7C 08 02 A6 */	mflr r0
/* 803B3574 003B04B4  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B3578 003B04B8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B357C 003B04BC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B3580 003B04C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B3584 003B04C4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B3588 003B04C8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B358C 003B04CC  7C 9E 23 78 */	mr r30, r4
/* 803B3590 003B04D0  7C 7D 1B 78 */	mr r29, r3
/* 803B3594 003B04D4  7F C3 F3 78 */	mr r3, r30
/* 803B3598 003B04D8  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B359C 003B04DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B35A0 003B04E0  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B35A4 003B04E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B35A8 003B04E8  7D 89 03 A6 */	mtctr r12
/* 803B35AC 003B04EC  4E 80 04 21 */	bctrl 
/* 803B35B0 003B04F0  7C 64 1B 78 */	mr r4, r3
/* 803B35B4 003B04F4  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B35B8 003B04F8  4B D1 71 09 */	bl strcmp
/* 803B35BC 003B04FC  7C 60 00 34 */	cntlzw r0, r3
/* 803B35C0 003B0500  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B35C4 003B0504  40 82 00 18 */	bne .L_803B35DC
/* 803B35C8 003B0508  38 7F 00 00 */	addi r3, r31, 0
/* 803B35CC 003B050C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B35D0 003B0510  38 80 00 C7 */	li r4, 0xc7
/* 803B35D4 003B0514  4C C6 31 82 */	crclr 6
/* 803B35D8 003B0518  4B C7 70 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B35DC:
/* 803B35DC 003B051C  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B35E0 003B0520  7F A3 EB 78 */	mr r3, r29
/* 803B35E4 003B0524  7F C4 F3 78 */	mr r4, r30
/* 803B35E8 003B0528  4B FF ED 9D */	bl "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg"
/* 803B35EC 003B052C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B35F0 003B0530  41 82 00 3C */	beq .L_803B362C
/* 803B35F4 003B0534  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 803B35F8 003B0538  38 60 00 01 */	li r3, 1
/* 803B35FC 003B053C  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3600 003B0540  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3604 003B0544  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3608 003B0548  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B360C 003B054C  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3610 003B0550  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 803B3614 003B0554  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3618 003B0558  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B361C 003B055C  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3620 003B0560  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B3624 003B0564  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3628 003B0568  48 00 00 08 */	b .L_803B3630
.L_803B362C:
/* 803B362C 003B056C  38 60 00 00 */	li r3, 0
.L_803B3630:
/* 803B3630 003B0570  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B3634 003B0574  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B3638 003B0578  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B363C 003B057C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B3640 003B0580  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B3644 003B0584  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B3648 003B0588  7C 08 03 A6 */	mtlr r0
/* 803B364C 003B058C  38 21 00 30 */	addi r1, r1, 0x30
/* 803B3650 003B0590  4E 80 00 20 */	blr 
.endfn create__Q23efx9TJgmBackWFPQ23efx3Arg

.fn create__Q23efx7TImoEatFPQ23efx3Arg, global
/* 803B3654 003B0594  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B3658 003B0598  7C 08 02 A6 */	mflr r0
/* 803B365C 003B059C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B3660 003B05A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B3664 003B05A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B3668 003B05A8  7C 9E 23 78 */	mr r30, r4
/* 803B366C 003B05AC  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B3670 003B05B0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B3674 003B05B4  7C 7D 1B 78 */	mr r29, r3
/* 803B3678 003B05B8  7F C3 F3 78 */	mr r3, r30
/* 803B367C 003B05BC  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B3680 003B05C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B3684 003B05C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B3688 003B05C8  7D 89 03 A6 */	mtctr r12
/* 803B368C 003B05CC  4E 80 04 21 */	bctrl 
/* 803B3690 003B05D0  7C 64 1B 78 */	mr r4, r3
/* 803B3694 003B05D4  38 7F 00 28 */	addi r3, r31, 0x28
/* 803B3698 003B05D8  4B D1 70 29 */	bl strcmp
/* 803B369C 003B05DC  7C 60 00 34 */	cntlzw r0, r3
/* 803B36A0 003B05E0  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B36A4 003B05E4  40 82 00 18 */	bne .L_803B36BC
/* 803B36A8 003B05E8  38 7F 00 00 */	addi r3, r31, 0
/* 803B36AC 003B05EC  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B36B0 003B05F0  38 80 00 D9 */	li r4, 0xd9
/* 803B36B4 003B05F4  4C C6 31 82 */	crclr 6
/* 803B36B8 003B05F8  4B C7 6F 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B36BC:
/* 803B36BC 003B05FC  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 803B36C0 003B0600  7F C4 F3 78 */	mr r4, r30
/* 803B36C4 003B0604  2C 00 00 01 */	cmpwi r0, 1
/* 803B36C8 003B0608  41 82 00 20 */	beq .L_803B36E8
/* 803B36CC 003B060C  40 80 00 24 */	bge .L_803B36F0
/* 803B36D0 003B0610  2C 00 00 00 */	cmpwi r0, 0
/* 803B36D4 003B0614  40 80 00 08 */	bge .L_803B36DC
/* 803B36D8 003B0618  48 00 00 18 */	b .L_803B36F0
.L_803B36DC:
/* 803B36DC 003B061C  38 00 00 B7 */	li r0, 0xb7
/* 803B36E0 003B0620  B0 1D 00 0C */	sth r0, 0xc(r29)
/* 803B36E4 003B0624  48 00 00 0C */	b .L_803B36F0
.L_803B36E8:
/* 803B36E8 003B0628  38 00 00 B6 */	li r0, 0xb6
/* 803B36EC 003B062C  B0 1D 00 0C */	sth r0, 0xc(r29)
.L_803B36F0:
/* 803B36F0 003B0630  7F A3 EB 78 */	mr r3, r29
/* 803B36F4 003B0634  4B FF BF F9 */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803B36F8 003B0638  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B36FC 003B063C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B3700 003B0640  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B3704 003B0644  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B3708 003B0648  7C 08 03 A6 */	mtlr r0
/* 803B370C 003B064C  38 21 00 20 */	addi r1, r1, 0x20
/* 803B3710 003B0650  4E 80 00 20 */	blr 
.endfn create__Q23efx7TImoEatFPQ23efx3Arg

.fn create__Q23efx13TUjinkoHd_ImoFPQ23efx3Arg, global
/* 803B3714 003B0654  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B3718 003B0658  7C 08 02 A6 */	mflr r0
/* 803B371C 003B065C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B3720 003B0660  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B3724 003B0664  7C 7F 1B 78 */	mr r31, r3
/* 803B3728 003B0668  4B FF BC 71 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 803B372C 003B066C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3730 003B0670  41 82 00 40 */	beq .L_803B3770
/* 803B3734 003B0674  80 9F 00 08 */	lwz r4, 8(r31)
/* 803B3738 003B0678  38 60 00 01 */	li r3, 1
/* 803B373C 003B067C  C0 02 12 C8 */	lfs f0, lbl_8051F628@sda21(r2)
/* 803B3740 003B0680  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 803B3744 003B0684  D0 04 00 9C */	stfs f0, 0x9c(r4)
/* 803B3748 003B0688  D0 04 00 A0 */	stfs f0, 0xa0(r4)
/* 803B374C 003B068C  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 803B3750 003B0690  D0 04 00 B4 */	stfs f0, 0xb4(r4)
/* 803B3754 003B0694  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 803B3758 003B0698  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 803B375C 003B069C  D0 04 00 9C */	stfs f0, 0x9c(r4)
/* 803B3760 003B06A0  D0 04 00 A0 */	stfs f0, 0xa0(r4)
/* 803B3764 003B06A4  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 803B3768 003B06A8  D0 04 00 B4 */	stfs f0, 0xb4(r4)
/* 803B376C 003B06AC  48 00 00 08 */	b .L_803B3774
.L_803B3770:
/* 803B3770 003B06B0  38 60 00 00 */	li r3, 0
.L_803B3774:
/* 803B3774 003B06B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B3778 003B06B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B377C 003B06BC  7C 08 03 A6 */	mtlr r0
/* 803B3780 003B06C0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B3784 003B06C4  4E 80 00 20 */	blr 
.endfn create__Q23efx13TUjinkoHd_ImoFPQ23efx3Arg

.fn create__Q23efx13TUjinkoAp_ImoFPQ23efx3Arg, global
/* 803B3788 003B06C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B378C 003B06CC  7C 08 02 A6 */	mflr r0
/* 803B3790 003B06D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B3794 003B06D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B3798 003B06D8  7C 7F 1B 78 */	mr r31, r3
/* 803B379C 003B06DC  4B FF BB FD */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 803B37A0 003B06E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B37A4 003B06E4  41 82 00 40 */	beq .L_803B37E4
/* 803B37A8 003B06E8  80 9F 00 08 */	lwz r4, 8(r31)
/* 803B37AC 003B06EC  38 60 00 01 */	li r3, 1
/* 803B37B0 003B06F0  C0 02 12 C8 */	lfs f0, lbl_8051F628@sda21(r2)
/* 803B37B4 003B06F4  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 803B37B8 003B06F8  D0 04 00 9C */	stfs f0, 0x9c(r4)
/* 803B37BC 003B06FC  D0 04 00 A0 */	stfs f0, 0xa0(r4)
/* 803B37C0 003B0700  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 803B37C4 003B0704  D0 04 00 B4 */	stfs f0, 0xb4(r4)
/* 803B37C8 003B0708  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 803B37CC 003B070C  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 803B37D0 003B0710  D0 04 00 9C */	stfs f0, 0x9c(r4)
/* 803B37D4 003B0714  D0 04 00 A0 */	stfs f0, 0xa0(r4)
/* 803B37D8 003B0718  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 803B37DC 003B071C  D0 04 00 B4 */	stfs f0, 0xb4(r4)
/* 803B37E0 003B0720  48 00 00 08 */	b .L_803B37E8
.L_803B37E4:
/* 803B37E4 003B0724  38 60 00 00 */	li r3, 0
.L_803B37E8:
/* 803B37E8 003B0728  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B37EC 003B072C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B37F0 003B0730  7C 08 03 A6 */	mtlr r0
/* 803B37F4 003B0734  38 21 00 10 */	addi r1, r1, 0x10
/* 803B37F8 003B0738  4E 80 00 20 */	blr 
.endfn create__Q23efx13TUjinkoAp_ImoFPQ23efx3Arg

.fn create__Q23efx9TImoSmokeFPQ23efx3Arg, global
/* 803B37FC 003B073C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B3800 003B0740  7C 08 02 A6 */	mflr r0
/* 803B3804 003B0744  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B3808 003B0748  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B380C 003B074C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B3810 003B0750  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B3814 003B0754  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B3818 003B0758  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B381C 003B075C  7C 9E 23 78 */	mr r30, r4
/* 803B3820 003B0760  7C 7D 1B 78 */	mr r29, r3
/* 803B3824 003B0764  7F C3 F3 78 */	mr r3, r30
/* 803B3828 003B0768  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B382C 003B076C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B3830 003B0770  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B3834 003B0774  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B3838 003B0778  7D 89 03 A6 */	mtctr r12
/* 803B383C 003B077C  4E 80 04 21 */	bctrl 
/* 803B3840 003B0780  7C 64 1B 78 */	mr r4, r3
/* 803B3844 003B0784  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B3848 003B0788  4B D1 6E 79 */	bl strcmp
/* 803B384C 003B078C  7C 60 00 34 */	cntlzw r0, r3
/* 803B3850 003B0790  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B3854 003B0794  40 82 00 18 */	bne .L_803B386C
/* 803B3858 003B0798  38 7F 00 00 */	addi r3, r31, 0
/* 803B385C 003B079C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3860 003B07A0  38 80 01 07 */	li r4, 0x107
/* 803B3864 003B07A4  4C C6 31 82 */	crclr 6
/* 803B3868 003B07A8  4B C7 6D D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B386C:
/* 803B386C 003B07AC  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3870 003B07B0  7F A3 EB 78 */	mr r3, r29
/* 803B3874 003B07B4  7F C4 F3 78 */	mr r4, r30
/* 803B3878 003B07B8  4B FF BE 75 */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803B387C 003B07BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3880 003B07C0  41 82 00 24 */	beq .L_803B38A4
/* 803B3884 003B07C4  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B3888 003B07C8  38 60 00 01 */	li r3, 1
/* 803B388C 003B07CC  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3890 003B07D0  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3894 003B07D4  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3898 003B07D8  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B389C 003B07DC  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B38A0 003B07E0  48 00 00 08 */	b .L_803B38A8
.L_803B38A4:
/* 803B38A4 003B07E4  38 60 00 00 */	li r3, 0
.L_803B38A8:
/* 803B38A8 003B07E8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B38AC 003B07EC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B38B0 003B07F0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B38B4 003B07F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B38B8 003B07F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B38BC 003B07FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B38C0 003B0800  7C 08 03 A6 */	mtlr r0
/* 803B38C4 003B0804  38 21 00 30 */	addi r1, r1, 0x30
/* 803B38C8 003B0808  4E 80 00 20 */	blr 
.endfn create__Q23efx9TImoSmokeFPQ23efx3Arg

.fn create__Q23efx12TOtaPartsoffFPQ23efx3Arg, global
/* 803B38CC 003B080C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B38D0 003B0810  7C 08 02 A6 */	mflr r0
/* 803B38D4 003B0814  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B38D8 003B0818  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B38DC 003B081C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B38E0 003B0820  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B38E4 003B0824  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B38E8 003B0828  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B38EC 003B082C  7C 9E 23 78 */	mr r30, r4
/* 803B38F0 003B0830  7C 7D 1B 78 */	mr r29, r3
/* 803B38F4 003B0834  7F C3 F3 78 */	mr r3, r30
/* 803B38F8 003B0838  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B38FC 003B083C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B3900 003B0840  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B3904 003B0844  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B3908 003B0848  7D 89 03 A6 */	mtctr r12
/* 803B390C 003B084C  4E 80 04 21 */	bctrl 
/* 803B3910 003B0850  7C 64 1B 78 */	mr r4, r3
/* 803B3914 003B0854  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B3918 003B0858  4B D1 6D A9 */	bl strcmp
/* 803B391C 003B085C  7C 60 00 34 */	cntlzw r0, r3
/* 803B3920 003B0860  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B3924 003B0864  40 82 00 18 */	bne .L_803B393C
/* 803B3928 003B0868  38 7F 00 00 */	addi r3, r31, 0
/* 803B392C 003B086C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3930 003B0870  38 80 01 17 */	li r4, 0x117
/* 803B3934 003B0874  4C C6 31 82 */	crclr 6
/* 803B3938 003B0878  4B C7 6D 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B393C:
/* 803B393C 003B087C  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3940 003B0880  7F A3 EB 78 */	mr r3, r29
/* 803B3944 003B0884  7F C4 F3 78 */	mr r4, r30
/* 803B3948 003B0888  4B FF B6 3D */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803B394C 003B088C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3950 003B0890  41 82 00 24 */	beq .L_803B3974
/* 803B3954 003B0894  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B3958 003B0898  38 60 00 01 */	li r3, 1
/* 803B395C 003B089C  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3960 003B08A0  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3964 003B08A4  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3968 003B08A8  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B396C 003B08AC  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3970 003B08B0  48 00 00 08 */	b .L_803B3978
.L_803B3974:
/* 803B3974 003B08B4  38 60 00 00 */	li r3, 0
.L_803B3978:
/* 803B3978 003B08B8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B397C 003B08BC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B3980 003B08C0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B3984 003B08C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B3988 003B08C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B398C 003B08CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B3990 003B08D0  7C 08 03 A6 */	mtlr r0
/* 803B3994 003B08D4  38 21 00 30 */	addi r1, r1, 0x30
/* 803B3998 003B08D8  4E 80 00 20 */	blr 
.endfn create__Q23efx12TOtaPartsoffFPQ23efx3Arg

.fn "setGlobalTranslation__Q23efx13TNewkurageSuiFR10Vector3<f>", global
/* 803B399C 003B08DC  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 803B39A0 003B08E0  C0 04 00 00 */	lfs f0, 0(r4)
/* 803B39A4 003B08E4  28 05 00 00 */	cmplwi r5, 0
/* 803B39A8 003B08E8  C0 24 00 04 */	lfs f1, 4(r4)
/* 803B39AC 003B08EC  C0 44 00 08 */	lfs f2, 8(r4)
/* 803B39B0 003B08F0  41 82 00 10 */	beq .L_803B39C0
/* 803B39B4 003B08F4  D0 05 00 A4 */	stfs f0, 0xa4(r5)
/* 803B39B8 003B08F8  D0 25 00 A8 */	stfs f1, 0xa8(r5)
/* 803B39BC 003B08FC  D0 45 00 AC */	stfs f2, 0xac(r5)
.L_803B39C0:
/* 803B39C0 003B0900  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 803B39C4 003B0904  28 05 00 00 */	cmplwi r5, 0
/* 803B39C8 003B0908  4D 82 00 20 */	beqlr 
/* 803B39CC 003B090C  D0 05 00 A4 */	stfs f0, 0xa4(r5)
/* 803B39D0 003B0910  D0 25 00 A8 */	stfs f1, 0xa8(r5)
/* 803B39D4 003B0914  D0 45 00 AC */	stfs f2, 0xac(r5)
/* 803B39D8 003B0918  4E 80 00 20 */	blr 
.endfn "setGlobalTranslation__Q23efx13TNewkurageSuiFR10Vector3<f>"

.fn setLifeTime__Q23efx14TNewkurageHireFs, global
/* 803B39DC 003B091C  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 803B39E0 003B0920  28 05 00 00 */	cmplwi r5, 0
/* 803B39E4 003B0924  41 82 00 08 */	beq .L_803B39EC
/* 803B39E8 003B0928  B0 85 00 52 */	sth r4, 0x52(r5)
.L_803B39EC:
/* 803B39EC 003B092C  80 A3 00 20 */	lwz r5, 0x20(r3)
/* 803B39F0 003B0930  28 05 00 00 */	cmplwi r5, 0
/* 803B39F4 003B0934  41 82 00 08 */	beq .L_803B39FC
/* 803B39F8 003B0938  B0 85 00 52 */	sth r4, 0x52(r5)
.L_803B39FC:
/* 803B39FC 003B093C  80 A3 00 34 */	lwz r5, 0x34(r3)
/* 803B3A00 003B0940  28 05 00 00 */	cmplwi r5, 0
/* 803B3A04 003B0944  4D 82 00 20 */	beqlr 
/* 803B3A08 003B0948  B0 85 00 52 */	sth r4, 0x52(r5)
/* 803B3A0C 003B094C  4E 80 00 20 */	blr 
.endfn setLifeTime__Q23efx14TNewkurageHireFs

.fn "setGlobalTranslation__Q23efx10TKurageSuiFR10Vector3<f>", global
/* 803B3A10 003B0950  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 803B3A14 003B0954  C0 04 00 00 */	lfs f0, 0(r4)
/* 803B3A18 003B0958  28 05 00 00 */	cmplwi r5, 0
/* 803B3A1C 003B095C  C0 24 00 04 */	lfs f1, 4(r4)
/* 803B3A20 003B0960  C0 44 00 08 */	lfs f2, 8(r4)
/* 803B3A24 003B0964  41 82 00 10 */	beq .L_803B3A34
/* 803B3A28 003B0968  D0 05 00 A4 */	stfs f0, 0xa4(r5)
/* 803B3A2C 003B096C  D0 25 00 A8 */	stfs f1, 0xa8(r5)
/* 803B3A30 003B0970  D0 45 00 AC */	stfs f2, 0xac(r5)
.L_803B3A34:
/* 803B3A34 003B0974  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 803B3A38 003B0978  28 05 00 00 */	cmplwi r5, 0
/* 803B3A3C 003B097C  4D 82 00 20 */	beqlr 
/* 803B3A40 003B0980  D0 05 00 A4 */	stfs f0, 0xa4(r5)
/* 803B3A44 003B0984  D0 25 00 A8 */	stfs f1, 0xa8(r5)
/* 803B3A48 003B0988  D0 45 00 AC */	stfs f2, 0xac(r5)
/* 803B3A4C 003B098C  4E 80 00 20 */	blr 
.endfn "setGlobalTranslation__Q23efx10TKurageSuiFR10Vector3<f>"

.fn setLifeTime__Q23efx11TKurageHireFs, global
/* 803B3A50 003B0990  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 803B3A54 003B0994  28 05 00 00 */	cmplwi r5, 0
/* 803B3A58 003B0998  41 82 00 08 */	beq .L_803B3A60
/* 803B3A5C 003B099C  B0 85 00 52 */	sth r4, 0x52(r5)
.L_803B3A60:
/* 803B3A60 003B09A0  80 A3 00 20 */	lwz r5, 0x20(r3)
/* 803B3A64 003B09A4  28 05 00 00 */	cmplwi r5, 0
/* 803B3A68 003B09A8  41 82 00 08 */	beq .L_803B3A70
/* 803B3A6C 003B09AC  B0 85 00 52 */	sth r4, 0x52(r5)
.L_803B3A70:
/* 803B3A70 003B09B0  80 A3 00 34 */	lwz r5, 0x34(r3)
/* 803B3A74 003B09B4  28 05 00 00 */	cmplwi r5, 0
/* 803B3A78 003B09B8  4D 82 00 20 */	beqlr 
/* 803B3A7C 003B09BC  B0 85 00 52 */	sth r4, 0x52(r5)
/* 803B3A80 003B09C0  4E 80 00 20 */	blr 
.endfn setLifeTime__Q23efx11TKurageHireFs

.fn setGlobalScale__Q23efx9TQuriGlowFf, global
/* 803B3A84 003B09C4  80 63 00 08 */	lwz r3, 8(r3)
/* 803B3A88 003B09C8  28 03 00 00 */	cmplwi r3, 0
/* 803B3A8C 003B09CC  4D 82 00 20 */	beqlr 
/* 803B3A90 003B09D0  D0 23 00 98 */	stfs f1, 0x98(r3)
/* 803B3A94 003B09D4  D0 23 00 9C */	stfs f1, 0x9c(r3)
/* 803B3A98 003B09D8  D0 23 00 A0 */	stfs f1, 0xa0(r3)
/* 803B3A9C 003B09DC  D0 23 00 B0 */	stfs f1, 0xb0(r3)
/* 803B3AA0 003B09E0  D0 23 00 B4 */	stfs f1, 0xb4(r3)
/* 803B3AA4 003B09E4  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx9TQuriGlowFf

.fn create__Q23efx14THebiAphd_baseFPQ23efx3Arg, global
/* 803B3AA8 003B09E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B3AAC 003B09EC  7C 08 02 A6 */	mflr r0
/* 803B3AB0 003B09F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B3AB4 003B09F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B3AB8 003B09F8  7C 9F 23 79 */	or. r31, r4, r4
/* 803B3ABC 003B09FC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B3AC0 003B0A00  7C 7E 1B 78 */	mr r30, r3
/* 803B3AC4 003B0A04  40 82 00 20 */	bne .L_803B3AE4
/* 803B3AC8 003B0A08  3C 60 80 49 */	lis r3, lbl_80495898@ha
/* 803B3ACC 003B0A0C  3C A0 80 49 */	lis r5, lbl_804958B4@ha
/* 803B3AD0 003B0A10  38 63 58 98 */	addi r3, r3, lbl_80495898@l
/* 803B3AD4 003B0A14  38 80 01 66 */	li r4, 0x166
/* 803B3AD8 003B0A18  38 A5 58 B4 */	addi r5, r5, lbl_804958B4@l
/* 803B3ADC 003B0A1C  4C C6 31 82 */	crclr 6
/* 803B3AE0 003B0A20  4B C7 6B 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B3AE4:
/* 803B3AE4 003B0A24  7F C3 F3 78 */	mr r3, r30
/* 803B3AE8 003B0A28  7F E4 FB 78 */	mr r4, r31
/* 803B3AEC 003B0A2C  4B FF B6 79 */	bl create__Q23efx8TSimple4FPQ23efx3Arg
/* 803B3AF0 003B0A30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3AF4 003B0A34  41 82 00 3C */	beq .L_803B3B30
/* 803B3AF8 003B0A38  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 803B3AFC 003B0A3C  38 60 00 01 */	li r3, 1
/* 803B3B00 003B0A40  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 803B3B04 003B0A44  90 04 00 24 */	stw r0, 0x24(r4)
/* 803B3B08 003B0A48  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 803B3B0C 003B0A4C  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 803B3B10 003B0A50  90 04 00 24 */	stw r0, 0x24(r4)
/* 803B3B14 003B0A54  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 803B3B18 003B0A58  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 803B3B1C 003B0A5C  90 04 00 24 */	stw r0, 0x24(r4)
/* 803B3B20 003B0A60  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 803B3B24 003B0A64  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 803B3B28 003B0A68  90 04 00 24 */	stw r0, 0x24(r4)
/* 803B3B2C 003B0A6C  48 00 00 08 */	b .L_803B3B34
.L_803B3B30:
/* 803B3B30 003B0A70  38 60 00 00 */	li r3, 0
.L_803B3B34:
/* 803B3B34 003B0A74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B3B38 003B0A78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B3B3C 003B0A7C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B3B40 003B0A80  7C 08 03 A6 */	mtlr r0
/* 803B3B44 003B0A84  38 21 00 10 */	addi r1, r1, 0x10
/* 803B3B48 003B0A88  4E 80 00 20 */	blr 
.endfn create__Q23efx14THebiAphd_baseFPQ23efx3Arg

.fn setGlobalAlpha__Q23efx13TKechappyTestFUc, global
/* 803B3B4C 003B0A8C  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 803B3B50 003B0A90  28 05 00 00 */	cmplwi r5, 0
/* 803B3B54 003B0A94  41 82 00 08 */	beq .L_803B3B5C
/* 803B3B58 003B0A98  98 85 00 BB */	stb r4, 0xbb(r5)
.L_803B3B5C:
/* 803B3B5C 003B0A9C  80 A3 00 20 */	lwz r5, 0x20(r3)
/* 803B3B60 003B0AA0  28 05 00 00 */	cmplwi r5, 0
/* 803B3B64 003B0AA4  41 82 00 08 */	beq .L_803B3B6C
/* 803B3B68 003B0AA8  98 85 00 BB */	stb r4, 0xbb(r5)
.L_803B3B6C:
/* 803B3B6C 003B0AAC  80 A3 00 34 */	lwz r5, 0x34(r3)
/* 803B3B70 003B0AB0  28 05 00 00 */	cmplwi r5, 0
/* 803B3B74 003B0AB4  4D 82 00 20 */	beqlr 
/* 803B3B78 003B0AB8  98 85 00 BB */	stb r4, 0xbb(r5)
/* 803B3B7C 003B0ABC  4E 80 00 20 */	blr 
.endfn setGlobalAlpha__Q23efx13TKechappyTestFUc

.fn setGlobalParticleScale__Q23efx13TKechappyTestFf, global
/* 803B3B80 003B0AC0  80 83 00 20 */	lwz r4, 0x20(r3)
/* 803B3B84 003B0AC4  28 04 00 00 */	cmplwi r4, 0
/* 803B3B88 003B0AC8  41 82 00 08 */	beq .L_803B3B90
/* 803B3B8C 003B0ACC  D0 24 00 B4 */	stfs f1, 0xb4(r4)
.L_803B3B90:
/* 803B3B90 003B0AD0  80 83 00 34 */	lwz r4, 0x34(r3)
/* 803B3B94 003B0AD4  28 04 00 00 */	cmplwi r4, 0
/* 803B3B98 003B0AD8  4D 82 00 20 */	beqlr 
/* 803B3B9C 003B0ADC  D0 24 00 B4 */	stfs f1, 0xb4(r4)
/* 803B3BA0 003B0AE0  4E 80 00 20 */	blr 
.endfn setGlobalParticleScale__Q23efx13TKechappyTestFf

.fn setAwayFromCenterSpeed__Q23efx13TKechappyTestFf, global
/* 803B3BA4 003B0AE4  80 83 00 20 */	lwz r4, 0x20(r3)
/* 803B3BA8 003B0AE8  28 04 00 00 */	cmplwi r4, 0
/* 803B3BAC 003B0AEC  41 82 00 08 */	beq .L_803B3BB4
/* 803B3BB0 003B0AF0  D0 24 00 34 */	stfs f1, 0x34(r4)
.L_803B3BB4:
/* 803B3BB4 003B0AF4  80 83 00 34 */	lwz r4, 0x34(r3)
/* 803B3BB8 003B0AF8  28 04 00 00 */	cmplwi r4, 0
/* 803B3BBC 003B0AFC  4D 82 00 20 */	beqlr 
/* 803B3BC0 003B0B00  D0 24 00 34 */	stfs f1, 0x34(r4)
/* 803B3BC4 003B0B04  4E 80 00 20 */	blr 
.endfn setAwayFromCenterSpeed__Q23efx13TKechappyTestFf

.fn setSpread__Q23efx13TKechappyTestFf, global
/* 803B3BC8 003B0B08  80 83 00 20 */	lwz r4, 0x20(r3)
/* 803B3BCC 003B0B0C  28 04 00 00 */	cmplwi r4, 0
/* 803B3BD0 003B0B10  41 82 00 08 */	beq .L_803B3BD8
/* 803B3BD4 003B0B14  D0 24 00 40 */	stfs f1, 0x40(r4)
.L_803B3BD8:
/* 803B3BD8 003B0B18  80 83 00 34 */	lwz r4, 0x34(r3)
/* 803B3BDC 003B0B1C  28 04 00 00 */	cmplwi r4, 0
/* 803B3BE0 003B0B20  4D 82 00 20 */	beqlr 
/* 803B3BE4 003B0B24  D0 24 00 40 */	stfs f1, 0x40(r4)
/* 803B3BE8 003B0B28  4E 80 00 20 */	blr 
.endfn setSpread__Q23efx13TKechappyTestFf

.fn "setGlobalDynamicsScale__Q23efx13TKechappyTestFR10Vector3<f>", global
/* 803B3BEC 003B0B2C  80 A3 00 20 */	lwz r5, 0x20(r3)
/* 803B3BF0 003B0B30  28 05 00 00 */	cmplwi r5, 0
/* 803B3BF4 003B0B34  41 82 00 1C */	beq .L_803B3C10
/* 803B3BF8 003B0B38  C0 04 00 00 */	lfs f0, 0(r4)
/* 803B3BFC 003B0B3C  D0 05 00 98 */	stfs f0, 0x98(r5)
/* 803B3C00 003B0B40  C0 04 00 04 */	lfs f0, 4(r4)
/* 803B3C04 003B0B44  D0 05 00 9C */	stfs f0, 0x9c(r5)
/* 803B3C08 003B0B48  C0 04 00 08 */	lfs f0, 8(r4)
/* 803B3C0C 003B0B4C  D0 05 00 A0 */	stfs f0, 0xa0(r5)
.L_803B3C10:
/* 803B3C10 003B0B50  80 A3 00 34 */	lwz r5, 0x34(r3)
/* 803B3C14 003B0B54  28 05 00 00 */	cmplwi r5, 0
/* 803B3C18 003B0B58  4D 82 00 20 */	beqlr 
/* 803B3C1C 003B0B5C  C0 04 00 00 */	lfs f0, 0(r4)
/* 803B3C20 003B0B60  D0 05 00 98 */	stfs f0, 0x98(r5)
/* 803B3C24 003B0B64  C0 04 00 04 */	lfs f0, 4(r4)
/* 803B3C28 003B0B68  D0 05 00 9C */	stfs f0, 0x9c(r5)
/* 803B3C2C 003B0B6C  C0 04 00 08 */	lfs f0, 8(r4)
/* 803B3C30 003B0B70  D0 05 00 A0 */	stfs f0, 0xa0(r5)
/* 803B3C34 003B0B74  4E 80 00 20 */	blr 
.endfn "setGlobalDynamicsScale__Q23efx13TKechappyTestFR10Vector3<f>"

.fn setRateLOD__Q23efx9TYakiBodyFi, global
/* 803B3C38 003B0B78  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803B3C3C 003B0B7C  3C A0 80 49 */	lis r5, lbl_804958CC@ha
/* 803B3C40 003B0B80  54 80 10 3A */	slwi r0, r4, 2
/* 803B3C44 003B0B84  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 803B3C48 003B0B88  3B A5 58 CC */	addi r29, r5, lbl_804958CC@l
/* 803B3C4C 003B0B8C  3B 61 00 08 */	addi r27, r1, 8
/* 803B3C50 003B0B90  7F 7B 02 14 */	add r27, r27, r0
/* 803B3C54 003B0B94  83 83 00 0C */	lwz r28, 0xc(r3)
/* 803B3C58 003B0B98  83 DD 00 00 */	lwz r30, 0(r29)
/* 803B3C5C 003B0B9C  83 FD 00 04 */	lwz r31, 4(r29)
/* 803B3C60 003B0BA0  28 1C 00 00 */	cmplwi r28, 0
/* 803B3C64 003B0BA4  81 9D 00 08 */	lwz r12, 8(r29)
/* 803B3C68 003B0BA8  81 7D 00 0C */	lwz r11, 0xc(r29)
/* 803B3C6C 003B0BAC  81 5D 00 10 */	lwz r10, 0x10(r29)
/* 803B3C70 003B0BB0  81 3D 00 14 */	lwz r9, 0x14(r29)
/* 803B3C74 003B0BB4  81 1D 00 18 */	lwz r8, 0x18(r29)
/* 803B3C78 003B0BB8  80 FD 00 1C */	lwz r7, 0x1c(r29)
/* 803B3C7C 003B0BBC  80 DD 00 20 */	lwz r6, 0x20(r29)
/* 803B3C80 003B0BC0  80 BD 00 24 */	lwz r5, 0x24(r29)
/* 803B3C84 003B0BC4  80 9D 00 28 */	lwz r4, 0x28(r29)
/* 803B3C88 003B0BC8  80 1D 00 2C */	lwz r0, 0x2c(r29)
/* 803B3C8C 003B0BCC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B3C90 003B0BD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B3C94 003B0BD4  91 81 00 10 */	stw r12, 0x10(r1)
/* 803B3C98 003B0BD8  91 61 00 14 */	stw r11, 0x14(r1)
/* 803B3C9C 003B0BDC  91 41 00 18 */	stw r10, 0x18(r1)
/* 803B3CA0 003B0BE0  91 21 00 1C */	stw r9, 0x1c(r1)
/* 803B3CA4 003B0BE4  91 01 00 20 */	stw r8, 0x20(r1)
/* 803B3CA8 003B0BE8  90 E1 00 24 */	stw r7, 0x24(r1)
/* 803B3CAC 003B0BEC  90 C1 00 28 */	stw r6, 0x28(r1)
/* 803B3CB0 003B0BF0  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 803B3CB4 003B0BF4  90 81 00 30 */	stw r4, 0x30(r1)
/* 803B3CB8 003B0BF8  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B3CBC 003B0BFC  41 82 00 0C */	beq .L_803B3CC8
/* 803B3CC0 003B0C00  C0 1B 00 00 */	lfs f0, 0(r27)
/* 803B3CC4 003B0C04  D0 1C 00 28 */	stfs f0, 0x28(r28)
.L_803B3CC8:
/* 803B3CC8 003B0C08  83 83 00 20 */	lwz r28, 0x20(r3)
/* 803B3CCC 003B0C0C  28 1C 00 00 */	cmplwi r28, 0
/* 803B3CD0 003B0C10  41 82 00 0C */	beq .L_803B3CDC
/* 803B3CD4 003B0C14  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 803B3CD8 003B0C18  D0 1C 00 28 */	stfs f0, 0x28(r28)
.L_803B3CDC:
/* 803B3CDC 003B0C1C  38 63 00 28 */	addi r3, r3, 0x28
/* 803B3CE0 003B0C20  83 83 00 0C */	lwz r28, 0xc(r3)
/* 803B3CE4 003B0C24  28 1C 00 00 */	cmplwi r28, 0
/* 803B3CE8 003B0C28  41 82 00 0C */	beq .L_803B3CF4
/* 803B3CEC 003B0C2C  C0 1B 00 18 */	lfs f0, 0x18(r27)
/* 803B3CF0 003B0C30  D0 1C 00 28 */	stfs f0, 0x28(r28)
.L_803B3CF4:
/* 803B3CF4 003B0C34  83 83 00 20 */	lwz r28, 0x20(r3)
/* 803B3CF8 003B0C38  28 1C 00 00 */	cmplwi r28, 0
/* 803B3CFC 003B0C3C  41 82 00 0C */	beq .L_803B3D08
/* 803B3D00 003B0C40  C0 1B 00 24 */	lfs f0, 0x24(r27)
/* 803B3D04 003B0C44  D0 1C 00 28 */	stfs f0, 0x28(r28)
.L_803B3D08:
/* 803B3D08 003B0C48  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 803B3D0C 003B0C4C  38 21 00 50 */	addi r1, r1, 0x50
/* 803B3D10 003B0C50  4E 80 00 20 */	blr 
.endfn setRateLOD__Q23efx9TYakiBodyFi

.fn create__Q23efx7TPanAppFPQ23efx3Arg, global
/* 803B3D14 003B0C54  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B3D18 003B0C58  7C 08 02 A6 */	mflr r0
/* 803B3D1C 003B0C5C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B3D20 003B0C60  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B3D24 003B0C64  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B3D28 003B0C68  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B3D2C 003B0C6C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B3D30 003B0C70  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B3D34 003B0C74  7C 9E 23 78 */	mr r30, r4
/* 803B3D38 003B0C78  7C 7D 1B 78 */	mr r29, r3
/* 803B3D3C 003B0C7C  7F C3 F3 78 */	mr r3, r30
/* 803B3D40 003B0C80  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B3D44 003B0C84  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B3D48 003B0C88  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B3D4C 003B0C8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B3D50 003B0C90  7D 89 03 A6 */	mtctr r12
/* 803B3D54 003B0C94  4E 80 04 21 */	bctrl 
/* 803B3D58 003B0C98  7C 64 1B 78 */	mr r4, r3
/* 803B3D5C 003B0C9C  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B3D60 003B0CA0  4B D1 69 61 */	bl strcmp
/* 803B3D64 003B0CA4  7C 60 00 34 */	cntlzw r0, r3
/* 803B3D68 003B0CA8  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B3D6C 003B0CAC  40 82 00 18 */	bne .L_803B3D84
/* 803B3D70 003B0CB0  38 7F 00 00 */	addi r3, r31, 0
/* 803B3D74 003B0CB4  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3D78 003B0CB8  38 80 01 C8 */	li r4, 0x1c8
/* 803B3D7C 003B0CBC  4C C6 31 82 */	crclr 6
/* 803B3D80 003B0CC0  4B C7 68 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B3D84:
/* 803B3D84 003B0CC4  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3D88 003B0CC8  7F A3 EB 78 */	mr r3, r29
/* 803B3D8C 003B0CCC  7F C4 F3 78 */	mr r4, r30
/* 803B3D90 003B0CD0  4B FF B1 F5 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803B3D94 003B0CD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3D98 003B0CD8  41 82 00 24 */	beq .L_803B3DBC
/* 803B3D9C 003B0CDC  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B3DA0 003B0CE0  38 60 00 01 */	li r3, 1
/* 803B3DA4 003B0CE4  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3DA8 003B0CE8  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3DAC 003B0CEC  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3DB0 003B0CF0  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B3DB4 003B0CF4  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3DB8 003B0CF8  48 00 00 08 */	b .L_803B3DC0
.L_803B3DBC:
/* 803B3DBC 003B0CFC  38 60 00 00 */	li r3, 0
.L_803B3DC0:
/* 803B3DC0 003B0D00  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B3DC4 003B0D04  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B3DC8 003B0D08  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B3DCC 003B0D0C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B3DD0 003B0D10  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B3DD4 003B0D14  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B3DD8 003B0D18  7C 08 03 A6 */	mtlr r0
/* 803B3DDC 003B0D1C  38 21 00 30 */	addi r1, r1, 0x30
/* 803B3DE0 003B0D20  4E 80 00 20 */	blr 
.endfn create__Q23efx7TPanAppFPQ23efx3Arg

.fn create__Q23efx8TPanHideFPQ23efx3Arg, global
/* 803B3DE4 003B0D24  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B3DE8 003B0D28  7C 08 02 A6 */	mflr r0
/* 803B3DEC 003B0D2C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B3DF0 003B0D30  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B3DF4 003B0D34  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B3DF8 003B0D38  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B3DFC 003B0D3C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B3E00 003B0D40  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B3E04 003B0D44  7C 9E 23 78 */	mr r30, r4
/* 803B3E08 003B0D48  7C 7D 1B 78 */	mr r29, r3
/* 803B3E0C 003B0D4C  7F C3 F3 78 */	mr r3, r30
/* 803B3E10 003B0D50  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B3E14 003B0D54  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B3E18 003B0D58  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B3E1C 003B0D5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B3E20 003B0D60  7D 89 03 A6 */	mtctr r12
/* 803B3E24 003B0D64  4E 80 04 21 */	bctrl 
/* 803B3E28 003B0D68  7C 64 1B 78 */	mr r4, r3
/* 803B3E2C 003B0D6C  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B3E30 003B0D70  4B D1 68 91 */	bl strcmp
/* 803B3E34 003B0D74  7C 60 00 34 */	cntlzw r0, r3
/* 803B3E38 003B0D78  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B3E3C 003B0D7C  40 82 00 18 */	bne .L_803B3E54
/* 803B3E40 003B0D80  38 7F 00 00 */	addi r3, r31, 0
/* 803B3E44 003B0D84  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3E48 003B0D88  38 80 01 D9 */	li r4, 0x1d9
/* 803B3E4C 003B0D8C  4C C6 31 82 */	crclr 6
/* 803B3E50 003B0D90  4B C7 67 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B3E54:
/* 803B3E54 003B0D94  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3E58 003B0D98  7F A3 EB 78 */	mr r3, r29
/* 803B3E5C 003B0D9C  7F C4 F3 78 */	mr r4, r30
/* 803B3E60 003B0DA0  4B FF B8 8D */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803B3E64 003B0DA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3E68 003B0DA8  41 82 00 24 */	beq .L_803B3E8C
/* 803B3E6C 003B0DAC  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B3E70 003B0DB0  38 60 00 01 */	li r3, 1
/* 803B3E74 003B0DB4  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3E78 003B0DB8  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3E7C 003B0DBC  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3E80 003B0DC0  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B3E84 003B0DC4  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3E88 003B0DC8  48 00 00 08 */	b .L_803B3E90
.L_803B3E8C:
/* 803B3E8C 003B0DCC  38 60 00 00 */	li r3, 0
.L_803B3E90:
/* 803B3E90 003B0DD0  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B3E94 003B0DD4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B3E98 003B0DD8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B3E9C 003B0DDC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B3EA0 003B0DE0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B3EA4 003B0DE4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B3EA8 003B0DE8  7C 08 03 A6 */	mtlr r0
/* 803B3EAC 003B0DEC  38 21 00 30 */	addi r1, r1, 0x30
/* 803B3EB0 003B0DF0  4E 80 00 20 */	blr 
.endfn create__Q23efx8TPanHideFPQ23efx3Arg

.fn create__Q23efx9TPanSmokeFPQ23efx3Arg, global
/* 803B3EB4 003B0DF4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B3EB8 003B0DF8  7C 08 02 A6 */	mflr r0
/* 803B3EBC 003B0DFC  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B3EC0 003B0E00  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B3EC4 003B0E04  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B3EC8 003B0E08  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B3ECC 003B0E0C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B3ED0 003B0E10  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B3ED4 003B0E14  7C 9E 23 78 */	mr r30, r4
/* 803B3ED8 003B0E18  7C 7D 1B 78 */	mr r29, r3
/* 803B3EDC 003B0E1C  7F C3 F3 78 */	mr r3, r30
/* 803B3EE0 003B0E20  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B3EE4 003B0E24  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B3EE8 003B0E28  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B3EEC 003B0E2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B3EF0 003B0E30  7D 89 03 A6 */	mtctr r12
/* 803B3EF4 003B0E34  4E 80 04 21 */	bctrl 
/* 803B3EF8 003B0E38  7C 64 1B 78 */	mr r4, r3
/* 803B3EFC 003B0E3C  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B3F00 003B0E40  4B D1 67 C1 */	bl strcmp
/* 803B3F04 003B0E44  7C 60 00 34 */	cntlzw r0, r3
/* 803B3F08 003B0E48  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B3F0C 003B0E4C  40 82 00 18 */	bne .L_803B3F24
/* 803B3F10 003B0E50  38 7F 00 00 */	addi r3, r31, 0
/* 803B3F14 003B0E54  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3F18 003B0E58  38 80 01 E9 */	li r4, 0x1e9
/* 803B3F1C 003B0E5C  4C C6 31 82 */	crclr 6
/* 803B3F20 003B0E60  4B C7 67 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B3F24:
/* 803B3F24 003B0E64  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3F28 003B0E68  7F A3 EB 78 */	mr r3, r29
/* 803B3F2C 003B0E6C  7F C4 F3 78 */	mr r4, r30
/* 803B3F30 003B0E70  4B FF B7 BD */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803B3F34 003B0E74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B3F38 003B0E78  41 82 00 24 */	beq .L_803B3F5C
/* 803B3F3C 003B0E7C  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B3F40 003B0E80  38 60 00 01 */	li r3, 1
/* 803B3F44 003B0E84  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B3F48 003B0E88  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B3F4C 003B0E8C  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B3F50 003B0E90  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B3F54 003B0E94  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B3F58 003B0E98  48 00 00 08 */	b .L_803B3F60
.L_803B3F5C:
/* 803B3F5C 003B0E9C  38 60 00 00 */	li r3, 0
.L_803B3F60:
/* 803B3F60 003B0EA0  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B3F64 003B0EA4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B3F68 003B0EA8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B3F6C 003B0EAC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B3F70 003B0EB0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B3F74 003B0EB4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B3F78 003B0EB8  7C 08 03 A6 */	mtlr r0
/* 803B3F7C 003B0EBC  38 21 00 30 */	addi r1, r1, 0x30
/* 803B3F80 003B0EC0  4E 80 00 20 */	blr 
.endfn create__Q23efx9TPanSmokeFPQ23efx3Arg

.fn create__Q23efx14TBabaFly_ver01FPQ23efx3Arg, global
/* 803B3F84 003B0EC4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B3F88 003B0EC8  7C 08 02 A6 */	mflr r0
/* 803B3F8C 003B0ECC  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B3F90 003B0ED0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B3F94 003B0ED4  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B3F98 003B0ED8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B3F9C 003B0EDC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B3FA0 003B0EE0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B3FA4 003B0EE4  7C 9E 23 78 */	mr r30, r4
/* 803B3FA8 003B0EE8  7C 7D 1B 78 */	mr r29, r3
/* 803B3FAC 003B0EEC  7F C3 F3 78 */	mr r3, r30
/* 803B3FB0 003B0EF0  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B3FB4 003B0EF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B3FB8 003B0EF8  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B3FBC 003B0EFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B3FC0 003B0F00  7D 89 03 A6 */	mtctr r12
/* 803B3FC4 003B0F04  4E 80 04 21 */	bctrl 
/* 803B3FC8 003B0F08  7C 64 1B 78 */	mr r4, r3
/* 803B3FCC 003B0F0C  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B3FD0 003B0F10  4B D1 66 F1 */	bl strcmp
/* 803B3FD4 003B0F14  7C 60 00 34 */	cntlzw r0, r3
/* 803B3FD8 003B0F18  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B3FDC 003B0F1C  40 82 00 18 */	bne .L_803B3FF4
/* 803B3FE0 003B0F20  38 7F 00 00 */	addi r3, r31, 0
/* 803B3FE4 003B0F24  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B3FE8 003B0F28  38 80 01 FA */	li r4, 0x1fa
/* 803B3FEC 003B0F2C  4C C6 31 82 */	crclr 6
/* 803B3FF0 003B0F30  4B C7 66 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B3FF4:
/* 803B3FF4 003B0F34  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B3FF8 003B0F38  7F A3 EB 78 */	mr r3, r29
/* 803B3FFC 003B0F3C  7F C4 F3 78 */	mr r4, r30
/* 803B4000 003B0F40  4B FF B6 ED */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803B4004 003B0F44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B4008 003B0F48  41 82 00 24 */	beq .L_803B402C
/* 803B400C 003B0F4C  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B4010 003B0F50  38 60 00 01 */	li r3, 1
/* 803B4014 003B0F54  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B4018 003B0F58  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B401C 003B0F5C  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B4020 003B0F60  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B4024 003B0F64  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B4028 003B0F68  48 00 00 08 */	b .L_803B4030
.L_803B402C:
/* 803B402C 003B0F6C  38 60 00 00 */	li r3, 0
.L_803B4030:
/* 803B4030 003B0F70  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B4034 003B0F74  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B4038 003B0F78  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B403C 003B0F7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B4040 003B0F80  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B4044 003B0F84  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B4048 003B0F88  7C 08 03 A6 */	mtlr r0
/* 803B404C 003B0F8C  38 21 00 30 */	addi r1, r1, 0x30
/* 803B4050 003B0F90  4E 80 00 20 */	blr 
.endfn create__Q23efx14TBabaFly_ver01FPQ23efx3Arg

.fn create__Q23efx7TBabaHeFPQ23efx3Arg, global
/* 803B4054 003B0F94  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 803B4058 003B0F98  7C 08 02 A6 */	mflr r0
/* 803B405C 003B0F9C  90 01 00 94 */	stw r0, 0x94(r1)
/* 803B4060 003B0FA0  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 803B4064 003B0FA4  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 803B4068 003B0FA8  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 803B406C 003B0FAC  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 803B4070 003B0FB0  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 803B4074 003B0FB4  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 803B4078 003B0FB8  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803B407C 003B0FBC  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803B4080 003B0FC0  93 A1 00 54 */	stw r29, 0x54(r1)
/* 803B4084 003B0FC4  7C 9E 23 78 */	mr r30, r4
/* 803B4088 003B0FC8  7C 7D 1B 78 */	mr r29, r3
/* 803B408C 003B0FCC  7F C3 F3 78 */	mr r3, r30
/* 803B4090 003B0FD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B4094 003B0FD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B4098 003B0FD8  7D 89 03 A6 */	mtctr r12
/* 803B409C 003B0FDC  4E 80 04 21 */	bctrl 
/* 803B40A0 003B0FE0  7C 64 1B 78 */	mr r4, r3
/* 803B40A4 003B0FE4  38 62 12 CC */	addi r3, r2, lbl_8051F62C@sda21
/* 803B40A8 003B0FE8  4B D1 66 19 */	bl strcmp
/* 803B40AC 003B0FEC  7C 60 00 34 */	cntlzw r0, r3
/* 803B40B0 003B0FF0  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B40B4 003B0FF4  40 82 00 20 */	bne .L_803B40D4
/* 803B40B8 003B0FF8  3C 60 80 49 */	lis r3, lbl_80495898@ha
/* 803B40BC 003B0FFC  3C A0 80 49 */	lis r5, lbl_804958B4@ha
/* 803B40C0 003B1000  38 63 58 98 */	addi r3, r3, lbl_80495898@l
/* 803B40C4 003B1004  38 80 02 09 */	li r4, 0x209
/* 803B40C8 003B1008  38 A5 58 B4 */	addi r5, r5, lbl_804958B4@l
/* 803B40CC 003B100C  4C C6 31 82 */	crclr 6
/* 803B40D0 003B1010  4B C7 65 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B40D4:
/* 803B40D4 003B1014  C3 FE 00 04 */	lfs f31, 4(r30)
/* 803B40D8 003B1018  38 61 00 14 */	addi r3, r1, 0x14
/* 803B40DC 003B101C  C3 DE 00 08 */	lfs f30, 8(r30)
/* 803B40E0 003B1020  38 80 00 79 */	li r4, 0x79
/* 803B40E4 003B1024  C3 BE 00 0C */	lfs f29, 0xc(r30)
/* 803B40E8 003B1028  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 803B40EC 003B102C  4B D3 64 29 */	bl PSMTXRotRad
/* 803B40F0 003B1030  D3 E1 00 20 */	stfs f31, 0x20(r1)
/* 803B40F4 003B1034  7F A3 EB 78 */	mr r3, r29
/* 803B40F8 003B1038  7F C4 F3 78 */	mr r4, r30
/* 803B40FC 003B103C  D3 C1 00 30 */	stfs f30, 0x30(r1)
/* 803B4100 003B1040  D3 A1 00 40 */	stfs f29, 0x40(r1)
/* 803B4104 003B1044  4B FF AF 11 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803B4108 003B1048  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B410C 003B104C  41 82 00 94 */	beq .L_803B41A0
/* 803B4110 003B1050  3B C0 00 00 */	li r30, 0
/* 803B4114 003B1054  7F BF EB 78 */	mr r31, r29
.L_803B4118:
/* 803B4118 003B1058  80 BF 00 08 */	lwz r5, 8(r31)
/* 803B411C 003B105C  38 61 00 14 */	addi r3, r1, 0x14
/* 803B4120 003B1060  38 85 00 68 */	addi r4, r5, 0x68
/* 803B4124 003B1064  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803B4128 003B1068  4B CD FB F5 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803B412C 003B106C  3B DE 00 01 */	addi r30, r30, 1
/* 803B4130 003B1070  3B FF 00 04 */	addi r31, r31, 4
/* 803B4134 003B1074  2C 1E 00 02 */	cmpwi r30, 2
/* 803B4138 003B1078  41 80 FF E0 */	blt .L_803B4118
/* 803B413C 003B107C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 803B4140 003B1080  38 60 00 01 */	li r3, 1
/* 803B4144 003B1084  C0 02 12 D4 */	lfs f0, lbl_8051F634@sda21(r2)
/* 803B4148 003B1088  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 803B414C 003B108C  EC 61 00 32 */	fmuls f3, f1, f0
/* 803B4150 003B1090  C0 81 00 3C */	lfs f4, 0x3c(r1)
/* 803B4154 003B1094  EC 45 00 32 */	fmuls f2, f5, f0
/* 803B4158 003B1098  D0 21 00 08 */	stfs f1, 8(r1)
/* 803B415C 003B109C  EC 24 00 32 */	fmuls f1, f4, f0
/* 803B4160 003B10A0  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 803B4164 003B10A4  EC 03 F8 2A */	fadds f0, f3, f31
/* 803B4168 003B10A8  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 803B416C 003B10AC  EC A2 F0 2A */	fadds f5, f2, f30
/* 803B4170 003B10B0  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 803B4174 003B10B4  EC 81 E8 2A */	fadds f4, f1, f29
/* 803B4178 003B10B8  D0 04 00 A4 */	stfs f0, 0xa4(r4)
/* 803B417C 003B10BC  D0 61 00 08 */	stfs f3, 8(r1)
/* 803B4180 003B10C0  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803B4184 003B10C4  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803B4188 003B10C8  D0 A4 00 A8 */	stfs f5, 0xa8(r4)
/* 803B418C 003B10CC  D0 01 00 08 */	stfs f0, 8(r1)
/* 803B4190 003B10D0  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 803B4194 003B10D4  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 803B4198 003B10D8  D0 84 00 AC */	stfs f4, 0xac(r4)
/* 803B419C 003B10DC  48 00 00 08 */	b .L_803B41A4
.L_803B41A0:
/* 803B41A0 003B10E0  38 60 00 00 */	li r3, 0
.L_803B41A4:
/* 803B41A4 003B10E4  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803B41A8 003B10E8  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803B41AC 003B10EC  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803B41B0 003B10F0  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803B41B4 003B10F4  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 803B41B8 003B10F8  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 803B41BC 003B10FC  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803B41C0 003B1100  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803B41C4 003B1104  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803B41C8 003B1108  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 803B41CC 003B110C  7C 08 03 A6 */	mtlr r0
/* 803B41D0 003B1110  38 21 00 90 */	addi r1, r1, 0x90
/* 803B41D4 003B1114  4E 80 00 20 */	blr 
.endfn create__Q23efx7TBabaHeFPQ23efx3Arg

.fn create__Q23efx10TKoganeHitFPQ23efx3Arg, global
/* 803B41D8 003B1118  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B41DC 003B111C  7C 08 02 A6 */	mflr r0
/* 803B41E0 003B1120  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B41E4 003B1124  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B41E8 003B1128  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B41EC 003B112C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B41F0 003B1130  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B41F4 003B1134  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B41F8 003B1138  7C 9E 23 78 */	mr r30, r4
/* 803B41FC 003B113C  7C 7D 1B 78 */	mr r29, r3
/* 803B4200 003B1140  7F C3 F3 78 */	mr r3, r30
/* 803B4204 003B1144  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B4208 003B1148  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B420C 003B114C  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B4210 003B1150  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B4214 003B1154  7D 89 03 A6 */	mtctr r12
/* 803B4218 003B1158  4E 80 04 21 */	bctrl 
/* 803B421C 003B115C  7C 64 1B 78 */	mr r4, r3
/* 803B4220 003B1160  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B4224 003B1164  4B D1 64 9D */	bl strcmp
/* 803B4228 003B1168  7C 60 00 34 */	cntlzw r0, r3
/* 803B422C 003B116C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B4230 003B1170  40 82 00 18 */	bne .L_803B4248
/* 803B4234 003B1174  38 7F 00 00 */	addi r3, r31, 0
/* 803B4238 003B1178  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B423C 003B117C  38 80 02 22 */	li r4, 0x222
/* 803B4240 003B1180  4C C6 31 82 */	crclr 6
/* 803B4244 003B1184  4B C7 63 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B4248:
/* 803B4248 003B1188  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B424C 003B118C  7F A3 EB 78 */	mr r3, r29
/* 803B4250 003B1190  7F C4 F3 78 */	mr r4, r30
/* 803B4254 003B1194  4B FF AD C1 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803B4258 003B1198  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B425C 003B119C  41 82 00 3C */	beq .L_803B4298
/* 803B4260 003B11A0  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B4264 003B11A4  38 60 00 01 */	li r3, 1
/* 803B4268 003B11A8  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B426C 003B11AC  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B4270 003B11B0  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B4274 003B11B4  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B4278 003B11B8  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B427C 003B11BC  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 803B4280 003B11C0  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B4284 003B11C4  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B4288 003B11C8  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B428C 003B11CC  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B4290 003B11D0  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B4294 003B11D4  48 00 00 08 */	b .L_803B429C
.L_803B4298:
/* 803B4298 003B11D8  38 60 00 00 */	li r3, 0
.L_803B429C:
/* 803B429C 003B11DC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B42A0 003B11E0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B42A4 003B11E4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B42A8 003B11E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B42AC 003B11EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B42B0 003B11F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B42B4 003B11F4  7C 08 03 A6 */	mtlr r0
/* 803B42B8 003B11F8  38 21 00 30 */	addi r1, r1, 0x30
/* 803B42BC 003B11FC  4E 80 00 20 */	blr 
.endfn create__Q23efx10TKoganeHitFPQ23efx3Arg

.fn create__Q23efx11TKoganeDiveFPQ23efx3Arg, global
/* 803B42C0 003B1200  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B42C4 003B1204  7C 08 02 A6 */	mflr r0
/* 803B42C8 003B1208  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B42CC 003B120C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803B42D0 003B1210  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803B42D4 003B1214  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B42D8 003B1218  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B42DC 003B121C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B42E0 003B1220  7C 9E 23 78 */	mr r30, r4
/* 803B42E4 003B1224  7C 7D 1B 78 */	mr r29, r3
/* 803B42E8 003B1228  7F C3 F3 78 */	mr r3, r30
/* 803B42EC 003B122C  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B42F0 003B1230  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B42F4 003B1234  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B42F8 003B1238  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B42FC 003B123C  7D 89 03 A6 */	mtctr r12
/* 803B4300 003B1240  4E 80 04 21 */	bctrl 
/* 803B4304 003B1244  7C 64 1B 78 */	mr r4, r3
/* 803B4308 003B1248  38 7F 00 10 */	addi r3, r31, 0x10
/* 803B430C 003B124C  4B D1 63 B5 */	bl strcmp
/* 803B4310 003B1250  7C 60 00 34 */	cntlzw r0, r3
/* 803B4314 003B1254  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B4318 003B1258  40 82 00 18 */	bne .L_803B4330
/* 803B431C 003B125C  38 7F 00 00 */	addi r3, r31, 0
/* 803B4320 003B1260  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B4324 003B1264  38 80 02 32 */	li r4, 0x232
/* 803B4328 003B1268  4C C6 31 82 */	crclr 6
/* 803B432C 003B126C  4B C7 63 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B4330:
/* 803B4330 003B1270  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803B4334 003B1274  7F A3 EB 78 */	mr r3, r29
/* 803B4338 003B1278  7F C4 F3 78 */	mr r4, r30
/* 803B433C 003B127C  4B FF AC D9 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803B4340 003B1280  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B4344 003B1284  41 82 00 3C */	beq .L_803B4380
/* 803B4348 003B1288  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B434C 003B128C  38 60 00 01 */	li r3, 1
/* 803B4350 003B1290  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B4354 003B1294  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B4358 003B1298  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B435C 003B129C  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B4360 003B12A0  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B4364 003B12A4  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 803B4368 003B12A8  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803B436C 003B12AC  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803B4370 003B12B0  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803B4374 003B12B4  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803B4378 003B12B8  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803B437C 003B12BC  48 00 00 08 */	b .L_803B4384
.L_803B4380:
/* 803B4380 003B12C0  38 60 00 00 */	li r3, 0
.L_803B4384:
/* 803B4384 003B12C4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803B4388 003B12C8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B438C 003B12CC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803B4390 003B12D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B4394 003B12D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B4398 003B12D8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B439C 003B12DC  7C 08 03 A6 */	mtlr r0
/* 803B43A0 003B12E0  38 21 00 30 */	addi r1, r1, 0x30
/* 803B43A4 003B12E4  4E 80 00 20 */	blr 
.endfn create__Q23efx11TKoganeDiveFPQ23efx3Arg

.fn init__Q23efx26TParticleCallBack_TankFireFP14JPABaseEmitterP15JPABaseParticle, global
/* 803B43A8 003B12E8  4E 80 00 20 */	blr 
.endfn init__Q23efx26TParticleCallBack_TankFireFP14JPABaseEmitterP15JPABaseParticle

.fn execute__Q23efx26TParticleCallBack_TankFireFP14JPABaseEmitterP15JPABaseParticle, global
/* 803B43AC 003B12EC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803B43B0 003B12F0  7C 08 02 A6 */	mflr r0
/* 803B43B4 003B12F4  90 01 00 44 */	stw r0, 0x44(r1)
/* 803B43B8 003B12F8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 803B43BC 003B12FC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 803B43C0 003B1300  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 803B43C4 003B1304  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 803B43C8 003B1308  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B43CC 003B130C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B43D0 003B1310  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B43D4 003B1314  7C BF 2B 78 */	mr r31, r5
/* 803B43D8 003B1318  7C 7D 1B 78 */	mr r29, r3
/* 803B43DC 003B131C  7C 9E 23 78 */	mr r30, r4
/* 803B43E0 003B1320  7F E3 FB 78 */	mr r3, r31
/* 803B43E4 003B1324  4B CE 11 E5 */	bl getCalcCurrentPositionZ__15JPABaseParticleCFPC14JPABaseEmitter
/* 803B43E8 003B1328  FF C0 08 90 */	fmr f30, f1
/* 803B43EC 003B132C  7F E3 FB 78 */	mr r3, r31
/* 803B43F0 003B1330  7F C4 F3 78 */	mr r4, r30
/* 803B43F4 003B1334  4B CE 11 B1 */	bl getCalcCurrentPositionY__15JPABaseParticleCFPC14JPABaseEmitter
/* 803B43F8 003B1338  FF E0 08 90 */	fmr f31, f1
/* 803B43FC 003B133C  7F E3 FB 78 */	mr r3, r31
/* 803B4400 003B1340  7F C4 F3 78 */	mr r4, r30
/* 803B4404 003B1344  4B CE 11 7D */	bl getCalcCurrentPositionX__15JPABaseParticleCFPC14JPABaseEmitter
/* 803B4408 003B1348  C0 1E 00 A4 */	lfs f0, 0xa4(r30)
/* 803B440C 003B134C  C0 5E 00 A8 */	lfs f2, 0xa8(r30)
/* 803B4410 003B1350  EC 80 08 28 */	fsubs f4, f0, f1
/* 803B4414 003B1354  C0 7E 00 AC */	lfs f3, 0xac(r30)
/* 803B4418 003B1358  EC 42 F8 28 */	fsubs f2, f2, f31
/* 803B441C 003B135C  C0 02 12 D8 */	lfs f0, lbl_8051F638@sda21(r2)
/* 803B4420 003B1360  EC A3 F0 28 */	fsubs f5, f3, f30
/* 803B4424 003B1364  EC 64 01 32 */	fmuls f3, f4, f4
/* 803B4428 003B1368  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803B442C 003B136C  EC 85 01 72 */	fmuls f4, f5, f5
/* 803B4430 003B1370  EC 43 10 2A */	fadds f2, f3, f2
/* 803B4434 003B1374  EC 84 10 2A */	fadds f4, f4, f2
/* 803B4438 003B1378  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803B443C 003B137C  4C 40 13 82 */	cror 2, 0, 2
/* 803B4440 003B1380  40 82 00 08 */	bne .L_803B4448
/* 803B4444 003B1384  48 00 00 28 */	b .L_803B446C
.L_803B4448:
/* 803B4448 003B1388  FC A0 20 34 */	frsqrte f5, f4
/* 803B444C 003B138C  C0 62 12 DC */	lfs f3, lbl_8051F63C@sda21(r2)
/* 803B4450 003B1390  C0 02 12 E0 */	lfs f0, lbl_8051F640@sda21(r2)
/* 803B4454 003B1394  FC A0 28 18 */	frsp f5, f5
/* 803B4458 003B1398  EC 45 01 72 */	fmuls f2, f5, f5
/* 803B445C 003B139C  EC 63 01 72 */	fmuls f3, f3, f5
/* 803B4460 003B13A0  EC 04 00 BC */	fnmsubs f0, f4, f2, f0
/* 803B4464 003B13A4  EC 03 00 32 */	fmuls f0, f3, f0
/* 803B4468 003B13A8  EC 84 00 32 */	fmuls f4, f4, f0
.L_803B446C:
/* 803B446C 003B13AC  C0 1D 00 04 */	lfs f0, 4(r29)
/* 803B4470 003B13B0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803B4474 003B13B4  40 81 00 50 */	ble .L_803B44C4
/* 803B4478 003B13B8  80 1F 00 7C */	lwz r0, 0x7c(r31)
/* 803B447C 003B13BC  60 00 00 02 */	ori r0, r0, 2
/* 803B4480 003B13C0  90 1F 00 7C */	stw r0, 0x7c(r31)
/* 803B4484 003B13C4  80 9D 00 08 */	lwz r4, 8(r29)
/* 803B4488 003B13C8  28 04 00 00 */	cmplwi r4, 0
/* 803B448C 003B13CC  41 82 00 38 */	beq .L_803B44C4
/* 803B4490 003B13D0  80 64 00 14 */	lwz r3, 0x14(r4)
/* 803B4494 003B13D4  80 04 00 18 */	lwz r0, 0x18(r4)
/* 803B4498 003B13D8  7C 03 00 00 */	cmpw r3, r0
/* 803B449C 003B13DC  40 80 00 28 */	bge .L_803B44C4
/* 803B44A0 003B13E0  1C 03 00 0C */	mulli r0, r3, 0xc
/* 803B44A4 003B13E4  80 64 00 10 */	lwz r3, 0x10(r4)
/* 803B44A8 003B13E8  7C 63 02 14 */	add r3, r3, r0
/* 803B44AC 003B13EC  D0 23 00 00 */	stfs f1, 0(r3)
/* 803B44B0 003B13F0  D3 E3 00 04 */	stfs f31, 4(r3)
/* 803B44B4 003B13F4  D3 C3 00 08 */	stfs f30, 8(r3)
/* 803B44B8 003B13F8  80 64 00 14 */	lwz r3, 0x14(r4)
/* 803B44BC 003B13FC  38 03 00 01 */	addi r0, r3, 1
/* 803B44C0 003B1400  90 04 00 14 */	stw r0, 0x14(r4)
.L_803B44C4:
/* 803B44C4 003B1404  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 803B44C8 003B1408  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 803B44CC 003B140C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 803B44D0 003B1410  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 803B44D4 003B1414  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B44D8 003B1418  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B44DC 003B141C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803B44E0 003B1420  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B44E4 003B1424  7C 08 03 A6 */	mtlr r0
/* 803B44E8 003B1428  38 21 00 40 */	addi r1, r1, 0x40
/* 803B44EC 003B142C  4E 80 00 20 */	blr 
.endfn execute__Q23efx26TParticleCallBack_TankFireFP14JPABaseEmitterP15JPABaseParticle

.fn create__Q23efx12TTankFireABCFPQ23efx3Arg, global
/* 803B44F0 003B1430  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B44F4 003B1434  7C 08 02 A6 */	mflr r0
/* 803B44F8 003B1438  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B44FC 003B143C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B4500 003B1440  7C 9F 23 78 */	mr r31, r4
/* 803B4504 003B1444  38 80 00 00 */	li r4, 0
/* 803B4508 003B1448  93 C1 00 08 */	stw r30, 8(r1)
/* 803B450C 003B144C  7C 7E 1B 78 */	mr r30, r3
/* 803B4510 003B1450  38 1E 00 4C */	addi r0, r30, 0x4c
/* 803B4514 003B1454  90 03 00 48 */	stw r0, 0x48(r3)
/* 803B4518 003B1458  80 63 00 48 */	lwz r3, 0x48(r3)
/* 803B451C 003B145C  81 83 00 00 */	lwz r12, 0(r3)
/* 803B4520 003B1460  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B4524 003B1464  7D 89 03 A6 */	mtctr r12
/* 803B4528 003B1468  4E 80 04 21 */	bctrl 
/* 803B452C 003B146C  C0 02 12 E4 */	lfs f0, lbl_8051F644@sda21(r2)
/* 803B4530 003B1470  7F C3 F3 78 */	mr r3, r30
/* 803B4534 003B1474  7F E4 FB 78 */	mr r4, r31
/* 803B4538 003B1478  D0 1E 00 44 */	stfs f0, 0x44(r30)
/* 803B453C 003B147C  4B FF D8 B5 */	bl "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"
/* 803B4540 003B1480  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B4544 003B1484  41 82 00 20 */	beq .L_803B4564
/* 803B4548 003B1488  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 803B454C 003B148C  38 1E 00 40 */	addi r0, r30, 0x40
/* 803B4550 003B1490  90 03 00 F0 */	stw r0, 0xf0(r3)
/* 803B4554 003B1494  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 803B4558 003B1498  90 03 00 F0 */	stw r0, 0xf0(r3)
/* 803B455C 003B149C  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 803B4560 003B14A0  90 03 00 F0 */	stw r0, 0xf0(r3)
.L_803B4564:
/* 803B4564 003B14A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B4568 003B14A8  38 60 00 01 */	li r3, 1
/* 803B456C 003B14AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B4570 003B14B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B4574 003B14B4  7C 08 03 A6 */	mtlr r0
/* 803B4578 003B14B8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B457C 003B14BC  4E 80 00 20 */	blr 
.endfn create__Q23efx12TTankFireABCFPQ23efx3Arg

.fn create__Q23efx12TTankFireINDFPQ23efx3Arg, global
/* 803B4580 003B14C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B4584 003B14C4  7C 08 02 A6 */	mflr r0
/* 803B4588 003B14C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B458C 003B14CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B4590 003B14D0  7C 7F 1B 78 */	mr r31, r3
/* 803B4594 003B14D4  4B FF B1 59 */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803B4598 003B14D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B459C 003B14DC  41 82 00 10 */	beq .L_803B45AC
/* 803B45A0 003B14E0  80 7F 00 08 */	lwz r3, 8(r31)
/* 803B45A4 003B14E4  38 1F 00 14 */	addi r0, r31, 0x14
/* 803B45A8 003B14E8  90 03 00 F0 */	stw r0, 0xf0(r3)
.L_803B45AC:
/* 803B45AC 003B14EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B45B0 003B14F0  38 60 00 01 */	li r3, 1
/* 803B45B4 003B14F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B45B8 003B14F8  7C 08 03 A6 */	mtlr r0
/* 803B45BC 003B14FC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B45C0 003B1500  4E 80 00 20 */	blr 
.endfn create__Q23efx12TTankFireINDFPQ23efx3Arg

.fn create__Q23efx9TTankFireFPQ23efx3Arg, global
/* 803B45C4 003B1504  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B45C8 003B1508  7C 08 02 A6 */	mflr r0
/* 803B45CC 003B150C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B45D0 003B1510  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B45D4 003B1514  3B E0 00 00 */	li r31, 0
/* 803B45D8 003B1518  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B45DC 003B151C  7C 9E 23 78 */	mr r30, r4
/* 803B45E0 003B1520  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B45E4 003B1524  7C 7D 1B 78 */	mr r29, r3
/* 803B45E8 003B1528  38 7D 00 04 */	addi r3, r29, 4
/* 803B45EC 003B152C  81 9D 00 04 */	lwz r12, 4(r29)
/* 803B45F0 003B1530  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B45F4 003B1534  7D 89 03 A6 */	mtctr r12
/* 803B45F8 003B1538  4E 80 04 21 */	bctrl 
/* 803B45FC 003B153C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B4600 003B1540  41 82 00 28 */	beq .L_803B4628
/* 803B4604 003B1544  38 7D 00 6C */	addi r3, r29, 0x6c
/* 803B4608 003B1548  7F C4 F3 78 */	mr r4, r30
/* 803B460C 003B154C  81 9D 00 6C */	lwz r12, 0x6c(r29)
/* 803B4610 003B1550  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B4614 003B1554  7D 89 03 A6 */	mtctr r12
/* 803B4618 003B1558  4E 80 04 21 */	bctrl 
/* 803B461C 003B155C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B4620 003B1560  41 82 00 08 */	beq .L_803B4628
/* 803B4624 003B1564  3B E0 00 01 */	li r31, 1
.L_803B4628:
/* 803B4628 003B1568  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B462C 003B156C  7F E3 FB 78 */	mr r3, r31
/* 803B4630 003B1570  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B4634 003B1574  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B4638 003B1578  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B463C 003B157C  7C 08 03 A6 */	mtlr r0
/* 803B4640 003B1580  38 21 00 20 */	addi r1, r1, 0x20
/* 803B4644 003B1584  4E 80 00 20 */	blr 
.endfn create__Q23efx9TTankFireFPQ23efx3Arg

.fn create__Q23efx8TTankWatFPQ23efx3Arg, global
/* 803B4648 003B1588  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B464C 003B158C  7C 08 02 A6 */	mflr r0
/* 803B4650 003B1590  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B4654 003B1594  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B4658 003B1598  7C 9F 23 78 */	mr r31, r4
/* 803B465C 003B159C  38 80 00 00 */	li r4, 0
/* 803B4660 003B15A0  93 C1 00 08 */	stw r30, 8(r1)
/* 803B4664 003B15A4  7C 7E 1B 78 */	mr r30, r3
/* 803B4668 003B15A8  38 1E 00 60 */	addi r0, r30, 0x60
/* 803B466C 003B15AC  90 03 00 5C */	stw r0, 0x5c(r3)
/* 803B4670 003B15B0  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803B4674 003B15B4  81 83 00 00 */	lwz r12, 0(r3)
/* 803B4678 003B15B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B467C 003B15BC  7D 89 03 A6 */	mtctr r12
/* 803B4680 003B15C0  4E 80 04 21 */	bctrl 
/* 803B4684 003B15C4  C0 02 12 E4 */	lfs f0, lbl_8051F644@sda21(r2)
/* 803B4688 003B15C8  7F C3 F3 78 */	mr r3, r30
/* 803B468C 003B15CC  7F E4 FB 78 */	mr r4, r31
/* 803B4690 003B15D0  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 803B4694 003B15D4  4B FF CC 35 */	bl "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg"
/* 803B4698 003B15D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B469C 003B15DC  41 82 00 28 */	beq .L_803B46C4
/* 803B46A0 003B15E0  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 803B46A4 003B15E4  38 1E 00 54 */	addi r0, r30, 0x54
/* 803B46A8 003B15E8  90 03 00 F0 */	stw r0, 0xf0(r3)
/* 803B46AC 003B15EC  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 803B46B0 003B15F0  90 03 00 F0 */	stw r0, 0xf0(r3)
/* 803B46B4 003B15F4  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 803B46B8 003B15F8  90 03 00 F0 */	stw r0, 0xf0(r3)
/* 803B46BC 003B15FC  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 803B46C0 003B1600  90 03 00 F0 */	stw r0, 0xf0(r3)
.L_803B46C4:
/* 803B46C4 003B1604  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B46C8 003B1608  38 60 00 01 */	li r3, 1
/* 803B46CC 003B160C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B46D0 003B1610  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B46D4 003B1614  7C 08 03 A6 */	mtlr r0
/* 803B46D8 003B1618  38 21 00 10 */	addi r1, r1, 0x10
/* 803B46DC 003B161C  4E 80 00 20 */	blr 
.endfn create__Q23efx8TTankWatFPQ23efx3Arg

.fn doExecuteEmitterOperation__Q23efx14TDnkmsThunderAFP14JPABaseEmitter, global
/* 803B46E0 003B1620  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803B46E4 003B1624  7C 08 02 A6 */	mflr r0
/* 803B46E8 003B1628  90 01 00 74 */	stw r0, 0x74(r1)
/* 803B46EC 003B162C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 803B46F0 003B1630  7C 9F 23 78 */	mr r31, r4
/* 803B46F4 003B1634  93 C1 00 68 */	stw r30, 0x68(r1)
/* 803B46F8 003B1638  7C 7E 1B 78 */	mr r30, r3
/* 803B46FC 003B163C  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803B4700 003B1640  28 00 00 00 */	cmplwi r0, 0
/* 803B4704 003B1644  40 82 00 20 */	bne .L_803B4724
/* 803B4708 003B1648  3C 60 80 49 */	lis r3, lbl_80495898@ha
/* 803B470C 003B164C  3C A0 80 49 */	lis r5, lbl_804958B4@ha
/* 803B4710 003B1650  38 63 58 98 */	addi r3, r3, lbl_80495898@l
/* 803B4714 003B1654  38 80 02 84 */	li r4, 0x284
/* 803B4718 003B1658  38 A5 58 B4 */	addi r5, r5, lbl_804958B4@l
/* 803B471C 003B165C  4C C6 31 82 */	crclr 6
/* 803B4720 003B1660  4B C7 5F 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B4724:
/* 803B4724 003B1664  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803B4728 003B1668  28 00 00 00 */	cmplwi r0, 0
/* 803B472C 003B166C  40 82 00 20 */	bne .L_803B474C
/* 803B4730 003B1670  3C 60 80 49 */	lis r3, lbl_80495898@ha
/* 803B4734 003B1674  3C A0 80 49 */	lis r5, lbl_804958B4@ha
/* 803B4738 003B1678  38 63 58 98 */	addi r3, r3, lbl_80495898@l
/* 803B473C 003B167C  38 80 02 85 */	li r4, 0x285
/* 803B4740 003B1680  38 A5 58 B4 */	addi r5, r5, lbl_804958B4@l
/* 803B4744 003B1684  4C C6 31 82 */	crclr 6
/* 803B4748 003B1688  4B C7 5E F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B474C:
/* 803B474C 003B168C  80 DE 00 10 */	lwz r6, 0x10(r30)
/* 803B4750 003B1690  38 61 00 2C */	addi r3, r1, 0x2c
/* 803B4754 003B1694  38 81 00 20 */	addi r4, r1, 0x20
/* 803B4758 003B1698  38 A1 00 14 */	addi r5, r1, 0x14
/* 803B475C 003B169C  C0 06 00 00 */	lfs f0, 0(r6)
/* 803B4760 003B16A0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B4764 003B16A4  C0 06 00 04 */	lfs f0, 4(r6)
/* 803B4768 003B16A8  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803B476C 003B16AC  C0 06 00 08 */	lfs f0, 8(r6)
/* 803B4770 003B16B0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803B4774 003B16B4  80 DE 00 14 */	lwz r6, 0x14(r30)
/* 803B4778 003B16B8  C0 06 00 00 */	lfs f0, 0(r6)
/* 803B477C 003B16BC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803B4780 003B16C0  C0 06 00 04 */	lfs f0, 4(r6)
/* 803B4784 003B16C4  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803B4788 003B16C8  C0 06 00 08 */	lfs f0, 8(r6)
/* 803B478C 003B16CC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803B4790 003B16D0  4B FF B4 F1 */	bl "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
/* 803B4794 003B16D4  38 61 00 2C */	addi r3, r1, 0x2c
/* 803B4798 003B16D8  38 9F 00 68 */	addi r4, r31, 0x68
/* 803B479C 003B16DC  38 BF 00 A4 */	addi r5, r31, 0xa4
/* 803B47A0 003B16E0  4B CD F5 7D */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803B47A4 003B16E4  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 803B47A8 003B16E8  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 803B47AC 003B16EC  C0 04 00 04 */	lfs f0, 4(r4)
/* 803B47B0 003B16F0  C0 23 00 04 */	lfs f1, 4(r3)
/* 803B47B4 003B16F4  C0 63 00 00 */	lfs f3, 0(r3)
/* 803B47B8 003B16F8  EC 81 00 28 */	fsubs f4, f1, f0
/* 803B47BC 003B16FC  C0 44 00 00 */	lfs f2, 0(r4)
/* 803B47C0 003B1700  C0 23 00 08 */	lfs f1, 8(r3)
/* 803B47C4 003B1704  C0 04 00 08 */	lfs f0, 8(r4)
/* 803B47C8 003B1708  EC 63 10 28 */	fsubs f3, f3, f2
/* 803B47CC 003B170C  EC 84 01 32 */	fmuls f4, f4, f4
/* 803B47D0 003B1710  EC 41 00 28 */	fsubs f2, f1, f0
/* 803B47D4 003B1714  C0 02 12 D8 */	lfs f0, lbl_8051F638@sda21(r2)
/* 803B47D8 003B1718  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 803B47DC 003B171C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803B47E0 003B1720  EC 22 08 2A */	fadds f1, f2, f1
/* 803B47E4 003B1724  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803B47E8 003B1728  40 81 00 14 */	ble .L_803B47FC
/* 803B47EC 003B172C  40 81 00 14 */	ble .L_803B4800
/* 803B47F0 003B1730  FC 00 08 34 */	frsqrte f0, f1
/* 803B47F4 003B1734  EC 20 00 72 */	fmuls f1, f0, f1
/* 803B47F8 003B1738  48 00 00 08 */	b .L_803B4800
.L_803B47FC:
/* 803B47FC 003B173C  FC 20 00 90 */	fmr f1, f0
.L_803B4800:
/* 803B4800 003B1740  C0 02 12 E8 */	lfs f0, lbl_8051F648@sda21(r2)
/* 803B4804 003B1744  C0 7F 00 00 */	lfs f3, 0(r31)
/* 803B4808 003B1748  EC 01 00 24 */	fdivs f0, f1, f0
/* 803B480C 003B174C  C0 5F 00 04 */	lfs f2, 4(r31)
/* 803B4810 003B1750  C0 3F 00 08 */	lfs f1, 8(r31)
/* 803B4814 003B1754  D0 61 00 08 */	stfs f3, 8(r1)
/* 803B4818 003B1758  D0 7F 00 00 */	stfs f3, 0(r31)
/* 803B481C 003B175C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803B4820 003B1760  D0 5F 00 04 */	stfs f2, 4(r31)
/* 803B4824 003B1764  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803B4828 003B1768  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803B482C 003B176C  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803B4830 003B1770  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 803B4834 003B1774  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 803B4838 003B1778  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803B483C 003B177C  7C 08 03 A6 */	mtlr r0
/* 803B4840 003B1780  38 21 00 70 */	addi r1, r1, 0x70
/* 803B4844 003B1784  4E 80 00 20 */	blr 
.endfn doExecuteEmitterOperation__Q23efx14TDnkmsThunderAFP14JPABaseEmitter

.fn doExecuteEmitterOperation__Q23efx14TDnkmsThunderBFP14JPABaseEmitter, global
/* 803B4848 003B1788  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803B484C 003B178C  7C 08 02 A6 */	mflr r0
/* 803B4850 003B1790  90 01 00 74 */	stw r0, 0x74(r1)
/* 803B4854 003B1794  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 803B4858 003B1798  7C 9F 23 78 */	mr r31, r4
/* 803B485C 003B179C  93 C1 00 68 */	stw r30, 0x68(r1)
/* 803B4860 003B17A0  7C 7E 1B 78 */	mr r30, r3
/* 803B4864 003B17A4  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803B4868 003B17A8  28 00 00 00 */	cmplwi r0, 0
/* 803B486C 003B17AC  40 82 00 20 */	bne .L_803B488C
/* 803B4870 003B17B0  3C 60 80 49 */	lis r3, lbl_80495898@ha
/* 803B4874 003B17B4  3C A0 80 49 */	lis r5, lbl_804958B4@ha
/* 803B4878 003B17B8  38 63 58 98 */	addi r3, r3, lbl_80495898@l
/* 803B487C 003B17BC  38 80 02 9A */	li r4, 0x29a
/* 803B4880 003B17C0  38 A5 58 B4 */	addi r5, r5, lbl_804958B4@l
/* 803B4884 003B17C4  4C C6 31 82 */	crclr 6
/* 803B4888 003B17C8  4B C7 5D B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B488C:
/* 803B488C 003B17CC  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803B4890 003B17D0  28 00 00 00 */	cmplwi r0, 0
/* 803B4894 003B17D4  40 82 00 20 */	bne .L_803B48B4
/* 803B4898 003B17D8  3C 60 80 49 */	lis r3, lbl_80495898@ha
/* 803B489C 003B17DC  3C A0 80 49 */	lis r5, lbl_804958B4@ha
/* 803B48A0 003B17E0  38 63 58 98 */	addi r3, r3, lbl_80495898@l
/* 803B48A4 003B17E4  38 80 02 9B */	li r4, 0x29b
/* 803B48A8 003B17E8  38 A5 58 B4 */	addi r5, r5, lbl_804958B4@l
/* 803B48AC 003B17EC  4C C6 31 82 */	crclr 6
/* 803B48B0 003B17F0  4B C7 5D 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B48B4:
/* 803B48B4 003B17F4  80 DE 00 10 */	lwz r6, 0x10(r30)
/* 803B48B8 003B17F8  38 61 00 2C */	addi r3, r1, 0x2c
/* 803B48BC 003B17FC  38 81 00 20 */	addi r4, r1, 0x20
/* 803B48C0 003B1800  38 A1 00 14 */	addi r5, r1, 0x14
/* 803B48C4 003B1804  C0 06 00 00 */	lfs f0, 0(r6)
/* 803B48C8 003B1808  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B48CC 003B180C  C0 06 00 04 */	lfs f0, 4(r6)
/* 803B48D0 003B1810  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803B48D4 003B1814  C0 06 00 08 */	lfs f0, 8(r6)
/* 803B48D8 003B1818  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803B48DC 003B181C  80 DE 00 14 */	lwz r6, 0x14(r30)
/* 803B48E0 003B1820  C0 06 00 00 */	lfs f0, 0(r6)
/* 803B48E4 003B1824  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803B48E8 003B1828  C0 06 00 04 */	lfs f0, 4(r6)
/* 803B48EC 003B182C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803B48F0 003B1830  C0 06 00 08 */	lfs f0, 8(r6)
/* 803B48F4 003B1834  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803B48F8 003B1838  4B FF B3 89 */	bl "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
/* 803B48FC 003B183C  38 61 00 2C */	addi r3, r1, 0x2c
/* 803B4900 003B1840  38 9F 00 68 */	addi r4, r31, 0x68
/* 803B4904 003B1844  38 BF 00 A4 */	addi r5, r31, 0xa4
/* 803B4908 003B1848  4B CD F4 15 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803B490C 003B184C  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 803B4910 003B1850  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 803B4914 003B1854  C0 04 00 04 */	lfs f0, 4(r4)
/* 803B4918 003B1858  C0 23 00 04 */	lfs f1, 4(r3)
/* 803B491C 003B185C  C0 63 00 00 */	lfs f3, 0(r3)
/* 803B4920 003B1860  EC 81 00 28 */	fsubs f4, f1, f0
/* 803B4924 003B1864  C0 44 00 00 */	lfs f2, 0(r4)
/* 803B4928 003B1868  C0 23 00 08 */	lfs f1, 8(r3)
/* 803B492C 003B186C  C0 04 00 08 */	lfs f0, 8(r4)
/* 803B4930 003B1870  EC 63 10 28 */	fsubs f3, f3, f2
/* 803B4934 003B1874  EC 84 01 32 */	fmuls f4, f4, f4
/* 803B4938 003B1878  EC 41 00 28 */	fsubs f2, f1, f0
/* 803B493C 003B187C  C0 02 12 D8 */	lfs f0, lbl_8051F638@sda21(r2)
/* 803B4940 003B1880  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 803B4944 003B1884  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803B4948 003B1888  EC 22 08 2A */	fadds f1, f2, f1
/* 803B494C 003B188C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803B4950 003B1890  40 81 00 14 */	ble .L_803B4964
/* 803B4954 003B1894  40 81 00 14 */	ble .L_803B4968
/* 803B4958 003B1898  FC 00 08 34 */	frsqrte f0, f1
/* 803B495C 003B189C  EC 20 00 72 */	fmuls f1, f0, f1
/* 803B4960 003B18A0  48 00 00 08 */	b .L_803B4968
.L_803B4964:
/* 803B4964 003B18A4  FC 20 00 90 */	fmr f1, f0
.L_803B4968:
/* 803B4968 003B18A8  C0 02 12 E8 */	lfs f0, lbl_8051F648@sda21(r2)
/* 803B496C 003B18AC  C0 7F 00 00 */	lfs f3, 0(r31)
/* 803B4970 003B18B0  EC 01 00 24 */	fdivs f0, f1, f0
/* 803B4974 003B18B4  C0 5F 00 04 */	lfs f2, 4(r31)
/* 803B4978 003B18B8  C0 3F 00 08 */	lfs f1, 8(r31)
/* 803B497C 003B18BC  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803B4980 003B18C0  D0 7F 00 00 */	stfs f3, 0(r31)
/* 803B4984 003B18C4  D0 61 00 08 */	stfs f3, 8(r1)
/* 803B4988 003B18C8  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803B498C 003B18CC  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803B4990 003B18D0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803B4994 003B18D4  D0 3F 00 08 */	stfs f1, 8(r31)
/* 803B4998 003B18D8  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 803B499C 003B18DC  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 803B49A0 003B18E0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803B49A4 003B18E4  7C 08 03 A6 */	mtlr r0
/* 803B49A8 003B18E8  38 21 00 70 */	addi r1, r1, 0x70
/* 803B49AC 003B18EC  4E 80 00 20 */	blr 
.endfn doExecuteEmitterOperation__Q23efx14TDnkmsThunderBFP14JPABaseEmitter

.fn setRateLOD__Q23efx9THibaFireFi, global
/* 803B49B0 003B18F0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803B49B4 003B18F4  3C A0 80 49 */	lis r5, lbl_804958FC@ha
/* 803B49B8 003B18F8  54 80 10 3A */	slwi r0, r4, 2
/* 803B49BC 003B18FC  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 803B49C0 003B1900  3B A5 58 FC */	addi r29, r5, lbl_804958FC@l
/* 803B49C4 003B1904  3B 61 00 08 */	addi r27, r1, 8
/* 803B49C8 003B1908  7F 7B 02 14 */	add r27, r27, r0
/* 803B49CC 003B190C  83 83 00 0C */	lwz r28, 0xc(r3)
/* 803B49D0 003B1910  83 DD 00 00 */	lwz r30, 0(r29)
/* 803B49D4 003B1914  83 FD 00 04 */	lwz r31, 4(r29)
/* 803B49D8 003B1918  28 1C 00 00 */	cmplwi r28, 0
/* 803B49DC 003B191C  81 9D 00 08 */	lwz r12, 8(r29)
/* 803B49E0 003B1920  81 7D 00 0C */	lwz r11, 0xc(r29)
/* 803B49E4 003B1924  81 5D 00 10 */	lwz r10, 0x10(r29)
/* 803B49E8 003B1928  81 3D 00 14 */	lwz r9, 0x14(r29)
/* 803B49EC 003B192C  81 1D 00 18 */	lwz r8, 0x18(r29)
/* 803B49F0 003B1930  80 FD 00 1C */	lwz r7, 0x1c(r29)
/* 803B49F4 003B1934  80 DD 00 20 */	lwz r6, 0x20(r29)
/* 803B49F8 003B1938  80 BD 00 24 */	lwz r5, 0x24(r29)
/* 803B49FC 003B193C  80 9D 00 28 */	lwz r4, 0x28(r29)
/* 803B4A00 003B1940  80 1D 00 2C */	lwz r0, 0x2c(r29)
/* 803B4A04 003B1944  93 C1 00 08 */	stw r30, 8(r1)
/* 803B4A08 003B1948  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B4A0C 003B194C  91 81 00 10 */	stw r12, 0x10(r1)
/* 803B4A10 003B1950  91 61 00 14 */	stw r11, 0x14(r1)
/* 803B4A14 003B1954  91 41 00 18 */	stw r10, 0x18(r1)
/* 803B4A18 003B1958  91 21 00 1C */	stw r9, 0x1c(r1)
/* 803B4A1C 003B195C  91 01 00 20 */	stw r8, 0x20(r1)
/* 803B4A20 003B1960  90 E1 00 24 */	stw r7, 0x24(r1)
/* 803B4A24 003B1964  90 C1 00 28 */	stw r6, 0x28(r1)
/* 803B4A28 003B1968  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 803B4A2C 003B196C  90 81 00 30 */	stw r4, 0x30(r1)
/* 803B4A30 003B1970  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B4A34 003B1974  41 82 00 0C */	beq .L_803B4A40
/* 803B4A38 003B1978  C0 1B 00 00 */	lfs f0, 0(r27)
/* 803B4A3C 003B197C  D0 1C 00 28 */	stfs f0, 0x28(r28)
.L_803B4A40:
/* 803B4A40 003B1980  83 83 00 1C */	lwz r28, 0x1c(r3)
/* 803B4A44 003B1984  28 1C 00 00 */	cmplwi r28, 0
/* 803B4A48 003B1988  41 82 00 0C */	beq .L_803B4A54
/* 803B4A4C 003B198C  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 803B4A50 003B1990  D0 1C 00 28 */	stfs f0, 0x28(r28)
.L_803B4A54:
/* 803B4A54 003B1994  38 63 00 20 */	addi r3, r3, 0x20
/* 803B4A58 003B1998  83 83 00 0C */	lwz r28, 0xc(r3)
/* 803B4A5C 003B199C  28 1C 00 00 */	cmplwi r28, 0
/* 803B4A60 003B19A0  41 82 00 0C */	beq .L_803B4A6C
/* 803B4A64 003B19A4  C0 1B 00 18 */	lfs f0, 0x18(r27)
/* 803B4A68 003B19A8  D0 1C 00 28 */	stfs f0, 0x28(r28)
.L_803B4A6C:
/* 803B4A6C 003B19AC  83 83 00 1C */	lwz r28, 0x1c(r3)
/* 803B4A70 003B19B0  28 1C 00 00 */	cmplwi r28, 0
/* 803B4A74 003B19B4  41 82 00 0C */	beq .L_803B4A80
/* 803B4A78 003B19B8  C0 1B 00 24 */	lfs f0, 0x24(r27)
/* 803B4A7C 003B19BC  D0 1C 00 28 */	stfs f0, 0x28(r28)
.L_803B4A80:
/* 803B4A80 003B19C0  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 803B4A84 003B19C4  38 21 00 50 */	addi r1, r1, 0x50
/* 803B4A88 003B19C8  4E 80 00 20 */	blr 
.endfn setRateLOD__Q23efx9THibaFireFi

.fn create__Q23efx9TGasuHibaFPQ23efx3Arg, global
/* 803B4A8C 003B19CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B4A90 003B19D0  7C 08 02 A6 */	mflr r0
/* 803B4A94 003B19D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B4A98 003B19D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B4A9C 003B19DC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B4AA0 003B19E0  7C 9E 23 78 */	mr r30, r4
/* 803B4AA4 003B19E4  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B4AA8 003B19E8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B4AAC 003B19EC  7C 7D 1B 78 */	mr r29, r3
/* 803B4AB0 003B19F0  7F C3 F3 78 */	mr r3, r30
/* 803B4AB4 003B19F4  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B4AB8 003B19F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B4ABC 003B19FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B4AC0 003B1A00  7D 89 03 A6 */	mtctr r12
/* 803B4AC4 003B1A04  4E 80 04 21 */	bctrl 
/* 803B4AC8 003B1A08  7C 64 1B 78 */	mr r4, r3
/* 803B4ACC 003B1A0C  38 7F 00 94 */	addi r3, r31, 0x94
/* 803B4AD0 003B1A10  4B D1 5B F1 */	bl strcmp
/* 803B4AD4 003B1A14  7C 60 00 34 */	cntlzw r0, r3
/* 803B4AD8 003B1A18  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B4ADC 003B1A1C  40 82 00 18 */	bne .L_803B4AF4
/* 803B4AE0 003B1A20  38 7F 00 00 */	addi r3, r31, 0
/* 803B4AE4 003B1A24  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B4AE8 003B1A28  38 80 02 CA */	li r4, 0x2ca
/* 803B4AEC 003B1A2C  4C C6 31 82 */	crclr 6
/* 803B4AF0 003B1A30  4B C7 5B 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B4AF4:
/* 803B4AF4 003B1A34  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 803B4AF8 003B1A38  7F C4 F3 78 */	mr r4, r30
/* 803B4AFC 003B1A3C  28 00 00 00 */	cmplwi r0, 0
/* 803B4B00 003B1A40  41 82 00 18 */	beq .L_803B4B18
/* 803B4B04 003B1A44  38 60 02 B4 */	li r3, 0x2b4
/* 803B4B08 003B1A48  38 00 02 B5 */	li r0, 0x2b5
/* 803B4B0C 003B1A4C  B0 7D 00 10 */	sth r3, 0x10(r29)
/* 803B4B10 003B1A50  B0 1D 00 20 */	sth r0, 0x20(r29)
/* 803B4B14 003B1A54  48 00 00 14 */	b .L_803B4B28
.L_803B4B18:
/* 803B4B18 003B1A58  38 60 00 74 */	li r3, 0x74
/* 803B4B1C 003B1A5C  38 00 00 75 */	li r0, 0x75
/* 803B4B20 003B1A60  B0 7D 00 10 */	sth r3, 0x10(r29)
/* 803B4B24 003B1A64  B0 1D 00 20 */	sth r0, 0x20(r29)
.L_803B4B28:
/* 803B4B28 003B1A68  7F A3 EB 78 */	mr r3, r29
/* 803B4B2C 003B1A6C  4B FF DF C9 */	bl "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
/* 803B4B30 003B1A70  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B4B34 003B1A74  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B4B38 003B1A78  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B4B3C 003B1A7C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B4B40 003B1A80  7C 08 03 A6 */	mtlr r0
/* 803B4B44 003B1A84  38 21 00 20 */	addi r1, r1, 0x20
/* 803B4B48 003B1A88  4E 80 00 20 */	blr 
.endfn create__Q23efx9TGasuHibaFPQ23efx3Arg

.fn setRateLOD__Q23efx9TGasuHibaFi, global
/* 803B4B4C 003B1A8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B4B50 003B1A90  3C A0 80 49 */	lis r5, lbl_80495938@ha
/* 803B4B54 003B1A94  39 25 59 38 */	addi r9, r5, lbl_80495938@l
/* 803B4B58 003B1A98  54 80 10 3A */	slwi r0, r4, 2
/* 803B4B5C 003B1A9C  81 43 00 0C */	lwz r10, 0xc(r3)
/* 803B4B60 003B1AA0  39 61 00 08 */	addi r11, r1, 8
/* 803B4B64 003B1AA4  81 09 00 00 */	lwz r8, 0(r9)
/* 803B4B68 003B1AA8  7D 6B 02 14 */	add r11, r11, r0
/* 803B4B6C 003B1AAC  80 E9 00 04 */	lwz r7, 4(r9)
/* 803B4B70 003B1AB0  28 0A 00 00 */	cmplwi r10, 0
/* 803B4B74 003B1AB4  80 C9 00 08 */	lwz r6, 8(r9)
/* 803B4B78 003B1AB8  80 A9 00 0C */	lwz r5, 0xc(r9)
/* 803B4B7C 003B1ABC  80 89 00 10 */	lwz r4, 0x10(r9)
/* 803B4B80 003B1AC0  80 09 00 14 */	lwz r0, 0x14(r9)
/* 803B4B84 003B1AC4  91 01 00 08 */	stw r8, 8(r1)
/* 803B4B88 003B1AC8  90 E1 00 0C */	stw r7, 0xc(r1)
/* 803B4B8C 003B1ACC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 803B4B90 003B1AD0  90 A1 00 14 */	stw r5, 0x14(r1)
/* 803B4B94 003B1AD4  90 81 00 18 */	stw r4, 0x18(r1)
/* 803B4B98 003B1AD8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803B4B9C 003B1ADC  41 82 00 0C */	beq .L_803B4BA8
/* 803B4BA0 003B1AE0  C0 0B 00 00 */	lfs f0, 0(r11)
/* 803B4BA4 003B1AE4  D0 0A 00 28 */	stfs f0, 0x28(r10)
.L_803B4BA8:
/* 803B4BA8 003B1AE8  81 43 00 1C */	lwz r10, 0x1c(r3)
/* 803B4BAC 003B1AEC  28 0A 00 00 */	cmplwi r10, 0
/* 803B4BB0 003B1AF0  41 82 00 0C */	beq .L_803B4BBC
/* 803B4BB4 003B1AF4  C0 0B 00 0C */	lfs f0, 0xc(r11)
/* 803B4BB8 003B1AF8  D0 0A 00 28 */	stfs f0, 0x28(r10)
.L_803B4BBC:
/* 803B4BBC 003B1AFC  38 21 00 20 */	addi r1, r1, 0x20
/* 803B4BC0 003B1B00  4E 80 00 20 */	blr 
.endfn setRateLOD__Q23efx9TGasuHibaFi

.fn create__Q23efx10TDenkiHibaFPQ23efx3Arg, global
/* 803B4BC4 003B1B04  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 803B4BC8 003B1B08  7C 08 02 A6 */	mflr r0
/* 803B4BCC 003B1B0C  90 01 00 84 */	stw r0, 0x84(r1)
/* 803B4BD0 003B1B10  BF 61 00 6C */	stmw r27, 0x6c(r1)
/* 803B4BD4 003B1B14  7C 9B 23 78 */	mr r27, r4
/* 803B4BD8 003B1B18  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B4BDC 003B1B1C  7C 7F 1B 78 */	mr r31, r3
/* 803B4BE0 003B1B20  7F 63 DB 78 */	mr r3, r27
/* 803B4BE4 003B1B24  3B C4 58 98 */	addi r30, r4, lbl_80495898@l
/* 803B4BE8 003B1B28  81 9B 00 00 */	lwz r12, 0(r27)
/* 803B4BEC 003B1B2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B4BF0 003B1B30  7D 89 03 A6 */	mtctr r12
/* 803B4BF4 003B1B34  4E 80 04 21 */	bctrl 
/* 803B4BF8 003B1B38  7C 64 1B 78 */	mr r4, r3
/* 803B4BFC 003B1B3C  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 803B4C00 003B1B40  4B D1 5A C1 */	bl strcmp
/* 803B4C04 003B1B44  7C 60 00 34 */	cntlzw r0, r3
/* 803B4C08 003B1B48  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B4C0C 003B1B4C  40 82 00 18 */	bne .L_803B4C24
/* 803B4C10 003B1B50  38 7E 00 00 */	addi r3, r30, 0
/* 803B4C14 003B1B54  38 BE 00 1C */	addi r5, r30, 0x1c
/* 803B4C18 003B1B58  38 80 02 EF */	li r4, 0x2ef
/* 803B4C1C 003B1B5C  4C C6 31 82 */	crclr 6
/* 803B4C20 003B1B60  4B C7 5A 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B4C24:
/* 803B4C24 003B1B64  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 803B4C28 003B1B68  7F E3 FB 78 */	mr r3, r31
/* 803B4C2C 003B1B6C  7F 64 DB 78 */	mr r4, r27
/* 803B4C30 003B1B70  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 803B4C34 003B1B74  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 803B4C38 003B1B78  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 803B4C3C 003B1B7C  C0 1B 00 18 */	lfs f0, 0x18(r27)
/* 803B4C40 003B1B80  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 803B4C44 003B1B84  C0 1B 00 1C */	lfs f0, 0x1c(r27)
/* 803B4C48 003B1B88  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B4C4C 003B1B8C  C0 1B 00 20 */	lfs f0, 0x20(r27)
/* 803B4C50 003B1B90  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803B4C54 003B1B94  C0 1B 00 24 */	lfs f0, 0x24(r27)
/* 803B4C58 003B1B98  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803B4C5C 003B1B9C  4B FF D5 4D */	bl "create__Q23efx28TSyncGroup3<Q23efx8TForever>FPQ23efx3Arg"
/* 803B4C60 003B1BA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B4C64 003B1BA4  41 82 01 60 */	beq .L_803B4DC4
/* 803B4C68 003B1BA8  38 61 00 38 */	addi r3, r1, 0x38
/* 803B4C6C 003B1BAC  38 81 00 2C */	addi r4, r1, 0x2c
/* 803B4C70 003B1BB0  38 A1 00 20 */	addi r5, r1, 0x20
/* 803B4C74 003B1BB4  4B FF B0 0D */	bl "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
/* 803B4C78 003B1BB8  3B 80 00 00 */	li r28, 0
/* 803B4C7C 003B1BBC  7F FD FB 78 */	mr r29, r31
.L_803B4C80:
/* 803B4C80 003B1BC0  83 DD 00 0C */	lwz r30, 0xc(r29)
/* 803B4C84 003B1BC4  28 1E 00 00 */	cmplwi r30, 0
/* 803B4C88 003B1BC8  41 82 00 6C */	beq .L_803B4CF4
/* 803B4C8C 003B1BCC  38 61 00 38 */	addi r3, r1, 0x38
/* 803B4C90 003B1BD0  38 9E 00 68 */	addi r4, r30, 0x68
/* 803B4C94 003B1BD4  38 BE 00 A4 */	addi r5, r30, 0xa4
/* 803B4C98 003B1BD8  4B CD F0 85 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803B4C9C 003B1BDC  80 1B 00 28 */	lwz r0, 0x28(r27)
/* 803B4CA0 003B1BE0  2C 00 00 01 */	cmpwi r0, 1
/* 803B4CA4 003B1BE4  40 82 00 28 */	bne .L_803B4CCC
/* 803B4CA8 003B1BE8  38 60 00 FF */	li r3, 0xff
/* 803B4CAC 003B1BEC  38 00 00 00 */	li r0, 0
/* 803B4CB0 003B1BF0  98 7E 00 B8 */	stb r3, 0xb8(r30)
/* 803B4CB4 003B1BF4  98 1E 00 B9 */	stb r0, 0xb9(r30)
/* 803B4CB8 003B1BF8  98 1E 00 BA */	stb r0, 0xba(r30)
/* 803B4CBC 003B1BFC  98 7E 00 BC */	stb r3, 0xbc(r30)
/* 803B4CC0 003B1C00  98 1E 00 BD */	stb r0, 0xbd(r30)
/* 803B4CC4 003B1C04  98 1E 00 BE */	stb r0, 0xbe(r30)
/* 803B4CC8 003B1C08  48 00 00 2C */	b .L_803B4CF4
.L_803B4CCC:
/* 803B4CCC 003B1C0C  2C 00 00 02 */	cmpwi r0, 2
/* 803B4CD0 003B1C10  40 82 00 24 */	bne .L_803B4CF4
/* 803B4CD4 003B1C14  38 60 00 00 */	li r3, 0
/* 803B4CD8 003B1C18  38 00 00 FF */	li r0, 0xff
/* 803B4CDC 003B1C1C  98 7E 00 B8 */	stb r3, 0xb8(r30)
/* 803B4CE0 003B1C20  98 7E 00 B9 */	stb r3, 0xb9(r30)
/* 803B4CE4 003B1C24  98 1E 00 BA */	stb r0, 0xba(r30)
/* 803B4CE8 003B1C28  98 7E 00 BC */	stb r3, 0xbc(r30)
/* 803B4CEC 003B1C2C  98 7E 00 BD */	stb r3, 0xbd(r30)
/* 803B4CF0 003B1C30  98 1E 00 BE */	stb r0, 0xbe(r30)
.L_803B4CF4:
/* 803B4CF4 003B1C34  3B 9C 00 01 */	addi r28, r28, 1
/* 803B4CF8 003B1C38  3B BD 00 10 */	addi r29, r29, 0x10
/* 803B4CFC 003B1C3C  2C 1C 00 03 */	cmpwi r28, 3
/* 803B4D00 003B1C40  41 80 FF 80 */	blt .L_803B4C80
/* 803B4D04 003B1C44  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 803B4D08 003B1C48  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 803B4D0C 003B1C4C  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 803B4D10 003B1C50  EC 81 00 28 */	fsubs f4, f1, f0
/* 803B4D14 003B1C54  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 803B4D18 003B1C58  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 803B4D1C 003B1C5C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 803B4D20 003B1C60  EC 63 10 28 */	fsubs f3, f3, f2
/* 803B4D24 003B1C64  EC 84 01 32 */	fmuls f4, f4, f4
/* 803B4D28 003B1C68  EC 41 00 28 */	fsubs f2, f1, f0
/* 803B4D2C 003B1C6C  C0 02 12 D8 */	lfs f0, lbl_8051F638@sda21(r2)
/* 803B4D30 003B1C70  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 803B4D34 003B1C74  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803B4D38 003B1C78  EC 42 08 2A */	fadds f2, f2, f1
/* 803B4D3C 003B1C7C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803B4D40 003B1C80  40 81 00 14 */	ble .L_803B4D54
/* 803B4D44 003B1C84  40 81 00 14 */	ble .L_803B4D58
/* 803B4D48 003B1C88  FC 00 10 34 */	frsqrte f0, f2
/* 803B4D4C 003B1C8C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 803B4D50 003B1C90  48 00 00 08 */	b .L_803B4D58
.L_803B4D54:
/* 803B4D54 003B1C94  FC 40 00 90 */	fmr f2, f0
.L_803B4D58:
/* 803B4D58 003B1C98  C0 02 12 E8 */	lfs f0, lbl_8051F648@sda21(r2)
/* 803B4D5C 003B1C9C  38 60 00 01 */	li r3, 1
/* 803B4D60 003B1CA0  C0 22 12 EC */	lfs f1, lbl_8051F64C@sda21(r2)
/* 803B4D64 003B1CA4  EC 82 00 24 */	fdivs f4, f2, f0
/* 803B4D68 003B1CA8  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 803B4D6C 003B1CAC  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 803B4D70 003B1CB0  D0 24 00 00 */	stfs f1, 0(r4)
/* 803B4D74 003B1CB4  D0 24 00 04 */	stfs f1, 4(r4)
/* 803B4D78 003B1CB8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803B4D7C 003B1CBC  D0 84 00 08 */	stfs f4, 8(r4)
/* 803B4D80 003B1CC0  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 803B4D84 003B1CC4  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 803B4D88 003B1CC8  D0 24 00 00 */	stfs f1, 0(r4)
/* 803B4D8C 003B1CCC  D0 84 00 04 */	stfs f4, 4(r4)
/* 803B4D90 003B1CD0  D0 24 00 08 */	stfs f1, 8(r4)
/* 803B4D94 003B1CD4  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 803B4D98 003B1CD8  D0 21 00 08 */	stfs f1, 8(r1)
/* 803B4D9C 003B1CDC  C0 44 00 04 */	lfs f2, 4(r4)
/* 803B4DA0 003B1CE0  C0 64 00 08 */	lfs f3, 8(r4)
/* 803B4DA4 003B1CE4  C0 04 00 00 */	lfs f0, 0(r4)
/* 803B4DA8 003B1CE8  EC 42 01 32 */	fmuls f2, f2, f4
/* 803B4DAC 003B1CEC  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 803B4DB0 003B1CF0  D0 04 00 00 */	stfs f0, 0(r4)
/* 803B4DB4 003B1CF4  D0 44 00 04 */	stfs f2, 4(r4)
/* 803B4DB8 003B1CF8  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803B4DBC 003B1CFC  D0 64 00 08 */	stfs f3, 8(r4)
/* 803B4DC0 003B1D00  48 00 00 08 */	b .L_803B4DC8
.L_803B4DC4:
/* 803B4DC4 003B1D04  38 60 00 00 */	li r3, 0
.L_803B4DC8:
/* 803B4DC8 003B1D08  BB 61 00 6C */	lmw r27, 0x6c(r1)
/* 803B4DCC 003B1D0C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 803B4DD0 003B1D10  7C 08 03 A6 */	mtlr r0
/* 803B4DD4 003B1D14  38 21 00 80 */	addi r1, r1, 0x80
/* 803B4DD8 003B1D18  4E 80 00 20 */	blr 
.endfn create__Q23efx10TDenkiHibaFPQ23efx3Arg

.fn create__Q23efx13TDenkiHibaMgrFPQ23efx3Arg, global
/* 803B4DDC 003B1D1C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803B4DE0 003B1D20  7C 08 02 A6 */	mflr r0
/* 803B4DE4 003B1D24  90 01 00 44 */	stw r0, 0x44(r1)
/* 803B4DE8 003B1D28  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803B4DEC 003B1D2C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803B4DF0 003B1D30  7C 9E 23 78 */	mr r30, r4
/* 803B4DF4 003B1D34  3C 80 80 49 */	lis r4, lbl_80495898@ha
/* 803B4DF8 003B1D38  93 A1 00 34 */	stw r29, 0x34(r1)
/* 803B4DFC 003B1D3C  7C 7D 1B 78 */	mr r29, r3
/* 803B4E00 003B1D40  7F C3 F3 78 */	mr r3, r30
/* 803B4E04 003B1D44  3B E4 58 98 */	addi r31, r4, lbl_80495898@l
/* 803B4E08 003B1D48  81 9E 00 00 */	lwz r12, 0(r30)
/* 803B4E0C 003B1D4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B4E10 003B1D50  7D 89 03 A6 */	mtctr r12
/* 803B4E14 003B1D54  4E 80 04 21 */	bctrl 
/* 803B4E18 003B1D58  7C 64 1B 78 */	mr r4, r3
/* 803B4E1C 003B1D5C  38 7F 00 B8 */	addi r3, r31, 0xb8
/* 803B4E20 003B1D60  4B D1 58 A1 */	bl strcmp
/* 803B4E24 003B1D64  7C 60 00 34 */	cntlzw r0, r3
/* 803B4E28 003B1D68  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803B4E2C 003B1D6C  40 82 00 18 */	bne .L_803B4E44
/* 803B4E30 003B1D70  38 7F 00 00 */	addi r3, r31, 0
/* 803B4E34 003B1D74  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803B4E38 003B1D78  38 80 03 40 */	li r4, 0x340
/* 803B4E3C 003B1D7C  4C C6 31 82 */	crclr 6
/* 803B4E40 003B1D80  4B C7 58 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803B4E44:
/* 803B4E44 003B1D84  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 803B4E48 003B1D88  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 803B4E4C 003B1D8C  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 803B4E50 003B1D90  38 7D 00 80 */	addi r3, r29, 0x80
/* 803B4E54 003B1D94  D0 1D 00 A0 */	stfs f0, 0xa0(r29)
/* 803B4E58 003B1D98  38 81 00 18 */	addi r4, r1, 0x18
/* 803B4E5C 003B1D9C  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 803B4E60 003B1DA0  D0 1D 00 A4 */	stfs f0, 0xa4(r29)
/* 803B4E64 003B1DA4  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 803B4E68 003B1DA8  D0 1D 00 A8 */	stfs f0, 0xa8(r29)
/* 803B4E6C 003B1DAC  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 803B4E70 003B1DB0  D0 1D 00 AC */	stfs f0, 0xac(r29)
/* 803B4E74 003B1DB4  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 803B4E78 003B1DB8  D0 1D 00 B0 */	stfs f0, 0xb0(r29)
/* 803B4E7C 003B1DBC  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 803B4E80 003B1DC0  D0 1D 00 B4 */	stfs f0, 0xb4(r29)
/* 803B4E84 003B1DC4  90 01 00 18 */	stw r0, 0x18(r1)
/* 803B4E88 003B1DC8  C0 1D 00 A0 */	lfs f0, 0xa0(r29)
/* 803B4E8C 003B1DCC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803B4E90 003B1DD0  C0 1D 00 A4 */	lfs f0, 0xa4(r29)
/* 803B4E94 003B1DD4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803B4E98 003B1DD8  C0 1D 00 A8 */	lfs f0, 0xa8(r29)
/* 803B4E9C 003B1DDC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803B4EA0 003B1DE0  90 01 00 08 */	stw r0, 8(r1)
/* 803B4EA4 003B1DE4  C0 1D 00 AC */	lfs f0, 0xac(r29)
/* 803B4EA8 003B1DE8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803B4EAC 003B1DEC  C0 1D 00 B0 */	lfs f0, 0xb0(r29)
/* 803B4EB0 003B1DF0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803B4EB4 003B1DF4  C0 1D 00 B4 */	lfs f0, 0xb4(r29)
/* 803B4EB8 003B1DF8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803B4EBC 003B1DFC  81 9D 00 80 */	lwz r12, 0x80(r29)
/* 803B4EC0 003B1E00  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B4EC4 003B1E04  7D 89 03 A6 */	mtctr r12
/* 803B4EC8 003B1E08  4E 80 04 21 */	bctrl 
/* 803B4ECC 003B1E0C  38 7D 00 90 */	addi r3, r29, 0x90
/* 803B4ED0 003B1E10  38 81 00 08 */	addi r4, r1, 8
/* 803B4ED4 003B1E14  81 9D 00 90 */	lwz r12, 0x90(r29)
/* 803B4ED8 003B1E18  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B4EDC 003B1E1C  7D 89 03 A6 */	mtctr r12
/* 803B4EE0 003B1E20  4E 80 04 21 */	bctrl 
/* 803B4EE4 003B1E24  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803B4EE8 003B1E28  38 60 00 01 */	li r3, 1
/* 803B4EEC 003B1E2C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803B4EF0 003B1E30  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803B4EF4 003B1E34  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 803B4EF8 003B1E38  7C 08 03 A6 */	mtlr r0
/* 803B4EFC 003B1E3C  38 21 00 40 */	addi r1, r1, 0x40
/* 803B4F00 003B1E40  4E 80 00 20 */	blr 
.endfn create__Q23efx13TDenkiHibaMgrFPQ23efx3Arg

.fn createHiba__Q23efx13TDenkiHibaMgrFi, global
/* 803B4F04 003B1E44  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 803B4F08 003B1E48  7C 08 02 A6 */	mflr r0
/* 803B4F0C 003B1E4C  3C C0 80 4B */	lis r6, __vt__Q23efx3Arg@ha
/* 803B4F10 003B1E50  90 01 00 84 */	stw r0, 0x84(r1)
/* 803B4F14 003B1E54  38 C6 A7 EC */	addi r6, r6, __vt__Q23efx3Arg@l
/* 803B4F18 003B1E58  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 803B4F1C 003B1E5C  7C 7F 1B 78 */	mr r31, r3
/* 803B4F20 003B1E60  81 83 00 AC */	lwz r12, 0xac(r3)
/* 803B4F24 003B1E64  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 803B4F28 003B1E68  81 7F 00 B0 */	lwz r11, 0xb0(r31)
/* 803B4F2C 003B1E6C  38 A3 41 E4 */	addi r5, r3, "zero__10Vector3<f>"@l
/* 803B4F30 003B1E70  81 5F 00 B4 */	lwz r10, 0xb4(r31)
/* 803B4F34 003B1E74  3C 60 80 4C */	lis r3, __vt__Q23efx12ArgDenkiHiba@ha
/* 803B4F38 003B1E78  81 3F 00 A0 */	lwz r9, 0xa0(r31)
/* 803B4F3C 003B1E7C  38 03 5F 28 */	addi r0, r3, __vt__Q23efx12ArgDenkiHiba@l
/* 803B4F40 003B1E80  81 1F 00 A4 */	lwz r8, 0xa4(r31)
/* 803B4F44 003B1E84  38 7F 00 04 */	addi r3, r31, 4
/* 803B4F48 003B1E88  80 FF 00 A8 */	lwz r7, 0xa8(r31)
/* 803B4F4C 003B1E8C  91 81 00 08 */	stw r12, 8(r1)
/* 803B4F50 003B1E90  C1 05 00 00 */	lfs f8, 0(r5)
/* 803B4F54 003B1E94  91 61 00 0C */	stw r11, 0xc(r1)
/* 803B4F58 003B1E98  C0 E5 00 04 */	lfs f7, 4(r5)
/* 803B4F5C 003B1E9C  91 41 00 10 */	stw r10, 0x10(r1)
/* 803B4F60 003B1EA0  C0 C5 00 08 */	lfs f6, 8(r5)
/* 803B4F64 003B1EA4  91 21 00 14 */	stw r9, 0x14(r1)
/* 803B4F68 003B1EA8  C0 41 00 08 */	lfs f2, 8(r1)
/* 803B4F6C 003B1EAC  91 01 00 18 */	stw r8, 0x18(r1)
/* 803B4F70 003B1EB0  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 803B4F74 003B1EB4  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 803B4F78 003B1EB8  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 803B4F7C 003B1EBC  90 C1 00 40 */	stw r6, 0x40(r1)
/* 803B4F80 003B1EC0  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 803B4F84 003B1EC4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803B4F88 003B1EC8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803B4F8C 003B1ECC  90 81 00 68 */	stw r4, 0x68(r1)
/* 803B4F90 003B1ED0  38 81 00 40 */	addi r4, r1, 0x40
/* 803B4F94 003B1ED4  D1 01 00 44 */	stfs f8, 0x44(r1)
/* 803B4F98 003B1ED8  D0 E1 00 48 */	stfs f7, 0x48(r1)
/* 803B4F9C 003B1EDC  D0 C1 00 4C */	stfs f6, 0x4c(r1)
/* 803B4FA0 003B1EE0  90 01 00 40 */	stw r0, 0x40(r1)
/* 803B4FA4 003B1EE4  D0 A1 00 50 */	stfs f5, 0x50(r1)
/* 803B4FA8 003B1EE8  D0 81 00 54 */	stfs f4, 0x54(r1)
/* 803B4FAC 003B1EEC  D0 61 00 58 */	stfs f3, 0x58(r1)
/* 803B4FB0 003B1EF0  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 803B4FB4 003B1EF4  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 803B4FB8 003B1EF8  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 803B4FBC 003B1EFC  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B4FC0 003B1F00  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B4FC4 003B1F04  7D 89 03 A6 */	mtctr r12
/* 803B4FC8 003B1F08  4E 80 04 21 */	bctrl 
/* 803B4FCC 003B1F0C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803B4FD0 003B1F10  38 7F 00 38 */	addi r3, r31, 0x38
/* 803B4FD4 003B1F14  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803B4FD8 003B1F18  38 81 00 30 */	addi r4, r1, 0x30
/* 803B4FDC 003B1F1C  90 01 00 30 */	stw r0, 0x30(r1)
/* 803B4FE0 003B1F20  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 803B4FE4 003B1F24  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 803B4FE8 003B1F28  C0 1F 00 A4 */	lfs f0, 0xa4(r31)
/* 803B4FEC 003B1F2C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 803B4FF0 003B1F30  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 803B4FF4 003B1F34  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 803B4FF8 003B1F38  90 01 00 20 */	stw r0, 0x20(r1)
/* 803B4FFC 003B1F3C  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 803B5000 003B1F40  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803B5004 003B1F44  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803B5008 003B1F48  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803B500C 003B1F4C  C0 1F 00 B4 */	lfs f0, 0xb4(r31)
/* 803B5010 003B1F50  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 803B5014 003B1F54  81 9F 00 38 */	lwz r12, 0x38(r31)
/* 803B5018 003B1F58  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B501C 003B1F5C  7D 89 03 A6 */	mtctr r12
/* 803B5020 003B1F60  4E 80 04 21 */	bctrl 
/* 803B5024 003B1F64  38 7F 00 5C */	addi r3, r31, 0x5c
/* 803B5028 003B1F68  38 81 00 20 */	addi r4, r1, 0x20
/* 803B502C 003B1F6C  81 9F 00 5C */	lwz r12, 0x5c(r31)
/* 803B5030 003B1F70  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B5034 003B1F74  7D 89 03 A6 */	mtctr r12
/* 803B5038 003B1F78  4E 80 04 21 */	bctrl 
/* 803B503C 003B1F7C  38 7F 00 80 */	addi r3, r31, 0x80
/* 803B5040 003B1F80  81 9F 00 80 */	lwz r12, 0x80(r31)
/* 803B5044 003B1F84  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B5048 003B1F88  7D 89 03 A6 */	mtctr r12
/* 803B504C 003B1F8C  4E 80 04 21 */	bctrl 
/* 803B5050 003B1F90  38 7F 00 90 */	addi r3, r31, 0x90
/* 803B5054 003B1F94  81 9F 00 90 */	lwz r12, 0x90(r31)
/* 803B5058 003B1F98  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B505C 003B1F9C  7D 89 03 A6 */	mtctr r12
/* 803B5060 003B1FA0  4E 80 04 21 */	bctrl 
/* 803B5064 003B1FA4  80 01 00 84 */	lwz r0, 0x84(r1)
/* 803B5068 003B1FA8  38 60 00 01 */	li r3, 1
/* 803B506C 003B1FAC  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 803B5070 003B1FB0  7C 08 03 A6 */	mtlr r0
/* 803B5074 003B1FB4  38 21 00 80 */	addi r1, r1, 0x80
/* 803B5078 003B1FB8  4E 80 00 20 */	blr 
.endfn createHiba__Q23efx13TDenkiHibaMgrFi

.fn forceKill__Q23efx13TDenkiHibaMgrFv, global
/* 803B507C 003B1FBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B5080 003B1FC0  7C 08 02 A6 */	mflr r0
/* 803B5084 003B1FC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B5088 003B1FC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B508C 003B1FCC  7C 7F 1B 78 */	mr r31, r3
/* 803B5090 003B1FD0  38 7F 00 04 */	addi r3, r31, 4
/* 803B5094 003B1FD4  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B5098 003B1FD8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B509C 003B1FDC  7D 89 03 A6 */	mtctr r12
/* 803B50A0 003B1FE0  4E 80 04 21 */	bctrl 
/* 803B50A4 003B1FE4  38 7F 00 38 */	addi r3, r31, 0x38
/* 803B50A8 003B1FE8  81 9F 00 38 */	lwz r12, 0x38(r31)
/* 803B50AC 003B1FEC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B50B0 003B1FF0  7D 89 03 A6 */	mtctr r12
/* 803B50B4 003B1FF4  4E 80 04 21 */	bctrl 
/* 803B50B8 003B1FF8  38 7F 00 5C */	addi r3, r31, 0x5c
/* 803B50BC 003B1FFC  81 9F 00 5C */	lwz r12, 0x5c(r31)
/* 803B50C0 003B2000  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B50C4 003B2004  7D 89 03 A6 */	mtctr r12
/* 803B50C8 003B2008  4E 80 04 21 */	bctrl 
/* 803B50CC 003B200C  38 7F 00 80 */	addi r3, r31, 0x80
/* 803B50D0 003B2010  81 9F 00 80 */	lwz r12, 0x80(r31)
/* 803B50D4 003B2014  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B50D8 003B2018  7D 89 03 A6 */	mtctr r12
/* 803B50DC 003B201C  4E 80 04 21 */	bctrl 
/* 803B50E0 003B2020  38 7F 00 90 */	addi r3, r31, 0x90
/* 803B50E4 003B2024  81 9F 00 90 */	lwz r12, 0x90(r31)
/* 803B50E8 003B2028  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B50EC 003B202C  7D 89 03 A6 */	mtctr r12
/* 803B50F0 003B2030  4E 80 04 21 */	bctrl 
/* 803B50F4 003B2034  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B50F8 003B2038  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B50FC 003B203C  7C 08 03 A6 */	mtlr r0
/* 803B5100 003B2040  38 21 00 10 */	addi r1, r1, 0x10
/* 803B5104 003B2044  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx13TDenkiHibaMgrFv

.fn fade__Q23efx13TDenkiHibaMgrFv, global
/* 803B5108 003B2048  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B510C 003B204C  7C 08 02 A6 */	mflr r0
/* 803B5110 003B2050  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B5114 003B2054  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B5118 003B2058  7C 7F 1B 78 */	mr r31, r3
/* 803B511C 003B205C  38 7F 00 04 */	addi r3, r31, 4
/* 803B5120 003B2060  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B5124 003B2064  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B5128 003B2068  7D 89 03 A6 */	mtctr r12
/* 803B512C 003B206C  4E 80 04 21 */	bctrl 
/* 803B5130 003B2070  38 7F 00 38 */	addi r3, r31, 0x38
/* 803B5134 003B2074  81 9F 00 38 */	lwz r12, 0x38(r31)
/* 803B5138 003B2078  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B513C 003B207C  7D 89 03 A6 */	mtctr r12
/* 803B5140 003B2080  4E 80 04 21 */	bctrl 
/* 803B5144 003B2084  38 7F 00 5C */	addi r3, r31, 0x5c
/* 803B5148 003B2088  81 9F 00 5C */	lwz r12, 0x5c(r31)
/* 803B514C 003B208C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B5150 003B2090  7D 89 03 A6 */	mtctr r12
/* 803B5154 003B2094  4E 80 04 21 */	bctrl 
/* 803B5158 003B2098  38 7F 00 80 */	addi r3, r31, 0x80
/* 803B515C 003B209C  81 9F 00 80 */	lwz r12, 0x80(r31)
/* 803B5160 003B20A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B5164 003B20A4  7D 89 03 A6 */	mtctr r12
/* 803B5168 003B20A8  4E 80 04 21 */	bctrl 
/* 803B516C 003B20AC  38 7F 00 90 */	addi r3, r31, 0x90
/* 803B5170 003B20B0  81 9F 00 90 */	lwz r12, 0x90(r31)
/* 803B5174 003B20B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B5178 003B20B8  7D 89 03 A6 */	mtctr r12
/* 803B517C 003B20BC  4E 80 04 21 */	bctrl 
/* 803B5180 003B20C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B5184 003B20C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B5188 003B20C8  7C 08 03 A6 */	mtlr r0
/* 803B518C 003B20CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B5190 003B20D0  4E 80 00 20 */	blr 
.endfn fade__Q23efx13TDenkiHibaMgrFv

.fn setRateLOD__Q23efx13TDenkiHibaMgrFi, global
/* 803B5194 003B20D4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803B5198 003B20D8  3C A0 80 49 */	lis r5, lbl_80495960@ha
/* 803B519C 003B20DC  39 85 59 60 */	addi r12, r5, lbl_80495960@l
/* 803B51A0 003B20E0  54 80 10 3A */	slwi r0, r4, 2
/* 803B51A4 003B20E4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803B51A8 003B20E8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803B51AC 003B20EC  3B C1 00 08 */	addi r30, r1, 8
/* 803B51B0 003B20F0  7F DE 02 14 */	add r30, r30, r0
/* 803B51B4 003B20F4  83 E3 00 10 */	lwz r31, 0x10(r3)
/* 803B51B8 003B20F8  81 6C 00 00 */	lwz r11, 0(r12)
/* 803B51BC 003B20FC  81 4C 00 04 */	lwz r10, 4(r12)
/* 803B51C0 003B2100  28 1F 00 00 */	cmplwi r31, 0
/* 803B51C4 003B2104  81 2C 00 08 */	lwz r9, 8(r12)
/* 803B51C8 003B2108  81 0C 00 0C */	lwz r8, 0xc(r12)
/* 803B51CC 003B210C  80 EC 00 10 */	lwz r7, 0x10(r12)
/* 803B51D0 003B2110  80 CC 00 14 */	lwz r6, 0x14(r12)
/* 803B51D4 003B2114  80 AC 00 18 */	lwz r5, 0x18(r12)
/* 803B51D8 003B2118  80 8C 00 1C */	lwz r4, 0x1c(r12)
/* 803B51DC 003B211C  80 0C 00 20 */	lwz r0, 0x20(r12)
/* 803B51E0 003B2120  91 61 00 08 */	stw r11, 8(r1)
/* 803B51E4 003B2124  91 41 00 0C */	stw r10, 0xc(r1)
/* 803B51E8 003B2128  91 21 00 10 */	stw r9, 0x10(r1)
/* 803B51EC 003B212C  91 01 00 14 */	stw r8, 0x14(r1)
/* 803B51F0 003B2130  90 E1 00 18 */	stw r7, 0x18(r1)
/* 803B51F4 003B2134  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 803B51F8 003B2138  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803B51FC 003B213C  90 81 00 24 */	stw r4, 0x24(r1)
/* 803B5200 003B2140  90 01 00 28 */	stw r0, 0x28(r1)
/* 803B5204 003B2144  41 82 00 0C */	beq .L_803B5210
/* 803B5208 003B2148  C0 1E 00 00 */	lfs f0, 0(r30)
/* 803B520C 003B214C  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_803B5210:
/* 803B5210 003B2150  83 E3 00 20 */	lwz r31, 0x20(r3)
/* 803B5214 003B2154  28 1F 00 00 */	cmplwi r31, 0
/* 803B5218 003B2158  41 82 00 0C */	beq .L_803B5224
/* 803B521C 003B215C  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 803B5220 003B2160  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_803B5224:
/* 803B5224 003B2164  83 E3 00 30 */	lwz r31, 0x30(r3)
/* 803B5228 003B2168  28 1F 00 00 */	cmplwi r31, 0
/* 803B522C 003B216C  41 82 00 0C */	beq .L_803B5238
/* 803B5230 003B2170  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 803B5234 003B2174  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_803B5238:
/* 803B5238 003B2178  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803B523C 003B217C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803B5240 003B2180  38 21 00 40 */	addi r1, r1, 0x40
/* 803B5244 003B2184  4E 80 00 20 */	blr 
.endfn setRateLOD__Q23efx13TDenkiHibaMgrFi

.fn forceKill__Q23efx8TTankWatFv, weak
/* 803B5248 003B2188  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B524C 003B218C  7C 08 02 A6 */	mflr r0
/* 803B5250 003B2190  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B5254 003B2194  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B5258 003B2198  7C 7F 1B 78 */	mr r31, r3
/* 803B525C 003B219C  4B FF C1 41 */	bl "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
/* 803B5260 003B21A0  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 803B5264 003B21A4  28 03 00 00 */	cmplwi r3, 0
/* 803B5268 003B21A8  41 82 00 14 */	beq .L_803B527C
/* 803B526C 003B21AC  81 83 00 00 */	lwz r12, 0(r3)
/* 803B5270 003B21B0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B5274 003B21B4  7D 89 03 A6 */	mtctr r12
/* 803B5278 003B21B8  4E 80 04 21 */	bctrl 
.L_803B527C:
/* 803B527C 003B21BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B5280 003B21C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B5284 003B21C4  7C 08 03 A6 */	mtlr r0
/* 803B5288 003B21C8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B528C 003B21CC  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx8TTankWatFv

.fn forceKill__Q23efx9TTankFireFv, weak
/* 803B5290 003B21D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B5294 003B21D4  7C 08 02 A6 */	mflr r0
/* 803B5298 003B21D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B529C 003B21DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B52A0 003B21E0  7C 7F 1B 78 */	mr r31, r3
/* 803B52A4 003B21E4  38 7F 00 04 */	addi r3, r31, 4
/* 803B52A8 003B21E8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B52AC 003B21EC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B52B0 003B21F0  7D 89 03 A6 */	mtctr r12
/* 803B52B4 003B21F4  4E 80 04 21 */	bctrl 
/* 803B52B8 003B21F8  38 7F 00 6C */	addi r3, r31, 0x6c
/* 803B52BC 003B21FC  81 9F 00 6C */	lwz r12, 0x6c(r31)
/* 803B52C0 003B2200  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B52C4 003B2204  7D 89 03 A6 */	mtctr r12
/* 803B52C8 003B2208  4E 80 04 21 */	bctrl 
/* 803B52CC 003B220C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B52D0 003B2210  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B52D4 003B2214  7C 08 03 A6 */	mtlr r0
/* 803B52D8 003B2218  38 21 00 10 */	addi r1, r1, 0x10
/* 803B52DC 003B221C  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx9TTankFireFv

.fn forceKill__Q23efx12TTankFireABCFv, weak
/* 803B52E0 003B2220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B52E4 003B2224  7C 08 02 A6 */	mflr r0
/* 803B52E8 003B2228  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B52EC 003B222C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B52F0 003B2230  7C 7F 1B 78 */	mr r31, r3
/* 803B52F4 003B2234  4B FF CB D1 */	bl "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"
/* 803B52F8 003B2238  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803B52FC 003B223C  28 03 00 00 */	cmplwi r3, 0
/* 803B5300 003B2240  41 82 00 14 */	beq .L_803B5314
/* 803B5304 003B2244  81 83 00 00 */	lwz r12, 0(r3)
/* 803B5308 003B2248  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B530C 003B224C  7D 89 03 A6 */	mtctr r12
/* 803B5310 003B2250  4E 80 04 21 */	bctrl 
.L_803B5314:
/* 803B5314 003B2254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B5318 003B2258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B531C 003B225C  7C 08 03 A6 */	mtlr r0
/* 803B5320 003B2260  38 21 00 10 */	addi r1, r1, 0x10
/* 803B5324 003B2264  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx12TTankFireABCFv

.fn __dt__Q23efx14TBabaFly_ver01Fv, weak
/* 803B5328 003B2268  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B532C 003B226C  7C 08 02 A6 */	mflr r0
/* 803B5330 003B2270  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B5334 003B2274  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B5338 003B2278  7C 9F 23 78 */	mr r31, r4
/* 803B533C 003B227C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B5340 003B2280  7C 7E 1B 79 */	or. r30, r3, r3
/* 803B5344 003B2284  41 82 00 64 */	beq .L_803B53A8
/* 803B5348 003B2288  3C 60 80 4E */	lis r3, __vt__Q23efx14TBabaFly_ver01@ha
/* 803B534C 003B228C  38 63 6D 38 */	addi r3, r3, __vt__Q23efx14TBabaFly_ver01@l
/* 803B5350 003B2290  90 7E 00 00 */	stw r3, 0(r30)
/* 803B5354 003B2294  38 03 00 14 */	addi r0, r3, 0x14
/* 803B5358 003B2298  90 1E 00 04 */	stw r0, 4(r30)
/* 803B535C 003B229C  41 82 00 3C */	beq .L_803B5398
/* 803B5360 003B22A0  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 803B5364 003B22A4  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 803B5368 003B22A8  90 7E 00 00 */	stw r3, 0(r30)
/* 803B536C 003B22AC  38 03 00 14 */	addi r0, r3, 0x14
/* 803B5370 003B22B0  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5374 003B22B4  41 82 00 24 */	beq .L_803B5398
/* 803B5378 003B22B8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803B537C 003B22BC  38 7E 00 04 */	addi r3, r30, 4
/* 803B5380 003B22C0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803B5384 003B22C4  38 80 00 00 */	li r4, 0
/* 803B5388 003B22C8  90 BE 00 00 */	stw r5, 0(r30)
/* 803B538C 003B22CC  38 05 00 14 */	addi r0, r5, 0x14
/* 803B5390 003B22D0  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5394 003B22D4  4B CD A9 09 */	bl __dt__18JPAEmitterCallBackFv
.L_803B5398:
/* 803B5398 003B22D8  7F E0 07 35 */	extsh. r0, r31
/* 803B539C 003B22DC  40 81 00 0C */	ble .L_803B53A8
/* 803B53A0 003B22E0  7F C3 F3 78 */	mr r3, r30
/* 803B53A4 003B22E4  4B C6 ED 11 */	bl __dl__FPv
.L_803B53A8:
/* 803B53A8 003B22E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B53AC 003B22EC  7F C3 F3 78 */	mr r3, r30
/* 803B53B0 003B22F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B53B4 003B22F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B53B8 003B22F8  7C 08 03 A6 */	mtlr r0
/* 803B53BC 003B22FC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B53C0 003B2300  4E 80 00 20 */	blr 
.endfn __dt__Q23efx14TBabaFly_ver01Fv

.fn __dt__Q23efx9TPanSmokeFv, weak
/* 803B53C4 003B2304  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B53C8 003B2308  7C 08 02 A6 */	mflr r0
/* 803B53CC 003B230C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B53D0 003B2310  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B53D4 003B2314  7C 9F 23 78 */	mr r31, r4
/* 803B53D8 003B2318  93 C1 00 08 */	stw r30, 8(r1)
/* 803B53DC 003B231C  7C 7E 1B 79 */	or. r30, r3, r3
/* 803B53E0 003B2320  41 82 00 64 */	beq .L_803B5444
/* 803B53E4 003B2324  3C 60 80 4E */	lis r3, __vt__Q23efx9TPanSmoke@ha
/* 803B53E8 003B2328  38 63 6D 84 */	addi r3, r3, __vt__Q23efx9TPanSmoke@l
/* 803B53EC 003B232C  90 7E 00 00 */	stw r3, 0(r30)
/* 803B53F0 003B2330  38 03 00 14 */	addi r0, r3, 0x14
/* 803B53F4 003B2334  90 1E 00 04 */	stw r0, 4(r30)
/* 803B53F8 003B2338  41 82 00 3C */	beq .L_803B5434
/* 803B53FC 003B233C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 803B5400 003B2340  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 803B5404 003B2344  90 7E 00 00 */	stw r3, 0(r30)
/* 803B5408 003B2348  38 03 00 14 */	addi r0, r3, 0x14
/* 803B540C 003B234C  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5410 003B2350  41 82 00 24 */	beq .L_803B5434
/* 803B5414 003B2354  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803B5418 003B2358  38 7E 00 04 */	addi r3, r30, 4
/* 803B541C 003B235C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803B5420 003B2360  38 80 00 00 */	li r4, 0
/* 803B5424 003B2364  90 BE 00 00 */	stw r5, 0(r30)
/* 803B5428 003B2368  38 05 00 14 */	addi r0, r5, 0x14
/* 803B542C 003B236C  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5430 003B2370  4B CD A8 6D */	bl __dt__18JPAEmitterCallBackFv
.L_803B5434:
/* 803B5434 003B2374  7F E0 07 35 */	extsh. r0, r31
/* 803B5438 003B2378  40 81 00 0C */	ble .L_803B5444
/* 803B543C 003B237C  7F C3 F3 78 */	mr r3, r30
/* 803B5440 003B2380  4B C6 EC 75 */	bl __dl__FPv
.L_803B5444:
/* 803B5444 003B2384  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B5448 003B2388  7F C3 F3 78 */	mr r3, r30
/* 803B544C 003B238C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B5450 003B2390  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B5454 003B2394  7C 08 03 A6 */	mtlr r0
/* 803B5458 003B2398  38 21 00 10 */	addi r1, r1, 0x10
/* 803B545C 003B239C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx9TPanSmokeFv

.fn __dt__Q23efx8TPanHideFv, weak
/* 803B5460 003B23A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B5464 003B23A4  7C 08 02 A6 */	mflr r0
/* 803B5468 003B23A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B546C 003B23AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B5470 003B23B0  7C 9F 23 78 */	mr r31, r4
/* 803B5474 003B23B4  93 C1 00 08 */	stw r30, 8(r1)
/* 803B5478 003B23B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 803B547C 003B23BC  41 82 00 64 */	beq .L_803B54E0
/* 803B5480 003B23C0  3C 60 80 4E */	lis r3, __vt__Q23efx8TPanHide@ha
/* 803B5484 003B23C4  38 63 6D D0 */	addi r3, r3, __vt__Q23efx8TPanHide@l
/* 803B5488 003B23C8  90 7E 00 00 */	stw r3, 0(r30)
/* 803B548C 003B23CC  38 03 00 14 */	addi r0, r3, 0x14
/* 803B5490 003B23D0  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5494 003B23D4  41 82 00 3C */	beq .L_803B54D0
/* 803B5498 003B23D8  3C 60 80 4B */	lis r3, __vt__Q23efx8TForever@ha
/* 803B549C 003B23DC  38 63 2C 24 */	addi r3, r3, __vt__Q23efx8TForever@l
/* 803B54A0 003B23E0  90 7E 00 00 */	stw r3, 0(r30)
/* 803B54A4 003B23E4  38 03 00 14 */	addi r0, r3, 0x14
/* 803B54A8 003B23E8  90 1E 00 04 */	stw r0, 4(r30)
/* 803B54AC 003B23EC  41 82 00 24 */	beq .L_803B54D0
/* 803B54B0 003B23F0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803B54B4 003B23F4  38 7E 00 04 */	addi r3, r30, 4
/* 803B54B8 003B23F8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803B54BC 003B23FC  38 80 00 00 */	li r4, 0
/* 803B54C0 003B2400  90 BE 00 00 */	stw r5, 0(r30)
/* 803B54C4 003B2404  38 05 00 14 */	addi r0, r5, 0x14
/* 803B54C8 003B2408  90 1E 00 04 */	stw r0, 4(r30)
/* 803B54CC 003B240C  4B CD A7 D1 */	bl __dt__18JPAEmitterCallBackFv
.L_803B54D0:
/* 803B54D0 003B2410  7F E0 07 35 */	extsh. r0, r31
/* 803B54D4 003B2414  40 81 00 0C */	ble .L_803B54E0
/* 803B54D8 003B2418  7F C3 F3 78 */	mr r3, r30
/* 803B54DC 003B241C  4B C6 EB D9 */	bl __dl__FPv
.L_803B54E0:
/* 803B54E0 003B2420  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B54E4 003B2424  7F C3 F3 78 */	mr r3, r30
/* 803B54E8 003B2428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B54EC 003B242C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B54F0 003B2430  7C 08 03 A6 */	mtlr r0
/* 803B54F4 003B2434  38 21 00 10 */	addi r1, r1, 0x10
/* 803B54F8 003B2438  4E 80 00 20 */	blr 
.endfn __dt__Q23efx8TPanHideFv

.fn __dt__Q23efx9TImoSmokeFv, weak
/* 803B54FC 003B243C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B5500 003B2440  7C 08 02 A6 */	mflr r0
/* 803B5504 003B2444  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B5508 003B2448  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B550C 003B244C  7C 9F 23 78 */	mr r31, r4
/* 803B5510 003B2450  93 C1 00 08 */	stw r30, 8(r1)
/* 803B5514 003B2454  7C 7E 1B 79 */	or. r30, r3, r3
/* 803B5518 003B2458  41 82 00 64 */	beq .L_803B557C
/* 803B551C 003B245C  3C 60 80 4E */	lis r3, __vt__Q23efx9TImoSmoke@ha
/* 803B5520 003B2460  38 63 6E 58 */	addi r3, r3, __vt__Q23efx9TImoSmoke@l
/* 803B5524 003B2464  90 7E 00 00 */	stw r3, 0(r30)
/* 803B5528 003B2468  38 03 00 14 */	addi r0, r3, 0x14
/* 803B552C 003B246C  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5530 003B2470  41 82 00 3C */	beq .L_803B556C
/* 803B5534 003B2474  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 803B5538 003B2478  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 803B553C 003B247C  90 7E 00 00 */	stw r3, 0(r30)
/* 803B5540 003B2480  38 03 00 14 */	addi r0, r3, 0x14
/* 803B5544 003B2484  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5548 003B2488  41 82 00 24 */	beq .L_803B556C
/* 803B554C 003B248C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803B5550 003B2490  38 7E 00 04 */	addi r3, r30, 4
/* 803B5554 003B2494  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803B5558 003B2498  38 80 00 00 */	li r4, 0
/* 803B555C 003B249C  90 BE 00 00 */	stw r5, 0(r30)
/* 803B5560 003B24A0  38 05 00 14 */	addi r0, r5, 0x14
/* 803B5564 003B24A4  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5568 003B24A8  4B CD A7 35 */	bl __dt__18JPAEmitterCallBackFv
.L_803B556C:
/* 803B556C 003B24AC  7F E0 07 35 */	extsh. r0, r31
/* 803B5570 003B24B0  40 81 00 0C */	ble .L_803B557C
/* 803B5574 003B24B4  7F C3 F3 78 */	mr r3, r30
/* 803B5578 003B24B8  4B C6 EB 3D */	bl __dl__FPv
.L_803B557C:
/* 803B557C 003B24BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B5580 003B24C0  7F C3 F3 78 */	mr r3, r30
/* 803B5584 003B24C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B5588 003B24C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B558C 003B24CC  7C 08 03 A6 */	mtlr r0
/* 803B5590 003B24D0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B5594 003B24D4  4E 80 00 20 */	blr 
.endfn __dt__Q23efx9TImoSmokeFv

.fn __dt__Q23efx7TImoEatFv, weak
/* 803B5598 003B24D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B559C 003B24DC  7C 08 02 A6 */	mflr r0
/* 803B55A0 003B24E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B55A4 003B24E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B55A8 003B24E8  7C 9F 23 78 */	mr r31, r4
/* 803B55AC 003B24EC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B55B0 003B24F0  7C 7E 1B 79 */	or. r30, r3, r3
/* 803B55B4 003B24F4  41 82 00 64 */	beq .L_803B5618
/* 803B55B8 003B24F8  3C 60 80 4E */	lis r3, __vt__Q23efx7TImoEat@ha
/* 803B55BC 003B24FC  38 63 6E CC */	addi r3, r3, __vt__Q23efx7TImoEat@l
/* 803B55C0 003B2500  90 7E 00 00 */	stw r3, 0(r30)
/* 803B55C4 003B2504  38 03 00 14 */	addi r0, r3, 0x14
/* 803B55C8 003B2508  90 1E 00 04 */	stw r0, 4(r30)
/* 803B55CC 003B250C  41 82 00 3C */	beq .L_803B5608
/* 803B55D0 003B2510  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 803B55D4 003B2514  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 803B55D8 003B2518  90 7E 00 00 */	stw r3, 0(r30)
/* 803B55DC 003B251C  38 03 00 14 */	addi r0, r3, 0x14
/* 803B55E0 003B2520  90 1E 00 04 */	stw r0, 4(r30)
/* 803B55E4 003B2524  41 82 00 24 */	beq .L_803B5608
/* 803B55E8 003B2528  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803B55EC 003B252C  38 7E 00 04 */	addi r3, r30, 4
/* 803B55F0 003B2530  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803B55F4 003B2534  38 80 00 00 */	li r4, 0
/* 803B55F8 003B2538  90 BE 00 00 */	stw r5, 0(r30)
/* 803B55FC 003B253C  38 05 00 14 */	addi r0, r5, 0x14
/* 803B5600 003B2540  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5604 003B2544  4B CD A6 99 */	bl __dt__18JPAEmitterCallBackFv
.L_803B5608:
/* 803B5608 003B2548  7F E0 07 35 */	extsh. r0, r31
/* 803B560C 003B254C  40 81 00 0C */	ble .L_803B5618
/* 803B5610 003B2550  7F C3 F3 78 */	mr r3, r30
/* 803B5614 003B2554  4B C6 EA A1 */	bl __dl__FPv
.L_803B5618:
/* 803B5618 003B2558  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B561C 003B255C  7F C3 F3 78 */	mr r3, r30
/* 803B5620 003B2560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B5624 003B2564  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B5628 003B2568  7C 08 03 A6 */	mtlr r0
/* 803B562C 003B256C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B5630 003B2570  4E 80 00 20 */	blr 
.endfn __dt__Q23efx7TImoEatFv

.fn __dt__Q23efx8TJgmBackFv, weak
/* 803B5634 003B2574  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B5638 003B2578  7C 08 02 A6 */	mflr r0
/* 803B563C 003B257C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B5640 003B2580  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B5644 003B2584  7C 9F 23 78 */	mr r31, r4
/* 803B5648 003B2588  93 C1 00 08 */	stw r30, 8(r1)
/* 803B564C 003B258C  7C 7E 1B 79 */	or. r30, r3, r3
/* 803B5650 003B2590  41 82 00 64 */	beq .L_803B56B4
/* 803B5654 003B2594  3C 60 80 4E */	lis r3, __vt__Q23efx8TJgmBack@ha
/* 803B5658 003B2598  38 63 6F 34 */	addi r3, r3, __vt__Q23efx8TJgmBack@l
/* 803B565C 003B259C  90 7E 00 00 */	stw r3, 0(r30)
/* 803B5660 003B25A0  38 03 00 14 */	addi r0, r3, 0x14
/* 803B5664 003B25A4  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5668 003B25A8  41 82 00 3C */	beq .L_803B56A4
/* 803B566C 003B25AC  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 803B5670 003B25B0  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 803B5674 003B25B4  90 7E 00 00 */	stw r3, 0(r30)
/* 803B5678 003B25B8  38 03 00 14 */	addi r0, r3, 0x14
/* 803B567C 003B25BC  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5680 003B25C0  41 82 00 24 */	beq .L_803B56A4
/* 803B5684 003B25C4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803B5688 003B25C8  38 7E 00 04 */	addi r3, r30, 4
/* 803B568C 003B25CC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803B5690 003B25D0  38 80 00 00 */	li r4, 0
/* 803B5694 003B25D4  90 BE 00 00 */	stw r5, 0(r30)
/* 803B5698 003B25D8  38 05 00 14 */	addi r0, r5, 0x14
/* 803B569C 003B25DC  90 1E 00 04 */	stw r0, 4(r30)
/* 803B56A0 003B25E0  4B CD A5 FD */	bl __dt__18JPAEmitterCallBackFv
.L_803B56A4:
/* 803B56A4 003B25E4  7F E0 07 35 */	extsh. r0, r31
/* 803B56A8 003B25E8  40 81 00 0C */	ble .L_803B56B4
/* 803B56AC 003B25EC  7F C3 F3 78 */	mr r3, r30
/* 803B56B0 003B25F0  4B C6 EA 05 */	bl __dl__FPv
.L_803B56B4:
/* 803B56B4 003B25F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B56B8 003B25F8  7F C3 F3 78 */	mr r3, r30
/* 803B56BC 003B25FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B56C0 003B2600  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B56C4 003B2604  7C 08 03 A6 */	mtlr r0
/* 803B56C8 003B2608  38 21 00 10 */	addi r1, r1, 0x10
/* 803B56CC 003B260C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx8TJgmBackFv

.fn __dt__Q23efx9TChouDownFv, weak
/* 803B56D0 003B2610  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B56D4 003B2614  7C 08 02 A6 */	mflr r0
/* 803B56D8 003B2618  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B56DC 003B261C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B56E0 003B2620  7C 9F 23 78 */	mr r31, r4
/* 803B56E4 003B2624  93 C1 00 08 */	stw r30, 8(r1)
/* 803B56E8 003B2628  7C 7E 1B 79 */	or. r30, r3, r3
/* 803B56EC 003B262C  41 82 00 64 */	beq .L_803B5750
/* 803B56F0 003B2630  3C 60 80 4E */	lis r3, __vt__Q23efx9TChouDown@ha
/* 803B56F4 003B2634  38 63 6F F4 */	addi r3, r3, __vt__Q23efx9TChouDown@l
/* 803B56F8 003B2638  90 7E 00 00 */	stw r3, 0(r30)
/* 803B56FC 003B263C  38 03 00 14 */	addi r0, r3, 0x14
/* 803B5700 003B2640  90 1E 00 04 */	stw r0, 4(r30)
/* 803B5704 003B2644  41 82 00 3C */	beq .L_803B5740
/* 803B5708 003B2648  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 803B570C 003B264C  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 803B5710 003B2650  90 7E 00 00 */	stw r3, 0(r30)
/* 803B5714 003B2654  38 03 00 14 */	addi r0, r3, 0x14
/* 803B5718 003B2658  90 1E 00 04 */	stw r0, 4(r30)
/* 803B571C 003B265C  41 82 00 24 */	beq .L_803B5740
/* 803B5720 003B2660  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803B5724 003B2664  38 7E 00 04 */	addi r3, r30, 4
/* 803B5728 003B2668  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803B572C 003B266C  38 80 00 00 */	li r4, 0
/* 803B5730 003B2670  90 BE 00 00 */	stw r5, 0(r30)
/* 803B5734 003B2674  38 05 00 14 */	addi r0, r5, 0x14
/* 803B5738 003B2678  90 1E 00 04 */	stw r0, 4(r30)
/* 803B573C 003B267C  4B CD A5 61 */	bl __dt__18JPAEmitterCallBackFv
.L_803B5740:
/* 803B5740 003B2680  7F E0 07 35 */	extsh. r0, r31
/* 803B5744 003B2684  40 81 00 0C */	ble .L_803B5750
/* 803B5748 003B2688  7F C3 F3 78 */	mr r3, r30
/* 803B574C 003B268C  4B C6 E9 69 */	bl __dl__FPv
.L_803B5750:
/* 803B5750 003B2690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B5754 003B2694  7F C3 F3 78 */	mr r3, r30
/* 803B5758 003B2698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B575C 003B269C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B5760 003B26A0  7C 08 03 A6 */	mtlr r0
/* 803B5764 003B26A4  38 21 00 10 */	addi r1, r1, 0x10
/* 803B5768 003B26A8  4E 80 00 20 */	blr 
.endfn __dt__Q23efx9TChouDownFv

.fn "@4@__dt__Q23efx9TChouDownFv", weak
/* 803B576C 003B26AC  38 63 FF FC */	addi r3, r3, -4
/* 803B5770 003B26B0  4B FF FF 60 */	b __dt__Q23efx9TChouDownFv
.endfn "@4@__dt__Q23efx9TChouDownFv"

.fn "@4@__dt__Q23efx8TJgmBackFv", weak
/* 803B5774 003B26B4  38 63 FF FC */	addi r3, r3, -4
/* 803B5778 003B26B8  4B FF FE BC */	b __dt__Q23efx8TJgmBackFv
.endfn "@4@__dt__Q23efx8TJgmBackFv"

.fn "@4@__dt__Q23efx7TImoEatFv", weak
/* 803B577C 003B26BC  38 63 FF FC */	addi r3, r3, -4
/* 803B5780 003B26C0  4B FF FE 18 */	b __dt__Q23efx7TImoEatFv
.endfn "@4@__dt__Q23efx7TImoEatFv"

.fn "@4@__dt__Q23efx9TImoSmokeFv", weak
/* 803B5784 003B26C4  38 63 FF FC */	addi r3, r3, -4
/* 803B5788 003B26C8  4B FF FD 74 */	b __dt__Q23efx9TImoSmokeFv
.endfn "@4@__dt__Q23efx9TImoSmokeFv"

.fn "@4@__dt__Q23efx8TPanHideFv", weak
/* 803B578C 003B26CC  38 63 FF FC */	addi r3, r3, -4
/* 803B5790 003B26D0  4B FF FC D0 */	b __dt__Q23efx8TPanHideFv
.endfn "@4@__dt__Q23efx8TPanHideFv"

.fn "@4@__dt__Q23efx9TPanSmokeFv", weak
/* 803B5794 003B26D4  38 63 FF FC */	addi r3, r3, -4
/* 803B5798 003B26D8  4B FF FC 2C */	b __dt__Q23efx9TPanSmokeFv
.endfn "@4@__dt__Q23efx9TPanSmokeFv"

.fn "@4@__dt__Q23efx14TBabaFly_ver01Fv", weak
/* 803B579C 003B26DC  38 63 FF FC */	addi r3, r3, -4
/* 803B57A0 003B26E0  4B FF FB 88 */	b __dt__Q23efx14TBabaFly_ver01Fv
.endfn "@4@__dt__Q23efx14TBabaFly_ver01Fv"

.fn "@4@__dt__Q23efx12TTankFireINDFv", weak
/* 803B57A4 003B26E4  38 63 FF FC */	addi r3, r3, -4
/* 803B57A8 003B26E8  4B EE 92 04 */	b __dt__Q23efx12TTankFireINDFv
.endfn "@4@__dt__Q23efx12TTankFireINDFv"

.fn "@4@__dt__Q23efx14TDnkmsThunderAFv", weak
/* 803B57AC 003B26EC  38 63 FF FC */	addi r3, r3, -4
/* 803B57B0 003B26F0  4B EC 62 E4 */	b __dt__Q23efx14TDnkmsThunderAFv
.endfn "@4@__dt__Q23efx14TDnkmsThunderAFv"

.fn "@4@__dt__Q23efx14TDnkmsThunderBFv", weak
/* 803B57B4 003B26F4  38 63 FF FC */	addi r3, r3, -4
/* 803B57B8 003B26F8  4B EC 62 58 */	b __dt__Q23efx14TDnkmsThunderBFv
.endfn "@4@__dt__Q23efx14TDnkmsThunderBFv"
