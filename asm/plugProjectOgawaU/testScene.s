.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q32og6Screen15DispMemberDummy
__vt__Q32og6Screen15DispMemberDummy:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen15DispMemberDummyFv
	.4byte getOwnerID__Q32og6Screen15DispMemberDummyFv
	.4byte getMemberID__Q32og6Screen15DispMemberDummyFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global isUseBackupSceneInfo__Q26Screen9SceneBaseFv
isUseBackupSceneInfo__Q26Screen9SceneBaseFv: #weak func
/* 8030D790 0030A6D0  38 60 00 00 */	li r3, 0
/* 8030D794 0030A6D4  4E 80 00 20 */	blr 

.global isDrawInDemo__Q26Screen9SceneBaseCFv
isDrawInDemo__Q26Screen9SceneBaseCFv: #weak func
/* 8030D798 0030A6D8  38 60 00 01 */	li r3, 1
/* 8030D79C 0030A6DC  4E 80 00 20 */	blr 

.global setPort__Q26Screen9SceneBaseFR8Graphics
setPort__Q26Screen9SceneBaseFR8Graphics: #weak func
/* 8030D7A0 0030A6E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030D7A4 0030A6E4  7C 08 02 A6 */	mflr r0
/* 8030D7A8 0030A6E8  38 64 01 90 */	addi r3, r4, 0x190
/* 8030D7AC 0030A6EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030D7B0 0030A6F0  81 84 01 90 */	lwz r12, 0x190(r4)
/* 8030D7B4 0030A6F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8030D7B8 0030A6F8  7D 89 03 A6 */	mtctr r12
/* 8030D7BC 0030A6FC  4E 80 04 21 */	bctrl 
/* 8030D7C0 0030A700  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030D7C4 0030A704  7C 08 03 A6 */	mtlr r0
/* 8030D7C8 0030A708  38 21 00 10 */	addi r1, r1, 0x10
/* 8030D7CC 0030A70C  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg: #weak func
/* 8030D7D0 0030A710  38 60 00 01 */	li r3, 1
/* 8030D7D4 0030A714  4E 80 00 20 */	blr 

.global doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg: #weak func
/* 8030D7D8 0030A718  38 60 00 01 */	li r3, 1
/* 8030D7DC 0030A71C  4E 80 00 20 */	blr 

.global doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg: #weak func
/* 8030D7E0 0030A720  38 60 00 01 */	li r3, 1
/* 8030D7E4 0030A724  4E 80 00 20 */	blr 

.global setDefaultDispMember__Q26Screen9SceneBaseFv
setDefaultDispMember__Q26Screen9SceneBaseFv: #weak func
/* 8030D7E8 0030A728  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030D7EC 0030A72C  7C 08 02 A6 */	mflr r0
/* 8030D7F0 0030A730  3C A0 80 4B */	lis r5, __vt__Q32og6Screen14DispMemberBase@ha
/* 8030D7F4 0030A734  3C 80 80 4E */	lis r4, __vt__Q32og6Screen15DispMemberDummy@ha
/* 8030D7F8 0030A738  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030D7FC 0030A73C  38 05 11 48 */	addi r0, r5, __vt__Q32og6Screen14DispMemberBase@l
/* 8030D800 0030A740  38 A0 00 00 */	li r5, 0
/* 8030D804 0030A744  90 01 00 08 */	stw r0, 8(r1)
/* 8030D808 0030A748  38 04 82 28 */	addi r0, r4, __vt__Q32og6Screen15DispMemberDummy@l
/* 8030D80C 0030A74C  38 81 00 08 */	addi r4, r1, 8
/* 8030D810 0030A750  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8030D814 0030A754  38 A0 00 08 */	li r5, 8
/* 8030D818 0030A758  90 01 00 08 */	stw r0, 8(r1)
/* 8030D81C 0030A75C  80 63 02 1C */	lwz r3, 0x21c(r3)
/* 8030D820 0030A760  4B CF 79 7D */	bl memcpy
/* 8030D824 0030A764  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030D828 0030A768  38 60 00 01 */	li r3, 1
/* 8030D82C 0030A76C  7C 08 03 A6 */	mtlr r0
/* 8030D830 0030A770  38 21 00 10 */	addi r1, r1, 0x10
/* 8030D834 0030A774  4E 80 00 20 */	blr 

.global doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg: #weak func
/* 8030D838 0030A778  4E 80 00 20 */	blr 

.global doGetFinishState__Q26Screen9SceneBaseFv
doGetFinishState__Q26Screen9SceneBaseFv: #weak func
/* 8030D83C 0030A77C  38 60 FF FD */	li r3, -3
/* 8030D840 0030A780  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen15DispMemberDummyFv
getSize__Q32og6Screen15DispMemberDummyFv: #weak func
/* 8030D844 0030A784  38 60 00 08 */	li r3, 8
/* 8030D848 0030A788  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen15DispMemberDummyFv
getOwnerID__Q32og6Screen15DispMemberDummyFv: #weak func
/* 8030D84C 0030A78C  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8030D850 0030A790  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8030D854 0030A794  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen15DispMemberDummyFv
getMemberID__Q32og6Screen15DispMemberDummyFv: #weak func
/* 8030D858 0030A798  3C 80 55 4D */	lis r4, 0x554D4D59@ha
/* 8030D85C 0030A79C  38 60 00 44 */	li r3, 0x44
/* 8030D860 0030A7A0  38 84 4D 59 */	addi r4, r4, 0x554D4D59@l
/* 8030D864 0030A7A4  4E 80 00 20 */	blr 
