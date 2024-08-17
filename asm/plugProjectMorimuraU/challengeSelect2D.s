.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_challengeSelect2D_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80493FC0, local
	.asciz "challengeSelect2D"
.endobj lbl_80493FC0
.balign 4
.obj lbl_80493FD4, local
	.asciz "challengeSelect2D.cpp"
.endobj lbl_80493FD4
.balign 4
.obj lbl_80493FEC, local
	.asciz "P2Assert"
.endobj lbl_80493FEC
.balign 4
.obj lbl_80493FF8, local
	.asciz "PSCommon.h"
.endobj lbl_80493FF8
.balign 8
.obj lbl_80494008, local
	.8byte 0x00004E686C5F3030
	.8byte 0x00004E686C5F3031
	.8byte 0x00004E686C5F3032
	.8byte 0x00004E686C5F3033
	.8byte 0x00004E686C5F3034
	.8byte 0x00004E686C5F3035
	.8byte 0x00004E686C5F3036
	.8byte 0x00004E686C5F3037
	.8byte 0x00004E686C5F3038
	.8byte 0x00004E686C5F3039
	.8byte 0x00004E686C5F3130
	.8byte 0x00004E686C5F3131
	.8byte 0x00004E686C5F3132
	.8byte 0x00004E686C5F3133
	.8byte 0x00004E686C5F3134
	.8byte 0x4E554C4C5F303031
.endobj lbl_80494008
.balign 8
.obj lbl_80494088, local
	.8byte 0x00000000685F3030
	.8byte 0x00000000685F3031
	.8byte 0x00000000685F3032
	.8byte 0x00000000685F3033
.endobj lbl_80494088
.balign 4
.obj lbl_804940A8, local
	.asciz "challengeSelect"
.endobj lbl_804940A8
.balign 8
.obj lbl_804940B8, local
	.8byte 0x00343930315F3030
	.8byte 0x00343931305F3030
.endobj lbl_804940B8
.balign 4
.obj lbl_804940C8, local
	.asciz "timg/flower_seed.bti"
.endobj lbl_804940C8
.balign 4
.obj lbl_804940E0, local
	.asciz "timg/leaf_icon.bti"
.endobj lbl_804940E0
.balign 4
.obj lbl_804940F4, local
	.asciz "timg/flower_icon.bti"
.endobj lbl_804940F4
.balign 4
.obj lbl_8049410C, local
	.asciz "timg/flower_p_icon.bti"
.endobj lbl_8049410C
.balign 4
.obj lbl_80494124, local
	.4byte lbl_804940C8
	.4byte lbl_804940E0
	.4byte lbl_804940F4
	.4byte lbl_8049410C
.endobj lbl_80494124
.balign 8
.obj lbl_80494138, local
	.8byte 0x0000000050727031
	.8byte 0x0000000050797031
	.8byte 0x0000000050627031
	.8byte 0x0000000050777031
	.8byte 0x00000050626C7031
.endobj lbl_80494138
.balign 8
.obj lbl_80494160, local
	.8byte 0x00000050666C3030
	.8byte 0x5073656C65633030
	.8byte 0x000050616E613030
	.8byte 0x00000050666C3031
	.8byte 0x5073656C65633031
	.8byte 0x000050616E613031
	.8byte 0x00000050666C3032
	.8byte 0x5073656C65633032
	.8byte 0x000050616E613032
	.8byte 0x00000050666C3033
	.8byte 0x5073656C65633033
	.8byte 0x000050616E613033
	.8byte 0x00000050666C3034
	.8byte 0x5073656C65633034
	.8byte 0x000050616E613034
	.8byte 0x00000050666C3035
	.8byte 0x5073656C65633035
	.8byte 0x000050616E613039
	.8byte 0x00000050666C3036
	.8byte 0x5073656C65633036
	.8byte 0x000050616E613038
	.8byte 0x00000050666C3037
	.8byte 0x5073656C65633037
	.8byte 0x000050616E613037
	.8byte 0x00000050666C3038
	.8byte 0x5073656C65633038
	.8byte 0x000050616E613036
	.8byte 0x00000050666C3039
	.8byte 0x5073656C65633039
	.8byte 0x000050616E613035
	.8byte 0x00000050666C3130
	.8byte 0x5073656C65633130
	.8byte 0x000050616E613134
	.8byte 0x00000050666C3131
	.8byte 0x5073656C65633131
	.8byte 0x000050616E613133
	.8byte 0x00000050666C3132
	.8byte 0x5073656C65633132
	.8byte 0x000050616E613132
	.8byte 0x00000050666C3133
	.8byte 0x5073656C65633133
	.8byte 0x000050616E613131
	.8byte 0x00000050666C3134
	.8byte 0x5073656C65633134
	.8byte 0x000050616E613130
	.8byte 0x00000050666C3135
	.8byte 0x5073656C65633135
	.8byte 0x000050616E613139
	.8byte 0x00000050666C3136
	.8byte 0x5073656C65633136
	.8byte 0x000050616E613138
	.8byte 0x00000050666C3137
	.8byte 0x5073656C65633137
	.8byte 0x000050616E613137
	.8byte 0x00000050666C3138
	.8byte 0x5073656C65633138
	.8byte 0x000050616E613136
	.8byte 0x00000050666C3139
	.8byte 0x5073656C65633139
	.8byte 0x000050616E613135
	.8byte 0x00000050666C3230
	.8byte 0x5073656C65633230
	.8byte 0x000050616E613234
	.8byte 0x00000050666C3231
	.8byte 0x5073656C65633231
	.8byte 0x000050616E613233
	.8byte 0x00000050666C3232
	.8byte 0x5073656C65633232
	.8byte 0x000050616E613232
	.8byte 0x00000050666C3233
	.8byte 0x5073656C65633233
	.8byte 0x000050616E613231
	.8byte 0x00000050666C3234
	.8byte 0x5073656C65633234
	.8byte 0x000050616E613230
	.8byte 0x00000050666C3235
	.8byte 0x5073656C65633235
	.8byte 0x000050616E613239
	.8byte 0x00000050666C3236
	.8byte 0x5073656C65633236
	.8byte 0x000050616E613238
	.8byte 0x00000050666C3237
	.8byte 0x5073656C65633237
	.8byte 0x000050616E613237
	.8byte 0x00000050666C3238
	.8byte 0x5073656C65633238
	.8byte 0x000050616E613236
	.8byte 0x00000050666C3239
	.8byte 0x5073656C65633239
	.8byte 0x000050616E613235
.endobj lbl_80494160
.balign 4
.obj lbl_80494430, local
	.asciz "set DebugHeapParent. mail to morimun.\n"
.endobj lbl_80494430
.balign 4
.obj lbl_80494458, local
	.asciz "/user/Matoba/challenge/stages.txt"
.endobj lbl_80494458
.balign 4
.obj lbl_8049447C, local
	.asciz "challenge_modo_1p_2p.blo"
.endobj lbl_8049447C
.balign 4
.obj lbl_80494498, local
	.asciz "challenge_rule_window.blo"
.endobj lbl_80494498
.balign 4
.obj lbl_804944B4, local
	.asciz "challenge_rule_window.btk"
.endobj lbl_804944B4
.balign 4
.obj lbl_804944D0, local
	.asciz "challenge_rule_window_02.btk"
.endobj lbl_804944D0
.balign 4
.obj lbl_804944F0, local
	.asciz "challenge_rule_window_03.btk"
.endobj lbl_804944F0
.balign 4
.obj lbl_80494510, local
	.asciz "challenge_rule_window_04.btk"
.endobj lbl_80494510
.balign 4
.obj lbl_80494530, local
	.asciz "challenge_rule_window_05.btk"
.endobj lbl_80494530
.balign 4
.obj lbl_80494550, local
	.asciz "challengemodo_select.blo"
.endobj lbl_80494550
.balign 4
.obj lbl_8049456C, local
	.asciz "challengemodo_select.bck"
.endobj lbl_8049456C
.balign 4
.obj lbl_80494588, local
	.asciz "challengemodo_select.bpk"
.endobj lbl_80494588
.balign 4
.obj lbl_804945A4, local
	.asciz "challengemodo_select.btk"
.endobj lbl_804945A4
.balign 4
.obj lbl_804945C0, local
	.asciz "challengemodo_select_02.btk"
.endobj lbl_804945C0
.balign 4
.obj lbl_804945DC, local
	.asciz "challengemodo_select_03.btk"
.endobj lbl_804945DC
.balign 4
.obj lbl_804945F8, local
	.asciz "challengemodo_select_04.btk"
.endobj lbl_804945F8
.balign 4
.obj lbl_80494614, local
	.asciz "challengemodo_select_05.btk"
.endobj lbl_80494614
.balign 4
.obj lbl_80494630, local
	.asciz "challengemodo_select_06.btk"
.endobj lbl_80494630
.balign 4
.obj lbl_8049464C, local
	.asciz "challengemodo_select_07.btk"
.endobj lbl_8049464C
.balign 4
.obj lbl_80494668, local
	.asciz "challengemodo_select_08.btk"
.endobj lbl_80494668
.balign 4
.obj lbl_80494684, local
	.asciz "timg/sphere.bti"
.endobj lbl_80494684
.balign 4
.obj lbl_80494694, local
	.asciz "mrUtil.h"
.endobj lbl_80494694
.balign 4
.obj lbl_804946A0, local
	.asciz "hiscore1p = %d\n"
.endobj lbl_804946A0
.balign 4
.obj lbl_804946B0, local
	.asciz "hiscore2p = %d\n"
.endobj lbl_804946B0
.balign 4
.obj lbl_804946C0, local
	.asciz "piki(%d) = %d\n"
.endobj lbl_804946C0
.balign 4
.obj lbl_804946D0, local
	.asciz "doping(%d) = %d\n"
.endobj lbl_804946D0
.balign 4
.obj lbl_804946E4, local
	.asciz "floor = %d\n"
.endobj lbl_804946E4
.balign 4
.obj lbl_804946F0, local
	.asciz "endWindow"
.endobj lbl_804946F0
.balign 4
.obj lbl_804946FC, local
	.asciz "res_challengeSelect.szs"
.endobj lbl_804946FC
.balign 4
.obj lbl_80494714, local
	.asciz "screenObj.h"
.endobj lbl_80494714

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj mIconTexture__Q28Morimura16TChallengeSelect, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj mIconTexture__Q28Morimura16TChallengeSelect
.balign 4
.obj __vt__Q28Morimura21TChallengeSelectScene, global
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura21TChallengeSelectSceneFv
	.4byte getOwnerID__Q28Morimura21TChallengeSelectSceneFv
	.4byte getMemberID__Q28Morimura21TChallengeSelectSceneFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura21TChallengeSelectSceneCFv
	.4byte doCreateObj__Q28Morimura21TChallengeSelectSceneFP10JKRArchive
	.4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q28Morimura21TChallengeSelectSceneFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv
.endobj __vt__Q28Morimura21TChallengeSelectScene
.obj __vt__Q25efx2d14T2DChalDiveEnd, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d8TSimple1FPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TSimple1Fv
	.4byte fade__Q25efx2d8TSimple1Fv
	.4byte setGroup__Q25efx2d5TBaseFUc
.endobj __vt__Q25efx2d14T2DChalDiveEnd
.obj __vt__Q25efx2d11T2DChalDive, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d8TForeverFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TForeverFv
	.4byte fade__Q25efx2d8TForeverFv
	.4byte setGroup__Q25efx2d5TBaseFUc
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q25efx2d11T2DChalDiveFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte __dt__Q25efx2d11T2DChalDiveFv
.endobj __vt__Q25efx2d11T2DChalDive
.obj __vt__Q28Morimura16TChallengeSelect, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura16TChallengeSelectFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura16TChallengeSelectFv"
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
	.4byte doCreate__Q28Morimura16TChallengeSelectFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdate__Q28Morimura16TChallengeSelectFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeoutFinish__Q28Morimura16TChallengeSelectFv
	.4byte doDraw__Q28Morimura16TChallengeSelectFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte getDispMemberBase__Q28Morimura16TChallengeSelectFv
.endobj __vt__Q28Morimura16TChallengeSelect
.obj __vt__Q28Morimura33TChallengeSelectExplanationWindow, global
	.4byte 0
	.4byte 0
	.4byte create__Q28Morimura33TChallengeSelectExplanationWindowFPCcUl
	.4byte update__Q28Morimura24TSelectExplanationWindowFv
	.4byte draw__Q28Morimura24TSelectExplanationWindowFR8GraphicsP13J2DPerspGraph
	.4byte screenScaleUp__Q28Morimura33TChallengeSelectExplanationWindowFv
.endobj __vt__Q28Morimura33TChallengeSelectExplanationWindow
.obj __vt__Q28Morimura24TChallengePlayModeScreen, global
	.4byte 0
	.4byte 0
	.4byte create__Q28Morimura24TChallengePlayModeScreenFPCcUl
	.4byte update__Q28Morimura24TChallengePlayModeScreenFv
	.4byte draw__Q28Morimura24TChallengePlayModeScreenFR8GraphicsP13J2DPerspGraph
.endobj __vt__Q28Morimura24TChallengePlayModeScreen
.obj __vt__Q28Morimura16TChallengeScreen, global
	.4byte 0
	.4byte 0
	.4byte create__Q28Morimura16TChallengeScreenFPCcUl
	.4byte update__Q28Morimura16TChallengeScreenFv
	.4byte draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
	.4byte createAnimPane__Q28Morimura16TChallengeScreenFPc
	.4byte updateBckPane__Q28Morimura16TChallengeScreenFv
.endobj __vt__Q28Morimura16TChallengeScreen

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj mSelected1p__Q28Morimura16TChallengeSelect, global
	.byte 0x01
.endobj mSelected1p__Q28Morimura16TChallengeSelect
.balign 4
.obj mAlphaSpeed__Q28Morimura16TChallengeSelect, global
	.float 0.05
.endobj mAlphaSpeed__Q28Morimura16TChallengeSelect
.obj mFlashAnimInterval__Q28Morimura16TChallengeSelect, global
	.2byte 0x012C
.endobj mFlashAnimInterval__Q28Morimura16TChallengeSelect
.balign 4
.obj mTextFlashVal__Q28Morimura16TChallengeSelect, global
	.float 1.0
.endobj mTextFlashVal__Q28Morimura16TChallengeSelect
.obj mConnect2p__Q28Morimura16TChallengeSelect, global
	.byte 0x01
.endobj mConnect2p__Q28Morimura16TChallengeSelect
.balign 4
.obj mPanelMoveVal__Q28Morimura16TChallengeSelect, global
	.float 1.0
.endobj mPanelMoveVal__Q28Morimura16TChallengeSelect
.obj mPanelMoveRate__Q28Morimura16TChallengeSelect, global
	.float 0.25
.endobj mPanelMoveRate__Q28Morimura16TChallengeSelect
.obj mCircleY__Q28Morimura16TChallengeSelect, global
	.float 100.0
.endobj mCircleY__Q28Morimura16TChallengeSelect
.obj mTimerSpeed__Q28Morimura16TChallengeSelect, global
	.float 0.15
.endobj mTimerSpeed__Q28Morimura16TChallengeSelect
.obj mMoveSpeed__Q28Morimura16TChallengeSelect, global
	.float 12.0
.endobj mMoveSpeed__Q28Morimura16TChallengeSelect
.obj mSelectIconScale__Q28Morimura16TChallengeSelect, global
	.float 1.5
.endobj mSelectIconScale__Q28Morimura16TChallengeSelect

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mRightOffset__Q28Morimura16TChallengeSelect, global
	.skip 0x4
.endobj mRightOffset__Q28Morimura16TChallengeSelect
.obj mDownOffset__Q28Morimura16TChallengeSelect, global
	.skip 0x4
.endobj mDownOffset__Q28Morimura16TChallengeSelect
.obj mFrameAnimAlpha__Q28Morimura16TChallengeSelect, global
	.skip 0x1
.endobj mFrameAnimAlpha__Q28Morimura16TChallengeSelect
.obj mAllCourseOpen__Q28Morimura16TChallengeSelect, global
	.skip 0x1
.endobj mAllCourseOpen__Q28Morimura16TChallengeSelect
.obj mForceDemoStart__Q28Morimura16TChallengeSelect, global
	.skip 0x1
.endobj mForceDemoStart__Q28Morimura16TChallengeSelect
.balign 4
.obj mDivePikiNum__Q28Morimura16TChallengeSelect, global
	.skip 0x4
.endobj mDivePikiNum__Q28Morimura16TChallengeSelect
.obj mMetOffset__Q28Morimura16TChallengeSelect, global
	.skip 0x8
.endobj mMetOffset__Q28Morimura16TChallengeSelect
.obj mDebugHeapParent__Q28Morimura16TChallengeSelect, global
	.skip 0x4
.endobj mDebugHeapParent__Q28Morimura16TChallengeSelect
.obj mDebugHeap__Q28Morimura16TChallengeSelect, global
	.skip 0x4
.endobj mDebugHeap__Q28Morimura16TChallengeSelect

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051EF88, local
	.float 0.0
.endobj lbl_8051EF88
.obj lbl_8051EF8C, local
	.float -500.0
.endobj lbl_8051EF8C
.obj lbl_8051EF90, local
	.float 32768.0
.endobj lbl_8051EF90
.obj lbl_8051EF94, local
	.float 0.1
.endobj lbl_8051EF94
.obj lbl_8051EF98, local
	.float 30.0
.endobj lbl_8051EF98
.obj lbl_8051EF9C, local
	.float 0.5
.endobj lbl_8051EF9C
.obj lbl_8051EFA0, local
	.float -1.0
.endobj lbl_8051EFA0
.obj lbl_8051EFA4, local
	.float 15.0
.endobj lbl_8051EFA4
.obj lbl_8051EFA8, local
	.float 10.0
.endobj lbl_8051EFA8
.balign 8
.obj lbl_8051EFB0, local
	.8byte 0x4330000080000000
.endobj lbl_8051EFB0
.obj lbl_8051EFB8, local
	.float 0.7
.endobj lbl_8051EFB8
.obj lbl_8051EFBC, local # tau
	.float 6.2831855
.endobj lbl_8051EFBC
.obj lbl_8051EFC0, local # pi/2
	.float 1.5707964
.endobj lbl_8051EFC0
.obj lbl_8051EFC4, local
	.float -325.9493
.endobj lbl_8051EFC4
.obj lbl_8051EFC8, local
	.float 325.9493
.endobj lbl_8051EFC8
.obj lbl_8051EFCC, local
	.float 2.0
.endobj lbl_8051EFCC
.obj lbl_8051EFD0, local # pi
	.float 3.1415927
.endobj lbl_8051EFD0
.obj lbl_8051EFD4, local
	.float -8.0
.endobj lbl_8051EFD4
.obj lbl_8051EFD8, local
	.float 8.0
.endobj lbl_8051EFD8
.obj lbl_8051EFDC, local
	.float 70.0
.endobj lbl_8051EFDC
.obj lbl_8051EFE0, local
	.float 40.0
.endobj lbl_8051EFE0
.obj lbl_8051EFE4, local
	.float 0.3
.endobj lbl_8051EFE4
.obj lbl_8051EFE8, local
	.float -100.0
.endobj lbl_8051EFE8
.obj lbl_8051EFEC, local
	.float 3.0
.endobj lbl_8051EFEC
.obj lbl_8051EFF0, local
	.float 1.0
.endobj lbl_8051EFF0
.obj lbl_8051EFF4, local
	.float 0.05
.endobj lbl_8051EFF4
.obj lbl_8051EFF8, local
	.float 0.95
.endobj lbl_8051EFF8
.balign 8
.obj lbl_8051F000, local
	.8byte 0x4330000000000000
.endobj lbl_8051F000
.obj lbl_8051F008, local
	.float 0.2
.endobj lbl_8051F008
.obj lbl_8051F00C, local
	.float 0.9
.endobj lbl_8051F00C
.obj lbl_8051F010, local
	.float 0.6
.endobj lbl_8051F010
.obj lbl_8051F014, local
	.float 320.0
.endobj lbl_8051F014
.obj lbl_8051F018, local
	.float 560.0
.endobj lbl_8051F018
.obj lbl_8051F01C, local
	.float 100.0
.endobj lbl_8051F01C
.obj lbl_8051F020, local
	.float 640.0
.endobj lbl_8051F020
.obj lbl_8051F024, local
	.float 480.0
.endobj lbl_8051F024
.obj lbl_8051F028, local
	.float 32.0
.endobj lbl_8051F028
.obj lbl_8051F02C, local
	.float 800.0
.endobj lbl_8051F02C
.obj lbl_8051F030, local
	.float 75.0
.endobj lbl_8051F030
.obj lbl_8051F034, local
	.float 255.0
.endobj lbl_8051F034
.obj lbl_8051F038, local
	.float 400.0
.endobj lbl_8051F038
.obj lbl_8051F03C, local
	.float -800.0
.endobj lbl_8051F03C
.obj lbl_8051F040, local
	.float 1.1
.endobj lbl_8051F040
.obj lbl_8051F044, local
	.float 0.25
.endobj lbl_8051F044
.obj lbl_8051F048, local
	.float 20.0
.endobj lbl_8051F048
.obj lbl_8051F04C, local
	.float 0.4
.endobj lbl_8051F04C
.obj lbl_8051F050, local
	.float 0.15
.endobj lbl_8051F050
.obj lbl_8051F054, local
	.float 100000.0
.endobj lbl_8051F054
.obj lbl_8051F058, local
	.float 0.65
.endobj lbl_8051F058
.obj lbl_8051F05C, local
	.float 1.3
.endobj lbl_8051F05C
.obj lbl_8051F060, local
	.float -1.3
.endobj lbl_8051F060
.obj lbl_8051F064, local
	.float 1.25
.endobj lbl_8051F064
.obj lbl_8051F068, local
	.float -1.25
.endobj lbl_8051F068
.obj lbl_8051F06C, local
	.float 5.0
.endobj lbl_8051F06C
.obj lbl_8051F070, local
	.float 90.0
.endobj lbl_8051F070
.obj lbl_8051F074, local
	.float -0.5
.endobj lbl_8051F074
.obj lbl_8051F078, local
	.float -22.0
.endobj lbl_8051F078

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q38Morimura14TChallengePiki7posInfoFv, weak
/* 8038C488 003893C8  4E 80 00 20 */	blr 
.endfn __ct__Q38Morimura14TChallengePiki7posInfoFv

.fn update__Q28Morimura14TChallengePikiFv, global
/* 8038C48C 003893CC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8038C490 003893D0  7C 08 02 A6 */	mflr r0
/* 8038C494 003893D4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8038C498 003893D8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8038C49C 003893DC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8038C4A0 003893E0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8038C4A4 003893E4  7C 7D 1B 78 */	mr r29, r3
/* 8038C4A8 003893E8  80 03 07 2C */	lwz r0, 0x72c(r3)
/* 8038C4AC 003893EC  2C 00 00 00 */	cmpwi r0, 0
/* 8038C4B0 003893F0  40 81 00 40 */	ble .L_8038C4F0
/* 8038C4B4 003893F4  3B E0 00 00 */	li r31, 0
/* 8038C4B8 003893F8  7F BE EB 78 */	mr r30, r29
.L_8038C4BC:
/* 8038C4BC 003893FC  80 7E 00 00 */	lwz r3, 0(r30)
/* 8038C4C0 00389400  C0 3D 07 30 */	lfs f1, 0x730(r29)
/* 8038C4C4 00389404  C0 43 00 D8 */	lfs f2, 0xd8(r3)
/* 8038C4C8 00389408  EC 21 10 2A */	fadds f1, f1, f2
/* 8038C4CC 0038940C  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8038C4D0 00389410  81 83 00 00 */	lwz r12, 0(r3)
/* 8038C4D4 00389414  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038C4D8 00389418  7D 89 03 A6 */	mtctr r12
/* 8038C4DC 0038941C  4E 80 04 21 */	bctrl 
/* 8038C4E0 00389420  3B FF 00 01 */	addi r31, r31, 1
/* 8038C4E4 00389424  3B DE 00 04 */	addi r30, r30, 4
/* 8038C4E8 00389428  2C 1F 00 03 */	cmpwi r31, 3
/* 8038C4EC 0038942C  41 80 FF D0 */	blt .L_8038C4BC
.L_8038C4F0:
/* 8038C4F0 00389430  7F BF EB 78 */	mr r31, r29
/* 8038C4F4 00389434  3B C0 00 00 */	li r30, 0
/* 8038C4F8 00389438  48 00 03 D8 */	b .L_8038C8D0
.L_8038C4FC:
/* 8038C4FC 0038943C  2C 1E 00 32 */	cmpwi r30, 0x32
/* 8038C500 00389440  40 80 03 C8 */	bge .L_8038C8C8
/* 8038C504 00389444  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038C508 00389448  38 00 00 00 */	li r0, 0
/* 8038C50C 0038944C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038C510 00389450  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C514 00389454  40 80 00 08 */	bge .L_8038C51C
/* 8038C518 00389458  38 00 00 01 */	li r0, 1
.L_8038C51C:
/* 8038C51C 0038945C  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038C520 00389460  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8038C524 00389464  C0 0D 85 E8 */	lfs f0, mTimerSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038C528 00389468  EC 01 00 2A */	fadds f0, f1, f0
/* 8038C52C 0038946C  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8038C530 00389470  41 82 00 74 */	beq .L_8038C5A4
/* 8038C534 00389474  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038C538 00389478  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038C53C 0038947C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C540 00389480  40 81 00 64 */	ble .L_8038C5A4
/* 8038C544 00389484  80 0D 91 C8 */	lwz r0, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8038C548 00389488  28 00 00 00 */	cmplwi r0, 0
/* 8038C54C 0038948C  40 82 00 20 */	bne .L_8038C56C
/* 8038C550 00389490  3C 60 80 49 */	lis r3, lbl_80493FF8@ha
/* 8038C554 00389494  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 8038C558 00389498  38 63 3F F8 */	addi r3, r3, lbl_80493FF8@l
/* 8038C55C 0038949C  38 80 00 89 */	li r4, 0x89
/* 8038C560 003894A0  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 8038C564 003894A4  4C C6 31 82 */	crclr 6
/* 8038C568 003894A8  4B C9 E0 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038C56C:
/* 8038C56C 003894AC  80 6D 91 C8 */	lwz r3, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8038C570 003894B0  38 80 28 2F */	li r4, 0x282f
/* 8038C574 003894B4  38 A0 00 00 */	li r5, 0
/* 8038C578 003894B8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8038C57C 003894BC  4B FB 33 F5 */	bl playSystemSe__Q26PSGame5SetSeFUlUl
/* 8038C580 003894C0  28 03 00 00 */	cmplwi r3, 0
/* 8038C584 003894C4  41 82 00 20 */	beq .L_8038C5A4
/* 8038C588 003894C8  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8038C58C 003894CC  38 80 00 00 */	li r4, 0
/* 8038C590 003894D0  C0 22 0C 58 */	lfs f1, lbl_8051EFB8@sda21(r2)
/* 8038C594 003894D4  38 A0 00 00 */	li r5, 0
/* 8038C598 003894D8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038C59C 003894DC  7D 89 03 A6 */	mtctr r12
/* 8038C5A0 003894E0  4E 80 04 21 */	bctrl 
.L_8038C5A4:
/* 8038C5A4 003894E4  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038C5A8 003894E8  C0 02 0C 5C */	lfs f0, lbl_8051EFBC@sda21(r2)
/* 8038C5AC 003894EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C5B0 003894F0  40 81 00 0C */	ble .L_8038C5BC
/* 8038C5B4 003894F4  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038C5B8 003894F8  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_8038C5BC:
/* 8038C5BC 003894FC  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8038C5C0 00389500  2C 00 00 03 */	cmpwi r0, 3
/* 8038C5C4 00389504  41 82 01 44 */	beq .L_8038C708
/* 8038C5C8 00389508  40 80 00 14 */	bge .L_8038C5DC
/* 8038C5CC 0038950C  2C 00 00 01 */	cmpwi r0, 1
/* 8038C5D0 00389510  41 82 02 F8 */	beq .L_8038C8C8
/* 8038C5D4 00389514  40 80 00 18 */	bge .L_8038C5EC
/* 8038C5D8 00389518  48 00 02 F0 */	b .L_8038C8C8
.L_8038C5DC:
/* 8038C5DC 0038951C  2C 00 00 05 */	cmpwi r0, 5
/* 8038C5E0 00389520  41 82 02 44 */	beq .L_8038C824
/* 8038C5E4 00389524  40 80 02 E4 */	bge .L_8038C8C8
/* 8038C5E8 00389528  48 00 01 64 */	b .L_8038C74C
.L_8038C5EC:
/* 8038C5EC 0038952C  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038C5F0 00389530  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038C5F4 00389534  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C5F8 00389538  41 80 02 D0 */	blt .L_8038C8C8
/* 8038C5FC 0038953C  C0 02 0C 60 */	lfs f0, lbl_8051EFC0@sda21(r2)
/* 8038C600 00389540  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C604 00389544  40 81 00 0C */	ble .L_8038C610
/* 8038C608 00389548  38 00 00 03 */	li r0, 3
/* 8038C60C 0038954C  90 1F 00 24 */	stw r0, 0x24(r31)
.L_8038C610:
/* 8038C610 00389550  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038C614 00389554  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038C618 00389558  C0 5F 00 40 */	lfs f2, 0x40(r31)
/* 8038C61C 0038955C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C620 00389560  40 80 00 30 */	bge .L_8038C650
/* 8038C624 00389564  C0 02 0C 64 */	lfs f0, lbl_8051EFC4@sda21(r2)
/* 8038C628 00389568  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038C62C 0038956C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038C630 00389570  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038C634 00389574  FC 00 00 1E */	fctiwz f0, f0
/* 8038C638 00389578  D8 01 00 08 */	stfd f0, 8(r1)
/* 8038C63C 0038957C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8038C640 00389580  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038C644 00389584  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038C648 00389588  FC 20 00 50 */	fneg f1, f0
/* 8038C64C 0038958C  48 00 00 28 */	b .L_8038C674
.L_8038C650:
/* 8038C650 00389590  C0 02 0C 68 */	lfs f0, lbl_8051EFC8@sda21(r2)
/* 8038C654 00389594  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038C658 00389598  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038C65C 0038959C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038C660 003895A0  FC 00 00 1E */	fctiwz f0, f0
/* 8038C664 003895A4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8038C668 003895A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038C66C 003895AC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038C670 003895B0  7C 23 04 2E */	lfsx f1, r3, r0
.L_8038C674:
/* 8038C674 003895B4  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 8038C678 003895B8  C0 62 0C 6C */	lfs f3, lbl_8051EFCC@sda21(r2)
/* 8038C67C 003895BC  EC 22 00 7C */	fnmsubs f1, f2, f1, f0
/* 8038C680 003895C0  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038C684 003895C4  D0 3F 00 30 */	stfs f1, 0x30(r31)
/* 8038C688 003895C8  C0 5F 00 28 */	lfs f2, 0x28(r31)
/* 8038C68C 003895CC  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 8038C690 003895D0  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8038C694 003895D4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8038C698 003895D8  40 80 00 30 */	bge .L_8038C6C8
/* 8038C69C 003895DC  C0 02 0C 64 */	lfs f0, lbl_8051EFC4@sda21(r2)
/* 8038C6A0 003895E0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038C6A4 003895E4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038C6A8 003895E8  EC 02 00 32 */	fmuls f0, f2, f0
/* 8038C6AC 003895EC  FC 00 00 1E */	fctiwz f0, f0
/* 8038C6B0 003895F0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8038C6B4 003895F4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8038C6B8 003895F8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038C6BC 003895FC  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038C6C0 00389600  FC 00 00 50 */	fneg f0, f0
/* 8038C6C4 00389604  48 00 00 28 */	b .L_8038C6EC
.L_8038C6C8:
/* 8038C6C8 00389608  C0 02 0C 68 */	lfs f0, lbl_8051EFC8@sda21(r2)
/* 8038C6CC 0038960C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038C6D0 00389610  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038C6D4 00389614  EC 02 00 32 */	fmuls f0, f2, f0
/* 8038C6D8 00389618  FC 00 00 1E */	fctiwz f0, f0
/* 8038C6DC 0038961C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8038C6E0 00389620  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8038C6E4 00389624  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038C6E8 00389628  7C 03 04 2E */	lfsx f0, r3, r0
.L_8038C6EC:
/* 8038C6EC 0038962C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038C6F0 00389630  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 8038C6F4 00389634  FC 00 02 10 */	fabs f0, f0
/* 8038C6F8 00389638  FC 00 00 18 */	frsp f0, f0
/* 8038C6FC 0038963C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038C700 00389640  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8038C704 00389644  48 00 01 C4 */	b .L_8038C8C8
.L_8038C708:
/* 8038C708 00389648  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8038C70C 0038964C  C0 0D 85 E4 */	lfs f0, mCircleY__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038C710 00389650  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C714 00389654  40 81 00 14 */	ble .L_8038C728
/* 8038C718 00389658  C0 0D 85 EC */	lfs f0, mMoveSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038C71C 0038965C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038C720 00389660  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8038C724 00389664  48 00 01 A4 */	b .L_8038C8C8
.L_8038C728:
/* 8038C728 00389668  38 00 00 04 */	li r0, 4
/* 8038C72C 0038966C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038C730 00389670  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8038C734 00389674  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 8038C738 00389678  D0 3F 00 38 */	stfs f1, 0x38(r31)
/* 8038C73C 0038967C  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8038C740 00389680  D0 3F 00 3C */	stfs f1, 0x3c(r31)
/* 8038C744 00389684  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8038C748 00389688  48 00 01 80 */	b .L_8038C8C8
.L_8038C74C:
/* 8038C74C 0038968C  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038C750 00389690  C0 02 0C 70 */	lfs f0, lbl_8051EFD0@sda21(r2)
/* 8038C754 00389694  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C758 00389698  40 81 00 10 */	ble .L_8038C768
/* 8038C75C 0038969C  38 00 00 05 */	li r0, 5
/* 8038C760 003896A0  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8038C764 003896A4  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_8038C768:
/* 8038C768 003896A8  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 8038C76C 003896AC  C0 C2 0C 28 */	lfs f6, lbl_8051EF88@sda21(r2)
/* 8038C770 003896B0  2C 00 00 00 */	cmpwi r0, 0
/* 8038C774 003896B4  40 82 00 08 */	bne .L_8038C77C
/* 8038C778 003896B8  C0 C2 0C 74 */	lfs f6, lbl_8051EFD4@sda21(r2)
.L_8038C77C:
/* 8038C77C 003896BC  2C 00 00 01 */	cmpwi r0, 1
/* 8038C780 003896C0  40 82 00 08 */	bne .L_8038C788
/* 8038C784 003896C4  C0 C2 0C 78 */	lfs f6, lbl_8051EFD8@sda21(r2)
.L_8038C788:
/* 8038C788 003896C8  C0 BF 00 38 */	lfs f5, 0x38(r31)
/* 8038C78C 003896CC  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 8038C790 003896D0  C0 9F 00 28 */	lfs f4, 0x28(r31)
/* 8038C794 003896D4  EC 60 28 28 */	fsubs f3, f0, f5
/* 8038C798 003896D8  C0 22 0C 70 */	lfs f1, lbl_8051EFD0@sda21(r2)
/* 8038C79C 003896DC  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038C7A0 003896E0  C0 42 0C 7C */	lfs f2, lbl_8051EFDC@sda21(r2)
/* 8038C7A4 003896E4  EC 66 18 2A */	fadds f3, f6, f3
/* 8038C7A8 003896E8  EC 64 00 F2 */	fmuls f3, f4, f3
/* 8038C7AC 003896EC  EC 23 08 24 */	fdivs f1, f3, f1
/* 8038C7B0 003896F0  EC 25 08 2A */	fadds f1, f5, f1
/* 8038C7B4 003896F4  D0 3F 00 30 */	stfs f1, 0x30(r31)
/* 8038C7B8 003896F8  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038C7BC 003896FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C7C0 00389700  40 80 00 30 */	bge .L_8038C7F0
/* 8038C7C4 00389704  C0 02 0C 64 */	lfs f0, lbl_8051EFC4@sda21(r2)
/* 8038C7C8 00389708  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038C7CC 0038970C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038C7D0 00389710  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038C7D4 00389714  FC 00 00 1E */	fctiwz f0, f0
/* 8038C7D8 00389718  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8038C7DC 0038971C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8038C7E0 00389720  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038C7E4 00389724  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038C7E8 00389728  FC 20 00 50 */	fneg f1, f0
/* 8038C7EC 0038972C  48 00 00 28 */	b .L_8038C814
.L_8038C7F0:
/* 8038C7F0 00389730  C0 02 0C 68 */	lfs f0, lbl_8051EFC8@sda21(r2)
/* 8038C7F4 00389734  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038C7F8 00389738  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038C7FC 0038973C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038C800 00389740  FC 00 00 1E */	fctiwz f0, f0
/* 8038C804 00389744  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8038C808 00389748  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8038C80C 0038974C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038C810 00389750  7C 23 04 2E */	lfsx f1, r3, r0
.L_8038C814:
/* 8038C814 00389754  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 8038C818 00389758  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 8038C81C 0038975C  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8038C820 00389760  48 00 00 A8 */	b .L_8038C8C8
.L_8038C824:
/* 8038C824 00389764  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 8038C828 00389768  C0 02 0C 80 */	lfs f0, lbl_8051EFE0@sda21(r2)
/* 8038C82C 0038976C  C0 5F 00 34 */	lfs f2, 0x34(r31)
/* 8038C830 00389770  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038C834 00389774  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8038C838 00389778  40 80 00 14 */	bge .L_8038C84C
/* 8038C83C 0038977C  C0 0D 85 EC */	lfs f0, mMoveSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038C840 00389780  EC 02 00 2A */	fadds f0, f2, f0
/* 8038C844 00389784  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8038C848 00389788  48 00 00 80 */	b .L_8038C8C8
.L_8038C84C:
/* 8038C84C 0038978C  80 0D 91 C8 */	lwz r0, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8038C850 00389790  28 00 00 00 */	cmplwi r0, 0
/* 8038C854 00389794  40 82 00 20 */	bne .L_8038C874
/* 8038C858 00389798  3C 60 80 49 */	lis r3, lbl_80493FF8@ha
/* 8038C85C 0038979C  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 8038C860 003897A0  38 63 3F F8 */	addi r3, r3, lbl_80493FF8@l
/* 8038C864 003897A4  38 80 00 89 */	li r4, 0x89
/* 8038C868 003897A8  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 8038C86C 003897AC  4C C6 31 82 */	crclr 6
/* 8038C870 003897B0  4B C9 DD D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038C874:
/* 8038C874 003897B4  80 6D 91 C8 */	lwz r3, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 8038C878 003897B8  38 80 28 17 */	li r4, 0x2817
/* 8038C87C 003897BC  38 A0 00 00 */	li r5, 0
/* 8038C880 003897C0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8038C884 003897C4  4B FB 30 ED */	bl playSystemSe__Q26PSGame5SetSeFUlUl
/* 8038C888 003897C8  28 03 00 00 */	cmplwi r3, 0
/* 8038C88C 003897CC  41 82 00 20 */	beq .L_8038C8AC
/* 8038C890 003897D0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8038C894 003897D4  38 80 00 00 */	li r4, 0
/* 8038C898 003897D8  C0 22 0C 84 */	lfs f1, lbl_8051EFE4@sda21(r2)
/* 8038C89C 003897DC  38 A0 00 00 */	li r5, 0
/* 8038C8A0 003897E0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038C8A4 003897E4  7D 89 03 A6 */	mtctr r12
/* 8038C8A8 003897E8  4E 80 04 21 */	bctrl 
.L_8038C8AC:
/* 8038C8AC 003897EC  C0 02 0C 88 */	lfs f0, lbl_8051EFE8@sda21(r2)
/* 8038C8B0 003897F0  38 00 00 00 */	li r0, 0
/* 8038C8B4 003897F4  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8038C8B8 003897F8  80 6D 99 84 */	lwz r3, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038C8BC 003897FC  38 63 00 01 */	addi r3, r3, 1
/* 8038C8C0 00389800  90 6D 99 84 */	stw r3, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038C8C4 00389804  90 1F 00 24 */	stw r0, 0x24(r31)
.L_8038C8C8:
/* 8038C8C8 00389808  3B FF 00 24 */	addi r31, r31, 0x24
/* 8038C8CC 0038980C  3B DE 00 01 */	addi r30, r30, 1
.L_8038C8D0:
/* 8038C8D0 00389810  80 1D 07 2C */	lwz r0, 0x72c(r29)
/* 8038C8D4 00389814  7C 1E 00 00 */	cmpw r30, r0
/* 8038C8D8 00389818  41 80 FC 24 */	blt .L_8038C4FC
/* 8038C8DC 0038981C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8038C8E0 00389820  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8038C8E4 00389824  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8038C8E8 00389828  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8038C8EC 0038982C  7C 08 03 A6 */	mtlr r0
/* 8038C8F0 00389830  38 21 00 40 */	addi r1, r1, 0x40
/* 8038C8F4 00389834  4E 80 00 20 */	blr 
.endfn update__Q28Morimura14TChallengePikiFv

.fn update__Q28Morimura15TChallengePanelFib, global
/* 8038C8F8 00389838  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8038C8FC 0038983C  7C 08 02 A6 */	mflr r0
/* 8038C900 00389840  90 01 00 34 */	stw r0, 0x34(r1)
/* 8038C904 00389844  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8038C908 00389848  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8038C90C 0038984C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8038C910 00389850  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8038C914 00389854  7C 7F 1B 78 */	mr r31, r3
/* 8038C918 00389858  41 82 00 0C */	beq .L_8038C924
/* 8038C91C 0038985C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038C920 00389860  D0 1F 00 34 */	stfs f0, 0x34(r31)
.L_8038C924:
/* 8038C924 00389864  C0 5F 00 34 */	lfs f2, 0x34(r31)
/* 8038C928 00389868  C0 2D 85 E0 */	lfs f1, mPanelMoveRate__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038C92C 0038986C  C0 02 0C 5C */	lfs f0, lbl_8051EFBC@sda21(r2)
/* 8038C930 00389870  EC 22 08 2A */	fadds f1, f2, f1
/* 8038C934 00389874  D0 3F 00 34 */	stfs f1, 0x34(r31)
/* 8038C938 00389878  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8038C93C 0038987C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C940 00389880  40 81 00 0C */	ble .L_8038C94C
/* 8038C944 00389884  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038C948 00389888  D0 1F 00 34 */	stfs f0, 0x34(r31)
.L_8038C94C:
/* 8038C94C 0038988C  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 8038C950 00389890  81 1F 00 30 */	lwz r8, 0x30(r31)
/* 8038C954 00389894  38 03 66 67 */	addi r0, r3, 0x66666667@l
/* 8038C958 00389898  7C 60 20 96 */	mulhw r3, r0, r4
/* 8038C95C 0038989C  7C 04 40 00 */	cmpw r4, r8
/* 8038C960 003898A0  7C 66 0E 70 */	srawi r6, r3, 1
/* 8038C964 003898A4  7C 63 0E 70 */	srawi r3, r3, 1
/* 8038C968 003898A8  7C 00 40 96 */	mulhw r0, r0, r8
/* 8038C96C 003898AC  54 C7 0F FE */	srwi r7, r6, 0x1f
/* 8038C970 003898B0  54 65 0F FE */	srwi r5, r3, 0x1f
/* 8038C974 003898B4  7C C6 3A 14 */	add r6, r6, r7
/* 8038C978 003898B8  7C E3 2A 14 */	add r7, r3, r5
/* 8038C97C 003898BC  7C 03 0E 70 */	srawi r3, r0, 1
/* 8038C980 003898C0  54 65 0F FE */	srwi r5, r3, 0x1f
/* 8038C984 003898C4  7C 00 0E 70 */	srawi r0, r0, 1
/* 8038C988 003898C8  7C A3 2A 14 */	add r5, r3, r5
/* 8038C98C 003898CC  1C C6 00 05 */	mulli r6, r6, 5
/* 8038C990 003898D0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8038C994 003898D4  7D 20 1A 14 */	add r9, r0, r3
/* 8038C998 003898D8  1C 05 00 05 */	mulli r0, r5, 5
/* 8038C99C 003898DC  7C 66 20 50 */	subf r3, r6, r4
/* 8038C9A0 003898E0  7C 00 40 50 */	subf r0, r0, r8
/* 8038C9A4 003898E4  41 82 01 84 */	beq .L_8038CB28
/* 8038C9A8 003898E8  7C 03 00 00 */	cmpw r3, r0
/* 8038C9AC 003898EC  40 82 00 AC */	bne .L_8038CA58
/* 8038C9B0 003898F0  7C 07 48 00 */	cmpw r7, r9
/* 8038C9B4 003898F4  C0 62 0C 90 */	lfs f3, lbl_8051EFF0@sda21(r2)
/* 8038C9B8 003898F8  40 80 00 08 */	bge .L_8038C9C0
/* 8038C9BC 003898FC  C0 62 0C 40 */	lfs f3, lbl_8051EFA0@sda21(r2)
.L_8038C9C0:
/* 8038C9C0 00389900  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8038C9C4 00389904  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038C9C8 00389908  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038C9CC 0038990C  40 80 00 30 */	bge .L_8038C9FC
/* 8038C9D0 00389910  C0 02 0C 64 */	lfs f0, lbl_8051EFC4@sda21(r2)
/* 8038C9D4 00389914  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038C9D8 00389918  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038C9DC 0038991C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038C9E0 00389920  FC 00 00 1E */	fctiwz f0, f0
/* 8038C9E4 00389924  D8 01 00 08 */	stfd f0, 8(r1)
/* 8038C9E8 00389928  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8038C9EC 0038992C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038C9F0 00389930  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038C9F4 00389934  FC 00 00 50 */	fneg f0, f0
/* 8038C9F8 00389938  48 00 00 28 */	b .L_8038CA20
.L_8038C9FC:
/* 8038C9FC 0038993C  C0 02 0C 68 */	lfs f0, lbl_8051EFC8@sda21(r2)
/* 8038CA00 00389940  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038CA04 00389944  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038CA08 00389948  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038CA0C 0038994C  FC 00 00 1E */	fctiwz f0, f0
/* 8038CA10 00389950  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8038CA14 00389954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038CA18 00389958  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038CA1C 0038995C  7C 03 04 2E */	lfsx f0, r3, r0
.L_8038CA20:
/* 8038CA20 00389960  FC 20 02 10 */	fabs f1, f0
/* 8038CA24 00389964  C0 0D 85 DC */	lfs f0, mPanelMoveVal__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038CA28 00389968  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 8038CA2C 0038996C  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8038CA30 00389970  C0 82 0C A8 */	lfs f4, lbl_8051F008@sda21(r2)
/* 8038CA34 00389974  FC 20 08 18 */	frsp f1, f1
/* 8038CA38 00389978  C0 02 0C AC */	lfs f0, lbl_8051F00C@sda21(r2)
/* 8038CA3C 0038997C  EC 23 10 78 */	fmsubs f1, f3, f1, f2
/* 8038CA40 00389980  EC 24 10 7A */	fmadds f1, f4, f1, f2
/* 8038CA44 00389984  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 8038CA48 00389988  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038CA4C 0038998C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038CA50 00389990  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8038CA54 00389994  48 00 00 F0 */	b .L_8038CB44
.L_8038CA58:
/* 8038CA58 00389998  7C 07 48 00 */	cmpw r7, r9
/* 8038CA5C 0038999C  40 82 00 AC */	bne .L_8038CB08
/* 8038CA60 003899A0  7C 03 00 00 */	cmpw r3, r0
/* 8038CA64 003899A4  C0 62 0C 90 */	lfs f3, lbl_8051EFF0@sda21(r2)
/* 8038CA68 003899A8  40 80 00 08 */	bge .L_8038CA70
/* 8038CA6C 003899AC  C0 62 0C 40 */	lfs f3, lbl_8051EFA0@sda21(r2)
.L_8038CA70:
/* 8038CA70 003899B0  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8038CA74 003899B4  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038CA78 003899B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038CA7C 003899BC  40 80 00 30 */	bge .L_8038CAAC
/* 8038CA80 003899C0  C0 02 0C 64 */	lfs f0, lbl_8051EFC4@sda21(r2)
/* 8038CA84 003899C4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038CA88 003899C8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038CA8C 003899CC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038CA90 003899D0  FC 00 00 1E */	fctiwz f0, f0
/* 8038CA94 003899D4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8038CA98 003899D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038CA9C 003899DC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038CAA0 003899E0  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038CAA4 003899E4  FC 00 00 50 */	fneg f0, f0
/* 8038CAA8 003899E8  48 00 00 28 */	b .L_8038CAD0
.L_8038CAAC:
/* 8038CAAC 003899EC  C0 02 0C 68 */	lfs f0, lbl_8051EFC8@sda21(r2)
/* 8038CAB0 003899F0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038CAB4 003899F4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038CAB8 003899F8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038CABC 003899FC  FC 00 00 1E */	fctiwz f0, f0
/* 8038CAC0 00389A00  D8 01 00 08 */	stfd f0, 8(r1)
/* 8038CAC4 00389A04  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8038CAC8 00389A08  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038CACC 00389A0C  7C 03 04 2E */	lfsx f0, r3, r0
.L_8038CAD0:
/* 8038CAD0 00389A10  FC 20 02 10 */	fabs f1, f0
/* 8038CAD4 00389A14  C0 0D 85 DC */	lfs f0, mPanelMoveVal__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038CAD8 00389A18  C0 5F 00 28 */	lfs f2, 0x28(r31)
/* 8038CADC 00389A1C  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8038CAE0 00389A20  C0 82 0C A8 */	lfs f4, lbl_8051F008@sda21(r2)
/* 8038CAE4 00389A24  FC 20 08 18 */	frsp f1, f1
/* 8038CAE8 00389A28  C0 02 0C AC */	lfs f0, lbl_8051F00C@sda21(r2)
/* 8038CAEC 00389A2C  EC 23 10 78 */	fmsubs f1, f3, f1, f2
/* 8038CAF0 00389A30  EC 24 10 7A */	fmadds f1, f4, f1, f2
/* 8038CAF4 00389A34  D0 3F 00 28 */	stfs f1, 0x28(r31)
/* 8038CAF8 00389A38  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 8038CAFC 00389A3C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038CB00 00389A40  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 8038CB04 00389A44  48 00 00 40 */	b .L_8038CB44
.L_8038CB08:
/* 8038CB08 00389A48  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 8038CB0C 00389A4C  C0 22 0C AC */	lfs f1, lbl_8051F00C@sda21(r2)
/* 8038CB10 00389A50  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038CB14 00389A54  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8038CB18 00389A58  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 8038CB1C 00389A5C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038CB20 00389A60  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 8038CB24 00389A64  48 00 00 20 */	b .L_8038CB44
.L_8038CB28:
/* 8038CB28 00389A68  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 8038CB2C 00389A6C  C0 22 0C AC */	lfs f1, lbl_8051F00C@sda21(r2)
/* 8038CB30 00389A70  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038CB34 00389A74  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8038CB38 00389A78  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 8038CB3C 00389A7C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038CB40 00389A80  D0 1F 00 2C */	stfs f0, 0x2c(r31)
.L_8038CB44:
/* 8038CB44 00389A84  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8038CB48 00389A88  4B F9 C4 3D */	bl calc__Q32og6Screen8ScaleMgrFv
/* 8038CB4C 00389A8C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8038CB50 00389A90  FF E0 08 90 */	fmr f31, f1
/* 8038CB54 00389A94  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038CB58 00389A98  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 8038CB5C 00389A9C  C0 63 00 D8 */	lfs f3, 0xd8(r3)
/* 8038CB60 00389AA0  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 8038CB64 00389AA4  EC 01 00 2A */	fadds f0, f1, f0
/* 8038CB68 00389AA8  EC 22 18 2A */	fadds f1, f2, f3
/* 8038CB6C 00389AAC  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8038CB70 00389AB0  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8038CB74 00389AB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8038CB78 00389AB8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038CB7C 00389ABC  7D 89 03 A6 */	mtctr r12
/* 8038CB80 00389AC0  4E 80 04 21 */	bctrl 
/* 8038CB84 00389AC4  80 7F 00 04 */	lwz r3, 4(r31)
/* 8038CB88 00389AC8  38 80 00 04 */	li r4, 4
/* 8038CB8C 00389ACC  4B CA C1 31 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8038CB90 00389AD0  80 7F 00 04 */	lwz r3, 4(r31)
/* 8038CB94 00389AD4  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 8038CB98 00389AD8  C0 03 00 CC */	lfs f0, 0xcc(r3)
/* 8038CB9C 00389ADC  C0 23 00 D0 */	lfs f1, 0xd0(r3)
/* 8038CBA0 00389AE0  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8038CBA4 00389AE4  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8038CBA8 00389AE8  EC 02 00 32 */	fmuls f0, f2, f0
/* 8038CBAC 00389AEC  EC 22 00 72 */	fmuls f1, f2, f1
/* 8038CBB0 00389AF0  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 8038CBB4 00389AF4  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 8038CBB8 00389AF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8038CBBC 00389AFC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038CBC0 00389B00  7D 89 03 A6 */	mtctr r12
/* 8038CBC4 00389B04  4E 80 04 21 */	bctrl 
/* 8038CBC8 00389B08  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038CBCC 00389B0C  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038CBD0 00389B10  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 8038CBD4 00389B14  C0 63 00 D8 */	lfs f3, 0xd8(r3)
/* 8038CBD8 00389B18  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 8038CBDC 00389B1C  EC 01 00 2A */	fadds f0, f1, f0
/* 8038CBE0 00389B20  EC 22 18 2A */	fadds f1, f2, f3
/* 8038CBE4 00389B24  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8038CBE8 00389B28  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8038CBEC 00389B2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038CBF0 00389B30  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038CBF4 00389B34  7D 89 03 A6 */	mtctr r12
/* 8038CBF8 00389B38  4E 80 04 21 */	bctrl 
/* 8038CBFC 00389B3C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038CC00 00389B40  38 80 00 04 */	li r4, 4
/* 8038CC04 00389B44  4B CA C0 B9 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8038CC08 00389B48  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038CC0C 00389B4C  C0 03 00 CC */	lfs f0, 0xcc(r3)
/* 8038CC10 00389B50  C0 43 00 D0 */	lfs f2, 0xd0(r3)
/* 8038CC14 00389B54  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8038CC18 00389B58  EC 1F 00 B2 */	fmuls f0, f31, f2
/* 8038CC1C 00389B5C  D0 23 00 CC */	stfs f1, 0xcc(r3)
/* 8038CC20 00389B60  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 8038CC24 00389B64  81 83 00 00 */	lwz r12, 0(r3)
/* 8038CC28 00389B68  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038CC2C 00389B6C  7D 89 03 A6 */	mtctr r12
/* 8038CC30 00389B70  4E 80 04 21 */	bctrl 
/* 8038CC34 00389B74  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8038CC38 00389B78  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8038CC3C 00389B7C  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 8038CC40 00389B80  C0 63 00 D8 */	lfs f3, 0xd8(r3)
/* 8038CC44 00389B84  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 8038CC48 00389B88  EC 01 00 2A */	fadds f0, f1, f0
/* 8038CC4C 00389B8C  EC 22 18 2A */	fadds f1, f2, f3
/* 8038CC50 00389B90  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8038CC54 00389B94  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8038CC58 00389B98  81 83 00 00 */	lwz r12, 0(r3)
/* 8038CC5C 00389B9C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038CC60 00389BA0  7D 89 03 A6 */	mtctr r12
/* 8038CC64 00389BA4  4E 80 04 21 */	bctrl 
/* 8038CC68 00389BA8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8038CC6C 00389BAC  38 80 00 04 */	li r4, 4
/* 8038CC70 00389BB0  4B CA C0 4D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8038CC74 00389BB4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8038CC78 00389BB8  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 8038CC7C 00389BBC  C0 03 00 CC */	lfs f0, 0xcc(r3)
/* 8038CC80 00389BC0  C0 23 00 D0 */	lfs f1, 0xd0(r3)
/* 8038CC84 00389BC4  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8038CC88 00389BC8  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8038CC8C 00389BCC  EC 02 00 32 */	fmuls f0, f2, f0
/* 8038CC90 00389BD0  EC 22 00 72 */	fmuls f1, f2, f1
/* 8038CC94 00389BD4  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 8038CC98 00389BD8  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 8038CC9C 00389BDC  81 83 00 00 */	lwz r12, 0(r3)
/* 8038CCA0 00389BE0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038CCA4 00389BE4  7D 89 03 A6 */	mtctr r12
/* 8038CCA8 00389BE8  4E 80 04 21 */	bctrl 
/* 8038CCAC 00389BEC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8038CCB0 00389BF0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8038CCB4 00389BF4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8038CCB8 00389BF8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8038CCBC 00389BFC  7C 08 03 A6 */	mtlr r0
/* 8038CCC0 00389C00  38 21 00 30 */	addi r1, r1, 0x30
/* 8038CCC4 00389C04  4E 80 00 20 */	blr 
.endfn update__Q28Morimura15TChallengePanelFib

.fn __ct__Q28Morimura16TChallengeScreenFP10JKRArchivei, global
/* 8038CCC8 00389C08  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8038CCCC 00389C0C  7C 08 02 A6 */	mflr r0
/* 8038CCD0 00389C10  90 01 00 34 */	stw r0, 0x34(r1)
/* 8038CCD4 00389C14  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8038CCD8 00389C18  7C 7F 1B 78 */	mr r31, r3
/* 8038CCDC 00389C1C  48 01 46 CD */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8038CCE0 00389C20  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TChallengeScreen@ha
/* 8038CCE4 00389C24  38 00 00 00 */	li r0, 0
/* 8038CCE8 00389C28  38 63 51 88 */	addi r3, r3, __vt__Q28Morimura16TChallengeScreen@l
/* 8038CCEC 00389C2C  90 7F 00 00 */	stw r3, 0(r31)
/* 8038CCF0 00389C30  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8038CCF4 00389C34  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8038CCF8 00389C38  98 1F 00 28 */	stb r0, 0x28(r31)
/* 8038CCFC 00389C3C  4B D3 C8 A5 */	bl rand
/* 8038CD00 00389C40  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8038CD04 00389C44  3C 80 43 30 */	lis r4, 0x4330
/* 8038CD08 00389C48  90 01 00 0C */	stw r0, 0xc(r1)
/* 8038CD0C 00389C4C  7F E3 FB 78 */	mr r3, r31
/* 8038CD10 00389C50  A8 0D 85 D0 */	lha r0, mFlashAnimInterval__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038CD14 00389C54  90 81 00 08 */	stw r4, 8(r1)
/* 8038CD18 00389C58  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038CD1C 00389C5C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8038CD20 00389C60  C8 21 00 08 */	lfd f1, 8(r1)
/* 8038CD24 00389C64  C0 02 0C 30 */	lfs f0, lbl_8051EF90@sda21(r2)
/* 8038CD28 00389C68  EC 21 10 28 */	fsubs f1, f1, f2
/* 8038CD2C 00389C6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038CD30 00389C70  90 81 00 10 */	stw r4, 0x10(r1)
/* 8038CD34 00389C74  EC 21 00 24 */	fdivs f1, f1, f0
/* 8038CD38 00389C78  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8038CD3C 00389C7C  EC 00 10 28 */	fsubs f0, f0, f2
/* 8038CD40 00389C80  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038CD44 00389C84  FC 00 00 1E */	fctiwz f0, f0
/* 8038CD48 00389C88  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8038CD4C 00389C8C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8038CD50 00389C90  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8038CD54 00389C94  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8038CD58 00389C98  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8038CD5C 00389C9C  7C 08 03 A6 */	mtlr r0
/* 8038CD60 00389CA0  38 21 00 30 */	addi r1, r1, 0x30
/* 8038CD64 00389CA4  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura16TChallengeScreenFP10JKRArchivei

.fn create__Q28Morimura16TChallengeScreenFPCcUl, global
/* 8038CD68 00389CA8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8038CD6C 00389CAC  7C 08 02 A6 */	mflr r0
/* 8038CD70 00389CB0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8038CD74 00389CB4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8038CD78 00389CB8  7C 9F 23 78 */	mr r31, r4
/* 8038CD7C 00389CBC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8038CD80 00389CC0  7C 7E 1B 78 */	mr r30, r3
/* 8038CD84 00389CC4  38 60 01 48 */	li r3, 0x148
/* 8038CD88 00389CC8  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8038CD8C 00389CCC  7C BD 2B 78 */	mr r29, r5
/* 8038CD90 00389CD0  4B C9 71 15 */	bl __nw__FUl
/* 8038CD94 00389CD4  7C 60 1B 79 */	or. r0, r3, r3
/* 8038CD98 00389CD8  41 82 00 0C */	beq .L_8038CDA4
/* 8038CD9C 00389CDC  48 0A 80 11 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8038CDA0 00389CE0  7C 60 1B 78 */	mr r0, r3
.L_8038CDA4:
/* 8038CDA4 00389CE4  90 1E 00 08 */	stw r0, 8(r30)
/* 8038CDA8 00389CE8  7F E4 FB 78 */	mr r4, r31
/* 8038CDAC 00389CEC  7F A5 EB 78 */	mr r5, r29
/* 8038CDB0 00389CF0  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038CDB4 00389CF4  80 DE 00 0C */	lwz r6, 0xc(r30)
/* 8038CDB8 00389CF8  4B CB 28 6D */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8038CDBC 00389CFC  38 60 00 2C */	li r3, 0x2c
/* 8038CDC0 00389D00  4B C9 70 E5 */	bl __nw__FUl
/* 8038CDC4 00389D04  7C 7F 1B 79 */	or. r31, r3, r3
/* 8038CDC8 00389D08  41 82 00 48 */	beq .L_8038CE10
/* 8038CDCC 00389D0C  48 08 45 C5 */	bl __ct__5CNodeFv
/* 8038CDD0 00389D10  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8038CDD4 00389D14  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8038CDD8 00389D18  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 8038CDDC 00389D1C  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TCallbackScissor@ha
/* 8038CDE0 00389D20  90 1F 00 00 */	stw r0, 0(r31)
/* 8038CDE4 00389D24  38 A0 00 00 */	li r5, 0
/* 8038CDE8 00389D28  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8038CDEC 00389D2C  38 03 58 A4 */	addi r0, r3, __vt__Q28Morimura16TCallbackScissor@l
/* 8038CDF0 00389D30  90 BF 00 18 */	stw r5, 0x18(r31)
/* 8038CDF4 00389D34  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038CDF8 00389D38  90 9F 00 00 */	stw r4, 0(r31)
/* 8038CDFC 00389D3C  90 1F 00 00 */	stw r0, 0(r31)
/* 8038CE00 00389D40  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8038CE04 00389D44  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8038CE08 00389D48  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8038CE0C 00389D4C  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_8038CE10:
/* 8038CE10 00389D50  C0 02 0C B4 */	lfs f0, lbl_8051F014@sda21(r2)
/* 8038CE14 00389D54  3C 80 70 74 */	lis r4, 0x70746933@ha
/* 8038CE18 00389D58  C0 22 0C 7C */	lfs f1, lbl_8051EFDC@sda21(r2)
/* 8038CE1C 00389D5C  3C 60 00 54 */	lis r3, 0x00546D61@ha
/* 8038CE20 00389D60  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8038CE24 00389D64  38 C4 69 33 */	addi r6, r4, 0x70746933@l
/* 8038CE28 00389D68  C0 02 0C B8 */	lfs f0, lbl_8051F018@sda21(r2)
/* 8038CE2C 00389D6C  38 A3 6D 61 */	addi r5, r3, 0x00546D61@l
/* 8038CE30 00389D70  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8038CE34 00389D74  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8038CE38 00389D78  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8038CE3C 00389D7C  C0 02 0C BC */	lfs f0, lbl_8051F01C@sda21(r2)
/* 8038CE40 00389D80  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8038CE44 00389D84  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8038CE48 00389D88  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8038CE4C 00389D8C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8038CE50 00389D90  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8038CE54 00389D94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8038CE58 00389D98  90 7F 00 24 */	stw r3, 0x24(r31)
/* 8038CE5C 00389D9C  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8038CE60 00389DA0  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038CE64 00389DA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8038CE68 00389DA8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038CE6C 00389DAC  7D 89 03 A6 */	mtctr r12
/* 8038CE70 00389DB0  4E 80 04 21 */	bctrl 
/* 8038CE74 00389DB4  28 03 00 00 */	cmplwi r3, 0
/* 8038CE78 00389DB8  40 82 00 20 */	bne .L_8038CE98
/* 8038CE7C 00389DBC  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 8038CE80 00389DC0  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 8038CE84 00389DC4  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 8038CE88 00389DC8  38 80 02 38 */	li r4, 0x238
/* 8038CE8C 00389DCC  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 8038CE90 00389DD0  4C C6 31 82 */	crclr 6
/* 8038CE94 00389DD4  4B C9 D7 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038CE98:
/* 8038CE98 00389DD8  3C A0 70 74 */	lis r5, 0x70746933@ha
/* 8038CE9C 00389DDC  3C 80 00 54 */	lis r4, 0x00546D61@ha
/* 8038CEA0 00389DE0  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038CEA4 00389DE4  7F E7 FB 78 */	mr r7, r31
/* 8038CEA8 00389DE8  38 C5 69 33 */	addi r6, r5, 0x70746933@l
/* 8038CEAC 00389DEC  38 A4 6D 61 */	addi r5, r4, 0x00546D61@l
/* 8038CEB0 00389DF0  48 0A 7C 75 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8038CEB4 00389DF4  38 60 00 48 */	li r3, 0x48
/* 8038CEB8 00389DF8  4B C9 6F ED */	bl __nw__FUl
/* 8038CEBC 00389DFC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8038CEC0 00389E00  41 82 00 0C */	beq .L_8038CECC
/* 8038CEC4 00389E04  4B F7 C7 51 */	bl __ct__Q32og6Screen16CallBack_MessageFv
/* 8038CEC8 00389E08  7C 7F 1B 78 */	mr r31, r3
.L_8038CECC:
/* 8038CECC 00389E0C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038CED0 00389E10  3C 80 79 65 */	lis r4, 0x79656C32@ha
/* 8038CED4 00389E14  38 C4 6C 32 */	addi r6, r4, 0x79656C32@l
/* 8038CED8 00389E18  38 A0 00 54 */	li r5, 0x54
/* 8038CEDC 00389E1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038CEE0 00389E20  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038CEE4 00389E24  7D 89 03 A6 */	mtctr r12
/* 8038CEE8 00389E28  4E 80 04 21 */	bctrl 
/* 8038CEEC 00389E2C  28 03 00 00 */	cmplwi r3, 0
/* 8038CEF0 00389E30  40 82 00 20 */	bne .L_8038CF10
/* 8038CEF4 00389E34  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 8038CEF8 00389E38  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 8038CEFC 00389E3C  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 8038CF00 00389E40  38 80 02 40 */	li r4, 0x240
/* 8038CF04 00389E44  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 8038CF08 00389E48  4C C6 31 82 */	crclr 6
/* 8038CF0C 00389E4C  4B C9 D7 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038CF10:
/* 8038CF10 00389E50  3C 80 79 65 */	lis r4, 0x79656C32@ha
/* 8038CF14 00389E54  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038CF18 00389E58  7F E7 FB 78 */	mr r7, r31
/* 8038CF1C 00389E5C  38 A0 00 54 */	li r5, 0x54
/* 8038CF20 00389E60  38 C4 6C 32 */	addi r6, r4, 0x79656C32@l
/* 8038CF24 00389E64  48 0A 7C 01 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8038CF28 00389E68  38 60 00 48 */	li r3, 0x48
/* 8038CF2C 00389E6C  4B C9 6F 79 */	bl __nw__FUl
/* 8038CF30 00389E70  7C 7F 1B 79 */	or. r31, r3, r3
/* 8038CF34 00389E74  41 82 00 0C */	beq .L_8038CF40
/* 8038CF38 00389E78  4B F7 C6 DD */	bl __ct__Q32og6Screen16CallBack_MessageFv
/* 8038CF3C 00389E7C  7C 7F 1B 78 */	mr r31, r3
.L_8038CF40:
/* 8038CF40 00389E80  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038CF44 00389E84  3C 80 79 65 */	lis r4, 0x79656C31@ha
/* 8038CF48 00389E88  38 C4 6C 31 */	addi r6, r4, 0x79656C31@l
/* 8038CF4C 00389E8C  38 A0 00 54 */	li r5, 0x54
/* 8038CF50 00389E90  81 83 00 00 */	lwz r12, 0(r3)
/* 8038CF54 00389E94  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038CF58 00389E98  7D 89 03 A6 */	mtctr r12
/* 8038CF5C 00389E9C  4E 80 04 21 */	bctrl 
/* 8038CF60 00389EA0  28 03 00 00 */	cmplwi r3, 0
/* 8038CF64 00389EA4  40 82 00 20 */	bne .L_8038CF84
/* 8038CF68 00389EA8  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 8038CF6C 00389EAC  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 8038CF70 00389EB0  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 8038CF74 00389EB4  38 80 02 45 */	li r4, 0x245
/* 8038CF78 00389EB8  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 8038CF7C 00389EBC  4C C6 31 82 */	crclr 6
/* 8038CF80 00389EC0  4B C9 D6 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038CF84:
/* 8038CF84 00389EC4  3C 80 79 65 */	lis r4, 0x79656C31@ha
/* 8038CF88 00389EC8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038CF8C 00389ECC  7F E7 FB 78 */	mr r7, r31
/* 8038CF90 00389ED0  38 A0 00 54 */	li r5, 0x54
/* 8038CF94 00389ED4  38 C4 6C 31 */	addi r6, r4, 0x79656C31@l
/* 8038CF98 00389ED8  48 0A 7B 8D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8038CF9C 00389EDC  38 60 00 2C */	li r3, 0x2c
/* 8038CFA0 00389EE0  4B C9 6F 05 */	bl __nw__FUl
/* 8038CFA4 00389EE4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8038CFA8 00389EE8  41 82 00 48 */	beq .L_8038CFF0
/* 8038CFAC 00389EEC  48 08 43 E5 */	bl __ct__5CNodeFv
/* 8038CFB0 00389EF0  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8038CFB4 00389EF4  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8038CFB8 00389EF8  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 8038CFBC 00389EFC  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TCallbackScissor@ha
/* 8038CFC0 00389F00  90 1F 00 00 */	stw r0, 0(r31)
/* 8038CFC4 00389F04  38 A0 00 00 */	li r5, 0
/* 8038CFC8 00389F08  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8038CFCC 00389F0C  38 03 58 A4 */	addi r0, r3, __vt__Q28Morimura16TCallbackScissor@l
/* 8038CFD0 00389F10  90 BF 00 18 */	stw r5, 0x18(r31)
/* 8038CFD4 00389F14  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038CFD8 00389F18  90 9F 00 00 */	stw r4, 0(r31)
/* 8038CFDC 00389F1C  90 1F 00 00 */	stw r0, 0(r31)
/* 8038CFE0 00389F20  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8038CFE4 00389F24  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8038CFE8 00389F28  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8038CFEC 00389F2C  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_8038CFF0:
/* 8038CFF0 00389F30  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 8038CFF4 00389F34  3C 60 79 65 */	lis r3, 0x79656C31@ha
/* 8038CFF8 00389F38  C0 22 0C C0 */	lfs f1, lbl_8051F020@sda21(r2)
/* 8038CFFC 00389F3C  7F E7 FB 78 */	mr r7, r31
/* 8038D000 00389F40  D0 41 00 08 */	stfs f2, 8(r1)
/* 8038D004 00389F44  38 C3 6C 31 */	addi r6, r3, 0x79656C31@l
/* 8038D008 00389F48  C0 02 0C C4 */	lfs f0, lbl_8051F024@sda21(r2)
/* 8038D00C 00389F4C  38 A0 00 54 */	li r5, 0x54
/* 8038D010 00389F50  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8038D014 00389F54  80 61 00 08 */	lwz r3, 8(r1)
/* 8038D018 00389F58  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8038D01C 00389F5C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8038D020 00389F60  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 8038D024 00389F64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8038D028 00389F68  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8038D02C 00389F6C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8038D030 00389F70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038D034 00389F74  90 7F 00 24 */	stw r3, 0x24(r31)
/* 8038D038 00389F78  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8038D03C 00389F7C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D040 00389F80  48 0A 7A E5 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8038D044 00389F84  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D048 00389F88  3C 80 79 65 */	lis r4, 0x79656C31@ha
/* 8038D04C 00389F8C  38 C4 6C 31 */	addi r6, r4, 0x79656C31@l
/* 8038D050 00389F90  38 A0 00 54 */	li r5, 0x54
/* 8038D054 00389F94  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D058 00389F98  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038D05C 00389F9C  7D 89 03 A6 */	mtctr r12
/* 8038D060 00389FA0  4E 80 04 21 */	bctrl 
/* 8038D064 00389FA4  7C 60 1B 78 */	mr r0, r3
/* 8038D068 00389FA8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D06C 00389FAC  3C 80 79 65 */	lis r4, 0x79656C32@ha
/* 8038D070 00389FB0  38 A0 00 54 */	li r5, 0x54
/* 8038D074 00389FB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D078 00389FB8  7C 1F 03 78 */	mr r31, r0
/* 8038D07C 00389FBC  38 C4 6C 32 */	addi r6, r4, 0x79656C32@l
/* 8038D080 00389FC0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038D084 00389FC4  7D 89 03 A6 */	mtctr r12
/* 8038D088 00389FC8  4E 80 04 21 */	bctrl 
/* 8038D08C 00389FCC  7C 60 1B 78 */	mr r0, r3
/* 8038D090 00389FD0  7F E3 FB 78 */	mr r3, r31
/* 8038D094 00389FD4  7C 1D 03 78 */	mr r29, r0
/* 8038D098 00389FD8  4B CA C0 49 */	bl getParentPane__7J2DPaneFv
/* 8038D09C 00389FDC  28 03 00 00 */	cmplwi r3, 0
/* 8038D0A0 00389FE0  41 82 00 14 */	beq .L_8038D0B4
/* 8038D0A4 00389FE4  7F E3 FB 78 */	mr r3, r31
/* 8038D0A8 00389FE8  4B CA C0 39 */	bl getParentPane__7J2DPaneFv
/* 8038D0AC 00389FEC  7F E4 FB 78 */	mr r4, r31
/* 8038D0B0 00389FF0  4B CA A7 85 */	bl removeChild__7J2DPaneFP7J2DPane
.L_8038D0B4:
/* 8038D0B4 00389FF4  7F A3 EB 78 */	mr r3, r29
/* 8038D0B8 00389FF8  4B CA C0 29 */	bl getParentPane__7J2DPaneFv
/* 8038D0BC 00389FFC  28 03 00 00 */	cmplwi r3, 0
/* 8038D0C0 0038A000  41 82 00 14 */	beq .L_8038D0D4
/* 8038D0C4 0038A004  7F A3 EB 78 */	mr r3, r29
/* 8038D0C8 0038A008  4B CA C0 19 */	bl getParentPane__7J2DPaneFv
/* 8038D0CC 0038A00C  7F A4 EB 78 */	mr r4, r29
/* 8038D0D0 0038A010  4B CA A7 65 */	bl removeChild__7J2DPaneFP7J2DPane
.L_8038D0D4:
/* 8038D0D4 0038A014  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D0D8 0038A018  4B F7 CD 29 */	bl setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
/* 8038D0DC 0038A01C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D0E0 0038A020  7F A4 EB 78 */	mr r4, r29
/* 8038D0E4 0038A024  4B CA A5 E1 */	bl appendChild__7J2DPaneFP7J2DPane
/* 8038D0E8 0038A028  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D0EC 0038A02C  7F E4 FB 78 */	mr r4, r31
/* 8038D0F0 0038A030  4B CA A5 D5 */	bl appendChild__7J2DPaneFP7J2DPane
/* 8038D0F4 0038A034  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8038D0F8 0038A038  54 03 10 3A */	slwi r3, r0, 2
/* 8038D0FC 0038A03C  4B C9 6E B1 */	bl __nwa__FUl
/* 8038D100 0038A040  90 7E 00 04 */	stw r3, 4(r30)
/* 8038D104 0038A044  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D108 0038A048  4B F7 62 0D */	bl setAlphaScreen__Q22og6ScreenFP7J2DPane
/* 8038D10C 0038A04C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8038D110 0038A050  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8038D114 0038A054  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8038D118 0038A058  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8038D11C 0038A05C  7C 08 03 A6 */	mtlr r0
/* 8038D120 0038A060  38 21 00 40 */	addi r1, r1, 0x40
/* 8038D124 0038A064  4E 80 00 20 */	blr 
.endfn create__Q28Morimura16TChallengeScreenFPCcUl

.fn createAnimPane__Q28Morimura16TChallengeScreenFPc, global
/* 8038D128 0038A068  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8038D12C 0038A06C  7C 08 02 A6 */	mflr r0
/* 8038D130 0038A070  3C A0 80 49 */	lis r5, lbl_80494008@ha
/* 8038D134 0038A074  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8038D138 0038A078  38 00 00 10 */	li r0, 0x10
/* 8038D13C 0038A07C  38 A5 40 08 */	addi r5, r5, lbl_80494008@l
/* 8038D140 0038A080  38 C1 00 04 */	addi r6, r1, 4
/* 8038D144 0038A084  BF 61 00 8C */	stmw r27, 0x8c(r1)
/* 8038D148 0038A088  7C 9F 23 78 */	mr r31, r4
/* 8038D14C 0038A08C  7C 7E 1B 78 */	mr r30, r3
/* 8038D150 0038A090  38 85 FF FC */	addi r4, r5, -4
/* 8038D154 0038A094  7C 09 03 A6 */	mtctr r0
.L_8038D158:
/* 8038D158 0038A098  80 64 00 04 */	lwz r3, 4(r4)
/* 8038D15C 0038A09C  84 04 00 08 */	lwzu r0, 8(r4)
/* 8038D160 0038A0A0  90 66 00 04 */	stw r3, 4(r6)
/* 8038D164 0038A0A4  94 06 00 08 */	stwu r0, 8(r6)
/* 8038D168 0038A0A8  42 00 FF F0 */	bdnz .L_8038D158
/* 8038D16C 0038A0AC  38 00 00 0F */	li r0, 0xf
/* 8038D170 0038A0B0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8038D174 0038A0B4  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8038D178 0038A0B8  54 03 10 3A */	slwi r3, r0, 2
/* 8038D17C 0038A0BC  4B C9 6E 31 */	bl __nwa__FUl
/* 8038D180 0038A0C0  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 8038D184 0038A0C4  3B 81 00 08 */	addi r28, r1, 8
/* 8038D188 0038A0C8  3B 60 00 00 */	li r27, 0
/* 8038D18C 0038A0CC  3B A0 00 00 */	li r29, 0
/* 8038D190 0038A0D0  48 00 00 50 */	b .L_8038D1E0
.L_8038D194:
/* 8038D194 0038A0D4  38 60 00 44 */	li r3, 0x44
/* 8038D198 0038A0D8  4B C9 6D 0D */	bl __nw__FUl
/* 8038D19C 0038A0DC  7C 60 1B 79 */	or. r0, r3, r3
/* 8038D1A0 0038A0E0  41 82 00 0C */	beq .L_8038D1AC
/* 8038D1A4 0038A0E4  4B F7 7F D5 */	bl __ct__Q32og6Screen8AnimPaneFv
/* 8038D1A8 0038A0E8  7C 60 1B 78 */	mr r0, r3
.L_8038D1AC:
/* 8038D1AC 0038A0EC  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 8038D1B0 0038A0F0  7F E9 FB 78 */	mr r9, r31
/* 8038D1B4 0038A0F4  7C 03 E9 2E */	stwx r0, r3, r29
/* 8038D1B8 0038A0F8  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 8038D1BC 0038A0FC  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8038D1C0 0038A100  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8038D1C4 0038A104  80 BE 00 08 */	lwz r5, 8(r30)
/* 8038D1C8 0038A108  80 FC 00 00 */	lwz r7, 0(r28)
/* 8038D1CC 0038A10C  81 1C 00 04 */	lwz r8, 4(r28)
/* 8038D1D0 0038A110  4B F7 80 49 */	bl init__Q32og6Screen8AnimPaneFP10JKRArchiveP9J2DScreenUxPc
/* 8038D1D4 0038A114  3B BD 00 04 */	addi r29, r29, 4
/* 8038D1D8 0038A118  3B 9C 00 08 */	addi r28, r28, 8
/* 8038D1DC 0038A11C  3B 7B 00 01 */	addi r27, r27, 1
.L_8038D1E0:
/* 8038D1E0 0038A120  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8038D1E4 0038A124  7C 1B 00 00 */	cmpw r27, r0
/* 8038D1E8 0038A128  41 80 FF AC */	blt .L_8038D194
/* 8038D1EC 0038A12C  BB 61 00 8C */	lmw r27, 0x8c(r1)
/* 8038D1F0 0038A130  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8038D1F4 0038A134  7C 08 03 A6 */	mtlr r0
/* 8038D1F8 0038A138  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8038D1FC 0038A13C  4E 80 00 20 */	blr 
.endfn createAnimPane__Q28Morimura16TChallengeScreenFPc

.fn update__Q28Morimura16TChallengeScreenFv, global
/* 8038D200 0038A140  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8038D204 0038A144  7C 08 02 A6 */	mflr r0
/* 8038D208 0038A148  90 01 00 34 */	stw r0, 0x34(r1)
/* 8038D20C 0038A14C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8038D210 0038A150  7C 7F 1B 78 */	mr r31, r3
/* 8038D214 0038A154  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8038D218 0038A158  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8038D21C 0038A15C  80 63 00 08 */	lwz r3, 8(r3)
/* 8038D220 0038A160  28 03 00 00 */	cmplwi r3, 0
/* 8038D224 0038A164  41 82 01 4C */	beq .L_8038D370
/* 8038D228 0038A168  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D22C 0038A16C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8038D230 0038A170  7D 89 03 A6 */	mtctr r12
/* 8038D234 0038A174  4E 80 04 21 */	bctrl 
/* 8038D238 0038A178  3B A0 00 00 */	li r29, 0
/* 8038D23C 0038A17C  3B C0 00 00 */	li r30, 0
/* 8038D240 0038A180  48 00 00 44 */	b .L_8038D284
.L_8038D244:
/* 8038D244 0038A184  2C 1D 00 01 */	cmpwi r29, 1
/* 8038D248 0038A188  41 82 00 14 */	beq .L_8038D25C
/* 8038D24C 0038A18C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8038D250 0038A190  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8038D254 0038A194  4B F7 7B BD */	bl update__Q32og6Screen12AnimBaseBaseFv
/* 8038D258 0038A198  48 00 00 24 */	b .L_8038D27C
.L_8038D25C:
/* 8038D25C 0038A19C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8038D260 0038A1A0  80 83 00 00 */	lwz r4, 0(r3)
/* 8038D264 0038A1A4  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8038D268 0038A1A8  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 8038D26C 0038A1AC  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8038D270 0038A1B0  80 7F 00 04 */	lwz r3, 4(r31)
/* 8038D274 0038A1B4  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8038D278 0038A1B8  4B F7 7B 99 */	bl update__Q32og6Screen12AnimBaseBaseFv
.L_8038D27C:
/* 8038D27C 0038A1BC  3B DE 00 04 */	addi r30, r30, 4
/* 8038D280 0038A1C0  3B BD 00 01 */	addi r29, r29, 1
.L_8038D284:
/* 8038D284 0038A1C4  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8038D288 0038A1C8  7C 1D 00 00 */	cmpw r29, r0
/* 8038D28C 0038A1CC  41 80 FF B8 */	blt .L_8038D244
/* 8038D290 0038A1D0  88 1F 00 28 */	lbz r0, 0x28(r31)
/* 8038D294 0038A1D4  28 00 00 00 */	cmplwi r0, 0
/* 8038D298 0038A1D8  40 82 00 BC */	bne .L_8038D354
/* 8038D29C 0038A1DC  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8038D2A0 0038A1E0  38 03 00 01 */	addi r0, r3, 1
/* 8038D2A4 0038A1E4  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8038D2A8 0038A1E8  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8038D2AC 0038A1EC  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8038D2B0 0038A1F0  7C 03 00 00 */	cmpw r3, r0
/* 8038D2B4 0038A1F4  40 81 00 A0 */	ble .L_8038D354
/* 8038D2B8 0038A1F8  38 80 00 00 */	li r4, 0
/* 8038D2BC 0038A1FC  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038D2C0 0038A200  90 9F 00 20 */	stw r4, 0x20(r31)
/* 8038D2C4 0038A204  38 A0 00 00 */	li r5, 0
/* 8038D2C8 0038A208  48 00 00 18 */	b .L_8038D2E0
.L_8038D2CC:
/* 8038D2CC 0038A20C  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 8038D2D0 0038A210  38 A5 00 01 */	addi r5, r5, 1
/* 8038D2D4 0038A214  7C 63 20 2E */	lwzx r3, r3, r4
/* 8038D2D8 0038A218  38 84 00 04 */	addi r4, r4, 4
/* 8038D2DC 0038A21C  D0 03 00 18 */	stfs f0, 0x18(r3)
.L_8038D2E0:
/* 8038D2E0 0038A220  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 8038D2E4 0038A224  7C 05 00 00 */	cmpw r5, r0
/* 8038D2E8 0038A228  41 80 FF E4 */	blt .L_8038D2CC
/* 8038D2EC 0038A22C  38 00 00 01 */	li r0, 1
/* 8038D2F0 0038A230  98 1F 00 28 */	stb r0, 0x28(r31)
/* 8038D2F4 0038A234  4B D3 C2 AD */	bl rand
/* 8038D2F8 0038A238  3C 80 43 30 */	lis r4, 0x4330
/* 8038D2FC 0038A23C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8038D300 0038A240  90 01 00 0C */	stw r0, 0xc(r1)
/* 8038D304 0038A244  A8 0D 85 D0 */	lha r0, mFlashAnimInterval__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038D308 0038A248  90 81 00 08 */	stw r4, 8(r1)
/* 8038D30C 0038A24C  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 8038D310 0038A250  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8038D314 0038A254  C8 21 00 08 */	lfd f1, 8(r1)
/* 8038D318 0038A258  C0 02 0C 30 */	lfs f0, lbl_8051EF90@sda21(r2)
/* 8038D31C 0038A25C  EC 41 18 28 */	fsubs f2, f1, f3
/* 8038D320 0038A260  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038D324 0038A264  C0 22 0C AC */	lfs f1, lbl_8051F00C@sda21(r2)
/* 8038D328 0038A268  90 81 00 10 */	stw r4, 0x10(r1)
/* 8038D32C 0038A26C  EC 82 00 24 */	fdivs f4, f2, f0
/* 8038D330 0038A270  C0 02 0C 34 */	lfs f0, lbl_8051EF94@sda21(r2)
/* 8038D334 0038A274  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 8038D338 0038A278  EC 42 18 28 */	fsubs f2, f2, f3
/* 8038D33C 0038A27C  EC 01 01 3A */	fmadds f0, f1, f4, f0
/* 8038D340 0038A280  EC 02 00 32 */	fmuls f0, f2, f0
/* 8038D344 0038A284  FC 00 00 1E */	fctiwz f0, f0
/* 8038D348 0038A288  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8038D34C 0038A28C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8038D350 0038A290  90 1F 00 24 */	stw r0, 0x24(r31)
.L_8038D354:
/* 8038D354 0038A294  7F E3 FB 78 */	mr r3, r31
/* 8038D358 0038A298  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038D35C 0038A29C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8038D360 0038A2A0  7D 89 03 A6 */	mtctr r12
/* 8038D364 0038A2A4  4E 80 04 21 */	bctrl 
/* 8038D368 0038A2A8  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038D36C 0038A2AC  4B CB 37 C1 */	bl animation__9J2DScreenFv
.L_8038D370:
/* 8038D370 0038A2B0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8038D374 0038A2B4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8038D378 0038A2B8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8038D37C 0038A2BC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8038D380 0038A2C0  7C 08 03 A6 */	mtlr r0
/* 8038D384 0038A2C4  38 21 00 30 */	addi r1, r1, 0x30
/* 8038D388 0038A2C8  4E 80 00 20 */	blr 
.endfn update__Q28Morimura16TChallengeScreenFv

.fn updateBckPane__Q28Morimura16TChallengeScreenFv, global
/* 8038D38C 0038A2CC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8038D390 0038A2D0  7C 08 02 A6 */	mflr r0
/* 8038D394 0038A2D4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8038D398 0038A2D8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8038D39C 0038A2DC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8038D3A0 0038A2E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8038D3A4 0038A2E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8038D3A8 0038A2E8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8038D3AC 0038A2EC  93 81 00 10 */	stw r28, 0x10(r1)
/* 8038D3B0 0038A2F0  3B C0 00 00 */	li r30, 0
/* 8038D3B4 0038A2F4  C3 E2 0C C8 */	lfs f31, lbl_8051F028@sda21(r2)
/* 8038D3B8 0038A2F8  7C 7C 1B 78 */	mr r28, r3
/* 8038D3BC 0038A2FC  3B A0 00 00 */	li r29, 0
/* 8038D3C0 0038A300  7F DF F3 78 */	mr r31, r30
/* 8038D3C4 0038A304  48 00 00 44 */	b .L_8038D408
.L_8038D3C8:
/* 8038D3C8 0038A308  80 7C 00 1C */	lwz r3, 0x1c(r28)
/* 8038D3CC 0038A30C  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8038D3D0 0038A310  4B F7 7A 41 */	bl update__Q32og6Screen12AnimBaseBaseFv
/* 8038D3D4 0038A314  80 7C 00 1C */	lwz r3, 0x1c(r28)
/* 8038D3D8 0038A318  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8038D3DC 0038A31C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8038D3E0 0038A320  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8038D3E4 0038A324  4C 41 13 82 */	cror 2, 1, 2
/* 8038D3E8 0038A328  41 82 00 10 */	beq .L_8038D3F8
/* 8038D3EC 0038A32C  88 1C 00 28 */	lbz r0, 0x28(r28)
/* 8038D3F0 0038A330  28 00 00 00 */	cmplwi r0, 0
/* 8038D3F4 0038A334  40 82 00 0C */	bne .L_8038D400
.L_8038D3F8:
/* 8038D3F8 0038A338  D3 E3 00 18 */	stfs f31, 0x18(r3)
/* 8038D3FC 0038A33C  9B FC 00 28 */	stb r31, 0x28(r28)
.L_8038D400:
/* 8038D400 0038A340  3B DE 00 04 */	addi r30, r30, 4
/* 8038D404 0038A344  3B BD 00 01 */	addi r29, r29, 1
.L_8038D408:
/* 8038D408 0038A348  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 8038D40C 0038A34C  7C 1D 00 00 */	cmpw r29, r0
/* 8038D410 0038A350  41 80 FF B8 */	blt .L_8038D3C8
/* 8038D414 0038A354  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8038D418 0038A358  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8038D41C 0038A35C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8038D420 0038A360  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8038D424 0038A364  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8038D428 0038A368  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8038D42C 0038A36C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8038D430 0038A370  7C 08 03 A6 */	mtlr r0
/* 8038D434 0038A374  38 21 00 30 */	addi r1, r1, 0x30
/* 8038D438 0038A378  4E 80 00 20 */	blr 
.endfn updateBckPane__Q28Morimura16TChallengeScreenFv

.fn isRandAnimStart__Q28Morimura16TChallengeScreenFv, global
/* 8038D43C 0038A37C  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8038D440 0038A380  C0 22 0C 6C */	lfs f1, lbl_8051EFCC@sda21(r2)
/* 8038D444 0038A384  80 63 00 00 */	lwz r3, 0(r3)
/* 8038D448 0038A388  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8038D44C 0038A38C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8038D450 0038A390  7C 00 00 26 */	mfcr r0
/* 8038D454 0038A394  54 03 1F FE */	rlwinm r3, r0, 3, 0x1f, 0x1f
/* 8038D458 0038A398  4E 80 00 20 */	blr 
.endfn isRandAnimStart__Q28Morimura16TChallengeScreenFv

.fn __ct__Q28Morimura24TChallengePlayModeScreenFP10JKRArchivei, global
/* 8038D45C 0038A39C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8038D460 0038A3A0  7C 08 02 A6 */	mflr r0
/* 8038D464 0038A3A4  90 01 00 64 */	stw r0, 0x64(r1)
/* 8038D468 0038A3A8  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8038D46C 0038A3AC  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8038D470 0038A3B0  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8038D474 0038A3B4  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8038D478 0038A3B8  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8038D47C 0038A3BC  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 8038D480 0038A3C0  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8038D484 0038A3C4  7C 7B 1B 78 */	mr r27, r3
/* 8038D488 0038A3C8  48 01 3F 21 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8038D48C 0038A3CC  3C 60 80 4E */	lis r3, __vt__Q28Morimura24TChallengePlayModeScreen@ha
/* 8038D490 0038A3D0  3B C0 00 00 */	li r30, 0
/* 8038D494 0038A3D4  38 03 51 74 */	addi r0, r3, __vt__Q28Morimura24TChallengePlayModeScreen@l
/* 8038D498 0038A3D8  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 8038D49C 0038A3DC  90 1B 00 00 */	stw r0, 0(r27)
/* 8038D4A0 0038A3E0  7F 7D DB 78 */	mr r29, r27
/* 8038D4A4 0038A3E4  C0 02 0C CC */	lfs f0, lbl_8051F02C@sda21(r2)
/* 8038D4A8 0038A3E8  3B 80 00 00 */	li r28, 0
/* 8038D4AC 0038A3EC  93 DB 00 20 */	stw r30, 0x20(r27)
/* 8038D4B0 0038A3F0  3F E0 43 30 */	lis r31, 0x4330
/* 8038D4B4 0038A3F4  CB A2 0C 50 */	lfd f29, lbl_8051EFB0@sda21(r2)
/* 8038D4B8 0038A3F8  93 DB 00 2C */	stw r30, 0x2c(r27)
/* 8038D4BC 0038A3FC  C3 C2 0C 30 */	lfs f30, lbl_8051EF90@sda21(r2)
/* 8038D4C0 0038A400  93 DB 00 54 */	stw r30, 0x54(r27)
/* 8038D4C4 0038A404  C3 E2 0C 5C */	lfs f31, lbl_8051EFBC@sda21(r2)
/* 8038D4C8 0038A408  93 DB 00 58 */	stw r30, 0x58(r27)
/* 8038D4CC 0038A40C  93 DB 00 5C */	stw r30, 0x5c(r27)
/* 8038D4D0 0038A410  93 DB 00 80 */	stw r30, 0x80(r27)
/* 8038D4D4 0038A414  9B DB 00 84 */	stb r30, 0x84(r27)
/* 8038D4D8 0038A418  D0 3B 00 88 */	stfs f1, 0x88(r27)
/* 8038D4DC 0038A41C  D0 3B 00 8C */	stfs f1, 0x8c(r27)
/* 8038D4E0 0038A420  D0 3B 00 90 */	stfs f1, 0x90(r27)
/* 8038D4E4 0038A424  D0 1B 00 94 */	stfs f0, 0x94(r27)
/* 8038D4E8 0038A428  93 DB 00 18 */	stw r30, 0x18(r27)
/* 8038D4EC 0038A42C  93 DB 00 3C */	stw r30, 0x3c(r27)
/* 8038D4F0 0038A430  93 DB 00 24 */	stw r30, 0x24(r27)
/* 8038D4F4 0038A434  D0 3B 00 98 */	stfs f1, 0x98(r27)
/* 8038D4F8 0038A438  93 DB 00 1C */	stw r30, 0x1c(r27)
/* 8038D4FC 0038A43C  93 DB 00 40 */	stw r30, 0x40(r27)
/* 8038D500 0038A440  93 DB 00 28 */	stw r30, 0x28(r27)
/* 8038D504 0038A444  D0 3B 00 9C */	stfs f1, 0x9c(r27)
.L_8038D508:
/* 8038D508 0038A448  93 DD 00 30 */	stw r30, 0x30(r29)
/* 8038D50C 0038A44C  4B D3 C0 95 */	bl rand
/* 8038D510 0038A450  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8038D514 0038A454  3B 9C 00 01 */	addi r28, r28, 1
/* 8038D518 0038A458  90 01 00 0C */	stw r0, 0xc(r1)
/* 8038D51C 0038A45C  2C 1C 00 03 */	cmpwi r28, 3
/* 8038D520 0038A460  93 E1 00 08 */	stw r31, 8(r1)
/* 8038D524 0038A464  C8 01 00 08 */	lfd f0, 8(r1)
/* 8038D528 0038A468  EC 00 E8 28 */	fsubs f0, f0, f29
/* 8038D52C 0038A46C  EC 00 F0 24 */	fdivs f0, f0, f30
/* 8038D530 0038A470  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8038D534 0038A474  D0 1D 00 A0 */	stfs f0, 0xa0(r29)
/* 8038D538 0038A478  3B BD 00 04 */	addi r29, r29, 4
/* 8038D53C 0038A47C  41 80 FF CC */	blt .L_8038D508
/* 8038D540 0038A480  38 00 00 00 */	li r0, 0
/* 8038D544 0038A484  7F 63 DB 78 */	mr r3, r27
/* 8038D548 0038A488  90 1B 00 44 */	stw r0, 0x44(r27)
/* 8038D54C 0038A48C  90 1B 00 48 */	stw r0, 0x48(r27)
/* 8038D550 0038A490  90 1B 00 4C */	stw r0, 0x4c(r27)
/* 8038D554 0038A494  90 1B 00 50 */	stw r0, 0x50(r27)
/* 8038D558 0038A498  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8038D55C 0038A49C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8038D560 0038A4A0  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8038D564 0038A4A4  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8038D568 0038A4A8  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 8038D56C 0038A4AC  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 8038D570 0038A4B0  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8038D574 0038A4B4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8038D578 0038A4B8  7C 08 03 A6 */	mtlr r0
/* 8038D57C 0038A4BC  38 21 00 60 */	addi r1, r1, 0x60
/* 8038D580 0038A4C0  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura24TChallengePlayModeScreenFP10JKRArchivei

.fn create__Q28Morimura24TChallengePlayModeScreenFPCcUl, global
/* 8038D584 0038A4C4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8038D588 0038A4C8  7C 08 02 A6 */	mflr r0
/* 8038D58C 0038A4CC  3C C0 80 49 */	lis r6, lbl_80493FC0@ha
/* 8038D590 0038A4D0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8038D594 0038A4D4  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 8038D598 0038A4D8  7C 7E 1B 78 */	mr r30, r3
/* 8038D59C 0038A4DC  3B E6 3F C0 */	addi r31, r6, lbl_80493FC0@l
/* 8038D5A0 0038A4E0  48 01 3E 31 */	bl create__Q28Morimura11TScreenBaseFPCcUl
/* 8038D5A4 0038A4E4  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D5A8 0038A4E8  3C 80 69 6C */	lis r4, 0x696C3030@ha
/* 8038D5AC 0038A4EC  38 C4 30 30 */	addi r6, r4, 0x696C3030@l
/* 8038D5B0 0038A4F0  38 A0 00 00 */	li r5, 0
/* 8038D5B4 0038A4F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D5B8 0038A4F8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038D5BC 0038A4FC  7D 89 03 A6 */	mtctr r12
/* 8038D5C0 0038A500  4E 80 04 21 */	bctrl 
/* 8038D5C4 0038A504  38 00 00 00 */	li r0, 0
/* 8038D5C8 0038A508  3C 80 69 72 */	lis r4, 0x69723030@ha
/* 8038D5CC 0038A50C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8038D5D0 0038A510  38 C4 30 30 */	addi r6, r4, 0x69723030@l
/* 8038D5D4 0038A514  38 A0 00 00 */	li r5, 0
/* 8038D5D8 0038A518  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D5DC 0038A51C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D5E0 0038A520  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038D5E4 0038A524  7D 89 03 A6 */	mtctr r12
/* 8038D5E8 0038A528  4E 80 04 21 */	bctrl 
/* 8038D5EC 0038A52C  38 00 00 00 */	li r0, 0
/* 8038D5F0 0038A530  3C 80 69 6C */	lis r4, 0x696C3031@ha
/* 8038D5F4 0038A534  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8038D5F8 0038A538  38 C4 30 31 */	addi r6, r4, 0x696C3031@l
/* 8038D5FC 0038A53C  38 A0 00 00 */	li r5, 0
/* 8038D600 0038A540  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D604 0038A544  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D608 0038A548  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038D60C 0038A54C  7D 89 03 A6 */	mtctr r12
/* 8038D610 0038A550  4E 80 04 21 */	bctrl 
/* 8038D614 0038A554  38 00 00 00 */	li r0, 0
/* 8038D618 0038A558  3C 80 69 72 */	lis r4, 0x69723031@ha
/* 8038D61C 0038A55C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8038D620 0038A560  38 C4 30 31 */	addi r6, r4, 0x69723031@l
/* 8038D624 0038A564  38 A0 00 00 */	li r5, 0
/* 8038D628 0038A568  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D62C 0038A56C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D630 0038A570  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038D634 0038A574  7D 89 03 A6 */	mtctr r12
/* 8038D638 0038A578  4E 80 04 21 */	bctrl 
/* 8038D63C 0038A57C  38 00 00 00 */	li r0, 0
/* 8038D640 0038A580  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8038D644 0038A584  38 60 00 1C */	li r3, 0x1c
/* 8038D648 0038A588  4B C9 68 5D */	bl __nw__FUl
/* 8038D64C 0038A58C  28 03 00 00 */	cmplwi r3, 0
/* 8038D650 0038A590  41 82 00 88 */	beq .L_8038D6D8
/* 8038D654 0038A594  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 8038D658 0038A598  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 8038D65C 0038A59C  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 8038D660 0038A5A0  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 8038D664 0038A5A4  90 03 00 00 */	stw r0, 0(r3)
/* 8038D668 0038A5A8  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 8038D66C 0038A5AC  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 8038D670 0038A5B0  3C 80 80 4E */	lis r4, __vt__Q25efx2d9TChasePos@ha
/* 8038D674 0038A5B4  90 03 00 00 */	stw r0, 0(r3)
/* 8038D678 0038A5B8  39 40 00 00 */	li r10, 0
/* 8038D67C 0038A5BC  39 25 74 20 */	addi r9, r5, __vt__Q25efx2d8TForever@l
/* 8038D680 0038A5C0  38 E4 73 CC */	addi r7, r4, __vt__Q25efx2d9TChasePos@l
/* 8038D684 0038A5C4  99 43 00 04 */	stb r10, 4(r3)
/* 8038D688 0038A5C8  3C 80 80 4E */	lis r4, __vt__Q25efx2d9T2DCursor@ha
/* 8038D68C 0038A5CC  38 84 76 48 */	addi r4, r4, __vt__Q25efx2d9T2DCursor@l
/* 8038D690 0038A5D0  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 8038D694 0038A5D4  99 43 00 05 */	stb r10, 5(r3)
/* 8038D698 0038A5D8  39 09 00 18 */	addi r8, r9, 0x18
/* 8038D69C 0038A5DC  38 C7 00 18 */	addi r6, r7, 0x18
/* 8038D6A0 0038A5E0  38 BE 00 68 */	addi r5, r30, 0x68
/* 8038D6A4 0038A5E4  90 03 00 08 */	stw r0, 8(r3)
/* 8038D6A8 0038A5E8  38 04 00 18 */	addi r0, r4, 0x18
/* 8038D6AC 0038A5EC  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 8038D6B0 0038A5F0  91 23 00 00 */	stw r9, 0(r3)
/* 8038D6B4 0038A5F4  91 03 00 08 */	stw r8, 8(r3)
/* 8038D6B8 0038A5F8  B1 43 00 0C */	sth r10, 0xc(r3)
/* 8038D6BC 0038A5FC  91 43 00 10 */	stw r10, 0x10(r3)
/* 8038D6C0 0038A600  90 E3 00 00 */	stw r7, 0(r3)
/* 8038D6C4 0038A604  90 C3 00 08 */	stw r6, 8(r3)
/* 8038D6C8 0038A608  90 A3 00 14 */	stw r5, 0x14(r3)
/* 8038D6CC 0038A60C  90 83 00 00 */	stw r4, 0(r3)
/* 8038D6D0 0038A610  90 03 00 08 */	stw r0, 8(r3)
/* 8038D6D4 0038A614  D0 03 00 18 */	stfs f0, 0x18(r3)
.L_8038D6D8:
/* 8038D6D8 0038A618  90 7E 00 5C */	stw r3, 0x5c(r30)
/* 8038D6DC 0038A61C  38 60 00 1C */	li r3, 0x1c
/* 8038D6E0 0038A620  4B C9 67 C5 */	bl __nw__FUl
/* 8038D6E4 0038A624  28 03 00 00 */	cmplwi r3, 0
/* 8038D6E8 0038A628  41 82 00 88 */	beq .L_8038D770
/* 8038D6EC 0038A62C  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 8038D6F0 0038A630  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 8038D6F4 0038A634  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 8038D6F8 0038A638  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 8038D6FC 0038A63C  90 03 00 00 */	stw r0, 0(r3)
/* 8038D700 0038A640  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 8038D704 0038A644  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 8038D708 0038A648  3C 80 80 4E */	lis r4, __vt__Q25efx2d9TChasePos@ha
/* 8038D70C 0038A64C  90 03 00 00 */	stw r0, 0(r3)
/* 8038D710 0038A650  39 40 00 00 */	li r10, 0
/* 8038D714 0038A654  39 25 74 20 */	addi r9, r5, __vt__Q25efx2d8TForever@l
/* 8038D718 0038A658  38 E4 73 CC */	addi r7, r4, __vt__Q25efx2d9TChasePos@l
/* 8038D71C 0038A65C  99 43 00 04 */	stb r10, 4(r3)
/* 8038D720 0038A660  3C 80 80 4E */	lis r4, __vt__Q25efx2d9T2DCursor@ha
/* 8038D724 0038A664  38 84 76 48 */	addi r4, r4, __vt__Q25efx2d9T2DCursor@l
/* 8038D728 0038A668  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 8038D72C 0038A66C  99 43 00 05 */	stb r10, 5(r3)
/* 8038D730 0038A670  39 09 00 18 */	addi r8, r9, 0x18
/* 8038D734 0038A674  38 C7 00 18 */	addi r6, r7, 0x18
/* 8038D738 0038A678  38 BE 00 60 */	addi r5, r30, 0x60
/* 8038D73C 0038A67C  90 03 00 08 */	stw r0, 8(r3)
/* 8038D740 0038A680  38 04 00 18 */	addi r0, r4, 0x18
/* 8038D744 0038A684  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 8038D748 0038A688  91 23 00 00 */	stw r9, 0(r3)
/* 8038D74C 0038A68C  91 03 00 08 */	stw r8, 8(r3)
/* 8038D750 0038A690  B1 43 00 0C */	sth r10, 0xc(r3)
/* 8038D754 0038A694  91 43 00 10 */	stw r10, 0x10(r3)
/* 8038D758 0038A698  90 E3 00 00 */	stw r7, 0(r3)
/* 8038D75C 0038A69C  90 C3 00 08 */	stw r6, 8(r3)
/* 8038D760 0038A6A0  90 A3 00 14 */	stw r5, 0x14(r3)
/* 8038D764 0038A6A4  90 83 00 00 */	stw r4, 0(r3)
/* 8038D768 0038A6A8  90 03 00 08 */	stw r0, 8(r3)
/* 8038D76C 0038A6AC  D0 03 00 18 */	stfs f0, 0x18(r3)
.L_8038D770:
/* 8038D770 0038A6B0  90 7E 00 58 */	stw r3, 0x58(r30)
/* 8038D774 0038A6B4  3C 60 75 5F */	lis r3, 0x755F3031@ha
/* 8038D778 0038A6B8  38 C3 30 31 */	addi r6, r3, 0x755F3031@l
/* 8038D77C 0038A6BC  38 A0 00 6E */	li r5, 0x6e
/* 8038D780 0038A6C0  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D784 0038A6C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D788 0038A6C8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038D78C 0038A6CC  7D 89 03 A6 */	mtctr r12
/* 8038D790 0038A6D0  4E 80 04 21 */	bctrl 
/* 8038D794 0038A6D4  90 7E 00 18 */	stw r3, 0x18(r30)
/* 8038D798 0038A6D8  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8038D79C 0038A6DC  28 00 00 00 */	cmplwi r0, 0
/* 8038D7A0 0038A6E0  40 82 00 18 */	bne .L_8038D7B8
/* 8038D7A4 0038A6E4  38 7F 00 14 */	addi r3, r31, 0x14
/* 8038D7A8 0038A6E8  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8038D7AC 0038A6EC  38 80 02 FC */	li r4, 0x2fc
/* 8038D7B0 0038A6F0  4C C6 31 82 */	crclr 6
/* 8038D7B4 0038A6F4  4B C9 CE 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038D7B8:
/* 8038D7B8 0038A6F8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D7BC 0038A6FC  3C 80 75 5F */	lis r4, 0x755F3032@ha
/* 8038D7C0 0038A700  38 C4 30 32 */	addi r6, r4, 0x755F3032@l
/* 8038D7C4 0038A704  38 A0 00 6E */	li r5, 0x6e
/* 8038D7C8 0038A708  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D7CC 0038A70C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038D7D0 0038A710  7D 89 03 A6 */	mtctr r12
/* 8038D7D4 0038A714  4E 80 04 21 */	bctrl 
/* 8038D7D8 0038A718  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 8038D7DC 0038A71C  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 8038D7E0 0038A720  28 00 00 00 */	cmplwi r0, 0
/* 8038D7E4 0038A724  40 82 00 18 */	bne .L_8038D7FC
/* 8038D7E8 0038A728  38 7F 00 14 */	addi r3, r31, 0x14
/* 8038D7EC 0038A72C  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8038D7F0 0038A730  38 80 02 FF */	li r4, 0x2ff
/* 8038D7F4 0038A734  4C C6 31 82 */	crclr 6
/* 8038D7F8 0038A738  4B C9 CE 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038D7FC:
/* 8038D7FC 0038A73C  3B 80 00 00 */	li r28, 0
/* 8038D800 0038A740  7F DD F3 78 */	mr r29, r30
.L_8038D804:
/* 8038D804 0038A744  38 60 00 1C */	li r3, 0x1c
/* 8038D808 0038A748  4B C9 66 9D */	bl __nw__FUl
/* 8038D80C 0038A74C  7C 60 1B 79 */	or. r0, r3, r3
/* 8038D810 0038A750  41 82 00 0C */	beq .L_8038D81C
/* 8038D814 0038A754  4B F9 B5 F1 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 8038D818 0038A758  7C 60 1B 78 */	mr r0, r3
.L_8038D81C:
/* 8038D81C 0038A75C  3B 9C 00 01 */	addi r28, r28, 1
/* 8038D820 0038A760  90 1D 00 3C */	stw r0, 0x3c(r29)
/* 8038D824 0038A764  2C 1C 00 02 */	cmpwi r28, 2
/* 8038D828 0038A768  3B BD 00 04 */	addi r29, r29, 4
/* 8038D82C 0038A76C  41 80 FF D8 */	blt .L_8038D804
/* 8038D830 0038A770  3C A0 6B 6F */	lis r5, 0x6B6F3030@ha
/* 8038D834 0038A774  3C 80 66 75 */	lis r4, 0x66757269@ha
/* 8038D838 0038A778  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D83C 0038A77C  38 C5 30 30 */	addi r6, r5, 0x6B6F3030@l
/* 8038D840 0038A780  38 A4 72 69 */	addi r5, r4, 0x66757269@l
/* 8038D844 0038A784  4B F9 CA 2D */	bl setCallBack_Furiko__Q22og6ScreenFPQ29P2DScreen3MgrUx
/* 8038D848 0038A788  90 7E 00 54 */	stw r3, 0x54(r30)
/* 8038D84C 0038A78C  80 1E 00 54 */	lwz r0, 0x54(r30)
/* 8038D850 0038A790  28 00 00 00 */	cmplwi r0, 0
/* 8038D854 0038A794  40 82 00 18 */	bne .L_8038D86C
/* 8038D858 0038A798  38 7F 00 14 */	addi r3, r31, 0x14
/* 8038D85C 0038A79C  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8038D860 0038A7A0  38 80 03 08 */	li r4, 0x308
/* 8038D864 0038A7A4  4C C6 31 82 */	crclr 6
/* 8038D868 0038A7A8  4B C9 CD D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038D86C:
/* 8038D86C 0038A7AC  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8038D870 0038A7B0  4B F9 C6 A9 */	bl stop__Q32og6Screen15CallBack_FurikoFv
/* 8038D874 0038A7B4  C8 7F 00 C8 */	lfd f3, 0xc8(r31)
/* 8038D878 0038A7B8  7F DC F3 78 */	mr r28, r30
/* 8038D87C 0038A7BC  C8 5F 00 D0 */	lfd f2, 0xd0(r31)
/* 8038D880 0038A7C0  3B A1 00 08 */	addi r29, r1, 8
/* 8038D884 0038A7C4  C8 3F 00 D8 */	lfd f1, 0xd8(r31)
/* 8038D888 0038A7C8  3B 60 00 00 */	li r27, 0
/* 8038D88C 0038A7CC  C8 1F 00 E0 */	lfd f0, 0xe0(r31)
/* 8038D890 0038A7D0  D8 61 00 08 */	stfd f3, 8(r1)
/* 8038D894 0038A7D4  D8 41 00 10 */	stfd f2, 0x10(r1)
/* 8038D898 0038A7D8  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 8038D89C 0038A7DC  D8 01 00 20 */	stfd f0, 0x20(r1)
.L_8038D8A0:
/* 8038D8A0 0038A7E0  2C 1B 00 00 */	cmpwi r27, 0
/* 8038D8A4 0038A7E4  40 82 00 20 */	bne .L_8038D8C4
/* 8038D8A8 0038A7E8  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8038D8AC 0038A7EC  80 9E 00 08 */	lwz r4, 8(r30)
/* 8038D8B0 0038A7F0  80 BD 00 00 */	lwz r5, 0(r29)
/* 8038D8B4 0038A7F4  80 DD 00 04 */	lwz r6, 4(r29)
/* 8038D8B8 0038A7F8  4B F7 B1 71 */	bl setMenuTitleScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8038D8BC 0038A7FC  90 7C 00 44 */	stw r3, 0x44(r28)
/* 8038D8C0 0038A800  48 00 00 40 */	b .L_8038D900
.L_8038D8C4:
/* 8038D8C4 0038A804  2C 1B 00 03 */	cmpwi r27, 3
/* 8038D8C8 0038A808  40 82 00 20 */	bne .L_8038D8E8
/* 8038D8CC 0038A80C  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8038D8D0 0038A810  80 9E 00 08 */	lwz r4, 8(r30)
/* 8038D8D4 0038A814  80 BD 00 00 */	lwz r5, 0(r29)
/* 8038D8D8 0038A818  80 DD 00 04 */	lwz r6, 4(r29)
/* 8038D8DC 0038A81C  4B F7 AE DD */	bl setAnimTextScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8038D8E0 0038A820  90 7C 00 44 */	stw r3, 0x44(r28)
/* 8038D8E4 0038A824  48 00 00 1C */	b .L_8038D900
.L_8038D8E8:
/* 8038D8E8 0038A828  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8038D8EC 0038A82C  80 9E 00 08 */	lwz r4, 8(r30)
/* 8038D8F0 0038A830  80 BD 00 00 */	lwz r5, 0(r29)
/* 8038D8F4 0038A834  80 DD 00 04 */	lwz r6, 4(r29)
/* 8038D8F8 0038A838  4B F7 AF F5 */	bl setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8038D8FC 0038A83C  90 7C 00 44 */	stw r3, 0x44(r28)
.L_8038D900:
/* 8038D900 0038A840  80 1C 00 44 */	lwz r0, 0x44(r28)
/* 8038D904 0038A844  28 00 00 00 */	cmplwi r0, 0
/* 8038D908 0038A848  40 82 00 18 */	bne .L_8038D920
/* 8038D90C 0038A84C  38 7F 00 14 */	addi r3, r31, 0x14
/* 8038D910 0038A850  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8038D914 0038A854  38 80 03 12 */	li r4, 0x312
/* 8038D918 0038A858  4C C6 31 82 */	crclr 6
/* 8038D91C 0038A85C  4B C9 CD 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038D920:
/* 8038D920 0038A860  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 8038D924 0038A864  4B F7 BB 19 */	bl stop__Q32og6Screen15AnimText_ScreenFv
/* 8038D928 0038A868  3B 7B 00 01 */	addi r27, r27, 1
/* 8038D92C 0038A86C  3B 9C 00 04 */	addi r28, r28, 4
/* 8038D930 0038A870  2C 1B 00 04 */	cmpwi r27, 4
/* 8038D934 0038A874  3B BD 00 08 */	addi r29, r29, 8
/* 8038D938 0038A878  41 80 FF 68 */	blt .L_8038D8A0
/* 8038D93C 0038A87C  C0 22 0C 90 */	lfs f1, lbl_8051EFF0@sda21(r2)
/* 8038D940 0038A880  3C 80 72 69 */	lis r4, 0x72696D61@ha
/* 8038D944 0038A884  C0 1E 00 88 */	lfs f0, 0x88(r30)
/* 8038D948 0038A888  3C 60 00 50 */	lis r3, 0x0050316F@ha
/* 8038D94C 0038A88C  80 FE 00 44 */	lwz r7, 0x44(r30)
/* 8038D950 0038A890  38 C4 6D 61 */	addi r6, r4, 0x72696D61@l
/* 8038D954 0038A894  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038D958 0038A898  38 A3 31 6F */	addi r5, r3, 0x0050316F@l
/* 8038D95C 0038A89C  D0 07 00 6C */	stfs f0, 0x6c(r7)
/* 8038D960 0038A8A0  C0 1E 00 88 */	lfs f0, 0x88(r30)
/* 8038D964 0038A8A4  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8038D968 0038A8A8  D0 03 00 6C */	stfs f0, 0x6c(r3)
/* 8038D96C 0038A8AC  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D970 0038A8B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D974 0038A8B4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038D978 0038A8B8  7D 89 03 A6 */	mtctr r12
/* 8038D97C 0038A8BC  4E 80 04 21 */	bctrl 
/* 8038D980 0038A8C0  90 7E 00 24 */	stw r3, 0x24(r30)
/* 8038D984 0038A8C4  80 1E 00 24 */	lwz r0, 0x24(r30)
/* 8038D988 0038A8C8  28 00 00 00 */	cmplwi r0, 0
/* 8038D98C 0038A8CC  40 82 00 18 */	bne .L_8038D9A4
/* 8038D990 0038A8D0  38 7F 00 14 */	addi r3, r31, 0x14
/* 8038D994 0038A8D4  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8038D998 0038A8D8  38 80 03 1B */	li r4, 0x31b
/* 8038D99C 0038A8DC  4C C6 31 82 */	crclr 6
/* 8038D9A0 0038A8E0  4B C9 CC A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038D9A4:
/* 8038D9A4 0038A8E4  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D9A8 0038A8E8  3C A0 72 69 */	lis r5, 0x72695F6C@ha
/* 8038D9AC 0038A8EC  3C 80 00 50 */	lis r4, 0x0050316F@ha
/* 8038D9B0 0038A8F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D9B4 0038A8F4  38 C5 5F 6C */	addi r6, r5, 0x72695F6C@l
/* 8038D9B8 0038A8F8  38 A4 31 6F */	addi r5, r4, 0x0050316F@l
/* 8038D9BC 0038A8FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038D9C0 0038A900  7D 89 03 A6 */	mtctr r12
/* 8038D9C4 0038A904  4E 80 04 21 */	bctrl 
/* 8038D9C8 0038A908  90 7E 00 30 */	stw r3, 0x30(r30)
/* 8038D9CC 0038A90C  80 1E 00 30 */	lwz r0, 0x30(r30)
/* 8038D9D0 0038A910  28 00 00 00 */	cmplwi r0, 0
/* 8038D9D4 0038A914  40 82 00 18 */	bne .L_8038D9EC
/* 8038D9D8 0038A918  38 7F 00 14 */	addi r3, r31, 0x14
/* 8038D9DC 0038A91C  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8038D9E0 0038A920  38 80 03 1D */	li r4, 0x31d
/* 8038D9E4 0038A924  4C C6 31 82 */	crclr 6
/* 8038D9E8 0038A928  4B C9 CC 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038D9EC:
/* 8038D9EC 0038A92C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038D9F0 0038A930  3C A0 72 69 */	lis r5, 0x72696D61@ha
/* 8038D9F4 0038A934  3C 80 00 50 */	lis r4, 0x0050326F@ha
/* 8038D9F8 0038A938  81 83 00 00 */	lwz r12, 0(r3)
/* 8038D9FC 0038A93C  38 C5 6D 61 */	addi r6, r5, 0x72696D61@l
/* 8038DA00 0038A940  38 A4 32 6F */	addi r5, r4, 0x0050326F@l
/* 8038DA04 0038A944  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038DA08 0038A948  7D 89 03 A6 */	mtctr r12
/* 8038DA0C 0038A94C  4E 80 04 21 */	bctrl 
/* 8038DA10 0038A950  90 7E 00 28 */	stw r3, 0x28(r30)
/* 8038DA14 0038A954  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 8038DA18 0038A958  28 00 00 00 */	cmplwi r0, 0
/* 8038DA1C 0038A95C  40 82 00 18 */	bne .L_8038DA34
/* 8038DA20 0038A960  38 7F 00 14 */	addi r3, r31, 0x14
/* 8038DA24 0038A964  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8038DA28 0038A968  38 80 03 20 */	li r4, 0x320
/* 8038DA2C 0038A96C  4C C6 31 82 */	crclr 6
/* 8038DA30 0038A970  4B C9 CC 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038DA34:
/* 8038DA34 0038A974  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038DA38 0038A978  3C A0 72 69 */	lis r5, 0x72695F6C@ha
/* 8038DA3C 0038A97C  3C 80 00 50 */	lis r4, 0x0050326F@ha
/* 8038DA40 0038A980  81 83 00 00 */	lwz r12, 0(r3)
/* 8038DA44 0038A984  38 C5 5F 6C */	addi r6, r5, 0x72695F6C@l
/* 8038DA48 0038A988  38 A4 32 6F */	addi r5, r4, 0x0050326F@l
/* 8038DA4C 0038A98C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038DA50 0038A990  7D 89 03 A6 */	mtctr r12
/* 8038DA54 0038A994  4E 80 04 21 */	bctrl 
/* 8038DA58 0038A998  90 7E 00 34 */	stw r3, 0x34(r30)
/* 8038DA5C 0038A99C  80 1E 00 34 */	lwz r0, 0x34(r30)
/* 8038DA60 0038A9A0  28 00 00 00 */	cmplwi r0, 0
/* 8038DA64 0038A9A4  40 82 00 18 */	bne .L_8038DA7C
/* 8038DA68 0038A9A8  38 7F 00 14 */	addi r3, r31, 0x14
/* 8038DA6C 0038A9AC  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8038DA70 0038A9B0  38 80 03 22 */	li r4, 0x322
/* 8038DA74 0038A9B4  4C C6 31 82 */	crclr 6
/* 8038DA78 0038A9B8  4B C9 CB C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038DA7C:
/* 8038DA7C 0038A9BC  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038DA80 0038A9C0  3C 80 50 6C */	lis r4, 0x506C7569@ha
/* 8038DA84 0038A9C4  38 C4 75 69 */	addi r6, r4, 0x506C7569@l
/* 8038DA88 0038A9C8  38 A0 00 00 */	li r5, 0
/* 8038DA8C 0038A9CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8038DA90 0038A9D0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038DA94 0038A9D4  7D 89 03 A6 */	mtctr r12
/* 8038DA98 0038A9D8  4E 80 04 21 */	bctrl 
/* 8038DA9C 0038A9DC  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 8038DAA0 0038A9E0  80 1E 00 2C */	lwz r0, 0x2c(r30)
/* 8038DAA4 0038A9E4  28 00 00 00 */	cmplwi r0, 0
/* 8038DAA8 0038A9E8  40 82 00 18 */	bne .L_8038DAC0
/* 8038DAAC 0038A9EC  38 7F 00 14 */	addi r3, r31, 0x14
/* 8038DAB0 0038A9F0  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8038DAB4 0038A9F4  38 80 03 26 */	li r4, 0x326
/* 8038DAB8 0038A9F8  4C C6 31 82 */	crclr 6
/* 8038DABC 0038A9FC  4B C9 CB 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038DAC0:
/* 8038DAC0 0038AA00  80 7E 00 08 */	lwz r3, 8(r30)
/* 8038DAC4 0038AA04  3C A0 75 69 */	lis r5, 0x75695F6C@ha
/* 8038DAC8 0038AA08  3C 80 00 50 */	lis r4, 0x0050326C@ha
/* 8038DACC 0038AA0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038DAD0 0038AA10  38 C5 5F 6C */	addi r6, r5, 0x75695F6C@l
/* 8038DAD4 0038AA14  38 A4 32 6C */	addi r5, r4, 0x0050326C@l
/* 8038DAD8 0038AA18  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038DADC 0038AA1C  7D 89 03 A6 */	mtctr r12
/* 8038DAE0 0038AA20  4E 80 04 21 */	bctrl 
/* 8038DAE4 0038AA24  90 7E 00 38 */	stw r3, 0x38(r30)
/* 8038DAE8 0038AA28  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 8038DAEC 0038AA2C  28 00 00 00 */	cmplwi r0, 0
/* 8038DAF0 0038AA30  40 82 00 18 */	bne .L_8038DB08
/* 8038DAF4 0038AA34  38 7F 00 14 */	addi r3, r31, 0x14
/* 8038DAF8 0038AA38  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8038DAFC 0038AA3C  38 80 03 28 */	li r4, 0x328
/* 8038DB00 0038AA40  4C C6 31 82 */	crclr 6
/* 8038DB04 0038AA44  4B C9 CB 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038DB08:
/* 8038DB08 0038AA48  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 8038DB0C 0038AA4C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8038DB10 0038AA50  7C 08 03 A6 */	mtlr r0
/* 8038DB14 0038AA54  38 21 00 40 */	addi r1, r1, 0x40
/* 8038DB18 0038AA58  4E 80 00 20 */	blr 
.endfn create__Q28Morimura24TChallengePlayModeScreenFPCcUl

.fn update__Q28Morimura24TChallengePlayModeScreenFv, global
/* 8038DB1C 0038AA5C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8038DB20 0038AA60  7C 08 02 A6 */	mflr r0
/* 8038DB24 0038AA64  90 01 00 54 */	stw r0, 0x54(r1)
/* 8038DB28 0038AA68  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8038DB2C 0038AA6C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8038DB30 0038AA70  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8038DB34 0038AA74  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8038DB38 0038AA78  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8038DB3C 0038AA7C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8038DB40 0038AA80  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8038DB44 0038AA84  7C 7F 1B 78 */	mr r31, r3
/* 8038DB48 0038AA88  3C 80 69 6C */	lis r4, 0x696C3030@ha
/* 8038DB4C 0038AA8C  80 63 00 08 */	lwz r3, 8(r3)
/* 8038DB50 0038AA90  38 C4 30 30 */	addi r6, r4, 0x696C3030@l
/* 8038DB54 0038AA94  38 A0 00 00 */	li r5, 0
/* 8038DB58 0038AA98  81 83 00 00 */	lwz r12, 0(r3)
/* 8038DB5C 0038AA9C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038DB60 0038AAA0  7D 89 03 A6 */	mtctr r12
/* 8038DB64 0038AAA4  4E 80 04 21 */	bctrl 
/* 8038DB68 0038AAA8  C0 03 00 8C */	lfs f0, 0x8c(r3)
/* 8038DB6C 0038AAAC  3C 60 69 72 */	lis r3, 0x69723030@ha
/* 8038DB70 0038AAB0  38 C3 30 30 */	addi r6, r3, 0x69723030@l
/* 8038DB74 0038AAB4  38 A0 00 00 */	li r5, 0
/* 8038DB78 0038AAB8  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 8038DB7C 0038AABC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038DB80 0038AAC0  81 83 00 00 */	lwz r12, 0(r3)
/* 8038DB84 0038AAC4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038DB88 0038AAC8  7D 89 03 A6 */	mtctr r12
/* 8038DB8C 0038AACC  4E 80 04 21 */	bctrl 
/* 8038DB90 0038AAD0  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 8038DB94 0038AAD4  3C 60 69 72 */	lis r3, 0x69723030@ha
/* 8038DB98 0038AAD8  38 C3 30 30 */	addi r6, r3, 0x69723030@l
/* 8038DB9C 0038AADC  38 A0 00 00 */	li r5, 0
/* 8038DBA0 0038AAE0  D0 1F 00 74 */	stfs f0, 0x74(r31)
/* 8038DBA4 0038AAE4  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038DBA8 0038AAE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8038DBAC 0038AAEC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038DBB0 0038AAF0  7D 89 03 A6 */	mtctr r12
/* 8038DBB4 0038AAF4  4E 80 04 21 */	bctrl 
/* 8038DBB8 0038AAF8  C0 03 00 8C */	lfs f0, 0x8c(r3)
/* 8038DBBC 0038AAFC  3C 60 69 72 */	lis r3, 0x69723031@ha
/* 8038DBC0 0038AB00  38 C3 30 31 */	addi r6, r3, 0x69723031@l
/* 8038DBC4 0038AB04  38 A0 00 00 */	li r5, 0
/* 8038DBC8 0038AB08  D0 1F 00 78 */	stfs f0, 0x78(r31)
/* 8038DBCC 0038AB0C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038DBD0 0038AB10  81 83 00 00 */	lwz r12, 0(r3)
/* 8038DBD4 0038AB14  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038DBD8 0038AB18  7D 89 03 A6 */	mtctr r12
/* 8038DBDC 0038AB1C  4E 80 04 21 */	bctrl 
/* 8038DBE0 0038AB20  C0 23 00 9C */	lfs f1, 0x9c(r3)
/* 8038DBE4 0038AB24  C0 02 0C 6C */	lfs f0, lbl_8051EFCC@sda21(r2)
/* 8038DBE8 0038AB28  D0 3F 00 7C */	stfs f1, 0x7c(r31)
/* 8038DBEC 0038AB2C  C0 5F 00 70 */	lfs f2, 0x70(r31)
/* 8038DBF0 0038AB30  C0 3F 00 60 */	lfs f1, 0x60(r31)
/* 8038DBF4 0038AB34  EC 62 08 28 */	fsubs f3, f2, f1
/* 8038DBF8 0038AB38  FC 20 1A 10 */	fabs f1, f3
/* 8038DBFC 0038AB3C  FC 20 08 18 */	frsp f1, f1
/* 8038DC00 0038AB40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DC04 0038AB44  40 80 00 10 */	bge .L_8038DC14
/* 8038DC08 0038AB48  D0 5F 00 60 */	stfs f2, 0x60(r31)
/* 8038DC0C 0038AB4C  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 8038DC10 0038AB50  48 00 00 0C */	b .L_8038DC1C
.L_8038DC14:
/* 8038DC14 0038AB54  C0 02 0C 84 */	lfs f0, lbl_8051EFE4@sda21(r2)
/* 8038DC18 0038AB58  EC 43 00 32 */	fmuls f2, f3, f0
.L_8038DC1C:
/* 8038DC1C 0038AB5C  C0 3F 00 60 */	lfs f1, 0x60(r31)
/* 8038DC20 0038AB60  C0 02 0C 6C */	lfs f0, lbl_8051EFCC@sda21(r2)
/* 8038DC24 0038AB64  EC 21 10 2A */	fadds f1, f1, f2
/* 8038DC28 0038AB68  D0 3F 00 60 */	stfs f1, 0x60(r31)
/* 8038DC2C 0038AB6C  C0 5F 00 78 */	lfs f2, 0x78(r31)
/* 8038DC30 0038AB70  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 8038DC34 0038AB74  EC 62 08 28 */	fsubs f3, f2, f1
/* 8038DC38 0038AB78  FC 20 1A 10 */	fabs f1, f3
/* 8038DC3C 0038AB7C  FC 20 08 18 */	frsp f1, f1
/* 8038DC40 0038AB80  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DC44 0038AB84  40 80 00 10 */	bge .L_8038DC54
/* 8038DC48 0038AB88  D0 5F 00 68 */	stfs f2, 0x68(r31)
/* 8038DC4C 0038AB8C  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 8038DC50 0038AB90  48 00 00 0C */	b .L_8038DC5C
.L_8038DC54:
/* 8038DC54 0038AB94  C0 02 0C 84 */	lfs f0, lbl_8051EFE4@sda21(r2)
/* 8038DC58 0038AB98  EC 23 00 32 */	fmuls f1, f3, f0
.L_8038DC5C:
/* 8038DC5C 0038AB9C  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 8038DC60 0038ABA0  EC 00 08 2A */	fadds f0, f0, f1
/* 8038DC64 0038ABA4  D0 1F 00 68 */	stfs f0, 0x68(r31)
/* 8038DC68 0038ABA8  88 0D 85 C8 */	lbz r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038DC6C 0038ABAC  28 00 00 00 */	cmplwi r0, 0
/* 8038DC70 0038ABB0  41 82 00 98 */	beq .L_8038DD08
/* 8038DC74 0038ABB4  C0 5F 00 98 */	lfs f2, 0x98(r31)
/* 8038DC78 0038ABB8  C0 22 0C 34 */	lfs f1, lbl_8051EF94@sda21(r2)
/* 8038DC7C 0038ABBC  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 8038DC80 0038ABC0  EC 22 08 2A */	fadds f1, f2, f1
/* 8038DC84 0038ABC4  D0 3F 00 98 */	stfs f1, 0x98(r31)
/* 8038DC88 0038ABC8  C0 3F 00 98 */	lfs f1, 0x98(r31)
/* 8038DC8C 0038ABCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DC90 0038ABD0  40 81 00 08 */	ble .L_8038DC98
/* 8038DC94 0038ABD4  D0 1F 00 98 */	stfs f0, 0x98(r31)
.L_8038DC98:
/* 8038DC98 0038ABD8  C0 5F 00 9C */	lfs f2, 0x9c(r31)
/* 8038DC9C 0038ABDC  C0 22 0C 34 */	lfs f1, lbl_8051EF94@sda21(r2)
/* 8038DCA0 0038ABE0  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038DCA4 0038ABE4  EC 22 08 28 */	fsubs f1, f2, f1
/* 8038DCA8 0038ABE8  D0 3F 00 9C */	stfs f1, 0x9c(r31)
/* 8038DCAC 0038ABEC  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 8038DCB0 0038ABF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DCB4 0038ABF4  40 80 00 08 */	bge .L_8038DCBC
/* 8038DCB8 0038ABF8  D0 1F 00 9C */	stfs f0, 0x9c(r31)
.L_8038DCBC:
/* 8038DCBC 0038ABFC  C0 5F 00 74 */	lfs f2, 0x74(r31)
/* 8038DCC0 0038AC00  C0 3F 00 6C */	lfs f1, 0x6c(r31)
/* 8038DCC4 0038AC04  C0 02 0C 6C */	lfs f0, lbl_8051EFCC@sda21(r2)
/* 8038DCC8 0038AC08  EC 62 08 28 */	fsubs f3, f2, f1
/* 8038DCCC 0038AC0C  FC 20 1A 10 */	fabs f1, f3
/* 8038DCD0 0038AC10  FC 20 08 18 */	frsp f1, f1
/* 8038DCD4 0038AC14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DCD8 0038AC18  40 80 00 10 */	bge .L_8038DCE8
/* 8038DCDC 0038AC1C  D0 5F 00 6C */	stfs f2, 0x6c(r31)
/* 8038DCE0 0038AC20  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 8038DCE4 0038AC24  48 00 00 0C */	b .L_8038DCF0
.L_8038DCE8:
/* 8038DCE8 0038AC28  C0 02 0C 84 */	lfs f0, lbl_8051EFE4@sda21(r2)
/* 8038DCEC 0038AC2C  EC 23 00 32 */	fmuls f1, f3, f0
.L_8038DCF0:
/* 8038DCF0 0038AC30  C0 1F 00 6C */	lfs f0, 0x6c(r31)
/* 8038DCF4 0038AC34  EC 00 08 2A */	fadds f0, f0, f1
/* 8038DCF8 0038AC38  D0 1F 00 6C */	stfs f0, 0x6c(r31)
/* 8038DCFC 0038AC3C  C0 1F 00 6C */	lfs f0, 0x6c(r31)
/* 8038DD00 0038AC40  D0 1F 00 64 */	stfs f0, 0x64(r31)
/* 8038DD04 0038AC44  48 00 00 C8 */	b .L_8038DDCC
.L_8038DD08:
/* 8038DD08 0038AC48  88 0D 85 D8 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038DD0C 0038AC4C  28 00 00 00 */	cmplwi r0, 0
/* 8038DD10 0038AC50  41 82 00 2C */	beq .L_8038DD3C
/* 8038DD14 0038AC54  C0 5F 00 9C */	lfs f2, 0x9c(r31)
/* 8038DD18 0038AC58  C0 22 0C 34 */	lfs f1, lbl_8051EF94@sda21(r2)
/* 8038DD1C 0038AC5C  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 8038DD20 0038AC60  EC 22 08 2A */	fadds f1, f2, f1
/* 8038DD24 0038AC64  D0 3F 00 9C */	stfs f1, 0x9c(r31)
/* 8038DD28 0038AC68  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 8038DD2C 0038AC6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DD30 0038AC70  40 81 00 30 */	ble .L_8038DD60
/* 8038DD34 0038AC74  D0 1F 00 9C */	stfs f0, 0x9c(r31)
/* 8038DD38 0038AC78  48 00 00 28 */	b .L_8038DD60
.L_8038DD3C:
/* 8038DD3C 0038AC7C  C0 5F 00 9C */	lfs f2, 0x9c(r31)
/* 8038DD40 0038AC80  C0 22 0C 34 */	lfs f1, lbl_8051EF94@sda21(r2)
/* 8038DD44 0038AC84  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038DD48 0038AC88  EC 22 08 28 */	fsubs f1, f2, f1
/* 8038DD4C 0038AC8C  D0 3F 00 9C */	stfs f1, 0x9c(r31)
/* 8038DD50 0038AC90  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 8038DD54 0038AC94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DD58 0038AC98  40 80 00 08 */	bge .L_8038DD60
/* 8038DD5C 0038AC9C  D0 1F 00 9C */	stfs f0, 0x9c(r31)
.L_8038DD60:
/* 8038DD60 0038ACA0  C0 5F 00 98 */	lfs f2, 0x98(r31)
/* 8038DD64 0038ACA4  C0 22 0C 34 */	lfs f1, lbl_8051EF94@sda21(r2)
/* 8038DD68 0038ACA8  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038DD6C 0038ACAC  EC 22 08 28 */	fsubs f1, f2, f1
/* 8038DD70 0038ACB0  D0 3F 00 98 */	stfs f1, 0x98(r31)
/* 8038DD74 0038ACB4  C0 3F 00 98 */	lfs f1, 0x98(r31)
/* 8038DD78 0038ACB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DD7C 0038ACBC  40 80 00 08 */	bge .L_8038DD84
/* 8038DD80 0038ACC0  D0 1F 00 98 */	stfs f0, 0x98(r31)
.L_8038DD84:
/* 8038DD84 0038ACC4  C0 5F 00 7C */	lfs f2, 0x7c(r31)
/* 8038DD88 0038ACC8  C0 3F 00 6C */	lfs f1, 0x6c(r31)
/* 8038DD8C 0038ACCC  C0 02 0C 6C */	lfs f0, lbl_8051EFCC@sda21(r2)
/* 8038DD90 0038ACD0  EC 62 08 28 */	fsubs f3, f2, f1
/* 8038DD94 0038ACD4  FC 20 1A 10 */	fabs f1, f3
/* 8038DD98 0038ACD8  FC 20 08 18 */	frsp f1, f1
/* 8038DD9C 0038ACDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DDA0 0038ACE0  40 80 00 10 */	bge .L_8038DDB0
/* 8038DDA4 0038ACE4  D0 5F 00 6C */	stfs f2, 0x6c(r31)
/* 8038DDA8 0038ACE8  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 8038DDAC 0038ACEC  48 00 00 0C */	b .L_8038DDB8
.L_8038DDB0:
/* 8038DDB0 0038ACF0  C0 02 0C 84 */	lfs f0, lbl_8051EFE4@sda21(r2)
/* 8038DDB4 0038ACF4  EC 23 00 32 */	fmuls f1, f3, f0
.L_8038DDB8:
/* 8038DDB8 0038ACF8  C0 1F 00 6C */	lfs f0, 0x6c(r31)
/* 8038DDBC 0038ACFC  EC 00 08 2A */	fadds f0, f0, f1
/* 8038DDC0 0038AD00  D0 1F 00 6C */	stfs f0, 0x6c(r31)
/* 8038DDC4 0038AD04  C0 1F 00 6C */	lfs f0, 0x6c(r31)
/* 8038DDC8 0038AD08  D0 1F 00 64 */	stfs f0, 0x64(r31)
.L_8038DDCC:
/* 8038DDCC 0038AD0C  C3 E2 0C 90 */	lfs f31, lbl_8051EFF0@sda21(r2)
/* 8038DDD0 0038AD10  7F FE FB 78 */	mr r30, r31
/* 8038DDD4 0038AD14  C3 C2 0C D4 */	lfs f30, lbl_8051F034@sda21(r2)
/* 8038DDD8 0038AD18  3B A0 00 00 */	li r29, 0
.L_8038DDDC:
/* 8038DDDC 0038AD1C  2C 1D 00 00 */	cmpwi r29, 0
/* 8038DDE0 0038AD20  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038DDE4 0038AD24  40 82 00 0C */	bne .L_8038DDF0
/* 8038DDE8 0038AD28  C0 7F 00 98 */	lfs f3, 0x98(r31)
/* 8038DDEC 0038AD2C  48 00 00 08 */	b .L_8038DDF4
.L_8038DDF0:
/* 8038DDF0 0038AD30  C0 7F 00 9C */	lfs f3, 0x9c(r31)
.L_8038DDF4:
/* 8038DDF4 0038AD34  FC 1F 18 00 */	fcmpu cr0, f31, f3
/* 8038DDF8 0038AD38  40 82 00 9C */	bne .L_8038DE94
/* 8038DDFC 0038AD3C  C0 5E 00 A0 */	lfs f2, 0xa0(r30)
/* 8038DE00 0038AD40  C0 22 0C A8 */	lfs f1, lbl_8051F008@sda21(r2)
/* 8038DE04 0038AD44  C0 02 0C 5C */	lfs f0, lbl_8051EFBC@sda21(r2)
/* 8038DE08 0038AD48  EC 22 08 2A */	fadds f1, f2, f1
/* 8038DE0C 0038AD4C  D0 3E 00 A0 */	stfs f1, 0xa0(r30)
/* 8038DE10 0038AD50  C0 3E 00 A0 */	lfs f1, 0xa0(r30)
/* 8038DE14 0038AD54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DE18 0038AD58  40 81 00 0C */	ble .L_8038DE24
/* 8038DE1C 0038AD5C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038DE20 0038AD60  D0 1E 00 A0 */	stfs f0, 0xa0(r30)
.L_8038DE24:
/* 8038DE24 0038AD64  C0 5E 00 A0 */	lfs f2, 0xa0(r30)
/* 8038DE28 0038AD68  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038DE2C 0038AD6C  C0 22 0C D0 */	lfs f1, lbl_8051F030@sda21(r2)
/* 8038DE30 0038AD70  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8038DE34 0038AD74  40 80 00 30 */	bge .L_8038DE64
/* 8038DE38 0038AD78  C0 02 0C 64 */	lfs f0, lbl_8051EFC4@sda21(r2)
/* 8038DE3C 0038AD7C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038DE40 0038AD80  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038DE44 0038AD84  EC 02 00 32 */	fmuls f0, f2, f0
/* 8038DE48 0038AD88  FC 00 00 1E */	fctiwz f0, f0
/* 8038DE4C 0038AD8C  D8 01 00 08 */	stfd f0, 8(r1)
/* 8038DE50 0038AD90  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8038DE54 0038AD94  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038DE58 0038AD98  7C 03 04 2E */	lfsx f0, r3, r0
/* 8038DE5C 0038AD9C  FC 00 00 50 */	fneg f0, f0
/* 8038DE60 0038ADA0  48 00 00 28 */	b .L_8038DE88
.L_8038DE64:
/* 8038DE64 0038ADA4  C0 02 0C 68 */	lfs f0, lbl_8051EFC8@sda21(r2)
/* 8038DE68 0038ADA8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8038DE6C 0038ADAC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8038DE70 0038ADB0  EC 02 00 32 */	fmuls f0, f2, f0
/* 8038DE74 0038ADB4  FC 00 00 1E */	fctiwz f0, f0
/* 8038DE78 0038ADB8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8038DE7C 0038ADBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038DE80 0038ADC0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8038DE84 0038ADC4  7C 03 04 2E */	lfsx f0, r3, r0
.L_8038DE88:
/* 8038DE88 0038ADC8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038DE8C 0038ADCC  FC 00 02 10 */	fabs f0, f0
/* 8038DE90 0038ADD0  FC 00 00 18 */	frsp f0, f0
.L_8038DE94:
/* 8038DE94 0038ADD4  EC 1E 00 F8 */	fmsubs f0, f30, f3, f0
/* 8038DE98 0038ADD8  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8038DE9C 0038ADDC  81 83 00 00 */	lwz r12, 0(r3)
/* 8038DEA0 0038ADE0  FC 00 00 1E */	fctiwz f0, f0
/* 8038DEA4 0038ADE4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038DEA8 0038ADE8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8038DEAC 0038ADEC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8038DEB0 0038ADF0  7D 89 03 A6 */	mtctr r12
/* 8038DEB4 0038ADF4  4E 80 04 21 */	bctrl 
/* 8038DEB8 0038ADF8  3B BD 00 01 */	addi r29, r29, 1
/* 8038DEBC 0038ADFC  3B DE 00 04 */	addi r30, r30, 4
/* 8038DEC0 0038AE00  2C 1D 00 03 */	cmpwi r29, 3
/* 8038DEC4 0038AE04  41 80 FF 18 */	blt .L_8038DDDC
/* 8038DEC8 0038AE08  80 1F 00 80 */	lwz r0, 0x80(r31)
/* 8038DECC 0038AE0C  2C 00 00 00 */	cmpwi r0, 0
/* 8038DED0 0038AE10  40 82 00 24 */	bne .L_8038DEF4
/* 8038DED4 0038AE14  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8038DED8 0038AE18  4B F9 C0 41 */	bl stop__Q32og6Screen15CallBack_FurikoFv
/* 8038DEDC 0038AE1C  C0 22 0C D8 */	lfs f1, lbl_8051F038@sda21(r2)
/* 8038DEE0 0038AE20  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038DEE4 0038AE24  D0 3F 00 94 */	stfs f1, 0x94(r31)
/* 8038DEE8 0038AE28  D0 1F 00 8C */	stfs f0, 0x8c(r31)
/* 8038DEEC 0038AE2C  D0 1F 00 90 */	stfs f0, 0x90(r31)
/* 8038DEF0 0038AE30  48 00 03 FC */	b .L_8038E2EC
.L_8038DEF4:
/* 8038DEF4 0038AE34  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038DEF8 0038AE38  28 03 00 00 */	cmplwi r3, 0
/* 8038DEFC 0038AE3C  41 82 03 F0 */	beq .L_8038E2EC
/* 8038DF00 0038AE40  81 83 00 00 */	lwz r12, 0(r3)
/* 8038DF04 0038AE44  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8038DF08 0038AE48  7D 89 03 A6 */	mtctr r12
/* 8038DF0C 0038AE4C  4E 80 04 21 */	bctrl 
/* 8038DF10 0038AE50  3B A0 00 00 */	li r29, 0
/* 8038DF14 0038AE54  3B C0 00 00 */	li r30, 0
/* 8038DF18 0038AE58  48 00 00 18 */	b .L_8038DF30
.L_8038DF1C:
/* 8038DF1C 0038AE5C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8038DF20 0038AE60  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8038DF24 0038AE64  4B F7 6E ED */	bl update__Q32og6Screen12AnimBaseBaseFv
/* 8038DF28 0038AE68  3B DE 00 04 */	addi r30, r30, 4
/* 8038DF2C 0038AE6C  3B BD 00 01 */	addi r29, r29, 1
.L_8038DF30:
/* 8038DF30 0038AE70  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8038DF34 0038AE74  7C 1D 00 00 */	cmpw r29, r0
/* 8038DF38 0038AE78  41 80 FF E4 */	blt .L_8038DF1C
/* 8038DF3C 0038AE7C  80 1F 00 80 */	lwz r0, 0x80(r31)
/* 8038DF40 0038AE80  2C 00 00 02 */	cmpwi r0, 2
/* 8038DF44 0038AE84  41 82 02 64 */	beq .L_8038E1A8
/* 8038DF48 0038AE88  40 80 00 14 */	bge .L_8038DF5C
/* 8038DF4C 0038AE8C  2C 00 00 00 */	cmpwi r0, 0
/* 8038DF50 0038AE90  41 82 02 58 */	beq .L_8038E1A8
/* 8038DF54 0038AE94  40 80 00 14 */	bge .L_8038DF68
/* 8038DF58 0038AE98  48 00 02 50 */	b .L_8038E1A8
.L_8038DF5C:
/* 8038DF5C 0038AE9C  2C 00 00 04 */	cmpwi r0, 4
/* 8038DF60 0038AEA0  40 80 02 48 */	bge .L_8038E1A8
/* 8038DF64 0038AEA4  48 00 01 FC */	b .L_8038E160
.L_8038DF68:
/* 8038DF68 0038AEA8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8038DF6C 0038AEAC  C0 3F 00 8C */	lfs f1, 0x8c(r31)
/* 8038DF70 0038AEB0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8038DF74 0038AEB4  C0 42 0C 84 */	lfs f2, lbl_8051EFE4@sda21(r2)
/* 8038DF78 0038AEB8  EC 01 00 2A */	fadds f0, f1, f0
/* 8038DF7C 0038AEBC  D0 1F 00 8C */	stfs f0, 0x8c(r31)
/* 8038DF80 0038AEC0  C0 3F 00 8C */	lfs f1, 0x8c(r31)
/* 8038DF84 0038AEC4  4B F7 47 19 */	bl calcSmooth0to1__Q22og6ScreenFff
/* 8038DF88 0038AEC8  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 8038DF8C 0038AECC  C0 42 0C CC */	lfs f2, lbl_8051F02C@sda21(r2)
/* 8038DF90 0038AED0  EC 20 08 28 */	fsubs f1, f0, f1
/* 8038DF94 0038AED4  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038DF98 0038AED8  EC 22 00 72 */	fmuls f1, f2, f1
/* 8038DF9C 0038AEDC  D0 3F 00 94 */	stfs f1, 0x94(r31)
/* 8038DFA0 0038AEE0  C0 3F 00 94 */	lfs f1, 0x94(r31)
/* 8038DFA4 0038AEE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DFA8 0038AEE8  4C 40 13 82 */	cror 2, 0, 2
/* 8038DFAC 0038AEEC  40 82 01 FC */	bne .L_8038E1A8
/* 8038DFB0 0038AEF0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8038DFB4 0038AEF4  C0 5F 00 90 */	lfs f2, 0x90(r31)
/* 8038DFB8 0038AEF8  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8038DFBC 0038AEFC  C0 02 0C 3C */	lfs f0, lbl_8051EF9C@sda21(r2)
/* 8038DFC0 0038AF00  EC 22 08 2A */	fadds f1, f2, f1
/* 8038DFC4 0038AF04  D0 3F 00 90 */	stfs f1, 0x90(r31)
/* 8038DFC8 0038AF08  C0 3F 00 90 */	lfs f1, 0x90(r31)
/* 8038DFCC 0038AF0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038DFD0 0038AF10  40 81 01 D8 */	ble .L_8038E1A8
/* 8038DFD4 0038AF14  38 00 00 02 */	li r0, 2
/* 8038DFD8 0038AF18  90 1F 00 80 */	stw r0, 0x80(r31)
/* 8038DFDC 0038AF1C  88 0D 85 C8 */	lbz r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038DFE0 0038AF20  28 00 00 00 */	cmplwi r0, 0
/* 8038DFE4 0038AF24  41 82 00 A8 */	beq .L_8038E08C
/* 8038DFE8 0038AF28  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038DFEC 0038AF2C  3C 80 69 72 */	lis r4, 0x69723030@ha
/* 8038DFF0 0038AF30  38 C4 30 30 */	addi r6, r4, 0x69723030@l
/* 8038DFF4 0038AF34  38 A0 00 00 */	li r5, 0
/* 8038DFF8 0038AF38  81 83 00 00 */	lwz r12, 0(r3)
/* 8038DFFC 0038AF3C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038E000 0038AF40  7D 89 03 A6 */	mtctr r12
/* 8038E004 0038AF44  4E 80 04 21 */	bctrl 
/* 8038E008 0038AF48  C3 C3 00 9C */	lfs f30, 0x9c(r3)
/* 8038E00C 0038AF4C  3C 80 69 72 */	lis r4, 0x69723030@ha
/* 8038E010 0038AF50  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038E014 0038AF54  38 C4 30 30 */	addi r6, r4, 0x69723030@l
/* 8038E018 0038AF58  38 A0 00 00 */	li r5, 0
/* 8038E01C 0038AF5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E020 0038AF60  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038E024 0038AF64  7D 89 03 A6 */	mtctr r12
/* 8038E028 0038AF68  4E 80 04 21 */	bctrl 
/* 8038E02C 0038AF6C  C0 03 00 8C */	lfs f0, 0x8c(r3)
/* 8038E030 0038AF70  3C 60 69 6C */	lis r3, 0x696C3030@ha
/* 8038E034 0038AF74  38 C3 30 30 */	addi r6, r3, 0x696C3030@l
/* 8038E038 0038AF78  38 A0 00 00 */	li r5, 0
/* 8038E03C 0038AF7C  D0 1F 00 68 */	stfs f0, 0x68(r31)
/* 8038E040 0038AF80  D3 DF 00 6C */	stfs f30, 0x6c(r31)
/* 8038E044 0038AF84  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038E048 0038AF88  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E04C 0038AF8C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038E050 0038AF90  7D 89 03 A6 */	mtctr r12
/* 8038E054 0038AF94  4E 80 04 21 */	bctrl 
/* 8038E058 0038AF98  C3 C3 00 9C */	lfs f30, 0x9c(r3)
/* 8038E05C 0038AF9C  3C 80 69 6C */	lis r4, 0x696C3030@ha
/* 8038E060 0038AFA0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038E064 0038AFA4  38 C4 30 30 */	addi r6, r4, 0x696C3030@l
/* 8038E068 0038AFA8  38 A0 00 00 */	li r5, 0
/* 8038E06C 0038AFAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E070 0038AFB0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038E074 0038AFB4  7D 89 03 A6 */	mtctr r12
/* 8038E078 0038AFB8  4E 80 04 21 */	bctrl 
/* 8038E07C 0038AFBC  C0 03 00 8C */	lfs f0, 0x8c(r3)
/* 8038E080 0038AFC0  D0 1F 00 60 */	stfs f0, 0x60(r31)
/* 8038E084 0038AFC4  D3 DF 00 64 */	stfs f30, 0x64(r31)
/* 8038E088 0038AFC8  48 00 00 A4 */	b .L_8038E12C
.L_8038E08C:
/* 8038E08C 0038AFCC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038E090 0038AFD0  3C 80 69 72 */	lis r4, 0x69723031@ha
/* 8038E094 0038AFD4  38 C4 30 31 */	addi r6, r4, 0x69723031@l
/* 8038E098 0038AFD8  38 A0 00 00 */	li r5, 0
/* 8038E09C 0038AFDC  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E0A0 0038AFE0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038E0A4 0038AFE4  7D 89 03 A6 */	mtctr r12
/* 8038E0A8 0038AFE8  4E 80 04 21 */	bctrl 
/* 8038E0AC 0038AFEC  C3 C3 00 9C */	lfs f30, 0x9c(r3)
/* 8038E0B0 0038AFF0  3C 80 69 72 */	lis r4, 0x69723031@ha
/* 8038E0B4 0038AFF4  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038E0B8 0038AFF8  38 C4 30 31 */	addi r6, r4, 0x69723031@l
/* 8038E0BC 0038AFFC  38 A0 00 00 */	li r5, 0
/* 8038E0C0 0038B000  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E0C4 0038B004  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038E0C8 0038B008  7D 89 03 A6 */	mtctr r12
/* 8038E0CC 0038B00C  4E 80 04 21 */	bctrl 
/* 8038E0D0 0038B010  C0 03 00 8C */	lfs f0, 0x8c(r3)
/* 8038E0D4 0038B014  3C 60 69 6C */	lis r3, 0x696C3031@ha
/* 8038E0D8 0038B018  38 C3 30 31 */	addi r6, r3, 0x696C3031@l
/* 8038E0DC 0038B01C  38 A0 00 00 */	li r5, 0
/* 8038E0E0 0038B020  D0 1F 00 68 */	stfs f0, 0x68(r31)
/* 8038E0E4 0038B024  D3 DF 00 6C */	stfs f30, 0x6c(r31)
/* 8038E0E8 0038B028  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038E0EC 0038B02C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E0F0 0038B030  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038E0F4 0038B034  7D 89 03 A6 */	mtctr r12
/* 8038E0F8 0038B038  4E 80 04 21 */	bctrl 
/* 8038E0FC 0038B03C  C3 C3 00 9C */	lfs f30, 0x9c(r3)
/* 8038E100 0038B040  3C 80 69 6C */	lis r4, 0x696C3031@ha
/* 8038E104 0038B044  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038E108 0038B048  38 C4 30 31 */	addi r6, r4, 0x696C3031@l
/* 8038E10C 0038B04C  38 A0 00 00 */	li r5, 0
/* 8038E110 0038B050  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E114 0038B054  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038E118 0038B058  7D 89 03 A6 */	mtctr r12
/* 8038E11C 0038B05C  4E 80 04 21 */	bctrl 
/* 8038E120 0038B060  C0 03 00 8C */	lfs f0, 0x8c(r3)
/* 8038E124 0038B064  D0 1F 00 60 */	stfs f0, 0x60(r31)
/* 8038E128 0038B068  D3 DF 00 64 */	stfs f30, 0x64(r31)
.L_8038E12C:
/* 8038E12C 0038B06C  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 8038E130 0038B070  38 80 00 00 */	li r4, 0
/* 8038E134 0038B074  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E138 0038B078  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038E13C 0038B07C  7D 89 03 A6 */	mtctr r12
/* 8038E140 0038B080  4E 80 04 21 */	bctrl 
/* 8038E144 0038B084  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8038E148 0038B088  38 80 00 00 */	li r4, 0
/* 8038E14C 0038B08C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E150 0038B090  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038E154 0038B094  7D 89 03 A6 */	mtctr r12
/* 8038E158 0038B098  4E 80 04 21 */	bctrl 
/* 8038E15C 0038B09C  48 00 00 4C */	b .L_8038E1A8
.L_8038E160:
/* 8038E160 0038B0A0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8038E164 0038B0A4  C0 3F 00 8C */	lfs f1, 0x8c(r31)
/* 8038E168 0038B0A8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8038E16C 0038B0AC  C0 42 0C 84 */	lfs f2, lbl_8051EFE4@sda21(r2)
/* 8038E170 0038B0B0  EC 01 00 2A */	fadds f0, f1, f0
/* 8038E174 0038B0B4  D0 1F 00 8C */	stfs f0, 0x8c(r31)
/* 8038E178 0038B0B8  C0 3F 00 8C */	lfs f1, 0x8c(r31)
/* 8038E17C 0038B0BC  4B F7 45 21 */	bl calcSmooth0to1__Q22og6ScreenFff
/* 8038E180 0038B0C0  C0 42 0C DC */	lfs f2, lbl_8051F03C@sda21(r2)
/* 8038E184 0038B0C4  C0 02 0C 84 */	lfs f0, lbl_8051EFE4@sda21(r2)
/* 8038E188 0038B0C8  EC 22 00 72 */	fmuls f1, f2, f1
/* 8038E18C 0038B0CC  D0 3F 00 94 */	stfs f1, 0x94(r31)
/* 8038E190 0038B0D0  C0 3F 00 8C */	lfs f1, 0x8c(r31)
/* 8038E194 0038B0D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038E198 0038B0D8  4C 41 13 82 */	cror 2, 1, 2
/* 8038E19C 0038B0DC  40 82 00 0C */	bne .L_8038E1A8
/* 8038E1A0 0038B0E0  38 00 00 00 */	li r0, 0
/* 8038E1A4 0038B0E4  90 1F 00 80 */	stw r0, 0x80(r31)
.L_8038E1A8:
/* 8038E1A8 0038B0E8  88 0D 85 D8 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038E1AC 0038B0EC  28 00 00 00 */	cmplwi r0, 0
/* 8038E1B0 0038B0F0  41 82 00 2C */	beq .L_8038E1DC
/* 8038E1B4 0038B0F4  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 8038E1B8 0038B0F8  38 80 00 FF */	li r4, 0xff
/* 8038E1BC 0038B0FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E1C0 0038B100  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038E1C4 0038B104  7D 89 03 A6 */	mtctr r12
/* 8038E1C8 0038B108  4E 80 04 21 */	bctrl 
/* 8038E1CC 0038B10C  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 8038E1D0 0038B110  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8038E1D4 0038B114  D0 03 00 6C */	stfs f0, 0x6c(r3)
/* 8038E1D8 0038B118  48 00 00 28 */	b .L_8038E200
.L_8038E1DC:
/* 8038E1DC 0038B11C  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 8038E1E0 0038B120  38 80 00 80 */	li r4, 0x80
/* 8038E1E4 0038B124  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E1E8 0038B128  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038E1EC 0038B12C  7D 89 03 A6 */	mtctr r12
/* 8038E1F0 0038B130  4E 80 04 21 */	bctrl 
/* 8038E1F4 0038B134  C0 02 0C 3C */	lfs f0, lbl_8051EF9C@sda21(r2)
/* 8038E1F8 0038B138  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8038E1FC 0038B13C  D0 03 00 6C */	stfs f0, 0x6c(r3)
.L_8038E200:
/* 8038E200 0038B140  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038E204 0038B144  4B CB 29 29 */	bl animation__9J2DScreenFv
/* 8038E208 0038B148  88 1F 00 84 */	lbz r0, 0x84(r31)
/* 8038E20C 0038B14C  28 00 00 00 */	cmplwi r0, 0
/* 8038E210 0038B150  41 82 00 2C */	beq .L_8038E23C
/* 8038E214 0038B154  C0 5F 00 88 */	lfs f2, 0x88(r31)
/* 8038E218 0038B158  C0 22 0C A8 */	lfs f1, lbl_8051F008@sda21(r2)
/* 8038E21C 0038B15C  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 8038E220 0038B160  EC 22 08 2A */	fadds f1, f2, f1
/* 8038E224 0038B164  D0 3F 00 88 */	stfs f1, 0x88(r31)
/* 8038E228 0038B168  C0 3F 00 88 */	lfs f1, 0x88(r31)
/* 8038E22C 0038B16C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038E230 0038B170  40 81 00 30 */	ble .L_8038E260
/* 8038E234 0038B174  D0 1F 00 88 */	stfs f0, 0x88(r31)
/* 8038E238 0038B178  48 00 00 28 */	b .L_8038E260
.L_8038E23C:
/* 8038E23C 0038B17C  C0 5F 00 88 */	lfs f2, 0x88(r31)
/* 8038E240 0038B180  C0 22 0C A8 */	lfs f1, lbl_8051F008@sda21(r2)
/* 8038E244 0038B184  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038E248 0038B188  EC 22 08 28 */	fsubs f1, f2, f1
/* 8038E24C 0038B18C  D0 3F 00 88 */	stfs f1, 0x88(r31)
/* 8038E250 0038B190  C0 3F 00 88 */	lfs f1, 0x88(r31)
/* 8038E254 0038B194  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038E258 0038B198  40 80 00 08 */	bge .L_8038E260
/* 8038E25C 0038B19C  D0 1F 00 88 */	stfs f0, 0x88(r31)
.L_8038E260:
/* 8038E260 0038B1A0  C0 22 0C 90 */	lfs f1, lbl_8051EFF0@sda21(r2)
/* 8038E264 0038B1A4  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 8038E268 0038B1A8  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 8038E26C 0038B1AC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038E270 0038B1B0  D0 03 00 6C */	stfs f0, 0x6c(r3)
/* 8038E274 0038B1B4  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 8038E278 0038B1B8  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8038E27C 0038B1BC  D0 03 00 6C */	stfs f0, 0x6c(r3)
/* 8038E280 0038B1C0  80 1F 00 80 */	lwz r0, 0x80(r31)
/* 8038E284 0038B1C4  2C 00 00 02 */	cmpwi r0, 2
/* 8038E288 0038B1C8  41 80 00 40 */	blt .L_8038E2C8
/* 8038E28C 0038B1CC  3B A0 00 00 */	li r29, 0
/* 8038E290 0038B1D0  7F FE FB 78 */	mr r30, r31
.L_8038E294:
/* 8038E294 0038B1D4  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 8038E298 0038B1D8  4B F9 AC ED */	bl calc__Q32og6Screen8ScaleMgrFv
/* 8038E29C 0038B1DC  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 8038E2A0 0038B1E0  D0 23 00 CC */	stfs f1, 0xcc(r3)
/* 8038E2A4 0038B1E4  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 8038E2A8 0038B1E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E2AC 0038B1EC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038E2B0 0038B1F0  7D 89 03 A6 */	mtctr r12
/* 8038E2B4 0038B1F4  4E 80 04 21 */	bctrl 
/* 8038E2B8 0038B1F8  3B BD 00 01 */	addi r29, r29, 1
/* 8038E2BC 0038B1FC  3B DE 00 04 */	addi r30, r30, 4
/* 8038E2C0 0038B200  2C 1D 00 02 */	cmpwi r29, 2
/* 8038E2C4 0038B204  41 80 FF D0 */	blt .L_8038E294
.L_8038E2C8:
/* 8038E2C8 0038B208  C0 7F 00 94 */	lfs f3, 0x94(r31)
/* 8038E2CC 0038B20C  C0 42 24 3C */	lfs f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 8038E2D0 0038B210  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 8038E2D4 0038B214  C0 02 24 40 */	lfs f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 8038E2D8 0038B218  EC 43 10 2A */	fadds f2, f3, f2
/* 8038E2DC 0038B21C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8038E2E0 0038B220  EC 01 00 2A */	fadds f0, f1, f0
/* 8038E2E4 0038B224  D0 43 01 40 */	stfs f2, 0x140(r3)
/* 8038E2E8 0038B228  D0 03 01 44 */	stfs f0, 0x144(r3)
.L_8038E2EC:
/* 8038E2EC 0038B22C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8038E2F0 0038B230  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8038E2F4 0038B234  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8038E2F8 0038B238  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8038E2FC 0038B23C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8038E300 0038B240  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8038E304 0038B244  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8038E308 0038B248  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8038E30C 0038B24C  7C 08 03 A6 */	mtlr r0
/* 8038E310 0038B250  38 21 00 50 */	addi r1, r1, 0x50
/* 8038E314 0038B254  4E 80 00 20 */	blr 
.endfn update__Q28Morimura24TChallengePlayModeScreenFv

.fn draw__Q28Morimura24TChallengePlayModeScreenFR8GraphicsP13J2DPerspGraph, global
/* 8038E318 0038B258  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8038E31C 0038B25C  7C 08 02 A6 */	mflr r0
/* 8038E320 0038B260  90 01 00 84 */	stw r0, 0x84(r1)
/* 8038E324 0038B264  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8038E328 0038B268  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8038E32C 0038B26C  BF 01 00 50 */	stmw r24, 0x50(r1)
/* 8038E330 0038B270  7C 7D 1B 78 */	mr r29, r3
/* 8038E334 0038B274  7C 9E 23 78 */	mr r30, r4
/* 8038E338 0038B278  80 03 00 80 */	lwz r0, 0x80(r3)
/* 8038E33C 0038B27C  2C 00 00 00 */	cmpwi r0, 0
/* 8038E340 0038B280  41 82 06 1C */	beq .L_8038E95C
/* 8038E344 0038B284  48 01 32 55 */	bl draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
/* 8038E348 0038B288  38 7E 00 BC */	addi r3, r30, 0xbc
/* 8038E34C 0038B28C  81 9E 00 BC */	lwz r12, 0xbc(r30)
/* 8038E350 0038B290  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038E354 0038B294  7D 89 03 A6 */	mtctr r12
/* 8038E358 0038B298  4E 80 04 21 */	bctrl 
/* 8038E35C 0038B29C  83 5D 00 20 */	lwz r26, 0x20(r29)
/* 8038E360 0038B2A0  83 3D 00 24 */	lwz r25, 0x24(r29)
/* 8038E364 0038B2A4  C0 3A 00 2C */	lfs f1, 0x2c(r26)
/* 8038E368 0038B2A8  C0 1A 00 24 */	lfs f0, 0x24(r26)
/* 8038E36C 0038B2AC  C3 F9 00 D0 */	lfs f31, 0xd0(r25)
/* 8038E370 0038B2B0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038E374 0038B2B4  C0 22 0C E0 */	lfs f1, lbl_8051F040@sda21(r2)
/* 8038E378 0038B2B8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8038E37C 0038B2BC  EC 21 00 32 */	fmuls f1, f1, f0
/* 8038E380 0038B2C0  4B D3 37 CD */	bl __cvt_fp2unsigned
/* 8038E384 0038B2C4  C0 5A 00 28 */	lfs f2, 0x28(r26)
/* 8038E388 0038B2C8  7C 7C 1B 78 */	mr r28, r3
/* 8038E38C 0038B2CC  C0 3A 00 20 */	lfs f1, 0x20(r26)
/* 8038E390 0038B2D0  C0 19 00 CC */	lfs f0, 0xcc(r25)
/* 8038E394 0038B2D4  EC 22 08 28 */	fsubs f1, f2, f1
/* 8038E398 0038B2D8  C0 42 0C E0 */	lfs f2, lbl_8051F040@sda21(r2)
/* 8038E39C 0038B2DC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038E3A0 0038B2E0  EC 22 00 32 */	fmuls f1, f2, f0
/* 8038E3A4 0038B2E4  4B D3 37 A9 */	bl __cvt_fp2unsigned
/* 8038E3A8 0038B2E8  C0 3A 00 2C */	lfs f1, 0x2c(r26)
/* 8038E3AC 0038B2EC  3B ED 99 88 */	addi r31, r13, mMetOffset__Q28Morimura16TChallengeSelect@sda21
/* 8038E3B0 0038B2F0  C0 1A 00 24 */	lfs f0, 0x24(r26)
/* 8038E3B4 0038B2F4  7C 7B 1B 78 */	mr r27, r3
/* 8038E3B8 0038B2F8  C0 82 0C 90 */	lfs f4, lbl_8051EFF0@sda21(r2)
/* 8038E3BC 0038B2FC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038E3C0 0038B300  C0 5D 00 98 */	lfs f2, 0x98(r29)
/* 8038E3C4 0038B304  C0 62 0C E0 */	lfs f3, lbl_8051F040@sda21(r2)
/* 8038E3C8 0038B308  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8038E3CC 0038B30C  EC 84 10 28 */	fsubs f4, f4, f2
/* 8038E3D0 0038B310  EC 40 07 F2 */	fmuls f2, f0, f31
/* 8038E3D4 0038B314  C0 19 00 9C */	lfs f0, 0x9c(r25)
/* 8038E3D8 0038B318  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8038E3DC 0038B31C  EC 01 00 2A */	fadds f0, f1, f0
/* 8038E3E0 0038B320  EC 24 00 BA */	fmadds f1, f4, f2, f0
/* 8038E3E4 0038B324  4B D3 37 69 */	bl __cvt_fp2unsigned
/* 8038E3E8 0038B328  C0 2D 99 88 */	lfs f1, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038E3EC 0038B32C  7C 7A 1B 78 */	mr r26, r3
/* 8038E3F0 0038B330  C0 19 00 8C */	lfs f0, 0x8c(r25)
/* 8038E3F4 0038B334  EC 21 00 2A */	fadds f1, f1, f0
/* 8038E3F8 0038B338  4B D3 37 55 */	bl __cvt_fp2unsigned
/* 8038E3FC 0038B33C  7F 44 D3 78 */	mr r4, r26
/* 8038E400 0038B340  7F 65 DB 78 */	mr r5, r27
/* 8038E404 0038B344  7F 86 E3 78 */	mr r6, r28
/* 8038E408 0038B348  4B D5 B3 D1 */	bl GXSetScissor
/* 8038E40C 0038B34C  80 7D 00 20 */	lwz r3, 0x20(r29)
/* 8038E410 0038B350  38 80 00 00 */	li r4, 0
/* 8038E414 0038B354  80 FD 00 24 */	lwz r7, 0x24(r29)
/* 8038E418 0038B358  38 A0 00 00 */	li r5, 0
/* 8038E41C 0038B35C  C0 63 00 28 */	lfs f3, 0x28(r3)
/* 8038E420 0038B360  38 C0 00 00 */	li r6, 0
/* 8038E424 0038B364  C0 43 00 20 */	lfs f2, 0x20(r3)
/* 8038E428 0038B368  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8038E42C 0038B36C  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8038E430 0038B370  EC 63 10 28 */	fsubs f3, f3, f2
/* 8038E434 0038B374  C0 47 00 CC */	lfs f2, 0xcc(r7)
/* 8038E438 0038B378  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038E43C 0038B37C  C0 A7 00 D0 */	lfs f5, 0xd0(r7)
/* 8038E440 0038B380  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E444 0038B384  EC 23 00 B2 */	fmuls f1, f3, f2
/* 8038E448 0038B388  C0 82 0C E0 */	lfs f4, lbl_8051F040@sda21(r2)
/* 8038E44C 0038B38C  EC 00 01 72 */	fmuls f0, f0, f5
/* 8038E450 0038B390  EC 64 00 72 */	fmuls f3, f4, f1
/* 8038E454 0038B394  C0 ED 99 88 */	lfs f7, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038E458 0038B398  C0 C7 00 8C */	lfs f6, 0x8c(r7)
/* 8038E45C 0038B39C  C0 BF 00 04 */	lfs f5, 4(r31)
/* 8038E460 0038B3A0  EC 84 00 32 */	fmuls f4, f4, f0
/* 8038E464 0038B3A4  C0 47 00 9C */	lfs f2, 0x9c(r7)
/* 8038E468 0038B3A8  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8038E46C 0038B3AC  EC 27 30 2A */	fadds f1, f7, f6
/* 8038E470 0038B3B0  EC 45 10 2A */	fadds f2, f5, f2
/* 8038E474 0038B3B4  7D 89 03 A6 */	mtctr r12
/* 8038E478 0038B3B8  4E 80 04 21 */	bctrl 
/* 8038E47C 0038B3BC  80 7D 00 20 */	lwz r3, 0x20(r29)
/* 8038E480 0038B3C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E484 0038B3C4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038E488 0038B3C8  7D 89 03 A6 */	mtctr r12
/* 8038E48C 0038B3CC  4E 80 04 21 */	bctrl 
/* 8038E490 0038B3D0  83 3D 00 20 */	lwz r25, 0x20(r29)
/* 8038E494 0038B3D4  83 1D 00 2C */	lwz r24, 0x2c(r29)
/* 8038E498 0038B3D8  C0 39 00 2C */	lfs f1, 0x2c(r25)
/* 8038E49C 0038B3DC  C0 19 00 24 */	lfs f0, 0x24(r25)
/* 8038E4A0 0038B3E0  C3 F8 00 D0 */	lfs f31, 0xd0(r24)
/* 8038E4A4 0038B3E4  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038E4A8 0038B3E8  C0 22 0C E0 */	lfs f1, lbl_8051F040@sda21(r2)
/* 8038E4AC 0038B3EC  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8038E4B0 0038B3F0  EC 21 00 32 */	fmuls f1, f1, f0
/* 8038E4B4 0038B3F4  4B D3 36 99 */	bl __cvt_fp2unsigned
/* 8038E4B8 0038B3F8  C0 59 00 28 */	lfs f2, 0x28(r25)
/* 8038E4BC 0038B3FC  7C 7C 1B 78 */	mr r28, r3
/* 8038E4C0 0038B400  C0 39 00 20 */	lfs f1, 0x20(r25)
/* 8038E4C4 0038B404  C0 18 00 CC */	lfs f0, 0xcc(r24)
/* 8038E4C8 0038B408  EC 22 08 28 */	fsubs f1, f2, f1
/* 8038E4CC 0038B40C  C0 42 0C E0 */	lfs f2, lbl_8051F040@sda21(r2)
/* 8038E4D0 0038B410  C0 62 0C 6C */	lfs f3, lbl_8051EFCC@sda21(r2)
/* 8038E4D4 0038B414  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038E4D8 0038B418  EC 02 00 32 */	fmuls f0, f2, f0
/* 8038E4DC 0038B41C  EC 23 00 32 */	fmuls f1, f3, f0
/* 8038E4E0 0038B420  4B D3 36 6D */	bl __cvt_fp2unsigned
/* 8038E4E4 0038B424  C0 39 00 2C */	lfs f1, 0x2c(r25)
/* 8038E4E8 0038B428  7C 7B 1B 78 */	mr r27, r3
/* 8038E4EC 0038B42C  C0 19 00 24 */	lfs f0, 0x24(r25)
/* 8038E4F0 0038B430  C0 82 0C 90 */	lfs f4, lbl_8051EFF0@sda21(r2)
/* 8038E4F4 0038B434  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038E4F8 0038B438  C0 5D 00 9C */	lfs f2, 0x9c(r29)
/* 8038E4FC 0038B43C  C0 62 0C E0 */	lfs f3, lbl_8051F040@sda21(r2)
/* 8038E500 0038B440  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8038E504 0038B444  EC 84 10 28 */	fsubs f4, f4, f2
/* 8038E508 0038B448  EC 40 07 F2 */	fmuls f2, f0, f31
/* 8038E50C 0038B44C  C0 18 00 9C */	lfs f0, 0x9c(r24)
/* 8038E510 0038B450  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8038E514 0038B454  EC 01 00 2A */	fadds f0, f1, f0
/* 8038E518 0038B458  EC 24 00 BA */	fmadds f1, f4, f2, f0
/* 8038E51C 0038B45C  4B D3 36 31 */	bl __cvt_fp2unsigned
/* 8038E520 0038B460  C0 2D 99 88 */	lfs f1, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038E524 0038B464  7C 7A 1B 78 */	mr r26, r3
/* 8038E528 0038B468  C0 18 00 8C */	lfs f0, 0x8c(r24)
/* 8038E52C 0038B46C  EC 21 00 2A */	fadds f1, f1, f0
/* 8038E530 0038B470  4B D3 36 1D */	bl __cvt_fp2unsigned
/* 8038E534 0038B474  7F 44 D3 78 */	mr r4, r26
/* 8038E538 0038B478  7F 65 DB 78 */	mr r5, r27
/* 8038E53C 0038B47C  7F 86 E3 78 */	mr r6, r28
/* 8038E540 0038B480  4B D5 B2 99 */	bl GXSetScissor
/* 8038E544 0038B484  80 7D 00 20 */	lwz r3, 0x20(r29)
/* 8038E548 0038B488  38 80 00 00 */	li r4, 0
/* 8038E54C 0038B48C  80 FD 00 2C */	lwz r7, 0x2c(r29)
/* 8038E550 0038B490  38 A0 00 00 */	li r5, 0
/* 8038E554 0038B494  C0 63 00 28 */	lfs f3, 0x28(r3)
/* 8038E558 0038B498  38 C0 00 00 */	li r6, 0
/* 8038E55C 0038B49C  C0 43 00 20 */	lfs f2, 0x20(r3)
/* 8038E560 0038B4A0  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8038E564 0038B4A4  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8038E568 0038B4A8  EC 63 10 28 */	fsubs f3, f3, f2
/* 8038E56C 0038B4AC  C0 47 00 CC */	lfs f2, 0xcc(r7)
/* 8038E570 0038B4B0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038E574 0038B4B4  C0 A7 00 D0 */	lfs f5, 0xd0(r7)
/* 8038E578 0038B4B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E57C 0038B4BC  EC 23 00 B2 */	fmuls f1, f3, f2
/* 8038E580 0038B4C0  C0 82 0C E0 */	lfs f4, lbl_8051F040@sda21(r2)
/* 8038E584 0038B4C4  EC 00 01 72 */	fmuls f0, f0, f5
/* 8038E588 0038B4C8  EC 64 00 72 */	fmuls f3, f4, f1
/* 8038E58C 0038B4CC  C0 ED 99 88 */	lfs f7, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038E590 0038B4D0  C0 C7 00 8C */	lfs f6, 0x8c(r7)
/* 8038E594 0038B4D4  C0 BF 00 04 */	lfs f5, 4(r31)
/* 8038E598 0038B4D8  EC 84 00 32 */	fmuls f4, f4, f0
/* 8038E59C 0038B4DC  C0 47 00 9C */	lfs f2, 0x9c(r7)
/* 8038E5A0 0038B4E0  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8038E5A4 0038B4E4  EC 27 30 2A */	fadds f1, f7, f6
/* 8038E5A8 0038B4E8  EC 45 10 2A */	fadds f2, f5, f2
/* 8038E5AC 0038B4EC  7D 89 03 A6 */	mtctr r12
/* 8038E5B0 0038B4F0  4E 80 04 21 */	bctrl 
/* 8038E5B4 0038B4F4  80 7D 00 20 */	lwz r3, 0x20(r29)
/* 8038E5B8 0038B4F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E5BC 0038B4FC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038E5C0 0038B500  7D 89 03 A6 */	mtctr r12
/* 8038E5C4 0038B504  4E 80 04 21 */	bctrl 
/* 8038E5C8 0038B508  38 60 00 00 */	li r3, 0
/* 8038E5CC 0038B50C  38 80 00 00 */	li r4, 0
/* 8038E5D0 0038B510  38 A0 02 80 */	li r5, 0x280
/* 8038E5D4 0038B514  38 C0 01 E0 */	li r6, 0x1e0
/* 8038E5D8 0038B518  4B D5 B2 01 */	bl GXSetScissor
/* 8038E5DC 0038B51C  80 7D 00 08 */	lwz r3, 8(r29)
/* 8038E5E0 0038B520  3C A0 69 6D */	lis r5, 0x696D6146@ha
/* 8038E5E4 0038B524  3C 80 50 32 */	lis r4, 0x50326F72@ha
/* 8038E5E8 0038B528  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E5EC 0038B52C  38 C5 61 46 */	addi r6, r5, 0x696D6146@l
/* 8038E5F0 0038B530  38 A4 6F 72 */	addi r5, r4, 0x50326F72@l
/* 8038E5F4 0038B534  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038E5F8 0038B538  7D 89 03 A6 */	mtctr r12
/* 8038E5FC 0038B53C  4E 80 04 21 */	bctrl 
/* 8038E600 0038B540  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E604 0038B544  7C 78 1B 78 */	mr r24, r3
/* 8038E608 0038B548  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 8038E60C 0038B54C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038E610 0038B550  88 84 00 B2 */	lbz r4, 0xb2(r4)
/* 8038E614 0038B554  7D 89 03 A6 */	mtctr r12
/* 8038E618 0038B558  4E 80 04 21 */	bctrl 
/* 8038E61C 0038B55C  C0 38 00 28 */	lfs f1, 0x28(r24)
/* 8038E620 0038B560  7F 04 C3 78 */	mr r4, r24
/* 8038E624 0038B564  C0 18 00 20 */	lfs f0, 0x20(r24)
/* 8038E628 0038B568  38 61 00 38 */	addi r3, r1, 0x38
/* 8038E62C 0038B56C  38 A0 00 01 */	li r5, 1
/* 8038E630 0038B570  EF E1 00 28 */	fsubs f31, f1, f0
/* 8038E634 0038B574  4B CA A9 65 */	bl getGlbVtx__7J2DPaneCFUc
/* 8038E638 0038B578  7F 04 C3 78 */	mr r4, r24
/* 8038E63C 0038B57C  38 61 00 44 */	addi r3, r1, 0x44
/* 8038E640 0038B580  38 A0 00 00 */	li r5, 0
/* 8038E644 0038B584  4B CA A9 55 */	bl getGlbVtx__7J2DPaneCFUc
/* 8038E648 0038B588  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 8038E64C 0038B58C  FC 60 F8 50 */	fneg f3, f31
/* 8038E650 0038B590  81 98 00 00 */	lwz r12, 0(r24)
/* 8038E654 0038B594  7F 03 C3 78 */	mr r3, r24
/* 8038E658 0038B598  EC 20 F8 2A */	fadds f1, f0, f31
/* 8038E65C 0038B59C  C0 58 00 2C */	lfs f2, 0x2c(r24)
/* 8038E660 0038B5A0  C0 18 00 24 */	lfs f0, 0x24(r24)
/* 8038E664 0038B5A4  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8038E668 0038B5A8  38 80 00 00 */	li r4, 0
/* 8038E66C 0038B5AC  EC 82 00 28 */	fsubs f4, f2, f0
/* 8038E670 0038B5B0  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 8038E674 0038B5B4  38 A0 00 00 */	li r5, 0
/* 8038E678 0038B5B8  38 C0 00 00 */	li r6, 0
/* 8038E67C 0038B5BC  7D 89 03 A6 */	mtctr r12
/* 8038E680 0038B5C0  4E 80 04 21 */	bctrl 
/* 8038E684 0038B5C4  7F 03 C3 78 */	mr r3, r24
/* 8038E688 0038B5C8  81 98 00 00 */	lwz r12, 0(r24)
/* 8038E68C 0038B5CC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038E690 0038B5D0  7D 89 03 A6 */	mtctr r12
/* 8038E694 0038B5D4  4E 80 04 21 */	bctrl 
/* 8038E698 0038B5D8  7F 03 C3 78 */	mr r3, r24
/* 8038E69C 0038B5DC  38 80 00 00 */	li r4, 0
/* 8038E6A0 0038B5E0  81 98 00 00 */	lwz r12, 0(r24)
/* 8038E6A4 0038B5E4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038E6A8 0038B5E8  7D 89 03 A6 */	mtctr r12
/* 8038E6AC 0038B5EC  4E 80 04 21 */	bctrl 
/* 8038E6B0 0038B5F0  83 1D 00 28 */	lwz r24, 0x28(r29)
/* 8038E6B4 0038B5F4  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 8038E6B8 0038B5F8  7F 03 C3 78 */	mr r3, r24
/* 8038E6BC 0038B5FC  81 98 00 00 */	lwz r12, 0(r24)
/* 8038E6C0 0038B600  88 84 00 B2 */	lbz r4, 0xb2(r4)
/* 8038E6C4 0038B604  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038E6C8 0038B608  7D 89 03 A6 */	mtctr r12
/* 8038E6CC 0038B60C  4E 80 04 21 */	bctrl 
/* 8038E6D0 0038B610  C0 38 00 28 */	lfs f1, 0x28(r24)
/* 8038E6D4 0038B614  7F 04 C3 78 */	mr r4, r24
/* 8038E6D8 0038B618  C0 18 00 20 */	lfs f0, 0x20(r24)
/* 8038E6DC 0038B61C  38 61 00 20 */	addi r3, r1, 0x20
/* 8038E6E0 0038B620  38 A0 00 01 */	li r5, 1
/* 8038E6E4 0038B624  EF E1 00 28 */	fsubs f31, f1, f0
/* 8038E6E8 0038B628  4B CA A8 B1 */	bl getGlbVtx__7J2DPaneCFUc
/* 8038E6EC 0038B62C  7F 04 C3 78 */	mr r4, r24
/* 8038E6F0 0038B630  38 61 00 2C */	addi r3, r1, 0x2c
/* 8038E6F4 0038B634  38 A0 00 00 */	li r5, 0
/* 8038E6F8 0038B638  4B CA A8 A1 */	bl getGlbVtx__7J2DPaneCFUc
/* 8038E6FC 0038B63C  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8038E700 0038B640  FC 60 F8 50 */	fneg f3, f31
/* 8038E704 0038B644  81 98 00 00 */	lwz r12, 0(r24)
/* 8038E708 0038B648  7F 03 C3 78 */	mr r3, r24
/* 8038E70C 0038B64C  EC 20 F8 2A */	fadds f1, f0, f31
/* 8038E710 0038B650  C0 58 00 2C */	lfs f2, 0x2c(r24)
/* 8038E714 0038B654  C0 18 00 24 */	lfs f0, 0x24(r24)
/* 8038E718 0038B658  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8038E71C 0038B65C  38 80 00 00 */	li r4, 0
/* 8038E720 0038B660  EC 82 00 28 */	fsubs f4, f2, f0
/* 8038E724 0038B664  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8038E728 0038B668  38 A0 00 00 */	li r5, 0
/* 8038E72C 0038B66C  38 C0 00 00 */	li r6, 0
/* 8038E730 0038B670  7D 89 03 A6 */	mtctr r12
/* 8038E734 0038B674  4E 80 04 21 */	bctrl 
/* 8038E738 0038B678  7F 03 C3 78 */	mr r3, r24
/* 8038E73C 0038B67C  81 98 00 00 */	lwz r12, 0(r24)
/* 8038E740 0038B680  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038E744 0038B684  7D 89 03 A6 */	mtctr r12
/* 8038E748 0038B688  4E 80 04 21 */	bctrl 
/* 8038E74C 0038B68C  7F 03 C3 78 */	mr r3, r24
/* 8038E750 0038B690  38 80 00 00 */	li r4, 0
/* 8038E754 0038B694  81 98 00 00 */	lwz r12, 0(r24)
/* 8038E758 0038B698  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038E75C 0038B69C  7D 89 03 A6 */	mtctr r12
/* 8038E760 0038B6A0  4E 80 04 21 */	bctrl 
/* 8038E764 0038B6A4  80 7D 00 34 */	lwz r3, 0x34(r29)
/* 8038E768 0038B6A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E76C 0038B6AC  7C 78 1B 78 */	mr r24, r3
/* 8038E770 0038B6B0  88 83 00 B2 */	lbz r4, 0xb2(r3)
/* 8038E774 0038B6B4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8038E778 0038B6B8  7D 89 03 A6 */	mtctr r12
/* 8038E77C 0038B6BC  4E 80 04 21 */	bctrl 
/* 8038E780 0038B6C0  C0 38 00 28 */	lfs f1, 0x28(r24)
/* 8038E784 0038B6C4  7F 04 C3 78 */	mr r4, r24
/* 8038E788 0038B6C8  C0 18 00 20 */	lfs f0, 0x20(r24)
/* 8038E78C 0038B6CC  38 61 00 08 */	addi r3, r1, 8
/* 8038E790 0038B6D0  38 A0 00 01 */	li r5, 1
/* 8038E794 0038B6D4  EF E1 00 28 */	fsubs f31, f1, f0
/* 8038E798 0038B6D8  4B CA A8 01 */	bl getGlbVtx__7J2DPaneCFUc
/* 8038E79C 0038B6DC  7F 04 C3 78 */	mr r4, r24
/* 8038E7A0 0038B6E0  38 61 00 14 */	addi r3, r1, 0x14
/* 8038E7A4 0038B6E4  38 A0 00 00 */	li r5, 0
/* 8038E7A8 0038B6E8  4B CA A7 F1 */	bl getGlbVtx__7J2DPaneCFUc
/* 8038E7AC 0038B6EC  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8038E7B0 0038B6F0  FC 60 F8 50 */	fneg f3, f31
/* 8038E7B4 0038B6F4  81 98 00 00 */	lwz r12, 0(r24)
/* 8038E7B8 0038B6F8  7F 03 C3 78 */	mr r3, r24
/* 8038E7BC 0038B6FC  EC 20 F8 2A */	fadds f1, f0, f31
/* 8038E7C0 0038B700  C0 58 00 2C */	lfs f2, 0x2c(r24)
/* 8038E7C4 0038B704  C0 18 00 24 */	lfs f0, 0x24(r24)
/* 8038E7C8 0038B708  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8038E7CC 0038B70C  38 80 00 00 */	li r4, 0
/* 8038E7D0 0038B710  EC 82 00 28 */	fsubs f4, f2, f0
/* 8038E7D4 0038B714  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8038E7D8 0038B718  38 A0 00 00 */	li r5, 0
/* 8038E7DC 0038B71C  38 C0 00 00 */	li r6, 0
/* 8038E7E0 0038B720  7D 89 03 A6 */	mtctr r12
/* 8038E7E4 0038B724  4E 80 04 21 */	bctrl 
/* 8038E7E8 0038B728  7F 03 C3 78 */	mr r3, r24
/* 8038E7EC 0038B72C  81 98 00 00 */	lwz r12, 0(r24)
/* 8038E7F0 0038B730  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038E7F4 0038B734  7D 89 03 A6 */	mtctr r12
/* 8038E7F8 0038B738  4E 80 04 21 */	bctrl 
/* 8038E7FC 0038B73C  83 1D 00 20 */	lwz r24, 0x20(r29)
/* 8038E800 0038B740  83 3D 00 2C */	lwz r25, 0x2c(r29)
/* 8038E804 0038B744  C0 38 00 2C */	lfs f1, 0x2c(r24)
/* 8038E808 0038B748  C0 18 00 24 */	lfs f0, 0x24(r24)
/* 8038E80C 0038B74C  C3 F9 00 D0 */	lfs f31, 0xd0(r25)
/* 8038E810 0038B750  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038E814 0038B754  C0 22 0C E0 */	lfs f1, lbl_8051F040@sda21(r2)
/* 8038E818 0038B758  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8038E81C 0038B75C  EC 21 00 32 */	fmuls f1, f1, f0
/* 8038E820 0038B760  4B D3 33 2D */	bl __cvt_fp2unsigned
/* 8038E824 0038B764  C0 58 00 28 */	lfs f2, 0x28(r24)
/* 8038E828 0038B768  7C 7A 1B 78 */	mr r26, r3
/* 8038E82C 0038B76C  C0 38 00 20 */	lfs f1, 0x20(r24)
/* 8038E830 0038B770  C0 19 00 CC */	lfs f0, 0xcc(r25)
/* 8038E834 0038B774  EC 22 08 28 */	fsubs f1, f2, f1
/* 8038E838 0038B778  C0 42 0C E0 */	lfs f2, lbl_8051F040@sda21(r2)
/* 8038E83C 0038B77C  C0 62 0C 6C */	lfs f3, lbl_8051EFCC@sda21(r2)
/* 8038E840 0038B780  EC 01 00 32 */	fmuls f0, f1, f0
/* 8038E844 0038B784  EC 02 00 32 */	fmuls f0, f2, f0
/* 8038E848 0038B788  EC 23 00 32 */	fmuls f1, f3, f0
/* 8038E84C 0038B78C  4B D3 33 01 */	bl __cvt_fp2unsigned
/* 8038E850 0038B790  C0 38 00 2C */	lfs f1, 0x2c(r24)
/* 8038E854 0038B794  7C 7B 1B 78 */	mr r27, r3
/* 8038E858 0038B798  C0 18 00 24 */	lfs f0, 0x24(r24)
/* 8038E85C 0038B79C  C0 82 0C 90 */	lfs f4, lbl_8051EFF0@sda21(r2)
/* 8038E860 0038B7A0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038E864 0038B7A4  C0 5D 00 9C */	lfs f2, 0x9c(r29)
/* 8038E868 0038B7A8  C0 62 0C E0 */	lfs f3, lbl_8051F040@sda21(r2)
/* 8038E86C 0038B7AC  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8038E870 0038B7B0  EC 84 10 28 */	fsubs f4, f4, f2
/* 8038E874 0038B7B4  EC 40 07 F2 */	fmuls f2, f0, f31
/* 8038E878 0038B7B8  C0 19 00 9C */	lfs f0, 0x9c(r25)
/* 8038E87C 0038B7BC  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8038E880 0038B7C0  EC 01 00 2A */	fadds f0, f1, f0
/* 8038E884 0038B7C4  EC 24 00 BA */	fmadds f1, f4, f2, f0
/* 8038E888 0038B7C8  4B D3 32 C5 */	bl __cvt_fp2unsigned
/* 8038E88C 0038B7CC  C0 2D 99 88 */	lfs f1, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038E890 0038B7D0  7C 7C 1B 78 */	mr r28, r3
/* 8038E894 0038B7D4  C0 19 00 8C */	lfs f0, 0x8c(r25)
/* 8038E898 0038B7D8  EC 21 00 2A */	fadds f1, f1, f0
/* 8038E89C 0038B7DC  4B D3 32 B1 */	bl __cvt_fp2unsigned
/* 8038E8A0 0038B7E0  7F 84 E3 78 */	mr r4, r28
/* 8038E8A4 0038B7E4  7F 65 DB 78 */	mr r5, r27
/* 8038E8A8 0038B7E8  7F 46 D3 78 */	mr r6, r26
/* 8038E8AC 0038B7EC  4B D5 AF 2D */	bl GXSetScissor
/* 8038E8B0 0038B7F0  80 7D 00 20 */	lwz r3, 0x20(r29)
/* 8038E8B4 0038B7F4  38 80 00 00 */	li r4, 0
/* 8038E8B8 0038B7F8  80 FD 00 28 */	lwz r7, 0x28(r29)
/* 8038E8BC 0038B7FC  38 A0 00 00 */	li r5, 0
/* 8038E8C0 0038B800  C0 63 00 28 */	lfs f3, 0x28(r3)
/* 8038E8C4 0038B804  38 C0 00 00 */	li r6, 0
/* 8038E8C8 0038B808  C0 43 00 20 */	lfs f2, 0x20(r3)
/* 8038E8CC 0038B80C  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8038E8D0 0038B810  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8038E8D4 0038B814  EC 63 10 28 */	fsubs f3, f3, f2
/* 8038E8D8 0038B818  C0 47 00 CC */	lfs f2, 0xcc(r7)
/* 8038E8DC 0038B81C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8038E8E0 0038B820  C0 A7 00 D0 */	lfs f5, 0xd0(r7)
/* 8038E8E4 0038B824  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E8E8 0038B828  EC 23 00 B2 */	fmuls f1, f3, f2
/* 8038E8EC 0038B82C  C0 82 0C E0 */	lfs f4, lbl_8051F040@sda21(r2)
/* 8038E8F0 0038B830  EC 00 01 72 */	fmuls f0, f0, f5
/* 8038E8F4 0038B834  EC 64 00 72 */	fmuls f3, f4, f1
/* 8038E8F8 0038B838  C0 ED 99 88 */	lfs f7, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038E8FC 0038B83C  C0 C7 00 8C */	lfs f6, 0x8c(r7)
/* 8038E900 0038B840  C0 BF 00 04 */	lfs f5, 4(r31)
/* 8038E904 0038B844  EC 84 00 32 */	fmuls f4, f4, f0
/* 8038E908 0038B848  C0 47 00 9C */	lfs f2, 0x9c(r7)
/* 8038E90C 0038B84C  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8038E910 0038B850  EC 27 30 2A */	fadds f1, f7, f6
/* 8038E914 0038B854  EC 45 10 2A */	fadds f2, f5, f2
/* 8038E918 0038B858  7D 89 03 A6 */	mtctr r12
/* 8038E91C 0038B85C  4E 80 04 21 */	bctrl 
/* 8038E920 0038B860  80 7D 00 20 */	lwz r3, 0x20(r29)
/* 8038E924 0038B864  81 83 00 00 */	lwz r12, 0(r3)
/* 8038E928 0038B868  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8038E92C 0038B86C  7D 89 03 A6 */	mtctr r12
/* 8038E930 0038B870  4E 80 04 21 */	bctrl 
/* 8038E934 0038B874  38 60 00 00 */	li r3, 0
/* 8038E938 0038B878  38 80 00 00 */	li r4, 0
/* 8038E93C 0038B87C  38 A0 02 80 */	li r5, 0x280
/* 8038E940 0038B880  38 C0 01 E0 */	li r6, 0x1e0
/* 8038E944 0038B884  4B D5 AE 95 */	bl GXSetScissor
/* 8038E948 0038B888  38 7E 01 90 */	addi r3, r30, 0x190
/* 8038E94C 0038B88C  81 9E 01 90 */	lwz r12, 0x190(r30)
/* 8038E950 0038B890  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038E954 0038B894  7D 89 03 A6 */	mtctr r12
/* 8038E958 0038B898  4E 80 04 21 */	bctrl 
.L_8038E95C:
/* 8038E95C 0038B89C  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8038E960 0038B8A0  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8038E964 0038B8A4  BB 01 00 50 */	lmw r24, 0x50(r1)
/* 8038E968 0038B8A8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8038E96C 0038B8AC  7C 08 03 A6 */	mtlr r0
/* 8038E970 0038B8B0  38 21 00 80 */	addi r1, r1, 0x80
/* 8038E974 0038B8B4  4E 80 00 20 */	blr 
.endfn draw__Q28Morimura24TChallengePlayModeScreenFR8GraphicsP13J2DPerspGraph

.fn create__Q28Morimura33TChallengeSelectExplanationWindowFPCcUl, global
/* 8038E978 0038B8B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038E97C 0038B8BC  7C 08 02 A6 */	mflr r0
/* 8038E980 0038B8C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038E984 0038B8C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038E988 0038B8C8  7C 7F 1B 78 */	mr r31, r3
/* 8038E98C 0038B8CC  48 01 2A 45 */	bl create__Q28Morimura11TScreenBaseFPCcUl
/* 8038E990 0038B8D0  C0 22 0C CC */	lfs f1, lbl_8051F02C@sda21(r2)
/* 8038E994 0038B8D4  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038E998 0038B8D8  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 8038E99C 0038B8DC  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8038E9A0 0038B8E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038E9A4 0038B8E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038E9A8 0038B8E8  7C 08 03 A6 */	mtlr r0
/* 8038E9AC 0038B8EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8038E9B0 0038B8F0  4E 80 00 20 */	blr 
.endfn create__Q28Morimura33TChallengeSelectExplanationWindowFPCcUl

.fn screenScaleUp__Q28Morimura33TChallengeSelectExplanationWindowFv, global
/* 8038E9B4 0038B8F4  4E 80 00 20 */	blr 
.endfn screenScaleUp__Q28Morimura33TChallengeSelectExplanationWindowFv

.fn __ct__Q28Morimura16TChallengeSelectFv, global
/* 8038E9B8 0038B8F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038E9BC 0038B8FC  7C 08 02 A6 */	mflr r0
/* 8038E9C0 0038B900  3C 80 80 49 */	lis r4, lbl_804940A8@ha
/* 8038E9C4 0038B904  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038E9C8 0038B908  38 84 40 A8 */	addi r4, r4, lbl_804940A8@l
/* 8038E9CC 0038B90C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038E9D0 0038B910  7C 7F 1B 78 */	mr r31, r3
/* 8038E9D4 0038B914  4B FB A7 F5 */	bl __ct__Q28Morimura9TTestBaseFPc
/* 8038E9D8 0038B918  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TChallengeSelect@ha
/* 8038E9DC 0038B91C  38 A0 00 00 */	li r5, 0
/* 8038E9E0 0038B920  38 63 50 E0 */	addi r3, r3, __vt__Q28Morimura16TChallengeSelect@l
/* 8038E9E4 0038B924  38 80 00 01 */	li r4, 1
/* 8038E9E8 0038B928  90 7F 00 00 */	stw r3, 0(r31)
/* 8038E9EC 0038B92C  38 63 00 10 */	addi r3, r3, 0x10
/* 8038E9F0 0038B930  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 8038E9F4 0038B934  38 00 FF FF */	li r0, -1
/* 8038E9F8 0038B938  90 7F 00 18 */	stw r3, 0x18(r31)
/* 8038E9FC 0038B93C  7F E3 FB 78 */	mr r3, r31
/* 8038EA00 0038B940  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 8038EA04 0038B944  90 BF 00 7C */	stw r5, 0x7c(r31)
/* 8038EA08 0038B948  90 BF 00 80 */	stw r5, 0x80(r31)
/* 8038EA0C 0038B94C  90 BF 00 84 */	stw r5, 0x84(r31)
/* 8038EA10 0038B950  90 BF 00 88 */	stw r5, 0x88(r31)
/* 8038EA14 0038B954  90 BF 00 8C */	stw r5, 0x8c(r31)
/* 8038EA18 0038B958  90 BF 00 90 */	stw r5, 0x90(r31)
/* 8038EA1C 0038B95C  90 BF 00 94 */	stw r5, 0x94(r31)
/* 8038EA20 0038B960  90 BF 00 DC */	stw r5, 0xdc(r31)
/* 8038EA24 0038B964  90 BF 00 E8 */	stw r5, 0xe8(r31)
/* 8038EA28 0038B968  90 BF 00 EC */	stw r5, 0xec(r31)
/* 8038EA2C 0038B96C  90 BF 00 F0 */	stw r5, 0xf0(r31)
/* 8038EA30 0038B970  90 BF 00 FC */	stw r5, 0xfc(r31)
/* 8038EA34 0038B974  90 BF 01 24 */	stw r5, 0x124(r31)
/* 8038EA38 0038B978  98 BF 01 28 */	stb r5, 0x128(r31)
/* 8038EA3C 0038B97C  90 BF 01 2C */	stw r5, 0x12c(r31)
/* 8038EA40 0038B980  98 9F 01 34 */	stb r4, 0x134(r31)
/* 8038EA44 0038B984  98 BF 01 35 */	stb r5, 0x135(r31)
/* 8038EA48 0038B988  98 BF 01 36 */	stb r5, 0x136(r31)
/* 8038EA4C 0038B98C  D0 3F 01 38 */	stfs f1, 0x138(r31)
/* 8038EA50 0038B990  D0 1F 01 3C */	stfs f0, 0x13c(r31)
/* 8038EA54 0038B994  90 1F 01 40 */	stw r0, 0x140(r31)
/* 8038EA58 0038B998  98 BF 01 44 */	stb r5, 0x144(r31)
/* 8038EA5C 0038B99C  D0 3F 01 48 */	stfs f1, 0x148(r31)
/* 8038EA60 0038B9A0  D0 1F 01 4C */	stfs f0, 0x14c(r31)
/* 8038EA64 0038B9A4  90 AD 99 78 */	stw r5, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EA68 0038B9A8  90 AD 99 7C */	stw r5, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EA6C 0038B9AC  98 8D 85 C8 */	stb r4, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EA70 0038B9B0  90 AD 99 84 */	stw r5, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EA74 0038B9B4  90 BF 00 9C */	stw r5, 0x9c(r31)
/* 8038EA78 0038B9B8  90 BF 00 C0 */	stw r5, 0xc0(r31)
/* 8038EA7C 0038B9BC  90 BF 01 08 */	stw r5, 0x108(r31)
/* 8038EA80 0038B9C0  90 BF 00 A0 */	stw r5, 0xa0(r31)
/* 8038EA84 0038B9C4  90 BF 00 C4 */	stw r5, 0xc4(r31)
/* 8038EA88 0038B9C8  90 BF 01 0C */	stw r5, 0x10c(r31)
/* 8038EA8C 0038B9CC  90 BF 00 A4 */	stw r5, 0xa4(r31)
/* 8038EA90 0038B9D0  90 BF 00 C8 */	stw r5, 0xc8(r31)
/* 8038EA94 0038B9D4  90 BF 01 10 */	stw r5, 0x110(r31)
/* 8038EA98 0038B9D8  90 BF 00 A8 */	stw r5, 0xa8(r31)
/* 8038EA9C 0038B9DC  90 BF 00 CC */	stw r5, 0xcc(r31)
/* 8038EAA0 0038B9E0  90 BF 01 14 */	stw r5, 0x114(r31)
/* 8038EAA4 0038B9E4  90 BF 00 AC */	stw r5, 0xac(r31)
/* 8038EAA8 0038B9E8  90 BF 00 D0 */	stw r5, 0xd0(r31)
/* 8038EAAC 0038B9EC  90 BF 01 18 */	stw r5, 0x118(r31)
/* 8038EAB0 0038B9F0  90 BF 00 B8 */	stw r5, 0xb8(r31)
/* 8038EAB4 0038B9F4  90 BF 01 00 */	stw r5, 0x100(r31)
/* 8038EAB8 0038B9F8  90 BF 00 E0 */	stw r5, 0xe0(r31)
/* 8038EABC 0038B9FC  90 BF 00 D4 */	stw r5, 0xd4(r31)
/* 8038EAC0 0038BA00  90 BF 01 1C */	stw r5, 0x11c(r31)
/* 8038EAC4 0038BA04  90 BF 00 B0 */	stw r5, 0xb0(r31)
/* 8038EAC8 0038BA08  90 BF 00 BC */	stw r5, 0xbc(r31)
/* 8038EACC 0038BA0C  90 BF 01 04 */	stw r5, 0x104(r31)
/* 8038EAD0 0038BA10  90 BF 00 E4 */	stw r5, 0xe4(r31)
/* 8038EAD4 0038BA14  90 BF 00 D8 */	stw r5, 0xd8(r31)
/* 8038EAD8 0038BA18  90 BF 01 20 */	stw r5, 0x120(r31)
/* 8038EADC 0038BA1C  90 BF 00 B4 */	stw r5, 0xb4(r31)
/* 8038EAE0 0038BA20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038EAE4 0038BA24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038EAE8 0038BA28  7C 08 03 A6 */	mtlr r0
/* 8038EAEC 0038BA2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8038EAF0 0038BA30  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura16TChallengeSelectFv

.fn __dt__Q28Morimura16TChallengeSelectFv, global
/* 8038EAF4 0038BA34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8038EAF8 0038BA38  7C 08 02 A6 */	mflr r0
/* 8038EAFC 0038BA3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038EB00 0038BA40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038EB04 0038BA44  7C 9F 23 78 */	mr r31, r4
/* 8038EB08 0038BA48  93 C1 00 08 */	stw r30, 8(r1)
/* 8038EB0C 0038BA4C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8038EB10 0038BA50  41 82 00 BC */	beq .L_8038EBCC
/* 8038EB14 0038BA54  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TChallengeSelect@ha
/* 8038EB18 0038BA58  38 63 50 E0 */	addi r3, r3, __vt__Q28Morimura16TChallengeSelect@l
/* 8038EB1C 0038BA5C  90 7E 00 00 */	stw r3, 0(r30)
/* 8038EB20 0038BA60  38 03 00 10 */	addi r0, r3, 0x10
/* 8038EB24 0038BA64  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8038EB28 0038BA68  80 0D 99 94 */	lwz r0, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EB2C 0038BA6C  28 00 00 00 */	cmplwi r0, 0
/* 8038EB30 0038BA70  41 82 00 18 */	beq .L_8038EB48
/* 8038EB34 0038BA74  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 8038EB38 0038BA78  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8038EB3C 0038BA7C  4B C9 4B F5 */	bl freeAll__7JKRHeapFv
/* 8038EB40 0038BA80  80 6D 99 94 */	lwz r3, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EB44 0038BA84  4B C9 4A 71 */	bl destroy__7JKRHeapFv
.L_8038EB48:
/* 8038EB48 0038BA88  38 00 00 00 */	li r0, 0
/* 8038EB4C 0038BA8C  28 1E 00 00 */	cmplwi r30, 0
/* 8038EB50 0038BA90  90 0D 99 94 */	stw r0, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EB54 0038BA94  41 82 00 68 */	beq .L_8038EBBC
/* 8038EB58 0038BA98  3C 60 80 4E */	lis r3, __vt__Q28Morimura9TTestBase@ha
/* 8038EB5C 0038BA9C  38 63 B8 F8 */	addi r3, r3, __vt__Q28Morimura9TTestBase@l
/* 8038EB60 0038BAA0  90 7E 00 00 */	stw r3, 0(r30)
/* 8038EB64 0038BAA4  38 03 00 10 */	addi r0, r3, 0x10
/* 8038EB68 0038BAA8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8038EB6C 0038BAAC  41 82 00 50 */	beq .L_8038EBBC
/* 8038EB70 0038BAB0  3C 60 80 4F */	lis r3, __vt__Q26Screen7ObjBase@ha
/* 8038EB74 0038BAB4  38 63 D7 58 */	addi r3, r3, __vt__Q26Screen7ObjBase@l
/* 8038EB78 0038BAB8  90 7E 00 00 */	stw r3, 0(r30)
/* 8038EB7C 0038BABC  38 03 00 10 */	addi r0, r3, 0x10
/* 8038EB80 0038BAC0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8038EB84 0038BAC4  41 82 00 38 */	beq .L_8038EBBC
/* 8038EB88 0038BAC8  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8038EB8C 0038BACC  7F C3 F3 78 */	mr r3, r30
/* 8038EB90 0038BAD0  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 8038EB94 0038BAD4  90 9E 00 00 */	stw r4, 0(r30)
/* 8038EB98 0038BAD8  38 04 00 10 */	addi r0, r4, 0x10
/* 8038EB9C 0038BADC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8038EBA0 0038BAE0  48 08 2A 31 */	bl del__5CNodeFv
/* 8038EBA4 0038BAE4  38 7E 00 18 */	addi r3, r30, 0x18
/* 8038EBA8 0038BAE8  38 80 00 00 */	li r4, 0
/* 8038EBAC 0038BAEC  4B C8 E4 89 */	bl __dt__11JKRDisposerFv
/* 8038EBB0 0038BAF0  7F C3 F3 78 */	mr r3, r30
/* 8038EBB4 0038BAF4  38 80 00 00 */	li r4, 0
/* 8038EBB8 0038BAF8  48 08 29 D1 */	bl __dt__5CNodeFv
.L_8038EBBC:
/* 8038EBBC 0038BAFC  7F E0 07 35 */	extsh. r0, r31
/* 8038EBC0 0038BB00  40 81 00 0C */	ble .L_8038EBCC
/* 8038EBC4 0038BB04  7F C3 F3 78 */	mr r3, r30
/* 8038EBC8 0038BB08  4B C9 54 ED */	bl __dl__FPv
.L_8038EBCC:
/* 8038EBCC 0038BB0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038EBD0 0038BB10  7F C3 F3 78 */	mr r3, r30
/* 8038EBD4 0038BB14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038EBD8 0038BB18  83 C1 00 08 */	lwz r30, 8(r1)
/* 8038EBDC 0038BB1C  7C 08 03 A6 */	mtlr r0
/* 8038EBE0 0038BB20  38 21 00 10 */	addi r1, r1, 0x10
/* 8038EBE4 0038BB24  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura16TChallengeSelectFv

.if version == 0
.fn doCreate__Q28Morimura16TChallengeSelectFP10JKRArchive, global
/* 8038EC1C 0038BB5C  94 21 F8 60 */	stwu r1, -0x7a0(r1)
/* 8038EC20 0038BB60  7C 08 02 A6 */	mflr r0
/* 8038EC24 0038BB64  90 01 07 A4 */	stw r0, 0x7a4(r1)
/* 8038EC28 0038BB68  BE A1 07 74 */	stmw r21, 0x774(r1)
/* 8038EC2C 0038BB6C  7C 9D 23 78 */	mr r29, r4
/* 8038EC30 0038BB70  3C 80 80 49 */	lis r4, lbl_80493FC0@ha
/* 8038EC34 0038BB74  7C 7F 1B 78 */	mr r31, r3
/* 8038EC38 0038BB78  3B C4 3E 60 */	addi r30, r4, lbl_80493FC0@l
/* 8038EC3C 0038BB7C  3B 80 00 00 */	li r28, 0
/* 8038EC40 0038BB80  93 A3 00 78 */	stw r29, 0x78(r3)
/* 8038EC44 0038BB84  48 0C 52 15 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8038EC48 0038BB88  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 8038EC4C 0038BB8C  3C C0 4C 45 */	lis r6, 0x4C454354@ha
/* 8038EC50 0038BB90  3C A0 43 48 */	lis r5, 0x43485345@ha
/* 8038EC54 0038BB94  7C 75 1B 78 */	mr r21, r3
/* 8038EC58 0038BB98  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 8038EC5C 0038BB9C  38 C6 43 54 */	addi r6, r6, 0x4C454354@l
/* 8038EC60 0038BBA0  38 A5 53 45 */	addi r5, r5, 0x43485345@l
/* 8038EC64 0038BBA4  4B F8 06 99 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8038EC68 0038BBA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038EC6C 0038BBAC  41 82 00 14 */	beq .L_8038EC80
/* 8038EC70 0038BBB0  92 BF 00 90 */	stw r21, 0x90(r31)
/* 8038EC74 0038BBB4  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 8038EC78 0038BBB8  83 83 00 14 */	lwz r28, 0x14(r3)
/* 8038EC7C 0038BBBC  48 00 00 0C */	b .L_8038EC88
.L_8038EC80:
/* 8038EC80 0038BBC0  38 00 00 01 */	li r0, 1
/* 8038EC84 0038BBC4  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
.L_8038EC88:
/* 8038EC88 0038BBC8  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8038EC8C 0038BBCC  28 00 00 00 */	cmplwi r0, 0
/* 8038EC90 0038BBD0  41 82 01 CC */	beq .L_8038EE5C
/* 8038EC94 0038BBD4  80 8D 99 90 */	lwz r4, mDebugHeapParent__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EC98 0038BBD8  28 04 00 00 */	cmplwi r4, 0
/* 8038EC9C 0038BBDC  41 82 01 28 */	beq .L_8038EDC4
/* 8038ECA0 0038BBE0  3C 60 00 10 */	lis r3, 0x10
/* 8038ECA4 0038BBE4  38 A0 00 01 */	li r5, 1
/* 8038ECA8 0038BBE8  4B C9 12 21 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 8038ECAC 0038BBEC  28 03 00 00 */	cmplwi r3, 0
/* 8038ECB0 0038BBF0  90 6D 99 94 */	stw r3, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038ECB4 0038BBF4  40 82 00 18 */	bne .L_8038ECCC
/* 8038ECB8 0038BBF8  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038ECBC 0038BBFC  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038ECC0 0038BC00  38 80 05 3B */	li r4, 0x53b
/* 8038ECC4 0038BC04  4C C6 31 82 */	crclr 6
/* 8038ECC8 0038BC08  4B C9 B9 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038ECCC:
/* 8038ECCC 0038BC0C  80 8D 99 94 */	lwz r4, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038ECD0 0038BC10  38 60 00 24 */	li r3, 0x24
/* 8038ECD4 0038BC14  38 A0 00 00 */	li r5, 0
/* 8038ECD8 0038BC18  4B C9 52 69 */	bl __nw__FUlP7JKRHeapi
/* 8038ECDC 0038BC1C  28 03 00 00 */	cmplwi r3, 0
/* 8038ECE0 0038BC20  41 82 00 44 */	beq .L_8038ED24
/* 8038ECE4 0038BC24  3C A0 80 4B */	lis r5, __vt__Q32og6Screen14DispMemberBase@ha
/* 8038ECE8 0038BC28  3C 80 80 4C */	lis r4, __vt__Q28Morimura25DispMemberChallengeSelect@ha
/* 8038ECEC 0038BC2C  38 05 10 88 */	addi r0, r5, __vt__Q32og6Screen14DispMemberBase@l
/* 8038ECF0 0038BC30  38 A0 00 00 */	li r5, 0
/* 8038ECF4 0038BC34  90 03 00 00 */	stw r0, 0(r3)
/* 8038ECF8 0038BC38  38 84 0D 68 */	addi r4, r4, __vt__Q28Morimura25DispMemberChallengeSelect@l
/* 8038ECFC 0038BC3C  38 00 FF FF */	li r0, -1
/* 8038ED00 0038BC40  90 A3 00 04 */	stw r5, 4(r3)
/* 8038ED04 0038BC44  90 83 00 00 */	stw r4, 0(r3)
/* 8038ED08 0038BC48  90 A3 00 08 */	stw r5, 8(r3)
/* 8038ED0C 0038BC4C  90 A3 00 0C */	stw r5, 0xc(r3)
/* 8038ED10 0038BC50  90 03 00 10 */	stw r0, 0x10(r3)
/* 8038ED14 0038BC54  90 A3 00 14 */	stw r5, 0x14(r3)
/* 8038ED18 0038BC58  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8038ED1C 0038BC5C  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 8038ED20 0038BC60  90 A3 00 20 */	stw r5, 0x20(r3)
.L_8038ED24:
/* 8038ED24 0038BC64  90 7F 00 90 */	stw r3, 0x90(r31)
/* 8038ED28 0038BC68  38 60 00 28 */	li r3, 0x28
/* 8038ED2C 0038BC6C  80 0D 99 94 */	lwz r0, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038ED30 0038BC70  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 8038ED34 0038BC74  90 04 00 0C */	stw r0, 0xc(r4)
/* 8038ED38 0038BC78  4B C9 51 6D */	bl __nw__FUl
/* 8038ED3C 0038BC7C  28 03 00 00 */	cmplwi r3, 0
/* 8038ED40 0038BC80  41 82 00 5C */	beq .L_8038ED9C
/* 8038ED44 0038BC84  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 8038ED48 0038BC88  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 8038ED4C 0038BC8C  38 04 10 88 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8038ED50 0038BC90  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 8038ED54 0038BC94  90 03 00 00 */	stw r0, 0(r3)
/* 8038ED58 0038BC98  39 00 00 00 */	li r8, 0
/* 8038ED5C 0038BC9C  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 8038ED60 0038BCA0  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 8038ED64 0038BCA4  91 03 00 04 */	stw r8, 4(r3)
/* 8038ED68 0038BCA8  38 07 9D 48 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 8038ED6C 0038BCAC  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 8038ED70 0038BCB0  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 8038ED74 0038BCB4  90 03 00 00 */	stw r0, 0(r3)
/* 8038ED78 0038BCB8  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 8038ED7C 0038BCBC  38 00 00 B4 */	li r0, 0xb4
/* 8038ED80 0038BCC0  91 03 00 08 */	stw r8, 8(r3)
/* 8038ED84 0038BCC4  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8038ED88 0038BCC8  90 A3 00 10 */	stw r5, 0x10(r3)
/* 8038ED8C 0038BCCC  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8038ED90 0038BCD0  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8038ED94 0038BCD4  98 03 00 20 */	stb r0, 0x20(r3)
/* 8038ED98 0038BCD8  99 03 00 21 */	stb r8, 0x21(r3)
.L_8038ED9C:
/* 8038ED9C 0038BCDC  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 8038EDA0 0038BCE0  90 64 00 20 */	stw r3, 0x20(r4)
/* 8038EDA4 0038BCE4  7F E3 FB 78 */	mr r3, r31
/* 8038EDA8 0038BCE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038EDAC 0038BCEC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8038EDB0 0038BCF0  7D 89 03 A6 */	mtctr r12
/* 8038EDB4 0038BCF4  4E 80 04 21 */	bctrl 
/* 8038EDB8 0038BCF8  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 8038EDBC 0038BCFC  48 0C 31 B5 */	bl setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
/* 8038EDC0 0038BD00  48 00 00 18 */	b .L_8038EDD8
.L_8038EDC4:
/* 8038EDC4 0038BD04  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038EDC8 0038BD08  38 BE 04 70 */	addi r5, r30, 0x470
/* 8038EDCC 0038BD0C  38 80 05 45 */	li r4, 0x545
/* 8038EDD0 0038BD10  4C C6 31 82 */	crclr 6
/* 8038EDD4 0038BD14  4B C9 B8 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038EDD8:
/* 8038EDD8 0038BD18  38 60 00 94 */	li r3, 0x94
/* 8038EDDC 0038BD1C  4B C9 50 C9 */	bl __nw__FUl
/* 8038EDE0 0038BD20  7C 60 1B 79 */	or. r0, r3, r3
/* 8038EDE4 0038BD24  41 82 00 0C */	beq .L_8038EDF0
/* 8038EDE8 0038BD28  4B E9 EA BD */	bl __ct__Q34Game13ChallengeGame9StageListFv
/* 8038EDEC 0038BD2C  7C 60 1B 78 */	mr r0, r3
.L_8038EDF0:
/* 8038EDF0 0038BD30  90 1F 00 7C */	stw r0, 0x7c(r31)
/* 8038EDF4 0038BD34  38 00 00 00 */	li r0, 0
/* 8038EDF8 0038BD38  38 7E 04 98 */	addi r3, r30, 0x498
/* 8038EDFC 0038BD3C  38 80 00 00 */	li r4, 0
/* 8038EE00 0038BD40  90 01 00 08 */	stw r0, 8(r1)
/* 8038EE04 0038BD44  38 A0 00 00 */	li r5, 0
/* 8038EE08 0038BD48  38 C0 00 00 */	li r6, 0
/* 8038EE0C 0038BD4C  38 E0 00 00 */	li r7, 0
/* 8038EE10 0038BD50  39 00 00 02 */	li r8, 2
/* 8038EE14 0038BD54  39 20 00 00 */	li r9, 0
/* 8038EE18 0038BD58  39 40 00 00 */	li r10, 0
/* 8038EE1C 0038BD5C  4B C9 03 6D */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8038EE20 0038BD60  28 03 00 00 */	cmplwi r3, 0
/* 8038EE24 0038BD64  41 82 00 38 */	beq .L_8038EE5C
/* 8038EE28 0038BD68  7C 64 1B 78 */	mr r4, r3
/* 8038EE2C 0038BD6C  38 61 03 28 */	addi r3, r1, 0x328
/* 8038EE30 0038BD70  38 A0 FF FF */	li r5, -1
/* 8038EE34 0038BD74  48 08 6B 41 */	bl __ct__9RamStreamFPvi
/* 8038EE38 0038BD78  38 00 00 01 */	li r0, 1
/* 8038EE3C 0038BD7C  2C 00 00 01 */	cmpwi r0, 1
/* 8038EE40 0038BD80  90 01 03 34 */	stw r0, 0x334(r1)
/* 8038EE44 0038BD84  40 82 00 0C */	bne .L_8038EE50
/* 8038EE48 0038BD88  38 00 00 00 */	li r0, 0
/* 8038EE4C 0038BD8C  90 01 07 3C */	stw r0, 0x73c(r1)
.L_8038EE50:
/* 8038EE50 0038BD90  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8038EE54 0038BD94  38 81 03 28 */	addi r4, r1, 0x328
/* 8038EE58 0038BD98  4B E9 EB 61 */	bl read__Q34Game13ChallengeGame9StageListFR6Stream
.L_8038EE5C:
/* 8038EE5C 0038BD9C  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8038EE60 0038BDA0  28 00 00 00 */	cmplwi r0, 0
/* 8038EE64 0038BDA4  40 82 00 74 */	bne .L_8038EED8
/* 8038EE68 0038BDA8  38 60 00 28 */	li r3, 0x28
/* 8038EE6C 0038BDAC  4B C9 50 39 */	bl __nw__FUl
/* 8038EE70 0038BDB0  28 03 00 00 */	cmplwi r3, 0
/* 8038EE74 0038BDB4  41 82 00 5C */	beq .L_8038EED0
/* 8038EE78 0038BDB8  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 8038EE7C 0038BDBC  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 8038EE80 0038BDC0  38 04 10 88 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8038EE84 0038BDC4  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 8038EE88 0038BDC8  90 03 00 00 */	stw r0, 0(r3)
/* 8038EE8C 0038BDCC  39 00 00 00 */	li r8, 0
/* 8038EE90 0038BDD0  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 8038EE94 0038BDD4  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 8038EE98 0038BDD8  91 03 00 04 */	stw r8, 4(r3)
/* 8038EE9C 0038BDDC  38 07 9D 48 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 8038EEA0 0038BDE0  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 8038EEA4 0038BDE4  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 8038EEA8 0038BDE8  90 03 00 00 */	stw r0, 0(r3)
/* 8038EEAC 0038BDEC  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 8038EEB0 0038BDF0  38 00 00 B4 */	li r0, 0xb4
/* 8038EEB4 0038BDF4  91 03 00 08 */	stw r8, 8(r3)
/* 8038EEB8 0038BDF8  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8038EEBC 0038BDFC  90 A3 00 10 */	stw r5, 0x10(r3)
/* 8038EEC0 0038BE00  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8038EEC4 0038BE04  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8038EEC8 0038BE08  98 03 00 20 */	stb r0, 0x20(r3)
/* 8038EECC 0038BE0C  99 03 00 21 */	stb r8, 0x21(r3)
.L_8038EED0:
/* 8038EED0 0038BE10  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 8038EED4 0038BE14  90 64 00 20 */	stw r3, 0x20(r4)
.L_8038EED8:
/* 8038EED8 0038BE18  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8038EEDC 0038BE1C  28 00 00 00 */	cmplwi r0, 0
/* 8038EEE0 0038BE20  41 82 03 70 */	beq .L_8038F250
/* 8038EEE4 0038BE24  4B D3 A6 9D */	bl rand
/* 8038EEE8 0038BE28  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8038EEEC 0038BE2C  3C 60 43 30 */	lis r3, 0x4330
/* 8038EEF0 0038BE30  90 01 07 4C */	stw r0, 0x74c(r1)
/* 8038EEF4 0038BE34  88 0D 99 81 */	lbz r0, mAllCourseOpen__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EEF8 0038BE38  90 61 07 48 */	stw r3, 0x748(r1)
/* 8038EEFC 0038BE3C  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038EF00 0038BE40  28 00 00 00 */	cmplwi r0, 0
/* 8038EF04 0038BE44  C8 01 07 48 */	lfd f0, 0x748(r1)
/* 8038EF08 0038BE48  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038EF0C 0038BE4C  EC 40 10 28 */	fsubs f2, f0, f2
/* 8038EF10 0038BE50  C0 02 0C 38 */	lfs f0, lbl_8051EF98@sda21(r2)
/* 8038EF14 0038BE54  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038EF18 0038BE58  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038EF1C 0038BE5C  FC 00 00 1E */	fctiwz f0, f0
/* 8038EF20 0038BE60  D8 01 07 50 */	stfd f0, 0x750(r1)
/* 8038EF24 0038BE64  83 21 07 54 */	lwz r25, 0x754(r1)
/* 8038EF28 0038BE68  41 82 00 08 */	beq .L_8038EF30
/* 8038EF2C 0038BE6C  3B 20 00 1E */	li r25, 0x1e
.L_8038EF30:
/* 8038EF30 0038BE70  4B D3 A6 51 */	bl rand
/* 8038EF34 0038BE74  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8038EF38 0038BE78  3C 80 43 30 */	lis r4, 0x4330
/* 8038EF3C 0038BE7C  90 01 07 5C */	stw r0, 0x75c(r1)
/* 8038EF40 0038BE80  6F 20 80 00 */	xoris r0, r25, 0x8000
/* 8038EF44 0038BE84  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038EF48 0038BE88  38 60 00 78 */	li r3, 0x78
/* 8038EF4C 0038BE8C  90 81 07 58 */	stw r4, 0x758(r1)
/* 8038EF50 0038BE90  C0 02 0C 30 */	lfs f0, lbl_8051EF90@sda21(r2)
/* 8038EF54 0038BE94  C8 21 07 58 */	lfd f1, 0x758(r1)
/* 8038EF58 0038BE98  90 01 07 64 */	stw r0, 0x764(r1)
/* 8038EF5C 0038BE9C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8038EF60 0038BEA0  90 81 07 60 */	stw r4, 0x760(r1)
/* 8038EF64 0038BEA4  EC 21 00 24 */	fdivs f1, f1, f0
/* 8038EF68 0038BEA8  C8 01 07 60 */	lfd f0, 0x760(r1)
/* 8038EF6C 0038BEAC  EC 00 10 28 */	fsubs f0, f0, f2
/* 8038EF70 0038BEB0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038EF74 0038BEB4  FC 00 00 1E */	fctiwz f0, f0
/* 8038EF78 0038BEB8  D8 01 07 68 */	stfd f0, 0x768(r1)
/* 8038EF7C 0038BEBC  83 81 07 6C */	lwz r28, 0x76c(r1)
/* 8038EF80 0038BEC0  4B C9 50 2D */	bl __nwa__FUl
/* 8038EF84 0038BEC4  90 7F 00 98 */	stw r3, 0x98(r31)
/* 8038EF88 0038BEC8  3B 00 00 00 */	li r24, 0
/* 8038EF8C 0038BECC  3B 40 00 00 */	li r26, 0
.L_8038EF90:
/* 8038EF90 0038BED0  38 60 00 2C */	li r3, 0x2c
/* 8038EF94 0038BED4  4B C9 4F 11 */	bl __nw__FUl
/* 8038EF98 0038BED8  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 8038EF9C 0038BEDC  38 00 00 00 */	li r0, 0
/* 8038EFA0 0038BEE0  7C 18 C8 00 */	cmpw r24, r25
/* 8038EFA4 0038BEE4  7C 64 D1 2E */	stwx r3, r4, r26
/* 8038EFA8 0038BEE8  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038EFAC 0038BEEC  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038EFB0 0038BEF0  98 03 00 03 */	stb r0, 3(r3)
/* 8038EFB4 0038BEF4  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038EFB8 0038BEF8  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038EFBC 0038BEFC  98 03 00 02 */	stb r0, 2(r3)
/* 8038EFC0 0038BF00  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038EFC4 0038BF04  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038EFC8 0038BF08  98 03 00 01 */	stb r0, 1(r3)
/* 8038EFCC 0038BF0C  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038EFD0 0038BF10  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038EFD4 0038BF14  98 03 00 00 */	stb r0, 0(r3)
/* 8038EFD8 0038BF18  41 81 02 68 */	bgt .L_8038F240
/* 8038EFDC 0038BF1C  4B D3 A5 A5 */	bl rand
/* 8038EFE0 0038BF20  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038EFE4 0038BF24  3C 00 43 30 */	lis r0, 0x4330
/* 8038EFE8 0038BF28  90 61 07 6C */	stw r3, 0x76c(r1)
/* 8038EFEC 0038BF2C  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 8038EFF0 0038BF30  90 01 07 68 */	stw r0, 0x768(r1)
/* 8038EFF4 0038BF34  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038EFF8 0038BF38  C8 41 07 68 */	lfd f2, 0x768(r1)
/* 8038EFFC 0038BF3C  C0 02 0C A8 */	lfs f0, lbl_8051F008@sda21(r2)
/* 8038F000 0038BF40  EC 42 18 28 */	fsubs f2, f2, f3
/* 8038F004 0038BF44  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038F008 0038BF48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038F00C 0038BF4C  40 80 00 18 */	bge .L_8038F024
/* 8038F010 0038BF50  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F014 0038BF54  38 00 00 01 */	li r0, 1
/* 8038F018 0038BF58  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F01C 0038BF5C  98 03 00 03 */	stb r0, 3(r3)
/* 8038F020 0038BF60  48 00 00 34 */	b .L_8038F054
.L_8038F024:
/* 8038F024 0038BF64  C0 02 0C 3C */	lfs f0, lbl_8051EF9C@sda21(r2)
/* 8038F028 0038BF68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038F02C 0038BF6C  40 80 00 18 */	bge .L_8038F044
/* 8038F030 0038BF70  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F034 0038BF74  38 00 00 01 */	li r0, 1
/* 8038F038 0038BF78  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F03C 0038BF7C  98 03 00 02 */	stb r0, 2(r3)
/* 8038F040 0038BF80  48 00 00 14 */	b .L_8038F054
.L_8038F044:
/* 8038F044 0038BF84  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F048 0038BF88  38 00 00 01 */	li r0, 1
/* 8038F04C 0038BF8C  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F050 0038BF90  98 03 00 00 */	stb r0, 0(r3)
.L_8038F054:
/* 8038F054 0038BF94  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F058 0038BF98  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F05C 0038BF9C  88 03 00 03 */	lbz r0, 3(r3)
/* 8038F060 0038BFA0  28 00 00 00 */	cmplwi r0, 0
/* 8038F064 0038BFA4  40 82 00 48 */	bne .L_8038F0AC
/* 8038F068 0038BFA8  4B D3 A5 19 */	bl rand
/* 8038F06C 0038BFAC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038F070 0038BFB0  3C 00 43 30 */	lis r0, 0x4330
/* 8038F074 0038BFB4  90 61 07 6C */	stw r3, 0x76c(r1)
/* 8038F078 0038BFB8  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 8038F07C 0038BFBC  90 01 07 68 */	stw r0, 0x768(r1)
/* 8038F080 0038BFC0  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038F084 0038BFC4  C8 41 07 68 */	lfd f2, 0x768(r1)
/* 8038F088 0038BFC8  C0 02 0C 3C */	lfs f0, lbl_8051EF9C@sda21(r2)
/* 8038F08C 0038BFCC  EC 42 18 28 */	fsubs f2, f2, f3
/* 8038F090 0038BFD0  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038F094 0038BFD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038F098 0038BFD8  40 80 00 14 */	bge .L_8038F0AC
/* 8038F09C 0038BFDC  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F0A0 0038BFE0  38 00 00 01 */	li r0, 1
/* 8038F0A4 0038BFE4  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F0A8 0038BFE8  98 03 00 01 */	stb r0, 1(r3)
.L_8038F0AC:
/* 8038F0AC 0038BFEC  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8038F0B0 0038BFF0  7F 04 C3 78 */	mr r4, r24
/* 8038F0B4 0038BFF4  4B E9 EA 11 */	bl getStageData__Q34Game13ChallengeGame9StageListFi
/* 8038F0B8 0038BFF8  7C 7B 1B 79 */	or. r27, r3, r3
/* 8038F0BC 0038BFFC  41 82 01 84 */	beq .L_8038F240
/* 8038F0C0 0038C000  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 8038F0C4 0038C004  38 00 00 64 */	li r0, 0x64
/* 8038F0C8 0038C008  80 DB 00 6C */	lwz r6, 0x6c(r27)
/* 8038F0CC 0038C00C  38 7B 00 18 */	addi r3, r27, 0x18
/* 8038F0D0 0038C010  7C A4 D0 2E */	lwzx r5, r4, r26
/* 8038F0D4 0038C014  38 80 00 00 */	li r4, 0
/* 8038F0D8 0038C018  90 C5 00 04 */	stw r6, 4(r5)
/* 8038F0DC 0038C01C  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F0E0 0038C020  80 DB 00 64 */	lwz r6, 0x64(r27)
/* 8038F0E4 0038C024  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F0E8 0038C028  90 C5 00 0C */	stw r6, 0xc(r5)
/* 8038F0EC 0038C02C  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F0F0 0038C030  80 DB 00 68 */	lwz r6, 0x68(r27)
/* 8038F0F4 0038C034  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F0F8 0038C038  90 C5 00 08 */	stw r6, 8(r5)
/* 8038F0FC 0038C03C  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F100 0038C040  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F104 0038C044  90 05 00 10 */	stw r0, 0x10(r5)
/* 8038F108 0038C048  4B E6 24 89 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8038F10C 0038C04C  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F110 0038C050  38 80 00 02 */	li r4, 2
/* 8038F114 0038C054  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F118 0038C058  90 65 00 14 */	stw r3, 0x14(r5)
/* 8038F11C 0038C05C  38 7B 00 18 */	addi r3, r27, 0x18
/* 8038F120 0038C060  4B E6 24 71 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8038F124 0038C064  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F128 0038C068  38 80 00 04 */	li r4, 4
/* 8038F12C 0038C06C  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F130 0038C070  90 65 00 18 */	stw r3, 0x18(r5)
/* 8038F134 0038C074  38 7B 00 18 */	addi r3, r27, 0x18
/* 8038F138 0038C078  4B E6 24 59 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8038F13C 0038C07C  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F140 0038C080  38 80 00 03 */	li r4, 3
/* 8038F144 0038C084  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F148 0038C088  90 65 00 1C */	stw r3, 0x1c(r5)
/* 8038F14C 0038C08C  38 7B 00 18 */	addi r3, r27, 0x18
/* 8038F150 0038C090  4B E6 24 41 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8038F154 0038C094  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 8038F158 0038C098  38 00 FF FF */	li r0, -1
/* 8038F15C 0038C09C  7C 84 D0 2E */	lwzx r4, r4, r26
/* 8038F160 0038C0A0  90 64 00 20 */	stw r3, 0x20(r4)
/* 8038F164 0038C0A4  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F168 0038C0A8  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F16C 0038C0AC  90 03 00 24 */	stw r0, 0x24(r3)
/* 8038F170 0038C0B0  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F174 0038C0B4  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F178 0038C0B8  90 03 00 28 */	stw r0, 0x28(r3)
/* 8038F17C 0038C0BC  4B D3 A4 05 */	bl rand
/* 8038F180 0038C0C0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038F184 0038C0C4  3C 00 43 30 */	lis r0, 0x4330
/* 8038F188 0038C0C8  90 61 07 6C */	stw r3, 0x76c(r1)
/* 8038F18C 0038C0CC  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 8038F190 0038C0D0  90 01 07 68 */	stw r0, 0x768(r1)
/* 8038F194 0038C0D4  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038F198 0038C0D8  C8 41 07 68 */	lfd f2, 0x768(r1)
/* 8038F19C 0038C0DC  C0 02 0C 3C */	lfs f0, lbl_8051EF9C@sda21(r2)
/* 8038F1A0 0038C0E0  EC 42 18 28 */	fsubs f2, f2, f3
/* 8038F1A4 0038C0E4  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038F1A8 0038C0E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038F1AC 0038C0EC  40 80 00 94 */	bge .L_8038F240
/* 8038F1B0 0038C0F0  4B D3 A3 D1 */	bl rand
/* 8038F1B4 0038C0F4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038F1B8 0038C0F8  3C 00 43 30 */	lis r0, 0x4330
/* 8038F1BC 0038C0FC  90 61 07 6C */	stw r3, 0x76c(r1)
/* 8038F1C0 0038C100  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F1C4 0038C104  90 01 07 68 */	stw r0, 0x768(r1)
/* 8038F1C8 0038C108  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038F1CC 0038C10C  C8 01 07 68 */	lfd f0, 0x768(r1)
/* 8038F1D0 0038C110  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038F1D4 0038C114  EC 40 10 28 */	fsubs f2, f0, f2
/* 8038F1D8 0038C118  C0 02 0C F4 */	lfs f0, lbl_8051F054@sda21(r2)
/* 8038F1DC 0038C11C  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F1E0 0038C120  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038F1E4 0038C124  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038F1E8 0038C128  FC 00 00 1E */	fctiwz f0, f0
/* 8038F1EC 0038C12C  D8 01 07 60 */	stfd f0, 0x760(r1)
/* 8038F1F0 0038C130  80 01 07 64 */	lwz r0, 0x764(r1)
/* 8038F1F4 0038C134  90 03 00 24 */	stw r0, 0x24(r3)
/* 8038F1F8 0038C138  4B D3 A3 89 */	bl rand
/* 8038F1FC 0038C13C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038F200 0038C140  3C 00 43 30 */	lis r0, 0x4330
/* 8038F204 0038C144  90 61 07 5C */	stw r3, 0x75c(r1)
/* 8038F208 0038C148  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F20C 0038C14C  90 01 07 58 */	stw r0, 0x758(r1)
/* 8038F210 0038C150  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038F214 0038C154  C8 01 07 58 */	lfd f0, 0x758(r1)
/* 8038F218 0038C158  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038F21C 0038C15C  EC 40 10 28 */	fsubs f2, f0, f2
/* 8038F220 0038C160  C0 02 0C F4 */	lfs f0, lbl_8051F054@sda21(r2)
/* 8038F224 0038C164  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F228 0038C168  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038F22C 0038C16C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038F230 0038C170  FC 00 00 1E */	fctiwz f0, f0
/* 8038F234 0038C174  D8 01 07 50 */	stfd f0, 0x750(r1)
/* 8038F238 0038C178  80 01 07 54 */	lwz r0, 0x754(r1)
/* 8038F23C 0038C17C  90 03 00 28 */	stw r0, 0x28(r3)
.L_8038F240:
/* 8038F240 0038C180  3B 18 00 01 */	addi r24, r24, 1
/* 8038F244 0038C184  3B 5A 00 04 */	addi r26, r26, 4
/* 8038F248 0038C188  2C 18 00 1E */	cmpwi r24, 0x1e
/* 8038F24C 0038C18C  41 80 FD 44 */	blt .L_8038EF90
.L_8038F250:
/* 8038F250 0038C190  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 8038F254 0038C194  93 9F 00 FC */	stw r28, 0xfc(r31)
/* 8038F258 0038C198  38 03 66 67 */	addi r0, r3, 0x66666667@l
/* 8038F25C 0038C19C  38 60 00 18 */	li r3, 0x18
/* 8038F260 0038C1A0  7C 00 E0 96 */	mulhw r0, r0, r28
/* 8038F264 0038C1A4  C8 3E 00 F8 */	lfd f1, 0xf8(r30)
/* 8038F268 0038C1A8  C8 1E 01 00 */	lfd f0, 0x100(r30)
/* 8038F26C 0038C1AC  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 8038F270 0038C1B0  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8038F274 0038C1B4  7C 05 0E 70 */	srawi r5, r0, 1
/* 8038F278 0038C1B8  7C 00 0E 70 */	srawi r0, r0, 1
/* 8038F27C 0038C1BC  54 04 0F FE */	srwi r4, r0, 0x1f
/* 8038F280 0038C1C0  54 A6 0F FE */	srwi r6, r5, 0x1f
/* 8038F284 0038C1C4  7C 00 22 14 */	add r0, r0, r4
/* 8038F288 0038C1C8  1C 00 00 05 */	mulli r0, r0, 5
/* 8038F28C 0038C1CC  7C 85 32 14 */	add r4, r5, r6
/* 8038F290 0038C1D0  90 8D 99 7C */	stw r4, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038F294 0038C1D4  7C 00 E0 50 */	subf r0, r0, r28
/* 8038F298 0038C1D8  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038F29C 0038C1DC  4B C9 4C 09 */	bl __nw__FUl
/* 8038F2A0 0038C1E0  7C 60 1B 79 */	or. r0, r3, r3
/* 8038F2A4 0038C1E4  41 82 00 24 */	beq .L_8038F2C8
/* 8038F2A8 0038C1E8  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 8038F2AC 0038C1EC  3C A0 00 34 */	lis r5, 0x00343930@ha
/* 8038F2B0 0038C1F0  38 81 00 20 */	addi r4, r1, 0x20
/* 8038F2B4 0038C1F4  38 E0 00 02 */	li r7, 2
/* 8038F2B8 0038C1F8  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 8038F2BC 0038C1FC  38 A5 39 30 */	addi r5, r5, 0x00343930@l
/* 8038F2C0 0038C200  48 01 1E 89 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 8038F2C4 0038C204  7C 60 1B 78 */	mr r0, r3
.L_8038F2C8:
/* 8038F2C8 0038C208  90 1F 00 EC */	stw r0, 0xec(r31)
/* 8038F2CC 0038C20C  7F E3 FB 78 */	mr r3, r31
/* 8038F2D0 0038C210  48 0C 4C 21 */	bl getGamePad__Q26Screen7ObjBaseCFv
/* 8038F2D4 0038C214  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 8038F2D8 0038C218  3C 60 80 4E */	lis r3, mIconTexture__Q28Morimura16TChallengeSelect@ha
/* 8038F2DC 0038C21C  3A C3 4F 70 */	addi r22, r3, mIconTexture__Q28Morimura16TChallengeSelect@l
/* 8038F2E0 0038C220  3A A1 00 10 */	addi r21, r1, 0x10
/* 8038F2E4 0038C224  80 BE 01 64 */	lwz r5, 0x164(r30)
/* 8038F2E8 0038C228  3A E0 00 00 */	li r23, 0
/* 8038F2EC 0038C22C  80 9E 01 68 */	lwz r4, 0x168(r30)
/* 8038F2F0 0038C230  80 7E 01 6C */	lwz r3, 0x16c(r30)
/* 8038F2F4 0038C234  80 1E 01 70 */	lwz r0, 0x170(r30)
/* 8038F2F8 0038C238  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8038F2FC 0038C23C  90 81 00 14 */	stw r4, 0x14(r1)
/* 8038F300 0038C240  90 61 00 18 */	stw r3, 0x18(r1)
/* 8038F304 0038C244  90 01 00 1C */	stw r0, 0x1c(r1)
.L_8038F308:
/* 8038F308 0038C248  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 8038F30C 0038C24C  80 95 00 00 */	lwz r4, 0(r21)
/* 8038F310 0038C250  81 83 00 00 */	lwz r12, 0(r3)
/* 8038F314 0038C254  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038F318 0038C258  7D 89 03 A6 */	mtctr r12
/* 8038F31C 0038C25C  4E 80 04 21 */	bctrl 
/* 8038F320 0038C260  90 76 00 00 */	stw r3, 0(r22)
/* 8038F324 0038C264  80 16 00 00 */	lwz r0, 0(r22)
/* 8038F328 0038C268  28 00 00 00 */	cmplwi r0, 0
/* 8038F32C 0038C26C  40 82 00 18 */	bne .L_8038F344
/* 8038F330 0038C270  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038F334 0038C274  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038F338 0038C278  38 80 05 B8 */	li r4, 0x5b8
/* 8038F33C 0038C27C  4C C6 31 82 */	crclr 6
/* 8038F340 0038C280  4B C9 B3 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038F344:
/* 8038F344 0038C284  3A F7 00 01 */	addi r23, r23, 1
/* 8038F348 0038C288  3A D6 00 04 */	addi r22, r22, 4
/* 8038F34C 0038C28C  2C 17 00 04 */	cmpwi r23, 4
/* 8038F350 0038C290  3A B5 00 04 */	addi r21, r21, 4
/* 8038F354 0038C294  41 80 FF B4 */	blt .L_8038F308
/* 8038F358 0038C298  38 60 00 AC */	li r3, 0xac
/* 8038F35C 0038C29C  4B C9 4B 49 */	bl __nw__FUl
/* 8038F360 0038C2A0  7C 60 1B 79 */	or. r0, r3, r3
/* 8038F364 0038C2A4  41 82 00 14 */	beq .L_8038F378
/* 8038F368 0038C2A8  7F A4 EB 78 */	mr r4, r29
/* 8038F36C 0038C2AC  38 A0 00 00 */	li r5, 0
/* 8038F370 0038C2B0  4B FF E1 21 */	bl __ct__Q28Morimura24TChallengePlayModeScreenFP10JKRArchivei
/* 8038F374 0038C2B4  7C 60 1B 78 */	mr r0, r3
.L_8038F378:
/* 8038F378 0038C2B8  90 1F 00 84 */	stw r0, 0x84(r31)
/* 8038F37C 0038C2BC  38 9E 04 BC */	addi r4, r30, 0x4bc
/* 8038F380 0038C2C0  3C A0 00 02 */	lis r5, 2
/* 8038F384 0038C2C4  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8038F388 0038C2C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8038F38C 0038C2CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038F390 0038C2D0  7D 89 03 A6 */	mtctr r12
/* 8038F394 0038C2D4  4E 80 04 21 */	bctrl 
/* 8038F398 0038C2D8  38 60 00 30 */	li r3, 0x30
/* 8038F39C 0038C2DC  4B C9 4B 09 */	bl __nw__FUl
/* 8038F3A0 0038C2E0  7C 75 1B 79 */	or. r21, r3, r3
/* 8038F3A4 0038C2E4  41 82 00 1C */	beq .L_8038F3C0
/* 8038F3A8 0038C2E8  7F A4 EB 78 */	mr r4, r29
/* 8038F3AC 0038C2EC  38 A0 00 05 */	li r5, 5
/* 8038F3B0 0038C2F0  48 01 44 C1 */	bl __ct__Q28Morimura24TSelectExplanationWindowFP10JKRArchivei
/* 8038F3B4 0038C2F4  3C 60 80 4E */	lis r3, __vt__Q28Morimura33TChallengeSelectExplanationWindow@ha
/* 8038F3B8 0038C2F8  38 03 50 9C */	addi r0, r3, __vt__Q28Morimura33TChallengeSelectExplanationWindow@l
/* 8038F3BC 0038C2FC  90 15 00 00 */	stw r0, 0(r21)
.L_8038F3C0:
/* 8038F3C0 0038C300  92 BF 00 88 */	stw r21, 0x88(r31)
/* 8038F3C4 0038C304  38 9E 04 D8 */	addi r4, r30, 0x4d8
/* 8038F3C8 0038C308  3C A0 01 04 */	lis r5, 0x104
/* 8038F3CC 0038C30C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F3D0 0038C310  81 83 00 00 */	lwz r12, 0(r3)
/* 8038F3D4 0038C314  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038F3D8 0038C318  7D 89 03 A6 */	mtctr r12
/* 8038F3DC 0038C31C  4E 80 04 21 */	bctrl 
/* 8038F3E0 0038C320  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F3E4 0038C324  38 9E 04 F4 */	addi r4, r30, 0x4f4
/* 8038F3E8 0038C328  48 01 20 DD */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F3EC 0038C32C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F3F0 0038C330  38 9E 05 10 */	addi r4, r30, 0x510
/* 8038F3F4 0038C334  48 01 20 D1 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F3F8 0038C338  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F3FC 0038C33C  38 9E 05 30 */	addi r4, r30, 0x530
/* 8038F400 0038C340  48 01 20 C5 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F404 0038C344  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F408 0038C348  38 9E 05 50 */	addi r4, r30, 0x550
/* 8038F40C 0038C34C  48 01 20 B9 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F410 0038C350  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F414 0038C354  38 9E 05 70 */	addi r4, r30, 0x570
/* 8038F418 0038C358  48 01 20 AD */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F41C 0038C35C  38 60 00 14 */	li r3, 0x14
/* 8038F420 0038C360  4B C9 4A 85 */	bl __nw__FUl
/* 8038F424 0038C364  28 03 00 00 */	cmplwi r3, 0
/* 8038F428 0038C368  41 82 00 68 */	beq .L_8038F490
/* 8038F42C 0038C36C  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 8038F430 0038C370  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 8038F434 0038C374  38 05 14 30 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 8038F438 0038C378  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 8038F43C 0038C37C  90 03 00 00 */	stw r0, 0(r3)
/* 8038F440 0038C380  38 04 14 18 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 8038F444 0038C384  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 8038F448 0038C388  3C 80 80 4E */	lis r4, __vt__Q25efx2d11T2DChalDive@ha
/* 8038F44C 0038C38C  90 03 00 00 */	stw r0, 0(r3)
/* 8038F450 0038C390  39 20 00 00 */	li r9, 0
/* 8038F454 0038C394  38 E5 73 60 */	addi r7, r5, __vt__Q25efx2d8TForever@l
/* 8038F458 0038C398  38 84 4F E8 */	addi r4, r4, __vt__Q25efx2d11T2DChalDive@l
/* 8038F45C 0038C39C  99 23 00 04 */	stb r9, 4(r3)
/* 8038F460 0038C3A0  39 06 E1 7C */	addi r8, r6, __vt__18JPAEmitterCallBack@l
/* 8038F464 0038C3A4  38 C7 00 18 */	addi r6, r7, 0x18
/* 8038F468 0038C3A8  38 A0 00 05 */	li r5, 5
/* 8038F46C 0038C3AC  99 23 00 05 */	stb r9, 5(r3)
/* 8038F470 0038C3B0  38 04 00 18 */	addi r0, r4, 0x18
/* 8038F474 0038C3B4  91 03 00 08 */	stw r8, 8(r3)
/* 8038F478 0038C3B8  90 E3 00 00 */	stw r7, 0(r3)
/* 8038F47C 0038C3BC  90 C3 00 08 */	stw r6, 8(r3)
/* 8038F480 0038C3C0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8038F484 0038C3C4  91 23 00 10 */	stw r9, 0x10(r3)
/* 8038F488 0038C3C8  90 83 00 00 */	stw r4, 0(r3)
/* 8038F48C 0038C3CC  90 03 00 08 */	stw r0, 8(r3)
.L_8038F490:
/* 8038F490 0038C3D0  90 7F 00 F0 */	stw r3, 0xf0(r31)
/* 8038F494 0038C3D4  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 8038F498 0038C3D8  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8038F49C 0038C3DC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8038F4A0 0038C3E0  4B C9 41 05 */	bl becomeCurrentHeap__7JKRHeapFv
/* 8038F4A4 0038C3E4  38 60 00 2C */	li r3, 0x2c
/* 8038F4A8 0038C3E8  4B C9 49 FD */	bl __nw__FUl
/* 8038F4AC 0038C3EC  7C 75 1B 79 */	or. r21, r3, r3
/* 8038F4B0 0038C3F0  41 82 00 80 */	beq .L_8038F530
/* 8038F4B4 0038C3F4  7F A4 EB 78 */	mr r4, r29
/* 8038F4B8 0038C3F8  38 A0 00 0A */	li r5, 0xa
/* 8038F4BC 0038C3FC  48 01 1F 51 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8038F4C0 0038C400  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TChallengeScreen@ha
/* 8038F4C4 0038C404  38 00 00 00 */	li r0, 0
/* 8038F4C8 0038C408  38 63 50 C8 */	addi r3, r3, __vt__Q28Morimura16TChallengeScreen@l
/* 8038F4CC 0038C40C  90 75 00 00 */	stw r3, 0(r21)
/* 8038F4D0 0038C410  90 15 00 18 */	stw r0, 0x18(r21)
/* 8038F4D4 0038C414  90 15 00 20 */	stw r0, 0x20(r21)
/* 8038F4D8 0038C418  98 15 00 28 */	stb r0, 0x28(r21)
/* 8038F4DC 0038C41C  4B D3 A0 A5 */	bl rand
/* 8038F4E0 0038C420  3C 80 43 30 */	lis r4, 0x4330
/* 8038F4E4 0038C424  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8038F4E8 0038C428  90 01 07 6C */	stw r0, 0x76c(r1)
/* 8038F4EC 0038C42C  A8 0D 85 C8 */	lha r0, mFlashAnimInterval__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038F4F0 0038C430  90 81 07 68 */	stw r4, 0x768(r1)
/* 8038F4F4 0038C434  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038F4F8 0038C438  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8038F4FC 0038C43C  C8 21 07 68 */	lfd f1, 0x768(r1)
/* 8038F500 0038C440  C0 02 0C 30 */	lfs f0, lbl_8051EF90@sda21(r2)
/* 8038F504 0038C444  EC 21 10 28 */	fsubs f1, f1, f2
/* 8038F508 0038C448  90 01 07 64 */	stw r0, 0x764(r1)
/* 8038F50C 0038C44C  90 81 07 60 */	stw r4, 0x760(r1)
/* 8038F510 0038C450  EC 21 00 24 */	fdivs f1, f1, f0
/* 8038F514 0038C454  C8 01 07 60 */	lfd f0, 0x760(r1)
/* 8038F518 0038C458  EC 00 10 28 */	fsubs f0, f0, f2
/* 8038F51C 0038C45C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038F520 0038C460  FC 00 00 1E */	fctiwz f0, f0
/* 8038F524 0038C464  D8 01 07 58 */	stfd f0, 0x758(r1)
/* 8038F528 0038C468  80 01 07 5C */	lwz r0, 0x75c(r1)
/* 8038F52C 0038C46C  90 15 00 24 */	stw r0, 0x24(r21)
.L_8038F530:
/* 8038F530 0038C470  92 BF 00 80 */	stw r21, 0x80(r31)
/* 8038F534 0038C474  38 9E 05 90 */	addi r4, r30, 0x590
/* 8038F538 0038C478  3C A0 01 04 */	lis r5, 0x104
/* 8038F53C 0038C47C  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F540 0038C480  81 83 00 00 */	lwz r12, 0(r3)
/* 8038F544 0038C484  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038F548 0038C488  7D 89 03 A6 */	mtctr r12
/* 8038F54C 0038C48C  4E 80 04 21 */	bctrl 
/* 8038F550 0038C490  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F554 0038C494  38 9E 05 AC */	addi r4, r30, 0x5ac
/* 8038F558 0038C498  81 83 00 00 */	lwz r12, 0(r3)
/* 8038F55C 0038C49C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038F560 0038C4A0  7D 89 03 A6 */	mtctr r12
/* 8038F564 0038C4A4  4E 80 04 21 */	bctrl 
/* 8038F568 0038C4A8  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F56C 0038C4AC  38 9E 05 AC */	addi r4, r30, 0x5ac
/* 8038F570 0038C4B0  48 01 1F 55 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F574 0038C4B4  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F578 0038C4B8  38 9E 05 C8 */	addi r4, r30, 0x5c8
/* 8038F57C 0038C4BC  48 01 1F 49 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F580 0038C4C0  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F584 0038C4C4  38 9E 05 E4 */	addi r4, r30, 0x5e4
/* 8038F588 0038C4C8  48 01 1F 3D */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F58C 0038C4CC  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F590 0038C4D0  38 9E 06 00 */	addi r4, r30, 0x600
/* 8038F594 0038C4D4  48 01 1F 31 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F598 0038C4D8  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F59C 0038C4DC  38 9E 06 1C */	addi r4, r30, 0x61c
/* 8038F5A0 0038C4E0  48 01 1F 25 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F5A4 0038C4E4  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F5A8 0038C4E8  38 9E 06 38 */	addi r4, r30, 0x638
/* 8038F5AC 0038C4EC  48 01 1F 19 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F5B0 0038C4F0  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F5B4 0038C4F4  38 9E 06 54 */	addi r4, r30, 0x654
/* 8038F5B8 0038C4F8  48 01 1F 0D */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F5BC 0038C4FC  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F5C0 0038C500  38 9E 06 70 */	addi r4, r30, 0x670
/* 8038F5C4 0038C504  48 01 1F 01 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F5C8 0038C508  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F5CC 0038C50C  38 9E 06 8C */	addi r4, r30, 0x68c
/* 8038F5D0 0038C510  48 01 1E F5 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F5D4 0038C514  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F5D8 0038C518  38 9E 06 A8 */	addi r4, r30, 0x6a8
/* 8038F5DC 0038C51C  48 01 1E E9 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F5E0 0038C520  80 9F 00 80 */	lwz r4, 0x80(r31)
/* 8038F5E4 0038C524  38 60 07 34 */	li r3, 0x734
/* 8038F5E8 0038C528  83 A4 00 08 */	lwz r29, 8(r4)
/* 8038F5EC 0038C52C  4B C9 48 B9 */	bl __nw__FUl
/* 8038F5F0 0038C530  7C 7A 1B 79 */	or. r26, r3, r3
/* 8038F5F4 0038C534  41 82 01 F0 */	beq .L_8038F7E4
/* 8038F5F8 0038C538  7F A3 EB 78 */	mr r3, r29
/* 8038F5FC 0038C53C  3C 80 72 5F */	lis r4, 0x725F6677@ha
/* 8038F600 0038C540  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F604 0038C544  38 C4 66 77 */	addi r6, r4, 0x725F6677@l
/* 8038F608 0038C548  38 A0 00 50 */	li r5, 0x50
/* 8038F60C 0038C54C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F610 0038C550  7D 89 03 A6 */	mtctr r12
/* 8038F614 0038C554  4E 80 04 21 */	bctrl 
/* 8038F618 0038C558  7C 7B 1B 78 */	mr r27, r3
/* 8038F61C 0038C55C  7F A3 EB 78 */	mr r3, r29
/* 8038F620 0038C560  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F624 0038C564  3C A0 70 6B */	lis r5, 0x706B5F72@ha
/* 8038F628 0038C568  3C 80 00 50 */	lis r4, 0x0050725F@ha
/* 8038F62C 0038C56C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F630 0038C570  38 C5 5F 72 */	addi r6, r5, 0x706B5F72@l
/* 8038F634 0038C574  38 A4 72 5F */	addi r5, r4, 0x0050725F@l
/* 8038F638 0038C578  7D 89 03 A6 */	mtctr r12
/* 8038F63C 0038C57C  4E 80 04 21 */	bctrl 
/* 8038F640 0038C580  7C 76 1B 78 */	mr r22, r3
/* 8038F644 0038C584  7F A3 EB 78 */	mr r3, r29
/* 8038F648 0038C588  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F64C 0038C58C  3C A0 70 6B */	lis r5, 0x706B5F6C@ha
/* 8038F650 0038C590  3C 80 00 50 */	lis r4, 0x0050725F@ha
/* 8038F654 0038C594  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F658 0038C598  38 C5 5F 6C */	addi r6, r5, 0x706B5F6C@l
/* 8038F65C 0038C59C  38 A4 72 5F */	addi r5, r4, 0x0050725F@l
/* 8038F660 0038C5A0  7D 89 03 A6 */	mtctr r12
/* 8038F664 0038C5A4  4E 80 04 21 */	bctrl 
/* 8038F668 0038C5A8  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8038F66C 0038C5AC  7C 75 1B 78 */	mr r21, r3
/* 8038F670 0038C5B0  38 84 D0 EC */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8038F674 0038C5B4  38 7A 00 14 */	addi r3, r26, 0x14
/* 8038F678 0038C5B8  38 A0 00 00 */	li r5, 0
/* 8038F67C 0038C5BC  38 C0 00 08 */	li r6, 8
/* 8038F680 0038C5C0  38 E0 00 02 */	li r7, 2
/* 8038F684 0038C5C4  4B D3 21 99 */	bl __construct_array
/* 8038F688 0038C5C8  3C 80 80 39 */	lis r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
/* 8038F68C 0038C5CC  38 7A 00 24 */	addi r3, r26, 0x24
/* 8038F690 0038C5D0  38 84 C4 BC */	addi r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
/* 8038F694 0038C5D4  38 A0 00 00 */	li r5, 0
/* 8038F698 0038C5D8  38 C0 00 24 */	li r6, 0x24
/* 8038F69C 0038C5DC  38 E0 00 32 */	li r7, 0x32
/* 8038F6A0 0038C5E0  4B D3 21 7D */	bl __construct_array
/* 8038F6A4 0038C5E4  3A E0 00 00 */	li r23, 0
/* 8038F6A8 0038C5E8  7F 58 D3 78 */	mr r24, r26
/* 8038F6AC 0038C5EC  92 FA 07 2C */	stw r23, 0x72c(r26)
/* 8038F6B0 0038C5F0  92 BA 00 00 */	stw r21, 0(r26)
/* 8038F6B4 0038C5F4  92 DA 00 04 */	stw r22, 4(r26)
/* 8038F6B8 0038C5F8  93 7A 00 08 */	stw r27, 8(r26)
.L_8038F6BC:
/* 8038F6BC 0038C5FC  80 18 00 00 */	lwz r0, 0(r24)
/* 8038F6C0 0038C600  28 00 00 00 */	cmplwi r0, 0
/* 8038F6C4 0038C604  40 82 00 18 */	bne .L_8038F6DC
/* 8038F6C8 0038C608  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038F6CC 0038C60C  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038F6D0 0038C610  38 80 00 48 */	li r4, 0x48
/* 8038F6D4 0038C614  4C C6 31 82 */	crclr 6
/* 8038F6D8 0038C618  4B C9 AF 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038F6DC:
/* 8038F6DC 0038C61C  3A F7 00 01 */	addi r23, r23, 1
/* 8038F6E0 0038C620  3B 18 00 04 */	addi r24, r24, 4
/* 8038F6E4 0038C624  2C 17 00 03 */	cmpwi r23, 3
/* 8038F6E8 0038C628  41 80 FF D4 */	blt .L_8038F6BC
/* 8038F6EC 0038C62C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038F6F0 0038C630  38 A0 00 30 */	li r5, 0x30
/* 8038F6F4 0038C634  1C 65 00 24 */	mulli r3, r5, 0x24
/* 8038F6F8 0038C638  38 80 00 00 */	li r4, 0
/* 8038F6FC 0038C63C  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8038F700 0038C640  20 05 00 32 */	subfic r0, r5, 0x32
/* 8038F704 0038C644  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8038F708 0038C648  7C 7A 1A 14 */	add r3, r26, r3
/* 8038F70C 0038C64C  D0 1A 07 30 */	stfs f0, 0x730(r26)
/* 8038F710 0038C650  90 9A 00 24 */	stw r4, 0x24(r26)
/* 8038F714 0038C654  90 9A 00 48 */	stw r4, 0x48(r26)
/* 8038F718 0038C658  90 9A 00 6C */	stw r4, 0x6c(r26)
/* 8038F71C 0038C65C  90 9A 00 90 */	stw r4, 0x90(r26)
/* 8038F720 0038C660  90 9A 00 B4 */	stw r4, 0xb4(r26)
/* 8038F724 0038C664  90 9A 00 D8 */	stw r4, 0xd8(r26)
/* 8038F728 0038C668  90 9A 00 FC */	stw r4, 0xfc(r26)
/* 8038F72C 0038C66C  90 9A 01 20 */	stw r4, 0x120(r26)
/* 8038F730 0038C670  90 9A 01 44 */	stw r4, 0x144(r26)
/* 8038F734 0038C674  90 9A 01 68 */	stw r4, 0x168(r26)
/* 8038F738 0038C678  90 9A 01 8C */	stw r4, 0x18c(r26)
/* 8038F73C 0038C67C  90 9A 01 B0 */	stw r4, 0x1b0(r26)
/* 8038F740 0038C680  90 9A 01 D4 */	stw r4, 0x1d4(r26)
/* 8038F744 0038C684  90 9A 01 F8 */	stw r4, 0x1f8(r26)
/* 8038F748 0038C688  90 9A 02 1C */	stw r4, 0x21c(r26)
/* 8038F74C 0038C68C  90 9A 02 40 */	stw r4, 0x240(r26)
/* 8038F750 0038C690  90 9A 02 64 */	stw r4, 0x264(r26)
/* 8038F754 0038C694  90 9A 02 88 */	stw r4, 0x288(r26)
/* 8038F758 0038C698  90 9A 02 AC */	stw r4, 0x2ac(r26)
/* 8038F75C 0038C69C  90 9A 02 D0 */	stw r4, 0x2d0(r26)
/* 8038F760 0038C6A0  90 9A 02 F4 */	stw r4, 0x2f4(r26)
/* 8038F764 0038C6A4  90 9A 03 18 */	stw r4, 0x318(r26)
/* 8038F768 0038C6A8  90 9A 03 3C */	stw r4, 0x33c(r26)
/* 8038F76C 0038C6AC  90 9A 03 60 */	stw r4, 0x360(r26)
/* 8038F770 0038C6B0  90 9A 03 84 */	stw r4, 0x384(r26)
/* 8038F774 0038C6B4  90 9A 03 A8 */	stw r4, 0x3a8(r26)
/* 8038F778 0038C6B8  90 9A 03 CC */	stw r4, 0x3cc(r26)
/* 8038F77C 0038C6BC  90 9A 03 F0 */	stw r4, 0x3f0(r26)
/* 8038F780 0038C6C0  90 9A 04 14 */	stw r4, 0x414(r26)
/* 8038F784 0038C6C4  90 9A 04 38 */	stw r4, 0x438(r26)
/* 8038F788 0038C6C8  90 9A 04 5C */	stw r4, 0x45c(r26)
/* 8038F78C 0038C6CC  90 9A 04 80 */	stw r4, 0x480(r26)
/* 8038F790 0038C6D0  90 9A 04 A4 */	stw r4, 0x4a4(r26)
/* 8038F794 0038C6D4  90 9A 04 C8 */	stw r4, 0x4c8(r26)
/* 8038F798 0038C6D8  90 9A 04 EC */	stw r4, 0x4ec(r26)
/* 8038F79C 0038C6DC  90 9A 05 10 */	stw r4, 0x510(r26)
/* 8038F7A0 0038C6E0  90 9A 05 34 */	stw r4, 0x534(r26)
/* 8038F7A4 0038C6E4  90 9A 05 58 */	stw r4, 0x558(r26)
/* 8038F7A8 0038C6E8  90 9A 05 7C */	stw r4, 0x57c(r26)
/* 8038F7AC 0038C6EC  90 9A 05 A0 */	stw r4, 0x5a0(r26)
/* 8038F7B0 0038C6F0  90 9A 05 C4 */	stw r4, 0x5c4(r26)
/* 8038F7B4 0038C6F4  90 9A 05 E8 */	stw r4, 0x5e8(r26)
/* 8038F7B8 0038C6F8  90 9A 06 0C */	stw r4, 0x60c(r26)
/* 8038F7BC 0038C6FC  90 9A 06 30 */	stw r4, 0x630(r26)
/* 8038F7C0 0038C700  90 9A 06 54 */	stw r4, 0x654(r26)
/* 8038F7C4 0038C704  90 9A 06 78 */	stw r4, 0x678(r26)
/* 8038F7C8 0038C708  90 9A 06 9C */	stw r4, 0x69c(r26)
/* 8038F7CC 0038C70C  90 9A 06 C0 */	stw r4, 0x6c0(r26)
/* 8038F7D0 0038C710  7C 09 03 A6 */	mtctr r0
/* 8038F7D4 0038C714  2C 05 00 32 */	cmpwi r5, 0x32
/* 8038F7D8 0038C718  40 80 00 0C */	bge .L_8038F7E4
.L_8038F7DC:
/* 8038F7DC 0038C71C  94 83 00 24 */	stwu r4, 0x24(r3)
/* 8038F7E0 0038C720  42 00 FF FC */	bdnz .L_8038F7DC
.L_8038F7E4:
/* 8038F7E4 0038C724  93 5F 00 9C */	stw r26, 0x9c(r31)
/* 8038F7E8 0038C728  38 60 07 34 */	li r3, 0x734
/* 8038F7EC 0038C72C  4B C9 46 B9 */	bl __nw__FUl
/* 8038F7F0 0038C730  7C 7A 1B 79 */	or. r26, r3, r3
/* 8038F7F4 0038C734  41 82 01 F0 */	beq .L_8038F9E4
/* 8038F7F8 0038C738  7F A3 EB 78 */	mr r3, r29
/* 8038F7FC 0038C73C  3C 80 79 5F */	lis r4, 0x795F6677@ha
/* 8038F800 0038C740  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F804 0038C744  38 C4 66 77 */	addi r6, r4, 0x795F6677@l
/* 8038F808 0038C748  38 A0 00 50 */	li r5, 0x50
/* 8038F80C 0038C74C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F810 0038C750  7D 89 03 A6 */	mtctr r12
/* 8038F814 0038C754  4E 80 04 21 */	bctrl 
/* 8038F818 0038C758  7C 7B 1B 78 */	mr r27, r3
/* 8038F81C 0038C75C  7F A3 EB 78 */	mr r3, r29
/* 8038F820 0038C760  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F824 0038C764  3C A0 70 6B */	lis r5, 0x706B5F72@ha
/* 8038F828 0038C768  3C 80 00 50 */	lis r4, 0x0050795F@ha
/* 8038F82C 0038C76C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F830 0038C770  38 C5 5F 72 */	addi r6, r5, 0x706B5F72@l
/* 8038F834 0038C774  38 A4 79 5F */	addi r5, r4, 0x0050795F@l
/* 8038F838 0038C778  7D 89 03 A6 */	mtctr r12
/* 8038F83C 0038C77C  4E 80 04 21 */	bctrl 
/* 8038F840 0038C780  7C 76 1B 78 */	mr r22, r3
/* 8038F844 0038C784  7F A3 EB 78 */	mr r3, r29
/* 8038F848 0038C788  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F84C 0038C78C  3C A0 70 6B */	lis r5, 0x706B5F6C@ha
/* 8038F850 0038C790  3C 80 00 50 */	lis r4, 0x0050795F@ha
/* 8038F854 0038C794  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F858 0038C798  38 C5 5F 6C */	addi r6, r5, 0x706B5F6C@l
/* 8038F85C 0038C79C  38 A4 79 5F */	addi r5, r4, 0x0050795F@l
/* 8038F860 0038C7A0  7D 89 03 A6 */	mtctr r12
/* 8038F864 0038C7A4  4E 80 04 21 */	bctrl 
/* 8038F868 0038C7A8  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8038F86C 0038C7AC  7C 75 1B 78 */	mr r21, r3
/* 8038F870 0038C7B0  38 84 D0 EC */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8038F874 0038C7B4  38 7A 00 14 */	addi r3, r26, 0x14
/* 8038F878 0038C7B8  38 A0 00 00 */	li r5, 0
/* 8038F87C 0038C7BC  38 C0 00 08 */	li r6, 8
/* 8038F880 0038C7C0  38 E0 00 02 */	li r7, 2
/* 8038F884 0038C7C4  4B D3 1F 99 */	bl __construct_array
/* 8038F888 0038C7C8  3C 80 80 39 */	lis r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
/* 8038F88C 0038C7CC  38 7A 00 24 */	addi r3, r26, 0x24
/* 8038F890 0038C7D0  38 84 C4 BC */	addi r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
/* 8038F894 0038C7D4  38 A0 00 00 */	li r5, 0
/* 8038F898 0038C7D8  38 C0 00 24 */	li r6, 0x24
/* 8038F89C 0038C7DC  38 E0 00 32 */	li r7, 0x32
/* 8038F8A0 0038C7E0  4B D3 1F 7D */	bl __construct_array
/* 8038F8A4 0038C7E4  3A E0 00 00 */	li r23, 0
/* 8038F8A8 0038C7E8  7F 58 D3 78 */	mr r24, r26
/* 8038F8AC 0038C7EC  92 FA 07 2C */	stw r23, 0x72c(r26)
/* 8038F8B0 0038C7F0  92 BA 00 00 */	stw r21, 0(r26)
/* 8038F8B4 0038C7F4  92 DA 00 04 */	stw r22, 4(r26)
/* 8038F8B8 0038C7F8  93 7A 00 08 */	stw r27, 8(r26)
.L_8038F8BC:
/* 8038F8BC 0038C7FC  80 18 00 00 */	lwz r0, 0(r24)
/* 8038F8C0 0038C800  28 00 00 00 */	cmplwi r0, 0
/* 8038F8C4 0038C804  40 82 00 18 */	bne .L_8038F8DC
/* 8038F8C8 0038C808  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038F8CC 0038C80C  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038F8D0 0038C810  38 80 00 48 */	li r4, 0x48
/* 8038F8D4 0038C814  4C C6 31 82 */	crclr 6
/* 8038F8D8 0038C818  4B C9 AD 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038F8DC:
/* 8038F8DC 0038C81C  3A F7 00 01 */	addi r23, r23, 1
/* 8038F8E0 0038C820  3B 18 00 04 */	addi r24, r24, 4
/* 8038F8E4 0038C824  2C 17 00 03 */	cmpwi r23, 3
/* 8038F8E8 0038C828  41 80 FF D4 */	blt .L_8038F8BC
/* 8038F8EC 0038C82C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038F8F0 0038C830  38 A0 00 30 */	li r5, 0x30
/* 8038F8F4 0038C834  1C 65 00 24 */	mulli r3, r5, 0x24
/* 8038F8F8 0038C838  38 80 00 00 */	li r4, 0
/* 8038F8FC 0038C83C  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8038F900 0038C840  20 05 00 32 */	subfic r0, r5, 0x32
/* 8038F904 0038C844  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8038F908 0038C848  7C 7A 1A 14 */	add r3, r26, r3
/* 8038F90C 0038C84C  D0 1A 07 30 */	stfs f0, 0x730(r26)
/* 8038F910 0038C850  90 9A 00 24 */	stw r4, 0x24(r26)
/* 8038F914 0038C854  90 9A 00 48 */	stw r4, 0x48(r26)
/* 8038F918 0038C858  90 9A 00 6C */	stw r4, 0x6c(r26)
/* 8038F91C 0038C85C  90 9A 00 90 */	stw r4, 0x90(r26)
/* 8038F920 0038C860  90 9A 00 B4 */	stw r4, 0xb4(r26)
/* 8038F924 0038C864  90 9A 00 D8 */	stw r4, 0xd8(r26)
/* 8038F928 0038C868  90 9A 00 FC */	stw r4, 0xfc(r26)
/* 8038F92C 0038C86C  90 9A 01 20 */	stw r4, 0x120(r26)
/* 8038F930 0038C870  90 9A 01 44 */	stw r4, 0x144(r26)
/* 8038F934 0038C874  90 9A 01 68 */	stw r4, 0x168(r26)
/* 8038F938 0038C878  90 9A 01 8C */	stw r4, 0x18c(r26)
/* 8038F93C 0038C87C  90 9A 01 B0 */	stw r4, 0x1b0(r26)
/* 8038F940 0038C880  90 9A 01 D4 */	stw r4, 0x1d4(r26)
/* 8038F944 0038C884  90 9A 01 F8 */	stw r4, 0x1f8(r26)
/* 8038F948 0038C888  90 9A 02 1C */	stw r4, 0x21c(r26)
/* 8038F94C 0038C88C  90 9A 02 40 */	stw r4, 0x240(r26)
/* 8038F950 0038C890  90 9A 02 64 */	stw r4, 0x264(r26)
/* 8038F954 0038C894  90 9A 02 88 */	stw r4, 0x288(r26)
/* 8038F958 0038C898  90 9A 02 AC */	stw r4, 0x2ac(r26)
/* 8038F95C 0038C89C  90 9A 02 D0 */	stw r4, 0x2d0(r26)
/* 8038F960 0038C8A0  90 9A 02 F4 */	stw r4, 0x2f4(r26)
/* 8038F964 0038C8A4  90 9A 03 18 */	stw r4, 0x318(r26)
/* 8038F968 0038C8A8  90 9A 03 3C */	stw r4, 0x33c(r26)
/* 8038F96C 0038C8AC  90 9A 03 60 */	stw r4, 0x360(r26)
/* 8038F970 0038C8B0  90 9A 03 84 */	stw r4, 0x384(r26)
/* 8038F974 0038C8B4  90 9A 03 A8 */	stw r4, 0x3a8(r26)
/* 8038F978 0038C8B8  90 9A 03 CC */	stw r4, 0x3cc(r26)
/* 8038F97C 0038C8BC  90 9A 03 F0 */	stw r4, 0x3f0(r26)
/* 8038F980 0038C8C0  90 9A 04 14 */	stw r4, 0x414(r26)
/* 8038F984 0038C8C4  90 9A 04 38 */	stw r4, 0x438(r26)
/* 8038F988 0038C8C8  90 9A 04 5C */	stw r4, 0x45c(r26)
/* 8038F98C 0038C8CC  90 9A 04 80 */	stw r4, 0x480(r26)
/* 8038F990 0038C8D0  90 9A 04 A4 */	stw r4, 0x4a4(r26)
/* 8038F994 0038C8D4  90 9A 04 C8 */	stw r4, 0x4c8(r26)
/* 8038F998 0038C8D8  90 9A 04 EC */	stw r4, 0x4ec(r26)
/* 8038F99C 0038C8DC  90 9A 05 10 */	stw r4, 0x510(r26)
/* 8038F9A0 0038C8E0  90 9A 05 34 */	stw r4, 0x534(r26)
/* 8038F9A4 0038C8E4  90 9A 05 58 */	stw r4, 0x558(r26)
/* 8038F9A8 0038C8E8  90 9A 05 7C */	stw r4, 0x57c(r26)
/* 8038F9AC 0038C8EC  90 9A 05 A0 */	stw r4, 0x5a0(r26)
/* 8038F9B0 0038C8F0  90 9A 05 C4 */	stw r4, 0x5c4(r26)
/* 8038F9B4 0038C8F4  90 9A 05 E8 */	stw r4, 0x5e8(r26)
/* 8038F9B8 0038C8F8  90 9A 06 0C */	stw r4, 0x60c(r26)
/* 8038F9BC 0038C8FC  90 9A 06 30 */	stw r4, 0x630(r26)
/* 8038F9C0 0038C900  90 9A 06 54 */	stw r4, 0x654(r26)
/* 8038F9C4 0038C904  90 9A 06 78 */	stw r4, 0x678(r26)
/* 8038F9C8 0038C908  90 9A 06 9C */	stw r4, 0x69c(r26)
/* 8038F9CC 0038C90C  90 9A 06 C0 */	stw r4, 0x6c0(r26)
/* 8038F9D0 0038C910  7C 09 03 A6 */	mtctr r0
/* 8038F9D4 0038C914  2C 05 00 32 */	cmpwi r5, 0x32
/* 8038F9D8 0038C918  40 80 00 0C */	bge .L_8038F9E4
.L_8038F9DC:
/* 8038F9DC 0038C91C  94 83 00 24 */	stwu r4, 0x24(r3)
/* 8038F9E0 0038C920  42 00 FF FC */	bdnz .L_8038F9DC
.L_8038F9E4:
/* 8038F9E4 0038C924  93 5F 00 A0 */	stw r26, 0xa0(r31)
/* 8038F9E8 0038C928  38 60 07 34 */	li r3, 0x734
/* 8038F9EC 0038C92C  4B C9 44 B9 */	bl __nw__FUl
/* 8038F9F0 0038C930  7C 7A 1B 79 */	or. r26, r3, r3
/* 8038F9F4 0038C934  41 82 01 F0 */	beq .L_8038FBE4
/* 8038F9F8 0038C938  7F A3 EB 78 */	mr r3, r29
/* 8038F9FC 0038C93C  3C 80 62 5F */	lis r4, 0x625F6677@ha
/* 8038FA00 0038C940  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FA04 0038C944  38 C4 66 77 */	addi r6, r4, 0x625F6677@l
/* 8038FA08 0038C948  38 A0 00 50 */	li r5, 0x50
/* 8038FA0C 0038C94C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FA10 0038C950  7D 89 03 A6 */	mtctr r12
/* 8038FA14 0038C954  4E 80 04 21 */	bctrl 
/* 8038FA18 0038C958  7C 7B 1B 78 */	mr r27, r3
/* 8038FA1C 0038C95C  7F A3 EB 78 */	mr r3, r29
/* 8038FA20 0038C960  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FA24 0038C964  3C A0 70 6B */	lis r5, 0x706B5F72@ha
/* 8038FA28 0038C968  3C 80 00 50 */	lis r4, 0x0050625F@ha
/* 8038FA2C 0038C96C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FA30 0038C970  38 C5 5F 72 */	addi r6, r5, 0x706B5F72@l
/* 8038FA34 0038C974  38 A4 62 5F */	addi r5, r4, 0x0050625F@l
/* 8038FA38 0038C978  7D 89 03 A6 */	mtctr r12
/* 8038FA3C 0038C97C  4E 80 04 21 */	bctrl 
/* 8038FA40 0038C980  7C 76 1B 78 */	mr r22, r3
/* 8038FA44 0038C984  7F A3 EB 78 */	mr r3, r29
/* 8038FA48 0038C988  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FA4C 0038C98C  3C A0 70 6B */	lis r5, 0x706B5F6C@ha
/* 8038FA50 0038C990  3C 80 00 50 */	lis r4, 0x0050625F@ha
/* 8038FA54 0038C994  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FA58 0038C998  38 C5 5F 6C */	addi r6, r5, 0x706B5F6C@l
/* 8038FA5C 0038C99C  38 A4 62 5F */	addi r5, r4, 0x0050625F@l
/* 8038FA60 0038C9A0  7D 89 03 A6 */	mtctr r12
/* 8038FA64 0038C9A4  4E 80 04 21 */	bctrl 
/* 8038FA68 0038C9A8  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8038FA6C 0038C9AC  7C 75 1B 78 */	mr r21, r3
/* 8038FA70 0038C9B0  38 84 D0 EC */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8038FA74 0038C9B4  38 7A 00 14 */	addi r3, r26, 0x14
/* 8038FA78 0038C9B8  38 A0 00 00 */	li r5, 0
/* 8038FA7C 0038C9BC  38 C0 00 08 */	li r6, 8
/* 8038FA80 0038C9C0  38 E0 00 02 */	li r7, 2
/* 8038FA84 0038C9C4  4B D3 1D 99 */	bl __construct_array
/* 8038FA88 0038C9C8  3C 80 80 39 */	lis r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
/* 8038FA8C 0038C9CC  38 7A 00 24 */	addi r3, r26, 0x24
/* 8038FA90 0038C9D0  38 84 C4 BC */	addi r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
/* 8038FA94 0038C9D4  38 A0 00 00 */	li r5, 0
/* 8038FA98 0038C9D8  38 C0 00 24 */	li r6, 0x24
/* 8038FA9C 0038C9DC  38 E0 00 32 */	li r7, 0x32
/* 8038FAA0 0038C9E0  4B D3 1D 7D */	bl __construct_array
/* 8038FAA4 0038C9E4  3A E0 00 00 */	li r23, 0
/* 8038FAA8 0038C9E8  7F 58 D3 78 */	mr r24, r26
/* 8038FAAC 0038C9EC  92 FA 07 2C */	stw r23, 0x72c(r26)
/* 8038FAB0 0038C9F0  92 BA 00 00 */	stw r21, 0(r26)
/* 8038FAB4 0038C9F4  92 DA 00 04 */	stw r22, 4(r26)
/* 8038FAB8 0038C9F8  93 7A 00 08 */	stw r27, 8(r26)
.L_8038FABC:
/* 8038FABC 0038C9FC  80 18 00 00 */	lwz r0, 0(r24)
/* 8038FAC0 0038CA00  28 00 00 00 */	cmplwi r0, 0
/* 8038FAC4 0038CA04  40 82 00 18 */	bne .L_8038FADC
/* 8038FAC8 0038CA08  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038FACC 0038CA0C  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038FAD0 0038CA10  38 80 00 48 */	li r4, 0x48
/* 8038FAD4 0038CA14  4C C6 31 82 */	crclr 6
/* 8038FAD8 0038CA18  4B C9 AB 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038FADC:
/* 8038FADC 0038CA1C  3A F7 00 01 */	addi r23, r23, 1
/* 8038FAE0 0038CA20  3B 18 00 04 */	addi r24, r24, 4
/* 8038FAE4 0038CA24  2C 17 00 03 */	cmpwi r23, 3
/* 8038FAE8 0038CA28  41 80 FF D4 */	blt .L_8038FABC
/* 8038FAEC 0038CA2C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038FAF0 0038CA30  38 A0 00 30 */	li r5, 0x30
/* 8038FAF4 0038CA34  1C 65 00 24 */	mulli r3, r5, 0x24
/* 8038FAF8 0038CA38  38 80 00 00 */	li r4, 0
/* 8038FAFC 0038CA3C  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8038FB00 0038CA40  20 05 00 32 */	subfic r0, r5, 0x32
/* 8038FB04 0038CA44  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8038FB08 0038CA48  7C 7A 1A 14 */	add r3, r26, r3
/* 8038FB0C 0038CA4C  D0 1A 07 30 */	stfs f0, 0x730(r26)
/* 8038FB10 0038CA50  90 9A 00 24 */	stw r4, 0x24(r26)
/* 8038FB14 0038CA54  90 9A 00 48 */	stw r4, 0x48(r26)
/* 8038FB18 0038CA58  90 9A 00 6C */	stw r4, 0x6c(r26)
/* 8038FB1C 0038CA5C  90 9A 00 90 */	stw r4, 0x90(r26)
/* 8038FB20 0038CA60  90 9A 00 B4 */	stw r4, 0xb4(r26)
/* 8038FB24 0038CA64  90 9A 00 D8 */	stw r4, 0xd8(r26)
/* 8038FB28 0038CA68  90 9A 00 FC */	stw r4, 0xfc(r26)
/* 8038FB2C 0038CA6C  90 9A 01 20 */	stw r4, 0x120(r26)
/* 8038FB30 0038CA70  90 9A 01 44 */	stw r4, 0x144(r26)
/* 8038FB34 0038CA74  90 9A 01 68 */	stw r4, 0x168(r26)
/* 8038FB38 0038CA78  90 9A 01 8C */	stw r4, 0x18c(r26)
/* 8038FB3C 0038CA7C  90 9A 01 B0 */	stw r4, 0x1b0(r26)
/* 8038FB40 0038CA80  90 9A 01 D4 */	stw r4, 0x1d4(r26)
/* 8038FB44 0038CA84  90 9A 01 F8 */	stw r4, 0x1f8(r26)
/* 8038FB48 0038CA88  90 9A 02 1C */	stw r4, 0x21c(r26)
/* 8038FB4C 0038CA8C  90 9A 02 40 */	stw r4, 0x240(r26)
/* 8038FB50 0038CA90  90 9A 02 64 */	stw r4, 0x264(r26)
/* 8038FB54 0038CA94  90 9A 02 88 */	stw r4, 0x288(r26)
/* 8038FB58 0038CA98  90 9A 02 AC */	stw r4, 0x2ac(r26)
/* 8038FB5C 0038CA9C  90 9A 02 D0 */	stw r4, 0x2d0(r26)
/* 8038FB60 0038CAA0  90 9A 02 F4 */	stw r4, 0x2f4(r26)
/* 8038FB64 0038CAA4  90 9A 03 18 */	stw r4, 0x318(r26)
/* 8038FB68 0038CAA8  90 9A 03 3C */	stw r4, 0x33c(r26)
/* 8038FB6C 0038CAAC  90 9A 03 60 */	stw r4, 0x360(r26)
/* 8038FB70 0038CAB0  90 9A 03 84 */	stw r4, 0x384(r26)
/* 8038FB74 0038CAB4  90 9A 03 A8 */	stw r4, 0x3a8(r26)
/* 8038FB78 0038CAB8  90 9A 03 CC */	stw r4, 0x3cc(r26)
/* 8038FB7C 0038CABC  90 9A 03 F0 */	stw r4, 0x3f0(r26)
/* 8038FB80 0038CAC0  90 9A 04 14 */	stw r4, 0x414(r26)
/* 8038FB84 0038CAC4  90 9A 04 38 */	stw r4, 0x438(r26)
/* 8038FB88 0038CAC8  90 9A 04 5C */	stw r4, 0x45c(r26)
/* 8038FB8C 0038CACC  90 9A 04 80 */	stw r4, 0x480(r26)
/* 8038FB90 0038CAD0  90 9A 04 A4 */	stw r4, 0x4a4(r26)
/* 8038FB94 0038CAD4  90 9A 04 C8 */	stw r4, 0x4c8(r26)
/* 8038FB98 0038CAD8  90 9A 04 EC */	stw r4, 0x4ec(r26)
/* 8038FB9C 0038CADC  90 9A 05 10 */	stw r4, 0x510(r26)
/* 8038FBA0 0038CAE0  90 9A 05 34 */	stw r4, 0x534(r26)
/* 8038FBA4 0038CAE4  90 9A 05 58 */	stw r4, 0x558(r26)
/* 8038FBA8 0038CAE8  90 9A 05 7C */	stw r4, 0x57c(r26)
/* 8038FBAC 0038CAEC  90 9A 05 A0 */	stw r4, 0x5a0(r26)
/* 8038FBB0 0038CAF0  90 9A 05 C4 */	stw r4, 0x5c4(r26)
/* 8038FBB4 0038CAF4  90 9A 05 E8 */	stw r4, 0x5e8(r26)
/* 8038FBB8 0038CAF8  90 9A 06 0C */	stw r4, 0x60c(r26)
/* 8038FBBC 0038CAFC  90 9A 06 30 */	stw r4, 0x630(r26)
/* 8038FBC0 0038CB00  90 9A 06 54 */	stw r4, 0x654(r26)
/* 8038FBC4 0038CB04  90 9A 06 78 */	stw r4, 0x678(r26)
/* 8038FBC8 0038CB08  90 9A 06 9C */	stw r4, 0x69c(r26)
/* 8038FBCC 0038CB0C  90 9A 06 C0 */	stw r4, 0x6c0(r26)
/* 8038FBD0 0038CB10  7C 09 03 A6 */	mtctr r0
/* 8038FBD4 0038CB14  2C 05 00 32 */	cmpwi r5, 0x32
/* 8038FBD8 0038CB18  40 80 00 0C */	bge .L_8038FBE4
.L_8038FBDC:
/* 8038FBDC 0038CB1C  94 83 00 24 */	stwu r4, 0x24(r3)
/* 8038FBE0 0038CB20  42 00 FF FC */	bdnz .L_8038FBDC
.L_8038FBE4:
/* 8038FBE4 0038CB24  93 5F 00 A4 */	stw r26, 0xa4(r31)
/* 8038FBE8 0038CB28  38 60 07 34 */	li r3, 0x734
/* 8038FBEC 0038CB2C  4B C9 42 B9 */	bl __nw__FUl
/* 8038FBF0 0038CB30  7C 7A 1B 79 */	or. r26, r3, r3
/* 8038FBF4 0038CB34  41 82 01 F0 */	beq .L_8038FDE4
/* 8038FBF8 0038CB38  7F A3 EB 78 */	mr r3, r29
/* 8038FBFC 0038CB3C  3C 80 77 5F */	lis r4, 0x775F6677@ha
/* 8038FC00 0038CB40  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FC04 0038CB44  38 C4 66 77 */	addi r6, r4, 0x775F6677@l
/* 8038FC08 0038CB48  38 A0 00 50 */	li r5, 0x50
/* 8038FC0C 0038CB4C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FC10 0038CB50  7D 89 03 A6 */	mtctr r12
/* 8038FC14 0038CB54  4E 80 04 21 */	bctrl 
/* 8038FC18 0038CB58  7C 7B 1B 78 */	mr r27, r3
/* 8038FC1C 0038CB5C  7F A3 EB 78 */	mr r3, r29
/* 8038FC20 0038CB60  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FC24 0038CB64  3C A0 5F 30 */	lis r5, 0x5F303230@ha
/* 8038FC28 0038CB68  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 8038FC2C 0038CB6C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FC30 0038CB70  38 C5 32 30 */	addi r6, r5, 0x5F303230@l
/* 8038FC34 0038CB74  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 8038FC38 0038CB78  7D 89 03 A6 */	mtctr r12
/* 8038FC3C 0038CB7C  4E 80 04 21 */	bctrl 
/* 8038FC40 0038CB80  7C 76 1B 78 */	mr r22, r3
/* 8038FC44 0038CB84  7F A3 EB 78 */	mr r3, r29
/* 8038FC48 0038CB88  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FC4C 0038CB8C  3C A0 70 6B */	lis r5, 0x706B5F72@ha
/* 8038FC50 0038CB90  3C 80 00 50 */	lis r4, 0x0050775F@ha
/* 8038FC54 0038CB94  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FC58 0038CB98  38 C5 5F 72 */	addi r6, r5, 0x706B5F72@l
/* 8038FC5C 0038CB9C  38 A4 77 5F */	addi r5, r4, 0x0050775F@l
/* 8038FC60 0038CBA0  7D 89 03 A6 */	mtctr r12
/* 8038FC64 0038CBA4  4E 80 04 21 */	bctrl 
/* 8038FC68 0038CBA8  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8038FC6C 0038CBAC  7C 75 1B 78 */	mr r21, r3
/* 8038FC70 0038CBB0  38 84 D0 EC */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8038FC74 0038CBB4  38 7A 00 14 */	addi r3, r26, 0x14
/* 8038FC78 0038CBB8  38 A0 00 00 */	li r5, 0
/* 8038FC7C 0038CBBC  38 C0 00 08 */	li r6, 8
/* 8038FC80 0038CBC0  38 E0 00 02 */	li r7, 2
/* 8038FC84 0038CBC4  4B D3 1B 99 */	bl __construct_array
/* 8038FC88 0038CBC8  3C 80 80 39 */	lis r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
/* 8038FC8C 0038CBCC  38 7A 00 24 */	addi r3, r26, 0x24
/* 8038FC90 0038CBD0  38 84 C4 BC */	addi r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
/* 8038FC94 0038CBD4  38 A0 00 00 */	li r5, 0
/* 8038FC98 0038CBD8  38 C0 00 24 */	li r6, 0x24
/* 8038FC9C 0038CBDC  38 E0 00 32 */	li r7, 0x32
/* 8038FCA0 0038CBE0  4B D3 1B 7D */	bl __construct_array
/* 8038FCA4 0038CBE4  3A E0 00 00 */	li r23, 0
/* 8038FCA8 0038CBE8  7F 58 D3 78 */	mr r24, r26
/* 8038FCAC 0038CBEC  92 FA 07 2C */	stw r23, 0x72c(r26)
/* 8038FCB0 0038CBF0  92 BA 00 00 */	stw r21, 0(r26)
/* 8038FCB4 0038CBF4  92 DA 00 04 */	stw r22, 4(r26)
/* 8038FCB8 0038CBF8  93 7A 00 08 */	stw r27, 8(r26)
.L_8038FCBC:
/* 8038FCBC 0038CBFC  80 18 00 00 */	lwz r0, 0(r24)
/* 8038FCC0 0038CC00  28 00 00 00 */	cmplwi r0, 0
/* 8038FCC4 0038CC04  40 82 00 18 */	bne .L_8038FCDC
/* 8038FCC8 0038CC08  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038FCCC 0038CC0C  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038FCD0 0038CC10  38 80 00 48 */	li r4, 0x48
/* 8038FCD4 0038CC14  4C C6 31 82 */	crclr 6
/* 8038FCD8 0038CC18  4B C9 A9 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038FCDC:
/* 8038FCDC 0038CC1C  3A F7 00 01 */	addi r23, r23, 1
/* 8038FCE0 0038CC20  3B 18 00 04 */	addi r24, r24, 4
/* 8038FCE4 0038CC24  2C 17 00 03 */	cmpwi r23, 3
/* 8038FCE8 0038CC28  41 80 FF D4 */	blt .L_8038FCBC
/* 8038FCEC 0038CC2C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038FCF0 0038CC30  38 A0 00 30 */	li r5, 0x30
/* 8038FCF4 0038CC34  1C 65 00 24 */	mulli r3, r5, 0x24
/* 8038FCF8 0038CC38  38 80 00 00 */	li r4, 0
/* 8038FCFC 0038CC3C  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8038FD00 0038CC40  20 05 00 32 */	subfic r0, r5, 0x32
/* 8038FD04 0038CC44  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8038FD08 0038CC48  7C 7A 1A 14 */	add r3, r26, r3
/* 8038FD0C 0038CC4C  D0 1A 07 30 */	stfs f0, 0x730(r26)
/* 8038FD10 0038CC50  90 9A 00 24 */	stw r4, 0x24(r26)
/* 8038FD14 0038CC54  90 9A 00 48 */	stw r4, 0x48(r26)
/* 8038FD18 0038CC58  90 9A 00 6C */	stw r4, 0x6c(r26)
/* 8038FD1C 0038CC5C  90 9A 00 90 */	stw r4, 0x90(r26)
/* 8038FD20 0038CC60  90 9A 00 B4 */	stw r4, 0xb4(r26)
/* 8038FD24 0038CC64  90 9A 00 D8 */	stw r4, 0xd8(r26)
/* 8038FD28 0038CC68  90 9A 00 FC */	stw r4, 0xfc(r26)
/* 8038FD2C 0038CC6C  90 9A 01 20 */	stw r4, 0x120(r26)
/* 8038FD30 0038CC70  90 9A 01 44 */	stw r4, 0x144(r26)
/* 8038FD34 0038CC74  90 9A 01 68 */	stw r4, 0x168(r26)
/* 8038FD38 0038CC78  90 9A 01 8C */	stw r4, 0x18c(r26)
/* 8038FD3C 0038CC7C  90 9A 01 B0 */	stw r4, 0x1b0(r26)
/* 8038FD40 0038CC80  90 9A 01 D4 */	stw r4, 0x1d4(r26)
/* 8038FD44 0038CC84  90 9A 01 F8 */	stw r4, 0x1f8(r26)
/* 8038FD48 0038CC88  90 9A 02 1C */	stw r4, 0x21c(r26)
/* 8038FD4C 0038CC8C  90 9A 02 40 */	stw r4, 0x240(r26)
/* 8038FD50 0038CC90  90 9A 02 64 */	stw r4, 0x264(r26)
/* 8038FD54 0038CC94  90 9A 02 88 */	stw r4, 0x288(r26)
/* 8038FD58 0038CC98  90 9A 02 AC */	stw r4, 0x2ac(r26)
/* 8038FD5C 0038CC9C  90 9A 02 D0 */	stw r4, 0x2d0(r26)
/* 8038FD60 0038CCA0  90 9A 02 F4 */	stw r4, 0x2f4(r26)
/* 8038FD64 0038CCA4  90 9A 03 18 */	stw r4, 0x318(r26)
/* 8038FD68 0038CCA8  90 9A 03 3C */	stw r4, 0x33c(r26)
/* 8038FD6C 0038CCAC  90 9A 03 60 */	stw r4, 0x360(r26)
/* 8038FD70 0038CCB0  90 9A 03 84 */	stw r4, 0x384(r26)
/* 8038FD74 0038CCB4  90 9A 03 A8 */	stw r4, 0x3a8(r26)
/* 8038FD78 0038CCB8  90 9A 03 CC */	stw r4, 0x3cc(r26)
/* 8038FD7C 0038CCBC  90 9A 03 F0 */	stw r4, 0x3f0(r26)
/* 8038FD80 0038CCC0  90 9A 04 14 */	stw r4, 0x414(r26)
/* 8038FD84 0038CCC4  90 9A 04 38 */	stw r4, 0x438(r26)
/* 8038FD88 0038CCC8  90 9A 04 5C */	stw r4, 0x45c(r26)
/* 8038FD8C 0038CCCC  90 9A 04 80 */	stw r4, 0x480(r26)
/* 8038FD90 0038CCD0  90 9A 04 A4 */	stw r4, 0x4a4(r26)
/* 8038FD94 0038CCD4  90 9A 04 C8 */	stw r4, 0x4c8(r26)
/* 8038FD98 0038CCD8  90 9A 04 EC */	stw r4, 0x4ec(r26)
/* 8038FD9C 0038CCDC  90 9A 05 10 */	stw r4, 0x510(r26)
/* 8038FDA0 0038CCE0  90 9A 05 34 */	stw r4, 0x534(r26)
/* 8038FDA4 0038CCE4  90 9A 05 58 */	stw r4, 0x558(r26)
/* 8038FDA8 0038CCE8  90 9A 05 7C */	stw r4, 0x57c(r26)
/* 8038FDAC 0038CCEC  90 9A 05 A0 */	stw r4, 0x5a0(r26)
/* 8038FDB0 0038CCF0  90 9A 05 C4 */	stw r4, 0x5c4(r26)
/* 8038FDB4 0038CCF4  90 9A 05 E8 */	stw r4, 0x5e8(r26)
/* 8038FDB8 0038CCF8  90 9A 06 0C */	stw r4, 0x60c(r26)
/* 8038FDBC 0038CCFC  90 9A 06 30 */	stw r4, 0x630(r26)
/* 8038FDC0 0038CD00  90 9A 06 54 */	stw r4, 0x654(r26)
/* 8038FDC4 0038CD04  90 9A 06 78 */	stw r4, 0x678(r26)
/* 8038FDC8 0038CD08  90 9A 06 9C */	stw r4, 0x69c(r26)
/* 8038FDCC 0038CD0C  90 9A 06 C0 */	stw r4, 0x6c0(r26)
/* 8038FDD0 0038CD10  7C 09 03 A6 */	mtctr r0
/* 8038FDD4 0038CD14  2C 05 00 32 */	cmpwi r5, 0x32
/* 8038FDD8 0038CD18  40 80 00 0C */	bge .L_8038FDE4
.L_8038FDDC:
/* 8038FDDC 0038CD1C  94 83 00 24 */	stwu r4, 0x24(r3)
/* 8038FDE0 0038CD20  42 00 FF FC */	bdnz .L_8038FDDC
.L_8038FDE4:
/* 8038FDE4 0038CD24  93 5F 00 A8 */	stw r26, 0xa8(r31)
/* 8038FDE8 0038CD28  38 60 07 34 */	li r3, 0x734
/* 8038FDEC 0038CD2C  4B C9 40 B9 */	bl __nw__FUl
/* 8038FDF0 0038CD30  7C 7A 1B 79 */	or. r26, r3, r3
/* 8038FDF4 0038CD34  41 82 01 F0 */	beq .L_8038FFE4
/* 8038FDF8 0038CD38  7F A3 EB 78 */	mr r3, r29
/* 8038FDFC 0038CD3C  3C 80 6C 5F */	lis r4, 0x6C5F6677@ha
/* 8038FE00 0038CD40  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FE04 0038CD44  38 C4 66 77 */	addi r6, r4, 0x6C5F6677@l
/* 8038FE08 0038CD48  38 A0 50 62 */	li r5, 0x5062
/* 8038FE0C 0038CD4C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FE10 0038CD50  7D 89 03 A6 */	mtctr r12
/* 8038FE14 0038CD54  4E 80 04 21 */	bctrl 
/* 8038FE18 0038CD58  7C 7B 1B 78 */	mr r27, r3
/* 8038FE1C 0038CD5C  7F A3 EB 78 */	mr r3, r29
/* 8038FE20 0038CD60  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FE24 0038CD64  3C A0 70 6B */	lis r5, 0x706B5F72@ha
/* 8038FE28 0038CD68  3C 80 50 62 */	lis r4, 0x50626C5F@ha
/* 8038FE2C 0038CD6C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FE30 0038CD70  38 C5 5F 72 */	addi r6, r5, 0x706B5F72@l
/* 8038FE34 0038CD74  38 A4 6C 5F */	addi r5, r4, 0x50626C5F@l
/* 8038FE38 0038CD78  7D 89 03 A6 */	mtctr r12
/* 8038FE3C 0038CD7C  4E 80 04 21 */	bctrl 
/* 8038FE40 0038CD80  7C 76 1B 78 */	mr r22, r3
/* 8038FE44 0038CD84  7F A3 EB 78 */	mr r3, r29
/* 8038FE48 0038CD88  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FE4C 0038CD8C  3C A0 70 6B */	lis r5, 0x706B5F6C@ha
/* 8038FE50 0038CD90  3C 80 50 62 */	lis r4, 0x50626C5F@ha
/* 8038FE54 0038CD94  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FE58 0038CD98  38 C5 5F 6C */	addi r6, r5, 0x706B5F6C@l
/* 8038FE5C 0038CD9C  38 A4 6C 5F */	addi r5, r4, 0x50626C5F@l
/* 8038FE60 0038CDA0  7D 89 03 A6 */	mtctr r12
/* 8038FE64 0038CDA4  4E 80 04 21 */	bctrl 
/* 8038FE68 0038CDA8  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8038FE6C 0038CDAC  7C 75 1B 78 */	mr r21, r3
/* 8038FE70 0038CDB0  38 84 D0 EC */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8038FE74 0038CDB4  38 7A 00 14 */	addi r3, r26, 0x14
/* 8038FE78 0038CDB8  38 A0 00 00 */	li r5, 0
/* 8038FE7C 0038CDBC  38 C0 00 08 */	li r6, 8
/* 8038FE80 0038CDC0  38 E0 00 02 */	li r7, 2
/* 8038FE84 0038CDC4  4B D3 19 99 */	bl __construct_array
/* 8038FE88 0038CDC8  3C 80 80 39 */	lis r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
/* 8038FE8C 0038CDCC  38 7A 00 24 */	addi r3, r26, 0x24
/* 8038FE90 0038CDD0  38 84 C4 BC */	addi r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
/* 8038FE94 0038CDD4  38 A0 00 00 */	li r5, 0
/* 8038FE98 0038CDD8  38 C0 00 24 */	li r6, 0x24
/* 8038FE9C 0038CDDC  38 E0 00 32 */	li r7, 0x32
/* 8038FEA0 0038CDE0  4B D3 19 7D */	bl __construct_array
/* 8038FEA4 0038CDE4  3A E0 00 00 */	li r23, 0
/* 8038FEA8 0038CDE8  7F 58 D3 78 */	mr r24, r26
/* 8038FEAC 0038CDEC  92 FA 07 2C */	stw r23, 0x72c(r26)
/* 8038FEB0 0038CDF0  92 BA 00 00 */	stw r21, 0(r26)
/* 8038FEB4 0038CDF4  92 DA 00 04 */	stw r22, 4(r26)
/* 8038FEB8 0038CDF8  93 7A 00 08 */	stw r27, 8(r26)
.L_8038FEBC:
/* 8038FEBC 0038CDFC  80 18 00 00 */	lwz r0, 0(r24)
/* 8038FEC0 0038CE00  28 00 00 00 */	cmplwi r0, 0
/* 8038FEC4 0038CE04  40 82 00 18 */	bne .L_8038FEDC
/* 8038FEC8 0038CE08  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038FECC 0038CE0C  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038FED0 0038CE10  38 80 00 48 */	li r4, 0x48
/* 8038FED4 0038CE14  4C C6 31 82 */	crclr 6
/* 8038FED8 0038CE18  4B C9 A7 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038FEDC:
/* 8038FEDC 0038CE1C  3A F7 00 01 */	addi r23, r23, 1
/* 8038FEE0 0038CE20  3B 18 00 04 */	addi r24, r24, 4
/* 8038FEE4 0038CE24  2C 17 00 03 */	cmpwi r23, 3
/* 8038FEE8 0038CE28  41 80 FF D4 */	blt .L_8038FEBC
/* 8038FEEC 0038CE2C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038FEF0 0038CE30  38 A0 00 30 */	li r5, 0x30
/* 8038FEF4 0038CE34  1C 65 00 24 */	mulli r3, r5, 0x24
/* 8038FEF8 0038CE38  38 80 00 00 */	li r4, 0
/* 8038FEFC 0038CE3C  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8038FF00 0038CE40  20 05 00 32 */	subfic r0, r5, 0x32
/* 8038FF04 0038CE44  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8038FF08 0038CE48  7C 7A 1A 14 */	add r3, r26, r3
/* 8038FF0C 0038CE4C  D0 1A 07 30 */	stfs f0, 0x730(r26)
/* 8038FF10 0038CE50  90 9A 00 24 */	stw r4, 0x24(r26)
/* 8038FF14 0038CE54  90 9A 00 48 */	stw r4, 0x48(r26)
/* 8038FF18 0038CE58  90 9A 00 6C */	stw r4, 0x6c(r26)
/* 8038FF1C 0038CE5C  90 9A 00 90 */	stw r4, 0x90(r26)
/* 8038FF20 0038CE60  90 9A 00 B4 */	stw r4, 0xb4(r26)
/* 8038FF24 0038CE64  90 9A 00 D8 */	stw r4, 0xd8(r26)
/* 8038FF28 0038CE68  90 9A 00 FC */	stw r4, 0xfc(r26)
/* 8038FF2C 0038CE6C  90 9A 01 20 */	stw r4, 0x120(r26)
/* 8038FF30 0038CE70  90 9A 01 44 */	stw r4, 0x144(r26)
/* 8038FF34 0038CE74  90 9A 01 68 */	stw r4, 0x168(r26)
/* 8038FF38 0038CE78  90 9A 01 8C */	stw r4, 0x18c(r26)
/* 8038FF3C 0038CE7C  90 9A 01 B0 */	stw r4, 0x1b0(r26)
/* 8038FF40 0038CE80  90 9A 01 D4 */	stw r4, 0x1d4(r26)
/* 8038FF44 0038CE84  90 9A 01 F8 */	stw r4, 0x1f8(r26)
/* 8038FF48 0038CE88  90 9A 02 1C */	stw r4, 0x21c(r26)
/* 8038FF4C 0038CE8C  90 9A 02 40 */	stw r4, 0x240(r26)
/* 8038FF50 0038CE90  90 9A 02 64 */	stw r4, 0x264(r26)
/* 8038FF54 0038CE94  90 9A 02 88 */	stw r4, 0x288(r26)
/* 8038FF58 0038CE98  90 9A 02 AC */	stw r4, 0x2ac(r26)
/* 8038FF5C 0038CE9C  90 9A 02 D0 */	stw r4, 0x2d0(r26)
/* 8038FF60 0038CEA0  90 9A 02 F4 */	stw r4, 0x2f4(r26)
/* 8038FF64 0038CEA4  90 9A 03 18 */	stw r4, 0x318(r26)
/* 8038FF68 0038CEA8  90 9A 03 3C */	stw r4, 0x33c(r26)
/* 8038FF6C 0038CEAC  90 9A 03 60 */	stw r4, 0x360(r26)
/* 8038FF70 0038CEB0  90 9A 03 84 */	stw r4, 0x384(r26)
/* 8038FF74 0038CEB4  90 9A 03 A8 */	stw r4, 0x3a8(r26)
/* 8038FF78 0038CEB8  90 9A 03 CC */	stw r4, 0x3cc(r26)
/* 8038FF7C 0038CEBC  90 9A 03 F0 */	stw r4, 0x3f0(r26)
/* 8038FF80 0038CEC0  90 9A 04 14 */	stw r4, 0x414(r26)
/* 8038FF84 0038CEC4  90 9A 04 38 */	stw r4, 0x438(r26)
/* 8038FF88 0038CEC8  90 9A 04 5C */	stw r4, 0x45c(r26)
/* 8038FF8C 0038CECC  90 9A 04 80 */	stw r4, 0x480(r26)
/* 8038FF90 0038CED0  90 9A 04 A4 */	stw r4, 0x4a4(r26)
/* 8038FF94 0038CED4  90 9A 04 C8 */	stw r4, 0x4c8(r26)
/* 8038FF98 0038CED8  90 9A 04 EC */	stw r4, 0x4ec(r26)
/* 8038FF9C 0038CEDC  90 9A 05 10 */	stw r4, 0x510(r26)
/* 8038FFA0 0038CEE0  90 9A 05 34 */	stw r4, 0x534(r26)
/* 8038FFA4 0038CEE4  90 9A 05 58 */	stw r4, 0x558(r26)
/* 8038FFA8 0038CEE8  90 9A 05 7C */	stw r4, 0x57c(r26)
/* 8038FFAC 0038CEEC  90 9A 05 A0 */	stw r4, 0x5a0(r26)
/* 8038FFB0 0038CEF0  90 9A 05 C4 */	stw r4, 0x5c4(r26)
/* 8038FFB4 0038CEF4  90 9A 05 E8 */	stw r4, 0x5e8(r26)
/* 8038FFB8 0038CEF8  90 9A 06 0C */	stw r4, 0x60c(r26)
/* 8038FFBC 0038CEFC  90 9A 06 30 */	stw r4, 0x630(r26)
/* 8038FFC0 0038CF00  90 9A 06 54 */	stw r4, 0x654(r26)
/* 8038FFC4 0038CF04  90 9A 06 78 */	stw r4, 0x678(r26)
/* 8038FFC8 0038CF08  90 9A 06 9C */	stw r4, 0x69c(r26)
/* 8038FFCC 0038CF0C  90 9A 06 C0 */	stw r4, 0x6c0(r26)
/* 8038FFD0 0038CF10  7C 09 03 A6 */	mtctr r0
/* 8038FFD4 0038CF14  2C 05 00 32 */	cmpwi r5, 0x32
/* 8038FFD8 0038CF18  40 80 00 0C */	bge .L_8038FFE4
.L_8038FFDC:
/* 8038FFDC 0038CF1C  94 83 00 24 */	stwu r4, 0x24(r3)
/* 8038FFE0 0038CF20  42 00 FF FC */	bdnz .L_8038FFDC
.L_8038FFE4:
/* 8038FFE4 0038CF24  93 5F 00 AC */	stw r26, 0xac(r31)
/* 8038FFE8 0038CF28  7F A3 EB 78 */	mr r3, r29
/* 8038FFEC 0038CF2C  3C 80 79 65 */	lis r4, 0x79656C31@ha
/* 8038FFF0 0038CF30  38 A0 00 54 */	li r5, 0x54
/* 8038FFF4 0038CF34  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FFF8 0038CF38  38 C4 6C 31 */	addi r6, r4, 0x79656C31@l
/* 8038FFFC 0038CF3C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80390000 0038CF40  7D 89 03 A6 */	mtctr r12
/* 80390004 0038CF44  4E 80 04 21 */	bctrl 
/* 80390008 0038CF48  90 7F 00 E0 */	stw r3, 0xe0(r31)
/* 8039000C 0038CF4C  7F A3 EB 78 */	mr r3, r29
/* 80390010 0038CF50  3C 80 79 65 */	lis r4, 0x79656C32@ha
/* 80390014 0038CF54  38 A0 00 54 */	li r5, 0x54
/* 80390018 0038CF58  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039001C 0038CF5C  38 C4 6C 32 */	addi r6, r4, 0x79656C32@l
/* 80390020 0038CF60  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80390024 0038CF64  7D 89 03 A6 */	mtctr r12
/* 80390028 0038CF68  4E 80 04 21 */	bctrl 
/* 8039002C 0038CF6C  90 7F 00 E4 */	stw r3, 0xe4(r31)
/* 80390030 0038CF70  7F F5 FB 78 */	mr r21, r31
/* 80390034 0038CF74  3A C0 00 00 */	li r22, 0
.L_80390038:
/* 80390038 0038CF78  80 15 00 E0 */	lwz r0, 0xe0(r21)
/* 8039003C 0038CF7C  28 00 00 00 */	cmplwi r0, 0
/* 80390040 0038CF80  40 82 00 18 */	bne .L_80390058
/* 80390044 0038CF84  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390048 0038CF88  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8039004C 0038CF8C  38 80 05 F5 */	li r4, 0x5f5
/* 80390050 0038CF90  4C C6 31 82 */	crclr 6
/* 80390054 0038CF94  4B C9 A5 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390058:
/* 80390058 0038CF98  3A D6 00 01 */	addi r22, r22, 1
/* 8039005C 0038CF9C  3A B5 00 04 */	addi r21, r21, 4
/* 80390060 0038CFA0  2C 16 00 02 */	cmpwi r22, 2
/* 80390064 0038CFA4  41 80 FF D4 */	blt .L_80390038
/* 80390068 0038CFA8  38 60 00 18 */	li r3, 0x18
/* 8039006C 0038CFAC  4B C9 3E 39 */	bl __nw__FUl
/* 80390070 0038CFB0  7C 7A 1B 79 */	or. r26, r3, r3
/* 80390074 0038CFB4  41 82 01 20 */	beq .L_80390194
/* 80390078 0038CFB8  7F A3 EB 78 */	mr r3, r29
/* 8039007C 0038CFBC  3C A0 5F 30 */	lis r5, 0x5F303234@ha
/* 80390080 0038CFC0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80390084 0038CFC4  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 80390088 0038CFC8  38 C5 32 34 */	addi r6, r5, 0x5F303234@l
/* 8039008C 0038CFCC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80390090 0038CFD0  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 80390094 0038CFD4  7D 89 03 A6 */	mtctr r12
/* 80390098 0038CFD8  4E 80 04 21 */	bctrl 
/* 8039009C 0038CFDC  7C 77 1B 78 */	mr r23, r3
/* 803900A0 0038CFE0  7F A3 EB 78 */	mr r3, r29
/* 803900A4 0038CFE4  81 9D 00 00 */	lwz r12, 0(r29)
/* 803900A8 0038CFE8  3C A0 5F 30 */	lis r5, 0x5F303232@ha
/* 803900AC 0038CFEC  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 803900B0 0038CFF0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803900B4 0038CFF4  38 C5 32 32 */	addi r6, r5, 0x5F303232@l
/* 803900B8 0038CFF8  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 803900BC 0038CFFC  7D 89 03 A6 */	mtctr r12
/* 803900C0 0038D000  4E 80 04 21 */	bctrl 
/* 803900C4 0038D004  7C 76 1B 78 */	mr r22, r3
/* 803900C8 0038D008  7F A3 EB 78 */	mr r3, r29
/* 803900CC 0038D00C  81 9D 00 00 */	lwz r12, 0(r29)
/* 803900D0 0038D010  3C A0 5F 30 */	lis r5, 0x5F303233@ha
/* 803900D4 0038D014  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 803900D8 0038D018  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803900DC 0038D01C  38 C5 32 33 */	addi r6, r5, 0x5F303233@l
/* 803900E0 0038D020  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 803900E4 0038D024  7D 89 03 A6 */	mtctr r12
/* 803900E8 0038D028  4E 80 04 21 */	bctrl 
/* 803900EC 0038D02C  7C 75 1B 78 */	mr r21, r3
/* 803900F0 0038D030  7F A3 EB 78 */	mr r3, r29
/* 803900F4 0038D034  81 9D 00 00 */	lwz r12, 0(r29)
/* 803900F8 0038D038  3C A0 5F 30 */	lis r5, 0x5F303133@ha
/* 803900FC 0038D03C  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 80390100 0038D040  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80390104 0038D044  38 C5 31 33 */	addi r6, r5, 0x5F303133@l
/* 80390108 0038D048  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 8039010C 0038D04C  7D 89 03 A6 */	mtctr r12
/* 80390110 0038D050  4E 80 04 21 */	bctrl 
/* 80390114 0038D054  90 7A 00 00 */	stw r3, 0(r26)
/* 80390118 0038D058  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8039011C 0038D05C  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 80390120 0038D060  D0 1A 00 14 */	stfs f0, 0x14(r26)
/* 80390124 0038D064  80 1A 00 00 */	lwz r0, 0(r26)
/* 80390128 0038D068  28 00 00 00 */	cmplwi r0, 0
/* 8039012C 0038D06C  40 82 00 18 */	bne .L_80390144
/* 80390130 0038D070  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390134 0038D074  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390138 0038D078  38 80 01 1C */	li r4, 0x11c
/* 8039013C 0038D07C  4C C6 31 82 */	crclr 6
/* 80390140 0038D080  4B C9 A5 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390144:
/* 80390144 0038D084  80 7A 00 00 */	lwz r3, 0(r26)
/* 80390148 0038D088  38 80 00 07 */	li r4, 7
/* 8039014C 0038D08C  4B CA 8B 71 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80390150 0038D090  92 BA 00 04 */	stw r21, 4(r26)
/* 80390154 0038D094  7F 58 D3 78 */	mr r24, r26
/* 80390158 0038D098  3A A0 00 00 */	li r21, 0
/* 8039015C 0038D09C  92 DA 00 08 */	stw r22, 8(r26)
/* 80390160 0038D0A0  92 FA 00 0C */	stw r23, 0xc(r26)
.L_80390164:
/* 80390164 0038D0A4  80 18 00 04 */	lwz r0, 4(r24)
/* 80390168 0038D0A8  28 00 00 00 */	cmplwi r0, 0
/* 8039016C 0038D0AC  40 82 00 18 */	bne .L_80390184
/* 80390170 0038D0B0  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390174 0038D0B4  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390178 0038D0B8  38 80 01 22 */	li r4, 0x122
/* 8039017C 0038D0BC  4C C6 31 82 */	crclr 6
/* 80390180 0038D0C0  4B C9 A4 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390184:
/* 80390184 0038D0C4  3A B5 00 01 */	addi r21, r21, 1
/* 80390188 0038D0C8  3B 18 00 04 */	addi r24, r24, 4
/* 8039018C 0038D0CC  2C 15 00 03 */	cmpwi r21, 3
/* 80390190 0038D0D0  41 80 FF D4 */	blt .L_80390164
.L_80390194:
/* 80390194 0038D0D4  93 5F 00 B0 */	stw r26, 0xb0(r31)
/* 80390198 0038D0D8  38 60 00 18 */	li r3, 0x18
/* 8039019C 0038D0DC  4B C9 3D 09 */	bl __nw__FUl
/* 803901A0 0038D0E0  7C 7A 1B 79 */	or. r26, r3, r3
/* 803901A4 0038D0E4  41 82 01 20 */	beq .L_803902C4
/* 803901A8 0038D0E8  7F A3 EB 78 */	mr r3, r29
/* 803901AC 0038D0EC  3C A0 5F 30 */	lis r5, 0x5F303237@ha
/* 803901B0 0038D0F0  81 9D 00 00 */	lwz r12, 0(r29)
/* 803901B4 0038D0F4  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 803901B8 0038D0F8  38 C5 32 37 */	addi r6, r5, 0x5F303237@l
/* 803901BC 0038D0FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803901C0 0038D100  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 803901C4 0038D104  7D 89 03 A6 */	mtctr r12
/* 803901C8 0038D108  4E 80 04 21 */	bctrl 
/* 803901CC 0038D10C  7C 77 1B 78 */	mr r23, r3
/* 803901D0 0038D110  7F A3 EB 78 */	mr r3, r29
/* 803901D4 0038D114  81 9D 00 00 */	lwz r12, 0(r29)
/* 803901D8 0038D118  3C A0 5F 30 */	lis r5, 0x5F303235@ha
/* 803901DC 0038D11C  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 803901E0 0038D120  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803901E4 0038D124  38 C5 32 35 */	addi r6, r5, 0x5F303235@l
/* 803901E8 0038D128  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 803901EC 0038D12C  7D 89 03 A6 */	mtctr r12
/* 803901F0 0038D130  4E 80 04 21 */	bctrl 
/* 803901F4 0038D134  7C 76 1B 78 */	mr r22, r3
/* 803901F8 0038D138  7F A3 EB 78 */	mr r3, r29
/* 803901FC 0038D13C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80390200 0038D140  3C A0 5F 30 */	lis r5, 0x5F303236@ha
/* 80390204 0038D144  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 80390208 0038D148  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039020C 0038D14C  38 C5 32 36 */	addi r6, r5, 0x5F303236@l
/* 80390210 0038D150  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 80390214 0038D154  7D 89 03 A6 */	mtctr r12
/* 80390218 0038D158  4E 80 04 21 */	bctrl 
/* 8039021C 0038D15C  7C 75 1B 78 */	mr r21, r3
/* 80390220 0038D160  7F A3 EB 78 */	mr r3, r29
/* 80390224 0038D164  81 9D 00 00 */	lwz r12, 0(r29)
/* 80390228 0038D168  3C A0 5F 30 */	lis r5, 0x5F303037@ha
/* 8039022C 0038D16C  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 80390230 0038D170  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80390234 0038D174  38 C5 30 37 */	addi r6, r5, 0x5F303037@l
/* 80390238 0038D178  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 8039023C 0038D17C  7D 89 03 A6 */	mtctr r12
/* 80390240 0038D180  4E 80 04 21 */	bctrl 
/* 80390244 0038D184  90 7A 00 00 */	stw r3, 0(r26)
/* 80390248 0038D188  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8039024C 0038D18C  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 80390250 0038D190  D0 1A 00 14 */	stfs f0, 0x14(r26)
/* 80390254 0038D194  80 1A 00 00 */	lwz r0, 0(r26)
/* 80390258 0038D198  28 00 00 00 */	cmplwi r0, 0
/* 8039025C 0038D19C  40 82 00 18 */	bne .L_80390274
/* 80390260 0038D1A0  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390264 0038D1A4  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390268 0038D1A8  38 80 01 1C */	li r4, 0x11c
/* 8039026C 0038D1AC  4C C6 31 82 */	crclr 6
/* 80390270 0038D1B0  4B C9 A3 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390274:
/* 80390274 0038D1B4  80 7A 00 00 */	lwz r3, 0(r26)
/* 80390278 0038D1B8  38 80 00 07 */	li r4, 7
/* 8039027C 0038D1BC  4B CA 8A 41 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80390280 0038D1C0  92 BA 00 04 */	stw r21, 4(r26)
/* 80390284 0038D1C4  7F 58 D3 78 */	mr r24, r26
/* 80390288 0038D1C8  3A A0 00 00 */	li r21, 0
/* 8039028C 0038D1CC  92 DA 00 08 */	stw r22, 8(r26)
/* 80390290 0038D1D0  92 FA 00 0C */	stw r23, 0xc(r26)
.L_80390294:
/* 80390294 0038D1D4  80 18 00 04 */	lwz r0, 4(r24)
/* 80390298 0038D1D8  28 00 00 00 */	cmplwi r0, 0
/* 8039029C 0038D1DC  40 82 00 18 */	bne .L_803902B4
/* 803902A0 0038D1E0  38 7E 00 14 */	addi r3, r30, 0x14
/* 803902A4 0038D1E4  38 BE 00 2C */	addi r5, r30, 0x2c
/* 803902A8 0038D1E8  38 80 01 22 */	li r4, 0x122
/* 803902AC 0038D1EC  4C C6 31 82 */	crclr 6
/* 803902B0 0038D1F0  4B C9 A3 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803902B4:
/* 803902B4 0038D1F4  3A B5 00 01 */	addi r21, r21, 1
/* 803902B8 0038D1F8  3B 18 00 04 */	addi r24, r24, 4
/* 803902BC 0038D1FC  2C 15 00 03 */	cmpwi r21, 3
/* 803902C0 0038D200  41 80 FF D4 */	blt .L_80390294
.L_803902C4:
/* 803902C4 0038D204  93 5F 00 B4 */	stw r26, 0xb4(r31)
/* 803902C8 0038D208  7F A3 EB 78 */	mr r3, r29
/* 803902CC 0038D20C  3C A0 66 65 */	lis r5, 0x66656374@ha
/* 803902D0 0038D210  3C 80 00 50 */	lis r4, 0x00506566@ha
/* 803902D4 0038D214  81 9D 00 00 */	lwz r12, 0(r29)
/* 803902D8 0038D218  38 C5 63 74 */	addi r6, r5, 0x66656374@l
/* 803902DC 0038D21C  38 A4 65 66 */	addi r5, r4, 0x00506566@l
/* 803902E0 0038D220  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803902E4 0038D224  7D 89 03 A6 */	mtctr r12
/* 803902E8 0038D228  4E 80 04 21 */	bctrl 
/* 803902EC 0038D22C  7C 75 1B 79 */	or. r21, r3, r3
/* 803902F0 0038D230  40 82 00 18 */	bne .L_80390308
/* 803902F4 0038D234  38 7E 00 14 */	addi r3, r30, 0x14
/* 803902F8 0038D238  38 BE 00 2C */	addi r5, r30, 0x2c
/* 803902FC 0038D23C  38 80 06 00 */	li r4, 0x600
/* 80390300 0038D240  4C C6 31 82 */	crclr 6
/* 80390304 0038D244  4B C9 A3 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390308:
/* 80390308 0038D248  38 00 00 01 */	li r0, 1
/* 8039030C 0038D24C  3C A0 65 63 */	lis r5, 0x65633030@ha
/* 80390310 0038D250  98 15 00 B0 */	stb r0, 0xb0(r21)
/* 80390314 0038D254  7F A3 EB 78 */	mr r3, r29
/* 80390318 0038D258  3C 80 50 73 */	lis r4, 0x5073656C@ha
/* 8039031C 0038D25C  38 C5 30 30 */	addi r6, r5, 0x65633030@l
/* 80390320 0038D260  81 9D 00 00 */	lwz r12, 0(r29)
/* 80390324 0038D264  38 A4 65 6C */	addi r5, r4, 0x5073656C@l
/* 80390328 0038D268  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039032C 0038D26C  7D 89 03 A6 */	mtctr r12
/* 80390330 0038D270  4E 80 04 21 */	bctrl 
/* 80390334 0038D274  90 7F 00 E8 */	stw r3, 0xe8(r31)
/* 80390338 0038D278  80 1F 00 E8 */	lwz r0, 0xe8(r31)
/* 8039033C 0038D27C  28 00 00 00 */	cmplwi r0, 0
/* 80390340 0038D280  40 82 00 18 */	bne .L_80390358
/* 80390344 0038D284  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390348 0038D288  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8039034C 0038D28C  38 80 06 05 */	li r4, 0x605
/* 80390350 0038D290  4C C6 31 82 */	crclr 6
/* 80390354 0038D294  4B C9 A2 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390358:
/* 80390358 0038D298  3C 80 73 31 */	lis r4, 0x73317031@ha
/* 8039035C 0038D29C  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 80390360 0038D2A0  7F A3 EB 78 */	mr r3, r29
/* 80390364 0038D2A4  38 FF 01 00 */	addi r7, r31, 0x100
/* 80390368 0038D2A8  38 C4 70 31 */	addi r6, r4, 0x73317031@l
/* 8039036C 0038D2AC  38 A0 50 68 */	li r5, 0x5068
/* 80390370 0038D2B0  39 00 00 05 */	li r8, 5
/* 80390374 0038D2B4  48 01 19 4D */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 80390378 0038D2B8  90 7F 00 B8 */	stw r3, 0xb8(r31)
/* 8039037C 0038D2BC  3C 80 73 32 */	lis r4, 0x73327031@ha
/* 80390380 0038D2C0  7F A3 EB 78 */	mr r3, r29
/* 80390384 0038D2C4  38 FF 01 04 */	addi r7, r31, 0x104
/* 80390388 0038D2C8  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 8039038C 0038D2CC  38 C4 70 31 */	addi r6, r4, 0x73327031@l
/* 80390390 0038D2D0  38 A0 50 68 */	li r5, 0x5068
/* 80390394 0038D2D4  39 00 00 05 */	li r8, 5
/* 80390398 0038D2D8  48 01 19 29 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 8039039C 0038D2DC  90 7F 00 BC */	stw r3, 0xbc(r31)
/* 803903A0 0038D2E0  7F F5 FB 78 */	mr r21, r31
/* 803903A4 0038D2E4  3A C1 00 30 */	addi r22, r1, 0x30
/* 803903A8 0038D2E8  3A E0 00 00 */	li r23, 0
/* 803903AC 0038D2EC  C8 9E 01 78 */	lfd f4, 0x178(r30)
/* 803903B0 0038D2F0  C8 7E 01 80 */	lfd f3, 0x180(r30)
/* 803903B4 0038D2F4  C8 5E 01 88 */	lfd f2, 0x188(r30)
/* 803903B8 0038D2F8  C8 3E 01 90 */	lfd f1, 0x190(r30)
/* 803903BC 0038D2FC  C8 1E 01 98 */	lfd f0, 0x198(r30)
/* 803903C0 0038D300  D8 81 00 30 */	stfd f4, 0x30(r1)
/* 803903C4 0038D304  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 803903C8 0038D308  D8 41 00 40 */	stfd f2, 0x40(r1)
/* 803903CC 0038D30C  D8 21 00 48 */	stfd f1, 0x48(r1)
/* 803903D0 0038D310  D8 01 00 50 */	stfd f0, 0x50(r1)
.L_803903D4:
/* 803903D4 0038D314  80 B6 00 00 */	lwz r5, 0(r22)
/* 803903D8 0038D318  7F A3 EB 78 */	mr r3, r29
/* 803903DC 0038D31C  80 D6 00 04 */	lwz r6, 4(r22)
/* 803903E0 0038D320  38 F5 01 08 */	addi r7, r21, 0x108
/* 803903E4 0038D324  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 803903E8 0038D328  39 00 00 03 */	li r8, 3
/* 803903EC 0038D32C  48 01 18 D5 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 803903F0 0038D330  3A F7 00 01 */	addi r23, r23, 1
/* 803903F4 0038D334  90 75 00 C0 */	stw r3, 0xc0(r21)
/* 803903F8 0038D338  2C 17 00 05 */	cmpwi r23, 5
/* 803903FC 0038D33C  3A B5 00 04 */	addi r21, r21, 4
/* 80390400 0038D340  3A D6 00 08 */	addi r22, r22, 8
/* 80390404 0038D344  41 80 FF D0 */	blt .L_803903D4
/* 80390408 0038D348  3C A0 73 5F */	lis r5, 0x735F7031@ha
/* 8039040C 0038D34C  3C 80 50 65 */	lis r4, 0x50656B69@ha
/* 80390410 0038D350  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 80390414 0038D354  7F A3 EB 78 */	mr r3, r29
/* 80390418 0038D358  38 C5 70 31 */	addi r6, r5, 0x735F7031@l
/* 8039041C 0038D35C  38 A4 6B 69 */	addi r5, r4, 0x50656B69@l
/* 80390420 0038D360  38 FF 01 1C */	addi r7, r31, 0x11c
/* 80390424 0038D364  39 00 00 02 */	li r8, 2
/* 80390428 0038D368  48 01 18 99 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 8039042C 0038D36C  90 7F 00 D4 */	stw r3, 0xd4(r31)
/* 80390430 0038D370  3C A0 73 5F */	lis r5, 0x735F7231@ha
/* 80390434 0038D374  3C 80 50 65 */	lis r4, 0x50656B69@ha
/* 80390438 0038D378  7F A3 EB 78 */	mr r3, r29
/* 8039043C 0038D37C  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 80390440 0038D380  38 C5 72 31 */	addi r6, r5, 0x735F7231@l
/* 80390444 0038D384  38 A4 6B 69 */	addi r5, r4, 0x50656B69@l
/* 80390448 0038D388  38 FF 01 20 */	addi r7, r31, 0x120
/* 8039044C 0038D38C  39 00 00 02 */	li r8, 2
/* 80390450 0038D390  48 01 18 71 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 80390454 0038D394  90 7F 00 D8 */	stw r3, 0xd8(r31)
/* 80390458 0038D398  3C A0 6F 6F */	lis r5, 0x6F6F7231@ha
/* 8039045C 0038D39C  3C 80 00 50 */	lis r4, 0x0050666C@ha
/* 80390460 0038D3A0  7F A3 EB 78 */	mr r3, r29
/* 80390464 0038D3A4  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 80390468 0038D3A8  38 C5 72 31 */	addi r6, r5, 0x6F6F7231@l
/* 8039046C 0038D3AC  38 A4 66 6C */	addi r5, r4, 0x0050666C@l
/* 80390470 0038D3B0  38 FF 01 24 */	addi r7, r31, 0x124
/* 80390474 0038D3B4  39 00 00 02 */	li r8, 2
/* 80390478 0038D3B8  48 01 18 49 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 8039047C 0038D3BC  38 00 00 5A */	li r0, 0x5a
/* 80390480 0038D3C0  90 7F 00 DC */	stw r3, 0xdc(r31)
/* 80390484 0038D3C4  38 A1 00 54 */	addi r5, r1, 0x54
/* 80390488 0038D3C8  38 9E 01 9C */	addi r4, r30, 0x19c
/* 8039048C 0038D3CC  7C 09 03 A6 */	mtctr r0
.L_80390490:
/* 80390490 0038D3D0  80 64 00 04 */	lwz r3, 4(r4)
/* 80390494 0038D3D4  84 04 00 08 */	lwzu r0, 8(r4)
/* 80390498 0038D3D8  90 65 00 04 */	stw r3, 4(r5)
/* 8039049C 0038D3DC  94 05 00 08 */	stwu r0, 8(r5)
/* 803904A0 0038D3E0  42 00 FF F0 */	bdnz .L_80390490
/* 803904A4 0038D3E4  38 60 00 78 */	li r3, 0x78
/* 803904A8 0038D3E8  4B C9 3B 05 */	bl __nwa__FUl
/* 803904AC 0038D3EC  3C 80 80 4E */	lis r4, mIconTexture__Q28Morimura16TChallengeSelect@ha
/* 803904B0 0038D3F0  90 7F 00 94 */	stw r3, 0x94(r31)
/* 803904B4 0038D3F4  3B 41 00 58 */	addi r26, r1, 0x58
/* 803904B8 0038D3F8  3B 00 00 00 */	li r24, 0
/* 803904BC 0038D3FC  3B 24 4F 70 */	addi r25, r4, mIconTexture__Q28Morimura16TChallengeSelect@l
/* 803904C0 0038D400  3B 60 00 00 */	li r27, 0
.L_803904C4:
/* 803904C4 0038D404  38 60 00 38 */	li r3, 0x38
/* 803904C8 0038D408  4B C9 39 DD */	bl __nw__FUl
/* 803904CC 0038D40C  7C 75 1B 79 */	or. r21, r3, r3
/* 803904D0 0038D410  41 82 01 14 */	beq .L_803905E4
/* 803904D4 0038D414  7F A3 EB 78 */	mr r3, r29
/* 803904D8 0038D418  80 BA 00 10 */	lwz r5, 0x10(r26)
/* 803904DC 0038D41C  81 9D 00 00 */	lwz r12, 0(r29)
/* 803904E0 0038D420  80 DA 00 14 */	lwz r6, 0x14(r26)
/* 803904E4 0038D424  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803904E8 0038D428  7D 89 03 A6 */	mtctr r12
/* 803904EC 0038D42C  4E 80 04 21 */	bctrl 
/* 803904F0 0038D430  7C 76 1B 78 */	mr r22, r3
/* 803904F4 0038D434  7F A3 EB 78 */	mr r3, r29
/* 803904F8 0038D438  81 9D 00 00 */	lwz r12, 0(r29)
/* 803904FC 0038D43C  80 BA 00 08 */	lwz r5, 8(r26)
/* 80390500 0038D440  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80390504 0038D444  80 DA 00 0C */	lwz r6, 0xc(r26)
/* 80390508 0038D448  7D 89 03 A6 */	mtctr r12
/* 8039050C 0038D44C  4E 80 04 21 */	bctrl 
/* 80390510 0038D450  7C 77 1B 78 */	mr r23, r3
/* 80390514 0038D454  7F A3 EB 78 */	mr r3, r29
/* 80390518 0038D458  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039051C 0038D45C  80 BA 00 00 */	lwz r5, 0(r26)
/* 80390520 0038D460  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80390524 0038D464  80 DA 00 04 */	lwz r6, 4(r26)
/* 80390528 0038D468  7D 89 03 A6 */	mtctr r12
/* 8039052C 0038D46C  4E 80 04 21 */	bctrl 
/* 80390530 0038D470  38 00 00 00 */	li r0, 0
/* 80390534 0038D474  C0 22 0C 90 */	lfs f1, lbl_8051EFF0@sda21(r2)
/* 80390538 0038D478  90 15 00 00 */	stw r0, 0(r21)
/* 8039053C 0038D47C  28 03 00 00 */	cmplwi r3, 0
/* 80390540 0038D480  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390544 0038D484  90 75 00 04 */	stw r3, 4(r21)
/* 80390548 0038D488  92 F5 00 08 */	stw r23, 8(r21)
/* 8039054C 0038D48C  92 D5 00 0C */	stw r22, 0xc(r21)
/* 80390550 0038D490  90 15 00 10 */	stw r0, 0x10(r21)
/* 80390554 0038D494  D0 35 00 14 */	stfs f1, 0x14(r21)
/* 80390558 0038D498  D0 15 00 18 */	stfs f0, 0x18(r21)
/* 8039055C 0038D49C  90 15 00 1C */	stw r0, 0x1c(r21)
/* 80390560 0038D4A0  90 15 00 20 */	stw r0, 0x20(r21)
/* 80390564 0038D4A4  98 15 00 24 */	stb r0, 0x24(r21)
/* 80390568 0038D4A8  D0 15 00 34 */	stfs f0, 0x34(r21)
/* 8039056C 0038D4AC  40 82 00 18 */	bne .L_80390584
/* 80390570 0038D4B0  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390574 0038D4B4  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390578 0038D4B8  38 80 01 66 */	li r4, 0x166
/* 8039057C 0038D4BC  4C C6 31 82 */	crclr 6
/* 80390580 0038D4C0  4B C9 A0 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390584:
/* 80390584 0038D4C4  28 17 00 00 */	cmplwi r23, 0
/* 80390588 0038D4C8  40 82 00 18 */	bne .L_803905A0
/* 8039058C 0038D4CC  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390590 0038D4D0  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390594 0038D4D4  38 80 01 67 */	li r4, 0x167
/* 80390598 0038D4D8  4C C6 31 82 */	crclr 6
/* 8039059C 0038D4DC  4B C9 A0 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803905A0:
/* 803905A0 0038D4E0  28 16 00 00 */	cmplwi r22, 0
/* 803905A4 0038D4E4  40 82 00 18 */	bne .L_803905BC
/* 803905A8 0038D4E8  38 7E 00 14 */	addi r3, r30, 0x14
/* 803905AC 0038D4EC  38 BE 00 2C */	addi r5, r30, 0x2c
/* 803905B0 0038D4F0  38 80 01 68 */	li r4, 0x168
/* 803905B4 0038D4F4  4C C6 31 82 */	crclr 6
/* 803905B8 0038D4F8  4B C9 A0 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803905BC:
/* 803905BC 0038D4FC  38 60 00 1C */	li r3, 0x1c
/* 803905C0 0038D500  4B C9 38 E5 */	bl __nw__FUl
/* 803905C4 0038D504  7C 60 1B 79 */	or. r0, r3, r3
/* 803905C8 0038D508  41 82 00 0C */	beq .L_803905D4
/* 803905CC 0038D50C  4B F9 88 19 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 803905D0 0038D510  7C 60 1B 78 */	mr r0, r3
.L_803905D4:
/* 803905D4 0038D514  90 15 00 10 */	stw r0, 0x10(r21)
/* 803905D8 0038D518  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 803905DC 0038D51C  D0 15 00 28 */	stfs f0, 0x28(r21)
/* 803905E0 0038D520  D0 15 00 2C */	stfs f0, 0x2c(r21)
.L_803905E4:
/* 803905E4 0038D524  80 BF 00 94 */	lwz r5, 0x94(r31)
/* 803905E8 0038D528  7F E3 FB 78 */	mr r3, r31
/* 803905EC 0038D52C  7F 04 C3 78 */	mr r4, r24
/* 803905F0 0038D530  7E A5 D9 2E */	stwx r21, r5, r27
/* 803905F4 0038D534  48 00 21 11 */	bl getState__Q28Morimura16TChallengeSelectFi
/* 803905F8 0038D538  80 9F 00 94 */	lwz r4, 0x94(r31)
/* 803905FC 0038D53C  7C 77 1B 78 */	mr r23, r3
/* 80390600 0038D540  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80390604 0038D544  56 E0 10 3A */	slwi r0, r23, 2
/* 80390608 0038D548  7E A4 D8 2E */	lwzx r21, r4, r27
/* 8039060C 0038D54C  38 A0 00 00 */	li r5, 0
/* 80390610 0038D550  90 75 00 00 */	stw r3, 0(r21)
/* 80390614 0038D554  80 75 00 04 */	lwz r3, 4(r21)
/* 80390618 0038D558  7C 99 00 2E */	lwzx r4, r25, r0
/* 8039061C 0038D55C  81 83 00 00 */	lwz r12, 0(r3)
/* 80390620 0038D560  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 80390624 0038D564  7D 89 03 A6 */	mtctr r12
/* 80390628 0038D568  4E 80 04 21 */	bctrl 
/* 8039062C 0038D56C  92 F5 00 1C */	stw r23, 0x1c(r21)
/* 80390630 0038D570  7F E3 FB 78 */	mr r3, r31
/* 80390634 0038D574  7F 04 C3 78 */	mr r4, r24
/* 80390638 0038D578  93 15 00 30 */	stw r24, 0x30(r21)
/* 8039063C 0038D57C  48 00 21 F5 */	bl getAfterState__Q28Morimura16TChallengeSelectFi
/* 80390640 0038D580  80 9F 00 94 */	lwz r4, 0x94(r31)
/* 80390644 0038D584  3B 18 00 01 */	addi r24, r24, 1
/* 80390648 0038D588  2C 18 00 1E */	cmpwi r24, 0x1e
/* 8039064C 0038D58C  3B 5A 00 18 */	addi r26, r26, 0x18
/* 80390650 0038D590  7C 84 D8 2E */	lwzx r4, r4, r27
/* 80390654 0038D594  3B 7B 00 04 */	addi r27, r27, 4
/* 80390658 0038D598  90 64 00 20 */	stw r3, 0x20(r4)
/* 8039065C 0038D59C  41 80 FE 68 */	blt .L_803904C4
/* 80390660 0038D5A0  7F E3 FB 78 */	mr r3, r31
/* 80390664 0038D5A4  48 00 23 55 */	bl getIndexMax__Q28Morimura16TChallengeSelectFv
/* 80390668 0038D5A8  90 7F 01 30 */	stw r3, 0x130(r31)
/* 8039066C 0038D5AC  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 80390670 0038D5B0  2C 03 00 00 */	cmpwi r3, 0
/* 80390674 0038D5B4  40 81 00 0C */	ble .L_80390680
/* 80390678 0038D5B8  38 03 FF FF */	addi r0, r3, -1
/* 8039067C 0038D5BC  90 1F 01 30 */	stw r0, 0x130(r31)
.L_80390680:
/* 80390680 0038D5C0  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 80390684 0038D5C4  7F E3 FB 78 */	mr r3, r31
/* 80390688 0038D5C8  48 00 1B B5 */	bl setInfo__Q28Morimura16TChallengeSelectFi
/* 8039068C 0038D5CC  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 80390690 0038D5D0  7F E3 FB 78 */	mr r3, r31
/* 80390694 0038D5D4  48 00 1F A1 */	bl setStageName__Q28Morimura16TChallengeSelectFi
/* 80390698 0038D5D8  3A C0 00 00 */	li r22, 0
/* 8039069C 0038D5DC  3A A0 00 00 */	li r21, 0
/* 803906A0 0038D5E0  3B 00 00 01 */	li r24, 1
/* 803906A4 0038D5E4  48 00 00 38 */	b .L_803906DC
.L_803906A8:
/* 803906A8 0038D5E8  7F E3 FB 78 */	mr r3, r31
/* 803906AC 0038D5EC  7E C4 B3 78 */	mr r4, r22
/* 803906B0 0038D5F0  48 00 22 25 */	bl isChangeState__Q28Morimura16TChallengeSelectFi
/* 803906B4 0038D5F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803906B8 0038D5F8  41 82 00 1C */	beq .L_803906D4
/* 803906BC 0038D5FC  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 803906C0 0038D600  7C 63 A8 2E */	lwzx r3, r3, r21
/* 803906C4 0038D604  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803906C8 0038D608  2C 00 00 03 */	cmpwi r0, 3
/* 803906CC 0038D60C  40 80 00 08 */	bge .L_803906D4
/* 803906D0 0038D610  9B 03 00 24 */	stb r24, 0x24(r3)
.L_803906D4:
/* 803906D4 0038D614  3A B5 00 04 */	addi r21, r21, 4
/* 803906D8 0038D618  3A D6 00 01 */	addi r22, r22, 1
.L_803906DC:
/* 803906DC 0038D61C  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 803906E0 0038D620  7C 16 00 00 */	cmpw r22, r0
/* 803906E4 0038D624  40 81 FF C4 */	ble .L_803906A8
/* 803906E8 0038D628  3C 60 80 50 */	lis r3, mPadStatus__10JUTGamePad@ha
/* 803906EC 0038D62C  38 63 6F 48 */	addi r3, r3, mPadStatus__10JUTGamePad@l
/* 803906F0 0038D630  88 03 00 16 */	lbz r0, 0x16(r3)
/* 803906F4 0038D634  7C 00 07 74 */	extsb r0, r0
/* 803906F8 0038D638  2C 00 FF FF */	cmpwi r0, -1
/* 803906FC 0038D63C  41 82 00 18 */	beq .L_80390714
/* 80390700 0038D640  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 80390704 0038D644  38 63 41 3C */	addi r3, r3, gGameConfig__4Game@l
/* 80390708 0038D648  80 03 02 38 */	lwz r0, 0x238(r3)
/* 8039070C 0038D64C  2C 00 00 00 */	cmpwi r0, 0
/* 80390710 0038D650  41 82 00 10 */	beq .L_80390720
.L_80390714:
/* 80390714 0038D654  38 00 00 00 */	li r0, 0
/* 80390718 0038D658  98 0D 85 D0 */	stb r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039071C 0038D65C  48 00 00 0C */	b .L_80390728
.L_80390720:
/* 80390720 0038D660  38 00 00 01 */	li r0, 1
/* 80390724 0038D664  98 0D 85 D0 */	stb r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390728:
/* 80390728 0038D668  38 00 00 01 */	li r0, 1
/* 8039072C 0038D66C  98 0D 85 C0 */	stb r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390730 0038D670  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80390734 0038D674  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80390738 0038D678  2C 00 00 01 */	cmpwi r0, 1
/* 8039073C 0038D67C  40 82 00 0C */	bne .L_80390748
/* 80390740 0038D680  38 00 00 00 */	li r0, 0
/* 80390744 0038D684  98 0D 85 C0 */	stb r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390748:
/* 80390748 0038D688  88 0D 85 D0 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039074C 0038D68C  28 00 00 00 */	cmplwi r0, 0
/* 80390750 0038D690  40 82 00 0C */	bne .L_8039075C
/* 80390754 0038D694  38 00 00 01 */	li r0, 1
/* 80390758 0038D698  98 0D 85 C0 */	stb r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
.L_8039075C:
/* 8039075C 0038D69C  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80390760 0038D6A0  38 9E 06 C4 */	addi r4, r30, 0x6c4
/* 80390764 0038D6A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80390768 0038D6A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039076C 0038D6AC  7D 89 03 A6 */	mtctr r12
/* 80390770 0038D6B0  4E 80 04 21 */	bctrl 
/* 80390774 0038D6B4  7C 76 1B 79 */	or. r22, r3, r3
/* 80390778 0038D6B8  82 BF 00 84 */	lwz r21, 0x84(r31)
/* 8039077C 0038D6BC  40 82 00 18 */	bne .L_80390794
/* 80390780 0038D6C0  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390784 0038D6C4  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390788 0038D6C8  38 80 04 B7 */	li r4, 0x4b7
/* 8039078C 0038D6CC  4C C6 31 82 */	crclr 6
/* 80390790 0038D6D0  4B C9 9E B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390794:
/* 80390794 0038D6D4  38 60 01 68 */	li r3, 0x168
/* 80390798 0038D6D8  4B C9 37 0D */	bl __nw__FUl
/* 8039079C 0038D6DC  7C 60 1B 79 */	or. r0, r3, r3
/* 803907A0 0038D6E0  41 82 00 10 */	beq .L_803907B0
/* 803907A4 0038D6E4  7E C4 B3 78 */	mr r4, r22
/* 803907A8 0038D6E8  4B CA 9A D1 */	bl __ct__10J2DPictureFPC7ResTIMG
/* 803907AC 0038D6EC  7C 60 1B 78 */	mr r0, r3
.L_803907B0:
/* 803907B0 0038D6F0  90 15 00 20 */	stw r0, 0x20(r21)
/* 803907B4 0038D6F4  7F 83 E3 78 */	mr r3, r28
/* 803907B8 0038D6F8  4B C9 2D ED */	bl becomeCurrentHeap__7JKRHeapFv
/* 803907BC 0038D6FC  BA A1 07 74 */	lmw r21, 0x774(r1)
/* 803907C0 0038D700  80 01 07 A4 */	lwz r0, 0x7a4(r1)
/* 803907C4 0038D704  7C 08 03 A6 */	mtlr r0
/* 803907C8 0038D708  38 21 07 A0 */	addi r1, r1, 0x7a0
/* 803907CC 0038D70C  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura16TChallengeSelectFP10JKRArchive

.else
.fn doCreate__Q28Morimura16TChallengeSelectFP10JKRArchive, global
/* 8038EBE8 0038BB28  94 21 F8 60 */	stwu r1, -0x7a0(r1)
/* 8038EBEC 0038BB2C  7C 08 02 A6 */	mflr r0
/* 8038EBF0 0038BB30  90 01 07 A4 */	stw r0, 0x7a4(r1)
/* 8038EBF4 0038BB34  BE A1 07 74 */	stmw r21, 0x774(r1)
/* 8038EBF8 0038BB38  7C 9D 23 78 */	mr r29, r4
/* 8038EBFC 0038BB3C  3C 80 80 49 */	lis r4, lbl_80493FC0@ha
/* 8038EC00 0038BB40  7C 7F 1B 78 */	mr r31, r3
/* 8038EC04 0038BB44  3B C4 3F C0 */	addi r30, r4, lbl_80493FC0@l
/* 8038EC08 0038BB48  3B 80 00 00 */	li r28, 0
/* 8038EC0C 0038BB4C  93 A3 00 78 */	stw r29, 0x78(r3)
/* 8038EC10 0038BB50  48 0C 53 99 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8038EC14 0038BB54  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 8038EC18 0038BB58  3C C0 4C 45 */	lis r6, 0x4C454354@ha
/* 8038EC1C 0038BB5C  3C A0 43 48 */	lis r5, 0x43485345@ha
/* 8038EC20 0038BB60  7C 75 1B 78 */	mr r21, r3
/* 8038EC24 0038BB64  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 8038EC28 0038BB68  38 C6 43 54 */	addi r6, r6, 0x4C454354@l
/* 8038EC2C 0038BB6C  38 A5 53 45 */	addi r5, r5, 0x43485345@l
/* 8038EC30 0038BB70  4B F8 06 ED */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8038EC34 0038BB74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038EC38 0038BB78  41 82 00 14 */	beq .L_8038EC4C
/* 8038EC3C 0038BB7C  92 BF 00 90 */	stw r21, 0x90(r31)
/* 8038EC40 0038BB80  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 8038EC44 0038BB84  83 83 00 14 */	lwz r28, 0x14(r3)
/* 8038EC48 0038BB88  48 00 00 0C */	b .L_8038EC54
.L_8038EC4C:
/* 8038EC4C 0038BB8C  38 00 00 01 */	li r0, 1
/* 8038EC50 0038BB90  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
.L_8038EC54:
/* 8038EC54 0038BB94  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8038EC58 0038BB98  28 00 00 00 */	cmplwi r0, 0
/* 8038EC5C 0038BB9C  41 82 01 CC */	beq .L_8038EE28
/* 8038EC60 0038BBA0  80 8D 99 90 */	lwz r4, mDebugHeapParent__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EC64 0038BBA4  28 04 00 00 */	cmplwi r4, 0
/* 8038EC68 0038BBA8  41 82 01 28 */	beq .L_8038ED90
/* 8038EC6C 0038BBAC  3C 60 00 10 */	lis r3, 0x10
/* 8038EC70 0038BBB0  38 A0 00 01 */	li r5, 1
/* 8038EC74 0038BBB4  4B C9 12 55 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 8038EC78 0038BBB8  28 03 00 00 */	cmplwi r3, 0
/* 8038EC7C 0038BBBC  90 6D 99 94 */	stw r3, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EC80 0038BBC0  40 82 00 18 */	bne .L_8038EC98
/* 8038EC84 0038BBC4  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038EC88 0038BBC8  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038EC8C 0038BBCC  38 80 05 3B */	li r4, 0x53b
/* 8038EC90 0038BBD0  4C C6 31 82 */	crclr 6
/* 8038EC94 0038BBD4  4B C9 B9 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038EC98:
/* 8038EC98 0038BBD8  80 8D 99 94 */	lwz r4, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EC9C 0038BBDC  38 60 00 24 */	li r3, 0x24
/* 8038ECA0 0038BBE0  38 A0 00 00 */	li r5, 0
/* 8038ECA4 0038BBE4  4B C9 52 9D */	bl __nw__FUlP7JKRHeapi
/* 8038ECA8 0038BBE8  28 03 00 00 */	cmplwi r3, 0
/* 8038ECAC 0038BBEC  41 82 00 44 */	beq .L_8038ECF0
/* 8038ECB0 0038BBF0  3C A0 80 4B */	lis r5, __vt__Q32og6Screen14DispMemberBase@ha
/* 8038ECB4 0038BBF4  3C 80 80 4C */	lis r4, __vt__Q28Morimura25DispMemberChallengeSelect@ha
/* 8038ECB8 0038BBF8  38 05 11 48 */	addi r0, r5, __vt__Q32og6Screen14DispMemberBase@l
/* 8038ECBC 0038BBFC  38 A0 00 00 */	li r5, 0
/* 8038ECC0 0038BC00  90 03 00 00 */	stw r0, 0(r3)
/* 8038ECC4 0038BC04  38 84 0E 28 */	addi r4, r4, __vt__Q28Morimura25DispMemberChallengeSelect@l
/* 8038ECC8 0038BC08  38 00 FF FF */	li r0, -1
/* 8038ECCC 0038BC0C  90 A3 00 04 */	stw r5, 4(r3)
/* 8038ECD0 0038BC10  90 83 00 00 */	stw r4, 0(r3)
/* 8038ECD4 0038BC14  90 A3 00 08 */	stw r5, 8(r3)
/* 8038ECD8 0038BC18  90 A3 00 0C */	stw r5, 0xc(r3)
/* 8038ECDC 0038BC1C  90 03 00 10 */	stw r0, 0x10(r3)
/* 8038ECE0 0038BC20  90 A3 00 14 */	stw r5, 0x14(r3)
/* 8038ECE4 0038BC24  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8038ECE8 0038BC28  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 8038ECEC 0038BC2C  90 A3 00 20 */	stw r5, 0x20(r3)
.L_8038ECF0:
/* 8038ECF0 0038BC30  90 7F 00 90 */	stw r3, 0x90(r31)
/* 8038ECF4 0038BC34  38 60 00 28 */	li r3, 0x28
/* 8038ECF8 0038BC38  80 0D 99 94 */	lwz r0, mDebugHeap__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038ECFC 0038BC3C  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 8038ED00 0038BC40  90 04 00 0C */	stw r0, 0xc(r4)
/* 8038ED04 0038BC44  4B C9 51 A1 */	bl __nw__FUl
/* 8038ED08 0038BC48  28 03 00 00 */	cmplwi r3, 0
/* 8038ED0C 0038BC4C  41 82 00 5C */	beq .L_8038ED68
/* 8038ED10 0038BC50  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 8038ED14 0038BC54  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 8038ED18 0038BC58  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8038ED1C 0038BC5C  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 8038ED20 0038BC60  90 03 00 00 */	stw r0, 0(r3)
/* 8038ED24 0038BC64  39 00 00 00 */	li r8, 0
/* 8038ED28 0038BC68  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 8038ED2C 0038BC6C  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 8038ED30 0038BC70  91 03 00 04 */	stw r8, 4(r3)
/* 8038ED34 0038BC74  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 8038ED38 0038BC78  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 8038ED3C 0038BC7C  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 8038ED40 0038BC80  90 03 00 00 */	stw r0, 0(r3)
/* 8038ED44 0038BC84  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 8038ED48 0038BC88  38 00 00 B4 */	li r0, 0xb4
/* 8038ED4C 0038BC8C  91 03 00 08 */	stw r8, 8(r3)
/* 8038ED50 0038BC90  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8038ED54 0038BC94  90 A3 00 10 */	stw r5, 0x10(r3)
/* 8038ED58 0038BC98  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8038ED5C 0038BC9C  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8038ED60 0038BCA0  98 03 00 20 */	stb r0, 0x20(r3)
/* 8038ED64 0038BCA4  99 03 00 21 */	stb r8, 0x21(r3)
.L_8038ED68:
/* 8038ED68 0038BCA8  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 8038ED6C 0038BCAC  90 64 00 20 */	stw r3, 0x20(r4)
/* 8038ED70 0038BCB0  7F E3 FB 78 */	mr r3, r31
/* 8038ED74 0038BCB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8038ED78 0038BCB8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8038ED7C 0038BCBC  7D 89 03 A6 */	mtctr r12
/* 8038ED80 0038BCC0  4E 80 04 21 */	bctrl 
/* 8038ED84 0038BCC4  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 8038ED88 0038BCC8  48 0C 33 39 */	bl setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
/* 8038ED8C 0038BCCC  48 00 00 18 */	b .L_8038EDA4
.L_8038ED90:
/* 8038ED90 0038BCD0  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038ED94 0038BCD4  38 BE 04 70 */	addi r5, r30, 0x470
/* 8038ED98 0038BCD8  38 80 05 45 */	li r4, 0x545
/* 8038ED9C 0038BCDC  4C C6 31 82 */	crclr 6
/* 8038EDA0 0038BCE0  4B C9 B8 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038EDA4:
/* 8038EDA4 0038BCE4  38 60 00 94 */	li r3, 0x94
/* 8038EDA8 0038BCE8  4B C9 50 FD */	bl __nw__FUl
/* 8038EDAC 0038BCEC  7C 60 1B 79 */	or. r0, r3, r3
/* 8038EDB0 0038BCF0  41 82 00 0C */	beq .L_8038EDBC
/* 8038EDB4 0038BCF4  4B E9 EB 11 */	bl __ct__Q34Game13ChallengeGame9StageListFv
/* 8038EDB8 0038BCF8  7C 60 1B 78 */	mr r0, r3
.L_8038EDBC:
/* 8038EDBC 0038BCFC  90 1F 00 7C */	stw r0, 0x7c(r31)
/* 8038EDC0 0038BD00  38 00 00 00 */	li r0, 0
/* 8038EDC4 0038BD04  38 7E 04 98 */	addi r3, r30, 0x498
/* 8038EDC8 0038BD08  38 80 00 00 */	li r4, 0
/* 8038EDCC 0038BD0C  90 01 00 08 */	stw r0, 8(r1)
/* 8038EDD0 0038BD10  38 A0 00 00 */	li r5, 0
/* 8038EDD4 0038BD14  38 C0 00 00 */	li r6, 0
/* 8038EDD8 0038BD18  38 E0 00 00 */	li r7, 0
/* 8038EDDC 0038BD1C  39 00 00 02 */	li r8, 2
/* 8038EDE0 0038BD20  39 20 00 00 */	li r9, 0
/* 8038EDE4 0038BD24  39 40 00 00 */	li r10, 0
/* 8038EDE8 0038BD28  4B C9 03 A1 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8038EDEC 0038BD2C  28 03 00 00 */	cmplwi r3, 0
/* 8038EDF0 0038BD30  41 82 00 38 */	beq .L_8038EE28
/* 8038EDF4 0038BD34  7C 64 1B 78 */	mr r4, r3
/* 8038EDF8 0038BD38  38 61 03 28 */	addi r3, r1, 0x328
/* 8038EDFC 0038BD3C  38 A0 FF FF */	li r5, -1
/* 8038EE00 0038BD40  48 08 6A F9 */	bl __ct__9RamStreamFPvi
/* 8038EE04 0038BD44  38 00 00 01 */	li r0, 1
/* 8038EE08 0038BD48  2C 00 00 01 */	cmpwi r0, 1
/* 8038EE0C 0038BD4C  90 01 03 34 */	stw r0, 0x334(r1)
/* 8038EE10 0038BD50  40 82 00 0C */	bne .L_8038EE1C
/* 8038EE14 0038BD54  38 00 00 00 */	li r0, 0
/* 8038EE18 0038BD58  90 01 07 3C */	stw r0, 0x73c(r1)
.L_8038EE1C:
/* 8038EE1C 0038BD5C  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8038EE20 0038BD60  38 81 03 28 */	addi r4, r1, 0x328
/* 8038EE24 0038BD64  4B E9 EB B5 */	bl read__Q34Game13ChallengeGame9StageListFR6Stream
.L_8038EE28:
/* 8038EE28 0038BD68  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8038EE2C 0038BD6C  28 00 00 00 */	cmplwi r0, 0
/* 8038EE30 0038BD70  40 82 00 74 */	bne .L_8038EEA4
/* 8038EE34 0038BD74  38 60 00 28 */	li r3, 0x28
/* 8038EE38 0038BD78  4B C9 50 6D */	bl __nw__FUl
/* 8038EE3C 0038BD7C  28 03 00 00 */	cmplwi r3, 0
/* 8038EE40 0038BD80  41 82 00 5C */	beq .L_8038EE9C
/* 8038EE44 0038BD84  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 8038EE48 0038BD88  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 8038EE4C 0038BD8C  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8038EE50 0038BD90  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 8038EE54 0038BD94  90 03 00 00 */	stw r0, 0(r3)
/* 8038EE58 0038BD98  39 00 00 00 */	li r8, 0
/* 8038EE5C 0038BD9C  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 8038EE60 0038BDA0  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 8038EE64 0038BDA4  91 03 00 04 */	stw r8, 4(r3)
/* 8038EE68 0038BDA8  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 8038EE6C 0038BDAC  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 8038EE70 0038BDB0  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 8038EE74 0038BDB4  90 03 00 00 */	stw r0, 0(r3)
/* 8038EE78 0038BDB8  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 8038EE7C 0038BDBC  38 00 00 B4 */	li r0, 0xb4
/* 8038EE80 0038BDC0  91 03 00 08 */	stw r8, 8(r3)
/* 8038EE84 0038BDC4  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8038EE88 0038BDC8  90 A3 00 10 */	stw r5, 0x10(r3)
/* 8038EE8C 0038BDCC  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8038EE90 0038BDD0  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8038EE94 0038BDD4  98 03 00 20 */	stb r0, 0x20(r3)
/* 8038EE98 0038BDD8  99 03 00 21 */	stb r8, 0x21(r3)
.L_8038EE9C:
/* 8038EE9C 0038BDDC  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 8038EEA0 0038BDE0  90 64 00 20 */	stw r3, 0x20(r4)
.L_8038EEA4:
/* 8038EEA4 0038BDE4  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8038EEA8 0038BDE8  28 00 00 00 */	cmplwi r0, 0
/* 8038EEAC 0038BDEC  41 82 03 70 */	beq .L_8038F21C
/* 8038EEB0 0038BDF0  4B D3 A6 F1 */	bl rand
/* 8038EEB4 0038BDF4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8038EEB8 0038BDF8  3C 60 43 30 */	lis r3, 0x4330
/* 8038EEBC 0038BDFC  90 01 07 4C */	stw r0, 0x74c(r1)
/* 8038EEC0 0038BE00  88 0D 99 81 */	lbz r0, mAllCourseOpen__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038EEC4 0038BE04  90 61 07 48 */	stw r3, 0x748(r1)
/* 8038EEC8 0038BE08  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038EECC 0038BE0C  28 00 00 00 */	cmplwi r0, 0
/* 8038EED0 0038BE10  C8 01 07 48 */	lfd f0, 0x748(r1)
/* 8038EED4 0038BE14  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038EED8 0038BE18  EC 40 10 28 */	fsubs f2, f0, f2
/* 8038EEDC 0038BE1C  C0 02 0C 38 */	lfs f0, lbl_8051EF98@sda21(r2)
/* 8038EEE0 0038BE20  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038EEE4 0038BE24  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038EEE8 0038BE28  FC 00 00 1E */	fctiwz f0, f0
/* 8038EEEC 0038BE2C  D8 01 07 50 */	stfd f0, 0x750(r1)
/* 8038EEF0 0038BE30  83 21 07 54 */	lwz r25, 0x754(r1)
/* 8038EEF4 0038BE34  41 82 00 08 */	beq .L_8038EEFC
/* 8038EEF8 0038BE38  3B 20 00 1E */	li r25, 0x1e
.L_8038EEFC:
/* 8038EEFC 0038BE3C  4B D3 A6 A5 */	bl rand
/* 8038EF00 0038BE40  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8038EF04 0038BE44  3C 80 43 30 */	lis r4, 0x4330
/* 8038EF08 0038BE48  90 01 07 5C */	stw r0, 0x75c(r1)
/* 8038EF0C 0038BE4C  6F 20 80 00 */	xoris r0, r25, 0x8000
/* 8038EF10 0038BE50  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038EF14 0038BE54  38 60 00 78 */	li r3, 0x78
/* 8038EF18 0038BE58  90 81 07 58 */	stw r4, 0x758(r1)
/* 8038EF1C 0038BE5C  C0 02 0C 30 */	lfs f0, lbl_8051EF90@sda21(r2)
/* 8038EF20 0038BE60  C8 21 07 58 */	lfd f1, 0x758(r1)
/* 8038EF24 0038BE64  90 01 07 64 */	stw r0, 0x764(r1)
/* 8038EF28 0038BE68  EC 21 10 28 */	fsubs f1, f1, f2
/* 8038EF2C 0038BE6C  90 81 07 60 */	stw r4, 0x760(r1)
/* 8038EF30 0038BE70  EC 21 00 24 */	fdivs f1, f1, f0
/* 8038EF34 0038BE74  C8 01 07 60 */	lfd f0, 0x760(r1)
/* 8038EF38 0038BE78  EC 00 10 28 */	fsubs f0, f0, f2
/* 8038EF3C 0038BE7C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038EF40 0038BE80  FC 00 00 1E */	fctiwz f0, f0
/* 8038EF44 0038BE84  D8 01 07 68 */	stfd f0, 0x768(r1)
/* 8038EF48 0038BE88  83 81 07 6C */	lwz r28, 0x76c(r1)
/* 8038EF4C 0038BE8C  4B C9 50 61 */	bl __nwa__FUl
/* 8038EF50 0038BE90  90 7F 00 98 */	stw r3, 0x98(r31)
/* 8038EF54 0038BE94  3B 00 00 00 */	li r24, 0
/* 8038EF58 0038BE98  3B 40 00 00 */	li r26, 0
.L_8038EF5C:
/* 8038EF5C 0038BE9C  38 60 00 2C */	li r3, 0x2c
/* 8038EF60 0038BEA0  4B C9 4F 45 */	bl __nw__FUl
/* 8038EF64 0038BEA4  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 8038EF68 0038BEA8  38 00 00 00 */	li r0, 0
/* 8038EF6C 0038BEAC  7C 18 C8 00 */	cmpw r24, r25
/* 8038EF70 0038BEB0  7C 64 D1 2E */	stwx r3, r4, r26
/* 8038EF74 0038BEB4  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038EF78 0038BEB8  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038EF7C 0038BEBC  98 03 00 03 */	stb r0, 3(r3)
/* 8038EF80 0038BEC0  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038EF84 0038BEC4  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038EF88 0038BEC8  98 03 00 02 */	stb r0, 2(r3)
/* 8038EF8C 0038BECC  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038EF90 0038BED0  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038EF94 0038BED4  98 03 00 01 */	stb r0, 1(r3)
/* 8038EF98 0038BED8  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038EF9C 0038BEDC  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038EFA0 0038BEE0  98 03 00 00 */	stb r0, 0(r3)
/* 8038EFA4 0038BEE4  41 81 02 68 */	bgt .L_8038F20C
/* 8038EFA8 0038BEE8  4B D3 A5 F9 */	bl rand
/* 8038EFAC 0038BEEC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038EFB0 0038BEF0  3C 00 43 30 */	lis r0, 0x4330
/* 8038EFB4 0038BEF4  90 61 07 6C */	stw r3, 0x76c(r1)
/* 8038EFB8 0038BEF8  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 8038EFBC 0038BEFC  90 01 07 68 */	stw r0, 0x768(r1)
/* 8038EFC0 0038BF00  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038EFC4 0038BF04  C8 41 07 68 */	lfd f2, 0x768(r1)
/* 8038EFC8 0038BF08  C0 02 0C A8 */	lfs f0, lbl_8051F008@sda21(r2)
/* 8038EFCC 0038BF0C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8038EFD0 0038BF10  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038EFD4 0038BF14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038EFD8 0038BF18  40 80 00 18 */	bge .L_8038EFF0
/* 8038EFDC 0038BF1C  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038EFE0 0038BF20  38 00 00 01 */	li r0, 1
/* 8038EFE4 0038BF24  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038EFE8 0038BF28  98 03 00 03 */	stb r0, 3(r3)
/* 8038EFEC 0038BF2C  48 00 00 34 */	b .L_8038F020
.L_8038EFF0:
/* 8038EFF0 0038BF30  C0 02 0C 3C */	lfs f0, lbl_8051EF9C@sda21(r2)
/* 8038EFF4 0038BF34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038EFF8 0038BF38  40 80 00 18 */	bge .L_8038F010
/* 8038EFFC 0038BF3C  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F000 0038BF40  38 00 00 01 */	li r0, 1
/* 8038F004 0038BF44  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F008 0038BF48  98 03 00 02 */	stb r0, 2(r3)
/* 8038F00C 0038BF4C  48 00 00 14 */	b .L_8038F020
.L_8038F010:
/* 8038F010 0038BF50  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F014 0038BF54  38 00 00 01 */	li r0, 1
/* 8038F018 0038BF58  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F01C 0038BF5C  98 03 00 00 */	stb r0, 0(r3)
.L_8038F020:
/* 8038F020 0038BF60  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F024 0038BF64  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F028 0038BF68  88 03 00 03 */	lbz r0, 3(r3)
/* 8038F02C 0038BF6C  28 00 00 00 */	cmplwi r0, 0
/* 8038F030 0038BF70  40 82 00 48 */	bne .L_8038F078
/* 8038F034 0038BF74  4B D3 A5 6D */	bl rand
/* 8038F038 0038BF78  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038F03C 0038BF7C  3C 00 43 30 */	lis r0, 0x4330
/* 8038F040 0038BF80  90 61 07 6C */	stw r3, 0x76c(r1)
/* 8038F044 0038BF84  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 8038F048 0038BF88  90 01 07 68 */	stw r0, 0x768(r1)
/* 8038F04C 0038BF8C  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038F050 0038BF90  C8 41 07 68 */	lfd f2, 0x768(r1)
/* 8038F054 0038BF94  C0 02 0C 3C */	lfs f0, lbl_8051EF9C@sda21(r2)
/* 8038F058 0038BF98  EC 42 18 28 */	fsubs f2, f2, f3
/* 8038F05C 0038BF9C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038F060 0038BFA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038F064 0038BFA4  40 80 00 14 */	bge .L_8038F078
/* 8038F068 0038BFA8  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F06C 0038BFAC  38 00 00 01 */	li r0, 1
/* 8038F070 0038BFB0  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F074 0038BFB4  98 03 00 01 */	stb r0, 1(r3)
.L_8038F078:
/* 8038F078 0038BFB8  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8038F07C 0038BFBC  7F 04 C3 78 */	mr r4, r24
/* 8038F080 0038BFC0  4B E9 EA 65 */	bl getStageData__Q34Game13ChallengeGame9StageListFi
/* 8038F084 0038BFC4  7C 7B 1B 79 */	or. r27, r3, r3
/* 8038F088 0038BFC8  41 82 01 84 */	beq .L_8038F20C
/* 8038F08C 0038BFCC  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 8038F090 0038BFD0  38 00 00 64 */	li r0, 0x64
/* 8038F094 0038BFD4  80 DB 00 6C */	lwz r6, 0x6c(r27)
/* 8038F098 0038BFD8  38 7B 00 18 */	addi r3, r27, 0x18
/* 8038F09C 0038BFDC  7C A4 D0 2E */	lwzx r5, r4, r26
/* 8038F0A0 0038BFE0  38 80 00 00 */	li r4, 0
/* 8038F0A4 0038BFE4  90 C5 00 04 */	stw r6, 4(r5)
/* 8038F0A8 0038BFE8  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F0AC 0038BFEC  80 DB 00 64 */	lwz r6, 0x64(r27)
/* 8038F0B0 0038BFF0  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F0B4 0038BFF4  90 C5 00 0C */	stw r6, 0xc(r5)
/* 8038F0B8 0038BFF8  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F0BC 0038BFFC  80 DB 00 68 */	lwz r6, 0x68(r27)
/* 8038F0C0 0038C000  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F0C4 0038C004  90 C5 00 08 */	stw r6, 8(r5)
/* 8038F0C8 0038C008  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F0CC 0038C00C  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F0D0 0038C010  90 05 00 10 */	stw r0, 0x10(r5)
/* 8038F0D4 0038C014  4B E6 24 DD */	bl getColorSum__Q24Game13PikiContainerFi
/* 8038F0D8 0038C018  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F0DC 0038C01C  38 80 00 02 */	li r4, 2
/* 8038F0E0 0038C020  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F0E4 0038C024  90 65 00 14 */	stw r3, 0x14(r5)
/* 8038F0E8 0038C028  38 7B 00 18 */	addi r3, r27, 0x18
/* 8038F0EC 0038C02C  4B E6 24 C5 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8038F0F0 0038C030  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F0F4 0038C034  38 80 00 04 */	li r4, 4
/* 8038F0F8 0038C038  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F0FC 0038C03C  90 65 00 18 */	stw r3, 0x18(r5)
/* 8038F100 0038C040  38 7B 00 18 */	addi r3, r27, 0x18
/* 8038F104 0038C044  4B E6 24 AD */	bl getColorSum__Q24Game13PikiContainerFi
/* 8038F108 0038C048  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8038F10C 0038C04C  38 80 00 03 */	li r4, 3
/* 8038F110 0038C050  7C A5 D0 2E */	lwzx r5, r5, r26
/* 8038F114 0038C054  90 65 00 1C */	stw r3, 0x1c(r5)
/* 8038F118 0038C058  38 7B 00 18 */	addi r3, r27, 0x18
/* 8038F11C 0038C05C  4B E6 24 95 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8038F120 0038C060  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 8038F124 0038C064  38 00 FF FF */	li r0, -1
/* 8038F128 0038C068  7C 84 D0 2E */	lwzx r4, r4, r26
/* 8038F12C 0038C06C  90 64 00 20 */	stw r3, 0x20(r4)
/* 8038F130 0038C070  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F134 0038C074  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F138 0038C078  90 03 00 24 */	stw r0, 0x24(r3)
/* 8038F13C 0038C07C  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F140 0038C080  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F144 0038C084  90 03 00 28 */	stw r0, 0x28(r3)
/* 8038F148 0038C088  4B D3 A4 59 */	bl rand
/* 8038F14C 0038C08C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038F150 0038C090  3C 00 43 30 */	lis r0, 0x4330
/* 8038F154 0038C094  90 61 07 6C */	stw r3, 0x76c(r1)
/* 8038F158 0038C098  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 8038F15C 0038C09C  90 01 07 68 */	stw r0, 0x768(r1)
/* 8038F160 0038C0A0  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038F164 0038C0A4  C8 41 07 68 */	lfd f2, 0x768(r1)
/* 8038F168 0038C0A8  C0 02 0C 3C */	lfs f0, lbl_8051EF9C@sda21(r2)
/* 8038F16C 0038C0AC  EC 42 18 28 */	fsubs f2, f2, f3
/* 8038F170 0038C0B0  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038F174 0038C0B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038F178 0038C0B8  40 80 00 94 */	bge .L_8038F20C
/* 8038F17C 0038C0BC  4B D3 A4 25 */	bl rand
/* 8038F180 0038C0C0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038F184 0038C0C4  3C 00 43 30 */	lis r0, 0x4330
/* 8038F188 0038C0C8  90 61 07 6C */	stw r3, 0x76c(r1)
/* 8038F18C 0038C0CC  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F190 0038C0D0  90 01 07 68 */	stw r0, 0x768(r1)
/* 8038F194 0038C0D4  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038F198 0038C0D8  C8 01 07 68 */	lfd f0, 0x768(r1)
/* 8038F19C 0038C0DC  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038F1A0 0038C0E0  EC 40 10 28 */	fsubs f2, f0, f2
/* 8038F1A4 0038C0E4  C0 02 0C F4 */	lfs f0, lbl_8051F054@sda21(r2)
/* 8038F1A8 0038C0E8  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F1AC 0038C0EC  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038F1B0 0038C0F0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038F1B4 0038C0F4  FC 00 00 1E */	fctiwz f0, f0
/* 8038F1B8 0038C0F8  D8 01 07 60 */	stfd f0, 0x760(r1)
/* 8038F1BC 0038C0FC  80 01 07 64 */	lwz r0, 0x764(r1)
/* 8038F1C0 0038C100  90 03 00 24 */	stw r0, 0x24(r3)
/* 8038F1C4 0038C104  4B D3 A3 DD */	bl rand
/* 8038F1C8 0038C108  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8038F1CC 0038C10C  3C 00 43 30 */	lis r0, 0x4330
/* 8038F1D0 0038C110  90 61 07 5C */	stw r3, 0x75c(r1)
/* 8038F1D4 0038C114  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8038F1D8 0038C118  90 01 07 58 */	stw r0, 0x758(r1)
/* 8038F1DC 0038C11C  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038F1E0 0038C120  C8 01 07 58 */	lfd f0, 0x758(r1)
/* 8038F1E4 0038C124  C0 22 0C 30 */	lfs f1, lbl_8051EF90@sda21(r2)
/* 8038F1E8 0038C128  EC 40 10 28 */	fsubs f2, f0, f2
/* 8038F1EC 0038C12C  C0 02 0C F4 */	lfs f0, lbl_8051F054@sda21(r2)
/* 8038F1F0 0038C130  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8038F1F4 0038C134  EC 22 08 24 */	fdivs f1, f2, f1
/* 8038F1F8 0038C138  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038F1FC 0038C13C  FC 00 00 1E */	fctiwz f0, f0
/* 8038F200 0038C140  D8 01 07 50 */	stfd f0, 0x750(r1)
/* 8038F204 0038C144  80 01 07 54 */	lwz r0, 0x754(r1)
/* 8038F208 0038C148  90 03 00 28 */	stw r0, 0x28(r3)
.L_8038F20C:
/* 8038F20C 0038C14C  3B 18 00 01 */	addi r24, r24, 1
/* 8038F210 0038C150  3B 5A 00 04 */	addi r26, r26, 4
/* 8038F214 0038C154  2C 18 00 1E */	cmpwi r24, 0x1e
/* 8038F218 0038C158  41 80 FD 44 */	blt .L_8038EF5C
.L_8038F21C:
/* 8038F21C 0038C15C  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 8038F220 0038C160  93 9F 00 FC */	stw r28, 0xfc(r31)
/* 8038F224 0038C164  38 03 66 67 */	addi r0, r3, 0x66666667@l
/* 8038F228 0038C168  38 60 00 18 */	li r3, 0x18
/* 8038F22C 0038C16C  7C 00 E0 96 */	mulhw r0, r0, r28
/* 8038F230 0038C170  C8 3E 00 F8 */	lfd f1, 0xf8(r30)
/* 8038F234 0038C174  C8 1E 01 00 */	lfd f0, 0x100(r30)
/* 8038F238 0038C178  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 8038F23C 0038C17C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8038F240 0038C180  7C 05 0E 70 */	srawi r5, r0, 1
/* 8038F244 0038C184  7C 00 0E 70 */	srawi r0, r0, 1
/* 8038F248 0038C188  54 04 0F FE */	srwi r4, r0, 0x1f
/* 8038F24C 0038C18C  54 A6 0F FE */	srwi r6, r5, 0x1f
/* 8038F250 0038C190  7C 00 22 14 */	add r0, r0, r4
/* 8038F254 0038C194  1C 00 00 05 */	mulli r0, r0, 5
/* 8038F258 0038C198  7C 85 32 14 */	add r4, r5, r6
/* 8038F25C 0038C19C  90 8D 99 7C */	stw r4, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038F260 0038C1A0  7C 00 E0 50 */	subf r0, r0, r28
/* 8038F264 0038C1A4  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038F268 0038C1A8  4B C9 4C 3D */	bl __nw__FUl
/* 8038F26C 0038C1AC  7C 60 1B 79 */	or. r0, r3, r3
/* 8038F270 0038C1B0  41 82 00 24 */	beq .L_8038F294
/* 8038F274 0038C1B4  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 8038F278 0038C1B8  3C A0 00 34 */	lis r5, 0x00343930@ha
/* 8038F27C 0038C1BC  38 81 00 20 */	addi r4, r1, 0x20
/* 8038F280 0038C1C0  38 E0 00 02 */	li r7, 2
/* 8038F284 0038C1C4  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 8038F288 0038C1C8  38 A5 39 30 */	addi r5, r5, 0x00343930@l
/* 8038F28C 0038C1CC  48 01 1E 59 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 8038F290 0038C1D0  7C 60 1B 78 */	mr r0, r3
.L_8038F294:
/* 8038F294 0038C1D4  90 1F 00 EC */	stw r0, 0xec(r31)
/* 8038F298 0038C1D8  7F E3 FB 78 */	mr r3, r31
/* 8038F29C 0038C1DC  48 0C 4D A5 */	bl getGamePad__Q26Screen7ObjBaseCFv
/* 8038F2A0 0038C1E0  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 8038F2A4 0038C1E4  3C 60 80 4E */	lis r3, mIconTexture__Q28Morimura16TChallengeSelect@ha
/* 8038F2A8 0038C1E8  3A C3 50 30 */	addi r22, r3, mIconTexture__Q28Morimura16TChallengeSelect@l
/* 8038F2AC 0038C1EC  3A A1 00 10 */	addi r21, r1, 0x10
/* 8038F2B0 0038C1F0  80 BE 01 64 */	lwz r5, 0x164(r30)
/* 8038F2B4 0038C1F4  3A E0 00 00 */	li r23, 0
/* 8038F2B8 0038C1F8  80 9E 01 68 */	lwz r4, 0x168(r30)
/* 8038F2BC 0038C1FC  80 7E 01 6C */	lwz r3, 0x16c(r30)
/* 8038F2C0 0038C200  80 1E 01 70 */	lwz r0, 0x170(r30)
/* 8038F2C4 0038C204  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8038F2C8 0038C208  90 81 00 14 */	stw r4, 0x14(r1)
/* 8038F2CC 0038C20C  90 61 00 18 */	stw r3, 0x18(r1)
/* 8038F2D0 0038C210  90 01 00 1C */	stw r0, 0x1c(r1)
.L_8038F2D4:
/* 8038F2D4 0038C214  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 8038F2D8 0038C218  80 95 00 00 */	lwz r4, 0(r21)
/* 8038F2DC 0038C21C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038F2E0 0038C220  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038F2E4 0038C224  7D 89 03 A6 */	mtctr r12
/* 8038F2E8 0038C228  4E 80 04 21 */	bctrl 
/* 8038F2EC 0038C22C  90 76 00 00 */	stw r3, 0(r22)
/* 8038F2F0 0038C230  80 16 00 00 */	lwz r0, 0(r22)
/* 8038F2F4 0038C234  28 00 00 00 */	cmplwi r0, 0
/* 8038F2F8 0038C238  40 82 00 18 */	bne .L_8038F310
/* 8038F2FC 0038C23C  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038F300 0038C240  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038F304 0038C244  38 80 05 B8 */	li r4, 0x5b8
/* 8038F308 0038C248  4C C6 31 82 */	crclr 6
/* 8038F30C 0038C24C  4B C9 B3 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038F310:
/* 8038F310 0038C250  3A F7 00 01 */	addi r23, r23, 1
/* 8038F314 0038C254  3A D6 00 04 */	addi r22, r22, 4
/* 8038F318 0038C258  2C 17 00 04 */	cmpwi r23, 4
/* 8038F31C 0038C25C  3A B5 00 04 */	addi r21, r21, 4
/* 8038F320 0038C260  41 80 FF B4 */	blt .L_8038F2D4
/* 8038F324 0038C264  38 60 00 AC */	li r3, 0xac
/* 8038F328 0038C268  4B C9 4B 7D */	bl __nw__FUl
/* 8038F32C 0038C26C  7C 60 1B 79 */	or. r0, r3, r3
/* 8038F330 0038C270  41 82 00 14 */	beq .L_8038F344
/* 8038F334 0038C274  7F A4 EB 78 */	mr r4, r29
/* 8038F338 0038C278  38 A0 00 00 */	li r5, 0
/* 8038F33C 0038C27C  4B FF E1 21 */	bl __ct__Q28Morimura24TChallengePlayModeScreenFP10JKRArchivei
/* 8038F340 0038C280  7C 60 1B 78 */	mr r0, r3
.L_8038F344:
/* 8038F344 0038C284  90 1F 00 84 */	stw r0, 0x84(r31)
/* 8038F348 0038C288  38 9E 04 BC */	addi r4, r30, 0x4bc
/* 8038F34C 0038C28C  3C A0 00 02 */	lis r5, 2
/* 8038F350 0038C290  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8038F354 0038C294  81 83 00 00 */	lwz r12, 0(r3)
/* 8038F358 0038C298  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038F35C 0038C29C  7D 89 03 A6 */	mtctr r12
/* 8038F360 0038C2A0  4E 80 04 21 */	bctrl 
/* 8038F364 0038C2A4  38 60 00 30 */	li r3, 0x30
/* 8038F368 0038C2A8  4B C9 4B 3D */	bl __nw__FUl
/* 8038F36C 0038C2AC  7C 75 1B 79 */	or. r21, r3, r3
/* 8038F370 0038C2B0  41 82 00 1C */	beq .L_8038F38C
/* 8038F374 0038C2B4  7F A4 EB 78 */	mr r4, r29
/* 8038F378 0038C2B8  38 A0 00 05 */	li r5, 5
/* 8038F37C 0038C2BC  48 01 44 91 */	bl __ct__Q28Morimura24TSelectExplanationWindowFP10JKRArchivei
/* 8038F380 0038C2C0  3C 60 80 4E */	lis r3, __vt__Q28Morimura33TChallengeSelectExplanationWindow@ha
/* 8038F384 0038C2C4  38 03 51 5C */	addi r0, r3, __vt__Q28Morimura33TChallengeSelectExplanationWindow@l
/* 8038F388 0038C2C8  90 15 00 00 */	stw r0, 0(r21)
.L_8038F38C:
/* 8038F38C 0038C2CC  92 BF 00 88 */	stw r21, 0x88(r31)
/* 8038F390 0038C2D0  38 9E 04 D8 */	addi r4, r30, 0x4d8
/* 8038F394 0038C2D4  3C A0 01 04 */	lis r5, 0x104
/* 8038F398 0038C2D8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F39C 0038C2DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8038F3A0 0038C2E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038F3A4 0038C2E4  7D 89 03 A6 */	mtctr r12
/* 8038F3A8 0038C2E8  4E 80 04 21 */	bctrl 
/* 8038F3AC 0038C2EC  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F3B0 0038C2F0  38 9E 04 F4 */	addi r4, r30, 0x4f4
/* 8038F3B4 0038C2F4  48 01 20 AD */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F3B8 0038C2F8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F3BC 0038C2FC  38 9E 05 10 */	addi r4, r30, 0x510
/* 8038F3C0 0038C300  48 01 20 A1 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F3C4 0038C304  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F3C8 0038C308  38 9E 05 30 */	addi r4, r30, 0x530
/* 8038F3CC 0038C30C  48 01 20 95 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F3D0 0038C310  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F3D4 0038C314  38 9E 05 50 */	addi r4, r30, 0x550
/* 8038F3D8 0038C318  48 01 20 89 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F3DC 0038C31C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8038F3E0 0038C320  38 9E 05 70 */	addi r4, r30, 0x570
/* 8038F3E4 0038C324  48 01 20 7D */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F3E8 0038C328  38 60 00 14 */	li r3, 0x14
/* 8038F3EC 0038C32C  4B C9 4A B9 */	bl __nw__FUl
/* 8038F3F0 0038C330  28 03 00 00 */	cmplwi r3, 0
/* 8038F3F4 0038C334  41 82 00 68 */	beq .L_8038F45C
/* 8038F3F8 0038C338  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 8038F3FC 0038C33C  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 8038F400 0038C340  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 8038F404 0038C344  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 8038F408 0038C348  90 03 00 00 */	stw r0, 0(r3)
/* 8038F40C 0038C34C  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 8038F410 0038C350  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 8038F414 0038C354  3C 80 80 4E */	lis r4, __vt__Q25efx2d11T2DChalDive@ha
/* 8038F418 0038C358  90 03 00 00 */	stw r0, 0(r3)
/* 8038F41C 0038C35C  39 20 00 00 */	li r9, 0
/* 8038F420 0038C360  38 E5 74 20 */	addi r7, r5, __vt__Q25efx2d8TForever@l
/* 8038F424 0038C364  38 84 50 A8 */	addi r4, r4, __vt__Q25efx2d11T2DChalDive@l
/* 8038F428 0038C368  99 23 00 04 */	stb r9, 4(r3)
/* 8038F42C 0038C36C  39 06 E2 7C */	addi r8, r6, __vt__18JPAEmitterCallBack@l
/* 8038F430 0038C370  38 C7 00 18 */	addi r6, r7, 0x18
/* 8038F434 0038C374  38 A0 00 05 */	li r5, 5
/* 8038F438 0038C378  99 23 00 05 */	stb r9, 5(r3)
/* 8038F43C 0038C37C  38 04 00 18 */	addi r0, r4, 0x18
/* 8038F440 0038C380  91 03 00 08 */	stw r8, 8(r3)
/* 8038F444 0038C384  90 E3 00 00 */	stw r7, 0(r3)
/* 8038F448 0038C388  90 C3 00 08 */	stw r6, 8(r3)
/* 8038F44C 0038C38C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8038F450 0038C390  91 23 00 10 */	stw r9, 0x10(r3)
/* 8038F454 0038C394  90 83 00 00 */	stw r4, 0(r3)
/* 8038F458 0038C398  90 03 00 08 */	stw r0, 8(r3)
.L_8038F45C:
/* 8038F45C 0038C39C  90 7F 00 F0 */	stw r3, 0xf0(r31)
/* 8038F460 0038C3A0  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 8038F464 0038C3A4  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8038F468 0038C3A8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8038F46C 0038C3AC  4B C9 41 39 */	bl becomeCurrentHeap__7JKRHeapFv
/* 8038F470 0038C3B0  38 60 00 2C */	li r3, 0x2c
/* 8038F474 0038C3B4  4B C9 4A 31 */	bl __nw__FUl
/* 8038F478 0038C3B8  7C 75 1B 79 */	or. r21, r3, r3
/* 8038F47C 0038C3BC  41 82 00 80 */	beq .L_8038F4FC
/* 8038F480 0038C3C0  7F A4 EB 78 */	mr r4, r29
/* 8038F484 0038C3C4  38 A0 00 0A */	li r5, 0xa
/* 8038F488 0038C3C8  48 01 1F 21 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8038F48C 0038C3CC  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TChallengeScreen@ha
/* 8038F490 0038C3D0  38 00 00 00 */	li r0, 0
/* 8038F494 0038C3D4  38 63 51 88 */	addi r3, r3, __vt__Q28Morimura16TChallengeScreen@l
/* 8038F498 0038C3D8  90 75 00 00 */	stw r3, 0(r21)
/* 8038F49C 0038C3DC  90 15 00 18 */	stw r0, 0x18(r21)
/* 8038F4A0 0038C3E0  90 15 00 20 */	stw r0, 0x20(r21)
/* 8038F4A4 0038C3E4  98 15 00 28 */	stb r0, 0x28(r21)
/* 8038F4A8 0038C3E8  4B D3 A0 F9 */	bl rand
/* 8038F4AC 0038C3EC  3C 80 43 30 */	lis r4, 0x4330
/* 8038F4B0 0038C3F0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8038F4B4 0038C3F4  90 01 07 6C */	stw r0, 0x76c(r1)
/* 8038F4B8 0038C3F8  A8 0D 85 D0 */	lha r0, mFlashAnimInterval__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8038F4BC 0038C3FC  90 81 07 68 */	stw r4, 0x768(r1)
/* 8038F4C0 0038C400  C8 42 0C 50 */	lfd f2, lbl_8051EFB0@sda21(r2)
/* 8038F4C4 0038C404  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8038F4C8 0038C408  C8 21 07 68 */	lfd f1, 0x768(r1)
/* 8038F4CC 0038C40C  C0 02 0C 30 */	lfs f0, lbl_8051EF90@sda21(r2)
/* 8038F4D0 0038C410  EC 21 10 28 */	fsubs f1, f1, f2
/* 8038F4D4 0038C414  90 01 07 64 */	stw r0, 0x764(r1)
/* 8038F4D8 0038C418  90 81 07 60 */	stw r4, 0x760(r1)
/* 8038F4DC 0038C41C  EC 21 00 24 */	fdivs f1, f1, f0
/* 8038F4E0 0038C420  C8 01 07 60 */	lfd f0, 0x760(r1)
/* 8038F4E4 0038C424  EC 00 10 28 */	fsubs f0, f0, f2
/* 8038F4E8 0038C428  EC 00 00 72 */	fmuls f0, f0, f1
/* 8038F4EC 0038C42C  FC 00 00 1E */	fctiwz f0, f0
/* 8038F4F0 0038C430  D8 01 07 58 */	stfd f0, 0x758(r1)
/* 8038F4F4 0038C434  80 01 07 5C */	lwz r0, 0x75c(r1)
/* 8038F4F8 0038C438  90 15 00 24 */	stw r0, 0x24(r21)
.L_8038F4FC:
/* 8038F4FC 0038C43C  92 BF 00 80 */	stw r21, 0x80(r31)
/* 8038F500 0038C440  38 9E 05 90 */	addi r4, r30, 0x590
/* 8038F504 0038C444  3C A0 01 04 */	lis r5, 0x104
/* 8038F508 0038C448  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F50C 0038C44C  81 83 00 00 */	lwz r12, 0(r3)
/* 8038F510 0038C450  81 8C 00 08 */	lwz r12, 8(r12)
/* 8038F514 0038C454  7D 89 03 A6 */	mtctr r12
/* 8038F518 0038C458  4E 80 04 21 */	bctrl 
/* 8038F51C 0038C45C  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F520 0038C460  38 9E 05 AC */	addi r4, r30, 0x5ac
/* 8038F524 0038C464  81 83 00 00 */	lwz r12, 0(r3)
/* 8038F528 0038C468  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8038F52C 0038C46C  7D 89 03 A6 */	mtctr r12
/* 8038F530 0038C470  4E 80 04 21 */	bctrl 
/* 8038F534 0038C474  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F538 0038C478  38 9E 05 AC */	addi r4, r30, 0x5ac
/* 8038F53C 0038C47C  48 01 1F 25 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F540 0038C480  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F544 0038C484  38 9E 05 C8 */	addi r4, r30, 0x5c8
/* 8038F548 0038C488  48 01 1F 19 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F54C 0038C48C  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F550 0038C490  38 9E 05 E4 */	addi r4, r30, 0x5e4
/* 8038F554 0038C494  48 01 1F 0D */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F558 0038C498  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F55C 0038C49C  38 9E 06 00 */	addi r4, r30, 0x600
/* 8038F560 0038C4A0  48 01 1F 01 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F564 0038C4A4  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F568 0038C4A8  38 9E 06 1C */	addi r4, r30, 0x61c
/* 8038F56C 0038C4AC  48 01 1E F5 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F570 0038C4B0  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F574 0038C4B4  38 9E 06 38 */	addi r4, r30, 0x638
/* 8038F578 0038C4B8  48 01 1E E9 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F57C 0038C4BC  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F580 0038C4C0  38 9E 06 54 */	addi r4, r30, 0x654
/* 8038F584 0038C4C4  48 01 1E DD */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F588 0038C4C8  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F58C 0038C4CC  38 9E 06 70 */	addi r4, r30, 0x670
/* 8038F590 0038C4D0  48 01 1E D1 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F594 0038C4D4  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F598 0038C4D8  38 9E 06 8C */	addi r4, r30, 0x68c
/* 8038F59C 0038C4DC  48 01 1E C5 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F5A0 0038C4E0  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8038F5A4 0038C4E4  38 9E 06 A8 */	addi r4, r30, 0x6a8
/* 8038F5A8 0038C4E8  48 01 1E B9 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8038F5AC 0038C4EC  80 9F 00 80 */	lwz r4, 0x80(r31)
/* 8038F5B0 0038C4F0  38 60 07 34 */	li r3, 0x734
/* 8038F5B4 0038C4F4  83 A4 00 08 */	lwz r29, 8(r4)
/* 8038F5B8 0038C4F8  4B C9 48 ED */	bl __nw__FUl
/* 8038F5BC 0038C4FC  7C 7A 1B 79 */	or. r26, r3, r3
/* 8038F5C0 0038C500  41 82 01 F0 */	beq .L_8038F7B0
/* 8038F5C4 0038C504  7F A3 EB 78 */	mr r3, r29
/* 8038F5C8 0038C508  3C 80 72 5F */	lis r4, 0x725F6677@ha
/* 8038F5CC 0038C50C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F5D0 0038C510  38 C4 66 77 */	addi r6, r4, 0x725F6677@l
/* 8038F5D4 0038C514  38 A0 00 50 */	li r5, 0x50
/* 8038F5D8 0038C518  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F5DC 0038C51C  7D 89 03 A6 */	mtctr r12
/* 8038F5E0 0038C520  4E 80 04 21 */	bctrl 
/* 8038F5E4 0038C524  7C 7B 1B 78 */	mr r27, r3
/* 8038F5E8 0038C528  7F A3 EB 78 */	mr r3, r29
/* 8038F5EC 0038C52C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F5F0 0038C530  3C A0 70 6B */	lis r5, 0x706B5F72@ha
/* 8038F5F4 0038C534  3C 80 00 50 */	lis r4, 0x0050725F@ha
/* 8038F5F8 0038C538  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F5FC 0038C53C  38 C5 5F 72 */	addi r6, r5, 0x706B5F72@l
/* 8038F600 0038C540  38 A4 72 5F */	addi r5, r4, 0x0050725F@l
/* 8038F604 0038C544  7D 89 03 A6 */	mtctr r12
/* 8038F608 0038C548  4E 80 04 21 */	bctrl 
/* 8038F60C 0038C54C  7C 76 1B 78 */	mr r22, r3
/* 8038F610 0038C550  7F A3 EB 78 */	mr r3, r29
/* 8038F614 0038C554  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F618 0038C558  3C A0 70 6B */	lis r5, 0x706B5F6C@ha
/* 8038F61C 0038C55C  3C 80 00 50 */	lis r4, 0x0050725F@ha
/* 8038F620 0038C560  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F624 0038C564  38 C5 5F 6C */	addi r6, r5, 0x706B5F6C@l
/* 8038F628 0038C568  38 A4 72 5F */	addi r5, r4, 0x0050725F@l
/* 8038F62C 0038C56C  7D 89 03 A6 */	mtctr r12
/* 8038F630 0038C570  4E 80 04 21 */	bctrl 
/* 8038F634 0038C574  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8038F638 0038C578  7C 75 1B 78 */	mr r21, r3
/* 8038F63C 0038C57C  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8038F640 0038C580  38 7A 00 14 */	addi r3, r26, 0x14
/* 8038F644 0038C584  38 A0 00 00 */	li r5, 0
/* 8038F648 0038C588  38 C0 00 08 */	li r6, 8
/* 8038F64C 0038C58C  38 E0 00 02 */	li r7, 2
/* 8038F650 0038C590  4B D3 21 ED */	bl __construct_array
/* 8038F654 0038C594  3C 80 80 39 */	lis r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
/* 8038F658 0038C598  38 7A 00 24 */	addi r3, r26, 0x24
/* 8038F65C 0038C59C  38 84 C4 88 */	addi r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
/* 8038F660 0038C5A0  38 A0 00 00 */	li r5, 0
/* 8038F664 0038C5A4  38 C0 00 24 */	li r6, 0x24
/* 8038F668 0038C5A8  38 E0 00 32 */	li r7, 0x32
/* 8038F66C 0038C5AC  4B D3 21 D1 */	bl __construct_array
/* 8038F670 0038C5B0  3A E0 00 00 */	li r23, 0
/* 8038F674 0038C5B4  7F 58 D3 78 */	mr r24, r26
/* 8038F678 0038C5B8  92 FA 07 2C */	stw r23, 0x72c(r26)
/* 8038F67C 0038C5BC  92 BA 00 00 */	stw r21, 0(r26)
/* 8038F680 0038C5C0  92 DA 00 04 */	stw r22, 4(r26)
/* 8038F684 0038C5C4  93 7A 00 08 */	stw r27, 8(r26)
.L_8038F688:
/* 8038F688 0038C5C8  80 18 00 00 */	lwz r0, 0(r24)
/* 8038F68C 0038C5CC  28 00 00 00 */	cmplwi r0, 0
/* 8038F690 0038C5D0  40 82 00 18 */	bne .L_8038F6A8
/* 8038F694 0038C5D4  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038F698 0038C5D8  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038F69C 0038C5DC  38 80 00 48 */	li r4, 0x48
/* 8038F6A0 0038C5E0  4C C6 31 82 */	crclr 6
/* 8038F6A4 0038C5E4  4B C9 AF 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038F6A8:
/* 8038F6A8 0038C5E8  3A F7 00 01 */	addi r23, r23, 1
/* 8038F6AC 0038C5EC  3B 18 00 04 */	addi r24, r24, 4
/* 8038F6B0 0038C5F0  2C 17 00 03 */	cmpwi r23, 3
/* 8038F6B4 0038C5F4  41 80 FF D4 */	blt .L_8038F688
/* 8038F6B8 0038C5F8  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038F6BC 0038C5FC  38 A0 00 30 */	li r5, 0x30
/* 8038F6C0 0038C600  1C 65 00 24 */	mulli r3, r5, 0x24
/* 8038F6C4 0038C604  38 80 00 00 */	li r4, 0
/* 8038F6C8 0038C608  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8038F6CC 0038C60C  20 05 00 32 */	subfic r0, r5, 0x32
/* 8038F6D0 0038C610  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8038F6D4 0038C614  7C 7A 1A 14 */	add r3, r26, r3
/* 8038F6D8 0038C618  D0 1A 07 30 */	stfs f0, 0x730(r26)
/* 8038F6DC 0038C61C  90 9A 00 24 */	stw r4, 0x24(r26)
/* 8038F6E0 0038C620  90 9A 00 48 */	stw r4, 0x48(r26)
/* 8038F6E4 0038C624  90 9A 00 6C */	stw r4, 0x6c(r26)
/* 8038F6E8 0038C628  90 9A 00 90 */	stw r4, 0x90(r26)
/* 8038F6EC 0038C62C  90 9A 00 B4 */	stw r4, 0xb4(r26)
/* 8038F6F0 0038C630  90 9A 00 D8 */	stw r4, 0xd8(r26)
/* 8038F6F4 0038C634  90 9A 00 FC */	stw r4, 0xfc(r26)
/* 8038F6F8 0038C638  90 9A 01 20 */	stw r4, 0x120(r26)
/* 8038F6FC 0038C63C  90 9A 01 44 */	stw r4, 0x144(r26)
/* 8038F700 0038C640  90 9A 01 68 */	stw r4, 0x168(r26)
/* 8038F704 0038C644  90 9A 01 8C */	stw r4, 0x18c(r26)
/* 8038F708 0038C648  90 9A 01 B0 */	stw r4, 0x1b0(r26)
/* 8038F70C 0038C64C  90 9A 01 D4 */	stw r4, 0x1d4(r26)
/* 8038F710 0038C650  90 9A 01 F8 */	stw r4, 0x1f8(r26)
/* 8038F714 0038C654  90 9A 02 1C */	stw r4, 0x21c(r26)
/* 8038F718 0038C658  90 9A 02 40 */	stw r4, 0x240(r26)
/* 8038F71C 0038C65C  90 9A 02 64 */	stw r4, 0x264(r26)
/* 8038F720 0038C660  90 9A 02 88 */	stw r4, 0x288(r26)
/* 8038F724 0038C664  90 9A 02 AC */	stw r4, 0x2ac(r26)
/* 8038F728 0038C668  90 9A 02 D0 */	stw r4, 0x2d0(r26)
/* 8038F72C 0038C66C  90 9A 02 F4 */	stw r4, 0x2f4(r26)
/* 8038F730 0038C670  90 9A 03 18 */	stw r4, 0x318(r26)
/* 8038F734 0038C674  90 9A 03 3C */	stw r4, 0x33c(r26)
/* 8038F738 0038C678  90 9A 03 60 */	stw r4, 0x360(r26)
/* 8038F73C 0038C67C  90 9A 03 84 */	stw r4, 0x384(r26)
/* 8038F740 0038C680  90 9A 03 A8 */	stw r4, 0x3a8(r26)
/* 8038F744 0038C684  90 9A 03 CC */	stw r4, 0x3cc(r26)
/* 8038F748 0038C688  90 9A 03 F0 */	stw r4, 0x3f0(r26)
/* 8038F74C 0038C68C  90 9A 04 14 */	stw r4, 0x414(r26)
/* 8038F750 0038C690  90 9A 04 38 */	stw r4, 0x438(r26)
/* 8038F754 0038C694  90 9A 04 5C */	stw r4, 0x45c(r26)
/* 8038F758 0038C698  90 9A 04 80 */	stw r4, 0x480(r26)
/* 8038F75C 0038C69C  90 9A 04 A4 */	stw r4, 0x4a4(r26)
/* 8038F760 0038C6A0  90 9A 04 C8 */	stw r4, 0x4c8(r26)
/* 8038F764 0038C6A4  90 9A 04 EC */	stw r4, 0x4ec(r26)
/* 8038F768 0038C6A8  90 9A 05 10 */	stw r4, 0x510(r26)
/* 8038F76C 0038C6AC  90 9A 05 34 */	stw r4, 0x534(r26)
/* 8038F770 0038C6B0  90 9A 05 58 */	stw r4, 0x558(r26)
/* 8038F774 0038C6B4  90 9A 05 7C */	stw r4, 0x57c(r26)
/* 8038F778 0038C6B8  90 9A 05 A0 */	stw r4, 0x5a0(r26)
/* 8038F77C 0038C6BC  90 9A 05 C4 */	stw r4, 0x5c4(r26)
/* 8038F780 0038C6C0  90 9A 05 E8 */	stw r4, 0x5e8(r26)
/* 8038F784 0038C6C4  90 9A 06 0C */	stw r4, 0x60c(r26)
/* 8038F788 0038C6C8  90 9A 06 30 */	stw r4, 0x630(r26)
/* 8038F78C 0038C6CC  90 9A 06 54 */	stw r4, 0x654(r26)
/* 8038F790 0038C6D0  90 9A 06 78 */	stw r4, 0x678(r26)
/* 8038F794 0038C6D4  90 9A 06 9C */	stw r4, 0x69c(r26)
/* 8038F798 0038C6D8  90 9A 06 C0 */	stw r4, 0x6c0(r26)
/* 8038F79C 0038C6DC  7C 09 03 A6 */	mtctr r0
/* 8038F7A0 0038C6E0  2C 05 00 32 */	cmpwi r5, 0x32
/* 8038F7A4 0038C6E4  40 80 00 0C */	bge .L_8038F7B0
.L_8038F7A8:
/* 8038F7A8 0038C6E8  94 83 00 24 */	stwu r4, 0x24(r3)
/* 8038F7AC 0038C6EC  42 00 FF FC */	bdnz .L_8038F7A8
.L_8038F7B0:
/* 8038F7B0 0038C6F0  93 5F 00 9C */	stw r26, 0x9c(r31)
/* 8038F7B4 0038C6F4  38 60 07 34 */	li r3, 0x734
/* 8038F7B8 0038C6F8  4B C9 46 ED */	bl __nw__FUl
/* 8038F7BC 0038C6FC  7C 7A 1B 79 */	or. r26, r3, r3
/* 8038F7C0 0038C700  41 82 01 F0 */	beq .L_8038F9B0
/* 8038F7C4 0038C704  7F A3 EB 78 */	mr r3, r29
/* 8038F7C8 0038C708  3C 80 79 5F */	lis r4, 0x795F6677@ha
/* 8038F7CC 0038C70C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F7D0 0038C710  38 C4 66 77 */	addi r6, r4, 0x795F6677@l
/* 8038F7D4 0038C714  38 A0 00 50 */	li r5, 0x50
/* 8038F7D8 0038C718  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F7DC 0038C71C  7D 89 03 A6 */	mtctr r12
/* 8038F7E0 0038C720  4E 80 04 21 */	bctrl 
/* 8038F7E4 0038C724  7C 7B 1B 78 */	mr r27, r3
/* 8038F7E8 0038C728  7F A3 EB 78 */	mr r3, r29
/* 8038F7EC 0038C72C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F7F0 0038C730  3C A0 70 6B */	lis r5, 0x706B5F72@ha
/* 8038F7F4 0038C734  3C 80 00 50 */	lis r4, 0x0050795F@ha
/* 8038F7F8 0038C738  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F7FC 0038C73C  38 C5 5F 72 */	addi r6, r5, 0x706B5F72@l
/* 8038F800 0038C740  38 A4 79 5F */	addi r5, r4, 0x0050795F@l
/* 8038F804 0038C744  7D 89 03 A6 */	mtctr r12
/* 8038F808 0038C748  4E 80 04 21 */	bctrl 
/* 8038F80C 0038C74C  7C 76 1B 78 */	mr r22, r3
/* 8038F810 0038C750  7F A3 EB 78 */	mr r3, r29
/* 8038F814 0038C754  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F818 0038C758  3C A0 70 6B */	lis r5, 0x706B5F6C@ha
/* 8038F81C 0038C75C  3C 80 00 50 */	lis r4, 0x0050795F@ha
/* 8038F820 0038C760  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F824 0038C764  38 C5 5F 6C */	addi r6, r5, 0x706B5F6C@l
/* 8038F828 0038C768  38 A4 79 5F */	addi r5, r4, 0x0050795F@l
/* 8038F82C 0038C76C  7D 89 03 A6 */	mtctr r12
/* 8038F830 0038C770  4E 80 04 21 */	bctrl 
/* 8038F834 0038C774  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8038F838 0038C778  7C 75 1B 78 */	mr r21, r3
/* 8038F83C 0038C77C  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8038F840 0038C780  38 7A 00 14 */	addi r3, r26, 0x14
/* 8038F844 0038C784  38 A0 00 00 */	li r5, 0
/* 8038F848 0038C788  38 C0 00 08 */	li r6, 8
/* 8038F84C 0038C78C  38 E0 00 02 */	li r7, 2
/* 8038F850 0038C790  4B D3 1F ED */	bl __construct_array
/* 8038F854 0038C794  3C 80 80 39 */	lis r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
/* 8038F858 0038C798  38 7A 00 24 */	addi r3, r26, 0x24
/* 8038F85C 0038C79C  38 84 C4 88 */	addi r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
/* 8038F860 0038C7A0  38 A0 00 00 */	li r5, 0
/* 8038F864 0038C7A4  38 C0 00 24 */	li r6, 0x24
/* 8038F868 0038C7A8  38 E0 00 32 */	li r7, 0x32
/* 8038F86C 0038C7AC  4B D3 1F D1 */	bl __construct_array
/* 8038F870 0038C7B0  3A E0 00 00 */	li r23, 0
/* 8038F874 0038C7B4  7F 58 D3 78 */	mr r24, r26
/* 8038F878 0038C7B8  92 FA 07 2C */	stw r23, 0x72c(r26)
/* 8038F87C 0038C7BC  92 BA 00 00 */	stw r21, 0(r26)
/* 8038F880 0038C7C0  92 DA 00 04 */	stw r22, 4(r26)
/* 8038F884 0038C7C4  93 7A 00 08 */	stw r27, 8(r26)
.L_8038F888:
/* 8038F888 0038C7C8  80 18 00 00 */	lwz r0, 0(r24)
/* 8038F88C 0038C7CC  28 00 00 00 */	cmplwi r0, 0
/* 8038F890 0038C7D0  40 82 00 18 */	bne .L_8038F8A8
/* 8038F894 0038C7D4  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038F898 0038C7D8  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038F89C 0038C7DC  38 80 00 48 */	li r4, 0x48
/* 8038F8A0 0038C7E0  4C C6 31 82 */	crclr 6
/* 8038F8A4 0038C7E4  4B C9 AD 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038F8A8:
/* 8038F8A8 0038C7E8  3A F7 00 01 */	addi r23, r23, 1
/* 8038F8AC 0038C7EC  3B 18 00 04 */	addi r24, r24, 4
/* 8038F8B0 0038C7F0  2C 17 00 03 */	cmpwi r23, 3
/* 8038F8B4 0038C7F4  41 80 FF D4 */	blt .L_8038F888
/* 8038F8B8 0038C7F8  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038F8BC 0038C7FC  38 A0 00 30 */	li r5, 0x30
/* 8038F8C0 0038C800  1C 65 00 24 */	mulli r3, r5, 0x24
/* 8038F8C4 0038C804  38 80 00 00 */	li r4, 0
/* 8038F8C8 0038C808  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8038F8CC 0038C80C  20 05 00 32 */	subfic r0, r5, 0x32
/* 8038F8D0 0038C810  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8038F8D4 0038C814  7C 7A 1A 14 */	add r3, r26, r3
/* 8038F8D8 0038C818  D0 1A 07 30 */	stfs f0, 0x730(r26)
/* 8038F8DC 0038C81C  90 9A 00 24 */	stw r4, 0x24(r26)
/* 8038F8E0 0038C820  90 9A 00 48 */	stw r4, 0x48(r26)
/* 8038F8E4 0038C824  90 9A 00 6C */	stw r4, 0x6c(r26)
/* 8038F8E8 0038C828  90 9A 00 90 */	stw r4, 0x90(r26)
/* 8038F8EC 0038C82C  90 9A 00 B4 */	stw r4, 0xb4(r26)
/* 8038F8F0 0038C830  90 9A 00 D8 */	stw r4, 0xd8(r26)
/* 8038F8F4 0038C834  90 9A 00 FC */	stw r4, 0xfc(r26)
/* 8038F8F8 0038C838  90 9A 01 20 */	stw r4, 0x120(r26)
/* 8038F8FC 0038C83C  90 9A 01 44 */	stw r4, 0x144(r26)
/* 8038F900 0038C840  90 9A 01 68 */	stw r4, 0x168(r26)
/* 8038F904 0038C844  90 9A 01 8C */	stw r4, 0x18c(r26)
/* 8038F908 0038C848  90 9A 01 B0 */	stw r4, 0x1b0(r26)
/* 8038F90C 0038C84C  90 9A 01 D4 */	stw r4, 0x1d4(r26)
/* 8038F910 0038C850  90 9A 01 F8 */	stw r4, 0x1f8(r26)
/* 8038F914 0038C854  90 9A 02 1C */	stw r4, 0x21c(r26)
/* 8038F918 0038C858  90 9A 02 40 */	stw r4, 0x240(r26)
/* 8038F91C 0038C85C  90 9A 02 64 */	stw r4, 0x264(r26)
/* 8038F920 0038C860  90 9A 02 88 */	stw r4, 0x288(r26)
/* 8038F924 0038C864  90 9A 02 AC */	stw r4, 0x2ac(r26)
/* 8038F928 0038C868  90 9A 02 D0 */	stw r4, 0x2d0(r26)
/* 8038F92C 0038C86C  90 9A 02 F4 */	stw r4, 0x2f4(r26)
/* 8038F930 0038C870  90 9A 03 18 */	stw r4, 0x318(r26)
/* 8038F934 0038C874  90 9A 03 3C */	stw r4, 0x33c(r26)
/* 8038F938 0038C878  90 9A 03 60 */	stw r4, 0x360(r26)
/* 8038F93C 0038C87C  90 9A 03 84 */	stw r4, 0x384(r26)
/* 8038F940 0038C880  90 9A 03 A8 */	stw r4, 0x3a8(r26)
/* 8038F944 0038C884  90 9A 03 CC */	stw r4, 0x3cc(r26)
/* 8038F948 0038C888  90 9A 03 F0 */	stw r4, 0x3f0(r26)
/* 8038F94C 0038C88C  90 9A 04 14 */	stw r4, 0x414(r26)
/* 8038F950 0038C890  90 9A 04 38 */	stw r4, 0x438(r26)
/* 8038F954 0038C894  90 9A 04 5C */	stw r4, 0x45c(r26)
/* 8038F958 0038C898  90 9A 04 80 */	stw r4, 0x480(r26)
/* 8038F95C 0038C89C  90 9A 04 A4 */	stw r4, 0x4a4(r26)
/* 8038F960 0038C8A0  90 9A 04 C8 */	stw r4, 0x4c8(r26)
/* 8038F964 0038C8A4  90 9A 04 EC */	stw r4, 0x4ec(r26)
/* 8038F968 0038C8A8  90 9A 05 10 */	stw r4, 0x510(r26)
/* 8038F96C 0038C8AC  90 9A 05 34 */	stw r4, 0x534(r26)
/* 8038F970 0038C8B0  90 9A 05 58 */	stw r4, 0x558(r26)
/* 8038F974 0038C8B4  90 9A 05 7C */	stw r4, 0x57c(r26)
/* 8038F978 0038C8B8  90 9A 05 A0 */	stw r4, 0x5a0(r26)
/* 8038F97C 0038C8BC  90 9A 05 C4 */	stw r4, 0x5c4(r26)
/* 8038F980 0038C8C0  90 9A 05 E8 */	stw r4, 0x5e8(r26)
/* 8038F984 0038C8C4  90 9A 06 0C */	stw r4, 0x60c(r26)
/* 8038F988 0038C8C8  90 9A 06 30 */	stw r4, 0x630(r26)
/* 8038F98C 0038C8CC  90 9A 06 54 */	stw r4, 0x654(r26)
/* 8038F990 0038C8D0  90 9A 06 78 */	stw r4, 0x678(r26)
/* 8038F994 0038C8D4  90 9A 06 9C */	stw r4, 0x69c(r26)
/* 8038F998 0038C8D8  90 9A 06 C0 */	stw r4, 0x6c0(r26)
/* 8038F99C 0038C8DC  7C 09 03 A6 */	mtctr r0
/* 8038F9A0 0038C8E0  2C 05 00 32 */	cmpwi r5, 0x32
/* 8038F9A4 0038C8E4  40 80 00 0C */	bge .L_8038F9B0
.L_8038F9A8:
/* 8038F9A8 0038C8E8  94 83 00 24 */	stwu r4, 0x24(r3)
/* 8038F9AC 0038C8EC  42 00 FF FC */	bdnz .L_8038F9A8
.L_8038F9B0:
/* 8038F9B0 0038C8F0  93 5F 00 A0 */	stw r26, 0xa0(r31)
/* 8038F9B4 0038C8F4  38 60 07 34 */	li r3, 0x734
/* 8038F9B8 0038C8F8  4B C9 44 ED */	bl __nw__FUl
/* 8038F9BC 0038C8FC  7C 7A 1B 79 */	or. r26, r3, r3
/* 8038F9C0 0038C900  41 82 01 F0 */	beq .L_8038FBB0
/* 8038F9C4 0038C904  7F A3 EB 78 */	mr r3, r29
/* 8038F9C8 0038C908  3C 80 62 5F */	lis r4, 0x625F6677@ha
/* 8038F9CC 0038C90C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F9D0 0038C910  38 C4 66 77 */	addi r6, r4, 0x625F6677@l
/* 8038F9D4 0038C914  38 A0 00 50 */	li r5, 0x50
/* 8038F9D8 0038C918  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F9DC 0038C91C  7D 89 03 A6 */	mtctr r12
/* 8038F9E0 0038C920  4E 80 04 21 */	bctrl 
/* 8038F9E4 0038C924  7C 7B 1B 78 */	mr r27, r3
/* 8038F9E8 0038C928  7F A3 EB 78 */	mr r3, r29
/* 8038F9EC 0038C92C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038F9F0 0038C930  3C A0 70 6B */	lis r5, 0x706B5F72@ha
/* 8038F9F4 0038C934  3C 80 00 50 */	lis r4, 0x0050625F@ha
/* 8038F9F8 0038C938  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038F9FC 0038C93C  38 C5 5F 72 */	addi r6, r5, 0x706B5F72@l
/* 8038FA00 0038C940  38 A4 62 5F */	addi r5, r4, 0x0050625F@l
/* 8038FA04 0038C944  7D 89 03 A6 */	mtctr r12
/* 8038FA08 0038C948  4E 80 04 21 */	bctrl 
/* 8038FA0C 0038C94C  7C 76 1B 78 */	mr r22, r3
/* 8038FA10 0038C950  7F A3 EB 78 */	mr r3, r29
/* 8038FA14 0038C954  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FA18 0038C958  3C A0 70 6B */	lis r5, 0x706B5F6C@ha
/* 8038FA1C 0038C95C  3C 80 00 50 */	lis r4, 0x0050625F@ha
/* 8038FA20 0038C960  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FA24 0038C964  38 C5 5F 6C */	addi r6, r5, 0x706B5F6C@l
/* 8038FA28 0038C968  38 A4 62 5F */	addi r5, r4, 0x0050625F@l
/* 8038FA2C 0038C96C  7D 89 03 A6 */	mtctr r12
/* 8038FA30 0038C970  4E 80 04 21 */	bctrl 
/* 8038FA34 0038C974  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8038FA38 0038C978  7C 75 1B 78 */	mr r21, r3
/* 8038FA3C 0038C97C  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8038FA40 0038C980  38 7A 00 14 */	addi r3, r26, 0x14
/* 8038FA44 0038C984  38 A0 00 00 */	li r5, 0
/* 8038FA48 0038C988  38 C0 00 08 */	li r6, 8
/* 8038FA4C 0038C98C  38 E0 00 02 */	li r7, 2
/* 8038FA50 0038C990  4B D3 1D ED */	bl __construct_array
/* 8038FA54 0038C994  3C 80 80 39 */	lis r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
/* 8038FA58 0038C998  38 7A 00 24 */	addi r3, r26, 0x24
/* 8038FA5C 0038C99C  38 84 C4 88 */	addi r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
/* 8038FA60 0038C9A0  38 A0 00 00 */	li r5, 0
/* 8038FA64 0038C9A4  38 C0 00 24 */	li r6, 0x24
/* 8038FA68 0038C9A8  38 E0 00 32 */	li r7, 0x32
/* 8038FA6C 0038C9AC  4B D3 1D D1 */	bl __construct_array
/* 8038FA70 0038C9B0  3A E0 00 00 */	li r23, 0
/* 8038FA74 0038C9B4  7F 58 D3 78 */	mr r24, r26
/* 8038FA78 0038C9B8  92 FA 07 2C */	stw r23, 0x72c(r26)
/* 8038FA7C 0038C9BC  92 BA 00 00 */	stw r21, 0(r26)
/* 8038FA80 0038C9C0  92 DA 00 04 */	stw r22, 4(r26)
/* 8038FA84 0038C9C4  93 7A 00 08 */	stw r27, 8(r26)
.L_8038FA88:
/* 8038FA88 0038C9C8  80 18 00 00 */	lwz r0, 0(r24)
/* 8038FA8C 0038C9CC  28 00 00 00 */	cmplwi r0, 0
/* 8038FA90 0038C9D0  40 82 00 18 */	bne .L_8038FAA8
/* 8038FA94 0038C9D4  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038FA98 0038C9D8  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038FA9C 0038C9DC  38 80 00 48 */	li r4, 0x48
/* 8038FAA0 0038C9E0  4C C6 31 82 */	crclr 6
/* 8038FAA4 0038C9E4  4B C9 AB 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038FAA8:
/* 8038FAA8 0038C9E8  3A F7 00 01 */	addi r23, r23, 1
/* 8038FAAC 0038C9EC  3B 18 00 04 */	addi r24, r24, 4
/* 8038FAB0 0038C9F0  2C 17 00 03 */	cmpwi r23, 3
/* 8038FAB4 0038C9F4  41 80 FF D4 */	blt .L_8038FA88
/* 8038FAB8 0038C9F8  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038FABC 0038C9FC  38 A0 00 30 */	li r5, 0x30
/* 8038FAC0 0038CA00  1C 65 00 24 */	mulli r3, r5, 0x24
/* 8038FAC4 0038CA04  38 80 00 00 */	li r4, 0
/* 8038FAC8 0038CA08  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8038FACC 0038CA0C  20 05 00 32 */	subfic r0, r5, 0x32
/* 8038FAD0 0038CA10  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8038FAD4 0038CA14  7C 7A 1A 14 */	add r3, r26, r3
/* 8038FAD8 0038CA18  D0 1A 07 30 */	stfs f0, 0x730(r26)
/* 8038FADC 0038CA1C  90 9A 00 24 */	stw r4, 0x24(r26)
/* 8038FAE0 0038CA20  90 9A 00 48 */	stw r4, 0x48(r26)
/* 8038FAE4 0038CA24  90 9A 00 6C */	stw r4, 0x6c(r26)
/* 8038FAE8 0038CA28  90 9A 00 90 */	stw r4, 0x90(r26)
/* 8038FAEC 0038CA2C  90 9A 00 B4 */	stw r4, 0xb4(r26)
/* 8038FAF0 0038CA30  90 9A 00 D8 */	stw r4, 0xd8(r26)
/* 8038FAF4 0038CA34  90 9A 00 FC */	stw r4, 0xfc(r26)
/* 8038FAF8 0038CA38  90 9A 01 20 */	stw r4, 0x120(r26)
/* 8038FAFC 0038CA3C  90 9A 01 44 */	stw r4, 0x144(r26)
/* 8038FB00 0038CA40  90 9A 01 68 */	stw r4, 0x168(r26)
/* 8038FB04 0038CA44  90 9A 01 8C */	stw r4, 0x18c(r26)
/* 8038FB08 0038CA48  90 9A 01 B0 */	stw r4, 0x1b0(r26)
/* 8038FB0C 0038CA4C  90 9A 01 D4 */	stw r4, 0x1d4(r26)
/* 8038FB10 0038CA50  90 9A 01 F8 */	stw r4, 0x1f8(r26)
/* 8038FB14 0038CA54  90 9A 02 1C */	stw r4, 0x21c(r26)
/* 8038FB18 0038CA58  90 9A 02 40 */	stw r4, 0x240(r26)
/* 8038FB1C 0038CA5C  90 9A 02 64 */	stw r4, 0x264(r26)
/* 8038FB20 0038CA60  90 9A 02 88 */	stw r4, 0x288(r26)
/* 8038FB24 0038CA64  90 9A 02 AC */	stw r4, 0x2ac(r26)
/* 8038FB28 0038CA68  90 9A 02 D0 */	stw r4, 0x2d0(r26)
/* 8038FB2C 0038CA6C  90 9A 02 F4 */	stw r4, 0x2f4(r26)
/* 8038FB30 0038CA70  90 9A 03 18 */	stw r4, 0x318(r26)
/* 8038FB34 0038CA74  90 9A 03 3C */	stw r4, 0x33c(r26)
/* 8038FB38 0038CA78  90 9A 03 60 */	stw r4, 0x360(r26)
/* 8038FB3C 0038CA7C  90 9A 03 84 */	stw r4, 0x384(r26)
/* 8038FB40 0038CA80  90 9A 03 A8 */	stw r4, 0x3a8(r26)
/* 8038FB44 0038CA84  90 9A 03 CC */	stw r4, 0x3cc(r26)
/* 8038FB48 0038CA88  90 9A 03 F0 */	stw r4, 0x3f0(r26)
/* 8038FB4C 0038CA8C  90 9A 04 14 */	stw r4, 0x414(r26)
/* 8038FB50 0038CA90  90 9A 04 38 */	stw r4, 0x438(r26)
/* 8038FB54 0038CA94  90 9A 04 5C */	stw r4, 0x45c(r26)
/* 8038FB58 0038CA98  90 9A 04 80 */	stw r4, 0x480(r26)
/* 8038FB5C 0038CA9C  90 9A 04 A4 */	stw r4, 0x4a4(r26)
/* 8038FB60 0038CAA0  90 9A 04 C8 */	stw r4, 0x4c8(r26)
/* 8038FB64 0038CAA4  90 9A 04 EC */	stw r4, 0x4ec(r26)
/* 8038FB68 0038CAA8  90 9A 05 10 */	stw r4, 0x510(r26)
/* 8038FB6C 0038CAAC  90 9A 05 34 */	stw r4, 0x534(r26)
/* 8038FB70 0038CAB0  90 9A 05 58 */	stw r4, 0x558(r26)
/* 8038FB74 0038CAB4  90 9A 05 7C */	stw r4, 0x57c(r26)
/* 8038FB78 0038CAB8  90 9A 05 A0 */	stw r4, 0x5a0(r26)
/* 8038FB7C 0038CABC  90 9A 05 C4 */	stw r4, 0x5c4(r26)
/* 8038FB80 0038CAC0  90 9A 05 E8 */	stw r4, 0x5e8(r26)
/* 8038FB84 0038CAC4  90 9A 06 0C */	stw r4, 0x60c(r26)
/* 8038FB88 0038CAC8  90 9A 06 30 */	stw r4, 0x630(r26)
/* 8038FB8C 0038CACC  90 9A 06 54 */	stw r4, 0x654(r26)
/* 8038FB90 0038CAD0  90 9A 06 78 */	stw r4, 0x678(r26)
/* 8038FB94 0038CAD4  90 9A 06 9C */	stw r4, 0x69c(r26)
/* 8038FB98 0038CAD8  90 9A 06 C0 */	stw r4, 0x6c0(r26)
/* 8038FB9C 0038CADC  7C 09 03 A6 */	mtctr r0
/* 8038FBA0 0038CAE0  2C 05 00 32 */	cmpwi r5, 0x32
/* 8038FBA4 0038CAE4  40 80 00 0C */	bge .L_8038FBB0
.L_8038FBA8:
/* 8038FBA8 0038CAE8  94 83 00 24 */	stwu r4, 0x24(r3)
/* 8038FBAC 0038CAEC  42 00 FF FC */	bdnz .L_8038FBA8
.L_8038FBB0:
/* 8038FBB0 0038CAF0  93 5F 00 A4 */	stw r26, 0xa4(r31)
/* 8038FBB4 0038CAF4  38 60 07 34 */	li r3, 0x734
/* 8038FBB8 0038CAF8  4B C9 42 ED */	bl __nw__FUl
/* 8038FBBC 0038CAFC  7C 7A 1B 79 */	or. r26, r3, r3
/* 8038FBC0 0038CB00  41 82 01 F0 */	beq .L_8038FDB0
/* 8038FBC4 0038CB04  7F A3 EB 78 */	mr r3, r29
/* 8038FBC8 0038CB08  3C 80 77 5F */	lis r4, 0x775F6677@ha
/* 8038FBCC 0038CB0C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FBD0 0038CB10  38 C4 66 77 */	addi r6, r4, 0x775F6677@l
/* 8038FBD4 0038CB14  38 A0 00 50 */	li r5, 0x50
/* 8038FBD8 0038CB18  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FBDC 0038CB1C  7D 89 03 A6 */	mtctr r12
/* 8038FBE0 0038CB20  4E 80 04 21 */	bctrl 
/* 8038FBE4 0038CB24  7C 7B 1B 78 */	mr r27, r3
/* 8038FBE8 0038CB28  7F A3 EB 78 */	mr r3, r29
/* 8038FBEC 0038CB2C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FBF0 0038CB30  3C A0 5F 30 */	lis r5, 0x5F303230@ha
/* 8038FBF4 0038CB34  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 8038FBF8 0038CB38  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FBFC 0038CB3C  38 C5 32 30 */	addi r6, r5, 0x5F303230@l
/* 8038FC00 0038CB40  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 8038FC04 0038CB44  7D 89 03 A6 */	mtctr r12
/* 8038FC08 0038CB48  4E 80 04 21 */	bctrl 
/* 8038FC0C 0038CB4C  7C 76 1B 78 */	mr r22, r3
/* 8038FC10 0038CB50  7F A3 EB 78 */	mr r3, r29
/* 8038FC14 0038CB54  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FC18 0038CB58  3C A0 70 6B */	lis r5, 0x706B5F72@ha
/* 8038FC1C 0038CB5C  3C 80 00 50 */	lis r4, 0x0050775F@ha
/* 8038FC20 0038CB60  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FC24 0038CB64  38 C5 5F 72 */	addi r6, r5, 0x706B5F72@l
/* 8038FC28 0038CB68  38 A4 77 5F */	addi r5, r4, 0x0050775F@l
/* 8038FC2C 0038CB6C  7D 89 03 A6 */	mtctr r12
/* 8038FC30 0038CB70  4E 80 04 21 */	bctrl 
/* 8038FC34 0038CB74  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8038FC38 0038CB78  7C 75 1B 78 */	mr r21, r3
/* 8038FC3C 0038CB7C  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8038FC40 0038CB80  38 7A 00 14 */	addi r3, r26, 0x14
/* 8038FC44 0038CB84  38 A0 00 00 */	li r5, 0
/* 8038FC48 0038CB88  38 C0 00 08 */	li r6, 8
/* 8038FC4C 0038CB8C  38 E0 00 02 */	li r7, 2
/* 8038FC50 0038CB90  4B D3 1B ED */	bl __construct_array
/* 8038FC54 0038CB94  3C 80 80 39 */	lis r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
/* 8038FC58 0038CB98  38 7A 00 24 */	addi r3, r26, 0x24
/* 8038FC5C 0038CB9C  38 84 C4 88 */	addi r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
/* 8038FC60 0038CBA0  38 A0 00 00 */	li r5, 0
/* 8038FC64 0038CBA4  38 C0 00 24 */	li r6, 0x24
/* 8038FC68 0038CBA8  38 E0 00 32 */	li r7, 0x32
/* 8038FC6C 0038CBAC  4B D3 1B D1 */	bl __construct_array
/* 8038FC70 0038CBB0  3A E0 00 00 */	li r23, 0
/* 8038FC74 0038CBB4  7F 58 D3 78 */	mr r24, r26
/* 8038FC78 0038CBB8  92 FA 07 2C */	stw r23, 0x72c(r26)
/* 8038FC7C 0038CBBC  92 BA 00 00 */	stw r21, 0(r26)
/* 8038FC80 0038CBC0  92 DA 00 04 */	stw r22, 4(r26)
/* 8038FC84 0038CBC4  93 7A 00 08 */	stw r27, 8(r26)
.L_8038FC88:
/* 8038FC88 0038CBC8  80 18 00 00 */	lwz r0, 0(r24)
/* 8038FC8C 0038CBCC  28 00 00 00 */	cmplwi r0, 0
/* 8038FC90 0038CBD0  40 82 00 18 */	bne .L_8038FCA8
/* 8038FC94 0038CBD4  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038FC98 0038CBD8  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038FC9C 0038CBDC  38 80 00 48 */	li r4, 0x48
/* 8038FCA0 0038CBE0  4C C6 31 82 */	crclr 6
/* 8038FCA4 0038CBE4  4B C9 A9 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038FCA8:
/* 8038FCA8 0038CBE8  3A F7 00 01 */	addi r23, r23, 1
/* 8038FCAC 0038CBEC  3B 18 00 04 */	addi r24, r24, 4
/* 8038FCB0 0038CBF0  2C 17 00 03 */	cmpwi r23, 3
/* 8038FCB4 0038CBF4  41 80 FF D4 */	blt .L_8038FC88
/* 8038FCB8 0038CBF8  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038FCBC 0038CBFC  38 A0 00 30 */	li r5, 0x30
/* 8038FCC0 0038CC00  1C 65 00 24 */	mulli r3, r5, 0x24
/* 8038FCC4 0038CC04  38 80 00 00 */	li r4, 0
/* 8038FCC8 0038CC08  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8038FCCC 0038CC0C  20 05 00 32 */	subfic r0, r5, 0x32
/* 8038FCD0 0038CC10  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8038FCD4 0038CC14  7C 7A 1A 14 */	add r3, r26, r3
/* 8038FCD8 0038CC18  D0 1A 07 30 */	stfs f0, 0x730(r26)
/* 8038FCDC 0038CC1C  90 9A 00 24 */	stw r4, 0x24(r26)
/* 8038FCE0 0038CC20  90 9A 00 48 */	stw r4, 0x48(r26)
/* 8038FCE4 0038CC24  90 9A 00 6C */	stw r4, 0x6c(r26)
/* 8038FCE8 0038CC28  90 9A 00 90 */	stw r4, 0x90(r26)
/* 8038FCEC 0038CC2C  90 9A 00 B4 */	stw r4, 0xb4(r26)
/* 8038FCF0 0038CC30  90 9A 00 D8 */	stw r4, 0xd8(r26)
/* 8038FCF4 0038CC34  90 9A 00 FC */	stw r4, 0xfc(r26)
/* 8038FCF8 0038CC38  90 9A 01 20 */	stw r4, 0x120(r26)
/* 8038FCFC 0038CC3C  90 9A 01 44 */	stw r4, 0x144(r26)
/* 8038FD00 0038CC40  90 9A 01 68 */	stw r4, 0x168(r26)
/* 8038FD04 0038CC44  90 9A 01 8C */	stw r4, 0x18c(r26)
/* 8038FD08 0038CC48  90 9A 01 B0 */	stw r4, 0x1b0(r26)
/* 8038FD0C 0038CC4C  90 9A 01 D4 */	stw r4, 0x1d4(r26)
/* 8038FD10 0038CC50  90 9A 01 F8 */	stw r4, 0x1f8(r26)
/* 8038FD14 0038CC54  90 9A 02 1C */	stw r4, 0x21c(r26)
/* 8038FD18 0038CC58  90 9A 02 40 */	stw r4, 0x240(r26)
/* 8038FD1C 0038CC5C  90 9A 02 64 */	stw r4, 0x264(r26)
/* 8038FD20 0038CC60  90 9A 02 88 */	stw r4, 0x288(r26)
/* 8038FD24 0038CC64  90 9A 02 AC */	stw r4, 0x2ac(r26)
/* 8038FD28 0038CC68  90 9A 02 D0 */	stw r4, 0x2d0(r26)
/* 8038FD2C 0038CC6C  90 9A 02 F4 */	stw r4, 0x2f4(r26)
/* 8038FD30 0038CC70  90 9A 03 18 */	stw r4, 0x318(r26)
/* 8038FD34 0038CC74  90 9A 03 3C */	stw r4, 0x33c(r26)
/* 8038FD38 0038CC78  90 9A 03 60 */	stw r4, 0x360(r26)
/* 8038FD3C 0038CC7C  90 9A 03 84 */	stw r4, 0x384(r26)
/* 8038FD40 0038CC80  90 9A 03 A8 */	stw r4, 0x3a8(r26)
/* 8038FD44 0038CC84  90 9A 03 CC */	stw r4, 0x3cc(r26)
/* 8038FD48 0038CC88  90 9A 03 F0 */	stw r4, 0x3f0(r26)
/* 8038FD4C 0038CC8C  90 9A 04 14 */	stw r4, 0x414(r26)
/* 8038FD50 0038CC90  90 9A 04 38 */	stw r4, 0x438(r26)
/* 8038FD54 0038CC94  90 9A 04 5C */	stw r4, 0x45c(r26)
/* 8038FD58 0038CC98  90 9A 04 80 */	stw r4, 0x480(r26)
/* 8038FD5C 0038CC9C  90 9A 04 A4 */	stw r4, 0x4a4(r26)
/* 8038FD60 0038CCA0  90 9A 04 C8 */	stw r4, 0x4c8(r26)
/* 8038FD64 0038CCA4  90 9A 04 EC */	stw r4, 0x4ec(r26)
/* 8038FD68 0038CCA8  90 9A 05 10 */	stw r4, 0x510(r26)
/* 8038FD6C 0038CCAC  90 9A 05 34 */	stw r4, 0x534(r26)
/* 8038FD70 0038CCB0  90 9A 05 58 */	stw r4, 0x558(r26)
/* 8038FD74 0038CCB4  90 9A 05 7C */	stw r4, 0x57c(r26)
/* 8038FD78 0038CCB8  90 9A 05 A0 */	stw r4, 0x5a0(r26)
/* 8038FD7C 0038CCBC  90 9A 05 C4 */	stw r4, 0x5c4(r26)
/* 8038FD80 0038CCC0  90 9A 05 E8 */	stw r4, 0x5e8(r26)
/* 8038FD84 0038CCC4  90 9A 06 0C */	stw r4, 0x60c(r26)
/* 8038FD88 0038CCC8  90 9A 06 30 */	stw r4, 0x630(r26)
/* 8038FD8C 0038CCCC  90 9A 06 54 */	stw r4, 0x654(r26)
/* 8038FD90 0038CCD0  90 9A 06 78 */	stw r4, 0x678(r26)
/* 8038FD94 0038CCD4  90 9A 06 9C */	stw r4, 0x69c(r26)
/* 8038FD98 0038CCD8  90 9A 06 C0 */	stw r4, 0x6c0(r26)
/* 8038FD9C 0038CCDC  7C 09 03 A6 */	mtctr r0
/* 8038FDA0 0038CCE0  2C 05 00 32 */	cmpwi r5, 0x32
/* 8038FDA4 0038CCE4  40 80 00 0C */	bge .L_8038FDB0
.L_8038FDA8:
/* 8038FDA8 0038CCE8  94 83 00 24 */	stwu r4, 0x24(r3)
/* 8038FDAC 0038CCEC  42 00 FF FC */	bdnz .L_8038FDA8
.L_8038FDB0:
/* 8038FDB0 0038CCF0  93 5F 00 A8 */	stw r26, 0xa8(r31)
/* 8038FDB4 0038CCF4  38 60 07 34 */	li r3, 0x734
/* 8038FDB8 0038CCF8  4B C9 40 ED */	bl __nw__FUl
/* 8038FDBC 0038CCFC  7C 7A 1B 79 */	or. r26, r3, r3
/* 8038FDC0 0038CD00  41 82 01 F0 */	beq .L_8038FFB0
/* 8038FDC4 0038CD04  7F A3 EB 78 */	mr r3, r29
/* 8038FDC8 0038CD08  3C 80 6C 5F */	lis r4, 0x6C5F6677@ha
/* 8038FDCC 0038CD0C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FDD0 0038CD10  38 C4 66 77 */	addi r6, r4, 0x6C5F6677@l
/* 8038FDD4 0038CD14  38 A0 50 62 */	li r5, 0x5062
/* 8038FDD8 0038CD18  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FDDC 0038CD1C  7D 89 03 A6 */	mtctr r12
/* 8038FDE0 0038CD20  4E 80 04 21 */	bctrl 
/* 8038FDE4 0038CD24  7C 7B 1B 78 */	mr r27, r3
/* 8038FDE8 0038CD28  7F A3 EB 78 */	mr r3, r29
/* 8038FDEC 0038CD2C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FDF0 0038CD30  3C A0 70 6B */	lis r5, 0x706B5F72@ha
/* 8038FDF4 0038CD34  3C 80 50 62 */	lis r4, 0x50626C5F@ha
/* 8038FDF8 0038CD38  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FDFC 0038CD3C  38 C5 5F 72 */	addi r6, r5, 0x706B5F72@l
/* 8038FE00 0038CD40  38 A4 6C 5F */	addi r5, r4, 0x50626C5F@l
/* 8038FE04 0038CD44  7D 89 03 A6 */	mtctr r12
/* 8038FE08 0038CD48  4E 80 04 21 */	bctrl 
/* 8038FE0C 0038CD4C  7C 76 1B 78 */	mr r22, r3
/* 8038FE10 0038CD50  7F A3 EB 78 */	mr r3, r29
/* 8038FE14 0038CD54  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FE18 0038CD58  3C A0 70 6B */	lis r5, 0x706B5F6C@ha
/* 8038FE1C 0038CD5C  3C 80 50 62 */	lis r4, 0x50626C5F@ha
/* 8038FE20 0038CD60  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FE24 0038CD64  38 C5 5F 6C */	addi r6, r5, 0x706B5F6C@l
/* 8038FE28 0038CD68  38 A4 6C 5F */	addi r5, r4, 0x50626C5F@l
/* 8038FE2C 0038CD6C  7D 89 03 A6 */	mtctr r12
/* 8038FE30 0038CD70  4E 80 04 21 */	bctrl 
/* 8038FE34 0038CD74  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8038FE38 0038CD78  7C 75 1B 78 */	mr r21, r3
/* 8038FE3C 0038CD7C  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8038FE40 0038CD80  38 7A 00 14 */	addi r3, r26, 0x14
/* 8038FE44 0038CD84  38 A0 00 00 */	li r5, 0
/* 8038FE48 0038CD88  38 C0 00 08 */	li r6, 8
/* 8038FE4C 0038CD8C  38 E0 00 02 */	li r7, 2
/* 8038FE50 0038CD90  4B D3 19 ED */	bl __construct_array
/* 8038FE54 0038CD94  3C 80 80 39 */	lis r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@ha
/* 8038FE58 0038CD98  38 7A 00 24 */	addi r3, r26, 0x24
/* 8038FE5C 0038CD9C  38 84 C4 88 */	addi r4, r4, __ct__Q38Morimura14TChallengePiki7posInfoFv@l
/* 8038FE60 0038CDA0  38 A0 00 00 */	li r5, 0
/* 8038FE64 0038CDA4  38 C0 00 24 */	li r6, 0x24
/* 8038FE68 0038CDA8  38 E0 00 32 */	li r7, 0x32
/* 8038FE6C 0038CDAC  4B D3 19 D1 */	bl __construct_array
/* 8038FE70 0038CDB0  3A E0 00 00 */	li r23, 0
/* 8038FE74 0038CDB4  7F 58 D3 78 */	mr r24, r26
/* 8038FE78 0038CDB8  92 FA 07 2C */	stw r23, 0x72c(r26)
/* 8038FE7C 0038CDBC  92 BA 00 00 */	stw r21, 0(r26)
/* 8038FE80 0038CDC0  92 DA 00 04 */	stw r22, 4(r26)
/* 8038FE84 0038CDC4  93 7A 00 08 */	stw r27, 8(r26)
.L_8038FE88:
/* 8038FE88 0038CDC8  80 18 00 00 */	lwz r0, 0(r24)
/* 8038FE8C 0038CDCC  28 00 00 00 */	cmplwi r0, 0
/* 8038FE90 0038CDD0  40 82 00 18 */	bne .L_8038FEA8
/* 8038FE94 0038CDD4  38 7E 00 14 */	addi r3, r30, 0x14
/* 8038FE98 0038CDD8  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8038FE9C 0038CDDC  38 80 00 48 */	li r4, 0x48
/* 8038FEA0 0038CDE0  4C C6 31 82 */	crclr 6
/* 8038FEA4 0038CDE4  4B C9 A7 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8038FEA8:
/* 8038FEA8 0038CDE8  3A F7 00 01 */	addi r23, r23, 1
/* 8038FEAC 0038CDEC  3B 18 00 04 */	addi r24, r24, 4
/* 8038FEB0 0038CDF0  2C 17 00 03 */	cmpwi r23, 3
/* 8038FEB4 0038CDF4  41 80 FF D4 */	blt .L_8038FE88
/* 8038FEB8 0038CDF8  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8038FEBC 0038CDFC  38 A0 00 30 */	li r5, 0x30
/* 8038FEC0 0038CE00  1C 65 00 24 */	mulli r3, r5, 0x24
/* 8038FEC4 0038CE04  38 80 00 00 */	li r4, 0
/* 8038FEC8 0038CE08  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8038FECC 0038CE0C  20 05 00 32 */	subfic r0, r5, 0x32
/* 8038FED0 0038CE10  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8038FED4 0038CE14  7C 7A 1A 14 */	add r3, r26, r3
/* 8038FED8 0038CE18  D0 1A 07 30 */	stfs f0, 0x730(r26)
/* 8038FEDC 0038CE1C  90 9A 00 24 */	stw r4, 0x24(r26)
/* 8038FEE0 0038CE20  90 9A 00 48 */	stw r4, 0x48(r26)
/* 8038FEE4 0038CE24  90 9A 00 6C */	stw r4, 0x6c(r26)
/* 8038FEE8 0038CE28  90 9A 00 90 */	stw r4, 0x90(r26)
/* 8038FEEC 0038CE2C  90 9A 00 B4 */	stw r4, 0xb4(r26)
/* 8038FEF0 0038CE30  90 9A 00 D8 */	stw r4, 0xd8(r26)
/* 8038FEF4 0038CE34  90 9A 00 FC */	stw r4, 0xfc(r26)
/* 8038FEF8 0038CE38  90 9A 01 20 */	stw r4, 0x120(r26)
/* 8038FEFC 0038CE3C  90 9A 01 44 */	stw r4, 0x144(r26)
/* 8038FF00 0038CE40  90 9A 01 68 */	stw r4, 0x168(r26)
/* 8038FF04 0038CE44  90 9A 01 8C */	stw r4, 0x18c(r26)
/* 8038FF08 0038CE48  90 9A 01 B0 */	stw r4, 0x1b0(r26)
/* 8038FF0C 0038CE4C  90 9A 01 D4 */	stw r4, 0x1d4(r26)
/* 8038FF10 0038CE50  90 9A 01 F8 */	stw r4, 0x1f8(r26)
/* 8038FF14 0038CE54  90 9A 02 1C */	stw r4, 0x21c(r26)
/* 8038FF18 0038CE58  90 9A 02 40 */	stw r4, 0x240(r26)
/* 8038FF1C 0038CE5C  90 9A 02 64 */	stw r4, 0x264(r26)
/* 8038FF20 0038CE60  90 9A 02 88 */	stw r4, 0x288(r26)
/* 8038FF24 0038CE64  90 9A 02 AC */	stw r4, 0x2ac(r26)
/* 8038FF28 0038CE68  90 9A 02 D0 */	stw r4, 0x2d0(r26)
/* 8038FF2C 0038CE6C  90 9A 02 F4 */	stw r4, 0x2f4(r26)
/* 8038FF30 0038CE70  90 9A 03 18 */	stw r4, 0x318(r26)
/* 8038FF34 0038CE74  90 9A 03 3C */	stw r4, 0x33c(r26)
/* 8038FF38 0038CE78  90 9A 03 60 */	stw r4, 0x360(r26)
/* 8038FF3C 0038CE7C  90 9A 03 84 */	stw r4, 0x384(r26)
/* 8038FF40 0038CE80  90 9A 03 A8 */	stw r4, 0x3a8(r26)
/* 8038FF44 0038CE84  90 9A 03 CC */	stw r4, 0x3cc(r26)
/* 8038FF48 0038CE88  90 9A 03 F0 */	stw r4, 0x3f0(r26)
/* 8038FF4C 0038CE8C  90 9A 04 14 */	stw r4, 0x414(r26)
/* 8038FF50 0038CE90  90 9A 04 38 */	stw r4, 0x438(r26)
/* 8038FF54 0038CE94  90 9A 04 5C */	stw r4, 0x45c(r26)
/* 8038FF58 0038CE98  90 9A 04 80 */	stw r4, 0x480(r26)
/* 8038FF5C 0038CE9C  90 9A 04 A4 */	stw r4, 0x4a4(r26)
/* 8038FF60 0038CEA0  90 9A 04 C8 */	stw r4, 0x4c8(r26)
/* 8038FF64 0038CEA4  90 9A 04 EC */	stw r4, 0x4ec(r26)
/* 8038FF68 0038CEA8  90 9A 05 10 */	stw r4, 0x510(r26)
/* 8038FF6C 0038CEAC  90 9A 05 34 */	stw r4, 0x534(r26)
/* 8038FF70 0038CEB0  90 9A 05 58 */	stw r4, 0x558(r26)
/* 8038FF74 0038CEB4  90 9A 05 7C */	stw r4, 0x57c(r26)
/* 8038FF78 0038CEB8  90 9A 05 A0 */	stw r4, 0x5a0(r26)
/* 8038FF7C 0038CEBC  90 9A 05 C4 */	stw r4, 0x5c4(r26)
/* 8038FF80 0038CEC0  90 9A 05 E8 */	stw r4, 0x5e8(r26)
/* 8038FF84 0038CEC4  90 9A 06 0C */	stw r4, 0x60c(r26)
/* 8038FF88 0038CEC8  90 9A 06 30 */	stw r4, 0x630(r26)
/* 8038FF8C 0038CECC  90 9A 06 54 */	stw r4, 0x654(r26)
/* 8038FF90 0038CED0  90 9A 06 78 */	stw r4, 0x678(r26)
/* 8038FF94 0038CED4  90 9A 06 9C */	stw r4, 0x69c(r26)
/* 8038FF98 0038CED8  90 9A 06 C0 */	stw r4, 0x6c0(r26)
/* 8038FF9C 0038CEDC  7C 09 03 A6 */	mtctr r0
/* 8038FFA0 0038CEE0  2C 05 00 32 */	cmpwi r5, 0x32
/* 8038FFA4 0038CEE4  40 80 00 0C */	bge .L_8038FFB0
.L_8038FFA8:
/* 8038FFA8 0038CEE8  94 83 00 24 */	stwu r4, 0x24(r3)
/* 8038FFAC 0038CEEC  42 00 FF FC */	bdnz .L_8038FFA8
.L_8038FFB0:
/* 8038FFB0 0038CEF0  93 5F 00 AC */	stw r26, 0xac(r31)
/* 8038FFB4 0038CEF4  7F A3 EB 78 */	mr r3, r29
/* 8038FFB8 0038CEF8  3C 80 79 65 */	lis r4, 0x79656C31@ha
/* 8038FFBC 0038CEFC  38 A0 00 54 */	li r5, 0x54
/* 8038FFC0 0038CF00  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FFC4 0038CF04  38 C4 6C 31 */	addi r6, r4, 0x79656C31@l
/* 8038FFC8 0038CF08  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FFCC 0038CF0C  7D 89 03 A6 */	mtctr r12
/* 8038FFD0 0038CF10  4E 80 04 21 */	bctrl 
/* 8038FFD4 0038CF14  90 7F 00 E0 */	stw r3, 0xe0(r31)
/* 8038FFD8 0038CF18  7F A3 EB 78 */	mr r3, r29
/* 8038FFDC 0038CF1C  3C 80 79 65 */	lis r4, 0x79656C32@ha
/* 8038FFE0 0038CF20  38 A0 00 54 */	li r5, 0x54
/* 8038FFE4 0038CF24  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038FFE8 0038CF28  38 C4 6C 32 */	addi r6, r4, 0x79656C32@l
/* 8038FFEC 0038CF2C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8038FFF0 0038CF30  7D 89 03 A6 */	mtctr r12
/* 8038FFF4 0038CF34  4E 80 04 21 */	bctrl 
/* 8038FFF8 0038CF38  90 7F 00 E4 */	stw r3, 0xe4(r31)
/* 8038FFFC 0038CF3C  7F F5 FB 78 */	mr r21, r31
/* 80390000 0038CF40  3A C0 00 00 */	li r22, 0
.L_80390004:
/* 80390004 0038CF44  80 15 00 E0 */	lwz r0, 0xe0(r21)
/* 80390008 0038CF48  28 00 00 00 */	cmplwi r0, 0
/* 8039000C 0038CF4C  40 82 00 18 */	bne .L_80390024
/* 80390010 0038CF50  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390014 0038CF54  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390018 0038CF58  38 80 05 F5 */	li r4, 0x5f5
/* 8039001C 0038CF5C  4C C6 31 82 */	crclr 6
/* 80390020 0038CF60  4B C9 A6 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390024:
/* 80390024 0038CF64  3A D6 00 01 */	addi r22, r22, 1
/* 80390028 0038CF68  3A B5 00 04 */	addi r21, r21, 4
/* 8039002C 0038CF6C  2C 16 00 02 */	cmpwi r22, 2
/* 80390030 0038CF70  41 80 FF D4 */	blt .L_80390004
/* 80390034 0038CF74  38 60 00 18 */	li r3, 0x18
/* 80390038 0038CF78  4B C9 3E 6D */	bl __nw__FUl
/* 8039003C 0038CF7C  7C 7A 1B 79 */	or. r26, r3, r3
/* 80390040 0038CF80  41 82 01 20 */	beq .L_80390160
/* 80390044 0038CF84  7F A3 EB 78 */	mr r3, r29
/* 80390048 0038CF88  3C A0 5F 30 */	lis r5, 0x5F303234@ha
/* 8039004C 0038CF8C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80390050 0038CF90  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 80390054 0038CF94  38 C5 32 34 */	addi r6, r5, 0x5F303234@l
/* 80390058 0038CF98  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039005C 0038CF9C  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 80390060 0038CFA0  7D 89 03 A6 */	mtctr r12
/* 80390064 0038CFA4  4E 80 04 21 */	bctrl 
/* 80390068 0038CFA8  7C 77 1B 78 */	mr r23, r3
/* 8039006C 0038CFAC  7F A3 EB 78 */	mr r3, r29
/* 80390070 0038CFB0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80390074 0038CFB4  3C A0 5F 30 */	lis r5, 0x5F303232@ha
/* 80390078 0038CFB8  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 8039007C 0038CFBC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80390080 0038CFC0  38 C5 32 32 */	addi r6, r5, 0x5F303232@l
/* 80390084 0038CFC4  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 80390088 0038CFC8  7D 89 03 A6 */	mtctr r12
/* 8039008C 0038CFCC  4E 80 04 21 */	bctrl 
/* 80390090 0038CFD0  7C 76 1B 78 */	mr r22, r3
/* 80390094 0038CFD4  7F A3 EB 78 */	mr r3, r29
/* 80390098 0038CFD8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039009C 0038CFDC  3C A0 5F 30 */	lis r5, 0x5F303233@ha
/* 803900A0 0038CFE0  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 803900A4 0038CFE4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803900A8 0038CFE8  38 C5 32 33 */	addi r6, r5, 0x5F303233@l
/* 803900AC 0038CFEC  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 803900B0 0038CFF0  7D 89 03 A6 */	mtctr r12
/* 803900B4 0038CFF4  4E 80 04 21 */	bctrl 
/* 803900B8 0038CFF8  7C 75 1B 78 */	mr r21, r3
/* 803900BC 0038CFFC  7F A3 EB 78 */	mr r3, r29
/* 803900C0 0038D000  81 9D 00 00 */	lwz r12, 0(r29)
/* 803900C4 0038D004  3C A0 5F 30 */	lis r5, 0x5F303133@ha
/* 803900C8 0038D008  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 803900CC 0038D00C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803900D0 0038D010  38 C5 31 33 */	addi r6, r5, 0x5F303133@l
/* 803900D4 0038D014  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 803900D8 0038D018  7D 89 03 A6 */	mtctr r12
/* 803900DC 0038D01C  4E 80 04 21 */	bctrl 
/* 803900E0 0038D020  90 7A 00 00 */	stw r3, 0(r26)
/* 803900E4 0038D024  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 803900E8 0038D028  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 803900EC 0038D02C  D0 1A 00 14 */	stfs f0, 0x14(r26)
/* 803900F0 0038D030  80 1A 00 00 */	lwz r0, 0(r26)
/* 803900F4 0038D034  28 00 00 00 */	cmplwi r0, 0
/* 803900F8 0038D038  40 82 00 18 */	bne .L_80390110
/* 803900FC 0038D03C  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390100 0038D040  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390104 0038D044  38 80 01 1C */	li r4, 0x11c
/* 80390108 0038D048  4C C6 31 82 */	crclr 6
/* 8039010C 0038D04C  4B C9 A5 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390110:
/* 80390110 0038D050  80 7A 00 00 */	lwz r3, 0(r26)
/* 80390114 0038D054  38 80 00 07 */	li r4, 7
/* 80390118 0038D058  4B CA 8B A5 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039011C 0038D05C  92 BA 00 04 */	stw r21, 4(r26)
/* 80390120 0038D060  7F 58 D3 78 */	mr r24, r26
/* 80390124 0038D064  3A A0 00 00 */	li r21, 0
/* 80390128 0038D068  92 DA 00 08 */	stw r22, 8(r26)
/* 8039012C 0038D06C  92 FA 00 0C */	stw r23, 0xc(r26)
.L_80390130:
/* 80390130 0038D070  80 18 00 04 */	lwz r0, 4(r24)
/* 80390134 0038D074  28 00 00 00 */	cmplwi r0, 0
/* 80390138 0038D078  40 82 00 18 */	bne .L_80390150
/* 8039013C 0038D07C  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390140 0038D080  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390144 0038D084  38 80 01 22 */	li r4, 0x122
/* 80390148 0038D088  4C C6 31 82 */	crclr 6
/* 8039014C 0038D08C  4B C9 A4 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390150:
/* 80390150 0038D090  3A B5 00 01 */	addi r21, r21, 1
/* 80390154 0038D094  3B 18 00 04 */	addi r24, r24, 4
/* 80390158 0038D098  2C 15 00 03 */	cmpwi r21, 3
/* 8039015C 0038D09C  41 80 FF D4 */	blt .L_80390130
.L_80390160:
/* 80390160 0038D0A0  93 5F 00 B0 */	stw r26, 0xb0(r31)
/* 80390164 0038D0A4  38 60 00 18 */	li r3, 0x18
/* 80390168 0038D0A8  4B C9 3D 3D */	bl __nw__FUl
/* 8039016C 0038D0AC  7C 7A 1B 79 */	or. r26, r3, r3
/* 80390170 0038D0B0  41 82 01 20 */	beq .L_80390290
/* 80390174 0038D0B4  7F A3 EB 78 */	mr r3, r29
/* 80390178 0038D0B8  3C A0 5F 30 */	lis r5, 0x5F303237@ha
/* 8039017C 0038D0BC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80390180 0038D0C0  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 80390184 0038D0C4  38 C5 32 37 */	addi r6, r5, 0x5F303237@l
/* 80390188 0038D0C8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039018C 0038D0CC  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 80390190 0038D0D0  7D 89 03 A6 */	mtctr r12
/* 80390194 0038D0D4  4E 80 04 21 */	bctrl 
/* 80390198 0038D0D8  7C 77 1B 78 */	mr r23, r3
/* 8039019C 0038D0DC  7F A3 EB 78 */	mr r3, r29
/* 803901A0 0038D0E0  81 9D 00 00 */	lwz r12, 0(r29)
/* 803901A4 0038D0E4  3C A0 5F 30 */	lis r5, 0x5F303235@ha
/* 803901A8 0038D0E8  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 803901AC 0038D0EC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803901B0 0038D0F0  38 C5 32 35 */	addi r6, r5, 0x5F303235@l
/* 803901B4 0038D0F4  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 803901B8 0038D0F8  7D 89 03 A6 */	mtctr r12
/* 803901BC 0038D0FC  4E 80 04 21 */	bctrl 
/* 803901C0 0038D100  7C 76 1B 78 */	mr r22, r3
/* 803901C4 0038D104  7F A3 EB 78 */	mr r3, r29
/* 803901C8 0038D108  81 9D 00 00 */	lwz r12, 0(r29)
/* 803901CC 0038D10C  3C A0 5F 30 */	lis r5, 0x5F303236@ha
/* 803901D0 0038D110  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 803901D4 0038D114  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803901D8 0038D118  38 C5 32 36 */	addi r6, r5, 0x5F303236@l
/* 803901DC 0038D11C  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 803901E0 0038D120  7D 89 03 A6 */	mtctr r12
/* 803901E4 0038D124  4E 80 04 21 */	bctrl 
/* 803901E8 0038D128  7C 75 1B 78 */	mr r21, r3
/* 803901EC 0038D12C  7F A3 EB 78 */	mr r3, r29
/* 803901F0 0038D130  81 9D 00 00 */	lwz r12, 0(r29)
/* 803901F4 0038D134  3C A0 5F 30 */	lis r5, 0x5F303037@ha
/* 803901F8 0038D138  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 803901FC 0038D13C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80390200 0038D140  38 C5 30 37 */	addi r6, r5, 0x5F303037@l
/* 80390204 0038D144  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 80390208 0038D148  7D 89 03 A6 */	mtctr r12
/* 8039020C 0038D14C  4E 80 04 21 */	bctrl 
/* 80390210 0038D150  90 7A 00 00 */	stw r3, 0(r26)
/* 80390214 0038D154  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390218 0038D158  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8039021C 0038D15C  D0 1A 00 14 */	stfs f0, 0x14(r26)
/* 80390220 0038D160  80 1A 00 00 */	lwz r0, 0(r26)
/* 80390224 0038D164  28 00 00 00 */	cmplwi r0, 0
/* 80390228 0038D168  40 82 00 18 */	bne .L_80390240
/* 8039022C 0038D16C  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390230 0038D170  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390234 0038D174  38 80 01 1C */	li r4, 0x11c
/* 80390238 0038D178  4C C6 31 82 */	crclr 6
/* 8039023C 0038D17C  4B C9 A4 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390240:
/* 80390240 0038D180  80 7A 00 00 */	lwz r3, 0(r26)
/* 80390244 0038D184  38 80 00 07 */	li r4, 7
/* 80390248 0038D188  4B CA 8A 75 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039024C 0038D18C  92 BA 00 04 */	stw r21, 4(r26)
/* 80390250 0038D190  7F 58 D3 78 */	mr r24, r26
/* 80390254 0038D194  3A A0 00 00 */	li r21, 0
/* 80390258 0038D198  92 DA 00 08 */	stw r22, 8(r26)
/* 8039025C 0038D19C  92 FA 00 0C */	stw r23, 0xc(r26)
.L_80390260:
/* 80390260 0038D1A0  80 18 00 04 */	lwz r0, 4(r24)
/* 80390264 0038D1A4  28 00 00 00 */	cmplwi r0, 0
/* 80390268 0038D1A8  40 82 00 18 */	bne .L_80390280
/* 8039026C 0038D1AC  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390270 0038D1B0  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390274 0038D1B4  38 80 01 22 */	li r4, 0x122
/* 80390278 0038D1B8  4C C6 31 82 */	crclr 6
/* 8039027C 0038D1BC  4B C9 A3 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390280:
/* 80390280 0038D1C0  3A B5 00 01 */	addi r21, r21, 1
/* 80390284 0038D1C4  3B 18 00 04 */	addi r24, r24, 4
/* 80390288 0038D1C8  2C 15 00 03 */	cmpwi r21, 3
/* 8039028C 0038D1CC  41 80 FF D4 */	blt .L_80390260
.L_80390290:
/* 80390290 0038D1D0  93 5F 00 B4 */	stw r26, 0xb4(r31)
/* 80390294 0038D1D4  7F A3 EB 78 */	mr r3, r29
/* 80390298 0038D1D8  3C A0 66 65 */	lis r5, 0x66656374@ha
/* 8039029C 0038D1DC  3C 80 00 50 */	lis r4, 0x00506566@ha
/* 803902A0 0038D1E0  81 9D 00 00 */	lwz r12, 0(r29)
/* 803902A4 0038D1E4  38 C5 63 74 */	addi r6, r5, 0x66656374@l
/* 803902A8 0038D1E8  38 A4 65 66 */	addi r5, r4, 0x00506566@l
/* 803902AC 0038D1EC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803902B0 0038D1F0  7D 89 03 A6 */	mtctr r12
/* 803902B4 0038D1F4  4E 80 04 21 */	bctrl 
/* 803902B8 0038D1F8  7C 75 1B 79 */	or. r21, r3, r3
/* 803902BC 0038D1FC  40 82 00 18 */	bne .L_803902D4
/* 803902C0 0038D200  38 7E 00 14 */	addi r3, r30, 0x14
/* 803902C4 0038D204  38 BE 00 2C */	addi r5, r30, 0x2c
/* 803902C8 0038D208  38 80 06 00 */	li r4, 0x600
/* 803902CC 0038D20C  4C C6 31 82 */	crclr 6
/* 803902D0 0038D210  4B C9 A3 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803902D4:
/* 803902D4 0038D214  38 00 00 01 */	li r0, 1
/* 803902D8 0038D218  3C A0 65 63 */	lis r5, 0x65633030@ha
/* 803902DC 0038D21C  98 15 00 B0 */	stb r0, 0xb0(r21)
/* 803902E0 0038D220  7F A3 EB 78 */	mr r3, r29
/* 803902E4 0038D224  3C 80 50 73 */	lis r4, 0x5073656C@ha
/* 803902E8 0038D228  38 C5 30 30 */	addi r6, r5, 0x65633030@l
/* 803902EC 0038D22C  81 9D 00 00 */	lwz r12, 0(r29)
/* 803902F0 0038D230  38 A4 65 6C */	addi r5, r4, 0x5073656C@l
/* 803902F4 0038D234  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803902F8 0038D238  7D 89 03 A6 */	mtctr r12
/* 803902FC 0038D23C  4E 80 04 21 */	bctrl 
/* 80390300 0038D240  90 7F 00 E8 */	stw r3, 0xe8(r31)
/* 80390304 0038D244  80 1F 00 E8 */	lwz r0, 0xe8(r31)
/* 80390308 0038D248  28 00 00 00 */	cmplwi r0, 0
/* 8039030C 0038D24C  40 82 00 18 */	bne .L_80390324
/* 80390310 0038D250  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390314 0038D254  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390318 0038D258  38 80 06 05 */	li r4, 0x605
/* 8039031C 0038D25C  4C C6 31 82 */	crclr 6
/* 80390320 0038D260  4B C9 A3 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390324:
/* 80390324 0038D264  3C 80 73 31 */	lis r4, 0x73317031@ha
/* 80390328 0038D268  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 8039032C 0038D26C  7F A3 EB 78 */	mr r3, r29
/* 80390330 0038D270  38 FF 01 00 */	addi r7, r31, 0x100
/* 80390334 0038D274  38 C4 70 31 */	addi r6, r4, 0x73317031@l
/* 80390338 0038D278  38 A0 50 68 */	li r5, 0x5068
/* 8039033C 0038D27C  39 00 00 05 */	li r8, 5
/* 80390340 0038D280  48 01 19 1D */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 80390344 0038D284  90 7F 00 B8 */	stw r3, 0xb8(r31)
/* 80390348 0038D288  3C 80 73 32 */	lis r4, 0x73327031@ha
/* 8039034C 0038D28C  7F A3 EB 78 */	mr r3, r29
/* 80390350 0038D290  38 FF 01 04 */	addi r7, r31, 0x104
/* 80390354 0038D294  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 80390358 0038D298  38 C4 70 31 */	addi r6, r4, 0x73327031@l
/* 8039035C 0038D29C  38 A0 50 68 */	li r5, 0x5068
/* 80390360 0038D2A0  39 00 00 05 */	li r8, 5
/* 80390364 0038D2A4  48 01 18 F9 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 80390368 0038D2A8  90 7F 00 BC */	stw r3, 0xbc(r31)
/* 8039036C 0038D2AC  7F F5 FB 78 */	mr r21, r31
/* 80390370 0038D2B0  3A C1 00 30 */	addi r22, r1, 0x30
/* 80390374 0038D2B4  3A E0 00 00 */	li r23, 0
/* 80390378 0038D2B8  C8 9E 01 78 */	lfd f4, 0x178(r30)
/* 8039037C 0038D2BC  C8 7E 01 80 */	lfd f3, 0x180(r30)
/* 80390380 0038D2C0  C8 5E 01 88 */	lfd f2, 0x188(r30)
/* 80390384 0038D2C4  C8 3E 01 90 */	lfd f1, 0x190(r30)
/* 80390388 0038D2C8  C8 1E 01 98 */	lfd f0, 0x198(r30)
/* 8039038C 0038D2CC  D8 81 00 30 */	stfd f4, 0x30(r1)
/* 80390390 0038D2D0  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 80390394 0038D2D4  D8 41 00 40 */	stfd f2, 0x40(r1)
/* 80390398 0038D2D8  D8 21 00 48 */	stfd f1, 0x48(r1)
/* 8039039C 0038D2DC  D8 01 00 50 */	stfd f0, 0x50(r1)
.L_803903A0:
/* 803903A0 0038D2E0  80 B6 00 00 */	lwz r5, 0(r22)
/* 803903A4 0038D2E4  7F A3 EB 78 */	mr r3, r29
/* 803903A8 0038D2E8  80 D6 00 04 */	lwz r6, 4(r22)
/* 803903AC 0038D2EC  38 F5 01 08 */	addi r7, r21, 0x108
/* 803903B0 0038D2F0  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 803903B4 0038D2F4  39 00 00 03 */	li r8, 3
/* 803903B8 0038D2F8  48 01 18 A5 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 803903BC 0038D2FC  3A F7 00 01 */	addi r23, r23, 1
/* 803903C0 0038D300  90 75 00 C0 */	stw r3, 0xc0(r21)
/* 803903C4 0038D304  2C 17 00 05 */	cmpwi r23, 5
/* 803903C8 0038D308  3A B5 00 04 */	addi r21, r21, 4
/* 803903CC 0038D30C  3A D6 00 08 */	addi r22, r22, 8
/* 803903D0 0038D310  41 80 FF D0 */	blt .L_803903A0
/* 803903D4 0038D314  3C A0 73 5F */	lis r5, 0x735F7031@ha
/* 803903D8 0038D318  3C 80 50 65 */	lis r4, 0x50656B69@ha
/* 803903DC 0038D31C  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 803903E0 0038D320  7F A3 EB 78 */	mr r3, r29
/* 803903E4 0038D324  38 C5 70 31 */	addi r6, r5, 0x735F7031@l
/* 803903E8 0038D328  38 A4 6B 69 */	addi r5, r4, 0x50656B69@l
/* 803903EC 0038D32C  38 FF 01 1C */	addi r7, r31, 0x11c
/* 803903F0 0038D330  39 00 00 02 */	li r8, 2
/* 803903F4 0038D334  48 01 18 69 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 803903F8 0038D338  90 7F 00 D4 */	stw r3, 0xd4(r31)
/* 803903FC 0038D33C  3C A0 73 5F */	lis r5, 0x735F7231@ha
/* 80390400 0038D340  3C 80 50 65 */	lis r4, 0x50656B69@ha
/* 80390404 0038D344  7F A3 EB 78 */	mr r3, r29
/* 80390408 0038D348  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 8039040C 0038D34C  38 C5 72 31 */	addi r6, r5, 0x735F7231@l
/* 80390410 0038D350  38 A4 6B 69 */	addi r5, r4, 0x50656B69@l
/* 80390414 0038D354  38 FF 01 20 */	addi r7, r31, 0x120
/* 80390418 0038D358  39 00 00 02 */	li r8, 2
/* 8039041C 0038D35C  48 01 18 41 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 80390420 0038D360  90 7F 00 D8 */	stw r3, 0xd8(r31)
/* 80390424 0038D364  3C A0 6F 6F */	lis r5, 0x6F6F7231@ha
/* 80390428 0038D368  3C 80 00 50 */	lis r4, 0x0050666C@ha
/* 8039042C 0038D36C  7F A3 EB 78 */	mr r3, r29
/* 80390430 0038D370  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 80390434 0038D374  38 C5 72 31 */	addi r6, r5, 0x6F6F7231@l
/* 80390438 0038D378  38 A4 66 6C */	addi r5, r4, 0x0050666C@l
/* 8039043C 0038D37C  38 FF 01 24 */	addi r7, r31, 0x124
/* 80390440 0038D380  39 00 00 02 */	li r8, 2
/* 80390444 0038D384  48 01 18 19 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 80390448 0038D388  38 00 00 5A */	li r0, 0x5a
/* 8039044C 0038D38C  90 7F 00 DC */	stw r3, 0xdc(r31)
/* 80390450 0038D390  38 A1 00 54 */	addi r5, r1, 0x54
/* 80390454 0038D394  38 9E 01 9C */	addi r4, r30, 0x19c
/* 80390458 0038D398  7C 09 03 A6 */	mtctr r0
.L_8039045C:
/* 8039045C 0038D39C  80 64 00 04 */	lwz r3, 4(r4)
/* 80390460 0038D3A0  84 04 00 08 */	lwzu r0, 8(r4)
/* 80390464 0038D3A4  90 65 00 04 */	stw r3, 4(r5)
/* 80390468 0038D3A8  94 05 00 08 */	stwu r0, 8(r5)
/* 8039046C 0038D3AC  42 00 FF F0 */	bdnz .L_8039045C
/* 80390470 0038D3B0  38 60 00 78 */	li r3, 0x78
/* 80390474 0038D3B4  4B C9 3B 39 */	bl __nwa__FUl
/* 80390478 0038D3B8  3C 80 80 4E */	lis r4, mIconTexture__Q28Morimura16TChallengeSelect@ha
/* 8039047C 0038D3BC  90 7F 00 94 */	stw r3, 0x94(r31)
/* 80390480 0038D3C0  3B 41 00 58 */	addi r26, r1, 0x58
/* 80390484 0038D3C4  3B 00 00 00 */	li r24, 0
/* 80390488 0038D3C8  3B 24 50 30 */	addi r25, r4, mIconTexture__Q28Morimura16TChallengeSelect@l
/* 8039048C 0038D3CC  3B 60 00 00 */	li r27, 0
.L_80390490:
/* 80390490 0038D3D0  38 60 00 38 */	li r3, 0x38
/* 80390494 0038D3D4  4B C9 3A 11 */	bl __nw__FUl
/* 80390498 0038D3D8  7C 75 1B 79 */	or. r21, r3, r3
/* 8039049C 0038D3DC  41 82 01 14 */	beq .L_803905B0
/* 803904A0 0038D3E0  7F A3 EB 78 */	mr r3, r29
/* 803904A4 0038D3E4  80 BA 00 10 */	lwz r5, 0x10(r26)
/* 803904A8 0038D3E8  81 9D 00 00 */	lwz r12, 0(r29)
/* 803904AC 0038D3EC  80 DA 00 14 */	lwz r6, 0x14(r26)
/* 803904B0 0038D3F0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803904B4 0038D3F4  7D 89 03 A6 */	mtctr r12
/* 803904B8 0038D3F8  4E 80 04 21 */	bctrl 
/* 803904BC 0038D3FC  7C 76 1B 78 */	mr r22, r3
/* 803904C0 0038D400  7F A3 EB 78 */	mr r3, r29
/* 803904C4 0038D404  81 9D 00 00 */	lwz r12, 0(r29)
/* 803904C8 0038D408  80 BA 00 08 */	lwz r5, 8(r26)
/* 803904CC 0038D40C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803904D0 0038D410  80 DA 00 0C */	lwz r6, 0xc(r26)
/* 803904D4 0038D414  7D 89 03 A6 */	mtctr r12
/* 803904D8 0038D418  4E 80 04 21 */	bctrl 
/* 803904DC 0038D41C  7C 77 1B 78 */	mr r23, r3
/* 803904E0 0038D420  7F A3 EB 78 */	mr r3, r29
/* 803904E4 0038D424  81 9D 00 00 */	lwz r12, 0(r29)
/* 803904E8 0038D428  80 BA 00 00 */	lwz r5, 0(r26)
/* 803904EC 0038D42C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803904F0 0038D430  80 DA 00 04 */	lwz r6, 4(r26)
/* 803904F4 0038D434  7D 89 03 A6 */	mtctr r12
/* 803904F8 0038D438  4E 80 04 21 */	bctrl 
/* 803904FC 0038D43C  38 00 00 00 */	li r0, 0
/* 80390500 0038D440  C0 22 0C 90 */	lfs f1, lbl_8051EFF0@sda21(r2)
/* 80390504 0038D444  90 15 00 00 */	stw r0, 0(r21)
/* 80390508 0038D448  28 03 00 00 */	cmplwi r3, 0
/* 8039050C 0038D44C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390510 0038D450  90 75 00 04 */	stw r3, 4(r21)
/* 80390514 0038D454  92 F5 00 08 */	stw r23, 8(r21)
/* 80390518 0038D458  92 D5 00 0C */	stw r22, 0xc(r21)
/* 8039051C 0038D45C  90 15 00 10 */	stw r0, 0x10(r21)
/* 80390520 0038D460  D0 35 00 14 */	stfs f1, 0x14(r21)
/* 80390524 0038D464  D0 15 00 18 */	stfs f0, 0x18(r21)
/* 80390528 0038D468  90 15 00 1C */	stw r0, 0x1c(r21)
/* 8039052C 0038D46C  90 15 00 20 */	stw r0, 0x20(r21)
/* 80390530 0038D470  98 15 00 24 */	stb r0, 0x24(r21)
/* 80390534 0038D474  D0 15 00 34 */	stfs f0, 0x34(r21)
/* 80390538 0038D478  40 82 00 18 */	bne .L_80390550
/* 8039053C 0038D47C  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390540 0038D480  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390544 0038D484  38 80 01 66 */	li r4, 0x166
/* 80390548 0038D488  4C C6 31 82 */	crclr 6
/* 8039054C 0038D48C  4B C9 A0 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390550:
/* 80390550 0038D490  28 17 00 00 */	cmplwi r23, 0
/* 80390554 0038D494  40 82 00 18 */	bne .L_8039056C
/* 80390558 0038D498  38 7E 00 14 */	addi r3, r30, 0x14
/* 8039055C 0038D49C  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390560 0038D4A0  38 80 01 67 */	li r4, 0x167
/* 80390564 0038D4A4  4C C6 31 82 */	crclr 6
/* 80390568 0038D4A8  4B C9 A0 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039056C:
/* 8039056C 0038D4AC  28 16 00 00 */	cmplwi r22, 0
/* 80390570 0038D4B0  40 82 00 18 */	bne .L_80390588
/* 80390574 0038D4B4  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390578 0038D4B8  38 BE 00 2C */	addi r5, r30, 0x2c
/* 8039057C 0038D4BC  38 80 01 68 */	li r4, 0x168
/* 80390580 0038D4C0  4C C6 31 82 */	crclr 6
/* 80390584 0038D4C4  4B C9 A0 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390588:
/* 80390588 0038D4C8  38 60 00 1C */	li r3, 0x1c
/* 8039058C 0038D4CC  4B C9 39 19 */	bl __nw__FUl
/* 80390590 0038D4D0  7C 60 1B 79 */	or. r0, r3, r3
/* 80390594 0038D4D4  41 82 00 0C */	beq .L_803905A0
/* 80390598 0038D4D8  4B F9 88 6D */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 8039059C 0038D4DC  7C 60 1B 78 */	mr r0, r3
.L_803905A0:
/* 803905A0 0038D4E0  90 15 00 10 */	stw r0, 0x10(r21)
/* 803905A4 0038D4E4  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 803905A8 0038D4E8  D0 15 00 28 */	stfs f0, 0x28(r21)
/* 803905AC 0038D4EC  D0 15 00 2C */	stfs f0, 0x2c(r21)
.L_803905B0:
/* 803905B0 0038D4F0  80 BF 00 94 */	lwz r5, 0x94(r31)
/* 803905B4 0038D4F4  7F E3 FB 78 */	mr r3, r31
/* 803905B8 0038D4F8  7F 04 C3 78 */	mr r4, r24
/* 803905BC 0038D4FC  7E A5 D9 2E */	stwx r21, r5, r27
/* 803905C0 0038D500  48 00 20 E1 */	bl getState__Q28Morimura16TChallengeSelectFi
/* 803905C4 0038D504  80 9F 00 94 */	lwz r4, 0x94(r31)
/* 803905C8 0038D508  7C 77 1B 78 */	mr r23, r3
/* 803905CC 0038D50C  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 803905D0 0038D510  56 E0 10 3A */	slwi r0, r23, 2
/* 803905D4 0038D514  7E A4 D8 2E */	lwzx r21, r4, r27
/* 803905D8 0038D518  38 A0 00 00 */	li r5, 0
/* 803905DC 0038D51C  90 75 00 00 */	stw r3, 0(r21)
/* 803905E0 0038D520  80 75 00 04 */	lwz r3, 4(r21)
/* 803905E4 0038D524  7C 99 00 2E */	lwzx r4, r25, r0
/* 803905E8 0038D528  81 83 00 00 */	lwz r12, 0(r3)
/* 803905EC 0038D52C  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 803905F0 0038D530  7D 89 03 A6 */	mtctr r12
/* 803905F4 0038D534  4E 80 04 21 */	bctrl 
/* 803905F8 0038D538  92 F5 00 1C */	stw r23, 0x1c(r21)
/* 803905FC 0038D53C  7F E3 FB 78 */	mr r3, r31
/* 80390600 0038D540  7F 04 C3 78 */	mr r4, r24
/* 80390604 0038D544  93 15 00 30 */	stw r24, 0x30(r21)
/* 80390608 0038D548  48 00 21 C5 */	bl getAfterState__Q28Morimura16TChallengeSelectFi
/* 8039060C 0038D54C  80 9F 00 94 */	lwz r4, 0x94(r31)
/* 80390610 0038D550  3B 18 00 01 */	addi r24, r24, 1
/* 80390614 0038D554  2C 18 00 1E */	cmpwi r24, 0x1e
/* 80390618 0038D558  3B 5A 00 18 */	addi r26, r26, 0x18
/* 8039061C 0038D55C  7C 84 D8 2E */	lwzx r4, r4, r27
/* 80390620 0038D560  3B 7B 00 04 */	addi r27, r27, 4
/* 80390624 0038D564  90 64 00 20 */	stw r3, 0x20(r4)
/* 80390628 0038D568  41 80 FE 68 */	blt .L_80390490
/* 8039062C 0038D56C  7F E3 FB 78 */	mr r3, r31
/* 80390630 0038D570  48 00 23 25 */	bl getIndexMax__Q28Morimura16TChallengeSelectFv
/* 80390634 0038D574  90 7F 01 30 */	stw r3, 0x130(r31)
/* 80390638 0038D578  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 8039063C 0038D57C  2C 03 00 00 */	cmpwi r3, 0
/* 80390640 0038D580  40 81 00 0C */	ble .L_8039064C
/* 80390644 0038D584  38 03 FF FF */	addi r0, r3, -1
/* 80390648 0038D588  90 1F 01 30 */	stw r0, 0x130(r31)
.L_8039064C:
/* 8039064C 0038D58C  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 80390650 0038D590  7F E3 FB 78 */	mr r3, r31
/* 80390654 0038D594  48 00 1B 85 */	bl setInfo__Q28Morimura16TChallengeSelectFi
/* 80390658 0038D598  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 8039065C 0038D59C  7F E3 FB 78 */	mr r3, r31
/* 80390660 0038D5A0  48 00 1F 71 */	bl setStageName__Q28Morimura16TChallengeSelectFi
/* 80390664 0038D5A4  3A C0 00 00 */	li r22, 0
/* 80390668 0038D5A8  3A A0 00 00 */	li r21, 0
/* 8039066C 0038D5AC  3B 00 00 01 */	li r24, 1
/* 80390670 0038D5B0  48 00 00 38 */	b .L_803906A8
.L_80390674:
/* 80390674 0038D5B4  7F E3 FB 78 */	mr r3, r31
/* 80390678 0038D5B8  7E C4 B3 78 */	mr r4, r22
/* 8039067C 0038D5BC  48 00 21 F5 */	bl isChangeState__Q28Morimura16TChallengeSelectFi
/* 80390680 0038D5C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80390684 0038D5C4  41 82 00 1C */	beq .L_803906A0
/* 80390688 0038D5C8  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 8039068C 0038D5CC  7C 63 A8 2E */	lwzx r3, r3, r21
/* 80390690 0038D5D0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80390694 0038D5D4  2C 00 00 03 */	cmpwi r0, 3
/* 80390698 0038D5D8  40 80 00 08 */	bge .L_803906A0
/* 8039069C 0038D5DC  9B 03 00 24 */	stb r24, 0x24(r3)
.L_803906A0:
/* 803906A0 0038D5E0  3A B5 00 04 */	addi r21, r21, 4
/* 803906A4 0038D5E4  3A D6 00 01 */	addi r22, r22, 1
.L_803906A8:
/* 803906A8 0038D5E8  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 803906AC 0038D5EC  7C 16 00 00 */	cmpw r22, r0
/* 803906B0 0038D5F0  40 81 FF C4 */	ble .L_80390674
/* 803906B4 0038D5F4  3C 60 80 50 */	lis r3, mPadStatus__10JUTGamePad@ha
/* 803906B8 0038D5F8  38 00 00 01 */	li r0, 1
/* 803906BC 0038D5FC  38 63 70 08 */	addi r3, r3, mPadStatus__10JUTGamePad@l
/* 803906C0 0038D600  98 0D 85 C8 */	stb r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803906C4 0038D604  88 03 00 16 */	lbz r0, 0x16(r3)
/* 803906C8 0038D608  7C 04 07 74 */	extsb r4, r0
/* 803906CC 0038D60C  20 64 FF FF */	subfic r3, r4, -1
/* 803906D0 0038D610  38 04 00 01 */	addi r0, r4, 1
/* 803906D4 0038D614  7C 60 03 78 */	or r0, r3, r0
/* 803906D8 0038D618  54 00 0F FE */	srwi r0, r0, 0x1f
/* 803906DC 0038D61C  98 0D 85 D8 */	stb r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803906E0 0038D620  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 803906E4 0038D624  80 03 00 18 */	lwz r0, 0x18(r3)
/* 803906E8 0038D628  2C 00 00 01 */	cmpwi r0, 1
/* 803906EC 0038D62C  40 82 00 0C */	bne .L_803906F8
/* 803906F0 0038D630  38 00 00 00 */	li r0, 0
/* 803906F4 0038D634  98 0D 85 C8 */	stb r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
.L_803906F8:
/* 803906F8 0038D638  88 0D 85 D8 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803906FC 0038D63C  28 00 00 00 */	cmplwi r0, 0
/* 80390700 0038D640  40 82 00 0C */	bne .L_8039070C
/* 80390704 0038D644  38 00 00 01 */	li r0, 1
/* 80390708 0038D648  98 0D 85 C8 */	stb r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
.L_8039070C:
/* 8039070C 0038D64C  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80390710 0038D650  38 9E 06 C4 */	addi r4, r30, 0x6c4
/* 80390714 0038D654  81 83 00 00 */	lwz r12, 0(r3)
/* 80390718 0038D658  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039071C 0038D65C  7D 89 03 A6 */	mtctr r12
/* 80390720 0038D660  4E 80 04 21 */	bctrl 
/* 80390724 0038D664  7C 76 1B 79 */	or. r22, r3, r3
/* 80390728 0038D668  82 BF 00 84 */	lwz r21, 0x84(r31)
/* 8039072C 0038D66C  40 82 00 18 */	bne .L_80390744
/* 80390730 0038D670  38 7E 00 14 */	addi r3, r30, 0x14
/* 80390734 0038D674  38 BE 00 2C */	addi r5, r30, 0x2c
/* 80390738 0038D678  38 80 04 B7 */	li r4, 0x4b7
/* 8039073C 0038D67C  4C C6 31 82 */	crclr 6
/* 80390740 0038D680  4B C9 9F 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80390744:
/* 80390744 0038D684  38 60 01 68 */	li r3, 0x168
/* 80390748 0038D688  4B C9 37 5D */	bl __nw__FUl
/* 8039074C 0038D68C  7C 60 1B 79 */	or. r0, r3, r3
/* 80390750 0038D690  41 82 00 10 */	beq .L_80390760
/* 80390754 0038D694  7E C4 B3 78 */	mr r4, r22
/* 80390758 0038D698  4B CA 9B 21 */	bl __ct__10J2DPictureFPC7ResTIMG
/* 8039075C 0038D69C  7C 60 1B 78 */	mr r0, r3
.L_80390760:
/* 80390760 0038D6A0  90 15 00 20 */	stw r0, 0x20(r21)
/* 80390764 0038D6A4  7F 83 E3 78 */	mr r3, r28
/* 80390768 0038D6A8  4B C9 2E 3D */	bl becomeCurrentHeap__7JKRHeapFv
/* 8039076C 0038D6AC  BA A1 07 74 */	lmw r21, 0x774(r1)
/* 80390770 0038D6B0  80 01 07 A4 */	lwz r0, 0x7a4(r1)
/* 80390774 0038D6B4  7C 08 03 A6 */	mtlr r0
/* 80390778 0038D6B8  38 21 07 A0 */	addi r1, r1, 0x7a0
/* 8039077C 0038D6BC  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura16TChallengeSelectFP10JKRArchive
.endif

.if version == 0
.fn doUpdate__Q28Morimura16TChallengeSelectFv, global
/* 803907D0 0038D710  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 803907D4 0038D714  7C 08 02 A6 */	mflr r0
/* 803907D8 0038D718  90 01 01 04 */	stw r0, 0x104(r1)
/* 803907DC 0038D71C  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 803907E0 0038D720  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 803907E4 0038D724  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 803907E8 0038D728  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 803907EC 0038D72C  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 803907F0 0038D730  F3 A1 00 D8 */	psq_st f29, 216(r1), 0, qr0
/* 803907F4 0038D734  DB 81 00 C0 */	stfd f28, 0xc0(r1)
/* 803907F8 0038D738  F3 81 00 C8 */	psq_st f28, 200(r1), 0, qr0
/* 803907FC 0038D73C  DB 61 00 B0 */	stfd f27, 0xb0(r1)
/* 80390800 0038D740  F3 61 00 B8 */	psq_st f27, 184(r1), 0, qr0
/* 80390804 0038D744  BF 21 00 94 */	stmw r25, 0x94(r1)
/* 80390808 0038D748  80 83 00 84 */	lwz r4, 0x84(r3)
/* 8039080C 0038D74C  7C 7F 1B 78 */	mr r31, r3
/* 80390810 0038D750  80 04 00 80 */	lwz r0, 0x80(r4)
/* 80390814 0038D754  20 00 00 02 */	subfic r0, r0, 2
/* 80390818 0038D758  7C 00 00 34 */	cntlzw r0, r0
/* 8039081C 0038D75C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80390820 0038D760  41 82 00 58 */	beq .L_80390878
/* 80390824 0038D764  3C 60 80 50 */	lis r3, mPadStatus__10JUTGamePad@ha
/* 80390828 0038D768  38 63 6F 48 */	addi r3, r3, mPadStatus__10JUTGamePad@l
/* 8039082C 0038D76C  88 03 00 16 */	lbz r0, 0x16(r3)
/* 80390830 0038D770  7C 00 07 74 */	extsb r0, r0
/* 80390834 0038D774  2C 00 FF FF */	cmpwi r0, -1
/* 80390838 0038D778  41 82 00 18 */	beq .L_80390850
/* 8039083C 0038D77C  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 80390840 0038D780  38 63 41 3C */	addi r3, r3, gGameConfig__4Game@l
/* 80390844 0038D784  80 03 02 38 */	lwz r0, 0x238(r3)
/* 80390848 0038D788  2C 00 00 00 */	cmpwi r0, 0
/* 8039084C 0038D78C  41 82 00 10 */	beq .L_8039085C
.L_80390850:
/* 80390850 0038D790  38 00 00 00 */	li r0, 0
/* 80390854 0038D794  98 0D 85 D0 */	stb r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390858 0038D798  48 00 00 20 */	b .L_80390878
.L_8039085C:
/* 8039085C 0038D79C  88 0D 85 D0 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390860 0038D7A0  28 00 00 00 */	cmplwi r0, 0
/* 80390864 0038D7A4  40 82 00 0C */	bne .L_80390870
/* 80390868 0038D7A8  38 00 00 00 */	li r0, 0
/* 8039086C 0038D7AC  98 04 00 84 */	stb r0, 0x84(r4)
.L_80390870:
/* 80390870 0038D7B0  38 00 00 01 */	li r0, 1
/* 80390874 0038D7B4  98 0D 85 D0 */	stb r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390878:
/* 80390878 0038D7B8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8039087C 0038D7BC  3B A0 00 00 */	li r29, 0
/* 80390880 0038D7C0  3B 80 00 00 */	li r28, 0
/* 80390884 0038D7C4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80390888 0038D7C8  2C 00 00 00 */	cmpwi r0, 0
/* 8039088C 0038D7CC  40 82 00 08 */	bne .L_80390894
/* 80390890 0038D7D0  3B 80 00 01 */	li r28, 1
.L_80390894:
/* 80390894 0038D7D4  88 1F 00 45 */	lbz r0, 0x45(r31)
/* 80390898 0038D7D8  83 7F 01 40 */	lwz r27, 0x140(r31)
/* 8039089C 0038D7DC  28 00 00 00 */	cmplwi r0, 0
/* 803908A0 0038D7E0  83 5F 00 FC */	lwz r26, 0xfc(r31)
/* 803908A4 0038D7E4  41 82 09 38 */	beq .L_803911DC
/* 803908A8 0038D7E8  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 803908AC 0038D7EC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803908B0 0038D7F0  2C 00 00 00 */	cmpwi r0, 0
/* 803908B4 0038D7F4  40 82 09 28 */	bne .L_803911DC
/* 803908B8 0038D7F8  7F E3 FB 78 */	mr r3, r31
/* 803908BC 0038D7FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803908C0 0038D800  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803908C4 0038D804  7D 89 03 A6 */	mtctr r12
/* 803908C8 0038D808  4E 80 04 21 */	bctrl 
/* 803908CC 0038D80C  80 63 02 24 */	lwz r3, 0x224(r3)
/* 803908D0 0038D810  88 03 00 D4 */	lbz r0, 0xd4(r3)
/* 803908D4 0038D814  28 00 00 00 */	cmplwi r0, 0
/* 803908D8 0038D818  40 82 09 04 */	bne .L_803911DC
/* 803908DC 0038D81C  80 BF 00 8C */	lwz r5, 0x8c(r31)
/* 803908E0 0038D820  80 85 00 1C */	lwz r4, 0x1c(r5)
/* 803908E4 0038D824  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 803908E8 0038D828  41 82 00 64 */	beq .L_8039094C
/* 803908EC 0038D82C  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803908F0 0038D830  80 03 00 80 */	lwz r0, 0x80(r3)
/* 803908F4 0038D834  2C 00 00 00 */	cmpwi r0, 0
/* 803908F8 0038D838  40 82 00 54 */	bne .L_8039094C
/* 803908FC 0038D83C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80390900 0038D840  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390904 0038D844  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 80390908 0038D848  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039090C 0038D84C  4C 40 13 82 */	cror 2, 0, 2
/* 80390910 0038D850  40 82 00 20 */	bne .L_80390930
/* 80390914 0038D854  7F E3 FB 78 */	mr r3, r31
/* 80390918 0038D858  48 00 22 6D */	bl openWindow__Q28Morimura16TChallengeSelectFv
/* 8039091C 0038D85C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390920 0038D860  38 80 18 11 */	li r4, 0x1811
/* 80390924 0038D864  38 A0 00 00 */	li r5, 0
/* 80390928 0038D868  4B FA 7D 3D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039092C 0038D86C  48 00 08 B0 */	b .L_803911DC
.L_80390930:
/* 80390930 0038D870  7F E3 FB 78 */	mr r3, r31
/* 80390934 0038D874  48 00 22 75 */	bl closeWindow__Q28Morimura16TChallengeSelectFv
/* 80390938 0038D878  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039093C 0038D87C  38 80 18 11 */	li r4, 0x1811
/* 80390940 0038D880  38 A0 00 00 */	li r5, 0
/* 80390944 0038D884  4B FA 7D 21 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390948 0038D888  48 00 08 94 */	b .L_803911DC
.L_8039094C:
/* 8039094C 0038D88C  70 80 11 00 */	andi. r0, r4, 0x1100
/* 80390950 0038D890  41 82 02 D8 */	beq .L_80390C28
/* 80390954 0038D894  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80390958 0038D898  41 82 02 D0 */	beq .L_80390C28
/* 8039095C 0038D89C  83 DF 00 84 */	lwz r30, 0x84(r31)
/* 80390960 0038D8A0  80 7E 00 80 */	lwz r3, 0x80(r30)
/* 80390964 0038D8A4  7C 03 00 D0 */	neg r0, r3
/* 80390968 0038D8A8  7C 00 1B 78 */	or r0, r0, r3
/* 8039096C 0038D8AC  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 80390970 0038D8B0  41 82 01 80 */	beq .L_80390AF0
/* 80390974 0038D8B4  2C 03 00 02 */	cmpwi r3, 2
/* 80390978 0038D8B8  40 82 08 64 */	bne .L_803911DC
/* 8039097C 0038D8BC  88 6D 85 C0 */	lbz r3, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390980 0038D8C0  28 03 00 00 */	cmplwi r3, 0
/* 80390984 0038D8C4  40 82 00 18 */	bne .L_8039099C
/* 80390988 0038D8C8  88 0D 85 D0 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039098C 0038D8CC  28 00 00 00 */	cmplwi r0, 0
/* 80390990 0038D8D0  41 82 01 44 */	beq .L_80390AD4
/* 80390994 0038D8D4  28 03 00 00 */	cmplwi r3, 0
/* 80390998 0038D8D8  40 82 01 3C */	bne .L_80390AD4
.L_8039099C:
/* 8039099C 0038D8DC  38 00 00 03 */	li r0, 3
/* 803909A0 0038D8E0  90 1E 00 80 */	stw r0, 0x80(r30)
/* 803909A4 0038D8E4  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 803909A8 0038D8E8  2C 00 00 02 */	cmpwi r0, 2
/* 803909AC 0038D8EC  41 82 00 BC */	beq .L_80390A68
/* 803909B0 0038D8F0  40 80 00 10 */	bge .L_803909C0
/* 803909B4 0038D8F4  2C 00 00 01 */	cmpwi r0, 1
/* 803909B8 0038D8F8  40 80 00 14 */	bge .L_803909CC
/* 803909BC 0038D8FC  48 00 00 AC */	b .L_80390A68
.L_803909C0:
/* 803909C0 0038D900  2C 00 00 04 */	cmpwi r0, 4
/* 803909C4 0038D904  40 80 00 A4 */	bge .L_80390A68
/* 803909C8 0038D908  48 00 00 50 */	b .L_80390A18
.L_803909CC:
/* 803909CC 0038D90C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 803909D0 0038D910  3B 20 00 00 */	li r25, 0
/* 803909D4 0038D914  C3 82 0C 34 */	lfs f28, lbl_8051EF94@sda21(r2)
/* 803909D8 0038D918  3F 80 43 30 */	lis r28, 0x4330
/* 803909DC 0038D91C  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 803909E0 0038D920  CB 62 0C 50 */	lfd f27, lbl_8051EFB0@sda21(r2)
.L_803909E4:
/* 803909E4 0038D924  6F 20 80 00 */	xoris r0, r25, 0x8000
/* 803909E8 0038D928  93 81 00 80 */	stw r28, 0x80(r1)
/* 803909EC 0038D92C  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 803909F0 0038D930  90 01 00 84 */	stw r0, 0x84(r1)
/* 803909F4 0038D934  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 803909F8 0038D938  EC 00 D8 28 */	fsubs f0, f0, f27
/* 803909FC 0038D93C  EC 3C E0 3A */	fmadds f1, f28, f0, f28
/* 80390A00 0038D940  4B F7 8A 35 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 80390A04 0038D944  3B 39 00 01 */	addi r25, r25, 1
/* 80390A08 0038D948  3B DE 00 04 */	addi r30, r30, 4
/* 80390A0C 0038D94C  2C 19 00 04 */	cmpwi r25, 4
/* 80390A10 0038D950  41 80 FF D4 */	blt .L_803909E4
/* 80390A14 0038D954  48 00 00 54 */	b .L_80390A68
.L_80390A18:
/* 80390A18 0038D958  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390A1C 0038D95C  7F D9 F3 78 */	mr r25, r30
/* 80390A20 0038D960  3B 80 00 00 */	li r28, 0
/* 80390A24 0038D964  D0 1E 00 8C */	stfs f0, 0x8c(r30)
.L_80390A28:
/* 80390A28 0038D968  80 79 00 44 */	lwz r3, 0x44(r25)
/* 80390A2C 0038D96C  4B F7 8A 45 */	bl close__Q32og6Screen15AnimText_ScreenFv
/* 80390A30 0038D970  3B 9C 00 01 */	addi r28, r28, 1
/* 80390A34 0038D974  3B 39 00 04 */	addi r25, r25, 4
/* 80390A38 0038D978  2C 1C 00 04 */	cmpwi r28, 4
/* 80390A3C 0038D97C  41 80 FF EC */	blt .L_80390A28
/* 80390A40 0038D980  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 80390A44 0038D984  81 83 00 00 */	lwz r12, 0(r3)
/* 80390A48 0038D988  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80390A4C 0038D98C  7D 89 03 A6 */	mtctr r12
/* 80390A50 0038D990  4E 80 04 21 */	bctrl 
/* 80390A54 0038D994  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80390A58 0038D998  81 83 00 00 */	lwz r12, 0(r3)
/* 80390A5C 0038D99C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80390A60 0038D9A0  7D 89 03 A6 */	mtctr r12
/* 80390A64 0038D9A4  4E 80 04 21 */	bctrl 
.L_80390A68:
/* 80390A68 0038D9A8  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80390A6C 0038D9AC  28 00 00 00 */	cmplwi r0, 0
/* 80390A70 0038D9B0  40 82 00 20 */	bne .L_80390A90
/* 80390A74 0038D9B4  38 00 00 01 */	li r0, 1
/* 80390A78 0038D9B8  7F E3 FB 78 */	mr r3, r31
/* 80390A7C 0038D9BC  98 1F 01 34 */	stb r0, 0x134(r31)
/* 80390A80 0038D9C0  48 00 22 8D */	bl demoStart__Q28Morimura16TChallengeSelectFv
/* 80390A84 0038D9C4  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80390A88 0038D9C8  38 00 00 01 */	li r0, 1
/* 80390A8C 0038D9CC  90 03 00 1C */	stw r0, 0x1c(r3)
.L_80390A90:
/* 80390A90 0038D9D0  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 80390A94 0038D9D4  38 00 00 00 */	li r0, 0
/* 80390A98 0038D9D8  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80390A9C 0038D9DC  90 83 00 10 */	stw r4, 0x10(r3)
/* 80390AA0 0038D9E0  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80390AA4 0038D9E4  90 03 00 18 */	stw r0, 0x18(r3)
/* 80390AA8 0038D9E8  88 0D 85 C0 */	lbz r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390AAC 0038D9EC  28 00 00 00 */	cmplwi r0, 0
/* 80390AB0 0038D9F0  40 82 00 10 */	bne .L_80390AC0
/* 80390AB4 0038D9F4  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80390AB8 0038D9F8  38 00 00 01 */	li r0, 1
/* 80390ABC 0038D9FC  90 03 00 18 */	stw r0, 0x18(r3)
.L_80390AC0:
/* 80390AC0 0038DA00  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390AC4 0038DA04  38 80 18 00 */	li r4, 0x1800
/* 80390AC8 0038DA08  38 A0 00 00 */	li r5, 0
/* 80390ACC 0038DA0C  4B FA 7B 99 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390AD0 0038DA10  48 00 07 0C */	b .L_803911DC
.L_80390AD4:
/* 80390AD4 0038DA14  38 00 00 01 */	li r0, 1
/* 80390AD8 0038DA18  38 80 18 07 */	li r4, 0x1807
/* 80390ADC 0038DA1C  98 1E 00 84 */	stb r0, 0x84(r30)
/* 80390AE0 0038DA20  38 A0 00 00 */	li r5, 0
/* 80390AE4 0038DA24  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390AE8 0038DA28  4B FA 7B 7D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390AEC 0038DA2C  48 00 06 F0 */	b .L_803911DC
.L_80390AF0:
/* 80390AF0 0038DA30  88 0D 85 C0 */	lbz r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390AF4 0038DA34  28 00 00 00 */	cmplwi r0, 0
/* 80390AF8 0038DA38  41 82 00 28 */	beq .L_80390B20
/* 80390AFC 0038DA3C  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80390B00 0038DA40  C0 2D 85 CC */	lfs f1, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390B04 0038DA44  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80390B08 0038DA48  4B F7 89 B1 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80390B0C 0038DA4C  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 80390B10 0038DA50  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80390B14 0038DA54  FC 40 08 90 */	fmr f2, f1
/* 80390B18 0038DA58  4B F7 89 A1 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80390B1C 0038DA5C  48 00 00 24 */	b .L_80390B40
.L_80390B20:
/* 80390B20 0038DA60  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 80390B24 0038DA64  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80390B28 0038DA68  FC 40 08 90 */	fmr f2, f1
/* 80390B2C 0038DA6C  4B F7 89 8D */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80390B30 0038DA70  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80390B34 0038DA74  C0 2D 85 CC */	lfs f1, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390B38 0038DA78  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80390B3C 0038DA7C  4B F7 89 7D */	bl blink__Q32og6Screen15AnimText_ScreenFff
.L_80390B40:
/* 80390B40 0038DA80  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80390B44 0038DA84  3B 20 00 00 */	li r25, 0
/* 80390B48 0038DA88  38 00 00 01 */	li r0, 1
/* 80390B4C 0038DA8C  9B 23 00 84 */	stb r25, 0x84(r3)
/* 80390B50 0038DA90  83 DF 00 84 */	lwz r30, 0x84(r31)
/* 80390B54 0038DA94  90 1E 00 80 */	stw r0, 0x80(r30)
/* 80390B58 0038DA98  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 80390B5C 0038DA9C  2C 00 00 02 */	cmpwi r0, 2
/* 80390B60 0038DAA0  41 82 00 B4 */	beq .L_80390C14
/* 80390B64 0038DAA4  40 80 00 10 */	bge .L_80390B74
/* 80390B68 0038DAA8  2C 00 00 01 */	cmpwi r0, 1
/* 80390B6C 0038DAAC  40 80 00 14 */	bge .L_80390B80
/* 80390B70 0038DAB0  48 00 00 A4 */	b .L_80390C14
.L_80390B74:
/* 80390B74 0038DAB4  2C 00 00 04 */	cmpwi r0, 4
/* 80390B78 0038DAB8  40 80 00 9C */	bge .L_80390C14
/* 80390B7C 0038DABC  48 00 00 4C */	b .L_80390BC8
.L_80390B80:
/* 80390B80 0038DAC0  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390B84 0038DAC4  3F 80 43 30 */	lis r28, 0x4330
/* 80390B88 0038DAC8  C3 82 0C 34 */	lfs f28, lbl_8051EF94@sda21(r2)
/* 80390B8C 0038DACC  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 80390B90 0038DAD0  CB 62 0C 50 */	lfd f27, lbl_8051EFB0@sda21(r2)
.L_80390B94:
/* 80390B94 0038DAD4  6F 20 80 00 */	xoris r0, r25, 0x8000
/* 80390B98 0038DAD8  93 81 00 80 */	stw r28, 0x80(r1)
/* 80390B9C 0038DADC  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 80390BA0 0038DAE0  90 01 00 84 */	stw r0, 0x84(r1)
/* 80390BA4 0038DAE4  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80390BA8 0038DAE8  EC 00 D8 28 */	fsubs f0, f0, f27
/* 80390BAC 0038DAEC  EC 3C E0 3A */	fmadds f1, f28, f0, f28
/* 80390BB0 0038DAF0  4B F7 88 85 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 80390BB4 0038DAF4  3B 39 00 01 */	addi r25, r25, 1
/* 80390BB8 0038DAF8  3B DE 00 04 */	addi r30, r30, 4
/* 80390BBC 0038DAFC  2C 19 00 04 */	cmpwi r25, 4
/* 80390BC0 0038DB00  41 80 FF D4 */	blt .L_80390B94
/* 80390BC4 0038DB04  48 00 00 50 */	b .L_80390C14
.L_80390BC8:
/* 80390BC8 0038DB08  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390BCC 0038DB0C  7F DC F3 78 */	mr r28, r30
/* 80390BD0 0038DB10  D0 1E 00 8C */	stfs f0, 0x8c(r30)
.L_80390BD4:
/* 80390BD4 0038DB14  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 80390BD8 0038DB18  4B F7 88 99 */	bl close__Q32og6Screen15AnimText_ScreenFv
/* 80390BDC 0038DB1C  3B 39 00 01 */	addi r25, r25, 1
/* 80390BE0 0038DB20  3B 9C 00 04 */	addi r28, r28, 4
/* 80390BE4 0038DB24  2C 19 00 04 */	cmpwi r25, 4
/* 80390BE8 0038DB28  41 80 FF EC */	blt .L_80390BD4
/* 80390BEC 0038DB2C  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 80390BF0 0038DB30  81 83 00 00 */	lwz r12, 0(r3)
/* 80390BF4 0038DB34  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80390BF8 0038DB38  7D 89 03 A6 */	mtctr r12
/* 80390BFC 0038DB3C  4E 80 04 21 */	bctrl 
/* 80390C00 0038DB40  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80390C04 0038DB44  81 83 00 00 */	lwz r12, 0(r3)
/* 80390C08 0038DB48  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80390C0C 0038DB4C  7D 89 03 A6 */	mtctr r12
/* 80390C10 0038DB50  4E 80 04 21 */	bctrl 
.L_80390C14:
/* 80390C14 0038DB54  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390C18 0038DB58  38 80 18 11 */	li r4, 0x1811
/* 80390C1C 0038DB5C  38 A0 00 00 */	li r5, 0
/* 80390C20 0038DB60  4B FA 7A 45 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390C24 0038DB64  48 00 05 B8 */	b .L_803911DC
.L_80390C28:
/* 80390C28 0038DB68  54 80 05 AD */	rlwinm. r0, r4, 0, 0x16, 0x16
/* 80390C2C 0038DB6C  41 82 01 60 */	beq .L_80390D8C
/* 80390C30 0038DB70  83 DF 00 84 */	lwz r30, 0x84(r31)
/* 80390C34 0038DB74  80 7E 00 80 */	lwz r3, 0x80(r30)
/* 80390C38 0038DB78  7C 03 00 D0 */	neg r0, r3
/* 80390C3C 0038DB7C  7C 00 1B 78 */	or r0, r0, r3
/* 80390C40 0038DB80  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 80390C44 0038DB84  41 82 00 EC */	beq .L_80390D30
/* 80390C48 0038DB88  2C 03 00 02 */	cmpwi r3, 2
/* 80390C4C 0038DB8C  40 82 05 90 */	bne .L_803911DC
/* 80390C50 0038DB90  38 00 00 03 */	li r0, 3
/* 80390C54 0038DB94  90 1E 00 80 */	stw r0, 0x80(r30)
/* 80390C58 0038DB98  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 80390C5C 0038DB9C  2C 00 00 02 */	cmpwi r0, 2
/* 80390C60 0038DBA0  41 82 00 BC */	beq .L_80390D1C
/* 80390C64 0038DBA4  40 80 00 10 */	bge .L_80390C74
/* 80390C68 0038DBA8  2C 00 00 01 */	cmpwi r0, 1
/* 80390C6C 0038DBAC  40 80 00 14 */	bge .L_80390C80
/* 80390C70 0038DBB0  48 00 00 AC */	b .L_80390D1C
.L_80390C74:
/* 80390C74 0038DBB4  2C 00 00 04 */	cmpwi r0, 4
/* 80390C78 0038DBB8  40 80 00 A4 */	bge .L_80390D1C
/* 80390C7C 0038DBBC  48 00 00 50 */	b .L_80390CCC
.L_80390C80:
/* 80390C80 0038DBC0  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390C84 0038DBC4  3B 20 00 00 */	li r25, 0
/* 80390C88 0038DBC8  C3 82 0C 34 */	lfs f28, lbl_8051EF94@sda21(r2)
/* 80390C8C 0038DBCC  3F 80 43 30 */	lis r28, 0x4330
/* 80390C90 0038DBD0  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 80390C94 0038DBD4  CB 62 0C 50 */	lfd f27, lbl_8051EFB0@sda21(r2)
.L_80390C98:
/* 80390C98 0038DBD8  6F 20 80 00 */	xoris r0, r25, 0x8000
/* 80390C9C 0038DBDC  93 81 00 80 */	stw r28, 0x80(r1)
/* 80390CA0 0038DBE0  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 80390CA4 0038DBE4  90 01 00 84 */	stw r0, 0x84(r1)
/* 80390CA8 0038DBE8  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80390CAC 0038DBEC  EC 00 D8 28 */	fsubs f0, f0, f27
/* 80390CB0 0038DBF0  EC 3C E0 3A */	fmadds f1, f28, f0, f28
/* 80390CB4 0038DBF4  4B F7 87 81 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 80390CB8 0038DBF8  3B 39 00 01 */	addi r25, r25, 1
/* 80390CBC 0038DBFC  3B DE 00 04 */	addi r30, r30, 4
/* 80390CC0 0038DC00  2C 19 00 04 */	cmpwi r25, 4
/* 80390CC4 0038DC04  41 80 FF D4 */	blt .L_80390C98
/* 80390CC8 0038DC08  48 00 00 54 */	b .L_80390D1C
.L_80390CCC:
/* 80390CCC 0038DC0C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390CD0 0038DC10  7F DC F3 78 */	mr r28, r30
/* 80390CD4 0038DC14  3B 20 00 00 */	li r25, 0
/* 80390CD8 0038DC18  D0 1E 00 8C */	stfs f0, 0x8c(r30)
.L_80390CDC:
/* 80390CDC 0038DC1C  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 80390CE0 0038DC20  4B F7 87 91 */	bl close__Q32og6Screen15AnimText_ScreenFv
/* 80390CE4 0038DC24  3B 39 00 01 */	addi r25, r25, 1
/* 80390CE8 0038DC28  3B 9C 00 04 */	addi r28, r28, 4
/* 80390CEC 0038DC2C  2C 19 00 04 */	cmpwi r25, 4
/* 80390CF0 0038DC30  41 80 FF EC */	blt .L_80390CDC
/* 80390CF4 0038DC34  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 80390CF8 0038DC38  81 83 00 00 */	lwz r12, 0(r3)
/* 80390CFC 0038DC3C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80390D00 0038DC40  7D 89 03 A6 */	mtctr r12
/* 80390D04 0038DC44  4E 80 04 21 */	bctrl 
/* 80390D08 0038DC48  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80390D0C 0038DC4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80390D10 0038DC50  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80390D14 0038DC54  7D 89 03 A6 */	mtctr r12
/* 80390D18 0038DC58  4E 80 04 21 */	bctrl 
.L_80390D1C:
/* 80390D1C 0038DC5C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390D20 0038DC60  38 80 18 11 */	li r4, 0x1811
/* 80390D24 0038DC64  38 A0 00 00 */	li r5, 0
/* 80390D28 0038DC68  4B FA 79 3D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390D2C 0038DC6C  48 00 04 B0 */	b .L_803911DC
.L_80390D30:
/* 80390D30 0038DC70  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80390D34 0038DC74  40 82 00 20 */	bne .L_80390D54
/* 80390D38 0038DC78  7F E3 FB 78 */	mr r3, r31
/* 80390D3C 0038DC7C  48 00 1E 6D */	bl closeWindow__Q28Morimura16TChallengeSelectFv
/* 80390D40 0038DC80  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390D44 0038DC84  38 80 18 11 */	li r4, 0x1811
/* 80390D48 0038DC88  38 A0 00 00 */	li r5, 0
/* 80390D4C 0038DC8C  4B FA 79 19 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390D50 0038DC90  48 00 04 8C */	b .L_803911DC
.L_80390D54:
/* 80390D54 0038DC94  38 00 00 00 */	li r0, 0
/* 80390D58 0038DC98  7F E3 FB 78 */	mr r3, r31
/* 80390D5C 0038DC9C  98 1F 01 28 */	stb r0, 0x128(r31)
/* 80390D60 0038DCA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80390D64 0038DCA4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80390D68 0038DCA8  7D 89 03 A6 */	mtctr r12
/* 80390D6C 0038DCAC  4E 80 04 21 */	bctrl 
/* 80390D70 0038DCB0  80 63 02 24 */	lwz r3, 0x224(r3)
/* 80390D74 0038DCB4  38 80 00 00 */	li r4, 0
/* 80390D78 0038DCB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80390D7C 0038DCBC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80390D80 0038DCC0  7D 89 03 A6 */	mtctr r12
/* 80390D84 0038DCC4  4E 80 04 21 */	bctrl 
/* 80390D88 0038DCC8  48 00 04 54 */	b .L_803911DC
.L_80390D8C:
/* 80390D8C 0038DCCC  83 DF 00 84 */	lwz r30, 0x84(r31)
/* 80390D90 0038DCD0  80 7E 00 80 */	lwz r3, 0x80(r30)
/* 80390D94 0038DCD4  7C 03 00 D0 */	neg r0, r3
/* 80390D98 0038DCD8  7C 00 1B 78 */	or r0, r0, r3
/* 80390D9C 0038DCDC  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 80390DA0 0038DCE0  40 82 02 78 */	bne .L_80391018
/* 80390DA4 0038DCE4  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80390DA8 0038DCE8  41 82 04 34 */	beq .L_803911DC
/* 80390DAC 0038DCEC  80 65 00 18 */	lwz r3, 0x18(r5)
/* 80390DB0 0038DCF0  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 80390DB4 0038DCF4  40 82 00 0C */	bne .L_80390DC0
/* 80390DB8 0038DCF8  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80390DBC 0038DCFC  41 82 00 8C */	beq .L_80390E48
.L_80390DC0:
/* 80390DC0 0038DD00  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 80390DC4 0038DD04  2C 00 00 00 */	cmpwi r0, 0
/* 80390DC8 0038DD08  40 82 00 70 */	bne .L_80390E38
/* 80390DCC 0038DD0C  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80390DD0 0038DD10  2C 00 00 00 */	cmpwi r0, 0
/* 80390DD4 0038DD14  40 80 00 0C */	bge .L_80390DE0
/* 80390DD8 0038DD18  38 00 00 01 */	li r0, 1
/* 80390DDC 0038DD1C  90 1F 01 40 */	stw r0, 0x140(r31)
.L_80390DE0:
/* 80390DE0 0038DD20  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 80390DE4 0038DD24  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 80390DE8 0038DD28  38 03 66 67 */	addi r0, r3, 0x66666667@l
/* 80390DEC 0038DD2C  80 8D 99 7C */	lwz r4, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390DF0 0038DD30  7C 00 28 96 */	mulhw r0, r0, r5
/* 80390DF4 0038DD34  7C 00 0E 70 */	srawi r0, r0, 1
/* 80390DF8 0038DD38  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80390DFC 0038DD3C  7C 00 1A 14 */	add r0, r0, r3
/* 80390E00 0038DD40  7C 04 00 00 */	cmpw r4, r0
/* 80390E04 0038DD44  40 80 00 28 */	bge .L_80390E2C
/* 80390E08 0038DD48  38 64 00 01 */	addi r3, r4, 1
/* 80390E0C 0038DD4C  80 8D 99 78 */	lwz r4, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390E10 0038DD50  1C 03 00 05 */	mulli r0, r3, 5
/* 80390E14 0038DD54  7C 04 02 14 */	add r0, r4, r0
/* 80390E18 0038DD58  7C 00 28 00 */	cmpw r0, r5
/* 80390E1C 0038DD5C  41 81 00 10 */	bgt .L_80390E2C
/* 80390E20 0038DD60  90 6D 99 7C */	stw r3, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390E24 0038DD64  3B A0 00 01 */	li r29, 1
/* 80390E28 0038DD68  48 00 00 10 */	b .L_80390E38
.L_80390E2C:
/* 80390E2C 0038DD6C  38 00 00 00 */	li r0, 0
/* 80390E30 0038DD70  3B A0 00 01 */	li r29, 1
/* 80390E34 0038DD74  90 0D 99 7C */	stw r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390E38:
/* 80390E38 0038DD78  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80390E3C 0038DD7C  38 03 00 01 */	addi r0, r3, 1
/* 80390E40 0038DD80  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80390E44 0038DD84  48 00 03 98 */	b .L_803911DC
.L_80390E48:
/* 80390E48 0038DD88  54 60 01 09 */	rlwinm. r0, r3, 0, 4, 4
/* 80390E4C 0038DD8C  40 82 00 0C */	bne .L_80390E58
/* 80390E50 0038DD90  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80390E54 0038DD94  41 82 00 94 */	beq .L_80390EE8
.L_80390E58:
/* 80390E58 0038DD98  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 80390E5C 0038DD9C  2C 00 00 00 */	cmpwi r0, 0
/* 80390E60 0038DDA0  40 82 00 78 */	bne .L_80390ED8
/* 80390E64 0038DDA4  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80390E68 0038DDA8  2C 00 00 00 */	cmpwi r0, 0
/* 80390E6C 0038DDAC  40 80 00 0C */	bge .L_80390E78
/* 80390E70 0038DDB0  38 00 00 00 */	li r0, 0
/* 80390E74 0038DDB4  90 1F 01 40 */	stw r0, 0x140(r31)
.L_80390E78:
/* 80390E78 0038DDB8  80 6D 99 7C */	lwz r3, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390E7C 0038DDBC  2C 03 00 00 */	cmpwi r3, 0
/* 80390E80 0038DDC0  40 81 00 14 */	ble .L_80390E94
/* 80390E84 0038DDC4  38 03 FF FF */	addi r0, r3, -1
/* 80390E88 0038DDC8  3B A0 00 01 */	li r29, 1
/* 80390E8C 0038DDCC  90 0D 99 7C */	stw r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390E90 0038DDD0  48 00 00 48 */	b .L_80390ED8
.L_80390E94:
/* 80390E94 0038DDD4  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 80390E98 0038DDD8  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 80390E9C 0038DDDC  38 63 66 67 */	addi r3, r3, 0x66666667@l
/* 80390EA0 0038DDE0  80 8D 99 78 */	lwz r4, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390EA4 0038DDE4  7C 03 00 96 */	mulhw r0, r3, r0
/* 80390EA8 0038DDE8  3B A0 00 01 */	li r29, 1
/* 80390EAC 0038DDEC  7C 00 0E 70 */	srawi r0, r0, 1
/* 80390EB0 0038DDF0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80390EB4 0038DDF4  7C A0 1A 14 */	add r5, r0, r3
/* 80390EB8 0038DDF8  90 AD 99 7C */	stw r5, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390EBC 0038DDFC  1C 65 00 05 */	mulli r3, r5, 5
/* 80390EC0 0038DE00  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 80390EC4 0038DE04  7C 64 1A 14 */	add r3, r4, r3
/* 80390EC8 0038DE08  7C 03 00 00 */	cmpw r3, r0
/* 80390ECC 0038DE0C  40 81 00 0C */	ble .L_80390ED8
/* 80390ED0 0038DE10  38 05 FF FF */	addi r0, r5, -1
/* 80390ED4 0038DE14  90 0D 99 7C */	stw r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390ED8:
/* 80390ED8 0038DE18  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80390EDC 0038DE1C  38 03 00 01 */	addi r0, r3, 1
/* 80390EE0 0038DE20  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80390EE4 0038DE24  48 00 02 F8 */	b .L_803911DC
.L_80390EE8:
/* 80390EE8 0038DE28  54 60 01 8D */	rlwinm. r0, r3, 0, 6, 6
/* 80390EEC 0038DE2C  40 82 00 0C */	bne .L_80390EF8
/* 80390EF0 0038DE30  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80390EF4 0038DE34  41 82 00 74 */	beq .L_80390F68
.L_80390EF8:
/* 80390EF8 0038DE38  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 80390EFC 0038DE3C  2C 00 00 00 */	cmpwi r0, 0
/* 80390F00 0038DE40  40 82 00 58 */	bne .L_80390F58
/* 80390F04 0038DE44  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80390F08 0038DE48  2C 00 00 00 */	cmpwi r0, 0
/* 80390F0C 0038DE4C  40 80 00 0C */	bge .L_80390F18
/* 80390F10 0038DE50  38 00 00 03 */	li r0, 3
/* 80390F14 0038DE54  90 1F 01 40 */	stw r0, 0x140(r31)
.L_80390F18:
/* 80390F18 0038DE58  80 8D 99 78 */	lwz r4, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390F1C 0038DE5C  2C 04 00 04 */	cmpwi r4, 4
/* 80390F20 0038DE60  40 80 00 2C */	bge .L_80390F4C
/* 80390F24 0038DE64  80 6D 99 7C */	lwz r3, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390F28 0038DE68  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 80390F2C 0038DE6C  1C 63 00 05 */	mulli r3, r3, 5
/* 80390F30 0038DE70  7C 64 1A 14 */	add r3, r4, r3
/* 80390F34 0038DE74  7C 03 00 00 */	cmpw r3, r0
/* 80390F38 0038DE78  40 80 00 14 */	bge .L_80390F4C
/* 80390F3C 0038DE7C  38 04 00 01 */	addi r0, r4, 1
/* 80390F40 0038DE80  3B A0 00 01 */	li r29, 1
/* 80390F44 0038DE84  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390F48 0038DE88  48 00 00 10 */	b .L_80390F58
.L_80390F4C:
/* 80390F4C 0038DE8C  38 00 00 00 */	li r0, 0
/* 80390F50 0038DE90  3B A0 00 01 */	li r29, 1
/* 80390F54 0038DE94  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390F58:
/* 80390F58 0038DE98  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80390F5C 0038DE9C  38 03 00 01 */	addi r0, r3, 1
/* 80390F60 0038DEA0  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80390F64 0038DEA4  48 00 02 78 */	b .L_803911DC
.L_80390F68:
/* 80390F68 0038DEA8  54 60 01 CF */	rlwinm. r0, r3, 0, 7, 7
/* 80390F6C 0038DEAC  40 82 00 0C */	bne .L_80390F78
/* 80390F70 0038DEB0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80390F74 0038DEB4  41 82 00 5C */	beq .L_80390FD0
.L_80390F78:
/* 80390F78 0038DEB8  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 80390F7C 0038DEBC  2C 00 00 00 */	cmpwi r0, 0
/* 80390F80 0038DEC0  40 82 00 40 */	bne .L_80390FC0
/* 80390F84 0038DEC4  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80390F88 0038DEC8  2C 00 00 00 */	cmpwi r0, 0
/* 80390F8C 0038DECC  40 80 00 0C */	bge .L_80390F98
/* 80390F90 0038DED0  38 00 00 02 */	li r0, 2
/* 80390F94 0038DED4  90 1F 01 40 */	stw r0, 0x140(r31)
.L_80390F98:
/* 80390F98 0038DED8  80 6D 99 78 */	lwz r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390F9C 0038DEDC  2C 03 00 00 */	cmpwi r3, 0
/* 80390FA0 0038DEE0  40 81 00 14 */	ble .L_80390FB4
/* 80390FA4 0038DEE4  38 03 FF FF */	addi r0, r3, -1
/* 80390FA8 0038DEE8  3B A0 00 01 */	li r29, 1
/* 80390FAC 0038DEEC  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390FB0 0038DEF0  48 00 00 10 */	b .L_80390FC0
.L_80390FB4:
/* 80390FB4 0038DEF4  38 00 00 04 */	li r0, 4
/* 80390FB8 0038DEF8  3B A0 00 01 */	li r29, 1
/* 80390FBC 0038DEFC  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390FC0:
/* 80390FC0 0038DF00  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80390FC4 0038DF04  38 03 00 01 */	addi r0, r3, 1
/* 80390FC8 0038DF08  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80390FCC 0038DF0C  48 00 02 10 */	b .L_803911DC
.L_80390FD0:
/* 80390FD0 0038DF10  38 00 00 00 */	li r0, 0
/* 80390FD4 0038DF14  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 80390FD8 0038DF18  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80390FDC 0038DF1C  C0 3F 01 4C */	lfs f1, 0x14c(r31)
/* 80390FE0 0038DF20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80390FE4 0038DF24  40 80 00 08 */	bge .L_80390FEC
/* 80390FE8 0038DF28  D0 1F 01 4C */	stfs f0, 0x14c(r31)
.L_80390FEC:
/* 80390FEC 0038DF2C  C0 5F 01 4C */	lfs f2, 0x14c(r31)
/* 80390FF0 0038DF30  C0 22 0C A8 */	lfs f1, lbl_8051F008@sda21(r2)
/* 80390FF4 0038DF34  C0 02 0C 6C */	lfs f0, lbl_8051EFCC@sda21(r2)
/* 80390FF8 0038DF38  EC 22 08 2A */	fadds f1, f2, f1
/* 80390FFC 0038DF3C  D0 3F 01 4C */	stfs f1, 0x14c(r31)
/* 80391000 0038DF40  C0 3F 01 4C */	lfs f1, 0x14c(r31)
/* 80391004 0038DF44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80391008 0038DF48  4C 41 13 82 */	cror 2, 1, 2
/* 8039100C 0038DF4C  40 82 01 D0 */	bne .L_803911DC
/* 80391010 0038DF50  D0 1F 01 4C */	stfs f0, 0x14c(r31)
/* 80391014 0038DF54  48 00 01 C8 */	b .L_803911DC
.L_80391018:
/* 80391018 0038DF58  80 65 00 18 */	lwz r3, 0x18(r5)
/* 8039101C 0038DF5C  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 80391020 0038DF60  40 82 00 0C */	bne .L_8039102C
/* 80391024 0038DF64  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80391028 0038DF68  41 82 00 D0 */	beq .L_803910F8
.L_8039102C:
/* 8039102C 0038DF6C  88 0D 85 C0 */	lbz r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391030 0038DF70  28 00 00 00 */	cmplwi r0, 0
/* 80391034 0038DF74  41 82 00 B8 */	beq .L_803910EC
/* 80391038 0038DF78  C3 6D 85 CC */	lfs f27, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039103C 0038DF7C  40 82 00 40 */	bne .L_8039107C
/* 80391040 0038DF80  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 80391044 0038DF84  C0 22 0C E4 */	lfs f1, lbl_8051F044@sda21(r2)
/* 80391048 0038DF88  C0 42 0C E8 */	lfs f2, lbl_8051F048@sda21(r2)
/* 8039104C 0038DF8C  C0 62 0C EC */	lfs f3, lbl_8051F04C@sda21(r2)
/* 80391050 0038DF90  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 80391054 0038DF94  4B F9 7E 65 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 80391058 0038DF98  FC 20 D8 90 */	fmr f1, f27
/* 8039105C 0038DF9C  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80391060 0038DFA0  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80391064 0038DFA4  4B F7 84 55 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391068 0038DFA8  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 8039106C 0038DFAC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80391070 0038DFB0  FC 40 08 90 */	fmr f2, f1
/* 80391074 0038DFB4  4B F7 84 45 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391078 0038DFB8  48 00 00 64 */	b .L_803910DC
.L_8039107C:
/* 8039107C 0038DFBC  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 80391080 0038DFC0  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80391084 0038DFC4  FC 40 08 90 */	fmr f2, f1
/* 80391088 0038DFC8  4B F7 84 31 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 8039108C 0038DFCC  FC 20 D8 90 */	fmr f1, f27
/* 80391090 0038DFD0  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80391094 0038DFD4  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80391098 0038DFD8  4B F7 84 21 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 8039109C 0038DFDC  88 0D 85 D0 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803910A0 0038DFE0  28 00 00 00 */	cmplwi r0, 0
/* 803910A4 0038DFE4  41 82 00 20 */	beq .L_803910C4
/* 803910A8 0038DFE8  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 803910AC 0038DFEC  C0 22 0C E4 */	lfs f1, lbl_8051F044@sda21(r2)
/* 803910B0 0038DFF0  C0 42 0C E8 */	lfs f2, lbl_8051F048@sda21(r2)
/* 803910B4 0038DFF4  C0 62 0C EC */	lfs f3, lbl_8051F04C@sda21(r2)
/* 803910B8 0038DFF8  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 803910BC 0038DFFC  4B F9 7D FD */	bl up__Q32og6Screen8ScaleMgrFffff
/* 803910C0 0038E000  48 00 00 1C */	b .L_803910DC
.L_803910C4:
/* 803910C4 0038E004  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 803910C8 0038E008  C0 22 0C F0 */	lfs f1, lbl_8051F050@sda21(r2)
/* 803910CC 0038E00C  C0 42 0C 44 */	lfs f2, lbl_8051EFA4@sda21(r2)
/* 803910D0 0038E010  C0 62 0C 84 */	lfs f3, lbl_8051EFE4@sda21(r2)
/* 803910D4 0038E014  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 803910D8 0038E018  4B F9 7D E1 */	bl up__Q32og6Screen8ScaleMgrFffff
.L_803910DC:
/* 803910DC 0038E01C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803910E0 0038E020  38 80 18 02 */	li r4, 0x1802
/* 803910E4 0038E024  38 A0 00 00 */	li r5, 0
/* 803910E8 0038E028  4B FA 75 7D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803910EC:
/* 803910EC 0038E02C  38 00 00 00 */	li r0, 0
/* 803910F0 0038E030  98 0D 85 C0 */	stb r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803910F4 0038E034  48 00 00 E8 */	b .L_803911DC
.L_803910F8:
/* 803910F8 0038E038  54 60 01 09 */	rlwinm. r0, r3, 0, 4, 4
/* 803910FC 0038E03C  40 82 00 0C */	bne .L_80391108
/* 80391100 0038E040  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80391104 0038E044  41 82 00 D8 */	beq .L_803911DC
.L_80391108:
/* 80391108 0038E048  88 0D 85 C0 */	lbz r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039110C 0038E04C  28 00 00 00 */	cmplwi r0, 0
/* 80391110 0038E050  40 82 00 B8 */	bne .L_803911C8
/* 80391114 0038E054  C3 6D 85 CC */	lfs f27, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391118 0038E058  40 82 00 40 */	bne .L_80391158
/* 8039111C 0038E05C  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 80391120 0038E060  C0 22 0C E4 */	lfs f1, lbl_8051F044@sda21(r2)
/* 80391124 0038E064  C0 42 0C E8 */	lfs f2, lbl_8051F048@sda21(r2)
/* 80391128 0038E068  C0 62 0C EC */	lfs f3, lbl_8051F04C@sda21(r2)
/* 8039112C 0038E06C  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 80391130 0038E070  4B F9 7D 89 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 80391134 0038E074  FC 20 D8 90 */	fmr f1, f27
/* 80391138 0038E078  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 8039113C 0038E07C  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80391140 0038E080  4B F7 83 79 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391144 0038E084  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 80391148 0038E088  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8039114C 0038E08C  FC 40 08 90 */	fmr f2, f1
/* 80391150 0038E090  4B F7 83 69 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391154 0038E094  48 00 00 64 */	b .L_803911B8
.L_80391158:
/* 80391158 0038E098  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 8039115C 0038E09C  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80391160 0038E0A0  FC 40 08 90 */	fmr f2, f1
/* 80391164 0038E0A4  4B F7 83 55 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391168 0038E0A8  FC 20 D8 90 */	fmr f1, f27
/* 8039116C 0038E0AC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80391170 0038E0B0  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80391174 0038E0B4  4B F7 83 45 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391178 0038E0B8  88 0D 85 D0 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039117C 0038E0BC  28 00 00 00 */	cmplwi r0, 0
/* 80391180 0038E0C0  41 82 00 20 */	beq .L_803911A0
/* 80391184 0038E0C4  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80391188 0038E0C8  C0 22 0C E4 */	lfs f1, lbl_8051F044@sda21(r2)
/* 8039118C 0038E0CC  C0 42 0C E8 */	lfs f2, lbl_8051F048@sda21(r2)
/* 80391190 0038E0D0  C0 62 0C EC */	lfs f3, lbl_8051F04C@sda21(r2)
/* 80391194 0038E0D4  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 80391198 0038E0D8  4B F9 7D 21 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 8039119C 0038E0DC  48 00 00 1C */	b .L_803911B8
.L_803911A0:
/* 803911A0 0038E0E0  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 803911A4 0038E0E4  C0 22 0C F0 */	lfs f1, lbl_8051F050@sda21(r2)
/* 803911A8 0038E0E8  C0 42 0C 44 */	lfs f2, lbl_8051EFA4@sda21(r2)
/* 803911AC 0038E0EC  C0 62 0C 84 */	lfs f3, lbl_8051EFE4@sda21(r2)
/* 803911B0 0038E0F0  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 803911B4 0038E0F4  4B F9 7D 05 */	bl up__Q32og6Screen8ScaleMgrFffff
.L_803911B8:
/* 803911B8 0038E0F8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803911BC 0038E0FC  38 80 18 02 */	li r4, 0x1802
/* 803911C0 0038E100  38 A0 00 00 */	li r5, 0
/* 803911C4 0038E104  4B FA 74 A1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803911C8:
/* 803911C8 0038E108  38 60 00 01 */	li r3, 1
/* 803911CC 0038E10C  38 00 00 00 */	li r0, 0
/* 803911D0 0038E110  98 6D 85 C0 */	stb r3, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803911D4 0038E114  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803911D8 0038E118  98 03 00 84 */	stb r0, 0x84(r3)
.L_803911DC:
/* 803911DC 0038E11C  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 803911E0 0038E120  80 63 00 20 */	lwz r3, 0x20(r3)
/* 803911E4 0038E124  80 03 00 08 */	lwz r0, 8(r3)
/* 803911E8 0038E128  2C 00 00 01 */	cmpwi r0, 1
/* 803911EC 0038E12C  40 82 00 40 */	bne .L_8039122C
/* 803911F0 0038E130  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803911F4 0038E134  28 00 00 00 */	cmplwi r0, 0
/* 803911F8 0038E138  40 82 00 34 */	bne .L_8039122C
/* 803911FC 0038E13C  38 60 00 00 */	li r3, 0
/* 80391200 0038E140  38 00 00 01 */	li r0, 1
/* 80391204 0038E144  98 7F 01 34 */	stb r3, 0x134(r31)
/* 80391208 0038E148  7F E3 FB 78 */	mr r3, r31
/* 8039120C 0038E14C  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 80391210 0038E150  90 04 00 1C */	stw r0, 0x1c(r4)
/* 80391214 0038E154  81 9F 00 00 */	lwz r12, 0(r31)
/* 80391218 0038E158  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8039121C 0038E15C  7D 89 03 A6 */	mtctr r12
/* 80391220 0038E160  4E 80 04 21 */	bctrl 
/* 80391224 0038E164  38 80 00 00 */	li r4, 0
/* 80391228 0038E168  48 0C 0C 19 */	bl endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
.L_8039122C:
/* 8039122C 0038E16C  80 0D 99 7C */	lwz r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391230 0038E170  80 6D 99 78 */	lwz r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391234 0038E174  1C 00 00 05 */	mulli r0, r0, 5
/* 80391238 0038E178  80 9F 01 30 */	lwz r4, 0x130(r31)
/* 8039123C 0038E17C  7C 03 02 14 */	add r0, r3, r0
/* 80391240 0038E180  7C 00 20 00 */	cmpw r0, r4
/* 80391244 0038E184  41 80 00 7C */	blt .L_803912C0
/* 80391248 0038E188  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 8039124C 0038E18C  38 A3 66 67 */	addi r5, r3, 0x66666667@l
/* 80391250 0038E190  7C 05 20 96 */	mulhw r0, r5, r4
/* 80391254 0038E194  7C 00 0E 70 */	srawi r0, r0, 1
/* 80391258 0038E198  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8039125C 0038E19C  7C 00 1A 14 */	add r0, r0, r3
/* 80391260 0038E1A0  90 0D 99 7C */	stw r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391264 0038E1A4  80 9F 01 30 */	lwz r4, 0x130(r31)
/* 80391268 0038E1A8  7C 05 20 96 */	mulhw r0, r5, r4
/* 8039126C 0038E1AC  7C 00 0E 70 */	srawi r0, r0, 1
/* 80391270 0038E1B0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80391274 0038E1B4  7C 00 1A 14 */	add r0, r0, r3
/* 80391278 0038E1B8  1C 00 00 05 */	mulli r0, r0, 5
/* 8039127C 0038E1BC  7C 00 20 50 */	subf r0, r0, r4
/* 80391280 0038E1C0  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391284 0038E1C4  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 80391288 0038E1C8  7C 00 18 00 */	cmpw r0, r3
/* 8039128C 0038E1CC  41 80 00 08 */	blt .L_80391294
/* 80391290 0038E1D0  90 6D 99 78 */	stw r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80391294:
/* 80391294 0038E1D4  80 0D 99 7C */	lwz r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391298 0038E1D8  80 6D 99 78 */	lwz r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039129C 0038E1DC  1C 00 00 05 */	mulli r0, r0, 5
/* 803912A0 0038E1E0  7C 03 02 14 */	add r0, r3, r0
/* 803912A4 0038E1E4  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 803912A8 0038E1E8  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 803912AC 0038E1EC  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 803912B0 0038E1F0  7C 03 00 00 */	cmpw r3, r0
/* 803912B4 0038E1F4  40 81 00 0C */	ble .L_803912C0
/* 803912B8 0038E1F8  38 00 00 00 */	li r0, 0
/* 803912BC 0038E1FC  90 1F 00 FC */	stw r0, 0xfc(r31)
.L_803912C0:
/* 803912C0 0038E200  2C 1B 00 00 */	cmpwi r27, 0
/* 803912C4 0038E204  41 80 00 20 */	blt .L_803912E4
/* 803912C8 0038E208  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 803912CC 0038E20C  7C 1B 00 00 */	cmpw r27, r0
/* 803912D0 0038E210  41 82 00 14 */	beq .L_803912E4
/* 803912D4 0038E214  38 00 00 00 */	li r0, 0
/* 803912D8 0038E218  C0 02 0C 6C */	lfs f0, lbl_8051EFCC@sda21(r2)
/* 803912DC 0038E21C  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 803912E0 0038E220  D0 1F 01 4C */	stfs f0, 0x14c(r31)
.L_803912E4:
/* 803912E4 0038E224  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 803912E8 0038E228  3C 00 43 30 */	lis r0, 0x4330
/* 803912EC 0038E22C  90 01 00 80 */	stw r0, 0x80(r1)
/* 803912F0 0038E230  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803912F4 0038E234  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 803912F8 0038E238  90 01 00 84 */	stw r0, 0x84(r1)
/* 803912FC 0038E23C  C0 22 0C 78 */	lfs f1, lbl_8051EFD8@sda21(r2)
/* 80391300 0038E240  C8 41 00 80 */	lfd f2, 0x80(r1)
/* 80391304 0038E244  C0 1F 01 4C */	lfs f0, 0x14c(r31)
/* 80391308 0038E248  EC 42 18 28 */	fsubs f2, f2, f3
/* 8039130C 0038E24C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80391310 0038E250  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80391314 0038E254  40 81 00 30 */	ble .L_80391344
/* 80391318 0038E258  38 00 00 00 */	li r0, 0
/* 8039131C 0038E25C  C0 22 0C 58 */	lfs f1, lbl_8051EFB8@sda21(r2)
/* 80391320 0038E260  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80391324 0038E264  C0 02 0C E4 */	lfs f0, lbl_8051F044@sda21(r2)
/* 80391328 0038E268  C0 5F 01 4C */	lfs f2, 0x14c(r31)
/* 8039132C 0038E26C  EC 22 00 72 */	fmuls f1, f2, f1
/* 80391330 0038E270  D0 3F 01 4C */	stfs f1, 0x14c(r31)
/* 80391334 0038E274  C0 3F 01 4C */	lfs f1, 0x14c(r31)
/* 80391338 0038E278  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039133C 0038E27C  40 80 00 08 */	bge .L_80391344
/* 80391340 0038E280  D0 1F 01 4C */	stfs f0, 0x14c(r31)
.L_80391344:
/* 80391344 0038E284  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80391348 0038E288  41 82 00 84 */	beq .L_803913CC
/* 8039134C 0038E28C  80 0D 99 7C */	lwz r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391350 0038E290  80 6D 99 78 */	lwz r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391354 0038E294  1C 00 00 05 */	mulli r0, r0, 5
/* 80391358 0038E298  7C 03 02 14 */	add r0, r3, r0
/* 8039135C 0038E29C  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 80391360 0038E2A0  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 80391364 0038E2A4  7C 1A 00 00 */	cmpw r26, r0
/* 80391368 0038E2A8  41 82 00 54 */	beq .L_803913BC
/* 8039136C 0038E2AC  38 00 00 01 */	li r0, 1
/* 80391370 0038E2B0  7F E3 FB 78 */	mr r3, r31
/* 80391374 0038E2B4  98 1F 01 36 */	stb r0, 0x136(r31)
/* 80391378 0038E2B8  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 8039137C 0038E2BC  48 00 0E C1 */	bl setInfo__Q28Morimura16TChallengeSelectFi
/* 80391380 0038E2C0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80391384 0038E2C4  38 80 18 02 */	li r4, 0x1802
/* 80391388 0038E2C8  38 A0 00 00 */	li r5, 0
/* 8039138C 0038E2CC  4B FA 72 D9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80391390 0038E2D0  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 80391394 0038E2D4  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80391398 0038E2D8  54 00 10 3A */	slwi r0, r0, 2
/* 8039139C 0038E2DC  C0 22 0C 84 */	lfs f1, lbl_8051EFE4@sda21(r2)
/* 803913A0 0038E2E0  7C 63 00 2E */	lwzx r3, r3, r0
/* 803913A4 0038E2E4  C0 42 0C 38 */	lfs f2, lbl_8051EF98@sda21(r2)
/* 803913A8 0038E2E8  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803913AC 0038E2EC  C0 62 0C B0 */	lfs f3, lbl_8051F010@sda21(r2)
/* 803913B0 0038E2F0  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 803913B4 0038E2F4  4B F9 7B 05 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 803913B8 0038E2F8  48 00 00 14 */	b .L_803913CC
.L_803913BC:
/* 803913BC 0038E2FC  38 00 00 00 */	li r0, 0
/* 803913C0 0038E300  C0 02 0C 6C */	lfs f0, lbl_8051EFCC@sda21(r2)
/* 803913C4 0038E304  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 803913C8 0038E308  D0 1F 01 4C */	stfs f0, 0x14c(r31)
.L_803913CC:
/* 803913CC 0038E30C  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 803913D0 0038E310  81 83 00 00 */	lwz r12, 0(r3)
/* 803913D4 0038E314  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803913D8 0038E318  7D 89 03 A6 */	mtctr r12
/* 803913DC 0038E31C  4E 80 04 21 */	bctrl 
/* 803913E0 0038E320  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803913E4 0038E324  81 83 00 00 */	lwz r12, 0(r3)
/* 803913E8 0038E328  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803913EC 0038E32C  7D 89 03 A6 */	mtctr r12
/* 803913F0 0038E330  4E 80 04 21 */	bctrl 
/* 803913F4 0038E334  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 803913F8 0038E338  81 83 00 00 */	lwz r12, 0(r3)
/* 803913FC 0038E33C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80391400 0038E340  7D 89 03 A6 */	mtctr r12
/* 80391404 0038E344  4E 80 04 21 */	bctrl 
/* 80391408 0038E348  83 3F 00 80 */	lwz r25, 0x80(r31)
/* 8039140C 0038E34C  80 19 00 10 */	lwz r0, 0x10(r25)
/* 80391410 0038E350  2C 00 00 01 */	cmpwi r0, 1
/* 80391414 0038E354  40 80 00 1C */	bge .L_80391430
/* 80391418 0038E358  3C 60 80 49 */	lis r3, lbl_80494694@ha
/* 8039141C 0038E35C  38 80 00 58 */	li r4, 0x58
/* 80391420 0038E360  38 63 45 34 */	addi r3, r3, lbl_80494694@l
/* 80391424 0038E364  38 A0 00 00 */	li r5, 0
/* 80391428 0038E368  4C C6 31 82 */	crclr 6
/* 8039142C 0038E36C  4B C9 92 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80391430:
/* 80391430 0038E370  80 79 00 04 */	lwz r3, 4(r25)
/* 80391434 0038E374  38 A1 00 08 */	addi r5, r1, 8
/* 80391438 0038E378  38 80 00 00 */	li r4, 0
/* 8039143C 0038E37C  80 63 00 04 */	lwz r3, 4(r3)
/* 80391440 0038E380  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80391444 0038E384  81 83 00 00 */	lwz r12, 0(r3)
/* 80391448 0038E388  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039144C 0038E38C  7D 89 03 A6 */	mtctr r12
/* 80391450 0038E390  4E 80 04 21 */	bctrl 
/* 80391454 0038E394  88 61 00 0B */	lbz r3, 0xb(r1)
/* 80391458 0038E398  98 6D 99 80 */	stb r3, mFrameAnimAlpha__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039145C 0038E39C  88 1F 01 35 */	lbz r0, 0x135(r31)
/* 80391460 0038E3A0  28 00 00 00 */	cmplwi r0, 0
/* 80391464 0038E3A4  41 82 00 14 */	beq .L_80391478
/* 80391468 0038E3A8  28 03 00 96 */	cmplwi r3, 0x96
/* 8039146C 0038E3AC  40 80 00 0C */	bge .L_80391478
/* 80391470 0038E3B0  38 00 00 96 */	li r0, 0x96
/* 80391474 0038E3B4  98 0D 99 80 */	stb r0, mFrameAnimAlpha__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80391478:
/* 80391478 0038E3B8  CB 82 0C A0 */	lfd f28, lbl_8051F000@sda21(r2)
/* 8039147C 0038E3BC  3B 40 00 00 */	li r26, 0
/* 80391480 0038E3C0  C3 62 0C 90 */	lfs f27, lbl_8051EFF0@sda21(r2)
/* 80391484 0038E3C4  3B C0 00 00 */	li r30, 0
/* 80391488 0038E3C8  3F 80 43 30 */	lis r28, 0x4330
.L_8039148C:
/* 8039148C 0038E3CC  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80391490 0038E3D0  7F A5 EB 78 */	mr r5, r29
/* 80391494 0038E3D4  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 80391498 0038E3D8  7F 63 F0 2E */	lwzx r27, r3, r30
/* 8039149C 0038E3DC  7F 63 DB 78 */	mr r3, r27
/* 803914A0 0038E3E0  4B FF B4 8D */	bl update__Q28Morimura15TChallengePanelFib
/* 803914A4 0038E3E4  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 803914A8 0038E3E8  7C 1A 00 00 */	cmpw r26, r0
/* 803914AC 0038E3EC  41 82 00 10 */	beq .L_803914BC
/* 803914B0 0038E3F0  88 1B 00 24 */	lbz r0, 0x24(r27)
/* 803914B4 0038E3F4  28 00 00 00 */	cmplwi r0, 0
/* 803914B8 0038E3F8  41 82 01 5C */	beq .L_80391614
.L_803914BC:
/* 803914BC 0038E3FC  C0 0D 85 E8 */	lfs f0, mSelectIconScale__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803914C0 0038E400  D0 1B 00 14 */	stfs f0, 0x14(r27)
/* 803914C4 0038E404  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 803914C8 0038E408  C0 2D 85 E8 */	lfs f1, mSelectIconScale__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803914CC 0038E40C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803914D0 0038E410  40 81 00 08 */	ble .L_803914D8
/* 803914D4 0038E414  D0 3B 00 14 */	stfs f1, 0x14(r27)
.L_803914D8:
/* 803914D8 0038E418  C0 3B 00 18 */	lfs f1, 0x18(r27)
/* 803914DC 0038E41C  C0 4D 85 C4 */	lfs f2, mAlphaSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803914E0 0038E420  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 803914E4 0038E424  EC 21 10 2A */	fadds f1, f1, f2
/* 803914E8 0038E428  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803914EC 0038E42C  40 80 00 0C */	bge .L_803914F8
/* 803914F0 0038E430  D0 3B 00 18 */	stfs f1, 0x18(r27)
/* 803914F4 0038E434  48 00 01 68 */	b .L_8039165C
.L_803914F8:
/* 803914F8 0038E438  88 1B 00 24 */	lbz r0, 0x24(r27)
/* 803914FC 0038E43C  28 00 00 00 */	cmplwi r0, 0
/* 80391500 0038E440  41 82 01 08 */	beq .L_80391608
/* 80391504 0038E444  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 80391508 0038E448  C0 22 0C 84 */	lfs f1, lbl_8051EFE4@sda21(r2)
/* 8039150C 0038E44C  C0 42 0C 38 */	lfs f2, lbl_8051EF98@sda21(r2)
/* 80391510 0038E450  C0 62 0C B0 */	lfs f3, lbl_8051F010@sda21(r2)
/* 80391514 0038E454  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 80391518 0038E458  4B F9 79 A1 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 8039151C 0038E45C  38 00 00 00 */	li r0, 0
/* 80391520 0038E460  98 1B 00 24 */	stb r0, 0x24(r27)
/* 80391524 0038E464  80 1B 00 1C */	lwz r0, 0x1c(r27)
/* 80391528 0038E468  2C 00 00 03 */	cmpwi r0, 3
/* 8039152C 0038E46C  40 80 00 DC */	bge .L_80391608
/* 80391530 0038E470  80 1B 00 20 */	lwz r0, 0x20(r27)
/* 80391534 0038E474  38 80 18 30 */	li r4, 0x1830
/* 80391538 0038E478  38 A0 00 00 */	li r5, 0
/* 8039153C 0038E47C  90 1B 00 1C */	stw r0, 0x1c(r27)
/* 80391540 0038E480  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80391544 0038E484  4B FA 71 21 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80391548 0038E488  80 7B 00 04 */	lwz r3, 4(r27)
/* 8039154C 0038E48C  3C 80 80 4E */	lis r4, mIconTexture__Q28Morimura16TChallengeSelect@ha
/* 80391550 0038E490  80 1B 00 1C */	lwz r0, 0x1c(r27)
/* 80391554 0038E494  38 84 4F 70 */	addi r4, r4, mIconTexture__Q28Morimura16TChallengeSelect@l
/* 80391558 0038E498  81 83 00 00 */	lwz r12, 0(r3)
/* 8039155C 0038E49C  38 A0 00 00 */	li r5, 0
/* 80391560 0038E4A0  54 00 10 3A */	slwi r0, r0, 2
/* 80391564 0038E4A4  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 80391568 0038E4A8  7C 84 00 2E */	lwzx r4, r4, r0
/* 8039156C 0038E4AC  7D 89 03 A6 */	mtctr r12
/* 80391570 0038E4B0  4E 80 04 21 */	bctrl 
/* 80391574 0038E4B4  80 FB 00 04 */	lwz r7, 4(r27)
/* 80391578 0038E4B8  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 8039157C 0038E4BC  3C C0 80 4C */	lis r6, __vt__Q25efx2d5TBase@ha
/* 80391580 0038E4C0  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple1@ha
/* 80391584 0038E4C4  C0 27 00 8C */	lfs f1, 0x8c(r7)
/* 80391588 0038E4C8  3C A0 80 4C */	lis r5, __vt__Q25efx2d3Arg@ha
/* 8039158C 0038E4CC  C0 07 00 9C */	lfs f0, 0x9c(r7)
/* 80391590 0038E4D0  38 E0 00 00 */	li r7, 0
/* 80391594 0038E4D4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80391598 0038E4D8  38 03 14 30 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 8039159C 0038E4DC  3C 60 80 4E */	lis r3, __vt__Q25efx2d14T2DChangesmoke@ha
/* 803915A0 0038E4E0  39 25 14 54 */	addi r9, r5, __vt__Q25efx2d3Arg@l
/* 803915A4 0038E4E4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803915A8 0038E4E8  38 A0 00 07 */	li r5, 7
/* 803915AC 0038E4EC  81 61 00 0C */	lwz r11, 0xc(r1)
/* 803915B0 0038E4F0  39 06 14 18 */	addi r8, r6, __vt__Q25efx2d5TBase@l
/* 803915B4 0038E4F4  90 01 00 48 */	stw r0, 0x48(r1)
/* 803915B8 0038E4F8  38 C4 73 C8 */	addi r6, r4, __vt__Q25efx2d8TSimple1@l
/* 803915BC 0038E4FC  81 41 00 10 */	lwz r10, 0x10(r1)
/* 803915C0 0038E500  38 03 3D 04 */	addi r0, r3, __vt__Q25efx2d14T2DChangesmoke@l
/* 803915C4 0038E504  91 61 00 14 */	stw r11, 0x14(r1)
/* 803915C8 0038E508  38 61 00 48 */	addi r3, r1, 0x48
/* 803915CC 0038E50C  38 81 00 3C */	addi r4, r1, 0x3c
/* 803915D0 0038E510  91 41 00 18 */	stw r10, 0x18(r1)
/* 803915D4 0038E514  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 803915D8 0038E518  91 01 00 48 */	stw r8, 0x48(r1)
/* 803915DC 0038E51C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803915E0 0038E520  90 C1 00 48 */	stw r6, 0x48(r1)
/* 803915E4 0038E524  91 21 00 44 */	stw r9, 0x44(r1)
/* 803915E8 0038E528  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 803915EC 0038E52C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 803915F0 0038E530  98 E1 00 4C */	stb r7, 0x4c(r1)
/* 803915F4 0038E534  98 E1 00 4D */	stb r7, 0x4d(r1)
/* 803915F8 0038E538  B0 A1 00 50 */	sth r5, 0x50(r1)
/* 803915FC 0038E53C  90 E1 00 54 */	stw r7, 0x54(r1)
/* 80391600 0038E540  90 01 00 48 */	stw r0, 0x48(r1)
/* 80391604 0038E544  48 02 82 91 */	bl create__Q25efx2d8TSimple1FPQ25efx2d3Arg
.L_80391608:
/* 80391608 0038E548  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 8039160C 0038E54C  D0 1B 00 18 */	stfs f0, 0x18(r27)
/* 80391610 0038E550  48 00 00 4C */	b .L_8039165C
.L_80391614:
/* 80391614 0038E554  C0 5B 00 14 */	lfs f2, 0x14(r27)
/* 80391618 0038E558  C0 22 0C 98 */	lfs f1, lbl_8051EFF8@sda21(r2)
/* 8039161C 0038E55C  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 80391620 0038E560  EC 22 00 72 */	fmuls f1, f2, f1
/* 80391624 0038E564  D0 3B 00 14 */	stfs f1, 0x14(r27)
/* 80391628 0038E568  C0 3B 00 14 */	lfs f1, 0x14(r27)
/* 8039162C 0038E56C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80391630 0038E570  40 80 00 08 */	bge .L_80391638
/* 80391634 0038E574  D0 1B 00 14 */	stfs f0, 0x14(r27)
.L_80391638:
/* 80391638 0038E578  C0 1B 00 18 */	lfs f0, 0x18(r27)
/* 8039163C 0038E57C  C0 2D 85 C4 */	lfs f1, mAlphaSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391640 0038E580  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80391644 0038E584  40 81 00 10 */	ble .L_80391654
/* 80391648 0038E588  EC 00 08 28 */	fsubs f0, f0, f1
/* 8039164C 0038E58C  D0 1B 00 18 */	stfs f0, 0x18(r27)
/* 80391650 0038E590  48 00 00 0C */	b .L_8039165C
.L_80391654:
/* 80391654 0038E594  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80391658 0038E598  D0 1B 00 18 */	stfs f0, 0x18(r27)
.L_8039165C:
/* 8039165C 0038E59C  88 0D 99 80 */	lbz r0, mFrameAnimAlpha__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391660 0038E5A0  C0 1B 00 18 */	lfs f0, 0x18(r27)
/* 80391664 0038E5A4  90 01 00 84 */	stw r0, 0x84(r1)
/* 80391668 0038E5A8  80 7B 00 08 */	lwz r3, 8(r27)
/* 8039166C 0038E5AC  EC 1B 00 32 */	fmuls f0, f27, f0
/* 80391670 0038E5B0  93 81 00 80 */	stw r28, 0x80(r1)
/* 80391674 0038E5B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80391678 0038E5B8  C8 21 00 80 */	lfd f1, 0x80(r1)
/* 8039167C 0038E5BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80391680 0038E5C0  EC 21 E0 28 */	fsubs f1, f1, f28
/* 80391684 0038E5C4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80391688 0038E5C8  FC 00 00 1E */	fctiwz f0, f0
/* 8039168C 0038E5CC  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 80391690 0038E5D0  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 80391694 0038E5D4  7D 89 03 A6 */	mtctr r12
/* 80391698 0038E5D8  4E 80 04 21 */	bctrl 
/* 8039169C 0038E5DC  3B 5A 00 01 */	addi r26, r26, 1
/* 803916A0 0038E5E0  3B DE 00 04 */	addi r30, r30, 4
/* 803916A4 0038E5E4  2C 1A 00 1E */	cmpwi r26, 0x1e
/* 803916A8 0038E5E8  41 80 FD E4 */	blt .L_8039148C
/* 803916AC 0038E5EC  3B 40 00 00 */	li r26, 0
/* 803916B0 0038E5F0  7F F9 FB 78 */	mr r25, r31
.L_803916B4:
/* 803916B4 0038E5F4  80 79 00 9C */	lwz r3, 0x9c(r25)
/* 803916B8 0038E5F8  4B FF AE 09 */	bl update__Q28Morimura14TChallengePikiFv
/* 803916BC 0038E5FC  3B 5A 00 01 */	addi r26, r26, 1
/* 803916C0 0038E600  3B 39 00 04 */	addi r25, r25, 4
/* 803916C4 0038E604  2C 1A 00 05 */	cmpwi r26, 5
/* 803916C8 0038E608  41 80 FF EC */	blt .L_803916B4
/* 803916CC 0038E60C  88 1F 01 36 */	lbz r0, 0x136(r31)
/* 803916D0 0038E610  28 00 00 00 */	cmplwi r0, 0
/* 803916D4 0038E614  41 82 00 94 */	beq .L_80391768
/* 803916D8 0038E618  C0 5F 01 3C */	lfs f2, 0x13c(r31)
/* 803916DC 0038E61C  C0 22 0C F8 */	lfs f1, lbl_8051F058@sda21(r2)
/* 803916E0 0038E620  C0 02 0C A8 */	lfs f0, lbl_8051F008@sda21(r2)
/* 803916E4 0038E624  EC 22 00 72 */	fmuls f1, f2, f1
/* 803916E8 0038E628  D0 3F 01 3C */	stfs f1, 0x13c(r31)
/* 803916EC 0038E62C  C0 3F 01 3C */	lfs f1, 0x13c(r31)
/* 803916F0 0038E630  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803916F4 0038E634  40 80 00 F8 */	bge .L_803917EC
/* 803916F8 0038E638  38 00 00 00 */	li r0, 0
/* 803916FC 0038E63C  7F E3 FB 78 */	mr r3, r31
/* 80391700 0038E640  98 1F 01 36 */	stb r0, 0x136(r31)
/* 80391704 0038E644  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 80391708 0038E648  48 00 0F 2D */	bl setStageName__Q28Morimura16TChallengeSelectFi
/* 8039170C 0038E64C  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80391710 0038E650  2C 00 00 02 */	cmpwi r0, 2
/* 80391714 0038E654  41 82 00 3C */	beq .L_80391750
/* 80391718 0038E658  40 80 00 14 */	bge .L_8039172C
/* 8039171C 0038E65C  2C 00 00 00 */	cmpwi r0, 0
/* 80391720 0038E660  41 82 00 18 */	beq .L_80391738
/* 80391724 0038E664  40 80 00 20 */	bge .L_80391744
/* 80391728 0038E668  48 00 00 C4 */	b .L_803917EC
.L_8039172C:
/* 8039172C 0038E66C  2C 00 00 04 */	cmpwi r0, 4
/* 80391730 0038E670  40 80 00 BC */	bge .L_803917EC
/* 80391734 0038E674  48 00 00 28 */	b .L_8039175C
.L_80391738:
/* 80391738 0038E678  38 00 00 01 */	li r0, 1
/* 8039173C 0038E67C  90 1F 01 40 */	stw r0, 0x140(r31)
/* 80391740 0038E680  48 00 00 AC */	b .L_803917EC
.L_80391744:
/* 80391744 0038E684  38 00 00 00 */	li r0, 0
/* 80391748 0038E688  90 1F 01 40 */	stw r0, 0x140(r31)
/* 8039174C 0038E68C  48 00 00 A0 */	b .L_803917EC
.L_80391750:
/* 80391750 0038E690  38 00 00 03 */	li r0, 3
/* 80391754 0038E694  90 1F 01 40 */	stw r0, 0x140(r31)
/* 80391758 0038E698  48 00 00 94 */	b .L_803917EC
.L_8039175C:
/* 8039175C 0038E69C  38 00 00 02 */	li r0, 2
/* 80391760 0038E6A0  90 1F 01 40 */	stw r0, 0x140(r31)
/* 80391764 0038E6A4  48 00 00 88 */	b .L_803917EC
.L_80391768:
/* 80391768 0038E6A8  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 8039176C 0038E6AC  3C 00 43 30 */	lis r0, 0x4330
/* 80391770 0038E6B0  90 01 00 88 */	stw r0, 0x88(r1)
/* 80391774 0038E6B4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80391778 0038E6B8  C8 22 0C 50 */	lfd f1, lbl_8051EFB0@sda21(r2)
/* 8039177C 0038E6BC  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80391780 0038E6C0  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80391784 0038E6C4  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 80391788 0038E6C8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8039178C 0038E6CC  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80391790 0038E6D0  40 82 00 5C */	bne .L_803917EC
/* 80391794 0038E6D4  C0 22 0C 6C */	lfs f1, lbl_8051EFCC@sda21(r2)
/* 80391798 0038E6D8  C0 1F 01 4C */	lfs f0, 0x14c(r31)
/* 8039179C 0038E6DC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 803917A0 0038E6E0  40 82 00 4C */	bne .L_803917EC
/* 803917A4 0038E6E4  C0 3F 01 3C */	lfs f1, 0x13c(r31)
/* 803917A8 0038E6E8  C0 02 0C E4 */	lfs f0, lbl_8051F044@sda21(r2)
/* 803917AC 0038E6EC  EC 01 00 2A */	fadds f0, f1, f0
/* 803917B0 0038E6F0  D0 1F 01 3C */	stfs f0, 0x13c(r31)
/* 803917B4 0038E6F4  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 803917B8 0038E6F8  2C 00 00 01 */	cmpwi r0, 1
/* 803917BC 0038E6FC  40 81 00 14 */	ble .L_803917D0
/* 803917C0 0038E700  C0 3F 01 3C */	lfs f1, 0x13c(r31)
/* 803917C4 0038E704  C0 02 0C F0 */	lfs f0, lbl_8051F050@sda21(r2)
/* 803917C8 0038E708  EC 01 00 2A */	fadds f0, f1, f0
/* 803917CC 0038E70C  D0 1F 01 3C */	stfs f0, 0x13c(r31)
.L_803917D0:
/* 803917D0 0038E710  C0 3F 01 3C */	lfs f1, 0x13c(r31)
/* 803917D4 0038E714  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 803917D8 0038E718  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803917DC 0038E71C  40 81 00 10 */	ble .L_803917EC
/* 803917E0 0038E720  D0 1F 01 3C */	stfs f0, 0x13c(r31)
/* 803917E4 0038E724  38 00 FF FF */	li r0, -1
/* 803917E8 0038E728  90 1F 01 40 */	stw r0, 0x140(r31)
.L_803917EC:
/* 803917EC 0038E72C  C3 E2 0C 94 */	lfs f31, lbl_8051EFF4@sda21(r2)
/* 803917F0 0038E730  7F FA FB 78 */	mr r26, r31
/* 803917F4 0038E734  C3 62 0C 28 */	lfs f27, lbl_8051EF88@sda21(r2)
/* 803917F8 0038E738  3B 60 00 00 */	li r27, 0
/* 803917FC 0038E73C  C3 82 0C 90 */	lfs f28, lbl_8051EFF0@sda21(r2)
/* 80391800 0038E740  C3 A2 0C 8C */	lfs f29, lbl_8051EFEC@sda21(r2)
/* 80391804 0038E744  C3 C2 0C 6C */	lfs f30, lbl_8051EFCC@sda21(r2)
.L_80391808:
/* 80391808 0038E748  83 3A 00 B0 */	lwz r25, 0xb0(r26)
/* 8039180C 0038E74C  C0 39 00 10 */	lfs f1, 0x10(r25)
/* 80391810 0038E750  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 80391814 0038E754  EC 21 00 28 */	fsubs f1, f1, f0
/* 80391818 0038E758  FC 00 0A 10 */	fabs f0, f1
/* 8039181C 0038E75C  FC 00 00 18 */	frsp f0, f0
/* 80391820 0038E760  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80391824 0038E764  40 81 00 0C */	ble .L_80391830
/* 80391828 0038E768  C0 02 0C 34 */	lfs f0, lbl_8051EF94@sda21(r2)
/* 8039182C 0038E76C  EC 21 00 32 */	fmuls f1, f1, f0
.L_80391830:
/* 80391830 0038E770  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 80391834 0038E774  EC 00 08 2A */	fadds f0, f0, f1
/* 80391838 0038E778  D0 19 00 14 */	stfs f0, 0x14(r25)
/* 8039183C 0038E77C  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 80391840 0038E780  FC 00 D8 40 */	fcmpo cr0, f0, f27
/* 80391844 0038E784  40 80 00 08 */	bge .L_8039184C
/* 80391848 0038E788  D3 79 00 14 */	stfs f27, 0x14(r25)
.L_8039184C:
/* 8039184C 0038E78C  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 80391850 0038E790  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80391854 0038E794  40 81 00 08 */	ble .L_8039185C
/* 80391858 0038E798  D3 99 00 14 */	stfs f28, 0x14(r25)
.L_8039185C:
/* 8039185C 0038E79C  80 79 00 00 */	lwz r3, 0(r25)
/* 80391860 0038E7A0  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 80391864 0038E7A4  D3 83 00 CC */	stfs f28, 0xcc(r3)
/* 80391868 0038E7A8  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 8039186C 0038E7AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80391870 0038E7B0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80391874 0038E7B4  7D 89 03 A6 */	mtctr r12
/* 80391878 0038E7B8  4E 80 04 21 */	bctrl 
/* 8039187C 0038E7BC  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 80391880 0038E7C0  38 00 00 00 */	li r0, 0
/* 80391884 0038E7C4  80 79 00 04 */	lwz r3, 4(r25)
/* 80391888 0038E7C8  EC 1D 00 32 */	fmuls f0, f29, f0
/* 8039188C 0038E7CC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80391890 0038E7D0  80 79 00 08 */	lwz r3, 8(r25)
/* 80391894 0038E7D4  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 80391898 0038E7D8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039189C 0038E7DC  80 79 00 0C */	lwz r3, 0xc(r25)
/* 803918A0 0038E7E0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803918A4 0038E7E4  4C 41 13 82 */	cror 2, 1, 2
/* 803918A8 0038E7E8  40 82 00 10 */	bne .L_803918B8
/* 803918AC 0038E7EC  80 79 00 04 */	lwz r3, 4(r25)
/* 803918B0 0038E7F0  38 00 00 01 */	li r0, 1
/* 803918B4 0038E7F4  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803918B8:
/* 803918B8 0038E7F8  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 803918BC 0038E7FC  4C 41 13 82 */	cror 2, 1, 2
/* 803918C0 0038E800  40 82 00 10 */	bne .L_803918D0
/* 803918C4 0038E804  80 79 00 08 */	lwz r3, 8(r25)
/* 803918C8 0038E808  38 00 00 01 */	li r0, 1
/* 803918CC 0038E80C  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803918D0:
/* 803918D0 0038E810  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 803918D4 0038E814  4C 41 13 82 */	cror 2, 1, 2
/* 803918D8 0038E818  40 82 00 10 */	bne .L_803918E8
/* 803918DC 0038E81C  80 79 00 0C */	lwz r3, 0xc(r25)
/* 803918E0 0038E820  38 00 00 01 */	li r0, 1
/* 803918E4 0038E824  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803918E8:
/* 803918E8 0038E828  80 7A 00 E0 */	lwz r3, 0xe0(r26)
/* 803918EC 0038E82C  38 80 00 FF */	li r4, 0xff
/* 803918F0 0038E830  81 83 00 00 */	lwz r12, 0(r3)
/* 803918F4 0038E834  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803918F8 0038E838  7D 89 03 A6 */	mtctr r12
/* 803918FC 0038E83C  4E 80 04 21 */	bctrl 
/* 80391900 0038E840  C0 A2 0C 28 */	lfs f5, lbl_8051EF88@sda21(r2)
/* 80391904 0038E844  C0 1F 01 3C */	lfs f0, 0x13c(r31)
/* 80391908 0038E848  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 8039190C 0038E84C  FC C0 28 90 */	fmr f6, f5
/* 80391910 0038E850  EC FC 00 28 */	fsubs f7, f28, f0
/* 80391914 0038E854  2C 00 00 02 */	cmpwi r0, 2
/* 80391918 0038E858  41 82 00 34 */	beq .L_8039194C
/* 8039191C 0038E85C  40 80 00 14 */	bge .L_80391930
/* 80391920 0038E860  2C 00 00 00 */	cmpwi r0, 0
/* 80391924 0038E864  41 82 00 18 */	beq .L_8039193C
/* 80391928 0038E868  40 80 00 1C */	bge .L_80391944
/* 8039192C 0038E86C  48 00 00 2C */	b .L_80391958
.L_80391930:
/* 80391930 0038E870  2C 00 00 04 */	cmpwi r0, 4
/* 80391934 0038E874  40 80 00 24 */	bge .L_80391958
/* 80391938 0038E878  48 00 00 1C */	b .L_80391954
.L_8039193C:
/* 8039193C 0038E87C  C0 C2 0C FC */	lfs f6, lbl_8051F05C@sda21(r2)
/* 80391940 0038E880  48 00 00 18 */	b .L_80391958
.L_80391944:
/* 80391944 0038E884  C0 C2 0D 00 */	lfs f6, lbl_8051F060@sda21(r2)
/* 80391948 0038E888  48 00 00 10 */	b .L_80391958
.L_8039194C:
/* 8039194C 0038E88C  C0 A2 0D 04 */	lfs f5, lbl_8051F064@sda21(r2)
/* 80391950 0038E890  48 00 00 08 */	b .L_80391958
.L_80391954:
/* 80391954 0038E894  C0 A2 0D 08 */	lfs f5, lbl_8051F068@sda21(r2)
.L_80391958:
/* 80391958 0038E898  80 7A 00 E0 */	lwz r3, 0xe0(r26)
/* 8039195C 0038E89C  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 80391960 0038E8A0  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 80391964 0038E8A4  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 80391968 0038E8A8  EC 01 00 28 */	fsubs f0, f1, f0
/* 8039196C 0038E8AC  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 80391970 0038E8B0  C0 23 00 D4 */	lfs f1, 0xd4(r3)
/* 80391974 0038E8B4  EC 63 10 28 */	fsubs f3, f3, f2
/* 80391978 0038E8B8  C0 83 00 D8 */	lfs f4, 0xd8(r3)
/* 8039197C 0038E8BC  EC 45 00 32 */	fmuls f2, f5, f0
/* 80391980 0038E8C0  EC 06 00 F2 */	fmuls f0, f6, f3
/* 80391984 0038E8C4  EC 27 08 BA */	fmadds f1, f7, f2, f1
/* 80391988 0038E8C8  EC 07 20 3A */	fmadds f0, f7, f0, f4
/* 8039198C 0038E8CC  D0 23 00 D4 */	stfs f1, 0xd4(r3)
/* 80391990 0038E8D0  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 80391994 0038E8D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80391998 0038E8D8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039199C 0038E8DC  7D 89 03 A6 */	mtctr r12
/* 803919A0 0038E8E0  4E 80 04 21 */	bctrl 
/* 803919A4 0038E8E4  3B 7B 00 01 */	addi r27, r27, 1
/* 803919A8 0038E8E8  3B 5A 00 04 */	addi r26, r26, 4
/* 803919AC 0038E8EC  2C 1B 00 02 */	cmpwi r27, 2
/* 803919B0 0038E8F0  41 80 FE 58 */	blt .L_80391808
/* 803919B4 0038E8F4  88 1F 01 35 */	lbz r0, 0x135(r31)
/* 803919B8 0038E8F8  28 00 00 00 */	cmplwi r0, 0
/* 803919BC 0038E8FC  41 82 00 4C */	beq .L_80391A08
/* 803919C0 0038E900  C0 1F 01 38 */	lfs f0, 0x138(r31)
/* 803919C4 0038E904  3C 00 43 30 */	lis r0, 0x4330
/* 803919C8 0038E908  C0 82 0D 0C */	lfs f4, lbl_8051F06C@sda21(r2)
/* 803919CC 0038E90C  90 01 00 88 */	stw r0, 0x88(r1)
/* 803919D0 0038E910  EC 00 20 2A */	fadds f0, f0, f4
/* 803919D4 0038E914  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 803919D8 0038E918  C0 22 0D 10 */	lfs f1, lbl_8051F070@sda21(r2)
/* 803919DC 0038E91C  D0 1F 01 38 */	stfs f0, 0x138(r31)
/* 803919E0 0038E920  80 0D 99 7C */	lwz r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803919E4 0038E924  C0 1F 01 38 */	lfs f0, 0x138(r31)
/* 803919E8 0038E928  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803919EC 0038E92C  90 01 00 8C */	stw r0, 0x8c(r1)
/* 803919F0 0038E930  C8 41 00 88 */	lfd f2, 0x88(r1)
/* 803919F4 0038E934  EC 42 18 28 */	fsubs f2, f2, f3
/* 803919F8 0038E938  EC 24 08 BC */	fnmsubs f1, f4, f2, f1
/* 803919FC 0038E93C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80391A00 0038E940  40 81 00 08 */	ble .L_80391A08
/* 80391A04 0038E944  D0 3F 01 38 */	stfs f1, 0x138(r31)
.L_80391A08:
/* 80391A08 0038E948  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 80391A0C 0038E94C  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80391A10 0038E950  54 00 10 3A */	slwi r0, r0, 2
/* 80391A14 0038E954  C0 1F 01 38 */	lfs f0, 0x138(r31)
/* 80391A18 0038E958  7C 63 00 2E */	lwzx r3, r3, r0
/* 80391A1C 0038E95C  80 63 00 08 */	lwz r3, 8(r3)
/* 80391A20 0038E960  D0 03 00 B8 */	stfs f0, 0xb8(r3)
/* 80391A24 0038E964  81 83 00 00 */	lwz r12, 0(r3)
/* 80391A28 0038E968  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80391A2C 0038E96C  7D 89 03 A6 */	mtctr r12
/* 80391A30 0038E970  4E 80 04 21 */	bctrl 
/* 80391A34 0038E974  88 1F 01 35 */	lbz r0, 0x135(r31)
/* 80391A38 0038E978  28 00 00 00 */	cmplwi r0, 0
/* 80391A3C 0038E97C  41 82 01 84 */	beq .L_80391BC0
/* 80391A40 0038E980  7F E4 FB 78 */	mr r4, r31
/* 80391A44 0038E984  38 A0 00 01 */	li r5, 1
/* 80391A48 0038E988  38 C0 00 00 */	li r6, 0
.L_80391A4C:
/* 80391A4C 0038E98C  80 64 00 9C */	lwz r3, 0x9c(r4)
/* 80391A50 0038E990  80 03 07 2C */	lwz r0, 0x72c(r3)
/* 80391A54 0038E994  2C 00 00 00 */	cmpwi r0, 0
/* 80391A58 0038E998  40 82 00 0C */	bne .L_80391A64
/* 80391A5C 0038E99C  38 00 00 01 */	li r0, 1
/* 80391A60 0038E9A0  48 00 00 3C */	b .L_80391A9C
.L_80391A64:
/* 80391A64 0038E9A4  2C 00 00 32 */	cmpwi r0, 0x32
/* 80391A68 0038E9A8  40 81 00 08 */	ble .L_80391A70
/* 80391A6C 0038E9AC  38 00 00 32 */	li r0, 0x32
.L_80391A70:
/* 80391A70 0038E9B0  7C 09 03 A6 */	mtctr r0
/* 80391A74 0038E9B4  2C 00 00 00 */	cmpwi r0, 0
/* 80391A78 0038E9B8  40 81 00 20 */	ble .L_80391A98
.L_80391A7C:
/* 80391A7C 0038E9BC  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80391A80 0038E9C0  2C 00 00 00 */	cmpwi r0, 0
/* 80391A84 0038E9C4  41 82 00 0C */	beq .L_80391A90
/* 80391A88 0038E9C8  38 00 00 00 */	li r0, 0
/* 80391A8C 0038E9CC  48 00 00 10 */	b .L_80391A9C
.L_80391A90:
/* 80391A90 0038E9D0  38 63 00 24 */	addi r3, r3, 0x24
/* 80391A94 0038E9D4  42 00 FF E8 */	bdnz .L_80391A7C
.L_80391A98:
/* 80391A98 0038E9D8  38 00 00 01 */	li r0, 1
.L_80391A9C:
/* 80391A9C 0038E9DC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80391AA0 0038E9E0  40 82 00 08 */	bne .L_80391AA8
/* 80391AA4 0038E9E4  38 A0 00 00 */	li r5, 0
.L_80391AA8:
/* 80391AA8 0038E9E8  38 C6 00 01 */	addi r6, r6, 1
/* 80391AAC 0038E9EC  38 84 00 04 */	addi r4, r4, 4
/* 80391AB0 0038E9F0  2C 06 00 05 */	cmpwi r6, 5
/* 80391AB4 0038E9F4  41 80 FF 98 */	blt .L_80391A4C
/* 80391AB8 0038E9F8  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 80391ABC 0038E9FC  41 82 01 04 */	beq .L_80391BC0
/* 80391AC0 0038EA00  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 80391AC4 0038EA04  81 83 00 00 */	lwz r12, 0(r3)
/* 80391AC8 0038EA08  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80391ACC 0038EA0C  7D 89 03 A6 */	mtctr r12
/* 80391AD0 0038EA10  4E 80 04 21 */	bctrl 
/* 80391AD4 0038EA14  80 0D 99 84 */	lwz r0, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391AD8 0038EA18  2C 00 00 00 */	cmpwi r0, 0
/* 80391ADC 0038EA1C  40 81 00 A8 */	ble .L_80391B84
/* 80391AE0 0038EA20  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 80391AE4 0038EA24  3C C0 80 4C */	lis r6, __vt__Q25efx2d7TBaseIF@ha
/* 80391AE8 0038EA28  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80391AEC 0038EA2C  3C A0 80 4C */	lis r5, __vt__Q25efx2d5TBase@ha
/* 80391AF0 0038EA30  54 00 10 3A */	slwi r0, r0, 2
/* 80391AF4 0038EA34  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple1@ha
/* 80391AF8 0038EA38  7D 03 00 2E */	lwzx r8, r3, r0
/* 80391AFC 0038EA3C  3C E0 80 4C */	lis r7, __vt__Q25efx2d3Arg@ha
/* 80391B00 0038EA40  3C 60 80 4E */	lis r3, __vt__Q25efx2d14T2DChalDiveEnd@ha
/* 80391B04 0038EA44  39 26 14 30 */	addi r9, r6, __vt__Q25efx2d7TBaseIF@l
/* 80391B08 0038EA48  81 68 00 08 */	lwz r11, 8(r8)
/* 80391B0C 0038EA4C  39 05 14 18 */	addi r8, r5, __vt__Q25efx2d5TBase@l
/* 80391B10 0038EA50  38 C4 73 C8 */	addi r6, r4, __vt__Q25efx2d8TSimple1@l
/* 80391B14 0038EA54  39 47 14 54 */	addi r10, r7, __vt__Q25efx2d3Arg@l
/* 80391B18 0038EA58  C0 2B 00 8C */	lfs f1, 0x8c(r11)
/* 80391B1C 0038EA5C  38 03 4F D0 */	addi r0, r3, __vt__Q25efx2d14T2DChalDiveEnd@l
/* 80391B20 0038EA60  C0 0B 00 9C */	lfs f0, 0x9c(r11)
/* 80391B24 0038EA64  38 E0 00 00 */	li r7, 0
/* 80391B28 0038EA68  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 80391B2C 0038EA6C  38 A0 00 06 */	li r5, 6
/* 80391B30 0038EA70  38 61 00 64 */	addi r3, r1, 0x64
/* 80391B34 0038EA74  38 81 00 74 */	addi r4, r1, 0x74
/* 80391B38 0038EA78  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80391B3C 0038EA7C  81 61 00 34 */	lwz r11, 0x34(r1)
/* 80391B40 0038EA80  91 21 00 64 */	stw r9, 0x64(r1)
/* 80391B44 0038EA84  81 21 00 38 */	lwz r9, 0x38(r1)
/* 80391B48 0038EA88  91 61 00 24 */	stw r11, 0x24(r1)
/* 80391B4C 0038EA8C  91 21 00 28 */	stw r9, 0x28(r1)
/* 80391B50 0038EA90  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80391B54 0038EA94  91 01 00 64 */	stw r8, 0x64(r1)
/* 80391B58 0038EA98  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80391B5C 0038EA9C  90 C1 00 64 */	stw r6, 0x64(r1)
/* 80391B60 0038EAA0  91 41 00 7C */	stw r10, 0x7c(r1)
/* 80391B64 0038EAA4  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 80391B68 0038EAA8  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80391B6C 0038EAAC  98 E1 00 68 */	stb r7, 0x68(r1)
/* 80391B70 0038EAB0  98 E1 00 69 */	stb r7, 0x69(r1)
/* 80391B74 0038EAB4  B0 A1 00 6C */	sth r5, 0x6c(r1)
/* 80391B78 0038EAB8  90 E1 00 70 */	stw r7, 0x70(r1)
/* 80391B7C 0038EABC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80391B80 0038EAC0  48 02 7D 15 */	bl create__Q25efx2d8TSimple1FPQ25efx2d3Arg
.L_80391B84:
/* 80391B84 0038EAC4  38 00 00 00 */	li r0, 0
/* 80391B88 0038EAC8  98 1F 01 35 */	stb r0, 0x135(r31)
/* 80391B8C 0038EACC  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80391B90 0038EAD0  28 00 00 00 */	cmplwi r0, 0
/* 80391B94 0038EAD4  41 82 00 10 */	beq .L_80391BA4
/* 80391B98 0038EAD8  7F E3 FB 78 */	mr r3, r31
/* 80391B9C 0038EADC  48 00 10 31 */	bl reset__Q28Morimura16TChallengeSelectFv
/* 80391BA0 0038EAE0  48 00 00 20 */	b .L_80391BC0
.L_80391BA4:
/* 80391BA4 0038EAE4  7F E3 FB 78 */	mr r3, r31
/* 80391BA8 0038EAE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80391BAC 0038EAEC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80391BB0 0038EAF0  7D 89 03 A6 */	mtctr r12
/* 80391BB4 0038EAF4  4E 80 04 21 */	bctrl 
/* 80391BB8 0038EAF8  38 80 00 00 */	li r4, 0
/* 80391BBC 0038EAFC  48 0C 02 85 */	bl endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
.L_80391BC0:
/* 80391BC0 0038EB00  80 0D 99 84 */	lwz r0, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391BC4 0038EB04  2C 00 00 00 */	cmpwi r0, 0
/* 80391BC8 0038EB08  41 82 00 80 */	beq .L_80391C48
/* 80391BCC 0038EB0C  88 1F 01 44 */	lbz r0, 0x144(r31)
/* 80391BD0 0038EB10  28 00 00 00 */	cmplwi r0, 0
/* 80391BD4 0038EB14  40 82 00 74 */	bne .L_80391C48
/* 80391BD8 0038EB18  38 00 00 01 */	li r0, 1
/* 80391BDC 0038EB1C  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 80391BE0 0038EB20  98 1F 01 44 */	stb r0, 0x144(r31)
/* 80391BE4 0038EB24  38 03 14 54 */	addi r0, r3, __vt__Q25efx2d3Arg@l
/* 80391BE8 0038EB28  38 81 00 58 */	addi r4, r1, 0x58
/* 80391BEC 0038EB2C  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 80391BF0 0038EB30  80 BF 00 94 */	lwz r5, 0x94(r31)
/* 80391BF4 0038EB34  54 63 10 3A */	slwi r3, r3, 2
/* 80391BF8 0038EB38  7C 65 18 2E */	lwzx r3, r5, r3
/* 80391BFC 0038EB3C  80 63 00 08 */	lwz r3, 8(r3)
/* 80391C00 0038EB40  C0 23 00 8C */	lfs f1, 0x8c(r3)
/* 80391C04 0038EB44  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 80391C08 0038EB48  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80391C0C 0038EB4C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80391C10 0038EB50  80 A1 00 2C */	lwz r5, 0x2c(r1)
/* 80391C14 0038EB54  80 61 00 30 */	lwz r3, 0x30(r1)
/* 80391C18 0038EB58  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 80391C1C 0038EB5C  90 61 00 20 */	stw r3, 0x20(r1)
/* 80391C20 0038EB60  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80391C24 0038EB64  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80391C28 0038EB68  90 01 00 60 */	stw r0, 0x60(r1)
/* 80391C2C 0038EB6C  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 80391C30 0038EB70  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80391C34 0038EB74  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 80391C38 0038EB78  81 83 00 00 */	lwz r12, 0(r3)
/* 80391C3C 0038EB7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80391C40 0038EB80  7D 89 03 A6 */	mtctr r12
/* 80391C44 0038EB84  4E 80 04 21 */	bctrl 
.L_80391C48:
/* 80391C48 0038EB88  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80391C4C 0038EB8C  28 00 00 00 */	cmplwi r0, 0
/* 80391C50 0038EB90  41 82 00 20 */	beq .L_80391C70
/* 80391C54 0038EB94  88 0D 99 82 */	lbz r0, mForceDemoStart__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391C58 0038EB98  28 00 00 00 */	cmplwi r0, 0
/* 80391C5C 0038EB9C  41 82 00 14 */	beq .L_80391C70
/* 80391C60 0038EBA0  38 00 00 00 */	li r0, 0
/* 80391C64 0038EBA4  7F E3 FB 78 */	mr r3, r31
/* 80391C68 0038EBA8  98 0D 99 82 */	stb r0, mForceDemoStart__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391C6C 0038EBAC  48 00 10 A1 */	bl demoStart__Q28Morimura16TChallengeSelectFv
.L_80391C70:
/* 80391C70 0038EBB0  38 60 00 00 */	li r3, 0
/* 80391C74 0038EBB4  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 80391C78 0038EBB8  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 80391C7C 0038EBBC  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 80391C80 0038EBC0  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 80391C84 0038EBC4  E3 A1 00 D8 */	psq_l f29, 216(r1), 0, qr0
/* 80391C88 0038EBC8  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 80391C8C 0038EBCC  E3 81 00 C8 */	psq_l f28, 200(r1), 0, qr0
/* 80391C90 0038EBD0  CB 81 00 C0 */	lfd f28, 0xc0(r1)
/* 80391C94 0038EBD4  E3 61 00 B8 */	psq_l f27, 184(r1), 0, qr0
/* 80391C98 0038EBD8  CB 61 00 B0 */	lfd f27, 0xb0(r1)
/* 80391C9C 0038EBDC  BB 21 00 94 */	lmw r25, 0x94(r1)
/* 80391CA0 0038EBE0  80 01 01 04 */	lwz r0, 0x104(r1)
/* 80391CA4 0038EBE4  7C 08 03 A6 */	mtlr r0
/* 80391CA8 0038EBE8  38 21 01 00 */	addi r1, r1, 0x100
/* 80391CAC 0038EBEC  4E 80 00 20 */	blr 
.endfn doUpdate__Q28Morimura16TChallengeSelectFv
.else
.fn doUpdate__Q28Morimura16TChallengeSelectFv, global
/* 80390780 0038D6C0  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 80390784 0038D6C4  7C 08 02 A6 */	mflr r0
/* 80390788 0038D6C8  90 01 01 04 */	stw r0, 0x104(r1)
/* 8039078C 0038D6CC  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 80390790 0038D6D0  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 80390794 0038D6D4  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 80390798 0038D6D8  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 8039079C 0038D6DC  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 803907A0 0038D6E0  F3 A1 00 D8 */	psq_st f29, 216(r1), 0, qr0
/* 803907A4 0038D6E4  DB 81 00 C0 */	stfd f28, 0xc0(r1)
/* 803907A8 0038D6E8  F3 81 00 C8 */	psq_st f28, 200(r1), 0, qr0
/* 803907AC 0038D6EC  DB 61 00 B0 */	stfd f27, 0xb0(r1)
/* 803907B0 0038D6F0  F3 61 00 B8 */	psq_st f27, 184(r1), 0, qr0
/* 803907B4 0038D6F4  BF 21 00 94 */	stmw r25, 0x94(r1)
/* 803907B8 0038D6F8  80 83 00 84 */	lwz r4, 0x84(r3)
/* 803907BC 0038D6FC  7C 7F 1B 78 */	mr r31, r3
/* 803907C0 0038D700  80 04 00 80 */	lwz r0, 0x80(r4)
/* 803907C4 0038D704  20 00 00 02 */	subfic r0, r0, 2
/* 803907C8 0038D708  7C 00 00 34 */	cntlzw r0, r0
/* 803907CC 0038D70C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803907D0 0038D710  41 82 00 44 */	beq .L_80390814
/* 803907D4 0038D714  3C 60 80 50 */	lis r3, mPadStatus__10JUTGamePad@ha
/* 803907D8 0038D718  38 63 70 08 */	addi r3, r3, mPadStatus__10JUTGamePad@l
/* 803907DC 0038D71C  88 03 00 16 */	lbz r0, 0x16(r3)
/* 803907E0 0038D720  7C 00 07 74 */	extsb r0, r0
/* 803907E4 0038D724  2C 00 FF FF */	cmpwi r0, -1
/* 803907E8 0038D728  40 82 00 10 */	bne .L_803907F8
/* 803907EC 0038D72C  38 00 00 00 */	li r0, 0
/* 803907F0 0038D730  98 0D 85 D8 */	stb r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803907F4 0038D734  48 00 00 20 */	b .L_80390814
.L_803907F8:
/* 803907F8 0038D738  88 0D 85 D8 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803907FC 0038D73C  28 00 00 00 */	cmplwi r0, 0
/* 80390800 0038D740  40 82 00 0C */	bne .L_8039080C
/* 80390804 0038D744  38 00 00 00 */	li r0, 0
/* 80390808 0038D748  98 04 00 84 */	stb r0, 0x84(r4)
.L_8039080C:
/* 8039080C 0038D74C  38 00 00 01 */	li r0, 1
/* 80390810 0038D750  98 0D 85 D8 */	stb r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390814:
/* 80390814 0038D754  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80390818 0038D758  3B A0 00 00 */	li r29, 0
/* 8039081C 0038D75C  3B 80 00 00 */	li r28, 0
/* 80390820 0038D760  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80390824 0038D764  2C 00 00 00 */	cmpwi r0, 0
/* 80390828 0038D768  40 82 00 08 */	bne .L_80390830
/* 8039082C 0038D76C  3B 80 00 01 */	li r28, 1
.L_80390830:
/* 80390830 0038D770  88 1F 00 45 */	lbz r0, 0x45(r31)
/* 80390834 0038D774  83 7F 01 40 */	lwz r27, 0x140(r31)
/* 80390838 0038D778  28 00 00 00 */	cmplwi r0, 0
/* 8039083C 0038D77C  83 5F 00 FC */	lwz r26, 0xfc(r31)
/* 80390840 0038D780  41 82 09 38 */	beq .L_80391178
/* 80390844 0038D784  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80390848 0038D788  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8039084C 0038D78C  2C 00 00 00 */	cmpwi r0, 0
/* 80390850 0038D790  40 82 09 28 */	bne .L_80391178
/* 80390854 0038D794  7F E3 FB 78 */	mr r3, r31
/* 80390858 0038D798  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039085C 0038D79C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80390860 0038D7A0  7D 89 03 A6 */	mtctr r12
/* 80390864 0038D7A4  4E 80 04 21 */	bctrl 
/* 80390868 0038D7A8  80 63 02 24 */	lwz r3, 0x224(r3)
/* 8039086C 0038D7AC  88 03 00 D4 */	lbz r0, 0xd4(r3)
/* 80390870 0038D7B0  28 00 00 00 */	cmplwi r0, 0
/* 80390874 0038D7B4  40 82 09 04 */	bne .L_80391178
/* 80390878 0038D7B8  80 BF 00 8C */	lwz r5, 0x8c(r31)
/* 8039087C 0038D7BC  80 85 00 1C */	lwz r4, 0x1c(r5)
/* 80390880 0038D7C0  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 80390884 0038D7C4  41 82 00 64 */	beq .L_803908E8
/* 80390888 0038D7C8  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8039088C 0038D7CC  80 03 00 80 */	lwz r0, 0x80(r3)
/* 80390890 0038D7D0  2C 00 00 00 */	cmpwi r0, 0
/* 80390894 0038D7D4  40 82 00 54 */	bne .L_803908E8
/* 80390898 0038D7D8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8039089C 0038D7DC  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 803908A0 0038D7E0  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 803908A4 0038D7E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803908A8 0038D7E8  4C 40 13 82 */	cror 2, 0, 2
/* 803908AC 0038D7EC  40 82 00 20 */	bne .L_803908CC
/* 803908B0 0038D7F0  7F E3 FB 78 */	mr r3, r31
/* 803908B4 0038D7F4  48 00 22 6D */	bl openWindow__Q28Morimura16TChallengeSelectFv
/* 803908B8 0038D7F8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803908BC 0038D7FC  38 80 18 11 */	li r4, 0x1811
/* 803908C0 0038D800  38 A0 00 00 */	li r5, 0
/* 803908C4 0038D804  4B FA 7D 6D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803908C8 0038D808  48 00 08 B0 */	b .L_80391178
.L_803908CC:
/* 803908CC 0038D80C  7F E3 FB 78 */	mr r3, r31
/* 803908D0 0038D810  48 00 22 75 */	bl closeWindow__Q28Morimura16TChallengeSelectFv
/* 803908D4 0038D814  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803908D8 0038D818  38 80 18 11 */	li r4, 0x1811
/* 803908DC 0038D81C  38 A0 00 00 */	li r5, 0
/* 803908E0 0038D820  4B FA 7D 51 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803908E4 0038D824  48 00 08 94 */	b .L_80391178
.L_803908E8:
/* 803908E8 0038D828  70 80 11 00 */	andi. r0, r4, 0x1100
/* 803908EC 0038D82C  41 82 02 D8 */	beq .L_80390BC4
/* 803908F0 0038D830  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 803908F4 0038D834  41 82 02 D0 */	beq .L_80390BC4
/* 803908F8 0038D838  83 DF 00 84 */	lwz r30, 0x84(r31)
/* 803908FC 0038D83C  80 7E 00 80 */	lwz r3, 0x80(r30)
/* 80390900 0038D840  7C 03 00 D0 */	neg r0, r3
/* 80390904 0038D844  7C 00 1B 78 */	or r0, r0, r3
/* 80390908 0038D848  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 8039090C 0038D84C  41 82 01 80 */	beq .L_80390A8C
/* 80390910 0038D850  2C 03 00 02 */	cmpwi r3, 2
/* 80390914 0038D854  40 82 08 64 */	bne .L_80391178
/* 80390918 0038D858  88 6D 85 C8 */	lbz r3, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039091C 0038D85C  28 03 00 00 */	cmplwi r3, 0
/* 80390920 0038D860  40 82 00 18 */	bne .L_80390938
/* 80390924 0038D864  88 0D 85 D8 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390928 0038D868  28 00 00 00 */	cmplwi r0, 0
/* 8039092C 0038D86C  41 82 01 44 */	beq .L_80390A70
/* 80390930 0038D870  28 03 00 00 */	cmplwi r3, 0
/* 80390934 0038D874  40 82 01 3C */	bne .L_80390A70
.L_80390938:
/* 80390938 0038D878  38 00 00 03 */	li r0, 3
/* 8039093C 0038D87C  90 1E 00 80 */	stw r0, 0x80(r30)
/* 80390940 0038D880  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 80390944 0038D884  2C 00 00 02 */	cmpwi r0, 2
/* 80390948 0038D888  41 82 00 BC */	beq .L_80390A04
/* 8039094C 0038D88C  40 80 00 10 */	bge .L_8039095C
/* 80390950 0038D890  2C 00 00 01 */	cmpwi r0, 1
/* 80390954 0038D894  40 80 00 14 */	bge .L_80390968
/* 80390958 0038D898  48 00 00 AC */	b .L_80390A04
.L_8039095C:
/* 8039095C 0038D89C  2C 00 00 04 */	cmpwi r0, 4
/* 80390960 0038D8A0  40 80 00 A4 */	bge .L_80390A04
/* 80390964 0038D8A4  48 00 00 50 */	b .L_803909B4
.L_80390968:
/* 80390968 0038D8A8  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 8039096C 0038D8AC  3B 20 00 00 */	li r25, 0
/* 80390970 0038D8B0  C3 82 0C 34 */	lfs f28, lbl_8051EF94@sda21(r2)
/* 80390974 0038D8B4  3F 80 43 30 */	lis r28, 0x4330
/* 80390978 0038D8B8  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 8039097C 0038D8BC  CB 62 0C 50 */	lfd f27, lbl_8051EFB0@sda21(r2)
.L_80390980:
/* 80390980 0038D8C0  6F 20 80 00 */	xoris r0, r25, 0x8000
/* 80390984 0038D8C4  93 81 00 80 */	stw r28, 0x80(r1)
/* 80390988 0038D8C8  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 8039098C 0038D8CC  90 01 00 84 */	stw r0, 0x84(r1)
/* 80390990 0038D8D0  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80390994 0038D8D4  EC 00 D8 28 */	fsubs f0, f0, f27
/* 80390998 0038D8D8  EC 3C E0 3A */	fmadds f1, f28, f0, f28
/* 8039099C 0038D8DC  4B F7 8A B9 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 803909A0 0038D8E0  3B 39 00 01 */	addi r25, r25, 1
/* 803909A4 0038D8E4  3B DE 00 04 */	addi r30, r30, 4
/* 803909A8 0038D8E8  2C 19 00 04 */	cmpwi r25, 4
/* 803909AC 0038D8EC  41 80 FF D4 */	blt .L_80390980
/* 803909B0 0038D8F0  48 00 00 54 */	b .L_80390A04
.L_803909B4:
/* 803909B4 0038D8F4  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 803909B8 0038D8F8  7F D9 F3 78 */	mr r25, r30
/* 803909BC 0038D8FC  3B 80 00 00 */	li r28, 0
/* 803909C0 0038D900  D0 1E 00 8C */	stfs f0, 0x8c(r30)
.L_803909C4:
/* 803909C4 0038D904  80 79 00 44 */	lwz r3, 0x44(r25)
/* 803909C8 0038D908  4B F7 8A C9 */	bl close__Q32og6Screen15AnimText_ScreenFv
/* 803909CC 0038D90C  3B 9C 00 01 */	addi r28, r28, 1
/* 803909D0 0038D910  3B 39 00 04 */	addi r25, r25, 4
/* 803909D4 0038D914  2C 1C 00 04 */	cmpwi r28, 4
/* 803909D8 0038D918  41 80 FF EC */	blt .L_803909C4
/* 803909DC 0038D91C  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 803909E0 0038D920  81 83 00 00 */	lwz r12, 0(r3)
/* 803909E4 0038D924  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803909E8 0038D928  7D 89 03 A6 */	mtctr r12
/* 803909EC 0038D92C  4E 80 04 21 */	bctrl 
/* 803909F0 0038D930  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 803909F4 0038D934  81 83 00 00 */	lwz r12, 0(r3)
/* 803909F8 0038D938  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803909FC 0038D93C  7D 89 03 A6 */	mtctr r12
/* 80390A00 0038D940  4E 80 04 21 */	bctrl 
.L_80390A04:
/* 80390A04 0038D944  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80390A08 0038D948  28 00 00 00 */	cmplwi r0, 0
/* 80390A0C 0038D94C  40 82 00 20 */	bne .L_80390A2C
/* 80390A10 0038D950  38 00 00 01 */	li r0, 1
/* 80390A14 0038D954  7F E3 FB 78 */	mr r3, r31
/* 80390A18 0038D958  98 1F 01 34 */	stb r0, 0x134(r31)
/* 80390A1C 0038D95C  48 00 22 8D */	bl demoStart__Q28Morimura16TChallengeSelectFv
/* 80390A20 0038D960  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80390A24 0038D964  38 00 00 01 */	li r0, 1
/* 80390A28 0038D968  90 03 00 1C */	stw r0, 0x1c(r3)
.L_80390A2C:
/* 80390A2C 0038D96C  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 80390A30 0038D970  38 00 00 00 */	li r0, 0
/* 80390A34 0038D974  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80390A38 0038D978  90 83 00 10 */	stw r4, 0x10(r3)
/* 80390A3C 0038D97C  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80390A40 0038D980  90 03 00 18 */	stw r0, 0x18(r3)
/* 80390A44 0038D984  88 0D 85 C8 */	lbz r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390A48 0038D988  28 00 00 00 */	cmplwi r0, 0
/* 80390A4C 0038D98C  40 82 00 10 */	bne .L_80390A5C
/* 80390A50 0038D990  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80390A54 0038D994  38 00 00 01 */	li r0, 1
/* 80390A58 0038D998  90 03 00 18 */	stw r0, 0x18(r3)
.L_80390A5C:
/* 80390A5C 0038D99C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390A60 0038D9A0  38 80 18 00 */	li r4, 0x1800
/* 80390A64 0038D9A4  38 A0 00 00 */	li r5, 0
/* 80390A68 0038D9A8  4B FA 7B C9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390A6C 0038D9AC  48 00 07 0C */	b .L_80391178
.L_80390A70:
/* 80390A70 0038D9B0  38 00 00 01 */	li r0, 1
/* 80390A74 0038D9B4  38 80 18 07 */	li r4, 0x1807
/* 80390A78 0038D9B8  98 1E 00 84 */	stb r0, 0x84(r30)
/* 80390A7C 0038D9BC  38 A0 00 00 */	li r5, 0
/* 80390A80 0038D9C0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390A84 0038D9C4  4B FA 7B AD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390A88 0038D9C8  48 00 06 F0 */	b .L_80391178
.L_80390A8C:
/* 80390A8C 0038D9CC  88 0D 85 C8 */	lbz r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390A90 0038D9D0  28 00 00 00 */	cmplwi r0, 0
/* 80390A94 0038D9D4  41 82 00 28 */	beq .L_80390ABC
/* 80390A98 0038D9D8  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80390A9C 0038D9DC  C0 2D 85 D4 */	lfs f1, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390AA0 0038D9E0  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80390AA4 0038D9E4  4B F7 8A 35 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80390AA8 0038D9E8  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 80390AAC 0038D9EC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80390AB0 0038D9F0  FC 40 08 90 */	fmr f2, f1
/* 80390AB4 0038D9F4  4B F7 8A 25 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80390AB8 0038D9F8  48 00 00 24 */	b .L_80390ADC
.L_80390ABC:
/* 80390ABC 0038D9FC  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 80390AC0 0038DA00  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80390AC4 0038DA04  FC 40 08 90 */	fmr f2, f1
/* 80390AC8 0038DA08  4B F7 8A 11 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80390ACC 0038DA0C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80390AD0 0038DA10  C0 2D 85 D4 */	lfs f1, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390AD4 0038DA14  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80390AD8 0038DA18  4B F7 8A 01 */	bl blink__Q32og6Screen15AnimText_ScreenFff
.L_80390ADC:
/* 80390ADC 0038DA1C  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80390AE0 0038DA20  3B 20 00 00 */	li r25, 0
/* 80390AE4 0038DA24  38 00 00 01 */	li r0, 1
/* 80390AE8 0038DA28  9B 23 00 84 */	stb r25, 0x84(r3)
/* 80390AEC 0038DA2C  83 DF 00 84 */	lwz r30, 0x84(r31)
/* 80390AF0 0038DA30  90 1E 00 80 */	stw r0, 0x80(r30)
/* 80390AF4 0038DA34  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 80390AF8 0038DA38  2C 00 00 02 */	cmpwi r0, 2
/* 80390AFC 0038DA3C  41 82 00 B4 */	beq .L_80390BB0
/* 80390B00 0038DA40  40 80 00 10 */	bge .L_80390B10
/* 80390B04 0038DA44  2C 00 00 01 */	cmpwi r0, 1
/* 80390B08 0038DA48  40 80 00 14 */	bge .L_80390B1C
/* 80390B0C 0038DA4C  48 00 00 A4 */	b .L_80390BB0
.L_80390B10:
/* 80390B10 0038DA50  2C 00 00 04 */	cmpwi r0, 4
/* 80390B14 0038DA54  40 80 00 9C */	bge .L_80390BB0
/* 80390B18 0038DA58  48 00 00 4C */	b .L_80390B64
.L_80390B1C:
/* 80390B1C 0038DA5C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390B20 0038DA60  3F 80 43 30 */	lis r28, 0x4330
/* 80390B24 0038DA64  C3 82 0C 34 */	lfs f28, lbl_8051EF94@sda21(r2)
/* 80390B28 0038DA68  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 80390B2C 0038DA6C  CB 62 0C 50 */	lfd f27, lbl_8051EFB0@sda21(r2)
.L_80390B30:
/* 80390B30 0038DA70  6F 20 80 00 */	xoris r0, r25, 0x8000
/* 80390B34 0038DA74  93 81 00 80 */	stw r28, 0x80(r1)
/* 80390B38 0038DA78  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 80390B3C 0038DA7C  90 01 00 84 */	stw r0, 0x84(r1)
/* 80390B40 0038DA80  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80390B44 0038DA84  EC 00 D8 28 */	fsubs f0, f0, f27
/* 80390B48 0038DA88  EC 3C E0 3A */	fmadds f1, f28, f0, f28
/* 80390B4C 0038DA8C  4B F7 89 09 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 80390B50 0038DA90  3B 39 00 01 */	addi r25, r25, 1
/* 80390B54 0038DA94  3B DE 00 04 */	addi r30, r30, 4
/* 80390B58 0038DA98  2C 19 00 04 */	cmpwi r25, 4
/* 80390B5C 0038DA9C  41 80 FF D4 */	blt .L_80390B30
/* 80390B60 0038DAA0  48 00 00 50 */	b .L_80390BB0
.L_80390B64:
/* 80390B64 0038DAA4  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390B68 0038DAA8  7F DC F3 78 */	mr r28, r30
/* 80390B6C 0038DAAC  D0 1E 00 8C */	stfs f0, 0x8c(r30)
.L_80390B70:
/* 80390B70 0038DAB0  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 80390B74 0038DAB4  4B F7 89 1D */	bl close__Q32og6Screen15AnimText_ScreenFv
/* 80390B78 0038DAB8  3B 39 00 01 */	addi r25, r25, 1
/* 80390B7C 0038DABC  3B 9C 00 04 */	addi r28, r28, 4
/* 80390B80 0038DAC0  2C 19 00 04 */	cmpwi r25, 4
/* 80390B84 0038DAC4  41 80 FF EC */	blt .L_80390B70
/* 80390B88 0038DAC8  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 80390B8C 0038DACC  81 83 00 00 */	lwz r12, 0(r3)
/* 80390B90 0038DAD0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80390B94 0038DAD4  7D 89 03 A6 */	mtctr r12
/* 80390B98 0038DAD8  4E 80 04 21 */	bctrl 
/* 80390B9C 0038DADC  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80390BA0 0038DAE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80390BA4 0038DAE4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80390BA8 0038DAE8  7D 89 03 A6 */	mtctr r12
/* 80390BAC 0038DAEC  4E 80 04 21 */	bctrl 
.L_80390BB0:
/* 80390BB0 0038DAF0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390BB4 0038DAF4  38 80 18 11 */	li r4, 0x1811
/* 80390BB8 0038DAF8  38 A0 00 00 */	li r5, 0
/* 80390BBC 0038DAFC  4B FA 7A 75 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390BC0 0038DB00  48 00 05 B8 */	b .L_80391178
.L_80390BC4:
/* 80390BC4 0038DB04  54 80 05 AD */	rlwinm. r0, r4, 0, 0x16, 0x16
/* 80390BC8 0038DB08  41 82 01 60 */	beq .L_80390D28
/* 80390BCC 0038DB0C  83 DF 00 84 */	lwz r30, 0x84(r31)
/* 80390BD0 0038DB10  80 7E 00 80 */	lwz r3, 0x80(r30)
/* 80390BD4 0038DB14  7C 03 00 D0 */	neg r0, r3
/* 80390BD8 0038DB18  7C 00 1B 78 */	or r0, r0, r3
/* 80390BDC 0038DB1C  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 80390BE0 0038DB20  41 82 00 EC */	beq .L_80390CCC
/* 80390BE4 0038DB24  2C 03 00 02 */	cmpwi r3, 2
/* 80390BE8 0038DB28  40 82 05 90 */	bne .L_80391178
/* 80390BEC 0038DB2C  38 00 00 03 */	li r0, 3
/* 80390BF0 0038DB30  90 1E 00 80 */	stw r0, 0x80(r30)
/* 80390BF4 0038DB34  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 80390BF8 0038DB38  2C 00 00 02 */	cmpwi r0, 2
/* 80390BFC 0038DB3C  41 82 00 BC */	beq .L_80390CB8
/* 80390C00 0038DB40  40 80 00 10 */	bge .L_80390C10
/* 80390C04 0038DB44  2C 00 00 01 */	cmpwi r0, 1
/* 80390C08 0038DB48  40 80 00 14 */	bge .L_80390C1C
/* 80390C0C 0038DB4C  48 00 00 AC */	b .L_80390CB8
.L_80390C10:
/* 80390C10 0038DB50  2C 00 00 04 */	cmpwi r0, 4
/* 80390C14 0038DB54  40 80 00 A4 */	bge .L_80390CB8
/* 80390C18 0038DB58  48 00 00 50 */	b .L_80390C68
.L_80390C1C:
/* 80390C1C 0038DB5C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390C20 0038DB60  3B 20 00 00 */	li r25, 0
/* 80390C24 0038DB64  C3 82 0C 34 */	lfs f28, lbl_8051EF94@sda21(r2)
/* 80390C28 0038DB68  3F 80 43 30 */	lis r28, 0x4330
/* 80390C2C 0038DB6C  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 80390C30 0038DB70  CB 62 0C 50 */	lfd f27, lbl_8051EFB0@sda21(r2)
.L_80390C34:
/* 80390C34 0038DB74  6F 20 80 00 */	xoris r0, r25, 0x8000
/* 80390C38 0038DB78  93 81 00 80 */	stw r28, 0x80(r1)
/* 80390C3C 0038DB7C  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 80390C40 0038DB80  90 01 00 84 */	stw r0, 0x84(r1)
/* 80390C44 0038DB84  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80390C48 0038DB88  EC 00 D8 28 */	fsubs f0, f0, f27
/* 80390C4C 0038DB8C  EC 3C E0 3A */	fmadds f1, f28, f0, f28
/* 80390C50 0038DB90  4B F7 88 05 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 80390C54 0038DB94  3B 39 00 01 */	addi r25, r25, 1
/* 80390C58 0038DB98  3B DE 00 04 */	addi r30, r30, 4
/* 80390C5C 0038DB9C  2C 19 00 04 */	cmpwi r25, 4
/* 80390C60 0038DBA0  41 80 FF D4 */	blt .L_80390C34
/* 80390C64 0038DBA4  48 00 00 54 */	b .L_80390CB8
.L_80390C68:
/* 80390C68 0038DBA8  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80390C6C 0038DBAC  7F DC F3 78 */	mr r28, r30
/* 80390C70 0038DBB0  3B 20 00 00 */	li r25, 0
/* 80390C74 0038DBB4  D0 1E 00 8C */	stfs f0, 0x8c(r30)
.L_80390C78:
/* 80390C78 0038DBB8  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 80390C7C 0038DBBC  4B F7 88 15 */	bl close__Q32og6Screen15AnimText_ScreenFv
/* 80390C80 0038DBC0  3B 39 00 01 */	addi r25, r25, 1
/* 80390C84 0038DBC4  3B 9C 00 04 */	addi r28, r28, 4
/* 80390C88 0038DBC8  2C 19 00 04 */	cmpwi r25, 4
/* 80390C8C 0038DBCC  41 80 FF EC */	blt .L_80390C78
/* 80390C90 0038DBD0  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 80390C94 0038DBD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80390C98 0038DBD8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80390C9C 0038DBDC  7D 89 03 A6 */	mtctr r12
/* 80390CA0 0038DBE0  4E 80 04 21 */	bctrl 
/* 80390CA4 0038DBE4  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80390CA8 0038DBE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80390CAC 0038DBEC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80390CB0 0038DBF0  7D 89 03 A6 */	mtctr r12
/* 80390CB4 0038DBF4  4E 80 04 21 */	bctrl 
.L_80390CB8:
/* 80390CB8 0038DBF8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390CBC 0038DBFC  38 80 18 11 */	li r4, 0x1811
/* 80390CC0 0038DC00  38 A0 00 00 */	li r5, 0
/* 80390CC4 0038DC04  4B FA 79 6D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390CC8 0038DC08  48 00 04 B0 */	b .L_80391178
.L_80390CCC:
/* 80390CCC 0038DC0C  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80390CD0 0038DC10  40 82 00 20 */	bne .L_80390CF0
/* 80390CD4 0038DC14  7F E3 FB 78 */	mr r3, r31
/* 80390CD8 0038DC18  48 00 1E 6D */	bl closeWindow__Q28Morimura16TChallengeSelectFv
/* 80390CDC 0038DC1C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80390CE0 0038DC20  38 80 18 11 */	li r4, 0x1811
/* 80390CE4 0038DC24  38 A0 00 00 */	li r5, 0
/* 80390CE8 0038DC28  4B FA 79 49 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80390CEC 0038DC2C  48 00 04 8C */	b .L_80391178
.L_80390CF0:
/* 80390CF0 0038DC30  38 00 00 00 */	li r0, 0
/* 80390CF4 0038DC34  7F E3 FB 78 */	mr r3, r31
/* 80390CF8 0038DC38  98 1F 01 28 */	stb r0, 0x128(r31)
/* 80390CFC 0038DC3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80390D00 0038DC40  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80390D04 0038DC44  7D 89 03 A6 */	mtctr r12
/* 80390D08 0038DC48  4E 80 04 21 */	bctrl 
/* 80390D0C 0038DC4C  80 63 02 24 */	lwz r3, 0x224(r3)
/* 80390D10 0038DC50  38 80 00 00 */	li r4, 0
/* 80390D14 0038DC54  81 83 00 00 */	lwz r12, 0(r3)
/* 80390D18 0038DC58  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80390D1C 0038DC5C  7D 89 03 A6 */	mtctr r12
/* 80390D20 0038DC60  4E 80 04 21 */	bctrl 
/* 80390D24 0038DC64  48 00 04 54 */	b .L_80391178
.L_80390D28:
/* 80390D28 0038DC68  83 DF 00 84 */	lwz r30, 0x84(r31)
/* 80390D2C 0038DC6C  80 7E 00 80 */	lwz r3, 0x80(r30)
/* 80390D30 0038DC70  7C 03 00 D0 */	neg r0, r3
/* 80390D34 0038DC74  7C 00 1B 78 */	or r0, r0, r3
/* 80390D38 0038DC78  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 80390D3C 0038DC7C  40 82 02 78 */	bne .L_80390FB4
/* 80390D40 0038DC80  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80390D44 0038DC84  41 82 04 34 */	beq .L_80391178
/* 80390D48 0038DC88  80 65 00 18 */	lwz r3, 0x18(r5)
/* 80390D4C 0038DC8C  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 80390D50 0038DC90  40 82 00 0C */	bne .L_80390D5C
/* 80390D54 0038DC94  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80390D58 0038DC98  41 82 00 8C */	beq .L_80390DE4
.L_80390D5C:
/* 80390D5C 0038DC9C  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 80390D60 0038DCA0  2C 00 00 00 */	cmpwi r0, 0
/* 80390D64 0038DCA4  40 82 00 70 */	bne .L_80390DD4
/* 80390D68 0038DCA8  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80390D6C 0038DCAC  2C 00 00 00 */	cmpwi r0, 0
/* 80390D70 0038DCB0  40 80 00 0C */	bge .L_80390D7C
/* 80390D74 0038DCB4  38 00 00 01 */	li r0, 1
/* 80390D78 0038DCB8  90 1F 01 40 */	stw r0, 0x140(r31)
.L_80390D7C:
/* 80390D7C 0038DCBC  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 80390D80 0038DCC0  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 80390D84 0038DCC4  38 03 66 67 */	addi r0, r3, 0x66666667@l
/* 80390D88 0038DCC8  80 8D 99 7C */	lwz r4, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390D8C 0038DCCC  7C 00 28 96 */	mulhw r0, r0, r5
/* 80390D90 0038DCD0  7C 00 0E 70 */	srawi r0, r0, 1
/* 80390D94 0038DCD4  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80390D98 0038DCD8  7C 00 1A 14 */	add r0, r0, r3
/* 80390D9C 0038DCDC  7C 04 00 00 */	cmpw r4, r0
/* 80390DA0 0038DCE0  40 80 00 28 */	bge .L_80390DC8
/* 80390DA4 0038DCE4  38 64 00 01 */	addi r3, r4, 1
/* 80390DA8 0038DCE8  80 8D 99 78 */	lwz r4, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390DAC 0038DCEC  1C 03 00 05 */	mulli r0, r3, 5
/* 80390DB0 0038DCF0  7C 04 02 14 */	add r0, r4, r0
/* 80390DB4 0038DCF4  7C 00 28 00 */	cmpw r0, r5
/* 80390DB8 0038DCF8  41 81 00 10 */	bgt .L_80390DC8
/* 80390DBC 0038DCFC  90 6D 99 7C */	stw r3, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390DC0 0038DD00  3B A0 00 01 */	li r29, 1
/* 80390DC4 0038DD04  48 00 00 10 */	b .L_80390DD4
.L_80390DC8:
/* 80390DC8 0038DD08  38 00 00 00 */	li r0, 0
/* 80390DCC 0038DD0C  3B A0 00 01 */	li r29, 1
/* 80390DD0 0038DD10  90 0D 99 7C */	stw r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390DD4:
/* 80390DD4 0038DD14  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80390DD8 0038DD18  38 03 00 01 */	addi r0, r3, 1
/* 80390DDC 0038DD1C  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80390DE0 0038DD20  48 00 03 98 */	b .L_80391178
.L_80390DE4:
/* 80390DE4 0038DD24  54 60 01 09 */	rlwinm. r0, r3, 0, 4, 4
/* 80390DE8 0038DD28  40 82 00 0C */	bne .L_80390DF4
/* 80390DEC 0038DD2C  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80390DF0 0038DD30  41 82 00 94 */	beq .L_80390E84
.L_80390DF4:
/* 80390DF4 0038DD34  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 80390DF8 0038DD38  2C 00 00 00 */	cmpwi r0, 0
/* 80390DFC 0038DD3C  40 82 00 78 */	bne .L_80390E74
/* 80390E00 0038DD40  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80390E04 0038DD44  2C 00 00 00 */	cmpwi r0, 0
/* 80390E08 0038DD48  40 80 00 0C */	bge .L_80390E14
/* 80390E0C 0038DD4C  38 00 00 00 */	li r0, 0
/* 80390E10 0038DD50  90 1F 01 40 */	stw r0, 0x140(r31)
.L_80390E14:
/* 80390E14 0038DD54  80 6D 99 7C */	lwz r3, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390E18 0038DD58  2C 03 00 00 */	cmpwi r3, 0
/* 80390E1C 0038DD5C  40 81 00 14 */	ble .L_80390E30
/* 80390E20 0038DD60  38 03 FF FF */	addi r0, r3, -1
/* 80390E24 0038DD64  3B A0 00 01 */	li r29, 1
/* 80390E28 0038DD68  90 0D 99 7C */	stw r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390E2C 0038DD6C  48 00 00 48 */	b .L_80390E74
.L_80390E30:
/* 80390E30 0038DD70  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 80390E34 0038DD74  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 80390E38 0038DD78  38 63 66 67 */	addi r3, r3, 0x66666667@l
/* 80390E3C 0038DD7C  80 8D 99 78 */	lwz r4, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390E40 0038DD80  7C 03 00 96 */	mulhw r0, r3, r0
/* 80390E44 0038DD84  3B A0 00 01 */	li r29, 1
/* 80390E48 0038DD88  7C 00 0E 70 */	srawi r0, r0, 1
/* 80390E4C 0038DD8C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80390E50 0038DD90  7C A0 1A 14 */	add r5, r0, r3
/* 80390E54 0038DD94  90 AD 99 7C */	stw r5, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390E58 0038DD98  1C 65 00 05 */	mulli r3, r5, 5
/* 80390E5C 0038DD9C  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 80390E60 0038DDA0  7C 64 1A 14 */	add r3, r4, r3
/* 80390E64 0038DDA4  7C 03 00 00 */	cmpw r3, r0
/* 80390E68 0038DDA8  40 81 00 0C */	ble .L_80390E74
/* 80390E6C 0038DDAC  38 05 FF FF */	addi r0, r5, -1
/* 80390E70 0038DDB0  90 0D 99 7C */	stw r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390E74:
/* 80390E74 0038DDB4  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80390E78 0038DDB8  38 03 00 01 */	addi r0, r3, 1
/* 80390E7C 0038DDBC  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80390E80 0038DDC0  48 00 02 F8 */	b .L_80391178
.L_80390E84:
/* 80390E84 0038DDC4  54 60 01 8D */	rlwinm. r0, r3, 0, 6, 6
/* 80390E88 0038DDC8  40 82 00 0C */	bne .L_80390E94
/* 80390E8C 0038DDCC  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80390E90 0038DDD0  41 82 00 74 */	beq .L_80390F04
.L_80390E94:
/* 80390E94 0038DDD4  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 80390E98 0038DDD8  2C 00 00 00 */	cmpwi r0, 0
/* 80390E9C 0038DDDC  40 82 00 58 */	bne .L_80390EF4
/* 80390EA0 0038DDE0  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80390EA4 0038DDE4  2C 00 00 00 */	cmpwi r0, 0
/* 80390EA8 0038DDE8  40 80 00 0C */	bge .L_80390EB4
/* 80390EAC 0038DDEC  38 00 00 03 */	li r0, 3
/* 80390EB0 0038DDF0  90 1F 01 40 */	stw r0, 0x140(r31)
.L_80390EB4:
/* 80390EB4 0038DDF4  80 8D 99 78 */	lwz r4, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390EB8 0038DDF8  2C 04 00 04 */	cmpwi r4, 4
/* 80390EBC 0038DDFC  40 80 00 2C */	bge .L_80390EE8
/* 80390EC0 0038DE00  80 6D 99 7C */	lwz r3, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390EC4 0038DE04  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 80390EC8 0038DE08  1C 63 00 05 */	mulli r3, r3, 5
/* 80390ECC 0038DE0C  7C 64 1A 14 */	add r3, r4, r3
/* 80390ED0 0038DE10  7C 03 00 00 */	cmpw r3, r0
/* 80390ED4 0038DE14  40 80 00 14 */	bge .L_80390EE8
/* 80390ED8 0038DE18  38 04 00 01 */	addi r0, r4, 1
/* 80390EDC 0038DE1C  3B A0 00 01 */	li r29, 1
/* 80390EE0 0038DE20  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390EE4 0038DE24  48 00 00 10 */	b .L_80390EF4
.L_80390EE8:
/* 80390EE8 0038DE28  38 00 00 00 */	li r0, 0
/* 80390EEC 0038DE2C  3B A0 00 01 */	li r29, 1
/* 80390EF0 0038DE30  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390EF4:
/* 80390EF4 0038DE34  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80390EF8 0038DE38  38 03 00 01 */	addi r0, r3, 1
/* 80390EFC 0038DE3C  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80390F00 0038DE40  48 00 02 78 */	b .L_80391178
.L_80390F04:
/* 80390F04 0038DE44  54 60 01 CF */	rlwinm. r0, r3, 0, 7, 7
/* 80390F08 0038DE48  40 82 00 0C */	bne .L_80390F14
/* 80390F0C 0038DE4C  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80390F10 0038DE50  41 82 00 5C */	beq .L_80390F6C
.L_80390F14:
/* 80390F14 0038DE54  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 80390F18 0038DE58  2C 00 00 00 */	cmpwi r0, 0
/* 80390F1C 0038DE5C  40 82 00 40 */	bne .L_80390F5C
/* 80390F20 0038DE60  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80390F24 0038DE64  2C 00 00 00 */	cmpwi r0, 0
/* 80390F28 0038DE68  40 80 00 0C */	bge .L_80390F34
/* 80390F2C 0038DE6C  38 00 00 02 */	li r0, 2
/* 80390F30 0038DE70  90 1F 01 40 */	stw r0, 0x140(r31)
.L_80390F34:
/* 80390F34 0038DE74  80 6D 99 78 */	lwz r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390F38 0038DE78  2C 03 00 00 */	cmpwi r3, 0
/* 80390F3C 0038DE7C  40 81 00 14 */	ble .L_80390F50
/* 80390F40 0038DE80  38 03 FF FF */	addi r0, r3, -1
/* 80390F44 0038DE84  3B A0 00 01 */	li r29, 1
/* 80390F48 0038DE88  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390F4C 0038DE8C  48 00 00 10 */	b .L_80390F5C
.L_80390F50:
/* 80390F50 0038DE90  38 00 00 04 */	li r0, 4
/* 80390F54 0038DE94  3B A0 00 01 */	li r29, 1
/* 80390F58 0038DE98  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80390F5C:
/* 80390F5C 0038DE9C  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80390F60 0038DEA0  38 03 00 01 */	addi r0, r3, 1
/* 80390F64 0038DEA4  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80390F68 0038DEA8  48 00 02 10 */	b .L_80391178
.L_80390F6C:
/* 80390F6C 0038DEAC  38 00 00 00 */	li r0, 0
/* 80390F70 0038DEB0  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 80390F74 0038DEB4  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80390F78 0038DEB8  C0 3F 01 4C */	lfs f1, 0x14c(r31)
/* 80390F7C 0038DEBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80390F80 0038DEC0  40 80 00 08 */	bge .L_80390F88
/* 80390F84 0038DEC4  D0 1F 01 4C */	stfs f0, 0x14c(r31)
.L_80390F88:
/* 80390F88 0038DEC8  C0 5F 01 4C */	lfs f2, 0x14c(r31)
/* 80390F8C 0038DECC  C0 22 0C A8 */	lfs f1, lbl_8051F008@sda21(r2)
/* 80390F90 0038DED0  C0 02 0C 6C */	lfs f0, lbl_8051EFCC@sda21(r2)
/* 80390F94 0038DED4  EC 22 08 2A */	fadds f1, f2, f1
/* 80390F98 0038DED8  D0 3F 01 4C */	stfs f1, 0x14c(r31)
/* 80390F9C 0038DEDC  C0 3F 01 4C */	lfs f1, 0x14c(r31)
/* 80390FA0 0038DEE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80390FA4 0038DEE4  4C 41 13 82 */	cror 2, 1, 2
/* 80390FA8 0038DEE8  40 82 01 D0 */	bne .L_80391178
/* 80390FAC 0038DEEC  D0 1F 01 4C */	stfs f0, 0x14c(r31)
/* 80390FB0 0038DEF0  48 00 01 C8 */	b .L_80391178
.L_80390FB4:
/* 80390FB4 0038DEF4  80 65 00 18 */	lwz r3, 0x18(r5)
/* 80390FB8 0038DEF8  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 80390FBC 0038DEFC  40 82 00 0C */	bne .L_80390FC8
/* 80390FC0 0038DF00  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80390FC4 0038DF04  41 82 00 D0 */	beq .L_80391094
.L_80390FC8:
/* 80390FC8 0038DF08  88 0D 85 C8 */	lbz r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390FCC 0038DF0C  28 00 00 00 */	cmplwi r0, 0
/* 80390FD0 0038DF10  41 82 00 B8 */	beq .L_80391088
/* 80390FD4 0038DF14  C3 6D 85 D4 */	lfs f27, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80390FD8 0038DF18  40 82 00 40 */	bne .L_80391018
/* 80390FDC 0038DF1C  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 80390FE0 0038DF20  C0 22 0C E4 */	lfs f1, lbl_8051F044@sda21(r2)
/* 80390FE4 0038DF24  C0 42 0C E8 */	lfs f2, lbl_8051F048@sda21(r2)
/* 80390FE8 0038DF28  C0 62 0C EC */	lfs f3, lbl_8051F04C@sda21(r2)
/* 80390FEC 0038DF2C  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 80390FF0 0038DF30  4B F9 7E E9 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 80390FF4 0038DF34  FC 20 D8 90 */	fmr f1, f27
/* 80390FF8 0038DF38  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80390FFC 0038DF3C  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80391000 0038DF40  4B F7 84 D9 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391004 0038DF44  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 80391008 0038DF48  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8039100C 0038DF4C  FC 40 08 90 */	fmr f2, f1
/* 80391010 0038DF50  4B F7 84 C9 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391014 0038DF54  48 00 00 64 */	b .L_80391078
.L_80391018:
/* 80391018 0038DF58  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 8039101C 0038DF5C  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80391020 0038DF60  FC 40 08 90 */	fmr f2, f1
/* 80391024 0038DF64  4B F7 84 B5 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391028 0038DF68  FC 20 D8 90 */	fmr f1, f27
/* 8039102C 0038DF6C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80391030 0038DF70  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80391034 0038DF74  4B F7 84 A5 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391038 0038DF78  88 0D 85 D8 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039103C 0038DF7C  28 00 00 00 */	cmplwi r0, 0
/* 80391040 0038DF80  41 82 00 20 */	beq .L_80391060
/* 80391044 0038DF84  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80391048 0038DF88  C0 22 0C E4 */	lfs f1, lbl_8051F044@sda21(r2)
/* 8039104C 0038DF8C  C0 42 0C E8 */	lfs f2, lbl_8051F048@sda21(r2)
/* 80391050 0038DF90  C0 62 0C EC */	lfs f3, lbl_8051F04C@sda21(r2)
/* 80391054 0038DF94  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 80391058 0038DF98  4B F9 7E 81 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 8039105C 0038DF9C  48 00 00 1C */	b .L_80391078
.L_80391060:
/* 80391060 0038DFA0  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80391064 0038DFA4  C0 22 0C F0 */	lfs f1, lbl_8051F050@sda21(r2)
/* 80391068 0038DFA8  C0 42 0C 44 */	lfs f2, lbl_8051EFA4@sda21(r2)
/* 8039106C 0038DFAC  C0 62 0C 84 */	lfs f3, lbl_8051EFE4@sda21(r2)
/* 80391070 0038DFB0  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 80391074 0038DFB4  4B F9 7E 65 */	bl up__Q32og6Screen8ScaleMgrFffff
.L_80391078:
/* 80391078 0038DFB8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039107C 0038DFBC  38 80 18 02 */	li r4, 0x1802
/* 80391080 0038DFC0  38 A0 00 00 */	li r5, 0
/* 80391084 0038DFC4  4B FA 75 AD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80391088:
/* 80391088 0038DFC8  38 00 00 00 */	li r0, 0
/* 8039108C 0038DFCC  98 0D 85 C8 */	stb r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391090 0038DFD0  48 00 00 E8 */	b .L_80391178
.L_80391094:
/* 80391094 0038DFD4  54 60 01 09 */	rlwinm. r0, r3, 0, 4, 4
/* 80391098 0038DFD8  40 82 00 0C */	bne .L_803910A4
/* 8039109C 0038DFDC  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 803910A0 0038DFE0  41 82 00 D8 */	beq .L_80391178
.L_803910A4:
/* 803910A4 0038DFE4  88 0D 85 C8 */	lbz r0, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803910A8 0038DFE8  28 00 00 00 */	cmplwi r0, 0
/* 803910AC 0038DFEC  40 82 00 B8 */	bne .L_80391164
/* 803910B0 0038DFF0  C3 6D 85 D4 */	lfs f27, mTextFlashVal__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803910B4 0038DFF4  40 82 00 40 */	bne .L_803910F4
/* 803910B8 0038DFF8  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 803910BC 0038DFFC  C0 22 0C E4 */	lfs f1, lbl_8051F044@sda21(r2)
/* 803910C0 0038E000  C0 42 0C E8 */	lfs f2, lbl_8051F048@sda21(r2)
/* 803910C4 0038E004  C0 62 0C EC */	lfs f3, lbl_8051F04C@sda21(r2)
/* 803910C8 0038E008  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 803910CC 0038E00C  4B F9 7E 0D */	bl up__Q32og6Screen8ScaleMgrFffff
/* 803910D0 0038E010  FC 20 D8 90 */	fmr f1, f27
/* 803910D4 0038E014  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 803910D8 0038E018  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 803910DC 0038E01C  4B F7 83 FD */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 803910E0 0038E020  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 803910E4 0038E024  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 803910E8 0038E028  FC 40 08 90 */	fmr f2, f1
/* 803910EC 0038E02C  4B F7 83 ED */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 803910F0 0038E030  48 00 00 64 */	b .L_80391154
.L_803910F4:
/* 803910F4 0038E034  C0 22 0C 28 */	lfs f1, lbl_8051EF88@sda21(r2)
/* 803910F8 0038E038  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 803910FC 0038E03C  FC 40 08 90 */	fmr f2, f1
/* 80391100 0038E040  4B F7 83 D9 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391104 0038E044  FC 20 D8 90 */	fmr f1, f27
/* 80391108 0038E048  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8039110C 0038E04C  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80391110 0038E050  4B F7 83 C9 */	bl blink__Q32og6Screen15AnimText_ScreenFff
/* 80391114 0038E054  88 0D 85 D8 */	lbz r0, mConnect2p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391118 0038E058  28 00 00 00 */	cmplwi r0, 0
/* 8039111C 0038E05C  41 82 00 20 */	beq .L_8039113C
/* 80391120 0038E060  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80391124 0038E064  C0 22 0C E4 */	lfs f1, lbl_8051F044@sda21(r2)
/* 80391128 0038E068  C0 42 0C E8 */	lfs f2, lbl_8051F048@sda21(r2)
/* 8039112C 0038E06C  C0 62 0C EC */	lfs f3, lbl_8051F04C@sda21(r2)
/* 80391130 0038E070  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 80391134 0038E074  4B F9 7D A5 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 80391138 0038E078  48 00 00 1C */	b .L_80391154
.L_8039113C:
/* 8039113C 0038E07C  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80391140 0038E080  C0 22 0C F0 */	lfs f1, lbl_8051F050@sda21(r2)
/* 80391144 0038E084  C0 42 0C 44 */	lfs f2, lbl_8051EFA4@sda21(r2)
/* 80391148 0038E088  C0 62 0C 84 */	lfs f3, lbl_8051EFE4@sda21(r2)
/* 8039114C 0038E08C  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 80391150 0038E090  4B F9 7D 89 */	bl up__Q32og6Screen8ScaleMgrFffff
.L_80391154:
/* 80391154 0038E094  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80391158 0038E098  38 80 18 02 */	li r4, 0x1802
/* 8039115C 0038E09C  38 A0 00 00 */	li r5, 0
/* 80391160 0038E0A0  4B FA 74 D1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80391164:
/* 80391164 0038E0A4  38 60 00 01 */	li r3, 1
/* 80391168 0038E0A8  38 00 00 00 */	li r0, 0
/* 8039116C 0038E0AC  98 6D 85 C8 */	stb r3, mSelected1p__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391170 0038E0B0  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80391174 0038E0B4  98 03 00 84 */	stb r0, 0x84(r3)
.L_80391178:
/* 80391178 0038E0B8  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 8039117C 0038E0BC  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80391180 0038E0C0  80 03 00 08 */	lwz r0, 8(r3)
/* 80391184 0038E0C4  2C 00 00 01 */	cmpwi r0, 1
/* 80391188 0038E0C8  40 82 00 40 */	bne .L_803911C8
/* 8039118C 0038E0CC  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80391190 0038E0D0  28 00 00 00 */	cmplwi r0, 0
/* 80391194 0038E0D4  40 82 00 34 */	bne .L_803911C8
/* 80391198 0038E0D8  38 60 00 00 */	li r3, 0
/* 8039119C 0038E0DC  38 00 00 01 */	li r0, 1
/* 803911A0 0038E0E0  98 7F 01 34 */	stb r3, 0x134(r31)
/* 803911A4 0038E0E4  7F E3 FB 78 */	mr r3, r31
/* 803911A8 0038E0E8  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 803911AC 0038E0EC  90 04 00 1C */	stw r0, 0x1c(r4)
/* 803911B0 0038E0F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 803911B4 0038E0F4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803911B8 0038E0F8  7D 89 03 A6 */	mtctr r12
/* 803911BC 0038E0FC  4E 80 04 21 */	bctrl 
/* 803911C0 0038E100  38 80 00 00 */	li r4, 0
/* 803911C4 0038E104  48 0C 0D CD */	bl endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
.L_803911C8:
/* 803911C8 0038E108  80 0D 99 7C */	lwz r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803911CC 0038E10C  80 6D 99 78 */	lwz r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803911D0 0038E110  1C 00 00 05 */	mulli r0, r0, 5
/* 803911D4 0038E114  80 9F 01 30 */	lwz r4, 0x130(r31)
/* 803911D8 0038E118  7C 03 02 14 */	add r0, r3, r0
/* 803911DC 0038E11C  7C 00 20 00 */	cmpw r0, r4
/* 803911E0 0038E120  41 80 00 7C */	blt .L_8039125C
/* 803911E4 0038E124  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 803911E8 0038E128  38 A3 66 67 */	addi r5, r3, 0x66666667@l
/* 803911EC 0038E12C  7C 05 20 96 */	mulhw r0, r5, r4
/* 803911F0 0038E130  7C 00 0E 70 */	srawi r0, r0, 1
/* 803911F4 0038E134  54 03 0F FE */	srwi r3, r0, 0x1f
/* 803911F8 0038E138  7C 00 1A 14 */	add r0, r0, r3
/* 803911FC 0038E13C  90 0D 99 7C */	stw r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391200 0038E140  80 9F 01 30 */	lwz r4, 0x130(r31)
/* 80391204 0038E144  7C 05 20 96 */	mulhw r0, r5, r4
/* 80391208 0038E148  7C 00 0E 70 */	srawi r0, r0, 1
/* 8039120C 0038E14C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80391210 0038E150  7C 00 1A 14 */	add r0, r0, r3
/* 80391214 0038E154  1C 00 00 05 */	mulli r0, r0, 5
/* 80391218 0038E158  7C 00 20 50 */	subf r0, r0, r4
/* 8039121C 0038E15C  90 0D 99 78 */	stw r0, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391220 0038E160  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 80391224 0038E164  7C 00 18 00 */	cmpw r0, r3
/* 80391228 0038E168  41 80 00 08 */	blt .L_80391230
/* 8039122C 0038E16C  90 6D 99 78 */	stw r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80391230:
/* 80391230 0038E170  80 0D 99 7C */	lwz r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391234 0038E174  80 6D 99 78 */	lwz r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391238 0038E178  1C 00 00 05 */	mulli r0, r0, 5
/* 8039123C 0038E17C  7C 03 02 14 */	add r0, r3, r0
/* 80391240 0038E180  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 80391244 0038E184  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 80391248 0038E188  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 8039124C 0038E18C  7C 03 00 00 */	cmpw r3, r0
/* 80391250 0038E190  40 81 00 0C */	ble .L_8039125C
/* 80391254 0038E194  38 00 00 00 */	li r0, 0
/* 80391258 0038E198  90 1F 00 FC */	stw r0, 0xfc(r31)
.L_8039125C:
/* 8039125C 0038E19C  2C 1B 00 00 */	cmpwi r27, 0
/* 80391260 0038E1A0  41 80 00 20 */	blt .L_80391280
/* 80391264 0038E1A4  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80391268 0038E1A8  7C 1B 00 00 */	cmpw r27, r0
/* 8039126C 0038E1AC  41 82 00 14 */	beq .L_80391280
/* 80391270 0038E1B0  38 00 00 00 */	li r0, 0
/* 80391274 0038E1B4  C0 02 0C 6C */	lfs f0, lbl_8051EFCC@sda21(r2)
/* 80391278 0038E1B8  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 8039127C 0038E1BC  D0 1F 01 4C */	stfs f0, 0x14c(r31)
.L_80391280:
/* 80391280 0038E1C0  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80391284 0038E1C4  3C 00 43 30 */	lis r0, 0x4330
/* 80391288 0038E1C8  90 01 00 80 */	stw r0, 0x80(r1)
/* 8039128C 0038E1CC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80391290 0038E1D0  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 80391294 0038E1D4  90 01 00 84 */	stw r0, 0x84(r1)
/* 80391298 0038E1D8  C0 22 0C 78 */	lfs f1, lbl_8051EFD8@sda21(r2)
/* 8039129C 0038E1DC  C8 41 00 80 */	lfd f2, 0x80(r1)
/* 803912A0 0038E1E0  C0 1F 01 4C */	lfs f0, 0x14c(r31)
/* 803912A4 0038E1E4  EC 42 18 28 */	fsubs f2, f2, f3
/* 803912A8 0038E1E8  EC 01 00 32 */	fmuls f0, f1, f0
/* 803912AC 0038E1EC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803912B0 0038E1F0  40 81 00 30 */	ble .L_803912E0
/* 803912B4 0038E1F4  38 00 00 00 */	li r0, 0
/* 803912B8 0038E1F8  C0 22 0C 58 */	lfs f1, lbl_8051EFB8@sda21(r2)
/* 803912BC 0038E1FC  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 803912C0 0038E200  C0 02 0C E4 */	lfs f0, lbl_8051F044@sda21(r2)
/* 803912C4 0038E204  C0 5F 01 4C */	lfs f2, 0x14c(r31)
/* 803912C8 0038E208  EC 22 00 72 */	fmuls f1, f2, f1
/* 803912CC 0038E20C  D0 3F 01 4C */	stfs f1, 0x14c(r31)
/* 803912D0 0038E210  C0 3F 01 4C */	lfs f1, 0x14c(r31)
/* 803912D4 0038E214  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803912D8 0038E218  40 80 00 08 */	bge .L_803912E0
/* 803912DC 0038E21C  D0 1F 01 4C */	stfs f0, 0x14c(r31)
.L_803912E0:
/* 803912E0 0038E220  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 803912E4 0038E224  41 82 00 84 */	beq .L_80391368
/* 803912E8 0038E228  80 0D 99 7C */	lwz r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803912EC 0038E22C  80 6D 99 78 */	lwz r3, mRightOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803912F0 0038E230  1C 00 00 05 */	mulli r0, r0, 5
/* 803912F4 0038E234  7C 03 02 14 */	add r0, r3, r0
/* 803912F8 0038E238  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 803912FC 0038E23C  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 80391300 0038E240  7C 1A 00 00 */	cmpw r26, r0
/* 80391304 0038E244  41 82 00 54 */	beq .L_80391358
/* 80391308 0038E248  38 00 00 01 */	li r0, 1
/* 8039130C 0038E24C  7F E3 FB 78 */	mr r3, r31
/* 80391310 0038E250  98 1F 01 36 */	stb r0, 0x136(r31)
/* 80391314 0038E254  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 80391318 0038E258  48 00 0E C1 */	bl setInfo__Q28Morimura16TChallengeSelectFi
/* 8039131C 0038E25C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80391320 0038E260  38 80 18 02 */	li r4, 0x1802
/* 80391324 0038E264  38 A0 00 00 */	li r5, 0
/* 80391328 0038E268  4B FA 73 09 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039132C 0038E26C  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 80391330 0038E270  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80391334 0038E274  54 00 10 3A */	slwi r0, r0, 2
/* 80391338 0038E278  C0 22 0C 84 */	lfs f1, lbl_8051EFE4@sda21(r2)
/* 8039133C 0038E27C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80391340 0038E280  C0 42 0C 38 */	lfs f2, lbl_8051EF98@sda21(r2)
/* 80391344 0038E284  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80391348 0038E288  C0 62 0C B0 */	lfs f3, lbl_8051F010@sda21(r2)
/* 8039134C 0038E28C  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 80391350 0038E290  4B F9 7B 89 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 80391354 0038E294  48 00 00 14 */	b .L_80391368
.L_80391358:
/* 80391358 0038E298  38 00 00 00 */	li r0, 0
/* 8039135C 0038E29C  C0 02 0C 6C */	lfs f0, lbl_8051EFCC@sda21(r2)
/* 80391360 0038E2A0  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80391364 0038E2A4  D0 1F 01 4C */	stfs f0, 0x14c(r31)
.L_80391368:
/* 80391368 0038E2A8  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8039136C 0038E2AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80391370 0038E2B0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80391374 0038E2B4  7D 89 03 A6 */	mtctr r12
/* 80391378 0038E2B8  4E 80 04 21 */	bctrl 
/* 8039137C 0038E2BC  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80391380 0038E2C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80391384 0038E2C4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80391388 0038E2C8  7D 89 03 A6 */	mtctr r12
/* 8039138C 0038E2CC  4E 80 04 21 */	bctrl 
/* 80391390 0038E2D0  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80391394 0038E2D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80391398 0038E2D8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8039139C 0038E2DC  7D 89 03 A6 */	mtctr r12
/* 803913A0 0038E2E0  4E 80 04 21 */	bctrl 
/* 803913A4 0038E2E4  83 3F 00 80 */	lwz r25, 0x80(r31)
/* 803913A8 0038E2E8  80 19 00 10 */	lwz r0, 0x10(r25)
/* 803913AC 0038E2EC  2C 00 00 01 */	cmpwi r0, 1
/* 803913B0 0038E2F0  40 80 00 1C */	bge .L_803913CC
/* 803913B4 0038E2F4  3C 60 80 49 */	lis r3, lbl_80494694@ha
/* 803913B8 0038E2F8  38 80 00 58 */	li r4, 0x58
/* 803913BC 0038E2FC  38 63 46 94 */	addi r3, r3, lbl_80494694@l
/* 803913C0 0038E300  38 A0 00 00 */	li r5, 0
/* 803913C4 0038E304  4C C6 31 82 */	crclr 6
/* 803913C8 0038E308  4B C9 92 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803913CC:
/* 803913CC 0038E30C  80 79 00 04 */	lwz r3, 4(r25)
/* 803913D0 0038E310  38 A1 00 08 */	addi r5, r1, 8
/* 803913D4 0038E314  38 80 00 00 */	li r4, 0
/* 803913D8 0038E318  80 63 00 04 */	lwz r3, 4(r3)
/* 803913DC 0038E31C  80 63 00 14 */	lwz r3, 0x14(r3)
/* 803913E0 0038E320  81 83 00 00 */	lwz r12, 0(r3)
/* 803913E4 0038E324  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803913E8 0038E328  7D 89 03 A6 */	mtctr r12
/* 803913EC 0038E32C  4E 80 04 21 */	bctrl 
/* 803913F0 0038E330  88 61 00 0B */	lbz r3, 0xb(r1)
/* 803913F4 0038E334  98 6D 99 80 */	stb r3, mFrameAnimAlpha__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803913F8 0038E338  88 1F 01 35 */	lbz r0, 0x135(r31)
/* 803913FC 0038E33C  28 00 00 00 */	cmplwi r0, 0
/* 80391400 0038E340  41 82 00 14 */	beq .L_80391414
/* 80391404 0038E344  28 03 00 96 */	cmplwi r3, 0x96
/* 80391408 0038E348  40 80 00 0C */	bge .L_80391414
/* 8039140C 0038E34C  38 00 00 96 */	li r0, 0x96
/* 80391410 0038E350  98 0D 99 80 */	stb r0, mFrameAnimAlpha__Q28Morimura16TChallengeSelect@sda21(r13)
.L_80391414:
/* 80391414 0038E354  CB 82 0C A0 */	lfd f28, lbl_8051F000@sda21(r2)
/* 80391418 0038E358  3B 40 00 00 */	li r26, 0
/* 8039141C 0038E35C  C3 62 0C 90 */	lfs f27, lbl_8051EFF0@sda21(r2)
/* 80391420 0038E360  3B C0 00 00 */	li r30, 0
/* 80391424 0038E364  3F 80 43 30 */	lis r28, 0x4330
.L_80391428:
/* 80391428 0038E368  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 8039142C 0038E36C  7F A5 EB 78 */	mr r5, r29
/* 80391430 0038E370  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 80391434 0038E374  7F 63 F0 2E */	lwzx r27, r3, r30
/* 80391438 0038E378  7F 63 DB 78 */	mr r3, r27
/* 8039143C 0038E37C  4B FF B4 BD */	bl update__Q28Morimura15TChallengePanelFib
/* 80391440 0038E380  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 80391444 0038E384  7C 1A 00 00 */	cmpw r26, r0
/* 80391448 0038E388  41 82 00 10 */	beq .L_80391458
/* 8039144C 0038E38C  88 1B 00 24 */	lbz r0, 0x24(r27)
/* 80391450 0038E390  28 00 00 00 */	cmplwi r0, 0
/* 80391454 0038E394  41 82 01 5C */	beq .L_803915B0
.L_80391458:
/* 80391458 0038E398  C0 0D 85 F0 */	lfs f0, mSelectIconScale__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039145C 0038E39C  D0 1B 00 14 */	stfs f0, 0x14(r27)
/* 80391460 0038E3A0  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 80391464 0038E3A4  C0 2D 85 F0 */	lfs f1, mSelectIconScale__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391468 0038E3A8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8039146C 0038E3AC  40 81 00 08 */	ble .L_80391474
/* 80391470 0038E3B0  D0 3B 00 14 */	stfs f1, 0x14(r27)
.L_80391474:
/* 80391474 0038E3B4  C0 3B 00 18 */	lfs f1, 0x18(r27)
/* 80391478 0038E3B8  C0 4D 85 CC */	lfs f2, mAlphaSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
/* 8039147C 0038E3BC  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 80391480 0038E3C0  EC 21 10 2A */	fadds f1, f1, f2
/* 80391484 0038E3C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80391488 0038E3C8  40 80 00 0C */	bge .L_80391494
/* 8039148C 0038E3CC  D0 3B 00 18 */	stfs f1, 0x18(r27)
/* 80391490 0038E3D0  48 00 01 68 */	b .L_803915F8
.L_80391494:
/* 80391494 0038E3D4  88 1B 00 24 */	lbz r0, 0x24(r27)
/* 80391498 0038E3D8  28 00 00 00 */	cmplwi r0, 0
/* 8039149C 0038E3DC  41 82 01 08 */	beq .L_803915A4
/* 803914A0 0038E3E0  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 803914A4 0038E3E4  C0 22 0C 84 */	lfs f1, lbl_8051EFE4@sda21(r2)
/* 803914A8 0038E3E8  C0 42 0C 38 */	lfs f2, lbl_8051EF98@sda21(r2)
/* 803914AC 0038E3EC  C0 62 0C B0 */	lfs f3, lbl_8051F010@sda21(r2)
/* 803914B0 0038E3F0  C0 82 0C 28 */	lfs f4, lbl_8051EF88@sda21(r2)
/* 803914B4 0038E3F4  4B F9 7A 25 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 803914B8 0038E3F8  38 00 00 00 */	li r0, 0
/* 803914BC 0038E3FC  98 1B 00 24 */	stb r0, 0x24(r27)
/* 803914C0 0038E400  80 1B 00 1C */	lwz r0, 0x1c(r27)
/* 803914C4 0038E404  2C 00 00 03 */	cmpwi r0, 3
/* 803914C8 0038E408  40 80 00 DC */	bge .L_803915A4
/* 803914CC 0038E40C  80 1B 00 20 */	lwz r0, 0x20(r27)
/* 803914D0 0038E410  38 80 18 30 */	li r4, 0x1830
/* 803914D4 0038E414  38 A0 00 00 */	li r5, 0
/* 803914D8 0038E418  90 1B 00 1C */	stw r0, 0x1c(r27)
/* 803914DC 0038E41C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803914E0 0038E420  4B FA 71 51 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803914E4 0038E424  80 7B 00 04 */	lwz r3, 4(r27)
/* 803914E8 0038E428  3C 80 80 4E */	lis r4, mIconTexture__Q28Morimura16TChallengeSelect@ha
/* 803914EC 0038E42C  80 1B 00 1C */	lwz r0, 0x1c(r27)
/* 803914F0 0038E430  38 84 50 30 */	addi r4, r4, mIconTexture__Q28Morimura16TChallengeSelect@l
/* 803914F4 0038E434  81 83 00 00 */	lwz r12, 0(r3)
/* 803914F8 0038E438  38 A0 00 00 */	li r5, 0
/* 803914FC 0038E43C  54 00 10 3A */	slwi r0, r0, 2
/* 80391500 0038E440  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 80391504 0038E444  7C 84 00 2E */	lwzx r4, r4, r0
/* 80391508 0038E448  7D 89 03 A6 */	mtctr r12
/* 8039150C 0038E44C  4E 80 04 21 */	bctrl 
/* 80391510 0038E450  80 FB 00 04 */	lwz r7, 4(r27)
/* 80391514 0038E454  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 80391518 0038E458  3C C0 80 4C */	lis r6, __vt__Q25efx2d5TBase@ha
/* 8039151C 0038E45C  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple1@ha
/* 80391520 0038E460  C0 27 00 8C */	lfs f1, 0x8c(r7)
/* 80391524 0038E464  3C A0 80 4C */	lis r5, __vt__Q25efx2d3Arg@ha
/* 80391528 0038E468  C0 07 00 9C */	lfs f0, 0x9c(r7)
/* 8039152C 0038E46C  38 E0 00 00 */	li r7, 0
/* 80391530 0038E470  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80391534 0038E474  38 03 14 F0 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 80391538 0038E478  3C 60 80 4E */	lis r3, __vt__Q25efx2d14T2DChangesmoke@ha
/* 8039153C 0038E47C  39 25 15 14 */	addi r9, r5, __vt__Q25efx2d3Arg@l
/* 80391540 0038E480  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80391544 0038E484  38 A0 00 07 */	li r5, 7
/* 80391548 0038E488  81 61 00 0C */	lwz r11, 0xc(r1)
/* 8039154C 0038E48C  39 06 14 D8 */	addi r8, r6, __vt__Q25efx2d5TBase@l
/* 80391550 0038E490  90 01 00 48 */	stw r0, 0x48(r1)
/* 80391554 0038E494  38 C4 74 88 */	addi r6, r4, __vt__Q25efx2d8TSimple1@l
/* 80391558 0038E498  81 41 00 10 */	lwz r10, 0x10(r1)
/* 8039155C 0038E49C  38 03 3D C4 */	addi r0, r3, __vt__Q25efx2d14T2DChangesmoke@l
/* 80391560 0038E4A0  91 61 00 14 */	stw r11, 0x14(r1)
/* 80391564 0038E4A4  38 61 00 48 */	addi r3, r1, 0x48
/* 80391568 0038E4A8  38 81 00 3C */	addi r4, r1, 0x3c
/* 8039156C 0038E4AC  91 41 00 18 */	stw r10, 0x18(r1)
/* 80391570 0038E4B0  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80391574 0038E4B4  91 01 00 48 */	stw r8, 0x48(r1)
/* 80391578 0038E4B8  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8039157C 0038E4BC  90 C1 00 48 */	stw r6, 0x48(r1)
/* 80391580 0038E4C0  91 21 00 44 */	stw r9, 0x44(r1)
/* 80391584 0038E4C4  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80391588 0038E4C8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8039158C 0038E4CC  98 E1 00 4C */	stb r7, 0x4c(r1)
/* 80391590 0038E4D0  98 E1 00 4D */	stb r7, 0x4d(r1)
/* 80391594 0038E4D4  B0 A1 00 50 */	sth r5, 0x50(r1)
/* 80391598 0038E4D8  90 E1 00 54 */	stw r7, 0x54(r1)
/* 8039159C 0038E4DC  90 01 00 48 */	stw r0, 0x48(r1)
/* 803915A0 0038E4E0  48 02 82 91 */	bl create__Q25efx2d8TSimple1FPQ25efx2d3Arg
.L_803915A4:
/* 803915A4 0038E4E4  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 803915A8 0038E4E8  D0 1B 00 18 */	stfs f0, 0x18(r27)
/* 803915AC 0038E4EC  48 00 00 4C */	b .L_803915F8
.L_803915B0:
/* 803915B0 0038E4F0  C0 5B 00 14 */	lfs f2, 0x14(r27)
/* 803915B4 0038E4F4  C0 22 0C 98 */	lfs f1, lbl_8051EFF8@sda21(r2)
/* 803915B8 0038E4F8  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 803915BC 0038E4FC  EC 22 00 72 */	fmuls f1, f2, f1
/* 803915C0 0038E500  D0 3B 00 14 */	stfs f1, 0x14(r27)
/* 803915C4 0038E504  C0 3B 00 14 */	lfs f1, 0x14(r27)
/* 803915C8 0038E508  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803915CC 0038E50C  40 80 00 08 */	bge .L_803915D4
/* 803915D0 0038E510  D0 1B 00 14 */	stfs f0, 0x14(r27)
.L_803915D4:
/* 803915D4 0038E514  C0 1B 00 18 */	lfs f0, 0x18(r27)
/* 803915D8 0038E518  C0 2D 85 CC */	lfs f1, mAlphaSpeed__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803915DC 0038E51C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803915E0 0038E520  40 81 00 10 */	ble .L_803915F0
/* 803915E4 0038E524  EC 00 08 28 */	fsubs f0, f0, f1
/* 803915E8 0038E528  D0 1B 00 18 */	stfs f0, 0x18(r27)
/* 803915EC 0038E52C  48 00 00 0C */	b .L_803915F8
.L_803915F0:
/* 803915F0 0038E530  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 803915F4 0038E534  D0 1B 00 18 */	stfs f0, 0x18(r27)
.L_803915F8:
/* 803915F8 0038E538  88 0D 99 80 */	lbz r0, mFrameAnimAlpha__Q28Morimura16TChallengeSelect@sda21(r13)
/* 803915FC 0038E53C  C0 1B 00 18 */	lfs f0, 0x18(r27)
/* 80391600 0038E540  90 01 00 84 */	stw r0, 0x84(r1)
/* 80391604 0038E544  80 7B 00 08 */	lwz r3, 8(r27)
/* 80391608 0038E548  EC 1B 00 32 */	fmuls f0, f27, f0
/* 8039160C 0038E54C  93 81 00 80 */	stw r28, 0x80(r1)
/* 80391610 0038E550  81 83 00 00 */	lwz r12, 0(r3)
/* 80391614 0038E554  C8 21 00 80 */	lfd f1, 0x80(r1)
/* 80391618 0038E558  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8039161C 0038E55C  EC 21 E0 28 */	fsubs f1, f1, f28
/* 80391620 0038E560  EC 01 00 32 */	fmuls f0, f1, f0
/* 80391624 0038E564  FC 00 00 1E */	fctiwz f0, f0
/* 80391628 0038E568  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 8039162C 0038E56C  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 80391630 0038E570  7D 89 03 A6 */	mtctr r12
/* 80391634 0038E574  4E 80 04 21 */	bctrl 
/* 80391638 0038E578  3B 5A 00 01 */	addi r26, r26, 1
/* 8039163C 0038E57C  3B DE 00 04 */	addi r30, r30, 4
/* 80391640 0038E580  2C 1A 00 1E */	cmpwi r26, 0x1e
/* 80391644 0038E584  41 80 FD E4 */	blt .L_80391428
/* 80391648 0038E588  3B 40 00 00 */	li r26, 0
/* 8039164C 0038E58C  7F F9 FB 78 */	mr r25, r31
.L_80391650:
/* 80391650 0038E590  80 79 00 9C */	lwz r3, 0x9c(r25)
/* 80391654 0038E594  4B FF AE 39 */	bl update__Q28Morimura14TChallengePikiFv
/* 80391658 0038E598  3B 5A 00 01 */	addi r26, r26, 1
/* 8039165C 0038E59C  3B 39 00 04 */	addi r25, r25, 4
/* 80391660 0038E5A0  2C 1A 00 05 */	cmpwi r26, 5
/* 80391664 0038E5A4  41 80 FF EC */	blt .L_80391650
/* 80391668 0038E5A8  88 1F 01 36 */	lbz r0, 0x136(r31)
/* 8039166C 0038E5AC  28 00 00 00 */	cmplwi r0, 0
/* 80391670 0038E5B0  41 82 00 94 */	beq .L_80391704
/* 80391674 0038E5B4  C0 5F 01 3C */	lfs f2, 0x13c(r31)
/* 80391678 0038E5B8  C0 22 0C F8 */	lfs f1, lbl_8051F058@sda21(r2)
/* 8039167C 0038E5BC  C0 02 0C A8 */	lfs f0, lbl_8051F008@sda21(r2)
/* 80391680 0038E5C0  EC 22 00 72 */	fmuls f1, f2, f1
/* 80391684 0038E5C4  D0 3F 01 3C */	stfs f1, 0x13c(r31)
/* 80391688 0038E5C8  C0 3F 01 3C */	lfs f1, 0x13c(r31)
/* 8039168C 0038E5CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80391690 0038E5D0  40 80 00 F8 */	bge .L_80391788
/* 80391694 0038E5D4  38 00 00 00 */	li r0, 0
/* 80391698 0038E5D8  7F E3 FB 78 */	mr r3, r31
/* 8039169C 0038E5DC  98 1F 01 36 */	stb r0, 0x136(r31)
/* 803916A0 0038E5E0  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 803916A4 0038E5E4  48 00 0F 2D */	bl setStageName__Q28Morimura16TChallengeSelectFi
/* 803916A8 0038E5E8  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 803916AC 0038E5EC  2C 00 00 02 */	cmpwi r0, 2
/* 803916B0 0038E5F0  41 82 00 3C */	beq .L_803916EC
/* 803916B4 0038E5F4  40 80 00 14 */	bge .L_803916C8
/* 803916B8 0038E5F8  2C 00 00 00 */	cmpwi r0, 0
/* 803916BC 0038E5FC  41 82 00 18 */	beq .L_803916D4
/* 803916C0 0038E600  40 80 00 20 */	bge .L_803916E0
/* 803916C4 0038E604  48 00 00 C4 */	b .L_80391788
.L_803916C8:
/* 803916C8 0038E608  2C 00 00 04 */	cmpwi r0, 4
/* 803916CC 0038E60C  40 80 00 BC */	bge .L_80391788
/* 803916D0 0038E610  48 00 00 28 */	b .L_803916F8
.L_803916D4:
/* 803916D4 0038E614  38 00 00 01 */	li r0, 1
/* 803916D8 0038E618  90 1F 01 40 */	stw r0, 0x140(r31)
/* 803916DC 0038E61C  48 00 00 AC */	b .L_80391788
.L_803916E0:
/* 803916E0 0038E620  38 00 00 00 */	li r0, 0
/* 803916E4 0038E624  90 1F 01 40 */	stw r0, 0x140(r31)
/* 803916E8 0038E628  48 00 00 A0 */	b .L_80391788
.L_803916EC:
/* 803916EC 0038E62C  38 00 00 03 */	li r0, 3
/* 803916F0 0038E630  90 1F 01 40 */	stw r0, 0x140(r31)
/* 803916F4 0038E634  48 00 00 94 */	b .L_80391788
.L_803916F8:
/* 803916F8 0038E638  38 00 00 02 */	li r0, 2
/* 803916FC 0038E63C  90 1F 01 40 */	stw r0, 0x140(r31)
/* 80391700 0038E640  48 00 00 88 */	b .L_80391788
.L_80391704:
/* 80391704 0038E644  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80391708 0038E648  3C 00 43 30 */	lis r0, 0x4330
/* 8039170C 0038E64C  90 01 00 88 */	stw r0, 0x88(r1)
/* 80391710 0038E650  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80391714 0038E654  C8 22 0C 50 */	lfd f1, lbl_8051EFB0@sda21(r2)
/* 80391718 0038E658  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8039171C 0038E65C  C0 42 0C 28 */	lfs f2, lbl_8051EF88@sda21(r2)
/* 80391720 0038E660  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 80391724 0038E664  EC 00 08 28 */	fsubs f0, f0, f1
/* 80391728 0038E668  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 8039172C 0038E66C  40 82 00 5C */	bne .L_80391788
/* 80391730 0038E670  C0 22 0C 6C */	lfs f1, lbl_8051EFCC@sda21(r2)
/* 80391734 0038E674  C0 1F 01 4C */	lfs f0, 0x14c(r31)
/* 80391738 0038E678  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8039173C 0038E67C  40 82 00 4C */	bne .L_80391788
/* 80391740 0038E680  C0 3F 01 3C */	lfs f1, 0x13c(r31)
/* 80391744 0038E684  C0 02 0C E4 */	lfs f0, lbl_8051F044@sda21(r2)
/* 80391748 0038E688  EC 01 00 2A */	fadds f0, f1, f0
/* 8039174C 0038E68C  D0 1F 01 3C */	stfs f0, 0x13c(r31)
/* 80391750 0038E690  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80391754 0038E694  2C 00 00 01 */	cmpwi r0, 1
/* 80391758 0038E698  40 81 00 14 */	ble .L_8039176C
/* 8039175C 0038E69C  C0 3F 01 3C */	lfs f1, 0x13c(r31)
/* 80391760 0038E6A0  C0 02 0C F0 */	lfs f0, lbl_8051F050@sda21(r2)
/* 80391764 0038E6A4  EC 01 00 2A */	fadds f0, f1, f0
/* 80391768 0038E6A8  D0 1F 01 3C */	stfs f0, 0x13c(r31)
.L_8039176C:
/* 8039176C 0038E6AC  C0 3F 01 3C */	lfs f1, 0x13c(r31)
/* 80391770 0038E6B0  C0 02 0C 90 */	lfs f0, lbl_8051EFF0@sda21(r2)
/* 80391774 0038E6B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80391778 0038E6B8  40 81 00 10 */	ble .L_80391788
/* 8039177C 0038E6BC  D0 1F 01 3C */	stfs f0, 0x13c(r31)
/* 80391780 0038E6C0  38 00 FF FF */	li r0, -1
/* 80391784 0038E6C4  90 1F 01 40 */	stw r0, 0x140(r31)
.L_80391788:
/* 80391788 0038E6C8  C3 E2 0C 94 */	lfs f31, lbl_8051EFF4@sda21(r2)
/* 8039178C 0038E6CC  7F FA FB 78 */	mr r26, r31
/* 80391790 0038E6D0  C3 62 0C 28 */	lfs f27, lbl_8051EF88@sda21(r2)
/* 80391794 0038E6D4  3B 60 00 00 */	li r27, 0
/* 80391798 0038E6D8  C3 82 0C 90 */	lfs f28, lbl_8051EFF0@sda21(r2)
/* 8039179C 0038E6DC  C3 A2 0C 8C */	lfs f29, lbl_8051EFEC@sda21(r2)
/* 803917A0 0038E6E0  C3 C2 0C 6C */	lfs f30, lbl_8051EFCC@sda21(r2)
.L_803917A4:
/* 803917A4 0038E6E4  83 3A 00 B0 */	lwz r25, 0xb0(r26)
/* 803917A8 0038E6E8  C0 39 00 10 */	lfs f1, 0x10(r25)
/* 803917AC 0038E6EC  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 803917B0 0038E6F0  EC 21 00 28 */	fsubs f1, f1, f0
/* 803917B4 0038E6F4  FC 00 0A 10 */	fabs f0, f1
/* 803917B8 0038E6F8  FC 00 00 18 */	frsp f0, f0
/* 803917BC 0038E6FC  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 803917C0 0038E700  40 81 00 0C */	ble .L_803917CC
/* 803917C4 0038E704  C0 02 0C 34 */	lfs f0, lbl_8051EF94@sda21(r2)
/* 803917C8 0038E708  EC 21 00 32 */	fmuls f1, f1, f0
.L_803917CC:
/* 803917CC 0038E70C  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 803917D0 0038E710  EC 00 08 2A */	fadds f0, f0, f1
/* 803917D4 0038E714  D0 19 00 14 */	stfs f0, 0x14(r25)
/* 803917D8 0038E718  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 803917DC 0038E71C  FC 00 D8 40 */	fcmpo cr0, f0, f27
/* 803917E0 0038E720  40 80 00 08 */	bge .L_803917E8
/* 803917E4 0038E724  D3 79 00 14 */	stfs f27, 0x14(r25)
.L_803917E8:
/* 803917E8 0038E728  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 803917EC 0038E72C  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 803917F0 0038E730  40 81 00 08 */	ble .L_803917F8
/* 803917F4 0038E734  D3 99 00 14 */	stfs f28, 0x14(r25)
.L_803917F8:
/* 803917F8 0038E738  80 79 00 00 */	lwz r3, 0(r25)
/* 803917FC 0038E73C  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 80391800 0038E740  D3 83 00 CC */	stfs f28, 0xcc(r3)
/* 80391804 0038E744  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80391808 0038E748  81 83 00 00 */	lwz r12, 0(r3)
/* 8039180C 0038E74C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80391810 0038E750  7D 89 03 A6 */	mtctr r12
/* 80391814 0038E754  4E 80 04 21 */	bctrl 
/* 80391818 0038E758  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 8039181C 0038E75C  38 00 00 00 */	li r0, 0
/* 80391820 0038E760  80 79 00 04 */	lwz r3, 4(r25)
/* 80391824 0038E764  EC 1D 00 32 */	fmuls f0, f29, f0
/* 80391828 0038E768  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039182C 0038E76C  80 79 00 08 */	lwz r3, 8(r25)
/* 80391830 0038E770  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 80391834 0038E774  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80391838 0038E778  80 79 00 0C */	lwz r3, 0xc(r25)
/* 8039183C 0038E77C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80391840 0038E780  4C 41 13 82 */	cror 2, 1, 2
/* 80391844 0038E784  40 82 00 10 */	bne .L_80391854
/* 80391848 0038E788  80 79 00 04 */	lwz r3, 4(r25)
/* 8039184C 0038E78C  38 00 00 01 */	li r0, 1
/* 80391850 0038E790  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_80391854:
/* 80391854 0038E794  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80391858 0038E798  4C 41 13 82 */	cror 2, 1, 2
/* 8039185C 0038E79C  40 82 00 10 */	bne .L_8039186C
/* 80391860 0038E7A0  80 79 00 08 */	lwz r3, 8(r25)
/* 80391864 0038E7A4  38 00 00 01 */	li r0, 1
/* 80391868 0038E7A8  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8039186C:
/* 8039186C 0038E7AC  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80391870 0038E7B0  4C 41 13 82 */	cror 2, 1, 2
/* 80391874 0038E7B4  40 82 00 10 */	bne .L_80391884
/* 80391878 0038E7B8  80 79 00 0C */	lwz r3, 0xc(r25)
/* 8039187C 0038E7BC  38 00 00 01 */	li r0, 1
/* 80391880 0038E7C0  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_80391884:
/* 80391884 0038E7C4  80 7A 00 E0 */	lwz r3, 0xe0(r26)
/* 80391888 0038E7C8  38 80 00 FF */	li r4, 0xff
/* 8039188C 0038E7CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80391890 0038E7D0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80391894 0038E7D4  7D 89 03 A6 */	mtctr r12
/* 80391898 0038E7D8  4E 80 04 21 */	bctrl 
/* 8039189C 0038E7DC  C0 A2 0C 28 */	lfs f5, lbl_8051EF88@sda21(r2)
/* 803918A0 0038E7E0  C0 1F 01 3C */	lfs f0, 0x13c(r31)
/* 803918A4 0038E7E4  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 803918A8 0038E7E8  FC C0 28 90 */	fmr f6, f5
/* 803918AC 0038E7EC  EC FC 00 28 */	fsubs f7, f28, f0
/* 803918B0 0038E7F0  2C 00 00 02 */	cmpwi r0, 2
/* 803918B4 0038E7F4  41 82 00 34 */	beq .L_803918E8
/* 803918B8 0038E7F8  40 80 00 14 */	bge .L_803918CC
/* 803918BC 0038E7FC  2C 00 00 00 */	cmpwi r0, 0
/* 803918C0 0038E800  41 82 00 18 */	beq .L_803918D8
/* 803918C4 0038E804  40 80 00 1C */	bge .L_803918E0
/* 803918C8 0038E808  48 00 00 2C */	b .L_803918F4
.L_803918CC:
/* 803918CC 0038E80C  2C 00 00 04 */	cmpwi r0, 4
/* 803918D0 0038E810  40 80 00 24 */	bge .L_803918F4
/* 803918D4 0038E814  48 00 00 1C */	b .L_803918F0
.L_803918D8:
/* 803918D8 0038E818  C0 C2 0C FC */	lfs f6, lbl_8051F05C@sda21(r2)
/* 803918DC 0038E81C  48 00 00 18 */	b .L_803918F4
.L_803918E0:
/* 803918E0 0038E820  C0 C2 0D 00 */	lfs f6, lbl_8051F060@sda21(r2)
/* 803918E4 0038E824  48 00 00 10 */	b .L_803918F4
.L_803918E8:
/* 803918E8 0038E828  C0 A2 0D 04 */	lfs f5, lbl_8051F064@sda21(r2)
/* 803918EC 0038E82C  48 00 00 08 */	b .L_803918F4
.L_803918F0:
/* 803918F0 0038E830  C0 A2 0D 08 */	lfs f5, lbl_8051F068@sda21(r2)
.L_803918F4:
/* 803918F4 0038E834  80 7A 00 E0 */	lwz r3, 0xe0(r26)
/* 803918F8 0038E838  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 803918FC 0038E83C  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 80391900 0038E840  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 80391904 0038E844  EC 01 00 28 */	fsubs f0, f1, f0
/* 80391908 0038E848  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 8039190C 0038E84C  C0 23 00 D4 */	lfs f1, 0xd4(r3)
/* 80391910 0038E850  EC 63 10 28 */	fsubs f3, f3, f2
/* 80391914 0038E854  C0 83 00 D8 */	lfs f4, 0xd8(r3)
/* 80391918 0038E858  EC 45 00 32 */	fmuls f2, f5, f0
/* 8039191C 0038E85C  EC 06 00 F2 */	fmuls f0, f6, f3
/* 80391920 0038E860  EC 27 08 BA */	fmadds f1, f7, f2, f1
/* 80391924 0038E864  EC 07 20 3A */	fmadds f0, f7, f0, f4
/* 80391928 0038E868  D0 23 00 D4 */	stfs f1, 0xd4(r3)
/* 8039192C 0038E86C  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 80391930 0038E870  81 83 00 00 */	lwz r12, 0(r3)
/* 80391934 0038E874  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80391938 0038E878  7D 89 03 A6 */	mtctr r12
/* 8039193C 0038E87C  4E 80 04 21 */	bctrl 
/* 80391940 0038E880  3B 7B 00 01 */	addi r27, r27, 1
/* 80391944 0038E884  3B 5A 00 04 */	addi r26, r26, 4
/* 80391948 0038E888  2C 1B 00 02 */	cmpwi r27, 2
/* 8039194C 0038E88C  41 80 FE 58 */	blt .L_803917A4
/* 80391950 0038E890  88 1F 01 35 */	lbz r0, 0x135(r31)
/* 80391954 0038E894  28 00 00 00 */	cmplwi r0, 0
/* 80391958 0038E898  41 82 00 4C */	beq .L_803919A4
/* 8039195C 0038E89C  C0 1F 01 38 */	lfs f0, 0x138(r31)
/* 80391960 0038E8A0  3C 00 43 30 */	lis r0, 0x4330
/* 80391964 0038E8A4  C0 82 0D 0C */	lfs f4, lbl_8051F06C@sda21(r2)
/* 80391968 0038E8A8  90 01 00 88 */	stw r0, 0x88(r1)
/* 8039196C 0038E8AC  EC 00 20 2A */	fadds f0, f0, f4
/* 80391970 0038E8B0  C8 62 0C 50 */	lfd f3, lbl_8051EFB0@sda21(r2)
/* 80391974 0038E8B4  C0 22 0D 10 */	lfs f1, lbl_8051F070@sda21(r2)
/* 80391978 0038E8B8  D0 1F 01 38 */	stfs f0, 0x138(r31)
/* 8039197C 0038E8BC  80 0D 99 7C */	lwz r0, mDownOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391980 0038E8C0  C0 1F 01 38 */	lfs f0, 0x138(r31)
/* 80391984 0038E8C4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80391988 0038E8C8  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8039198C 0038E8CC  C8 41 00 88 */	lfd f2, 0x88(r1)
/* 80391990 0038E8D0  EC 42 18 28 */	fsubs f2, f2, f3
/* 80391994 0038E8D4  EC 24 08 BC */	fnmsubs f1, f4, f2, f1
/* 80391998 0038E8D8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8039199C 0038E8DC  40 81 00 08 */	ble .L_803919A4
/* 803919A0 0038E8E0  D0 3F 01 38 */	stfs f1, 0x138(r31)
.L_803919A4:
/* 803919A4 0038E8E4  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 803919A8 0038E8E8  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 803919AC 0038E8EC  54 00 10 3A */	slwi r0, r0, 2
/* 803919B0 0038E8F0  C0 1F 01 38 */	lfs f0, 0x138(r31)
/* 803919B4 0038E8F4  7C 63 00 2E */	lwzx r3, r3, r0
/* 803919B8 0038E8F8  80 63 00 08 */	lwz r3, 8(r3)
/* 803919BC 0038E8FC  D0 03 00 B8 */	stfs f0, 0xb8(r3)
/* 803919C0 0038E900  81 83 00 00 */	lwz r12, 0(r3)
/* 803919C4 0038E904  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803919C8 0038E908  7D 89 03 A6 */	mtctr r12
/* 803919CC 0038E90C  4E 80 04 21 */	bctrl 
/* 803919D0 0038E910  88 1F 01 35 */	lbz r0, 0x135(r31)
/* 803919D4 0038E914  28 00 00 00 */	cmplwi r0, 0
/* 803919D8 0038E918  41 82 01 84 */	beq .L_80391B5C
/* 803919DC 0038E91C  7F E4 FB 78 */	mr r4, r31
/* 803919E0 0038E920  38 A0 00 01 */	li r5, 1
/* 803919E4 0038E924  38 C0 00 00 */	li r6, 0
.L_803919E8:
/* 803919E8 0038E928  80 64 00 9C */	lwz r3, 0x9c(r4)
/* 803919EC 0038E92C  80 03 07 2C */	lwz r0, 0x72c(r3)
/* 803919F0 0038E930  2C 00 00 00 */	cmpwi r0, 0
/* 803919F4 0038E934  40 82 00 0C */	bne .L_80391A00
/* 803919F8 0038E938  38 00 00 01 */	li r0, 1
/* 803919FC 0038E93C  48 00 00 3C */	b .L_80391A38
.L_80391A00:
/* 80391A00 0038E940  2C 00 00 32 */	cmpwi r0, 0x32
/* 80391A04 0038E944  40 81 00 08 */	ble .L_80391A0C
/* 80391A08 0038E948  38 00 00 32 */	li r0, 0x32
.L_80391A0C:
/* 80391A0C 0038E94C  7C 09 03 A6 */	mtctr r0
/* 80391A10 0038E950  2C 00 00 00 */	cmpwi r0, 0
/* 80391A14 0038E954  40 81 00 20 */	ble .L_80391A34
.L_80391A18:
/* 80391A18 0038E958  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80391A1C 0038E95C  2C 00 00 00 */	cmpwi r0, 0
/* 80391A20 0038E960  41 82 00 0C */	beq .L_80391A2C
/* 80391A24 0038E964  38 00 00 00 */	li r0, 0
/* 80391A28 0038E968  48 00 00 10 */	b .L_80391A38
.L_80391A2C:
/* 80391A2C 0038E96C  38 63 00 24 */	addi r3, r3, 0x24
/* 80391A30 0038E970  42 00 FF E8 */	bdnz .L_80391A18
.L_80391A34:
/* 80391A34 0038E974  38 00 00 01 */	li r0, 1
.L_80391A38:
/* 80391A38 0038E978  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80391A3C 0038E97C  40 82 00 08 */	bne .L_80391A44
/* 80391A40 0038E980  38 A0 00 00 */	li r5, 0
.L_80391A44:
/* 80391A44 0038E984  38 C6 00 01 */	addi r6, r6, 1
/* 80391A48 0038E988  38 84 00 04 */	addi r4, r4, 4
/* 80391A4C 0038E98C  2C 06 00 05 */	cmpwi r6, 5
/* 80391A50 0038E990  41 80 FF 98 */	blt .L_803919E8
/* 80391A54 0038E994  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 80391A58 0038E998  41 82 01 04 */	beq .L_80391B5C
/* 80391A5C 0038E99C  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 80391A60 0038E9A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80391A64 0038E9A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80391A68 0038E9A8  7D 89 03 A6 */	mtctr r12
/* 80391A6C 0038E9AC  4E 80 04 21 */	bctrl 
/* 80391A70 0038E9B0  80 0D 99 84 */	lwz r0, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391A74 0038E9B4  2C 00 00 00 */	cmpwi r0, 0
/* 80391A78 0038E9B8  40 81 00 A8 */	ble .L_80391B20
/* 80391A7C 0038E9BC  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 80391A80 0038E9C0  3C C0 80 4C */	lis r6, __vt__Q25efx2d7TBaseIF@ha
/* 80391A84 0038E9C4  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80391A88 0038E9C8  3C A0 80 4C */	lis r5, __vt__Q25efx2d5TBase@ha
/* 80391A8C 0038E9CC  54 00 10 3A */	slwi r0, r0, 2
/* 80391A90 0038E9D0  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple1@ha
/* 80391A94 0038E9D4  7D 03 00 2E */	lwzx r8, r3, r0
/* 80391A98 0038E9D8  3C E0 80 4C */	lis r7, __vt__Q25efx2d3Arg@ha
/* 80391A9C 0038E9DC  3C 60 80 4E */	lis r3, __vt__Q25efx2d14T2DChalDiveEnd@ha
/* 80391AA0 0038E9E0  39 26 14 F0 */	addi r9, r6, __vt__Q25efx2d7TBaseIF@l
/* 80391AA4 0038E9E4  81 68 00 08 */	lwz r11, 8(r8)
/* 80391AA8 0038E9E8  39 05 14 D8 */	addi r8, r5, __vt__Q25efx2d5TBase@l
/* 80391AAC 0038E9EC  38 C4 74 88 */	addi r6, r4, __vt__Q25efx2d8TSimple1@l
/* 80391AB0 0038E9F0  39 47 15 14 */	addi r10, r7, __vt__Q25efx2d3Arg@l
/* 80391AB4 0038E9F4  C0 2B 00 8C */	lfs f1, 0x8c(r11)
/* 80391AB8 0038E9F8  38 03 50 90 */	addi r0, r3, __vt__Q25efx2d14T2DChalDiveEnd@l
/* 80391ABC 0038E9FC  C0 0B 00 9C */	lfs f0, 0x9c(r11)
/* 80391AC0 0038EA00  38 E0 00 00 */	li r7, 0
/* 80391AC4 0038EA04  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 80391AC8 0038EA08  38 A0 00 06 */	li r5, 6
/* 80391ACC 0038EA0C  38 61 00 64 */	addi r3, r1, 0x64
/* 80391AD0 0038EA10  38 81 00 74 */	addi r4, r1, 0x74
/* 80391AD4 0038EA14  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80391AD8 0038EA18  81 61 00 34 */	lwz r11, 0x34(r1)
/* 80391ADC 0038EA1C  91 21 00 64 */	stw r9, 0x64(r1)
/* 80391AE0 0038EA20  81 21 00 38 */	lwz r9, 0x38(r1)
/* 80391AE4 0038EA24  91 61 00 24 */	stw r11, 0x24(r1)
/* 80391AE8 0038EA28  91 21 00 28 */	stw r9, 0x28(r1)
/* 80391AEC 0038EA2C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80391AF0 0038EA30  91 01 00 64 */	stw r8, 0x64(r1)
/* 80391AF4 0038EA34  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80391AF8 0038EA38  90 C1 00 64 */	stw r6, 0x64(r1)
/* 80391AFC 0038EA3C  91 41 00 7C */	stw r10, 0x7c(r1)
/* 80391B00 0038EA40  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 80391B04 0038EA44  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80391B08 0038EA48  98 E1 00 68 */	stb r7, 0x68(r1)
/* 80391B0C 0038EA4C  98 E1 00 69 */	stb r7, 0x69(r1)
/* 80391B10 0038EA50  B0 A1 00 6C */	sth r5, 0x6c(r1)
/* 80391B14 0038EA54  90 E1 00 70 */	stw r7, 0x70(r1)
/* 80391B18 0038EA58  90 01 00 64 */	stw r0, 0x64(r1)
/* 80391B1C 0038EA5C  48 02 7D 15 */	bl create__Q25efx2d8TSimple1FPQ25efx2d3Arg
.L_80391B20:
/* 80391B20 0038EA60  38 00 00 00 */	li r0, 0
/* 80391B24 0038EA64  98 1F 01 35 */	stb r0, 0x135(r31)
/* 80391B28 0038EA68  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80391B2C 0038EA6C  28 00 00 00 */	cmplwi r0, 0
/* 80391B30 0038EA70  41 82 00 10 */	beq .L_80391B40
/* 80391B34 0038EA74  7F E3 FB 78 */	mr r3, r31
/* 80391B38 0038EA78  48 00 10 31 */	bl reset__Q28Morimura16TChallengeSelectFv
/* 80391B3C 0038EA7C  48 00 00 20 */	b .L_80391B5C
.L_80391B40:
/* 80391B40 0038EA80  7F E3 FB 78 */	mr r3, r31
/* 80391B44 0038EA84  81 9F 00 00 */	lwz r12, 0(r31)
/* 80391B48 0038EA88  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80391B4C 0038EA8C  7D 89 03 A6 */	mtctr r12
/* 80391B50 0038EA90  4E 80 04 21 */	bctrl 
/* 80391B54 0038EA94  38 80 00 00 */	li r4, 0
/* 80391B58 0038EA98  48 0C 04 39 */	bl endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
.L_80391B5C:
/* 80391B5C 0038EA9C  80 0D 99 84 */	lwz r0, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391B60 0038EAA0  2C 00 00 00 */	cmpwi r0, 0
/* 80391B64 0038EAA4  41 82 00 80 */	beq .L_80391BE4
/* 80391B68 0038EAA8  88 1F 01 44 */	lbz r0, 0x144(r31)
/* 80391B6C 0038EAAC  28 00 00 00 */	cmplwi r0, 0
/* 80391B70 0038EAB0  40 82 00 74 */	bne .L_80391BE4
/* 80391B74 0038EAB4  38 00 00 01 */	li r0, 1
/* 80391B78 0038EAB8  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 80391B7C 0038EABC  98 1F 01 44 */	stb r0, 0x144(r31)
/* 80391B80 0038EAC0  38 03 15 14 */	addi r0, r3, __vt__Q25efx2d3Arg@l
/* 80391B84 0038EAC4  38 81 00 58 */	addi r4, r1, 0x58
/* 80391B88 0038EAC8  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 80391B8C 0038EACC  80 BF 00 94 */	lwz r5, 0x94(r31)
/* 80391B90 0038EAD0  54 63 10 3A */	slwi r3, r3, 2
/* 80391B94 0038EAD4  7C 65 18 2E */	lwzx r3, r5, r3
/* 80391B98 0038EAD8  80 63 00 08 */	lwz r3, 8(r3)
/* 80391B9C 0038EADC  C0 23 00 8C */	lfs f1, 0x8c(r3)
/* 80391BA0 0038EAE0  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 80391BA4 0038EAE4  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80391BA8 0038EAE8  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80391BAC 0038EAEC  80 A1 00 2C */	lwz r5, 0x2c(r1)
/* 80391BB0 0038EAF0  80 61 00 30 */	lwz r3, 0x30(r1)
/* 80391BB4 0038EAF4  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 80391BB8 0038EAF8  90 61 00 20 */	stw r3, 0x20(r1)
/* 80391BBC 0038EAFC  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80391BC0 0038EB00  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80391BC4 0038EB04  90 01 00 60 */	stw r0, 0x60(r1)
/* 80391BC8 0038EB08  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 80391BCC 0038EB0C  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80391BD0 0038EB10  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 80391BD4 0038EB14  81 83 00 00 */	lwz r12, 0(r3)
/* 80391BD8 0038EB18  81 8C 00 08 */	lwz r12, 8(r12)
/* 80391BDC 0038EB1C  7D 89 03 A6 */	mtctr r12
/* 80391BE0 0038EB20  4E 80 04 21 */	bctrl 
.L_80391BE4:
/* 80391BE4 0038EB24  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80391BE8 0038EB28  28 00 00 00 */	cmplwi r0, 0
/* 80391BEC 0038EB2C  41 82 00 20 */	beq .L_80391C0C
/* 80391BF0 0038EB30  88 0D 99 82 */	lbz r0, mForceDemoStart__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391BF4 0038EB34  28 00 00 00 */	cmplwi r0, 0
/* 80391BF8 0038EB38  41 82 00 14 */	beq .L_80391C0C
/* 80391BFC 0038EB3C  38 00 00 00 */	li r0, 0
/* 80391C00 0038EB40  7F E3 FB 78 */	mr r3, r31
/* 80391C04 0038EB44  98 0D 99 82 */	stb r0, mForceDemoStart__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80391C08 0038EB48  48 00 10 A1 */	bl demoStart__Q28Morimura16TChallengeSelectFv
.L_80391C0C:
/* 80391C0C 0038EB4C  38 60 00 00 */	li r3, 0
/* 80391C10 0038EB50  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 80391C14 0038EB54  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 80391C18 0038EB58  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 80391C1C 0038EB5C  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 80391C20 0038EB60  E3 A1 00 D8 */	psq_l f29, 216(r1), 0, qr0
/* 80391C24 0038EB64  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 80391C28 0038EB68  E3 81 00 C8 */	psq_l f28, 200(r1), 0, qr0
/* 80391C2C 0038EB6C  CB 81 00 C0 */	lfd f28, 0xc0(r1)
/* 80391C30 0038EB70  E3 61 00 B8 */	psq_l f27, 184(r1), 0, qr0
/* 80391C34 0038EB74  CB 61 00 B0 */	lfd f27, 0xb0(r1)
/* 80391C38 0038EB78  BB 21 00 94 */	lmw r25, 0x94(r1)
/* 80391C3C 0038EB7C  80 01 01 04 */	lwz r0, 0x104(r1)
/* 80391C40 0038EB80  7C 08 03 A6 */	mtlr r0
/* 80391C44 0038EB84  38 21 01 00 */	addi r1, r1, 0x100
/* 80391C48 0038EB88  4E 80 00 20 */	blr 
.endfn doUpdate__Q28Morimura16TChallengeSelectFv
.endif

.fn doDraw__Q28Morimura16TChallengeSelectFR8Graphics, global
/* 80391C4C 0038EB8C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80391C50 0038EB90  7C 08 02 A6 */	mflr r0
/* 80391C54 0038EB94  90 01 00 94 */	stw r0, 0x94(r1)
/* 80391C58 0038EB98  BE E1 00 6C */	stmw r23, 0x6c(r1)
/* 80391C5C 0038EB9C  7C 7C 1B 78 */	mr r28, r3
/* 80391C60 0038EBA0  7C 9D 23 78 */	mr r29, r4
/* 80391C64 0038EBA4  3B FD 01 90 */	addi r31, r29, 0x190
/* 80391C68 0038EBA8  7F E5 FB 78 */	mr r5, r31
/* 80391C6C 0038EBAC  80 63 00 80 */	lwz r3, 0x80(r3)
/* 80391C70 0038EBB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80391C74 0038EBB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80391C78 0038EBB8  7D 89 03 A6 */	mtctr r12
/* 80391C7C 0038EBBC  4E 80 04 21 */	bctrl 
/* 80391C80 0038EBC0  38 7D 00 BC */	addi r3, r29, 0xbc
/* 80391C84 0038EBC4  81 9D 00 BC */	lwz r12, 0xbc(r29)
/* 80391C88 0038EBC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80391C8C 0038EBCC  7D 89 03 A6 */	mtctr r12
/* 80391C90 0038EBD0  4E 80 04 21 */	bctrl 
/* 80391C94 0038EBD4  3A E0 00 00 */	li r23, 0
/* 80391C98 0038EBD8  7F 98 E3 78 */	mr r24, r28
.L_80391C9C:
/* 80391C9C 0038EBDC  83 58 00 9C */	lwz r26, 0x9c(r24)
/* 80391CA0 0038EBE0  80 7A 07 2C */	lwz r3, 0x72c(r26)
/* 80391CA4 0038EBE4  2C 03 00 32 */	cmpwi r3, 0x32
/* 80391CA8 0038EBE8  40 81 00 08 */	ble .L_80391CB0
/* 80391CAC 0038EBEC  38 60 00 32 */	li r3, 0x32
.L_80391CB0:
/* 80391CB0 0038EBF0  3B 63 FF FF */	addi r27, r3, -1
/* 80391CB4 0038EBF4  1C 1B 00 24 */	mulli r0, r27, 0x24
/* 80391CB8 0038EBF8  7F 3A 02 14 */	add r25, r26, r0
/* 80391CBC 0038EBFC  48 00 01 38 */	b .L_80391DF4
.L_80391CC0:
/* 80391CC0 0038EC00  83 DA 00 00 */	lwz r30, 0(r26)
/* 80391CC4 0038EC04  38 80 00 00 */	li r4, 0
/* 80391CC8 0038EC08  C0 39 00 30 */	lfs f1, 0x30(r25)
/* 80391CCC 0038EC0C  38 A0 00 00 */	li r5, 0
/* 80391CD0 0038EC10  7F C3 F3 78 */	mr r3, r30
/* 80391CD4 0038EC14  C0 9E 00 28 */	lfs f4, 0x28(r30)
/* 80391CD8 0038EC18  81 9E 00 00 */	lwz r12, 0(r30)
/* 80391CDC 0038EC1C  38 C0 00 00 */	li r6, 0
/* 80391CE0 0038EC20  C0 7E 00 20 */	lfs f3, 0x20(r30)
/* 80391CE4 0038EC24  C0 5E 00 2C */	lfs f2, 0x2c(r30)
/* 80391CE8 0038EC28  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 80391CEC 0038EC2C  EC 64 18 28 */	fsubs f3, f4, f3
/* 80391CF0 0038EC30  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 80391CF4 0038EC34  EC 82 00 28 */	fsubs f4, f2, f0
/* 80391CF8 0038EC38  C0 59 00 34 */	lfs f2, 0x34(r25)
/* 80391CFC 0038EC3C  7D 89 03 A6 */	mtctr r12
/* 80391D00 0038EC40  4E 80 04 21 */	bctrl 
/* 80391D04 0038EC44  7F C3 F3 78 */	mr r3, r30
/* 80391D08 0038EC48  81 9E 00 00 */	lwz r12, 0(r30)
/* 80391D0C 0038EC4C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80391D10 0038EC50  7D 89 03 A6 */	mtctr r12
/* 80391D14 0038EC54  4E 80 04 21 */	bctrl 
/* 80391D18 0038EC58  83 DA 00 04 */	lwz r30, 4(r26)
/* 80391D1C 0038EC5C  38 80 00 00 */	li r4, 0
/* 80391D20 0038EC60  C0 99 00 30 */	lfs f4, 0x30(r25)
/* 80391D24 0038EC64  38 A0 00 00 */	li r5, 0
/* 80391D28 0038EC68  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 80391D2C 0038EC6C  7F C3 F3 78 */	mr r3, r30
/* 80391D30 0038EC70  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 80391D34 0038EC74  38 C0 00 00 */	li r6, 0
/* 80391D38 0038EC78  81 9E 00 00 */	lwz r12, 0(r30)
/* 80391D3C 0038EC7C  EC 61 00 28 */	fsubs f3, f1, f0
/* 80391D40 0038EC80  C0 1A 00 14 */	lfs f0, 0x14(r26)
/* 80391D44 0038EC84  C0 B9 00 34 */	lfs f5, 0x34(r25)
/* 80391D48 0038EC88  C0 5A 00 18 */	lfs f2, 0x18(r26)
/* 80391D4C 0038EC8C  EC 24 00 28 */	fsubs f1, f4, f0
/* 80391D50 0038EC90  C0 9E 00 2C */	lfs f4, 0x2c(r30)
/* 80391D54 0038EC94  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 80391D58 0038EC98  EC 45 10 28 */	fsubs f2, f5, f2
/* 80391D5C 0038EC9C  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 80391D60 0038ECA0  FC 60 18 50 */	fneg f3, f3
/* 80391D64 0038ECA4  EC 84 00 28 */	fsubs f4, f4, f0
/* 80391D68 0038ECA8  7D 89 03 A6 */	mtctr r12
/* 80391D6C 0038ECAC  4E 80 04 21 */	bctrl 
/* 80391D70 0038ECB0  7F C3 F3 78 */	mr r3, r30
/* 80391D74 0038ECB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80391D78 0038ECB8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80391D7C 0038ECBC  7D 89 03 A6 */	mtctr r12
/* 80391D80 0038ECC0  4E 80 04 21 */	bctrl 
/* 80391D84 0038ECC4  83 DA 00 08 */	lwz r30, 8(r26)
/* 80391D88 0038ECC8  38 80 00 00 */	li r4, 0
/* 80391D8C 0038ECCC  C0 39 00 30 */	lfs f1, 0x30(r25)
/* 80391D90 0038ECD0  38 A0 00 00 */	li r5, 0
/* 80391D94 0038ECD4  7F C3 F3 78 */	mr r3, r30
/* 80391D98 0038ECD8  C0 1A 00 1C */	lfs f0, 0x1c(r26)
/* 80391D9C 0038ECDC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80391DA0 0038ECE0  38 C0 00 00 */	li r6, 0
/* 80391DA4 0038ECE4  C0 59 00 34 */	lfs f2, 0x34(r25)
/* 80391DA8 0038ECE8  EC 21 00 28 */	fsubs f1, f1, f0
/* 80391DAC 0038ECEC  C0 1A 00 20 */	lfs f0, 0x20(r26)
/* 80391DB0 0038ECF0  C0 BE 00 28 */	lfs f5, 0x28(r30)
/* 80391DB4 0038ECF4  C0 7E 00 20 */	lfs f3, 0x20(r30)
/* 80391DB8 0038ECF8  EC 42 00 28 */	fsubs f2, f2, f0
/* 80391DBC 0038ECFC  C0 9E 00 2C */	lfs f4, 0x2c(r30)
/* 80391DC0 0038ED00  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 80391DC4 0038ED04  EC 65 18 28 */	fsubs f3, f5, f3
/* 80391DC8 0038ED08  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 80391DCC 0038ED0C  EC 84 00 28 */	fsubs f4, f4, f0
/* 80391DD0 0038ED10  7D 89 03 A6 */	mtctr r12
/* 80391DD4 0038ED14  4E 80 04 21 */	bctrl 
/* 80391DD8 0038ED18  7F C3 F3 78 */	mr r3, r30
/* 80391DDC 0038ED1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80391DE0 0038ED20  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80391DE4 0038ED24  7D 89 03 A6 */	mtctr r12
/* 80391DE8 0038ED28  4E 80 04 21 */	bctrl 
/* 80391DEC 0038ED2C  3B 39 FF DC */	addi r25, r25, -36
/* 80391DF0 0038ED30  3B 7B FF FF */	addi r27, r27, -1
.L_80391DF4:
/* 80391DF4 0038ED34  2C 1B 00 00 */	cmpwi r27, 0
/* 80391DF8 0038ED38  40 80 FE C8 */	bge .L_80391CC0
/* 80391DFC 0038ED3C  3A F7 00 01 */	addi r23, r23, 1
/* 80391E00 0038ED40  3B 18 00 04 */	addi r24, r24, 4
/* 80391E04 0038ED44  2C 17 00 05 */	cmpwi r23, 5
/* 80391E08 0038ED48  41 80 FE 94 */	blt .L_80391C9C
/* 80391E0C 0038ED4C  7F 83 E3 78 */	mr r3, r28
/* 80391E10 0038ED50  3B C0 00 00 */	li r30, 0
/* 80391E14 0038ED54  81 9C 00 00 */	lwz r12, 0(r28)
/* 80391E18 0038ED58  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80391E1C 0038ED5C  7D 89 03 A6 */	mtctr r12
/* 80391E20 0038ED60  4E 80 04 21 */	bctrl 
/* 80391E24 0038ED64  80 63 02 24 */	lwz r3, 0x224(r3)
/* 80391E28 0038ED68  88 03 00 D4 */	lbz r0, 0xd4(r3)
/* 80391E2C 0038ED6C  28 00 00 00 */	cmplwi r0, 0
/* 80391E30 0038ED70  41 82 00 74 */	beq .L_80391EA4
/* 80391E34 0038ED74  7F 83 E3 78 */	mr r3, r28
/* 80391E38 0038ED78  3B C0 00 01 */	li r30, 1
/* 80391E3C 0038ED7C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80391E40 0038ED80  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80391E44 0038ED84  7D 89 03 A6 */	mtctr r12
/* 80391E48 0038ED88  4E 80 04 21 */	bctrl 
/* 80391E4C 0038ED8C  80 63 02 24 */	lwz r3, 0x224(r3)
/* 80391E50 0038ED90  88 03 00 D5 */	lbz r0, 0xd5(r3)
/* 80391E54 0038ED94  28 00 00 00 */	cmplwi r0, 0
/* 80391E58 0038ED98  41 82 00 28 */	beq .L_80391E80
/* 80391E5C 0038ED9C  88 7C 01 28 */	lbz r3, 0x128(r28)
/* 80391E60 0038EDA0  38 03 00 14 */	addi r0, r3, 0x14
/* 80391E64 0038EDA4  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391E68 0038EDA8  88 1C 01 28 */	lbz r0, 0x128(r28)
/* 80391E6C 0038EDAC  28 00 00 C8 */	cmplwi r0, 0xc8
/* 80391E70 0038EDB0  40 81 00 FC */	ble .L_80391F6C
/* 80391E74 0038EDB4  38 00 00 C8 */	li r0, 0xc8
/* 80391E78 0038EDB8  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391E7C 0038EDBC  48 00 00 F0 */	b .L_80391F6C
.L_80391E80:
/* 80391E80 0038EDC0  88 7C 01 28 */	lbz r3, 0x128(r28)
/* 80391E84 0038EDC4  28 03 00 14 */	cmplwi r3, 0x14
/* 80391E88 0038EDC8  40 81 00 10 */	ble .L_80391E98
/* 80391E8C 0038EDCC  38 03 FF EC */	addi r0, r3, -20
/* 80391E90 0038EDD0  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391E94 0038EDD4  48 00 00 D8 */	b .L_80391F6C
.L_80391E98:
/* 80391E98 0038EDD8  38 00 00 00 */	li r0, 0
/* 80391E9C 0038EDDC  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391EA0 0038EDE0  48 00 00 CC */	b .L_80391F6C
.L_80391EA4:
/* 80391EA4 0038EDE4  80 7C 00 88 */	lwz r3, 0x88(r28)
/* 80391EA8 0038EDE8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80391EAC 0038EDEC  2C 00 00 00 */	cmpwi r0, 0
/* 80391EB0 0038EDF0  41 82 00 58 */	beq .L_80391F08
/* 80391EB4 0038EDF4  2C 00 00 03 */	cmpwi r0, 3
/* 80391EB8 0038EDF8  3B C0 00 01 */	li r30, 1
/* 80391EBC 0038EDFC  40 82 00 28 */	bne .L_80391EE4
/* 80391EC0 0038EE00  88 7C 01 28 */	lbz r3, 0x128(r28)
/* 80391EC4 0038EE04  28 03 00 19 */	cmplwi r3, 0x19
/* 80391EC8 0038EE08  40 81 00 10 */	ble .L_80391ED8
/* 80391ECC 0038EE0C  38 03 FF E7 */	addi r0, r3, -25
/* 80391ED0 0038EE10  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391ED4 0038EE14  48 00 00 98 */	b .L_80391F6C
.L_80391ED8:
/* 80391ED8 0038EE18  38 00 00 00 */	li r0, 0
/* 80391EDC 0038EE1C  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391EE0 0038EE20  48 00 00 8C */	b .L_80391F6C
.L_80391EE4:
/* 80391EE4 0038EE24  88 7C 01 28 */	lbz r3, 0x128(r28)
/* 80391EE8 0038EE28  38 03 00 14 */	addi r0, r3, 0x14
/* 80391EEC 0038EE2C  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391EF0 0038EE30  88 1C 01 28 */	lbz r0, 0x128(r28)
/* 80391EF4 0038EE34  28 00 00 C8 */	cmplwi r0, 0xc8
/* 80391EF8 0038EE38  40 81 00 74 */	ble .L_80391F6C
/* 80391EFC 0038EE3C  38 00 00 C8 */	li r0, 0xc8
/* 80391F00 0038EE40  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391F04 0038EE44  48 00 00 68 */	b .L_80391F6C
.L_80391F08:
/* 80391F08 0038EE48  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 80391F0C 0038EE4C  80 63 00 80 */	lwz r3, 0x80(r3)
/* 80391F10 0038EE50  7C 60 00 34 */	cntlzw r0, r3
/* 80391F14 0038EE54  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80391F18 0038EE58  40 82 00 54 */	bne .L_80391F6C
/* 80391F1C 0038EE5C  2C 03 00 03 */	cmpwi r3, 3
/* 80391F20 0038EE60  3B C0 00 01 */	li r30, 1
/* 80391F24 0038EE64  40 82 00 28 */	bne .L_80391F4C
/* 80391F28 0038EE68  88 7C 01 28 */	lbz r3, 0x128(r28)
/* 80391F2C 0038EE6C  28 03 00 1E */	cmplwi r3, 0x1e
/* 80391F30 0038EE70  40 81 00 10 */	ble .L_80391F40
/* 80391F34 0038EE74  38 03 FF E2 */	addi r0, r3, -30
/* 80391F38 0038EE78  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391F3C 0038EE7C  48 00 00 30 */	b .L_80391F6C
.L_80391F40:
/* 80391F40 0038EE80  38 00 00 00 */	li r0, 0
/* 80391F44 0038EE84  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391F48 0038EE88  48 00 00 24 */	b .L_80391F6C
.L_80391F4C:
/* 80391F4C 0038EE8C  88 7C 01 28 */	lbz r3, 0x128(r28)
/* 80391F50 0038EE90  38 03 00 14 */	addi r0, r3, 0x14
/* 80391F54 0038EE94  98 1C 01 28 */	stb r0, 0x128(r28)
/* 80391F58 0038EE98  88 1C 01 28 */	lbz r0, 0x128(r28)
/* 80391F5C 0038EE9C  28 00 00 C8 */	cmplwi r0, 0xc8
/* 80391F60 0038EEA0  40 81 00 0C */	ble .L_80391F6C
/* 80391F64 0038EEA4  38 00 00 C8 */	li r0, 0xc8
/* 80391F68 0038EEA8  98 1C 01 28 */	stb r0, 0x128(r28)
.L_80391F6C:
/* 80391F6C 0038EEAC  38 7D 01 90 */	addi r3, r29, 0x190
/* 80391F70 0038EEB0  81 9D 01 90 */	lwz r12, 0x190(r29)
/* 80391F74 0038EEB4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80391F78 0038EEB8  7D 89 03 A6 */	mtctr r12
/* 80391F7C 0038EEBC  4E 80 04 21 */	bctrl 
/* 80391F80 0038EEC0  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80391F84 0038EEC4  41 82 00 CC */	beq .L_80392050
/* 80391F88 0038EEC8  38 00 FF FF */	li r0, -1
/* 80391F8C 0038EECC  39 20 00 00 */	li r9, 0
/* 80391F90 0038EED0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80391F94 0038EED4  39 00 00 50 */	li r8, 0x50
/* 80391F98 0038EED8  88 1C 01 28 */	lbz r0, 0x128(r28)
/* 80391F9C 0038EEDC  7F E3 FB 78 */	mr r3, r31
/* 80391FA0 0038EEE0  99 21 00 37 */	stb r9, 0x37(r1)
/* 80391FA4 0038EEE4  38 81 00 20 */	addi r4, r1, 0x20
/* 80391FA8 0038EEE8  38 A1 00 24 */	addi r5, r1, 0x24
/* 80391FAC 0038EEEC  38 C1 00 28 */	addi r6, r1, 0x28
/* 80391FB0 0038EEF0  99 21 00 34 */	stb r9, 0x34(r1)
/* 80391FB4 0038EEF4  38 E1 00 2C */	addi r7, r1, 0x2c
/* 80391FB8 0038EEF8  99 21 00 35 */	stb r9, 0x35(r1)
/* 80391FBC 0038EEFC  99 01 00 36 */	stb r8, 0x36(r1)
/* 80391FC0 0038EF00  98 01 00 37 */	stb r0, 0x37(r1)
/* 80391FC4 0038EF04  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80391FC8 0038EF08  90 01 00 0C */	stw r0, 0xc(r1)
/* 80391FCC 0038EF0C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80391FD0 0038EF10  90 01 00 28 */	stw r0, 0x28(r1)
/* 80391FD4 0038EF14  90 01 00 24 */	stw r0, 0x24(r1)
/* 80391FD8 0038EF18  90 01 00 20 */	stw r0, 0x20(r1)
/* 80391FDC 0038EF1C  4B CA 46 B1 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 80391FE0 0038EF20  38 60 00 00 */	li r3, 0
/* 80391FE4 0038EF24  4B D5 71 75 */	bl GXSetAlphaUpdate
/* 80391FE8 0038EF28  48 09 12 3D */	bl getRenderModeObj__6SystemFv
/* 80391FEC 0038EF2C  A3 43 00 06 */	lhz r26, 6(r3)
/* 80391FF0 0038EF30  48 09 12 35 */	bl getRenderModeObj__6SystemFv
/* 80391FF4 0038EF34  A0 83 00 04 */	lhz r4, 4(r3)
/* 80391FF8 0038EF38  3C 00 43 30 */	lis r0, 0x4330
/* 80391FFC 0038EF3C  C0 62 0C 28 */	lfs f3, lbl_8051EF88@sda21(r2)
/* 80392000 0038EF40  7F E3 FB 78 */	mr r3, r31
/* 80392004 0038EF44  90 81 00 5C */	stw r4, 0x5c(r1)
/* 80392008 0038EF48  38 81 00 48 */	addi r4, r1, 0x48
/* 8039200C 0038EF4C  C8 42 0C A0 */	lfd f2, lbl_8051F000@sda21(r2)
/* 80392010 0038EF50  90 01 00 58 */	stw r0, 0x58(r1)
/* 80392014 0038EF54  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 80392018 0038EF58  93 41 00 64 */	stw r26, 0x64(r1)
/* 8039201C 0038EF5C  EC 20 10 28 */	fsubs f1, f0, f2
/* 80392020 0038EF60  90 01 00 60 */	stw r0, 0x60(r1)
/* 80392024 0038EF64  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 80392028 0038EF68  EC 23 08 2A */	fadds f1, f3, f1
/* 8039202C 0038EF6C  D0 61 00 48 */	stfs f3, 0x48(r1)
/* 80392030 0038EF70  EC 00 10 28 */	fsubs f0, f0, f2
/* 80392034 0038EF74  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 80392038 0038EF78  EC 03 00 2A */	fadds f0, f3, f0
/* 8039203C 0038EF7C  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80392040 0038EF80  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80392044 0038EF84  4B CA 47 91 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 80392048 0038EF88  38 60 00 01 */	li r3, 1
/* 8039204C 0038EF8C  4B D5 71 0D */	bl GXSetAlphaUpdate
.L_80392050:
/* 80392050 0038EF90  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 80392054 0038EF94  7F A4 EB 78 */	mr r4, r29
/* 80392058 0038EF98  7F E5 FB 78 */	mr r5, r31
/* 8039205C 0038EF9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80392060 0038EFA0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80392064 0038EFA4  7D 89 03 A6 */	mtctr r12
/* 80392068 0038EFA8  4E 80 04 21 */	bctrl 
/* 8039206C 0038EFAC  80 7C 00 88 */	lwz r3, 0x88(r28)
/* 80392070 0038EFB0  7F A4 EB 78 */	mr r4, r29
/* 80392074 0038EFB4  7F E5 FB 78 */	mr r5, r31
/* 80392078 0038EFB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039207C 0038EFBC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80392080 0038EFC0  7D 89 03 A6 */	mtctr r12
/* 80392084 0038EFC4  4E 80 04 21 */	bctrl 
/* 80392088 0038EFC8  88 7C 00 44 */	lbz r3, 0x44(r28)
/* 8039208C 0038EFCC  38 00 FF FF */	li r0, -1
/* 80392090 0038EFD0  90 01 00 30 */	stw r0, 0x30(r1)
/* 80392094 0038EFD4  38 00 00 00 */	li r0, 0
/* 80392098 0038EFD8  21 03 00 FF */	subfic r8, r3, 0xff
/* 8039209C 0038EFDC  7F E3 FB 78 */	mr r3, r31
/* 803920A0 0038EFE0  98 01 00 30 */	stb r0, 0x30(r1)
/* 803920A4 0038EFE4  38 81 00 10 */	addi r4, r1, 0x10
/* 803920A8 0038EFE8  38 A1 00 14 */	addi r5, r1, 0x14
/* 803920AC 0038EFEC  38 C1 00 18 */	addi r6, r1, 0x18
/* 803920B0 0038EFF0  98 01 00 31 */	stb r0, 0x31(r1)
/* 803920B4 0038EFF4  38 E1 00 1C */	addi r7, r1, 0x1c
/* 803920B8 0038EFF8  98 01 00 32 */	stb r0, 0x32(r1)
/* 803920BC 0038EFFC  99 01 00 33 */	stb r8, 0x33(r1)
/* 803920C0 0038F000  80 01 00 30 */	lwz r0, 0x30(r1)
/* 803920C4 0038F004  90 01 00 08 */	stw r0, 8(r1)
/* 803920C8 0038F008  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803920CC 0038F00C  90 01 00 18 */	stw r0, 0x18(r1)
/* 803920D0 0038F010  90 01 00 14 */	stw r0, 0x14(r1)
/* 803920D4 0038F014  90 01 00 10 */	stw r0, 0x10(r1)
/* 803920D8 0038F018  4B CA 45 B5 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 803920DC 0038F01C  38 60 00 00 */	li r3, 0
/* 803920E0 0038F020  4B D5 70 79 */	bl GXSetAlphaUpdate
/* 803920E4 0038F024  48 09 11 41 */	bl getRenderModeObj__6SystemFv
/* 803920E8 0038F028  A3 43 00 06 */	lhz r26, 6(r3)
/* 803920EC 0038F02C  48 09 11 39 */	bl getRenderModeObj__6SystemFv
/* 803920F0 0038F030  A0 83 00 04 */	lhz r4, 4(r3)
/* 803920F4 0038F034  3C 00 43 30 */	lis r0, 0x4330
/* 803920F8 0038F038  C0 62 0C 28 */	lfs f3, lbl_8051EF88@sda21(r2)
/* 803920FC 0038F03C  7F E3 FB 78 */	mr r3, r31
/* 80392100 0038F040  90 81 00 64 */	stw r4, 0x64(r1)
/* 80392104 0038F044  38 81 00 38 */	addi r4, r1, 0x38
/* 80392108 0038F048  C8 42 0C A0 */	lfd f2, lbl_8051F000@sda21(r2)
/* 8039210C 0038F04C  90 01 00 60 */	stw r0, 0x60(r1)
/* 80392110 0038F050  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 80392114 0038F054  93 41 00 5C */	stw r26, 0x5c(r1)
/* 80392118 0038F058  EC 20 10 28 */	fsubs f1, f0, f2
/* 8039211C 0038F05C  90 01 00 58 */	stw r0, 0x58(r1)
/* 80392120 0038F060  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 80392124 0038F064  EC 23 08 2A */	fadds f1, f3, f1
/* 80392128 0038F068  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 8039212C 0038F06C  EC 00 10 28 */	fsubs f0, f0, f2
/* 80392130 0038F070  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 80392134 0038F074  EC 03 00 2A */	fadds f0, f3, f0
/* 80392138 0038F078  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8039213C 0038F07C  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80392140 0038F080  4B CA 46 95 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 80392144 0038F084  38 60 00 01 */	li r3, 1
/* 80392148 0038F088  4B D5 70 11 */	bl GXSetAlphaUpdate
/* 8039214C 0038F08C  BA E1 00 6C */	lmw r23, 0x6c(r1)
/* 80392150 0038F090  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80392154 0038F094  7C 08 03 A6 */	mtlr r0
/* 80392158 0038F098  38 21 00 90 */	addi r1, r1, 0x90
/* 8039215C 0038F09C  4E 80 00 20 */	blr 
.endfn doDraw__Q28Morimura16TChallengeSelectFR8Graphics

.if version == 0
.fn doUpdateFadeoutFinish__Q28Morimura16TChallengeSelectFv, global
/* 80392160 0038F0A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80392164 0038F0A4  7C 08 02 A6 */	mflr r0
/* 80392168 0038F0A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039216C 0038F0AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80392170 0038F0B0  7C 7F 1B 78 */	mr r31, r3
/* 80392174 0038F0B4  80 03 00 90 */	lwz r0, 0x90(r3)
/* 80392178 0038F0B8  28 00 00 00 */	cmplwi r0, 0
/* 8039217C 0038F0BC  40 82 00 20 */	bne .L_8039219C
/* 80392180 0038F0C0  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 80392184 0038F0C4  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 80392188 0038F0C8  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 8039218C 0038F0CC  38 80 08 AA */	li r4, 0x8ac
/* 80392190 0038F0D0  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 80392194 0038F0D4  4C C6 31 82 */	crclr 6
/* 80392198 0038F0D8  4B C9 84 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039219C:
/* 8039219C 0038F0DC  88 1F 01 34 */	lbz r0, 0x134(r31)
/* 803921A0 0038F0E0  28 00 00 00 */	cmplwi r0, 0
/* 803921A4 0038F0E4  41 82 00 14 */	beq .L_803921B8
/* 803921A8 0038F0E8  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 803921AC 0038F0EC  38 00 00 03 */	li r0, 3
/* 803921B0 0038F0F0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803921B4 0038F0F4  48 00 00 10 */	b .L_803921C4
.L_803921B8:
/* 803921B8 0038F0F8  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 803921BC 0038F0FC  38 00 00 02 */	li r0, 2
/* 803921C0 0038F100  90 03 00 1C */	stw r0, 0x1c(r3)
.L_803921C4:
/* 803921C4 0038F104  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803921C8 0038F108  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803921CC 0038F10C  7C 08 03 A6 */	mtlr r0
/* 803921D0 0038F110  38 21 00 10 */	addi r1, r1, 0x10
/* 803921D4 0038F114  4E 80 00 20 */	blr 
.endfn doUpdateFadeoutFinish__Q28Morimura16TChallengeSelectFv
.else
.fn doUpdateFadeoutFinish__Q28Morimura16TChallengeSelectFv, global
/* 80392160 0038F0A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80392164 0038F0A4  7C 08 02 A6 */	mflr r0
/* 80392168 0038F0A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039216C 0038F0AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80392170 0038F0B0  7C 7F 1B 78 */	mr r31, r3
/* 80392174 0038F0B4  80 03 00 90 */	lwz r0, 0x90(r3)
/* 80392178 0038F0B8  28 00 00 00 */	cmplwi r0, 0
/* 8039217C 0038F0BC  40 82 00 20 */	bne .L_8039219C
/* 80392180 0038F0C0  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 80392184 0038F0C4  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 80392188 0038F0C8  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 8039218C 0038F0CC  38 80 08 AA */	li r4, 0x8aa
/* 80392190 0038F0D0  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 80392194 0038F0D4  4C C6 31 82 */	crclr 6
/* 80392198 0038F0D8  4B C9 84 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039219C:
/* 8039219C 0038F0DC  88 1F 01 34 */	lbz r0, 0x134(r31)
/* 803921A0 0038F0E0  28 00 00 00 */	cmplwi r0, 0
/* 803921A4 0038F0E4  41 82 00 14 */	beq .L_803921B8
/* 803921A8 0038F0E8  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 803921AC 0038F0EC  38 00 00 03 */	li r0, 3
/* 803921B0 0038F0F0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803921B4 0038F0F4  48 00 00 10 */	b .L_803921C4
.L_803921B8:
/* 803921B8 0038F0F8  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 803921BC 0038F0FC  38 00 00 02 */	li r0, 2
/* 803921C0 0038F100  90 03 00 1C */	stw r0, 0x1c(r3)
.L_803921C4:
/* 803921C4 0038F104  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803921C8 0038F108  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803921CC 0038F10C  7C 08 03 A6 */	mtlr r0
/* 803921D0 0038F110  38 21 00 10 */	addi r1, r1, 0x10
/* 803921D4 0038F114  4E 80 00 20 */	blr 
.endfn doUpdateFadeoutFinish__Q28Morimura16TChallengeSelectFv
.endif

.if version == 0
.fn setInfo__Q28Morimura16TChallengeSelectFi, global
/* 803921D8 0038F118  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803921DC 0038F11C  7C 08 02 A6 */	mflr r0
/* 803921E0 0038F120  90 01 00 54 */	stw r0, 0x54(r1)
/* 803921E4 0038F124  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803921E8 0038F128  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803921EC 0038F12C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 803921F0 0038F130  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 803921F4 0038F134  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 803921F8 0038F138  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 803921FC 0038F13C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80392200 0038F140  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80392204 0038F144  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80392208 0038F148  93 81 00 10 */	stw r28, 0x10(r1)
/* 8039220C 0038F14C  7C 9C 23 78 */	mr r28, r4
/* 80392210 0038F150  3C 80 80 49 */	lis r4, lbl_80493FC0@ha
/* 80392214 0038F154  2C 1C 00 1E */	cmpwi r28, 0x1e
/* 80392218 0038F158  7C 7E 1B 78 */	mr r30, r3
/* 8039221C 0038F15C  3B E4 3F C0 */	addi r31, r4, lbl_80493FC0@l
/* 80392220 0038F160  41 80 00 18 */	blt .L_80392238
/* 80392224 0038F164  38 7F 00 14 */	addi r3, r31, 0x14
/* 80392228 0038F168  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8039222C 0038F16C  38 80 08 B6 */	li r4, 0x8b8
/* 80392230 0038F170  4C C6 31 82 */	crclr 6
/* 80392234 0038F174  4B C9 84 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80392238:
/* 80392238 0038F178  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039223C 0038F17C  28 00 00 00 */	cmplwi r0, 0
/* 80392240 0038F180  41 82 00 AC */	beq .L_803922EC
/* 80392244 0038F184  80 7E 00 98 */	lwz r3, 0x98(r30)
/* 80392248 0038F188  57 80 10 3A */	slwi r0, r28, 2
/* 8039224C 0038F18C  7F A3 00 2E */	lwzx r29, r3, r0
/* 80392250 0038F190  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80392254 0038F194  90 1E 01 08 */	stw r0, 0x108(r30)
/* 80392258 0038F198  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 8039225C 0038F19C  90 1E 01 0C */	stw r0, 0x10c(r30)
/* 80392260 0038F1A0  80 1D 00 14 */	lwz r0, 0x14(r29)
/* 80392264 0038F1A4  90 1E 01 10 */	stw r0, 0x110(r30)
/* 80392268 0038F1A8  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 8039226C 0038F1AC  90 1E 01 14 */	stw r0, 0x114(r30)
/* 80392270 0038F1B0  80 1D 00 20 */	lwz r0, 0x20(r29)
/* 80392274 0038F1B4  90 1E 01 18 */	stw r0, 0x118(r30)
/* 80392278 0038F1B8  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 8039227C 0038F1BC  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 80392280 0038F1C0  80 1D 00 08 */	lwz r0, 8(r29)
/* 80392284 0038F1C4  90 1E 01 20 */	stw r0, 0x120(r30)
/* 80392288 0038F1C8  80 1D 00 04 */	lwz r0, 4(r29)
/* 8039228C 0038F1CC  90 1E 01 24 */	stw r0, 0x124(r30)
/* 80392290 0038F1D0  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 80392294 0038F1D4  2C 00 FF FF */	cmpwi r0, -1
/* 80392298 0038F1D8  40 82 00 14 */	bne .L_803922AC
/* 8039229C 0038F1DC  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 803922A0 0038F1E0  38 80 00 01 */	li r4, 1
/* 803922A4 0038F1E4  4B F7 95 45 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803922A8 0038F1E8  48 00 00 14 */	b .L_803922BC
.L_803922AC:
/* 803922AC 0038F1EC  90 1E 01 00 */	stw r0, 0x100(r30)
/* 803922B0 0038F1F0  38 80 00 00 */	li r4, 0
/* 803922B4 0038F1F4  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 803922B8 0038F1F8  4B F7 95 31 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_803922BC:
/* 803922BC 0038F1FC  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 803922C0 0038F200  2C 00 FF FF */	cmpwi r0, -1
/* 803922C4 0038F204  40 82 00 14 */	bne .L_803922D8
/* 803922C8 0038F208  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 803922CC 0038F20C  38 80 00 01 */	li r4, 1
/* 803922D0 0038F210  4B F7 95 19 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803922D4 0038F214  48 00 01 14 */	b .L_803923E8
.L_803922D8:
/* 803922D8 0038F218  90 1E 01 04 */	stw r0, 0x104(r30)
/* 803922DC 0038F21C  38 80 00 00 */	li r4, 0
/* 803922E0 0038F220  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 803922E4 0038F224  4B F7 95 05 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803922E8 0038F228  48 00 01 00 */	b .L_803923E8
.L_803922EC:
/* 803922EC 0038F22C  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 803922F0 0038F230  7F 84 E3 78 */	mr r4, r28
/* 803922F4 0038F234  80 63 00 08 */	lwz r3, 8(r3)
/* 803922F8 0038F238  4B EA 2E 3D */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 803922FC 0038F23C  7C 7D 1B 78 */	mr r29, r3
/* 80392300 0038F240  38 80 00 01 */	li r4, 1
/* 80392304 0038F244  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80392308 0038F248  4B E5 F2 A9 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8039230C 0038F24C  90 7E 01 08 */	stw r3, 0x108(r30)
/* 80392310 0038F250  38 80 00 02 */	li r4, 2
/* 80392314 0038F254  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80392318 0038F258  4B E5 F2 99 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8039231C 0038F25C  90 7E 01 0C */	stw r3, 0x10c(r30)
/* 80392320 0038F260  38 80 00 00 */	li r4, 0
/* 80392324 0038F264  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80392328 0038F268  4B E5 F2 89 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8039232C 0038F26C  90 7E 01 10 */	stw r3, 0x110(r30)
/* 80392330 0038F270  38 80 00 04 */	li r4, 4
/* 80392334 0038F274  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80392338 0038F278  4B E5 F2 79 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8039233C 0038F27C  90 7E 01 14 */	stw r3, 0x114(r30)
/* 80392340 0038F280  38 80 00 03 */	li r4, 3
/* 80392344 0038F284  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80392348 0038F288  4B E5 F2 69 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8039234C 0038F28C  90 7E 01 18 */	stw r3, 0x118(r30)
/* 80392350 0038F290  38 80 00 00 */	li r4, 0
/* 80392354 0038F294  80 1D 00 04 */	lwz r0, 4(r29)
/* 80392358 0038F298  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 8039235C 0038F29C  80 1D 00 08 */	lwz r0, 8(r29)
/* 80392360 0038F2A0  90 1E 01 20 */	stw r0, 0x120(r30)
/* 80392364 0038F2A4  80 1D 00 00 */	lwz r0, 0(r29)
/* 80392368 0038F2A8  90 1E 01 24 */	stw r0, 0x124(r30)
/* 8039236C 0038F2AC  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80392370 0038F2B0  4B EA 19 DD */	bl getScore__Q24Game9HighscoreFi
/* 80392374 0038F2B4  2C 03 FF FF */	cmpwi r3, -1
/* 80392378 0038F2B8  40 82 00 14 */	bne .L_8039238C
/* 8039237C 0038F2BC  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 80392380 0038F2C0  38 80 00 01 */	li r4, 1
/* 80392384 0038F2C4  4B F7 94 65 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 80392388 0038F2C8  48 00 00 20 */	b .L_803923A8
.L_8039238C:
/* 8039238C 0038F2CC  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80392390 0038F2D0  38 80 00 00 */	li r4, 0
/* 80392394 0038F2D4  4B EA 19 B9 */	bl getScore__Q24Game9HighscoreFi
/* 80392398 0038F2D8  90 7E 01 00 */	stw r3, 0x100(r30)
/* 8039239C 0038F2DC  38 80 00 00 */	li r4, 0
/* 803923A0 0038F2E0  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 803923A4 0038F2E4  4B F7 94 45 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_803923A8:
/* 803923A8 0038F2E8  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 803923AC 0038F2EC  38 80 00 00 */	li r4, 0
/* 803923B0 0038F2F0  4B EA 19 9D */	bl getScore__Q24Game9HighscoreFi
/* 803923B4 0038F2F4  2C 03 FF FF */	cmpwi r3, -1
/* 803923B8 0038F2F8  40 82 00 14 */	bne .L_803923CC
/* 803923BC 0038F2FC  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 803923C0 0038F300  38 80 00 01 */	li r4, 1
/* 803923C4 0038F304  4B F7 94 25 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803923C8 0038F308  48 00 00 20 */	b .L_803923E8
.L_803923CC:
/* 803923CC 0038F30C  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 803923D0 0038F310  38 80 00 00 */	li r4, 0
/* 803923D4 0038F314  4B EA 19 79 */	bl getScore__Q24Game9HighscoreFi
/* 803923D8 0038F318  90 7E 01 04 */	stw r3, 0x104(r30)
/* 803923DC 0038F31C  38 80 00 00 */	li r4, 0
/* 803923E0 0038F320  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 803923E4 0038F324  4B F7 94 05 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_803923E8:
/* 803923E8 0038F328  3C 60 00 0F */	lis r3, 0x000F4240@ha
/* 803923EC 0038F32C  80 DE 01 00 */	lwz r6, 0x100(r30)
/* 803923F0 0038F330  38 03 42 40 */	addi r0, r3, 0x000F4240@l
/* 803923F4 0038F334  7C 06 00 40 */	cmplw r6, r0
/* 803923F8 0038F338  40 81 00 18 */	ble .L_80392410
/* 803923FC 0038F33C  38 7F 00 14 */	addi r3, r31, 0x14
/* 80392400 0038F340  38 BF 06 E0 */	addi r5, r31, 0x6e0
/* 80392404 0038F344  38 80 08 F7 */	li r4, 0x8f9
/* 80392408 0038F348  4C C6 31 82 */	crclr 6
/* 8039240C 0038F34C  4B C9 82 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80392410:
/* 80392410 0038F350  3C 60 00 0F */	lis r3, 0x000F4240@ha
/* 80392414 0038F354  80 DE 01 04 */	lwz r6, 0x104(r30)
/* 80392418 0038F358  38 03 42 40 */	addi r0, r3, 0x000F4240@l
/* 8039241C 0038F35C  7C 06 00 40 */	cmplw r6, r0
/* 80392420 0038F360  40 81 00 18 */	ble .L_80392438
/* 80392424 0038F364  38 7F 00 14 */	addi r3, r31, 0x14
/* 80392428 0038F368  38 BF 06 F0 */	addi r5, r31, 0x6f0
/* 8039242C 0038F36C  38 80 08 F8 */	li r4, 0x8fa
/* 80392430 0038F370  4C C6 31 82 */	crclr 6
/* 80392434 0038F374  4B C9 82 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80392438:
/* 80392438 0038F378  3B 80 00 00 */	li r28, 0
/* 8039243C 0038F37C  7F DD F3 78 */	mr r29, r30
.L_80392440:
/* 80392440 0038F380  80 FD 01 08 */	lwz r7, 0x108(r29)
/* 80392444 0038F384  28 07 00 64 */	cmplwi r7, 0x64
/* 80392448 0038F388  40 81 00 1C */	ble .L_80392464
/* 8039244C 0038F38C  7F 86 E3 78 */	mr r6, r28
/* 80392450 0038F390  38 7F 00 14 */	addi r3, r31, 0x14
/* 80392454 0038F394  38 BF 07 00 */	addi r5, r31, 0x700
/* 80392458 0038F398  38 80 08 FA */	li r4, 0x8fc
/* 8039245C 0038F39C  4C C6 31 82 */	crclr 6
/* 80392460 0038F3A0  4B C9 81 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80392464:
/* 80392464 0038F3A4  3B 9C 00 01 */	addi r28, r28, 1
/* 80392468 0038F3A8  3B BD 00 04 */	addi r29, r29, 4
/* 8039246C 0038F3AC  2C 1C 00 05 */	cmpwi r28, 5
/* 80392470 0038F3B0  41 80 FF D0 */	blt .L_80392440
/* 80392474 0038F3B4  3B 80 00 00 */	li r28, 0
/* 80392478 0038F3B8  7F DD F3 78 */	mr r29, r30
.L_8039247C:
/* 8039247C 0038F3BC  80 FD 01 1C */	lwz r7, 0x11c(r29)
/* 80392480 0038F3C0  28 07 00 64 */	cmplwi r7, 0x64
/* 80392484 0038F3C4  40 81 00 1C */	ble .L_803924A0
/* 80392488 0038F3C8  7F 86 E3 78 */	mr r6, r28
/* 8039248C 0038F3CC  38 7F 00 14 */	addi r3, r31, 0x14
/* 80392490 0038F3D0  38 BF 07 10 */	addi r5, r31, 0x710
/* 80392494 0038F3D4  38 80 08 FE */	li r4, 0x900
/* 80392498 0038F3D8  4C C6 31 82 */	crclr 6
/* 8039249C 0038F3DC  4B C9 81 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803924A0:
/* 803924A0 0038F3E0  3B 9C 00 01 */	addi r28, r28, 1
/* 803924A4 0038F3E4  3B BD 00 04 */	addi r29, r29, 4
/* 803924A8 0038F3E8  2C 1C 00 02 */	cmpwi r28, 2
/* 803924AC 0038F3EC  41 80 FF D0 */	blt .L_8039247C
/* 803924B0 0038F3F0  80 DE 01 24 */	lwz r6, 0x124(r30)
/* 803924B4 0038F3F4  28 06 00 64 */	cmplwi r6, 0x64
/* 803924B8 0038F3F8  40 81 00 18 */	ble .L_803924D0
/* 803924BC 0038F3FC  38 7F 00 14 */	addi r3, r31, 0x14
/* 803924C0 0038F400  38 BF 07 24 */	addi r5, r31, 0x724
/* 803924C4 0038F404  38 80 09 01 */	li r4, 0x903
/* 803924C8 0038F408  4C C6 31 82 */	crclr 6
/* 803924CC 0038F40C  4B C9 81 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803924D0:
/* 803924D0 0038F410  CB A2 0C 50 */	lfd f29, lbl_8051EFB0@sda21(r2)
/* 803924D4 0038F414  7F DD F3 78 */	mr r29, r30
/* 803924D8 0038F418  C3 C2 0C 8C */	lfs f30, lbl_8051EFEC@sda21(r2)
/* 803924DC 0038F41C  3B 80 00 00 */	li r28, 0
/* 803924E0 0038F420  C3 E2 0C 90 */	lfs f31, lbl_8051EFF0@sda21(r2)
/* 803924E4 0038F424  3F E0 43 30 */	lis r31, 0x4330
.L_803924E8:
/* 803924E8 0038F428  80 7D 00 B8 */	lwz r3, 0xb8(r29)
/* 803924EC 0038F42C  38 80 00 01 */	li r4, 1
/* 803924F0 0038F430  48 00 F6 CD */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 803924F4 0038F434  80 7D 00 D4 */	lwz r3, 0xd4(r29)
/* 803924F8 0038F438  38 80 00 01 */	li r4, 1
/* 803924FC 0038F43C  48 00 F6 C1 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 80392500 0038F440  80 1D 01 1C */	lwz r0, 0x11c(r29)
/* 80392504 0038F444  38 80 00 00 */	li r4, 0
/* 80392508 0038F448  80 BD 00 B0 */	lwz r5, 0xb0(r29)
/* 8039250C 0038F44C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80392510 0038F450  93 E1 00 08 */	stw r31, 8(r1)
/* 80392514 0038F454  C0 25 00 10 */	lfs f1, 0x10(r5)
/* 80392518 0038F458  90 01 00 0C */	stw r0, 0xc(r1)
/* 8039251C 0038F45C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80392520 0038F460  D0 25 00 14 */	stfs f1, 0x14(r5)
/* 80392524 0038F464  EC 00 E8 28 */	fsubs f0, f0, f29
/* 80392528 0038F468  80 65 00 04 */	lwz r3, 4(r5)
/* 8039252C 0038F46C  EC 00 F0 24 */	fdivs f0, f0, f30
/* 80392530 0038F470  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 80392534 0038F474  80 65 00 08 */	lwz r3, 8(r5)
/* 80392538 0038F478  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 8039253C 0038F47C  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80392540 0038F480  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 80392544 0038F484  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 80392548 0038F488  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 8039254C 0038F48C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80392550 0038F490  40 81 00 08 */	ble .L_80392558
/* 80392554 0038F494  D3 E5 00 10 */	stfs f31, 0x10(r5)
.L_80392558:
/* 80392558 0038F498  3B 9C 00 01 */	addi r28, r28, 1
/* 8039255C 0038F49C  3B BD 00 04 */	addi r29, r29, 4
/* 80392560 0038F4A0  2C 1C 00 02 */	cmpwi r28, 2
/* 80392564 0038F4A4  41 80 FF 84 */	blt .L_803924E8
/* 80392568 0038F4A8  3B 80 00 00 */	li r28, 0
/* 8039256C 0038F4AC  7F DD F3 78 */	mr r29, r30
.L_80392570:
/* 80392570 0038F4B0  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 80392574 0038F4B4  38 80 00 01 */	li r4, 1
/* 80392578 0038F4B8  48 00 F6 45 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 8039257C 0038F4BC  3B 9C 00 01 */	addi r28, r28, 1
/* 80392580 0038F4C0  3B BD 00 04 */	addi r29, r29, 4
/* 80392584 0038F4C4  2C 1C 00 05 */	cmpwi r28, 5
/* 80392588 0038F4C8  41 80 FF E8 */	blt .L_80392570
/* 8039258C 0038F4CC  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80392590 0038F4D0  38 80 00 01 */	li r4, 1
/* 80392594 0038F4D4  48 00 F6 29 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 80392598 0038F4D8  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8039259C 0038F4DC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803925A0 0038F4E0  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 803925A4 0038F4E4  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 803925A8 0038F4E8  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 803925AC 0038F4EC  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 803925B0 0038F4F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803925B4 0038F4F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803925B8 0038F4F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803925BC 0038F4FC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803925C0 0038F500  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803925C4 0038F504  7C 08 03 A6 */	mtlr r0
/* 803925C8 0038F508  38 21 00 50 */	addi r1, r1, 0x50
/* 803925CC 0038F50C  4E 80 00 20 */	blr 
.endfn setInfo__Q28Morimura16TChallengeSelectFi
.else
.fn setInfo__Q28Morimura16TChallengeSelectFi, global
/* 803921D8 0038F118  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803921DC 0038F11C  7C 08 02 A6 */	mflr r0
/* 803921E0 0038F120  90 01 00 54 */	stw r0, 0x54(r1)
/* 803921E4 0038F124  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803921E8 0038F128  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803921EC 0038F12C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 803921F0 0038F130  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 803921F4 0038F134  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 803921F8 0038F138  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 803921FC 0038F13C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80392200 0038F140  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80392204 0038F144  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80392208 0038F148  93 81 00 10 */	stw r28, 0x10(r1)
/* 8039220C 0038F14C  7C 9C 23 78 */	mr r28, r4
/* 80392210 0038F150  3C 80 80 49 */	lis r4, lbl_80493FC0@ha
/* 80392214 0038F154  2C 1C 00 1E */	cmpwi r28, 0x1e
/* 80392218 0038F158  7C 7E 1B 78 */	mr r30, r3
/* 8039221C 0038F15C  3B E4 3F C0 */	addi r31, r4, lbl_80493FC0@l
/* 80392220 0038F160  41 80 00 18 */	blt .L_80392238
/* 80392224 0038F164  38 7F 00 14 */	addi r3, r31, 0x14
/* 80392228 0038F168  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8039222C 0038F16C  38 80 08 B6 */	li r4, 0x8b6
/* 80392230 0038F170  4C C6 31 82 */	crclr 6
/* 80392234 0038F174  4B C9 84 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80392238:
/* 80392238 0038F178  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039223C 0038F17C  28 00 00 00 */	cmplwi r0, 0
/* 80392240 0038F180  41 82 00 AC */	beq .L_803922EC
/* 80392244 0038F184  80 7E 00 98 */	lwz r3, 0x98(r30)
/* 80392248 0038F188  57 80 10 3A */	slwi r0, r28, 2
/* 8039224C 0038F18C  7F A3 00 2E */	lwzx r29, r3, r0
/* 80392250 0038F190  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80392254 0038F194  90 1E 01 08 */	stw r0, 0x108(r30)
/* 80392258 0038F198  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 8039225C 0038F19C  90 1E 01 0C */	stw r0, 0x10c(r30)
/* 80392260 0038F1A0  80 1D 00 14 */	lwz r0, 0x14(r29)
/* 80392264 0038F1A4  90 1E 01 10 */	stw r0, 0x110(r30)
/* 80392268 0038F1A8  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 8039226C 0038F1AC  90 1E 01 14 */	stw r0, 0x114(r30)
/* 80392270 0038F1B0  80 1D 00 20 */	lwz r0, 0x20(r29)
/* 80392274 0038F1B4  90 1E 01 18 */	stw r0, 0x118(r30)
/* 80392278 0038F1B8  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 8039227C 0038F1BC  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 80392280 0038F1C0  80 1D 00 08 */	lwz r0, 8(r29)
/* 80392284 0038F1C4  90 1E 01 20 */	stw r0, 0x120(r30)
/* 80392288 0038F1C8  80 1D 00 04 */	lwz r0, 4(r29)
/* 8039228C 0038F1CC  90 1E 01 24 */	stw r0, 0x124(r30)
/* 80392290 0038F1D0  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 80392294 0038F1D4  2C 00 FF FF */	cmpwi r0, -1
/* 80392298 0038F1D8  40 82 00 14 */	bne .L_803922AC
/* 8039229C 0038F1DC  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 803922A0 0038F1E0  38 80 00 01 */	li r4, 1
/* 803922A4 0038F1E4  4B F7 95 45 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803922A8 0038F1E8  48 00 00 14 */	b .L_803922BC
.L_803922AC:
/* 803922AC 0038F1EC  90 1E 01 00 */	stw r0, 0x100(r30)
/* 803922B0 0038F1F0  38 80 00 00 */	li r4, 0
/* 803922B4 0038F1F4  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 803922B8 0038F1F8  4B F7 95 31 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_803922BC:
/* 803922BC 0038F1FC  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 803922C0 0038F200  2C 00 FF FF */	cmpwi r0, -1
/* 803922C4 0038F204  40 82 00 14 */	bne .L_803922D8
/* 803922C8 0038F208  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 803922CC 0038F20C  38 80 00 01 */	li r4, 1
/* 803922D0 0038F210  4B F7 95 19 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803922D4 0038F214  48 00 01 14 */	b .L_803923E8
.L_803922D8:
/* 803922D8 0038F218  90 1E 01 04 */	stw r0, 0x104(r30)
/* 803922DC 0038F21C  38 80 00 00 */	li r4, 0
/* 803922E0 0038F220  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 803922E4 0038F224  4B F7 95 05 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803922E8 0038F228  48 00 01 00 */	b .L_803923E8
.L_803922EC:
/* 803922EC 0038F22C  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 803922F0 0038F230  7F 84 E3 78 */	mr r4, r28
/* 803922F4 0038F234  80 63 00 08 */	lwz r3, 8(r3)
/* 803922F8 0038F238  4B EA 2E 3D */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 803922FC 0038F23C  7C 7D 1B 78 */	mr r29, r3
/* 80392300 0038F240  38 80 00 01 */	li r4, 1
/* 80392304 0038F244  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80392308 0038F248  4B E5 F2 A9 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8039230C 0038F24C  90 7E 01 08 */	stw r3, 0x108(r30)
/* 80392310 0038F250  38 80 00 02 */	li r4, 2
/* 80392314 0038F254  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80392318 0038F258  4B E5 F2 99 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8039231C 0038F25C  90 7E 01 0C */	stw r3, 0x10c(r30)
/* 80392320 0038F260  38 80 00 00 */	li r4, 0
/* 80392324 0038F264  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80392328 0038F268  4B E5 F2 89 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8039232C 0038F26C  90 7E 01 10 */	stw r3, 0x110(r30)
/* 80392330 0038F270  38 80 00 04 */	li r4, 4
/* 80392334 0038F274  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80392338 0038F278  4B E5 F2 79 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8039233C 0038F27C  90 7E 01 14 */	stw r3, 0x114(r30)
/* 80392340 0038F280  38 80 00 03 */	li r4, 3
/* 80392344 0038F284  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80392348 0038F288  4B E5 F2 69 */	bl getColorSum__Q24Game13PikiContainerFi
/* 8039234C 0038F28C  90 7E 01 18 */	stw r3, 0x118(r30)
/* 80392350 0038F290  38 80 00 00 */	li r4, 0
/* 80392354 0038F294  80 1D 00 04 */	lwz r0, 4(r29)
/* 80392358 0038F298  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 8039235C 0038F29C  80 1D 00 08 */	lwz r0, 8(r29)
/* 80392360 0038F2A0  90 1E 01 20 */	stw r0, 0x120(r30)
/* 80392364 0038F2A4  80 1D 00 00 */	lwz r0, 0(r29)
/* 80392368 0038F2A8  90 1E 01 24 */	stw r0, 0x124(r30)
/* 8039236C 0038F2AC  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80392370 0038F2B0  4B EA 19 DD */	bl getScore__Q24Game9HighscoreFi
/* 80392374 0038F2B4  2C 03 FF FF */	cmpwi r3, -1
/* 80392378 0038F2B8  40 82 00 14 */	bne .L_8039238C
/* 8039237C 0038F2BC  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 80392380 0038F2C0  38 80 00 01 */	li r4, 1
/* 80392384 0038F2C4  4B F7 94 65 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 80392388 0038F2C8  48 00 00 20 */	b .L_803923A8
.L_8039238C:
/* 8039238C 0038F2CC  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80392390 0038F2D0  38 80 00 00 */	li r4, 0
/* 80392394 0038F2D4  4B EA 19 B9 */	bl getScore__Q24Game9HighscoreFi
/* 80392398 0038F2D8  90 7E 01 00 */	stw r3, 0x100(r30)
/* 8039239C 0038F2DC  38 80 00 00 */	li r4, 0
/* 803923A0 0038F2E0  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 803923A4 0038F2E4  4B F7 94 45 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_803923A8:
/* 803923A8 0038F2E8  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 803923AC 0038F2EC  38 80 00 00 */	li r4, 0
/* 803923B0 0038F2F0  4B EA 19 9D */	bl getScore__Q24Game9HighscoreFi
/* 803923B4 0038F2F4  2C 03 FF FF */	cmpwi r3, -1
/* 803923B8 0038F2F8  40 82 00 14 */	bne .L_803923CC
/* 803923BC 0038F2FC  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 803923C0 0038F300  38 80 00 01 */	li r4, 1
/* 803923C4 0038F304  4B F7 94 25 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803923C8 0038F308  48 00 00 20 */	b .L_803923E8
.L_803923CC:
/* 803923CC 0038F30C  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 803923D0 0038F310  38 80 00 00 */	li r4, 0
/* 803923D4 0038F314  4B EA 19 79 */	bl getScore__Q24Game9HighscoreFi
/* 803923D8 0038F318  90 7E 01 04 */	stw r3, 0x104(r30)
/* 803923DC 0038F31C  38 80 00 00 */	li r4, 0
/* 803923E0 0038F320  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 803923E4 0038F324  4B F7 94 05 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_803923E8:
/* 803923E8 0038F328  3C 60 00 0F */	lis r3, 0x000F4240@ha
/* 803923EC 0038F32C  80 DE 01 00 */	lwz r6, 0x100(r30)
/* 803923F0 0038F330  38 03 42 40 */	addi r0, r3, 0x000F4240@l
/* 803923F4 0038F334  7C 06 00 40 */	cmplw r6, r0
/* 803923F8 0038F338  40 81 00 18 */	ble .L_80392410
/* 803923FC 0038F33C  38 7F 00 14 */	addi r3, r31, 0x14
/* 80392400 0038F340  38 BF 06 E0 */	addi r5, r31, 0x6e0
/* 80392404 0038F344  38 80 08 F7 */	li r4, 0x8f7
/* 80392408 0038F348  4C C6 31 82 */	crclr 6
/* 8039240C 0038F34C  4B C9 82 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80392410:
/* 80392410 0038F350  3C 60 00 0F */	lis r3, 0x000F4240@ha
/* 80392414 0038F354  80 DE 01 04 */	lwz r6, 0x104(r30)
/* 80392418 0038F358  38 03 42 40 */	addi r0, r3, 0x000F4240@l
/* 8039241C 0038F35C  7C 06 00 40 */	cmplw r6, r0
/* 80392420 0038F360  40 81 00 18 */	ble .L_80392438
/* 80392424 0038F364  38 7F 00 14 */	addi r3, r31, 0x14
/* 80392428 0038F368  38 BF 06 F0 */	addi r5, r31, 0x6f0
/* 8039242C 0038F36C  38 80 08 F8 */	li r4, 0x8f8
/* 80392430 0038F370  4C C6 31 82 */	crclr 6
/* 80392434 0038F374  4B C9 82 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80392438:
/* 80392438 0038F378  3B 80 00 00 */	li r28, 0
/* 8039243C 0038F37C  7F DD F3 78 */	mr r29, r30
.L_80392440:
/* 80392440 0038F380  80 FD 01 08 */	lwz r7, 0x108(r29)
/* 80392444 0038F384  28 07 00 64 */	cmplwi r7, 0x64
/* 80392448 0038F388  40 81 00 1C */	ble .L_80392464
/* 8039244C 0038F38C  7F 86 E3 78 */	mr r6, r28
/* 80392450 0038F390  38 7F 00 14 */	addi r3, r31, 0x14
/* 80392454 0038F394  38 BF 07 00 */	addi r5, r31, 0x700
/* 80392458 0038F398  38 80 08 FA */	li r4, 0x8fa
/* 8039245C 0038F39C  4C C6 31 82 */	crclr 6
/* 80392460 0038F3A0  4B C9 81 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80392464:
/* 80392464 0038F3A4  3B 9C 00 01 */	addi r28, r28, 1
/* 80392468 0038F3A8  3B BD 00 04 */	addi r29, r29, 4
/* 8039246C 0038F3AC  2C 1C 00 05 */	cmpwi r28, 5
/* 80392470 0038F3B0  41 80 FF D0 */	blt .L_80392440
/* 80392474 0038F3B4  3B 80 00 00 */	li r28, 0
/* 80392478 0038F3B8  7F DD F3 78 */	mr r29, r30
.L_8039247C:
/* 8039247C 0038F3BC  80 FD 01 1C */	lwz r7, 0x11c(r29)
/* 80392480 0038F3C0  28 07 00 64 */	cmplwi r7, 0x64
/* 80392484 0038F3C4  40 81 00 1C */	ble .L_803924A0
/* 80392488 0038F3C8  7F 86 E3 78 */	mr r6, r28
/* 8039248C 0038F3CC  38 7F 00 14 */	addi r3, r31, 0x14
/* 80392490 0038F3D0  38 BF 07 10 */	addi r5, r31, 0x710
/* 80392494 0038F3D4  38 80 08 FE */	li r4, 0x8fe
/* 80392498 0038F3D8  4C C6 31 82 */	crclr 6
/* 8039249C 0038F3DC  4B C9 81 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803924A0:
/* 803924A0 0038F3E0  3B 9C 00 01 */	addi r28, r28, 1
/* 803924A4 0038F3E4  3B BD 00 04 */	addi r29, r29, 4
/* 803924A8 0038F3E8  2C 1C 00 02 */	cmpwi r28, 2
/* 803924AC 0038F3EC  41 80 FF D0 */	blt .L_8039247C
/* 803924B0 0038F3F0  80 DE 01 24 */	lwz r6, 0x124(r30)
/* 803924B4 0038F3F4  28 06 00 64 */	cmplwi r6, 0x64
/* 803924B8 0038F3F8  40 81 00 18 */	ble .L_803924D0
/* 803924BC 0038F3FC  38 7F 00 14 */	addi r3, r31, 0x14
/* 803924C0 0038F400  38 BF 07 24 */	addi r5, r31, 0x724
/* 803924C4 0038F404  38 80 09 01 */	li r4, 0x901
/* 803924C8 0038F408  4C C6 31 82 */	crclr 6
/* 803924CC 0038F40C  4B C9 81 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803924D0:
/* 803924D0 0038F410  CB A2 0C 50 */	lfd f29, lbl_8051EFB0@sda21(r2)
/* 803924D4 0038F414  7F DD F3 78 */	mr r29, r30
/* 803924D8 0038F418  C3 C2 0C 8C */	lfs f30, lbl_8051EFEC@sda21(r2)
/* 803924DC 0038F41C  3B 80 00 00 */	li r28, 0
/* 803924E0 0038F420  C3 E2 0C 90 */	lfs f31, lbl_8051EFF0@sda21(r2)
/* 803924E4 0038F424  3F E0 43 30 */	lis r31, 0x4330
.L_803924E8:
/* 803924E8 0038F428  80 7D 00 B8 */	lwz r3, 0xb8(r29)
/* 803924EC 0038F42C  38 80 00 01 */	li r4, 1
/* 803924F0 0038F430  48 00 F6 CD */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 803924F4 0038F434  80 7D 00 D4 */	lwz r3, 0xd4(r29)
/* 803924F8 0038F438  38 80 00 01 */	li r4, 1
/* 803924FC 0038F43C  48 00 F6 C1 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 80392500 0038F440  80 1D 01 1C */	lwz r0, 0x11c(r29)
/* 80392504 0038F444  38 80 00 00 */	li r4, 0
/* 80392508 0038F448  80 BD 00 B0 */	lwz r5, 0xb0(r29)
/* 8039250C 0038F44C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80392510 0038F450  93 E1 00 08 */	stw r31, 8(r1)
/* 80392514 0038F454  C0 25 00 10 */	lfs f1, 0x10(r5)
/* 80392518 0038F458  90 01 00 0C */	stw r0, 0xc(r1)
/* 8039251C 0038F45C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80392520 0038F460  D0 25 00 14 */	stfs f1, 0x14(r5)
/* 80392524 0038F464  EC 00 E8 28 */	fsubs f0, f0, f29
/* 80392528 0038F468  80 65 00 04 */	lwz r3, 4(r5)
/* 8039252C 0038F46C  EC 00 F0 24 */	fdivs f0, f0, f30
/* 80392530 0038F470  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 80392534 0038F474  80 65 00 08 */	lwz r3, 8(r5)
/* 80392538 0038F478  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 8039253C 0038F47C  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80392540 0038F480  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 80392544 0038F484  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 80392548 0038F488  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 8039254C 0038F48C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80392550 0038F490  40 81 00 08 */	ble .L_80392558
/* 80392554 0038F494  D3 E5 00 10 */	stfs f31, 0x10(r5)
.L_80392558:
/* 80392558 0038F498  3B 9C 00 01 */	addi r28, r28, 1
/* 8039255C 0038F49C  3B BD 00 04 */	addi r29, r29, 4
/* 80392560 0038F4A0  2C 1C 00 02 */	cmpwi r28, 2
/* 80392564 0038F4A4  41 80 FF 84 */	blt .L_803924E8
/* 80392568 0038F4A8  3B 80 00 00 */	li r28, 0
/* 8039256C 0038F4AC  7F DD F3 78 */	mr r29, r30
.L_80392570:
/* 80392570 0038F4B0  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 80392574 0038F4B4  38 80 00 01 */	li r4, 1
/* 80392578 0038F4B8  48 00 F6 45 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 8039257C 0038F4BC  3B 9C 00 01 */	addi r28, r28, 1
/* 80392580 0038F4C0  3B BD 00 04 */	addi r29, r29, 4
/* 80392584 0038F4C4  2C 1C 00 05 */	cmpwi r28, 5
/* 80392588 0038F4C8  41 80 FF E8 */	blt .L_80392570
/* 8039258C 0038F4CC  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80392590 0038F4D0  38 80 00 01 */	li r4, 1
/* 80392594 0038F4D4  48 00 F6 29 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 80392598 0038F4D8  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8039259C 0038F4DC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803925A0 0038F4E0  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 803925A4 0038F4E4  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 803925A8 0038F4E8  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 803925AC 0038F4EC  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 803925B0 0038F4F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803925B4 0038F4F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803925B8 0038F4F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803925BC 0038F4FC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803925C0 0038F500  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803925C4 0038F504  7C 08 03 A6 */	mtlr r0
/* 803925C8 0038F508  38 21 00 50 */	addi r1, r1, 0x50
/* 803925CC 0038F50C  4E 80 00 20 */	blr 
.endfn setInfo__Q28Morimura16TChallengeSelectFi
.endif

.fn setStageName__Q28Morimura16TChallengeSelectFi, global
/* 803925D0 0038F510  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803925D4 0038F514  7C 08 02 A6 */	mflr r0
/* 803925D8 0038F518  90 01 00 24 */	stw r0, 0x24(r1)
/* 803925DC 0038F51C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803925E0 0038F520  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803925E4 0038F524  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803925E8 0038F528  7C 7D 1B 78 */	mr r29, r3
/* 803925EC 0038F52C  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803925F0 0038F530  83 C3 00 E0 */	lwz r30, 0xe0(r3)
/* 803925F4 0038F534  28 00 00 00 */	cmplwi r0, 0
/* 803925F8 0038F538  41 82 00 48 */	beq .L_80392640
/* 803925FC 0038F53C  80 7D 00 7C */	lwz r3, 0x7c(r29)
/* 80392600 0038F540  4B E9 B4 E5 */	bl getStageData__Q34Game13ChallengeGame9StageListFi
/* 80392604 0038F544  7C 7F 1B 78 */	mr r31, r3
/* 80392608 0038F548  80 7D 00 EC */	lwz r3, 0xec(r29)
/* 8039260C 0038F54C  80 9F 00 74 */	lwz r4, 0x74(r31)
/* 80392610 0038F550  38 84 FF FF */	addi r4, r4, -1
/* 80392614 0038F554  48 00 EB F9 */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 80392618 0038F558  90 9E 00 1C */	stw r4, 0x1c(r30)
/* 8039261C 0038F55C  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80392620 0038F560  80 9F 00 74 */	lwz r4, 0x74(r31)
/* 80392624 0038F564  83 FD 00 E4 */	lwz r31, 0xe4(r29)
/* 80392628 0038F568  80 7D 00 EC */	lwz r3, 0xec(r29)
/* 8039262C 0038F56C  38 84 FF FF */	addi r4, r4, -1
/* 80392630 0038F570  48 00 EB DD */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 80392634 0038F574  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 80392638 0038F578  90 7F 00 18 */	stw r3, 0x18(r31)
/* 8039263C 0038F57C  48 00 00 48 */	b .L_80392684
.L_80392640:
/* 80392640 0038F580  80 7D 00 90 */	lwz r3, 0x90(r29)
/* 80392644 0038F584  80 63 00 08 */	lwz r3, 8(r3)
/* 80392648 0038F588  4B EA 2A ED */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 8039264C 0038F58C  7C 7F 1B 78 */	mr r31, r3
/* 80392650 0038F590  80 7D 00 EC */	lwz r3, 0xec(r29)
/* 80392654 0038F594  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 80392658 0038F598  38 84 FF FF */	addi r4, r4, -1
/* 8039265C 0038F59C  48 00 EB B1 */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 80392660 0038F5A0  90 9E 00 1C */	stw r4, 0x1c(r30)
/* 80392664 0038F5A4  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80392668 0038F5A8  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8039266C 0038F5AC  83 FD 00 E4 */	lwz r31, 0xe4(r29)
/* 80392670 0038F5B0  80 7D 00 EC */	lwz r3, 0xec(r29)
/* 80392674 0038F5B4  38 84 FF FF */	addi r4, r4, -1
/* 80392678 0038F5B8  48 00 EB 95 */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 8039267C 0038F5BC  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 80392680 0038F5C0  90 7F 00 18 */	stw r3, 0x18(r31)
.L_80392684:
/* 80392684 0038F5C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80392688 0038F5C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8039268C 0038F5CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80392690 0038F5D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80392694 0038F5D4  7C 08 03 A6 */	mtlr r0
/* 80392698 0038F5D8  38 21 00 20 */	addi r1, r1, 0x20
/* 8039269C 0038F5DC  4E 80 00 20 */	blr 
.endfn setStageName__Q28Morimura16TChallengeSelectFi

.if version == 0
.fn getState__Q28Morimura16TChallengeSelectFi, global
/* 803926A0 0038F5E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803926A4 0038F5E4  7C 08 02 A6 */	mflr r0
/* 803926A8 0038F5E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803926AC 0038F5EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803926B0 0038F5F0  7C 9F 23 78 */	mr r31, r4
/* 803926B4 0038F5F4  2C 1F 00 1E */	cmpwi r31, 0x1e
/* 803926B8 0038F5F8  93 C1 00 08 */	stw r30, 8(r1)
/* 803926BC 0038F5FC  7C 7E 1B 78 */	mr r30, r3
/* 803926C0 0038F600  41 80 00 20 */	blt .L_803926E0
/* 803926C4 0038F604  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 803926C8 0038F608  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 803926CC 0038F60C  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 803926D0 0038F610  38 80 09 37 */	li r4, 0x939
/* 803926D4 0038F614  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 803926D8 0038F618  4C C6 31 82 */	crclr 6
/* 803926DC 0038F61C  4B C9 7F 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803926E0:
/* 803926E0 0038F620  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803926E4 0038F624  28 00 00 00 */	cmplwi r0, 0
/* 803926E8 0038F628  41 82 00 4C */	beq .L_80392734
/* 803926EC 0038F62C  80 7E 00 98 */	lwz r3, 0x98(r30)
/* 803926F0 0038F630  57 E0 10 3A */	slwi r0, r31, 2
/* 803926F4 0038F634  7C 63 00 2E */	lwzx r3, r3, r0
/* 803926F8 0038F638  88 03 00 03 */	lbz r0, 3(r3)
/* 803926FC 0038F63C  28 00 00 00 */	cmplwi r0, 0
/* 80392700 0038F640  41 82 00 0C */	beq .L_8039270C
/* 80392704 0038F644  38 60 00 03 */	li r3, 3
/* 80392708 0038F648  48 00 00 AC */	b .L_803927B4
.L_8039270C:
/* 8039270C 0038F64C  88 03 00 02 */	lbz r0, 2(r3)
/* 80392710 0038F650  28 00 00 00 */	cmplwi r0, 0
/* 80392714 0038F654  41 82 00 0C */	beq .L_80392720
/* 80392718 0038F658  38 60 00 02 */	li r3, 2
/* 8039271C 0038F65C  48 00 00 98 */	b .L_803927B4
.L_80392720:
/* 80392720 0038F660  88 03 00 00 */	lbz r0, 0(r3)
/* 80392724 0038F664  28 00 00 00 */	cmplwi r0, 0
/* 80392728 0038F668  41 82 00 88 */	beq .L_803927B0
/* 8039272C 0038F66C  38 60 00 01 */	li r3, 1
/* 80392730 0038F670  48 00 00 84 */	b .L_803927B4
.L_80392734:
/* 80392734 0038F674  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 80392738 0038F678  7F E4 FB 78 */	mr r4, r31
/* 8039273C 0038F67C  80 63 00 08 */	lwz r3, 8(r3)
/* 80392740 0038F680  4B EA 29 F5 */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 80392744 0038F684  88 63 00 20 */	lbz r3, 0x20(r3)
/* 80392748 0038F688  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 8039274C 0038F68C  41 82 00 14 */	beq .L_80392760
/* 80392750 0038F690  54 60 E7 FE */	rlwinm r0, r3, 0x1c, 0x1f, 0x1f
/* 80392754 0038F694  7C 60 00 D0 */	neg r3, r0
/* 80392758 0038F698  38 63 00 02 */	addi r3, r3, 2
/* 8039275C 0038F69C  48 00 00 58 */	b .L_803927B4
.L_80392760:
/* 80392760 0038F6A0  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 80392764 0038F6A4  41 82 00 0C */	beq .L_80392770
/* 80392768 0038F6A8  38 60 00 01 */	li r3, 1
/* 8039276C 0038F6AC  48 00 00 48 */	b .L_803927B4
.L_80392770:
/* 80392770 0038F6B0  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80392774 0038F6B4  41 82 00 0C */	beq .L_80392780
/* 80392778 0038F6B8  38 60 00 00 */	li r3, 0
/* 8039277C 0038F6BC  48 00 00 38 */	b .L_803927B4
.L_80392780:
/* 80392780 0038F6C0  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80392784 0038F6C4  41 82 00 0C */	beq .L_80392790
/* 80392788 0038F6C8  38 60 00 03 */	li r3, 3
/* 8039278C 0038F6CC  48 00 00 28 */	b .L_803927B4
.L_80392790:
/* 80392790 0038F6D0  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80392794 0038F6D4  41 82 00 0C */	beq .L_803927A0
/* 80392798 0038F6D8  38 60 00 02 */	li r3, 2
/* 8039279C 0038F6DC  48 00 00 18 */	b .L_803927B4
.L_803927A0:
/* 803927A0 0038F6E0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 803927A4 0038F6E4  41 82 00 0C */	beq .L_803927B0
/* 803927A8 0038F6E8  38 60 00 01 */	li r3, 1
/* 803927AC 0038F6EC  48 00 00 08 */	b .L_803927B4
.L_803927B0:
/* 803927B0 0038F6F0  38 60 00 00 */	li r3, 0
.L_803927B4:
/* 803927B4 0038F6F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803927B8 0038F6F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803927BC 0038F6FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803927C0 0038F700  7C 08 03 A6 */	mtlr r0
/* 803927C4 0038F704  38 21 00 10 */	addi r1, r1, 0x10
/* 803927C8 0038F708  4E 80 00 20 */	blr 
.endfn getState__Q28Morimura16TChallengeSelectFi
.else
.fn getState__Q28Morimura16TChallengeSelectFi, global
/* 803926A0 0038F5E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803926A4 0038F5E4  7C 08 02 A6 */	mflr r0
/* 803926A8 0038F5E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803926AC 0038F5EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803926B0 0038F5F0  7C 9F 23 78 */	mr r31, r4
/* 803926B4 0038F5F4  2C 1F 00 1E */	cmpwi r31, 0x1e
/* 803926B8 0038F5F8  93 C1 00 08 */	stw r30, 8(r1)
/* 803926BC 0038F5FC  7C 7E 1B 78 */	mr r30, r3
/* 803926C0 0038F600  41 80 00 20 */	blt .L_803926E0
/* 803926C4 0038F604  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 803926C8 0038F608  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 803926CC 0038F60C  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 803926D0 0038F610  38 80 09 37 */	li r4, 0x937
/* 803926D4 0038F614  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 803926D8 0038F618  4C C6 31 82 */	crclr 6
/* 803926DC 0038F61C  4B C9 7F 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803926E0:
/* 803926E0 0038F620  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803926E4 0038F624  28 00 00 00 */	cmplwi r0, 0
/* 803926E8 0038F628  41 82 00 4C */	beq .L_80392734
/* 803926EC 0038F62C  80 7E 00 98 */	lwz r3, 0x98(r30)
/* 803926F0 0038F630  57 E0 10 3A */	slwi r0, r31, 2
/* 803926F4 0038F634  7C 63 00 2E */	lwzx r3, r3, r0
/* 803926F8 0038F638  88 03 00 03 */	lbz r0, 3(r3)
/* 803926FC 0038F63C  28 00 00 00 */	cmplwi r0, 0
/* 80392700 0038F640  41 82 00 0C */	beq .L_8039270C
/* 80392704 0038F644  38 60 00 03 */	li r3, 3
/* 80392708 0038F648  48 00 00 AC */	b .L_803927B4
.L_8039270C:
/* 8039270C 0038F64C  88 03 00 02 */	lbz r0, 2(r3)
/* 80392710 0038F650  28 00 00 00 */	cmplwi r0, 0
/* 80392714 0038F654  41 82 00 0C */	beq .L_80392720
/* 80392718 0038F658  38 60 00 02 */	li r3, 2
/* 8039271C 0038F65C  48 00 00 98 */	b .L_803927B4
.L_80392720:
/* 80392720 0038F660  88 03 00 00 */	lbz r0, 0(r3)
/* 80392724 0038F664  28 00 00 00 */	cmplwi r0, 0
/* 80392728 0038F668  41 82 00 88 */	beq .L_803927B0
/* 8039272C 0038F66C  38 60 00 01 */	li r3, 1
/* 80392730 0038F670  48 00 00 84 */	b .L_803927B4
.L_80392734:
/* 80392734 0038F674  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 80392738 0038F678  7F E4 FB 78 */	mr r4, r31
/* 8039273C 0038F67C  80 63 00 08 */	lwz r3, 8(r3)
/* 80392740 0038F680  4B EA 29 F5 */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 80392744 0038F684  88 63 00 20 */	lbz r3, 0x20(r3)
/* 80392748 0038F688  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 8039274C 0038F68C  41 82 00 14 */	beq .L_80392760
/* 80392750 0038F690  54 60 E7 FE */	rlwinm r0, r3, 0x1c, 0x1f, 0x1f
/* 80392754 0038F694  7C 60 00 D0 */	neg r3, r0
/* 80392758 0038F698  38 63 00 02 */	addi r3, r3, 2
/* 8039275C 0038F69C  48 00 00 58 */	b .L_803927B4
.L_80392760:
/* 80392760 0038F6A0  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 80392764 0038F6A4  41 82 00 0C */	beq .L_80392770
/* 80392768 0038F6A8  38 60 00 01 */	li r3, 1
/* 8039276C 0038F6AC  48 00 00 48 */	b .L_803927B4
.L_80392770:
/* 80392770 0038F6B0  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80392774 0038F6B4  41 82 00 0C */	beq .L_80392780
/* 80392778 0038F6B8  38 60 00 00 */	li r3, 0
/* 8039277C 0038F6BC  48 00 00 38 */	b .L_803927B4
.L_80392780:
/* 80392780 0038F6C0  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80392784 0038F6C4  41 82 00 0C */	beq .L_80392790
/* 80392788 0038F6C8  38 60 00 03 */	li r3, 3
/* 8039278C 0038F6CC  48 00 00 28 */	b .L_803927B4
.L_80392790:
/* 80392790 0038F6D0  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80392794 0038F6D4  41 82 00 0C */	beq .L_803927A0
/* 80392798 0038F6D8  38 60 00 02 */	li r3, 2
/* 8039279C 0038F6DC  48 00 00 18 */	b .L_803927B4
.L_803927A0:
/* 803927A0 0038F6E0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 803927A4 0038F6E4  41 82 00 0C */	beq .L_803927B0
/* 803927A8 0038F6E8  38 60 00 01 */	li r3, 1
/* 803927AC 0038F6EC  48 00 00 08 */	b .L_803927B4
.L_803927B0:
/* 803927B0 0038F6F0  38 60 00 00 */	li r3, 0
.L_803927B4:
/* 803927B4 0038F6F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803927B8 0038F6F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803927BC 0038F6FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803927C0 0038F700  7C 08 03 A6 */	mtlr r0
/* 803927C4 0038F704  38 21 00 10 */	addi r1, r1, 0x10
/* 803927C8 0038F708  4E 80 00 20 */	blr 
.endfn getState__Q28Morimura16TChallengeSelectFi
.endif

.if version == 0
.fn getAfterState__Q28Morimura16TChallengeSelectFi, global
/* 803927CC 0038F70C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803927D0 0038F710  7C 08 02 A6 */	mflr r0
/* 803927D4 0038F714  90 01 00 14 */	stw r0, 0x14(r1)
/* 803927D8 0038F718  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803927DC 0038F71C  7C 9F 23 78 */	mr r31, r4
/* 803927E0 0038F720  2C 1F 00 1E */	cmpwi r31, 0x1e
/* 803927E4 0038F724  93 C1 00 08 */	stw r30, 8(r1)
/* 803927E8 0038F728  7C 7E 1B 78 */	mr r30, r3
/* 803927EC 0038F72C  41 80 00 20 */	blt .L_8039280C
/* 803927F0 0038F730  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 803927F4 0038F734  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 803927F8 0038F738  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 803927FC 0038F73C  38 80 09 69 */	li r4, 0x96b
/* 80392800 0038F740  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 80392804 0038F744  4C C6 31 82 */	crclr 6
/* 80392808 0038F748  4B C9 7E 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039280C:
/* 8039280C 0038F74C  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80392810 0038F750  28 00 00 00 */	cmplwi r0, 0
/* 80392814 0038F754  41 82 00 0C */	beq .L_80392820
/* 80392818 0038F758  38 60 00 03 */	li r3, 3
/* 8039281C 0038F75C  48 00 00 3C */	b .L_80392858
.L_80392820:
/* 80392820 0038F760  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 80392824 0038F764  7F E4 FB 78 */	mr r4, r31
/* 80392828 0038F768  80 63 00 08 */	lwz r3, 8(r3)
/* 8039282C 0038F76C  4B EA 29 09 */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 80392830 0038F770  88 63 00 20 */	lbz r3, 0x20(r3)
/* 80392834 0038F774  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80392838 0038F778  41 82 00 0C */	beq .L_80392844
/* 8039283C 0038F77C  38 60 00 03 */	li r3, 3
/* 80392840 0038F780  48 00 00 18 */	b .L_80392858
.L_80392844:
/* 80392844 0038F784  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80392848 0038F788  41 82 00 0C */	beq .L_80392854
/* 8039284C 0038F78C  38 60 00 02 */	li r3, 2
/* 80392850 0038F790  48 00 00 08 */	b .L_80392858
.L_80392854:
/* 80392854 0038F794  54 63 07 FE */	clrlwi r3, r3, 0x1f
.L_80392858:
/* 80392858 0038F798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039285C 0038F79C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80392860 0038F7A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80392864 0038F7A4  7C 08 03 A6 */	mtlr r0
/* 80392868 0038F7A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8039286C 0038F7AC  4E 80 00 20 */	blr 
.endfn getAfterState__Q28Morimura16TChallengeSelectFi
.else
.fn getAfterState__Q28Morimura16TChallengeSelectFi, global
/* 803927CC 0038F70C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803927D0 0038F710  7C 08 02 A6 */	mflr r0
/* 803927D4 0038F714  90 01 00 14 */	stw r0, 0x14(r1)
/* 803927D8 0038F718  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803927DC 0038F71C  7C 9F 23 78 */	mr r31, r4
/* 803927E0 0038F720  2C 1F 00 1E */	cmpwi r31, 0x1e
/* 803927E4 0038F724  93 C1 00 08 */	stw r30, 8(r1)
/* 803927E8 0038F728  7C 7E 1B 78 */	mr r30, r3
/* 803927EC 0038F72C  41 80 00 20 */	blt .L_8039280C
/* 803927F0 0038F730  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 803927F4 0038F734  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 803927F8 0038F738  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 803927FC 0038F73C  38 80 09 69 */	li r4, 0x969
/* 80392800 0038F740  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 80392804 0038F744  4C C6 31 82 */	crclr 6
/* 80392808 0038F748  4B C9 7E 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039280C:
/* 8039280C 0038F74C  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80392810 0038F750  28 00 00 00 */	cmplwi r0, 0
/* 80392814 0038F754  41 82 00 0C */	beq .L_80392820
/* 80392818 0038F758  38 60 00 03 */	li r3, 3
/* 8039281C 0038F75C  48 00 00 3C */	b .L_80392858
.L_80392820:
/* 80392820 0038F760  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 80392824 0038F764  7F E4 FB 78 */	mr r4, r31
/* 80392828 0038F768  80 63 00 08 */	lwz r3, 8(r3)
/* 8039282C 0038F76C  4B EA 29 09 */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 80392830 0038F770  88 63 00 20 */	lbz r3, 0x20(r3)
/* 80392834 0038F774  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80392838 0038F778  41 82 00 0C */	beq .L_80392844
/* 8039283C 0038F77C  38 60 00 03 */	li r3, 3
/* 80392840 0038F780  48 00 00 18 */	b .L_80392858
.L_80392844:
/* 80392844 0038F784  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80392848 0038F788  41 82 00 0C */	beq .L_80392854
/* 8039284C 0038F78C  38 60 00 02 */	li r3, 2
/* 80392850 0038F790  48 00 00 08 */	b .L_80392858
.L_80392854:
/* 80392854 0038F794  54 63 07 FE */	clrlwi r3, r3, 0x1f
.L_80392858:
/* 80392858 0038F798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039285C 0038F79C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80392860 0038F7A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80392864 0038F7A4  7C 08 03 A6 */	mtlr r0
/* 80392868 0038F7A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8039286C 0038F7AC  4E 80 00 20 */	blr 
.endfn getAfterState__Q28Morimura16TChallengeSelectFi
.endif

.if version == 0
.fn isChangeState__Q28Morimura16TChallengeSelectFi, global
/* 80392870 0038F7B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80392874 0038F7B4  7C 08 02 A6 */	mflr r0
/* 80392878 0038F7B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8039287C 0038F7BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80392880 0038F7C0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80392884 0038F7C4  7C 9E 23 78 */	mr r30, r4
/* 80392888 0038F7C8  2C 1E 00 1E */	cmpwi r30, 0x1e
/* 8039288C 0038F7CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80392890 0038F7D0  7C 7D 1B 78 */	mr r29, r3
/* 80392894 0038F7D4  41 80 00 20 */	blt .L_803928B4
/* 80392898 0038F7D8  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 8039289C 0038F7DC  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 803928A0 0038F7E0  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 803928A4 0038F7E4  38 80 09 83 */	li r4, 0x985
/* 803928A8 0038F7E8  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 803928AC 0038F7EC  4C C6 31 82 */	crclr 6
/* 803928B0 0038F7F0  4B C9 7D 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803928B4:
/* 803928B4 0038F7F4  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803928B8 0038F7F8  28 00 00 00 */	cmplwi r0, 0
/* 803928BC 0038F7FC  41 82 00 24 */	beq .L_803928E0
/* 803928C0 0038F800  80 7D 00 98 */	lwz r3, 0x98(r29)
/* 803928C4 0038F804  57 C0 10 3A */	slwi r0, r30, 2
/* 803928C8 0038F808  7C 63 00 2E */	lwzx r3, r3, r0
/* 803928CC 0038F80C  88 03 00 01 */	lbz r0, 1(r3)
/* 803928D0 0038F810  28 00 00 00 */	cmplwi r0, 0
/* 803928D4 0038F814  41 82 00 60 */	beq .L_80392934
/* 803928D8 0038F818  38 60 00 01 */	li r3, 1
/* 803928DC 0038F81C  48 00 00 5C */	b .L_80392938
.L_803928E0:
/* 803928E0 0038F820  80 7D 00 90 */	lwz r3, 0x90(r29)
/* 803928E4 0038F824  7F C4 F3 78 */	mr r4, r30
/* 803928E8 0038F828  80 63 00 08 */	lwz r3, 8(r3)
/* 803928EC 0038F82C  4B EA 28 49 */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 803928F0 0038F830  7C 7F 1B 78 */	mr r31, r3
/* 803928F4 0038F834  7F A3 EB 78 */	mr r3, r29
/* 803928F8 0038F838  7F C4 F3 78 */	mr r4, r30
/* 803928FC 0038F83C  4B FF FD A5 */	bl getState__Q28Morimura16TChallengeSelectFi
/* 80392900 0038F840  88 7F 00 20 */	lbz r3, 0x20(r31)
/* 80392904 0038F844  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80392908 0038F848  41 82 00 0C */	beq .L_80392914
/* 8039290C 0038F84C  38 60 00 01 */	li r3, 1
/* 80392910 0038F850  48 00 00 28 */	b .L_80392938
.L_80392914:
/* 80392914 0038F854  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 80392918 0038F858  41 82 00 0C */	beq .L_80392924
/* 8039291C 0038F85C  38 60 00 01 */	li r3, 1
/* 80392920 0038F860  48 00 00 18 */	b .L_80392938
.L_80392924:
/* 80392924 0038F864  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 80392928 0038F868  41 82 00 0C */	beq .L_80392934
/* 8039292C 0038F86C  38 60 00 01 */	li r3, 1
/* 80392930 0038F870  48 00 00 08 */	b .L_80392938
.L_80392934:
/* 80392934 0038F874  38 60 00 00 */	li r3, 0
.L_80392938:
/* 80392938 0038F878  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8039293C 0038F87C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80392940 0038F880  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80392944 0038F884  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80392948 0038F888  7C 08 03 A6 */	mtlr r0
/* 8039294C 0038F88C  38 21 00 20 */	addi r1, r1, 0x20
/* 80392950 0038F890  4E 80 00 20 */	blr 
.endfn isChangeState__Q28Morimura16TChallengeSelectFi
.else
.fn isChangeState__Q28Morimura16TChallengeSelectFi, global
/* 80392870 0038F7B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80392874 0038F7B4  7C 08 02 A6 */	mflr r0
/* 80392878 0038F7B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8039287C 0038F7BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80392880 0038F7C0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80392884 0038F7C4  7C 9E 23 78 */	mr r30, r4
/* 80392888 0038F7C8  2C 1E 00 1E */	cmpwi r30, 0x1e
/* 8039288C 0038F7CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80392890 0038F7D0  7C 7D 1B 78 */	mr r29, r3
/* 80392894 0038F7D4  41 80 00 20 */	blt .L_803928B4
/* 80392898 0038F7D8  3C 60 80 49 */	lis r3, lbl_80493FD4@ha
/* 8039289C 0038F7DC  3C A0 80 49 */	lis r5, lbl_80493FEC@ha
/* 803928A0 0038F7E0  38 63 3F D4 */	addi r3, r3, lbl_80493FD4@l
/* 803928A4 0038F7E4  38 80 09 83 */	li r4, 0x983
/* 803928A8 0038F7E8  38 A5 3F EC */	addi r5, r5, lbl_80493FEC@l
/* 803928AC 0038F7EC  4C C6 31 82 */	crclr 6
/* 803928B0 0038F7F0  4B C9 7D 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803928B4:
/* 803928B4 0038F7F4  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803928B8 0038F7F8  28 00 00 00 */	cmplwi r0, 0
/* 803928BC 0038F7FC  41 82 00 24 */	beq .L_803928E0
/* 803928C0 0038F800  80 7D 00 98 */	lwz r3, 0x98(r29)
/* 803928C4 0038F804  57 C0 10 3A */	slwi r0, r30, 2
/* 803928C8 0038F808  7C 63 00 2E */	lwzx r3, r3, r0
/* 803928CC 0038F80C  88 03 00 01 */	lbz r0, 1(r3)
/* 803928D0 0038F810  28 00 00 00 */	cmplwi r0, 0
/* 803928D4 0038F814  41 82 00 60 */	beq .L_80392934
/* 803928D8 0038F818  38 60 00 01 */	li r3, 1
/* 803928DC 0038F81C  48 00 00 5C */	b .L_80392938
.L_803928E0:
/* 803928E0 0038F820  80 7D 00 90 */	lwz r3, 0x90(r29)
/* 803928E4 0038F824  7F C4 F3 78 */	mr r4, r30
/* 803928E8 0038F828  80 63 00 08 */	lwz r3, 8(r3)
/* 803928EC 0038F82C  4B EA 28 49 */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 803928F0 0038F830  7C 7F 1B 78 */	mr r31, r3
/* 803928F4 0038F834  7F A3 EB 78 */	mr r3, r29
/* 803928F8 0038F838  7F C4 F3 78 */	mr r4, r30
/* 803928FC 0038F83C  4B FF FD A5 */	bl getState__Q28Morimura16TChallengeSelectFi
/* 80392900 0038F840  88 7F 00 20 */	lbz r3, 0x20(r31)
/* 80392904 0038F844  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80392908 0038F848  41 82 00 0C */	beq .L_80392914
/* 8039290C 0038F84C  38 60 00 01 */	li r3, 1
/* 80392910 0038F850  48 00 00 28 */	b .L_80392938
.L_80392914:
/* 80392914 0038F854  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 80392918 0038F858  41 82 00 0C */	beq .L_80392924
/* 8039291C 0038F85C  38 60 00 01 */	li r3, 1
/* 80392920 0038F860  48 00 00 18 */	b .L_80392938
.L_80392924:
/* 80392924 0038F864  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 80392928 0038F868  41 82 00 0C */	beq .L_80392934
/* 8039292C 0038F86C  38 60 00 01 */	li r3, 1
/* 80392930 0038F870  48 00 00 08 */	b .L_80392938
.L_80392934:
/* 80392934 0038F874  38 60 00 00 */	li r3, 0
.L_80392938:
/* 80392938 0038F878  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8039293C 0038F87C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80392940 0038F880  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80392944 0038F884  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80392948 0038F888  7C 08 03 A6 */	mtlr r0
/* 8039294C 0038F88C  38 21 00 20 */	addi r1, r1, 0x20
/* 80392950 0038F890  4E 80 00 20 */	blr 
.endfn isChangeState__Q28Morimura16TChallengeSelectFi
.endif

.fn getIndexMax__Q28Morimura16TChallengeSelectFv, global
/* 80392954 0038F894  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80392958 0038F898  7C 08 02 A6 */	mflr r0
/* 8039295C 0038F89C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80392960 0038F8A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80392964 0038F8A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80392968 0038F8A8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8039296C 0038F8AC  7C 7D 1B 78 */	mr r29, r3
/* 80392970 0038F8B0  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80392974 0038F8B4  28 00 00 00 */	cmplwi r0, 0
/* 80392978 0038F8B8  41 82 01 38 */	beq .L_80392AB0
/* 8039297C 0038F8BC  38 00 00 03 */	li r0, 3
/* 80392980 0038F8C0  38 60 00 00 */	li r3, 0
/* 80392984 0038F8C4  38 C0 00 00 */	li r6, 0
/* 80392988 0038F8C8  7C 09 03 A6 */	mtctr r0
.L_8039298C:
/* 8039298C 0038F8CC  80 BD 00 94 */	lwz r5, 0x94(r29)
/* 80392990 0038F8D0  7C 85 30 2E */	lwzx r4, r5, r6
/* 80392994 0038F8D4  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80392998 0038F8D8  2C 00 00 00 */	cmpwi r0, 0
/* 8039299C 0038F8DC  40 82 00 08 */	bne .L_803929A4
/* 803929A0 0038F8E0  48 00 01 64 */	b .L_80392B04
.L_803929A4:
/* 803929A4 0038F8E4  38 C6 00 04 */	addi r6, r6, 4
/* 803929A8 0038F8E8  38 63 00 01 */	addi r3, r3, 1
/* 803929AC 0038F8EC  7C 85 30 2E */	lwzx r4, r5, r6
/* 803929B0 0038F8F0  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 803929B4 0038F8F4  2C 00 00 00 */	cmpwi r0, 0
/* 803929B8 0038F8F8  40 82 00 08 */	bne .L_803929C0
/* 803929BC 0038F8FC  48 00 01 48 */	b .L_80392B04
.L_803929C0:
/* 803929C0 0038F900  38 C6 00 04 */	addi r6, r6, 4
/* 803929C4 0038F904  38 63 00 01 */	addi r3, r3, 1
/* 803929C8 0038F908  7C 85 30 2E */	lwzx r4, r5, r6
/* 803929CC 0038F90C  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 803929D0 0038F910  2C 00 00 00 */	cmpwi r0, 0
/* 803929D4 0038F914  40 82 00 08 */	bne .L_803929DC
/* 803929D8 0038F918  48 00 01 2C */	b .L_80392B04
.L_803929DC:
/* 803929DC 0038F91C  38 C6 00 04 */	addi r6, r6, 4
/* 803929E0 0038F920  38 63 00 01 */	addi r3, r3, 1
/* 803929E4 0038F924  7C 85 30 2E */	lwzx r4, r5, r6
/* 803929E8 0038F928  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 803929EC 0038F92C  2C 00 00 00 */	cmpwi r0, 0
/* 803929F0 0038F930  40 82 00 08 */	bne .L_803929F8
/* 803929F4 0038F934  48 00 01 10 */	b .L_80392B04
.L_803929F8:
/* 803929F8 0038F938  38 C6 00 04 */	addi r6, r6, 4
/* 803929FC 0038F93C  38 63 00 01 */	addi r3, r3, 1
/* 80392A00 0038F940  7C 85 30 2E */	lwzx r4, r5, r6
/* 80392A04 0038F944  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80392A08 0038F948  2C 00 00 00 */	cmpwi r0, 0
/* 80392A0C 0038F94C  40 82 00 08 */	bne .L_80392A14
/* 80392A10 0038F950  48 00 00 F4 */	b .L_80392B04
.L_80392A14:
/* 80392A14 0038F954  38 C6 00 04 */	addi r6, r6, 4
/* 80392A18 0038F958  38 63 00 01 */	addi r3, r3, 1
/* 80392A1C 0038F95C  7C 85 30 2E */	lwzx r4, r5, r6
/* 80392A20 0038F960  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80392A24 0038F964  2C 00 00 00 */	cmpwi r0, 0
/* 80392A28 0038F968  40 82 00 08 */	bne .L_80392A30
/* 80392A2C 0038F96C  48 00 00 D8 */	b .L_80392B04
.L_80392A30:
/* 80392A30 0038F970  38 C6 00 04 */	addi r6, r6, 4
/* 80392A34 0038F974  38 63 00 01 */	addi r3, r3, 1
/* 80392A38 0038F978  7C 85 30 2E */	lwzx r4, r5, r6
/* 80392A3C 0038F97C  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80392A40 0038F980  2C 00 00 00 */	cmpwi r0, 0
/* 80392A44 0038F984  40 82 00 08 */	bne .L_80392A4C
/* 80392A48 0038F988  48 00 00 BC */	b .L_80392B04
.L_80392A4C:
/* 80392A4C 0038F98C  38 C6 00 04 */	addi r6, r6, 4
/* 80392A50 0038F990  38 63 00 01 */	addi r3, r3, 1
/* 80392A54 0038F994  7C 85 30 2E */	lwzx r4, r5, r6
/* 80392A58 0038F998  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80392A5C 0038F99C  2C 00 00 00 */	cmpwi r0, 0
/* 80392A60 0038F9A0  40 82 00 08 */	bne .L_80392A68
/* 80392A64 0038F9A4  48 00 00 A0 */	b .L_80392B04
.L_80392A68:
/* 80392A68 0038F9A8  38 C6 00 04 */	addi r6, r6, 4
/* 80392A6C 0038F9AC  38 63 00 01 */	addi r3, r3, 1
/* 80392A70 0038F9B0  7C 85 30 2E */	lwzx r4, r5, r6
/* 80392A74 0038F9B4  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80392A78 0038F9B8  2C 00 00 00 */	cmpwi r0, 0
/* 80392A7C 0038F9BC  40 82 00 08 */	bne .L_80392A84
/* 80392A80 0038F9C0  48 00 00 84 */	b .L_80392B04
.L_80392A84:
/* 80392A84 0038F9C4  38 C6 00 04 */	addi r6, r6, 4
/* 80392A88 0038F9C8  38 63 00 01 */	addi r3, r3, 1
/* 80392A8C 0038F9CC  7C 85 30 2E */	lwzx r4, r5, r6
/* 80392A90 0038F9D0  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80392A94 0038F9D4  2C 00 00 00 */	cmpwi r0, 0
/* 80392A98 0038F9D8  40 82 00 08 */	bne .L_80392AA0
/* 80392A9C 0038F9DC  48 00 00 68 */	b .L_80392B04
.L_80392AA0:
/* 80392AA0 0038F9E0  38 C6 00 04 */	addi r6, r6, 4
/* 80392AA4 0038F9E4  38 63 00 01 */	addi r3, r3, 1
/* 80392AA8 0038F9E8  42 00 FE E4 */	bdnz .L_8039298C
/* 80392AAC 0038F9EC  48 00 00 54 */	b .L_80392B00
.L_80392AB0:
/* 80392AB0 0038F9F0  3B C0 00 00 */	li r30, 0
/* 80392AB4 0038F9F4  3B E0 00 00 */	li r31, 0
.L_80392AB8:
/* 80392AB8 0038F9F8  80 7D 00 90 */	lwz r3, 0x90(r29)
/* 80392ABC 0038F9FC  7F C4 F3 78 */	mr r4, r30
/* 80392AC0 0038FA00  80 63 00 08 */	lwz r3, 8(r3)
/* 80392AC4 0038FA04  4B EA 26 71 */	bl __cl__Q24Game21Challenge2D_TitleInfoFi
/* 80392AC8 0038FA08  80 9D 00 94 */	lwz r4, 0x94(r29)
/* 80392ACC 0038FA0C  7C 84 F8 2E */	lwzx r4, r4, r31
/* 80392AD0 0038FA10  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80392AD4 0038FA14  2C 00 00 00 */	cmpwi r0, 0
/* 80392AD8 0038FA18  40 82 00 18 */	bne .L_80392AF0
/* 80392ADC 0038FA1C  88 03 00 20 */	lbz r0, 0x20(r3)
/* 80392AE0 0038FA20  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80392AE4 0038FA24  40 82 00 0C */	bne .L_80392AF0
/* 80392AE8 0038FA28  7F C3 F3 78 */	mr r3, r30
/* 80392AEC 0038FA2C  48 00 00 18 */	b .L_80392B04
.L_80392AF0:
/* 80392AF0 0038FA30  3B DE 00 01 */	addi r30, r30, 1
/* 80392AF4 0038FA34  3B FF 00 04 */	addi r31, r31, 4
/* 80392AF8 0038FA38  2C 1E 00 1E */	cmpwi r30, 0x1e
/* 80392AFC 0038FA3C  41 80 FF BC */	blt .L_80392AB8
.L_80392B00:
/* 80392B00 0038FA40  38 60 00 1E */	li r3, 0x1e
.L_80392B04:
/* 80392B04 0038FA44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80392B08 0038FA48  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80392B0C 0038FA4C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80392B10 0038FA50  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80392B14 0038FA54  7C 08 03 A6 */	mtlr r0
/* 80392B18 0038FA58  38 21 00 20 */	addi r1, r1, 0x20
/* 80392B1C 0038FA5C  4E 80 00 20 */	blr 
.endfn getIndexMax__Q28Morimura16TChallengeSelectFv

.fn openWindow__Q28Morimura16TChallengeSelectFv, global
/* 80392B20 0038FA60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80392B24 0038FA64  7C 08 02 A6 */	mflr r0
/* 80392B28 0038FA68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80392B2C 0038FA6C  80 63 00 88 */	lwz r3, 0x88(r3)
/* 80392B30 0038FA70  48 01 0F 11 */	bl openWindow__Q28Morimura24TSelectExplanationWindowFv
/* 80392B34 0038FA74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80392B38 0038FA78  7C 08 03 A6 */	mtlr r0
/* 80392B3C 0038FA7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80392B40 0038FA80  4E 80 00 20 */	blr 
.endfn openWindow__Q28Morimura16TChallengeSelectFv

.fn closeWindow__Q28Morimura16TChallengeSelectFv, global
/* 80392B44 0038FA84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80392B48 0038FA88  7C 08 02 A6 */	mflr r0
/* 80392B4C 0038FA8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80392B50 0038FA90  80 63 00 88 */	lwz r3, 0x88(r3)
/* 80392B54 0038FA94  48 01 0F 01 */	bl closeWindow__Q28Morimura24TSelectExplanationWindowFv
/* 80392B58 0038FA98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80392B5C 0038FA9C  7C 08 03 A6 */	mtlr r0
/* 80392B60 0038FAA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80392B64 0038FAA4  4E 80 00 20 */	blr 
.endfn closeWindow__Q28Morimura16TChallengeSelectFv

.fn reset__Q28Morimura16TChallengeSelectFv, global
/* 80392B68 0038FAA8  38 00 00 00 */	li r0, 0
/* 80392B6C 0038FAAC  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80392B70 0038FAB0  98 03 01 35 */	stb r0, 0x135(r3)
/* 80392B74 0038FAB4  7C 68 1B 78 */	mr r8, r3
/* 80392B78 0038FAB8  39 20 00 00 */	li r9, 0
/* 80392B7C 0038FABC  D0 03 01 38 */	stfs f0, 0x138(r3)
.L_80392B80:
/* 80392B80 0038FAC0  80 E8 00 9C */	lwz r7, 0x9c(r8)
/* 80392B84 0038FAC4  38 C0 00 30 */	li r6, 0x30
/* 80392B88 0038FAC8  1C 86 00 24 */	mulli r4, r6, 0x24
/* 80392B8C 0038FACC  38 A0 00 00 */	li r5, 0
/* 80392B90 0038FAD0  D0 07 00 0C */	stfs f0, 0xc(r7)
/* 80392B94 0038FAD4  20 06 00 32 */	subfic r0, r6, 0x32
/* 80392B98 0038FAD8  D0 07 00 10 */	stfs f0, 0x10(r7)
/* 80392B9C 0038FADC  7C 87 22 14 */	add r4, r7, r4
/* 80392BA0 0038FAE0  D0 07 07 30 */	stfs f0, 0x730(r7)
/* 80392BA4 0038FAE4  90 A7 00 24 */	stw r5, 0x24(r7)
/* 80392BA8 0038FAE8  90 A7 00 48 */	stw r5, 0x48(r7)
/* 80392BAC 0038FAEC  90 A7 00 6C */	stw r5, 0x6c(r7)
/* 80392BB0 0038FAF0  90 A7 00 90 */	stw r5, 0x90(r7)
/* 80392BB4 0038FAF4  90 A7 00 B4 */	stw r5, 0xb4(r7)
/* 80392BB8 0038FAF8  90 A7 00 D8 */	stw r5, 0xd8(r7)
/* 80392BBC 0038FAFC  90 A7 00 FC */	stw r5, 0xfc(r7)
/* 80392BC0 0038FB00  90 A7 01 20 */	stw r5, 0x120(r7)
/* 80392BC4 0038FB04  90 A7 01 44 */	stw r5, 0x144(r7)
/* 80392BC8 0038FB08  90 A7 01 68 */	stw r5, 0x168(r7)
/* 80392BCC 0038FB0C  90 A7 01 8C */	stw r5, 0x18c(r7)
/* 80392BD0 0038FB10  90 A7 01 B0 */	stw r5, 0x1b0(r7)
/* 80392BD4 0038FB14  90 A7 01 D4 */	stw r5, 0x1d4(r7)
/* 80392BD8 0038FB18  90 A7 01 F8 */	stw r5, 0x1f8(r7)
/* 80392BDC 0038FB1C  90 A7 02 1C */	stw r5, 0x21c(r7)
/* 80392BE0 0038FB20  90 A7 02 40 */	stw r5, 0x240(r7)
/* 80392BE4 0038FB24  90 A7 02 64 */	stw r5, 0x264(r7)
/* 80392BE8 0038FB28  90 A7 02 88 */	stw r5, 0x288(r7)
/* 80392BEC 0038FB2C  90 A7 02 AC */	stw r5, 0x2ac(r7)
/* 80392BF0 0038FB30  90 A7 02 D0 */	stw r5, 0x2d0(r7)
/* 80392BF4 0038FB34  90 A7 02 F4 */	stw r5, 0x2f4(r7)
/* 80392BF8 0038FB38  90 A7 03 18 */	stw r5, 0x318(r7)
/* 80392BFC 0038FB3C  90 A7 03 3C */	stw r5, 0x33c(r7)
/* 80392C00 0038FB40  90 A7 03 60 */	stw r5, 0x360(r7)
/* 80392C04 0038FB44  90 A7 03 84 */	stw r5, 0x384(r7)
/* 80392C08 0038FB48  90 A7 03 A8 */	stw r5, 0x3a8(r7)
/* 80392C0C 0038FB4C  90 A7 03 CC */	stw r5, 0x3cc(r7)
/* 80392C10 0038FB50  90 A7 03 F0 */	stw r5, 0x3f0(r7)
/* 80392C14 0038FB54  90 A7 04 14 */	stw r5, 0x414(r7)
/* 80392C18 0038FB58  90 A7 04 38 */	stw r5, 0x438(r7)
/* 80392C1C 0038FB5C  90 A7 04 5C */	stw r5, 0x45c(r7)
/* 80392C20 0038FB60  90 A7 04 80 */	stw r5, 0x480(r7)
/* 80392C24 0038FB64  90 A7 04 A4 */	stw r5, 0x4a4(r7)
/* 80392C28 0038FB68  90 A7 04 C8 */	stw r5, 0x4c8(r7)
/* 80392C2C 0038FB6C  90 A7 04 EC */	stw r5, 0x4ec(r7)
/* 80392C30 0038FB70  90 A7 05 10 */	stw r5, 0x510(r7)
/* 80392C34 0038FB74  90 A7 05 34 */	stw r5, 0x534(r7)
/* 80392C38 0038FB78  90 A7 05 58 */	stw r5, 0x558(r7)
/* 80392C3C 0038FB7C  90 A7 05 7C */	stw r5, 0x57c(r7)
/* 80392C40 0038FB80  90 A7 05 A0 */	stw r5, 0x5a0(r7)
/* 80392C44 0038FB84  90 A7 05 C4 */	stw r5, 0x5c4(r7)
/* 80392C48 0038FB88  90 A7 05 E8 */	stw r5, 0x5e8(r7)
/* 80392C4C 0038FB8C  90 A7 06 0C */	stw r5, 0x60c(r7)
/* 80392C50 0038FB90  90 A7 06 30 */	stw r5, 0x630(r7)
/* 80392C54 0038FB94  90 A7 06 54 */	stw r5, 0x654(r7)
/* 80392C58 0038FB98  90 A7 06 78 */	stw r5, 0x678(r7)
/* 80392C5C 0038FB9C  90 A7 06 9C */	stw r5, 0x69c(r7)
/* 80392C60 0038FBA0  90 A7 06 C0 */	stw r5, 0x6c0(r7)
/* 80392C64 0038FBA4  7C 09 03 A6 */	mtctr r0
/* 80392C68 0038FBA8  2C 06 00 32 */	cmpwi r6, 0x32
/* 80392C6C 0038FBAC  40 80 00 10 */	bge .L_80392C7C
.L_80392C70:
/* 80392C70 0038FBB0  94 A4 00 24 */	stwu r5, 0x24(r4)
/* 80392C74 0038FBB4  38 C6 00 01 */	addi r6, r6, 1
/* 80392C78 0038FBB8  42 00 FF F8 */	bdnz .L_80392C70
.L_80392C7C:
/* 80392C7C 0038FBBC  39 29 00 01 */	addi r9, r9, 1
/* 80392C80 0038FBC0  80 08 01 08 */	lwz r0, 0x108(r8)
/* 80392C84 0038FBC4  80 88 00 9C */	lwz r4, 0x9c(r8)
/* 80392C88 0038FBC8  2C 09 00 05 */	cmpwi r9, 5
/* 80392C8C 0038FBCC  39 08 00 04 */	addi r8, r8, 4
/* 80392C90 0038FBD0  90 04 07 2C */	stw r0, 0x72c(r4)
/* 80392C94 0038FBD4  41 80 FE EC */	blt .L_80392B80
/* 80392C98 0038FBD8  38 00 00 00 */	li r0, 0
/* 80392C9C 0038FBDC  90 0D 99 84 */	stw r0, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80392CA0 0038FBE0  98 03 01 44 */	stb r0, 0x144(r3)
/* 80392CA4 0038FBE4  4E 80 00 20 */	blr 
.endfn reset__Q28Morimura16TChallengeSelectFv

.fn demoStart__Q28Morimura16TChallengeSelectFv, global
/* 80392CA8 0038FBE8  94 21 FE 60 */	stwu r1, -0x1a0(r1)
/* 80392CAC 0038FBEC  7C 08 02 A6 */	mflr r0
/* 80392CB0 0038FBF0  90 01 01 A4 */	stw r0, 0x1a4(r1)
/* 80392CB4 0038FBF4  DB E1 01 90 */	stfd f31, 0x190(r1)
/* 80392CB8 0038FBF8  F3 E1 01 98 */	psq_st f31, 408(r1), 0, qr0
/* 80392CBC 0038FBFC  DB C1 01 80 */	stfd f30, 0x180(r1)
/* 80392CC0 0038FC00  F3 C1 01 88 */	psq_st f30, 392(r1), 0, qr0
/* 80392CC4 0038FC04  DB A1 01 70 */	stfd f29, 0x170(r1)
/* 80392CC8 0038FC08  F3 A1 01 78 */	psq_st f29, 376(r1), 0, qr0
/* 80392CCC 0038FC0C  DB 81 01 60 */	stfd f28, 0x160(r1)
/* 80392CD0 0038FC10  F3 81 01 68 */	psq_st f28, 360(r1), 0, qr0
/* 80392CD4 0038FC14  DB 61 01 50 */	stfd f27, 0x150(r1)
/* 80392CD8 0038FC18  F3 61 01 58 */	psq_st f27, 344(r1), 0, qr0
/* 80392CDC 0038FC1C  DB 41 01 40 */	stfd f26, 0x140(r1)
/* 80392CE0 0038FC20  F3 41 01 48 */	psq_st f26, 328(r1), 0, qr0
/* 80392CE4 0038FC24  DB 21 01 30 */	stfd f25, 0x130(r1)
/* 80392CE8 0038FC28  F3 21 01 38 */	psq_st f25, 312(r1), 0, qr0
/* 80392CEC 0038FC2C  DB 01 01 20 */	stfd f24, 0x120(r1)
/* 80392CF0 0038FC30  F3 01 01 28 */	psq_st f24, 296(r1), 0, qr0
/* 80392CF4 0038FC34  DA E1 01 10 */	stfd f23, 0x110(r1)
/* 80392CF8 0038FC38  F2 E1 01 18 */	psq_st f23, 280(r1), 0, qr0
/* 80392CFC 0038FC3C  DA C1 01 00 */	stfd f22, 0x100(r1)
/* 80392D00 0038FC40  F2 C1 01 08 */	psq_st f22, 264(r1), 0, qr0
/* 80392D04 0038FC44  DA A1 00 F0 */	stfd f21, 0xf0(r1)
/* 80392D08 0038FC48  F2 A1 00 F8 */	psq_st f21, 248(r1), 0, qr0
/* 80392D0C 0038FC4C  DA 81 00 E0 */	stfd f20, 0xe0(r1)
/* 80392D10 0038FC50  F2 81 00 E8 */	psq_st f20, 232(r1), 0, qr0
/* 80392D14 0038FC54  DA 61 00 D0 */	stfd f19, 0xd0(r1)
/* 80392D18 0038FC58  F2 61 00 D8 */	psq_st f19, 216(r1), 0, qr0
/* 80392D1C 0038FC5C  DA 41 00 C0 */	stfd f18, 0xc0(r1)
/* 80392D20 0038FC60  F2 41 00 C8 */	psq_st f18, 200(r1), 0, qr0
/* 80392D24 0038FC64  BF 21 00 A4 */	stmw r25, 0xa4(r1)
/* 80392D28 0038FC68  38 C0 00 00 */	li r6, 0
/* 80392D2C 0038FC6C  C0 02 0C 28 */	lfs f0, lbl_8051EF88@sda21(r2)
/* 80392D30 0038FC70  98 C3 01 35 */	stb r6, 0x135(r3)
/* 80392D34 0038FC74  7C 69 1B 78 */	mr r9, r3
/* 80392D38 0038FC78  D0 03 01 38 */	stfs f0, 0x138(r3)
.L_80392D3C:
/* 80392D3C 0038FC7C  81 09 00 9C */	lwz r8, 0x9c(r9)
/* 80392D40 0038FC80  38 E0 00 30 */	li r7, 0x30
/* 80392D44 0038FC84  1C 87 00 24 */	mulli r4, r7, 0x24
/* 80392D48 0038FC88  38 A0 00 00 */	li r5, 0
/* 80392D4C 0038FC8C  D0 08 00 0C */	stfs f0, 0xc(r8)
/* 80392D50 0038FC90  20 07 00 32 */	subfic r0, r7, 0x32
/* 80392D54 0038FC94  D0 08 00 10 */	stfs f0, 0x10(r8)
/* 80392D58 0038FC98  7C 88 22 14 */	add r4, r8, r4
/* 80392D5C 0038FC9C  D0 08 07 30 */	stfs f0, 0x730(r8)
/* 80392D60 0038FCA0  90 A8 00 24 */	stw r5, 0x24(r8)
/* 80392D64 0038FCA4  90 A8 00 48 */	stw r5, 0x48(r8)
/* 80392D68 0038FCA8  90 A8 00 6C */	stw r5, 0x6c(r8)
/* 80392D6C 0038FCAC  90 A8 00 90 */	stw r5, 0x90(r8)
/* 80392D70 0038FCB0  90 A8 00 B4 */	stw r5, 0xb4(r8)
/* 80392D74 0038FCB4  90 A8 00 D8 */	stw r5, 0xd8(r8)
/* 80392D78 0038FCB8  90 A8 00 FC */	stw r5, 0xfc(r8)
/* 80392D7C 0038FCBC  90 A8 01 20 */	stw r5, 0x120(r8)
/* 80392D80 0038FCC0  90 A8 01 44 */	stw r5, 0x144(r8)
/* 80392D84 0038FCC4  90 A8 01 68 */	stw r5, 0x168(r8)
/* 80392D88 0038FCC8  90 A8 01 8C */	stw r5, 0x18c(r8)
/* 80392D8C 0038FCCC  90 A8 01 B0 */	stw r5, 0x1b0(r8)
/* 80392D90 0038FCD0  90 A8 01 D4 */	stw r5, 0x1d4(r8)
/* 80392D94 0038FCD4  90 A8 01 F8 */	stw r5, 0x1f8(r8)
/* 80392D98 0038FCD8  90 A8 02 1C */	stw r5, 0x21c(r8)
/* 80392D9C 0038FCDC  90 A8 02 40 */	stw r5, 0x240(r8)
/* 80392DA0 0038FCE0  90 A8 02 64 */	stw r5, 0x264(r8)
/* 80392DA4 0038FCE4  90 A8 02 88 */	stw r5, 0x288(r8)
/* 80392DA8 0038FCE8  90 A8 02 AC */	stw r5, 0x2ac(r8)
/* 80392DAC 0038FCEC  90 A8 02 D0 */	stw r5, 0x2d0(r8)
/* 80392DB0 0038FCF0  90 A8 02 F4 */	stw r5, 0x2f4(r8)
/* 80392DB4 0038FCF4  90 A8 03 18 */	stw r5, 0x318(r8)
/* 80392DB8 0038FCF8  90 A8 03 3C */	stw r5, 0x33c(r8)
/* 80392DBC 0038FCFC  90 A8 03 60 */	stw r5, 0x360(r8)
/* 80392DC0 0038FD00  90 A8 03 84 */	stw r5, 0x384(r8)
/* 80392DC4 0038FD04  90 A8 03 A8 */	stw r5, 0x3a8(r8)
/* 80392DC8 0038FD08  90 A8 03 CC */	stw r5, 0x3cc(r8)
/* 80392DCC 0038FD0C  90 A8 03 F0 */	stw r5, 0x3f0(r8)
/* 80392DD0 0038FD10  90 A8 04 14 */	stw r5, 0x414(r8)
/* 80392DD4 0038FD14  90 A8 04 38 */	stw r5, 0x438(r8)
/* 80392DD8 0038FD18  90 A8 04 5C */	stw r5, 0x45c(r8)
/* 80392DDC 0038FD1C  90 A8 04 80 */	stw r5, 0x480(r8)
/* 80392DE0 0038FD20  90 A8 04 A4 */	stw r5, 0x4a4(r8)
/* 80392DE4 0038FD24  90 A8 04 C8 */	stw r5, 0x4c8(r8)
/* 80392DE8 0038FD28  90 A8 04 EC */	stw r5, 0x4ec(r8)
/* 80392DEC 0038FD2C  90 A8 05 10 */	stw r5, 0x510(r8)
/* 80392DF0 0038FD30  90 A8 05 34 */	stw r5, 0x534(r8)
/* 80392DF4 0038FD34  90 A8 05 58 */	stw r5, 0x558(r8)
/* 80392DF8 0038FD38  90 A8 05 7C */	stw r5, 0x57c(r8)
/* 80392DFC 0038FD3C  90 A8 05 A0 */	stw r5, 0x5a0(r8)
/* 80392E00 0038FD40  90 A8 05 C4 */	stw r5, 0x5c4(r8)
/* 80392E04 0038FD44  90 A8 05 E8 */	stw r5, 0x5e8(r8)
/* 80392E08 0038FD48  90 A8 06 0C */	stw r5, 0x60c(r8)
/* 80392E0C 0038FD4C  90 A8 06 30 */	stw r5, 0x630(r8)
/* 80392E10 0038FD50  90 A8 06 54 */	stw r5, 0x654(r8)
/* 80392E14 0038FD54  90 A8 06 78 */	stw r5, 0x678(r8)
/* 80392E18 0038FD58  90 A8 06 9C */	stw r5, 0x69c(r8)
/* 80392E1C 0038FD5C  90 A8 06 C0 */	stw r5, 0x6c0(r8)
/* 80392E20 0038FD60  7C 09 03 A6 */	mtctr r0
/* 80392E24 0038FD64  2C 07 00 32 */	cmpwi r7, 0x32
/* 80392E28 0038FD68  40 80 00 10 */	bge .L_80392E38
.L_80392E2C:
/* 80392E2C 0038FD6C  94 A4 00 24 */	stwu r5, 0x24(r4)
/* 80392E30 0038FD70  38 E7 00 01 */	addi r7, r7, 1
/* 80392E34 0038FD74  42 00 FF F8 */	bdnz .L_80392E2C
.L_80392E38:
/* 80392E38 0038FD78  38 C6 00 01 */	addi r6, r6, 1
/* 80392E3C 0038FD7C  80 09 01 08 */	lwz r0, 0x108(r9)
/* 80392E40 0038FD80  80 89 00 9C */	lwz r4, 0x9c(r9)
/* 80392E44 0038FD84  2C 06 00 05 */	cmpwi r6, 5
/* 80392E48 0038FD88  39 29 00 04 */	addi r9, r9, 4
/* 80392E4C 0038FD8C  90 04 07 2C */	stw r0, 0x72c(r4)
/* 80392E50 0038FD90  41 80 FE EC */	blt .L_80392D3C
/* 80392E54 0038FD94  3B C0 00 00 */	li r30, 0
/* 80392E58 0038FD98  3C 80 55 55 */	lis r4, 0x55555556@ha
/* 80392E5C 0038FD9C  93 CD 99 84 */	stw r30, mDivePikiNum__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80392E60 0038FDA0  38 00 00 01 */	li r0, 1
/* 80392E64 0038FDA4  7C 7A 1B 78 */	mr r26, r3
/* 80392E68 0038FDA8  C2 A2 0C 48 */	lfs f21, lbl_8051EFA8@sda21(r2)
/* 80392E6C 0038FDAC  9B C3 01 44 */	stb r30, 0x144(r3)
/* 80392E70 0038FDB0  3B 24 55 56 */	addi r25, r4, 0x55555556@l
/* 80392E74 0038FDB4  CB 82 0C 50 */	lfd f28, lbl_8051EFB0@sda21(r2)
/* 80392E78 0038FDB8  3F E0 43 30 */	lis r31, 0x4330
/* 80392E7C 0038FDBC  98 03 01 35 */	stb r0, 0x135(r3)
/* 80392E80 0038FDC0  C3 A2 0C 30 */	lfs f29, lbl_8051EF90@sda21(r2)
/* 80392E84 0038FDC4  80 03 00 FC */	lwz r0, 0xfc(r3)
/* 80392E88 0038FDC8  80 63 00 94 */	lwz r3, 0x94(r3)
/* 80392E8C 0038FDCC  54 00 10 3A */	slwi r0, r0, 2
/* 80392E90 0038FDD0  C3 C2 0C 34 */	lfs f30, lbl_8051EF94@sda21(r2)
/* 80392E94 0038FDD4  7C 63 00 2E */	lwzx r3, r3, r0
/* 80392E98 0038FDD8  C3 E2 0C 38 */	lfs f31, lbl_8051EF98@sda21(r2)
/* 80392E9C 0038FDDC  80 63 00 08 */	lwz r3, 8(r3)
/* 80392EA0 0038FDE0  C2 82 0C 3C */	lfs f20, lbl_8051EF9C@sda21(r2)
/* 80392EA4 0038FDE4  C0 03 00 8C */	lfs f0, 0x8c(r3)
/* 80392EA8 0038FDE8  C3 03 00 9C */	lfs f24, 0x9c(r3)
/* 80392EAC 0038FDEC  EF 20 A8 28 */	fsubs f25, f0, f21
/* 80392EB0 0038FDF0  C2 C2 0C 44 */	lfs f22, lbl_8051EFA4@sda21(r2)
/* 80392EB4 0038FDF4  C3 42 0D 14 */	lfs f26, lbl_8051F074@sda21(r2)
/* 80392EB8 0038FDF8  C3 62 0C 2C */	lfs f27, lbl_8051EF8C@sda21(r2)
.L_80392EBC:
/* 80392EBC 0038FDFC  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 80392EC0 0038FE00  80 9A 00 9C */	lwz r4, 0x9c(r26)
/* 80392EC4 0038FE04  90 01 00 84 */	stw r0, 0x84(r1)
/* 80392EC8 0038FE08  38 61 00 2C */	addi r3, r1, 0x2c
/* 80392ECC 0038FE0C  38 A0 00 01 */	li r5, 1
/* 80392ED0 0038FE10  93 E1 00 80 */	stw r31, 0x80(r1)
/* 80392ED4 0038FE14  D3 24 00 0C */	stfs f25, 0xc(r4)
/* 80392ED8 0038FE18  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80392EDC 0038FE1C  D3 04 00 10 */	stfs f24, 0x10(r4)
/* 80392EE0 0038FE20  EC 00 E0 28 */	fsubs f0, f0, f28
/* 80392EE4 0038FE24  83 9A 00 9C */	lwz r28, 0x9c(r26)
/* 80392EE8 0038FE28  EE FA 00 32 */	fmuls f23, f26, f0
/* 80392EEC 0038FE2C  80 9C 00 04 */	lwz r4, 4(r28)
/* 80392EF0 0038FE30  4B CA 60 A9 */	bl getGlbVtx__7J2DPaneCFUc
/* 80392EF4 0038FE34  C2 61 00 30 */	lfs f19, 0x30(r1)
/* 80392EF8 0038FE38  38 61 00 20 */	addi r3, r1, 0x20
/* 80392EFC 0038FE3C  80 9C 00 00 */	lwz r4, 0(r28)
/* 80392F00 0038FE40  38 A0 00 00 */	li r5, 0
/* 80392F04 0038FE44  4B CA 60 95 */	bl getGlbVtx__7J2DPaneCFUc
/* 80392F08 0038FE48  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80392F0C 0038FE4C  38 61 00 14 */	addi r3, r1, 0x14
/* 80392F10 0038FE50  80 9C 00 04 */	lwz r4, 4(r28)
/* 80392F14 0038FE54  38 A0 00 01 */	li r5, 1
/* 80392F18 0038FE58  EE 40 98 28 */	fsubs f18, f0, f19
/* 80392F1C 0038FE5C  4B CA 60 7D */	bl getGlbVtx__7J2DPaneCFUc
/* 80392F20 0038FE60  C2 61 00 14 */	lfs f19, 0x14(r1)
/* 80392F24 0038FE64  38 61 00 08 */	addi r3, r1, 8
/* 80392F28 0038FE68  80 9C 00 00 */	lwz r4, 0(r28)
/* 80392F2C 0038FE6C  38 A0 00 00 */	li r5, 0
/* 80392F30 0038FE70  4B CA 60 69 */	bl getGlbVtx__7J2DPaneCFUc
/* 80392F34 0038FE74  C0 01 00 08 */	lfs f0, 8(r1)
/* 80392F38 0038FE78  38 61 00 5C */	addi r3, r1, 0x5c
/* 80392F3C 0038FE7C  38 A0 00 00 */	li r5, 0
/* 80392F40 0038FE80  EC 00 98 28 */	fsubs f0, f0, f19
/* 80392F44 0038FE84  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 80392F48 0038FE88  D2 5C 00 18 */	stfs f18, 0x18(r28)
/* 80392F4C 0038FE8C  80 9C 00 08 */	lwz r4, 8(r28)
/* 80392F50 0038FE90  4B CA 60 49 */	bl getGlbVtx__7J2DPaneCFUc
/* 80392F54 0038FE94  C2 61 00 60 */	lfs f19, 0x60(r1)
/* 80392F58 0038FE98  38 61 00 50 */	addi r3, r1, 0x50
/* 80392F5C 0038FE9C  80 9C 00 00 */	lwz r4, 0(r28)
/* 80392F60 0038FEA0  38 A0 00 00 */	li r5, 0
/* 80392F64 0038FEA4  4B CA 60 35 */	bl getGlbVtx__7J2DPaneCFUc
/* 80392F68 0038FEA8  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80392F6C 0038FEAC  38 61 00 44 */	addi r3, r1, 0x44
/* 80392F70 0038FEB0  80 9C 00 08 */	lwz r4, 8(r28)
/* 80392F74 0038FEB4  38 A0 00 00 */	li r5, 0
/* 80392F78 0038FEB8  EE 40 98 28 */	fsubs f18, f0, f19
/* 80392F7C 0038FEBC  4B CA 60 1D */	bl getGlbVtx__7J2DPaneCFUc
/* 80392F80 0038FEC0  C2 61 00 44 */	lfs f19, 0x44(r1)
/* 80392F84 0038FEC4  38 61 00 38 */	addi r3, r1, 0x38
/* 80392F88 0038FEC8  80 9C 00 00 */	lwz r4, 0(r28)
/* 80392F8C 0038FECC  38 A0 00 00 */	li r5, 0
/* 80392F90 0038FED0  4B CA 60 09 */	bl getGlbVtx__7J2DPaneCFUc
/* 80392F94 0038FED4  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80392F98 0038FED8  7F 9B E3 78 */	mr r27, r28
/* 80392F9C 0038FEDC  3B A0 00 00 */	li r29, 0
/* 80392FA0 0038FEE0  EC 00 98 28 */	fsubs f0, f0, f19
/* 80392FA4 0038FEE4  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 80392FA8 0038FEE8  D2 5C 00 20 */	stfs f18, 0x20(r28)
/* 80392FAC 0038FEEC  D3 7C 07 30 */	stfs f27, 0x730(r28)
.L_80392FB0:
/* 80392FB0 0038FEF0  4B D3 65 F1 */	bl rand
/* 80392FB4 0038FEF4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80392FB8 0038FEF8  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 80392FBC 0038FEFC  90 61 00 84 */	stw r3, 0x84(r1)
/* 80392FC0 0038FF00  38 61 00 74 */	addi r3, r1, 0x74
/* 80392FC4 0038FF04  38 A0 00 00 */	li r5, 0
/* 80392FC8 0038FF08  93 E1 00 80 */	stw r31, 0x80(r1)
/* 80392FCC 0038FF0C  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80392FD0 0038FF10  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80392FD4 0038FF14  EC 00 E0 28 */	fsubs f0, f0, f28
/* 80392FD8 0038FF18  93 E1 00 88 */	stw r31, 0x88(r1)
/* 80392FDC 0038FF1C  EC 20 E8 24 */	fdivs f1, f0, f29
/* 80392FE0 0038FF20  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 80392FE4 0038FF24  EC 00 E0 28 */	fsubs f0, f0, f28
/* 80392FE8 0038FF28  EC 1E B8 3C */	fnmsubs f0, f30, f0, f23
/* 80392FEC 0038FF2C  EC 1E 00 7A */	fmadds f0, f30, f1, f0
/* 80392FF0 0038FF30  D0 1B 00 28 */	stfs f0, 0x28(r27)
/* 80392FF4 0038FF34  80 9C 00 00 */	lwz r4, 0(r28)
/* 80392FF8 0038FF38  4B CA 5F A1 */	bl getGlbVtx__7J2DPaneCFUc
/* 80392FFC 0038FF3C  C2 41 00 78 */	lfs f18, 0x78(r1)
/* 80393000 0038FF40  38 61 00 68 */	addi r3, r1, 0x68
/* 80393004 0038FF44  80 9C 00 00 */	lwz r4, 0(r28)
/* 80393008 0038FF48  38 A0 00 00 */	li r5, 0
/* 8039300C 0038FF4C  4B CA 5F 8D */	bl getGlbVtx__7J2DPaneCFUc
/* 80393010 0038FF50  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 80393014 0038FF54  7C 79 E8 96 */	mulhw r3, r25, r29
/* 80393018 0038FF58  D0 1B 00 30 */	stfs f0, 0x30(r27)
/* 8039301C 0038FF5C  D2 5B 00 34 */	stfs f18, 0x34(r27)
/* 80393020 0038FF60  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80393024 0038FF64  C0 1B 00 30 */	lfs f0, 0x30(r27)
/* 80393028 0038FF68  7C 03 02 14 */	add r0, r3, r0
/* 8039302C 0038FF6C  1C 00 00 03 */	mulli r0, r0, 3
/* 80393030 0038FF70  D0 1B 00 38 */	stfs f0, 0x38(r27)
/* 80393034 0038FF74  C0 1B 00 34 */	lfs f0, 0x34(r27)
/* 80393038 0038FF78  7C 00 E8 50 */	subf r0, r0, r29
/* 8039303C 0038FF7C  D0 1B 00 3C */	stfs f0, 0x3c(r27)
/* 80393040 0038FF80  90 1B 00 2C */	stw r0, 0x2c(r27)
/* 80393044 0038FF84  4B D3 65 5D */	bl rand
/* 80393048 0038FF88  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8039304C 0038FF8C  93 E1 00 90 */	stw r31, 0x90(r1)
/* 80393050 0038FF90  90 01 00 94 */	stw r0, 0x94(r1)
/* 80393054 0038FF94  C8 01 00 90 */	lfd f0, 0x90(r1)
/* 80393058 0038FF98  EC 00 E0 28 */	fsubs f0, f0, f28
/* 8039305C 0038FF9C  EC 00 E8 24 */	fdivs f0, f0, f29
/* 80393060 0038FFA0  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80393064 0038FFA4  D0 1B 00 40 */	stfs f0, 0x40(r27)
/* 80393068 0038FFA8  4B D3 65 39 */	bl rand
/* 8039306C 0038FFAC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80393070 0038FFB0  93 E1 00 98 */	stw r31, 0x98(r1)
/* 80393074 0038FFB4  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80393078 0038FFB8  C8 01 00 98 */	lfd f0, 0x98(r1)
/* 8039307C 0038FFBC  EC 00 E0 28 */	fsubs f0, f0, f28
/* 80393080 0038FFC0  EC 00 E8 24 */	fdivs f0, f0, f29
/* 80393084 0038FFC4  FC 00 A0 40 */	fcmpo cr0, f0, f20
/* 80393088 0038FFC8  40 81 00 14 */	ble .L_8039309C
/* 8039308C 0038FFCC  C0 3B 00 40 */	lfs f1, 0x40(r27)
/* 80393090 0038FFD0  C0 02 0C 40 */	lfs f0, lbl_8051EFA0@sda21(r2)
/* 80393094 0038FFD4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80393098 0038FFD8  D0 1B 00 40 */	stfs f0, 0x40(r27)
.L_8039309C:
/* 8039309C 0038FFDC  4B D3 65 05 */	bl rand
/* 803930A0 0038FFE0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803930A4 0038FFE4  3B BD 00 01 */	addi r29, r29, 1
/* 803930A8 0038FFE8  90 01 00 9C */	stw r0, 0x9c(r1)
/* 803930AC 0038FFEC  2C 1D 00 32 */	cmpwi r29, 0x32
/* 803930B0 0038FFF0  38 00 00 02 */	li r0, 2
/* 803930B4 0038FFF4  93 E1 00 98 */	stw r31, 0x98(r1)
/* 803930B8 0038FFF8  C8 01 00 98 */	lfd f0, 0x98(r1)
/* 803930BC 0038FFFC  EC 00 E0 28 */	fsubs f0, f0, f28
/* 803930C0 00390000  EC 00 E8 24 */	fdivs f0, f0, f29
/* 803930C4 00390004  EC 15 B0 3A */	fmadds f0, f21, f0, f22
/* 803930C8 00390008  D0 1B 00 44 */	stfs f0, 0x44(r27)
/* 803930CC 0039000C  94 1B 00 24 */	stwu r0, 0x24(r27)
/* 803930D0 00390010  41 80 FE E0 */	blt .L_80392FB0
/* 803930D4 00390014  3B DE 00 01 */	addi r30, r30, 1
/* 803930D8 00390018  3B 5A 00 04 */	addi r26, r26, 4
/* 803930DC 0039001C  2C 1E 00 05 */	cmpwi r30, 5
/* 803930E0 00390020  41 80 FD DC */	blt .L_80392EBC
/* 803930E4 00390024  E3 E1 01 98 */	psq_l f31, 408(r1), 0, qr0
/* 803930E8 00390028  CB E1 01 90 */	lfd f31, 0x190(r1)
/* 803930EC 0039002C  E3 C1 01 88 */	psq_l f30, 392(r1), 0, qr0
/* 803930F0 00390030  CB C1 01 80 */	lfd f30, 0x180(r1)
/* 803930F4 00390034  E3 A1 01 78 */	psq_l f29, 376(r1), 0, qr0
/* 803930F8 00390038  CB A1 01 70 */	lfd f29, 0x170(r1)
/* 803930FC 0039003C  E3 81 01 68 */	psq_l f28, 360(r1), 0, qr0
/* 80393100 00390040  CB 81 01 60 */	lfd f28, 0x160(r1)
/* 80393104 00390044  E3 61 01 58 */	psq_l f27, 344(r1), 0, qr0
/* 80393108 00390048  CB 61 01 50 */	lfd f27, 0x150(r1)
/* 8039310C 0039004C  E3 41 01 48 */	psq_l f26, 328(r1), 0, qr0
/* 80393110 00390050  CB 41 01 40 */	lfd f26, 0x140(r1)
/* 80393114 00390054  E3 21 01 38 */	psq_l f25, 312(r1), 0, qr0
/* 80393118 00390058  CB 21 01 30 */	lfd f25, 0x130(r1)
/* 8039311C 0039005C  E3 01 01 28 */	psq_l f24, 296(r1), 0, qr0
/* 80393120 00390060  CB 01 01 20 */	lfd f24, 0x120(r1)
/* 80393124 00390064  E2 E1 01 18 */	psq_l f23, 280(r1), 0, qr0
/* 80393128 00390068  CA E1 01 10 */	lfd f23, 0x110(r1)
/* 8039312C 0039006C  E2 C1 01 08 */	psq_l f22, 264(r1), 0, qr0
/* 80393130 00390070  CA C1 01 00 */	lfd f22, 0x100(r1)
/* 80393134 00390074  E2 A1 00 F8 */	psq_l f21, 248(r1), 0, qr0
/* 80393138 00390078  CA A1 00 F0 */	lfd f21, 0xf0(r1)
/* 8039313C 0039007C  E2 81 00 E8 */	psq_l f20, 232(r1), 0, qr0
/* 80393140 00390080  CA 81 00 E0 */	lfd f20, 0xe0(r1)
/* 80393144 00390084  E2 61 00 D8 */	psq_l f19, 216(r1), 0, qr0
/* 80393148 00390088  CA 61 00 D0 */	lfd f19, 0xd0(r1)
/* 8039314C 0039008C  E2 41 00 C8 */	psq_l f18, 200(r1), 0, qr0
/* 80393150 00390090  CA 41 00 C0 */	lfd f18, 0xc0(r1)
/* 80393154 00390094  BB 21 00 A4 */	lmw r25, 0xa4(r1)
/* 80393158 00390098  80 01 01 A4 */	lwz r0, 0x1a4(r1)
/* 8039315C 0039009C  7C 08 03 A6 */	mtlr r0
/* 80393160 003900A0  38 21 01 A0 */	addi r1, r1, 0x1a0
/* 80393164 003900A4  4E 80 00 20 */	blr 
.endfn demoStart__Q28Morimura16TChallengeSelectFv

.fn doCreateObj__Q28Morimura21TChallengeSelectSceneFP10JKRArchive, global
/* 80393168 003900A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8039316C 003900AC  7C 08 02 A6 */	mflr r0
/* 80393170 003900B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80393174 003900B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80393178 003900B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8039317C 003900BC  7C 9E 23 78 */	mr r30, r4
/* 80393180 003900C0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80393184 003900C4  7C 7D 1B 78 */	mr r29, r3
/* 80393188 003900C8  38 60 01 50 */	li r3, 0x150
/* 8039318C 003900CC  4B C9 0D 19 */	bl __nw__FUl
/* 80393190 003900D0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80393194 003900D4  41 82 00 0C */	beq .L_803931A0
/* 80393198 003900D8  4B FF B8 21 */	bl __ct__Q28Morimura16TChallengeSelectFv
/* 8039319C 003900DC  7C 7F 1B 78 */	mr r31, r3
.L_803931A0:
/* 803931A0 003900E0  7F A3 EB 78 */	mr r3, r29
/* 803931A4 003900E4  7F E4 FB 78 */	mr r4, r31
/* 803931A8 003900E8  7F C5 F3 78 */	mr r5, r30
/* 803931AC 003900EC  48 0B EB C9 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 803931B0 003900F0  93 FD 02 20 */	stw r31, 0x220(r29)
/* 803931B4 003900F4  38 60 00 D8 */	li r3, 0xd8
/* 803931B8 003900F8  4B C9 0C ED */	bl __nw__FUl
/* 803931BC 003900FC  7C 60 1B 79 */	or. r0, r3, r3
/* 803931C0 00390100  41 82 00 14 */	beq .L_803931D4
/* 803931C4 00390104  3C 80 80 49 */	lis r4, lbl_804946F0@ha
/* 803931C8 00390108  38 84 46 F0 */	addi r4, r4, lbl_804946F0@l
/* 803931CC 0039010C  48 01 04 79 */	bl __ct__Q28Morimura17TConfirmEndWindowFPCc
/* 803931D0 00390110  7C 60 1B 78 */	mr r0, r3
.L_803931D4:
/* 803931D4 00390114  90 1D 02 24 */	stw r0, 0x224(r29)
/* 803931D8 00390118  7F A3 EB 78 */	mr r3, r29
/* 803931DC 0039011C  7F C5 F3 78 */	mr r5, r30
/* 803931E0 00390120  80 9D 02 24 */	lwz r4, 0x224(r29)
/* 803931E4 00390124  48 0B EB 91 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 803931E8 00390128  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803931EC 0039012C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803931F0 00390130  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803931F4 00390134  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803931F8 00390138  7C 08 03 A6 */	mtlr r0
/* 803931FC 0039013C  38 21 00 20 */	addi r1, r1, 0x20
/* 80393200 00390140  4E 80 00 20 */	blr 
.endfn doCreateObj__Q28Morimura21TChallengeSelectSceneFP10JKRArchive

.fn doStart__Q28Morimura21TChallengeSelectSceneFPQ26Screen13StartSceneArg, global
/* 80393204 00390144  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80393208 00390148  7C 08 02 A6 */	mflr r0
/* 8039320C 0039014C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80393210 00390150  80 63 02 20 */	lwz r3, 0x220(r3)
/* 80393214 00390154  81 83 00 00 */	lwz r12, 0(r3)
/* 80393218 00390158  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8039321C 0039015C  7D 89 03 A6 */	mtctr r12
/* 80393220 00390160  4E 80 04 21 */	bctrl 
/* 80393224 00390164  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80393228 00390168  38 60 00 01 */	li r3, 1
/* 8039322C 0039016C  7C 08 03 A6 */	mtlr r0
/* 80393230 00390170  38 21 00 10 */	addi r1, r1, 0x10
/* 80393234 00390174  4E 80 00 20 */	blr 
.endfn doStart__Q28Morimura21TChallengeSelectSceneFPQ26Screen13StartSceneArg

.fn getResName__Q28Morimura21TChallengeSelectSceneCFv, weak
/* 80393238 00390178  3C 60 80 49 */	lis r3, lbl_804946FC@ha
/* 8039323C 0039017C  38 63 46 FC */	addi r3, r3, lbl_804946FC@l
/* 80393240 00390180  4E 80 00 20 */	blr 
.endfn getResName__Q28Morimura21TChallengeSelectSceneCFv

.fn getSceneType__Q28Morimura21TChallengeSelectSceneFv, weak
/* 80393244 00390184  38 60 27 37 */	li r3, 0x2737
/* 80393248 00390188  4E 80 00 20 */	blr 
.endfn getSceneType__Q28Morimura21TChallengeSelectSceneFv

.fn getOwnerID__Q28Morimura21TChallengeSelectSceneFv, weak
/* 8039324C 0039018C  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80393250 00390190  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 80393254 00390194  4E 80 00 20 */	blr 
.endfn getOwnerID__Q28Morimura21TChallengeSelectSceneFv

.fn getMemberID__Q28Morimura21TChallengeSelectSceneFv, weak
/* 80393258 00390198  3C 80 4C 45 */	lis r4, 0x4C454354@ha
/* 8039325C 0039019C  3C 60 43 48 */	lis r3, 0x43485345@ha
/* 80393260 003901A0  38 84 43 54 */	addi r4, r4, 0x4C454354@l
/* 80393264 003901A4  38 63 53 45 */	addi r3, r3, 0x43485345@l
/* 80393268 003901A8  4E 80 00 20 */	blr 
.endfn getMemberID__Q28Morimura21TChallengeSelectSceneFv

.fn __dt__Q25efx2d11T2DChalDiveFv, weak
/* 8039326C 003901AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80393270 003901B0  7C 08 02 A6 */	mflr r0
/* 80393274 003901B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80393278 003901B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8039327C 003901BC  7C 9F 23 78 */	mr r31, r4
/* 80393280 003901C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80393284 003901C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80393288 003901C8  41 82 00 4C */	beq .L_803932D4
/* 8039328C 003901CC  3C 60 80 4E */	lis r3, __vt__Q25efx2d11T2DChalDive@ha
/* 80393290 003901D0  38 63 50 A8 */	addi r3, r3, __vt__Q25efx2d11T2DChalDive@l
/* 80393294 003901D4  90 7E 00 00 */	stw r3, 0(r30)
/* 80393298 003901D8  38 03 00 18 */	addi r0, r3, 0x18
/* 8039329C 003901DC  90 1E 00 08 */	stw r0, 8(r30)
/* 803932A0 003901E0  41 82 00 24 */	beq .L_803932C4
/* 803932A4 003901E4  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803932A8 003901E8  38 7E 00 08 */	addi r3, r30, 8
/* 803932AC 003901EC  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803932B0 003901F0  38 80 00 00 */	li r4, 0
/* 803932B4 003901F4  90 BE 00 00 */	stw r5, 0(r30)
/* 803932B8 003901F8  38 05 00 18 */	addi r0, r5, 0x18
/* 803932BC 003901FC  90 1E 00 08 */	stw r0, 8(r30)
/* 803932C0 00390200  4B CF C9 DD */	bl __dt__18JPAEmitterCallBackFv
.L_803932C4:
/* 803932C4 00390204  7F E0 07 35 */	extsh. r0, r31
/* 803932C8 00390208  40 81 00 0C */	ble .L_803932D4
/* 803932CC 0039020C  7F C3 F3 78 */	mr r3, r30
/* 803932D0 00390210  4B C9 0D E5 */	bl __dl__FPv
.L_803932D4:
/* 803932D4 00390214  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803932D8 00390218  7F C3 F3 78 */	mr r3, r30
/* 803932DC 0039021C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803932E0 00390220  83 C1 00 08 */	lwz r30, 8(r1)
/* 803932E4 00390224  7C 08 03 A6 */	mtlr r0
/* 803932E8 00390228  38 21 00 10 */	addi r1, r1, 0x10
/* 803932EC 0039022C  4E 80 00 20 */	blr 
.endfn __dt__Q25efx2d11T2DChalDiveFv

.fn getDispMemberBase__Q28Morimura16TChallengeSelectFv, weak
/* 803932F0 00390230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803932F4 00390234  7C 08 02 A6 */	mflr r0
/* 803932F8 00390238  90 01 00 14 */	stw r0, 0x14(r1)
/* 803932FC 0039023C  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80393300 00390240  28 00 00 00 */	cmplwi r0, 0
/* 80393304 00390244  41 82 00 0C */	beq .L_80393310
/* 80393308 00390248  80 63 00 90 */	lwz r3, 0x90(r3)
/* 8039330C 0039024C  48 00 00 08 */	b .L_80393314
.L_80393310:
/* 80393310 00390250  48 0C 0C 99 */	bl getDispMember__Q26Screen7ObjBaseFv
.L_80393314:
/* 80393314 00390254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80393318 00390258  7C 08 03 A6 */	mtlr r0
/* 8039331C 0039025C  38 21 00 10 */	addi r1, r1, 0x10
/* 80393320 00390260  4E 80 00 20 */	blr 
.endfn getDispMemberBase__Q28Morimura16TChallengeSelectFv

.fn __sinit_challengeSelect2D_cpp, local
/* 80393324 00390264  C0 02 0D 18 */	lfs f0, lbl_8051F078@sda21(r2)
/* 80393328 00390268  38 6D 99 88 */	addi r3, r13, mMetOffset__Q28Morimura16TChallengeSelect@sda21
/* 8039332C 0039026C  D0 0D 99 88 */	stfs f0, mMetOffset__Q28Morimura16TChallengeSelect@sda21(r13)
/* 80393330 00390270  D0 03 00 04 */	stfs f0, 4(r3)
/* 80393334 00390274  4E 80 00 20 */	blr 
.endfn __sinit_challengeSelect2D_cpp

.fn "@24@__dt__Q28Morimura16TChallengeSelectFv", weak
/* 80393338 00390278  38 63 FF E8 */	addi r3, r3, -24
/* 8039333C 0039027C  4B FF B7 B8 */	b __dt__Q28Morimura16TChallengeSelectFv
.endfn "@24@__dt__Q28Morimura16TChallengeSelectFv"

.fn "@8@__dt__Q25efx2d11T2DChalDiveFv", weak
/* 80393340 00390280  38 63 FF F8 */	addi r3, r3, -8
/* 80393344 00390284  4B FF FF 28 */	b __dt__Q25efx2d11T2DChalDiveFv
.endfn "@8@__dt__Q25efx2d11T2DChalDiveFv"
