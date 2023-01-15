#include "ebi/FileSelect.h"
#include "System.h"
#include "Game/MemoryCard/Mgr.h"
#include "MemoryCardMgr.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80497010
    lbl_80497010:
        .4byte 0x65626946
        .4byte 0x696C6553
        .4byte 0x656C6563
        .4byte 0x744D6772
        .4byte 0x00000000
        .4byte 0x456E7074
        .4byte 0x79557064
        .4byte 0x61746500
        .4byte 0x4D6F756E
        .4byte 0x74436865
        .4byte 0x636B0000
        .4byte 0x47657450
        .4byte 0x6C617965
        .4byte 0x72486561
        .4byte 0x64657200
        .4byte 0x43617264
        .4byte 0x4572726F
        .4byte 0x72000000
        .4byte 0x53637265
        .4byte 0x656E4669
        .4byte 0x6C655365
        .4byte 0x6C656374
        .4byte 0x00000000
    .global lbl_8049706C
    lbl_8049706C:
        .4byte 0x65626946
        .4byte 0x696C6553
        .4byte 0x656C6563
        .4byte 0x744D6772
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80497084
    lbl_80497084:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x81A68381
        .4byte 0x8382838A
        .4byte 0x815B834A
        .4byte 0x815B8368
        .4byte 0x83478389
        .4byte 0x815B3A91
        .4byte 0x7A92E88A
        .4byte 0x4F82CC83
        .4byte 0x50815B83
        .4byte 0x5882C582
        .4byte 0xB70A0000
        .4byte 0x81A6838D
        .4byte 0x815B8368
        .4byte 0x82C58356
        .4byte 0x838A8341
        .4byte 0x838B8347
        .4byte 0x8389815B
        .4byte 0x82CD82A0
        .4byte 0x82E882A6
        .4byte 0x82C882A2
        .4byte 0x0A000000
        .4byte 0x81A68140
        .4byte 0x6D67722D
        .4byte 0x3E6D4361
        .4byte 0x72644572
        .4byte 0x726F724D
        .4byte 0x67722D3E
        .4byte 0x67657445
        .4byte 0x6E643D25
        .4byte 0x642082C1
        .4byte 0x82C482A0
        .4byte 0x82E882A6
        .4byte 0x82C882A2
        .4byte 0x81490A00

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E9678
    lbl_804E9678:
        .4byte lbl_803E177C
        .4byte lbl_803E181C
        .4byte lbl_803E1768
        .4byte lbl_803E17CC
        .4byte lbl_803E17E0
        .4byte lbl_803E1790
        .4byte lbl_803E17A4
        .4byte lbl_803E17B8
        .4byte lbl_803E17F4
        .4byte lbl_803E1808
        .4byte lbl_803E1858
        .4byte lbl_803E1858
        .4byte lbl_803E1858
        .4byte lbl_803E1844
        .4byte lbl_803E1830
    .global __vt__Q33ebi10FileSelect4TMgr
    __vt__Q33ebi10FileSelect4TMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q33ebi10FileSelect4TMgrFv
    .global "__vt__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>"
    "__vt__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "start__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
        .4byte
   "exec__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "transit__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
    .global __vt__Q33ebi10FileSelect18FSMState_CardError
    __vt__Q33ebi10FileSelect18FSMState_CardError:
        .4byte 0
        .4byte 0
        .4byte
   init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
        .4byte
   "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi10FileSelect18FSMState_CardErrorFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte
   do_exec__Q33ebi10FileSelect18FSMState_CardErrorFPQ33ebi10FileSelect4TMgr
    .global __vt__Q33ebi10FileSelect25FSMState_ScreenFileSelect
    __vt__Q33ebi10FileSelect25FSMState_ScreenFileSelect:
        .4byte 0
        .4byte 0
        .4byte
   init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
        .4byte
   "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi10FileSelect25FSMState_ScreenFileSelectFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte
   do_exec__Q33ebi10FileSelect25FSMState_ScreenFileSelectFPQ33ebi10FileSelect4TMgr
    .global __vt__Q33ebi10FileSelect24FSMState_GetPlayerHeader
    __vt__Q33ebi10FileSelect24FSMState_GetPlayerHeader:
        .4byte 0
        .4byte 0
        .4byte
   init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
        .4byte
   "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte
   do_exec__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_cardRequest__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardReady__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardNoCard__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardIOError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardWrongDevice__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardWrongSector__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardEncoding__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardNoFileSpace__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardNoFileEntry__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardFileOpenError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardSerialNoError__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardPlayerDataBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .global __vt__Q33ebi10FileSelect19FSMState_MountCheck
    __vt__Q33ebi10FileSelect19FSMState_MountCheck:
        .4byte 0
        .4byte 0
        .4byte
   init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
        .4byte
   "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte
   do_exec__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_cardRequest__Q33ebi10FileSelect19FSMState_MountCheckFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardReady__Q33ebi10FileSelect19FSMState_MountCheckFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardNoCard__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardIOError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardWrongDevice__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardWrongSector__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardEncoding__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardNoFileSpace__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardNoFileEntry__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardFileOpenError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardSerialNoError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardPlayerDataBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .global __vt__Q33ebi10FileSelect20FSMState_CardRequest
    __vt__Q33ebi10FileSelect20FSMState_CardRequest:
        .4byte 0
        .4byte 0
        .4byte
   init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
        .4byte
   "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte
   do_exec__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte 0
        .4byte 0
        .4byte
   do_transitCardNoCard__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardIOError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardWrongDevice__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardWrongSector__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardEncoding__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardNoFileSpace__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardNoFileEntry__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardFileOpenError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardSerialNoError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
        .4byte
   do_transitCardPlayerDataBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .global __vt__Q33ebi10FileSelect20FSMState_EmptyUpdate
    __vt__Q33ebi10FileSelect20FSMState_EmptyUpdate:
        .4byte 0
        .4byte 0
        .4byte
   init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
        .4byte
   "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi10FileSelect20FSMState_EmptyUpdateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte
   do_exec__Q33ebi10FileSelect20FSMState_EmptyUpdateFPQ33ebi10FileSelect4TMgr
    .global __vt__Q33ebi10FileSelect8FSMState
    __vt__Q33ebi10FileSelect8FSMState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
        .4byte
   "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
        .4byte do_exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
    .global "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"
    "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgrPQ24Game8StateArg"
        .4byte
   "exec__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
    .global __vt__Q33ebi10FileSelect15FSMStateMachine
    __vt__Q33ebi10FileSelect15FSMStateMachine:
        .4byte 0
        .4byte 0
        .4byte
   init__Q33ebi10FileSelect15FSMStateMachineFPQ33ebi10FileSelect4TMgr .4byte
   "start__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
        .4byte
   "exec__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
        .4byte
   "transit__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global msInstance__Q33ebi10FileSelect4TMgr
    msInstance__Q33ebi10FileSelect4TMgr:
        .skip 0x8
*/

static const char name[] = "ebiFileSelectMgr";

namespace ebi {
namespace FileSelect {

/*
 * --INFO--
 * Address:	803E12E0
 * Size:	000248
 */
void FSMStateMachine::init(TMgr* mgr)
{
	create(6);
	registerState(new FSMState_Standby);
	registerState(new FSMState_EmptyUpdate);
	registerState(new FSMState_MountCheck);
	registerState(new FSMState_GetPlayerHeader);
	registerState(new FSMState_CardError);
	registerState(new FSMState_ScreenFileSelect);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_80497010@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_80497010@l
	li       r4, 6
	stw      r30, 8(r1)
	mr       r30, r3
	bl       "create__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>Fi"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803E1344
	lis      r5, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
	lis      r3, __vt__Q33ebi10FileSelect8FSMState@ha
	addi     r0, r5, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
	li       r5, 0
	stw      r0, 0(r4)
	addi     r3, r3, __vt__Q33ebi10FileSelect8FSMState@l
	addi     r0, r2, lbl_8051FC18@sda21
	stw      r5, 4(r4)
	stw      r5, 8(r4)
	stw      r3, 0(r4)
	stw      r0, 0xc(r4)

lbl_803E1344:
	mr       r3, r30
	bl
"registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803E13A0
	lis      r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
	lis      r5, __vt__Q33ebi10FileSelect8FSMState@ha
	addi     r0, r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
	lis      r3, __vt__Q33ebi10FileSelect20FSMState_EmptyUpdate@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi10FileSelect8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x14
	addi     r0, r3, __vt__Q33ebi10FileSelect20FSMState_EmptyUpdate@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)
	stw      r7, 0x10(r4)
	stw      r7, 0x14(r4)

lbl_803E13A0:
	mr       r3, r30
	bl
"registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803E1400
	lis      r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
	lis      r6, __vt__Q33ebi10FileSelect8FSMState@ha
	addi     r0, r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
	lis      r5, __vt__Q33ebi10FileSelect20FSMState_CardRequest@ha
	stw      r0, 0(r4)
	li       r7, 2
	lis      r3, __vt__Q33ebi10FileSelect19FSMState_MountCheck@ha
	li       r0, 0
	stw      r7, 4(r4)
	addi     r7, r6, __vt__Q33ebi10FileSelect8FSMState@l
	addi     r6, r31, 0x20
	addi     r5, r5, __vt__Q33ebi10FileSelect20FSMState_CardRequest@l
	stw      r0, 8(r4)
	addi     r0, r3, __vt__Q33ebi10FileSelect19FSMState_MountCheck@l
	stw      r7, 0(r4)
	stw      r6, 0xc(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_803E1400:
	mr       r3, r30
	bl
"registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803E1460
	lis      r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
	lis      r6, __vt__Q33ebi10FileSelect8FSMState@ha
	addi     r0, r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
	lis      r5, __vt__Q33ebi10FileSelect20FSMState_CardRequest@ha
	stw      r0, 0(r4)
	li       r7, 3
	lis      r3, __vt__Q33ebi10FileSelect24FSMState_GetPlayerHeader@ha
	li       r0, 0
	stw      r7, 4(r4)
	addi     r7, r6, __vt__Q33ebi10FileSelect8FSMState@l
	addi     r6, r31, 0x2c
	addi     r5, r5, __vt__Q33ebi10FileSelect20FSMState_CardRequest@l
	stw      r0, 8(r4)
	addi     r0, r3, __vt__Q33ebi10FileSelect24FSMState_GetPlayerHeader@l
	stw      r7, 0(r4)
	stw      r6, 0xc(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_803E1460:
	mr       r3, r30
	bl
"registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803E14B4
	lis      r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
	lis      r5, __vt__Q33ebi10FileSelect8FSMState@ha
	addi     r0, r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
	lis      r3, __vt__Q33ebi10FileSelect18FSMState_CardError@ha
	stw      r0, 0(r4)
	li       r0, 4
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi10FileSelect8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x3c
	addi     r0, r3, __vt__Q33ebi10FileSelect18FSMState_CardError@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_803E14B4:
	mr       r3, r30
	bl
"registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803E1508
	lis      r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
	lis      r5, __vt__Q33ebi10FileSelect8FSMState@ha
	addi     r0, r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
	lis      r3, __vt__Q33ebi10FileSelect25FSMState_ScreenFileSelect@ha
	stw      r0, 0(r4)
	li       r0, 5
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi10FileSelect8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x48
	addi     r0, r3, __vt__Q33ebi10FileSelect25FSMState_ScreenFileSelect@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_803E1508:
	mr       r3, r30
	bl
"registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
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
 * Address:	803E1528
 * Size:	00002C
 */
void FSMState::init(TMgr* mgr, Game::StateArg* arg) { do_init(mgr, arg); }

/*
 * --INFO--
 * Address:	803E1554
 * Size:	000004
 */
void FSMState::do_init(TMgr*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	803E1558
 * Size:	00002C
 */
void FSMState::exec(TMgr* mgr) { do_exec(mgr); }

/*
 * --INFO--
 * Address:	803E1584
 * Size:	000004
 */
void FSMState::do_exec(TMgr*) { }

/*
 * --INFO--
 * Address:	803E1588
 * Size:	000010
 */
void FSMState_EmptyUpdate::do_init(TMgr* mgr, Game::StateArg* arg)
{
	m_counter = 2;
	_14       = 2;
}

/*
 * --INFO--
 * Address:	803E1598
 * Size:	000054
 */
void FSMState_EmptyUpdate::do_exec(TMgr* mgr)
{
	if (m_counter) {
		m_counter--;
	}
	if (!m_counter) {
		transit(mgr, FSSTATE_MountCheck, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E15EC
 * Size:	000030
 */
// void Game::FSMState<ebi::FileSelect::TMgr>::transit(ebi::FileSelect::TMgr* mgr, int id, Game::StateArg*)
//{
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
//}

/*
 * --INFO--
 * Address:	803E161C
 * Size:	00000C
 */
void FSMState_CardRequest::do_init(TMgr* mgr, Game::StateArg* arg) { m_state = 0; }

/*
 * --INFO--
 * Address:	803E1628
 * Size:	000278
 */
void FSMState_CardRequest::do_exec(TMgr* mgr)
{
	switch (m_state) {
	case 0:
		bool check2 = (!sys->m_cardMgr->_A8) && (sys->m_cardMgr->checkStatus() != 11);
		if (check2) {
			P2ASSERTLINE(90, do_cardRequest(mgr));
			m_state = 1;
		}
		break;
	case 1:
		bool check3 = (!sys->m_cardMgr->_A8) && (sys->m_cardMgr->checkStatus() != 11);
		if (check3) {
			m_cardStatus = (int)static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->getCardStatus();
			static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->getCardStatus();
			m_state = 2;
		}
		break;
	case 2:
		switch (m_cardStatus) {
		case Game::MemoryCard::Mgr::MCS_Ready:
			do_transitCardReady(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_NoCard:
			do_transitCardNoCard(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_IOError:
			do_transitCardIOError(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_WrongDevice:
			do_transitCardWrongDevice(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_WrongSector:
			do_transitCardWrongSector(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_Broken:
			do_transitCardBroken(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_Encoding:
			do_transitCardEncoding(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_NoFileSpace:
			do_transitCardNoFileSpace(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_NoFileEntry:
			do_transitCardNoFileEntry(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_FileOpenError:
			do_transitCardFileOpenError(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_SerialNoError:
			do_transitCardSerialNoError(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_PlayerDataBroken:
			do_transitCardPlayerDataBroken(mgr);
			break;
		default:
			JUT_PANICLINE(150, "※メモリーカードエラー:想定外のケースです\n");
			JUT_PANICLINE(151, "P2Assert");
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	803E18A0
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardNoCard(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_NoCard;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E18DC
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardIOError(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_IOError;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1918
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardWrongDevice(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_WrongDevice;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1954
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardWrongSector(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_WrongSector;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1990
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardBroken(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_DataBrokenAndDoYouFormat;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E19CC
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardEncoding(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_DataBrokenAndDoYouFormat;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1A08
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardNoFileSpace(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_OverCapacity;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1A44
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardNoFileEntry(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_OverCapacity;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1A80
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardFileOpenError(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_DoYouCreateNewFile;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1ABC
 * Size:	00002C
 */
void FSMState_CardRequest::do_transitCardPlayerDataBroken(TMgr* mgr) { do_transitCardReady(mgr); }

/*
 * --INFO--
 * Address:	803E1AE8
 * Size:	000054
 */
void FSMState_CardRequest::do_transitCardSerialNoError(TMgr* mgr)
{
	JUT_PANICLINE(224, "※ロードでシリアルエラーはありえない\n"); // * There is no serial error during loading
	JUT_PANICLINE(225, "P2Assert");
}

/*
 * --INFO--
 * Address:	803E1B3C
 * Size:	000028
 */
bool FSMState_MountCheck::do_cardRequest(TMgr* mgr) { return static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->resetError(); }

/*
 * --INFO--
 * Address:	803E1B64
 * Size:	000034
 */
void FSMState_MountCheck::do_transitCardReady(TMgr* mgr) { transit(mgr, FSState_GetPlayerHeader, nullptr); }

/*
 * --INFO--
 * Address:	803E1B98
 * Size:	00002C
 */
bool FSMState_GetPlayerHeader::do_cardRequest(TMgr* mgr)
{
	return static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->getPlayerHeader(&mgr->m_player);
}

/*
 * --INFO--
 * Address:	803E1BC4
 * Size:	000034
 */
void FSMState_GetPlayerHeader::do_transitCardReady(TMgr* mgr) { transit(mgr, FSState_ScreenFileSelect, nullptr); }

/*
 * --INFO--
 * Address:	803E1BF8
 * Size:	000038
 */
void FSMState_GetPlayerHeader::do_transitCardSerialNoError(TMgr* mgr) { JUT_PANICLINE(261, "P2Assert"); }

/*
 * --INFO--
 * Address:	803E1C30
 * Size:	000044
 */
void FSMState_ScreenFileSelect::do_init(TMgr* mgr, Game::StateArg* arg)
{
	mgr->m_mgrFS.perseInfo(mgr->m_player);
	mgr->m_mgrFS.startSeq();
	mgr->m_cardErrorMgr.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803E1C74
 * Size:	0000C4
 */
void FSMState_ScreenFileSelect::do_exec(TMgr* mgr)
{
	if (mgr->m_mgrFS.isFinish()) {
		switch (mgr->m_mgrFS._00[0xc38]) { // needs to load byte
		case 1:
		case 2:
			transit(mgr, FSSTATE_MountCheck, nullptr);
			break;
		case 3:
			mgr->goEnd_(TMgr::End_2);
			break;
		case 4:
			mgr->goEnd_(TMgr::End_1);
			break;
		case 5:
			mgr->goEnd_(TMgr::End_3);
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
	addi     r3, r31, 0x18
	bl       isFinish__Q33ebi2FS4TMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803E1D20
	lwz      r0, 0xc50(r31)
	cmpwi    r0, 4
	beq      lbl_803E1D04
	bge      lbl_803E1CC4
	cmpwi    r0, 3
	bge      lbl_803E1CF4
	cmpwi    r0, 1
	bge      lbl_803E1CD0
	b        lbl_803E1D20

lbl_803E1CC4:
	cmpwi    r0, 6
	bge      lbl_803E1D20
	b        lbl_803E1D14

lbl_803E1CD0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803E1D20

lbl_803E1CF4:
	mr       r3, r31
	li       r4, 2
	bl       goEnd___Q33ebi10FileSelect4TMgrFQ43ebi10FileSelect4TMgr7enumEnd
	b        lbl_803E1D20

lbl_803E1D04:
	mr       r3, r31
	li       r4, 1
	bl       goEnd___Q33ebi10FileSelect4TMgrFQ43ebi10FileSelect4TMgr7enumEnd
	b        lbl_803E1D20

lbl_803E1D14:
	mr       r3, r31
	li       r4, 3
	bl       goEnd___Q33ebi10FileSelect4TMgrFQ43ebi10FileSelect4TMgr7enumEnd

lbl_803E1D20:
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
 * Address:	803E1D38
 * Size:	000060
 */
void FSMState_CardError::do_init(TMgr* mgr, Game::StateArg* arg)
{
	CardErrorStateArg* carg = static_cast<CardErrorStateArg*>(arg);
	P2ASSERTLINE(319, arg);
	mgr->m_cardErrorMgr.startSeq((CardError::TMgr::enumStart)carg->_00);
}

/*
 * --INFO--
 * Address:	803E1D98
 * Size:	0000B8
 */
void FSMState_CardError::do_exec(TMgr* mgr)
{
	if (mgr->m_cardErrorMgr.isGetEnd()) {
		switch (mgr->m_cardErrorMgr.m_endStat) {
		case 1:
			static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->loadPlayerForNoCard(0);
			mgr->goEnd_(TMgr::End_1);
			break;
		case 2:
			mgr->start();
			break;
		default:
			JUT_PANICLINE(342, "※ mgr->mCardErrorMgr->getEnd=%d ってありえない！\n", mgr->m_cardErrorMgr.m_endStat);
			JUT_PANICLINE(343, "P2Assert");
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
TMgr::TMgr()
{
	m_counter = 0;
	_F44      = 0;
	m_fsm.init(this);
	m_fsm.start(this, FSSTATE_Standby, 0);
	m_inError = false;
}

/*
 * --INFO--
 * Address:	803E1E50
 * Size:	000034
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::start(ebi::FileSelect::TMgr*, int, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x1008(r4)
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

/*
 * --INFO--
 * Address:	803E1E84
 * Size:	000054
 */
// FS::TMgr::~TMgr()
//{
/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803E1EBC
li       r4, -1
bl       __dt__Q43ebi6Screen10FileSelect11TMainScreenFv
extsh.   r0, r31
ble      lbl_803E1EBC
mr       r3, r30
bl       __dl__FPv

lbl_803E1EBC:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
//}

/*
 * --INFO--
 * Address:	803E1ED8
 * Size:	000084
 */
TMgr::~TMgr() { msInstance = nullptr; }

/*
 * --INFO--
 * Address:	803E1F5C
 * Size:	0000DC
 */
TMgr* TMgr::createInstance()
{
	if (!msInstance)
		msInstance = new TMgr;
	return msInstance;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r0, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803E2020
	li       r3, 0x100c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_803E201C
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__Q33ebi10FileSelect4TMgr@ha
	addi     r3, r31, 0x18
	addi     r0, r4, __vt__Q33ebi10FileSelect4TMgr@l
	stw      r0, 0(r31)
	bl       __ct__Q33ebi2FS4TMgrFv
	addi     r3, r31, 0xc78
	bl       __ct__Q33ebi9CardError4TMgrFv
	li       r0, 0
	addi     r3, r31, 0xf48
	stw      r0, 0xf40(r31)
	stw      r0, 0xf44(r31)
	bl       __ct__Q34Game10MemoryCard14PlayerFileInfoFv
	lis      r4, "__vt__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>"@ha
	lis      r3, __vt__Q33ebi10FileSelect15FSMStateMachine@ha
	addi     r0, r4, "__vt__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>"@l
	li       r5, -1
	stw      r0, 0xfec(r31)
	addi     r0, r3, __vt__Q33ebi10FileSelect15FSMStateMachine@l
	addi     r3, r31, 0xfec
	mr       r4, r31
	stw      r5, 0x1004(r31)
	stw      r0, 0xfec(r31)
	lwz      r12, 0xfec(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0xfec
	mr       r4, r31
	lwz      r12, 0xfec(r31)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0xfe9(r31)

lbl_803E201C:
	stw      r31, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)

lbl_803E2020:
	lwz      r0, 0x14(r1)
	lwz      r3, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void TMgr::deleteInstance() { delete msInstance; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
TMgr* TMgr::getInstance() { return msInstance; }

/*
 * --INFO--
 * Address:	803E2038
 * Size:	000058
 */
void TMgr::onDvdErrorOccured()
{
	if (msInstance) {
		if (!msInstance->isFinish()) {
			msInstance->m_inError = true;
			msInstance->forceQuit();
		} else {
			msInstance->m_inError = false;
		}
	}
}

/*
 * --INFO--
 * Address:	803E2090
 * Size:	000044
 */
void TMgr::onDvdErrorRecovered()
{
	if (msInstance && msInstance->m_inError) {
		msInstance->start();
		msInstance->m_inError = false;
	}
}

/*
 * --INFO--
 * Address:	803E20D4
 * Size:	00004C
 */
void TMgr::start()
{
	_FE8    = true;
	m_state = 0;
	m_fsm.start(this, FSSTATE_EmptyUpdate, nullptr);
}

/*
 * --INFO--
 * Address:	803E2120
 * Size:	000058
 */
void TMgr::forceQuit()
{
	m_fsm.start(this, FSSTATE_Standby, nullptr);
	m_cardErrorMgr.forceQuitSeq();
	m_mgrFS.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803E2178
 * Size:	00008C
 */
void TMgr::update()
{
	m_fsm.exec(this);
	if (getStateID()) {
		sys->m_cardMgr->update();
		m_cardErrorMgr.update();
		m_mgrFS.update();
		if (m_counter) {
			m_counter--;
		}
	}
}

/*
 * --INFO--
 * Address:	803E2204
 * Size:	000044
 */
void TMgr::draw()
{
	if (getStateID()) {
		m_mgrFS.draw();
		m_cardErrorMgr.draw();
	}
}

/*
 * --INFO--
 * Address:	803E2248
 * Size:	000004
 */
void TMgr::showInfo() { }

/*
 * --INFO--
 * Address:	803E224C
 * Size:	00004C
 */
bool TMgr::isFinish()
{
	if (!getStateID() && !m_inError) {
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803E2298
 * Size:	00005C
 */
void TMgr::goEnd_(enumEnd end)
{
	m_state = end;
	m_fsm.transit(this, FSSTATE_Standby, nullptr);
	m_mgrFS.forceQuitSeq();
	m_cardErrorMgr.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803E22F4
 * Size:	000058
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(534, m_currentState);
	return m_currentState->m_id;
}

/*
 * --INFO--
 * Address:	803E234C
 * Size:	000004
 */
void Game::FSMState<ebi::FileSelect::TMgr>::init(ebi::FileSelect::TMgr*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	803E2350
 * Size:	000004
 */
void Game::FSMState<ebi::FileSelect::TMgr>::exec(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E2354
 * Size:	000004
 */
void Game::FSMState<ebi::FileSelect::TMgr>::cleanup(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E2358
 * Size:	000004
 */
void Game::FSMState<ebi::FileSelect::TMgr>::resume(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E235C
 * Size:	000004
 */
void Game::FSMState<ebi::FileSelect::TMgr>::restart(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E2360
 * Size:	000004
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::init(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E2364
 * Size:	000038
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::exec(ebi::FileSelect::TMgr*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1008(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E239C
 * Size:	000064
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::create(int)
{
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
}

/*
 * --INFO--
 * Address:	803E2400
 * Size:	00009C
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::transit(ebi::FileSelect::TMgr*, int, Game::StateArg*)
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
	  lwz       r30, 0x1008(r4)
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
	  stw       r3, 0x1008(r28)
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
 * --INFO--
 * Address:	803E249C
 * Size:	000084
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::registerState(Game::FSMState<ebi::FileSelect::TMgr>*)
{
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
}

} // namespace FileSelect

} // namespace ebi
