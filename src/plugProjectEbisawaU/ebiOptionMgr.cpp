#include "Dolphin/runtime.h"
#include "ebi/Option.h"
#include "ebi/E2DCallBack.h"
#include "Graphics.h"
#include "JSystem/JUT/JUTException.h"
#include "PSSystem/PSSystemIF.h"
#include "Screen/Game2DMgr.h"
#include "SoundID.h"
#include "System.h"
#include "types.h"
/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804965A0
    lbl_804965A0:
        .4byte 0x6562694F
        .4byte 0x7074696F
        .4byte 0x6E4D6772
        .4byte 0x00000000
        .4byte 0x4C6F6164
        .4byte 0x4F707469
        .4byte 0x6F6E0000
        .4byte 0x53637265
        .4byte 0x656E4F70
        .4byte 0x656E0000
        .4byte 0x53637265
        .4byte 0x656E5761
        .4byte 0x69740000
        .4byte 0x53637265
        .4byte 0x656E436C
        .4byte 0x6F736500
        .4byte 0x57616974
        .4byte 0x436C6F73
        .4byte 0x65466F72
        .4byte 0x4E6F4361
        .4byte 0x72640000
        .4byte 0x576F726C
        .4byte 0x644D6170
        .4byte 0x496E666F
        .4byte 0x57696E64
        .4byte 0x6F770000
    .global lbl_80496608
    lbl_80496608:
        .4byte 0x6562694F
        .4byte 0x7074696F
        .4byte 0x6E4D6772
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_8049661C
    lbl_8049661C:
        .4byte 0x6661696C
        .4byte 0x20746F20
        .4byte 0x6D656D6F
        .4byte 0x72792063
        .4byte 0x61726420
        .4byte 0x52657175
        .4byte 0x65737420
        .4byte 0x6576656E
        .4byte 0x20696620
        .4byte 0x66696E69
        .4byte 0x73682074
        .4byte 0x61736B0A
        .4byte 0x00000000
    .global lbl_80496650
    lbl_80496650:
        .4byte 0x4F707469
        .4byte 0x6F6E3A3A
        .4byte 0x544D6772
        .4byte 0x3A3A6C6F
        .4byte 0x61645265
        .4byte 0x736F7572
        .4byte 0x63650000
    .global lbl_8049666C
    lbl_8049666C:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
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
        .4byte
   "init__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "start__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte
   "exec__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
    .global __vt__Q33ebi6Option16FSMState_SaveMgr
    __vt__Q33ebi6Option16FSMState_SaveMgr:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
        .4byte
   "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi6Option16FSMState_SaveMgrFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte do_exec__Q33ebi6Option16FSMState_SaveMgrFPQ33ebi6Option4TMgr
    .global __vt__Q33ebi6Option19FSMState_LoadOption
    __vt__Q33ebi6Option19FSMState_LoadOption:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
        .4byte
   "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi6Option19FSMState_LoadOptionFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte do_exec__Q33ebi6Option19FSMState_LoadOptionFPQ33ebi6Option4TMgr
    .global __vt__Q33ebi6Option27FSMState_WorldMapInfoWindow
    __vt__Q33ebi6Option27FSMState_WorldMapInfoWindow:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
        .4byte
   "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi6Option27FSMState_WorldMapInfoWindowFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte
   do_exec__Q33ebi6Option27FSMState_WorldMapInfoWindowFPQ33ebi6Option4TMgr
    .global __vt__Q33ebi6Option27FSMState_WaitCloseForNoCard
    __vt__Q33ebi6Option27FSMState_WaitCloseForNoCard:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
        .4byte
   "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi6Option27FSMState_WaitCloseForNoCardFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte
   do_exec__Q33ebi6Option27FSMState_WaitCloseForNoCardFPQ33ebi6Option4TMgr
    .global __vt__Q33ebi6Option20FSMState_ScreenClose
    __vt__Q33ebi6Option20FSMState_ScreenClose:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
        .4byte
   "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi6Option20FSMState_ScreenCloseFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte do_exec__Q33ebi6Option20FSMState_ScreenCloseFPQ33ebi6Option4TMgr
    .global __vt__Q33ebi6Option19FSMState_ScreenWait
    __vt__Q33ebi6Option19FSMState_ScreenWait:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
        .4byte
   "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi6Option19FSMState_ScreenWaitFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte do_exec__Q33ebi6Option19FSMState_ScreenWaitFPQ33ebi6Option4TMgr
    .global __vt__Q33ebi6Option19FSMState_ScreenOpen
    __vt__Q33ebi6Option19FSMState_ScreenOpen:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
        .4byte
   "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi6Option19FSMState_ScreenOpenFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte do_exec__Q33ebi6Option19FSMState_ScreenOpenFPQ33ebi6Option4TMgr
    .global __vt__Q33ebi6Option8FSMState
    __vt__Q33ebi6Option8FSMState:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
        .4byte
   "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg .4byte
   do_exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr .global
   "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"
    "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgrPQ24Game8StateArg"
        .4byte "exec__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
        .4byte
   "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
    .global __vt__Q33ebi6Option15FSMStateMachine
    __vt__Q33ebi6Option15FSMStateMachine:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi6Option15FSMStateMachineFPQ33ebi6Option4TMgr
        .4byte
   "start__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte
   "exec__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr" .4byte
   "transit__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FA78
    lbl_8051FA78:
        .4byte 0x5374616E
        .4byte 0x64627900
    .global lbl_8051FA80
    lbl_8051FA80:
        .4byte 0x53617665
        .4byte 0x4D677200
    .global lbl_8051FA88
    lbl_8051FA88:
        .float 1.0
    .global lbl_8051FA8C
    lbl_8051FA8C:
        .4byte 0x00000000
    .global lbl_8051FA90
    lbl_8051FA90:
        .4byte 0x3D08850A
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("ebiOptionMgr"); }

namespace ebi {

/*
 * --INFO--
 * Address:	803CE8F8
 * Size:	0002D8
 */
void Option::FSMStateMachine::init(ebi::Option::TMgr*)
{
	create(8);
	registerState(new FSMState(Standby, "Standby"));
	registerState(new FSMState_LoadOption(LoadOption, "LoadOption"));
	registerState(new FSMState_ScreenOpen(ScreenOpen, "ScreenOpen"));
	registerState(new FSMState_ScreenWait(ScreenWait, "ScreenWait"));
	registerState(new FSMState_ScreenClose(ScreenClose, "ScreenClose"));
	registerState(new FSMState_SaveMgr(SaveMgr, "SaveMgr"));
	registerState(new FSMState_WaitCloseForNoCard(WaitCloseForNoCard, "WaitCloseForNoCard"));
	registerState(new FSMState_WorldMapInfoWindow(WorldMapInfoWindow, "WorldMapInfoWindow"));
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_804965A0@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_804965A0@l
	li       r4, 8
	stw      r30, 8(r1)
	mr       r30, r3
	bl       "create__Q24Game32StateMachine<Q33ebi6Option4TMgr>Fi"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803CE95C
	lis      r5, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
	lis      r3, __vt__Q33ebi6Option8FSMState@ha
	addi     r0, r5, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
	li       r5, 0
	stw      r0, 0(r4)
	addi     r3, r3, __vt__Q33ebi6Option8FSMState@l
	addi     r0, r2, lbl_8051FA78@sda21
	stw      r5, 4(r4)
	stw      r5, 8(r4)
	stw      r3, 0(r4)
	stw      r0, 0xc(r4)

lbl_803CE95C:
	mr       r3, r30
	bl
"registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
	li       r3, 0x14
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803CE9B0
	lis      r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
	lis      r5, __vt__Q33ebi6Option8FSMState@ha
	addi     r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
	lis      r3, __vt__Q33ebi6Option19FSMState_LoadOption@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi6Option8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x10
	addi     r0, r3, __vt__Q33ebi6Option19FSMState_LoadOption@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_803CE9B0:
	mr       r3, r30
	bl
"registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803CEA04
	lis      r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
	lis      r5, __vt__Q33ebi6Option8FSMState@ha
	addi     r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
	lis      r3, __vt__Q33ebi6Option19FSMState_ScreenOpen@ha
	stw      r0, 0(r4)
	li       r0, 2
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi6Option8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x1c
	addi     r0, r3, __vt__Q33ebi6Option19FSMState_ScreenOpen@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_803CEA04:
	mr       r3, r30
	bl
"registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803CEA58
	lis      r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
	lis      r5, __vt__Q33ebi6Option8FSMState@ha
	addi     r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
	lis      r3, __vt__Q33ebi6Option19FSMState_ScreenWait@ha
	stw      r0, 0(r4)
	li       r0, 3
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi6Option8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x28
	addi     r0, r3, __vt__Q33ebi6Option19FSMState_ScreenWait@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_803CEA58:
	mr       r3, r30
	bl
"registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803CEAAC
	lis      r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
	lis      r5, __vt__Q33ebi6Option8FSMState@ha
	addi     r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
	lis      r3, __vt__Q33ebi6Option20FSMState_ScreenClose@ha
	stw      r0, 0(r4)
	li       r0, 4
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi6Option8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x34
	addi     r0, r3, __vt__Q33ebi6Option20FSMState_ScreenClose@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_803CEAAC:
	mr       r3, r30
	bl
"registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803CEB00
	lis      r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
	lis      r5, __vt__Q33ebi6Option8FSMState@ha
	addi     r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
	lis      r3, __vt__Q33ebi6Option16FSMState_SaveMgr@ha
	stw      r0, 0(r4)
	li       r0, 5
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi6Option8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051FA80@sda21
	addi     r0, r3, __vt__Q33ebi6Option16FSMState_SaveMgr@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_803CEB00:
	mr       r3, r30
	bl
"registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803CEB5C
	lis      r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
	lis      r5, __vt__Q33ebi6Option8FSMState@ha
	addi     r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
	lis      r3, __vt__Q33ebi6Option27FSMState_WaitCloseForNoCard@ha
	stw      r0, 0(r4)
	li       r0, 6
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi6Option8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x40
	addi     r0, r3, __vt__Q33ebi6Option27FSMState_WaitCloseForNoCard@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)
	stw      r7, 0x10(r4)
	stw      r7, 0x14(r4)

lbl_803CEB5C:
	mr       r3, r30
	bl
"registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803CEBB0
	lis      r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@ha
	lis      r5, __vt__Q33ebi6Option8FSMState@ha
	addi     r0, r3, "__vt__Q24Game28FSMState<Q33ebi6Option4TMgr>"@l
	lis      r3, __vt__Q33ebi6Option27FSMState_WorldMapInfoWindow@ha
	stw      r0, 0(r4)
	li       r0, 7
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi6Option8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x54
	addi     r0, r3, __vt__Q33ebi6Option27FSMState_WorldMapInfoWindow@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_803CEBB0:
	mr       r3, r30
	bl
"registerState__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ24Game28FSMState<Q33ebi6Option4TMgr>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CEBD0
 * Size:	00002C
 */
void Option::FSMState::init(ebi::Option::TMgr* obj, Game::StateArg* arg)
{
	do_init(obj, arg);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CEBFC
 * Size:	000004
 */
void Option::FSMState::do_init(ebi::Option::TMgr*, Game::StateArg* arg) { }

/*
 * --INFO--
 * Address:	803CEC00
 * Size:	00002C
 */
void Option::FSMState::exec(ebi::Option::TMgr* obj)
{
	do_exec(obj);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CEC2C
 * Size:	000004
 */
void Option::FSMState::do_exec(ebi::Option::TMgr*) { }

/*
 * --INFO--
 * Address:	803CEC30
 * Size:	000050
 */
void Option::FSMState_ScreenOpen::do_init(ebi::Option::TMgr* obj, Game::StateArg* arg)
{
	obj->m_optionScreen._0C8.loadRam();
	obj->m_optionScreen._0DC.loadRam();
	obj->m_optionScreen.openScreen(nullptr);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r3, r31, 0xc8
	bl       loadRam__Q33ebi6Screen16TOptionParameterFv
	addi     r3, r31, 0xdc
	bl       loadRam__Q33ebi6Screen16TOptionParameterFv
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CEC80
 * Size:	000064
 */
void Option::FSMState_ScreenOpen::do_exec(ebi::Option::TMgr* obj)
{
	if (!obj->m_optionScreen.isWaitScreen()) {
		transit(obj, ScreenWait, nullptr);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       isWaitScreen__Q33ebi6Screen11TScreenBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803CECCC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803CECCC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace ebi

/*
 * Should be auto-generated.
 *
 * --INFO--
 * Address:	803CECE4
 * Size:	000030
 */
// void transit__Q24Game28FSMState<ebi::Option::TMgr>
// FPQ33ebi6Option4TMgriPQ24Game8StateArg(void)
// template<> void Game::FSMState<ebi::Option::TMgr>::transit(ebi::Option::TMgr
// *, int, StateArg *)
// {
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
// }

namespace ebi {
/*
 * --INFO--
 * Address:	803CED14
 * Size:	00000C
 */
void Option::FSMState_ScreenWait::do_init(ebi::Option::TMgr* obj, Game::StateArg* arg)
{
	obj->m_optionScreen._010 = 1;
	/*
	li       r0, 1
	stb      r0, 0x10(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CED20
 * Size:	000144
 */
void Option::FSMState_ScreenWait::do_exec(ebi::Option::TMgr*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0xc4(r4)
	cmpwi    r0, 8
	beq      lbl_803CED70
	bge      lbl_803CED64
	cmpwi    r0, 7
	bge      lbl_803CED7C
	cmpwi    r0, 1
	bge      lbl_803CED70
	b        lbl_803CEE48

lbl_803CED64:
	cmpwi    r0, 0xa
	bge      lbl_803CEE48
	b        lbl_803CEE28

lbl_803CED70:
	addi     r3, r30, 0xc8
	bl       saveRam__Q33ebi6Screen16TOptionParameterFv
	b        lbl_803CEE48

lbl_803CED7C:
	addi     r3, r30, 0xc8
	bl       saveRam__Q33ebi6Screen16TOptionParameterFv
	li       r31, 0
	stb      r31, 0x10(r30)
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	lwz      r0, 0xa8(r3)
	cmpwi    r0, 0
	bne      lbl_803CEDB0
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_803CEDB0
	li       r31, 1

lbl_803CEDB0:
	clrlwi.  r0, r31, 0x18
	beq      lbl_803CEDD4
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	bl       getCardStatus__Q34Game10MemoryCard3MgrFv
	cmpwi    r3, 0
	bne      lbl_803CEDD4
	li       r0, 1
	b        lbl_803CEDD8

lbl_803CEDD4:
	li       r0, 0

lbl_803CEDD8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803CEE04
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803CEE48

lbl_803CEE04:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803CEE48

lbl_803CEE28:
	li       r0, 0
	li       r5, 7
	stb      r0, 0x10(r30)
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803CEE48:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CEE64
 * Size:	00003C
 */
void Option::FSMState_ScreenClose::do_init(ebi::Option::TMgr* obj, Game::StateArg* arg)
{
	obj->_F20 = 1;
	obj->m_optionScreen.closeScreen(nullptr);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r0, 1
	stb      r0, 0xf20(r4)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CEEA0
 * Size:	00004C
 */
void Option::FSMState_ScreenClose::do_exec(ebi::Option::TMgr* obj)
{
	if (obj->m_optionScreen.isFinishScreen()) {
		obj->goEnd_();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803CEED8
	mr       r3, r31
	bl       goEnd___Q33ebi6Option4TMgrFv

lbl_803CEED8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CEEEC
 * Size:	000044
 */
void Option::FSMState_WaitCloseForNoCard::do_init(ebi::Option::TMgr* obj, Game::StateArg* arg)
{
	u32 v1 = __cvt_fp2unsigned(1.0f / sys->m_secondsPerFrame);
	_10    = v1;
	_14    = v1;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x1728(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fdivs     f1, f1, f0
	  bl        -0x30D3C4
	  stw       r3, 0x10(r31)
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CEF30
 * Size:	000084
 */
void Option::FSMState_WaitCloseForNoCard::do_exec(ebi::Option::TMgr* obj)
{
	if (_10) {
		_10--;
	}
	if (_10 == 0) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		transit(obj, ScreenClose, nullptr);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_803CEF60
	addi     r0, r3, -1
	stw      r0, 0x10(r30)

lbl_803CEF60:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_803CEF9C
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x180c
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803CEF9C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CEFB4
 * Size:	0000B8
 */
void Option::FSMState_WorldMapInfoWindow::do_init(ebi::Option::TMgr* obj, Game::StateArg* arg)
{
	::Screen::gGame2DMgr->m_screenMgr->reset();
	og::Screen::DispMemberWorldMapInfoWin0 disp;
	::Screen::gGame2DMgr->open_WorldMapInfoWin0(disp);
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x804B
	  lis       r4, 0x34
	  li        r11, 0
	  lis       r3, 0x315F
	  addi      r8, r4, 0x3731
	  addi      r10, r5, 0x1148
	  addi      r0, r3, 0x3030
	  lis       r6, 0x804E
	  lis       r5, 0x305F
	  lis       r4, 0x375F
	  lis       r3, 0x36
	  li        r7, 0xB4
	  addi      r9, r5, 0x3030
	  stw       r10, 0x8(r1)
	  subi      r10, r6, 0x61F8
	  addi      r6, r4, 0x3030
	  stw       r0, 0x24(r1)
	  addi      r5, r3, 0x3031
	  li        r0, 0x1
	  lwz       r3, -0x6560(r13)
	  stw       r8, 0x20(r1)
	  addi      r4, r1, 0x8
	  stb       r11, 0x29(r1)
	  stw       r11, 0xC(r1)
	  stw       r10, 0x8(r1)
	  stw       r11, 0x10(r1)
	  stw       r9, 0x1C(r1)
	  stw       r8, 0x18(r1)
	  stb       r7, 0x28(r1)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x20(r1)
	  stb       r0, 0x29(r1)
	  bl        0x2E000
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CF06C
 * Size:	0000A0
 */
void Option::FSMState_WorldMapInfoWindow::do_exec(ebi::Option::TMgr* obj)
{
	switch (Screen::gGame2DMgr->check_WorldMapInfoWin0()) {
	case 0:
		transit(obj, ScreenWait, nullptr);
		break;
	case 1:
		obj->m_optionScreen._0DC.saveRam();
		transit(obj, ScreenClose, nullptr);
		break;
	default:
		break;
	}

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_WorldMapInfoWin0__Q26Screen9Game2DMgrCFv
	cmpwi    r3, 1
	beq      lbl_803CF0CC
	bge      lbl_803CF0F4
	cmpwi    r3, 0
	bge      lbl_803CF0A8
	b        lbl_803CF0F4

lbl_803CF0A8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803CF0F4

lbl_803CF0CC:
	addi     r3, r31, 0xdc
	bl       saveRam__Q33ebi6Screen16TOptionParameterFv
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803CF0F4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CF10C
 * Size:	00000C
 */
void Option::FSMState_LoadOption::do_init(ebi::Option::TMgr* obj, Game::StateArg* arg)
{
	// Generated from stw r0, 0x10(r3)
	_10 = 0;
}

/*
 * --INFO--
 * Address:	803CF118
 * Size:	0001A0
 */
void Option::FSMState_LoadOption::do_exec(ebi::Option::TMgr* obj)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r0, 0x10(r3)
	cmpwi    r0, 1
	beq      lbl_803CF240
	bge      lbl_803CF29C
	cmpwi    r0, 0
	bge      lbl_803CF154
	b        lbl_803CF29C

lbl_803CF154:
	lwz      r3, sys@sda21(r13)
	li       r30, 0
	lwz      r3, 0x5c(r3)
	lwz      r0, 0xa8(r3)
	cmpwi    r0, 0
	bne      lbl_803CF17C
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_803CF17C
	li       r30, 1

lbl_803CF17C:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803CF1A0
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	bl       getCardStatus__Q34Game10MemoryCard3MgrFv
	cmpwi    r3, 0
	bne      lbl_803CF1A0
	li       r0, 1
	b        lbl_803CF1A4

lbl_803CF1A0:
	li       r0, 0

lbl_803CF1A4:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803CF1D0
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803CF29C

lbl_803CF1D0:
	lwz      r3, sys@sda21(r13)
	li       r30, 0
	lwz      r3, 0x5c(r3)
	lwz      r0, 0xa8(r3)
	cmpwi    r0, 0
	bne      lbl_803CF1F8
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_803CF1F8
	li       r30, 1

lbl_803CF1F8:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803CF29C
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	bl       loadGameOption__Q34Game10MemoryCard3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803CF220
	li       r0, 1
	stw      r0, 0x10(r31)
	b        lbl_803CF29C

lbl_803CF220:
	lis      r3, lbl_80496608@ha
	lis      r5, lbl_8049661C@ha
	addi     r3, r3, lbl_80496608@l
	li       r4, 0xef
	addi     r5, r5, lbl_8049661C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_803CF29C

lbl_803CF240:
	lwz      r3, sys@sda21(r13)
	li       r30, 0
	lwz      r3, 0x5c(r3)
	lwz      r0, 0xa8(r3)
	cmpwi    r0, 0
	bne      lbl_803CF268
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_803CF268
	li       r30, 1

lbl_803CF268:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803CF29C
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	bl       getCardStatus__Q34Game10MemoryCard3MgrFv
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803CF29C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CF2B8
 * Size:	00002C
 */
void Option::FSMState_SaveMgr::do_init(ebi::Option::TMgr* obj, Game::StateArg* arg)
{
	obj->m_optionScreen._010 = 0;
	obj->m_saveMgr->start();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stb      r0, 0x10(r4)
	lwz      r3, 0xf18(r4)
	bl       start__Q33ebi4Save4TMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CF2E4
 * Size:	000100
 */
void Option::FSMState_SaveMgr::do_exec(ebi::Option::TMgr* obj)
{
	if (obj->m_saveMgr->isFinish()) {
		switch (obj->m_saveMgr->_474) {
		case 0:
			transit(obj, ScreenClose, nullptr);
			break;
		case 1:
			transit(obj, ScreenWait, nullptr);
			break;
		case 2:
			transit(obj, ScreenClose, nullptr);
			break;
		case 4:
			transit(obj, ScreenWait, nullptr);
			break;
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0xf18(r4)
	bl       isFinish__Q33ebi4Save4TMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803CF3CC
	lwz      r3, 0xf18(r31)
	lwz      r0, 0x474(r3)
	cmpwi    r0, 2
	beq      lbl_803CF388
	bge      lbl_803CF334
	cmpwi    r0, 0
	beq      lbl_803CF340
	bge      lbl_803CF364
	b        lbl_803CF3CC

lbl_803CF334:
	cmpwi    r0, 4
	beq      lbl_803CF3AC
	b        lbl_803CF3CC

lbl_803CF340:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803CF3CC

lbl_803CF364:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803CF3CC

lbl_803CF388:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803CF3CC

lbl_803CF3AC:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803CF3CC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CF3E4
 * Size:	0000C0
 */
Option::TMgr::TMgr(void)
    : m_optionScreen()
    , _F20(0)
    , m_stateMachine()
{
	m_stateMachine.init(this);
	m_stateMachine.start(this, Standby, nullptr);
	m_saveMgr                 = ebi::Save::TMgr::createInstance();
	m_saveMgr->_470           = 1;
	m_saveMgr->_478           = 1;
	m_saveMgr->m_isAutosaveOn = true;
	m_saveMgr->_47A           = 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q33ebi6Screen7TOptionFv
	li       r0, 0
	lis      r3, "__vt__Q24Game32StateMachine<Q33ebi6Option4TMgr>"@ha
	stb      r0, 0xf20(r31)
	addi     r0, r3, "__vt__Q24Game32StateMachine<Q33ebi6Option4TMgr>"@l
	lis      r3, __vt__Q33ebi6Option15FSMStateMachine@ha
	li       r5, -1
	stw      r0, 0xf24(r31)
	addi     r0, r3, __vt__Q33ebi6Option15FSMStateMachine@l
	addi     r3, r31, 0xf24
	mr       r4, r31
	stw      r5, 0xf3c(r31)
	stw      r0, 0xf24(r31)
	lwz      r12, 0xf24(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0xf24
	mr       r4, r31
	lwz      r12, 0xf24(r31)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	bl       createInstance__Q33ebi4Save4TMgrFv
	stw      r3, 0xf18(r31)
	li       r5, 1
	li       r0, 0
	mr       r3, r31
	lwz      r4, 0xf18(r31)
	stw      r5, 0x470(r4)
	lwz      r4, 0xf18(r31)
	stb      r5, 0x478(r4)
	lwz      r4, 0xf18(r31)
	stb      r5, 0x479(r4)
	lwz      r4, 0xf18(r31)
	stb      r0, 0x47a(r4)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace ebi

/*
 * --INFO--
 * Address:	803CF4A4
 * Size:	000034
 */
// void start__Q24Game32StateMachine<ebi::Option::TMgr>
// FPQ33ebi6Option4TMgriPQ24Game8StateArg(void)
template <>
void Game::StateMachine<ebi::Option::TMgr>::start(ebi::Option::TMgr* obj, int id, StateArg* arg)
{
	obj->_F28 = 0;
	transit(obj, id, arg);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0xF40(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803CF4D8
 * Size:	00030C
 */
TOption::~TOption(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803CF7C8
lis      r3, __vt__Q33ebi6Screen7TOption@ha
addic.   r0, r30, 0xeac
addi     r0, r3, __vt__Q33ebi6Screen7TOption@l
stw      r0, 0(r30)
beq      lbl_803CF560
lis      r3, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
addic.   r0, r30, 0xeac
addi     r0, r3, __vt__Q23ebi24E2DCallBack_WindowCursor@l
stw      r0, 0xeac(r30)
beq      lbl_803CF560
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0xeac
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0xeac(r30)
beq      lbl_803CF560
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0xeac
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0xeac(r30)
beq      lbl_803CF560
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0xeac
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0xeac(r30)
bl       __dt__5CNodeFv

lbl_803CF560:
lis      r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
addi     r3, r30, 0xc2c
addi     r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
li       r5, 0x40
li       r6, 0xa
bl       __destroy_arr
lis      r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
addi     r3, r30, 0x9ac
addi     r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
li       r5, 0x40
li       r6, 0xa
bl       __destroy_arr
lis      r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
addi     r3, r30, 0x72c
addi     r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
li       r5, 0x40
li       r6, 0xa
bl       __destroy_arr
lis      r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
addi     r3, r30, 0x4ac
addi     r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
li       r5, 0x40
li       r6, 0xa
bl       __destroy_arr
lis      r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
addi     r3, r30, 0x2ec
addi     r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
li       r5, 0x40
li       r6, 7
bl       __destroy_arr
addic.   r0, r30, 0x2bc
beq      lbl_803CF634
lis      r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@ha
addic.   r0, r30, 0x2bc
addi     r0, r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@l
stw      r0, 0x2bc(r30)
beq      lbl_803CF634
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x2bc
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x2bc(r30)
beq      lbl_803CF634
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x2bc
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x2bc(r30)
beq      lbl_803CF634
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x2bc
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x2bc(r30)
bl       __dt__5CNodeFv

lbl_803CF634:
addic.   r0, r30, 0x28c
beq      lbl_803CF690
lis      r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@ha
addic.   r0, r30, 0x28c
addi     r0, r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@l
stw      r0, 0x28c(r30)
beq      lbl_803CF690
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x28c
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x28c(r30)
beq      lbl_803CF690
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x28c
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x28c(r30)
beq      lbl_803CF690
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x28c
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x28c(r30)
bl       __dt__5CNodeFv

lbl_803CF690:
addic.   r0, r30, 0x240
beq      lbl_803CF6EC
lis      r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
addic.   r0, r30, 0x240
addi     r0, r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
stw      r0, 0x240(r30)
beq      lbl_803CF6EC
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x240
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x240(r30)
beq      lbl_803CF6EC
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x240
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x240(r30)
beq      lbl_803CF6EC
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x240
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x240(r30)
bl       __dt__5CNodeFv

lbl_803CF6EC:
addic.   r0, r30, 0x220
beq      lbl_803CF748
lis      r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
addic.   r0, r30, 0x220
addi     r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
stw      r0, 0x220(r30)
beq      lbl_803CF748
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x220
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x220(r30)
beq      lbl_803CF748
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x220
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x220(r30)
beq      lbl_803CF748
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x220
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x220(r30)
bl       __dt__5CNodeFv

lbl_803CF748:
addic.   r0, r30, 0x1e4
beq      lbl_803CF7B8
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0x204
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0x1e4(r30)
beq      lbl_803CF770
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0x204(r30)

lbl_803CF770:
addic.   r0, r30, 0x1e4
beq      lbl_803CF7B8
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x1e4
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x1e4(r30)
beq      lbl_803CF7B8
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x1e4
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x1e4(r30)
beq      lbl_803CF7B8
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x1e4
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x1e4(r30)
bl       __dt__5CNodeFv

lbl_803CF7B8:
extsh.   r0, r31
ble      lbl_803CF7C8
mr       r3, r30
bl       __dl__FPv

lbl_803CF7C8:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}
} // namespace Screen

/*
 * --INFO--
 * Address:	803CF7E4
 * Size:	000090
 */
E2DCallBack_Purupuru::~E2DCallBack_Purupuru(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803CF858
lis      r4, __vt__Q23ebi20E2DCallBack_Purupuru@ha
addi     r0, r4, __vt__Q23ebi20E2DCallBack_Purupuru@l
stw      r0, 0(r30)
beq      lbl_803CF848
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
addi     r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0(r30)
beq      lbl_803CF848
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803CF848
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803CF848:
extsh.   r0, r31
ble      lbl_803CF858
mr       r3, r30
bl       __dl__FPv

lbl_803CF858:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CF874
 * Size:	00043C
 */
Screen::TOption::TOption(void)
    : TScreenBase()
    , _010(1)
    , m_padInterfaces()
    , _0C8()
    , _0DC()
    , _0F0(0)
    , _0F1(0)
    , _0F2(0)
    , _0F3(0xFF)
    , _0F4(0xFF)
    , _0F8(0)
    , _0FC(0)
    , _100(0)
    , _1C4()
    , _1D4()
// TODO: The rest, if needed
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
lis      r4, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
li       r7, 0
stw      r0, 0x24(r1)
addi     r0, r4, __vt__Q33ebi6Screen20TScreenBaseInterface@l
li       r5, 1
li       r4, 0xff
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
mr       r30, r3
lis      r3, __vt__Q33ebi6Screen11TScreenBase@ha
stw      r29, 0x14(r1)
addi     r31, r30, 0x1e4
stw      r0, 0(r30)
addi     r0, r3, __vt__Q33ebi6Screen11TScreenBase@l
lis      r3, __vt__Q33ebi6Screen7TOption@ha
stw      r0, 0(r30)
addi     r6, r3, __vt__Q33ebi6Screen7TOption@l
li       r0, -1
mr       r3, r31
stw      r7, 4(r30)
stw      r7, 8(r30)
stw      r6, 0(r30)
stb      r5, 0x10(r30)
stw      r7, 0x18(r30)
stw      r7, 0x1c(r30)
stw      r7, 0x44(r30)
stw      r7, 0x48(r30)
stw      r7, 0x70(r30)
stw      r7, 0x74(r30)
stw      r7, 0x9c(r30)
stw      r7, 0xa0(r30)
stb      r7, 0xc8(r30)
stb      r7, 0xc9(r30)
stw      r7, 0xcc(r30)
stw      r7, 0xd0(r30)
stw      r7, 0xd4(r30)
stb      r7, 0xd8(r30)
stb      r7, 0xdc(r30)
stb      r7, 0xdd(r30)
stw      r7, 0xe0(r30)
stw      r7, 0xe4(r30)
stw      r7, 0xe8(r30)
stb      r7, 0xec(r30)
stb      r7, 0xf0(r30)
stb      r7, 0xf1(r30)
stb      r7, 0xf2(r30)
stb      r4, 0xf3(r30)
stb      r4, 0xf4(r30)
stw      r7, 0xf8(r30)
stw      r7, 0xfc(r30)
stw      r7, 0x100(r30)
stw      r0, 0x1c4(r30)
stw      r0, 0x1c8(r30)
stw      r0, 0x1cc(r30)
stw      r0, 0x1d0(r30)
stw      r0, 0x1d4(r30)
stw      r0, 0x1d8(r30)
stw      r0, 0x1dc(r30)
stw      r0, 0x1e0(r30)
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r6, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r5, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r31)
li       r0, 0
lis      r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
lis      r3, __vt__12J3DFrameCtrl@ha
stw      r0, 0x18(r31)
addi     r0, r6, __vt__Q29P2DScreen12CallBackNode@l
addi     r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
li       r6, 1
stw      r0, 0(r31)
addi     r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
addi     r0, r3, __vt__12J3DFrameCtrl@l
addi     r3, r31, 0x20
stw      r7, 0(r31)
li       r4, 0
stb      r6, 0x1c(r31)
stw      r5, 0(r31)
stw      r0, 0x20(r31)
bl       init__12J3DFrameCtrlFs
addi     r29, r30, 0x220
mr       r3, r29
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r29)
li       r0, 0
lis      r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
addi     r31, r30, 0x240
stw      r0, 0x18(r29)
addi     r0, r5, __vt__Q29P2DScreen12CallBackNode@l
addi     r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
li       r4, 1
stw      r0, 0(r29)
addi     r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
mr       r3, r31
stw      r5, 0(r29)
stb      r4, 0x1c(r29)
stw      r0, 0(r29)
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r6, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r31)
li       r0, 0
lis      r3, __ct__Q23ebi16E2DFullFontColorFv@ha
li       r7, 1
stw      r0, 0x18(r31)
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
addi     r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
addi     r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0(r31)
lis      r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
addi     r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
li       r6, 0x10
stw      r3, 0(r31)
addi     r3, r31, 0x20
li       r5, 0
stb      r7, 0x1c(r31)
li       r7, 2
stw      r0, 0(r31)
bl       __construct_array
lfs      f1, lbl_8051FA8C@sda21(r2)
addi     r29, r30, 0x28c
lfs      f0, lbl_8051FA90@sda21(r2)
li       r4, 1
stfs     f1, 0x40(r31)
li       r0, 0
mr       r3, r29
stfs     f0, 0x44(r31)
stb      r4, 0x48(r31)
stb      r0, 0x49(r31)
stb      r0, 0x1c(r31)
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r29)
li       r7, 0
lis      r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@ha
addi     r31, r30, 0x2bc
stw      r7, 0x18(r29)
addi     r0, r5, __vt__Q29P2DScreen12CallBackNode@l
addi     r6, r4, __vt__Q23ebi16E2DCallBack_Base@l
li       r5, 1
stw      r0, 0(r29)
addi     r4, r3, __vt__Q23ebi22E2DCallBack_BlinkAlpha@l
lfs      f1, lbl_8051FA8C@sda21(r2)
li       r0, 0xff
stw      r6, 0(r29)
mr       r3, r31
lfs      f0, lbl_8051FA90@sda21(r2)
stb      r5, 0x1c(r29)
stw      r4, 0(r29)
stfs     f1, 0x20(r29)
stfs     f0, 0x24(r29)
stb      r5, 0x28(r29)
stb      r7, 0x29(r29)
stb      r0, 0x2c(r29)
stb      r7, 0x2d(r29)
bl       __ct__5CNodeFv
lis      r4, __vt__Q29P2DScreen4Node@ha
li       r9, 0
addi     r0, r4, __vt__Q29P2DScreen4Node@l
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
stw      r0, 0(r31)
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
lis      r4, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
lis      r5, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r9, 0x18(r31)
li       r8, 1
lis      r6, __vt__Q23ebi22E2DCallBack_BlinkAlpha@ha
lis      r3, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
stw      r0, 0(r31)
addi     r0, r5, __vt__Q23ebi16E2DCallBack_Base@l
addi     r5, r3, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
addi     r3, r6, __vt__Q23ebi22E2DCallBack_BlinkAlpha@l
stw      r0, 0(r31)
li       r0, 0xff
lfs      f1, lbl_8051FA8C@sda21(r2)
addi     r4, r4, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
stb      r8, 0x1c(r31)
li       r6, 0x40
lfs      f0, lbl_8051FA90@sda21(r2)
li       r7, 7
stw      r3, 0(r31)
addi     r3, r30, 0x2ec
stfs     f1, 0x20(r31)
stfs     f0, 0x24(r31)
stb      r8, 0x28(r31)
stb      r9, 0x29(r31)
stb      r0, 0x2c(r31)
stb      r9, 0x2d(r31)
bl       __construct_array
lis      r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
lis      r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
addi     r4, r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
li       r6, 0x40
addi     r3, r30, 0x4ac
addi     r5, r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
li       r7, 0xa
bl       __construct_array
lis      r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
lis      r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
addi     r4, r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
li       r6, 0x40
addi     r3, r30, 0x72c
addi     r5, r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
li       r7, 0xa
bl       __construct_array
lis      r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
lis      r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
addi     r4, r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
li       r6, 0x40
addi     r3, r30, 0x9ac
addi     r5, r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
li       r7, 0xa
bl       __construct_array
lis      r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
lis      r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
addi     r4, r3, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
li       r6, 0x40
addi     r3, r30, 0xc2c
addi     r5, r5, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
li       r7, 0xa
bl       __construct_array
addi     r29, r30, 0xeac
mr       r3, r29
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r29)
li       r7, 0
lis      r3, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
addi     r6, r5, __vt__Q29P2DScreen12CallBackNode@l
stw      r7, 0x18(r29)
addi     r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
li       r4, 1
addi     r0, r3, __vt__Q23ebi24E2DCallBack_WindowCursor@l
stw      r6, 0(r29)
addi     r3, r29, 0x48
stw      r5, 0(r29)
stb      r4, 0x1c(r29)
stw      r0, 0(r29)
stw      r7, 0x40(r29)
stw      r7, 0x44(r29)
bl       __ct__Q32og6Screen8ScaleMgrFv
lfs      f0, lbl_8051FA88@sda21(r2)
li       r0, 0
addi     r3, r30, 0xc8
stfs     f0, 0x64(r29)
stw      r0, 0x68(r29)
bl       initParamForTest__Q33ebi6Screen16TOptionParameterFv
lwz      r0, 0x24(r1)
mr       r3, r30
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803CFCB0
 * Size:	000090
 */
E2DCallBack_WindowCursor::~E2DCallBack_WindowCursor(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803CFD24
lis      r4, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
addi     r0, r4, __vt__Q23ebi24E2DCallBack_WindowCursor@l
stw      r0, 0(r30)
beq      lbl_803CFD14
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
addi     r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0(r30)
beq      lbl_803CFD14
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803CFD14
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803CFD14:
extsh.   r0, r31
ble      lbl_803CFD24
mr       r3, r30
bl       __dl__FPv

lbl_803CFD24:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CFD40
 * Size:	00008C
 */
E2DCallBack_Purupuru::E2DCallBack_Purupuru()
    : _3C(1.0f)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
mr       r31, r30
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r31)
li       r0, 0
lis      r3, __vt__Q23ebi20E2DCallBack_Purupuru@ha
addi     r6, r5, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x18(r31)
addi     r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
li       r4, 1
addi     r0, r3, __vt__Q23ebi20E2DCallBack_Purupuru@l
stw      r6, 0(r31)
addi     r3, r30, 0x20
stw      r5, 0(r31)
stb      r4, 0x1c(r31)
stw      r0, 0(r30)
bl       __ct__Q32og6Screen8ScaleMgrFv
lfs      f0, lbl_8051FA88@sda21(r2)
mr       r3, r30
stfs     f0, 0x3c(r30)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CFDCC
 * Size:	000090
 */
E2DCallBack_BlinkAlpha::~E2DCallBack_BlinkAlpha(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803CFE40
lis      r4, __vt__Q23ebi22E2DCallBack_BlinkAlpha@ha
addi     r0, r4, __vt__Q23ebi22E2DCallBack_BlinkAlpha@l
stw      r0, 0(r30)
beq      lbl_803CFE30
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
addi     r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0(r30)
beq      lbl_803CFE30
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803CFE30
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803CFE30:
extsh.   r0, r31
ble      lbl_803CFE40
mr       r3, r30
bl       __dl__FPv

lbl_803CFE40:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CFE5C
 * Size:	000090
 */
E2DCallBack_BlinkFontColor::~E2DCallBack_BlinkFontColor(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803CFED0
lis      r4, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
addi     r0, r4, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
stw      r0, 0(r30)
beq      lbl_803CFEC0
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
addi     r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0(r30)
beq      lbl_803CFEC0
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803CFEC0
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803CFEC0:
extsh.   r0, r31
ble      lbl_803CFED0
mr       r3, r30
bl       __dl__FPv

lbl_803CFED0:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CFEEC
 * Size:	000018
 */
E2DFullFontColor::E2DFullFontColor(void)
    : _00(0xFFFFFFFF)
    , _04(0xFFFFFFFF)
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
{
	/*
li       r0, -1
stw      r0, 0(r3)
stw      r0, 4(r3)
stw      r0, 8(r3)
stw      r0, 0xc(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	803CFF04
 * Size:	000090
 */
E2DCallBack_CalcAnimation::~E2DCallBack_CalcAnimation(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803CFF78
lis      r4, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
addi     r0, r4, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
stw      r0, 0(r30)
beq      lbl_803CFF68
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
addi     r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0(r30)
beq      lbl_803CFF68
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803CFF68
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803CFF68:
extsh.   r0, r31
ble      lbl_803CFF78
mr       r3, r30
bl       __dl__FPv

lbl_803CFF78:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CFF94
 * Size:	0000AC
 */
E2DCallBack_AnmBase::~E2DCallBack_AnmBase(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803D0024
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0x20
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0(r30)
beq      lbl_803CFFD4
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0x20(r30)

lbl_803CFFD4:
cmplwi   r30, 0
beq      lbl_803D0014
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0(r30)
beq      lbl_803D0014
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803D0014
lis      r4, __vt__Q29P2DScreen4Node@ha
mr       r3, r30
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803D0014:
extsh.   r0, r31
ble      lbl_803D0024
mr       r3, r30
bl       __dl__FPv

lbl_803D0024:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803D0040
 * Size:	000080
 */
E2DCallBack_Base::~E2DCallBack_Base(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803D00A4
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
addi     r0, r4, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0(r30)
beq      lbl_803D0094
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803D0094
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803D0094:
extsh.   r0, r31
ble      lbl_803D00A4
mr       r3, r30
bl       __dl__FPv

lbl_803D00A4:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803D00C0
 * Size:	000088
 */
void Option::TMgr::loadResource(void)
{
	sys->heapStatusStart("Option::TMgr::loadResource", nullptr);
	m_optionScreen.loadResource();
	sys->heapStatusEnd("Option::TMgr::loadResource");
	m_saveMgr->m_saveMenu->loadResource();
	m_saveMgr->m_memoryCard->loadResource(JKRHeap::sCurrentHeap);
	sys->m_cardMgr->loadResource(JKRHeap::sCurrentHeap);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_80496650@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r4, r4, lbl_80496650@l
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r30
	bl       loadResource__Q33ebi6Screen7TOptionFv
	lis      r4, lbl_80496650@ha
	lwz      r3, sys@sda21(r13)
	addi     r4, r4, lbl_80496650@l
	bl       heapStatusEnd__6SystemFPc
	lwz      r31, 0xf18(r30)
	addi     r3, r31, 0x18
	bl       loadResource__Q33ebi6Screen9TSaveMenuFv
	lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r3, r31, 0x100
	mr       r4, r30
	bl       loadResource__Q33ebi6Screen11TMemoryCardFP7JKRHeap
	lwz      r3, sys@sda21(r13)
	mr       r4, r30
	lwz      r3, 0x5c(r3)
	bl       loadResource__Q34Game10MemoryCard3MgrFP7JKRHeap
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0148
 * Size:	00004C
 */
void Option::TMgr::setController(Controller* controller)
{
	m_controller = controller;
	m_optionScreen.setController(controller);
	// TODO: Did Save::TMgr have an inlined setController?
	m_saveMgr->m_controller               = controller;
	m_saveMgr->m_saveMenu->m_controller   = controller;
	m_saveMgr->m_memoryCard->m_controller = controller;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r31, 0xf1c(r3)
	bl       setController__Q33ebi6Screen7TOptionFP10Controller
	lwz      r3, 0xf18(r30)
	stw      r31, 0x3d0(r3)
	stw      r31, 0x24(r3)
	stw      r31, 0x104(r3)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0194
 * Size:	00003C
 */
void Option::TMgr::start(void)
{
	m_stateMachine.transit(this, LoadOption, nullptr);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	li       r5, 1
	stw      r0, 0x14(r1)
	addi     r3, r4, 0xf24
	li       r6, 0
	lwz      r12, 0xf24(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Option::TMgr::forceQuit(void)
{
	// UNUSED FUNCTION
	m_optionScreen.killScreen();
	m_saveMgr->forceQuit();
	::Screen::gGame2DMgr->m_screenMgr->reset();
}

/*
 * --INFO--
 * Address:	803D01D0
 * Size:	000028
 */
bool Option::TMgr::isFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getStateID__Q33ebi6Option4TMgrFv
	cntlzw   r0, r3
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D01F8
 * Size:	00007C
 */
void Option::TMgr::goEnd_(void)
{
	m_stateMachine.transit(this, Standby, nullptr);
	forceQuit();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0xf24
	lwz      r12, 0xf24(r31)
	mr       r4, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xf18(r31)
	bl       forceQuit__Q33ebi4Save4TMgrFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0274
 * Size:	000094
 */
void Option::TMgr::update(void)
{
	_F20 = 0;
	m_stateMachine.exec(this);
	if (getStateID()) {
		sys->m_cardMgr->update();
		m_optionScreen.update();
		m_saveMgr->update();
	}
	::Screen::gGame2DMgr->update();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	stb      r0, 0xf20(r3)
	addi     r3, r31, 0xf24
	lwz      r12, 0xf24(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       getStateID__Q33ebi6Option4TMgrFv
	cmpwi    r3, 0
	beq      lbl_803D02EC
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xf18(r31)
	bl       update__Q33ebi4Save4TMgrFv

lbl_803D02EC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0308
 * Size:	000090
 */
void Option::TMgr::draw(void)
{
	if (getStateID()) {
		sys->m_gfx->m_perspGraph.setPort();
		m_optionScreen.draw();
		sys->m_gfx->m_perspGraph.setPort();
		m_saveMgr->draw();
	}
	::Screen::gGame2DMgr->draw(*sys->m_gfx);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q33ebi6Option4TMgrFv
	cmpwi    r3, 0
	beq      lbl_803D0374
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	lwzu     r12, 0x190(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	lwzu     r12, 0x190(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xf18(r31)
	bl       draw__Q33ebi4Save4TMgrFv

lbl_803D0374:
	lwz      r4, sys@sda21(r13)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x24(r4)
	bl       draw__Q26Screen9Game2DMgrFR8Graphics
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Option::TMgr::showInfo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D0398
 * Size:	000058
 */
int Option::TMgr::getStateID(void)
{
	P2ASSERTLINE(430, _F28 != 0);
	return _F28;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xf40(r3)
	cmplwi   r0, 0
	bne      lbl_803D03D4
	lis      r3, lbl_80496608@ha
	lis      r5, lbl_8049666C@ha
	addi     r3, r3, lbl_80496608@l
	li       r4, 0x1ae
	addi     r5, r5, lbl_8049666C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D03D4:
	lwz      r3, 0xf40(r31)
	lwz      r0, 0x14(r1)
	lwz      r3, 4(r3)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D03F0
 * Size:	000050
 */
void E2DCallBack_CalcAnimation::do_update(void)
{
	if (_18->getTypeID() == 8) {
		static_cast<J2DScreen*>(_18)->animation();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 8
	bne      lbl_803D042C
	lwz      r3, 0x18(r31)
	bl       animation__9J2DScreenFv

lbl_803D042C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0440
 * Size:	000038
 */
void E2DCallBack_Base::update(void)
{
	if (_1C) {
		do_update();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_803D0468
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803D0468:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D0478
 * Size:	000004
 */
void E2DCallBack_Base::do_update(void) { }

/*
 * --INFO--
 * Address:	803D047C
 * Size:	000038
 */
void E2DCallBack_Base::draw(Graphics& gfx, J2DGrafContext& context)
{
	if (_1C) {
		do_draw(gfx, context);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_803D04A4
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_803D04A4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803D04B4
 * Size:	000004
 */
void E2DCallBack_Base::do_draw(Graphics&, J2DGrafContext&) { }
} // namespace ebi

/*
 * --INFO--
 * Address:	803D04B8
 * Size:	000004
 */
// void init__Q24Game28FSMState<ebi::Option::TMgr>
// FPQ33ebi6Option4TMgrPQ24Game8StateArg(void)
template <>
void Game::FSMState<ebi::Option::TMgr>::init(ebi::Option::TMgr*, StateArg* arg)
{
}

/*
 * --INFO--
 * Address:	803D04BC
 * Size:	000004
 */
// void exec__Q24Game28FSMState<ebi::Option::TMgr> FPQ33ebi6Option4TMgr(void) {
// }
template <>
void Game::FSMState<ebi::Option::TMgr>::exec(ebi::Option::TMgr*)
{
}

/*
 * --INFO--
 * Address:	803D04C0
 * Size:	000004
 */
// void cleanup__Q24Game28FSMState<ebi::Option::TMgr> FPQ33ebi6Option4TMgr(void)
// {}
template <>
void Game::FSMState<ebi::Option::TMgr>::cleanup(ebi::Option::TMgr*)
{
}

/*
 * --INFO--
 * Address:	803D04C4
 * Size:	000004
 */
// void resume__Q24Game28FSMState<ebi::Option::TMgr> FPQ33ebi6Option4TMgr(void)
// { }
template <>
void Game::FSMState<ebi::Option::TMgr>::resume(ebi::Option::TMgr*)
{
}

/*
 * --INFO--
 * Address:	803D04C8
 * Size:	000004
 */
// void restart__Q24Game28FSMState<ebi::Option::TMgr> FPQ33ebi6Option4TMgr(void)
// {}
template <>
void Game::FSMState<ebi::Option::TMgr>::restart(ebi::Option::TMgr*)
{
}

/*
 * --INFO--
 * Address:	803D04CC
 * Size:	000004
 */
// void init__Q24Game32StateMachine<ebi::Option::TMgr>
// FPQ33ebi6Option4TMgr(void)
template <>
void Game::StateMachine<ebi::Option::TMgr>::init(ebi::Option::TMgr*)
{
}

/*
 * --INFO--
 * Address:	803D04D0
 * Size:	000038
 */
// void exec__Q24Game32StateMachine<ebi::Option::TMgr>
// FPQ33ebi6Option4TMgr(void)
template <>
void Game::StateMachine<ebi::Option::TMgr>::exec(ebi::Option::TMgr* obj)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xf40(r4)
	cmplwi   r3, 0
	beq      lbl_803D04F8
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_803D04F8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * This should be auto-generated.
 *
 * --INFO--
 * Address:	803D0508
 * Size:	000064
 */
// void create__Q24Game32StateMachine<ebi::Option::TMgr> Fi(void)
// template <> void Game::StateMachine<ebi::Option::TMgr>::create(int)
// {
/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
li       r0, 0
stw      r31, 0xc(r1)
mr       r31, r3
stw      r4, 0xc(r3)
stw      r0, 8(r3)
lwz      r0, 0xc(r3)
slwi     r3, r0, 2
bl       __nwa__FUl
stw      r3, 4(r31)
lwz      r0, 0xc(r31)
slwi     r3, r0, 2
bl       __nwa__FUl
stw      r3, 0x10(r31)
lwz      r0, 0xc(r31)
slwi     r3, r0, 2
bl       __nwa__FUl
stw      r3, 0x14(r31)
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
// }

/*
 * --INFO--
 * Address:	803D056C
 * Size:	00009C
 */
// void transit__Q24Game32StateMachine<ebi::Option::TMgr>
// FPQ33ebi6Option4TMgriPQ24Game8StateArg(void)
template <>
void Game::StateMachine<ebi::Option::TMgr>::transit(ebi::Option::TMgr*, int, Game::StateArg* arg)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0xF40(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0xF40(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * This should be auto-generated.
 *
 * --INFO--
 * Address:	803D0608
 * Size:	000084
 */
// void registerState__Q24Game32StateMachine<ebi::Option::TMgr>
// FPQ24Game28FSMState<ebi::Option::TMgr>(void)
// template <> void
// Game::StateMachine<ebi::Option::TMgr>::registerState(Game::FSMState<ebi::Option::TMgr>*);
// {
/*
.loc_0x0:
  lwz       r6, 0x8(r3)
  lwz       r0, 0xC(r3)
  cmpw      r6, r0
  bgelr-
  lwz       r5, 0x4(r3)
  rlwinm    r0,r6,2,0,29
  stwx      r4, r5, r0
  lwz       r5, 0x4(r4)
  cmpwi     r5, 0
  blt-      .loc_0x34
  lwz       r0, 0xC(r3)
  cmpw      r5, r0
  blt-      .loc_0x3C

.loc_0x34:
  li        r0, 0
  b         .loc_0x40

.loc_0x3C:
  li        r0, 0x1

.loc_0x40:
  rlwinm.   r0,r0,0,24,31
  beqlr-
  stw       r3, 0x8(r4)
  lwz       r0, 0x8(r3)
  lwz       r6, 0x4(r4)
  lwz       r5, 0x10(r3)
  rlwinm    r0,r0,2,0,29
  stwx      r6, r5, r0
  lwz       r0, 0x4(r4)
  lwz       r5, 0x8(r3)
  lwz       r4, 0x14(r3)
  rlwinm    r0,r0,2,0,29
  stwx      r5, r4, r0
  lwz       r4, 0x8(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r3)
  blr
*/
// }
