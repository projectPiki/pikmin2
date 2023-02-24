.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_vsSelect2D_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80494B18, local
	.asciz "vsSelect2D"
.endobj lbl_80494B18
.balign 4
.obj lbl_80494B24, local
	.asciz "vsSelect2D.cpp"
.endobj lbl_80494B24
.balign 4
.obj lbl_80494B34, local
	.asciz "P2Assert"
.endobj lbl_80494B34
.balign 4
.obj lbl_80494B40, local
	.asciz "vsSelect"
.endobj lbl_80494B40
.balign 4
.obj lbl_80494B4C, local
	.asciz "timg/otegaru.bti"
.endobj lbl_80494B4C
.balign 4
.obj lbl_80494B60, local
	.asciz "timg/ujyaujya.bti"
.endobj lbl_80494B60
.balign 4
.obj lbl_80494B74, local
	.asciz "timg/hirobiro.bti"
.endobj lbl_80494B74
.balign 4
.obj lbl_80494B88, local
	.asciz "timg/karakuchi.bti"
.endobj lbl_80494B88
.balign 4
.obj lbl_80494B9C, local
	.asciz "timg/semai.bti"
.endobj lbl_80494B9C
.balign 4
.obj lbl_80494BAC, local
	.asciz "timg/hiyahiya.bti"
.endobj lbl_80494BAC
.balign 4
.obj lbl_80494BC0, local
	.asciz "timg/nobinobi.bti"
.endobj lbl_80494BC0
.balign 4
.obj lbl_80494BD4, local
	.asciz "timg/kakukaku.bti"
.endobj lbl_80494BD4
.balign 4
.obj lbl_80494BE8, local
	.asciz "timg/meiro.bti"
.endobj lbl_80494BE8
.balign 4
.obj lbl_80494BF8, local
	.asciz "timg/tile.bti"
.endobj lbl_80494BF8
.balign 4
.obj lbl_80494C08, local
	.4byte lbl_80494B4C
	.4byte lbl_80494B60
	.4byte lbl_80494B74
	.4byte lbl_80494B88
	.4byte lbl_80494B9C
	.4byte lbl_80494BAC
	.4byte lbl_80494BC0
	.4byte lbl_80494BD4
	.4byte lbl_80494BE8
	.4byte lbl_80494BF8
.endobj lbl_80494C08
.balign 4
.obj lbl_80494C30, local
	.asciz "timg/orima001.bti"
.endobj lbl_80494C30
.balign 4
.obj lbl_80494C44, local
	.asciz "timg/orima002.bti"
.endobj lbl_80494C44
.balign 4
.obj lbl_80494C58, local
	.asciz "timg/orima003.bti"
.endobj lbl_80494C58
.balign 4
.obj lbl_80494C6C, local
	.asciz "timg/orima004.bti"
.endobj lbl_80494C6C
.balign 4
.obj lbl_80494C80, local
	.asciz "timg/orima005.bti"
.endobj lbl_80494C80
.balign 4
.obj lbl_80494C94, local
	.4byte lbl_80494C30
	.4byte lbl_80494C44
	.4byte lbl_80494C58
	.4byte lbl_80494C6C
	.4byte lbl_80494C80
.endobj lbl_80494C94
.balign 4
.obj lbl_80494CA8, local
	.asciz "timg/lui001.bti"
.endobj lbl_80494CA8
.balign 4
.obj lbl_80494CB8, local
	.asciz "timg/lui002.bti"
.endobj lbl_80494CB8
.balign 4
.obj lbl_80494CC8, local
	.asciz "timg/lui003.bti"
.endobj lbl_80494CC8
.balign 4
.obj lbl_80494CD8, local
	.asciz "timg/lui004.bti"
.endobj lbl_80494CD8
.balign 4
.obj lbl_80494CE8, local
	.asciz "timg/lui005.bti"
.endobj lbl_80494CE8
.balign 4
.obj lbl_80494CF8, local
	.4byte lbl_80494CA8
	.4byte lbl_80494CB8
	.4byte lbl_80494CC8
	.4byte lbl_80494CD8
	.4byte lbl_80494CE8
.endobj lbl_80494CF8
.balign 8
.obj lbl_80494D10, local
	.8byte 0x503069636F6E3030
	.8byte 0x503069636F6E3031
	.8byte 0x503069636F6E3032
	.8byte 0x503069636F6E3033
	.8byte 0x503069636F6E3034
	.8byte 0x503069636F6E3035
	.8byte 0x503169636F6E3030
	.8byte 0x503169636F6E3031
	.8byte 0x503169636F6E3032
	.8byte 0x503169636F6E3033
	.8byte 0x503169636F6E3034
	.8byte 0x503169636F6E3035
.endobj lbl_80494D10
.balign 8
.obj lbl_80494D70, local
	.8byte 0x0054626D656E7533
	.8byte 0x0054626D656E7534
	.8byte 0x0054626D656E7535
.endobj lbl_80494D70
.balign 8
.obj lbl_80494D88, local
	.8byte 0x00004E72705F3030
	.8byte 0x00004E72705F3031
	.8byte 0x00004E72705F3032
	.8byte 0x00004E72705F3033
	.8byte 0x00004E72705F3034
	.8byte 0x00004E72705F3035
	.8byte 0x00004E72705F3036
	.8byte 0x00004E72705F3037
	.8byte 0x00004E72705F3038
	.8byte 0x00004E72705F3039
.endobj lbl_80494D88
.balign 8
.obj lbl_80494DD8, local
	.8byte 0x00004E62705F3030
	.8byte 0x00004E62705F3031
	.8byte 0x00004E62705F3032
	.8byte 0x00004E62705F3033
	.8byte 0x00004E62705F3034
	.8byte 0x00004E62705F3035
	.8byte 0x00004E62705F3036
	.8byte 0x00004E62705F3037
	.8byte 0x00004E62705F3038
	.8byte 0x00004E62705F3039
.endobj lbl_80494DD8
.balign 8
.obj lbl_80494E28, local
	.8byte 0x00546D656E753030
	.8byte 0x00546D656E753031
	.8byte 0x00546D656E753032
	.8byte 0x00546D656E753033
	.8byte 0x00546D656E753034
.endobj lbl_80494E28
.balign 4
.obj lbl_80494E50, local
	.asciz "set DebugHeapParent. mail to morimun.\n"
.endobj lbl_80494E50
.balign 4
.obj lbl_80494E78, local
	.asciz "red_pod.blo"
.endobj lbl_80494E78
.balign 4
.obj lbl_80494E84, local
	.asciz "red_pod.bck"
.endobj lbl_80494E84
.balign 4
.obj lbl_80494E90, local
	.asciz "red_pod.btp"
.endobj lbl_80494E90
.balign 4
.obj lbl_80494E9C, local
	.asciz "blue_pod.blo"
.endobj lbl_80494E9C
.balign 4
.obj lbl_80494EAC, local
	.asciz "blue_pod.bck"
.endobj lbl_80494EAC
.balign 4
.obj lbl_80494EBC, local
	.asciz "blue_pod.btp"
.endobj lbl_80494EBC
.balign 4
.obj lbl_80494ECC, local
	.asciz "vsSelectTexture"
.endobj lbl_80494ECC
.balign 4
.obj lbl_80494EDC, local
	.asciz "res_vsSelectTexture.szs"
.endobj lbl_80494EDC
.balign 4
.obj lbl_80494EF4, local
	.asciz "arcName = %s\n"
.endobj lbl_80494EF4
.balign 4
.obj lbl_80494F04, local
	.asciz "timg/loozy_icon.bti"
.endobj lbl_80494F04
.balign 4
.obj lbl_80494F18, local
	.asciz "vs_slot_texture.blo"
.endobj lbl_80494F18
.balign 4
.obj lbl_80494F2C, local
	.asciz "otegaru.bti"
.endobj lbl_80494F2C
.balign 4
.obj lbl_80494F38, local
	.asciz "AK_kagerouRR.bti"
.endobj lbl_80494F38
.balign 4
.obj lbl_80494F4C, local
	.asciz "vs_select_main.blo"
.endobj lbl_80494F4C
.balign 4
.obj lbl_80494F60, local
	.asciz "vs_select_main.btk"
.endobj lbl_80494F60
.balign 4
.obj lbl_80494F74, local
	.asciz "vs_select_main_02.btk"
.endobj lbl_80494F74
.balign 4
.obj lbl_80494F8C, local
	.asciz "btnmsg[%d] is unknown"
.endobj lbl_80494F8C
.balign 4
.obj lbl_80494FA4, local
	.asciz "vs_select_list.blo"
.endobj lbl_80494FA4
.balign 4
.obj lbl_80494FB8, local
	.asciz "vs_select_bg.blo"
.endobj lbl_80494FB8
.balign 4
.obj lbl_80494FCC, local
	.asciz "vs_select_bg.btk"
.endobj lbl_80494FCC
.balign 4
.obj lbl_80494FE0, local
	.asciz "vs_select_fire.blo"
.endobj lbl_80494FE0
.balign 4
.obj lbl_80494FF4, local
	.asciz "vs_select_fire.btk"
.endobj lbl_80494FF4
.balign 4
.obj lbl_80495008, local
	.asciz "vs_select_fire_02.btk"
.endobj lbl_80495008
.balign 4
.obj lbl_80495020, local
	.asciz "vs_main_rule_window.blo"
.endobj lbl_80495020
.balign 4
.obj lbl_80495038, local
	.asciz "vs_main_rule_window.btk"
.endobj lbl_80495038
.balign 4
.obj lbl_80495050, local
	.asciz "vs_main_rule_window_02.btk"
.endobj lbl_80495050
.balign 4
.obj lbl_8049506C, local
	.asciz "vs_main_rule_window_03.btk"
.endobj lbl_8049506C
.balign 4
.obj lbl_80495088, local
	.asciz "vs_main_rule_window_04.btk"
.endobj lbl_80495088
.balign 4
.obj lbl_804950A4, local
	.asciz "vs_main_rule_window_05.btk"
.endobj lbl_804950A4
.balign 4
.obj lbl_804950C0, local
	.asciz "vs_main_rule_window_06.btk"
.endobj lbl_804950C0
.balign 4
.obj lbl_804950DC, local
	.asciz "vs_main_rule_window_07.btk"
.endobj lbl_804950DC
.balign 4
.obj lbl_804950F8, local
	.asciz "vs_main_rule_window_08.btk"
.endobj lbl_804950F8
.balign 4
.obj lbl_80495114, local
	.asciz "vs_main_rule_window_09.btk"
.endobj lbl_80495114
.balign 4
.obj lbl_80495130, local
	.asciz "vs_main_rule_window_10.btk"
.endobj lbl_80495130
.balign 4
.obj lbl_8049514C, local
	.asciz "vs_main_rule_window_11.btk"
.endobj lbl_8049514C
.balign 4
.obj lbl_80495168, local
	.asciz "vs_main_rule_window_12.btk"
.endobj lbl_80495168
.balign 4
.obj lbl_80495184, local
	.asciz "navi_l.bti"
.endobj lbl_80495184
.balign 4
.obj lbl_80495190, local
	.asciz "coursename[%d] not find\n"
.endobj lbl_80495190
.balign 4
.obj lbl_804951AC, local
	.asciz "pictureframe[%d] not find\n"
.endobj lbl_804951AC
.balign 4
.obj lbl_804951C8, local
	.asciz "endWindow"
.endobj lbl_804951C8
.balign 4
.obj lbl_804951D4, local
	.asciz "res_vsSelect.szs"
.endobj lbl_804951D4
.balign 4
.obj lbl_804951E8, local
	.asciz "screenObj.h"
.endobj lbl_804951E8

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj lbl_804E5328, local # not in the map
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x00000003
	.4byte 0x00000000
.endobj lbl_804E5328
.obj mOrimaTexture__Q28Morimura9TVsSelect, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj mOrimaTexture__Q28Morimura9TVsSelect
.obj mLouieTexture__Q28Morimura9TVsSelect, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj mLouieTexture__Q28Morimura9TVsSelect
.balign 8
.obj slotIDInfo__8Morimura, local
	.4byte 0x00000006
	.4byte 0x00000000
	.4byte 0x00323034
	.4byte 0x325F3030
	.4byte 0x00000007
	.4byte 0x00000001
	.4byte 0x00323034
	.4byte 0x315F3030
	.4byte 0x00000008
	.4byte 0x00000005
	.4byte 0x00323034
	.4byte 0x395F3030
	.4byte 0x00000009
	.4byte 0x00000003
	.4byte 0x00323034
	.4byte 0x345F3030
	.4byte 0x0000000A
	.4byte 0x00000004
	.4byte 0x00323034
	.4byte 0x355F3030
	.4byte 0x0000000B
	.4byte 0x00000002
	.4byte 0x00323035
	.4byte 0x325F3030
	.4byte 0x00000000
	.4byte 0x00000006
	.4byte 0x00323034
	.4byte 0x365F3030
	.4byte 0x00000001
	.4byte 0x00000007
	.4byte 0x00323035
	.4byte 0x305F3030
	.4byte 0x00000002
	.4byte 0x00000008
	.4byte 0x00323035
	.4byte 0x315F3030
	.4byte 0x00000003
	.4byte 0x00000009
	.4byte 0x00323034
	.4byte 0x375F3030
	.4byte 0x00000004
	.4byte 0x0000000A
	.4byte 0x00323034
	.4byte 0x385F3030
	.4byte 0x00000005
	.4byte 0x0000000B
	.4byte 0x00323034
	.4byte 0x335F3030
.endobj slotIDInfo__8Morimura
.balign 4
.obj __vt__Q28Morimura14TVsSelectScene, global
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura14TVsSelectSceneFv
	.4byte getOwnerID__Q28Morimura14TVsSelectSceneFv
	.4byte getMemberID__Q28Morimura14TVsSelectSceneFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura14TVsSelectSceneCFv
	.4byte doCreateObj__Q28Morimura14TVsSelectSceneFP10JKRArchive
	.4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q28Morimura14TVsSelectSceneFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv
.endobj __vt__Q28Morimura14TVsSelectScene
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.obj __vt__Q28Morimura19TVsSelectListScreen, weak
	.4byte 0
	.4byte 0
	.4byte create__Q28Morimura19TVsSelectListScreenFPCcUl
	.4byte update__Q28Morimura19TVsSelectListScreenFv
	.4byte draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
.endobj __vt__Q28Morimura19TVsSelectListScreen
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.obj __vt__Q28Morimura9TVsSelect, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura9TVsSelectFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura9TVsSelectFv"
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
	.4byte doCreate__Q28Morimura9TVsSelectFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura9TVsSelectFv
	.4byte doUpdate__Q28Morimura9TVsSelectFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeoutFinish__Q28Morimura9TVsSelectFv
	.4byte doDraw__Q28Morimura9TVsSelectFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte getDispMemberBase__Q28Morimura9TVsSelectFv
	.4byte isListShow__Q28Morimura11TScrollListFi
	.4byte paneInit__Q28Morimura9TVsSelectFv
	.4byte changePaneInfo__Q28Morimura9TVsSelectFv
	.4byte getIdMax__Q28Morimura9TVsSelectFv
	.4byte getNameID__Q28Morimura9TVsSelectFi
	.4byte getUpdateIndex__Q28Morimura11TScrollListFRib
	.4byte setShortenIndex__Q28Morimura9TVsSelectFiib
	.4byte doUpdateIn__Q28Morimura11TScrollListFv
	.4byte doUpdateOut__Q28Morimura11TScrollListFv
	.4byte changeTextTevBlock__Q28Morimura11TScrollListFi
	.4byte updateIndex__Q28Morimura11TScrollListFb
	.4byte setPaneCharacter__Q28Morimura11TScrollListFi
.endobj __vt__Q28Morimura9TVsSelect
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.obj __vt__Q28Morimura17TVsSelectCBWinNum, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura17TVsSelectCBWinNumFv
	.4byte getChildCount__5CNodeFv
	.4byte update__Q28Morimura17TVsSelectCBWinNumFv
	.4byte draw__Q32og6Screen18CallBack_CounterRVFR8GraphicsR14J2DGrafContext
	.4byte doInit__Q29P2DScreen4NodeFv
	.4byte init__Q32og6Screen19CallBack_CounterDayFP9J2DScreenUxUxUxPUlb
	.4byte show__Q32og6Screen19CallBack_CounterDayFv
	.4byte hide__Q32og6Screen19CallBack_CounterDayFv
	.4byte setValue__Q28Morimura17TVsSelectCBWinNumFbb
	.4byte setValue__Q32og6Screen19CallBack_CounterDayFv
.endobj __vt__Q28Morimura17TVsSelectCBWinNum
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.obj __vt__Q28Morimura15TVsSelectScreen, global
	.4byte 0
	.4byte 0
	.4byte create__Q28Morimura15TVsSelectScreenFPCcUl
	.4byte update__Q28Morimura11TScreenBaseFv
	.4byte draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
.endobj __vt__Q28Morimura15TVsSelectScreen
.obj __vt__Q25efx2d13T2DBattleDive, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d8TSimple3FPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TSimple3Fv
	.4byte fade__Q25efx2d8TSimple3Fv
	.4byte setGroup__Q25efx2d5TBaseFUc
.endobj __vt__Q25efx2d13T2DBattleDive
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.obj __vt__Q28Morimura26TVsSelectExplanationWindow, global
	.4byte 0
	.4byte 0
	.4byte create__Q28Morimura26TVsSelectExplanationWindowFPCcUl
	.4byte update__Q28Morimura24TSelectExplanationWindowFv
	.4byte draw__Q28Morimura24TSelectExplanationWindowFR8GraphicsP13J2DPerspGraph
	.4byte screenScaleUp__Q28Morimura26TVsSelectExplanationWindowFv
.endobj __vt__Q28Morimura26TVsSelectExplanationWindow
.obj __vt__Q28Morimura16TVsSelectIndPane, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura16TVsSelectIndPaneFv
	.4byte getChildCount__5CNodeFv
	.4byte draw__Q28Morimura16TVsSelectIndPaneFv
.endobj __vt__Q28Morimura16TVsSelectIndPane

.section .bss  # 0x804EFC20 - 0x8051467C
# vsSelect2D.cpp
.comm mScrollParm__Q28Morimura9TVsSelect, 0x14, 4

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj mAngRate__Q28Morimura9TVsSelect, global
	.float 0.2
.endobj mAngRate__Q28Morimura9TVsSelect
.obj mMoveSpeed__Q28Morimura9TVsSelect, global
	.float 25.0
.endobj mMoveSpeed__Q28Morimura9TVsSelect
.obj mIndVal__Q28Morimura9TVsSelect, global
	.float 0.05
.endobj mIndVal__Q28Morimura9TVsSelect
.obj mIndShuki__Q28Morimura9TVsSelect, global
	.float 0.3
.endobj mIndShuki__Q28Morimura9TVsSelect
.obj mZoomFrameMax__Q28Morimura9TVsSelect, global
	.float 25.0
.endobj mZoomFrameMax__Q28Morimura9TVsSelect
.obj mTestVal__Q28Morimura9TVsSelect, global
	.float 10.0
.endobj mTestVal__Q28Morimura9TVsSelect
.obj mAngUp__Q28Morimura9TVsSelect, global
	.float 0.03
.endobj mAngUp__Q28Morimura9TVsSelect
.obj mWindowScale__Q28Morimura9TVsSelect, global
	.float 1.0
.endobj mWindowScale__Q28Morimura9TVsSelect
.obj mDemoScaleMax__Q28Morimura9TVsSelect, global
	.float 2.2
.endobj mDemoScaleMax__Q28Morimura9TVsSelect
.obj mDemoScale__Q28Morimura9TVsSelect, global
	.float 1.0
.endobj mDemoScale__Q28Morimura9TVsSelect
.obj mDemoOffsetMax__Q28Morimura9TVsSelect, global
	.float 290.0
.endobj mDemoOffsetMax__Q28Morimura9TVsSelect
.obj mFireAlphaRate__Q28Morimura9TVsSelect, global
	.float 0.5
.endobj mFireAlphaRate__Q28Morimura9TVsSelect

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mDebugHeapParent__Q28Morimura9TVsSelect, global
	.skip 0x4
.endobj mDebugHeapParent__Q28Morimura9TVsSelect
.obj mDebugHeap__Q28Morimura9TVsSelect, global
	.skip 0x4
.endobj mDebugHeap__Q28Morimura9TVsSelect
.obj mPikiOffset__Q28Morimura7TVsPiki, global
	.skip 0x8
.endobj mPikiOffset__Q28Morimura7TVsPiki
.obj mForceDemoStart__Q28Morimura9TVsSelect, global
	.skip 0x1
.endobj mForceDemoStart__Q28Morimura9TVsSelect
.obj mLoopDrum__Q28Morimura9TVsSelect, global
	.skip 0x1
.endobj mLoopDrum__Q28Morimura9TVsSelect
.obj mCanCancel__Q28Morimura9TVsSelect, global
	.skip 0x1
.endobj mCanCancel__Q28Morimura9TVsSelect

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051F170, local
	.float 0.0
.endobj lbl_8051F170
.obj lbl_8051F174, local
	.float 640.0
.endobj lbl_8051F174
.obj lbl_8051F178, local
	.float 480.0
.endobj lbl_8051F178
.obj lbl_8051F17C, local
	.float -1.0
.endobj lbl_8051F17C
.obj lbl_8051F180, local
	.float 1.0
.endobj lbl_8051F180
.obj lbl_8051F184, local
	.float 0.017453292
.endobj lbl_8051F184
.obj lbl_8051F188, local
	.float 0.5
.endobj lbl_8051F188
.obj lbl_8051F18C, local
	.float -800.0
.endobj lbl_8051F18C
.obj lbl_8051F190, local
	.float 20.0
.endobj lbl_8051F190
.balign 8
.obj lbl_8051F198, local
	.8byte 0x4330000080000000
.endobj lbl_8051F198
.obj lbl_8051F1A0, local
	.float 5.0
.endobj lbl_8051F1A0
.obj lbl_8051F1A4, local # pi/10
	.float 0.31415927
.endobj lbl_8051F1A4
.obj lbl_8051F1A8, local # pi
	.float 3.1415927
.endobj lbl_8051F1A8
.obj lbl_8051F1AC, local
	.float -20.0
.endobj lbl_8051F1AC
.obj lbl_8051F1B0, local
	.float -325.9493
.endobj lbl_8051F1B0
.obj lbl_8051F1B4, local
	.float 325.9493
.endobj lbl_8051F1B4
.obj lbl_8051F1B8, local
	.float 50.0
.endobj lbl_8051F1B8
.obj lbl_8051F1BC, local
	.float 12.0
.endobj lbl_8051F1BC
.obj lbl_8051F1C0, local
	.float -100.0
.endobj lbl_8051F1C0
.obj lbl_8051F1C4, local
	.float 32768.0
.endobj lbl_8051F1C4
.obj lbl_8051F1C8, local # tau
	.float 6.2831855
.endobj lbl_8051F1C8
.obj lbl_8051F1CC, local
	.float 0.05
.endobj lbl_8051F1CC
.obj lbl_8051F1D0, local
	.float 0.4
.endobj lbl_8051F1D0
.obj lbl_8051F1D4, local
	.float 360.0
.endobj lbl_8051F1D4
.obj lbl_8051F1D8, local
	.float 0.1
.endobj lbl_8051F1D8
.obj lbl_8051F1DC, local
	.float -240.0
.endobj lbl_8051F1DC
.obj lbl_8051F1E0, local
	.float -320.0
.endobj lbl_8051F1E0
.obj lbl_8051F1E4, local
	.float 1.25
.endobj lbl_8051F1E4
.obj lbl_8051F1E8, local
	.float -30.0
.endobj lbl_8051F1E8
.obj lbl_8051F1EC, local
	.float 2.0
.endobj lbl_8051F1EC
.obj lbl_8051F1F0, local
	.float 16.0
.endobj lbl_8051F1F0
.obj lbl_8051F1F4, local
	.float 30.0
.endobj lbl_8051F1F4
.obj lbl_8051F1F8, local
	.float 0.8
.endobj lbl_8051F1F8
.obj lbl_8051F1FC, local
	.float 0.25
.endobj lbl_8051F1FC
.obj lbl_8051F200, local
	.float 60.0
.endobj lbl_8051F200
.obj lbl_8051F204, local
	.float 115.0
.endobj lbl_8051F204
.obj lbl_8051F208, local
	.float 170.0
.endobj lbl_8051F208
.obj lbl_8051F20C, local
	.float 470.0
.endobj lbl_8051F20C
.obj lbl_8051F210, local
	.float 420.0
.endobj lbl_8051F210
.obj lbl_8051F214, local
	.float -15.0
.endobj lbl_8051F214
.obj lbl_8051F218, local
	.float 0.99
.endobj lbl_8051F218
.obj lbl_8051F21C, local
	.float 1.5
.endobj lbl_8051F21C
.obj lbl_8051F220, local
	.float 2.5
.endobj lbl_8051F220
.balign 8
.obj lbl_8051F228, local # u64 literal
	.8byte 0x00343737315F3030
.endobj lbl_8051F228
.obj lbl_8051F230, local
	.float 99.0
.endobj lbl_8051F230
.obj lbl_8051F234, local
	.float 0.7
.endobj lbl_8051F234
.obj lbl_8051F238, local
	.float 0.3
.endobj lbl_8051F238
.obj lbl_8051F23C, local
	.float 336.0
.endobj lbl_8051F23C
.obj lbl_8051F240, local
	.float 240.0
.endobj lbl_8051F240
.obj lbl_8051F244, local
	.float 400.0
.endobj lbl_8051F244
.obj lbl_8051F248, local
	.float 35.0
.endobj lbl_8051F248
.obj lbl_8051F24C, local
	.float 100.0
.endobj lbl_8051F24C
.obj lbl_8051F250, local
	.float 243.0
.endobj lbl_8051F250
.obj lbl_8051F254, local
	.float 40.0
.endobj lbl_8051F254
.obj lbl_8051F258, local
	.float 324.0
.endobj lbl_8051F258
.obj lbl_8051F25C, local
	.float 1.1
.endobj lbl_8051F25C
.obj lbl_8051F260, local
	.float -3.0
.endobj lbl_8051F260
.obj lbl_8051F264, local
	.float 600.0
.endobj lbl_8051F264
.obj lbl_8051F268, local # pi/2
	.float 1.5707964
.endobj lbl_8051F268
.obj lbl_8051F26C, local
	.float -600.0
.endobj lbl_8051F26C
.obj lbl_8051F270, local
	.float 255.0
.endobj lbl_8051F270
.obj lbl_8051F274, local
	.float 0.2
.endobj lbl_8051F274
.obj lbl_8051F278, local
	.float 0.9
.endobj lbl_8051F278
.obj lbl_8051F27C, local
	.float 386.0
.endobj lbl_8051F27C
.obj lbl_8051F280, local
	.float 290.0
.endobj lbl_8051F280
.obj lbl_8051F284, local
	.float 25.0
.endobj lbl_8051F284
.balign 8
.obj lbl_8051F288, local
	.8byte 0x4330000000000000
.endobj lbl_8051F288
.obj lbl_8051F290, local
	.float 10.0
.endobj lbl_8051F290
.obj lbl_8051F294, local
	.float 320.0
.endobj lbl_8051F294
.obj lbl_8051F298, local
	.float 160000.0
.endobj lbl_8051F298
.obj lbl_8051F29C, local
	.float 4.0
.endobj lbl_8051F29C
.obj lbl_8051F2A0, local
	.float 3.0
.endobj lbl_8051F2A0
.obj lbl_8051F2A4, local
	.float 15.0
.endobj lbl_8051F2A4
.obj lbl_8051F2A8, local
	.float -50.0
.endobj lbl_8051F2A8
.obj lbl_8051F2AC, local
	.float 180.0
.endobj lbl_8051F2AC
.obj lbl_8051F2B0, local
	.float 12.5
.endobj lbl_8051F2B0
.obj lbl_8051F2B4, local
	.float -0.5
.endobj lbl_8051F2B4
.obj lbl_8051F2B8, local
	.float 8.0
.endobj lbl_8051F2B8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn draw__Q28Morimura16TVsSelectIndPaneFv, global
/* 8039982C 0039676C  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 80399830 00396770  7C 08 02 A6 */	mflr r0
/* 80399834 00396774  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 80399838 00396778  90 01 01 64 */	stw r0, 0x164(r1)
/* 8039983C 0039677C  FC 40 08 90 */	fmr f2, f1
/* 80399840 00396780  C0 62 0E 14 */	lfs f3, lbl_8051F174@sda21(r2)
/* 80399844 00396784  93 E1 01 5C */	stw r31, 0x15c(r1)
/* 80399848 00396788  7C 7F 1B 78 */	mr r31, r3
/* 8039984C 0039678C  C0 82 0E 18 */	lfs f4, lbl_8051F178@sda21(r2)
/* 80399850 00396790  38 61 00 80 */	addi r3, r1, 0x80
/* 80399854 00396794  C0 A2 0E 1C */	lfs f5, lbl_8051F17C@sda21(r2)
/* 80399858 00396798  C0 C2 0E 20 */	lfs f6, lbl_8051F180@sda21(r2)
/* 8039985C 0039679C  4B C9 BD 7D */	bl __ct__13J2DOrthoGraphFffffff
/* 80399860 003967A0  38 61 00 80 */	addi r3, r1, 0x80
/* 80399864 003967A4  4B C9 BE 59 */	bl setPort__13J2DOrthoGraphFv
/* 80399868 003967A8  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 8039986C 003967AC  28 00 00 00 */	cmplwi r0, 0
/* 80399870 003967B0  40 82 00 20 */	bne .L_80399890
/* 80399874 003967B4  3C 60 80 49 */	lis r3, lbl_80494B24@ha
/* 80399878 003967B8  3C A0 80 49 */	lis r5, lbl_80494B34@ha
/* 8039987C 003967BC  38 63 4B 24 */	addi r3, r3, lbl_80494B24@l
/* 80399880 003967C0  38 80 00 31 */	li r4, 0x31
/* 80399884 003967C4  38 A5 4B 34 */	addi r5, r5, lbl_80494B34@l
/* 80399888 003967C8  4C C6 31 82 */	crclr 6
/* 8039988C 003967CC  4B C9 0D B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80399890:
/* 80399890 003967D0  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80399894 003967D4  28 00 00 00 */	cmplwi r0, 0
/* 80399898 003967D8  40 82 00 20 */	bne .L_803998B8
/* 8039989C 003967DC  3C 60 80 49 */	lis r3, lbl_80494B24@ha
/* 803998A0 003967E0  3C A0 80 49 */	lis r5, lbl_80494B34@ha
/* 803998A4 003967E4  38 63 4B 24 */	addi r3, r3, lbl_80494B24@l
/* 803998A8 003967E8  38 80 00 32 */	li r4, 0x32
/* 803998AC 003967EC  38 A5 4B 34 */	addi r5, r5, lbl_80494B34@l
/* 803998B0 003967F0  4C C6 31 82 */	crclr 6
/* 803998B4 003967F4  4B C9 0D 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803998B8:
/* 803998B8 003967F8  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 803998BC 003967FC  38 80 00 00 */	li r4, 0
/* 803998C0 00396800  4B C9 9D 71 */	bl load__10JUTTextureF11_GXTexMapID
/* 803998C4 00396804  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 803998C8 00396808  38 80 00 01 */	li r4, 1
/* 803998CC 0039680C  4B C9 9D 65 */	bl load__10JUTTextureF11_GXTexMapID
/* 803998D0 00396810  38 60 00 01 */	li r3, 1
/* 803998D4 00396814  4B D4 F2 E5 */	bl GXSetNumTevStages
/* 803998D8 00396818  38 60 00 01 */	li r3, 1
/* 803998DC 0039681C  4B D4 EA 79 */	bl GXSetNumIndStages
/* 803998E0 00396820  38 60 00 00 */	li r3, 0
/* 803998E4 00396824  4B D4 D5 81 */	bl GXSetNumChans
/* 803998E8 00396828  38 60 00 01 */	li r3, 1
/* 803998EC 0039682C  4B D4 B6 B1 */	bl GXSetNumTexGens
/* 803998F0 00396830  38 60 00 01 */	li r3, 1
/* 803998F4 00396834  38 80 00 06 */	li r4, 6
/* 803998F8 00396838  38 A0 00 07 */	li r5, 7
/* 803998FC 0039683C  38 C0 00 00 */	li r6, 0
/* 80399900 00396840  4B D4 F7 D9 */	bl GXSetBlendMode
/* 80399904 00396844  38 60 00 00 */	li r3, 0
/* 80399908 00396848  38 80 00 01 */	li r4, 1
/* 8039990C 0039684C  38 A0 00 04 */	li r5, 4
/* 80399910 00396850  38 C0 00 1E */	li r6, 0x1e
/* 80399914 00396854  38 E0 00 00 */	li r7, 0
/* 80399918 00396858  39 00 00 7D */	li r8, 0x7d
/* 8039991C 0039685C  4B D4 B4 01 */	bl GXSetTexCoordGen2
/* 80399920 00396860  38 60 00 00 */	li r3, 0
/* 80399924 00396864  38 80 00 00 */	li r4, 0
/* 80399928 00396868  38 A0 00 01 */	li r5, 1
/* 8039992C 0039686C  4B D4 E9 3D */	bl GXSetIndTexOrder
/* 80399930 00396870  38 60 00 00 */	li r3, 0
/* 80399934 00396874  38 80 00 00 */	li r4, 0
/* 80399938 00396878  38 A0 00 00 */	li r5, 0
/* 8039993C 0039687C  4B D4 E7 E9 */	bl GXSetIndTexCoordScale
/* 80399940 00396880  88 1F 00 44 */	lbz r0, 0x44(r31)
/* 80399944 00396884  28 00 00 00 */	cmplwi r0, 0
/* 80399948 00396888  41 82 00 2C */	beq .L_80399974
/* 8039994C 0039688C  C0 1F 00 34 */	lfs f0, 0x34(r31)
/* 80399950 00396890  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 80399954 00396894  D0 01 00 08 */	stfs f0, 8(r1)
/* 80399958 00396898  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8039995C 0039689C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80399960 003968A0  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 80399964 003968A4  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 80399968 003968A8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8039996C 003968AC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80399970 003968B0  48 00 00 5C */	b .L_803999CC
.L_80399974:
/* 80399974 003968B4  C0 22 0E 24 */	lfs f1, lbl_8051F184@sda21(r2)
/* 80399978 003968B8  38 61 00 50 */	addi r3, r1, 0x50
/* 8039997C 003968BC  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 80399980 003968C0  38 80 00 7A */	li r4, 0x7a
/* 80399984 003968C4  EC 21 00 32 */	fmuls f1, f1, f0
/* 80399988 003968C8  4B D5 0B 8D */	bl PSMTXRotRad
/* 8039998C 003968CC  C0 A2 0E 28 */	lfs f5, lbl_8051F188@sda21(r2)
/* 80399990 003968D0  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80399994 003968D4  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80399998 003968D8  C0 42 0E 10 */	lfs f2, lbl_8051F170@sda21(r2)
/* 8039999C 003968DC  EC 85 00 72 */	fmuls f4, f5, f1
/* 803999A0 003968E0  C0 21 00 60 */	lfs f1, 0x60(r1)
/* 803999A4 003968E4  EC 65 00 32 */	fmuls f3, f5, f0
/* 803999A8 003968E8  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 803999AC 003968EC  EC 25 00 72 */	fmuls f1, f5, f1
/* 803999B0 003968F0  D0 81 00 08 */	stfs f4, 8(r1)
/* 803999B4 003968F4  EC 05 00 32 */	fmuls f0, f5, f0
/* 803999B8 003968F8  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 803999BC 003968FC  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 803999C0 00396900  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 803999C4 00396904  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803999C8 00396908  D0 41 00 1C */	stfs f2, 0x1c(r1)
.L_803999CC:
/* 803999CC 0039690C  A8 1F 00 3C */	lha r0, 0x3c(r31)
/* 803999D0 00396910  38 81 00 08 */	addi r4, r1, 8
/* 803999D4 00396914  38 60 00 01 */	li r3, 1
/* 803999D8 00396918  7C 05 07 74 */	extsb r5, r0
/* 803999DC 0039691C  4B D4 E5 D1 */	bl GXSetIndTexMtx
/* 803999E0 00396920  38 60 00 00 */	li r3, 0
/* 803999E4 00396924  38 80 00 00 */	li r4, 0
/* 803999E8 00396928  38 A0 00 01 */	li r5, 1
/* 803999EC 0039692C  38 C0 00 00 */	li r6, 0
/* 803999F0 00396930  38 E0 00 01 */	li r7, 1
/* 803999F4 00396934  4B D4 E9 CD */	bl GXSetTevIndWarp
/* 803999F8 00396938  38 60 00 00 */	li r3, 0
/* 803999FC 0039693C  38 80 00 00 */	li r4, 0
/* 80399A00 00396940  38 A0 00 00 */	li r5, 0
/* 80399A04 00396944  38 C0 00 FF */	li r6, 0xff
/* 80399A08 00396948  4B D4 F0 15 */	bl GXSetTevOrder
/* 80399A0C 0039694C  38 60 00 00 */	li r3, 0
/* 80399A10 00396950  38 80 00 03 */	li r4, 3
/* 80399A14 00396954  4B D4 EA 69 */	bl GXSetTevOp
/* 80399A18 00396958  4B D4 AC B9 */	bl GXClearVtxDesc
/* 80399A1C 0039695C  38 60 00 09 */	li r3, 9
/* 80399A20 00396960  38 80 00 01 */	li r4, 1
/* 80399A24 00396964  4B D4 A8 61 */	bl GXSetVtxDesc
/* 80399A28 00396968  38 60 00 0D */	li r3, 0xd
/* 80399A2C 0039696C  38 80 00 01 */	li r4, 1
/* 80399A30 00396970  4B D4 A8 55 */	bl GXSetVtxDesc
/* 80399A34 00396974  38 60 00 00 */	li r3, 0
/* 80399A38 00396978  38 80 00 09 */	li r4, 9
/* 80399A3C 0039697C  38 A0 00 01 */	li r5, 1
/* 80399A40 00396980  38 C0 00 04 */	li r6, 4
/* 80399A44 00396984  38 E0 00 00 */	li r7, 0
/* 80399A48 00396988  4B D4 AC C1 */	bl GXSetVtxAttrFmt
/* 80399A4C 0039698C  38 60 00 00 */	li r3, 0
/* 80399A50 00396990  38 80 00 0D */	li r4, 0xd
/* 80399A54 00396994  38 A0 00 01 */	li r5, 1
/* 80399A58 00396998  38 C0 00 04 */	li r6, 4
/* 80399A5C 0039699C  38 E0 00 00 */	li r7, 0
/* 80399A60 003969A0  4B D4 AC A9 */	bl GXSetVtxAttrFmt
/* 80399A64 003969A4  38 61 00 20 */	addi r3, r1, 0x20
/* 80399A68 003969A8  4B D5 08 39 */	bl PSMTXIdentity
/* 80399A6C 003969AC  38 61 00 20 */	addi r3, r1, 0x20
/* 80399A70 003969B0  38 80 00 00 */	li r4, 0
/* 80399A74 003969B4  4B D4 FB 05 */	bl GXLoadPosMtxImm
/* 80399A78 003969B8  38 61 00 20 */	addi r3, r1, 0x20
/* 80399A7C 003969BC  38 80 00 1E */	li r4, 0x1e
/* 80399A80 003969C0  38 A0 00 01 */	li r5, 1
/* 80399A84 003969C4  4B D4 FB C9 */	bl GXLoadTexMtxImm
/* 80399A88 003969C8  38 60 00 80 */	li r3, 0x80
/* 80399A8C 003969CC  38 80 00 00 */	li r4, 0
/* 80399A90 003969D0  38 A0 00 04 */	li r5, 4
/* 80399A94 003969D4  4B D4 BE F5 */	bl GXBegin
/* 80399A98 003969D8  C0 7F 00 28 */	lfs f3, 0x28(r31)
/* 80399A9C 003969DC  3C 80 80 4A */	lis r4, __vt__13J2DOrthoGraph@ha
/* 80399AA0 003969E0  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 80399AA4 003969E4  3C A0 CC 01 */	lis r5, 0xCC008000@ha
/* 80399AA8 003969E8  3C 60 80 4A */	lis r3, __vt__14J2DGrafContext@ha
/* 80399AAC 003969EC  C0 42 0E 10 */	lfs f2, lbl_8051F170@sda21(r2)
/* 80399AB0 003969F0  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 80399AB4 003969F4  38 84 06 00 */	addi r4, r4, __vt__13J2DOrthoGraph@l
/* 80399AB8 003969F8  C0 22 0E 20 */	lfs f1, lbl_8051F180@sda21(r2)
/* 80399ABC 003969FC  38 03 06 50 */	addi r0, r3, __vt__14J2DGrafContext@l
/* 80399AC0 00396A00  D0 65 80 00 */	stfs f3, 0xCC008000@l(r5)
/* 80399AC4 00396A04  D0 45 80 00 */	stfs f2, 0xCC008000@l(r5)
/* 80399AC8 00396A08  D0 45 80 00 */	stfs f2, 0xCC008000@l(r5)
/* 80399ACC 00396A0C  D0 45 80 00 */	stfs f2, 0xCC008000@l(r5)
/* 80399AD0 00396A10  C0 7F 00 28 */	lfs f3, 0x28(r31)
/* 80399AD4 00396A14  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 80399AD8 00396A18  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 80399ADC 00396A1C  D0 65 80 00 */	stfs f3, 0xCC008000@l(r5)
/* 80399AE0 00396A20  D0 45 80 00 */	stfs f2, 0xCC008000@l(r5)
/* 80399AE4 00396A24  D0 25 80 00 */	stfs f1, 0xCC008000@l(r5)
/* 80399AE8 00396A28  D0 45 80 00 */	stfs f2, 0xCC008000@l(r5)
/* 80399AEC 00396A2C  C0 7F 00 30 */	lfs f3, 0x30(r31)
/* 80399AF0 00396A30  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 80399AF4 00396A34  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 80399AF8 00396A38  D0 65 80 00 */	stfs f3, 0xCC008000@l(r5)
/* 80399AFC 00396A3C  D0 45 80 00 */	stfs f2, 0xCC008000@l(r5)
/* 80399B00 00396A40  D0 25 80 00 */	stfs f1, 0xCC008000@l(r5)
/* 80399B04 00396A44  D0 25 80 00 */	stfs f1, 0xCC008000@l(r5)
/* 80399B08 00396A48  C0 7F 00 30 */	lfs f3, 0x30(r31)
/* 80399B0C 00396A4C  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 80399B10 00396A50  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 80399B14 00396A54  D0 65 80 00 */	stfs f3, 0xCC008000@l(r5)
/* 80399B18 00396A58  D0 45 80 00 */	stfs f2, 0xCC008000@l(r5)
/* 80399B1C 00396A5C  D0 45 80 00 */	stfs f2, 0xCC008000@l(r5)
/* 80399B20 00396A60  D0 25 80 00 */	stfs f1, 0xCC008000@l(r5)
/* 80399B24 00396A64  90 81 00 80 */	stw r4, 0x80(r1)
/* 80399B28 00396A68  90 01 00 80 */	stw r0, 0x80(r1)
/* 80399B2C 00396A6C  83 E1 01 5C */	lwz r31, 0x15c(r1)
/* 80399B30 00396A70  80 01 01 64 */	lwz r0, 0x164(r1)
/* 80399B34 00396A74  7C 08 03 A6 */	mtlr r0
/* 80399B38 00396A78  38 21 01 60 */	addi r1, r1, 0x160
/* 80399B3C 00396A7C  4E 80 00 20 */	blr 
.endfn draw__Q28Morimura16TVsSelectIndPaneFv

.fn create__Q28Morimura26TVsSelectExplanationWindowFPCcUl, global
/* 80399B40 00396A80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80399B44 00396A84  7C 08 02 A6 */	mflr r0
/* 80399B48 00396A88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80399B4C 00396A8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80399B50 00396A90  7C 7F 1B 78 */	mr r31, r3
/* 80399B54 00396A94  48 00 78 7D */	bl create__Q28Morimura11TScreenBaseFPCcUl
/* 80399B58 00396A98  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 80399B5C 00396A9C  C0 02 0E 2C */	lfs f0, lbl_8051F18C@sda21(r2)
/* 80399B60 00396AA0  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 80399B64 00396AA4  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80399B68 00396AA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80399B6C 00396AAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80399B70 00396AB0  7C 08 03 A6 */	mtlr r0
/* 80399B74 00396AB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80399B78 00396AB8  4E 80 00 20 */	blr 
.endfn create__Q28Morimura26TVsSelectExplanationWindowFPCcUl

.fn screenScaleUp__Q28Morimura26TVsSelectExplanationWindowFv, global
/* 80399B7C 00396ABC  4E 80 00 20 */	blr 
.endfn screenScaleUp__Q28Morimura26TVsSelectExplanationWindowFv

.fn __ct__Q38Morimura7TVsPiki7posInfoFv, weak
/* 80399B80 00396AC0  4E 80 00 20 */	blr 
.endfn __ct__Q38Morimura7TVsPiki7posInfoFv

.fn update__Q28Morimura7TVsPikiFi, global
/* 80399B84 00396AC4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80399B88 00396AC8  7C 08 02 A6 */	mflr r0
/* 80399B8C 00396ACC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80399B90 00396AD0  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80399B94 00396AD4  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80399B98 00396AD8  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80399B9C 00396ADC  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80399BA0 00396AE0  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80399BA4 00396AE4  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80399BA8 00396AE8  7C 7E 1B 78 */	mr r30, r3
/* 80399BAC 00396AEC  7C 9F 23 78 */	mr r31, r4
/* 80399BB0 00396AF0  80 63 00 00 */	lwz r3, 0(r3)
/* 80399BB4 00396AF4  38 80 00 02 */	li r4, 2
/* 80399BB8 00396AF8  4B C9 F1 05 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80399BBC 00396AFC  80 7E 00 04 */	lwz r3, 4(r30)
/* 80399BC0 00396B00  38 80 00 00 */	li r4, 0
/* 80399BC4 00396B04  4B C9 F0 F9 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80399BC8 00396B08  80 7E 00 08 */	lwz r3, 8(r30)
/* 80399BCC 00396B0C  38 80 00 04 */	li r4, 4
/* 80399BD0 00396B10  4B C9 F0 ED */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80399BD4 00396B14  80 9E 00 04 */	lwz r4, 4(r30)
/* 80399BD8 00396B18  38 61 00 38 */	addi r3, r1, 0x38
/* 80399BDC 00396B1C  38 A0 00 01 */	li r5, 1
/* 80399BE0 00396B20  4B C9 F3 B9 */	bl getGlbVtx__7J2DPaneCFUc
/* 80399BE4 00396B24  C3 E1 00 3C */	lfs f31, 0x3c(r1)
/* 80399BE8 00396B28  38 61 00 44 */	addi r3, r1, 0x44
/* 80399BEC 00396B2C  80 9E 00 00 */	lwz r4, 0(r30)
/* 80399BF0 00396B30  38 A0 00 00 */	li r5, 0
/* 80399BF4 00396B34  4B C9 F3 A5 */	bl getGlbVtx__7J2DPaneCFUc
/* 80399BF8 00396B38  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80399BFC 00396B3C  38 61 00 50 */	addi r3, r1, 0x50
/* 80399C00 00396B40  80 9E 00 04 */	lwz r4, 4(r30)
/* 80399C04 00396B44  38 A0 00 01 */	li r5, 1
/* 80399C08 00396B48  EF C0 F8 28 */	fsubs f30, f0, f31
/* 80399C0C 00396B4C  4B C9 F3 8D */	bl getGlbVtx__7J2DPaneCFUc
/* 80399C10 00396B50  C3 E1 00 50 */	lfs f31, 0x50(r1)
/* 80399C14 00396B54  38 61 00 5C */	addi r3, r1, 0x5c
/* 80399C18 00396B58  80 9E 00 00 */	lwz r4, 0(r30)
/* 80399C1C 00396B5C  38 A0 00 00 */	li r5, 0
/* 80399C20 00396B60  4B C9 F3 79 */	bl getGlbVtx__7J2DPaneCFUc
/* 80399C24 00396B64  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 80399C28 00396B68  38 61 00 08 */	addi r3, r1, 8
/* 80399C2C 00396B6C  38 A0 00 00 */	li r5, 0
/* 80399C30 00396B70  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80399C34 00396B74  D0 1E 00 AC */	stfs f0, 0xac(r30)
/* 80399C38 00396B78  D3 DE 00 B0 */	stfs f30, 0xb0(r30)
/* 80399C3C 00396B7C  80 9E 00 08 */	lwz r4, 8(r30)
/* 80399C40 00396B80  4B C9 F3 59 */	bl getGlbVtx__7J2DPaneCFUc
/* 80399C44 00396B84  C3 E1 00 0C */	lfs f31, 0xc(r1)
/* 80399C48 00396B88  38 61 00 14 */	addi r3, r1, 0x14
/* 80399C4C 00396B8C  80 9E 00 00 */	lwz r4, 0(r30)
/* 80399C50 00396B90  38 A0 00 00 */	li r5, 0
/* 80399C54 00396B94  4B C9 F3 45 */	bl getGlbVtx__7J2DPaneCFUc
/* 80399C58 00396B98  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80399C5C 00396B9C  38 61 00 20 */	addi r3, r1, 0x20
/* 80399C60 00396BA0  80 9E 00 08 */	lwz r4, 8(r30)
/* 80399C64 00396BA4  38 A0 00 00 */	li r5, 0
/* 80399C68 00396BA8  EF C0 F8 28 */	fsubs f30, f0, f31
/* 80399C6C 00396BAC  4B C9 F3 2D */	bl getGlbVtx__7J2DPaneCFUc
/* 80399C70 00396BB0  C3 E1 00 20 */	lfs f31, 0x20(r1)
/* 80399C74 00396BB4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80399C78 00396BB8  80 9E 00 00 */	lwz r4, 0(r30)
/* 80399C7C 00396BBC  38 A0 00 00 */	li r5, 0
/* 80399C80 00396BC0  4B C9 F3 19 */	bl getGlbVtx__7J2DPaneCFUc
/* 80399C84 00396BC4  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80399C88 00396BC8  38 00 00 0A */	li r0, 0xa
/* 80399C8C 00396BCC  7F C4 F3 78 */	mr r4, r30
/* 80399C90 00396BD0  38 A0 00 00 */	li r5, 0
/* 80399C94 00396BD4  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80399C98 00396BD8  D0 1E 00 B4 */	stfs f0, 0xb4(r30)
/* 80399C9C 00396BDC  D3 DE 00 B8 */	stfs f30, 0xb8(r30)
/* 80399CA0 00396BE0  7C 09 03 A6 */	mtctr r0
.L_80399CA4:
/* 80399CA4 00396BE4  7C 05 F8 00 */	cmpw r5, r31
/* 80399CA8 00396BE8  40 80 00 1C */	bge .L_80399CC4
/* 80399CAC 00396BEC  80 04 00 0C */	lwz r0, 0xc(r4)
/* 80399CB0 00396BF0  2C 00 00 03 */	cmpwi r0, 3
/* 80399CB4 00396BF4  40 82 00 24 */	bne .L_80399CD8
/* 80399CB8 00396BF8  38 00 00 01 */	li r0, 1
/* 80399CBC 00396BFC  90 04 00 0C */	stw r0, 0xc(r4)
/* 80399CC0 00396C00  48 00 00 18 */	b .L_80399CD8
.L_80399CC4:
/* 80399CC4 00396C04  80 04 00 0C */	lwz r0, 0xc(r4)
/* 80399CC8 00396C08  2C 00 00 00 */	cmpwi r0, 0
/* 80399CCC 00396C0C  40 82 00 0C */	bne .L_80399CD8
/* 80399CD0 00396C10  38 00 00 02 */	li r0, 2
/* 80399CD4 00396C14  90 04 00 0C */	stw r0, 0xc(r4)
.L_80399CD8:
/* 80399CD8 00396C18  80 04 00 0C */	lwz r0, 0xc(r4)
/* 80399CDC 00396C1C  2C 00 00 02 */	cmpwi r0, 2
/* 80399CE0 00396C20  41 82 01 00 */	beq .L_80399DE0
/* 80399CE4 00396C24  40 80 00 14 */	bge .L_80399CF8
/* 80399CE8 00396C28  2C 00 00 00 */	cmpwi r0, 0
/* 80399CEC 00396C2C  41 82 00 14 */	beq .L_80399D00
/* 80399CF0 00396C30  40 80 00 1C */	bge .L_80399D0C
/* 80399CF4 00396C34  48 00 01 24 */	b .L_80399E18
.L_80399CF8:
/* 80399CF8 00396C38  2C 00 00 04 */	cmpwi r0, 4
/* 80399CFC 00396C3C  40 80 01 1C */	bge .L_80399E18
.L_80399D00:
/* 80399D00 00396C40  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 80399D04 00396C44  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80399D08 00396C48  48 00 01 10 */	b .L_80399E18
.L_80399D0C:
/* 80399D0C 00396C4C  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 80399D10 00396C50  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 80399D14 00396C54  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80399D18 00396C58  40 81 00 28 */	ble .L_80399D40
/* 80399D1C 00396C5C  C0 02 0E 40 */	lfs f0, lbl_8051F1A0@sda21(r2)
/* 80399D20 00396C60  EC 02 00 28 */	fsubs f0, f2, f0
/* 80399D24 00396C64  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80399D28 00396C68  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 80399D2C 00396C6C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80399D30 00396C70  4C 40 13 82 */	cror 2, 0, 2
/* 80399D34 00396C74  40 82 00 E4 */	bne .L_80399E18
/* 80399D38 00396C78  D0 24 00 18 */	stfs f1, 0x18(r4)
/* 80399D3C 00396C7C  48 00 00 DC */	b .L_80399E18
.L_80399D40:
/* 80399D40 00396C80  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 80399D44 00396C84  C0 22 0E 44 */	lfs f1, lbl_8051F1A4@sda21(r2)
/* 80399D48 00396C88  C0 02 0E 48 */	lfs f0, lbl_8051F1A8@sda21(r2)
/* 80399D4C 00396C8C  EC 22 08 2A */	fadds f1, f2, f1
/* 80399D50 00396C90  D0 24 00 10 */	stfs f1, 0x10(r4)
/* 80399D54 00396C94  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 80399D58 00396C98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80399D5C 00396C9C  4C 41 13 82 */	cror 2, 1, 2
/* 80399D60 00396CA0  40 82 00 10 */	bne .L_80399D70
/* 80399D64 00396CA4  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80399D68 00396CA8  38 00 00 00 */	li r0, 0
/* 80399D6C 00396CAC  90 04 00 0C */	stw r0, 0xc(r4)
.L_80399D70:
/* 80399D70 00396CB0  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 80399D74 00396CB4  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 80399D78 00396CB8  C0 22 0E 4C */	lfs f1, lbl_8051F1AC@sda21(r2)
/* 80399D7C 00396CBC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80399D80 00396CC0  40 80 00 30 */	bge .L_80399DB0
/* 80399D84 00396CC4  C0 02 0E 50 */	lfs f0, lbl_8051F1B0@sda21(r2)
/* 80399D88 00396CC8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80399D8C 00396CCC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80399D90 00396CD0  EC 02 00 32 */	fmuls f0, f2, f0
/* 80399D94 00396CD4  FC 00 00 1E */	fctiwz f0, f0
/* 80399D98 00396CD8  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 80399D9C 00396CDC  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80399DA0 00396CE0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80399DA4 00396CE4  7C 03 04 2E */	lfsx f0, r3, r0
/* 80399DA8 00396CE8  FC 00 00 50 */	fneg f0, f0
/* 80399DAC 00396CEC  48 00 00 28 */	b .L_80399DD4
.L_80399DB0:
/* 80399DB0 00396CF0  C0 02 0E 54 */	lfs f0, lbl_8051F1B4@sda21(r2)
/* 80399DB4 00396CF4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80399DB8 00396CF8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80399DBC 00396CFC  EC 02 00 32 */	fmuls f0, f2, f0
/* 80399DC0 00396D00  FC 00 00 1E */	fctiwz f0, f0
/* 80399DC4 00396D04  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 80399DC8 00396D08  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80399DCC 00396D0C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80399DD0 00396D10  7C 03 04 2E */	lfsx f0, r3, r0
.L_80399DD4:
/* 80399DD4 00396D14  EC 01 00 32 */	fmuls f0, f1, f0
/* 80399DD8 00396D18  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80399DDC 00396D1C  48 00 00 3C */	b .L_80399E18
.L_80399DE0:
/* 80399DE0 00396D20  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 80399DE4 00396D24  C0 22 0E 30 */	lfs f1, lbl_8051F190@sda21(r2)
/* 80399DE8 00396D28  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80399DEC 00396D2C  40 80 00 2C */	bge .L_80399E18
/* 80399DF0 00396D30  C0 02 0E 40 */	lfs f0, lbl_8051F1A0@sda21(r2)
/* 80399DF4 00396D34  EC 02 00 2A */	fadds f0, f2, f0
/* 80399DF8 00396D38  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80399DFC 00396D3C  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 80399E00 00396D40  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80399E04 00396D44  4C 41 13 82 */	cror 2, 1, 2
/* 80399E08 00396D48  40 82 00 10 */	bne .L_80399E18
/* 80399E0C 00396D4C  D0 24 00 18 */	stfs f1, 0x18(r4)
/* 80399E10 00396D50  38 00 00 03 */	li r0, 3
/* 80399E14 00396D54  90 04 00 0C */	stw r0, 0xc(r4)
.L_80399E18:
/* 80399E18 00396D58  38 84 00 10 */	addi r4, r4, 0x10
/* 80399E1C 00396D5C  38 A5 00 01 */	addi r5, r5, 1
/* 80399E20 00396D60  42 00 FE 84 */	bdnz .L_80399CA4
/* 80399E24 00396D64  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80399E28 00396D68  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80399E2C 00396D6C  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80399E30 00396D70  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80399E34 00396D74  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80399E38 00396D78  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80399E3C 00396D7C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80399E40 00396D80  7C 08 03 A6 */	mtlr r0
/* 80399E44 00396D84  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80399E48 00396D88  4E 80 00 20 */	blr 
.endfn update__Q28Morimura7TVsPikiFi

.fn draw__Q28Morimura7TVsPikiFv, global
/* 80399E4C 00396D8C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80399E50 00396D90  7C 08 02 A6 */	mflr r0
/* 80399E54 00396D94  90 01 00 84 */	stw r0, 0x84(r1)
/* 80399E58 00396D98  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80399E5C 00396D9C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80399E60 00396DA0  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80399E64 00396DA4  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80399E68 00396DA8  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80399E6C 00396DAC  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 80399E70 00396DB0  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 80399E74 00396DB4  80 83 00 00 */	lwz r4, 0(r3)
/* 80399E78 00396DB8  7C 7B 1B 78 */	mr r27, r3
/* 80399E7C 00396DBC  38 61 00 2C */	addi r3, r1, 0x2c
/* 80399E80 00396DC0  38 A0 00 02 */	li r5, 2
/* 80399E84 00396DC4  4B C9 F1 15 */	bl getGlbVtx__7J2DPaneCFUc
/* 80399E88 00396DC8  C3 A1 00 2C */	lfs f29, 0x2c(r1)
/* 80399E8C 00396DCC  38 61 00 20 */	addi r3, r1, 0x20
/* 80399E90 00396DD0  C3 ED 99 B8 */	lfs f31, mPikiOffset__Q28Morimura7TVsPiki@sda21(r13)
/* 80399E94 00396DD4  38 A0 00 02 */	li r5, 2
/* 80399E98 00396DD8  C3 C1 00 30 */	lfs f30, 0x30(r1)
/* 80399E9C 00396DDC  C0 02 0E 58 */	lfs f0, lbl_8051F1B8@sda21(r2)
/* 80399EA0 00396DE0  EF BD F8 28 */	fsubs f29, f29, f31
/* 80399EA4 00396DE4  80 9B 00 00 */	lwz r4, 0(r27)
/* 80399EA8 00396DE8  EF DE 00 28 */	fsubs f30, f30, f0
/* 80399EAC 00396DEC  4B C9 F0 ED */	bl getGlbVtx__7J2DPaneCFUc
/* 80399EB0 00396DF0  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80399EB4 00396DF4  EC 20 F0 28 */	fsubs f1, f0, f30
/* 80399EB8 00396DF8  4B D2 7C 95 */	bl __cvt_fp2unsigned
/* 80399EBC 00396DFC  C0 02 0E 5C */	lfs f0, lbl_8051F1BC@sda21(r2)
/* 80399EC0 00396E00  7C 7D 1B 78 */	mr r29, r3
/* 80399EC4 00396E04  EC 00 EF FA */	fmadds f0, f0, f31, f29
/* 80399EC8 00396E08  EC 20 E8 28 */	fsubs f1, f0, f29
/* 80399ECC 00396E0C  4B D2 7C 81 */	bl __cvt_fp2unsigned
/* 80399ED0 00396E10  FC 20 F0 90 */	fmr f1, f30
/* 80399ED4 00396E14  7C 7E 1B 78 */	mr r30, r3
/* 80399ED8 00396E18  4B D2 7C 75 */	bl __cvt_fp2unsigned
/* 80399EDC 00396E1C  FC 20 E8 90 */	fmr f1, f29
/* 80399EE0 00396E20  7C 7F 1B 78 */	mr r31, r3
/* 80399EE4 00396E24  4B D2 7C 69 */	bl __cvt_fp2unsigned
/* 80399EE8 00396E28  7F E4 FB 78 */	mr r4, r31
/* 80399EEC 00396E2C  7F C5 F3 78 */	mr r5, r30
/* 80399EF0 00396E30  7F A6 EB 78 */	mr r6, r29
/* 80399EF4 00396E34  4B D4 F8 E5 */	bl GXSetScissor
/* 80399EF8 00396E38  7F 7D DB 78 */	mr r29, r27
/* 80399EFC 00396E3C  3B 80 00 00 */	li r28, 0
/* 80399F00 00396E40  3B CD 99 B8 */	addi r30, r13, mPikiOffset__Q28Morimura7TVsPiki@sda21
.L_80399F04:
/* 80399F04 00396E44  83 FB 00 00 */	lwz r31, 0(r27)
/* 80399F08 00396E48  38 61 00 08 */	addi r3, r1, 8
/* 80399F0C 00396E4C  C3 AD 86 44 */	lfs f29, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
/* 80399F10 00396E50  38 A0 00 00 */	li r5, 0
/* 80399F14 00396E54  7F E4 FB 78 */	mr r4, r31
/* 80399F18 00396E58  4B C9 F0 81 */	bl getGlbVtx__7J2DPaneCFUc
/* 80399F1C 00396E5C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80399F20 00396E60  7F E4 FB 78 */	mr r4, r31
/* 80399F24 00396E64  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 80399F28 00396E68  38 61 00 14 */	addi r3, r1, 0x14
/* 80399F2C 00396E6C  38 A0 00 00 */	li r5, 0
/* 80399F30 00396E70  EF C0 0F 7A */	fmadds f30, f0, f29, f1
/* 80399F34 00396E74  4B C9 F0 65 */	bl getGlbVtx__7J2DPaneCFUc
/* 80399F38 00396E78  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80399F3C 00396E7C  7F E3 FB 78 */	mr r3, r31
/* 80399F40 00396E80  C0 1D 00 14 */	lfs f0, 0x14(r29)
/* 80399F44 00396E84  FC 40 F0 90 */	fmr f2, f30
/* 80399F48 00396E88  81 9F 00 00 */	lwz r12, 0(r31)
/* 80399F4C 00396E8C  38 80 00 00 */	li r4, 0
/* 80399F50 00396E90  EF E0 0F 7A */	fmadds f31, f0, f29, f1
/* 80399F54 00396E94  C0 9F 00 28 */	lfs f4, 0x28(r31)
/* 80399F58 00396E98  C0 7F 00 20 */	lfs f3, 0x20(r31)
/* 80399F5C 00396E9C  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 80399F60 00396EA0  38 A0 00 00 */	li r5, 0
/* 80399F64 00396EA4  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 80399F68 00396EA8  EC 64 18 28 */	fsubs f3, f4, f3
/* 80399F6C 00396EAC  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 80399F70 00396EB0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80399F74 00396EB4  38 C0 00 00 */	li r6, 0
/* 80399F78 00396EB8  FC 20 F8 90 */	fmr f1, f31
/* 80399F7C 00396EBC  EC 7D 00 F2 */	fmuls f3, f29, f3
/* 80399F80 00396EC0  EC 9D 00 32 */	fmuls f4, f29, f0
/* 80399F84 00396EC4  7D 89 03 A6 */	mtctr r12
/* 80399F88 00396EC8  4E 80 04 21 */	bctrl 
/* 80399F8C 00396ECC  7F E3 FB 78 */	mr r3, r31
/* 80399F90 00396ED0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80399F94 00396ED4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80399F98 00396ED8  7D 89 03 A6 */	mtctr r12
/* 80399F9C 00396EDC  4E 80 04 21 */	bctrl 
/* 80399FA0 00396EE0  83 FB 00 04 */	lwz r31, 4(r27)
/* 80399FA4 00396EE4  38 80 00 00 */	li r4, 0
/* 80399FA8 00396EE8  C0 3B 00 AC */	lfs f1, 0xac(r27)
/* 80399FAC 00396EEC  38 A0 00 00 */	li r5, 0
/* 80399FB0 00396EF0  C0 5F 00 28 */	lfs f2, 0x28(r31)
/* 80399FB4 00396EF4  7F E3 FB 78 */	mr r3, r31
/* 80399FB8 00396EF8  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 80399FBC 00396EFC  EC 3F 08 28 */	fsubs f1, f31, f1
/* 80399FC0 00396F00  81 9F 00 00 */	lwz r12, 0(r31)
/* 80399FC4 00396F04  38 C0 00 00 */	li r6, 0
/* 80399FC8 00396F08  EC 62 00 28 */	fsubs f3, f2, f0
/* 80399FCC 00396F0C  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 80399FD0 00396F10  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 80399FD4 00396F14  C0 9B 00 B0 */	lfs f4, 0xb0(r27)
/* 80399FD8 00396F18  FC 60 18 50 */	fneg f3, f3
/* 80399FDC 00396F1C  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 80399FE0 00396F20  EC 02 00 28 */	fsubs f0, f2, f0
/* 80399FE4 00396F24  EC 5E 20 28 */	fsubs f2, f30, f4
/* 80399FE8 00396F28  EC 7D 00 F2 */	fmuls f3, f29, f3
/* 80399FEC 00396F2C  EC 9D 00 32 */	fmuls f4, f29, f0
/* 80399FF0 00396F30  7D 89 03 A6 */	mtctr r12
/* 80399FF4 00396F34  4E 80 04 21 */	bctrl 
/* 80399FF8 00396F38  7F E3 FB 78 */	mr r3, r31
/* 80399FFC 00396F3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039A000 00396F40  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039A004 00396F44  7D 89 03 A6 */	mtctr r12
/* 8039A008 00396F48  4E 80 04 21 */	bctrl 
/* 8039A00C 00396F4C  83 FB 00 08 */	lwz r31, 8(r27)
/* 8039A010 00396F50  38 80 00 00 */	li r4, 0
/* 8039A014 00396F54  C0 5B 00 B4 */	lfs f2, 0xb4(r27)
/* 8039A018 00396F58  38 A0 00 00 */	li r5, 0
/* 8039A01C 00396F5C  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8039A020 00396F60  7F E3 FB 78 */	mr r3, r31
/* 8039A024 00396F64  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 8039A028 00396F68  EC BF 10 2A */	fadds f5, f31, f2
/* 8039A02C 00396F6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039A030 00396F70  38 C0 00 00 */	li r6, 0
/* 8039A034 00396F74  EC 81 00 28 */	fsubs f4, f1, f0
/* 8039A038 00396F78  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8039A03C 00396F7C  C0 5B 00 B8 */	lfs f2, 0xb8(r27)
/* 8039A040 00396F80  C0 7F 00 2C */	lfs f3, 0x2c(r31)
/* 8039A044 00396F84  EC 20 28 2A */	fadds f1, f0, f5
/* 8039A048 00396F88  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 8039A04C 00396F8C  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8039A050 00396F90  EC 5E 10 28 */	fsubs f2, f30, f2
/* 8039A054 00396F94  EC 03 00 28 */	fsubs f0, f3, f0
/* 8039A058 00396F98  EC 7D 01 32 */	fmuls f3, f29, f4
/* 8039A05C 00396F9C  EC 9D 00 32 */	fmuls f4, f29, f0
/* 8039A060 00396FA0  7D 89 03 A6 */	mtctr r12
/* 8039A064 00396FA4  4E 80 04 21 */	bctrl 
/* 8039A068 00396FA8  7F E3 FB 78 */	mr r3, r31
/* 8039A06C 00396FAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039A070 00396FB0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039A074 00396FB4  7D 89 03 A6 */	mtctr r12
/* 8039A078 00396FB8  4E 80 04 21 */	bctrl 
/* 8039A07C 00396FBC  3B 9C 00 01 */	addi r28, r28, 1
/* 8039A080 00396FC0  3B BD 00 10 */	addi r29, r29, 0x10
/* 8039A084 00396FC4  2C 1C 00 0A */	cmpwi r28, 0xa
/* 8039A088 00396FC8  41 80 FE 7C */	blt .L_80399F04
/* 8039A08C 00396FCC  38 60 00 00 */	li r3, 0
/* 8039A090 00396FD0  38 80 00 00 */	li r4, 0
/* 8039A094 00396FD4  38 A0 02 80 */	li r5, 0x280
/* 8039A098 00396FD8  38 C0 01 E0 */	li r6, 0x1e0
/* 8039A09C 00396FDC  4B D4 F7 3D */	bl GXSetScissor
/* 8039A0A0 00396FE0  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8039A0A4 00396FE4  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8039A0A8 00396FE8  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 8039A0AC 00396FEC  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8039A0B0 00396FF0  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 8039A0B4 00396FF4  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 8039A0B8 00396FF8  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 8039A0BC 00396FFC  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8039A0C0 00397000  7C 08 03 A6 */	mtlr r0
/* 8039A0C4 00397004  38 21 00 80 */	addi r1, r1, 0x80
/* 8039A0C8 00397008  4E 80 00 20 */	blr 
.endfn draw__Q28Morimura7TVsPikiFv

.fn posUpdate__Q28Morimura14TVsSelectOnyonFf, global
/* 8039A0CC 0039700C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8039A0D0 00397010  7C 08 02 A6 */	mflr r0
/* 8039A0D4 00397014  90 01 00 44 */	stw r0, 0x44(r1)
/* 8039A0D8 00397018  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8039A0DC 0039701C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8039A0E0 00397020  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8039A0E4 00397024  7C 7F 1B 78 */	mr r31, r3
/* 8039A0E8 00397028  FF E0 08 90 */	fmr f31, f1
/* 8039A0EC 0039702C  80 63 00 38 */	lwz r3, 0x38(r3)
/* 8039A0F0 00397030  38 03 00 01 */	addi r0, r3, 1
/* 8039A0F4 00397034  90 1F 00 38 */	stw r0, 0x38(r31)
/* 8039A0F8 00397038  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 8039A0FC 0039703C  2C 00 00 00 */	cmpwi r0, 0
/* 8039A100 00397040  40 81 00 58 */	ble .L_8039A158
/* 8039A104 00397044  C0 42 0E 20 */	lfs f2, lbl_8051F180@sda21(r2)
/* 8039A108 00397048  FC 02 F8 00 */	fcmpu cr0, f2, f31
/* 8039A10C 0039704C  40 82 00 28 */	bne .L_8039A134
/* 8039A110 00397050  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8039A114 00397054  C0 0D 86 38 */	lfs f0, mAngUp__Q28Morimura9TVsSelect@sda21(r13)
/* 8039A118 00397058  EC 01 00 2A */	fadds f0, f1, f0
/* 8039A11C 0039705C  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8039A120 00397060  C0 1F 00 34 */	lfs f0, 0x34(r31)
/* 8039A124 00397064  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8039A128 00397068  40 81 00 30 */	ble .L_8039A158
/* 8039A12C 0039706C  D0 5F 00 34 */	stfs f2, 0x34(r31)
/* 8039A130 00397070  48 00 00 28 */	b .L_8039A158
.L_8039A134:
/* 8039A134 00397074  C0 5F 00 34 */	lfs f2, 0x34(r31)
/* 8039A138 00397078  C0 2D 86 38 */	lfs f1, mAngUp__Q28Morimura9TVsSelect@sda21(r13)
/* 8039A13C 0039707C  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039A140 00397080  EC 22 08 28 */	fsubs f1, f2, f1
/* 8039A144 00397084  D0 3F 00 34 */	stfs f1, 0x34(r31)
/* 8039A148 00397088  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8039A14C 0039708C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039A150 00397090  40 80 00 08 */	bge .L_8039A158
/* 8039A154 00397094  D0 1F 00 34 */	stfs f0, 0x34(r31)
.L_8039A158:
/* 8039A158 00397098  7F E3 FB 78 */	mr r3, r31
/* 8039A15C 0039709C  48 00 02 79 */	bl getAngDist__Q28Morimura14TVsSelectOnyonFv
/* 8039A160 003970A0  C0 1F 00 34 */	lfs f0, 0x34(r31)
/* 8039A164 003970A4  C0 42 0E 68 */	lfs f2, lbl_8051F1C8@sda21(r2)
/* 8039A168 003970A8  EC 20 00 72 */	fmuls f1, f0, f1
/* 8039A16C 003970AC  FC 00 0A 10 */	fabs f0, f1
/* 8039A170 003970B0  FC 00 00 18 */	frsp f0, f0
/* 8039A174 003970B4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8039A178 003970B8  40 81 00 1C */	ble .L_8039A194
/* 8039A17C 003970BC  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039A180 003970C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039A184 003970C4  40 81 00 0C */	ble .L_8039A190
/* 8039A188 003970C8  FC 20 10 90 */	fmr f1, f2
/* 8039A18C 003970CC  48 00 00 08 */	b .L_8039A194
.L_8039A190:
/* 8039A190 003970D0  FC 20 10 50 */	fneg f1, f2
.L_8039A194:
/* 8039A194 003970D4  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 8039A198 003970D8  EC 20 08 2A */	fadds f1, f0, f1
/* 8039A19C 003970DC  48 07 7A 35 */	bl roundAng__Ff
/* 8039A1A0 003970E0  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 8039A1A4 003970E4  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039A1A8 003970E8  C0 2D 86 24 */	lfs f1, mMoveSpeed__Q28Morimura9TVsSelect@sda21(r13)
/* 8039A1AC 003970EC  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 8039A1B0 003970F0  EC 61 07 F2 */	fmuls f3, f1, f31
/* 8039A1B4 003970F4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8039A1B8 003970F8  40 80 00 30 */	bge .L_8039A1E8
/* 8039A1BC 003970FC  C0 02 0E 50 */	lfs f0, lbl_8051F1B0@sda21(r2)
/* 8039A1C0 00397100  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039A1C4 00397104  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039A1C8 00397108  EC 02 00 32 */	fmuls f0, f2, f0
/* 8039A1CC 0039710C  FC 00 00 1E */	fctiwz f0, f0
/* 8039A1D0 00397110  D8 01 00 08 */	stfd f0, 8(r1)
/* 8039A1D4 00397114  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8039A1D8 00397118  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039A1DC 0039711C  7C 03 04 2E */	lfsx f0, r3, r0
/* 8039A1E0 00397120  FC 00 00 50 */	fneg f0, f0
/* 8039A1E4 00397124  48 00 00 28 */	b .L_8039A20C
.L_8039A1E8:
/* 8039A1E8 00397128  C0 02 0E 54 */	lfs f0, lbl_8051F1B4@sda21(r2)
/* 8039A1EC 0039712C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039A1F0 00397130  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039A1F4 00397134  EC 02 00 32 */	fmuls f0, f2, f0
/* 8039A1F8 00397138  FC 00 00 1E */	fctiwz f0, f0
/* 8039A1FC 0039713C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8039A200 00397140  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039A204 00397144  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039A208 00397148  7C 03 04 2E */	lfsx f0, r3, r0
.L_8039A20C:
/* 8039A20C 0039714C  EC 23 00 32 */	fmuls f1, f3, f0
/* 8039A210 00397150  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039A214 00397154  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 8039A218 00397158  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 8039A21C 0039715C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8039A220 00397160  40 80 00 08 */	bge .L_8039A228
/* 8039A224 00397164  FC 40 10 50 */	fneg f2, f2
.L_8039A228:
/* 8039A228 00397168  C0 22 0E 54 */	lfs f1, lbl_8051F1B4@sda21(r2)
/* 8039A22C 0039716C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039A230 00397170  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039A234 00397174  C0 02 0E 6C */	lfs f0, lbl_8051F1CC@sda21(r2)
/* 8039A238 00397178  EC 22 00 72 */	fmuls f1, f2, f1
/* 8039A23C 0039717C  FC 20 08 1E */	fctiwz f1, f1
/* 8039A240 00397180  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 8039A244 00397184  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8039A248 00397188  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039A24C 0039718C  7C 63 02 14 */	add r3, r3, r0
/* 8039A250 00397190  C0 23 00 04 */	lfs f1, 4(r3)
/* 8039A254 00397194  FC 20 08 50 */	fneg f1, f1
/* 8039A258 00397198  EC 23 00 72 */	fmuls f1, f3, f1
/* 8039A25C 0039719C  D0 3F 00 28 */	stfs f1, 0x28(r31)
/* 8039A260 003971A0  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8039A264 003971A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039A268 003971A8  40 80 00 08 */	bge .L_8039A270
/* 8039A26C 003971AC  FC 20 00 90 */	fmr f1, f0
.L_8039A270:
/* 8039A270 003971B0  C0 02 0E 70 */	lfs f0, lbl_8051F1D0@sda21(r2)
/* 8039A274 003971B4  EF E0 08 24 */	fdivs f31, f0, f1
/* 8039A278 003971B8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8039A27C 003971BC  4C 40 13 82 */	cror 2, 0, 2
/* 8039A280 003971C0  40 82 00 1C */	bne .L_8039A29C
/* 8039A284 003971C4  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039A288 003971C8  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8039A28C 003971CC  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8039A290 003971D0  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8039A294 003971D4  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8039A298 003971D8  48 00 00 3C */	b .L_8039A2D4
.L_8039A29C:
/* 8039A29C 003971DC  C0 22 0E 68 */	lfs f1, lbl_8051F1C8@sda21(r2)
/* 8039A2A0 003971E0  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 8039A2A4 003971E4  EC 21 00 28 */	fsubs f1, f1, f0
/* 8039A2A8 003971E8  48 07 79 29 */	bl roundAng__Ff
/* 8039A2AC 003971EC  C0 02 0E 74 */	lfs f0, lbl_8051F1D4@sda21(r2)
/* 8039A2B0 003971F0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8039A2B4 003971F4  EC 20 00 72 */	fmuls f1, f0, f1
/* 8039A2B8 003971F8  C0 02 0E 68 */	lfs f0, lbl_8051F1C8@sda21(r2)
/* 8039A2BC 003971FC  EC 01 00 24 */	fdivs f0, f1, f0
/* 8039A2C0 00397200  D0 03 00 C0 */	stfs f0, 0xc0(r3)
/* 8039A2C4 00397204  81 83 00 00 */	lwz r12, 0(r3)
/* 8039A2C8 00397208  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039A2CC 0039720C  7D 89 03 A6 */	mtctr r12
/* 8039A2D0 00397210  4E 80 04 21 */	bctrl 
.L_8039A2D4:
/* 8039A2D4 00397214  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 8039A2D8 00397218  C0 DF 00 1C */	lfs f6, 0x1c(r31)
/* 8039A2DC 0039721C  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8039A2E0 00397220  C0 BF 00 20 */	lfs f5, 0x20(r31)
/* 8039A2E4 00397224  EC 40 30 28 */	fsubs f2, f0, f6
/* 8039A2E8 00397228  C0 02 0E 78 */	lfs f0, lbl_8051F1D8@sda21(r2)
/* 8039A2EC 0039722C  EC 81 28 28 */	fsubs f4, f1, f5
/* 8039A2F0 00397230  C0 22 0E 80 */	lfs f1, lbl_8051F1E0@sda21(r2)
/* 8039A2F4 00397234  EC 42 00 32 */	fmuls f2, f2, f0
/* 8039A2F8 00397238  C0 62 0E 7C */	lfs f3, lbl_8051F1DC@sda21(r2)
/* 8039A2FC 0039723C  EC 04 00 32 */	fmuls f0, f4, f0
/* 8039A300 00397240  EC 46 10 2A */	fadds f2, f6, f2
/* 8039A304 00397244  EC 05 00 2A */	fadds f0, f5, f0
/* 8039A308 00397248  D0 5F 00 1C */	stfs f2, 0x1c(r31)
/* 8039A30C 0039724C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8039A310 00397250  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8039A314 00397254  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 8039A318 00397258  EC 02 00 2A */	fadds f0, f2, f0
/* 8039A31C 0039725C  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8039A320 00397260  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 8039A324 00397264  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 8039A328 00397268  EC 02 00 2A */	fadds f0, f2, f0
/* 8039A32C 0039726C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8039A330 00397270  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 8039A334 00397274  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 8039A338 00397278  EC 01 00 2A */	fadds f0, f1, f0
/* 8039A33C 0039727C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8039A340 00397280  EC 23 10 2A */	fadds f1, f3, f2
/* 8039A344 00397284  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8039A348 00397288  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8039A34C 0039728C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039A350 00397290  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039A354 00397294  7D 89 03 A6 */	mtctr r12
/* 8039A358 00397298  4E 80 04 21 */	bctrl 
/* 8039A35C 0039729C  C0 02 0E 84 */	lfs f0, lbl_8051F1E4@sda21(r2)
/* 8039A360 003972A0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8039A364 003972A4  40 81 00 08 */	ble .L_8039A36C
/* 8039A368 003972A8  FF E0 00 90 */	fmr f31, f0
.L_8039A36C:
/* 8039A36C 003972AC  C0 02 0E 70 */	lfs f0, lbl_8051F1D0@sda21(r2)
/* 8039A370 003972B0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8039A374 003972B4  4C 40 13 82 */	cror 2, 0, 2
/* 8039A378 003972B8  40 82 00 18 */	bne .L_8039A390
/* 8039A37C 003972BC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8039A380 003972C0  38 00 00 00 */	li r0, 0
/* 8039A384 003972C4  FF E0 00 90 */	fmr f31, f0
/* 8039A388 003972C8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039A38C 003972CC  48 00 00 10 */	b .L_8039A39C
.L_8039A390:
/* 8039A390 003972D0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8039A394 003972D4  38 00 00 01 */	li r0, 1
/* 8039A398 003972D8  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8039A39C:
/* 8039A39C 003972DC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8039A3A0 003972E0  D3 E3 00 CC */	stfs f31, 0xcc(r3)
/* 8039A3A4 003972E4  D3 E3 00 D0 */	stfs f31, 0xd0(r3)
/* 8039A3A8 003972E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039A3AC 003972EC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039A3B0 003972F0  7D 89 03 A6 */	mtctr r12
/* 8039A3B4 003972F4  4E 80 04 21 */	bctrl 
/* 8039A3B8 003972F8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8039A3BC 003972FC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8039A3C0 00397300  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8039A3C4 00397304  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8039A3C8 00397308  7C 08 03 A6 */	mtlr r0
/* 8039A3CC 0039730C  38 21 00 40 */	addi r1, r1, 0x40
/* 8039A3D0 00397310  4E 80 00 20 */	blr 
.endfn posUpdate__Q28Morimura14TVsSelectOnyonFf

.fn getAngDist__Q28Morimura14TVsSelectOnyonFv, global
/* 8039A3D4 00397314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039A3D8 00397318  7C 08 02 A6 */	mflr r0
/* 8039A3DC 0039731C  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039A3E0 00397320  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039A3E4 00397324  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8039A3E8 00397328  7C 7F 1B 78 */	mr r31, r3
/* 8039A3EC 0039732C  C0 43 00 14 */	lfs f2, 0x14(r3)
/* 8039A3F0 00397330  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8039A3F4 00397334  EC 22 08 28 */	fsubs f1, f2, f1
/* 8039A3F8 00397338  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8039A3FC 0039733C  40 82 00 08 */	bne .L_8039A404
/* 8039A400 00397340  C0 22 0E 78 */	lfs f1, lbl_8051F1D8@sda21(r2)
.L_8039A404:
/* 8039A404 00397344  C0 7F 00 18 */	lfs f3, 0x18(r31)
/* 8039A408 00397348  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 8039A40C 0039734C  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039A410 00397350  EC 43 10 28 */	fsubs f2, f3, f2
/* 8039A414 00397354  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 8039A418 00397358  40 82 00 08 */	bne .L_8039A420
/* 8039A41C 0039735C  C0 42 0E 78 */	lfs f2, lbl_8051F1D8@sda21(r2)
.L_8039A420:
/* 8039A420 00397360  FC 40 10 50 */	fneg f2, f2
/* 8039A424 00397364  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8039A428 00397368  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8039A42C 0039736C  4B C9 AC DD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8039A430 00397370  48 07 77 A1 */	bl roundAng__Ff
/* 8039A434 00397374  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 8039A438 00397378  48 07 77 C5 */	bl angDist__Fff
/* 8039A43C 0039737C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039A440 00397380  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8039A444 00397384  7C 08 03 A6 */	mtlr r0
/* 8039A448 00397388  38 21 00 10 */	addi r1, r1, 0x10
/* 8039A44C 0039738C  4E 80 00 20 */	blr 
.endfn getAngDist__Q28Morimura14TVsSelectOnyonFv

.fn create__Q28Morimura15TVsSelectScreenFPCcUl, global
/* 8039A450 00397390  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8039A454 00397394  7C 08 02 A6 */	mflr r0
/* 8039A458 00397398  90 01 00 44 */	stw r0, 0x44(r1)
/* 8039A45C 0039739C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8039A460 003973A0  7C 9F 23 78 */	mr r31, r4
/* 8039A464 003973A4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8039A468 003973A8  7C 7E 1B 78 */	mr r30, r3
/* 8039A46C 003973AC  38 60 01 48 */	li r3, 0x148
/* 8039A470 003973B0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8039A474 003973B4  7C BD 2B 78 */	mr r29, r5
/* 8039A478 003973B8  4B C8 9A 2D */	bl __nw__FUl
/* 8039A47C 003973BC  7C 60 1B 79 */	or. r0, r3, r3
/* 8039A480 003973C0  41 82 00 0C */	beq .L_8039A48C
/* 8039A484 003973C4  48 09 A9 29 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8039A488 003973C8  7C 60 1B 78 */	mr r0, r3
.L_8039A48C:
/* 8039A48C 003973CC  90 1E 00 08 */	stw r0, 8(r30)
/* 8039A490 003973D0  7F E4 FB 78 */	mr r4, r31
/* 8039A494 003973D4  7F A5 EB 78 */	mr r5, r29
/* 8039A498 003973D8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8039A49C 003973DC  80 DE 00 0C */	lwz r6, 0xc(r30)
/* 8039A4A0 003973E0  4B CA 51 85 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8039A4A4 003973E4  80 7E 00 08 */	lwz r3, 8(r30)
/* 8039A4A8 003973E8  3C A0 6E 75 */	lis r5, 0x6E753131@ha
/* 8039A4AC 003973EC  3C 80 54 62 */	lis r4, 0x54626D65@ha
/* 8039A4B0 003973F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8039A4B4 003973F4  38 C5 31 31 */	addi r6, r5, 0x6E753131@l
/* 8039A4B8 003973F8  38 A4 6D 65 */	addi r5, r4, 0x54626D65@l
/* 8039A4BC 003973FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039A4C0 00397400  7D 89 03 A6 */	mtctr r12
/* 8039A4C4 00397404  4E 80 04 21 */	bctrl 
/* 8039A4C8 00397408  7C 7F 1B 79 */	or. r31, r3, r3
/* 8039A4CC 0039740C  40 82 00 20 */	bne .L_8039A4EC
/* 8039A4D0 00397410  3C 60 80 49 */	lis r3, lbl_80494B24@ha
/* 8039A4D4 00397414  3C A0 80 49 */	lis r5, lbl_80494B34@ha
/* 8039A4D8 00397418  38 63 4B 24 */	addi r3, r3, lbl_80494B24@l
/* 8039A4DC 0039741C  38 80 01 E9 */	li r4, 0x1e9
/* 8039A4E0 00397420  38 A5 4B 34 */	addi r5, r5, lbl_80494B34@l
/* 8039A4E4 00397424  4C C6 31 82 */	crclr 6
/* 8039A4E8 00397428  4B C9 01 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039A4EC:
/* 8039A4EC 0039742C  38 60 00 2C */	li r3, 0x2c
/* 8039A4F0 00397430  4B C8 99 B5 */	bl __nw__FUl
/* 8039A4F4 00397434  7C 7D 1B 79 */	or. r29, r3, r3
/* 8039A4F8 00397438  41 82 00 48 */	beq .L_8039A540
/* 8039A4FC 0039743C  48 07 6E 95 */	bl __ct__5CNodeFv
/* 8039A500 00397440  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8039A504 00397444  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8039A508 00397448  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 8039A50C 0039744C  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TCallbackScissor@ha
/* 8039A510 00397450  90 1D 00 00 */	stw r0, 0(r29)
/* 8039A514 00397454  38 A0 00 00 */	li r5, 0
/* 8039A518 00397458  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8039A51C 0039745C  38 03 58 A4 */	addi r0, r3, __vt__Q28Morimura16TCallbackScissor@l
/* 8039A520 00397460  90 BD 00 18 */	stw r5, 0x18(r29)
/* 8039A524 00397464  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039A528 00397468  90 9D 00 00 */	stw r4, 0(r29)
/* 8039A52C 0039746C  90 1D 00 00 */	stw r0, 0(r29)
/* 8039A530 00397470  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8039A534 00397474  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8039A538 00397478  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 8039A53C 0039747C  D0 1D 00 28 */	stfs f0, 0x28(r29)
.L_8039A540:
/* 8039A540 00397480  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 8039A544 00397484  3C 60 62 6C */	lis r3, 0x626C6F31@ha
/* 8039A548 00397488  93 BE 00 18 */	stw r29, 0x18(r30)
/* 8039A54C 0039748C  38 C3 6F 31 */	addi r6, r3, 0x626C6F31@l
/* 8039A550 00397490  C0 02 0E 14 */	lfs f0, lbl_8051F174@sda21(r2)
/* 8039A554 00397494  38 A0 00 50 */	li r5, 0x50
/* 8039A558 00397498  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8039A55C 0039749C  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 8039A560 003974A0  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8039A564 003974A4  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8039A568 003974A8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8039A56C 003974AC  C0 02 0E 18 */	lfs f0, lbl_8051F178@sda21(r2)
/* 8039A570 003974B0  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8039A574 003974B4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8039A578 003974B8  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8039A57C 003974BC  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8039A580 003974C0  90 04 00 20 */	stw r0, 0x20(r4)
/* 8039A584 003974C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8039A588 003974C8  90 64 00 24 */	stw r3, 0x24(r4)
/* 8039A58C 003974CC  90 04 00 28 */	stw r0, 0x28(r4)
/* 8039A590 003974D0  80 7E 00 08 */	lwz r3, 8(r30)
/* 8039A594 003974D4  80 FE 00 18 */	lwz r7, 0x18(r30)
/* 8039A598 003974D8  48 09 A5 8D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8039A59C 003974DC  38 60 00 48 */	li r3, 0x48
/* 8039A5A0 003974E0  4B C8 99 05 */	bl __nw__FUl
/* 8039A5A4 003974E4  7C 67 1B 79 */	or. r7, r3, r3
/* 8039A5A8 003974E8  41 82 00 0C */	beq .L_8039A5B4
/* 8039A5AC 003974EC  4B F6 F0 69 */	bl __ct__Q32og6Screen16CallBack_MessageFv
/* 8039A5B0 003974F0  7C 67 1B 78 */	mr r7, r3
.L_8039A5B4:
/* 8039A5B4 003974F4  3C A0 6E 75 */	lis r5, 0x6E753131@ha
/* 8039A5B8 003974F8  3C 80 54 62 */	lis r4, 0x54626D65@ha
/* 8039A5BC 003974FC  38 C5 31 31 */	addi r6, r5, 0x6E753131@l
/* 8039A5C0 00397500  80 7E 00 08 */	lwz r3, 8(r30)
/* 8039A5C4 00397504  38 A4 6D 65 */	addi r5, r4, 0x54626D65@l
/* 8039A5C8 00397508  48 09 A5 5D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8039A5CC 0039750C  38 60 00 2C */	li r3, 0x2c
/* 8039A5D0 00397510  4B C8 98 D5 */	bl __nw__FUl
/* 8039A5D4 00397514  7C 7D 1B 79 */	or. r29, r3, r3
/* 8039A5D8 00397518  41 82 00 48 */	beq .L_8039A620
/* 8039A5DC 0039751C  48 07 6D B5 */	bl __ct__5CNodeFv
/* 8039A5E0 00397520  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8039A5E4 00397524  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8039A5E8 00397528  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 8039A5EC 0039752C  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TCallbackScissor@ha
/* 8039A5F0 00397530  90 1D 00 00 */	stw r0, 0(r29)
/* 8039A5F4 00397534  38 A0 00 00 */	li r5, 0
/* 8039A5F8 00397538  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8039A5FC 0039753C  38 03 58 A4 */	addi r0, r3, __vt__Q28Morimura16TCallbackScissor@l
/* 8039A600 00397540  90 BD 00 18 */	stw r5, 0x18(r29)
/* 8039A604 00397544  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039A608 00397548  90 9D 00 00 */	stw r4, 0(r29)
/* 8039A60C 0039754C  90 1D 00 00 */	stw r0, 0(r29)
/* 8039A610 00397550  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8039A614 00397554  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8039A618 00397558  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 8039A61C 0039755C  D0 1D 00 28 */	stfs f0, 0x28(r29)
.L_8039A620:
/* 8039A620 00397560  C0 42 0E 10 */	lfs f2, lbl_8051F170@sda21(r2)
/* 8039A624 00397564  3C 80 6E 75 */	lis r4, 0x6E753131@ha
/* 8039A628 00397568  C0 22 0E 14 */	lfs f1, lbl_8051F174@sda21(r2)
/* 8039A62C 0039756C  3C 60 54 62 */	lis r3, 0x54626D65@ha
/* 8039A630 00397570  D0 41 00 08 */	stfs f2, 8(r1)
/* 8039A634 00397574  7F A7 EB 78 */	mr r7, r29
/* 8039A638 00397578  C0 02 0E 18 */	lfs f0, lbl_8051F178@sda21(r2)
/* 8039A63C 0039757C  38 C4 31 31 */	addi r6, r4, 0x6E753131@l
/* 8039A640 00397580  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8039A644 00397584  38 A3 6D 65 */	addi r5, r3, 0x54626D65@l
/* 8039A648 00397588  80 61 00 08 */	lwz r3, 8(r1)
/* 8039A64C 0039758C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8039A650 00397590  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8039A654 00397594  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 8039A658 00397598  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8039A65C 0039759C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8039A660 003975A0  90 1D 00 20 */	stw r0, 0x20(r29)
/* 8039A664 003975A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039A668 003975A8  90 7D 00 24 */	stw r3, 0x24(r29)
/* 8039A66C 003975AC  90 1D 00 28 */	stw r0, 0x28(r29)
/* 8039A670 003975B0  80 7E 00 08 */	lwz r3, 8(r30)
/* 8039A674 003975B4  48 09 A4 B1 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8039A678 003975B8  7F E3 FB 78 */	mr r3, r31
/* 8039A67C 003975BC  4B C9 EA 65 */	bl getParentPane__7J2DPaneFv
/* 8039A680 003975C0  28 03 00 00 */	cmplwi r3, 0
/* 8039A684 003975C4  41 82 00 14 */	beq .L_8039A698
/* 8039A688 003975C8  7F E3 FB 78 */	mr r3, r31
/* 8039A68C 003975CC  4B C9 EA 55 */	bl getParentPane__7J2DPaneFv
/* 8039A690 003975D0  7F E4 FB 78 */	mr r4, r31
/* 8039A694 003975D4  4B C9 D1 A1 */	bl removeChild__7J2DPaneFP7J2DPane
.L_8039A698:
/* 8039A698 003975D8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8039A69C 003975DC  4B F6 F7 65 */	bl setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
/* 8039A6A0 003975E0  80 7E 00 08 */	lwz r3, 8(r30)
/* 8039A6A4 003975E4  3C A0 75 72 */	lis r5, 0x75727365@ha
/* 8039A6A8 003975E8  3C 80 00 4E */	lis r4, 0x004E636F@ha
/* 8039A6AC 003975EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8039A6B0 003975F0  38 C5 73 65 */	addi r6, r5, 0x75727365@l
/* 8039A6B4 003975F4  38 A4 63 6F */	addi r5, r4, 0x004E636F@l
/* 8039A6B8 003975F8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039A6BC 003975FC  7D 89 03 A6 */	mtctr r12
/* 8039A6C0 00397600  4E 80 04 21 */	bctrl 
/* 8039A6C4 00397604  7F E4 FB 78 */	mr r4, r31
/* 8039A6C8 00397608  4B C9 CF FD */	bl appendChild__7J2DPaneFP7J2DPane
/* 8039A6CC 0039760C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8039A6D0 00397610  54 03 10 3A */	slwi r3, r0, 2
/* 8039A6D4 00397614  4B C8 98 D9 */	bl __nwa__FUl
/* 8039A6D8 00397618  90 7E 00 04 */	stw r3, 4(r30)
/* 8039A6DC 0039761C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8039A6E0 00397620  4B F6 8C 35 */	bl setAlphaScreen__Q22og6ScreenFP7J2DPane
/* 8039A6E4 00397624  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8039A6E8 00397628  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8039A6EC 0039762C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8039A6F0 00397630  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8039A6F4 00397634  7C 08 03 A6 */	mtlr r0
/* 8039A6F8 00397638  38 21 00 40 */	addi r1, r1, 0x40
/* 8039A6FC 0039763C  4E 80 00 20 */	blr 
.endfn create__Q28Morimura15TVsSelectScreenFPCcUl

.fn update__Q28Morimura17TVsSelectCBWinNumFv, global
/* 8039A700 00397640  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039A704 00397644  7C 08 02 A6 */	mflr r0
/* 8039A708 00397648  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039A70C 0039764C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8039A710 00397650  7C 7F 1B 78 */	mr r31, r3
/* 8039A714 00397654  4B F7 1D 69 */	bl update__Q32og6Screen18CallBack_CounterRVFv
/* 8039A718 00397658  7F E3 FB 78 */	mr r3, r31
/* 8039A71C 0039765C  4B F7 2C D5 */	bl setValue__Q32og6Screen19CallBack_CounterDayFv
/* 8039A720 00397660  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8039A724 00397664  4B F8 E8 61 */	bl calc__Q32og6Screen8ScaleMgrFv
/* 8039A728 00397668  80 7F 00 A8 */	lwz r3, 0xa8(r31)
/* 8039A72C 0039766C  D0 23 00 CC */	stfs f1, 0xcc(r3)
/* 8039A730 00397670  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 8039A734 00397674  81 83 00 00 */	lwz r12, 0(r3)
/* 8039A738 00397678  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039A73C 0039767C  7D 89 03 A6 */	mtctr r12
/* 8039A740 00397680  4E 80 04 21 */	bctrl 
/* 8039A744 00397684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039A748 00397688  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8039A74C 0039768C  7C 08 03 A6 */	mtlr r0
/* 8039A750 00397690  38 21 00 10 */	addi r1, r1, 0x10
/* 8039A754 00397694  4E 80 00 20 */	blr 
.endfn update__Q28Morimura17TVsSelectCBWinNumFv

.fn setValue__Q28Morimura17TVsSelectCBWinNumFbb, global
/* 8039A758 00397698  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039A75C 0039769C  7C 08 02 A6 */	mflr r0
/* 8039A760 003976A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039A764 003976A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8039A768 003976A8  7C 7F 1B 78 */	mr r31, r3
/* 8039A76C 003976AC  88 03 00 AC */	lbz r0, 0xac(r3)
/* 8039A770 003976B0  28 00 00 00 */	cmplwi r0, 0
/* 8039A774 003976B4  41 82 00 34 */	beq .L_8039A7A8
/* 8039A778 003976B8  38 80 00 01 */	li r4, 1
/* 8039A77C 003976BC  38 A0 00 00 */	li r5, 0
/* 8039A780 003976C0  4B F7 19 05 */	bl setValue__Q32og6Screen18CallBack_CounterRVFbb
/* 8039A784 003976C4  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8039A788 003976C8  C0 22 0E 28 */	lfs f1, lbl_8051F188@sda21(r2)
/* 8039A78C 003976CC  C0 42 0E 94 */	lfs f2, lbl_8051F1F4@sda21(r2)
/* 8039A790 003976D0  C0 62 0E 98 */	lfs f3, lbl_8051F1F8@sda21(r2)
/* 8039A794 003976D4  C0 82 0E 10 */	lfs f4, lbl_8051F170@sda21(r2)
/* 8039A798 003976D8  4B F8 E7 41 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 8039A79C 003976DC  38 00 00 00 */	li r0, 0
/* 8039A7A0 003976E0  98 1F 00 AC */	stb r0, 0xac(r31)
/* 8039A7A4 003976E4  48 00 00 08 */	b .L_8039A7AC
.L_8039A7A8:
/* 8039A7A8 003976E8  4B F7 18 DD */	bl setValue__Q32og6Screen18CallBack_CounterRVFbb
.L_8039A7AC:
/* 8039A7AC 003976EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039A7B0 003976F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8039A7B4 003976F4  7C 08 03 A6 */	mtlr r0
/* 8039A7B8 003976F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8039A7BC 003976FC  4E 80 00 20 */	blr 
.endfn setValue__Q28Morimura17TVsSelectCBWinNumFbb

.fn __ct__Q28Morimura9TVsSelectFv, global
/* 8039A7C0 00397700  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039A7C4 00397704  7C 08 02 A6 */	mflr r0
/* 8039A7C8 00397708  3C 80 80 49 */	lis r4, lbl_80494B40@ha
/* 8039A7CC 0039770C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039A7D0 00397710  38 84 4B 40 */	addi r4, r4, lbl_80494B40@l
/* 8039A7D4 00397714  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8039A7D8 00397718  7C 7F 1B 78 */	mr r31, r3
/* 8039A7DC 0039771C  48 00 84 DD */	bl __ct__Q28Morimura11TScrollListFPc
/* 8039A7E0 00397720  3C 80 80 4E */	lis r4, __vt__Q28Morimura9TVsSelect@ha
/* 8039A7E4 00397724  39 20 00 00 */	li r9, 0
/* 8039A7E8 00397728  38 84 55 00 */	addi r4, r4, __vt__Q28Morimura9TVsSelect@l
/* 8039A7EC 0039772C  39 00 00 01 */	li r8, 1
/* 8039A7F0 00397730  90 9F 00 00 */	stw r4, 0(r31)
/* 8039A7F4 00397734  38 04 00 10 */	addi r0, r4, 0x10
/* 8039A7F8 00397738  3C 60 80 38 */	lis r3, "__ct__10Vector2<f>Fv"@ha
/* 8039A7FC 0039773C  C0 62 0E 10 */	lfs f3, lbl_8051F170@sda21(r2)
/* 8039A800 00397740  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8039A804 00397744  38 83 D0 B8 */	addi r4, r3, "__ct__10Vector2<f>Fv"@l
/* 8039A808 00397748  C0 42 0E 20 */	lfs f2, lbl_8051F180@sda21(r2)
/* 8039A80C 0039774C  38 00 FF FF */	li r0, -1
/* 8039A810 00397750  91 3F 00 B4 */	stw r9, 0xb4(r31)
/* 8039A814 00397754  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 8039A818 00397758  C0 22 0E 9C */	lfs f1, lbl_8051F1FC@sda21(r2)
/* 8039A81C 0039775C  38 A0 00 00 */	li r5, 0
/* 8039A820 00397760  91 3F 00 B8 */	stw r9, 0xb8(r31)
/* 8039A824 00397764  38 C0 00 08 */	li r6, 8
/* 8039A828 00397768  C0 02 0E A0 */	lfs f0, lbl_8051F200@sda21(r2)
/* 8039A82C 0039776C  38 E0 00 05 */	li r7, 5
/* 8039A830 00397770  91 3F 00 BC */	stw r9, 0xbc(r31)
/* 8039A834 00397774  91 3F 00 C0 */	stw r9, 0xc0(r31)
/* 8039A838 00397778  91 3F 00 C4 */	stw r9, 0xc4(r31)
/* 8039A83C 0039777C  91 3F 00 C8 */	stw r9, 0xc8(r31)
/* 8039A840 00397780  91 3F 00 CC */	stw r9, 0xcc(r31)
/* 8039A844 00397784  91 3F 00 D0 */	stw r9, 0xd0(r31)
/* 8039A848 00397788  91 3F 00 D4 */	stw r9, 0xd4(r31)
/* 8039A84C 0039778C  91 3F 00 D8 */	stw r9, 0xd8(r31)
/* 8039A850 00397790  91 3F 00 DC */	stw r9, 0xdc(r31)
/* 8039A854 00397794  91 3F 00 E0 */	stw r9, 0xe0(r31)
/* 8039A858 00397798  91 3F 00 E4 */	stw r9, 0xe4(r31)
/* 8039A85C 0039779C  91 3F 00 E8 */	stw r9, 0xe8(r31)
/* 8039A860 003977A0  91 3F 00 EC */	stw r9, 0xec(r31)
/* 8039A864 003977A4  91 3F 00 F0 */	stw r9, 0xf0(r31)
/* 8039A868 003977A8  91 3F 01 10 */	stw r9, 0x110(r31)
/* 8039A86C 003977AC  91 3F 01 E4 */	stw r9, 0x1e4(r31)
/* 8039A870 003977B0  91 3F 01 FC */	stw r9, 0x1fc(r31)
/* 8039A874 003977B4  91 3F 02 00 */	stw r9, 0x200(r31)
/* 8039A878 003977B8  91 3F 02 04 */	stw r9, 0x204(r31)
/* 8039A87C 003977BC  91 3F 02 08 */	stw r9, 0x208(r31)
/* 8039A880 003977C0  91 3F 02 0C */	stw r9, 0x20c(r31)
/* 8039A884 003977C4  99 1F 02 28 */	stb r8, 0x228(r31)
/* 8039A888 003977C8  99 3F 02 2A */	stb r9, 0x22a(r31)
/* 8039A88C 003977CC  99 1F 02 2B */	stb r8, 0x22b(r31)
/* 8039A890 003977D0  99 3F 02 2C */	stb r9, 0x22c(r31)
/* 8039A894 003977D4  99 3F 02 2D */	stb r9, 0x22d(r31)
/* 8039A898 003977D8  99 1F 02 2E */	stb r8, 0x22e(r31)
/* 8039A89C 003977DC  D0 7F 02 30 */	stfs f3, 0x230(r31)
/* 8039A8A0 003977E0  D0 5F 02 34 */	stfs f2, 0x234(r31)
/* 8039A8A4 003977E4  D0 5F 02 38 */	stfs f2, 0x238(r31)
/* 8039A8A8 003977E8  99 3F 02 3C */	stb r9, 0x23c(r31)
/* 8039A8AC 003977EC  99 3F 02 3D */	stb r9, 0x23d(r31)
/* 8039A8B0 003977F0  91 3F 02 40 */	stw r9, 0x240(r31)
/* 8039A8B4 003977F4  91 3F 02 44 */	stw r9, 0x244(r31)
/* 8039A8B8 003977F8  90 1F 02 4C */	stw r0, 0x24c(r31)
/* 8039A8BC 003977FC  D0 7F 02 50 */	stfs f3, 0x250(r31)
/* 8039A8C0 00397800  D0 5F 02 58 */	stfs f2, 0x258(r31)
/* 8039A8C4 00397804  D0 7F 02 5C */	stfs f3, 0x25c(r31)
/* 8039A8C8 00397808  D0 7F 02 60 */	stfs f3, 0x260(r31)
/* 8039A8CC 0039780C  D0 3F 02 64 */	stfs f1, 0x264(r31)
/* 8039A8D0 00397810  D0 7F 02 68 */	stfs f3, 0x268(r31)
/* 8039A8D4 00397814  D0 1F 02 70 */	stfs f0, 0x270(r31)
/* 8039A8D8 00397818  99 3F 02 8E */	stb r9, 0x28e(r31)
/* 8039A8DC 0039781C  4B D2 6F 61 */	bl __construct_array
/* 8039A8E0 00397820  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8039A8E4 00397824  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 8039A8E8 00397828  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8039A8EC 0039782C  38 A0 00 00 */	li r5, 0
/* 8039A8F0 00397830  38 C0 00 08 */	li r6, 8
/* 8039A8F4 00397834  38 E0 00 05 */	li r7, 5
/* 8039A8F8 00397838  4B D2 6F 45 */	bl __construct_array
/* 8039A8FC 0039783C  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8039A900 00397840  38 7F 02 F8 */	addi r3, r31, 0x2f8
/* 8039A904 00397844  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8039A908 00397848  38 A0 00 00 */	li r5, 0
/* 8039A90C 0039784C  38 C0 00 08 */	li r6, 8
/* 8039A910 00397850  38 E0 00 02 */	li r7, 2
/* 8039A914 00397854  4B D2 6F 29 */	bl __construct_array
/* 8039A918 00397858  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8039A91C 0039785C  38 7F 03 08 */	addi r3, r31, 0x308
/* 8039A920 00397860  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8039A924 00397864  38 A0 00 00 */	li r5, 0
/* 8039A928 00397868  38 C0 00 08 */	li r6, 8
/* 8039A92C 0039786C  38 E0 00 02 */	li r7, 2
/* 8039A930 00397870  4B D2 6F 0D */	bl __construct_array
/* 8039A934 00397874  38 00 00 05 */	li r0, 5
/* 8039A938 00397878  38 C0 00 00 */	li r6, 0
/* 8039A93C 0039787C  B0 1F 00 8E */	sth r0, 0x8e(r31)
/* 8039A940 00397880  7C C5 33 78 */	mr r5, r6
/* 8039A944 00397884  7C C3 33 78 */	mr r3, r6
/* 8039A948 00397888  38 E0 00 00 */	li r7, 0
/* 8039A94C 0039788C  48 00 00 1C */	b .L_8039A968
.L_8039A950:
/* 8039A950 00397890  38 86 01 40 */	addi r4, r6, 0x140
/* 8039A954 00397894  38 06 01 2C */	addi r0, r6, 0x12c
/* 8039A958 00397898  7C BF 21 2E */	stwx r5, r31, r4
/* 8039A95C 0039789C  38 C6 00 04 */	addi r6, r6, 4
/* 8039A960 003978A0  38 E7 00 01 */	addi r7, r7, 1
/* 8039A964 003978A4  7C 7F 01 2E */	stwx r3, r31, r0
.L_8039A968:
/* 8039A968 003978A8  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8039A96C 003978AC  7C 07 00 00 */	cmpw r7, r0
/* 8039A970 003978B0  41 80 FF E0 */	blt .L_8039A950
/* 8039A974 003978B4  38 60 00 03 */	li r3, 3
/* 8039A978 003978B8  38 00 00 00 */	li r0, 0
/* 8039A97C 003978BC  90 7F 02 74 */	stw r3, 0x274(r31)
/* 8039A980 003978C0  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 8039A984 003978C4  90 1F 01 E8 */	stw r0, 0x1e8(r31)
/* 8039A988 003978C8  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 8039A98C 003978CC  90 1F 01 F0 */	stw r0, 0x1f0(r31)
/* 8039A990 003978D0  90 1F 02 10 */	stw r0, 0x210(r31)
/* 8039A994 003978D4  90 1F 01 08 */	stw r0, 0x108(r31)
/* 8039A998 003978D8  90 1F 02 84 */	stw r0, 0x284(r31)
/* 8039A99C 003978DC  98 1F 02 8C */	stb r0, 0x28c(r31)
/* 8039A9A0 003978E0  90 1F 01 00 */	stw r0, 0x100(r31)
/* 8039A9A4 003978E4  D0 3F 03 08 */	stfs f1, 0x308(r31)
/* 8039A9A8 003978E8  D0 3F 03 0C */	stfs f1, 0x30c(r31)
/* 8039A9AC 003978EC  90 7F 02 78 */	stw r3, 0x278(r31)
/* 8039A9B0 003978F0  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 8039A9B4 003978F4  90 1F 01 F4 */	stw r0, 0x1f4(r31)
/* 8039A9B8 003978F8  90 1F 02 14 */	stw r0, 0x214(r31)
/* 8039A9BC 003978FC  90 1F 01 0C */	stw r0, 0x10c(r31)
/* 8039A9C0 00397900  90 1F 02 88 */	stw r0, 0x288(r31)
/* 8039A9C4 00397904  98 1F 02 8D */	stb r0, 0x28d(r31)
/* 8039A9C8 00397908  90 1F 01 04 */	stw r0, 0x104(r31)
/* 8039A9CC 0039790C  D0 3F 03 10 */	stfs f1, 0x310(r31)
/* 8039A9D0 00397910  D0 3F 03 14 */	stfs f1, 0x314(r31)
/* 8039A9D4 00397914  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 8039A9D8 00397918  90 1F 00 F8 */	stw r0, 0xf8(r31)
/* 8039A9DC 0039791C  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 8039A9E0 00397920  D0 1F 02 A8 */	stfs f0, 0x2a8(r31)
/* 8039A9E4 00397924  D0 1F 02 AC */	stfs f0, 0x2ac(r31)
/* 8039A9E8 00397928  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 8039A9EC 0039792C  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 8039A9F0 00397930  D0 1F 02 B0 */	stfs f0, 0x2b0(r31)
/* 8039A9F4 00397934  D0 1F 02 B4 */	stfs f0, 0x2b4(r31)
/* 8039A9F8 00397938  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 8039A9FC 0039793C  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 8039AA00 00397940  D0 1F 02 B8 */	stfs f0, 0x2b8(r31)
/* 8039AA04 00397944  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 8039AA08 00397948  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 8039AA0C 0039794C  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 8039AA10 00397950  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8039AA14 00397954  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8039AA18 00397958  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 8039AA1C 0039795C  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 8039AA20 00397960  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 8039AA24 00397964  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 8039AA28 00397968  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 8039AA2C 0039796C  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
/* 8039AA30 00397970  D0 3F 03 20 */	stfs f1, 0x320(r31)
/* 8039AA34 00397974  D0 3F 03 24 */	stfs f1, 0x324(r31)
/* 8039AA38 00397978  90 1F 01 B4 */	stw r0, 0x1b4(r31)
/* 8039AA3C 0039797C  90 1F 01 CC */	stw r0, 0x1cc(r31)
/* 8039AA40 00397980  90 1F 01 14 */	stw r0, 0x114(r31)
/* 8039AA44 00397984  90 1F 01 54 */	stw r0, 0x154(r31)
/* 8039AA48 00397988  90 1F 01 6C */	stw r0, 0x16c(r31)
/* 8039AA4C 0039798C  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 8039AA50 00397990  90 1F 01 D0 */	stw r0, 0x1d0(r31)
/* 8039AA54 00397994  90 1F 01 18 */	stw r0, 0x118(r31)
/* 8039AA58 00397998  90 1F 01 58 */	stw r0, 0x158(r31)
/* 8039AA5C 0039799C  90 1F 01 70 */	stw r0, 0x170(r31)
/* 8039AA60 003979A0  90 1F 01 BC */	stw r0, 0x1bc(r31)
/* 8039AA64 003979A4  90 1F 01 D4 */	stw r0, 0x1d4(r31)
/* 8039AA68 003979A8  90 1F 01 1C */	stw r0, 0x11c(r31)
/* 8039AA6C 003979AC  90 1F 01 5C */	stw r0, 0x15c(r31)
/* 8039AA70 003979B0  90 1F 01 74 */	stw r0, 0x174(r31)
/* 8039AA74 003979B4  90 1F 01 C0 */	stw r0, 0x1c0(r31)
/* 8039AA78 003979B8  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 8039AA7C 003979BC  90 1F 01 20 */	stw r0, 0x120(r31)
/* 8039AA80 003979C0  90 1F 01 60 */	stw r0, 0x160(r31)
/* 8039AA84 003979C4  90 1F 01 78 */	stw r0, 0x178(r31)
/* 8039AA88 003979C8  90 1F 01 C4 */	stw r0, 0x1c4(r31)
/* 8039AA8C 003979CC  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 8039AA90 003979D0  90 1F 01 24 */	stw r0, 0x124(r31)
/* 8039AA94 003979D4  90 1F 01 64 */	stw r0, 0x164(r31)
/* 8039AA98 003979D8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8039AA9C 003979DC  90 1F 01 C8 */	stw r0, 0x1c8(r31)
/* 8039AAA0 003979E0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8039AAA4 003979E4  90 1F 01 28 */	stw r0, 0x128(r31)
/* 8039AAA8 003979E8  90 1F 01 68 */	stw r0, 0x168(r31)
/* 8039AAAC 003979EC  90 1F 01 80 */	stw r0, 0x180(r31)
/* 8039AAB0 003979F0  90 1F 01 84 */	stw r0, 0x184(r31)
/* 8039AAB4 003979F4  90 1F 01 88 */	stw r0, 0x188(r31)
/* 8039AAB8 003979F8  90 1F 01 8C */	stw r0, 0x18c(r31)
/* 8039AABC 003979FC  90 1F 01 90 */	stw r0, 0x190(r31)
/* 8039AAC0 00397A00  90 1F 01 94 */	stw r0, 0x194(r31)
/* 8039AAC4 00397A04  90 1F 01 98 */	stw r0, 0x198(r31)
/* 8039AAC8 00397A08  90 1F 01 9C */	stw r0, 0x19c(r31)
/* 8039AACC 00397A0C  90 1F 01 A0 */	stw r0, 0x1a0(r31)
/* 8039AAD0 00397A10  90 1F 01 A4 */	stw r0, 0x1a4(r31)
/* 8039AAD4 00397A14  90 1F 01 A8 */	stw r0, 0x1a8(r31)
/* 8039AAD8 00397A18  90 1F 01 AC */	stw r0, 0x1ac(r31)
/* 8039AADC 00397A1C  90 1F 01 B0 */	stw r0, 0x1b0(r31)
/* 8039AAE0 00397A20  D0 0D 86 44 */	stfs f0, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
/* 8039AAE4 00397A24  3C 60 80 51 */	lis r3, mScrollParm__Q28Morimura9TVsSelect@ha
/* 8039AAE8 00397A28  C0 02 0E A4 */	lfs f0, lbl_8051F204@sda21(r2)
/* 8039AAEC 00397A2C  38 83 40 44 */	addi r4, r3, mScrollParm__Q28Morimura9TVsSelect@l
/* 8039AAF0 00397A30  D0 3F 02 6C */	stfs f1, 0x26c(r31)
/* 8039AAF4 00397A34  7F E3 FB 78 */	mr r3, r31
/* 8039AAF8 00397A38  C0 22 0E A8 */	lfs f1, lbl_8051F208@sda21(r2)
/* 8039AAFC 00397A3C  D0 1F 02 90 */	stfs f0, 0x290(r31)
/* 8039AB00 00397A40  C0 02 0E AC */	lfs f0, lbl_8051F20C@sda21(r2)
/* 8039AB04 00397A44  D0 3F 02 94 */	stfs f1, 0x294(r31)
/* 8039AB08 00397A48  C0 22 0E B0 */	lfs f1, lbl_8051F210@sda21(r2)
/* 8039AB0C 00397A4C  D0 1F 02 98 */	stfs f0, 0x298(r31)
/* 8039AB10 00397A50  C0 02 0E B4 */	lfs f0, lbl_8051F214@sda21(r2)
/* 8039AB14 00397A54  D0 3F 02 9C */	stfs f1, 0x29c(r31)
/* 8039AB18 00397A58  C0 82 0E 30 */	lfs f4, lbl_8051F190@sda21(r2)
/* 8039AB1C 00397A5C  D0 1F 02 A0 */	stfs f0, 0x2a0(r31)
/* 8039AB20 00397A60  C0 62 0E B8 */	lfs f3, lbl_8051F218@sda21(r2)
/* 8039AB24 00397A64  D0 1F 02 A4 */	stfs f0, 0x2a4(r31)
/* 8039AB28 00397A68  C0 42 0E BC */	lfs f2, lbl_8051F21C@sda21(r2)
/* 8039AB2C 00397A6C  C0 22 0E 84 */	lfs f1, lbl_8051F1E4@sda21(r2)
/* 8039AB30 00397A70  C0 02 0E C0 */	lfs f0, lbl_8051F220@sda21(r2)
/* 8039AB34 00397A74  D0 84 00 00 */	stfs f4, 0(r4)
/* 8039AB38 00397A78  D0 64 00 04 */	stfs f3, 4(r4)
/* 8039AB3C 00397A7C  D0 44 00 08 */	stfs f2, 8(r4)
/* 8039AB40 00397A80  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 8039AB44 00397A84  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8039AB48 00397A88  98 0D 99 C2 */	stb r0, mCanCancel__Q28Morimura9TVsSelect@sda21(r13)
/* 8039AB4C 00397A8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8039AB50 00397A90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039AB54 00397A94  7C 08 03 A6 */	mtlr r0
/* 8039AB58 00397A98  38 21 00 10 */	addi r1, r1, 0x10
/* 8039AB5C 00397A9C  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura9TVsSelectFv

.fn __dt__Q28Morimura9TVsSelectFv, global
/* 8039AB60 00397AA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039AB64 00397AA4  7C 08 02 A6 */	mflr r0
/* 8039AB68 00397AA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039AB6C 00397AAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8039AB70 00397AB0  7C 9F 23 78 */	mr r31, r4
/* 8039AB74 00397AB4  93 C1 00 08 */	stw r30, 8(r1)
/* 8039AB78 00397AB8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8039AB7C 00397ABC  41 82 00 D4 */	beq .L_8039AC50
/* 8039AB80 00397AC0  3C 60 80 4E */	lis r3, __vt__Q28Morimura9TVsSelect@ha
/* 8039AB84 00397AC4  38 63 55 00 */	addi r3, r3, __vt__Q28Morimura9TVsSelect@l
/* 8039AB88 00397AC8  90 7E 00 00 */	stw r3, 0(r30)
/* 8039AB8C 00397ACC  38 03 00 10 */	addi r0, r3, 0x10
/* 8039AB90 00397AD0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8039AB94 00397AD4  80 0D 99 B4 */	lwz r0, mDebugHeap__Q28Morimura9TVsSelect@sda21(r13)
/* 8039AB98 00397AD8  28 00 00 00 */	cmplwi r0, 0
/* 8039AB9C 00397ADC  41 82 00 18 */	beq .L_8039ABB4
/* 8039ABA0 00397AE0  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 8039ABA4 00397AE4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8039ABA8 00397AE8  4B C8 8B 89 */	bl freeAll__7JKRHeapFv
/* 8039ABAC 00397AEC  80 6D 99 B4 */	lwz r3, mDebugHeap__Q28Morimura9TVsSelect@sda21(r13)
/* 8039ABB0 00397AF0  4B C8 8A 05 */	bl destroy__7JKRHeapFv
.L_8039ABB4:
/* 8039ABB4 00397AF4  38 00 00 00 */	li r0, 0
/* 8039ABB8 00397AF8  28 1E 00 00 */	cmplwi r30, 0
/* 8039ABBC 00397AFC  90 0D 99 B4 */	stw r0, mDebugHeap__Q28Morimura9TVsSelect@sda21(r13)
/* 8039ABC0 00397B00  41 82 00 80 */	beq .L_8039AC40
/* 8039ABC4 00397B04  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TScrollList@ha
/* 8039ABC8 00397B08  38 63 58 C0 */	addi r3, r3, __vt__Q28Morimura11TScrollList@l
/* 8039ABCC 00397B0C  90 7E 00 00 */	stw r3, 0(r30)
/* 8039ABD0 00397B10  38 03 00 10 */	addi r0, r3, 0x10
/* 8039ABD4 00397B14  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8039ABD8 00397B18  41 82 00 68 */	beq .L_8039AC40
/* 8039ABDC 00397B1C  3C 60 80 4E */	lis r3, __vt__Q28Morimura9TTestBase@ha
/* 8039ABE0 00397B20  38 63 B8 F8 */	addi r3, r3, __vt__Q28Morimura9TTestBase@l
/* 8039ABE4 00397B24  90 7E 00 00 */	stw r3, 0(r30)
/* 8039ABE8 00397B28  38 03 00 10 */	addi r0, r3, 0x10
/* 8039ABEC 00397B2C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8039ABF0 00397B30  41 82 00 50 */	beq .L_8039AC40
/* 8039ABF4 00397B34  3C 60 80 4F */	lis r3, __vt__Q26Screen7ObjBase@ha
/* 8039ABF8 00397B38  38 63 D7 58 */	addi r3, r3, __vt__Q26Screen7ObjBase@l
/* 8039ABFC 00397B3C  90 7E 00 00 */	stw r3, 0(r30)
/* 8039AC00 00397B40  38 03 00 10 */	addi r0, r3, 0x10
/* 8039AC04 00397B44  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8039AC08 00397B48  41 82 00 38 */	beq .L_8039AC40
/* 8039AC0C 00397B4C  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8039AC10 00397B50  7F C3 F3 78 */	mr r3, r30
/* 8039AC14 00397B54  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 8039AC18 00397B58  90 9E 00 00 */	stw r4, 0(r30)
/* 8039AC1C 00397B5C  38 04 00 10 */	addi r0, r4, 0x10
/* 8039AC20 00397B60  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8039AC24 00397B64  48 07 69 AD */	bl del__5CNodeFv
/* 8039AC28 00397B68  38 7E 00 18 */	addi r3, r30, 0x18
/* 8039AC2C 00397B6C  38 80 00 00 */	li r4, 0
/* 8039AC30 00397B70  4B C8 24 05 */	bl __dt__11JKRDisposerFv
/* 8039AC34 00397B74  7F C3 F3 78 */	mr r3, r30
/* 8039AC38 00397B78  38 80 00 00 */	li r4, 0
/* 8039AC3C 00397B7C  48 07 69 4D */	bl __dt__5CNodeFv
.L_8039AC40:
/* 8039AC40 00397B80  7F E0 07 35 */	extsh. r0, r31
/* 8039AC44 00397B84  40 81 00 0C */	ble .L_8039AC50
/* 8039AC48 00397B88  7F C3 F3 78 */	mr r3, r30
/* 8039AC4C 00397B8C  4B C8 94 69 */	bl __dl__FPv
.L_8039AC50:
/* 8039AC50 00397B90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039AC54 00397B94  7F C3 F3 78 */	mr r3, r30
/* 8039AC58 00397B98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8039AC5C 00397B9C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8039AC60 00397BA0  7C 08 03 A6 */	mtlr r0
/* 8039AC64 00397BA4  38 21 00 10 */	addi r1, r1, 0x10
/* 8039AC68 00397BA8  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura9TVsSelectFv

.fn doCreate__Q28Morimura9TVsSelectFP10JKRArchive, global
/* 8039AC6C 00397BAC  94 21 FD 80 */	stwu r1, -0x280(r1)
/* 8039AC70 00397BB0  7C 08 02 A6 */	mflr r0
/* 8039AC74 00397BB4  90 01 02 84 */	stw r0, 0x284(r1)
/* 8039AC78 00397BB8  DB E1 02 70 */	stfd f31, 0x270(r1)
/* 8039AC7C 00397BBC  F3 E1 02 78 */	psq_st f31, 632(r1), 0, qr0
/* 8039AC80 00397BC0  DB C1 02 60 */	stfd f30, 0x260(r1)
/* 8039AC84 00397BC4  F3 C1 02 68 */	psq_st f30, 616(r1), 0, qr0
/* 8039AC88 00397BC8  BE A1 02 34 */	stmw r21, 0x234(r1)
/* 8039AC8C 00397BCC  3C C0 80 4E */	lis r6, lbl_804E5328@ha
/* 8039AC90 00397BD0  3C A0 80 49 */	lis r5, lbl_80494B18@ha
/* 8039AC94 00397BD4  7C 7F 1B 78 */	mr r31, r3
/* 8039AC98 00397BD8  7C 9C 23 78 */	mr r28, r4
/* 8039AC9C 00397BDC  3B A6 53 28 */	addi r29, r6, lbl_804E5328@l
/* 8039ACA0 00397BE0  3B C5 4B 18 */	addi r30, r5, lbl_80494B18@l
/* 8039ACA4 00397BE4  38 60 00 B0 */	li r3, 0xb0
/* 8039ACA8 00397BE8  4B C8 91 FD */	bl __nw__FUl
/* 8039ACAC 00397BEC  7C 60 1B 79 */	or. r0, r3, r3
/* 8039ACB0 00397BF0  41 82 00 10 */	beq .L_8039ACC0
/* 8039ACB4 00397BF4  38 80 00 01 */	li r4, 1
/* 8039ACB8 00397BF8  48 08 A1 9D */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 8039ACBC 00397BFC  7C 60 1B 78 */	mr r0, r3
.L_8039ACC0:
/* 8039ACC0 00397C00  90 1F 00 B8 */	stw r0, 0xb8(r31)
/* 8039ACC4 00397C04  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 8039ACC8 00397C08  28 00 00 00 */	cmplwi r0, 0
/* 8039ACCC 00397C0C  40 82 00 18 */	bne .L_8039ACE4
/* 8039ACD0 00397C10  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039ACD4 00397C14  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039ACD8 00397C18  38 80 03 0F */	li r4, 0x30f
/* 8039ACDC 00397C1C  4C C6 31 82 */	crclr 6
/* 8039ACE0 00397C20  4B C8 F9 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039ACE4:
/* 8039ACE4 00397C24  93 9F 00 78 */	stw r28, 0x78(r31)
/* 8039ACE8 00397C28  7F E3 FB 78 */	mr r3, r31
/* 8039ACEC 00397C2C  48 0B 92 BD */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8039ACF0 00397C30  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 8039ACF4 00397C34  3C C0 4C 45 */	lis r6, 0x4C454354@ha
/* 8039ACF8 00397C38  3C A0 56 53 */	lis r5, 0x56535345@ha
/* 8039ACFC 00397C3C  7C 75 1B 78 */	mr r21, r3
/* 8039AD00 00397C40  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 8039AD04 00397C44  38 C6 43 54 */	addi r6, r6, 0x4C454354@l
/* 8039AD08 00397C48  38 A5 53 45 */	addi r5, r5, 0x56535345@l
/* 8039AD0C 00397C4C  3B 60 00 00 */	li r27, 0
/* 8039AD10 00397C50  4B F7 46 0D */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8039AD14 00397C54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8039AD18 00397C58  41 82 00 14 */	beq .L_8039AD2C
/* 8039AD1C 00397C5C  92 BF 01 F8 */	stw r21, 0x1f8(r31)
/* 8039AD20 00397C60  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039AD24 00397C64  83 63 00 18 */	lwz r27, 0x18(r3)
/* 8039AD28 00397C68  48 00 00 0C */	b .L_8039AD34
.L_8039AD2C:
/* 8039AD2C 00397C6C  38 00 00 01 */	li r0, 1
/* 8039AD30 00397C70  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
.L_8039AD34:
/* 8039AD34 00397C74  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039AD38 00397C78  28 00 00 00 */	cmplwi r0, 0
/* 8039AD3C 00397C7C  41 82 02 68 */	beq .L_8039AFA4
/* 8039AD40 00397C80  80 8D 99 B0 */	lwz r4, mDebugHeapParent__Q28Morimura9TVsSelect@sda21(r13)
/* 8039AD44 00397C84  28 04 00 00 */	cmplwi r4, 0
/* 8039AD48 00397C88  41 82 02 48 */	beq .L_8039AF90
/* 8039AD4C 00397C8C  3C 60 00 20 */	lis r3, 0x20
/* 8039AD50 00397C90  38 A0 00 01 */	li r5, 1
/* 8039AD54 00397C94  4B C8 51 75 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 8039AD58 00397C98  28 03 00 00 */	cmplwi r3, 0
/* 8039AD5C 00397C9C  90 6D 99 B4 */	stw r3, mDebugHeap__Q28Morimura9TVsSelect@sda21(r13)
/* 8039AD60 00397CA0  40 82 00 18 */	bne .L_8039AD78
/* 8039AD64 00397CA4  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039AD68 00397CA8  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039AD6C 00397CAC  38 80 03 20 */	li r4, 0x320
/* 8039AD70 00397CB0  4C C6 31 82 */	crclr 6
/* 8039AD74 00397CB4  4B C8 F8 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039AD78:
/* 8039AD78 00397CB8  80 8D 99 B4 */	lwz r4, mDebugHeap__Q28Morimura9TVsSelect@sda21(r13)
/* 8039AD7C 00397CBC  38 60 00 38 */	li r3, 0x38
/* 8039AD80 00397CC0  38 A0 00 00 */	li r5, 0
/* 8039AD84 00397CC4  4B C8 91 BD */	bl __nw__FUlP7JKRHeapi
/* 8039AD88 00397CC8  28 03 00 00 */	cmplwi r3, 0
/* 8039AD8C 00397CCC  41 82 00 5C */	beq .L_8039ADE8
/* 8039AD90 00397CD0  3C A0 80 4B */	lis r5, __vt__Q32og6Screen14DispMemberBase@ha
/* 8039AD94 00397CD4  3C 80 80 4C */	lis r4, __vt__Q28Morimura18DispMemberVsSelect@ha
/* 8039AD98 00397CD8  38 05 11 48 */	addi r0, r5, __vt__Q32og6Screen14DispMemberBase@l
/* 8039AD9C 00397CDC  38 C0 00 00 */	li r6, 0
/* 8039ADA0 00397CE0  90 03 00 00 */	stw r0, 0(r3)
/* 8039ADA4 00397CE4  38 A4 0E 10 */	addi r5, r4, __vt__Q28Morimura18DispMemberVsSelect@l
/* 8039ADA8 00397CE8  38 80 FF FF */	li r4, -1
/* 8039ADAC 00397CEC  38 00 00 03 */	li r0, 3
/* 8039ADB0 00397CF0  90 C3 00 04 */	stw r6, 4(r3)
/* 8039ADB4 00397CF4  90 A3 00 00 */	stw r5, 0(r3)
/* 8039ADB8 00397CF8  90 C3 00 08 */	stw r6, 8(r3)
/* 8039ADBC 00397CFC  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8039ADC0 00397D00  90 C3 00 10 */	stw r6, 0x10(r3)
/* 8039ADC4 00397D04  90 83 00 14 */	stw r4, 0x14(r3)
/* 8039ADC8 00397D08  90 C3 00 18 */	stw r6, 0x18(r3)
/* 8039ADCC 00397D0C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8039ADD0 00397D10  90 03 00 20 */	stw r0, 0x20(r3)
/* 8039ADD4 00397D14  90 C3 00 24 */	stw r6, 0x24(r3)
/* 8039ADD8 00397D18  90 C3 00 28 */	stw r6, 0x28(r3)
/* 8039ADDC 00397D1C  90 83 00 2C */	stw r4, 0x2c(r3)
/* 8039ADE0 00397D20  90 C3 00 30 */	stw r6, 0x30(r3)
/* 8039ADE4 00397D24  90 C3 00 34 */	stw r6, 0x34(r3)
.L_8039ADE8:
/* 8039ADE8 00397D28  90 7F 01 F8 */	stw r3, 0x1f8(r31)
/* 8039ADEC 00397D2C  38 60 00 28 */	li r3, 0x28
/* 8039ADF0 00397D30  80 0D 99 B4 */	lwz r0, mDebugHeap__Q28Morimura9TVsSelect@sda21(r13)
/* 8039ADF4 00397D34  80 9F 01 F8 */	lwz r4, 0x1f8(r31)
/* 8039ADF8 00397D38  90 04 00 0C */	stw r0, 0xc(r4)
/* 8039ADFC 00397D3C  4B C8 90 A9 */	bl __nw__FUl
/* 8039AE00 00397D40  28 03 00 00 */	cmplwi r3, 0
/* 8039AE04 00397D44  41 82 00 5C */	beq .L_8039AE60
/* 8039AE08 00397D48  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 8039AE0C 00397D4C  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 8039AE10 00397D50  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8039AE14 00397D54  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 8039AE18 00397D58  90 03 00 00 */	stw r0, 0(r3)
/* 8039AE1C 00397D5C  39 00 00 00 */	li r8, 0
/* 8039AE20 00397D60  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 8039AE24 00397D64  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 8039AE28 00397D68  91 03 00 04 */	stw r8, 4(r3)
/* 8039AE2C 00397D6C  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 8039AE30 00397D70  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 8039AE34 00397D74  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 8039AE38 00397D78  90 03 00 00 */	stw r0, 0(r3)
/* 8039AE3C 00397D7C  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 8039AE40 00397D80  38 00 00 B4 */	li r0, 0xb4
/* 8039AE44 00397D84  91 03 00 08 */	stw r8, 8(r3)
/* 8039AE48 00397D88  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8039AE4C 00397D8C  90 A3 00 10 */	stw r5, 0x10(r3)
/* 8039AE50 00397D90  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8039AE54 00397D94  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8039AE58 00397D98  98 03 00 20 */	stb r0, 0x20(r3)
/* 8039AE5C 00397D9C  99 03 00 21 */	stb r8, 0x21(r3)
.L_8039AE60:
/* 8039AE60 00397DA0  80 9F 01 F8 */	lwz r4, 0x1f8(r31)
/* 8039AE64 00397DA4  90 64 00 10 */	stw r3, 0x10(r4)
/* 8039AE68 00397DA8  4B D2 E7 39 */	bl rand
/* 8039AE6C 00397DAC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8039AE70 00397DB0  3C 00 43 30 */	lis r0, 0x4330
/* 8039AE74 00397DB4  90 61 02 04 */	stw r3, 0x204(r1)
/* 8039AE78 00397DB8  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 8039AE7C 00397DBC  90 01 02 00 */	stw r0, 0x200(r1)
/* 8039AE80 00397DC0  C0 22 0E 64 */	lfs f1, lbl_8051F1C4@sda21(r2)
/* 8039AE84 00397DC4  C8 41 02 00 */	lfd f2, 0x200(r1)
/* 8039AE88 00397DC8  C0 02 0E D0 */	lfs f0, lbl_8051F230@sda21(r2)
/* 8039AE8C 00397DCC  EC 42 18 28 */	fsubs f2, f2, f3
/* 8039AE90 00397DD0  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039AE94 00397DD4  EC 22 08 24 */	fdivs f1, f2, f1
/* 8039AE98 00397DD8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8039AE9C 00397DDC  FC 00 00 1E */	fctiwz f0, f0
/* 8039AEA0 00397DE0  D8 01 02 08 */	stfd f0, 0x208(r1)
/* 8039AEA4 00397DE4  80 01 02 0C */	lwz r0, 0x20c(r1)
/* 8039AEA8 00397DE8  90 03 00 24 */	stw r0, 0x24(r3)
/* 8039AEAC 00397DEC  4B D2 E6 F5 */	bl rand
/* 8039AEB0 00397DF0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8039AEB4 00397DF4  3C 00 43 30 */	lis r0, 0x4330
/* 8039AEB8 00397DF8  90 61 02 14 */	stw r3, 0x214(r1)
/* 8039AEBC 00397DFC  38 A0 00 02 */	li r5, 2
/* 8039AEC0 00397E00  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 8039AEC4 00397E04  38 80 00 00 */	li r4, 0
/* 8039AEC8 00397E08  90 01 02 10 */	stw r0, 0x210(r1)
/* 8039AECC 00397E0C  38 00 00 0A */	li r0, 0xa
/* 8039AED0 00397E10  C0 22 0E 64 */	lfs f1, lbl_8051F1C4@sda21(r2)
/* 8039AED4 00397E14  C8 41 02 10 */	lfd f2, 0x210(r1)
/* 8039AED8 00397E18  C0 02 0E D0 */	lfs f0, lbl_8051F230@sda21(r2)
/* 8039AEDC 00397E1C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8039AEE0 00397E20  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039AEE4 00397E24  EC 22 08 24 */	fdivs f1, f2, f1
/* 8039AEE8 00397E28  EC 00 00 72 */	fmuls f0, f0, f1
/* 8039AEEC 00397E2C  FC 00 00 1E */	fctiwz f0, f0
/* 8039AEF0 00397E30  D8 01 02 18 */	stfd f0, 0x218(r1)
/* 8039AEF4 00397E34  80 C1 02 1C */	lwz r6, 0x21c(r1)
/* 8039AEF8 00397E38  90 C3 00 28 */	stw r6, 0x28(r3)
/* 8039AEFC 00397E3C  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039AF00 00397E40  90 A3 00 24 */	stw r5, 0x24(r3)
/* 8039AF04 00397E44  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039AF08 00397E48  90 83 00 28 */	stw r4, 0x28(r3)
/* 8039AF0C 00397E4C  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039AF10 00397E50  90 03 00 30 */	stw r0, 0x30(r3)
/* 8039AF14 00397E54  4B D2 E6 8D */	bl rand
/* 8039AF18 00397E58  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8039AF1C 00397E5C  3C 00 43 30 */	lis r0, 0x4330
/* 8039AF20 00397E60  90 61 02 24 */	stw r3, 0x224(r1)
/* 8039AF24 00397E64  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 8039AF28 00397E68  90 01 02 20 */	stw r0, 0x220(r1)
/* 8039AF2C 00397E6C  C0 22 0E 64 */	lfs f1, lbl_8051F1C4@sda21(r2)
/* 8039AF30 00397E70  C8 41 02 20 */	lfd f2, 0x220(r1)
/* 8039AF34 00397E74  C0 02 0E 28 */	lfs f0, lbl_8051F188@sda21(r2)
/* 8039AF38 00397E78  EC 42 18 28 */	fsubs f2, f2, f3
/* 8039AF3C 00397E7C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8039AF40 00397E80  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039AF44 00397E84  40 81 00 14 */	ble .L_8039AF58
/* 8039AF48 00397E88  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039AF4C 00397E8C  38 00 00 00 */	li r0, 0
/* 8039AF50 00397E90  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8039AF54 00397E94  48 00 00 10 */	b .L_8039AF64
.L_8039AF58:
/* 8039AF58 00397E98  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039AF5C 00397E9C  38 00 00 01 */	li r0, 1
/* 8039AF60 00397EA0  90 03 00 2C */	stw r0, 0x2c(r3)
.L_8039AF64:
/* 8039AF64 00397EA4  80 9F 01 F8 */	lwz r4, 0x1f8(r31)
/* 8039AF68 00397EA8  38 00 00 00 */	li r0, 0
/* 8039AF6C 00397EAC  7F E3 FB 78 */	mr r3, r31
/* 8039AF70 00397EB0  90 04 00 2C */	stw r0, 0x2c(r4)
/* 8039AF74 00397EB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039AF78 00397EB8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8039AF7C 00397EBC  7D 89 03 A6 */	mtctr r12
/* 8039AF80 00397EC0  4E 80 04 21 */	bctrl 
/* 8039AF84 00397EC4  80 9F 01 F8 */	lwz r4, 0x1f8(r31)
/* 8039AF88 00397EC8  48 0B 71 39 */	bl setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
/* 8039AF8C 00397ECC  48 00 00 18 */	b .L_8039AFA4
.L_8039AF90:
/* 8039AF90 00397ED0  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039AF94 00397ED4  38 BE 03 38 */	addi r5, r30, 0x338
/* 8039AF98 00397ED8  38 80 03 34 */	li r4, 0x334
/* 8039AF9C 00397EDC  4C C6 31 82 */	crclr 6
/* 8039AFA0 00397EE0  4B C8 F6 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039AFA4:
/* 8039AFA4 00397EE4  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039AFA8 00397EE8  28 00 00 00 */	cmplwi r0, 0
/* 8039AFAC 00397EEC  40 82 00 74 */	bne .L_8039B020
/* 8039AFB0 00397EF0  38 60 00 28 */	li r3, 0x28
/* 8039AFB4 00397EF4  4B C8 8E F1 */	bl __nw__FUl
/* 8039AFB8 00397EF8  28 03 00 00 */	cmplwi r3, 0
/* 8039AFBC 00397EFC  41 82 00 5C */	beq .L_8039B018
/* 8039AFC0 00397F00  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 8039AFC4 00397F04  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 8039AFC8 00397F08  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8039AFCC 00397F0C  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 8039AFD0 00397F10  90 03 00 00 */	stw r0, 0(r3)
/* 8039AFD4 00397F14  39 00 00 00 */	li r8, 0
/* 8039AFD8 00397F18  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 8039AFDC 00397F1C  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 8039AFE0 00397F20  91 03 00 04 */	stw r8, 4(r3)
/* 8039AFE4 00397F24  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 8039AFE8 00397F28  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 8039AFEC 00397F2C  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 8039AFF0 00397F30  90 03 00 00 */	stw r0, 0(r3)
/* 8039AFF4 00397F34  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 8039AFF8 00397F38  38 00 00 B4 */	li r0, 0xb4
/* 8039AFFC 00397F3C  91 03 00 08 */	stw r8, 8(r3)
/* 8039B000 00397F40  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8039B004 00397F44  90 A3 00 10 */	stw r5, 0x10(r3)
/* 8039B008 00397F48  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8039B00C 00397F4C  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8039B010 00397F50  98 03 00 20 */	stb r0, 0x20(r3)
/* 8039B014 00397F54  99 03 00 21 */	stb r8, 0x21(r3)
.L_8039B018:
/* 8039B018 00397F58  80 9F 01 F8 */	lwz r4, 0x1f8(r31)
/* 8039B01C 00397F5C  90 64 00 10 */	stw r3, 0x10(r4)
.L_8039B020:
/* 8039B020 00397F60  7F E3 FB 78 */	mr r3, r31
/* 8039B024 00397F64  48 0B 90 1D */	bl getGamePad__Q26Screen7ObjBaseCFv
/* 8039B028 00397F68  90 7F 00 80 */	stw r3, 0x80(r31)
/* 8039B02C 00397F6C  38 60 00 18 */	li r3, 0x18
/* 8039B030 00397F70  80 9F 01 F8 */	lwz r4, 0x1f8(r31)
/* 8039B034 00397F74  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8039B038 00397F78  90 1F 02 74 */	stw r0, 0x274(r31)
/* 8039B03C 00397F7C  80 9F 01 F8 */	lwz r4, 0x1f8(r31)
/* 8039B040 00397F80  80 04 00 20 */	lwz r0, 0x20(r4)
/* 8039B044 00397F84  90 1F 02 78 */	stw r0, 0x278(r31)
/* 8039B048 00397F88  C8 02 0E C8 */	lfd f0, lbl_8051F228@sda21(r2)
/* 8039B04C 00397F8C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8039B050 00397F90  4B C8 8E 55 */	bl __nw__FUl
/* 8039B054 00397F94  7C 60 1B 79 */	or. r0, r3, r3
/* 8039B058 00397F98  41 82 00 24 */	beq .L_8039B07C
/* 8039B05C 00397F9C  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 8039B060 00397FA0  3C A0 00 34 */	lis r5, 0x00343737@ha
/* 8039B064 00397FA4  38 81 00 20 */	addi r4, r1, 0x20
/* 8039B068 00397FA8  38 E0 00 01 */	li r7, 1
/* 8039B06C 00397FAC  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 8039B070 00397FB0  38 A5 37 37 */	addi r5, r5, 0x00343737@l
/* 8039B074 00397FB4  48 00 60 71 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 8039B078 00397FB8  7C 60 1B 78 */	mr r0, r3
.L_8039B07C:
/* 8039B07C 00397FBC  90 1F 01 FC */	stw r0, 0x1fc(r31)
/* 8039B080 00397FC0  38 60 00 18 */	li r3, 0x18
/* 8039B084 00397FC4  4B C8 8E 21 */	bl __nw__FUl
/* 8039B088 00397FC8  7C 60 1B 79 */	or. r0, r3, r3
/* 8039B08C 00397FCC  41 82 00 14 */	beq .L_8039B0A0
/* 8039B090 00397FD0  7F 84 E3 78 */	mr r4, r28
/* 8039B094 00397FD4  38 A0 00 02 */	li r5, 2
/* 8039B098 00397FD8  48 00 63 11 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8039B09C 00397FDC  7C 60 1B 78 */	mr r0, r3
.L_8039B0A0:
/* 8039B0A0 00397FE0  90 1F 00 C4 */	stw r0, 0xc4(r31)
/* 8039B0A4 00397FE4  38 9E 03 60 */	addi r4, r30, 0x360
/* 8039B0A8 00397FE8  3C A0 00 02 */	lis r5, 2
/* 8039B0AC 00397FEC  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 8039B0B0 00397FF0  81 83 00 00 */	lwz r12, 0(r3)
/* 8039B0B4 00397FF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8039B0B8 00397FF8  7D 89 03 A6 */	mtctr r12
/* 8039B0BC 00397FFC  4E 80 04 21 */	bctrl 
/* 8039B0C0 00398000  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 8039B0C4 00398004  38 9E 03 6C */	addi r4, r30, 0x36c
/* 8039B0C8 00398008  48 00 63 99 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039B0CC 0039800C  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 8039B0D0 00398010  38 9E 03 78 */	addi r4, r30, 0x378
/* 8039B0D4 00398014  48 00 63 8D */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039B0D8 00398018  38 60 00 18 */	li r3, 0x18
/* 8039B0DC 0039801C  4B C8 8D C9 */	bl __nw__FUl
/* 8039B0E0 00398020  7C 60 1B 79 */	or. r0, r3, r3
/* 8039B0E4 00398024  41 82 00 14 */	beq .L_8039B0F8
/* 8039B0E8 00398028  7F 84 E3 78 */	mr r4, r28
/* 8039B0EC 0039802C  38 A0 00 02 */	li r5, 2
/* 8039B0F0 00398030  48 00 62 B9 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8039B0F4 00398034  7C 60 1B 78 */	mr r0, r3
.L_8039B0F8:
/* 8039B0F8 00398038  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 8039B0FC 0039803C  38 9E 03 84 */	addi r4, r30, 0x384
/* 8039B100 00398040  3C A0 00 02 */	lis r5, 2
/* 8039B104 00398044  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8039B108 00398048  81 83 00 00 */	lwz r12, 0(r3)
/* 8039B10C 0039804C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8039B110 00398050  7D 89 03 A6 */	mtctr r12
/* 8039B114 00398054  4E 80 04 21 */	bctrl 
/* 8039B118 00398058  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8039B11C 0039805C  38 9E 03 94 */	addi r4, r30, 0x394
/* 8039B120 00398060  48 00 63 41 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039B124 00398064  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8039B128 00398068  38 9E 03 A4 */	addi r4, r30, 0x3a4
/* 8039B12C 0039806C  48 00 63 35 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039B130 00398070  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039B134 00398074  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8039B138 00398078  90 1F 02 48 */	stw r0, 0x248(r31)
/* 8039B13C 0039807C  80 1F 02 48 */	lwz r0, 0x248(r31)
/* 8039B140 00398080  54 03 10 3A */	slwi r3, r0, 2
/* 8039B144 00398084  4B C8 8E 69 */	bl __nwa__FUl
/* 8039B148 00398088  90 7F 03 28 */	stw r3, 0x328(r31)
/* 8039B14C 0039808C  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039B150 00398090  28 00 00 00 */	cmplwi r0, 0
/* 8039B154 00398094  41 82 00 54 */	beq .L_8039B1A8
/* 8039B158 00398098  4B D2 E4 49 */	bl rand
/* 8039B15C 0039809C  3C 80 43 30 */	lis r4, 0x4330
/* 8039B160 003980A0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8039B164 003980A4  90 01 02 24 */	stw r0, 0x224(r1)
/* 8039B168 003980A8  80 1F 02 48 */	lwz r0, 0x248(r31)
/* 8039B16C 003980AC  90 81 02 20 */	stw r4, 0x220(r1)
/* 8039B170 003980B0  C8 42 0E 38 */	lfd f2, lbl_8051F198@sda21(r2)
/* 8039B174 003980B4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8039B178 003980B8  C8 21 02 20 */	lfd f1, 0x220(r1)
/* 8039B17C 003980BC  C0 02 0E 64 */	lfs f0, lbl_8051F1C4@sda21(r2)
/* 8039B180 003980C0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8039B184 003980C4  90 01 02 1C */	stw r0, 0x21c(r1)
/* 8039B188 003980C8  90 81 02 18 */	stw r4, 0x218(r1)
/* 8039B18C 003980CC  EC 21 00 24 */	fdivs f1, f1, f0
/* 8039B190 003980D0  C8 01 02 18 */	lfd f0, 0x218(r1)
/* 8039B194 003980D4  EC 00 10 28 */	fsubs f0, f0, f2
/* 8039B198 003980D8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8039B19C 003980DC  FC 00 00 1E */	fctiwz f0, f0
/* 8039B1A0 003980E0  D8 01 02 10 */	stfd f0, 0x210(r1)
/* 8039B1A4 003980E4  83 61 02 14 */	lwz r27, 0x214(r1)
.L_8039B1A8:
/* 8039B1A8 003980E8  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039B1AC 003980EC  83 4D 88 2C */	lwz r26, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8039B1B0 003980F0  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8039B1B4 003980F4  4B C8 83 F1 */	bl becomeCurrentHeap__7JKRHeapFv
/* 8039B1B8 003980F8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8039B1BC 003980FC  38 9E 03 B4 */	addi r4, r30, 0x3b4
/* 8039B1C0 00398100  38 A0 00 00 */	li r5, 0
/* 8039B1C4 00398104  48 08 81 99 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8039B1C8 00398108  38 00 00 00 */	li r0, 0
/* 8039B1CC 0039810C  38 9E 03 C4 */	addi r4, r30, 0x3c4
/* 8039B1D0 00398110  90 1F 00 B4 */	stw r0, 0xb4(r31)
/* 8039B1D4 00398114  38 61 00 C8 */	addi r3, r1, 0xc8
/* 8039B1D8 00398118  4B F7 CD 75 */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 8039B1DC 0039811C  38 61 00 C8 */	addi r3, r1, 0xc8
/* 8039B1E0 00398120  38 80 00 01 */	li r4, 1
/* 8039B1E4 00398124  38 A0 00 00 */	li r5, 0
/* 8039B1E8 00398128  38 C0 00 01 */	li r6, 1
/* 8039B1EC 0039812C  4B C7 FF 45 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8039B1F0 00398130  90 7F 00 B4 */	stw r3, 0xb4(r31)
/* 8039B1F4 00398134  80 1F 00 B4 */	lwz r0, 0xb4(r31)
/* 8039B1F8 00398138  28 00 00 00 */	cmplwi r0, 0
/* 8039B1FC 0039813C  40 82 00 1C */	bne .L_8039B218
/* 8039B200 00398140  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B204 00398144  38 BE 03 DC */	addi r5, r30, 0x3dc
/* 8039B208 00398148  38 C1 00 C8 */	addi r6, r1, 0xc8
/* 8039B20C 0039814C  38 80 03 7D */	li r4, 0x37d
/* 8039B210 00398150  4C C6 31 82 */	crclr 6
/* 8039B214 00398154  4B C8 F4 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B218:
/* 8039B218 00398158  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8039B21C 0039815C  38 9E 03 B4 */	addi r4, r30, 0x3b4
/* 8039B220 00398160  48 08 81 45 */	bl heapStatusEnd__6SystemFPc
/* 8039B224 00398164  81 7E 00 F0 */	lwz r11, 0xf0(r30)
/* 8039B228 00398168  3A E1 00 A0 */	addi r23, r1, 0xa0
/* 8039B22C 0039816C  81 5E 00 F4 */	lwz r10, 0xf4(r30)
/* 8039B230 00398170  3A C0 00 00 */	li r22, 0
/* 8039B234 00398174  81 3E 00 F8 */	lwz r9, 0xf8(r30)
/* 8039B238 00398178  3B 00 00 00 */	li r24, 0
/* 8039B23C 0039817C  81 1E 00 FC */	lwz r8, 0xfc(r30)
/* 8039B240 00398180  80 FE 01 00 */	lwz r7, 0x100(r30)
/* 8039B244 00398184  80 DE 01 04 */	lwz r6, 0x104(r30)
/* 8039B248 00398188  80 BE 01 08 */	lwz r5, 0x108(r30)
/* 8039B24C 0039818C  80 9E 01 0C */	lwz r4, 0x10c(r30)
/* 8039B250 00398190  80 7E 01 10 */	lwz r3, 0x110(r30)
/* 8039B254 00398194  80 1E 01 14 */	lwz r0, 0x114(r30)
/* 8039B258 00398198  91 61 00 A0 */	stw r11, 0xa0(r1)
/* 8039B25C 0039819C  91 41 00 A4 */	stw r10, 0xa4(r1)
/* 8039B260 003981A0  91 21 00 A8 */	stw r9, 0xa8(r1)
/* 8039B264 003981A4  91 01 00 AC */	stw r8, 0xac(r1)
/* 8039B268 003981A8  90 E1 00 B0 */	stw r7, 0xb0(r1)
/* 8039B26C 003981AC  90 C1 00 B4 */	stw r6, 0xb4(r1)
/* 8039B270 003981B0  90 A1 00 B8 */	stw r5, 0xb8(r1)
/* 8039B274 003981B4  90 81 00 BC */	stw r4, 0xbc(r1)
/* 8039B278 003981B8  90 61 00 C0 */	stw r3, 0xc0(r1)
/* 8039B27C 003981BC  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8039B280 003981C0  48 00 00 60 */	b .L_8039B2E0
.L_8039B284:
/* 8039B284 003981C4  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 8039B288 003981C8  80 97 00 00 */	lwz r4, 0(r23)
/* 8039B28C 003981CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8039B290 003981D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039B294 003981D4  7D 89 03 A6 */	mtctr r12
/* 8039B298 003981D8  4E 80 04 21 */	bctrl 
/* 8039B29C 003981DC  80 9F 03 28 */	lwz r4, 0x328(r31)
/* 8039B2A0 003981E0  7C 64 C1 2E */	stwx r3, r4, r24
/* 8039B2A4 003981E4  80 7F 03 28 */	lwz r3, 0x328(r31)
/* 8039B2A8 003981E8  7C 03 C0 2E */	lwzx r0, r3, r24
/* 8039B2AC 003981EC  28 00 00 00 */	cmplwi r0, 0
/* 8039B2B0 003981F0  40 82 00 24 */	bne .L_8039B2D4
/* 8039B2B4 003981F4  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 8039B2B8 003981F8  38 9E 03 EC */	addi r4, r30, 0x3ec
/* 8039B2BC 003981FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8039B2C0 00398200  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039B2C4 00398204  7D 89 03 A6 */	mtctr r12
/* 8039B2C8 00398208  4E 80 04 21 */	bctrl 
/* 8039B2CC 0039820C  80 9F 03 28 */	lwz r4, 0x328(r31)
/* 8039B2D0 00398210  7C 64 C1 2E */	stwx r3, r4, r24
.L_8039B2D4:
/* 8039B2D4 00398214  3A F7 00 04 */	addi r23, r23, 4
/* 8039B2D8 00398218  3B 18 00 04 */	addi r24, r24, 4
/* 8039B2DC 0039821C  3A D6 00 01 */	addi r22, r22, 1
.L_8039B2E0:
/* 8039B2E0 00398220  80 1F 02 48 */	lwz r0, 0x248(r31)
/* 8039B2E4 00398224  7C 16 00 00 */	cmpw r22, r0
/* 8039B2E8 00398228  41 80 FF 9C */	blt .L_8039B284
/* 8039B2EC 0039822C  81 7E 01 7C */	lwz r11, 0x17c(r30)
/* 8039B2F0 00398230  3A E1 00 64 */	addi r23, r1, 0x64
/* 8039B2F4 00398234  81 5E 01 80 */	lwz r10, 0x180(r30)
/* 8039B2F8 00398238  3B 1D 00 10 */	addi r24, r29, 0x10
/* 8039B2FC 0039823C  81 3E 01 84 */	lwz r9, 0x184(r30)
/* 8039B300 00398240  3B 21 00 50 */	addi r25, r1, 0x50
/* 8039B304 00398244  81 1E 01 88 */	lwz r8, 0x188(r30)
/* 8039B308 00398248  3A DD 00 24 */	addi r22, r29, 0x24
/* 8039B30C 0039824C  80 FE 01 8C */	lwz r7, 0x18c(r30)
/* 8039B310 00398250  3A A0 00 00 */	li r21, 0
/* 8039B314 00398254  80 DE 01 E0 */	lwz r6, 0x1e0(r30)
/* 8039B318 00398258  80 BE 01 E4 */	lwz r5, 0x1e4(r30)
/* 8039B31C 0039825C  80 9E 01 E8 */	lwz r4, 0x1e8(r30)
/* 8039B320 00398260  80 7E 01 EC */	lwz r3, 0x1ec(r30)
/* 8039B324 00398264  80 1E 01 F0 */	lwz r0, 0x1f0(r30)
/* 8039B328 00398268  91 61 00 64 */	stw r11, 0x64(r1)
/* 8039B32C 0039826C  91 41 00 68 */	stw r10, 0x68(r1)
/* 8039B330 00398270  91 21 00 6C */	stw r9, 0x6c(r1)
/* 8039B334 00398274  91 01 00 70 */	stw r8, 0x70(r1)
/* 8039B338 00398278  90 E1 00 74 */	stw r7, 0x74(r1)
/* 8039B33C 0039827C  90 C1 00 50 */	stw r6, 0x50(r1)
/* 8039B340 00398280  90 A1 00 54 */	stw r5, 0x54(r1)
/* 8039B344 00398284  90 81 00 58 */	stw r4, 0x58(r1)
/* 8039B348 00398288  90 61 00 5C */	stw r3, 0x5c(r1)
/* 8039B34C 0039828C  90 01 00 60 */	stw r0, 0x60(r1)
.L_8039B350:
/* 8039B350 00398290  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 8039B354 00398294  80 97 00 00 */	lwz r4, 0(r23)
/* 8039B358 00398298  81 83 00 00 */	lwz r12, 0(r3)
/* 8039B35C 0039829C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039B360 003982A0  7D 89 03 A6 */	mtctr r12
/* 8039B364 003982A4  4E 80 04 21 */	bctrl 
/* 8039B368 003982A8  90 78 00 00 */	stw r3, 0(r24)
/* 8039B36C 003982AC  80 18 00 00 */	lwz r0, 0(r24)
/* 8039B370 003982B0  28 00 00 00 */	cmplwi r0, 0
/* 8039B374 003982B4  40 82 00 18 */	bne .L_8039B38C
/* 8039B378 003982B8  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B37C 003982BC  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B380 003982C0  38 80 03 9E */	li r4, 0x39e
/* 8039B384 003982C4  4C C6 31 82 */	crclr 6
/* 8039B388 003982C8  4B C8 F2 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B38C:
/* 8039B38C 003982CC  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 8039B390 003982D0  80 99 00 00 */	lwz r4, 0(r25)
/* 8039B394 003982D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8039B398 003982D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039B39C 003982DC  7D 89 03 A6 */	mtctr r12
/* 8039B3A0 003982E0  4E 80 04 21 */	bctrl 
/* 8039B3A4 003982E4  90 76 00 00 */	stw r3, 0(r22)
/* 8039B3A8 003982E8  80 16 00 00 */	lwz r0, 0(r22)
/* 8039B3AC 003982EC  28 00 00 00 */	cmplwi r0, 0
/* 8039B3B0 003982F0  40 82 00 18 */	bne .L_8039B3C8
/* 8039B3B4 003982F4  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B3B8 003982F8  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B3BC 003982FC  38 80 03 A2 */	li r4, 0x3a2
/* 8039B3C0 00398300  4C C6 31 82 */	crclr 6
/* 8039B3C4 00398304  4B C8 F2 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B3C8:
/* 8039B3C8 00398308  3A B5 00 01 */	addi r21, r21, 1
/* 8039B3CC 0039830C  3B 18 00 04 */	addi r24, r24, 4
/* 8039B3D0 00398310  2C 15 00 05 */	cmpwi r21, 5
/* 8039B3D4 00398314  3B 39 00 04 */	addi r25, r25, 4
/* 8039B3D8 00398318  3A D6 00 04 */	addi r22, r22, 4
/* 8039B3DC 0039831C  3A F7 00 04 */	addi r23, r23, 4
/* 8039B3E0 00398320  41 80 FF 70 */	blt .L_8039B350
/* 8039B3E4 00398324  38 60 00 18 */	li r3, 0x18
/* 8039B3E8 00398328  4B C8 8A BD */	bl __nw__FUl
/* 8039B3EC 0039832C  7C 60 1B 79 */	or. r0, r3, r3
/* 8039B3F0 00398330  41 82 00 14 */	beq .L_8039B404
/* 8039B3F4 00398334  80 9F 00 B4 */	lwz r4, 0xb4(r31)
/* 8039B3F8 00398338  38 A0 00 00 */	li r5, 0
/* 8039B3FC 0039833C  48 00 5F AD */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8039B400 00398340  7C 60 1B 78 */	mr r0, r3
.L_8039B404:
/* 8039B404 00398344  90 1F 00 CC */	stw r0, 0xcc(r31)
/* 8039B408 00398348  38 9E 04 00 */	addi r4, r30, 0x400
/* 8039B40C 0039834C  3C A0 00 02 */	lis r5, 2
/* 8039B410 00398350  80 7F 00 CC */	lwz r3, 0xcc(r31)
/* 8039B414 00398354  81 83 00 00 */	lwz r12, 0(r3)
/* 8039B418 00398358  81 8C 00 08 */	lwz r12, 8(r12)
/* 8039B41C 0039835C  7D 89 03 A6 */	mtctr r12
/* 8039B420 00398360  4E 80 04 21 */	bctrl 
/* 8039B424 00398364  38 00 00 0C */	li r0, 0xc
/* 8039B428 00398368  38 A1 01 9C */	addi r5, r1, 0x19c
/* 8039B42C 0039836C  38 9E 01 F4 */	addi r4, r30, 0x1f4
/* 8039B430 00398370  7C 09 03 A6 */	mtctr r0
.L_8039B434:
/* 8039B434 00398374  80 64 00 04 */	lwz r3, 4(r4)
/* 8039B438 00398378  84 04 00 08 */	lwzu r0, 8(r4)
/* 8039B43C 0039837C  90 65 00 04 */	stw r3, 4(r5)
/* 8039B440 00398380  94 05 00 08 */	stwu r0, 8(r5)
/* 8039B444 00398384  42 00 FF F0 */	bdnz .L_8039B434
/* 8039B448 00398388  3A A0 00 00 */	li r21, 0
/* 8039B44C 0039838C  3A C1 01 A0 */	addi r22, r1, 0x1a0
.L_8039B450:
/* 8039B450 00398390  38 00 00 0C */	li r0, 0xc
/* 8039B454 00398394  38 9D 00 38 */	addi r4, r29, 0x38
/* 8039B458 00398398  38 60 00 00 */	li r3, 0
/* 8039B45C 0039839C  7C 09 03 A6 */	mtctr r0
.L_8039B460:
/* 8039B460 003983A0  80 04 00 00 */	lwz r0, 0(r4)
/* 8039B464 003983A4  7C 15 00 00 */	cmpw r21, r0
/* 8039B468 003983A8  40 82 00 14 */	bne .L_8039B47C
/* 8039B46C 003983AC  54 60 20 36 */	slwi r0, r3, 4
/* 8039B470 003983B0  38 9D 00 38 */	addi r4, r29, 0x38
/* 8039B474 003983B4  7C 84 02 14 */	add r4, r4, r0
/* 8039B478 003983B8  48 00 00 14 */	b .L_8039B48C
.L_8039B47C:
/* 8039B47C 003983BC  38 84 00 10 */	addi r4, r4, 0x10
/* 8039B480 003983C0  38 63 00 01 */	addi r3, r3, 1
/* 8039B484 003983C4  42 00 FF DC */	bdnz .L_8039B460
/* 8039B488 003983C8  38 9D 00 38 */	addi r4, r29, 0x38
.L_8039B48C:
/* 8039B48C 003983CC  C8 04 00 00 */	lfd f0, 0(r4)
/* 8039B490 003983D0  80 7F 00 CC */	lwz r3, 0xcc(r31)
/* 8039B494 003983D4  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8039B498 003983D8  80 63 00 08 */	lwz r3, 8(r3)
/* 8039B49C 003983DC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8039B4A0 003983E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8039B4A4 003983E4  54 00 18 38 */	slwi r0, r0, 3
/* 8039B4A8 003983E8  C8 04 00 08 */	lfd f0, 8(r4)
/* 8039B4AC 003983EC  7C D6 02 14 */	add r6, r22, r0
/* 8039B4B0 003983F0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B4B4 003983F4  80 A6 00 00 */	lwz r5, 0(r6)
/* 8039B4B8 003983F8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8039B4BC 003983FC  80 C6 00 04 */	lwz r6, 4(r6)
/* 8039B4C0 00398400  7D 89 03 A6 */	mtctr r12
/* 8039B4C4 00398404  4E 80 04 21 */	bctrl 
/* 8039B4C8 00398408  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8039B4CC 0039840C  54 04 10 3A */	slwi r4, r0, 2
/* 8039B4D0 00398410  38 04 01 84 */	addi r0, r4, 0x184
/* 8039B4D4 00398414  7C 7F 01 2E */	stwx r3, r31, r0
/* 8039B4D8 00398418  7C 1F 00 2E */	lwzx r0, r31, r0
/* 8039B4DC 0039841C  28 00 00 00 */	cmplwi r0, 0
/* 8039B4E0 00398420  40 82 00 18 */	bne .L_8039B4F8
/* 8039B4E4 00398424  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B4E8 00398428  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B4EC 0039842C  38 80 03 B5 */	li r4, 0x3b5
/* 8039B4F0 00398430  4C C6 31 82 */	crclr 6
/* 8039B4F4 00398434  4B C8 F1 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B4F8:
/* 8039B4F8 00398438  3A B5 00 01 */	addi r21, r21, 1
/* 8039B4FC 0039843C  2C 15 00 0C */	cmpwi r21, 0xc
/* 8039B500 00398440  41 80 FF 50 */	blt .L_8039B450
/* 8039B504 00398444  38 60 00 10 */	li r3, 0x10
/* 8039B508 00398448  4B C8 89 9D */	bl __nw__FUl
/* 8039B50C 0039844C  28 03 00 00 */	cmplwi r3, 0
/* 8039B510 00398450  41 82 00 24 */	beq .L_8039B534
/* 8039B514 00398454  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 8039B518 00398458  C0 02 0E 78 */	lfs f0, lbl_8051F1D8@sda21(r2)
/* 8039B51C 0039845C  D0 23 00 00 */	stfs f1, 0(r3)
/* 8039B520 00398460  C0 22 0E D4 */	lfs f1, lbl_8051F234@sda21(r2)
/* 8039B524 00398464  D0 03 00 04 */	stfs f0, 4(r3)
/* 8039B528 00398468  C0 02 0E D8 */	lfs f0, lbl_8051F238@sda21(r2)
/* 8039B52C 0039846C  D0 23 00 08 */	stfs f1, 8(r3)
/* 8039B530 00398470  D0 03 00 0C */	stfs f0, 0xc(r3)
.L_8039B534:
/* 8039B534 00398474  90 7F 02 0C */	stw r3, 0x20c(r31)
/* 8039B538 00398478  38 60 00 48 */	li r3, 0x48
/* 8039B53C 0039847C  4B C8 89 69 */	bl __nw__FUl
/* 8039B540 00398480  7C 75 1B 79 */	or. r21, r3, r3
/* 8039B544 00398484  41 82 00 20 */	beq .L_8039B564
/* 8039B548 00398488  C0 22 0E DC */	lfs f1, lbl_8051F23C@sda21(r2)
/* 8039B54C 0039848C  38 9E 04 14 */	addi r4, r30, 0x414
/* 8039B550 00398490  C0 42 0E E0 */	lfs f2, lbl_8051F240@sda21(r2)
/* 8039B554 00398494  48 00 60 7D */	bl __ct__Q28Morimura8TIndPaneFPCcff
/* 8039B558 00398498  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TVsSelectIndPane@ha
/* 8039B55C 0039849C  38 03 56 D8 */	addi r0, r3, __vt__Q28Morimura16TVsSelectIndPane@l
/* 8039B560 003984A0  90 15 00 00 */	stw r0, 0(r21)
.L_8039B564:
/* 8039B564 003984A4  92 BF 00 D8 */	stw r21, 0xd8(r31)
/* 8039B568 003984A8  38 9E 04 20 */	addi r4, r30, 0x420
/* 8039B56C 003984AC  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8039B570 003984B0  48 00 61 85 */	bl createIndTexture__Q28Morimura8TIndPaneFPCc
/* 8039B574 003984B4  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8039B578 003984B8  38 00 00 01 */	li r0, 1
/* 8039B57C 003984BC  38 80 00 05 */	li r4, 5
/* 8039B580 003984C0  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8039B584 003984C4  98 03 00 30 */	stb r0, 0x30(r3)
/* 8039B588 003984C8  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8039B58C 003984CC  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8039B590 003984D0  98 03 00 31 */	stb r0, 0x31(r3)
/* 8039B594 003984D4  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8039B598 003984D8  48 00 62 01 */	bl createCaptureTexture__Q28Morimura8TIndPaneF9_GXTexFmt
/* 8039B59C 003984DC  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8039B5A0 003984E0  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8039B5A4 003984E4  82 A3 00 20 */	lwz r21, 0x20(r3)
/* 8039B5A8 003984E8  28 15 00 00 */	cmplwi r21, 0
/* 8039B5AC 003984EC  40 82 00 18 */	bne .L_8039B5C4
/* 8039B5B0 003984F0  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B5B4 003984F4  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B5B8 003984F8  38 80 03 C2 */	li r4, 0x3c2
/* 8039B5BC 003984FC  4C C6 31 82 */	crclr 6
/* 8039B5C0 00398500  4B C8 F0 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B5C4:
/* 8039B5C4 00398504  38 00 00 02 */	li r0, 2
/* 8039B5C8 00398508  98 15 00 01 */	stb r0, 1(r21)
/* 8039B5CC 0039850C  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8039B5D0 00398510  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8039B5D4 00398514  82 A3 00 20 */	lwz r21, 0x20(r3)
/* 8039B5D8 00398518  28 15 00 00 */	cmplwi r21, 0
/* 8039B5DC 0039851C  40 82 00 18 */	bne .L_8039B5F4
/* 8039B5E0 00398520  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B5E4 00398524  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B5E8 00398528  38 80 03 C6 */	li r4, 0x3c6
/* 8039B5EC 0039852C  4C C6 31 82 */	crclr 6
/* 8039B5F0 00398530  4B C8 F0 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B5F4:
/* 8039B5F4 00398534  38 00 00 02 */	li r0, 2
/* 8039B5F8 00398538  98 15 00 01 */	stb r0, 1(r21)
/* 8039B5FC 0039853C  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8039B600 00398540  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8039B604 00398544  82 A3 00 20 */	lwz r21, 0x20(r3)
/* 8039B608 00398548  28 15 00 00 */	cmplwi r21, 0
/* 8039B60C 0039854C  40 82 00 18 */	bne .L_8039B624
/* 8039B610 00398550  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B614 00398554  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B618 00398558  38 80 03 CA */	li r4, 0x3ca
/* 8039B61C 0039855C  4C C6 31 82 */	crclr 6
/* 8039B620 00398560  4B C8 F0 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B624:
/* 8039B624 00398564  38 00 00 02 */	li r0, 2
/* 8039B628 00398568  38 60 01 A8 */	li r3, 0x1a8
/* 8039B62C 0039856C  98 15 00 01 */	stb r0, 1(r21)
/* 8039B630 00398570  4B C8 88 75 */	bl __nw__FUl
/* 8039B634 00398574  7C 60 1B 79 */	or. r0, r3, r3
/* 8039B638 00398578  41 82 00 1C */	beq .L_8039B654
/* 8039B63C 0039857C  80 9F 00 D8 */	lwz r4, 0xd8(r31)
/* 8039B640 00398580  3C A0 00 02 */	lis r5, 2
/* 8039B644 00398584  80 84 00 18 */	lwz r4, 0x18(r4)
/* 8039B648 00398588  80 84 00 20 */	lwz r4, 0x20(r4)
/* 8039B64C 0039858C  4B CB 94 ED */	bl __ct__12J2DPictureExFPC7ResTIMGUl
/* 8039B650 00398590  7C 60 1B 78 */	mr r0, r3
.L_8039B654:
/* 8039B654 00398594  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 8039B658 00398598  38 60 00 1C */	li r3, 0x1c
/* 8039B65C 0039859C  4B C8 88 49 */	bl __nw__FUl
/* 8039B660 003985A0  7C 75 1B 79 */	or. r21, r3, r3
/* 8039B664 003985A4  41 82 00 24 */	beq .L_8039B688
/* 8039B668 003985A8  7F 84 E3 78 */	mr r4, r28
/* 8039B66C 003985AC  38 A0 00 02 */	li r5, 2
/* 8039B670 003985B0  48 00 5D 39 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8039B674 003985B4  3C 60 80 4E */	lis r3, __vt__Q28Morimura15TVsSelectScreen@ha
/* 8039B678 003985B8  38 00 00 00 */	li r0, 0
/* 8039B67C 003985BC  38 63 56 58 */	addi r3, r3, __vt__Q28Morimura15TVsSelectScreen@l
/* 8039B680 003985C0  90 75 00 00 */	stw r3, 0(r21)
/* 8039B684 003985C4  90 15 00 18 */	stw r0, 0x18(r21)
.L_8039B688:
/* 8039B688 003985C8  92 BF 00 7C */	stw r21, 0x7c(r31)
/* 8039B68C 003985CC  38 9E 04 34 */	addi r4, r30, 0x434
/* 8039B690 003985D0  3C A0 01 02 */	lis r5, 0x102
/* 8039B694 003985D4  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8039B698 003985D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039B69C 003985DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8039B6A0 003985E0  7D 89 03 A6 */	mtctr r12
/* 8039B6A4 003985E4  4E 80 04 21 */	bctrl 
/* 8039B6A8 003985E8  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8039B6AC 003985EC  38 9E 04 48 */	addi r4, r30, 0x448
/* 8039B6B0 003985F0  48 00 5D B1 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039B6B4 003985F4  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8039B6B8 003985F8  38 9E 04 5C */	addi r4, r30, 0x45c
/* 8039B6BC 003985FC  48 00 5D A5 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039B6C0 00398600  80 BF 00 7C */	lwz r5, 0x7c(r31)
/* 8039B6C4 00398604  3C 80 6F 64 */	lis r4, 0x6F647930@ha
/* 8039B6C8 00398608  3C 60 50 6F */	lis r3, 0x506F7262@ha
/* 8039B6CC 0039860C  83 A5 00 08 */	lwz r29, 8(r5)
/* 8039B6D0 00398610  38 A3 72 62 */	addi r5, r3, 0x506F7262@l
/* 8039B6D4 00398614  38 C4 79 30 */	addi r6, r4, 0x6F647930@l
/* 8039B6D8 00398618  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B6DC 0039861C  7F A3 EB 78 */	mr r3, r29
/* 8039B6E0 00398620  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B6E4 00398624  7D 89 03 A6 */	mtctr r12
/* 8039B6E8 00398628  4E 80 04 21 */	bctrl 
/* 8039B6EC 0039862C  90 7F 01 54 */	stw r3, 0x154(r31)
/* 8039B6F0 00398630  7F A3 EB 78 */	mr r3, r29
/* 8039B6F4 00398634  3C A0 6F 64 */	lis r5, 0x6F647931@ha
/* 8039B6F8 00398638  3C 80 50 6F */	lis r4, 0x506F7262@ha
/* 8039B6FC 0039863C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B700 00398640  38 C5 79 31 */	addi r6, r5, 0x6F647931@l
/* 8039B704 00398644  38 A4 72 62 */	addi r5, r4, 0x506F7262@l
/* 8039B708 00398648  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B70C 0039864C  7D 89 03 A6 */	mtctr r12
/* 8039B710 00398650  4E 80 04 21 */	bctrl 
/* 8039B714 00398654  90 7F 01 58 */	stw r3, 0x158(r31)
/* 8039B718 00398658  7F A3 EB 78 */	mr r3, r29
/* 8039B71C 0039865C  3C A0 6F 64 */	lis r5, 0x6F647932@ha
/* 8039B720 00398660  3C 80 50 6F */	lis r4, 0x506F7262@ha
/* 8039B724 00398664  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B728 00398668  38 C5 79 32 */	addi r6, r5, 0x6F647932@l
/* 8039B72C 0039866C  38 A4 72 62 */	addi r5, r4, 0x506F7262@l
/* 8039B730 00398670  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B734 00398674  7D 89 03 A6 */	mtctr r12
/* 8039B738 00398678  4E 80 04 21 */	bctrl 
/* 8039B73C 0039867C  90 7F 01 5C */	stw r3, 0x15c(r31)
/* 8039B740 00398680  7F A3 EB 78 */	mr r3, r29
/* 8039B744 00398684  3C 80 68 5F */	lis r4, 0x685F6F72@ha
/* 8039B748 00398688  38 A0 00 50 */	li r5, 0x50
/* 8039B74C 0039868C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B750 00398690  38 C4 6F 72 */	addi r6, r4, 0x685F6F72@l
/* 8039B754 00398694  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B758 00398698  7D 89 03 A6 */	mtctr r12
/* 8039B75C 0039869C  4E 80 04 21 */	bctrl 
/* 8039B760 003986A0  90 7F 01 60 */	stw r3, 0x160(r31)
/* 8039B764 003986A4  7F A3 EB 78 */	mr r3, r29
/* 8039B768 003986A8  3C 80 62 6F */	lis r4, 0x626F7230@ha
/* 8039B76C 003986AC  38 A0 00 50 */	li r5, 0x50
/* 8039B770 003986B0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B774 003986B4  38 C4 72 30 */	addi r6, r4, 0x626F7230@l
/* 8039B778 003986B8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B77C 003986BC  7D 89 03 A6 */	mtctr r12
/* 8039B780 003986C0  4E 80 04 21 */	bctrl 
/* 8039B784 003986C4  90 7F 01 64 */	stw r3, 0x164(r31)
/* 8039B788 003986C8  7F A3 EB 78 */	mr r3, r29
/* 8039B78C 003986CC  3C 80 62 6F */	lis r4, 0x626F7231@ha
/* 8039B790 003986D0  38 A0 00 50 */	li r5, 0x50
/* 8039B794 003986D4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B798 003986D8  38 C4 72 31 */	addi r6, r4, 0x626F7231@l
/* 8039B79C 003986DC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B7A0 003986E0  7D 89 03 A6 */	mtctr r12
/* 8039B7A4 003986E4  4E 80 04 21 */	bctrl 
/* 8039B7A8 003986E8  90 7F 01 68 */	stw r3, 0x168(r31)
/* 8039B7AC 003986EC  7F A3 EB 78 */	mr r3, r29
/* 8039B7B0 003986F0  3C A0 6F 64 */	lis r5, 0x6F647930@ha
/* 8039B7B4 003986F4  3C 80 50 6C */	lis r4, 0x506C6F62@ha
/* 8039B7B8 003986F8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B7BC 003986FC  38 C5 79 30 */	addi r6, r5, 0x6F647930@l
/* 8039B7C0 00398700  38 A4 6F 62 */	addi r5, r4, 0x506C6F62@l
/* 8039B7C4 00398704  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B7C8 00398708  7D 89 03 A6 */	mtctr r12
/* 8039B7CC 0039870C  4E 80 04 21 */	bctrl 
/* 8039B7D0 00398710  90 7F 01 6C */	stw r3, 0x16c(r31)
/* 8039B7D4 00398714  7F A3 EB 78 */	mr r3, r29
/* 8039B7D8 00398718  3C A0 6F 64 */	lis r5, 0x6F647931@ha
/* 8039B7DC 0039871C  3C 80 50 6C */	lis r4, 0x506C6F62@ha
/* 8039B7E0 00398720  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B7E4 00398724  38 C5 79 31 */	addi r6, r5, 0x6F647931@l
/* 8039B7E8 00398728  38 A4 6F 62 */	addi r5, r4, 0x506C6F62@l
/* 8039B7EC 0039872C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B7F0 00398730  7D 89 03 A6 */	mtctr r12
/* 8039B7F4 00398734  4E 80 04 21 */	bctrl 
/* 8039B7F8 00398738  90 7F 01 70 */	stw r3, 0x170(r31)
/* 8039B7FC 0039873C  7F A3 EB 78 */	mr r3, r29
/* 8039B800 00398740  3C A0 6F 64 */	lis r5, 0x6F647932@ha
/* 8039B804 00398744  3C 80 50 6C */	lis r4, 0x506C6F62@ha
/* 8039B808 00398748  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B80C 0039874C  38 C5 79 32 */	addi r6, r5, 0x6F647932@l
/* 8039B810 00398750  38 A4 6F 62 */	addi r5, r4, 0x506C6F62@l
/* 8039B814 00398754  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B818 00398758  7D 89 03 A6 */	mtctr r12
/* 8039B81C 0039875C  4E 80 04 21 */	bctrl 
/* 8039B820 00398760  90 7F 01 74 */	stw r3, 0x174(r31)
/* 8039B824 00398764  7F A3 EB 78 */	mr r3, r29
/* 8039B828 00398768  3C 80 68 5F */	lis r4, 0x685F6C6F@ha
/* 8039B82C 0039876C  38 A0 00 50 */	li r5, 0x50
/* 8039B830 00398770  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B834 00398774  38 C4 6C 6F */	addi r6, r4, 0x685F6C6F@l
/* 8039B838 00398778  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B83C 0039877C  7D 89 03 A6 */	mtctr r12
/* 8039B840 00398780  4E 80 04 21 */	bctrl 
/* 8039B844 00398784  90 7F 01 78 */	stw r3, 0x178(r31)
/* 8039B848 00398788  7F A3 EB 78 */	mr r3, r29
/* 8039B84C 0039878C  3C 80 62 6C */	lis r4, 0x626C6F30@ha
/* 8039B850 00398790  38 A0 00 50 */	li r5, 0x50
/* 8039B854 00398794  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B858 00398798  38 C4 6F 30 */	addi r6, r4, 0x626C6F30@l
/* 8039B85C 0039879C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B860 003987A0  7D 89 03 A6 */	mtctr r12
/* 8039B864 003987A4  4E 80 04 21 */	bctrl 
/* 8039B868 003987A8  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 8039B86C 003987AC  7F A3 EB 78 */	mr r3, r29
/* 8039B870 003987B0  3C 80 62 6C */	lis r4, 0x626C6F31@ha
/* 8039B874 003987B4  38 A0 00 50 */	li r5, 0x50
/* 8039B878 003987B8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B87C 003987BC  38 C4 6F 31 */	addi r6, r4, 0x626C6F31@l
/* 8039B880 003987C0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B884 003987C4  7D 89 03 A6 */	mtctr r12
/* 8039B888 003987C8  4E 80 04 21 */	bctrl 
/* 8039B88C 003987CC  90 7F 01 80 */	stw r3, 0x180(r31)
/* 8039B890 003987D0  7F F5 FB 78 */	mr r21, r31
/* 8039B894 003987D4  3A C0 00 00 */	li r22, 0
.L_8039B898:
/* 8039B898 003987D8  80 15 01 54 */	lwz r0, 0x154(r21)
/* 8039B89C 003987DC  28 00 00 00 */	cmplwi r0, 0
/* 8039B8A0 003987E0  40 82 00 18 */	bne .L_8039B8B8
/* 8039B8A4 003987E4  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B8A8 003987E8  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B8AC 003987EC  38 80 03 EC */	li r4, 0x3ec
/* 8039B8B0 003987F0  4C C6 31 82 */	crclr 6
/* 8039B8B4 003987F4  4B C8 ED 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B8B8:
/* 8039B8B8 003987F8  80 75 01 54 */	lwz r3, 0x154(r21)
/* 8039B8BC 003987FC  38 80 00 04 */	li r4, 4
/* 8039B8C0 00398800  4B C9 D3 FD */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039B8C4 00398804  80 15 01 6C */	lwz r0, 0x16c(r21)
/* 8039B8C8 00398808  28 00 00 00 */	cmplwi r0, 0
/* 8039B8CC 0039880C  40 82 00 18 */	bne .L_8039B8E4
/* 8039B8D0 00398810  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B8D4 00398814  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B8D8 00398818  38 80 03 EE */	li r4, 0x3ee
/* 8039B8DC 0039881C  4C C6 31 82 */	crclr 6
/* 8039B8E0 00398820  4B C8 ED 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B8E4:
/* 8039B8E4 00398824  80 75 01 6C */	lwz r3, 0x16c(r21)
/* 8039B8E8 00398828  38 80 00 04 */	li r4, 4
/* 8039B8EC 0039882C  4B C9 D3 D1 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039B8F0 00398830  3A D6 00 01 */	addi r22, r22, 1
/* 8039B8F4 00398834  3A B5 00 04 */	addi r21, r21, 4
/* 8039B8F8 00398838  2C 16 00 06 */	cmpwi r22, 6
/* 8039B8FC 0039883C  41 80 FF 9C */	blt .L_8039B898
/* 8039B900 00398840  3C C0 61 33 */	lis r6, 0x6133646C@ha
/* 8039B904 00398844  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 8039B908 00398848  7F A4 EB 78 */	mr r4, r29
/* 8039B90C 0039884C  38 A0 6F 74 */	li r5, 0x6f74
/* 8039B910 00398850  38 C6 64 6C */	addi r6, r6, 0x6133646C@l
/* 8039B914 00398854  4B F9 19 3D */	bl setCallBack_3DStickSmall__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8039B918 00398858  90 7F 02 04 */	stw r3, 0x204(r31)
/* 8039B91C 0039885C  7F A3 EB 78 */	mr r3, r29
/* 8039B920 00398860  3C 80 61 33 */	lis r4, 0x6133646C@ha
/* 8039B924 00398864  38 A0 6F 74 */	li r5, 0x6f74
/* 8039B928 00398868  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B92C 0039886C  38 C4 64 6C */	addi r6, r4, 0x6133646C@l
/* 8039B930 00398870  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B934 00398874  7D 89 03 A6 */	mtctr r12
/* 8039B938 00398878  4E 80 04 21 */	bctrl 
/* 8039B93C 0039887C  90 7F 00 DC */	stw r3, 0xdc(r31)
/* 8039B940 00398880  80 1F 00 DC */	lwz r0, 0xdc(r31)
/* 8039B944 00398884  28 00 00 00 */	cmplwi r0, 0
/* 8039B948 00398888  40 82 00 18 */	bne .L_8039B960
/* 8039B94C 0039888C  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B950 00398890  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B954 00398894  38 80 03 FA */	li r4, 0x3fa
/* 8039B958 00398898  4C C6 31 82 */	crclr 6
/* 8039B95C 0039889C  4B C8 EC E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B960:
/* 8039B960 003988A0  80 1F 02 04 */	lwz r0, 0x204(r31)
/* 8039B964 003988A4  28 00 00 00 */	cmplwi r0, 0
/* 8039B968 003988A8  40 82 00 18 */	bne .L_8039B980
/* 8039B96C 003988AC  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B970 003988B0  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B974 003988B4  38 80 03 FB */	li r4, 0x3fb
/* 8039B978 003988B8  4C C6 31 82 */	crclr 6
/* 8039B97C 003988BC  4B C8 EC C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B980:
/* 8039B980 003988C0  80 7F 02 04 */	lwz r3, 0x204(r31)
/* 8039B984 003988C4  C0 22 0E 8C */	lfs f1, lbl_8051F1EC@sda21(r2)
/* 8039B988 003988C8  80 63 00 34 */	lwz r3, 0x34(r3)
/* 8039B98C 003988CC  4B F6 9D 1D */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 8039B990 003988D0  80 7F 02 04 */	lwz r3, 0x204(r31)
/* 8039B994 003988D4  80 63 00 34 */	lwz r3, 0x34(r3)
/* 8039B998 003988D8  4B F6 9F 21 */	bl start__Q32og6Screen9AnimGroupFv
/* 8039B99C 003988DC  38 60 00 08 */	li r3, 8
/* 8039B9A0 003988E0  4B C8 85 05 */	bl __nw__FUl
/* 8039B9A4 003988E4  7C 60 1B 79 */	or. r0, r3, r3
/* 8039B9A8 003988E8  41 82 00 10 */	beq .L_8039B9B8
/* 8039B9AC 003988EC  80 9F 02 04 */	lwz r4, 0x204(r31)
/* 8039B9B0 003988F0  4B F9 19 BD */	bl __ct__Q32og6Screen12StickAnimMgrFPQ32og6Screen16CallBack_Picture
/* 8039B9B4 003988F4  7C 60 1B 78 */	mr r0, r3
.L_8039B9B8:
/* 8039B9B8 003988F8  90 1F 02 08 */	stw r0, 0x208(r31)
/* 8039B9BC 003988FC  80 1F 02 08 */	lwz r0, 0x208(r31)
/* 8039B9C0 00398900  28 00 00 00 */	cmplwi r0, 0
/* 8039B9C4 00398904  40 82 00 18 */	bne .L_8039B9DC
/* 8039B9C8 00398908  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039B9CC 0039890C  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039B9D0 00398910  38 80 04 00 */	li r4, 0x400
/* 8039B9D4 00398914  4C C6 31 82 */	crclr 6
/* 8039B9D8 00398918  4B C8 EC 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039B9DC:
/* 8039B9DC 0039891C  7F A3 EB 78 */	mr r3, r29
/* 8039B9E0 00398920  3C 80 72 69 */	lis r4, 0x72696D61@ha
/* 8039B9E4 00398924  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039B9E8 00398928  38 C4 6D 61 */	addi r6, r4, 0x72696D61@l
/* 8039B9EC 0039892C  38 A0 4E 6F */	li r5, 0x4e6f
/* 8039B9F0 00398930  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039B9F4 00398934  7D 89 03 A6 */	mtctr r12
/* 8039B9F8 00398938  4E 80 04 21 */	bctrl 
/* 8039B9FC 0039893C  90 7F 01 00 */	stw r3, 0x100(r31)
/* 8039BA00 00398940  80 1F 01 00 */	lwz r0, 0x100(r31)
/* 8039BA04 00398944  28 00 00 00 */	cmplwi r0, 0
/* 8039BA08 00398948  40 82 00 18 */	bne .L_8039BA20
/* 8039BA0C 0039894C  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039BA10 00398950  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039BA14 00398954  38 80 04 03 */	li r4, 0x403
/* 8039BA18 00398958  4C C6 31 82 */	crclr 6
/* 8039BA1C 0039895C  4B C8 EC 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039BA20:
/* 8039BA20 00398960  80 DF 01 00 */	lwz r6, 0x100(r31)
/* 8039BA24 00398964  3C 80 6C 75 */	lis r4, 0x6C756965@ha
/* 8039BA28 00398968  7F A3 EB 78 */	mr r3, r29
/* 8039BA2C 0039896C  38 A0 00 4E */	li r5, 0x4e
/* 8039BA30 00398970  C0 06 00 D4 */	lfs f0, 0xd4(r6)
/* 8039BA34 00398974  38 C4 69 65 */	addi r6, r4, 0x6C756965@l
/* 8039BA38 00398978  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 8039BA3C 0039897C  80 9F 01 00 */	lwz r4, 0x100(r31)
/* 8039BA40 00398980  C0 04 00 D8 */	lfs f0, 0xd8(r4)
/* 8039BA44 00398984  D0 1F 02 FC */	stfs f0, 0x2fc(r31)
/* 8039BA48 00398988  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039BA4C 0039898C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BA50 00398990  7D 89 03 A6 */	mtctr r12
/* 8039BA54 00398994  4E 80 04 21 */	bctrl 
/* 8039BA58 00398998  90 7F 01 04 */	stw r3, 0x104(r31)
/* 8039BA5C 0039899C  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 8039BA60 003989A0  28 00 00 00 */	cmplwi r0, 0
/* 8039BA64 003989A4  40 82 00 18 */	bne .L_8039BA7C
/* 8039BA68 003989A8  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039BA6C 003989AC  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039BA70 003989B0  38 80 04 08 */	li r4, 0x408
/* 8039BA74 003989B4  4C C6 31 82 */	crclr 6
/* 8039BA78 003989B8  4B C8 EB C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039BA7C:
/* 8039BA7C 003989BC  80 DF 01 04 */	lwz r6, 0x104(r31)
/* 8039BA80 003989C0  3C A0 69 67 */	lis r5, 0x69676832@ha
/* 8039BA84 003989C4  3C 80 50 6C */	lis r4, 0x506C6F6C@ha
/* 8039BA88 003989C8  7F A3 EB 78 */	mr r3, r29
/* 8039BA8C 003989CC  C0 06 00 D4 */	lfs f0, 0xd4(r6)
/* 8039BA90 003989D0  38 C5 68 32 */	addi r6, r5, 0x69676832@l
/* 8039BA94 003989D4  38 A4 6F 6C */	addi r5, r4, 0x506C6F6C@l
/* 8039BA98 003989D8  D0 1F 03 00 */	stfs f0, 0x300(r31)
/* 8039BA9C 003989DC  80 9F 01 04 */	lwz r4, 0x104(r31)
/* 8039BAA0 003989E0  C0 04 00 D8 */	lfs f0, 0xd8(r4)
/* 8039BAA4 003989E4  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 8039BAA8 003989E8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039BAAC 003989EC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BAB0 003989F0  7D 89 03 A6 */	mtctr r12
/* 8039BAB4 003989F4  4E 80 04 21 */	bctrl 
/* 8039BAB8 003989F8  7C 76 1B 79 */	or. r22, r3, r3
/* 8039BABC 003989FC  40 82 00 18 */	bne .L_8039BAD4
/* 8039BAC0 00398A00  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039BAC4 00398A04  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039BAC8 00398A08  38 80 04 0F */	li r4, 0x40f
/* 8039BACC 00398A0C  4C C6 31 82 */	crclr 6
/* 8039BAD0 00398A10  4B C8 EB 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039BAD4:
/* 8039BAD4 00398A14  C8 5E 02 58 */	lfd f2, 0x258(r30)
/* 8039BAD8 00398A18  7F F7 FB 78 */	mr r23, r31
/* 8039BADC 00398A1C  C8 3E 02 60 */	lfd f1, 0x260(r30)
/* 8039BAE0 00398A20  3A A1 00 38 */	addi r21, r1, 0x38
/* 8039BAE4 00398A24  C8 1E 02 68 */	lfd f0, 0x268(r30)
/* 8039BAE8 00398A28  3B 00 00 00 */	li r24, 0
/* 8039BAEC 00398A2C  D8 41 00 38 */	stfd f2, 0x38(r1)
/* 8039BAF0 00398A30  D8 21 00 40 */	stfd f1, 0x40(r1)
/* 8039BAF4 00398A34  D8 01 00 48 */	stfd f0, 0x48(r1)
.L_8039BAF8:
/* 8039BAF8 00398A38  7F A3 EB 78 */	mr r3, r29
/* 8039BAFC 00398A3C  80 B5 00 00 */	lwz r5, 0(r21)
/* 8039BB00 00398A40  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039BB04 00398A44  80 D5 00 04 */	lwz r6, 4(r21)
/* 8039BB08 00398A48  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BB0C 00398A4C  7D 89 03 A6 */	mtctr r12
/* 8039BB10 00398A50  4E 80 04 21 */	bctrl 
/* 8039BB14 00398A54  90 77 00 F4 */	stw r3, 0xf4(r23)
/* 8039BB18 00398A58  80 17 00 F4 */	lwz r0, 0xf4(r23)
/* 8039BB1C 00398A5C  28 00 00 00 */	cmplwi r0, 0
/* 8039BB20 00398A60  40 82 00 1C */	bne .L_8039BB3C
/* 8039BB24 00398A64  7F 06 C3 78 */	mr r6, r24
/* 8039BB28 00398A68  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039BB2C 00398A6C  38 BE 04 74 */	addi r5, r30, 0x474
/* 8039BB30 00398A70  38 80 04 16 */	li r4, 0x416
/* 8039BB34 00398A74  4C C6 31 82 */	crclr 6
/* 8039BB38 00398A78  4B C8 EB 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039BB3C:
/* 8039BB3C 00398A7C  80 77 00 F4 */	lwz r3, 0xf4(r23)
/* 8039BB40 00398A80  38 80 00 00 */	li r4, 0
/* 8039BB44 00398A84  38 A0 00 00 */	li r5, 0
/* 8039BB48 00398A88  4B C9 D2 65 */	bl setInfluencedAlpha__7J2DPaneFbb
/* 8039BB4C 00398A8C  3B 18 00 01 */	addi r24, r24, 1
/* 8039BB50 00398A90  3A F7 00 04 */	addi r23, r23, 4
/* 8039BB54 00398A94  2C 18 00 03 */	cmpwi r24, 3
/* 8039BB58 00398A98  3A B5 00 08 */	addi r21, r21, 8
/* 8039BB5C 00398A9C  41 80 FF 9C */	blt .L_8039BAF8
/* 8039BB60 00398AA0  38 60 00 40 */	li r3, 0x40
/* 8039BB64 00398AA4  4B C8 83 41 */	bl __nw__FUl
/* 8039BB68 00398AA8  7C 75 1B 79 */	or. r21, r3, r3
/* 8039BB6C 00398AAC  41 82 00 40 */	beq .L_8039BBAC
/* 8039BB70 00398AB0  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 8039BB74 00398AB4  3C A0 6E 79 */	lis r5, 0x6E796F6E@ha
/* 8039BB78 00398AB8  3C 80 00 4E */	lis r4, 0x004E796F@ha
/* 8039BB7C 00398ABC  80 63 00 08 */	lwz r3, 8(r3)
/* 8039BB80 00398AC0  38 C5 6F 6E */	addi r6, r5, 0x6E796F6E@l
/* 8039BB84 00398AC4  38 A4 79 6F */	addi r5, r4, 0x004E796F@l
/* 8039BB88 00398AC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039BB8C 00398ACC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BB90 00398AD0  7D 89 03 A6 */	mtctr r12
/* 8039BB94 00398AD4  4E 80 04 21 */	bctrl 
/* 8039BB98 00398AD8  92 D5 00 04 */	stw r22, 4(r21)
/* 8039BB9C 00398ADC  38 80 00 04 */	li r4, 4
/* 8039BBA0 00398AE0  90 75 00 08 */	stw r3, 8(r21)
/* 8039BBA4 00398AE4  80 75 00 08 */	lwz r3, 8(r21)
/* 8039BBA8 00398AE8  4B C9 D1 15 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
.L_8039BBAC:
/* 8039BBAC 00398AEC  92 BF 01 E8 */	stw r21, 0x1e8(r31)
/* 8039BBB0 00398AF0  C0 22 0E 60 */	lfs f1, lbl_8051F1C0@sda21(r2)
/* 8039BBB4 00398AF4  83 3F 01 E8 */	lwz r25, 0x1e8(r31)
/* 8039BBB8 00398AF8  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039BBBC 00398AFC  D0 39 00 0C */	stfs f1, 0xc(r25)
/* 8039BBC0 00398B00  D0 19 00 10 */	stfs f0, 0x10(r25)
/* 8039BBC4 00398B04  4B D2 D9 DD */	bl rand
/* 8039BBC8 00398B08  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8039BBCC 00398B0C  3C 80 43 30 */	lis r4, 0x4330
/* 8039BBD0 00398B10  90 01 02 24 */	stw r0, 0x224(r1)
/* 8039BBD4 00398B14  38 60 00 01 */	li r3, 1
/* 8039BBD8 00398B18  C0 0D 86 34 */	lfs f0, mTestVal__Q28Morimura9TVsSelect@sda21(r13)
/* 8039BBDC 00398B1C  38 00 00 00 */	li r0, 0
/* 8039BBE0 00398B20  90 81 02 20 */	stw r4, 0x220(r1)
/* 8039BBE4 00398B24  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 8039BBE8 00398B28  FC 00 00 1E */	fctiwz f0, f0
/* 8039BBEC 00398B2C  C8 21 02 20 */	lfd f1, 0x220(r1)
/* 8039BBF0 00398B30  C0 42 0E 64 */	lfs f2, lbl_8051F1C4@sda21(r2)
/* 8039BBF4 00398B34  EC 61 18 28 */	fsubs f3, f1, f3
/* 8039BBF8 00398B38  D8 01 02 18 */	stfd f0, 0x218(r1)
/* 8039BBFC 00398B3C  C0 22 0E 30 */	lfs f1, lbl_8051F190@sda21(r2)
/* 8039BC00 00398B40  80 A1 02 1C */	lwz r5, 0x21c(r1)
/* 8039BC04 00398B44  EC 43 10 24 */	fdivs f2, f3, f2
/* 8039BC08 00398B48  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039BC0C 00398B4C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8039BC10 00398B50  FC 20 08 1E */	fctiwz f1, f1
/* 8039BC14 00398B54  D8 21 02 10 */	stfd f1, 0x210(r1)
/* 8039BC18 00398B58  80 81 02 14 */	lwz r4, 0x214(r1)
/* 8039BC1C 00398B5C  7C 85 22 14 */	add r4, r5, r4
/* 8039BC20 00398B60  7C 84 00 D0 */	neg r4, r4
/* 8039BC24 00398B64  90 99 00 38 */	stw r4, 0x38(r25)
/* 8039BC28 00398B68  D0 19 00 30 */	stfs f0, 0x30(r25)
/* 8039BC2C 00398B6C  98 79 00 3C */	stb r3, 0x3c(r25)
/* 8039BC30 00398B70  80 79 00 08 */	lwz r3, 8(r25)
/* 8039BC34 00398B74  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039BC38 00398B78  D0 19 00 2C */	stfs f0, 0x2c(r25)
/* 8039BC3C 00398B7C  4B D2 D9 65 */	bl rand
/* 8039BC40 00398B80  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8039BC44 00398B84  3C 00 43 30 */	lis r0, 0x4330
/* 8039BC48 00398B88  90 61 02 0C */	stw r3, 0x20c(r1)
/* 8039BC4C 00398B8C  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 8039BC50 00398B90  90 01 02 08 */	stw r0, 0x208(r1)
/* 8039BC54 00398B94  C0 22 0E 64 */	lfs f1, lbl_8051F1C4@sda21(r2)
/* 8039BC58 00398B98  C8 41 02 08 */	lfd f2, 0x208(r1)
/* 8039BC5C 00398B9C  C0 02 0E 28 */	lfs f0, lbl_8051F188@sda21(r2)
/* 8039BC60 00398BA0  EC 42 18 28 */	fsubs f2, f2, f3
/* 8039BC64 00398BA4  EC 22 08 24 */	fdivs f1, f2, f1
/* 8039BC68 00398BA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039BC6C 00398BAC  40 81 00 0C */	ble .L_8039BC78
/* 8039BC70 00398BB0  C0 02 0E 48 */	lfs f0, lbl_8051F1A8@sda21(r2)
/* 8039BC74 00398BB4  D0 19 00 2C */	stfs f0, 0x2c(r25)
.L_8039BC78:
/* 8039BC78 00398BB8  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039BC7C 00398BBC  3C 80 6C 69 */	lis r4, 0x6C696768@ha
/* 8039BC80 00398BC0  3C 60 00 50 */	lis r3, 0x00506C6F@ha
/* 8039BC84 00398BC4  D0 19 00 1C */	stfs f0, 0x1c(r25)
/* 8039BC88 00398BC8  38 C4 67 68 */	addi r6, r4, 0x6C696768@l
/* 8039BC8C 00398BCC  38 A3 6C 6F */	addi r5, r3, 0x00506C6F@l
/* 8039BC90 00398BD0  D0 19 00 20 */	stfs f0, 0x20(r25)
/* 8039BC94 00398BD4  D0 19 00 24 */	stfs f0, 0x24(r25)
/* 8039BC98 00398BD8  D0 19 00 28 */	stfs f0, 0x28(r25)
/* 8039BC9C 00398BDC  C0 0D 86 20 */	lfs f0, mAngRate__Q28Morimura9TVsSelect@sda21(r13)
/* 8039BCA0 00398BE0  D0 19 00 34 */	stfs f0, 0x34(r25)
/* 8039BCA4 00398BE4  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8039BCA8 00398BE8  80 63 00 08 */	lwz r3, 8(r3)
/* 8039BCAC 00398BEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8039BCB0 00398BF0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BCB4 00398BF4  7D 89 03 A6 */	mtctr r12
/* 8039BCB8 00398BF8  4E 80 04 21 */	bctrl 
/* 8039BCBC 00398BFC  7C 76 1B 79 */	or. r22, r3, r3
/* 8039BCC0 00398C00  40 82 00 18 */	bne .L_8039BCD8
/* 8039BCC4 00398C04  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039BCC8 00398C08  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039BCCC 00398C0C  38 80 04 20 */	li r4, 0x420
/* 8039BCD0 00398C10  4C C6 31 82 */	crclr 6
/* 8039BCD4 00398C14  4B C8 E9 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039BCD8:
/* 8039BCD8 00398C18  38 60 00 40 */	li r3, 0x40
/* 8039BCDC 00398C1C  4B C8 81 C9 */	bl __nw__FUl
/* 8039BCE0 00398C20  7C 75 1B 79 */	or. r21, r3, r3
/* 8039BCE4 00398C24  41 82 00 40 */	beq .L_8039BD24
/* 8039BCE8 00398C28  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8039BCEC 00398C2C  3C A0 6E 79 */	lis r5, 0x6E796F6E@ha
/* 8039BCF0 00398C30  3C 80 00 4E */	lis r4, 0x004E796F@ha
/* 8039BCF4 00398C34  80 63 00 08 */	lwz r3, 8(r3)
/* 8039BCF8 00398C38  38 C5 6F 6E */	addi r6, r5, 0x6E796F6E@l
/* 8039BCFC 00398C3C  38 A4 79 6F */	addi r5, r4, 0x004E796F@l
/* 8039BD00 00398C40  81 83 00 00 */	lwz r12, 0(r3)
/* 8039BD04 00398C44  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BD08 00398C48  7D 89 03 A6 */	mtctr r12
/* 8039BD0C 00398C4C  4E 80 04 21 */	bctrl 
/* 8039BD10 00398C50  92 D5 00 04 */	stw r22, 4(r21)
/* 8039BD14 00398C54  38 80 00 04 */	li r4, 4
/* 8039BD18 00398C58  90 75 00 08 */	stw r3, 8(r21)
/* 8039BD1C 00398C5C  80 75 00 08 */	lwz r3, 8(r21)
/* 8039BD20 00398C60  4B C9 CF 9D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
.L_8039BD24:
/* 8039BD24 00398C64  92 BF 01 EC */	stw r21, 0x1ec(r31)
/* 8039BD28 00398C68  C0 22 0E 60 */	lfs f1, lbl_8051F1C0@sda21(r2)
/* 8039BD2C 00398C6C  83 3F 01 EC */	lwz r25, 0x1ec(r31)
/* 8039BD30 00398C70  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039BD34 00398C74  D0 39 00 0C */	stfs f1, 0xc(r25)
/* 8039BD38 00398C78  D0 19 00 10 */	stfs f0, 0x10(r25)
/* 8039BD3C 00398C7C  4B D2 D8 65 */	bl rand
/* 8039BD40 00398C80  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8039BD44 00398C84  3C 80 43 30 */	lis r4, 0x4330
/* 8039BD48 00398C88  90 01 02 24 */	stw r0, 0x224(r1)
/* 8039BD4C 00398C8C  38 60 00 01 */	li r3, 1
/* 8039BD50 00398C90  C0 0D 86 34 */	lfs f0, mTestVal__Q28Morimura9TVsSelect@sda21(r13)
/* 8039BD54 00398C94  38 00 00 00 */	li r0, 0
/* 8039BD58 00398C98  90 81 02 20 */	stw r4, 0x220(r1)
/* 8039BD5C 00398C9C  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 8039BD60 00398CA0  FC 00 00 1E */	fctiwz f0, f0
/* 8039BD64 00398CA4  C8 21 02 20 */	lfd f1, 0x220(r1)
/* 8039BD68 00398CA8  C0 42 0E 64 */	lfs f2, lbl_8051F1C4@sda21(r2)
/* 8039BD6C 00398CAC  EC 61 18 28 */	fsubs f3, f1, f3
/* 8039BD70 00398CB0  D8 01 02 18 */	stfd f0, 0x218(r1)
/* 8039BD74 00398CB4  C0 22 0E 30 */	lfs f1, lbl_8051F190@sda21(r2)
/* 8039BD78 00398CB8  80 A1 02 1C */	lwz r5, 0x21c(r1)
/* 8039BD7C 00398CBC  EC 43 10 24 */	fdivs f2, f3, f2
/* 8039BD80 00398CC0  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039BD84 00398CC4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8039BD88 00398CC8  FC 20 08 1E */	fctiwz f1, f1
/* 8039BD8C 00398CCC  D8 21 02 10 */	stfd f1, 0x210(r1)
/* 8039BD90 00398CD0  80 81 02 14 */	lwz r4, 0x214(r1)
/* 8039BD94 00398CD4  7C 85 22 14 */	add r4, r5, r4
/* 8039BD98 00398CD8  7C 84 00 D0 */	neg r4, r4
/* 8039BD9C 00398CDC  90 99 00 38 */	stw r4, 0x38(r25)
/* 8039BDA0 00398CE0  D0 19 00 30 */	stfs f0, 0x30(r25)
/* 8039BDA4 00398CE4  98 79 00 3C */	stb r3, 0x3c(r25)
/* 8039BDA8 00398CE8  80 79 00 08 */	lwz r3, 8(r25)
/* 8039BDAC 00398CEC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039BDB0 00398CF0  D0 19 00 2C */	stfs f0, 0x2c(r25)
/* 8039BDB4 00398CF4  4B D2 D7 ED */	bl rand
/* 8039BDB8 00398CF8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8039BDBC 00398CFC  3C 00 43 30 */	lis r0, 0x4330
/* 8039BDC0 00398D00  90 61 02 0C */	stw r3, 0x20c(r1)
/* 8039BDC4 00398D04  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 8039BDC8 00398D08  90 01 02 08 */	stw r0, 0x208(r1)
/* 8039BDCC 00398D0C  C0 22 0E 64 */	lfs f1, lbl_8051F1C4@sda21(r2)
/* 8039BDD0 00398D10  C8 41 02 08 */	lfd f2, 0x208(r1)
/* 8039BDD4 00398D14  C0 02 0E 28 */	lfs f0, lbl_8051F188@sda21(r2)
/* 8039BDD8 00398D18  EC 42 18 28 */	fsubs f2, f2, f3
/* 8039BDDC 00398D1C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8039BDE0 00398D20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039BDE4 00398D24  40 81 00 0C */	ble .L_8039BDF0
/* 8039BDE8 00398D28  C0 02 0E 48 */	lfs f0, lbl_8051F1A8@sda21(r2)
/* 8039BDEC 00398D2C  D0 19 00 2C */	stfs f0, 0x2c(r25)
.L_8039BDF0:
/* 8039BDF0 00398D30  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039BDF4 00398D34  38 60 00 BC */	li r3, 0xbc
/* 8039BDF8 00398D38  D0 19 00 1C */	stfs f0, 0x1c(r25)
/* 8039BDFC 00398D3C  D0 19 00 20 */	stfs f0, 0x20(r25)
/* 8039BE00 00398D40  D0 19 00 24 */	stfs f0, 0x24(r25)
/* 8039BE04 00398D44  D0 19 00 28 */	stfs f0, 0x28(r25)
/* 8039BE08 00398D48  C0 0D 86 20 */	lfs f0, mAngRate__Q28Morimura9TVsSelect@sda21(r13)
/* 8039BE0C 00398D4C  D0 19 00 34 */	stfs f0, 0x34(r25)
/* 8039BE10 00398D50  4B C8 80 95 */	bl __nw__FUl
/* 8039BE14 00398D54  7C 79 1B 79 */	or. r25, r3, r3
/* 8039BE18 00398D58  41 82 01 1C */	beq .L_8039BF34
/* 8039BE1C 00398D5C  7F A3 EB 78 */	mr r3, r29
/* 8039BE20 00398D60  3C A0 66 5F */	lis r5, 0x665F3030@ha
/* 8039BE24 00398D64  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039BE28 00398D68  3C 80 50 72 */	lis r4, 0x5072705F@ha
/* 8039BE2C 00398D6C  38 C5 30 30 */	addi r6, r5, 0x665F3030@l
/* 8039BE30 00398D70  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BE34 00398D74  38 A4 70 5F */	addi r5, r4, 0x5072705F@l
/* 8039BE38 00398D78  7D 89 03 A6 */	mtctr r12
/* 8039BE3C 00398D7C  4E 80 04 21 */	bctrl 
/* 8039BE40 00398D80  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039BE44 00398D84  3C A0 72 5F */	lis r5, 0x725F3030@ha
/* 8039BE48 00398D88  7C 77 1B 78 */	mr r23, r3
/* 8039BE4C 00398D8C  3C 80 50 72 */	lis r4, 0x5072705F@ha
/* 8039BE50 00398D90  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BE54 00398D94  38 C5 30 30 */	addi r6, r5, 0x725F3030@l
/* 8039BE58 00398D98  7F A3 EB 78 */	mr r3, r29
/* 8039BE5C 00398D9C  38 A4 70 5F */	addi r5, r4, 0x5072705F@l
/* 8039BE60 00398DA0  7D 89 03 A6 */	mtctr r12
/* 8039BE64 00398DA4  4E 80 04 21 */	bctrl 
/* 8039BE68 00398DA8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039BE6C 00398DAC  3C A0 6C 5F */	lis r5, 0x6C5F3030@ha
/* 8039BE70 00398DB0  7C 78 1B 78 */	mr r24, r3
/* 8039BE74 00398DB4  3C 80 50 72 */	lis r4, 0x5072705F@ha
/* 8039BE78 00398DB8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BE7C 00398DBC  38 C5 30 30 */	addi r6, r5, 0x6C5F3030@l
/* 8039BE80 00398DC0  7F A3 EB 78 */	mr r3, r29
/* 8039BE84 00398DC4  38 A4 70 5F */	addi r5, r4, 0x5072705F@l
/* 8039BE88 00398DC8  7D 89 03 A6 */	mtctr r12
/* 8039BE8C 00398DCC  4E 80 04 21 */	bctrl 
/* 8039BE90 00398DD0  3C 80 80 3A */	lis r4, __ct__Q38Morimura7TVsPiki7posInfoFv@ha
/* 8039BE94 00398DD4  7C 75 1B 78 */	mr r21, r3
/* 8039BE98 00398DD8  38 84 9B 80 */	addi r4, r4, __ct__Q38Morimura7TVsPiki7posInfoFv@l
/* 8039BE9C 00398DDC  38 79 00 0C */	addi r3, r25, 0xc
/* 8039BEA0 00398DE0  38 A0 00 00 */	li r5, 0
/* 8039BEA4 00398DE4  38 C0 00 10 */	li r6, 0x10
/* 8039BEA8 00398DE8  38 E0 00 0A */	li r7, 0xa
/* 8039BEAC 00398DEC  4B D2 59 91 */	bl __construct_array
/* 8039BEB0 00398DF0  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8039BEB4 00398DF4  38 79 00 AC */	addi r3, r25, 0xac
/* 8039BEB8 00398DF8  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8039BEBC 00398DFC  38 A0 00 00 */	li r5, 0
/* 8039BEC0 00398E00  38 C0 00 08 */	li r6, 8
/* 8039BEC4 00398E04  38 E0 00 02 */	li r7, 2
/* 8039BEC8 00398E08  4B D2 59 75 */	bl __construct_array
/* 8039BECC 00398E0C  92 B9 00 00 */	stw r21, 0(r25)
/* 8039BED0 00398E10  7E A3 AB 78 */	mr r3, r21
/* 8039BED4 00398E14  38 80 00 02 */	li r4, 2
/* 8039BED8 00398E18  4B C9 CD E5 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039BEDC 00398E1C  93 19 00 04 */	stw r24, 4(r25)
/* 8039BEE0 00398E20  7F 03 C3 78 */	mr r3, r24
/* 8039BEE4 00398E24  38 80 00 00 */	li r4, 0
/* 8039BEE8 00398E28  4B C9 CD D5 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039BEEC 00398E2C  92 F9 00 08 */	stw r23, 8(r25)
/* 8039BEF0 00398E30  7E E3 BB 78 */	mr r3, r23
/* 8039BEF4 00398E34  38 80 00 04 */	li r4, 4
/* 8039BEF8 00398E38  4B C9 CD C5 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039BEFC 00398E3C  3A A0 00 00 */	li r21, 0
/* 8039BF00 00398E40  7F 36 CB 78 */	mr r22, r25
.L_8039BF04:
/* 8039BF04 00398E44  80 16 00 00 */	lwz r0, 0(r22)
/* 8039BF08 00398E48  28 00 00 00 */	cmplwi r0, 0
/* 8039BF0C 00398E4C  40 82 00 18 */	bne .L_8039BF24
/* 8039BF10 00398E50  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039BF14 00398E54  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039BF18 00398E58  38 80 00 B0 */	li r4, 0xb0
/* 8039BF1C 00398E5C  4C C6 31 82 */	crclr 6
/* 8039BF20 00398E60  4B C8 E7 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039BF24:
/* 8039BF24 00398E64  3A B5 00 01 */	addi r21, r21, 1
/* 8039BF28 00398E68  3A D6 00 04 */	addi r22, r22, 4
/* 8039BF2C 00398E6C  2C 15 00 03 */	cmpwi r21, 3
/* 8039BF30 00398E70  41 80 FF D4 */	blt .L_8039BF04
.L_8039BF34:
/* 8039BF34 00398E74  38 00 00 0A */	li r0, 0xa
/* 8039BF38 00398E78  93 3F 01 F0 */	stw r25, 0x1f0(r31)
/* 8039BF3C 00398E7C  38 A1 01 4C */	addi r5, r1, 0x14c
/* 8039BF40 00398E80  38 9E 02 6C */	addi r4, r30, 0x26c
/* 8039BF44 00398E84  7C 09 03 A6 */	mtctr r0
.L_8039BF48:
/* 8039BF48 00398E88  80 64 00 04 */	lwz r3, 4(r4)
/* 8039BF4C 00398E8C  84 04 00 08 */	lwzu r0, 8(r4)
/* 8039BF50 00398E90  90 65 00 04 */	stw r3, 4(r5)
/* 8039BF54 00398E94  94 05 00 08 */	stwu r0, 8(r5)
/* 8039BF58 00398E98  42 00 FF F0 */	bdnz .L_8039BF48
/* 8039BF5C 00398E9C  3A C1 01 50 */	addi r22, r1, 0x150
/* 8039BF60 00398EA0  3A E0 00 00 */	li r23, 0
/* 8039BF64 00398EA4  3A A0 00 00 */	li r21, 0
.L_8039BF68:
/* 8039BF68 00398EA8  7F A3 EB 78 */	mr r3, r29
/* 8039BF6C 00398EAC  80 B6 00 00 */	lwz r5, 0(r22)
/* 8039BF70 00398EB0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039BF74 00398EB4  80 D6 00 04 */	lwz r6, 4(r22)
/* 8039BF78 00398EB8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BF7C 00398EBC  7D 89 03 A6 */	mtctr r12
/* 8039BF80 00398EC0  4E 80 04 21 */	bctrl 
/* 8039BF84 00398EC4  28 03 00 00 */	cmplwi r3, 0
/* 8039BF88 00398EC8  41 82 00 08 */	beq .L_8039BF90
/* 8039BF8C 00398ECC  9A A3 00 B0 */	stb r21, 0xb0(r3)
.L_8039BF90:
/* 8039BF90 00398ED0  3A F7 00 01 */	addi r23, r23, 1
/* 8039BF94 00398ED4  3A D6 00 08 */	addi r22, r22, 8
/* 8039BF98 00398ED8  2C 17 00 0A */	cmpwi r23, 0xa
/* 8039BF9C 00398EDC  41 80 FF CC */	blt .L_8039BF68
/* 8039BFA0 00398EE0  38 60 00 BC */	li r3, 0xbc
/* 8039BFA4 00398EE4  4B C8 7F 01 */	bl __nw__FUl
/* 8039BFA8 00398EE8  7C 77 1B 79 */	or. r23, r3, r3
/* 8039BFAC 00398EEC  41 82 01 1C */	beq .L_8039C0C8
/* 8039BFB0 00398EF0  7F A3 EB 78 */	mr r3, r29
/* 8039BFB4 00398EF4  3C A0 66 5F */	lis r5, 0x665F3030@ha
/* 8039BFB8 00398EF8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039BFBC 00398EFC  3C 80 50 62 */	lis r4, 0x5062705F@ha
/* 8039BFC0 00398F00  38 C5 30 30 */	addi r6, r5, 0x665F3030@l
/* 8039BFC4 00398F04  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BFC8 00398F08  38 A4 70 5F */	addi r5, r4, 0x5062705F@l
/* 8039BFCC 00398F0C  7D 89 03 A6 */	mtctr r12
/* 8039BFD0 00398F10  4E 80 04 21 */	bctrl 
/* 8039BFD4 00398F14  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039BFD8 00398F18  3C A0 72 5F */	lis r5, 0x725F3030@ha
/* 8039BFDC 00398F1C  7C 79 1B 78 */	mr r25, r3
/* 8039BFE0 00398F20  3C 80 50 62 */	lis r4, 0x5062705F@ha
/* 8039BFE4 00398F24  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039BFE8 00398F28  38 C5 30 30 */	addi r6, r5, 0x725F3030@l
/* 8039BFEC 00398F2C  7F A3 EB 78 */	mr r3, r29
/* 8039BFF0 00398F30  38 A4 70 5F */	addi r5, r4, 0x5062705F@l
/* 8039BFF4 00398F34  7D 89 03 A6 */	mtctr r12
/* 8039BFF8 00398F38  4E 80 04 21 */	bctrl 
/* 8039BFFC 00398F3C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039C000 00398F40  3C A0 6C 5F */	lis r5, 0x6C5F3030@ha
/* 8039C004 00398F44  7C 78 1B 78 */	mr r24, r3
/* 8039C008 00398F48  3C 80 50 62 */	lis r4, 0x5062705F@ha
/* 8039C00C 00398F4C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C010 00398F50  38 C5 30 30 */	addi r6, r5, 0x6C5F3030@l
/* 8039C014 00398F54  7F A3 EB 78 */	mr r3, r29
/* 8039C018 00398F58  38 A4 70 5F */	addi r5, r4, 0x5062705F@l
/* 8039C01C 00398F5C  7D 89 03 A6 */	mtctr r12
/* 8039C020 00398F60  4E 80 04 21 */	bctrl 
/* 8039C024 00398F64  3C 80 80 3A */	lis r4, __ct__Q38Morimura7TVsPiki7posInfoFv@ha
/* 8039C028 00398F68  7C 75 1B 78 */	mr r21, r3
/* 8039C02C 00398F6C  38 84 9B 80 */	addi r4, r4, __ct__Q38Morimura7TVsPiki7posInfoFv@l
/* 8039C030 00398F70  38 77 00 0C */	addi r3, r23, 0xc
/* 8039C034 00398F74  38 A0 00 00 */	li r5, 0
/* 8039C038 00398F78  38 C0 00 10 */	li r6, 0x10
/* 8039C03C 00398F7C  38 E0 00 0A */	li r7, 0xa
/* 8039C040 00398F80  4B D2 57 FD */	bl __construct_array
/* 8039C044 00398F84  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 8039C048 00398F88  38 77 00 AC */	addi r3, r23, 0xac
/* 8039C04C 00398F8C  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 8039C050 00398F90  38 A0 00 00 */	li r5, 0
/* 8039C054 00398F94  38 C0 00 08 */	li r6, 8
/* 8039C058 00398F98  38 E0 00 02 */	li r7, 2
/* 8039C05C 00398F9C  4B D2 57 E1 */	bl __construct_array
/* 8039C060 00398FA0  92 B7 00 00 */	stw r21, 0(r23)
/* 8039C064 00398FA4  7E A3 AB 78 */	mr r3, r21
/* 8039C068 00398FA8  38 80 00 02 */	li r4, 2
/* 8039C06C 00398FAC  4B C9 CC 51 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039C070 00398FB0  93 17 00 04 */	stw r24, 4(r23)
/* 8039C074 00398FB4  7F 03 C3 78 */	mr r3, r24
/* 8039C078 00398FB8  38 80 00 00 */	li r4, 0
/* 8039C07C 00398FBC  4B C9 CC 41 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039C080 00398FC0  93 37 00 08 */	stw r25, 8(r23)
/* 8039C084 00398FC4  7F 23 CB 78 */	mr r3, r25
/* 8039C088 00398FC8  38 80 00 04 */	li r4, 4
/* 8039C08C 00398FCC  4B C9 CC 31 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039C090 00398FD0  3A A0 00 00 */	li r21, 0
/* 8039C094 00398FD4  7E F6 BB 78 */	mr r22, r23
.L_8039C098:
/* 8039C098 00398FD8  80 16 00 00 */	lwz r0, 0(r22)
/* 8039C09C 00398FDC  28 00 00 00 */	cmplwi r0, 0
/* 8039C0A0 00398FE0  40 82 00 18 */	bne .L_8039C0B8
/* 8039C0A4 00398FE4  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C0A8 00398FE8  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C0AC 00398FEC  38 80 00 B0 */	li r4, 0xb0
/* 8039C0B0 00398FF0  4C C6 31 82 */	crclr 6
/* 8039C0B4 00398FF4  4B C8 E5 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C0B8:
/* 8039C0B8 00398FF8  3A B5 00 01 */	addi r21, r21, 1
/* 8039C0BC 00398FFC  3A D6 00 04 */	addi r22, r22, 4
/* 8039C0C0 00399000  2C 15 00 03 */	cmpwi r21, 3
/* 8039C0C4 00399004  41 80 FF D4 */	blt .L_8039C098
.L_8039C0C8:
/* 8039C0C8 00399008  38 00 00 0A */	li r0, 0xa
/* 8039C0CC 0039900C  92 FF 01 F4 */	stw r23, 0x1f4(r31)
/* 8039C0D0 00399010  38 A1 00 FC */	addi r5, r1, 0xfc
/* 8039C0D4 00399014  38 9E 02 BC */	addi r4, r30, 0x2bc
/* 8039C0D8 00399018  7C 09 03 A6 */	mtctr r0
.L_8039C0DC:
/* 8039C0DC 0039901C  80 64 00 04 */	lwz r3, 4(r4)
/* 8039C0E0 00399020  84 04 00 08 */	lwzu r0, 8(r4)
/* 8039C0E4 00399024  90 65 00 04 */	stw r3, 4(r5)
/* 8039C0E8 00399028  94 05 00 08 */	stwu r0, 8(r5)
/* 8039C0EC 0039902C  42 00 FF F0 */	bdnz .L_8039C0DC
/* 8039C0F0 00399030  3A C1 01 00 */	addi r22, r1, 0x100
/* 8039C0F4 00399034  3A E0 00 00 */	li r23, 0
/* 8039C0F8 00399038  3A A0 00 00 */	li r21, 0
.L_8039C0FC:
/* 8039C0FC 0039903C  7F A3 EB 78 */	mr r3, r29
/* 8039C100 00399040  80 B6 00 00 */	lwz r5, 0(r22)
/* 8039C104 00399044  81 9D 00 00 */	lwz r12, 0(r29)
/* 8039C108 00399048  80 D6 00 04 */	lwz r6, 4(r22)
/* 8039C10C 0039904C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C110 00399050  7D 89 03 A6 */	mtctr r12
/* 8039C114 00399054  4E 80 04 21 */	bctrl 
/* 8039C118 00399058  28 03 00 00 */	cmplwi r3, 0
/* 8039C11C 0039905C  41 82 00 08 */	beq .L_8039C124
/* 8039C120 00399060  9A A3 00 B0 */	stb r21, 0xb0(r3)
.L_8039C124:
/* 8039C124 00399064  3A F7 00 01 */	addi r23, r23, 1
/* 8039C128 00399068  3A D6 00 08 */	addi r22, r22, 8
/* 8039C12C 0039906C  2C 17 00 0A */	cmpwi r23, 0xa
/* 8039C130 00399070  41 80 FF CC */	blt .L_8039C0FC
/* 8039C134 00399074  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 8039C138 00399078  7F E9 FB 78 */	mr r9, r31
/* 8039C13C 0039907C  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 8039C140 00399080  39 40 00 00 */	li r10, 0
/* 8039C144 00399084  C0 02 0E 30 */	lfs f0, lbl_8051F190@sda21(r2)
/* 8039C148 00399088  3C A0 43 30 */	lis r5, 0x4330
.L_8039C14C:
/* 8039C14C 0039908C  38 C0 00 00 */	li r6, 0
/* 8039C150 00399090  38 00 00 05 */	li r0, 5
/* 8039C154 00399094  7C C4 33 78 */	mr r4, r6
/* 8039C158 00399098  80 E9 02 74 */	lwz r7, 0x274(r9)
/* 8039C15C 0039909C  81 09 01 F0 */	lwz r8, 0x1f0(r9)
/* 8039C160 003990A0  38 60 00 03 */	li r3, 3
/* 8039C164 003990A4  7C 09 03 A6 */	mtctr r0
.L_8039C168:
/* 8039C168 003990A8  6C C0 80 00 */	xoris r0, r6, 0x8000
/* 8039C16C 003990AC  90 A1 02 20 */	stw r5, 0x220(r1)
/* 8039C170 003990B0  C0 8D 99 B8 */	lfs f4, mPikiOffset__Q28Morimura7TVsPiki@sda21(r13)
/* 8039C174 003990B4  7C 06 38 00 */	cmpw r6, r7
/* 8039C178 003990B8  90 01 02 24 */	stw r0, 0x224(r1)
/* 8039C17C 003990BC  C8 41 02 20 */	lfd f2, 0x220(r1)
/* 8039C180 003990C0  EC 42 18 28 */	fsubs f2, f2, f3
/* 8039C184 003990C4  EC 44 00 B2 */	fmuls f2, f4, f2
/* 8039C188 003990C8  D0 48 00 14 */	stfs f2, 0x14(r8)
/* 8039C18C 003990CC  D0 28 00 10 */	stfs f1, 0x10(r8)
/* 8039C190 003990D0  40 80 00 10 */	bge .L_8039C1A0
/* 8039C194 003990D4  90 88 00 0C */	stw r4, 0xc(r8)
/* 8039C198 003990D8  D0 28 00 18 */	stfs f1, 0x18(r8)
/* 8039C19C 003990DC  48 00 00 0C */	b .L_8039C1A8
.L_8039C1A0:
/* 8039C1A0 003990E0  90 68 00 0C */	stw r3, 0xc(r8)
/* 8039C1A4 003990E4  D0 08 00 18 */	stfs f0, 0x18(r8)
.L_8039C1A8:
/* 8039C1A8 003990E8  38 C6 00 01 */	addi r6, r6, 1
/* 8039C1AC 003990EC  90 A1 02 20 */	stw r5, 0x220(r1)
/* 8039C1B0 003990F0  6C C0 80 00 */	xoris r0, r6, 0x8000
/* 8039C1B4 003990F4  C0 8D 99 B8 */	lfs f4, mPikiOffset__Q28Morimura7TVsPiki@sda21(r13)
/* 8039C1B8 003990F8  90 01 02 24 */	stw r0, 0x224(r1)
/* 8039C1BC 003990FC  7C 06 38 00 */	cmpw r6, r7
/* 8039C1C0 00399100  C8 41 02 20 */	lfd f2, 0x220(r1)
/* 8039C1C4 00399104  EC 42 18 28 */	fsubs f2, f2, f3
/* 8039C1C8 00399108  EC 44 00 B2 */	fmuls f2, f4, f2
/* 8039C1CC 0039910C  D0 48 00 24 */	stfs f2, 0x24(r8)
/* 8039C1D0 00399110  D0 28 00 20 */	stfs f1, 0x20(r8)
/* 8039C1D4 00399114  40 80 00 10 */	bge .L_8039C1E4
/* 8039C1D8 00399118  90 88 00 1C */	stw r4, 0x1c(r8)
/* 8039C1DC 0039911C  D0 28 00 28 */	stfs f1, 0x28(r8)
/* 8039C1E0 00399120  48 00 00 0C */	b .L_8039C1EC
.L_8039C1E4:
/* 8039C1E4 00399124  90 68 00 1C */	stw r3, 0x1c(r8)
/* 8039C1E8 00399128  D0 08 00 28 */	stfs f0, 0x28(r8)
.L_8039C1EC:
/* 8039C1EC 0039912C  39 08 00 20 */	addi r8, r8, 0x20
/* 8039C1F0 00399130  38 C6 00 01 */	addi r6, r6, 1
/* 8039C1F4 00399134  42 00 FF 74 */	bdnz .L_8039C168
/* 8039C1F8 00399138  80 09 02 74 */	lwz r0, 0x274(r9)
/* 8039C1FC 0039913C  39 4A 00 01 */	addi r10, r10, 1
/* 8039C200 00399140  2C 0A 00 02 */	cmpwi r10, 2
/* 8039C204 00399144  1C 00 00 05 */	mulli r0, r0, 5
/* 8039C208 00399148  90 09 02 7C */	stw r0, 0x27c(r9)
/* 8039C20C 0039914C  39 29 00 04 */	addi r9, r9, 4
/* 8039C210 00399150  41 80 FF 3C */	blt .L_8039C14C
/* 8039C214 00399154  38 1F 02 7C */	addi r0, r31, 0x27c
/* 8039C218 00399158  3C 80 5F 66 */	lis r4, 0x5F665F6C@ha
/* 8039C21C 0039915C  90 01 00 08 */	stw r0, 8(r1)
/* 8039C220 00399160  38 00 00 02 */	li r0, 2
/* 8039C224 00399164  3C 60 00 50 */	lis r3, 0x00507270@ha
/* 8039C228 00399168  39 04 5F 6C */	addi r8, r4, 0x5F665F6C@l
/* 8039C22C 0039916C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8039C230 00399170  38 A3 72 70 */	addi r5, r3, 0x00507270@l
/* 8039C234 00399174  38 60 00 00 */	li r3, 0
/* 8039C238 00399178  38 00 00 01 */	li r0, 1
/* 8039C23C 0039917C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8039C240 00399180  7F A3 EB 78 */	mr r3, r29
/* 8039C244 00399184  7C A7 2B 78 */	mr r7, r5
/* 8039C248 00399188  7D 0A 43 78 */	mr r10, r8
/* 8039C24C 0039918C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039C250 00399190  7C A9 2B 78 */	mr r9, r5
/* 8039C254 00399194  38 C4 5F 72 */	addi r6, r4, 0x5f72
/* 8039C258 00399198  80 1F 00 78 */	lwz r0, 0x78(r31)
/* 8039C25C 0039919C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8039C260 003991A0  4B F7 02 D1 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 8039C264 003991A4  38 1F 02 80 */	addi r0, r31, 0x280
/* 8039C268 003991A8  3C 80 66 5F */	lis r4, 0x665F6C31@ha
/* 8039C26C 003991AC  90 01 00 08 */	stw r0, 8(r1)
/* 8039C270 003991B0  38 00 00 02 */	li r0, 2
/* 8039C274 003991B4  3C 60 50 72 */	lis r3, 0x5072705F@ha
/* 8039C278 003991B8  39 04 6C 31 */	addi r8, r4, 0x665F6C31@l
/* 8039C27C 003991BC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8039C280 003991C0  38 A3 70 5F */	addi r5, r3, 0x5072705F@l
/* 8039C284 003991C4  38 60 00 00 */	li r3, 0
/* 8039C288 003991C8  38 00 00 01 */	li r0, 1
/* 8039C28C 003991CC  90 61 00 10 */	stw r3, 0x10(r1)
/* 8039C290 003991D0  7F A3 EB 78 */	mr r3, r29
/* 8039C294 003991D4  7C A7 2B 78 */	mr r7, r5
/* 8039C298 003991D8  7D 0A 43 78 */	mr r10, r8
/* 8039C29C 003991DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039C2A0 003991E0  7C A9 2B 78 */	mr r9, r5
/* 8039C2A4 003991E4  38 C4 72 31 */	addi r6, r4, 0x7231
/* 8039C2A8 003991E8  80 1F 00 78 */	lwz r0, 0x78(r31)
/* 8039C2AC 003991EC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8039C2B0 003991F0  4B F7 02 81 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 8039C2B4 003991F4  38 60 00 B4 */	li r3, 0xb4
/* 8039C2B8 003991F8  4B C8 7B ED */	bl __nw__FUl
/* 8039C2BC 003991FC  7C 60 1B 79 */	or. r0, r3, r3
/* 8039C2C0 00399200  41 82 00 54 */	beq .L_8039C314
/* 8039C2C4 00399204  3C 80 80 4D */	lis r4, SujiTex32__Q22og6Screen@ha
/* 8039C2C8 00399208  80 DF 00 78 */	lwz r6, 0x78(r31)
/* 8039C2CC 0039920C  38 84 7E 18 */	addi r4, r4, SujiTex32__Q22og6Screen@l
/* 8039C2D0 00399210  7C 15 03 78 */	mr r21, r0
/* 8039C2D4 00399214  38 A0 00 04 */	li r5, 4
/* 8039C2D8 00399218  4B F7 0F E1 */	bl __ct__Q32og6Screen19CallBack_CounterDayFPPcUsP10JKRArchive
/* 8039C2DC 0039921C  3C 60 80 4E */	lis r3, __vt__Q28Morimura17TVsSelectCBWinNum@ha
/* 8039C2E0 00399220  38 00 00 00 */	li r0, 0
/* 8039C2E4 00399224  38 83 55 F0 */	addi r4, r3, __vt__Q28Morimura17TVsSelectCBWinNum@l
/* 8039C2E8 00399228  38 60 00 1C */	li r3, 0x1c
/* 8039C2EC 0039922C  90 95 00 00 */	stw r4, 0(r21)
/* 8039C2F0 00399230  98 15 00 AC */	stb r0, 0xac(r21)
/* 8039C2F4 00399234  90 15 00 B0 */	stw r0, 0xb0(r21)
/* 8039C2F8 00399238  4B C8 7B AD */	bl __nw__FUl
/* 8039C2FC 0039923C  7C 60 1B 79 */	or. r0, r3, r3
/* 8039C300 00399240  41 82 00 0C */	beq .L_8039C30C
/* 8039C304 00399244  4B F8 CB 01 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 8039C308 00399248  7C 60 1B 78 */	mr r0, r3
.L_8039C30C:
/* 8039C30C 0039924C  90 15 00 B0 */	stw r0, 0xb0(r21)
/* 8039C310 00399250  7E A0 AB 78 */	mr r0, r21
.L_8039C314:
/* 8039C314 00399254  90 1F 02 10 */	stw r0, 0x210(r31)
/* 8039C318 00399258  3C 60 72 69 */	lis r3, 0x72695F72@ha
/* 8039C31C 0039925C  38 9F 02 84 */	addi r4, r31, 0x284
/* 8039C320 00399260  38 00 00 01 */	li r0, 1
/* 8039C324 00399264  90 81 00 08 */	stw r4, 8(r1)
/* 8039C328 00399268  7F A4 EB 78 */	mr r4, r29
/* 8039C32C 0039926C  38 C3 5F 72 */	addi r6, r3, 0x72695F72@l
/* 8039C330 00399270  39 03 5F 6C */	addi r8, r3, 0x5f6c
/* 8039C334 00399274  90 01 00 0C */	stw r0, 0xc(r1)
/* 8039C338 00399278  39 43 5F 63 */	addi r10, r3, 0x5f63
/* 8039C33C 0039927C  38 A0 50 6F */	li r5, 0x506f
/* 8039C340 00399280  38 E0 50 6F */	li r7, 0x506f
/* 8039C344 00399284  80 7F 02 10 */	lwz r3, 0x210(r31)
/* 8039C348 00399288  39 20 50 6F */	li r9, 0x506f
/* 8039C34C 0039928C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C350 00399290  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8039C354 00399294  7D 89 03 A6 */	mtctr r12
/* 8039C358 00399298  4E 80 04 21 */	bctrl 
/* 8039C35C 0039929C  80 7F 02 10 */	lwz r3, 0x210(r31)
/* 8039C360 003992A0  38 80 00 01 */	li r4, 1
/* 8039C364 003992A4  4B F6 F4 75 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 8039C368 003992A8  3C 80 72 69 */	lis r4, 0x72695F72@ha
/* 8039C36C 003992AC  80 FF 02 10 */	lwz r7, 0x210(r31)
/* 8039C370 003992B0  7F A3 EB 78 */	mr r3, r29
/* 8039C374 003992B4  38 A0 50 6F */	li r5, 0x506f
/* 8039C378 003992B8  38 C4 5F 72 */	addi r6, r4, 0x72695F72@l
/* 8039C37C 003992BC  48 09 87 A9 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8039C380 003992C0  38 60 00 B4 */	li r3, 0xb4
/* 8039C384 003992C4  4B C8 7B 21 */	bl __nw__FUl
/* 8039C388 003992C8  7C 60 1B 79 */	or. r0, r3, r3
/* 8039C38C 003992CC  41 82 00 54 */	beq .L_8039C3E0
/* 8039C390 003992D0  3C 80 80 4D */	lis r4, SujiTex32__Q22og6Screen@ha
/* 8039C394 003992D4  80 DF 00 78 */	lwz r6, 0x78(r31)
/* 8039C398 003992D8  38 84 7E 18 */	addi r4, r4, SujiTex32__Q22og6Screen@l
/* 8039C39C 003992DC  7C 15 03 78 */	mr r21, r0
/* 8039C3A0 003992E0  38 A0 00 04 */	li r5, 4
/* 8039C3A4 003992E4  4B F7 0F 15 */	bl __ct__Q32og6Screen19CallBack_CounterDayFPPcUsP10JKRArchive
/* 8039C3A8 003992E8  3C 60 80 4E */	lis r3, __vt__Q28Morimura17TVsSelectCBWinNum@ha
/* 8039C3AC 003992EC  38 00 00 00 */	li r0, 0
/* 8039C3B0 003992F0  38 83 55 F0 */	addi r4, r3, __vt__Q28Morimura17TVsSelectCBWinNum@l
/* 8039C3B4 003992F4  38 60 00 1C */	li r3, 0x1c
/* 8039C3B8 003992F8  90 95 00 00 */	stw r4, 0(r21)
/* 8039C3BC 003992FC  98 15 00 AC */	stb r0, 0xac(r21)
/* 8039C3C0 00399300  90 15 00 B0 */	stw r0, 0xb0(r21)
/* 8039C3C4 00399304  4B C8 7A E1 */	bl __nw__FUl
/* 8039C3C8 00399308  7C 60 1B 79 */	or. r0, r3, r3
/* 8039C3CC 0039930C  41 82 00 0C */	beq .L_8039C3D8
/* 8039C3D0 00399310  4B F8 CA 35 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 8039C3D4 00399314  7C 60 1B 78 */	mr r0, r3
.L_8039C3D8:
/* 8039C3D8 00399318  90 15 00 B0 */	stw r0, 0xb0(r21)
/* 8039C3DC 0039931C  7E A0 AB 78 */	mr r0, r21
.L_8039C3E0:
/* 8039C3E0 00399320  90 1F 02 14 */	stw r0, 0x214(r31)
/* 8039C3E4 00399324  3C 60 75 69 */	lis r3, 0x75695F72@ha
/* 8039C3E8 00399328  38 9F 02 88 */	addi r4, r31, 0x288
/* 8039C3EC 0039932C  38 00 00 01 */	li r0, 1
/* 8039C3F0 00399330  90 81 00 08 */	stw r4, 8(r1)
/* 8039C3F4 00399334  7F A4 EB 78 */	mr r4, r29
/* 8039C3F8 00399338  38 C3 5F 72 */	addi r6, r3, 0x75695F72@l
/* 8039C3FC 0039933C  39 03 5F 6C */	addi r8, r3, 0x5f6c
/* 8039C400 00399340  90 01 00 0C */	stw r0, 0xc(r1)
/* 8039C404 00399344  39 43 5F 63 */	addi r10, r3, 0x5f63
/* 8039C408 00399348  38 A0 50 6C */	li r5, 0x506c
/* 8039C40C 0039934C  38 E0 50 6C */	li r7, 0x506c
/* 8039C410 00399350  80 7F 02 14 */	lwz r3, 0x214(r31)
/* 8039C414 00399354  39 20 50 6C */	li r9, 0x506c
/* 8039C418 00399358  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C41C 0039935C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8039C420 00399360  7D 89 03 A6 */	mtctr r12
/* 8039C424 00399364  4E 80 04 21 */	bctrl 
/* 8039C428 00399368  80 7F 02 14 */	lwz r3, 0x214(r31)
/* 8039C42C 0039936C  38 80 00 01 */	li r4, 1
/* 8039C430 00399370  4B F6 F3 A9 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 8039C434 00399374  3C 80 75 69 */	lis r4, 0x75695F72@ha
/* 8039C438 00399378  80 FF 02 14 */	lwz r7, 0x214(r31)
/* 8039C43C 0039937C  7F A3 EB 78 */	mr r3, r29
/* 8039C440 00399380  38 A0 50 6C */	li r5, 0x506c
/* 8039C444 00399384  38 C4 5F 72 */	addi r6, r4, 0x75695F72@l
/* 8039C448 00399388  48 09 86 DD */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8039C44C 0039938C  38 60 00 18 */	li r3, 0x18
/* 8039C450 00399390  4B C8 7A 55 */	bl __nw__FUl
/* 8039C454 00399394  28 03 00 00 */	cmplwi r3, 0
/* 8039C458 00399398  41 82 00 70 */	beq .L_8039C4C8
/* 8039C45C 0039939C  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 8039C460 003993A0  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 8039C464 003993A4  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 8039C468 003993A8  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 8039C46C 003993AC  90 03 00 00 */	stw r0, 0(r3)
/* 8039C470 003993B0  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 8039C474 003993B4  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 8039C478 003993B8  3C 80 80 4E */	lis r4, __vt__Q25efx2d12T2DCountKira@ha
/* 8039C47C 003993BC  90 03 00 00 */	stw r0, 0(r3)
/* 8039C480 003993C0  39 20 00 00 */	li r9, 0
/* 8039C484 003993C4  38 E5 74 20 */	addi r7, r5, __vt__Q25efx2d8TForever@l
/* 8039C488 003993C8  38 84 76 10 */	addi r4, r4, __vt__Q25efx2d12T2DCountKira@l
/* 8039C48C 003993CC  99 23 00 04 */	stb r9, 4(r3)
/* 8039C490 003993D0  39 06 E2 7C */	addi r8, r6, __vt__18JPAEmitterCallBack@l
/* 8039C494 003993D4  38 C7 00 18 */	addi r6, r7, 0x18
/* 8039C498 003993D8  38 A0 00 08 */	li r5, 8
/* 8039C49C 003993DC  99 23 00 05 */	stb r9, 5(r3)
/* 8039C4A0 003993E0  38 04 00 18 */	addi r0, r4, 0x18
/* 8039C4A4 003993E4  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 8039C4A8 003993E8  91 03 00 08 */	stw r8, 8(r3)
/* 8039C4AC 003993EC  90 E3 00 00 */	stw r7, 0(r3)
/* 8039C4B0 003993F0  90 C3 00 08 */	stw r6, 8(r3)
/* 8039C4B4 003993F4  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8039C4B8 003993F8  91 23 00 10 */	stw r9, 0x10(r3)
/* 8039C4BC 003993FC  90 83 00 00 */	stw r4, 0(r3)
/* 8039C4C0 00399400  90 03 00 08 */	stw r0, 8(r3)
/* 8039C4C4 00399404  D0 03 00 14 */	stfs f0, 0x14(r3)
.L_8039C4C8:
/* 8039C4C8 00399408  90 7F 02 00 */	stw r3, 0x200(r31)
/* 8039C4CC 0039940C  38 60 00 18 */	li r3, 0x18
/* 8039C4D0 00399410  4B C8 79 D5 */	bl __nw__FUl
/* 8039C4D4 00399414  7C 75 1B 79 */	or. r21, r3, r3
/* 8039C4D8 00399418  41 82 00 28 */	beq .L_8039C500
/* 8039C4DC 0039941C  7F 84 E3 78 */	mr r4, r28
/* 8039C4E0 00399420  38 A0 00 00 */	li r5, 0
/* 8039C4E4 00399424  48 00 4E C5 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8039C4E8 00399428  3C 80 80 4E */	lis r4, __vt__Q28Morimura11TListScreen@ha
/* 8039C4EC 0039942C  3C 60 80 4E */	lis r3, __vt__Q28Morimura19TVsSelectListScreen@ha
/* 8039C4F0 00399430  38 04 59 6C */	addi r0, r4, __vt__Q28Morimura11TListScreen@l
/* 8039C4F4 00399434  90 15 00 00 */	stw r0, 0(r21)
/* 8039C4F8 00399438  38 03 54 88 */	addi r0, r3, __vt__Q28Morimura19TVsSelectListScreen@l
/* 8039C4FC 0039943C  90 15 00 00 */	stw r0, 0(r21)
.L_8039C500:
/* 8039C500 00399440  92 BF 00 BC */	stw r21, 0xbc(r31)
/* 8039C504 00399444  38 9E 04 8C */	addi r4, r30, 0x48c
/* 8039C508 00399448  3C A0 00 02 */	lis r5, 2
/* 8039C50C 0039944C  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8039C510 00399450  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C514 00399454  81 8C 00 08 */	lwz r12, 8(r12)
/* 8039C518 00399458  7D 89 03 A6 */	mtctr r12
/* 8039C51C 0039945C  4E 80 04 21 */	bctrl 
/* 8039C520 00399460  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 8039C524 00399464  3C 60 6C 69 */	lis r3, 0x6C697374@ha
/* 8039C528 00399468  38 C3 73 74 */	addi r6, r3, 0x6C697374@l
/* 8039C52C 0039946C  38 A0 00 4E */	li r5, 0x4e
/* 8039C530 00399470  80 64 00 08 */	lwz r3, 8(r4)
/* 8039C534 00399474  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C538 00399478  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C53C 0039947C  7D 89 03 A6 */	mtctr r12
/* 8039C540 00399480  4E 80 04 21 */	bctrl 
/* 8039C544 00399484  90 7F 00 E4 */	stw r3, 0xe4(r31)
/* 8039C548 00399488  80 1F 00 E4 */	lwz r0, 0xe4(r31)
/* 8039C54C 0039948C  28 00 00 00 */	cmplwi r0, 0
/* 8039C550 00399490  40 82 00 18 */	bne .L_8039C568
/* 8039C554 00399494  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C558 00399498  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C55C 0039949C  38 80 04 56 */	li r4, 0x456
/* 8039C560 003994A0  4C C6 31 82 */	crclr 6
/* 8039C564 003994A4  4B C8 E0 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C568:
/* 8039C568 003994A8  38 60 00 18 */	li r3, 0x18
/* 8039C56C 003994AC  4B C8 79 39 */	bl __nw__FUl
/* 8039C570 003994B0  7C 60 1B 79 */	or. r0, r3, r3
/* 8039C574 003994B4  41 82 00 14 */	beq .L_8039C588
/* 8039C578 003994B8  7F 84 E3 78 */	mr r4, r28
/* 8039C57C 003994BC  38 A0 00 01 */	li r5, 1
/* 8039C580 003994C0  48 00 4E 29 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8039C584 003994C4  7C 60 1B 78 */	mr r0, r3
.L_8039C588:
/* 8039C588 003994C8  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 8039C58C 003994CC  38 9E 04 A0 */	addi r4, r30, 0x4a0
/* 8039C590 003994D0  3C A0 01 02 */	lis r5, 0x102
/* 8039C594 003994D4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8039C598 003994D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C59C 003994DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8039C5A0 003994E0  7D 89 03 A6 */	mtctr r12
/* 8039C5A4 003994E4  4E 80 04 21 */	bctrl 
/* 8039C5A8 003994E8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8039C5AC 003994EC  38 9E 04 B4 */	addi r4, r30, 0x4b4
/* 8039C5B0 003994F0  48 00 4E B1 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C5B4 003994F4  38 60 00 18 */	li r3, 0x18
/* 8039C5B8 003994F8  4B C8 78 ED */	bl __nw__FUl
/* 8039C5BC 003994FC  7C 60 1B 79 */	or. r0, r3, r3
/* 8039C5C0 00399500  41 82 00 14 */	beq .L_8039C5D4
/* 8039C5C4 00399504  7F 84 E3 78 */	mr r4, r28
/* 8039C5C8 00399508  38 A0 00 02 */	li r5, 2
/* 8039C5CC 0039950C  48 00 4D DD */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8039C5D0 00399510  7C 60 1B 78 */	mr r0, r3
.L_8039C5D4:
/* 8039C5D4 00399514  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 8039C5D8 00399518  38 9E 04 C8 */	addi r4, r30, 0x4c8
/* 8039C5DC 0039951C  3C A0 01 02 */	lis r5, 0x102
/* 8039C5E0 00399520  80 7F 00 D0 */	lwz r3, 0xd0(r31)
/* 8039C5E4 00399524  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C5E8 00399528  81 8C 00 08 */	lwz r12, 8(r12)
/* 8039C5EC 0039952C  7D 89 03 A6 */	mtctr r12
/* 8039C5F0 00399530  4E 80 04 21 */	bctrl 
/* 8039C5F4 00399534  80 7F 00 D0 */	lwz r3, 0xd0(r31)
/* 8039C5F8 00399538  38 9E 04 DC */	addi r4, r30, 0x4dc
/* 8039C5FC 0039953C  48 00 4E 65 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C600 00399540  80 7F 00 D0 */	lwz r3, 0xd0(r31)
/* 8039C604 00399544  38 9E 04 F0 */	addi r4, r30, 0x4f0
/* 8039C608 00399548  48 00 4E 59 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C60C 0039954C  38 60 00 30 */	li r3, 0x30
/* 8039C610 00399550  4B C8 78 95 */	bl __nw__FUl
/* 8039C614 00399554  7C 75 1B 79 */	or. r21, r3, r3
/* 8039C618 00399558  41 82 00 1C */	beq .L_8039C634
/* 8039C61C 0039955C  7F 84 E3 78 */	mr r4, r28
/* 8039C620 00399560  38 A0 00 0C */	li r5, 0xc
/* 8039C624 00399564  48 00 71 E9 */	bl __ct__Q28Morimura24TSelectExplanationWindowFP10JKRArchivei
/* 8039C628 00399568  3C 60 80 4E */	lis r3, __vt__Q28Morimura26TVsSelectExplanationWindow@ha
/* 8039C62C 0039956C  38 03 56 C0 */	addi r0, r3, __vt__Q28Morimura26TVsSelectExplanationWindow@l
/* 8039C630 00399570  90 15 00 00 */	stw r0, 0(r21)
.L_8039C634:
/* 8039C634 00399574  92 BF 00 D4 */	stw r21, 0xd4(r31)
/* 8039C638 00399578  38 9E 05 08 */	addi r4, r30, 0x508
/* 8039C63C 0039957C  3C A0 01 02 */	lis r5, 0x102
/* 8039C640 00399580  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C644 00399584  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C648 00399588  81 8C 00 08 */	lwz r12, 8(r12)
/* 8039C64C 0039958C  7D 89 03 A6 */	mtctr r12
/* 8039C650 00399590  4E 80 04 21 */	bctrl 
/* 8039C654 00399594  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C658 00399598  38 9E 05 20 */	addi r4, r30, 0x520
/* 8039C65C 0039959C  48 00 4E 05 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C660 003995A0  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C664 003995A4  38 9E 05 38 */	addi r4, r30, 0x538
/* 8039C668 003995A8  48 00 4D F9 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C66C 003995AC  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C670 003995B0  38 9E 05 54 */	addi r4, r30, 0x554
/* 8039C674 003995B4  48 00 4D ED */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C678 003995B8  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C67C 003995BC  38 9E 05 70 */	addi r4, r30, 0x570
/* 8039C680 003995C0  48 00 4D E1 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C684 003995C4  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C688 003995C8  38 9E 05 8C */	addi r4, r30, 0x58c
/* 8039C68C 003995CC  48 00 4D D5 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C690 003995D0  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C694 003995D4  38 9E 05 A8 */	addi r4, r30, 0x5a8
/* 8039C698 003995D8  48 00 4D C9 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C69C 003995DC  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C6A0 003995E0  38 9E 05 C4 */	addi r4, r30, 0x5c4
/* 8039C6A4 003995E4  48 00 4D BD */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C6A8 003995E8  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C6AC 003995EC  38 9E 05 E0 */	addi r4, r30, 0x5e0
/* 8039C6B0 003995F0  48 00 4D B1 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C6B4 003995F4  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C6B8 003995F8  38 9E 05 FC */	addi r4, r30, 0x5fc
/* 8039C6BC 003995FC  48 00 4D A5 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C6C0 00399600  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C6C4 00399604  38 9E 06 18 */	addi r4, r30, 0x618
/* 8039C6C8 00399608  48 00 4D 99 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C6CC 0039960C  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C6D0 00399610  38 9E 06 34 */	addi r4, r30, 0x634
/* 8039C6D4 00399614  48 00 4D 8D */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C6D8 00399618  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C6DC 0039961C  38 9E 06 50 */	addi r4, r30, 0x650
/* 8039C6E0 00399620  48 00 4D 81 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8039C6E4 00399624  80 9F 00 D4 */	lwz r4, 0xd4(r31)
/* 8039C6E8 00399628  3C 60 4E 6D */	lis r3, 0x4E6D6730@ha
/* 8039C6EC 0039962C  38 C3 67 30 */	addi r6, r3, 0x4E6D6730@l
/* 8039C6F0 00399630  38 A0 00 00 */	li r5, 0
/* 8039C6F4 00399634  80 64 00 08 */	lwz r3, 8(r4)
/* 8039C6F8 00399638  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C6FC 0039963C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C700 00399640  7D 89 03 A6 */	mtctr r12
/* 8039C704 00399644  4E 80 04 21 */	bctrl 
/* 8039C708 00399648  90 7F 01 10 */	stw r3, 0x110(r31)
/* 8039C70C 0039964C  80 1F 01 10 */	lwz r0, 0x110(r31)
/* 8039C710 00399650  28 00 00 00 */	cmplwi r0, 0
/* 8039C714 00399654  40 82 00 18 */	bne .L_8039C72C
/* 8039C718 00399658  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C71C 0039965C  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C720 00399660  38 80 04 76 */	li r4, 0x476
/* 8039C724 00399664  4C C6 31 82 */	crclr 6
/* 8039C728 00399668  4B C8 DF 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C72C:
/* 8039C72C 0039966C  80 BF 01 10 */	lwz r5, 0x110(r31)
/* 8039C730 00399670  3C 80 6A 69 */	lis r4, 0x6A693030@ha
/* 8039C734 00399674  3C 60 00 4E */	lis r3, 0x004E7961@ha
/* 8039C738 00399678  C0 25 00 D8 */	lfs f1, 0xd8(r5)
/* 8039C73C 0039967C  38 C4 30 30 */	addi r6, r4, 0x6A693030@l
/* 8039C740 00399680  C0 05 00 D4 */	lfs f0, 0xd4(r5)
/* 8039C744 00399684  38 A3 79 61 */	addi r5, r3, 0x004E7961@l
/* 8039C748 00399688  D0 1F 03 18 */	stfs f0, 0x318(r31)
/* 8039C74C 0039968C  D0 3F 03 1C */	stfs f1, 0x31c(r31)
/* 8039C750 00399690  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C754 00399694  80 63 00 08 */	lwz r3, 8(r3)
/* 8039C758 00399698  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C75C 0039969C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C760 003996A0  7D 89 03 A6 */	mtctr r12
/* 8039C764 003996A4  4E 80 04 21 */	bctrl 
/* 8039C768 003996A8  90 7F 01 08 */	stw r3, 0x108(r31)
/* 8039C76C 003996AC  80 1F 01 08 */	lwz r0, 0x108(r31)
/* 8039C770 003996B0  28 00 00 00 */	cmplwi r0, 0
/* 8039C774 003996B4  40 82 00 18 */	bne .L_8039C78C
/* 8039C778 003996B8  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C77C 003996BC  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C780 003996C0  38 80 04 7A */	li r4, 0x47a
/* 8039C784 003996C4  4C C6 31 82 */	crclr 6
/* 8039C788 003996C8  4B C8 DE B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C78C:
/* 8039C78C 003996CC  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C790 003996D0  3C A0 6A 69 */	lis r5, 0x6A693031@ha
/* 8039C794 003996D4  3C 80 00 4E */	lis r4, 0x004E7961@ha
/* 8039C798 003996D8  80 63 00 08 */	lwz r3, 8(r3)
/* 8039C79C 003996DC  38 C5 30 31 */	addi r6, r5, 0x6A693031@l
/* 8039C7A0 003996E0  38 A4 79 61 */	addi r5, r4, 0x004E7961@l
/* 8039C7A4 003996E4  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C7A8 003996E8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C7AC 003996EC  7D 89 03 A6 */	mtctr r12
/* 8039C7B0 003996F0  4E 80 04 21 */	bctrl 
/* 8039C7B4 003996F4  90 7F 01 0C */	stw r3, 0x10c(r31)
/* 8039C7B8 003996F8  80 1F 01 0C */	lwz r0, 0x10c(r31)
/* 8039C7BC 003996FC  28 00 00 00 */	cmplwi r0, 0
/* 8039C7C0 00399700  40 82 00 18 */	bne .L_8039C7D8
/* 8039C7C4 00399704  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C7C8 00399708  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C7CC 0039970C  38 80 04 7D */	li r4, 0x47d
/* 8039C7D0 00399710  4C C6 31 82 */	crclr 6
/* 8039C7D4 00399714  4B C8 DE 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C7D8:
/* 8039C7D8 00399718  80 9F 00 D4 */	lwz r4, 0xd4(r31)
/* 8039C7DC 0039971C  3C 60 6D 67 */	lis r3, 0x6D673030@ha
/* 8039C7E0 00399720  38 C3 30 30 */	addi r6, r3, 0x6D673030@l
/* 8039C7E4 00399724  38 A0 54 30 */	li r5, 0x5430
/* 8039C7E8 00399728  80 64 00 08 */	lwz r3, 8(r4)
/* 8039C7EC 0039972C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C7F0 00399730  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C7F4 00399734  7D 89 03 A6 */	mtctr r12
/* 8039C7F8 00399738  4E 80 04 21 */	bctrl 
/* 8039C7FC 0039973C  90 7F 01 B4 */	stw r3, 0x1b4(r31)
/* 8039C800 00399740  80 1F 01 B4 */	lwz r0, 0x1b4(r31)
/* 8039C804 00399744  28 00 00 00 */	cmplwi r0, 0
/* 8039C808 00399748  40 82 00 18 */	bne .L_8039C820
/* 8039C80C 0039974C  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C810 00399750  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C814 00399754  38 80 04 80 */	li r4, 0x480
/* 8039C818 00399758  4C C6 31 82 */	crclr 6
/* 8039C81C 0039975C  4B C8 DE 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C820:
/* 8039C820 00399760  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C824 00399764  3C A0 67 73 */	lis r5, 0x67733030@ha
/* 8039C828 00399768  3C 80 00 54 */	lis r4, 0x0054306D@ha
/* 8039C82C 0039976C  80 63 00 08 */	lwz r3, 8(r3)
/* 8039C830 00399770  38 C5 30 30 */	addi r6, r5, 0x67733030@l
/* 8039C834 00399774  38 A4 30 6D */	addi r5, r4, 0x0054306D@l
/* 8039C838 00399778  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C83C 0039977C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C840 00399780  7D 89 03 A6 */	mtctr r12
/* 8039C844 00399784  4E 80 04 21 */	bctrl 
/* 8039C848 00399788  90 7F 01 CC */	stw r3, 0x1cc(r31)
/* 8039C84C 0039978C  80 1F 01 CC */	lwz r0, 0x1cc(r31)
/* 8039C850 00399790  28 00 00 00 */	cmplwi r0, 0
/* 8039C854 00399794  40 82 00 18 */	bne .L_8039C86C
/* 8039C858 00399798  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C85C 0039979C  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C860 003997A0  38 80 04 82 */	li r4, 0x482
/* 8039C864 003997A4  4C C6 31 82 */	crclr 6
/* 8039C868 003997A8  4B C8 DD D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C86C:
/* 8039C86C 003997AC  80 9F 00 D4 */	lwz r4, 0xd4(r31)
/* 8039C870 003997B0  3C 60 6D 67 */	lis r3, 0x6D673031@ha
/* 8039C874 003997B4  38 C3 30 31 */	addi r6, r3, 0x6D673031@l
/* 8039C878 003997B8  38 A0 54 30 */	li r5, 0x5430
/* 8039C87C 003997BC  80 64 00 08 */	lwz r3, 8(r4)
/* 8039C880 003997C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C884 003997C4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C888 003997C8  7D 89 03 A6 */	mtctr r12
/* 8039C88C 003997CC  4E 80 04 21 */	bctrl 
/* 8039C890 003997D0  90 7F 01 B8 */	stw r3, 0x1b8(r31)
/* 8039C894 003997D4  80 1F 01 B8 */	lwz r0, 0x1b8(r31)
/* 8039C898 003997D8  28 00 00 00 */	cmplwi r0, 0
/* 8039C89C 003997DC  40 82 00 18 */	bne .L_8039C8B4
/* 8039C8A0 003997E0  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C8A4 003997E4  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C8A8 003997E8  38 80 04 85 */	li r4, 0x485
/* 8039C8AC 003997EC  4C C6 31 82 */	crclr 6
/* 8039C8B0 003997F0  4B C8 DD 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C8B4:
/* 8039C8B4 003997F4  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C8B8 003997F8  3C A0 67 73 */	lis r5, 0x67733031@ha
/* 8039C8BC 003997FC  3C 80 00 54 */	lis r4, 0x0054306D@ha
/* 8039C8C0 00399800  80 63 00 08 */	lwz r3, 8(r3)
/* 8039C8C4 00399804  38 C5 30 31 */	addi r6, r5, 0x67733031@l
/* 8039C8C8 00399808  38 A4 30 6D */	addi r5, r4, 0x0054306D@l
/* 8039C8CC 0039980C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C8D0 00399810  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C8D4 00399814  7D 89 03 A6 */	mtctr r12
/* 8039C8D8 00399818  4E 80 04 21 */	bctrl 
/* 8039C8DC 0039981C  90 7F 01 D0 */	stw r3, 0x1d0(r31)
/* 8039C8E0 00399820  80 1F 01 D0 */	lwz r0, 0x1d0(r31)
/* 8039C8E4 00399824  28 00 00 00 */	cmplwi r0, 0
/* 8039C8E8 00399828  40 82 00 18 */	bne .L_8039C900
/* 8039C8EC 0039982C  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C8F0 00399830  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C8F4 00399834  38 80 04 87 */	li r4, 0x487
/* 8039C8F8 00399838  4C C6 31 82 */	crclr 6
/* 8039C8FC 0039983C  4B C8 DD 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C900:
/* 8039C900 00399840  80 9F 00 D4 */	lwz r4, 0xd4(r31)
/* 8039C904 00399844  3C 60 6D 67 */	lis r3, 0x6D673032@ha
/* 8039C908 00399848  38 C3 30 32 */	addi r6, r3, 0x6D673032@l
/* 8039C90C 0039984C  38 A0 54 30 */	li r5, 0x5430
/* 8039C910 00399850  80 64 00 08 */	lwz r3, 8(r4)
/* 8039C914 00399854  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C918 00399858  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C91C 0039985C  7D 89 03 A6 */	mtctr r12
/* 8039C920 00399860  4E 80 04 21 */	bctrl 
/* 8039C924 00399864  90 7F 01 BC */	stw r3, 0x1bc(r31)
/* 8039C928 00399868  80 1F 01 BC */	lwz r0, 0x1bc(r31)
/* 8039C92C 0039986C  28 00 00 00 */	cmplwi r0, 0
/* 8039C930 00399870  40 82 00 18 */	bne .L_8039C948
/* 8039C934 00399874  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C938 00399878  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C93C 0039987C  38 80 04 8A */	li r4, 0x48a
/* 8039C940 00399880  4C C6 31 82 */	crclr 6
/* 8039C944 00399884  4B C8 DC FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C948:
/* 8039C948 00399888  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C94C 0039988C  3C A0 67 73 */	lis r5, 0x67733032@ha
/* 8039C950 00399890  3C 80 00 54 */	lis r4, 0x0054306D@ha
/* 8039C954 00399894  80 63 00 08 */	lwz r3, 8(r3)
/* 8039C958 00399898  38 C5 30 32 */	addi r6, r5, 0x67733032@l
/* 8039C95C 0039989C  38 A4 30 6D */	addi r5, r4, 0x0054306D@l
/* 8039C960 003998A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C964 003998A4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C968 003998A8  7D 89 03 A6 */	mtctr r12
/* 8039C96C 003998AC  4E 80 04 21 */	bctrl 
/* 8039C970 003998B0  90 7F 01 D4 */	stw r3, 0x1d4(r31)
/* 8039C974 003998B4  80 1F 01 D4 */	lwz r0, 0x1d4(r31)
/* 8039C978 003998B8  28 00 00 00 */	cmplwi r0, 0
/* 8039C97C 003998BC  40 82 00 18 */	bne .L_8039C994
/* 8039C980 003998C0  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C984 003998C4  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C988 003998C8  38 80 04 8C */	li r4, 0x48c
/* 8039C98C 003998CC  4C C6 31 82 */	crclr 6
/* 8039C990 003998D0  4B C8 DC B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C994:
/* 8039C994 003998D4  80 9F 00 D4 */	lwz r4, 0xd4(r31)
/* 8039C998 003998D8  3C 60 6D 67 */	lis r3, 0x6D673033@ha
/* 8039C99C 003998DC  38 C3 30 33 */	addi r6, r3, 0x6D673033@l
/* 8039C9A0 003998E0  38 A0 54 30 */	li r5, 0x5430
/* 8039C9A4 003998E4  80 64 00 08 */	lwz r3, 8(r4)
/* 8039C9A8 003998E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C9AC 003998EC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C9B0 003998F0  7D 89 03 A6 */	mtctr r12
/* 8039C9B4 003998F4  4E 80 04 21 */	bctrl 
/* 8039C9B8 003998F8  90 7F 01 C0 */	stw r3, 0x1c0(r31)
/* 8039C9BC 003998FC  80 1F 01 C0 */	lwz r0, 0x1c0(r31)
/* 8039C9C0 00399900  28 00 00 00 */	cmplwi r0, 0
/* 8039C9C4 00399904  40 82 00 18 */	bne .L_8039C9DC
/* 8039C9C8 00399908  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039C9CC 0039990C  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039C9D0 00399910  38 80 04 8F */	li r4, 0x48f
/* 8039C9D4 00399914  4C C6 31 82 */	crclr 6
/* 8039C9D8 00399918  4B C8 DC 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039C9DC:
/* 8039C9DC 0039991C  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039C9E0 00399920  3C A0 67 73 */	lis r5, 0x67733033@ha
/* 8039C9E4 00399924  3C 80 00 54 */	lis r4, 0x0054306D@ha
/* 8039C9E8 00399928  80 63 00 08 */	lwz r3, 8(r3)
/* 8039C9EC 0039992C  38 C5 30 33 */	addi r6, r5, 0x67733033@l
/* 8039C9F0 00399930  38 A4 30 6D */	addi r5, r4, 0x0054306D@l
/* 8039C9F4 00399934  81 83 00 00 */	lwz r12, 0(r3)
/* 8039C9F8 00399938  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039C9FC 0039993C  7D 89 03 A6 */	mtctr r12
/* 8039CA00 00399940  4E 80 04 21 */	bctrl 
/* 8039CA04 00399944  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 8039CA08 00399948  80 1F 01 D8 */	lwz r0, 0x1d8(r31)
/* 8039CA0C 0039994C  28 00 00 00 */	cmplwi r0, 0
/* 8039CA10 00399950  40 82 00 18 */	bne .L_8039CA28
/* 8039CA14 00399954  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CA18 00399958  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CA1C 0039995C  38 80 04 91 */	li r4, 0x491
/* 8039CA20 00399960  4C C6 31 82 */	crclr 6
/* 8039CA24 00399964  4B C8 DC 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CA28:
/* 8039CA28 00399968  80 9F 00 D4 */	lwz r4, 0xd4(r31)
/* 8039CA2C 0039996C  3C 60 6D 67 */	lis r3, 0x6D673034@ha
/* 8039CA30 00399970  38 C3 30 34 */	addi r6, r3, 0x6D673034@l
/* 8039CA34 00399974  38 A0 54 30 */	li r5, 0x5430
/* 8039CA38 00399978  80 64 00 08 */	lwz r3, 8(r4)
/* 8039CA3C 0039997C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CA40 00399980  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CA44 00399984  7D 89 03 A6 */	mtctr r12
/* 8039CA48 00399988  4E 80 04 21 */	bctrl 
/* 8039CA4C 0039998C  90 7F 01 C4 */	stw r3, 0x1c4(r31)
/* 8039CA50 00399990  80 1F 01 C4 */	lwz r0, 0x1c4(r31)
/* 8039CA54 00399994  28 00 00 00 */	cmplwi r0, 0
/* 8039CA58 00399998  40 82 00 18 */	bne .L_8039CA70
/* 8039CA5C 0039999C  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CA60 003999A0  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CA64 003999A4  38 80 04 94 */	li r4, 0x494
/* 8039CA68 003999A8  4C C6 31 82 */	crclr 6
/* 8039CA6C 003999AC  4B C8 DB D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CA70:
/* 8039CA70 003999B0  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039CA74 003999B4  3C A0 67 73 */	lis r5, 0x67733034@ha
/* 8039CA78 003999B8  3C 80 00 54 */	lis r4, 0x0054306D@ha
/* 8039CA7C 003999BC  80 63 00 08 */	lwz r3, 8(r3)
/* 8039CA80 003999C0  38 C5 30 34 */	addi r6, r5, 0x67733034@l
/* 8039CA84 003999C4  38 A4 30 6D */	addi r5, r4, 0x0054306D@l
/* 8039CA88 003999C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CA8C 003999CC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CA90 003999D0  7D 89 03 A6 */	mtctr r12
/* 8039CA94 003999D4  4E 80 04 21 */	bctrl 
/* 8039CA98 003999D8  90 7F 01 DC */	stw r3, 0x1dc(r31)
/* 8039CA9C 003999DC  80 1F 01 DC */	lwz r0, 0x1dc(r31)
/* 8039CAA0 003999E0  28 00 00 00 */	cmplwi r0, 0
/* 8039CAA4 003999E4  40 82 00 18 */	bne .L_8039CABC
/* 8039CAA8 003999E8  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CAAC 003999EC  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CAB0 003999F0  38 80 04 96 */	li r4, 0x496
/* 8039CAB4 003999F4  4C C6 31 82 */	crclr 6
/* 8039CAB8 003999F8  4B C8 DB 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CABC:
/* 8039CABC 003999FC  80 9F 00 D4 */	lwz r4, 0xd4(r31)
/* 8039CAC0 00399A00  3C 60 6D 67 */	lis r3, 0x6D673035@ha
/* 8039CAC4 00399A04  38 C3 30 35 */	addi r6, r3, 0x6D673035@l
/* 8039CAC8 00399A08  38 A0 54 30 */	li r5, 0x5430
/* 8039CACC 00399A0C  80 64 00 08 */	lwz r3, 8(r4)
/* 8039CAD0 00399A10  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CAD4 00399A14  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CAD8 00399A18  7D 89 03 A6 */	mtctr r12
/* 8039CADC 00399A1C  4E 80 04 21 */	bctrl 
/* 8039CAE0 00399A20  90 7F 01 C8 */	stw r3, 0x1c8(r31)
/* 8039CAE4 00399A24  80 1F 01 C8 */	lwz r0, 0x1c8(r31)
/* 8039CAE8 00399A28  28 00 00 00 */	cmplwi r0, 0
/* 8039CAEC 00399A2C  40 82 00 18 */	bne .L_8039CB04
/* 8039CAF0 00399A30  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CAF4 00399A34  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CAF8 00399A38  38 80 04 99 */	li r4, 0x499
/* 8039CAFC 00399A3C  4C C6 31 82 */	crclr 6
/* 8039CB00 00399A40  4B C8 DB 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CB04:
/* 8039CB04 00399A44  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039CB08 00399A48  3C A0 67 73 */	lis r5, 0x67733035@ha
/* 8039CB0C 00399A4C  3C 80 00 54 */	lis r4, 0x0054306D@ha
/* 8039CB10 00399A50  80 63 00 08 */	lwz r3, 8(r3)
/* 8039CB14 00399A54  38 C5 30 35 */	addi r6, r5, 0x67733035@l
/* 8039CB18 00399A58  38 A4 30 6D */	addi r5, r4, 0x0054306D@l
/* 8039CB1C 00399A5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CB20 00399A60  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CB24 00399A64  7D 89 03 A6 */	mtctr r12
/* 8039CB28 00399A68  4E 80 04 21 */	bctrl 
/* 8039CB2C 00399A6C  90 7F 01 E0 */	stw r3, 0x1e0(r31)
/* 8039CB30 00399A70  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8039CB34 00399A74  28 00 00 00 */	cmplwi r0, 0
/* 8039CB38 00399A78  40 82 00 18 */	bne .L_8039CB50
/* 8039CB3C 00399A7C  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CB40 00399A80  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CB44 00399A84  38 80 04 9B */	li r4, 0x49b
/* 8039CB48 00399A88  4C C6 31 82 */	crclr 6
/* 8039CB4C 00399A8C  4B C8 DA F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CB50:
/* 8039CB50 00399A90  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039CB54 00399A94  3C A0 6F 6E */	lis r5, 0x6F6E3030@ha
/* 8039CB58 00399A98  3C 80 50 30 */	lis r4, 0x50306963@ha
/* 8039CB5C 00399A9C  80 63 00 08 */	lwz r3, 8(r3)
/* 8039CB60 00399AA0  38 C5 30 30 */	addi r6, r5, 0x6F6E3030@l
/* 8039CB64 00399AA4  38 A4 69 63 */	addi r5, r4, 0x50306963@l
/* 8039CB68 00399AA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CB6C 00399AAC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CB70 00399AB0  7D 89 03 A6 */	mtctr r12
/* 8039CB74 00399AB4  4E 80 04 21 */	bctrl 
/* 8039CB78 00399AB8  90 7F 01 14 */	stw r3, 0x114(r31)
/* 8039CB7C 00399ABC  80 1F 01 14 */	lwz r0, 0x114(r31)
/* 8039CB80 00399AC0  28 00 00 00 */	cmplwi r0, 0
/* 8039CB84 00399AC4  40 82 00 18 */	bne .L_8039CB9C
/* 8039CB88 00399AC8  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CB8C 00399ACC  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CB90 00399AD0  38 80 04 9E */	li r4, 0x49e
/* 8039CB94 00399AD4  4C C6 31 82 */	crclr 6
/* 8039CB98 00399AD8  4B C8 DA A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CB9C:
/* 8039CB9C 00399ADC  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039CBA0 00399AE0  3C A0 6F 6E */	lis r5, 0x6F6E3031@ha
/* 8039CBA4 00399AE4  3C 80 50 30 */	lis r4, 0x50306963@ha
/* 8039CBA8 00399AE8  80 63 00 08 */	lwz r3, 8(r3)
/* 8039CBAC 00399AEC  38 C5 30 31 */	addi r6, r5, 0x6F6E3031@l
/* 8039CBB0 00399AF0  38 A4 69 63 */	addi r5, r4, 0x50306963@l
/* 8039CBB4 00399AF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CBB8 00399AF8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CBBC 00399AFC  7D 89 03 A6 */	mtctr r12
/* 8039CBC0 00399B00  4E 80 04 21 */	bctrl 
/* 8039CBC4 00399B04  90 7F 01 18 */	stw r3, 0x118(r31)
/* 8039CBC8 00399B08  80 1F 01 18 */	lwz r0, 0x118(r31)
/* 8039CBCC 00399B0C  28 00 00 00 */	cmplwi r0, 0
/* 8039CBD0 00399B10  40 82 00 18 */	bne .L_8039CBE8
/* 8039CBD4 00399B14  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CBD8 00399B18  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CBDC 00399B1C  38 80 04 A1 */	li r4, 0x4a1
/* 8039CBE0 00399B20  4C C6 31 82 */	crclr 6
/* 8039CBE4 00399B24  4B C8 DA 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CBE8:
/* 8039CBE8 00399B28  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039CBEC 00399B2C  3C A0 6F 6E */	lis r5, 0x6F6E3032@ha
/* 8039CBF0 00399B30  3C 80 50 30 */	lis r4, 0x50306963@ha
/* 8039CBF4 00399B34  80 63 00 08 */	lwz r3, 8(r3)
/* 8039CBF8 00399B38  38 C5 30 32 */	addi r6, r5, 0x6F6E3032@l
/* 8039CBFC 00399B3C  38 A4 69 63 */	addi r5, r4, 0x50306963@l
/* 8039CC00 00399B40  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CC04 00399B44  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CC08 00399B48  7D 89 03 A6 */	mtctr r12
/* 8039CC0C 00399B4C  4E 80 04 21 */	bctrl 
/* 8039CC10 00399B50  90 7F 01 1C */	stw r3, 0x11c(r31)
/* 8039CC14 00399B54  80 1F 01 1C */	lwz r0, 0x11c(r31)
/* 8039CC18 00399B58  28 00 00 00 */	cmplwi r0, 0
/* 8039CC1C 00399B5C  40 82 00 18 */	bne .L_8039CC34
/* 8039CC20 00399B60  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CC24 00399B64  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CC28 00399B68  38 80 04 A4 */	li r4, 0x4a4
/* 8039CC2C 00399B6C  4C C6 31 82 */	crclr 6
/* 8039CC30 00399B70  4B C8 DA 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CC34:
/* 8039CC34 00399B74  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039CC38 00399B78  3C A0 6F 6E */	lis r5, 0x6F6E3033@ha
/* 8039CC3C 00399B7C  3C 80 50 30 */	lis r4, 0x50306963@ha
/* 8039CC40 00399B80  80 63 00 08 */	lwz r3, 8(r3)
/* 8039CC44 00399B84  38 C5 30 33 */	addi r6, r5, 0x6F6E3033@l
/* 8039CC48 00399B88  38 A4 69 63 */	addi r5, r4, 0x50306963@l
/* 8039CC4C 00399B8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CC50 00399B90  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CC54 00399B94  7D 89 03 A6 */	mtctr r12
/* 8039CC58 00399B98  4E 80 04 21 */	bctrl 
/* 8039CC5C 00399B9C  90 7F 01 20 */	stw r3, 0x120(r31)
/* 8039CC60 00399BA0  80 1F 01 20 */	lwz r0, 0x120(r31)
/* 8039CC64 00399BA4  28 00 00 00 */	cmplwi r0, 0
/* 8039CC68 00399BA8  40 82 00 18 */	bne .L_8039CC80
/* 8039CC6C 00399BAC  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CC70 00399BB0  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CC74 00399BB4  38 80 04 A7 */	li r4, 0x4a7
/* 8039CC78 00399BB8  4C C6 31 82 */	crclr 6
/* 8039CC7C 00399BBC  4B C8 D9 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CC80:
/* 8039CC80 00399BC0  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039CC84 00399BC4  3C A0 6F 6E */	lis r5, 0x6F6E3034@ha
/* 8039CC88 00399BC8  3C 80 50 30 */	lis r4, 0x50306963@ha
/* 8039CC8C 00399BCC  80 63 00 08 */	lwz r3, 8(r3)
/* 8039CC90 00399BD0  38 C5 30 34 */	addi r6, r5, 0x6F6E3034@l
/* 8039CC94 00399BD4  38 A4 69 63 */	addi r5, r4, 0x50306963@l
/* 8039CC98 00399BD8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CC9C 00399BDC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CCA0 00399BE0  7D 89 03 A6 */	mtctr r12
/* 8039CCA4 00399BE4  4E 80 04 21 */	bctrl 
/* 8039CCA8 00399BE8  90 7F 01 24 */	stw r3, 0x124(r31)
/* 8039CCAC 00399BEC  80 1F 01 24 */	lwz r0, 0x124(r31)
/* 8039CCB0 00399BF0  28 00 00 00 */	cmplwi r0, 0
/* 8039CCB4 00399BF4  40 82 00 18 */	bne .L_8039CCCC
/* 8039CCB8 00399BF8  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CCBC 00399BFC  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CCC0 00399C00  38 80 04 AA */	li r4, 0x4aa
/* 8039CCC4 00399C04  4C C6 31 82 */	crclr 6
/* 8039CCC8 00399C08  4B C8 D9 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CCCC:
/* 8039CCCC 00399C0C  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039CCD0 00399C10  3C A0 6F 6E */	lis r5, 0x6F6E3035@ha
/* 8039CCD4 00399C14  3C 80 50 30 */	lis r4, 0x50306963@ha
/* 8039CCD8 00399C18  80 63 00 08 */	lwz r3, 8(r3)
/* 8039CCDC 00399C1C  38 C5 30 35 */	addi r6, r5, 0x6F6E3035@l
/* 8039CCE0 00399C20  38 A4 69 63 */	addi r5, r4, 0x50306963@l
/* 8039CCE4 00399C24  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CCE8 00399C28  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CCEC 00399C2C  7D 89 03 A6 */	mtctr r12
/* 8039CCF0 00399C30  4E 80 04 21 */	bctrl 
/* 8039CCF4 00399C34  90 7F 01 28 */	stw r3, 0x128(r31)
/* 8039CCF8 00399C38  80 1F 01 28 */	lwz r0, 0x128(r31)
/* 8039CCFC 00399C3C  28 00 00 00 */	cmplwi r0, 0
/* 8039CD00 00399C40  40 82 00 18 */	bne .L_8039CD18
/* 8039CD04 00399C44  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CD08 00399C48  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CD0C 00399C4C  38 80 04 AD */	li r4, 0x4ad
/* 8039CD10 00399C50  4C C6 31 82 */	crclr 6
/* 8039CD14 00399C54  4B C8 D9 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CD18:
/* 8039CD18 00399C58  80 BF 01 14 */	lwz r5, 0x114(r31)
/* 8039CD1C 00399C5C  38 00 00 00 */	li r0, 0
/* 8039CD20 00399C60  3C 80 65 5F */	lis r4, 0x655F3131@ha
/* 8039CD24 00399C64  3C 60 54 72 */	lis r3, 0x5472756C@ha
/* 8039CD28 00399C68  98 05 00 B0 */	stb r0, 0xb0(r5)
/* 8039CD2C 00399C6C  38 C4 31 31 */	addi r6, r4, 0x655F3131@l
/* 8039CD30 00399C70  38 A3 75 6C */	addi r5, r3, 0x5472756C@l
/* 8039CD34 00399C74  80 7F 01 18 */	lwz r3, 0x118(r31)
/* 8039CD38 00399C78  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039CD3C 00399C7C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 8039CD40 00399C80  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039CD44 00399C84  80 7F 01 20 */	lwz r3, 0x120(r31)
/* 8039CD48 00399C88  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039CD4C 00399C8C  80 7F 01 24 */	lwz r3, 0x124(r31)
/* 8039CD50 00399C90  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039CD54 00399C94  80 7F 01 28 */	lwz r3, 0x128(r31)
/* 8039CD58 00399C98  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039CD5C 00399C9C  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039CD60 00399CA0  80 63 00 08 */	lwz r3, 8(r3)
/* 8039CD64 00399CA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CD68 00399CA8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CD6C 00399CAC  7D 89 03 A6 */	mtctr r12
/* 8039CD70 00399CB0  4E 80 04 21 */	bctrl 
/* 8039CD74 00399CB4  7C 75 1B 79 */	or. r21, r3, r3
/* 8039CD78 00399CB8  40 82 00 18 */	bne .L_8039CD90
/* 8039CD7C 00399CBC  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CD80 00399CC0  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CD84 00399CC4  38 80 04 B4 */	li r4, 0x4b4
/* 8039CD88 00399CC8  4C C6 31 82 */	crclr 6
/* 8039CD8C 00399CCC  4B C8 D8 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CD90:
/* 8039CD90 00399CD0  3C 80 33 5F */	lis r4, 0x335F3030@ha
/* 8039CD94 00399CD4  3C 60 00 32 */	lis r3, 0x00323031@ha
/* 8039CD98 00399CD8  38 04 30 30 */	addi r0, r4, 0x335F3030@l
/* 8039CD9C 00399CDC  3C 80 65 5F */	lis r4, 0x655F6D36@ha
/* 8039CDA0 00399CE0  90 15 00 1C */	stw r0, 0x1c(r21)
/* 8039CDA4 00399CE4  38 03 30 31 */	addi r0, r3, 0x00323031@l
/* 8039CDA8 00399CE8  3C 60 54 72 */	lis r3, 0x5472756C@ha
/* 8039CDAC 00399CEC  38 C4 6D 36 */	addi r6, r4, 0x655F6D36@l
/* 8039CDB0 00399CF0  90 15 00 18 */	stw r0, 0x18(r21)
/* 8039CDB4 00399CF4  38 A3 75 6C */	addi r5, r3, 0x5472756C@l
/* 8039CDB8 00399CF8  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8039CDBC 00399CFC  80 63 00 08 */	lwz r3, 8(r3)
/* 8039CDC0 00399D00  81 83 00 00 */	lwz r12, 0(r3)
/* 8039CDC4 00399D04  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CDC8 00399D08  7D 89 03 A6 */	mtctr r12
/* 8039CDCC 00399D0C  4E 80 04 21 */	bctrl 
/* 8039CDD0 00399D10  7C 75 1B 79 */	or. r21, r3, r3
/* 8039CDD4 00399D14  40 82 00 18 */	bne .L_8039CDEC
/* 8039CDD8 00399D18  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CDDC 00399D1C  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CDE0 00399D20  38 80 04 B8 */	li r4, 0x4b8
/* 8039CDE4 00399D24  4C C6 31 82 */	crclr 6
/* 8039CDE8 00399D28  4B C8 D8 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CDEC:
/* 8039CDEC 00399D2C  3C 60 33 5F */	lis r3, 0x335F3030@ha
/* 8039CDF0 00399D30  3C 80 00 32 */	lis r4, 0x00323031@ha
/* 8039CDF4 00399D34  38 03 30 30 */	addi r0, r3, 0x335F3030@l
/* 8039CDF8 00399D38  7F E3 FB 78 */	mr r3, r31
/* 8039CDFC 00399D3C  90 15 00 1C */	stw r0, 0x1c(r21)
/* 8039CE00 00399D40  38 04 30 31 */	addi r0, r4, 0x00323031@l
/* 8039CE04 00399D44  90 15 00 18 */	stw r0, 0x18(r21)
/* 8039CE08 00399D48  48 00 3E 79 */	bl changeSlotPage__Q28Morimura9TVsSelectFv
/* 8039CE0C 00399D4C  80 BF 00 BC */	lwz r5, 0xbc(r31)
/* 8039CE10 00399D50  38 60 00 00 */	li r3, 0
/* 8039CE14 00399D54  38 80 00 02 */	li r4, 2
/* 8039CE18 00399D58  38 01 00 78 */	addi r0, r1, 0x78
/* 8039CE1C 00399D5C  82 E5 00 08 */	lwz r23, 8(r5)
/* 8039CE20 00399D60  90 7F 00 90 */	stw r3, 0x90(r31)
/* 8039CE24 00399D64  7E E3 BB 78 */	mr r3, r23
/* 8039CE28 00399D68  90 9F 00 94 */	stw r4, 0x94(r31)
/* 8039CE2C 00399D6C  A8 9F 00 8E */	lha r4, 0x8e(r31)
/* 8039CE30 00399D70  38 84 FF FF */	addi r4, r4, -1
/* 8039CE34 00399D74  90 9F 00 98 */	stw r4, 0x98(r31)
/* 8039CE38 00399D78  C8 9E 03 10 */	lfd f4, 0x310(r30)
/* 8039CE3C 00399D7C  C8 7E 03 18 */	lfd f3, 0x318(r30)
/* 8039CE40 00399D80  C8 5E 03 20 */	lfd f2, 0x320(r30)
/* 8039CE44 00399D84  C8 3E 03 28 */	lfd f1, 0x328(r30)
/* 8039CE48 00399D88  C8 1E 03 30 */	lfd f0, 0x330(r30)
/* 8039CE4C 00399D8C  D8 81 00 78 */	stfd f4, 0x78(r1)
/* 8039CE50 00399D90  D8 61 00 80 */	stfd f3, 0x80(r1)
/* 8039CE54 00399D94  D8 41 00 88 */	stfd f2, 0x88(r1)
/* 8039CE58 00399D98  D8 21 00 90 */	stfd f1, 0x90(r1)
/* 8039CE5C 00399D9C  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 8039CE60 00399DA0  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 8039CE64 00399DA4  81 97 00 00 */	lwz r12, 0(r23)
/* 8039CE68 00399DA8  54 84 18 38 */	slwi r4, r4, 3
/* 8039CE6C 00399DAC  7C C0 22 14 */	add r6, r0, r4
/* 8039CE70 00399DB0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CE74 00399DB4  80 A6 00 00 */	lwz r5, 0(r6)
/* 8039CE78 00399DB8  80 C6 00 04 */	lwz r6, 4(r6)
/* 8039CE7C 00399DBC  7D 89 03 A6 */	mtctr r12
/* 8039CE80 00399DC0  4E 80 04 21 */	bctrl 
/* 8039CE84 00399DC4  7C 75 1B 79 */	or. r21, r3, r3
/* 8039CE88 00399DC8  40 82 00 18 */	bne .L_8039CEA0
/* 8039CE8C 00399DCC  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CE90 00399DD0  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CE94 00399DD4  38 80 04 CB */	li r4, 0x4cb
/* 8039CE98 00399DD8  4C C6 31 82 */	crclr 6
/* 8039CE9C 00399DDC  4B C8 D7 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CEA0:
/* 8039CEA0 00399DE0  C0 15 00 D8 */	lfs f0, 0xd8(r21)
/* 8039CEA4 00399DE4  7E E3 BB 78 */	mr r3, r23
/* 8039CEA8 00399DE8  38 01 00 78 */	addi r0, r1, 0x78
/* 8039CEAC 00399DEC  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 8039CEB0 00399DF0  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 8039CEB4 00399DF4  81 97 00 00 */	lwz r12, 0(r23)
/* 8039CEB8 00399DF8  54 84 18 38 */	slwi r4, r4, 3
/* 8039CEBC 00399DFC  7C C0 22 14 */	add r6, r0, r4
/* 8039CEC0 00399E00  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CEC4 00399E04  80 A6 00 00 */	lwz r5, 0(r6)
/* 8039CEC8 00399E08  80 C6 00 04 */	lwz r6, 4(r6)
/* 8039CECC 00399E0C  7D 89 03 A6 */	mtctr r12
/* 8039CED0 00399E10  4E 80 04 21 */	bctrl 
/* 8039CED4 00399E14  7C 75 1B 79 */	or. r21, r3, r3
/* 8039CED8 00399E18  40 82 00 18 */	bne .L_8039CEF0
/* 8039CEDC 00399E1C  38 7E 00 0C */	addi r3, r30, 0xc
/* 8039CEE0 00399E20  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8039CEE4 00399E24  38 80 04 CF */	li r4, 0x4cf
/* 8039CEE8 00399E28  4C C6 31 82 */	crclr 6
/* 8039CEEC 00399E2C  4B C8 D7 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039CEF0:
/* 8039CEF0 00399E30  C0 15 00 D8 */	lfs f0, 0xd8(r21)
/* 8039CEF4 00399E34  D0 1F 00 A4 */	stfs f0, 0xa4(r31)
/* 8039CEF8 00399E38  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8039CEFC 00399E3C  54 03 10 3A */	slwi r3, r0, 2
/* 8039CF00 00399E40  4B C8 70 AD */	bl __nwa__FUl
/* 8039CF04 00399E44  3C A0 30 5F */	lis r5, 0x305F3031@ha
/* 8039CF08 00399E48  3C 80 00 30 */	lis r4, 0x00303030@ha
/* 8039CF0C 00399E4C  90 7F 00 88 */	stw r3, 0x88(r31)
/* 8039CF10 00399E50  3A C1 00 78 */	addi r22, r1, 0x78
/* 8039CF14 00399E54  3B 85 30 31 */	addi r28, r5, 0x305F3031@l
/* 8039CF18 00399E58  3B 24 30 30 */	addi r25, r4, 0x00303030@l
/* 8039CF1C 00399E5C  3A A0 00 00 */	li r21, 0
/* 8039CF20 00399E60  3B 00 00 00 */	li r24, 0
/* 8039CF24 00399E64  48 00 00 B0 */	b .L_8039CFD4
.L_8039CF28:
/* 8039CF28 00399E68  38 60 00 28 */	li r3, 0x28
/* 8039CF2C 00399E6C  4B C8 6F 79 */	bl __nw__FUl
/* 8039CF30 00399E70  7C 7D 1B 79 */	or. r29, r3, r3
/* 8039CF34 00399E74  41 82 00 54 */	beq .L_8039CF88
/* 8039CF38 00399E78  7E E3 BB 78 */	mr r3, r23
/* 8039CF3C 00399E7C  80 B6 00 00 */	lwz r5, 0(r22)
/* 8039CF40 00399E80  81 97 00 00 */	lwz r12, 0(r23)
/* 8039CF44 00399E84  80 D6 00 04 */	lwz r6, 4(r22)
/* 8039CF48 00399E88  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039CF4C 00399E8C  7D 89 03 A6 */	mtctr r12
/* 8039CF50 00399E90  4E 80 04 21 */	bctrl 
/* 8039CF54 00399E94  38 00 00 00 */	li r0, 0
/* 8039CF58 00399E98  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039CF5C 00399E9C  90 1D 00 00 */	stw r0, 0(r29)
/* 8039CF60 00399EA0  90 7D 00 04 */	stw r3, 4(r29)
/* 8039CF64 00399EA4  90 1D 00 08 */	stw r0, 8(r29)
/* 8039CF68 00399EA8  90 1D 00 0C */	stw r0, 0xc(r29)
/* 8039CF6C 00399EAC  90 1D 00 10 */	stw r0, 0x10(r29)
/* 8039CF70 00399EB0  D0 1D 00 18 */	stfs f0, 0x18(r29)
/* 8039CF74 00399EB4  90 1D 00 20 */	stw r0, 0x20(r29)
/* 8039CF78 00399EB8  90 1D 00 24 */	stw r0, 0x24(r29)
/* 8039CF7C 00399EBC  80 7D 00 04 */	lwz r3, 4(r29)
/* 8039CF80 00399EC0  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8039CF84 00399EC4  D0 1D 00 1C */	stfs f0, 0x1c(r29)
.L_8039CF88:
/* 8039CF88 00399EC8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8039CF8C 00399ECC  7E A4 AB 78 */	mr r4, r21
/* 8039CF90 00399ED0  7F A3 C1 2E */	stwx r29, r3, r24
/* 8039CF94 00399ED4  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8039CF98 00399ED8  7C 63 C0 2E */	lwzx r3, r3, r24
/* 8039CF9C 00399EDC  80 63 00 04 */	lwz r3, 4(r3)
/* 8039CFA0 00399EE0  93 83 00 1C */	stw r28, 0x1c(r3)
/* 8039CFA4 00399EE4  93 23 00 18 */	stw r25, 0x18(r3)
/* 8039CFA8 00399EE8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8039CFAC 00399EEC  7C 63 C0 2E */	lwzx r3, r3, r24
/* 8039CFB0 00399EF0  48 00 54 29 */	bl setIndex__Q28Morimura10TIndexPaneFi
/* 8039CFB4 00399EF4  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8039CFB8 00399EF8  38 00 00 01 */	li r0, 1
/* 8039CFBC 00399EFC  3A D6 00 08 */	addi r22, r22, 8
/* 8039CFC0 00399F00  3A B5 00 01 */	addi r21, r21, 1
/* 8039CFC4 00399F04  7C 63 C0 2E */	lwzx r3, r3, r24
/* 8039CFC8 00399F08  3B 18 00 04 */	addi r24, r24, 4
/* 8039CFCC 00399F0C  80 63 00 04 */	lwz r3, 4(r3)
/* 8039CFD0 00399F10  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8039CFD4:
/* 8039CFD4 00399F14  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8039CFD8 00399F18  7C 15 00 00 */	cmpw r21, r0
/* 8039CFDC 00399F1C  41 80 FF 4C */	blt .L_8039CF28
/* 8039CFE0 00399F20  80 9F 00 88 */	lwz r4, 0x88(r31)
/* 8039CFE4 00399F24  38 60 00 30 */	li r3, 0x30
/* 8039CFE8 00399F28  80 A4 00 00 */	lwz r5, 0(r4)
/* 8039CFEC 00399F2C  80 84 00 04 */	lwz r4, 4(r4)
/* 8039CFF0 00399F30  80 A5 00 04 */	lwz r5, 4(r5)
/* 8039CFF4 00399F34  80 84 00 04 */	lwz r4, 4(r4)
/* 8039CFF8 00399F38  C0 05 00 D8 */	lfs f0, 0xd8(r5)
/* 8039CFFC 00399F3C  C0 24 00 D8 */	lfs f1, 0xd8(r4)
/* 8039D000 00399F40  EF C1 00 28 */	fsubs f30, f1, f0
/* 8039D004 00399F44  4B C8 6E A1 */	bl __nw__FUl
/* 8039D008 00399F48  7C 60 1B 79 */	or. r0, r3, r3
/* 8039D00C 00399F4C  41 82 00 0C */	beq .L_8039D018
/* 8039D010 00399F50  48 00 51 45 */	bl __ct__Q28Morimura11TIndexGroupFv
/* 8039D014 00399F54  7C 60 1B 78 */	mr r0, r3
.L_8039D018:
/* 8039D018 00399F58  90 1F 00 84 */	stw r0, 0x84(r31)
/* 8039D01C 00399F5C  3C 60 80 51 */	lis r3, mScrollParm__Q28Morimura9TVsSelect@ha
/* 8039D020 00399F60  38 83 40 44 */	addi r4, r3, mScrollParm__Q28Morimura9TVsSelect@l
/* 8039D024 00399F64  7F E3 FB 78 */	mr r3, r31
/* 8039D028 00399F68  80 BF 00 84 */	lwz r5, 0x84(r31)
/* 8039D02C 00399F6C  D3 C5 00 18 */	stfs f30, 0x18(r5)
/* 8039D030 00399F70  80 BF 00 84 */	lwz r5, 0x84(r31)
/* 8039D034 00399F74  C0 04 00 00 */	lfs f0, 0(r4)
/* 8039D038 00399F78  D0 05 00 00 */	stfs f0, 0(r5)
/* 8039D03C 00399F7C  C0 04 00 04 */	lfs f0, 4(r4)
/* 8039D040 00399F80  D0 05 00 04 */	stfs f0, 4(r5)
/* 8039D044 00399F84  C0 04 00 08 */	lfs f0, 8(r4)
/* 8039D048 00399F88  D0 05 00 08 */	stfs f0, 8(r5)
/* 8039D04C 00399F8C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8039D050 00399F90  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 8039D054 00399F94  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8039D058 00399F98  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 8039D05C 00399F9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039D060 00399FA0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8039D064 00399FA4  7D 89 03 A6 */	mtctr r12
/* 8039D068 00399FA8  4E 80 04 21 */	bctrl 
/* 8039D06C 00399FAC  7F E3 FB 78 */	mr r3, r31
/* 8039D070 00399FB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039D074 00399FB4  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8039D078 00399FB8  7D 89 03 A6 */	mtctr r12
/* 8039D07C 00399FBC  4E 80 04 21 */	bctrl 
/* 8039D080 00399FC0  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039D084 00399FC4  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 8039D088 00399FC8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8039D08C 00399FCC  2C 00 00 00 */	cmpwi r0, 0
/* 8039D090 00399FD0  40 82 00 08 */	bne .L_8039D098
/* 8039D094 00399FD4  38 63 FF FF */	addi r3, r3, -1
.L_8039D098:
/* 8039D098 00399FD8  2C 03 00 00 */	cmpwi r3, 0
/* 8039D09C 00399FDC  40 80 00 08 */	bge .L_8039D0A4
/* 8039D0A0 00399FE0  38 60 00 00 */	li r3, 0
.L_8039D0A4:
/* 8039D0A4 00399FE4  90 7F 02 84 */	stw r3, 0x284(r31)
/* 8039D0A8 00399FE8  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039D0AC 00399FEC  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 8039D0B0 00399FF0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8039D0B4 00399FF4  2C 00 00 01 */	cmpwi r0, 1
/* 8039D0B8 00399FF8  40 82 00 08 */	bne .L_8039D0C0
/* 8039D0BC 00399FFC  38 63 FF FF */	addi r3, r3, -1
.L_8039D0C0:
/* 8039D0C0 0039A000  2C 03 00 00 */	cmpwi r3, 0
/* 8039D0C4 0039A004  40 80 00 08 */	bge .L_8039D0CC
/* 8039D0C8 0039A008  38 60 00 00 */	li r3, 0
.L_8039D0CC:
/* 8039D0CC 0039A00C  90 7F 02 88 */	stw r3, 0x288(r31)
/* 8039D0D0 0039A010  3A E0 00 00 */	li r23, 0
/* 8039D0D4 0039A014  C3 E2 0E 10 */	lfs f31, lbl_8051F170@sda21(r2)
/* 8039D0D8 0039A018  80 1F 02 48 */	lwz r0, 0x248(r31)
/* 8039D0DC 0039A01C  7C 7B 00 50 */	subf r3, r27, r0
/* 8039D0E0 0039A020  3A A3 00 02 */	addi r21, r3, 2
/* 8039D0E4 0039A024  48 00 00 A0 */	b .L_8039D184
.L_8039D0E8:
/* 8039D0E8 0039A028  3B 00 00 00 */	li r24, 0
/* 8039D0EC 0039A02C  3A C0 00 00 */	li r22, 0
/* 8039D0F0 0039A030  48 00 00 48 */	b .L_8039D138
.L_8039D0F4:
/* 8039D0F4 0039A034  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8039D0F8 0039A038  7C 83 B0 2E */	lwzx r4, r3, r22
/* 8039D0FC 0039A03C  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8039D100 0039A040  80 64 00 04 */	lwz r3, 4(r4)
/* 8039D104 0039A044  EC 00 F0 2A */	fadds f0, f0, f30
/* 8039D108 0039A048  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 8039D10C 0039A04C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039D110 0039A050  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039D114 0039A054  7D 89 03 A6 */	mtctr r12
/* 8039D118 0039A058  4E 80 04 21 */	bctrl 
/* 8039D11C 0039A05C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8039D120 0039A060  3B 18 00 01 */	addi r24, r24, 1
/* 8039D124 0039A064  7C 83 B0 2E */	lwzx r4, r3, r22
/* 8039D128 0039A068  3A D6 00 04 */	addi r22, r22, 4
/* 8039D12C 0039A06C  80 64 00 04 */	lwz r3, 4(r4)
/* 8039D130 0039A070  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8039D134 0039A074  D0 04 00 1C */	stfs f0, 0x1c(r4)
.L_8039D138:
/* 8039D138 0039A078  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8039D13C 0039A07C  7C 18 00 00 */	cmpw r24, r0
/* 8039D140 0039A080  41 80 FF B4 */	blt .L_8039D0F4
/* 8039D144 0039A084  7F E3 FB 78 */	mr r3, r31
/* 8039D148 0039A088  38 80 00 00 */	li r4, 0
/* 8039D14C 0039A08C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039D150 0039A090  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8039D154 0039A094  7D 89 03 A6 */	mtctr r12
/* 8039D158 0039A098  4E 80 04 21 */	bctrl 
/* 8039D15C 0039A09C  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8039D160 0039A0A0  38 00 00 00 */	li r0, 0
/* 8039D164 0039A0A4  7F E3 FB 78 */	mr r3, r31
/* 8039D168 0039A0A8  D3 E4 00 14 */	stfs f31, 0x14(r4)
/* 8039D16C 0039A0AC  90 04 00 20 */	stw r0, 0x20(r4)
/* 8039D170 0039A0B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039D174 0039A0B4  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8039D178 0039A0B8  7D 89 03 A6 */	mtctr r12
/* 8039D17C 0039A0BC  4E 80 04 21 */	bctrl 
/* 8039D180 0039A0C0  3A F7 00 01 */	addi r23, r23, 1
.L_8039D184:
/* 8039D184 0039A0C4  7C 17 A8 00 */	cmpw r23, r21
/* 8039D188 0039A0C8  41 80 FF 60 */	blt .L_8039D0E8
/* 8039D18C 0039A0CC  7F E3 FB 78 */	mr r3, r31
/* 8039D190 0039A0D0  48 00 37 C5 */	bl changeFaceTexture__Q28Morimura9TVsSelectFv
/* 8039D194 0039A0D4  7F 43 D3 78 */	mr r3, r26
/* 8039D198 0039A0D8  4B C8 64 0D */	bl becomeCurrentHeap__7JKRHeapFv
/* 8039D19C 0039A0DC  E3 E1 02 78 */	psq_l f31, 632(r1), 0, qr0
/* 8039D1A0 0039A0E0  CB E1 02 70 */	lfd f31, 0x270(r1)
/* 8039D1A4 0039A0E4  E3 C1 02 68 */	psq_l f30, 616(r1), 0, qr0
/* 8039D1A8 0039A0E8  CB C1 02 60 */	lfd f30, 0x260(r1)
/* 8039D1AC 0039A0EC  BA A1 02 34 */	lmw r21, 0x234(r1)
/* 8039D1B0 0039A0F0  80 01 02 84 */	lwz r0, 0x284(r1)
/* 8039D1B4 0039A0F4  7C 08 03 A6 */	mtlr r0
/* 8039D1B8 0039A0F8  38 21 02 80 */	addi r1, r1, 0x280
/* 8039D1BC 0039A0FC  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura9TVsSelectFP10JKRArchive

.fn create__Q28Morimura19TVsSelectListScreenFPCcUl, weak
/* 8039D1C0 0039A100  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039D1C4 0039A104  7C 08 02 A6 */	mflr r0
/* 8039D1C8 0039A108  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039D1CC 0039A10C  48 00 42 05 */	bl create__Q28Morimura11TScreenBaseFPCcUl
/* 8039D1D0 0039A110  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039D1D4 0039A114  7C 08 03 A6 */	mtlr r0
/* 8039D1D8 0039A118  38 21 00 10 */	addi r1, r1, 0x10
/* 8039D1DC 0039A11C  4E 80 00 20 */	blr 
.endfn create__Q28Morimura19TVsSelectListScreenFPCcUl

.fn doUpdate__Q28Morimura9TVsSelectFv, global
/* 8039D1E0 0039A120  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 8039D1E4 0039A124  7C 08 02 A6 */	mflr r0
/* 8039D1E8 0039A128  90 01 01 04 */	stw r0, 0x104(r1)
/* 8039D1EC 0039A12C  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 8039D1F0 0039A130  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 8039D1F4 0039A134  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 8039D1F8 0039A138  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 8039D1FC 0039A13C  BF 61 00 CC */	stmw r27, 0xcc(r1)
/* 8039D200 0039A140  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039D204 0039A144  7C 7E 1B 78 */	mr r30, r3
/* 8039D208 0039A148  28 00 00 00 */	cmplwi r0, 0
/* 8039D20C 0039A14C  41 82 00 24 */	beq .L_8039D230
/* 8039D210 0039A150  88 1E 02 8E */	lbz r0, 0x28e(r30)
/* 8039D214 0039A154  28 00 00 00 */	cmplwi r0, 0
/* 8039D218 0039A158  41 82 00 18 */	beq .L_8039D230
/* 8039D21C 0039A15C  88 1E 02 8C */	lbz r0, 0x28c(r30)
/* 8039D220 0039A160  90 1E 02 84 */	stw r0, 0x284(r30)
/* 8039D224 0039A164  88 1E 02 8D */	lbz r0, 0x28d(r30)
/* 8039D228 0039A168  90 1E 02 88 */	stw r0, 0x288(r30)
/* 8039D22C 0039A16C  48 00 37 29 */	bl changeFaceTexture__Q28Morimura9TVsSelectFv
.L_8039D230:
/* 8039D230 0039A170  7F C3 F3 78 */	mr r3, r30
/* 8039D234 0039A174  48 00 35 E1 */	bl updateFacePicture__Q28Morimura9TVsSelectFv
/* 8039D238 0039A178  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039D23C 0039A17C  28 00 00 00 */	cmplwi r0, 0
/* 8039D240 0039A180  41 82 00 20 */	beq .L_8039D260
/* 8039D244 0039A184  88 0D 99 C0 */	lbz r0, mForceDemoStart__Q28Morimura9TVsSelect@sda21(r13)
/* 8039D248 0039A188  28 00 00 00 */	cmplwi r0, 0
/* 8039D24C 0039A18C  41 82 00 14 */	beq .L_8039D260
/* 8039D250 0039A190  38 00 00 00 */	li r0, 0
/* 8039D254 0039A194  7F C3 F3 78 */	mr r3, r30
/* 8039D258 0039A198  98 0D 99 C0 */	stb r0, mForceDemoStart__Q28Morimura9TVsSelect@sda21(r13)
/* 8039D25C 0039A19C  48 00 31 D5 */	bl demoStart__Q28Morimura9TVsSelectFv
.L_8039D260:
/* 8039D260 0039A1A0  80 7E 00 D4 */	lwz r3, 0xd4(r30)
/* 8039D264 0039A1A4  3B E0 00 00 */	li r31, 0
/* 8039D268 0039A1A8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8039D26C 0039A1AC  2C 00 00 00 */	cmpwi r0, 0
/* 8039D270 0039A1B0  40 82 00 08 */	bne .L_8039D278
/* 8039D274 0039A1B4  3B E0 00 01 */	li r31, 1
.L_8039D278:
/* 8039D278 0039A1B8  88 1E 00 45 */	lbz r0, 0x45(r30)
/* 8039D27C 0039A1BC  28 00 00 00 */	cmplwi r0, 0
/* 8039D280 0039A1C0  41 82 04 CC */	beq .L_8039D74C
/* 8039D284 0039A1C4  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 8039D288 0039A1C8  80 03 00 34 */	lwz r0, 0x34(r3)
/* 8039D28C 0039A1CC  2C 00 00 00 */	cmpwi r0, 0
/* 8039D290 0039A1D0  40 82 04 BC */	bne .L_8039D74C
/* 8039D294 0039A1D4  7F C3 F3 78 */	mr r3, r30
/* 8039D298 0039A1D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8039D29C 0039A1DC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8039D2A0 0039A1E0  7D 89 03 A6 */	mtctr r12
/* 8039D2A4 0039A1E4  4E 80 04 21 */	bctrl 
/* 8039D2A8 0039A1E8  80 63 02 24 */	lwz r3, 0x224(r3)
/* 8039D2AC 0039A1EC  88 03 00 D4 */	lbz r0, 0xd4(r3)
/* 8039D2B0 0039A1F0  28 00 00 00 */	cmplwi r0, 0
/* 8039D2B4 0039A1F4  40 82 04 98 */	bne .L_8039D74C
/* 8039D2B8 0039A1F8  80 1E 02 40 */	lwz r0, 0x240(r30)
/* 8039D2BC 0039A1FC  2C 00 00 00 */	cmpwi r0, 0
/* 8039D2C0 0039A200  40 82 03 74 */	bne .L_8039D634
/* 8039D2C4 0039A204  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8039D2C8 0039A208  41 82 01 18 */	beq .L_8039D3E0
/* 8039D2CC 0039A20C  80 7E 00 80 */	lwz r3, 0x80(r30)
/* 8039D2D0 0039A210  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8039D2D4 0039A214  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8039D2D8 0039A218  41 82 00 38 */	beq .L_8039D310
/* 8039D2DC 0039A21C  80 7E 02 74 */	lwz r3, 0x274(r30)
/* 8039D2E0 0039A220  38 03 00 01 */	addi r0, r3, 1
/* 8039D2E4 0039A224  90 1E 02 74 */	stw r0, 0x274(r30)
/* 8039D2E8 0039A228  80 1E 02 74 */	lwz r0, 0x274(r30)
/* 8039D2EC 0039A22C  28 00 00 0A */	cmplwi r0, 0xa
/* 8039D2F0 0039A230  40 81 00 10 */	ble .L_8039D300
/* 8039D2F4 0039A234  38 00 00 0A */	li r0, 0xa
/* 8039D2F8 0039A238  90 1E 02 74 */	stw r0, 0x274(r30)
/* 8039D2FC 0039A23C  48 00 00 14 */	b .L_8039D310
.L_8039D300:
/* 8039D300 0039A240  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D304 0039A244  38 80 18 28 */	li r4, 0x1828
/* 8039D308 0039A248  38 A0 00 00 */	li r5, 0
/* 8039D30C 0039A24C  4B F9 B3 25 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8039D310:
/* 8039D310 0039A250  80 7E 00 80 */	lwz r3, 0x80(r30)
/* 8039D314 0039A254  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8039D318 0039A258  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 8039D31C 0039A25C  41 82 00 38 */	beq .L_8039D354
/* 8039D320 0039A260  80 7E 02 74 */	lwz r3, 0x274(r30)
/* 8039D324 0039A264  38 03 FF FF */	addi r0, r3, -1
/* 8039D328 0039A268  90 1E 02 74 */	stw r0, 0x274(r30)
/* 8039D32C 0039A26C  80 1E 02 74 */	lwz r0, 0x274(r30)
/* 8039D330 0039A270  28 00 00 01 */	cmplwi r0, 1
/* 8039D334 0039A274  40 80 00 10 */	bge .L_8039D344
/* 8039D338 0039A278  38 00 00 01 */	li r0, 1
/* 8039D33C 0039A27C  90 1E 02 74 */	stw r0, 0x274(r30)
/* 8039D340 0039A280  48 00 00 14 */	b .L_8039D354
.L_8039D344:
/* 8039D344 0039A284  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D348 0039A288  38 80 18 2A */	li r4, 0x182a
/* 8039D34C 0039A28C  38 A0 00 00 */	li r5, 0
/* 8039D350 0039A290  4B F9 B2 E1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8039D354:
/* 8039D354 0039A294  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 8039D358 0039A298  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8039D35C 0039A29C  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8039D360 0039A2A0  41 82 00 38 */	beq .L_8039D398
/* 8039D364 0039A2A4  80 7E 02 78 */	lwz r3, 0x278(r30)
/* 8039D368 0039A2A8  38 03 00 01 */	addi r0, r3, 1
/* 8039D36C 0039A2AC  90 1E 02 78 */	stw r0, 0x278(r30)
/* 8039D370 0039A2B0  80 1E 02 78 */	lwz r0, 0x278(r30)
/* 8039D374 0039A2B4  28 00 00 0A */	cmplwi r0, 0xa
/* 8039D378 0039A2B8  40 81 00 10 */	ble .L_8039D388
/* 8039D37C 0039A2BC  38 00 00 0A */	li r0, 0xa
/* 8039D380 0039A2C0  90 1E 02 78 */	stw r0, 0x278(r30)
/* 8039D384 0039A2C4  48 00 00 14 */	b .L_8039D398
.L_8039D388:
/* 8039D388 0039A2C8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D38C 0039A2CC  38 80 18 28 */	li r4, 0x1828
/* 8039D390 0039A2D0  38 A0 00 00 */	li r5, 0
/* 8039D394 0039A2D4  4B F9 B2 9D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8039D398:
/* 8039D398 0039A2D8  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 8039D39C 0039A2DC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8039D3A0 0039A2E0  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 8039D3A4 0039A2E4  41 82 00 C8 */	beq .L_8039D46C
/* 8039D3A8 0039A2E8  80 7E 02 78 */	lwz r3, 0x278(r30)
/* 8039D3AC 0039A2EC  38 03 FF FF */	addi r0, r3, -1
/* 8039D3B0 0039A2F0  90 1E 02 78 */	stw r0, 0x278(r30)
/* 8039D3B4 0039A2F4  80 1E 02 78 */	lwz r0, 0x278(r30)
/* 8039D3B8 0039A2F8  28 00 00 01 */	cmplwi r0, 1
/* 8039D3BC 0039A2FC  40 80 00 10 */	bge .L_8039D3CC
/* 8039D3C0 0039A300  38 00 00 01 */	li r0, 1
/* 8039D3C4 0039A304  90 1E 02 78 */	stw r0, 0x278(r30)
/* 8039D3C8 0039A308  48 00 00 A4 */	b .L_8039D46C
.L_8039D3CC:
/* 8039D3CC 0039A30C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D3D0 0039A310  38 80 18 2A */	li r4, 0x182a
/* 8039D3D4 0039A314  38 A0 00 00 */	li r5, 0
/* 8039D3D8 0039A318  4B F9 B2 59 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039D3DC 0039A31C  48 00 00 90 */	b .L_8039D46C
.L_8039D3E0:
/* 8039D3E0 0039A320  80 9E 00 80 */	lwz r4, 0x80(r30)
/* 8039D3E4 0039A324  3C 60 02 02 */	lis r3, 0x02020022@ha
/* 8039D3E8 0039A328  38 03 00 22 */	addi r0, r3, 0x02020022@l
/* 8039D3EC 0039A32C  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8039D3F0 0039A330  7C 80 00 39 */	and. r0, r4, r0
/* 8039D3F4 0039A334  41 82 00 38 */	beq .L_8039D42C
/* 8039D3F8 0039A338  88 1E 02 2C */	lbz r0, 0x22c(r30)
/* 8039D3FC 0039A33C  28 00 00 00 */	cmplwi r0, 0
/* 8039D400 0039A340  40 82 00 6C */	bne .L_8039D46C
/* 8039D404 0039A344  88 1E 02 2D */	lbz r0, 0x22d(r30)
/* 8039D408 0039A348  28 00 00 00 */	cmplwi r0, 0
/* 8039D40C 0039A34C  40 82 00 60 */	bne .L_8039D46C
/* 8039D410 0039A350  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D414 0039A354  38 80 18 11 */	li r4, 0x1811
/* 8039D418 0039A358  38 A0 00 00 */	li r5, 0
/* 8039D41C 0039A35C  4B F9 B2 15 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039D420 0039A360  38 00 00 01 */	li r0, 1
/* 8039D424 0039A364  98 1E 02 2D */	stb r0, 0x22d(r30)
/* 8039D428 0039A368  48 00 00 44 */	b .L_8039D46C
.L_8039D42C:
/* 8039D42C 0039A36C  3C 60 01 01 */	lis r3, 0x01010041@ha
/* 8039D430 0039A370  38 03 00 41 */	addi r0, r3, 0x01010041@l
/* 8039D434 0039A374  7C 80 00 39 */	and. r0, r4, r0
/* 8039D438 0039A378  41 82 00 34 */	beq .L_8039D46C
/* 8039D43C 0039A37C  88 1E 02 2C */	lbz r0, 0x22c(r30)
/* 8039D440 0039A380  28 00 00 00 */	cmplwi r0, 0
/* 8039D444 0039A384  41 82 00 28 */	beq .L_8039D46C
/* 8039D448 0039A388  88 1E 02 2D */	lbz r0, 0x22d(r30)
/* 8039D44C 0039A38C  28 00 00 00 */	cmplwi r0, 0
/* 8039D450 0039A390  40 82 00 1C */	bne .L_8039D46C
/* 8039D454 0039A394  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D458 0039A398  38 80 18 11 */	li r4, 0x1811
/* 8039D45C 0039A39C  38 A0 00 00 */	li r5, 0
/* 8039D460 0039A3A0  4B F9 B1 D1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039D464 0039A3A4  38 00 00 01 */	li r0, 1
/* 8039D468 0039A3A8  98 1E 02 2D */	stb r0, 0x22d(r30)
.L_8039D46C:
/* 8039D46C 0039A3AC  80 9E 00 80 */	lwz r4, 0x80(r30)
/* 8039D470 0039A3B0  80 64 00 1C */	lwz r3, 0x1c(r4)
/* 8039D474 0039A3B4  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 8039D478 0039A3B8  41 82 00 60 */	beq .L_8039D4D8
/* 8039D47C 0039A3BC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8039D480 0039A3C0  41 82 00 3C */	beq .L_8039D4BC
/* 8039D484 0039A3C4  38 00 00 00 */	li r0, 0
/* 8039D488 0039A3C8  7F C3 F3 78 */	mr r3, r30
/* 8039D48C 0039A3CC  98 1E 02 3C */	stb r0, 0x23c(r30)
/* 8039D490 0039A3D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8039D494 0039A3D4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8039D498 0039A3D8  7D 89 03 A6 */	mtctr r12
/* 8039D49C 0039A3DC  4E 80 04 21 */	bctrl 
/* 8039D4A0 0039A3E0  80 63 02 24 */	lwz r3, 0x224(r3)
/* 8039D4A4 0039A3E4  38 80 00 00 */	li r4, 0
/* 8039D4A8 0039A3E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039D4AC 0039A3EC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8039D4B0 0039A3F0  7D 89 03 A6 */	mtctr r12
/* 8039D4B4 0039A3F4  4E 80 04 21 */	bctrl 
/* 8039D4B8 0039A3F8  48 00 02 94 */	b .L_8039D74C
.L_8039D4BC:
/* 8039D4BC 0039A3FC  80 7E 00 D4 */	lwz r3, 0xd4(r30)
/* 8039D4C0 0039A400  48 00 65 95 */	bl closeWindow__Q28Morimura24TSelectExplanationWindowFv
/* 8039D4C4 0039A404  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D4C8 0039A408  38 80 18 11 */	li r4, 0x1811
/* 8039D4CC 0039A40C  38 A0 00 00 */	li r5, 0
/* 8039D4D0 0039A410  4B F9 B1 61 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039D4D4 0039A414  48 00 02 78 */	b .L_8039D74C
.L_8039D4D8:
/* 8039D4D8 0039A418  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 8039D4DC 0039A41C  41 82 00 4C */	beq .L_8039D528
/* 8039D4E0 0039A420  80 7E 00 D4 */	lwz r3, 0xd4(r30)
/* 8039D4E4 0039A424  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039D4E8 0039A428  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8039D4EC 0039A42C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039D4F0 0039A430  4C 40 13 82 */	cror 2, 0, 2
/* 8039D4F4 0039A434  40 82 00 1C */	bne .L_8039D510
/* 8039D4F8 0039A438  48 00 65 49 */	bl openWindow__Q28Morimura24TSelectExplanationWindowFv
/* 8039D4FC 0039A43C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D500 0039A440  38 80 18 11 */	li r4, 0x1811
/* 8039D504 0039A444  38 A0 00 00 */	li r5, 0
/* 8039D508 0039A448  4B F9 B1 29 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039D50C 0039A44C  48 00 02 40 */	b .L_8039D74C
.L_8039D510:
/* 8039D510 0039A450  48 00 65 45 */	bl closeWindow__Q28Morimura24TSelectExplanationWindowFv
/* 8039D514 0039A454  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D518 0039A458  38 80 18 11 */	li r4, 0x1811
/* 8039D51C 0039A45C  38 A0 00 00 */	li r5, 0
/* 8039D520 0039A460  4B F9 B1 11 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039D524 0039A464  48 00 02 28 */	b .L_8039D74C
.L_8039D528:
/* 8039D528 0039A468  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8039D52C 0039A46C  41 82 02 20 */	beq .L_8039D74C
/* 8039D530 0039A470  70 60 11 00 */	andi. r0, r3, 0x1100
/* 8039D534 0039A474  41 82 00 3C */	beq .L_8039D570
/* 8039D538 0039A478  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039D53C 0039A47C  28 00 00 00 */	cmplwi r0, 0
/* 8039D540 0039A480  40 82 00 14 */	bne .L_8039D554
/* 8039D544 0039A484  38 00 00 01 */	li r0, 1
/* 8039D548 0039A488  7F C3 F3 78 */	mr r3, r30
/* 8039D54C 0039A48C  98 1E 02 28 */	stb r0, 0x228(r30)
/* 8039D550 0039A490  48 00 2E E1 */	bl demoStart__Q28Morimura9TVsSelectFv
.L_8039D554:
/* 8039D554 0039A494  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D558 0039A498  38 80 18 00 */	li r4, 0x1800
/* 8039D55C 0039A49C  38 A0 00 00 */	li r5, 0
/* 8039D560 0039A4A0  4B F9 B0 D1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039D564 0039A4A4  80 7E 00 D4 */	lwz r3, 0xd4(r30)
/* 8039D568 0039A4A8  48 00 64 ED */	bl closeWindow__Q28Morimura24TSelectExplanationWindowFv
/* 8039D56C 0039A4AC  48 00 01 E0 */	b .L_8039D74C
.L_8039D570:
/* 8039D570 0039A4B0  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8039D574 0039A4B4  54 60 01 09 */	rlwinm. r0, r3, 0, 4, 4
/* 8039D578 0039A4B8  40 82 00 0C */	bne .L_8039D584
/* 8039D57C 0039A4BC  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 8039D580 0039A4C0  41 82 00 54 */	beq .L_8039D5D4
.L_8039D584:
/* 8039D584 0039A4C4  80 1E 02 44 */	lwz r0, 0x244(r30)
/* 8039D588 0039A4C8  2C 00 00 01 */	cmpwi r0, 1
/* 8039D58C 0039A4CC  41 82 00 10 */	beq .L_8039D59C
/* 8039D590 0039A4D0  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 8039D594 0039A4D4  48 00 4C 0D */	bl upIndex__Q28Morimura11TIndexGroupFv
/* 8039D598 0039A4D8  48 00 01 B4 */	b .L_8039D74C
.L_8039D59C:
/* 8039D59C 0039A4DC  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 8039D5A0 0039A4E0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8039D5A4 0039A4E4  2C 00 00 00 */	cmpwi r0, 0
/* 8039D5A8 0039A4E8  40 82 01 A4 */	bne .L_8039D74C
/* 8039D5AC 0039A4EC  88 1E 02 3D */	lbz r0, 0x23d(r30)
/* 8039D5B0 0039A4F0  28 00 00 00 */	cmplwi r0, 0
/* 8039D5B4 0039A4F4  40 82 01 98 */	bne .L_8039D74C
/* 8039D5B8 0039A4F8  38 00 00 01 */	li r0, 1
/* 8039D5BC 0039A4FC  38 80 18 07 */	li r4, 0x1807
/* 8039D5C0 0039A500  98 1E 02 3D */	stb r0, 0x23d(r30)
/* 8039D5C4 0039A504  38 A0 00 00 */	li r5, 0
/* 8039D5C8 0039A508  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D5CC 0039A50C  4B F9 B0 65 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039D5D0 0039A510  48 00 01 7C */	b .L_8039D74C
.L_8039D5D4:
/* 8039D5D4 0039A514  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 8039D5D8 0039A518  40 82 00 0C */	bne .L_8039D5E4
/* 8039D5DC 0039A51C  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 8039D5E0 0039A520  41 82 01 6C */	beq .L_8039D74C
.L_8039D5E4:
/* 8039D5E4 0039A524  80 1E 02 44 */	lwz r0, 0x244(r30)
/* 8039D5E8 0039A528  2C 00 00 02 */	cmpwi r0, 2
/* 8039D5EC 0039A52C  41 82 00 10 */	beq .L_8039D5FC
/* 8039D5F0 0039A530  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 8039D5F4 0039A534  48 00 4C 19 */	bl downIndex__Q28Morimura11TIndexGroupFv
/* 8039D5F8 0039A538  48 00 01 54 */	b .L_8039D74C
.L_8039D5FC:
/* 8039D5FC 0039A53C  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 8039D600 0039A540  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8039D604 0039A544  2C 00 00 00 */	cmpwi r0, 0
/* 8039D608 0039A548  40 82 01 44 */	bne .L_8039D74C
/* 8039D60C 0039A54C  88 1E 02 3D */	lbz r0, 0x23d(r30)
/* 8039D610 0039A550  28 00 00 00 */	cmplwi r0, 0
/* 8039D614 0039A554  40 82 01 38 */	bne .L_8039D74C
/* 8039D618 0039A558  38 00 00 01 */	li r0, 1
/* 8039D61C 0039A55C  38 80 18 07 */	li r4, 0x1807
/* 8039D620 0039A560  98 1E 02 3D */	stb r0, 0x23d(r30)
/* 8039D624 0039A564  38 A0 00 00 */	li r5, 0
/* 8039D628 0039A568  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D62C 0039A56C  4B F9 B0 05 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039D630 0039A570  48 00 01 1C */	b .L_8039D74C
.L_8039D634:
/* 8039D634 0039A574  88 0D 99 C2 */	lbz r0, mCanCancel__Q28Morimura9TVsSelect@sda21(r13)
/* 8039D638 0039A578  28 00 00 00 */	cmplwi r0, 0
/* 8039D63C 0039A57C  41 82 01 10 */	beq .L_8039D74C
/* 8039D640 0039A580  80 7E 00 80 */	lwz r3, 0x80(r30)
/* 8039D644 0039A584  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8039D648 0039A588  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8039D64C 0039A58C  41 82 01 00 */	beq .L_8039D74C
/* 8039D650 0039A590  38 00 00 00 */	li r0, 0
/* 8039D654 0039A594  98 0D 99 C2 */	stb r0, mCanCancel__Q28Morimura9TVsSelect@sda21(r13)
/* 8039D658 0039A598  80 1E 02 40 */	lwz r0, 0x240(r30)
/* 8039D65C 0039A59C  2C 00 00 01 */	cmpwi r0, 1
/* 8039D660 0039A5A0  41 82 00 0C */	beq .L_8039D66C
/* 8039D664 0039A5A4  C0 0D 86 30 */	lfs f0, mZoomFrameMax__Q28Morimura9TVsSelect@sda21(r13)
/* 8039D668 0039A5A8  D0 1E 02 50 */	stfs f0, 0x250(r30)
.L_8039D66C:
/* 8039D66C 0039A5AC  38 00 00 02 */	li r0, 2
/* 8039D670 0039A5B0  38 80 18 01 */	li r4, 0x1801
/* 8039D674 0039A5B4  90 1E 02 40 */	stw r0, 0x240(r30)
/* 8039D678 0039A5B8  38 A0 00 00 */	li r5, 0
/* 8039D67C 0039A5BC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D680 0039A5C0  4B F9 AF B1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039D684 0039A5C4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039D688 0039A5C8  38 00 00 02 */	li r0, 2
/* 8039D68C 0039A5CC  7F C5 F3 78 */	mr r5, r30
/* 8039D690 0039A5D0  C0 62 0E E4 */	lfs f3, lbl_8051F244@sda21(r2)
/* 8039D694 0039A5D4  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8039D698 0039A5D8  C0 42 0E 10 */	lfs f2, lbl_8051F170@sda21(r2)
/* 8039D69C 0039A5DC  C0 22 0E 54 */	lfs f1, lbl_8051F1B4@sda21(r2)
/* 8039D6A0 0039A5E0  7C 09 03 A6 */	mtctr r0
.L_8039D6A4:
/* 8039D6A4 0039A5E4  80 C5 01 E8 */	lwz r6, 0x1e8(r5)
/* 8039D6A8 0039A5E8  C0 86 00 2C */	lfs f4, 0x2c(r6)
/* 8039D6AC 0039A5EC  C0 A6 00 0C */	lfs f5, 0xc(r6)
/* 8039D6B0 0039A5F0  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 8039D6B4 0039A5F4  C0 C6 00 10 */	lfs f6, 0x10(r6)
/* 8039D6B8 0039A5F8  40 80 00 30 */	bge .L_8039D6E8
/* 8039D6BC 0039A5FC  C0 02 0E 50 */	lfs f0, lbl_8051F1B0@sda21(r2)
/* 8039D6C0 0039A600  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039D6C4 0039A604  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039D6C8 0039A608  EC 04 00 32 */	fmuls f0, f4, f0
/* 8039D6CC 0039A60C  FC 00 00 1E */	fctiwz f0, f0
/* 8039D6D0 0039A610  D8 01 00 A8 */	stfd f0, 0xa8(r1)
/* 8039D6D4 0039A614  80 01 00 AC */	lwz r0, 0xac(r1)
/* 8039D6D8 0039A618  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039D6DC 0039A61C  7C 03 04 2E */	lfsx f0, r3, r0
/* 8039D6E0 0039A620  FC 00 00 50 */	fneg f0, f0
/* 8039D6E4 0039A624  48 00 00 28 */	b .L_8039D70C
.L_8039D6E8:
/* 8039D6E8 0039A628  C0 02 0E 54 */	lfs f0, lbl_8051F1B4@sda21(r2)
/* 8039D6EC 0039A62C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039D6F0 0039A630  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039D6F4 0039A634  EC 04 00 32 */	fmuls f0, f4, f0
/* 8039D6F8 0039A638  FC 00 00 1E */	fctiwz f0, f0
/* 8039D6FC 0039A63C  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 8039D700 0039A640  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8039D704 0039A644  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039D708 0039A648  7C 03 04 2E */	lfsx f0, r3, r0
.L_8039D70C:
/* 8039D70C 0039A64C  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 8039D710 0039A650  EC A3 28 3A */	fmadds f5, f3, f0, f5
/* 8039D714 0039A654  40 80 00 08 */	bge .L_8039D71C
/* 8039D718 0039A658  FC 80 20 50 */	fneg f4, f4
.L_8039D71C:
/* 8039D71C 0039A65C  EC 04 00 72 */	fmuls f0, f4, f1
/* 8039D720 0039A660  38 A5 00 04 */	addi r5, r5, 4
/* 8039D724 0039A664  FC 00 00 1E */	fctiwz f0, f0
/* 8039D728 0039A668  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 8039D72C 0039A66C  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 8039D730 0039A670  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039D734 0039A674  7C 64 02 14 */	add r3, r4, r0
/* 8039D738 0039A678  C0 03 00 04 */	lfs f0, 4(r3)
/* 8039D73C 0039A67C  EC C3 30 3A */	fmadds f6, f3, f0, f6
/* 8039D740 0039A680  D0 A6 00 14 */	stfs f5, 0x14(r6)
/* 8039D744 0039A684  D0 C6 00 18 */	stfs f6, 0x18(r6)
/* 8039D748 0039A688  42 00 FF 5C */	bdnz .L_8039D6A4
.L_8039D74C:
/* 8039D74C 0039A68C  80 1E 02 74 */	lwz r0, 0x274(r30)
/* 8039D750 0039A690  1C 00 00 05 */	mulli r0, r0, 5
/* 8039D754 0039A694  90 1E 02 7C */	stw r0, 0x27c(r30)
/* 8039D758 0039A698  80 1E 02 78 */	lwz r0, 0x278(r30)
/* 8039D75C 0039A69C  1C 00 00 05 */	mulli r0, r0, 5
/* 8039D760 0039A6A0  90 1E 02 80 */	stw r0, 0x280(r30)
/* 8039D764 0039A6A4  88 7E 02 3D */	lbz r3, 0x23d(r30)
/* 8039D768 0039A6A8  28 03 00 00 */	cmplwi r3, 0
/* 8039D76C 0039A6AC  41 82 00 20 */	beq .L_8039D78C
/* 8039D770 0039A6B0  38 03 00 01 */	addi r0, r3, 1
/* 8039D774 0039A6B4  98 1E 02 3D */	stb r0, 0x23d(r30)
/* 8039D778 0039A6B8  88 1E 02 3D */	lbz r0, 0x23d(r30)
/* 8039D77C 0039A6BC  28 00 00 0F */	cmplwi r0, 0xf
/* 8039D780 0039A6C0  40 81 00 0C */	ble .L_8039D78C
/* 8039D784 0039A6C4  38 00 00 00 */	li r0, 0
/* 8039D788 0039A6C8  98 1E 02 3D */	stb r0, 0x23d(r30)
.L_8039D78C:
/* 8039D78C 0039A6CC  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 8039D790 0039A6D0  80 03 00 34 */	lwz r0, 0x34(r3)
/* 8039D794 0039A6D4  2C 00 00 01 */	cmpwi r0, 1
/* 8039D798 0039A6D8  41 82 00 50 */	beq .L_8039D7E8
/* 8039D79C 0039A6DC  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8039D7A0 0039A6E0  80 03 00 08 */	lwz r0, 8(r3)
/* 8039D7A4 0039A6E4  2C 00 00 01 */	cmpwi r0, 1
/* 8039D7A8 0039A6E8  40 82 00 40 */	bne .L_8039D7E8
/* 8039D7AC 0039A6EC  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039D7B0 0039A6F0  28 00 00 00 */	cmplwi r0, 0
/* 8039D7B4 0039A6F4  40 82 00 34 */	bne .L_8039D7E8
/* 8039D7B8 0039A6F8  38 60 00 00 */	li r3, 0
/* 8039D7BC 0039A6FC  38 00 00 01 */	li r0, 1
/* 8039D7C0 0039A700  98 7E 02 28 */	stb r3, 0x228(r30)
/* 8039D7C4 0039A704  7F C3 F3 78 */	mr r3, r30
/* 8039D7C8 0039A708  80 9E 01 F8 */	lwz r4, 0x1f8(r30)
/* 8039D7CC 0039A70C  90 04 00 34 */	stw r0, 0x34(r4)
/* 8039D7D0 0039A710  81 9E 00 00 */	lwz r12, 0(r30)
/* 8039D7D4 0039A714  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8039D7D8 0039A718  7D 89 03 A6 */	mtctr r12
/* 8039D7DC 0039A71C  4E 80 04 21 */	bctrl 
/* 8039D7E0 0039A720  38 80 00 00 */	li r4, 0
/* 8039D7E4 0039A724  48 0B 47 AD */	bl endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
.L_8039D7E8:
/* 8039D7E8 0039A728  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8039D7EC 0039A72C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039D7F0 0039A730  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8039D7F4 0039A734  7D 89 03 A6 */	mtctr r12
/* 8039D7F8 0039A738  4E 80 04 21 */	bctrl 
/* 8039D7FC 0039A73C  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8039D800 0039A740  81 83 00 00 */	lwz r12, 0(r3)
/* 8039D804 0039A744  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8039D808 0039A748  7D 89 03 A6 */	mtctr r12
/* 8039D80C 0039A74C  4E 80 04 21 */	bctrl 
/* 8039D810 0039A750  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 8039D814 0039A754  81 83 00 00 */	lwz r12, 0(r3)
/* 8039D818 0039A758  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8039D81C 0039A75C  7D 89 03 A6 */	mtctr r12
/* 8039D820 0039A760  4E 80 04 21 */	bctrl 
/* 8039D824 0039A764  80 7E 00 D4 */	lwz r3, 0xd4(r30)
/* 8039D828 0039A768  81 83 00 00 */	lwz r12, 0(r3)
/* 8039D82C 0039A76C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8039D830 0039A770  7D 89 03 A6 */	mtctr r12
/* 8039D834 0039A774  4E 80 04 21 */	bctrl 
/* 8039D838 0039A778  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 8039D83C 0039A77C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039D840 0039A780  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8039D844 0039A784  7D 89 03 A6 */	mtctr r12
/* 8039D848 0039A788  4E 80 04 21 */	bctrl 
/* 8039D84C 0039A78C  80 7E 00 C8 */	lwz r3, 0xc8(r30)
/* 8039D850 0039A790  81 83 00 00 */	lwz r12, 0(r3)
/* 8039D854 0039A794  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8039D858 0039A798  7D 89 03 A6 */	mtctr r12
/* 8039D85C 0039A79C  4E 80 04 21 */	bctrl 
/* 8039D860 0039A7A0  80 7E 00 D0 */	lwz r3, 0xd0(r30)
/* 8039D864 0039A7A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8039D868 0039A7A8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8039D86C 0039A7AC  7D 89 03 A6 */	mtctr r12
/* 8039D870 0039A7B0  4E 80 04 21 */	bctrl 
/* 8039D874 0039A7B4  7F C3 F3 78 */	mr r3, r30
/* 8039D878 0039A7B8  48 00 59 D5 */	bl updateList__Q28Morimura11TScrollListFv
/* 8039D87C 0039A7BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8039D880 0039A7C0  41 82 00 28 */	beq .L_8039D8A8
/* 8039D884 0039A7C4  7F C3 F3 78 */	mr r3, r30
/* 8039D888 0039A7C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8039D88C 0039A7CC  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8039D890 0039A7D0  7D 89 03 A6 */	mtctr r12
/* 8039D894 0039A7D4  4E 80 04 21 */	bctrl 
/* 8039D898 0039A7D8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039D89C 0039A7DC  38 80 18 02 */	li r4, 0x1802
/* 8039D8A0 0039A7E0  38 A0 00 00 */	li r5, 0
/* 8039D8A4 0039A7E4  4B F9 AD 8D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8039D8A8:
/* 8039D8A8 0039A7E8  80 1E 02 40 */	lwz r0, 0x240(r30)
/* 8039D8AC 0039A7EC  2C 00 00 03 */	cmpwi r0, 3
/* 8039D8B0 0039A7F0  41 82 00 28 */	beq .L_8039D8D8
/* 8039D8B4 0039A7F4  40 80 00 38 */	bge .L_8039D8EC
/* 8039D8B8 0039A7F8  2C 00 00 01 */	cmpwi r0, 1
/* 8039D8BC 0039A7FC  40 80 00 08 */	bge .L_8039D8C4
/* 8039D8C0 0039A800  48 00 00 2C */	b .L_8039D8EC
.L_8039D8C4:
/* 8039D8C4 0039A804  7F C3 F3 78 */	mr r3, r30
/* 8039D8C8 0039A808  48 00 21 F9 */	bl doZoom__Q28Morimura9TVsSelectFv
/* 8039D8CC 0039A80C  7F C3 F3 78 */	mr r3, r30
/* 8039D8D0 0039A810  48 00 23 E5 */	bl doMoveOnyon__Q28Morimura9TVsSelectFv
/* 8039D8D4 0039A814  48 00 02 D4 */	b .L_8039DBA8
.L_8039D8D8:
/* 8039D8D8 0039A818  7F C3 F3 78 */	mr r3, r30
/* 8039D8DC 0039A81C  48 00 23 D9 */	bl doMoveOnyon__Q28Morimura9TVsSelectFv
/* 8039D8E0 0039A820  7F C3 F3 78 */	mr r3, r30
/* 8039D8E4 0039A824  48 00 24 3D */	bl doScreenEffect__Q28Morimura9TVsSelectFv
/* 8039D8E8 0039A828  48 00 02 C0 */	b .L_8039DBA8
.L_8039D8EC:
/* 8039D8EC 0039A82C  C0 3E 02 50 */	lfs f1, 0x250(r30)
/* 8039D8F0 0039A830  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 8039D8F4 0039A834  EC 01 00 2A */	fadds f0, f1, f0
/* 8039D8F8 0039A838  D0 1E 02 50 */	stfs f0, 0x250(r30)
/* 8039D8FC 0039A83C  88 1E 02 2B */	lbz r0, 0x22b(r30)
/* 8039D900 0039A840  28 00 00 00 */	cmplwi r0, 0
/* 8039D904 0039A844  41 82 02 80 */	beq .L_8039DB84
/* 8039D908 0039A848  C0 22 0E E8 */	lfs f1, lbl_8051F248@sda21(r2)
/* 8039D90C 0039A84C  C0 1E 02 50 */	lfs f0, 0x250(r30)
/* 8039D910 0039A850  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8039D914 0039A854  40 82 02 70 */	bne .L_8039DB84
/* 8039D918 0039A858  38 00 00 00 */	li r0, 0
/* 8039D91C 0039A85C  98 1E 02 2B */	stb r0, 0x22b(r30)
/* 8039D920 0039A860  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 8039D924 0039A864  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 8039D928 0039A868  2C 00 00 00 */	cmpwi r0, 0
/* 8039D92C 0039A86C  40 82 01 28 */	bne .L_8039DA54
/* 8039D930 0039A870  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8039D934 0039A874  38 00 00 01 */	li r0, 1
/* 8039D938 0039A878  C0 02 0E BC */	lfs f0, lbl_8051F21C@sda21(r2)
/* 8039D93C 0039A87C  90 7E 02 84 */	stw r3, 0x284(r30)
/* 8039D940 0039A880  80 7E 02 10 */	lwz r3, 0x210(r30)
/* 8039D944 0039A884  98 03 00 AC */	stb r0, 0xac(r3)
/* 8039D948 0039A888  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 8039D94C 0039A88C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8039D950 0039A890  2C 00 00 64 */	cmpwi r0, 0x64
/* 8039D954 0039A894  41 80 00 0C */	blt .L_8039D960
/* 8039D958 0039A898  C0 02 0E C0 */	lfs f0, lbl_8051F220@sda21(r2)
/* 8039D95C 0039A89C  48 00 00 10 */	b .L_8039D96C
.L_8039D960:
/* 8039D960 0039A8A0  2C 00 00 0A */	cmpwi r0, 0xa
/* 8039D964 0039A8A4  41 80 00 08 */	blt .L_8039D96C
/* 8039D968 0039A8A8  C0 02 0E 8C */	lfs f0, lbl_8051F1EC@sda21(r2)
.L_8039D96C:
/* 8039D96C 0039A8AC  80 9E 02 00 */	lwz r4, 0x200(r30)
/* 8039D970 0039A8B0  3C 60 72 69 */	lis r3, 0x72695F63@ha
/* 8039D974 0039A8B4  38 C3 5F 63 */	addi r6, r3, 0x72695F63@l
/* 8039D978 0039A8B8  38 A0 50 6F */	li r5, 0x506f
/* 8039D97C 0039A8BC  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 8039D980 0039A8C0  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 8039D984 0039A8C4  80 63 00 08 */	lwz r3, 8(r3)
/* 8039D988 0039A8C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039D98C 0039A8CC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039D990 0039A8D0  7D 89 03 A6 */	mtctr r12
/* 8039D994 0039A8D4  4E 80 04 21 */	bctrl 
/* 8039D998 0039A8D8  38 80 00 04 */	li r4, 4
/* 8039D99C 0039A8DC  7C 7C 1B 78 */	mr r28, r3
/* 8039D9A0 0039A8E0  4B C9 B3 1D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039D9A4 0039A8E4  7F 84 E3 78 */	mr r4, r28
/* 8039D9A8 0039A8E8  38 61 00 74 */	addi r3, r1, 0x74
/* 8039D9AC 0039A8EC  38 A0 00 00 */	li r5, 0
/* 8039D9B0 0039A8F0  4B C9 B5 E9 */	bl getGlbVtx__7J2DPaneCFUc
/* 8039D9B4 0039A8F4  C0 3C 00 28 */	lfs f1, 0x28(r28)
/* 8039D9B8 0039A8F8  7F 84 E3 78 */	mr r4, r28
/* 8039D9BC 0039A8FC  C0 1C 00 20 */	lfs f0, 0x20(r28)
/* 8039D9C0 0039A900  38 61 00 68 */	addi r3, r1, 0x68
/* 8039D9C4 0039A904  C0 41 00 74 */	lfs f2, 0x74(r1)
/* 8039D9C8 0039A908  38 A0 00 00 */	li r5, 0
/* 8039D9CC 0039A90C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8039D9D0 0039A910  C0 22 0E 28 */	lfs f1, lbl_8051F188@sda21(r2)
/* 8039D9D4 0039A914  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8039D9D8 0039A918  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8039D9DC 0039A91C  4B C9 B5 BD */	bl getGlbVtx__7J2DPaneCFUc
/* 8039D9E0 0039A920  C0 3C 00 2C */	lfs f1, 0x2c(r28)
/* 8039D9E4 0039A924  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 8039D9E8 0039A928  C0 1C 00 24 */	lfs f0, 0x24(r28)
/* 8039D9EC 0039A92C  38 03 15 14 */	addi r0, r3, __vt__Q25efx2d3Arg@l
/* 8039D9F0 0039A930  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8039D9F4 0039A934  38 81 00 9C */	addi r4, r1, 0x9c
/* 8039D9F8 0039A938  EC 01 00 28 */	fsubs f0, f1, f0
/* 8039D9FC 0039A93C  C0 41 00 6C */	lfs f2, 0x6c(r1)
/* 8039DA00 0039A940  C0 22 0E 28 */	lfs f1, lbl_8051F188@sda21(r2)
/* 8039DA04 0039A944  90 61 00 10 */	stw r3, 0x10(r1)
/* 8039DA08 0039A948  EC 21 10 3A */	fmadds f1, f1, f0, f2
/* 8039DA0C 0039A94C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8039DA10 0039A950  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8039DA14 0039A954  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8039DA18 0039A958  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8039DA1C 0039A95C  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 8039DA20 0039A960  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039DA24 0039A964  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8039DA28 0039A968  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 8039DA2C 0039A96C  80 7E 02 00 */	lwz r3, 0x200(r30)
/* 8039DA30 0039A970  81 83 00 00 */	lwz r12, 0(r3)
/* 8039DA34 0039A974  81 8C 00 08 */	lwz r12, 8(r12)
/* 8039DA38 0039A978  7D 89 03 A6 */	mtctr r12
/* 8039DA3C 0039A97C  4E 80 04 21 */	bctrl 
/* 8039DA40 0039A980  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039DA44 0039A984  38 80 18 73 */	li r4, 0x1873
/* 8039DA48 0039A988  38 A0 00 00 */	li r5, 0
/* 8039DA4C 0039A98C  4B F9 AB E5 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039DA50 0039A990  48 00 01 2C */	b .L_8039DB7C
.L_8039DA54:
/* 8039DA54 0039A994  2C 00 00 01 */	cmpwi r0, 1
/* 8039DA58 0039A998  40 82 01 24 */	bne .L_8039DB7C
/* 8039DA5C 0039A99C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8039DA60 0039A9A0  38 00 00 01 */	li r0, 1
/* 8039DA64 0039A9A4  C0 02 0E BC */	lfs f0, lbl_8051F21C@sda21(r2)
/* 8039DA68 0039A9A8  90 7E 02 88 */	stw r3, 0x288(r30)
/* 8039DA6C 0039A9AC  80 7E 02 14 */	lwz r3, 0x214(r30)
/* 8039DA70 0039A9B0  98 03 00 AC */	stb r0, 0xac(r3)
/* 8039DA74 0039A9B4  80 7E 01 F8 */	lwz r3, 0x1f8(r30)
/* 8039DA78 0039A9B8  80 03 00 28 */	lwz r0, 0x28(r3)
/* 8039DA7C 0039A9BC  2C 00 00 64 */	cmpwi r0, 0x64
/* 8039DA80 0039A9C0  41 80 00 0C */	blt .L_8039DA8C
/* 8039DA84 0039A9C4  C0 02 0E C0 */	lfs f0, lbl_8051F220@sda21(r2)
/* 8039DA88 0039A9C8  48 00 00 10 */	b .L_8039DA98
.L_8039DA8C:
/* 8039DA8C 0039A9CC  2C 00 00 0A */	cmpwi r0, 0xa
/* 8039DA90 0039A9D0  41 80 00 08 */	blt .L_8039DA98
/* 8039DA94 0039A9D4  C0 02 0E 8C */	lfs f0, lbl_8051F1EC@sda21(r2)
.L_8039DA98:
/* 8039DA98 0039A9D8  80 9E 02 00 */	lwz r4, 0x200(r30)
/* 8039DA9C 0039A9DC  3C 60 75 69 */	lis r3, 0x75695F63@ha
/* 8039DAA0 0039A9E0  38 C3 5F 63 */	addi r6, r3, 0x75695F63@l
/* 8039DAA4 0039A9E4  38 A0 50 6C */	li r5, 0x506c
/* 8039DAA8 0039A9E8  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 8039DAAC 0039A9EC  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 8039DAB0 0039A9F0  80 63 00 08 */	lwz r3, 8(r3)
/* 8039DAB4 0039A9F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8039DAB8 0039A9F8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039DABC 0039A9FC  7D 89 03 A6 */	mtctr r12
/* 8039DAC0 0039AA00  4E 80 04 21 */	bctrl 
/* 8039DAC4 0039AA04  38 80 00 04 */	li r4, 4
/* 8039DAC8 0039AA08  7C 7C 1B 78 */	mr r28, r3
/* 8039DACC 0039AA0C  4B C9 B1 F1 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039DAD0 0039AA10  7F 84 E3 78 */	mr r4, r28
/* 8039DAD4 0039AA14  38 61 00 5C */	addi r3, r1, 0x5c
/* 8039DAD8 0039AA18  38 A0 00 00 */	li r5, 0
/* 8039DADC 0039AA1C  4B C9 B4 BD */	bl getGlbVtx__7J2DPaneCFUc
/* 8039DAE0 0039AA20  C0 3C 00 28 */	lfs f1, 0x28(r28)
/* 8039DAE4 0039AA24  7F 84 E3 78 */	mr r4, r28
/* 8039DAE8 0039AA28  C0 1C 00 20 */	lfs f0, 0x20(r28)
/* 8039DAEC 0039AA2C  38 61 00 50 */	addi r3, r1, 0x50
/* 8039DAF0 0039AA30  C0 41 00 5C */	lfs f2, 0x5c(r1)
/* 8039DAF4 0039AA34  38 A0 00 00 */	li r5, 0
/* 8039DAF8 0039AA38  EC 01 00 28 */	fsubs f0, f1, f0
/* 8039DAFC 0039AA3C  C0 22 0E 28 */	lfs f1, lbl_8051F188@sda21(r2)
/* 8039DB00 0039AA40  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8039DB04 0039AA44  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8039DB08 0039AA48  4B C9 B4 91 */	bl getGlbVtx__7J2DPaneCFUc
/* 8039DB0C 0039AA4C  C0 3C 00 2C */	lfs f1, 0x2c(r28)
/* 8039DB10 0039AA50  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 8039DB14 0039AA54  C0 1C 00 24 */	lfs f0, 0x24(r28)
/* 8039DB18 0039AA58  38 03 15 14 */	addi r0, r3, __vt__Q25efx2d3Arg@l
/* 8039DB1C 0039AA5C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8039DB20 0039AA60  38 81 00 90 */	addi r4, r1, 0x90
/* 8039DB24 0039AA64  EC 01 00 28 */	fsubs f0, f1, f0
/* 8039DB28 0039AA68  C0 41 00 54 */	lfs f2, 0x54(r1)
/* 8039DB2C 0039AA6C  C0 22 0E 28 */	lfs f1, lbl_8051F188@sda21(r2)
/* 8039DB30 0039AA70  90 61 00 08 */	stw r3, 8(r1)
/* 8039DB34 0039AA74  EC 21 10 3A */	fmadds f1, f1, f0, f2
/* 8039DB38 0039AA78  C0 01 00 08 */	lfs f0, 8(r1)
/* 8039DB3C 0039AA7C  90 01 00 98 */	stw r0, 0x98(r1)
/* 8039DB40 0039AA80  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8039DB44 0039AA84  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8039DB48 0039AA88  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 8039DB4C 0039AA8C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8039DB50 0039AA90  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8039DB54 0039AA94  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 8039DB58 0039AA98  80 7E 02 00 */	lwz r3, 0x200(r30)
/* 8039DB5C 0039AA9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039DB60 0039AAA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8039DB64 0039AAA4  7D 89 03 A6 */	mtctr r12
/* 8039DB68 0039AAA8  4E 80 04 21 */	bctrl 
/* 8039DB6C 0039AAAC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039DB70 0039AAB0  38 80 18 73 */	li r4, 0x1873
/* 8039DB74 0039AAB4  38 A0 00 00 */	li r5, 0
/* 8039DB78 0039AAB8  4B F9 AA B9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8039DB7C:
/* 8039DB7C 0039AABC  7F C3 F3 78 */	mr r3, r30
/* 8039DB80 0039AAC0  48 00 2D D5 */	bl changeFaceTexture__Q28Morimura9TVsSelectFv
.L_8039DB84:
/* 8039DB84 0039AAC4  C0 3E 02 50 */	lfs f1, 0x250(r30)
/* 8039DB88 0039AAC8  C0 02 0E EC */	lfs f0, lbl_8051F24C@sda21(r2)
/* 8039DB8C 0039AACC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039DB90 0039AAD0  40 81 00 18 */	ble .L_8039DBA8
/* 8039DB94 0039AAD4  80 7E 02 00 */	lwz r3, 0x200(r30)
/* 8039DB98 0039AAD8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039DB9C 0039AADC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039DBA0 0039AAE0  7D 89 03 A6 */	mtctr r12
/* 8039DBA4 0039AAE4  4E 80 04 21 */	bctrl 
.L_8039DBA8:
/* 8039DBA8 0039AAE8  C0 1E 02 6C */	lfs f0, 0x26c(r30)
/* 8039DBAC 0039AAEC  C0 A2 24 3C */	lfs f5, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 8039DBB0 0039AAF0  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8039DBB4 0039AAF4  EC 60 28 2A */	fadds f3, f0, f5
/* 8039DBB8 0039AAF8  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 8039DBBC 0039AAFC  C0 02 24 40 */	lfs f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 8039DBC0 0039AB00  80 63 00 08 */	lwz r3, 8(r3)
/* 8039DBC4 0039AB04  EC 41 00 2A */	fadds f2, f1, f0
/* 8039DBC8 0039AB08  C0 82 24 34 */	lfs f4, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 8039DBCC 0039AB0C  D0 63 01 40 */	stfs f3, 0x140(r3)
/* 8039DBD0 0039AB10  C0 62 24 38 */	lfs f3, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 8039DBD4 0039AB14  D0 43 01 44 */	stfs f2, 0x144(r3)
/* 8039DBD8 0039AB18  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 8039DBDC 0039AB1C  C0 3E 02 6C */	lfs f1, 0x26c(r30)
/* 8039DBE0 0039AB20  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 8039DBE4 0039AB24  EC 21 28 2A */	fadds f1, f1, f5
/* 8039DBE8 0039AB28  80 63 00 08 */	lwz r3, 8(r3)
/* 8039DBEC 0039AB2C  D0 23 01 40 */	stfs f1, 0x140(r3)
/* 8039DBF0 0039AB30  D0 43 01 44 */	stfs f2, 0x144(r3)
/* 8039DBF4 0039AB34  C0 3E 02 6C */	lfs f1, 0x26c(r30)
/* 8039DBF8 0039AB38  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8039DBFC 0039AB3C  EC 21 28 2A */	fadds f1, f1, f5
/* 8039DC00 0039AB40  80 63 00 08 */	lwz r3, 8(r3)
/* 8039DC04 0039AB44  D0 23 01 40 */	stfs f1, 0x140(r3)
/* 8039DC08 0039AB48  D0 43 01 44 */	stfs f2, 0x144(r3)
/* 8039DC0C 0039AB4C  C0 3E 02 6C */	lfs f1, 0x26c(r30)
/* 8039DC10 0039AB50  80 7E 00 D0 */	lwz r3, 0xd0(r30)
/* 8039DC14 0039AB54  EC 21 28 2A */	fadds f1, f1, f5
/* 8039DC18 0039AB58  80 63 00 08 */	lwz r3, 8(r3)
/* 8039DC1C 0039AB5C  D0 23 01 40 */	stfs f1, 0x140(r3)
/* 8039DC20 0039AB60  D0 43 01 44 */	stfs f2, 0x144(r3)
/* 8039DC24 0039AB64  C0 2D 86 44 */	lfs f1, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
/* 8039DC28 0039AB68  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8039DC2C 0039AB6C  EC 41 01 32 */	fmuls f2, f1, f4
/* 8039DC30 0039AB70  80 63 00 08 */	lwz r3, 8(r3)
/* 8039DC34 0039AB74  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8039DC38 0039AB78  D0 43 01 38 */	stfs f2, 0x138(r3)
/* 8039DC3C 0039AB7C  D0 23 01 3C */	stfs f1, 0x13c(r3)
/* 8039DC40 0039AB80  C0 2D 86 44 */	lfs f1, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
/* 8039DC44 0039AB84  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 8039DC48 0039AB88  EC 41 01 32 */	fmuls f2, f1, f4
/* 8039DC4C 0039AB8C  80 63 00 08 */	lwz r3, 8(r3)
/* 8039DC50 0039AB90  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8039DC54 0039AB94  D0 43 01 38 */	stfs f2, 0x138(r3)
/* 8039DC58 0039AB98  D0 23 01 3C */	stfs f1, 0x13c(r3)
/* 8039DC5C 0039AB9C  C0 2D 86 44 */	lfs f1, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
/* 8039DC60 0039ABA0  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8039DC64 0039ABA4  EC 41 01 32 */	fmuls f2, f1, f4
/* 8039DC68 0039ABA8  80 63 00 08 */	lwz r3, 8(r3)
/* 8039DC6C 0039ABAC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8039DC70 0039ABB0  D0 43 01 38 */	stfs f2, 0x138(r3)
/* 8039DC74 0039ABB4  D0 23 01 3C */	stfs f1, 0x13c(r3)
/* 8039DC78 0039ABB8  C0 2D 86 44 */	lfs f1, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
/* 8039DC7C 0039ABBC  80 7E 00 D0 */	lwz r3, 0xd0(r30)
/* 8039DC80 0039ABC0  EC 41 01 32 */	fmuls f2, f1, f4
/* 8039DC84 0039ABC4  80 63 00 08 */	lwz r3, 8(r3)
/* 8039DC88 0039ABC8  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8039DC8C 0039ABCC  D0 43 01 38 */	stfs f2, 0x138(r3)
/* 8039DC90 0039ABD0  D0 23 01 3C */	stfs f1, 0x13c(r3)
/* 8039DC94 0039ABD4  C0 4D 86 44 */	lfs f2, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
/* 8039DC98 0039ABD8  C0 3E 02 6C */	lfs f1, 0x26c(r30)
/* 8039DC9C 0039ABDC  EC 60 10 24 */	fdivs f3, f0, f2
/* 8039DCA0 0039ABE0  80 7E 00 E0 */	lwz r3, 0xe0(r30)
/* 8039DCA4 0039ABE4  FC 00 08 50 */	fneg f0, f1
/* 8039DCA8 0039ABE8  D0 63 00 CC */	stfs f3, 0xcc(r3)
/* 8039DCAC 0039ABEC  D0 63 00 D0 */	stfs f3, 0xd0(r3)
/* 8039DCB0 0039ABF0  EF C0 10 24 */	fdivs f30, f0, f2
/* 8039DCB4 0039ABF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8039DCB8 0039ABF8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039DCBC 0039ABFC  7D 89 03 A6 */	mtctr r12
/* 8039DCC0 0039AC00  4E 80 04 21 */	bctrl 
/* 8039DCC4 0039AC04  C0 82 0E 20 */	lfs f4, lbl_8051F180@sda21(r2)
/* 8039DCC8 0039AC08  C0 0D 86 44 */	lfs f0, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
/* 8039DCCC 0039AC0C  C0 22 0E FC */	lfs f1, lbl_8051F25C@sda21(r2)
/* 8039DCD0 0039AC10  EC 64 00 24 */	fdivs f3, f4, f0
/* 8039DCD4 0039AC14  C0 02 0E F8 */	lfs f0, lbl_8051F258@sda21(r2)
/* 8039DCD8 0039AC18  C0 A2 0E F4 */	lfs f5, lbl_8051F254@sda21(r2)
/* 8039DCDC 0039AC1C  C0 42 0E F0 */	lfs f2, lbl_8051F250@sda21(r2)
/* 8039DCE0 0039AC20  80 7E 00 E0 */	lwz r3, 0xe0(r30)
/* 8039DCE4 0039AC24  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 8039DCE8 0039AC28  EC 64 18 28 */	fsubs f3, f4, f3
/* 8039DCEC 0039AC2C  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8039DCF0 0039AC30  EC 25 10 FC */	fnmsubs f1, f5, f3, f2
/* 8039DCF4 0039AC34  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8039DCF8 0039AC38  81 83 00 00 */	lwz r12, 0(r3)
/* 8039DCFC 0039AC3C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039DD00 0039AC40  7D 89 03 A6 */	mtctr r12
/* 8039DD04 0039AC44  4E 80 04 21 */	bctrl 
/* 8039DD08 0039AC48  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 8039DD0C 0039AC4C  C0 82 0E 10 */	lfs f4, lbl_8051F170@sda21(r2)
/* 8039DD10 0039AC50  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8039DD14 0039AC54  20 03 00 01 */	subfic r0, r3, 1
/* 8039DD18 0039AC58  7C 00 00 34 */	cntlzw r0, r0
/* 8039DD1C 0039AC5C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 8039DD20 0039AC60  41 82 00 08 */	beq .L_8039DD28
/* 8039DD24 0039AC64  C0 82 0E 94 */	lfs f4, lbl_8051F1F4@sda21(r2)
.L_8039DD28:
/* 8039DD28 0039AC68  2C 03 00 02 */	cmpwi r3, 2
/* 8039DD2C 0039AC6C  40 82 00 08 */	bne .L_8039DD34
/* 8039DD30 0039AC70  C0 82 0E 88 */	lfs f4, lbl_8051F1E8@sda21(r2)
.L_8039DD34:
/* 8039DD34 0039AC74  C0 5E 02 30 */	lfs f2, 0x230(r30)
/* 8039DD38 0039AC78  C0 62 0E D8 */	lfs f3, lbl_8051F238@sda21(r2)
/* 8039DD3C 0039AC7C  EC 24 10 28 */	fsubs f1, f4, f2
/* 8039DD40 0039AC80  C0 02 0E 78 */	lfs f0, lbl_8051F1D8@sda21(r2)
/* 8039DD44 0039AC84  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 8039DD48 0039AC88  D0 3E 02 30 */	stfs f1, 0x230(r30)
/* 8039DD4C 0039AC8C  C0 3E 02 30 */	lfs f1, 0x230(r30)
/* 8039DD50 0039AC90  EC 21 20 28 */	fsubs f1, f1, f4
/* 8039DD54 0039AC94  FC 20 0A 10 */	fabs f1, f1
/* 8039DD58 0039AC98  FC 20 08 18 */	frsp f1, f1
/* 8039DD5C 0039AC9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039DD60 0039ACA0  40 80 00 08 */	bge .L_8039DD68
/* 8039DD64 0039ACA4  D0 9E 02 30 */	stfs f4, 0x230(r30)
.L_8039DD68:
/* 8039DD68 0039ACA8  C0 42 0F 00 */	lfs f2, lbl_8051F260@sda21(r2)
/* 8039DD6C 0039ACAC  C0 3E 02 30 */	lfs f1, 0x230(r30)
/* 8039DD70 0039ACB0  80 7E 00 F0 */	lwz r3, 0xf0(r30)
/* 8039DD74 0039ACB4  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039DD78 0039ACB8  EC 22 08 2A */	fadds f1, f2, f1
/* 8039DD7C 0039ACBC  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8039DD80 0039ACC0  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8039DD84 0039ACC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8039DD88 0039ACC8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039DD8C 0039ACCC  7D 89 03 A6 */	mtctr r12
/* 8039DD90 0039ACD0  4E 80 04 21 */	bctrl 
/* 8039DD94 0039ACD4  C0 3E 02 F8 */	lfs f1, 0x2f8(r30)
/* 8039DD98 0039ACD8  C0 1E 03 08 */	lfs f0, 0x308(r30)
/* 8039DD9C 0039ACDC  C0 7E 02 FC */	lfs f3, 0x2fc(r30)
/* 8039DDA0 0039ACE0  C0 5E 03 0C */	lfs f2, 0x30c(r30)
/* 8039DDA4 0039ACE4  EC 01 00 2A */	fadds f0, f1, f0
/* 8039DDA8 0039ACE8  80 7E 01 00 */	lwz r3, 0x100(r30)
/* 8039DDAC 0039ACEC  EC 23 10 2A */	fadds f1, f3, f2
/* 8039DDB0 0039ACF0  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8039DDB4 0039ACF4  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8039DDB8 0039ACF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039DDBC 0039ACFC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039DDC0 0039AD00  7D 89 03 A6 */	mtctr r12
/* 8039DDC4 0039AD04  4E 80 04 21 */	bctrl 
/* 8039DDC8 0039AD08  C0 3E 03 00 */	lfs f1, 0x300(r30)
/* 8039DDCC 0039AD0C  C0 1E 03 10 */	lfs f0, 0x310(r30)
/* 8039DDD0 0039AD10  C0 7E 03 04 */	lfs f3, 0x304(r30)
/* 8039DDD4 0039AD14  C0 5E 03 14 */	lfs f2, 0x314(r30)
/* 8039DDD8 0039AD18  EC 01 00 2A */	fadds f0, f1, f0
/* 8039DDDC 0039AD1C  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8039DDE0 0039AD20  EC 23 10 2A */	fadds f1, f3, f2
/* 8039DDE4 0039AD24  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8039DDE8 0039AD28  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8039DDEC 0039AD2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039DDF0 0039AD30  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039DDF4 0039AD34  7D 89 03 A6 */	mtctr r12
/* 8039DDF8 0039AD38  4E 80 04 21 */	bctrl 
/* 8039DDFC 0039AD3C  88 1E 02 2D */	lbz r0, 0x22d(r30)
/* 8039DE00 0039AD40  28 00 00 00 */	cmplwi r0, 0
/* 8039DE04 0039AD44  41 82 01 A0 */	beq .L_8039DFA4
/* 8039DE08 0039AD48  C0 5E 02 60 */	lfs f2, 0x260(r30)
/* 8039DE0C 0039AD4C  C0 3E 02 64 */	lfs f1, 0x264(r30)
/* 8039DE10 0039AD50  C0 02 0E 48 */	lfs f0, lbl_8051F1A8@sda21(r2)
/* 8039DE14 0039AD54  EC 22 08 2A */	fadds f1, f2, f1
/* 8039DE18 0039AD58  D0 3E 02 60 */	stfs f1, 0x260(r30)
/* 8039DE1C 0039AD5C  C0 3E 02 60 */	lfs f1, 0x260(r30)
/* 8039DE20 0039AD60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039DE24 0039AD64  40 81 00 1C */	ble .L_8039DE40
/* 8039DE28 0039AD68  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039DE2C 0039AD6C  38 60 00 00 */	li r3, 0
/* 8039DE30 0039AD70  38 00 00 01 */	li r0, 1
/* 8039DE34 0039AD74  D0 1E 02 60 */	stfs f0, 0x260(r30)
/* 8039DE38 0039AD78  98 7E 02 2D */	stb r3, 0x22d(r30)
/* 8039DE3C 0039AD7C  98 1E 02 2E */	stb r0, 0x22e(r30)
.L_8039DE40:
/* 8039DE40 0039AD80  88 1E 02 2C */	lbz r0, 0x22c(r30)
/* 8039DE44 0039AD84  28 00 00 00 */	cmplwi r0, 0
/* 8039DE48 0039AD88  41 82 00 A4 */	beq .L_8039DEEC
/* 8039DE4C 0039AD8C  C0 5E 02 60 */	lfs f2, 0x260(r30)
/* 8039DE50 0039AD90  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039DE54 0039AD94  C0 22 0F 04 */	lfs f1, lbl_8051F264@sda21(r2)
/* 8039DE58 0039AD98  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8039DE5C 0039AD9C  40 80 00 30 */	bge .L_8039DE8C
/* 8039DE60 0039ADA0  C0 02 0E 50 */	lfs f0, lbl_8051F1B0@sda21(r2)
/* 8039DE64 0039ADA4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039DE68 0039ADA8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039DE6C 0039ADAC  EC 02 00 32 */	fmuls f0, f2, f0
/* 8039DE70 0039ADB0  FC 00 00 1E */	fctiwz f0, f0
/* 8039DE74 0039ADB4  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 8039DE78 0039ADB8  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 8039DE7C 0039ADBC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039DE80 0039ADC0  7C 03 04 2E */	lfsx f0, r3, r0
/* 8039DE84 0039ADC4  FC 00 00 50 */	fneg f0, f0
/* 8039DE88 0039ADC8  48 00 00 28 */	b .L_8039DEB0
.L_8039DE8C:
/* 8039DE8C 0039ADCC  C0 02 0E 54 */	lfs f0, lbl_8051F1B4@sda21(r2)
/* 8039DE90 0039ADD0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039DE94 0039ADD4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039DE98 0039ADD8  EC 02 00 32 */	fmuls f0, f2, f0
/* 8039DE9C 0039ADDC  FC 00 00 1E */	fctiwz f0, f0
/* 8039DEA0 0039ADE0  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 8039DEA4 0039ADE4  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8039DEA8 0039ADE8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039DEAC 0039ADEC  7C 03 04 2E */	lfsx f0, r3, r0
.L_8039DEB0:
/* 8039DEB0 0039ADF0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8039DEB4 0039ADF4  D0 1E 02 5C */	stfs f0, 0x25c(r30)
/* 8039DEB8 0039ADF8  88 1E 02 2E */	lbz r0, 0x22e(r30)
/* 8039DEBC 0039ADFC  28 00 00 00 */	cmplwi r0, 0
/* 8039DEC0 0039AE00  41 82 00 CC */	beq .L_8039DF8C
/* 8039DEC4 0039AE04  C0 3E 02 60 */	lfs f1, 0x260(r30)
/* 8039DEC8 0039AE08  C0 02 0F 08 */	lfs f0, lbl_8051F268@sda21(r2)
/* 8039DECC 0039AE0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039DED0 0039AE10  40 81 00 BC */	ble .L_8039DF8C
/* 8039DED4 0039AE14  38 00 00 00 */	li r0, 0
/* 8039DED8 0039AE18  7F C3 F3 78 */	mr r3, r30
/* 8039DEDC 0039AE1C  98 1E 02 2C */	stb r0, 0x22c(r30)
/* 8039DEE0 0039AE20  98 1E 02 2E */	stb r0, 0x22e(r30)
/* 8039DEE4 0039AE24  48 00 2D 9D */	bl changeSlotPage__Q28Morimura9TVsSelectFv
/* 8039DEE8 0039AE28  48 00 00 A4 */	b .L_8039DF8C
.L_8039DEEC:
/* 8039DEEC 0039AE2C  C0 5E 02 60 */	lfs f2, 0x260(r30)
/* 8039DEF0 0039AE30  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039DEF4 0039AE34  C0 22 0F 0C */	lfs f1, lbl_8051F26C@sda21(r2)
/* 8039DEF8 0039AE38  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8039DEFC 0039AE3C  40 80 00 30 */	bge .L_8039DF2C
/* 8039DF00 0039AE40  C0 02 0E 50 */	lfs f0, lbl_8051F1B0@sda21(r2)
/* 8039DF04 0039AE44  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039DF08 0039AE48  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039DF0C 0039AE4C  EC 02 00 32 */	fmuls f0, f2, f0
/* 8039DF10 0039AE50  FC 00 00 1E */	fctiwz f0, f0
/* 8039DF14 0039AE54  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 8039DF18 0039AE58  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 8039DF1C 0039AE5C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039DF20 0039AE60  7C 03 04 2E */	lfsx f0, r3, r0
/* 8039DF24 0039AE64  FC 00 00 50 */	fneg f0, f0
/* 8039DF28 0039AE68  48 00 00 28 */	b .L_8039DF50
.L_8039DF2C:
/* 8039DF2C 0039AE6C  C0 02 0E 54 */	lfs f0, lbl_8051F1B4@sda21(r2)
/* 8039DF30 0039AE70  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039DF34 0039AE74  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039DF38 0039AE78  EC 02 00 32 */	fmuls f0, f2, f0
/* 8039DF3C 0039AE7C  FC 00 00 1E */	fctiwz f0, f0
/* 8039DF40 0039AE80  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 8039DF44 0039AE84  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8039DF48 0039AE88  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039DF4C 0039AE8C  7C 03 04 2E */	lfsx f0, r3, r0
.L_8039DF50:
/* 8039DF50 0039AE90  EC 01 00 32 */	fmuls f0, f1, f0
/* 8039DF54 0039AE94  D0 1E 02 5C */	stfs f0, 0x25c(r30)
/* 8039DF58 0039AE98  88 1E 02 2E */	lbz r0, 0x22e(r30)
/* 8039DF5C 0039AE9C  28 00 00 00 */	cmplwi r0, 0
/* 8039DF60 0039AEA0  41 82 00 2C */	beq .L_8039DF8C
/* 8039DF64 0039AEA4  C0 3E 02 60 */	lfs f1, 0x260(r30)
/* 8039DF68 0039AEA8  C0 02 0F 08 */	lfs f0, lbl_8051F268@sda21(r2)
/* 8039DF6C 0039AEAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039DF70 0039AEB0  40 81 00 1C */	ble .L_8039DF8C
/* 8039DF74 0039AEB4  38 60 00 00 */	li r3, 0
/* 8039DF78 0039AEB8  38 00 00 01 */	li r0, 1
/* 8039DF7C 0039AEBC  98 7E 02 2E */	stb r3, 0x22e(r30)
/* 8039DF80 0039AEC0  7F C3 F3 78 */	mr r3, r30
/* 8039DF84 0039AEC4  98 1E 02 2C */	stb r0, 0x22c(r30)
/* 8039DF88 0039AEC8  48 00 2C F9 */	bl changeSlotPage__Q28Morimura9TVsSelectFv
.L_8039DF8C:
/* 8039DF8C 0039AECC  80 7E 01 08 */	lwz r3, 0x108(r30)
/* 8039DF90 0039AED0  38 00 00 00 */	li r0, 0
/* 8039DF94 0039AED4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039DF98 0039AED8  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 8039DF9C 0039AEDC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039DFA0 0039AEE0  48 00 00 8C */	b .L_8039E02C
.L_8039DFA4:
/* 8039DFA4 0039AEE4  80 7E 02 0C */	lwz r3, 0x20c(r30)
/* 8039DFA8 0039AEE8  4B F6 3F 19 */	bl calc__Q32og6Screen15ArrowAlphaBlinkFv
/* 8039DFAC 0039AEEC  C0 02 0F 10 */	lfs f0, lbl_8051F270@sda21(r2)
/* 8039DFB0 0039AEF0  7F DF F3 78 */	mr r31, r30
/* 8039DFB4 0039AEF4  3B 80 00 00 */	li r28, 0
/* 8039DFB8 0039AEF8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8039DFBC 0039AEFC  FF E0 00 1E */	fctiwz f31, f0
.L_8039DFC0:
/* 8039DFC0 0039AF00  80 7F 01 08 */	lwz r3, 0x108(r31)
/* 8039DFC4 0039AF04  DB E1 00 B8 */	stfd f31, 0xb8(r1)
/* 8039DFC8 0039AF08  81 83 00 00 */	lwz r12, 0(r3)
/* 8039DFCC 0039AF0C  80 81 00 BC */	lwz r4, 0xbc(r1)
/* 8039DFD0 0039AF10  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8039DFD4 0039AF14  7D 89 03 A6 */	mtctr r12
/* 8039DFD8 0039AF18  4E 80 04 21 */	bctrl 
/* 8039DFDC 0039AF1C  3B 9C 00 01 */	addi r28, r28, 1
/* 8039DFE0 0039AF20  3B FF 00 04 */	addi r31, r31, 4
/* 8039DFE4 0039AF24  2C 1C 00 02 */	cmpwi r28, 2
/* 8039DFE8 0039AF28  41 80 FF D8 */	blt .L_8039DFC0
/* 8039DFEC 0039AF2C  88 1E 02 2C */	lbz r0, 0x22c(r30)
/* 8039DFF0 0039AF30  28 00 00 00 */	cmplwi r0, 0
/* 8039DFF4 0039AF34  40 82 00 20 */	bne .L_8039E014
/* 8039DFF8 0039AF38  80 7E 01 08 */	lwz r3, 0x108(r30)
/* 8039DFFC 0039AF3C  38 80 00 00 */	li r4, 0
/* 8039E000 0039AF40  38 00 00 01 */	li r0, 1
/* 8039E004 0039AF44  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 8039E008 0039AF48  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 8039E00C 0039AF4C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039E010 0039AF50  48 00 00 1C */	b .L_8039E02C
.L_8039E014:
/* 8039E014 0039AF54  80 7E 01 08 */	lwz r3, 0x108(r30)
/* 8039E018 0039AF58  38 80 00 01 */	li r4, 1
/* 8039E01C 0039AF5C  38 00 00 00 */	li r0, 0
/* 8039E020 0039AF60  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 8039E024 0039AF64  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 8039E028 0039AF68  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8039E02C:
/* 8039E02C 0039AF6C  C0 3E 03 18 */	lfs f1, 0x318(r30)
/* 8039E030 0039AF70  C0 1E 02 5C */	lfs f0, 0x25c(r30)
/* 8039E034 0039AF74  80 7E 01 10 */	lwz r3, 0x110(r30)
/* 8039E038 0039AF78  EC 01 00 2A */	fadds f0, f1, f0
/* 8039E03C 0039AF7C  C0 3E 03 1C */	lfs f1, 0x31c(r30)
/* 8039E040 0039AF80  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8039E044 0039AF84  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8039E048 0039AF88  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E04C 0039AF8C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039E050 0039AF90  7D 89 03 A6 */	mtctr r12
/* 8039E054 0039AF94  4E 80 04 21 */	bctrl 
/* 8039E058 0039AF98  80 9E 00 E8 */	lwz r4, 0xe8(r30)
/* 8039E05C 0039AF9C  38 61 00 44 */	addi r3, r1, 0x44
/* 8039E060 0039AFA0  38 A0 00 00 */	li r5, 0
/* 8039E064 0039AFA4  4B C9 AF 35 */	bl getGlbVtx__7J2DPaneCFUc
/* 8039E068 0039AFA8  C3 E1 00 44 */	lfs f31, 0x44(r1)
/* 8039E06C 0039AFAC  38 61 00 38 */	addi r3, r1, 0x38
/* 8039E070 0039AFB0  C3 C1 00 48 */	lfs f30, 0x48(r1)
/* 8039E074 0039AFB4  38 A0 00 03 */	li r5, 3
/* 8039E078 0039AFB8  80 9E 00 E8 */	lwz r4, 0xe8(r30)
/* 8039E07C 0039AFBC  4B C9 AF 1D */	bl getGlbVtx__7J2DPaneCFUc
/* 8039E080 0039AFC0  80 9E 00 7C */	lwz r4, 0x7c(r30)
/* 8039E084 0039AFC4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8039E088 0039AFC8  D3 E1 00 80 */	stfs f31, 0x80(r1)
/* 8039E08C 0039AFCC  38 A0 00 00 */	li r5, 0
/* 8039E090 0039AFD0  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 8039E094 0039AFD4  D3 C1 00 84 */	stfs f30, 0x84(r1)
/* 8039E098 0039AFD8  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8039E09C 0039AFDC  80 C4 00 18 */	lwz r6, 0x18(r4)
/* 8039E0A0 0039AFE0  80 81 00 80 */	lwz r4, 0x80(r1)
/* 8039E0A4 0039AFE4  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 8039E0A8 0039AFE8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8039E0AC 0039AFEC  90 86 00 1C */	stw r4, 0x1c(r6)
/* 8039E0B0 0039AFF0  80 81 00 88 */	lwz r4, 0x88(r1)
/* 8039E0B4 0039AFF4  90 06 00 20 */	stw r0, 0x20(r6)
/* 8039E0B8 0039AFF8  D0 21 00 8C */	stfs f1, 0x8c(r1)
/* 8039E0BC 0039AFFC  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 8039E0C0 0039B000  90 86 00 24 */	stw r4, 0x24(r6)
/* 8039E0C4 0039B004  90 06 00 28 */	stw r0, 0x28(r6)
/* 8039E0C8 0039B008  80 9E 00 E4 */	lwz r4, 0xe4(r30)
/* 8039E0CC 0039B00C  4B C9 AE CD */	bl getGlbVtx__7J2DPaneCFUc
/* 8039E0D0 0039B010  C3 C1 00 2C */	lfs f30, 0x2c(r1)
/* 8039E0D4 0039B014  38 61 00 20 */	addi r3, r1, 0x20
/* 8039E0D8 0039B018  C3 E1 00 30 */	lfs f31, 0x30(r1)
/* 8039E0DC 0039B01C  38 A0 00 03 */	li r5, 3
/* 8039E0E0 0039B020  80 9E 00 E4 */	lwz r4, 0xe4(r30)
/* 8039E0E4 0039B024  4B C9 AE B5 */	bl getGlbVtx__7J2DPaneCFUc
/* 8039E0E8 0039B028  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8039E0EC 0039B02C  7F DF F3 78 */	mr r31, r30
/* 8039E0F0 0039B030  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8039E0F4 0039B034  3B 80 00 00 */	li r28, 0
/* 8039E0F8 0039B038  D3 DE 02 18 */	stfs f30, 0x218(r30)
/* 8039E0FC 0039B03C  D3 FE 02 1C */	stfs f31, 0x21c(r30)
/* 8039E100 0039B040  D0 1E 02 20 */	stfs f0, 0x220(r30)
/* 8039E104 0039B044  D0 3E 02 24 */	stfs f1, 0x224(r30)
.L_8039E108:
/* 8039E108 0039B048  80 7F 01 F0 */	lwz r3, 0x1f0(r31)
/* 8039E10C 0039B04C  80 9F 02 74 */	lwz r4, 0x274(r31)
/* 8039E110 0039B050  4B FF BA 75 */	bl update__Q28Morimura7TVsPikiFi
/* 8039E114 0039B054  80 7F 02 10 */	lwz r3, 0x210(r31)
/* 8039E118 0039B058  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E11C 0039B05C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039E120 0039B060  7D 89 03 A6 */	mtctr r12
/* 8039E124 0039B064  4E 80 04 21 */	bctrl 
/* 8039E128 0039B068  3B 9C 00 01 */	addi r28, r28, 1
/* 8039E12C 0039B06C  3B FF 00 04 */	addi r31, r31, 4
/* 8039E130 0039B070  2C 1C 00 02 */	cmpwi r28, 2
/* 8039E134 0039B074  41 80 FF D4 */	blt .L_8039E108
/* 8039E138 0039B078  C0 22 0F 10 */	lfs f1, lbl_8051F270@sda21(r2)
/* 8039E13C 0039B07C  C0 0D 86 4C */	lfs f0, mFireAlphaRate__Q28Morimura9TVsSelect@sda21(r13)
/* 8039E140 0039B080  80 7E 00 D0 */	lwz r3, 0xd0(r30)
/* 8039E144 0039B084  EC 01 00 32 */	fmuls f0, f1, f0
/* 8039E148 0039B088  80 63 00 08 */	lwz r3, 8(r3)
/* 8039E14C 0039B08C  FC 00 00 1E */	fctiwz f0, f0
/* 8039E150 0039B090  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E154 0039B094  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8039E158 0039B098  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 8039E15C 0039B09C  80 81 00 BC */	lwz r4, 0xbc(r1)
/* 8039E160 0039B0A0  7D 89 03 A6 */	mtctr r12
/* 8039E164 0039B0A4  4E 80 04 21 */	bctrl 
/* 8039E168 0039B0A8  3B 80 00 00 */	li r28, 0
/* 8039E16C 0039B0AC  7F DF F3 78 */	mr r31, r30
.L_8039E170:
/* 8039E170 0039B0B0  80 7F 00 F4 */	lwz r3, 0xf4(r31)
/* 8039E174 0039B0B4  38 80 00 FF */	li r4, 0xff
/* 8039E178 0039B0B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E17C 0039B0BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8039E180 0039B0C0  7D 89 03 A6 */	mtctr r12
/* 8039E184 0039B0C4  4E 80 04 21 */	bctrl 
/* 8039E188 0039B0C8  3B 9C 00 01 */	addi r28, r28, 1
/* 8039E18C 0039B0CC  3B FF 00 04 */	addi r31, r31, 4
/* 8039E190 0039B0D0  2C 1C 00 03 */	cmpwi r28, 3
/* 8039E194 0039B0D4  41 80 FF DC */	blt .L_8039E170
/* 8039E198 0039B0D8  3B 60 00 00 */	li r27, 0
/* 8039E19C 0039B0DC  7F DC F3 78 */	mr r28, r30
.L_8039E1A0:
/* 8039E1A0 0039B0E0  3B E0 00 00 */	li r31, 0
/* 8039E1A4 0039B0E4  83 BC 01 F0 */	lwz r29, 0x1f0(r28)
.L_8039E1A8:
/* 8039E1A8 0039B0E8  80 7D 00 00 */	lwz r3, 0(r29)
/* 8039E1AC 0039B0EC  38 80 00 FF */	li r4, 0xff
/* 8039E1B0 0039B0F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E1B4 0039B0F4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8039E1B8 0039B0F8  7D 89 03 A6 */	mtctr r12
/* 8039E1BC 0039B0FC  4E 80 04 21 */	bctrl 
/* 8039E1C0 0039B100  3B FF 00 01 */	addi r31, r31, 1
/* 8039E1C4 0039B104  3B BD 00 04 */	addi r29, r29, 4
/* 8039E1C8 0039B108  2C 1F 00 03 */	cmpwi r31, 3
/* 8039E1CC 0039B10C  41 80 FF DC */	blt .L_8039E1A8
/* 8039E1D0 0039B110  3B 7B 00 01 */	addi r27, r27, 1
/* 8039E1D4 0039B114  3B 9C 00 04 */	addi r28, r28, 4
/* 8039E1D8 0039B118  2C 1B 00 02 */	cmpwi r27, 2
/* 8039E1DC 0039B11C  41 80 FF C4 */	blt .L_8039E1A0
/* 8039E1E0 0039B120  80 1E 02 40 */	lwz r0, 0x240(r30)
/* 8039E1E4 0039B124  2C 00 00 01 */	cmpwi r0, 1
/* 8039E1E8 0039B128  40 80 00 30 */	bge .L_8039E218
/* 8039E1EC 0039B12C  C0 42 0E 20 */	lfs f2, lbl_8051F180@sda21(r2)
/* 8039E1F0 0039B130  C0 02 0F 14 */	lfs f0, lbl_8051F274@sda21(r2)
/* 8039E1F4 0039B134  D0 5E 02 38 */	stfs f2, 0x238(r30)
/* 8039E1F8 0039B138  C0 3E 02 58 */	lfs f1, 0x258(r30)
/* 8039E1FC 0039B13C  EC 01 00 2A */	fadds f0, f1, f0
/* 8039E200 0039B140  D0 1E 02 58 */	stfs f0, 0x258(r30)
/* 8039E204 0039B144  C0 1E 02 58 */	lfs f0, 0x258(r30)
/* 8039E208 0039B148  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8039E20C 0039B14C  40 81 00 40 */	ble .L_8039E24C
/* 8039E210 0039B150  D0 5E 02 58 */	stfs f2, 0x258(r30)
/* 8039E214 0039B154  48 00 00 38 */	b .L_8039E24C
.L_8039E218:
/* 8039E218 0039B158  C0 5E 02 38 */	lfs f2, 0x238(r30)
/* 8039E21C 0039B15C  C0 02 0F 18 */	lfs f0, lbl_8051F278@sda21(r2)
/* 8039E220 0039B160  C0 22 0E 78 */	lfs f1, lbl_8051F1D8@sda21(r2)
/* 8039E224 0039B164  EC 42 00 32 */	fmuls f2, f2, f0
/* 8039E228 0039B168  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039E22C 0039B16C  D0 5E 02 38 */	stfs f2, 0x238(r30)
/* 8039E230 0039B170  C0 5E 02 58 */	lfs f2, 0x258(r30)
/* 8039E234 0039B174  EC 22 08 28 */	fsubs f1, f2, f1
/* 8039E238 0039B178  D0 3E 02 58 */	stfs f1, 0x258(r30)
/* 8039E23C 0039B17C  C0 3E 02 58 */	lfs f1, 0x258(r30)
/* 8039E240 0039B180  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039E244 0039B184  40 80 00 08 */	bge .L_8039E24C
/* 8039E248 0039B188  D0 1E 02 58 */	stfs f0, 0x258(r30)
.L_8039E24C:
/* 8039E24C 0039B18C  C0 22 0F 10 */	lfs f1, lbl_8051F270@sda21(r2)
/* 8039E250 0039B190  C0 1E 02 38 */	lfs f0, 0x238(r30)
/* 8039E254 0039B194  80 7E 00 EC */	lwz r3, 0xec(r30)
/* 8039E258 0039B198  EC 01 00 32 */	fmuls f0, f1, f0
/* 8039E25C 0039B19C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E260 0039B1A0  FC 00 00 1E */	fctiwz f0, f0
/* 8039E264 0039B1A4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8039E268 0039B1A8  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 8039E26C 0039B1AC  80 81 00 BC */	lwz r4, 0xbc(r1)
/* 8039E270 0039B1B0  7D 89 03 A6 */	mtctr r12
/* 8039E274 0039B1B4  4E 80 04 21 */	bctrl 
/* 8039E278 0039B1B8  7F DC F3 78 */	mr r28, r30
/* 8039E27C 0039B1BC  3B 60 00 00 */	li r27, 0
/* 8039E280 0039B1C0  3B A0 00 00 */	li r29, 0
/* 8039E284 0039B1C4  48 00 00 E0 */	b .L_8039E364
.L_8039E288:
/* 8039E288 0039B1C8  80 7C 01 40 */	lwz r3, 0x140(r28)
/* 8039E28C 0039B1CC  C0 0D 86 3C */	lfs f0, mWindowScale__Q28Morimura9TVsSelect@sda21(r13)
/* 8039E290 0039B1D0  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 8039E294 0039B1D4  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 8039E298 0039B1D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E29C 0039B1DC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039E2A0 0039B1E0  7D 89 03 A6 */	mtctr r12
/* 8039E2A4 0039B1E4  4E 80 04 21 */	bctrl 
/* 8039E2A8 0039B1E8  80 7C 01 40 */	lwz r3, 0x140(r28)
/* 8039E2AC 0039B1EC  38 80 00 04 */	li r4, 4
/* 8039E2B0 0039B1F0  4B C9 AA 0D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039E2B4 0039B1F4  80 7C 01 2C */	lwz r3, 0x12c(r28)
/* 8039E2B8 0039B1F8  C0 0D 86 3C */	lfs f0, mWindowScale__Q28Morimura9TVsSelect@sda21(r13)
/* 8039E2BC 0039B1FC  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 8039E2C0 0039B200  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 8039E2C4 0039B204  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E2C8 0039B208  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039E2CC 0039B20C  7D 89 03 A6 */	mtctr r12
/* 8039E2D0 0039B210  4E 80 04 21 */	bctrl 
/* 8039E2D4 0039B214  80 7C 01 2C */	lwz r3, 0x12c(r28)
/* 8039E2D8 0039B218  38 80 00 04 */	li r4, 4
/* 8039E2DC 0039B21C  4B C9 A9 E1 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039E2E0 0039B220  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 8039E2E4 0039B224  7C 1B 00 00 */	cmpw r27, r0
/* 8039E2E8 0039B228  41 82 00 3C */	beq .L_8039E324
/* 8039E2EC 0039B22C  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039E2F0 0039B230  C0 22 0F 10 */	lfs f1, lbl_8051F270@sda21(r2)
/* 8039E2F4 0039B234  C0 1E 02 58 */	lfs f0, 0x258(r30)
/* 8039E2F8 0039B238  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8039E2FC 0039B23C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8039E300 0039B240  80 63 00 04 */	lwz r3, 4(r3)
/* 8039E304 0039B244  FC 00 00 1E */	fctiwz f0, f0
/* 8039E308 0039B248  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E30C 0039B24C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8039E310 0039B250  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 8039E314 0039B254  80 81 00 BC */	lwz r4, 0xbc(r1)
/* 8039E318 0039B258  7D 89 03 A6 */	mtctr r12
/* 8039E31C 0039B25C  4E 80 04 21 */	bctrl 
/* 8039E320 0039B260  48 00 00 38 */	b .L_8039E358
.L_8039E324:
/* 8039E324 0039B264  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039E328 0039B268  38 80 00 FF */	li r4, 0xff
/* 8039E32C 0039B26C  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8039E330 0039B270  80 63 00 04 */	lwz r3, 4(r3)
/* 8039E334 0039B274  88 A3 00 B2 */	lbz r5, 0xb2(r3)
/* 8039E338 0039B278  28 05 00 C8 */	cmplwi r5, 0xc8
/* 8039E33C 0039B27C  40 80 00 0C */	bge .L_8039E348
/* 8039E340 0039B280  38 05 00 32 */	addi r0, r5, 0x32
/* 8039E344 0039B284  54 04 06 3E */	clrlwi r4, r0, 0x18
.L_8039E348:
/* 8039E348 0039B288  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E34C 0039B28C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8039E350 0039B290  7D 89 03 A6 */	mtctr r12
/* 8039E354 0039B294  4E 80 04 21 */	bctrl 
.L_8039E358:
/* 8039E358 0039B298  3B 9C 00 04 */	addi r28, r28, 4
/* 8039E35C 0039B29C  3B BD 00 04 */	addi r29, r29, 4
/* 8039E360 0039B2A0  3B 7B 00 01 */	addi r27, r27, 1
.L_8039E364:
/* 8039E364 0039B2A4  A8 1E 00 8E */	lha r0, 0x8e(r30)
/* 8039E368 0039B2A8  7C 1B 00 00 */	cmpw r27, r0
/* 8039E36C 0039B2AC  41 80 FF 1C */	blt .L_8039E288
/* 8039E370 0039B2B0  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 8039E374 0039B2B4  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8039E378 0039B2B8  2C 00 00 00 */	cmpwi r0, 0
/* 8039E37C 0039B2BC  40 82 00 2C */	bne .L_8039E3A8
/* 8039E380 0039B2C0  C0 5E 02 34 */	lfs f2, 0x234(r30)
/* 8039E384 0039B2C4  C0 22 0E 6C */	lfs f1, lbl_8051F1CC@sda21(r2)
/* 8039E388 0039B2C8  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 8039E38C 0039B2CC  EC 22 08 2A */	fadds f1, f2, f1
/* 8039E390 0039B2D0  D0 3E 02 34 */	stfs f1, 0x234(r30)
/* 8039E394 0039B2D4  C0 3E 02 34 */	lfs f1, 0x234(r30)
/* 8039E398 0039B2D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039E39C 0039B2DC  40 81 00 1C */	ble .L_8039E3B8
/* 8039E3A0 0039B2E0  D0 1E 02 34 */	stfs f0, 0x234(r30)
/* 8039E3A4 0039B2E4  48 00 00 14 */	b .L_8039E3B8
.L_8039E3A8:
/* 8039E3A8 0039B2E8  C0 3E 02 34 */	lfs f1, 0x234(r30)
/* 8039E3AC 0039B2EC  C0 02 0E 98 */	lfs f0, lbl_8051F1F8@sda21(r2)
/* 8039E3B0 0039B2F0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8039E3B4 0039B2F4  D0 1E 02 34 */	stfs f0, 0x234(r30)
.L_8039E3B8:
/* 8039E3B8 0039B2F8  88 0D 99 CC */	lbz r0, mForceResetParm__Q28Morimura11TScrollList@sda21(r13)
/* 8039E3BC 0039B2FC  28 00 00 00 */	cmplwi r0, 0
/* 8039E3C0 0039B300  41 82 00 3C */	beq .L_8039E3FC
/* 8039E3C4 0039B304  38 00 00 00 */	li r0, 0
/* 8039E3C8 0039B308  3C 60 80 51 */	lis r3, mScrollParm__Q28Morimura9TVsSelect@ha
/* 8039E3CC 0039B30C  98 0D 99 CC */	stb r0, mForceResetParm__Q28Morimura11TScrollList@sda21(r13)
/* 8039E3D0 0039B310  C4 03 40 44 */	lfsu f0, mScrollParm__Q28Morimura9TVsSelect@l(r3)
/* 8039E3D4 0039B314  80 9E 00 84 */	lwz r4, 0x84(r30)
/* 8039E3D8 0039B318  D0 04 00 00 */	stfs f0, 0(r4)
/* 8039E3DC 0039B31C  C0 03 00 04 */	lfs f0, 4(r3)
/* 8039E3E0 0039B320  D0 04 00 04 */	stfs f0, 4(r4)
/* 8039E3E4 0039B324  C0 03 00 08 */	lfs f0, 8(r3)
/* 8039E3E8 0039B328  D0 04 00 08 */	stfs f0, 8(r4)
/* 8039E3EC 0039B32C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8039E3F0 0039B330  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 8039E3F4 0039B334  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8039E3F8 0039B338  D0 04 00 10 */	stfs f0, 0x10(r4)
.L_8039E3FC:
/* 8039E3FC 0039B33C  38 60 00 00 */	li r3, 0
/* 8039E400 0039B340  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 8039E404 0039B344  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 8039E408 0039B348  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 8039E40C 0039B34C  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 8039E410 0039B350  BB 61 00 CC */	lmw r27, 0xcc(r1)
/* 8039E414 0039B354  80 01 01 04 */	lwz r0, 0x104(r1)
/* 8039E418 0039B358  7C 08 03 A6 */	mtlr r0
/* 8039E41C 0039B35C  38 21 01 00 */	addi r1, r1, 0x100
/* 8039E420 0039B360  4E 80 00 20 */	blr 
.endfn doUpdate__Q28Morimura9TVsSelectFv

.fn update__Q28Morimura19TVsSelectListScreenFv, weak
/* 8039E424 0039B364  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039E428 0039B368  7C 08 02 A6 */	mflr r0
/* 8039E42C 0039B36C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039E430 0039B370  80 63 00 08 */	lwz r3, 8(r3)
/* 8039E434 0039B374  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E438 0039B378  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8039E43C 0039B37C  7D 89 03 A6 */	mtctr r12
/* 8039E440 0039B380  4E 80 04 21 */	bctrl 
/* 8039E444 0039B384  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039E448 0039B388  7C 08 03 A6 */	mtlr r0
/* 8039E44C 0039B38C  38 21 00 10 */	addi r1, r1, 0x10
/* 8039E450 0039B390  4E 80 00 20 */	blr 
.endfn update__Q28Morimura19TVsSelectListScreenFv

.fn doDraw__Q28Morimura9TVsSelectFR8Graphics, global
/* 8039E454 0039B394  94 21 F9 20 */	stwu r1, -0x6e0(r1)
/* 8039E458 0039B398  7C 08 02 A6 */	mflr r0
/* 8039E45C 0039B39C  90 01 06 E4 */	stw r0, 0x6e4(r1)
/* 8039E460 0039B3A0  DB E1 06 D0 */	stfd f31, 0x6d0(r1)
/* 8039E464 0039B3A4  F3 E1 06 D8 */	psq_st f31, 1752(r1), 0, qr0
/* 8039E468 0039B3A8  DB C1 06 C0 */	stfd f30, 0x6c0(r1)
/* 8039E46C 0039B3AC  F3 C1 06 C8 */	psq_st f30, 1736(r1), 0, qr0
/* 8039E470 0039B3B0  DB A1 06 B0 */	stfd f29, 0x6b0(r1)
/* 8039E474 0039B3B4  F3 A1 06 B8 */	psq_st f29, 1720(r1), 0, qr0
/* 8039E478 0039B3B8  DB 81 06 A0 */	stfd f28, 0x6a0(r1)
/* 8039E47C 0039B3BC  F3 81 06 A8 */	psq_st f28, 1704(r1), 0, qr0
/* 8039E480 0039B3C0  BF 41 06 88 */	stmw r26, 0x688(r1)
/* 8039E484 0039B3C4  3C A0 80 51 */	lis r5, j3dSys@ha
/* 8039E488 0039B3C8  7C 7B 1B 78 */	mr r27, r3
/* 8039E48C 0039B3CC  38 65 F2 30 */	addi r3, r5, j3dSys@l
/* 8039E490 0039B3D0  7C 9C 23 78 */	mr r28, r4
/* 8039E494 0039B3D4  4B CB F7 79 */	bl drawInit__6J3DSysFv
/* 8039E498 0039B3D8  80 1B 02 40 */	lwz r0, 0x240(r27)
/* 8039E49C 0039B3DC  2C 00 00 00 */	cmpwi r0, 0
/* 8039E4A0 0039B3E0  40 81 04 20 */	ble .L_8039E8C0
/* 8039E4A4 0039B3E4  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039E4A8 0039B3E8  28 00 00 00 */	cmplwi r0, 0
/* 8039E4AC 0039B3EC  41 82 00 10 */	beq .L_8039E4BC
/* 8039E4B0 0039B3F0  38 60 00 01 */	li r3, 1
/* 8039E4B4 0039B3F4  38 80 00 00 */	li r4, 0
/* 8039E4B8 0039B3F8  4B D4 AD 35 */	bl GXSetPixelFmt
.L_8039E4BC:
/* 8039E4BC 0039B3FC  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8039E4C0 0039B400  81 9C 00 BC */	lwz r12, 0xbc(r28)
/* 8039E4C4 0039B404  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039E4C8 0039B408  7D 89 03 A6 */	mtctr r12
/* 8039E4CC 0039B40C  4E 80 04 21 */	bctrl 
/* 8039E4D0 0039B410  38 60 00 01 */	li r3, 1
/* 8039E4D4 0039B414  4B D4 AC 85 */	bl GXSetAlphaUpdate
/* 8039E4D8 0039B418  38 60 00 01 */	li r3, 1
/* 8039E4DC 0039B41C  4B D4 AC 51 */	bl GXSetColorUpdate
/* 8039E4E0 0039B420  80 7B 01 E4 */	lwz r3, 0x1e4(r27)
/* 8039E4E4 0039B424  38 80 00 00 */	li r4, 0
/* 8039E4E8 0039B428  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 8039E4EC 0039B42C  38 A0 00 00 */	li r5, 0
/* 8039E4F0 0039B430  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E4F4 0039B434  38 C0 00 00 */	li r6, 0
/* 8039E4F8 0039B438  FC 40 08 90 */	fmr f2, f1
/* 8039E4FC 0039B43C  C0 62 0E DC */	lfs f3, lbl_8051F23C@sda21(r2)
/* 8039E500 0039B440  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8039E504 0039B444  C0 82 0E E0 */	lfs f4, lbl_8051F240@sda21(r2)
/* 8039E508 0039B448  7D 89 03 A6 */	mtctr r12
/* 8039E50C 0039B44C  4E 80 04 21 */	bctrl 
/* 8039E510 0039B450  48 08 99 F1 */	bl dirtyInitGX__8GraphicsFv
/* 8039E514 0039B454  48 08 99 8D */	bl initGX__8GraphicsFv
/* 8039E518 0039B458  38 60 00 00 */	li r3, 0
/* 8039E51C 0039B45C  4B D4 AC 11 */	bl GXSetColorUpdate
/* 8039E520 0039B460  38 60 00 01 */	li r3, 1
/* 8039E524 0039B464  38 80 00 00 */	li r4, 0
/* 8039E528 0039B468  4B D4 AD C5 */	bl GXSetDstAlpha
/* 8039E52C 0039B46C  38 60 00 01 */	li r3, 1
/* 8039E530 0039B470  38 80 00 01 */	li r4, 1
/* 8039E534 0039B474  38 A0 00 00 */	li r5, 0
/* 8039E538 0039B478  38 C0 00 00 */	li r6, 0
/* 8039E53C 0039B47C  4B D4 AB 9D */	bl GXSetBlendMode
/* 8039E540 0039B480  38 60 00 00 */	li r3, 0
/* 8039E544 0039B484  4B D4 6A 59 */	bl GXSetNumTexGens
/* 8039E548 0039B488  38 60 00 00 */	li r3, 0
/* 8039E54C 0039B48C  4B D4 9E 09 */	bl GXSetNumIndStages
/* 8039E550 0039B490  38 60 00 01 */	li r3, 1
/* 8039E554 0039B494  4B D4 89 11 */	bl GXSetNumChans
/* 8039E558 0039B498  38 A0 00 00 */	li r5, 0
/* 8039E55C 0039B49C  38 00 00 FF */	li r0, 0xff
/* 8039E560 0039B4A0  98 A1 00 30 */	stb r5, 0x30(r1)
/* 8039E564 0039B4A4  38 81 00 34 */	addi r4, r1, 0x34
/* 8039E568 0039B4A8  38 60 00 04 */	li r3, 4
/* 8039E56C 0039B4AC  98 A1 00 31 */	stb r5, 0x31(r1)
/* 8039E570 0039B4B0  98 A1 00 32 */	stb r5, 0x32(r1)
/* 8039E574 0039B4B4  98 01 00 33 */	stb r0, 0x33(r1)
/* 8039E578 0039B4B8  80 01 00 30 */	lwz r0, 0x30(r1)
/* 8039E57C 0039B4BC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8039E580 0039B4C0  4B D4 87 F5 */	bl GXSetChanMatColor
/* 8039E584 0039B4C4  38 60 00 04 */	li r3, 4
/* 8039E588 0039B4C8  38 80 00 00 */	li r4, 0
/* 8039E58C 0039B4CC  38 A0 00 00 */	li r5, 0
/* 8039E590 0039B4D0  38 C0 00 00 */	li r6, 0
/* 8039E594 0039B4D4  38 E0 00 00 */	li r7, 0
/* 8039E598 0039B4D8  39 00 00 00 */	li r8, 0
/* 8039E59C 0039B4DC  39 20 00 02 */	li r9, 2
/* 8039E5A0 0039B4E0  4B D4 89 01 */	bl GXSetChanCtrl
/* 8039E5A4 0039B4E4  38 60 00 00 */	li r3, 0
/* 8039E5A8 0039B4E8  4B D4 76 01 */	bl GXSetCullMode
/* 8039E5AC 0039B4EC  38 60 00 01 */	li r3, 1
/* 8039E5B0 0039B4F0  4B D4 A6 09 */	bl GXSetNumTevStages
/* 8039E5B4 0039B4F4  38 60 00 00 */	li r3, 0
/* 8039E5B8 0039B4F8  38 80 00 FF */	li r4, 0xff
/* 8039E5BC 0039B4FC  38 A0 00 FF */	li r5, 0xff
/* 8039E5C0 0039B500  38 C0 00 04 */	li r6, 4
/* 8039E5C4 0039B504  4B D4 A4 59 */	bl GXSetTevOrder
/* 8039E5C8 0039B508  38 60 00 00 */	li r3, 0
/* 8039E5CC 0039B50C  38 80 00 04 */	li r4, 4
/* 8039E5D0 0039B510  4B D4 9E AD */	bl GXSetTevOp
/* 8039E5D4 0039B514  38 61 00 A8 */	addi r3, r1, 0xa8
/* 8039E5D8 0039B518  4B D4 BC C9 */	bl PSMTXIdentity
/* 8039E5DC 0039B51C  38 61 00 A8 */	addi r3, r1, 0xa8
/* 8039E5E0 0039B520  38 80 00 00 */	li r4, 0
/* 8039E5E4 0039B524  4B D4 AF 95 */	bl GXLoadPosMtxImm
/* 8039E5E8 0039B528  38 61 00 A8 */	addi r3, r1, 0xa8
/* 8039E5EC 0039B52C  38 80 00 1E */	li r4, 0x1e
/* 8039E5F0 0039B530  38 A0 00 01 */	li r5, 1
/* 8039E5F4 0039B534  4B D4 B0 59 */	bl GXLoadTexMtxImm
/* 8039E5F8 0039B538  38 60 00 00 */	li r3, 0
/* 8039E5FC 0039B53C  4B D4 B0 1D */	bl GXSetCurrentMtx
/* 8039E600 0039B540  4B D4 60 D1 */	bl GXClearVtxDesc
/* 8039E604 0039B544  38 60 00 09 */	li r3, 9
/* 8039E608 0039B548  38 80 00 01 */	li r4, 1
/* 8039E60C 0039B54C  4B D4 5C 79 */	bl GXSetVtxDesc
/* 8039E610 0039B550  38 60 00 00 */	li r3, 0
/* 8039E614 0039B554  38 80 00 09 */	li r4, 9
/* 8039E618 0039B558  38 A0 00 01 */	li r5, 1
/* 8039E61C 0039B55C  38 C0 00 04 */	li r6, 4
/* 8039E620 0039B560  38 E0 00 00 */	li r7, 0
/* 8039E624 0039B564  4B D4 60 E5 */	bl GXSetVtxAttrFmt
/* 8039E628 0039B568  38 60 00 80 */	li r3, 0x80
/* 8039E62C 0039B56C  38 80 00 00 */	li r4, 0
/* 8039E630 0039B570  38 A0 00 04 */	li r5, 4
/* 8039E634 0039B574  4B D4 73 55 */	bl GXBegin
/* 8039E638 0039B578  C0 42 0E 10 */	lfs f2, lbl_8051F170@sda21(r2)
/* 8039E63C 0039B57C  3C 80 CC 01 */	lis r4, 0xCC008000@ha
/* 8039E640 0039B580  C0 22 0F 1C */	lfs f1, lbl_8051F27C@sda21(r2)
/* 8039E644 0039B584  38 61 03 A8 */	addi r3, r1, 0x3a8
/* 8039E648 0039B588  D0 44 80 00 */	stfs f2, 0xCC008000@l(r4)
/* 8039E64C 0039B58C  C0 02 0F 20 */	lfs f0, lbl_8051F280@sda21(r2)
/* 8039E650 0039B590  D0 44 80 00 */	stfs f2, 0xCC008000@l(r4)
/* 8039E654 0039B594  D0 44 80 00 */	stfs f2, 0xCC008000@l(r4)
/* 8039E658 0039B598  D0 24 80 00 */	stfs f1, 0xCC008000@l(r4)
/* 8039E65C 0039B59C  D0 44 80 00 */	stfs f2, 0xCC008000@l(r4)
/* 8039E660 0039B5A0  D0 44 80 00 */	stfs f2, 0xCC008000@l(r4)
/* 8039E664 0039B5A4  D0 24 80 00 */	stfs f1, 0xCC008000@l(r4)
/* 8039E668 0039B5A8  D0 04 80 00 */	stfs f0, 0xCC008000@l(r4)
/* 8039E66C 0039B5AC  D0 44 80 00 */	stfs f2, 0xCC008000@l(r4)
/* 8039E670 0039B5B0  D0 44 80 00 */	stfs f2, 0xCC008000@l(r4)
/* 8039E674 0039B5B4  D0 04 80 00 */	stfs f0, 0xCC008000@l(r4)
/* 8039E678 0039B5B8  D0 44 80 00 */	stfs f2, 0xCC008000@l(r4)
/* 8039E67C 0039B5BC  4B C9 B4 61 */	bl __ct__10J2DPictureFv
/* 8039E680 0039B5C0  3B C1 05 10 */	addi r30, r1, 0x510
/* 8039E684 0039B5C4  7F C3 F3 78 */	mr r3, r30
/* 8039E688 0039B5C8  4B C9 B4 55 */	bl __ct__10J2DPictureFv
/* 8039E68C 0039B5CC  3C 80 80 49 */	lis r4, lbl_80495184@ha
/* 8039E690 0039B5D0  38 61 02 40 */	addi r3, r1, 0x240
/* 8039E694 0039B5D4  38 84 51 84 */	addi r4, r4, lbl_80495184@l
/* 8039E698 0039B5D8  4B C9 BD 2D */	bl __ct__10J2DPictureFPCc
/* 8039E69C 0039B5DC  38 61 03 A8 */	addi r3, r1, 0x3a8
/* 8039E6A0 0039B5E0  38 81 02 40 */	addi r4, r1, 0x240
/* 8039E6A4 0039B5E4  48 00 08 A1 */	bl __as__10J2DPictureFRC10J2DPicture
/* 8039E6A8 0039B5E8  38 61 02 40 */	addi r3, r1, 0x240
/* 8039E6AC 0039B5EC  38 80 FF FF */	li r4, -1
/* 8039E6B0 0039B5F0  4B C9 C8 31 */	bl __dt__10J2DPictureFv
/* 8039E6B4 0039B5F4  3C 80 80 49 */	lis r4, lbl_80495184@ha
/* 8039E6B8 0039B5F8  38 61 00 D8 */	addi r3, r1, 0xd8
/* 8039E6BC 0039B5FC  38 84 51 84 */	addi r4, r4, lbl_80495184@l
/* 8039E6C0 0039B600  4B C9 BD 05 */	bl __ct__10J2DPictureFPCc
/* 8039E6C4 0039B604  7F C3 F3 78 */	mr r3, r30
/* 8039E6C8 0039B608  38 81 00 D8 */	addi r4, r1, 0xd8
/* 8039E6CC 0039B60C  48 00 08 79 */	bl __as__10J2DPictureFRC10J2DPicture
/* 8039E6D0 0039B610  38 61 00 D8 */	addi r3, r1, 0xd8
/* 8039E6D4 0039B614  38 80 FF FF */	li r4, -1
/* 8039E6D8 0039B618  4B C9 C8 09 */	bl __dt__10J2DPictureFv
/* 8039E6DC 0039B61C  38 60 00 01 */	li r3, 1
/* 8039E6E0 0039B620  38 80 00 FF */	li r4, 0xff
/* 8039E6E4 0039B624  4B D4 AC 09 */	bl GXSetDstAlpha
/* 8039E6E8 0039B628  C3 E2 0E 10 */	lfs f31, lbl_8051F170@sda21(r2)
/* 8039E6EC 0039B62C  7F 7A DB 78 */	mr r26, r27
/* 8039E6F0 0039B630  3B A1 03 A8 */	addi r29, r1, 0x3a8
/* 8039E6F4 0039B634  3B E0 00 00 */	li r31, 0
.L_8039E6F8:
/* 8039E6F8 0039B638  80 7A 01 E8 */	lwz r3, 0x1e8(r26)
/* 8039E6FC 0039B63C  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 8039E700 0039B640  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8039E704 0039B644  40 81 00 A4 */	ble .L_8039E7A8
/* 8039E708 0039B648  38 00 00 01 */	li r0, 1
/* 8039E70C 0039B64C  C0 C2 0F 24 */	lfs f6, lbl_8051F284@sda21(r2)
/* 8039E710 0039B650  98 1B 02 2A */	stb r0, 0x22a(r27)
/* 8039E714 0039B654  7F A3 EB 78 */	mr r3, r29
/* 8039E718 0039B658  C0 62 0E E0 */	lfs f3, lbl_8051F240@sda21(r2)
/* 8039E71C 0039B65C  38 80 00 04 */	li r4, 4
/* 8039E720 0039B660  80 BA 01 E8 */	lwz r5, 0x1e8(r26)
/* 8039E724 0039B664  C0 BB 02 94 */	lfs f5, 0x294(r27)
/* 8039E728 0039B668  C0 25 00 10 */	lfs f1, 0x10(r5)
/* 8039E72C 0039B66C  C0 1B 02 9C */	lfs f0, 0x29c(r27)
/* 8039E730 0039B670  EC 21 28 28 */	fsubs f1, f1, f5
/* 8039E734 0039B674  C0 5B 02 A4 */	lfs f2, 0x2a4(r27)
/* 8039E738 0039B678  C0 85 00 0C */	lfs f4, 0xc(r5)
/* 8039E73C 0039B67C  EC 00 28 28 */	fsubs f0, f0, f5
/* 8039E740 0039B680  C1 1B 02 90 */	lfs f8, 0x290(r27)
/* 8039E744 0039B684  EC 22 08 2A */	fadds f1, f2, f1
/* 8039E748 0039B688  C0 5B 02 98 */	lfs f2, 0x298(r27)
/* 8039E74C 0039B68C  EC 84 40 28 */	fsubs f4, f4, f8
/* 8039E750 0039B690  C0 BB 02 A0 */	lfs f5, 0x2a0(r27)
/* 8039E754 0039B694  EC 01 00 24 */	fdivs f0, f1, f0
/* 8039E758 0039B698  C0 E5 00 30 */	lfs f7, 0x30(r5)
/* 8039E75C 0039B69C  EC 85 20 2A */	fadds f4, f5, f4
/* 8039E760 0039B6A0  EC 22 40 28 */	fsubs f1, f2, f8
/* 8039E764 0039B6A4  EF A6 01 F2 */	fmuls f29, f6, f7
/* 8039E768 0039B6A8  EF C3 00 32 */	fmuls f30, f3, f0
/* 8039E76C 0039B6AC  EF 84 08 24 */	fdivs f28, f4, f1
/* 8039E770 0039B6B0  4B C9 A5 4D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039E774 0039B6B4  C0 22 0E 28 */	lfs f1, lbl_8051F188@sda21(r2)
/* 8039E778 0039B6B8  FC 60 E8 90 */	fmr f3, f29
/* 8039E77C 0039B6BC  C0 02 0E DC */	lfs f0, lbl_8051F23C@sda21(r2)
/* 8039E780 0039B6C0  FC 80 E8 90 */	fmr f4, f29
/* 8039E784 0039B6C4  EC 21 07 72 */	fmuls f1, f1, f29
/* 8039E788 0039B6C8  7F A3 EB 78 */	mr r3, r29
/* 8039E78C 0039B6CC  EC 00 07 32 */	fmuls f0, f0, f28
/* 8039E790 0039B6D0  38 80 00 00 */	li r4, 0
/* 8039E794 0039B6D4  38 A0 00 00 */	li r5, 0
/* 8039E798 0039B6D8  EC 5E 08 28 */	fsubs f2, f30, f1
/* 8039E79C 0039B6DC  EC 20 08 28 */	fsubs f1, f0, f1
/* 8039E7A0 0039B6E0  38 C0 00 00 */	li r6, 0
/* 8039E7A4 0039B6E4  4B C9 D4 11 */	bl draw__10J2DPictureFffffbbb
.L_8039E7A8:
/* 8039E7A8 0039B6E8  3B FF 00 01 */	addi r31, r31, 1
/* 8039E7AC 0039B6EC  3B BD 01 68 */	addi r29, r29, 0x168
/* 8039E7B0 0039B6F0  2C 1F 00 02 */	cmpwi r31, 2
/* 8039E7B4 0039B6F4  3B 5A 00 04 */	addi r26, r26, 4
/* 8039E7B8 0039B6F8  41 80 FF 40 */	blt .L_8039E6F8
/* 8039E7BC 0039B6FC  38 60 00 01 */	li r3, 1
/* 8039E7C0 0039B700  38 80 00 FF */	li r4, 0xff
/* 8039E7C4 0039B704  4B D4 AB 29 */	bl GXSetDstAlpha
/* 8039E7C8 0039B708  80 7B 00 D8 */	lwz r3, 0xd8(r27)
/* 8039E7CC 0039B70C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8039E7D0 0039B710  4B C9 4C 25 */	bl init__10JUTTextureFv
/* 8039E7D4 0039B714  38 60 00 00 */	li r3, 0
/* 8039E7D8 0039B718  38 80 00 00 */	li r4, 0
/* 8039E7DC 0039B71C  4B D4 AB 11 */	bl GXSetDstAlpha
/* 8039E7E0 0039B720  38 60 00 00 */	li r3, 0
/* 8039E7E4 0039B724  4B D4 A9 75 */	bl GXSetAlphaUpdate
/* 8039E7E8 0039B728  38 60 00 01 */	li r3, 1
/* 8039E7EC 0039B72C  4B D4 A9 41 */	bl GXSetColorUpdate
/* 8039E7F0 0039B730  80 7B 00 D8 */	lwz r3, 0xd8(r27)
/* 8039E7F4 0039B734  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E7F8 0039B738  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039E7FC 0039B73C  7D 89 03 A6 */	mtctr r12
/* 8039E800 0039B740  4E 80 04 21 */	bctrl 
/* 8039E804 0039B744  38 60 00 00 */	li r3, 0
/* 8039E808 0039B748  38 80 00 FF */	li r4, 0xff
/* 8039E80C 0039B74C  4B D4 AA E1 */	bl GXSetDstAlpha
/* 8039E810 0039B750  38 60 00 01 */	li r3, 1
/* 8039E814 0039B754  4B D4 A9 45 */	bl GXSetAlphaUpdate
/* 8039E818 0039B758  38 60 00 00 */	li r3, 0
/* 8039E81C 0039B75C  4B D4 A9 11 */	bl GXSetColorUpdate
/* 8039E820 0039B760  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8039E824 0039B764  81 9C 00 BC */	lwz r12, 0xbc(r28)
/* 8039E828 0039B768  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039E82C 0039B76C  7D 89 03 A6 */	mtctr r12
/* 8039E830 0039B770  4E 80 04 21 */	bctrl 
/* 8039E834 0039B774  80 7B 01 E4 */	lwz r3, 0x1e4(r27)
/* 8039E838 0039B778  38 80 00 00 */	li r4, 0
/* 8039E83C 0039B77C  C0 22 0E 10 */	lfs f1, lbl_8051F170@sda21(r2)
/* 8039E840 0039B780  38 A0 00 00 */	li r5, 0
/* 8039E844 0039B784  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E848 0039B788  38 C0 00 00 */	li r6, 0
/* 8039E84C 0039B78C  FC 40 08 90 */	fmr f2, f1
/* 8039E850 0039B790  C0 62 0E DC */	lfs f3, lbl_8051F23C@sda21(r2)
/* 8039E854 0039B794  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8039E858 0039B798  C0 82 0E E0 */	lfs f4, lbl_8051F240@sda21(r2)
/* 8039E85C 0039B79C  7D 89 03 A6 */	mtctr r12
/* 8039E860 0039B7A0  4E 80 04 21 */	bctrl 
/* 8039E864 0039B7A4  4B D4 90 FD */	bl GXInvalidateTexAll
/* 8039E868 0039B7A8  80 7B 00 D8 */	lwz r3, 0xd8(r27)
/* 8039E86C 0039B7AC  38 80 00 00 */	li r4, 0
/* 8039E870 0039B7B0  38 A0 00 00 */	li r5, 0
/* 8039E874 0039B7B4  38 E0 00 00 */	li r7, 0
/* 8039E878 0039B7B8  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8039E87C 0039B7BC  39 00 00 00 */	li r8, 0
/* 8039E880 0039B7C0  80 C3 00 20 */	lwz r6, 0x20(r3)
/* 8039E884 0039B7C4  88 C6 00 00 */	lbz r6, 0(r6)
/* 8039E888 0039B7C8  4B C9 4D F9 */	bl capture__10JUTTextureFii9_GXTexFmtbUc
/* 8039E88C 0039B7CC  38 60 00 01 */	li r3, 1
/* 8039E890 0039B7D0  4B D4 A8 9D */	bl GXSetColorUpdate
/* 8039E894 0039B7D4  38 7C 01 90 */	addi r3, r28, 0x190
/* 8039E898 0039B7D8  81 9C 01 90 */	lwz r12, 0x190(r28)
/* 8039E89C 0039B7DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039E8A0 0039B7E0  7D 89 03 A6 */	mtctr r12
/* 8039E8A4 0039B7E4  4E 80 04 21 */	bctrl 
/* 8039E8A8 0039B7E8  7F C3 F3 78 */	mr r3, r30
/* 8039E8AC 0039B7EC  38 80 FF FF */	li r4, -1
/* 8039E8B0 0039B7F0  4B C9 C6 31 */	bl __dt__10J2DPictureFv
/* 8039E8B4 0039B7F4  38 61 03 A8 */	addi r3, r1, 0x3a8
/* 8039E8B8 0039B7F8  38 80 FF FF */	li r4, -1
/* 8039E8BC 0039B7FC  4B C9 C6 25 */	bl __dt__10J2DPictureFv
.L_8039E8C0:
/* 8039E8C0 0039B800  3B FC 01 90 */	addi r31, r28, 0x190
/* 8039E8C4 0039B804  7F E3 FB 78 */	mr r3, r31
/* 8039E8C8 0039B808  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039E8CC 0039B80C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039E8D0 0039B810  7D 89 03 A6 */	mtctr r12
/* 8039E8D4 0039B814  4E 80 04 21 */	bctrl 
/* 8039E8D8 0039B818  80 7B 00 C0 */	lwz r3, 0xc0(r27)
/* 8039E8DC 0039B81C  7F 84 E3 78 */	mr r4, r28
/* 8039E8E0 0039B820  7F E5 FB 78 */	mr r5, r31
/* 8039E8E4 0039B824  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E8E8 0039B828  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039E8EC 0039B82C  7D 89 03 A6 */	mtctr r12
/* 8039E8F0 0039B830  4E 80 04 21 */	bctrl 
/* 8039E8F4 0039B834  80 7B 02 1C */	lwz r3, 0x21c(r27)
/* 8039E8F8 0039B838  80 1B 02 24 */	lwz r0, 0x224(r27)
/* 8039E8FC 0039B83C  90 61 00 80 */	stw r3, 0x80(r1)
/* 8039E900 0039B840  80 7B 02 18 */	lwz r3, 0x218(r27)
/* 8039E904 0039B844  90 01 00 88 */	stw r0, 0x88(r1)
/* 8039E908 0039B848  80 1B 02 20 */	lwz r0, 0x220(r27)
/* 8039E90C 0039B84C  90 61 00 7C */	stw r3, 0x7c(r1)
/* 8039E910 0039B850  C3 E1 00 80 */	lfs f31, 0x80(r1)
/* 8039E914 0039B854  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 8039E918 0039B858  90 01 00 84 */	stw r0, 0x84(r1)
/* 8039E91C 0039B85C  EC 20 F8 28 */	fsubs f1, f0, f31
/* 8039E920 0039B860  C3 C1 00 7C */	lfs f30, 0x7c(r1)
/* 8039E924 0039B864  4B D2 32 29 */	bl __cvt_fp2unsigned
/* 8039E928 0039B868  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 8039E92C 0039B86C  7C 7E 1B 78 */	mr r30, r3
/* 8039E930 0039B870  EC 20 F0 28 */	fsubs f1, f0, f30
/* 8039E934 0039B874  4B D2 32 19 */	bl __cvt_fp2unsigned
/* 8039E938 0039B878  FC 20 F8 90 */	fmr f1, f31
/* 8039E93C 0039B87C  7C 7D 1B 78 */	mr r29, r3
/* 8039E940 0039B880  4B D2 32 0D */	bl __cvt_fp2unsigned
/* 8039E944 0039B884  FC 20 F0 90 */	fmr f1, f30
/* 8039E948 0039B888  7C 7A 1B 78 */	mr r26, r3
/* 8039E94C 0039B88C  4B D2 32 01 */	bl __cvt_fp2unsigned
/* 8039E950 0039B890  7F 44 D3 78 */	mr r4, r26
/* 8039E954 0039B894  7F A5 EB 78 */	mr r5, r29
/* 8039E958 0039B898  7F C6 F3 78 */	mr r6, r30
/* 8039E95C 0039B89C  4B D4 AE 7D */	bl GXSetScissor
/* 8039E960 0039B8A0  80 7B 00 BC */	lwz r3, 0xbc(r27)
/* 8039E964 0039B8A4  7F 84 E3 78 */	mr r4, r28
/* 8039E968 0039B8A8  7F E5 FB 78 */	mr r5, r31
/* 8039E96C 0039B8AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E970 0039B8B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039E974 0039B8B4  7D 89 03 A6 */	mtctr r12
/* 8039E978 0039B8B8  4E 80 04 21 */	bctrl 
/* 8039E97C 0039B8BC  38 60 00 00 */	li r3, 0
/* 8039E980 0039B8C0  38 80 00 00 */	li r4, 0
/* 8039E984 0039B8C4  38 A0 02 80 */	li r5, 0x280
/* 8039E988 0039B8C8  38 C0 01 E0 */	li r6, 0x1e0
/* 8039E98C 0039B8CC  4B D4 AE 4D */	bl GXSetScissor
/* 8039E990 0039B8D0  80 7B 00 7C */	lwz r3, 0x7c(r27)
/* 8039E994 0039B8D4  7F 84 E3 78 */	mr r4, r28
/* 8039E998 0039B8D8  7F E5 FB 78 */	mr r5, r31
/* 8039E99C 0039B8DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E9A0 0039B8E0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039E9A4 0039B8E4  7D 89 03 A6 */	mtctr r12
/* 8039E9A8 0039B8E8  4E 80 04 21 */	bctrl 
/* 8039E9AC 0039B8EC  80 1B 02 40 */	lwz r0, 0x240(r27)
/* 8039E9B0 0039B8F0  2C 00 00 00 */	cmpwi r0, 0
/* 8039E9B4 0039B8F4  41 82 00 3C */	beq .L_8039E9F0
/* 8039E9B8 0039B8F8  80 7B 00 C4 */	lwz r3, 0xc4(r27)
/* 8039E9BC 0039B8FC  7F 84 E3 78 */	mr r4, r28
/* 8039E9C0 0039B900  7F E5 FB 78 */	mr r5, r31
/* 8039E9C4 0039B904  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E9C8 0039B908  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039E9CC 0039B90C  7D 89 03 A6 */	mtctr r12
/* 8039E9D0 0039B910  4E 80 04 21 */	bctrl 
/* 8039E9D4 0039B914  80 7B 00 C8 */	lwz r3, 0xc8(r27)
/* 8039E9D8 0039B918  7F 84 E3 78 */	mr r4, r28
/* 8039E9DC 0039B91C  7F E5 FB 78 */	mr r5, r31
/* 8039E9E0 0039B920  81 83 00 00 */	lwz r12, 0(r3)
/* 8039E9E4 0039B924  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039E9E8 0039B928  7D 89 03 A6 */	mtctr r12
/* 8039E9EC 0039B92C  4E 80 04 21 */	bctrl 
.L_8039E9F0:
/* 8039E9F0 0039B930  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8039E9F4 0039B934  81 9C 00 BC */	lwz r12, 0xbc(r28)
/* 8039E9F8 0039B938  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039E9FC 0039B93C  7D 89 03 A6 */	mtctr r12
/* 8039EA00 0039B940  4E 80 04 21 */	bctrl 
/* 8039EA04 0039B944  3B A0 00 00 */	li r29, 0
/* 8039EA08 0039B948  7F 7A DB 78 */	mr r26, r27
.L_8039EA0C:
/* 8039EA0C 0039B94C  80 7A 01 F0 */	lwz r3, 0x1f0(r26)
/* 8039EA10 0039B950  4B FF B4 3D */	bl draw__Q28Morimura7TVsPikiFv
/* 8039EA14 0039B954  3B BD 00 01 */	addi r29, r29, 1
/* 8039EA18 0039B958  3B 5A 00 04 */	addi r26, r26, 4
/* 8039EA1C 0039B95C  2C 1D 00 02 */	cmpwi r29, 2
/* 8039EA20 0039B960  41 80 FF EC */	blt .L_8039EA0C
/* 8039EA24 0039B964  80 1B 02 40 */	lwz r0, 0x240(r27)
/* 8039EA28 0039B968  2C 00 00 03 */	cmpwi r0, 3
/* 8039EA2C 0039B96C  41 80 01 90 */	blt .L_8039EBBC
/* 8039EA30 0039B970  C3 E2 0E 70 */	lfs f31, lbl_8051F1D0@sda21(r2)
/* 8039EA34 0039B974  7F 7E DB 78 */	mr r30, r27
/* 8039EA38 0039B978  3B A0 00 00 */	li r29, 0
.L_8039EA3C:
/* 8039EA3C 0039B97C  83 5E 01 E8 */	lwz r26, 0x1e8(r30)
/* 8039EA40 0039B980  80 7A 00 08 */	lwz r3, 8(r26)
/* 8039EA44 0039B984  C0 03 00 CC */	lfs f0, 0xcc(r3)
/* 8039EA48 0039B988  FC 1F 00 00 */	fcmpu cr0, f31, f0
/* 8039EA4C 0039B98C  40 82 01 60 */	bne .L_8039EBAC
/* 8039EA50 0039B990  80 7A 00 04 */	lwz r3, 4(r26)
/* 8039EA54 0039B994  38 80 00 04 */	li r4, 4
/* 8039EA58 0039B998  4B C9 A2 65 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8039EA5C 0039B99C  80 7A 00 04 */	lwz r3, 4(r26)
/* 8039EA60 0039B9A0  38 80 00 00 */	li r4, 0
/* 8039EA64 0039B9A4  C0 3A 00 0C */	lfs f1, 0xc(r26)
/* 8039EA68 0039B9A8  38 A0 00 00 */	li r5, 0
/* 8039EA6C 0039B9AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8039EA70 0039B9B0  38 C0 00 00 */	li r6, 0
/* 8039EA74 0039B9B4  C0 42 0E 88 */	lfs f2, lbl_8051F1E8@sda21(r2)
/* 8039EA78 0039B9B8  C0 1A 00 10 */	lfs f0, 0x10(r26)
/* 8039EA7C 0039B9BC  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 8039EA80 0039B9C0  EC 21 10 2A */	fadds f1, f1, f2
/* 8039EA84 0039B9C4  EC 40 10 2A */	fadds f2, f0, f2
/* 8039EA88 0039B9C8  7D 89 03 A6 */	mtctr r12
/* 8039EA8C 0039B9CC  4E 80 04 21 */	bctrl 
/* 8039EA90 0039B9D0  80 7A 00 04 */	lwz r3, 4(r26)
/* 8039EA94 0039B9D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8039EA98 0039B9D8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039EA9C 0039B9DC  7D 89 03 A6 */	mtctr r12
/* 8039EAA0 0039B9E0  4E 80 04 21 */	bctrl 
/* 8039EAA4 0039B9E4  C0 5A 00 30 */	lfs f2, 0x30(r26)
/* 8039EAA8 0039B9E8  38 00 00 00 */	li r0, 0
/* 8039EAAC 0039B9EC  C0 22 0E 6C */	lfs f1, lbl_8051F1CC@sda21(r2)
/* 8039EAB0 0039B9F0  C0 02 0E 8C */	lfs f0, lbl_8051F1EC@sda21(r2)
/* 8039EAB4 0039B9F4  EC 22 08 2A */	fadds f1, f2, f1
/* 8039EAB8 0039B9F8  D0 3A 00 30 */	stfs f1, 0x30(r26)
/* 8039EABC 0039B9FC  80 7A 00 08 */	lwz r3, 8(r26)
/* 8039EAC0 0039BA00  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039EAC4 0039BA04  C0 3A 00 30 */	lfs f1, 0x30(r26)
/* 8039EAC8 0039BA08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039EACC 0039BA0C  40 81 00 08 */	ble .L_8039EAD4
/* 8039EAD0 0039BA10  D0 1A 00 30 */	stfs f0, 0x30(r26)
.L_8039EAD4:
/* 8039EAD4 0039BA14  88 1A 00 3C */	lbz r0, 0x3c(r26)
/* 8039EAD8 0039BA18  28 00 00 00 */	cmplwi r0, 0
/* 8039EADC 0039BA1C  41 82 00 D0 */	beq .L_8039EBAC
/* 8039EAE0 0039BA20  38 00 00 00 */	li r0, 0
/* 8039EAE4 0039BA24  38 80 18 39 */	li r4, 0x1839
/* 8039EAE8 0039BA28  98 1A 00 3C */	stb r0, 0x3c(r26)
/* 8039EAEC 0039BA2C  38 A0 00 00 */	li r5, 0
/* 8039EAF0 0039BA30  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8039EAF4 0039BA34  4B F9 9B 3D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8039EAF8 0039BA38  C0 3A 00 0C */	lfs f1, 0xc(r26)
/* 8039EAFC 0039BA3C  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 8039EB00 0039BA40  C0 42 0E 90 */	lfs f2, lbl_8051F1F0@sda21(r2)
/* 8039EB04 0039BA44  3C A0 80 4C */	lis r5, __vt__Q25efx2d5TBase@ha
/* 8039EB08 0039BA48  C0 1A 00 10 */	lfs f0, 0x10(r26)
/* 8039EB0C 0039BA4C  39 20 00 00 */	li r9, 0
/* 8039EB10 0039BA50  EC 21 10 28 */	fsubs f1, f1, f2
/* 8039EB14 0039BA54  38 03 14 F0 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 8039EB18 0039BA58  EC 00 10 28 */	fsubs f0, f0, f2
/* 8039EB1C 0039BA5C  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple3@ha
/* 8039EB20 0039BA60  3C C0 80 4C */	lis r6, __vt__Q25efx2d3Arg@ha
/* 8039EB24 0039BA64  3C 60 80 4E */	lis r3, __vt__Q25efx2d13T2DBattleDive@ha
/* 8039EB28 0039BA68  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8039EB2C 0039BA6C  39 66 15 14 */	addi r11, r6, __vt__Q25efx2d3Arg@l
/* 8039EB30 0039BA70  39 45 14 D8 */	addi r10, r5, __vt__Q25efx2d5TBase@l
/* 8039EB34 0039BA74  38 E0 00 02 */	li r7, 2
/* 8039EB38 0039BA78  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8039EB3C 0039BA7C  38 C0 00 03 */	li r6, 3
/* 8039EB40 0039BA80  83 41 00 40 */	lwz r26, 0x40(r1)
/* 8039EB44 0039BA84  39 04 74 58 */	addi r8, r4, __vt__Q25efx2d8TSimple3@l
/* 8039EB48 0039BA88  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8039EB4C 0039BA8C  38 A0 00 04 */	li r5, 4
/* 8039EB50 0039BA90  81 81 00 44 */	lwz r12, 0x44(r1)
/* 8039EB54 0039BA94  38 03 56 6C */	addi r0, r3, __vt__Q25efx2d13T2DBattleDive@l
/* 8039EB58 0039BA98  93 41 00 48 */	stw r26, 0x48(r1)
/* 8039EB5C 0039BA9C  38 61 00 8C */	addi r3, r1, 0x8c
/* 8039EB60 0039BAA0  38 81 00 70 */	addi r4, r1, 0x70
/* 8039EB64 0039BAA4  91 81 00 4C */	stw r12, 0x4c(r1)
/* 8039EB68 0039BAA8  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 8039EB6C 0039BAAC  91 41 00 8C */	stw r10, 0x8c(r1)
/* 8039EB70 0039BAB0  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 8039EB74 0039BAB4  91 01 00 8C */	stw r8, 0x8c(r1)
/* 8039EB78 0039BAB8  91 61 00 78 */	stw r11, 0x78(r1)
/* 8039EB7C 0039BABC  D0 21 00 70 */	stfs f1, 0x70(r1)
/* 8039EB80 0039BAC0  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 8039EB84 0039BAC4  99 21 00 90 */	stb r9, 0x90(r1)
/* 8039EB88 0039BAC8  99 21 00 91 */	stb r9, 0x91(r1)
/* 8039EB8C 0039BACC  B0 E1 00 94 */	sth r7, 0x94(r1)
/* 8039EB90 0039BAD0  B0 C1 00 96 */	sth r6, 0x96(r1)
/* 8039EB94 0039BAD4  B0 A1 00 98 */	sth r5, 0x98(r1)
/* 8039EB98 0039BAD8  91 21 00 9C */	stw r9, 0x9c(r1)
/* 8039EB9C 0039BADC  91 21 00 A0 */	stw r9, 0xa0(r1)
/* 8039EBA0 0039BAE0  91 21 00 A4 */	stw r9, 0xa4(r1)
/* 8039EBA4 0039BAE4  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8039EBA8 0039BAE8  48 01 AD D1 */	bl create__Q25efx2d8TSimple3FPQ25efx2d3Arg
.L_8039EBAC:
/* 8039EBAC 0039BAEC  3B BD 00 01 */	addi r29, r29, 1
/* 8039EBB0 0039BAF0  3B DE 00 04 */	addi r30, r30, 4
/* 8039EBB4 0039BAF4  2C 1D 00 02 */	cmpwi r29, 2
/* 8039EBB8 0039BAF8  41 80 FE 84 */	blt .L_8039EA3C
.L_8039EBBC:
/* 8039EBBC 0039BAFC  38 7C 01 90 */	addi r3, r28, 0x190
/* 8039EBC0 0039BB00  81 9C 01 90 */	lwz r12, 0x190(r28)
/* 8039EBC4 0039BB04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039EBC8 0039BB08  7D 89 03 A6 */	mtctr r12
/* 8039EBCC 0039BB0C  4E 80 04 21 */	bctrl 
/* 8039EBD0 0039BB10  80 7B 00 D4 */	lwz r3, 0xd4(r27)
/* 8039EBD4 0039BB14  7F 84 E3 78 */	mr r4, r28
/* 8039EBD8 0039BB18  7F E5 FB 78 */	mr r5, r31
/* 8039EBDC 0039BB1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039EBE0 0039BB20  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039EBE4 0039BB24  7D 89 03 A6 */	mtctr r12
/* 8039EBE8 0039BB28  4E 80 04 21 */	bctrl 
/* 8039EBEC 0039BB2C  80 7B 00 D0 */	lwz r3, 0xd0(r27)
/* 8039EBF0 0039BB30  7F 84 E3 78 */	mr r4, r28
/* 8039EBF4 0039BB34  7F E5 FB 78 */	mr r5, r31
/* 8039EBF8 0039BB38  81 83 00 00 */	lwz r12, 0(r3)
/* 8039EBFC 0039BB3C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8039EC00 0039BB40  7D 89 03 A6 */	mtctr r12
/* 8039EC04 0039BB44  4E 80 04 21 */	bctrl 
/* 8039EC08 0039BB48  7F 63 DB 78 */	mr r3, r27
/* 8039EC0C 0039BB4C  3B 40 00 00 */	li r26, 0
/* 8039EC10 0039BB50  81 9B 00 00 */	lwz r12, 0(r27)
/* 8039EC14 0039BB54  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8039EC18 0039BB58  7D 89 03 A6 */	mtctr r12
/* 8039EC1C 0039BB5C  4E 80 04 21 */	bctrl 
/* 8039EC20 0039BB60  80 63 02 24 */	lwz r3, 0x224(r3)
/* 8039EC24 0039BB64  88 03 00 D4 */	lbz r0, 0xd4(r3)
/* 8039EC28 0039BB68  28 00 00 00 */	cmplwi r0, 0
/* 8039EC2C 0039BB6C  41 82 00 70 */	beq .L_8039EC9C
/* 8039EC30 0039BB70  7F 63 DB 78 */	mr r3, r27
/* 8039EC34 0039BB74  3B 40 00 01 */	li r26, 1
/* 8039EC38 0039BB78  81 9B 00 00 */	lwz r12, 0(r27)
/* 8039EC3C 0039BB7C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8039EC40 0039BB80  7D 89 03 A6 */	mtctr r12
/* 8039EC44 0039BB84  4E 80 04 21 */	bctrl 
/* 8039EC48 0039BB88  80 63 02 24 */	lwz r3, 0x224(r3)
/* 8039EC4C 0039BB8C  88 03 00 D5 */	lbz r0, 0xd5(r3)
/* 8039EC50 0039BB90  28 00 00 00 */	cmplwi r0, 0
/* 8039EC54 0039BB94  41 82 00 28 */	beq .L_8039EC7C
/* 8039EC58 0039BB98  88 7B 02 3C */	lbz r3, 0x23c(r27)
/* 8039EC5C 0039BB9C  38 03 00 14 */	addi r0, r3, 0x14
/* 8039EC60 0039BBA0  98 1B 02 3C */	stb r0, 0x23c(r27)
/* 8039EC64 0039BBA4  88 1B 02 3C */	lbz r0, 0x23c(r27)
/* 8039EC68 0039BBA8  28 00 00 C8 */	cmplwi r0, 0xc8
/* 8039EC6C 0039BBAC  40 81 00 30 */	ble .L_8039EC9C
/* 8039EC70 0039BBB0  38 00 00 C8 */	li r0, 0xc8
/* 8039EC74 0039BBB4  98 1B 02 3C */	stb r0, 0x23c(r27)
/* 8039EC78 0039BBB8  48 00 00 24 */	b .L_8039EC9C
.L_8039EC7C:
/* 8039EC7C 0039BBBC  88 7B 02 3C */	lbz r3, 0x23c(r27)
/* 8039EC80 0039BBC0  28 03 00 14 */	cmplwi r3, 0x14
/* 8039EC84 0039BBC4  40 81 00 10 */	ble .L_8039EC94
/* 8039EC88 0039BBC8  38 03 FF EC */	addi r0, r3, -20
/* 8039EC8C 0039BBCC  98 1B 02 3C */	stb r0, 0x23c(r27)
/* 8039EC90 0039BBD0  48 00 00 0C */	b .L_8039EC9C
.L_8039EC94:
/* 8039EC94 0039BBD4  38 00 00 00 */	li r0, 0
/* 8039EC98 0039BBD8  98 1B 02 3C */	stb r0, 0x23c(r27)
.L_8039EC9C:
/* 8039EC9C 0039BBDC  57 40 06 3F */	clrlwi. r0, r26, 0x18
/* 8039ECA0 0039BBE0  41 82 00 C8 */	beq .L_8039ED68
/* 8039ECA4 0039BBE4  38 00 FF FF */	li r0, -1
/* 8039ECA8 0039BBE8  39 00 00 00 */	li r8, 0
/* 8039ECAC 0039BBEC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8039ECB0 0039BBF0  7F E3 FB 78 */	mr r3, r31
/* 8039ECB4 0039BBF4  88 1B 02 3C */	lbz r0, 0x23c(r27)
/* 8039ECB8 0039BBF8  38 81 00 20 */	addi r4, r1, 0x20
/* 8039ECBC 0039BBFC  99 01 00 3F */	stb r8, 0x3f(r1)
/* 8039ECC0 0039BC00  38 A1 00 24 */	addi r5, r1, 0x24
/* 8039ECC4 0039BC04  38 C1 00 28 */	addi r6, r1, 0x28
/* 8039ECC8 0039BC08  38 E1 00 2C */	addi r7, r1, 0x2c
/* 8039ECCC 0039BC0C  99 01 00 3C */	stb r8, 0x3c(r1)
/* 8039ECD0 0039BC10  99 01 00 3D */	stb r8, 0x3d(r1)
/* 8039ECD4 0039BC14  99 01 00 3E */	stb r8, 0x3e(r1)
/* 8039ECD8 0039BC18  98 01 00 3F */	stb r0, 0x3f(r1)
/* 8039ECDC 0039BC1C  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8039ECE0 0039BC20  90 01 00 0C */	stw r0, 0xc(r1)
/* 8039ECE4 0039BC24  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8039ECE8 0039BC28  90 01 00 28 */	stw r0, 0x28(r1)
/* 8039ECEC 0039BC2C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8039ECF0 0039BC30  90 01 00 20 */	stw r0, 0x20(r1)
/* 8039ECF4 0039BC34  4B C9 79 99 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 8039ECF8 0039BC38  38 60 00 00 */	li r3, 0
/* 8039ECFC 0039BC3C  4B D4 A4 5D */	bl GXSetAlphaUpdate
/* 8039ED00 0039BC40  48 08 45 25 */	bl getRenderModeObj__6SystemFv
/* 8039ED04 0039BC44  A3 43 00 06 */	lhz r26, 6(r3)
/* 8039ED08 0039BC48  48 08 45 1D */	bl getRenderModeObj__6SystemFv
/* 8039ED0C 0039BC4C  A0 83 00 04 */	lhz r4, 4(r3)
/* 8039ED10 0039BC50  3C 00 43 30 */	lis r0, 0x4330
/* 8039ED14 0039BC54  C0 62 0E 10 */	lfs f3, lbl_8051F170@sda21(r2)
/* 8039ED18 0039BC58  7F E3 FB 78 */	mr r3, r31
/* 8039ED1C 0039BC5C  90 81 06 7C */	stw r4, 0x67c(r1)
/* 8039ED20 0039BC60  38 81 00 60 */	addi r4, r1, 0x60
/* 8039ED24 0039BC64  C8 42 0F 28 */	lfd f2, lbl_8051F288@sda21(r2)
/* 8039ED28 0039BC68  90 01 06 78 */	stw r0, 0x678(r1)
/* 8039ED2C 0039BC6C  C8 01 06 78 */	lfd f0, 0x678(r1)
/* 8039ED30 0039BC70  93 41 06 84 */	stw r26, 0x684(r1)
/* 8039ED34 0039BC74  EC 20 10 28 */	fsubs f1, f0, f2
/* 8039ED38 0039BC78  90 01 06 80 */	stw r0, 0x680(r1)
/* 8039ED3C 0039BC7C  C8 01 06 80 */	lfd f0, 0x680(r1)
/* 8039ED40 0039BC80  EC 23 08 2A */	fadds f1, f3, f1
/* 8039ED44 0039BC84  D0 61 00 60 */	stfs f3, 0x60(r1)
/* 8039ED48 0039BC88  EC 00 10 28 */	fsubs f0, f0, f2
/* 8039ED4C 0039BC8C  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 8039ED50 0039BC90  EC 03 00 2A */	fadds f0, f3, f0
/* 8039ED54 0039BC94  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 8039ED58 0039BC98  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 8039ED5C 0039BC9C  4B C9 7A 79 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 8039ED60 0039BCA0  38 60 00 01 */	li r3, 1
/* 8039ED64 0039BCA4  4B D4 A3 F5 */	bl GXSetAlphaUpdate
.L_8039ED68:
/* 8039ED68 0039BCA8  80 7B 00 D4 */	lwz r3, 0xd4(r27)
/* 8039ED6C 0039BCAC  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8039ED70 0039BCB0  2C 00 00 00 */	cmpwi r0, 0
/* 8039ED74 0039BCB4  41 82 00 D8 */	beq .L_8039EE4C
/* 8039ED78 0039BCB8  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8039ED7C 0039BCBC  81 9C 00 BC */	lwz r12, 0xbc(r28)
/* 8039ED80 0039BCC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039ED84 0039BCC4  7D 89 03 A6 */	mtctr r12
/* 8039ED88 0039BCC8  4E 80 04 21 */	bctrl 
/* 8039ED8C 0039BCCC  C3 E2 0E 28 */	lfs f31, lbl_8051F188@sda21(r2)
/* 8039ED90 0039BCD0  7F 7A DB 78 */	mr r26, r27
/* 8039ED94 0039BCD4  3B C0 00 00 */	li r30, 0
.L_8039ED98:
/* 8039ED98 0039BCD8  88 1B 02 2C */	lbz r0, 0x22c(r27)
/* 8039ED9C 0039BCDC  38 60 00 00 */	li r3, 0
/* 8039EDA0 0039BCE0  28 00 00 00 */	cmplwi r0, 0
/* 8039EDA4 0039BCE4  40 82 00 08 */	bne .L_8039EDAC
/* 8039EDA8 0039BCE8  38 60 00 06 */	li r3, 6
.L_8039EDAC:
/* 8039EDAC 0039BCEC  7C 1E 1A 14 */	add r0, r30, r3
/* 8039EDB0 0039BCF0  80 BA 01 14 */	lwz r5, 0x114(r26)
/* 8039EDB4 0039BCF4  54 03 10 3A */	slwi r3, r0, 2
/* 8039EDB8 0039BCF8  C0 DB 03 20 */	lfs f6, 0x320(r27)
/* 8039EDBC 0039BCFC  3B A3 01 84 */	addi r29, r3, 0x184
/* 8039EDC0 0039BD00  C0 A5 00 8C */	lfs f5, 0x8c(r5)
/* 8039EDC4 0039BD04  7C 7B E8 2E */	lwzx r3, r27, r29
/* 8039EDC8 0039BD08  38 80 00 00 */	li r4, 0
/* 8039EDCC 0039BD0C  C0 05 00 9C */	lfs f0, 0x9c(r5)
/* 8039EDD0 0039BD10  38 A0 00 00 */	li r5, 0
/* 8039EDD4 0039BD14  C0 63 00 28 */	lfs f3, 0x28(r3)
/* 8039EDD8 0039BD18  38 C0 00 00 */	li r6, 0
/* 8039EDDC 0039BD1C  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 8039EDE0 0039BD20  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8039EDE4 0039BD24  EC 63 08 28 */	fsubs f3, f3, f1
/* 8039EDE8 0039BD28  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8039EDEC 0039BD2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039EDF0 0039BD30  EC 82 08 28 */	fsubs f4, f2, f1
/* 8039EDF4 0039BD34  C0 5B 03 24 */	lfs f2, 0x324(r27)
/* 8039EDF8 0039BD38  EC 3F 28 FC */	fnmsubs f1, f31, f3, f5
/* 8039EDFC 0039BD3C  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8039EE00 0039BD40  EC 1F 01 3C */	fnmsubs f0, f31, f4, f0
/* 8039EE04 0039BD44  EC 26 08 2A */	fadds f1, f6, f1
/* 8039EE08 0039BD48  EC 42 00 2A */	fadds f2, f2, f0
/* 8039EE0C 0039BD4C  7D 89 03 A6 */	mtctr r12
/* 8039EE10 0039BD50  4E 80 04 21 */	bctrl 
/* 8039EE14 0039BD54  7C 7B E8 2E */	lwzx r3, r27, r29
/* 8039EE18 0039BD58  81 83 00 00 */	lwz r12, 0(r3)
/* 8039EE1C 0039BD5C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039EE20 0039BD60  7D 89 03 A6 */	mtctr r12
/* 8039EE24 0039BD64  4E 80 04 21 */	bctrl 
/* 8039EE28 0039BD68  3B DE 00 01 */	addi r30, r30, 1
/* 8039EE2C 0039BD6C  3B 5A 00 04 */	addi r26, r26, 4
/* 8039EE30 0039BD70  2C 1E 00 06 */	cmpwi r30, 6
/* 8039EE34 0039BD74  41 80 FF 64 */	blt .L_8039ED98
/* 8039EE38 0039BD78  38 7C 01 90 */	addi r3, r28, 0x190
/* 8039EE3C 0039BD7C  81 9C 01 90 */	lwz r12, 0x190(r28)
/* 8039EE40 0039BD80  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8039EE44 0039BD84  7D 89 03 A6 */	mtctr r12
/* 8039EE48 0039BD88  4E 80 04 21 */	bctrl 
.L_8039EE4C:
/* 8039EE4C 0039BD8C  88 7B 00 44 */	lbz r3, 0x44(r27)
/* 8039EE50 0039BD90  38 00 FF FF */	li r0, -1
/* 8039EE54 0039BD94  90 01 00 38 */	stw r0, 0x38(r1)
/* 8039EE58 0039BD98  38 00 00 00 */	li r0, 0
/* 8039EE5C 0039BD9C  21 03 00 FF */	subfic r8, r3, 0xff
/* 8039EE60 0039BDA0  7F E3 FB 78 */	mr r3, r31
/* 8039EE64 0039BDA4  98 01 00 38 */	stb r0, 0x38(r1)
/* 8039EE68 0039BDA8  38 81 00 10 */	addi r4, r1, 0x10
/* 8039EE6C 0039BDAC  38 A1 00 14 */	addi r5, r1, 0x14
/* 8039EE70 0039BDB0  38 C1 00 18 */	addi r6, r1, 0x18
/* 8039EE74 0039BDB4  98 01 00 39 */	stb r0, 0x39(r1)
/* 8039EE78 0039BDB8  38 E1 00 1C */	addi r7, r1, 0x1c
/* 8039EE7C 0039BDBC  98 01 00 3A */	stb r0, 0x3a(r1)
/* 8039EE80 0039BDC0  99 01 00 3B */	stb r8, 0x3b(r1)
/* 8039EE84 0039BDC4  80 01 00 38 */	lwz r0, 0x38(r1)
/* 8039EE88 0039BDC8  90 01 00 08 */	stw r0, 8(r1)
/* 8039EE8C 0039BDCC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8039EE90 0039BDD0  90 01 00 18 */	stw r0, 0x18(r1)
/* 8039EE94 0039BDD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039EE98 0039BDD8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8039EE9C 0039BDDC  4B C9 77 F1 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 8039EEA0 0039BDE0  38 60 00 00 */	li r3, 0
/* 8039EEA4 0039BDE4  4B D4 A2 B5 */	bl GXSetAlphaUpdate
/* 8039EEA8 0039BDE8  48 08 43 7D */	bl getRenderModeObj__6SystemFv
/* 8039EEAC 0039BDEC  A3 43 00 06 */	lhz r26, 6(r3)
/* 8039EEB0 0039BDF0  48 08 43 75 */	bl getRenderModeObj__6SystemFv
/* 8039EEB4 0039BDF4  A0 83 00 04 */	lhz r4, 4(r3)
/* 8039EEB8 0039BDF8  3C 00 43 30 */	lis r0, 0x4330
/* 8039EEBC 0039BDFC  C0 62 0E 10 */	lfs f3, lbl_8051F170@sda21(r2)
/* 8039EEC0 0039BE00  7F E3 FB 78 */	mr r3, r31
/* 8039EEC4 0039BE04  90 81 06 84 */	stw r4, 0x684(r1)
/* 8039EEC8 0039BE08  38 81 00 50 */	addi r4, r1, 0x50
/* 8039EECC 0039BE0C  C8 42 0F 28 */	lfd f2, lbl_8051F288@sda21(r2)
/* 8039EED0 0039BE10  90 01 06 80 */	stw r0, 0x680(r1)
/* 8039EED4 0039BE14  C8 01 06 80 */	lfd f0, 0x680(r1)
/* 8039EED8 0039BE18  93 41 06 7C */	stw r26, 0x67c(r1)
/* 8039EEDC 0039BE1C  EC 20 10 28 */	fsubs f1, f0, f2
/* 8039EEE0 0039BE20  90 01 06 78 */	stw r0, 0x678(r1)
/* 8039EEE4 0039BE24  C8 01 06 78 */	lfd f0, 0x678(r1)
/* 8039EEE8 0039BE28  EC 23 08 2A */	fadds f1, f3, f1
/* 8039EEEC 0039BE2C  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 8039EEF0 0039BE30  EC 00 10 28 */	fsubs f0, f0, f2
/* 8039EEF4 0039BE34  D0 61 00 54 */	stfs f3, 0x54(r1)
/* 8039EEF8 0039BE38  EC 03 00 2A */	fadds f0, f3, f0
/* 8039EEFC 0039BE3C  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 8039EF00 0039BE40  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 8039EF04 0039BE44  4B C9 78 D1 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 8039EF08 0039BE48  38 60 00 01 */	li r3, 1
/* 8039EF0C 0039BE4C  4B D4 A2 4D */	bl GXSetAlphaUpdate
/* 8039EF10 0039BE50  E3 E1 06 D8 */	psq_l f31, 1752(r1), 0, qr0
/* 8039EF14 0039BE54  CB E1 06 D0 */	lfd f31, 0x6d0(r1)
/* 8039EF18 0039BE58  E3 C1 06 C8 */	psq_l f30, 1736(r1), 0, qr0
/* 8039EF1C 0039BE5C  CB C1 06 C0 */	lfd f30, 0x6c0(r1)
/* 8039EF20 0039BE60  E3 A1 06 B8 */	psq_l f29, 1720(r1), 0, qr0
/* 8039EF24 0039BE64  CB A1 06 B0 */	lfd f29, 0x6b0(r1)
/* 8039EF28 0039BE68  E3 81 06 A8 */	psq_l f28, 1704(r1), 0, qr0
/* 8039EF2C 0039BE6C  CB 81 06 A0 */	lfd f28, 0x6a0(r1)
/* 8039EF30 0039BE70  BB 41 06 88 */	lmw r26, 0x688(r1)
/* 8039EF34 0039BE74  80 01 06 E4 */	lwz r0, 0x6e4(r1)
/* 8039EF38 0039BE78  7C 08 03 A6 */	mtlr r0
/* 8039EF3C 0039BE7C  38 21 06 E0 */	addi r1, r1, 0x6e0
/* 8039EF40 0039BE80  4E 80 00 20 */	blr 
.endfn doDraw__Q28Morimura9TVsSelectFR8Graphics

.fn __as__10J2DPictureFRC10J2DPicture, weak
/* 8039EF44 0039BE84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039EF48 0039BE88  7C 08 02 A6 */	mflr r0
/* 8039EF4C 0039BE8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039EF50 0039BE90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8039EF54 0039BE94  7C 9F 23 78 */	mr r31, r4
/* 8039EF58 0039BE98  93 C1 00 08 */	stw r30, 8(r1)
/* 8039EF5C 0039BE9C  7C 7E 1B 78 */	mr r30, r3
/* 8039EF60 0039BEA0  48 00 01 B9 */	bl __as__7J2DPaneFRC7J2DPane
/* 8039EF64 0039BEA4  80 7F 01 00 */	lwz r3, 0x100(r31)
/* 8039EF68 0039BEA8  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 8039EF6C 0039BEAC  90 7E 01 00 */	stw r3, 0x100(r30)
/* 8039EF70 0039BEB0  80 7F 01 08 */	lwz r3, 0x108(r31)
/* 8039EF74 0039BEB4  90 1E 01 04 */	stw r0, 0x104(r30)
/* 8039EF78 0039BEB8  80 1F 01 0C */	lwz r0, 0x10c(r31)
/* 8039EF7C 0039BEBC  90 7E 01 08 */	stw r3, 0x108(r30)
/* 8039EF80 0039BEC0  88 7F 01 10 */	lbz r3, 0x110(r31)
/* 8039EF84 0039BEC4  90 1E 01 0C */	stw r0, 0x10c(r30)
/* 8039EF88 0039BEC8  88 1F 01 11 */	lbz r0, 0x111(r31)
/* 8039EF8C 0039BECC  98 7E 01 10 */	stb r3, 0x110(r30)
/* 8039EF90 0039BED0  80 7F 01 12 */	lwz r3, 0x112(r31)
/* 8039EF94 0039BED4  98 1E 01 11 */	stb r0, 0x111(r30)
/* 8039EF98 0039BED8  80 1F 01 16 */	lwz r0, 0x116(r31)
/* 8039EF9C 0039BEDC  90 7E 01 12 */	stw r3, 0x112(r30)
/* 8039EFA0 0039BEE0  80 7F 01 1A */	lwz r3, 0x11a(r31)
/* 8039EFA4 0039BEE4  90 1E 01 16 */	stw r0, 0x116(r30)
/* 8039EFA8 0039BEE8  80 1F 01 1E */	lwz r0, 0x11e(r31)
/* 8039EFAC 0039BEEC  90 7E 01 1A */	stw r3, 0x11a(r30)
/* 8039EFB0 0039BEF0  80 7F 01 24 */	lwz r3, 0x124(r31)
/* 8039EFB4 0039BEF4  90 1E 01 1E */	stw r0, 0x11e(r30)
/* 8039EFB8 0039BEF8  80 1F 01 28 */	lwz r0, 0x128(r31)
/* 8039EFBC 0039BEFC  90 7E 01 24 */	stw r3, 0x124(r30)
/* 8039EFC0 0039BF00  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 8039EFC4 0039BF04  90 1E 01 28 */	stw r0, 0x128(r30)
/* 8039EFC8 0039BF08  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 8039EFCC 0039BF0C  90 7E 01 2C */	stw r3, 0x12c(r30)
/* 8039EFD0 0039BF10  80 7F 01 34 */	lwz r3, 0x134(r31)
/* 8039EFD4 0039BF14  90 1E 01 30 */	stw r0, 0x130(r30)
/* 8039EFD8 0039BF18  80 1F 01 38 */	lwz r0, 0x138(r31)
/* 8039EFDC 0039BF1C  90 7E 01 34 */	stw r3, 0x134(r30)
/* 8039EFE0 0039BF20  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 8039EFE4 0039BF24  90 1E 01 38 */	stw r0, 0x138(r30)
/* 8039EFE8 0039BF28  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 8039EFEC 0039BF2C  90 7E 01 3C */	stw r3, 0x13c(r30)
/* 8039EFF0 0039BF30  80 7F 01 44 */	lwz r3, 0x144(r31)
/* 8039EFF4 0039BF34  90 1E 01 40 */	stw r0, 0x140(r30)
/* 8039EFF8 0039BF38  88 1F 01 48 */	lbz r0, 0x148(r31)
/* 8039EFFC 0039BF3C  90 7E 01 44 */	stw r3, 0x144(r30)
/* 8039F000 0039BF40  88 7F 01 49 */	lbz r3, 0x149(r31)
/* 8039F004 0039BF44  98 1E 01 48 */	stb r0, 0x148(r30)
/* 8039F008 0039BF48  88 1F 01 4A */	lbz r0, 0x14a(r31)
/* 8039F00C 0039BF4C  98 7E 01 49 */	stb r3, 0x149(r30)
/* 8039F010 0039BF50  88 7F 01 4B */	lbz r3, 0x14b(r31)
/* 8039F014 0039BF54  98 1E 01 4A */	stb r0, 0x14a(r30)
/* 8039F018 0039BF58  88 1F 01 4C */	lbz r0, 0x14c(r31)
/* 8039F01C 0039BF5C  98 7E 01 4B */	stb r3, 0x14b(r30)
/* 8039F020 0039BF60  88 7F 01 4D */	lbz r3, 0x14d(r31)
/* 8039F024 0039BF64  98 1E 01 4C */	stb r0, 0x14c(r30)
/* 8039F028 0039BF68  88 1F 01 4E */	lbz r0, 0x14e(r31)
/* 8039F02C 0039BF6C  98 7E 01 4D */	stb r3, 0x14d(r30)
/* 8039F030 0039BF70  88 7F 01 4F */	lbz r3, 0x14f(r31)
/* 8039F034 0039BF74  98 1E 01 4E */	stb r0, 0x14e(r30)
/* 8039F038 0039BF78  88 1F 01 50 */	lbz r0, 0x150(r31)
/* 8039F03C 0039BF7C  98 7E 01 4F */	stb r3, 0x14f(r30)
/* 8039F040 0039BF80  88 7F 01 51 */	lbz r3, 0x151(r31)
/* 8039F044 0039BF84  98 1E 01 50 */	stb r0, 0x150(r30)
/* 8039F048 0039BF88  88 1F 01 52 */	lbz r0, 0x152(r31)
/* 8039F04C 0039BF8C  98 7E 01 51 */	stb r3, 0x151(r30)
/* 8039F050 0039BF90  88 7F 01 53 */	lbz r3, 0x153(r31)
/* 8039F054 0039BF94  98 1E 01 52 */	stb r0, 0x152(r30)
/* 8039F058 0039BF98  88 1F 01 54 */	lbz r0, 0x154(r31)
/* 8039F05C 0039BF9C  98 7E 01 53 */	stb r3, 0x153(r30)
/* 8039F060 0039BFA0  88 7F 01 55 */	lbz r3, 0x155(r31)
/* 8039F064 0039BFA4  98 1E 01 54 */	stb r0, 0x154(r30)
/* 8039F068 0039BFA8  88 1F 01 56 */	lbz r0, 0x156(r31)
/* 8039F06C 0039BFAC  98 7E 01 55 */	stb r3, 0x155(r30)
/* 8039F070 0039BFB0  88 7F 01 57 */	lbz r3, 0x157(r31)
/* 8039F074 0039BFB4  98 1E 01 56 */	stb r0, 0x156(r30)
/* 8039F078 0039BFB8  88 1F 01 58 */	lbz r0, 0x158(r31)
/* 8039F07C 0039BFBC  98 7E 01 57 */	stb r3, 0x157(r30)
/* 8039F080 0039BFC0  88 7F 01 59 */	lbz r3, 0x159(r31)
/* 8039F084 0039BFC4  98 1E 01 58 */	stb r0, 0x158(r30)
/* 8039F088 0039BFC8  88 1F 01 5A */	lbz r0, 0x15a(r31)
/* 8039F08C 0039BFCC  98 7E 01 59 */	stb r3, 0x159(r30)
/* 8039F090 0039BFD0  88 7F 01 5B */	lbz r3, 0x15b(r31)
/* 8039F094 0039BFD4  98 1E 01 5A */	stb r0, 0x15a(r30)
/* 8039F098 0039BFD8  88 1F 01 5C */	lbz r0, 0x15c(r31)
/* 8039F09C 0039BFDC  98 7E 01 5B */	stb r3, 0x15b(r30)
/* 8039F0A0 0039BFE0  88 7F 01 5D */	lbz r3, 0x15d(r31)
/* 8039F0A4 0039BFE4  98 1E 01 5C */	stb r0, 0x15c(r30)
/* 8039F0A8 0039BFE8  88 1F 01 5E */	lbz r0, 0x15e(r31)
/* 8039F0AC 0039BFEC  98 7E 01 5D */	stb r3, 0x15d(r30)
/* 8039F0B0 0039BFF0  88 7F 01 5F */	lbz r3, 0x15f(r31)
/* 8039F0B4 0039BFF4  98 1E 01 5E */	stb r0, 0x15e(r30)
/* 8039F0B8 0039BFF8  88 1F 01 60 */	lbz r0, 0x160(r31)
/* 8039F0BC 0039BFFC  98 7E 01 5F */	stb r3, 0x15f(r30)
/* 8039F0C0 0039C000  88 7F 01 61 */	lbz r3, 0x161(r31)
/* 8039F0C4 0039C004  98 1E 01 60 */	stb r0, 0x160(r30)
/* 8039F0C8 0039C008  88 1F 01 62 */	lbz r0, 0x162(r31)
/* 8039F0CC 0039C00C  98 7E 01 61 */	stb r3, 0x161(r30)
/* 8039F0D0 0039C010  88 7F 01 63 */	lbz r3, 0x163(r31)
/* 8039F0D4 0039C014  98 1E 01 62 */	stb r0, 0x162(r30)
/* 8039F0D8 0039C018  88 1F 01 64 */	lbz r0, 0x164(r31)
/* 8039F0DC 0039C01C  98 7E 01 63 */	stb r3, 0x163(r30)
/* 8039F0E0 0039C020  88 7F 01 65 */	lbz r3, 0x165(r31)
/* 8039F0E4 0039C024  98 1E 01 64 */	stb r0, 0x164(r30)
/* 8039F0E8 0039C028  88 1F 01 66 */	lbz r0, 0x166(r31)
/* 8039F0EC 0039C02C  98 7E 01 65 */	stb r3, 0x165(r30)
/* 8039F0F0 0039C030  98 1E 01 66 */	stb r0, 0x166(r30)
/* 8039F0F4 0039C034  88 1F 01 67 */	lbz r0, 0x167(r31)
/* 8039F0F8 0039C038  7F C3 F3 78 */	mr r3, r30
/* 8039F0FC 0039C03C  98 1E 01 67 */	stb r0, 0x167(r30)
/* 8039F100 0039C040  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8039F104 0039C044  83 C1 00 08 */	lwz r30, 8(r1)
/* 8039F108 0039C048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039F10C 0039C04C  7C 08 03 A6 */	mtlr r0
/* 8039F110 0039C050  38 21 00 10 */	addi r1, r1, 0x10
/* 8039F114 0039C054  4E 80 00 20 */	blr 
.endfn __as__10J2DPictureFRC10J2DPicture

.fn __as__7J2DPaneFRC7J2DPane, weak
/* 8039F118 0039C058  A0 A4 00 04 */	lhz r5, 4(r4)
/* 8039F11C 0039C05C  80 04 00 08 */	lwz r0, 8(r4)
/* 8039F120 0039C060  B0 A3 00 04 */	sth r5, 4(r3)
/* 8039F124 0039C064  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 8039F128 0039C068  90 03 00 08 */	stw r0, 8(r3)
/* 8039F12C 0039C06C  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8039F130 0039C070  90 A3 00 14 */	stw r5, 0x14(r3)
/* 8039F134 0039C074  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 8039F138 0039C078  90 03 00 10 */	stw r0, 0x10(r3)
/* 8039F13C 0039C07C  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8039F140 0039C080  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 8039F144 0039C084  80 A4 00 20 */	lwz r5, 0x20(r4)
/* 8039F148 0039C088  90 03 00 18 */	stw r0, 0x18(r3)
/* 8039F14C 0039C08C  80 04 00 24 */	lwz r0, 0x24(r4)
/* 8039F150 0039C090  90 A3 00 20 */	stw r5, 0x20(r3)
/* 8039F154 0039C094  80 A4 00 28 */	lwz r5, 0x28(r4)
/* 8039F158 0039C098  90 03 00 24 */	stw r0, 0x24(r3)
/* 8039F15C 0039C09C  80 04 00 2C */	lwz r0, 0x2c(r4)
/* 8039F160 0039C0A0  90 A3 00 28 */	stw r5, 0x28(r3)
/* 8039F164 0039C0A4  80 A4 00 30 */	lwz r5, 0x30(r4)
/* 8039F168 0039C0A8  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8039F16C 0039C0AC  80 04 00 34 */	lwz r0, 0x34(r4)
/* 8039F170 0039C0B0  90 A3 00 30 */	stw r5, 0x30(r3)
/* 8039F174 0039C0B4  80 A4 00 38 */	lwz r5, 0x38(r4)
/* 8039F178 0039C0B8  90 03 00 34 */	stw r0, 0x34(r3)
/* 8039F17C 0039C0BC  80 04 00 3C */	lwz r0, 0x3c(r4)
/* 8039F180 0039C0C0  90 A3 00 38 */	stw r5, 0x38(r3)
/* 8039F184 0039C0C4  80 A4 00 40 */	lwz r5, 0x40(r4)
/* 8039F188 0039C0C8  90 03 00 3C */	stw r0, 0x3c(r3)
/* 8039F18C 0039C0CC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8039F190 0039C0D0  90 A3 00 40 */	stw r5, 0x40(r3)
/* 8039F194 0039C0D4  80 A4 00 48 */	lwz r5, 0x48(r4)
/* 8039F198 0039C0D8  90 03 00 44 */	stw r0, 0x44(r3)
/* 8039F19C 0039C0DC  80 04 00 4C */	lwz r0, 0x4c(r4)
/* 8039F1A0 0039C0E0  90 A3 00 48 */	stw r5, 0x48(r3)
/* 8039F1A4 0039C0E4  80 A4 00 50 */	lwz r5, 0x50(r4)
/* 8039F1A8 0039C0E8  90 03 00 4C */	stw r0, 0x4c(r3)
/* 8039F1AC 0039C0EC  80 04 00 54 */	lwz r0, 0x54(r4)
/* 8039F1B0 0039C0F0  90 A3 00 50 */	stw r5, 0x50(r3)
/* 8039F1B4 0039C0F4  80 A4 00 58 */	lwz r5, 0x58(r4)
/* 8039F1B8 0039C0F8  90 03 00 54 */	stw r0, 0x54(r3)
/* 8039F1BC 0039C0FC  80 04 00 5C */	lwz r0, 0x5c(r4)
/* 8039F1C0 0039C100  90 A3 00 58 */	stw r5, 0x58(r3)
/* 8039F1C4 0039C104  80 A4 00 60 */	lwz r5, 0x60(r4)
/* 8039F1C8 0039C108  90 03 00 5C */	stw r0, 0x5c(r3)
/* 8039F1CC 0039C10C  80 04 00 64 */	lwz r0, 0x64(r4)
/* 8039F1D0 0039C110  90 A3 00 60 */	stw r5, 0x60(r3)
/* 8039F1D4 0039C114  80 A4 00 68 */	lwz r5, 0x68(r4)
/* 8039F1D8 0039C118  90 03 00 64 */	stw r0, 0x64(r3)
/* 8039F1DC 0039C11C  80 04 00 6C */	lwz r0, 0x6c(r4)
/* 8039F1E0 0039C120  90 A3 00 68 */	stw r5, 0x68(r3)
/* 8039F1E4 0039C124  80 A4 00 70 */	lwz r5, 0x70(r4)
/* 8039F1E8 0039C128  90 03 00 6C */	stw r0, 0x6c(r3)
/* 8039F1EC 0039C12C  80 04 00 74 */	lwz r0, 0x74(r4)
/* 8039F1F0 0039C130  90 A3 00 70 */	stw r5, 0x70(r3)
/* 8039F1F4 0039C134  80 A4 00 78 */	lwz r5, 0x78(r4)
/* 8039F1F8 0039C138  90 03 00 74 */	stw r0, 0x74(r3)
/* 8039F1FC 0039C13C  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8039F200 0039C140  90 A3 00 78 */	stw r5, 0x78(r3)
/* 8039F204 0039C144  80 A4 00 80 */	lwz r5, 0x80(r4)
/* 8039F208 0039C148  90 03 00 7C */	stw r0, 0x7c(r3)
/* 8039F20C 0039C14C  80 04 00 84 */	lwz r0, 0x84(r4)
/* 8039F210 0039C150  90 A3 00 80 */	stw r5, 0x80(r3)
/* 8039F214 0039C154  80 A4 00 88 */	lwz r5, 0x88(r4)
/* 8039F218 0039C158  90 03 00 84 */	stw r0, 0x84(r3)
/* 8039F21C 0039C15C  80 04 00 8C */	lwz r0, 0x8c(r4)
/* 8039F220 0039C160  90 A3 00 88 */	stw r5, 0x88(r3)
/* 8039F224 0039C164  80 A4 00 90 */	lwz r5, 0x90(r4)
/* 8039F228 0039C168  90 03 00 8C */	stw r0, 0x8c(r3)
/* 8039F22C 0039C16C  80 04 00 94 */	lwz r0, 0x94(r4)
/* 8039F230 0039C170  90 A3 00 90 */	stw r5, 0x90(r3)
/* 8039F234 0039C174  80 A4 00 98 */	lwz r5, 0x98(r4)
/* 8039F238 0039C178  90 03 00 94 */	stw r0, 0x94(r3)
/* 8039F23C 0039C17C  80 04 00 9C */	lwz r0, 0x9c(r4)
/* 8039F240 0039C180  90 A3 00 98 */	stw r5, 0x98(r3)
/* 8039F244 0039C184  80 A4 00 A0 */	lwz r5, 0xa0(r4)
/* 8039F248 0039C188  90 03 00 9C */	stw r0, 0x9c(r3)
/* 8039F24C 0039C18C  80 04 00 A4 */	lwz r0, 0xa4(r4)
/* 8039F250 0039C190  90 A3 00 A0 */	stw r5, 0xa0(r3)
/* 8039F254 0039C194  80 A4 00 A8 */	lwz r5, 0xa8(r4)
/* 8039F258 0039C198  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 8039F25C 0039C19C  80 04 00 AC */	lwz r0, 0xac(r4)
/* 8039F260 0039C1A0  90 A3 00 A8 */	stw r5, 0xa8(r3)
/* 8039F264 0039C1A4  88 A4 00 B0 */	lbz r5, 0xb0(r4)
/* 8039F268 0039C1A8  90 03 00 AC */	stw r0, 0xac(r3)
/* 8039F26C 0039C1AC  88 04 00 B1 */	lbz r0, 0xb1(r4)
/* 8039F270 0039C1B0  98 A3 00 B0 */	stb r5, 0xb0(r3)
/* 8039F274 0039C1B4  88 A4 00 B2 */	lbz r5, 0xb2(r4)
/* 8039F278 0039C1B8  98 03 00 B1 */	stb r0, 0xb1(r3)
/* 8039F27C 0039C1BC  88 04 00 B3 */	lbz r0, 0xb3(r4)
/* 8039F280 0039C1C0  98 A3 00 B2 */	stb r5, 0xb2(r3)
/* 8039F284 0039C1C4  88 A4 00 B4 */	lbz r5, 0xb4(r4)
/* 8039F288 0039C1C8  98 03 00 B3 */	stb r0, 0xb3(r3)
/* 8039F28C 0039C1CC  88 04 00 B5 */	lbz r0, 0xb5(r4)
/* 8039F290 0039C1D0  98 A3 00 B4 */	stb r5, 0xb4(r3)
/* 8039F294 0039C1D4  88 A4 00 B6 */	lbz r5, 0xb6(r4)
/* 8039F298 0039C1D8  98 03 00 B5 */	stb r0, 0xb5(r3)
/* 8039F29C 0039C1DC  88 04 00 B7 */	lbz r0, 0xb7(r4)
/* 8039F2A0 0039C1E0  98 A3 00 B6 */	stb r5, 0xb6(r3)
/* 8039F2A4 0039C1E4  C0 04 00 B8 */	lfs f0, 0xb8(r4)
/* 8039F2A8 0039C1E8  98 03 00 B7 */	stb r0, 0xb7(r3)
/* 8039F2AC 0039C1EC  D0 03 00 B8 */	stfs f0, 0xb8(r3)
/* 8039F2B0 0039C1F0  C0 24 00 BC */	lfs f1, 0xbc(r4)
/* 8039F2B4 0039C1F4  C0 04 00 C0 */	lfs f0, 0xc0(r4)
/* 8039F2B8 0039C1F8  D0 23 00 BC */	stfs f1, 0xbc(r3)
/* 8039F2BC 0039C1FC  C0 24 00 C4 */	lfs f1, 0xc4(r4)
/* 8039F2C0 0039C200  D0 03 00 C0 */	stfs f0, 0xc0(r3)
/* 8039F2C4 0039C204  C0 04 00 C8 */	lfs f0, 0xc8(r4)
/* 8039F2C8 0039C208  D0 23 00 C4 */	stfs f1, 0xc4(r3)
/* 8039F2CC 0039C20C  C0 24 00 CC */	lfs f1, 0xcc(r4)
/* 8039F2D0 0039C210  D0 03 00 C8 */	stfs f0, 0xc8(r3)
/* 8039F2D4 0039C214  C0 04 00 D0 */	lfs f0, 0xd0(r4)
/* 8039F2D8 0039C218  D0 23 00 CC */	stfs f1, 0xcc(r3)
/* 8039F2DC 0039C21C  C0 24 00 D4 */	lfs f1, 0xd4(r4)
/* 8039F2E0 0039C220  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 8039F2E4 0039C224  C0 04 00 D8 */	lfs f0, 0xd8(r4)
/* 8039F2E8 0039C228  D0 23 00 D4 */	stfs f1, 0xd4(r3)
/* 8039F2EC 0039C22C  80 A4 00 DC */	lwz r5, 0xdc(r4)
/* 8039F2F0 0039C230  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 8039F2F4 0039C234  80 04 00 E0 */	lwz r0, 0xe0(r4)
/* 8039F2F8 0039C238  90 A3 00 DC */	stw r5, 0xdc(r3)
/* 8039F2FC 0039C23C  80 A4 00 E4 */	lwz r5, 0xe4(r4)
/* 8039F300 0039C240  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 8039F304 0039C244  80 04 00 E8 */	lwz r0, 0xe8(r4)
/* 8039F308 0039C248  90 A3 00 E4 */	stw r5, 0xe4(r3)
/* 8039F30C 0039C24C  80 A4 00 EC */	lwz r5, 0xec(r4)
/* 8039F310 0039C250  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 8039F314 0039C254  80 04 00 F0 */	lwz r0, 0xf0(r4)
/* 8039F318 0039C258  90 A3 00 EC */	stw r5, 0xec(r3)
/* 8039F31C 0039C25C  80 A4 00 F4 */	lwz r5, 0xf4(r4)
/* 8039F320 0039C260  90 03 00 F0 */	stw r0, 0xf0(r3)
/* 8039F324 0039C264  80 04 00 F8 */	lwz r0, 0xf8(r4)
/* 8039F328 0039C268  90 A3 00 F4 */	stw r5, 0xf4(r3)
/* 8039F32C 0039C26C  90 03 00 F8 */	stw r0, 0xf8(r3)
/* 8039F330 0039C270  4E 80 00 20 */	blr 
.endfn __as__7J2DPaneFRC7J2DPane

.fn doUpdateFadeinFinish__Q28Morimura9TVsSelectFv, global
/* 8039F334 0039C274  38 00 00 01 */	li r0, 1
/* 8039F338 0039C278  98 03 00 45 */	stb r0, 0x45(r3)
/* 8039F33C 0039C27C  4E 80 00 20 */	blr 
.endfn doUpdateFadeinFinish__Q28Morimura9TVsSelectFv

.fn doUpdateFadeoutFinish__Q28Morimura9TVsSelectFv, global
/* 8039F340 0039C280  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039F344 0039C284  7C 08 02 A6 */	mflr r0
/* 8039F348 0039C288  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039F34C 0039C28C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8039F350 0039C290  7C 7F 1B 78 */	mr r31, r3
/* 8039F354 0039C294  80 03 01 F8 */	lwz r0, 0x1f8(r3)
/* 8039F358 0039C298  28 00 00 00 */	cmplwi r0, 0
/* 8039F35C 0039C29C  40 82 00 20 */	bne .L_8039F37C
/* 8039F360 0039C2A0  3C 60 80 49 */	lis r3, lbl_80494B24@ha
/* 8039F364 0039C2A4  3C A0 80 49 */	lis r5, lbl_80494B34@ha
/* 8039F368 0039C2A8  38 63 4B 24 */	addi r3, r3, lbl_80494B24@l
/* 8039F36C 0039C2AC  38 80 08 30 */	li r4, 0x830
/* 8039F370 0039C2B0  38 A5 4B 34 */	addi r5, r5, lbl_80494B34@l
/* 8039F374 0039C2B4  4C C6 31 82 */	crclr 6
/* 8039F378 0039C2B8  4B C8 B2 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039F37C:
/* 8039F37C 0039C2BC  80 1F 02 74 */	lwz r0, 0x274(r31)
/* 8039F380 0039C2C0  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039F384 0039C2C4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8039F388 0039C2C8  80 1F 02 78 */	lwz r0, 0x278(r31)
/* 8039F38C 0039C2CC  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039F390 0039C2D0  90 03 00 20 */	stw r0, 0x20(r3)
/* 8039F394 0039C2D4  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8039F398 0039C2D8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8039F39C 0039C2DC  54 00 10 3A */	slwi r0, r0, 2
/* 8039F3A0 0039C2E0  7C 63 00 2E */	lwzx r3, r3, r0
/* 8039F3A4 0039C2E4  48 00 32 19 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8039F3A8 0039C2E8  80 9F 01 F8 */	lwz r4, 0x1f8(r31)
/* 8039F3AC 0039C2EC  90 64 00 14 */	stw r3, 0x14(r4)
/* 8039F3B0 0039C2F0  88 1F 02 28 */	lbz r0, 0x228(r31)
/* 8039F3B4 0039C2F4  28 00 00 00 */	cmplwi r0, 0
/* 8039F3B8 0039C2F8  41 82 00 14 */	beq .L_8039F3CC
/* 8039F3BC 0039C2FC  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039F3C0 0039C300  38 00 00 03 */	li r0, 3
/* 8039F3C4 0039C304  90 03 00 34 */	stw r0, 0x34(r3)
/* 8039F3C8 0039C308  48 00 00 10 */	b .L_8039F3D8
.L_8039F3CC:
/* 8039F3CC 0039C30C  80 7F 01 F8 */	lwz r3, 0x1f8(r31)
/* 8039F3D0 0039C310  38 00 00 02 */	li r0, 2
/* 8039F3D4 0039C314  90 03 00 34 */	stw r0, 0x34(r3)
.L_8039F3D8:
/* 8039F3D8 0039C318  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039F3DC 0039C31C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8039F3E0 0039C320  7C 08 03 A6 */	mtlr r0
/* 8039F3E4 0039C324  38 21 00 10 */	addi r1, r1, 0x10
/* 8039F3E8 0039C328  4E 80 00 20 */	blr 
.endfn doUpdateFadeoutFinish__Q28Morimura9TVsSelectFv

.fn paneInit__Q28Morimura9TVsSelectFv, global
/* 8039F3EC 0039C32C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8039F3F0 0039C330  7C 08 02 A6 */	mflr r0
/* 8039F3F4 0039C334  3C C0 80 49 */	lis r6, lbl_80494B18@ha
/* 8039F3F8 0039C338  3C A0 5F 30 */	lis r5, 0x5F303735@ha
/* 8039F3FC 0039C33C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8039F400 0039C340  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 8039F404 0039C344  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8039F408 0039C348  3B E6 4B 18 */	addi r31, r6, lbl_80494B18@l
/* 8039F40C 0039C34C  38 C5 37 35 */	addi r6, r5, 0x5F303735@l
/* 8039F410 0039C350  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 8039F414 0039C354  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8039F418 0039C358  7C 7E 1B 78 */	mr r30, r3
/* 8039F41C 0039C35C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8039F420 0039C360  93 81 00 10 */	stw r28, 0x10(r1)
/* 8039F424 0039C364  80 63 00 7C */	lwz r3, 0x7c(r3)
/* 8039F428 0039C368  80 63 00 08 */	lwz r3, 8(r3)
/* 8039F42C 0039C36C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F430 0039C370  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F434 0039C374  7D 89 03 A6 */	mtctr r12
/* 8039F438 0039C378  4E 80 04 21 */	bctrl 
/* 8039F43C 0039C37C  90 7E 00 E8 */	stw r3, 0xe8(r30)
/* 8039F440 0039C380  80 1E 00 E8 */	lwz r0, 0xe8(r30)
/* 8039F444 0039C384  28 00 00 00 */	cmplwi r0, 0
/* 8039F448 0039C388  40 82 00 18 */	bne .L_8039F460
/* 8039F44C 0039C38C  38 7F 00 0C */	addi r3, r31, 0xc
/* 8039F450 0039C390  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8039F454 0039C394  38 80 08 47 */	li r4, 0x847
/* 8039F458 0039C398  4C C6 31 82 */	crclr 6
/* 8039F45C 0039C39C  4B C8 B1 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039F460:
/* 8039F460 0039C3A0  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 8039F464 0039C3A4  3C A0 6E 75 */	lis r5, 0x6E753131@ha
/* 8039F468 0039C3A8  3C 80 54 62 */	lis r4, 0x54626D65@ha
/* 8039F46C 0039C3AC  80 63 00 08 */	lwz r3, 8(r3)
/* 8039F470 0039C3B0  38 C5 31 31 */	addi r6, r5, 0x6E753131@l
/* 8039F474 0039C3B4  38 A4 6D 65 */	addi r5, r4, 0x54626D65@l
/* 8039F478 0039C3B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F47C 0039C3BC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F480 0039C3C0  7D 89 03 A6 */	mtctr r12
/* 8039F484 0039C3C4  4E 80 04 21 */	bctrl 
/* 8039F488 0039C3C8  90 7E 00 F0 */	stw r3, 0xf0(r30)
/* 8039F48C 0039C3CC  80 1E 00 F0 */	lwz r0, 0xf0(r30)
/* 8039F490 0039C3D0  28 00 00 00 */	cmplwi r0, 0
/* 8039F494 0039C3D4  40 82 00 18 */	bne .L_8039F4AC
/* 8039F498 0039C3D8  38 7F 00 0C */	addi r3, r31, 0xc
/* 8039F49C 0039C3DC  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8039F4A0 0039C3E0  38 80 08 4A */	li r4, 0x84a
/* 8039F4A4 0039C3E4  4C C6 31 82 */	crclr 6
/* 8039F4A8 0039C3E8  4B C8 B1 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039F4AC:
/* 8039F4AC 0039C3EC  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8039F4B0 0039C3F0  3C A0 74 69 */	lis r5, 0x74696D30@ha
/* 8039F4B4 0039C3F4  3C 80 50 6C */	lis r4, 0x506C6973@ha
/* 8039F4B8 0039C3F8  80 63 00 08 */	lwz r3, 8(r3)
/* 8039F4BC 0039C3FC  38 C5 6D 30 */	addi r6, r5, 0x74696D30@l
/* 8039F4C0 0039C400  38 A4 69 73 */	addi r5, r4, 0x506C6973@l
/* 8039F4C4 0039C404  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F4C8 0039C408  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F4CC 0039C40C  7D 89 03 A6 */	mtctr r12
/* 8039F4D0 0039C410  4E 80 04 21 */	bctrl 
/* 8039F4D4 0039C414  90 7E 01 40 */	stw r3, 0x140(r30)
/* 8039F4D8 0039C418  3C 80 74 69 */	lis r4, 0x74696D31@ha
/* 8039F4DC 0039C41C  3C 60 50 6C */	lis r3, 0x506C6973@ha
/* 8039F4E0 0039C420  80 FE 00 BC */	lwz r7, 0xbc(r30)
/* 8039F4E4 0039C424  38 C4 6D 31 */	addi r6, r4, 0x74696D31@l
/* 8039F4E8 0039C428  38 A3 69 73 */	addi r5, r3, 0x506C6973@l
/* 8039F4EC 0039C42C  80 67 00 08 */	lwz r3, 8(r7)
/* 8039F4F0 0039C430  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F4F4 0039C434  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F4F8 0039C438  7D 89 03 A6 */	mtctr r12
/* 8039F4FC 0039C43C  4E 80 04 21 */	bctrl 
/* 8039F500 0039C440  90 7E 01 44 */	stw r3, 0x144(r30)
/* 8039F504 0039C444  3C 80 74 69 */	lis r4, 0x74696D32@ha
/* 8039F508 0039C448  3C 60 50 6C */	lis r3, 0x506C6973@ha
/* 8039F50C 0039C44C  80 FE 00 BC */	lwz r7, 0xbc(r30)
/* 8039F510 0039C450  38 C4 6D 32 */	addi r6, r4, 0x74696D32@l
/* 8039F514 0039C454  38 A3 69 73 */	addi r5, r3, 0x506C6973@l
/* 8039F518 0039C458  80 67 00 08 */	lwz r3, 8(r7)
/* 8039F51C 0039C45C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F520 0039C460  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F524 0039C464  7D 89 03 A6 */	mtctr r12
/* 8039F528 0039C468  4E 80 04 21 */	bctrl 
/* 8039F52C 0039C46C  90 7E 01 48 */	stw r3, 0x148(r30)
/* 8039F530 0039C470  3C 80 74 69 */	lis r4, 0x74696D33@ha
/* 8039F534 0039C474  3C 60 50 6C */	lis r3, 0x506C6973@ha
/* 8039F538 0039C478  80 FE 00 BC */	lwz r7, 0xbc(r30)
/* 8039F53C 0039C47C  38 C4 6D 33 */	addi r6, r4, 0x74696D33@l
/* 8039F540 0039C480  38 A3 69 73 */	addi r5, r3, 0x506C6973@l
/* 8039F544 0039C484  80 67 00 08 */	lwz r3, 8(r7)
/* 8039F548 0039C488  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F54C 0039C48C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F550 0039C490  7D 89 03 A6 */	mtctr r12
/* 8039F554 0039C494  4E 80 04 21 */	bctrl 
/* 8039F558 0039C498  90 7E 01 4C */	stw r3, 0x14c(r30)
/* 8039F55C 0039C49C  3C 80 74 69 */	lis r4, 0x74696D34@ha
/* 8039F560 0039C4A0  3C 60 50 6C */	lis r3, 0x506C6973@ha
/* 8039F564 0039C4A4  80 FE 00 BC */	lwz r7, 0xbc(r30)
/* 8039F568 0039C4A8  38 C4 6D 34 */	addi r6, r4, 0x74696D34@l
/* 8039F56C 0039C4AC  38 A3 69 73 */	addi r5, r3, 0x506C6973@l
/* 8039F570 0039C4B0  80 67 00 08 */	lwz r3, 8(r7)
/* 8039F574 0039C4B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F578 0039C4B8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F57C 0039C4BC  7D 89 03 A6 */	mtctr r12
/* 8039F580 0039C4C0  4E 80 04 21 */	bctrl 
/* 8039F584 0039C4C4  90 7E 01 50 */	stw r3, 0x150(r30)
/* 8039F588 0039C4C8  3C 80 77 69 */	lis r4, 0x77696E30@ha
/* 8039F58C 0039C4CC  3C 60 50 6C */	lis r3, 0x506C6973@ha
/* 8039F590 0039C4D0  80 FE 00 BC */	lwz r7, 0xbc(r30)
/* 8039F594 0039C4D4  38 C4 6E 30 */	addi r6, r4, 0x77696E30@l
/* 8039F598 0039C4D8  38 A3 69 73 */	addi r5, r3, 0x506C6973@l
/* 8039F59C 0039C4DC  80 67 00 08 */	lwz r3, 8(r7)
/* 8039F5A0 0039C4E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F5A4 0039C4E4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F5A8 0039C4E8  7D 89 03 A6 */	mtctr r12
/* 8039F5AC 0039C4EC  4E 80 04 21 */	bctrl 
/* 8039F5B0 0039C4F0  90 7E 01 2C */	stw r3, 0x12c(r30)
/* 8039F5B4 0039C4F4  3C 80 77 69 */	lis r4, 0x77696E31@ha
/* 8039F5B8 0039C4F8  3C 60 50 6C */	lis r3, 0x506C6973@ha
/* 8039F5BC 0039C4FC  80 FE 00 BC */	lwz r7, 0xbc(r30)
/* 8039F5C0 0039C500  38 C4 6E 31 */	addi r6, r4, 0x77696E31@l
/* 8039F5C4 0039C504  38 A3 69 73 */	addi r5, r3, 0x506C6973@l
/* 8039F5C8 0039C508  80 67 00 08 */	lwz r3, 8(r7)
/* 8039F5CC 0039C50C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F5D0 0039C510  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F5D4 0039C514  7D 89 03 A6 */	mtctr r12
/* 8039F5D8 0039C518  4E 80 04 21 */	bctrl 
/* 8039F5DC 0039C51C  90 7E 01 30 */	stw r3, 0x130(r30)
/* 8039F5E0 0039C520  3C 80 77 69 */	lis r4, 0x77696E32@ha
/* 8039F5E4 0039C524  3C 60 50 6C */	lis r3, 0x506C6973@ha
/* 8039F5E8 0039C528  80 FE 00 BC */	lwz r7, 0xbc(r30)
/* 8039F5EC 0039C52C  38 C4 6E 32 */	addi r6, r4, 0x77696E32@l
/* 8039F5F0 0039C530  38 A3 69 73 */	addi r5, r3, 0x506C6973@l
/* 8039F5F4 0039C534  80 67 00 08 */	lwz r3, 8(r7)
/* 8039F5F8 0039C538  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F5FC 0039C53C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F600 0039C540  7D 89 03 A6 */	mtctr r12
/* 8039F604 0039C544  4E 80 04 21 */	bctrl 
/* 8039F608 0039C548  90 7E 01 34 */	stw r3, 0x134(r30)
/* 8039F60C 0039C54C  3C 80 77 69 */	lis r4, 0x77696E33@ha
/* 8039F610 0039C550  3C 60 50 6C */	lis r3, 0x506C6973@ha
/* 8039F614 0039C554  80 FE 00 BC */	lwz r7, 0xbc(r30)
/* 8039F618 0039C558  38 C4 6E 33 */	addi r6, r4, 0x77696E33@l
/* 8039F61C 0039C55C  38 A3 69 73 */	addi r5, r3, 0x506C6973@l
/* 8039F620 0039C560  80 67 00 08 */	lwz r3, 8(r7)
/* 8039F624 0039C564  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F628 0039C568  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F62C 0039C56C  7D 89 03 A6 */	mtctr r12
/* 8039F630 0039C570  4E 80 04 21 */	bctrl 
/* 8039F634 0039C574  90 7E 01 38 */	stw r3, 0x138(r30)
/* 8039F638 0039C578  3C 80 77 69 */	lis r4, 0x77696E34@ha
/* 8039F63C 0039C57C  3C 60 50 6C */	lis r3, 0x506C6973@ha
/* 8039F640 0039C580  80 FE 00 BC */	lwz r7, 0xbc(r30)
/* 8039F644 0039C584  38 C4 6E 34 */	addi r6, r4, 0x77696E34@l
/* 8039F648 0039C588  38 A3 69 73 */	addi r5, r3, 0x506C6973@l
/* 8039F64C 0039C58C  80 67 00 08 */	lwz r3, 8(r7)
/* 8039F650 0039C590  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F654 0039C594  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F658 0039C598  7D 89 03 A6 */	mtctr r12
/* 8039F65C 0039C59C  4E 80 04 21 */	bctrl 
/* 8039F660 0039C5A0  90 7E 01 3C */	stw r3, 0x13c(r30)
/* 8039F664 0039C5A4  7F DD F3 78 */	mr r29, r30
/* 8039F668 0039C5A8  3B 80 00 00 */	li r28, 0
/* 8039F66C 0039C5AC  48 00 00 54 */	b .L_8039F6C0
.L_8039F670:
/* 8039F670 0039C5B0  80 1D 01 40 */	lwz r0, 0x140(r29)
/* 8039F674 0039C5B4  28 00 00 00 */	cmplwi r0, 0
/* 8039F678 0039C5B8  40 82 00 1C */	bne .L_8039F694
/* 8039F67C 0039C5BC  7F 86 E3 78 */	mr r6, r28
/* 8039F680 0039C5C0  38 7F 00 0C */	addi r3, r31, 0xc
/* 8039F684 0039C5C4  38 BF 06 78 */	addi r5, r31, 0x678
/* 8039F688 0039C5C8  38 80 08 5B */	li r4, 0x85b
/* 8039F68C 0039C5CC  4C C6 31 82 */	crclr 6
/* 8039F690 0039C5D0  4B C8 AF B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039F694:
/* 8039F694 0039C5D4  80 1D 01 2C */	lwz r0, 0x12c(r29)
/* 8039F698 0039C5D8  28 00 00 00 */	cmplwi r0, 0
/* 8039F69C 0039C5DC  40 82 00 1C */	bne .L_8039F6B8
/* 8039F6A0 0039C5E0  7F 86 E3 78 */	mr r6, r28
/* 8039F6A4 0039C5E4  38 7F 00 0C */	addi r3, r31, 0xc
/* 8039F6A8 0039C5E8  38 BF 06 94 */	addi r5, r31, 0x694
/* 8039F6AC 0039C5EC  38 80 08 5C */	li r4, 0x85c
/* 8039F6B0 0039C5F0  4C C6 31 82 */	crclr 6
/* 8039F6B4 0039C5F4  4B C8 AF 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039F6B8:
/* 8039F6B8 0039C5F8  3B BD 00 04 */	addi r29, r29, 4
/* 8039F6BC 0039C5FC  3B 9C 00 01 */	addi r28, r28, 1
.L_8039F6C0:
/* 8039F6C0 0039C600  A8 1E 00 8E */	lha r0, 0x8e(r30)
/* 8039F6C4 0039C604  7C 1C 00 00 */	cmpw r28, r0
/* 8039F6C8 0039C608  41 80 FF A8 */	blt .L_8039F670
/* 8039F6CC 0039C60C  80 9E 00 7C */	lwz r4, 0x7c(r30)
/* 8039F6D0 0039C610  3C 60 70 6F */	lis r3, 0x706F7430@ha
/* 8039F6D4 0039C614  38 C3 74 30 */	addi r6, r3, 0x706F7430@l
/* 8039F6D8 0039C618  38 A0 50 73 */	li r5, 0x5073
/* 8039F6DC 0039C61C  80 64 00 08 */	lwz r3, 8(r4)
/* 8039F6E0 0039C620  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F6E4 0039C624  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F6E8 0039C628  7D 89 03 A6 */	mtctr r12
/* 8039F6EC 0039C62C  4E 80 04 21 */	bctrl 
/* 8039F6F0 0039C630  90 7E 00 E0 */	stw r3, 0xe0(r30)
/* 8039F6F4 0039C634  80 1E 00 E0 */	lwz r0, 0xe0(r30)
/* 8039F6F8 0039C638  28 00 00 00 */	cmplwi r0, 0
/* 8039F6FC 0039C63C  40 82 00 18 */	bne .L_8039F714
/* 8039F700 0039C640  38 7F 00 0C */	addi r3, r31, 0xc
/* 8039F704 0039C644  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8039F708 0039C648  38 80 08 61 */	li r4, 0x861
/* 8039F70C 0039C64C  4C C6 31 82 */	crclr 6
/* 8039F710 0039C650  4B C8 AF 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039F714:
/* 8039F714 0039C654  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 8039F718 0039C658  3C 80 72 70 */	lis r4, 0x7270696B@ha
/* 8039F71C 0039C65C  80 BE 00 88 */	lwz r5, 0x88(r30)
/* 8039F720 0039C660  3C 60 4E 73 */	lis r3, 0x4E737461@ha
/* 8039F724 0039C664  54 00 10 3A */	slwi r0, r0, 2
/* 8039F728 0039C668  C0 22 0F 30 */	lfs f1, lbl_8051F290@sda21(r2)
/* 8039F72C 0039C66C  7C E5 00 2E */	lwzx r7, r5, r0
/* 8039F730 0039C670  38 C4 69 6B */	addi r6, r4, 0x7270696B@l
/* 8039F734 0039C674  C0 02 0E 30 */	lfs f0, lbl_8051F190@sda21(r2)
/* 8039F738 0039C678  38 A3 74 61 */	addi r5, r3, 0x4E737461@l
/* 8039F73C 0039C67C  C0 47 00 1C */	lfs f2, 0x1c(r7)
/* 8039F740 0039C680  EC 22 08 28 */	fsubs f1, f2, f1
/* 8039F744 0039C684  D0 3E 00 A8 */	stfs f1, 0xa8(r30)
/* 8039F748 0039C688  C0 3E 00 A8 */	lfs f1, 0xa8(r30)
/* 8039F74C 0039C68C  EC 01 00 2A */	fadds f0, f1, f0
/* 8039F750 0039C690  D0 1E 00 AC */	stfs f0, 0xac(r30)
/* 8039F754 0039C694  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 8039F758 0039C698  80 63 00 08 */	lwz r3, 8(r3)
/* 8039F75C 0039C69C  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F760 0039C6A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8039F764 0039C6A4  7D 89 03 A6 */	mtctr r12
/* 8039F768 0039C6A8  4E 80 04 21 */	bctrl 
/* 8039F76C 0039C6AC  90 7E 00 EC */	stw r3, 0xec(r30)
/* 8039F770 0039C6B0  80 1E 00 EC */	lwz r0, 0xec(r30)
/* 8039F774 0039C6B4  28 00 00 00 */	cmplwi r0, 0
/* 8039F778 0039C6B8  40 82 00 18 */	bne .L_8039F790
/* 8039F77C 0039C6BC  38 7F 00 0C */	addi r3, r31, 0xc
/* 8039F780 0039C6C0  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8039F784 0039C6C4  38 80 08 6A */	li r4, 0x86a
/* 8039F788 0039C6C8  4C C6 31 82 */	crclr 6
/* 8039F78C 0039C6CC  4B C8 AE B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039F790:
/* 8039F790 0039C6D0  7F C3 F3 78 */	mr r3, r30
/* 8039F794 0039C6D4  48 00 0E 5D */	bl changeCourseTexture__Q28Morimura9TVsSelectFv
/* 8039F798 0039C6D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8039F79C 0039C6DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8039F7A0 0039C6E0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8039F7A4 0039C6E4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8039F7A8 0039C6E8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8039F7AC 0039C6EC  7C 08 03 A6 */	mtlr r0
/* 8039F7B0 0039C6F0  38 21 00 20 */	addi r1, r1, 0x20
/* 8039F7B4 0039C6F4  4E 80 00 20 */	blr 
.endfn paneInit__Q28Morimura9TVsSelectFv

.fn changePaneInfo__Q28Morimura9TVsSelectFv, global
/* 8039F7B8 0039C6F8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8039F7BC 0039C6FC  7C 08 02 A6 */	mflr r0
/* 8039F7C0 0039C700  90 01 00 44 */	stw r0, 0x44(r1)
/* 8039F7C4 0039C704  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8039F7C8 0039C708  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8039F7CC 0039C70C  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8039F7D0 0039C710  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8039F7D4 0039C714  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8039F7D8 0039C718  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8039F7DC 0039C71C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8039F7E0 0039C720  93 81 00 10 */	stw r28, 0x10(r1)
/* 8039F7E4 0039C724  7C 7E 1B 78 */	mr r30, r3
/* 8039F7E8 0039C728  80 03 00 94 */	lwz r0, 0x94(r3)
/* 8039F7EC 0039C72C  80 63 00 88 */	lwz r3, 0x88(r3)
/* 8039F7F0 0039C730  54 00 10 3A */	slwi r0, r0, 2
/* 8039F7F4 0039C734  7C 63 00 2E */	lwzx r3, r3, r0
/* 8039F7F8 0039C738  48 00 2D C5 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8039F7FC 0039C73C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8039F800 0039C740  7C 60 1B 78 */	mr r0, r3
/* 8039F804 0039C744  7F C3 F3 78 */	mr r3, r30
/* 8039F808 0039C748  83 BE 00 F0 */	lwz r29, 0xf0(r30)
/* 8039F80C 0039C74C  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8039F810 0039C750  7C 04 03 78 */	mr r4, r0
/* 8039F814 0039C754  7D 89 03 A6 */	mtctr r12
/* 8039F818 0039C758  4E 80 04 21 */	bctrl 
/* 8039F81C 0039C75C  90 9D 00 1C */	stw r4, 0x1c(r29)
/* 8039F820 0039C760  C0 02 0E 1C */	lfs f0, lbl_8051F17C@sda21(r2)
/* 8039F824 0039C764  90 7D 00 18 */	stw r3, 0x18(r29)
/* 8039F828 0039C768  C0 3E 02 30 */	lfs f1, 0x230(r30)
/* 8039F82C 0039C76C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8039F830 0039C770  D0 1E 02 30 */	stfs f0, 0x230(r30)
/* 8039F834 0039C774  88 0D 99 C1 */	lbz r0, mLoopDrum__Q28Morimura9TVsSelect@sda21(r13)
/* 8039F838 0039C778  28 00 00 00 */	cmplwi r0, 0
/* 8039F83C 0039C77C  40 82 01 8C */	bne .L_8039F9C8
/* 8039F840 0039C780  38 00 00 00 */	li r0, 0
/* 8039F844 0039C784  90 1E 02 44 */	stw r0, 0x244(r30)
/* 8039F848 0039C788  80 7E 02 08 */	lwz r3, 0x208(r30)
/* 8039F84C 0039C78C  4B F8 DC ED */	bl stickUpDown__Q32og6Screen12StickAnimMgrFv
/* 8039F850 0039C790  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 8039F854 0039C794  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039F858 0039C798  54 00 10 3A */	slwi r0, r0, 2
/* 8039F85C 0039C79C  7C 63 00 2E */	lwzx r3, r3, r0
/* 8039F860 0039C7A0  48 00 2D 5D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8039F864 0039C7A4  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 8039F868 0039C7A8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8039F86C 0039C7AC  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039F870 0039C7B0  54 00 10 3A */	slwi r0, r0, 2
/* 8039F874 0039C7B4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8039F878 0039C7B8  C3 C3 00 1C */	lfs f30, 0x1c(r3)
/* 8039F87C 0039C7BC  40 82 00 14 */	bne .L_8039F890
/* 8039F880 0039C7C0  38 00 00 01 */	li r0, 1
/* 8039F884 0039C7C4  90 1E 02 44 */	stw r0, 0x244(r30)
/* 8039F888 0039C7C8  80 7E 02 08 */	lwz r3, 0x208(r30)
/* 8039F88C 0039C7CC  4B F8 DB C5 */	bl stickDown__Q32og6Screen12StickAnimMgrFv
.L_8039F890:
/* 8039F890 0039C7D0  80 7E 02 48 */	lwz r3, 0x248(r30)
/* 8039F894 0039C7D4  38 03 FF FF */	addi r0, r3, -1
/* 8039F898 0039C7D8  7C 1F 00 00 */	cmpw r31, r0
/* 8039F89C 0039C7DC  40 82 00 14 */	bne .L_8039F8B0
/* 8039F8A0 0039C7E0  38 00 00 02 */	li r0, 2
/* 8039F8A4 0039C7E4  90 1E 02 44 */	stw r0, 0x244(r30)
/* 8039F8A8 0039C7E8  80 7E 02 08 */	lwz r3, 0x208(r30)
/* 8039F8AC 0039C7EC  4B F8 DA D1 */	bl stickUp__Q32og6Screen12StickAnimMgrFv
.L_8039F8B0:
/* 8039F8B0 0039C7F0  80 1E 02 44 */	lwz r0, 0x244(r30)
/* 8039F8B4 0039C7F4  2C 00 00 00 */	cmpwi r0, 0
/* 8039F8B8 0039C7F8  40 82 00 10 */	bne .L_8039F8C8
/* 8039F8BC 0039C7FC  38 00 00 00 */	li r0, 0
/* 8039F8C0 0039C800  98 1E 02 3D */	stb r0, 0x23d(r30)
/* 8039F8C4 0039C804  48 00 00 60 */	b .L_8039F924
.L_8039F8C8:
/* 8039F8C8 0039C808  38 00 00 01 */	li r0, 1
/* 8039F8CC 0039C80C  C3 E2 0E 10 */	lfs f31, lbl_8051F170@sda21(r2)
/* 8039F8D0 0039C810  98 1E 02 3D */	stb r0, 0x23d(r30)
/* 8039F8D4 0039C814  3B 80 00 00 */	li r28, 0
/* 8039F8D8 0039C818  3B A0 00 00 */	li r29, 0
/* 8039F8DC 0039C81C  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 8039F8E0 0039C820  D3 E3 00 14 */	stfs f31, 0x14(r3)
/* 8039F8E4 0039C824  48 00 00 34 */	b .L_8039F918
.L_8039F8E8:
/* 8039F8E8 0039C828  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039F8EC 0039C82C  7C 83 E8 2E */	lwzx r4, r3, r29
/* 8039F8F0 0039C830  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8039F8F4 0039C834  80 64 00 04 */	lwz r3, 4(r4)
/* 8039F8F8 0039C838  EC 00 F8 2A */	fadds f0, f0, f31
/* 8039F8FC 0039C83C  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 8039F900 0039C840  81 83 00 00 */	lwz r12, 0(r3)
/* 8039F904 0039C844  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8039F908 0039C848  7D 89 03 A6 */	mtctr r12
/* 8039F90C 0039C84C  4E 80 04 21 */	bctrl 
/* 8039F910 0039C850  3B BD 00 04 */	addi r29, r29, 4
/* 8039F914 0039C854  3B 9C 00 01 */	addi r28, r28, 1
.L_8039F918:
/* 8039F918 0039C858  A8 1E 00 8E */	lha r0, 0x8e(r30)
/* 8039F91C 0039C85C  7C 1C 00 00 */	cmpw r28, r0
/* 8039F920 0039C860  41 80 FF C8 */	blt .L_8039F8E8
.L_8039F924:
/* 8039F924 0039C864  3B 80 00 00 */	li r28, 0
/* 8039F928 0039C868  3B A0 00 00 */	li r29, 0
/* 8039F92C 0039C86C  48 00 00 90 */	b .L_8039F9BC
.L_8039F930:
/* 8039F930 0039C870  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039F934 0039C874  38 00 00 01 */	li r0, 1
/* 8039F938 0039C878  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8039F93C 0039C87C  80 63 00 04 */	lwz r3, 4(r3)
/* 8039F940 0039C880  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8039F944 0039C884  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039F948 0039C888  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8039F94C 0039C88C  48 00 2C 71 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8039F950 0039C890  7C 03 F8 00 */	cmpw r3, r31
/* 8039F954 0039C894  41 82 00 60 */	beq .L_8039F9B4
/* 8039F958 0039C898  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039F95C 0039C89C  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8039F960 0039C8A0  C3 E3 00 1C */	lfs f31, 0x1c(r3)
/* 8039F964 0039C8A4  48 00 2C 59 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8039F968 0039C8A8  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039F96C 0039C8AC  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8039F970 0039C8B0  48 00 2C 4D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8039F974 0039C8B4  7C 03 F8 00 */	cmpw r3, r31
/* 8039F978 0039C8B8  40 81 00 0C */	ble .L_8039F984
/* 8039F97C 0039C8BC  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 8039F980 0039C8C0  41 81 00 20 */	bgt .L_8039F9A0
.L_8039F984:
/* 8039F984 0039C8C4  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039F988 0039C8C8  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8039F98C 0039C8CC  48 00 2C 31 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8039F990 0039C8D0  7C 03 F8 00 */	cmpw r3, r31
/* 8039F994 0039C8D4  40 80 00 20 */	bge .L_8039F9B4
/* 8039F998 0039C8D8  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 8039F99C 0039C8DC  40 80 00 18 */	bge .L_8039F9B4
.L_8039F9A0:
/* 8039F9A0 0039C8E0  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8039F9A4 0039C8E4  38 00 00 00 */	li r0, 0
/* 8039F9A8 0039C8E8  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8039F9AC 0039C8EC  80 63 00 04 */	lwz r3, 4(r3)
/* 8039F9B0 0039C8F0  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8039F9B4:
/* 8039F9B4 0039C8F4  3B BD 00 04 */	addi r29, r29, 4
/* 8039F9B8 0039C8F8  3B 9C 00 01 */	addi r28, r28, 1
.L_8039F9BC:
/* 8039F9BC 0039C8FC  A8 1E 00 8E */	lha r0, 0x8e(r30)
/* 8039F9C0 0039C900  7C 1C 00 00 */	cmpw r28, r0
/* 8039F9C4 0039C904  41 80 FF 6C */	blt .L_8039F930
.L_8039F9C8:
/* 8039F9C8 0039C908  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8039F9CC 0039C90C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8039F9D0 0039C910  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8039F9D4 0039C914  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8039F9D8 0039C918  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8039F9DC 0039C91C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8039F9E0 0039C920  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8039F9E4 0039C924  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8039F9E8 0039C928  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8039F9EC 0039C92C  7C 08 03 A6 */	mtlr r0
/* 8039F9F0 0039C930  38 21 00 40 */	addi r1, r1, 0x40
/* 8039F9F4 0039C934  4E 80 00 20 */	blr 
.endfn changePaneInfo__Q28Morimura9TVsSelectFv

.fn getNameID__Q28Morimura9TVsSelectFi, global
/* 8039F9F8 0039C938  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039F9FC 0039C93C  7C 08 02 A6 */	mflr r0
/* 8039FA00 0039C940  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039FA04 0039C944  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8039FA08 0039C948  7C 9F 23 78 */	mr r31, r4
/* 8039FA0C 0039C94C  93 C1 00 08 */	stw r30, 8(r1)
/* 8039FA10 0039C950  7C 7E 1B 78 */	mr r30, r3
/* 8039FA14 0039C954  81 83 00 00 */	lwz r12, 0(r3)
/* 8039FA18 0039C958  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8039FA1C 0039C95C  7D 89 03 A6 */	mtctr r12
/* 8039FA20 0039C960  4E 80 04 21 */	bctrl 
/* 8039FA24 0039C964  7C 1F 18 00 */	cmpw r31, r3
/* 8039FA28 0039C968  40 81 00 20 */	ble .L_8039FA48
/* 8039FA2C 0039C96C  3C 60 80 49 */	lis r3, lbl_80494B24@ha
/* 8039FA30 0039C970  3C A0 80 49 */	lis r5, lbl_80494B34@ha
/* 8039FA34 0039C974  38 63 4B 24 */	addi r3, r3, lbl_80494B24@l
/* 8039FA38 0039C978  38 80 08 B2 */	li r4, 0x8b2
/* 8039FA3C 0039C97C  38 A5 4B 34 */	addi r5, r5, lbl_80494B34@l
/* 8039FA40 0039C980  4C C6 31 82 */	crclr 6
/* 8039FA44 0039C984  4B C8 AB FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039FA48:
/* 8039FA48 0039C988  7F C3 F3 78 */	mr r3, r30
/* 8039FA4C 0039C98C  7F E4 FB 78 */	mr r4, r31
/* 8039FA50 0039C990  48 00 00 35 */	bl getCourseID__Q28Morimura9TVsSelectFi
/* 8039FA54 0039C994  7C 64 1B 78 */	mr r4, r3
/* 8039FA58 0039C998  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 8039FA5C 0039C99C  38 84 FF FF */	addi r4, r4, -1
/* 8039FA60 0039C9A0  48 00 17 AD */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 8039FA64 0039C9A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039FA68 0039C9A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8039FA6C 0039C9AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8039FA70 0039C9B0  7C 08 03 A6 */	mtlr r0
/* 8039FA74 0039C9B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8039FA78 0039C9B8  4E 80 00 20 */	blr 
.endfn getNameID__Q28Morimura9TVsSelectFi

.fn getIdMax__Q28Morimura9TVsSelectFv, weak
/* 8039FA7C 0039C9BC  80 63 02 48 */	lwz r3, 0x248(r3)
/* 8039FA80 0039C9C0  4E 80 00 20 */	blr 
.endfn getIdMax__Q28Morimura9TVsSelectFv

.fn getCourseID__Q28Morimura9TVsSelectFi, global
/* 8039FA84 0039C9C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8039FA88 0039C9C8  7C 08 02 A6 */	mflr r0
/* 8039FA8C 0039C9CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8039FA90 0039C9D0  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039FA94 0039C9D4  28 00 00 00 */	cmplwi r0, 0
/* 8039FA98 0039C9D8  40 82 00 14 */	bne .L_8039FAAC
/* 8039FA9C 0039C9DC  80 63 01 F8 */	lwz r3, 0x1f8(r3)
/* 8039FAA0 0039C9E0  80 63 00 08 */	lwz r3, 8(r3)
/* 8039FAA4 0039C9E4  4B E9 57 7D */	bl __cl__Q24Game14Vs2D_TitleInfoFi
/* 8039FAA8 0039C9E8  80 83 00 00 */	lwz r4, 0(r3)
.L_8039FAAC:
/* 8039FAAC 0039C9EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039FAB0 0039C9F0  7C 83 23 78 */	mr r3, r4
/* 8039FAB4 0039C9F4  7C 08 03 A6 */	mtlr r0
/* 8039FAB8 0039C9F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8039FABC 0039C9FC  4E 80 00 20 */	blr 
.endfn getCourseID__Q28Morimura9TVsSelectFi

.fn doZoom__Q28Morimura9TVsSelectFv, global
/* 8039FAC0 0039CA00  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8039FAC4 0039CA04  7C 08 02 A6 */	mflr r0
/* 8039FAC8 0039CA08  90 01 00 34 */	stw r0, 0x34(r1)
/* 8039FACC 0039CA0C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8039FAD0 0039CA10  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8039FAD4 0039CA14  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8039FAD8 0039CA18  7C 7F 1B 78 */	mr r31, r3
/* 8039FADC 0039CA1C  80 03 02 40 */	lwz r0, 0x240(r3)
/* 8039FAE0 0039CA20  2C 00 00 01 */	cmpwi r0, 1
/* 8039FAE4 0039CA24  40 82 00 2C */	bne .L_8039FB10
/* 8039FAE8 0039CA28  C0 3F 02 50 */	lfs f1, 0x250(r31)
/* 8039FAEC 0039CA2C  C0 0D 86 30 */	lfs f0, mZoomFrameMax__Q28Morimura9TVsSelect@sda21(r13)
/* 8039FAF0 0039CA30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039FAF4 0039CA34  40 81 00 0C */	ble .L_8039FB00
/* 8039FAF8 0039CA38  D0 1F 02 50 */	stfs f0, 0x250(r31)
/* 8039FAFC 0039CA3C  48 00 00 B4 */	b .L_8039FBB0
.L_8039FB00:
/* 8039FB00 0039CA40  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 8039FB04 0039CA44  EC 01 00 2A */	fadds f0, f1, f0
/* 8039FB08 0039CA48  D0 1F 02 50 */	stfs f0, 0x250(r31)
/* 8039FB0C 0039CA4C  48 00 00 A4 */	b .L_8039FBB0
.L_8039FB10:
/* 8039FB10 0039CA50  2C 00 00 02 */	cmpwi r0, 2
/* 8039FB14 0039CA54  40 82 00 9C */	bne .L_8039FBB0
/* 8039FB18 0039CA58  C0 5F 02 50 */	lfs f2, 0x250(r31)
/* 8039FB1C 0039CA5C  C0 22 0E 20 */	lfs f1, lbl_8051F180@sda21(r2)
/* 8039FB20 0039CA60  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039FB24 0039CA64  EC 22 08 28 */	fsubs f1, f2, f1
/* 8039FB28 0039CA68  D0 3F 02 50 */	stfs f1, 0x250(r31)
/* 8039FB2C 0039CA6C  C0 3F 02 50 */	lfs f1, 0x250(r31)
/* 8039FB30 0039CA70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039FB34 0039CA74  4C 40 13 82 */	cror 2, 0, 2
/* 8039FB38 0039CA78  40 82 00 78 */	bne .L_8039FBB0
/* 8039FB3C 0039CA7C  D0 1F 02 50 */	stfs f0, 0x250(r31)
/* 8039FB40 0039CA80  38 00 00 01 */	li r0, 1
/* 8039FB44 0039CA84  C0 42 0E E0 */	lfs f2, lbl_8051F240@sda21(r2)
/* 8039FB48 0039CA88  80 7F 01 E8 */	lwz r3, 0x1e8(r31)
/* 8039FB4C 0039CA8C  C0 62 0F 34 */	lfs f3, lbl_8051F294@sda21(r2)
/* 8039FB50 0039CA90  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 8039FB54 0039CA94  C0 83 00 0C */	lfs f4, 0xc(r3)
/* 8039FB58 0039CA98  EC 21 10 28 */	fsubs f1, f1, f2
/* 8039FB5C 0039CA9C  C0 02 0F 38 */	lfs f0, lbl_8051F298@sda21(r2)
/* 8039FB60 0039CAA0  EC 84 18 28 */	fsubs f4, f4, f3
/* 8039FB64 0039CAA4  EC 21 00 72 */	fmuls f1, f1, f1
/* 8039FB68 0039CAA8  EC 24 09 3A */	fmadds f1, f4, f4, f1
/* 8039FB6C 0039CAAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039FB70 0039CAB0  40 80 00 08 */	bge .L_8039FB78
/* 8039FB74 0039CAB4  38 00 00 00 */	li r0, 0
.L_8039FB78:
/* 8039FB78 0039CAB8  80 7F 01 EC */	lwz r3, 0x1ec(r31)
/* 8039FB7C 0039CABC  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 8039FB80 0039CAC0  C0 83 00 0C */	lfs f4, 0xc(r3)
/* 8039FB84 0039CAC4  EC 21 10 28 */	fsubs f1, f1, f2
/* 8039FB88 0039CAC8  EC 84 18 28 */	fsubs f4, f4, f3
/* 8039FB8C 0039CACC  EC 21 00 72 */	fmuls f1, f1, f1
/* 8039FB90 0039CAD0  EC 24 09 3A */	fmadds f1, f4, f4, f1
/* 8039FB94 0039CAD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039FB98 0039CAD8  40 80 00 08 */	bge .L_8039FBA0
/* 8039FB9C 0039CADC  38 00 00 00 */	li r0, 0
.L_8039FBA0:
/* 8039FBA0 0039CAE0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8039FBA4 0039CAE4  41 82 00 0C */	beq .L_8039FBB0
/* 8039FBA8 0039CAE8  38 00 00 00 */	li r0, 0
/* 8039FBAC 0039CAEC  90 1F 02 40 */	stw r0, 0x240(r31)
.L_8039FBB0:
/* 8039FBB0 0039CAF0  C0 42 0F 08 */	lfs f2, lbl_8051F268@sda21(r2)
/* 8039FBB4 0039CAF4  C0 1F 02 50 */	lfs f0, 0x250(r31)
/* 8039FBB8 0039CAF8  C0 2D 86 30 */	lfs f1, mZoomFrameMax__Q28Morimura9TVsSelect@sda21(r13)
/* 8039FBBC 0039CAFC  EC 42 00 32 */	fmuls f2, f2, f0
/* 8039FBC0 0039CB00  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039FBC4 0039CB04  EC 22 08 24 */	fdivs f1, f2, f1
/* 8039FBC8 0039CB08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039FBCC 0039CB0C  40 80 00 30 */	bge .L_8039FBFC
/* 8039FBD0 0039CB10  C0 02 0E 50 */	lfs f0, lbl_8051F1B0@sda21(r2)
/* 8039FBD4 0039CB14  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039FBD8 0039CB18  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039FBDC 0039CB1C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8039FBE0 0039CB20  FC 00 00 1E */	fctiwz f0, f0
/* 8039FBE4 0039CB24  D8 01 00 08 */	stfd f0, 8(r1)
/* 8039FBE8 0039CB28  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8039FBEC 0039CB2C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039FBF0 0039CB30  7C 03 04 2E */	lfsx f0, r3, r0
/* 8039FBF4 0039CB34  FC 80 00 50 */	fneg f4, f0
/* 8039FBF8 0039CB38  48 00 00 28 */	b .L_8039FC20
.L_8039FBFC:
/* 8039FBFC 0039CB3C  C0 02 0E 54 */	lfs f0, lbl_8051F1B4@sda21(r2)
/* 8039FC00 0039CB40  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039FC04 0039CB44  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8039FC08 0039CB48  EC 01 00 32 */	fmuls f0, f1, f0
/* 8039FC0C 0039CB4C  FC 00 00 1E */	fctiwz f0, f0
/* 8039FC10 0039CB50  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8039FC14 0039CB54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039FC18 0039CB58  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039FC1C 0039CB5C  7C 83 04 2E */	lfsx f4, r3, r0
.L_8039FC20:
/* 8039FC20 0039CB60  C0 02 0E 9C */	lfs f0, lbl_8051F1FC@sda21(r2)
/* 8039FC24 0039CB64  C3 E2 0E 10 */	lfs f31, lbl_8051F170@sda21(r2)
/* 8039FC28 0039CB68  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8039FC2C 0039CB6C  41 80 00 4C */	blt .L_8039FC78
/* 8039FC30 0039CB70  EC 44 00 28 */	fsubs f2, f4, f0
/* 8039FC34 0039CB74  C0 62 0F 3C */	lfs f3, lbl_8051F29C@sda21(r2)
/* 8039FC38 0039CB78  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 8039FC3C 0039CB7C  C0 22 0F 40 */	lfs f1, lbl_8051F2A0@sda21(r2)
/* 8039FC40 0039CB80  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8039FC44 0039CB84  FC 00 20 00 */	fcmpu cr0, f0, f4
/* 8039FC48 0039CB88  EF E2 08 24 */	fdivs f31, f2, f1
/* 8039FC4C 0039CB8C  40 82 00 2C */	bne .L_8039FC78
/* 8039FC50 0039CB90  88 1F 02 29 */	lbz r0, 0x229(r31)
/* 8039FC54 0039CB94  FF E0 00 90 */	fmr f31, f0
/* 8039FC58 0039CB98  28 00 00 00 */	cmplwi r0, 0
/* 8039FC5C 0039CB9C  41 82 00 1C */	beq .L_8039FC78
/* 8039FC60 0039CBA0  38 00 00 03 */	li r0, 3
/* 8039FC64 0039CBA4  7F E3 FB 78 */	mr r3, r31
/* 8039FC68 0039CBA8  90 1F 02 40 */	stw r0, 0x240(r31)
/* 8039FC6C 0039CBAC  48 00 0A 21 */	bl changeIndirectTexture__Q28Morimura9TVsSelectFv
/* 8039FC70 0039CBB0  38 00 00 00 */	li r0, 0
/* 8039FC74 0039CBB4  98 0D 99 C2 */	stb r0, mCanCancel__Q28Morimura9TVsSelect@sda21(r13)
.L_8039FC78:
/* 8039FC78 0039CBB8  C0 0D 86 48 */	lfs f0, mDemoOffsetMax__Q28Morimura9TVsSelect@sda21(r13)
/* 8039FC7C 0039CBBC  C0 22 0E 20 */	lfs f1, lbl_8051F180@sda21(r2)
/* 8039FC80 0039CBC0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8039FC84 0039CBC4  D0 1F 02 6C */	stfs f0, 0x26c(r31)
/* 8039FC88 0039CBC8  C0 0D 86 40 */	lfs f0, mDemoScaleMax__Q28Morimura9TVsSelect@sda21(r13)
/* 8039FC8C 0039CBCC  EC 00 08 28 */	fsubs f0, f0, f1
/* 8039FC90 0039CBD0  EC 00 0F FA */	fmadds f0, f0, f31, f1
/* 8039FC94 0039CBD4  D0 0D 86 44 */	stfs f0, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
/* 8039FC98 0039CBD8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8039FC9C 0039CBDC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8039FCA0 0039CBE0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8039FCA4 0039CBE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8039FCA8 0039CBE8  7C 08 03 A6 */	mtlr r0
/* 8039FCAC 0039CBEC  38 21 00 30 */	addi r1, r1, 0x30
/* 8039FCB0 0039CBF0  4E 80 00 20 */	blr 
.endfn doZoom__Q28Morimura9TVsSelectFv

.fn doMoveOnyon__Q28Morimura9TVsSelectFv, global
/* 8039FCB4 0039CBF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8039FCB8 0039CBF8  7C 08 02 A6 */	mflr r0
/* 8039FCBC 0039CBFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8039FCC0 0039CC00  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8039FCC4 0039CC04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8039FCC8 0039CC08  3B C0 00 00 */	li r30, 0
/* 8039FCCC 0039CC0C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8039FCD0 0039CC10  7C 7D 1B 78 */	mr r29, r3
/* 8039FCD4 0039CC14  7F BF EB 78 */	mr r31, r29
.L_8039FCD8:
/* 8039FCD8 0039CC18  80 1D 02 40 */	lwz r0, 0x240(r29)
/* 8039FCDC 0039CC1C  C0 22 0E 20 */	lfs f1, lbl_8051F180@sda21(r2)
/* 8039FCE0 0039CC20  2C 00 00 02 */	cmpwi r0, 2
/* 8039FCE4 0039CC24  40 82 00 08 */	bne .L_8039FCEC
/* 8039FCE8 0039CC28  C0 22 0E 8C */	lfs f1, lbl_8051F1EC@sda21(r2)
.L_8039FCEC:
/* 8039FCEC 0039CC2C  80 7F 01 E8 */	lwz r3, 0x1e8(r31)
/* 8039FCF0 0039CC30  4B FF A3 DD */	bl posUpdate__Q28Morimura14TVsSelectOnyonFf
/* 8039FCF4 0039CC34  3B DE 00 01 */	addi r30, r30, 1
/* 8039FCF8 0039CC38  3B FF 00 04 */	addi r31, r31, 4
/* 8039FCFC 0039CC3C  2C 1E 00 02 */	cmpwi r30, 2
/* 8039FD00 0039CC40  41 80 FF D8 */	blt .L_8039FCD8
/* 8039FD04 0039CC44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8039FD08 0039CC48  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8039FD0C 0039CC4C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8039FD10 0039CC50  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8039FD14 0039CC54  7C 08 03 A6 */	mtlr r0
/* 8039FD18 0039CC58  38 21 00 20 */	addi r1, r1, 0x20
/* 8039FD1C 0039CC5C  4E 80 00 20 */	blr 
.endfn doMoveOnyon__Q28Morimura9TVsSelectFv

.fn doScreenEffect__Q28Morimura9TVsSelectFv, global
/* 8039FD20 0039CC60  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8039FD24 0039CC64  7C 08 02 A6 */	mflr r0
/* 8039FD28 0039CC68  C0 02 0E 68 */	lfs f0, lbl_8051F1C8@sda21(r2)
/* 8039FD2C 0039CC6C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8039FD30 0039CC70  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8039FD34 0039CC74  7C 7F 1B 78 */	mr r31, r3
/* 8039FD38 0039CC78  C0 2D 86 2C */	lfs f1, mIndShuki__Q28Morimura9TVsSelect@sda21(r13)
/* 8039FD3C 0039CC7C  C0 43 02 50 */	lfs f2, 0x250(r3)
/* 8039FD40 0039CC80  EC 22 08 2A */	fadds f1, f2, f1
/* 8039FD44 0039CC84  D0 23 02 50 */	stfs f1, 0x250(r3)
/* 8039FD48 0039CC88  C0 23 02 50 */	lfs f1, 0x250(r3)
/* 8039FD4C 0039CC8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039FD50 0039CC90  40 81 00 0C */	ble .L_8039FD5C
/* 8039FD54 0039CC94  EC 01 00 28 */	fsubs f0, f1, f0
/* 8039FD58 0039CC98  D0 1F 02 50 */	stfs f0, 0x250(r31)
.L_8039FD5C:
/* 8039FD5C 0039CC9C  C0 7F 02 50 */	lfs f3, 0x250(r31)
/* 8039FD60 0039CCA0  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039FD64 0039CCA4  FC 20 18 90 */	fmr f1, f3
/* 8039FD68 0039CCA8  C0 8D 86 28 */	lfs f4, mIndVal__Q28Morimura9TVsSelect@sda21(r13)
/* 8039FD6C 0039CCAC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8039FD70 0039CCB0  40 80 00 08 */	bge .L_8039FD78
/* 8039FD74 0039CCB4  FC 20 18 50 */	fneg f1, f3
.L_8039FD78:
/* 8039FD78 0039CCB8  C0 42 0E 54 */	lfs f2, lbl_8051F1B4@sda21(r2)
/* 8039FD7C 0039CCBC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8039FD80 0039CCC0  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039FD84 0039CCC4  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8039FD88 0039CCC8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8039FD8C 0039CCCC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8039FD90 0039CCD0  FC 00 08 1E */	fctiwz f0, f1
/* 8039FD94 0039CCD4  D8 01 00 08 */	stfd f0, 8(r1)
/* 8039FD98 0039CCD8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8039FD9C 0039CCDC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039FDA0 0039CCE0  7C 64 02 14 */	add r3, r4, r0
/* 8039FDA4 0039CCE4  C0 03 00 04 */	lfs f0, 4(r3)
/* 8039FDA8 0039CCE8  EC 24 00 32 */	fmuls f1, f4, f0
/* 8039FDAC 0039CCEC  40 80 00 28 */	bge .L_8039FDD4
/* 8039FDB0 0039CCF0  C0 02 0E 50 */	lfs f0, lbl_8051F1B0@sda21(r2)
/* 8039FDB4 0039CCF4  EC 03 00 32 */	fmuls f0, f3, f0
/* 8039FDB8 0039CCF8  FC 00 00 1E */	fctiwz f0, f0
/* 8039FDBC 0039CCFC  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8039FDC0 0039CD00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8039FDC4 0039CD04  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039FDC8 0039CD08  7C 04 04 2E */	lfsx f0, r4, r0
/* 8039FDCC 0039CD0C  FC 00 00 50 */	fneg f0, f0
/* 8039FDD0 0039CD10  48 00 00 1C */	b .L_8039FDEC
.L_8039FDD4:
/* 8039FDD4 0039CD14  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8039FDD8 0039CD18  FC 00 00 1E */	fctiwz f0, f0
/* 8039FDDC 0039CD1C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8039FDE0 0039CD20  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8039FDE4 0039CD24  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8039FDE8 0039CD28  7C 04 04 2E */	lfsx f0, r4, r0
.L_8039FDEC:
/* 8039FDEC 0039CD2C  EC 04 00 32 */	fmuls f0, f4, f0
/* 8039FDF0 0039CD30  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8039FDF4 0039CD34  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 8039FDF8 0039CD38  D0 23 00 38 */	stfs f1, 0x38(r3)
/* 8039FDFC 0039CD3C  88 1F 02 29 */	lbz r0, 0x229(r31)
/* 8039FE00 0039CD40  28 00 00 00 */	cmplwi r0, 0
/* 8039FE04 0039CD44  41 82 01 1C */	beq .L_8039FF20
/* 8039FE08 0039CD48  80 7F 01 E8 */	lwz r3, 0x1e8(r31)
/* 8039FE0C 0039CD4C  38 00 00 01 */	li r0, 1
/* 8039FE10 0039CD50  C0 22 0E 8C */	lfs f1, lbl_8051F1EC@sda21(r2)
/* 8039FE14 0039CD54  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 8039FE18 0039CD58  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8039FE1C 0039CD5C  41 82 00 08 */	beq .L_8039FE24
/* 8039FE20 0039CD60  38 00 00 00 */	li r0, 0
.L_8039FE24:
/* 8039FE24 0039CD64  80 7F 01 EC */	lwz r3, 0x1ec(r31)
/* 8039FE28 0039CD68  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 8039FE2C 0039CD6C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8039FE30 0039CD70  41 82 00 08 */	beq .L_8039FE38
/* 8039FE34 0039CD74  38 00 00 00 */	li r0, 0
.L_8039FE38:
/* 8039FE38 0039CD78  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8039FE3C 0039CD7C  41 82 00 DC */	beq .L_8039FF18
/* 8039FE40 0039CD80  C0 5F 02 54 */	lfs f2, 0x254(r31)
/* 8039FE44 0039CD84  C0 22 0E 20 */	lfs f1, lbl_8051F180@sda21(r2)
/* 8039FE48 0039CD88  C0 02 0F 44 */	lfs f0, lbl_8051F2A4@sda21(r2)
/* 8039FE4C 0039CD8C  EC 22 08 2A */	fadds f1, f2, f1
/* 8039FE50 0039CD90  D0 3F 02 54 */	stfs f1, 0x254(r31)
/* 8039FE54 0039CD94  C0 3F 02 54 */	lfs f1, 0x254(r31)
/* 8039FE58 0039CD98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039FE5C 0039CD9C  40 81 00 C4 */	ble .L_8039FF20
/* 8039FE60 0039CDA0  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8039FE64 0039CDA4  28 00 00 00 */	cmplwi r0, 0
/* 8039FE68 0039CDA8  40 82 00 B8 */	bne .L_8039FF20
/* 8039FE6C 0039CDAC  38 60 00 00 */	li r3, 0
/* 8039FE70 0039CDB0  38 00 00 01 */	li r0, 1
/* 8039FE74 0039CDB4  90 7F 02 40 */	stw r3, 0x240(r31)
/* 8039FE78 0039CDB8  7F E3 FB 78 */	mr r3, r31
/* 8039FE7C 0039CDBC  80 9F 01 F8 */	lwz r4, 0x1f8(r31)
/* 8039FE80 0039CDC0  90 04 00 34 */	stw r0, 0x34(r4)
/* 8039FE84 0039CDC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039FE88 0039CDC8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8039FE8C 0039CDCC  7D 89 03 A6 */	mtctr r12
/* 8039FE90 0039CDD0  4E 80 04 21 */	bctrl 
/* 8039FE94 0039CDD4  28 03 00 00 */	cmplwi r3, 0
/* 8039FE98 0039CDD8  40 82 00 20 */	bne .L_8039FEB8
/* 8039FE9C 0039CDDC  3C 60 80 49 */	lis r3, lbl_80494B24@ha
/* 8039FEA0 0039CDE0  3C A0 80 49 */	lis r5, lbl_80494B34@ha
/* 8039FEA4 0039CDE4  38 63 4B 24 */	addi r3, r3, lbl_80494B24@l
/* 8039FEA8 0039CDE8  38 80 09 46 */	li r4, 0x946
/* 8039FEAC 0039CDEC  38 A5 4B 34 */	addi r5, r5, lbl_80494B34@l
/* 8039FEB0 0039CDF0  4C C6 31 82 */	crclr 6
/* 8039FEB4 0039CDF4  4B C8 A7 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8039FEB8:
/* 8039FEB8 0039CDF8  7F E3 FB 78 */	mr r3, r31
/* 8039FEBC 0039CDFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8039FEC0 0039CE00  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8039FEC4 0039CE04  7D 89 03 A6 */	mtctr r12
/* 8039FEC8 0039CE08  4E 80 04 21 */	bctrl 
/* 8039FECC 0039CE0C  38 80 00 00 */	li r4, 0
/* 8039FED0 0039CE10  48 0B 20 C1 */	bl endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
/* 8039FED4 0039CE14  38 A0 00 00 */	li r5, 0
/* 8039FED8 0039CE18  38 C0 00 00 */	li r6, 0
/* 8039FEDC 0039CE1C  7C A4 2B 78 */	mr r4, r5
/* 8039FEE0 0039CE20  48 00 00 28 */	b .L_8039FF08
.L_8039FEE4:
/* 8039FEE4 0039CE24  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8039FEE8 0039CE28  7C 06 00 00 */	cmpw r6, r0
/* 8039FEEC 0039CE2C  41 82 00 14 */	beq .L_8039FF00
/* 8039FEF0 0039CE30  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8039FEF4 0039CE34  7C 63 28 2E */	lwzx r3, r3, r5
/* 8039FEF8 0039CE38  80 63 00 04 */	lwz r3, 4(r3)
/* 8039FEFC 0039CE3C  98 83 00 B0 */	stb r4, 0xb0(r3)
.L_8039FF00:
/* 8039FF00 0039CE40  38 A5 00 04 */	addi r5, r5, 4
/* 8039FF04 0039CE44  38 C6 00 01 */	addi r6, r6, 1
.L_8039FF08:
/* 8039FF08 0039CE48  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8039FF0C 0039CE4C  7C 06 00 00 */	cmpw r6, r0
/* 8039FF10 0039CE50  41 80 FF D4 */	blt .L_8039FEE4
/* 8039FF14 0039CE54  48 00 00 0C */	b .L_8039FF20
.L_8039FF18:
/* 8039FF18 0039CE58  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 8039FF1C 0039CE5C  D0 1F 02 54 */	stfs f0, 0x254(r31)
.L_8039FF20:
/* 8039FF20 0039CE60  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8039FF24 0039CE64  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8039FF28 0039CE68  7C 08 03 A6 */	mtlr r0
/* 8039FF2C 0039CE6C  38 21 00 30 */	addi r1, r1, 0x30
/* 8039FF30 0039CE70  4E 80 00 20 */	blr 
.endfn doScreenEffect__Q28Morimura9TVsSelectFv

.fn onyonDemoInit__Q28Morimura9TVsSelectFv, global
/* 8039FF34 0039CE74  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8039FF38 0039CE78  7C 08 02 A6 */	mflr r0
/* 8039FF3C 0039CE7C  90 01 01 34 */	stw r0, 0x134(r1)
/* 8039FF40 0039CE80  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 8039FF44 0039CE84  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 8039FF48 0039CE88  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 8039FF4C 0039CE8C  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 8039FF50 0039CE90  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 8039FF54 0039CE94  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 8039FF58 0039CE98  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 8039FF5C 0039CE9C  F3 81 00 F8 */	psq_st f28, 248(r1), 0, qr0
/* 8039FF60 0039CEA0  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 8039FF64 0039CEA4  F3 61 00 E8 */	psq_st f27, 232(r1), 0, qr0
/* 8039FF68 0039CEA8  DB 41 00 D0 */	stfd f26, 0xd0(r1)
/* 8039FF6C 0039CEAC  F3 41 00 D8 */	psq_st f26, 216(r1), 0, qr0
/* 8039FF70 0039CEB0  DB 21 00 C0 */	stfd f25, 0xc0(r1)
/* 8039FF74 0039CEB4  F3 21 00 C8 */	psq_st f25, 200(r1), 0, qr0
/* 8039FF78 0039CEB8  DB 01 00 B0 */	stfd f24, 0xb0(r1)
/* 8039FF7C 0039CEBC  F3 01 00 B8 */	psq_st f24, 184(r1), 0, qr0
/* 8039FF80 0039CEC0  DA E1 00 A0 */	stfd f23, 0xa0(r1)
/* 8039FF84 0039CEC4  F2 E1 00 A8 */	psq_st f23, 168(r1), 0, qr0
/* 8039FF88 0039CEC8  DA C1 00 90 */	stfd f22, 0x90(r1)
/* 8039FF8C 0039CECC  F2 C1 00 98 */	psq_st f22, 152(r1), 0, qr0
/* 8039FF90 0039CED0  DA A1 00 80 */	stfd f21, 0x80(r1)
/* 8039FF94 0039CED4  F2 A1 00 88 */	psq_st f21, 136(r1), 0, qr0
/* 8039FF98 0039CED8  DA 81 00 70 */	stfd f20, 0x70(r1)
/* 8039FF9C 0039CEDC  F2 81 00 78 */	psq_st f20, 120(r1), 0, qr0
/* 8039FFA0 0039CEE0  DA 61 00 60 */	stfd f19, 0x60(r1)
/* 8039FFA4 0039CEE4  F2 61 00 68 */	psq_st f19, 104(r1), 0, qr0
/* 8039FFA8 0039CEE8  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8039FFAC 0039CEEC  7C 7C 1B 78 */	mr r28, r3
/* 8039FFB0 0039CEF0  4B D2 95 F1 */	bl rand
/* 8039FFB4 0039CEF4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8039FFB8 0039CEF8  3C 00 43 30 */	lis r0, 0x4330
/* 8039FFBC 0039CEFC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8039FFC0 0039CF00  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 8039FFC4 0039CF04  90 01 00 08 */	stw r0, 8(r1)
/* 8039FFC8 0039CF08  C0 22 0E 64 */	lfs f1, lbl_8051F1C4@sda21(r2)
/* 8039FFCC 0039CF0C  C8 41 00 08 */	lfd f2, 8(r1)
/* 8039FFD0 0039CF10  C0 02 0E 28 */	lfs f0, lbl_8051F188@sda21(r2)
/* 8039FFD4 0039CF14  EC 42 18 28 */	fsubs f2, f2, f3
/* 8039FFD8 0039CF18  EC 22 08 24 */	fdivs f1, f2, f1
/* 8039FFDC 0039CF1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8039FFE0 0039CF20  40 81 00 0C */	ble .L_8039FFEC
/* 8039FFE4 0039CF24  C2 82 0E 20 */	lfs f20, lbl_8051F180@sda21(r2)
/* 8039FFE8 0039CF28  48 00 00 08 */	b .L_8039FFF0
.L_8039FFEC:
/* 8039FFEC 0039CF2C  C2 82 0E 1C */	lfs f20, lbl_8051F17C@sda21(r2)
.L_8039FFF0:
/* 8039FFF0 0039CF30  C2 E2 0E 28 */	lfs f23, lbl_8051F188@sda21(r2)
/* 8039FFF4 0039CF34  7F 9E E3 78 */	mr r30, r28
/* 8039FFF8 0039CF38  C3 02 0E 60 */	lfs f24, lbl_8051F1C0@sda21(r2)
/* 8039FFFC 0039CF3C  3B A0 00 00 */	li r29, 0
/* 803A0000 0039CF40  C3 22 0E 10 */	lfs f25, lbl_8051F170@sda21(r2)
/* 803A0004 0039CF44  3F E0 43 30 */	lis r31, 0x4330
/* 803A0008 0039CF48  CB 42 0E 38 */	lfd f26, lbl_8051F198@sda21(r2)
/* 803A000C 0039CF4C  C3 62 0E 64 */	lfs f27, lbl_8051F1C4@sda21(r2)
/* 803A0010 0039CF50  C3 82 0E 30 */	lfs f28, lbl_8051F190@sda21(r2)
/* 803A0014 0039CF54  C3 A2 0E 68 */	lfs f29, lbl_8051F1C8@sda21(r2)
/* 803A0018 0039CF58  C3 C2 0F 24 */	lfs f30, lbl_8051F284@sda21(r2)
/* 803A001C 0039CF5C  C3 E2 0F 30 */	lfs f31, lbl_8051F290@sda21(r2)
/* 803A0020 0039CF60  C2 62 0E 1C */	lfs f19, lbl_8051F17C@sda21(r2)
.L_803A0024:
/* 803A0024 0039CF64  C0 7C 02 90 */	lfs f3, 0x290(r28)
/* 803A0028 0039CF68  C0 5C 02 98 */	lfs f2, 0x298(r28)
/* 803A002C 0039CF6C  C0 3C 02 94 */	lfs f1, 0x294(r28)
/* 803A0030 0039CF70  C0 1C 02 9C */	lfs f0, 0x29c(r28)
/* 803A0034 0039CF74  EC 43 10 2A */	fadds f2, f3, f2
/* 803A0038 0039CF78  83 7E 01 E8 */	lwz r27, 0x1e8(r30)
/* 803A003C 0039CF7C  EC 01 00 2A */	fadds f0, f1, f0
/* 803A0040 0039CF80  D3 1B 00 0C */	stfs f24, 0xc(r27)
/* 803A0044 0039CF84  EE D7 00 B2 */	fmuls f22, f23, f2
/* 803A0048 0039CF88  EE B7 00 32 */	fmuls f21, f23, f0
/* 803A004C 0039CF8C  D3 3B 00 10 */	stfs f25, 0x10(r27)
/* 803A0050 0039CF90  4B D2 95 51 */	bl rand
/* 803A0054 0039CF94  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A0058 0039CF98  C0 0D 86 34 */	lfs f0, mTestVal__Q28Morimura9TVsSelect@sda21(r13)
/* 803A005C 0039CF9C  90 01 00 0C */	stw r0, 0xc(r1)
/* 803A0060 0039CFA0  38 60 00 01 */	li r3, 1
/* 803A0064 0039CFA4  FC 00 00 1E */	fctiwz f0, f0
/* 803A0068 0039CFA8  38 00 00 00 */	li r0, 0
/* 803A006C 0039CFAC  93 E1 00 08 */	stw r31, 8(r1)
/* 803A0070 0039CFB0  C8 21 00 08 */	lfd f1, 8(r1)
/* 803A0074 0039CFB4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 803A0078 0039CFB8  EC 01 D0 28 */	fsubs f0, f1, f26
/* 803A007C 0039CFBC  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 803A0080 0039CFC0  EC 00 D8 24 */	fdivs f0, f0, f27
/* 803A0084 0039CFC4  EC 1C 00 32 */	fmuls f0, f28, f0
/* 803A0088 0039CFC8  FC 00 00 1E */	fctiwz f0, f0
/* 803A008C 0039CFCC  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803A0090 0039CFD0  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 803A0094 0039CFD4  7C 85 22 14 */	add r4, r5, r4
/* 803A0098 0039CFD8  7C 84 00 D0 */	neg r4, r4
/* 803A009C 0039CFDC  90 9B 00 38 */	stw r4, 0x38(r27)
/* 803A00A0 0039CFE0  D3 3B 00 30 */	stfs f25, 0x30(r27)
/* 803A00A4 0039CFE4  98 7B 00 3C */	stb r3, 0x3c(r27)
/* 803A00A8 0039CFE8  80 7B 00 08 */	lwz r3, 8(r27)
/* 803A00AC 0039CFEC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803A00B0 0039CFF0  D3 3B 00 2C */	stfs f25, 0x2c(r27)
/* 803A00B4 0039CFF4  4B D2 94 ED */	bl rand
/* 803A00B8 0039CFF8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A00BC 0039CFFC  93 E1 00 20 */	stw r31, 0x20(r1)
/* 803A00C0 0039D000  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A00C4 0039D004  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 803A00C8 0039D008  EC 00 D0 28 */	fsubs f0, f0, f26
/* 803A00CC 0039D00C  EC 00 D8 24 */	fdivs f0, f0, f27
/* 803A00D0 0039D010  FC 00 B8 40 */	fcmpo cr0, f0, f23
/* 803A00D4 0039D014  40 81 00 0C */	ble .L_803A00E0
/* 803A00D8 0039D018  C0 02 0E 48 */	lfs f0, lbl_8051F1A8@sda21(r2)
/* 803A00DC 0039D01C  D0 1B 00 2C */	stfs f0, 0x2c(r27)
.L_803A00E0:
/* 803A00E0 0039D020  D3 3B 00 1C */	stfs f25, 0x1c(r27)
/* 803A00E4 0039D024  38 80 18 2C */	li r4, 0x182c
/* 803A00E8 0039D028  38 A0 00 00 */	li r5, 0
/* 803A00EC 0039D02C  D3 3B 00 20 */	stfs f25, 0x20(r27)
/* 803A00F0 0039D030  D3 3B 00 24 */	stfs f25, 0x24(r27)
/* 803A00F4 0039D034  D3 3B 00 28 */	stfs f25, 0x28(r27)
/* 803A00F8 0039D038  C0 0D 86 20 */	lfs f0, mAngRate__Q28Morimura9TVsSelect@sda21(r13)
/* 803A00FC 0039D03C  D0 1B 00 34 */	stfs f0, 0x34(r27)
/* 803A0100 0039D040  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803A0104 0039D044  4B F9 85 2D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803A0108 0039D048  4B D2 94 99 */	bl rand
/* 803A010C 0039D04C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A0110 0039D050  93 E1 00 20 */	stw r31, 0x20(r1)
/* 803A0114 0039D054  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A0118 0039D058  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 803A011C 0039D05C  EC 00 D0 28 */	fsubs f0, f0, f26
/* 803A0120 0039D060  EC 00 D8 24 */	fdivs f0, f0, f27
/* 803A0124 0039D064  EC 3D 00 32 */	fmuls f1, f29, f0
/* 803A0128 0039D068  FC 01 C8 40 */	fcmpo cr0, f1, f25
/* 803A012C 0039D06C  40 80 00 30 */	bge .L_803A015C
/* 803A0130 0039D070  C0 02 0E 50 */	lfs f0, lbl_8051F1B0@sda21(r2)
/* 803A0134 0039D074  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A0138 0039D078  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A013C 0039D07C  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A0140 0039D080  FC 00 00 1E */	fctiwz f0, f0
/* 803A0144 0039D084  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803A0148 0039D088  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 803A014C 0039D08C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A0150 0039D090  7C 03 04 2E */	lfsx f0, r3, r0
/* 803A0154 0039D094  FC 00 00 50 */	fneg f0, f0
/* 803A0158 0039D098  48 00 00 28 */	b .L_803A0180
.L_803A015C:
/* 803A015C 0039D09C  C0 02 0E 54 */	lfs f0, lbl_8051F1B4@sda21(r2)
/* 803A0160 0039D0A0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A0164 0039D0A4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A0168 0039D0A8  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A016C 0039D0AC  FC 00 00 1E */	fctiwz f0, f0
/* 803A0170 0039D0B0  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 803A0174 0039D0B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A0178 0039D0B8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A017C 0039D0BC  7C 03 04 2E */	lfsx f0, r3, r0
.L_803A0180:
/* 803A0180 0039D0C0  EC 1E E0 3A */	fmadds f0, f30, f0, f28
/* 803A0184 0039D0C4  EE D4 B0 3A */	fmadds f22, f20, f0, f22
/* 803A0188 0039D0C8  4B D2 94 19 */	bl rand
/* 803A018C 0039D0CC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A0190 0039D0D0  93 E1 00 08 */	stw r31, 8(r1)
/* 803A0194 0039D0D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 803A0198 0039D0D8  C8 01 00 08 */	lfd f0, 8(r1)
/* 803A019C 0039D0DC  EC 00 D0 28 */	fsubs f0, f0, f26
/* 803A01A0 0039D0E0  EC 00 D8 24 */	fdivs f0, f0, f27
/* 803A01A4 0039D0E4  EC 3D 00 32 */	fmuls f1, f29, f0
/* 803A01A8 0039D0E8  FC 01 C8 40 */	fcmpo cr0, f1, f25
/* 803A01AC 0039D0EC  40 80 00 30 */	bge .L_803A01DC
/* 803A01B0 0039D0F0  C0 02 0E 50 */	lfs f0, lbl_8051F1B0@sda21(r2)
/* 803A01B4 0039D0F4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A01B8 0039D0F8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A01BC 0039D0FC  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A01C0 0039D100  FC 00 00 1E */	fctiwz f0, f0
/* 803A01C4 0039D104  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 803A01C8 0039D108  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803A01CC 0039D10C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A01D0 0039D110  7C 03 04 2E */	lfsx f0, r3, r0
/* 803A01D4 0039D114  FC 00 00 50 */	fneg f0, f0
/* 803A01D8 0039D118  48 00 00 28 */	b .L_803A0200
.L_803A01DC:
/* 803A01DC 0039D11C  C0 02 0E 54 */	lfs f0, lbl_8051F1B4@sda21(r2)
/* 803A01E0 0039D120  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A01E4 0039D124  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A01E8 0039D128  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A01EC 0039D12C  FC 00 00 1E */	fctiwz f0, f0
/* 803A01F0 0039D130  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 803A01F4 0039D134  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803A01F8 0039D138  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A01FC 0039D13C  7C 03 04 2E */	lfsx f0, r3, r0
.L_803A0200:
/* 803A0200 0039D140  EC 1F F8 3A */	fmadds f0, f31, f0, f31
/* 803A0204 0039D144  80 7E 01 E8 */	lwz r3, 0x1e8(r30)
/* 803A0208 0039D148  D2 C3 00 14 */	stfs f22, 0x14(r3)
/* 803A020C 0039D14C  EE B4 A8 3A */	fmadds f21, f20, f0, f21
/* 803A0210 0039D150  D2 A3 00 18 */	stfs f21, 0x18(r3)
/* 803A0214 0039D154  4B D2 93 8D */	bl rand
/* 803A0218 0039D158  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A021C 0039D15C  93 E1 00 38 */	stw r31, 0x38(r1)
/* 803A0220 0039D160  90 01 00 3C */	stw r0, 0x3c(r1)
/* 803A0224 0039D164  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803A0228 0039D168  EC 00 D0 28 */	fsubs f0, f0, f26
/* 803A022C 0039D16C  EC 00 D8 24 */	fdivs f0, f0, f27
/* 803A0230 0039D170  FC 00 B8 40 */	fcmpo cr0, f0, f23
/* 803A0234 0039D174  40 80 00 AC */	bge .L_803A02E0
/* 803A0238 0039D178  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 803A023C 0039D17C  FC 14 00 40 */	fcmpo cr0, f20, f0
/* 803A0240 0039D180  40 81 00 3C */	ble .L_803A027C
/* 803A0244 0039D184  4B D2 93 5D */	bl rand
/* 803A0248 0039D188  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803A024C 0039D18C  3C 00 43 30 */	lis r0, 0x4330
/* 803A0250 0039D190  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803A0254 0039D194  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 803A0258 0039D198  90 01 00 38 */	stw r0, 0x38(r1)
/* 803A025C 0039D19C  C0 42 0E 64 */	lfs f2, lbl_8051F1C4@sda21(r2)
/* 803A0260 0039D1A0  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803A0264 0039D1A4  C0 22 0E 58 */	lfs f1, lbl_8051F1B8@sda21(r2)
/* 803A0268 0039D1A8  EC 60 18 28 */	fsubs f3, f0, f3
/* 803A026C 0039D1AC  C0 02 0E 14 */	lfs f0, lbl_8051F174@sda21(r2)
/* 803A0270 0039D1B0  EC 43 10 24 */	fdivs f2, f3, f2
/* 803A0274 0039D1B4  EE A1 00 BA */	fmadds f21, f1, f2, f0
/* 803A0278 0039D1B8  48 00 00 34 */	b .L_803A02AC
.L_803A027C:
/* 803A027C 0039D1BC  4B D2 93 25 */	bl rand
/* 803A0280 0039D1C0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803A0284 0039D1C4  3C 00 43 30 */	lis r0, 0x4330
/* 803A0288 0039D1C8  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803A028C 0039D1CC  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 803A0290 0039D1D0  90 01 00 38 */	stw r0, 0x38(r1)
/* 803A0294 0039D1D4  C0 22 0E 64 */	lfs f1, lbl_8051F1C4@sda21(r2)
/* 803A0298 0039D1D8  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 803A029C 0039D1DC  C0 02 0F 48 */	lfs f0, lbl_8051F2A8@sda21(r2)
/* 803A02A0 0039D1E0  EC 42 18 28 */	fsubs f2, f2, f3
/* 803A02A4 0039D1E4  EC 22 08 24 */	fdivs f1, f2, f1
/* 803A02A8 0039D1E8  EE A0 00 72 */	fmuls f21, f0, f1
.L_803A02AC:
/* 803A02AC 0039D1EC  4B D2 92 F5 */	bl rand
/* 803A02B0 0039D1F0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803A02B4 0039D1F4  3C 00 43 30 */	lis r0, 0x4330
/* 803A02B8 0039D1F8  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803A02BC 0039D1FC  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 803A02C0 0039D200  90 01 00 38 */	stw r0, 0x38(r1)
/* 803A02C4 0039D204  C0 22 0E 64 */	lfs f1, lbl_8051F1C4@sda21(r2)
/* 803A02C8 0039D208  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 803A02CC 0039D20C  C0 02 0E 18 */	lfs f0, lbl_8051F178@sda21(r2)
/* 803A02D0 0039D210  EC 42 18 28 */	fsubs f2, f2, f3
/* 803A02D4 0039D214  EC 22 08 24 */	fdivs f1, f2, f1
/* 803A02D8 0039D218  EE C0 00 72 */	fmuls f22, f0, f1
/* 803A02DC 0039D21C  48 00 00 A8 */	b .L_803A0384
.L_803A02E0:
/* 803A02E0 0039D220  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 803A02E4 0039D224  FC 14 00 40 */	fcmpo cr0, f20, f0
/* 803A02E8 0039D228  40 81 00 3C */	ble .L_803A0324
/* 803A02EC 0039D22C  4B D2 92 B5 */	bl rand
/* 803A02F0 0039D230  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803A02F4 0039D234  3C 00 43 30 */	lis r0, 0x4330
/* 803A02F8 0039D238  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803A02FC 0039D23C  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 803A0300 0039D240  90 01 00 38 */	stw r0, 0x38(r1)
/* 803A0304 0039D244  C0 42 0E 64 */	lfs f2, lbl_8051F1C4@sda21(r2)
/* 803A0308 0039D248  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803A030C 0039D24C  C0 22 0E 58 */	lfs f1, lbl_8051F1B8@sda21(r2)
/* 803A0310 0039D250  EC 60 18 28 */	fsubs f3, f0, f3
/* 803A0314 0039D254  C0 02 0E 18 */	lfs f0, lbl_8051F178@sda21(r2)
/* 803A0318 0039D258  EC 43 10 24 */	fdivs f2, f3, f2
/* 803A031C 0039D25C  EE C1 00 BA */	fmadds f22, f1, f2, f0
/* 803A0320 0039D260  48 00 00 34 */	b .L_803A0354
.L_803A0324:
/* 803A0324 0039D264  4B D2 92 7D */	bl rand
/* 803A0328 0039D268  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803A032C 0039D26C  3C 00 43 30 */	lis r0, 0x4330
/* 803A0330 0039D270  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803A0334 0039D274  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 803A0338 0039D278  90 01 00 38 */	stw r0, 0x38(r1)
/* 803A033C 0039D27C  C0 22 0E 64 */	lfs f1, lbl_8051F1C4@sda21(r2)
/* 803A0340 0039D280  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 803A0344 0039D284  C0 02 0F 48 */	lfs f0, lbl_8051F2A8@sda21(r2)
/* 803A0348 0039D288  EC 42 18 28 */	fsubs f2, f2, f3
/* 803A034C 0039D28C  EC 22 08 24 */	fdivs f1, f2, f1
/* 803A0350 0039D290  EE C0 00 72 */	fmuls f22, f0, f1
.L_803A0354:
/* 803A0354 0039D294  4B D2 92 4D */	bl rand
/* 803A0358 0039D298  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803A035C 0039D29C  3C 00 43 30 */	lis r0, 0x4330
/* 803A0360 0039D2A0  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803A0364 0039D2A4  C8 62 0E 38 */	lfd f3, lbl_8051F198@sda21(r2)
/* 803A0368 0039D2A8  90 01 00 38 */	stw r0, 0x38(r1)
/* 803A036C 0039D2AC  C0 22 0E 64 */	lfs f1, lbl_8051F1C4@sda21(r2)
/* 803A0370 0039D2B0  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 803A0374 0039D2B4  C0 02 0E 14 */	lfs f0, lbl_8051F174@sda21(r2)
/* 803A0378 0039D2B8  EC 42 18 28 */	fsubs f2, f2, f3
/* 803A037C 0039D2BC  EC 22 08 24 */	fdivs f1, f2, f1
/* 803A0380 0039D2C0  EE A0 00 72 */	fmuls f21, f0, f1
.L_803A0384:
/* 803A0384 0039D2C4  80 7E 01 E8 */	lwz r3, 0x1e8(r30)
/* 803A0388 0039D2C8  3B BD 00 01 */	addi r29, r29, 1
/* 803A038C 0039D2CC  2C 1D 00 02 */	cmpwi r29, 2
/* 803A0390 0039D2D0  D2 A3 00 0C */	stfs f21, 0xc(r3)
/* 803A0394 0039D2D4  D2 C3 00 10 */	stfs f22, 0x10(r3)
/* 803A0398 0039D2D8  80 7E 01 E8 */	lwz r3, 0x1e8(r30)
/* 803A039C 0039D2DC  3B DE 00 04 */	addi r30, r30, 4
/* 803A03A0 0039D2E0  D2 83 00 00 */	stfs f20, 0(r3)
/* 803A03A4 0039D2E4  EE 94 04 F2 */	fmuls f20, f20, f19
/* 803A03A8 0039D2E8  41 80 FC 7C */	blt .L_803A0024
/* 803A03AC 0039D2EC  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 803A03B0 0039D2F0  D0 1C 02 50 */	stfs f0, 0x250(r28)
/* 803A03B4 0039D2F4  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 803A03B8 0039D2F8  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 803A03BC 0039D2FC  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 803A03C0 0039D300  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 803A03C4 0039D304  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 803A03C8 0039D308  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 803A03CC 0039D30C  E3 81 00 F8 */	psq_l f28, 248(r1), 0, qr0
/* 803A03D0 0039D310  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 803A03D4 0039D314  E3 61 00 E8 */	psq_l f27, 232(r1), 0, qr0
/* 803A03D8 0039D318  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 803A03DC 0039D31C  E3 41 00 D8 */	psq_l f26, 216(r1), 0, qr0
/* 803A03E0 0039D320  CB 41 00 D0 */	lfd f26, 0xd0(r1)
/* 803A03E4 0039D324  E3 21 00 C8 */	psq_l f25, 200(r1), 0, qr0
/* 803A03E8 0039D328  CB 21 00 C0 */	lfd f25, 0xc0(r1)
/* 803A03EC 0039D32C  E3 01 00 B8 */	psq_l f24, 184(r1), 0, qr0
/* 803A03F0 0039D330  CB 01 00 B0 */	lfd f24, 0xb0(r1)
/* 803A03F4 0039D334  E2 E1 00 A8 */	psq_l f23, 168(r1), 0, qr0
/* 803A03F8 0039D338  CA E1 00 A0 */	lfd f23, 0xa0(r1)
/* 803A03FC 0039D33C  E2 C1 00 98 */	psq_l f22, 152(r1), 0, qr0
/* 803A0400 0039D340  CA C1 00 90 */	lfd f22, 0x90(r1)
/* 803A0404 0039D344  E2 A1 00 88 */	psq_l f21, 136(r1), 0, qr0
/* 803A0408 0039D348  CA A1 00 80 */	lfd f21, 0x80(r1)
/* 803A040C 0039D34C  E2 81 00 78 */	psq_l f20, 120(r1), 0, qr0
/* 803A0410 0039D350  CA 81 00 70 */	lfd f20, 0x70(r1)
/* 803A0414 0039D354  E2 61 00 68 */	psq_l f19, 104(r1), 0, qr0
/* 803A0418 0039D358  CA 61 00 60 */	lfd f19, 0x60(r1)
/* 803A041C 0039D35C  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 803A0420 0039D360  80 01 01 34 */	lwz r0, 0x134(r1)
/* 803A0424 0039D364  7C 08 03 A6 */	mtlr r0
/* 803A0428 0039D368  38 21 01 30 */	addi r1, r1, 0x130
/* 803A042C 0039D36C  4E 80 00 20 */	blr 
.endfn onyonDemoInit__Q28Morimura9TVsSelectFv

.fn demoStart__Q28Morimura9TVsSelectFv, global
/* 803A0430 0039D370  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 803A0434 0039D374  7C 08 02 A6 */	mflr r0
/* 803A0438 0039D378  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 803A043C 0039D37C  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 803A0440 0039D380  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 803A0444 0039D384  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 803A0448 0039D388  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 803A044C 0039D38C  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 803A0450 0039D390  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 803A0454 0039D394  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 803A0458 0039D398  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 803A045C 0039D39C  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 803A0460 0039D3A0  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 803A0464 0039D3A4  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 803A0468 0039D3A8  F3 41 00 48 */	psq_st f26, 72(r1), 0, qr0
/* 803A046C 0039D3AC  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 803A0470 0039D3B0  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 803A0474 0039D3B4  7C 7F 1B 78 */	mr r31, r3
/* 803A0478 0039D3B8  C3 42 0E 10 */	lfs f26, lbl_8051F170@sda21(r2)
/* 803A047C 0039D3BC  3B A0 00 00 */	li r29, 0
/* 803A0480 0039D3C0  D0 0D 86 44 */	stfs f0, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
/* 803A0484 0039D3C4  7F FB FB 78 */	mr r27, r31
/* 803A0488 0039D3C8  C3 62 0E 60 */	lfs f27, lbl_8051F1C0@sda21(r2)
/* 803A048C 0039D3CC  3F C0 43 30 */	lis r30, 0x4330
/* 803A0490 0039D3D0  D3 43 02 6C */	stfs f26, 0x26c(r3)
/* 803A0494 0039D3D4  CB 82 0E 38 */	lfd f28, lbl_8051F198@sda21(r2)
/* 803A0498 0039D3D8  93 A3 02 40 */	stw r29, 0x240(r3)
/* 803A049C 0039D3DC  C3 A2 0E 64 */	lfs f29, lbl_8051F1C4@sda21(r2)
/* 803A04A0 0039D3E0  D3 43 02 50 */	stfs f26, 0x250(r3)
/* 803A04A4 0039D3E4  C3 C2 0E 30 */	lfs f30, lbl_8051F190@sda21(r2)
/* 803A04A8 0039D3E8  C3 E2 0E 28 */	lfs f31, lbl_8051F188@sda21(r2)
.L_803A04AC:
/* 803A04AC 0039D3EC  83 9B 01 E8 */	lwz r28, 0x1e8(r27)
/* 803A04B0 0039D3F0  D3 7C 00 0C */	stfs f27, 0xc(r28)
/* 803A04B4 0039D3F4  D3 5C 00 10 */	stfs f26, 0x10(r28)
/* 803A04B8 0039D3F8  4B D2 90 E9 */	bl rand
/* 803A04BC 0039D3FC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A04C0 0039D400  C0 0D 86 34 */	lfs f0, mTestVal__Q28Morimura9TVsSelect@sda21(r13)
/* 803A04C4 0039D404  90 01 00 0C */	stw r0, 0xc(r1)
/* 803A04C8 0039D408  38 60 00 01 */	li r3, 1
/* 803A04CC 0039D40C  FC 00 00 1E */	fctiwz f0, f0
/* 803A04D0 0039D410  38 00 00 00 */	li r0, 0
/* 803A04D4 0039D414  93 C1 00 08 */	stw r30, 8(r1)
/* 803A04D8 0039D418  C8 21 00 08 */	lfd f1, 8(r1)
/* 803A04DC 0039D41C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 803A04E0 0039D420  EC 01 E0 28 */	fsubs f0, f1, f28
/* 803A04E4 0039D424  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 803A04E8 0039D428  EC 00 E8 24 */	fdivs f0, f0, f29
/* 803A04EC 0039D42C  EC 1E 00 32 */	fmuls f0, f30, f0
/* 803A04F0 0039D430  FC 00 00 1E */	fctiwz f0, f0
/* 803A04F4 0039D434  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803A04F8 0039D438  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 803A04FC 0039D43C  7C 85 22 14 */	add r4, r5, r4
/* 803A0500 0039D440  7C 84 00 D0 */	neg r4, r4
/* 803A0504 0039D444  90 9C 00 38 */	stw r4, 0x38(r28)
/* 803A0508 0039D448  D3 5C 00 30 */	stfs f26, 0x30(r28)
/* 803A050C 0039D44C  98 7C 00 3C */	stb r3, 0x3c(r28)
/* 803A0510 0039D450  80 7C 00 08 */	lwz r3, 8(r28)
/* 803A0514 0039D454  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803A0518 0039D458  D3 5C 00 2C */	stfs f26, 0x2c(r28)
/* 803A051C 0039D45C  4B D2 90 85 */	bl rand
/* 803A0520 0039D460  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803A0524 0039D464  93 C1 00 20 */	stw r30, 0x20(r1)
/* 803A0528 0039D468  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A052C 0039D46C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 803A0530 0039D470  EC 00 E0 28 */	fsubs f0, f0, f28
/* 803A0534 0039D474  EC 00 E8 24 */	fdivs f0, f0, f29
/* 803A0538 0039D478  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 803A053C 0039D47C  40 81 00 0C */	ble .L_803A0548
/* 803A0540 0039D480  C0 02 0E 48 */	lfs f0, lbl_8051F1A8@sda21(r2)
/* 803A0544 0039D484  D0 1C 00 2C */	stfs f0, 0x2c(r28)
.L_803A0548:
/* 803A0548 0039D488  D3 5C 00 1C */	stfs f26, 0x1c(r28)
/* 803A054C 0039D48C  3B BD 00 01 */	addi r29, r29, 1
/* 803A0550 0039D490  2C 1D 00 02 */	cmpwi r29, 2
/* 803A0554 0039D494  3B 7B 00 04 */	addi r27, r27, 4
/* 803A0558 0039D498  D3 5C 00 20 */	stfs f26, 0x20(r28)
/* 803A055C 0039D49C  D3 5C 00 24 */	stfs f26, 0x24(r28)
/* 803A0560 0039D4A0  D3 5C 00 28 */	stfs f26, 0x28(r28)
/* 803A0564 0039D4A4  C0 0D 86 20 */	lfs f0, mAngRate__Q28Morimura9TVsSelect@sda21(r13)
/* 803A0568 0039D4A8  D0 1C 00 34 */	stfs f0, 0x34(r28)
/* 803A056C 0039D4AC  41 80 FF 40 */	blt .L_803A04AC
/* 803A0570 0039D4B0  38 60 00 00 */	li r3, 0
/* 803A0574 0039D4B4  38 00 00 01 */	li r0, 1
/* 803A0578 0039D4B8  98 7F 02 29 */	stb r3, 0x229(r31)
/* 803A057C 0039D4BC  98 7F 02 2A */	stb r3, 0x22a(r31)
/* 803A0580 0039D4C0  90 1F 02 40 */	stw r0, 0x240(r31)
/* 803A0584 0039D4C4  98 0D 99 C2 */	stb r0, mCanCancel__Q28Morimura9TVsSelect@sda21(r13)
/* 803A0588 0039D4C8  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 803A058C 0039D4CC  81 83 00 00 */	lwz r12, 0(r3)
/* 803A0590 0039D4D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803A0594 0039D4D4  7D 89 03 A6 */	mtctr r12
/* 803A0598 0039D4D8  4E 80 04 21 */	bctrl 
/* 803A059C 0039D4DC  38 00 00 01 */	li r0, 1
/* 803A05A0 0039D4E0  7F E3 FB 78 */	mr r3, r31
/* 803A05A4 0039D4E4  98 1F 02 29 */	stb r0, 0x229(r31)
/* 803A05A8 0039D4E8  4B FF F9 8D */	bl onyonDemoInit__Q28Morimura9TVsSelectFv
/* 803A05AC 0039D4EC  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 803A05B0 0039D4F0  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 803A05B4 0039D4F4  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 803A05B8 0039D4F8  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 803A05BC 0039D4FC  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 803A05C0 0039D500  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 803A05C4 0039D504  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 803A05C8 0039D508  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 803A05CC 0039D50C  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 803A05D0 0039D510  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 803A05D4 0039D514  E3 41 00 48 */	psq_l f26, 72(r1), 0, qr0
/* 803A05D8 0039D518  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 803A05DC 0039D51C  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 803A05E0 0039D520  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 803A05E4 0039D524  7C 08 03 A6 */	mtlr r0
/* 803A05E8 0039D528  38 21 00 A0 */	addi r1, r1, 0xa0
/* 803A05EC 0039D52C  4E 80 00 20 */	blr 
.endfn demoStart__Q28Morimura9TVsSelectFv

.fn changeCourseTexture__Q28Morimura9TVsSelectFv, global
/* 803A05F0 0039D530  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A05F4 0039D534  7C 08 02 A6 */	mflr r0
/* 803A05F8 0039D538  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A05FC 0039D53C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803A0600 0039D540  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803A0604 0039D544  3B C0 00 00 */	li r30, 0
/* 803A0608 0039D548  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803A060C 0039D54C  7C 7D 1B 78 */	mr r29, r3
/* 803A0610 0039D550  7F BF EB 78 */	mr r31, r29
/* 803A0614 0039D554  48 00 00 50 */	b .L_803A0664
.L_803A0618:
/* 803A0618 0039D558  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803A061C 0039D55C  7F C4 F3 78 */	mr r4, r30
/* 803A0620 0039D560  28 00 00 00 */	cmplwi r0, 0
/* 803A0624 0039D564  40 82 00 14 */	bne .L_803A0638
/* 803A0628 0039D568  80 7D 01 F8 */	lwz r3, 0x1f8(r29)
/* 803A062C 0039D56C  80 63 00 08 */	lwz r3, 8(r3)
/* 803A0630 0039D570  4B E9 4B F1 */	bl __cl__Q24Game14Vs2D_TitleInfoFi
/* 803A0634 0039D574  80 83 00 00 */	lwz r4, 0(r3)
.L_803A0638:
/* 803A0638 0039D578  80 7F 01 40 */	lwz r3, 0x140(r31)
/* 803A063C 0039D57C  54 80 10 3A */	slwi r0, r4, 2
/* 803A0640 0039D580  80 9D 03 28 */	lwz r4, 0x328(r29)
/* 803A0644 0039D584  38 A0 00 00 */	li r5, 0
/* 803A0648 0039D588  81 83 00 00 */	lwz r12, 0(r3)
/* 803A064C 0039D58C  7C 84 00 2E */	lwzx r4, r4, r0
/* 803A0650 0039D590  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 803A0654 0039D594  7D 89 03 A6 */	mtctr r12
/* 803A0658 0039D598  4E 80 04 21 */	bctrl 
/* 803A065C 0039D59C  3B FF 00 04 */	addi r31, r31, 4
/* 803A0660 0039D5A0  3B DE 00 01 */	addi r30, r30, 1
.L_803A0664:
/* 803A0664 0039D5A4  A8 1D 00 8E */	lha r0, 0x8e(r29)
/* 803A0668 0039D5A8  7C 1E 00 00 */	cmpw r30, r0
/* 803A066C 0039D5AC  41 80 FF AC */	blt .L_803A0618
/* 803A0670 0039D5B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A0674 0039D5B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803A0678 0039D5B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803A067C 0039D5BC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803A0680 0039D5C0  7C 08 03 A6 */	mtlr r0
/* 803A0684 0039D5C4  38 21 00 20 */	addi r1, r1, 0x20
/* 803A0688 0039D5C8  4E 80 00 20 */	blr 
.endfn changeCourseTexture__Q28Morimura9TVsSelectFv

.fn changeIndirectTexture__Q28Morimura9TVsSelectFv, global
/* 803A068C 0039D5CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A0690 0039D5D0  7C 08 02 A6 */	mflr r0
/* 803A0694 0039D5D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A0698 0039D5D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A069C 0039D5DC  93 C1 00 08 */	stw r30, 8(r1)
/* 803A06A0 0039D5E0  7C 7E 1B 78 */	mr r30, r3
/* 803A06A4 0039D5E4  80 03 00 94 */	lwz r0, 0x94(r3)
/* 803A06A8 0039D5E8  80 63 00 88 */	lwz r3, 0x88(r3)
/* 803A06AC 0039D5EC  54 00 10 3A */	slwi r0, r0, 2
/* 803A06B0 0039D5F0  7C 63 00 2E */	lwzx r3, r3, r0
/* 803A06B4 0039D5F4  48 00 1F 09 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 803A06B8 0039D5F8  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803A06BC 0039D5FC  28 00 00 00 */	cmplwi r0, 0
/* 803A06C0 0039D600  40 82 00 18 */	bne .L_803A06D8
/* 803A06C4 0039D604  80 BE 01 F8 */	lwz r5, 0x1f8(r30)
/* 803A06C8 0039D608  7C 64 1B 78 */	mr r4, r3
/* 803A06CC 0039D60C  80 65 00 08 */	lwz r3, 8(r5)
/* 803A06D0 0039D610  4B E9 4B 51 */	bl __cl__Q24Game14Vs2D_TitleInfoFi
/* 803A06D4 0039D614  80 63 00 00 */	lwz r3, 0(r3)
.L_803A06D8:
/* 803A06D8 0039D618  80 DE 00 D8 */	lwz r6, 0xd8(r30)
/* 803A06DC 0039D61C  54 7F 10 3A */	slwi r31, r3, 2
/* 803A06E0 0039D620  80 9E 03 28 */	lwz r4, 0x328(r30)
/* 803A06E4 0039D624  38 A0 00 00 */	li r5, 0
/* 803A06E8 0039D628  80 66 00 18 */	lwz r3, 0x18(r6)
/* 803A06EC 0039D62C  7C 84 F8 2E */	lwzx r4, r4, r31
/* 803A06F0 0039D630  4B C9 29 95 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 803A06F4 0039D634  80 7E 01 E4 */	lwz r3, 0x1e4(r30)
/* 803A06F8 0039D638  38 A0 00 00 */	li r5, 0
/* 803A06FC 0039D63C  80 9E 03 28 */	lwz r4, 0x328(r30)
/* 803A0700 0039D640  81 83 00 00 */	lwz r12, 0(r3)
/* 803A0704 0039D644  7C 84 F8 2E */	lwzx r4, r4, r31
/* 803A0708 0039D648  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 803A070C 0039D64C  7D 89 03 A6 */	mtctr r12
/* 803A0710 0039D650  4E 80 04 21 */	bctrl 
/* 803A0714 0039D654  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 803A0718 0039D658  38 A0 00 00 */	li r5, 0
/* 803A071C 0039D65C  80 7E 00 D8 */	lwz r3, 0xd8(r30)
/* 803A0720 0039D660  54 00 10 3A */	slwi r0, r0, 2
/* 803A0724 0039D664  7C DE 02 14 */	add r6, r30, r0
/* 803A0728 0039D668  80 83 00 20 */	lwz r4, 0x20(r3)
/* 803A072C 0039D66C  80 66 01 40 */	lwz r3, 0x140(r6)
/* 803A0730 0039D670  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803A0734 0039D674  81 83 00 00 */	lwz r12, 0(r3)
/* 803A0738 0039D678  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 803A073C 0039D67C  7D 89 03 A6 */	mtctr r12
/* 803A0740 0039D680  4E 80 04 21 */	bctrl 
/* 803A0744 0039D684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A0748 0039D688  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A074C 0039D68C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A0750 0039D690  7C 08 03 A6 */	mtlr r0
/* 803A0754 0039D694  38 21 00 10 */	addi r1, r1, 0x10
/* 803A0758 0039D698  4E 80 00 20 */	blr 
.endfn changeIndirectTexture__Q28Morimura9TVsSelectFv

.fn setShortenIndex__Q28Morimura9TVsSelectFiib, global
/* 803A075C 0039D69C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A0760 0039D6A0  7C 08 02 A6 */	mflr r0
/* 803A0764 0039D6A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A0768 0039D6A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803A076C 0039D6AC  7C BF 2B 78 */	mr r31, r5
/* 803A0770 0039D6B0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803A0774 0039D6B4  7C 9E 23 78 */	mr r30, r4
/* 803A0778 0039D6B8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803A077C 0039D6BC  7C 7D 1B 78 */	mr r29, r3
/* 803A0780 0039D6C0  A8 03 00 8E */	lha r0, 0x8e(r3)
/* 803A0784 0039D6C4  7C 1E 00 00 */	cmpw r30, r0
/* 803A0788 0039D6C8  41 80 00 20 */	blt .L_803A07A8
/* 803A078C 0039D6CC  3C 60 80 49 */	lis r3, lbl_80494B24@ha
/* 803A0790 0039D6D0  3C A0 80 49 */	lis r5, lbl_80494B34@ha
/* 803A0794 0039D6D4  38 63 4B 24 */	addi r3, r3, lbl_80494B24@l
/* 803A0798 0039D6D8  38 80 09 C7 */	li r4, 0x9c7
/* 803A079C 0039D6DC  38 A5 4B 34 */	addi r5, r5, lbl_80494B34@l
/* 803A07A0 0039D6E0  4C C6 31 82 */	crclr 6
/* 803A07A4 0039D6E4  4B C8 9E 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A07A8:
/* 803A07A8 0039D6E8  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803A07AC 0039D6EC  7F E5 FB 78 */	mr r5, r31
/* 803A07B0 0039D6F0  28 00 00 00 */	cmplwi r0, 0
/* 803A07B4 0039D6F4  40 82 00 18 */	bne .L_803A07CC
/* 803A07B8 0039D6F8  80 7D 01 F8 */	lwz r3, 0x1f8(r29)
/* 803A07BC 0039D6FC  7F E4 FB 78 */	mr r4, r31
/* 803A07C0 0039D700  80 63 00 08 */	lwz r3, 8(r3)
/* 803A07C4 0039D704  4B E9 4A 5D */	bl __cl__Q24Game14Vs2D_TitleInfoFi
/* 803A07C8 0039D708  80 A3 00 00 */	lwz r5, 0(r3)
.L_803A07CC:
/* 803A07CC 0039D70C  57 C0 10 3A */	slwi r0, r30, 2
/* 803A07D0 0039D710  80 9D 03 28 */	lwz r4, 0x328(r29)
/* 803A07D4 0039D714  7C 7D 02 14 */	add r3, r29, r0
/* 803A07D8 0039D718  54 A0 10 3A */	slwi r0, r5, 2
/* 803A07DC 0039D71C  80 63 01 40 */	lwz r3, 0x140(r3)
/* 803A07E0 0039D720  38 A0 00 00 */	li r5, 0
/* 803A07E4 0039D724  7C 84 00 2E */	lwzx r4, r4, r0
/* 803A07E8 0039D728  81 83 00 00 */	lwz r12, 0(r3)
/* 803A07EC 0039D72C  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 803A07F0 0039D730  7D 89 03 A6 */	mtctr r12
/* 803A07F4 0039D734  4E 80 04 21 */	bctrl 
/* 803A07F8 0039D738  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A07FC 0039D73C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803A0800 0039D740  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803A0804 0039D744  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803A0808 0039D748  7C 08 03 A6 */	mtlr r0
/* 803A080C 0039D74C  38 21 00 20 */	addi r1, r1, 0x20
/* 803A0810 0039D750  4E 80 00 20 */	blr 
.endfn setShortenIndex__Q28Morimura9TVsSelectFiib

.fn updateFacePicture__Q28Morimura9TVsSelectFv, global
/* 803A0814 0039D754  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A0818 0039D758  7C 08 02 A6 */	mflr r0
/* 803A081C 0039D75C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A0820 0039D760  BF 41 00 08 */	stmw r26, 8(r1)
/* 803A0824 0039D764  7C 7A 1B 78 */	mr r26, r3
/* 803A0828 0039D768  3B 60 00 00 */	li r27, 0
/* 803A082C 0039D76C  7F 5F D3 78 */	mr r31, r26
/* 803A0830 0039D770  83 83 02 4C */	lwz r28, 0x24c(r3)
/* 803A0834 0039D774  20 1C 00 04 */	subfic r0, r28, 4
/* 803A0838 0039D778  57 83 18 38 */	slwi r3, r28, 3
/* 803A083C 0039D77C  54 00 18 38 */	slwi r0, r0, 3
/* 803A0840 0039D780  7F DA 1A 14 */	add r30, r26, r3
/* 803A0844 0039D784  7F BA 02 14 */	add r29, r26, r0
.L_803A0848:
/* 803A0848 0039D788  2C 1C 00 00 */	cmpwi r28, 0
/* 803A084C 0039D78C  41 80 00 28 */	blt .L_803A0874
/* 803A0850 0039D790  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803A0854 0039D794  C0 3E 02 AC */	lfs f1, 0x2ac(r30)
/* 803A0858 0039D798  C0 1E 02 A8 */	lfs f0, 0x2a8(r30)
/* 803A085C 0039D79C  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 803A0860 0039D7A0  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 803A0864 0039D7A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803A0868 0039D7A8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A086C 0039D7AC  7D 89 03 A6 */	mtctr r12
/* 803A0870 0039D7B0  4E 80 04 21 */	bctrl 
.L_803A0874:
/* 803A0874 0039D7B4  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803A0878 0039D7B8  C0 1A 02 68 */	lfs f0, 0x268(r26)
/* 803A087C 0039D7BC  D0 03 00 BC */	stfs f0, 0xbc(r3)
/* 803A0880 0039D7C0  81 83 00 00 */	lwz r12, 0(r3)
/* 803A0884 0039D7C4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A0888 0039D7C8  7D 89 03 A6 */	mtctr r12
/* 803A088C 0039D7CC  4E 80 04 21 */	bctrl 
/* 803A0890 0039D7D0  2C 1C 00 00 */	cmpwi r28, 0
/* 803A0894 0039D7D4  41 80 00 28 */	blt .L_803A08BC
/* 803A0898 0039D7D8  80 7F 01 6C */	lwz r3, 0x16c(r31)
/* 803A089C 0039D7DC  C0 3D 02 D4 */	lfs f1, 0x2d4(r29)
/* 803A08A0 0039D7E0  C0 1D 02 D0 */	lfs f0, 0x2d0(r29)
/* 803A08A4 0039D7E4  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 803A08A8 0039D7E8  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 803A08AC 0039D7EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803A08B0 0039D7F0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A08B4 0039D7F4  7D 89 03 A6 */	mtctr r12
/* 803A08B8 0039D7F8  4E 80 04 21 */	bctrl 
.L_803A08BC:
/* 803A08BC 0039D7FC  80 7F 01 6C */	lwz r3, 0x16c(r31)
/* 803A08C0 0039D800  C0 1A 02 68 */	lfs f0, 0x268(r26)
/* 803A08C4 0039D804  D0 03 00 BC */	stfs f0, 0xbc(r3)
/* 803A08C8 0039D808  81 83 00 00 */	lwz r12, 0(r3)
/* 803A08CC 0039D80C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803A08D0 0039D810  7D 89 03 A6 */	mtctr r12
/* 803A08D4 0039D814  4E 80 04 21 */	bctrl 
/* 803A08D8 0039D818  3B 7B 00 01 */	addi r27, r27, 1
/* 803A08DC 0039D81C  3B FF 00 04 */	addi r31, r31, 4
/* 803A08E0 0039D820  2C 1B 00 06 */	cmpwi r27, 6
/* 803A08E4 0039D824  41 80 FF 64 */	blt .L_803A0848
/* 803A08E8 0039D828  C0 5A 02 68 */	lfs f2, 0x268(r26)
/* 803A08EC 0039D82C  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 803A08F0 0039D830  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803A08F4 0039D834  4C 41 13 82 */	cror 2, 1, 2
/* 803A08F8 0039D838  40 82 00 48 */	bne .L_803A0940
/* 803A08FC 0039D83C  C0 3A 02 70 */	lfs f1, 0x270(r26)
/* 803A0900 0039D840  C0 02 0F 4C */	lfs f0, lbl_8051F2AC@sda21(r2)
/* 803A0904 0039D844  EC 22 08 2A */	fadds f1, f2, f1
/* 803A0908 0039D848  D0 3A 02 68 */	stfs f1, 0x268(r26)
/* 803A090C 0039D84C  C0 3A 02 68 */	lfs f1, 0x268(r26)
/* 803A0910 0039D850  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A0914 0039D854  4C 41 13 82 */	cror 2, 1, 2
/* 803A0918 0039D858  40 82 00 0C */	bne .L_803A0924
/* 803A091C 0039D85C  7F 43 D3 78 */	mr r3, r26
/* 803A0920 0039D860  48 00 00 35 */	bl changeFaceTexture__Q28Morimura9TVsSelectFv
.L_803A0924:
/* 803A0924 0039D864  C0 3A 02 68 */	lfs f1, 0x268(r26)
/* 803A0928 0039D868  C0 02 0E 74 */	lfs f0, lbl_8051F1D4@sda21(r2)
/* 803A092C 0039D86C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A0930 0039D870  4C 41 13 82 */	cror 2, 1, 2
/* 803A0934 0039D874  40 82 00 0C */	bne .L_803A0940
/* 803A0938 0039D878  C0 02 0E 10 */	lfs f0, lbl_8051F170@sda21(r2)
/* 803A093C 0039D87C  D0 1A 02 68 */	stfs f0, 0x268(r26)
.L_803A0940:
/* 803A0940 0039D880  BB 41 00 08 */	lmw r26, 8(r1)
/* 803A0944 0039D884  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A0948 0039D888  7C 08 03 A6 */	mtlr r0
/* 803A094C 0039D88C  38 21 00 20 */	addi r1, r1, 0x20
/* 803A0950 0039D890  4E 80 00 20 */	blr 
.endfn updateFacePicture__Q28Morimura9TVsSelectFv

.fn changeFaceTexture__Q28Morimura9TVsSelectFv, global
/* 803A0954 0039D894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A0958 0039D898  7C 08 02 A6 */	mflr r0
/* 803A095C 0039D89C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A0960 0039D8A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A0964 0039D8A4  7C 7F 1B 78 */	mr r31, r3
/* 803A0968 0039D8A8  80 63 02 88 */	lwz r3, 0x288(r3)
/* 803A096C 0039D8AC  80 1F 02 84 */	lwz r0, 0x284(r31)
/* 803A0970 0039D8B0  7C 03 00 50 */	subf r0, r3, r0
/* 803A0974 0039D8B4  2C 00 FF FD */	cmpwi r0, -3
/* 803A0978 0039D8B8  41 81 00 58 */	bgt .L_803A09D0
/* 803A097C 0039D8BC  80 1F 02 4C */	lwz r0, 0x24c(r31)
/* 803A0980 0039D8C0  2C 00 FF FF */	cmpwi r0, -1
/* 803A0984 0039D8C4  41 82 00 14 */	beq .L_803A0998
/* 803A0988 0039D8C8  C0 3F 02 68 */	lfs f1, 0x268(r31)
/* 803A098C 0039D8CC  C0 02 0F 4C */	lfs f0, lbl_8051F2AC@sda21(r2)
/* 803A0990 0039D8D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A0994 0039D8D4  40 81 00 28 */	ble .L_803A09BC
.L_803A0998:
/* 803A0998 0039D8D8  38 00 00 00 */	li r0, 0
/* 803A099C 0039D8DC  7F E3 FB 78 */	mr r3, r31
/* 803A09A0 0039D8E0  90 1F 02 4C */	stw r0, 0x24c(r31)
/* 803A09A4 0039D8E4  38 80 00 00 */	li r4, 0
/* 803A09A8 0039D8E8  48 00 01 A1 */	bl changeOrimaTexture__Q28Morimura9TVsSelectFi
/* 803A09AC 0039D8EC  7F E3 FB 78 */	mr r3, r31
/* 803A09B0 0039D8F0  38 80 00 04 */	li r4, 4
/* 803A09B4 0039D8F4  48 00 02 31 */	bl changeLouieTexture__Q28Morimura9TVsSelectFi
/* 803A09B8 0039D8F8  48 00 01 7C */	b .L_803A0B34
.L_803A09BC:
/* 803A09BC 0039D8FC  2C 00 00 00 */	cmpwi r0, 0
/* 803A09C0 0039D900  41 82 01 74 */	beq .L_803A0B34
/* 803A09C4 0039D904  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 803A09C8 0039D908  D0 1F 02 68 */	stfs f0, 0x268(r31)
/* 803A09CC 0039D90C  48 00 01 68 */	b .L_803A0B34
.L_803A09D0:
/* 803A09D0 0039D910  2C 00 FF FF */	cmpwi r0, -1
/* 803A09D4 0039D914  41 81 00 58 */	bgt .L_803A0A2C
/* 803A09D8 0039D918  80 1F 02 4C */	lwz r0, 0x24c(r31)
/* 803A09DC 0039D91C  2C 00 FF FF */	cmpwi r0, -1
/* 803A09E0 0039D920  41 82 00 14 */	beq .L_803A09F4
/* 803A09E4 0039D924  C0 3F 02 68 */	lfs f1, 0x268(r31)
/* 803A09E8 0039D928  C0 02 0F 4C */	lfs f0, lbl_8051F2AC@sda21(r2)
/* 803A09EC 0039D92C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A09F0 0039D930  40 81 00 28 */	ble .L_803A0A18
.L_803A09F4:
/* 803A09F4 0039D934  38 00 00 01 */	li r0, 1
/* 803A09F8 0039D938  7F E3 FB 78 */	mr r3, r31
/* 803A09FC 0039D93C  90 1F 02 4C */	stw r0, 0x24c(r31)
/* 803A0A00 0039D940  38 80 00 01 */	li r4, 1
/* 803A0A04 0039D944  48 00 01 45 */	bl changeOrimaTexture__Q28Morimura9TVsSelectFi
/* 803A0A08 0039D948  7F E3 FB 78 */	mr r3, r31
/* 803A0A0C 0039D94C  38 80 00 03 */	li r4, 3
/* 803A0A10 0039D950  48 00 01 D5 */	bl changeLouieTexture__Q28Morimura9TVsSelectFi
/* 803A0A14 0039D954  48 00 01 20 */	b .L_803A0B34
.L_803A0A18:
/* 803A0A18 0039D958  2C 00 00 01 */	cmpwi r0, 1
/* 803A0A1C 0039D95C  41 82 01 18 */	beq .L_803A0B34
/* 803A0A20 0039D960  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 803A0A24 0039D964  D0 1F 02 68 */	stfs f0, 0x268(r31)
/* 803A0A28 0039D968  48 00 01 0C */	b .L_803A0B34
.L_803A0A2C:
/* 803A0A2C 0039D96C  2C 00 00 01 */	cmpwi r0, 1
/* 803A0A30 0039D970  40 80 00 58 */	bge .L_803A0A88
/* 803A0A34 0039D974  80 1F 02 4C */	lwz r0, 0x24c(r31)
/* 803A0A38 0039D978  2C 00 FF FF */	cmpwi r0, -1
/* 803A0A3C 0039D97C  41 82 00 14 */	beq .L_803A0A50
/* 803A0A40 0039D980  C0 3F 02 68 */	lfs f1, 0x268(r31)
/* 803A0A44 0039D984  C0 02 0F 4C */	lfs f0, lbl_8051F2AC@sda21(r2)
/* 803A0A48 0039D988  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A0A4C 0039D98C  40 81 00 28 */	ble .L_803A0A74
.L_803A0A50:
/* 803A0A50 0039D990  38 00 00 02 */	li r0, 2
/* 803A0A54 0039D994  7F E3 FB 78 */	mr r3, r31
/* 803A0A58 0039D998  90 1F 02 4C */	stw r0, 0x24c(r31)
/* 803A0A5C 0039D99C  38 80 00 02 */	li r4, 2
/* 803A0A60 0039D9A0  48 00 00 E9 */	bl changeOrimaTexture__Q28Morimura9TVsSelectFi
/* 803A0A64 0039D9A4  7F E3 FB 78 */	mr r3, r31
/* 803A0A68 0039D9A8  38 80 00 02 */	li r4, 2
/* 803A0A6C 0039D9AC  48 00 01 79 */	bl changeLouieTexture__Q28Morimura9TVsSelectFi
/* 803A0A70 0039D9B0  48 00 00 C4 */	b .L_803A0B34
.L_803A0A74:
/* 803A0A74 0039D9B4  2C 00 00 02 */	cmpwi r0, 2
/* 803A0A78 0039D9B8  41 82 00 BC */	beq .L_803A0B34
/* 803A0A7C 0039D9BC  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 803A0A80 0039D9C0  D0 1F 02 68 */	stfs f0, 0x268(r31)
/* 803A0A84 0039D9C4  48 00 00 B0 */	b .L_803A0B34
.L_803A0A88:
/* 803A0A88 0039D9C8  2C 00 00 03 */	cmpwi r0, 3
/* 803A0A8C 0039D9CC  40 80 00 58 */	bge .L_803A0AE4
/* 803A0A90 0039D9D0  80 1F 02 4C */	lwz r0, 0x24c(r31)
/* 803A0A94 0039D9D4  2C 00 FF FF */	cmpwi r0, -1
/* 803A0A98 0039D9D8  41 82 00 14 */	beq .L_803A0AAC
/* 803A0A9C 0039D9DC  C0 3F 02 68 */	lfs f1, 0x268(r31)
/* 803A0AA0 0039D9E0  C0 02 0F 4C */	lfs f0, lbl_8051F2AC@sda21(r2)
/* 803A0AA4 0039D9E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A0AA8 0039D9E8  40 81 00 28 */	ble .L_803A0AD0
.L_803A0AAC:
/* 803A0AAC 0039D9EC  38 00 00 03 */	li r0, 3
/* 803A0AB0 0039D9F0  7F E3 FB 78 */	mr r3, r31
/* 803A0AB4 0039D9F4  90 1F 02 4C */	stw r0, 0x24c(r31)
/* 803A0AB8 0039D9F8  38 80 00 03 */	li r4, 3
/* 803A0ABC 0039D9FC  48 00 00 8D */	bl changeOrimaTexture__Q28Morimura9TVsSelectFi
/* 803A0AC0 0039DA00  7F E3 FB 78 */	mr r3, r31
/* 803A0AC4 0039DA04  38 80 00 01 */	li r4, 1
/* 803A0AC8 0039DA08  48 00 01 1D */	bl changeLouieTexture__Q28Morimura9TVsSelectFi
/* 803A0ACC 0039DA0C  48 00 00 68 */	b .L_803A0B34
.L_803A0AD0:
/* 803A0AD0 0039DA10  2C 00 00 03 */	cmpwi r0, 3
/* 803A0AD4 0039DA14  41 82 00 60 */	beq .L_803A0B34
/* 803A0AD8 0039DA18  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 803A0ADC 0039DA1C  D0 1F 02 68 */	stfs f0, 0x268(r31)
/* 803A0AE0 0039DA20  48 00 00 54 */	b .L_803A0B34
.L_803A0AE4:
/* 803A0AE4 0039DA24  80 1F 02 4C */	lwz r0, 0x24c(r31)
/* 803A0AE8 0039DA28  2C 00 FF FF */	cmpwi r0, -1
/* 803A0AEC 0039DA2C  41 82 00 14 */	beq .L_803A0B00
/* 803A0AF0 0039DA30  C0 3F 02 68 */	lfs f1, 0x268(r31)
/* 803A0AF4 0039DA34  C0 02 0F 4C */	lfs f0, lbl_8051F2AC@sda21(r2)
/* 803A0AF8 0039DA38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A0AFC 0039DA3C  40 81 00 28 */	ble .L_803A0B24
.L_803A0B00:
/* 803A0B00 0039DA40  38 00 00 04 */	li r0, 4
/* 803A0B04 0039DA44  7F E3 FB 78 */	mr r3, r31
/* 803A0B08 0039DA48  90 1F 02 4C */	stw r0, 0x24c(r31)
/* 803A0B0C 0039DA4C  38 80 00 04 */	li r4, 4
/* 803A0B10 0039DA50  48 00 00 39 */	bl changeOrimaTexture__Q28Morimura9TVsSelectFi
/* 803A0B14 0039DA54  7F E3 FB 78 */	mr r3, r31
/* 803A0B18 0039DA58  38 80 00 00 */	li r4, 0
/* 803A0B1C 0039DA5C  48 00 00 C9 */	bl changeLouieTexture__Q28Morimura9TVsSelectFi
/* 803A0B20 0039DA60  48 00 00 14 */	b .L_803A0B34
.L_803A0B24:
/* 803A0B24 0039DA64  2C 00 00 04 */	cmpwi r0, 4
/* 803A0B28 0039DA68  41 82 00 0C */	beq .L_803A0B34
/* 803A0B2C 0039DA6C  C0 02 0E 20 */	lfs f0, lbl_8051F180@sda21(r2)
/* 803A0B30 0039DA70  D0 1F 02 68 */	stfs f0, 0x268(r31)
.L_803A0B34:
/* 803A0B34 0039DA74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A0B38 0039DA78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A0B3C 0039DA7C  7C 08 03 A6 */	mtlr r0
/* 803A0B40 0039DA80  38 21 00 10 */	addi r1, r1, 0x10
/* 803A0B44 0039DA84  4E 80 00 20 */	blr 
.endfn changeFaceTexture__Q28Morimura9TVsSelectFv

.fn changeOrimaTexture__Q28Morimura9TVsSelectFi, global
/* 803A0B48 0039DA88  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A0B4C 0039DA8C  7C 08 02 A6 */	mflr r0
/* 803A0B50 0039DA90  3C A0 80 4E */	lis r5, mOrimaTexture__Q28Morimura9TVsSelect@ha
/* 803A0B54 0039DA94  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A0B58 0039DA98  54 80 10 3A */	slwi r0, r4, 2
/* 803A0B5C 0039DA9C  38 85 53 38 */	addi r4, r5, mOrimaTexture__Q28Morimura9TVsSelect@l
/* 803A0B60 0039DAA0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803A0B64 0039DAA4  7C 7F 1B 78 */	mr r31, r3
/* 803A0B68 0039DAA8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803A0B6C 0039DAAC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803A0B70 0039DAB0  7F C4 00 2E */	lwzx r30, r4, r0
/* 803A0B74 0039DAB4  28 1E 00 00 */	cmplwi r30, 0
/* 803A0B78 0039DAB8  40 82 00 20 */	bne .L_803A0B98
/* 803A0B7C 0039DABC  3C 60 80 49 */	lis r3, lbl_80494B24@ha
/* 803A0B80 0039DAC0  3C A0 80 49 */	lis r5, lbl_80494B34@ha
/* 803A0B84 0039DAC4  38 63 4B 24 */	addi r3, r3, lbl_80494B24@l
/* 803A0B88 0039DAC8  38 80 0A 25 */	li r4, 0xa25
/* 803A0B8C 0039DACC  38 A5 4B 34 */	addi r5, r5, lbl_80494B34@l
/* 803A0B90 0039DAD0  4C C6 31 82 */	crclr 6
/* 803A0B94 0039DAD4  4B C8 9A AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A0B98:
/* 803A0B98 0039DAD8  3B A0 00 00 */	li r29, 0
.L_803A0B9C:
/* 803A0B9C 0039DADC  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803A0BA0 0039DAE0  7F C4 F3 78 */	mr r4, r30
/* 803A0BA4 0039DAE4  38 A0 00 00 */	li r5, 0
/* 803A0BA8 0039DAE8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A0BAC 0039DAEC  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 803A0BB0 0039DAF0  7D 89 03 A6 */	mtctr r12
/* 803A0BB4 0039DAF4  4E 80 04 21 */	bctrl 
/* 803A0BB8 0039DAF8  3B BD 00 01 */	addi r29, r29, 1
/* 803A0BBC 0039DAFC  3B FF 00 04 */	addi r31, r31, 4
/* 803A0BC0 0039DB00  2C 1D 00 06 */	cmpwi r29, 6
/* 803A0BC4 0039DB04  41 80 FF D8 */	blt .L_803A0B9C
/* 803A0BC8 0039DB08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A0BCC 0039DB0C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803A0BD0 0039DB10  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803A0BD4 0039DB14  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803A0BD8 0039DB18  7C 08 03 A6 */	mtlr r0
/* 803A0BDC 0039DB1C  38 21 00 20 */	addi r1, r1, 0x20
/* 803A0BE0 0039DB20  4E 80 00 20 */	blr 
.endfn changeOrimaTexture__Q28Morimura9TVsSelectFi

.fn changeLouieTexture__Q28Morimura9TVsSelectFi, global
/* 803A0BE4 0039DB24  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A0BE8 0039DB28  7C 08 02 A6 */	mflr r0
/* 803A0BEC 0039DB2C  3C A0 80 4E */	lis r5, mLouieTexture__Q28Morimura9TVsSelect@ha
/* 803A0BF0 0039DB30  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A0BF4 0039DB34  54 80 10 3A */	slwi r0, r4, 2
/* 803A0BF8 0039DB38  38 85 53 4C */	addi r4, r5, mLouieTexture__Q28Morimura9TVsSelect@l
/* 803A0BFC 0039DB3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803A0C00 0039DB40  7C 7F 1B 78 */	mr r31, r3
/* 803A0C04 0039DB44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803A0C08 0039DB48  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803A0C0C 0039DB4C  7F C4 00 2E */	lwzx r30, r4, r0
/* 803A0C10 0039DB50  28 1E 00 00 */	cmplwi r30, 0
/* 803A0C14 0039DB54  40 82 00 20 */	bne .L_803A0C34
/* 803A0C18 0039DB58  3C 60 80 49 */	lis r3, lbl_80494B24@ha
/* 803A0C1C 0039DB5C  3C A0 80 49 */	lis r5, lbl_80494B34@ha
/* 803A0C20 0039DB60  38 63 4B 24 */	addi r3, r3, lbl_80494B24@l
/* 803A0C24 0039DB64  38 80 0A 33 */	li r4, 0xa33
/* 803A0C28 0039DB68  38 A5 4B 34 */	addi r5, r5, lbl_80494B34@l
/* 803A0C2C 0039DB6C  4C C6 31 82 */	crclr 6
/* 803A0C30 0039DB70  4B C8 9A 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803A0C34:
/* 803A0C34 0039DB74  3B A0 00 00 */	li r29, 0
.L_803A0C38:
/* 803A0C38 0039DB78  80 7F 01 6C */	lwz r3, 0x16c(r31)
/* 803A0C3C 0039DB7C  7F C4 F3 78 */	mr r4, r30
/* 803A0C40 0039DB80  38 A0 00 00 */	li r5, 0
/* 803A0C44 0039DB84  81 83 00 00 */	lwz r12, 0(r3)
/* 803A0C48 0039DB88  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 803A0C4C 0039DB8C  7D 89 03 A6 */	mtctr r12
/* 803A0C50 0039DB90  4E 80 04 21 */	bctrl 
/* 803A0C54 0039DB94  3B BD 00 01 */	addi r29, r29, 1
/* 803A0C58 0039DB98  3B FF 00 04 */	addi r31, r31, 4
/* 803A0C5C 0039DB9C  2C 1D 00 06 */	cmpwi r29, 6
/* 803A0C60 0039DBA0  41 80 FF D8 */	blt .L_803A0C38
/* 803A0C64 0039DBA4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A0C68 0039DBA8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803A0C6C 0039DBAC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803A0C70 0039DBB0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803A0C74 0039DBB4  7C 08 03 A6 */	mtlr r0
/* 803A0C78 0039DBB8  38 21 00 20 */	addi r1, r1, 0x20
/* 803A0C7C 0039DBBC  4E 80 00 20 */	blr 
.endfn changeLouieTexture__Q28Morimura9TVsSelectFi

.fn changeSlotPage__Q28Morimura9TVsSelectFv, global
/* 803A0C80 0039DBC0  88 03 02 2C */	lbz r0, 0x22c(r3)
/* 803A0C84 0039DBC4  28 00 00 00 */	cmplwi r0, 0
/* 803A0C88 0039DBC8  41 82 00 88 */	beq .L_803A0D10
/* 803A0C8C 0039DBCC  3C 80 80 4E */	lis r4, slotIDInfo__8Morimura@ha
/* 803A0C90 0039DBD0  38 E0 00 00 */	li r7, 0
/* 803A0C94 0039DBD4  38 C4 53 60 */	addi r6, r4, slotIDInfo__8Morimura@l
.L_803A0C98:
/* 803A0C98 0039DBD8  38 00 00 0C */	li r0, 0xc
/* 803A0C9C 0039DBDC  7C C4 33 78 */	mr r4, r6
/* 803A0CA0 0039DBE0  38 A0 00 00 */	li r5, 0
/* 803A0CA4 0039DBE4  7C 09 03 A6 */	mtctr r0
.L_803A0CA8:
/* 803A0CA8 0039DBE8  80 04 00 00 */	lwz r0, 0(r4)
/* 803A0CAC 0039DBEC  7C 07 00 00 */	cmpw r7, r0
/* 803A0CB0 0039DBF0  40 82 00 18 */	bne .L_803A0CC8
/* 803A0CB4 0039DBF4  3C 80 80 4E */	lis r4, slotIDInfo__8Morimura@ha
/* 803A0CB8 0039DBF8  54 A5 20 36 */	slwi r5, r5, 4
/* 803A0CBC 0039DBFC  38 04 53 60 */	addi r0, r4, slotIDInfo__8Morimura@l
/* 803A0CC0 0039DC00  7C 80 2A 14 */	add r4, r0, r5
/* 803A0CC4 0039DC04  48 00 00 18 */	b .L_803A0CDC
.L_803A0CC8:
/* 803A0CC8 0039DC08  38 84 00 10 */	addi r4, r4, 0x10
/* 803A0CCC 0039DC0C  38 A5 00 01 */	addi r5, r5, 1
/* 803A0CD0 0039DC10  42 00 FF D8 */	bdnz .L_803A0CA8
/* 803A0CD4 0039DC14  3C 80 80 4E */	lis r4, slotIDInfo__8Morimura@ha
/* 803A0CD8 0039DC18  38 84 53 60 */	addi r4, r4, slotIDInfo__8Morimura@l
.L_803A0CDC:
/* 803A0CDC 0039DC1C  80 04 00 08 */	lwz r0, 8(r4)
/* 803A0CE0 0039DC20  38 E7 00 01 */	addi r7, r7, 1
/* 803A0CE4 0039DC24  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 803A0CE8 0039DC28  2C 07 00 06 */	cmpwi r7, 6
/* 803A0CEC 0039DC2C  80 83 01 B4 */	lwz r4, 0x1b4(r3)
/* 803A0CF0 0039DC30  90 A4 00 1C */	stw r5, 0x1c(r4)
/* 803A0CF4 0039DC34  90 04 00 18 */	stw r0, 0x18(r4)
/* 803A0CF8 0039DC38  80 83 01 CC */	lwz r4, 0x1cc(r3)
/* 803A0CFC 0039DC3C  38 63 00 04 */	addi r3, r3, 4
/* 803A0D00 0039DC40  90 A4 00 1C */	stw r5, 0x1c(r4)
/* 803A0D04 0039DC44  90 04 00 18 */	stw r0, 0x18(r4)
/* 803A0D08 0039DC48  41 80 FF 90 */	blt .L_803A0C98
/* 803A0D0C 0039DC4C  4E 80 00 20 */	blr 
.L_803A0D10:
/* 803A0D10 0039DC50  3C 80 80 4E */	lis r4, slotIDInfo__8Morimura@ha
/* 803A0D14 0039DC54  39 00 00 00 */	li r8, 0
/* 803A0D18 0039DC58  38 C4 53 60 */	addi r6, r4, slotIDInfo__8Morimura@l
.L_803A0D1C:
/* 803A0D1C 0039DC5C  38 00 00 0C */	li r0, 0xc
/* 803A0D20 0039DC60  7C C7 33 78 */	mr r7, r6
/* 803A0D24 0039DC64  38 88 00 06 */	addi r4, r8, 6
/* 803A0D28 0039DC68  38 A0 00 00 */	li r5, 0
/* 803A0D2C 0039DC6C  7C 09 03 A6 */	mtctr r0
.L_803A0D30:
/* 803A0D30 0039DC70  80 07 00 00 */	lwz r0, 0(r7)
/* 803A0D34 0039DC74  7C 04 00 00 */	cmpw r4, r0
/* 803A0D38 0039DC78  40 82 00 18 */	bne .L_803A0D50
/* 803A0D3C 0039DC7C  3C 80 80 4E */	lis r4, slotIDInfo__8Morimura@ha
/* 803A0D40 0039DC80  54 A5 20 36 */	slwi r5, r5, 4
/* 803A0D44 0039DC84  38 04 53 60 */	addi r0, r4, slotIDInfo__8Morimura@l
/* 803A0D48 0039DC88  7C 80 2A 14 */	add r4, r0, r5
/* 803A0D4C 0039DC8C  48 00 00 18 */	b .L_803A0D64
.L_803A0D50:
/* 803A0D50 0039DC90  38 E7 00 10 */	addi r7, r7, 0x10
/* 803A0D54 0039DC94  38 A5 00 01 */	addi r5, r5, 1
/* 803A0D58 0039DC98  42 00 FF D8 */	bdnz .L_803A0D30
/* 803A0D5C 0039DC9C  3C 80 80 4E */	lis r4, slotIDInfo__8Morimura@ha
/* 803A0D60 0039DCA0  38 84 53 60 */	addi r4, r4, slotIDInfo__8Morimura@l
.L_803A0D64:
/* 803A0D64 0039DCA4  80 04 00 08 */	lwz r0, 8(r4)
/* 803A0D68 0039DCA8  39 08 00 01 */	addi r8, r8, 1
/* 803A0D6C 0039DCAC  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 803A0D70 0039DCB0  2C 08 00 06 */	cmpwi r8, 6
/* 803A0D74 0039DCB4  80 83 01 B4 */	lwz r4, 0x1b4(r3)
/* 803A0D78 0039DCB8  90 A4 00 1C */	stw r5, 0x1c(r4)
/* 803A0D7C 0039DCBC  90 04 00 18 */	stw r0, 0x18(r4)
/* 803A0D80 0039DCC0  80 83 01 CC */	lwz r4, 0x1cc(r3)
/* 803A0D84 0039DCC4  38 63 00 04 */	addi r3, r3, 4
/* 803A0D88 0039DCC8  90 A4 00 1C */	stw r5, 0x1c(r4)
/* 803A0D8C 0039DCCC  90 04 00 18 */	stw r0, 0x18(r4)
/* 803A0D90 0039DCD0  41 80 FF 8C */	blt .L_803A0D1C
/* 803A0D94 0039DCD4  4E 80 00 20 */	blr 
.endfn changeSlotPage__Q28Morimura9TVsSelectFv

.fn doCreateObj__Q28Morimura14TVsSelectSceneFP10JKRArchive, global
/* 803A0D98 0039DCD8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A0D9C 0039DCDC  7C 08 02 A6 */	mflr r0
/* 803A0DA0 0039DCE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A0DA4 0039DCE4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803A0DA8 0039DCE8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803A0DAC 0039DCEC  7C 9E 23 78 */	mr r30, r4
/* 803A0DB0 0039DCF0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803A0DB4 0039DCF4  7C 7D 1B 78 */	mr r29, r3
/* 803A0DB8 0039DCF8  38 60 03 2C */	li r3, 0x32c
/* 803A0DBC 0039DCFC  4B C8 30 E9 */	bl __nw__FUl
/* 803A0DC0 0039DD00  7C 7F 1B 79 */	or. r31, r3, r3
/* 803A0DC4 0039DD04  41 82 00 0C */	beq .L_803A0DD0
/* 803A0DC8 0039DD08  4B FF 99 F9 */	bl __ct__Q28Morimura9TVsSelectFv
/* 803A0DCC 0039DD0C  7C 7F 1B 78 */	mr r31, r3
.L_803A0DD0:
/* 803A0DD0 0039DD10  7F A3 EB 78 */	mr r3, r29
/* 803A0DD4 0039DD14  7F E4 FB 78 */	mr r4, r31
/* 803A0DD8 0039DD18  7F C5 F3 78 */	mr r5, r30
/* 803A0DDC 0039DD1C  48 0B 0F 99 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 803A0DE0 0039DD20  93 FD 02 20 */	stw r31, 0x220(r29)
/* 803A0DE4 0039DD24  38 60 00 D8 */	li r3, 0xd8
/* 803A0DE8 0039DD28  4B C8 30 BD */	bl __nw__FUl
/* 803A0DEC 0039DD2C  7C 60 1B 79 */	or. r0, r3, r3
/* 803A0DF0 0039DD30  41 82 00 14 */	beq .L_803A0E04
/* 803A0DF4 0039DD34  3C 80 80 49 */	lis r4, lbl_804951C8@ha
/* 803A0DF8 0039DD38  38 84 51 C8 */	addi r4, r4, lbl_804951C8@l
/* 803A0DFC 0039DD3C  48 00 28 49 */	bl __ct__Q28Morimura17TConfirmEndWindowFPCc
/* 803A0E00 0039DD40  7C 60 1B 78 */	mr r0, r3
.L_803A0E04:
/* 803A0E04 0039DD44  90 1D 02 24 */	stw r0, 0x224(r29)
/* 803A0E08 0039DD48  7F A3 EB 78 */	mr r3, r29
/* 803A0E0C 0039DD4C  7F C5 F3 78 */	mr r5, r30
/* 803A0E10 0039DD50  80 9D 02 24 */	lwz r4, 0x224(r29)
/* 803A0E14 0039DD54  48 0B 0F 61 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 803A0E18 0039DD58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A0E1C 0039DD5C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803A0E20 0039DD60  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803A0E24 0039DD64  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803A0E28 0039DD68  7C 08 03 A6 */	mtlr r0
/* 803A0E2C 0039DD6C  38 21 00 20 */	addi r1, r1, 0x20
/* 803A0E30 0039DD70  4E 80 00 20 */	blr 
.endfn doCreateObj__Q28Morimura14TVsSelectSceneFP10JKRArchive

.fn doStart__Q28Morimura14TVsSelectSceneFPQ26Screen13StartSceneArg, global
/* 803A0E34 0039DD74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A0E38 0039DD78  7C 08 02 A6 */	mflr r0
/* 803A0E3C 0039DD7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A0E40 0039DD80  80 63 02 20 */	lwz r3, 0x220(r3)
/* 803A0E44 0039DD84  81 83 00 00 */	lwz r12, 0(r3)
/* 803A0E48 0039DD88  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803A0E4C 0039DD8C  7D 89 03 A6 */	mtctr r12
/* 803A0E50 0039DD90  4E 80 04 21 */	bctrl 
/* 803A0E54 0039DD94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A0E58 0039DD98  38 60 00 01 */	li r3, 1
/* 803A0E5C 0039DD9C  7C 08 03 A6 */	mtlr r0
/* 803A0E60 0039DDA0  38 21 00 10 */	addi r1, r1, 0x10
/* 803A0E64 0039DDA4  4E 80 00 20 */	blr 
.endfn doStart__Q28Morimura14TVsSelectSceneFPQ26Screen13StartSceneArg

.fn getResName__Q28Morimura14TVsSelectSceneCFv, weak
/* 803A0E68 0039DDA8  3C 60 80 49 */	lis r3, lbl_804951D4@ha
/* 803A0E6C 0039DDAC  38 63 51 D4 */	addi r3, r3, lbl_804951D4@l
/* 803A0E70 0039DDB0  4E 80 00 20 */	blr 
.endfn getResName__Q28Morimura14TVsSelectSceneCFv

.fn getSceneType__Q28Morimura14TVsSelectSceneFv, weak
/* 803A0E74 0039DDB4  38 60 27 39 */	li r3, 0x2739
/* 803A0E78 0039DDB8  4E 80 00 20 */	blr 
.endfn getSceneType__Q28Morimura14TVsSelectSceneFv

.fn getOwnerID__Q28Morimura14TVsSelectSceneFv, weak
/* 803A0E7C 0039DDBC  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 803A0E80 0039DDC0  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 803A0E84 0039DDC4  4E 80 00 20 */	blr 
.endfn getOwnerID__Q28Morimura14TVsSelectSceneFv

.fn getMemberID__Q28Morimura14TVsSelectSceneFv, weak
/* 803A0E88 0039DDC8  3C 80 4C 45 */	lis r4, 0x4C454354@ha
/* 803A0E8C 0039DDCC  3C 60 56 53 */	lis r3, 0x56535345@ha
/* 803A0E90 0039DDD0  38 84 43 54 */	addi r4, r4, 0x4C454354@l
/* 803A0E94 0039DDD4  38 63 53 45 */	addi r3, r3, 0x56535345@l
/* 803A0E98 0039DDD8  4E 80 00 20 */	blr 
.endfn getMemberID__Q28Morimura14TVsSelectSceneFv

.fn getDispMemberBase__Q28Morimura9TVsSelectFv, weak
/* 803A0E9C 0039DDDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A0EA0 0039DDE0  7C 08 02 A6 */	mflr r0
/* 803A0EA4 0039DDE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A0EA8 0039DDE8  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803A0EAC 0039DDEC  28 00 00 00 */	cmplwi r0, 0
/* 803A0EB0 0039DDF0  41 82 00 0C */	beq .L_803A0EBC
/* 803A0EB4 0039DDF4  80 63 01 F8 */	lwz r3, 0x1f8(r3)
/* 803A0EB8 0039DDF8  48 00 00 08 */	b .L_803A0EC0
.L_803A0EBC:
/* 803A0EBC 0039DDFC  48 0B 30 ED */	bl getDispMember__Q26Screen7ObjBaseFv
.L_803A0EC0:
/* 803A0EC0 0039DE00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A0EC4 0039DE04  7C 08 03 A6 */	mtlr r0
/* 803A0EC8 0039DE08  38 21 00 10 */	addi r1, r1, 0x10
/* 803A0ECC 0039DE0C  4E 80 00 20 */	blr 
.endfn getDispMemberBase__Q28Morimura9TVsSelectFv

.fn __dt__Q28Morimura17TVsSelectCBWinNumFv, weak
/* 803A0ED0 0039DE10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A0ED4 0039DE14  7C 08 02 A6 */	mflr r0
/* 803A0ED8 0039DE18  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A0EDC 0039DE1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A0EE0 0039DE20  7C 9F 23 78 */	mr r31, r4
/* 803A0EE4 0039DE24  93 C1 00 08 */	stw r30, 8(r1)
/* 803A0EE8 0039DE28  7C 7E 1B 79 */	or. r30, r3, r3
/* 803A0EEC 0039DE2C  41 82 00 68 */	beq .L_803A0F54
/* 803A0EF0 0039DE30  3C 80 80 4E */	lis r4, __vt__Q28Morimura17TVsSelectCBWinNum@ha
/* 803A0EF4 0039DE34  38 04 55 F0 */	addi r0, r4, __vt__Q28Morimura17TVsSelectCBWinNum@l
/* 803A0EF8 0039DE38  90 1E 00 00 */	stw r0, 0(r30)
/* 803A0EFC 0039DE3C  41 82 00 48 */	beq .L_803A0F44
/* 803A0F00 0039DE40  3C 80 80 4E */	lis r4, __vt__Q32og6Screen19CallBack_CounterDay@ha
/* 803A0F04 0039DE44  38 04 81 F8 */	addi r0, r4, __vt__Q32og6Screen19CallBack_CounterDay@l
/* 803A0F08 0039DE48  90 1E 00 00 */	stw r0, 0(r30)
/* 803A0F0C 0039DE4C  41 82 00 38 */	beq .L_803A0F44
/* 803A0F10 0039DE50  3C 80 80 4E */	lis r4, __vt__Q32og6Screen18CallBack_CounterRV@ha
/* 803A0F14 0039DE54  38 04 81 C8 */	addi r0, r4, __vt__Q32og6Screen18CallBack_CounterRV@l
/* 803A0F18 0039DE58  90 1E 00 00 */	stw r0, 0(r30)
/* 803A0F1C 0039DE5C  41 82 00 28 */	beq .L_803A0F44
/* 803A0F20 0039DE60  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803A0F24 0039DE64  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803A0F28 0039DE68  90 1E 00 00 */	stw r0, 0(r30)
/* 803A0F2C 0039DE6C  41 82 00 18 */	beq .L_803A0F44
/* 803A0F30 0039DE70  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 803A0F34 0039DE74  38 80 00 00 */	li r4, 0
/* 803A0F38 0039DE78  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 803A0F3C 0039DE7C  90 1E 00 00 */	stw r0, 0(r30)
/* 803A0F40 0039DE80  48 07 06 49 */	bl __dt__5CNodeFv
.L_803A0F44:
/* 803A0F44 0039DE84  7F E0 07 35 */	extsh. r0, r31
/* 803A0F48 0039DE88  40 81 00 0C */	ble .L_803A0F54
/* 803A0F4C 0039DE8C  7F C3 F3 78 */	mr r3, r30
/* 803A0F50 0039DE90  4B C8 31 65 */	bl __dl__FPv
.L_803A0F54:
/* 803A0F54 0039DE94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A0F58 0039DE98  7F C3 F3 78 */	mr r3, r30
/* 803A0F5C 0039DE9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A0F60 0039DEA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A0F64 0039DEA4  7C 08 03 A6 */	mtlr r0
/* 803A0F68 0039DEA8  38 21 00 10 */	addi r1, r1, 0x10
/* 803A0F6C 0039DEAC  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura17TVsSelectCBWinNumFv

.fn __dt__Q28Morimura16TVsSelectIndPaneFv, weak
/* 803A0F70 0039DEB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A0F74 0039DEB4  7C 08 02 A6 */	mflr r0
/* 803A0F78 0039DEB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A0F7C 0039DEBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A0F80 0039DEC0  7C 9F 23 78 */	mr r31, r4
/* 803A0F84 0039DEC4  93 C1 00 08 */	stw r30, 8(r1)
/* 803A0F88 0039DEC8  7C 7E 1B 79 */	or. r30, r3, r3
/* 803A0F8C 0039DECC  41 82 00 38 */	beq .L_803A0FC4
/* 803A0F90 0039DED0  3C 80 80 4E */	lis r4, __vt__Q28Morimura16TVsSelectIndPane@ha
/* 803A0F94 0039DED4  38 04 56 D8 */	addi r0, r4, __vt__Q28Morimura16TVsSelectIndPane@l
/* 803A0F98 0039DED8  90 1E 00 00 */	stw r0, 0(r30)
/* 803A0F9C 0039DEDC  41 82 00 18 */	beq .L_803A0FB4
/* 803A0FA0 0039DEE0  3C A0 80 4E */	lis r5, __vt__Q28Morimura8TIndPane@ha
/* 803A0FA4 0039DEE4  38 80 00 00 */	li r4, 0
/* 803A0FA8 0039DEE8  38 05 58 6C */	addi r0, r5, __vt__Q28Morimura8TIndPane@l
/* 803A0FAC 0039DEEC  90 1E 00 00 */	stw r0, 0(r30)
/* 803A0FB0 0039DEF0  48 07 05 D9 */	bl __dt__5CNodeFv
.L_803A0FB4:
/* 803A0FB4 0039DEF4  7F E0 07 35 */	extsh. r0, r31
/* 803A0FB8 0039DEF8  40 81 00 0C */	ble .L_803A0FC4
/* 803A0FBC 0039DEFC  7F C3 F3 78 */	mr r3, r30
/* 803A0FC0 0039DF00  4B C8 30 F5 */	bl __dl__FPv
.L_803A0FC4:
/* 803A0FC4 0039DF04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A0FC8 0039DF08  7F C3 F3 78 */	mr r3, r30
/* 803A0FCC 0039DF0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A0FD0 0039DF10  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A0FD4 0039DF14  7C 08 03 A6 */	mtlr r0
/* 803A0FD8 0039DF18  38 21 00 10 */	addi r1, r1, 0x10
/* 803A0FDC 0039DF1C  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura16TVsSelectIndPaneFv

.fn __sinit_vsSelect2D_cpp, local
/* 803A0FE0 0039DF20  C0 82 0F 58 */	lfs f4, lbl_8051F2B8@sda21(r2)
/* 803A0FE4 0039DF24  3C 60 80 51 */	lis r3, mScrollParm__Q28Morimura9TVsSelect@ha
/* 803A0FE8 0039DF28  C0 C2 0F 50 */	lfs f6, lbl_8051F2B0@sda21(r2)
/* 803A0FEC 0039DF2C  38 8D 99 B8 */	addi r4, r13, mPikiOffset__Q28Morimura7TVsPiki@sda21
/* 803A0FF0 0039DF30  C0 A2 0F 54 */	lfs f5, lbl_8051F2B4@sda21(r2)
/* 803A0FF4 0039DF34  C0 62 0F 18 */	lfs f3, lbl_8051F278@sda21(r2)
/* 803A0FF8 0039DF38  D4 83 40 44 */	stfsu f4, mScrollParm__Q28Morimura9TVsSelect@l(r3)
/* 803A0FFC 0039DF3C  C0 42 0E FC */	lfs f2, lbl_8051F25C@sda21(r2)
/* 803A1000 0039DF40  C0 22 0E BC */	lfs f1, lbl_8051F21C@sda21(r2)
/* 803A1004 0039DF44  C0 02 0E 8C */	lfs f0, lbl_8051F1EC@sda21(r2)
/* 803A1008 0039DF48  D0 CD 99 B8 */	stfs f6, mPikiOffset__Q28Morimura7TVsPiki@sda21(r13)
/* 803A100C 0039DF4C  D0 A4 00 04 */	stfs f5, 4(r4)
/* 803A1010 0039DF50  D0 63 00 04 */	stfs f3, 4(r3)
/* 803A1014 0039DF54  D0 43 00 08 */	stfs f2, 8(r3)
/* 803A1018 0039DF58  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 803A101C 0039DF5C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 803A1020 0039DF60  4E 80 00 20 */	blr 
.endfn __sinit_vsSelect2D_cpp

.fn "@24@__dt__Q28Morimura9TVsSelectFv", weak
/* 803A1024 0039DF64  38 63 FF E8 */	addi r3, r3, -24
/* 803A1028 0039DF68  4B FF 9B 38 */	b __dt__Q28Morimura9TVsSelectFv
.endfn "@24@__dt__Q28Morimura9TVsSelectFv"
