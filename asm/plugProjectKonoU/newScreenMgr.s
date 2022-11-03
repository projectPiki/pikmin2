.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_804985B8
lbl_804985B8:
	.4byte 0x7265735F
	.4byte 0x70696B6D
	.4byte 0x696E646F
	.4byte 0x776E2E73
	.4byte 0x7A730000
.global lbl_804985CC
lbl_804985CC:
	.4byte 0x50696B6D
	.4byte 0x696E446F
	.4byte 0x776E0000
.global lbl_804985D8
lbl_804985D8:
	.4byte 0x7265735F
	.4byte 0x70726573
	.4byte 0x6964656E
	.4byte 0x74646F77
	.4byte 0x6E2E737A
	.4byte 0x73000000
.global lbl_804985F0
lbl_804985F0:
	.4byte 0x50726573
	.4byte 0x6964656E
	.4byte 0x74446F77
	.4byte 0x6E000000
.global lbl_80498600
lbl_80498600:
	.4byte 0x67616D65
	.4byte 0x6F766572
	.4byte 0x5F6C6F75
	.4byte 0x69652E73
	.4byte 0x7A730000
.global lbl_80498614
lbl_80498614:
	.4byte 0x4C756A69
	.4byte 0x446F776E
	.4byte 0x00000000
.global lbl_80498620
lbl_80498620:
	.4byte 0x7265735F
	.4byte 0x6F72696D
	.4byte 0x61646F77
	.4byte 0x6E2E737A
	.4byte 0x73000000
.global lbl_80498634
lbl_80498634:
	.4byte 0x4F72696D
	.4byte 0x61446F77
	.4byte 0x6E000000
.global lbl_80498640
lbl_80498640:
	.4byte 0x7265735F
	.4byte 0x67616D65
	.4byte 0x6F766572
	.4byte 0x2E737A73
	.4byte 0x00000000
.global lbl_80498654
lbl_80498654:
	.4byte 0x47616D65
	.4byte 0x4F766572
	.4byte 0x00000000
.global lbl_80498660
lbl_80498660:
	.4byte 0x7265735F
	.4byte 0x67726F75
	.4byte 0x6E642E73
	.4byte 0x7A730000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804EA878
lbl_804EA878:
	.4byte .L_8040020C
	.4byte .L_8040032C
	.4byte .L_804004D8
	.4byte .L_8040030C
	.4byte .L_804003F8
	.4byte .L_80400418
	.4byte .L_80400438
	.4byte .L_80400458
	.4byte .L_80400478
	.4byte .L_804003D8
	.4byte .L_8040026C
	.4byte .L_8040028C
	.4byte .L_8040024C
	.4byte .L_8040022C
	.4byte .L_804002AC
	.4byte .L_8040034C
	.4byte .L_80400370
	.4byte .L_80400394
	.4byte .L_804002CC
	.4byte .L_804002EC
	.4byte .L_804003B8
	.4byte .L_80400498
	.4byte .L_804004B8
	.4byte .L_804004F8
	.4byte .L_80400518
	.4byte .L_80400538
	.4byte .L_80400558
	.4byte .L_80400578
.global lbl_804EA8E8
lbl_804EA8E8:
	.4byte .L_804005DC
	.4byte .L_8040061C
	.4byte .L_80400658
	.4byte .L_804006A0
	.4byte .L_804006E8
	.4byte .L_80400730
	.4byte .L_80400778
	.4byte .L_804007C0
	.4byte .L_804007E0
	.4byte .L_804008BC
	.4byte .L_80400800
	.4byte .L_80400840
	.4byte .L_8040087C
.global __vt__Q29newScreen3Mgr
__vt__Q29newScreen3Mgr:
	.4byte 0
	.4byte 0
	.4byte __dt__Q29newScreen3MgrFv
	.4byte setScene__Q26Screen3MgrFRQ26Screen11SetSceneArg
	.4byte startScene__Q26Screen3MgrFPQ26Screen13StartSceneArg
	.4byte endScene__Q26Screen3MgrFPQ26Screen11EndSceneArg
	.4byte reset__Q29newScreen3MgrFv
	.4byte setColorBG__Q29newScreen3MgrFRQ28JUtility6TColor
	.4byte setBGMode__Q29newScreen3MgrFi
	.4byte doGetSceneBase__Q29newScreen3MgrFl
	.4byte drawBG__Q29newScreen3MgrFR8Graphics
	.4byte drawWipe__Q26Screen3MgrFR8Graphics
.global __vt__Q26Screen7MgrBase
__vt__Q26Screen7MgrBase:
	.4byte 0
	.4byte 0
	.4byte __dt__Q26Screen7MgrBaseFv
	.4byte 0
	.4byte 0
	.4byte 0
.global __vt__Q28Morimura16TPikminDownScene
__vt__Q28Morimura16TPikminDownScene:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura16TPikminDownSceneFv
	.4byte getOwnerID__Q28Morimura16TPikminDownSceneFv
	.4byte getMemberID__Q28Morimura16TPikminDownSceneFv
	.4byte isUseBackupSceneInfo__Q28Morimura16TPikminDownSceneFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura16TPikminDownSceneCFv
	.4byte doCreateObj__Q28Morimura16TPikminDownSceneFP10JKRArchive
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
.global __vt__Q28Morimura19TPresidentDownScene
__vt__Q28Morimura19TPresidentDownScene:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura19TPresidentDownSceneFv
	.4byte getOwnerID__Q28Morimura19TPresidentDownSceneFv
	.4byte getMemberID__Q28Morimura19TPresidentDownSceneFv
	.4byte isUseBackupSceneInfo__Q28Morimura18TGameOverSceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura19TPresidentDownSceneCFv
	.4byte doCreateObj__Q28Morimura19TPresidentDownSceneFP10JKRArchive
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
.global __vt__Q28Morimura14TLujiDownScene
__vt__Q28Morimura14TLujiDownScene:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura14TLujiDownSceneFv
	.4byte getOwnerID__Q28Morimura14TLujiDownSceneFv
	.4byte getMemberID__Q28Morimura14TLujiDownSceneFv
	.4byte isUseBackupSceneInfo__Q28Morimura18TGameOverSceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura14TLujiDownSceneCFv
	.4byte doCreateObj__Q28Morimura14TLujiDownSceneFP10JKRArchive
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
.global __vt__Q28Morimura15TOrimaDownScene
__vt__Q28Morimura15TOrimaDownScene:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura15TOrimaDownSceneFv
	.4byte getOwnerID__Q28Morimura15TOrimaDownSceneFv
	.4byte getMemberID__Q28Morimura15TOrimaDownSceneFv
	.4byte isUseBackupSceneInfo__Q28Morimura18TGameOverSceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura15TOrimaDownSceneCFv
	.4byte doCreateObj__Q28Morimura15TOrimaDownSceneFP10JKRArchive
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
.global __vt__Q28Morimura14TGameOverScene
__vt__Q28Morimura14TGameOverScene:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura14TGameOverSceneFv
	.4byte getOwnerID__Q28Morimura14TGameOverSceneFv
	.4byte getMemberID__Q28Morimura14TGameOverSceneFv
	.4byte isUseBackupSceneInfo__Q28Morimura14TGameOverSceneFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura14TGameOverSceneCFv
	.4byte doCreateObj__Q28Morimura14TGameOverSceneFP10JKRArchive
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
.global __vt__Q28Morimura18TGameOverSceneBase
__vt__Q28Morimura18TGameOverSceneBase:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte isUseBackupSceneInfo__Q28Morimura18TGameOverSceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte 0
	.4byte 0
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
.global __vt__Q28Morimura13THurryUpScene
__vt__Q28Morimura13THurryUpScene:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura13THurryUpSceneFv
	.4byte getOwnerID__Q28Morimura13THurryUpSceneFv
	.4byte getMemberID__Q28Morimura13THurryUpSceneFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura13THurryUpSceneCFv
	.4byte doCreateObj__Q28Morimura13THurryUpSceneFP10JKRArchive
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
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80520048
lbl_80520048:
	.4byte 0x00000000
.global lbl_8052004C
lbl_8052004C:
	.float 0.5
.global lbl_80520050
lbl_80520050:
	.4byte 0x43300000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global createScene_Ogawa__9newScreenFl
createScene_Ogawa__9newScreenFl:
/* 804001D8 003FD118  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804001DC 003FD11C  7C 08 02 A6 */	mflr r0
/* 804001E0 003FD120  90 01 00 14 */	stw r0, 0x14(r1)
/* 804001E4 003FD124  38 03 D8 F0 */	addi r0, r3, -10000
/* 804001E8 003FD128  28 00 00 1B */	cmplwi r0, 0x1b
/* 804001EC 003FD12C  38 60 00 00 */	li r3, 0
/* 804001F0 003FD130  41 81 03 A4 */	bgt .L_80400594
/* 804001F4 003FD134  3C 80 80 4F */	lis r4, lbl_804EA878@ha
/* 804001F8 003FD138  54 00 10 3A */	slwi r0, r0, 2
/* 804001FC 003FD13C  38 84 A8 78 */	addi r4, r4, lbl_804EA878@l
/* 80400200 003FD140  7C 04 00 2E */	lwzx r0, r4, r0
/* 80400204 003FD144  7C 09 03 A6 */	mtctr r0
/* 80400208 003FD148  4E 80 04 20 */	bctr 
.L_8040020C:
/* 8040020C 003FD14C  38 60 02 28 */	li r3, 0x228
/* 80400210 003FD150  4B C2 3C 95 */	bl __nw__FUl
/* 80400214 003FD154  7C 60 1B 79 */	or. r0, r3, r3
/* 80400218 003FD158  41 82 00 0C */	beq .L_80400224
/* 8040021C 003FD15C  4B F0 D7 F1 */	bl __ct__Q32og9newScreen6GroundFv
/* 80400220 003FD160  7C 60 1B 78 */	mr r0, r3
.L_80400224:
/* 80400224 003FD164  7C 03 03 78 */	mr r3, r0
/* 80400228 003FD168  48 00 03 6C */	b .L_80400594
.L_8040022C:
/* 8040022C 003FD16C  38 60 02 24 */	li r3, 0x224
/* 80400230 003FD170  4B C2 3C 75 */	bl __nw__FUl
/* 80400234 003FD174  7C 60 1B 79 */	or. r0, r3, r3
/* 80400238 003FD178  41 82 00 0C */	beq .L_80400244
/* 8040023C 003FD17C  4B F1 29 C1 */	bl __ct__Q32og9newScreen8SMenuMapFv
/* 80400240 003FD180  7C 60 1B 78 */	mr r0, r3
.L_80400244:
/* 80400244 003FD184  7C 03 03 78 */	mr r3, r0
/* 80400248 003FD188  48 00 03 4C */	b .L_80400594
.L_8040024C:
/* 8040024C 003FD18C  38 60 02 24 */	li r3, 0x224
/* 80400250 003FD190  4B C2 3C 55 */	bl __nw__FUl
/* 80400254 003FD194  7C 60 1B 79 */	or. r0, r3, r3
/* 80400258 003FD198  41 82 00 0C */	beq .L_80400264
/* 8040025C 003FD19C  4B F1 3C F1 */	bl __ct__Q32og9newScreen9SMenuItemFv
/* 80400260 003FD1A0  7C 60 1B 78 */	mr r0, r3
.L_80400264:
/* 80400264 003FD1A4  7C 03 03 78 */	mr r3, r0
/* 80400268 003FD1A8  48 00 03 2C */	b .L_80400594
.L_8040026C:
/* 8040026C 003FD1AC  38 60 02 24 */	li r3, 0x224
/* 80400270 003FD1B0  4B C2 3C 35 */	bl __nw__FUl
/* 80400274 003FD1B4  7C 60 1B 79 */	or. r0, r3, r3
/* 80400278 003FD1B8  41 82 00 0C */	beq .L_80400284
/* 8040027C 003FD1BC  4B F1 3E 39 */	bl __ct__Q32og9newScreen10SMenuPauseFv
/* 80400280 003FD1C0  7C 60 1B 78 */	mr r0, r3
.L_80400284:
/* 80400284 003FD1C4  7C 03 03 78 */	mr r3, r0
/* 80400288 003FD1C8  48 00 03 0C */	b .L_80400594
.L_8040028C:
/* 8040028C 003FD1CC  38 60 02 24 */	li r3, 0x224
/* 80400290 003FD1D0  4B C2 3C 15 */	bl __nw__FUl
/* 80400294 003FD1D4  7C 60 1B 79 */	or. r0, r3, r3
/* 80400298 003FD1D8  41 82 00 0C */	beq .L_804002A4
/* 8040029C 003FD1DC  4B F2 32 E9 */	bl __ct__Q32og9newScreen17SMenuPauseDoukutuFv
/* 804002A0 003FD1E0  7C 60 1B 78 */	mr r0, r3
.L_804002A4:
/* 804002A4 003FD1E4  7C 03 03 78 */	mr r3, r0
/* 804002A8 003FD1E8  48 00 02 EC */	b .L_80400594
.L_804002AC:
/* 804002AC 003FD1EC  38 60 02 24 */	li r3, 0x224
/* 804002B0 003FD1F0  4B C2 3B F5 */	bl __nw__FUl
/* 804002B4 003FD1F4  7C 60 1B 79 */	or. r0, r3, r3
/* 804002B8 003FD1F8  41 82 00 0C */	beq .L_804002C4
/* 804002BC 003FD1FC  4B F1 7D 95 */	bl __ct__Q32og9newScreen10CourseNameFv
/* 804002C0 003FD200  7C 60 1B 78 */	mr r0, r3
.L_804002C4:
/* 804002C4 003FD204  7C 03 03 78 */	mr r3, r0
/* 804002C8 003FD208  48 00 02 CC */	b .L_80400594
.L_804002CC:
/* 804002CC 003FD20C  38 60 02 24 */	li r3, 0x224
/* 804002D0 003FD210  4B C2 3B D5 */	bl __nw__FUl
/* 804002D4 003FD214  7C 60 1B 79 */	or. r0, r3, r3
/* 804002D8 003FD218  41 82 00 0C */	beq .L_804002E4
/* 804002DC 003FD21C  4B F1 99 01 */	bl __ct__Q32og9newScreen10KanteiDemoFv
/* 804002E0 003FD220  7C 60 1B 78 */	mr r0, r3
.L_804002E4:
/* 804002E4 003FD224  7C 03 03 78 */	mr r3, r0
/* 804002E8 003FD228  48 00 02 AC */	b .L_80400594
.L_804002EC:
/* 804002EC 003FD22C  38 60 02 20 */	li r3, 0x220
/* 804002F0 003FD230  4B C2 3B B5 */	bl __nw__FUl
/* 804002F4 003FD234  7C 60 1B 79 */	or. r0, r3, r3
/* 804002F8 003FD238  41 82 00 0C */	beq .L_80400304
/* 804002FC 003FD23C  4B F1 9F A5 */	bl __ct__Q32og9newScreen11SpecialItemFv
/* 80400300 003FD240  7C 60 1B 78 */	mr r0, r3
.L_80400304:
/* 80400304 003FD244  7C 03 03 78 */	mr r3, r0
/* 80400308 003FD248  48 00 02 8C */	b .L_80400594
.L_8040030C:
/* 8040030C 003FD24C  38 60 02 20 */	li r3, 0x220
/* 80400310 003FD250  4B C2 3B 95 */	bl __nw__FUl
/* 80400314 003FD254  7C 60 1B 79 */	or. r0, r3, r3
/* 80400318 003FD258  41 82 00 0C */	beq .L_80400324
/* 8040031C 003FD25C  4B F1 BB 45 */	bl __ct__Q32og9newScreen5FloorFv
/* 80400320 003FD260  7C 60 1B 78 */	mr r0, r3
.L_80400324:
/* 80400324 003FD264  7C 03 03 78 */	mr r3, r0
/* 80400328 003FD268  48 00 02 6C */	b .L_80400594
.L_8040032C:
/* 8040032C 003FD26C  38 60 02 20 */	li r3, 0x220
/* 80400330 003FD270  4B C2 3B 75 */	bl __nw__FUl
/* 80400334 003FD274  7C 60 1B 79 */	or. r0, r3, r3
/* 80400338 003FD278  41 82 00 0C */	beq .L_80400344
/* 8040033C 003FD27C  4B F1 C9 55 */	bl __ct__Q32og9newScreen4CaveFv
/* 80400340 003FD280  7C 60 1B 78 */	mr r0, r3
.L_80400344:
/* 80400344 003FD284  7C 03 03 78 */	mr r3, r0
/* 80400348 003FD288  48 00 02 4C */	b .L_80400594
.L_8040034C:
/* 8040034C 003FD28C  38 60 02 24 */	li r3, 0x224
/* 80400350 003FD290  4B C2 3B 55 */	bl __nw__FUl
/* 80400354 003FD294  7C 60 1B 79 */	or. r0, r3, r3
/* 80400358 003FD298  41 82 00 10 */	beq .L_80400368
/* 8040035C 003FD29C  38 80 27 1F */	li r4, 0x271f
/* 80400360 003FD2A0  4B F1 E6 F9 */	bl __ct__Q32og9newScreen7AnaDemoFl
/* 80400364 003FD2A4  7C 60 1B 78 */	mr r0, r3
.L_80400368:
/* 80400368 003FD2A8  7C 03 03 78 */	mr r3, r0
/* 8040036C 003FD2AC  48 00 02 28 */	b .L_80400594
.L_80400370:
/* 80400370 003FD2B0  38 60 02 24 */	li r3, 0x224
/* 80400374 003FD2B4  4B C2 3B 31 */	bl __nw__FUl
/* 80400378 003FD2B8  7C 60 1B 79 */	or. r0, r3, r3
/* 8040037C 003FD2BC  41 82 00 10 */	beq .L_8040038C
/* 80400380 003FD2C0  38 80 27 20 */	li r4, 0x2720
/* 80400384 003FD2C4  4B F1 E6 D5 */	bl __ct__Q32og9newScreen7AnaDemoFl
/* 80400388 003FD2C8  7C 60 1B 78 */	mr r0, r3
.L_8040038C:
/* 8040038C 003FD2CC  7C 03 03 78 */	mr r3, r0
/* 80400390 003FD2D0  48 00 02 04 */	b .L_80400594
.L_80400394:
/* 80400394 003FD2D4  38 60 02 24 */	li r3, 0x224
/* 80400398 003FD2D8  4B C2 3B 0D */	bl __nw__FUl
/* 8040039C 003FD2DC  7C 60 1B 79 */	or. r0, r3, r3
/* 804003A0 003FD2E0  41 82 00 10 */	beq .L_804003B0
/* 804003A4 003FD2E4  38 80 27 21 */	li r4, 0x2721
/* 804003A8 003FD2E8  4B F1 E6 B1 */	bl __ct__Q32og9newScreen7AnaDemoFl
/* 804003AC 003FD2EC  7C 60 1B 78 */	mr r0, r3
.L_804003B0:
/* 804003B0 003FD2F0  7C 03 03 78 */	mr r3, r0
/* 804003B4 003FD2F4  48 00 01 E0 */	b .L_80400594
.L_804003B8:
/* 804003B8 003FD2F8  38 60 02 24 */	li r3, 0x224
/* 804003BC 003FD2FC  4B C2 3A E9 */	bl __nw__FUl
/* 804003C0 003FD300  7C 60 1B 79 */	or. r0, r3, r3
/* 804003C4 003FD304  41 82 00 0C */	beq .L_804003D0
/* 804003C8 003FD308  4B F1 F9 3D */	bl __ct__Q32og9newScreen11Challenge2PFv
/* 804003CC 003FD30C  7C 60 1B 78 */	mr r0, r3
.L_804003D0:
/* 804003D0 003FD310  7C 03 03 78 */	mr r3, r0
/* 804003D4 003FD314  48 00 01 C0 */	b .L_80400594
.L_804003D8:
/* 804003D8 003FD318  38 60 02 20 */	li r3, 0x220
/* 804003DC 003FD31C  4B C2 3A C9 */	bl __nw__FUl
/* 804003E0 003FD320  7C 60 1B 79 */	or. r0, r3, r3
/* 804003E4 003FD324  41 82 00 0C */	beq .L_804003F0
/* 804003E8 003FD328  4B F2 45 0D */	bl __ct__Q32og9newScreen7UfoMenuFv
/* 804003EC 003FD32C  7C 60 1B 78 */	mr r0, r3
.L_804003F0:
/* 804003F0 003FD330  7C 03 03 78 */	mr r3, r0
/* 804003F4 003FD334  48 00 01 A0 */	b .L_80400594
.L_804003F8:
/* 804003F8 003FD338  38 60 02 24 */	li r3, 0x224
/* 804003FC 003FD33C  4B C2 3A A9 */	bl __nw__FUl
/* 80400400 003FD340  7C 60 1B 79 */	or. r0, r3, r3
/* 80400404 003FD344  41 82 00 0C */	beq .L_80400410
/* 80400408 003FD348  4B F2 1B 01 */	bl __ct__Q32og9newScreen7ContenaFv
/* 8040040C 003FD34C  7C 60 1B 78 */	mr r0, r3
.L_80400410:
/* 80400410 003FD350  7C 03 03 78 */	mr r3, r0
/* 80400414 003FD354  48 00 01 80 */	b .L_80400594
.L_80400418:
/* 80400418 003FD358  38 60 02 24 */	li r3, 0x224
/* 8040041C 003FD35C  4B C2 3A 89 */	bl __nw__FUl
/* 80400420 003FD360  7C 60 1B 79 */	or. r0, r3, r3
/* 80400424 003FD364  41 82 00 0C */	beq .L_80400430
/* 80400428 003FD368  4B F2 1A E1 */	bl __ct__Q32og9newScreen7ContenaFv
/* 8040042C 003FD36C  7C 60 1B 78 */	mr r0, r3
.L_80400430:
/* 80400430 003FD370  7C 03 03 78 */	mr r3, r0
/* 80400434 003FD374  48 00 01 60 */	b .L_80400594
.L_80400438:
/* 80400438 003FD378  38 60 02 24 */	li r3, 0x224
/* 8040043C 003FD37C  4B C2 3A 69 */	bl __nw__FUl
/* 80400440 003FD380  7C 60 1B 79 */	or. r0, r3, r3
/* 80400444 003FD384  41 82 00 0C */	beq .L_80400450
/* 80400448 003FD388  4B F2 1A C1 */	bl __ct__Q32og9newScreen7ContenaFv
/* 8040044C 003FD38C  7C 60 1B 78 */	mr r0, r3
.L_80400450:
/* 80400450 003FD390  7C 03 03 78 */	mr r3, r0
/* 80400454 003FD394  48 00 01 40 */	b .L_80400594
.L_80400458:
/* 80400458 003FD398  38 60 02 24 */	li r3, 0x224
/* 8040045C 003FD39C  4B C2 3A 49 */	bl __nw__FUl
/* 80400460 003FD3A0  7C 60 1B 79 */	or. r0, r3, r3
/* 80400464 003FD3A4  41 82 00 0C */	beq .L_80400470
/* 80400468 003FD3A8  4B F2 1A A1 */	bl __ct__Q32og9newScreen7ContenaFv
/* 8040046C 003FD3AC  7C 60 1B 78 */	mr r0, r3
.L_80400470:
/* 80400470 003FD3B0  7C 03 03 78 */	mr r3, r0
/* 80400474 003FD3B4  48 00 01 20 */	b .L_80400594
.L_80400478:
/* 80400478 003FD3B8  38 60 02 24 */	li r3, 0x224
/* 8040047C 003FD3BC  4B C2 3A 29 */	bl __nw__FUl
/* 80400480 003FD3C0  7C 60 1B 79 */	or. r0, r3, r3
/* 80400484 003FD3C4  41 82 00 0C */	beq .L_80400490
/* 80400488 003FD3C8  4B F2 1A 81 */	bl __ct__Q32og9newScreen7ContenaFv
/* 8040048C 003FD3CC  7C 60 1B 78 */	mr r0, r3
.L_80400490:
/* 80400490 003FD3D0  7C 03 03 78 */	mr r3, r0
/* 80400494 003FD3D4  48 00 01 00 */	b .L_80400594
.L_80400498:
/* 80400498 003FD3D8  38 60 02 24 */	li r3, 0x224
/* 8040049C 003FD3DC  4B C2 3A 09 */	bl __nw__FUl
/* 804004A0 003FD3E0  7C 60 1B 79 */	or. r0, r3, r3
/* 804004A4 003FD3E4  41 82 00 0C */	beq .L_804004B0
/* 804004A8 003FD3E8  4B F2 49 0D */	bl __ct__Q32og9newScreen4SaveFv
/* 804004AC 003FD3EC  7C 60 1B 78 */	mr r0, r3
.L_804004B0:
/* 804004B0 003FD3F0  7C 03 03 78 */	mr r3, r0
/* 804004B4 003FD3F4  48 00 00 E0 */	b .L_80400594
.L_804004B8:
/* 804004B8 003FD3F8  38 60 02 20 */	li r3, 0x220
/* 804004BC 003FD3FC  4B C2 39 E9 */	bl __nw__FUl
/* 804004C0 003FD400  7C 60 1B 79 */	or. r0, r3, r3
/* 804004C4 003FD404  41 82 00 0C */	beq .L_804004D0
/* 804004C8 003FD408  4B F2 54 21 */	bl __ct__Q32og9newScreen8FinalMsgFv
/* 804004CC 003FD40C  7C 60 1B 78 */	mr r0, r3
.L_804004D0:
/* 804004D0 003FD410  7C 03 03 78 */	mr r3, r0
/* 804004D4 003FD414  48 00 00 C0 */	b .L_80400594
.L_804004D8:
/* 804004D8 003FD418  38 60 02 20 */	li r3, 0x220
/* 804004DC 003FD41C  4B C2 39 C9 */	bl __nw__FUl
/* 804004E0 003FD420  7C 60 1B 79 */	or. r0, r3, r3
/* 804004E4 003FD424  41 82 00 0C */	beq .L_804004F0
/* 804004E8 003FD428  4B F2 77 75 */	bl __ct__Q32og9newScreen2VsFv
/* 804004EC 003FD42C  7C 60 1B 78 */	mr r0, r3
.L_804004F0:
/* 804004F0 003FD430  7C 03 03 78 */	mr r3, r0
/* 804004F4 003FD434  48 00 00 A0 */	b .L_80400594
.L_804004F8:
/* 804004F8 003FD438  38 60 02 24 */	li r3, 0x224
/* 804004FC 003FD43C  4B C2 39 A9 */	bl __nw__FUl
/* 80400500 003FD440  7C 60 1B 79 */	or. r0, r3, r3
/* 80400504 003FD444  41 82 00 0C */	beq .L_80400510
/* 80400508 003FD448  4B F2 87 29 */	bl __ct__Q32og9newScreen11Challenge1PFv
/* 8040050C 003FD44C  7C 60 1B 78 */	mr r0, r3
.L_80400510:
/* 80400510 003FD450  7C 03 03 78 */	mr r3, r0
/* 80400514 003FD454  48 00 00 80 */	b .L_80400594
.L_80400518:
/* 80400518 003FD458  38 60 02 20 */	li r3, 0x220
/* 8040051C 003FD45C  4B C2 39 89 */	bl __nw__FUl
/* 80400520 003FD460  7C 60 1B 79 */	or. r0, r3, r3
/* 80400524 003FD464  41 82 00 0C */	beq .L_80400530
/* 80400528 003FD468  4B F2 97 D5 */	bl __ct__Q32og9newScreen12SMenuPauseVSFv
/* 8040052C 003FD46C  7C 60 1B 78 */	mr r0, r3
.L_80400530:
/* 80400530 003FD470  7C 03 03 78 */	mr r3, r0
/* 80400534 003FD474  48 00 00 60 */	b .L_80400594
.L_80400538:
/* 80400538 003FD478  38 60 02 20 */	li r3, 0x220
/* 8040053C 003FD47C  4B C2 39 69 */	bl __nw__FUl
/* 80400540 003FD480  7C 60 1B 79 */	or. r0, r3, r3
/* 80400544 003FD484  41 82 00 0C */	beq .L_80400550
/* 80400548 003FD488  4B F2 B5 5D */	bl __ct__Q32og9newScreen19WorldMapInfoWindow0Fv
/* 8040054C 003FD48C  7C 60 1B 78 */	mr r0, r3
.L_80400550:
/* 80400550 003FD490  7C 03 03 78 */	mr r3, r0
/* 80400554 003FD494  48 00 00 40 */	b .L_80400594
.L_80400558:
/* 80400558 003FD498  38 60 02 20 */	li r3, 0x220
/* 8040055C 003FD49C  4B C2 39 49 */	bl __nw__FUl
/* 80400560 003FD4A0  7C 60 1B 79 */	or. r0, r3, r3
/* 80400564 003FD4A4  41 82 00 0C */	beq .L_80400570
/* 80400568 003FD4A8  4B F2 BC A1 */	bl __ct__Q32og9newScreen19WorldMapInfoWindow1Fv
/* 8040056C 003FD4AC  7C 60 1B 78 */	mr r0, r3
.L_80400570:
/* 80400570 003FD4B0  7C 03 03 78 */	mr r3, r0
/* 80400574 003FD4B4  48 00 00 20 */	b .L_80400594
.L_80400578:
/* 80400578 003FD4B8  38 60 02 24 */	li r3, 0x224
/* 8040057C 003FD4BC  4B C2 39 29 */	bl __nw__FUl
/* 80400580 003FD4C0  7C 60 1B 79 */	or. r0, r3, r3
/* 80400584 003FD4C4  41 82 00 0C */	beq .L_80400590
/* 80400588 003FD4C8  4B F2 FF 69 */	bl __ct__Q32og9newScreen9SMenuContFv
/* 8040058C 003FD4CC  7C 60 1B 78 */	mr r0, r3
.L_80400590:
/* 80400590 003FD4D0  7C 03 03 78 */	mr r3, r0
.L_80400594:
/* 80400594 003FD4D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80400598 003FD4D8  7C 08 03 A6 */	mtlr r0
/* 8040059C 003FD4DC  38 21 00 10 */	addi r1, r1, 0x10
/* 804005A0 003FD4E0  4E 80 00 20 */	blr 

.global createScene_Morimura__9newScreenFl
createScene_Morimura__9newScreenFl:
/* 804005A4 003FD4E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804005A8 003FD4E8  7C 08 02 A6 */	mflr r0
/* 804005AC 003FD4EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804005B0 003FD4F0  38 03 D8 D3 */	addi r0, r3, -10029
/* 804005B4 003FD4F4  28 00 00 0C */	cmplwi r0, 0xc
/* 804005B8 003FD4F8  38 60 00 00 */	li r3, 0
/* 804005BC 003FD4FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804005C0 003FD500  41 81 03 18 */	bgt .L_804008D8
/* 804005C4 003FD504  3C 80 80 4F */	lis r4, lbl_804EA8E8@ha
/* 804005C8 003FD508  54 00 10 3A */	slwi r0, r0, 2
/* 804005CC 003FD50C  38 84 A8 E8 */	addi r4, r4, lbl_804EA8E8@l
/* 804005D0 003FD510  7C 04 00 2E */	lwzx r0, r4, r0
/* 804005D4 003FD514  7C 09 03 A6 */	mtctr r0
/* 804005D8 003FD518  4E 80 04 20 */	bctr 
.L_804005DC:
/* 804005DC 003FD51C  38 60 02 28 */	li r3, 0x228
/* 804005E0 003FD520  4B C2 38 C5 */	bl __nw__FUl
/* 804005E4 003FD524  7C 7F 1B 79 */	or. r31, r3, r3
/* 804005E8 003FD528  41 82 00 2C */	beq .L_80400614
/* 804005EC 003FD52C  48 05 11 A5 */	bl __ct__Q26Screen9SceneBaseFv
/* 804005F0 003FD530  3C 80 80 4E */	lis r4, __vt__Q28Morimura9THIOScene@ha
/* 804005F4 003FD534  3C 60 80 4E */	lis r3, __vt__Q28Morimura15TCountDownScene@ha
/* 804005F8 003FD538  38 04 3F 18 */	addi r0, r4, __vt__Q28Morimura9THIOScene@l
/* 804005FC 003FD53C  38 80 00 00 */	li r4, 0
/* 80400600 003FD540  90 1F 00 00 */	stw r0, 0(r31)
/* 80400604 003FD544  38 03 B0 A4 */	addi r0, r3, __vt__Q28Morimura15TCountDownScene@l
/* 80400608 003FD548  90 9F 02 20 */	stw r4, 0x220(r31)
/* 8040060C 003FD54C  90 1F 00 00 */	stw r0, 0(r31)
/* 80400610 003FD550  90 9F 02 24 */	stw r4, 0x224(r31)
.L_80400614:
/* 80400614 003FD554  7F E3 FB 78 */	mr r3, r31
/* 80400618 003FD558  48 00 02 C0 */	b .L_804008D8
.L_8040061C:
/* 8040061C 003FD55C  38 60 02 24 */	li r3, 0x224
/* 80400620 003FD560  4B C2 38 85 */	bl __nw__FUl
/* 80400624 003FD564  7C 7F 1B 79 */	or. r31, r3, r3
/* 80400628 003FD568  41 82 00 28 */	beq .L_80400650
/* 8040062C 003FD56C  48 05 11 65 */	bl __ct__Q26Screen9SceneBaseFv
/* 80400630 003FD570  3C 80 80 4E */	lis r4, __vt__Q28Morimura9THIOScene@ha
/* 80400634 003FD574  3C 60 80 4F */	lis r3, __vt__Q28Morimura13THurryUpScene@ha
/* 80400638 003FD578  38 04 3F 18 */	addi r0, r4, __vt__Q28Morimura9THIOScene@l
/* 8040063C 003FD57C  38 80 00 00 */	li r4, 0
/* 80400640 003FD580  90 1F 00 00 */	stw r0, 0(r31)
/* 80400644 003FD584  38 03 AB 44 */	addi r0, r3, __vt__Q28Morimura13THurryUpScene@l
/* 80400648 003FD588  90 9F 02 20 */	stw r4, 0x220(r31)
/* 8040064C 003FD58C  90 1F 00 00 */	stw r0, 0(r31)
.L_80400650:
/* 80400650 003FD590  7F E3 FB 78 */	mr r3, r31
/* 80400654 003FD594  48 00 02 84 */	b .L_804008D8
.L_80400658:
/* 80400658 003FD598  38 60 02 24 */	li r3, 0x224
/* 8040065C 003FD59C  4B C2 38 49 */	bl __nw__FUl
/* 80400660 003FD5A0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80400664 003FD5A4  41 82 00 34 */	beq .L_80400698
/* 80400668 003FD5A8  48 05 11 29 */	bl __ct__Q26Screen9SceneBaseFv
/* 8040066C 003FD5AC  3C 60 80 4E */	lis r3, __vt__Q28Morimura9THIOScene@ha
/* 80400670 003FD5B0  3C 80 80 4F */	lis r4, __vt__Q28Morimura18TGameOverSceneBase@ha
/* 80400674 003FD5B4  38 03 3F 18 */	addi r0, r3, __vt__Q28Morimura9THIOScene@l
/* 80400678 003FD5B8  3C 60 80 4F */	lis r3, __vt__Q28Morimura14TGameOverScene@ha
/* 8040067C 003FD5BC  90 1F 00 00 */	stw r0, 0(r31)
/* 80400680 003FD5C0  38 A0 00 00 */	li r5, 0
/* 80400684 003FD5C4  38 84 AA F4 */	addi r4, r4, __vt__Q28Morimura18TGameOverSceneBase@l
/* 80400688 003FD5C8  38 03 AA A4 */	addi r0, r3, __vt__Q28Morimura14TGameOverScene@l
/* 8040068C 003FD5CC  90 BF 02 20 */	stw r5, 0x220(r31)
/* 80400690 003FD5D0  90 9F 00 00 */	stw r4, 0(r31)
/* 80400694 003FD5D4  90 1F 00 00 */	stw r0, 0(r31)
.L_80400698:
/* 80400698 003FD5D8  7F E3 FB 78 */	mr r3, r31
/* 8040069C 003FD5DC  48 00 02 3C */	b .L_804008D8
.L_804006A0:
/* 804006A0 003FD5E0  38 60 02 24 */	li r3, 0x224
/* 804006A4 003FD5E4  4B C2 38 01 */	bl __nw__FUl
/* 804006A8 003FD5E8  7C 7F 1B 79 */	or. r31, r3, r3
/* 804006AC 003FD5EC  41 82 00 34 */	beq .L_804006E0
/* 804006B0 003FD5F0  48 05 10 E1 */	bl __ct__Q26Screen9SceneBaseFv
/* 804006B4 003FD5F4  3C 60 80 4E */	lis r3, __vt__Q28Morimura9THIOScene@ha
/* 804006B8 003FD5F8  3C 80 80 4F */	lis r4, __vt__Q28Morimura18TGameOverSceneBase@ha
/* 804006BC 003FD5FC  38 03 3F 18 */	addi r0, r3, __vt__Q28Morimura9THIOScene@l
/* 804006C0 003FD600  3C 60 80 4F */	lis r3, __vt__Q28Morimura15TOrimaDownScene@ha
/* 804006C4 003FD604  90 1F 00 00 */	stw r0, 0(r31)
/* 804006C8 003FD608  38 A0 00 00 */	li r5, 0
/* 804006CC 003FD60C  38 84 AA F4 */	addi r4, r4, __vt__Q28Morimura18TGameOverSceneBase@l
/* 804006D0 003FD610  38 03 AA 54 */	addi r0, r3, __vt__Q28Morimura15TOrimaDownScene@l
/* 804006D4 003FD614  90 BF 02 20 */	stw r5, 0x220(r31)
/* 804006D8 003FD618  90 9F 00 00 */	stw r4, 0(r31)
/* 804006DC 003FD61C  90 1F 00 00 */	stw r0, 0(r31)
.L_804006E0:
/* 804006E0 003FD620  7F E3 FB 78 */	mr r3, r31
/* 804006E4 003FD624  48 00 01 F4 */	b .L_804008D8
.L_804006E8:
/* 804006E8 003FD628  38 60 02 24 */	li r3, 0x224
/* 804006EC 003FD62C  4B C2 37 B9 */	bl __nw__FUl
/* 804006F0 003FD630  7C 7F 1B 79 */	or. r31, r3, r3
/* 804006F4 003FD634  41 82 00 34 */	beq .L_80400728
/* 804006F8 003FD638  48 05 10 99 */	bl __ct__Q26Screen9SceneBaseFv
/* 804006FC 003FD63C  3C 60 80 4E */	lis r3, __vt__Q28Morimura9THIOScene@ha
/* 80400700 003FD640  3C 80 80 4F */	lis r4, __vt__Q28Morimura18TGameOverSceneBase@ha
/* 80400704 003FD644  38 03 3F 18 */	addi r0, r3, __vt__Q28Morimura9THIOScene@l
/* 80400708 003FD648  3C 60 80 4F */	lis r3, __vt__Q28Morimura14TLujiDownScene@ha
/* 8040070C 003FD64C  90 1F 00 00 */	stw r0, 0(r31)
/* 80400710 003FD650  38 A0 00 00 */	li r5, 0
/* 80400714 003FD654  38 84 AA F4 */	addi r4, r4, __vt__Q28Morimura18TGameOverSceneBase@l
/* 80400718 003FD658  38 03 AA 04 */	addi r0, r3, __vt__Q28Morimura14TLujiDownScene@l
/* 8040071C 003FD65C  90 BF 02 20 */	stw r5, 0x220(r31)
/* 80400720 003FD660  90 9F 00 00 */	stw r4, 0(r31)
/* 80400724 003FD664  90 1F 00 00 */	stw r0, 0(r31)
.L_80400728:
/* 80400728 003FD668  7F E3 FB 78 */	mr r3, r31
/* 8040072C 003FD66C  48 00 01 AC */	b .L_804008D8
.L_80400730:
/* 80400730 003FD670  38 60 02 24 */	li r3, 0x224
/* 80400734 003FD674  4B C2 37 71 */	bl __nw__FUl
/* 80400738 003FD678  7C 7F 1B 79 */	or. r31, r3, r3
/* 8040073C 003FD67C  41 82 00 34 */	beq .L_80400770
/* 80400740 003FD680  48 05 10 51 */	bl __ct__Q26Screen9SceneBaseFv
/* 80400744 003FD684  3C 60 80 4E */	lis r3, __vt__Q28Morimura9THIOScene@ha
/* 80400748 003FD688  3C 80 80 4F */	lis r4, __vt__Q28Morimura18TGameOverSceneBase@ha
/* 8040074C 003FD68C  38 03 3F 18 */	addi r0, r3, __vt__Q28Morimura9THIOScene@l
/* 80400750 003FD690  3C 60 80 4F */	lis r3, __vt__Q28Morimura19TPresidentDownScene@ha
/* 80400754 003FD694  90 1F 00 00 */	stw r0, 0(r31)
/* 80400758 003FD698  38 A0 00 00 */	li r5, 0
/* 8040075C 003FD69C  38 84 AA F4 */	addi r4, r4, __vt__Q28Morimura18TGameOverSceneBase@l
/* 80400760 003FD6A0  38 03 A9 B4 */	addi r0, r3, __vt__Q28Morimura19TPresidentDownScene@l
/* 80400764 003FD6A4  90 BF 02 20 */	stw r5, 0x220(r31)
/* 80400768 003FD6A8  90 9F 00 00 */	stw r4, 0(r31)
/* 8040076C 003FD6AC  90 1F 00 00 */	stw r0, 0(r31)
.L_80400770:
/* 80400770 003FD6B0  7F E3 FB 78 */	mr r3, r31
/* 80400774 003FD6B4  48 00 01 64 */	b .L_804008D8
.L_80400778:
/* 80400778 003FD6B8  38 60 02 24 */	li r3, 0x224
/* 8040077C 003FD6BC  4B C2 37 29 */	bl __nw__FUl
/* 80400780 003FD6C0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80400784 003FD6C4  41 82 00 34 */	beq .L_804007B8
/* 80400788 003FD6C8  48 05 10 09 */	bl __ct__Q26Screen9SceneBaseFv
/* 8040078C 003FD6CC  3C 60 80 4E */	lis r3, __vt__Q28Morimura9THIOScene@ha
/* 80400790 003FD6D0  3C 80 80 4F */	lis r4, __vt__Q28Morimura18TGameOverSceneBase@ha
/* 80400794 003FD6D4  38 03 3F 18 */	addi r0, r3, __vt__Q28Morimura9THIOScene@l
/* 80400798 003FD6D8  3C 60 80 4F */	lis r3, __vt__Q28Morimura16TPikminDownScene@ha
/* 8040079C 003FD6DC  90 1F 00 00 */	stw r0, 0(r31)
/* 804007A0 003FD6E0  38 A0 00 00 */	li r5, 0
/* 804007A4 003FD6E4  38 84 AA F4 */	addi r4, r4, __vt__Q28Morimura18TGameOverSceneBase@l
/* 804007A8 003FD6E8  38 03 A9 64 */	addi r0, r3, __vt__Q28Morimura16TPikminDownScene@l
/* 804007AC 003FD6EC  90 BF 02 20 */	stw r5, 0x220(r31)
/* 804007B0 003FD6F0  90 9F 00 00 */	stw r4, 0(r31)
/* 804007B4 003FD6F4  90 1F 00 00 */	stw r0, 0(r31)
.L_804007B8:
/* 804007B8 003FD6F8  7F E3 FB 78 */	mr r3, r31
/* 804007BC 003FD6FC  48 00 01 1C */	b .L_804008D8
.L_804007C0:
/* 804007C0 003FD700  38 60 02 28 */	li r3, 0x228
/* 804007C4 003FD704  4B C2 36 E1 */	bl __nw__FUl
/* 804007C8 003FD708  7C 60 1B 79 */	or. r0, r3, r3
/* 804007CC 003FD70C  41 82 00 0C */	beq .L_804007D8
/* 804007D0 003FD710  4B F7 76 1D */	bl __ct__Q28Morimura12TDEnemySceneFv
/* 804007D4 003FD714  7C 60 1B 78 */	mr r0, r3
.L_804007D8:
/* 804007D8 003FD718  7C 03 03 78 */	mr r3, r0
/* 804007DC 003FD71C  48 00 00 FC */	b .L_804008D8
.L_804007E0:
/* 804007E0 003FD720  38 60 02 28 */	li r3, 0x228
/* 804007E4 003FD724  4B C2 36 C1 */	bl __nw__FUl
/* 804007E8 003FD728  7C 60 1B 79 */	or. r0, r3, r3
/* 804007EC 003FD72C  41 82 00 0C */	beq .L_804007F8
/* 804007F0 003FD730  4B F7 AB BD */	bl __ct__Q28Morimura11TDItemSceneFv
/* 804007F4 003FD734  7C 60 1B 78 */	mr r0, r3
.L_804007F8:
/* 804007F8 003FD738  7C 03 03 78 */	mr r3, r0
/* 804007FC 003FD73C  48 00 00 DC */	b .L_804008D8
.L_80400800:
/* 80400800 003FD740  38 60 02 28 */	li r3, 0x228
/* 80400804 003FD744  4B C2 36 A1 */	bl __nw__FUl
/* 80400808 003FD748  7C 7F 1B 79 */	or. r31, r3, r3
/* 8040080C 003FD74C  41 82 00 2C */	beq .L_80400838
/* 80400810 003FD750  48 05 0F 81 */	bl __ct__Q26Screen9SceneBaseFv
/* 80400814 003FD754  3C 80 80 4E */	lis r4, __vt__Q28Morimura9THIOScene@ha
/* 80400818 003FD758  3C 60 80 4E */	lis r3, __vt__Q28Morimura21TChallengeSelectScene@ha
/* 8040081C 003FD75C  38 04 3F 18 */	addi r0, r4, __vt__Q28Morimura9THIOScene@l
/* 80400820 003FD760  38 80 00 00 */	li r4, 0
/* 80400824 003FD764  90 1F 00 00 */	stw r0, 0(r31)
/* 80400828 003FD768  38 03 50 40 */	addi r0, r3, __vt__Q28Morimura21TChallengeSelectScene@l
/* 8040082C 003FD76C  90 9F 02 20 */	stw r4, 0x220(r31)
/* 80400830 003FD770  90 1F 00 00 */	stw r0, 0(r31)
/* 80400834 003FD774  90 9F 02 24 */	stw r4, 0x224(r31)
.L_80400838:
/* 80400838 003FD778  7F E3 FB 78 */	mr r3, r31
/* 8040083C 003FD77C  48 00 00 9C */	b .L_804008D8
.L_80400840:
/* 80400840 003FD780  38 60 02 24 */	li r3, 0x224
/* 80400844 003FD784  4B C2 36 61 */	bl __nw__FUl
/* 80400848 003FD788  7C 7F 1B 79 */	or. r31, r3, r3
/* 8040084C 003FD78C  41 82 00 28 */	beq .L_80400874
/* 80400850 003FD790  48 05 0F 41 */	bl __ct__Q26Screen9SceneBaseFv
/* 80400854 003FD794  3C 80 80 4E */	lis r4, __vt__Q28Morimura9THIOScene@ha
/* 80400858 003FD798  3C 60 80 4E */	lis r3, __vt__Q28Morimura21TChallengeResultScene@ha
/* 8040085C 003FD79C  38 04 3F 18 */	addi r0, r4, __vt__Q28Morimura9THIOScene@l
/* 80400860 003FD7A0  38 80 00 00 */	li r4, 0
/* 80400864 003FD7A4  90 1F 00 00 */	stw r0, 0(r31)
/* 80400868 003FD7A8  38 03 51 A8 */	addi r0, r3, __vt__Q28Morimura21TChallengeResultScene@l
/* 8040086C 003FD7AC  90 9F 02 20 */	stw r4, 0x220(r31)
/* 80400870 003FD7B0  90 1F 00 00 */	stw r0, 0(r31)
.L_80400874:
/* 80400874 003FD7B4  7F E3 FB 78 */	mr r3, r31
/* 80400878 003FD7B8  48 00 00 60 */	b .L_804008D8
.L_8040087C:
/* 8040087C 003FD7BC  38 60 02 28 */	li r3, 0x228
/* 80400880 003FD7C0  4B C2 36 25 */	bl __nw__FUl
/* 80400884 003FD7C4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80400888 003FD7C8  41 82 00 2C */	beq .L_804008B4
/* 8040088C 003FD7CC  48 05 0F 05 */	bl __ct__Q26Screen9SceneBaseFv
/* 80400890 003FD7D0  3C 80 80 4E */	lis r4, __vt__Q28Morimura9THIOScene@ha
/* 80400894 003FD7D4  3C 60 80 4E */	lis r3, __vt__Q28Morimura14TVsSelectScene@ha
/* 80400898 003FD7D8  38 04 3F 18 */	addi r0, r4, __vt__Q28Morimura9THIOScene@l
/* 8040089C 003FD7DC  38 80 00 00 */	li r4, 0
/* 804008A0 003FD7E0  90 1F 00 00 */	stw r0, 0(r31)
/* 804008A4 003FD7E4  38 03 54 20 */	addi r0, r3, __vt__Q28Morimura14TVsSelectScene@l
/* 804008A8 003FD7E8  90 9F 02 20 */	stw r4, 0x220(r31)
/* 804008AC 003FD7EC  90 1F 00 00 */	stw r0, 0(r31)
/* 804008B0 003FD7F0  90 9F 02 24 */	stw r4, 0x224(r31)
.L_804008B4:
/* 804008B4 003FD7F4  7F E3 FB 78 */	mr r3, r31
/* 804008B8 003FD7F8  48 00 00 20 */	b .L_804008D8
.L_804008BC:
/* 804008BC 003FD7FC  38 60 02 24 */	li r3, 0x224
/* 804008C0 003FD800  4B C2 35 E5 */	bl __nw__FUl
/* 804008C4 003FD804  7C 60 1B 79 */	or. r0, r3, r3
/* 804008C8 003FD808  41 82 00 0C */	beq .L_804008D4
/* 804008CC 003FD80C  4B F7 FE 89 */	bl __ct__Q28Morimura13THiScoreSceneFv
/* 804008D0 003FD810  7C 60 1B 78 */	mr r0, r3
.L_804008D4:
/* 804008D4 003FD814  7C 03 03 78 */	mr r3, r0
.L_804008D8:
/* 804008D8 003FD818  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804008DC 003FD81C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804008E0 003FD820  7C 08 03 A6 */	mtlr r0
/* 804008E4 003FD824  38 21 00 10 */	addi r1, r1, 0x10
/* 804008E8 003FD828  4E 80 00 20 */	blr 

.global doGetSceneBase__Q29newScreen3MgrFl
doGetSceneBase__Q29newScreen3MgrFl:
/* 804008EC 003FD82C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804008F0 003FD830  7C 08 02 A6 */	mflr r0
/* 804008F4 003FD834  90 01 00 14 */	stw r0, 0x14(r1)
/* 804008F8 003FD838  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804008FC 003FD83C  7C 9F 23 78 */	mr r31, r4
/* 80400900 003FD840  7F E3 FB 78 */	mr r3, r31
/* 80400904 003FD844  4B FF F8 D5 */	bl createScene_Ogawa__9newScreenFl
/* 80400908 003FD848  28 03 00 00 */	cmplwi r3, 0
/* 8040090C 003FD84C  40 82 00 0C */	bne .L_80400918
/* 80400910 003FD850  7F E3 FB 78 */	mr r3, r31
/* 80400914 003FD854  4B FF FC 91 */	bl createScene_Morimura__9newScreenFl
.L_80400918:
/* 80400918 003FD858  28 03 00 00 */	cmplwi r3, 0
/* 8040091C 003FD85C  40 82 00 0C */	bne .L_80400928
/* 80400920 003FD860  7F E3 FB 78 */	mr r3, r31
/* 80400924 003FD864  4B FF B1 B1 */	bl createScene_Koono__Q22kh6ScreenFl
.L_80400928:
/* 80400928 003FD868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8040092C 003FD86C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80400930 003FD870  7C 08 03 A6 */	mtlr r0
/* 80400934 003FD874  38 21 00 10 */	addi r1, r1, 0x10
/* 80400938 003FD878  4E 80 00 20 */	blr 

.global create__Q29newScreen3MgrFv
create__Q29newScreen3MgrFv:
/* 8040093C 003FD87C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80400940 003FD880  7C 08 02 A6 */	mflr r0
/* 80400944 003FD884  38 60 00 A8 */	li r3, 0xa8
/* 80400948 003FD888  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040094C 003FD88C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80400950 003FD890  4B C2 35 55 */	bl __nw__FUl
/* 80400954 003FD894  7C 7F 1B 79 */	or. r31, r3, r3
/* 80400958 003FD898  41 82 00 38 */	beq .L_80400990
/* 8040095C 003FD89C  48 05 19 F9 */	bl __ct__Q26Screen3MgrFv
/* 80400960 003FD8A0  3C 80 80 4F */	lis r4, __vt__Q29newScreen3Mgr@ha
/* 80400964 003FD8A4  38 60 FF FF */	li r3, -1
/* 80400968 003FD8A8  38 84 A9 1C */	addi r4, r4, __vt__Q29newScreen3Mgr@l
/* 8040096C 003FD8AC  38 00 00 00 */	li r0, 0
/* 80400970 003FD8B0  90 9F 00 00 */	stw r4, 0(r31)
/* 80400974 003FD8B4  90 7F 00 9C */	stw r3, 0x9c(r31)
/* 80400978 003FD8B8  90 7F 00 A0 */	stw r3, 0xa0(r31)
/* 8040097C 003FD8BC  98 1F 00 90 */	stb r0, 0x90(r31)
/* 80400980 003FD8C0  98 1F 00 91 */	stb r0, 0x91(r31)
/* 80400984 003FD8C4  98 1F 00 92 */	stb r0, 0x92(r31)
/* 80400988 003FD8C8  90 1F 00 94 */	stw r0, 0x94(r31)
/* 8040098C 003FD8CC  90 1F 00 98 */	stw r0, 0x98(r31)
.L_80400990:
/* 80400990 003FD8D0  93 ED 9C 68 */	stw r31, sScreenMgr__Q26Screen3Mgr@sda21(r13)
/* 80400994 003FD8D4  7F E3 FB 78 */	mr r3, r31
/* 80400998 003FD8D8  48 05 1B E9 */	bl init__Q26Screen3MgrFv
/* 8040099C 003FD8DC  38 00 00 00 */	li r0, 0
/* 804009A0 003FD8E0  7F E3 FB 78 */	mr r3, r31
/* 804009A4 003FD8E4  98 1F 00 A0 */	stb r0, 0xa0(r31)
/* 804009A8 003FD8E8  98 1F 00 A1 */	stb r0, 0xa1(r31)
/* 804009AC 003FD8EC  98 1F 00 A2 */	stb r0, 0xa2(r31)
/* 804009B0 003FD8F0  98 1F 00 A3 */	stb r0, 0xa3(r31)
/* 804009B4 003FD8F4  88 1F 00 A0 */	lbz r0, 0xa0(r31)
/* 804009B8 003FD8F8  98 1F 00 9C */	stb r0, 0x9c(r31)
/* 804009BC 003FD8FC  88 1F 00 A1 */	lbz r0, 0xa1(r31)
/* 804009C0 003FD900  98 1F 00 9D */	stb r0, 0x9d(r31)
/* 804009C4 003FD904  88 1F 00 A2 */	lbz r0, 0xa2(r31)
/* 804009C8 003FD908  98 1F 00 9E */	stb r0, 0x9e(r31)
/* 804009CC 003FD90C  88 1F 00 A3 */	lbz r0, 0xa3(r31)
/* 804009D0 003FD910  98 1F 00 9F */	stb r0, 0x9f(r31)
/* 804009D4 003FD914  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804009D8 003FD918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804009DC 003FD91C  7C 08 03 A6 */	mtlr r0
/* 804009E0 003FD920  38 21 00 10 */	addi r1, r1, 0x10
/* 804009E4 003FD924  4E 80 00 20 */	blr 

.global __dt__Q26Screen3MgrFv
__dt__Q26Screen3MgrFv:
/* 804009E8 003FD928  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804009EC 003FD92C  7C 08 02 A6 */	mflr r0
/* 804009F0 003FD930  90 01 00 14 */	stw r0, 0x14(r1)
/* 804009F4 003FD934  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804009F8 003FD938  7C 9F 23 78 */	mr r31, r4
/* 804009FC 003FD93C  93 C1 00 08 */	stw r30, 8(r1)
/* 80400A00 003FD940  7C 7E 1B 79 */	or. r30, r3, r3
/* 80400A04 003FD944  41 82 00 78 */	beq .L_80400A7C
/* 80400A08 003FD948  3C 60 80 4F */	lis r3, __vt__Q26Screen3Mgr@ha
/* 80400A0C 003FD94C  38 00 00 00 */	li r0, 0
/* 80400A10 003FD950  38 83 D7 04 */	addi r4, r3, __vt__Q26Screen3Mgr@l
/* 80400A14 003FD954  38 7E 00 78 */	addi r3, r30, 0x78
/* 80400A18 003FD958  90 9E 00 00 */	stw r4, 0(r30)
/* 80400A1C 003FD95C  38 80 FF FF */	li r4, -1
/* 80400A20 003FD960  90 0D 9C 68 */	stw r0, sScreenMgr__Q26Screen3Mgr@sda21(r13)
/* 80400A24 003FD964  48 01 0B 65 */	bl __dt__5CNodeFv
/* 80400A28 003FD968  38 7E 00 60 */	addi r3, r30, 0x60
/* 80400A2C 003FD96C  38 80 FF FF */	li r4, -1
/* 80400A30 003FD970  48 01 0B 59 */	bl __dt__5CNodeFv
/* 80400A34 003FD974  38 7E 00 44 */	addi r3, r30, 0x44
/* 80400A38 003FD978  38 80 FF FF */	li r4, -1
/* 80400A3C 003FD97C  48 01 0B 4D */	bl __dt__5CNodeFv
/* 80400A40 003FD980  38 7E 00 2C */	addi r3, r30, 0x2c
/* 80400A44 003FD984  38 80 FF FF */	li r4, -1
/* 80400A48 003FD988  48 01 0B 41 */	bl __dt__5CNodeFv
/* 80400A4C 003FD98C  28 1E 00 00 */	cmplwi r30, 0
/* 80400A50 003FD990  41 82 00 1C */	beq .L_80400A6C
/* 80400A54 003FD994  3C 80 80 4F */	lis r4, __vt__Q26Screen7MgrBase@ha
/* 80400A58 003FD998  7F C3 F3 78 */	mr r3, r30
/* 80400A5C 003FD99C  38 04 A9 4C */	addi r0, r4, __vt__Q26Screen7MgrBase@l
/* 80400A60 003FD9A0  38 80 00 00 */	li r4, 0
/* 80400A64 003FD9A4  90 1E 00 00 */	stw r0, 0(r30)
/* 80400A68 003FD9A8  4B C1 C5 CD */	bl __dt__11JKRDisposerFv
.L_80400A6C:
/* 80400A6C 003FD9AC  7F E0 07 35 */	extsh. r0, r31
/* 80400A70 003FD9B0  40 81 00 0C */	ble .L_80400A7C
/* 80400A74 003FD9B4  7F C3 F3 78 */	mr r3, r30
/* 80400A78 003FD9B8  4B C2 36 3D */	bl __dl__FPv
.L_80400A7C:
/* 80400A7C 003FD9BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80400A80 003FD9C0  7F C3 F3 78 */	mr r3, r30
/* 80400A84 003FD9C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80400A88 003FD9C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80400A8C 003FD9CC  7C 08 03 A6 */	mtlr r0
/* 80400A90 003FD9D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80400A94 003FD9D4  4E 80 00 20 */	blr 

.global drawBG__Q29newScreen3MgrFR8Graphics
drawBG__Q29newScreen3MgrFR8Graphics:
/* 80400A98 003FD9D8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80400A9C 003FD9DC  7C 08 02 A6 */	mflr r0
/* 80400AA0 003FD9E0  90 01 00 84 */	stw r0, 0x84(r1)
/* 80400AA4 003FD9E4  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80400AA8 003FD9E8  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80400AAC 003FD9EC  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80400AB0 003FD9F0  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80400AB4 003FD9F4  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80400AB8 003FD9F8  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 80400ABC 003FD9FC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80400AC0 003FDA00  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80400AC4 003FDA04  7C 7E 1B 78 */	mr r30, r3
/* 80400AC8 003FDA08  3B E4 01 90 */	addi r31, r4, 0x190
/* 80400ACC 003FDA0C  88 03 00 9F */	lbz r0, 0x9f(r3)
/* 80400AD0 003FDA10  88 83 00 A3 */	lbz r4, 0xa3(r3)
/* 80400AD4 003FDA14  7C 00 20 40 */	cmplw r0, r4
/* 80400AD8 003FDA18  40 81 00 24 */	ble .L_80400AFC
/* 80400ADC 003FDA1C  7C 04 00 50 */	subf r0, r4, r0
/* 80400AE0 003FDA20  7C 00 16 70 */	srawi r0, r0, 2
/* 80400AE4 003FDA24  7C 60 01 94 */	addze r3, r0
/* 80400AE8 003FDA28  38 03 00 01 */	addi r0, r3, 1
/* 80400AEC 003FDA2C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80400AF0 003FDA30  7C 04 02 14 */	add r0, r4, r0
/* 80400AF4 003FDA34  98 1E 00 A3 */	stb r0, 0xa3(r30)
/* 80400AF8 003FDA38  48 00 00 24 */	b .L_80400B1C
.L_80400AFC:
/* 80400AFC 003FDA3C  40 80 00 20 */	bge .L_80400B1C
/* 80400B00 003FDA40  7C 00 20 50 */	subf r0, r0, r4
/* 80400B04 003FDA44  7C 00 16 70 */	srawi r0, r0, 2
/* 80400B08 003FDA48  7C 60 01 94 */	addze r3, r0
/* 80400B0C 003FDA4C  38 03 00 01 */	addi r0, r3, 1
/* 80400B10 003FDA50  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80400B14 003FDA54  7C 00 20 50 */	subf r0, r0, r4
/* 80400B18 003FDA58  98 1E 00 A3 */	stb r0, 0xa3(r30)
.L_80400B1C:
/* 80400B1C 003FDA5C  88 1E 00 A3 */	lbz r0, 0xa3(r30)
/* 80400B20 003FDA60  28 00 00 00 */	cmplwi r0, 0
/* 80400B24 003FDA64  41 82 00 E4 */	beq .L_80400C08
/* 80400B28 003FDA68  7F E3 FB 78 */	mr r3, r31
/* 80400B2C 003FDA6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80400B30 003FDA70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80400B34 003FDA74  7D 89 03 A6 */	mtctr r12
/* 80400B38 003FDA78  4E 80 04 21 */	bctrl 
/* 80400B3C 003FDA7C  48 02 26 E9 */	bl getRenderModeObj__6SystemFv
/* 80400B40 003FDA80  A0 63 00 04 */	lhz r3, 4(r3)
/* 80400B44 003FDA84  3C 00 43 30 */	lis r0, 0x4330
/* 80400B48 003FDA88  90 01 00 30 */	stw r0, 0x30(r1)
/* 80400B4C 003FDA8C  C8 22 1C F0 */	lfd f1, lbl_80520050@sda21(r2)
/* 80400B50 003FDA90  90 61 00 34 */	stw r3, 0x34(r1)
/* 80400B54 003FDA94  C3 C2 1C E8 */	lfs f30, lbl_80520048@sda21(r2)
/* 80400B58 003FDA98  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80400B5C 003FDA9C  EF E0 08 28 */	fsubs f31, f0, f1
/* 80400B60 003FDAA0  48 02 26 C5 */	bl getRenderModeObj__6SystemFv
/* 80400B64 003FDAA4  A0 63 00 06 */	lhz r3, 6(r3)
/* 80400B68 003FDAA8  3C 00 43 30 */	lis r0, 0x4330
/* 80400B6C 003FDAAC  80 9E 00 A4 */	lwz r4, 0xa4(r30)
/* 80400B70 003FDAB0  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80400B74 003FDAB4  C8 22 1C F0 */	lfd f1, lbl_80520050@sda21(r2)
/* 80400B78 003FDAB8  2C 04 00 01 */	cmpwi r4, 1
/* 80400B7C 003FDABC  90 01 00 38 */	stw r0, 0x38(r1)
/* 80400B80 003FDAC0  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 80400B84 003FDAC4  EF A0 08 28 */	fsubs f29, f0, f1
/* 80400B88 003FDAC8  40 82 00 10 */	bne .L_80400B98
/* 80400B8C 003FDACC  C0 02 1C EC */	lfs f0, lbl_8052004C@sda21(r2)
/* 80400B90 003FDAD0  EF BD 00 32 */	fmuls f29, f29, f0
/* 80400B94 003FDAD4  48 00 00 14 */	b .L_80400BA8
.L_80400B98:
/* 80400B98 003FDAD8  2C 04 00 02 */	cmpwi r4, 2
/* 80400B9C 003FDADC  40 82 00 0C */	bne .L_80400BA8
/* 80400BA0 003FDAE0  C0 02 1C EC */	lfs f0, lbl_8052004C@sda21(r2)
/* 80400BA4 003FDAE4  EF C0 07 72 */	fmuls f30, f0, f29
.L_80400BA8:
/* 80400BA8 003FDAE8  80 1E 00 A0 */	lwz r0, 0xa0(r30)
/* 80400BAC 003FDAEC  7F E3 FB 78 */	mr r3, r31
/* 80400BB0 003FDAF0  38 81 00 08 */	addi r4, r1, 8
/* 80400BB4 003FDAF4  38 A1 00 0C */	addi r5, r1, 0xc
/* 80400BB8 003FDAF8  90 01 00 18 */	stw r0, 0x18(r1)
/* 80400BBC 003FDAFC  38 C1 00 10 */	addi r6, r1, 0x10
/* 80400BC0 003FDB00  38 E1 00 14 */	addi r7, r1, 0x14
/* 80400BC4 003FDB04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80400BC8 003FDB08  90 01 00 10 */	stw r0, 0x10(r1)
/* 80400BCC 003FDB0C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80400BD0 003FDB10  90 01 00 08 */	stw r0, 8(r1)
/* 80400BD4 003FDB14  4B C3 5A B9 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 80400BD8 003FDB18  38 60 00 00 */	li r3, 0
/* 80400BDC 003FDB1C  4B CE 85 7D */	bl GXSetAlphaUpdate
/* 80400BE0 003FDB20  C0 42 1C E8 */	lfs f2, lbl_80520048@sda21(r2)
/* 80400BE4 003FDB24  EC 1E E8 2A */	fadds f0, f30, f29
/* 80400BE8 003FDB28  D3 C1 00 20 */	stfs f30, 0x20(r1)
/* 80400BEC 003FDB2C  7F E3 FB 78 */	mr r3, r31
/* 80400BF0 003FDB30  EC 22 F8 2A */	fadds f1, f2, f31
/* 80400BF4 003FDB34  38 81 00 1C */	addi r4, r1, 0x1c
/* 80400BF8 003FDB38  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80400BFC 003FDB3C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 80400C00 003FDB40  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80400C04 003FDB44  4B C3 5B D1 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
.L_80400C08:
/* 80400C08 003FDB48  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80400C0C 003FDB4C  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80400C10 003FDB50  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80400C14 003FDB54  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80400C18 003FDB58  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 80400C1C 003FDB5C  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 80400C20 003FDB60  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80400C24 003FDB64  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80400C28 003FDB68  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80400C2C 003FDB6C  7C 08 03 A6 */	mtlr r0
/* 80400C30 003FDB70  38 21 00 80 */	addi r1, r1, 0x80
/* 80400C34 003FDB74  4E 80 00 20 */	blr 

.global reset__Q29newScreen3MgrFv
reset__Q29newScreen3MgrFv:
/* 80400C38 003FDB78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80400C3C 003FDB7C  7C 08 02 A6 */	mflr r0
/* 80400C40 003FDB80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80400C44 003FDB84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80400C48 003FDB88  7C 7F 1B 78 */	mr r31, r3
/* 80400C4C 003FDB8C  48 05 19 A5 */	bl reset__Q26Screen3MgrFv
/* 80400C50 003FDB90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80400C54 003FDB94  41 82 00 30 */	beq .L_80400C84
/* 80400C58 003FDB98  38 00 00 00 */	li r0, 0
/* 80400C5C 003FDB9C  38 60 00 01 */	li r3, 1
/* 80400C60 003FDBA0  98 1F 00 90 */	stb r0, 0x90(r31)
/* 80400C64 003FDBA4  98 1F 00 91 */	stb r0, 0x91(r31)
/* 80400C68 003FDBA8  98 1F 00 92 */	stb r0, 0x92(r31)
/* 80400C6C 003FDBAC  90 1F 00 94 */	stw r0, 0x94(r31)
/* 80400C70 003FDBB0  90 1F 00 98 */	stw r0, 0x98(r31)
/* 80400C74 003FDBB4  98 1F 00 9F */	stb r0, 0x9f(r31)
/* 80400C78 003FDBB8  98 1F 00 A3 */	stb r0, 0xa3(r31)
/* 80400C7C 003FDBBC  90 1F 00 A4 */	stw r0, 0xa4(r31)
/* 80400C80 003FDBC0  48 00 00 08 */	b .L_80400C88
.L_80400C84:
/* 80400C84 003FDBC4  38 60 00 00 */	li r3, 0
.L_80400C88:
/* 80400C88 003FDBC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80400C8C 003FDBCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80400C90 003FDBD0  7C 08 03 A6 */	mtlr r0
/* 80400C94 003FDBD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80400C98 003FDBD8  4E 80 00 20 */	blr 

.global __dt__Q29newScreen3MgrFv
__dt__Q29newScreen3MgrFv:
/* 80400C9C 003FDBDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80400CA0 003FDBE0  7C 08 02 A6 */	mflr r0
/* 80400CA4 003FDBE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80400CA8 003FDBE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80400CAC 003FDBEC  7C 9F 23 78 */	mr r31, r4
/* 80400CB0 003FDBF0  93 C1 00 08 */	stw r30, 8(r1)
/* 80400CB4 003FDBF4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80400CB8 003FDBF8  41 82 00 88 */	beq .L_80400D40
/* 80400CBC 003FDBFC  3C 60 80 4F */	lis r3, __vt__Q29newScreen3Mgr@ha
/* 80400CC0 003FDC00  38 03 A9 1C */	addi r0, r3, __vt__Q29newScreen3Mgr@l
/* 80400CC4 003FDC04  90 1E 00 00 */	stw r0, 0(r30)
/* 80400CC8 003FDC08  41 82 00 68 */	beq .L_80400D30
/* 80400CCC 003FDC0C  3C 60 80 4F */	lis r3, __vt__Q26Screen3Mgr@ha
/* 80400CD0 003FDC10  38 00 00 00 */	li r0, 0
/* 80400CD4 003FDC14  38 83 D7 04 */	addi r4, r3, __vt__Q26Screen3Mgr@l
/* 80400CD8 003FDC18  38 7E 00 78 */	addi r3, r30, 0x78
/* 80400CDC 003FDC1C  90 9E 00 00 */	stw r4, 0(r30)
/* 80400CE0 003FDC20  38 80 FF FF */	li r4, -1
/* 80400CE4 003FDC24  90 0D 9C 68 */	stw r0, sScreenMgr__Q26Screen3Mgr@sda21(r13)
/* 80400CE8 003FDC28  48 01 08 A1 */	bl __dt__5CNodeFv
/* 80400CEC 003FDC2C  38 7E 00 60 */	addi r3, r30, 0x60
/* 80400CF0 003FDC30  38 80 FF FF */	li r4, -1
/* 80400CF4 003FDC34  48 01 08 95 */	bl __dt__5CNodeFv
/* 80400CF8 003FDC38  38 7E 00 44 */	addi r3, r30, 0x44
/* 80400CFC 003FDC3C  38 80 FF FF */	li r4, -1
/* 80400D00 003FDC40  48 01 08 89 */	bl __dt__5CNodeFv
/* 80400D04 003FDC44  38 7E 00 2C */	addi r3, r30, 0x2c
/* 80400D08 003FDC48  38 80 FF FF */	li r4, -1
/* 80400D0C 003FDC4C  48 01 08 7D */	bl __dt__5CNodeFv
/* 80400D10 003FDC50  28 1E 00 00 */	cmplwi r30, 0
/* 80400D14 003FDC54  41 82 00 1C */	beq .L_80400D30
/* 80400D18 003FDC58  3C 80 80 4F */	lis r4, __vt__Q26Screen7MgrBase@ha
/* 80400D1C 003FDC5C  7F C3 F3 78 */	mr r3, r30
/* 80400D20 003FDC60  38 04 A9 4C */	addi r0, r4, __vt__Q26Screen7MgrBase@l
/* 80400D24 003FDC64  38 80 00 00 */	li r4, 0
/* 80400D28 003FDC68  90 1E 00 00 */	stw r0, 0(r30)
/* 80400D2C 003FDC6C  4B C1 C3 09 */	bl __dt__11JKRDisposerFv
.L_80400D30:
/* 80400D30 003FDC70  7F E0 07 35 */	extsh. r0, r31
/* 80400D34 003FDC74  40 81 00 0C */	ble .L_80400D40
/* 80400D38 003FDC78  7F C3 F3 78 */	mr r3, r30
/* 80400D3C 003FDC7C  4B C2 33 79 */	bl __dl__FPv
.L_80400D40:
/* 80400D40 003FDC80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80400D44 003FDC84  7F C3 F3 78 */	mr r3, r30
/* 80400D48 003FDC88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80400D4C 003FDC8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80400D50 003FDC90  7C 08 03 A6 */	mtlr r0
/* 80400D54 003FDC94  38 21 00 10 */	addi r1, r1, 0x10
/* 80400D58 003FDC98  4E 80 00 20 */	blr 

.global setColorBG__Q29newScreen3MgrFRQ28JUtility6TColor
setColorBG__Q29newScreen3MgrFRQ28JUtility6TColor:
/* 80400D5C 003FDC9C  88 04 00 00 */	lbz r0, 0(r4)
/* 80400D60 003FDCA0  98 03 00 9C */	stb r0, 0x9c(r3)
/* 80400D64 003FDCA4  88 04 00 01 */	lbz r0, 1(r4)
/* 80400D68 003FDCA8  98 03 00 9D */	stb r0, 0x9d(r3)
/* 80400D6C 003FDCAC  88 04 00 02 */	lbz r0, 2(r4)
/* 80400D70 003FDCB0  98 03 00 9E */	stb r0, 0x9e(r3)
/* 80400D74 003FDCB4  88 04 00 03 */	lbz r0, 3(r4)
/* 80400D78 003FDCB8  98 03 00 9F */	stb r0, 0x9f(r3)
/* 80400D7C 003FDCBC  4E 80 00 20 */	blr 

.global setBGMode__Q29newScreen3MgrFi
setBGMode__Q29newScreen3MgrFi:
/* 80400D80 003FDCC0  90 83 00 A4 */	stw r4, 0xa4(r3)
/* 80400D84 003FDCC4  4E 80 00 20 */	blr 

.global drawWipe__Q26Screen3MgrFR8Graphics
drawWipe__Q26Screen3MgrFR8Graphics:
/* 80400D88 003FDCC8  4E 80 00 20 */	blr 

.global __dt__Q26Screen7MgrBaseFv
__dt__Q26Screen7MgrBaseFv:
/* 80400D8C 003FDCCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80400D90 003FDCD0  7C 08 02 A6 */	mflr r0
/* 80400D94 003FDCD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80400D98 003FDCD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80400D9C 003FDCDC  7C 9F 23 78 */	mr r31, r4
/* 80400DA0 003FDCE0  93 C1 00 08 */	stw r30, 8(r1)
/* 80400DA4 003FDCE4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80400DA8 003FDCE8  41 82 00 28 */	beq .L_80400DD0
/* 80400DAC 003FDCEC  3C A0 80 4F */	lis r5, __vt__Q26Screen7MgrBase@ha
/* 80400DB0 003FDCF0  38 80 00 00 */	li r4, 0
/* 80400DB4 003FDCF4  38 05 A9 4C */	addi r0, r5, __vt__Q26Screen7MgrBase@l
/* 80400DB8 003FDCF8  90 1E 00 00 */	stw r0, 0(r30)
/* 80400DBC 003FDCFC  4B C1 C2 79 */	bl __dt__11JKRDisposerFv
/* 80400DC0 003FDD00  7F E0 07 35 */	extsh. r0, r31
/* 80400DC4 003FDD04  40 81 00 0C */	ble .L_80400DD0
/* 80400DC8 003FDD08  7F C3 F3 78 */	mr r3, r30
/* 80400DCC 003FDD0C  4B C2 32 E9 */	bl __dl__FPv
.L_80400DD0:
/* 80400DD0 003FDD10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80400DD4 003FDD14  7F C3 F3 78 */	mr r3, r30
/* 80400DD8 003FDD18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80400DDC 003FDD1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80400DE0 003FDD20  7C 08 03 A6 */	mtlr r0
/* 80400DE4 003FDD24  38 21 00 10 */	addi r1, r1, 0x10
/* 80400DE8 003FDD28  4E 80 00 20 */	blr 

.global getResName__Q28Morimura16TPikminDownSceneCFv
getResName__Q28Morimura16TPikminDownSceneCFv:
/* 80400DEC 003FDD2C  3C 60 80 4A */	lis r3, lbl_804985B8@ha
/* 80400DF0 003FDD30  38 63 85 B8 */	addi r3, r3, lbl_804985B8@l
/* 80400DF4 003FDD34  4E 80 00 20 */	blr 

.global doCreateObj__Q28Morimura16TPikminDownSceneFP10JKRArchive
doCreateObj__Q28Morimura16TPikminDownSceneFP10JKRArchive:
/* 80400DF8 003FDD38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80400DFC 003FDD3C  7C 08 02 A6 */	mflr r0
/* 80400E00 003FDD40  90 01 00 24 */	stw r0, 0x24(r1)
/* 80400E04 003FDD44  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80400E08 003FDD48  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80400E0C 003FDD4C  7C 9E 23 78 */	mr r30, r4
/* 80400E10 003FDD50  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80400E14 003FDD54  7C 7D 1B 78 */	mr r29, r3
/* 80400E18 003FDD58  38 60 00 90 */	li r3, 0x90
/* 80400E1C 003FDD5C  4B C2 30 89 */	bl __nw__FUl
/* 80400E20 003FDD60  7C 7F 1B 79 */	or. r31, r3, r3
/* 80400E24 003FDD64  41 82 00 24 */	beq .L_80400E48
/* 80400E28 003FDD68  3C 80 80 4A */	lis r4, lbl_804985CC@ha
/* 80400E2C 003FDD6C  38 84 85 CC */	addi r4, r4, lbl_804985CC@l
/* 80400E30 003FDD70  4B F4 71 19 */	bl __ct__Q28Morimura13TGameOverBaseFPc
/* 80400E34 003FDD74  3C 60 80 4E */	lis r3, __vt__Q28Morimura13TPikminDown2D@ha
/* 80400E38 003FDD78  38 63 B6 0C */	addi r3, r3, __vt__Q28Morimura13TPikminDown2D@l
/* 80400E3C 003FDD7C  90 7F 00 00 */	stw r3, 0(r31)
/* 80400E40 003FDD80  38 03 00 10 */	addi r0, r3, 0x10
/* 80400E44 003FDD84  90 1F 00 18 */	stw r0, 0x18(r31)
.L_80400E48:
/* 80400E48 003FDD88  7F A3 EB 78 */	mr r3, r29
/* 80400E4C 003FDD8C  7F E4 FB 78 */	mr r4, r31
/* 80400E50 003FDD90  7F C5 F3 78 */	mr r5, r30
/* 80400E54 003FDD94  48 05 0F 21 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80400E58 003FDD98  93 FD 02 20 */	stw r31, 0x220(r29)
/* 80400E5C 003FDD9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80400E60 003FDDA0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80400E64 003FDDA4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80400E68 003FDDA8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80400E6C 003FDDAC  7C 08 03 A6 */	mtlr r0
/* 80400E70 003FDDB0  38 21 00 20 */	addi r1, r1, 0x20
/* 80400E74 003FDDB4  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q28Morimura16TPikminDownSceneFv
isUseBackupSceneInfo__Q28Morimura16TPikminDownSceneFv:
/* 80400E78 003FDDB8  38 60 00 00 */	li r3, 0
/* 80400E7C 003FDDBC  4E 80 00 20 */	blr 

.global getSceneType__Q28Morimura16TPikminDownSceneFv
getSceneType__Q28Morimura16TPikminDownSceneFv:
/* 80400E80 003FDDC0  38 60 27 2F */	li r3, 0x272f
/* 80400E84 003FDDC4  4E 80 00 20 */	blr 

.global getOwnerID__Q28Morimura16TPikminDownSceneFv
getOwnerID__Q28Morimura16TPikminDownSceneFv:
/* 80400E88 003FDDC8  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80400E8C 003FDDCC  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 80400E90 003FDDD0  4E 80 00 20 */	blr 

.global getMemberID__Q28Morimura16TPikminDownSceneFv
getMemberID__Q28Morimura16TPikminDownSceneFv:
/* 80400E94 003FDDD4  3C 80 45 52 */	lis r4, 0x45523244@ha
/* 80400E98 003FDDD8  3C 60 00 47 */	lis r3, 0x00474F56@ha
/* 80400E9C 003FDDDC  38 84 32 44 */	addi r4, r4, 0x45523244@l
/* 80400EA0 003FDDE0  38 63 4F 56 */	addi r3, r3, 0x00474F56@l
/* 80400EA4 003FDDE4  4E 80 00 20 */	blr 

.global getResName__Q28Morimura19TPresidentDownSceneCFv
getResName__Q28Morimura19TPresidentDownSceneCFv:
/* 80400EA8 003FDDE8  3C 60 80 4A */	lis r3, lbl_804985D8@ha
/* 80400EAC 003FDDEC  38 63 85 D8 */	addi r3, r3, lbl_804985D8@l
/* 80400EB0 003FDDF0  4E 80 00 20 */	blr 

.global doCreateObj__Q28Morimura19TPresidentDownSceneFP10JKRArchive
doCreateObj__Q28Morimura19TPresidentDownSceneFP10JKRArchive:
/* 80400EB4 003FDDF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80400EB8 003FDDF8  7C 08 02 A6 */	mflr r0
/* 80400EBC 003FDDFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80400EC0 003FDE00  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80400EC4 003FDE04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80400EC8 003FDE08  7C 9E 23 78 */	mr r30, r4
/* 80400ECC 003FDE0C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80400ED0 003FDE10  7C 7D 1B 78 */	mr r29, r3
/* 80400ED4 003FDE14  38 60 00 90 */	li r3, 0x90
/* 80400ED8 003FDE18  4B C2 2F CD */	bl __nw__FUl
/* 80400EDC 003FDE1C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80400EE0 003FDE20  41 82 00 24 */	beq .L_80400F04
/* 80400EE4 003FDE24  3C 80 80 4A */	lis r4, lbl_804985F0@ha
/* 80400EE8 003FDE28  38 84 85 F0 */	addi r4, r4, lbl_804985F0@l
/* 80400EEC 003FDE2C  4B F4 70 5D */	bl __ct__Q28Morimura13TGameOverBaseFPc
/* 80400EF0 003FDE30  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TPresidentDown2D@ha
/* 80400EF4 003FDE34  38 63 B6 88 */	addi r3, r3, __vt__Q28Morimura16TPresidentDown2D@l
/* 80400EF8 003FDE38  90 7F 00 00 */	stw r3, 0(r31)
/* 80400EFC 003FDE3C  38 03 00 10 */	addi r0, r3, 0x10
/* 80400F00 003FDE40  90 1F 00 18 */	stw r0, 0x18(r31)
.L_80400F04:
/* 80400F04 003FDE44  7F A3 EB 78 */	mr r3, r29
/* 80400F08 003FDE48  7F E4 FB 78 */	mr r4, r31
/* 80400F0C 003FDE4C  7F C5 F3 78 */	mr r5, r30
/* 80400F10 003FDE50  48 05 0E 65 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80400F14 003FDE54  93 FD 02 20 */	stw r31, 0x220(r29)
/* 80400F18 003FDE58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80400F1C 003FDE5C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80400F20 003FDE60  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80400F24 003FDE64  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80400F28 003FDE68  7C 08 03 A6 */	mtlr r0
/* 80400F2C 003FDE6C  38 21 00 20 */	addi r1, r1, 0x20
/* 80400F30 003FDE70  4E 80 00 20 */	blr 

.global getSceneType__Q28Morimura19TPresidentDownSceneFv
getSceneType__Q28Morimura19TPresidentDownSceneFv:
/* 80400F34 003FDE74  38 60 27 32 */	li r3, 0x2732
/* 80400F38 003FDE78  4E 80 00 20 */	blr 

.global getOwnerID__Q28Morimura19TPresidentDownSceneFv
getOwnerID__Q28Morimura19TPresidentDownSceneFv:
/* 80400F3C 003FDE7C  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80400F40 003FDE80  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 80400F44 003FDE84  4E 80 00 20 */	blr 

.global getMemberID__Q28Morimura19TPresidentDownSceneFv
getMemberID__Q28Morimura19TPresidentDownSceneFv:
/* 80400F48 003FDE88  3C 80 45 52 */	lis r4, 0x45523244@ha
/* 80400F4C 003FDE8C  3C 60 00 47 */	lis r3, 0x00474F56@ha
/* 80400F50 003FDE90  38 84 32 44 */	addi r4, r4, 0x45523244@l
/* 80400F54 003FDE94  38 63 4F 56 */	addi r3, r3, 0x00474F56@l
/* 80400F58 003FDE98  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q28Morimura18TGameOverSceneBaseFv
isUseBackupSceneInfo__Q28Morimura18TGameOverSceneBaseFv:
/* 80400F5C 003FDE9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80400F60 003FDEA0  7C 08 02 A6 */	mflr r0
/* 80400F64 003FDEA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80400F68 003FDEA8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80400F6C 003FDEAC  28 03 00 00 */	cmplwi r3, 0
/* 80400F70 003FDEB0  41 82 00 24 */	beq .L_80400F94
/* 80400F74 003FDEB4  4B D5 A1 F1 */	bl getAliveCount__Q24Game7NaviMgrFv
/* 80400F78 003FDEB8  38 00 00 01 */	li r0, 1
/* 80400F7C 003FDEBC  7C 65 FE 70 */	srawi r5, r3, 0x1f
/* 80400F80 003FDEC0  54 04 0F FE */	srwi r4, r0, 0x1f
/* 80400F84 003FDEC4  7C 00 18 10 */	subfc r0, r0, r3
/* 80400F88 003FDEC8  7C 05 21 14 */	adde r0, r5, r4
/* 80400F8C 003FDECC  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80400F90 003FDED0  48 00 00 08 */	b .L_80400F98
.L_80400F94:
/* 80400F94 003FDED4  38 60 00 01 */	li r3, 1
.L_80400F98:
/* 80400F98 003FDED8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80400F9C 003FDEDC  7C 08 03 A6 */	mtlr r0
/* 80400FA0 003FDEE0  38 21 00 10 */	addi r1, r1, 0x10
/* 80400FA4 003FDEE4  4E 80 00 20 */	blr 

.global getResName__Q28Morimura14TLujiDownSceneCFv
getResName__Q28Morimura14TLujiDownSceneCFv:
/* 80400FA8 003FDEE8  3C 60 80 4A */	lis r3, lbl_80498600@ha
/* 80400FAC 003FDEEC  38 63 86 00 */	addi r3, r3, lbl_80498600@l
/* 80400FB0 003FDEF0  4E 80 00 20 */	blr 

.global doCreateObj__Q28Morimura14TLujiDownSceneFP10JKRArchive
doCreateObj__Q28Morimura14TLujiDownSceneFP10JKRArchive:
/* 80400FB4 003FDEF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80400FB8 003FDEF8  7C 08 02 A6 */	mflr r0
/* 80400FBC 003FDEFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80400FC0 003FDF00  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80400FC4 003FDF04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80400FC8 003FDF08  7C 9E 23 78 */	mr r30, r4
/* 80400FCC 003FDF0C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80400FD0 003FDF10  7C 7D 1B 78 */	mr r29, r3
/* 80400FD4 003FDF14  38 60 00 90 */	li r3, 0x90
/* 80400FD8 003FDF18  4B C2 2E CD */	bl __nw__FUl
/* 80400FDC 003FDF1C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80400FE0 003FDF20  41 82 00 24 */	beq .L_80401004
/* 80400FE4 003FDF24  3C 80 80 4A */	lis r4, lbl_80498614@ha
/* 80400FE8 003FDF28  38 84 86 14 */	addi r4, r4, lbl_80498614@l
/* 80400FEC 003FDF2C  4B F4 6F 5D */	bl __ct__Q28Morimura13TGameOverBaseFPc
/* 80400FF0 003FDF30  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TLujiDown2D@ha
/* 80400FF4 003FDF34  38 63 B7 04 */	addi r3, r3, __vt__Q28Morimura11TLujiDown2D@l
/* 80400FF8 003FDF38  90 7F 00 00 */	stw r3, 0(r31)
/* 80400FFC 003FDF3C  38 03 00 10 */	addi r0, r3, 0x10
/* 80401000 003FDF40  90 1F 00 18 */	stw r0, 0x18(r31)
.L_80401004:
/* 80401004 003FDF44  7F A3 EB 78 */	mr r3, r29
/* 80401008 003FDF48  7F E4 FB 78 */	mr r4, r31
/* 8040100C 003FDF4C  7F C5 F3 78 */	mr r5, r30
/* 80401010 003FDF50  48 05 0D 65 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80401014 003FDF54  93 FD 02 20 */	stw r31, 0x220(r29)
/* 80401018 003FDF58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8040101C 003FDF5C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80401020 003FDF60  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80401024 003FDF64  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80401028 003FDF68  7C 08 03 A6 */	mtlr r0
/* 8040102C 003FDF6C  38 21 00 20 */	addi r1, r1, 0x20
/* 80401030 003FDF70  4E 80 00 20 */	blr 

.global getSceneType__Q28Morimura14TLujiDownSceneFv
getSceneType__Q28Morimura14TLujiDownSceneFv:
/* 80401034 003FDF74  38 60 27 31 */	li r3, 0x2731
/* 80401038 003FDF78  4E 80 00 20 */	blr 

.global getOwnerID__Q28Morimura14TLujiDownSceneFv
getOwnerID__Q28Morimura14TLujiDownSceneFv:
/* 8040103C 003FDF7C  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80401040 003FDF80  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 80401044 003FDF84  4E 80 00 20 */	blr 

.global getMemberID__Q28Morimura14TLujiDownSceneFv
getMemberID__Q28Morimura14TLujiDownSceneFv:
/* 80401048 003FDF88  3C 80 45 52 */	lis r4, 0x45523244@ha
/* 8040104C 003FDF8C  3C 60 00 47 */	lis r3, 0x00474F56@ha
/* 80401050 003FDF90  38 84 32 44 */	addi r4, r4, 0x45523244@l
/* 80401054 003FDF94  38 63 4F 56 */	addi r3, r3, 0x00474F56@l
/* 80401058 003FDF98  4E 80 00 20 */	blr 

.global getResName__Q28Morimura15TOrimaDownSceneCFv
getResName__Q28Morimura15TOrimaDownSceneCFv:
/* 8040105C 003FDF9C  3C 60 80 4A */	lis r3, lbl_80498620@ha
/* 80401060 003FDFA0  38 63 86 20 */	addi r3, r3, lbl_80498620@l
/* 80401064 003FDFA4  4E 80 00 20 */	blr 

.global doCreateObj__Q28Morimura15TOrimaDownSceneFP10JKRArchive
doCreateObj__Q28Morimura15TOrimaDownSceneFP10JKRArchive:
/* 80401068 003FDFA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8040106C 003FDFAC  7C 08 02 A6 */	mflr r0
/* 80401070 003FDFB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80401074 003FDFB4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80401078 003FDFB8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8040107C 003FDFBC  7C 9E 23 78 */	mr r30, r4
/* 80401080 003FDFC0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80401084 003FDFC4  7C 7D 1B 78 */	mr r29, r3
/* 80401088 003FDFC8  38 60 00 90 */	li r3, 0x90
/* 8040108C 003FDFCC  4B C2 2E 19 */	bl __nw__FUl
/* 80401090 003FDFD0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80401094 003FDFD4  41 82 00 24 */	beq .L_804010B8
/* 80401098 003FDFD8  3C 80 80 4A */	lis r4, lbl_80498634@ha
/* 8040109C 003FDFDC  38 84 86 34 */	addi r4, r4, lbl_80498634@l
/* 804010A0 003FDFE0  4B F4 6E A9 */	bl __ct__Q28Morimura13TGameOverBaseFPc
/* 804010A4 003FDFE4  3C 60 80 4E */	lis r3, __vt__Q28Morimura12TOrimaDown2D@ha
/* 804010A8 003FDFE8  38 63 B7 80 */	addi r3, r3, __vt__Q28Morimura12TOrimaDown2D@l
/* 804010AC 003FDFEC  90 7F 00 00 */	stw r3, 0(r31)
/* 804010B0 003FDFF0  38 03 00 10 */	addi r0, r3, 0x10
/* 804010B4 003FDFF4  90 1F 00 18 */	stw r0, 0x18(r31)
.L_804010B8:
/* 804010B8 003FDFF8  7F A3 EB 78 */	mr r3, r29
/* 804010BC 003FDFFC  7F E4 FB 78 */	mr r4, r31
/* 804010C0 003FE000  7F C5 F3 78 */	mr r5, r30
/* 804010C4 003FE004  48 05 0C B1 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 804010C8 003FE008  93 FD 02 20 */	stw r31, 0x220(r29)
/* 804010CC 003FE00C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804010D0 003FE010  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804010D4 003FE014  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804010D8 003FE018  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804010DC 003FE01C  7C 08 03 A6 */	mtlr r0
/* 804010E0 003FE020  38 21 00 20 */	addi r1, r1, 0x20
/* 804010E4 003FE024  4E 80 00 20 */	blr 

.global getSceneType__Q28Morimura15TOrimaDownSceneFv
getSceneType__Q28Morimura15TOrimaDownSceneFv:
/* 804010E8 003FE028  38 60 27 30 */	li r3, 0x2730
/* 804010EC 003FE02C  4E 80 00 20 */	blr 

.global getOwnerID__Q28Morimura15TOrimaDownSceneFv
getOwnerID__Q28Morimura15TOrimaDownSceneFv:
/* 804010F0 003FE030  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 804010F4 003FE034  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 804010F8 003FE038  4E 80 00 20 */	blr 

.global getMemberID__Q28Morimura15TOrimaDownSceneFv
getMemberID__Q28Morimura15TOrimaDownSceneFv:
/* 804010FC 003FE03C  3C 80 45 52 */	lis r4, 0x45523244@ha
/* 80401100 003FE040  3C 60 00 47 */	lis r3, 0x00474F56@ha
/* 80401104 003FE044  38 84 32 44 */	addi r4, r4, 0x45523244@l
/* 80401108 003FE048  38 63 4F 56 */	addi r3, r3, 0x00474F56@l
/* 8040110C 003FE04C  4E 80 00 20 */	blr 

.global getResName__Q28Morimura14TGameOverSceneCFv
getResName__Q28Morimura14TGameOverSceneCFv:
/* 80401110 003FE050  3C 60 80 4A */	lis r3, lbl_80498640@ha
/* 80401114 003FE054  38 63 86 40 */	addi r3, r3, lbl_80498640@l
/* 80401118 003FE058  4E 80 00 20 */	blr 

.global doCreateObj__Q28Morimura14TGameOverSceneFP10JKRArchive
doCreateObj__Q28Morimura14TGameOverSceneFP10JKRArchive:
/* 8040111C 003FE05C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80401120 003FE060  7C 08 02 A6 */	mflr r0
/* 80401124 003FE064  90 01 00 24 */	stw r0, 0x24(r1)
/* 80401128 003FE068  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8040112C 003FE06C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80401130 003FE070  7C 9E 23 78 */	mr r30, r4
/* 80401134 003FE074  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80401138 003FE078  7C 7D 1B 78 */	mr r29, r3
/* 8040113C 003FE07C  38 60 00 90 */	li r3, 0x90
/* 80401140 003FE080  4B C2 2D 65 */	bl __nw__FUl
/* 80401144 003FE084  7C 7F 1B 79 */	or. r31, r3, r3
/* 80401148 003FE088  41 82 00 24 */	beq .L_8040116C
/* 8040114C 003FE08C  3C 80 80 4A */	lis r4, lbl_80498654@ha
/* 80401150 003FE090  38 84 86 54 */	addi r4, r4, lbl_80498654@l
/* 80401154 003FE094  4B F4 6D F5 */	bl __ct__Q28Morimura13TGameOverBaseFPc
/* 80401158 003FE098  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TGameOver2D@ha
/* 8040115C 003FE09C  38 63 B7 FC */	addi r3, r3, __vt__Q28Morimura11TGameOver2D@l
/* 80401160 003FE0A0  90 7F 00 00 */	stw r3, 0(r31)
/* 80401164 003FE0A4  38 03 00 10 */	addi r0, r3, 0x10
/* 80401168 003FE0A8  90 1F 00 18 */	stw r0, 0x18(r31)
.L_8040116C:
/* 8040116C 003FE0AC  7F A3 EB 78 */	mr r3, r29
/* 80401170 003FE0B0  7F E4 FB 78 */	mr r4, r31
/* 80401174 003FE0B4  7F C5 F3 78 */	mr r5, r30
/* 80401178 003FE0B8  48 05 0B FD */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8040117C 003FE0BC  93 FD 02 20 */	stw r31, 0x220(r29)
/* 80401180 003FE0C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80401184 003FE0C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80401188 003FE0C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8040118C 003FE0CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80401190 003FE0D0  7C 08 03 A6 */	mtlr r0
/* 80401194 003FE0D4  38 21 00 20 */	addi r1, r1, 0x20
/* 80401198 003FE0D8  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q28Morimura14TGameOverSceneFv
isUseBackupSceneInfo__Q28Morimura14TGameOverSceneFv:
/* 8040119C 003FE0DC  38 60 00 00 */	li r3, 0
/* 804011A0 003FE0E0  4E 80 00 20 */	blr 

.global getSceneType__Q28Morimura14TGameOverSceneFv
getSceneType__Q28Morimura14TGameOverSceneFv:
/* 804011A4 003FE0E4  38 60 27 2F */	li r3, 0x272f
/* 804011A8 003FE0E8  4E 80 00 20 */	blr 

.global getOwnerID__Q28Morimura14TGameOverSceneFv
getOwnerID__Q28Morimura14TGameOverSceneFv:
/* 804011AC 003FE0EC  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 804011B0 003FE0F0  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 804011B4 003FE0F4  4E 80 00 20 */	blr 

.global getMemberID__Q28Morimura14TGameOverSceneFv
getMemberID__Q28Morimura14TGameOverSceneFv:
/* 804011B8 003FE0F8  3C 80 45 52 */	lis r4, 0x45523244@ha
/* 804011BC 003FE0FC  3C 60 00 47 */	lis r3, 0x00474F56@ha
/* 804011C0 003FE100  38 84 32 44 */	addi r4, r4, 0x45523244@l
/* 804011C4 003FE104  38 63 4F 56 */	addi r3, r3, 0x00474F56@l
/* 804011C8 003FE108  4E 80 00 20 */	blr 

.global getResName__Q28Morimura13THurryUpSceneCFv
getResName__Q28Morimura13THurryUpSceneCFv:
/* 804011CC 003FE10C  3C 60 80 4A */	lis r3, lbl_80498660@ha
/* 804011D0 003FE110  38 63 86 60 */	addi r3, r3, lbl_80498660@l
/* 804011D4 003FE114  4E 80 00 20 */	blr 

.global doCreateObj__Q28Morimura13THurryUpSceneFP10JKRArchive
doCreateObj__Q28Morimura13THurryUpSceneFP10JKRArchive:
/* 804011D8 003FE118  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804011DC 003FE11C  7C 08 02 A6 */	mflr r0
/* 804011E0 003FE120  90 01 00 24 */	stw r0, 0x24(r1)
/* 804011E4 003FE124  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804011E8 003FE128  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804011EC 003FE12C  7C 9E 23 78 */	mr r30, r4
/* 804011F0 003FE130  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804011F4 003FE134  7C 7D 1B 78 */	mr r29, r3
/* 804011F8 003FE138  38 60 01 18 */	li r3, 0x118
/* 804011FC 003FE13C  4B C2 2C A9 */	bl __nw__FUl
/* 80401200 003FE140  7C 7F 1B 79 */	or. r31, r3, r3
/* 80401204 003FE144  41 82 00 0C */	beq .L_80401210
/* 80401208 003FE148  4B F4 52 29 */	bl __ct__Q28Morimura10THurryUp2DFv
/* 8040120C 003FE14C  7C 7F 1B 78 */	mr r31, r3
.L_80401210:
/* 80401210 003FE150  7F A3 EB 78 */	mr r3, r29
/* 80401214 003FE154  7F E4 FB 78 */	mr r4, r31
/* 80401218 003FE158  7F C5 F3 78 */	mr r5, r30
/* 8040121C 003FE15C  48 05 0B 59 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80401220 003FE160  93 FD 02 20 */	stw r31, 0x220(r29)
/* 80401224 003FE164  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80401228 003FE168  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8040122C 003FE16C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80401230 003FE170  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80401234 003FE174  7C 08 03 A6 */	mtlr r0
/* 80401238 003FE178  38 21 00 20 */	addi r1, r1, 0x20
/* 8040123C 003FE17C  4E 80 00 20 */	blr 

.global getSceneType__Q28Morimura13THurryUpSceneFv
getSceneType__Q28Morimura13THurryUpSceneFv:
/* 80401240 003FE180  38 60 27 2E */	li r3, 0x272e
/* 80401244 003FE184  4E 80 00 20 */	blr 

.global getOwnerID__Q28Morimura13THurryUpSceneFv
getOwnerID__Q28Morimura13THurryUpSceneFv:
/* 80401248 003FE188  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 8040124C 003FE18C  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 80401250 003FE190  4E 80 00 20 */	blr 

.global getMemberID__Q28Morimura13THurryUpSceneFv
getMemberID__Q28Morimura13THurryUpSceneFv:
/* 80401254 003FE194  3C 80 52 59 */	lis r4, 0x52595550@ha
/* 80401258 003FE198  3C 60 00 48 */	lis r3, 0x00485552@ha
/* 8040125C 003FE19C  38 84 55 50 */	addi r4, r4, 0x52595550@l
/* 80401260 003FE1A0  38 63 55 52 */	addi r3, r3, 0x00485552@l
/* 80401264 003FE1A4  4E 80 00 20 */	blr 
