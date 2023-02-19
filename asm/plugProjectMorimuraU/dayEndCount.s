.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804901E8, local
	.asciz "dayEndCount"
.endobj lbl_804901E8
.balign 4
.obj lbl_804901F4, local
	.asciz "DayEndCount"
.endobj lbl_804901F4
.balign 4
.obj lbl_80490200, local
	.asciz "count.blo"
.endobj lbl_80490200
.balign 4
.obj lbl_8049020C, local
	.asciz "dayEndCount.cpp"
.endobj lbl_8049020C
.balign 4
.obj lbl_8049021C, local
	.asciz "P2Assert"
.endobj lbl_8049021C
.balign 4
.obj lbl_80490228, local
	.asciz "challengeEndCount"
.endobj lbl_80490228
.balign 4
.obj lbl_8049023C, local
	.asciz "challengeEndCount1p"
.endobj lbl_8049023C
.balign 4
.obj lbl_80490250, local
	.asciz "challengeEndCount2p"
.endobj lbl_80490250
.balign 4
.obj lbl_80490264, local
	.asciz "res_ground.szs"
.endobj lbl_80490264
.balign 4
.obj lbl_80490274, local
	.asciz "screenObj.h"
.endobj lbl_80490274

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj deTagName__8Morimura, global
	.ascii "cd00"
	.ascii "cd01"
	.ascii "cd02"
	.ascii "cd03"
	.ascii "cd04"
	.ascii "cd05"
	.ascii "cd06"
	.ascii "cd07"
	.ascii "cd08"
	.ascii "cd09"
	.ascii "cd10"
.endobj deTagName__8Morimura
.obj __vt__Q28Morimura15TCountDownScene, global
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura15TCountDownSceneFv
	.4byte getOwnerID__Q28Morimura15TCountDownSceneFv
	.4byte getMemberID__Q28Morimura15TCountDownSceneFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura15TCountDownSceneCFv
	.4byte doCreateObj__Q28Morimura15TCountDownSceneFP10JKRArchive
	.4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q28Morimura15TCountDownSceneFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv
.endobj __vt__Q28Morimura15TCountDownScene
.obj __vt__Q28Morimura20TChallengeEndCount2p, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura20TChallengeEndCount2pFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura20TChallengeEndCount2pFv"
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
	.4byte doStart__Q28Morimura12TDayEndCountFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q28Morimura18TChallengeEndCountFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdate__Q28Morimura20TChallengeEndCount2pFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
	.4byte doDraw__Q28Morimura12TDayEndCountFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte getDispMemberBase__Q28Morimura12TDayEndCountFv
.endobj __vt__Q28Morimura20TChallengeEndCount2p
.obj __vt__Q28Morimura20TChallengeEndCount1p, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura20TChallengeEndCount1pFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura20TChallengeEndCount1pFv"
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
	.4byte doStart__Q28Morimura12TDayEndCountFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q28Morimura18TChallengeEndCountFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdate__Q28Morimura20TChallengeEndCount1pFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
	.4byte doDraw__Q28Morimura12TDayEndCountFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte getDispMemberBase__Q28Morimura12TDayEndCountFv
.endobj __vt__Q28Morimura20TChallengeEndCount1p
.obj __vt__Q28Morimura18TChallengeEndCount, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura18TChallengeEndCountFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura18TChallengeEndCountFv"
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
	.4byte doStart__Q28Morimura12TDayEndCountFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q28Morimura18TChallengeEndCountFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdate__Q28Morimura12TDayEndCountFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
	.4byte doDraw__Q28Morimura12TDayEndCountFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte getDispMemberBase__Q28Morimura12TDayEndCountFv
.endobj __vt__Q28Morimura18TChallengeEndCount
.obj __vt__Q28Morimura12TDayEndCount, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura12TDayEndCountFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura12TDayEndCountFv"
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
	.4byte doStart__Q28Morimura12TDayEndCountFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q28Morimura12TDayEndCountFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdate__Q28Morimura12TDayEndCountFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
	.4byte doDraw__Q28Morimura12TDayEndCountFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte getDispMemberBase__Q28Morimura12TDayEndCountFv
.endobj __vt__Q28Morimura12TDayEndCount

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj mWaitTime__Q28Morimura12TDayEndCount, global
	.float 0.4
.endobj mWaitTime__Q28Morimura12TDayEndCount
.obj mAlphaMax__Q28Morimura12TDayEndCount, global
	.byte 0xC8
.endobj mAlphaMax__Q28Morimura12TDayEndCount
.obj mWaitAlpha__Q28Morimura12TDayEndCount, global
	.byte 0x64
.endobj mWaitAlpha__Q28Morimura12TDayEndCount
.balign 4
.obj mWaitScale__Q28Morimura12TDayEndCount, global
	.float 0.2
.endobj mWaitScale__Q28Morimura12TDayEndCount
.obj mStopScale__Q28Morimura12TDayEndCount, global
	.float 1.0
.endobj mStopScale__Q28Morimura12TDayEndCount
.obj mScaleMax__Q28Morimura12TDayEndCount, global
	.float 2.0
.endobj mScaleMax__Q28Morimura12TDayEndCount
.obj m2pScale__Q28Morimura12TDayEndCount, global
	.float 0.75
.endobj m2pScale__Q28Morimura12TDayEndCount
.obj m2pOffsetY__Q28Morimura12TDayEndCount, global
	.float 170.0
.endobj m2pOffsetY__Q28Morimura12TDayEndCount
.obj mColor__Q28Morimura12TDayEndCount, global
	.4byte 0x00FF00FF
.endobj mColor__Q28Morimura12TDayEndCount
.obj mNumberColor__Q28Morimura12TDayEndCount, global
	.4byte 0xFF6400FF
.endobj mNumberColor__Q28Morimura12TDayEndCount

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mColorTest__Q28Morimura12TDayEndCount, global
	.skip 0x1
.endobj mColorTest__Q28Morimura12TDayEndCount
.obj mTestChangeColor__Q28Morimura12TDayEndCount, global
	.skip 0x1
.endobj mTestChangeColor__Q28Morimura12TDayEndCount
.obj mCountDownType__Q28Morimura12TDayEndCount, global
	.skip 0x1
.endobj mCountDownType__Q28Morimura12TDayEndCount

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051E1F8, local
	.float 1.0
.endobj lbl_8051E1F8
.obj lbl_8051E1FC, local
	.float 0.0
.endobj lbl_8051E1FC
.obj lbl_8051E200, local
	.float 0.9
.endobj lbl_8051E200
.obj lbl_8051E204, local
	.float 25.0
.endobj lbl_8051E204
.obj lbl_8051E208, local
	.float 1.0E-4
.endobj lbl_8051E208
.obj lbl_8051E20C, local
	.float 0.01
.endobj lbl_8051E20C
.obj lbl_8051E210, local
	.float 10.0
.endobj lbl_8051E210
.obj lbl_8051E214, local
	.float 1.1
.endobj lbl_8051E214
.obj lbl_8051E218, local
	.float 11.0
.endobj lbl_8051E218
.obj lbl_8051E21C, local
	.float 0.5
.endobj lbl_8051E21C
.obj lbl_8051E220, local
	.float 100.0
.endobj lbl_8051E220
.obj lbl_8051E224, local
	.float 255.0
.endobj lbl_8051E224
.obj lbl_8051E228, local # 4 pi
	.float 12.566371
.endobj lbl_8051E228
.obj lbl_8051E22C, local
	.float -325.9493
.endobj lbl_8051E22C
.obj lbl_8051E230, local
	.float 325.9493
.endobj lbl_8051E230
.obj lbl_8051E234, local
	.float 5.0
.endobj lbl_8051E234
.balign 8
.obj lbl_8051E238, local
	.8byte 0x4330000080000000
.endobj lbl_8051E238
.balign 8
.obj lbl_8051E240, local
	.8byte 0x4330000000000000
.endobj lbl_8051E240
.obj lbl_8051E248, local # tau
	.float 6.2831855
.endobj lbl_8051E248
.obj lbl_8051E24C, local
	.float 36.0
.endobj lbl_8051E24C
.obj lbl_8051E250, local
	.float 360.0
.endobj lbl_8051E250
.obj lbl_8051E254, local
	.float 80.0
.endobj lbl_8051E254

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q28Morimura12TDayEndCountFv, global
/* 80344088 00340FC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034408C 00340FCC  7C 08 02 A6 */	mflr r0
/* 80344090 00340FD0  3C 80 80 49 */	lis r4, lbl_804901F4@ha
/* 80344094 00340FD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80344098 00340FD8  38 84 01 F4 */	addi r4, r4, lbl_804901F4@l
/* 8034409C 00340FDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803440A0 00340FE0  7C 7F 1B 78 */	mr r31, r3
/* 803440A4 00340FE4  48 00 51 25 */	bl __ct__Q28Morimura9TTestBaseFPc
/* 803440A8 00340FE8  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 803440AC 00340FEC  39 00 00 00 */	li r8, 0
/* 803440B0 00340FF0  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 803440B4 00340FF4  38 00 FF FF */	li r0, -1
/* 803440B8 00340FF8  90 9F 00 00 */	stw r4, 0(r31)
/* 803440BC 00340FFC  38 A4 00 10 */	addi r5, r4, 0x10
/* 803440C0 00341000  3C 60 80 04 */	lis r3, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 803440C4 00341004  38 C0 00 04 */	li r6, 4
/* 803440C8 00341008  90 BF 00 18 */	stw r5, 0x18(r31)
/* 803440CC 0034100C  38 83 9B A0 */	addi r4, r3, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 803440D0 00341010  38 7F 00 96 */	addi r3, r31, 0x96
/* 803440D4 00341014  38 A0 00 00 */	li r5, 0
/* 803440D8 00341018  91 1F 00 80 */	stw r8, 0x80(r31)
/* 803440DC 0034101C  38 E0 00 04 */	li r7, 4
/* 803440E0 00341020  91 1F 00 84 */	stw r8, 0x84(r31)
/* 803440E4 00341024  91 1F 00 88 */	stw r8, 0x88(r31)
/* 803440E8 00341028  91 1F 00 8C */	stw r8, 0x8c(r31)
/* 803440EC 0034102C  90 1F 00 90 */	stw r0, 0x90(r31)
/* 803440F0 00341030  99 1F 00 94 */	stb r8, 0x94(r31)
/* 803440F4 00341034  4B D7 D7 49 */	bl __construct_array
/* 803440F8 00341038  3C 80 80 04 */	lis r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 803440FC 0034103C  38 7F 00 A6 */	addi r3, r31, 0xa6
/* 80344100 00341040  38 84 9B A0 */	addi r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 80344104 00341044  38 A0 00 00 */	li r5, 0
/* 80344108 00341048  38 C0 00 04 */	li r6, 4
/* 8034410C 0034104C  38 E0 00 04 */	li r7, 4
/* 80344110 00341050  4B D7 D7 2D */	bl __construct_array
/* 80344114 00341054  38 00 00 01 */	li r0, 1
/* 80344118 00341058  38 A0 00 00 */	li r5, 0
/* 8034411C 0034105C  98 1F 00 C9 */	stb r0, 0xc9(r31)
/* 80344120 00341060  38 00 00 FF */	li r0, 0xff
/* 80344124 00341064  C0 22 FE 98 */	lfs f1, lbl_8051E1F8@sda21(r2)
/* 80344128 00341068  38 8D 85 6C */	addi r4, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 8034412C 0034106C  98 BF 00 CA */	stb r5, 0xca(r31)
/* 80344130 00341070  7F E3 FB 78 */	mr r3, r31
/* 80344134 00341074  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 80344138 00341078  D0 3F 00 CC */	stfs f1, 0xcc(r31)
/* 8034413C 0034107C  D0 1F 00 D0 */	stfs f0, 0xd0(r31)
/* 80344140 00341080  98 AD 85 6C */	stb r5, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344144 00341084  98 04 00 01 */	stb r0, 1(r4)
/* 80344148 00341088  98 A4 00 02 */	stb r5, 2(r4)
/* 8034414C 0034108C  98 04 00 03 */	stb r0, 3(r4)
/* 80344150 00341090  98 AD 98 91 */	stb r5, mTestChangeColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344154 00341094  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80344158 00341098  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034415C 0034109C  7C 08 03 A6 */	mtlr r0
/* 80344160 003410A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80344164 003410A4  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura12TDayEndCountFv

.fn __dt__Q28Morimura9TTestBaseFv, weak
/* 80344168 003410A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034416C 003410AC  7C 08 02 A6 */	mflr r0
/* 80344170 003410B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80344174 003410B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80344178 003410B8  7C 9F 23 78 */	mr r31, r4
/* 8034417C 003410BC  93 C1 00 08 */	stw r30, 8(r1)
/* 80344180 003410C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80344184 003410C4  41 82 00 74 */	beq .L_803441F8
/* 80344188 003410C8  3C 80 80 4E */	lis r4, __vt__Q28Morimura9TTestBase@ha
/* 8034418C 003410CC  38 84 B8 F8 */	addi r4, r4, __vt__Q28Morimura9TTestBase@l
/* 80344190 003410D0  90 9E 00 00 */	stw r4, 0(r30)
/* 80344194 003410D4  38 04 00 10 */	addi r0, r4, 0x10
/* 80344198 003410D8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8034419C 003410DC  41 82 00 4C */	beq .L_803441E8
/* 803441A0 003410E0  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 803441A4 003410E4  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 803441A8 003410E8  90 9E 00 00 */	stw r4, 0(r30)
/* 803441AC 003410EC  38 04 00 10 */	addi r0, r4, 0x10
/* 803441B0 003410F0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803441B4 003410F4  41 82 00 34 */	beq .L_803441E8
/* 803441B8 003410F8  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 803441BC 003410FC  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 803441C0 00341100  90 9E 00 00 */	stw r4, 0(r30)
/* 803441C4 00341104  38 04 00 10 */	addi r0, r4, 0x10
/* 803441C8 00341108  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803441CC 0034110C  48 0C D4 05 */	bl del__5CNodeFv
/* 803441D0 00341110  38 7E 00 18 */	addi r3, r30, 0x18
/* 803441D4 00341114  38 80 00 00 */	li r4, 0
/* 803441D8 00341118  4B CD 8E 5D */	bl __dt__11JKRDisposerFv
/* 803441DC 0034111C  7F C3 F3 78 */	mr r3, r30
/* 803441E0 00341120  38 80 00 00 */	li r4, 0
/* 803441E4 00341124  48 0C D3 A5 */	bl __dt__5CNodeFv
.L_803441E8:
/* 803441E8 00341128  7F E0 07 35 */	extsh. r0, r31
/* 803441EC 0034112C  40 81 00 0C */	ble .L_803441F8
/* 803441F0 00341130  7F C3 F3 78 */	mr r3, r30
/* 803441F4 00341134  4B CD FE C1 */	bl __dl__FPv
.L_803441F8:
/* 803441F8 00341138  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803441FC 0034113C  7F C3 F3 78 */	mr r3, r30
/* 80344200 00341140  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80344204 00341144  83 C1 00 08 */	lwz r30, 8(r1)
/* 80344208 00341148  7C 08 03 A6 */	mtlr r0
/* 8034420C 0034114C  38 21 00 10 */	addi r1, r1, 0x10
/* 80344210 00341150  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura9TTestBaseFv

.fn doCreate__Q28Morimura12TDayEndCountFP10JKRArchive, global
/* 80344214 00341154  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80344218 00341158  7C 08 02 A6 */	mflr r0
/* 8034421C 0034115C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80344220 00341160  38 00 00 C8 */	li r0, 0xc8
/* 80344224 00341164  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80344228 00341168  7C 9E 23 78 */	mr r30, r4
/* 8034422C 0034116C  3C 80 80 49 */	lis r4, lbl_804901E8@ha
/* 80344230 00341170  7C 7D 1B 78 */	mr r29, r3
/* 80344234 00341174  3B E4 01 E8 */	addi r31, r4, lbl_804901E8@l
/* 80344238 00341178  93 C3 00 78 */	stw r30, 0x78(r3)
/* 8034423C 0034117C  98 0D 85 54 */	stb r0, mAlphaMax__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344240 00341180  48 10 FD 69 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80344244 00341184  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 80344248 00341188  3C C0 4F 55 */	lis r6, 0x4F554E44@ha
/* 8034424C 0034118C  38 A0 47 52 */	li r5, 0x4752
/* 80344250 00341190  7C 7C 1B 78 */	mr r28, r3
/* 80344254 00341194  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 80344258 00341198  38 C6 4E 44 */	addi r6, r6, 0x4F554E44@l
/* 8034425C 0034119C  4B FC B0 C1 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 80344260 003411A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80344264 003411A4  41 82 00 10 */	beq .L_80344274
/* 80344268 003411A8  38 1C 00 68 */	addi r0, r28, 0x68
/* 8034426C 003411AC  90 1D 00 7C */	stw r0, 0x7c(r29)
/* 80344270 003411B0  48 00 00 AC */	b .L_8034431C
.L_80344274:
/* 80344274 003411B4  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 80344278 003411B8  3C C0 41 4C */	lis r6, 0x414C3150@ha
/* 8034427C 003411BC  7F 83 E3 78 */	mr r3, r28
/* 80344280 003411C0  38 A0 43 48 */	li r5, 0x4348
/* 80344284 003411C4  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 80344288 003411C8  38 C6 31 50 */	addi r6, r6, 0x414C3150@l
/* 8034428C 003411CC  4B FC B0 91 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 80344290 003411D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80344294 003411D4  41 82 00 10 */	beq .L_803442A4
/* 80344298 003411D8  38 1C 00 68 */	addi r0, r28, 0x68
/* 8034429C 003411DC  90 1D 00 7C */	stw r0, 0x7c(r29)
/* 803442A0 003411E0  48 00 00 7C */	b .L_8034431C
.L_803442A4:
/* 803442A4 003411E4  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 803442A8 003411E8  3C C0 41 4C */	lis r6, 0x414C3250@ha
/* 803442AC 003411EC  7F 83 E3 78 */	mr r3, r28
/* 803442B0 003411F0  38 A0 43 48 */	li r5, 0x4348
/* 803442B4 003411F4  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 803442B8 003411F8  38 C6 32 50 */	addi r6, r6, 0x414C3250@l
/* 803442BC 003411FC  4B FC B0 61 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 803442C0 00341200  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803442C4 00341204  41 82 00 10 */	beq .L_803442D4
/* 803442C8 00341208  38 1C 00 68 */	addi r0, r28, 0x68
/* 803442CC 0034120C  90 1D 00 7C */	stw r0, 0x7c(r29)
/* 803442D0 00341210  48 00 00 4C */	b .L_8034431C
.L_803442D4:
/* 803442D4 00341214  38 60 00 10 */	li r3, 0x10
/* 803442D8 00341218  4B CD FB CD */	bl __nw__FUl
/* 803442DC 0034121C  28 03 00 00 */	cmplwi r3, 0
/* 803442E0 00341220  41 82 00 30 */	beq .L_80344310
/* 803442E4 00341224  3C A0 80 4B */	lis r5, __vt__Q32og6Screen14DispMemberBase@ha
/* 803442E8 00341228  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 803442EC 0034122C  38 05 11 48 */	addi r0, r5, __vt__Q32og6Screen14DispMemberBase@l
/* 803442F0 00341230  38 A0 00 00 */	li r5, 0
/* 803442F4 00341234  90 03 00 00 */	stw r0, 0(r3)
/* 803442F8 00341238  38 04 10 C4 */	addi r0, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 803442FC 0034123C  C0 02 FE A0 */	lfs f0, lbl_8051E200@sda21(r2)
/* 80344300 00341240  90 A3 00 04 */	stw r5, 4(r3)
/* 80344304 00341244  90 03 00 00 */	stw r0, 0(r3)
/* 80344308 00341248  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8034430C 0034124C  D0 03 00 08 */	stfs f0, 8(r3)
.L_80344310:
/* 80344310 00341250  90 7D 00 7C */	stw r3, 0x7c(r29)
/* 80344314 00341254  38 00 00 01 */	li r0, 1
/* 80344318 00341258  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
.L_8034431C:
/* 8034431C 0034125C  38 60 01 48 */	li r3, 0x148
/* 80344320 00341260  4B CD FB 85 */	bl __nw__FUl
/* 80344324 00341264  7C 60 1B 79 */	or. r0, r3, r3
/* 80344328 00341268  41 82 00 0C */	beq .L_80344334
/* 8034432C 0034126C  48 0F 0A 81 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 80344330 00341270  7C 60 1B 78 */	mr r0, r3
.L_80344334:
/* 80344334 00341274  90 1D 00 80 */	stw r0, 0x80(r29)
/* 80344338 00341278  7F C6 F3 78 */	mr r6, r30
/* 8034433C 0034127C  38 9F 00 18 */	addi r4, r31, 0x18
/* 80344340 00341280  3C A0 00 02 */	lis r5, 2
/* 80344344 00341284  80 7D 00 80 */	lwz r3, 0x80(r29)
/* 80344348 00341288  4B CF B2 DD */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8034434C 0034128C  80 7D 00 80 */	lwz r3, 0x80(r29)
/* 80344350 00341290  3C 80 67 61 */	lis r4, 0x67617468@ha
/* 80344354 00341294  38 C4 74 68 */	addi r6, r4, 0x67617468@l
/* 80344358 00341298  38 A0 00 00 */	li r5, 0
/* 8034435C 0034129C  81 83 00 00 */	lwz r12, 0(r3)
/* 80344360 003412A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80344364 003412A4  7D 89 03 A6 */	mtctr r12
/* 80344368 003412A8  4E 80 04 21 */	bctrl 
/* 8034436C 003412AC  90 7D 00 8C */	stw r3, 0x8c(r29)
/* 80344370 003412B0  80 1D 00 8C */	lwz r0, 0x8c(r29)
/* 80344374 003412B4  28 00 00 00 */	cmplwi r0, 0
/* 80344378 003412B8  40 82 00 18 */	bne .L_80344390
/* 8034437C 003412BC  38 7F 00 24 */	addi r3, r31, 0x24
/* 80344380 003412C0  38 BF 00 34 */	addi r5, r31, 0x34
/* 80344384 003412C4  38 80 00 5A */	li r4, 0x5a
/* 80344388 003412C8  4C C6 31 82 */	crclr 6
/* 8034438C 003412CC  4B CE 62 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80344390:
/* 80344390 003412D0  80 9D 00 8C */	lwz r4, 0x8c(r29)
/* 80344394 003412D4  38 60 00 2C */	li r3, 0x2c
/* 80344398 003412D8  C0 04 00 D4 */	lfs f0, 0xd4(r4)
/* 8034439C 003412DC  D0 1D 00 C0 */	stfs f0, 0xc0(r29)
/* 803443A0 003412E0  80 9D 00 8C */	lwz r4, 0x8c(r29)
/* 803443A4 003412E4  C0 04 00 D8 */	lfs f0, 0xd8(r4)
/* 803443A8 003412E8  D0 1D 00 C4 */	stfs f0, 0xc4(r29)
/* 803443AC 003412EC  4B CD FC 01 */	bl __nwa__FUl
/* 803443B0 003412F0  3C 80 80 4E */	lis r4, deTagName__8Morimura@ha
/* 803443B4 003412F4  90 7D 00 88 */	stw r3, 0x88(r29)
/* 803443B8 003412F8  3B C4 B0 78 */	addi r30, r4, deTagName__8Morimura@l
/* 803443BC 003412FC  3B 60 00 00 */	li r27, 0
/* 803443C0 00341300  3B 80 00 00 */	li r28, 0
.L_803443C4:
/* 803443C4 00341304  80 7D 00 80 */	lwz r3, 0x80(r29)
/* 803443C8 00341308  38 A0 00 00 */	li r5, 0
/* 803443CC 0034130C  80 DE 00 00 */	lwz r6, 0(r30)
/* 803443D0 00341310  81 83 00 00 */	lwz r12, 0(r3)
/* 803443D4 00341314  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803443D8 00341318  7D 89 03 A6 */	mtctr r12
/* 803443DC 0034131C  4E 80 04 21 */	bctrl 
/* 803443E0 00341320  80 9D 00 88 */	lwz r4, 0x88(r29)
/* 803443E4 00341324  7C 64 E1 2E */	stwx r3, r4, r28
/* 803443E8 00341328  80 7D 00 88 */	lwz r3, 0x88(r29)
/* 803443EC 0034132C  7C 03 E0 2E */	lwzx r0, r3, r28
/* 803443F0 00341330  28 00 00 00 */	cmplwi r0, 0
/* 803443F4 00341334  40 82 00 18 */	bne .L_8034440C
/* 803443F8 00341338  38 7F 00 24 */	addi r3, r31, 0x24
/* 803443FC 0034133C  38 BF 00 34 */	addi r5, r31, 0x34
/* 80344400 00341340  38 80 00 64 */	li r4, 0x64
/* 80344404 00341344  4C C6 31 82 */	crclr 6
/* 80344408 00341348  4B CE 62 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8034440C:
/* 8034440C 0034134C  80 7D 00 88 */	lwz r3, 0x88(r29)
/* 80344410 00341350  38 80 00 00 */	li r4, 0
/* 80344414 00341354  7C 63 E0 2E */	lwzx r3, r3, r28
/* 80344418 00341358  81 83 00 00 */	lwz r12, 0(r3)
/* 8034441C 0034135C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80344420 00341360  7D 89 03 A6 */	mtctr r12
/* 80344424 00341364  4E 80 04 21 */	bctrl 
/* 80344428 00341368  3B 7B 00 01 */	addi r27, r27, 1
/* 8034442C 0034136C  3B 9C 00 04 */	addi r28, r28, 4
/* 80344430 00341370  2C 1B 00 0B */	cmpwi r27, 0xb
/* 80344434 00341374  3B DE 00 04 */	addi r30, r30, 4
/* 80344438 00341378  41 80 FF 8C */	blt .L_803443C4
/* 8034443C 0034137C  80 7D 00 80 */	lwz r3, 0x80(r29)
/* 80344440 00341380  3C 80 63 64 */	lis r4, 0x63643130@ha
/* 80344444 00341384  38 C4 31 30 */	addi r6, r4, 0x63643130@l
/* 80344448 00341388  38 A0 00 00 */	li r5, 0
/* 8034444C 0034138C  81 83 00 00 */	lwz r12, 0(r3)
/* 80344450 00341390  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80344454 00341394  7D 89 03 A6 */	mtctr r12
/* 80344458 00341398  4E 80 04 21 */	bctrl 
/* 8034445C 0034139C  7C 7B 1B 79 */	or. r27, r3, r3
/* 80344460 003413A0  40 82 00 18 */	bne .L_80344478
/* 80344464 003413A4  38 7F 00 24 */	addi r3, r31, 0x24
/* 80344468 003413A8  38 BF 00 34 */	addi r5, r31, 0x34
/* 8034446C 003413AC  38 80 00 69 */	li r4, 0x69
/* 80344470 003413B0  4C C6 31 82 */	crclr 6
/* 80344474 003413B4  4B CE 61 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80344478:
/* 80344478 003413B8  7F 63 DB 78 */	mr r3, r27
/* 8034447C 003413BC  38 80 00 04 */	li r4, 4
/* 80344480 003413C0  4B CF 48 3D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80344484 003413C4  C0 1B 00 D4 */	lfs f0, 0xd4(r27)
/* 80344488 003413C8  38 A0 00 00 */	li r5, 0
/* 8034448C 003413CC  C0 22 FE A4 */	lfs f1, lbl_8051E204@sda21(r2)
/* 80344490 003413D0  D0 1D 00 B8 */	stfs f0, 0xb8(r29)
/* 80344494 003413D4  C0 1B 00 D8 */	lfs f0, 0xd8(r27)
/* 80344498 003413D8  EC 01 00 2A */	fadds f0, f1, f0
/* 8034449C 003413DC  D0 1D 00 BC */	stfs f0, 0xbc(r29)
/* 803444A0 003413E0  48 00 00 38 */	b .L_803444D8
.L_803444A4:
/* 803444A4 003413E4  54 A4 15 BA */	rlwinm r4, r5, 2, 0x16, 0x1d
/* 803444A8 003413E8  38 A5 00 01 */	addi r5, r5, 1
/* 803444AC 003413EC  38 64 01 12 */	addi r3, r4, 0x112
/* 803444B0 003413F0  7C 7B 1A 14 */	add r3, r27, r3
/* 803444B4 003413F4  7C 9D 22 14 */	add r4, r29, r4
/* 803444B8 003413F8  A8 03 00 00 */	lha r0, 0(r3)
/* 803444BC 003413FC  B0 04 00 A6 */	sth r0, 0xa6(r4)
/* 803444C0 00341400  A8 03 00 02 */	lha r0, 2(r3)
/* 803444C4 00341404  B0 04 00 A8 */	sth r0, 0xa8(r4)
/* 803444C8 00341408  A8 04 00 A6 */	lha r0, 0xa6(r4)
/* 803444CC 0034140C  B0 04 00 96 */	sth r0, 0x96(r4)
/* 803444D0 00341410  A8 04 00 A8 */	lha r0, 0xa8(r4)
/* 803444D4 00341414  B0 04 00 98 */	sth r0, 0x98(r4)
.L_803444D8:
/* 803444D8 00341418  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 803444DC 0034141C  28 00 00 04 */	cmplwi r0, 4
/* 803444E0 00341420  41 80 FF C4 */	blt .L_803444A4
/* 803444E4 00341424  7F A3 EB 78 */	mr r3, r29
/* 803444E8 00341428  48 00 0B 19 */	bl reset__Q28Morimura12TDayEndCountFv
/* 803444EC 0034142C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803444F0 00341430  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803444F4 00341434  7C 08 03 A6 */	mtlr r0
/* 803444F8 00341438  38 21 00 20 */	addi r1, r1, 0x20
/* 803444FC 0034143C  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura12TDayEndCountFP10JKRArchive

.fn doUpdate__Q28Morimura12TDayEndCountFv, global
/* 80344500 00341440  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 80344504 00341444  7C 08 02 A6 */	mflr r0
/* 80344508 00341448  90 01 01 24 */	stw r0, 0x124(r1)
/* 8034450C 0034144C  DB E1 01 10 */	stfd f31, 0x110(r1)
/* 80344510 00341450  F3 E1 01 18 */	psq_st f31, 280(r1), 0, qr0
/* 80344514 00341454  DB C1 01 00 */	stfd f30, 0x100(r1)
/* 80344518 00341458  F3 C1 01 08 */	psq_st f30, 264(r1), 0, qr0
/* 8034451C 0034145C  BF 01 00 E0 */	stmw r24, 0xe0(r1)
/* 80344520 00341460  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80344524 00341464  7C 7C 1B 78 */	mr r28, r3
/* 80344528 00341468  28 00 00 00 */	cmplwi r0, 0
/* 8034452C 0034146C  41 82 00 4C */	beq .L_80344578
/* 80344530 00341470  80 7C 00 7C */	lwz r3, 0x7c(r28)
/* 80344534 00341474  C0 22 FE A8 */	lfs f1, lbl_8051E208@sda21(r2)
/* 80344538 00341478  C0 43 00 08 */	lfs f2, 8(r3)
/* 8034453C 0034147C  C0 02 FE 98 */	lfs f0, lbl_8051E1F8@sda21(r2)
/* 80344540 00341480  EC 22 08 2A */	fadds f1, f2, f1
/* 80344544 00341484  D0 23 00 08 */	stfs f1, 8(r3)
/* 80344548 00341488  80 7C 00 7C */	lwz r3, 0x7c(r28)
/* 8034454C 0034148C  C0 23 00 08 */	lfs f1, 8(r3)
/* 80344550 00341490  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80344554 00341494  40 81 00 0C */	ble .L_80344560
/* 80344558 00341498  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8034455C 0034149C  D0 03 00 08 */	stfs f0, 8(r3)
.L_80344560:
/* 80344560 003414A0  80 7C 00 7C */	lwz r3, 0x7c(r28)
/* 80344564 003414A4  C0 03 00 08 */	lfs f0, 8(r3)
/* 80344568 003414A8  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8034456C 003414AC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80344570 003414B0  40 80 00 08 */	bge .L_80344578
/* 80344574 003414B4  D0 23 00 08 */	stfs f1, 8(r3)
.L_80344578:
/* 80344578 003414B8  80 7C 00 7C */	lwz r3, 0x7c(r28)
/* 8034457C 003414BC  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80344580 003414C0  C0 42 FE 98 */	lfs f2, lbl_8051E1F8@sda21(r2)
/* 80344584 003414C4  C0 23 00 08 */	lfs f1, 8(r3)
/* 80344588 003414C8  28 00 00 00 */	cmplwi r0, 0
/* 8034458C 003414CC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80344590 003414D0  EC 22 08 28 */	fsubs f1, f2, f1
/* 80344594 003414D4  EC 02 00 28 */	fsubs f0, f2, f0
/* 80344598 003414D8  EC 21 00 24 */	fdivs f1, f1, f0
/* 8034459C 003414DC  40 82 00 18 */	bne .L_803445B4
/* 803445A0 003414E0  C0 02 FE AC */	lfs f0, lbl_8051E20C@sda21(r2)
/* 803445A4 003414E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803445A8 003414E8  40 80 00 0C */	bge .L_803445B4
/* 803445AC 003414EC  38 60 00 01 */	li r3, 1
/* 803445B0 003414F0  48 00 09 B4 */	b .L_80344F64
.L_803445B4:
/* 803445B4 003414F4  C0 02 FE B0 */	lfs f0, lbl_8051E210@sda21(r2)
/* 803445B8 003414F8  EC 40 00 72 */	fmuls f2, f0, f1
/* 803445BC 003414FC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803445C0 00341500  4C 41 13 82 */	cror 2, 1, 2
/* 803445C4 00341504  40 82 00 14 */	bne .L_803445D8
/* 803445C8 00341508  7F 83 E3 78 */	mr r3, r28
/* 803445CC 0034150C  48 00 0A 35 */	bl reset__Q28Morimura12TDayEndCountFv
/* 803445D0 00341510  38 60 00 00 */	li r3, 0
/* 803445D4 00341514  48 00 09 90 */	b .L_80344F64
.L_803445D8:
/* 803445D8 00341518  C0 22 FE B4 */	lfs f1, lbl_8051E214@sda21(r2)
/* 803445DC 0034151C  C0 02 FE B8 */	lfs f0, lbl_8051E218@sda21(r2)
/* 803445E0 00341520  EF C2 00 72 */	fmuls f30, f2, f1
/* 803445E4 00341524  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803445E8 00341528  4C 41 13 82 */	cror 2, 1, 2
/* 803445EC 0034152C  40 82 00 08 */	bne .L_803445F4
/* 803445F0 00341530  FF C0 00 90 */	fmr f30, f0
.L_803445F4:
/* 803445F4 00341534  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 803445F8 00341538  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803445FC 0034153C  4C 40 13 82 */	cror 2, 0, 2
/* 80344600 00341540  40 82 00 08 */	bne .L_80344608
/* 80344604 00341544  FF C0 00 90 */	fmr f30, f0
.L_80344608:
/* 80344608 00341548  FC 00 F0 1E */	fctiwz f0, f30
/* 8034460C 0034154C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80344610 00341550  83 E1 00 34 */	lwz r31, 0x34(r1)
/* 80344614 00341554  2C 1F 00 0A */	cmpwi r31, 0xa
/* 80344618 00341558  41 80 00 08 */	blt .L_80344620
/* 8034461C 0034155C  3B E0 00 0A */	li r31, 0xa
.L_80344620:
/* 80344620 00341560  80 1C 00 90 */	lwz r0, 0x90(r28)
/* 80344624 00341564  7C 00 F8 00 */	cmpw r0, r31
/* 80344628 00341568  41 82 00 E4 */	beq .L_8034470C
/* 8034462C 0034156C  3B 1F 00 01 */	addi r24, r31, 1
/* 80344630 00341570  3C A0 80 4E */	lis r5, deTagName__8Morimura@ha
/* 80344634 00341574  3C 80 80 49 */	lis r4, lbl_8049020C@ha
/* 80344638 00341578  3C 60 80 49 */	lis r3, lbl_8049021C@ha
/* 8034463C 0034157C  57 06 10 3A */	slwi r6, r24, 2
/* 80344640 00341580  38 05 B0 78 */	addi r0, r5, deTagName__8Morimura@l
/* 80344644 00341584  7F 20 32 14 */	add r25, r0, r6
/* 80344648 00341588  3B 64 02 0C */	addi r27, r4, lbl_8049020C@l
/* 8034464C 0034158C  3B C3 02 1C */	addi r30, r3, lbl_8049021C@l
/* 80344650 00341590  3B A0 00 00 */	li r29, 0
/* 80344654 00341594  48 00 00 48 */	b .L_8034469C
.L_80344658:
/* 80344658 00341598  80 7C 00 80 */	lwz r3, 0x80(r28)
/* 8034465C 0034159C  38 A0 00 00 */	li r5, 0
/* 80344660 003415A0  80 D9 00 00 */	lwz r6, 0(r25)
/* 80344664 003415A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80344668 003415A8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8034466C 003415AC  7D 89 03 A6 */	mtctr r12
/* 80344670 003415B0  4E 80 04 21 */	bctrl 
/* 80344674 003415B4  7C 7A 1B 79 */	or. r26, r3, r3
/* 80344678 003415B8  40 82 00 18 */	bne .L_80344690
/* 8034467C 003415BC  7F 63 DB 78 */	mr r3, r27
/* 80344680 003415C0  7F C5 F3 78 */	mr r5, r30
/* 80344684 003415C4  38 80 00 A4 */	li r4, 0xa4
/* 80344688 003415C8  4C C6 31 82 */	crclr 6
/* 8034468C 003415CC  4B CE 5F B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80344690:
/* 80344690 003415D0  9B BA 00 B0 */	stb r29, 0xb0(r26)
/* 80344694 003415D4  3B 39 00 04 */	addi r25, r25, 4
/* 80344698 003415D8  3B 18 00 01 */	addi r24, r24, 1
.L_8034469C:
/* 8034469C 003415DC  2C 18 00 0B */	cmpwi r24, 0xb
/* 803446A0 003415E0  41 80 FF B8 */	blt .L_80344658
/* 803446A4 003415E4  93 FC 00 90 */	stw r31, 0x90(r28)
/* 803446A8 003415E8  3C 80 80 4E */	lis r4, deTagName__8Morimura@ha
/* 803446AC 003415EC  57 E0 10 3A */	slwi r0, r31, 2
/* 803446B0 003415F0  38 A0 00 00 */	li r5, 0
/* 803446B4 003415F4  80 7C 00 80 */	lwz r3, 0x80(r28)
/* 803446B8 003415F8  38 84 B0 78 */	addi r4, r4, deTagName__8Morimura@l
/* 803446BC 003415FC  7C C4 00 2E */	lwzx r6, r4, r0
/* 803446C0 00341600  81 83 00 00 */	lwz r12, 0(r3)
/* 803446C4 00341604  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803446C8 00341608  7D 89 03 A6 */	mtctr r12
/* 803446CC 0034160C  4E 80 04 21 */	bctrl 
/* 803446D0 00341610  90 7C 00 84 */	stw r3, 0x84(r28)
/* 803446D4 00341614  80 1C 00 84 */	lwz r0, 0x84(r28)
/* 803446D8 00341618  28 00 00 00 */	cmplwi r0, 0
/* 803446DC 0034161C  40 82 00 20 */	bne .L_803446FC
/* 803446E0 00341620  3C 60 80 49 */	lis r3, lbl_8049020C@ha
/* 803446E4 00341624  3C A0 80 49 */	lis r5, lbl_8049021C@ha
/* 803446E8 00341628  38 63 02 0C */	addi r3, r3, lbl_8049020C@l
/* 803446EC 0034162C  38 80 00 AC */	li r4, 0xac
/* 803446F0 00341630  38 A5 02 1C */	addi r5, r5, lbl_8049021C@l
/* 803446F4 00341634  4C C6 31 82 */	crclr 6
/* 803446F8 00341638  4B CE 5F 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803446FC:
/* 803446FC 0034163C  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 80344700 00341640  38 00 00 01 */	li r0, 1
/* 80344704 00341644  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80344708 00341648  98 1C 00 C8 */	stb r0, 0xc8(r28)
.L_8034470C:
/* 8034470C 0034164C  6F E3 80 00 */	xoris r3, r31, 0x8000
/* 80344710 00341650  3C 00 43 30 */	lis r0, 0x4330
/* 80344714 00341654  90 61 00 34 */	stw r3, 0x34(r1)
/* 80344718 00341658  C8 22 FE D8 */	lfd f1, lbl_8051E238@sda21(r2)
/* 8034471C 0034165C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80344720 00341660  C0 82 FE 98 */	lfs f4, lbl_8051E1F8@sda21(r2)
/* 80344724 00341664  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80344728 00341668  C0 AD 85 50 */	lfs f5, mWaitTime__Q28Morimura12TDayEndCount@sda21(r13)
/* 8034472C 0034166C  EC 60 08 28 */	fsubs f3, f0, f1
/* 80344730 00341670  C0 42 FE BC */	lfs f2, lbl_8051E21C@sda21(r2)
/* 80344734 00341674  EC 24 28 28 */	fsubs f1, f4, f5
/* 80344738 00341678  8B CD 85 54 */	lbz r30, mAlphaMax__Q28Morimura12TDayEndCount@sda21(r13)
/* 8034473C 0034167C  EC 04 28 2A */	fadds f0, f4, f5
/* 80344740 00341680  C3 ED 85 5C */	lfs f31, mStopScale__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344744 00341684  EC 7E 18 28 */	fsubs f3, f30, f3
/* 80344748 00341688  C1 0D 85 60 */	lfs f8, mScaleMax__Q28Morimura12TDayEndCount@sda21(r13)
/* 8034474C 0034168C  EC A2 00 72 */	fmuls f5, f2, f1
/* 80344750 00341690  EC 02 00 32 */	fmuls f0, f2, f0
/* 80344754 00341694  EC E4 18 28 */	fsubs f7, f4, f3
/* 80344758 00341698  FC 07 28 40 */	fcmpo cr0, f7, f5
/* 8034475C 0034169C  40 80 00 D4 */	bge .L_80344830
/* 80344760 003416A0  93 C1 00 34 */	stw r30, 0x34(r1)
/* 80344764 003416A4  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 80344768 003416A8  90 01 00 30 */	stw r0, 0x30(r1)
/* 8034476C 003416AC  C8 22 FE E0 */	lfd f1, lbl_8051E240@sda21(r2)
/* 80344770 003416B0  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80344774 003416B4  88 83 00 B2 */	lbz r4, 0xb2(r3)
/* 80344778 003416B8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8034477C 003416BC  7C 9E 23 78 */	mr r30, r4
/* 80344780 003416C0  EC 00 28 24 */	fdivs f0, f0, f5
/* 80344784 003416C4  EC 07 00 32 */	fmuls f0, f7, f0
/* 80344788 003416C8  FC 00 00 1E */	fctiwz f0, f0
/* 8034478C 003416CC  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80344790 003416D0  80 A1 00 3C */	lwz r5, 0x3c(r1)
/* 80344794 003416D4  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 80344798 003416D8  7C 00 20 40 */	cmplw r0, r4
/* 8034479C 003416DC  40 81 00 08 */	ble .L_803447A4
/* 803447A0 003416E0  7C BE 2B 78 */	mr r30, r5
.L_803447A4:
/* 803447A4 003416E4  EC 1F 28 24 */	fdivs f0, f31, f5
/* 803447A8 003416E8  C0 23 00 CC */	lfs f1, 0xcc(r3)
/* 803447AC 003416EC  EC 07 00 32 */	fmuls f0, f7, f0
/* 803447B0 003416F0  FF E0 08 90 */	fmr f31, f1
/* 803447B4 003416F4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803447B8 003416F8  40 81 00 08 */	ble .L_803447C0
/* 803447BC 003416FC  FF E0 00 90 */	fmr f31, f0
.L_803447C0:
/* 803447C0 00341700  88 1C 00 94 */	lbz r0, 0x94(r28)
/* 803447C4 00341704  28 00 00 00 */	cmplwi r0, 0
/* 803447C8 00341708  41 82 00 3C */	beq .L_80344804
/* 803447CC 0034170C  C0 3C 00 B8 */	lfs f1, 0xb8(r28)
/* 803447D0 00341710  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 803447D4 00341714  C0 5C 00 BC */	lfs f2, 0xbc(r28)
/* 803447D8 00341718  EC 61 00 28 */	fsubs f3, f1, f0
/* 803447DC 0034171C  C0 23 00 D8 */	lfs f1, 0xd8(r3)
/* 803447E0 00341720  81 83 00 00 */	lwz r12, 0(r3)
/* 803447E4 00341724  EC 42 08 28 */	fsubs f2, f2, f1
/* 803447E8 00341728  C0 1C 00 D0 */	lfs f0, 0xd0(r28)
/* 803447EC 0034172C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803447F0 00341730  EC 23 07 F2 */	fmuls f1, f3, f31
/* 803447F4 00341734  EC 42 07 FA */	fmadds f2, f2, f31, f0
/* 803447F8 00341738  7D 89 03 A6 */	mtctr r12
/* 803447FC 0034173C  4E 80 04 21 */	bctrl 
/* 80344800 00341740  48 00 00 D8 */	b .L_803448D8
.L_80344804:
/* 80344804 00341744  C0 5C 00 BC */	lfs f2, 0xbc(r28)
/* 80344808 00341748  C0 3C 00 D0 */	lfs f1, 0xd0(r28)
/* 8034480C 0034174C  C0 1C 00 B8 */	lfs f0, 0xb8(r28)
/* 80344810 00341750  EC 22 08 2A */	fadds f1, f2, f1
/* 80344814 00341754  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80344818 00341758  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8034481C 0034175C  81 83 00 00 */	lwz r12, 0(r3)
/* 80344820 00341760  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80344824 00341764  7D 89 03 A6 */	mtctr r12
/* 80344828 00341768  4E 80 04 21 */	bctrl 
/* 8034482C 0034176C  48 00 00 AC */	b .L_803448D8
.L_80344830:
/* 80344830 00341770  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80344834 00341774  40 81 00 78 */	ble .L_803448AC
/* 80344838 00341778  93 C1 00 3C */	stw r30, 0x3c(r1)
/* 8034483C 0034177C  EC 64 00 28 */	fsubs f3, f4, f0
/* 80344840 00341780  EC 3F 40 28 */	fsubs f1, f31, f8
/* 80344844 00341784  C8 A2 FE E0 */	lfd f5, lbl_8051E240@sda21(r2)
/* 80344848 00341788  EC 00 20 28 */	fsubs f0, f0, f4
/* 8034484C 0034178C  90 01 00 38 */	stw r0, 0x38(r1)
/* 80344850 00341790  C0 5C 00 BC */	lfs f2, 0xbc(r28)
/* 80344854 00341794  C8 81 00 38 */	lfd f4, 0x38(r1)
/* 80344858 00341798  EC C1 00 24 */	fdivs f6, f1, f0
/* 8034485C 0034179C  C0 3C 00 D0 */	lfs f1, 0xd0(r28)
/* 80344860 003417A0  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 80344864 003417A4  C0 1C 00 B8 */	lfs f0, 0xb8(r28)
/* 80344868 003417A8  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8034486C 003417AC  EC 22 08 2A */	fadds f1, f2, f1
/* 80344870 003417B0  EC 84 28 28 */	fsubs f4, f4, f5
/* 80344874 003417B4  EC 08 30 28 */	fsubs f0, f8, f6
/* 80344878 003417B8  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8034487C 003417BC  EC 44 18 24 */	fdivs f2, f4, f3
/* 80344880 003417C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80344884 003417C4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80344888 003417C8  FC 20 10 50 */	fneg f1, f2
/* 8034488C 003417CC  EF E6 01 FA */	fmadds f31, f6, f7, f0
/* 80344890 003417D0  EC 01 11 FA */	fmadds f0, f1, f7, f2
/* 80344894 003417D4  FC 00 00 1E */	fctiwz f0, f0
/* 80344898 003417D8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8034489C 003417DC  83 C1 00 34 */	lwz r30, 0x34(r1)
/* 803448A0 003417E0  7D 89 03 A6 */	mtctr r12
/* 803448A4 003417E4  4E 80 04 21 */	bctrl 
/* 803448A8 003417E8  48 00 00 30 */	b .L_803448D8
.L_803448AC:
/* 803448AC 003417EC  C0 5C 00 BC */	lfs f2, 0xbc(r28)
/* 803448B0 003417F0  C0 3C 00 D0 */	lfs f1, 0xd0(r28)
/* 803448B4 003417F4  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 803448B8 003417F8  C0 1C 00 B8 */	lfs f0, 0xb8(r28)
/* 803448BC 003417FC  EC 22 08 2A */	fadds f1, f2, f1
/* 803448C0 00341800  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 803448C4 00341804  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 803448C8 00341808  81 83 00 00 */	lwz r12, 0(r3)
/* 803448CC 0034180C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803448D0 00341810  7D 89 03 A6 */	mtctr r12
/* 803448D4 00341814  4E 80 04 21 */	bctrl 
.L_803448D8:
/* 803448D8 00341818  C0 02 FE 98 */	lfs f0, lbl_8051E1F8@sda21(r2)
/* 803448DC 0034181C  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 803448E0 00341820  40 82 00 5C */	bne .L_8034493C
/* 803448E4 00341824  88 1C 00 C9 */	lbz r0, 0xc9(r28)
/* 803448E8 00341828  28 00 00 00 */	cmplwi r0, 0
/* 803448EC 0034182C  41 82 00 50 */	beq .L_8034493C
/* 803448F0 00341830  88 1C 00 C8 */	lbz r0, 0xc8(r28)
/* 803448F4 00341834  28 00 00 00 */	cmplwi r0, 0
/* 803448F8 00341838  41 82 00 44 */	beq .L_8034493C
/* 803448FC 0034183C  80 0D 98 58 */	lwz r0, spSysIF__8PSSystem@sda21(r13)
/* 80344900 00341840  28 00 00 00 */	cmplwi r0, 0
/* 80344904 00341844  40 82 00 20 */	bne .L_80344924
/* 80344908 00341848  3C 60 80 49 */	lis r3, lbl_8049020C@ha
/* 8034490C 0034184C  3C A0 80 49 */	lis r5, lbl_8049021C@ha
/* 80344910 00341850  38 63 02 0C */	addi r3, r3, lbl_8049020C@l
/* 80344914 00341854  38 80 00 E4 */	li r4, 0xe4
/* 80344918 00341858  38 A5 02 1C */	addi r5, r5, lbl_8049021C@l
/* 8034491C 0034185C  4C C6 31 82 */	crclr 6
/* 80344920 00341860  4B CE 5D 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80344924:
/* 80344924 00341864  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80344928 00341868  38 80 18 18 */	li r4, 0x1818
/* 8034492C 0034186C  38 A0 00 00 */	li r5, 0
/* 80344930 00341870  4B FF 3D 01 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80344934 00341874  38 00 00 00 */	li r0, 0
/* 80344938 00341878  98 1C 00 C8 */	stb r0, 0xc8(r28)
.L_8034493C:
/* 8034493C 0034187C  2C 1F 00 00 */	cmpwi r31, 0
/* 80344940 00341880  7F DD F3 78 */	mr r29, r30
/* 80344944 00341884  41 80 00 14 */	blt .L_80344958
/* 80344948 00341888  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8034494C 0034188C  28 00 00 64 */	cmplwi r0, 0x64
/* 80344950 00341890  41 81 00 08 */	bgt .L_80344958
/* 80344954 00341894  3B A0 00 64 */	li r29, 0x64
.L_80344958:
/* 80344958 00341898  88 0D 85 54 */	lbz r0, mAlphaMax__Q28Morimura12TDayEndCount@sda21(r13)
/* 8034495C 0034189C  57 C3 06 3E */	clrlwi r3, r30, 0x18
/* 80344960 003418A0  38 80 FF FF */	li r4, -1
/* 80344964 003418A4  7C 03 00 40 */	cmplw r3, r0
/* 80344968 003418A8  90 81 00 28 */	stw r4, 0x28(r1)
/* 8034496C 003418AC  40 80 01 78 */	bge .L_80344AE4
/* 80344970 003418B0  88 0D 98 90 */	lbz r0, mColorTest__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344974 003418B4  28 00 00 00 */	cmplwi r0, 0
/* 80344978 003418B8  40 82 01 6C */	bne .L_80344AE4
/* 8034497C 003418BC  2C 1F 00 03 */	cmpwi r31, 3
/* 80344980 003418C0  41 81 00 24 */	bgt .L_803449A4
/* 80344984 003418C4  38 A0 00 FF */	li r5, 0xff
/* 80344988 003418C8  38 80 00 64 */	li r4, 0x64
/* 8034498C 003418CC  38 6D 85 6C */	addi r3, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 80344990 003418D0  38 00 00 00 */	li r0, 0
/* 80344994 003418D4  98 AD 85 6C */	stb r5, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344998 003418D8  98 83 00 01 */	stb r4, 1(r3)
/* 8034499C 003418DC  98 03 00 02 */	stb r0, 2(r3)
/* 803449A0 003418E0  48 00 00 3C */	b .L_803449DC
.L_803449A4:
/* 803449A4 003418E4  2C 1F 00 06 */	cmpwi r31, 6
/* 803449A8 003418E8  41 81 00 20 */	bgt .L_803449C8
/* 803449AC 003418EC  38 80 00 FF */	li r4, 0xff
/* 803449B0 003418F0  38 6D 85 6C */	addi r3, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 803449B4 003418F4  38 00 00 00 */	li r0, 0
/* 803449B8 003418F8  98 8D 85 6C */	stb r4, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 803449BC 003418FC  98 83 00 01 */	stb r4, 1(r3)
/* 803449C0 00341900  98 03 00 02 */	stb r0, 2(r3)
/* 803449C4 00341904  48 00 00 18 */	b .L_803449DC
.L_803449C8:
/* 803449C8 00341908  38 00 00 FF */	li r0, 0xff
/* 803449CC 0034190C  38 6D 85 6C */	addi r3, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 803449D0 00341910  98 0D 85 6C */	stb r0, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 803449D4 00341914  98 03 00 01 */	stb r0, 1(r3)
/* 803449D8 00341918  98 03 00 02 */	stb r0, 2(r3)
.L_803449DC:
/* 803449DC 0034191C  3C E0 43 30 */	lis r7, 0x4330
/* 803449E0 00341920  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 803449E4 00341924  90 01 00 3C */	stw r0, 0x3c(r1)
/* 803449E8 00341928  38 6D 85 6C */	addi r3, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 803449EC 0034192C  88 CD 85 6C */	lbz r6, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 803449F0 00341930  38 00 00 FF */	li r0, 0xff
/* 803449F4 00341934  90 E1 00 38 */	stw r7, 0x38(r1)
/* 803449F8 00341938  38 81 00 1C */	addi r4, r1, 0x1c
/* 803449FC 0034193C  C8 A2 FE E0 */	lfd f5, lbl_8051E240@sda21(r2)
/* 80344A00 00341940  C8 21 00 38 */	lfd f1, 0x38(r1)
/* 80344A04 00341944  C0 02 FE C0 */	lfs f0, lbl_8051E220@sda21(r2)
/* 80344A08 00341948  EC 41 28 28 */	fsubs f2, f1, f5
/* 80344A0C 0034194C  88 A3 00 01 */	lbz r5, 1(r3)
/* 80344A10 00341950  88 63 00 02 */	lbz r3, 2(r3)
/* 80344A14 00341954  C0 22 FE 98 */	lfs f1, lbl_8051E1F8@sda21(r2)
/* 80344A18 00341958  EC 42 00 24 */	fdivs f2, f2, f0
/* 80344A1C 0034195C  90 C1 00 34 */	stw r6, 0x34(r1)
/* 80344A20 00341960  C0 62 FE C4 */	lfs f3, lbl_8051E224@sda21(r2)
/* 80344A24 00341964  90 E1 00 30 */	stw r7, 0x30(r1)
/* 80344A28 00341968  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80344A2C 0034196C  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 80344A30 00341970  EC C2 08 28 */	fsubs f6, f2, f1
/* 80344A34 00341974  90 E1 00 48 */	stw r7, 0x48(r1)
/* 80344A38 00341978  EC 80 28 28 */	fsubs f4, f0, f5
/* 80344A3C 0034197C  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 80344A40 00341980  EC 41 30 28 */	fsubs f2, f1, f6
/* 80344A44 00341984  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80344A48 00341988  EC 20 28 28 */	fsubs f1, f0, f5
/* 80344A4C 0034198C  90 E1 00 58 */	stw r7, 0x58(r1)
/* 80344A50 00341990  EC 63 00 B2 */	fmuls f3, f3, f2
/* 80344A54 00341994  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 80344A58 00341998  98 01 00 27 */	stb r0, 0x27(r1)
/* 80344A5C 0034199C  EC 00 28 28 */	fsubs f0, f0, f5
/* 80344A60 003419A0  EC 44 19 BA */	fmadds f2, f4, f6, f3
/* 80344A64 003419A4  EC 21 19 BA */	fmadds f1, f1, f6, f3
/* 80344A68 003419A8  EC 00 19 BA */	fmadds f0, f0, f6, f3
/* 80344A6C 003419AC  FC 40 10 1E */	fctiwz f2, f2
/* 80344A70 003419B0  FC 20 08 1E */	fctiwz f1, f1
/* 80344A74 003419B4  FC 00 00 1E */	fctiwz f0, f0
/* 80344A78 003419B8  D8 41 00 40 */	stfd f2, 0x40(r1)
/* 80344A7C 003419BC  D8 21 00 50 */	stfd f1, 0x50(r1)
/* 80344A80 003419C0  80 A1 00 44 */	lwz r5, 0x44(r1)
/* 80344A84 003419C4  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 80344A88 003419C8  80 61 00 54 */	lwz r3, 0x54(r1)
/* 80344A8C 003419CC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80344A90 003419D0  98 A1 00 24 */	stb r5, 0x24(r1)
/* 80344A94 003419D4  98 61 00 25 */	stb r3, 0x25(r1)
/* 80344A98 003419D8  98 01 00 26 */	stb r0, 0x26(r1)
/* 80344A9C 003419DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80344AA0 003419E0  90 01 00 20 */	stw r0, 0x20(r1)
/* 80344AA4 003419E4  88 C1 00 20 */	lbz r6, 0x20(r1)
/* 80344AA8 003419E8  88 A1 00 21 */	lbz r5, 0x21(r1)
/* 80344AAC 003419EC  88 61 00 22 */	lbz r3, 0x22(r1)
/* 80344AB0 003419F0  88 01 00 23 */	lbz r0, 0x23(r1)
/* 80344AB4 003419F4  98 C1 00 28 */	stb r6, 0x28(r1)
/* 80344AB8 003419F8  98 A1 00 29 */	stb r5, 0x29(r1)
/* 80344ABC 003419FC  98 61 00 2A */	stb r3, 0x2a(r1)
/* 80344AC0 00341A00  98 01 00 2B */	stb r0, 0x2b(r1)
/* 80344AC4 00341A04  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80344AC8 00341A08  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80344ACC 00341A0C  80 7C 00 8C */	lwz r3, 0x8c(r28)
/* 80344AD0 00341A10  81 83 00 00 */	lwz r12, 0(r3)
/* 80344AD4 00341A14  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 80344AD8 00341A18  7D 89 03 A6 */	mtctr r12
/* 80344ADC 00341A1C  4E 80 04 21 */	bctrl 
/* 80344AE0 00341A20  48 00 00 4C */	b .L_80344B2C
.L_80344AE4:
/* 80344AE4 00341A24  80 0D 85 6C */	lwz r0, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344AE8 00341A28  38 81 00 14 */	addi r4, r1, 0x14
/* 80344AEC 00341A2C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80344AF0 00341A30  88 C1 00 18 */	lbz r6, 0x18(r1)
/* 80344AF4 00341A34  88 A1 00 19 */	lbz r5, 0x19(r1)
/* 80344AF8 00341A38  88 61 00 1A */	lbz r3, 0x1a(r1)
/* 80344AFC 00341A3C  88 01 00 1B */	lbz r0, 0x1b(r1)
/* 80344B00 00341A40  98 C1 00 28 */	stb r6, 0x28(r1)
/* 80344B04 00341A44  98 A1 00 29 */	stb r5, 0x29(r1)
/* 80344B08 00341A48  98 61 00 2A */	stb r3, 0x2a(r1)
/* 80344B0C 00341A4C  98 01 00 2B */	stb r0, 0x2b(r1)
/* 80344B10 00341A50  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80344B14 00341A54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80344B18 00341A58  80 7C 00 8C */	lwz r3, 0x8c(r28)
/* 80344B1C 00341A5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80344B20 00341A60  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 80344B24 00341A64  7D 89 03 A6 */	mtctr r12
/* 80344B28 00341A68  4E 80 04 21 */	bctrl 
.L_80344B2C:
/* 80344B2C 00341A6C  3C 60 43 30 */	lis r3, 0x4330
/* 80344B30 00341A70  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 80344B34 00341A74  90 01 00 64 */	stw r0, 0x64(r1)
/* 80344B38 00341A78  88 0D 85 54 */	lbz r0, mAlphaMax__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344B3C 00341A7C  90 61 00 60 */	stw r3, 0x60(r1)
/* 80344B40 00341A80  C8 62 FE E0 */	lfd f3, lbl_8051E240@sda21(r2)
/* 80344B44 00341A84  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 80344B48 00341A88  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80344B4C 00341A8C  EC 40 18 28 */	fsubs f2, f0, f3
/* 80344B50 00341A90  C0 82 FE C8 */	lfs f4, lbl_8051E228@sda21(r2)
/* 80344B54 00341A94  90 61 00 58 */	stw r3, 0x58(r1)
/* 80344B58 00341A98  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 80344B5C 00341A9C  C8 21 00 58 */	lfd f1, 0x58(r1)
/* 80344B60 00341AA0  EC 44 00 B2 */	fmuls f2, f4, f2
/* 80344B64 00341AA4  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 80344B68 00341AA8  EC 21 18 28 */	fsubs f1, f1, f3
/* 80344B6C 00341AAC  EC 42 08 24 */	fdivs f2, f2, f1
/* 80344B70 00341AB0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80344B74 00341AB4  40 80 00 30 */	bge .L_80344BA4
/* 80344B78 00341AB8  C0 02 FE CC */	lfs f0, lbl_8051E22C@sda21(r2)
/* 80344B7C 00341ABC  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 80344B80 00341AC0  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 80344B84 00341AC4  EC 02 00 32 */	fmuls f0, f2, f0
/* 80344B88 00341AC8  FC 00 00 1E */	fctiwz f0, f0
/* 80344B8C 00341ACC  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 80344B90 00341AD0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80344B94 00341AD4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80344B98 00341AD8  7C 04 04 2E */	lfsx f0, r4, r0
/* 80344B9C 00341ADC  FC 20 00 50 */	fneg f1, f0
/* 80344BA0 00341AE0  48 00 00 28 */	b .L_80344BC8
.L_80344BA4:
/* 80344BA4 00341AE4  C0 02 FE D0 */	lfs f0, lbl_8051E230@sda21(r2)
/* 80344BA8 00341AE8  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 80344BAC 00341AEC  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 80344BB0 00341AF0  EC 02 00 32 */	fmuls f0, f2, f0
/* 80344BB4 00341AF4  FC 00 00 1E */	fctiwz f0, f0
/* 80344BB8 00341AF8  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 80344BBC 00341AFC  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80344BC0 00341B00  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80344BC4 00341B04  7C 24 04 2E */	lfsx f1, r4, r0
.L_80344BC8:
/* 80344BC8 00341B08  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 80344BCC 00341B0C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80344BD0 00341B10  40 80 00 08 */	bge .L_80344BD8
/* 80344BD4 00341B14  FC 40 10 50 */	fneg f2, f2
.L_80344BD8:
/* 80344BD8 00341B18  C0 02 FE D0 */	lfs f0, lbl_8051E230@sda21(r2)
/* 80344BDC 00341B1C  3C A0 43 30 */	lis r5, 0x4330
/* 80344BE0 00341B20  A8 1C 00 A6 */	lha r0, 0xa6(r28)
/* 80344BE4 00341B24  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 80344BE8 00341B28  EC 02 00 32 */	fmuls f0, f2, f0
/* 80344BEC 00341B2C  C0 82 FE D4 */	lfs f4, lbl_8051E234@sda21(r2)
/* 80344BF0 00341B30  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80344BF4 00341B34  A8 DC 00 A8 */	lha r6, 0xa8(r28)
/* 80344BF8 00341B38  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80344BFC 00341B3C  EC 24 00 72 */	fmuls f1, f4, f1
/* 80344C00 00341B40  FC 60 00 1E */	fctiwz f3, f0
/* 80344C04 00341B44  90 A1 00 68 */	stw r5, 0x68(r1)
/* 80344C08 00341B48  6C C6 80 00 */	xoris r6, r6, 0x8000
/* 80344C0C 00341B4C  C8 02 FE D8 */	lfd f0, lbl_8051E238@sda21(r2)
/* 80344C10 00341B50  C8 41 00 68 */	lfd f2, 0x68(r1)
/* 80344C14 00341B54  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 80344C18 00341B58  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 80344C1C 00341B5C  EC 42 00 28 */	fsubs f2, f2, f0
/* 80344C20 00341B60  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80344C24 00341B64  EC 42 08 28 */	fsubs f2, f2, f1
/* 80344C28 00341B68  90 C1 00 44 */	stw r6, 0x44(r1)
/* 80344C2C 00341B6C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80344C30 00341B70  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80344C34 00341B74  7C 84 02 14 */	add r4, r4, r0
/* 80344C38 00341B78  C0 64 00 04 */	lfs f3, 4(r4)
/* 80344C3C 00341B7C  FC 40 10 1E */	fctiwz f2, f2
/* 80344C40 00341B80  C8 A1 00 40 */	lfd f5, 0x40(r1)
/* 80344C44 00341B84  EC 84 00 F2 */	fmuls f4, f4, f3
/* 80344C48 00341B88  90 A1 00 88 */	stw r5, 0x88(r1)
/* 80344C4C 00341B8C  EC 65 00 28 */	fsubs f3, f5, f0
/* 80344C50 00341B90  D8 41 00 70 */	stfd f2, 0x70(r1)
/* 80344C54 00341B94  EC 43 20 28 */	fsubs f2, f3, f4
/* 80344C58 00341B98  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80344C5C 00341B9C  90 A1 00 78 */	stw r5, 0x78(r1)
/* 80344C60 00341BA0  FC 40 10 1E */	fctiwz f2, f2
/* 80344C64 00341BA4  B0 1C 00 96 */	sth r0, 0x96(r28)
/* 80344C68 00341BA8  90 A1 00 A8 */	stw r5, 0xa8(r1)
/* 80344C6C 00341BAC  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80344C70 00341BB0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80344C74 00341BB4  90 A1 00 98 */	stw r5, 0x98(r1)
/* 80344C78 00341BB8  B0 1C 00 98 */	sth r0, 0x98(r28)
/* 80344C7C 00341BBC  A8 1C 00 AA */	lha r0, 0xaa(r28)
/* 80344C80 00341BC0  A8 9C 00 AC */	lha r4, 0xac(r28)
/* 80344C84 00341BC4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80344C88 00341BC8  90 A1 00 B8 */	stw r5, 0xb8(r1)
/* 80344C8C 00341BCC  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 80344C90 00341BD0  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80344C94 00341BD4  90 81 00 7C */	stw r4, 0x7c(r1)
/* 80344C98 00341BD8  C8 41 00 88 */	lfd f2, 0x88(r1)
/* 80344C9C 00341BDC  C8 61 00 78 */	lfd f3, 0x78(r1)
/* 80344CA0 00341BE0  EC 42 00 28 */	fsubs f2, f2, f0
/* 80344CA4 00341BE4  EC 63 00 28 */	fsubs f3, f3, f0
/* 80344CA8 00341BE8  EC 42 08 2A */	fadds f2, f2, f1
/* 80344CAC 00341BEC  EC 63 20 28 */	fsubs f3, f3, f4
/* 80344CB0 00341BF0  FC 40 10 1E */	fctiwz f2, f2
/* 80344CB4 00341BF4  FC 60 18 1E */	fctiwz f3, f3
/* 80344CB8 00341BF8  D8 41 00 90 */	stfd f2, 0x90(r1)
/* 80344CBC 00341BFC  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80344CC0 00341C00  D8 61 00 80 */	stfd f3, 0x80(r1)
/* 80344CC4 00341C04  80 81 00 84 */	lwz r4, 0x84(r1)
/* 80344CC8 00341C08  B0 1C 00 9A */	sth r0, 0x9a(r28)
/* 80344CCC 00341C0C  B0 9C 00 9C */	sth r4, 0x9c(r28)
/* 80344CD0 00341C10  A8 1C 00 AE */	lha r0, 0xae(r28)
/* 80344CD4 00341C14  A8 9C 00 B0 */	lha r4, 0xb0(r28)
/* 80344CD8 00341C18  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80344CDC 00341C1C  90 01 00 AC */	stw r0, 0xac(r1)
/* 80344CE0 00341C20  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 80344CE4 00341C24  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80344CE8 00341C28  C8 41 00 A8 */	lfd f2, 0xa8(r1)
/* 80344CEC 00341C2C  C8 61 00 98 */	lfd f3, 0x98(r1)
/* 80344CF0 00341C30  EC 42 00 28 */	fsubs f2, f2, f0
/* 80344CF4 00341C34  EC 63 00 28 */	fsubs f3, f3, f0
/* 80344CF8 00341C38  EC 42 08 2A */	fadds f2, f2, f1
/* 80344CFC 00341C3C  EC 63 20 2A */	fadds f3, f3, f4
/* 80344D00 00341C40  FC 40 10 1E */	fctiwz f2, f2
/* 80344D04 00341C44  FC 60 18 1E */	fctiwz f3, f3
/* 80344D08 00341C48  D8 41 00 B0 */	stfd f2, 0xb0(r1)
/* 80344D0C 00341C4C  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80344D10 00341C50  D8 61 00 A0 */	stfd f3, 0xa0(r1)
/* 80344D14 00341C54  80 81 00 A4 */	lwz r4, 0xa4(r1)
/* 80344D18 00341C58  B0 1C 00 9E */	sth r0, 0x9e(r28)
/* 80344D1C 00341C5C  B0 9C 00 A0 */	sth r4, 0xa0(r28)
/* 80344D20 00341C60  A8 1C 00 B4 */	lha r0, 0xb4(r28)
/* 80344D24 00341C64  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80344D28 00341C68  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80344D2C 00341C6C  C8 41 00 B8 */	lfd f2, 0xb8(r1)
/* 80344D30 00341C70  EC 42 00 28 */	fsubs f2, f2, f0
/* 80344D34 00341C74  EC 42 20 2A */	fadds f2, f2, f4
/* 80344D38 00341C78  FC 40 10 1E */	fctiwz f2, f2
/* 80344D3C 00341C7C  D8 41 00 C0 */	stfd f2, 0xc0(r1)
/* 80344D40 00341C80  80 C1 00 C4 */	lwz r6, 0xc4(r1)
/* 80344D44 00341C84  A8 1C 00 B2 */	lha r0, 0xb2(r28)
/* 80344D48 00341C88  38 9C 00 96 */	addi r4, r28, 0x96
/* 80344D4C 00341C8C  90 A1 00 C8 */	stw r5, 0xc8(r1)
/* 80344D50 00341C90  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80344D54 00341C94  90 01 00 CC */	stw r0, 0xcc(r1)
/* 80344D58 00341C98  C8 41 00 C8 */	lfd f2, 0xc8(r1)
/* 80344D5C 00341C9C  EC 02 00 28 */	fsubs f0, f2, f0
/* 80344D60 00341CA0  EC 00 08 28 */	fsubs f0, f0, f1
/* 80344D64 00341CA4  FC 00 00 1E */	fctiwz f0, f0
/* 80344D68 00341CA8  D8 01 00 D0 */	stfd f0, 0xd0(r1)
/* 80344D6C 00341CAC  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80344D70 00341CB0  B0 1C 00 A2 */	sth r0, 0xa2(r28)
/* 80344D74 00341CB4  B0 DC 00 A4 */	sth r6, 0xa4(r28)
/* 80344D78 00341CB8  4B CF 80 AD */	bl "setTexCoord__10J2DPictureFPCQ29JGeometry8TVec2<s>"
/* 80344D7C 00341CBC  88 1C 00 94 */	lbz r0, 0x94(r28)
/* 80344D80 00341CC0  28 00 00 00 */	cmplwi r0, 0
/* 80344D84 00341CC4  41 82 00 70 */	beq .L_80344DF4
/* 80344D88 00341CC8  88 6D 85 55 */	lbz r3, mWaitAlpha__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344D8C 00341CCC  3C 00 43 30 */	lis r0, 0x4330
/* 80344D90 00341CD0  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 80344D94 00341CD4  3B 40 00 00 */	li r26, 0
/* 80344D98 00341CD8  C8 42 FE E0 */	lfd f2, lbl_8051E240@sda21(r2)
/* 80344D9C 00341CDC  3B 20 00 00 */	li r25, 0
/* 80344DA0 00341CE0  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 80344DA4 00341CE4  C0 1C 00 40 */	lfs f0, 0x40(r28)
/* 80344DA8 00341CE8  C8 21 00 D0 */	lfd f1, 0xd0(r1)
/* 80344DAC 00341CEC  EC 21 10 28 */	fsubs f1, f1, f2
/* 80344DB0 00341CF0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80344DB4 00341CF4  FC 00 00 1E */	fctiwz f0, f0
/* 80344DB8 00341CF8  D8 01 00 C8 */	stfd f0, 0xc8(r1)
/* 80344DBC 00341CFC  83 01 00 CC */	lwz r24, 0xcc(r1)
/* 80344DC0 00341D00  48 00 00 28 */	b .L_80344DE8
.L_80344DC4:
/* 80344DC4 00341D04  80 7C 00 88 */	lwz r3, 0x88(r28)
/* 80344DC8 00341D08  7F 04 C3 78 */	mr r4, r24
/* 80344DCC 00341D0C  7C 63 C8 2E */	lwzx r3, r3, r25
/* 80344DD0 00341D10  81 83 00 00 */	lwz r12, 0(r3)
/* 80344DD4 00341D14  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80344DD8 00341D18  7D 89 03 A6 */	mtctr r12
/* 80344DDC 00341D1C  4E 80 04 21 */	bctrl 
/* 80344DE0 00341D20  3B 39 00 04 */	addi r25, r25, 4
/* 80344DE4 00341D24  3B 5A 00 01 */	addi r26, r26, 1
.L_80344DE8:
/* 80344DE8 00341D28  80 1C 00 90 */	lwz r0, 0x90(r28)
/* 80344DEC 00341D2C  7C 1A 00 00 */	cmpw r26, r0
/* 80344DF0 00341D30  41 80 FF D4 */	blt .L_80344DC4
.L_80344DF4:
/* 80344DF4 00341D34  C0 5C 00 CC */	lfs f2, 0xcc(r28)
/* 80344DF8 00341D38  C0 22 24 34 */	lfs f1, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80344DFC 00341D3C  C0 02 24 38 */	lfs f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80344E00 00341D40  EC 22 00 72 */	fmuls f1, f2, f1
/* 80344E04 00341D44  80 7C 00 80 */	lwz r3, 0x80(r28)
/* 80344E08 00341D48  EC 02 00 32 */	fmuls f0, f2, f0
/* 80344E0C 00341D4C  D0 23 01 38 */	stfs f1, 0x138(r3)
/* 80344E10 00341D50  D0 03 01 3C */	stfs f0, 0x13c(r3)
/* 80344E14 00341D54  88 1C 00 CA */	lbz r0, 0xca(r28)
/* 80344E18 00341D58  28 00 00 00 */	cmplwi r0, 0
/* 80344E1C 00341D5C  40 82 00 10 */	bne .L_80344E2C
/* 80344E20 00341D60  88 0D 98 91 */	lbz r0, mTestChangeColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344E24 00341D64  28 00 00 00 */	cmplwi r0, 0
/* 80344E28 00341D68  41 82 00 4C */	beq .L_80344E74
.L_80344E2C:
/* 80344E2C 00341D6C  80 0D 85 70 */	lwz r0, mNumberColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80344E30 00341D70  38 81 00 10 */	addi r4, r1, 0x10
/* 80344E34 00341D74  90 01 00 08 */	stw r0, 8(r1)
/* 80344E38 00341D78  88 C1 00 08 */	lbz r6, 8(r1)
/* 80344E3C 00341D7C  88 A1 00 09 */	lbz r5, 9(r1)
/* 80344E40 00341D80  88 61 00 0A */	lbz r3, 0xa(r1)
/* 80344E44 00341D84  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80344E48 00341D88  98 C1 00 0C */	stb r6, 0xc(r1)
/* 80344E4C 00341D8C  98 A1 00 0D */	stb r5, 0xd(r1)
/* 80344E50 00341D90  98 61 00 0E */	stb r3, 0xe(r1)
/* 80344E54 00341D94  98 01 00 0F */	stb r0, 0xf(r1)
/* 80344E58 00341D98  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80344E5C 00341D9C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80344E60 00341DA0  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 80344E64 00341DA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80344E68 00341DA8  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 80344E6C 00341DAC  7D 89 03 A6 */	mtctr r12
/* 80344E70 00341DB0  4E 80 04 21 */	bctrl 
.L_80344E74:
/* 80344E74 00341DB4  57 C3 06 3E */	clrlwi r3, r30, 0x18
/* 80344E78 00341DB8  3C 00 43 30 */	lis r0, 0x4330
/* 80344E7C 00341DBC  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 80344E80 00341DC0  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 80344E84 00341DC4  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 80344E88 00341DC8  C8 42 FE E0 */	lfd f2, lbl_8051E240@sda21(r2)
/* 80344E8C 00341DCC  C8 21 00 D0 */	lfd f1, 0xd0(r1)
/* 80344E90 00341DD0  C0 1C 00 40 */	lfs f0, 0x40(r28)
/* 80344E94 00341DD4  EC 21 10 28 */	fsubs f1, f1, f2
/* 80344E98 00341DD8  81 83 00 00 */	lwz r12, 0(r3)
/* 80344E9C 00341DDC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80344EA0 00341DE0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80344EA4 00341DE4  FC 00 00 1E */	fctiwz f0, f0
/* 80344EA8 00341DE8  D8 01 00 C8 */	stfd f0, 0xc8(r1)
/* 80344EAC 00341DEC  80 81 00 CC */	lwz r4, 0xcc(r1)
/* 80344EB0 00341DF0  7D 89 03 A6 */	mtctr r12
/* 80344EB4 00341DF4  4E 80 04 21 */	bctrl 
/* 80344EB8 00341DF8  C0 1C 00 CC */	lfs f0, 0xcc(r28)
/* 80344EBC 00341DFC  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 80344EC0 00341E00  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80344EC4 00341E04  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80344EC8 00341E08  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80344ECC 00341E0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80344ED0 00341E10  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80344ED4 00341E14  7D 89 03 A6 */	mtctr r12
/* 80344ED8 00341E18  4E 80 04 21 */	bctrl 
/* 80344EDC 00341E1C  C0 5C 00 C4 */	lfs f2, 0xc4(r28)
/* 80344EE0 00341E20  C0 3C 00 D0 */	lfs f1, 0xd0(r28)
/* 80344EE4 00341E24  80 7C 00 8C */	lwz r3, 0x8c(r28)
/* 80344EE8 00341E28  C0 1C 00 C0 */	lfs f0, 0xc0(r28)
/* 80344EEC 00341E2C  EC 22 08 2A */	fadds f1, f2, f1
/* 80344EF0 00341E30  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80344EF4 00341E34  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 80344EF8 00341E38  81 83 00 00 */	lwz r12, 0(r3)
/* 80344EFC 00341E3C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80344F00 00341E40  7D 89 03 A6 */	mtctr r12
/* 80344F04 00341E44  4E 80 04 21 */	bctrl 
/* 80344F08 00341E48  57 A3 06 3E */	clrlwi r3, r29, 0x18
/* 80344F0C 00341E4C  3C 00 43 30 */	lis r0, 0x4330
/* 80344F10 00341E50  90 61 00 C4 */	stw r3, 0xc4(r1)
/* 80344F14 00341E54  80 7C 00 8C */	lwz r3, 0x8c(r28)
/* 80344F18 00341E58  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 80344F1C 00341E5C  C8 42 FE E0 */	lfd f2, lbl_8051E240@sda21(r2)
/* 80344F20 00341E60  C8 21 00 C0 */	lfd f1, 0xc0(r1)
/* 80344F24 00341E64  C0 1C 00 40 */	lfs f0, 0x40(r28)
/* 80344F28 00341E68  EC 21 10 28 */	fsubs f1, f1, f2
/* 80344F2C 00341E6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80344F30 00341E70  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80344F34 00341E74  EC 01 00 32 */	fmuls f0, f1, f0
/* 80344F38 00341E78  FC 00 00 1E */	fctiwz f0, f0
/* 80344F3C 00341E7C  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 80344F40 00341E80  80 81 00 BC */	lwz r4, 0xbc(r1)
/* 80344F44 00341E84  7D 89 03 A6 */	mtctr r12
/* 80344F48 00341E88  4E 80 04 21 */	bctrl 
/* 80344F4C 00341E8C  80 7C 00 80 */	lwz r3, 0x80(r28)
/* 80344F50 00341E90  81 83 00 00 */	lwz r12, 0(r3)
/* 80344F54 00341E94  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80344F58 00341E98  7D 89 03 A6 */	mtctr r12
/* 80344F5C 00341E9C  4E 80 04 21 */	bctrl 
/* 80344F60 00341EA0  38 60 00 00 */	li r3, 0
.L_80344F64:
/* 80344F64 00341EA4  E3 E1 01 18 */	psq_l f31, 280(r1), 0, qr0
/* 80344F68 00341EA8  CB E1 01 10 */	lfd f31, 0x110(r1)
/* 80344F6C 00341EAC  E3 C1 01 08 */	psq_l f30, 264(r1), 0, qr0
/* 80344F70 00341EB0  CB C1 01 00 */	lfd f30, 0x100(r1)
/* 80344F74 00341EB4  BB 01 00 E0 */	lmw r24, 0xe0(r1)
/* 80344F78 00341EB8  80 01 01 24 */	lwz r0, 0x124(r1)
/* 80344F7C 00341EBC  7C 08 03 A6 */	mtlr r0
/* 80344F80 00341EC0  38 21 01 20 */	addi r1, r1, 0x120
/* 80344F84 00341EC4  4E 80 00 20 */	blr 
.endfn doUpdate__Q28Morimura12TDayEndCountFv

.fn doDraw__Q28Morimura12TDayEndCountFR8Graphics, global
/* 80344F88 00341EC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80344F8C 00341ECC  7C 08 02 A6 */	mflr r0
/* 80344F90 00341ED0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80344F94 00341ED4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80344F98 00341ED8  7C 9F 23 78 */	mr r31, r4
/* 80344F9C 00341EDC  93 C1 00 08 */	stw r30, 8(r1)
/* 80344FA0 00341EE0  7C 7E 1B 78 */	mr r30, r3
/* 80344FA4 00341EE4  80 63 00 7C */	lwz r3, 0x7c(r3)
/* 80344FA8 00341EE8  C0 23 00 08 */	lfs f1, 8(r3)
/* 80344FAC 00341EEC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80344FB0 00341EF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80344FB4 00341EF4  41 80 00 34 */	blt .L_80344FE8
/* 80344FB8 00341EF8  38 7F 01 90 */	addi r3, r31, 0x190
/* 80344FBC 00341EFC  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80344FC0 00341F00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80344FC4 00341F04  7D 89 03 A6 */	mtctr r12
/* 80344FC8 00341F08  4E 80 04 21 */	bctrl 
/* 80344FCC 00341F0C  80 7E 00 80 */	lwz r3, 0x80(r30)
/* 80344FD0 00341F10  7F E4 FB 78 */	mr r4, r31
/* 80344FD4 00341F14  38 BF 01 90 */	addi r5, r31, 0x190
/* 80344FD8 00341F18  81 83 00 00 */	lwz r12, 0(r3)
/* 80344FDC 00341F1C  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80344FE0 00341F20  7D 89 03 A6 */	mtctr r12
/* 80344FE4 00341F24  4E 80 04 21 */	bctrl 
.L_80344FE8:
/* 80344FE8 00341F28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80344FEC 00341F2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80344FF0 00341F30  83 C1 00 08 */	lwz r30, 8(r1)
/* 80344FF4 00341F34  7C 08 03 A6 */	mtlr r0
/* 80344FF8 00341F38  38 21 00 10 */	addi r1, r1, 0x10
/* 80344FFC 00341F3C  4E 80 00 20 */	blr 
.endfn doDraw__Q28Morimura12TDayEndCountFR8Graphics

.fn reset__Q28Morimura12TDayEndCountFv, global
/* 80345000 00341F40  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80345004 00341F44  7C 08 02 A6 */	mflr r0
/* 80345008 00341F48  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8034500C 00341F4C  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80345010 00341F50  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80345014 00341F54  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80345018 00341F58  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8034501C 00341F5C  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 80345020 00341F60  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 80345024 00341F64  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 80345028 00341F68  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 8034502C 00341F6C  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 80345030 00341F70  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 80345034 00341F74  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 80345038 00341F78  38 00 00 FF */	li r0, 0xff
/* 8034503C 00341F7C  38 CD 85 6C */	addi r6, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 80345040 00341F80  98 0D 85 6C */	stb r0, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345044 00341F84  38 A0 FF FF */	li r5, -1
/* 80345048 00341F88  7C 7A 1B 78 */	mr r26, r3
/* 8034504C 00341F8C  38 81 00 08 */	addi r4, r1, 8
/* 80345050 00341F90  98 06 00 01 */	stb r0, 1(r6)
/* 80345054 00341F94  98 06 00 02 */	stb r0, 2(r6)
/* 80345058 00341F98  98 06 00 03 */	stb r0, 3(r6)
/* 8034505C 00341F9C  80 0D 85 6C */	lwz r0, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345060 00341FA0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80345064 00341FA4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80345068 00341FA8  88 C1 00 0C */	lbz r6, 0xc(r1)
/* 8034506C 00341FAC  88 A1 00 0D */	lbz r5, 0xd(r1)
/* 80345070 00341FB0  88 61 00 0E */	lbz r3, 0xe(r1)
/* 80345074 00341FB4  88 01 00 0F */	lbz r0, 0xf(r1)
/* 80345078 00341FB8  98 C1 00 10 */	stb r6, 0x10(r1)
/* 8034507C 00341FBC  98 A1 00 11 */	stb r5, 0x11(r1)
/* 80345080 00341FC0  98 61 00 12 */	stb r3, 0x12(r1)
/* 80345084 00341FC4  98 01 00 13 */	stb r0, 0x13(r1)
/* 80345088 00341FC8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8034508C 00341FCC  90 01 00 08 */	stw r0, 8(r1)
/* 80345090 00341FD0  80 7A 00 8C */	lwz r3, 0x8c(r26)
/* 80345094 00341FD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80345098 00341FD8  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 8034509C 00341FDC  7D 89 03 A6 */	mtctr r12
/* 803450A0 00341FE0  4E 80 04 21 */	bctrl 
/* 803450A4 00341FE4  80 7A 00 8C */	lwz r3, 0x8c(r26)
/* 803450A8 00341FE8  38 80 00 00 */	li r4, 0
/* 803450AC 00341FEC  81 83 00 00 */	lwz r12, 0(r3)
/* 803450B0 00341FF0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803450B4 00341FF4  7D 89 03 A6 */	mtctr r12
/* 803450B8 00341FF8  4E 80 04 21 */	bctrl 
/* 803450BC 00341FFC  80 7A 00 80 */	lwz r3, 0x80(r26)
/* 803450C0 00342000  3C 80 63 64 */	lis r4, 0x63643130@ha
/* 803450C4 00342004  38 C4 31 30 */	addi r6, r4, 0x63643130@l
/* 803450C8 00342008  38 A0 00 00 */	li r5, 0
/* 803450CC 0034200C  81 83 00 00 */	lwz r12, 0(r3)
/* 803450D0 00342010  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803450D4 00342014  7D 89 03 A6 */	mtctr r12
/* 803450D8 00342018  4E 80 04 21 */	bctrl 
/* 803450DC 0034201C  7C 7D 1B 79 */	or. r29, r3, r3
/* 803450E0 00342020  40 82 00 20 */	bne .L_80345100
/* 803450E4 00342024  3C 60 80 49 */	lis r3, lbl_8049020C@ha
/* 803450E8 00342028  3C A0 80 49 */	lis r5, lbl_8049021C@ha
/* 803450EC 0034202C  38 63 02 0C */	addi r3, r3, lbl_8049020C@l
/* 803450F0 00342030  38 80 01 67 */	li r4, 0x167
/* 803450F4 00342034  38 A5 02 1C */	addi r5, r5, lbl_8049021C@l
/* 803450F8 00342038  4C C6 31 82 */	crclr 6
/* 803450FC 0034203C  4B CE 55 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80345100:
/* 80345100 00342040  88 1A 00 94 */	lbz r0, 0x94(r26)
/* 80345104 00342044  28 00 00 00 */	cmplwi r0, 0
/* 80345108 00342048  41 82 00 40 */	beq .L_80345148
/* 8034510C 0034204C  C0 0D 85 58 */	lfs f0, mWaitScale__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345110 00342050  7F A3 EB 78 */	mr r3, r29
/* 80345114 00342054  D0 1D 00 CC */	stfs f0, 0xcc(r29)
/* 80345118 00342058  D0 1D 00 D0 */	stfs f0, 0xd0(r29)
/* 8034511C 0034205C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80345120 00342060  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80345124 00342064  7D 89 03 A6 */	mtctr r12
/* 80345128 00342068  4E 80 04 21 */	bctrl 
/* 8034512C 0034206C  7F A3 EB 78 */	mr r3, r29
/* 80345130 00342070  38 80 00 00 */	li r4, 0
/* 80345134 00342074  81 9D 00 00 */	lwz r12, 0(r29)
/* 80345138 00342078  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8034513C 0034207C  7D 89 03 A6 */	mtctr r12
/* 80345140 00342080  4E 80 04 21 */	bctrl 
/* 80345144 00342084  48 00 00 3C */	b .L_80345180
.L_80345148:
/* 80345148 00342088  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 8034514C 0034208C  7F A3 EB 78 */	mr r3, r29
/* 80345150 00342090  D0 1D 00 CC */	stfs f0, 0xcc(r29)
/* 80345154 00342094  D0 1D 00 D0 */	stfs f0, 0xd0(r29)
/* 80345158 00342098  81 9D 00 00 */	lwz r12, 0(r29)
/* 8034515C 0034209C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80345160 003420A0  7D 89 03 A6 */	mtctr r12
/* 80345164 003420A4  4E 80 04 21 */	bctrl 
/* 80345168 003420A8  7F A3 EB 78 */	mr r3, r29
/* 8034516C 003420AC  38 80 00 00 */	li r4, 0
/* 80345170 003420B0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80345174 003420B4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80345178 003420B8  7D 89 03 A6 */	mtctr r12
/* 8034517C 003420BC  4E 80 04 21 */	bctrl 
.L_80345180:
/* 80345180 003420C0  3C 60 80 4E */	lis r3, deTagName__8Morimura@ha
/* 80345184 003420C4  C3 82 FE E8 */	lfs f28, lbl_8051E248@sda21(r2)
/* 80345188 003420C8  C3 A2 FE EC */	lfs f29, lbl_8051E24C@sda21(r2)
/* 8034518C 003420CC  3B C3 B0 78 */	addi r30, r3, deTagName__8Morimura@l
/* 80345190 003420D0  CB C2 FE D8 */	lfd f30, lbl_8051E238@sda21(r2)
/* 80345194 003420D4  3B 80 00 00 */	li r28, 0
/* 80345198 003420D8  C3 E2 FE F0 */	lfs f31, lbl_8051E250@sda21(r2)
/* 8034519C 003420DC  3F E0 43 30 */	lis r31, 0x4330
.L_803451A0:
/* 803451A0 003420E0  6F 80 80 00 */	xoris r0, r28, 0x8000
/* 803451A4 003420E4  80 7A 00 80 */	lwz r3, 0x80(r26)
/* 803451A8 003420E8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803451AC 003420EC  38 A0 00 00 */	li r5, 0
/* 803451B0 003420F0  81 83 00 00 */	lwz r12, 0(r3)
/* 803451B4 003420F4  93 E1 00 18 */	stw r31, 0x18(r1)
/* 803451B8 003420F8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803451BC 003420FC  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 803451C0 00342100  80 DE 00 00 */	lwz r6, 0(r30)
/* 803451C4 00342104  EC 00 F0 28 */	fsubs f0, f0, f30
/* 803451C8 00342108  EC 1D 00 32 */	fmuls f0, f29, f0
/* 803451CC 0034210C  EC 1C 00 32 */	fmuls f0, f28, f0
/* 803451D0 00342110  EF 60 F8 24 */	fdivs f27, f0, f31
/* 803451D4 00342114  7D 89 03 A6 */	mtctr r12
/* 803451D8 00342118  4E 80 04 21 */	bctrl 
/* 803451DC 0034211C  7C 7B 1B 79 */	or. r27, r3, r3
/* 803451E0 00342120  40 82 00 20 */	bne .L_80345200
/* 803451E4 00342124  3C 60 80 49 */	lis r3, lbl_8049020C@ha
/* 803451E8 00342128  3C A0 80 49 */	lis r5, lbl_8049021C@ha
/* 803451EC 0034212C  38 63 02 0C */	addi r3, r3, lbl_8049020C@l
/* 803451F0 00342130  38 80 01 76 */	li r4, 0x176
/* 803451F4 00342134  38 A5 02 1C */	addi r5, r5, lbl_8049021C@l
/* 803451F8 00342138  4C C6 31 82 */	crclr 6
/* 803451FC 0034213C  4B CE 54 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80345200:
/* 80345200 00342140  88 1A 00 94 */	lbz r0, 0x94(r26)
/* 80345204 00342144  28 00 00 00 */	cmplwi r0, 0
/* 80345208 00342148  41 82 01 10 */	beq .L_80345318
/* 8034520C 0034214C  7F 63 DB 78 */	mr r3, r27
/* 80345210 00342150  38 80 00 04 */	li r4, 4
/* 80345214 00342154  4B CF 3A A9 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80345218 00342158  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 8034521C 0034215C  FC 20 D8 90 */	fmr f1, f27
/* 80345220 00342160  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 80345224 00342164  40 80 00 08 */	bge .L_8034522C
/* 80345228 00342168  FC 20 D8 50 */	fneg f1, f27
.L_8034522C:
/* 8034522C 0034216C  C0 62 FE D0 */	lfs f3, lbl_8051E230@sda21(r2)
/* 80345230 00342170  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80345234 00342174  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 80345238 00342178  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8034523C 0034217C  EC 41 00 F2 */	fmuls f2, f1, f3
/* 80345240 00342180  C0 82 FE F4 */	lfs f4, lbl_8051E254@sda21(r2)
/* 80345244 00342184  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 80345248 00342188  C0 3A 00 BC */	lfs f1, 0xbc(r26)
/* 8034524C 0034218C  FC 00 10 1E */	fctiwz f0, f2
/* 80345250 00342190  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80345254 00342194  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80345258 00342198  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8034525C 0034219C  7C 64 02 14 */	add r3, r4, r0
/* 80345260 003421A0  C0 03 00 04 */	lfs f0, 4(r3)
/* 80345264 003421A4  EC 44 08 3C */	fnmsubs f2, f4, f0, f1
/* 80345268 003421A8  40 80 00 28 */	bge .L_80345290
/* 8034526C 003421AC  C0 02 FE CC */	lfs f0, lbl_8051E22C@sda21(r2)
/* 80345270 003421B0  EC 1B 00 32 */	fmuls f0, f27, f0
/* 80345274 003421B4  FC 00 00 1E */	fctiwz f0, f0
/* 80345278 003421B8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8034527C 003421BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80345280 003421C0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80345284 003421C4  7C 04 04 2E */	lfsx f0, r4, r0
/* 80345288 003421C8  FC 20 00 50 */	fneg f1, f0
/* 8034528C 003421CC  48 00 00 1C */	b .L_803452A8
.L_80345290:
/* 80345290 003421D0  EC 1B 00 F2 */	fmuls f0, f27, f3
/* 80345294 003421D4  FC 00 00 1E */	fctiwz f0, f0
/* 80345298 003421D8  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8034529C 003421DC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803452A0 003421E0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803452A4 003421E4  7C 24 04 2E */	lfsx f1, r4, r0
.L_803452A8:
/* 803452A8 003421E8  C0 1A 00 B8 */	lfs f0, 0xb8(r26)
/* 803452AC 003421EC  7F 63 DB 78 */	mr r3, r27
/* 803452B0 003421F0  EC 04 00 7A */	fmadds f0, f4, f1, f0
/* 803452B4 003421F4  D0 1B 00 D4 */	stfs f0, 0xd4(r27)
/* 803452B8 003421F8  D0 5B 00 D8 */	stfs f2, 0xd8(r27)
/* 803452BC 003421FC  81 9B 00 00 */	lwz r12, 0(r27)
/* 803452C0 00342200  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803452C4 00342204  7D 89 03 A6 */	mtctr r12
/* 803452C8 00342208  4E 80 04 21 */	bctrl 
/* 803452CC 0034220C  38 00 00 01 */	li r0, 1
/* 803452D0 00342210  7F 63 DB 78 */	mr r3, r27
/* 803452D4 00342214  98 1B 00 B0 */	stb r0, 0xb0(r27)
/* 803452D8 00342218  C0 2D 85 58 */	lfs f1, mWaitScale__Q28Morimura12TDayEndCount@sda21(r13)
/* 803452DC 0034221C  C0 1A 00 CC */	lfs f0, 0xcc(r26)
/* 803452E0 00342220  EC 01 00 32 */	fmuls f0, f1, f0
/* 803452E4 00342224  D0 1B 00 CC */	stfs f0, 0xcc(r27)
/* 803452E8 00342228  D0 1B 00 D0 */	stfs f0, 0xd0(r27)
/* 803452EC 0034222C  81 9B 00 00 */	lwz r12, 0(r27)
/* 803452F0 00342230  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803452F4 00342234  7D 89 03 A6 */	mtctr r12
/* 803452F8 00342238  4E 80 04 21 */	bctrl 
/* 803452FC 0034223C  7F 63 DB 78 */	mr r3, r27
/* 80345300 00342240  38 80 00 00 */	li r4, 0
/* 80345304 00342244  81 9B 00 00 */	lwz r12, 0(r27)
/* 80345308 00342248  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8034530C 0034224C  7D 89 03 A6 */	mtctr r12
/* 80345310 00342250  4E 80 04 21 */	bctrl 
/* 80345314 00342254  48 00 00 68 */	b .L_8034537C
.L_80345318:
/* 80345318 00342258  C0 3A 00 BC */	lfs f1, 0xbc(r26)
/* 8034531C 0034225C  7F 63 DB 78 */	mr r3, r27
/* 80345320 00342260  C0 1A 00 B8 */	lfs f0, 0xb8(r26)
/* 80345324 00342264  D0 1B 00 D4 */	stfs f0, 0xd4(r27)
/* 80345328 00342268  D0 3B 00 D8 */	stfs f1, 0xd8(r27)
/* 8034532C 0034226C  81 9B 00 00 */	lwz r12, 0(r27)
/* 80345330 00342270  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80345334 00342274  7D 89 03 A6 */	mtctr r12
/* 80345338 00342278  4E 80 04 21 */	bctrl 
/* 8034533C 0034227C  38 00 00 00 */	li r0, 0
/* 80345340 00342280  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 80345344 00342284  98 1B 00 B0 */	stb r0, 0xb0(r27)
/* 80345348 00342288  7F 63 DB 78 */	mr r3, r27
/* 8034534C 0034228C  D0 1B 00 CC */	stfs f0, 0xcc(r27)
/* 80345350 00342290  D0 1B 00 D0 */	stfs f0, 0xd0(r27)
/* 80345354 00342294  81 9B 00 00 */	lwz r12, 0(r27)
/* 80345358 00342298  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8034535C 0034229C  7D 89 03 A6 */	mtctr r12
/* 80345360 003422A0  4E 80 04 21 */	bctrl 
/* 80345364 003422A4  7F 63 DB 78 */	mr r3, r27
/* 80345368 003422A8  38 80 00 00 */	li r4, 0
/* 8034536C 003422AC  81 9B 00 00 */	lwz r12, 0(r27)
/* 80345370 003422B0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80345374 003422B4  7D 89 03 A6 */	mtctr r12
/* 80345378 003422B8  4E 80 04 21 */	bctrl 
.L_8034537C:
/* 8034537C 003422BC  3B 9C 00 01 */	addi r28, r28, 1
/* 80345380 003422C0  3B DE 00 04 */	addi r30, r30, 4
/* 80345384 003422C4  2C 1C 00 0A */	cmpwi r28, 0xa
/* 80345388 003422C8  41 80 FE 18 */	blt .L_803451A0
/* 8034538C 003422CC  93 BA 00 84 */	stw r29, 0x84(r26)
/* 80345390 003422D0  38 00 00 01 */	li r0, 1
/* 80345394 003422D4  A8 7A 00 A6 */	lha r3, 0xa6(r26)
/* 80345398 003422D8  B0 7A 00 96 */	sth r3, 0x96(r26)
/* 8034539C 003422DC  A8 7A 00 A8 */	lha r3, 0xa8(r26)
/* 803453A0 003422E0  B0 7A 00 98 */	sth r3, 0x98(r26)
/* 803453A4 003422E4  A8 7A 00 AA */	lha r3, 0xaa(r26)
/* 803453A8 003422E8  B0 7A 00 9A */	sth r3, 0x9a(r26)
/* 803453AC 003422EC  A8 7A 00 AC */	lha r3, 0xac(r26)
/* 803453B0 003422F0  B0 7A 00 9C */	sth r3, 0x9c(r26)
/* 803453B4 003422F4  A8 7A 00 AE */	lha r3, 0xae(r26)
/* 803453B8 003422F8  B0 7A 00 9E */	sth r3, 0x9e(r26)
/* 803453BC 003422FC  A8 7A 00 B0 */	lha r3, 0xb0(r26)
/* 803453C0 00342300  B0 7A 00 A0 */	sth r3, 0xa0(r26)
/* 803453C4 00342304  A8 7A 00 B2 */	lha r3, 0xb2(r26)
/* 803453C8 00342308  B0 7A 00 A2 */	sth r3, 0xa2(r26)
/* 803453CC 0034230C  A8 7A 00 B4 */	lha r3, 0xb4(r26)
/* 803453D0 00342310  B0 7A 00 A4 */	sth r3, 0xa4(r26)
/* 803453D4 00342314  98 1A 00 C8 */	stb r0, 0xc8(r26)
/* 803453D8 00342318  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 803453DC 0034231C  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 803453E0 00342320  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 803453E4 00342324  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 803453E8 00342328  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 803453EC 0034232C  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 803453F0 00342330  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 803453F4 00342334  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 803453F8 00342338  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 803453FC 0034233C  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 80345400 00342340  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 80345404 00342344  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80345408 00342348  7C 08 03 A6 */	mtlr r0
/* 8034540C 0034234C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80345410 00342350  4E 80 00 20 */	blr 
.endfn reset__Q28Morimura12TDayEndCountFv

.fn __ct__Q28Morimura18TChallengeEndCountFv, global
/* 80345414 00342354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80345418 00342358  7C 08 02 A6 */	mflr r0
/* 8034541C 0034235C  3C 80 80 49 */	lis r4, lbl_804901F4@ha
/* 80345420 00342360  90 01 00 14 */	stw r0, 0x14(r1)
/* 80345424 00342364  38 84 01 F4 */	addi r4, r4, lbl_804901F4@l
/* 80345428 00342368  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034542C 0034236C  7C 7F 1B 78 */	mr r31, r3
/* 80345430 00342370  48 00 3D 99 */	bl __ct__Q28Morimura9TTestBaseFPc
/* 80345434 00342374  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 80345438 00342378  39 00 00 00 */	li r8, 0
/* 8034543C 0034237C  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 80345440 00342380  38 00 FF FF */	li r0, -1
/* 80345444 00342384  90 9F 00 00 */	stw r4, 0(r31)
/* 80345448 00342388  38 A4 00 10 */	addi r5, r4, 0x10
/* 8034544C 0034238C  3C 60 80 04 */	lis r3, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345450 00342390  38 C0 00 04 */	li r6, 4
/* 80345454 00342394  90 BF 00 18 */	stw r5, 0x18(r31)
/* 80345458 00342398  38 83 9B A0 */	addi r4, r3, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 8034545C 0034239C  38 7F 00 96 */	addi r3, r31, 0x96
/* 80345460 003423A0  38 A0 00 00 */	li r5, 0
/* 80345464 003423A4  91 1F 00 80 */	stw r8, 0x80(r31)
/* 80345468 003423A8  38 E0 00 04 */	li r7, 4
/* 8034546C 003423AC  91 1F 00 84 */	stw r8, 0x84(r31)
/* 80345470 003423B0  91 1F 00 88 */	stw r8, 0x88(r31)
/* 80345474 003423B4  91 1F 00 8C */	stw r8, 0x8c(r31)
/* 80345478 003423B8  90 1F 00 90 */	stw r0, 0x90(r31)
/* 8034547C 003423BC  99 1F 00 94 */	stb r8, 0x94(r31)
/* 80345480 003423C0  4B D7 C3 BD */	bl __construct_array
/* 80345484 003423C4  3C 80 80 04 */	lis r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345488 003423C8  38 7F 00 A6 */	addi r3, r31, 0xa6
/* 8034548C 003423CC  38 84 9B A0 */	addi r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 80345490 003423D0  38 A0 00 00 */	li r5, 0
/* 80345494 003423D4  38 C0 00 04 */	li r6, 4
/* 80345498 003423D8  38 E0 00 04 */	li r7, 4
/* 8034549C 003423DC  4B D7 C3 A1 */	bl __construct_array
/* 803454A0 003423E0  39 20 00 01 */	li r9, 1
/* 803454A4 003423E4  3C 60 80 4E */	lis r3, __vt__Q28Morimura18TChallengeEndCount@ha
/* 803454A8 003423E8  99 3F 00 C9 */	stb r9, 0xc9(r31)
/* 803454AC 003423EC  39 00 00 00 */	li r8, 0
/* 803454B0 003423F0  38 A3 B1 EC */	addi r5, r3, __vt__Q28Morimura18TChallengeEndCount@l
/* 803454B4 003423F4  3C 60 80 49 */	lis r3, lbl_80490228@ha
/* 803454B8 003423F8  99 1F 00 CA */	stb r8, 0xca(r31)
/* 803454BC 003423FC  38 E0 00 FF */	li r7, 0xff
/* 803454C0 00342400  C0 22 FE 98 */	lfs f1, lbl_8051E1F8@sda21(r2)
/* 803454C4 00342404  38 CD 85 6C */	addi r6, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 803454C8 00342408  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 803454CC 0034240C  38 85 00 10 */	addi r4, r5, 0x10
/* 803454D0 00342410  D0 3F 00 CC */	stfs f1, 0xcc(r31)
/* 803454D4 00342414  38 03 02 28 */	addi r0, r3, lbl_80490228@l
/* 803454D8 00342418  7F E3 FB 78 */	mr r3, r31
/* 803454DC 0034241C  D0 1F 00 D0 */	stfs f0, 0xd0(r31)
/* 803454E0 00342420  99 0D 85 6C */	stb r8, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 803454E4 00342424  98 E6 00 01 */	stb r7, 1(r6)
/* 803454E8 00342428  99 06 00 02 */	stb r8, 2(r6)
/* 803454EC 0034242C  98 E6 00 03 */	stb r7, 3(r6)
/* 803454F0 00342430  99 0D 98 91 */	stb r8, mTestChangeColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 803454F4 00342434  90 BF 00 00 */	stw r5, 0(r31)
/* 803454F8 00342438  90 9F 00 18 */	stw r4, 0x18(r31)
/* 803454FC 0034243C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80345500 00342440  99 3F 00 CA */	stb r9, 0xca(r31)
/* 80345504 00342444  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80345508 00342448  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034550C 0034244C  7C 08 03 A6 */	mtlr r0
/* 80345510 00342450  38 21 00 10 */	addi r1, r1, 0x10
/* 80345514 00342454  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura18TChallengeEndCountFv

.fn __dt__Q28Morimura12TDayEndCountFv, weak
/* 80345518 00342458  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034551C 0034245C  7C 08 02 A6 */	mflr r0
/* 80345520 00342460  90 01 00 14 */	stw r0, 0x14(r1)
/* 80345524 00342464  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80345528 00342468  7C 9F 23 78 */	mr r31, r4
/* 8034552C 0034246C  93 C1 00 08 */	stw r30, 8(r1)
/* 80345530 00342470  7C 7E 1B 79 */	or. r30, r3, r3
/* 80345534 00342474  41 82 00 8C */	beq .L_803455C0
/* 80345538 00342478  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 8034553C 0034247C  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 80345540 00342480  90 9E 00 00 */	stw r4, 0(r30)
/* 80345544 00342484  38 04 00 10 */	addi r0, r4, 0x10
/* 80345548 00342488  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8034554C 0034248C  41 82 00 64 */	beq .L_803455B0
/* 80345550 00342490  3C 80 80 4E */	lis r4, __vt__Q28Morimura9TTestBase@ha
/* 80345554 00342494  38 84 B8 F8 */	addi r4, r4, __vt__Q28Morimura9TTestBase@l
/* 80345558 00342498  90 9E 00 00 */	stw r4, 0(r30)
/* 8034555C 0034249C  38 04 00 10 */	addi r0, r4, 0x10
/* 80345560 003424A0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80345564 003424A4  41 82 00 4C */	beq .L_803455B0
/* 80345568 003424A8  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 8034556C 003424AC  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 80345570 003424B0  90 9E 00 00 */	stw r4, 0(r30)
/* 80345574 003424B4  38 04 00 10 */	addi r0, r4, 0x10
/* 80345578 003424B8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8034557C 003424BC  41 82 00 34 */	beq .L_803455B0
/* 80345580 003424C0  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 80345584 003424C4  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80345588 003424C8  90 9E 00 00 */	stw r4, 0(r30)
/* 8034558C 003424CC  38 04 00 10 */	addi r0, r4, 0x10
/* 80345590 003424D0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80345594 003424D4  48 0C C0 3D */	bl del__5CNodeFv
/* 80345598 003424D8  38 7E 00 18 */	addi r3, r30, 0x18
/* 8034559C 003424DC  38 80 00 00 */	li r4, 0
/* 803455A0 003424E0  4B CD 7A 95 */	bl __dt__11JKRDisposerFv
/* 803455A4 003424E4  7F C3 F3 78 */	mr r3, r30
/* 803455A8 003424E8  38 80 00 00 */	li r4, 0
/* 803455AC 003424EC  48 0C BF DD */	bl __dt__5CNodeFv
.L_803455B0:
/* 803455B0 003424F0  7F E0 07 35 */	extsh. r0, r31
/* 803455B4 003424F4  40 81 00 0C */	ble .L_803455C0
/* 803455B8 003424F8  7F C3 F3 78 */	mr r3, r30
/* 803455BC 003424FC  4B CD EA F9 */	bl __dl__FPv
.L_803455C0:
/* 803455C0 00342500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803455C4 00342504  7F C3 F3 78 */	mr r3, r30
/* 803455C8 00342508  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803455CC 0034250C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803455D0 00342510  7C 08 03 A6 */	mtlr r0
/* 803455D4 00342514  38 21 00 10 */	addi r1, r1, 0x10
/* 803455D8 00342518  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura12TDayEndCountFv

.fn doCreate__Q28Morimura18TChallengeEndCountFP10JKRArchive, global
/* 803455DC 0034251C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803455E0 00342520  7C 08 02 A6 */	mflr r0
/* 803455E4 00342524  90 01 00 14 */	stw r0, 0x14(r1)
/* 803455E8 00342528  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803455EC 0034252C  7C 7F 1B 78 */	mr r31, r3
/* 803455F0 00342530  4B FF EC 25 */	bl doCreate__Q28Morimura12TDayEndCountFP10JKRArchive
/* 803455F4 00342534  38 60 00 80 */	li r3, 0x80
/* 803455F8 00342538  38 00 00 00 */	li r0, 0
/* 803455FC 0034253C  98 6D 85 54 */	stb r3, mAlphaMax__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345600 00342540  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 80345604 00342544  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80345608 00342548  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034560C 0034254C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80345610 00342550  7C 08 03 A6 */	mtlr r0
/* 80345614 00342554  38 21 00 10 */	addi r1, r1, 0x10
/* 80345618 00342558  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura18TChallengeEndCountFP10JKRArchive

.fn __ct__Q28Morimura20TChallengeEndCount1pFv, global
/* 8034561C 0034255C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80345620 00342560  7C 08 02 A6 */	mflr r0
/* 80345624 00342564  3C 80 80 49 */	lis r4, lbl_804901E8@ha
/* 80345628 00342568  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034562C 0034256C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80345630 00342570  3B E4 01 E8 */	addi r31, r4, lbl_804901E8@l
/* 80345634 00342574  38 9F 00 0C */	addi r4, r31, 0xc
/* 80345638 00342578  93 C1 00 08 */	stw r30, 8(r1)
/* 8034563C 0034257C  7C 7E 1B 78 */	mr r30, r3
/* 80345640 00342580  48 00 3B 89 */	bl __ct__Q28Morimura9TTestBaseFPc
/* 80345644 00342584  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 80345648 00342588  39 00 00 00 */	li r8, 0
/* 8034564C 0034258C  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 80345650 00342590  38 00 FF FF */	li r0, -1
/* 80345654 00342594  90 9E 00 00 */	stw r4, 0(r30)
/* 80345658 00342598  38 A4 00 10 */	addi r5, r4, 0x10
/* 8034565C 0034259C  3C 60 80 04 */	lis r3, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345660 003425A0  38 C0 00 04 */	li r6, 4
/* 80345664 003425A4  90 BE 00 18 */	stw r5, 0x18(r30)
/* 80345668 003425A8  38 83 9B A0 */	addi r4, r3, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 8034566C 003425AC  38 7E 00 96 */	addi r3, r30, 0x96
/* 80345670 003425B0  38 A0 00 00 */	li r5, 0
/* 80345674 003425B4  91 1E 00 80 */	stw r8, 0x80(r30)
/* 80345678 003425B8  38 E0 00 04 */	li r7, 4
/* 8034567C 003425BC  91 1E 00 84 */	stw r8, 0x84(r30)
/* 80345680 003425C0  91 1E 00 88 */	stw r8, 0x88(r30)
/* 80345684 003425C4  91 1E 00 8C */	stw r8, 0x8c(r30)
/* 80345688 003425C8  90 1E 00 90 */	stw r0, 0x90(r30)
/* 8034568C 003425CC  99 1E 00 94 */	stb r8, 0x94(r30)
/* 80345690 003425D0  4B D7 C1 AD */	bl __construct_array
/* 80345694 003425D4  3C 80 80 04 */	lis r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345698 003425D8  38 7E 00 A6 */	addi r3, r30, 0xa6
/* 8034569C 003425DC  38 84 9B A0 */	addi r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 803456A0 003425E0  38 A0 00 00 */	li r5, 0
/* 803456A4 003425E4  38 C0 00 04 */	li r6, 4
/* 803456A8 003425E8  38 E0 00 04 */	li r7, 4
/* 803456AC 003425EC  4B D7 C1 91 */	bl __construct_array
/* 803456B0 003425F0  39 80 00 01 */	li r12, 1
/* 803456B4 003425F4  3C 60 80 4E */	lis r3, __vt__Q28Morimura18TChallengeEndCount@ha
/* 803456B8 003425F8  99 9E 00 C9 */	stb r12, 0xc9(r30)
/* 803456BC 003425FC  39 60 00 00 */	li r11, 0
/* 803456C0 00342600  39 03 B1 EC */	addi r8, r3, __vt__Q28Morimura18TChallengeEndCount@l
/* 803456C4 00342604  3C 60 80 4E */	lis r3, __vt__Q28Morimura20TChallengeEndCount1p@ha
/* 803456C8 00342608  99 7E 00 CA */	stb r11, 0xca(r30)
/* 803456CC 0034260C  38 A3 B1 70 */	addi r5, r3, __vt__Q28Morimura20TChallengeEndCount1p@l
/* 803456D0 00342610  C0 22 FE 98 */	lfs f1, lbl_8051E1F8@sda21(r2)
/* 803456D4 00342614  39 40 00 FF */	li r10, 0xff
/* 803456D8 00342618  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 803456DC 0034261C  39 2D 85 6C */	addi r9, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 803456E0 00342620  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 803456E4 00342624  38 E8 00 10 */	addi r7, r8, 0x10
/* 803456E8 00342628  38 DF 00 40 */	addi r6, r31, 0x40
/* 803456EC 0034262C  38 85 00 10 */	addi r4, r5, 0x10
/* 803456F0 00342630  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 803456F4 00342634  38 1F 00 54 */	addi r0, r31, 0x54
/* 803456F8 00342638  7F C3 F3 78 */	mr r3, r30
/* 803456FC 0034263C  99 6D 85 6C */	stb r11, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345700 00342640  99 49 00 01 */	stb r10, 1(r9)
/* 80345704 00342644  99 69 00 02 */	stb r11, 2(r9)
/* 80345708 00342648  99 49 00 03 */	stb r10, 3(r9)
/* 8034570C 0034264C  99 6D 98 91 */	stb r11, mTestChangeColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345710 00342650  91 1E 00 00 */	stw r8, 0(r30)
/* 80345714 00342654  90 FE 00 18 */	stw r7, 0x18(r30)
/* 80345718 00342658  90 DE 00 14 */	stw r6, 0x14(r30)
/* 8034571C 0034265C  99 9E 00 CA */	stb r12, 0xca(r30)
/* 80345720 00342660  90 BE 00 00 */	stw r5, 0(r30)
/* 80345724 00342664  90 9E 00 18 */	stw r4, 0x18(r30)
/* 80345728 00342668  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8034572C 0034266C  C0 0D 85 64 */	lfs f0, m2pScale__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345730 00342670  D0 1E 00 CC */	stfs f0, 0xcc(r30)
/* 80345734 00342674  C0 0D 85 68 */	lfs f0, m2pOffsetY__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345738 00342678  FC 00 00 50 */	fneg f0, f0
/* 8034573C 0034267C  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 80345740 00342680  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80345744 00342684  83 C1 00 08 */	lwz r30, 8(r1)
/* 80345748 00342688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034574C 0034268C  7C 08 03 A6 */	mtlr r0
/* 80345750 00342690  38 21 00 10 */	addi r1, r1, 0x10
/* 80345754 00342694  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura20TChallengeEndCount1pFv

.fn __dt__Q28Morimura18TChallengeEndCountFv, weak
/* 80345758 00342698  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034575C 0034269C  7C 08 02 A6 */	mflr r0
/* 80345760 003426A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80345764 003426A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80345768 003426A8  7C 9F 23 78 */	mr r31, r4
/* 8034576C 003426AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80345770 003426B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80345774 003426B4  41 82 00 A4 */	beq .L_80345818
/* 80345778 003426B8  3C 80 80 4E */	lis r4, __vt__Q28Morimura18TChallengeEndCount@ha
/* 8034577C 003426BC  38 84 B1 EC */	addi r4, r4, __vt__Q28Morimura18TChallengeEndCount@l
/* 80345780 003426C0  90 9E 00 00 */	stw r4, 0(r30)
/* 80345784 003426C4  38 04 00 10 */	addi r0, r4, 0x10
/* 80345788 003426C8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8034578C 003426CC  41 82 00 7C */	beq .L_80345808
/* 80345790 003426D0  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 80345794 003426D4  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 80345798 003426D8  90 9E 00 00 */	stw r4, 0(r30)
/* 8034579C 003426DC  38 04 00 10 */	addi r0, r4, 0x10
/* 803457A0 003426E0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803457A4 003426E4  41 82 00 64 */	beq .L_80345808
/* 803457A8 003426E8  3C 80 80 4E */	lis r4, __vt__Q28Morimura9TTestBase@ha
/* 803457AC 003426EC  38 84 B8 F8 */	addi r4, r4, __vt__Q28Morimura9TTestBase@l
/* 803457B0 003426F0  90 9E 00 00 */	stw r4, 0(r30)
/* 803457B4 003426F4  38 04 00 10 */	addi r0, r4, 0x10
/* 803457B8 003426F8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803457BC 003426FC  41 82 00 4C */	beq .L_80345808
/* 803457C0 00342700  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 803457C4 00342704  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 803457C8 00342708  90 9E 00 00 */	stw r4, 0(r30)
/* 803457CC 0034270C  38 04 00 10 */	addi r0, r4, 0x10
/* 803457D0 00342710  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803457D4 00342714  41 82 00 34 */	beq .L_80345808
/* 803457D8 00342718  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 803457DC 0034271C  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 803457E0 00342720  90 9E 00 00 */	stw r4, 0(r30)
/* 803457E4 00342724  38 04 00 10 */	addi r0, r4, 0x10
/* 803457E8 00342728  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803457EC 0034272C  48 0C BD E5 */	bl del__5CNodeFv
/* 803457F0 00342730  38 7E 00 18 */	addi r3, r30, 0x18
/* 803457F4 00342734  38 80 00 00 */	li r4, 0
/* 803457F8 00342738  4B CD 78 3D */	bl __dt__11JKRDisposerFv
/* 803457FC 0034273C  7F C3 F3 78 */	mr r3, r30
/* 80345800 00342740  38 80 00 00 */	li r4, 0
/* 80345804 00342744  48 0C BD 85 */	bl __dt__5CNodeFv
.L_80345808:
/* 80345808 00342748  7F E0 07 35 */	extsh. r0, r31
/* 8034580C 0034274C  40 81 00 0C */	ble .L_80345818
/* 80345810 00342750  7F C3 F3 78 */	mr r3, r30
/* 80345814 00342754  4B CD E8 A1 */	bl __dl__FPv
.L_80345818:
/* 80345818 00342758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034581C 0034275C  7F C3 F3 78 */	mr r3, r30
/* 80345820 00342760  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80345824 00342764  83 C1 00 08 */	lwz r30, 8(r1)
/* 80345828 00342768  7C 08 03 A6 */	mtlr r0
/* 8034582C 0034276C  38 21 00 10 */	addi r1, r1, 0x10
/* 80345830 00342770  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura18TChallengeEndCountFv

.fn doUpdate__Q28Morimura20TChallengeEndCount1pFv, global
/* 80345834 00342774  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80345838 00342778  7C 08 02 A6 */	mflr r0
/* 8034583C 0034277C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80345840 00342780  C0 0D 85 64 */	lfs f0, m2pScale__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345844 00342784  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80345848 00342788  C0 0D 85 68 */	lfs f0, m2pOffsetY__Q28Morimura12TDayEndCount@sda21(r13)
/* 8034584C 0034278C  FC 00 00 50 */	fneg f0, f0
/* 80345850 00342790  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80345854 00342794  4B FF EC AD */	bl doUpdate__Q28Morimura12TDayEndCountFv
/* 80345858 00342798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034585C 0034279C  7C 08 03 A6 */	mtlr r0
/* 80345860 003427A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80345864 003427A4  4E 80 00 20 */	blr 
.endfn doUpdate__Q28Morimura20TChallengeEndCount1pFv

.fn __ct__Q28Morimura20TChallengeEndCount2pFv, global
/* 80345868 003427A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034586C 003427AC  7C 08 02 A6 */	mflr r0
/* 80345870 003427B0  3C 80 80 49 */	lis r4, lbl_804901E8@ha
/* 80345874 003427B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80345878 003427B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034587C 003427BC  3B E4 01 E8 */	addi r31, r4, lbl_804901E8@l
/* 80345880 003427C0  38 9F 00 0C */	addi r4, r31, 0xc
/* 80345884 003427C4  93 C1 00 08 */	stw r30, 8(r1)
/* 80345888 003427C8  7C 7E 1B 78 */	mr r30, r3
/* 8034588C 003427CC  48 00 39 3D */	bl __ct__Q28Morimura9TTestBaseFPc
/* 80345890 003427D0  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 80345894 003427D4  39 00 00 00 */	li r8, 0
/* 80345898 003427D8  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 8034589C 003427DC  38 00 FF FF */	li r0, -1
/* 803458A0 003427E0  90 9E 00 00 */	stw r4, 0(r30)
/* 803458A4 003427E4  38 A4 00 10 */	addi r5, r4, 0x10
/* 803458A8 003427E8  3C 60 80 04 */	lis r3, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 803458AC 003427EC  38 C0 00 04 */	li r6, 4
/* 803458B0 003427F0  90 BE 00 18 */	stw r5, 0x18(r30)
/* 803458B4 003427F4  38 83 9B A0 */	addi r4, r3, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 803458B8 003427F8  38 7E 00 96 */	addi r3, r30, 0x96
/* 803458BC 003427FC  38 A0 00 00 */	li r5, 0
/* 803458C0 00342800  91 1E 00 80 */	stw r8, 0x80(r30)
/* 803458C4 00342804  38 E0 00 04 */	li r7, 4
/* 803458C8 00342808  91 1E 00 84 */	stw r8, 0x84(r30)
/* 803458CC 0034280C  91 1E 00 88 */	stw r8, 0x88(r30)
/* 803458D0 00342810  91 1E 00 8C */	stw r8, 0x8c(r30)
/* 803458D4 00342814  90 1E 00 90 */	stw r0, 0x90(r30)
/* 803458D8 00342818  99 1E 00 94 */	stb r8, 0x94(r30)
/* 803458DC 0034281C  4B D7 BF 61 */	bl __construct_array
/* 803458E0 00342820  3C 80 80 04 */	lis r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 803458E4 00342824  38 7E 00 A6 */	addi r3, r30, 0xa6
/* 803458E8 00342828  38 84 9B A0 */	addi r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 803458EC 0034282C  38 A0 00 00 */	li r5, 0
/* 803458F0 00342830  38 C0 00 04 */	li r6, 4
/* 803458F4 00342834  38 E0 00 04 */	li r7, 4
/* 803458F8 00342838  4B D7 BF 45 */	bl __construct_array
/* 803458FC 0034283C  39 80 00 01 */	li r12, 1
/* 80345900 00342840  3C 60 80 4E */	lis r3, __vt__Q28Morimura18TChallengeEndCount@ha
/* 80345904 00342844  99 9E 00 C9 */	stb r12, 0xc9(r30)
/* 80345908 00342848  39 60 00 00 */	li r11, 0
/* 8034590C 0034284C  39 03 B1 EC */	addi r8, r3, __vt__Q28Morimura18TChallengeEndCount@l
/* 80345910 00342850  3C 60 80 4E */	lis r3, __vt__Q28Morimura20TChallengeEndCount2p@ha
/* 80345914 00342854  99 7E 00 CA */	stb r11, 0xca(r30)
/* 80345918 00342858  38 A3 B0 F4 */	addi r5, r3, __vt__Q28Morimura20TChallengeEndCount2p@l
/* 8034591C 0034285C  C0 22 FE 98 */	lfs f1, lbl_8051E1F8@sda21(r2)
/* 80345920 00342860  39 40 00 FF */	li r10, 0xff
/* 80345924 00342864  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 80345928 00342868  39 2D 85 6C */	addi r9, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 8034592C 0034286C  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 80345930 00342870  38 E8 00 10 */	addi r7, r8, 0x10
/* 80345934 00342874  38 DF 00 40 */	addi r6, r31, 0x40
/* 80345938 00342878  38 85 00 10 */	addi r4, r5, 0x10
/* 8034593C 0034287C  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 80345940 00342880  38 1F 00 68 */	addi r0, r31, 0x68
/* 80345944 00342884  7F C3 F3 78 */	mr r3, r30
/* 80345948 00342888  99 6D 85 6C */	stb r11, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 8034594C 0034288C  99 49 00 01 */	stb r10, 1(r9)
/* 80345950 00342890  99 69 00 02 */	stb r11, 2(r9)
/* 80345954 00342894  99 49 00 03 */	stb r10, 3(r9)
/* 80345958 00342898  99 6D 98 91 */	stb r11, mTestChangeColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 8034595C 0034289C  91 1E 00 00 */	stw r8, 0(r30)
/* 80345960 003428A0  90 FE 00 18 */	stw r7, 0x18(r30)
/* 80345964 003428A4  90 DE 00 14 */	stw r6, 0x14(r30)
/* 80345968 003428A8  99 9E 00 CA */	stb r12, 0xca(r30)
/* 8034596C 003428AC  90 BE 00 00 */	stw r5, 0(r30)
/* 80345970 003428B0  90 9E 00 18 */	stw r4, 0x18(r30)
/* 80345974 003428B4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80345978 003428B8  C0 0D 85 64 */	lfs f0, m2pScale__Q28Morimura12TDayEndCount@sda21(r13)
/* 8034597C 003428BC  D0 1E 00 CC */	stfs f0, 0xcc(r30)
/* 80345980 003428C0  C0 0D 85 68 */	lfs f0, m2pOffsetY__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345984 003428C4  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 80345988 003428C8  99 7E 00 C9 */	stb r11, 0xc9(r30)
/* 8034598C 003428CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80345990 003428D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80345994 003428D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80345998 003428D8  7C 08 03 A6 */	mtlr r0
/* 8034599C 003428DC  38 21 00 10 */	addi r1, r1, 0x10
/* 803459A0 003428E0  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura20TChallengeEndCount2pFv

.fn doUpdate__Q28Morimura20TChallengeEndCount2pFv, global
/* 803459A4 003428E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803459A8 003428E8  7C 08 02 A6 */	mflr r0
/* 803459AC 003428EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803459B0 003428F0  C0 0D 85 64 */	lfs f0, m2pScale__Q28Morimura12TDayEndCount@sda21(r13)
/* 803459B4 003428F4  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 803459B8 003428F8  C0 0D 85 68 */	lfs f0, m2pOffsetY__Q28Morimura12TDayEndCount@sda21(r13)
/* 803459BC 003428FC  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 803459C0 00342900  4B FF EB 41 */	bl doUpdate__Q28Morimura12TDayEndCountFv
/* 803459C4 00342904  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803459C8 00342908  7C 08 03 A6 */	mtlr r0
/* 803459CC 0034290C  38 21 00 10 */	addi r1, r1, 0x10
/* 803459D0 00342910  4E 80 00 20 */	blr 
.endfn doUpdate__Q28Morimura20TChallengeEndCount2pFv

.fn doCreateObj__Q28Morimura15TCountDownSceneFP10JKRArchive, global
/* 803459D4 00342914  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803459D8 00342918  7C 08 02 A6 */	mflr r0
/* 803459DC 0034291C  3C A0 80 49 */	lis r5, lbl_804901E8@ha
/* 803459E0 00342920  90 01 00 24 */	stw r0, 0x24(r1)
/* 803459E4 00342924  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803459E8 00342928  3B E5 01 E8 */	addi r31, r5, lbl_804901E8@l
/* 803459EC 0034292C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803459F0 00342930  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803459F4 00342934  7C 9D 23 78 */	mr r29, r4
/* 803459F8 00342938  93 81 00 10 */	stw r28, 0x10(r1)
/* 803459FC 0034293C  7C 7C 1B 78 */	mr r28, r3
/* 80345A00 00342940  88 0D 98 92 */	lbz r0, mCountDownType__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345A04 00342944  2C 00 00 01 */	cmpwi r0, 1
/* 80345A08 00342948  41 82 00 F8 */	beq .L_80345B00
/* 80345A0C 0034294C  40 80 00 10 */	bge .L_80345A1C
/* 80345A10 00342950  2C 00 00 00 */	cmpwi r0, 0
/* 80345A14 00342954  40 80 00 14 */	bge .L_80345A28
/* 80345A18 00342958  48 00 04 28 */	b .L_80345E40
.L_80345A1C:
/* 80345A1C 0034295C  2C 00 00 03 */	cmpwi r0, 3
/* 80345A20 00342960  40 80 04 20 */	bge .L_80345E40
/* 80345A24 00342964  48 00 01 D4 */	b .L_80345BF8
.L_80345A28:
/* 80345A28 00342968  38 60 00 D4 */	li r3, 0xd4
/* 80345A2C 0034296C  4B CD E4 79 */	bl __nw__FUl
/* 80345A30 00342970  7C 7E 1B 79 */	or. r30, r3, r3
/* 80345A34 00342974  41 82 00 B4 */	beq .L_80345AE8
/* 80345A38 00342978  38 9F 00 0C */	addi r4, r31, 0xc
/* 80345A3C 0034297C  48 00 37 8D */	bl __ct__Q28Morimura9TTestBaseFPc
/* 80345A40 00342980  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 80345A44 00342984  39 00 00 00 */	li r8, 0
/* 80345A48 00342988  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 80345A4C 0034298C  38 00 FF FF */	li r0, -1
/* 80345A50 00342990  90 9E 00 00 */	stw r4, 0(r30)
/* 80345A54 00342994  38 A4 00 10 */	addi r5, r4, 0x10
/* 80345A58 00342998  3C 60 80 04 */	lis r3, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345A5C 0034299C  38 C0 00 04 */	li r6, 4
/* 80345A60 003429A0  90 BE 00 18 */	stw r5, 0x18(r30)
/* 80345A64 003429A4  38 83 9B A0 */	addi r4, r3, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 80345A68 003429A8  38 7E 00 96 */	addi r3, r30, 0x96
/* 80345A6C 003429AC  38 A0 00 00 */	li r5, 0
/* 80345A70 003429B0  91 1E 00 80 */	stw r8, 0x80(r30)
/* 80345A74 003429B4  38 E0 00 04 */	li r7, 4
/* 80345A78 003429B8  91 1E 00 84 */	stw r8, 0x84(r30)
/* 80345A7C 003429BC  91 1E 00 88 */	stw r8, 0x88(r30)
/* 80345A80 003429C0  91 1E 00 8C */	stw r8, 0x8c(r30)
/* 80345A84 003429C4  90 1E 00 90 */	stw r0, 0x90(r30)
/* 80345A88 003429C8  99 1E 00 94 */	stb r8, 0x94(r30)
/* 80345A8C 003429CC  4B D7 BD B1 */	bl __construct_array
/* 80345A90 003429D0  3C 80 80 04 */	lis r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345A94 003429D4  38 7E 00 A6 */	addi r3, r30, 0xa6
/* 80345A98 003429D8  38 84 9B A0 */	addi r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 80345A9C 003429DC  38 A0 00 00 */	li r5, 0
/* 80345AA0 003429E0  38 C0 00 04 */	li r6, 4
/* 80345AA4 003429E4  38 E0 00 04 */	li r7, 4
/* 80345AA8 003429E8  4B D7 BD 95 */	bl __construct_array
/* 80345AAC 003429EC  38 00 00 01 */	li r0, 1
/* 80345AB0 003429F0  38 80 00 00 */	li r4, 0
/* 80345AB4 003429F4  98 1E 00 C9 */	stb r0, 0xc9(r30)
/* 80345AB8 003429F8  38 00 00 FF */	li r0, 0xff
/* 80345ABC 003429FC  C0 22 FE 98 */	lfs f1, lbl_8051E1F8@sda21(r2)
/* 80345AC0 00342A00  38 6D 85 6C */	addi r3, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 80345AC4 00342A04  98 9E 00 CA */	stb r4, 0xca(r30)
/* 80345AC8 00342A08  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 80345ACC 00342A0C  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 80345AD0 00342A10  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 80345AD4 00342A14  98 8D 85 6C */	stb r4, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345AD8 00342A18  98 03 00 01 */	stb r0, 1(r3)
/* 80345ADC 00342A1C  98 83 00 02 */	stb r4, 2(r3)
/* 80345AE0 00342A20  98 03 00 03 */	stb r0, 3(r3)
/* 80345AE4 00342A24  98 8D 98 91 */	stb r4, mTestChangeColor__Q28Morimura12TDayEndCount@sda21(r13)
.L_80345AE8:
/* 80345AE8 00342A28  7F 83 E3 78 */	mr r3, r28
/* 80345AEC 00342A2C  7F C4 F3 78 */	mr r4, r30
/* 80345AF0 00342A30  7F A5 EB 78 */	mr r5, r29
/* 80345AF4 00342A34  48 10 C2 81 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80345AF8 00342A38  93 DC 02 20 */	stw r30, 0x220(r28)
/* 80345AFC 00342A3C  48 00 03 44 */	b .L_80345E40
.L_80345B00:
/* 80345B00 00342A40  38 60 00 D4 */	li r3, 0xd4
/* 80345B04 00342A44  4B CD E3 A1 */	bl __nw__FUl
/* 80345B08 00342A48  7C 7E 1B 79 */	or. r30, r3, r3
/* 80345B0C 00342A4C  41 82 00 D4 */	beq .L_80345BE0
/* 80345B10 00342A50  38 9F 00 0C */	addi r4, r31, 0xc
/* 80345B14 00342A54  48 00 36 B5 */	bl __ct__Q28Morimura9TTestBaseFPc
/* 80345B18 00342A58  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 80345B1C 00342A5C  39 00 00 00 */	li r8, 0
/* 80345B20 00342A60  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 80345B24 00342A64  38 00 FF FF */	li r0, -1
/* 80345B28 00342A68  90 9E 00 00 */	stw r4, 0(r30)
/* 80345B2C 00342A6C  38 A4 00 10 */	addi r5, r4, 0x10
/* 80345B30 00342A70  3C 60 80 04 */	lis r3, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345B34 00342A74  38 C0 00 04 */	li r6, 4
/* 80345B38 00342A78  90 BE 00 18 */	stw r5, 0x18(r30)
/* 80345B3C 00342A7C  38 83 9B A0 */	addi r4, r3, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 80345B40 00342A80  38 7E 00 96 */	addi r3, r30, 0x96
/* 80345B44 00342A84  38 A0 00 00 */	li r5, 0
/* 80345B48 00342A88  91 1E 00 80 */	stw r8, 0x80(r30)
/* 80345B4C 00342A8C  38 E0 00 04 */	li r7, 4
/* 80345B50 00342A90  91 1E 00 84 */	stw r8, 0x84(r30)
/* 80345B54 00342A94  91 1E 00 88 */	stw r8, 0x88(r30)
/* 80345B58 00342A98  91 1E 00 8C */	stw r8, 0x8c(r30)
/* 80345B5C 00342A9C  90 1E 00 90 */	stw r0, 0x90(r30)
/* 80345B60 00342AA0  99 1E 00 94 */	stb r8, 0x94(r30)
/* 80345B64 00342AA4  4B D7 BC D9 */	bl __construct_array
/* 80345B68 00342AA8  3C 80 80 04 */	lis r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345B6C 00342AAC  38 7E 00 A6 */	addi r3, r30, 0xa6
/* 80345B70 00342AB0  38 84 9B A0 */	addi r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 80345B74 00342AB4  38 A0 00 00 */	li r5, 0
/* 80345B78 00342AB8  38 C0 00 04 */	li r6, 4
/* 80345B7C 00342ABC  38 E0 00 04 */	li r7, 4
/* 80345B80 00342AC0  4B D7 BC BD */	bl __construct_array
/* 80345B84 00342AC4  39 00 00 01 */	li r8, 1
/* 80345B88 00342AC8  3C 60 80 4E */	lis r3, __vt__Q28Morimura18TChallengeEndCount@ha
/* 80345B8C 00342ACC  99 1E 00 C9 */	stb r8, 0xc9(r30)
/* 80345B90 00342AD0  38 E0 00 00 */	li r7, 0
/* 80345B94 00342AD4  38 83 B1 EC */	addi r4, r3, __vt__Q28Morimura18TChallengeEndCount@l
/* 80345B98 00342AD8  C0 22 FE 98 */	lfs f1, lbl_8051E1F8@sda21(r2)
/* 80345B9C 00342ADC  98 FE 00 CA */	stb r7, 0xca(r30)
/* 80345BA0 00342AE0  38 C0 00 FF */	li r6, 0xff
/* 80345BA4 00342AE4  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 80345BA8 00342AE8  38 AD 85 6C */	addi r5, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 80345BAC 00342AEC  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 80345BB0 00342AF0  38 64 00 10 */	addi r3, r4, 0x10
/* 80345BB4 00342AF4  38 1F 00 40 */	addi r0, r31, 0x40
/* 80345BB8 00342AF8  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 80345BBC 00342AFC  98 ED 85 6C */	stb r7, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345BC0 00342B00  98 C5 00 01 */	stb r6, 1(r5)
/* 80345BC4 00342B04  98 E5 00 02 */	stb r7, 2(r5)
/* 80345BC8 00342B08  98 C5 00 03 */	stb r6, 3(r5)
/* 80345BCC 00342B0C  98 ED 98 91 */	stb r7, mTestChangeColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345BD0 00342B10  90 9E 00 00 */	stw r4, 0(r30)
/* 80345BD4 00342B14  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80345BD8 00342B18  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80345BDC 00342B1C  99 1E 00 CA */	stb r8, 0xca(r30)
.L_80345BE0:
/* 80345BE0 00342B20  7F 83 E3 78 */	mr r3, r28
/* 80345BE4 00342B24  7F C4 F3 78 */	mr r4, r30
/* 80345BE8 00342B28  7F A5 EB 78 */	mr r5, r29
/* 80345BEC 00342B2C  48 10 C1 89 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80345BF0 00342B30  93 DC 02 20 */	stw r30, 0x220(r28)
/* 80345BF4 00342B34  48 00 02 4C */	b .L_80345E40
.L_80345BF8:
/* 80345BF8 00342B38  38 60 00 D4 */	li r3, 0xd4
/* 80345BFC 00342B3C  4B CD E2 A9 */	bl __nw__FUl
/* 80345C00 00342B40  7C 7E 1B 79 */	or. r30, r3, r3
/* 80345C04 00342B44  41 82 01 04 */	beq .L_80345D08
/* 80345C08 00342B48  38 9F 00 0C */	addi r4, r31, 0xc
/* 80345C0C 00342B4C  48 00 35 BD */	bl __ct__Q28Morimura9TTestBaseFPc
/* 80345C10 00342B50  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 80345C14 00342B54  39 00 00 00 */	li r8, 0
/* 80345C18 00342B58  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 80345C1C 00342B5C  38 00 FF FF */	li r0, -1
/* 80345C20 00342B60  90 9E 00 00 */	stw r4, 0(r30)
/* 80345C24 00342B64  38 A4 00 10 */	addi r5, r4, 0x10
/* 80345C28 00342B68  3C 60 80 04 */	lis r3, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345C2C 00342B6C  38 C0 00 04 */	li r6, 4
/* 80345C30 00342B70  90 BE 00 18 */	stw r5, 0x18(r30)
/* 80345C34 00342B74  38 83 9B A0 */	addi r4, r3, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 80345C38 00342B78  38 7E 00 96 */	addi r3, r30, 0x96
/* 80345C3C 00342B7C  38 A0 00 00 */	li r5, 0
/* 80345C40 00342B80  91 1E 00 80 */	stw r8, 0x80(r30)
/* 80345C44 00342B84  38 E0 00 04 */	li r7, 4
/* 80345C48 00342B88  91 1E 00 84 */	stw r8, 0x84(r30)
/* 80345C4C 00342B8C  91 1E 00 88 */	stw r8, 0x88(r30)
/* 80345C50 00342B90  91 1E 00 8C */	stw r8, 0x8c(r30)
/* 80345C54 00342B94  90 1E 00 90 */	stw r0, 0x90(r30)
/* 80345C58 00342B98  99 1E 00 94 */	stb r8, 0x94(r30)
/* 80345C5C 00342B9C  4B D7 BB E1 */	bl __construct_array
/* 80345C60 00342BA0  3C 80 80 04 */	lis r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345C64 00342BA4  38 7E 00 A6 */	addi r3, r30, 0xa6
/* 80345C68 00342BA8  38 84 9B A0 */	addi r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 80345C6C 00342BAC  38 A0 00 00 */	li r5, 0
/* 80345C70 00342BB0  38 C0 00 04 */	li r6, 4
/* 80345C74 00342BB4  38 E0 00 04 */	li r7, 4
/* 80345C78 00342BB8  4B D7 BB C5 */	bl __construct_array
/* 80345C7C 00342BBC  39 60 00 01 */	li r11, 1
/* 80345C80 00342BC0  3C 60 80 4E */	lis r3, __vt__Q28Morimura18TChallengeEndCount@ha
/* 80345C84 00342BC4  99 7E 00 C9 */	stb r11, 0xc9(r30)
/* 80345C88 00342BC8  39 40 00 00 */	li r10, 0
/* 80345C8C 00342BCC  38 E3 B1 EC */	addi r7, r3, __vt__Q28Morimura18TChallengeEndCount@l
/* 80345C90 00342BD0  3C 60 80 4E */	lis r3, __vt__Q28Morimura20TChallengeEndCount1p@ha
/* 80345C94 00342BD4  99 5E 00 CA */	stb r10, 0xca(r30)
/* 80345C98 00342BD8  38 83 B1 70 */	addi r4, r3, __vt__Q28Morimura20TChallengeEndCount1p@l
/* 80345C9C 00342BDC  C0 22 FE 98 */	lfs f1, lbl_8051E1F8@sda21(r2)
/* 80345CA0 00342BE0  39 20 00 FF */	li r9, 0xff
/* 80345CA4 00342BE4  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 80345CA8 00342BE8  39 0D 85 6C */	addi r8, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 80345CAC 00342BEC  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 80345CB0 00342BF0  38 C7 00 10 */	addi r6, r7, 0x10
/* 80345CB4 00342BF4  38 BF 00 40 */	addi r5, r31, 0x40
/* 80345CB8 00342BF8  38 64 00 10 */	addi r3, r4, 0x10
/* 80345CBC 00342BFC  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 80345CC0 00342C00  38 1F 00 54 */	addi r0, r31, 0x54
/* 80345CC4 00342C04  99 4D 85 6C */	stb r10, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345CC8 00342C08  99 28 00 01 */	stb r9, 1(r8)
/* 80345CCC 00342C0C  99 48 00 02 */	stb r10, 2(r8)
/* 80345CD0 00342C10  99 28 00 03 */	stb r9, 3(r8)
/* 80345CD4 00342C14  99 4D 98 91 */	stb r10, mTestChangeColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345CD8 00342C18  90 FE 00 00 */	stw r7, 0(r30)
/* 80345CDC 00342C1C  90 DE 00 18 */	stw r6, 0x18(r30)
/* 80345CE0 00342C20  90 BE 00 14 */	stw r5, 0x14(r30)
/* 80345CE4 00342C24  99 7E 00 CA */	stb r11, 0xca(r30)
/* 80345CE8 00342C28  90 9E 00 00 */	stw r4, 0(r30)
/* 80345CEC 00342C2C  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80345CF0 00342C30  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80345CF4 00342C34  C0 0D 85 64 */	lfs f0, m2pScale__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345CF8 00342C38  D0 1E 00 CC */	stfs f0, 0xcc(r30)
/* 80345CFC 00342C3C  C0 0D 85 68 */	lfs f0, m2pOffsetY__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345D00 00342C40  FC 00 00 50 */	fneg f0, f0
/* 80345D04 00342C44  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
.L_80345D08:
/* 80345D08 00342C48  7F 83 E3 78 */	mr r3, r28
/* 80345D0C 00342C4C  7F C4 F3 78 */	mr r4, r30
/* 80345D10 00342C50  7F A5 EB 78 */	mr r5, r29
/* 80345D14 00342C54  48 10 C0 61 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80345D18 00342C58  93 DC 02 20 */	stw r30, 0x220(r28)
/* 80345D1C 00342C5C  38 60 00 D4 */	li r3, 0xd4
/* 80345D20 00342C60  4B CD E1 85 */	bl __nw__FUl
/* 80345D24 00342C64  7C 7E 1B 79 */	or. r30, r3, r3
/* 80345D28 00342C68  41 82 01 04 */	beq .L_80345E2C
/* 80345D2C 00342C6C  38 9F 00 0C */	addi r4, r31, 0xc
/* 80345D30 00342C70  48 00 34 99 */	bl __ct__Q28Morimura9TTestBaseFPc
/* 80345D34 00342C74  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 80345D38 00342C78  39 00 00 00 */	li r8, 0
/* 80345D3C 00342C7C  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 80345D40 00342C80  38 00 FF FF */	li r0, -1
/* 80345D44 00342C84  90 9E 00 00 */	stw r4, 0(r30)
/* 80345D48 00342C88  38 A4 00 10 */	addi r5, r4, 0x10
/* 80345D4C 00342C8C  3C 60 80 04 */	lis r3, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345D50 00342C90  38 C0 00 04 */	li r6, 4
/* 80345D54 00342C94  90 BE 00 18 */	stw r5, 0x18(r30)
/* 80345D58 00342C98  38 83 9B A0 */	addi r4, r3, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 80345D5C 00342C9C  38 7E 00 96 */	addi r3, r30, 0x96
/* 80345D60 00342CA0  38 A0 00 00 */	li r5, 0
/* 80345D64 00342CA4  91 1E 00 80 */	stw r8, 0x80(r30)
/* 80345D68 00342CA8  38 E0 00 04 */	li r7, 4
/* 80345D6C 00342CAC  91 1E 00 84 */	stw r8, 0x84(r30)
/* 80345D70 00342CB0  91 1E 00 88 */	stw r8, 0x88(r30)
/* 80345D74 00342CB4  91 1E 00 8C */	stw r8, 0x8c(r30)
/* 80345D78 00342CB8  90 1E 00 90 */	stw r0, 0x90(r30)
/* 80345D7C 00342CBC  99 1E 00 94 */	stb r8, 0x94(r30)
/* 80345D80 00342CC0  4B D7 BA BD */	bl __construct_array
/* 80345D84 00342CC4  3C 80 80 04 */	lis r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
/* 80345D88 00342CC8  38 7E 00 A6 */	addi r3, r30, 0xa6
/* 80345D8C 00342CCC  38 84 9B A0 */	addi r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
/* 80345D90 00342CD0  38 A0 00 00 */	li r5, 0
/* 80345D94 00342CD4  38 C0 00 04 */	li r6, 4
/* 80345D98 00342CD8  38 E0 00 04 */	li r7, 4
/* 80345D9C 00342CDC  4B D7 BA A1 */	bl __construct_array
/* 80345DA0 00342CE0  39 60 00 01 */	li r11, 1
/* 80345DA4 00342CE4  3C 60 80 4E */	lis r3, __vt__Q28Morimura18TChallengeEndCount@ha
/* 80345DA8 00342CE8  99 7E 00 C9 */	stb r11, 0xc9(r30)
/* 80345DAC 00342CEC  39 40 00 00 */	li r10, 0
/* 80345DB0 00342CF0  38 E3 B1 EC */	addi r7, r3, __vt__Q28Morimura18TChallengeEndCount@l
/* 80345DB4 00342CF4  3C 60 80 4E */	lis r3, __vt__Q28Morimura20TChallengeEndCount2p@ha
/* 80345DB8 00342CF8  99 5E 00 CA */	stb r10, 0xca(r30)
/* 80345DBC 00342CFC  38 83 B0 F4 */	addi r4, r3, __vt__Q28Morimura20TChallengeEndCount2p@l
/* 80345DC0 00342D00  C0 22 FE 98 */	lfs f1, lbl_8051E1F8@sda21(r2)
/* 80345DC4 00342D04  39 20 00 FF */	li r9, 0xff
/* 80345DC8 00342D08  C0 02 FE 9C */	lfs f0, lbl_8051E1FC@sda21(r2)
/* 80345DCC 00342D0C  39 0D 85 6C */	addi r8, r13, mColor__Q28Morimura12TDayEndCount@sda21
/* 80345DD0 00342D10  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 80345DD4 00342D14  38 C7 00 10 */	addi r6, r7, 0x10
/* 80345DD8 00342D18  38 BF 00 40 */	addi r5, r31, 0x40
/* 80345DDC 00342D1C  38 64 00 10 */	addi r3, r4, 0x10
/* 80345DE0 00342D20  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 80345DE4 00342D24  38 1F 00 68 */	addi r0, r31, 0x68
/* 80345DE8 00342D28  99 4D 85 6C */	stb r10, mColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345DEC 00342D2C  99 28 00 01 */	stb r9, 1(r8)
/* 80345DF0 00342D30  99 48 00 02 */	stb r10, 2(r8)
/* 80345DF4 00342D34  99 28 00 03 */	stb r9, 3(r8)
/* 80345DF8 00342D38  99 4D 98 91 */	stb r10, mTestChangeColor__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345DFC 00342D3C  90 FE 00 00 */	stw r7, 0(r30)
/* 80345E00 00342D40  90 DE 00 18 */	stw r6, 0x18(r30)
/* 80345E04 00342D44  90 BE 00 14 */	stw r5, 0x14(r30)
/* 80345E08 00342D48  99 7E 00 CA */	stb r11, 0xca(r30)
/* 80345E0C 00342D4C  90 9E 00 00 */	stw r4, 0(r30)
/* 80345E10 00342D50  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80345E14 00342D54  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80345E18 00342D58  C0 0D 85 64 */	lfs f0, m2pScale__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345E1C 00342D5C  D0 1E 00 CC */	stfs f0, 0xcc(r30)
/* 80345E20 00342D60  C0 0D 85 68 */	lfs f0, m2pOffsetY__Q28Morimura12TDayEndCount@sda21(r13)
/* 80345E24 00342D64  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 80345E28 00342D68  99 5E 00 C9 */	stb r10, 0xc9(r30)
.L_80345E2C:
/* 80345E2C 00342D6C  93 DC 02 24 */	stw r30, 0x224(r28)
/* 80345E30 00342D70  7F 83 E3 78 */	mr r3, r28
/* 80345E34 00342D74  7F A5 EB 78 */	mr r5, r29
/* 80345E38 00342D78  80 9C 02 24 */	lwz r4, 0x224(r28)
/* 80345E3C 00342D7C  48 10 BF 39 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
.L_80345E40:
/* 80345E40 00342D80  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80345E44 00342D84  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80345E48 00342D88  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80345E4C 00342D8C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80345E50 00342D90  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80345E54 00342D94  7C 08 03 A6 */	mtlr r0
/* 80345E58 00342D98  38 21 00 20 */	addi r1, r1, 0x20
/* 80345E5C 00342D9C  4E 80 00 20 */	blr 
.endfn doCreateObj__Q28Morimura15TCountDownSceneFP10JKRArchive

.fn doStart__Q28Morimura15TCountDownSceneFPQ26Screen13StartSceneArg, global
/* 80345E60 00342DA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80345E64 00342DA4  7C 08 02 A6 */	mflr r0
/* 80345E68 00342DA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80345E6C 00342DAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80345E70 00342DB0  7C 9F 23 78 */	mr r31, r4
/* 80345E74 00342DB4  93 C1 00 08 */	stw r30, 8(r1)
/* 80345E78 00342DB8  7C 7E 1B 78 */	mr r30, r3
/* 80345E7C 00342DBC  48 10 BD ED */	bl doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
/* 80345E80 00342DC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80345E84 00342DC4  41 82 00 28 */	beq .L_80345EAC
/* 80345E88 00342DC8  80 1E 02 24 */	lwz r0, 0x224(r30)
/* 80345E8C 00342DCC  28 00 00 00 */	cmplwi r0, 0
/* 80345E90 00342DD0  41 82 00 1C */	beq .L_80345EAC
/* 80345E94 00342DD4  7C 03 03 78 */	mr r3, r0
/* 80345E98 00342DD8  7F E4 FB 78 */	mr r4, r31
/* 80345E9C 00342DDC  81 83 00 00 */	lwz r12, 0(r3)
/* 80345EA0 00342DE0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80345EA4 00342DE4  7D 89 03 A6 */	mtctr r12
/* 80345EA8 00342DE8  4E 80 04 21 */	bctrl 
.L_80345EAC:
/* 80345EAC 00342DEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80345EB0 00342DF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80345EB4 00342DF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80345EB8 00342DF8  7C 08 03 A6 */	mtlr r0
/* 80345EBC 00342DFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80345EC0 00342E00  4E 80 00 20 */	blr 
.endfn doStart__Q28Morimura15TCountDownSceneFPQ26Screen13StartSceneArg

.fn getResName__Q28Morimura15TCountDownSceneCFv, weak
/* 80345EC4 00342E04  3C 60 80 49 */	lis r3, lbl_80490264@ha
/* 80345EC8 00342E08  38 63 02 64 */	addi r3, r3, lbl_80490264@l
/* 80345ECC 00342E0C  4E 80 00 20 */	blr 
.endfn getResName__Q28Morimura15TCountDownSceneCFv

.fn getSceneType__Q28Morimura15TCountDownSceneFv, weak
/* 80345ED0 00342E10  38 60 27 2D */	li r3, 0x272d
/* 80345ED4 00342E14  4E 80 00 20 */	blr 
.endfn getSceneType__Q28Morimura15TCountDownSceneFv

.fn getOwnerID__Q28Morimura15TCountDownSceneFv, weak
/* 80345ED8 00342E18  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80345EDC 00342E1C  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 80345EE0 00342E20  4E 80 00 20 */	blr 
.endfn getOwnerID__Q28Morimura15TCountDownSceneFv

.fn getMemberID__Q28Morimura15TCountDownSceneFv, weak
/* 80345EE4 00342E24  3C 80 4E 44 */	lis r4, 0x4E444344@ha
/* 80345EE8 00342E28  3C 60 44 41 */	lis r3, 0x44415945@ha
/* 80345EEC 00342E2C  38 84 43 44 */	addi r4, r4, 0x4E444344@l
/* 80345EF0 00342E30  38 63 59 45 */	addi r3, r3, 0x44415945@l
/* 80345EF4 00342E34  4E 80 00 20 */	blr 
.endfn getMemberID__Q28Morimura15TCountDownSceneFv

.fn doStart__Q28Morimura12TDayEndCountFPCQ26Screen13StartSceneArg, weak
/* 80345EF8 00342E38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80345EFC 00342E3C  7C 08 02 A6 */	mflr r0
/* 80345F00 00342E40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80345F04 00342E44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80345F08 00342E48  7C 7F 1B 78 */	mr r31, r3
/* 80345F0C 00342E4C  48 00 33 41 */	bl doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
/* 80345F10 00342E50  7F E3 FB 78 */	mr r3, r31
/* 80345F14 00342E54  4B FF F0 ED */	bl reset__Q28Morimura12TDayEndCountFv
/* 80345F18 00342E58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80345F1C 00342E5C  38 60 00 01 */	li r3, 1
/* 80345F20 00342E60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80345F24 00342E64  7C 08 03 A6 */	mtlr r0
/* 80345F28 00342E68  38 21 00 10 */	addi r1, r1, 0x10
/* 80345F2C 00342E6C  4E 80 00 20 */	blr 
.endfn doStart__Q28Morimura12TDayEndCountFPCQ26Screen13StartSceneArg

.fn getDispMemberBase__Q28Morimura12TDayEndCountFv, weak
/* 80345F30 00342E70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80345F34 00342E74  7C 08 02 A6 */	mflr r0
/* 80345F38 00342E78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80345F3C 00342E7C  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80345F40 00342E80  28 00 00 00 */	cmplwi r0, 0
/* 80345F44 00342E84  41 82 00 0C */	beq .L_80345F50
/* 80345F48 00342E88  80 63 00 7C */	lwz r3, 0x7c(r3)
/* 80345F4C 00342E8C  48 00 00 08 */	b .L_80345F54
.L_80345F50:
/* 80345F50 00342E90  48 10 E0 59 */	bl getDispMember__Q26Screen7ObjBaseFv
.L_80345F54:
/* 80345F54 00342E94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80345F58 00342E98  7C 08 03 A6 */	mtlr r0
/* 80345F5C 00342E9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80345F60 00342EA0  4E 80 00 20 */	blr 
.endfn getDispMemberBase__Q28Morimura12TDayEndCountFv

.fn doUpdateFadeinFinish__Q28Morimura9TTestBaseFv, weak
/* 80345F64 00342EA4  38 00 00 01 */	li r0, 1
/* 80345F68 00342EA8  98 03 00 45 */	stb r0, 0x45(r3)
/* 80345F6C 00342EAC  4E 80 00 20 */	blr 
.endfn doUpdateFadeinFinish__Q28Morimura9TTestBaseFv

.fn __dt__Q28Morimura20TChallengeEndCount2pFv, weak
/* 80345F70 00342EB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80345F74 00342EB4  7C 08 02 A6 */	mflr r0
/* 80345F78 00342EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80345F7C 00342EBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80345F80 00342EC0  7C 9F 23 78 */	mr r31, r4
/* 80345F84 00342EC4  93 C1 00 08 */	stw r30, 8(r1)
/* 80345F88 00342EC8  7C 7E 1B 79 */	or. r30, r3, r3
/* 80345F8C 00342ECC  41 82 00 BC */	beq .L_80346048
/* 80345F90 00342ED0  3C 80 80 4E */	lis r4, __vt__Q28Morimura20TChallengeEndCount2p@ha
/* 80345F94 00342ED4  38 84 B0 F4 */	addi r4, r4, __vt__Q28Morimura20TChallengeEndCount2p@l
/* 80345F98 00342ED8  90 9E 00 00 */	stw r4, 0(r30)
/* 80345F9C 00342EDC  38 04 00 10 */	addi r0, r4, 0x10
/* 80345FA0 00342EE0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80345FA4 00342EE4  41 82 00 94 */	beq .L_80346038
/* 80345FA8 00342EE8  3C 80 80 4E */	lis r4, __vt__Q28Morimura18TChallengeEndCount@ha
/* 80345FAC 00342EEC  38 84 B1 EC */	addi r4, r4, __vt__Q28Morimura18TChallengeEndCount@l
/* 80345FB0 00342EF0  90 9E 00 00 */	stw r4, 0(r30)
/* 80345FB4 00342EF4  38 04 00 10 */	addi r0, r4, 0x10
/* 80345FB8 00342EF8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80345FBC 00342EFC  41 82 00 7C */	beq .L_80346038
/* 80345FC0 00342F00  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 80345FC4 00342F04  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 80345FC8 00342F08  90 9E 00 00 */	stw r4, 0(r30)
/* 80345FCC 00342F0C  38 04 00 10 */	addi r0, r4, 0x10
/* 80345FD0 00342F10  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80345FD4 00342F14  41 82 00 64 */	beq .L_80346038
/* 80345FD8 00342F18  3C 80 80 4E */	lis r4, __vt__Q28Morimura9TTestBase@ha
/* 80345FDC 00342F1C  38 84 B8 F8 */	addi r4, r4, __vt__Q28Morimura9TTestBase@l
/* 80345FE0 00342F20  90 9E 00 00 */	stw r4, 0(r30)
/* 80345FE4 00342F24  38 04 00 10 */	addi r0, r4, 0x10
/* 80345FE8 00342F28  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80345FEC 00342F2C  41 82 00 4C */	beq .L_80346038
/* 80345FF0 00342F30  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 80345FF4 00342F34  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 80345FF8 00342F38  90 9E 00 00 */	stw r4, 0(r30)
/* 80345FFC 00342F3C  38 04 00 10 */	addi r0, r4, 0x10
/* 80346000 00342F40  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80346004 00342F44  41 82 00 34 */	beq .L_80346038
/* 80346008 00342F48  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8034600C 00342F4C  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80346010 00342F50  90 9E 00 00 */	stw r4, 0(r30)
/* 80346014 00342F54  38 04 00 10 */	addi r0, r4, 0x10
/* 80346018 00342F58  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8034601C 00342F5C  48 0C B5 B5 */	bl del__5CNodeFv
/* 80346020 00342F60  38 7E 00 18 */	addi r3, r30, 0x18
/* 80346024 00342F64  38 80 00 00 */	li r4, 0
/* 80346028 00342F68  4B CD 70 0D */	bl __dt__11JKRDisposerFv
/* 8034602C 00342F6C  7F C3 F3 78 */	mr r3, r30
/* 80346030 00342F70  38 80 00 00 */	li r4, 0
/* 80346034 00342F74  48 0C B5 55 */	bl __dt__5CNodeFv
.L_80346038:
/* 80346038 00342F78  7F E0 07 35 */	extsh. r0, r31
/* 8034603C 00342F7C  40 81 00 0C */	ble .L_80346048
/* 80346040 00342F80  7F C3 F3 78 */	mr r3, r30
/* 80346044 00342F84  4B CD E0 71 */	bl __dl__FPv
.L_80346048:
/* 80346048 00342F88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034604C 00342F8C  7F C3 F3 78 */	mr r3, r30
/* 80346050 00342F90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80346054 00342F94  83 C1 00 08 */	lwz r30, 8(r1)
/* 80346058 00342F98  7C 08 03 A6 */	mtlr r0
/* 8034605C 00342F9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80346060 00342FA0  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura20TChallengeEndCount2pFv

.fn __dt__Q28Morimura20TChallengeEndCount1pFv, weak
/* 80346064 00342FA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80346068 00342FA8  7C 08 02 A6 */	mflr r0
/* 8034606C 00342FAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80346070 00342FB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80346074 00342FB4  7C 9F 23 78 */	mr r31, r4
/* 80346078 00342FB8  93 C1 00 08 */	stw r30, 8(r1)
/* 8034607C 00342FBC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80346080 00342FC0  41 82 00 BC */	beq .L_8034613C
/* 80346084 00342FC4  3C 80 80 4E */	lis r4, __vt__Q28Morimura20TChallengeEndCount1p@ha
/* 80346088 00342FC8  38 84 B1 70 */	addi r4, r4, __vt__Q28Morimura20TChallengeEndCount1p@l
/* 8034608C 00342FCC  90 9E 00 00 */	stw r4, 0(r30)
/* 80346090 00342FD0  38 04 00 10 */	addi r0, r4, 0x10
/* 80346094 00342FD4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80346098 00342FD8  41 82 00 94 */	beq .L_8034612C
/* 8034609C 00342FDC  3C 80 80 4E */	lis r4, __vt__Q28Morimura18TChallengeEndCount@ha
/* 803460A0 00342FE0  38 84 B1 EC */	addi r4, r4, __vt__Q28Morimura18TChallengeEndCount@l
/* 803460A4 00342FE4  90 9E 00 00 */	stw r4, 0(r30)
/* 803460A8 00342FE8  38 04 00 10 */	addi r0, r4, 0x10
/* 803460AC 00342FEC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803460B0 00342FF0  41 82 00 7C */	beq .L_8034612C
/* 803460B4 00342FF4  3C 80 80 4E */	lis r4, __vt__Q28Morimura12TDayEndCount@ha
/* 803460B8 00342FF8  38 84 B2 68 */	addi r4, r4, __vt__Q28Morimura12TDayEndCount@l
/* 803460BC 00342FFC  90 9E 00 00 */	stw r4, 0(r30)
/* 803460C0 00343000  38 04 00 10 */	addi r0, r4, 0x10
/* 803460C4 00343004  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803460C8 00343008  41 82 00 64 */	beq .L_8034612C
/* 803460CC 0034300C  3C 80 80 4E */	lis r4, __vt__Q28Morimura9TTestBase@ha
/* 803460D0 00343010  38 84 B8 F8 */	addi r4, r4, __vt__Q28Morimura9TTestBase@l
/* 803460D4 00343014  90 9E 00 00 */	stw r4, 0(r30)
/* 803460D8 00343018  38 04 00 10 */	addi r0, r4, 0x10
/* 803460DC 0034301C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803460E0 00343020  41 82 00 4C */	beq .L_8034612C
/* 803460E4 00343024  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 803460E8 00343028  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 803460EC 0034302C  90 9E 00 00 */	stw r4, 0(r30)
/* 803460F0 00343030  38 04 00 10 */	addi r0, r4, 0x10
/* 803460F4 00343034  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803460F8 00343038  41 82 00 34 */	beq .L_8034612C
/* 803460FC 0034303C  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 80346100 00343040  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80346104 00343044  90 9E 00 00 */	stw r4, 0(r30)
/* 80346108 00343048  38 04 00 10 */	addi r0, r4, 0x10
/* 8034610C 0034304C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80346110 00343050  48 0C B4 C1 */	bl del__5CNodeFv
/* 80346114 00343054  38 7E 00 18 */	addi r3, r30, 0x18
/* 80346118 00343058  38 80 00 00 */	li r4, 0
/* 8034611C 0034305C  4B CD 6F 19 */	bl __dt__11JKRDisposerFv
/* 80346120 00343060  7F C3 F3 78 */	mr r3, r30
/* 80346124 00343064  38 80 00 00 */	li r4, 0
/* 80346128 00343068  48 0C B4 61 */	bl __dt__5CNodeFv
.L_8034612C:
/* 8034612C 0034306C  7F E0 07 35 */	extsh. r0, r31
/* 80346130 00343070  40 81 00 0C */	ble .L_8034613C
/* 80346134 00343074  7F C3 F3 78 */	mr r3, r30
/* 80346138 00343078  4B CD DF 7D */	bl __dl__FPv
.L_8034613C:
/* 8034613C 0034307C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80346140 00343080  7F C3 F3 78 */	mr r3, r30
/* 80346144 00343084  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80346148 00343088  83 C1 00 08 */	lwz r30, 8(r1)
/* 8034614C 0034308C  7C 08 03 A6 */	mtlr r0
/* 80346150 00343090  38 21 00 10 */	addi r1, r1, 0x10
/* 80346154 00343094  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura20TChallengeEndCount1pFv

.fn "@24@__dt__Q28Morimura12TDayEndCountFv", weak
/* 80346158 00343098  38 63 FF E8 */	addi r3, r3, -24
/* 8034615C 0034309C  4B FF F3 BC */	b __dt__Q28Morimura12TDayEndCountFv
.endfn "@24@__dt__Q28Morimura12TDayEndCountFv"

.fn "@24@__dt__Q28Morimura18TChallengeEndCountFv", weak
/* 80346160 003430A0  38 63 FF E8 */	addi r3, r3, -24
/* 80346164 003430A4  4B FF F5 F4 */	b __dt__Q28Morimura18TChallengeEndCountFv
.endfn "@24@__dt__Q28Morimura18TChallengeEndCountFv"

.fn "@24@__dt__Q28Morimura20TChallengeEndCount1pFv", weak
/* 80346168 003430A8  38 63 FF E8 */	addi r3, r3, -24
/* 8034616C 003430AC  4B FF FE F8 */	b __dt__Q28Morimura20TChallengeEndCount1pFv
.endfn "@24@__dt__Q28Morimura20TChallengeEndCount1pFv"

.fn "@24@__dt__Q28Morimura20TChallengeEndCount2pFv", weak
/* 80346170 003430B0  38 63 FF E8 */	addi r3, r3, -24
/* 80346174 003430B4  4B FF FD FC */	b __dt__Q28Morimura20TChallengeEndCount2pFv
.endfn "@24@__dt__Q28Morimura20TChallengeEndCount2pFv"
