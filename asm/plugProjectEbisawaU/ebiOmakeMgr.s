.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80497AA0, local
	.asciz "ebiOmakeMgr.cpp"
.endobj lbl_80497AA0
.balign 4
.obj lbl_80497AB0, local
	.asciz "FSMState_OmakeScreen"
.endobj lbl_80497AB0
.balign 4
.obj lbl_80497AC8, local
	.asciz "FSMState_CardEScreen"
.endobj lbl_80497AC8
.balign 4
.obj lbl_80497AE0, local
	.asciz "FSMState_SelectGame"
.endobj lbl_80497AE0
.balign 4
.obj lbl_80497AF4, local # Shift-JIS
	.4byte 0x4D6F7669
	.4byte 0x658FF391
	.4byte 0xD4000000
.endobj lbl_80497AF4
.balign 4
.obj lbl_80497B00, local
	.asciz "TOmakeMgr::loadResource"
.endobj lbl_80497B00
.balign 4
.obj lbl_80497B18, local
	.asciz "omake.szs"
.endobj lbl_80497B18
.balign 4
.obj lbl_80497B24, local
	.asciz "P2Assert"
.endobj lbl_80497B24
.balign 4
.obj lbl_80497B30, local
	.asciz "ArgOpenOmake"
.endobj lbl_80497B30

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj "__vt__Q24Game31StateMachine<Q33ebi5Omake4TMgr>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "start__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "transit__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
.endobj "__vt__Q24Game31StateMachine<Q33ebi5Omake4TMgr>"
.obj __vt__Q33ebi5Omake19FSMState_SelectGame, global
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
	.4byte "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi5Omake19FSMState_SelectGameFPQ33ebi5Omake4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi5Omake19FSMState_SelectGameFPQ33ebi5Omake4TMgr
.endobj __vt__Q33ebi5Omake19FSMState_SelectGame
.obj __vt__Q33ebi5Omake20FSMState_CardEScreen, global
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
	.4byte "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi5Omake20FSMState_CardEScreenFPQ33ebi5Omake4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi5Omake20FSMState_CardEScreenFPQ33ebi5Omake4TMgr
.endobj __vt__Q33ebi5Omake20FSMState_CardEScreen
.obj __vt__Q33ebi6Screen12ArgOpenOmake, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q33ebi6Screen12ArgOpenOmakeFv
.endobj __vt__Q33ebi6Screen12ArgOpenOmake
.obj __vt__Q33ebi5Omake20FSMState_OmakeScreen, global
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
	.4byte "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi5Omake20FSMState_OmakeScreenFPQ33ebi5Omake4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi5Omake20FSMState_OmakeScreenFPQ33ebi5Omake4TMgr
.endobj __vt__Q33ebi5Omake20FSMState_OmakeScreen
.obj __vt__Q33ebi5Omake8FSMState, global
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
	.4byte "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
.endobj __vt__Q33ebi5Omake8FSMState
.obj "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgrPQ24Game8StateArg"
	.4byte "exec__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
.endobj "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"
.obj __vt__Q33ebi5Omake15FSMStateMachine, global
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi5Omake15FSMStateMachineFPQ33ebi5Omake4TMgr
	.4byte "start__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
	.4byte "transit__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
.endobj __vt__Q33ebi5Omake15FSMStateMachine

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051FEA0, local
	.asciz "Standby"
.endobj lbl_8051FEA0
.balign 4
.obj lbl_8051FEA8, local
	.float 3.0
.endobj lbl_8051FEA8
.obj lbl_8051FEAC, local
	.float 5.0
.endobj lbl_8051FEAC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q33ebi5Omake15FSMStateMachineFPQ33ebi5Omake4TMgr, global
/* 803EEBE8 003EBB28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EEBEC 003EBB2C  7C 08 02 A6 */	mflr r0
/* 803EEBF0 003EBB30  3C 80 80 49 */	lis r4, lbl_80497AA0@ha
/* 803EEBF4 003EBB34  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EEBF8 003EBB38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EEBFC 003EBB3C  3B E4 7A A0 */	addi r31, r4, lbl_80497AA0@l
/* 803EEC00 003EBB40  38 80 00 05 */	li r4, 5
/* 803EEC04 003EBB44  93 C1 00 08 */	stw r30, 8(r1)
/* 803EEC08 003EBB48  7C 7E 1B 78 */	mr r30, r3
/* 803EEC0C 003EBB4C  48 00 15 09 */	bl "create__Q24Game31StateMachine<Q33ebi5Omake4TMgr>Fi"
/* 803EEC10 003EBB50  38 60 00 10 */	li r3, 0x10
/* 803EEC14 003EBB54  4B C3 52 91 */	bl __nw__FUl
/* 803EEC18 003EBB58  7C 64 1B 79 */	or. r4, r3, r3
/* 803EEC1C 003EBB5C  41 82 00 30 */	beq .L_803EEC4C
/* 803EEC20 003EBB60  3C A0 80 4F */	lis r5, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@ha
/* 803EEC24 003EBB64  3C 60 80 4F */	lis r3, __vt__Q33ebi5Omake8FSMState@ha
/* 803EEC28 003EBB68  38 05 A2 C4 */	addi r0, r5, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@l
/* 803EEC2C 003EBB6C  38 A0 00 00 */	li r5, 0
/* 803EEC30 003EBB70  90 04 00 00 */	stw r0, 0(r4)
/* 803EEC34 003EBB74  38 63 A2 9C */	addi r3, r3, __vt__Q33ebi5Omake8FSMState@l
/* 803EEC38 003EBB78  38 02 1B 40 */	addi r0, r2, lbl_8051FEA0@sda21
/* 803EEC3C 003EBB7C  90 A4 00 04 */	stw r5, 4(r4)
/* 803EEC40 003EBB80  90 A4 00 08 */	stw r5, 8(r4)
/* 803EEC44 003EBB84  90 64 00 00 */	stw r3, 0(r4)
/* 803EEC48 003EBB88  90 04 00 0C */	stw r0, 0xc(r4)
.L_803EEC4C:
/* 803EEC4C 003EBB8C  7F C3 F3 78 */	mr r3, r30
/* 803EEC50 003EBB90  48 00 15 C5 */	bl "registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"
/* 803EEC54 003EBB94  38 60 00 10 */	li r3, 0x10
/* 803EEC58 003EBB98  4B C3 52 4D */	bl __nw__FUl
/* 803EEC5C 003EBB9C  7C 64 1B 79 */	or. r4, r3, r3
/* 803EEC60 003EBBA0  41 82 00 40 */	beq .L_803EECA0
/* 803EEC64 003EBBA4  3C 60 80 4F */	lis r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@ha
/* 803EEC68 003EBBA8  3C A0 80 4F */	lis r5, __vt__Q33ebi5Omake8FSMState@ha
/* 803EEC6C 003EBBAC  38 03 A2 C4 */	addi r0, r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@l
/* 803EEC70 003EBBB0  3C 60 80 4F */	lis r3, __vt__Q33ebi5Omake20FSMState_OmakeScreen@ha
/* 803EEC74 003EBBB4  90 04 00 00 */	stw r0, 0(r4)
/* 803EEC78 003EBBB8  38 00 00 01 */	li r0, 1
/* 803EEC7C 003EBBBC  38 E0 00 00 */	li r7, 0
/* 803EEC80 003EBBC0  38 C5 A2 9C */	addi r6, r5, __vt__Q33ebi5Omake8FSMState@l
/* 803EEC84 003EBBC4  90 04 00 04 */	stw r0, 4(r4)
/* 803EEC88 003EBBC8  38 BF 00 10 */	addi r5, r31, 0x10
/* 803EEC8C 003EBBCC  38 03 A2 74 */	addi r0, r3, __vt__Q33ebi5Omake20FSMState_OmakeScreen@l
/* 803EEC90 003EBBD0  90 E4 00 08 */	stw r7, 8(r4)
/* 803EEC94 003EBBD4  90 C4 00 00 */	stw r6, 0(r4)
/* 803EEC98 003EBBD8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803EEC9C 003EBBDC  90 04 00 00 */	stw r0, 0(r4)
.L_803EECA0:
/* 803EECA0 003EBBE0  7F C3 F3 78 */	mr r3, r30
/* 803EECA4 003EBBE4  48 00 15 71 */	bl "registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"
/* 803EECA8 003EBBE8  38 60 00 10 */	li r3, 0x10
/* 803EECAC 003EBBEC  4B C3 51 F9 */	bl __nw__FUl
/* 803EECB0 003EBBF0  7C 64 1B 79 */	or. r4, r3, r3
/* 803EECB4 003EBBF4  41 82 00 40 */	beq .L_803EECF4
/* 803EECB8 003EBBF8  3C 60 80 4F */	lis r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@ha
/* 803EECBC 003EBBFC  3C A0 80 4F */	lis r5, __vt__Q33ebi5Omake8FSMState@ha
/* 803EECC0 003EBC00  38 03 A2 C4 */	addi r0, r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@l
/* 803EECC4 003EBC04  3C 60 80 4F */	lis r3, __vt__Q33ebi5Omake20FSMState_CardEScreen@ha
/* 803EECC8 003EBC08  90 04 00 00 */	stw r0, 0(r4)
/* 803EECCC 003EBC0C  38 00 00 02 */	li r0, 2
/* 803EECD0 003EBC10  38 E0 00 00 */	li r7, 0
/* 803EECD4 003EBC14  38 C5 A2 9C */	addi r6, r5, __vt__Q33ebi5Omake8FSMState@l
/* 803EECD8 003EBC18  90 04 00 04 */	stw r0, 4(r4)
/* 803EECDC 003EBC1C  38 BF 00 28 */	addi r5, r31, 0x28
/* 803EECE0 003EBC20  38 03 A2 40 */	addi r0, r3, __vt__Q33ebi5Omake20FSMState_CardEScreen@l
/* 803EECE4 003EBC24  90 E4 00 08 */	stw r7, 8(r4)
/* 803EECE8 003EBC28  90 C4 00 00 */	stw r6, 0(r4)
/* 803EECEC 003EBC2C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803EECF0 003EBC30  90 04 00 00 */	stw r0, 0(r4)
.L_803EECF4:
/* 803EECF4 003EBC34  7F C3 F3 78 */	mr r3, r30
/* 803EECF8 003EBC38  48 00 15 1D */	bl "registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"
/* 803EECFC 003EBC3C  38 60 00 1C */	li r3, 0x1c
/* 803EED00 003EBC40  4B C3 51 A5 */	bl __nw__FUl
/* 803EED04 003EBC44  7C 64 1B 79 */	or. r4, r3, r3
/* 803EED08 003EBC48  41 82 00 48 */	beq .L_803EED50
/* 803EED0C 003EBC4C  3C 60 80 4F */	lis r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@ha
/* 803EED10 003EBC50  3C A0 80 4F */	lis r5, __vt__Q33ebi5Omake8FSMState@ha
/* 803EED14 003EBC54  38 03 A2 C4 */	addi r0, r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@l
/* 803EED18 003EBC58  3C 60 80 4F */	lis r3, __vt__Q33ebi5Omake19FSMState_SelectGame@ha
/* 803EED1C 003EBC5C  90 04 00 00 */	stw r0, 0(r4)
/* 803EED20 003EBC60  38 00 00 03 */	li r0, 3
/* 803EED24 003EBC64  38 E0 00 00 */	li r7, 0
/* 803EED28 003EBC68  38 C5 A2 9C */	addi r6, r5, __vt__Q33ebi5Omake8FSMState@l
/* 803EED2C 003EBC6C  90 04 00 04 */	stw r0, 4(r4)
/* 803EED30 003EBC70  38 BF 00 40 */	addi r5, r31, 0x40
/* 803EED34 003EBC74  38 03 A2 18 */	addi r0, r3, __vt__Q33ebi5Omake19FSMState_SelectGame@l
/* 803EED38 003EBC78  90 E4 00 08 */	stw r7, 8(r4)
/* 803EED3C 003EBC7C  90 C4 00 00 */	stw r6, 0(r4)
/* 803EED40 003EBC80  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803EED44 003EBC84  90 04 00 00 */	stw r0, 0(r4)
/* 803EED48 003EBC88  90 E4 00 14 */	stw r7, 0x14(r4)
/* 803EED4C 003EBC8C  90 E4 00 18 */	stw r7, 0x18(r4)
.L_803EED50:
/* 803EED50 003EBC90  7F C3 F3 78 */	mr r3, r30
/* 803EED54 003EBC94  48 00 14 C1 */	bl "registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"
/* 803EED58 003EBC98  38 60 00 10 */	li r3, 0x10
/* 803EED5C 003EBC9C  4B C3 51 49 */	bl __nw__FUl
/* 803EED60 003EBCA0  7C 64 1B 79 */	or. r4, r3, r3
/* 803EED64 003EBCA4  41 82 00 34 */	beq .L_803EED98
/* 803EED68 003EBCA8  3C A0 80 4F */	lis r5, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@ha
/* 803EED6C 003EBCAC  3C 60 80 4F */	lis r3, __vt__Q33ebi5Omake8FSMState@ha
/* 803EED70 003EBCB0  38 05 A2 C4 */	addi r0, r5, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@l
/* 803EED74 003EBCB4  38 C0 00 04 */	li r6, 4
/* 803EED78 003EBCB8  90 04 00 00 */	stw r0, 0(r4)
/* 803EED7C 003EBCBC  38 A0 00 00 */	li r5, 0
/* 803EED80 003EBCC0  38 63 A2 9C */	addi r3, r3, __vt__Q33ebi5Omake8FSMState@l
/* 803EED84 003EBCC4  38 1F 00 54 */	addi r0, r31, 0x54
/* 803EED88 003EBCC8  90 C4 00 04 */	stw r6, 4(r4)
/* 803EED8C 003EBCCC  90 A4 00 08 */	stw r5, 8(r4)
/* 803EED90 003EBCD0  90 64 00 00 */	stw r3, 0(r4)
/* 803EED94 003EBCD4  90 04 00 0C */	stw r0, 0xc(r4)
.L_803EED98:
/* 803EED98 003EBCD8  7F C3 F3 78 */	mr r3, r30
/* 803EED9C 003EBCDC  48 00 14 79 */	bl "registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"
/* 803EEDA0 003EBCE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EEDA4 003EBCE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EEDA8 003EBCE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803EEDAC 003EBCEC  7C 08 03 A6 */	mtlr r0
/* 803EEDB0 003EBCF0  38 21 00 10 */	addi r1, r1, 0x10
/* 803EEDB4 003EBCF4  4E 80 00 20 */	blr 
.endfn init__Q33ebi5Omake15FSMStateMachineFPQ33ebi5Omake4TMgr

.fn init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg, global
/* 803EEDB8 003EBCF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EEDBC 003EBCFC  7C 08 02 A6 */	mflr r0
/* 803EEDC0 003EBD00  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EEDC4 003EBD04  81 83 00 00 */	lwz r12, 0(r3)
/* 803EEDC8 003EBD08  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803EEDCC 003EBD0C  7D 89 03 A6 */	mtctr r12
/* 803EEDD0 003EBD10  4E 80 04 21 */	bctrl 
/* 803EEDD4 003EBD14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EEDD8 003EBD18  7C 08 03 A6 */	mtlr r0
/* 803EEDDC 003EBD1C  38 21 00 10 */	addi r1, r1, 0x10
/* 803EEDE0 003EBD20  4E 80 00 20 */	blr 
.endfn init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg

.fn exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr, global
/* 803EEDE4 003EBD24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EEDE8 003EBD28  7C 08 02 A6 */	mflr r0
/* 803EEDEC 003EBD2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EEDF0 003EBD30  81 83 00 00 */	lwz r12, 0(r3)
/* 803EEDF4 003EBD34  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803EEDF8 003EBD38  7D 89 03 A6 */	mtctr r12
/* 803EEDFC 003EBD3C  4E 80 04 21 */	bctrl 
/* 803EEE00 003EBD40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EEE04 003EBD44  7C 08 03 A6 */	mtlr r0
/* 803EEE08 003EBD48  38 21 00 10 */	addi r1, r1, 0x10
/* 803EEE0C 003EBD4C  4E 80 00 20 */	blr 
.endfn exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr

.fn do_init__Q33ebi5Omake20FSMState_OmakeScreenFPQ33ebi5Omake4TMgrPQ24Game8StateArg, global
/* 803EEE10 003EBD50  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803EEE14 003EBD54  7C 08 02 A6 */	mflr r0
/* 803EEE18 003EBD58  90 01 00 34 */	stw r0, 0x34(r1)
/* 803EEE1C 003EBD5C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803EEE20 003EBD60  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803EEE24 003EBD64  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803EEE28 003EBD68  7C 9D 23 78 */	mr r29, r4
/* 803EEE2C 003EBD6C  80 04 08 B4 */	lwz r0, 0x8b4(r4)
/* 803EEE30 003EBD70  2C 00 00 00 */	cmpwi r0, 0
/* 803EEE34 003EBD74  40 82 00 7C */	bne .L_803EEEB0
/* 803EEE38 003EBD78  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EEE3C 003EBD7C  48 03 40 F5 */	bl getPlayCommonData__6SystemFv
/* 803EEE40 003EBD80  4B E4 58 E5 */	bl isPerfectChallenge__Q24Game14PlayCommonDataFv
/* 803EEE44 003EBD84  7C 7F 1B 78 */	mr r31, r3
/* 803EEE48 003EBD88  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EEE4C 003EBD8C  48 03 40 E5 */	bl getPlayCommonData__6SystemFv
/* 803EEE50 003EBD90  88 03 00 00 */	lbz r0, 0(r3)
/* 803EEE54 003EBD94  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EEE58 003EBD98  54 1E FF FE */	rlwinm r30, r0, 0x1f, 0x1f, 0x1f
/* 803EEE5C 003EBD9C  48 03 40 D5 */	bl getPlayCommonData__6SystemFv
/* 803EEE60 003EBDA0  88 83 00 00 */	lbz r4, 0(r3)
/* 803EEE64 003EBDA4  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen7ArgOpen@ha
/* 803EEE68 003EBDA8  38 03 9F 9C */	addi r0, r3, __vt__Q33ebi6Screen7ArgOpen@l
/* 803EEE6C 003EBDAC  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen12ArgOpenOmake@ha
/* 803EEE70 003EBDB0  90 01 00 08 */	stw r0, 8(r1)
/* 803EEE74 003EBDB4  54 85 07 FE */	clrlwi r5, r4, 0x1f
/* 803EEE78 003EBDB8  38 63 A2 68 */	addi r3, r3, __vt__Q33ebi6Screen12ArgOpenOmake@l
/* 803EEE7C 003EBDBC  38 00 FF FF */	li r0, -1
/* 803EEE80 003EBDC0  90 61 00 08 */	stw r3, 8(r1)
/* 803EEE84 003EBDC4  38 7D 00 08 */	addi r3, r29, 8
/* 803EEE88 003EBDC8  38 81 00 08 */	addi r4, r1, 8
/* 803EEE8C 003EBDCC  98 A1 00 0C */	stb r5, 0xc(r1)
/* 803EEE90 003EBDD0  9B C1 00 0D */	stb r30, 0xd(r1)
/* 803EEE94 003EBDD4  9B E1 00 0E */	stb r31, 0xe(r1)
/* 803EEE98 003EBDD8  90 01 00 10 */	stw r0, 0x10(r1)
/* 803EEE9C 003EBDDC  81 9D 00 08 */	lwz r12, 8(r29)
/* 803EEEA0 003EBDE0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EEEA4 003EBDE4  7D 89 03 A6 */	mtctr r12
/* 803EEEA8 003EBDE8  4E 80 04 21 */	bctrl 
/* 803EEEAC 003EBDEC  48 00 00 24 */	b .L_803EEED0
.L_803EEEB0:
/* 803EEEB0 003EBDF0  80 1D 00 14 */	lwz r0, 0x14(r29)
/* 803EEEB4 003EBDF4  2C 00 00 01 */	cmpwi r0, 1
/* 803EEEB8 003EBDF8  40 82 00 10 */	bne .L_803EEEC8
/* 803EEEBC 003EBDFC  38 7D 00 08 */	addi r3, r29, 8
/* 803EEEC0 003EBE00  4B FF FB B5 */	bl openFromCardE___Q33ebi6Screen6TOmakeFv
/* 803EEEC4 003EBE04  48 00 00 0C */	b .L_803EEED0
.L_803EEEC8:
/* 803EEEC8 003EBE08  38 7D 00 08 */	addi r3, r29, 8
/* 803EEECC 003EBE0C  4B FF FB 55 */	bl openFromMovie___Q33ebi6Screen6TOmakeFv
.L_803EEED0:
/* 803EEED0 003EBE10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803EEED4 003EBE14  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803EEED8 003EBE18  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803EEEDC 003EBE1C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803EEEE0 003EBE20  7C 08 03 A6 */	mtlr r0
/* 803EEEE4 003EBE24  38 21 00 30 */	addi r1, r1, 0x30
/* 803EEEE8 003EBE28  4E 80 00 20 */	blr 
.endfn do_init__Q33ebi5Omake20FSMState_OmakeScreenFPQ33ebi5Omake4TMgrPQ24Game8StateArg

.fn do_exec__Q33ebi5Omake20FSMState_OmakeScreenFPQ33ebi5Omake4TMgr, global
/* 803EEEEC 003EBE2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EEEF0 003EBE30  7C 08 02 A6 */	mflr r0
/* 803EEEF4 003EBE34  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EEEF8 003EBE38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EEEFC 003EBE3C  7C 9F 23 78 */	mr r31, r4
/* 803EEF00 003EBE40  93 C1 00 08 */	stw r30, 8(r1)
/* 803EEF04 003EBE44  7C 7E 1B 78 */	mr r30, r3
/* 803EEF08 003EBE48  80 04 00 14 */	lwz r0, 0x14(r4)
/* 803EEF0C 003EBE4C  2C 00 00 01 */	cmpwi r0, 1
/* 803EEF10 003EBE50  40 82 00 1C */	bne .L_803EEF2C
/* 803EEF14 003EBE54  81 83 00 00 */	lwz r12, 0(r3)
/* 803EEF18 003EBE58  38 A0 00 02 */	li r5, 2
/* 803EEF1C 003EBE5C  38 C0 00 00 */	li r6, 0
/* 803EEF20 003EBE60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EEF24 003EBE64  7D 89 03 A6 */	mtctr r12
/* 803EEF28 003EBE68  4E 80 04 21 */	bctrl 
.L_803EEF2C:
/* 803EEF2C 003EBE6C  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 803EEF30 003EBE70  2C 00 00 04 */	cmpwi r0, 4
/* 803EEF34 003EBE74  40 82 00 24 */	bne .L_803EEF58
/* 803EEF38 003EBE78  7F C3 F3 78 */	mr r3, r30
/* 803EEF3C 003EBE7C  7F E4 FB 78 */	mr r4, r31
/* 803EEF40 003EBE80  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EEF44 003EBE84  38 A0 00 04 */	li r5, 4
/* 803EEF48 003EBE88  38 C0 00 00 */	li r6, 0
/* 803EEF4C 003EBE8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EEF50 003EBE90  7D 89 03 A6 */	mtctr r12
/* 803EEF54 003EBE94  4E 80 04 21 */	bctrl 
.L_803EEF58:
/* 803EEF58 003EBE98  38 7F 00 08 */	addi r3, r31, 8
/* 803EEF5C 003EBE9C  81 9F 00 08 */	lwz r12, 8(r31)
/* 803EEF60 003EBEA0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803EEF64 003EBEA4  7D 89 03 A6 */	mtctr r12
/* 803EEF68 003EBEA8  4E 80 04 21 */	bctrl 
/* 803EEF6C 003EBEAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EEF70 003EBEB0  41 82 00 0C */	beq .L_803EEF7C
/* 803EEF74 003EBEB4  7F E3 FB 78 */	mr r3, r31
/* 803EEF78 003EBEB8  48 00 06 D9 */	bl goEnd___Q33ebi5Omake4TMgrFv
.L_803EEF7C:
/* 803EEF7C 003EBEBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EEF80 003EBEC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EEF84 003EBEC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803EEF88 003EBEC8  7C 08 03 A6 */	mtlr r0
/* 803EEF8C 003EBECC  38 21 00 10 */	addi r1, r1, 0x10
/* 803EEF90 003EBED0  4E 80 00 20 */	blr 
.endfn do_exec__Q33ebi5Omake20FSMState_OmakeScreenFPQ33ebi5Omake4TMgr

.fn do_init__Q33ebi5Omake20FSMState_CardEScreenFPQ33ebi5Omake4TMgrPQ24Game8StateArg, global
/* 803EEF94 003EBED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EEF98 003EBED8  7C 08 02 A6 */	mflr r0
/* 803EEF9C 003EBEDC  38 64 04 68 */	addi r3, r4, 0x468
/* 803EEFA0 003EBEE0  38 80 00 00 */	li r4, 0
/* 803EEFA4 003EBEE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EEFA8 003EBEE8  81 83 00 00 */	lwz r12, 0(r3)
/* 803EEFAC 003EBEEC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EEFB0 003EBEF0  7D 89 03 A6 */	mtctr r12
/* 803EEFB4 003EBEF4  4E 80 04 21 */	bctrl 
/* 803EEFB8 003EBEF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EEFBC 003EBEFC  7C 08 03 A6 */	mtlr r0
/* 803EEFC0 003EBF00  38 21 00 10 */	addi r1, r1, 0x10
/* 803EEFC4 003EBF04  4E 80 00 20 */	blr 
.endfn do_init__Q33ebi5Omake20FSMState_CardEScreenFPQ33ebi5Omake4TMgrPQ24Game8StateArg

.fn do_exec__Q33ebi5Omake20FSMState_CardEScreenFPQ33ebi5Omake4TMgr, global
/* 803EEFC8 003EBF08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EEFCC 003EBF0C  7C 08 02 A6 */	mflr r0
/* 803EEFD0 003EBF10  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EEFD4 003EBF14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EEFD8 003EBF18  7C 9F 23 78 */	mr r31, r4
/* 803EEFDC 003EBF1C  93 C1 00 08 */	stw r30, 8(r1)
/* 803EEFE0 003EBF20  7C 7E 1B 78 */	mr r30, r3
/* 803EEFE4 003EBF24  38 7F 04 68 */	addi r3, r31, 0x468
/* 803EEFE8 003EBF28  81 84 04 68 */	lwz r12, 0x468(r4)
/* 803EEFEC 003EBF2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803EEFF0 003EBF30  7D 89 03 A6 */	mtctr r12
/* 803EEFF4 003EBF34  4E 80 04 21 */	bctrl 
/* 803EEFF8 003EBF38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EEFFC 003EBF3C  41 82 00 54 */	beq .L_803EF050
/* 803EF000 003EBF40  88 1F 04 78 */	lbz r0, 0x478(r31)
/* 803EF004 003EBF44  28 00 00 00 */	cmplwi r0, 0
/* 803EF008 003EBF48  41 82 00 28 */	beq .L_803EF030
/* 803EF00C 003EBF4C  7F C3 F3 78 */	mr r3, r30
/* 803EF010 003EBF50  7F E4 FB 78 */	mr r4, r31
/* 803EF014 003EBF54  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EF018 003EBF58  38 A0 00 01 */	li r5, 1
/* 803EF01C 003EBF5C  38 C0 00 00 */	li r6, 0
/* 803EF020 003EBF60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EF024 003EBF64  7D 89 03 A6 */	mtctr r12
/* 803EF028 003EBF68  4E 80 04 21 */	bctrl 
/* 803EF02C 003EBF6C  48 00 00 24 */	b .L_803EF050
.L_803EF030:
/* 803EF030 003EBF70  7F C3 F3 78 */	mr r3, r30
/* 803EF034 003EBF74  7F E4 FB 78 */	mr r4, r31
/* 803EF038 003EBF78  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EF03C 003EBF7C  38 A0 00 03 */	li r5, 3
/* 803EF040 003EBF80  38 C0 00 00 */	li r6, 0
/* 803EF044 003EBF84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EF048 003EBF88  7D 89 03 A6 */	mtctr r12
/* 803EF04C 003EBF8C  4E 80 04 21 */	bctrl 
.L_803EF050:
/* 803EF050 003EBF90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF054 003EBF94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EF058 003EBF98  83 C1 00 08 */	lwz r30, 8(r1)
/* 803EF05C 003EBF9C  7C 08 03 A6 */	mtlr r0
/* 803EF060 003EBFA0  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF064 003EBFA4  4E 80 00 20 */	blr 
.endfn do_exec__Q33ebi5Omake20FSMState_CardEScreenFPQ33ebi5Omake4TMgr

.fn do_init__Q33ebi5Omake19FSMState_SelectGameFPQ33ebi5Omake4TMgrPQ24Game8StateArg, global
/* 803EF068 003EBFA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF06C 003EBFAC  7C 08 02 A6 */	mflr r0
/* 803EF070 003EBFB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF074 003EBFB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EF078 003EBFB8  7C 7F 1B 78 */	mr r31, r3
/* 803EF07C 003EBFBC  38 64 05 DC */	addi r3, r4, 0x5dc
/* 803EF080 003EBFC0  81 84 05 DC */	lwz r12, 0x5dc(r4)
/* 803EF084 003EBFC4  38 80 00 00 */	li r4, 0
/* 803EF088 003EBFC8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EF08C 003EBFCC  7D 89 03 A6 */	mtctr r12
/* 803EF090 003EBFD0  4E 80 04 21 */	bctrl 
/* 803EF094 003EBFD4  38 00 00 00 */	li r0, 0
/* 803EF098 003EBFD8  90 1F 00 10 */	stw r0, 0x10(r31)
/* 803EF09C 003EBFDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF0A0 003EBFE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EF0A4 003EBFE4  7C 08 03 A6 */	mtlr r0
/* 803EF0A8 003EBFE8  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF0AC 003EBFEC  4E 80 00 20 */	blr 
.endfn do_init__Q33ebi5Omake19FSMState_SelectGameFPQ33ebi5Omake4TMgrPQ24Game8StateArg

.fn do_exec__Q33ebi5Omake19FSMState_SelectGameFPQ33ebi5Omake4TMgr, global
/* 803EF0B0 003EBFF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF0B4 003EBFF4  7C 08 02 A6 */	mflr r0
/* 803EF0B8 003EBFF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF0BC 003EBFFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EF0C0 003EC000  7C 9F 23 78 */	mr r31, r4
/* 803EF0C4 003EC004  93 C1 00 08 */	stw r30, 8(r1)
/* 803EF0C8 003EC008  7C 7E 1B 78 */	mr r30, r3
/* 803EF0CC 003EC00C  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803EF0D0 003EC010  2C 00 00 02 */	cmpwi r0, 2
/* 803EF0D4 003EC014  41 82 01 50 */	beq .L_803EF224
/* 803EF0D8 003EC018  40 80 00 14 */	bge .L_803EF0EC
/* 803EF0DC 003EC01C  2C 00 00 00 */	cmpwi r0, 0
/* 803EF0E0 003EC020  41 82 00 1C */	beq .L_803EF0FC
/* 803EF0E4 003EC024  40 80 00 90 */	bge .L_803EF174
/* 803EF0E8 003EC028  48 00 03 28 */	b .L_803EF410
.L_803EF0EC:
/* 803EF0EC 003EC02C  2C 00 00 04 */	cmpwi r0, 4
/* 803EF0F0 003EC030  41 82 02 E4 */	beq .L_803EF3D4
/* 803EF0F4 003EC034  40 80 03 1C */	bge .L_803EF410
/* 803EF0F8 003EC038  48 00 02 64 */	b .L_803EF35C
.L_803EF0FC:
/* 803EF0FC 003EC03C  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF100 003EC040  48 00 27 E9 */	bl isDelegateControl__Q33ebi6Screen10TOmakeGameFv
/* 803EF104 003EC044  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EF108 003EC048  41 82 00 14 */	beq .L_803EF11C
/* 803EF10C 003EC04C  80 6D 9A 98 */	lwz r3, gCardEMgr__3ebi@sda21(r13)
/* 803EF110 003EC050  4B FF DF 49 */	bl probeAGB__Q33ebi11CardEReader4TMgrFv
/* 803EF114 003EC054  38 00 00 01 */	li r0, 1
/* 803EF118 003EC058  90 1E 00 10 */	stw r0, 0x10(r30)
.L_803EF11C:
/* 803EF11C 003EC05C  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF120 003EC060  81 9F 05 DC */	lwz r12, 0x5dc(r31)
/* 803EF124 003EC064  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803EF128 003EC068  7D 89 03 A6 */	mtctr r12
/* 803EF12C 003EC06C  4E 80 04 21 */	bctrl 
/* 803EF130 003EC070  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EF134 003EC074  41 82 02 DC */	beq .L_803EF410
/* 803EF138 003EC078  38 7F 04 68 */	addi r3, r31, 0x468
/* 803EF13C 003EC07C  38 80 00 00 */	li r4, 0
/* 803EF140 003EC080  81 9F 04 68 */	lwz r12, 0x468(r31)
/* 803EF144 003EC084  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EF148 003EC088  7D 89 03 A6 */	mtctr r12
/* 803EF14C 003EC08C  4E 80 04 21 */	bctrl 
/* 803EF150 003EC090  7F C3 F3 78 */	mr r3, r30
/* 803EF154 003EC094  7F E4 FB 78 */	mr r4, r31
/* 803EF158 003EC098  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EF15C 003EC09C  38 A0 00 02 */	li r5, 2
/* 803EF160 003EC0A0  38 C0 00 00 */	li r6, 0
/* 803EF164 003EC0A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EF168 003EC0A8  7D 89 03 A6 */	mtctr r12
/* 803EF16C 003EC0AC  4E 80 04 21 */	bctrl 
/* 803EF170 003EC0B0  48 00 02 A0 */	b .L_803EF410
.L_803EF174:
/* 803EF174 003EC0B4  80 6D 9A 98 */	lwz r3, gCardEMgr__3ebi@sda21(r13)
/* 803EF178 003EC0B8  4B FF E0 49 */	bl isFinish__Q33ebi11CardEReader4TMgrFv
/* 803EF17C 003EC0BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EF180 003EC0C0  41 82 02 90 */	beq .L_803EF410
/* 803EF184 003EC0C4  80 6D 9A 98 */	lwz r3, gCardEMgr__3ebi@sda21(r13)
/* 803EF188 003EC0C8  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 803EF18C 003EC0CC  2C 00 00 00 */	cmpwi r0, 0
/* 803EF190 003EC0D0  40 82 00 50 */	bne .L_803EF1E0
/* 803EF194 003EC0D4  80 9F 06 1C */	lwz r4, 0x61c(r31)
/* 803EF198 003EC0D8  4B FF DE A5 */	bl uploadToGBA__Q33ebi11CardEReader4TMgrFl
/* 803EF19C 003EC0DC  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF1A0 003EC0E0  38 80 00 01 */	li r4, 1
/* 803EF1A4 003EC0E4  48 00 27 C9 */	bl openMsg__Q33ebi6Screen10TOmakeGameFl
/* 803EF1A8 003EC0E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EF1AC 003EC0EC  C0 22 1B 48 */	lfs f1, lbl_8051FEA8@sda21(r2)
/* 803EF1B0 003EC0F0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EF1B4 003EC0F4  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EF1B8 003EC0F8  4B CD 29 95 */	bl __cvt_fp2unsigned
/* 803EF1BC 003EC0FC  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803EF1C0 003EC100  38 80 18 00 */	li r4, 0x1800
/* 803EF1C4 003EC104  38 A0 00 00 */	li r5, 0
/* 803EF1C8 003EC108  90 7E 00 18 */	stw r3, 0x18(r30)
/* 803EF1CC 003EC10C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803EF1D0 003EC110  4B F4 94 61 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803EF1D4 003EC114  38 00 00 02 */	li r0, 2
/* 803EF1D8 003EC118  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803EF1DC 003EC11C  48 00 02 34 */	b .L_803EF410
.L_803EF1E0:
/* 803EF1E0 003EC120  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803EF1E4 003EC124  38 80 18 0D */	li r4, 0x180d
/* 803EF1E8 003EC128  38 A0 00 00 */	li r5, 0
/* 803EF1EC 003EC12C  4B F4 94 45 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803EF1F0 003EC130  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF1F4 003EC134  38 80 00 04 */	li r4, 4
/* 803EF1F8 003EC138  48 00 27 75 */	bl openMsg__Q33ebi6Screen10TOmakeGameFl
/* 803EF1FC 003EC13C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EF200 003EC140  C0 22 1B 4C */	lfs f1, lbl_8051FEAC@sda21(r2)
/* 803EF204 003EC144  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EF208 003EC148  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EF20C 003EC14C  4B CD 29 41 */	bl __cvt_fp2unsigned
/* 803EF210 003EC150  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803EF214 003EC154  38 00 00 03 */	li r0, 3
/* 803EF218 003EC158  90 7E 00 18 */	stw r3, 0x18(r30)
/* 803EF21C 003EC15C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803EF220 003EC160  48 00 01 F0 */	b .L_803EF410
.L_803EF224:
/* 803EF224 003EC164  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 803EF228 003EC168  28 03 00 00 */	cmplwi r3, 0
/* 803EF22C 003EC16C  41 82 00 0C */	beq .L_803EF238
/* 803EF230 003EC170  38 03 FF FF */	addi r0, r3, -1
/* 803EF234 003EC174  90 1E 00 14 */	stw r0, 0x14(r30)
.L_803EF238:
/* 803EF238 003EC178  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803EF23C 003EC17C  38 80 10 0B */	li r4, 0x100b
/* 803EF240 003EC180  38 A0 00 00 */	li r5, 0
/* 803EF244 003EC184  4B F4 93 ED */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803EF248 003EC188  80 6D 9A 98 */	lwz r3, gCardEMgr__3ebi@sda21(r13)
/* 803EF24C 003EC18C  4B FF DF 75 */	bl isFinish__Q33ebi11CardEReader4TMgrFv
/* 803EF250 003EC190  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EF254 003EC194  41 82 01 BC */	beq .L_803EF410
/* 803EF258 003EC198  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803EF25C 003EC19C  28 00 00 00 */	cmplwi r0, 0
/* 803EF260 003EC1A0  40 82 01 B0 */	bne .L_803EF410
/* 803EF264 003EC1A4  80 6D 9A 98 */	lwz r3, gCardEMgr__3ebi@sda21(r13)
/* 803EF268 003EC1A8  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 803EF26C 003EC1AC  2C 00 00 01 */	cmpwi r0, 1
/* 803EF270 003EC1B0  41 82 00 64 */	beq .L_803EF2D4
/* 803EF274 003EC1B4  40 80 00 10 */	bge .L_803EF284
/* 803EF278 003EC1B8  2C 00 00 00 */	cmpwi r0, 0
/* 803EF27C 003EC1BC  40 80 00 14 */	bge .L_803EF290
/* 803EF280 003EC1C0  48 00 01 90 */	b .L_803EF410
.L_803EF284:
/* 803EF284 003EC1C4  2C 00 00 03 */	cmpwi r0, 3
/* 803EF288 003EC1C8  40 80 01 88 */	bge .L_803EF410
/* 803EF28C 003EC1CC  48 00 00 8C */	b .L_803EF318
.L_803EF290:
/* 803EF290 003EC1D0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803EF294 003EC1D4  38 80 18 0C */	li r4, 0x180c
/* 803EF298 003EC1D8  38 A0 00 00 */	li r5, 0
/* 803EF29C 003EC1DC  4B F4 93 95 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803EF2A0 003EC1E0  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF2A4 003EC1E4  38 80 00 02 */	li r4, 2
/* 803EF2A8 003EC1E8  48 00 26 C5 */	bl openMsg__Q33ebi6Screen10TOmakeGameFl
/* 803EF2AC 003EC1EC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EF2B0 003EC1F0  C0 22 1B 4C */	lfs f1, lbl_8051FEAC@sda21(r2)
/* 803EF2B4 003EC1F4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EF2B8 003EC1F8  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EF2BC 003EC1FC  4B CD 28 91 */	bl __cvt_fp2unsigned
/* 803EF2C0 003EC200  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803EF2C4 003EC204  38 00 00 04 */	li r0, 4
/* 803EF2C8 003EC208  90 7E 00 18 */	stw r3, 0x18(r30)
/* 803EF2CC 003EC20C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803EF2D0 003EC210  48 00 01 40 */	b .L_803EF410
.L_803EF2D4:
/* 803EF2D4 003EC214  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803EF2D8 003EC218  38 80 18 0D */	li r4, 0x180d
/* 803EF2DC 003EC21C  38 A0 00 00 */	li r5, 0
/* 803EF2E0 003EC220  4B F4 93 51 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803EF2E4 003EC224  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF2E8 003EC228  38 80 00 04 */	li r4, 4
/* 803EF2EC 003EC22C  48 00 26 81 */	bl openMsg__Q33ebi6Screen10TOmakeGameFl
/* 803EF2F0 003EC230  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EF2F4 003EC234  C0 22 1B 4C */	lfs f1, lbl_8051FEAC@sda21(r2)
/* 803EF2F8 003EC238  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EF2FC 003EC23C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EF300 003EC240  4B CD 28 4D */	bl __cvt_fp2unsigned
/* 803EF304 003EC244  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803EF308 003EC248  38 00 00 03 */	li r0, 3
/* 803EF30C 003EC24C  90 7E 00 18 */	stw r3, 0x18(r30)
/* 803EF310 003EC250  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803EF314 003EC254  48 00 00 FC */	b .L_803EF410
.L_803EF318:
/* 803EF318 003EC258  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803EF31C 003EC25C  38 80 18 0D */	li r4, 0x180d
/* 803EF320 003EC260  38 A0 00 00 */	li r5, 0
/* 803EF324 003EC264  4B F4 93 0D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803EF328 003EC268  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF32C 003EC26C  38 80 00 03 */	li r4, 3
/* 803EF330 003EC270  48 00 26 3D */	bl openMsg__Q33ebi6Screen10TOmakeGameFl
/* 803EF334 003EC274  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EF338 003EC278  C0 22 1B 4C */	lfs f1, lbl_8051FEAC@sda21(r2)
/* 803EF33C 003EC27C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803EF340 003EC280  EC 21 00 24 */	fdivs f1, f1, f0
/* 803EF344 003EC284  4B CD 28 09 */	bl __cvt_fp2unsigned
/* 803EF348 003EC288  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803EF34C 003EC28C  38 00 00 03 */	li r0, 3
/* 803EF350 003EC290  90 7E 00 18 */	stw r3, 0x18(r30)
/* 803EF354 003EC294  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803EF358 003EC298  48 00 00 B8 */	b .L_803EF410
.L_803EF35C:
/* 803EF35C 003EC29C  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 803EF360 003EC2A0  28 03 00 00 */	cmplwi r3, 0
/* 803EF364 003EC2A4  41 82 00 0C */	beq .L_803EF370
/* 803EF368 003EC2A8  38 03 FF FF */	addi r0, r3, -1
/* 803EF36C 003EC2AC  90 1E 00 14 */	stw r0, 0x14(r30)
.L_803EF370:
/* 803EF370 003EC2B0  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803EF374 003EC2B4  28 00 00 00 */	cmplwi r0, 0
/* 803EF378 003EC2B8  40 82 00 20 */	bne .L_803EF398
/* 803EF37C 003EC2BC  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF380 003EC2C0  38 80 00 00 */	li r4, 0
/* 803EF384 003EC2C4  48 00 25 E9 */	bl openMsg__Q33ebi6Screen10TOmakeGameFl
/* 803EF388 003EC2C8  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF38C 003EC2CC  48 00 25 A5 */	bl setSelfControl__Q33ebi6Screen10TOmakeGameFv
/* 803EF390 003EC2D0  38 00 00 00 */	li r0, 0
/* 803EF394 003EC2D4  90 1E 00 10 */	stw r0, 0x10(r30)
.L_803EF398:
/* 803EF398 003EC2D8  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803EF39C 003EC2DC  28 00 00 02 */	cmplwi r0, 2
/* 803EF3A0 003EC2E0  40 81 00 70 */	ble .L_803EF410
/* 803EF3A4 003EC2E4  80 7F 00 00 */	lwz r3, 0(r31)
/* 803EF3A8 003EC2E8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803EF3AC 003EC2EC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803EF3B0 003EC2F0  41 82 00 60 */	beq .L_803EF410
/* 803EF3B4 003EC2F4  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803EF3B8 003EC2F8  38 80 18 01 */	li r4, 0x1801
/* 803EF3BC 003EC2FC  38 A0 00 00 */	li r5, 0
/* 803EF3C0 003EC300  4B F4 92 71 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803EF3C4 003EC304  38 00 00 01 */	li r0, 1
/* 803EF3C8 003EC308  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803EF3CC 003EC30C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803EF3D0 003EC310  48 00 00 40 */	b .L_803EF410
.L_803EF3D4:
/* 803EF3D4 003EC314  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 803EF3D8 003EC318  28 03 00 00 */	cmplwi r3, 0
/* 803EF3DC 003EC31C  41 82 00 0C */	beq .L_803EF3E8
/* 803EF3E0 003EC320  38 03 FF FF */	addi r0, r3, -1
/* 803EF3E4 003EC324  90 1E 00 14 */	stw r0, 0x14(r30)
.L_803EF3E8:
/* 803EF3E8 003EC328  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803EF3EC 003EC32C  28 00 00 00 */	cmplwi r0, 0
/* 803EF3F0 003EC330  40 82 00 20 */	bne .L_803EF410
/* 803EF3F4 003EC334  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF3F8 003EC338  38 80 00 00 */	li r4, 0
/* 803EF3FC 003EC33C  48 00 25 71 */	bl openMsg__Q33ebi6Screen10TOmakeGameFl
/* 803EF400 003EC340  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF404 003EC344  48 00 25 2D */	bl setSelfControl__Q33ebi6Screen10TOmakeGameFv
/* 803EF408 003EC348  38 00 00 00 */	li r0, 0
/* 803EF40C 003EC34C  90 1E 00 10 */	stw r0, 0x10(r30)
.L_803EF410:
/* 803EF410 003EC350  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF414 003EC354  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EF418 003EC358  83 C1 00 08 */	lwz r30, 8(r1)
/* 803EF41C 003EC35C  7C 08 03 A6 */	mtlr r0
/* 803EF420 003EC360  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF424 003EC364  4E 80 00 20 */	blr 
.endfn do_exec__Q33ebi5Omake19FSMState_SelectGameFPQ33ebi5Omake4TMgr

.fn __ct__Q33ebi5Omake4TMgrFv, global
/* 803EF428 003EC368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF42C 003EC36C  7C 08 02 A6 */	mflr r0
/* 803EF430 003EC370  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF434 003EC374  38 00 00 00 */	li r0, 0
/* 803EF438 003EC378  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EF43C 003EC37C  7C 7F 1B 78 */	mr r31, r3
/* 803EF440 003EC380  90 03 00 00 */	stw r0, 0(r3)
/* 803EF444 003EC384  38 7F 00 08 */	addi r3, r31, 8
/* 803EF448 003EC388  4B FF DE 61 */	bl __ct__Q33ebi6Screen6TOmakeFv
/* 803EF44C 003EC38C  38 7F 04 68 */	addi r3, r31, 0x468
/* 803EF450 003EC390  48 00 0E 55 */	bl __ct__Q33ebi6Screen11TOmakeCardEFv
/* 803EF454 003EC394  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF458 003EC398  48 00 18 9D */	bl __ct__Q33ebi6Screen10TOmakeGameFv
/* 803EF45C 003EC39C  38 E0 00 00 */	li r7, 0
/* 803EF460 003EC3A0  3C 80 80 4F */	lis r4, "__vt__Q24Game31StateMachine<Q33ebi5Omake4TMgr>"@ha
/* 803EF464 003EC3A4  98 FF 08 90 */	stb r7, 0x890(r31)
/* 803EF468 003EC3A8  3C 60 80 4F */	lis r3, __vt__Q33ebi5Omake15FSMStateMachine@ha
/* 803EF46C 003EC3AC  38 C4 A2 00 */	addi r6, r4, "__vt__Q24Game31StateMachine<Q33ebi5Omake4TMgr>"@l
/* 803EF470 003EC3B0  38 A0 FF FF */	li r5, -1
/* 803EF474 003EC3B4  90 FF 08 94 */	stw r7, 0x894(r31)
/* 803EF478 003EC3B8  38 03 A2 E4 */	addi r0, r3, __vt__Q33ebi5Omake15FSMStateMachine@l
/* 803EF47C 003EC3BC  38 7F 08 9C */	addi r3, r31, 0x89c
/* 803EF480 003EC3C0  7F E4 FB 78 */	mr r4, r31
/* 803EF484 003EC3C4  90 FF 08 98 */	stw r7, 0x898(r31)
/* 803EF488 003EC3C8  90 DF 08 9C */	stw r6, 0x89c(r31)
/* 803EF48C 003EC3CC  90 BF 08 B4 */	stw r5, 0x8b4(r31)
/* 803EF490 003EC3D0  90 1F 08 9C */	stw r0, 0x89c(r31)
/* 803EF494 003EC3D4  81 9F 08 9C */	lwz r12, 0x89c(r31)
/* 803EF498 003EC3D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EF49C 003EC3DC  7D 89 03 A6 */	mtctr r12
/* 803EF4A0 003EC3E0  4E 80 04 21 */	bctrl 
/* 803EF4A4 003EC3E4  38 7F 08 9C */	addi r3, r31, 0x89c
/* 803EF4A8 003EC3E8  7F E4 FB 78 */	mr r4, r31
/* 803EF4AC 003EC3EC  81 9F 08 9C */	lwz r12, 0x89c(r31)
/* 803EF4B0 003EC3F0  38 A0 00 00 */	li r5, 0
/* 803EF4B4 003EC3F4  38 C0 00 00 */	li r6, 0
/* 803EF4B8 003EC3F8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803EF4BC 003EC3FC  7D 89 03 A6 */	mtctr r12
/* 803EF4C0 003EC400  4E 80 04 21 */	bctrl 
/* 803EF4C4 003EC404  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF4C8 003EC408  7F E3 FB 78 */	mr r3, r31
/* 803EF4CC 003EC40C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EF4D0 003EC410  7C 08 03 A6 */	mtlr r0
/* 803EF4D4 003EC414  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF4D8 003EC418  4E 80 00 20 */	blr 
.endfn __ct__Q33ebi5Omake4TMgrFv

.fn loadResource__Q33ebi5Omake4TMgrFv, global
/* 803EF4DC 003EC41C  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 803EF4E0 003EC420  7C 08 02 A6 */	mflr r0
/* 803EF4E4 003EC424  3C 80 80 49 */	lis r4, lbl_80497AA0@ha
/* 803EF4E8 003EC428  38 A0 00 00 */	li r5, 0
/* 803EF4EC 003EC42C  90 01 01 24 */	stw r0, 0x124(r1)
/* 803EF4F0 003EC430  93 E1 01 1C */	stw r31, 0x11c(r1)
/* 803EF4F4 003EC434  3B E4 7A A0 */	addi r31, r4, lbl_80497AA0@l
/* 803EF4F8 003EC438  38 9F 00 60 */	addi r4, r31, 0x60
/* 803EF4FC 003EC43C  93 C1 01 18 */	stw r30, 0x118(r1)
/* 803EF500 003EC440  93 A1 01 14 */	stw r29, 0x114(r1)
/* 803EF504 003EC444  7C 7D 1B 78 */	mr r29, r3
/* 803EF508 003EC448  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EF50C 003EC44C  48 03 3E 51 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803EF510 003EC450  38 61 00 08 */	addi r3, r1, 8
/* 803EF514 003EC454  38 9F 00 78 */	addi r4, r31, 0x78
/* 803EF518 003EC458  4B F2 8A 35 */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 803EF51C 003EC45C  38 61 00 08 */	addi r3, r1, 8
/* 803EF520 003EC460  38 80 00 01 */	li r4, 1
/* 803EF524 003EC464  38 A0 00 00 */	li r5, 0
/* 803EF528 003EC468  38 C0 00 01 */	li r6, 1
/* 803EF52C 003EC46C  4B C2 BC 05 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 803EF530 003EC470  7C 7E 1B 79 */	or. r30, r3, r3
/* 803EF534 003EC474  40 82 00 18 */	bne .L_803EF54C
/* 803EF538 003EC478  38 7F 00 00 */	addi r3, r31, 0
/* 803EF53C 003EC47C  38 BF 00 84 */	addi r5, r31, 0x84
/* 803EF540 003EC480  38 80 01 0F */	li r4, 0x10f
/* 803EF544 003EC484  4C C6 31 82 */	crclr 6
/* 803EF548 003EC488  4B C3 B0 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EF54C:
/* 803EF54C 003EC48C  38 7D 00 08 */	addi r3, r29, 8
/* 803EF550 003EC490  7F C4 F3 78 */	mr r4, r30
/* 803EF554 003EC494  81 9D 00 08 */	lwz r12, 8(r29)
/* 803EF558 003EC498  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EF55C 003EC49C  7D 89 03 A6 */	mtctr r12
/* 803EF560 003EC4A0  4E 80 04 21 */	bctrl 
/* 803EF564 003EC4A4  38 7D 04 68 */	addi r3, r29, 0x468
/* 803EF568 003EC4A8  7F C4 F3 78 */	mr r4, r30
/* 803EF56C 003EC4AC  81 9D 04 68 */	lwz r12, 0x468(r29)
/* 803EF570 003EC4B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EF574 003EC4B4  7D 89 03 A6 */	mtctr r12
/* 803EF578 003EC4B8  4E 80 04 21 */	bctrl 
/* 803EF57C 003EC4BC  38 7D 05 DC */	addi r3, r29, 0x5dc
/* 803EF580 003EC4C0  7F C4 F3 78 */	mr r4, r30
/* 803EF584 003EC4C4  81 9D 05 DC */	lwz r12, 0x5dc(r29)
/* 803EF588 003EC4C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EF58C 003EC4CC  7D 89 03 A6 */	mtctr r12
/* 803EF590 003EC4D0  4E 80 04 21 */	bctrl 
/* 803EF594 003EC4D4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EF598 003EC4D8  38 9F 00 60 */	addi r4, r31, 0x60
/* 803EF59C 003EC4DC  48 03 3D C9 */	bl heapStatusEnd__6SystemFPc
/* 803EF5A0 003EC4E0  80 6D 9A 98 */	lwz r3, gCardEMgr__3ebi@sda21(r13)
/* 803EF5A4 003EC4E4  4B FF D9 41 */	bl loadResource__Q33ebi11CardEReader4TMgrFv
/* 803EF5A8 003EC4E8  80 01 01 24 */	lwz r0, 0x124(r1)
/* 803EF5AC 003EC4EC  83 E1 01 1C */	lwz r31, 0x11c(r1)
/* 803EF5B0 003EC4F0  83 C1 01 18 */	lwz r30, 0x118(r1)
/* 803EF5B4 003EC4F4  83 A1 01 14 */	lwz r29, 0x114(r1)
/* 803EF5B8 003EC4F8  7C 08 03 A6 */	mtlr r0
/* 803EF5BC 003EC4FC  38 21 01 20 */	addi r1, r1, 0x120
/* 803EF5C0 003EC500  4E 80 00 20 */	blr 
.endfn loadResource__Q33ebi5Omake4TMgrFv

.fn newCardEMgrAndTask__Q33ebi5Omake4TMgrFv, global
/* 803EF5C4 003EC504  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF5C8 003EC508  7C 08 02 A6 */	mflr r0
/* 803EF5CC 003EC50C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF5D0 003EC510  4B FF D8 A9 */	bl globalInstance__Q33ebi11CardEReader4TMgrFv
/* 803EF5D4 003EC514  80 6D 9A 98 */	lwz r3, gCardEMgr__3ebi@sda21(r13)
/* 803EF5D8 003EC518  4B FF DA 29 */	bl init__Q33ebi11CardEReader4TMgrFv
/* 803EF5DC 003EC51C  38 60 00 40 */	li r3, 0x40
/* 803EF5E0 003EC520  38 80 00 12 */	li r4, 0x12
/* 803EF5E4 003EC524  38 A0 40 00 */	li r5, 0x4000
/* 803EF5E8 003EC528  38 C0 00 00 */	li r6, 0
/* 803EF5EC 003EC52C  4B C3 66 ED */	bl create__7JKRTaskFiiUlP7JKRHeap
/* 803EF5F0 003EC530  3C 80 80 3F */	lis r4, gCardEMgr_ThreadFunc__3ebiFPv@ha
/* 803EF5F4 003EC534  38 A0 00 00 */	li r5, 0
/* 803EF5F8 003EC538  38 84 CB 40 */	addi r4, r4, gCardEMgr_ThreadFunc__3ebiFPv@l
/* 803EF5FC 003EC53C  38 C0 00 00 */	li r6, 0
/* 803EF600 003EC540  4B C3 6A 19 */	bl request__7JKRTaskFPFPv_vPvPv
/* 803EF604 003EC544  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF608 003EC548  7C 08 03 A6 */	mtlr r0
/* 803EF60C 003EC54C  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF610 003EC550  4E 80 00 20 */	blr 
.endfn newCardEMgrAndTask__Q33ebi5Omake4TMgrFv

.fn start__Q33ebi5Omake4TMgrFv, global
/* 803EF614 003EC554  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF618 003EC558  7C 08 02 A6 */	mflr r0
/* 803EF61C 003EC55C  7C 64 1B 78 */	mr r4, r3
/* 803EF620 003EC560  38 A0 00 01 */	li r5, 1
/* 803EF624 003EC564  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF628 003EC568  38 64 08 9C */	addi r3, r4, 0x89c
/* 803EF62C 003EC56C  38 C0 00 00 */	li r6, 0
/* 803EF630 003EC570  81 84 08 9C */	lwz r12, 0x89c(r4)
/* 803EF634 003EC574  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803EF638 003EC578  7D 89 03 A6 */	mtctr r12
/* 803EF63C 003EC57C  4E 80 04 21 */	bctrl 
/* 803EF640 003EC580  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF644 003EC584  7C 08 03 A6 */	mtlr r0
/* 803EF648 003EC588  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF64C 003EC58C  4E 80 00 20 */	blr 
.endfn start__Q33ebi5Omake4TMgrFv

.fn goEnd___Q33ebi5Omake4TMgrFv, global
/* 803EF650 003EC590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF654 003EC594  7C 08 02 A6 */	mflr r0
/* 803EF658 003EC598  7C 64 1B 78 */	mr r4, r3
/* 803EF65C 003EC59C  38 A0 00 00 */	li r5, 0
/* 803EF660 003EC5A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF664 003EC5A4  38 64 08 9C */	addi r3, r4, 0x89c
/* 803EF668 003EC5A8  38 C0 00 00 */	li r6, 0
/* 803EF66C 003EC5AC  81 84 08 9C */	lwz r12, 0x89c(r4)
/* 803EF670 003EC5B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803EF674 003EC5B4  7D 89 03 A6 */	mtctr r12
/* 803EF678 003EC5B8  4E 80 04 21 */	bctrl 
/* 803EF67C 003EC5BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF680 003EC5C0  7C 08 03 A6 */	mtlr r0
/* 803EF684 003EC5C4  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF688 003EC5C8  4E 80 00 20 */	blr 
.endfn goEnd___Q33ebi5Omake4TMgrFv

.fn isFinish__Q33ebi5Omake4TMgrFv, global
/* 803EF68C 003EC5CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF690 003EC5D0  7C 08 02 A6 */	mflr r0
/* 803EF694 003EC5D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF698 003EC5D8  48 00 02 05 */	bl getStateID__Q33ebi5Omake4TMgrFv
/* 803EF69C 003EC5DC  7C 60 00 34 */	cntlzw r0, r3
/* 803EF6A0 003EC5E0  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 803EF6A4 003EC5E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF6A8 003EC5E8  7C 08 03 A6 */	mtlr r0
/* 803EF6AC 003EC5EC  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF6B0 003EC5F0  4E 80 00 20 */	blr 
.endfn isFinish__Q33ebi5Omake4TMgrFv

.fn update__Q33ebi5Omake4TMgrFv, global
/* 803EF6B4 003EC5F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF6B8 003EC5F8  7C 08 02 A6 */	mflr r0
/* 803EF6BC 003EC5FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF6C0 003EC600  38 00 00 00 */	li r0, 0
/* 803EF6C4 003EC604  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EF6C8 003EC608  93 C1 00 08 */	stw r30, 8(r1)
/* 803EF6CC 003EC60C  7C 7E 1B 78 */	mr r30, r3
/* 803EF6D0 003EC610  98 03 08 90 */	stb r0, 0x890(r3)
/* 803EF6D4 003EC614  38 7E 00 08 */	addi r3, r30, 8
/* 803EF6D8 003EC618  4B FE 42 D5 */	bl isCloseScreen__Q33ebi6Screen11TScreenBaseFv
/* 803EF6DC 003EC61C  7C 7F 1B 78 */	mr r31, r3
/* 803EF6E0 003EC620  38 7E 08 9C */	addi r3, r30, 0x89c
/* 803EF6E4 003EC624  81 9E 08 9C */	lwz r12, 0x89c(r30)
/* 803EF6E8 003EC628  7F C4 F3 78 */	mr r4, r30
/* 803EF6EC 003EC62C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803EF6F0 003EC630  7D 89 03 A6 */	mtctr r12
/* 803EF6F4 003EC634  4E 80 04 21 */	bctrl 
/* 803EF6F8 003EC638  7F C3 F3 78 */	mr r3, r30
/* 803EF6FC 003EC63C  48 00 01 A1 */	bl getStateID__Q33ebi5Omake4TMgrFv
/* 803EF700 003EC640  2C 03 00 00 */	cmpwi r3, 0
/* 803EF704 003EC644  41 82 00 78 */	beq .L_803EF77C
/* 803EF708 003EC648  7F C3 F3 78 */	mr r3, r30
/* 803EF70C 003EC64C  48 00 01 91 */	bl getStateID__Q33ebi5Omake4TMgrFv
/* 803EF710 003EC650  2C 03 00 04 */	cmpwi r3, 4
/* 803EF714 003EC654  41 82 00 68 */	beq .L_803EF77C
/* 803EF718 003EC658  38 7E 00 08 */	addi r3, r30, 8
/* 803EF71C 003EC65C  81 9E 00 08 */	lwz r12, 8(r30)
/* 803EF720 003EC660  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803EF724 003EC664  7D 89 03 A6 */	mtctr r12
/* 803EF728 003EC668  4E 80 04 21 */	bctrl 
/* 803EF72C 003EC66C  38 7E 04 68 */	addi r3, r30, 0x468
/* 803EF730 003EC670  81 9E 04 68 */	lwz r12, 0x468(r30)
/* 803EF734 003EC674  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803EF738 003EC678  7D 89 03 A6 */	mtctr r12
/* 803EF73C 003EC67C  4E 80 04 21 */	bctrl 
/* 803EF740 003EC680  38 7E 05 DC */	addi r3, r30, 0x5dc
/* 803EF744 003EC684  81 9E 05 DC */	lwz r12, 0x5dc(r30)
/* 803EF748 003EC688  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803EF74C 003EC68C  7D 89 03 A6 */	mtctr r12
/* 803EF750 003EC690  4E 80 04 21 */	bctrl 
/* 803EF754 003EC694  80 6D 9A 98 */	lwz r3, gCardEMgr__3ebi@sda21(r13)
/* 803EF758 003EC698  4B FF D9 19 */	bl update__Q33ebi11CardEReader4TMgrFv
/* 803EF75C 003EC69C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803EF760 003EC6A0  40 82 00 1C */	bne .L_803EF77C
/* 803EF764 003EC6A4  38 7E 00 08 */	addi r3, r30, 8
/* 803EF768 003EC6A8  4B FE 42 45 */	bl isCloseScreen__Q33ebi6Screen11TScreenBaseFv
/* 803EF76C 003EC6AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EF770 003EC6B0  41 82 00 0C */	beq .L_803EF77C
/* 803EF774 003EC6B4  38 00 00 01 */	li r0, 1
/* 803EF778 003EC6B8  98 1E 08 90 */	stb r0, 0x890(r30)
.L_803EF77C:
/* 803EF77C 003EC6BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF780 003EC6C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EF784 003EC6C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803EF788 003EC6C8  7C 08 03 A6 */	mtlr r0
/* 803EF78C 003EC6CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF790 003EC6D0  4E 80 00 20 */	blr 
.endfn update__Q33ebi5Omake4TMgrFv

.fn draw__Q33ebi5Omake4TMgrFv, global
/* 803EF794 003EC6D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF798 003EC6D8  7C 08 02 A6 */	mflr r0
/* 803EF79C 003EC6DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF7A0 003EC6E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EF7A4 003EC6E4  7C 7F 1B 78 */	mr r31, r3
/* 803EF7A8 003EC6E8  48 00 00 F5 */	bl getStateID__Q33ebi5Omake4TMgrFv
/* 803EF7AC 003EC6EC  2C 03 00 00 */	cmpwi r3, 0
/* 803EF7B0 003EC6F0  41 82 00 50 */	beq .L_803EF800
/* 803EF7B4 003EC6F4  7F E3 FB 78 */	mr r3, r31
/* 803EF7B8 003EC6F8  48 00 00 E5 */	bl getStateID__Q33ebi5Omake4TMgrFv
/* 803EF7BC 003EC6FC  2C 03 00 04 */	cmpwi r3, 4
/* 803EF7C0 003EC700  41 82 00 40 */	beq .L_803EF800
/* 803EF7C4 003EC704  38 7F 00 08 */	addi r3, r31, 8
/* 803EF7C8 003EC708  81 9F 00 08 */	lwz r12, 8(r31)
/* 803EF7CC 003EC70C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EF7D0 003EC710  7D 89 03 A6 */	mtctr r12
/* 803EF7D4 003EC714  4E 80 04 21 */	bctrl 
/* 803EF7D8 003EC718  38 7F 04 68 */	addi r3, r31, 0x468
/* 803EF7DC 003EC71C  81 9F 04 68 */	lwz r12, 0x468(r31)
/* 803EF7E0 003EC720  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EF7E4 003EC724  7D 89 03 A6 */	mtctr r12
/* 803EF7E8 003EC728  4E 80 04 21 */	bctrl 
/* 803EF7EC 003EC72C  38 7F 05 DC */	addi r3, r31, 0x5dc
/* 803EF7F0 003EC730  81 9F 05 DC */	lwz r12, 0x5dc(r31)
/* 803EF7F4 003EC734  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803EF7F8 003EC738  7D 89 03 A6 */	mtctr r12
/* 803EF7FC 003EC73C  4E 80 04 21 */	bctrl 
.L_803EF800:
/* 803EF800 003EC740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF804 003EC744  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EF808 003EC748  7C 08 03 A6 */	mtlr r0
/* 803EF80C 003EC74C  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF810 003EC750  4E 80 00 20 */	blr 
.endfn draw__Q33ebi5Omake4TMgrFv

.fn isMovieState__Q33ebi5Omake4TMgrFv, global
/* 803EF814 003EC754  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF818 003EC758  7C 08 02 A6 */	mflr r0
/* 803EF81C 003EC75C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF820 003EC760  48 00 00 7D */	bl getStateID__Q33ebi5Omake4TMgrFv
/* 803EF824 003EC764  20 03 00 04 */	subfic r0, r3, 4
/* 803EF828 003EC768  7C 00 00 34 */	cntlzw r0, r0
/* 803EF82C 003EC76C  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 803EF830 003EC770  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF834 003EC774  7C 08 03 A6 */	mtlr r0
/* 803EF838 003EC778  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF83C 003EC77C  4E 80 00 20 */	blr 
.endfn isMovieState__Q33ebi5Omake4TMgrFv

.fn restartFromMovieState__Q33ebi5Omake4TMgrFv, global
/* 803EF840 003EC780  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF844 003EC784  7C 08 02 A6 */	mflr r0
/* 803EF848 003EC788  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF84C 003EC78C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EF850 003EC790  7C 7F 1B 78 */	mr r31, r3
/* 803EF854 003EC794  48 00 00 49 */	bl getStateID__Q33ebi5Omake4TMgrFv
/* 803EF858 003EC798  2C 03 00 04 */	cmpwi r3, 4
/* 803EF85C 003EC79C  40 82 00 24 */	bne .L_803EF880
/* 803EF860 003EC7A0  38 7F 08 9C */	addi r3, r31, 0x89c
/* 803EF864 003EC7A4  7F E4 FB 78 */	mr r4, r31
/* 803EF868 003EC7A8  81 9F 08 9C */	lwz r12, 0x89c(r31)
/* 803EF86C 003EC7AC  38 A0 00 01 */	li r5, 1
/* 803EF870 003EC7B0  38 C0 00 00 */	li r6, 0
/* 803EF874 003EC7B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803EF878 003EC7B8  7D 89 03 A6 */	mtctr r12
/* 803EF87C 003EC7BC  4E 80 04 21 */	bctrl 
.L_803EF880:
/* 803EF880 003EC7C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF884 003EC7C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EF888 003EC7C8  7C 08 03 A6 */	mtlr r0
/* 803EF88C 003EC7CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF890 003EC7D0  4E 80 00 20 */	blr 
.endfn restartFromMovieState__Q33ebi5Omake4TMgrFv

.fn getMovieID__Q33ebi5Omake4TMgrFv, global
/* 803EF894 003EC7D4  80 63 00 44 */	lwz r3, 0x44(r3)
/* 803EF898 003EC7D8  4E 80 00 20 */	blr 
.endfn getMovieID__Q33ebi5Omake4TMgrFv

.fn getStateID__Q33ebi5Omake4TMgrFv, global
/* 803EF89C 003EC7DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF8A0 003EC7E0  7C 08 02 A6 */	mflr r0
/* 803EF8A4 003EC7E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF8A8 003EC7E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EF8AC 003EC7EC  7C 7F 1B 78 */	mr r31, r3
/* 803EF8B0 003EC7F0  80 03 08 B8 */	lwz r0, 0x8b8(r3)
/* 803EF8B4 003EC7F4  28 00 00 00 */	cmplwi r0, 0
/* 803EF8B8 003EC7F8  40 82 00 20 */	bne .L_803EF8D8
/* 803EF8BC 003EC7FC  3C 60 80 49 */	lis r3, lbl_80497AA0@ha
/* 803EF8C0 003EC800  3C A0 80 49 */	lis r5, lbl_80497B24@ha
/* 803EF8C4 003EC804  38 63 7A A0 */	addi r3, r3, lbl_80497AA0@l
/* 803EF8C8 003EC808  38 80 01 CC */	li r4, 0x1cc
/* 803EF8CC 003EC80C  38 A5 7B 24 */	addi r5, r5, lbl_80497B24@l
/* 803EF8D0 003EC810  4C C6 31 82 */	crclr 6
/* 803EF8D4 003EC814  4B C3 AD 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EF8D8:
/* 803EF8D8 003EC818  80 7F 08 B8 */	lwz r3, 0x8b8(r31)
/* 803EF8DC 003EC81C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF8E0 003EC820  80 63 00 04 */	lwz r3, 4(r3)
/* 803EF8E4 003EC824  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EF8E8 003EC828  7C 08 03 A6 */	mtlr r0
/* 803EF8EC 003EC82C  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF8F0 003EC830  4E 80 00 20 */	blr 
.endfn getStateID__Q33ebi5Omake4TMgrFv

.section .text, "ax", unique, 1
.fn do_init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg, weak
/* 803EF8F4 003EC834  4E 80 00 20 */	blr 
.endfn do_init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg

.fn do_exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr, weak
/* 803EF8F8 003EC838  4E 80 00 20 */	blr 
.endfn do_exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr

.section .text, "ax", unique, 2
.fn "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg", weak
/* 803EF8FC 003EC83C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF900 003EC840  7C 08 02 A6 */	mflr r0
/* 803EF904 003EC844  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF908 003EC848  80 63 00 08 */	lwz r3, 8(r3)
/* 803EF90C 003EC84C  81 83 00 00 */	lwz r12, 0(r3)
/* 803EF910 003EC850  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803EF914 003EC854  7D 89 03 A6 */	mtctr r12
/* 803EF918 003EC858  4E 80 04 21 */	bctrl 
/* 803EF91C 003EC85C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF920 003EC860  7C 08 03 A6 */	mtlr r0
/* 803EF924 003EC864  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF928 003EC868  4E 80 00 20 */	blr 
.endfn "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"

.fn "start__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg", weak
/* 803EF92C 003EC86C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF930 003EC870  7C 08 02 A6 */	mflr r0
/* 803EF934 003EC874  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF938 003EC878  38 00 00 00 */	li r0, 0
/* 803EF93C 003EC87C  90 04 08 B8 */	stw r0, 0x8b8(r4)
/* 803EF940 003EC880  81 83 00 00 */	lwz r12, 0(r3)
/* 803EF944 003EC884  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803EF948 003EC888  7D 89 03 A6 */	mtctr r12
/* 803EF94C 003EC88C  4E 80 04 21 */	bctrl 
/* 803EF950 003EC890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EF954 003EC894  7C 08 03 A6 */	mtlr r0
/* 803EF958 003EC898  38 21 00 10 */	addi r1, r1, 0x10
/* 803EF95C 003EC89C  4E 80 00 20 */	blr 
.endfn "start__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"

.fn __dt__Q33ebi6Screen10TOmakeGameFv, weak
/* 803EF960 003EC8A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EF964 003EC8A4  7C 08 02 A6 */	mflr r0
/* 803EF968 003EC8A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EF96C 003EC8AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EF970 003EC8B0  7C 9F 23 78 */	mr r31, r4
/* 803EF974 003EC8B4  93 C1 00 08 */	stw r30, 8(r1)
/* 803EF978 003EC8B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 803EF97C 003EC8BC  41 82 02 40 */	beq .L_803EFBBC
/* 803EF980 003EC8C0  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen10TOmakeGame@ha
/* 803EF984 003EC8C4  34 1E 02 44 */	addic. r0, r30, 0x244
/* 803EF988 003EC8C8  38 03 A3 50 */	addi r0, r3, __vt__Q33ebi6Screen10TOmakeGame@l
/* 803EF98C 003EC8CC  90 1E 00 00 */	stw r0, 0(r30)
/* 803EF990 003EC8D0  41 82 00 58 */	beq .L_803EF9E8
/* 803EF994 003EC8D4  3C 60 80 4F */	lis r3, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
/* 803EF998 003EC8D8  34 1E 02 44 */	addic. r0, r30, 0x244
/* 803EF99C 003EC8DC  38 03 89 E8 */	addi r0, r3, __vt__Q23ebi24E2DCallBack_WindowCursor@l
/* 803EF9A0 003EC8E0  90 1E 02 44 */	stw r0, 0x244(r30)
/* 803EF9A4 003EC8E4  41 82 00 44 */	beq .L_803EF9E8
/* 803EF9A8 003EC8E8  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EF9AC 003EC8EC  34 1E 02 44 */	addic. r0, r30, 0x244
/* 803EF9B0 003EC8F0  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EF9B4 003EC8F4  90 1E 02 44 */	stw r0, 0x244(r30)
/* 803EF9B8 003EC8F8  41 82 00 30 */	beq .L_803EF9E8
/* 803EF9BC 003EC8FC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EF9C0 003EC900  34 1E 02 44 */	addic. r0, r30, 0x244
/* 803EF9C4 003EC904  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EF9C8 003EC908  90 1E 02 44 */	stw r0, 0x244(r30)
/* 803EF9CC 003EC90C  41 82 00 1C */	beq .L_803EF9E8
/* 803EF9D0 003EC910  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EF9D4 003EC914  38 7E 02 44 */	addi r3, r30, 0x244
/* 803EF9D8 003EC918  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EF9DC 003EC91C  38 80 00 00 */	li r4, 0
/* 803EF9E0 003EC920  90 1E 02 44 */	stw r0, 0x244(r30)
/* 803EF9E4 003EC924  48 02 1B A5 */	bl __dt__5CNodeFv
.L_803EF9E8:
/* 803EF9E8 003EC928  3C 80 80 3D */	lis r4, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@ha
/* 803EF9EC 003EC92C  38 7E 01 60 */	addi r3, r30, 0x160
/* 803EF9F0 003EC930  38 84 FE 5C */	addi r4, r4, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@l
/* 803EF9F4 003EC934  38 A0 00 4C */	li r5, 0x4c
/* 803EF9F8 003EC938  38 C0 00 03 */	li r6, 3
/* 803EF9FC 003EC93C  4B CD 1D C9 */	bl __destroy_arr
/* 803EFA00 003EC940  34 1E 01 40 */	addic. r0, r30, 0x140
/* 803EFA04 003EC944  41 82 00 58 */	beq .L_803EFA5C
/* 803EFA08 003EC948  3C 60 80 4F */	lis r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803EFA0C 003EC94C  34 1E 01 40 */	addic. r0, r30, 0x140
/* 803EFA10 003EC950  38 03 88 0C */	addi r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803EFA14 003EC954  90 1E 01 40 */	stw r0, 0x140(r30)
/* 803EFA18 003EC958  41 82 00 44 */	beq .L_803EFA5C
/* 803EFA1C 003EC95C  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFA20 003EC960  34 1E 01 40 */	addic. r0, r30, 0x140
/* 803EFA24 003EC964  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFA28 003EC968  90 1E 01 40 */	stw r0, 0x140(r30)
/* 803EFA2C 003EC96C  41 82 00 30 */	beq .L_803EFA5C
/* 803EFA30 003EC970  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFA34 003EC974  34 1E 01 40 */	addic. r0, r30, 0x140
/* 803EFA38 003EC978  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFA3C 003EC97C  90 1E 01 40 */	stw r0, 0x140(r30)
/* 803EFA40 003EC980  41 82 00 1C */	beq .L_803EFA5C
/* 803EFA44 003EC984  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFA48 003EC988  38 7E 01 40 */	addi r3, r30, 0x140
/* 803EFA4C 003EC98C  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFA50 003EC990  38 80 00 00 */	li r4, 0
/* 803EFA54 003EC994  90 1E 01 40 */	stw r0, 0x140(r30)
/* 803EFA58 003EC998  48 02 1B 31 */	bl __dt__5CNodeFv
.L_803EFA5C:
/* 803EFA5C 003EC99C  34 1E 01 04 */	addic. r0, r30, 0x104
/* 803EFA60 003EC9A0  41 82 00 6C */	beq .L_803EFACC
/* 803EFA64 003EC9A4  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EFA68 003EC9A8  34 1E 01 24 */	addic. r0, r30, 0x124
/* 803EFA6C 003EC9AC  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EFA70 003EC9B0  90 1E 01 04 */	stw r0, 0x104(r30)
/* 803EFA74 003EC9B4  41 82 00 10 */	beq .L_803EFA84
/* 803EFA78 003EC9B8  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EFA7C 003EC9BC  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EFA80 003EC9C0  90 1E 01 24 */	stw r0, 0x124(r30)
.L_803EFA84:
/* 803EFA84 003EC9C4  34 1E 01 04 */	addic. r0, r30, 0x104
/* 803EFA88 003EC9C8  41 82 00 44 */	beq .L_803EFACC
/* 803EFA8C 003EC9CC  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFA90 003EC9D0  34 1E 01 04 */	addic. r0, r30, 0x104
/* 803EFA94 003EC9D4  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFA98 003EC9D8  90 1E 01 04 */	stw r0, 0x104(r30)
/* 803EFA9C 003EC9DC  41 82 00 30 */	beq .L_803EFACC
/* 803EFAA0 003EC9E0  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFAA4 003EC9E4  34 1E 01 04 */	addic. r0, r30, 0x104
/* 803EFAA8 003EC9E8  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFAAC 003EC9EC  90 1E 01 04 */	stw r0, 0x104(r30)
/* 803EFAB0 003EC9F0  41 82 00 1C */	beq .L_803EFACC
/* 803EFAB4 003EC9F4  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFAB8 003EC9F8  38 7E 01 04 */	addi r3, r30, 0x104
/* 803EFABC 003EC9FC  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFAC0 003ECA00  38 80 00 00 */	li r4, 0
/* 803EFAC4 003ECA04  90 1E 01 04 */	stw r0, 0x104(r30)
/* 803EFAC8 003ECA08  48 02 1A C1 */	bl __dt__5CNodeFv
.L_803EFACC:
/* 803EFACC 003ECA0C  34 1E 00 C8 */	addic. r0, r30, 0xc8
/* 803EFAD0 003ECA10  41 82 00 6C */	beq .L_803EFB3C
/* 803EFAD4 003ECA14  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EFAD8 003ECA18  34 1E 00 E8 */	addic. r0, r30, 0xe8
/* 803EFADC 003ECA1C  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EFAE0 003ECA20  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 803EFAE4 003ECA24  41 82 00 10 */	beq .L_803EFAF4
/* 803EFAE8 003ECA28  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EFAEC 003ECA2C  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EFAF0 003ECA30  90 1E 00 E8 */	stw r0, 0xe8(r30)
.L_803EFAF4:
/* 803EFAF4 003ECA34  34 1E 00 C8 */	addic. r0, r30, 0xc8
/* 803EFAF8 003ECA38  41 82 00 44 */	beq .L_803EFB3C
/* 803EFAFC 003ECA3C  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFB00 003ECA40  34 1E 00 C8 */	addic. r0, r30, 0xc8
/* 803EFB04 003ECA44  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFB08 003ECA48  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 803EFB0C 003ECA4C  41 82 00 30 */	beq .L_803EFB3C
/* 803EFB10 003ECA50  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFB14 003ECA54  34 1E 00 C8 */	addic. r0, r30, 0xc8
/* 803EFB18 003ECA58  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFB1C 003ECA5C  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 803EFB20 003ECA60  41 82 00 1C */	beq .L_803EFB3C
/* 803EFB24 003ECA64  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFB28 003ECA68  38 7E 00 C8 */	addi r3, r30, 0xc8
/* 803EFB2C 003ECA6C  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFB30 003ECA70  38 80 00 00 */	li r4, 0
/* 803EFB34 003ECA74  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 803EFB38 003ECA78  48 02 1A 51 */	bl __dt__5CNodeFv
.L_803EFB3C:
/* 803EFB3C 003ECA7C  34 1E 00 8C */	addic. r0, r30, 0x8c
/* 803EFB40 003ECA80  41 82 00 6C */	beq .L_803EFBAC
/* 803EFB44 003ECA84  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EFB48 003ECA88  34 1E 00 AC */	addic. r0, r30, 0xac
/* 803EFB4C 003ECA8C  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EFB50 003ECA90  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803EFB54 003ECA94  41 82 00 10 */	beq .L_803EFB64
/* 803EFB58 003ECA98  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EFB5C 003ECA9C  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EFB60 003ECAA0  90 1E 00 AC */	stw r0, 0xac(r30)
.L_803EFB64:
/* 803EFB64 003ECAA4  34 1E 00 8C */	addic. r0, r30, 0x8c
/* 803EFB68 003ECAA8  41 82 00 44 */	beq .L_803EFBAC
/* 803EFB6C 003ECAAC  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFB70 003ECAB0  34 1E 00 8C */	addic. r0, r30, 0x8c
/* 803EFB74 003ECAB4  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFB78 003ECAB8  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803EFB7C 003ECABC  41 82 00 30 */	beq .L_803EFBAC
/* 803EFB80 003ECAC0  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFB84 003ECAC4  34 1E 00 8C */	addic. r0, r30, 0x8c
/* 803EFB88 003ECAC8  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFB8C 003ECACC  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803EFB90 003ECAD0  41 82 00 1C */	beq .L_803EFBAC
/* 803EFB94 003ECAD4  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFB98 003ECAD8  38 7E 00 8C */	addi r3, r30, 0x8c
/* 803EFB9C 003ECADC  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFBA0 003ECAE0  38 80 00 00 */	li r4, 0
/* 803EFBA4 003ECAE4  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803EFBA8 003ECAE8  48 02 19 E1 */	bl __dt__5CNodeFv
.L_803EFBAC:
/* 803EFBAC 003ECAEC  7F E0 07 35 */	extsh. r0, r31
/* 803EFBB0 003ECAF0  40 81 00 0C */	ble .L_803EFBBC
/* 803EFBB4 003ECAF4  7F C3 F3 78 */	mr r3, r30
/* 803EFBB8 003ECAF8  4B C3 44 FD */	bl __dl__FPv
.L_803EFBBC:
/* 803EFBBC 003ECAFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EFBC0 003ECB00  7F C3 F3 78 */	mr r3, r30
/* 803EFBC4 003ECB04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EFBC8 003ECB08  83 C1 00 08 */	lwz r30, 8(r1)
/* 803EFBCC 003ECB0C  7C 08 03 A6 */	mtlr r0
/* 803EFBD0 003ECB10  38 21 00 10 */	addi r1, r1, 0x10
/* 803EFBD4 003ECB14  4E 80 00 20 */	blr 
.endfn __dt__Q33ebi6Screen10TOmakeGameFv

.fn __dt__Q33ebi6Screen11TOmakeCardEFv, weak
/* 803EFBD8 003ECB18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EFBDC 003ECB1C  7C 08 02 A6 */	mflr r0
/* 803EFBE0 003ECB20  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EFBE4 003ECB24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EFBE8 003ECB28  7C 9F 23 78 */	mr r31, r4
/* 803EFBEC 003ECB2C  93 C1 00 08 */	stw r30, 8(r1)
/* 803EFBF0 003ECB30  7C 7E 1B 79 */	or. r30, r3, r3
/* 803EFBF4 003ECB34  41 82 02 AC */	beq .L_803EFEA0
/* 803EFBF8 003ECB38  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen11TOmakeCardE@ha
/* 803EFBFC 003ECB3C  34 1E 01 4C */	addic. r0, r30, 0x14c
/* 803EFC00 003ECB40  38 03 A3 00 */	addi r0, r3, __vt__Q33ebi6Screen11TOmakeCardE@l
/* 803EFC04 003ECB44  90 1E 00 00 */	stw r0, 0(r30)
/* 803EFC08 003ECB48  41 82 00 58 */	beq .L_803EFC60
/* 803EFC0C 003ECB4C  3C 60 80 4F */	lis r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803EFC10 003ECB50  34 1E 01 4C */	addic. r0, r30, 0x14c
/* 803EFC14 003ECB54  38 03 88 0C */	addi r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803EFC18 003ECB58  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 803EFC1C 003ECB5C  41 82 00 44 */	beq .L_803EFC60
/* 803EFC20 003ECB60  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFC24 003ECB64  34 1E 01 4C */	addic. r0, r30, 0x14c
/* 803EFC28 003ECB68  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFC2C 003ECB6C  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 803EFC30 003ECB70  41 82 00 30 */	beq .L_803EFC60
/* 803EFC34 003ECB74  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFC38 003ECB78  34 1E 01 4C */	addic. r0, r30, 0x14c
/* 803EFC3C 003ECB7C  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFC40 003ECB80  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 803EFC44 003ECB84  41 82 00 1C */	beq .L_803EFC60
/* 803EFC48 003ECB88  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFC4C 003ECB8C  38 7E 01 4C */	addi r3, r30, 0x14c
/* 803EFC50 003ECB90  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFC54 003ECB94  38 80 00 00 */	li r4, 0
/* 803EFC58 003ECB98  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 803EFC5C 003ECB9C  48 02 19 2D */	bl __dt__5CNodeFv
.L_803EFC60:
/* 803EFC60 003ECBA0  34 1E 01 10 */	addic. r0, r30, 0x110
/* 803EFC64 003ECBA4  41 82 00 6C */	beq .L_803EFCD0
/* 803EFC68 003ECBA8  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EFC6C 003ECBAC  34 1E 01 30 */	addic. r0, r30, 0x130
/* 803EFC70 003ECBB0  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EFC74 003ECBB4  90 1E 01 10 */	stw r0, 0x110(r30)
/* 803EFC78 003ECBB8  41 82 00 10 */	beq .L_803EFC88
/* 803EFC7C 003ECBBC  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EFC80 003ECBC0  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EFC84 003ECBC4  90 1E 01 30 */	stw r0, 0x130(r30)
.L_803EFC88:
/* 803EFC88 003ECBC8  34 1E 01 10 */	addic. r0, r30, 0x110
/* 803EFC8C 003ECBCC  41 82 00 44 */	beq .L_803EFCD0
/* 803EFC90 003ECBD0  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFC94 003ECBD4  34 1E 01 10 */	addic. r0, r30, 0x110
/* 803EFC98 003ECBD8  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFC9C 003ECBDC  90 1E 01 10 */	stw r0, 0x110(r30)
/* 803EFCA0 003ECBE0  41 82 00 30 */	beq .L_803EFCD0
/* 803EFCA4 003ECBE4  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFCA8 003ECBE8  34 1E 01 10 */	addic. r0, r30, 0x110
/* 803EFCAC 003ECBEC  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFCB0 003ECBF0  90 1E 01 10 */	stw r0, 0x110(r30)
/* 803EFCB4 003ECBF4  41 82 00 1C */	beq .L_803EFCD0
/* 803EFCB8 003ECBF8  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFCBC 003ECBFC  38 7E 01 10 */	addi r3, r30, 0x110
/* 803EFCC0 003ECC00  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFCC4 003ECC04  38 80 00 00 */	li r4, 0
/* 803EFCC8 003ECC08  90 1E 01 10 */	stw r0, 0x110(r30)
/* 803EFCCC 003ECC0C  48 02 18 BD */	bl __dt__5CNodeFv
.L_803EFCD0:
/* 803EFCD0 003ECC10  34 1E 00 D4 */	addic. r0, r30, 0xd4
/* 803EFCD4 003ECC14  41 82 00 6C */	beq .L_803EFD40
/* 803EFCD8 003ECC18  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EFCDC 003ECC1C  34 1E 00 F4 */	addic. r0, r30, 0xf4
/* 803EFCE0 003ECC20  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EFCE4 003ECC24  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803EFCE8 003ECC28  41 82 00 10 */	beq .L_803EFCF8
/* 803EFCEC 003ECC2C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EFCF0 003ECC30  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EFCF4 003ECC34  90 1E 00 F4 */	stw r0, 0xf4(r30)
.L_803EFCF8:
/* 803EFCF8 003ECC38  34 1E 00 D4 */	addic. r0, r30, 0xd4
/* 803EFCFC 003ECC3C  41 82 00 44 */	beq .L_803EFD40
/* 803EFD00 003ECC40  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFD04 003ECC44  34 1E 00 D4 */	addic. r0, r30, 0xd4
/* 803EFD08 003ECC48  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFD0C 003ECC4C  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803EFD10 003ECC50  41 82 00 30 */	beq .L_803EFD40
/* 803EFD14 003ECC54  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFD18 003ECC58  34 1E 00 D4 */	addic. r0, r30, 0xd4
/* 803EFD1C 003ECC5C  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFD20 003ECC60  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803EFD24 003ECC64  41 82 00 1C */	beq .L_803EFD40
/* 803EFD28 003ECC68  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFD2C 003ECC6C  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 803EFD30 003ECC70  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFD34 003ECC74  38 80 00 00 */	li r4, 0
/* 803EFD38 003ECC78  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803EFD3C 003ECC7C  48 02 18 4D */	bl __dt__5CNodeFv
.L_803EFD40:
/* 803EFD40 003ECC80  34 1E 00 98 */	addic. r0, r30, 0x98
/* 803EFD44 003ECC84  41 82 00 6C */	beq .L_803EFDB0
/* 803EFD48 003ECC88  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EFD4C 003ECC8C  34 1E 00 B8 */	addic. r0, r30, 0xb8
/* 803EFD50 003ECC90  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EFD54 003ECC94  90 1E 00 98 */	stw r0, 0x98(r30)
/* 803EFD58 003ECC98  41 82 00 10 */	beq .L_803EFD68
/* 803EFD5C 003ECC9C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EFD60 003ECCA0  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EFD64 003ECCA4  90 1E 00 B8 */	stw r0, 0xb8(r30)
.L_803EFD68:
/* 803EFD68 003ECCA8  34 1E 00 98 */	addic. r0, r30, 0x98
/* 803EFD6C 003ECCAC  41 82 00 44 */	beq .L_803EFDB0
/* 803EFD70 003ECCB0  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFD74 003ECCB4  34 1E 00 98 */	addic. r0, r30, 0x98
/* 803EFD78 003ECCB8  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFD7C 003ECCBC  90 1E 00 98 */	stw r0, 0x98(r30)
/* 803EFD80 003ECCC0  41 82 00 30 */	beq .L_803EFDB0
/* 803EFD84 003ECCC4  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFD88 003ECCC8  34 1E 00 98 */	addic. r0, r30, 0x98
/* 803EFD8C 003ECCCC  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFD90 003ECCD0  90 1E 00 98 */	stw r0, 0x98(r30)
/* 803EFD94 003ECCD4  41 82 00 1C */	beq .L_803EFDB0
/* 803EFD98 003ECCD8  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFD9C 003ECCDC  38 7E 00 98 */	addi r3, r30, 0x98
/* 803EFDA0 003ECCE0  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFDA4 003ECCE4  38 80 00 00 */	li r4, 0
/* 803EFDA8 003ECCE8  90 1E 00 98 */	stw r0, 0x98(r30)
/* 803EFDAC 003ECCEC  48 02 17 DD */	bl __dt__5CNodeFv
.L_803EFDB0:
/* 803EFDB0 003ECCF0  34 1E 00 5C */	addic. r0, r30, 0x5c
/* 803EFDB4 003ECCF4  41 82 00 6C */	beq .L_803EFE20
/* 803EFDB8 003ECCF8  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EFDBC 003ECCFC  34 1E 00 7C */	addic. r0, r30, 0x7c
/* 803EFDC0 003ECD00  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EFDC4 003ECD04  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803EFDC8 003ECD08  41 82 00 10 */	beq .L_803EFDD8
/* 803EFDCC 003ECD0C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EFDD0 003ECD10  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EFDD4 003ECD14  90 1E 00 7C */	stw r0, 0x7c(r30)
.L_803EFDD8:
/* 803EFDD8 003ECD18  34 1E 00 5C */	addic. r0, r30, 0x5c
/* 803EFDDC 003ECD1C  41 82 00 44 */	beq .L_803EFE20
/* 803EFDE0 003ECD20  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFDE4 003ECD24  34 1E 00 5C */	addic. r0, r30, 0x5c
/* 803EFDE8 003ECD28  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFDEC 003ECD2C  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803EFDF0 003ECD30  41 82 00 30 */	beq .L_803EFE20
/* 803EFDF4 003ECD34  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFDF8 003ECD38  34 1E 00 5C */	addic. r0, r30, 0x5c
/* 803EFDFC 003ECD3C  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFE00 003ECD40  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803EFE04 003ECD44  41 82 00 1C */	beq .L_803EFE20
/* 803EFE08 003ECD48  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFE0C 003ECD4C  38 7E 00 5C */	addi r3, r30, 0x5c
/* 803EFE10 003ECD50  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFE14 003ECD54  38 80 00 00 */	li r4, 0
/* 803EFE18 003ECD58  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803EFE1C 003ECD5C  48 02 17 6D */	bl __dt__5CNodeFv
.L_803EFE20:
/* 803EFE20 003ECD60  34 1E 00 20 */	addic. r0, r30, 0x20
/* 803EFE24 003ECD64  41 82 00 6C */	beq .L_803EFE90
/* 803EFE28 003ECD68  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EFE2C 003ECD6C  34 1E 00 40 */	addic. r0, r30, 0x40
/* 803EFE30 003ECD70  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EFE34 003ECD74  90 1E 00 20 */	stw r0, 0x20(r30)
/* 803EFE38 003ECD78  41 82 00 10 */	beq .L_803EFE48
/* 803EFE3C 003ECD7C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EFE40 003ECD80  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EFE44 003ECD84  90 1E 00 40 */	stw r0, 0x40(r30)
.L_803EFE48:
/* 803EFE48 003ECD88  34 1E 00 20 */	addic. r0, r30, 0x20
/* 803EFE4C 003ECD8C  41 82 00 44 */	beq .L_803EFE90
/* 803EFE50 003ECD90  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFE54 003ECD94  34 1E 00 20 */	addic. r0, r30, 0x20
/* 803EFE58 003ECD98  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFE5C 003ECD9C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 803EFE60 003ECDA0  41 82 00 30 */	beq .L_803EFE90
/* 803EFE64 003ECDA4  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFE68 003ECDA8  34 1E 00 20 */	addic. r0, r30, 0x20
/* 803EFE6C 003ECDAC  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFE70 003ECDB0  90 1E 00 20 */	stw r0, 0x20(r30)
/* 803EFE74 003ECDB4  41 82 00 1C */	beq .L_803EFE90
/* 803EFE78 003ECDB8  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFE7C 003ECDBC  38 7E 00 20 */	addi r3, r30, 0x20
/* 803EFE80 003ECDC0  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFE84 003ECDC4  38 80 00 00 */	li r4, 0
/* 803EFE88 003ECDC8  90 1E 00 20 */	stw r0, 0x20(r30)
/* 803EFE8C 003ECDCC  48 02 16 FD */	bl __dt__5CNodeFv
.L_803EFE90:
/* 803EFE90 003ECDD0  7F E0 07 35 */	extsh. r0, r31
/* 803EFE94 003ECDD4  40 81 00 0C */	ble .L_803EFEA0
/* 803EFE98 003ECDD8  7F C3 F3 78 */	mr r3, r30
/* 803EFE9C 003ECDDC  4B C3 42 19 */	bl __dl__FPv
.L_803EFEA0:
/* 803EFEA0 003ECDE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EFEA4 003ECDE4  7F C3 F3 78 */	mr r3, r30
/* 803EFEA8 003ECDE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EFEAC 003ECDEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803EFEB0 003ECDF0  7C 08 03 A6 */	mtlr r0
/* 803EFEB4 003ECDF4  38 21 00 10 */	addi r1, r1, 0x10
/* 803EFEB8 003ECDF8  4E 80 00 20 */	blr 
.endfn __dt__Q33ebi6Screen11TOmakeCardEFv

.fn __dt__Q33ebi6Screen6TOmakeFv, weak
/* 803EFEBC 003ECDFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EFEC0 003ECE00  7C 08 02 A6 */	mflr r0
/* 803EFEC4 003ECE04  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EFEC8 003ECE08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EFECC 003ECE0C  7C 9F 23 78 */	mr r31, r4
/* 803EFED0 003ECE10  93 C1 00 08 */	stw r30, 8(r1)
/* 803EFED4 003ECE14  7C 7E 1B 79 */	or. r30, r3, r3
/* 803EFED8 003ECE18  41 82 01 D0 */	beq .L_803F00A8
/* 803EFEDC 003ECE1C  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen6TOmake@ha
/* 803EFEE0 003ECE20  3C 80 80 3D */	lis r4, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@ha
/* 803EFEE4 003ECE24  38 03 A1 B4 */	addi r0, r3, __vt__Q33ebi6Screen6TOmake@l
/* 803EFEE8 003ECE28  38 A0 00 4C */	li r5, 0x4c
/* 803EFEEC 003ECE2C  90 1E 00 00 */	stw r0, 0(r30)
/* 803EFEF0 003ECE30  38 7E 01 E4 */	addi r3, r30, 0x1e4
/* 803EFEF4 003ECE34  38 84 FE 5C */	addi r4, r4, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@l
/* 803EFEF8 003ECE38  38 C0 00 07 */	li r6, 7
/* 803EFEFC 003ECE3C  4B CD 18 C9 */	bl __destroy_arr
/* 803EFF00 003ECE40  34 1E 01 78 */	addic. r0, r30, 0x178
/* 803EFF04 003ECE44  41 82 00 58 */	beq .L_803EFF5C
/* 803EFF08 003ECE48  3C 60 80 4F */	lis r3, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
/* 803EFF0C 003ECE4C  34 1E 01 78 */	addic. r0, r30, 0x178
/* 803EFF10 003ECE50  38 03 89 E8 */	addi r0, r3, __vt__Q23ebi24E2DCallBack_WindowCursor@l
/* 803EFF14 003ECE54  90 1E 01 78 */	stw r0, 0x178(r30)
/* 803EFF18 003ECE58  41 82 00 44 */	beq .L_803EFF5C
/* 803EFF1C 003ECE5C  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFF20 003ECE60  34 1E 01 78 */	addic. r0, r30, 0x178
/* 803EFF24 003ECE64  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFF28 003ECE68  90 1E 01 78 */	stw r0, 0x178(r30)
/* 803EFF2C 003ECE6C  41 82 00 30 */	beq .L_803EFF5C
/* 803EFF30 003ECE70  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFF34 003ECE74  34 1E 01 78 */	addic. r0, r30, 0x178
/* 803EFF38 003ECE78  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFF3C 003ECE7C  90 1E 01 78 */	stw r0, 0x178(r30)
/* 803EFF40 003ECE80  41 82 00 1C */	beq .L_803EFF5C
/* 803EFF44 003ECE84  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFF48 003ECE88  38 7E 01 78 */	addi r3, r30, 0x178
/* 803EFF4C 003ECE8C  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFF50 003ECE90  38 80 00 00 */	li r4, 0
/* 803EFF54 003ECE94  90 1E 01 78 */	stw r0, 0x178(r30)
/* 803EFF58 003ECE98  48 02 16 31 */	bl __dt__5CNodeFv
.L_803EFF5C:
/* 803EFF5C 003ECE9C  34 1E 01 58 */	addic. r0, r30, 0x158
/* 803EFF60 003ECEA0  41 82 00 58 */	beq .L_803EFFB8
/* 803EFF64 003ECEA4  3C 60 80 4F */	lis r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803EFF68 003ECEA8  34 1E 01 58 */	addic. r0, r30, 0x158
/* 803EFF6C 003ECEAC  38 03 88 0C */	addi r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803EFF70 003ECEB0  90 1E 01 58 */	stw r0, 0x158(r30)
/* 803EFF74 003ECEB4  41 82 00 44 */	beq .L_803EFFB8
/* 803EFF78 003ECEB8  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFF7C 003ECEBC  34 1E 01 58 */	addic. r0, r30, 0x158
/* 803EFF80 003ECEC0  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFF84 003ECEC4  90 1E 01 58 */	stw r0, 0x158(r30)
/* 803EFF88 003ECEC8  41 82 00 30 */	beq .L_803EFFB8
/* 803EFF8C 003ECECC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803EFF90 003ECED0  34 1E 01 58 */	addic. r0, r30, 0x158
/* 803EFF94 003ECED4  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803EFF98 003ECED8  90 1E 01 58 */	stw r0, 0x158(r30)
/* 803EFF9C 003ECEDC  41 82 00 1C */	beq .L_803EFFB8
/* 803EFFA0 003ECEE0  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803EFFA4 003ECEE4  38 7E 01 58 */	addi r3, r30, 0x158
/* 803EFFA8 003ECEE8  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803EFFAC 003ECEEC  38 80 00 00 */	li r4, 0
/* 803EFFB0 003ECEF0  90 1E 01 58 */	stw r0, 0x158(r30)
/* 803EFFB4 003ECEF4  48 02 15 D5 */	bl __dt__5CNodeFv
.L_803EFFB8:
/* 803EFFB8 003ECEF8  34 1E 01 1C */	addic. r0, r30, 0x11c
/* 803EFFBC 003ECEFC  41 82 00 6C */	beq .L_803F0028
/* 803EFFC0 003ECF00  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803EFFC4 003ECF04  34 1E 01 3C */	addic. r0, r30, 0x13c
/* 803EFFC8 003ECF08  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803EFFCC 003ECF0C  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 803EFFD0 003ECF10  41 82 00 10 */	beq .L_803EFFE0
/* 803EFFD4 003ECF14  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803EFFD8 003ECF18  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803EFFDC 003ECF1C  90 1E 01 3C */	stw r0, 0x13c(r30)
.L_803EFFE0:
/* 803EFFE0 003ECF20  34 1E 01 1C */	addic. r0, r30, 0x11c
/* 803EFFE4 003ECF24  41 82 00 44 */	beq .L_803F0028
/* 803EFFE8 003ECF28  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803EFFEC 003ECF2C  34 1E 01 1C */	addic. r0, r30, 0x11c
/* 803EFFF0 003ECF30  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803EFFF4 003ECF34  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 803EFFF8 003ECF38  41 82 00 30 */	beq .L_803F0028
/* 803EFFFC 003ECF3C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803F0000 003ECF40  34 1E 01 1C */	addic. r0, r30, 0x11c
/* 803F0004 003ECF44  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803F0008 003ECF48  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 803F000C 003ECF4C  41 82 00 1C */	beq .L_803F0028
/* 803F0010 003ECF50  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803F0014 003ECF54  38 7E 01 1C */	addi r3, r30, 0x11c
/* 803F0018 003ECF58  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803F001C 003ECF5C  38 80 00 00 */	li r4, 0
/* 803F0020 003ECF60  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 803F0024 003ECF64  48 02 15 65 */	bl __dt__5CNodeFv
.L_803F0028:
/* 803F0028 003ECF68  34 1E 00 E0 */	addic. r0, r30, 0xe0
/* 803F002C 003ECF6C  41 82 00 6C */	beq .L_803F0098
/* 803F0030 003ECF70  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803F0034 003ECF74  34 1E 01 00 */	addic. r0, r30, 0x100
/* 803F0038 003ECF78  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803F003C 003ECF7C  90 1E 00 E0 */	stw r0, 0xe0(r30)
/* 803F0040 003ECF80  41 82 00 10 */	beq .L_803F0050
/* 803F0044 003ECF84  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803F0048 003ECF88  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803F004C 003ECF8C  90 1E 01 00 */	stw r0, 0x100(r30)
.L_803F0050:
/* 803F0050 003ECF90  34 1E 00 E0 */	addic. r0, r30, 0xe0
/* 803F0054 003ECF94  41 82 00 44 */	beq .L_803F0098
/* 803F0058 003ECF98  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803F005C 003ECF9C  34 1E 00 E0 */	addic. r0, r30, 0xe0
/* 803F0060 003ECFA0  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803F0064 003ECFA4  90 1E 00 E0 */	stw r0, 0xe0(r30)
/* 803F0068 003ECFA8  41 82 00 30 */	beq .L_803F0098
/* 803F006C 003ECFAC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803F0070 003ECFB0  34 1E 00 E0 */	addic. r0, r30, 0xe0
/* 803F0074 003ECFB4  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803F0078 003ECFB8  90 1E 00 E0 */	stw r0, 0xe0(r30)
/* 803F007C 003ECFBC  41 82 00 1C */	beq .L_803F0098
/* 803F0080 003ECFC0  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803F0084 003ECFC4  38 7E 00 E0 */	addi r3, r30, 0xe0
/* 803F0088 003ECFC8  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803F008C 003ECFCC  38 80 00 00 */	li r4, 0
/* 803F0090 003ECFD0  90 1E 00 E0 */	stw r0, 0xe0(r30)
/* 803F0094 003ECFD4  48 02 14 F5 */	bl __dt__5CNodeFv
.L_803F0098:
/* 803F0098 003ECFD8  7F E0 07 35 */	extsh. r0, r31
/* 803F009C 003ECFDC  40 81 00 0C */	ble .L_803F00A8
/* 803F00A0 003ECFE0  7F C3 F3 78 */	mr r3, r30
/* 803F00A4 003ECFE4  4B C3 40 11 */	bl __dl__FPv
.L_803F00A8:
/* 803F00A8 003ECFE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F00AC 003ECFEC  7F C3 F3 78 */	mr r3, r30
/* 803F00B0 003ECFF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F00B4 003ECFF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F00B8 003ECFF8  7C 08 03 A6 */	mtlr r0
/* 803F00BC 003ECFFC  38 21 00 10 */	addi r1, r1, 0x10
/* 803F00C0 003ED000  4E 80 00 20 */	blr 
.endfn __dt__Q33ebi6Screen6TOmakeFv

.fn "init__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgrPQ24Game8StateArg", weak
/* 803F00C4 003ED004  4E 80 00 20 */	blr 
.endfn "init__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgrPQ24Game8StateArg"

.fn "exec__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr", weak
/* 803F00C8 003ED008  4E 80 00 20 */	blr 
.endfn "exec__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"

.fn "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr", weak
/* 803F00CC 003ED00C  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"

.fn "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr", weak
/* 803F00D0 003ED010  4E 80 00 20 */	blr 
.endfn "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"

.fn "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr", weak
/* 803F00D4 003ED014  4E 80 00 20 */	blr 
.endfn "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"

.fn "init__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr", weak
/* 803F00D8 003ED018  4E 80 00 20 */	blr 
.endfn "init__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"

.fn "exec__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr", weak
/* 803F00DC 003ED01C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F00E0 003ED020  7C 08 02 A6 */	mflr r0
/* 803F00E4 003ED024  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F00E8 003ED028  80 64 08 B8 */	lwz r3, 0x8b8(r4)
/* 803F00EC 003ED02C  28 03 00 00 */	cmplwi r3, 0
/* 803F00F0 003ED030  41 82 00 14 */	beq .L_803F0104
/* 803F00F4 003ED034  81 83 00 00 */	lwz r12, 0(r3)
/* 803F00F8 003ED038  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803F00FC 003ED03C  7D 89 03 A6 */	mtctr r12
/* 803F0100 003ED040  4E 80 04 21 */	bctrl 
.L_803F0104:
/* 803F0104 003ED044  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F0108 003ED048  7C 08 03 A6 */	mtlr r0
/* 803F010C 003ED04C  38 21 00 10 */	addi r1, r1, 0x10
/* 803F0110 003ED050  4E 80 00 20 */	blr 
.endfn "exec__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"

.fn "create__Q24Game31StateMachine<Q33ebi5Omake4TMgr>Fi", weak
/* 803F0114 003ED054  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F0118 003ED058  7C 08 02 A6 */	mflr r0
/* 803F011C 003ED05C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F0120 003ED060  38 00 00 00 */	li r0, 0
/* 803F0124 003ED064  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F0128 003ED068  7C 7F 1B 78 */	mr r31, r3
/* 803F012C 003ED06C  90 83 00 0C */	stw r4, 0xc(r3)
/* 803F0130 003ED070  90 03 00 08 */	stw r0, 8(r3)
/* 803F0134 003ED074  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803F0138 003ED078  54 03 10 3A */	slwi r3, r0, 2
/* 803F013C 003ED07C  4B C3 3E 71 */	bl __nwa__FUl
/* 803F0140 003ED080  90 7F 00 04 */	stw r3, 4(r31)
/* 803F0144 003ED084  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803F0148 003ED088  54 03 10 3A */	slwi r3, r0, 2
/* 803F014C 003ED08C  4B C3 3E 61 */	bl __nwa__FUl
/* 803F0150 003ED090  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803F0154 003ED094  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803F0158 003ED098  54 03 10 3A */	slwi r3, r0, 2
/* 803F015C 003ED09C  4B C3 3E 51 */	bl __nwa__FUl
/* 803F0160 003ED0A0  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803F0164 003ED0A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F0168 003ED0A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F016C 003ED0AC  7C 08 03 A6 */	mtlr r0
/* 803F0170 003ED0B0  38 21 00 10 */	addi r1, r1, 0x10
/* 803F0174 003ED0B4  4E 80 00 20 */	blr 
.endfn "create__Q24Game31StateMachine<Q33ebi5Omake4TMgr>Fi"

.fn "transit__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg", weak
/* 803F0178 003ED0B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803F017C 003ED0BC  7C 08 02 A6 */	mflr r0
/* 803F0180 003ED0C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803F0184 003ED0C4  54 A0 10 3A */	slwi r0, r5, 2
/* 803F0188 003ED0C8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803F018C 003ED0CC  7C 7B 1B 78 */	mr r27, r3
/* 803F0190 003ED0D0  7C 9C 23 78 */	mr r28, r4
/* 803F0194 003ED0D4  7C DD 33 78 */	mr r29, r6
/* 803F0198 003ED0D8  83 C4 08 B8 */	lwz r30, 0x8b8(r4)
/* 803F019C 003ED0DC  80 63 00 14 */	lwz r3, 0x14(r3)
/* 803F01A0 003ED0E0  28 1E 00 00 */	cmplwi r30, 0
/* 803F01A4 003ED0E4  7F E3 00 2E */	lwzx r31, r3, r0
/* 803F01A8 003ED0E8  41 82 00 20 */	beq .L_803F01C8
/* 803F01AC 003ED0EC  7F C3 F3 78 */	mr r3, r30
/* 803F01B0 003ED0F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803F01B4 003ED0F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803F01B8 003ED0F8  7D 89 03 A6 */	mtctr r12
/* 803F01BC 003ED0FC  4E 80 04 21 */	bctrl 
/* 803F01C0 003ED100  80 1E 00 04 */	lwz r0, 4(r30)
/* 803F01C4 003ED104  90 1B 00 18 */	stw r0, 0x18(r27)
.L_803F01C8:
/* 803F01C8 003ED108  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 803F01CC 003ED10C  7C 1F 00 00 */	cmpw r31, r0
/* 803F01D0 003ED110  41 80 00 08 */	blt .L_803F01D8
.L_803F01D4:
/* 803F01D4 003ED114  48 00 00 00 */	b .L_803F01D4
.L_803F01D8:
/* 803F01D8 003ED118  80 7B 00 04 */	lwz r3, 4(r27)
/* 803F01DC 003ED11C  57 E0 10 3A */	slwi r0, r31, 2
/* 803F01E0 003ED120  7F 84 E3 78 */	mr r4, r28
/* 803F01E4 003ED124  7F A5 EB 78 */	mr r5, r29
/* 803F01E8 003ED128  7C 63 00 2E */	lwzx r3, r3, r0
/* 803F01EC 003ED12C  90 7C 08 B8 */	stw r3, 0x8b8(r28)
/* 803F01F0 003ED130  81 83 00 00 */	lwz r12, 0(r3)
/* 803F01F4 003ED134  81 8C 00 08 */	lwz r12, 8(r12)
/* 803F01F8 003ED138  7D 89 03 A6 */	mtctr r12
/* 803F01FC 003ED13C  4E 80 04 21 */	bctrl 
/* 803F0200 003ED140  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803F0204 003ED144  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803F0208 003ED148  7C 08 03 A6 */	mtlr r0
/* 803F020C 003ED14C  38 21 00 20 */	addi r1, r1, 0x20
/* 803F0210 003ED150  4E 80 00 20 */	blr 
.endfn "transit__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"

.fn "registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>", weak
/* 803F0214 003ED154  80 C3 00 08 */	lwz r6, 8(r3)
/* 803F0218 003ED158  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803F021C 003ED15C  7C 06 00 00 */	cmpw r6, r0
/* 803F0220 003ED160  4C 80 00 20 */	bgelr 
/* 803F0224 003ED164  80 A3 00 04 */	lwz r5, 4(r3)
/* 803F0228 003ED168  54 C0 10 3A */	slwi r0, r6, 2
/* 803F022C 003ED16C  7C 85 01 2E */	stwx r4, r5, r0
/* 803F0230 003ED170  80 A4 00 04 */	lwz r5, 4(r4)
/* 803F0234 003ED174  2C 05 00 00 */	cmpwi r5, 0
/* 803F0238 003ED178  41 80 00 10 */	blt .L_803F0248
/* 803F023C 003ED17C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803F0240 003ED180  7C 05 00 00 */	cmpw r5, r0
/* 803F0244 003ED184  41 80 00 0C */	blt .L_803F0250
.L_803F0248:
/* 803F0248 003ED188  38 00 00 00 */	li r0, 0
/* 803F024C 003ED18C  48 00 00 08 */	b .L_803F0254
.L_803F0250:
/* 803F0250 003ED190  38 00 00 01 */	li r0, 1
.L_803F0254:
/* 803F0254 003ED194  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803F0258 003ED198  4D 82 00 20 */	beqlr 
/* 803F025C 003ED19C  90 64 00 08 */	stw r3, 8(r4)
/* 803F0260 003ED1A0  80 03 00 08 */	lwz r0, 8(r3)
/* 803F0264 003ED1A4  80 C4 00 04 */	lwz r6, 4(r4)
/* 803F0268 003ED1A8  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 803F026C 003ED1AC  54 00 10 3A */	slwi r0, r0, 2
/* 803F0270 003ED1B0  7C C5 01 2E */	stwx r6, r5, r0
/* 803F0274 003ED1B4  80 04 00 04 */	lwz r0, 4(r4)
/* 803F0278 003ED1B8  80 A3 00 08 */	lwz r5, 8(r3)
/* 803F027C 003ED1BC  80 83 00 14 */	lwz r4, 0x14(r3)
/* 803F0280 003ED1C0  54 00 10 3A */	slwi r0, r0, 2
/* 803F0284 003ED1C4  7C A4 01 2E */	stwx r5, r4, r0
/* 803F0288 003ED1C8  80 83 00 08 */	lwz r4, 8(r3)
/* 803F028C 003ED1CC  38 04 00 01 */	addi r0, r4, 1
/* 803F0290 003ED1D0  90 03 00 08 */	stw r0, 8(r3)
/* 803F0294 003ED1D4  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"

.section .text, "ax", unique, 3
.fn getName__Q33ebi6Screen12ArgOpenOmakeFv, weak
/* 803F0298 003ED1D8  3C 60 80 49 */	lis r3, lbl_80497B30@ha
/* 803F029C 003ED1DC  38 63 7B 30 */	addi r3, r3, lbl_80497B30@l
/* 803F02A0 003ED1E0  4E 80 00 20 */	blr 
.endfn getName__Q33ebi6Screen12ArgOpenOmakeFv
