.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_khFinalResult_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80498CD8, local
	.asciz "khFinalResult.cpp"
.endobj lbl_80498CD8
.balign 4
.obj lbl_80498CEC, local
	.asciz "result_final_image00.blo"
.endobj lbl_80498CEC
.balign 4
.obj lbl_80498D08, local
	.asciz "result_final_image01.blo"
.endobj lbl_80498D08
.balign 4
.obj lbl_80498D24, local
	.asciz "result_final_image02.blo"
.endobj lbl_80498D24
.balign 4
.obj lbl_80498D40, local
	.asciz "result_final_image03.blo"
.endobj lbl_80498D40
.balign 4
.obj lbl_80498D5C, local
	.asciz "result_final_image04.blo"
.endobj lbl_80498D5C
.balign 4
.obj lbl_80498D78, local
	.asciz "result_final_image05.blo"
.endobj lbl_80498D78
.balign 4
.obj lbl_80498D94, local
	.asciz "result_final_image06.blo"
.endobj lbl_80498D94
.balign 4
.obj lbl_80498DB0, local
	.asciz "result_final_image07.blo"
.endobj lbl_80498DB0
.balign 4
.obj lbl_80498DCC, local
	.asciz "result_final_image08.blo"
.endobj lbl_80498DCC
.balign 4
.obj lbl_80498DE8, local
	.asciz "result_final_image09.blo"
.endobj lbl_80498DE8
.balign 4
.obj lbl_80498E04, local
	.asciz "result_final_image10.blo"
.endobj lbl_80498E04
.balign 4
.obj lbl_80498E20, local
	.asciz "result_final_image11.blo"
.endobj lbl_80498E20
.balign 4
.obj lbl_80498E3C, local
	.asciz "result_final_image12.blo"
.endobj lbl_80498E3C
.balign 4
.obj lbl_80498E58, local
	.asciz "result_final_image13.blo"
.endobj lbl_80498E58
.balign 4
.obj lbl_80498E74, local
	.asciz "result_final_image14.blo"
.endobj lbl_80498E74
.balign 4
.obj lbl_80498E90, local
	.asciz "result_final_image15.blo"
.endobj lbl_80498E90
.balign 4
.obj lbl_80498EAC, local
	.4byte lbl_80498CEC
	.4byte lbl_80498D08
	.4byte lbl_80498D24
	.4byte lbl_80498D40
	.4byte lbl_80498D5C
	.4byte lbl_80498D78
	.4byte lbl_80498D94
	.4byte lbl_80498DB0
	.4byte lbl_80498DCC
	.4byte lbl_80498DE8
	.4byte lbl_80498E04
	.4byte lbl_80498E20
	.4byte lbl_80498E3C
	.4byte lbl_80498E58
	.4byte lbl_80498E74
	.4byte lbl_80498E90
.endobj lbl_80498EAC
.balign 4
.obj lbl_80498EEC, local
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
.endobj lbl_80498EEC
.balign 4
.obj lbl_80498F2C, local
	.asciz "/new_screen/cmn/result_final_image.szs"
.endobj lbl_80498F2C
.balign 8
.obj lbl_80498F58, local
	.8byte 0x50746F6B796F7031
	.8byte 0x0050317374305F31
	.8byte 0x0050326E64305F31
	.8byte 0x0050337264305F31
	.8byte 0x50746F6D61647031
	.8byte 0x0050317374315F31
	.8byte 0x0050326E64315F31
	.8byte 0x0050337264315F31
.endobj lbl_80498F58
.balign 8
.obj lbl_80498F98, local
	.8byte 0x50746F6D61643131
	.8byte 0x0000503173747433
	.8byte 0x000050326E647433
	.8byte 0x0000503372647433
.endobj lbl_80498F98
.balign 8
.obj lbl_80498FB8, local
	.8byte 0x50746F6D61647039
	.8byte 0x0000503173747431
	.8byte 0x000050326E647431
	.8byte 0x0000503372647431
.endobj lbl_80498FB8
.balign 4
.obj lbl_80498FD8, local
	.asciz "disp member err"
.endobj lbl_80498FD8
.balign 4
.obj lbl_80498FE8, local
	.asciz "result_final.blo"
.endobj lbl_80498FE8
.balign 4
.obj lbl_80498FFC, local
	.asciz "result_final.bck"
.endobj lbl_80498FFC
.balign 4
.obj lbl_80499010, local
	.asciz "result_final.bpk"
.endobj lbl_80499010
.balign 4
.obj lbl_80499024, local
	.asciz "result_final.btk"
.endobj lbl_80499024
.balign 4
.obj lbl_80499038, local
	.asciz "result_final.brk"
.endobj lbl_80499038
.balign 8
.obj lbl_80499050, local
	.8byte 0x00383435325F3030
	.8byte 0x00383435335F3030
	.8byte 0x00383435345F3030
	.8byte 0x00383435355F3030
	.8byte 0x00383435365F3030
	.8byte 0x00383435375F3030
	.8byte 0x00383435385F3030
	.8byte 0x00383435395F3030
	.8byte 0x00383436305F3030
	.8byte 0x00383436315F3030
	.8byte 0x00383436325F3030
	.8byte 0x00383436335F3030
	.8byte 0x00383436345F3030
	.8byte 0x00383436355F3030
	.8byte 0x00383436365F3030
	.8byte 0x00383436375F3030
.endobj lbl_80499050
.balign 8
.obj lbl_804990D0, local
	.8byte 0x0050317374305F31
	.8byte 0x0050326E64305F31
	.8byte 0x0050337264305F31
.endobj lbl_804990D0
.balign 8
.obj lbl_804990E8, local
	.8byte 0x0050317374315F31
	.8byte 0x0050326E64315F31
	.8byte 0x0050337264315F31
.endobj lbl_804990E8
.balign 8
.obj lbl_80499100, local
	.8byte 0x0000503173747433
	.8byte 0x000050326E647433
	.8byte 0x0000503372647433
.endobj lbl_80499100
.balign 8
.obj lbl_80499118, local
	.8byte 0x0000503173747431
	.8byte 0x000050326E647431
	.8byte 0x0000503372647431
.endobj lbl_80499118
.balign 4
.obj lbl_80499130, local
	.asciz "result_final.szs"
.endobj lbl_80499130
.balign 4
.obj lbl_80499144, local
	.asciz "screenObj.h"
.endobj lbl_80499144
.balign 4
.obj lbl_80499150, local
	.asciz "P2Assert"
.endobj lbl_80499150

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q32kh6Screen16SceneFinalResult, global
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32kh6Screen16SceneFinalResultFv
	.4byte getOwnerID__Q32kh6Screen16SceneFinalResultFv
	.4byte getMemberID__Q32kh6Screen16SceneFinalResultFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q32kh6Screen16SceneFinalResultCFv
	.4byte doCreateObj__Q32kh6Screen16SceneFinalResultFP10JKRArchive
	.4byte doUserCallBackFunc__Q32kh6Screen16SceneFinalResultFPQ28Resource10MgrCommand
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
.endobj __vt__Q32kh6Screen16SceneFinalResult
.obj __vt__Q32kh6Screen14ObjFinalResult, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q32kh6Screen14ObjFinalResultFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q32kh6Screen14ObjFinalResultFv"
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
	.4byte doStart__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q32kh6Screen14ObjFinalResultFP10JKRArchive
	.4byte doUpdateFadein__Q32kh6Screen14ObjFinalResultFv
	.4byte doUpdateFadeinFinish__Q26Screen7ObjBaseFv
	.4byte doUpdate__Q32kh6Screen14ObjFinalResultFv
	.4byte doUpdateFinish__Q26Screen7ObjBaseFv
	.4byte doUpdateFadeout__Q32kh6Screen14ObjFinalResultFv
	.4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
	.4byte doDraw__Q32kh6Screen14ObjFinalResultFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
.endobj __vt__Q32kh6Screen14ObjFinalResult
.obj __vt__Q32kh6Screen15DispFinalResult, weak
	.4byte 0
	.4byte 0
	.4byte getSize__Q32kh6Screen15DispFinalResultFv
	.4byte getOwnerID__Q32kh6Screen15DispFinalResultFv
	.4byte getMemberID__Q32kh6Screen15DispFinalResultFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.endobj __vt__Q32kh6Screen15DispFinalResult

.section .bss  # 0x804EFC20 - 0x8051467C
# khFinalResult.cpp
.comm msVal__Q32kh6Screen14ObjFinalResult, 0x24, 4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520198, local
	.asciz "failed"
.endobj lbl_80520198
.balign 4
.obj lbl_805201A0, local
	.float 0.0
.endobj lbl_805201A0
.obj lbl_805201A4, local
	.float 2.0
.endobj lbl_805201A4
.balign 8
.obj lbl_805201A8, local
	.8byte 0x4330000000000000
.endobj lbl_805201A8
.obj lbl_805201B0, local
	.float 0.5
.endobj lbl_805201B0
.obj lbl_805201B4, local
	.float 1.0
.endobj lbl_805201B4
.obj lbl_805201B8, local
	.float 99.0
.endobj lbl_805201B8
.obj lbl_805201BC, local
	.float 59.0
.endobj lbl_805201BC
.obj lbl_805201C0, local
	.float 40.0
.endobj lbl_805201C0
.obj lbl_805201C4, local
	.float 32768.0
.endobj lbl_805201C4
.obj lbl_805201C8, local
	.float 49.0
.endobj lbl_805201C8
.obj lbl_805201CC, local
	.float 3.0
.endobj lbl_805201CC
.obj lbl_805201D0, local
	.float 4.0
.endobj lbl_805201D0
.balign 8
.obj lbl_805201D8, local
	.8byte 0x4330000080000000
.endobj lbl_805201D8
.balign 4
.obj lbl_805201E0, local
	.asciz ""
.endobj lbl_805201E0
.balign 4
.obj lbl_805201E4, local
	.float 0.05
.endobj lbl_805201E4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q32kh6Screen15DispFinalResultFPQ32kh6Screen15TotalResultDataQ42kh6Screen15DispFinalResult10ResultTypeP7JKRHeap, global
/* 8040C1E8 00409128  3D 00 80 4B */	lis r8, __vt__Q32og6Screen14DispMemberBase@ha
/* 8040C1EC 0040912C  3C E0 80 4F */	lis r7, __vt__Q32kh6Screen15DispFinalResult@ha
/* 8040C1F0 00409130  38 08 11 48 */	addi r0, r8, __vt__Q32og6Screen14DispMemberBase@l
/* 8040C1F4 00409134  39 00 00 00 */	li r8, 0
/* 8040C1F8 00409138  90 03 00 00 */	stw r0, 0(r3)
/* 8040C1FC 0040913C  38 07 B2 C8 */	addi r0, r7, __vt__Q32kh6Screen15DispFinalResult@l
/* 8040C200 00409140  91 03 00 04 */	stw r8, 4(r3)
/* 8040C204 00409144  90 03 00 00 */	stw r0, 0(r3)
/* 8040C208 00409148  90 83 00 08 */	stw r4, 8(r3)
/* 8040C20C 0040914C  90 A3 00 0C */	stw r5, 0xc(r3)
/* 8040C210 00409150  91 03 00 10 */	stw r8, 0x10(r3)
/* 8040C214 00409154  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8040C218 00409158  4E 80 00 20 */	blr 
.endfn __ct__Q32kh6Screen15DispFinalResultFPQ32kh6Screen15TotalResultDataQ42kh6Screen15DispFinalResult10ResultTypeP7JKRHeap

.fn __ct__Q32kh6Screen14ObjFinalResultFv, global
/* 8040C21C 0040915C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8040C220 00409160  7C 08 02 A6 */	mflr r0
/* 8040C224 00409164  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040C228 00409168  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8040C22C 0040916C  7C 7F 1B 78 */	mr r31, r3
/* 8040C230 00409170  48 04 78 B9 */	bl __ct__Q26Screen7ObjBaseFv
/* 8040C234 00409174  3C 80 80 4F */	lis r4, __vt__Q32kh6Screen14ObjFinalResult@ha
/* 8040C238 00409178  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040C23C 0040917C  38 84 B2 50 */	addi r4, r4, __vt__Q32kh6Screen14ObjFinalResult@l
/* 8040C240 00409180  38 00 FF FF */	li r0, -1
/* 8040C244 00409184  90 9F 00 00 */	stw r4, 0(r31)
/* 8040C248 00409188  38 84 00 10 */	addi r4, r4, 0x10
/* 8040C24C 0040918C  38 E0 00 00 */	li r7, 0
/* 8040C250 00409190  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040C254 00409194  90 9F 00 18 */	stw r4, 0x18(r31)
/* 8040C258 00409198  38 A0 00 01 */	li r5, 1
/* 8040C25C 0040919C  38 C3 41 88 */	addi r6, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040C260 004091A0  38 80 00 03 */	li r4, 3
/* 8040C264 004091A4  90 1F 01 24 */	stw r0, 0x124(r31)
/* 8040C268 004091A8  38 00 00 FF */	li r0, 0xff
/* 8040C26C 004091AC  7F E3 FB 78 */	mr r3, r31
/* 8040C270 004091B0  90 FF 00 3C */	stw r7, 0x3c(r31)
/* 8040C274 004091B4  90 FF 00 54 */	stw r7, 0x54(r31)
/* 8040C278 004091B8  90 FF 00 50 */	stw r7, 0x50(r31)
/* 8040C27C 004091BC  90 FF 00 4C */	stw r7, 0x4c(r31)
/* 8040C280 004091C0  90 FF 00 48 */	stw r7, 0x48(r31)
/* 8040C284 004091C4  90 FF 00 44 */	stw r7, 0x44(r31)
/* 8040C288 004091C8  90 FF 00 40 */	stw r7, 0x40(r31)
/* 8040C28C 004091CC  90 FF 00 60 */	stw r7, 0x60(r31)
/* 8040C290 004091D0  90 FF 00 5C */	stw r7, 0x5c(r31)
/* 8040C294 004091D4  90 FF 00 58 */	stw r7, 0x58(r31)
/* 8040C298 004091D8  90 FF 00 64 */	stw r7, 0x64(r31)
/* 8040C29C 004091DC  90 FF 00 68 */	stw r7, 0x68(r31)
/* 8040C2A0 004091E0  D0 1F 00 88 */	stfs f0, 0x88(r31)
/* 8040C2A4 004091E4  D0 1F 00 84 */	stfs f0, 0x84(r31)
/* 8040C2A8 004091E8  D0 1F 00 80 */	stfs f0, 0x80(r31)
/* 8040C2AC 004091EC  D0 1F 00 7C */	stfs f0, 0x7c(r31)
/* 8040C2B0 004091F0  D0 1F 00 78 */	stfs f0, 0x78(r31)
/* 8040C2B4 004091F4  D0 1F 00 74 */	stfs f0, 0x74(r31)
/* 8040C2B8 004091F8  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 8040C2BC 004091FC  D0 1F 00 6C */	stfs f0, 0x6c(r31)
/* 8040C2C0 00409200  90 FF 00 8C */	stw r7, 0x8c(r31)
/* 8040C2C4 00409204  90 FF 00 9C */	stw r7, 0x9c(r31)
/* 8040C2C8 00409208  90 FF 00 98 */	stw r7, 0x98(r31)
/* 8040C2CC 0040920C  90 FF 00 94 */	stw r7, 0x94(r31)
/* 8040C2D0 00409210  90 FF 00 90 */	stw r7, 0x90(r31)
/* 8040C2D4 00409214  90 FF 00 D0 */	stw r7, 0xd0(r31)
/* 8040C2D8 00409218  90 FF 00 C0 */	stw r7, 0xc0(r31)
/* 8040C2DC 0040921C  90 FF 00 B0 */	stw r7, 0xb0(r31)
/* 8040C2E0 00409220  90 FF 00 A0 */	stw r7, 0xa0(r31)
/* 8040C2E4 00409224  90 FF 01 10 */	stw r7, 0x110(r31)
/* 8040C2E8 00409228  90 FF 01 00 */	stw r7, 0x100(r31)
/* 8040C2EC 0040922C  90 FF 00 F0 */	stw r7, 0xf0(r31)
/* 8040C2F0 00409230  90 FF 00 E0 */	stw r7, 0xe0(r31)
/* 8040C2F4 00409234  90 FF 00 D4 */	stw r7, 0xd4(r31)
/* 8040C2F8 00409238  90 FF 00 C4 */	stw r7, 0xc4(r31)
/* 8040C2FC 0040923C  90 FF 00 B4 */	stw r7, 0xb4(r31)
/* 8040C300 00409240  90 FF 00 A4 */	stw r7, 0xa4(r31)
/* 8040C304 00409244  90 FF 01 14 */	stw r7, 0x114(r31)
/* 8040C308 00409248  90 FF 01 04 */	stw r7, 0x104(r31)
/* 8040C30C 0040924C  90 FF 00 F4 */	stw r7, 0xf4(r31)
/* 8040C310 00409250  90 FF 00 E4 */	stw r7, 0xe4(r31)
/* 8040C314 00409254  90 FF 00 D8 */	stw r7, 0xd8(r31)
/* 8040C318 00409258  90 FF 00 C8 */	stw r7, 0xc8(r31)
/* 8040C31C 0040925C  90 FF 00 B8 */	stw r7, 0xb8(r31)
/* 8040C320 00409260  90 FF 00 A8 */	stw r7, 0xa8(r31)
/* 8040C324 00409264  90 FF 01 18 */	stw r7, 0x118(r31)
/* 8040C328 00409268  90 FF 01 08 */	stw r7, 0x108(r31)
/* 8040C32C 0040926C  90 FF 00 F8 */	stw r7, 0xf8(r31)
/* 8040C330 00409270  90 FF 00 E8 */	stw r7, 0xe8(r31)
/* 8040C334 00409274  90 FF 00 DC */	stw r7, 0xdc(r31)
/* 8040C338 00409278  90 FF 00 CC */	stw r7, 0xcc(r31)
/* 8040C33C 0040927C  90 FF 00 BC */	stw r7, 0xbc(r31)
/* 8040C340 00409280  90 FF 00 AC */	stw r7, 0xac(r31)
/* 8040C344 00409284  90 FF 01 1C */	stw r7, 0x11c(r31)
/* 8040C348 00409288  90 FF 01 0C */	stw r7, 0x10c(r31)
/* 8040C34C 0040928C  90 FF 00 FC */	stw r7, 0xfc(r31)
/* 8040C350 00409290  90 FF 00 EC */	stw r7, 0xec(r31)
/* 8040C354 00409294  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 8040C358 00409298  98 FF 01 24 */	stb r7, 0x124(r31)
/* 8040C35C 0040929C  98 FF 01 25 */	stb r7, 0x125(r31)
/* 8040C360 004092A0  98 FF 01 26 */	stb r7, 0x126(r31)
/* 8040C364 004092A4  98 FF 01 27 */	stb r7, 0x127(r31)
/* 8040C368 004092A8  D0 1F 01 28 */	stfs f0, 0x128(r31)
/* 8040C36C 004092AC  D0 1F 01 2C */	stfs f0, 0x12c(r31)
/* 8040C370 004092B0  90 BF 01 30 */	stw r5, 0x130(r31)
/* 8040C374 004092B4  80 A6 00 04 */	lwz r5, 4(r6)
/* 8040C378 004092B8  90 BF 01 34 */	stw r5, 0x134(r31)
/* 8040C37C 004092BC  90 FF 01 38 */	stw r7, 0x138(r31)
/* 8040C380 004092C0  80 A6 00 08 */	lwz r5, 8(r6)
/* 8040C384 004092C4  90 BF 01 3C */	stw r5, 0x13c(r31)
/* 8040C388 004092C8  90 9F 01 48 */	stw r4, 0x148(r31)
/* 8040C38C 004092CC  98 1F 01 4D */	stb r0, 0x14d(r31)
/* 8040C390 004092D0  98 1F 01 4C */	stb r0, 0x14c(r31)
/* 8040C394 004092D4  98 FF 01 4E */	stb r7, 0x14e(r31)
/* 8040C398 004092D8  88 1F 01 4E */	lbz r0, 0x14e(r31)
/* 8040C39C 004092DC  60 00 00 08 */	ori r0, r0, 8
/* 8040C3A0 004092E0  98 1F 01 4E */	stb r0, 0x14e(r31)
/* 8040C3A4 004092E4  98 FF 01 4F */	stb r7, 0x14f(r31)
/* 8040C3A8 004092E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8040C3AC 004092EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8040C3B0 004092F0  7C 08 03 A6 */	mtlr r0
/* 8040C3B4 004092F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8040C3B8 004092F8  4E 80 00 20 */	blr 
.endfn __ct__Q32kh6Screen14ObjFinalResultFv

.fn doCreate__Q32kh6Screen14ObjFinalResultFP10JKRArchive, global
/* 8040C3BC 004092FC  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8040C3C0 00409300  7C 08 02 A6 */	mflr r0
/* 8040C3C4 00409304  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8040C3C8 00409308  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8040C3CC 0040930C  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8040C3D0 00409310  BE E1 00 6C */	stmw r23, 0x6c(r1)
/* 8040C3D4 00409314  3C A0 80 4A */	lis r5, lbl_80498CD8@ha
/* 8040C3D8 00409318  7C 7F 1B 78 */	mr r31, r3
/* 8040C3DC 0040931C  7C 9A 23 78 */	mr r26, r4
/* 8040C3E0 00409320  3B A5 8C D8 */	addi r29, r5, lbl_80498CD8@l
/* 8040C3E4 00409324  48 04 7B C5 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8040C3E8 00409328  3C A0 52 53 */	lis r5, 0x52534C54@ha
/* 8040C3EC 0040932C  38 80 4B 48 */	li r4, 0x4b48
/* 8040C3F0 00409330  38 C5 4C 54 */	addi r6, r5, 0x52534C54@l
/* 8040C3F4 00409334  38 A0 46 5F */	li r5, 0x465f
/* 8040C3F8 00409338  4B F0 2F 25 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8040C3FC 0040933C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8040C400 00409340  40 82 00 18 */	bne .L_8040C418
/* 8040C404 00409344  38 7D 00 00 */	addi r3, r29, 0
/* 8040C408 00409348  38 BD 03 00 */	addi r5, r29, 0x300
/* 8040C40C 0040934C  38 80 00 D6 */	li r4, 0xd6
/* 8040C410 00409350  4C C6 31 82 */	crclr 6
/* 8040C414 00409354  4B C1 E2 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8040C418:
/* 8040C418 00409358  7F E3 FB 78 */	mr r3, r31
/* 8040C41C 0040935C  48 04 7B 8D */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8040C420 00409360  7C 7E 1B 78 */	mr r30, r3
/* 8040C424 00409364  38 60 01 48 */	li r3, 0x148
/* 8040C428 00409368  4B C1 7A 7D */	bl __nw__FUl
/* 8040C42C 0040936C  7C 60 1B 79 */	or. r0, r3, r3
/* 8040C430 00409370  41 82 00 0C */	beq .L_8040C43C
/* 8040C434 00409374  48 02 89 79 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8040C438 00409378  7C 60 1B 78 */	mr r0, r3
.L_8040C43C:
/* 8040C43C 0040937C  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 8040C440 00409380  7F 46 D3 78 */	mr r6, r26
/* 8040C444 00409384  38 9D 03 10 */	addi r4, r29, 0x310
/* 8040C448 00409388  3C A0 01 04 */	lis r5, 0x104
/* 8040C44C 0040938C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C450 00409390  4B C3 31 D5 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8040C454 00409394  7F 44 D3 78 */	mr r4, r26
/* 8040C458 00409398  38 7D 03 24 */	addi r3, r29, 0x324
/* 8040C45C 0040939C  4B C1 6B BD */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 8040C460 004093A0  7C 78 1B 78 */	mr r24, r3
/* 8040C464 004093A4  4B C3 B4 B9 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C468 004093A8  90 7F 00 40 */	stw r3, 0x40(r31)
/* 8040C46C 004093AC  7F 03 C3 78 */	mr r3, r24
/* 8040C470 004093B0  4B C3 B4 AD */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C474 004093B4  90 7F 00 44 */	stw r3, 0x44(r31)
/* 8040C478 004093B8  7F 03 C3 78 */	mr r3, r24
/* 8040C47C 004093BC  4B C3 B4 A1 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C480 004093C0  90 7F 00 48 */	stw r3, 0x48(r31)
/* 8040C484 004093C4  7F 03 C3 78 */	mr r3, r24
/* 8040C488 004093C8  4B C3 B4 95 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C48C 004093CC  90 7F 00 4C */	stw r3, 0x4c(r31)
/* 8040C490 004093D0  7F 03 C3 78 */	mr r3, r24
/* 8040C494 004093D4  4B C3 B4 89 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C498 004093D8  90 7F 00 50 */	stw r3, 0x50(r31)
/* 8040C49C 004093DC  7F 03 C3 78 */	mr r3, r24
/* 8040C4A0 004093E0  4B C3 B4 7D */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C4A4 004093E4  90 7F 00 54 */	stw r3, 0x54(r31)
/* 8040C4A8 004093E8  7F 44 D3 78 */	mr r4, r26
/* 8040C4AC 004093EC  38 7D 03 38 */	addi r3, r29, 0x338
/* 8040C4B0 004093F0  4B C1 6B 69 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 8040C4B4 004093F4  7C 78 1B 78 */	mr r24, r3
/* 8040C4B8 004093F8  4B C3 B4 65 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C4BC 004093FC  90 7F 00 58 */	stw r3, 0x58(r31)
/* 8040C4C0 00409400  7F 03 C3 78 */	mr r3, r24
/* 8040C4C4 00409404  4B C3 B4 59 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C4C8 00409408  90 7F 00 5C */	stw r3, 0x5c(r31)
/* 8040C4CC 0040940C  7F 03 C3 78 */	mr r3, r24
/* 8040C4D0 00409410  4B C3 B4 4D */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C4D4 00409414  90 7F 00 60 */	stw r3, 0x60(r31)
/* 8040C4D8 00409418  7F 44 D3 78 */	mr r4, r26
/* 8040C4DC 0040941C  38 7D 03 4C */	addi r3, r29, 0x34c
/* 8040C4E0 00409420  4B C1 6B 39 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 8040C4E4 00409424  4B C3 B4 39 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C4E8 00409428  90 7F 00 64 */	stw r3, 0x64(r31)
/* 8040C4EC 0040942C  7F 44 D3 78 */	mr r4, r26
/* 8040C4F0 00409430  38 7D 03 60 */	addi r3, r29, 0x360
/* 8040C4F4 00409434  4B C1 6B 25 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 8040C4F8 00409438  4B C3 B4 25 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 8040C4FC 0040943C  90 7F 00 68 */	stw r3, 0x68(r31)
/* 8040C500 00409440  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 8040C504 00409444  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8040C508 00409448  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C50C 0040944C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8040C510 00409450  7D 89 03 A6 */	mtctr r12
/* 8040C514 00409454  4E 80 04 21 */	bctrl 
/* 8040C518 00409458  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8040C51C 0040945C  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8040C520 00409460  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C524 00409464  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8040C528 00409468  7D 89 03 A6 */	mtctr r12
/* 8040C52C 0040946C  4E 80 04 21 */	bctrl 
/* 8040C530 00409470  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 8040C534 00409474  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8040C538 00409478  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C53C 0040947C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8040C540 00409480  7D 89 03 A6 */	mtctr r12
/* 8040C544 00409484  4E 80 04 21 */	bctrl 
/* 8040C548 00409488  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C54C 0040948C  3C 80 73 74 */	lis r4, 0x73746172@ha
/* 8040C550 00409490  38 C4 61 72 */	addi r6, r4, 0x73746172@l
/* 8040C554 00409494  38 A0 00 4E */	li r5, 0x4e
/* 8040C558 00409498  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C55C 0040949C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C560 004094A0  7D 89 03 A6 */	mtctr r12
/* 8040C564 004094A4  4E 80 04 21 */	bctrl 
/* 8040C568 004094A8  7C 60 1B 78 */	mr r0, r3
/* 8040C56C 004094AC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C570 004094B0  3C 80 61 62 */	lis r4, 0x6162746E@ha
/* 8040C574 004094B4  38 A0 00 4E */	li r5, 0x4e
/* 8040C578 004094B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C57C 004094BC  7C 18 03 78 */	mr r24, r0
/* 8040C580 004094C0  38 C4 74 6E */	addi r6, r4, 0x6162746E@l
/* 8040C584 004094C4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C588 004094C8  7D 89 03 A6 */	mtctr r12
/* 8040C58C 004094CC  4E 80 04 21 */	bctrl 
/* 8040C590 004094D0  7C 60 1B 78 */	mr r0, r3
/* 8040C594 004094D4  7F 03 C3 78 */	mr r3, r24
/* 8040C598 004094D8  81 98 00 00 */	lwz r12, 0(r24)
/* 8040C59C 004094DC  7C 18 03 78 */	mr r24, r0
/* 8040C5A0 004094E0  80 9F 00 40 */	lwz r4, 0x40(r31)
/* 8040C5A4 004094E4  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8040C5A8 004094E8  7D 89 03 A6 */	mtctr r12
/* 8040C5AC 004094EC  4E 80 04 21 */	bctrl 
/* 8040C5B0 004094F0  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C5B4 004094F4  3C 80 69 74 */	lis r4, 0x69746C65@ha
/* 8040C5B8 004094F8  38 C4 6C 65 */	addi r6, r4, 0x69746C65@l
/* 8040C5BC 004094FC  38 A0 4E 74 */	li r5, 0x4e74
/* 8040C5C0 00409500  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C5C4 00409504  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C5C8 00409508  7D 89 03 A6 */	mtctr r12
/* 8040C5CC 0040950C  4E 80 04 21 */	bctrl 
/* 8040C5D0 00409510  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C5D4 00409514  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 8040C5D8 00409518  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8040C5DC 0040951C  7D 89 03 A6 */	mtctr r12
/* 8040C5E0 00409520  4E 80 04 21 */	bctrl 
/* 8040C5E4 00409524  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C5E8 00409528  3C 80 6D 61 */	lis r4, 0x6D61696E@ha
/* 8040C5EC 0040952C  38 C4 69 6E */	addi r6, r4, 0x6D61696E@l
/* 8040C5F0 00409530  38 A0 00 4E */	li r5, 0x4e
/* 8040C5F4 00409534  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C5F8 00409538  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C5FC 0040953C  7D 89 03 A6 */	mtctr r12
/* 8040C600 00409540  4E 80 04 21 */	bctrl 
/* 8040C604 00409544  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C608 00409548  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 8040C60C 0040954C  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8040C610 00409550  7D 89 03 A6 */	mtctr r12
/* 8040C614 00409554  4E 80 04 21 */	bctrl 
/* 8040C618 00409558  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C61C 0040955C  3C 80 49 43 */	lis r4, 0x49434F4E@ha
/* 8040C620 00409560  38 C4 4F 4E */	addi r6, r4, 0x49434F4E@l
/* 8040C624 00409564  38 A0 00 4E */	li r5, 0x4e
/* 8040C628 00409568  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C62C 0040956C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C630 00409570  7D 89 03 A6 */	mtctr r12
/* 8040C634 00409574  4E 80 04 21 */	bctrl 
/* 8040C638 00409578  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C63C 0040957C  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 8040C640 00409580  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8040C644 00409584  7D 89 03 A6 */	mtctr r12
/* 8040C648 00409588  4E 80 04 21 */	bctrl 
/* 8040C64C 0040958C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C650 00409590  3C 80 65 74 */	lis r4, 0x65746572@ha
/* 8040C654 00409594  38 C4 65 72 */	addi r6, r4, 0x65746572@l
/* 8040C658 00409598  38 A0 4E 6D */	li r5, 0x4e6d
/* 8040C65C 0040959C  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C660 004095A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C664 004095A4  7D 89 03 A6 */	mtctr r12
/* 8040C668 004095A8  4E 80 04 21 */	bctrl 
/* 8040C66C 004095AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C670 004095B0  80 9F 00 50 */	lwz r4, 0x50(r31)
/* 8040C674 004095B4  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8040C678 004095B8  7D 89 03 A6 */	mtctr r12
/* 8040C67C 004095BC  4E 80 04 21 */	bctrl 
/* 8040C680 004095C0  7F 03 C3 78 */	mr r3, r24
/* 8040C684 004095C4  80 9F 00 54 */	lwz r4, 0x54(r31)
/* 8040C688 004095C8  81 98 00 00 */	lwz r12, 0(r24)
/* 8040C68C 004095CC  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8040C690 004095D0  7D 89 03 A6 */	mtctr r12
/* 8040C694 004095D4  4E 80 04 21 */	bctrl 
/* 8040C698 004095D8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C69C 004095DC  3C 80 73 74 */	lis r4, 0x73746172@ha
/* 8040C6A0 004095E0  38 C4 61 72 */	addi r6, r4, 0x73746172@l
/* 8040C6A4 004095E4  38 A0 00 4E */	li r5, 0x4e
/* 8040C6A8 004095E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C6AC 004095EC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C6B0 004095F0  7D 89 03 A6 */	mtctr r12
/* 8040C6B4 004095F4  4E 80 04 21 */	bctrl 
/* 8040C6B8 004095F8  80 9F 00 58 */	lwz r4, 0x58(r31)
/* 8040C6BC 004095FC  4B FF EE 25 */	bl setMatAnm__Q22kh6ScreenFP7J2DPaneP10J2DAnmBase
/* 8040C6C0 00409600  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C6C4 00409604  3C A0 6C 65 */	lis r5, 0x6C656374@ha
/* 8040C6C8 00409608  3C 80 00 4E */	lis r4, 0x004E7365@ha
/* 8040C6CC 0040960C  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C6D0 00409610  38 C5 63 74 */	addi r6, r5, 0x6C656374@l
/* 8040C6D4 00409614  38 A4 73 65 */	addi r5, r4, 0x004E7365@l
/* 8040C6D8 00409618  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C6DC 0040961C  7D 89 03 A6 */	mtctr r12
/* 8040C6E0 00409620  4E 80 04 21 */	bctrl 
/* 8040C6E4 00409624  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 8040C6E8 00409628  4B FF ED F9 */	bl setMatAnm__Q22kh6ScreenFP7J2DPaneP10J2DAnmBase
/* 8040C6EC 0040962C  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 8040C6F0 00409630  7F 03 C3 78 */	mr r3, r24
/* 8040C6F4 00409634  4B FF ED ED */	bl setMatAnm__Q22kh6ScreenFP7J2DPaneP10J2DAnmBase
/* 8040C6F8 00409638  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C6FC 0040963C  80 9F 00 64 */	lwz r4, 0x64(r31)
/* 8040C700 00409640  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C704 00409644  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8040C708 00409648  7D 89 03 A6 */	mtctr r12
/* 8040C70C 0040964C  4E 80 04 21 */	bctrl 
/* 8040C710 00409650  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C714 00409654  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8040C718 00409658  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C71C 0040965C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8040C720 00409660  7D 89 03 A6 */	mtctr r12
/* 8040C724 00409664  4E 80 04 21 */	bctrl 
/* 8040C728 00409668  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C72C 0040966C  3C 80 49 43 */	lis r4, 0x49434F4E@ha
/* 8040C730 00409670  38 C4 4F 4E */	addi r6, r4, 0x49434F4E@l
/* 8040C734 00409674  38 A0 00 4E */	li r5, 0x4e
/* 8040C738 00409678  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C73C 0040967C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C740 00409680  7D 89 03 A6 */	mtctr r12
/* 8040C744 00409684  4E 80 04 21 */	bctrl 
/* 8040C748 00409688  4B FF EF A9 */	bl setInfAlpha__Q22kh6ScreenFP7J2DPane
/* 8040C74C 0040968C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040C750 00409690  3A E0 00 00 */	li r23, 0
/* 8040C754 00409694  3B 03 41 88 */	addi r24, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040C758 00409698  3F 20 65 6C */	lis r25, 0x656C3030@ha
/* 8040C75C 0040969C  3F 80 6F 6E */	lis r28, 0x6f6e
/* 8040C760 004096A0  3F 60 00 4E */	lis r27, 0x4e
.L_8040C764:
/* 8040C764 004096A4  7E E5 BB 78 */	mr r5, r23
/* 8040C768 004096A8  38 99 30 30 */	addi r4, r25, 0x656C3030@l
/* 8040C76C 004096AC  38 60 4E 73 */	li r3, 0x4e73
/* 8040C770 004096B0  4B FF EC 85 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040C774 004096B4  7C 65 1B 78 */	mr r5, r3
/* 8040C778 004096B8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C77C 004096BC  7C 86 23 78 */	mr r6, r4
/* 8040C780 004096C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C784 004096C4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C788 004096C8  7D 89 03 A6 */	mtctr r12
/* 8040C78C 004096CC  4E 80 04 21 */	bctrl 
/* 8040C790 004096D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C794 004096D4  88 98 00 21 */	lbz r4, 0x21(r24)
/* 8040C798 004096D8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040C79C 004096DC  7D 89 03 A6 */	mtctr r12
/* 8040C7A0 004096E0  4E 80 04 21 */	bctrl 
/* 8040C7A4 004096E4  7E E5 BB 78 */	mr r5, r23
/* 8040C7A8 004096E8  38 9C 30 30 */	addi r4, r28, 0x3030
/* 8040C7AC 004096EC  38 7B 69 63 */	addi r3, r27, 0x6963
/* 8040C7B0 004096F0  4B FF EC 45 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040C7B4 004096F4  7C 65 1B 78 */	mr r5, r3
/* 8040C7B8 004096F8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C7BC 004096FC  7C 86 23 78 */	mr r6, r4
/* 8040C7C0 00409700  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C7C4 00409704  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C7C8 00409708  7D 89 03 A6 */	mtctr r12
/* 8040C7CC 0040970C  4E 80 04 21 */	bctrl 
/* 8040C7D0 00409710  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C7D4 00409714  88 98 00 21 */	lbz r4, 0x21(r24)
/* 8040C7D8 00409718  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040C7DC 0040971C  7D 89 03 A6 */	mtctr r12
/* 8040C7E0 00409720  4E 80 04 21 */	bctrl 
/* 8040C7E4 00409724  3A F7 00 01 */	addi r23, r23, 1
/* 8040C7E8 00409728  2C 17 00 07 */	cmpwi r23, 7
/* 8040C7EC 0040972C  40 81 FF 78 */	ble .L_8040C764
/* 8040C7F0 00409730  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 8040C7F4 00409734  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8040C7F8 00409738  28 03 00 00 */	cmplwi r3, 0
/* 8040C7FC 0040973C  41 82 00 08 */	beq .L_8040C804
/* 8040C800 00409740  4B C1 6D A5 */	bl becomeCurrentHeap__7JKRHeapFv
.L_8040C804:
/* 8040C804 00409744  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C808 00409748  4B EF D5 F9 */	bl setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
/* 8040C80C 0040974C  3C C0 61 33 */	lis r6, 0x6133646C@ha
/* 8040C810 00409750  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8040C814 00409754  7F 43 D3 78 */	mr r3, r26
/* 8040C818 00409758  38 A0 6F 74 */	li r5, 0x6f74
/* 8040C81C 0040975C  38 C6 64 6C */	addi r6, r6, 0x6133646C@l
/* 8040C820 00409760  4B F2 09 15 */	bl setCallBack_3DStick__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8040C824 00409764  7C 60 1B 78 */	mr r0, r3
/* 8040C828 00409768  38 60 00 08 */	li r3, 8
/* 8040C82C 0040976C  7C 17 03 78 */	mr r23, r0
/* 8040C830 00409770  4B C1 76 75 */	bl __nw__FUl
/* 8040C834 00409774  7C 60 1B 79 */	or. r0, r3, r3
/* 8040C838 00409778  41 82 00 10 */	beq .L_8040C848
/* 8040C83C 0040977C  7E E4 BB 78 */	mr r4, r23
/* 8040C840 00409780  4B F2 0B 2D */	bl __ct__Q32og6Screen12StickAnimMgrFPQ32og6Screen16CallBack_Picture
/* 8040C844 00409784  7C 60 1B 78 */	mr r0, r3
.L_8040C848:
/* 8040C848 00409788  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 8040C84C 0040978C  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 8040C850 00409790  4B F2 0C E9 */	bl stickUpDown__Q32og6Screen12StickAnimMgrFv
/* 8040C854 00409794  3C A0 6D 65 */	lis r5, 0x6D655F75@ha
/* 8040C858 00409798  3C 80 00 4E */	lis r4, 0x004E7961@ha
/* 8040C85C 0040979C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C860 004097A0  38 C5 5F 75 */	addi r6, r5, 0x6D655F75@l
/* 8040C864 004097A4  38 A4 79 61 */	addi r5, r4, 0x004E7961@l
/* 8040C868 004097A8  38 E0 00 10 */	li r7, 0x10
/* 8040C86C 004097AC  4B FF F2 79 */	bl create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
/* 8040C870 004097B0  90 7F 00 94 */	stw r3, 0x94(r31)
/* 8040C874 004097B4  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 8040C878 004097B8  4B FF F5 79 */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
/* 8040C87C 004097BC  3C A0 6D 65 */	lis r5, 0x6D655F6C@ha
/* 8040C880 004097C0  3C 80 00 4E */	lis r4, 0x004E7961@ha
/* 8040C884 004097C4  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C888 004097C8  38 C5 5F 6C */	addi r6, r5, 0x6D655F6C@l
/* 8040C88C 004097CC  38 A4 79 61 */	addi r5, r4, 0x004E7961@l
/* 8040C890 004097D0  38 E0 00 10 */	li r7, 0x10
/* 8040C894 004097D4  4B FF F2 51 */	bl create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
/* 8040C898 004097D8  90 7F 00 98 */	stw r3, 0x98(r31)
/* 8040C89C 004097DC  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8040C8A0 004097E0  4B FF F5 51 */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
/* 8040C8A4 004097E4  3C 80 61 33 */	lis r4, 0x6133646C@ha
/* 8040C8A8 004097E8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C8AC 004097EC  38 C4 64 6C */	addi r6, r4, 0x6133646C@l
/* 8040C8B0 004097F0  38 A0 6F 74 */	li r5, 0x6f74
/* 8040C8B4 004097F4  38 E0 00 10 */	li r7, 0x10
/* 8040C8B8 004097F8  4B FF F2 2D */	bl create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
/* 8040C8BC 004097FC  90 7F 00 90 */	stw r3, 0x90(r31)
/* 8040C8C0 00409800  3C 60 4E 5F */	lis r3, 0x4E5F3364@ha
/* 8040C8C4 00409804  38 C3 33 64 */	addi r6, r3, 0x4E5F3364@l
/* 8040C8C8 00409808  38 A0 00 00 */	li r5, 0
/* 8040C8CC 0040980C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C8D0 00409810  81 83 00 00 */	lwz r12, 0(r3)
/* 8040C8D4 00409814  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040C8D8 00409818  7D 89 03 A6 */	mtctr r12
/* 8040C8DC 0040981C  4E 80 04 21 */	bctrl 
/* 8040C8E0 00409820  7C 64 1B 78 */	mr r4, r3
/* 8040C8E4 00409824  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 8040C8E8 00409828  4B FF F4 31 */	bl add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
/* 8040C8EC 0040982C  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 8040C8F0 00409830  4B FF F5 01 */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
/* 8040C8F4 00409834  3C 80 61 62 */	lis r4, 0x6162746E@ha
/* 8040C8F8 00409838  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C8FC 0040983C  38 C4 74 6E */	addi r6, r4, 0x6162746E@l
/* 8040C900 00409840  38 A0 00 4E */	li r5, 0x4e
/* 8040C904 00409844  38 E0 00 10 */	li r7, 0x10
/* 8040C908 00409848  4B FF F1 DD */	bl create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
/* 8040C90C 0040984C  90 7F 00 9C */	stw r3, 0x9c(r31)
/* 8040C910 00409850  80 7F 00 9C */	lwz r3, 0x9c(r31)
/* 8040C914 00409854  4B FF F4 DD */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
/* 8040C918 00409858  C8 FD 02 80 */	lfd f7, 0x280(r29)
/* 8040C91C 0040985C  7F F8 FB 78 */	mr r24, r31
/* 8040C920 00409860  C8 DD 02 88 */	lfd f6, 0x288(r29)
/* 8040C924 00409864  3B 21 00 20 */	addi r25, r1, 0x20
/* 8040C928 00409868  C8 BD 02 90 */	lfd f5, 0x290(r29)
/* 8040C92C 0040986C  3A E0 00 00 */	li r23, 0
/* 8040C930 00409870  C8 9D 02 98 */	lfd f4, 0x298(r29)
/* 8040C934 00409874  C8 7D 02 A0 */	lfd f3, 0x2a0(r29)
/* 8040C938 00409878  C8 5D 02 A8 */	lfd f2, 0x2a8(r29)
/* 8040C93C 0040987C  C8 3D 02 B0 */	lfd f1, 0x2b0(r29)
/* 8040C940 00409880  C8 1D 02 B8 */	lfd f0, 0x2b8(r29)
/* 8040C944 00409884  D8 E1 00 20 */	stfd f7, 0x20(r1)
/* 8040C948 00409888  D8 C1 00 28 */	stfd f6, 0x28(r1)
/* 8040C94C 0040988C  D8 A1 00 30 */	stfd f5, 0x30(r1)
/* 8040C950 00409890  D8 81 00 38 */	stfd f4, 0x38(r1)
/* 8040C954 00409894  D8 61 00 40 */	stfd f3, 0x40(r1)
/* 8040C958 00409898  D8 41 00 48 */	stfd f2, 0x48(r1)
/* 8040C95C 0040989C  D8 21 00 50 */	stfd f1, 0x50(r1)
/* 8040C960 004098A0  D8 01 00 58 */	stfd f0, 0x58(r1)
.L_8040C964:
/* 8040C964 004098A4  93 41 00 08 */	stw r26, 8(r1)
/* 8040C968 004098A8  38 F8 00 E0 */	addi r7, r24, 0xe0
/* 8040C96C 004098AC  80 B9 00 00 */	lwz r5, 0(r25)
/* 8040C970 004098B0  39 00 00 09 */	li r8, 9
/* 8040C974 004098B4  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C978 004098B8  39 20 00 00 */	li r9, 0
/* 8040C97C 004098BC  80 D9 00 04 */	lwz r6, 4(r25)
/* 8040C980 004098C0  39 40 00 00 */	li r10, 0
/* 8040C984 004098C4  4B EF FC 85 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 8040C988 004098C8  90 78 00 A0 */	stw r3, 0xa0(r24)
/* 8040C98C 004098CC  38 F8 00 F0 */	addi r7, r24, 0xf0
/* 8040C990 004098D0  80 B9 00 20 */	lwz r5, 0x20(r25)
/* 8040C994 004098D4  39 00 00 09 */	li r8, 9
/* 8040C998 004098D8  93 41 00 08 */	stw r26, 8(r1)
/* 8040C99C 004098DC  39 20 00 00 */	li r9, 0
/* 8040C9A0 004098E0  80 D9 00 24 */	lwz r6, 0x24(r25)
/* 8040C9A4 004098E4  39 40 00 00 */	li r10, 0
/* 8040C9A8 004098E8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040C9AC 004098EC  4B EF FC 5D */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 8040C9B0 004098F0  3A F7 00 01 */	addi r23, r23, 1
/* 8040C9B4 004098F4  90 78 00 B0 */	stw r3, 0xb0(r24)
/* 8040C9B8 004098F8  2C 17 00 04 */	cmpwi r23, 4
/* 8040C9BC 004098FC  3B 18 00 04 */	addi r24, r24, 4
/* 8040C9C0 00409900  3B 39 00 08 */	addi r25, r25, 8
/* 8040C9C4 00409904  41 80 FF A0 */	blt .L_8040C964
/* 8040C9C8 00409908  38 1F 01 00 */	addi r0, r31, 0x100
/* 8040C9CC 0040990C  3C 60 6B 6F */	lis r3, 0x6B6F6E34@ha
/* 8040C9D0 00409910  90 01 00 08 */	stw r0, 8(r1)
/* 8040C9D4 00409914  38 00 00 03 */	li r0, 3
/* 8040C9D8 00409918  39 03 6E 34 */	addi r8, r3, 0x6B6F6E34@l
/* 8040C9DC 0040991C  38 80 00 02 */	li r4, 2
/* 8040C9E0 00409920  90 01 00 0C */	stw r0, 0xc(r1)
/* 8040C9E4 00409924  38 00 00 00 */	li r0, 0
/* 8040C9E8 00409928  7D 0A 43 78 */	mr r10, r8
/* 8040C9EC 0040992C  38 C3 6E 33 */	addi r6, r3, 0x6e33
/* 8040C9F0 00409930  90 81 00 10 */	stw r4, 0x10(r1)
/* 8040C9F4 00409934  38 A0 00 50 */	li r5, 0x50
/* 8040C9F8 00409938  38 E0 00 50 */	li r7, 0x50
/* 8040C9FC 0040993C  39 20 00 50 */	li r9, 0x50
/* 8040CA00 00409940  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040CA04 00409944  93 41 00 18 */	stw r26, 0x18(r1)
/* 8040CA08 00409948  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CA0C 0040994C  4B EF FB 25 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 8040CA10 00409950  90 7F 00 C0 */	stw r3, 0xc0(r31)
/* 8040CA14 00409954  3C 60 73 74 */	lis r3, 0x73747434@ha
/* 8040CA18 00409958  38 1F 01 04 */	addi r0, r31, 0x104
/* 8040CA1C 0040995C  38 A0 00 03 */	li r5, 3
/* 8040CA20 00409960  90 01 00 08 */	stw r0, 8(r1)
/* 8040CA24 00409964  39 03 74 34 */	addi r8, r3, 0x73747434@l
/* 8040CA28 00409968  38 80 00 02 */	li r4, 2
/* 8040CA2C 0040996C  38 00 00 00 */	li r0, 0
/* 8040CA30 00409970  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8040CA34 00409974  7D 0A 43 78 */	mr r10, r8
/* 8040CA38 00409978  38 C3 74 33 */	addi r6, r3, 0x7433
/* 8040CA3C 0040997C  38 A0 50 31 */	li r5, 0x5031
/* 8040CA40 00409980  90 81 00 10 */	stw r4, 0x10(r1)
/* 8040CA44 00409984  38 E0 50 31 */	li r7, 0x5031
/* 8040CA48 00409988  39 20 50 31 */	li r9, 0x5031
/* 8040CA4C 0040998C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040CA50 00409990  93 41 00 18 */	stw r26, 0x18(r1)
/* 8040CA54 00409994  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CA58 00409998  4B EF FA D9 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 8040CA5C 0040999C  90 7F 00 C4 */	stw r3, 0xc4(r31)
/* 8040CA60 004099A0  3C 60 6E 64 */	lis r3, 0x6E647434@ha
/* 8040CA64 004099A4  38 1F 01 08 */	addi r0, r31, 0x108
/* 8040CA68 004099A8  38 A0 00 03 */	li r5, 3
/* 8040CA6C 004099AC  90 01 00 08 */	stw r0, 8(r1)
/* 8040CA70 004099B0  39 03 74 34 */	addi r8, r3, 0x6E647434@l
/* 8040CA74 004099B4  38 80 00 02 */	li r4, 2
/* 8040CA78 004099B8  38 00 00 00 */	li r0, 0
/* 8040CA7C 004099BC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8040CA80 004099C0  7D 0A 43 78 */	mr r10, r8
/* 8040CA84 004099C4  38 C3 74 33 */	addi r6, r3, 0x7433
/* 8040CA88 004099C8  38 A0 50 32 */	li r5, 0x5032
/* 8040CA8C 004099CC  90 81 00 10 */	stw r4, 0x10(r1)
/* 8040CA90 004099D0  38 E0 50 32 */	li r7, 0x5032
/* 8040CA94 004099D4  39 20 50 32 */	li r9, 0x5032
/* 8040CA98 004099D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040CA9C 004099DC  93 41 00 18 */	stw r26, 0x18(r1)
/* 8040CAA0 004099E0  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CAA4 004099E4  4B EF FA 8D */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 8040CAA8 004099E8  90 7F 00 C8 */	stw r3, 0xc8(r31)
/* 8040CAAC 004099EC  3C 60 72 64 */	lis r3, 0x72647434@ha
/* 8040CAB0 004099F0  38 1F 01 0C */	addi r0, r31, 0x10c
/* 8040CAB4 004099F4  38 A0 00 03 */	li r5, 3
/* 8040CAB8 004099F8  90 01 00 08 */	stw r0, 8(r1)
/* 8040CABC 004099FC  39 03 74 34 */	addi r8, r3, 0x72647434@l
/* 8040CAC0 00409A00  38 80 00 02 */	li r4, 2
/* 8040CAC4 00409A04  38 00 00 00 */	li r0, 0
/* 8040CAC8 00409A08  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8040CACC 00409A0C  7D 0A 43 78 */	mr r10, r8
/* 8040CAD0 00409A10  38 C3 74 33 */	addi r6, r3, 0x7433
/* 8040CAD4 00409A14  38 A0 50 33 */	li r5, 0x5033
/* 8040CAD8 00409A18  90 81 00 10 */	stw r4, 0x10(r1)
/* 8040CADC 00409A1C  38 E0 50 33 */	li r7, 0x5033
/* 8040CAE0 00409A20  39 20 50 33 */	li r9, 0x5033
/* 8040CAE4 00409A24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040CAE8 00409A28  93 41 00 18 */	stw r26, 0x18(r1)
/* 8040CAEC 00409A2C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CAF0 00409A30  4B EF FA 41 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 8040CAF4 00409A34  90 7F 00 CC */	stw r3, 0xcc(r31)
/* 8040CAF8 00409A38  3C 60 6B 6F */	lis r3, 0x6B6F6E32@ha
/* 8040CAFC 00409A3C  38 1F 01 10 */	addi r0, r31, 0x110
/* 8040CB00 00409A40  38 80 00 02 */	li r4, 2
/* 8040CB04 00409A44  90 01 00 08 */	stw r0, 8(r1)
/* 8040CB08 00409A48  39 03 6E 32 */	addi r8, r3, 0x6B6F6E32@l
/* 8040CB0C 00409A4C  38 00 00 00 */	li r0, 0
/* 8040CB10 00409A50  38 C3 6E 31 */	addi r6, r3, 0x6e31
/* 8040CB14 00409A54  90 81 00 0C */	stw r4, 0xc(r1)
/* 8040CB18 00409A58  7D 0A 43 78 */	mr r10, r8
/* 8040CB1C 00409A5C  38 A0 00 50 */	li r5, 0x50
/* 8040CB20 00409A60  38 E0 00 50 */	li r7, 0x50
/* 8040CB24 00409A64  90 81 00 10 */	stw r4, 0x10(r1)
/* 8040CB28 00409A68  39 20 00 50 */	li r9, 0x50
/* 8040CB2C 00409A6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040CB30 00409A70  93 41 00 18 */	stw r26, 0x18(r1)
/* 8040CB34 00409A74  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CB38 00409A78  4B EF F9 F9 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 8040CB3C 00409A7C  90 7F 00 D0 */	stw r3, 0xd0(r31)
/* 8040CB40 00409A80  3C 60 73 74 */	lis r3, 0x73747432@ha
/* 8040CB44 00409A84  38 1F 01 14 */	addi r0, r31, 0x114
/* 8040CB48 00409A88  38 80 00 02 */	li r4, 2
/* 8040CB4C 00409A8C  90 01 00 08 */	stw r0, 8(r1)
/* 8040CB50 00409A90  39 03 74 32 */	addi r8, r3, 0x73747432@l
/* 8040CB54 00409A94  38 00 00 00 */	li r0, 0
/* 8040CB58 00409A98  38 C3 74 31 */	addi r6, r3, 0x7431
/* 8040CB5C 00409A9C  90 81 00 0C */	stw r4, 0xc(r1)
/* 8040CB60 00409AA0  7D 0A 43 78 */	mr r10, r8
/* 8040CB64 00409AA4  38 A0 50 31 */	li r5, 0x5031
/* 8040CB68 00409AA8  38 E0 50 31 */	li r7, 0x5031
/* 8040CB6C 00409AAC  90 81 00 10 */	stw r4, 0x10(r1)
/* 8040CB70 00409AB0  39 20 50 31 */	li r9, 0x5031
/* 8040CB74 00409AB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040CB78 00409AB8  93 41 00 18 */	stw r26, 0x18(r1)
/* 8040CB7C 00409ABC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CB80 00409AC0  4B EF F9 B1 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 8040CB84 00409AC4  90 7F 00 D4 */	stw r3, 0xd4(r31)
/* 8040CB88 00409AC8  3C 60 6E 64 */	lis r3, 0x6E647432@ha
/* 8040CB8C 00409ACC  38 1F 01 18 */	addi r0, r31, 0x118
/* 8040CB90 00409AD0  38 80 00 02 */	li r4, 2
/* 8040CB94 00409AD4  90 01 00 08 */	stw r0, 8(r1)
/* 8040CB98 00409AD8  39 03 74 32 */	addi r8, r3, 0x6E647432@l
/* 8040CB9C 00409ADC  38 00 00 00 */	li r0, 0
/* 8040CBA0 00409AE0  38 C3 74 31 */	addi r6, r3, 0x7431
/* 8040CBA4 00409AE4  90 81 00 0C */	stw r4, 0xc(r1)
/* 8040CBA8 00409AE8  7D 0A 43 78 */	mr r10, r8
/* 8040CBAC 00409AEC  38 A0 50 32 */	li r5, 0x5032
/* 8040CBB0 00409AF0  38 E0 50 32 */	li r7, 0x5032
/* 8040CBB4 00409AF4  90 81 00 10 */	stw r4, 0x10(r1)
/* 8040CBB8 00409AF8  39 20 50 32 */	li r9, 0x5032
/* 8040CBBC 00409AFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040CBC0 00409B00  93 41 00 18 */	stw r26, 0x18(r1)
/* 8040CBC4 00409B04  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CBC8 00409B08  4B EF F9 69 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 8040CBCC 00409B0C  90 7F 00 D8 */	stw r3, 0xd8(r31)
/* 8040CBD0 00409B10  3C 60 72 64 */	lis r3, 0x72647432@ha
/* 8040CBD4 00409B14  38 1F 01 1C */	addi r0, r31, 0x11c
/* 8040CBD8 00409B18  38 80 00 02 */	li r4, 2
/* 8040CBDC 00409B1C  90 01 00 08 */	stw r0, 8(r1)
/* 8040CBE0 00409B20  39 03 74 32 */	addi r8, r3, 0x72647432@l
/* 8040CBE4 00409B24  38 00 00 00 */	li r0, 0
/* 8040CBE8 00409B28  38 C3 74 31 */	addi r6, r3, 0x7431
/* 8040CBEC 00409B2C  90 81 00 0C */	stw r4, 0xc(r1)
/* 8040CBF0 00409B30  7D 0A 43 78 */	mr r10, r8
/* 8040CBF4 00409B34  38 A0 50 33 */	li r5, 0x5033
/* 8040CBF8 00409B38  38 E0 50 33 */	li r7, 0x5033
/* 8040CBFC 00409B3C  90 81 00 10 */	stw r4, 0x10(r1)
/* 8040CC00 00409B40  39 20 50 33 */	li r9, 0x5033
/* 8040CC04 00409B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040CC08 00409B48  93 41 00 18 */	stw r26, 0x18(r1)
/* 8040CC0C 00409B4C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CC10 00409B50  4B EF F9 21 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 8040CC14 00409B54  90 7F 00 DC */	stw r3, 0xdc(r31)
/* 8040CC18 00409B58  38 80 00 FF */	li r4, 0xff
/* 8040CC1C 00409B5C  80 7F 00 D0 */	lwz r3, 0xd0(r31)
/* 8040CC20 00409B60  4B EF EB D1 */	bl setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
/* 8040CC24 00409B64  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8040CC28 00409B68  38 80 00 FF */	li r4, 0xff
/* 8040CC2C 00409B6C  4B EF EB C5 */	bl setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
/* 8040CC30 00409B70  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8040CC34 00409B74  38 80 00 FF */	li r4, 0xff
/* 8040CC38 00409B78  4B EF EB B9 */	bl setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
/* 8040CC3C 00409B7C  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8040CC40 00409B80  38 80 00 FF */	li r4, 0xff
/* 8040CC44 00409B84  4B EF EB AD */	bl setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
/* 8040CC48 00409B88  80 7E 00 08 */	lwz r3, 8(r30)
/* 8040CC4C 00409B8C  7F FB FB 78 */	mr r27, r31
/* 8040CC50 00409B90  3B 40 00 00 */	li r26, 0
/* 8040CC54 00409B94  80 63 00 00 */	lwz r3, 0(r3)
/* 8040CC58 00409B98  83 A3 00 3C */	lwz r29, 0x3c(r3)
.L_8040CC5C:
/* 8040CC5C 00409B9C  80 9D 00 04 */	lwz r4, 4(r29)
/* 8040CC60 00409BA0  2C 04 00 00 */	cmpwi r4, 0
/* 8040CC64 00409BA4  40 80 00 2C */	bge .L_8040CC90
/* 8040CC68 00409BA8  38 00 00 00 */	li r0, 0
/* 8040CC6C 00409BAC  38 80 00 01 */	li r4, 1
/* 8040CC70 00409BB0  90 1B 01 00 */	stw r0, 0x100(r27)
/* 8040CC74 00409BB4  90 1B 01 10 */	stw r0, 0x110(r27)
/* 8040CC78 00409BB8  80 7B 00 C0 */	lwz r3, 0xc0(r27)
/* 8040CC7C 00409BBC  4B EF EB 6D */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8040CC80 00409BC0  80 7B 00 D0 */	lwz r3, 0xd0(r27)
/* 8040CC84 00409BC4  38 80 00 01 */	li r4, 1
/* 8040CC88 00409BC8  4B EF EB 61 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8040CC8C 00409BCC  48 00 00 48 */	b .L_8040CCD4
.L_8040CC90:
/* 8040CC90 00409BD0  3C 60 88 89 */	lis r3, 0x88888889@ha
/* 8040CC94 00409BD4  38 A3 88 89 */	addi r5, r3, 0x88888889@l
/* 8040CC98 00409BD8  7C 05 20 96 */	mulhw r0, r5, r4
/* 8040CC9C 00409BDC  7C 00 22 14 */	add r0, r0, r4
/* 8040CCA0 00409BE0  7C 00 2E 70 */	srawi r0, r0, 5
/* 8040CCA4 00409BE4  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8040CCA8 00409BE8  7C 00 1A 14 */	add r0, r0, r3
/* 8040CCAC 00409BEC  90 1B 01 00 */	stw r0, 0x100(r27)
/* 8040CCB0 00409BF0  80 9D 00 04 */	lwz r4, 4(r29)
/* 8040CCB4 00409BF4  7C 05 20 96 */	mulhw r0, r5, r4
/* 8040CCB8 00409BF8  7C 00 22 14 */	add r0, r0, r4
/* 8040CCBC 00409BFC  7C 00 2E 70 */	srawi r0, r0, 5
/* 8040CCC0 00409C00  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8040CCC4 00409C04  7C 00 1A 14 */	add r0, r0, r3
/* 8040CCC8 00409C08  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 8040CCCC 00409C0C  7C 00 20 50 */	subf r0, r0, r4
/* 8040CCD0 00409C10  90 1B 01 10 */	stw r0, 0x110(r27)
.L_8040CCD4:
/* 8040CCD4 00409C14  3B 5A 00 01 */	addi r26, r26, 1
/* 8040CCD8 00409C18  3B 7B 00 04 */	addi r27, r27, 4
/* 8040CCDC 00409C1C  2C 1A 00 04 */	cmpwi r26, 4
/* 8040CCE0 00409C20  3B BD 00 04 */	addi r29, r29, 4
/* 8040CCE4 00409C24  41 80 FF 78 */	blt .L_8040CC5C
/* 8040CCE8 00409C28  4B FC FB 89 */	bl createInstance__Q33ebi4Save4TMgrFv
/* 8040CCEC 00409C2C  90 7F 00 38 */	stw r3, 0x38(r31)
/* 8040CCF0 00409C30  83 1F 00 38 */	lwz r24, 0x38(r31)
/* 8040CCF4 00409C34  38 78 00 18 */	addi r3, r24, 0x18
/* 8040CCF8 00409C38  4B FD 0C BD */	bl loadResource__Q33ebi6Screen9TSaveMenuFv
/* 8040CCFC 00409C3C  83 2D 88 2C */	lwz r25, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8040CD00 00409C40  38 78 01 00 */	addi r3, r24, 0x100
/* 8040CD04 00409C44  7F 24 CB 78 */	mr r4, r25
/* 8040CD08 00409C48  4B FB 55 A9 */	bl loadResource__Q33ebi6Screen11TMemoryCardFP7JKRHeap
/* 8040CD0C 00409C4C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8040CD10 00409C50  7F 24 CB 78 */	mr r4, r25
/* 8040CD14 00409C54  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8040CD18 00409C58  48 03 5E B5 */	bl loadResource__Q34Game10MemoryCard3MgrFP7JKRHeap
/* 8040CD1C 00409C5C  7F E3 FB 78 */	mr r3, r31
/* 8040CD20 00409C60  48 04 73 21 */	bl getGamePad__Q26Screen7ObjBaseCFv
/* 8040CD24 00409C64  80 FF 00 38 */	lwz r7, 0x38(r31)
/* 8040CD28 00409C68  3C 80 65 74 */	lis r4, 0x65747030@ha
/* 8040CD2C 00409C6C  38 00 00 01 */	li r0, 1
/* 8040CD30 00409C70  38 A0 4E 73 */	li r5, 0x4e73
/* 8040CD34 00409C74  90 67 03 D0 */	stw r3, 0x3d0(r7)
/* 8040CD38 00409C78  38 C4 70 30 */	addi r6, r4, 0x65747030@l
/* 8040CD3C 00409C7C  90 67 00 24 */	stw r3, 0x24(r7)
/* 8040CD40 00409C80  90 67 01 04 */	stw r3, 0x104(r7)
/* 8040CD44 00409C84  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8040CD48 00409C88  98 03 04 78 */	stb r0, 0x478(r3)
/* 8040CD4C 00409C8C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CD50 00409C90  81 83 00 00 */	lwz r12, 0(r3)
/* 8040CD54 00409C94  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040CD58 00409C98  7D 89 03 A6 */	mtctr r12
/* 8040CD5C 00409C9C  4E 80 04 21 */	bctrl 
/* 8040CD60 00409CA0  4B C2 B5 C1 */	bl getBounds__7J2DPaneFv
/* 8040CD64 00409CA4  C3 E3 00 04 */	lfs f31, 4(r3)
/* 8040CD68 00409CA8  3C 80 65 74 */	lis r4, 0x65747031@ha
/* 8040CD6C 00409CAC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CD70 00409CB0  38 C4 70 31 */	addi r6, r4, 0x65747031@l
/* 8040CD74 00409CB4  38 A0 4E 73 */	li r5, 0x4e73
/* 8040CD78 00409CB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8040CD7C 00409CBC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040CD80 00409CC0  7D 89 03 A6 */	mtctr r12
/* 8040CD84 00409CC4  4E 80 04 21 */	bctrl 
/* 8040CD88 00409CC8  4B C2 B5 99 */	bl getBounds__7J2DPaneFv
/* 8040CD8C 00409CCC  C0 03 00 04 */	lfs f0, 4(r3)
/* 8040CD90 00409CD0  3C 60 69 63 */	lis r3, 0x69637430@ha
/* 8040CD94 00409CD4  C0 22 1E 44 */	lfs f1, lbl_805201A4@sda21(r2)
/* 8040CD98 00409CD8  38 C3 74 30 */	addi r6, r3, 0x69637430@l
/* 8040CD9C 00409CDC  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8040CDA0 00409CE0  38 A0 50 70 */	li r5, 0x5070
/* 8040CDA4 00409CE4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8040CDA8 00409CE8  D0 1F 01 2C */	stfs f0, 0x12c(r31)
/* 8040CDAC 00409CEC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CDB0 00409CF0  81 83 00 00 */	lwz r12, 0(r3)
/* 8040CDB4 00409CF4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040CDB8 00409CF8  7D 89 03 A6 */	mtctr r12
/* 8040CDBC 00409CFC  4E 80 04 21 */	bctrl 
/* 8040CDC0 00409D00  38 00 00 00 */	li r0, 0
/* 8040CDC4 00409D04  3C 80 69 63 */	lis r4, 0x69637431@ha
/* 8040CDC8 00409D08  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8040CDCC 00409D0C  38 C4 74 31 */	addi r6, r4, 0x69637431@l
/* 8040CDD0 00409D10  38 A0 50 70 */	li r5, 0x5070
/* 8040CDD4 00409D14  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CDD8 00409D18  81 83 00 00 */	lwz r12, 0(r3)
/* 8040CDDC 00409D1C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040CDE0 00409D20  7D 89 03 A6 */	mtctr r12
/* 8040CDE4 00409D24  4E 80 04 21 */	bctrl 
/* 8040CDE8 00409D28  38 00 00 00 */	li r0, 0
/* 8040CDEC 00409D2C  3C A0 74 70 */	lis r5, 0x74705F63@ha
/* 8040CDF0 00409D30  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8040CDF4 00409D34  3C 80 00 4E */	lis r4, 0x004E7365@ha
/* 8040CDF8 00409D38  38 C5 5F 63 */	addi r6, r5, 0x74705F63@l
/* 8040CDFC 00409D3C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CE00 00409D40  38 A4 73 65 */	addi r5, r4, 0x004E7365@l
/* 8040CE04 00409D44  81 83 00 00 */	lwz r12, 0(r3)
/* 8040CE08 00409D48  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040CE0C 00409D4C  7D 89 03 A6 */	mtctr r12
/* 8040CE10 00409D50  4E 80 04 21 */	bctrl 
/* 8040CE14 00409D54  38 00 00 01 */	li r0, 1
/* 8040CE18 00409D58  3C A0 74 70 */	lis r5, 0x74705F64@ha
/* 8040CE1C 00409D5C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8040CE20 00409D60  3C 80 00 4E */	lis r4, 0x004E7365@ha
/* 8040CE24 00409D64  38 C5 5F 64 */	addi r6, r5, 0x74705F64@l
/* 8040CE28 00409D68  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CE2C 00409D6C  38 A4 73 65 */	addi r5, r4, 0x004E7365@l
/* 8040CE30 00409D70  81 83 00 00 */	lwz r12, 0(r3)
/* 8040CE34 00409D74  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040CE38 00409D78  7D 89 03 A6 */	mtctr r12
/* 8040CE3C 00409D7C  4E 80 04 21 */	bctrl 
/* 8040CE40 00409D80  38 00 00 00 */	li r0, 0
/* 8040CE44 00409D84  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8040CE48 00409D88  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 8040CE4C 00409D8C  2C 00 00 00 */	cmpwi r0, 0
/* 8040CE50 00409D90  40 82 00 60 */	bne .L_8040CEB0
/* 8040CE54 00409D94  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CE58 00409D98  3C A0 6C 5F */	lis r5, 0x6C5F6669@ha
/* 8040CE5C 00409D9C  3C 80 4E 74 */	lis r4, 0x4E746974@ha
/* 8040CE60 00409DA0  81 83 00 00 */	lwz r12, 0(r3)
/* 8040CE64 00409DA4  38 C5 66 69 */	addi r6, r5, 0x6C5F6669@l
/* 8040CE68 00409DA8  38 A4 69 74 */	addi r5, r4, 0x4E746974@l
/* 8040CE6C 00409DAC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040CE70 00409DB0  7D 89 03 A6 */	mtctr r12
/* 8040CE74 00409DB4  4E 80 04 21 */	bctrl 
/* 8040CE78 00409DB8  38 00 00 01 */	li r0, 1
/* 8040CE7C 00409DBC  3C A0 6C 5F */	lis r5, 0x6C5F636F@ha
/* 8040CE80 00409DC0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8040CE84 00409DC4  3C 80 4E 74 */	lis r4, 0x4E746974@ha
/* 8040CE88 00409DC8  38 C5 63 6F */	addi r6, r5, 0x6C5F636F@l
/* 8040CE8C 00409DCC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CE90 00409DD0  38 A4 69 74 */	addi r5, r4, 0x4E746974@l
/* 8040CE94 00409DD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8040CE98 00409DD8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040CE9C 00409DDC  7D 89 03 A6 */	mtctr r12
/* 8040CEA0 00409DE0  4E 80 04 21 */	bctrl 
/* 8040CEA4 00409DE4  38 00 00 00 */	li r0, 0
/* 8040CEA8 00409DE8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8040CEAC 00409DEC  48 00 00 5C */	b .L_8040CF08
.L_8040CEB0:
/* 8040CEB0 00409DF0  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CEB4 00409DF4  3C A0 6C 5F */	lis r5, 0x6C5F6669@ha
/* 8040CEB8 00409DF8  3C 80 4E 74 */	lis r4, 0x4E746974@ha
/* 8040CEBC 00409DFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8040CEC0 00409E00  38 C5 66 69 */	addi r6, r5, 0x6C5F6669@l
/* 8040CEC4 00409E04  38 A4 69 74 */	addi r5, r4, 0x4E746974@l
/* 8040CEC8 00409E08  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040CECC 00409E0C  7D 89 03 A6 */	mtctr r12
/* 8040CED0 00409E10  4E 80 04 21 */	bctrl 
/* 8040CED4 00409E14  38 00 00 00 */	li r0, 0
/* 8040CED8 00409E18  3C A0 6C 5F */	lis r5, 0x6C5F636F@ha
/* 8040CEDC 00409E1C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8040CEE0 00409E20  3C 80 4E 74 */	lis r4, 0x4E746974@ha
/* 8040CEE4 00409E24  38 C5 63 6F */	addi r6, r5, 0x6C5F636F@l
/* 8040CEE8 00409E28  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040CEEC 00409E2C  38 A4 69 74 */	addi r5, r4, 0x4E746974@l
/* 8040CEF0 00409E30  81 83 00 00 */	lwz r12, 0(r3)
/* 8040CEF4 00409E34  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040CEF8 00409E38  7D 89 03 A6 */	mtctr r12
/* 8040CEFC 00409E3C  4E 80 04 21 */	bctrl 
/* 8040CF00 00409E40  38 00 00 01 */	li r0, 1
/* 8040CF04 00409E44  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8040CF08:
/* 8040CF08 00409E48  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 8040CF0C 00409E4C  28 00 00 00 */	cmplwi r0, 0
/* 8040CF10 00409E50  41 82 00 0C */	beq .L_8040CF1C
/* 8040CF14 00409E54  7F 83 E3 78 */	mr r3, r28
/* 8040CF18 00409E58  4B C1 66 8D */	bl becomeCurrentHeap__7JKRHeapFv
.L_8040CF1C:
/* 8040CF1C 00409E5C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8040CF20 00409E60  38 80 FF FE */	li r4, -2
/* 8040CF24 00409E64  38 63 00 84 */	addi r3, r3, 0x84
/* 8040CF28 00409E68  48 00 42 65 */	bl set_history__Q32kh6Screen12MailSaveDataFSc
/* 8040CF2C 00409E6C  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8040CF30 00409E70  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8040CF34 00409E74  BA E1 00 6C */	lmw r23, 0x6c(r1)
/* 8040CF38 00409E78  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8040CF3C 00409E7C  7C 08 03 A6 */	mtlr r0
/* 8040CF40 00409E80  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8040CF44 00409E84  4E 80 00 20 */	blr 
.endfn doCreate__Q32kh6Screen14ObjFinalResultFP10JKRArchive

.fn doUpdate__Q32kh6Screen14ObjFinalResultFv, global
/* 8040CF48 00409E88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8040CF4C 00409E8C  7C 08 02 A6 */	mflr r0
/* 8040CF50 00409E90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040CF54 00409E94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8040CF58 00409E98  7C 7F 1B 78 */	mr r31, r3
/* 8040CF5C 00409E9C  48 00 06 81 */	bl updateCommon__Q32kh6Screen14ObjFinalResultFv
/* 8040CF60 00409EA0  88 1F 01 4E */	lbz r0, 0x14e(r31)
/* 8040CF64 00409EA4  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8040CF68 00409EA8  41 82 00 CC */	beq .L_8040D034
/* 8040CF6C 00409EAC  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040CF70 00409EB0  88 9F 01 4F */	lbz r4, 0x14f(r31)
/* 8040CF74 00409EB4  38 63 41 88 */	addi r3, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040CF78 00409EB8  88 03 00 1F */	lbz r0, 0x1f(r3)
/* 8040CF7C 00409EBC  7C 04 00 40 */	cmplw r4, r0
/* 8040CF80 00409EC0  40 80 00 10 */	bge .L_8040CF90
/* 8040CF84 00409EC4  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8040CF88 00409EC8  7C 04 02 14 */	add r0, r4, r0
/* 8040CF8C 00409ECC  98 1F 01 4F */	stb r0, 0x14f(r31)
.L_8040CF90:
/* 8040CF90 00409ED0  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8040CF94 00409ED4  4B FC FE 01 */	bl update__Q33ebi4Save4TMgrFv
/* 8040CF98 00409ED8  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8040CF9C 00409EDC  4B FC FD 45 */	bl isFinish__Q33ebi4Save4TMgrFv
/* 8040CFA0 00409EE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8040CFA4 00409EE4  41 82 01 48 */	beq .L_8040D0EC
/* 8040CFA8 00409EE8  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8040CFAC 00409EEC  80 03 04 74 */	lwz r0, 0x474(r3)
/* 8040CFB0 00409EF0  2C 00 00 01 */	cmpwi r0, 1
/* 8040CFB4 00409EF4  41 82 00 70 */	beq .L_8040D024
/* 8040CFB8 00409EF8  40 80 00 10 */	bge .L_8040CFC8
/* 8040CFBC 00409EFC  2C 00 00 00 */	cmpwi r0, 0
/* 8040CFC0 00409F00  40 80 00 10 */	bge .L_8040CFD0
/* 8040CFC4 00409F04  48 00 01 28 */	b .L_8040D0EC
.L_8040CFC8:
/* 8040CFC8 00409F08  2C 00 00 03 */	cmpwi r0, 3
/* 8040CFCC 00409F0C  40 80 01 20 */	bge .L_8040D0EC
.L_8040CFD0:
/* 8040CFD0 00409F10  7F E3 FB 78 */	mr r3, r31
/* 8040CFD4 00409F14  48 04 6F D5 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8040CFD8 00409F18  3C A0 52 53 */	lis r5, 0x52534C54@ha
/* 8040CFDC 00409F1C  38 80 4B 48 */	li r4, 0x4b48
/* 8040CFE0 00409F20  38 C5 4C 54 */	addi r6, r5, 0x52534C54@l
/* 8040CFE4 00409F24  38 A0 46 5F */	li r5, 0x465f
/* 8040CFE8 00409F28  4B F0 23 35 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8040CFEC 00409F2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8040CFF0 00409F30  40 82 00 20 */	bne .L_8040D010
/* 8040CFF4 00409F34  3C 60 80 4A */	lis r3, lbl_80498CD8@ha
/* 8040CFF8 00409F38  3C A0 80 4A */	lis r5, lbl_80498FD8@ha
/* 8040CFFC 00409F3C  38 63 8C D8 */	addi r3, r3, lbl_80498CD8@l
/* 8040D000 00409F40  38 80 01 7E */	li r4, 0x17e
/* 8040D004 00409F44  38 A5 8F D8 */	addi r5, r5, lbl_80498FD8@l
/* 8040D008 00409F48  4C C6 31 82 */	crclr 6
/* 8040D00C 00409F4C  4B C1 D6 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8040D010:
/* 8040D010 00409F50  7F E3 FB 78 */	mr r3, r31
/* 8040D014 00409F54  48 04 6F 95 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8040D018 00409F58  38 00 00 01 */	li r0, 1
/* 8040D01C 00409F5C  90 03 00 10 */	stw r0, 0x10(r3)
/* 8040D020 00409F60  48 00 00 CC */	b .L_8040D0EC
.L_8040D024:
/* 8040D024 00409F64  88 1F 01 4E */	lbz r0, 0x14e(r31)
/* 8040D028 00409F68  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 8040D02C 00409F6C  98 1F 01 4E */	stb r0, 0x14e(r31)
/* 8040D030 00409F70  48 00 00 BC */	b .L_8040D0EC
.L_8040D034:
/* 8040D034 00409F74  80 1F 01 48 */	lwz r0, 0x148(r31)
/* 8040D038 00409F78  2C 00 00 02 */	cmpwi r0, 2
/* 8040D03C 00409F7C  41 82 00 3C */	beq .L_8040D078
/* 8040D040 00409F80  40 80 00 14 */	bge .L_8040D054
/* 8040D044 00409F84  2C 00 00 00 */	cmpwi r0, 0
/* 8040D048 00409F88  41 82 00 18 */	beq .L_8040D060
/* 8040D04C 00409F8C  40 80 00 20 */	bge .L_8040D06C
/* 8040D050 00409F90  48 00 00 3C */	b .L_8040D08C
.L_8040D054:
/* 8040D054 00409F94  2C 00 00 04 */	cmpwi r0, 4
/* 8040D058 00409F98  40 80 00 34 */	bge .L_8040D08C
/* 8040D05C 00409F9C  48 00 00 28 */	b .L_8040D084
.L_8040D060:
/* 8040D060 00409FA0  7F E3 FB 78 */	mr r3, r31
/* 8040D064 00409FA4  48 00 0B 6D */	bl statusNormal__Q32kh6Screen14ObjFinalResultFv
/* 8040D068 00409FA8  48 00 00 24 */	b .L_8040D08C
.L_8040D06C:
/* 8040D06C 00409FAC  7F E3 FB 78 */	mr r3, r31
/* 8040D070 00409FB0  48 00 0F 05 */	bl statusScrollUp__Q32kh6Screen14ObjFinalResultFv
/* 8040D074 00409FB4  48 00 00 18 */	b .L_8040D08C
.L_8040D078:
/* 8040D078 00409FB8  7F E3 FB 78 */	mr r3, r31
/* 8040D07C 00409FBC  48 00 0F 85 */	bl statusScrollDown__Q32kh6Screen14ObjFinalResultFv
/* 8040D080 00409FC0  48 00 00 0C */	b .L_8040D08C
.L_8040D084:
/* 8040D084 00409FC4  7F E3 FB 78 */	mr r3, r31
/* 8040D088 00409FC8  48 00 10 09 */	bl statusForceScroll__Q32kh6Screen14ObjFinalResultFv
.L_8040D08C:
/* 8040D08C 00409FCC  80 1F 01 48 */	lwz r0, 0x148(r31)
/* 8040D090 00409FD0  2C 00 00 00 */	cmpwi r0, 0
/* 8040D094 00409FD4  40 82 00 38 */	bne .L_8040D0CC
/* 8040D098 00409FD8  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 8040D09C 00409FDC  2C 00 00 07 */	cmpwi r0, 7
/* 8040D0A0 00409FE0  40 82 00 2C */	bne .L_8040D0CC
/* 8040D0A4 00409FE4  7F E3 FB 78 */	mr r3, r31
/* 8040D0A8 00409FE8  48 04 6F 99 */	bl getGamePad__Q26Screen7ObjBaseCFv
/* 8040D0AC 00409FEC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8040D0B0 00409FF0  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 8040D0B4 00409FF4  41 82 00 18 */	beq .L_8040D0CC
/* 8040D0B8 00409FF8  88 1F 01 4E */	lbz r0, 0x14e(r31)
/* 8040D0BC 00409FFC  60 00 00 04 */	ori r0, r0, 4
/* 8040D0C0 0040A000  98 1F 01 4E */	stb r0, 0x14e(r31)
/* 8040D0C4 0040A004  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8040D0C8 0040A008  4B FC FB 35 */	bl start__Q33ebi4Save4TMgrFv
.L_8040D0CC:
/* 8040D0CC 0040A00C  88 9F 01 4F */	lbz r4, 0x14f(r31)
/* 8040D0D0 0040A010  28 04 00 00 */	cmplwi r4, 0
/* 8040D0D4 0040A014  41 82 00 18 */	beq .L_8040D0EC
/* 8040D0D8 0040A018  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040D0DC 0040A01C  38 63 41 88 */	addi r3, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040D0E0 0040A020  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8040D0E4 0040A024  7C 00 20 50 */	subf r0, r0, r4
/* 8040D0E8 0040A028  98 1F 01 4F */	stb r0, 0x14f(r31)
.L_8040D0EC:
/* 8040D0EC 0040A02C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8040D0F0 0040A030  38 60 00 00 */	li r3, 0
/* 8040D0F4 0040A034  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8040D0F8 0040A038  7C 08 03 A6 */	mtlr r0
/* 8040D0FC 0040A03C  38 21 00 10 */	addi r1, r1, 0x10
/* 8040D100 0040A040  4E 80 00 20 */	blr 
.endfn doUpdate__Q32kh6Screen14ObjFinalResultFv

.fn doUpdateFadein__Q32kh6Screen14ObjFinalResultFv, global
/* 8040D104 0040A044  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8040D108 0040A048  7C 08 02 A6 */	mflr r0
/* 8040D10C 0040A04C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040D110 0040A050  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8040D114 0040A054  7C 7F 1B 78 */	mr r31, r3
/* 8040D118 0040A058  48 00 04 C5 */	bl updateCommon__Q32kh6Screen14ObjFinalResultFv
/* 8040D11C 0040A05C  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 8040D120 0040A060  2C 03 00 01 */	cmpwi r3, 1
/* 8040D124 0040A064  40 81 00 0C */	ble .L_8040D130
/* 8040D128 0040A068  38 03 FF FF */	addi r0, r3, -1
/* 8040D12C 0040A06C  90 1F 01 3C */	stw r0, 0x13c(r31)
.L_8040D130:
/* 8040D130 0040A070  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040D134 0040A074  88 1F 01 4F */	lbz r0, 0x14f(r31)
/* 8040D138 0040A078  38 83 41 88 */	addi r4, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040D13C 0040A07C  88 64 00 1E */	lbz r3, 0x1e(r4)
/* 8040D140 0040A080  7C 03 00 50 */	subf r0, r3, r0
/* 8040D144 0040A084  98 1F 01 4F */	stb r0, 0x14f(r31)
/* 8040D148 0040A088  88 7F 01 4F */	lbz r3, 0x14f(r31)
/* 8040D14C 0040A08C  88 04 00 1E */	lbz r0, 0x1e(r4)
/* 8040D150 0040A090  7C 03 00 40 */	cmplw r3, r0
/* 8040D154 0040A094  40 80 00 14 */	bge .L_8040D168
/* 8040D158 0040A098  38 00 00 00 */	li r0, 0
/* 8040D15C 0040A09C  38 60 00 01 */	li r3, 1
/* 8040D160 0040A0A0  98 1F 01 4F */	stb r0, 0x14f(r31)
/* 8040D164 0040A0A4  48 00 00 08 */	b .L_8040D16C
.L_8040D168:
/* 8040D168 0040A0A8  38 60 00 00 */	li r3, 0
.L_8040D16C:
/* 8040D16C 0040A0AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8040D170 0040A0B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8040D174 0040A0B4  7C 08 03 A6 */	mtlr r0
/* 8040D178 0040A0B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8040D17C 0040A0BC  4E 80 00 20 */	blr 
.endfn doUpdateFadein__Q32kh6Screen14ObjFinalResultFv

.fn doUpdateFadeout__Q32kh6Screen14ObjFinalResultFv, global
/* 8040D180 0040A0C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8040D184 0040A0C4  7C 08 02 A6 */	mflr r0
/* 8040D188 0040A0C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040D18C 0040A0CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8040D190 0040A0D0  7C 7F 1B 78 */	mr r31, r3
/* 8040D194 0040A0D4  48 00 04 49 */	bl updateCommon__Q32kh6Screen14ObjFinalResultFv
/* 8040D198 0040A0D8  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040D19C 0040A0DC  88 9F 01 4F */	lbz r4, 0x14f(r31)
/* 8040D1A0 0040A0E0  38 63 41 88 */	addi r3, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040D1A4 0040A0E4  88 03 00 1E */	lbz r0, 0x1e(r3)
/* 8040D1A8 0040A0E8  7C 04 02 14 */	add r0, r4, r0
/* 8040D1AC 0040A0EC  98 1F 01 4F */	stb r0, 0x14f(r31)
/* 8040D1B0 0040A0F0  88 03 00 1E */	lbz r0, 0x1e(r3)
/* 8040D1B4 0040A0F4  88 7F 01 4F */	lbz r3, 0x14f(r31)
/* 8040D1B8 0040A0F8  20 00 00 FF */	subfic r0, r0, 0xff
/* 8040D1BC 0040A0FC  7C 03 00 00 */	cmpw r3, r0
/* 8040D1C0 0040A100  40 81 00 14 */	ble .L_8040D1D4
/* 8040D1C4 0040A104  38 00 00 FF */	li r0, 0xff
/* 8040D1C8 0040A108  38 60 00 01 */	li r3, 1
/* 8040D1CC 0040A10C  98 1F 01 4F */	stb r0, 0x14f(r31)
/* 8040D1D0 0040A110  48 00 00 08 */	b .L_8040D1D8
.L_8040D1D4:
/* 8040D1D4 0040A114  38 60 00 00 */	li r3, 0
.L_8040D1D8:
/* 8040D1D8 0040A118  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8040D1DC 0040A11C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8040D1E0 0040A120  7C 08 03 A6 */	mtlr r0
/* 8040D1E4 0040A124  38 21 00 10 */	addi r1, r1, 0x10
/* 8040D1E8 0040A128  4E 80 00 20 */	blr 
.endfn doUpdateFadeout__Q32kh6Screen14ObjFinalResultFv

.fn doDraw__Q32kh6Screen14ObjFinalResultFR8Graphics, global
/* 8040D1EC 0040A12C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8040D1F0 0040A130  7C 08 02 A6 */	mflr r0
/* 8040D1F4 0040A134  90 01 00 84 */	stw r0, 0x84(r1)
/* 8040D1F8 0040A138  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8040D1FC 0040A13C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8040D200 0040A140  BF 41 00 58 */	stmw r26, 0x58(r1)
/* 8040D204 0040A144  7C 7B 1B 78 */	mr r27, r3
/* 8040D208 0040A148  3C A0 4E 70 */	lis r5, 0x4E707265@ha
/* 8040D20C 0040A14C  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8040D210 0040A150  7C 9C 23 78 */	mr r28, r4
/* 8040D214 0040A154  38 C5 72 65 */	addi r6, r5, 0x4E707265@l
/* 8040D218 0040A158  38 A0 00 00 */	li r5, 0
/* 8040D21C 0040A15C  81 83 00 00 */	lwz r12, 0(r3)
/* 8040D220 0040A160  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040D224 0040A164  7D 89 03 A6 */	mtctr r12
/* 8040D228 0040A168  4E 80 04 21 */	bctrl 
/* 8040D22C 0040A16C  7C 7E 1B 78 */	mr r30, r3
/* 8040D230 0040A170  80 7B 00 3C */	lwz r3, 0x3c(r27)
/* 8040D234 0040A174  3C 80 4E 61 */	lis r4, 0x4E616674@ha
/* 8040D238 0040A178  38 A0 00 00 */	li r5, 0
/* 8040D23C 0040A17C  81 83 00 00 */	lwz r12, 0(r3)
/* 8040D240 0040A180  38 C4 66 74 */	addi r6, r4, 0x4E616674@l
/* 8040D244 0040A184  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040D248 0040A188  7D 89 03 A6 */	mtctr r12
/* 8040D24C 0040A18C  4E 80 04 21 */	bctrl 
/* 8040D250 0040A190  7C 7F 1B 78 */	mr r31, r3
/* 8040D254 0040A194  80 7B 00 3C */	lwz r3, 0x3c(r27)
/* 8040D258 0040A198  3C 80 6D 61 */	lis r4, 0x6D61696E@ha
/* 8040D25C 0040A19C  38 A0 00 4E */	li r5, 0x4e
/* 8040D260 0040A1A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8040D264 0040A1A4  38 C4 69 6E */	addi r6, r4, 0x6D61696E@l
/* 8040D268 0040A1A8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040D26C 0040A1AC  7D 89 03 A6 */	mtctr r12
/* 8040D270 0040A1B0  4E 80 04 21 */	bctrl 
/* 8040D274 0040A1B4  7C 60 1B 78 */	mr r0, r3
/* 8040D278 0040A1B8  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8040D27C 0040A1BC  81 9C 00 BC */	lwz r12, 0xbc(r28)
/* 8040D280 0040A1C0  7C 1D 03 78 */	mr r29, r0
/* 8040D284 0040A1C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8040D288 0040A1C8  7D 89 03 A6 */	mtctr r12
/* 8040D28C 0040A1CC  4E 80 04 21 */	bctrl 
/* 8040D290 0040A1D0  38 60 00 01 */	li r3, 1
/* 8040D294 0040A1D4  38 00 00 00 */	li r0, 0
/* 8040D298 0040A1D8  98 7E 00 B0 */	stb r3, 0xb0(r30)
/* 8040D29C 0040A1DC  7F 84 E3 78 */	mr r4, r28
/* 8040D2A0 0040A1E0  38 BC 00 BC */	addi r5, r28, 0xbc
/* 8040D2A4 0040A1E4  98 1F 00 B0 */	stb r0, 0xb0(r31)
/* 8040D2A8 0040A1E8  98 1D 00 B0 */	stb r0, 0xb0(r29)
/* 8040D2AC 0040A1EC  80 7B 00 3C */	lwz r3, 0x3c(r27)
/* 8040D2B0 0040A1F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8040D2B4 0040A1F4  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 8040D2B8 0040A1F8  7D 89 03 A6 */	mtctr r12
/* 8040D2BC 0040A1FC  4E 80 04 21 */	bctrl 
/* 8040D2C0 0040A200  38 00 00 00 */	li r0, 0
/* 8040D2C4 0040A204  38 61 00 28 */	addi r3, r1, 0x28
/* 8040D2C8 0040A208  90 01 00 28 */	stw r0, 0x28(r1)
/* 8040D2CC 0040A20C  38 81 00 24 */	addi r4, r1, 0x24
/* 8040D2D0 0040A210  38 A1 00 20 */	addi r5, r1, 0x20
/* 8040D2D4 0040A214  38 C1 00 1C */	addi r6, r1, 0x1c
/* 8040D2D8 0040A218  90 01 00 24 */	stw r0, 0x24(r1)
/* 8040D2DC 0040A21C  90 01 00 20 */	stw r0, 0x20(r1)
/* 8040D2E0 0040A220  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8040D2E4 0040A224  4B CD C5 6D */	bl GXGetScissor
/* 8040D2E8 0040A228  38 80 00 00 */	li r4, 0
/* 8040D2EC 0040A22C  38 00 00 01 */	li r0, 1
/* 8040D2F0 0040A230  98 9E 00 B0 */	stb r4, 0xb0(r30)
/* 8040D2F4 0040A234  7F 63 DB 78 */	mr r3, r27
/* 8040D2F8 0040A238  98 9F 00 B0 */	stb r4, 0xb0(r31)
/* 8040D2FC 0040A23C  98 1D 00 B0 */	stb r0, 0xb0(r29)
/* 8040D300 0040A240  48 04 6C A9 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8040D304 0040A244  3C A0 52 53 */	lis r5, 0x52534C54@ha
/* 8040D308 0040A248  38 80 4B 48 */	li r4, 0x4b48
/* 8040D30C 0040A24C  38 C5 4C 54 */	addi r6, r5, 0x52534C54@l
/* 8040D310 0040A250  38 A0 46 5F */	li r5, 0x465f
/* 8040D314 0040A254  4B F0 20 09 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8040D318 0040A258  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8040D31C 0040A25C  40 82 00 20 */	bne .L_8040D33C
/* 8040D320 0040A260  3C 60 80 4A */	lis r3, lbl_80498CD8@ha
/* 8040D324 0040A264  3C A0 80 4A */	lis r5, lbl_80498FD8@ha
/* 8040D328 0040A268  38 63 8C D8 */	addi r3, r3, lbl_80498CD8@l
/* 8040D32C 0040A26C  38 80 01 DF */	li r4, 0x1df
/* 8040D330 0040A270  38 A5 8F D8 */	addi r5, r5, lbl_80498FD8@l
/* 8040D334 0040A274  4C C6 31 82 */	crclr 6
/* 8040D338 0040A278  4B C1 D3 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8040D33C:
/* 8040D33C 0040A27C  7F 63 DB 78 */	mr r3, r27
/* 8040D340 0040A280  48 04 6C 69 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8040D344 0040A284  38 00 00 02 */	li r0, 2
/* 8040D348 0040A288  80 83 00 08 */	lwz r4, 8(r3)
/* 8040D34C 0040A28C  38 60 00 00 */	li r3, 0
/* 8040D350 0040A290  7C 09 03 A6 */	mtctr r0
.L_8040D354:
/* 8040D354 0040A294  80 A4 00 00 */	lwz r5, 0(r4)
/* 8040D358 0040A298  38 00 00 00 */	li r0, 0
/* 8040D35C 0040A29C  39 63 00 04 */	addi r11, r3, 4
/* 8040D360 0040A2A0  39 43 00 08 */	addi r10, r3, 8
/* 8040D364 0040A2A4  7C A5 18 2E */	lwzx r5, r5, r3
/* 8040D368 0040A2A8  39 23 00 0C */	addi r9, r3, 0xc
/* 8040D36C 0040A2AC  39 03 00 10 */	addi r8, r3, 0x10
/* 8040D370 0040A2B0  38 E3 00 14 */	addi r7, r3, 0x14
/* 8040D374 0040A2B4  98 05 00 18 */	stb r0, 0x18(r5)
/* 8040D378 0040A2B8  38 C3 00 18 */	addi r6, r3, 0x18
/* 8040D37C 0040A2BC  38 A3 00 1C */	addi r5, r3, 0x1c
/* 8040D380 0040A2C0  38 63 00 20 */	addi r3, r3, 0x20
/* 8040D384 0040A2C4  81 84 00 00 */	lwz r12, 0(r4)
/* 8040D388 0040A2C8  7D 6C 58 2E */	lwzx r11, r12, r11
/* 8040D38C 0040A2CC  98 0B 00 18 */	stb r0, 0x18(r11)
/* 8040D390 0040A2D0  81 64 00 00 */	lwz r11, 0(r4)
/* 8040D394 0040A2D4  7D 4B 50 2E */	lwzx r10, r11, r10
/* 8040D398 0040A2D8  98 0A 00 18 */	stb r0, 0x18(r10)
/* 8040D39C 0040A2DC  81 44 00 00 */	lwz r10, 0(r4)
/* 8040D3A0 0040A2E0  7D 2A 48 2E */	lwzx r9, r10, r9
/* 8040D3A4 0040A2E4  98 09 00 18 */	stb r0, 0x18(r9)
/* 8040D3A8 0040A2E8  81 24 00 00 */	lwz r9, 0(r4)
/* 8040D3AC 0040A2EC  7D 09 40 2E */	lwzx r8, r9, r8
/* 8040D3B0 0040A2F0  98 08 00 18 */	stb r0, 0x18(r8)
/* 8040D3B4 0040A2F4  81 04 00 00 */	lwz r8, 0(r4)
/* 8040D3B8 0040A2F8  7C E8 38 2E */	lwzx r7, r8, r7
/* 8040D3BC 0040A2FC  98 07 00 18 */	stb r0, 0x18(r7)
/* 8040D3C0 0040A300  80 E4 00 00 */	lwz r7, 0(r4)
/* 8040D3C4 0040A304  7C C7 30 2E */	lwzx r6, r7, r6
/* 8040D3C8 0040A308  98 06 00 18 */	stb r0, 0x18(r6)
/* 8040D3CC 0040A30C  80 C4 00 00 */	lwz r6, 0(r4)
/* 8040D3D0 0040A310  7C A6 28 2E */	lwzx r5, r6, r5
/* 8040D3D4 0040A314  98 05 00 18 */	stb r0, 0x18(r5)
/* 8040D3D8 0040A318  42 00 FF 7C */	bdnz .L_8040D354
/* 8040D3DC 0040A31C  80 1B 01 48 */	lwz r0, 0x148(r27)
/* 8040D3E0 0040A320  2C 00 00 00 */	cmpwi r0, 0
/* 8040D3E4 0040A324  40 82 00 18 */	bne .L_8040D3FC
/* 8040D3E8 0040A328  80 BB 01 30 */	lwz r5, 0x130(r27)
/* 8040D3EC 0040A32C  7F 63 DB 78 */	mr r3, r27
/* 8040D3F0 0040A330  7F 84 E3 78 */	mr r4, r28
/* 8040D3F4 0040A334  48 00 0E 55 */	bl drawReplace__Q32kh6Screen14ObjFinalResultFR8Graphicsi
/* 8040D3F8 0040A338  48 00 00 84 */	b .L_8040D47C
.L_8040D3FC:
/* 8040D3FC 0040A33C  2C 00 00 01 */	cmpwi r0, 1
/* 8040D400 0040A340  40 82 00 18 */	bne .L_8040D418
/* 8040D404 0040A344  C0 1B 01 2C */	lfs f0, 0x12c(r27)
/* 8040D408 0040A348  80 7B 01 30 */	lwz r3, 0x130(r27)
/* 8040D40C 0040A34C  FF E0 00 50 */	fneg f31, f0
/* 8040D410 0040A350  3B 43 00 01 */	addi r26, r3, 1
/* 8040D414 0040A354  48 00 00 10 */	b .L_8040D424
.L_8040D418:
/* 8040D418 0040A358  80 7B 01 30 */	lwz r3, 0x130(r27)
/* 8040D41C 0040A35C  C3 FB 01 2C */	lfs f31, 0x12c(r27)
/* 8040D420 0040A360  3B 43 FF FF */	addi r26, r3, -1
.L_8040D424:
/* 8040D424 0040A364  7F A3 EB 78 */	mr r3, r29
/* 8040D428 0040A368  C0 22 1E 40 */	lfs f1, lbl_805201A0@sda21(r2)
/* 8040D42C 0040A36C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8040D430 0040A370  C0 5B 01 28 */	lfs f2, 0x128(r27)
/* 8040D434 0040A374  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8040D438 0040A378  7D 89 03 A6 */	mtctr r12
/* 8040D43C 0040A37C  4E 80 04 21 */	bctrl 
/* 8040D440 0040A380  7F 63 DB 78 */	mr r3, r27
/* 8040D444 0040A384  7F 84 E3 78 */	mr r4, r28
/* 8040D448 0040A388  7F 45 D3 78 */	mr r5, r26
/* 8040D44C 0040A38C  48 00 0D FD */	bl drawReplace__Q32kh6Screen14ObjFinalResultFR8Graphicsi
/* 8040D450 0040A390  7F A3 EB 78 */	mr r3, r29
/* 8040D454 0040A394  FC 40 F8 90 */	fmr f2, f31
/* 8040D458 0040A398  81 9D 00 00 */	lwz r12, 0(r29)
/* 8040D45C 0040A39C  C0 22 1E 40 */	lfs f1, lbl_805201A0@sda21(r2)
/* 8040D460 0040A3A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8040D464 0040A3A4  7D 89 03 A6 */	mtctr r12
/* 8040D468 0040A3A8  4E 80 04 21 */	bctrl 
/* 8040D46C 0040A3AC  80 BB 01 30 */	lwz r5, 0x130(r27)
/* 8040D470 0040A3B0  7F 63 DB 78 */	mr r3, r27
/* 8040D474 0040A3B4  7F 84 E3 78 */	mr r4, r28
/* 8040D478 0040A3B8  48 00 0D D1 */	bl drawReplace__Q32kh6Screen14ObjFinalResultFR8Graphicsi
.L_8040D47C:
/* 8040D47C 0040A3BC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8040D480 0040A3C0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8040D484 0040A3C4  80 A1 00 20 */	lwz r5, 0x20(r1)
/* 8040D488 0040A3C8  80 C1 00 1C */	lwz r6, 0x1c(r1)
/* 8040D48C 0040A3CC  4B CD C3 4D */	bl GXSetScissor
/* 8040D490 0040A3D0  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8040D494 0040A3D4  81 9C 00 BC */	lwz r12, 0xbc(r28)
/* 8040D498 0040A3D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8040D49C 0040A3DC  7D 89 03 A6 */	mtctr r12
/* 8040D4A0 0040A3E0  4E 80 04 21 */	bctrl 
/* 8040D4A4 0040A3E4  38 60 00 00 */	li r3, 0
/* 8040D4A8 0040A3E8  38 00 00 01 */	li r0, 1
/* 8040D4AC 0040A3EC  98 7E 00 B0 */	stb r3, 0xb0(r30)
/* 8040D4B0 0040A3F0  7F 84 E3 78 */	mr r4, r28
/* 8040D4B4 0040A3F4  38 BC 00 BC */	addi r5, r28, 0xbc
/* 8040D4B8 0040A3F8  98 1F 00 B0 */	stb r0, 0xb0(r31)
/* 8040D4BC 0040A3FC  98 7D 00 B0 */	stb r3, 0xb0(r29)
/* 8040D4C0 0040A400  80 7B 00 3C */	lwz r3, 0x3c(r27)
/* 8040D4C4 0040A404  81 83 00 00 */	lwz r12, 0(r3)
/* 8040D4C8 0040A408  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 8040D4CC 0040A40C  7D 89 03 A6 */	mtctr r12
/* 8040D4D0 0040A410  4E 80 04 21 */	bctrl 
/* 8040D4D4 0040A414  88 1B 01 4F */	lbz r0, 0x14f(r27)
/* 8040D4D8 0040A418  28 00 00 00 */	cmplwi r0, 0
/* 8040D4DC 0040A41C  41 82 00 BC */	beq .L_8040D598
/* 8040D4E0 0040A420  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8040D4E4 0040A424  81 9C 00 BC */	lwz r12, 0xbc(r28)
/* 8040D4E8 0040A428  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8040D4EC 0040A42C  7D 89 03 A6 */	mtctr r12
/* 8040D4F0 0040A430  4E 80 04 21 */	bctrl 
/* 8040D4F4 0040A434  88 1B 01 4F */	lbz r0, 0x14f(r27)
/* 8040D4F8 0040A438  39 00 00 00 */	li r8, 0
/* 8040D4FC 0040A43C  99 01 00 18 */	stb r8, 0x18(r1)
/* 8040D500 0040A440  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8040D504 0040A444  38 81 00 08 */	addi r4, r1, 8
/* 8040D508 0040A448  38 A1 00 0C */	addi r5, r1, 0xc
/* 8040D50C 0040A44C  99 01 00 19 */	stb r8, 0x19(r1)
/* 8040D510 0040A450  38 C1 00 10 */	addi r6, r1, 0x10
/* 8040D514 0040A454  38 E1 00 14 */	addi r7, r1, 0x14
/* 8040D518 0040A458  99 01 00 1A */	stb r8, 0x1a(r1)
/* 8040D51C 0040A45C  98 01 00 1B */	stb r0, 0x1b(r1)
/* 8040D520 0040A460  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8040D524 0040A464  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040D528 0040A468  90 01 00 10 */	stw r0, 0x10(r1)
/* 8040D52C 0040A46C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8040D530 0040A470  90 01 00 08 */	stw r0, 8(r1)
/* 8040D534 0040A474  4B C2 91 59 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 8040D538 0040A478  48 01 5C ED */	bl getRenderModeObj__6SystemFv
/* 8040D53C 0040A47C  A3 A3 00 06 */	lhz r29, 6(r3)
/* 8040D540 0040A480  48 01 5C E5 */	bl getRenderModeObj__6SystemFv
/* 8040D544 0040A484  A0 83 00 04 */	lhz r4, 4(r3)
/* 8040D548 0040A488  3C 00 43 30 */	lis r0, 0x4330
/* 8040D54C 0040A48C  C0 62 1E 40 */	lfs f3, lbl_805201A0@sda21(r2)
/* 8040D550 0040A490  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8040D554 0040A494  90 81 00 44 */	stw r4, 0x44(r1)
/* 8040D558 0040A498  38 81 00 2C */	addi r4, r1, 0x2c
/* 8040D55C 0040A49C  C8 42 1E 48 */	lfd f2, lbl_805201A8@sda21(r2)
/* 8040D560 0040A4A0  90 01 00 40 */	stw r0, 0x40(r1)
/* 8040D564 0040A4A4  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 8040D568 0040A4A8  93 A1 00 4C */	stw r29, 0x4c(r1)
/* 8040D56C 0040A4AC  EC 20 10 28 */	fsubs f1, f0, f2
/* 8040D570 0040A4B0  90 01 00 48 */	stw r0, 0x48(r1)
/* 8040D574 0040A4B4  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 8040D578 0040A4B8  EC 23 08 2A */	fadds f1, f3, f1
/* 8040D57C 0040A4BC  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 8040D580 0040A4C0  EC 00 10 28 */	fsubs f0, f0, f2
/* 8040D584 0040A4C4  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8040D588 0040A4C8  EC 03 00 2A */	fadds f0, f3, f0
/* 8040D58C 0040A4CC  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8040D590 0040A4D0  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8040D594 0040A4D4  4B C2 92 41 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
.L_8040D598:
/* 8040D598 0040A4D8  88 1B 01 4E */	lbz r0, 0x14e(r27)
/* 8040D59C 0040A4DC  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8040D5A0 0040A4E0  41 82 00 20 */	beq .L_8040D5C0
/* 8040D5A4 0040A4E4  38 7C 01 90 */	addi r3, r28, 0x190
/* 8040D5A8 0040A4E8  81 9C 01 90 */	lwz r12, 0x190(r28)
/* 8040D5AC 0040A4EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8040D5B0 0040A4F0  7D 89 03 A6 */	mtctr r12
/* 8040D5B4 0040A4F4  4E 80 04 21 */	bctrl 
/* 8040D5B8 0040A4F8  80 7B 00 38 */	lwz r3, 0x38(r27)
/* 8040D5BC 0040A4FC  4B FC F8 71 */	bl draw__Q33ebi4Save4TMgrFv
.L_8040D5C0:
/* 8040D5C0 0040A500  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8040D5C4 0040A504  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8040D5C8 0040A508  BB 41 00 58 */	lmw r26, 0x58(r1)
/* 8040D5CC 0040A50C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8040D5D0 0040A510  7C 08 03 A6 */	mtlr r0
/* 8040D5D4 0040A514  38 21 00 80 */	addi r1, r1, 0x80
/* 8040D5D8 0040A518  4E 80 00 20 */	blr 
.endfn doDraw__Q32kh6Screen14ObjFinalResultFR8Graphics

.fn updateCommon__Q32kh6Screen14ObjFinalResultFv, global
/* 8040D5DC 0040A51C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8040D5E0 0040A520  7C 08 02 A6 */	mflr r0
/* 8040D5E4 0040A524  90 01 00 84 */	stw r0, 0x84(r1)
/* 8040D5E8 0040A528  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8040D5EC 0040A52C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8040D5F0 0040A530  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8040D5F4 0040A534  7C 7F 1B 78 */	mr r31, r3
/* 8040D5F8 0040A538  3C 80 6D 61 */	lis r4, 0x6D61736B@ha
/* 8040D5FC 0040A53C  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8040D600 0040A540  38 C4 73 6B */	addi r6, r4, 0x6D61736B@l
/* 8040D604 0040A544  38 A0 00 4E */	li r5, 0x4e
/* 8040D608 0040A548  81 83 00 00 */	lwz r12, 0(r3)
/* 8040D60C 0040A54C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040D610 0040A550  7D 89 03 A6 */	mtctr r12
/* 8040D614 0040A554  4E 80 04 21 */	bctrl 
/* 8040D618 0040A558  7C 64 1B 78 */	mr r4, r3
/* 8040D61C 0040A55C  38 61 00 24 */	addi r3, r1, 0x24
/* 8040D620 0040A560  38 A0 00 00 */	li r5, 0
/* 8040D624 0040A564  4B C2 B9 75 */	bl getGlbVtx__7J2DPaneCFUc
/* 8040D628 0040A568  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040D62C 0040A56C  3C 80 6D 61 */	lis r4, 0x6D61736B@ha
/* 8040D630 0040A570  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 8040D634 0040A574  38 C4 73 6B */	addi r6, r4, 0x6D61736B@l
/* 8040D638 0040A578  81 83 00 00 */	lwz r12, 0(r3)
/* 8040D63C 0040A57C  38 A0 00 4E */	li r5, 0x4e
/* 8040D640 0040A580  80 81 00 28 */	lwz r4, 0x28(r1)
/* 8040D644 0040A584  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8040D648 0040A588  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040D64C 0040A58C  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 8040D650 0040A590  90 81 00 40 */	stw r4, 0x40(r1)
/* 8040D654 0040A594  90 01 00 44 */	stw r0, 0x44(r1)
/* 8040D658 0040A598  7D 89 03 A6 */	mtctr r12
/* 8040D65C 0040A59C  4E 80 04 21 */	bctrl 
/* 8040D660 0040A5A0  7C 64 1B 78 */	mr r4, r3
/* 8040D664 0040A5A4  38 61 00 18 */	addi r3, r1, 0x18
/* 8040D668 0040A5A8  38 A0 00 03 */	li r5, 3
/* 8040D66C 0040A5AC  4B C2 B9 2D */	bl getGlbVtx__7J2DPaneCFUc
/* 8040D670 0040A5B0  C0 02 1E 50 */	lfs f0, lbl_805201B0@sda21(r2)
/* 8040D674 0040A5B4  C3 E1 00 40 */	lfs f31, 0x40(r1)
/* 8040D678 0040A5B8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8040D67C 0040A5BC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8040D680 0040A5C0  EC 20 F8 2A */	fadds f1, f0, f31
/* 8040D684 0040A5C4  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8040D688 0040A5C8  90 81 00 30 */	stw r4, 0x30(r1)
/* 8040D68C 0040A5CC  90 61 00 34 */	stw r3, 0x34(r1)
/* 8040D690 0040A5D0  90 01 00 38 */	stw r0, 0x38(r1)
/* 8040D694 0040A5D4  4B CB 44 B9 */	bl __cvt_fp2unsigned
/* 8040D698 0040A5D8  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8040D69C 0040A5DC  90 7F 01 40 */	stw r3, 0x140(r31)
/* 8040D6A0 0040A5E0  EC 20 F8 28 */	fsubs f1, f0, f31
/* 8040D6A4 0040A5E4  4B CB 44 A9 */	bl __cvt_fp2unsigned
/* 8040D6A8 0040A5E8  90 7F 01 44 */	stw r3, 0x144(r31)
/* 8040D6AC 0040A5EC  3C 00 43 30 */	lis r0, 0x4330
/* 8040D6B0 0040A5F0  C0 02 1E 54 */	lfs f0, lbl_805201B4@sda21(r2)
/* 8040D6B4 0040A5F4  C0 5F 00 74 */	lfs f2, 0x74(r31)
/* 8040D6B8 0040A5F8  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8040D6BC 0040A5FC  90 01 00 48 */	stw r0, 0x48(r1)
/* 8040D6C0 0040A600  C8 22 1E 78 */	lfd f1, lbl_805201D8@sda21(r2)
/* 8040D6C4 0040A604  D0 43 00 08 */	stfs f2, 8(r3)
/* 8040D6C8 0040A608  C0 5F 00 74 */	lfs f2, 0x74(r31)
/* 8040D6CC 0040A60C  EC 02 00 2A */	fadds f0, f2, f0
/* 8040D6D0 0040A610  D0 1F 00 74 */	stfs f0, 0x74(r31)
/* 8040D6D4 0040A614  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8040D6D8 0040A618  C0 5F 00 74 */	lfs f2, 0x74(r31)
/* 8040D6DC 0040A61C  A8 03 00 06 */	lha r0, 6(r3)
/* 8040D6E0 0040A620  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8040D6E4 0040A624  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8040D6E8 0040A628  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 8040D6EC 0040A62C  EC 00 08 28 */	fsubs f0, f0, f1
/* 8040D6F0 0040A630  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8040D6F4 0040A634  4C 41 13 82 */	cror 2, 1, 2
/* 8040D6F8 0040A638  40 82 00 0C */	bne .L_8040D704
/* 8040D6FC 0040A63C  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040D700 0040A640  D0 1F 00 74 */	stfs f0, 0x74(r31)
.L_8040D704:
/* 8040D704 0040A644  C0 1F 00 78 */	lfs f0, 0x78(r31)
/* 8040D708 0040A648  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 8040D70C 0040A64C  C0 22 1E 54 */	lfs f1, lbl_805201B4@sda21(r2)
/* 8040D710 0040A650  D0 03 00 08 */	stfs f0, 8(r3)
/* 8040D714 0040A654  C0 02 1E 58 */	lfs f0, lbl_805201B8@sda21(r2)
/* 8040D718 0040A658  C0 5F 00 78 */	lfs f2, 0x78(r31)
/* 8040D71C 0040A65C  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 8040D720 0040A660  D0 43 00 08 */	stfs f2, 8(r3)
/* 8040D724 0040A664  C0 5F 00 78 */	lfs f2, 0x78(r31)
/* 8040D728 0040A668  EC 22 08 2A */	fadds f1, f2, f1
/* 8040D72C 0040A66C  D0 3F 00 78 */	stfs f1, 0x78(r31)
/* 8040D730 0040A670  C0 3F 00 78 */	lfs f1, 0x78(r31)
/* 8040D734 0040A674  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8040D738 0040A678  4C 41 13 82 */	cror 2, 1, 2
/* 8040D73C 0040A67C  40 82 00 0C */	bne .L_8040D748
/* 8040D740 0040A680  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040D744 0040A684  D0 1F 00 78 */	stfs f0, 0x78(r31)
.L_8040D748:
/* 8040D748 0040A688  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 8040D74C 0040A68C  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8040D750 0040A690  C0 22 1E 54 */	lfs f1, lbl_805201B4@sda21(r2)
/* 8040D754 0040A694  D0 03 00 08 */	stfs f0, 8(r3)
/* 8040D758 0040A698  C0 02 1E 5C */	lfs f0, lbl_805201BC@sda21(r2)
/* 8040D75C 0040A69C  C0 5F 00 7C */	lfs f2, 0x7c(r31)
/* 8040D760 0040A6A0  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8040D764 0040A6A4  D0 43 00 08 */	stfs f2, 8(r3)
/* 8040D768 0040A6A8  C0 5F 00 7C */	lfs f2, 0x7c(r31)
/* 8040D76C 0040A6AC  EC 22 08 2A */	fadds f1, f2, f1
/* 8040D770 0040A6B0  D0 3F 00 7C */	stfs f1, 0x7c(r31)
/* 8040D774 0040A6B4  C0 3F 00 7C */	lfs f1, 0x7c(r31)
/* 8040D778 0040A6B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8040D77C 0040A6BC  4C 41 13 82 */	cror 2, 1, 2
/* 8040D780 0040A6C0  40 82 00 0C */	bne .L_8040D78C
/* 8040D784 0040A6C4  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040D788 0040A6C8  D0 1F 00 7C */	stfs f0, 0x7c(r31)
.L_8040D78C:
/* 8040D78C 0040A6CC  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 8040D790 0040A6D0  3C 00 43 30 */	lis r0, 0x4330
/* 8040D794 0040A6D4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8040D798 0040A6D8  C0 02 1E 54 */	lfs f0, lbl_805201B4@sda21(r2)
/* 8040D79C 0040A6DC  D0 23 00 08 */	stfs f1, 8(r3)
/* 8040D7A0 0040A6E0  C8 22 1E 78 */	lfd f1, lbl_805201D8@sda21(r2)
/* 8040D7A4 0040A6E4  C0 5F 00 80 */	lfs f2, 0x80(r31)
/* 8040D7A8 0040A6E8  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 8040D7AC 0040A6EC  90 01 00 48 */	stw r0, 0x48(r1)
/* 8040D7B0 0040A6F0  D0 43 00 08 */	stfs f2, 8(r3)
/* 8040D7B4 0040A6F4  C0 5F 00 84 */	lfs f2, 0x84(r31)
/* 8040D7B8 0040A6F8  80 7F 00 64 */	lwz r3, 0x64(r31)
/* 8040D7BC 0040A6FC  D0 43 00 08 */	stfs f2, 8(r3)
/* 8040D7C0 0040A700  C0 5F 00 88 */	lfs f2, 0x88(r31)
/* 8040D7C4 0040A704  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 8040D7C8 0040A708  D0 43 00 08 */	stfs f2, 8(r3)
/* 8040D7CC 0040A70C  C0 5F 00 80 */	lfs f2, 0x80(r31)
/* 8040D7D0 0040A710  EC 02 00 2A */	fadds f0, f2, f0
/* 8040D7D4 0040A714  D0 1F 00 80 */	stfs f0, 0x80(r31)
/* 8040D7D8 0040A718  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 8040D7DC 0040A71C  C0 5F 00 80 */	lfs f2, 0x80(r31)
/* 8040D7E0 0040A720  A8 03 00 06 */	lha r0, 6(r3)
/* 8040D7E4 0040A724  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8040D7E8 0040A728  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8040D7EC 0040A72C  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 8040D7F0 0040A730  EC 00 08 28 */	fsubs f0, f0, f1
/* 8040D7F4 0040A734  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8040D7F8 0040A738  4C 41 13 82 */	cror 2, 1, 2
/* 8040D7FC 0040A73C  40 82 00 0C */	bne .L_8040D808
/* 8040D800 0040A740  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040D804 0040A744  D0 1F 00 80 */	stfs f0, 0x80(r31)
.L_8040D808:
/* 8040D808 0040A748  C0 3F 00 84 */	lfs f1, 0x84(r31)
/* 8040D80C 0040A74C  3C 00 43 30 */	lis r0, 0x4330
/* 8040D810 0040A750  C0 02 1E 54 */	lfs f0, lbl_805201B4@sda21(r2)
/* 8040D814 0040A754  90 01 00 48 */	stw r0, 0x48(r1)
/* 8040D818 0040A758  EC 01 00 2A */	fadds f0, f1, f0
/* 8040D81C 0040A75C  C8 22 1E 78 */	lfd f1, lbl_805201D8@sda21(r2)
/* 8040D820 0040A760  D0 1F 00 84 */	stfs f0, 0x84(r31)
/* 8040D824 0040A764  80 7F 00 64 */	lwz r3, 0x64(r31)
/* 8040D828 0040A768  C0 5F 00 84 */	lfs f2, 0x84(r31)
/* 8040D82C 0040A76C  A8 03 00 06 */	lha r0, 6(r3)
/* 8040D830 0040A770  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8040D834 0040A774  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8040D838 0040A778  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 8040D83C 0040A77C  EC 00 08 28 */	fsubs f0, f0, f1
/* 8040D840 0040A780  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8040D844 0040A784  4C 41 13 82 */	cror 2, 1, 2
/* 8040D848 0040A788  40 82 00 0C */	bne .L_8040D854
/* 8040D84C 0040A78C  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040D850 0040A790  D0 1F 00 84 */	stfs f0, 0x84(r31)
.L_8040D854:
/* 8040D854 0040A794  C0 3F 00 88 */	lfs f1, 0x88(r31)
/* 8040D858 0040A798  3C 00 43 30 */	lis r0, 0x4330
/* 8040D85C 0040A79C  C0 02 1E 54 */	lfs f0, lbl_805201B4@sda21(r2)
/* 8040D860 0040A7A0  90 01 00 48 */	stw r0, 0x48(r1)
/* 8040D864 0040A7A4  EC 01 00 2A */	fadds f0, f1, f0
/* 8040D868 0040A7A8  C8 22 1E 78 */	lfd f1, lbl_805201D8@sda21(r2)
/* 8040D86C 0040A7AC  D0 1F 00 88 */	stfs f0, 0x88(r31)
/* 8040D870 0040A7B0  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 8040D874 0040A7B4  C0 5F 00 88 */	lfs f2, 0x88(r31)
/* 8040D878 0040A7B8  A8 03 00 06 */	lha r0, 6(r3)
/* 8040D87C 0040A7BC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8040D880 0040A7C0  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8040D884 0040A7C4  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 8040D888 0040A7C8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8040D88C 0040A7CC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8040D890 0040A7D0  4C 41 13 82 */	cror 2, 1, 2
/* 8040D894 0040A7D4  40 82 00 0C */	bne .L_8040D8A0
/* 8040D898 0040A7D8  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040D89C 0040A7DC  D0 1F 00 88 */	stfs f0, 0x88(r31)
.L_8040D8A0:
/* 8040D8A0 0040A7E0  C0 1F 00 6C */	lfs f0, 0x6c(r31)
/* 8040D8A4 0040A7E4  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 8040D8A8 0040A7E8  D0 03 00 08 */	stfs f0, 8(r3)
/* 8040D8AC 0040A7EC  88 7F 01 4C */	lbz r3, 0x14c(r31)
/* 8040D8B0 0040A7F0  28 03 00 00 */	cmplwi r3, 0
/* 8040D8B4 0040A7F4  40 82 00 A8 */	bne .L_8040D95C
/* 8040D8B8 0040A7F8  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040D8BC 0040A7FC  C0 5F 00 6C */	lfs f2, 0x6c(r31)
/* 8040D8C0 0040A800  C0 23 41 88 */	lfs f1, msVal__Q32kh6Screen14ObjFinalResult@l(r3)
/* 8040D8C4 0040A804  C0 02 1E 60 */	lfs f0, lbl_805201C0@sda21(r2)
/* 8040D8C8 0040A808  EC 22 08 2A */	fadds f1, f2, f1
/* 8040D8CC 0040A80C  D0 3F 00 6C */	stfs f1, 0x6c(r31)
/* 8040D8D0 0040A810  C0 3F 00 6C */	lfs f1, 0x6c(r31)
/* 8040D8D4 0040A814  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8040D8D8 0040A818  4C 41 13 82 */	cror 2, 1, 2
/* 8040D8DC 0040A81C  40 82 00 88 */	bne .L_8040D964
/* 8040D8E0 0040A820  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040D8E4 0040A824  D0 1F 00 6C */	stfs f0, 0x6c(r31)
/* 8040D8E8 0040A828  4B CB BC B9 */	bl rand
/* 8040D8EC 0040A82C  3C A0 43 30 */	lis r5, 0x4330
/* 8040D8F0 0040A830  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8040D8F4 0040A834  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8040D8F8 0040A838  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040D8FC 0040A83C  38 83 41 88 */	addi r4, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040D900 0040A840  C8 42 1E 78 */	lfd f2, lbl_805201D8@sda21(r2)
/* 8040D904 0040A844  90 A1 00 48 */	stw r5, 0x48(r1)
/* 8040D908 0040A848  88 64 00 1D */	lbz r3, 0x1d(r4)
/* 8040D90C 0040A84C  C8 21 00 48 */	lfd f1, 0x48(r1)
/* 8040D910 0040A850  C0 02 1E 64 */	lfs f0, lbl_805201C4@sda21(r2)
/* 8040D914 0040A854  EC 21 10 28 */	fsubs f1, f1, f2
/* 8040D918 0040A858  88 04 00 1C */	lbz r0, 0x1c(r4)
/* 8040D91C 0040A85C  90 61 00 54 */	stw r3, 0x54(r1)
/* 8040D920 0040A860  C8 42 1E 48 */	lfd f2, lbl_805201A8@sda21(r2)
/* 8040D924 0040A864  EC 61 00 24 */	fdivs f3, f1, f0
/* 8040D928 0040A868  90 A1 00 50 */	stw r5, 0x50(r1)
/* 8040D92C 0040A86C  C8 21 00 50 */	lfd f1, 0x50(r1)
/* 8040D930 0040A870  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8040D934 0040A874  90 A1 00 58 */	stw r5, 0x58(r1)
/* 8040D938 0040A878  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 8040D93C 0040A87C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8040D940 0040A880  EC 00 10 28 */	fsubs f0, f0, f2
/* 8040D944 0040A884  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 8040D948 0040A888  FC 00 00 1E */	fctiwz f0, f0
/* 8040D94C 0040A88C  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8040D950 0040A890  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8040D954 0040A894  98 1F 01 4C */	stb r0, 0x14c(r31)
/* 8040D958 0040A898  48 00 00 0C */	b .L_8040D964
.L_8040D95C:
/* 8040D95C 0040A89C  38 03 FF FF */	addi r0, r3, -1
/* 8040D960 0040A8A0  98 1F 01 4C */	stb r0, 0x14c(r31)
.L_8040D964:
/* 8040D964 0040A8A4  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 8040D968 0040A8A8  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8040D96C 0040A8AC  D0 03 00 08 */	stfs f0, 8(r3)
/* 8040D970 0040A8B0  88 7F 01 4D */	lbz r3, 0x14d(r31)
/* 8040D974 0040A8B4  28 03 00 00 */	cmplwi r3, 0
/* 8040D978 0040A8B8  40 82 00 A8 */	bne .L_8040DA20
/* 8040D97C 0040A8BC  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040D980 0040A8C0  C0 5F 00 70 */	lfs f2, 0x70(r31)
/* 8040D984 0040A8C4  C0 23 41 88 */	lfs f1, msVal__Q32kh6Screen14ObjFinalResult@l(r3)
/* 8040D988 0040A8C8  C0 02 1E 68 */	lfs f0, lbl_805201C8@sda21(r2)
/* 8040D98C 0040A8CC  EC 22 08 2A */	fadds f1, f2, f1
/* 8040D990 0040A8D0  D0 3F 00 70 */	stfs f1, 0x70(r31)
/* 8040D994 0040A8D4  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 8040D998 0040A8D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8040D99C 0040A8DC  4C 41 13 82 */	cror 2, 1, 2
/* 8040D9A0 0040A8E0  40 82 00 88 */	bne .L_8040DA28
/* 8040D9A4 0040A8E4  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040D9A8 0040A8E8  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 8040D9AC 0040A8EC  4B CB BB F5 */	bl rand
/* 8040D9B0 0040A8F0  3C A0 43 30 */	lis r5, 0x4330
/* 8040D9B4 0040A8F4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8040D9B8 0040A8F8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8040D9BC 0040A8FC  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040D9C0 0040A900  38 83 41 88 */	addi r4, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040D9C4 0040A904  C8 42 1E 78 */	lfd f2, lbl_805201D8@sda21(r2)
/* 8040D9C8 0040A908  90 A1 00 60 */	stw r5, 0x60(r1)
/* 8040D9CC 0040A90C  88 64 00 1D */	lbz r3, 0x1d(r4)
/* 8040D9D0 0040A910  C8 21 00 60 */	lfd f1, 0x60(r1)
/* 8040D9D4 0040A914  C0 02 1E 64 */	lfs f0, lbl_805201C4@sda21(r2)
/* 8040D9D8 0040A918  EC 21 10 28 */	fsubs f1, f1, f2
/* 8040D9DC 0040A91C  88 04 00 1C */	lbz r0, 0x1c(r4)
/* 8040D9E0 0040A920  90 61 00 5C */	stw r3, 0x5c(r1)
/* 8040D9E4 0040A924  C8 42 1E 48 */	lfd f2, lbl_805201A8@sda21(r2)
/* 8040D9E8 0040A928  EC 61 00 24 */	fdivs f3, f1, f0
/* 8040D9EC 0040A92C  90 A1 00 58 */	stw r5, 0x58(r1)
/* 8040D9F0 0040A930  C8 21 00 58 */	lfd f1, 0x58(r1)
/* 8040D9F4 0040A934  90 01 00 54 */	stw r0, 0x54(r1)
/* 8040D9F8 0040A938  90 A1 00 50 */	stw r5, 0x50(r1)
/* 8040D9FC 0040A93C  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 8040DA00 0040A940  EC 21 10 28 */	fsubs f1, f1, f2
/* 8040DA04 0040A944  EC 00 10 28 */	fsubs f0, f0, f2
/* 8040DA08 0040A948  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 8040DA0C 0040A94C  FC 00 00 1E */	fctiwz f0, f0
/* 8040DA10 0040A950  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8040DA14 0040A954  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8040DA18 0040A958  98 1F 01 4D */	stb r0, 0x14d(r31)
/* 8040DA1C 0040A95C  48 00 00 0C */	b .L_8040DA28
.L_8040DA20:
/* 8040DA20 0040A960  38 03 FF FF */	addi r0, r3, -1
/* 8040DA24 0040A964  98 1F 01 4D */	stb r0, 0x14d(r31)
.L_8040DA28:
/* 8040DA28 0040A968  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040DA2C 0040A96C  4B C3 31 01 */	bl animation__9J2DScreenFv
/* 8040DA30 0040A970  C0 3F 01 20 */	lfs f1, 0x120(r31)
/* 8040DA34 0040A974  C0 42 1E 54 */	lfs f2, lbl_805201B4@sda21(r2)
/* 8040DA38 0040A978  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8040DA3C 0040A97C  40 80 00 44 */	bge .L_8040DA80
/* 8040DA40 0040A980  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040DA44 0040A984  7F E4 FB 78 */	mr r4, r31
/* 8040DA48 0040A988  38 C3 41 88 */	addi r6, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040DA4C 0040A98C  38 A6 00 10 */	addi r5, r6, 0x10
/* 8040DA50 0040A990  38 61 00 14 */	addi r3, r1, 0x14
/* 8040DA54 0040A994  38 C6 00 14 */	addi r6, r6, 0x14
/* 8040DA58 0040A998  48 00 10 B1 */	bl getClr__Q32kh6Screen14ObjFinalResultFRCQ28JUtility6TColorRCQ28JUtility6TColorf
/* 8040DA5C 0040A99C  88 01 00 14 */	lbz r0, 0x14(r1)
/* 8040DA60 0040A9A0  98 1F 01 24 */	stb r0, 0x124(r31)
/* 8040DA64 0040A9A4  88 01 00 15 */	lbz r0, 0x15(r1)
/* 8040DA68 0040A9A8  98 1F 01 25 */	stb r0, 0x125(r31)
/* 8040DA6C 0040A9AC  88 01 00 16 */	lbz r0, 0x16(r1)
/* 8040DA70 0040A9B0  98 1F 01 26 */	stb r0, 0x126(r31)
/* 8040DA74 0040A9B4  88 01 00 17 */	lbz r0, 0x17(r1)
/* 8040DA78 0040A9B8  98 1F 01 27 */	stb r0, 0x127(r31)
/* 8040DA7C 0040A9BC  48 00 00 F0 */	b .L_8040DB6C
.L_8040DA80:
/* 8040DA80 0040A9C0  C0 02 1E 44 */	lfs f0, lbl_805201A4@sda21(r2)
/* 8040DA84 0040A9C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8040DA88 0040A9C8  40 80 00 48 */	bge .L_8040DAD0
/* 8040DA8C 0040A9CC  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040DA90 0040A9D0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8040DA94 0040A9D4  38 C3 41 88 */	addi r6, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040DA98 0040A9D8  7F E4 FB 78 */	mr r4, r31
/* 8040DA9C 0040A9DC  38 61 00 10 */	addi r3, r1, 0x10
/* 8040DAA0 0040A9E0  38 A6 00 14 */	addi r5, r6, 0x14
/* 8040DAA4 0040A9E4  38 C6 00 18 */	addi r6, r6, 0x18
/* 8040DAA8 0040A9E8  48 00 10 61 */	bl getClr__Q32kh6Screen14ObjFinalResultFRCQ28JUtility6TColorRCQ28JUtility6TColorf
/* 8040DAAC 0040A9EC  88 01 00 10 */	lbz r0, 0x10(r1)
/* 8040DAB0 0040A9F0  98 1F 01 24 */	stb r0, 0x124(r31)
/* 8040DAB4 0040A9F4  88 01 00 11 */	lbz r0, 0x11(r1)
/* 8040DAB8 0040A9F8  98 1F 01 25 */	stb r0, 0x125(r31)
/* 8040DABC 0040A9FC  88 01 00 12 */	lbz r0, 0x12(r1)
/* 8040DAC0 0040AA00  98 1F 01 26 */	stb r0, 0x126(r31)
/* 8040DAC4 0040AA04  88 01 00 13 */	lbz r0, 0x13(r1)
/* 8040DAC8 0040AA08  98 1F 01 27 */	stb r0, 0x127(r31)
/* 8040DACC 0040AA0C  48 00 00 A0 */	b .L_8040DB6C
.L_8040DAD0:
/* 8040DAD0 0040AA10  C0 42 1E 6C */	lfs f2, lbl_805201CC@sda21(r2)
/* 8040DAD4 0040AA14  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8040DAD8 0040AA18  40 80 00 48 */	bge .L_8040DB20
/* 8040DADC 0040AA1C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040DAE0 0040AA20  EC 21 00 28 */	fsubs f1, f1, f0
/* 8040DAE4 0040AA24  38 C3 41 88 */	addi r6, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040DAE8 0040AA28  7F E4 FB 78 */	mr r4, r31
/* 8040DAEC 0040AA2C  38 61 00 0C */	addi r3, r1, 0xc
/* 8040DAF0 0040AA30  38 A6 00 18 */	addi r5, r6, 0x18
/* 8040DAF4 0040AA34  38 C6 00 14 */	addi r6, r6, 0x14
/* 8040DAF8 0040AA38  48 00 10 11 */	bl getClr__Q32kh6Screen14ObjFinalResultFRCQ28JUtility6TColorRCQ28JUtility6TColorf
/* 8040DAFC 0040AA3C  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8040DB00 0040AA40  98 1F 01 24 */	stb r0, 0x124(r31)
/* 8040DB04 0040AA44  88 01 00 0D */	lbz r0, 0xd(r1)
/* 8040DB08 0040AA48  98 1F 01 25 */	stb r0, 0x125(r31)
/* 8040DB0C 0040AA4C  88 01 00 0E */	lbz r0, 0xe(r1)
/* 8040DB10 0040AA50  98 1F 01 26 */	stb r0, 0x126(r31)
/* 8040DB14 0040AA54  88 01 00 0F */	lbz r0, 0xf(r1)
/* 8040DB18 0040AA58  98 1F 01 27 */	stb r0, 0x127(r31)
/* 8040DB1C 0040AA5C  48 00 00 50 */	b .L_8040DB6C
.L_8040DB20:
/* 8040DB20 0040AA60  C0 02 1E 70 */	lfs f0, lbl_805201D0@sda21(r2)
/* 8040DB24 0040AA64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8040DB28 0040AA68  40 80 00 44 */	bge .L_8040DB6C
/* 8040DB2C 0040AA6C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040DB30 0040AA70  EC 21 10 28 */	fsubs f1, f1, f2
/* 8040DB34 0040AA74  38 C3 41 88 */	addi r6, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040DB38 0040AA78  7F E4 FB 78 */	mr r4, r31
/* 8040DB3C 0040AA7C  38 61 00 08 */	addi r3, r1, 8
/* 8040DB40 0040AA80  38 A6 00 14 */	addi r5, r6, 0x14
/* 8040DB44 0040AA84  38 C6 00 10 */	addi r6, r6, 0x10
/* 8040DB48 0040AA88  48 00 0F C1 */	bl getClr__Q32kh6Screen14ObjFinalResultFRCQ28JUtility6TColorRCQ28JUtility6TColorf
/* 8040DB4C 0040AA8C  88 01 00 08 */	lbz r0, 8(r1)
/* 8040DB50 0040AA90  98 1F 01 24 */	stb r0, 0x124(r31)
/* 8040DB54 0040AA94  88 01 00 09 */	lbz r0, 9(r1)
/* 8040DB58 0040AA98  98 1F 01 25 */	stb r0, 0x125(r31)
/* 8040DB5C 0040AA9C  88 01 00 0A */	lbz r0, 0xa(r1)
/* 8040DB60 0040AAA0  98 1F 01 26 */	stb r0, 0x126(r31)
/* 8040DB64 0040AAA4  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8040DB68 0040AAA8  98 1F 01 27 */	stb r0, 0x127(r31)
.L_8040DB6C:
/* 8040DB6C 0040AAAC  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040DB70 0040AAB0  C0 5F 01 20 */	lfs f2, 0x120(r31)
/* 8040DB74 0040AAB4  38 63 41 88 */	addi r3, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040DB78 0040AAB8  C0 02 1E 70 */	lfs f0, lbl_805201D0@sda21(r2)
/* 8040DB7C 0040AABC  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8040DB80 0040AAC0  EC 22 08 2A */	fadds f1, f2, f1
/* 8040DB84 0040AAC4  D0 3F 01 20 */	stfs f1, 0x120(r31)
/* 8040DB88 0040AAC8  C0 3F 01 20 */	lfs f1, 0x120(r31)
/* 8040DB8C 0040AACC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8040DB90 0040AAD0  4C 41 13 82 */	cror 2, 1, 2
/* 8040DB94 0040AAD4  40 82 00 0C */	bne .L_8040DBA0
/* 8040DB98 0040AAD8  EC 01 00 28 */	fsubs f0, f1, f0
/* 8040DB9C 0040AADC  D0 1F 01 20 */	stfs f0, 0x120(r31)
.L_8040DBA0:
/* 8040DBA0 0040AAE0  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040DBA4 0040AAE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DBA8 0040AAE8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8040DBAC 0040AAEC  7D 89 03 A6 */	mtctr r12
/* 8040DBB0 0040AAF0  4E 80 04 21 */	bctrl 
/* 8040DBB4 0040AAF4  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8040DBB8 0040AAF8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8040DBBC 0040AAFC  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8040DBC0 0040AB00  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8040DBC4 0040AB04  7C 08 03 A6 */	mtlr r0
/* 8040DBC8 0040AB08  38 21 00 80 */	addi r1, r1, 0x80
/* 8040DBCC 0040AB0C  4E 80 00 20 */	blr 
.endfn updateCommon__Q32kh6Screen14ObjFinalResultFv

.fn statusNormal__Q32kh6Screen14ObjFinalResultFv, global
/* 8040DBD0 0040AB10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8040DBD4 0040AB14  7C 08 02 A6 */	mflr r0
/* 8040DBD8 0040AB18  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040DBDC 0040AB1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8040DBE0 0040AB20  7C 7F 1B 78 */	mr r31, r3
/* 8040DBE4 0040AB24  93 C1 00 08 */	stw r30, 8(r1)
/* 8040DBE8 0040AB28  80 03 01 30 */	lwz r0, 0x130(r3)
/* 8040DBEC 0040AB2C  2C 00 00 00 */	cmpwi r0, 0
/* 8040DBF0 0040AB30  40 82 00 28 */	bne .L_8040DC18
/* 8040DBF4 0040AB34  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 8040DBF8 0040AB38  4B FF E1 F9 */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
/* 8040DBFC 0040AB3C  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8040DC00 0040AB40  4B FF E1 D1 */	bl fadein__Q32kh6Screen14khUtilFadePaneFv
/* 8040DC04 0040AB44  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 8040DC08 0040AB48  4B F1 F8 49 */	bl stickDown__Q32og6Screen12StickAnimMgrFv
/* 8040DC0C 0040AB4C  80 7F 00 9C */	lwz r3, 0x9c(r31)
/* 8040DC10 0040AB50  4B FF E1 E1 */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
/* 8040DC14 0040AB54  48 00 00 50 */	b .L_8040DC64
.L_8040DC18:
/* 8040DC18 0040AB58  2C 00 00 07 */	cmpwi r0, 7
/* 8040DC1C 0040AB5C  40 82 00 28 */	bne .L_8040DC44
/* 8040DC20 0040AB60  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 8040DC24 0040AB64  4B FF E1 AD */	bl fadein__Q32kh6Screen14khUtilFadePaneFv
/* 8040DC28 0040AB68  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8040DC2C 0040AB6C  4B FF E1 C5 */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
/* 8040DC30 0040AB70  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 8040DC34 0040AB74  4B F1 F7 49 */	bl stickUp__Q32og6Screen12StickAnimMgrFv
/* 8040DC38 0040AB78  80 7F 00 9C */	lwz r3, 0x9c(r31)
/* 8040DC3C 0040AB7C  4B FF E1 95 */	bl fadein__Q32kh6Screen14khUtilFadePaneFv
/* 8040DC40 0040AB80  48 00 00 24 */	b .L_8040DC64
.L_8040DC44:
/* 8040DC44 0040AB84  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 8040DC48 0040AB88  4B FF E1 89 */	bl fadein__Q32kh6Screen14khUtilFadePaneFv
/* 8040DC4C 0040AB8C  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 8040DC50 0040AB90  4B FF E1 81 */	bl fadein__Q32kh6Screen14khUtilFadePaneFv
/* 8040DC54 0040AB94  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 8040DC58 0040AB98  4B F1 F8 E1 */	bl stickUpDown__Q32og6Screen12StickAnimMgrFv
/* 8040DC5C 0040AB9C  80 7F 00 9C */	lwz r3, 0x9c(r31)
/* 8040DC60 0040ABA0  4B FF E1 91 */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
.L_8040DC64:
/* 8040DC64 0040ABA4  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 8040DC68 0040ABA8  4B FF E1 69 */	bl fadein__Q32kh6Screen14khUtilFadePaneFv
/* 8040DC6C 0040ABAC  7F E3 FB 78 */	mr r3, r31
/* 8040DC70 0040ABB0  48 04 63 D1 */	bl getGamePad__Q26Screen7ObjBaseCFv
/* 8040DC74 0040ABB4  3C 80 08 00 */	lis r4, 0x08000008@ha
/* 8040DC78 0040ABB8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8040DC7C 0040ABBC  38 04 00 08 */	addi r0, r4, 0x08000008@l
/* 8040DC80 0040ABC0  7C 60 00 39 */	and. r0, r3, r0
/* 8040DC84 0040ABC4  41 82 01 60 */	beq .L_8040DDE4
/* 8040DC88 0040ABC8  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 8040DC8C 0040ABCC  2C 03 00 00 */	cmpwi r3, 0
/* 8040DC90 0040ABD0  41 82 01 54 */	beq .L_8040DDE4
/* 8040DC94 0040ABD4  38 03 FF FF */	addi r0, r3, -1
/* 8040DC98 0040ABD8  3C 60 65 6C */	lis r3, 0x656C3030@ha
/* 8040DC9C 0040ABDC  90 1F 01 30 */	stw r0, 0x130(r31)
/* 8040DCA0 0040ABE0  38 83 30 30 */	addi r4, r3, 0x656C3030@l
/* 8040DCA4 0040ABE4  38 60 4E 73 */	li r3, 0x4e73
/* 8040DCA8 0040ABE8  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 8040DCAC 0040ABEC  38 A5 00 01 */	addi r5, r5, 1
/* 8040DCB0 0040ABF0  4B FF D7 45 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040DCB4 0040ABF4  7C 65 1B 78 */	mr r5, r3
/* 8040DCB8 0040ABF8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040DCBC 0040ABFC  7C 86 23 78 */	mr r6, r4
/* 8040DCC0 0040AC00  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DCC4 0040AC04  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040DCC8 0040AC08  7D 89 03 A6 */	mtctr r12
/* 8040DCCC 0040AC0C  4E 80 04 21 */	bctrl 
/* 8040DCD0 0040AC10  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DCD4 0040AC14  3C 80 80 51 */	lis r4, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040DCD8 0040AC18  3B C4 41 88 */	addi r30, r4, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040DCDC 0040AC1C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040DCE0 0040AC20  88 9E 00 21 */	lbz r4, 0x21(r30)
/* 8040DCE4 0040AC24  7D 89 03 A6 */	mtctr r12
/* 8040DCE8 0040AC28  4E 80 04 21 */	bctrl 
/* 8040DCEC 0040AC2C  3C 60 65 6C */	lis r3, 0x656C3030@ha
/* 8040DCF0 0040AC30  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 8040DCF4 0040AC34  38 83 30 30 */	addi r4, r3, 0x656C3030@l
/* 8040DCF8 0040AC38  38 60 4E 73 */	li r3, 0x4e73
/* 8040DCFC 0040AC3C  4B FF D6 F9 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040DD00 0040AC40  7C 65 1B 78 */	mr r5, r3
/* 8040DD04 0040AC44  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040DD08 0040AC48  7C 86 23 78 */	mr r6, r4
/* 8040DD0C 0040AC4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DD10 0040AC50  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040DD14 0040AC54  7D 89 03 A6 */	mtctr r12
/* 8040DD18 0040AC58  4E 80 04 21 */	bctrl 
/* 8040DD1C 0040AC5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DD20 0040AC60  38 80 00 FF */	li r4, 0xff
/* 8040DD24 0040AC64  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040DD28 0040AC68  7D 89 03 A6 */	mtctr r12
/* 8040DD2C 0040AC6C  4E 80 04 21 */	bctrl 
/* 8040DD30 0040AC70  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 8040DD34 0040AC74  3C 80 6F 6E */	lis r4, 0x6F6E3030@ha
/* 8040DD38 0040AC78  3C C0 00 4E */	lis r6, 0x004E6963@ha
/* 8040DD3C 0040AC7C  38 84 30 30 */	addi r4, r4, 0x6F6E3030@l
/* 8040DD40 0040AC80  38 A3 00 01 */	addi r5, r3, 1
/* 8040DD44 0040AC84  38 66 69 63 */	addi r3, r6, 0x004E6963@l
/* 8040DD48 0040AC88  4B FF D6 AD */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040DD4C 0040AC8C  7C 65 1B 78 */	mr r5, r3
/* 8040DD50 0040AC90  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040DD54 0040AC94  7C 86 23 78 */	mr r6, r4
/* 8040DD58 0040AC98  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DD5C 0040AC9C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040DD60 0040ACA0  7D 89 03 A6 */	mtctr r12
/* 8040DD64 0040ACA4  4E 80 04 21 */	bctrl 
/* 8040DD68 0040ACA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DD6C 0040ACAC  88 9E 00 21 */	lbz r4, 0x21(r30)
/* 8040DD70 0040ACB0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040DD74 0040ACB4  7D 89 03 A6 */	mtctr r12
/* 8040DD78 0040ACB8  4E 80 04 21 */	bctrl 
/* 8040DD7C 0040ACBC  3C 80 6F 6E */	lis r4, 0x6F6E3030@ha
/* 8040DD80 0040ACC0  3C 60 00 4E */	lis r3, 0x004E6963@ha
/* 8040DD84 0040ACC4  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 8040DD88 0040ACC8  38 84 30 30 */	addi r4, r4, 0x6F6E3030@l
/* 8040DD8C 0040ACCC  38 63 69 63 */	addi r3, r3, 0x004E6963@l
/* 8040DD90 0040ACD0  4B FF D6 65 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040DD94 0040ACD4  7C 65 1B 78 */	mr r5, r3
/* 8040DD98 0040ACD8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040DD9C 0040ACDC  7C 86 23 78 */	mr r6, r4
/* 8040DDA0 0040ACE0  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DDA4 0040ACE4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040DDA8 0040ACE8  7D 89 03 A6 */	mtctr r12
/* 8040DDAC 0040ACEC  4E 80 04 21 */	bctrl 
/* 8040DDB0 0040ACF0  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DDB4 0040ACF4  38 80 00 FF */	li r4, 0xff
/* 8040DDB8 0040ACF8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040DDBC 0040ACFC  7D 89 03 A6 */	mtctr r12
/* 8040DDC0 0040AD00  4E 80 04 21 */	bctrl 
/* 8040DDC4 0040AD04  38 00 00 01 */	li r0, 1
/* 8040DDC8 0040AD08  7F E3 FB 78 */	mr r3, r31
/* 8040DDCC 0040AD0C  90 1F 01 48 */	stw r0, 0x148(r31)
/* 8040DDD0 0040AD10  48 00 01 A5 */	bl statusScrollUp__Q32kh6Screen14ObjFinalResultFv
/* 8040DDD4 0040AD14  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8040DDD8 0040AD18  38 80 18 11 */	li r4, 0x1811
/* 8040DDDC 0040AD1C  38 A0 00 00 */	li r5, 0
/* 8040DDE0 0040AD20  4B F2 A8 51 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8040DDE4:
/* 8040DDE4 0040AD24  7F E3 FB 78 */	mr r3, r31
/* 8040DDE8 0040AD28  48 04 62 59 */	bl getGamePad__Q26Screen7ObjBaseCFv
/* 8040DDEC 0040AD2C  3C 80 04 00 */	lis r4, 0x04000004@ha
/* 8040DDF0 0040AD30  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8040DDF4 0040AD34  38 04 00 04 */	addi r0, r4, 0x04000004@l
/* 8040DDF8 0040AD38  7C 60 00 39 */	and. r0, r3, r0
/* 8040DDFC 0040AD3C  41 82 01 60 */	beq .L_8040DF5C
/* 8040DE00 0040AD40  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 8040DE04 0040AD44  2C 03 00 07 */	cmpwi r3, 7
/* 8040DE08 0040AD48  41 82 01 54 */	beq .L_8040DF5C
/* 8040DE0C 0040AD4C  38 03 00 01 */	addi r0, r3, 1
/* 8040DE10 0040AD50  3C 60 65 6C */	lis r3, 0x656C3030@ha
/* 8040DE14 0040AD54  90 1F 01 30 */	stw r0, 0x130(r31)
/* 8040DE18 0040AD58  38 83 30 30 */	addi r4, r3, 0x656C3030@l
/* 8040DE1C 0040AD5C  38 60 4E 73 */	li r3, 0x4e73
/* 8040DE20 0040AD60  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 8040DE24 0040AD64  38 A5 FF FF */	addi r5, r5, -1
/* 8040DE28 0040AD68  4B FF D5 CD */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040DE2C 0040AD6C  7C 65 1B 78 */	mr r5, r3
/* 8040DE30 0040AD70  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040DE34 0040AD74  7C 86 23 78 */	mr r6, r4
/* 8040DE38 0040AD78  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DE3C 0040AD7C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040DE40 0040AD80  7D 89 03 A6 */	mtctr r12
/* 8040DE44 0040AD84  4E 80 04 21 */	bctrl 
/* 8040DE48 0040AD88  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DE4C 0040AD8C  3C 80 80 51 */	lis r4, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040DE50 0040AD90  3B C4 41 88 */	addi r30, r4, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040DE54 0040AD94  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040DE58 0040AD98  88 9E 00 21 */	lbz r4, 0x21(r30)
/* 8040DE5C 0040AD9C  7D 89 03 A6 */	mtctr r12
/* 8040DE60 0040ADA0  4E 80 04 21 */	bctrl 
/* 8040DE64 0040ADA4  3C 60 65 6C */	lis r3, 0x656C3030@ha
/* 8040DE68 0040ADA8  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 8040DE6C 0040ADAC  38 83 30 30 */	addi r4, r3, 0x656C3030@l
/* 8040DE70 0040ADB0  38 60 4E 73 */	li r3, 0x4e73
/* 8040DE74 0040ADB4  4B FF D5 81 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040DE78 0040ADB8  7C 65 1B 78 */	mr r5, r3
/* 8040DE7C 0040ADBC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040DE80 0040ADC0  7C 86 23 78 */	mr r6, r4
/* 8040DE84 0040ADC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DE88 0040ADC8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040DE8C 0040ADCC  7D 89 03 A6 */	mtctr r12
/* 8040DE90 0040ADD0  4E 80 04 21 */	bctrl 
/* 8040DE94 0040ADD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DE98 0040ADD8  38 80 00 FF */	li r4, 0xff
/* 8040DE9C 0040ADDC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040DEA0 0040ADE0  7D 89 03 A6 */	mtctr r12
/* 8040DEA4 0040ADE4  4E 80 04 21 */	bctrl 
/* 8040DEA8 0040ADE8  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 8040DEAC 0040ADEC  3C 80 6F 6E */	lis r4, 0x6F6E3030@ha
/* 8040DEB0 0040ADF0  3C C0 00 4E */	lis r6, 0x004E6963@ha
/* 8040DEB4 0040ADF4  38 84 30 30 */	addi r4, r4, 0x6F6E3030@l
/* 8040DEB8 0040ADF8  38 A3 FF FF */	addi r5, r3, -1
/* 8040DEBC 0040ADFC  38 66 69 63 */	addi r3, r6, 0x004E6963@l
/* 8040DEC0 0040AE00  4B FF D5 35 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040DEC4 0040AE04  7C 65 1B 78 */	mr r5, r3
/* 8040DEC8 0040AE08  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040DECC 0040AE0C  7C 86 23 78 */	mr r6, r4
/* 8040DED0 0040AE10  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DED4 0040AE14  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040DED8 0040AE18  7D 89 03 A6 */	mtctr r12
/* 8040DEDC 0040AE1C  4E 80 04 21 */	bctrl 
/* 8040DEE0 0040AE20  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DEE4 0040AE24  88 9E 00 21 */	lbz r4, 0x21(r30)
/* 8040DEE8 0040AE28  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040DEEC 0040AE2C  7D 89 03 A6 */	mtctr r12
/* 8040DEF0 0040AE30  4E 80 04 21 */	bctrl 
/* 8040DEF4 0040AE34  3C 80 6F 6E */	lis r4, 0x6F6E3030@ha
/* 8040DEF8 0040AE38  3C 60 00 4E */	lis r3, 0x004E6963@ha
/* 8040DEFC 0040AE3C  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 8040DF00 0040AE40  38 84 30 30 */	addi r4, r4, 0x6F6E3030@l
/* 8040DF04 0040AE44  38 63 69 63 */	addi r3, r3, 0x004E6963@l
/* 8040DF08 0040AE48  4B FF D4 ED */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040DF0C 0040AE4C  7C 65 1B 78 */	mr r5, r3
/* 8040DF10 0040AE50  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040DF14 0040AE54  7C 86 23 78 */	mr r6, r4
/* 8040DF18 0040AE58  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DF1C 0040AE5C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040DF20 0040AE60  7D 89 03 A6 */	mtctr r12
/* 8040DF24 0040AE64  4E 80 04 21 */	bctrl 
/* 8040DF28 0040AE68  81 83 00 00 */	lwz r12, 0(r3)
/* 8040DF2C 0040AE6C  38 80 00 FF */	li r4, 0xff
/* 8040DF30 0040AE70  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040DF34 0040AE74  7D 89 03 A6 */	mtctr r12
/* 8040DF38 0040AE78  4E 80 04 21 */	bctrl 
/* 8040DF3C 0040AE7C  38 00 00 02 */	li r0, 2
/* 8040DF40 0040AE80  7F E3 FB 78 */	mr r3, r31
/* 8040DF44 0040AE84  90 1F 01 48 */	stw r0, 0x148(r31)
/* 8040DF48 0040AE88  48 00 00 B9 */	bl statusScrollDown__Q32kh6Screen14ObjFinalResultFv
/* 8040DF4C 0040AE8C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8040DF50 0040AE90  38 80 18 11 */	li r4, 0x1811
/* 8040DF54 0040AE94  38 A0 00 00 */	li r5, 0
/* 8040DF58 0040AE98  4B F2 A6 D9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8040DF5C:
/* 8040DF5C 0040AE9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8040DF60 0040AEA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8040DF64 0040AEA4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8040DF68 0040AEA8  7C 08 03 A6 */	mtlr r0
/* 8040DF6C 0040AEAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8040DF70 0040AEB0  4E 80 00 20 */	blr 
.endfn statusNormal__Q32kh6Screen14ObjFinalResultFv

.fn statusScrollUp__Q32kh6Screen14ObjFinalResultFv, global
/* 8040DF74 0040AEB4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8040DF78 0040AEB8  3C 80 43 30 */	lis r4, 0x4330
/* 8040DF7C 0040AEBC  C8 42 1E 78 */	lfd f2, lbl_805201D8@sda21(r2)
/* 8040DF80 0040AEC0  80 C3 01 34 */	lwz r6, 0x134(r3)
/* 8040DF84 0040AEC4  80 A3 01 38 */	lwz r5, 0x138(r3)
/* 8040DF88 0040AEC8  6C C0 80 00 */	xoris r0, r6, 0x8000
/* 8040DF8C 0040AECC  90 81 00 08 */	stw r4, 8(r1)
/* 8040DF90 0040AED0  7C A5 30 50 */	subf r5, r5, r6
/* 8040DF94 0040AED4  C0 63 01 2C */	lfs f3, 0x12c(r3)
/* 8040DF98 0040AED8  6C A5 80 00 */	xoris r5, r5, 0x8000
/* 8040DF9C 0040AEDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040DFA0 0040AEE0  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8040DFA4 0040AEE4  C8 01 00 08 */	lfd f0, 8(r1)
/* 8040DFA8 0040AEE8  90 81 00 10 */	stw r4, 0x10(r1)
/* 8040DFAC 0040AEEC  EC 20 10 28 */	fsubs f1, f0, f2
/* 8040DFB0 0040AEF0  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8040DFB4 0040AEF4  EC 23 00 72 */	fmuls f1, f3, f1
/* 8040DFB8 0040AEF8  EC 00 10 28 */	fsubs f0, f0, f2
/* 8040DFBC 0040AEFC  EC 01 00 24 */	fdivs f0, f1, f0
/* 8040DFC0 0040AF00  EC 03 00 28 */	fsubs f0, f3, f0
/* 8040DFC4 0040AF04  D0 03 01 28 */	stfs f0, 0x128(r3)
/* 8040DFC8 0040AF08  80 83 01 38 */	lwz r4, 0x138(r3)
/* 8040DFCC 0040AF0C  38 04 00 01 */	addi r0, r4, 1
/* 8040DFD0 0040AF10  90 03 01 38 */	stw r0, 0x138(r3)
/* 8040DFD4 0040AF14  80 03 01 34 */	lwz r0, 0x134(r3)
/* 8040DFD8 0040AF18  7C 04 00 00 */	cmpw r4, r0
/* 8040DFDC 0040AF1C  40 82 00 1C */	bne .L_8040DFF8
/* 8040DFE0 0040AF20  38 80 00 01 */	li r4, 1
/* 8040DFE4 0040AF24  38 00 00 00 */	li r0, 0
/* 8040DFE8 0040AF28  90 83 01 38 */	stw r4, 0x138(r3)
/* 8040DFEC 0040AF2C  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040DFF0 0040AF30  90 03 01 48 */	stw r0, 0x148(r3)
/* 8040DFF4 0040AF34  D0 03 01 28 */	stfs f0, 0x128(r3)
.L_8040DFF8:
/* 8040DFF8 0040AF38  38 21 00 20 */	addi r1, r1, 0x20
/* 8040DFFC 0040AF3C  4E 80 00 20 */	blr 
.endfn statusScrollUp__Q32kh6Screen14ObjFinalResultFv

.fn statusScrollDown__Q32kh6Screen14ObjFinalResultFv, global
/* 8040E000 0040AF40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8040E004 0040AF44  3C 80 43 30 */	lis r4, 0x4330
/* 8040E008 0040AF48  C8 42 1E 78 */	lfd f2, lbl_805201D8@sda21(r2)
/* 8040E00C 0040AF4C  80 C3 01 34 */	lwz r6, 0x134(r3)
/* 8040E010 0040AF50  80 A3 01 38 */	lwz r5, 0x138(r3)
/* 8040E014 0040AF54  6C C0 80 00 */	xoris r0, r6, 0x8000
/* 8040E018 0040AF58  C0 83 01 2C */	lfs f4, 0x12c(r3)
/* 8040E01C 0040AF5C  7C A6 28 50 */	subf r5, r6, r5
/* 8040E020 0040AF60  90 81 00 08 */	stw r4, 8(r1)
/* 8040E024 0040AF64  6C A5 80 00 */	xoris r5, r5, 0x8000
/* 8040E028 0040AF68  FC 60 20 50 */	fneg f3, f4
/* 8040E02C 0040AF6C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8040E030 0040AF70  C8 01 00 08 */	lfd f0, 8(r1)
/* 8040E034 0040AF74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040E038 0040AF78  EC 20 10 28 */	fsubs f1, f0, f2
/* 8040E03C 0040AF7C  90 81 00 10 */	stw r4, 0x10(r1)
/* 8040E040 0040AF80  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8040E044 0040AF84  EC 24 00 72 */	fmuls f1, f4, f1
/* 8040E048 0040AF88  EC 00 10 28 */	fsubs f0, f0, f2
/* 8040E04C 0040AF8C  EC 01 00 24 */	fdivs f0, f1, f0
/* 8040E050 0040AF90  EC 03 00 28 */	fsubs f0, f3, f0
/* 8040E054 0040AF94  D0 03 01 28 */	stfs f0, 0x128(r3)
/* 8040E058 0040AF98  80 83 01 38 */	lwz r4, 0x138(r3)
/* 8040E05C 0040AF9C  38 04 00 01 */	addi r0, r4, 1
/* 8040E060 0040AFA0  90 03 01 38 */	stw r0, 0x138(r3)
/* 8040E064 0040AFA4  80 03 01 34 */	lwz r0, 0x134(r3)
/* 8040E068 0040AFA8  7C 04 00 00 */	cmpw r4, r0
/* 8040E06C 0040AFAC  40 82 00 1C */	bne .L_8040E088
/* 8040E070 0040AFB0  38 80 00 01 */	li r4, 1
/* 8040E074 0040AFB4  38 00 00 00 */	li r0, 0
/* 8040E078 0040AFB8  90 83 01 38 */	stw r4, 0x138(r3)
/* 8040E07C 0040AFBC  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040E080 0040AFC0  90 03 01 48 */	stw r0, 0x148(r3)
/* 8040E084 0040AFC4  D0 03 01 28 */	stfs f0, 0x128(r3)
.L_8040E088:
/* 8040E088 0040AFC8  38 21 00 20 */	addi r1, r1, 0x20
/* 8040E08C 0040AFCC  4E 80 00 20 */	blr 
.endfn statusScrollDown__Q32kh6Screen14ObjFinalResultFv

.fn statusForceScroll__Q32kh6Screen14ObjFinalResultFv, global
/* 8040E090 0040AFD0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8040E094 0040AFD4  7C 08 02 A6 */	mflr r0
/* 8040E098 0040AFD8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8040E09C 0040AFDC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8040E0A0 0040AFE0  7C 7F 1B 78 */	mr r31, r3
/* 8040E0A4 0040AFE4  80 63 01 3C */	lwz r3, 0x13c(r3)
/* 8040E0A8 0040AFE8  2C 03 00 00 */	cmpwi r3, 0
/* 8040E0AC 0040AFEC  40 82 01 80 */	bne .L_8040E22C
/* 8040E0B0 0040AFF0  88 1F 01 4E */	lbz r0, 0x14e(r31)
/* 8040E0B4 0040AFF4  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8040E0B8 0040AFF8  41 82 00 20 */	beq .L_8040E0D8
/* 8040E0BC 0040AFFC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8040E0C0 0040B000  38 80 18 11 */	li r4, 0x1811
/* 8040E0C4 0040B004  38 A0 00 00 */	li r5, 0
/* 8040E0C8 0040B008  4B F2 A5 69 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8040E0CC 0040B00C  88 1F 01 4E */	lbz r0, 0x14e(r31)
/* 8040E0D0 0040B010  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 8040E0D4 0040B014  98 1F 01 4E */	stb r0, 0x14e(r31)
.L_8040E0D8:
/* 8040E0D8 0040B018  80 BF 01 34 */	lwz r5, 0x134(r31)
/* 8040E0DC 0040B01C  3C 60 43 30 */	lis r3, 0x4330
/* 8040E0E0 0040B020  80 9F 01 38 */	lwz r4, 0x138(r31)
/* 8040E0E4 0040B024  6C A0 80 00 */	xoris r0, r5, 0x8000
/* 8040E0E8 0040B028  C0 9F 01 2C */	lfs f4, 0x12c(r31)
/* 8040E0EC 0040B02C  7C 85 20 50 */	subf r4, r5, r4
/* 8040E0F0 0040B030  90 61 00 08 */	stw r3, 8(r1)
/* 8040E0F4 0040B034  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 8040E0F8 0040B038  C8 42 1E 78 */	lfd f2, lbl_805201D8@sda21(r2)
/* 8040E0FC 0040B03C  90 81 00 0C */	stw r4, 0xc(r1)
/* 8040E100 0040B040  FC 60 20 50 */	fneg f3, f4
/* 8040E104 0040B044  C8 01 00 08 */	lfd f0, 8(r1)
/* 8040E108 0040B048  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040E10C 0040B04C  EC 20 10 28 */	fsubs f1, f0, f2
/* 8040E110 0040B050  90 61 00 10 */	stw r3, 0x10(r1)
/* 8040E114 0040B054  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8040E118 0040B058  EC 24 00 72 */	fmuls f1, f4, f1
/* 8040E11C 0040B05C  EC 00 10 28 */	fsubs f0, f0, f2
/* 8040E120 0040B060  EC 01 00 24 */	fdivs f0, f1, f0
/* 8040E124 0040B064  EC 03 00 28 */	fsubs f0, f3, f0
/* 8040E128 0040B068  D0 1F 01 28 */	stfs f0, 0x128(r31)
/* 8040E12C 0040B06C  80 7F 01 38 */	lwz r3, 0x138(r31)
/* 8040E130 0040B070  38 03 00 01 */	addi r0, r3, 1
/* 8040E134 0040B074  90 1F 01 38 */	stw r0, 0x138(r31)
/* 8040E138 0040B078  80 1F 01 34 */	lwz r0, 0x134(r31)
/* 8040E13C 0040B07C  7C 03 00 00 */	cmpw r3, r0
/* 8040E140 0040B080  40 82 00 F4 */	bne .L_8040E234
/* 8040E144 0040B084  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 8040E148 0040B088  2C 05 00 07 */	cmpwi r5, 7
/* 8040E14C 0040B08C  40 82 00 A8 */	bne .L_8040E1F4
/* 8040E150 0040B090  3C 60 65 6C */	lis r3, 0x656C3030@ha
/* 8040E154 0040B094  38 83 30 30 */	addi r4, r3, 0x656C3030@l
/* 8040E158 0040B098  38 60 4E 73 */	li r3, 0x4e73
/* 8040E15C 0040B09C  4B FF D2 99 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040E160 0040B0A0  7C 65 1B 78 */	mr r5, r3
/* 8040E164 0040B0A4  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040E168 0040B0A8  7C 86 23 78 */	mr r6, r4
/* 8040E16C 0040B0AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E170 0040B0B0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E174 0040B0B4  7D 89 03 A6 */	mtctr r12
/* 8040E178 0040B0B8  4E 80 04 21 */	bctrl 
/* 8040E17C 0040B0BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E180 0040B0C0  38 80 00 FF */	li r4, 0xff
/* 8040E184 0040B0C4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040E188 0040B0C8  7D 89 03 A6 */	mtctr r12
/* 8040E18C 0040B0CC  4E 80 04 21 */	bctrl 
/* 8040E190 0040B0D0  3C 80 6F 6E */	lis r4, 0x6F6E3030@ha
/* 8040E194 0040B0D4  3C 60 00 4E */	lis r3, 0x004E6963@ha
/* 8040E198 0040B0D8  80 BF 01 30 */	lwz r5, 0x130(r31)
/* 8040E19C 0040B0DC  38 84 30 30 */	addi r4, r4, 0x6F6E3030@l
/* 8040E1A0 0040B0E0  38 63 69 63 */	addi r3, r3, 0x004E6963@l
/* 8040E1A4 0040B0E4  4B FF D2 51 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 8040E1A8 0040B0E8  7C 65 1B 78 */	mr r5, r3
/* 8040E1AC 0040B0EC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8040E1B0 0040B0F0  7C 86 23 78 */	mr r6, r4
/* 8040E1B4 0040B0F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E1B8 0040B0F8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E1BC 0040B0FC  7D 89 03 A6 */	mtctr r12
/* 8040E1C0 0040B100  4E 80 04 21 */	bctrl 
/* 8040E1C4 0040B104  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E1C8 0040B108  38 80 00 FF */	li r4, 0xff
/* 8040E1CC 0040B10C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8040E1D0 0040B110  7D 89 03 A6 */	mtctr r12
/* 8040E1D4 0040B114  4E 80 04 21 */	bctrl 
/* 8040E1D8 0040B118  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040E1DC 0040B11C  38 00 00 00 */	li r0, 0
/* 8040E1E0 0040B120  38 63 41 88 */	addi r3, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040E1E4 0040B124  80 63 00 04 */	lwz r3, 4(r3)
/* 8040E1E8 0040B128  90 7F 01 34 */	stw r3, 0x134(r31)
/* 8040E1EC 0040B12C  90 1F 01 48 */	stw r0, 0x148(r31)
/* 8040E1F0 0040B130  48 00 00 0C */	b .L_8040E1FC
.L_8040E1F4:
/* 8040E1F4 0040B134  38 05 00 01 */	addi r0, r5, 1
/* 8040E1F8 0040B138  90 1F 01 30 */	stw r0, 0x130(r31)
.L_8040E1FC:
/* 8040E1FC 0040B13C  38 00 00 01 */	li r0, 1
/* 8040E200 0040B140  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040E204 0040B144  90 1F 01 38 */	stw r0, 0x138(r31)
/* 8040E208 0040B148  38 63 41 88 */	addi r3, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040E20C 0040B14C  C0 02 1E 40 */	lfs f0, lbl_805201A0@sda21(r2)
/* 8040E210 0040B150  D0 1F 01 28 */	stfs f0, 0x128(r31)
/* 8040E214 0040B154  80 03 00 08 */	lwz r0, 8(r3)
/* 8040E218 0040B158  90 1F 01 3C */	stw r0, 0x13c(r31)
/* 8040E21C 0040B15C  88 1F 01 4E */	lbz r0, 0x14e(r31)
/* 8040E220 0040B160  60 00 00 08 */	ori r0, r0, 8
/* 8040E224 0040B164  98 1F 01 4E */	stb r0, 0x14e(r31)
/* 8040E228 0040B168  48 00 00 0C */	b .L_8040E234
.L_8040E22C:
/* 8040E22C 0040B16C  38 03 FF FF */	addi r0, r3, -1
/* 8040E230 0040B170  90 1F 01 3C */	stw r0, 0x13c(r31)
.L_8040E234:
/* 8040E234 0040B174  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8040E238 0040B178  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8040E23C 0040B17C  7C 08 03 A6 */	mtlr r0
/* 8040E240 0040B180  38 21 00 20 */	addi r1, r1, 0x20
/* 8040E244 0040B184  4E 80 00 20 */	blr 
.endfn statusForceScroll__Q32kh6Screen14ObjFinalResultFv

.fn drawReplace__Q32kh6Screen14ObjFinalResultFR8Graphicsi, global
/* 8040E248 0040B188  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 8040E24C 0040B18C  7C 08 02 A6 */	mflr r0
/* 8040E250 0040B190  3C C0 80 4A */	lis r6, lbl_80498CD8@ha
/* 8040E254 0040B194  90 01 01 64 */	stw r0, 0x164(r1)
/* 8040E258 0040B198  BE 41 01 28 */	stmw r18, 0x128(r1)
/* 8040E25C 0040B19C  7C 7C 1B 78 */	mr r28, r3
/* 8040E260 0040B1A0  7C 9D 23 78 */	mr r29, r4
/* 8040E264 0040B1A4  7C B2 2B 78 */	mr r18, r5
/* 8040E268 0040B1A8  3B 26 8C D8 */	addi r25, r6, lbl_80498CD8@l
/* 8040E26C 0040B1AC  48 04 5D 3D */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8040E270 0040B1B0  3C A0 52 53 */	lis r5, 0x52534C54@ha
/* 8040E274 0040B1B4  38 80 4B 48 */	li r4, 0x4b48
/* 8040E278 0040B1B8  38 C5 4C 54 */	addi r6, r5, 0x52534C54@l
/* 8040E27C 0040B1BC  38 A0 46 5F */	li r5, 0x465f
/* 8040E280 0040B1C0  4B F0 10 9D */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8040E284 0040B1C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8040E288 0040B1C8  40 82 00 18 */	bne .L_8040E2A0
/* 8040E28C 0040B1CC  38 79 00 00 */	addi r3, r25, 0
/* 8040E290 0040B1D0  38 B9 03 00 */	addi r5, r25, 0x300
/* 8040E294 0040B1D4  38 80 02 D6 */	li r4, 0x2d6
/* 8040E298 0040B1D8  4C C6 31 82 */	crclr 6
/* 8040E29C 0040B1DC  4B C1 C3 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8040E2A0:
/* 8040E2A0 0040B1E0  7F 83 E3 78 */	mr r3, r28
/* 8040E2A4 0040B1E4  48 04 5D 05 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8040E2A8 0040B1E8  56 56 08 3C */	slwi r22, r18, 1
/* 8040E2AC 0040B1EC  38 00 00 10 */	li r0, 0x10
/* 8040E2B0 0040B1F0  3A B6 00 01 */	addi r21, r22, 1
/* 8040E2B4 0040B1F4  38 A1 00 A4 */	addi r5, r1, 0xa4
/* 8040E2B8 0040B1F8  38 99 03 74 */	addi r4, r25, 0x374
/* 8040E2BC 0040B1FC  83 C3 00 08 */	lwz r30, 8(r3)
/* 8040E2C0 0040B200  7C 09 03 A6 */	mtctr r0
.L_8040E2C4:
/* 8040E2C4 0040B204  80 64 00 04 */	lwz r3, 4(r4)
/* 8040E2C8 0040B208  84 04 00 08 */	lwzu r0, 8(r4)
/* 8040E2CC 0040B20C  90 65 00 04 */	stw r3, 4(r5)
/* 8040E2D0 0040B210  94 05 00 08 */	stwu r0, 8(r5)
/* 8040E2D4 0040B214  42 00 FF F0 */	bdnz .L_8040E2C4
/* 8040E2D8 0040B218  2C 12 00 07 */	cmpwi r18, 7
/* 8040E2DC 0040B21C  41 82 00 60 */	beq .L_8040E33C
/* 8040E2E0 0040B220  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E2E4 0040B224  3C A0 74 70 */	lis r5, 0x74705F63@ha
/* 8040E2E8 0040B228  3C 80 00 4E */	lis r4, 0x004E7365@ha
/* 8040E2EC 0040B22C  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E2F0 0040B230  38 C5 5F 63 */	addi r6, r5, 0x74705F63@l
/* 8040E2F4 0040B234  38 A4 73 65 */	addi r5, r4, 0x004E7365@l
/* 8040E2F8 0040B238  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E2FC 0040B23C  7D 89 03 A6 */	mtctr r12
/* 8040E300 0040B240  4E 80 04 21 */	bctrl 
/* 8040E304 0040B244  38 00 00 01 */	li r0, 1
/* 8040E308 0040B248  3C A0 74 70 */	lis r5, 0x74705F64@ha
/* 8040E30C 0040B24C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8040E310 0040B250  3C 80 00 4E */	lis r4, 0x004E7365@ha
/* 8040E314 0040B254  38 C5 5F 64 */	addi r6, r5, 0x74705F64@l
/* 8040E318 0040B258  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E31C 0040B25C  38 A4 73 65 */	addi r5, r4, 0x004E7365@l
/* 8040E320 0040B260  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E324 0040B264  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E328 0040B268  7D 89 03 A6 */	mtctr r12
/* 8040E32C 0040B26C  4E 80 04 21 */	bctrl 
/* 8040E330 0040B270  38 00 00 00 */	li r0, 0
/* 8040E334 0040B274  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8040E338 0040B278  48 00 00 5C */	b .L_8040E394
.L_8040E33C:
/* 8040E33C 0040B27C  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E340 0040B280  3C A0 74 70 */	lis r5, 0x74705F63@ha
/* 8040E344 0040B284  3C 80 00 4E */	lis r4, 0x004E7365@ha
/* 8040E348 0040B288  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E34C 0040B28C  38 C5 5F 63 */	addi r6, r5, 0x74705F63@l
/* 8040E350 0040B290  38 A4 73 65 */	addi r5, r4, 0x004E7365@l
/* 8040E354 0040B294  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E358 0040B298  7D 89 03 A6 */	mtctr r12
/* 8040E35C 0040B29C  4E 80 04 21 */	bctrl 
/* 8040E360 0040B2A0  38 00 00 00 */	li r0, 0
/* 8040E364 0040B2A4  3C A0 74 70 */	lis r5, 0x74705F64@ha
/* 8040E368 0040B2A8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8040E36C 0040B2AC  3C 80 00 4E */	lis r4, 0x004E7365@ha
/* 8040E370 0040B2B0  38 C5 5F 64 */	addi r6, r5, 0x74705F64@l
/* 8040E374 0040B2B4  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E378 0040B2B8  38 A4 73 65 */	addi r5, r4, 0x004E7365@l
/* 8040E37C 0040B2BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E380 0040B2C0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E384 0040B2C4  7D 89 03 A6 */	mtctr r12
/* 8040E388 0040B2C8  4E 80 04 21 */	bctrl 
/* 8040E38C 0040B2CC  38 00 00 01 */	li r0, 1
/* 8040E390 0040B2D0  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8040E394:
/* 8040E394 0040B2D4  56 C0 18 38 */	slwi r0, r22, 3
/* 8040E398 0040B2D8  3B 01 00 A8 */	addi r24, r1, 0xa8
/* 8040E39C 0040B2DC  7F 9B E3 78 */	mr r27, r28
/* 8040E3A0 0040B2E0  56 DF 10 3A */	slwi r31, r22, 2
/* 8040E3A4 0040B2E4  7F 18 02 14 */	add r24, r24, r0
/* 8040E3A8 0040B2E8  3A C0 00 00 */	li r22, 0
/* 8040E3AC 0040B2EC  3B 40 00 00 */	li r26, 0
/* 8040E3B0 0040B2F0  3E 80 69 74 */	lis r20, 0x6974
/* 8040E3B4 0040B2F4  3E 60 74 6C */	lis r19, 0x746c
/* 8040E3B8 0040B2F8  3E 40 00 54 */	lis r18, 0x54
.L_8040E3BC:
/* 8040E3BC 0040B2FC  80 7E 00 00 */	lwz r3, 0(r30)
/* 8040E3C0 0040B300  38 1A 00 04 */	addi r0, r26, 4
/* 8040E3C4 0040B304  7C 7F 18 2E */	lwzx r3, r31, r3
/* 8040E3C8 0040B308  7C 03 00 2E */	lwzx r0, r3, r0
/* 8040E3CC 0040B30C  2C 00 00 00 */	cmpwi r0, 0
/* 8040E3D0 0040B310  40 80 00 1C */	bge .L_8040E3EC
/* 8040E3D4 0040B314  38 00 00 00 */	li r0, 0
/* 8040E3D8 0040B318  38 80 00 01 */	li r4, 1
/* 8040E3DC 0040B31C  90 1B 00 E0 */	stw r0, 0xe0(r27)
/* 8040E3E0 0040B320  80 7B 00 A0 */	lwz r3, 0xa0(r27)
/* 8040E3E4 0040B324  4B EF D4 05 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8040E3E8 0040B328  48 00 00 14 */	b .L_8040E3FC
.L_8040E3EC:
/* 8040E3EC 0040B32C  90 1B 00 E0 */	stw r0, 0xe0(r27)
/* 8040E3F0 0040B330  38 80 00 00 */	li r4, 0
/* 8040E3F4 0040B334  80 7B 00 A0 */	lwz r3, 0xa0(r27)
/* 8040E3F8 0040B338  4B EF D3 F1 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_8040E3FC:
/* 8040E3FC 0040B33C  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E400 0040B340  38 D4 6C 30 */	addi r6, r20, 0x6c30
/* 8040E404 0040B344  38 A0 54 74 */	li r5, 0x5474
/* 8040E408 0040B348  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E40C 0040B34C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E410 0040B350  7D 89 03 A6 */	mtctr r12
/* 8040E414 0040B354  4E 80 04 21 */	bctrl 
/* 8040E418 0040B358  80 18 00 00 */	lwz r0, 0(r24)
/* 8040E41C 0040B35C  38 D3 30 73 */	addi r6, r19, 0x3073
/* 8040E420 0040B360  80 98 00 04 */	lwz r4, 4(r24)
/* 8040E424 0040B364  38 B2 74 69 */	addi r5, r18, 0x7469
/* 8040E428 0040B368  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8040E42C 0040B36C  90 03 00 18 */	stw r0, 0x18(r3)
/* 8040E430 0040B370  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E434 0040B374  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E438 0040B378  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E43C 0040B37C  7D 89 03 A6 */	mtctr r12
/* 8040E440 0040B380  4E 80 04 21 */	bctrl 
/* 8040E444 0040B384  80 18 00 00 */	lwz r0, 0(r24)
/* 8040E448 0040B388  3A D6 00 01 */	addi r22, r22, 1
/* 8040E44C 0040B38C  80 98 00 04 */	lwz r4, 4(r24)
/* 8040E450 0040B390  2C 16 00 04 */	cmpwi r22, 4
/* 8040E454 0040B394  3B 5A 00 04 */	addi r26, r26, 4
/* 8040E458 0040B398  3B 7B 00 04 */	addi r27, r27, 4
/* 8040E45C 0040B39C  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8040E460 0040B3A0  90 03 00 18 */	stw r0, 0x18(r3)
/* 8040E464 0040B3A4  41 80 FF 58 */	blt .L_8040E3BC
/* 8040E468 0040B3A8  56 A0 18 38 */	slwi r0, r21, 3
/* 8040E46C 0040B3AC  3A C1 00 A8 */	addi r22, r1, 0xa8
/* 8040E470 0040B3B0  7F 97 E3 78 */	mr r23, r28
/* 8040E474 0040B3B4  56 B5 10 3A */	slwi r21, r21, 2
/* 8040E478 0040B3B8  7E D6 02 14 */	add r22, r22, r0
/* 8040E47C 0040B3BC  3A 80 00 00 */	li r20, 0
/* 8040E480 0040B3C0  3B 00 00 00 */	li r24, 0
/* 8040E484 0040B3C4  3F 40 74 6C */	lis r26, 0x746c
/* 8040E488 0040B3C8  3F 60 00 54 */	lis r27, 0x54
/* 8040E48C 0040B3CC  3E 40 6C 65 */	lis r18, 0x6c65
/* 8040E490 0040B3D0  3E 60 54 74 */	lis r19, 0x5474
.L_8040E494:
/* 8040E494 0040B3D4  80 7E 00 00 */	lwz r3, 0(r30)
/* 8040E498 0040B3D8  38 18 00 04 */	addi r0, r24, 4
/* 8040E49C 0040B3DC  7C 75 18 2E */	lwzx r3, r21, r3
/* 8040E4A0 0040B3E0  7C 03 00 2E */	lwzx r0, r3, r0
/* 8040E4A4 0040B3E4  2C 00 00 00 */	cmpwi r0, 0
/* 8040E4A8 0040B3E8  40 80 00 1C */	bge .L_8040E4C4
/* 8040E4AC 0040B3EC  38 00 00 00 */	li r0, 0
/* 8040E4B0 0040B3F0  38 80 00 01 */	li r4, 1
/* 8040E4B4 0040B3F4  90 17 00 F0 */	stw r0, 0xf0(r23)
/* 8040E4B8 0040B3F8  80 77 00 B0 */	lwz r3, 0xb0(r23)
/* 8040E4BC 0040B3FC  4B EF D3 2D */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8040E4C0 0040B400  48 00 00 14 */	b .L_8040E4D4
.L_8040E4C4:
/* 8040E4C4 0040B404  90 17 00 F0 */	stw r0, 0xf0(r23)
/* 8040E4C8 0040B408  38 80 00 00 */	li r4, 0
/* 8040E4CC 0040B40C  80 77 00 B0 */	lwz r3, 0xb0(r23)
/* 8040E4D0 0040B410  4B EF D3 19 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_8040E4D4:
/* 8040E4D4 0040B414  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E4D8 0040B418  38 DA 65 31 */	addi r6, r26, 0x6531
/* 8040E4DC 0040B41C  38 BB 74 69 */	addi r5, r27, 0x7469
/* 8040E4E0 0040B420  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E4E4 0040B424  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E4E8 0040B428  7D 89 03 A6 */	mtctr r12
/* 8040E4EC 0040B42C  4E 80 04 21 */	bctrl 
/* 8040E4F0 0040B430  80 16 00 00 */	lwz r0, 0(r22)
/* 8040E4F4 0040B434  38 D2 31 73 */	addi r6, r18, 0x3173
/* 8040E4F8 0040B438  80 96 00 04 */	lwz r4, 4(r22)
/* 8040E4FC 0040B43C  38 B3 69 74 */	addi r5, r19, 0x6974
/* 8040E500 0040B440  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8040E504 0040B444  90 03 00 18 */	stw r0, 0x18(r3)
/* 8040E508 0040B448  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E50C 0040B44C  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E510 0040B450  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E514 0040B454  7D 89 03 A6 */	mtctr r12
/* 8040E518 0040B458  4E 80 04 21 */	bctrl 
/* 8040E51C 0040B45C  80 16 00 00 */	lwz r0, 0(r22)
/* 8040E520 0040B460  3A 94 00 01 */	addi r20, r20, 1
/* 8040E524 0040B464  80 96 00 04 */	lwz r4, 4(r22)
/* 8040E528 0040B468  2C 14 00 04 */	cmpwi r20, 4
/* 8040E52C 0040B46C  3B 18 00 04 */	addi r24, r24, 4
/* 8040E530 0040B470  3A F7 00 04 */	addi r23, r23, 4
/* 8040E534 0040B474  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8040E538 0040B478  90 03 00 18 */	stw r0, 0x18(r3)
/* 8040E53C 0040B47C  41 80 FF 58 */	blt .L_8040E494
/* 8040E540 0040B480  80 1C 01 24 */	lwz r0, 0x124(r28)
/* 8040E544 0040B484  3C 80 79 6F */	lis r4, 0x796F7031@ha
/* 8040E548 0040B488  3C 60 50 74 */	lis r3, 0x50746F6B@ha
/* 8040E54C 0040B48C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8040E550 0040B490  38 C4 70 31 */	addi r6, r4, 0x796F7031@l
/* 8040E554 0040B494  38 A3 6F 6B */	addi r5, r3, 0x50746F6B@l
/* 8040E558 0040B498  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E55C 0040B49C  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E560 0040B4A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E564 0040B4A4  7D 89 03 A6 */	mtctr r12
/* 8040E568 0040B4A8  4E 80 04 21 */	bctrl 
/* 8040E56C 0040B4AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E570 0040B4B0  38 81 00 44 */	addi r4, r1, 0x44
/* 8040E574 0040B4B4  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E578 0040B4B8  7D 89 03 A6 */	mtctr r12
/* 8040E57C 0040B4BC  4E 80 04 21 */	bctrl 
/* 8040E580 0040B4C0  80 1C 01 24 */	lwz r0, 0x124(r28)
/* 8040E584 0040B4C4  3C 80 61 64 */	lis r4, 0x61647031@ha
/* 8040E588 0040B4C8  3C 60 50 74 */	lis r3, 0x50746F6D@ha
/* 8040E58C 0040B4CC  90 01 00 40 */	stw r0, 0x40(r1)
/* 8040E590 0040B4D0  38 C4 70 31 */	addi r6, r4, 0x61647031@l
/* 8040E594 0040B4D4  38 A3 6F 6D */	addi r5, r3, 0x50746F6D@l
/* 8040E598 0040B4D8  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E59C 0040B4DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E5A0 0040B4E0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E5A4 0040B4E4  7D 89 03 A6 */	mtctr r12
/* 8040E5A8 0040B4E8  4E 80 04 21 */	bctrl 
/* 8040E5AC 0040B4EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E5B0 0040B4F0  38 81 00 40 */	addi r4, r1, 0x40
/* 8040E5B4 0040B4F4  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E5B8 0040B4F8  7D 89 03 A6 */	mtctr r12
/* 8040E5BC 0040B4FC  4E 80 04 21 */	bctrl 
/* 8040E5C0 0040B500  80 1C 01 24 */	lwz r0, 0x124(r28)
/* 8040E5C4 0040B504  3C 60 6B 6F */	lis r3, 0x6B6F6E31@ha
/* 8040E5C8 0040B508  38 C3 6E 31 */	addi r6, r3, 0x6B6F6E31@l
/* 8040E5CC 0040B50C  38 A0 00 50 */	li r5, 0x50
/* 8040E5D0 0040B510  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8040E5D4 0040B514  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E5D8 0040B518  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E5DC 0040B51C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E5E0 0040B520  7D 89 03 A6 */	mtctr r12
/* 8040E5E4 0040B524  4E 80 04 21 */	bctrl 
/* 8040E5E8 0040B528  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E5EC 0040B52C  38 81 00 3C */	addi r4, r1, 0x3c
/* 8040E5F0 0040B530  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E5F4 0040B534  7D 89 03 A6 */	mtctr r12
/* 8040E5F8 0040B538  4E 80 04 21 */	bctrl 
/* 8040E5FC 0040B53C  80 1C 01 24 */	lwz r0, 0x124(r28)
/* 8040E600 0040B540  3C 60 6B 6F */	lis r3, 0x6B6F6E33@ha
/* 8040E604 0040B544  38 C3 6E 33 */	addi r6, r3, 0x6B6F6E33@l
/* 8040E608 0040B548  38 A0 00 50 */	li r5, 0x50
/* 8040E60C 0040B54C  90 01 00 38 */	stw r0, 0x38(r1)
/* 8040E610 0040B550  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E614 0040B554  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E618 0040B558  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E61C 0040B55C  7D 89 03 A6 */	mtctr r12
/* 8040E620 0040B560  4E 80 04 21 */	bctrl 
/* 8040E624 0040B564  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E628 0040B568  38 81 00 38 */	addi r4, r1, 0x38
/* 8040E62C 0040B56C  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E630 0040B570  7D 89 03 A6 */	mtctr r12
/* 8040E634 0040B574  4E 80 04 21 */	bctrl 
/* 8040E638 0040B578  C9 79 03 F8 */	lfd f11, 0x3f8(r25)
/* 8040E63C 0040B57C  3A C1 00 90 */	addi r22, r1, 0x90
/* 8040E640 0040B580  C9 59 04 00 */	lfd f10, 0x400(r25)
/* 8040E644 0040B584  3A E1 00 78 */	addi r23, r1, 0x78
/* 8040E648 0040B588  C9 39 04 08 */	lfd f9, 0x408(r25)
/* 8040E64C 0040B58C  3B 01 00 60 */	addi r24, r1, 0x60
/* 8040E650 0040B590  C9 19 04 10 */	lfd f8, 0x410(r25)
/* 8040E654 0040B594  3B 41 00 48 */	addi r26, r1, 0x48
/* 8040E658 0040B598  C8 F9 04 18 */	lfd f7, 0x418(r25)
/* 8040E65C 0040B59C  3A 80 00 00 */	li r20, 0
/* 8040E660 0040B5A0  C8 D9 04 20 */	lfd f6, 0x420(r25)
/* 8040E664 0040B5A4  C8 B9 04 28 */	lfd f5, 0x428(r25)
/* 8040E668 0040B5A8  C8 99 04 30 */	lfd f4, 0x430(r25)
/* 8040E66C 0040B5AC  C8 79 04 38 */	lfd f3, 0x438(r25)
/* 8040E670 0040B5B0  C8 59 04 40 */	lfd f2, 0x440(r25)
/* 8040E674 0040B5B4  C8 39 04 48 */	lfd f1, 0x448(r25)
/* 8040E678 0040B5B8  C8 19 04 50 */	lfd f0, 0x450(r25)
/* 8040E67C 0040B5BC  D9 61 00 90 */	stfd f11, 0x90(r1)
/* 8040E680 0040B5C0  D9 41 00 98 */	stfd f10, 0x98(r1)
/* 8040E684 0040B5C4  D9 21 00 A0 */	stfd f9, 0xa0(r1)
/* 8040E688 0040B5C8  D9 01 00 78 */	stfd f8, 0x78(r1)
/* 8040E68C 0040B5CC  D8 E1 00 80 */	stfd f7, 0x80(r1)
/* 8040E690 0040B5D0  D8 C1 00 88 */	stfd f6, 0x88(r1)
/* 8040E694 0040B5D4  D8 A1 00 60 */	stfd f5, 0x60(r1)
/* 8040E698 0040B5D8  D8 81 00 68 */	stfd f4, 0x68(r1)
/* 8040E69C 0040B5DC  D8 61 00 70 */	stfd f3, 0x70(r1)
/* 8040E6A0 0040B5E0  D8 41 00 48 */	stfd f2, 0x48(r1)
/* 8040E6A4 0040B5E4  D8 21 00 50 */	stfd f1, 0x50(r1)
/* 8040E6A8 0040B5E8  D8 01 00 58 */	stfd f0, 0x58(r1)
.L_8040E6AC:
/* 8040E6AC 0040B5EC  80 1E 00 00 */	lwz r0, 0(r30)
/* 8040E6B0 0040B5F0  7C 7F 00 2E */	lwzx r3, r31, r0
/* 8040E6B4 0040B5F4  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8040E6B8 0040B5F8  7C 14 00 00 */	cmpw r20, r0
/* 8040E6BC 0040B5FC  40 82 00 40 */	bne .L_8040E6FC
/* 8040E6C0 0040B600  80 1C 01 24 */	lwz r0, 0x124(r28)
/* 8040E6C4 0040B604  80 B6 00 00 */	lwz r5, 0(r22)
/* 8040E6C8 0040B608  90 01 00 34 */	stw r0, 0x34(r1)
/* 8040E6CC 0040B60C  80 D6 00 04 */	lwz r6, 4(r22)
/* 8040E6D0 0040B610  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E6D4 0040B614  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E6D8 0040B618  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E6DC 0040B61C  7D 89 03 A6 */	mtctr r12
/* 8040E6E0 0040B620  4E 80 04 21 */	bctrl 
/* 8040E6E4 0040B624  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E6E8 0040B628  38 81 00 34 */	addi r4, r1, 0x34
/* 8040E6EC 0040B62C  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E6F0 0040B630  7D 89 03 A6 */	mtctr r12
/* 8040E6F4 0040B634  4E 80 04 21 */	bctrl 
/* 8040E6F8 0040B638  48 00 00 54 */	b .L_8040E74C
.L_8040E6FC:
/* 8040E6FC 0040B63C  38 60 00 00 */	li r3, 0
/* 8040E700 0040B640  38 00 00 FF */	li r0, 0xff
/* 8040E704 0040B644  98 61 00 2C */	stb r3, 0x2c(r1)
/* 8040E708 0040B648  80 B6 00 00 */	lwz r5, 0(r22)
/* 8040E70C 0040B64C  98 01 00 2D */	stb r0, 0x2d(r1)
/* 8040E710 0040B650  80 D6 00 04 */	lwz r6, 4(r22)
/* 8040E714 0040B654  98 01 00 2E */	stb r0, 0x2e(r1)
/* 8040E718 0040B658  98 61 00 2F */	stb r3, 0x2f(r1)
/* 8040E71C 0040B65C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8040E720 0040B660  90 01 00 30 */	stw r0, 0x30(r1)
/* 8040E724 0040B664  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E728 0040B668  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E72C 0040B66C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E730 0040B670  7D 89 03 A6 */	mtctr r12
/* 8040E734 0040B674  4E 80 04 21 */	bctrl 
/* 8040E738 0040B678  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E73C 0040B67C  38 81 00 30 */	addi r4, r1, 0x30
/* 8040E740 0040B680  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E744 0040B684  7D 89 03 A6 */	mtctr r12
/* 8040E748 0040B688  4E 80 04 21 */	bctrl 
.L_8040E74C:
/* 8040E74C 0040B68C  80 1E 00 00 */	lwz r0, 0(r30)
/* 8040E750 0040B690  7C 75 00 2E */	lwzx r3, r21, r0
/* 8040E754 0040B694  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8040E758 0040B698  7C 14 00 00 */	cmpw r20, r0
/* 8040E75C 0040B69C  40 82 00 B0 */	bne .L_8040E80C
/* 8040E760 0040B6A0  80 1C 01 24 */	lwz r0, 0x124(r28)
/* 8040E764 0040B6A4  80 B7 00 00 */	lwz r5, 0(r23)
/* 8040E768 0040B6A8  90 01 00 28 */	stw r0, 0x28(r1)
/* 8040E76C 0040B6AC  80 D7 00 04 */	lwz r6, 4(r23)
/* 8040E770 0040B6B0  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E774 0040B6B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E778 0040B6B8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E77C 0040B6BC  7D 89 03 A6 */	mtctr r12
/* 8040E780 0040B6C0  4E 80 04 21 */	bctrl 
/* 8040E784 0040B6C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E788 0040B6C8  38 81 00 28 */	addi r4, r1, 0x28
/* 8040E78C 0040B6CC  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E790 0040B6D0  7D 89 03 A6 */	mtctr r12
/* 8040E794 0040B6D4  4E 80 04 21 */	bctrl 
/* 8040E798 0040B6D8  80 1C 01 24 */	lwz r0, 0x124(r28)
/* 8040E79C 0040B6DC  80 B8 00 00 */	lwz r5, 0(r24)
/* 8040E7A0 0040B6E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8040E7A4 0040B6E4  80 D8 00 04 */	lwz r6, 4(r24)
/* 8040E7A8 0040B6E8  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E7AC 0040B6EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E7B0 0040B6F0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E7B4 0040B6F4  7D 89 03 A6 */	mtctr r12
/* 8040E7B8 0040B6F8  4E 80 04 21 */	bctrl 
/* 8040E7BC 0040B6FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E7C0 0040B700  38 81 00 24 */	addi r4, r1, 0x24
/* 8040E7C4 0040B704  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E7C8 0040B708  7D 89 03 A6 */	mtctr r12
/* 8040E7CC 0040B70C  4E 80 04 21 */	bctrl 
/* 8040E7D0 0040B710  80 1C 01 24 */	lwz r0, 0x124(r28)
/* 8040E7D4 0040B714  80 BA 00 00 */	lwz r5, 0(r26)
/* 8040E7D8 0040B718  90 01 00 20 */	stw r0, 0x20(r1)
/* 8040E7DC 0040B71C  80 DA 00 04 */	lwz r6, 4(r26)
/* 8040E7E0 0040B720  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E7E4 0040B724  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E7E8 0040B728  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E7EC 0040B72C  7D 89 03 A6 */	mtctr r12
/* 8040E7F0 0040B730  4E 80 04 21 */	bctrl 
/* 8040E7F4 0040B734  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E7F8 0040B738  38 81 00 20 */	addi r4, r1, 0x20
/* 8040E7FC 0040B73C  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E800 0040B740  7D 89 03 A6 */	mtctr r12
/* 8040E804 0040B744  4E 80 04 21 */	bctrl 
/* 8040E808 0040B748  48 00 00 F4 */	b .L_8040E8FC
.L_8040E80C:
/* 8040E80C 0040B74C  38 60 00 00 */	li r3, 0
/* 8040E810 0040B750  38 00 00 FF */	li r0, 0xff
/* 8040E814 0040B754  98 61 00 18 */	stb r3, 0x18(r1)
/* 8040E818 0040B758  80 B7 00 00 */	lwz r5, 0(r23)
/* 8040E81C 0040B75C  98 01 00 19 */	stb r0, 0x19(r1)
/* 8040E820 0040B760  80 D7 00 04 */	lwz r6, 4(r23)
/* 8040E824 0040B764  98 01 00 1A */	stb r0, 0x1a(r1)
/* 8040E828 0040B768  98 61 00 1B */	stb r3, 0x1b(r1)
/* 8040E82C 0040B76C  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8040E830 0040B770  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8040E834 0040B774  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E838 0040B778  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E83C 0040B77C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E840 0040B780  7D 89 03 A6 */	mtctr r12
/* 8040E844 0040B784  4E 80 04 21 */	bctrl 
/* 8040E848 0040B788  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E84C 0040B78C  38 81 00 1C */	addi r4, r1, 0x1c
/* 8040E850 0040B790  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E854 0040B794  7D 89 03 A6 */	mtctr r12
/* 8040E858 0040B798  4E 80 04 21 */	bctrl 
/* 8040E85C 0040B79C  38 60 00 00 */	li r3, 0
/* 8040E860 0040B7A0  38 00 00 FF */	li r0, 0xff
/* 8040E864 0040B7A4  98 61 00 10 */	stb r3, 0x10(r1)
/* 8040E868 0040B7A8  80 B8 00 00 */	lwz r5, 0(r24)
/* 8040E86C 0040B7AC  98 01 00 11 */	stb r0, 0x11(r1)
/* 8040E870 0040B7B0  80 D8 00 04 */	lwz r6, 4(r24)
/* 8040E874 0040B7B4  98 01 00 12 */	stb r0, 0x12(r1)
/* 8040E878 0040B7B8  98 61 00 13 */	stb r3, 0x13(r1)
/* 8040E87C 0040B7BC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8040E880 0040B7C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040E884 0040B7C4  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E888 0040B7C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E88C 0040B7CC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E890 0040B7D0  7D 89 03 A6 */	mtctr r12
/* 8040E894 0040B7D4  4E 80 04 21 */	bctrl 
/* 8040E898 0040B7D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E89C 0040B7DC  38 81 00 14 */	addi r4, r1, 0x14
/* 8040E8A0 0040B7E0  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E8A4 0040B7E4  7D 89 03 A6 */	mtctr r12
/* 8040E8A8 0040B7E8  4E 80 04 21 */	bctrl 
/* 8040E8AC 0040B7EC  38 60 00 00 */	li r3, 0
/* 8040E8B0 0040B7F0  38 00 00 FF */	li r0, 0xff
/* 8040E8B4 0040B7F4  98 61 00 08 */	stb r3, 8(r1)
/* 8040E8B8 0040B7F8  80 BA 00 00 */	lwz r5, 0(r26)
/* 8040E8BC 0040B7FC  98 01 00 09 */	stb r0, 9(r1)
/* 8040E8C0 0040B800  80 DA 00 04 */	lwz r6, 4(r26)
/* 8040E8C4 0040B804  98 01 00 0A */	stb r0, 0xa(r1)
/* 8040E8C8 0040B808  98 61 00 0B */	stb r3, 0xb(r1)
/* 8040E8CC 0040B80C  80 01 00 08 */	lwz r0, 8(r1)
/* 8040E8D0 0040B810  90 01 00 0C */	stw r0, 0xc(r1)
/* 8040E8D4 0040B814  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E8D8 0040B818  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E8DC 0040B81C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E8E0 0040B820  7D 89 03 A6 */	mtctr r12
/* 8040E8E4 0040B824  4E 80 04 21 */	bctrl 
/* 8040E8E8 0040B828  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E8EC 0040B82C  38 81 00 0C */	addi r4, r1, 0xc
/* 8040E8F0 0040B830  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8040E8F4 0040B834  7D 89 03 A6 */	mtctr r12
/* 8040E8F8 0040B838  4E 80 04 21 */	bctrl 
.L_8040E8FC:
/* 8040E8FC 0040B83C  3A 94 00 01 */	addi r20, r20, 1
/* 8040E900 0040B840  3A F7 00 08 */	addi r23, r23, 8
/* 8040E904 0040B844  2C 14 00 03 */	cmpwi r20, 3
/* 8040E908 0040B848  3B 18 00 08 */	addi r24, r24, 8
/* 8040E90C 0040B84C  3B 5A 00 08 */	addi r26, r26, 8
/* 8040E910 0040B850  3A D6 00 08 */	addi r22, r22, 8
/* 8040E914 0040B854  41 80 FD 98 */	blt .L_8040E6AC
/* 8040E918 0040B858  3A 60 00 00 */	li r19, 0
/* 8040E91C 0040B85C  7F 92 E3 78 */	mr r18, r28
.L_8040E920:
/* 8040E920 0040B860  80 72 00 A0 */	lwz r3, 0xa0(r18)
/* 8040E924 0040B864  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E928 0040B868  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8040E92C 0040B86C  7D 89 03 A6 */	mtctr r12
/* 8040E930 0040B870  4E 80 04 21 */	bctrl 
/* 8040E934 0040B874  80 72 00 B0 */	lwz r3, 0xb0(r18)
/* 8040E938 0040B878  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E93C 0040B87C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8040E940 0040B880  7D 89 03 A6 */	mtctr r12
/* 8040E944 0040B884  4E 80 04 21 */	bctrl 
/* 8040E948 0040B888  3A 73 00 01 */	addi r19, r19, 1
/* 8040E94C 0040B88C  3A 52 00 04 */	addi r18, r18, 4
/* 8040E950 0040B890  2C 13 00 04 */	cmpwi r19, 4
/* 8040E954 0040B894  41 80 FF CC */	blt .L_8040E920
/* 8040E958 0040B898  38 7D 00 BC */	addi r3, r29, 0xbc
/* 8040E95C 0040B89C  81 9D 00 BC */	lwz r12, 0xbc(r29)
/* 8040E960 0040B8A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8040E964 0040B8A4  7D 89 03 A6 */	mtctr r12
/* 8040E968 0040B8A8  4E 80 04 21 */	bctrl 
/* 8040E96C 0040B8AC  48 01 48 B9 */	bl getRenderModeObj__6SystemFv
/* 8040E970 0040B8B0  A0 A3 00 04 */	lhz r5, 4(r3)
/* 8040E974 0040B8B4  38 60 00 00 */	li r3, 0
/* 8040E978 0040B8B8  80 9C 01 40 */	lwz r4, 0x140(r28)
/* 8040E97C 0040B8BC  80 DC 01 44 */	lwz r6, 0x144(r28)
/* 8040E980 0040B8C0  4B CD AE 59 */	bl GXSetScissor
/* 8040E984 0040B8C4  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E988 0040B8C8  7F A4 EB 78 */	mr r4, r29
/* 8040E98C 0040B8CC  38 BD 00 BC */	addi r5, r29, 0xbc
/* 8040E990 0040B8D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E994 0040B8D4  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 8040E998 0040B8D8  7D 89 03 A6 */	mtctr r12
/* 8040E99C 0040B8DC  4E 80 04 21 */	bctrl 
/* 8040E9A0 0040B8E0  80 9E 00 00 */	lwz r4, 0(r30)
/* 8040E9A4 0040B8E4  3C 60 6D 61 */	lis r3, 0x6D616765@ha
/* 8040E9A8 0040B8E8  38 00 00 01 */	li r0, 1
/* 8040E9AC 0040B8EC  38 A0 50 69 */	li r5, 0x5069
/* 8040E9B0 0040B8F0  7C 84 F8 2E */	lwzx r4, r4, r31
/* 8040E9B4 0040B8F4  38 C3 67 65 */	addi r6, r3, 0x6D616765@l
/* 8040E9B8 0040B8F8  98 04 00 18 */	stb r0, 0x18(r4)
/* 8040E9BC 0040B8FC  80 7E 00 00 */	lwz r3, 0(r30)
/* 8040E9C0 0040B900  7C 63 F8 2E */	lwzx r3, r3, r31
/* 8040E9C4 0040B904  80 63 00 00 */	lwz r3, 0(r3)
/* 8040E9C8 0040B908  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E9CC 0040B90C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E9D0 0040B910  7D 89 03 A6 */	mtctr r12
/* 8040E9D4 0040B914  4E 80 04 21 */	bctrl 
/* 8040E9D8 0040B918  7C 74 1B 78 */	mr r20, r3
/* 8040E9DC 0040B91C  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040E9E0 0040B920  3C 80 69 63 */	lis r4, 0x69637430@ha
/* 8040E9E4 0040B924  38 A0 50 70 */	li r5, 0x5070
/* 8040E9E8 0040B928  81 83 00 00 */	lwz r12, 0(r3)
/* 8040E9EC 0040B92C  38 C4 74 30 */	addi r6, r4, 0x69637430@l
/* 8040E9F0 0040B930  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040E9F4 0040B934  7D 89 03 A6 */	mtctr r12
/* 8040E9F8 0040B938  4E 80 04 21 */	bctrl 
/* 8040E9FC 0040B93C  38 63 00 80 */	addi r3, r3, 0x80
/* 8040EA00 0040B940  38 94 00 50 */	addi r4, r20, 0x50
/* 8040EA04 0040B944  4B CD B8 C9 */	bl PSMTXCopy
/* 8040EA08 0040B948  80 9E 00 00 */	lwz r4, 0(r30)
/* 8040EA0C 0040B94C  3C 60 6D 61 */	lis r3, 0x6D616765@ha
/* 8040EA10 0040B950  38 00 00 01 */	li r0, 1
/* 8040EA14 0040B954  38 A0 50 69 */	li r5, 0x5069
/* 8040EA18 0040B958  7C 84 A8 2E */	lwzx r4, r4, r21
/* 8040EA1C 0040B95C  38 C3 67 65 */	addi r6, r3, 0x6D616765@l
/* 8040EA20 0040B960  98 04 00 18 */	stb r0, 0x18(r4)
/* 8040EA24 0040B964  80 7E 00 00 */	lwz r3, 0(r30)
/* 8040EA28 0040B968  7C 63 A8 2E */	lwzx r3, r3, r21
/* 8040EA2C 0040B96C  80 63 00 00 */	lwz r3, 0(r3)
/* 8040EA30 0040B970  81 83 00 00 */	lwz r12, 0(r3)
/* 8040EA34 0040B974  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040EA38 0040B978  7D 89 03 A6 */	mtctr r12
/* 8040EA3C 0040B97C  4E 80 04 21 */	bctrl 
/* 8040EA40 0040B980  7C 74 1B 78 */	mr r20, r3
/* 8040EA44 0040B984  80 7C 00 3C */	lwz r3, 0x3c(r28)
/* 8040EA48 0040B988  3C 80 69 63 */	lis r4, 0x69637431@ha
/* 8040EA4C 0040B98C  38 A0 50 70 */	li r5, 0x5070
/* 8040EA50 0040B990  81 83 00 00 */	lwz r12, 0(r3)
/* 8040EA54 0040B994  38 C4 74 31 */	addi r6, r4, 0x69637431@l
/* 8040EA58 0040B998  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8040EA5C 0040B99C  7D 89 03 A6 */	mtctr r12
/* 8040EA60 0040B9A0  4E 80 04 21 */	bctrl 
/* 8040EA64 0040B9A4  38 63 00 80 */	addi r3, r3, 0x80
/* 8040EA68 0040B9A8  38 94 00 50 */	addi r4, r20, 0x50
/* 8040EA6C 0040B9AC  4B CD B8 61 */	bl PSMTXCopy
/* 8040EA70 0040B9B0  3A 40 00 00 */	li r18, 0
/* 8040EA74 0040B9B4  82 9C 01 44 */	lwz r20, 0x144(r28)
/* 8040EA78 0040B9B8  82 7C 01 40 */	lwz r19, 0x140(r28)
/* 8040EA7C 0040B9BC  7E 55 93 78 */	mr r21, r18
.L_8040EA80:
/* 8040EA80 0040B9C0  80 7E 00 00 */	lwz r3, 0(r30)
/* 8040EA84 0040B9C4  7C 63 A8 2E */	lwzx r3, r3, r21
/* 8040EA88 0040B9C8  88 03 00 18 */	lbz r0, 0x18(r3)
/* 8040EA8C 0040B9CC  28 00 00 01 */	cmplwi r0, 1
/* 8040EA90 0040B9D0  40 82 00 54 */	bne .L_8040EAE4
/* 8040EA94 0040B9D4  38 7D 00 BC */	addi r3, r29, 0xbc
/* 8040EA98 0040B9D8  81 9D 00 BC */	lwz r12, 0xbc(r29)
/* 8040EA9C 0040B9DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8040EAA0 0040B9E0  7D 89 03 A6 */	mtctr r12
/* 8040EAA4 0040B9E4  4E 80 04 21 */	bctrl 
/* 8040EAA8 0040B9E8  48 01 47 7D */	bl getRenderModeObj__6SystemFv
/* 8040EAAC 0040B9EC  A0 A3 00 04 */	lhz r5, 4(r3)
/* 8040EAB0 0040B9F0  7E 64 9B 78 */	mr r4, r19
/* 8040EAB4 0040B9F4  7E 86 A3 78 */	mr r6, r20
/* 8040EAB8 0040B9F8  38 60 00 00 */	li r3, 0
/* 8040EABC 0040B9FC  4B CD AD 1D */	bl GXSetScissor
/* 8040EAC0 0040BA00  80 7E 00 00 */	lwz r3, 0(r30)
/* 8040EAC4 0040BA04  7F A4 EB 78 */	mr r4, r29
/* 8040EAC8 0040BA08  38 BD 00 BC */	addi r5, r29, 0xbc
/* 8040EACC 0040BA0C  7C 63 A8 2E */	lwzx r3, r3, r21
/* 8040EAD0 0040BA10  80 63 00 00 */	lwz r3, 0(r3)
/* 8040EAD4 0040BA14  81 83 00 00 */	lwz r12, 0(r3)
/* 8040EAD8 0040BA18  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 8040EADC 0040BA1C  7D 89 03 A6 */	mtctr r12
/* 8040EAE0 0040BA20  4E 80 04 21 */	bctrl 
.L_8040EAE4:
/* 8040EAE4 0040BA24  3A 52 00 01 */	addi r18, r18, 1
/* 8040EAE8 0040BA28  3A B5 00 04 */	addi r21, r21, 4
/* 8040EAEC 0040BA2C  2C 12 00 10 */	cmpwi r18, 0x10
/* 8040EAF0 0040BA30  41 80 FF 90 */	blt .L_8040EA80
/* 8040EAF4 0040BA34  BA 41 01 28 */	lmw r18, 0x128(r1)
/* 8040EAF8 0040BA38  80 01 01 64 */	lwz r0, 0x164(r1)
/* 8040EAFC 0040BA3C  7C 08 03 A6 */	mtlr r0
/* 8040EB00 0040BA40  38 21 01 60 */	addi r1, r1, 0x160
/* 8040EB04 0040BA44  4E 80 00 20 */	blr 
.endfn drawReplace__Q32kh6Screen14ObjFinalResultFR8Graphicsi

.fn getClr__Q32kh6Screen14ObjFinalResultFRCQ28JUtility6TColorRCQ28JUtility6TColorf, global
/* 8040EB08 0040BA48  89 85 00 00 */	lbz r12, 0(r5)
/* 8040EB0C 0040BA4C  3D 00 43 30 */	lis r8, 0x4330
/* 8040EB10 0040BA50  88 06 00 00 */	lbz r0, 0(r6)
/* 8040EB14 0040BA54  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8040EB18 0040BA58  7C 0C 00 50 */	subf r0, r12, r0
/* 8040EB1C 0040BA5C  89 65 00 01 */	lbz r11, 1(r5)
/* 8040EB20 0040BA60  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8040EB24 0040BA64  91 01 00 50 */	stw r8, 0x50(r1)
/* 8040EB28 0040BA68  88 86 00 01 */	lbz r4, 1(r6)
/* 8040EB2C 0040BA6C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8040EB30 0040BA70  C8 A2 1E 78 */	lfd f5, lbl_805201D8@sda21(r2)
/* 8040EB34 0040BA74  7C 8B 20 50 */	subf r4, r11, r4
/* 8040EB38 0040BA78  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 8040EB3C 0040BA7C  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 8040EB40 0040BA80  91 81 00 5C */	stw r12, 0x5c(r1)
/* 8040EB44 0040BA84  C8 82 1E 48 */	lfd f4, lbl_805201A8@sda21(r2)
/* 8040EB48 0040BA88  EC 40 28 28 */	fsubs f2, f0, f5
/* 8040EB4C 0040BA8C  91 01 00 58 */	stw r8, 0x58(r1)
/* 8040EB50 0040BA90  89 45 00 02 */	lbz r10, 2(r5)
/* 8040EB54 0040BA94  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 8040EB58 0040BA98  88 E6 00 02 */	lbz r7, 2(r6)
/* 8040EB5C 0040BA9C  EC 00 20 28 */	fsubs f0, f0, f4
/* 8040EB60 0040BAA0  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8040EB64 0040BAA4  89 25 00 03 */	lbz r9, 3(r5)
/* 8040EB68 0040BAA8  7C AA 38 50 */	subf r5, r10, r7
/* 8040EB6C 0040BAAC  91 01 00 38 */	stw r8, 0x38(r1)
/* 8040EB70 0040BAB0  6C A5 80 00 */	xoris r5, r5, 0x8000
/* 8040EB74 0040BAB4  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8040EB78 0040BAB8  C8 61 00 38 */	lfd f3, 0x38(r1)
/* 8040EB7C 0040BABC  91 61 00 44 */	stw r11, 0x44(r1)
/* 8040EB80 0040BAC0  EC 63 28 28 */	fsubs f3, f3, f5
/* 8040EB84 0040BAC4  88 C6 00 03 */	lbz r6, 3(r6)
/* 8040EB88 0040BAC8  91 01 00 40 */	stw r8, 0x40(r1)
/* 8040EB8C 0040BACC  FC 00 00 1E */	fctiwz f0, f0
/* 8040EB90 0040BAD0  7C 09 30 50 */	subf r0, r9, r6
/* 8040EB94 0040BAD4  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 8040EB98 0040BAD8  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8040EB9C 0040BADC  6C 06 80 00 */	xoris r6, r0, 0x8000
/* 8040EBA0 0040BAE0  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8040EBA4 0040BAE4  EC 02 20 28 */	fsubs f0, f2, f4
/* 8040EBA8 0040BAE8  91 01 00 20 */	stw r8, 0x20(r1)
/* 8040EBAC 0040BAEC  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 8040EBB0 0040BAF0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8040EBB4 0040BAF4  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 8040EBB8 0040BAF8  91 41 00 2C */	stw r10, 0x2c(r1)
/* 8040EBBC 0040BAFC  FC 00 00 1E */	fctiwz f0, f0
/* 8040EBC0 0040BB00  91 01 00 28 */	stw r8, 0x28(r1)
/* 8040EBC4 0040BB04  EC 62 28 28 */	fsubs f3, f2, f5
/* 8040EBC8 0040BB08  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8040EBCC 0040BB0C  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 8040EBD0 0040BB10  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8040EBD4 0040BB14  EC 02 20 28 */	fsubs f0, f2, f4
/* 8040EBD8 0040BB18  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8040EBDC 0040BB1C  91 01 00 08 */	stw r8, 8(r1)
/* 8040EBE0 0040BB20  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 8040EBE4 0040BB24  C8 41 00 08 */	lfd f2, 8(r1)
/* 8040EBE8 0040BB28  91 21 00 14 */	stw r9, 0x14(r1)
/* 8040EBEC 0040BB2C  EC 62 28 28 */	fsubs f3, f2, f5
/* 8040EBF0 0040BB30  91 01 00 10 */	stw r8, 0x10(r1)
/* 8040EBF4 0040BB34  FC 00 00 1E */	fctiwz f0, f0
/* 8040EBF8 0040BB38  98 03 00 00 */	stb r0, 0(r3)
/* 8040EBFC 0040BB3C  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 8040EC00 0040BB40  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8040EC04 0040BB44  EC 02 20 28 */	fsubs f0, f2, f4
/* 8040EC08 0040BB48  98 83 00 01 */	stb r4, 1(r3)
/* 8040EC0C 0040BB4C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8040EC10 0040BB50  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 8040EC14 0040BB54  98 03 00 02 */	stb r0, 2(r3)
/* 8040EC18 0040BB58  FC 00 00 1E */	fctiwz f0, f0
/* 8040EC1C 0040BB5C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8040EC20 0040BB60  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8040EC24 0040BB64  98 03 00 03 */	stb r0, 3(r3)
/* 8040EC28 0040BB68  38 21 00 70 */	addi r1, r1, 0x70
/* 8040EC2C 0040BB6C  4E 80 00 20 */	blr 
.endfn getClr__Q32kh6Screen14ObjFinalResultFRCQ28JUtility6TColorRCQ28JUtility6TColorf

.fn doUserCallBackFunc__Q32kh6Screen16SceneFinalResultFPQ28Resource10MgrCommand, global
/* 8040EC30 0040BB70  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8040EC34 0040BB74  7C 08 02 A6 */	mflr r0
/* 8040EC38 0040BB78  3C A0 52 53 */	lis r5, 0x52534C54@ha
/* 8040EC3C 0040BB7C  3C 80 80 4A */	lis r4, lbl_80498CD8@ha
/* 8040EC40 0040BB80  90 01 00 44 */	stw r0, 0x44(r1)
/* 8040EC44 0040BB84  38 C5 4C 54 */	addi r6, r5, 0x52534C54@l
/* 8040EC48 0040BB88  38 A0 46 5F */	li r5, 0x465f
/* 8040EC4C 0040BB8C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8040EC50 0040BB90  3B E4 8C D8 */	addi r31, r4, lbl_80498CD8@l
/* 8040EC54 0040BB94  38 80 4B 48 */	li r4, 0x4b48
/* 8040EC58 0040BB98  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8040EC5C 0040BB9C  7C 7E 1B 78 */	mr r30, r3
/* 8040EC60 0040BBA0  80 63 02 1C */	lwz r3, 0x21c(r3)
/* 8040EC64 0040BBA4  4B F0 06 B9 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8040EC68 0040BBA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8040EC6C 0040BBAC  40 82 00 18 */	bne .L_8040EC84
/* 8040EC70 0040BBB0  38 7F 00 00 */	addi r3, r31, 0
/* 8040EC74 0040BBB4  38 BF 03 00 */	addi r5, r31, 0x300
/* 8040EC78 0040BBB8  38 80 03 58 */	li r4, 0x358
/* 8040EC7C 0040BBBC  4C C6 31 82 */	crclr 6
/* 8040EC80 0040BBC0  4B C1 B9 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8040EC84:
/* 8040EC84 0040BBC4  38 7E 00 04 */	addi r3, r30, 4
/* 8040EC88 0040BBC8  38 9F 04 58 */	addi r4, r31, 0x458
/* 8040EC8C 0040BBCC  4B F0 92 C1 */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 8040EC90 0040BBD0  38 61 00 08 */	addi r3, r1, 8
/* 8040EC94 0040BBD4  38 9E 00 04 */	addi r4, r30, 4
/* 8040EC98 0040BBD8  48 03 D9 41 */	bl __ct__Q212LoadResource3ArgFPCc
/* 8040EC9C 0040BBDC  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8040ECA0 0040BBE0  38 81 00 08 */	addi r4, r1, 8
/* 8040ECA4 0040BBE4  48 03 DA 71 */	bl mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8040ECA8 0040BBE8  28 03 00 00 */	cmplwi r3, 0
/* 8040ECAC 0040BBEC  41 82 00 30 */	beq .L_8040ECDC
/* 8040ECB0 0040BBF0  83 E3 00 34 */	lwz r31, 0x34(r3)
/* 8040ECB4 0040BBF4  38 60 01 50 */	li r3, 0x150
/* 8040ECB8 0040BBF8  4B C1 51 ED */	bl __nw__FUl
/* 8040ECBC 0040BBFC  7C 64 1B 79 */	or. r4, r3, r3
/* 8040ECC0 0040BC00  41 82 00 0C */	beq .L_8040ECCC
/* 8040ECC4 0040BC04  4B FF D5 59 */	bl __ct__Q32kh6Screen14ObjFinalResultFv
/* 8040ECC8 0040BC08  7C 64 1B 78 */	mr r4, r3
.L_8040ECCC:
/* 8040ECCC 0040BC0C  7F C3 F3 78 */	mr r3, r30
/* 8040ECD0 0040BC10  7F E5 FB 78 */	mr r5, r31
/* 8040ECD4 0040BC14  48 04 30 A1 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8040ECD8 0040BC18  48 00 00 18 */	b .L_8040ECF0
.L_8040ECDC:
/* 8040ECDC 0040BC1C  38 7F 00 00 */	addi r3, r31, 0
/* 8040ECE0 0040BC20  38 80 03 60 */	li r4, 0x360
/* 8040ECE4 0040BC24  38 A2 1E 38 */	addi r5, r2, lbl_80520198@sda21
/* 8040ECE8 0040BC28  4C C6 31 82 */	crclr 6
/* 8040ECEC 0040BC2C  4B C1 B9 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8040ECF0:
/* 8040ECF0 0040BC30  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8040ECF4 0040BC34  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8040ECF8 0040BC38  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8040ECFC 0040BC3C  7C 08 03 A6 */	mtlr r0
/* 8040ED00 0040BC40  38 21 00 40 */	addi r1, r1, 0x40
/* 8040ED04 0040BC44  4E 80 00 20 */	blr 
.endfn doUserCallBackFunc__Q32kh6Screen16SceneFinalResultFPQ28Resource10MgrCommand

.fn createDispMember__Q32kh6Screen16SceneFinalResultFPCiPCiPPQ24Game9Highscore, global
/* 8040ED08 0040BC48  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8040ED0C 0040BC4C  7C 08 02 A6 */	mflr r0
/* 8040ED10 0040BC50  3C C0 80 4A */	lis r6, lbl_80498CD8@ha
/* 8040ED14 0040BC54  90 01 01 34 */	stw r0, 0x134(r1)
/* 8040ED18 0040BC58  BD C1 00 E8 */	stmw r14, 0xe8(r1)
/* 8040ED1C 0040BC5C  7C 7A 1B 78 */	mr r26, r3
/* 8040ED20 0040BC60  7C 9B 23 78 */	mr r27, r4
/* 8040ED24 0040BC64  7C BC 2B 78 */	mr r28, r5
/* 8040ED28 0040BC68  3B E6 8C D8 */	addi r31, r6, lbl_80498CD8@l
/* 8040ED2C 0040BC6C  38 60 00 04 */	li r3, 4
/* 8040ED30 0040BC70  4B C1 51 75 */	bl __nw__FUl
/* 8040ED34 0040BC74  7C 7E 1B 79 */	or. r30, r3, r3
/* 8040ED38 0040BC78  41 82 02 9C */	beq .L_8040EFD4
/* 8040ED3C 0040BC7C  81 FF 02 24 */	lwz r15, 0x224(r31)
/* 8040ED40 0040BC80  38 61 00 88 */	addi r3, r1, 0x88
/* 8040ED44 0040BC84  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 8040ED48 0040BC88  38 9F 02 54 */	addi r4, r31, 0x254
/* 8040ED4C 0040BC8C  91 E1 00 E4 */	stw r15, 0xe4(r1)
/* 8040ED50 0040BC90  3B A0 00 00 */	li r29, 0
/* 8040ED54 0040BC94  81 FF 02 28 */	lwz r15, 0x228(r31)
/* 8040ED58 0040BC98  90 01 00 50 */	stw r0, 0x50(r1)
/* 8040ED5C 0040BC9C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8040ED60 0040BCA0  91 E1 00 B8 */	stw r15, 0xb8(r1)
/* 8040ED64 0040BCA4  81 FF 02 2C */	lwz r15, 0x22c(r31)
/* 8040ED68 0040BCA8  90 01 00 58 */	stw r0, 0x58(r1)
/* 8040ED6C 0040BCAC  80 01 00 B8 */	lwz r0, 0xb8(r1)
/* 8040ED70 0040BCB0  91 E1 00 BC */	stw r15, 0xbc(r1)
/* 8040ED74 0040BCB4  81 FF 02 30 */	lwz r15, 0x230(r31)
/* 8040ED78 0040BCB8  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8040ED7C 0040BCBC  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 8040ED80 0040BCC0  91 E1 00 C0 */	stw r15, 0xc0(r1)
/* 8040ED84 0040BCC4  81 FF 02 34 */	lwz r15, 0x234(r31)
/* 8040ED88 0040BCC8  90 01 00 60 */	stw r0, 0x60(r1)
/* 8040ED8C 0040BCCC  80 01 00 C0 */	lwz r0, 0xc0(r1)
/* 8040ED90 0040BCD0  91 E1 00 C4 */	stw r15, 0xc4(r1)
/* 8040ED94 0040BCD4  81 FF 02 38 */	lwz r15, 0x238(r31)
/* 8040ED98 0040BCD8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8040ED9C 0040BCDC  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8040EDA0 0040BCE0  91 E1 00 C8 */	stw r15, 0xc8(r1)
/* 8040EDA4 0040BCE4  81 FF 02 3C */	lwz r15, 0x23c(r31)
/* 8040EDA8 0040BCE8  90 01 00 68 */	stw r0, 0x68(r1)
/* 8040EDAC 0040BCEC  80 01 00 C8 */	lwz r0, 0xc8(r1)
/* 8040EDB0 0040BCF0  91 E1 00 CC */	stw r15, 0xcc(r1)
/* 8040EDB4 0040BCF4  81 FF 02 40 */	lwz r15, 0x240(r31)
/* 8040EDB8 0040BCF8  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8040EDBC 0040BCFC  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 8040EDC0 0040BD00  91 E1 00 D0 */	stw r15, 0xd0(r1)
/* 8040EDC4 0040BD04  81 FF 02 44 */	lwz r15, 0x244(r31)
/* 8040EDC8 0040BD08  90 01 00 70 */	stw r0, 0x70(r1)
/* 8040EDCC 0040BD0C  80 01 00 D0 */	lwz r0, 0xd0(r1)
/* 8040EDD0 0040BD10  91 E1 00 D4 */	stw r15, 0xd4(r1)
/* 8040EDD4 0040BD14  81 FF 02 48 */	lwz r15, 0x248(r31)
/* 8040EDD8 0040BD18  90 01 00 74 */	stw r0, 0x74(r1)
/* 8040EDDC 0040BD1C  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8040EDE0 0040BD20  91 E1 00 D8 */	stw r15, 0xd8(r1)
/* 8040EDE4 0040BD24  81 FF 02 4C */	lwz r15, 0x24c(r31)
/* 8040EDE8 0040BD28  90 01 00 78 */	stw r0, 0x78(r1)
/* 8040EDEC 0040BD2C  80 01 00 D8 */	lwz r0, 0xd8(r1)
/* 8040EDF0 0040BD30  91 E1 00 DC */	stw r15, 0xdc(r1)
/* 8040EDF4 0040BD34  81 FF 02 50 */	lwz r15, 0x250(r31)
/* 8040EDF8 0040BD38  90 01 00 7C */	stw r0, 0x7c(r1)
/* 8040EDFC 0040BD3C  80 01 00 DC */	lwz r0, 0xdc(r1)
/* 8040EE00 0040BD40  82 1F 01 D4 */	lwz r16, 0x1d4(r31)
/* 8040EE04 0040BD44  82 3F 01 D8 */	lwz r17, 0x1d8(r31)
/* 8040EE08 0040BD48  82 5F 01 DC */	lwz r18, 0x1dc(r31)
/* 8040EE0C 0040BD4C  82 7F 01 E0 */	lwz r19, 0x1e0(r31)
/* 8040EE10 0040BD50  82 9F 01 E4 */	lwz r20, 0x1e4(r31)
/* 8040EE14 0040BD54  82 BF 01 E8 */	lwz r21, 0x1e8(r31)
/* 8040EE18 0040BD58  82 DF 01 EC */	lwz r22, 0x1ec(r31)
/* 8040EE1C 0040BD5C  82 FF 01 F0 */	lwz r23, 0x1f0(r31)
/* 8040EE20 0040BD60  83 1F 01 F4 */	lwz r24, 0x1f4(r31)
/* 8040EE24 0040BD64  83 3F 01 F8 */	lwz r25, 0x1f8(r31)
/* 8040EE28 0040BD68  81 9F 01 FC */	lwz r12, 0x1fc(r31)
/* 8040EE2C 0040BD6C  81 7F 02 00 */	lwz r11, 0x200(r31)
/* 8040EE30 0040BD70  81 5F 02 04 */	lwz r10, 0x204(r31)
/* 8040EE34 0040BD74  81 3F 02 08 */	lwz r9, 0x208(r31)
/* 8040EE38 0040BD78  81 1F 02 0C */	lwz r8, 0x20c(r31)
/* 8040EE3C 0040BD7C  80 FF 02 10 */	lwz r7, 0x210(r31)
/* 8040EE40 0040BD80  80 DF 02 14 */	lwz r6, 0x214(r31)
/* 8040EE44 0040BD84  80 BF 02 18 */	lwz r5, 0x218(r31)
/* 8040EE48 0040BD88  81 DF 02 20 */	lwz r14, 0x220(r31)
/* 8040EE4C 0040BD8C  90 01 00 80 */	stw r0, 0x80(r1)
/* 8040EE50 0040BD90  7D E0 7B 78 */	mr r0, r15
/* 8040EE54 0040BD94  91 E1 00 E0 */	stw r15, 0xe0(r1)
/* 8040EE58 0040BD98  92 01 00 08 */	stw r16, 8(r1)
/* 8040EE5C 0040BD9C  92 21 00 0C */	stw r17, 0xc(r1)
/* 8040EE60 0040BDA0  92 41 00 10 */	stw r18, 0x10(r1)
/* 8040EE64 0040BDA4  92 61 00 14 */	stw r19, 0x14(r1)
/* 8040EE68 0040BDA8  92 81 00 18 */	stw r20, 0x18(r1)
/* 8040EE6C 0040BDAC  92 A1 00 1C */	stw r21, 0x1c(r1)
/* 8040EE70 0040BDB0  92 C1 00 20 */	stw r22, 0x20(r1)
/* 8040EE74 0040BDB4  92 E1 00 24 */	stw r23, 0x24(r1)
/* 8040EE78 0040BDB8  93 01 00 28 */	stw r24, 0x28(r1)
/* 8040EE7C 0040BDBC  93 21 00 2C */	stw r25, 0x2c(r1)
/* 8040EE80 0040BDC0  91 81 00 30 */	stw r12, 0x30(r1)
/* 8040EE84 0040BDC4  91 61 00 34 */	stw r11, 0x34(r1)
/* 8040EE88 0040BDC8  91 41 00 38 */	stw r10, 0x38(r1)
/* 8040EE8C 0040BDCC  91 21 00 3C */	stw r9, 0x3c(r1)
/* 8040EE90 0040BDD0  91 01 00 40 */	stw r8, 0x40(r1)
/* 8040EE94 0040BDD4  90 E1 00 44 */	stw r7, 0x44(r1)
/* 8040EE98 0040BDD8  90 C1 00 48 */	stw r6, 0x48(r1)
/* 8040EE9C 0040BDDC  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 8040EEA0 0040BDE0  91 C1 00 54 */	stw r14, 0x54(r1)
/* 8040EEA4 0040BDE4  90 01 00 84 */	stw r0, 0x84(r1)
/* 8040EEA8 0040BDE8  48 03 D7 31 */	bl __ct__Q212LoadResource3ArgFPCc
/* 8040EEAC 0040BDEC  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8040EEB0 0040BDF0  38 81 00 88 */	addi r4, r1, 0x88
/* 8040EEB4 0040BDF4  48 03 D8 61 */	bl mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8040EEB8 0040BDF8  28 03 00 00 */	cmplwi r3, 0
/* 8040EEBC 0040BDFC  41 82 00 0C */	beq .L_8040EEC8
/* 8040EEC0 0040BE00  83 A3 00 34 */	lwz r29, 0x34(r3)
/* 8040EEC4 0040BE04  48 00 00 18 */	b .L_8040EEDC
.L_8040EEC8:
/* 8040EEC8 0040BE08  38 7F 00 00 */	addi r3, r31, 0
/* 8040EECC 0040BE0C  38 80 00 6B */	li r4, 0x6b
/* 8040EED0 0040BE10  38 A2 1E 38 */	addi r5, r2, lbl_80520198@sda21
/* 8040EED4 0040BE14  4C C6 31 82 */	crclr 6
/* 8040EED8 0040BE18  4B C1 B7 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8040EEDC:
/* 8040EEDC 0040BE1C  38 60 00 40 */	li r3, 0x40
/* 8040EEE0 0040BE20  4B C1 50 CD */	bl __nwa__FUl
/* 8040EEE4 0040BE24  3A 00 00 00 */	li r16, 0
/* 8040EEE8 0040BE28  90 7E 00 00 */	stw r3, 0(r30)
/* 8040EEEC 0040BE2C  7E 14 83 78 */	mr r20, r16
/* 8040EEF0 0040BE30  3A 41 00 08 */	addi r18, r1, 8
/* 8040EEF4 0040BE34  3A 61 00 48 */	addi r19, r1, 0x48
.L_8040EEF8:
/* 8040EEF8 0040BE38  38 60 00 1C */	li r3, 0x1c
/* 8040EEFC 0040BE3C  4B C1 4F A9 */	bl __nw__FUl
/* 8040EF00 0040BE40  7C 6F 1B 79 */	or. r15, r3, r3
/* 8040EF04 0040BE44  41 82 00 B0 */	beq .L_8040EFB4
/* 8040EF08 0040BE48  80 13 00 00 */	lwz r0, 0(r19)
/* 8040EF0C 0040BE4C  38 80 00 02 */	li r4, 2
/* 8040EF10 0040BE50  82 32 00 00 */	lwz r17, 0(r18)
/* 8040EF14 0040BE54  54 00 10 3A */	slwi r0, r0, 2
/* 8040EF18 0040BE58  7C 7C 00 2E */	lwzx r3, r28, r0
/* 8040EF1C 0040BE5C  4B E2 4E 31 */	bl getScore__Q24Game9HighscoreFi
/* 8040EF20 0040BE60  80 13 00 00 */	lwz r0, 0(r19)
/* 8040EF24 0040BE64  7C 6E 1B 78 */	mr r14, r3
/* 8040EF28 0040BE68  38 80 00 01 */	li r4, 1
/* 8040EF2C 0040BE6C  54 00 10 3A */	slwi r0, r0, 2
/* 8040EF30 0040BE70  7C 7C 00 2E */	lwzx r3, r28, r0
/* 8040EF34 0040BE74  4B E2 4E 19 */	bl getScore__Q24Game9HighscoreFi
/* 8040EF38 0040BE78  80 13 00 00 */	lwz r0, 0(r19)
/* 8040EF3C 0040BE7C  7C 75 1B 78 */	mr r21, r3
/* 8040EF40 0040BE80  38 80 00 00 */	li r4, 0
/* 8040EF44 0040BE84  54 00 10 3A */	slwi r0, r0, 2
/* 8040EF48 0040BE88  7C 7C 00 2E */	lwzx r3, r28, r0
/* 8040EF4C 0040BE8C  4B E2 4E 01 */	bl getScore__Q24Game9HighscoreFi
/* 8040EF50 0040BE90  80 93 00 00 */	lwz r4, 0(r19)
/* 8040EF54 0040BE94  38 00 00 00 */	li r0, 0
/* 8040EF58 0040BE98  54 85 10 3A */	slwi r5, r4, 2
/* 8040EF5C 0040BE9C  7C 9B 28 2E */	lwzx r4, r27, r5
/* 8040EF60 0040BEA0  7C BA 28 2E */	lwzx r5, r26, r5
/* 8040EF64 0040BEA4  90 8F 00 14 */	stw r4, 0x14(r15)
/* 8040EF68 0040BEA8  98 0F 00 18 */	stb r0, 0x18(r15)
/* 8040EF6C 0040BEAC  90 AF 00 04 */	stw r5, 4(r15)
/* 8040EF70 0040BEB0  90 6F 00 08 */	stw r3, 8(r15)
/* 8040EF74 0040BEB4  38 60 01 38 */	li r3, 0x138
/* 8040EF78 0040BEB8  92 AF 00 0C */	stw r21, 0xc(r15)
/* 8040EF7C 0040BEBC  91 CF 00 10 */	stw r14, 0x10(r15)
/* 8040EF80 0040BEC0  4B C1 4F 25 */	bl __nw__FUl
/* 8040EF84 0040BEC4  28 03 00 00 */	cmplwi r3, 0
/* 8040EF88 0040BEC8  41 82 00 08 */	beq .L_8040EF90
/* 8040EF8C 0040BECC  48 02 5B 35 */	bl __ct__Q29P2DScreen3MgrFv
.L_8040EF90:
/* 8040EF90 0040BED0  90 6F 00 00 */	stw r3, 0(r15)
/* 8040EF94 0040BED4  7E 24 8B 78 */	mr r4, r17
/* 8040EF98 0040BED8  7F A6 EB 78 */	mr r6, r29
/* 8040EF9C 0040BEDC  3C A0 01 04 */	lis r5, 0x104
/* 8040EFA0 0040BEE0  80 6F 00 00 */	lwz r3, 0(r15)
/* 8040EFA4 0040BEE4  4B C3 06 81 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8040EFA8 0040BEE8  80 6F 00 00 */	lwz r3, 0(r15)
/* 8040EFAC 0040BEEC  38 80 00 04 */	li r4, 4
/* 8040EFB0 0040BEF0  4B C2 9D 0D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
.L_8040EFB4:
/* 8040EFB4 0040BEF4  80 7E 00 00 */	lwz r3, 0(r30)
/* 8040EFB8 0040BEF8  3A 10 00 01 */	addi r16, r16, 1
/* 8040EFBC 0040BEFC  2C 10 00 10 */	cmpwi r16, 0x10
/* 8040EFC0 0040BF00  3A 73 00 04 */	addi r19, r19, 4
/* 8040EFC4 0040BF04  7D E3 A1 2E */	stwx r15, r3, r20
/* 8040EFC8 0040BF08  3A 94 00 04 */	addi r20, r20, 4
/* 8040EFCC 0040BF0C  3A 52 00 04 */	addi r18, r18, 4
/* 8040EFD0 0040BF10  41 80 FF 28 */	blt .L_8040EEF8
.L_8040EFD4:
/* 8040EFD4 0040BF14  7F C3 F3 78 */	mr r3, r30
/* 8040EFD8 0040BF18  B9 C1 00 E8 */	lmw r14, 0xe8(r1)
/* 8040EFDC 0040BF1C  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8040EFE0 0040BF20  7C 08 03 A6 */	mtlr r0
/* 8040EFE4 0040BF24  38 21 01 30 */	addi r1, r1, 0x130
/* 8040EFE8 0040BF28  4E 80 00 20 */	blr 
.endfn createDispMember__Q32kh6Screen16SceneFinalResultFPCiPCiPPQ24Game9Highscore

.fn getResName__Q32kh6Screen16SceneFinalResultCFv, weak
/* 8040EFEC 0040BF2C  38 62 1E 80 */	addi r3, r2, lbl_805201E0@sda21
/* 8040EFF0 0040BF30  4E 80 00 20 */	blr 
.endfn getResName__Q32kh6Screen16SceneFinalResultCFv

.fn getSceneType__Q32kh6Screen16SceneFinalResultFv, weak
/* 8040EFF4 0040BF34  38 60 4E 26 */	li r3, 0x4e26
/* 8040EFF8 0040BF38  4E 80 00 20 */	blr 
.endfn getSceneType__Q32kh6Screen16SceneFinalResultFv

.fn getOwnerID__Q32kh6Screen16SceneFinalResultFv, weak
/* 8040EFFC 0040BF3C  38 60 4B 48 */	li r3, 0x4b48
/* 8040F000 0040BF40  4E 80 00 20 */	blr 
.endfn getOwnerID__Q32kh6Screen16SceneFinalResultFv

.fn getMemberID__Q32kh6Screen16SceneFinalResultFv, weak
/* 8040F004 0040BF44  3C 80 52 53 */	lis r4, 0x52534C54@ha
/* 8040F008 0040BF48  38 60 46 5F */	li r3, 0x465f
/* 8040F00C 0040BF4C  38 84 4C 54 */	addi r4, r4, 0x52534C54@l
/* 8040F010 0040BF50  4E 80 00 20 */	blr 
.endfn getMemberID__Q32kh6Screen16SceneFinalResultFv

.fn doCreateObj__Q32kh6Screen16SceneFinalResultFP10JKRArchive, weak
/* 8040F014 0040BF54  4E 80 00 20 */	blr 
.endfn doCreateObj__Q32kh6Screen16SceneFinalResultFP10JKRArchive

.fn __dt__Q32kh6Screen14ObjFinalResultFv, weak
/* 8040F018 0040BF58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8040F01C 0040BF5C  7C 08 02 A6 */	mflr r0
/* 8040F020 0040BF60  90 01 00 14 */	stw r0, 0x14(r1)
/* 8040F024 0040BF64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8040F028 0040BF68  7C 9F 23 78 */	mr r31, r4
/* 8040F02C 0040BF6C  93 C1 00 08 */	stw r30, 8(r1)
/* 8040F030 0040BF70  7C 7E 1B 79 */	or. r30, r3, r3
/* 8040F034 0040BF74  41 82 00 74 */	beq .L_8040F0A8
/* 8040F038 0040BF78  3C 80 80 4F */	lis r4, __vt__Q32kh6Screen14ObjFinalResult@ha
/* 8040F03C 0040BF7C  38 84 B2 50 */	addi r4, r4, __vt__Q32kh6Screen14ObjFinalResult@l
/* 8040F040 0040BF80  90 9E 00 00 */	stw r4, 0(r30)
/* 8040F044 0040BF84  38 04 00 10 */	addi r0, r4, 0x10
/* 8040F048 0040BF88  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8040F04C 0040BF8C  41 82 00 4C */	beq .L_8040F098
/* 8040F050 0040BF90  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 8040F054 0040BF94  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 8040F058 0040BF98  90 9E 00 00 */	stw r4, 0(r30)
/* 8040F05C 0040BF9C  38 04 00 10 */	addi r0, r4, 0x10
/* 8040F060 0040BFA0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8040F064 0040BFA4  41 82 00 34 */	beq .L_8040F098
/* 8040F068 0040BFA8  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8040F06C 0040BFAC  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 8040F070 0040BFB0  90 9E 00 00 */	stw r4, 0(r30)
/* 8040F074 0040BFB4  38 04 00 10 */	addi r0, r4, 0x10
/* 8040F078 0040BFB8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8040F07C 0040BFBC  48 00 25 55 */	bl del__5CNodeFv
/* 8040F080 0040BFC0  38 7E 00 18 */	addi r3, r30, 0x18
/* 8040F084 0040BFC4  38 80 00 00 */	li r4, 0
/* 8040F088 0040BFC8  4B C0 DF AD */	bl __dt__11JKRDisposerFv
/* 8040F08C 0040BFCC  7F C3 F3 78 */	mr r3, r30
/* 8040F090 0040BFD0  38 80 00 00 */	li r4, 0
/* 8040F094 0040BFD4  48 00 24 F5 */	bl __dt__5CNodeFv
.L_8040F098:
/* 8040F098 0040BFD8  7F E0 07 35 */	extsh. r0, r31
/* 8040F09C 0040BFDC  40 81 00 0C */	ble .L_8040F0A8
/* 8040F0A0 0040BFE0  7F C3 F3 78 */	mr r3, r30
/* 8040F0A4 0040BFE4  4B C1 50 11 */	bl __dl__FPv
.L_8040F0A8:
/* 8040F0A8 0040BFE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8040F0AC 0040BFEC  7F C3 F3 78 */	mr r3, r30
/* 8040F0B0 0040BFF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8040F0B4 0040BFF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8040F0B8 0040BFF8  7C 08 03 A6 */	mtlr r0
/* 8040F0BC 0040BFFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8040F0C0 0040C000  4E 80 00 20 */	blr 
.endfn __dt__Q32kh6Screen14ObjFinalResultFv

.fn getSize__Q32kh6Screen15DispFinalResultFv, weak
/* 8040F0C4 0040C004  38 60 00 18 */	li r3, 0x18
/* 8040F0C8 0040C008  4E 80 00 20 */	blr 
.endfn getSize__Q32kh6Screen15DispFinalResultFv

.fn getOwnerID__Q32kh6Screen15DispFinalResultFv, weak
/* 8040F0CC 0040C00C  38 60 4B 48 */	li r3, 0x4b48
/* 8040F0D0 0040C010  4E 80 00 20 */	blr 
.endfn getOwnerID__Q32kh6Screen15DispFinalResultFv

.fn getMemberID__Q32kh6Screen15DispFinalResultFv, weak
/* 8040F0D4 0040C014  3C 80 52 53 */	lis r4, 0x52534C54@ha
/* 8040F0D8 0040C018  38 60 46 5F */	li r3, 0x465f
/* 8040F0DC 0040C01C  38 84 4C 54 */	addi r4, r4, 0x52534C54@l
/* 8040F0E0 0040C020  4E 80 00 20 */	blr 
.endfn getMemberID__Q32kh6Screen15DispFinalResultFv

.fn __sinit_khFinalResult_cpp, local
/* 8040F0E4 0040C024  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8040F0E8 0040C028  7C 08 02 A6 */	mflr r0
/* 8040F0EC 0040C02C  3C 80 80 51 */	lis r4, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040F0F0 0040C030  3C 60 80 04 */	lis r3, __ct__Q28JUtility6TColorFv@ha
/* 8040F0F4 0040C034  90 01 00 24 */	stw r0, 0x24(r1)
/* 8040F0F8 0040C038  38 84 41 88 */	addi r4, r4, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040F0FC 0040C03C  38 A0 00 00 */	li r5, 0
/* 8040F100 0040C040  38 C0 00 04 */	li r6, 4
/* 8040F104 0040C044  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8040F108 0040C048  38 E0 00 03 */	li r7, 3
/* 8040F10C 0040C04C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8040F110 0040C050  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8040F114 0040C054  3B A4 00 10 */	addi r29, r4, 0x10
/* 8040F118 0040C058  38 83 9B 94 */	addi r4, r3, __ct__Q28JUtility6TColorFv@l
/* 8040F11C 0040C05C  7F A3 EB 78 */	mr r3, r29
/* 8040F120 0040C060  4B CB 27 1D */	bl __construct_array
/* 8040F124 0040C064  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen14ObjFinalResult@ha
/* 8040F128 0040C068  C0 22 1E 54 */	lfs f1, lbl_805201B4@sda21(r2)
/* 8040F12C 0040C06C  3B C3 41 88 */	addi r30, r3, msVal__Q32kh6Screen14ObjFinalResult@l
/* 8040F130 0040C070  38 80 00 00 */	li r4, 0
/* 8040F134 0040C074  38 A0 00 FF */	li r5, 0xff
/* 8040F138 0040C078  38 C0 00 50 */	li r6, 0x50
/* 8040F13C 0040C07C  C0 02 1E 84 */	lfs f0, lbl_805201E4@sda21(r2)
/* 8040F140 0040C080  3B E0 00 10 */	li r31, 0x10
/* 8040F144 0040C084  39 80 00 5A */	li r12, 0x5a
/* 8040F148 0040C088  39 60 00 1E */	li r11, 0x1e
/* 8040F14C 0040C08C  39 40 00 64 */	li r10, 0x64
/* 8040F150 0040C090  39 20 00 0A */	li r9, 0xa
/* 8040F154 0040C094  39 00 00 A0 */	li r8, 0xa0
/* 8040F158 0040C098  38 E0 00 20 */	li r7, 0x20
/* 8040F15C 0040C09C  38 60 00 40 */	li r3, 0x40
/* 8040F160 0040C0A0  38 00 00 30 */	li r0, 0x30
/* 8040F164 0040C0A4  D0 3E 00 00 */	stfs f1, 0(r30)
/* 8040F168 0040C0A8  93 FE 00 04 */	stw r31, 4(r30)
/* 8040F16C 0040C0AC  91 9E 00 08 */	stw r12, 8(r30)
/* 8040F170 0040C0B0  99 7E 00 1C */	stb r11, 0x1c(r30)
/* 8040F174 0040C0B4  99 5E 00 1D */	stb r10, 0x1d(r30)
/* 8040F178 0040C0B8  99 3E 00 1E */	stb r9, 0x1e(r30)
/* 8040F17C 0040C0BC  99 1E 00 1F */	stb r8, 0x1f(r30)
/* 8040F180 0040C0C0  98 FE 00 20 */	stb r7, 0x20(r30)
/* 8040F184 0040C0C4  98 DE 00 21 */	stb r6, 0x21(r30)
/* 8040F188 0040C0C8  D0 1E 00 0C */	stfs f0, 0xc(r30)
/* 8040F18C 0040C0CC  98 BD 00 00 */	stb r5, 0(r29)
/* 8040F190 0040C0D0  98 9E 00 11 */	stb r4, 0x11(r30)
/* 8040F194 0040C0D4  98 7E 00 12 */	stb r3, 0x12(r30)
/* 8040F198 0040C0D8  98 9E 00 13 */	stb r4, 0x13(r30)
/* 8040F19C 0040C0DC  98 BE 00 14 */	stb r5, 0x14(r30)
/* 8040F1A0 0040C0E0  98 BE 00 15 */	stb r5, 0x15(r30)
/* 8040F1A4 0040C0E4  98 9E 00 16 */	stb r4, 0x16(r30)
/* 8040F1A8 0040C0E8  98 9E 00 17 */	stb r4, 0x17(r30)
/* 8040F1AC 0040C0EC  98 BE 00 18 */	stb r5, 0x18(r30)
/* 8040F1B0 0040C0F0  98 1E 00 19 */	stb r0, 0x19(r30)
/* 8040F1B4 0040C0F4  98 DE 00 1A */	stb r6, 0x1a(r30)
/* 8040F1B8 0040C0F8  98 9E 00 1B */	stb r4, 0x1b(r30)
/* 8040F1BC 0040C0FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8040F1C0 0040C100  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8040F1C4 0040C104  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8040F1C8 0040C108  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8040F1CC 0040C10C  7C 08 03 A6 */	mtlr r0
/* 8040F1D0 0040C110  38 21 00 20 */	addi r1, r1, 0x20
/* 8040F1D4 0040C114  4E 80 00 20 */	blr 
.endfn __sinit_khFinalResult_cpp

.fn "@24@__dt__Q32kh6Screen14ObjFinalResultFv", weak
/* 8040F1D8 0040C118  38 63 FF E8 */	addi r3, r3, -24
/* 8040F1DC 0040C11C  4B FF FE 3C */	b __dt__Q32kh6Screen14ObjFinalResultFv
.endfn "@24@__dt__Q32kh6Screen14ObjFinalResultFv"
