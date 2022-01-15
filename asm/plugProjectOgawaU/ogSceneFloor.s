.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048EC80
lbl_8048EC80:
	.4byte 0x6F675363
	.4byte 0x656E6546
	.4byte 0x6C6F6F72
	.4byte 0x2E637070
	.4byte 0x00000000
	.4byte 0x7265735F
	.4byte 0x666C6F6F
	.4byte 0x725F6E61
	.4byte 0x6D655F6A
	.4byte 0x706E2E73
	.4byte 0x7A730000
	.4byte 0x7265735F
	.4byte 0x666C6F6F
	.4byte 0x725F6E61
	.4byte 0x6D655F65
	.4byte 0x6E675F70
	.4byte 0x616C2E73
	.4byte 0x7A730000
	.4byte 0x61726320
	.4byte 0x6973204E
	.4byte 0x554C4C21
	.4byte 0x210A0000
	.4byte 0x6E6F6465
	.4byte 0x20697320
	.4byte 0x4E554C4C
	.4byte 0x21210A00
	.4byte 0x666C6F6F
	.4byte 0x72207363
	.4byte 0x7265656E
	.4byte 0x00000000
	.4byte 0x44697370
	.4byte 0x4D656D62
	.4byte 0x65722069
	.4byte 0x73206E6F
	.4byte 0x74202746
	.4byte 0x4C4F4F52
	.4byte 0x27210000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q32og9newScreen5Floor
__vt__Q32og9newScreen5Floor:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32og9newScreen5FloorFv
	.4byte getOwnerID__Q32og9newScreen5FloorFv
	.4byte getMemberID__Q32og9newScreen5FloorFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q32og9newScreen5FloorCFv
	.4byte doCreateObj__Q32og9newScreen5FloorFP10JKRArchive
	.4byte doUserCallBackFunc__Q32og9newScreen5FloorFPQ28Resource10MgrCommand
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

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051DBB8
lbl_8051DBB8:
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen5FloorFv
__ct__Q32og9newScreen5FloorFv:
/* 8031BE60 00318DA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031BE64 00318DA4  7C 08 02 A6 */	mflr r0
/* 8031BE68 00318DA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031BE6C 00318DAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8031BE70 00318DB0  7C 7F 1B 78 */	mr r31, r3
/* 8031BE74 00318DB4  48 13 59 1D */	bl __ct__Q26Screen9SceneBaseFv
/* 8031BE78 00318DB8  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen5Floor@ha
/* 8031BE7C 00318DBC  7F E3 FB 78 */	mr r3, r31
/* 8031BE80 00318DC0  38 04 8E 78 */	addi r0, r4, __vt__Q32og9newScreen5Floor@l
/* 8031BE84 00318DC4  90 1F 00 00 */	stw r0, 0(r31)
/* 8031BE88 00318DC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8031BE8C 00318DCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031BE90 00318DD0  7C 08 03 A6 */	mtlr r0
/* 8031BE94 00318DD4  38 21 00 10 */	addi r1, r1, 0x10
/* 8031BE98 00318DD8  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen5FloorFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen5FloorFPQ28Resource10MgrCommand:
/* 8031BE9C 00318DDC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8031BEA0 00318DE0  7C 08 02 A6 */	mflr r0
/* 8031BEA4 00318DE4  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 8031BEA8 00318DE8  3C C0 80 49 */	lis r6, lbl_8048EC80@ha
/* 8031BEAC 00318DEC  90 01 00 54 */	stw r0, 0x54(r1)
/* 8031BEB0 00318DF0  3C A0 4C 4F */	lis r5, 0x4C4F4F52@ha
/* 8031BEB4 00318DF4  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 8031BEB8 00318DF8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8031BEBC 00318DFC  3B E6 EC 80 */	addi r31, r6, lbl_8048EC80@l
/* 8031BEC0 00318E00  38 C5 4F 52 */	addi r6, r5, 0x4C4F4F52@l
/* 8031BEC4 00318E04  38 A0 00 46 */	li r5, 0x46
/* 8031BEC8 00318E08  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8031BECC 00318E0C  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8031BED0 00318E10  7C 7D 1B 78 */	mr r29, r3
/* 8031BED4 00318E14  80 63 02 1C */	lwz r3, 0x21c(r3)
/* 8031BED8 00318E18  4B FF 34 45 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8031BEDC 00318E1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8031BEE0 00318E20  41 82 00 C8 */	beq lbl_8031BFA8
/* 8031BEE4 00318E24  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8031BEE8 00318E28  38 9F 00 2C */	addi r4, r31, 0x2c
/* 8031BEEC 00318E2C  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 8031BEF0 00318E30  2C 00 00 05 */	cmpwi r0, 5
/* 8031BEF4 00318E34  40 82 00 08 */	bne lbl_8031BEFC
/* 8031BEF8 00318E38  38 9F 00 14 */	addi r4, r31, 0x14
lbl_8031BEFC:
/* 8031BEFC 00318E3C  38 7D 00 04 */	addi r3, r29, 4
/* 8031BF00 00318E40  4B FF C0 4D */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 8031BF04 00318E44  38 61 00 08 */	addi r3, r1, 8
/* 8031BF08 00318E48  38 9D 00 04 */	addi r4, r29, 4
/* 8031BF0C 00318E4C  48 13 06 CD */	bl __ct__Q212LoadResource3ArgFPCc
/* 8031BF10 00318E50  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8031BF14 00318E54  38 81 00 08 */	addi r4, r1, 8
/* 8031BF18 00318E58  48 13 07 FD */	bl mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8031BF1C 00318E5C  28 03 00 00 */	cmplwi r3, 0
/* 8031BF20 00318E60  3B C0 00 00 */	li r30, 0
/* 8031BF24 00318E64  41 82 00 2C */	beq lbl_8031BF50
/* 8031BF28 00318E68  80 03 00 34 */	lwz r0, 0x34(r3)
/* 8031BF2C 00318E6C  28 00 00 00 */	cmplwi r0, 0
/* 8031BF30 00318E70  7C 1E 03 78 */	mr r30, r0
/* 8031BF34 00318E74  40 82 00 30 */	bne lbl_8031BF64
/* 8031BF38 00318E78  38 7F 00 00 */	addi r3, r31, 0
/* 8031BF3C 00318E7C  38 BF 00 48 */	addi r5, r31, 0x48
/* 8031BF40 00318E80  38 80 00 5B */	li r4, 0x5b
/* 8031BF44 00318E84  4C C6 31 82 */	crclr 6
/* 8031BF48 00318E88  4B D0 E6 F9 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8031BF4C 00318E8C  48 00 00 18 */	b lbl_8031BF64
lbl_8031BF50:
/* 8031BF50 00318E90  38 7F 00 00 */	addi r3, r31, 0
/* 8031BF54 00318E94  38 BF 00 58 */	addi r5, r31, 0x58
/* 8031BF58 00318E98  38 80 00 60 */	li r4, 0x60
/* 8031BF5C 00318E9C  4C C6 31 82 */	crclr 6
/* 8031BF60 00318EA0  4B D0 E6 E1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8031BF64:
/* 8031BF64 00318EA4  38 60 00 BC */	li r3, 0xbc
/* 8031BF68 00318EA8  4B D0 7F 3D */	bl __nw__FUl
/* 8031BF6C 00318EAC  7C 64 1B 79 */	or. r4, r3, r3
/* 8031BF70 00318EB0  41 82 00 10 */	beq lbl_8031BF80
/* 8031BF74 00318EB4  38 9F 00 68 */	addi r4, r31, 0x68
/* 8031BF78 00318EB8  4B FF E4 51 */	bl __ct__Q32og9newScreen8ObjFloorFPCc
/* 8031BF7C 00318EBC  7C 64 1B 78 */	mr r4, r3
lbl_8031BF80:
/* 8031BF80 00318EC0  7F A3 EB 78 */	mr r3, r29
/* 8031BF84 00318EC4  7F C5 F3 78 */	mr r5, r30
/* 8031BF88 00318EC8  48 13 5D ED */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8031BF8C 00318ECC  7F A3 EB 78 */	mr r3, r29
/* 8031BF90 00318ED0  38 80 00 00 */	li r4, 0
/* 8031BF94 00318ED4  38 A0 00 00 */	li r5, 0
/* 8031BF98 00318ED8  38 C0 00 00 */	li r6, 0
/* 8031BF9C 00318EDC  38 E0 00 00 */	li r7, 0
/* 8031BFA0 00318EE0  48 13 62 E5 */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 8031BFA4 00318EE4  48 00 00 18 */	b lbl_8031BFBC
lbl_8031BFA8:
/* 8031BFA8 00318EE8  38 7F 00 00 */	addi r3, r31, 0
/* 8031BFAC 00318EEC  38 BF 00 78 */	addi r5, r31, 0x78
/* 8031BFB0 00318EF0  38 80 00 6F */	li r4, 0x6f
/* 8031BFB4 00318EF4  4C C6 31 82 */	crclr 6
/* 8031BFB8 00318EF8  4B D0 E6 89 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8031BFBC:
/* 8031BFBC 00318EFC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8031BFC0 00318F00  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8031BFC4 00318F04  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8031BFC8 00318F08  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8031BFCC 00318F0C  7C 08 03 A6 */	mtlr r0
/* 8031BFD0 00318F10  38 21 00 50 */	addi r1, r1, 0x50
/* 8031BFD4 00318F14  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen5FloorFP10JKRArchive
doCreateObj__Q32og9newScreen5FloorFP10JKRArchive:
/* 8031BFD8 00318F18  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen5FloorCFv
getResName__Q32og9newScreen5FloorCFv:
/* 8031BFDC 00318F1C  38 62 F8 58 */	addi r3, r2, lbl_8051DBB8@sda21
/* 8031BFE0 00318F20  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen5FloorFv
getSceneType__Q32og9newScreen5FloorFv:
/* 8031BFE4 00318F24  38 60 27 13 */	li r3, 0x2713
/* 8031BFE8 00318F28  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen5FloorFv
getOwnerID__Q32og9newScreen5FloorFv:
/* 8031BFEC 00318F2C  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8031BFF0 00318F30  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8031BFF4 00318F34  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen5FloorFv
getMemberID__Q32og9newScreen5FloorFv:
/* 8031BFF8 00318F38  3C 80 4C 4F */	lis r4, 0x4C4F4F52@ha
/* 8031BFFC 00318F3C  38 60 00 46 */	li r3, 0x46
/* 8031C000 00318F40  38 84 4F 52 */	addi r4, r4, 0x4C4F4F52@l
/* 8031C004 00318F44  4E 80 00 20 */	blr 
