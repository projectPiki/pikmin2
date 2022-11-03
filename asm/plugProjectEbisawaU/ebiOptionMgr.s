.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_804965A0:
	.asciz "ebiOptionMgr"
.balign 4
lbl_804965B0:
	.asciz "LoadOption"
.balign 4
lbl_804965BC:
	.asciz "ScreenOpen"
.balign 4
lbl_804965C8:
	.asciz "ScreenWait"
.balign 4
lbl_804965D4:
	.asciz "ScreenClose"
.balign 4
lbl_804965E0:
	.asciz "WaitCloseForNoCard"
.balign 4
lbl_804965F4:
	.asciz "WorldMapInfoWindow"
.balign 4
lbl_80496608:
	.asciz "ebiOptionMgr.cpp"
.balign 4
lbl_8049661C:
	.asciz "fail to memory card Request even if finish task\n"
.balign 4
lbl_80496650:
	.asciz "Option::TMgr::loadResource"
.balign 4
lbl_8049666C:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q33ebi6Screen20TScreenBaseInterface
__vt__Q33ebi6Screen20TScreenBaseInterface:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.global __vt__Q23ebi25E2DCallBack_CalcAnimation
__vt__Q23ebi25E2DCallBack_CalcAnimation:
	.4byte 0
	.4byte 0
	.4byte __dt__Q23ebi25E2DCallBack_CalcAnimationFv
	.4byte getChildCount__5CNodeFv
	.4byte update__Q23ebi16E2DCallBack_BaseFv
	.4byte draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
	.4byte doInit__Q29P2DScreen4NodeFv
	.4byte do_update__Q23ebi25E2DCallBack_CalcAnimationFv
	.4byte do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
.global __vt__Q23ebi16E2DCallBack_Base
__vt__Q23ebi16E2DCallBack_Base:
	.4byte 0
	.4byte 0
	.4byte __dt__Q23ebi16E2DCallBack_BaseFv
	.4byte getChildCount__5CNodeFv
	.4byte update__Q23ebi16E2DCallBack_BaseFv
	.4byte draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
	.4byte doInit__Q29P2DScreen4NodeFv
	.4byte do_update__Q23ebi16E2DCallBack_BaseFv
	.4byte do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
.global "__vt__Q24Game32StateMachine<Q33ebi6Option4TMgr>"
"__vt__Q24Game32StateMachine<Q33ebi6Option4TMgr>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "start__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
.global __vt__Q33ebi6Option16FSMState_SaveMgr
__vt__Q33ebi6Option16FSMState_SaveMgr:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
	.4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi6Option16FSMState_SaveMgrFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi6Option16FSMState_SaveMgrFPQ33ebi6Option4TMgr
.global __vt__Q33ebi6Option19FSMState_LoadOption
__vt__Q33ebi6Option19FSMState_LoadOption:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
	.4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi6Option19FSMState_LoadOptionFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi6Option19FSMState_LoadOptionFPQ33ebi6Option4TMgr
.global __vt__Q33ebi6Option27FSMState_WorldMapInfoWindow
__vt__Q33ebi6Option27FSMState_WorldMapInfoWindow:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
	.4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi6Option27FSMState_WorldMapInfoWindowFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi6Option27FSMState_WorldMapInfoWindowFPQ33ebi6Option4TMgr
.global __vt__Q33ebi6Option27FSMState_WaitCloseForNoCard
__vt__Q33ebi6Option27FSMState_WaitCloseForNoCard:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
	.4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi6Option27FSMState_WaitCloseForNoCardFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi6Option27FSMState_WaitCloseForNoCardFPQ33ebi6Option4TMgr
.global __vt__Q33ebi6Option20FSMState_ScreenClose
__vt__Q33ebi6Option20FSMState_ScreenClose:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
	.4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi6Option20FSMState_ScreenCloseFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi6Option20FSMState_ScreenCloseFPQ33ebi6Option4TMgr
.global __vt__Q33ebi6Option19FSMState_ScreenWait
__vt__Q33ebi6Option19FSMState_ScreenWait:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
	.4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi6Option19FSMState_ScreenWaitFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi6Option19FSMState_ScreenWaitFPQ33ebi6Option4TMgr
.global __vt__Q33ebi6Option19FSMState_ScreenOpen
__vt__Q33ebi6Option19FSMState_ScreenOpen:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
	.4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi6Option19FSMState_ScreenOpenFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi6Option19FSMState_ScreenOpenFPQ33ebi6Option4TMgr
.global __vt__Q33ebi6Option8FSMState
__vt__Q33ebi6Option8FSMState:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
	.4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
.global "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"
"__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgrPQ24Game8StateArg"
	.4byte "exec__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
.global __vt__Q33ebi6Option15FSMStateMachine
__vt__Q33ebi6Option15FSMStateMachine:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi6Option15FSMStateMachineFPQ33ebi6Option4TMgr
	.4byte "start__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
	.4byte "transit__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051FA78:
	.asciz "Standby"
.balign 4
lbl_8051FA80:
	.asciz "SaveMgr"
.balign 4
lbl_8051FA88:
	.float 1.0
lbl_8051FA8C:
	.float 0.0
lbl_8051FA90:
	.float 0.03333

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q33ebi6Option15FSMStateMachineFPQ33ebi6Option4TMgr
init__Q33ebi6Option15FSMStateMachineFPQ33ebi6Option4TMgr:
/* 803CE8F8 003CB838  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CE8FC 003CB83C  7C 08 02 A6 */	mflr r0
/* 803CE900 003CB840  3C 80 80 49 */	lis r4, lbl_804965A0@ha
/* 803CE904 003CB844  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CE908 003CB848  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CE90C 003CB84C  3B E4 65 A0 */	addi r31, r4, lbl_804965A0@l
/* 803CE910 003CB850  38 80 00 08 */	li r4, 8
/* 803CE914 003CB854  93 C1 00 08 */	stw r30, 8(r1)
/* 803CE918 003CB858  7C 7E 1B 78 */	mr r30, r3
/* 803CE91C 003CB85C  48 00 1B ED */	bl "create__Q24Game32StateMachine<Q33ebi6Option4TMgr>Fi"
/* 803CE920 003CB860  38 60 00 10 */	li r3, 0x10
/* 803CE924 003CB864  4B C5 55 81 */	bl __nw__FUl
/* 803CE928 003CB868  7C 64 1B 79 */	or. r4, r3, r3
/* 803CE92C 003CB86C  41 82 00 30 */	beq .L_803CE95C
/* 803CE930 003CB870  3C A0 80 4F */	lis r5, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
/* 803CE934 003CB874  3C 60 80 4F */	lis r3, __vt__Q33ebi6Option8FSMState@ha
/* 803CE938 003CB878  38 05 89 AC */	addi r0, r5, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
/* 803CE93C 003CB87C  38 A0 00 00 */	li r5, 0
/* 803CE940 003CB880  90 04 00 00 */	stw r0, 0(r4)
/* 803CE944 003CB884  38 63 89 84 */	addi r3, r3, __vt__Q33ebi6Option8FSMState@l
/* 803CE948 003CB888  38 02 17 18 */	addi r0, r2, lbl_8051FA78@sda21
/* 803CE94C 003CB88C  90 A4 00 04 */	stw r5, 4(r4)
/* 803CE950 003CB890  90 A4 00 08 */	stw r5, 8(r4)
/* 803CE954 003CB894  90 64 00 00 */	stw r3, 0(r4)
/* 803CE958 003CB898  90 04 00 0C */	stw r0, 0xc(r4)
.L_803CE95C:
/* 803CE95C 003CB89C  7F C3 F3 78 */	mr r3, r30
/* 803CE960 003CB8A0  48 00 1C A9 */	bl "registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
/* 803CE964 003CB8A4  38 60 00 14 */	li r3, 0x14
/* 803CE968 003CB8A8  4B C5 55 3D */	bl __nw__FUl
/* 803CE96C 003CB8AC  7C 64 1B 79 */	or. r4, r3, r3
/* 803CE970 003CB8B0  41 82 00 40 */	beq .L_803CE9B0
/* 803CE974 003CB8B4  3C 60 80 4F */	lis r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
/* 803CE978 003CB8B8  3C A0 80 4F */	lis r5, __vt__Q33ebi6Option8FSMState@ha
/* 803CE97C 003CB8BC  38 03 89 AC */	addi r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
/* 803CE980 003CB8C0  3C 60 80 4F */	lis r3, __vt__Q33ebi6Option19FSMState_LoadOption@ha
/* 803CE984 003CB8C4  90 04 00 00 */	stw r0, 0(r4)
/* 803CE988 003CB8C8  38 00 00 01 */	li r0, 1
/* 803CE98C 003CB8CC  38 E0 00 00 */	li r7, 0
/* 803CE990 003CB8D0  38 C5 89 84 */	addi r6, r5, __vt__Q33ebi6Option8FSMState@l
/* 803CE994 003CB8D4  90 04 00 04 */	stw r0, 4(r4)
/* 803CE998 003CB8D8  38 BF 00 10 */	addi r5, r31, 0x10
/* 803CE99C 003CB8DC  38 03 88 94 */	addi r0, r3, __vt__Q33ebi6Option19FSMState_LoadOption@l
/* 803CE9A0 003CB8E0  90 E4 00 08 */	stw r7, 8(r4)
/* 803CE9A4 003CB8E4  90 C4 00 00 */	stw r6, 0(r4)
/* 803CE9A8 003CB8E8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803CE9AC 003CB8EC  90 04 00 00 */	stw r0, 0(r4)
.L_803CE9B0:
/* 803CE9B0 003CB8F0  7F C3 F3 78 */	mr r3, r30
/* 803CE9B4 003CB8F4  48 00 1C 55 */	bl "registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
/* 803CE9B8 003CB8F8  38 60 00 10 */	li r3, 0x10
/* 803CE9BC 003CB8FC  4B C5 54 E9 */	bl __nw__FUl
/* 803CE9C0 003CB900  7C 64 1B 79 */	or. r4, r3, r3
/* 803CE9C4 003CB904  41 82 00 40 */	beq .L_803CEA04
/* 803CE9C8 003CB908  3C 60 80 4F */	lis r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
/* 803CE9CC 003CB90C  3C A0 80 4F */	lis r5, __vt__Q33ebi6Option8FSMState@ha
/* 803CE9D0 003CB910  38 03 89 AC */	addi r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
/* 803CE9D4 003CB914  3C 60 80 4F */	lis r3, __vt__Q33ebi6Option19FSMState_ScreenOpen@ha
/* 803CE9D8 003CB918  90 04 00 00 */	stw r0, 0(r4)
/* 803CE9DC 003CB91C  38 00 00 02 */	li r0, 2
/* 803CE9E0 003CB920  38 E0 00 00 */	li r7, 0
/* 803CE9E4 003CB924  38 C5 89 84 */	addi r6, r5, __vt__Q33ebi6Option8FSMState@l
/* 803CE9E8 003CB928  90 04 00 04 */	stw r0, 4(r4)
/* 803CE9EC 003CB92C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 803CE9F0 003CB930  38 03 89 5C */	addi r0, r3, __vt__Q33ebi6Option19FSMState_ScreenOpen@l
/* 803CE9F4 003CB934  90 E4 00 08 */	stw r7, 8(r4)
/* 803CE9F8 003CB938  90 C4 00 00 */	stw r6, 0(r4)
/* 803CE9FC 003CB93C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803CEA00 003CB940  90 04 00 00 */	stw r0, 0(r4)
.L_803CEA04:
/* 803CEA04 003CB944  7F C3 F3 78 */	mr r3, r30
/* 803CEA08 003CB948  48 00 1C 01 */	bl "registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
/* 803CEA0C 003CB94C  38 60 00 10 */	li r3, 0x10
/* 803CEA10 003CB950  4B C5 54 95 */	bl __nw__FUl
/* 803CEA14 003CB954  7C 64 1B 79 */	or. r4, r3, r3
/* 803CEA18 003CB958  41 82 00 40 */	beq .L_803CEA58
/* 803CEA1C 003CB95C  3C 60 80 4F */	lis r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
/* 803CEA20 003CB960  3C A0 80 4F */	lis r5, __vt__Q33ebi6Option8FSMState@ha
/* 803CEA24 003CB964  38 03 89 AC */	addi r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
/* 803CEA28 003CB968  3C 60 80 4F */	lis r3, __vt__Q33ebi6Option19FSMState_ScreenWait@ha
/* 803CEA2C 003CB96C  90 04 00 00 */	stw r0, 0(r4)
/* 803CEA30 003CB970  38 00 00 03 */	li r0, 3
/* 803CEA34 003CB974  38 E0 00 00 */	li r7, 0
/* 803CEA38 003CB978  38 C5 89 84 */	addi r6, r5, __vt__Q33ebi6Option8FSMState@l
/* 803CEA3C 003CB97C  90 04 00 04 */	stw r0, 4(r4)
/* 803CEA40 003CB980  38 BF 00 28 */	addi r5, r31, 0x28
/* 803CEA44 003CB984  38 03 89 34 */	addi r0, r3, __vt__Q33ebi6Option19FSMState_ScreenWait@l
/* 803CEA48 003CB988  90 E4 00 08 */	stw r7, 8(r4)
/* 803CEA4C 003CB98C  90 C4 00 00 */	stw r6, 0(r4)
/* 803CEA50 003CB990  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803CEA54 003CB994  90 04 00 00 */	stw r0, 0(r4)
.L_803CEA58:
/* 803CEA58 003CB998  7F C3 F3 78 */	mr r3, r30
/* 803CEA5C 003CB99C  48 00 1B AD */	bl "registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
/* 803CEA60 003CB9A0  38 60 00 10 */	li r3, 0x10
/* 803CEA64 003CB9A4  4B C5 54 41 */	bl __nw__FUl
/* 803CEA68 003CB9A8  7C 64 1B 79 */	or. r4, r3, r3
/* 803CEA6C 003CB9AC  41 82 00 40 */	beq .L_803CEAAC
/* 803CEA70 003CB9B0  3C 60 80 4F */	lis r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
/* 803CEA74 003CB9B4  3C A0 80 4F */	lis r5, __vt__Q33ebi6Option8FSMState@ha
/* 803CEA78 003CB9B8  38 03 89 AC */	addi r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
/* 803CEA7C 003CB9BC  3C 60 80 4F */	lis r3, __vt__Q33ebi6Option20FSMState_ScreenClose@ha
/* 803CEA80 003CB9C0  90 04 00 00 */	stw r0, 0(r4)
/* 803CEA84 003CB9C4  38 00 00 04 */	li r0, 4
/* 803CEA88 003CB9C8  38 E0 00 00 */	li r7, 0
/* 803CEA8C 003CB9CC  38 C5 89 84 */	addi r6, r5, __vt__Q33ebi6Option8FSMState@l
/* 803CEA90 003CB9D0  90 04 00 04 */	stw r0, 4(r4)
/* 803CEA94 003CB9D4  38 BF 00 34 */	addi r5, r31, 0x34
/* 803CEA98 003CB9D8  38 03 89 0C */	addi r0, r3, __vt__Q33ebi6Option20FSMState_ScreenClose@l
/* 803CEA9C 003CB9DC  90 E4 00 08 */	stw r7, 8(r4)
/* 803CEAA0 003CB9E0  90 C4 00 00 */	stw r6, 0(r4)
/* 803CEAA4 003CB9E4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803CEAA8 003CB9E8  90 04 00 00 */	stw r0, 0(r4)
.L_803CEAAC:
/* 803CEAAC 003CB9EC  7F C3 F3 78 */	mr r3, r30
/* 803CEAB0 003CB9F0  48 00 1B 59 */	bl "registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
/* 803CEAB4 003CB9F4  38 60 00 10 */	li r3, 0x10
/* 803CEAB8 003CB9F8  4B C5 53 ED */	bl __nw__FUl
/* 803CEABC 003CB9FC  7C 64 1B 79 */	or. r4, r3, r3
/* 803CEAC0 003CBA00  41 82 00 40 */	beq .L_803CEB00
/* 803CEAC4 003CBA04  3C 60 80 4F */	lis r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
/* 803CEAC8 003CBA08  3C A0 80 4F */	lis r5, __vt__Q33ebi6Option8FSMState@ha
/* 803CEACC 003CBA0C  38 03 89 AC */	addi r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
/* 803CEAD0 003CBA10  3C 60 80 4F */	lis r3, __vt__Q33ebi6Option16FSMState_SaveMgr@ha
/* 803CEAD4 003CBA14  90 04 00 00 */	stw r0, 0(r4)
/* 803CEAD8 003CBA18  38 00 00 05 */	li r0, 5
/* 803CEADC 003CBA1C  38 E0 00 00 */	li r7, 0
/* 803CEAE0 003CBA20  38 C5 89 84 */	addi r6, r5, __vt__Q33ebi6Option8FSMState@l
/* 803CEAE4 003CBA24  90 04 00 04 */	stw r0, 4(r4)
/* 803CEAE8 003CBA28  38 A2 17 20 */	addi r5, r2, lbl_8051FA80@sda21
/* 803CEAEC 003CBA2C  38 03 88 6C */	addi r0, r3, __vt__Q33ebi6Option16FSMState_SaveMgr@l
/* 803CEAF0 003CBA30  90 E4 00 08 */	stw r7, 8(r4)
/* 803CEAF4 003CBA34  90 C4 00 00 */	stw r6, 0(r4)
/* 803CEAF8 003CBA38  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803CEAFC 003CBA3C  90 04 00 00 */	stw r0, 0(r4)
.L_803CEB00:
/* 803CEB00 003CBA40  7F C3 F3 78 */	mr r3, r30
/* 803CEB04 003CBA44  48 00 1B 05 */	bl "registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
/* 803CEB08 003CBA48  38 60 00 18 */	li r3, 0x18
/* 803CEB0C 003CBA4C  4B C5 53 99 */	bl __nw__FUl
/* 803CEB10 003CBA50  7C 64 1B 79 */	or. r4, r3, r3
/* 803CEB14 003CBA54  41 82 00 48 */	beq .L_803CEB5C
/* 803CEB18 003CBA58  3C 60 80 4F */	lis r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
/* 803CEB1C 003CBA5C  3C A0 80 4F */	lis r5, __vt__Q33ebi6Option8FSMState@ha
/* 803CEB20 003CBA60  38 03 89 AC */	addi r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
/* 803CEB24 003CBA64  3C 60 80 4F */	lis r3, __vt__Q33ebi6Option27FSMState_WaitCloseForNoCard@ha
/* 803CEB28 003CBA68  90 04 00 00 */	stw r0, 0(r4)
/* 803CEB2C 003CBA6C  38 00 00 06 */	li r0, 6
/* 803CEB30 003CBA70  38 E0 00 00 */	li r7, 0
/* 803CEB34 003CBA74  38 C5 89 84 */	addi r6, r5, __vt__Q33ebi6Option8FSMState@l
/* 803CEB38 003CBA78  90 04 00 04 */	stw r0, 4(r4)
/* 803CEB3C 003CBA7C  38 BF 00 40 */	addi r5, r31, 0x40
/* 803CEB40 003CBA80  38 03 88 E4 */	addi r0, r3, __vt__Q33ebi6Option27FSMState_WaitCloseForNoCard@l
/* 803CEB44 003CBA84  90 E4 00 08 */	stw r7, 8(r4)
/* 803CEB48 003CBA88  90 C4 00 00 */	stw r6, 0(r4)
/* 803CEB4C 003CBA8C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803CEB50 003CBA90  90 04 00 00 */	stw r0, 0(r4)
/* 803CEB54 003CBA94  90 E4 00 10 */	stw r7, 0x10(r4)
/* 803CEB58 003CBA98  90 E4 00 14 */	stw r7, 0x14(r4)
.L_803CEB5C:
/* 803CEB5C 003CBA9C  7F C3 F3 78 */	mr r3, r30
/* 803CEB60 003CBAA0  48 00 1A A9 */	bl "registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
/* 803CEB64 003CBAA4  38 60 00 10 */	li r3, 0x10
/* 803CEB68 003CBAA8  4B C5 53 3D */	bl __nw__FUl
/* 803CEB6C 003CBAAC  7C 64 1B 79 */	or. r4, r3, r3
/* 803CEB70 003CBAB0  41 82 00 40 */	beq .L_803CEBB0
/* 803CEB74 003CBAB4  3C 60 80 4F */	lis r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
/* 803CEB78 003CBAB8  3C A0 80 4F */	lis r5, __vt__Q33ebi6Option8FSMState@ha
/* 803CEB7C 003CBABC  38 03 89 AC */	addi r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
/* 803CEB80 003CBAC0  3C 60 80 4F */	lis r3, __vt__Q33ebi6Option27FSMState_WorldMapInfoWindow@ha
/* 803CEB84 003CBAC4  90 04 00 00 */	stw r0, 0(r4)
/* 803CEB88 003CBAC8  38 00 00 07 */	li r0, 7
/* 803CEB8C 003CBACC  38 E0 00 00 */	li r7, 0
/* 803CEB90 003CBAD0  38 C5 89 84 */	addi r6, r5, __vt__Q33ebi6Option8FSMState@l
/* 803CEB94 003CBAD4  90 04 00 04 */	stw r0, 4(r4)
/* 803CEB98 003CBAD8  38 BF 00 54 */	addi r5, r31, 0x54
/* 803CEB9C 003CBADC  38 03 88 BC */	addi r0, r3, __vt__Q33ebi6Option27FSMState_WorldMapInfoWindow@l
/* 803CEBA0 003CBAE0  90 E4 00 08 */	stw r7, 8(r4)
/* 803CEBA4 003CBAE4  90 C4 00 00 */	stw r6, 0(r4)
/* 803CEBA8 003CBAE8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803CEBAC 003CBAEC  90 04 00 00 */	stw r0, 0(r4)
.L_803CEBB0:
/* 803CEBB0 003CBAF0  7F C3 F3 78 */	mr r3, r30
/* 803CEBB4 003CBAF4  48 00 1A 55 */	bl "registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
/* 803CEBB8 003CBAF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CEBBC 003CBAFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CEBC0 003CBB00  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CEBC4 003CBB04  7C 08 03 A6 */	mtlr r0
/* 803CEBC8 003CBB08  38 21 00 10 */	addi r1, r1, 0x10
/* 803CEBCC 003CBB0C  4E 80 00 20 */	blr 

.global init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg:
/* 803CEBD0 003CBB10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CEBD4 003CBB14  7C 08 02 A6 */	mflr r0
/* 803CEBD8 003CBB18  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CEBDC 003CBB1C  81 83 00 00 */	lwz r12, 0(r3)
/* 803CEBE0 003CBB20  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803CEBE4 003CBB24  7D 89 03 A6 */	mtctr r12
/* 803CEBE8 003CBB28  4E 80 04 21 */	bctrl 
/* 803CEBEC 003CBB2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CEBF0 003CBB30  7C 08 03 A6 */	mtlr r0
/* 803CEBF4 003CBB34  38 21 00 10 */	addi r1, r1, 0x10
/* 803CEBF8 003CBB38  4E 80 00 20 */	blr 

.global do_init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
do_init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg:
/* 803CEBFC 003CBB3C  4E 80 00 20 */	blr 

.global exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr:
/* 803CEC00 003CBB40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CEC04 003CBB44  7C 08 02 A6 */	mflr r0
/* 803CEC08 003CBB48  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CEC0C 003CBB4C  81 83 00 00 */	lwz r12, 0(r3)
/* 803CEC10 003CBB50  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803CEC14 003CBB54  7D 89 03 A6 */	mtctr r12
/* 803CEC18 003CBB58  4E 80 04 21 */	bctrl 
/* 803CEC1C 003CBB5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CEC20 003CBB60  7C 08 03 A6 */	mtlr r0
/* 803CEC24 003CBB64  38 21 00 10 */	addi r1, r1, 0x10
/* 803CEC28 003CBB68  4E 80 00 20 */	blr 

.global do_exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
do_exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr:
/* 803CEC2C 003CBB6C  4E 80 00 20 */	blr 

.global do_init__Q33ebi6Option19FSMState_ScreenOpenFPQ33ebi6Option4TMgrPQ24Game8StateArg
do_init__Q33ebi6Option19FSMState_ScreenOpenFPQ33ebi6Option4TMgrPQ24Game8StateArg:
/* 803CEC30 003CBB70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CEC34 003CBB74  7C 08 02 A6 */	mflr r0
/* 803CEC38 003CBB78  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CEC3C 003CBB7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CEC40 003CBB80  7C 9F 23 78 */	mr r31, r4
/* 803CEC44 003CBB84  38 7F 00 C8 */	addi r3, r31, 0xc8
/* 803CEC48 003CBB88  4B FF C1 81 */	bl loadRam__Q33ebi6Screen16TOptionParameterFv
/* 803CEC4C 003CBB8C  38 7F 00 DC */	addi r3, r31, 0xdc
/* 803CEC50 003CBB90  4B FF C1 79 */	bl loadRam__Q33ebi6Screen16TOptionParameterFv
/* 803CEC54 003CBB94  7F E3 FB 78 */	mr r3, r31
/* 803CEC58 003CBB98  38 80 00 00 */	li r4, 0
/* 803CEC5C 003CBB9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803CEC60 003CBBA0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803CEC64 003CBBA4  7D 89 03 A6 */	mtctr r12
/* 803CEC68 003CBBA8  4E 80 04 21 */	bctrl 
/* 803CEC6C 003CBBAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CEC70 003CBBB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CEC74 003CBBB4  7C 08 03 A6 */	mtlr r0
/* 803CEC78 003CBBB8  38 21 00 10 */	addi r1, r1, 0x10
/* 803CEC7C 003CBBBC  4E 80 00 20 */	blr 

.global do_exec__Q33ebi6Option19FSMState_ScreenOpenFPQ33ebi6Option4TMgr
do_exec__Q33ebi6Option19FSMState_ScreenOpenFPQ33ebi6Option4TMgr:
/* 803CEC80 003CBBC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CEC84 003CBBC4  7C 08 02 A6 */	mflr r0
/* 803CEC88 003CBBC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CEC8C 003CBBCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CEC90 003CBBD0  7C 9F 23 78 */	mr r31, r4
/* 803CEC94 003CBBD4  93 C1 00 08 */	stw r30, 8(r1)
/* 803CEC98 003CBBD8  7C 7E 1B 78 */	mr r30, r3
/* 803CEC9C 003CBBDC  7F E3 FB 78 */	mr r3, r31
/* 803CECA0 003CBBE0  48 00 4C F9 */	bl isWaitScreen__Q33ebi6Screen11TScreenBaseFv
/* 803CECA4 003CBBE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803CECA8 003CBBE8  41 82 00 24 */	beq .L_803CECCC
/* 803CECAC 003CBBEC  7F C3 F3 78 */	mr r3, r30
/* 803CECB0 003CBBF0  7F E4 FB 78 */	mr r4, r31
/* 803CECB4 003CBBF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803CECB8 003CBBF8  38 A0 00 03 */	li r5, 3
/* 803CECBC 003CBBFC  38 C0 00 00 */	li r6, 0
/* 803CECC0 003CBC00  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CECC4 003CBC04  7D 89 03 A6 */	mtctr r12
/* 803CECC8 003CBC08  4E 80 04 21 */	bctrl 
.L_803CECCC:
/* 803CECCC 003CBC0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CECD0 003CBC10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CECD4 003CBC14  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CECD8 003CBC18  7C 08 03 A6 */	mtlr r0
/* 803CECDC 003CBC1C  38 21 00 10 */	addi r1, r1, 0x10
/* 803CECE0 003CBC20  4E 80 00 20 */	blr 

.global "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
"transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg":
/* 803CECE4 003CBC24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CECE8 003CBC28  7C 08 02 A6 */	mflr r0
/* 803CECEC 003CBC2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CECF0 003CBC30  80 63 00 08 */	lwz r3, 8(r3)
/* 803CECF4 003CBC34  81 83 00 00 */	lwz r12, 0(r3)
/* 803CECF8 003CBC38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803CECFC 003CBC3C  7D 89 03 A6 */	mtctr r12
/* 803CED00 003CBC40  4E 80 04 21 */	bctrl 
/* 803CED04 003CBC44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CED08 003CBC48  7C 08 03 A6 */	mtlr r0
/* 803CED0C 003CBC4C  38 21 00 10 */	addi r1, r1, 0x10
/* 803CED10 003CBC50  4E 80 00 20 */	blr 

.global do_init__Q33ebi6Option19FSMState_ScreenWaitFPQ33ebi6Option4TMgrPQ24Game8StateArg
do_init__Q33ebi6Option19FSMState_ScreenWaitFPQ33ebi6Option4TMgrPQ24Game8StateArg:
/* 803CED14 003CBC54  38 00 00 01 */	li r0, 1
/* 803CED18 003CBC58  98 04 00 10 */	stb r0, 0x10(r4)
/* 803CED1C 003CBC5C  4E 80 00 20 */	blr 

.global do_exec__Q33ebi6Option19FSMState_ScreenWaitFPQ33ebi6Option4TMgr
do_exec__Q33ebi6Option19FSMState_ScreenWaitFPQ33ebi6Option4TMgr:
/* 803CED20 003CBC60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803CED24 003CBC64  7C 08 02 A6 */	mflr r0
/* 803CED28 003CBC68  90 01 00 24 */	stw r0, 0x24(r1)
/* 803CED2C 003CBC6C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803CED30 003CBC70  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803CED34 003CBC74  7C 9E 23 78 */	mr r30, r4
/* 803CED38 003CBC78  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803CED3C 003CBC7C  7C 7D 1B 78 */	mr r29, r3
/* 803CED40 003CBC80  80 04 00 C4 */	lwz r0, 0xc4(r4)
/* 803CED44 003CBC84  2C 00 00 08 */	cmpwi r0, 8
/* 803CED48 003CBC88  41 82 00 28 */	beq .L_803CED70
/* 803CED4C 003CBC8C  40 80 00 18 */	bge .L_803CED64
/* 803CED50 003CBC90  2C 00 00 07 */	cmpwi r0, 7
/* 803CED54 003CBC94  40 80 00 28 */	bge .L_803CED7C
/* 803CED58 003CBC98  2C 00 00 01 */	cmpwi r0, 1
/* 803CED5C 003CBC9C  40 80 00 14 */	bge .L_803CED70
/* 803CED60 003CBCA0  48 00 00 E8 */	b .L_803CEE48
.L_803CED64:
/* 803CED64 003CBCA4  2C 00 00 0A */	cmpwi r0, 0xa
/* 803CED68 003CBCA8  40 80 00 E0 */	bge .L_803CEE48
/* 803CED6C 003CBCAC  48 00 00 BC */	b .L_803CEE28
.L_803CED70:
/* 803CED70 003CBCB0  38 7E 00 C8 */	addi r3, r30, 0xc8
/* 803CED74 003CBCB4  4B FF C1 55 */	bl saveRam__Q33ebi6Screen16TOptionParameterFv
/* 803CED78 003CBCB8  48 00 00 D0 */	b .L_803CEE48
.L_803CED7C:
/* 803CED7C 003CBCBC  38 7E 00 C8 */	addi r3, r30, 0xc8
/* 803CED80 003CBCC0  4B FF C1 49 */	bl saveRam__Q33ebi6Screen16TOptionParameterFv
/* 803CED84 003CBCC4  3B E0 00 00 */	li r31, 0
/* 803CED88 003CBCC8  9B FE 00 10 */	stb r31, 0x10(r30)
/* 803CED8C 003CBCCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803CED90 003CBCD0  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803CED94 003CBCD4  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803CED98 003CBCD8  2C 00 00 00 */	cmpwi r0, 0
/* 803CED9C 003CBCDC  40 82 00 14 */	bne .L_803CEDB0
/* 803CEDA0 003CBCE0  48 07 22 1D */	bl checkStatus__13MemoryCardMgrFv
/* 803CEDA4 003CBCE4  28 03 00 0B */	cmplwi r3, 0xb
/* 803CEDA8 003CBCE8  41 82 00 08 */	beq .L_803CEDB0
/* 803CEDAC 003CBCEC  3B E0 00 01 */	li r31, 1
.L_803CEDB0:
/* 803CEDB0 003CBCF0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803CEDB4 003CBCF4  41 82 00 20 */	beq .L_803CEDD4
/* 803CEDB8 003CBCF8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803CEDBC 003CBCFC  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803CEDC0 003CBD00  48 07 6D 4D */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803CEDC4 003CBD04  2C 03 00 00 */	cmpwi r3, 0
/* 803CEDC8 003CBD08  40 82 00 0C */	bne .L_803CEDD4
/* 803CEDCC 003CBD0C  38 00 00 01 */	li r0, 1
/* 803CEDD0 003CBD10  48 00 00 08 */	b .L_803CEDD8
.L_803CEDD4:
/* 803CEDD4 003CBD14  38 00 00 00 */	li r0, 0
.L_803CEDD8:
/* 803CEDD8 003CBD18  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803CEDDC 003CBD1C  41 82 00 28 */	beq .L_803CEE04
/* 803CEDE0 003CBD20  7F A3 EB 78 */	mr r3, r29
/* 803CEDE4 003CBD24  7F C4 F3 78 */	mr r4, r30
/* 803CEDE8 003CBD28  81 9D 00 00 */	lwz r12, 0(r29)
/* 803CEDEC 003CBD2C  38 A0 00 06 */	li r5, 6
/* 803CEDF0 003CBD30  38 C0 00 00 */	li r6, 0
/* 803CEDF4 003CBD34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CEDF8 003CBD38  7D 89 03 A6 */	mtctr r12
/* 803CEDFC 003CBD3C  4E 80 04 21 */	bctrl 
/* 803CEE00 003CBD40  48 00 00 48 */	b .L_803CEE48
.L_803CEE04:
/* 803CEE04 003CBD44  7F A3 EB 78 */	mr r3, r29
/* 803CEE08 003CBD48  7F C4 F3 78 */	mr r4, r30
/* 803CEE0C 003CBD4C  81 9D 00 00 */	lwz r12, 0(r29)
/* 803CEE10 003CBD50  38 A0 00 05 */	li r5, 5
/* 803CEE14 003CBD54  38 C0 00 00 */	li r6, 0
/* 803CEE18 003CBD58  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CEE1C 003CBD5C  7D 89 03 A6 */	mtctr r12
/* 803CEE20 003CBD60  4E 80 04 21 */	bctrl 
/* 803CEE24 003CBD64  48 00 00 24 */	b .L_803CEE48
.L_803CEE28:
/* 803CEE28 003CBD68  38 00 00 00 */	li r0, 0
/* 803CEE2C 003CBD6C  38 A0 00 07 */	li r5, 7
/* 803CEE30 003CBD70  98 1E 00 10 */	stb r0, 0x10(r30)
/* 803CEE34 003CBD74  38 C0 00 00 */	li r6, 0
/* 803CEE38 003CBD78  81 83 00 00 */	lwz r12, 0(r3)
/* 803CEE3C 003CBD7C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CEE40 003CBD80  7D 89 03 A6 */	mtctr r12
/* 803CEE44 003CBD84  4E 80 04 21 */	bctrl 
.L_803CEE48:
/* 803CEE48 003CBD88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803CEE4C 003CBD8C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803CEE50 003CBD90  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803CEE54 003CBD94  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803CEE58 003CBD98  7C 08 03 A6 */	mtlr r0
/* 803CEE5C 003CBD9C  38 21 00 20 */	addi r1, r1, 0x20
/* 803CEE60 003CBDA0  4E 80 00 20 */	blr 

.global do_init__Q33ebi6Option20FSMState_ScreenCloseFPQ33ebi6Option4TMgrPQ24Game8StateArg
do_init__Q33ebi6Option20FSMState_ScreenCloseFPQ33ebi6Option4TMgrPQ24Game8StateArg:
/* 803CEE64 003CBDA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CEE68 003CBDA8  7C 08 02 A6 */	mflr r0
/* 803CEE6C 003CBDAC  7C 83 23 78 */	mr r3, r4
/* 803CEE70 003CBDB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CEE74 003CBDB4  38 00 00 01 */	li r0, 1
/* 803CEE78 003CBDB8  98 04 0F 20 */	stb r0, 0xf20(r4)
/* 803CEE7C 003CBDBC  38 80 00 00 */	li r4, 0
/* 803CEE80 003CBDC0  81 83 00 00 */	lwz r12, 0(r3)
/* 803CEE84 003CBDC4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803CEE88 003CBDC8  7D 89 03 A6 */	mtctr r12
/* 803CEE8C 003CBDCC  4E 80 04 21 */	bctrl 
/* 803CEE90 003CBDD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CEE94 003CBDD4  7C 08 03 A6 */	mtlr r0
/* 803CEE98 003CBDD8  38 21 00 10 */	addi r1, r1, 0x10
/* 803CEE9C 003CBDDC  4E 80 00 20 */	blr 

.global do_exec__Q33ebi6Option20FSMState_ScreenCloseFPQ33ebi6Option4TMgr
do_exec__Q33ebi6Option20FSMState_ScreenCloseFPQ33ebi6Option4TMgr:
/* 803CEEA0 003CBDE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CEEA4 003CBDE4  7C 08 02 A6 */	mflr r0
/* 803CEEA8 003CBDE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CEEAC 003CBDEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CEEB0 003CBDF0  7C 9F 23 78 */	mr r31, r4
/* 803CEEB4 003CBDF4  7F E3 FB 78 */	mr r3, r31
/* 803CEEB8 003CBDF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 803CEEBC 003CBDFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803CEEC0 003CBE00  7D 89 03 A6 */	mtctr r12
/* 803CEEC4 003CBE04  4E 80 04 21 */	bctrl 
/* 803CEEC8 003CBE08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803CEECC 003CBE0C  41 82 00 0C */	beq .L_803CEED8
/* 803CEED0 003CBE10  7F E3 FB 78 */	mr r3, r31
/* 803CEED4 003CBE14  48 00 13 25 */	bl goEnd___Q33ebi6Option4TMgrFv
.L_803CEED8:
/* 803CEED8 003CBE18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CEEDC 003CBE1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CEEE0 003CBE20  7C 08 03 A6 */	mtlr r0
/* 803CEEE4 003CBE24  38 21 00 10 */	addi r1, r1, 0x10
/* 803CEEE8 003CBE28  4E 80 00 20 */	blr 

.global do_init__Q33ebi6Option27FSMState_WaitCloseForNoCardFPQ33ebi6Option4TMgrPQ24Game8StateArg
do_init__Q33ebi6Option27FSMState_WaitCloseForNoCardFPQ33ebi6Option4TMgrPQ24Game8StateArg:
/* 803CEEEC 003CBE2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CEEF0 003CBE30  7C 08 02 A6 */	mflr r0
/* 803CEEF4 003CBE34  C0 22 17 28 */	lfs f1, lbl_8051FA88@sda21(r2)
/* 803CEEF8 003CBE38  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CEEFC 003CBE3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CEF00 003CBE40  7C 7F 1B 78 */	mr r31, r3
/* 803CEF04 003CBE44  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803CEF08 003CBE48  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803CEF0C 003CBE4C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803CEF10 003CBE50  4B CF 2C 3D */	bl __cvt_fp2unsigned
/* 803CEF14 003CBE54  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803CEF18 003CBE58  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803CEF1C 003CBE5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CEF20 003CBE60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CEF24 003CBE64  7C 08 03 A6 */	mtlr r0
/* 803CEF28 003CBE68  38 21 00 10 */	addi r1, r1, 0x10
/* 803CEF2C 003CBE6C  4E 80 00 20 */	blr 

.global do_exec__Q33ebi6Option27FSMState_WaitCloseForNoCardFPQ33ebi6Option4TMgr
do_exec__Q33ebi6Option27FSMState_WaitCloseForNoCardFPQ33ebi6Option4TMgr:
/* 803CEF30 003CBE70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CEF34 003CBE74  7C 08 02 A6 */	mflr r0
/* 803CEF38 003CBE78  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CEF3C 003CBE7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CEF40 003CBE80  7C 9F 23 78 */	mr r31, r4
/* 803CEF44 003CBE84  93 C1 00 08 */	stw r30, 8(r1)
/* 803CEF48 003CBE88  7C 7E 1B 78 */	mr r30, r3
/* 803CEF4C 003CBE8C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803CEF50 003CBE90  28 03 00 00 */	cmplwi r3, 0
/* 803CEF54 003CBE94  41 82 00 0C */	beq .L_803CEF60
/* 803CEF58 003CBE98  38 03 FF FF */	addi r0, r3, -1
/* 803CEF5C 003CBE9C  90 1E 00 10 */	stw r0, 0x10(r30)
.L_803CEF60:
/* 803CEF60 003CBEA0  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 803CEF64 003CBEA4  28 00 00 00 */	cmplwi r0, 0
/* 803CEF68 003CBEA8  40 82 00 34 */	bne .L_803CEF9C
/* 803CEF6C 003CBEAC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803CEF70 003CBEB0  38 80 18 0C */	li r4, 0x180c
/* 803CEF74 003CBEB4  38 A0 00 00 */	li r5, 0
/* 803CEF78 003CBEB8  4B F6 96 B9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803CEF7C 003CBEBC  7F C3 F3 78 */	mr r3, r30
/* 803CEF80 003CBEC0  7F E4 FB 78 */	mr r4, r31
/* 803CEF84 003CBEC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803CEF88 003CBEC8  38 A0 00 04 */	li r5, 4
/* 803CEF8C 003CBECC  38 C0 00 00 */	li r6, 0
/* 803CEF90 003CBED0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CEF94 003CBED4  7D 89 03 A6 */	mtctr r12
/* 803CEF98 003CBED8  4E 80 04 21 */	bctrl 
.L_803CEF9C:
/* 803CEF9C 003CBEDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CEFA0 003CBEE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CEFA4 003CBEE4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CEFA8 003CBEE8  7C 08 03 A6 */	mtlr r0
/* 803CEFAC 003CBEEC  38 21 00 10 */	addi r1, r1, 0x10
/* 803CEFB0 003CBEF0  4E 80 00 20 */	blr 

.global do_init__Q33ebi6Option27FSMState_WorldMapInfoWindowFPQ33ebi6Option4TMgrPQ24Game8StateArg
do_init__Q33ebi6Option27FSMState_WorldMapInfoWindowFPQ33ebi6Option4TMgrPQ24Game8StateArg:
/* 803CEFB4 003CBEF4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803CEFB8 003CBEF8  7C 08 02 A6 */	mflr r0
/* 803CEFBC 003CBEFC  90 01 00 34 */	stw r0, 0x34(r1)
/* 803CEFC0 003CBF00  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803CEFC4 003CBF04  80 63 00 18 */	lwz r3, 0x18(r3)
/* 803CEFC8 003CBF08  81 83 00 00 */	lwz r12, 0(r3)
/* 803CEFCC 003CBF0C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803CEFD0 003CBF10  7D 89 03 A6 */	mtctr r12
/* 803CEFD4 003CBF14  4E 80 04 21 */	bctrl 
/* 803CEFD8 003CBF18  3C A0 80 4B */	lis r5, __vt__Q32og6Screen14DispMemberBase@ha
/* 803CEFDC 003CBF1C  3C 80 00 34 */	lis r4, 0x00343731@ha
/* 803CEFE0 003CBF20  39 60 00 00 */	li r11, 0
/* 803CEFE4 003CBF24  3C 60 31 5F */	lis r3, 0x315F3030@ha
/* 803CEFE8 003CBF28  39 04 37 31 */	addi r8, r4, 0x00343731@l
/* 803CEFEC 003CBF2C  39 45 11 48 */	addi r10, r5, __vt__Q32og6Screen14DispMemberBase@l
/* 803CEFF0 003CBF30  38 03 30 30 */	addi r0, r3, 0x315F3030@l
/* 803CEFF4 003CBF34  3C C0 80 4E */	lis r6, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 803CEFF8 003CBF38  3C A0 30 5F */	lis r5, 0x305F3030@ha
/* 803CEFFC 003CBF3C  3C 80 37 5F */	lis r4, 0x375F3030@ha
/* 803CF000 003CBF40  3C 60 00 36 */	lis r3, 0x00363031@ha
/* 803CF004 003CBF44  38 E0 00 B4 */	li r7, 0xb4
/* 803CF008 003CBF48  39 25 30 30 */	addi r9, r5, 0x305F3030@l
/* 803CF00C 003CBF4C  91 41 00 08 */	stw r10, 8(r1)
/* 803CF010 003CBF50  39 46 9E 08 */	addi r10, r6, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 803CF014 003CBF54  38 C4 30 30 */	addi r6, r4, 0x375F3030@l
/* 803CF018 003CBF58  90 01 00 24 */	stw r0, 0x24(r1)
/* 803CF01C 003CBF5C  38 A3 30 31 */	addi r5, r3, 0x00363031@l
/* 803CF020 003CBF60  38 00 00 01 */	li r0, 1
/* 803CF024 003CBF64  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803CF028 003CBF68  91 01 00 20 */	stw r8, 0x20(r1)
/* 803CF02C 003CBF6C  38 81 00 08 */	addi r4, r1, 8
/* 803CF030 003CBF70  99 61 00 29 */	stb r11, 0x29(r1)
/* 803CF034 003CBF74  91 61 00 0C */	stw r11, 0xc(r1)
/* 803CF038 003CBF78  91 41 00 08 */	stw r10, 8(r1)
/* 803CF03C 003CBF7C  91 61 00 10 */	stw r11, 0x10(r1)
/* 803CF040 003CBF80  91 21 00 1C */	stw r9, 0x1c(r1)
/* 803CF044 003CBF84  91 01 00 18 */	stw r8, 0x18(r1)
/* 803CF048 003CBF88  98 E1 00 28 */	stb r7, 0x28(r1)
/* 803CF04C 003CBF8C  90 C1 00 24 */	stw r6, 0x24(r1)
/* 803CF050 003CBF90  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803CF054 003CBF94  98 01 00 29 */	stb r0, 0x29(r1)
/* 803CF058 003CBF98  48 02 E0 01 */	bl open_WorldMapInfoWin0__Q26Screen9Game2DMgrFRQ32og6Screen26DispMemberWorldMapInfoWin0
/* 803CF05C 003CBF9C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803CF060 003CBFA0  7C 08 03 A6 */	mtlr r0
/* 803CF064 003CBFA4  38 21 00 30 */	addi r1, r1, 0x30
/* 803CF068 003CBFA8  4E 80 00 20 */	blr 

.global do_exec__Q33ebi6Option27FSMState_WorldMapInfoWindowFPQ33ebi6Option4TMgr
do_exec__Q33ebi6Option27FSMState_WorldMapInfoWindowFPQ33ebi6Option4TMgr:
/* 803CF06C 003CBFAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CF070 003CBFB0  7C 08 02 A6 */	mflr r0
/* 803CF074 003CBFB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CF078 003CBFB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CF07C 003CBFBC  7C 9F 23 78 */	mr r31, r4
/* 803CF080 003CBFC0  93 C1 00 08 */	stw r30, 8(r1)
/* 803CF084 003CBFC4  7C 7E 1B 78 */	mr r30, r3
/* 803CF088 003CBFC8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803CF08C 003CBFCC  48 02 E0 75 */	bl check_WorldMapInfoWin0__Q26Screen9Game2DMgrCFv
/* 803CF090 003CBFD0  2C 03 00 01 */	cmpwi r3, 1
/* 803CF094 003CBFD4  41 82 00 38 */	beq .L_803CF0CC
/* 803CF098 003CBFD8  40 80 00 5C */	bge .L_803CF0F4
/* 803CF09C 003CBFDC  2C 03 00 00 */	cmpwi r3, 0
/* 803CF0A0 003CBFE0  40 80 00 08 */	bge .L_803CF0A8
/* 803CF0A4 003CBFE4  48 00 00 50 */	b .L_803CF0F4
.L_803CF0A8:
/* 803CF0A8 003CBFE8  7F C3 F3 78 */	mr r3, r30
/* 803CF0AC 003CBFEC  7F E4 FB 78 */	mr r4, r31
/* 803CF0B0 003CBFF0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803CF0B4 003CBFF4  38 A0 00 03 */	li r5, 3
/* 803CF0B8 003CBFF8  38 C0 00 00 */	li r6, 0
/* 803CF0BC 003CBFFC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CF0C0 003CC000  7D 89 03 A6 */	mtctr r12
/* 803CF0C4 003CC004  4E 80 04 21 */	bctrl 
/* 803CF0C8 003CC008  48 00 00 2C */	b .L_803CF0F4
.L_803CF0CC:
/* 803CF0CC 003CC00C  38 7F 00 DC */	addi r3, r31, 0xdc
/* 803CF0D0 003CC010  4B FF BD F9 */	bl saveRam__Q33ebi6Screen16TOptionParameterFv
/* 803CF0D4 003CC014  7F C3 F3 78 */	mr r3, r30
/* 803CF0D8 003CC018  7F E4 FB 78 */	mr r4, r31
/* 803CF0DC 003CC01C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803CF0E0 003CC020  38 A0 00 04 */	li r5, 4
/* 803CF0E4 003CC024  38 C0 00 00 */	li r6, 0
/* 803CF0E8 003CC028  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CF0EC 003CC02C  7D 89 03 A6 */	mtctr r12
/* 803CF0F0 003CC030  4E 80 04 21 */	bctrl 
.L_803CF0F4:
/* 803CF0F4 003CC034  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CF0F8 003CC038  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CF0FC 003CC03C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CF100 003CC040  7C 08 03 A6 */	mtlr r0
/* 803CF104 003CC044  38 21 00 10 */	addi r1, r1, 0x10
/* 803CF108 003CC048  4E 80 00 20 */	blr 

.global do_init__Q33ebi6Option19FSMState_LoadOptionFPQ33ebi6Option4TMgrPQ24Game8StateArg
do_init__Q33ebi6Option19FSMState_LoadOptionFPQ33ebi6Option4TMgrPQ24Game8StateArg:
/* 803CF10C 003CC04C  38 00 00 00 */	li r0, 0
/* 803CF110 003CC050  90 03 00 10 */	stw r0, 0x10(r3)
/* 803CF114 003CC054  4E 80 00 20 */	blr 

.global do_exec__Q33ebi6Option19FSMState_LoadOptionFPQ33ebi6Option4TMgr
do_exec__Q33ebi6Option19FSMState_LoadOptionFPQ33ebi6Option4TMgr:
/* 803CF118 003CC058  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803CF11C 003CC05C  7C 08 02 A6 */	mflr r0
/* 803CF120 003CC060  90 01 00 24 */	stw r0, 0x24(r1)
/* 803CF124 003CC064  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803CF128 003CC068  7C 7F 1B 78 */	mr r31, r3
/* 803CF12C 003CC06C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803CF130 003CC070  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803CF134 003CC074  7C 9D 23 78 */	mr r29, r4
/* 803CF138 003CC078  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803CF13C 003CC07C  2C 00 00 01 */	cmpwi r0, 1
/* 803CF140 003CC080  41 82 01 00 */	beq .L_803CF240
/* 803CF144 003CC084  40 80 01 58 */	bge .L_803CF29C
/* 803CF148 003CC088  2C 00 00 00 */	cmpwi r0, 0
/* 803CF14C 003CC08C  40 80 00 08 */	bge .L_803CF154
/* 803CF150 003CC090  48 00 01 4C */	b .L_803CF29C
.L_803CF154:
/* 803CF154 003CC094  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803CF158 003CC098  3B C0 00 00 */	li r30, 0
/* 803CF15C 003CC09C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803CF160 003CC0A0  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803CF164 003CC0A4  2C 00 00 00 */	cmpwi r0, 0
/* 803CF168 003CC0A8  40 82 00 14 */	bne .L_803CF17C
/* 803CF16C 003CC0AC  48 07 1E 51 */	bl checkStatus__13MemoryCardMgrFv
/* 803CF170 003CC0B0  28 03 00 0B */	cmplwi r3, 0xb
/* 803CF174 003CC0B4  41 82 00 08 */	beq .L_803CF17C
/* 803CF178 003CC0B8  3B C0 00 01 */	li r30, 1
.L_803CF17C:
/* 803CF17C 003CC0BC  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803CF180 003CC0C0  41 82 00 20 */	beq .L_803CF1A0
/* 803CF184 003CC0C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803CF188 003CC0C8  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803CF18C 003CC0CC  48 07 69 81 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803CF190 003CC0D0  2C 03 00 00 */	cmpwi r3, 0
/* 803CF194 003CC0D4  40 82 00 0C */	bne .L_803CF1A0
/* 803CF198 003CC0D8  38 00 00 01 */	li r0, 1
/* 803CF19C 003CC0DC  48 00 00 08 */	b .L_803CF1A4
.L_803CF1A0:
/* 803CF1A0 003CC0E0  38 00 00 00 */	li r0, 0
.L_803CF1A4:
/* 803CF1A4 003CC0E4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803CF1A8 003CC0E8  41 82 00 28 */	beq .L_803CF1D0
/* 803CF1AC 003CC0EC  7F E3 FB 78 */	mr r3, r31
/* 803CF1B0 003CC0F0  7F A4 EB 78 */	mr r4, r29
/* 803CF1B4 003CC0F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 803CF1B8 003CC0F8  38 A0 00 02 */	li r5, 2
/* 803CF1BC 003CC0FC  38 C0 00 00 */	li r6, 0
/* 803CF1C0 003CC100  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CF1C4 003CC104  7D 89 03 A6 */	mtctr r12
/* 803CF1C8 003CC108  4E 80 04 21 */	bctrl 
/* 803CF1CC 003CC10C  48 00 00 D0 */	b .L_803CF29C
.L_803CF1D0:
/* 803CF1D0 003CC110  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803CF1D4 003CC114  3B C0 00 00 */	li r30, 0
/* 803CF1D8 003CC118  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803CF1DC 003CC11C  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803CF1E0 003CC120  2C 00 00 00 */	cmpwi r0, 0
/* 803CF1E4 003CC124  40 82 00 14 */	bne .L_803CF1F8
/* 803CF1E8 003CC128  48 07 1D D5 */	bl checkStatus__13MemoryCardMgrFv
/* 803CF1EC 003CC12C  28 03 00 0B */	cmplwi r3, 0xb
/* 803CF1F0 003CC130  41 82 00 08 */	beq .L_803CF1F8
/* 803CF1F4 003CC134  3B C0 00 01 */	li r30, 1
.L_803CF1F8:
/* 803CF1F8 003CC138  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803CF1FC 003CC13C  41 82 00 A0 */	beq .L_803CF29C
/* 803CF200 003CC140  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803CF204 003CC144  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803CF208 003CC148  48 07 3D 95 */	bl loadGameOption__Q34Game10MemoryCard3MgrFv
/* 803CF20C 003CC14C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803CF210 003CC150  41 82 00 10 */	beq .L_803CF220
/* 803CF214 003CC154  38 00 00 01 */	li r0, 1
/* 803CF218 003CC158  90 1F 00 10 */	stw r0, 0x10(r31)
/* 803CF21C 003CC15C  48 00 00 80 */	b .L_803CF29C
.L_803CF220:
/* 803CF220 003CC160  3C 60 80 49 */	lis r3, lbl_80496608@ha
/* 803CF224 003CC164  3C A0 80 49 */	lis r5, lbl_8049661C@ha
/* 803CF228 003CC168  38 63 66 08 */	addi r3, r3, lbl_80496608@l
/* 803CF22C 003CC16C  38 80 00 EF */	li r4, 0xef
/* 803CF230 003CC170  38 A5 66 1C */	addi r5, r5, lbl_8049661C@l
/* 803CF234 003CC174  4C C6 31 82 */	crclr 6
/* 803CF238 003CC178  4B C5 B4 09 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803CF23C 003CC17C  48 00 00 60 */	b .L_803CF29C
.L_803CF240:
/* 803CF240 003CC180  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803CF244 003CC184  3B C0 00 00 */	li r30, 0
/* 803CF248 003CC188  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803CF24C 003CC18C  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803CF250 003CC190  2C 00 00 00 */	cmpwi r0, 0
/* 803CF254 003CC194  40 82 00 14 */	bne .L_803CF268
/* 803CF258 003CC198  48 07 1D 65 */	bl checkStatus__13MemoryCardMgrFv
/* 803CF25C 003CC19C  28 03 00 0B */	cmplwi r3, 0xb
/* 803CF260 003CC1A0  41 82 00 08 */	beq .L_803CF268
/* 803CF264 003CC1A4  3B C0 00 01 */	li r30, 1
.L_803CF268:
/* 803CF268 003CC1A8  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803CF26C 003CC1AC  41 82 00 30 */	beq .L_803CF29C
/* 803CF270 003CC1B0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803CF274 003CC1B4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803CF278 003CC1B8  48 07 68 95 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803CF27C 003CC1BC  7F E3 FB 78 */	mr r3, r31
/* 803CF280 003CC1C0  7F A4 EB 78 */	mr r4, r29
/* 803CF284 003CC1C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 803CF288 003CC1C8  38 A0 00 02 */	li r5, 2
/* 803CF28C 003CC1CC  38 C0 00 00 */	li r6, 0
/* 803CF290 003CC1D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CF294 003CC1D4  7D 89 03 A6 */	mtctr r12
/* 803CF298 003CC1D8  4E 80 04 21 */	bctrl 
.L_803CF29C:
/* 803CF29C 003CC1DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803CF2A0 003CC1E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803CF2A4 003CC1E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803CF2A8 003CC1E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803CF2AC 003CC1EC  7C 08 03 A6 */	mtlr r0
/* 803CF2B0 003CC1F0  38 21 00 20 */	addi r1, r1, 0x20
/* 803CF2B4 003CC1F4  4E 80 00 20 */	blr 

.global do_init__Q33ebi6Option16FSMState_SaveMgrFPQ33ebi6Option4TMgrPQ24Game8StateArg
do_init__Q33ebi6Option16FSMState_SaveMgrFPQ33ebi6Option4TMgrPQ24Game8StateArg:
/* 803CF2B8 003CC1F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CF2BC 003CC1FC  7C 08 02 A6 */	mflr r0
/* 803CF2C0 003CC200  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CF2C4 003CC204  38 00 00 00 */	li r0, 0
/* 803CF2C8 003CC208  98 04 00 10 */	stb r0, 0x10(r4)
/* 803CF2CC 003CC20C  80 64 0F 18 */	lwz r3, 0xf18(r4)
/* 803CF2D0 003CC210  48 00 D9 2D */	bl start__Q33ebi4Save4TMgrFv
/* 803CF2D4 003CC214  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CF2D8 003CC218  7C 08 03 A6 */	mtlr r0
/* 803CF2DC 003CC21C  38 21 00 10 */	addi r1, r1, 0x10
/* 803CF2E0 003CC220  4E 80 00 20 */	blr 

.global do_exec__Q33ebi6Option16FSMState_SaveMgrFPQ33ebi6Option4TMgr
do_exec__Q33ebi6Option16FSMState_SaveMgrFPQ33ebi6Option4TMgr:
/* 803CF2E4 003CC224  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CF2E8 003CC228  7C 08 02 A6 */	mflr r0
/* 803CF2EC 003CC22C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CF2F0 003CC230  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CF2F4 003CC234  7C 9F 23 78 */	mr r31, r4
/* 803CF2F8 003CC238  93 C1 00 08 */	stw r30, 8(r1)
/* 803CF2FC 003CC23C  7C 7E 1B 78 */	mr r30, r3
/* 803CF300 003CC240  80 64 0F 18 */	lwz r3, 0xf18(r4)
/* 803CF304 003CC244  48 00 D9 DD */	bl isFinish__Q33ebi4Save4TMgrFv
/* 803CF308 003CC248  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803CF30C 003CC24C  41 82 00 C0 */	beq .L_803CF3CC
/* 803CF310 003CC250  80 7F 0F 18 */	lwz r3, 0xf18(r31)
/* 803CF314 003CC254  80 03 04 74 */	lwz r0, 0x474(r3)
/* 803CF318 003CC258  2C 00 00 02 */	cmpwi r0, 2
/* 803CF31C 003CC25C  41 82 00 6C */	beq .L_803CF388
/* 803CF320 003CC260  40 80 00 14 */	bge .L_803CF334
/* 803CF324 003CC264  2C 00 00 00 */	cmpwi r0, 0
/* 803CF328 003CC268  41 82 00 18 */	beq .L_803CF340
/* 803CF32C 003CC26C  40 80 00 38 */	bge .L_803CF364
/* 803CF330 003CC270  48 00 00 9C */	b .L_803CF3CC
.L_803CF334:
/* 803CF334 003CC274  2C 00 00 04 */	cmpwi r0, 4
/* 803CF338 003CC278  41 82 00 74 */	beq .L_803CF3AC
/* 803CF33C 003CC27C  48 00 00 90 */	b .L_803CF3CC
.L_803CF340:
/* 803CF340 003CC280  7F C3 F3 78 */	mr r3, r30
/* 803CF344 003CC284  7F E4 FB 78 */	mr r4, r31
/* 803CF348 003CC288  81 9E 00 00 */	lwz r12, 0(r30)
/* 803CF34C 003CC28C  38 A0 00 04 */	li r5, 4
/* 803CF350 003CC290  38 C0 00 00 */	li r6, 0
/* 803CF354 003CC294  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CF358 003CC298  7D 89 03 A6 */	mtctr r12
/* 803CF35C 003CC29C  4E 80 04 21 */	bctrl 
/* 803CF360 003CC2A0  48 00 00 6C */	b .L_803CF3CC
.L_803CF364:
/* 803CF364 003CC2A4  7F C3 F3 78 */	mr r3, r30
/* 803CF368 003CC2A8  7F E4 FB 78 */	mr r4, r31
/* 803CF36C 003CC2AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803CF370 003CC2B0  38 A0 00 03 */	li r5, 3
/* 803CF374 003CC2B4  38 C0 00 00 */	li r6, 0
/* 803CF378 003CC2B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CF37C 003CC2BC  7D 89 03 A6 */	mtctr r12
/* 803CF380 003CC2C0  4E 80 04 21 */	bctrl 
/* 803CF384 003CC2C4  48 00 00 48 */	b .L_803CF3CC
.L_803CF388:
/* 803CF388 003CC2C8  7F C3 F3 78 */	mr r3, r30
/* 803CF38C 003CC2CC  7F E4 FB 78 */	mr r4, r31
/* 803CF390 003CC2D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803CF394 003CC2D4  38 A0 00 04 */	li r5, 4
/* 803CF398 003CC2D8  38 C0 00 00 */	li r6, 0
/* 803CF39C 003CC2DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CF3A0 003CC2E0  7D 89 03 A6 */	mtctr r12
/* 803CF3A4 003CC2E4  4E 80 04 21 */	bctrl 
/* 803CF3A8 003CC2E8  48 00 00 24 */	b .L_803CF3CC
.L_803CF3AC:
/* 803CF3AC 003CC2EC  7F C3 F3 78 */	mr r3, r30
/* 803CF3B0 003CC2F0  7F E4 FB 78 */	mr r4, r31
/* 803CF3B4 003CC2F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803CF3B8 003CC2F8  38 A0 00 03 */	li r5, 3
/* 803CF3BC 003CC2FC  38 C0 00 00 */	li r6, 0
/* 803CF3C0 003CC300  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803CF3C4 003CC304  7D 89 03 A6 */	mtctr r12
/* 803CF3C8 003CC308  4E 80 04 21 */	bctrl 
.L_803CF3CC:
/* 803CF3CC 003CC30C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CF3D0 003CC310  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CF3D4 003CC314  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CF3D8 003CC318  7C 08 03 A6 */	mtlr r0
/* 803CF3DC 003CC31C  38 21 00 10 */	addi r1, r1, 0x10
/* 803CF3E0 003CC320  4E 80 00 20 */	blr 

.global __ct__Q33ebi6Option4TMgrFv
__ct__Q33ebi6Option4TMgrFv:
/* 803CF3E4 003CC324  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CF3E8 003CC328  7C 08 02 A6 */	mflr r0
/* 803CF3EC 003CC32C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CF3F0 003CC330  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CF3F4 003CC334  7C 7F 1B 78 */	mr r31, r3
/* 803CF3F8 003CC338  48 00 04 7D */	bl __ct__Q33ebi6Screen7TOptionFv
/* 803CF3FC 003CC33C  38 00 00 00 */	li r0, 0
/* 803CF400 003CC340  3C 60 80 4F */	lis r3, "__vt__Q24Game32StateMachine<Q33ebi6Option4TMgr>"@ha
/* 803CF404 003CC344  98 1F 0F 20 */	stb r0, 0xf20(r31)
/* 803CF408 003CC348  38 03 88 54 */	addi r0, r3, "__vt__Q24Game32StateMachine<Q33ebi6Option4TMgr>"@l
/* 803CF40C 003CC34C  3C 60 80 4F */	lis r3, __vt__Q33ebi6Option15FSMStateMachine@ha
/* 803CF410 003CC350  38 A0 FF FF */	li r5, -1
/* 803CF414 003CC354  90 1F 0F 24 */	stw r0, 0xf24(r31)
/* 803CF418 003CC358  38 03 89 CC */	addi r0, r3, __vt__Q33ebi6Option15FSMStateMachine@l
/* 803CF41C 003CC35C  38 7F 0F 24 */	addi r3, r31, 0xf24
/* 803CF420 003CC360  7F E4 FB 78 */	mr r4, r31
/* 803CF424 003CC364  90 BF 0F 3C */	stw r5, 0xf3c(r31)
/* 803CF428 003CC368  90 1F 0F 24 */	stw r0, 0xf24(r31)
/* 803CF42C 003CC36C  81 9F 0F 24 */	lwz r12, 0xf24(r31)
/* 803CF430 003CC370  81 8C 00 08 */	lwz r12, 8(r12)
/* 803CF434 003CC374  7D 89 03 A6 */	mtctr r12
/* 803CF438 003CC378  4E 80 04 21 */	bctrl 
/* 803CF43C 003CC37C  38 7F 0F 24 */	addi r3, r31, 0xf24
/* 803CF440 003CC380  7F E4 FB 78 */	mr r4, r31
/* 803CF444 003CC384  81 9F 0F 24 */	lwz r12, 0xf24(r31)
/* 803CF448 003CC388  38 A0 00 00 */	li r5, 0
/* 803CF44C 003CC38C  38 C0 00 00 */	li r6, 0
/* 803CF450 003CC390  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803CF454 003CC394  7D 89 03 A6 */	mtctr r12
/* 803CF458 003CC398  4E 80 04 21 */	bctrl 
/* 803CF45C 003CC39C  48 00 D4 15 */	bl createInstance__Q33ebi4Save4TMgrFv
/* 803CF460 003CC3A0  90 7F 0F 18 */	stw r3, 0xf18(r31)
/* 803CF464 003CC3A4  38 A0 00 01 */	li r5, 1
/* 803CF468 003CC3A8  38 00 00 00 */	li r0, 0
/* 803CF46C 003CC3AC  7F E3 FB 78 */	mr r3, r31
/* 803CF470 003CC3B0  80 9F 0F 18 */	lwz r4, 0xf18(r31)
/* 803CF474 003CC3B4  90 A4 04 70 */	stw r5, 0x470(r4)
/* 803CF478 003CC3B8  80 9F 0F 18 */	lwz r4, 0xf18(r31)
/* 803CF47C 003CC3BC  98 A4 04 78 */	stb r5, 0x478(r4)
/* 803CF480 003CC3C0  80 9F 0F 18 */	lwz r4, 0xf18(r31)
/* 803CF484 003CC3C4  98 A4 04 79 */	stb r5, 0x479(r4)
/* 803CF488 003CC3C8  80 9F 0F 18 */	lwz r4, 0xf18(r31)
/* 803CF48C 003CC3CC  98 04 04 7A */	stb r0, 0x47a(r4)
/* 803CF490 003CC3D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CF494 003CC3D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CF498 003CC3D8  7C 08 03 A6 */	mtlr r0
/* 803CF49C 003CC3DC  38 21 00 10 */	addi r1, r1, 0x10
/* 803CF4A0 003CC3E0  4E 80 00 20 */	blr 

.global "start__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
"start__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg":
/* 803CF4A4 003CC3E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CF4A8 003CC3E8  7C 08 02 A6 */	mflr r0
/* 803CF4AC 003CC3EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CF4B0 003CC3F0  38 00 00 00 */	li r0, 0
/* 803CF4B4 003CC3F4  90 04 0F 40 */	stw r0, 0xf40(r4)
/* 803CF4B8 003CC3F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803CF4BC 003CC3FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803CF4C0 003CC400  7D 89 03 A6 */	mtctr r12
/* 803CF4C4 003CC404  4E 80 04 21 */	bctrl 
/* 803CF4C8 003CC408  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CF4CC 003CC40C  7C 08 03 A6 */	mtlr r0
/* 803CF4D0 003CC410  38 21 00 10 */	addi r1, r1, 0x10
/* 803CF4D4 003CC414  4E 80 00 20 */	blr 

.global __dt__Q33ebi6Screen7TOptionFv
__dt__Q33ebi6Screen7TOptionFv:
/* 803CF4D8 003CC418  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CF4DC 003CC41C  7C 08 02 A6 */	mflr r0
/* 803CF4E0 003CC420  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CF4E4 003CC424  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CF4E8 003CC428  7C 9F 23 78 */	mr r31, r4
/* 803CF4EC 003CC42C  93 C1 00 08 */	stw r30, 8(r1)
/* 803CF4F0 003CC430  7C 7E 1B 79 */	or. r30, r3, r3
/* 803CF4F4 003CC434  41 82 02 D4 */	beq .L_803CF7C8
/* 803CF4F8 003CC438  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen7TOption@ha
/* 803CF4FC 003CC43C  34 1E 0E AC */	addic. r0, r30, 0xeac
/* 803CF500 003CC440  38 03 87 88 */	addi r0, r3, __vt__Q33ebi6Screen7TOption@l
/* 803CF504 003CC444  90 1E 00 00 */	stw r0, 0(r30)
/* 803CF508 003CC448  41 82 00 58 */	beq .L_803CF560
/* 803CF50C 003CC44C  3C 60 80 4F */	lis r3, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
/* 803CF510 003CC450  34 1E 0E AC */	addic. r0, r30, 0xeac
/* 803CF514 003CC454  38 03 89 E8 */	addi r0, r3, __vt__Q23ebi24E2DCallBack_WindowCursor@l
/* 803CF518 003CC458  90 1E 0E AC */	stw r0, 0xeac(r30)
/* 803CF51C 003CC45C  41 82 00 44 */	beq .L_803CF560
/* 803CF520 003CC460  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CF524 003CC464  34 1E 0E AC */	addic. r0, r30, 0xeac
/* 803CF528 003CC468  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CF52C 003CC46C  90 1E 0E AC */	stw r0, 0xeac(r30)
/* 803CF530 003CC470  41 82 00 30 */	beq .L_803CF560
/* 803CF534 003CC474  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CF538 003CC478  34 1E 0E AC */	addic. r0, r30, 0xeac
/* 803CF53C 003CC47C  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803CF540 003CC480  90 1E 0E AC */	stw r0, 0xeac(r30)
/* 803CF544 003CC484  41 82 00 1C */	beq .L_803CF560
/* 803CF548 003CC488  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803CF54C 003CC48C  38 7E 0E AC */	addi r3, r30, 0xeac
/* 803CF550 003CC490  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803CF554 003CC494  38 80 00 00 */	li r4, 0
/* 803CF558 003CC498  90 1E 0E AC */	stw r0, 0xeac(r30)
/* 803CF55C 003CC49C  48 04 20 2D */	bl __dt__5CNodeFv
.L_803CF560:
/* 803CF560 003CC4A0  3C 80 80 3D */	lis r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CF564 003CC4A4  38 7E 0C 2C */	addi r3, r30, 0xc2c
/* 803CF568 003CC4A8  38 84 F7 E4 */	addi r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CF56C 003CC4AC  38 A0 00 40 */	li r5, 0x40
/* 803CF570 003CC4B0  38 C0 00 0A */	li r6, 0xa
/* 803CF574 003CC4B4  4B CF 22 51 */	bl __destroy_arr
/* 803CF578 003CC4B8  3C 80 80 3D */	lis r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CF57C 003CC4BC  38 7E 09 AC */	addi r3, r30, 0x9ac
/* 803CF580 003CC4C0  38 84 F7 E4 */	addi r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CF584 003CC4C4  38 A0 00 40 */	li r5, 0x40
/* 803CF588 003CC4C8  38 C0 00 0A */	li r6, 0xa
/* 803CF58C 003CC4CC  4B CF 22 39 */	bl __destroy_arr
/* 803CF590 003CC4D0  3C 80 80 3D */	lis r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CF594 003CC4D4  38 7E 07 2C */	addi r3, r30, 0x72c
/* 803CF598 003CC4D8  38 84 F7 E4 */	addi r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CF59C 003CC4DC  38 A0 00 40 */	li r5, 0x40
/* 803CF5A0 003CC4E0  38 C0 00 0A */	li r6, 0xa
/* 803CF5A4 003CC4E4  4B CF 22 21 */	bl __destroy_arr
/* 803CF5A8 003CC4E8  3C 80 80 3D */	lis r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CF5AC 003CC4EC  38 7E 04 AC */	addi r3, r30, 0x4ac
/* 803CF5B0 003CC4F0  38 84 F7 E4 */	addi r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CF5B4 003CC4F4  38 A0 00 40 */	li r5, 0x40
/* 803CF5B8 003CC4F8  38 C0 00 0A */	li r6, 0xa
/* 803CF5BC 003CC4FC  4B CF 22 09 */	bl __destroy_arr
/* 803CF5C0 003CC500  3C 80 80 3D */	lis r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CF5C4 003CC504  38 7E 02 EC */	addi r3, r30, 0x2ec
/* 803CF5C8 003CC508  38 84 F7 E4 */	addi r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CF5CC 003CC50C  38 A0 00 40 */	li r5, 0x40
/* 803CF5D0 003CC510  38 C0 00 07 */	li r6, 7
/* 803CF5D4 003CC514  4B CF 21 F1 */	bl __destroy_arr
/* 803CF5D8 003CC518  34 1E 02 BC */	addic. r0, r30, 0x2bc
/* 803CF5DC 003CC51C  41 82 00 58 */	beq .L_803CF634
/* 803CF5E0 003CC520  3C 60 80 4F */	lis r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@ha
/* 803CF5E4 003CC524  34 1E 02 BC */	addic. r0, r30, 0x2bc
/* 803CF5E8 003CC528  38 03 8A 30 */	addi r0, r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@l
/* 803CF5EC 003CC52C  90 1E 02 BC */	stw r0, 0x2bc(r30)
/* 803CF5F0 003CC530  41 82 00 44 */	beq .L_803CF634
/* 803CF5F4 003CC534  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CF5F8 003CC538  34 1E 02 BC */	addic. r0, r30, 0x2bc
/* 803CF5FC 003CC53C  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CF600 003CC540  90 1E 02 BC */	stw r0, 0x2bc(r30)
/* 803CF604 003CC544  41 82 00 30 */	beq .L_803CF634
/* 803CF608 003CC548  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CF60C 003CC54C  34 1E 02 BC */	addic. r0, r30, 0x2bc
/* 803CF610 003CC550  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803CF614 003CC554  90 1E 02 BC */	stw r0, 0x2bc(r30)
/* 803CF618 003CC558  41 82 00 1C */	beq .L_803CF634
/* 803CF61C 003CC55C  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803CF620 003CC560  38 7E 02 BC */	addi r3, r30, 0x2bc
/* 803CF624 003CC564  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803CF628 003CC568  38 80 00 00 */	li r4, 0
/* 803CF62C 003CC56C  90 1E 02 BC */	stw r0, 0x2bc(r30)
/* 803CF630 003CC570  48 04 1F 59 */	bl __dt__5CNodeFv
.L_803CF634:
/* 803CF634 003CC574  34 1E 02 8C */	addic. r0, r30, 0x28c
/* 803CF638 003CC578  41 82 00 58 */	beq .L_803CF690
/* 803CF63C 003CC57C  3C 60 80 4F */	lis r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@ha
/* 803CF640 003CC580  34 1E 02 8C */	addic. r0, r30, 0x28c
/* 803CF644 003CC584  38 03 8A 30 */	addi r0, r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@l
/* 803CF648 003CC588  90 1E 02 8C */	stw r0, 0x28c(r30)
/* 803CF64C 003CC58C  41 82 00 44 */	beq .L_803CF690
/* 803CF650 003CC590  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CF654 003CC594  34 1E 02 8C */	addic. r0, r30, 0x28c
/* 803CF658 003CC598  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CF65C 003CC59C  90 1E 02 8C */	stw r0, 0x28c(r30)
/* 803CF660 003CC5A0  41 82 00 30 */	beq .L_803CF690
/* 803CF664 003CC5A4  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CF668 003CC5A8  34 1E 02 8C */	addic. r0, r30, 0x28c
/* 803CF66C 003CC5AC  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803CF670 003CC5B0  90 1E 02 8C */	stw r0, 0x28c(r30)
/* 803CF674 003CC5B4  41 82 00 1C */	beq .L_803CF690
/* 803CF678 003CC5B8  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803CF67C 003CC5BC  38 7E 02 8C */	addi r3, r30, 0x28c
/* 803CF680 003CC5C0  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803CF684 003CC5C4  38 80 00 00 */	li r4, 0
/* 803CF688 003CC5C8  90 1E 02 8C */	stw r0, 0x28c(r30)
/* 803CF68C 003CC5CC  48 04 1E FD */	bl __dt__5CNodeFv
.L_803CF690:
/* 803CF690 003CC5D0  34 1E 02 40 */	addic. r0, r30, 0x240
/* 803CF694 003CC5D4  41 82 00 58 */	beq .L_803CF6EC
/* 803CF698 003CC5D8  3C 60 80 4F */	lis r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803CF69C 003CC5DC  34 1E 02 40 */	addic. r0, r30, 0x240
/* 803CF6A0 003CC5E0  38 03 8A 54 */	addi r0, r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803CF6A4 003CC5E4  90 1E 02 40 */	stw r0, 0x240(r30)
/* 803CF6A8 003CC5E8  41 82 00 44 */	beq .L_803CF6EC
/* 803CF6AC 003CC5EC  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CF6B0 003CC5F0  34 1E 02 40 */	addic. r0, r30, 0x240
/* 803CF6B4 003CC5F4  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CF6B8 003CC5F8  90 1E 02 40 */	stw r0, 0x240(r30)
/* 803CF6BC 003CC5FC  41 82 00 30 */	beq .L_803CF6EC
/* 803CF6C0 003CC600  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CF6C4 003CC604  34 1E 02 40 */	addic. r0, r30, 0x240
/* 803CF6C8 003CC608  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803CF6CC 003CC60C  90 1E 02 40 */	stw r0, 0x240(r30)
/* 803CF6D0 003CC610  41 82 00 1C */	beq .L_803CF6EC
/* 803CF6D4 003CC614  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803CF6D8 003CC618  38 7E 02 40 */	addi r3, r30, 0x240
/* 803CF6DC 003CC61C  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803CF6E0 003CC620  38 80 00 00 */	li r4, 0
/* 803CF6E4 003CC624  90 1E 02 40 */	stw r0, 0x240(r30)
/* 803CF6E8 003CC628  48 04 1E A1 */	bl __dt__5CNodeFv
.L_803CF6EC:
/* 803CF6EC 003CC62C  34 1E 02 20 */	addic. r0, r30, 0x220
/* 803CF6F0 003CC630  41 82 00 58 */	beq .L_803CF748
/* 803CF6F4 003CC634  3C 60 80 4F */	lis r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803CF6F8 003CC638  34 1E 02 20 */	addic. r0, r30, 0x220
/* 803CF6FC 003CC63C  38 03 88 0C */	addi r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803CF700 003CC640  90 1E 02 20 */	stw r0, 0x220(r30)
/* 803CF704 003CC644  41 82 00 44 */	beq .L_803CF748
/* 803CF708 003CC648  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CF70C 003CC64C  34 1E 02 20 */	addic. r0, r30, 0x220
/* 803CF710 003CC650  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CF714 003CC654  90 1E 02 20 */	stw r0, 0x220(r30)
/* 803CF718 003CC658  41 82 00 30 */	beq .L_803CF748
/* 803CF71C 003CC65C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CF720 003CC660  34 1E 02 20 */	addic. r0, r30, 0x220
/* 803CF724 003CC664  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803CF728 003CC668  90 1E 02 20 */	stw r0, 0x220(r30)
/* 803CF72C 003CC66C  41 82 00 1C */	beq .L_803CF748
/* 803CF730 003CC670  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803CF734 003CC674  38 7E 02 20 */	addi r3, r30, 0x220
/* 803CF738 003CC678  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803CF73C 003CC67C  38 80 00 00 */	li r4, 0
/* 803CF740 003CC680  90 1E 02 20 */	stw r0, 0x220(r30)
/* 803CF744 003CC684  48 04 1E 45 */	bl __dt__5CNodeFv
.L_803CF748:
/* 803CF748 003CC688  34 1E 01 E4 */	addic. r0, r30, 0x1e4
/* 803CF74C 003CC68C  41 82 00 6C */	beq .L_803CF7B8
/* 803CF750 003CC690  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803CF754 003CC694  34 1E 02 04 */	addic. r0, r30, 0x204
/* 803CF758 003CC698  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803CF75C 003CC69C  90 1E 01 E4 */	stw r0, 0x1e4(r30)
/* 803CF760 003CC6A0  41 82 00 10 */	beq .L_803CF770
/* 803CF764 003CC6A4  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803CF768 003CC6A8  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803CF76C 003CC6AC  90 1E 02 04 */	stw r0, 0x204(r30)
.L_803CF770:
/* 803CF770 003CC6B0  34 1E 01 E4 */	addic. r0, r30, 0x1e4
/* 803CF774 003CC6B4  41 82 00 44 */	beq .L_803CF7B8
/* 803CF778 003CC6B8  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CF77C 003CC6BC  34 1E 01 E4 */	addic. r0, r30, 0x1e4
/* 803CF780 003CC6C0  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CF784 003CC6C4  90 1E 01 E4 */	stw r0, 0x1e4(r30)
/* 803CF788 003CC6C8  41 82 00 30 */	beq .L_803CF7B8
/* 803CF78C 003CC6CC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CF790 003CC6D0  34 1E 01 E4 */	addic. r0, r30, 0x1e4
/* 803CF794 003CC6D4  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803CF798 003CC6D8  90 1E 01 E4 */	stw r0, 0x1e4(r30)
/* 803CF79C 003CC6DC  41 82 00 1C */	beq .L_803CF7B8
/* 803CF7A0 003CC6E0  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803CF7A4 003CC6E4  38 7E 01 E4 */	addi r3, r30, 0x1e4
/* 803CF7A8 003CC6E8  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803CF7AC 003CC6EC  38 80 00 00 */	li r4, 0
/* 803CF7B0 003CC6F0  90 1E 01 E4 */	stw r0, 0x1e4(r30)
/* 803CF7B4 003CC6F4  48 04 1D D5 */	bl __dt__5CNodeFv
.L_803CF7B8:
/* 803CF7B8 003CC6F8  7F E0 07 35 */	extsh. r0, r31
/* 803CF7BC 003CC6FC  40 81 00 0C */	ble .L_803CF7C8
/* 803CF7C0 003CC700  7F C3 F3 78 */	mr r3, r30
/* 803CF7C4 003CC704  4B C5 48 F1 */	bl __dl__FPv
.L_803CF7C8:
/* 803CF7C8 003CC708  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CF7CC 003CC70C  7F C3 F3 78 */	mr r3, r30
/* 803CF7D0 003CC710  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CF7D4 003CC714  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CF7D8 003CC718  7C 08 03 A6 */	mtlr r0
/* 803CF7DC 003CC71C  38 21 00 10 */	addi r1, r1, 0x10
/* 803CF7E0 003CC720  4E 80 00 20 */	blr 

.global __dt__Q23ebi20E2DCallBack_PurupuruFv
__dt__Q23ebi20E2DCallBack_PurupuruFv:
/* 803CF7E4 003CC724  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CF7E8 003CC728  7C 08 02 A6 */	mflr r0
/* 803CF7EC 003CC72C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CF7F0 003CC730  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CF7F4 003CC734  7C 9F 23 78 */	mr r31, r4
/* 803CF7F8 003CC738  93 C1 00 08 */	stw r30, 8(r1)
/* 803CF7FC 003CC73C  7C 7E 1B 79 */	or. r30, r3, r3
/* 803CF800 003CC740  41 82 00 58 */	beq .L_803CF858
/* 803CF804 003CC744  3C 80 80 4F */	lis r4, __vt__Q23ebi20E2DCallBack_Purupuru@ha
/* 803CF808 003CC748  38 04 8A 78 */	addi r0, r4, __vt__Q23ebi20E2DCallBack_Purupuru@l
/* 803CF80C 003CC74C  90 1E 00 00 */	stw r0, 0(r30)
/* 803CF810 003CC750  41 82 00 38 */	beq .L_803CF848
/* 803CF814 003CC754  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CF818 003CC758  38 04 88 30 */	addi r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CF81C 003CC75C  90 1E 00 00 */	stw r0, 0(r30)
/* 803CF820 003CC760  41 82 00 28 */	beq .L_803CF848
/* 803CF824 003CC764  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CF828 003CC768  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803CF82C 003CC76C  90 1E 00 00 */	stw r0, 0(r30)
/* 803CF830 003CC770  41 82 00 18 */	beq .L_803CF848
/* 803CF834 003CC774  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 803CF838 003CC778  38 80 00 00 */	li r4, 0
/* 803CF83C 003CC77C  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 803CF840 003CC780  90 1E 00 00 */	stw r0, 0(r30)
/* 803CF844 003CC784  48 04 1D 45 */	bl __dt__5CNodeFv
.L_803CF848:
/* 803CF848 003CC788  7F E0 07 35 */	extsh. r0, r31
/* 803CF84C 003CC78C  40 81 00 0C */	ble .L_803CF858
/* 803CF850 003CC790  7F C3 F3 78 */	mr r3, r30
/* 803CF854 003CC794  4B C5 48 61 */	bl __dl__FPv
.L_803CF858:
/* 803CF858 003CC798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CF85C 003CC79C  7F C3 F3 78 */	mr r3, r30
/* 803CF860 003CC7A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CF864 003CC7A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CF868 003CC7A8  7C 08 03 A6 */	mtlr r0
/* 803CF86C 003CC7AC  38 21 00 10 */	addi r1, r1, 0x10
/* 803CF870 003CC7B0  4E 80 00 20 */	blr 

.global __ct__Q33ebi6Screen7TOptionFv
__ct__Q33ebi6Screen7TOptionFv:
/* 803CF874 003CC7B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803CF878 003CC7B8  7C 08 02 A6 */	mflr r0
/* 803CF87C 003CC7BC  3C 80 80 4F */	lis r4, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
/* 803CF880 003CC7C0  38 E0 00 00 */	li r7, 0
/* 803CF884 003CC7C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803CF888 003CC7C8  38 04 87 E8 */	addi r0, r4, __vt__Q33ebi6Screen20TScreenBaseInterface@l
/* 803CF88C 003CC7CC  38 A0 00 01 */	li r5, 1
/* 803CF890 003CC7D0  38 80 00 FF */	li r4, 0xff
/* 803CF894 003CC7D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803CF898 003CC7D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803CF89C 003CC7DC  7C 7E 1B 78 */	mr r30, r3
/* 803CF8A0 003CC7E0  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen11TScreenBase@ha
/* 803CF8A4 003CC7E4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803CF8A8 003CC7E8  3B FE 01 E4 */	addi r31, r30, 0x1e4
/* 803CF8AC 003CC7EC  90 1E 00 00 */	stw r0, 0(r30)
/* 803CF8B0 003CC7F0  38 03 8C 90 */	addi r0, r3, __vt__Q33ebi6Screen11TScreenBase@l
/* 803CF8B4 003CC7F4  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen7TOption@ha
/* 803CF8B8 003CC7F8  90 1E 00 00 */	stw r0, 0(r30)
/* 803CF8BC 003CC7FC  38 C3 87 88 */	addi r6, r3, __vt__Q33ebi6Screen7TOption@l
/* 803CF8C0 003CC800  38 00 FF FF */	li r0, -1
/* 803CF8C4 003CC804  7F E3 FB 78 */	mr r3, r31
/* 803CF8C8 003CC808  90 FE 00 04 */	stw r7, 4(r30)
/* 803CF8CC 003CC80C  90 FE 00 08 */	stw r7, 8(r30)
/* 803CF8D0 003CC810  90 DE 00 00 */	stw r6, 0(r30)
/* 803CF8D4 003CC814  98 BE 00 10 */	stb r5, 0x10(r30)
/* 803CF8D8 003CC818  90 FE 00 18 */	stw r7, 0x18(r30)
/* 803CF8DC 003CC81C  90 FE 00 1C */	stw r7, 0x1c(r30)
/* 803CF8E0 003CC820  90 FE 00 44 */	stw r7, 0x44(r30)
/* 803CF8E4 003CC824  90 FE 00 48 */	stw r7, 0x48(r30)
/* 803CF8E8 003CC828  90 FE 00 70 */	stw r7, 0x70(r30)
/* 803CF8EC 003CC82C  90 FE 00 74 */	stw r7, 0x74(r30)
/* 803CF8F0 003CC830  90 FE 00 9C */	stw r7, 0x9c(r30)
/* 803CF8F4 003CC834  90 FE 00 A0 */	stw r7, 0xa0(r30)
/* 803CF8F8 003CC838  98 FE 00 C8 */	stb r7, 0xc8(r30)
/* 803CF8FC 003CC83C  98 FE 00 C9 */	stb r7, 0xc9(r30)
/* 803CF900 003CC840  90 FE 00 CC */	stw r7, 0xcc(r30)
/* 803CF904 003CC844  90 FE 00 D0 */	stw r7, 0xd0(r30)
/* 803CF908 003CC848  90 FE 00 D4 */	stw r7, 0xd4(r30)
/* 803CF90C 003CC84C  98 FE 00 D8 */	stb r7, 0xd8(r30)
/* 803CF910 003CC850  98 FE 00 DC */	stb r7, 0xdc(r30)
/* 803CF914 003CC854  98 FE 00 DD */	stb r7, 0xdd(r30)
/* 803CF918 003CC858  90 FE 00 E0 */	stw r7, 0xe0(r30)
/* 803CF91C 003CC85C  90 FE 00 E4 */	stw r7, 0xe4(r30)
/* 803CF920 003CC860  90 FE 00 E8 */	stw r7, 0xe8(r30)
/* 803CF924 003CC864  98 FE 00 EC */	stb r7, 0xec(r30)
/* 803CF928 003CC868  98 FE 00 F0 */	stb r7, 0xf0(r30)
/* 803CF92C 003CC86C  98 FE 00 F1 */	stb r7, 0xf1(r30)
/* 803CF930 003CC870  98 FE 00 F2 */	stb r7, 0xf2(r30)
/* 803CF934 003CC874  98 9E 00 F3 */	stb r4, 0xf3(r30)
/* 803CF938 003CC878  98 9E 00 F4 */	stb r4, 0xf4(r30)
/* 803CF93C 003CC87C  90 FE 00 F8 */	stw r7, 0xf8(r30)
/* 803CF940 003CC880  90 FE 00 FC */	stw r7, 0xfc(r30)
/* 803CF944 003CC884  90 FE 01 00 */	stw r7, 0x100(r30)
/* 803CF948 003CC888  90 1E 01 C4 */	stw r0, 0x1c4(r30)
/* 803CF94C 003CC88C  90 1E 01 C8 */	stw r0, 0x1c8(r30)
/* 803CF950 003CC890  90 1E 01 CC */	stw r0, 0x1cc(r30)
/* 803CF954 003CC894  90 1E 01 D0 */	stw r0, 0x1d0(r30)
/* 803CF958 003CC898  90 1E 01 D4 */	stw r0, 0x1d4(r30)
/* 803CF95C 003CC89C  90 1E 01 D8 */	stw r0, 0x1d8(r30)
/* 803CF960 003CC8A0  90 1E 01 DC */	stw r0, 0x1dc(r30)
/* 803CF964 003CC8A4  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 803CF968 003CC8A8  48 04 1A 29 */	bl __ct__5CNodeFv
/* 803CF96C 003CC8AC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803CF970 003CC8B0  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CF974 003CC8B4  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803CF978 003CC8B8  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CF97C 003CC8BC  90 1F 00 00 */	stw r0, 0(r31)
/* 803CF980 003CC8C0  38 00 00 00 */	li r0, 0
/* 803CF984 003CC8C4  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803CF988 003CC8C8  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803CF98C 003CC8CC  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803CF990 003CC8D0  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803CF994 003CC8D4  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CF998 003CC8D8  38 C0 00 01 */	li r6, 1
/* 803CF99C 003CC8DC  90 1F 00 00 */	stw r0, 0(r31)
/* 803CF9A0 003CC8E0  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803CF9A4 003CC8E4  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803CF9A8 003CC8E8  38 7F 00 20 */	addi r3, r31, 0x20
/* 803CF9AC 003CC8EC  90 FF 00 00 */	stw r7, 0(r31)
/* 803CF9B0 003CC8F0  38 80 00 00 */	li r4, 0
/* 803CF9B4 003CC8F4  98 DF 00 1C */	stb r6, 0x1c(r31)
/* 803CF9B8 003CC8F8  90 BF 00 00 */	stw r5, 0(r31)
/* 803CF9BC 003CC8FC  90 1F 00 20 */	stw r0, 0x20(r31)
/* 803CF9C0 003CC900  4B C9 7C B9 */	bl init__12J3DFrameCtrlFs
/* 803CF9C4 003CC904  3B BE 02 20 */	addi r29, r30, 0x220
/* 803CF9C8 003CC908  7F A3 EB 78 */	mr r3, r29
/* 803CF9CC 003CC90C  48 04 19 C5 */	bl __ct__5CNodeFv
/* 803CF9D0 003CC910  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803CF9D4 003CC914  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CF9D8 003CC918  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803CF9DC 003CC91C  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CF9E0 003CC920  90 1D 00 00 */	stw r0, 0(r29)
/* 803CF9E4 003CC924  38 00 00 00 */	li r0, 0
/* 803CF9E8 003CC928  3C 60 80 4F */	lis r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803CF9EC 003CC92C  3B FE 02 40 */	addi r31, r30, 0x240
/* 803CF9F0 003CC930  90 1D 00 18 */	stw r0, 0x18(r29)
/* 803CF9F4 003CC934  38 05 7F 2C */	addi r0, r5, __vt__Q29P2DScreen12CallBackNode@l
/* 803CF9F8 003CC938  38 A4 88 30 */	addi r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CF9FC 003CC93C  38 80 00 01 */	li r4, 1
/* 803CFA00 003CC940  90 1D 00 00 */	stw r0, 0(r29)
/* 803CFA04 003CC944  38 03 88 0C */	addi r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803CFA08 003CC948  7F E3 FB 78 */	mr r3, r31
/* 803CFA0C 003CC94C  90 BD 00 00 */	stw r5, 0(r29)
/* 803CFA10 003CC950  98 9D 00 1C */	stb r4, 0x1c(r29)
/* 803CFA14 003CC954  90 1D 00 00 */	stw r0, 0(r29)
/* 803CFA18 003CC958  48 04 19 79 */	bl __ct__5CNodeFv
/* 803CFA1C 003CC95C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803CFA20 003CC960  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CFA24 003CC964  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803CFA28 003CC968  3C C0 80 4F */	lis r6, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CFA2C 003CC96C  90 1F 00 00 */	stw r0, 0(r31)
/* 803CFA30 003CC970  38 00 00 00 */	li r0, 0
/* 803CFA34 003CC974  3C 60 80 3D */	lis r3, __ct__Q23ebi16E2DFullFontColorFv@ha
/* 803CFA38 003CC978  38 E0 00 01 */	li r7, 1
/* 803CFA3C 003CC97C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803CFA40 003CC980  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803CFA44 003CC984  38 83 FE EC */	addi r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
/* 803CFA48 003CC988  38 66 88 30 */	addi r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CFA4C 003CC98C  90 1F 00 00 */	stw r0, 0(r31)
/* 803CFA50 003CC990  3C A0 80 4F */	lis r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803CFA54 003CC994  38 05 8A 54 */	addi r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803CFA58 003CC998  38 C0 00 10 */	li r6, 0x10
/* 803CFA5C 003CC99C  90 7F 00 00 */	stw r3, 0(r31)
/* 803CFA60 003CC9A0  38 7F 00 20 */	addi r3, r31, 0x20
/* 803CFA64 003CC9A4  38 A0 00 00 */	li r5, 0
/* 803CFA68 003CC9A8  98 FF 00 1C */	stb r7, 0x1c(r31)
/* 803CFA6C 003CC9AC  38 E0 00 02 */	li r7, 2
/* 803CFA70 003CC9B0  90 1F 00 00 */	stw r0, 0(r31)
/* 803CFA74 003CC9B4  4B CF 1D C9 */	bl __construct_array
/* 803CFA78 003CC9B8  C0 22 17 2C */	lfs f1, lbl_8051FA8C@sda21(r2)
/* 803CFA7C 003CC9BC  3B BE 02 8C */	addi r29, r30, 0x28c
/* 803CFA80 003CC9C0  C0 02 17 30 */	lfs f0, lbl_8051FA90@sda21(r2)
/* 803CFA84 003CC9C4  38 80 00 01 */	li r4, 1
/* 803CFA88 003CC9C8  D0 3F 00 40 */	stfs f1, 0x40(r31)
/* 803CFA8C 003CC9CC  38 00 00 00 */	li r0, 0
/* 803CFA90 003CC9D0  7F A3 EB 78 */	mr r3, r29
/* 803CFA94 003CC9D4  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 803CFA98 003CC9D8  98 9F 00 48 */	stb r4, 0x48(r31)
/* 803CFA9C 003CC9DC  98 1F 00 49 */	stb r0, 0x49(r31)
/* 803CFAA0 003CC9E0  98 1F 00 1C */	stb r0, 0x1c(r31)
/* 803CFAA4 003CC9E4  48 04 18 ED */	bl __ct__5CNodeFv
/* 803CFAA8 003CC9E8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803CFAAC 003CC9EC  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CFAB0 003CC9F0  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803CFAB4 003CC9F4  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CFAB8 003CC9F8  90 1D 00 00 */	stw r0, 0(r29)
/* 803CFABC 003CC9FC  38 E0 00 00 */	li r7, 0
/* 803CFAC0 003CCA00  3C 60 80 4F */	lis r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@ha
/* 803CFAC4 003CCA04  3B FE 02 BC */	addi r31, r30, 0x2bc
/* 803CFAC8 003CCA08  90 FD 00 18 */	stw r7, 0x18(r29)
/* 803CFACC 003CCA0C  38 05 7F 2C */	addi r0, r5, __vt__Q29P2DScreen12CallBackNode@l
/* 803CFAD0 003CCA10  38 C4 88 30 */	addi r6, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CFAD4 003CCA14  38 A0 00 01 */	li r5, 1
/* 803CFAD8 003CCA18  90 1D 00 00 */	stw r0, 0(r29)
/* 803CFADC 003CCA1C  38 83 8A 30 */	addi r4, r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@l
/* 803CFAE0 003CCA20  C0 22 17 2C */	lfs f1, lbl_8051FA8C@sda21(r2)
/* 803CFAE4 003CCA24  38 00 00 FF */	li r0, 0xff
/* 803CFAE8 003CCA28  90 DD 00 00 */	stw r6, 0(r29)
/* 803CFAEC 003CCA2C  7F E3 FB 78 */	mr r3, r31
/* 803CFAF0 003CCA30  C0 02 17 30 */	lfs f0, lbl_8051FA90@sda21(r2)
/* 803CFAF4 003CCA34  98 BD 00 1C */	stb r5, 0x1c(r29)
/* 803CFAF8 003CCA38  90 9D 00 00 */	stw r4, 0(r29)
/* 803CFAFC 003CCA3C  D0 3D 00 20 */	stfs f1, 0x20(r29)
/* 803CFB00 003CCA40  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 803CFB04 003CCA44  98 BD 00 28 */	stb r5, 0x28(r29)
/* 803CFB08 003CCA48  98 FD 00 29 */	stb r7, 0x29(r29)
/* 803CFB0C 003CCA4C  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 803CFB10 003CCA50  98 FD 00 2D */	stb r7, 0x2d(r29)
/* 803CFB14 003CCA54  48 04 18 7D */	bl __ct__5CNodeFv
/* 803CFB18 003CCA58  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803CFB1C 003CCA5C  39 20 00 00 */	li r9, 0
/* 803CFB20 003CCA60  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803CFB24 003CCA64  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CFB28 003CCA68  90 1F 00 00 */	stw r0, 0(r31)
/* 803CFB2C 003CCA6C  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803CFB30 003CCA70  3C 80 80 3D */	lis r4, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CFB34 003CCA74  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CFB38 003CCA78  91 3F 00 18 */	stw r9, 0x18(r31)
/* 803CFB3C 003CCA7C  39 00 00 01 */	li r8, 1
/* 803CFB40 003CCA80  3C C0 80 4F */	lis r6, __vt__Q23ebi22E2DCallBack_BlinkAlpha@ha
/* 803CFB44 003CCA84  3C 60 80 3D */	lis r3, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CFB48 003CCA88  90 1F 00 00 */	stw r0, 0(r31)
/* 803CFB4C 003CCA8C  38 05 88 30 */	addi r0, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CFB50 003CCA90  38 A3 F7 E4 */	addi r5, r3, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CFB54 003CCA94  38 66 8A 30 */	addi r3, r6, __vt__Q23ebi22E2DCallBack_BlinkAlpha@l
/* 803CFB58 003CCA98  90 1F 00 00 */	stw r0, 0(r31)
/* 803CFB5C 003CCA9C  38 00 00 FF */	li r0, 0xff
/* 803CFB60 003CCAA0  C0 22 17 2C */	lfs f1, lbl_8051FA8C@sda21(r2)
/* 803CFB64 003CCAA4  38 84 FD 40 */	addi r4, r4, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CFB68 003CCAA8  99 1F 00 1C */	stb r8, 0x1c(r31)
/* 803CFB6C 003CCAAC  38 C0 00 40 */	li r6, 0x40
/* 803CFB70 003CCAB0  C0 02 17 30 */	lfs f0, lbl_8051FA90@sda21(r2)
/* 803CFB74 003CCAB4  38 E0 00 07 */	li r7, 7
/* 803CFB78 003CCAB8  90 7F 00 00 */	stw r3, 0(r31)
/* 803CFB7C 003CCABC  38 7E 02 EC */	addi r3, r30, 0x2ec
/* 803CFB80 003CCAC0  D0 3F 00 20 */	stfs f1, 0x20(r31)
/* 803CFB84 003CCAC4  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 803CFB88 003CCAC8  99 1F 00 28 */	stb r8, 0x28(r31)
/* 803CFB8C 003CCACC  99 3F 00 29 */	stb r9, 0x29(r31)
/* 803CFB90 003CCAD0  98 1F 00 2C */	stb r0, 0x2c(r31)
/* 803CFB94 003CCAD4  99 3F 00 2D */	stb r9, 0x2d(r31)
/* 803CFB98 003CCAD8  4B CF 1C A5 */	bl __construct_array
/* 803CFB9C 003CCADC  3C 60 80 3D */	lis r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CFBA0 003CCAE0  3C A0 80 3D */	lis r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CFBA4 003CCAE4  38 83 FD 40 */	addi r4, r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CFBA8 003CCAE8  38 C0 00 40 */	li r6, 0x40
/* 803CFBAC 003CCAEC  38 7E 04 AC */	addi r3, r30, 0x4ac
/* 803CFBB0 003CCAF0  38 A5 F7 E4 */	addi r5, r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CFBB4 003CCAF4  38 E0 00 0A */	li r7, 0xa
/* 803CFBB8 003CCAF8  4B CF 1C 85 */	bl __construct_array
/* 803CFBBC 003CCAFC  3C 60 80 3D */	lis r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CFBC0 003CCB00  3C A0 80 3D */	lis r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CFBC4 003CCB04  38 83 FD 40 */	addi r4, r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CFBC8 003CCB08  38 C0 00 40 */	li r6, 0x40
/* 803CFBCC 003CCB0C  38 7E 07 2C */	addi r3, r30, 0x72c
/* 803CFBD0 003CCB10  38 A5 F7 E4 */	addi r5, r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CFBD4 003CCB14  38 E0 00 0A */	li r7, 0xa
/* 803CFBD8 003CCB18  4B CF 1C 65 */	bl __construct_array
/* 803CFBDC 003CCB1C  3C 60 80 3D */	lis r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CFBE0 003CCB20  3C A0 80 3D */	lis r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CFBE4 003CCB24  38 83 FD 40 */	addi r4, r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CFBE8 003CCB28  38 C0 00 40 */	li r6, 0x40
/* 803CFBEC 003CCB2C  38 7E 09 AC */	addi r3, r30, 0x9ac
/* 803CFBF0 003CCB30  38 A5 F7 E4 */	addi r5, r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CFBF4 003CCB34  38 E0 00 0A */	li r7, 0xa
/* 803CFBF8 003CCB38  4B CF 1C 45 */	bl __construct_array
/* 803CFBFC 003CCB3C  3C 60 80 3D */	lis r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CFC00 003CCB40  3C A0 80 3D */	lis r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803CFC04 003CCB44  38 83 FD 40 */	addi r4, r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CFC08 003CCB48  38 C0 00 40 */	li r6, 0x40
/* 803CFC0C 003CCB4C  38 7E 0C 2C */	addi r3, r30, 0xc2c
/* 803CFC10 003CCB50  38 A5 F7 E4 */	addi r5, r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803CFC14 003CCB54  38 E0 00 0A */	li r7, 0xa
/* 803CFC18 003CCB58  4B CF 1C 25 */	bl __construct_array
/* 803CFC1C 003CCB5C  3B BE 0E AC */	addi r29, r30, 0xeac
/* 803CFC20 003CCB60  7F A3 EB 78 */	mr r3, r29
/* 803CFC24 003CCB64  48 04 17 6D */	bl __ct__5CNodeFv
/* 803CFC28 003CCB68  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803CFC2C 003CCB6C  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CFC30 003CCB70  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803CFC34 003CCB74  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CFC38 003CCB78  90 1D 00 00 */	stw r0, 0(r29)
/* 803CFC3C 003CCB7C  38 E0 00 00 */	li r7, 0
/* 803CFC40 003CCB80  3C 60 80 4F */	lis r3, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
/* 803CFC44 003CCB84  38 C5 7F 2C */	addi r6, r5, __vt__Q29P2DScreen12CallBackNode@l
/* 803CFC48 003CCB88  90 FD 00 18 */	stw r7, 0x18(r29)
/* 803CFC4C 003CCB8C  38 A4 88 30 */	addi r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CFC50 003CCB90  38 80 00 01 */	li r4, 1
/* 803CFC54 003CCB94  38 03 89 E8 */	addi r0, r3, __vt__Q23ebi24E2DCallBack_WindowCursor@l
/* 803CFC58 003CCB98  90 DD 00 00 */	stw r6, 0(r29)
/* 803CFC5C 003CCB9C  38 7D 00 48 */	addi r3, r29, 0x48
/* 803CFC60 003CCBA0  90 BD 00 00 */	stw r5, 0(r29)
/* 803CFC64 003CCBA4  98 9D 00 1C */	stb r4, 0x1c(r29)
/* 803CFC68 003CCBA8  90 1D 00 00 */	stw r0, 0(r29)
/* 803CFC6C 003CCBAC  90 FD 00 40 */	stw r7, 0x40(r29)
/* 803CFC70 003CCBB0  90 FD 00 44 */	stw r7, 0x44(r29)
/* 803CFC74 003CCBB4  4B F5 91 91 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 803CFC78 003CCBB8  C0 02 17 28 */	lfs f0, lbl_8051FA88@sda21(r2)
/* 803CFC7C 003CCBBC  38 00 00 00 */	li r0, 0
/* 803CFC80 003CCBC0  38 7E 00 C8 */	addi r3, r30, 0xc8
/* 803CFC84 003CCBC4  D0 1D 00 64 */	stfs f0, 0x64(r29)
/* 803CFC88 003CCBC8  90 1D 00 68 */	stw r0, 0x68(r29)
/* 803CFC8C 003CCBCC  4B FF B3 39 */	bl initParamForTest__Q33ebi6Screen16TOptionParameterFv
/* 803CFC90 003CCBD0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803CFC94 003CCBD4  7F C3 F3 78 */	mr r3, r30
/* 803CFC98 003CCBD8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803CFC9C 003CCBDC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803CFCA0 003CCBE0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803CFCA4 003CCBE4  7C 08 03 A6 */	mtlr r0
/* 803CFCA8 003CCBE8  38 21 00 20 */	addi r1, r1, 0x20
/* 803CFCAC 003CCBEC  4E 80 00 20 */	blr 

.global __dt__Q23ebi24E2DCallBack_WindowCursorFv
__dt__Q23ebi24E2DCallBack_WindowCursorFv:
/* 803CFCB0 003CCBF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CFCB4 003CCBF4  7C 08 02 A6 */	mflr r0
/* 803CFCB8 003CCBF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CFCBC 003CCBFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CFCC0 003CCC00  7C 9F 23 78 */	mr r31, r4
/* 803CFCC4 003CCC04  93 C1 00 08 */	stw r30, 8(r1)
/* 803CFCC8 003CCC08  7C 7E 1B 79 */	or. r30, r3, r3
/* 803CFCCC 003CCC0C  41 82 00 58 */	beq .L_803CFD24
/* 803CFCD0 003CCC10  3C 80 80 4F */	lis r4, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
/* 803CFCD4 003CCC14  38 04 89 E8 */	addi r0, r4, __vt__Q23ebi24E2DCallBack_WindowCursor@l
/* 803CFCD8 003CCC18  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFCDC 003CCC1C  41 82 00 38 */	beq .L_803CFD14
/* 803CFCE0 003CCC20  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CFCE4 003CCC24  38 04 88 30 */	addi r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CFCE8 003CCC28  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFCEC 003CCC2C  41 82 00 28 */	beq .L_803CFD14
/* 803CFCF0 003CCC30  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CFCF4 003CCC34  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803CFCF8 003CCC38  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFCFC 003CCC3C  41 82 00 18 */	beq .L_803CFD14
/* 803CFD00 003CCC40  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 803CFD04 003CCC44  38 80 00 00 */	li r4, 0
/* 803CFD08 003CCC48  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 803CFD0C 003CCC4C  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFD10 003CCC50  48 04 18 79 */	bl __dt__5CNodeFv
.L_803CFD14:
/* 803CFD14 003CCC54  7F E0 07 35 */	extsh. r0, r31
/* 803CFD18 003CCC58  40 81 00 0C */	ble .L_803CFD24
/* 803CFD1C 003CCC5C  7F C3 F3 78 */	mr r3, r30
/* 803CFD20 003CCC60  4B C5 43 95 */	bl __dl__FPv
.L_803CFD24:
/* 803CFD24 003CCC64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CFD28 003CCC68  7F C3 F3 78 */	mr r3, r30
/* 803CFD2C 003CCC6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CFD30 003CCC70  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CFD34 003CCC74  7C 08 03 A6 */	mtlr r0
/* 803CFD38 003CCC78  38 21 00 10 */	addi r1, r1, 0x10
/* 803CFD3C 003CCC7C  4E 80 00 20 */	blr 

.global __ct__Q23ebi20E2DCallBack_PurupuruFv
__ct__Q23ebi20E2DCallBack_PurupuruFv:
/* 803CFD40 003CCC80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CFD44 003CCC84  7C 08 02 A6 */	mflr r0
/* 803CFD48 003CCC88  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CFD4C 003CCC8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CFD50 003CCC90  93 C1 00 08 */	stw r30, 8(r1)
/* 803CFD54 003CCC94  7C 7E 1B 78 */	mr r30, r3
/* 803CFD58 003CCC98  7F DF F3 78 */	mr r31, r30
/* 803CFD5C 003CCC9C  48 04 16 35 */	bl __ct__5CNodeFv
/* 803CFD60 003CCCA0  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803CFD64 003CCCA4  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CFD68 003CCCA8  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803CFD6C 003CCCAC  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CFD70 003CCCB0  90 1F 00 00 */	stw r0, 0(r31)
/* 803CFD74 003CCCB4  38 00 00 00 */	li r0, 0
/* 803CFD78 003CCCB8  3C 60 80 4F */	lis r3, __vt__Q23ebi20E2DCallBack_Purupuru@ha
/* 803CFD7C 003CCCBC  38 C5 7F 2C */	addi r6, r5, __vt__Q29P2DScreen12CallBackNode@l
/* 803CFD80 003CCCC0  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803CFD84 003CCCC4  38 A4 88 30 */	addi r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CFD88 003CCCC8  38 80 00 01 */	li r4, 1
/* 803CFD8C 003CCCCC  38 03 8A 78 */	addi r0, r3, __vt__Q23ebi20E2DCallBack_Purupuru@l
/* 803CFD90 003CCCD0  90 DF 00 00 */	stw r6, 0(r31)
/* 803CFD94 003CCCD4  38 7E 00 20 */	addi r3, r30, 0x20
/* 803CFD98 003CCCD8  90 BF 00 00 */	stw r5, 0(r31)
/* 803CFD9C 003CCCDC  98 9F 00 1C */	stb r4, 0x1c(r31)
/* 803CFDA0 003CCCE0  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFDA4 003CCCE4  4B F5 90 61 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 803CFDA8 003CCCE8  C0 02 17 28 */	lfs f0, lbl_8051FA88@sda21(r2)
/* 803CFDAC 003CCCEC  7F C3 F3 78 */	mr r3, r30
/* 803CFDB0 003CCCF0  D0 1E 00 3C */	stfs f0, 0x3c(r30)
/* 803CFDB4 003CCCF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CFDB8 003CCCF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CFDBC 003CCCFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CFDC0 003CCD00  7C 08 03 A6 */	mtlr r0
/* 803CFDC4 003CCD04  38 21 00 10 */	addi r1, r1, 0x10
/* 803CFDC8 003CCD08  4E 80 00 20 */	blr 

.global __dt__Q23ebi22E2DCallBack_BlinkAlphaFv
__dt__Q23ebi22E2DCallBack_BlinkAlphaFv:
/* 803CFDCC 003CCD0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CFDD0 003CCD10  7C 08 02 A6 */	mflr r0
/* 803CFDD4 003CCD14  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CFDD8 003CCD18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CFDDC 003CCD1C  7C 9F 23 78 */	mr r31, r4
/* 803CFDE0 003CCD20  93 C1 00 08 */	stw r30, 8(r1)
/* 803CFDE4 003CCD24  7C 7E 1B 79 */	or. r30, r3, r3
/* 803CFDE8 003CCD28  41 82 00 58 */	beq .L_803CFE40
/* 803CFDEC 003CCD2C  3C 80 80 4F */	lis r4, __vt__Q23ebi22E2DCallBack_BlinkAlpha@ha
/* 803CFDF0 003CCD30  38 04 8A 30 */	addi r0, r4, __vt__Q23ebi22E2DCallBack_BlinkAlpha@l
/* 803CFDF4 003CCD34  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFDF8 003CCD38  41 82 00 38 */	beq .L_803CFE30
/* 803CFDFC 003CCD3C  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CFE00 003CCD40  38 04 88 30 */	addi r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CFE04 003CCD44  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFE08 003CCD48  41 82 00 28 */	beq .L_803CFE30
/* 803CFE0C 003CCD4C  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CFE10 003CCD50  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803CFE14 003CCD54  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFE18 003CCD58  41 82 00 18 */	beq .L_803CFE30
/* 803CFE1C 003CCD5C  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 803CFE20 003CCD60  38 80 00 00 */	li r4, 0
/* 803CFE24 003CCD64  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 803CFE28 003CCD68  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFE2C 003CCD6C  48 04 17 5D */	bl __dt__5CNodeFv
.L_803CFE30:
/* 803CFE30 003CCD70  7F E0 07 35 */	extsh. r0, r31
/* 803CFE34 003CCD74  40 81 00 0C */	ble .L_803CFE40
/* 803CFE38 003CCD78  7F C3 F3 78 */	mr r3, r30
/* 803CFE3C 003CCD7C  4B C5 42 79 */	bl __dl__FPv
.L_803CFE40:
/* 803CFE40 003CCD80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CFE44 003CCD84  7F C3 F3 78 */	mr r3, r30
/* 803CFE48 003CCD88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CFE4C 003CCD8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CFE50 003CCD90  7C 08 03 A6 */	mtlr r0
/* 803CFE54 003CCD94  38 21 00 10 */	addi r1, r1, 0x10
/* 803CFE58 003CCD98  4E 80 00 20 */	blr 

.global __dt__Q23ebi26E2DCallBack_BlinkFontColorFv
__dt__Q23ebi26E2DCallBack_BlinkFontColorFv:
/* 803CFE5C 003CCD9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CFE60 003CCDA0  7C 08 02 A6 */	mflr r0
/* 803CFE64 003CCDA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CFE68 003CCDA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CFE6C 003CCDAC  7C 9F 23 78 */	mr r31, r4
/* 803CFE70 003CCDB0  93 C1 00 08 */	stw r30, 8(r1)
/* 803CFE74 003CCDB4  7C 7E 1B 79 */	or. r30, r3, r3
/* 803CFE78 003CCDB8  41 82 00 58 */	beq .L_803CFED0
/* 803CFE7C 003CCDBC  3C 80 80 4F */	lis r4, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803CFE80 003CCDC0  38 04 8A 54 */	addi r0, r4, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803CFE84 003CCDC4  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFE88 003CCDC8  41 82 00 38 */	beq .L_803CFEC0
/* 803CFE8C 003CCDCC  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CFE90 003CCDD0  38 04 88 30 */	addi r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CFE94 003CCDD4  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFE98 003CCDD8  41 82 00 28 */	beq .L_803CFEC0
/* 803CFE9C 003CCDDC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CFEA0 003CCDE0  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803CFEA4 003CCDE4  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFEA8 003CCDE8  41 82 00 18 */	beq .L_803CFEC0
/* 803CFEAC 003CCDEC  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 803CFEB0 003CCDF0  38 80 00 00 */	li r4, 0
/* 803CFEB4 003CCDF4  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 803CFEB8 003CCDF8  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFEBC 003CCDFC  48 04 16 CD */	bl __dt__5CNodeFv
.L_803CFEC0:
/* 803CFEC0 003CCE00  7F E0 07 35 */	extsh. r0, r31
/* 803CFEC4 003CCE04  40 81 00 0C */	ble .L_803CFED0
/* 803CFEC8 003CCE08  7F C3 F3 78 */	mr r3, r30
/* 803CFECC 003CCE0C  4B C5 41 E9 */	bl __dl__FPv
.L_803CFED0:
/* 803CFED0 003CCE10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CFED4 003CCE14  7F C3 F3 78 */	mr r3, r30
/* 803CFED8 003CCE18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CFEDC 003CCE1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CFEE0 003CCE20  7C 08 03 A6 */	mtlr r0
/* 803CFEE4 003CCE24  38 21 00 10 */	addi r1, r1, 0x10
/* 803CFEE8 003CCE28  4E 80 00 20 */	blr 

.global __ct__Q23ebi16E2DFullFontColorFv
__ct__Q23ebi16E2DFullFontColorFv:
/* 803CFEEC 003CCE2C  38 00 FF FF */	li r0, -1
/* 803CFEF0 003CCE30  90 03 00 00 */	stw r0, 0(r3)
/* 803CFEF4 003CCE34  90 03 00 04 */	stw r0, 4(r3)
/* 803CFEF8 003CCE38  90 03 00 08 */	stw r0, 8(r3)
/* 803CFEFC 003CCE3C  90 03 00 0C */	stw r0, 0xc(r3)
/* 803CFF00 003CCE40  4E 80 00 20 */	blr 

.global __dt__Q23ebi25E2DCallBack_CalcAnimationFv
__dt__Q23ebi25E2DCallBack_CalcAnimationFv:
/* 803CFF04 003CCE44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CFF08 003CCE48  7C 08 02 A6 */	mflr r0
/* 803CFF0C 003CCE4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CFF10 003CCE50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CFF14 003CCE54  7C 9F 23 78 */	mr r31, r4
/* 803CFF18 003CCE58  93 C1 00 08 */	stw r30, 8(r1)
/* 803CFF1C 003CCE5C  7C 7E 1B 79 */	or. r30, r3, r3
/* 803CFF20 003CCE60  41 82 00 58 */	beq .L_803CFF78
/* 803CFF24 003CCE64  3C 80 80 4F */	lis r4, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803CFF28 003CCE68  38 04 88 0C */	addi r0, r4, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803CFF2C 003CCE6C  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFF30 003CCE70  41 82 00 38 */	beq .L_803CFF68
/* 803CFF34 003CCE74  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CFF38 003CCE78  38 04 88 30 */	addi r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CFF3C 003CCE7C  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFF40 003CCE80  41 82 00 28 */	beq .L_803CFF68
/* 803CFF44 003CCE84  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CFF48 003CCE88  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803CFF4C 003CCE8C  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFF50 003CCE90  41 82 00 18 */	beq .L_803CFF68
/* 803CFF54 003CCE94  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 803CFF58 003CCE98  38 80 00 00 */	li r4, 0
/* 803CFF5C 003CCE9C  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 803CFF60 003CCEA0  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFF64 003CCEA4  48 04 16 25 */	bl __dt__5CNodeFv
.L_803CFF68:
/* 803CFF68 003CCEA8  7F E0 07 35 */	extsh. r0, r31
/* 803CFF6C 003CCEAC  40 81 00 0C */	ble .L_803CFF78
/* 803CFF70 003CCEB0  7F C3 F3 78 */	mr r3, r30
/* 803CFF74 003CCEB4  4B C5 41 41 */	bl __dl__FPv
.L_803CFF78:
/* 803CFF78 003CCEB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803CFF7C 003CCEBC  7F C3 F3 78 */	mr r3, r30
/* 803CFF80 003CCEC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803CFF84 003CCEC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803CFF88 003CCEC8  7C 08 03 A6 */	mtlr r0
/* 803CFF8C 003CCECC  38 21 00 10 */	addi r1, r1, 0x10
/* 803CFF90 003CCED0  4E 80 00 20 */	blr 

.global __dt__Q23ebi19E2DCallBack_AnmBaseFv
__dt__Q23ebi19E2DCallBack_AnmBaseFv:
/* 803CFF94 003CCED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803CFF98 003CCED8  7C 08 02 A6 */	mflr r0
/* 803CFF9C 003CCEDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803CFFA0 003CCEE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803CFFA4 003CCEE4  7C 9F 23 78 */	mr r31, r4
/* 803CFFA8 003CCEE8  93 C1 00 08 */	stw r30, 8(r1)
/* 803CFFAC 003CCEEC  7C 7E 1B 79 */	or. r30, r3, r3
/* 803CFFB0 003CCEF0  41 82 00 74 */	beq .L_803D0024
/* 803CFFB4 003CCEF4  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803CFFB8 003CCEF8  34 1E 00 20 */	addic. r0, r30, 0x20
/* 803CFFBC 003CCEFC  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803CFFC0 003CCF00  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFFC4 003CCF04  41 82 00 10 */	beq .L_803CFFD4
/* 803CFFC8 003CCF08  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803CFFCC 003CCF0C  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803CFFD0 003CCF10  90 1E 00 20 */	stw r0, 0x20(r30)
.L_803CFFD4:
/* 803CFFD4 003CCF14  28 1E 00 00 */	cmplwi r30, 0
/* 803CFFD8 003CCF18  41 82 00 3C */	beq .L_803D0014
/* 803CFFDC 003CCF1C  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803CFFE0 003CCF20  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803CFFE4 003CCF24  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFFE8 003CCF28  41 82 00 2C */	beq .L_803D0014
/* 803CFFEC 003CCF2C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803CFFF0 003CCF30  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803CFFF4 003CCF34  90 1E 00 00 */	stw r0, 0(r30)
/* 803CFFF8 003CCF38  41 82 00 1C */	beq .L_803D0014
/* 803CFFFC 003CCF3C  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803D0000 003CCF40  7F C3 F3 78 */	mr r3, r30
/* 803D0004 003CCF44  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803D0008 003CCF48  38 80 00 00 */	li r4, 0
/* 803D000C 003CCF4C  90 1E 00 00 */	stw r0, 0(r30)
/* 803D0010 003CCF50  48 04 15 79 */	bl __dt__5CNodeFv
.L_803D0014:
/* 803D0014 003CCF54  7F E0 07 35 */	extsh. r0, r31
/* 803D0018 003CCF58  40 81 00 0C */	ble .L_803D0024
/* 803D001C 003CCF5C  7F C3 F3 78 */	mr r3, r30
/* 803D0020 003CCF60  4B C5 40 95 */	bl __dl__FPv
.L_803D0024:
/* 803D0024 003CCF64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D0028 003CCF68  7F C3 F3 78 */	mr r3, r30
/* 803D002C 003CCF6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D0030 003CCF70  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D0034 003CCF74  7C 08 03 A6 */	mtlr r0
/* 803D0038 003CCF78  38 21 00 10 */	addi r1, r1, 0x10
/* 803D003C 003CCF7C  4E 80 00 20 */	blr 

.global __dt__Q23ebi16E2DCallBack_BaseFv
__dt__Q23ebi16E2DCallBack_BaseFv:
/* 803D0040 003CCF80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D0044 003CCF84  7C 08 02 A6 */	mflr r0
/* 803D0048 003CCF88  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D004C 003CCF8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D0050 003CCF90  7C 9F 23 78 */	mr r31, r4
/* 803D0054 003CCF94  93 C1 00 08 */	stw r30, 8(r1)
/* 803D0058 003CCF98  7C 7E 1B 79 */	or. r30, r3, r3
/* 803D005C 003CCF9C  41 82 00 48 */	beq .L_803D00A4
/* 803D0060 003CCFA0  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D0064 003CCFA4  38 04 88 30 */	addi r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D0068 003CCFA8  90 1E 00 00 */	stw r0, 0(r30)
/* 803D006C 003CCFAC  41 82 00 28 */	beq .L_803D0094
/* 803D0070 003CCFB0  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D0074 003CCFB4  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803D0078 003CCFB8  90 1E 00 00 */	stw r0, 0(r30)
/* 803D007C 003CCFBC  41 82 00 18 */	beq .L_803D0094
/* 803D0080 003CCFC0  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 803D0084 003CCFC4  38 80 00 00 */	li r4, 0
/* 803D0088 003CCFC8  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 803D008C 003CCFCC  90 1E 00 00 */	stw r0, 0(r30)
/* 803D0090 003CCFD0  48 04 14 F9 */	bl __dt__5CNodeFv
.L_803D0094:
/* 803D0094 003CCFD4  7F E0 07 35 */	extsh. r0, r31
/* 803D0098 003CCFD8  40 81 00 0C */	ble .L_803D00A4
/* 803D009C 003CCFDC  7F C3 F3 78 */	mr r3, r30
/* 803D00A0 003CCFE0  4B C5 40 15 */	bl __dl__FPv
.L_803D00A4:
/* 803D00A4 003CCFE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D00A8 003CCFE8  7F C3 F3 78 */	mr r3, r30
/* 803D00AC 003CCFEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D00B0 003CCFF0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D00B4 003CCFF4  7C 08 03 A6 */	mtlr r0
/* 803D00B8 003CCFF8  38 21 00 10 */	addi r1, r1, 0x10
/* 803D00BC 003CCFFC  4E 80 00 20 */	blr 

.global loadResource__Q33ebi6Option4TMgrFv
loadResource__Q33ebi6Option4TMgrFv:
/* 803D00C0 003CD000  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D00C4 003CD004  7C 08 02 A6 */	mflr r0
/* 803D00C8 003CD008  3C 80 80 49 */	lis r4, lbl_80496650@ha
/* 803D00CC 003CD00C  38 A0 00 00 */	li r5, 0
/* 803D00D0 003CD010  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D00D4 003CD014  38 84 66 50 */	addi r4, r4, lbl_80496650@l
/* 803D00D8 003CD018  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D00DC 003CD01C  93 C1 00 08 */	stw r30, 8(r1)
/* 803D00E0 003CD020  7C 7E 1B 78 */	mr r30, r3
/* 803D00E4 003CD024  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D00E8 003CD028  48 05 32 75 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803D00EC 003CD02C  7F C3 F3 78 */	mr r3, r30
/* 803D00F0 003CD030  4B FF C6 61 */	bl loadResource__Q33ebi6Screen7TOptionFv
/* 803D00F4 003CD034  3C 80 80 49 */	lis r4, lbl_80496650@ha
/* 803D00F8 003CD038  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D00FC 003CD03C  38 84 66 50 */	addi r4, r4, lbl_80496650@l
/* 803D0100 003CD040  48 05 32 65 */	bl heapStatusEnd__6SystemFPc
/* 803D0104 003CD044  83 FE 0F 18 */	lwz r31, 0xf18(r30)
/* 803D0108 003CD048  38 7F 00 18 */	addi r3, r31, 0x18
/* 803D010C 003CD04C  48 00 D8 A9 */	bl loadResource__Q33ebi6Screen9TSaveMenuFv
/* 803D0110 003CD050  83 CD 88 2C */	lwz r30, sCurrentHeap__7JKRHeap@sda21(r13)
/* 803D0114 003CD054  38 7F 01 00 */	addi r3, r31, 0x100
/* 803D0118 003CD058  7F C4 F3 78 */	mr r4, r30
/* 803D011C 003CD05C  4B FF 21 95 */	bl loadResource__Q33ebi6Screen11TMemoryCardFP7JKRHeap
/* 803D0120 003CD060  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D0124 003CD064  7F C4 F3 78 */	mr r4, r30
/* 803D0128 003CD068  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D012C 003CD06C  48 07 2A A1 */	bl loadResource__Q34Game10MemoryCard3MgrFP7JKRHeap
/* 803D0130 003CD070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D0134 003CD074  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D0138 003CD078  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D013C 003CD07C  7C 08 03 A6 */	mtlr r0
/* 803D0140 003CD080  38 21 00 10 */	addi r1, r1, 0x10
/* 803D0144 003CD084  4E 80 00 20 */	blr 

.global setController__Q33ebi6Option4TMgrFP10Controller
setController__Q33ebi6Option4TMgrFP10Controller:
/* 803D0148 003CD088  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D014C 003CD08C  7C 08 02 A6 */	mflr r0
/* 803D0150 003CD090  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D0154 003CD094  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D0158 003CD098  7C 9F 23 78 */	mr r31, r4
/* 803D015C 003CD09C  93 C1 00 08 */	stw r30, 8(r1)
/* 803D0160 003CD0A0  7C 7E 1B 78 */	mr r30, r3
/* 803D0164 003CD0A4  93 E3 0F 1C */	stw r31, 0xf1c(r3)
/* 803D0168 003CD0A8  4B FF C6 99 */	bl setController__Q33ebi6Screen7TOptionFP10Controller
/* 803D016C 003CD0AC  80 7E 0F 18 */	lwz r3, 0xf18(r30)
/* 803D0170 003CD0B0  93 E3 03 D0 */	stw r31, 0x3d0(r3)
/* 803D0174 003CD0B4  93 E3 00 24 */	stw r31, 0x24(r3)
/* 803D0178 003CD0B8  93 E3 01 04 */	stw r31, 0x104(r3)
/* 803D017C 003CD0BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D0180 003CD0C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D0184 003CD0C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D0188 003CD0C8  7C 08 03 A6 */	mtlr r0
/* 803D018C 003CD0CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803D0190 003CD0D0  4E 80 00 20 */	blr 

.global start__Q33ebi6Option4TMgrFv
start__Q33ebi6Option4TMgrFv:
/* 803D0194 003CD0D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D0198 003CD0D8  7C 08 02 A6 */	mflr r0
/* 803D019C 003CD0DC  7C 64 1B 78 */	mr r4, r3
/* 803D01A0 003CD0E0  38 A0 00 01 */	li r5, 1
/* 803D01A4 003CD0E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D01A8 003CD0E8  38 64 0F 24 */	addi r3, r4, 0xf24
/* 803D01AC 003CD0EC  38 C0 00 00 */	li r6, 0
/* 803D01B0 003CD0F0  81 84 0F 24 */	lwz r12, 0xf24(r4)
/* 803D01B4 003CD0F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D01B8 003CD0F8  7D 89 03 A6 */	mtctr r12
/* 803D01BC 003CD0FC  4E 80 04 21 */	bctrl 
/* 803D01C0 003CD100  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D01C4 003CD104  7C 08 03 A6 */	mtlr r0
/* 803D01C8 003CD108  38 21 00 10 */	addi r1, r1, 0x10
/* 803D01CC 003CD10C  4E 80 00 20 */	blr 

.global isFinish__Q33ebi6Option4TMgrFv
isFinish__Q33ebi6Option4TMgrFv:
/* 803D01D0 003CD110  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D01D4 003CD114  7C 08 02 A6 */	mflr r0
/* 803D01D8 003CD118  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D01DC 003CD11C  48 00 01 BD */	bl getStateID__Q33ebi6Option4TMgrFv
/* 803D01E0 003CD120  7C 60 00 34 */	cntlzw r0, r3
/* 803D01E4 003CD124  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 803D01E8 003CD128  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D01EC 003CD12C  7C 08 03 A6 */	mtlr r0
/* 803D01F0 003CD130  38 21 00 10 */	addi r1, r1, 0x10
/* 803D01F4 003CD134  4E 80 00 20 */	blr 

.global goEnd___Q33ebi6Option4TMgrFv
goEnd___Q33ebi6Option4TMgrFv:
/* 803D01F8 003CD138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D01FC 003CD13C  7C 08 02 A6 */	mflr r0
/* 803D0200 003CD140  38 A0 00 00 */	li r5, 0
/* 803D0204 003CD144  38 C0 00 00 */	li r6, 0
/* 803D0208 003CD148  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D020C 003CD14C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D0210 003CD150  7C 7F 1B 78 */	mr r31, r3
/* 803D0214 003CD154  38 7F 0F 24 */	addi r3, r31, 0xf24
/* 803D0218 003CD158  81 9F 0F 24 */	lwz r12, 0xf24(r31)
/* 803D021C 003CD15C  7F E4 FB 78 */	mr r4, r31
/* 803D0220 003CD160  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D0224 003CD164  7D 89 03 A6 */	mtctr r12
/* 803D0228 003CD168  4E 80 04 21 */	bctrl 
/* 803D022C 003CD16C  7F E3 FB 78 */	mr r3, r31
/* 803D0230 003CD170  81 9F 00 00 */	lwz r12, 0(r31)
/* 803D0234 003CD174  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D0238 003CD178  7D 89 03 A6 */	mtctr r12
/* 803D023C 003CD17C  4E 80 04 21 */	bctrl 
/* 803D0240 003CD180  80 7F 0F 18 */	lwz r3, 0xf18(r31)
/* 803D0244 003CD184  48 00 CA 39 */	bl forceQuit__Q33ebi4Save4TMgrFv
/* 803D0248 003CD188  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803D024C 003CD18C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 803D0250 003CD190  81 83 00 00 */	lwz r12, 0(r3)
/* 803D0254 003CD194  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803D0258 003CD198  7D 89 03 A6 */	mtctr r12
/* 803D025C 003CD19C  4E 80 04 21 */	bctrl 
/* 803D0260 003CD1A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D0264 003CD1A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D0268 003CD1A8  7C 08 03 A6 */	mtlr r0
/* 803D026C 003CD1AC  38 21 00 10 */	addi r1, r1, 0x10
/* 803D0270 003CD1B0  4E 80 00 20 */	blr 

.global update__Q33ebi6Option4TMgrFv
update__Q33ebi6Option4TMgrFv:
/* 803D0274 003CD1B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D0278 003CD1B8  7C 08 02 A6 */	mflr r0
/* 803D027C 003CD1BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D0280 003CD1C0  38 00 00 00 */	li r0, 0
/* 803D0284 003CD1C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D0288 003CD1C8  7C 7F 1B 78 */	mr r31, r3
/* 803D028C 003CD1CC  7F E4 FB 78 */	mr r4, r31
/* 803D0290 003CD1D0  98 03 0F 20 */	stb r0, 0xf20(r3)
/* 803D0294 003CD1D4  38 7F 0F 24 */	addi r3, r31, 0xf24
/* 803D0298 003CD1D8  81 9F 0F 24 */	lwz r12, 0xf24(r31)
/* 803D029C 003CD1DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D02A0 003CD1E0  7D 89 03 A6 */	mtctr r12
/* 803D02A4 003CD1E4  4E 80 04 21 */	bctrl 
/* 803D02A8 003CD1E8  7F E3 FB 78 */	mr r3, r31
/* 803D02AC 003CD1EC  48 00 00 ED */	bl getStateID__Q33ebi6Option4TMgrFv
/* 803D02B0 003CD1F0  2C 03 00 00 */	cmpwi r3, 0
/* 803D02B4 003CD1F4  41 82 00 38 */	beq .L_803D02EC
/* 803D02B8 003CD1F8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D02BC 003CD1FC  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D02C0 003CD200  81 83 00 00 */	lwz r12, 0(r3)
/* 803D02C4 003CD204  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D02C8 003CD208  7D 89 03 A6 */	mtctr r12
/* 803D02CC 003CD20C  4E 80 04 21 */	bctrl 
/* 803D02D0 003CD210  7F E3 FB 78 */	mr r3, r31
/* 803D02D4 003CD214  81 9F 00 00 */	lwz r12, 0(r31)
/* 803D02D8 003CD218  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803D02DC 003CD21C  7D 89 03 A6 */	mtctr r12
/* 803D02E0 003CD220  4E 80 04 21 */	bctrl 
/* 803D02E4 003CD224  80 7F 0F 18 */	lwz r3, 0xf18(r31)
/* 803D02E8 003CD228  48 00 CA AD */	bl update__Q33ebi4Save4TMgrFv
.L_803D02EC:
/* 803D02EC 003CD22C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803D02F0 003CD230  48 02 BD 3D */	bl update__Q26Screen9Game2DMgrFv
/* 803D02F4 003CD234  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D02F8 003CD238  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D02FC 003CD23C  7C 08 03 A6 */	mtlr r0
/* 803D0300 003CD240  38 21 00 10 */	addi r1, r1, 0x10
/* 803D0304 003CD244  4E 80 00 20 */	blr 

.global draw__Q33ebi6Option4TMgrFv
draw__Q33ebi6Option4TMgrFv:
/* 803D0308 003CD248  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D030C 003CD24C  7C 08 02 A6 */	mflr r0
/* 803D0310 003CD250  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D0314 003CD254  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D0318 003CD258  7C 7F 1B 78 */	mr r31, r3
/* 803D031C 003CD25C  48 00 00 7D */	bl getStateID__Q33ebi6Option4TMgrFv
/* 803D0320 003CD260  2C 03 00 00 */	cmpwi r3, 0
/* 803D0324 003CD264  41 82 00 50 */	beq .L_803D0374
/* 803D0328 003CD268  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D032C 003CD26C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 803D0330 003CD270  85 83 01 90 */	lwzu r12, 0x190(r3)
/* 803D0334 003CD274  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D0338 003CD278  7D 89 03 A6 */	mtctr r12
/* 803D033C 003CD27C  4E 80 04 21 */	bctrl 
/* 803D0340 003CD280  7F E3 FB 78 */	mr r3, r31
/* 803D0344 003CD284  81 9F 00 00 */	lwz r12, 0(r31)
/* 803D0348 003CD288  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D034C 003CD28C  7D 89 03 A6 */	mtctr r12
/* 803D0350 003CD290  4E 80 04 21 */	bctrl 
/* 803D0354 003CD294  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D0358 003CD298  80 63 00 24 */	lwz r3, 0x24(r3)
/* 803D035C 003CD29C  85 83 01 90 */	lwzu r12, 0x190(r3)
/* 803D0360 003CD2A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D0364 003CD2A4  7D 89 03 A6 */	mtctr r12
/* 803D0368 003CD2A8  4E 80 04 21 */	bctrl 
/* 803D036C 003CD2AC  80 7F 0F 18 */	lwz r3, 0xf18(r31)
/* 803D0370 003CD2B0  48 00 CA BD */	bl draw__Q33ebi4Save4TMgrFv
.L_803D0374:
/* 803D0374 003CD2B4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D0378 003CD2B8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803D037C 003CD2BC  80 84 00 24 */	lwz r4, 0x24(r4)
/* 803D0380 003CD2C0  48 02 BC D1 */	bl draw__Q26Screen9Game2DMgrFR8Graphics
/* 803D0384 003CD2C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D0388 003CD2C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D038C 003CD2CC  7C 08 03 A6 */	mtlr r0
/* 803D0390 003CD2D0  38 21 00 10 */	addi r1, r1, 0x10
/* 803D0394 003CD2D4  4E 80 00 20 */	blr 

.global getStateID__Q33ebi6Option4TMgrFv
getStateID__Q33ebi6Option4TMgrFv:
/* 803D0398 003CD2D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D039C 003CD2DC  7C 08 02 A6 */	mflr r0
/* 803D03A0 003CD2E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D03A4 003CD2E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D03A8 003CD2E8  7C 7F 1B 78 */	mr r31, r3
/* 803D03AC 003CD2EC  80 03 0F 40 */	lwz r0, 0xf40(r3)
/* 803D03B0 003CD2F0  28 00 00 00 */	cmplwi r0, 0
/* 803D03B4 003CD2F4  40 82 00 20 */	bne .L_803D03D4
/* 803D03B8 003CD2F8  3C 60 80 49 */	lis r3, lbl_80496608@ha
/* 803D03BC 003CD2FC  3C A0 80 49 */	lis r5, lbl_8049666C@ha
/* 803D03C0 003CD300  38 63 66 08 */	addi r3, r3, lbl_80496608@l
/* 803D03C4 003CD304  38 80 01 AE */	li r4, 0x1ae
/* 803D03C8 003CD308  38 A5 66 6C */	addi r5, r5, lbl_8049666C@l
/* 803D03CC 003CD30C  4C C6 31 82 */	crclr 6
/* 803D03D0 003CD310  4B C5 A2 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D03D4:
/* 803D03D4 003CD314  80 7F 0F 40 */	lwz r3, 0xf40(r31)
/* 803D03D8 003CD318  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D03DC 003CD31C  80 63 00 04 */	lwz r3, 4(r3)
/* 803D03E0 003CD320  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D03E4 003CD324  7C 08 03 A6 */	mtlr r0
/* 803D03E8 003CD328  38 21 00 10 */	addi r1, r1, 0x10
/* 803D03EC 003CD32C  4E 80 00 20 */	blr 

.global do_update__Q23ebi25E2DCallBack_CalcAnimationFv
do_update__Q23ebi25E2DCallBack_CalcAnimationFv:
/* 803D03F0 003CD330  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D03F4 003CD334  7C 08 02 A6 */	mflr r0
/* 803D03F8 003CD338  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D03FC 003CD33C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D0400 003CD340  7C 7F 1B 78 */	mr r31, r3
/* 803D0404 003CD344  80 63 00 18 */	lwz r3, 0x18(r3)
/* 803D0408 003CD348  81 83 00 00 */	lwz r12, 0(r3)
/* 803D040C 003CD34C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D0410 003CD350  7D 89 03 A6 */	mtctr r12
/* 803D0414 003CD354  4E 80 04 21 */	bctrl 
/* 803D0418 003CD358  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 803D041C 003CD35C  28 00 00 08 */	cmplwi r0, 8
/* 803D0420 003CD360  40 82 00 0C */	bne .L_803D042C
/* 803D0424 003CD364  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 803D0428 003CD368  4B C7 07 05 */	bl animation__9J2DScreenFv
.L_803D042C:
/* 803D042C 003CD36C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D0430 003CD370  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D0434 003CD374  7C 08 03 A6 */	mtlr r0
/* 803D0438 003CD378  38 21 00 10 */	addi r1, r1, 0x10
/* 803D043C 003CD37C  4E 80 00 20 */	blr 

.global update__Q23ebi16E2DCallBack_BaseFv
update__Q23ebi16E2DCallBack_BaseFv:
/* 803D0440 003CD380  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D0444 003CD384  7C 08 02 A6 */	mflr r0
/* 803D0448 003CD388  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D044C 003CD38C  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 803D0450 003CD390  28 00 00 00 */	cmplwi r0, 0
/* 803D0454 003CD394  41 82 00 14 */	beq .L_803D0468
/* 803D0458 003CD398  81 83 00 00 */	lwz r12, 0(r3)
/* 803D045C 003CD39C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D0460 003CD3A0  7D 89 03 A6 */	mtctr r12
/* 803D0464 003CD3A4  4E 80 04 21 */	bctrl 
.L_803D0468:
/* 803D0468 003CD3A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D046C 003CD3AC  7C 08 03 A6 */	mtlr r0
/* 803D0470 003CD3B0  38 21 00 10 */	addi r1, r1, 0x10
/* 803D0474 003CD3B4  4E 80 00 20 */	blr 

.global do_update__Q23ebi16E2DCallBack_BaseFv
do_update__Q23ebi16E2DCallBack_BaseFv:
/* 803D0478 003CD3B8  4E 80 00 20 */	blr 

.global draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext:
/* 803D047C 003CD3BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D0480 003CD3C0  7C 08 02 A6 */	mflr r0
/* 803D0484 003CD3C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D0488 003CD3C8  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 803D048C 003CD3CC  28 00 00 00 */	cmplwi r0, 0
/* 803D0490 003CD3D0  41 82 00 14 */	beq .L_803D04A4
/* 803D0494 003CD3D4  81 83 00 00 */	lwz r12, 0(r3)
/* 803D0498 003CD3D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803D049C 003CD3DC  7D 89 03 A6 */	mtctr r12
/* 803D04A0 003CD3E0  4E 80 04 21 */	bctrl 
.L_803D04A4:
/* 803D04A4 003CD3E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D04A8 003CD3E8  7C 08 03 A6 */	mtlr r0
/* 803D04AC 003CD3EC  38 21 00 10 */	addi r1, r1, 0x10
/* 803D04B0 003CD3F0  4E 80 00 20 */	blr 

.global do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext:
/* 803D04B4 003CD3F4  4E 80 00 20 */	blr 

.global "init__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgrPQ24Game8StateArg"
"init__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgrPQ24Game8StateArg":
/* 803D04B8 003CD3F8  4E 80 00 20 */	blr 

.global "exec__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
"exec__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr":
/* 803D04BC 003CD3FC  4E 80 00 20 */	blr 

.global "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
"cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr":
/* 803D04C0 003CD400  4E 80 00 20 */	blr 

.global "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
"resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr":
/* 803D04C4 003CD404  4E 80 00 20 */	blr 

.global "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
"restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr":
/* 803D04C8 003CD408  4E 80 00 20 */	blr 

.global "init__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
"init__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr":
/* 803D04CC 003CD40C  4E 80 00 20 */	blr 

.global "exec__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
"exec__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr":
/* 803D04D0 003CD410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D04D4 003CD414  7C 08 02 A6 */	mflr r0
/* 803D04D8 003CD418  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D04DC 003CD41C  80 64 0F 40 */	lwz r3, 0xf40(r4)
/* 803D04E0 003CD420  28 03 00 00 */	cmplwi r3, 0
/* 803D04E4 003CD424  41 82 00 14 */	beq .L_803D04F8
/* 803D04E8 003CD428  81 83 00 00 */	lwz r12, 0(r3)
/* 803D04EC 003CD42C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D04F0 003CD430  7D 89 03 A6 */	mtctr r12
/* 803D04F4 003CD434  4E 80 04 21 */	bctrl 
.L_803D04F8:
/* 803D04F8 003CD438  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D04FC 003CD43C  7C 08 03 A6 */	mtlr r0
/* 803D0500 003CD440  38 21 00 10 */	addi r1, r1, 0x10
/* 803D0504 003CD444  4E 80 00 20 */	blr 

.global "create__Q24Game32StateMachine<Q33ebi6Option4TMgr>Fi"
"create__Q24Game32StateMachine<Q33ebi6Option4TMgr>Fi":
/* 803D0508 003CD448  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D050C 003CD44C  7C 08 02 A6 */	mflr r0
/* 803D0510 003CD450  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D0514 003CD454  38 00 00 00 */	li r0, 0
/* 803D0518 003CD458  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D051C 003CD45C  7C 7F 1B 78 */	mr r31, r3
/* 803D0520 003CD460  90 83 00 0C */	stw r4, 0xc(r3)
/* 803D0524 003CD464  90 03 00 08 */	stw r0, 8(r3)
/* 803D0528 003CD468  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803D052C 003CD46C  54 03 10 3A */	slwi r3, r0, 2
/* 803D0530 003CD470  4B C5 3A 7D */	bl __nwa__FUl
/* 803D0534 003CD474  90 7F 00 04 */	stw r3, 4(r31)
/* 803D0538 003CD478  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803D053C 003CD47C  54 03 10 3A */	slwi r3, r0, 2
/* 803D0540 003CD480  4B C5 3A 6D */	bl __nwa__FUl
/* 803D0544 003CD484  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803D0548 003CD488  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803D054C 003CD48C  54 03 10 3A */	slwi r3, r0, 2
/* 803D0550 003CD490  4B C5 3A 5D */	bl __nwa__FUl
/* 803D0554 003CD494  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803D0558 003CD498  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D055C 003CD49C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D0560 003CD4A0  7C 08 03 A6 */	mtlr r0
/* 803D0564 003CD4A4  38 21 00 10 */	addi r1, r1, 0x10
/* 803D0568 003CD4A8  4E 80 00 20 */	blr 

.global "transit__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
"transit__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg":
/* 803D056C 003CD4AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803D0570 003CD4B0  7C 08 02 A6 */	mflr r0
/* 803D0574 003CD4B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D0578 003CD4B8  54 A0 10 3A */	slwi r0, r5, 2
/* 803D057C 003CD4BC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803D0580 003CD4C0  7C 7B 1B 78 */	mr r27, r3
/* 803D0584 003CD4C4  7C 9C 23 78 */	mr r28, r4
/* 803D0588 003CD4C8  7C DD 33 78 */	mr r29, r6
/* 803D058C 003CD4CC  83 C4 0F 40 */	lwz r30, 0xf40(r4)
/* 803D0590 003CD4D0  80 63 00 14 */	lwz r3, 0x14(r3)
/* 803D0594 003CD4D4  28 1E 00 00 */	cmplwi r30, 0
/* 803D0598 003CD4D8  7F E3 00 2E */	lwzx r31, r3, r0
/* 803D059C 003CD4DC  41 82 00 20 */	beq .L_803D05BC
/* 803D05A0 003CD4E0  7F C3 F3 78 */	mr r3, r30
/* 803D05A4 003CD4E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D05A8 003CD4E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D05AC 003CD4EC  7D 89 03 A6 */	mtctr r12
/* 803D05B0 003CD4F0  4E 80 04 21 */	bctrl 
/* 803D05B4 003CD4F4  80 1E 00 04 */	lwz r0, 4(r30)
/* 803D05B8 003CD4F8  90 1B 00 18 */	stw r0, 0x18(r27)
.L_803D05BC:
/* 803D05BC 003CD4FC  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 803D05C0 003CD500  7C 1F 00 00 */	cmpw r31, r0
/* 803D05C4 003CD504  41 80 00 08 */	blt .L_803D05CC
.L_803D05C8:
/* 803D05C8 003CD508  48 00 00 00 */	b .L_803D05C8
.L_803D05CC:
/* 803D05CC 003CD50C  80 7B 00 04 */	lwz r3, 4(r27)
/* 803D05D0 003CD510  57 E0 10 3A */	slwi r0, r31, 2
/* 803D05D4 003CD514  7F 84 E3 78 */	mr r4, r28
/* 803D05D8 003CD518  7F A5 EB 78 */	mr r5, r29
/* 803D05DC 003CD51C  7C 63 00 2E */	lwzx r3, r3, r0
/* 803D05E0 003CD520  90 7C 0F 40 */	stw r3, 0xf40(r28)
/* 803D05E4 003CD524  81 83 00 00 */	lwz r12, 0(r3)
/* 803D05E8 003CD528  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D05EC 003CD52C  7D 89 03 A6 */	mtctr r12
/* 803D05F0 003CD530  4E 80 04 21 */	bctrl 
/* 803D05F4 003CD534  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803D05F8 003CD538  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D05FC 003CD53C  7C 08 03 A6 */	mtlr r0
/* 803D0600 003CD540  38 21 00 20 */	addi r1, r1, 0x20
/* 803D0604 003CD544  4E 80 00 20 */	blr 

.global "registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
"registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>":
/* 803D0608 003CD548  80 C3 00 08 */	lwz r6, 8(r3)
/* 803D060C 003CD54C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803D0610 003CD550  7C 06 00 00 */	cmpw r6, r0
/* 803D0614 003CD554  4C 80 00 20 */	bgelr 
/* 803D0618 003CD558  80 A3 00 04 */	lwz r5, 4(r3)
/* 803D061C 003CD55C  54 C0 10 3A */	slwi r0, r6, 2
/* 803D0620 003CD560  7C 85 01 2E */	stwx r4, r5, r0
/* 803D0624 003CD564  80 A4 00 04 */	lwz r5, 4(r4)
/* 803D0628 003CD568  2C 05 00 00 */	cmpwi r5, 0
/* 803D062C 003CD56C  41 80 00 10 */	blt .L_803D063C
/* 803D0630 003CD570  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803D0634 003CD574  7C 05 00 00 */	cmpw r5, r0
/* 803D0638 003CD578  41 80 00 0C */	blt .L_803D0644
.L_803D063C:
/* 803D063C 003CD57C  38 00 00 00 */	li r0, 0
/* 803D0640 003CD580  48 00 00 08 */	b .L_803D0648
.L_803D0644:
/* 803D0644 003CD584  38 00 00 01 */	li r0, 1
.L_803D0648:
/* 803D0648 003CD588  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D064C 003CD58C  4D 82 00 20 */	beqlr 
/* 803D0650 003CD590  90 64 00 08 */	stw r3, 8(r4)
/* 803D0654 003CD594  80 03 00 08 */	lwz r0, 8(r3)
/* 803D0658 003CD598  80 C4 00 04 */	lwz r6, 4(r4)
/* 803D065C 003CD59C  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 803D0660 003CD5A0  54 00 10 3A */	slwi r0, r0, 2
/* 803D0664 003CD5A4  7C C5 01 2E */	stwx r6, r5, r0
/* 803D0668 003CD5A8  80 04 00 04 */	lwz r0, 4(r4)
/* 803D066C 003CD5AC  80 A3 00 08 */	lwz r5, 8(r3)
/* 803D0670 003CD5B0  80 83 00 14 */	lwz r4, 0x14(r3)
/* 803D0674 003CD5B4  54 00 10 3A */	slwi r0, r0, 2
/* 803D0678 003CD5B8  7C A4 01 2E */	stwx r5, r4, r0
/* 803D067C 003CD5BC  80 83 00 08 */	lwz r4, 8(r3)
/* 803D0680 003CD5C0  38 04 00 01 */	addi r0, r4, 1
/* 803D0684 003CD5C4  90 03 00 08 */	stw r0, 8(r3)
/* 803D0688 003CD5C8  4E 80 00 20 */	blr 
