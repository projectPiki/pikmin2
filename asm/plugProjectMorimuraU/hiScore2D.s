.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_hiScore2D_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804932E0, local
	.asciz "hiScore2D"
.endobj lbl_804932E0
.balign 4
.obj lbl_804932EC, local
	.asciz "timg/hi_score_00.bti"
.endobj lbl_804932EC
.balign 4
.obj lbl_80493304, local
	.asciz "timg/hi_score_01.bti"
.endobj lbl_80493304
.balign 4
.obj lbl_8049331C, local
	.asciz "timg/hi_score_02.bti"
.endobj lbl_8049331C
.balign 4
.obj lbl_80493334, local
	.asciz "timg/hi_score_03.bti"
.endobj lbl_80493334
.balign 4
.obj lbl_8049334C, local
	.asciz "timg/hi_score_04.bti"
.endobj lbl_8049334C
.balign 4
.obj lbl_80493364, local
	.asciz "timg/hi_score_05.bti"
.endobj lbl_80493364
.balign 4
.obj lbl_8049337C, local
	.asciz "timg/hi_score_06.bti"
.endobj lbl_8049337C
.balign 4
.obj lbl_80493394, local
	.asciz "timg/hi_score_07.bti"
.endobj lbl_80493394
.balign 4
.obj lbl_804933AC, local
	.asciz "timg/hi_score_08.bti"
.endobj lbl_804933AC
.balign 4
.obj lbl_804933C4, local
	.asciz "timg/hi_score_09.bti"
.endobj lbl_804933C4
.balign 4
.obj lbl_804933DC, local
	.asciz "timg/hi_score_10.bti"
.endobj lbl_804933DC
.balign 4
.obj lbl_804933F4, local
	.asciz "timg/hi_score_11.bti"
.endobj lbl_804933F4
.balign 4
.obj lbl_8049340C, local
	.asciz "timg/hi_score_12.bti"
.endobj lbl_8049340C
.balign 4
.obj lbl_80493424, local
	.asciz "timg/hi_score_13.bti"
.endobj lbl_80493424
.balign 4
.obj lbl_8049343C, local
	.asciz "timg/hi_score_14.bti"
.endobj lbl_8049343C
.balign 4
.obj lbl_80493454, local
	.asciz "timg/hi_score_15.bti"
.endobj lbl_80493454
.balign 4
.obj lbl_8049346C, local
	.4byte lbl_804932EC
	.4byte lbl_80493304
	.4byte lbl_8049331C
	.4byte lbl_80493334
	.4byte lbl_8049334C
	.4byte lbl_80493364
	.4byte lbl_8049337C
	.4byte lbl_80493394
	.4byte lbl_804933AC
	.4byte lbl_804933C4
	.4byte lbl_804933DC
	.4byte lbl_804933F4
	.4byte lbl_8049340C
	.4byte lbl_80493424
	.4byte lbl_8049343C
	.4byte lbl_80493454
.endobj lbl_8049346C
.balign 8
.obj lbl_804934B0, local
	.8byte 0x004E6D656E753030
	.8byte 0x004E6D656E753031
	.8byte 0x004E6D656E753032
	.8byte 0x004E6D656E753033
	.8byte 0x004E6D656E753034
.endobj lbl_804934B0
.balign 8
.obj lbl_804934D8, local
	.8byte 0x00546D656E753030
	.8byte 0x00546D656E753031
	.8byte 0x00546D656E753032
	.8byte 0x00546D656E753033
	.8byte 0x00546D656E753034
.endobj lbl_804934D8
.balign 8
.obj lbl_80493500, local
	.8byte 0x0050686531737431
	.8byte 0x00506865326E6431
	.8byte 0x0050686533726431
	.8byte 0x00506F7431737431
	.8byte 0x00506F74326E6431
	.8byte 0x00506F7433726431
.endobj lbl_80493500
.balign 8
.obj lbl_80493530, local
	.8byte 0x0050686531737434
	.8byte 0x00506865326E6434
	.8byte 0x0050686533726434
	.8byte 0x00506F7431737434
	.8byte 0x00506F74326E6434
	.8byte 0x00506F7433726434
.endobj lbl_80493530
.balign 8
.obj lbl_80493560, local
	.8byte 0x0050686531737435
	.8byte 0x00506865326E6435
	.8byte 0x0050686533726435
	.8byte 0x00506F7431737435
	.8byte 0x00506F74326E6435
	.8byte 0x00506F7433726435
.endobj lbl_80493560
.balign 8
.obj lbl_80493590, local
	.8byte 0x0050686531737431
	.8byte 0x00506865326E6431
	.8byte 0x0050686533726431
	.8byte 0x00506F7431737431
	.8byte 0x00506F74326E6431
	.8byte 0x00506F7433726431
.endobj lbl_80493590
.balign 8
.obj lbl_804935C0, local
	.8byte 0x0050686531737432
	.8byte 0x00506865326E6432
	.8byte 0x0050686533726432
	.8byte 0x00506F7431737432
	.8byte 0x00506F74326E6432
	.8byte 0x00506F7433726432
.endobj lbl_804935C0
.balign 4
.obj lbl_804935F0, local
	.asciz "hiScore2D.cpp"
.endobj lbl_804935F0
.balign 4
.obj lbl_80493600, local
	.asciz "P2Assert"
.endobj lbl_80493600
.balign 4
.obj lbl_8049360C, local
	.asciz "hi_score_main.blo"
.endobj lbl_8049360C
.balign 4
.obj lbl_80493620, local
	.asciz "hi_score_main.bck"
.endobj lbl_80493620
.balign 4
.obj lbl_80493634, local
	.asciz "hi_score_main.bpk"
.endobj lbl_80493634
.balign 4
.obj lbl_80493648, local
	.asciz "hi_score_list.blo"
.endobj lbl_80493648
.balign 4
.obj lbl_8049365C, local
	.asciz "assertindex = %d \n"
.endobj lbl_8049365C
.balign 4
.obj lbl_80493670, local
	.asciz "hi_score_00.bti"
.endobj lbl_80493670
.balign 4
.obj lbl_80493680, local
	.asciz "res_hiscore.szs"
.endobj lbl_80493680
.balign 4
.obj lbl_80493690, local
	.asciz "screenObj.h"
.endobj lbl_80493690

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj mPicTexture__Q28Morimura8THiScore, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj mPicTexture__Q28Morimura8THiScore
.balign 8
.obj mNameID__Q28Morimura8THiScore, global
	.8byte 0x00383530325F3030
	.8byte 0x00383530335F3030
	.8byte 0x00383530345F3030
	.8byte 0x00383530355F3030
	.8byte 0x00383530365F3030
	.8byte 0x00383530375F3030
	.8byte 0x00383530385F3030
	.8byte 0x00383530395F3030
	.8byte 0x00383531305F3030
	.8byte 0x00383531315F3030
	.8byte 0x00383531325F3030
	.8byte 0x00383531335F3030
	.8byte 0x00383531345F3030
	.8byte 0x00383531355F3030
	.8byte 0x00383531365F3030
	.8byte 0x00383531375F3030
.endobj mNameID__Q28Morimura8THiScore
.balign 4
.obj mHiscoreDataOrder__Q28Morimura8THiScore, global
	.4byte 0x00000000
	.4byte 0x00000008
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x00000003
	.4byte 0x00000004
	.4byte 0x00000005
	.4byte 0x00000006
	.4byte 0x00000007
	.4byte 0x0000000E
	.4byte 0x0000000A
	.4byte 0x0000000B
	.4byte 0x00000009
	.4byte 0x0000000D
	.4byte 0x0000000C
	.4byte 0x0000000F
.endobj mHiscoreDataOrder__Q28Morimura8THiScore
.balign 4
.obj __vt__Q28Morimura13THiScoreScene, global
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura13THiScoreSceneFv
	.4byte getOwnerID__Q28Morimura13THiScoreSceneFv
	.4byte getMemberID__Q28Morimura13THiScoreSceneFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura13THiScoreSceneCFv
	.4byte doCreateObj__Q28Morimura13THiScoreSceneFP10JKRArchive
	.4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv
.endobj __vt__Q28Morimura13THiScoreScene
.obj __vt__Q28Morimura19DispMemberHighScore, weak
	.4byte 0
	.4byte 0
	.4byte getSize__Q28Morimura19DispMemberHighScoreFv
	.4byte getOwnerID__Q28Morimura19DispMemberHighScoreFv
	.4byte getMemberID__Q28Morimura19DispMemberHighScoreFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.endobj __vt__Q28Morimura19DispMemberHighScore
.obj __vt__Q28Morimura8THiScore, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura8THiScoreFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura8THiScoreFv"
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
	.4byte doCreate__Q28Morimura8THiScoreFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura8THiScoreFv
	.4byte doUpdate__Q28Morimura8THiScoreFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeoutFinish__Q28Morimura8THiScoreFv
	.4byte doDraw__Q28Morimura8THiScoreFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte getDispMemberBase__Q28Morimura8THiScoreFv
	.4byte isListShow__Q28Morimura11TScrollListFi
	.4byte paneInit__Q28Morimura8THiScoreFv
	.4byte changePaneInfo__Q28Morimura8THiScoreFv
	.4byte getIdMax__Q28Morimura8THiScoreFv
	.4byte getNameID__Q28Morimura8THiScoreFi
	.4byte getUpdateIndex__Q28Morimura11TScrollListFRib
	.4byte setShortenIndex__Q28Morimura11TScrollListFiib
	.4byte doUpdateIn__Q28Morimura11TScrollListFv
	.4byte doUpdateOut__Q28Morimura11TScrollListFv
	.4byte changeTextTevBlock__Q28Morimura8THiScoreFi
	.4byte updateIndex__Q28Morimura11TScrollListFb
	.4byte setPaneCharacter__Q28Morimura8THiScoreFi
.endobj __vt__Q28Morimura8THiScore
.obj __vt__Q28Morimura18THiScoreListScreen, global
	.4byte 0
	.4byte 0
	.4byte create__Q28Morimura18THiScoreListScreenFPCcUl
	.4byte update__Q28Morimura18THiScoreListScreenFv
	.4byte draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
.endobj __vt__Q28Morimura18THiScoreListScreen
.obj __vt__Q28Morimura15THiScoreIndPane, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura15THiScoreIndPaneFv
	.4byte getChildCount__5CNodeFv
	.4byte draw__Q28Morimura15THiScoreIndPaneFv
.endobj __vt__Q28Morimura15THiScoreIndPane

.section .bss  # 0x804EFC20 - 0x8051467C
# hiScore2D.cpp
.comm mScrollParm__Q28Morimura8THiScore, 0x14, 4

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj mPictureOffsetY__Q28Morimura8THiScore, global
	.float -8.0
.endobj mPictureOffsetY__Q28Morimura8THiScore
.obj mChangeAlpha__Q28Morimura8THiScore, global
	.byte 1
.endobj mChangeAlpha__Q28Morimura8THiScore
.balign 4
.obj mListOffsetY__Q28Morimura8THiScore, global
	.float 25.0
.endobj mListOffsetY__Q28Morimura8THiScore
.obj mClearListHeightRate__Q28Morimura8THiScore, global
	.float 1.55
.endobj mClearListHeightRate__Q28Morimura8THiScore

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mForceClear__Q28Morimura8THiScore, global
	.skip 0x1
.endobj mForceClear__Q28Morimura8THiScore
.obj mForceClear2__Q28Morimura8THiScore, global
	.skip 0x1
.endobj mForceClear2__Q28Morimura8THiScore
.obj mLoopDrum__Q28Morimura8THiScore, global
	.skip 0x1
.endobj mLoopDrum__Q28Morimura8THiScore

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051EC18, local
	.float 0.0
.endobj lbl_8051EC18
.balign 8
.obj lbl_8051EC20, local
	.8byte 0x4330000080000000
.endobj lbl_8051EC20
.obj lbl_8051EC28, local
	.float 360.0
.endobj lbl_8051EC28
.obj lbl_8051EC2C, local # tau
	.float 6.2831855
.endobj lbl_8051EC2C
.obj lbl_8051EC30, local
	.float 5.0
.endobj lbl_8051EC30
.obj lbl_8051EC34, local
	.float 640.0
.endobj lbl_8051EC34
.obj lbl_8051EC38, local
	.float 480.0
.endobj lbl_8051EC38
.balign 4
.obj lbl_8051EC3C, local
	.asciz "hiscore"
.endobj lbl_8051EC3C
.balign 4
.obj lbl_8051EC44, local
	.float 1.0
.endobj lbl_8051EC44
.obj lbl_8051EC48, local
	.float 0.05
.endobj lbl_8051EC48
.obj lbl_8051EC4C, local
	.float 0.02
.endobj lbl_8051EC4C
.obj lbl_8051EC50, local
	.float 0.25
.endobj lbl_8051EC50
.obj lbl_8051EC54, local
	.float 8.0
.endobj lbl_8051EC54
.obj lbl_8051EC58, local
	.float 1.2
.endobj lbl_8051EC58
.obj lbl_8051EC5C, local
	.float 0.99
.endobj lbl_8051EC5C
.obj lbl_8051EC60, local
	.float 1.1
.endobj lbl_8051EC60
.obj lbl_8051EC64, local
	.float 2.0
.endobj lbl_8051EC64
.obj lbl_8051EC68, local
	.float -1.0
.endobj lbl_8051EC68
.obj lbl_8051EC6C, local
	.float 0.1
.endobj lbl_8051EC6C
.obj lbl_8051EC70, local
	.float 20.0
.endobj lbl_8051EC70
.obj lbl_8051EC74, local
	.float 0.5
.endobj lbl_8051EC74
.obj lbl_8051EC78, local
	.float 0.2
.endobj lbl_8051EC78
.obj lbl_8051EC7C, local
	.float 255.0
.endobj lbl_8051EC7C
.obj lbl_8051EC80, local
	.float 0.04
.endobj lbl_8051EC80
.obj lbl_8051EC84, local
	.float 0.75
.endobj lbl_8051EC84
.obj lbl_8051EC88, local
	.float 0.85
.endobj lbl_8051EC88
.obj lbl_8051EC8C, local
	.float -325.9493
.endobj lbl_8051EC8C
.obj lbl_8051EC90, local
	.float 325.9493
.endobj lbl_8051EC90
.obj lbl_8051EC94, local
	.float -20.0
.endobj lbl_8051EC94
.balign 8
.obj lbl_8051EC98, local
	.8byte 0x4330000000000000
.endobj lbl_8051EC98
.obj lbl_8051ECA0, local
	.float 10.0
.endobj lbl_8051ECA0
.obj lbl_8051ECA4, local
	.float 32768.0
.endobj lbl_8051ECA4
.obj lbl_8051ECA8, local
	.float 100.0
.endobj lbl_8051ECA8
.obj lbl_8051ECAC, local
	.float 110.0
.endobj lbl_8051ECAC
.obj lbl_8051ECB0, local
	.float 1000.0
.endobj lbl_8051ECB0
.obj lbl_8051ECB4, local
	.float 1100.0
.endobj lbl_8051ECB4
.obj lbl_8051ECB8, local
	.float 100000.0
.endobj lbl_8051ECB8
.obj lbl_8051ECBC, local
	.float 0.9
.endobj lbl_8051ECBC
.obj lbl_8051ECC0, local
	.float 1.5
.endobj lbl_8051ECC0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn draw__Q28Morimura15THiScoreIndPaneFv, global
/* 8037C9AC 003798EC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8037C9B0 003798F0  7C 08 02 A6 */	mflr r0
/* 8037C9B4 003798F4  90 01 00 74 */	stw r0, 0x74(r1)
/* 8037C9B8 003798F8  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8037C9BC 003798FC  7C 7F 1B 78 */	mr r31, r3
/* 8037C9C0 00379900  38 60 00 01 */	li r3, 1
/* 8037C9C4 00379904  4B D6 C7 69 */	bl GXSetColorUpdate
/* 8037C9C8 00379908  38 60 00 00 */	li r3, 0
/* 8037C9CC 0037990C  4B D6 C7 8D */	bl GXSetAlphaUpdate
/* 8037C9D0 00379910  38 60 00 00 */	li r3, 0
/* 8037C9D4 00379914  38 80 00 00 */	li r4, 0
/* 8037C9D8 00379918  4B D6 C9 15 */	bl GXSetDstAlpha
/* 8037C9DC 0037991C  38 60 00 01 */	li r3, 1
/* 8037C9E0 00379920  38 80 00 01 */	li r4, 1
/* 8037C9E4 00379924  38 A0 00 00 */	li r5, 0
/* 8037C9E8 00379928  38 C0 00 00 */	li r6, 0
/* 8037C9EC 0037992C  4B D6 C6 ED */	bl GXSetBlendMode
/* 8037C9F0 00379930  38 60 00 00 */	li r3, 0
/* 8037C9F4 00379934  4B D6 85 A9 */	bl GXSetNumTexGens
/* 8037C9F8 00379938  38 60 00 00 */	li r3, 0
/* 8037C9FC 0037993C  4B D6 B9 59 */	bl GXSetNumIndStages
/* 8037CA00 00379940  38 60 00 01 */	li r3, 1
/* 8037CA04 00379944  4B D6 A4 61 */	bl GXSetNumChans
/* 8037CA08 00379948  38 A0 00 00 */	li r5, 0
/* 8037CA0C 0037994C  38 00 00 FF */	li r0, 0xff
/* 8037CA10 00379950  98 A1 00 08 */	stb r5, 8(r1)
/* 8037CA14 00379954  38 81 00 0C */	addi r4, r1, 0xc
/* 8037CA18 00379958  38 60 00 04 */	li r3, 4
/* 8037CA1C 0037995C  98 A1 00 09 */	stb r5, 9(r1)
/* 8037CA20 00379960  98 A1 00 0A */	stb r5, 0xa(r1)
/* 8037CA24 00379964  98 01 00 0B */	stb r0, 0xb(r1)
/* 8037CA28 00379968  80 01 00 08 */	lwz r0, 8(r1)
/* 8037CA2C 0037996C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8037CA30 00379970  4B D6 A3 45 */	bl GXSetChanMatColor
/* 8037CA34 00379974  38 60 00 04 */	li r3, 4
/* 8037CA38 00379978  38 80 00 00 */	li r4, 0
/* 8037CA3C 0037997C  38 A0 00 00 */	li r5, 0
/* 8037CA40 00379980  38 C0 00 00 */	li r6, 0
/* 8037CA44 00379984  38 E0 00 00 */	li r7, 0
/* 8037CA48 00379988  39 00 00 00 */	li r8, 0
/* 8037CA4C 0037998C  39 20 00 02 */	li r9, 2
/* 8037CA50 00379990  4B D6 A4 51 */	bl GXSetChanCtrl
/* 8037CA54 00379994  38 60 00 00 */	li r3, 0
/* 8037CA58 00379998  4B D6 91 51 */	bl GXSetCullMode
/* 8037CA5C 0037999C  38 60 00 01 */	li r3, 1
/* 8037CA60 003799A0  4B D6 C1 59 */	bl GXSetNumTevStages
/* 8037CA64 003799A4  38 60 00 00 */	li r3, 0
/* 8037CA68 003799A8  38 80 00 FF */	li r4, 0xff
/* 8037CA6C 003799AC  38 A0 00 FF */	li r5, 0xff
/* 8037CA70 003799B0  38 C0 00 04 */	li r6, 4
/* 8037CA74 003799B4  4B D6 BF A9 */	bl GXSetTevOrder
/* 8037CA78 003799B8  38 60 00 00 */	li r3, 0
/* 8037CA7C 003799BC  38 80 00 04 */	li r4, 4
/* 8037CA80 003799C0  4B D6 B9 FD */	bl GXSetTevOp
/* 8037CA84 003799C4  38 61 00 10 */	addi r3, r1, 0x10
/* 8037CA88 003799C8  4B D6 D8 19 */	bl PSMTXIdentity
/* 8037CA8C 003799CC  38 61 00 10 */	addi r3, r1, 0x10
/* 8037CA90 003799D0  38 80 00 00 */	li r4, 0
/* 8037CA94 003799D4  4B D6 CA E5 */	bl GXLoadPosMtxImm
/* 8037CA98 003799D8  38 60 00 00 */	li r3, 0
/* 8037CA9C 003799DC  4B D6 CB 7D */	bl GXSetCurrentMtx
/* 8037CAA0 003799E0  4B D6 7C 31 */	bl GXClearVtxDesc
/* 8037CAA4 003799E4  38 60 00 09 */	li r3, 9
/* 8037CAA8 003799E8  38 80 00 01 */	li r4, 1
/* 8037CAAC 003799EC  4B D6 77 D9 */	bl GXSetVtxDesc
/* 8037CAB0 003799F0  38 60 00 00 */	li r3, 0
/* 8037CAB4 003799F4  38 80 00 09 */	li r4, 9
/* 8037CAB8 003799F8  38 A0 00 01 */	li r5, 1
/* 8037CABC 003799FC  38 C0 00 04 */	li r6, 4
/* 8037CAC0 00379A00  38 E0 00 00 */	li r7, 0
/* 8037CAC4 00379A04  4B D6 7C 45 */	bl GXSetVtxAttrFmt
/* 8037CAC8 00379A08  38 60 00 80 */	li r3, 0x80
/* 8037CACC 00379A0C  38 80 00 00 */	li r4, 0
/* 8037CAD0 00379A10  38 A0 00 04 */	li r5, 4
/* 8037CAD4 00379A14  4B D6 8E B5 */	bl GXBegin
/* 8037CAD8 00379A18  C0 62 08 B8 */	lfs f3, lbl_8051EC18@sda21(r2)
/* 8037CADC 00379A1C  3C 00 43 30 */	lis r0, 0x4330
/* 8037CAE0 00379A20  3C C0 CC 01 */	lis r6, 0xCC008000@ha
/* 8037CAE4 00379A24  90 01 00 40 */	stw r0, 0x40(r1)
/* 8037CAE8 00379A28  C8 42 08 C0 */	lfd f2, lbl_8051EC20@sda21(r2)
/* 8037CAEC 00379A2C  38 60 00 00 */	li r3, 0
/* 8037CAF0 00379A30  D0 66 80 00 */	stfs f3, 0xCC008000@l(r6)
/* 8037CAF4 00379A34  38 80 00 00 */	li r4, 0
/* 8037CAF8 00379A38  D0 66 80 00 */	stfs f3, 0xCC008000@l(r6)
/* 8037CAFC 00379A3C  D0 66 80 00 */	stfs f3, 0xCC008000@l(r6)
/* 8037CB00 00379A40  80 BF 00 20 */	lwz r5, 0x20(r31)
/* 8037CB04 00379A44  90 01 00 48 */	stw r0, 0x48(r1)
/* 8037CB08 00379A48  80 A5 00 20 */	lwz r5, 0x20(r5)
/* 8037CB0C 00379A4C  90 01 00 50 */	stw r0, 0x50(r1)
/* 8037CB10 00379A50  A0 A5 00 02 */	lhz r5, 2(r5)
/* 8037CB14 00379A54  90 01 00 58 */	stw r0, 0x58(r1)
/* 8037CB18 00379A58  6C A0 80 00 */	xoris r0, r5, 0x8000
/* 8037CB1C 00379A5C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8037CB20 00379A60  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 8037CB24 00379A64  EC 00 10 28 */	fsubs f0, f0, f2
/* 8037CB28 00379A68  D0 06 80 00 */	stfs f0, 0xCC008000@l(r6)
/* 8037CB2C 00379A6C  D0 66 80 00 */	stfs f3, 0xCC008000@l(r6)
/* 8037CB30 00379A70  D0 66 80 00 */	stfs f3, 0xCC008000@l(r6)
/* 8037CB34 00379A74  80 BF 00 20 */	lwz r5, 0x20(r31)
/* 8037CB38 00379A78  80 A5 00 20 */	lwz r5, 0x20(r5)
/* 8037CB3C 00379A7C  A0 05 00 02 */	lhz r0, 2(r5)
/* 8037CB40 00379A80  A0 A5 00 04 */	lhz r5, 4(r5)
/* 8037CB44 00379A84  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8037CB48 00379A88  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8037CB4C 00379A8C  6C A0 80 00 */	xoris r0, r5, 0x8000
/* 8037CB50 00379A90  90 01 00 54 */	stw r0, 0x54(r1)
/* 8037CB54 00379A94  C8 21 00 48 */	lfd f1, 0x48(r1)
/* 8037CB58 00379A98  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 8037CB5C 00379A9C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8037CB60 00379AA0  EC 00 10 28 */	fsubs f0, f0, f2
/* 8037CB64 00379AA4  D0 26 80 00 */	stfs f1, 0xCC008000@l(r6)
/* 8037CB68 00379AA8  D0 06 80 00 */	stfs f0, 0xCC008000@l(r6)
/* 8037CB6C 00379AAC  D0 66 80 00 */	stfs f3, 0xCC008000@l(r6)
/* 8037CB70 00379AB0  80 BF 00 20 */	lwz r5, 0x20(r31)
/* 8037CB74 00379AB4  80 A5 00 20 */	lwz r5, 0x20(r5)
/* 8037CB78 00379AB8  A0 05 00 04 */	lhz r0, 4(r5)
/* 8037CB7C 00379ABC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8037CB80 00379AC0  D0 66 80 00 */	stfs f3, 0xCC008000@l(r6)
/* 8037CB84 00379AC4  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8037CB88 00379AC8  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 8037CB8C 00379ACC  EC 00 10 28 */	fsubs f0, f0, f2
/* 8037CB90 00379AD0  D0 06 80 00 */	stfs f0, 0xCC008000@l(r6)
/* 8037CB94 00379AD4  D0 66 80 00 */	stfs f3, 0xCC008000@l(r6)
/* 8037CB98 00379AD8  4B D6 C7 55 */	bl GXSetDstAlpha
/* 8037CB9C 00379ADC  38 60 00 00 */	li r3, 0
/* 8037CBA0 00379AE0  4B D6 C5 B9 */	bl GXSetAlphaUpdate
/* 8037CBA4 00379AE4  7F E3 FB 78 */	mr r3, r31
/* 8037CBA8 00379AE8  48 02 4C 65 */	bl draw__Q28Morimura8TIndPaneFv
/* 8037CBAC 00379AEC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8037CBB0 00379AF0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8037CBB4 00379AF4  7C 08 03 A6 */	mtlr r0
/* 8037CBB8 00379AF8  38 21 00 70 */	addi r1, r1, 0x70
/* 8037CBBC 00379AFC  4E 80 00 20 */	blr 
.endfn draw__Q28Morimura15THiScoreIndPaneFv

.fn create__Q28Morimura18THiScoreListScreenFPCcUl, global
/* 8037CBC0 00379B00  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8037CBC4 00379B04  7C 08 02 A6 */	mflr r0
/* 8037CBC8 00379B08  90 01 00 54 */	stw r0, 0x54(r1)
/* 8037CBCC 00379B0C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8037CBD0 00379B10  7C 7F 1B 78 */	mr r31, r3
/* 8037CBD4 00379B14  38 60 01 48 */	li r3, 0x148
/* 8037CBD8 00379B18  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8037CBDC 00379B1C  7C BE 2B 78 */	mr r30, r5
/* 8037CBE0 00379B20  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8037CBE4 00379B24  7C 9D 23 78 */	mr r29, r4
/* 8037CBE8 00379B28  4B CA 72 BD */	bl __nw__FUl
/* 8037CBEC 00379B2C  7C 60 1B 79 */	or. r0, r3, r3
/* 8037CBF0 00379B30  41 82 00 0C */	beq .L_8037CBFC
/* 8037CBF4 00379B34  48 0B 81 B9 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8037CBF8 00379B38  7C 60 1B 78 */	mr r0, r3
.L_8037CBFC:
/* 8037CBFC 00379B3C  90 1F 00 08 */	stw r0, 8(r31)
/* 8037CC00 00379B40  7F A4 EB 78 */	mr r4, r29
/* 8037CC04 00379B44  7F C5 F3 78 */	mr r5, r30
/* 8037CC08 00379B48  80 7F 00 08 */	lwz r3, 8(r31)
/* 8037CC0C 00379B4C  80 DF 00 0C */	lwz r6, 0xc(r31)
/* 8037CC10 00379B50  4B CC 2A 15 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8037CC14 00379B54  38 60 00 2C */	li r3, 0x2c
/* 8037CC18 00379B58  4B CA 72 8D */	bl __nw__FUl
/* 8037CC1C 00379B5C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8037CC20 00379B60  41 82 00 48 */	beq .L_8037CC68
/* 8037CC24 00379B64  48 09 47 6D */	bl __ct__5CNodeFv
/* 8037CC28 00379B68  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8037CC2C 00379B6C  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8037CC30 00379B70  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 8037CC34 00379B74  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TCallbackScissor@ha
/* 8037CC38 00379B78  90 1E 00 00 */	stw r0, 0(r30)
/* 8037CC3C 00379B7C  38 A0 00 00 */	li r5, 0
/* 8037CC40 00379B80  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8037CC44 00379B84  38 03 58 A4 */	addi r0, r3, __vt__Q28Morimura16TCallbackScissor@l
/* 8037CC48 00379B88  90 BE 00 18 */	stw r5, 0x18(r30)
/* 8037CC4C 00379B8C  C0 02 08 B8 */	lfs f0, lbl_8051EC18@sda21(r2)
/* 8037CC50 00379B90  90 9E 00 00 */	stw r4, 0(r30)
/* 8037CC54 00379B94  90 1E 00 00 */	stw r0, 0(r30)
/* 8037CC58 00379B98  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8037CC5C 00379B9C  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8037CC60 00379BA0  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 8037CC64 00379BA4  D0 1E 00 28 */	stfs f0, 0x28(r30)
.L_8037CC68:
/* 8037CC68 00379BA8  80 7F 00 08 */	lwz r3, 8(r31)
/* 8037CC6C 00379BAC  3C 80 69 73 */	lis r4, 0x69737431@ha
/* 8037CC70 00379BB0  38 C4 74 31 */	addi r6, r4, 0x69737431@l
/* 8037CC74 00379BB4  38 A0 4E 6C */	li r5, 0x4e6c
/* 8037CC78 00379BB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037CC7C 00379BBC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037CC80 00379BC0  7D 89 03 A6 */	mtctr r12
/* 8037CC84 00379BC4  4E 80 04 21 */	bctrl 
/* 8037CC88 00379BC8  4B CB B6 99 */	bl getBounds__7J2DPaneFv
/* 8037CC8C 00379BCC  C0 23 00 04 */	lfs f1, 4(r3)
/* 8037CC90 00379BD0  3C 80 69 73 */	lis r4, 0x69737431@ha
/* 8037CC94 00379BD4  C0 02 08 D0 */	lfs f0, lbl_8051EC30@sda21(r2)
/* 8037CC98 00379BD8  7F C7 F3 78 */	mr r7, r30
/* 8037CC9C 00379BDC  C0 E3 00 08 */	lfs f7, 8(r3)
/* 8037CCA0 00379BE0  38 C4 74 31 */	addi r6, r4, 0x69737431@l
/* 8037CCA4 00379BE4  C0 43 00 00 */	lfs f2, 0(r3)
/* 8037CCA8 00379BE8  EC 81 00 28 */	fsubs f4, f1, f0
/* 8037CCAC 00379BEC  C1 02 24 34 */	lfs f8, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 8037CCB0 00379BF0  EC A7 00 2A */	fadds f5, f7, f0
/* 8037CCB4 00379BF4  C0 02 24 38 */	lfs f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 8037CCB8 00379BF8  38 A0 4E 6C */	li r5, 0x4e6c
/* 8037CCBC 00379BFC  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8037CCC0 00379C00  C0 C3 00 0C */	lfs f6, 0xc(r3)
/* 8037CCC4 00379C04  EC 62 02 32 */	fmuls f3, f2, f8
/* 8037CCC8 00379C08  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8037CCCC 00379C0C  EC 44 00 32 */	fmuls f2, f4, f0
/* 8037CCD0 00379C10  EC 25 02 32 */	fmuls f1, f5, f8
/* 8037CCD4 00379C14  D0 E1 00 38 */	stfs f7, 0x38(r1)
/* 8037CCD8 00379C18  EC 06 00 32 */	fmuls f0, f6, f0
/* 8037CCDC 00379C1C  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 8037CCE0 00379C20  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8037CCE4 00379C24  D0 A1 00 38 */	stfs f5, 0x38(r1)
/* 8037CCE8 00379C28  80 61 00 30 */	lwz r3, 0x30(r1)
/* 8037CCEC 00379C2C  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8037CCF0 00379C30  D0 C1 00 3C */	stfs f6, 0x3c(r1)
/* 8037CCF4 00379C34  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8037CCF8 00379C38  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8037CCFC 00379C3C  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 8037CD00 00379C40  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8037CD04 00379C44  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8037CD08 00379C48  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8037CD0C 00379C4C  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8037CD10 00379C50  90 7E 00 24 */	stw r3, 0x24(r30)
/* 8037CD14 00379C54  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8037CD18 00379C58  90 61 00 08 */	stw r3, 8(r1)
/* 8037CD1C 00379C5C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8037CD20 00379C60  90 01 00 0C */	stw r0, 0xc(r1)
/* 8037CD24 00379C64  48 0B 7E 01 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8037CD28 00379C68  38 60 01 B8 */	li r3, 0x1b8
/* 8037CD2C 00379C6C  4B CA 71 79 */	bl __nw__FUl
/* 8037CD30 00379C70  7C 7E 1B 79 */	or. r30, r3, r3
/* 8037CD34 00379C74  41 82 00 14 */	beq .L_8037CD48
/* 8037CD38 00379C78  4B CD 7D B9 */	bl __ct__12J2DPictureExFv
/* 8037CD3C 00379C7C  3C 60 80 4E */	lis r3, __vt__Q28Morimura12TScissorPane@ha
/* 8037CD40 00379C80  38 03 56 F0 */	addi r0, r3, __vt__Q28Morimura12TScissorPane@l
/* 8037CD44 00379C84  90 1E 00 00 */	stw r0, 0(r30)
.L_8037CD48:
/* 8037CD48 00379C88  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8037CD4C 00379C8C  3C 60 61 70 */	lis r3, 0x61705F6C@ha
/* 8037CD50 00379C90  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8037CD54 00379C94  38 C3 5F 6C */	addi r6, r3, 0x61705F6C@l
/* 8037CD58 00379C98  90 9E 01 A8 */	stw r4, 0x1a8(r30)
/* 8037CD5C 00379C9C  38 A0 50 6D */	li r5, 0x506d
/* 8037CD60 00379CA0  80 61 00 08 */	lwz r3, 8(r1)
/* 8037CD64 00379CA4  90 1E 01 AC */	stw r0, 0x1ac(r30)
/* 8037CD68 00379CA8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8037CD6C 00379CAC  90 7E 01 B0 */	stw r3, 0x1b0(r30)
/* 8037CD70 00379CB0  90 1E 01 B4 */	stw r0, 0x1b4(r30)
/* 8037CD74 00379CB4  80 7F 00 08 */	lwz r3, 8(r31)
/* 8037CD78 00379CB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037CD7C 00379CBC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037CD80 00379CC0  7D 89 03 A6 */	mtctr r12
/* 8037CD84 00379CC4  4E 80 04 21 */	bctrl 
/* 8037CD88 00379CC8  7F C4 F3 78 */	mr r4, r30
/* 8037CD8C 00379CCC  4B CB A9 39 */	bl appendChild__7J2DPaneFP7J2DPane
/* 8037CD90 00379CD0  38 60 01 B8 */	li r3, 0x1b8
/* 8037CD94 00379CD4  4B CA 71 11 */	bl __nw__FUl
/* 8037CD98 00379CD8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8037CD9C 00379CDC  41 82 00 14 */	beq .L_8037CDB0
/* 8037CDA0 00379CE0  4B CD 7D 51 */	bl __ct__12J2DPictureExFv
/* 8037CDA4 00379CE4  3C 60 80 4E */	lis r3, __vt__Q28Morimura12TScissorPane@ha
/* 8037CDA8 00379CE8  38 03 56 F0 */	addi r0, r3, __vt__Q28Morimura12TScissorPane@l
/* 8037CDAC 00379CEC  90 1E 00 00 */	stw r0, 0(r30)
.L_8037CDB0:
/* 8037CDB0 00379CF0  C0 42 08 B8 */	lfs f2, lbl_8051EC18@sda21(r2)
/* 8037CDB4 00379CF4  3C 60 69 73 */	lis r3, 0x69737431@ha
/* 8037CDB8 00379CF8  C0 22 08 D4 */	lfs f1, lbl_8051EC34@sda21(r2)
/* 8037CDBC 00379CFC  38 C3 74 31 */	addi r6, r3, 0x69737431@l
/* 8037CDC0 00379D00  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8037CDC4 00379D04  38 A0 4E 6C */	li r5, 0x4e6c
/* 8037CDC8 00379D08  C0 02 08 D8 */	lfs f0, lbl_8051EC38@sda21(r2)
/* 8037CDCC 00379D0C  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8037CDD0 00379D10  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8037CDD4 00379D14  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8037CDD8 00379D18  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037CDDC 00379D1C  90 7E 01 A8 */	stw r3, 0x1a8(r30)
/* 8037CDE0 00379D20  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8037CDE4 00379D24  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8037CDE8 00379D28  90 1E 01 AC */	stw r0, 0x1ac(r30)
/* 8037CDEC 00379D2C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8037CDF0 00379D30  90 7E 01 B0 */	stw r3, 0x1b0(r30)
/* 8037CDF4 00379D34  90 1E 01 B4 */	stw r0, 0x1b4(r30)
/* 8037CDF8 00379D38  80 7F 00 08 */	lwz r3, 8(r31)
/* 8037CDFC 00379D3C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037CE00 00379D40  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037CE04 00379D44  7D 89 03 A6 */	mtctr r12
/* 8037CE08 00379D48  4E 80 04 21 */	bctrl 
/* 8037CE0C 00379D4C  7F C4 F3 78 */	mr r4, r30
/* 8037CE10 00379D50  4B CB A8 B5 */	bl appendChild__7J2DPaneFP7J2DPane
/* 8037CE14 00379D54  80 7F 00 08 */	lwz r3, 8(r31)
/* 8037CE18 00379D58  4B F8 CF E9 */	bl setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
/* 8037CE1C 00379D5C  38 60 00 2C */	li r3, 0x2c
/* 8037CE20 00379D60  4B CA 70 85 */	bl __nw__FUl
/* 8037CE24 00379D64  7C 7E 1B 79 */	or. r30, r3, r3
/* 8037CE28 00379D68  41 82 00 48 */	beq .L_8037CE70
/* 8037CE2C 00379D6C  48 09 45 65 */	bl __ct__5CNodeFv
/* 8037CE30 00379D70  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8037CE34 00379D74  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8037CE38 00379D78  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 8037CE3C 00379D7C  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TCallbackScissor@ha
/* 8037CE40 00379D80  90 1E 00 00 */	stw r0, 0(r30)
/* 8037CE44 00379D84  38 A0 00 00 */	li r5, 0
/* 8037CE48 00379D88  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8037CE4C 00379D8C  38 03 58 A4 */	addi r0, r3, __vt__Q28Morimura16TCallbackScissor@l
/* 8037CE50 00379D90  90 BE 00 18 */	stw r5, 0x18(r30)
/* 8037CE54 00379D94  C0 02 08 B8 */	lfs f0, lbl_8051EC18@sda21(r2)
/* 8037CE58 00379D98  90 9E 00 00 */	stw r4, 0(r30)
/* 8037CE5C 00379D9C  90 1E 00 00 */	stw r0, 0(r30)
/* 8037CE60 00379DA0  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8037CE64 00379DA4  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8037CE68 00379DA8  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 8037CE6C 00379DAC  D0 1E 00 28 */	stfs f0, 0x28(r30)
.L_8037CE70:
/* 8037CE70 00379DB0  C0 42 08 B8 */	lfs f2, lbl_8051EC18@sda21(r2)
/* 8037CE74 00379DB4  3C 80 6E 75 */	lis r4, 0x6E753034@ha
/* 8037CE78 00379DB8  C0 22 08 D4 */	lfs f1, lbl_8051EC34@sda21(r2)
/* 8037CE7C 00379DBC  3C 60 00 54 */	lis r3, 0x00546D65@ha
/* 8037CE80 00379DC0  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8037CE84 00379DC4  7F C7 F3 78 */	mr r7, r30
/* 8037CE88 00379DC8  C0 02 08 D8 */	lfs f0, lbl_8051EC38@sda21(r2)
/* 8037CE8C 00379DCC  38 C4 30 34 */	addi r6, r4, 0x6E753034@l
/* 8037CE90 00379DD0  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8037CE94 00379DD4  38 A3 6D 65 */	addi r5, r3, 0x00546D65@l
/* 8037CE98 00379DD8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8037CE9C 00379DDC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8037CEA0 00379DE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037CEA4 00379DE4  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 8037CEA8 00379DE8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8037CEAC 00379DEC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8037CEB0 00379DF0  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8037CEB4 00379DF4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8037CEB8 00379DF8  90 7E 00 24 */	stw r3, 0x24(r30)
/* 8037CEBC 00379DFC  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8037CEC0 00379E00  80 7F 00 08 */	lwz r3, 8(r31)
/* 8037CEC4 00379E04  48 0B 7C 61 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8037CEC8 00379E08  80 7F 00 08 */	lwz r3, 8(r31)
/* 8037CECC 00379E0C  4B F8 64 49 */	bl setAlphaScreen__Q22og6ScreenFP7J2DPane
/* 8037CED0 00379E10  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8037CED4 00379E14  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8037CED8 00379E18  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8037CEDC 00379E1C  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8037CEE0 00379E20  7C 08 03 A6 */	mtlr r0
/* 8037CEE4 00379E24  38 21 00 50 */	addi r1, r1, 0x50
/* 8037CEE8 00379E28  4E 80 00 20 */	blr 
.endfn create__Q28Morimura18THiScoreListScreenFPCcUl

.fn __ct__Q28Morimura8THiScoreFv, global
/* 8037CEEC 00379E2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037CEF0 00379E30  7C 08 02 A6 */	mflr r0
/* 8037CEF4 00379E34  38 82 08 DC */	addi r4, r2, lbl_8051EC3C@sda21
/* 8037CEF8 00379E38  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037CEFC 00379E3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037CF00 00379E40  7C 7F 1B 78 */	mr r31, r3
/* 8037CF04 00379E44  48 02 5D B5 */	bl __ct__Q28Morimura11TScrollListFPc
/* 8037CF08 00379E48  3C 80 80 4E */	lis r4, __vt__Q28Morimura8THiScore@ha
/* 8037CF0C 00379E4C  38 00 00 00 */	li r0, 0
/* 8037CF10 00379E50  38 84 42 A8 */	addi r4, r4, __vt__Q28Morimura8THiScore@l
/* 8037CF14 00379E54  C0 82 08 E4 */	lfs f4, lbl_8051EC44@sda21(r2)
/* 8037CF18 00379E58  90 9F 00 00 */	stw r4, 0(r31)
/* 8037CF1C 00379E5C  38 A4 00 10 */	addi r5, r4, 0x10
/* 8037CF20 00379E60  3C 60 80 38 */	lis r3, "__ct__10Vector2<f>Fv"@ha
/* 8037CF24 00379E64  C0 62 08 B8 */	lfs f3, lbl_8051EC18@sda21(r2)
/* 8037CF28 00379E68  90 BF 00 18 */	stw r5, 0x18(r31)
/* 8037CF2C 00379E6C  38 83 D0 B8 */	addi r4, r3, "__ct__10Vector2<f>Fv"@l
/* 8037CF30 00379E70  C0 42 08 E8 */	lfs f2, lbl_8051EC48@sda21(r2)
/* 8037CF34 00379E74  38 7F 01 A4 */	addi r3, r31, 0x1a4
/* 8037CF38 00379E78  90 1F 00 B4 */	stw r0, 0xb4(r31)
/* 8037CF3C 00379E7C  38 A0 00 00 */	li r5, 0
/* 8037CF40 00379E80  C0 22 08 EC */	lfs f1, lbl_8051EC4C@sda21(r2)
/* 8037CF44 00379E84  38 C0 00 08 */	li r6, 8
/* 8037CF48 00379E88  90 1F 00 B8 */	stw r0, 0xb8(r31)
/* 8037CF4C 00379E8C  38 E0 00 04 */	li r7, 4
/* 8037CF50 00379E90  C0 02 08 F0 */	lfs f0, lbl_8051EC50@sda21(r2)
/* 8037CF54 00379E94  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 8037CF58 00379E98  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 8037CF5C 00379E9C  90 1F 00 D4 */	stw r0, 0xd4(r31)
/* 8037CF60 00379EA0  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 8037CF64 00379EA4  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 8037CF68 00379EA8  90 1F 00 E0 */	stw r0, 0xe0(r31)
/* 8037CF6C 00379EAC  98 1F 01 74 */	stb r0, 0x174(r31)
/* 8037CF70 00379EB0  90 1F 01 78 */	stw r0, 0x178(r31)
/* 8037CF74 00379EB4  D0 9F 01 80 */	stfs f4, 0x180(r31)
/* 8037CF78 00379EB8  D0 7F 01 84 */	stfs f3, 0x184(r31)
/* 8037CF7C 00379EBC  D0 5F 01 88 */	stfs f2, 0x188(r31)
/* 8037CF80 00379EC0  D0 7F 01 8C */	stfs f3, 0x18c(r31)
/* 8037CF84 00379EC4  D0 7F 01 90 */	stfs f3, 0x190(r31)
/* 8037CF88 00379EC8  D0 3F 01 94 */	stfs f1, 0x194(r31)
/* 8037CF8C 00379ECC  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 8037CF90 00379ED0  D0 7F 01 9C */	stfs f3, 0x19c(r31)
/* 8037CF94 00379ED4  D0 7F 01 A0 */	stfs f3, 0x1a0(r31)
/* 8037CF98 00379ED8  4B D4 48 A5 */	bl __construct_array
/* 8037CF9C 00379EDC  38 A0 00 00 */	li r5, 0
/* 8037CFA0 00379EE0  3C 60 80 51 */	lis r3, mScrollParm__Q28Morimura8THiScore@ha
/* 8037CFA4 00379EE4  98 BF 01 C4 */	stb r5, 0x1c4(r31)
/* 8037CFA8 00379EE8  38 00 00 05 */	li r0, 5
/* 8037CFAC 00379EEC  C0 A2 08 B8 */	lfs f5, lbl_8051EC18@sda21(r2)
/* 8037CFB0 00379EF0  38 83 40 30 */	addi r4, r3, mScrollParm__Q28Morimura8THiScore@l
/* 8037CFB4 00379EF4  98 BF 01 C5 */	stb r5, 0x1c5(r31)
/* 8037CFB8 00379EF8  7F E3 FB 78 */	mr r3, r31
/* 8037CFBC 00379EFC  C0 82 08 F4 */	lfs f4, lbl_8051EC54@sda21(r2)
/* 8037CFC0 00379F00  98 BF 01 C6 */	stb r5, 0x1c6(r31)
/* 8037CFC4 00379F04  C0 62 08 F8 */	lfs f3, lbl_8051EC58@sda21(r2)
/* 8037CFC8 00379F08  98 BF 01 C7 */	stb r5, 0x1c7(r31)
/* 8037CFCC 00379F0C  C0 42 08 FC */	lfs f2, lbl_8051EC5C@sda21(r2)
/* 8037CFD0 00379F10  90 BF 01 C8 */	stw r5, 0x1c8(r31)
/* 8037CFD4 00379F14  C0 22 09 00 */	lfs f1, lbl_8051EC60@sda21(r2)
/* 8037CFD8 00379F18  90 BF 01 CC */	stw r5, 0x1cc(r31)
/* 8037CFDC 00379F1C  C0 02 09 04 */	lfs f0, lbl_8051EC64@sda21(r2)
/* 8037CFE0 00379F20  90 BF 01 D0 */	stw r5, 0x1d0(r31)
/* 8037CFE4 00379F24  90 BF 01 D4 */	stw r5, 0x1d4(r31)
/* 8037CFE8 00379F28  D0 BF 01 F8 */	stfs f5, 0x1f8(r31)
/* 8037CFEC 00379F2C  B0 1F 00 8E */	sth r0, 0x8e(r31)
/* 8037CFF0 00379F30  90 BF 00 FC */	stw r5, 0xfc(r31)
/* 8037CFF4 00379F34  90 BF 00 E4 */	stw r5, 0xe4(r31)
/* 8037CFF8 00379F38  90 BF 01 44 */	stw r5, 0x144(r31)
/* 8037CFFC 00379F3C  90 BF 01 5C */	stw r5, 0x15c(r31)
/* 8037D000 00379F40  90 BF 01 14 */	stw r5, 0x114(r31)
/* 8037D004 00379F44  90 BF 01 2C */	stw r5, 0x12c(r31)
/* 8037D008 00379F48  90 BF 01 00 */	stw r5, 0x100(r31)
/* 8037D00C 00379F4C  90 BF 00 E8 */	stw r5, 0xe8(r31)
/* 8037D010 00379F50  90 BF 01 48 */	stw r5, 0x148(r31)
/* 8037D014 00379F54  90 BF 01 60 */	stw r5, 0x160(r31)
/* 8037D018 00379F58  90 BF 01 18 */	stw r5, 0x118(r31)
/* 8037D01C 00379F5C  90 BF 01 30 */	stw r5, 0x130(r31)
/* 8037D020 00379F60  90 BF 01 04 */	stw r5, 0x104(r31)
/* 8037D024 00379F64  90 BF 00 EC */	stw r5, 0xec(r31)
/* 8037D028 00379F68  90 BF 01 4C */	stw r5, 0x14c(r31)
/* 8037D02C 00379F6C  90 BF 01 64 */	stw r5, 0x164(r31)
/* 8037D030 00379F70  90 BF 01 1C */	stw r5, 0x11c(r31)
/* 8037D034 00379F74  90 BF 01 34 */	stw r5, 0x134(r31)
/* 8037D038 00379F78  90 BF 01 08 */	stw r5, 0x108(r31)
/* 8037D03C 00379F7C  90 BF 00 F0 */	stw r5, 0xf0(r31)
/* 8037D040 00379F80  90 BF 01 50 */	stw r5, 0x150(r31)
/* 8037D044 00379F84  90 BF 01 68 */	stw r5, 0x168(r31)
/* 8037D048 00379F88  90 BF 01 20 */	stw r5, 0x120(r31)
/* 8037D04C 00379F8C  90 BF 01 38 */	stw r5, 0x138(r31)
/* 8037D050 00379F90  90 BF 01 0C */	stw r5, 0x10c(r31)
/* 8037D054 00379F94  90 BF 00 F4 */	stw r5, 0xf4(r31)
/* 8037D058 00379F98  90 BF 01 54 */	stw r5, 0x154(r31)
/* 8037D05C 00379F9C  90 BF 01 6C */	stw r5, 0x16c(r31)
/* 8037D060 00379FA0  90 BF 01 24 */	stw r5, 0x124(r31)
/* 8037D064 00379FA4  90 BF 01 3C */	stw r5, 0x13c(r31)
/* 8037D068 00379FA8  90 BF 01 10 */	stw r5, 0x110(r31)
/* 8037D06C 00379FAC  90 BF 00 F8 */	stw r5, 0xf8(r31)
/* 8037D070 00379FB0  90 BF 01 58 */	stw r5, 0x158(r31)
/* 8037D074 00379FB4  90 BF 01 70 */	stw r5, 0x170(r31)
/* 8037D078 00379FB8  90 BF 01 28 */	stw r5, 0x128(r31)
/* 8037D07C 00379FBC  90 BF 01 40 */	stw r5, 0x140(r31)
/* 8037D080 00379FC0  90 BF 00 C4 */	stw r5, 0xc4(r31)
/* 8037D084 00379FC4  90 BF 00 C8 */	stw r5, 0xc8(r31)
/* 8037D088 00379FC8  90 BF 00 CC */	stw r5, 0xcc(r31)
/* 8037D08C 00379FCC  90 BF 00 D0 */	stw r5, 0xd0(r31)
/* 8037D090 00379FD0  D0 84 00 00 */	stfs f4, 0(r4)
/* 8037D094 00379FD4  D0 64 00 08 */	stfs f3, 8(r4)
/* 8037D098 00379FD8  D0 44 00 04 */	stfs f2, 4(r4)
/* 8037D09C 00379FDC  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 8037D0A0 00379FE0  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8037D0A4 00379FE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037D0A8 00379FE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037D0AC 00379FEC  7C 08 03 A6 */	mtlr r0
/* 8037D0B0 00379FF0  38 21 00 10 */	addi r1, r1, 0x10
/* 8037D0B4 00379FF4  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura8THiScoreFv

.fn "__ct__10Vector2<f>Fv", weak
/* 8037D0B8 00379FF8  4E 80 00 20 */	blr 
.endfn "__ct__10Vector2<f>Fv"

.fn doCreate__Q28Morimura8THiScoreFP10JKRArchive, global
/* 8037D0BC 00379FFC  94 21 FD 40 */	stwu r1, -0x2c0(r1)
/* 8037D0C0 0037A000  7C 08 02 A6 */	mflr r0
/* 8037D0C4 0037A004  90 01 02 C4 */	stw r0, 0x2c4(r1)
/* 8037D0C8 0037A008  DB E1 02 B0 */	stfd f31, 0x2b0(r1)
/* 8037D0CC 0037A00C  F3 E1 02 B8 */	psq_st f31, 696(r1), 0, qr0
/* 8037D0D0 0037A010  DB C1 02 A0 */	stfd f30, 0x2a0(r1)
/* 8037D0D4 0037A014  F3 C1 02 A8 */	psq_st f30, 680(r1), 0, qr0
/* 8037D0D8 0037A018  DB A1 02 90 */	stfd f29, 0x290(r1)
/* 8037D0DC 0037A01C  F3 A1 02 98 */	psq_st f29, 664(r1), 0, qr0
/* 8037D0E0 0037A020  DB 81 02 80 */	stfd f28, 0x280(r1)
/* 8037D0E4 0037A024  F3 81 02 88 */	psq_st f28, 648(r1), 0, qr0
/* 8037D0E8 0037A028  DB 61 02 70 */	stfd f27, 0x270(r1)
/* 8037D0EC 0037A02C  F3 61 02 78 */	psq_st f27, 632(r1), 0, qr0
/* 8037D0F0 0037A030  DB 41 02 60 */	stfd f26, 0x260(r1)
/* 8037D0F4 0037A034  F3 41 02 68 */	psq_st f26, 616(r1), 0, qr0
/* 8037D0F8 0037A038  DB 21 02 50 */	stfd f25, 0x250(r1)
/* 8037D0FC 0037A03C  F3 21 02 58 */	psq_st f25, 600(r1), 0, qr0
/* 8037D100 0037A040  DB 01 02 40 */	stfd f24, 0x240(r1)
/* 8037D104 0037A044  F3 01 02 48 */	psq_st f24, 584(r1), 0, qr0
/* 8037D108 0037A048  DA E1 02 30 */	stfd f23, 0x230(r1)
/* 8037D10C 0037A04C  F2 E1 02 38 */	psq_st f23, 568(r1), 0, qr0
/* 8037D110 0037A050  DA C1 02 20 */	stfd f22, 0x220(r1)
/* 8037D114 0037A054  F2 C1 02 28 */	psq_st f22, 552(r1), 0, qr0
/* 8037D118 0037A058  DA A1 02 10 */	stfd f21, 0x210(r1)
/* 8037D11C 0037A05C  F2 A1 02 18 */	psq_st f21, 536(r1), 0, qr0
/* 8037D120 0037A060  DA 81 02 00 */	stfd f20, 0x200(r1)
/* 8037D124 0037A064  F2 81 02 08 */	psq_st f20, 520(r1), 0, qr0
/* 8037D128 0037A068  DA 61 01 F0 */	stfd f19, 0x1f0(r1)
/* 8037D12C 0037A06C  F2 61 01 F8 */	psq_st f19, 504(r1), 0, qr0
/* 8037D130 0037A070  DA 41 01 E0 */	stfd f18, 0x1e0(r1)
/* 8037D134 0037A074  F2 41 01 E8 */	psq_st f18, 488(r1), 0, qr0
/* 8037D138 0037A078  DA 21 01 D0 */	stfd f17, 0x1d0(r1)
/* 8037D13C 0037A07C  F2 21 01 D8 */	psq_st f17, 472(r1), 0, qr0
/* 8037D140 0037A080  DA 01 01 C0 */	stfd f16, 0x1c0(r1)
/* 8037D144 0037A084  F2 01 01 C8 */	psq_st f16, 456(r1), 0, qr0
/* 8037D148 0037A088  BE E1 01 9C */	stmw r23, 0x19c(r1)
/* 8037D14C 0037A08C  7C 7F 1B 78 */	mr r31, r3
/* 8037D150 0037A090  7C 99 23 78 */	mr r25, r4
/* 8037D154 0037A094  3C 80 80 49 */	lis r4, lbl_804932E0@ha
/* 8037D158 0037A098  93 23 00 78 */	stw r25, 0x78(r3)
/* 8037D15C 0037A09C  3B C4 32 E0 */	addi r30, r4, lbl_804932E0@l
/* 8037D160 0037A0A0  48 0D 6E 49 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8037D164 0037A0A4  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 8037D168 0037A0A8  3C C0 48 49 */	lis r6, 0x48495343@ha
/* 8037D16C 0037A0AC  7C 78 1B 78 */	mr r24, r3
/* 8037D170 0037A0B0  38 A0 00 00 */	li r5, 0
/* 8037D174 0037A0B4  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 8037D178 0037A0B8  38 C6 53 43 */	addi r6, r6, 0x48495343@l
/* 8037D17C 0037A0BC  4B F9 21 A1 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8037D180 0037A0C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037D184 0037A0C4  41 82 00 40 */	beq .L_8037D1C4
/* 8037D188 0037A0C8  93 1F 01 7C */	stw r24, 0x17c(r31)
/* 8037D18C 0037A0CC  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 8037D190 0037A0D0  28 00 00 00 */	cmplwi r0, 0
/* 8037D194 0037A0D4  40 82 00 18 */	bne .L_8037D1AC
/* 8037D198 0037A0D8  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D19C 0037A0DC  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D1A0 0037A0E0  38 80 01 1F */	li r4, 0x11f
/* 8037D1A4 0037A0E4  4C C6 31 82 */	crclr 6
/* 8037D1A8 0037A0E8  4B CA D4 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D1AC:
/* 8037D1AC 0037A0EC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037D1B0 0037A0F0  48 0A 5D 81 */	bl getPlayCommonData__6SystemFv
/* 8037D1B4 0037A0F4  88 03 00 00 */	lbz r0, 0(r3)
/* 8037D1B8 0037A0F8  54 00 FF FE */	rlwinm r0, r0, 0x1f, 0x1f, 0x1f
/* 8037D1BC 0037A0FC  98 1F 01 74 */	stb r0, 0x174(r31)
/* 8037D1C0 0037A100  48 00 00 48 */	b .L_8037D208
.L_8037D1C4:
/* 8037D1C4 0037A104  38 60 00 10 */	li r3, 0x10
/* 8037D1C8 0037A108  4B CA 6C DD */	bl __nw__FUl
/* 8037D1CC 0037A10C  28 03 00 00 */	cmplwi r3, 0
/* 8037D1D0 0037A110  41 82 00 2C */	beq .L_8037D1FC
/* 8037D1D4 0037A114  3C A0 80 4B */	lis r5, __vt__Q32og6Screen14DispMemberBase@ha
/* 8037D1D8 0037A118  3C 80 80 4E */	lis r4, __vt__Q28Morimura19DispMemberHighScore@ha
/* 8037D1DC 0037A11C  38 05 11 48 */	addi r0, r5, __vt__Q32og6Screen14DispMemberBase@l
/* 8037D1E0 0037A120  38 A0 00 00 */	li r5, 0
/* 8037D1E4 0037A124  90 03 00 00 */	stw r0, 0(r3)
/* 8037D1E8 0037A128  38 04 42 90 */	addi r0, r4, __vt__Q28Morimura19DispMemberHighScore@l
/* 8037D1EC 0037A12C  90 A3 00 04 */	stw r5, 4(r3)
/* 8037D1F0 0037A130  90 03 00 00 */	stw r0, 0(r3)
/* 8037D1F4 0037A134  90 A3 00 08 */	stw r5, 8(r3)
/* 8037D1F8 0037A138  98 A3 00 0C */	stb r5, 0xc(r3)
.L_8037D1FC:
/* 8037D1FC 0037A13C  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 8037D200 0037A140  38 00 00 01 */	li r0, 1
/* 8037D204 0037A144  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
.L_8037D208:
/* 8037D208 0037A148  88 0D 99 38 */	lbz r0, mForceClear__Q28Morimura8THiScore@sda21(r13)
/* 8037D20C 0037A14C  28 00 00 00 */	cmplwi r0, 0
/* 8037D210 0037A150  41 82 00 0C */	beq .L_8037D21C
/* 8037D214 0037A154  38 00 00 01 */	li r0, 1
/* 8037D218 0037A158  98 1F 01 74 */	stb r0, 0x174(r31)
.L_8037D21C:
/* 8037D21C 0037A15C  88 1F 01 74 */	lbz r0, 0x174(r31)
/* 8037D220 0037A160  28 00 00 00 */	cmplwi r0, 0
/* 8037D224 0037A164  40 82 00 54 */	bne .L_8037D278
/* 8037D228 0037A168  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037D22C 0037A16C  54 03 10 3A */	slwi r3, r0, 2
/* 8037D230 0037A170  4B CA 6D 7D */	bl __nwa__FUl
/* 8037D234 0037A174  90 7F 00 E0 */	stw r3, 0xe0(r31)
/* 8037D238 0037A178  3B 40 00 00 */	li r26, 0
/* 8037D23C 0037A17C  3B 00 00 00 */	li r24, 0
/* 8037D240 0037A180  48 00 00 2C */	b .L_8037D26C
.L_8037D244:
/* 8037D244 0037A184  38 60 00 1C */	li r3, 0x1c
/* 8037D248 0037A188  4B CA 6C 5D */	bl __nw__FUl
/* 8037D24C 0037A18C  7C 60 1B 79 */	or. r0, r3, r3
/* 8037D250 0037A190  41 82 00 0C */	beq .L_8037D25C
/* 8037D254 0037A194  4B FA BB B1 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 8037D258 0037A198  7C 60 1B 78 */	mr r0, r3
.L_8037D25C:
/* 8037D25C 0037A19C  80 7F 00 E0 */	lwz r3, 0xe0(r31)
/* 8037D260 0037A1A0  3B 5A 00 01 */	addi r26, r26, 1
/* 8037D264 0037A1A4  7C 03 C1 2E */	stwx r0, r3, r24
/* 8037D268 0037A1A8  3B 18 00 04 */	addi r24, r24, 4
.L_8037D26C:
/* 8037D26C 0037A1AC  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037D270 0037A1B0  7C 1A 00 00 */	cmpw r26, r0
/* 8037D274 0037A1B4  41 80 FF D0 */	blt .L_8037D244
.L_8037D278:
/* 8037D278 0037A1B8  7F E3 FB 78 */	mr r3, r31
/* 8037D27C 0037A1BC  48 0D 6D C5 */	bl getGamePad__Q26Screen7ObjBaseCFv
/* 8037D280 0037A1C0  90 7F 00 80 */	stw r3, 0x80(r31)
/* 8037D284 0037A1C4  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 8037D288 0037A1C8  83 BE 01 8C */	lwz r29, 0x18c(r30)
/* 8037D28C 0037A1CC  80 03 00 08 */	lwz r0, 8(r3)
/* 8037D290 0037A1D0  83 9E 01 90 */	lwz r28, 0x190(r30)
/* 8037D294 0037A1D4  83 7E 01 94 */	lwz r27, 0x194(r30)
/* 8037D298 0037A1D8  28 00 00 00 */	cmplwi r0, 0
/* 8037D29C 0037A1DC  83 5E 01 98 */	lwz r26, 0x198(r30)
/* 8037D2A0 0037A1E0  83 1E 01 9C */	lwz r24, 0x19c(r30)
/* 8037D2A4 0037A1E4  81 9E 01 A0 */	lwz r12, 0x1a0(r30)
/* 8037D2A8 0037A1E8  81 7E 01 A4 */	lwz r11, 0x1a4(r30)
/* 8037D2AC 0037A1EC  81 5E 01 A8 */	lwz r10, 0x1a8(r30)
/* 8037D2B0 0037A1F0  81 3E 01 AC */	lwz r9, 0x1ac(r30)
/* 8037D2B4 0037A1F4  81 1E 01 B0 */	lwz r8, 0x1b0(r30)
/* 8037D2B8 0037A1F8  80 FE 01 B4 */	lwz r7, 0x1b4(r30)
/* 8037D2BC 0037A1FC  80 DE 01 B8 */	lwz r6, 0x1b8(r30)
/* 8037D2C0 0037A200  80 BE 01 BC */	lwz r5, 0x1bc(r30)
/* 8037D2C4 0037A204  80 9E 01 C0 */	lwz r4, 0x1c0(r30)
/* 8037D2C8 0037A208  80 7E 01 C4 */	lwz r3, 0x1c4(r30)
/* 8037D2CC 0037A20C  80 1E 01 C8 */	lwz r0, 0x1c8(r30)
/* 8037D2D0 0037A210  93 A1 01 50 */	stw r29, 0x150(r1)
/* 8037D2D4 0037A214  93 81 01 54 */	stw r28, 0x154(r1)
/* 8037D2D8 0037A218  93 61 01 58 */	stw r27, 0x158(r1)
/* 8037D2DC 0037A21C  93 41 01 5C */	stw r26, 0x15c(r1)
/* 8037D2E0 0037A220  93 01 01 60 */	stw r24, 0x160(r1)
/* 8037D2E4 0037A224  91 81 01 64 */	stw r12, 0x164(r1)
/* 8037D2E8 0037A228  91 61 01 68 */	stw r11, 0x168(r1)
/* 8037D2EC 0037A22C  91 41 01 6C */	stw r10, 0x16c(r1)
/* 8037D2F0 0037A230  91 21 01 70 */	stw r9, 0x170(r1)
/* 8037D2F4 0037A234  91 01 01 74 */	stw r8, 0x174(r1)
/* 8037D2F8 0037A238  90 E1 01 78 */	stw r7, 0x178(r1)
/* 8037D2FC 0037A23C  90 C1 01 7C */	stw r6, 0x17c(r1)
/* 8037D300 0037A240  90 A1 01 80 */	stw r5, 0x180(r1)
/* 8037D304 0037A244  90 81 01 84 */	stw r4, 0x184(r1)
/* 8037D308 0037A248  90 61 01 88 */	stw r3, 0x188(r1)
/* 8037D30C 0037A24C  90 01 01 8C */	stw r0, 0x18c(r1)
/* 8037D310 0037A250  41 82 00 6C */	beq .L_8037D37C
/* 8037D314 0037A254  3C 60 80 4E */	lis r3, mPicTexture__Q28Morimura8THiScore@ha
/* 8037D318 0037A258  3B 01 01 50 */	addi r24, r1, 0x150
/* 8037D31C 0037A25C  3B 43 41 40 */	addi r26, r3, mPicTexture__Q28Morimura8THiScore@l
/* 8037D320 0037A260  3B 60 00 00 */	li r27, 0
.L_8037D324:
/* 8037D324 0037A264  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 8037D328 0037A268  80 98 00 00 */	lwz r4, 0(r24)
/* 8037D32C 0037A26C  80 63 00 08 */	lwz r3, 8(r3)
/* 8037D330 0037A270  81 83 00 00 */	lwz r12, 0(r3)
/* 8037D334 0037A274  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037D338 0037A278  7D 89 03 A6 */	mtctr r12
/* 8037D33C 0037A27C  4E 80 04 21 */	bctrl 
/* 8037D340 0037A280  90 7A 00 00 */	stw r3, 0(r26)
/* 8037D344 0037A284  80 1A 00 00 */	lwz r0, 0(r26)
/* 8037D348 0037A288  28 00 00 00 */	cmplwi r0, 0
/* 8037D34C 0037A28C  40 82 00 18 */	bne .L_8037D364
/* 8037D350 0037A290  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D354 0037A294  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D358 0037A298  38 80 01 45 */	li r4, 0x145
/* 8037D35C 0037A29C  4C C6 31 82 */	crclr 6
/* 8037D360 0037A2A0  4B CA D2 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D364:
/* 8037D364 0037A2A4  3B 7B 00 01 */	addi r27, r27, 1
/* 8037D368 0037A2A8  3B 5A 00 04 */	addi r26, r26, 4
/* 8037D36C 0037A2AC  2C 1B 00 10 */	cmpwi r27, 0x10
/* 8037D370 0037A2B0  3B 18 00 04 */	addi r24, r24, 4
/* 8037D374 0037A2B4  41 80 FF B0 */	blt .L_8037D324
/* 8037D378 0037A2B8  48 00 00 5C */	b .L_8037D3D4
.L_8037D37C:
/* 8037D37C 0037A2BC  3C 60 80 4E */	lis r3, mPicTexture__Q28Morimura8THiScore@ha
/* 8037D380 0037A2C0  3B 40 00 00 */	li r26, 0
/* 8037D384 0037A2C4  3B 03 41 40 */	addi r24, r3, mPicTexture__Q28Morimura8THiScore@l
.L_8037D388:
/* 8037D388 0037A2C8  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 8037D38C 0037A2CC  38 9E 00 0C */	addi r4, r30, 0xc
/* 8037D390 0037A2D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037D394 0037A2D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037D398 0037A2D8  7D 89 03 A6 */	mtctr r12
/* 8037D39C 0037A2DC  4E 80 04 21 */	bctrl 
/* 8037D3A0 0037A2E0  90 78 00 00 */	stw r3, 0(r24)
/* 8037D3A4 0037A2E4  80 18 00 00 */	lwz r0, 0(r24)
/* 8037D3A8 0037A2E8  28 00 00 00 */	cmplwi r0, 0
/* 8037D3AC 0037A2EC  40 82 00 18 */	bne .L_8037D3C4
/* 8037D3B0 0037A2F0  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D3B4 0037A2F4  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D3B8 0037A2F8  38 80 01 4B */	li r4, 0x14b
/* 8037D3BC 0037A2FC  4C C6 31 82 */	crclr 6
/* 8037D3C0 0037A300  4B CA D2 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D3C4:
/* 8037D3C4 0037A304  3B 5A 00 01 */	addi r26, r26, 1
/* 8037D3C8 0037A308  3B 18 00 04 */	addi r24, r24, 4
/* 8037D3CC 0037A30C  2C 1A 00 10 */	cmpwi r26, 0x10
/* 8037D3D0 0037A310  41 80 FF B8 */	blt .L_8037D388
.L_8037D3D4:
/* 8037D3D4 0037A314  38 60 00 18 */	li r3, 0x18
/* 8037D3D8 0037A318  4B CA 6A CD */	bl __nw__FUl
/* 8037D3DC 0037A31C  7C 60 1B 79 */	or. r0, r3, r3
/* 8037D3E0 0037A320  41 82 00 14 */	beq .L_8037D3F4
/* 8037D3E4 0037A324  7F 24 CB 78 */	mr r4, r25
/* 8037D3E8 0037A328  38 A0 00 02 */	li r5, 2
/* 8037D3EC 0037A32C  48 02 3F BD */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8037D3F0 0037A330  7C 60 1B 78 */	mr r0, r3
.L_8037D3F4:
/* 8037D3F4 0037A334  90 1F 00 7C */	stw r0, 0x7c(r31)
/* 8037D3F8 0037A338  38 9E 03 2C */	addi r4, r30, 0x32c
/* 8037D3FC 0037A33C  3C A0 00 02 */	lis r5, 2
/* 8037D400 0037A340  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8037D404 0037A344  81 83 00 00 */	lwz r12, 0(r3)
/* 8037D408 0037A348  81 8C 00 08 */	lwz r12, 8(r12)
/* 8037D40C 0037A34C  7D 89 03 A6 */	mtctr r12
/* 8037D410 0037A350  4E 80 04 21 */	bctrl 
/* 8037D414 0037A354  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8037D418 0037A358  38 9E 03 40 */	addi r4, r30, 0x340
/* 8037D41C 0037A35C  48 02 40 45 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8037D420 0037A360  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8037D424 0037A364  38 9E 03 54 */	addi r4, r30, 0x354
/* 8037D428 0037A368  48 02 40 39 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8037D42C 0037A36C  80 BF 00 7C */	lwz r5, 0x7c(r31)
/* 8037D430 0037A370  3C 80 61 33 */	lis r4, 0x6133646C@ha
/* 8037D434 0037A374  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 8037D438 0037A378  38 C4 64 6C */	addi r6, r4, 0x6133646C@l
/* 8037D43C 0037A37C  83 05 00 08 */	lwz r24, 8(r5)
/* 8037D440 0037A380  38 A0 6F 74 */	li r5, 0x6f74
/* 8037D444 0037A384  7F 04 C3 78 */	mr r4, r24
/* 8037D448 0037A388  4B FA FE 09 */	bl setCallBack_3DStickSmall__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8037D44C 0037A38C  90 7F 00 D8 */	stw r3, 0xd8(r31)
/* 8037D450 0037A390  7F 03 C3 78 */	mr r3, r24
/* 8037D454 0037A394  3C 80 61 33 */	lis r4, 0x6133646C@ha
/* 8037D458 0037A398  38 A0 6F 74 */	li r5, 0x6f74
/* 8037D45C 0037A39C  81 98 00 00 */	lwz r12, 0(r24)
/* 8037D460 0037A3A0  38 C4 64 6C */	addi r6, r4, 0x6133646C@l
/* 8037D464 0037A3A4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D468 0037A3A8  7D 89 03 A6 */	mtctr r12
/* 8037D46C 0037A3AC  4E 80 04 21 */	bctrl 
/* 8037D470 0037A3B0  90 7F 00 D4 */	stw r3, 0xd4(r31)
/* 8037D474 0037A3B4  80 1F 00 D4 */	lwz r0, 0xd4(r31)
/* 8037D478 0037A3B8  28 00 00 00 */	cmplwi r0, 0
/* 8037D47C 0037A3BC  40 82 00 18 */	bne .L_8037D494
/* 8037D480 0037A3C0  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D484 0037A3C4  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D488 0037A3C8  38 80 01 5B */	li r4, 0x15b
/* 8037D48C 0037A3CC  4C C6 31 82 */	crclr 6
/* 8037D490 0037A3D0  4B CA D1 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D494:
/* 8037D494 0037A3D4  80 1F 00 D8 */	lwz r0, 0xd8(r31)
/* 8037D498 0037A3D8  28 00 00 00 */	cmplwi r0, 0
/* 8037D49C 0037A3DC  40 82 00 18 */	bne .L_8037D4B4
/* 8037D4A0 0037A3E0  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D4A4 0037A3E4  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D4A8 0037A3E8  38 80 01 5C */	li r4, 0x15c
/* 8037D4AC 0037A3EC  4C C6 31 82 */	crclr 6
/* 8037D4B0 0037A3F0  4B CA D1 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D4B4:
/* 8037D4B4 0037A3F4  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8037D4B8 0037A3F8  C0 22 09 04 */	lfs f1, lbl_8051EC64@sda21(r2)
/* 8037D4BC 0037A3FC  80 63 00 34 */	lwz r3, 0x34(r3)
/* 8037D4C0 0037A400  4B F8 81 E9 */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 8037D4C4 0037A404  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8037D4C8 0037A408  80 63 00 34 */	lwz r3, 0x34(r3)
/* 8037D4CC 0037A40C  4B F8 83 ED */	bl start__Q32og6Screen9AnimGroupFv
/* 8037D4D0 0037A410  38 60 00 08 */	li r3, 8
/* 8037D4D4 0037A414  4B CA 69 D1 */	bl __nw__FUl
/* 8037D4D8 0037A418  7C 60 1B 79 */	or. r0, r3, r3
/* 8037D4DC 0037A41C  41 82 00 10 */	beq .L_8037D4EC
/* 8037D4E0 0037A420  80 9F 00 D8 */	lwz r4, 0xd8(r31)
/* 8037D4E4 0037A424  4B FA FE 89 */	bl __ct__Q32og6Screen12StickAnimMgrFPQ32og6Screen16CallBack_Picture
/* 8037D4E8 0037A428  7C 60 1B 78 */	mr r0, r3
.L_8037D4EC:
/* 8037D4EC 0037A42C  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 8037D4F0 0037A430  80 1F 00 DC */	lwz r0, 0xdc(r31)
/* 8037D4F4 0037A434  28 00 00 00 */	cmplwi r0, 0
/* 8037D4F8 0037A438  40 82 00 18 */	bne .L_8037D510
/* 8037D4FC 0037A43C  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D500 0037A440  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D504 0037A444  38 80 01 61 */	li r4, 0x161
/* 8037D508 0037A448  4C C6 31 82 */	crclr 6
/* 8037D50C 0037A44C  4B CA D1 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D510:
/* 8037D510 0037A450  7F 03 C3 78 */	mr r3, r24
/* 8037D514 0037A454  3C A0 5F 30 */	lis r5, 0x5F303031@ha
/* 8037D518 0037A458  81 98 00 00 */	lwz r12, 0(r24)
/* 8037D51C 0037A45C  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 8037D520 0037A460  38 C5 30 31 */	addi r6, r5, 0x5F303031@l
/* 8037D524 0037A464  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D528 0037A468  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 8037D52C 0037A46C  7D 89 03 A6 */	mtctr r12
/* 8037D530 0037A470  4E 80 04 21 */	bctrl 
/* 8037D534 0037A474  90 7F 00 BC */	stw r3, 0xbc(r31)
/* 8037D538 0037A478  80 1F 00 BC */	lwz r0, 0xbc(r31)
/* 8037D53C 0037A47C  28 00 00 00 */	cmplwi r0, 0
/* 8037D540 0037A480  40 82 00 18 */	bne .L_8037D558
/* 8037D544 0037A484  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D548 0037A488  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D54C 0037A48C  38 80 01 65 */	li r4, 0x165
/* 8037D550 0037A490  4C C6 31 82 */	crclr 6
/* 8037D554 0037A494  4B CA D0 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D558:
/* 8037D558 0037A498  38 60 00 18 */	li r3, 0x18
/* 8037D55C 0037A49C  4B CA 69 49 */	bl __nw__FUl
/* 8037D560 0037A4A0  7C 78 1B 79 */	or. r24, r3, r3
/* 8037D564 0037A4A4  41 82 00 28 */	beq .L_8037D58C
/* 8037D568 0037A4A8  7F 24 CB 78 */	mr r4, r25
/* 8037D56C 0037A4AC  38 A0 00 00 */	li r5, 0
/* 8037D570 0037A4B0  48 02 3E 39 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8037D574 0037A4B4  3C 80 80 4E */	lis r4, __vt__Q28Morimura11TListScreen@ha
/* 8037D578 0037A4B8  3C 60 80 4E */	lis r3, __vt__Q28Morimura18THiScoreListScreen@ha
/* 8037D57C 0037A4BC  38 04 59 6C */	addi r0, r4, __vt__Q28Morimura11TListScreen@l
/* 8037D580 0037A4C0  90 18 00 00 */	stw r0, 0(r24)
/* 8037D584 0037A4C4  38 03 43 54 */	addi r0, r3, __vt__Q28Morimura18THiScoreListScreen@l
/* 8037D588 0037A4C8  90 18 00 00 */	stw r0, 0(r24)
.L_8037D58C:
/* 8037D58C 0037A4CC  93 1F 00 B4 */	stw r24, 0xb4(r31)
/* 8037D590 0037A4D0  38 9E 03 68 */	addi r4, r30, 0x368
/* 8037D594 0037A4D4  3C A0 00 02 */	lis r5, 2
/* 8037D598 0037A4D8  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 8037D59C 0037A4DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037D5A0 0037A4E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8037D5A4 0037A4E4  7D 89 03 A6 */	mtctr r12
/* 8037D5A8 0037A4E8  4E 80 04 21 */	bctrl 
/* 8037D5AC 0037A4EC  80 9F 00 B4 */	lwz r4, 0xb4(r31)
/* 8037D5B0 0037A4F0  3C 60 69 73 */	lis r3, 0x69737431@ha
/* 8037D5B4 0037A4F4  38 C3 74 31 */	addi r6, r3, 0x69737431@l
/* 8037D5B8 0037A4F8  38 A0 4E 6C */	li r5, 0x4e6c
/* 8037D5BC 0037A4FC  83 A4 00 08 */	lwz r29, 8(r4)
/* 8037D5C0 0037A500  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D5C4 0037A504  7F A3 EB 78 */	mr r3, r29
/* 8037D5C8 0037A508  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D5CC 0037A50C  7D 89 03 A6 */	mtctr r12
/* 8037D5D0 0037A510  4E 80 04 21 */	bctrl 
/* 8037D5D4 0037A514  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 8037D5D8 0037A518  3C 80 69 73 */	lis r4, 0x69737431@ha
/* 8037D5DC 0037A51C  7F A3 EB 78 */	mr r3, r29
/* 8037D5E0 0037A520  38 A0 4E 6C */	li r5, 0x4e6c
/* 8037D5E4 0037A524  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8037D5E8 0037A528  38 C4 74 31 */	addi r6, r4, 0x69737431@l
/* 8037D5EC 0037A52C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D5F0 0037A530  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D5F4 0037A534  7D 89 03 A6 */	mtctr r12
/* 8037D5F8 0037A538  4E 80 04 21 */	bctrl 
/* 8037D5FC 0037A53C  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8037D600 0037A540  3C A0 69 63 */	lis r5, 0x69636F6E@ha
/* 8037D604 0037A544  3C 80 4E 73 */	lis r4, 0x4E73656C@ha
/* 8037D608 0037A548  7F A3 EB 78 */	mr r3, r29
/* 8037D60C 0037A54C  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8037D610 0037A550  38 C5 6F 6E */	addi r6, r5, 0x69636F6E@l
/* 8037D614 0037A554  38 A4 65 6C */	addi r5, r4, 0x4E73656C@l
/* 8037D618 0037A558  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D61C 0037A55C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D620 0037A560  7D 89 03 A6 */	mtctr r12
/* 8037D624 0037A564  4E 80 04 21 */	bctrl 
/* 8037D628 0037A568  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 8037D62C 0037A56C  3C A0 69 63 */	lis r5, 0x69636F6E@ha
/* 8037D630 0037A570  3C 80 4E 73 */	lis r4, 0x4E73656C@ha
/* 8037D634 0037A574  7F A3 EB 78 */	mr r3, r29
/* 8037D638 0037A578  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8037D63C 0037A57C  38 C5 6F 6E */	addi r6, r5, 0x69636F6E@l
/* 8037D640 0037A580  38 A4 65 6C */	addi r5, r4, 0x4E73656C@l
/* 8037D644 0037A584  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D648 0037A588  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D64C 0037A58C  7D 89 03 A6 */	mtctr r12
/* 8037D650 0037A590  4E 80 04 21 */	bctrl 
/* 8037D654 0037A594  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8037D658 0037A598  3C A0 69 63 */	lis r5, 0x69636F6E@ha
/* 8037D65C 0037A59C  3C 80 4E 73 */	lis r4, 0x4E73656C@ha
/* 8037D660 0037A5A0  7F A3 EB 78 */	mr r3, r29
/* 8037D664 0037A5A4  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 8037D668 0037A5A8  38 C5 6F 6E */	addi r6, r5, 0x69636F6E@l
/* 8037D66C 0037A5AC  38 A4 65 6C */	addi r5, r4, 0x4E73656C@l
/* 8037D670 0037A5B0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D674 0037A5B4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D678 0037A5B8  7D 89 03 A6 */	mtctr r12
/* 8037D67C 0037A5BC  4E 80 04 21 */	bctrl 
/* 8037D680 0037A5C0  90 7F 00 C0 */	stw r3, 0xc0(r31)
/* 8037D684 0037A5C4  80 1F 00 C0 */	lwz r0, 0xc0(r31)
/* 8037D688 0037A5C8  28 00 00 00 */	cmplwi r0, 0
/* 8037D68C 0037A5CC  41 82 01 24 */	beq .L_8037D7B0
/* 8037D690 0037A5D0  7F A3 EB 78 */	mr r3, r29
/* 8037D694 0037A5D4  3C A0 6C 5F */	lis r5, 0x6C5F6C75@ha
/* 8037D698 0037A5D8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D69C 0037A5DC  3C 80 00 50 */	lis r4, 0x00507365@ha
/* 8037D6A0 0037A5E0  38 C5 6C 75 */	addi r6, r5, 0x6C5F6C75@l
/* 8037D6A4 0037A5E4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D6A8 0037A5E8  38 A4 73 65 */	addi r5, r4, 0x00507365@l
/* 8037D6AC 0037A5EC  7D 89 03 A6 */	mtctr r12
/* 8037D6B0 0037A5F0  4E 80 04 21 */	bctrl 
/* 8037D6B4 0037A5F4  90 7F 00 C4 */	stw r3, 0xc4(r31)
/* 8037D6B8 0037A5F8  80 1F 00 C4 */	lwz r0, 0xc4(r31)
/* 8037D6BC 0037A5FC  28 00 00 00 */	cmplwi r0, 0
/* 8037D6C0 0037A600  40 82 00 18 */	bne .L_8037D6D8
/* 8037D6C4 0037A604  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D6C8 0037A608  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D6CC 0037A60C  38 80 01 77 */	li r4, 0x177
/* 8037D6D0 0037A610  4C C6 31 82 */	crclr 6
/* 8037D6D4 0037A614  4B CA CF 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D6D8:
/* 8037D6D8 0037A618  7F A3 EB 78 */	mr r3, r29
/* 8037D6DC 0037A61C  3C A0 6C 5F */	lis r5, 0x6C5F7275@ha
/* 8037D6E0 0037A620  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D6E4 0037A624  3C 80 00 50 */	lis r4, 0x00507365@ha
/* 8037D6E8 0037A628  38 C5 72 75 */	addi r6, r5, 0x6C5F7275@l
/* 8037D6EC 0037A62C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D6F0 0037A630  38 A4 73 65 */	addi r5, r4, 0x00507365@l
/* 8037D6F4 0037A634  7D 89 03 A6 */	mtctr r12
/* 8037D6F8 0037A638  4E 80 04 21 */	bctrl 
/* 8037D6FC 0037A63C  90 7F 00 C8 */	stw r3, 0xc8(r31)
/* 8037D700 0037A640  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 8037D704 0037A644  28 00 00 00 */	cmplwi r0, 0
/* 8037D708 0037A648  40 82 00 18 */	bne .L_8037D720
/* 8037D70C 0037A64C  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D710 0037A650  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D714 0037A654  38 80 01 7A */	li r4, 0x17a
/* 8037D718 0037A658  4C C6 31 82 */	crclr 6
/* 8037D71C 0037A65C  4B CA CF 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D720:
/* 8037D720 0037A660  7F A3 EB 78 */	mr r3, r29
/* 8037D724 0037A664  3C A0 6C 5F */	lis r5, 0x6C5F6C6C@ha
/* 8037D728 0037A668  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D72C 0037A66C  3C 80 00 50 */	lis r4, 0x00507365@ha
/* 8037D730 0037A670  38 C5 6C 6C */	addi r6, r5, 0x6C5F6C6C@l
/* 8037D734 0037A674  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D738 0037A678  38 A4 73 65 */	addi r5, r4, 0x00507365@l
/* 8037D73C 0037A67C  7D 89 03 A6 */	mtctr r12
/* 8037D740 0037A680  4E 80 04 21 */	bctrl 
/* 8037D744 0037A684  90 7F 00 CC */	stw r3, 0xcc(r31)
/* 8037D748 0037A688  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 8037D74C 0037A68C  28 00 00 00 */	cmplwi r0, 0
/* 8037D750 0037A690  40 82 00 18 */	bne .L_8037D768
/* 8037D754 0037A694  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D758 0037A698  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D75C 0037A69C  38 80 01 7D */	li r4, 0x17d
/* 8037D760 0037A6A0  4C C6 31 82 */	crclr 6
/* 8037D764 0037A6A4  4B CA CE DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D768:
/* 8037D768 0037A6A8  7F A3 EB 78 */	mr r3, r29
/* 8037D76C 0037A6AC  3C A0 6C 5F */	lis r5, 0x6C5F726C@ha
/* 8037D770 0037A6B0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D774 0037A6B4  3C 80 00 50 */	lis r4, 0x00507365@ha
/* 8037D778 0037A6B8  38 C5 72 6C */	addi r6, r5, 0x6C5F726C@l
/* 8037D77C 0037A6BC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D780 0037A6C0  38 A4 73 65 */	addi r5, r4, 0x00507365@l
/* 8037D784 0037A6C4  7D 89 03 A6 */	mtctr r12
/* 8037D788 0037A6C8  4E 80 04 21 */	bctrl 
/* 8037D78C 0037A6CC  90 7F 00 D0 */	stw r3, 0xd0(r31)
/* 8037D790 0037A6D0  80 1F 00 D0 */	lwz r0, 0xd0(r31)
/* 8037D794 0037A6D4  28 00 00 00 */	cmplwi r0, 0
/* 8037D798 0037A6D8  40 82 00 18 */	bne .L_8037D7B0
/* 8037D79C 0037A6DC  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D7A0 0037A6E0  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D7A4 0037A6E4  38 80 01 80 */	li r4, 0x180
/* 8037D7A8 0037A6E8  4C C6 31 82 */	crclr 6
/* 8037D7AC 0037A6EC  4B CA CE 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D7B0:
/* 8037D7B0 0037A6F0  38 00 00 01 */	li r0, 1
/* 8037D7B4 0037A6F4  38 A0 00 00 */	li r5, 0
/* 8037D7B8 0037A6F8  98 1F 00 B0 */	stb r0, 0xb0(r31)
/* 8037D7BC 0037A6FC  38 80 00 02 */	li r4, 2
/* 8037D7C0 0037A700  7F A3 EB 78 */	mr r3, r29
/* 8037D7C4 0037A704  38 01 01 28 */	addi r0, r1, 0x128
/* 8037D7C8 0037A708  90 BF 00 90 */	stw r5, 0x90(r31)
/* 8037D7CC 0037A70C  90 9F 00 94 */	stw r4, 0x94(r31)
/* 8037D7D0 0037A710  A8 9F 00 8E */	lha r4, 0x8e(r31)
/* 8037D7D4 0037A714  38 84 FF FF */	addi r4, r4, -1
/* 8037D7D8 0037A718  90 9F 00 98 */	stw r4, 0x98(r31)
/* 8037D7DC 0037A71C  C8 1E 01 D0 */	lfd f0, 0x1d0(r30)
/* 8037D7E0 0037A720  C9 1E 01 D8 */	lfd f8, 0x1d8(r30)
/* 8037D7E4 0037A724  C8 FE 01 E0 */	lfd f7, 0x1e0(r30)
/* 8037D7E8 0037A728  C8 DE 01 E8 */	lfd f6, 0x1e8(r30)
/* 8037D7EC 0037A72C  C8 BE 01 F0 */	lfd f5, 0x1f0(r30)
/* 8037D7F0 0037A730  D8 01 01 28 */	stfd f0, 0x128(r1)
/* 8037D7F4 0037A734  C8 9E 01 F8 */	lfd f4, 0x1f8(r30)
/* 8037D7F8 0037A738  C8 7E 02 00 */	lfd f3, 0x200(r30)
/* 8037D7FC 0037A73C  C8 5E 02 08 */	lfd f2, 0x208(r30)
/* 8037D800 0037A740  C8 3E 02 10 */	lfd f1, 0x210(r30)
/* 8037D804 0037A744  C8 1E 02 18 */	lfd f0, 0x218(r30)
/* 8037D808 0037A748  D9 01 01 30 */	stfd f8, 0x130(r1)
/* 8037D80C 0037A74C  D8 E1 01 38 */	stfd f7, 0x138(r1)
/* 8037D810 0037A750  D8 C1 01 40 */	stfd f6, 0x140(r1)
/* 8037D814 0037A754  D8 A1 01 48 */	stfd f5, 0x148(r1)
/* 8037D818 0037A758  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 8037D81C 0037A75C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D820 0037A760  54 84 18 38 */	slwi r4, r4, 3
/* 8037D824 0037A764  D8 81 01 00 */	stfd f4, 0x100(r1)
/* 8037D828 0037A768  7C C0 22 14 */	add r6, r0, r4
/* 8037D82C 0037A76C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D830 0037A770  80 A6 00 00 */	lwz r5, 0(r6)
/* 8037D834 0037A774  D8 61 01 08 */	stfd f3, 0x108(r1)
/* 8037D838 0037A778  80 C6 00 04 */	lwz r6, 4(r6)
/* 8037D83C 0037A77C  D8 41 01 10 */	stfd f2, 0x110(r1)
/* 8037D840 0037A780  D8 21 01 18 */	stfd f1, 0x118(r1)
/* 8037D844 0037A784  D8 01 01 20 */	stfd f0, 0x120(r1)
/* 8037D848 0037A788  7D 89 03 A6 */	mtctr r12
/* 8037D84C 0037A78C  4E 80 04 21 */	bctrl 
/* 8037D850 0037A790  7C 78 1B 79 */	or. r24, r3, r3
/* 8037D854 0037A794  40 82 00 18 */	bne .L_8037D86C
/* 8037D858 0037A798  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D85C 0037A79C  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D860 0037A7A0  38 80 01 91 */	li r4, 0x191
/* 8037D864 0037A7A4  4C C6 31 82 */	crclr 6
/* 8037D868 0037A7A8  4B CA CD D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D86C:
/* 8037D86C 0037A7AC  C0 18 00 D8 */	lfs f0, 0xd8(r24)
/* 8037D870 0037A7B0  7F A3 EB 78 */	mr r3, r29
/* 8037D874 0037A7B4  38 01 01 28 */	addi r0, r1, 0x128
/* 8037D878 0037A7B8  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 8037D87C 0037A7BC  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 8037D880 0037A7C0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D884 0037A7C4  54 84 18 38 */	slwi r4, r4, 3
/* 8037D888 0037A7C8  7C C0 22 14 */	add r6, r0, r4
/* 8037D88C 0037A7CC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D890 0037A7D0  80 A6 00 00 */	lwz r5, 0(r6)
/* 8037D894 0037A7D4  80 C6 00 04 */	lwz r6, 4(r6)
/* 8037D898 0037A7D8  7D 89 03 A6 */	mtctr r12
/* 8037D89C 0037A7DC  4E 80 04 21 */	bctrl 
/* 8037D8A0 0037A7E0  7C 78 1B 79 */	or. r24, r3, r3
/* 8037D8A4 0037A7E4  40 82 00 18 */	bne .L_8037D8BC
/* 8037D8A8 0037A7E8  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D8AC 0037A7EC  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D8B0 0037A7F0  38 80 01 95 */	li r4, 0x195
/* 8037D8B4 0037A7F4  4C C6 31 82 */	crclr 6
/* 8037D8B8 0037A7F8  4B CA CD 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D8BC:
/* 8037D8BC 0037A7FC  C0 18 00 D8 */	lfs f0, 0xd8(r24)
/* 8037D8C0 0037A800  D0 1F 00 A4 */	stfs f0, 0xa4(r31)
/* 8037D8C4 0037A804  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037D8C8 0037A808  54 03 10 3A */	slwi r3, r0, 2
/* 8037D8CC 0037A80C  4B CA 66 E1 */	bl __nwa__FUl
/* 8037D8D0 0037A810  90 7F 00 88 */	stw r3, 0x88(r31)
/* 8037D8D4 0037A814  3B 81 01 28 */	addi r28, r1, 0x128
/* 8037D8D8 0037A818  3B 41 01 00 */	addi r26, r1, 0x100
/* 8037D8DC 0037A81C  3B 20 00 00 */	li r25, 0
/* 8037D8E0 0037A820  3B 60 00 00 */	li r27, 0
/* 8037D8E4 0037A824  48 00 01 AC */	b .L_8037DA90
.L_8037D8E8:
/* 8037D8E8 0037A828  38 60 00 28 */	li r3, 0x28
/* 8037D8EC 0037A82C  4B CA 65 B9 */	bl __nw__FUl
/* 8037D8F0 0037A830  7C 78 1B 79 */	or. r24, r3, r3
/* 8037D8F4 0037A834  41 82 00 54 */	beq .L_8037D948
/* 8037D8F8 0037A838  7F A3 EB 78 */	mr r3, r29
/* 8037D8FC 0037A83C  80 BC 00 00 */	lwz r5, 0(r28)
/* 8037D900 0037A840  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D904 0037A844  80 DC 00 04 */	lwz r6, 4(r28)
/* 8037D908 0037A848  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D90C 0037A84C  7D 89 03 A6 */	mtctr r12
/* 8037D910 0037A850  4E 80 04 21 */	bctrl 
/* 8037D914 0037A854  38 00 00 00 */	li r0, 0
/* 8037D918 0037A858  C0 02 08 B8 */	lfs f0, lbl_8051EC18@sda21(r2)
/* 8037D91C 0037A85C  90 18 00 00 */	stw r0, 0(r24)
/* 8037D920 0037A860  90 78 00 04 */	stw r3, 4(r24)
/* 8037D924 0037A864  90 18 00 08 */	stw r0, 8(r24)
/* 8037D928 0037A868  90 18 00 0C */	stw r0, 0xc(r24)
/* 8037D92C 0037A86C  90 18 00 10 */	stw r0, 0x10(r24)
/* 8037D930 0037A870  D0 18 00 18 */	stfs f0, 0x18(r24)
/* 8037D934 0037A874  90 18 00 20 */	stw r0, 0x20(r24)
/* 8037D938 0037A878  90 18 00 24 */	stw r0, 0x24(r24)
/* 8037D93C 0037A87C  80 78 00 04 */	lwz r3, 4(r24)
/* 8037D940 0037A880  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8037D944 0037A884  D0 18 00 1C */	stfs f0, 0x1c(r24)
.L_8037D948:
/* 8037D948 0037A888  80 9F 00 88 */	lwz r4, 0x88(r31)
/* 8037D94C 0037A88C  7F A3 EB 78 */	mr r3, r29
/* 8037D950 0037A890  80 BA 00 00 */	lwz r5, 0(r26)
/* 8037D954 0037A894  7F 04 D9 2E */	stwx r24, r4, r27
/* 8037D958 0037A898  80 DA 00 04 */	lwz r6, 4(r26)
/* 8037D95C 0037A89C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D960 0037A8A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D964 0037A8A4  7D 89 03 A6 */	mtctr r12
/* 8037D968 0037A8A8  4E 80 04 21 */	bctrl 
/* 8037D96C 0037A8AC  80 9F 00 88 */	lwz r4, 0x88(r31)
/* 8037D970 0037A8B0  7C 84 D8 2E */	lwzx r4, r4, r27
/* 8037D974 0037A8B4  90 64 00 08 */	stw r3, 8(r4)
/* 8037D978 0037A8B8  7F A3 EB 78 */	mr r3, r29
/* 8037D97C 0037A8BC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037D980 0037A8C0  80 BC 00 00 */	lwz r5, 0(r28)
/* 8037D984 0037A8C4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037D988 0037A8C8  80 DC 00 04 */	lwz r6, 4(r28)
/* 8037D98C 0037A8CC  7D 89 03 A6 */	mtctr r12
/* 8037D990 0037A8D0  4E 80 04 21 */	bctrl 
/* 8037D994 0037A8D4  28 03 00 00 */	cmplwi r3, 0
/* 8037D998 0037A8D8  40 82 00 1C */	bne .L_8037D9B4
/* 8037D99C 0037A8DC  7F 26 CB 78 */	mr r6, r25
/* 8037D9A0 0037A8E0  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D9A4 0037A8E4  38 BE 03 7C */	addi r5, r30, 0x37c
/* 8037D9A8 0037A8E8  38 80 01 9F */	li r4, 0x19f
/* 8037D9AC 0037A8EC  4C C6 31 82 */	crclr 6
/* 8037D9B0 0037A8F0  4B CA CC 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D9B4:
/* 8037D9B4 0037A8F4  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037D9B8 0037A8F8  7C 63 D8 2E */	lwzx r3, r3, r27
/* 8037D9BC 0037A8FC  80 63 00 04 */	lwz r3, 4(r3)
/* 8037D9C0 0037A900  4B CB B6 B1 */	bl getFirstChildPane__7J2DPaneFv
/* 8037D9C4 0037A904  4B CB B6 AD */	bl getFirstChildPane__7J2DPaneFv
/* 8037D9C8 0037A908  38 80 00 00 */	li r4, 0
/* 8037D9CC 0037A90C  38 A0 00 00 */	li r5, 0
/* 8037D9D0 0037A910  4B CB B3 DD */	bl setInfluencedAlpha__7J2DPaneFbb
/* 8037D9D4 0037A914  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037D9D8 0037A918  7C 63 D8 2E */	lwzx r3, r3, r27
/* 8037D9DC 0037A91C  83 03 00 08 */	lwz r24, 8(r3)
/* 8037D9E0 0037A920  28 18 00 00 */	cmplwi r24, 0
/* 8037D9E4 0037A924  40 82 00 18 */	bne .L_8037D9FC
/* 8037D9E8 0037A928  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037D9EC 0037A92C  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037D9F0 0037A930  38 80 01 A7 */	li r4, 0x1a7
/* 8037D9F4 0037A934  4C C6 31 82 */	crclr 6
/* 8037D9F8 0037A938  4B CA CC 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037D9FC:
/* 8037D9FC 0037A93C  7F E3 FB 78 */	mr r3, r31
/* 8037DA00 0037A940  7F 24 CB 78 */	mr r4, r25
/* 8037DA04 0037A944  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037DA08 0037A948  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8037DA0C 0037A94C  7D 89 03 A6 */	mtctr r12
/* 8037DA10 0037A950  4E 80 04 21 */	bctrl 
/* 8037DA14 0037A954  90 98 00 1C */	stw r4, 0x1c(r24)
/* 8037DA18 0037A958  90 78 00 18 */	stw r3, 0x18(r24)
/* 8037DA1C 0037A95C  7F 03 C3 78 */	mr r3, r24
/* 8037DA20 0037A960  4B CB B6 51 */	bl getFirstChildPane__7J2DPaneFv
/* 8037DA24 0037A964  7C 78 1B 79 */	or. r24, r3, r3
/* 8037DA28 0037A968  40 82 00 18 */	bne .L_8037DA40
/* 8037DA2C 0037A96C  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037DA30 0037A970  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037DA34 0037A974  38 80 01 AC */	li r4, 0x1ac
/* 8037DA38 0037A978  4C C6 31 82 */	crclr 6
/* 8037DA3C 0037A97C  4B CA CC 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037DA40:
/* 8037DA40 0037A980  7F 03 C3 78 */	mr r3, r24
/* 8037DA44 0037A984  38 80 00 00 */	li r4, 0
/* 8037DA48 0037A988  38 A0 00 00 */	li r5, 0
/* 8037DA4C 0037A98C  4B CB B3 61 */	bl setInfluencedAlpha__7J2DPaneFbb
/* 8037DA50 0037A990  7F E3 FB 78 */	mr r3, r31
/* 8037DA54 0037A994  7F 24 CB 78 */	mr r4, r25
/* 8037DA58 0037A998  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037DA5C 0037A99C  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8037DA60 0037A9A0  7D 89 03 A6 */	mtctr r12
/* 8037DA64 0037A9A4  4E 80 04 21 */	bctrl 
/* 8037DA68 0037A9A8  90 98 00 1C */	stw r4, 0x1c(r24)
/* 8037DA6C 0037A9AC  7F 24 CB 78 */	mr r4, r25
/* 8037DA70 0037A9B0  90 78 00 18 */	stw r3, 0x18(r24)
/* 8037DA74 0037A9B4  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037DA78 0037A9B8  7C 63 D8 2E */	lwzx r3, r3, r27
/* 8037DA7C 0037A9BC  48 02 49 5D */	bl setIndex__Q28Morimura10TIndexPaneFi
/* 8037DA80 0037A9C0  3B 9C 00 08 */	addi r28, r28, 8
/* 8037DA84 0037A9C4  3B 7B 00 04 */	addi r27, r27, 4
/* 8037DA88 0037A9C8  3B 5A 00 08 */	addi r26, r26, 8
/* 8037DA8C 0037A9CC  3B 39 00 01 */	addi r25, r25, 1
.L_8037DA90:
/* 8037DA90 0037A9D0  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037DA94 0037A9D4  7C 19 00 00 */	cmpw r25, r0
/* 8037DA98 0037A9D8  41 80 FE 50 */	blt .L_8037D8E8
/* 8037DA9C 0037A9DC  88 1F 01 74 */	lbz r0, 0x174(r31)
/* 8037DAA0 0037A9E0  28 00 00 00 */	cmplwi r0, 0
/* 8037DAA4 0037A9E4  41 82 01 4C */	beq .L_8037DBF0
/* 8037DAA8 0037A9E8  3C 60 80 4E */	lis r3, mPicTexture__Q28Morimura8THiScore@ha
/* 8037DAAC 0037A9EC  3B 20 00 00 */	li r25, 0
/* 8037DAB0 0037A9F0  3B 63 41 40 */	addi r27, r3, mPicTexture__Q28Morimura8THiScore@l
/* 8037DAB4 0037A9F4  3B 40 00 00 */	li r26, 0
/* 8037DAB8 0037A9F8  48 00 01 2C */	b .L_8037DBE4
.L_8037DABC:
/* 8037DABC 0037A9FC  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037DAC0 0037AA00  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8037DAC4 0037AA04  83 03 00 04 */	lwz r24, 4(r3)
/* 8037DAC8 0037AA08  7F 03 C3 78 */	mr r3, r24
/* 8037DACC 0037AA0C  4B CB B5 A5 */	bl getFirstChildPane__7J2DPaneFv
/* 8037DAD0 0037AA10  4B CB B5 A1 */	bl getFirstChildPane__7J2DPaneFv
/* 8037DAD4 0037AA14  7C 64 1B 78 */	mr r4, r3
/* 8037DAD8 0037AA18  7F 03 C3 78 */	mr r3, r24
/* 8037DADC 0037AA1C  4B CB 9B E9 */	bl appendChild__7J2DPaneFP7J2DPane
/* 8037DAE0 0037AA20  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037DAE4 0037AA24  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8037DAE8 0037AA28  80 63 00 04 */	lwz r3, 4(r3)
/* 8037DAEC 0037AA2C  4B CB B5 85 */	bl getFirstChildPane__7J2DPaneFv
/* 8037DAF0 0037AA30  7C 78 1B 78 */	mr r24, r3
/* 8037DAF4 0037AA34  4B CB B5 ED */	bl getParentPane__7J2DPaneFv
/* 8037DAF8 0037AA38  28 03 00 00 */	cmplwi r3, 0
/* 8037DAFC 0037AA3C  41 82 00 14 */	beq .L_8037DB10
/* 8037DB00 0037AA40  7F 03 C3 78 */	mr r3, r24
/* 8037DB04 0037AA44  4B CB B5 DD */	bl getParentPane__7J2DPaneFv
/* 8037DB08 0037AA48  7F 04 C3 78 */	mr r4, r24
/* 8037DB0C 0037AA4C  4B CB 9D 29 */	bl removeChild__7J2DPaneFP7J2DPane
.L_8037DB10:
/* 8037DB10 0037AA50  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037DB14 0037AA54  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8037DB18 0037AA58  80 83 00 08 */	lwz r4, 8(r3)
/* 8037DB1C 0037AA5C  80 63 00 04 */	lwz r3, 4(r3)
/* 8037DB20 0037AA60  4B CB 9B A5 */	bl appendChild__7J2DPaneFP7J2DPane
/* 8037DB24 0037AA64  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037DB28 0037AA68  7C 63 D0 2E */	lwzx r3, r3, r26
/* 8037DB2C 0037AA6C  80 63 00 04 */	lwz r3, 4(r3)
/* 8037DB30 0037AA70  4B CB B5 41 */	bl getFirstChildPane__7J2DPaneFv
/* 8037DB34 0037AA74  80 9B 00 00 */	lwz r4, 0(r27)
/* 8037DB38 0037AA78  7C 7C 1B 78 */	mr r28, r3
/* 8037DB3C 0037AA7C  28 04 00 00 */	cmplwi r4, 0
/* 8037DB40 0037AA80  41 82 00 18 */	beq .L_8037DB58
/* 8037DB44 0037AA84  81 83 00 00 */	lwz r12, 0(r3)
/* 8037DB48 0037AA88  38 A0 00 00 */	li r5, 0
/* 8037DB4C 0037AA8C  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8037DB50 0037AA90  7D 89 03 A6 */	mtctr r12
/* 8037DB54 0037AA94  4E 80 04 21 */	bctrl 
.L_8037DB58:
/* 8037DB58 0037AA98  7F 83 E3 78 */	mr r3, r28
/* 8037DB5C 0037AA9C  81 9C 00 00 */	lwz r12, 0(r28)
/* 8037DB60 0037AAA0  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 8037DB64 0037AAA4  7D 89 03 A6 */	mtctr r12
/* 8037DB68 0037AAA8  4E 80 04 21 */	bctrl 
/* 8037DB6C 0037AAAC  83 03 00 70 */	lwz r24, 0x70(r3)
/* 8037DB70 0037AAB0  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8037DB74 0037AAB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037DB78 0037AAB8  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 8037DB7C 0037AABC  7D 89 03 A6 */	mtctr r12
/* 8037DB80 0037AAC0  4E 80 04 21 */	bctrl 
/* 8037DB84 0037AAC4  7C 64 1B 78 */	mr r4, r3
/* 8037DB88 0037AAC8  7F E3 FB 78 */	mr r3, r31
/* 8037DB8C 0037AACC  80 84 00 70 */	lwz r4, 0x70(r4)
/* 8037DB90 0037AAD0  7F 05 C3 78 */	mr r5, r24
/* 8037DB94 0037AAD4  48 00 27 25 */	bl changeTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock
/* 8037DB98 0037AAD8  7F 83 E3 78 */	mr r3, r28
/* 8037DB9C 0037AADC  81 9C 00 00 */	lwz r12, 0(r28)
/* 8037DBA0 0037AAE0  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 8037DBA4 0037AAE4  7D 89 03 A6 */	mtctr r12
/* 8037DBA8 0037AAE8  4E 80 04 21 */	bctrl 
/* 8037DBAC 0037AAEC  7C 7C 1B 78 */	mr r28, r3
/* 8037DBB0 0037AAF0  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8037DBB4 0037AAF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037DBB8 0037AAF8  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 8037DBBC 0037AAFC  7D 89 03 A6 */	mtctr r12
/* 8037DBC0 0037AB00  4E 80 04 21 */	bctrl 
/* 8037DBC4 0037AB04  7C 64 1B 78 */	mr r4, r3
/* 8037DBC8 0037AB08  7F E3 FB 78 */	mr r3, r31
/* 8037DBCC 0037AB0C  38 84 00 10 */	addi r4, r4, 0x10
/* 8037DBD0 0037AB10  38 BC 00 10 */	addi r5, r28, 0x10
/* 8037DBD4 0037AB14  48 00 29 81 */	bl changeColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock
/* 8037DBD8 0037AB18  3B 5A 00 04 */	addi r26, r26, 4
/* 8037DBDC 0037AB1C  3B 7B 00 04 */	addi r27, r27, 4
/* 8037DBE0 0037AB20  3B 39 00 01 */	addi r25, r25, 1
.L_8037DBE4:
/* 8037DBE4 0037AB24  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037DBE8 0037AB28  7C 19 00 00 */	cmpw r25, r0
/* 8037DBEC 0037AB2C  41 80 FE D0 */	blt .L_8037DABC
.L_8037DBF0:
/* 8037DBF0 0037AB30  80 9F 00 88 */	lwz r4, 0x88(r31)
/* 8037DBF4 0037AB34  38 00 00 01 */	li r0, 1
/* 8037DBF8 0037AB38  38 60 00 30 */	li r3, 0x30
/* 8037DBFC 0037AB3C  80 84 00 00 */	lwz r4, 0(r4)
/* 8037DC00 0037AB40  80 84 00 04 */	lwz r4, 4(r4)
/* 8037DC04 0037AB44  98 04 00 B0 */	stb r0, 0xb0(r4)
/* 8037DC08 0037AB48  4B CA 62 9D */	bl __nw__FUl
/* 8037DC0C 0037AB4C  7C 60 1B 79 */	or. r0, r3, r3
/* 8037DC10 0037AB50  41 82 00 0C */	beq .L_8037DC1C
/* 8037DC14 0037AB54  48 02 45 41 */	bl __ct__Q28Morimura11TIndexGroupFv
/* 8037DC18 0037AB58  7C 60 1B 78 */	mr r0, r3
.L_8037DC1C:
/* 8037DC1C 0037AB5C  90 1F 00 84 */	stw r0, 0x84(r31)
/* 8037DC20 0037AB60  7F E3 FB 78 */	mr r3, r31
/* 8037DC24 0037AB64  48 00 29 B1 */	bl updateLayout__Q28Morimura8THiScoreFv
/* 8037DC28 0037AB68  3C 60 80 51 */	lis r3, mScrollParm__Q28Morimura8THiScore@ha
/* 8037DC2C 0037AB6C  3C 80 33 72 */	lis r4, 0x33726473@ha
/* 8037DC30 0037AB70  38 E3 40 30 */	addi r7, r3, mScrollParm__Q28Morimura8THiScore@l
/* 8037DC34 0037AB74  3C 60 00 54 */	lis r3, 0x00546F74@ha
/* 8037DC38 0037AB78  81 1F 00 84 */	lwz r8, 0x84(r31)
/* 8037DC3C 0037AB7C  38 C4 64 73 */	addi r6, r4, 0x33726473@l
/* 8037DC40 0037AB80  C0 07 00 00 */	lfs f0, 0(r7)
/* 8037DC44 0037AB84  38 A3 6F 74 */	addi r5, r3, 0x00546F74@l
/* 8037DC48 0037AB88  D0 08 00 00 */	stfs f0, 0(r8)
/* 8037DC4C 0037AB8C  C0 07 00 04 */	lfs f0, 4(r7)
/* 8037DC50 0037AB90  D0 08 00 04 */	stfs f0, 4(r8)
/* 8037DC54 0037AB94  C0 07 00 08 */	lfs f0, 8(r7)
/* 8037DC58 0037AB98  D0 08 00 08 */	stfs f0, 8(r8)
/* 8037DC5C 0037AB9C  C0 07 00 0C */	lfs f0, 0xc(r7)
/* 8037DC60 0037ABA0  D0 08 00 0C */	stfs f0, 0xc(r8)
/* 8037DC64 0037ABA4  C0 07 00 10 */	lfs f0, 0x10(r7)
/* 8037DC68 0037ABA8  D0 08 00 10 */	stfs f0, 0x10(r8)
/* 8037DC6C 0037ABAC  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8037DC70 0037ABB0  80 63 00 08 */	lwz r3, 8(r3)
/* 8037DC74 0037ABB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037DC78 0037ABB8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037DC7C 0037ABBC  7D 89 03 A6 */	mtctr r12
/* 8037DC80 0037ABC0  4E 80 04 21 */	bctrl 
/* 8037DC84 0037ABC4  7C 79 1B 79 */	or. r25, r3, r3
/* 8037DC88 0037ABC8  40 82 00 18 */	bne .L_8037DCA0
/* 8037DC8C 0037ABCC  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037DC90 0037ABD0  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037DC94 0037ABD4  38 80 01 D5 */	li r4, 0x1d5
/* 8037DC98 0037ABD8  4C C6 31 82 */	crclr 6
/* 8037DC9C 0037ABDC  4B CA C9 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037DCA0:
/* 8037DCA0 0037ABE0  3C 80 32 5F */	lis r4, 0x325F3030@ha
/* 8037DCA4 0037ABE4  3C 60 00 38 */	lis r3, 0x00383437@ha
/* 8037DCA8 0037ABE8  38 04 30 30 */	addi r0, r4, 0x325F3030@l
/* 8037DCAC 0037ABEC  7F F8 FB 78 */	mr r24, r31
/* 8037DCB0 0037ABF0  90 19 00 1C */	stw r0, 0x1c(r25)
/* 8037DCB4 0037ABF4  38 03 34 37 */	addi r0, r3, 0x00383437@l
/* 8037DCB8 0037ABF8  3B 41 00 D0 */	addi r26, r1, 0xd0
/* 8037DCBC 0037ABFC  3B 61 00 70 */	addi r27, r1, 0x70
/* 8037DCC0 0037AC00  90 19 00 18 */	stw r0, 0x18(r25)
/* 8037DCC4 0037AC04  3B 21 00 A0 */	addi r25, r1, 0xa0
/* 8037DCC8 0037AC08  3B 81 00 10 */	addi r28, r1, 0x10
/* 8037DCCC 0037AC0C  3B A1 00 40 */	addi r29, r1, 0x40
/* 8037DCD0 0037AC10  CA 1E 02 20 */	lfd f16, 0x220(r30)
/* 8037DCD4 0037AC14  3A E0 00 00 */	li r23, 0
/* 8037DCD8 0037AC18  CA 3E 02 28 */	lfd f17, 0x228(r30)
/* 8037DCDC 0037AC1C  CA 5E 02 30 */	lfd f18, 0x230(r30)
/* 8037DCE0 0037AC20  CA 7E 02 38 */	lfd f19, 0x238(r30)
/* 8037DCE4 0037AC24  CA 9E 02 40 */	lfd f20, 0x240(r30)
/* 8037DCE8 0037AC28  CA BE 02 48 */	lfd f21, 0x248(r30)
/* 8037DCEC 0037AC2C  CA DE 02 50 */	lfd f22, 0x250(r30)
/* 8037DCF0 0037AC30  CA FE 02 58 */	lfd f23, 0x258(r30)
/* 8037DCF4 0037AC34  CB 1E 02 60 */	lfd f24, 0x260(r30)
/* 8037DCF8 0037AC38  CB 3E 02 68 */	lfd f25, 0x268(r30)
/* 8037DCFC 0037AC3C  CB 5E 02 70 */	lfd f26, 0x270(r30)
/* 8037DD00 0037AC40  CB 7E 02 78 */	lfd f27, 0x278(r30)
/* 8037DD04 0037AC44  CB 9E 02 80 */	lfd f28, 0x280(r30)
/* 8037DD08 0037AC48  CB BE 02 88 */	lfd f29, 0x288(r30)
/* 8037DD0C 0037AC4C  CB DE 02 90 */	lfd f30, 0x290(r30)
/* 8037DD10 0037AC50  CB FE 02 98 */	lfd f31, 0x298(r30)
/* 8037DD14 0037AC54  C9 BE 02 A0 */	lfd f13, 0x2a0(r30)
/* 8037DD18 0037AC58  C9 9E 02 A8 */	lfd f12, 0x2a8(r30)
/* 8037DD1C 0037AC5C  C9 7E 02 B0 */	lfd f11, 0x2b0(r30)
/* 8037DD20 0037AC60  C9 5E 02 B8 */	lfd f10, 0x2b8(r30)
/* 8037DD24 0037AC64  C9 3E 02 C0 */	lfd f9, 0x2c0(r30)
/* 8037DD28 0037AC68  C9 1E 02 C8 */	lfd f8, 0x2c8(r30)
/* 8037DD2C 0037AC6C  C8 FE 02 D0 */	lfd f7, 0x2d0(r30)
/* 8037DD30 0037AC70  C8 DE 02 D8 */	lfd f6, 0x2d8(r30)
/* 8037DD34 0037AC74  C8 BE 02 E0 */	lfd f5, 0x2e0(r30)
/* 8037DD38 0037AC78  C8 9E 02 E8 */	lfd f4, 0x2e8(r30)
/* 8037DD3C 0037AC7C  C8 7E 02 F0 */	lfd f3, 0x2f0(r30)
/* 8037DD40 0037AC80  C8 5E 02 F8 */	lfd f2, 0x2f8(r30)
/* 8037DD44 0037AC84  C8 3E 03 00 */	lfd f1, 0x300(r30)
/* 8037DD48 0037AC88  C8 1E 03 08 */	lfd f0, 0x308(r30)
/* 8037DD4C 0037AC8C  DA 01 00 D0 */	stfd f16, 0xd0(r1)
/* 8037DD50 0037AC90  DA 21 00 D8 */	stfd f17, 0xd8(r1)
/* 8037DD54 0037AC94  DA 41 00 E0 */	stfd f18, 0xe0(r1)
/* 8037DD58 0037AC98  DA 61 00 E8 */	stfd f19, 0xe8(r1)
/* 8037DD5C 0037AC9C  DA 81 00 F0 */	stfd f20, 0xf0(r1)
/* 8037DD60 0037ACA0  DA A1 00 F8 */	stfd f21, 0xf8(r1)
/* 8037DD64 0037ACA4  DA C1 00 A0 */	stfd f22, 0xa0(r1)
/* 8037DD68 0037ACA8  DA E1 00 A8 */	stfd f23, 0xa8(r1)
/* 8037DD6C 0037ACAC  DB 01 00 B0 */	stfd f24, 0xb0(r1)
/* 8037DD70 0037ACB0  DB 21 00 B8 */	stfd f25, 0xb8(r1)
/* 8037DD74 0037ACB4  DB 41 00 C0 */	stfd f26, 0xc0(r1)
/* 8037DD78 0037ACB8  DB 61 00 C8 */	stfd f27, 0xc8(r1)
/* 8037DD7C 0037ACBC  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 8037DD80 0037ACC0  DB A1 00 78 */	stfd f29, 0x78(r1)
/* 8037DD84 0037ACC4  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8037DD88 0037ACC8  DB E1 00 88 */	stfd f31, 0x88(r1)
/* 8037DD8C 0037ACCC  D9 A1 00 90 */	stfd f13, 0x90(r1)
/* 8037DD90 0037ACD0  D9 81 00 98 */	stfd f12, 0x98(r1)
/* 8037DD94 0037ACD4  D9 61 00 40 */	stfd f11, 0x40(r1)
/* 8037DD98 0037ACD8  D9 41 00 48 */	stfd f10, 0x48(r1)
/* 8037DD9C 0037ACDC  D9 21 00 50 */	stfd f9, 0x50(r1)
/* 8037DDA0 0037ACE0  D9 01 00 58 */	stfd f8, 0x58(r1)
/* 8037DDA4 0037ACE4  D8 E1 00 60 */	stfd f7, 0x60(r1)
/* 8037DDA8 0037ACE8  D8 C1 00 68 */	stfd f6, 0x68(r1)
/* 8037DDAC 0037ACEC  D8 A1 00 10 */	stfd f5, 0x10(r1)
/* 8037DDB0 0037ACF0  D8 81 00 18 */	stfd f4, 0x18(r1)
/* 8037DDB4 0037ACF4  D8 61 00 20 */	stfd f3, 0x20(r1)
/* 8037DDB8 0037ACF8  D8 41 00 28 */	stfd f2, 0x28(r1)
/* 8037DDBC 0037ACFC  D8 21 00 30 */	stfd f1, 0x30(r1)
/* 8037DDC0 0037AD00  D8 01 00 38 */	stfd f0, 0x38(r1)
.L_8037DDC4:
/* 8037DDC4 0037AD04  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8037DDC8 0037AD08  38 F8 00 FC */	addi r7, r24, 0xfc
/* 8037DDCC 0037AD0C  80 BA 00 00 */	lwz r5, 0(r26)
/* 8037DDD0 0037AD10  39 00 00 0A */	li r8, 0xa
/* 8037DDD4 0037AD14  80 63 00 08 */	lwz r3, 8(r3)
/* 8037DDD8 0037AD18  80 DA 00 04 */	lwz r6, 4(r26)
/* 8037DDDC 0037AD1C  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 8037DDE0 0037AD20  48 02 3E 7D */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 8037DDE4 0037AD24  90 78 00 E4 */	stw r3, 0xe4(r24)
/* 8037DDE8 0037AD28  39 38 01 44 */	addi r9, r24, 0x144
/* 8037DDEC 0037AD2C  80 B9 00 00 */	lwz r5, 0(r25)
/* 8037DDF0 0037AD30  39 40 00 03 */	li r10, 3
/* 8037DDF4 0037AD34  80 1F 00 78 */	lwz r0, 0x78(r31)
/* 8037DDF8 0037AD38  80 D9 00 04 */	lwz r6, 4(r25)
/* 8037DDFC 0037AD3C  90 01 00 08 */	stw r0, 8(r1)
/* 8037DE00 0037AD40  80 FB 00 00 */	lwz r7, 0(r27)
/* 8037DE04 0037AD44  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8037DE08 0037AD48  81 1B 00 04 */	lwz r8, 4(r27)
/* 8037DE0C 0037AD4C  80 63 00 08 */	lwz r3, 8(r3)
/* 8037DE10 0037AD50  48 02 3F F1 */	bl setScaleUpCounter2__8MorimuraFPQ29P2DScreen3MgrUxUxPUlUsP10JKRArchive
/* 8037DE14 0037AD54  90 78 01 14 */	stw r3, 0x114(r24)
/* 8037DE18 0037AD58  39 38 01 5C */	addi r9, r24, 0x15c
/* 8037DE1C 0037AD5C  80 BD 00 00 */	lwz r5, 0(r29)
/* 8037DE20 0037AD60  39 40 00 03 */	li r10, 3
/* 8037DE24 0037AD64  80 1F 00 78 */	lwz r0, 0x78(r31)
/* 8037DE28 0037AD68  80 DD 00 04 */	lwz r6, 4(r29)
/* 8037DE2C 0037AD6C  90 01 00 08 */	stw r0, 8(r1)
/* 8037DE30 0037AD70  80 FC 00 00 */	lwz r7, 0(r28)
/* 8037DE34 0037AD74  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8037DE38 0037AD78  81 1C 00 04 */	lwz r8, 4(r28)
/* 8037DE3C 0037AD7C  80 63 00 08 */	lwz r3, 8(r3)
/* 8037DE40 0037AD80  48 02 3F C1 */	bl setScaleUpCounter2__8MorimuraFPQ29P2DScreen3MgrUxUxPUlUsP10JKRArchive
/* 8037DE44 0037AD84  90 78 01 2C */	stw r3, 0x12c(r24)
/* 8037DE48 0037AD88  38 80 00 FF */	li r4, 0xff
/* 8037DE4C 0037AD8C  80 78 01 2C */	lwz r3, 0x12c(r24)
/* 8037DE50 0037AD90  4B F8 D9 A1 */	bl setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
/* 8037DE54 0037AD94  80 78 01 2C */	lwz r3, 0x12c(r24)
/* 8037DE58 0037AD98  38 80 00 01 */	li r4, 1
/* 8037DE5C 0037AD9C  4B F8 D9 85 */	bl setPuyoAnimZero__Q32og6Screen18CallBack_CounterRVFb
/* 8037DE60 0037ADA0  3A F7 00 01 */	addi r23, r23, 1
/* 8037DE64 0037ADA4  3B 5A 00 08 */	addi r26, r26, 8
/* 8037DE68 0037ADA8  2C 17 00 06 */	cmpwi r23, 6
/* 8037DE6C 0037ADAC  3B 7B 00 08 */	addi r27, r27, 8
/* 8037DE70 0037ADB0  3B 39 00 08 */	addi r25, r25, 8
/* 8037DE74 0037ADB4  3B 9C 00 08 */	addi r28, r28, 8
/* 8037DE78 0037ADB8  3B BD 00 08 */	addi r29, r29, 8
/* 8037DE7C 0037ADBC  3B 18 00 04 */	addi r24, r24, 4
/* 8037DE80 0037ADC0  41 80 FF 44 */	blt .L_8037DDC4
/* 8037DE84 0037ADC4  7F E3 FB 78 */	mr r3, r31
/* 8037DE88 0037ADC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037DE8C 0037ADCC  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8037DE90 0037ADD0  7D 89 03 A6 */	mtctr r12
/* 8037DE94 0037ADD4  4E 80 04 21 */	bctrl 
/* 8037DE98 0037ADD8  38 60 00 48 */	li r3, 0x48
/* 8037DE9C 0037ADDC  4B CA 60 09 */	bl __nw__FUl
/* 8037DEA0 0037ADE0  7C 79 1B 79 */	or. r25, r3, r3
/* 8037DEA4 0037ADE4  41 82 00 34 */	beq .L_8037DED8
/* 8037DEA8 0037ADE8  80 BF 00 BC */	lwz r5, 0xbc(r31)
/* 8037DEAC 0037ADEC  38 9E 03 90 */	addi r4, r30, 0x390
/* 8037DEB0 0037ADF0  C0 65 00 28 */	lfs f3, 0x28(r5)
/* 8037DEB4 0037ADF4  C0 25 00 20 */	lfs f1, 0x20(r5)
/* 8037DEB8 0037ADF8  C0 45 00 2C */	lfs f2, 0x2c(r5)
/* 8037DEBC 0037ADFC  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 8037DEC0 0037AE00  EC 23 08 28 */	fsubs f1, f3, f1
/* 8037DEC4 0037AE04  EC 42 00 28 */	fsubs f2, f2, f0
/* 8037DEC8 0037AE08  48 02 37 09 */	bl __ct__Q28Morimura8TIndPaneFPCcff
/* 8037DECC 0037AE0C  3C 60 80 4E */	lis r3, __vt__Q28Morimura15THiScoreIndPane@ha
/* 8037DED0 0037AE10  38 03 43 68 */	addi r0, r3, __vt__Q28Morimura15THiScoreIndPane@l
/* 8037DED4 0037AE14  90 19 00 00 */	stw r0, 0(r25)
.L_8037DED8:
/* 8037DED8 0037AE18  93 3F 00 B8 */	stw r25, 0xb8(r31)
/* 8037DEDC 0037AE1C  38 9E 03 90 */	addi r4, r30, 0x390
/* 8037DEE0 0037AE20  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 8037DEE4 0037AE24  48 02 38 11 */	bl createIndTexture__Q28Morimura8TIndPaneFPCc
/* 8037DEE8 0037AE28  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 8037DEEC 0037AE2C  38 80 00 00 */	li r4, 0
/* 8037DEF0 0037AE30  48 02 38 A9 */	bl createCaptureTexture__Q28Morimura8TIndPaneF9_GXTexFmt
/* 8037DEF4 0037AE34  80 DF 00 B8 */	lwz r6, 0xb8(r31)
/* 8037DEF8 0037AE38  3C 60 80 4E */	lis r3, mPicTexture__Q28Morimura8THiScore@ha
/* 8037DEFC 0037AE3C  38 83 41 40 */	addi r4, r3, mPicTexture__Q28Morimura8THiScore@l
/* 8037DF00 0037AE40  38 A0 00 00 */	li r5, 0
/* 8037DF04 0037AE44  80 66 00 18 */	lwz r3, 0x18(r6)
/* 8037DF08 0037AE48  80 84 00 00 */	lwz r4, 0(r4)
/* 8037DF0C 0037AE4C  4B CB 51 79 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8037DF10 0037AE50  80 DF 00 B8 */	lwz r6, 0xb8(r31)
/* 8037DF14 0037AE54  3C 60 80 4E */	lis r3, mPicTexture__Q28Morimura8THiScore@ha
/* 8037DF18 0037AE58  38 83 41 40 */	addi r4, r3, mPicTexture__Q28Morimura8THiScore@l
/* 8037DF1C 0037AE5C  38 A0 00 00 */	li r5, 0
/* 8037DF20 0037AE60  80 66 00 1C */	lwz r3, 0x1c(r6)
/* 8037DF24 0037AE64  80 84 00 00 */	lwz r4, 0(r4)
/* 8037DF28 0037AE68  4B CB 51 5D */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8037DF2C 0037AE6C  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 8037DF30 0037AE70  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8037DF34 0037AE74  82 E3 00 20 */	lwz r23, 0x20(r3)
/* 8037DF38 0037AE78  28 17 00 00 */	cmplwi r23, 0
/* 8037DF3C 0037AE7C  40 82 00 18 */	bne .L_8037DF54
/* 8037DF40 0037AE80  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037DF44 0037AE84  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037DF48 0037AE88  38 80 01 FB */	li r4, 0x1fb
/* 8037DF4C 0037AE8C  4C C6 31 82 */	crclr 6
/* 8037DF50 0037AE90  4B CA C6 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037DF54:
/* 8037DF54 0037AE94  38 00 00 02 */	li r0, 2
/* 8037DF58 0037AE98  98 17 00 01 */	stb r0, 1(r23)
/* 8037DF5C 0037AE9C  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 8037DF60 0037AEA0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8037DF64 0037AEA4  83 03 00 20 */	lwz r24, 0x20(r3)
/* 8037DF68 0037AEA8  28 18 00 00 */	cmplwi r24, 0
/* 8037DF6C 0037AEAC  40 82 00 18 */	bne .L_8037DF84
/* 8037DF70 0037AEB0  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037DF74 0037AEB4  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037DF78 0037AEB8  38 80 02 00 */	li r4, 0x200
/* 8037DF7C 0037AEBC  4C C6 31 82 */	crclr 6
/* 8037DF80 0037AEC0  4B CA C6 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037DF84:
/* 8037DF84 0037AEC4  38 00 00 02 */	li r0, 2
/* 8037DF88 0037AEC8  98 18 00 01 */	stb r0, 1(r24)
/* 8037DF8C 0037AECC  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 8037DF90 0037AED0  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8037DF94 0037AED4  83 03 00 20 */	lwz r24, 0x20(r3)
/* 8037DF98 0037AED8  28 18 00 00 */	cmplwi r24, 0
/* 8037DF9C 0037AEDC  40 82 00 18 */	bne .L_8037DFB4
/* 8037DFA0 0037AEE0  38 7E 03 10 */	addi r3, r30, 0x310
/* 8037DFA4 0037AEE4  38 BE 03 20 */	addi r5, r30, 0x320
/* 8037DFA8 0037AEE8  38 80 02 04 */	li r4, 0x204
/* 8037DFAC 0037AEEC  4C C6 31 82 */	crclr 6
/* 8037DFB0 0037AEF0  4B CA C6 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037DFB4:
/* 8037DFB4 0037AEF4  38 00 00 02 */	li r0, 2
/* 8037DFB8 0037AEF8  7F E3 FB 78 */	mr r3, r31
/* 8037DFBC 0037AEFC  98 18 00 01 */	stb r0, 1(r24)
/* 8037DFC0 0037AF00  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037DFC4 0037AF04  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037DFC8 0037AF08  7D 89 03 A6 */	mtctr r12
/* 8037DFCC 0037AF0C  4E 80 04 21 */	bctrl 
/* 8037DFD0 0037AF10  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8037DFD4 0037AF14  3A E0 00 00 */	li r23, 0
/* 8037DFD8 0037AF18  C3 E2 08 B8 */	lfs f31, lbl_8051EC18@sda21(r2)
/* 8037DFDC 0037AF1C  C2 03 00 18 */	lfs f16, 0x18(r3)
.L_8037DFE0:
/* 8037DFE0 0037AF20  3B 20 00 00 */	li r25, 0
/* 8037DFE4 0037AF24  3B 00 00 00 */	li r24, 0
/* 8037DFE8 0037AF28  48 00 00 48 */	b .L_8037E030
.L_8037DFEC:
/* 8037DFEC 0037AF2C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037DFF0 0037AF30  7C 83 C0 2E */	lwzx r4, r3, r24
/* 8037DFF4 0037AF34  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8037DFF8 0037AF38  80 64 00 04 */	lwz r3, 4(r4)
/* 8037DFFC 0037AF3C  EC 00 80 2A */	fadds f0, f0, f16
/* 8037E000 0037AF40  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 8037E004 0037AF44  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E008 0037AF48  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037E00C 0037AF4C  7D 89 03 A6 */	mtctr r12
/* 8037E010 0037AF50  4E 80 04 21 */	bctrl 
/* 8037E014 0037AF54  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037E018 0037AF58  3B 39 00 01 */	addi r25, r25, 1
/* 8037E01C 0037AF5C  7C 83 C0 2E */	lwzx r4, r3, r24
/* 8037E020 0037AF60  3B 18 00 04 */	addi r24, r24, 4
/* 8037E024 0037AF64  80 64 00 04 */	lwz r3, 4(r4)
/* 8037E028 0037AF68  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8037E02C 0037AF6C  D0 04 00 1C */	stfs f0, 0x1c(r4)
.L_8037E030:
/* 8037E030 0037AF70  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037E034 0037AF74  7C 19 00 00 */	cmpw r25, r0
/* 8037E038 0037AF78  41 80 FF B4 */	blt .L_8037DFEC
/* 8037E03C 0037AF7C  7F E3 FB 78 */	mr r3, r31
/* 8037E040 0037AF80  38 80 00 00 */	li r4, 0
/* 8037E044 0037AF84  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037E048 0037AF88  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8037E04C 0037AF8C  7D 89 03 A6 */	mtctr r12
/* 8037E050 0037AF90  4E 80 04 21 */	bctrl 
/* 8037E054 0037AF94  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8037E058 0037AF98  38 00 00 00 */	li r0, 0
/* 8037E05C 0037AF9C  7F E3 FB 78 */	mr r3, r31
/* 8037E060 0037AFA0  D3 E4 00 14 */	stfs f31, 0x14(r4)
/* 8037E064 0037AFA4  90 04 00 20 */	stw r0, 0x20(r4)
/* 8037E068 0037AFA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037E06C 0037AFAC  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037E070 0037AFB0  7D 89 03 A6 */	mtctr r12
/* 8037E074 0037AFB4  4E 80 04 21 */	bctrl 
/* 8037E078 0037AFB8  3A F7 00 01 */	addi r23, r23, 1
/* 8037E07C 0037AFBC  2C 17 00 02 */	cmpwi r23, 2
/* 8037E080 0037AFC0  41 80 FF 60 */	blt .L_8037DFE0
/* 8037E084 0037AFC4  E3 E1 02 B8 */	psq_l f31, 696(r1), 0, qr0
/* 8037E088 0037AFC8  CB E1 02 B0 */	lfd f31, 0x2b0(r1)
/* 8037E08C 0037AFCC  E3 C1 02 A8 */	psq_l f30, 680(r1), 0, qr0
/* 8037E090 0037AFD0  CB C1 02 A0 */	lfd f30, 0x2a0(r1)
/* 8037E094 0037AFD4  E3 A1 02 98 */	psq_l f29, 664(r1), 0, qr0
/* 8037E098 0037AFD8  CB A1 02 90 */	lfd f29, 0x290(r1)
/* 8037E09C 0037AFDC  E3 81 02 88 */	psq_l f28, 648(r1), 0, qr0
/* 8037E0A0 0037AFE0  CB 81 02 80 */	lfd f28, 0x280(r1)
/* 8037E0A4 0037AFE4  E3 61 02 78 */	psq_l f27, 632(r1), 0, qr0
/* 8037E0A8 0037AFE8  CB 61 02 70 */	lfd f27, 0x270(r1)
/* 8037E0AC 0037AFEC  E3 41 02 68 */	psq_l f26, 616(r1), 0, qr0
/* 8037E0B0 0037AFF0  CB 41 02 60 */	lfd f26, 0x260(r1)
/* 8037E0B4 0037AFF4  E3 21 02 58 */	psq_l f25, 600(r1), 0, qr0
/* 8037E0B8 0037AFF8  CB 21 02 50 */	lfd f25, 0x250(r1)
/* 8037E0BC 0037AFFC  E3 01 02 48 */	psq_l f24, 584(r1), 0, qr0
/* 8037E0C0 0037B000  CB 01 02 40 */	lfd f24, 0x240(r1)
/* 8037E0C4 0037B004  E2 E1 02 38 */	psq_l f23, 568(r1), 0, qr0
/* 8037E0C8 0037B008  CA E1 02 30 */	lfd f23, 0x230(r1)
/* 8037E0CC 0037B00C  E2 C1 02 28 */	psq_l f22, 552(r1), 0, qr0
/* 8037E0D0 0037B010  CA C1 02 20 */	lfd f22, 0x220(r1)
/* 8037E0D4 0037B014  E2 A1 02 18 */	psq_l f21, 536(r1), 0, qr0
/* 8037E0D8 0037B018  CA A1 02 10 */	lfd f21, 0x210(r1)
/* 8037E0DC 0037B01C  E2 81 02 08 */	psq_l f20, 520(r1), 0, qr0
/* 8037E0E0 0037B020  CA 81 02 00 */	lfd f20, 0x200(r1)
/* 8037E0E4 0037B024  E2 61 01 F8 */	psq_l f19, 504(r1), 0, qr0
/* 8037E0E8 0037B028  CA 61 01 F0 */	lfd f19, 0x1f0(r1)
/* 8037E0EC 0037B02C  E2 41 01 E8 */	psq_l f18, 488(r1), 0, qr0
/* 8037E0F0 0037B030  CA 41 01 E0 */	lfd f18, 0x1e0(r1)
/* 8037E0F4 0037B034  E2 21 01 D8 */	psq_l f17, 472(r1), 0, qr0
/* 8037E0F8 0037B038  CA 21 01 D0 */	lfd f17, 0x1d0(r1)
/* 8037E0FC 0037B03C  E2 01 01 C8 */	psq_l f16, 456(r1), 0, qr0
/* 8037E100 0037B040  CA 01 01 C0 */	lfd f16, 0x1c0(r1)
/* 8037E104 0037B044  BA E1 01 9C */	lmw r23, 0x19c(r1)
/* 8037E108 0037B048  80 01 02 C4 */	lwz r0, 0x2c4(r1)
/* 8037E10C 0037B04C  7C 08 03 A6 */	mtlr r0
/* 8037E110 0037B050  38 21 02 C0 */	addi r1, r1, 0x2c0
/* 8037E114 0037B054  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura8THiScoreFP10JKRArchive

.fn __dt__Q28Morimura8TIndPaneFv, weak
/* 8037E118 0037B058  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037E11C 0037B05C  7C 08 02 A6 */	mflr r0
/* 8037E120 0037B060  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037E124 0037B064  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037E128 0037B068  7C 9F 23 78 */	mr r31, r4
/* 8037E12C 0037B06C  93 C1 00 08 */	stw r30, 8(r1)
/* 8037E130 0037B070  7C 7E 1B 79 */	or. r30, r3, r3
/* 8037E134 0037B074  41 82 00 28 */	beq .L_8037E15C
/* 8037E138 0037B078  3C A0 80 4E */	lis r5, __vt__Q28Morimura8TIndPane@ha
/* 8037E13C 0037B07C  38 80 00 00 */	li r4, 0
/* 8037E140 0037B080  38 05 58 6C */	addi r0, r5, __vt__Q28Morimura8TIndPane@l
/* 8037E144 0037B084  90 1E 00 00 */	stw r0, 0(r30)
/* 8037E148 0037B088  48 09 34 41 */	bl __dt__5CNodeFv
/* 8037E14C 0037B08C  7F E0 07 35 */	extsh. r0, r31
/* 8037E150 0037B090  40 81 00 0C */	ble .L_8037E15C
/* 8037E154 0037B094  7F C3 F3 78 */	mr r3, r30
/* 8037E158 0037B098  4B CA 5F 5D */	bl __dl__FPv
.L_8037E15C:
/* 8037E15C 0037B09C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037E160 0037B0A0  7F C3 F3 78 */	mr r3, r30
/* 8037E164 0037B0A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037E168 0037B0A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8037E16C 0037B0AC  7C 08 03 A6 */	mtlr r0
/* 8037E170 0037B0B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8037E174 0037B0B4  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura8TIndPaneFv

.fn getNameID__Q28Morimura8THiScoreFi, weak
/* 8037E178 0037B0B8  3C 60 80 4E */	lis r3, mNameID__Q28Morimura8THiScore@ha
/* 8037E17C 0037B0BC  54 84 18 38 */	slwi r4, r4, 3
/* 8037E180 0037B0C0  38 03 41 80 */	addi r0, r3, mNameID__Q28Morimura8THiScore@l
/* 8037E184 0037B0C4  7C 80 22 14 */	add r4, r0, r4
/* 8037E188 0037B0C8  80 64 00 00 */	lwz r3, 0(r4)
/* 8037E18C 0037B0CC  80 84 00 04 */	lwz r4, 4(r4)
/* 8037E190 0037B0D0  4E 80 00 20 */	blr 
.endfn getNameID__Q28Morimura8THiScoreFi

.fn doUpdate__Q28Morimura8THiScoreFv, global
/* 8037E194 0037B0D4  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8037E198 0037B0D8  7C 08 02 A6 */	mflr r0
/* 8037E19C 0037B0DC  90 01 00 94 */	stw r0, 0x94(r1)
/* 8037E1A0 0037B0E0  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8037E1A4 0037B0E4  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8037E1A8 0037B0E8  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8037E1AC 0037B0EC  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8037E1B0 0037B0F0  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8037E1B4 0037B0F4  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 8037E1B8 0037B0F8  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 8037E1BC 0037B0FC  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 8037E1C0 0037B100  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8037E1C4 0037B104  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8037E1C8 0037B108  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8037E1CC 0037B10C  7C 7F 1B 78 */	mr r31, r3
/* 8037E1D0 0037B110  88 03 00 45 */	lbz r0, 0x45(r3)
/* 8037E1D4 0037B114  28 00 00 00 */	cmplwi r0, 0
/* 8037E1D8 0037B118  41 82 01 94 */	beq .L_8037E36C
/* 8037E1DC 0037B11C  80 9F 00 80 */	lwz r4, 0x80(r31)
/* 8037E1E0 0037B120  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8037E1E4 0037B124  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8037E1E8 0037B128  41 82 00 94 */	beq .L_8037E27C
/* 8037E1EC 0037B12C  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037E1F0 0037B130  28 00 00 00 */	cmplwi r0, 0
/* 8037E1F4 0037B134  40 82 00 74 */	bne .L_8037E268
/* 8037E1F8 0037B138  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E1FC 0037B13C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8037E200 0037B140  7D 89 03 A6 */	mtctr r12
/* 8037E204 0037B144  4E 80 04 21 */	bctrl 
/* 8037E208 0037B148  28 03 00 00 */	cmplwi r3, 0
/* 8037E20C 0037B14C  40 82 00 20 */	bne .L_8037E22C
/* 8037E210 0037B150  3C 60 80 49 */	lis r3, lbl_804935F0@ha
/* 8037E214 0037B154  3C A0 80 49 */	lis r5, lbl_80493600@ha
/* 8037E218 0037B158  38 63 35 F0 */	addi r3, r3, lbl_804935F0@l
/* 8037E21C 0037B15C  38 80 02 25 */	li r4, 0x225
/* 8037E220 0037B160  38 A5 36 00 */	addi r5, r5, lbl_80493600@l
/* 8037E224 0037B164  4C C6 31 82 */	crclr 6
/* 8037E228 0037B168  4B CA C4 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037E22C:
/* 8037E22C 0037B16C  7F E3 FB 78 */	mr r3, r31
/* 8037E230 0037B170  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037E234 0037B174  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8037E238 0037B178  7D 89 03 A6 */	mtctr r12
/* 8037E23C 0037B17C  4E 80 04 21 */	bctrl 
/* 8037E240 0037B180  38 80 00 00 */	li r4, 0
/* 8037E244 0037B184  48 0D 3D 4D */	bl endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
/* 8037E248 0037B188  38 00 00 00 */	li r0, 0
/* 8037E24C 0037B18C  7F E3 FB 78 */	mr r3, r31
/* 8037E250 0037B190  98 1F 01 C7 */	stb r0, 0x1c7(r31)
/* 8037E254 0037B194  98 1F 00 45 */	stb r0, 0x45(r31)
/* 8037E258 0037B198  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037E25C 0037B19C  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037E260 0037B1A0  7D 89 03 A6 */	mtctr r12
/* 8037E264 0037B1A4  4E 80 04 21 */	bctrl 
.L_8037E268:
/* 8037E268 0037B1A8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8037E26C 0037B1AC  38 80 18 01 */	li r4, 0x1801
/* 8037E270 0037B1B0  38 A0 00 00 */	li r5, 0
/* 8037E274 0037B1B4  4B FB A3 BD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8037E278 0037B1B8  48 00 00 F4 */	b .L_8037E36C
.L_8037E27C:
/* 8037E27C 0037B1BC  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8037E280 0037B1C0  54 60 01 09 */	rlwinm. r0, r3, 0, 4, 4
/* 8037E284 0037B1C4  40 82 00 0C */	bne .L_8037E290
/* 8037E288 0037B1C8  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 8037E28C 0037B1CC  41 82 00 6C */	beq .L_8037E2F8
.L_8037E290:
/* 8037E290 0037B1D0  80 1F 01 78 */	lwz r0, 0x178(r31)
/* 8037E294 0037B1D4  2C 00 00 01 */	cmpwi r0, 1
/* 8037E298 0037B1D8  41 82 00 28 */	beq .L_8037E2C0
/* 8037E29C 0037B1DC  C0 22 08 B8 */	lfs f1, lbl_8051EC18@sda21(r2)
/* 8037E2A0 0037B1E0  C0 1F 01 84 */	lfs f0, 0x184(r31)
/* 8037E2A4 0037B1E4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8037E2A8 0037B1E8  40 82 00 0C */	bne .L_8037E2B4
/* 8037E2AC 0037B1EC  C0 02 08 E4 */	lfs f0, lbl_8051EC44@sda21(r2)
/* 8037E2B0 0037B1F0  D0 1F 01 84 */	stfs f0, 0x184(r31)
.L_8037E2B4:
/* 8037E2B4 0037B1F4  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8037E2B8 0037B1F8  48 02 3E E9 */	bl upIndex__Q28Morimura11TIndexGroupFv
/* 8037E2BC 0037B1FC  48 00 00 B0 */	b .L_8037E36C
.L_8037E2C0:
/* 8037E2C0 0037B200  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8037E2C4 0037B204  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8037E2C8 0037B208  2C 00 00 00 */	cmpwi r0, 0
/* 8037E2CC 0037B20C  40 82 00 A0 */	bne .L_8037E36C
/* 8037E2D0 0037B210  88 1F 01 C6 */	lbz r0, 0x1c6(r31)
/* 8037E2D4 0037B214  28 00 00 00 */	cmplwi r0, 0
/* 8037E2D8 0037B218  40 82 00 94 */	bne .L_8037E36C
/* 8037E2DC 0037B21C  38 00 00 01 */	li r0, 1
/* 8037E2E0 0037B220  38 80 18 07 */	li r4, 0x1807
/* 8037E2E4 0037B224  98 1F 01 C6 */	stb r0, 0x1c6(r31)
/* 8037E2E8 0037B228  38 A0 00 00 */	li r5, 0
/* 8037E2EC 0037B22C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8037E2F0 0037B230  4B FB A3 41 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8037E2F4 0037B234  48 00 00 78 */	b .L_8037E36C
.L_8037E2F8:
/* 8037E2F8 0037B238  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 8037E2FC 0037B23C  40 82 00 0C */	bne .L_8037E308
/* 8037E300 0037B240  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 8037E304 0037B244  41 82 00 68 */	beq .L_8037E36C
.L_8037E308:
/* 8037E308 0037B248  80 1F 01 78 */	lwz r0, 0x178(r31)
/* 8037E30C 0037B24C  2C 00 00 02 */	cmpwi r0, 2
/* 8037E310 0037B250  41 82 00 28 */	beq .L_8037E338
/* 8037E314 0037B254  C0 22 08 B8 */	lfs f1, lbl_8051EC18@sda21(r2)
/* 8037E318 0037B258  C0 1F 01 84 */	lfs f0, 0x184(r31)
/* 8037E31C 0037B25C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8037E320 0037B260  40 82 00 0C */	bne .L_8037E32C
/* 8037E324 0037B264  C0 02 09 08 */	lfs f0, lbl_8051EC68@sda21(r2)
/* 8037E328 0037B268  D0 1F 01 84 */	stfs f0, 0x184(r31)
.L_8037E32C:
/* 8037E32C 0037B26C  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8037E330 0037B270  48 02 3E DD */	bl downIndex__Q28Morimura11TIndexGroupFv
/* 8037E334 0037B274  48 00 00 38 */	b .L_8037E36C
.L_8037E338:
/* 8037E338 0037B278  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8037E33C 0037B27C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8037E340 0037B280  2C 00 00 00 */	cmpwi r0, 0
/* 8037E344 0037B284  40 82 00 28 */	bne .L_8037E36C
/* 8037E348 0037B288  88 1F 01 C6 */	lbz r0, 0x1c6(r31)
/* 8037E34C 0037B28C  28 00 00 00 */	cmplwi r0, 0
/* 8037E350 0037B290  40 82 00 1C */	bne .L_8037E36C
/* 8037E354 0037B294  38 00 00 01 */	li r0, 1
/* 8037E358 0037B298  38 80 18 07 */	li r4, 0x1807
/* 8037E35C 0037B29C  98 1F 01 C6 */	stb r0, 0x1c6(r31)
/* 8037E360 0037B2A0  38 A0 00 00 */	li r5, 0
/* 8037E364 0037B2A4  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8037E368 0037B2A8  4B FB A2 C9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8037E36C:
/* 8037E36C 0037B2AC  88 7F 01 C6 */	lbz r3, 0x1c6(r31)
/* 8037E370 0037B2B0  28 03 00 00 */	cmplwi r3, 0
/* 8037E374 0037B2B4  41 82 00 20 */	beq .L_8037E394
/* 8037E378 0037B2B8  38 03 00 01 */	addi r0, r3, 1
/* 8037E37C 0037B2BC  98 1F 01 C6 */	stb r0, 0x1c6(r31)
/* 8037E380 0037B2C0  88 1F 01 C6 */	lbz r0, 0x1c6(r31)
/* 8037E384 0037B2C4  28 00 00 1E */	cmplwi r0, 0x1e
/* 8037E388 0037B2C8  40 81 00 0C */	ble .L_8037E394
/* 8037E38C 0037B2CC  38 00 00 00 */	li r0, 0
/* 8037E390 0037B2D0  98 1F 01 C6 */	stb r0, 0x1c6(r31)
.L_8037E394:
/* 8037E394 0037B2D4  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 8037E398 0037B2D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E39C 0037B2DC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8037E3A0 0037B2E0  7D 89 03 A6 */	mtctr r12
/* 8037E3A4 0037B2E4  4E 80 04 21 */	bctrl 
/* 8037E3A8 0037B2E8  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8037E3AC 0037B2EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E3B0 0037B2F0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8037E3B4 0037B2F4  7D 89 03 A6 */	mtctr r12
/* 8037E3B8 0037B2F8  4E 80 04 21 */	bctrl 
/* 8037E3BC 0037B2FC  88 1F 01 74 */	lbz r0, 0x174(r31)
/* 8037E3C0 0037B300  28 00 00 00 */	cmplwi r0, 0
/* 8037E3C4 0037B304  41 82 00 A0 */	beq .L_8037E464
/* 8037E3C8 0037B308  80 9F 00 B4 */	lwz r4, 0xb4(r31)
/* 8037E3CC 0037B30C  3C 60 69 73 */	lis r3, 0x69737431@ha
/* 8037E3D0 0037B310  C0 3F 02 04 */	lfs f1, 0x204(r31)
/* 8037E3D4 0037B314  38 C3 74 31 */	addi r6, r3, 0x69737431@l
/* 8037E3D8 0037B318  80 64 00 08 */	lwz r3, 8(r4)
/* 8037E3DC 0037B31C  38 A0 4E 6C */	li r5, 0x4e6c
/* 8037E3E0 0037B320  C0 0D 85 C0 */	lfs f0, mListOffsetY__Q28Morimura8THiScore@sda21(r13)
/* 8037E3E4 0037B324  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E3E8 0037B328  EF A1 00 2A */	fadds f29, f1, f0
/* 8037E3EC 0037B32C  C3 9F 02 00 */	lfs f28, 0x200(r31)
/* 8037E3F0 0037B330  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037E3F4 0037B334  7D 89 03 A6 */	mtctr r12
/* 8037E3F8 0037B338  4E 80 04 21 */	bctrl 
/* 8037E3FC 0037B33C  D3 83 00 D4 */	stfs f28, 0xd4(r3)
/* 8037E400 0037B340  D3 A3 00 D8 */	stfs f29, 0xd8(r3)
/* 8037E404 0037B344  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E408 0037B348  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037E40C 0037B34C  7D 89 03 A6 */	mtctr r12
/* 8037E410 0037B350  4E 80 04 21 */	bctrl 
/* 8037E414 0037B354  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 8037E418 0037B358  3C A0 69 63 */	lis r5, 0x69636F6E@ha
/* 8037E41C 0037B35C  3C 80 4E 73 */	lis r4, 0x4E73656C@ha
/* 8037E420 0037B360  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 8037E424 0037B364  80 63 00 08 */	lwz r3, 8(r3)
/* 8037E428 0037B368  38 C5 6F 6E */	addi r6, r5, 0x69636F6E@l
/* 8037E42C 0037B36C  C0 0D 85 C0 */	lfs f0, mListOffsetY__Q28Morimura8THiScore@sda21(r13)
/* 8037E430 0037B370  38 A4 65 6C */	addi r5, r4, 0x4E73656C@l
/* 8037E434 0037B374  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E438 0037B378  EF A1 00 2A */	fadds f29, f1, f0
/* 8037E43C 0037B37C  C3 9F 02 08 */	lfs f28, 0x208(r31)
/* 8037E440 0037B380  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037E444 0037B384  7D 89 03 A6 */	mtctr r12
/* 8037E448 0037B388  4E 80 04 21 */	bctrl 
/* 8037E44C 0037B38C  D3 83 00 D4 */	stfs f28, 0xd4(r3)
/* 8037E450 0037B390  D3 A3 00 D8 */	stfs f29, 0xd8(r3)
/* 8037E454 0037B394  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E458 0037B398  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037E45C 0037B39C  7D 89 03 A6 */	mtctr r12
/* 8037E460 0037B3A0  4E 80 04 21 */	bctrl 
.L_8037E464:
/* 8037E464 0037B3A4  7F E3 FB 78 */	mr r3, r31
/* 8037E468 0037B3A8  48 02 4D E5 */	bl updateList__Q28Morimura11TScrollListFv
/* 8037E46C 0037B3AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037E470 0037B3B0  41 82 00 90 */	beq .L_8037E500
/* 8037E474 0037B3B4  7F E3 FB 78 */	mr r3, r31
/* 8037E478 0037B3B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037E47C 0037B3BC  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037E480 0037B3C0  7D 89 03 A6 */	mtctr r12
/* 8037E484 0037B3C4  4E 80 04 21 */	bctrl 
/* 8037E488 0037B3C8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8037E48C 0037B3CC  38 80 18 02 */	li r4, 0x1802
/* 8037E490 0037B3D0  38 A0 00 00 */	li r5, 0
/* 8037E494 0037B3D4  4B FB A1 9D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8037E498 0037B3D8  80 7F 00 E0 */	lwz r3, 0xe0(r31)
/* 8037E49C 0037B3DC  28 03 00 00 */	cmplwi r3, 0
/* 8037E4A0 0037B3E0  41 82 00 24 */	beq .L_8037E4C4
/* 8037E4A4 0037B3E4  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8037E4A8 0037B3E8  C0 22 09 0C */	lfs f1, lbl_8051EC6C@sda21(r2)
/* 8037E4AC 0037B3EC  54 00 10 3A */	slwi r0, r0, 2
/* 8037E4B0 0037B3F0  C0 42 09 10 */	lfs f2, lbl_8051EC70@sda21(r2)
/* 8037E4B4 0037B3F4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037E4B8 0037B3F8  C0 62 09 14 */	lfs f3, lbl_8051EC74@sda21(r2)
/* 8037E4BC 0037B3FC  C0 82 08 B8 */	lfs f4, lbl_8051EC18@sda21(r2)
/* 8037E4C0 0037B400  4B FA AA 19 */	bl up__Q32og6Screen8ScaleMgrFffff
.L_8037E4C4:
/* 8037E4C4 0037B404  3B A0 00 00 */	li r29, 0
/* 8037E4C8 0037B408  7F FE FB 78 */	mr r30, r31
.L_8037E4CC:
/* 8037E4CC 0037B40C  80 7E 00 E4 */	lwz r3, 0xe4(r30)
/* 8037E4D0 0037B410  38 80 00 01 */	li r4, 1
/* 8037E4D4 0037B414  48 02 36 E9 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 8037E4D8 0037B418  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8037E4DC 0037B41C  38 80 00 01 */	li r4, 1
/* 8037E4E0 0037B420  48 02 36 DD */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 8037E4E4 0037B424  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8037E4E8 0037B428  38 80 00 01 */	li r4, 1
/* 8037E4EC 0037B42C  48 02 36 D1 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 8037E4F0 0037B430  3B BD 00 01 */	addi r29, r29, 1
/* 8037E4F4 0037B434  3B DE 00 04 */	addi r30, r30, 4
/* 8037E4F8 0037B438  2C 1D 00 06 */	cmpwi r29, 6
/* 8037E4FC 0037B43C  41 80 FF D0 */	blt .L_8037E4CC
.L_8037E500:
/* 8037E500 0037B440  C3 9F 01 80 */	lfs f28, 0x180(r31)
/* 8037E504 0037B444  C0 02 09 18 */	lfs f0, lbl_8051EC78@sda21(r2)
/* 8037E508 0037B448  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 8037E50C 0037B44C  40 80 00 08 */	bge .L_8037E514
/* 8037E510 0037B450  C3 82 08 B8 */	lfs f28, lbl_8051EC18@sda21(r2)
.L_8037E514:
/* 8037E514 0037B454  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 8037E518 0037B458  3C 60 65 74 */	lis r3, 0x6574656E@ha
/* 8037E51C 0037B45C  38 C3 65 6E */	addi r6, r3, 0x6574656E@l
/* 8037E520 0037B460  38 A0 4E 68 */	li r5, 0x4e68
/* 8037E524 0037B464  80 64 00 08 */	lwz r3, 8(r4)
/* 8037E528 0037B468  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E52C 0037B46C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037E530 0037B470  7D 89 03 A6 */	mtctr r12
/* 8037E534 0037B474  4E 80 04 21 */	bctrl 
/* 8037E538 0037B478  C0 02 09 1C */	lfs f0, lbl_8051EC7C@sda21(r2)
/* 8037E53C 0037B47C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E540 0037B480  EF 80 07 32 */	fmuls f28, f0, f28
/* 8037E544 0037B484  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037E548 0037B488  FC 00 E0 1E */	fctiwz f0, f28
/* 8037E54C 0037B48C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8037E550 0037B490  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8037E554 0037B494  7D 89 03 A6 */	mtctr r12
/* 8037E558 0037B498  4E 80 04 21 */	bctrl 
/* 8037E55C 0037B49C  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 8037E560 0037B4A0  3C 60 74 74 */	lis r3, 0x7474656E@ha
/* 8037E564 0037B4A4  38 C3 65 6E */	addi r6, r3, 0x7474656E@l
/* 8037E568 0037B4A8  38 A0 4E 6F */	li r5, 0x4e6f
/* 8037E56C 0037B4AC  80 64 00 08 */	lwz r3, 8(r4)
/* 8037E570 0037B4B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E574 0037B4B4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037E578 0037B4B8  7D 89 03 A6 */	mtctr r12
/* 8037E57C 0037B4BC  4E 80 04 21 */	bctrl 
/* 8037E580 0037B4C0  FC 00 E0 1E */	fctiwz f0, f28
/* 8037E584 0037B4C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E588 0037B4C8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037E58C 0037B4CC  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8037E590 0037B4D0  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 8037E594 0037B4D4  7D 89 03 A6 */	mtctr r12
/* 8037E598 0037B4D8  4E 80 04 21 */	bctrl 
/* 8037E59C 0037B4DC  FF 80 E0 1E */	fctiwz f28, f28
/* 8037E5A0 0037B4E0  7F FE FB 78 */	mr r30, r31
/* 8037E5A4 0037B4E4  3B A0 00 00 */	li r29, 0
.L_8037E5A8:
/* 8037E5A8 0037B4E8  80 7E 00 E4 */	lwz r3, 0xe4(r30)
/* 8037E5AC 0037B4EC  4B F8 D2 15 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037E5B0 0037B4F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E5B4 0037B4F4  DB 81 00 28 */	stfd f28, 0x28(r1)
/* 8037E5B8 0037B4F8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037E5BC 0037B4FC  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 8037E5C0 0037B500  7D 89 03 A6 */	mtctr r12
/* 8037E5C4 0037B504  4E 80 04 21 */	bctrl 
/* 8037E5C8 0037B508  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8037E5CC 0037B50C  4B F8 D1 F5 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037E5D0 0037B510  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E5D4 0037B514  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 8037E5D8 0037B518  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037E5DC 0037B51C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8037E5E0 0037B520  7D 89 03 A6 */	mtctr r12
/* 8037E5E4 0037B524  4E 80 04 21 */	bctrl 
/* 8037E5E8 0037B528  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8037E5EC 0037B52C  4B F8 D1 D5 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037E5F0 0037B530  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E5F4 0037B534  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 8037E5F8 0037B538  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037E5FC 0037B53C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8037E600 0037B540  7D 89 03 A6 */	mtctr r12
/* 8037E604 0037B544  4E 80 04 21 */	bctrl 
/* 8037E608 0037B548  3B BD 00 01 */	addi r29, r29, 1
/* 8037E60C 0037B54C  3B DE 00 04 */	addi r30, r30, 4
/* 8037E610 0037B550  2C 1D 00 06 */	cmpwi r29, 6
/* 8037E614 0037B554  41 80 FF 94 */	blt .L_8037E5A8
/* 8037E618 0037B558  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8037E61C 0037B55C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8037E620 0037B560  2C 00 00 00 */	cmpwi r0, 0
/* 8037E624 0037B564  40 82 00 34 */	bne .L_8037E658
/* 8037E628 0037B568  C0 5F 01 80 */	lfs f2, 0x180(r31)
/* 8037E62C 0037B56C  C0 22 09 20 */	lfs f1, lbl_8051EC80@sda21(r2)
/* 8037E630 0037B570  C0 02 08 E4 */	lfs f0, lbl_8051EC44@sda21(r2)
/* 8037E634 0037B574  EC 22 08 2A */	fadds f1, f2, f1
/* 8037E638 0037B578  D0 3F 01 80 */	stfs f1, 0x180(r31)
/* 8037E63C 0037B57C  C0 3F 01 80 */	lfs f1, 0x180(r31)
/* 8037E640 0037B580  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037E644 0037B584  40 81 00 3C */	ble .L_8037E680
/* 8037E648 0037B588  D0 1F 01 80 */	stfs f0, 0x180(r31)
/* 8037E64C 0037B58C  C0 02 08 B8 */	lfs f0, lbl_8051EC18@sda21(r2)
/* 8037E650 0037B590  D0 1F 01 84 */	stfs f0, 0x184(r31)
/* 8037E654 0037B594  48 00 00 2C */	b .L_8037E680
.L_8037E658:
/* 8037E658 0037B598  C0 5F 01 80 */	lfs f2, 0x180(r31)
/* 8037E65C 0037B59C  C0 22 09 24 */	lfs f1, lbl_8051EC84@sda21(r2)
/* 8037E660 0037B5A0  C0 02 09 0C */	lfs f0, lbl_8051EC6C@sda21(r2)
/* 8037E664 0037B5A4  EC 22 00 72 */	fmuls f1, f2, f1
/* 8037E668 0037B5A8  D0 3F 01 80 */	stfs f1, 0x180(r31)
/* 8037E66C 0037B5AC  C0 3F 01 80 */	lfs f1, 0x180(r31)
/* 8037E670 0037B5B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037E674 0037B5B4  40 80 00 0C */	bge .L_8037E680
/* 8037E678 0037B5B8  C0 02 08 B8 */	lfs f0, lbl_8051EC18@sda21(r2)
/* 8037E67C 0037B5BC  D0 1F 01 80 */	stfs f0, 0x180(r31)
.L_8037E680:
/* 8037E680 0037B5C0  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8037E684 0037B5C4  C0 1F 01 88 */	lfs f0, 0x188(r31)
/* 8037E688 0037B5C8  C0 5F 01 80 */	lfs f2, 0x180(r31)
/* 8037E68C 0037B5CC  EC 21 00 2A */	fadds f1, f1, f0
/* 8037E690 0037B5D0  C0 62 08 E4 */	lfs f3, lbl_8051EC44@sda21(r2)
/* 8037E694 0037B5D4  C0 02 08 CC */	lfs f0, lbl_8051EC2C@sda21(r2)
/* 8037E698 0037B5D8  EC 63 10 28 */	fsubs f3, f3, f2
/* 8037E69C 0037B5DC  D0 3F 01 8C */	stfs f1, 0x18c(r31)
/* 8037E6A0 0037B5E0  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8037E6A4 0037B5E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037E6A8 0037B5E8  40 81 00 0C */	ble .L_8037E6B4
/* 8037E6AC 0037B5EC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8037E6B0 0037B5F0  D0 1F 01 8C */	stfs f0, 0x18c(r31)
.L_8037E6B4:
/* 8037E6B4 0037B5F4  88 1F 01 C4 */	lbz r0, 0x1c4(r31)
/* 8037E6B8 0037B5F8  28 00 00 00 */	cmplwi r0, 0
/* 8037E6BC 0037B5FC  40 82 00 E4 */	bne .L_8037E7A0
/* 8037E6C0 0037B600  C0 9F 01 80 */	lfs f4, 0x180(r31)
/* 8037E6C4 0037B604  C0 02 09 18 */	lfs f0, lbl_8051EC78@sda21(r2)
/* 8037E6C8 0037B608  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8037E6CC 0037B60C  40 81 00 0C */	ble .L_8037E6D8
/* 8037E6D0 0037B610  C0 02 09 04 */	lfs f0, lbl_8051EC64@sda21(r2)
/* 8037E6D4 0037B614  EC 84 00 32 */	fmuls f4, f4, f0
.L_8037E6D8:
/* 8037E6D8 0037B618  C0 02 08 E4 */	lfs f0, lbl_8051EC44@sda21(r2)
/* 8037E6DC 0037B61C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8037E6E0 0037B620  40 81 00 08 */	ble .L_8037E6E8
/* 8037E6E4 0037B624  FC 80 00 90 */	fmr f4, f0
.L_8037E6E8:
/* 8037E6E8 0037B628  C0 42 08 B8 */	lfs f2, lbl_8051EC18@sda21(r2)
/* 8037E6EC 0037B62C  FC 02 18 00 */	fcmpu cr0, f2, f3
/* 8037E6F0 0037B630  40 82 00 58 */	bne .L_8037E748
/* 8037E6F4 0037B634  88 1F 01 C5 */	lbz r0, 0x1c5(r31)
/* 8037E6F8 0037B638  28 00 00 00 */	cmplwi r0, 0
/* 8037E6FC 0037B63C  41 82 00 3C */	beq .L_8037E738
/* 8037E700 0037B640  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 8037E704 0037B644  38 60 00 00 */	li r3, 0
/* 8037E708 0037B648  C0 02 08 C8 */	lfs f0, lbl_8051EC28@sda21(r2)
/* 8037E70C 0037B64C  38 00 FF FA */	li r0, -6
/* 8037E710 0037B650  80 9F 00 B8 */	lwz r4, 0xb8(r31)
/* 8037E714 0037B654  EC 20 00 72 */	fmuls f1, f0, f1
/* 8037E718 0037B658  C0 02 08 CC */	lfs f0, lbl_8051EC2C@sda21(r2)
/* 8037E71C 0037B65C  98 64 00 44 */	stb r3, 0x44(r4)
/* 8037E720 0037B660  EC 01 00 24 */	fdivs f0, f1, f0
/* 8037E724 0037B664  B0 04 00 3C */	sth r0, 0x3c(r4)
/* 8037E728 0037B668  D0 44 00 38 */	stfs f2, 0x38(r4)
/* 8037E72C 0037B66C  D0 44 00 34 */	stfs f2, 0x34(r4)
/* 8037E730 0037B670  D0 04 00 40 */	stfs f0, 0x40(r4)
/* 8037E734 0037B674  48 00 00 44 */	b .L_8037E778
.L_8037E738:
/* 8037E738 0037B678  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 8037E73C 0037B67C  D0 43 00 34 */	stfs f2, 0x34(r3)
/* 8037E740 0037B680  D0 43 00 38 */	stfs f2, 0x38(r3)
/* 8037E744 0037B684  48 00 00 34 */	b .L_8037E778
.L_8037E748:
/* 8037E748 0037B688  80 9F 00 B8 */	lwz r4, 0xb8(r31)
/* 8037E74C 0037B68C  38 60 00 00 */	li r3, 0
/* 8037E750 0037B690  38 00 00 01 */	li r0, 1
/* 8037E754 0037B694  C0 22 09 00 */	lfs f1, lbl_8051EC60@sda21(r2)
/* 8037E758 0037B698  B0 64 00 3C */	sth r3, 0x3c(r4)
/* 8037E75C 0037B69C  98 04 00 44 */	stb r0, 0x44(r4)
/* 8037E760 0037B6A0  C0 1F 01 84 */	lfs f0, 0x184(r31)
/* 8037E764 0037B6A4  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 8037E768 0037B6A8  EC 03 00 32 */	fmuls f0, f3, f0
/* 8037E76C 0037B6AC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8037E770 0037B6B0  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 8037E774 0037B6B4  D0 43 00 38 */	stfs f2, 0x38(r3)
.L_8037E778:
/* 8037E778 0037B6B8  C0 02 09 1C */	lfs f0, lbl_8051EC7C@sda21(r2)
/* 8037E77C 0037B6BC  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8037E780 0037B6C0  EC 00 01 32 */	fmuls f0, f0, f4
/* 8037E784 0037B6C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E788 0037B6C8  FC 00 00 1E */	fctiwz f0, f0
/* 8037E78C 0037B6CC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037E790 0037B6D0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8037E794 0037B6D4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8037E798 0037B6D8  7D 89 03 A6 */	mtctr r12
/* 8037E79C 0037B6DC  4E 80 04 21 */	bctrl 
.L_8037E7A0:
/* 8037E7A0 0037B6E0  88 0D 99 CC */	lbz r0, mForceResetParm__Q28Morimura11TScrollList@sda21(r13)
/* 8037E7A4 0037B6E4  28 00 00 00 */	cmplwi r0, 0
/* 8037E7A8 0037B6E8  41 82 00 3C */	beq .L_8037E7E4
/* 8037E7AC 0037B6EC  38 00 00 00 */	li r0, 0
/* 8037E7B0 0037B6F0  3C 60 80 51 */	lis r3, mScrollParm__Q28Morimura8THiScore@ha
/* 8037E7B4 0037B6F4  98 0D 99 CC */	stb r0, mForceResetParm__Q28Morimura11TScrollList@sda21(r13)
/* 8037E7B8 0037B6F8  C4 03 40 30 */	lfsu f0, mScrollParm__Q28Morimura8THiScore@l(r3)
/* 8037E7BC 0037B6FC  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8037E7C0 0037B700  D0 04 00 00 */	stfs f0, 0(r4)
/* 8037E7C4 0037B704  C0 03 00 04 */	lfs f0, 4(r3)
/* 8037E7C8 0037B708  D0 04 00 04 */	stfs f0, 4(r4)
/* 8037E7CC 0037B70C  C0 03 00 08 */	lfs f0, 8(r3)
/* 8037E7D0 0037B710  D0 04 00 08 */	stfs f0, 8(r4)
/* 8037E7D4 0037B714  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8037E7D8 0037B718  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 8037E7DC 0037B71C  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8037E7E0 0037B720  D0 04 00 10 */	stfs f0, 0x10(r4)
.L_8037E7E4:
/* 8037E7E4 0037B724  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8037E7E8 0037B728  C0 2D 85 B8 */	lfs f1, mPictureOffsetY__Q28Morimura8THiScore@sda21(r13)
/* 8037E7EC 0037B72C  C0 43 00 D8 */	lfs f2, 0xd8(r3)
/* 8037E7F0 0037B730  EC 21 10 2A */	fadds f1, f1, f2
/* 8037E7F4 0037B734  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8037E7F8 0037B738  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E7FC 0037B73C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037E800 0037B740  7D 89 03 A6 */	mtctr r12
/* 8037E804 0037B744  4E 80 04 21 */	bctrl 
/* 8037E808 0037B748  80 1F 00 E0 */	lwz r0, 0xe0(r31)
/* 8037E80C 0037B74C  28 00 00 00 */	cmplwi r0, 0
/* 8037E810 0037B750  41 82 00 58 */	beq .L_8037E868
/* 8037E814 0037B754  3B A0 00 00 */	li r29, 0
/* 8037E818 0037B758  3B C0 00 00 */	li r30, 0
/* 8037E81C 0037B75C  48 00 00 3C */	b .L_8037E858
.L_8037E820:
/* 8037E820 0037B760  80 7F 00 E0 */	lwz r3, 0xe0(r31)
/* 8037E824 0037B764  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037E828 0037B768  4B FA A7 5D */	bl calc__Q32og6Screen8ScaleMgrFv
/* 8037E82C 0037B76C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037E830 0037B770  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037E834 0037B774  80 63 00 04 */	lwz r3, 4(r3)
/* 8037E838 0037B778  D0 23 00 CC */	stfs f1, 0xcc(r3)
/* 8037E83C 0037B77C  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 8037E840 0037B780  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E844 0037B784  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037E848 0037B788  7D 89 03 A6 */	mtctr r12
/* 8037E84C 0037B78C  4E 80 04 21 */	bctrl 
/* 8037E850 0037B790  3B DE 00 04 */	addi r30, r30, 4
/* 8037E854 0037B794  3B BD 00 01 */	addi r29, r29, 1
.L_8037E858:
/* 8037E858 0037B798  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037E85C 0037B79C  7C 1D 00 00 */	cmpw r29, r0
/* 8037E860 0037B7A0  41 80 FF C0 */	blt .L_8037E820
/* 8037E864 0037B7A4  48 00 00 54 */	b .L_8037E8B8
.L_8037E868:
/* 8037E868 0037B7A8  C3 82 08 E4 */	lfs f28, lbl_8051EC44@sda21(r2)
/* 8037E86C 0037B7AC  3B A0 00 00 */	li r29, 0
/* 8037E870 0037B7B0  C3 A2 09 04 */	lfs f29, lbl_8051EC64@sda21(r2)
/* 8037E874 0037B7B4  3B C0 00 00 */	li r30, 0
/* 8037E878 0037B7B8  48 00 00 34 */	b .L_8037E8AC
.L_8037E87C:
/* 8037E87C 0037B7BC  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037E880 0037B7C0  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037E884 0037B7C4  80 63 00 04 */	lwz r3, 4(r3)
/* 8037E888 0037B7C8  4B CB A7 E9 */	bl getFirstChildPane__7J2DPaneFv
/* 8037E88C 0037B7CC  D3 83 00 CC */	stfs f28, 0xcc(r3)
/* 8037E890 0037B7D0  D3 A3 00 D0 */	stfs f29, 0xd0(r3)
/* 8037E894 0037B7D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E898 0037B7D8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037E89C 0037B7DC  7D 89 03 A6 */	mtctr r12
/* 8037E8A0 0037B7E0  4E 80 04 21 */	bctrl 
/* 8037E8A4 0037B7E4  3B DE 00 04 */	addi r30, r30, 4
/* 8037E8A8 0037B7E8  3B BD 00 01 */	addi r29, r29, 1
.L_8037E8AC:
/* 8037E8AC 0037B7EC  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037E8B0 0037B7F0  7C 1D 00 00 */	cmpw r29, r0
/* 8037E8B4 0037B7F4  41 80 FF C8 */	blt .L_8037E87C
.L_8037E8B8:
/* 8037E8B8 0037B7F8  88 1F 01 74 */	lbz r0, 0x174(r31)
/* 8037E8BC 0037B7FC  28 00 00 00 */	cmplwi r0, 0
/* 8037E8C0 0037B800  41 82 00 60 */	beq .L_8037E920
/* 8037E8C4 0037B804  C3 A2 09 14 */	lfs f29, lbl_8051EC74@sda21(r2)
/* 8037E8C8 0037B808  3B A0 00 00 */	li r29, 0
/* 8037E8CC 0037B80C  3B C0 00 00 */	li r30, 0
/* 8037E8D0 0037B810  48 00 00 44 */	b .L_8037E914
.L_8037E8D4:
/* 8037E8D4 0037B814  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037E8D8 0037B818  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8037E8DC 0037B81C  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037E8E0 0037B820  FC 20 00 50 */	fneg f1, f0
/* 8037E8E4 0037B824  80 83 00 04 */	lwz r4, 4(r3)
/* 8037E8E8 0037B828  80 63 00 08 */	lwz r3, 8(r3)
/* 8037E8EC 0037B82C  C0 04 00 D4 */	lfs f0, 0xd4(r4)
/* 8037E8F0 0037B830  EC 3D 00 72 */	fmuls f1, f29, f1
/* 8037E8F4 0037B834  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8037E8F8 0037B838  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8037E8FC 0037B83C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037E900 0037B840  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037E904 0037B844  7D 89 03 A6 */	mtctr r12
/* 8037E908 0037B848  4E 80 04 21 */	bctrl 
/* 8037E90C 0037B84C  3B DE 00 04 */	addi r30, r30, 4
/* 8037E910 0037B850  3B BD 00 01 */	addi r29, r29, 1
.L_8037E914:
/* 8037E914 0037B854  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037E918 0037B858  7C 1D 00 00 */	cmpw r29, r0
/* 8037E91C 0037B85C  41 80 FF B8 */	blt .L_8037E8D4
.L_8037E920:
/* 8037E920 0037B860  80 1F 00 C0 */	lwz r0, 0xc0(r31)
/* 8037E924 0037B864  28 00 00 00 */	cmplwi r0, 0
/* 8037E928 0037B868  41 82 02 1C */	beq .L_8037EB44
/* 8037E92C 0037B86C  C0 5F 01 90 */	lfs f2, 0x190(r31)
/* 8037E930 0037B870  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 8037E934 0037B874  C0 02 08 CC */	lfs f0, lbl_8051EC2C@sda21(r2)
/* 8037E938 0037B878  EC 22 08 2A */	fadds f1, f2, f1
/* 8037E93C 0037B87C  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 8037E940 0037B880  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8037E944 0037B884  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037E948 0037B888  40 81 00 0C */	ble .L_8037E954
/* 8037E94C 0037B88C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8037E950 0037B890  D0 1F 01 90 */	stfs f0, 0x190(r31)
.L_8037E954:
/* 8037E954 0037B894  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8037E958 0037B898  C0 02 08 B8 */	lfs f0, lbl_8051EC18@sda21(r2)
/* 8037E95C 0037B89C  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 8037E960 0037B8A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037E964 0037B8A4  40 80 00 30 */	bge .L_8037E994
/* 8037E968 0037B8A8  C0 02 09 2C */	lfs f0, lbl_8051EC8C@sda21(r2)
/* 8037E96C 0037B8AC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8037E970 0037B8B0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8037E974 0037B8B4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8037E978 0037B8B8  FC 00 00 1E */	fctiwz f0, f0
/* 8037E97C 0037B8BC  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8037E980 0037B8C0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8037E984 0037B8C4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8037E988 0037B8C8  7C 03 04 2E */	lfsx f0, r3, r0
/* 8037E98C 0037B8CC  FC 20 00 50 */	fneg f1, f0
/* 8037E990 0037B8D0  48 00 00 28 */	b .L_8037E9B8
.L_8037E994:
/* 8037E994 0037B8D4  C0 02 09 30 */	lfs f0, lbl_8051EC90@sda21(r2)
/* 8037E998 0037B8D8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8037E99C 0037B8DC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8037E9A0 0037B8E0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8037E9A4 0037B8E4  FC 00 00 1E */	fctiwz f0, f0
/* 8037E9A8 0037B8E8  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8037E9AC 0037B8EC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8037E9B0 0037B8F0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8037E9B4 0037B8F4  7C 23 04 2E */	lfsx f1, r3, r0
.L_8037E9B8:
/* 8037E9B8 0037B8F8  C0 02 09 28 */	lfs f0, lbl_8051EC88@sda21(r2)
/* 8037E9BC 0037B8FC  C3 A2 08 B8 */	lfs f29, lbl_8051EC18@sda21(r2)
/* 8037E9C0 0037B900  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8037E9C4 0037B904  D0 1F 01 9C */	stfs f0, 0x19c(r31)
/* 8037E9C8 0037B908  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8037E9CC 0037B90C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037E9D0 0037B910  54 00 10 3A */	slwi r0, r0, 2
/* 8037E9D4 0037B914  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037E9D8 0037B918  80 63 00 04 */	lwz r3, 4(r3)
/* 8037E9DC 0037B91C  4B CB A6 95 */	bl getFirstChildPane__7J2DPaneFv
/* 8037E9E0 0037B920  88 1F 01 74 */	lbz r0, 0x174(r31)
/* 8037E9E4 0037B924  7C 7D 1B 78 */	mr r29, r3
/* 8037E9E8 0037B928  28 00 00 00 */	cmplwi r0, 0
/* 8037E9EC 0037B92C  41 82 00 28 */	beq .L_8037EA14
/* 8037E9F0 0037B930  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8037E9F4 0037B934  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8037E9F8 0037B938  FC 00 00 50 */	fneg f0, f0
/* 8037E9FC 0037B93C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037EA00 0037B940  54 00 10 3A */	slwi r0, r0, 2
/* 8037EA04 0037B944  C0 22 09 14 */	lfs f1, lbl_8051EC74@sda21(r2)
/* 8037EA08 0037B948  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037EA0C 0037B94C  EF A1 00 32 */	fmuls f29, f1, f0
/* 8037EA10 0037B950  83 A3 00 08 */	lwz r29, 8(r3)
.L_8037EA14:
/* 8037EA14 0037B954  7F A3 EB 78 */	mr r3, r29
/* 8037EA18 0037B958  38 80 00 04 */	li r4, 4
/* 8037EA1C 0037B95C  4B CB A2 A1 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8037EA20 0037B960  3B C0 00 00 */	li r30, 0
/* 8037EA24 0037B964  48 00 01 14 */	b .L_8037EB38
.L_8037EA28:
/* 8037EA28 0037B968  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8037EA2C 0037B96C  2C 00 00 02 */	cmpwi r0, 2
/* 8037EA30 0037B970  41 82 00 3C */	beq .L_8037EA6C
/* 8037EA34 0037B974  40 80 00 14 */	bge .L_8037EA48
/* 8037EA38 0037B978  2C 00 00 00 */	cmpwi r0, 0
/* 8037EA3C 0037B97C  41 82 00 18 */	beq .L_8037EA54
/* 8037EA40 0037B980  40 80 00 20 */	bge .L_8037EA60
/* 8037EA44 0037B984  48 00 00 7C */	b .L_8037EAC0
.L_8037EA48:
/* 8037EA48 0037B988  2C 00 00 04 */	cmpwi r0, 4
/* 8037EA4C 0037B98C  40 80 00 74 */	bge .L_8037EAC0
/* 8037EA50 0037B990  48 00 00 48 */	b .L_8037EA98
.L_8037EA54:
/* 8037EA54 0037B994  C3 E2 09 34 */	lfs f31, lbl_8051EC94@sda21(r2)
/* 8037EA58 0037B998  C3 C2 08 B8 */	lfs f30, lbl_8051EC18@sda21(r2)
/* 8037EA5C 0037B99C  48 00 00 64 */	b .L_8037EAC0
.L_8037EA60:
/* 8037EA60 0037B9A0  C3 E2 09 10 */	lfs f31, lbl_8051EC70@sda21(r2)
/* 8037EA64 0037B9A4  C3 C2 08 B8 */	lfs f30, lbl_8051EC18@sda21(r2)
/* 8037EA68 0037B9A8  48 00 00 58 */	b .L_8037EAC0
.L_8037EA6C:
/* 8037EA6C 0037B9AC  88 1F 01 74 */	lbz r0, 0x174(r31)
/* 8037EA70 0037B9B0  C3 E2 09 34 */	lfs f31, lbl_8051EC94@sda21(r2)
/* 8037EA74 0037B9B4  28 00 00 00 */	cmplwi r0, 0
/* 8037EA78 0037B9B8  C3 C2 08 B8 */	lfs f30, lbl_8051EC18@sda21(r2)
/* 8037EA7C 0037B9BC  41 82 00 44 */	beq .L_8037EAC0
/* 8037EA80 0037B9C0  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 8037EA84 0037B9C4  C0 1D 00 24 */	lfs f0, 0x24(r29)
/* 8037EA88 0037B9C8  C0 42 09 04 */	lfs f2, lbl_8051EC64@sda21(r2)
/* 8037EA8C 0037B9CC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8037EA90 0037B9D0  EF C2 F0 3A */	fmadds f30, f2, f0, f30
/* 8037EA94 0037B9D4  48 00 00 2C */	b .L_8037EAC0
.L_8037EA98:
/* 8037EA98 0037B9D8  88 1F 01 74 */	lbz r0, 0x174(r31)
/* 8037EA9C 0037B9DC  C3 E2 09 10 */	lfs f31, lbl_8051EC70@sda21(r2)
/* 8037EAA0 0037B9E0  28 00 00 00 */	cmplwi r0, 0
/* 8037EAA4 0037B9E4  C3 C2 08 B8 */	lfs f30, lbl_8051EC18@sda21(r2)
/* 8037EAA8 0037B9E8  41 82 00 18 */	beq .L_8037EAC0
/* 8037EAAC 0037B9EC  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 8037EAB0 0037B9F0  C0 1D 00 24 */	lfs f0, 0x24(r29)
/* 8037EAB4 0037B9F4  C0 42 09 04 */	lfs f2, lbl_8051EC64@sda21(r2)
/* 8037EAB8 0037B9F8  EC 01 00 28 */	fsubs f0, f1, f0
/* 8037EABC 0037B9FC  EF C2 F0 3A */	fmadds f30, f2, f0, f30
.L_8037EAC0:
/* 8037EAC0 0037BA00  7F A4 EB 78 */	mr r4, r29
/* 8037EAC4 0037BA04  38 61 00 14 */	addi r3, r1, 0x14
/* 8037EAC8 0037BA08  57 C5 06 3E */	clrlwi r5, r30, 0x18
/* 8037EACC 0037BA0C  4B CB A4 CD */	bl getGlbVtx__7J2DPaneCFUc
/* 8037EAD0 0037BA10  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8037EAD4 0037BA14  7F A4 EB 78 */	mr r4, r29
/* 8037EAD8 0037BA18  C0 1D 00 8C */	lfs f0, 0x8c(r29)
/* 8037EADC 0037BA1C  38 61 00 08 */	addi r3, r1, 8
/* 8037EAE0 0037BA20  57 C5 06 3E */	clrlwi r5, r30, 0x18
/* 8037EAE4 0037BA24  EF 81 00 28 */	fsubs f28, f1, f0
/* 8037EAE8 0037BA28  4B CB A4 B1 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037EAEC 0037BA2C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8037EAF0 0037BA30  57 C3 15 BA */	rlwinm r3, r30, 2, 0x16, 0x1d
/* 8037EAF4 0037BA34  C0 3D 00 9C */	lfs f1, 0x9c(r29)
/* 8037EAF8 0037BA38  38 03 00 C4 */	addi r0, r3, 0xc4
/* 8037EAFC 0037BA3C  C0 7F 01 9C */	lfs f3, 0x19c(r31)
/* 8037EB00 0037BA40  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8037EB04 0037BA44  EC 22 08 28 */	fsubs f1, f2, f1
/* 8037EB08 0037BA48  7C 7F 00 2E */	lwzx r3, r31, r0
/* 8037EB0C 0037BA4C  EC 03 07 3A */	fmadds f0, f3, f28, f0
/* 8037EB10 0037BA50  EC 23 F0 7A */	fmadds f1, f3, f1, f30
/* 8037EB14 0037BA54  EC 1F 00 2A */	fadds f0, f31, f0
/* 8037EB18 0037BA58  EC 3D 08 2A */	fadds f1, f29, f1
/* 8037EB1C 0037BA5C  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8037EB20 0037BA60  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8037EB24 0037BA64  81 83 00 00 */	lwz r12, 0(r3)
/* 8037EB28 0037BA68  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037EB2C 0037BA6C  7D 89 03 A6 */	mtctr r12
/* 8037EB30 0037BA70  4E 80 04 21 */	bctrl 
/* 8037EB34 0037BA74  3B DE 00 01 */	addi r30, r30, 1
.L_8037EB38:
/* 8037EB38 0037BA78  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8037EB3C 0037BA7C  28 00 00 04 */	cmplwi r0, 4
/* 8037EB40 0037BA80  41 80 FE E8 */	blt .L_8037EA28
.L_8037EB44:
/* 8037EB44 0037BA84  38 60 00 00 */	li r3, 0
/* 8037EB48 0037BA88  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8037EB4C 0037BA8C  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8037EB50 0037BA90  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 8037EB54 0037BA94  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8037EB58 0037BA98  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 8037EB5C 0037BA9C  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8037EB60 0037BAA0  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 8037EB64 0037BAA4  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8037EB68 0037BAA8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8037EB6C 0037BAAC  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8037EB70 0037BAB0  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8037EB74 0037BAB4  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8037EB78 0037BAB8  7C 08 03 A6 */	mtlr r0
/* 8037EB7C 0037BABC  38 21 00 90 */	addi r1, r1, 0x90
/* 8037EB80 0037BAC0  4E 80 00 20 */	blr 
.endfn doUpdate__Q28Morimura8THiScoreFv

.fn update__Q28Morimura18THiScoreListScreenFv, weak
/* 8037EB84 0037BAC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037EB88 0037BAC8  7C 08 02 A6 */	mflr r0
/* 8037EB8C 0037BACC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037EB90 0037BAD0  80 63 00 08 */	lwz r3, 8(r3)
/* 8037EB94 0037BAD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037EB98 0037BAD8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8037EB9C 0037BADC  7D 89 03 A6 */	mtctr r12
/* 8037EBA0 0037BAE0  4E 80 04 21 */	bctrl 
/* 8037EBA4 0037BAE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037EBA8 0037BAE8  7C 08 03 A6 */	mtlr r0
/* 8037EBAC 0037BAEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8037EBB0 0037BAF0  4E 80 00 20 */	blr 
.endfn update__Q28Morimura18THiScoreListScreenFv

.fn doDraw__Q28Morimura8THiScoreFR8Graphics, global
/* 8037EBB4 0037BAF4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8037EBB8 0037BAF8  7C 08 02 A6 */	mflr r0
/* 8037EBBC 0037BAFC  90 01 00 54 */	stw r0, 0x54(r1)
/* 8037EBC0 0037BB00  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8037EBC4 0037BB04  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8037EBC8 0037BB08  7C 9E 23 78 */	mr r30, r4
/* 8037EBCC 0037BB0C  3B FE 01 90 */	addi r31, r30, 0x190
/* 8037EBD0 0037BB10  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8037EBD4 0037BB14  7C 7D 1B 78 */	mr r29, r3
/* 8037EBD8 0037BB18  88 03 01 C7 */	lbz r0, 0x1c7(r3)
/* 8037EBDC 0037BB1C  28 00 00 00 */	cmplwi r0, 0
/* 8037EBE0 0037BB20  41 82 00 64 */	beq .L_8037EC44
/* 8037EBE4 0037BB24  38 7E 00 BC */	addi r3, r30, 0xbc
/* 8037EBE8 0037BB28  81 9E 00 BC */	lwz r12, 0xbc(r30)
/* 8037EBEC 0037BB2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037EBF0 0037BB30  7D 89 03 A6 */	mtctr r12
/* 8037EBF4 0037BB34  4E 80 04 21 */	bctrl 
/* 8037EBF8 0037BB38  48 0A 93 09 */	bl dirtyInitGX__8GraphicsFv
/* 8037EBFC 0037BB3C  80 7D 00 B8 */	lwz r3, 0xb8(r29)
/* 8037EC00 0037BB40  81 83 00 00 */	lwz r12, 0(r3)
/* 8037EC04 0037BB44  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8037EC08 0037BB48  7D 89 03 A6 */	mtctr r12
/* 8037EC0C 0037BB4C  4E 80 04 21 */	bctrl 
/* 8037EC10 0037BB50  80 7D 00 B8 */	lwz r3, 0xb8(r29)
/* 8037EC14 0037BB54  38 80 00 00 */	li r4, 0
/* 8037EC18 0037BB58  38 A0 00 00 */	li r5, 0
/* 8037EC1C 0037BB5C  38 C0 00 20 */	li r6, 0x20
/* 8037EC20 0037BB60  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8037EC24 0037BB64  38 E0 00 00 */	li r7, 0
/* 8037EC28 0037BB68  39 00 00 00 */	li r8, 0
/* 8037EC2C 0037BB6C  4B CB 4A 55 */	bl capture__10JUTTextureFii9_GXTexFmtbUc
/* 8037EC30 0037BB70  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037EC34 0037BB74  7F E3 FB 78 */	mr r3, r31
/* 8037EC38 0037BB78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037EC3C 0037BB7C  7D 89 03 A6 */	mtctr r12
/* 8037EC40 0037BB80  4E 80 04 21 */	bctrl 
.L_8037EC44:
/* 8037EC44 0037BB84  80 7D 00 B4 */	lwz r3, 0xb4(r29)
/* 8037EC48 0037BB88  7F C4 F3 78 */	mr r4, r30
/* 8037EC4C 0037BB8C  7F E5 FB 78 */	mr r5, r31
/* 8037EC50 0037BB90  81 83 00 00 */	lwz r12, 0(r3)
/* 8037EC54 0037BB94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8037EC58 0037BB98  7D 89 03 A6 */	mtctr r12
/* 8037EC5C 0037BB9C  4E 80 04 21 */	bctrl 
/* 8037EC60 0037BBA0  80 7D 00 7C */	lwz r3, 0x7c(r29)
/* 8037EC64 0037BBA4  7F C4 F3 78 */	mr r4, r30
/* 8037EC68 0037BBA8  7F E5 FB 78 */	mr r5, r31
/* 8037EC6C 0037BBAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037EC70 0037BBB0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8037EC74 0037BBB4  7D 89 03 A6 */	mtctr r12
/* 8037EC78 0037BBB8  4E 80 04 21 */	bctrl 
/* 8037EC7C 0037BBBC  88 7D 00 44 */	lbz r3, 0x44(r29)
/* 8037EC80 0037BBC0  38 00 FF FF */	li r0, -1
/* 8037EC84 0037BBC4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8037EC88 0037BBC8  38 00 00 00 */	li r0, 0
/* 8037EC8C 0037BBCC  21 03 00 FF */	subfic r8, r3, 0xff
/* 8037EC90 0037BBD0  7F E3 FB 78 */	mr r3, r31
/* 8037EC94 0037BBD4  98 01 00 1C */	stb r0, 0x1c(r1)
/* 8037EC98 0037BBD8  38 81 00 0C */	addi r4, r1, 0xc
/* 8037EC9C 0037BBDC  38 A1 00 10 */	addi r5, r1, 0x10
/* 8037ECA0 0037BBE0  38 C1 00 14 */	addi r6, r1, 0x14
/* 8037ECA4 0037BBE4  98 01 00 1D */	stb r0, 0x1d(r1)
/* 8037ECA8 0037BBE8  38 E1 00 18 */	addi r7, r1, 0x18
/* 8037ECAC 0037BBEC  98 01 00 1E */	stb r0, 0x1e(r1)
/* 8037ECB0 0037BBF0  99 01 00 1F */	stb r8, 0x1f(r1)
/* 8037ECB4 0037BBF4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8037ECB8 0037BBF8  90 01 00 08 */	stw r0, 8(r1)
/* 8037ECBC 0037BBFC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8037ECC0 0037BC00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037ECC4 0037BC04  90 01 00 10 */	stw r0, 0x10(r1)
/* 8037ECC8 0037BC08  90 01 00 0C */	stw r0, 0xc(r1)
/* 8037ECCC 0037BC0C  4B CB 79 C1 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 8037ECD0 0037BC10  38 60 00 00 */	li r3, 0
/* 8037ECD4 0037BC14  4B D6 A4 85 */	bl GXSetAlphaUpdate
/* 8037ECD8 0037BC18  48 0A 45 4D */	bl getRenderModeObj__6SystemFv
/* 8037ECDC 0037BC1C  A3 C3 00 06 */	lhz r30, 6(r3)
/* 8037ECE0 0037BC20  48 0A 45 45 */	bl getRenderModeObj__6SystemFv
/* 8037ECE4 0037BC24  A0 83 00 04 */	lhz r4, 4(r3)
/* 8037ECE8 0037BC28  3C 00 43 30 */	lis r0, 0x4330
/* 8037ECEC 0037BC2C  C0 62 08 B8 */	lfs f3, lbl_8051EC18@sda21(r2)
/* 8037ECF0 0037BC30  7F E3 FB 78 */	mr r3, r31
/* 8037ECF4 0037BC34  90 81 00 34 */	stw r4, 0x34(r1)
/* 8037ECF8 0037BC38  38 81 00 20 */	addi r4, r1, 0x20
/* 8037ECFC 0037BC3C  C8 42 09 38 */	lfd f2, lbl_8051EC98@sda21(r2)
/* 8037ED00 0037BC40  90 01 00 30 */	stw r0, 0x30(r1)
/* 8037ED04 0037BC44  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8037ED08 0037BC48  93 C1 00 3C */	stw r30, 0x3c(r1)
/* 8037ED0C 0037BC4C  EC 20 10 28 */	fsubs f1, f0, f2
/* 8037ED10 0037BC50  90 01 00 38 */	stw r0, 0x38(r1)
/* 8037ED14 0037BC54  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8037ED18 0037BC58  EC 23 08 2A */	fadds f1, f3, f1
/* 8037ED1C 0037BC5C  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8037ED20 0037BC60  EC 00 10 28 */	fsubs f0, f0, f2
/* 8037ED24 0037BC64  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 8037ED28 0037BC68  EC 03 00 2A */	fadds f0, f3, f0
/* 8037ED2C 0037BC6C  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8037ED30 0037BC70  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8037ED34 0037BC74  4B CB 7A A1 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 8037ED38 0037BC78  38 60 00 01 */	li r3, 1
/* 8037ED3C 0037BC7C  4B D6 A4 1D */	bl GXSetAlphaUpdate
/* 8037ED40 0037BC80  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8037ED44 0037BC84  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8037ED48 0037BC88  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8037ED4C 0037BC8C  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8037ED50 0037BC90  7C 08 03 A6 */	mtlr r0
/* 8037ED54 0037BC94  38 21 00 50 */	addi r1, r1, 0x50
/* 8037ED58 0037BC98  4E 80 00 20 */	blr 
.endfn doDraw__Q28Morimura8THiScoreFR8Graphics

.fn paneInit__Q28Morimura8THiScoreFv, global
/* 8037ED5C 0037BC9C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037ED60 0037BCA0  7C 08 02 A6 */	mflr r0
/* 8037ED64 0037BCA4  3C 80 80 4E */	lis r4, mPicTexture__Q28Morimura8THiScore@ha
/* 8037ED68 0037BCA8  38 A0 00 00 */	li r5, 0
/* 8037ED6C 0037BCAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037ED70 0037BCB0  38 84 41 40 */	addi r4, r4, mPicTexture__Q28Morimura8THiScore@l
/* 8037ED74 0037BCB4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037ED78 0037BCB8  7C 7F 1B 78 */	mr r31, r3
/* 8037ED7C 0037BCBC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8037ED80 0037BCC0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8037ED84 0037BCC4  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 8037ED88 0037BCC8  80 84 00 00 */	lwz r4, 0(r4)
/* 8037ED8C 0037BCCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037ED90 0037BCD0  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8037ED94 0037BCD4  7D 89 03 A6 */	mtctr r12
/* 8037ED98 0037BCD8  4E 80 04 21 */	bctrl 
/* 8037ED9C 0037BCDC  80 1F 00 90 */	lwz r0, 0x90(r31)
/* 8037EDA0 0037BCE0  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037EDA4 0037BCE4  54 00 10 3A */	slwi r0, r0, 2
/* 8037EDA8 0037BCE8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037EDAC 0037BCEC  80 63 00 08 */	lwz r3, 8(r3)
/* 8037EDB0 0037BCF0  4B CB A2 C1 */	bl getFirstChildPane__7J2DPaneFv
/* 8037EDB4 0037BCF4  7C 60 1B 78 */	mr r0, r3
/* 8037EDB8 0037BCF8  38 60 00 7C */	li r3, 0x7c
/* 8037EDBC 0037BCFC  7C 1D 03 78 */	mr r29, r0
/* 8037EDC0 0037BD00  4B CA 50 E5 */	bl __nw__FUl
/* 8037EDC4 0037BD04  7C 60 1B 79 */	or. r0, r3, r3
/* 8037EDC8 0037BD08  41 82 00 0C */	beq .L_8037EDD4
/* 8037EDCC 0037BD0C  4B CC C2 71 */	bl __ct__12J2DTevBlock2Fv
/* 8037EDD0 0037BD10  7C 60 1B 78 */	mr r0, r3
.L_8037EDD4:
/* 8037EDD4 0037BD14  90 1F 01 C8 */	stw r0, 0x1c8(r31)
/* 8037EDD8 0037BD18  7F A3 EB 78 */	mr r3, r29
/* 8037EDDC 0037BD1C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037EDE0 0037BD20  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8037EDE4 0037BD24  7D 89 03 A6 */	mtctr r12
/* 8037EDE8 0037BD28  4E 80 04 21 */	bctrl 
/* 8037EDEC 0037BD2C  80 A3 00 70 */	lwz r5, 0x70(r3)
/* 8037EDF0 0037BD30  7F E3 FB 78 */	mr r3, r31
/* 8037EDF4 0037BD34  80 9F 01 C8 */	lwz r4, 0x1c8(r31)
/* 8037EDF8 0037BD38  48 00 12 A5 */	bl copyTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock
/* 8037EDFC 0037BD3C  80 7F 01 C8 */	lwz r3, 0x1c8(r31)
/* 8037EE00 0037BD40  38 80 00 00 */	li r4, 0
/* 8037EE04 0037BD44  81 83 00 00 */	lwz r12, 0(r3)
/* 8037EE08 0037BD48  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8037EE0C 0037BD4C  7D 89 03 A6 */	mtctr r12
/* 8037EE10 0037BD50  4E 80 04 21 */	bctrl 
/* 8037EE14 0037BD54  A8 03 00 00 */	lha r0, 0(r3)
/* 8037EE18 0037BD58  38 80 00 01 */	li r4, 1
/* 8037EE1C 0037BD5C  B0 1F 01 E8 */	sth r0, 0x1e8(r31)
/* 8037EE20 0037BD60  A8 03 00 02 */	lha r0, 2(r3)
/* 8037EE24 0037BD64  B0 1F 01 EA */	sth r0, 0x1ea(r31)
/* 8037EE28 0037BD68  A8 03 00 04 */	lha r0, 4(r3)
/* 8037EE2C 0037BD6C  B0 1F 01 EC */	sth r0, 0x1ec(r31)
/* 8037EE30 0037BD70  A8 03 00 06 */	lha r0, 6(r3)
/* 8037EE34 0037BD74  B0 1F 01 EE */	sth r0, 0x1ee(r31)
/* 8037EE38 0037BD78  80 7F 01 C8 */	lwz r3, 0x1c8(r31)
/* 8037EE3C 0037BD7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037EE40 0037BD80  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8037EE44 0037BD84  7D 89 03 A6 */	mtctr r12
/* 8037EE48 0037BD88  4E 80 04 21 */	bctrl 
/* 8037EE4C 0037BD8C  A8 03 00 00 */	lha r0, 0(r3)
/* 8037EE50 0037BD90  B0 1F 01 F0 */	sth r0, 0x1f0(r31)
/* 8037EE54 0037BD94  A8 03 00 02 */	lha r0, 2(r3)
/* 8037EE58 0037BD98  B0 1F 01 F2 */	sth r0, 0x1f2(r31)
/* 8037EE5C 0037BD9C  A8 03 00 04 */	lha r0, 4(r3)
/* 8037EE60 0037BDA0  B0 1F 01 F4 */	sth r0, 0x1f4(r31)
/* 8037EE64 0037BDA4  A8 03 00 06 */	lha r0, 6(r3)
/* 8037EE68 0037BDA8  38 60 00 18 */	li r3, 0x18
/* 8037EE6C 0037BDAC  B0 1F 01 F6 */	sth r0, 0x1f6(r31)
/* 8037EE70 0037BDB0  80 1F 00 90 */	lwz r0, 0x90(r31)
/* 8037EE74 0037BDB4  80 9F 00 88 */	lwz r4, 0x88(r31)
/* 8037EE78 0037BDB8  54 00 10 3A */	slwi r0, r0, 2
/* 8037EE7C 0037BDBC  7C 84 00 2E */	lwzx r4, r4, r0
/* 8037EE80 0037BDC0  83 A4 00 08 */	lwz r29, 8(r4)
/* 8037EE84 0037BDC4  4B CA 50 21 */	bl __nw__FUl
/* 8037EE88 0037BDC8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8037EE8C 0037BDCC  41 82 00 4C */	beq .L_8037EED8
/* 8037EE90 0037BDD0  3C A0 80 4A */	lis r5, __vt__13J2DColorBlock@ha
/* 8037EE94 0037BDD4  3C 80 80 04 */	lis r4, __ct__Q28JUtility6TColorFv@ha
/* 8037EE98 0037BDD8  38 05 11 A4 */	addi r0, r5, __vt__13J2DColorBlock@l
/* 8037EE9C 0037BDDC  38 C0 00 04 */	li r6, 4
/* 8037EEA0 0037BDE0  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8037EEA4 0037BDE4  38 A0 00 00 */	li r5, 0
/* 8037EEA8 0037BDE8  38 84 9B 94 */	addi r4, r4, __ct__Q28JUtility6TColorFv@l
/* 8037EEAC 0037BDEC  38 E0 00 02 */	li r7, 2
/* 8037EEB0 0037BDF0  4B D4 29 8D */	bl __construct_array
/* 8037EEB4 0037BDF4  3C 80 80 05 */	lis r4, __ct__12J2DColorChanFv@ha
/* 8037EEB8 0037BDF8  38 7E 00 0A */	addi r3, r30, 0xa
/* 8037EEBC 0037BDFC  38 84 20 2C */	addi r4, r4, __ct__12J2DColorChanFv@l
/* 8037EEC0 0037BE00  38 A0 00 00 */	li r5, 0
/* 8037EEC4 0037BE04  38 C0 00 02 */	li r6, 2
/* 8037EEC8 0037BE08  38 E0 00 04 */	li r7, 4
/* 8037EECC 0037BE0C  4B D4 29 71 */	bl __construct_array
/* 8037EED0 0037BE10  7F C3 F3 78 */	mr r3, r30
/* 8037EED4 0037BE14  4B CC AC 4D */	bl initialize__13J2DColorBlockFv
.L_8037EED8:
/* 8037EED8 0037BE18  93 DF 01 D0 */	stw r30, 0x1d0(r31)
/* 8037EEDC 0037BE1C  7F A3 EB 78 */	mr r3, r29
/* 8037EEE0 0037BE20  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037EEE4 0037BE24  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8037EEE8 0037BE28  7D 89 03 A6 */	mtctr r12
/* 8037EEEC 0037BE2C  4E 80 04 21 */	bctrl 
/* 8037EEF0 0037BE30  7C 65 1B 78 */	mr r5, r3
/* 8037EEF4 0037BE34  80 9F 01 D0 */	lwz r4, 0x1d0(r31)
/* 8037EEF8 0037BE38  7F E3 FB 78 */	mr r3, r31
/* 8037EEFC 0037BE3C  38 A5 00 10 */	addi r5, r5, 0x10
/* 8037EF00 0037BE40  48 00 15 D5 */	bl copyColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock
/* 8037EF04 0037BE44  80 1F 00 98 */	lwz r0, 0x98(r31)
/* 8037EF08 0037BE48  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037EF0C 0037BE4C  54 00 10 3A */	slwi r0, r0, 2
/* 8037EF10 0037BE50  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037EF14 0037BE54  80 63 00 08 */	lwz r3, 8(r3)
/* 8037EF18 0037BE58  4B CB A1 59 */	bl getFirstChildPane__7J2DPaneFv
/* 8037EF1C 0037BE5C  7C 7D 1B 78 */	mr r29, r3
/* 8037EF20 0037BE60  38 60 00 7C */	li r3, 0x7c
/* 8037EF24 0037BE64  4B CA 4F 81 */	bl __nw__FUl
/* 8037EF28 0037BE68  7C 60 1B 79 */	or. r0, r3, r3
/* 8037EF2C 0037BE6C  41 82 00 0C */	beq .L_8037EF38
/* 8037EF30 0037BE70  4B CC C1 0D */	bl __ct__12J2DTevBlock2Fv
/* 8037EF34 0037BE74  7C 60 1B 78 */	mr r0, r3
.L_8037EF38:
/* 8037EF38 0037BE78  90 1F 01 CC */	stw r0, 0x1cc(r31)
/* 8037EF3C 0037BE7C  7F A3 EB 78 */	mr r3, r29
/* 8037EF40 0037BE80  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037EF44 0037BE84  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8037EF48 0037BE88  7D 89 03 A6 */	mtctr r12
/* 8037EF4C 0037BE8C  4E 80 04 21 */	bctrl 
/* 8037EF50 0037BE90  80 A3 00 70 */	lwz r5, 0x70(r3)
/* 8037EF54 0037BE94  7F E3 FB 78 */	mr r3, r31
/* 8037EF58 0037BE98  80 9F 01 CC */	lwz r4, 0x1cc(r31)
/* 8037EF5C 0037BE9C  48 00 11 41 */	bl copyTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock
/* 8037EF60 0037BEA0  80 7F 01 CC */	lwz r3, 0x1cc(r31)
/* 8037EF64 0037BEA4  38 80 00 00 */	li r4, 0
/* 8037EF68 0037BEA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037EF6C 0037BEAC  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8037EF70 0037BEB0  7D 89 03 A6 */	mtctr r12
/* 8037EF74 0037BEB4  4E 80 04 21 */	bctrl 
/* 8037EF78 0037BEB8  A8 03 00 00 */	lha r0, 0(r3)
/* 8037EF7C 0037BEBC  38 80 00 01 */	li r4, 1
/* 8037EF80 0037BEC0  B0 1F 01 D8 */	sth r0, 0x1d8(r31)
/* 8037EF84 0037BEC4  A8 03 00 02 */	lha r0, 2(r3)
/* 8037EF88 0037BEC8  B0 1F 01 DA */	sth r0, 0x1da(r31)
/* 8037EF8C 0037BECC  A8 03 00 04 */	lha r0, 4(r3)
/* 8037EF90 0037BED0  B0 1F 01 DC */	sth r0, 0x1dc(r31)
/* 8037EF94 0037BED4  A8 03 00 06 */	lha r0, 6(r3)
/* 8037EF98 0037BED8  B0 1F 01 DE */	sth r0, 0x1de(r31)
/* 8037EF9C 0037BEDC  80 7F 01 CC */	lwz r3, 0x1cc(r31)
/* 8037EFA0 0037BEE0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037EFA4 0037BEE4  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8037EFA8 0037BEE8  7D 89 03 A6 */	mtctr r12
/* 8037EFAC 0037BEEC  4E 80 04 21 */	bctrl 
/* 8037EFB0 0037BEF0  A8 03 00 00 */	lha r0, 0(r3)
/* 8037EFB4 0037BEF4  B0 1F 01 E0 */	sth r0, 0x1e0(r31)
/* 8037EFB8 0037BEF8  A8 03 00 02 */	lha r0, 2(r3)
/* 8037EFBC 0037BEFC  B0 1F 01 E2 */	sth r0, 0x1e2(r31)
/* 8037EFC0 0037BF00  A8 03 00 04 */	lha r0, 4(r3)
/* 8037EFC4 0037BF04  B0 1F 01 E4 */	sth r0, 0x1e4(r31)
/* 8037EFC8 0037BF08  A8 03 00 06 */	lha r0, 6(r3)
/* 8037EFCC 0037BF0C  38 60 00 18 */	li r3, 0x18
/* 8037EFD0 0037BF10  B0 1F 01 E6 */	sth r0, 0x1e6(r31)
/* 8037EFD4 0037BF14  80 1F 00 98 */	lwz r0, 0x98(r31)
/* 8037EFD8 0037BF18  80 9F 00 88 */	lwz r4, 0x88(r31)
/* 8037EFDC 0037BF1C  54 00 10 3A */	slwi r0, r0, 2
/* 8037EFE0 0037BF20  7C 84 00 2E */	lwzx r4, r4, r0
/* 8037EFE4 0037BF24  83 A4 00 08 */	lwz r29, 8(r4)
/* 8037EFE8 0037BF28  4B CA 4E BD */	bl __nw__FUl
/* 8037EFEC 0037BF2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8037EFF0 0037BF30  41 82 00 4C */	beq .L_8037F03C
/* 8037EFF4 0037BF34  3C A0 80 4A */	lis r5, __vt__13J2DColorBlock@ha
/* 8037EFF8 0037BF38  3C 80 80 04 */	lis r4, __ct__Q28JUtility6TColorFv@ha
/* 8037EFFC 0037BF3C  38 05 11 A4 */	addi r0, r5, __vt__13J2DColorBlock@l
/* 8037F000 0037BF40  38 C0 00 04 */	li r6, 4
/* 8037F004 0037BF44  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8037F008 0037BF48  38 A0 00 00 */	li r5, 0
/* 8037F00C 0037BF4C  38 84 9B 94 */	addi r4, r4, __ct__Q28JUtility6TColorFv@l
/* 8037F010 0037BF50  38 E0 00 02 */	li r7, 2
/* 8037F014 0037BF54  4B D4 28 29 */	bl __construct_array
/* 8037F018 0037BF58  3C 80 80 05 */	lis r4, __ct__12J2DColorChanFv@ha
/* 8037F01C 0037BF5C  38 7E 00 0A */	addi r3, r30, 0xa
/* 8037F020 0037BF60  38 84 20 2C */	addi r4, r4, __ct__12J2DColorChanFv@l
/* 8037F024 0037BF64  38 A0 00 00 */	li r5, 0
/* 8037F028 0037BF68  38 C0 00 02 */	li r6, 2
/* 8037F02C 0037BF6C  38 E0 00 04 */	li r7, 4
/* 8037F030 0037BF70  4B D4 28 0D */	bl __construct_array
/* 8037F034 0037BF74  7F C3 F3 78 */	mr r3, r30
/* 8037F038 0037BF78  4B CC AA E9 */	bl initialize__13J2DColorBlockFv
.L_8037F03C:
/* 8037F03C 0037BF7C  93 DF 01 D4 */	stw r30, 0x1d4(r31)
/* 8037F040 0037BF80  7F A3 EB 78 */	mr r3, r29
/* 8037F044 0037BF84  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037F048 0037BF88  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8037F04C 0037BF8C  7D 89 03 A6 */	mtctr r12
/* 8037F050 0037BF90  4E 80 04 21 */	bctrl 
/* 8037F054 0037BF94  7C 65 1B 78 */	mr r5, r3
/* 8037F058 0037BF98  80 9F 01 D4 */	lwz r4, 0x1d4(r31)
/* 8037F05C 0037BF9C  7F E3 FB 78 */	mr r3, r31
/* 8037F060 0037BFA0  38 A5 00 10 */	addi r5, r5, 0x10
/* 8037F064 0037BFA4  48 00 14 71 */	bl copyColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock
/* 8037F068 0037BFA8  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8037F06C 0037BFAC  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037F070 0037BFB0  54 00 10 3A */	slwi r0, r0, 2
/* 8037F074 0037BFB4  C0 22 09 40 */	lfs f1, lbl_8051ECA0@sda21(r2)
/* 8037F078 0037BFB8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037F07C 0037BFBC  C0 02 09 10 */	lfs f0, lbl_8051EC70@sda21(r2)
/* 8037F080 0037BFC0  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 8037F084 0037BFC4  EC 22 08 28 */	fsubs f1, f2, f1
/* 8037F088 0037BFC8  D0 3F 00 A8 */	stfs f1, 0xa8(r31)
/* 8037F08C 0037BFCC  C0 3F 00 A8 */	lfs f1, 0xa8(r31)
/* 8037F090 0037BFD0  EC 01 00 2A */	fadds f0, f1, f0
/* 8037F094 0037BFD4  D0 1F 00 AC */	stfs f0, 0xac(r31)
/* 8037F098 0037BFD8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8037F09C 0037BFDC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037F0A0 0037BFE0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8037F0A4 0037BFE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037F0A8 0037BFE8  7C 08 03 A6 */	mtlr r0
/* 8037F0AC 0037BFEC  38 21 00 20 */	addi r1, r1, 0x20
/* 8037F0B0 0037BFF0  4E 80 00 20 */	blr 
.endfn paneInit__Q28Morimura8THiScoreFv

.fn doUpdateFadeinFinish__Q28Morimura8THiScoreFv, global
/* 8037F0B4 0037BFF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037F0B8 0037BFF8  7C 08 02 A6 */	mflr r0
/* 8037F0BC 0037BFFC  7C 64 1B 78 */	mr r4, r3
/* 8037F0C0 0037C000  38 60 00 01 */	li r3, 1
/* 8037F0C4 0037C004  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037F0C8 0037C008  98 64 00 45 */	stb r3, 0x45(r4)
/* 8037F0CC 0037C00C  88 0D 85 BC */	lbz r0, mChangeAlpha__Q28Morimura8THiScore@sda21(r13)
/* 8037F0D0 0037C010  28 00 00 00 */	cmplwi r0, 0
/* 8037F0D4 0037C014  40 82 00 2C */	bne .L_8037F100
/* 8037F0D8 0037C018  98 64 01 C7 */	stb r3, 0x1c7(r4)
/* 8037F0DC 0037C01C  38 A0 00 00 */	li r5, 0
/* 8037F0E0 0037C020  80 64 00 BC */	lwz r3, 0xbc(r4)
/* 8037F0E4 0037C024  80 84 00 B8 */	lwz r4, 0xb8(r4)
/* 8037F0E8 0037C028  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F0EC 0037C02C  80 84 00 20 */	lwz r4, 0x20(r4)
/* 8037F0F0 0037C030  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8037F0F4 0037C034  80 84 00 20 */	lwz r4, 0x20(r4)
/* 8037F0F8 0037C038  7D 89 03 A6 */	mtctr r12
/* 8037F0FC 0037C03C  4E 80 04 21 */	bctrl 
.L_8037F100:
/* 8037F100 0037C040  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037F104 0037C044  7C 08 03 A6 */	mtlr r0
/* 8037F108 0037C048  38 21 00 10 */	addi r1, r1, 0x10
/* 8037F10C 0037C04C  4E 80 00 20 */	blr 
.endfn doUpdateFadeinFinish__Q28Morimura8THiScoreFv

.fn doUpdateFadeoutFinish__Q28Morimura8THiScoreFv, global
/* 8037F110 0037C050  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037F114 0037C054  28 00 00 00 */	cmplwi r0, 0
/* 8037F118 0037C058  4C 82 00 20 */	bnelr 
/* 8037F11C 0037C05C  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 8037F120 0037C060  38 00 00 01 */	li r0, 1
/* 8037F124 0037C064  98 03 00 0C */	stb r0, 0xc(r3)
/* 8037F128 0037C068  4E 80 00 20 */	blr 
.endfn doUpdateFadeoutFinish__Q28Morimura8THiScoreFv

.fn changePaneInfo__Q28Morimura8THiScoreFv, global
/* 8037F12C 0037C06C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8037F130 0037C070  7C 08 02 A6 */	mflr r0
/* 8037F134 0037C074  90 01 00 44 */	stw r0, 0x44(r1)
/* 8037F138 0037C078  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8037F13C 0037C07C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8037F140 0037C080  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8037F144 0037C084  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8037F148 0037C088  BF 41 00 08 */	stmw r26, 8(r1)
/* 8037F14C 0037C08C  C0 02 08 B8 */	lfs f0, lbl_8051EC18@sda21(r2)
/* 8037F150 0037C090  7C 7A 1B 78 */	mr r26, r3
/* 8037F154 0037C094  D0 03 01 F8 */	stfs f0, 0x1f8(r3)
/* 8037F158 0037C098  80 03 00 94 */	lwz r0, 0x94(r3)
/* 8037F15C 0037C09C  80 63 00 88 */	lwz r3, 0x88(r3)
/* 8037F160 0037C0A0  54 00 10 3A */	slwi r0, r0, 2
/* 8037F164 0037C0A4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037F168 0037C0A8  48 02 34 55 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037F16C 0037C0AC  88 1A 01 74 */	lbz r0, 0x174(r26)
/* 8037F170 0037C0B0  7C 7D 1B 78 */	mr r29, r3
/* 8037F174 0037C0B4  28 00 00 00 */	cmplwi r0, 0
/* 8037F178 0037C0B8  40 82 00 1C */	bne .L_8037F194
/* 8037F17C 0037C0BC  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037F180 0037C0C0  28 00 00 00 */	cmplwi r0, 0
/* 8037F184 0037C0C4  41 82 00 50 */	beq .L_8037F1D4
/* 8037F188 0037C0C8  88 0D 99 38 */	lbz r0, mForceClear__Q28Morimura8THiScore@sda21(r13)
/* 8037F18C 0037C0CC  28 00 00 00 */	cmplwi r0, 0
/* 8037F190 0037C0D0  41 82 00 44 */	beq .L_8037F1D4
.L_8037F194:
/* 8037F194 0037C0D4  80 BA 00 BC */	lwz r5, 0xbc(r26)
/* 8037F198 0037C0D8  38 00 00 00 */	li r0, 0
/* 8037F19C 0037C0DC  3C 80 6B 61 */	lis r4, 0x6B617261@ha
/* 8037F1A0 0037C0E0  3C 60 4E 6F */	lis r3, 0x4E6F7461@ha
/* 8037F1A4 0037C0E4  98 05 00 B0 */	stb r0, 0xb0(r5)
/* 8037F1A8 0037C0E8  38 C4 72 61 */	addi r6, r4, 0x6B617261@l
/* 8037F1AC 0037C0EC  38 A3 74 61 */	addi r5, r3, 0x4E6F7461@l
/* 8037F1B0 0037C0F0  80 7A 00 7C */	lwz r3, 0x7c(r26)
/* 8037F1B4 0037C0F4  80 63 00 08 */	lwz r3, 8(r3)
/* 8037F1B8 0037C0F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F1BC 0037C0FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037F1C0 0037C100  7D 89 03 A6 */	mtctr r12
/* 8037F1C4 0037C104  4E 80 04 21 */	bctrl 
/* 8037F1C8 0037C108  38 00 00 01 */	li r0, 1
/* 8037F1CC 0037C10C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F1D0 0037C110  48 00 00 84 */	b .L_8037F254
.L_8037F1D4:
/* 8037F1D4 0037C114  80 7A 00 BC */	lwz r3, 0xbc(r26)
/* 8037F1D8 0037C118  38 00 00 01 */	li r0, 1
/* 8037F1DC 0037C11C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F1E0 0037C120  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037F1E4 0037C124  28 00 00 00 */	cmplwi r0, 0
/* 8037F1E8 0037C128  40 82 00 24 */	bne .L_8037F20C
/* 8037F1EC 0037C12C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037F1F0 0037C130  48 0A 3D 41 */	bl getPlayCommonData__6SystemFv
/* 8037F1F4 0037C134  88 03 00 00 */	lbz r0, 0(r3)
/* 8037F1F8 0037C138  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8037F1FC 0037C13C  40 82 00 10 */	bne .L_8037F20C
/* 8037F200 0037C140  80 7A 00 BC */	lwz r3, 0xbc(r26)
/* 8037F204 0037C144  38 00 00 00 */	li r0, 0
/* 8037F208 0037C148  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8037F20C:
/* 8037F20C 0037C14C  80 7A 00 7C */	lwz r3, 0x7c(r26)
/* 8037F210 0037C150  3C A0 6B 61 */	lis r5, 0x6B617261@ha
/* 8037F214 0037C154  3C 80 4E 6F */	lis r4, 0x4E6F7461@ha
/* 8037F218 0037C158  80 63 00 08 */	lwz r3, 8(r3)
/* 8037F21C 0037C15C  38 C5 72 61 */	addi r6, r5, 0x6B617261@l
/* 8037F220 0037C160  38 A4 74 61 */	addi r5, r4, 0x4E6F7461@l
/* 8037F224 0037C164  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F228 0037C168  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037F22C 0037C16C  7D 89 03 A6 */	mtctr r12
/* 8037F230 0037C170  4E 80 04 21 */	bctrl 
/* 8037F234 0037C174  38 00 00 00 */	li r0, 0
/* 8037F238 0037C178  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F23C 0037C17C  88 0D 99 39 */	lbz r0, mForceClear2__Q28Morimura8THiScore@sda21(r13)
/* 8037F240 0037C180  28 00 00 00 */	cmplwi r0, 0
/* 8037F244 0037C184  41 82 00 10 */	beq .L_8037F254
/* 8037F248 0037C188  80 7A 00 BC */	lwz r3, 0xbc(r26)
/* 8037F24C 0037C18C  38 00 00 01 */	li r0, 1
/* 8037F250 0037C190  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8037F254:
/* 8037F254 0037C194  80 1A 00 94 */	lwz r0, 0x94(r26)
/* 8037F258 0037C198  3B E0 00 00 */	li r31, 0
/* 8037F25C 0037C19C  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F260 0037C1A0  54 00 10 3A */	slwi r0, r0, 2
/* 8037F264 0037C1A4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037F268 0037C1A8  48 02 33 55 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037F26C 0037C1AC  2C 03 00 0F */	cmpwi r3, 0xf
/* 8037F270 0037C1B0  40 82 00 08 */	bne .L_8037F278
/* 8037F274 0037C1B4  3B E0 00 01 */	li r31, 1
.L_8037F278:
/* 8037F278 0037C1B8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8037F27C 0037C1BC  41 82 00 6C */	beq .L_8037F2E8
/* 8037F280 0037C1C0  80 9A 00 7C */	lwz r4, 0x7c(r26)
/* 8037F284 0037C1C4  3C 60 65 74 */	lis r3, 0x6574656E@ha
/* 8037F288 0037C1C8  38 C3 65 6E */	addi r6, r3, 0x6574656E@l
/* 8037F28C 0037C1CC  38 A0 4E 68 */	li r5, 0x4e68
/* 8037F290 0037C1D0  80 64 00 08 */	lwz r3, 8(r4)
/* 8037F294 0037C1D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F298 0037C1D8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037F29C 0037C1DC  7D 89 03 A6 */	mtctr r12
/* 8037F2A0 0037C1E0  4E 80 04 21 */	bctrl 
/* 8037F2A4 0037C1E4  38 00 00 01 */	li r0, 1
/* 8037F2A8 0037C1E8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F2AC 0037C1EC  88 1A 01 74 */	lbz r0, 0x174(r26)
/* 8037F2B0 0037C1F0  28 00 00 00 */	cmplwi r0, 0
/* 8037F2B4 0037C1F4  41 82 01 1C */	beq .L_8037F3D0
/* 8037F2B8 0037C1F8  80 9A 00 7C */	lwz r4, 0x7c(r26)
/* 8037F2BC 0037C1FC  3C 60 74 74 */	lis r3, 0x7474656E@ha
/* 8037F2C0 0037C200  38 C3 65 6E */	addi r6, r3, 0x7474656E@l
/* 8037F2C4 0037C204  38 A0 4E 6F */	li r5, 0x4e6f
/* 8037F2C8 0037C208  80 64 00 08 */	lwz r3, 8(r4)
/* 8037F2CC 0037C20C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F2D0 0037C210  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037F2D4 0037C214  7D 89 03 A6 */	mtctr r12
/* 8037F2D8 0037C218  4E 80 04 21 */	bctrl 
/* 8037F2DC 0037C21C  38 00 00 01 */	li r0, 1
/* 8037F2E0 0037C220  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F2E4 0037C224  48 00 00 EC */	b .L_8037F3D0
.L_8037F2E8:
/* 8037F2E8 0037C228  80 9A 00 7C */	lwz r4, 0x7c(r26)
/* 8037F2EC 0037C22C  3C 60 65 74 */	lis r3, 0x6574656E@ha
/* 8037F2F0 0037C230  38 C3 65 6E */	addi r6, r3, 0x6574656E@l
/* 8037F2F4 0037C234  38 A0 4E 68 */	li r5, 0x4e68
/* 8037F2F8 0037C238  80 64 00 08 */	lwz r3, 8(r4)
/* 8037F2FC 0037C23C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F300 0037C240  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037F304 0037C244  7D 89 03 A6 */	mtctr r12
/* 8037F308 0037C248  4E 80 04 21 */	bctrl 
/* 8037F30C 0037C24C  28 03 00 00 */	cmplwi r3, 0
/* 8037F310 0037C250  40 82 00 20 */	bne .L_8037F330
/* 8037F314 0037C254  3C 60 80 49 */	lis r3, lbl_804935F0@ha
/* 8037F318 0037C258  3C A0 80 49 */	lis r5, lbl_80493600@ha
/* 8037F31C 0037C25C  38 63 35 F0 */	addi r3, r3, lbl_804935F0@l
/* 8037F320 0037C260  38 80 03 95 */	li r4, 0x395
/* 8037F324 0037C264  38 A5 36 00 */	addi r5, r5, lbl_80493600@l
/* 8037F328 0037C268  4C C6 31 82 */	crclr 6
/* 8037F32C 0037C26C  4B CA B3 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037F330:
/* 8037F330 0037C270  80 9A 00 7C */	lwz r4, 0x7c(r26)
/* 8037F334 0037C274  3C 60 74 74 */	lis r3, 0x7474656E@ha
/* 8037F338 0037C278  38 C3 65 6E */	addi r6, r3, 0x7474656E@l
/* 8037F33C 0037C27C  38 A0 4E 6F */	li r5, 0x4e6f
/* 8037F340 0037C280  80 64 00 08 */	lwz r3, 8(r4)
/* 8037F344 0037C284  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F348 0037C288  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037F34C 0037C28C  7D 89 03 A6 */	mtctr r12
/* 8037F350 0037C290  4E 80 04 21 */	bctrl 
/* 8037F354 0037C294  28 03 00 00 */	cmplwi r3, 0
/* 8037F358 0037C298  40 82 00 20 */	bne .L_8037F378
/* 8037F35C 0037C29C  3C 60 80 49 */	lis r3, lbl_804935F0@ha
/* 8037F360 0037C2A0  3C A0 80 49 */	lis r5, lbl_80493600@ha
/* 8037F364 0037C2A4  38 63 35 F0 */	addi r3, r3, lbl_804935F0@l
/* 8037F368 0037C2A8  38 80 03 96 */	li r4, 0x396
/* 8037F36C 0037C2AC  38 A5 36 00 */	addi r5, r5, lbl_80493600@l
/* 8037F370 0037C2B0  4C C6 31 82 */	crclr 6
/* 8037F374 0037C2B4  4B CA B2 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037F378:
/* 8037F378 0037C2B8  80 9A 00 7C */	lwz r4, 0x7c(r26)
/* 8037F37C 0037C2BC  3C 60 65 74 */	lis r3, 0x6574656E@ha
/* 8037F380 0037C2C0  38 C3 65 6E */	addi r6, r3, 0x6574656E@l
/* 8037F384 0037C2C4  38 A0 4E 68 */	li r5, 0x4e68
/* 8037F388 0037C2C8  80 64 00 08 */	lwz r3, 8(r4)
/* 8037F38C 0037C2CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F390 0037C2D0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037F394 0037C2D4  7D 89 03 A6 */	mtctr r12
/* 8037F398 0037C2D8  4E 80 04 21 */	bctrl 
/* 8037F39C 0037C2DC  38 00 00 00 */	li r0, 0
/* 8037F3A0 0037C2E0  3C 80 74 74 */	lis r4, 0x7474656E@ha
/* 8037F3A4 0037C2E4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F3A8 0037C2E8  38 C4 65 6E */	addi r6, r4, 0x7474656E@l
/* 8037F3AC 0037C2EC  38 A0 4E 6F */	li r5, 0x4e6f
/* 8037F3B0 0037C2F0  80 7A 00 7C */	lwz r3, 0x7c(r26)
/* 8037F3B4 0037C2F4  80 63 00 08 */	lwz r3, 8(r3)
/* 8037F3B8 0037C2F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F3BC 0037C2FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037F3C0 0037C300  7D 89 03 A6 */	mtctr r12
/* 8037F3C4 0037C304  4E 80 04 21 */	bctrl 
/* 8037F3C8 0037C308  38 00 00 00 */	li r0, 0
/* 8037F3CC 0037C30C  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8037F3D0:
/* 8037F3D0 0037C310  7F 5E D3 78 */	mr r30, r26
/* 8037F3D4 0037C314  57 FF 06 3E */	clrlwi r31, r31, 0x18
/* 8037F3D8 0037C318  3B 80 00 00 */	li r28, 0
.L_8037F3DC:
/* 8037F3DC 0037C31C  7F 43 D3 78 */	mr r3, r26
/* 8037F3E0 0037C320  7F 84 E3 78 */	mr r4, r28
/* 8037F3E4 0037C324  7F A5 EB 78 */	mr r5, r29
/* 8037F3E8 0037C328  48 00 04 2D */	bl getRecord__Q28Morimura8THiScoreFii
/* 8037F3EC 0037C32C  28 1F 00 00 */	cmplwi r31, 0
/* 8037F3F0 0037C330  7C 7B 1B 78 */	mr r27, r3
/* 8037F3F4 0037C334  41 82 00 A0 */	beq .L_8037F494
/* 8037F3F8 0037C338  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8037F3FC 0037C33C  4B F8 C3 C5 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037F400 0037C340  38 00 00 01 */	li r0, 1
/* 8037F404 0037C344  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F408 0037C348  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8037F40C 0037C34C  4B F8 C3 B5 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037F410 0037C350  38 00 00 01 */	li r0, 1
/* 8037F414 0037C354  38 80 00 00 */	li r4, 0
/* 8037F418 0037C358  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F41C 0037C35C  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8037F420 0037C360  4B F8 C3 C9 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037F424 0037C364  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8037F428 0037C368  38 80 00 00 */	li r4, 0
/* 8037F42C 0037C36C  4B F8 C3 BD */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037F430 0037C370  80 7E 00 E4 */	lwz r3, 0xe4(r30)
/* 8037F434 0037C374  4B F8 C3 8D */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037F438 0037C378  38 00 00 00 */	li r0, 0
/* 8037F43C 0037C37C  2C 1B FF FF */	cmpwi r27, -1
/* 8037F440 0037C380  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F444 0037C384  41 81 00 20 */	bgt .L_8037F464
/* 8037F448 0037C388  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8037F44C 0037C38C  3B 60 00 00 */	li r27, 0
/* 8037F450 0037C390  38 80 00 01 */	li r4, 1
/* 8037F454 0037C394  4B F8 C3 95 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037F458 0037C398  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8037F45C 0037C39C  38 80 00 01 */	li r4, 1
/* 8037F460 0037C3A0  4B F8 C3 89 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_8037F464:
/* 8037F464 0037C3A4  3C 60 88 89 */	lis r3, 0x88888889@ha
/* 8037F468 0037C3A8  38 03 88 89 */	addi r0, r3, 0x88888889@l
/* 8037F46C 0037C3AC  7C 00 D8 96 */	mulhw r0, r0, r27
/* 8037F470 0037C3B0  7C 00 DA 14 */	add r0, r0, r27
/* 8037F474 0037C3B4  7C 00 2E 70 */	srawi r0, r0, 5
/* 8037F478 0037C3B8  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8037F47C 0037C3BC  7C 60 1A 14 */	add r3, r0, r3
/* 8037F480 0037C3C0  1C 03 00 3C */	mulli r0, r3, 0x3c
/* 8037F484 0037C3C4  90 7E 01 44 */	stw r3, 0x144(r30)
/* 8037F488 0037C3C8  7C 00 D8 50 */	subf r0, r0, r27
/* 8037F48C 0037C3CC  90 1E 01 5C */	stw r0, 0x15c(r30)
/* 8037F490 0037C3D0  48 00 00 5C */	b .L_8037F4EC
.L_8037F494:
/* 8037F494 0037C3D4  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8037F498 0037C3D8  4B F8 C3 29 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037F49C 0037C3DC  38 00 00 00 */	li r0, 0
/* 8037F4A0 0037C3E0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F4A4 0037C3E4  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8037F4A8 0037C3E8  4B F8 C3 19 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037F4AC 0037C3EC  38 00 00 00 */	li r0, 0
/* 8037F4B0 0037C3F0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F4B4 0037C3F4  80 7E 00 E4 */	lwz r3, 0xe4(r30)
/* 8037F4B8 0037C3F8  4B F8 C3 09 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037F4BC 0037C3FC  38 00 00 01 */	li r0, 1
/* 8037F4C0 0037C400  38 80 00 00 */	li r4, 0
/* 8037F4C4 0037C404  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F4C8 0037C408  80 7E 00 E4 */	lwz r3, 0xe4(r30)
/* 8037F4CC 0037C40C  4B F8 C3 1D */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037F4D0 0037C410  2C 1B FF FF */	cmpwi r27, -1
/* 8037F4D4 0037C414  41 81 00 14 */	bgt .L_8037F4E8
/* 8037F4D8 0037C418  80 7E 00 E4 */	lwz r3, 0xe4(r30)
/* 8037F4DC 0037C41C  3B 60 00 00 */	li r27, 0
/* 8037F4E0 0037C420  38 80 00 01 */	li r4, 1
/* 8037F4E4 0037C424  4B F8 C3 05 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_8037F4E8:
/* 8037F4E8 0037C428  93 7E 00 FC */	stw r27, 0xfc(r30)
.L_8037F4EC:
/* 8037F4EC 0037C42C  3B 9C 00 01 */	addi r28, r28, 1
/* 8037F4F0 0037C430  3B DE 00 04 */	addi r30, r30, 4
/* 8037F4F4 0037C434  2C 1C 00 06 */	cmpwi r28, 6
/* 8037F4F8 0037C438  41 80 FE E4 */	blt .L_8037F3DC
/* 8037F4FC 0037C43C  88 1A 01 C7 */	lbz r0, 0x1c7(r26)
/* 8037F500 0037C440  28 00 00 00 */	cmplwi r0, 0
/* 8037F504 0037C444  41 82 00 48 */	beq .L_8037F54C
/* 8037F508 0037C448  88 0D 85 BC */	lbz r0, mChangeAlpha__Q28Morimura8THiScore@sda21(r13)
/* 8037F50C 0037C44C  28 00 00 00 */	cmplwi r0, 0
/* 8037F510 0037C450  40 82 00 3C */	bne .L_8037F54C
/* 8037F514 0037C454  80 9A 00 B8 */	lwz r4, 0xb8(r26)
/* 8037F518 0037C458  3C 60 80 4E */	lis r3, mPicTexture__Q28Morimura8THiScore@ha
/* 8037F51C 0037C45C  57 BC 10 3A */	slwi r28, r29, 2
/* 8037F520 0037C460  38 A0 00 00 */	li r5, 0
/* 8037F524 0037C464  3B 63 41 40 */	addi r27, r3, mPicTexture__Q28Morimura8THiScore@l
/* 8037F528 0037C468  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8037F52C 0037C46C  7C 9B E0 2E */	lwzx r4, r27, r28
/* 8037F530 0037C470  4B CB 3B 55 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8037F534 0037C474  80 7A 00 B8 */	lwz r3, 0xb8(r26)
/* 8037F538 0037C478  38 A0 00 00 */	li r5, 0
/* 8037F53C 0037C47C  7C 9B E0 2E */	lwzx r4, r27, r28
/* 8037F540 0037C480  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8037F544 0037C484  4B CB 3B 41 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8037F548 0037C488  48 00 00 2C */	b .L_8037F574
.L_8037F54C:
/* 8037F54C 0037C48C  80 7A 00 BC */	lwz r3, 0xbc(r26)
/* 8037F550 0037C490  3C 80 80 4E */	lis r4, mPicTexture__Q28Morimura8THiScore@ha
/* 8037F554 0037C494  57 A0 10 3A */	slwi r0, r29, 2
/* 8037F558 0037C498  38 A0 00 00 */	li r5, 0
/* 8037F55C 0037C49C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F560 0037C4A0  38 84 41 40 */	addi r4, r4, mPicTexture__Q28Morimura8THiScore@l
/* 8037F564 0037C4A4  7C 84 00 2E */	lwzx r4, r4, r0
/* 8037F568 0037C4A8  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8037F56C 0037C4AC  7D 89 03 A6 */	mtctr r12
/* 8037F570 0037C4B0  4E 80 04 21 */	bctrl 
.L_8037F574:
/* 8037F574 0037C4B4  88 0D 99 3A */	lbz r0, mLoopDrum__Q28Morimura8THiScore@sda21(r13)
/* 8037F578 0037C4B8  28 00 00 00 */	cmplwi r0, 0
/* 8037F57C 0037C4BC  40 82 01 50 */	bne .L_8037F6CC
/* 8037F580 0037C4C0  38 00 00 00 */	li r0, 0
/* 8037F584 0037C4C4  90 1A 01 78 */	stw r0, 0x178(r26)
/* 8037F588 0037C4C8  80 7A 00 DC */	lwz r3, 0xdc(r26)
/* 8037F58C 0037C4CC  4B FA DF AD */	bl stickUpDown__Q32og6Screen12StickAnimMgrFv
/* 8037F590 0037C4D0  80 1A 00 94 */	lwz r0, 0x94(r26)
/* 8037F594 0037C4D4  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F598 0037C4D8  54 00 10 3A */	slwi r0, r0, 2
/* 8037F59C 0037C4DC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037F5A0 0037C4E0  48 02 30 1D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037F5A4 0037C4E4  80 1A 00 94 */	lwz r0, 0x94(r26)
/* 8037F5A8 0037C4E8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8037F5AC 0037C4EC  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F5B0 0037C4F0  54 00 10 3A */	slwi r0, r0, 2
/* 8037F5B4 0037C4F4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037F5B8 0037C4F8  C3 E3 00 1C */	lfs f31, 0x1c(r3)
/* 8037F5BC 0037C4FC  40 82 00 14 */	bne .L_8037F5D0
/* 8037F5C0 0037C500  38 00 00 01 */	li r0, 1
/* 8037F5C4 0037C504  90 1A 01 78 */	stw r0, 0x178(r26)
/* 8037F5C8 0037C508  80 7A 00 DC */	lwz r3, 0xdc(r26)
/* 8037F5CC 0037C50C  4B FA DE 85 */	bl stickDown__Q32og6Screen12StickAnimMgrFv
.L_8037F5D0:
/* 8037F5D0 0037C510  2C 1F 00 0F */	cmpwi r31, 0xf
/* 8037F5D4 0037C514  40 82 00 14 */	bne .L_8037F5E8
/* 8037F5D8 0037C518  38 00 00 02 */	li r0, 2
/* 8037F5DC 0037C51C  90 1A 01 78 */	stw r0, 0x178(r26)
/* 8037F5E0 0037C520  80 7A 00 DC */	lwz r3, 0xdc(r26)
/* 8037F5E4 0037C524  4B FA DD 99 */	bl stickUp__Q32og6Screen12StickAnimMgrFv
.L_8037F5E8:
/* 8037F5E8 0037C528  80 1A 01 78 */	lwz r0, 0x178(r26)
/* 8037F5EC 0037C52C  2C 00 00 00 */	cmpwi r0, 0
/* 8037F5F0 0037C530  40 82 00 10 */	bne .L_8037F600
/* 8037F5F4 0037C534  38 00 00 00 */	li r0, 0
/* 8037F5F8 0037C538  98 1A 01 C6 */	stb r0, 0x1c6(r26)
/* 8037F5FC 0037C53C  48 00 00 0C */	b .L_8037F608
.L_8037F600:
/* 8037F600 0037C540  38 00 00 01 */	li r0, 1
/* 8037F604 0037C544  98 1A 01 C6 */	stb r0, 0x1c6(r26)
.L_8037F608:
/* 8037F608 0037C548  3B 60 00 00 */	li r27, 0
/* 8037F60C 0037C54C  3B C0 00 00 */	li r30, 0
/* 8037F610 0037C550  48 00 00 B0 */	b .L_8037F6C0
.L_8037F614:
/* 8037F614 0037C554  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F618 0037C558  38 00 00 01 */	li r0, 1
/* 8037F61C 0037C55C  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037F620 0037C560  80 63 00 04 */	lwz r3, 4(r3)
/* 8037F624 0037C564  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F628 0037C568  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F62C 0037C56C  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037F630 0037C570  80 63 00 08 */	lwz r3, 8(r3)
/* 8037F634 0037C574  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F638 0037C578  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F63C 0037C57C  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037F640 0037C580  48 02 2F 7D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037F644 0037C584  7C 03 F8 00 */	cmpw r3, r31
/* 8037F648 0037C588  41 82 00 70 */	beq .L_8037F6B8
/* 8037F64C 0037C58C  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F650 0037C590  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037F654 0037C594  C3 C3 00 1C */	lfs f30, 0x1c(r3)
/* 8037F658 0037C598  48 02 2F 65 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037F65C 0037C59C  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F660 0037C5A0  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037F664 0037C5A4  48 02 2F 59 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037F668 0037C5A8  7C 03 F8 00 */	cmpw r3, r31
/* 8037F66C 0037C5AC  40 81 00 0C */	ble .L_8037F678
/* 8037F670 0037C5B0  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 8037F674 0037C5B4  41 81 00 20 */	bgt .L_8037F694
.L_8037F678:
/* 8037F678 0037C5B8  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F67C 0037C5BC  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037F680 0037C5C0  48 02 2F 3D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037F684 0037C5C4  7C 03 F8 00 */	cmpw r3, r31
/* 8037F688 0037C5C8  40 80 00 30 */	bge .L_8037F6B8
/* 8037F68C 0037C5CC  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 8037F690 0037C5D0  40 80 00 28 */	bge .L_8037F6B8
.L_8037F694:
/* 8037F694 0037C5D4  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F698 0037C5D8  38 00 00 00 */	li r0, 0
/* 8037F69C 0037C5DC  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037F6A0 0037C5E0  80 63 00 04 */	lwz r3, 4(r3)
/* 8037F6A4 0037C5E4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037F6A8 0037C5E8  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 8037F6AC 0037C5EC  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037F6B0 0037C5F0  80 63 00 08 */	lwz r3, 8(r3)
/* 8037F6B4 0037C5F4  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8037F6B8:
/* 8037F6B8 0037C5F8  3B DE 00 04 */	addi r30, r30, 4
/* 8037F6BC 0037C5FC  3B 7B 00 01 */	addi r27, r27, 1
.L_8037F6C0:
/* 8037F6C0 0037C600  A8 1A 00 8E */	lha r0, 0x8e(r26)
/* 8037F6C4 0037C604  7C 1B 00 00 */	cmpw r27, r0
/* 8037F6C8 0037C608  41 80 FF 4C */	blt .L_8037F614
.L_8037F6CC:
/* 8037F6CC 0037C60C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8037F6D0 0037C610  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8037F6D4 0037C614  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8037F6D8 0037C618  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8037F6DC 0037C61C  BB 41 00 08 */	lmw r26, 8(r1)
/* 8037F6E0 0037C620  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8037F6E4 0037C624  7C 08 03 A6 */	mtlr r0
/* 8037F6E8 0037C628  38 21 00 40 */	addi r1, r1, 0x40
/* 8037F6EC 0037C62C  4E 80 00 20 */	blr 
.endfn changePaneInfo__Q28Morimura8THiScoreFv

.fn setPaneCharacter__Q28Morimura8THiScoreFi, global
/* 8037F6F0 0037C630  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037F6F4 0037C634  7C 08 02 A6 */	mflr r0
/* 8037F6F8 0037C638  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037F6FC 0037C63C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037F700 0037C640  54 9F 10 3A */	slwi r31, r4, 2
/* 8037F704 0037C644  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8037F708 0037C648  7C 7E 1B 78 */	mr r30, r3
/* 8037F70C 0037C64C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8037F710 0037C650  93 81 00 10 */	stw r28, 0x10(r1)
/* 8037F714 0037C654  80 63 00 88 */	lwz r3, 0x88(r3)
/* 8037F718 0037C658  7C 63 F8 2E */	lwzx r3, r3, r31
/* 8037F71C 0037C65C  48 02 2E A1 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037F720 0037C660  7C 60 1B 78 */	mr r0, r3
/* 8037F724 0037C664  7F C3 F3 78 */	mr r3, r30
/* 8037F728 0037C668  81 9E 00 00 */	lwz r12, 0(r30)
/* 8037F72C 0037C66C  7C 1D 03 78 */	mr r29, r0
/* 8037F730 0037C670  7F A4 EB 78 */	mr r4, r29
/* 8037F734 0037C674  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8037F738 0037C678  7D 89 03 A6 */	mtctr r12
/* 8037F73C 0037C67C  4E 80 04 21 */	bctrl 
/* 8037F740 0037C680  80 BE 00 88 */	lwz r5, 0x88(r30)
/* 8037F744 0037C684  7C A5 F8 2E */	lwzx r5, r5, r31
/* 8037F748 0037C688  80 A5 00 08 */	lwz r5, 8(r5)
/* 8037F74C 0037C68C  90 85 00 1C */	stw r4, 0x1c(r5)
/* 8037F750 0037C690  90 65 00 18 */	stw r3, 0x18(r5)
/* 8037F754 0037C694  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8037F758 0037C698  7C 63 F8 2E */	lwzx r3, r3, r31
/* 8037F75C 0037C69C  80 63 00 08 */	lwz r3, 8(r3)
/* 8037F760 0037C6A0  4B CB 99 11 */	bl getFirstChildPane__7J2DPaneFv
/* 8037F764 0037C6A4  7C 7C 1B 79 */	or. r28, r3, r3
/* 8037F768 0037C6A8  40 82 00 20 */	bne .L_8037F788
/* 8037F76C 0037C6AC  3C 60 80 49 */	lis r3, lbl_804935F0@ha
/* 8037F770 0037C6B0  3C A0 80 49 */	lis r5, lbl_80493600@ha
/* 8037F774 0037C6B4  38 63 35 F0 */	addi r3, r3, lbl_804935F0@l
/* 8037F778 0037C6B8  38 80 04 07 */	li r4, 0x407
/* 8037F77C 0037C6BC  38 A5 36 00 */	addi r5, r5, lbl_80493600@l
/* 8037F780 0037C6C0  4C C6 31 82 */	crclr 6
/* 8037F784 0037C6C4  4B CA AE BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037F788:
/* 8037F788 0037C6C8  7F C3 F3 78 */	mr r3, r30
/* 8037F78C 0037C6CC  7F A4 EB 78 */	mr r4, r29
/* 8037F790 0037C6D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8037F794 0037C6D4  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8037F798 0037C6D8  7D 89 03 A6 */	mtctr r12
/* 8037F79C 0037C6DC  4E 80 04 21 */	bctrl 
/* 8037F7A0 0037C6E0  90 9C 00 1C */	stw r4, 0x1c(r28)
/* 8037F7A4 0037C6E4  90 7C 00 18 */	stw r3, 0x18(r28)
/* 8037F7A8 0037C6E8  88 1E 01 74 */	lbz r0, 0x174(r30)
/* 8037F7AC 0037C6EC  28 00 00 00 */	cmplwi r0, 0
/* 8037F7B0 0037C6F0  41 82 00 44 */	beq .L_8037F7F4
/* 8037F7B4 0037C6F4  3C 60 80 4E */	lis r3, mPicTexture__Q28Morimura8THiScore@ha
/* 8037F7B8 0037C6F8  57 BC 10 3A */	slwi r28, r29, 2
/* 8037F7BC 0037C6FC  3B A3 41 40 */	addi r29, r3, mPicTexture__Q28Morimura8THiScore@l
/* 8037F7C0 0037C700  7C 1D E0 2E */	lwzx r0, r29, r28
/* 8037F7C4 0037C704  28 00 00 00 */	cmplwi r0, 0
/* 8037F7C8 0037C708  41 82 00 2C */	beq .L_8037F7F4
/* 8037F7CC 0037C70C  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8037F7D0 0037C710  7C 63 F8 2E */	lwzx r3, r3, r31
/* 8037F7D4 0037C714  80 63 00 04 */	lwz r3, 4(r3)
/* 8037F7D8 0037C718  4B CB 98 99 */	bl getFirstChildPane__7J2DPaneFv
/* 8037F7DC 0037C71C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037F7E0 0037C720  38 A0 00 00 */	li r5, 0
/* 8037F7E4 0037C724  7C 9D E0 2E */	lwzx r4, r29, r28
/* 8037F7E8 0037C728  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8037F7EC 0037C72C  7D 89 03 A6 */	mtctr r12
/* 8037F7F0 0037C730  4E 80 04 21 */	bctrl 
.L_8037F7F4:
/* 8037F7F4 0037C734  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037F7F8 0037C738  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8037F7FC 0037C73C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037F800 0037C740  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8037F804 0037C744  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8037F808 0037C748  7C 08 03 A6 */	mtlr r0
/* 8037F80C 0037C74C  38 21 00 20 */	addi r1, r1, 0x20
/* 8037F810 0037C750  4E 80 00 20 */	blr 
.endfn setPaneCharacter__Q28Morimura8THiScoreFi

.fn getRecord__Q28Morimura8THiScoreFii, global
/* 8037F814 0037C754  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037F818 0037C758  7C 08 02 A6 */	mflr r0
/* 8037F81C 0037C75C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037F820 0037C760  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037F824 0037C764  7C BF 2B 78 */	mr r31, r5
/* 8037F828 0037C768  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8037F82C 0037C76C  7C 9E 23 78 */	mr r30, r4
/* 8037F830 0037C770  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037F834 0037C774  48 0A 36 FD */	bl getPlayCommonData__6SystemFv
/* 8037F838 0037C778  28 03 00 00 */	cmplwi r3, 0
/* 8037F83C 0037C77C  40 82 00 20 */	bne .L_8037F85C
/* 8037F840 0037C780  3C 60 80 49 */	lis r3, lbl_804935F0@ha
/* 8037F844 0037C784  3C A0 80 49 */	lis r5, lbl_80493600@ha
/* 8037F848 0037C788  38 63 35 F0 */	addi r3, r3, lbl_804935F0@l
/* 8037F84C 0037C78C  38 80 04 17 */	li r4, 0x417
/* 8037F850 0037C790  38 A5 36 00 */	addi r5, r5, lbl_80493600@l
/* 8037F854 0037C794  4C C6 31 82 */	crclr 6
/* 8037F858 0037C798  4B CA AD E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037F85C:
/* 8037F85C 0037C79C  3C 60 80 4E */	lis r3, mHiscoreDataOrder__Q28Morimura8THiScore@ha
/* 8037F860 0037C7A0  57 E0 10 3A */	slwi r0, r31, 2
/* 8037F864 0037C7A4  38 63 42 00 */	addi r3, r3, mHiscoreDataOrder__Q28Morimura8THiScore@l
/* 8037F868 0037C7A8  7F E3 00 2E */	lwzx r31, r3, r0
/* 8037F86C 0037C7AC  2C 1F 00 10 */	cmpwi r31, 0x10
/* 8037F870 0037C7B0  40 81 00 20 */	ble .L_8037F890
/* 8037F874 0037C7B4  3C 60 80 49 */	lis r3, lbl_804935F0@ha
/* 8037F878 0037C7B8  3C A0 80 49 */	lis r5, lbl_80493600@ha
/* 8037F87C 0037C7BC  38 63 35 F0 */	addi r3, r3, lbl_804935F0@l
/* 8037F880 0037C7C0  38 80 04 19 */	li r4, 0x419
/* 8037F884 0037C7C4  38 A5 36 00 */	addi r5, r5, lbl_80493600@l
/* 8037F888 0037C7C8  4C C6 31 82 */	crclr 6
/* 8037F88C 0037C7CC  4B CA AD B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037F890:
/* 8037F890 0037C7D0  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037F894 0037C7D4  38 60 00 00 */	li r3, 0
/* 8037F898 0037C7D8  28 00 00 00 */	cmplwi r0, 0
/* 8037F89C 0037C7DC  41 82 00 08 */	beq .L_8037F8A4
/* 8037F8A0 0037C7E0  38 60 00 01 */	li r3, 1
.L_8037F8A4:
/* 8037F8A4 0037C7E4  2C 1E 00 03 */	cmpwi r30, 3
/* 8037F8A8 0037C7E8  41 82 01 F8 */	beq .L_8037FAA0
/* 8037F8AC 0037C7EC  40 80 00 1C */	bge .L_8037F8C8
/* 8037F8B0 0037C7F0  2C 1E 00 01 */	cmpwi r30, 1
/* 8037F8B4 0037C7F4  41 82 00 A8 */	beq .L_8037F95C
/* 8037F8B8 0037C7F8  40 80 01 28 */	bge .L_8037F9E0
/* 8037F8BC 0037C7FC  2C 1E 00 00 */	cmpwi r30, 0
/* 8037F8C0 0037C800  40 80 00 18 */	bge .L_8037F8D8
/* 8037F8C4 0037C804  48 00 03 68 */	b .L_8037FC2C
.L_8037F8C8:
/* 8037F8C8 0037C808  2C 1E 00 05 */	cmpwi r30, 5
/* 8037F8CC 0037C80C  41 82 02 DC */	beq .L_8037FBA8
/* 8037F8D0 0037C810  40 80 03 5C */	bge .L_8037FC2C
/* 8037F8D4 0037C814  48 00 02 50 */	b .L_8037FB24
.L_8037F8D8:
/* 8037F8D8 0037C818  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037F8DC 0037C81C  41 82 00 48 */	beq .L_8037F924
/* 8037F8E0 0037C820  4B D4 9C C1 */	bl rand
/* 8037F8E4 0037C824  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037F8E8 0037C828  3C 00 43 30 */	lis r0, 0x4330
/* 8037F8EC 0037C82C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8037F8F0 0037C830  C8 62 08 C0 */	lfd f3, lbl_8051EC20@sda21(r2)
/* 8037F8F4 0037C834  90 01 00 08 */	stw r0, 8(r1)
/* 8037F8F8 0037C838  C0 42 09 44 */	lfs f2, lbl_8051ECA4@sda21(r2)
/* 8037F8FC 0037C83C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8037F900 0037C840  C0 22 09 40 */	lfs f1, lbl_8051ECA0@sda21(r2)
/* 8037F904 0037C844  EC 60 18 28 */	fsubs f3, f0, f3
/* 8037F908 0037C848  C0 02 08 E4 */	lfs f0, lbl_8051EC44@sda21(r2)
/* 8037F90C 0037C84C  EC 43 10 24 */	fdivs f2, f3, f2
/* 8037F910 0037C850  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8037F914 0037C854  FC 00 00 1E */	fctiwz f0, f0
/* 8037F918 0037C858  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8037F91C 0037C85C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8037F920 0037C860  48 00 03 28 */	b .L_8037FC48
.L_8037F924:
/* 8037F924 0037C864  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037F928 0037C868  48 0A 36 09 */	bl getPlayCommonData__6SystemFv
/* 8037F92C 0037C86C  88 03 00 00 */	lbz r0, 0(r3)
/* 8037F930 0037C870  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8037F934 0037C874  41 82 00 20 */	beq .L_8037F954
/* 8037F938 0037C878  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037F93C 0037C87C  48 0A 35 F5 */	bl getPlayCommonData__6SystemFv
/* 8037F940 0037C880  7F E4 FB 78 */	mr r4, r31
/* 8037F944 0037C884  4B EB 4B 89 */	bl getHighscore_clear__Q24Game14PlayCommonDataFi
/* 8037F948 0037C888  38 80 00 00 */	li r4, 0
/* 8037F94C 0037C88C  4B EB 44 01 */	bl getScore__Q24Game9HighscoreFi
/* 8037F950 0037C890  48 00 02 F8 */	b .L_8037FC48
.L_8037F954:
/* 8037F954 0037C894  38 60 FF FF */	li r3, -1
/* 8037F958 0037C898  48 00 02 F0 */	b .L_8037FC48
.L_8037F95C:
/* 8037F95C 0037C89C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037F960 0037C8A0  41 82 00 48 */	beq .L_8037F9A8
/* 8037F964 0037C8A4  4B D4 9C 3D */	bl rand
/* 8037F968 0037C8A8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037F96C 0037C8AC  3C 00 43 30 */	lis r0, 0x4330
/* 8037F970 0037C8B0  90 61 00 14 */	stw r3, 0x14(r1)
/* 8037F974 0037C8B4  C8 62 08 C0 */	lfd f3, lbl_8051EC20@sda21(r2)
/* 8037F978 0037C8B8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8037F97C 0037C8BC  C0 42 09 44 */	lfs f2, lbl_8051ECA4@sda21(r2)
/* 8037F980 0037C8C0  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8037F984 0037C8C4  C0 22 09 48 */	lfs f1, lbl_8051ECA8@sda21(r2)
/* 8037F988 0037C8C8  EC 60 18 28 */	fsubs f3, f0, f3
/* 8037F98C 0037C8CC  C0 02 09 40 */	lfs f0, lbl_8051ECA0@sda21(r2)
/* 8037F990 0037C8D0  EC 43 10 24 */	fdivs f2, f3, f2
/* 8037F994 0037C8D4  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8037F998 0037C8D8  FC 00 00 1E */	fctiwz f0, f0
/* 8037F99C 0037C8DC  D8 01 00 08 */	stfd f0, 8(r1)
/* 8037F9A0 0037C8E0  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8037F9A4 0037C8E4  48 00 02 A4 */	b .L_8037FC48
.L_8037F9A8:
/* 8037F9A8 0037C8E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037F9AC 0037C8EC  48 0A 35 85 */	bl getPlayCommonData__6SystemFv
/* 8037F9B0 0037C8F0  88 03 00 00 */	lbz r0, 0(r3)
/* 8037F9B4 0037C8F4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8037F9B8 0037C8F8  41 82 00 20 */	beq .L_8037F9D8
/* 8037F9BC 0037C8FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037F9C0 0037C900  48 0A 35 71 */	bl getPlayCommonData__6SystemFv
/* 8037F9C4 0037C904  7F E4 FB 78 */	mr r4, r31
/* 8037F9C8 0037C908  4B EB 4B 05 */	bl getHighscore_clear__Q24Game14PlayCommonDataFi
/* 8037F9CC 0037C90C  38 80 00 01 */	li r4, 1
/* 8037F9D0 0037C910  4B EB 43 7D */	bl getScore__Q24Game9HighscoreFi
/* 8037F9D4 0037C914  48 00 02 74 */	b .L_8037FC48
.L_8037F9D8:
/* 8037F9D8 0037C918  38 60 FF FF */	li r3, -1
/* 8037F9DC 0037C91C  48 00 02 6C */	b .L_8037FC48
.L_8037F9E0:
/* 8037F9E0 0037C920  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037F9E4 0037C924  41 82 00 84 */	beq .L_8037FA68
/* 8037F9E8 0037C928  4B D4 9B B9 */	bl rand
/* 8037F9EC 0037C92C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037F9F0 0037C930  3C 00 43 30 */	lis r0, 0x4330
/* 8037F9F4 0037C934  90 61 00 14 */	stw r3, 0x14(r1)
/* 8037F9F8 0037C938  C8 62 08 C0 */	lfd f3, lbl_8051EC20@sda21(r2)
/* 8037F9FC 0037C93C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8037FA00 0037C940  C0 22 09 44 */	lfs f1, lbl_8051ECA4@sda21(r2)
/* 8037FA04 0037C944  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 8037FA08 0037C948  C0 02 09 14 */	lfs f0, lbl_8051EC74@sda21(r2)
/* 8037FA0C 0037C94C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8037FA10 0037C950  EC 22 08 24 */	fdivs f1, f2, f1
/* 8037FA14 0037C954  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037FA18 0037C958  40 80 00 0C */	bge .L_8037FA24
/* 8037FA1C 0037C95C  38 60 FF FF */	li r3, -1
/* 8037FA20 0037C960  48 00 02 28 */	b .L_8037FC48
.L_8037FA24:
/* 8037FA24 0037C964  4B D4 9B 7D */	bl rand
/* 8037FA28 0037C968  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037FA2C 0037C96C  3C 00 43 30 */	lis r0, 0x4330
/* 8037FA30 0037C970  90 61 00 14 */	stw r3, 0x14(r1)
/* 8037FA34 0037C974  C8 62 08 C0 */	lfd f3, lbl_8051EC20@sda21(r2)
/* 8037FA38 0037C978  90 01 00 10 */	stw r0, 0x10(r1)
/* 8037FA3C 0037C97C  C0 42 09 44 */	lfs f2, lbl_8051ECA4@sda21(r2)
/* 8037FA40 0037C980  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8037FA44 0037C984  C0 22 09 50 */	lfs f1, lbl_8051ECB0@sda21(r2)
/* 8037FA48 0037C988  EC 60 18 28 */	fsubs f3, f0, f3
/* 8037FA4C 0037C98C  C0 02 09 4C */	lfs f0, lbl_8051ECAC@sda21(r2)
/* 8037FA50 0037C990  EC 43 10 24 */	fdivs f2, f3, f2
/* 8037FA54 0037C994  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8037FA58 0037C998  FC 00 00 1E */	fctiwz f0, f0
/* 8037FA5C 0037C99C  D8 01 00 08 */	stfd f0, 8(r1)
/* 8037FA60 0037C9A0  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8037FA64 0037C9A4  48 00 01 E4 */	b .L_8037FC48
.L_8037FA68:
/* 8037FA68 0037C9A8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037FA6C 0037C9AC  48 0A 34 C5 */	bl getPlayCommonData__6SystemFv
/* 8037FA70 0037C9B0  88 03 00 00 */	lbz r0, 0(r3)
/* 8037FA74 0037C9B4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8037FA78 0037C9B8  41 82 00 20 */	beq .L_8037FA98
/* 8037FA7C 0037C9BC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037FA80 0037C9C0  48 0A 34 B1 */	bl getPlayCommonData__6SystemFv
/* 8037FA84 0037C9C4  7F E4 FB 78 */	mr r4, r31
/* 8037FA88 0037C9C8  4B EB 4A 45 */	bl getHighscore_clear__Q24Game14PlayCommonDataFi
/* 8037FA8C 0037C9CC  38 80 00 02 */	li r4, 2
/* 8037FA90 0037C9D0  4B EB 42 BD */	bl getScore__Q24Game9HighscoreFi
/* 8037FA94 0037C9D4  48 00 01 B4 */	b .L_8037FC48
.L_8037FA98:
/* 8037FA98 0037C9D8  38 60 FF FF */	li r3, -1
/* 8037FA9C 0037C9DC  48 00 01 AC */	b .L_8037FC48
.L_8037FAA0:
/* 8037FAA0 0037C9E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037FAA4 0037C9E4  41 82 00 48 */	beq .L_8037FAEC
/* 8037FAA8 0037C9E8  4B D4 9A F9 */	bl rand
/* 8037FAAC 0037C9EC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037FAB0 0037C9F0  3C 00 43 30 */	lis r0, 0x4330
/* 8037FAB4 0037C9F4  90 61 00 14 */	stw r3, 0x14(r1)
/* 8037FAB8 0037C9F8  C8 62 08 C0 */	lfd f3, lbl_8051EC20@sda21(r2)
/* 8037FABC 0037C9FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8037FAC0 0037CA00  C0 42 09 44 */	lfs f2, lbl_8051ECA4@sda21(r2)
/* 8037FAC4 0037CA04  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8037FAC8 0037CA08  C0 22 09 48 */	lfs f1, lbl_8051ECA8@sda21(r2)
/* 8037FACC 0037CA0C  EC 60 18 28 */	fsubs f3, f0, f3
/* 8037FAD0 0037CA10  C0 02 09 40 */	lfs f0, lbl_8051ECA0@sda21(r2)
/* 8037FAD4 0037CA14  EC 43 10 24 */	fdivs f2, f3, f2
/* 8037FAD8 0037CA18  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8037FADC 0037CA1C  FC 00 00 1E */	fctiwz f0, f0
/* 8037FAE0 0037CA20  D8 01 00 08 */	stfd f0, 8(r1)
/* 8037FAE4 0037CA24  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8037FAE8 0037CA28  48 00 01 60 */	b .L_8037FC48
.L_8037FAEC:
/* 8037FAEC 0037CA2C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037FAF0 0037CA30  48 0A 34 41 */	bl getPlayCommonData__6SystemFv
/* 8037FAF4 0037CA34  88 03 00 00 */	lbz r0, 0(r3)
/* 8037FAF8 0037CA38  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8037FAFC 0037CA3C  41 82 00 20 */	beq .L_8037FB1C
/* 8037FB00 0037CA40  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037FB04 0037CA44  48 0A 34 2D */	bl getPlayCommonData__6SystemFv
/* 8037FB08 0037CA48  7F E4 FB 78 */	mr r4, r31
/* 8037FB0C 0037CA4C  4B EB 4A 39 */	bl getHighscore_complete__Q24Game14PlayCommonDataFi
/* 8037FB10 0037CA50  38 80 00 00 */	li r4, 0
/* 8037FB14 0037CA54  4B EB 42 39 */	bl getScore__Q24Game9HighscoreFi
/* 8037FB18 0037CA58  48 00 01 30 */	b .L_8037FC48
.L_8037FB1C:
/* 8037FB1C 0037CA5C  38 60 FF FF */	li r3, -1
/* 8037FB20 0037CA60  48 00 01 28 */	b .L_8037FC48
.L_8037FB24:
/* 8037FB24 0037CA64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037FB28 0037CA68  41 82 00 48 */	beq .L_8037FB70
/* 8037FB2C 0037CA6C  4B D4 9A 75 */	bl rand
/* 8037FB30 0037CA70  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037FB34 0037CA74  3C 00 43 30 */	lis r0, 0x4330
/* 8037FB38 0037CA78  90 61 00 14 */	stw r3, 0x14(r1)
/* 8037FB3C 0037CA7C  C8 62 08 C0 */	lfd f3, lbl_8051EC20@sda21(r2)
/* 8037FB40 0037CA80  90 01 00 10 */	stw r0, 0x10(r1)
/* 8037FB44 0037CA84  C0 42 09 44 */	lfs f2, lbl_8051ECA4@sda21(r2)
/* 8037FB48 0037CA88  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8037FB4C 0037CA8C  C0 22 09 48 */	lfs f1, lbl_8051ECA8@sda21(r2)
/* 8037FB50 0037CA90  EC 60 18 28 */	fsubs f3, f0, f3
/* 8037FB54 0037CA94  C0 02 09 4C */	lfs f0, lbl_8051ECAC@sda21(r2)
/* 8037FB58 0037CA98  EC 43 10 24 */	fdivs f2, f3, f2
/* 8037FB5C 0037CA9C  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8037FB60 0037CAA0  FC 00 00 1E */	fctiwz f0, f0
/* 8037FB64 0037CAA4  D8 01 00 08 */	stfd f0, 8(r1)
/* 8037FB68 0037CAA8  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8037FB6C 0037CAAC  48 00 00 DC */	b .L_8037FC48
.L_8037FB70:
/* 8037FB70 0037CAB0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037FB74 0037CAB4  48 0A 33 BD */	bl getPlayCommonData__6SystemFv
/* 8037FB78 0037CAB8  88 03 00 00 */	lbz r0, 0(r3)
/* 8037FB7C 0037CABC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8037FB80 0037CAC0  41 82 00 20 */	beq .L_8037FBA0
/* 8037FB84 0037CAC4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037FB88 0037CAC8  48 0A 33 A9 */	bl getPlayCommonData__6SystemFv
/* 8037FB8C 0037CACC  7F E4 FB 78 */	mr r4, r31
/* 8037FB90 0037CAD0  4B EB 49 B5 */	bl getHighscore_complete__Q24Game14PlayCommonDataFi
/* 8037FB94 0037CAD4  38 80 00 01 */	li r4, 1
/* 8037FB98 0037CAD8  4B EB 41 B5 */	bl getScore__Q24Game9HighscoreFi
/* 8037FB9C 0037CADC  48 00 00 AC */	b .L_8037FC48
.L_8037FBA0:
/* 8037FBA0 0037CAE0  38 60 FF FF */	li r3, -1
/* 8037FBA4 0037CAE4  48 00 00 A4 */	b .L_8037FC48
.L_8037FBA8:
/* 8037FBA8 0037CAE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037FBAC 0037CAEC  41 82 00 48 */	beq .L_8037FBF4
/* 8037FBB0 0037CAF0  4B D4 99 F1 */	bl rand
/* 8037FBB4 0037CAF4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037FBB8 0037CAF8  3C 00 43 30 */	lis r0, 0x4330
/* 8037FBBC 0037CAFC  90 61 00 14 */	stw r3, 0x14(r1)
/* 8037FBC0 0037CB00  C8 62 08 C0 */	lfd f3, lbl_8051EC20@sda21(r2)
/* 8037FBC4 0037CB04  90 01 00 10 */	stw r0, 0x10(r1)
/* 8037FBC8 0037CB08  C0 42 09 44 */	lfs f2, lbl_8051ECA4@sda21(r2)
/* 8037FBCC 0037CB0C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8037FBD0 0037CB10  C0 22 09 58 */	lfs f1, lbl_8051ECB8@sda21(r2)
/* 8037FBD4 0037CB14  EC 60 18 28 */	fsubs f3, f0, f3
/* 8037FBD8 0037CB18  C0 02 09 54 */	lfs f0, lbl_8051ECB4@sda21(r2)
/* 8037FBDC 0037CB1C  EC 43 10 24 */	fdivs f2, f3, f2
/* 8037FBE0 0037CB20  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8037FBE4 0037CB24  FC 00 00 1E */	fctiwz f0, f0
/* 8037FBE8 0037CB28  D8 01 00 08 */	stfd f0, 8(r1)
/* 8037FBEC 0037CB2C  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8037FBF0 0037CB30  48 00 00 58 */	b .L_8037FC48
.L_8037FBF4:
/* 8037FBF4 0037CB34  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037FBF8 0037CB38  48 0A 33 39 */	bl getPlayCommonData__6SystemFv
/* 8037FBFC 0037CB3C  88 03 00 00 */	lbz r0, 0(r3)
/* 8037FC00 0037CB40  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8037FC04 0037CB44  41 82 00 20 */	beq .L_8037FC24
/* 8037FC08 0037CB48  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8037FC0C 0037CB4C  48 0A 33 25 */	bl getPlayCommonData__6SystemFv
/* 8037FC10 0037CB50  7F E4 FB 78 */	mr r4, r31
/* 8037FC14 0037CB54  4B EB 49 31 */	bl getHighscore_complete__Q24Game14PlayCommonDataFi
/* 8037FC18 0037CB58  38 80 00 02 */	li r4, 2
/* 8037FC1C 0037CB5C  4B EB 41 31 */	bl getScore__Q24Game9HighscoreFi
/* 8037FC20 0037CB60  48 00 00 28 */	b .L_8037FC48
.L_8037FC24:
/* 8037FC24 0037CB64  38 60 FF FF */	li r3, -1
/* 8037FC28 0037CB68  48 00 00 20 */	b .L_8037FC48
.L_8037FC2C:
/* 8037FC2C 0037CB6C  3C 60 80 49 */	lis r3, lbl_804935F0@ha
/* 8037FC30 0037CB70  38 80 04 46 */	li r4, 0x446
/* 8037FC34 0037CB74  38 63 35 F0 */	addi r3, r3, lbl_804935F0@l
/* 8037FC38 0037CB78  38 A0 00 00 */	li r5, 0
/* 8037FC3C 0037CB7C  4C C6 31 82 */	crclr 6
/* 8037FC40 0037CB80  4B CA AA 01 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8037FC44 0037CB84  38 60 00 00 */	li r3, 0
.L_8037FC48:
/* 8037FC48 0037CB88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037FC4C 0037CB8C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8037FC50 0037CB90  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037FC54 0037CB94  7C 08 03 A6 */	mtlr r0
/* 8037FC58 0037CB98  38 21 00 20 */	addi r1, r1, 0x20
/* 8037FC5C 0037CB9C  4E 80 00 20 */	blr 
.endfn getRecord__Q28Morimura8THiScoreFii

.fn changeTextTevBlock__Q28Morimura8THiScoreFi, global
/* 8037FC60 0037CBA0  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 8037FC64 0037CBA4  7C 08 02 A6 */	mflr r0
/* 8037FC68 0037CBA8  90 01 01 04 */	stw r0, 0x104(r1)
/* 8037FC6C 0037CBAC  BF 21 00 E4 */	stmw r25, 0xe4(r1)
/* 8037FC70 0037CBB0  7C 7B 1B 78 */	mr r27, r3
/* 8037FC74 0037CBB4  54 99 10 3A */	slwi r25, r4, 2
/* 8037FC78 0037CBB8  80 63 00 88 */	lwz r3, 0x88(r3)
/* 8037FC7C 0037CBBC  7C 63 C8 2E */	lwzx r3, r3, r25
/* 8037FC80 0037CBC0  80 63 00 08 */	lwz r3, 8(r3)
/* 8037FC84 0037CBC4  4B CB 93 ED */	bl getFirstChildPane__7J2DPaneFv
/* 8037FC88 0037CBC8  80 9B 00 88 */	lwz r4, 0x88(r27)
/* 8037FC8C 0037CBCC  7C 7D 1B 78 */	mr r29, r3
/* 8037FC90 0037CBD0  80 BB 00 84 */	lwz r5, 0x84(r27)
/* 8037FC94 0037CBD4  7C 84 C8 2E */	lwzx r4, r4, r25
/* 8037FC98 0037CBD8  80 05 00 20 */	lwz r0, 0x20(r5)
/* 8037FC9C 0037CBDC  C0 25 00 14 */	lfs f1, 0x14(r5)
/* 8037FCA0 0037CBE0  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8037FCA4 0037CBE4  2C 00 00 00 */	cmpwi r0, 0
/* 8037FCA8 0037CBE8  83 84 00 08 */	lwz r28, 8(r4)
/* 8037FCAC 0037CBEC  EC 20 08 2A */	fadds f1, f0, f1
/* 8037FCB0 0037CBF0  40 82 03 8C */	bne .L_8038003C
/* 8037FCB4 0037CBF4  C0 1B 00 AC */	lfs f0, 0xac(r27)
/* 8037FCB8 0037CBF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037FCBC 0037CBFC  40 80 03 80 */	bge .L_8038003C
/* 8037FCC0 0037CC00  C0 1B 00 A8 */	lfs f0, 0xa8(r27)
/* 8037FCC4 0037CC04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037FCC8 0037CC08  40 81 03 74 */	ble .L_8038003C
/* 8037FCCC 0037CC0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037FCD0 0037CC10  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8037FCD4 0037CC14  7D 89 03 A6 */	mtctr r12
/* 8037FCD8 0037CC18  4E 80 04 21 */	bctrl 
/* 8037FCDC 0037CC1C  80 A3 00 70 */	lwz r5, 0x70(r3)
/* 8037FCE0 0037CC20  7F 63 DB 78 */	mr r3, r27
/* 8037FCE4 0037CC24  80 9B 01 C8 */	lwz r4, 0x1c8(r27)
/* 8037FCE8 0037CC28  48 00 05 D1 */	bl changeTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock
/* 8037FCEC 0037CC2C  C0 5B 01 F8 */	lfs f2, 0x1f8(r27)
/* 8037FCF0 0037CC30  C0 22 09 0C */	lfs f1, lbl_8051EC6C@sda21(r2)
/* 8037FCF4 0037CC34  C0 02 08 CC */	lfs f0, lbl_8051EC2C@sda21(r2)
/* 8037FCF8 0037CC38  EC 22 08 2A */	fadds f1, f2, f1
/* 8037FCFC 0037CC3C  D0 3B 01 F8 */	stfs f1, 0x1f8(r27)
/* 8037FD00 0037CC40  C0 3B 01 F8 */	lfs f1, 0x1f8(r27)
/* 8037FD04 0037CC44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037FD08 0037CC48  40 81 00 0C */	ble .L_8037FD14
/* 8037FD0C 0037CC4C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8037FD10 0037CC50  D0 1B 01 F8 */	stfs f0, 0x1f8(r27)
.L_8037FD14:
/* 8037FD14 0037CC54  C0 5B 01 F8 */	lfs f2, 0x1f8(r27)
/* 8037FD18 0037CC58  C0 02 08 B8 */	lfs f0, lbl_8051EC18@sda21(r2)
/* 8037FD1C 0037CC5C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8037FD20 0037CC60  40 80 00 08 */	bge .L_8037FD28
/* 8037FD24 0037CC64  FC 40 10 50 */	fneg f2, f2
.L_8037FD28:
/* 8037FD28 0037CC68  C0 22 09 30 */	lfs f1, lbl_8051EC90@sda21(r2)
/* 8037FD2C 0037CC6C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8037FD30 0037CC70  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8037FD34 0037CC74  C0 02 08 B8 */	lfs f0, lbl_8051EC18@sda21(r2)
/* 8037FD38 0037CC78  EC 22 00 72 */	fmuls f1, f2, f1
/* 8037FD3C 0037CC7C  FC 20 08 1E */	fctiwz f1, f1
/* 8037FD40 0037CC80  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 8037FD44 0037CC84  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8037FD48 0037CC88  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8037FD4C 0037CC8C  7C 63 02 14 */	add r3, r3, r0
/* 8037FD50 0037CC90  C0 23 00 04 */	lfs f1, 4(r3)
/* 8037FD54 0037CC94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037FD58 0037CC98  40 80 00 08 */	bge .L_8037FD60
/* 8037FD5C 0037CC9C  FC 20 00 90 */	fmr f1, f0
.L_8037FD60:
/* 8037FD60 0037CCA0  A8 9B 01 DA */	lha r4, 0x1da(r27)
/* 8037FD64 0037CCA4  3C 00 43 30 */	lis r0, 0x4330
/* 8037FD68 0037CCA8  A8 7B 01 DC */	lha r3, 0x1dc(r27)
/* 8037FD6C 0037CCAC  A8 BB 01 DE */	lha r5, 0x1de(r27)
/* 8037FD70 0037CCB0  6C 8B 80 00 */	xoris r11, r4, 0x8000
/* 8037FD74 0037CCB4  A8 9B 01 E0 */	lha r4, 0x1e0(r27)
/* 8037FD78 0037CCB8  6C 69 80 00 */	xoris r9, r3, 0x8000
/* 8037FD7C 0037CCBC  A8 7B 01 E2 */	lha r3, 0x1e2(r27)
/* 8037FD80 0037CCC0  6C A7 80 00 */	xoris r7, r5, 0x8000
/* 8037FD84 0037CCC4  6C 85 80 00 */	xoris r5, r4, 0x8000
/* 8037FD88 0037CCC8  A8 DB 01 EA */	lha r6, 0x1ea(r27)
/* 8037FD8C 0037CCCC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037FD90 0037CCD0  A8 9B 01 EC */	lha r4, 0x1ec(r27)
/* 8037FD94 0037CCD4  A9 1B 01 EE */	lha r8, 0x1ee(r27)
/* 8037FD98 0037CCD8  6C CC 80 00 */	xoris r12, r6, 0x8000
/* 8037FD9C 0037CCDC  A8 DB 01 F0 */	lha r6, 0x1f0(r27)
/* 8037FDA0 0037CCE0  6C 8A 80 00 */	xoris r10, r4, 0x8000
/* 8037FDA4 0037CCE4  A8 9B 01 F2 */	lha r4, 0x1f2(r27)
/* 8037FDA8 0037CCE8  6D 08 80 00 */	xoris r8, r8, 0x8000
/* 8037FDAC 0037CCEC  6C C6 80 00 */	xoris r6, r6, 0x8000
/* 8037FDB0 0037CCF0  C0 42 08 E4 */	lfs f2, lbl_8051EC44@sda21(r2)
/* 8037FDB4 0037CCF4  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 8037FDB8 0037CCF8  91 61 00 2C */	stw r11, 0x2c(r1)
/* 8037FDBC 0037CCFC  C8 02 08 C0 */	lfd f0, lbl_8051EC20@sda21(r2)
/* 8037FDC0 0037CD00  EC 42 08 28 */	fsubs f2, f2, f1
/* 8037FDC4 0037CD04  90 01 00 28 */	stw r0, 0x28(r1)
/* 8037FDC8 0037CD08  C8 61 00 28 */	lfd f3, 0x28(r1)
/* 8037FDCC 0037CD0C  91 21 00 44 */	stw r9, 0x44(r1)
/* 8037FDD0 0037CD10  EC 83 00 28 */	fsubs f4, f3, f0
/* 8037FDD4 0037CD14  90 01 00 40 */	stw r0, 0x40(r1)
/* 8037FDD8 0037CD18  C8 61 00 40 */	lfd f3, 0x40(r1)
/* 8037FDDC 0037CD1C  ED 01 01 32 */	fmuls f8, f1, f4
/* 8037FDE0 0037CD20  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 8037FDE4 0037CD24  EC 83 00 28 */	fsubs f4, f3, f0
/* 8037FDE8 0037CD28  90 01 00 58 */	stw r0, 0x58(r1)
/* 8037FDEC 0037CD2C  C8 61 00 58 */	lfd f3, 0x58(r1)
/* 8037FDF0 0037CD30  EC E1 01 32 */	fmuls f7, f1, f4
/* 8037FDF4 0037CD34  90 A1 00 74 */	stw r5, 0x74(r1)
/* 8037FDF8 0037CD38  EC 83 00 28 */	fsubs f4, f3, f0
/* 8037FDFC 0037CD3C  90 01 00 70 */	stw r0, 0x70(r1)
/* 8037FE00 0037CD40  C8 61 00 70 */	lfd f3, 0x70(r1)
/* 8037FE04 0037CD44  EC A1 01 32 */	fmuls f5, f1, f4
/* 8037FE08 0037CD48  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8037FE0C 0037CD4C  EC 83 00 28 */	fsubs f4, f3, f0
/* 8037FE10 0037CD50  90 01 00 88 */	stw r0, 0x88(r1)
/* 8037FE14 0037CD54  C8 61 00 88 */	lfd f3, 0x88(r1)
/* 8037FE18 0037CD58  EC 81 01 32 */	fmuls f4, f1, f4
/* 8037FE1C 0037CD5C  91 81 00 24 */	stw r12, 0x24(r1)
/* 8037FE20 0037CD60  EC 63 00 28 */	fsubs f3, f3, f0
/* 8037FE24 0037CD64  90 01 00 20 */	stw r0, 0x20(r1)
/* 8037FE28 0037CD68  C8 C1 00 20 */	lfd f6, 0x20(r1)
/* 8037FE2C 0037CD6C  EC 61 00 F2 */	fmuls f3, f1, f3
/* 8037FE30 0037CD70  91 41 00 3C */	stw r10, 0x3c(r1)
/* 8037FE34 0037CD74  ED 26 00 28 */	fsubs f9, f6, f0
/* 8037FE38 0037CD78  90 01 00 38 */	stw r0, 0x38(r1)
/* 8037FE3C 0037CD7C  C8 C1 00 38 */	lfd f6, 0x38(r1)
/* 8037FE40 0037CD80  ED 22 42 7A */	fmadds f9, f2, f9, f8
/* 8037FE44 0037CD84  91 01 00 54 */	stw r8, 0x54(r1)
/* 8037FE48 0037CD88  ED 06 00 28 */	fsubs f8, f6, f0
/* 8037FE4C 0037CD8C  90 01 00 50 */	stw r0, 0x50(r1)
/* 8037FE50 0037CD90  FD 20 48 1E */	fctiwz f9, f9
/* 8037FE54 0037CD94  C8 C1 00 50 */	lfd f6, 0x50(r1)
/* 8037FE58 0037CD98  EC E2 3A 3A */	fmadds f7, f2, f8, f7
/* 8037FE5C 0037CD9C  D9 21 00 30 */	stfd f9, 0x30(r1)
/* 8037FE60 0037CDA0  EC C6 00 28 */	fsubs f6, f6, f0
/* 8037FE64 0037CDA4  FC E0 38 1E */	fctiwz f7, f7
/* 8037FE68 0037CDA8  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 8037FE6C 0037CDAC  81 21 00 34 */	lwz r9, 0x34(r1)
/* 8037FE70 0037CDB0  90 01 00 68 */	stw r0, 0x68(r1)
/* 8037FE74 0037CDB4  EC C2 29 BA */	fmadds f6, f2, f6, f5
/* 8037FE78 0037CDB8  C8 A1 00 68 */	lfd f5, 0x68(r1)
/* 8037FE7C 0037CDBC  FC C0 30 1E */	fctiwz f6, f6
/* 8037FE80 0037CDC0  D8 E1 00 48 */	stfd f7, 0x48(r1)
/* 8037FE84 0037CDC4  EC A5 00 28 */	fsubs f5, f5, f0
/* 8037FE88 0037CDC8  90 81 00 84 */	stw r4, 0x84(r1)
/* 8037FE8C 0037CDCC  81 41 00 4C */	lwz r10, 0x4c(r1)
/* 8037FE90 0037CDD0  90 01 00 80 */	stw r0, 0x80(r1)
/* 8037FE94 0037CDD4  EC A2 21 7A */	fmadds f5, f2, f5, f4
/* 8037FE98 0037CDD8  C8 81 00 80 */	lfd f4, 0x80(r1)
/* 8037FE9C 0037CDDC  FC A0 28 1E */	fctiwz f5, f5
/* 8037FEA0 0037CDE0  D8 C1 00 60 */	stfd f6, 0x60(r1)
/* 8037FEA4 0037CDE4  EC 84 00 28 */	fsubs f4, f4, f0
/* 8037FEA8 0037CDE8  81 61 00 64 */	lwz r11, 0x64(r1)
/* 8037FEAC 0037CDEC  D8 A1 00 78 */	stfd f5, 0x78(r1)
/* 8037FEB0 0037CDF0  EC 62 19 3A */	fmadds f3, f2, f4, f3
/* 8037FEB4 0037CDF4  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8037FEB8 0037CDF8  FC 60 18 1E */	fctiwz f3, f3
/* 8037FEBC 0037CDFC  D8 61 00 90 */	stfd f3, 0x90(r1)
/* 8037FEC0 0037CE00  83 C1 00 94 */	lwz r30, 0x94(r1)
/* 8037FEC4 0037CE04  A8 9B 01 D8 */	lha r4, 0x1d8(r27)
/* 8037FEC8 0037CE08  7F A3 EB 78 */	mr r3, r29
/* 8037FECC 0037CE0C  A8 BB 01 E8 */	lha r5, 0x1e8(r27)
/* 8037FED0 0037CE10  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 8037FED4 0037CE14  A8 DB 01 E4 */	lha r6, 0x1e4(r27)
/* 8037FED8 0037CE18  90 81 00 D4 */	stw r4, 0xd4(r1)
/* 8037FEDC 0037CE1C  6C A4 80 00 */	xoris r4, r5, 0x8000
/* 8037FEE0 0037CE20  A8 BB 01 E6 */	lha r5, 0x1e6(r27)
/* 8037FEE4 0037CE24  6C C7 80 00 */	xoris r7, r6, 0x8000
/* 8037FEE8 0037CE28  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 8037FEEC 0037CE2C  6C A5 80 00 */	xoris r5, r5, 0x8000
/* 8037FEF0 0037CE30  A8 DB 01 F4 */	lha r6, 0x1f4(r27)
/* 8037FEF4 0037CE34  C8 61 00 D0 */	lfd f3, 0xd0(r1)
/* 8037FEF8 0037CE38  90 81 00 CC */	stw r4, 0xcc(r1)
/* 8037FEFC 0037CE3C  6C C8 80 00 */	xoris r8, r6, 0x8000
/* 8037FF00 0037CE40  EC 63 00 28 */	fsubs f3, f3, f0
/* 8037FF04 0037CE44  A8 9B 01 F6 */	lha r4, 0x1f6(r27)
/* 8037FF08 0037CE48  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 8037FF0C 0037CE4C  6C 86 80 00 */	xoris r6, r4, 0x8000
/* 8037FF10 0037CE50  C8 81 00 C8 */	lfd f4, 0xc8(r1)
/* 8037FF14 0037CE54  EC 61 00 F2 */	fmuls f3, f1, f3
/* 8037FF18 0037CE58  90 E1 00 A4 */	stw r7, 0xa4(r1)
/* 8037FF1C 0037CE5C  EC 84 00 28 */	fsubs f4, f4, f0
/* 8037FF20 0037CE60  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8037FF24 0037CE64  EC 62 19 3A */	fmadds f3, f2, f4, f3
/* 8037FF28 0037CE68  C8 81 00 A0 */	lfd f4, 0xa0(r1)
/* 8037FF2C 0037CE6C  90 A1 00 BC */	stw r5, 0xbc(r1)
/* 8037FF30 0037CE70  EC A4 00 28 */	fsubs f5, f4, f0
/* 8037FF34 0037CE74  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 8037FF38 0037CE78  FC 60 18 1E */	fctiwz f3, f3
/* 8037FF3C 0037CE7C  C8 81 00 B8 */	lfd f4, 0xb8(r1)
/* 8037FF40 0037CE80  EC A1 01 72 */	fmuls f5, f1, f5
/* 8037FF44 0037CE84  D8 61 00 D8 */	stfd f3, 0xd8(r1)
/* 8037FF48 0037CE88  EC 64 00 28 */	fsubs f3, f4, f0
/* 8037FF4C 0037CE8C  80 81 00 DC */	lwz r4, 0xdc(r1)
/* 8037FF50 0037CE90  91 01 00 9C */	stw r8, 0x9c(r1)
/* 8037FF54 0037CE94  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8037FF58 0037CE98  90 01 00 98 */	stw r0, 0x98(r1)
/* 8037FF5C 0037CE9C  C8 61 00 98 */	lfd f3, 0x98(r1)
/* 8037FF60 0037CEA0  90 C1 00 B4 */	stw r6, 0xb4(r1)
/* 8037FF64 0037CEA4  EC 83 00 28 */	fsubs f4, f3, f0
/* 8037FF68 0037CEA8  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 8037FF6C 0037CEAC  C8 61 00 B0 */	lfd f3, 0xb0(r1)
/* 8037FF70 0037CEB0  EC 82 29 3A */	fmadds f4, f2, f4, f5
/* 8037FF74 0037CEB4  B0 81 00 10 */	sth r4, 0x10(r1)
/* 8037FF78 0037CEB8  EC 03 00 28 */	fsubs f0, f3, f0
/* 8037FF7C 0037CEBC  FC 60 20 1E */	fctiwz f3, f4
/* 8037FF80 0037CEC0  B1 21 00 12 */	sth r9, 0x12(r1)
/* 8037FF84 0037CEC4  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8037FF88 0037CEC8  B1 41 00 14 */	sth r10, 0x14(r1)
/* 8037FF8C 0037CECC  B1 61 00 16 */	sth r11, 0x16(r1)
/* 8037FF90 0037CED0  FC 00 00 1E */	fctiwz f0, f0
/* 8037FF94 0037CED4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037FF98 0037CED8  D8 61 00 A8 */	stfd f3, 0xa8(r1)
/* 8037FF9C 0037CEDC  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8037FFA0 0037CEE0  D8 01 00 C0 */	stfd f0, 0xc0(r1)
/* 8037FFA4 0037CEE4  83 41 00 AC */	lwz r26, 0xac(r1)
/* 8037FFA8 0037CEE8  83 21 00 C4 */	lwz r25, 0xc4(r1)
/* 8037FFAC 0037CEEC  7D 89 03 A6 */	mtctr r12
/* 8037FFB0 0037CEF0  4E 80 04 21 */	bctrl 
/* 8037FFB4 0037CEF4  80 63 00 70 */	lwz r3, 0x70(r3)
/* 8037FFB8 0037CEF8  38 A1 00 10 */	addi r5, r1, 0x10
/* 8037FFBC 0037CEFC  38 80 00 00 */	li r4, 0
/* 8037FFC0 0037CF00  81 83 00 00 */	lwz r12, 0(r3)
/* 8037FFC4 0037CF04  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8037FFC8 0037CF08  7D 89 03 A6 */	mtctr r12
/* 8037FFCC 0037CF0C  4E 80 04 21 */	bctrl 
/* 8037FFD0 0037CF10  B3 E1 00 08 */	sth r31, 8(r1)
/* 8037FFD4 0037CF14  7F A3 EB 78 */	mr r3, r29
/* 8037FFD8 0037CF18  B3 C1 00 0A */	sth r30, 0xa(r1)
/* 8037FFDC 0037CF1C  B3 41 00 0C */	sth r26, 0xc(r1)
/* 8037FFE0 0037CF20  B3 21 00 0E */	sth r25, 0xe(r1)
/* 8037FFE4 0037CF24  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037FFE8 0037CF28  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8037FFEC 0037CF2C  7D 89 03 A6 */	mtctr r12
/* 8037FFF0 0037CF30  4E 80 04 21 */	bctrl 
/* 8037FFF4 0037CF34  80 63 00 70 */	lwz r3, 0x70(r3)
/* 8037FFF8 0037CF38  38 A1 00 08 */	addi r5, r1, 8
/* 8037FFFC 0037CF3C  38 80 00 01 */	li r4, 1
/* 80380000 0037CF40  81 83 00 00 */	lwz r12, 0(r3)
/* 80380004 0037CF44  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80380008 0037CF48  7D 89 03 A6 */	mtctr r12
/* 8038000C 0037CF4C  4E 80 04 21 */	bctrl 
/* 80380010 0037CF50  7F 83 E3 78 */	mr r3, r28
/* 80380014 0037CF54  81 9C 00 00 */	lwz r12, 0(r28)
/* 80380018 0037CF58  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8038001C 0037CF5C  7D 89 03 A6 */	mtctr r12
/* 80380020 0037CF60  4E 80 04 21 */	bctrl 
/* 80380024 0037CF64  7C 65 1B 78 */	mr r5, r3
/* 80380028 0037CF68  80 9B 01 D0 */	lwz r4, 0x1d0(r27)
/* 8038002C 0037CF6C  7F 63 DB 78 */	mr r3, r27
/* 80380030 0037CF70  38 A5 00 10 */	addi r5, r5, 0x10
/* 80380034 0037CF74  48 00 05 21 */	bl changeColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock
/* 80380038 0037CF78  48 00 00 50 */	b .L_80380088
.L_8038003C:
/* 8038003C 0037CF7C  7F A3 EB 78 */	mr r3, r29
/* 80380040 0037CF80  81 9D 00 00 */	lwz r12, 0(r29)
/* 80380044 0037CF84  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80380048 0037CF88  7D 89 03 A6 */	mtctr r12
/* 8038004C 0037CF8C  4E 80 04 21 */	bctrl 
/* 80380050 0037CF90  80 A3 00 70 */	lwz r5, 0x70(r3)
/* 80380054 0037CF94  7F 63 DB 78 */	mr r3, r27
/* 80380058 0037CF98  80 9B 01 CC */	lwz r4, 0x1cc(r27)
/* 8038005C 0037CF9C  48 00 02 5D */	bl changeTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock
/* 80380060 0037CFA0  7F 83 E3 78 */	mr r3, r28
/* 80380064 0037CFA4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80380068 0037CFA8  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8038006C 0037CFAC  7D 89 03 A6 */	mtctr r12
/* 80380070 0037CFB0  4E 80 04 21 */	bctrl 
/* 80380074 0037CFB4  7C 65 1B 78 */	mr r5, r3
/* 80380078 0037CFB8  80 9B 01 D4 */	lwz r4, 0x1d4(r27)
/* 8038007C 0037CFBC  7F 63 DB 78 */	mr r3, r27
/* 80380080 0037CFC0  38 A5 00 10 */	addi r5, r5, 0x10
/* 80380084 0037CFC4  48 00 04 D1 */	bl changeColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock
.L_80380088:
/* 80380088 0037CFC8  BB 21 00 E4 */	lmw r25, 0xe4(r1)
/* 8038008C 0037CFCC  80 01 01 04 */	lwz r0, 0x104(r1)
/* 80380090 0037CFD0  7C 08 03 A6 */	mtlr r0
/* 80380094 0037CFD4  38 21 01 00 */	addi r1, r1, 0x100
/* 80380098 0037CFD8  4E 80 00 20 */	blr 
.endfn changeTextTevBlock__Q28Morimura8THiScoreFi

.fn copyTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock, global
/* 8038009C 0037CFDC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803800A0 0037CFE0  7C 08 02 A6 */	mflr r0
/* 803800A4 0037CFE4  90 01 00 44 */	stw r0, 0x44(r1)
/* 803800A8 0037CFE8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803800AC 0037CFEC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803800B0 0037CFF0  7C BE 2B 78 */	mr r30, r5
/* 803800B4 0037CFF4  7F C3 F3 78 */	mr r3, r30
/* 803800B8 0037CFF8  93 A1 00 34 */	stw r29, 0x34(r1)
/* 803800BC 0037CFFC  7C 9D 23 78 */	mr r29, r4
/* 803800C0 0037D000  81 9E 00 00 */	lwz r12, 0(r30)
/* 803800C4 0037D004  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 803800C8 0037D008  7D 89 03 A6 */	mtctr r12
/* 803800CC 0037D00C  4E 80 04 21 */	bctrl 
/* 803800D0 0037D010  81 9D 00 00 */	lwz r12, 0(r29)
/* 803800D4 0037D014  7C 64 1B 78 */	mr r4, r3
/* 803800D8 0037D018  7F A3 EB 78 */	mr r3, r29
/* 803800DC 0037D01C  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 803800E0 0037D020  7D 89 03 A6 */	mtctr r12
/* 803800E4 0037D024  4E 80 04 21 */	bctrl 
/* 803800E8 0037D028  3B E0 00 00 */	li r31, 0
/* 803800EC 0037D02C  48 00 01 90 */	b .L_8038027C
.L_803800F0:
/* 803800F0 0037D030  7F C3 F3 78 */	mr r3, r30
/* 803800F4 0037D034  7F E4 FB 78 */	mr r4, r31
/* 803800F8 0037D038  81 9E 00 00 */	lwz r12, 0(r30)
/* 803800FC 0037D03C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80380100 0037D040  7D 89 03 A6 */	mtctr r12
/* 80380104 0037D044  4E 80 04 21 */	bctrl 
/* 80380108 0037D048  80 03 00 00 */	lwz r0, 0(r3)
/* 8038010C 0037D04C  7F A3 EB 78 */	mr r3, r29
/* 80380110 0037D050  7F E4 FB 78 */	mr r4, r31
/* 80380114 0037D054  38 A1 00 14 */	addi r5, r1, 0x14
/* 80380118 0037D058  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038011C 0037D05C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80380120 0037D060  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80380124 0037D064  7D 89 03 A6 */	mtctr r12
/* 80380128 0037D068  4E 80 04 21 */	bctrl 
/* 8038012C 0037D06C  7F C3 F3 78 */	mr r3, r30
/* 80380130 0037D070  7F E4 FB 78 */	mr r4, r31
/* 80380134 0037D074  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380138 0037D078  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8038013C 0037D07C  7D 89 03 A6 */	mtctr r12
/* 80380140 0037D080  4E 80 04 21 */	bctrl 
/* 80380144 0037D084  A8 03 00 00 */	lha r0, 0(r3)
/* 80380148 0037D088  7F E4 FB 78 */	mr r4, r31
/* 8038014C 0037D08C  38 A1 00 20 */	addi r5, r1, 0x20
/* 80380150 0037D090  B0 01 00 20 */	sth r0, 0x20(r1)
/* 80380154 0037D094  A8 03 00 02 */	lha r0, 2(r3)
/* 80380158 0037D098  B0 01 00 22 */	sth r0, 0x22(r1)
/* 8038015C 0037D09C  A8 03 00 04 */	lha r0, 4(r3)
/* 80380160 0037D0A0  B0 01 00 24 */	sth r0, 0x24(r1)
/* 80380164 0037D0A4  A8 03 00 06 */	lha r0, 6(r3)
/* 80380168 0037D0A8  7F A3 EB 78 */	mr r3, r29
/* 8038016C 0037D0AC  B0 01 00 26 */	sth r0, 0x26(r1)
/* 80380170 0037D0B0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80380174 0037D0B4  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80380178 0037D0B8  7D 89 03 A6 */	mtctr r12
/* 8038017C 0037D0BC  4E 80 04 21 */	bctrl 
/* 80380180 0037D0C0  7F C3 F3 78 */	mr r3, r30
/* 80380184 0037D0C4  7F E4 FB 78 */	mr r4, r31
/* 80380188 0037D0C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8038018C 0037D0CC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80380190 0037D0D0  7D 89 03 A6 */	mtctr r12
/* 80380194 0037D0D4  4E 80 04 21 */	bctrl 
/* 80380198 0037D0D8  80 03 00 00 */	lwz r0, 0(r3)
/* 8038019C 0037D0DC  7F A3 EB 78 */	mr r3, r29
/* 803801A0 0037D0E0  7F E4 FB 78 */	mr r4, r31
/* 803801A4 0037D0E4  38 A1 00 10 */	addi r5, r1, 0x10
/* 803801A8 0037D0E8  90 01 00 10 */	stw r0, 0x10(r1)
/* 803801AC 0037D0EC  81 9D 00 00 */	lwz r12, 0(r29)
/* 803801B0 0037D0F0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803801B4 0037D0F4  7D 89 03 A6 */	mtctr r12
/* 803801B8 0037D0F8  4E 80 04 21 */	bctrl 
/* 803801BC 0037D0FC  7F C3 F3 78 */	mr r3, r30
/* 803801C0 0037D100  7F E4 FB 78 */	mr r4, r31
/* 803801C4 0037D104  81 9E 00 00 */	lwz r12, 0(r30)
/* 803801C8 0037D108  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 803801CC 0037D10C  7D 89 03 A6 */	mtctr r12
/* 803801D0 0037D110  4E 80 04 21 */	bctrl 
/* 803801D4 0037D114  80 C3 00 00 */	lwz r6, 0(r3)
/* 803801D8 0037D118  7F E4 FB 78 */	mr r4, r31
/* 803801DC 0037D11C  80 03 00 04 */	lwz r0, 4(r3)
/* 803801E0 0037D120  7F A3 EB 78 */	mr r3, r29
/* 803801E4 0037D124  38 A1 00 18 */	addi r5, r1, 0x18
/* 803801E8 0037D128  90 C1 00 18 */	stw r6, 0x18(r1)
/* 803801EC 0037D12C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803801F0 0037D130  81 9D 00 00 */	lwz r12, 0(r29)
/* 803801F4 0037D134  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 803801F8 0037D138  7D 89 03 A6 */	mtctr r12
/* 803801FC 0037D13C  4E 80 04 21 */	bctrl 
/* 80380200 0037D140  7F C3 F3 78 */	mr r3, r30
/* 80380204 0037D144  7F E4 FB 78 */	mr r4, r31
/* 80380208 0037D148  81 9E 00 00 */	lwz r12, 0(r30)
/* 8038020C 0037D14C  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80380210 0037D150  7D 89 03 A6 */	mtctr r12
/* 80380214 0037D154  4E 80 04 21 */	bctrl 
/* 80380218 0037D158  80 03 00 00 */	lwz r0, 0(r3)
/* 8038021C 0037D15C  7F A3 EB 78 */	mr r3, r29
/* 80380220 0037D160  7F E4 FB 78 */	mr r4, r31
/* 80380224 0037D164  38 A1 00 0C */	addi r5, r1, 0xc
/* 80380228 0037D168  90 01 00 0C */	stw r0, 0xc(r1)
/* 8038022C 0037D16C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80380230 0037D170  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80380234 0037D174  7D 89 03 A6 */	mtctr r12
/* 80380238 0037D178  4E 80 04 21 */	bctrl 
/* 8038023C 0037D17C  7F C3 F3 78 */	mr r3, r30
/* 80380240 0037D180  7F E4 FB 78 */	mr r4, r31
/* 80380244 0037D184  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380248 0037D188  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8038024C 0037D18C  7D 89 03 A6 */	mtctr r12
/* 80380250 0037D190  4E 80 04 21 */	bctrl 
/* 80380254 0037D194  88 03 00 00 */	lbz r0, 0(r3)
/* 80380258 0037D198  7F A3 EB 78 */	mr r3, r29
/* 8038025C 0037D19C  7F E4 FB 78 */	mr r4, r31
/* 80380260 0037D1A0  38 A1 00 08 */	addi r5, r1, 8
/* 80380264 0037D1A4  98 01 00 08 */	stb r0, 8(r1)
/* 80380268 0037D1A8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8038026C 0037D1AC  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80380270 0037D1B0  7D 89 03 A6 */	mtctr r12
/* 80380274 0037D1B4  4E 80 04 21 */	bctrl 
/* 80380278 0037D1B8  3B FF 00 01 */	addi r31, r31, 1
.L_8038027C:
/* 8038027C 0037D1BC  7F C3 F3 78 */	mr r3, r30
/* 80380280 0037D1C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380284 0037D1C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80380288 0037D1C8  7D 89 03 A6 */	mtctr r12
/* 8038028C 0037D1CC  4E 80 04 21 */	bctrl 
/* 80380290 0037D1D0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80380294 0037D1D4  7C 1F 00 40 */	cmplw r31, r0
/* 80380298 0037D1D8  41 80 FE 58 */	blt .L_803800F0
/* 8038029C 0037D1DC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803802A0 0037D1E0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803802A4 0037D1E4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803802A8 0037D1E8  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 803802AC 0037D1EC  7C 08 03 A6 */	mtlr r0
/* 803802B0 0037D1F0  38 21 00 40 */	addi r1, r1, 0x40
/* 803802B4 0037D1F4  4E 80 00 20 */	blr 
.endfn copyTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock

.fn changeTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock, global
/* 803802B8 0037D1F8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803802BC 0037D1FC  7C 08 02 A6 */	mflr r0
/* 803802C0 0037D200  90 01 00 44 */	stw r0, 0x44(r1)
/* 803802C4 0037D204  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803802C8 0037D208  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803802CC 0037D20C  7C BE 2B 78 */	mr r30, r5
/* 803802D0 0037D210  93 A1 00 34 */	stw r29, 0x34(r1)
/* 803802D4 0037D214  7C 9D 23 78 */	mr r29, r4
/* 803802D8 0037D218  7F A3 EB 78 */	mr r3, r29
/* 803802DC 0037D21C  81 9D 00 00 */	lwz r12, 0(r29)
/* 803802E0 0037D220  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 803802E4 0037D224  7D 89 03 A6 */	mtctr r12
/* 803802E8 0037D228  4E 80 04 21 */	bctrl 
/* 803802EC 0037D22C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803802F0 0037D230  7C 64 1B 78 */	mr r4, r3
/* 803802F4 0037D234  7F C3 F3 78 */	mr r3, r30
/* 803802F8 0037D238  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 803802FC 0037D23C  7D 89 03 A6 */	mtctr r12
/* 80380300 0037D240  4E 80 04 21 */	bctrl 
/* 80380304 0037D244  3B E0 00 00 */	li r31, 0
/* 80380308 0037D248  48 00 01 90 */	b .L_80380498
.L_8038030C:
/* 8038030C 0037D24C  7F A3 EB 78 */	mr r3, r29
/* 80380310 0037D250  7F E4 FB 78 */	mr r4, r31
/* 80380314 0037D254  81 9D 00 00 */	lwz r12, 0(r29)
/* 80380318 0037D258  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8038031C 0037D25C  7D 89 03 A6 */	mtctr r12
/* 80380320 0037D260  4E 80 04 21 */	bctrl 
/* 80380324 0037D264  80 03 00 00 */	lwz r0, 0(r3)
/* 80380328 0037D268  7F C3 F3 78 */	mr r3, r30
/* 8038032C 0037D26C  7F E4 FB 78 */	mr r4, r31
/* 80380330 0037D270  38 A1 00 14 */	addi r5, r1, 0x14
/* 80380334 0037D274  90 01 00 14 */	stw r0, 0x14(r1)
/* 80380338 0037D278  81 9E 00 00 */	lwz r12, 0(r30)
/* 8038033C 0037D27C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80380340 0037D280  7D 89 03 A6 */	mtctr r12
/* 80380344 0037D284  4E 80 04 21 */	bctrl 
/* 80380348 0037D288  7F A3 EB 78 */	mr r3, r29
/* 8038034C 0037D28C  7F E4 FB 78 */	mr r4, r31
/* 80380350 0037D290  81 9D 00 00 */	lwz r12, 0(r29)
/* 80380354 0037D294  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80380358 0037D298  7D 89 03 A6 */	mtctr r12
/* 8038035C 0037D29C  4E 80 04 21 */	bctrl 
/* 80380360 0037D2A0  A8 03 00 00 */	lha r0, 0(r3)
/* 80380364 0037D2A4  7F E4 FB 78 */	mr r4, r31
/* 80380368 0037D2A8  38 A1 00 20 */	addi r5, r1, 0x20
/* 8038036C 0037D2AC  B0 01 00 20 */	sth r0, 0x20(r1)
/* 80380370 0037D2B0  A8 03 00 02 */	lha r0, 2(r3)
/* 80380374 0037D2B4  B0 01 00 22 */	sth r0, 0x22(r1)
/* 80380378 0037D2B8  A8 03 00 04 */	lha r0, 4(r3)
/* 8038037C 0037D2BC  B0 01 00 24 */	sth r0, 0x24(r1)
/* 80380380 0037D2C0  A8 03 00 06 */	lha r0, 6(r3)
/* 80380384 0037D2C4  7F C3 F3 78 */	mr r3, r30
/* 80380388 0037D2C8  B0 01 00 26 */	sth r0, 0x26(r1)
/* 8038038C 0037D2CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380390 0037D2D0  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80380394 0037D2D4  7D 89 03 A6 */	mtctr r12
/* 80380398 0037D2D8  4E 80 04 21 */	bctrl 
/* 8038039C 0037D2DC  7F A3 EB 78 */	mr r3, r29
/* 803803A0 0037D2E0  7F E4 FB 78 */	mr r4, r31
/* 803803A4 0037D2E4  81 9D 00 00 */	lwz r12, 0(r29)
/* 803803A8 0037D2E8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803803AC 0037D2EC  7D 89 03 A6 */	mtctr r12
/* 803803B0 0037D2F0  4E 80 04 21 */	bctrl 
/* 803803B4 0037D2F4  80 03 00 00 */	lwz r0, 0(r3)
/* 803803B8 0037D2F8  7F C3 F3 78 */	mr r3, r30
/* 803803BC 0037D2FC  7F E4 FB 78 */	mr r4, r31
/* 803803C0 0037D300  38 A1 00 10 */	addi r5, r1, 0x10
/* 803803C4 0037D304  90 01 00 10 */	stw r0, 0x10(r1)
/* 803803C8 0037D308  81 9E 00 00 */	lwz r12, 0(r30)
/* 803803CC 0037D30C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803803D0 0037D310  7D 89 03 A6 */	mtctr r12
/* 803803D4 0037D314  4E 80 04 21 */	bctrl 
/* 803803D8 0037D318  7F A3 EB 78 */	mr r3, r29
/* 803803DC 0037D31C  7F E4 FB 78 */	mr r4, r31
/* 803803E0 0037D320  81 9D 00 00 */	lwz r12, 0(r29)
/* 803803E4 0037D324  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 803803E8 0037D328  7D 89 03 A6 */	mtctr r12
/* 803803EC 0037D32C  4E 80 04 21 */	bctrl 
/* 803803F0 0037D330  80 C3 00 00 */	lwz r6, 0(r3)
/* 803803F4 0037D334  7F E4 FB 78 */	mr r4, r31
/* 803803F8 0037D338  80 03 00 04 */	lwz r0, 4(r3)
/* 803803FC 0037D33C  7F C3 F3 78 */	mr r3, r30
/* 80380400 0037D340  38 A1 00 18 */	addi r5, r1, 0x18
/* 80380404 0037D344  90 C1 00 18 */	stw r6, 0x18(r1)
/* 80380408 0037D348  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8038040C 0037D34C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380410 0037D350  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 80380414 0037D354  7D 89 03 A6 */	mtctr r12
/* 80380418 0037D358  4E 80 04 21 */	bctrl 
/* 8038041C 0037D35C  7F A3 EB 78 */	mr r3, r29
/* 80380420 0037D360  7F E4 FB 78 */	mr r4, r31
/* 80380424 0037D364  81 9D 00 00 */	lwz r12, 0(r29)
/* 80380428 0037D368  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8038042C 0037D36C  7D 89 03 A6 */	mtctr r12
/* 80380430 0037D370  4E 80 04 21 */	bctrl 
/* 80380434 0037D374  80 03 00 00 */	lwz r0, 0(r3)
/* 80380438 0037D378  7F C3 F3 78 */	mr r3, r30
/* 8038043C 0037D37C  7F E4 FB 78 */	mr r4, r31
/* 80380440 0037D380  38 A1 00 0C */	addi r5, r1, 0xc
/* 80380444 0037D384  90 01 00 0C */	stw r0, 0xc(r1)
/* 80380448 0037D388  81 9E 00 00 */	lwz r12, 0(r30)
/* 8038044C 0037D38C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80380450 0037D390  7D 89 03 A6 */	mtctr r12
/* 80380454 0037D394  4E 80 04 21 */	bctrl 
/* 80380458 0037D398  7F A3 EB 78 */	mr r3, r29
/* 8038045C 0037D39C  7F E4 FB 78 */	mr r4, r31
/* 80380460 0037D3A0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80380464 0037D3A4  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80380468 0037D3A8  7D 89 03 A6 */	mtctr r12
/* 8038046C 0037D3AC  4E 80 04 21 */	bctrl 
/* 80380470 0037D3B0  88 03 00 00 */	lbz r0, 0(r3)
/* 80380474 0037D3B4  7F C3 F3 78 */	mr r3, r30
/* 80380478 0037D3B8  7F E4 FB 78 */	mr r4, r31
/* 8038047C 0037D3BC  38 A1 00 08 */	addi r5, r1, 8
/* 80380480 0037D3C0  98 01 00 08 */	stb r0, 8(r1)
/* 80380484 0037D3C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380488 0037D3C8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8038048C 0037D3CC  7D 89 03 A6 */	mtctr r12
/* 80380490 0037D3D0  4E 80 04 21 */	bctrl 
/* 80380494 0037D3D4  3B FF 00 01 */	addi r31, r31, 1
.L_80380498:
/* 80380498 0037D3D8  7F A3 EB 78 */	mr r3, r29
/* 8038049C 0037D3DC  81 9D 00 00 */	lwz r12, 0(r29)
/* 803804A0 0037D3E0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803804A4 0037D3E4  7D 89 03 A6 */	mtctr r12
/* 803804A8 0037D3E8  4E 80 04 21 */	bctrl 
/* 803804AC 0037D3EC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 803804B0 0037D3F0  7C 1F 00 40 */	cmplw r31, r0
/* 803804B4 0037D3F4  41 80 FE 58 */	blt .L_8038030C
/* 803804B8 0037D3F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803804BC 0037D3FC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803804C0 0037D400  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803804C4 0037D404  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 803804C8 0037D408  7C 08 03 A6 */	mtlr r0
/* 803804CC 0037D40C  38 21 00 40 */	addi r1, r1, 0x40
/* 803804D0 0037D410  4E 80 00 20 */	blr 
.endfn changeTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock

.fn copyColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock, global
/* 803804D4 0037D414  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803804D8 0037D418  7C A6 2B 78 */	mr r6, r5
/* 803804DC 0037D41C  7C A7 2B 78 */	mr r7, r5
/* 803804E0 0037D420  7C 88 23 78 */	mr r8, r4
/* 803804E4 0037D424  88 05 00 08 */	lbz r0, 8(r5)
/* 803804E8 0037D428  39 20 00 00 */	li r9, 0
/* 803804EC 0037D42C  98 04 00 08 */	stb r0, 8(r4)
/* 803804F0 0037D430  88 05 00 12 */	lbz r0, 0x12(r5)
/* 803804F4 0037D434  98 04 00 12 */	stb r0, 0x12(r4)
/* 803804F8 0037D438  48 00 00 48 */	b .L_80380540
.L_803804FC:
/* 803804FC 0037D43C  A0 06 00 0A */	lhz r0, 0xa(r6)
/* 80380500 0037D440  38 C6 00 02 */	addi r6, r6, 2
/* 80380504 0037D444  39 29 00 01 */	addi r9, r9, 1
/* 80380508 0037D448  B0 04 00 0A */	sth r0, 0xa(r4)
/* 8038050C 0037D44C  38 84 00 02 */	addi r4, r4, 2
/* 80380510 0037D450  80 07 00 00 */	lwz r0, 0(r7)
/* 80380514 0037D454  38 E7 00 04 */	addi r7, r7, 4
/* 80380518 0037D458  90 01 00 08 */	stw r0, 8(r1)
/* 8038051C 0037D45C  88 61 00 08 */	lbz r3, 8(r1)
/* 80380520 0037D460  88 01 00 09 */	lbz r0, 9(r1)
/* 80380524 0037D464  98 68 00 00 */	stb r3, 0(r8)
/* 80380528 0037D468  88 61 00 0A */	lbz r3, 0xa(r1)
/* 8038052C 0037D46C  98 08 00 01 */	stb r0, 1(r8)
/* 80380530 0037D470  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80380534 0037D474  98 68 00 02 */	stb r3, 2(r8)
/* 80380538 0037D478  98 08 00 03 */	stb r0, 3(r8)
/* 8038053C 0037D47C  39 08 00 04 */	addi r8, r8, 4
.L_80380540:
/* 80380540 0037D480  88 05 00 08 */	lbz r0, 8(r5)
/* 80380544 0037D484  7C 09 00 40 */	cmplw r9, r0
/* 80380548 0037D488  41 80 FF B4 */	blt .L_803804FC
/* 8038054C 0037D48C  38 21 00 10 */	addi r1, r1, 0x10
/* 80380550 0037D490  4E 80 00 20 */	blr 
.endfn copyColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock

.fn changeColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock, global
/* 80380554 0037D494  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80380558 0037D498  7C 86 23 78 */	mr r6, r4
/* 8038055C 0037D49C  7C 87 23 78 */	mr r7, r4
/* 80380560 0037D4A0  7C A8 2B 78 */	mr r8, r5
/* 80380564 0037D4A4  88 04 00 08 */	lbz r0, 8(r4)
/* 80380568 0037D4A8  39 20 00 00 */	li r9, 0
/* 8038056C 0037D4AC  98 05 00 08 */	stb r0, 8(r5)
/* 80380570 0037D4B0  88 04 00 12 */	lbz r0, 0x12(r4)
/* 80380574 0037D4B4  98 05 00 12 */	stb r0, 0x12(r5)
/* 80380578 0037D4B8  48 00 00 48 */	b .L_803805C0
.L_8038057C:
/* 8038057C 0037D4BC  A0 06 00 0A */	lhz r0, 0xa(r6)
/* 80380580 0037D4C0  38 C6 00 02 */	addi r6, r6, 2
/* 80380584 0037D4C4  39 29 00 01 */	addi r9, r9, 1
/* 80380588 0037D4C8  B0 05 00 0A */	sth r0, 0xa(r5)
/* 8038058C 0037D4CC  38 A5 00 02 */	addi r5, r5, 2
/* 80380590 0037D4D0  80 07 00 00 */	lwz r0, 0(r7)
/* 80380594 0037D4D4  38 E7 00 04 */	addi r7, r7, 4
/* 80380598 0037D4D8  90 01 00 08 */	stw r0, 8(r1)
/* 8038059C 0037D4DC  88 61 00 08 */	lbz r3, 8(r1)
/* 803805A0 0037D4E0  88 01 00 09 */	lbz r0, 9(r1)
/* 803805A4 0037D4E4  98 68 00 00 */	stb r3, 0(r8)
/* 803805A8 0037D4E8  88 61 00 0A */	lbz r3, 0xa(r1)
/* 803805AC 0037D4EC  98 08 00 01 */	stb r0, 1(r8)
/* 803805B0 0037D4F0  88 01 00 0B */	lbz r0, 0xb(r1)
/* 803805B4 0037D4F4  98 68 00 02 */	stb r3, 2(r8)
/* 803805B8 0037D4F8  98 08 00 03 */	stb r0, 3(r8)
/* 803805BC 0037D4FC  39 08 00 04 */	addi r8, r8, 4
.L_803805C0:
/* 803805C0 0037D500  88 04 00 08 */	lbz r0, 8(r4)
/* 803805C4 0037D504  7C 09 00 40 */	cmplw r9, r0
/* 803805C8 0037D508  41 80 FF B4 */	blt .L_8038057C
/* 803805CC 0037D50C  38 21 00 10 */	addi r1, r1, 0x10
/* 803805D0 0037D510  4E 80 00 20 */	blr 
.endfn changeColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock

.fn updateLayout__Q28Morimura8THiScoreFv, global
/* 803805D4 0037D514  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803805D8 0037D518  7C 08 02 A6 */	mflr r0
/* 803805DC 0037D51C  90 01 00 44 */	stw r0, 0x44(r1)
/* 803805E0 0037D520  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 803805E4 0037D524  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 803805E8 0037D528  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 803805EC 0037D52C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 803805F0 0037D530  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803805F4 0037D534  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803805F8 0037D538  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803805FC 0037D53C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80380600 0037D540  7C 7F 1B 78 */	mr r31, r3
/* 80380604 0037D544  C0 02 09 04 */	lfs f0, lbl_8051EC64@sda21(r2)
/* 80380608 0037D548  80 63 00 88 */	lwz r3, 0x88(r3)
/* 8038060C 0037D54C  80 83 00 00 */	lwz r4, 0(r3)
/* 80380610 0037D550  80 63 00 04 */	lwz r3, 4(r3)
/* 80380614 0037D554  80 84 00 04 */	lwz r4, 4(r4)
/* 80380618 0037D558  80 63 00 04 */	lwz r3, 4(r3)
/* 8038061C 0037D55C  C0 24 00 D8 */	lfs f1, 0xd8(r4)
/* 80380620 0037D560  C0 43 00 D8 */	lfs f2, 0xd8(r3)
/* 80380624 0037D564  EF C2 08 28 */	fsubs f30, f2, f1
/* 80380628 0037D568  EC 00 07 B2 */	fmuls f0, f0, f30
/* 8038062C 0037D56C  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 80380630 0037D570  88 1F 01 74 */	lbz r0, 0x174(r31)
/* 80380634 0037D574  28 00 00 00 */	cmplwi r0, 0
/* 80380638 0037D578  41 82 00 E4 */	beq .L_8038071C
/* 8038063C 0037D57C  CB E2 08 C0 */	lfd f31, lbl_8051EC20@sda21(r2)
/* 80380640 0037D580  3B 80 00 00 */	li r28, 0
/* 80380644 0037D584  3B A0 00 00 */	li r29, 0
/* 80380648 0037D588  3F C0 43 30 */	lis r30, 0x4330
/* 8038064C 0037D58C  48 00 00 70 */	b .L_803806BC
.L_80380650:
/* 80380650 0037D590  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 80380654 0037D594  C0 0D 85 C4 */	lfs f0, mClearListHeightRate__Q28Morimura8THiScore@sda21(r13)
/* 80380658 0037D598  7C 00 E0 50 */	subf r0, r0, r28
/* 8038065C 0037D59C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80380660 0037D5A0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80380664 0037D5A4  93 C1 00 08 */	stw r30, 8(r1)
/* 80380668 0037D5A8  7C 83 E8 2E */	lwzx r4, r3, r29
/* 8038066C 0037D5AC  EC 3E 00 32 */	fmuls f1, f30, f0
/* 80380670 0037D5B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80380674 0037D5B4  C0 44 00 1C */	lfs f2, 0x1c(r4)
/* 80380678 0037D5B8  C8 01 00 08 */	lfd f0, 8(r1)
/* 8038067C 0037D5BC  80 64 00 04 */	lwz r3, 4(r4)
/* 80380680 0037D5C0  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80380684 0037D5C4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80380688 0037D5C8  EC 02 00 2A */	fadds f0, f2, f0
/* 8038068C 0037D5CC  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 80380690 0037D5D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80380694 0037D5D4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80380698 0037D5D8  7D 89 03 A6 */	mtctr r12
/* 8038069C 0037D5DC  4E 80 04 21 */	bctrl 
/* 803806A0 0037D5E0  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 803806A4 0037D5E4  3B 9C 00 01 */	addi r28, r28, 1
/* 803806A8 0037D5E8  7C 83 E8 2E */	lwzx r4, r3, r29
/* 803806AC 0037D5EC  3B BD 00 04 */	addi r29, r29, 4
/* 803806B0 0037D5F0  80 64 00 04 */	lwz r3, 4(r4)
/* 803806B4 0037D5F4  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 803806B8 0037D5F8  D0 04 00 1C */	stfs f0, 0x1c(r4)
.L_803806BC:
/* 803806BC 0037D5FC  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 803806C0 0037D600  7C 1C 00 00 */	cmpw r28, r0
/* 803806C4 0037D604  41 80 FF 8C */	blt .L_80380650
/* 803806C8 0037D608  80 1F 00 90 */	lwz r0, 0x90(r31)
/* 803806CC 0037D60C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 803806D0 0037D610  54 00 10 3A */	slwi r0, r0, 2
/* 803806D4 0037D614  80 A3 00 00 */	lwz r5, 0(r3)
/* 803806D8 0037D618  80 83 00 04 */	lwz r4, 4(r3)
/* 803806DC 0037D61C  7C 63 00 2E */	lwzx r3, r3, r0
/* 803806E0 0037D620  80 A5 00 04 */	lwz r5, 4(r5)
/* 803806E4 0037D624  80 84 00 04 */	lwz r4, 4(r4)
/* 803806E8 0037D628  80 63 00 04 */	lwz r3, 4(r3)
/* 803806EC 0037D62C  C0 44 00 D8 */	lfs f2, 0xd8(r4)
/* 803806F0 0037D630  C0 25 00 D8 */	lfs f1, 0xd8(r5)
/* 803806F4 0037D634  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 803806F8 0037D638  EF C2 08 28 */	fsubs f30, f2, f1
/* 803806FC 0037D63C  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 80380700 0037D640  80 1F 00 98 */	lwz r0, 0x98(r31)
/* 80380704 0037D644  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80380708 0037D648  54 00 10 3A */	slwi r0, r0, 2
/* 8038070C 0037D64C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80380710 0037D650  80 63 00 04 */	lwz r3, 4(r3)
/* 80380714 0037D654  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 80380718 0037D658  D0 1F 00 A4 */	stfs f0, 0xa4(r31)
.L_8038071C:
/* 8038071C 0037D65C  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80380720 0037D660  D3 C3 00 18 */	stfs f30, 0x18(r3)
/* 80380724 0037D664  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80380728 0037D668  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8038072C 0037D66C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80380730 0037D670  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80380734 0037D674  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80380738 0037D678  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8038073C 0037D67C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80380740 0037D680  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80380744 0037D684  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80380748 0037D688  7C 08 03 A6 */	mtlr r0
/* 8038074C 0037D68C  38 21 00 40 */	addi r1, r1, 0x40
/* 80380750 0037D690  4E 80 00 20 */	blr 
.endfn updateLayout__Q28Morimura8THiScoreFv

.fn __ct__Q28Morimura13THiScoreSceneFv, global
/* 80380754 0037D694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80380758 0037D698  7C 08 02 A6 */	mflr r0
/* 8038075C 0037D69C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80380760 0037D6A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80380764 0037D6A4  7C 7F 1B 78 */	mr r31, r3
/* 80380768 0037D6A8  48 0D 10 29 */	bl __ct__Q26Screen9SceneBaseFv
/* 8038076C 0037D6AC  3C 80 80 4E */	lis r4, __vt__Q28Morimura9THIOScene@ha
/* 80380770 0037D6B0  3C 60 80 4E */	lis r3, __vt__Q28Morimura13THiScoreScene@ha
/* 80380774 0037D6B4  38 04 3F 18 */	addi r0, r4, __vt__Q28Morimura9THIOScene@l
/* 80380778 0037D6B8  38 80 00 00 */	li r4, 0
/* 8038077C 0037D6BC  90 1F 00 00 */	stw r0, 0(r31)
/* 80380780 0037D6C0  38 03 42 40 */	addi r0, r3, __vt__Q28Morimura13THiScoreScene@l
/* 80380784 0037D6C4  7F E3 FB 78 */	mr r3, r31
/* 80380788 0037D6C8  90 9F 02 20 */	stw r4, 0x220(r31)
/* 8038078C 0037D6CC  90 1F 00 00 */	stw r0, 0(r31)
/* 80380790 0037D6D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80380794 0037D6D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80380798 0037D6D8  7C 08 03 A6 */	mtlr r0
/* 8038079C 0037D6DC  38 21 00 10 */	addi r1, r1, 0x10
/* 803807A0 0037D6E0  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura13THiScoreSceneFv

.fn getResName__Q28Morimura13THiScoreSceneCFv, global
/* 803807A4 0037D6E4  3C 60 80 49 */	lis r3, lbl_80493680@ha
/* 803807A8 0037D6E8  38 63 36 80 */	addi r3, r3, lbl_80493680@l
/* 803807AC 0037D6EC  4E 80 00 20 */	blr 
.endfn getResName__Q28Morimura13THiScoreSceneCFv

.fn doCreateObj__Q28Morimura13THiScoreSceneFP10JKRArchive, weak
/* 803807B0 0037D6F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803807B4 0037D6F4  7C 08 02 A6 */	mflr r0
/* 803807B8 0037D6F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803807BC 0037D6FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803807C0 0037D700  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803807C4 0037D704  7C 9E 23 78 */	mr r30, r4
/* 803807C8 0037D708  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803807CC 0037D70C  7C 7D 1B 78 */	mr r29, r3
/* 803807D0 0037D710  38 60 02 10 */	li r3, 0x210
/* 803807D4 0037D714  4B CA 36 D1 */	bl __nw__FUl
/* 803807D8 0037D718  7C 7F 1B 79 */	or. r31, r3, r3
/* 803807DC 0037D71C  41 82 00 0C */	beq .L_803807E8
/* 803807E0 0037D720  4B FF C7 0D */	bl __ct__Q28Morimura8THiScoreFv
/* 803807E4 0037D724  7C 7F 1B 78 */	mr r31, r3
.L_803807E8:
/* 803807E8 0037D728  7F A3 EB 78 */	mr r3, r29
/* 803807EC 0037D72C  7F E4 FB 78 */	mr r4, r31
/* 803807F0 0037D730  7F C5 F3 78 */	mr r5, r30
/* 803807F4 0037D734  48 0D 15 81 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 803807F8 0037D738  93 FD 02 20 */	stw r31, 0x220(r29)
/* 803807FC 0037D73C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80380800 0037D740  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80380804 0037D744  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80380808 0037D748  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8038080C 0037D74C  7C 08 03 A6 */	mtlr r0
/* 80380810 0037D750  38 21 00 20 */	addi r1, r1, 0x20
/* 80380814 0037D754  4E 80 00 20 */	blr 
.endfn doCreateObj__Q28Morimura13THiScoreSceneFP10JKRArchive

.fn getSceneType__Q28Morimura13THiScoreSceneFv, weak
/* 80380818 0037D758  38 60 27 36 */	li r3, 0x2736
/* 8038081C 0037D75C  4E 80 00 20 */	blr 
.endfn getSceneType__Q28Morimura13THiScoreSceneFv

.fn getOwnerID__Q28Morimura13THiScoreSceneFv, weak
/* 80380820 0037D760  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80380824 0037D764  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 80380828 0037D768  4E 80 00 20 */	blr 
.endfn getOwnerID__Q28Morimura13THiScoreSceneFv

.fn getMemberID__Q28Morimura13THiScoreSceneFv, weak
/* 8038082C 0037D76C  3C 80 48 49 */	lis r4, 0x48495343@ha
/* 80380830 0037D770  38 60 00 00 */	li r3, 0
/* 80380834 0037D774  38 84 53 43 */	addi r4, r4, 0x48495343@l
/* 80380838 0037D778  4E 80 00 20 */	blr 
.endfn getMemberID__Q28Morimura13THiScoreSceneFv

.fn getSize__Q28Morimura19DispMemberHighScoreFv, weak
/* 8038083C 0037D77C  38 60 00 10 */	li r3, 0x10
/* 80380840 0037D780  4E 80 00 20 */	blr 
.endfn getSize__Q28Morimura19DispMemberHighScoreFv

.fn getOwnerID__Q28Morimura19DispMemberHighScoreFv, weak
/* 80380844 0037D784  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80380848 0037D788  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 8038084C 0037D78C  4E 80 00 20 */	blr 
.endfn getOwnerID__Q28Morimura19DispMemberHighScoreFv

.fn getMemberID__Q28Morimura19DispMemberHighScoreFv, weak
/* 80380850 0037D790  3C 80 48 49 */	lis r4, 0x48495343@ha
/* 80380854 0037D794  38 60 00 00 */	li r3, 0
/* 80380858 0037D798  38 84 53 43 */	addi r4, r4, 0x48495343@l
/* 8038085C 0037D79C  4E 80 00 20 */	blr 
.endfn getMemberID__Q28Morimura19DispMemberHighScoreFv

.fn getDispMemberBase__Q28Morimura8THiScoreFv, weak
/* 80380860 0037D7A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80380864 0037D7A4  7C 08 02 A6 */	mflr r0
/* 80380868 0037D7A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038086C 0037D7AC  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80380870 0037D7B0  28 00 00 00 */	cmplwi r0, 0
/* 80380874 0037D7B4  41 82 00 0C */	beq .L_80380880
/* 80380878 0037D7B8  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 8038087C 0037D7BC  48 00 00 08 */	b .L_80380884
.L_80380880:
/* 80380880 0037D7C0  48 0D 37 29 */	bl getDispMember__Q26Screen7ObjBaseFv
.L_80380884:
/* 80380884 0037D7C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80380888 0037D7C8  7C 08 03 A6 */	mtlr r0
/* 8038088C 0037D7CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80380890 0037D7D0  4E 80 00 20 */	blr 
.endfn getDispMemberBase__Q28Morimura8THiScoreFv

.fn getIdMax__Q28Morimura8THiScoreFv, weak
/* 80380894 0037D7D4  38 60 00 10 */	li r3, 0x10
/* 80380898 0037D7D8  4E 80 00 20 */	blr 
.endfn getIdMax__Q28Morimura8THiScoreFv

.fn setShortenIndex__Q28Morimura11TScrollListFiib, weak
/* 8038089C 0037D7DC  4E 80 00 20 */	blr 
.endfn setShortenIndex__Q28Morimura11TScrollListFiib

.fn doUpdateIn__Q28Morimura11TScrollListFv, weak
/* 803808A0 0037D7E0  4E 80 00 20 */	blr 
.endfn doUpdateIn__Q28Morimura11TScrollListFv

.fn doUpdateOut__Q28Morimura11TScrollListFv, weak
/* 803808A4 0037D7E4  4E 80 00 20 */	blr 
.endfn doUpdateOut__Q28Morimura11TScrollListFv

.fn __dt__Q28Morimura8THiScoreFv, weak
/* 803808A8 0037D7E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803808AC 0037D7EC  7C 08 02 A6 */	mflr r0
/* 803808B0 0037D7F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803808B4 0037D7F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803808B8 0037D7F8  7C 9F 23 78 */	mr r31, r4
/* 803808BC 0037D7FC  93 C1 00 08 */	stw r30, 8(r1)
/* 803808C0 0037D800  7C 7E 1B 79 */	or. r30, r3, r3
/* 803808C4 0037D804  41 82 00 A4 */	beq .L_80380968
/* 803808C8 0037D808  3C 80 80 4E */	lis r4, __vt__Q28Morimura8THiScore@ha
/* 803808CC 0037D80C  38 84 42 A8 */	addi r4, r4, __vt__Q28Morimura8THiScore@l
/* 803808D0 0037D810  90 9E 00 00 */	stw r4, 0(r30)
/* 803808D4 0037D814  38 04 00 10 */	addi r0, r4, 0x10
/* 803808D8 0037D818  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803808DC 0037D81C  41 82 00 7C */	beq .L_80380958
/* 803808E0 0037D820  3C 80 80 4E */	lis r4, __vt__Q28Morimura11TScrollList@ha
/* 803808E4 0037D824  38 84 58 C0 */	addi r4, r4, __vt__Q28Morimura11TScrollList@l
/* 803808E8 0037D828  90 9E 00 00 */	stw r4, 0(r30)
/* 803808EC 0037D82C  38 04 00 10 */	addi r0, r4, 0x10
/* 803808F0 0037D830  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803808F4 0037D834  41 82 00 64 */	beq .L_80380958
/* 803808F8 0037D838  3C 80 80 4E */	lis r4, __vt__Q28Morimura9TTestBase@ha
/* 803808FC 0037D83C  38 84 B8 F8 */	addi r4, r4, __vt__Q28Morimura9TTestBase@l
/* 80380900 0037D840  90 9E 00 00 */	stw r4, 0(r30)
/* 80380904 0037D844  38 04 00 10 */	addi r0, r4, 0x10
/* 80380908 0037D848  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8038090C 0037D84C  41 82 00 4C */	beq .L_80380958
/* 80380910 0037D850  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 80380914 0037D854  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 80380918 0037D858  90 9E 00 00 */	stw r4, 0(r30)
/* 8038091C 0037D85C  38 04 00 10 */	addi r0, r4, 0x10
/* 80380920 0037D860  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80380924 0037D864  41 82 00 34 */	beq .L_80380958
/* 80380928 0037D868  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8038092C 0037D86C  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80380930 0037D870  90 9E 00 00 */	stw r4, 0(r30)
/* 80380934 0037D874  38 04 00 10 */	addi r0, r4, 0x10
/* 80380938 0037D878  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8038093C 0037D87C  48 09 0C 95 */	bl del__5CNodeFv
/* 80380940 0037D880  38 7E 00 18 */	addi r3, r30, 0x18
/* 80380944 0037D884  38 80 00 00 */	li r4, 0
/* 80380948 0037D888  4B C9 C6 ED */	bl __dt__11JKRDisposerFv
/* 8038094C 0037D88C  7F C3 F3 78 */	mr r3, r30
/* 80380950 0037D890  38 80 00 00 */	li r4, 0
/* 80380954 0037D894  48 09 0C 35 */	bl __dt__5CNodeFv
.L_80380958:
/* 80380958 0037D898  7F E0 07 35 */	extsh. r0, r31
/* 8038095C 0037D89C  40 81 00 0C */	ble .L_80380968
/* 80380960 0037D8A0  7F C3 F3 78 */	mr r3, r30
/* 80380964 0037D8A4  4B CA 37 51 */	bl __dl__FPv
.L_80380968:
/* 80380968 0037D8A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038096C 0037D8AC  7F C3 F3 78 */	mr r3, r30
/* 80380970 0037D8B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80380974 0037D8B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80380978 0037D8B8  7C 08 03 A6 */	mtlr r0
/* 8038097C 0037D8BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80380980 0037D8C0  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura8THiScoreFv

.fn __dt__Q28Morimura15THiScoreIndPaneFv, weak
/* 80380984 0037D8C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80380988 0037D8C8  7C 08 02 A6 */	mflr r0
/* 8038098C 0037D8CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80380990 0037D8D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80380994 0037D8D4  7C 9F 23 78 */	mr r31, r4
/* 80380998 0037D8D8  93 C1 00 08 */	stw r30, 8(r1)
/* 8038099C 0037D8DC  7C 7E 1B 79 */	or. r30, r3, r3
/* 803809A0 0037D8E0  41 82 00 38 */	beq .L_803809D8
/* 803809A4 0037D8E4  3C 80 80 4E */	lis r4, __vt__Q28Morimura15THiScoreIndPane@ha
/* 803809A8 0037D8E8  38 04 43 68 */	addi r0, r4, __vt__Q28Morimura15THiScoreIndPane@l
/* 803809AC 0037D8EC  90 1E 00 00 */	stw r0, 0(r30)
/* 803809B0 0037D8F0  41 82 00 18 */	beq .L_803809C8
/* 803809B4 0037D8F4  3C A0 80 4E */	lis r5, __vt__Q28Morimura8TIndPane@ha
/* 803809B8 0037D8F8  38 80 00 00 */	li r4, 0
/* 803809BC 0037D8FC  38 05 58 6C */	addi r0, r5, __vt__Q28Morimura8TIndPane@l
/* 803809C0 0037D900  90 1E 00 00 */	stw r0, 0(r30)
/* 803809C4 0037D904  48 09 0B C5 */	bl __dt__5CNodeFv
.L_803809C8:
/* 803809C8 0037D908  7F E0 07 35 */	extsh. r0, r31
/* 803809CC 0037D90C  40 81 00 0C */	ble .L_803809D8
/* 803809D0 0037D910  7F C3 F3 78 */	mr r3, r30
/* 803809D4 0037D914  4B CA 36 E1 */	bl __dl__FPv
.L_803809D8:
/* 803809D8 0037D918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803809DC 0037D91C  7F C3 F3 78 */	mr r3, r30
/* 803809E0 0037D920  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803809E4 0037D924  83 C1 00 08 */	lwz r30, 8(r1)
/* 803809E8 0037D928  7C 08 03 A6 */	mtlr r0
/* 803809EC 0037D92C  38 21 00 10 */	addi r1, r1, 0x10
/* 803809F0 0037D930  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura15THiScoreIndPaneFv

.fn __sinit_hiScore2D_cpp, local
/* 803809F4 0037D934  C0 82 08 F4 */	lfs f4, lbl_8051EC54@sda21(r2)
/* 803809F8 0037D938  3C 60 80 51 */	lis r3, mScrollParm__Q28Morimura8THiScore@ha
/* 803809FC 0037D93C  C0 62 09 5C */	lfs f3, lbl_8051ECBC@sda21(r2)
/* 80380A00 0037D940  D4 83 40 30 */	stfsu f4, mScrollParm__Q28Morimura8THiScore@l(r3)
/* 80380A04 0037D944  C0 42 09 00 */	lfs f2, lbl_8051EC60@sda21(r2)
/* 80380A08 0037D948  C0 22 09 60 */	lfs f1, lbl_8051ECC0@sda21(r2)
/* 80380A0C 0037D94C  C0 02 09 04 */	lfs f0, lbl_8051EC64@sda21(r2)
/* 80380A10 0037D950  D0 63 00 04 */	stfs f3, 4(r3)
/* 80380A14 0037D954  D0 43 00 08 */	stfs f2, 8(r3)
/* 80380A18 0037D958  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 80380A1C 0037D95C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80380A20 0037D960  4E 80 00 20 */	blr 
.endfn __sinit_hiScore2D_cpp

.fn "@24@__dt__Q28Morimura8THiScoreFv", weak
/* 80380A24 0037D964  38 63 FF E8 */	addi r3, r3, -24
/* 80380A28 0037D968  4B FF FE 80 */	b __dt__Q28Morimura8THiScoreFv
.endfn "@24@__dt__Q28Morimura8THiScoreFv"
