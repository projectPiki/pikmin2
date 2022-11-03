.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80496DD0:
	.asciz "ebiSaveMgr"
.balign 4
lbl_80496DDC:
	.asciz "DoYouSave"
.balign 4
lbl_80496DE8:
	.asciz "DoYouContinue"
.balign 4
lbl_80496DF8:
	.asciz "MountCheck"
.balign 4
lbl_80496E04:
	.asciz "GetPlayerHeader"
.balign 4
lbl_80496E14:
	.asciz "CheckBeforeSave"
.balign 4
lbl_80496E24:
	.asciz "AfterSave"
.balign 4
lbl_80496E30:
	.asciz "CardError"
.balign 4
lbl_80496E3C:
	.asciz "ebiSaveMgr.cpp"
.balign 4
lbl_80496E4C:
	.asciz "P2Assert"
.balign 4
lbl_80496E58: # Shift-JIS
	.4byte 0x917A92E8
	.4byte 0x8A4F82C5
	.4byte 0x82B78142
	.4byte 0x82A082E8
	.4byte 0x82A682CB
	.4byte 0x815B0000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
lbl_804E8F80:
	.4byte .L_803DB994
	.4byte .L_803DBA34
	.4byte .L_803DB980
	.4byte .L_803DB9E4
	.4byte .L_803DB9F8
	.4byte .L_803DB9A8
	.4byte .L_803DB9BC
	.4byte .L_803DB9D0
	.4byte .L_803DBA0C
	.4byte .L_803DBA20
	.4byte .L_803DBA70
	.4byte .L_803DBA70
	.4byte .L_803DBA70
	.4byte .L_803DBA5C
	.4byte .L_803DBA48
.global "__vt__Q24Game30StateMachine<Q33ebi4Save4TMgr>"
"__vt__Q24Game30StateMachine<Q33ebi4Save4TMgr>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "start__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
.global __vt__Q33ebi4Save4TMgr
__vt__Q33ebi4Save4TMgr:
	.4byte 0
	.4byte 0
	.4byte __dt__Q33ebi4Save4TMgrFv
.global __vt__Q33ebi4Save18FSMState_CardError
__vt__Q33ebi4Save18FSMState_CardError:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi4Save18FSMState_CardErrorFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi4Save18FSMState_CardErrorFPQ33ebi4Save4TMgr
.global __vt__Q33ebi4Save18FSMState_AfterSave
__vt__Q33ebi4Save18FSMState_AfterSave:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi4Save18FSMState_AfterSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi4Save18FSMState_AfterSaveFPQ33ebi4Save4TMgr
.global __vt__Q33ebi4Save16FSMState_NowSave
__vt__Q33ebi4Save16FSMState_NowSave:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi4Save16FSMState_NowSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi4Save16FSMState_NowSaveFPQ33ebi4Save4TMgr
.global __vt__Q33ebi4Save24FSMState_CheckBeforeSave
__vt__Q33ebi4Save24FSMState_CheckBeforeSave:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_cardRequest__Q33ebi4Save24FSMState_CheckBeforeSaveFPQ33ebi4Save4TMgr
	.4byte do_transitCardReady__Q33ebi4Save24FSMState_CheckBeforeSaveFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoCard__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardIOError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardWrongDevice__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardWrongSector__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardEncoding__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoFileSpace__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoFileEntry__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardFileOpenError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardSerialNoError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardPlayerDataBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
.global __vt__Q33ebi4Save24FSMState_GetPlayerHeader
__vt__Q33ebi4Save24FSMState_GetPlayerHeader:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_cardRequest__Q33ebi4Save24FSMState_GetPlayerHeaderFPQ33ebi4Save4TMgr
	.4byte do_transitCardReady__Q33ebi4Save24FSMState_GetPlayerHeaderFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoCard__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardIOError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardWrongDevice__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardWrongSector__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardEncoding__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoFileSpace__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoFileEntry__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardFileOpenError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardSerialNoError__Q33ebi4Save24FSMState_GetPlayerHeaderFPQ33ebi4Save4TMgr
	.4byte do_transitCardPlayerDataBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
.global __vt__Q33ebi4Save19FSMState_MountCheck
__vt__Q33ebi4Save19FSMState_MountCheck:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_cardRequest__Q33ebi4Save19FSMState_MountCheckFPQ33ebi4Save4TMgr
	.4byte do_transitCardReady__Q33ebi4Save19FSMState_MountCheckFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoCard__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardIOError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardWrongDevice__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardWrongSector__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardEncoding__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoFileSpace__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoFileEntry__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardFileOpenError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardSerialNoError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardPlayerDataBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
.global __vt__Q33ebi4Save20FSMState_CardRequest
__vt__Q33ebi4Save20FSMState_CardRequest:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte 0
	.4byte 0
	.4byte do_transitCardNoCard__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardIOError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardWrongDevice__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardWrongSector__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardEncoding__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoFileSpace__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardNoFileEntry__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardFileOpenError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardSerialNoError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
	.4byte do_transitCardPlayerDataBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
.global __vt__Q33ebi4Save22FSMState_DoYouContinue
__vt__Q33ebi4Save22FSMState_DoYouContinue:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi4Save22FSMState_DoYouContinueFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi4Save22FSMState_DoYouContinueFPQ33ebi4Save4TMgr
.global __vt__Q33ebi4Save18FSMState_DoYouSave
__vt__Q33ebi4Save18FSMState_DoYouSave:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi4Save18FSMState_DoYouSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi4Save18FSMState_DoYouSaveFPQ33ebi4Save4TMgr
.global __vt__Q33ebi4Save8FSMState
__vt__Q33ebi4Save8FSMState:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
.global "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"
"__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgrPQ24Game8StateArg"
	.4byte "exec__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
.global __vt__Q33ebi4Save15FSMStateMachine
__vt__Q33ebi4Save15FSMStateMachine:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi4Save15FSMStateMachineFPQ33ebi4Save4TMgr
	.4byte "start__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
	.4byte "transit__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global msInstance__Q33ebi4Save4TMgr
msInstance__Q33ebi4Save4TMgr:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051FBA0:
	.asciz "Standby"
.balign 4
lbl_8051FBA8:
	.asciz "NowSave"
.balign 4
lbl_8051FBB0:
	.float 1.0
lbl_8051FBB4:
	.float 0.5
.balign 8
lbl_8051FBB8:
	.4byte 0x43300000
	.4byte 0x00000000
lbl_8051FBC0:
	.float 5.0
lbl_8051FBC4:
	.float 0.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q33ebi4Save15FSMStateMachineFPQ33ebi4Save4TMgr
init__Q33ebi4Save15FSMStateMachineFPQ33ebi4Save4TMgr:
/* 803DB190 003D80D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DB194 003D80D4  7C 08 02 A6 */	mflr r0
/* 803DB198 003D80D8  3C 80 80 49 */	lis r4, lbl_80496DD0@ha
/* 803DB19C 003D80DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DB1A0 003D80E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DB1A4 003D80E4  7C 7F 1B 78 */	mr r31, r3
/* 803DB1A8 003D80E8  93 C1 00 08 */	stw r30, 8(r1)
/* 803DB1AC 003D80EC  3B C4 6D D0 */	addi r30, r4, lbl_80496DD0@l
/* 803DB1B0 003D80F0  38 80 00 09 */	li r4, 9
/* 803DB1B4 003D80F4  48 00 1D 71 */	bl "create__Q24Game30StateMachine<Q33ebi4Save4TMgr>Fi"
/* 803DB1B8 003D80F8  38 60 00 10 */	li r3, 0x10
/* 803DB1BC 003D80FC  4B C4 8C E9 */	bl __nw__FUl
/* 803DB1C0 003D8100  7C 64 1B 79 */	or. r4, r3, r3
/* 803DB1C4 003D8104  41 82 00 30 */	beq .L_803DB1F4
/* 803DB1C8 003D8108  3C A0 80 4F */	lis r5, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@ha
/* 803DB1CC 003D810C  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save8FSMState@ha
/* 803DB1D0 003D8110  38 05 92 40 */	addi r0, r5, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@l
/* 803DB1D4 003D8114  38 A0 00 00 */	li r5, 0
/* 803DB1D8 003D8118  90 04 00 00 */	stw r0, 0(r4)
/* 803DB1DC 003D811C  38 63 92 18 */	addi r3, r3, __vt__Q33ebi4Save8FSMState@l
/* 803DB1E0 003D8120  38 02 18 40 */	addi r0, r2, lbl_8051FBA0@sda21
/* 803DB1E4 003D8124  90 A4 00 04 */	stw r5, 4(r4)
/* 803DB1E8 003D8128  90 A4 00 08 */	stw r5, 8(r4)
/* 803DB1EC 003D812C  90 64 00 00 */	stw r3, 0(r4)
/* 803DB1F0 003D8130  90 04 00 0C */	stw r0, 0xc(r4)
.L_803DB1F4:
/* 803DB1F4 003D8134  7F E3 FB 78 */	mr r3, r31
/* 803DB1F8 003D8138  48 00 1E 2D */	bl "registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>"
/* 803DB1FC 003D813C  38 60 00 10 */	li r3, 0x10
/* 803DB200 003D8140  4B C4 8C A5 */	bl __nw__FUl
/* 803DB204 003D8144  7C 64 1B 79 */	or. r4, r3, r3
/* 803DB208 003D8148  41 82 00 40 */	beq .L_803DB248
/* 803DB20C 003D814C  3C 60 80 4F */	lis r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@ha
/* 803DB210 003D8150  3C A0 80 4F */	lis r5, __vt__Q33ebi4Save8FSMState@ha
/* 803DB214 003D8154  38 03 92 40 */	addi r0, r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@l
/* 803DB218 003D8158  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save18FSMState_DoYouSave@ha
/* 803DB21C 003D815C  90 04 00 00 */	stw r0, 0(r4)
/* 803DB220 003D8160  38 00 00 01 */	li r0, 1
/* 803DB224 003D8164  38 E0 00 00 */	li r7, 0
/* 803DB228 003D8168  38 C5 92 18 */	addi r6, r5, __vt__Q33ebi4Save8FSMState@l
/* 803DB22C 003D816C  90 04 00 04 */	stw r0, 4(r4)
/* 803DB230 003D8170  38 BE 00 0C */	addi r5, r30, 0xc
/* 803DB234 003D8174  38 03 91 F0 */	addi r0, r3, __vt__Q33ebi4Save18FSMState_DoYouSave@l
/* 803DB238 003D8178  90 E4 00 08 */	stw r7, 8(r4)
/* 803DB23C 003D817C  90 C4 00 00 */	stw r6, 0(r4)
/* 803DB240 003D8180  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803DB244 003D8184  90 04 00 00 */	stw r0, 0(r4)
.L_803DB248:
/* 803DB248 003D8188  7F E3 FB 78 */	mr r3, r31
/* 803DB24C 003D818C  48 00 1D D9 */	bl "registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>"
/* 803DB250 003D8190  38 60 00 10 */	li r3, 0x10
/* 803DB254 003D8194  4B C4 8C 51 */	bl __nw__FUl
/* 803DB258 003D8198  7C 64 1B 79 */	or. r4, r3, r3
/* 803DB25C 003D819C  41 82 00 40 */	beq .L_803DB29C
/* 803DB260 003D81A0  3C 60 80 4F */	lis r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@ha
/* 803DB264 003D81A4  3C A0 80 4F */	lis r5, __vt__Q33ebi4Save8FSMState@ha
/* 803DB268 003D81A8  38 03 92 40 */	addi r0, r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@l
/* 803DB26C 003D81AC  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save22FSMState_DoYouContinue@ha
/* 803DB270 003D81B0  90 04 00 00 */	stw r0, 0(r4)
/* 803DB274 003D81B4  38 00 00 02 */	li r0, 2
/* 803DB278 003D81B8  38 E0 00 00 */	li r7, 0
/* 803DB27C 003D81BC  38 C5 92 18 */	addi r6, r5, __vt__Q33ebi4Save8FSMState@l
/* 803DB280 003D81C0  90 04 00 04 */	stw r0, 4(r4)
/* 803DB284 003D81C4  38 BE 00 18 */	addi r5, r30, 0x18
/* 803DB288 003D81C8  38 03 91 C8 */	addi r0, r3, __vt__Q33ebi4Save22FSMState_DoYouContinue@l
/* 803DB28C 003D81CC  90 E4 00 08 */	stw r7, 8(r4)
/* 803DB290 003D81D0  90 C4 00 00 */	stw r6, 0(r4)
/* 803DB294 003D81D4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803DB298 003D81D8  90 04 00 00 */	stw r0, 0(r4)
.L_803DB29C:
/* 803DB29C 003D81DC  7F E3 FB 78 */	mr r3, r31
/* 803DB2A0 003D81E0  48 00 1D 85 */	bl "registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>"
/* 803DB2A4 003D81E4  38 60 00 18 */	li r3, 0x18
/* 803DB2A8 003D81E8  4B C4 8B FD */	bl __nw__FUl
/* 803DB2AC 003D81EC  7C 64 1B 79 */	or. r4, r3, r3
/* 803DB2B0 003D81F0  41 82 00 4C */	beq .L_803DB2FC
/* 803DB2B4 003D81F4  3C 60 80 4F */	lis r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@ha
/* 803DB2B8 003D81F8  3C C0 80 4F */	lis r6, __vt__Q33ebi4Save8FSMState@ha
/* 803DB2BC 003D81FC  38 03 92 40 */	addi r0, r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@l
/* 803DB2C0 003D8200  3C A0 80 4F */	lis r5, __vt__Q33ebi4Save20FSMState_CardRequest@ha
/* 803DB2C4 003D8204  90 04 00 00 */	stw r0, 0(r4)
/* 803DB2C8 003D8208  38 E0 00 03 */	li r7, 3
/* 803DB2CC 003D820C  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save19FSMState_MountCheck@ha
/* 803DB2D0 003D8210  38 00 00 00 */	li r0, 0
/* 803DB2D4 003D8214  90 E4 00 04 */	stw r7, 4(r4)
/* 803DB2D8 003D8218  38 E6 92 18 */	addi r7, r6, __vt__Q33ebi4Save8FSMState@l
/* 803DB2DC 003D821C  38 DE 00 28 */	addi r6, r30, 0x28
/* 803DB2E0 003D8220  38 A5 91 6C */	addi r5, r5, __vt__Q33ebi4Save20FSMState_CardRequest@l
/* 803DB2E4 003D8224  90 04 00 08 */	stw r0, 8(r4)
/* 803DB2E8 003D8228  38 03 91 10 */	addi r0, r3, __vt__Q33ebi4Save19FSMState_MountCheck@l
/* 803DB2EC 003D822C  90 E4 00 00 */	stw r7, 0(r4)
/* 803DB2F0 003D8230  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DB2F4 003D8234  90 A4 00 00 */	stw r5, 0(r4)
/* 803DB2F8 003D8238  90 04 00 00 */	stw r0, 0(r4)
.L_803DB2FC:
/* 803DB2FC 003D823C  7F E3 FB 78 */	mr r3, r31
/* 803DB300 003D8240  48 00 1D 25 */	bl "registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>"
/* 803DB304 003D8244  38 60 00 18 */	li r3, 0x18
/* 803DB308 003D8248  4B C4 8B 9D */	bl __nw__FUl
/* 803DB30C 003D824C  7C 64 1B 79 */	or. r4, r3, r3
/* 803DB310 003D8250  41 82 00 4C */	beq .L_803DB35C
/* 803DB314 003D8254  3C 60 80 4F */	lis r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@ha
/* 803DB318 003D8258  3C C0 80 4F */	lis r6, __vt__Q33ebi4Save8FSMState@ha
/* 803DB31C 003D825C  38 03 92 40 */	addi r0, r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@l
/* 803DB320 003D8260  3C A0 80 4F */	lis r5, __vt__Q33ebi4Save20FSMState_CardRequest@ha
/* 803DB324 003D8264  90 04 00 00 */	stw r0, 0(r4)
/* 803DB328 003D8268  38 E0 00 04 */	li r7, 4
/* 803DB32C 003D826C  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save24FSMState_GetPlayerHeader@ha
/* 803DB330 003D8270  38 00 00 00 */	li r0, 0
/* 803DB334 003D8274  90 E4 00 04 */	stw r7, 4(r4)
/* 803DB338 003D8278  38 E6 92 18 */	addi r7, r6, __vt__Q33ebi4Save8FSMState@l
/* 803DB33C 003D827C  38 DE 00 34 */	addi r6, r30, 0x34
/* 803DB340 003D8280  38 A5 91 6C */	addi r5, r5, __vt__Q33ebi4Save20FSMState_CardRequest@l
/* 803DB344 003D8284  90 04 00 08 */	stw r0, 8(r4)
/* 803DB348 003D8288  38 03 90 B4 */	addi r0, r3, __vt__Q33ebi4Save24FSMState_GetPlayerHeader@l
/* 803DB34C 003D828C  90 E4 00 00 */	stw r7, 0(r4)
/* 803DB350 003D8290  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DB354 003D8294  90 A4 00 00 */	stw r5, 0(r4)
/* 803DB358 003D8298  90 04 00 00 */	stw r0, 0(r4)
.L_803DB35C:
/* 803DB35C 003D829C  7F E3 FB 78 */	mr r3, r31
/* 803DB360 003D82A0  48 00 1C C5 */	bl "registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>"
/* 803DB364 003D82A4  38 60 00 18 */	li r3, 0x18
/* 803DB368 003D82A8  4B C4 8B 3D */	bl __nw__FUl
/* 803DB36C 003D82AC  7C 64 1B 79 */	or. r4, r3, r3
/* 803DB370 003D82B0  41 82 00 4C */	beq .L_803DB3BC
/* 803DB374 003D82B4  3C 60 80 4F */	lis r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@ha
/* 803DB378 003D82B8  3C C0 80 4F */	lis r6, __vt__Q33ebi4Save8FSMState@ha
/* 803DB37C 003D82BC  38 03 92 40 */	addi r0, r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@l
/* 803DB380 003D82C0  3C A0 80 4F */	lis r5, __vt__Q33ebi4Save20FSMState_CardRequest@ha
/* 803DB384 003D82C4  90 04 00 00 */	stw r0, 0(r4)
/* 803DB388 003D82C8  38 E0 00 05 */	li r7, 5
/* 803DB38C 003D82CC  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save24FSMState_CheckBeforeSave@ha
/* 803DB390 003D82D0  38 00 00 00 */	li r0, 0
/* 803DB394 003D82D4  90 E4 00 04 */	stw r7, 4(r4)
/* 803DB398 003D82D8  38 E6 92 18 */	addi r7, r6, __vt__Q33ebi4Save8FSMState@l
/* 803DB39C 003D82DC  38 DE 00 44 */	addi r6, r30, 0x44
/* 803DB3A0 003D82E0  38 A5 91 6C */	addi r5, r5, __vt__Q33ebi4Save20FSMState_CardRequest@l
/* 803DB3A4 003D82E4  90 04 00 08 */	stw r0, 8(r4)
/* 803DB3A8 003D82E8  38 03 90 58 */	addi r0, r3, __vt__Q33ebi4Save24FSMState_CheckBeforeSave@l
/* 803DB3AC 003D82EC  90 E4 00 00 */	stw r7, 0(r4)
/* 803DB3B0 003D82F0  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DB3B4 003D82F4  90 A4 00 00 */	stw r5, 0(r4)
/* 803DB3B8 003D82F8  90 04 00 00 */	stw r0, 0(r4)
.L_803DB3BC:
/* 803DB3BC 003D82FC  7F E3 FB 78 */	mr r3, r31
/* 803DB3C0 003D8300  48 00 1C 65 */	bl "registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>"
/* 803DB3C4 003D8304  38 60 00 1C */	li r3, 0x1c
/* 803DB3C8 003D8308  4B C4 8A DD */	bl __nw__FUl
/* 803DB3CC 003D830C  7C 64 1B 79 */	or. r4, r3, r3
/* 803DB3D0 003D8310  41 82 00 44 */	beq .L_803DB414
/* 803DB3D4 003D8314  3C 60 80 4F */	lis r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@ha
/* 803DB3D8 003D8318  3C A0 80 4F */	lis r5, __vt__Q33ebi4Save8FSMState@ha
/* 803DB3DC 003D831C  38 03 92 40 */	addi r0, r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@l
/* 803DB3E0 003D8320  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save16FSMState_NowSave@ha
/* 803DB3E4 003D8324  90 04 00 00 */	stw r0, 0(r4)
/* 803DB3E8 003D8328  38 00 00 06 */	li r0, 6
/* 803DB3EC 003D832C  38 E0 00 00 */	li r7, 0
/* 803DB3F0 003D8330  38 C5 92 18 */	addi r6, r5, __vt__Q33ebi4Save8FSMState@l
/* 803DB3F4 003D8334  90 04 00 04 */	stw r0, 4(r4)
/* 803DB3F8 003D8338  38 A2 18 48 */	addi r5, r2, lbl_8051FBA8@sda21
/* 803DB3FC 003D833C  38 03 90 30 */	addi r0, r3, __vt__Q33ebi4Save16FSMState_NowSave@l
/* 803DB400 003D8340  90 E4 00 08 */	stw r7, 8(r4)
/* 803DB404 003D8344  90 C4 00 00 */	stw r6, 0(r4)
/* 803DB408 003D8348  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803DB40C 003D834C  90 04 00 00 */	stw r0, 0(r4)
/* 803DB410 003D8350  90 E4 00 10 */	stw r7, 0x10(r4)
.L_803DB414:
/* 803DB414 003D8354  7F E3 FB 78 */	mr r3, r31
/* 803DB418 003D8358  48 00 1C 0D */	bl "registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>"
/* 803DB41C 003D835C  38 60 00 10 */	li r3, 0x10
/* 803DB420 003D8360  4B C4 8A 85 */	bl __nw__FUl
/* 803DB424 003D8364  7C 64 1B 79 */	or. r4, r3, r3
/* 803DB428 003D8368  41 82 00 40 */	beq .L_803DB468
/* 803DB42C 003D836C  3C 60 80 4F */	lis r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@ha
/* 803DB430 003D8370  3C A0 80 4F */	lis r5, __vt__Q33ebi4Save8FSMState@ha
/* 803DB434 003D8374  38 03 92 40 */	addi r0, r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@l
/* 803DB438 003D8378  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save18FSMState_AfterSave@ha
/* 803DB43C 003D837C  90 04 00 00 */	stw r0, 0(r4)
/* 803DB440 003D8380  38 00 00 07 */	li r0, 7
/* 803DB444 003D8384  38 E0 00 00 */	li r7, 0
/* 803DB448 003D8388  38 C5 92 18 */	addi r6, r5, __vt__Q33ebi4Save8FSMState@l
/* 803DB44C 003D838C  90 04 00 04 */	stw r0, 4(r4)
/* 803DB450 003D8390  38 BE 00 54 */	addi r5, r30, 0x54
/* 803DB454 003D8394  38 03 90 08 */	addi r0, r3, __vt__Q33ebi4Save18FSMState_AfterSave@l
/* 803DB458 003D8398  90 E4 00 08 */	stw r7, 8(r4)
/* 803DB45C 003D839C  90 C4 00 00 */	stw r6, 0(r4)
/* 803DB460 003D83A0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803DB464 003D83A4  90 04 00 00 */	stw r0, 0(r4)
.L_803DB468:
/* 803DB468 003D83A8  7F E3 FB 78 */	mr r3, r31
/* 803DB46C 003D83AC  48 00 1B B9 */	bl "registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>"
/* 803DB470 003D83B0  38 60 00 10 */	li r3, 0x10
/* 803DB474 003D83B4  4B C4 8A 31 */	bl __nw__FUl
/* 803DB478 003D83B8  7C 64 1B 79 */	or. r4, r3, r3
/* 803DB47C 003D83BC  41 82 00 40 */	beq .L_803DB4BC
/* 803DB480 003D83C0  3C 60 80 4F */	lis r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@ha
/* 803DB484 003D83C4  3C A0 80 4F */	lis r5, __vt__Q33ebi4Save8FSMState@ha
/* 803DB488 003D83C8  38 03 92 40 */	addi r0, r3, "__vt__Q24Game26FSMState<Q33ebi4Save4TMgr>"@l
/* 803DB48C 003D83CC  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save18FSMState_CardError@ha
/* 803DB490 003D83D0  90 04 00 00 */	stw r0, 0(r4)
/* 803DB494 003D83D4  38 00 00 08 */	li r0, 8
/* 803DB498 003D83D8  38 E0 00 00 */	li r7, 0
/* 803DB49C 003D83DC  38 C5 92 18 */	addi r6, r5, __vt__Q33ebi4Save8FSMState@l
/* 803DB4A0 003D83E0  90 04 00 04 */	stw r0, 4(r4)
/* 803DB4A4 003D83E4  38 BE 00 60 */	addi r5, r30, 0x60
/* 803DB4A8 003D83E8  38 03 8F E0 */	addi r0, r3, __vt__Q33ebi4Save18FSMState_CardError@l
/* 803DB4AC 003D83EC  90 E4 00 08 */	stw r7, 8(r4)
/* 803DB4B0 003D83F0  90 C4 00 00 */	stw r6, 0(r4)
/* 803DB4B4 003D83F4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803DB4B8 003D83F8  90 04 00 00 */	stw r0, 0(r4)
.L_803DB4BC:
/* 803DB4BC 003D83FC  7F E3 FB 78 */	mr r3, r31
/* 803DB4C0 003D8400  48 00 1B 65 */	bl "registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>"
/* 803DB4C4 003D8404  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DB4C8 003D8408  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DB4CC 003D840C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DB4D0 003D8410  7C 08 03 A6 */	mtlr r0
/* 803DB4D4 003D8414  38 21 00 10 */	addi r1, r1, 0x10
/* 803DB4D8 003D8418  4E 80 00 20 */	blr 

.global init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg:
/* 803DB4DC 003D841C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DB4E0 003D8420  7C 08 02 A6 */	mflr r0
/* 803DB4E4 003D8424  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DB4E8 003D8428  81 83 00 00 */	lwz r12, 0(r3)
/* 803DB4EC 003D842C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803DB4F0 003D8430  7D 89 03 A6 */	mtctr r12
/* 803DB4F4 003D8434  4E 80 04 21 */	bctrl 
/* 803DB4F8 003D8438  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DB4FC 003D843C  7C 08 03 A6 */	mtlr r0
/* 803DB500 003D8440  38 21 00 10 */	addi r1, r1, 0x10
/* 803DB504 003D8444  4E 80 00 20 */	blr 

.global do_init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
do_init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg:
/* 803DB508 003D8448  4E 80 00 20 */	blr 

.global exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr:
/* 803DB50C 003D844C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DB510 003D8450  7C 08 02 A6 */	mflr r0
/* 803DB514 003D8454  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DB518 003D8458  81 83 00 00 */	lwz r12, 0(r3)
/* 803DB51C 003D845C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803DB520 003D8460  7D 89 03 A6 */	mtctr r12
/* 803DB524 003D8464  4E 80 04 21 */	bctrl 
/* 803DB528 003D8468  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DB52C 003D846C  7C 08 03 A6 */	mtlr r0
/* 803DB530 003D8470  38 21 00 10 */	addi r1, r1, 0x10
/* 803DB534 003D8474  4E 80 00 20 */	blr 

.global do_exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
do_exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr:
/* 803DB538 003D8478  4E 80 00 20 */	blr 

.global do_init__Q33ebi4Save18FSMState_DoYouSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg
do_init__Q33ebi4Save18FSMState_DoYouSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg:
/* 803DB53C 003D847C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DB540 003D8480  7C 08 02 A6 */	mflr r0
/* 803DB544 003D8484  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DB548 003D8488  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DB54C 003D848C  7C 9F 23 78 */	mr r31, r4
/* 803DB550 003D8490  38 80 00 00 */	li r4, 0
/* 803DB554 003D8494  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DB558 003D8498  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB55C 003D849C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803DB560 003D84A0  7D 89 03 A6 */	mtctr r12
/* 803DB564 003D84A4  4E 80 04 21 */	bctrl 
/* 803DB568 003D84A8  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB56C 003D84AC  38 80 00 00 */	li r4, 0
/* 803DB570 003D84B0  48 00 24 F5 */	bl openMsg__Q33ebi6Screen9TSaveMenuFl
/* 803DB574 003D84B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DB578 003D84B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DB57C 003D84BC  7C 08 03 A6 */	mtlr r0
/* 803DB580 003D84C0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DB584 003D84C4  4E 80 00 20 */	blr 

.global do_exec__Q33ebi4Save18FSMState_DoYouSaveFPQ33ebi4Save4TMgr
do_exec__Q33ebi4Save18FSMState_DoYouSaveFPQ33ebi4Save4TMgr:
/* 803DB588 003D84C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DB58C 003D84CC  7C 08 02 A6 */	mflr r0
/* 803DB590 003D84D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DB594 003D84D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DB598 003D84D8  7C 9F 23 78 */	mr r31, r4
/* 803DB59C 003D84DC  93 C1 00 08 */	stw r30, 8(r1)
/* 803DB5A0 003D84E0  7C 7E 1B 78 */	mr r30, r3
/* 803DB5A4 003D84E4  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB5A8 003D84E8  48 00 25 E1 */	bl isFinishMsg__Q33ebi6Screen9TSaveMenuFv
/* 803DB5AC 003D84EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DB5B0 003D84F0  41 82 01 04 */	beq .L_803DB6B4
/* 803DB5B4 003D84F4  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 803DB5B8 003D84F8  2C 00 00 01 */	cmpwi r0, 1
/* 803DB5BC 003D84FC  41 82 00 44 */	beq .L_803DB600
/* 803DB5C0 003D8500  40 80 00 10 */	bge .L_803DB5D0
/* 803DB5C4 003D8504  2C 00 00 00 */	cmpwi r0, 0
/* 803DB5C8 003D8508  40 80 00 14 */	bge .L_803DB5DC
/* 803DB5CC 003D850C  48 00 00 E8 */	b .L_803DB6B4
.L_803DB5D0:
/* 803DB5D0 003D8510  2C 00 00 03 */	cmpwi r0, 3
/* 803DB5D4 003D8514  40 80 00 E0 */	bge .L_803DB6B4
/* 803DB5D8 003D8518  48 00 00 9C */	b .L_803DB674
.L_803DB5DC:
/* 803DB5DC 003D851C  7F C3 F3 78 */	mr r3, r30
/* 803DB5E0 003D8520  7F E4 FB 78 */	mr r4, r31
/* 803DB5E4 003D8524  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DB5E8 003D8528  38 A0 00 03 */	li r5, 3
/* 803DB5EC 003D852C  38 C0 00 00 */	li r6, 0
/* 803DB5F0 003D8530  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DB5F4 003D8534  7D 89 03 A6 */	mtctr r12
/* 803DB5F8 003D8538  4E 80 04 21 */	bctrl 
/* 803DB5FC 003D853C  48 00 00 B8 */	b .L_803DB6B4
.L_803DB600:
/* 803DB600 003D8540  88 1F 04 78 */	lbz r0, 0x478(r31)
/* 803DB604 003D8544  28 00 00 00 */	cmplwi r0, 0
/* 803DB608 003D8548  41 82 00 48 */	beq .L_803DB650
/* 803DB60C 003D854C  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB610 003D8550  38 80 00 00 */	li r4, 0
/* 803DB614 003D8554  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DB618 003D8558  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803DB61C 003D855C  7D 89 03 A6 */	mtctr r12
/* 803DB620 003D8560  4E 80 04 21 */	bctrl 
/* 803DB624 003D8564  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB628 003D8568  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DB62C 003D856C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803DB630 003D8570  7D 89 03 A6 */	mtctr r12
/* 803DB634 003D8574  4E 80 04 21 */	bctrl 
/* 803DB638 003D8578  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DB63C 003D857C  41 82 00 78 */	beq .L_803DB6B4
/* 803DB640 003D8580  7F E3 FB 78 */	mr r3, r31
/* 803DB644 003D8584  38 80 00 02 */	li r4, 2
/* 803DB648 003D8588  48 00 16 E5 */	bl goEnd___Q33ebi4Save4TMgrFQ43ebi4Save4TMgr7enumEnd
/* 803DB64C 003D858C  48 00 00 68 */	b .L_803DB6B4
.L_803DB650:
/* 803DB650 003D8590  7F C3 F3 78 */	mr r3, r30
/* 803DB654 003D8594  7F E4 FB 78 */	mr r4, r31
/* 803DB658 003D8598  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DB65C 003D859C  38 A0 00 02 */	li r5, 2
/* 803DB660 003D85A0  38 C0 00 00 */	li r6, 0
/* 803DB664 003D85A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DB668 003D85A8  7D 89 03 A6 */	mtctr r12
/* 803DB66C 003D85AC  4E 80 04 21 */	bctrl 
/* 803DB670 003D85B0  48 00 00 44 */	b .L_803DB6B4
.L_803DB674:
/* 803DB674 003D85B4  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB678 003D85B8  38 80 00 00 */	li r4, 0
/* 803DB67C 003D85BC  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DB680 003D85C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803DB684 003D85C4  7D 89 03 A6 */	mtctr r12
/* 803DB688 003D85C8  4E 80 04 21 */	bctrl 
/* 803DB68C 003D85CC  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB690 003D85D0  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DB694 003D85D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803DB698 003D85D8  7D 89 03 A6 */	mtctr r12
/* 803DB69C 003D85DC  4E 80 04 21 */	bctrl 
/* 803DB6A0 003D85E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DB6A4 003D85E4  41 82 00 10 */	beq .L_803DB6B4
/* 803DB6A8 003D85E8  7F E3 FB 78 */	mr r3, r31
/* 803DB6AC 003D85EC  38 80 00 01 */	li r4, 1
/* 803DB6B0 003D85F0  48 00 16 7D */	bl goEnd___Q33ebi4Save4TMgrFQ43ebi4Save4TMgr7enumEnd
.L_803DB6B4:
/* 803DB6B4 003D85F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DB6B8 003D85F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DB6BC 003D85FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DB6C0 003D8600  7C 08 03 A6 */	mtlr r0
/* 803DB6C4 003D8604  38 21 00 10 */	addi r1, r1, 0x10
/* 803DB6C8 003D8608  4E 80 00 20 */	blr 

.global "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
"transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg":
/* 803DB6CC 003D860C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DB6D0 003D8610  7C 08 02 A6 */	mflr r0
/* 803DB6D4 003D8614  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DB6D8 003D8618  80 63 00 08 */	lwz r3, 8(r3)
/* 803DB6DC 003D861C  81 83 00 00 */	lwz r12, 0(r3)
/* 803DB6E0 003D8620  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803DB6E4 003D8624  7D 89 03 A6 */	mtctr r12
/* 803DB6E8 003D8628  4E 80 04 21 */	bctrl 
/* 803DB6EC 003D862C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DB6F0 003D8630  7C 08 03 A6 */	mtlr r0
/* 803DB6F4 003D8634  38 21 00 10 */	addi r1, r1, 0x10
/* 803DB6F8 003D8638  4E 80 00 20 */	blr 

.global do_init__Q33ebi4Save22FSMState_DoYouContinueFPQ33ebi4Save4TMgrPQ24Game8StateArg
do_init__Q33ebi4Save22FSMState_DoYouContinueFPQ33ebi4Save4TMgrPQ24Game8StateArg:
/* 803DB6FC 003D863C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DB700 003D8640  7C 08 02 A6 */	mflr r0
/* 803DB704 003D8644  38 64 00 18 */	addi r3, r4, 0x18
/* 803DB708 003D8648  38 80 00 03 */	li r4, 3
/* 803DB70C 003D864C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DB710 003D8650  48 00 23 55 */	bl openMsg__Q33ebi6Screen9TSaveMenuFl
/* 803DB714 003D8654  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DB718 003D8658  7C 08 03 A6 */	mtlr r0
/* 803DB71C 003D865C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DB720 003D8660  4E 80 00 20 */	blr 

.global do_exec__Q33ebi4Save22FSMState_DoYouContinueFPQ33ebi4Save4TMgr
do_exec__Q33ebi4Save22FSMState_DoYouContinueFPQ33ebi4Save4TMgr:
/* 803DB724 003D8664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DB728 003D8668  7C 08 02 A6 */	mflr r0
/* 803DB72C 003D866C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DB730 003D8670  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DB734 003D8674  7C 9F 23 78 */	mr r31, r4
/* 803DB738 003D8678  93 C1 00 08 */	stw r30, 8(r1)
/* 803DB73C 003D867C  7C 7E 1B 78 */	mr r30, r3
/* 803DB740 003D8680  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB744 003D8684  48 00 24 45 */	bl isFinishMsg__Q33ebi6Screen9TSaveMenuFv
/* 803DB748 003D8688  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DB74C 003D868C  41 82 00 D4 */	beq .L_803DB820
/* 803DB750 003D8690  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 803DB754 003D8694  2C 00 00 01 */	cmpwi r0, 1
/* 803DB758 003D8698  41 82 00 64 */	beq .L_803DB7BC
/* 803DB75C 003D869C  40 80 00 10 */	bge .L_803DB76C
/* 803DB760 003D86A0  2C 00 00 00 */	cmpwi r0, 0
/* 803DB764 003D86A4  40 80 00 14 */	bge .L_803DB778
/* 803DB768 003D86A8  48 00 00 B8 */	b .L_803DB820
.L_803DB76C:
/* 803DB76C 003D86AC  2C 00 00 03 */	cmpwi r0, 3
/* 803DB770 003D86B0  40 80 00 B0 */	bge .L_803DB820
/* 803DB774 003D86B4  48 00 00 8C */	b .L_803DB800
.L_803DB778:
/* 803DB778 003D86B8  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB77C 003D86BC  38 80 00 00 */	li r4, 0
/* 803DB780 003D86C0  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DB784 003D86C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803DB788 003D86C8  7D 89 03 A6 */	mtctr r12
/* 803DB78C 003D86CC  4E 80 04 21 */	bctrl 
/* 803DB790 003D86D0  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB794 003D86D4  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DB798 003D86D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803DB79C 003D86DC  7D 89 03 A6 */	mtctr r12
/* 803DB7A0 003D86E0  4E 80 04 21 */	bctrl 
/* 803DB7A4 003D86E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DB7A8 003D86E8  41 82 00 78 */	beq .L_803DB820
/* 803DB7AC 003D86EC  7F E3 FB 78 */	mr r3, r31
/* 803DB7B0 003D86F0  38 80 00 02 */	li r4, 2
/* 803DB7B4 003D86F4  48 00 15 79 */	bl goEnd___Q33ebi4Save4TMgrFQ43ebi4Save4TMgr7enumEnd
/* 803DB7B8 003D86F8  48 00 00 68 */	b .L_803DB820
.L_803DB7BC:
/* 803DB7BC 003D86FC  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB7C0 003D8700  38 80 00 00 */	li r4, 0
/* 803DB7C4 003D8704  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DB7C8 003D8708  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803DB7CC 003D870C  7D 89 03 A6 */	mtctr r12
/* 803DB7D0 003D8710  4E 80 04 21 */	bctrl 
/* 803DB7D4 003D8714  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DB7D8 003D8718  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DB7DC 003D871C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803DB7E0 003D8720  7D 89 03 A6 */	mtctr r12
/* 803DB7E4 003D8724  4E 80 04 21 */	bctrl 
/* 803DB7E8 003D8728  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DB7EC 003D872C  41 82 00 34 */	beq .L_803DB820
/* 803DB7F0 003D8730  7F E3 FB 78 */	mr r3, r31
/* 803DB7F4 003D8734  38 80 00 03 */	li r4, 3
/* 803DB7F8 003D8738  48 00 15 35 */	bl goEnd___Q33ebi4Save4TMgrFQ43ebi4Save4TMgr7enumEnd
/* 803DB7FC 003D873C  48 00 00 24 */	b .L_803DB820
.L_803DB800:
/* 803DB800 003D8740  7F C3 F3 78 */	mr r3, r30
/* 803DB804 003D8744  7F E4 FB 78 */	mr r4, r31
/* 803DB808 003D8748  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DB80C 003D874C  38 A0 00 01 */	li r5, 1
/* 803DB810 003D8750  38 C0 00 00 */	li r6, 0
/* 803DB814 003D8754  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DB818 003D8758  7D 89 03 A6 */	mtctr r12
/* 803DB81C 003D875C  4E 80 04 21 */	bctrl 
.L_803DB820:
/* 803DB820 003D8760  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DB824 003D8764  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DB828 003D8768  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DB82C 003D876C  7C 08 03 A6 */	mtlr r0
/* 803DB830 003D8770  38 21 00 10 */	addi r1, r1, 0x10
/* 803DB834 003D8774  4E 80 00 20 */	blr 

.global do_init__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgrPQ24Game8StateArg
do_init__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgrPQ24Game8StateArg:
/* 803DB838 003D8778  38 00 00 00 */	li r0, 0
/* 803DB83C 003D877C  90 03 00 14 */	stw r0, 0x14(r3)
/* 803DB840 003D8780  4E 80 00 20 */	blr 

.global do_exec__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_exec__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DB844 003D8784  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DB848 003D8788  7C 08 02 A6 */	mflr r0
/* 803DB84C 003D878C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803DB850 003D8790  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803DB854 003D8794  7C 7F 1B 78 */	mr r31, r3
/* 803DB858 003D8798  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803DB85C 003D879C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803DB860 003D87A0  7C 9D 23 78 */	mr r29, r4
/* 803DB864 003D87A4  80 03 00 14 */	lwz r0, 0x14(r3)
/* 803DB868 003D87A8  2C 00 00 01 */	cmpwi r0, 1
/* 803DB86C 003D87AC  41 82 00 98 */	beq .L_803DB904
/* 803DB870 003D87B0  40 80 00 10 */	bge .L_803DB880
/* 803DB874 003D87B4  2C 00 00 00 */	cmpwi r0, 0
/* 803DB878 003D87B8  40 80 00 14 */	bge .L_803DB88C
/* 803DB87C 003D87BC  48 00 02 10 */	b .L_803DBA8C
.L_803DB880:
/* 803DB880 003D87C0  2C 00 00 03 */	cmpwi r0, 3
/* 803DB884 003D87C4  40 80 02 08 */	bge .L_803DBA8C
/* 803DB888 003D87C8  48 00 00 D4 */	b .L_803DB95C
.L_803DB88C:
/* 803DB88C 003D87CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DB890 003D87D0  3B C0 00 00 */	li r30, 0
/* 803DB894 003D87D4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DB898 003D87D8  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DB89C 003D87DC  2C 00 00 00 */	cmpwi r0, 0
/* 803DB8A0 003D87E0  40 82 00 14 */	bne .L_803DB8B4
/* 803DB8A4 003D87E4  48 06 57 19 */	bl checkStatus__13MemoryCardMgrFv
/* 803DB8A8 003D87E8  28 03 00 0B */	cmplwi r3, 0xb
/* 803DB8AC 003D87EC  41 82 00 08 */	beq .L_803DB8B4
/* 803DB8B0 003D87F0  3B C0 00 01 */	li r30, 1
.L_803DB8B4:
/* 803DB8B4 003D87F4  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803DB8B8 003D87F8  41 82 01 D4 */	beq .L_803DBA8C
/* 803DB8BC 003D87FC  7F E3 FB 78 */	mr r3, r31
/* 803DB8C0 003D8800  7F A4 EB 78 */	mr r4, r29
/* 803DB8C4 003D8804  81 9F 00 00 */	lwz r12, 0(r31)
/* 803DB8C8 003D8808  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803DB8CC 003D880C  7D 89 03 A6 */	mtctr r12
/* 803DB8D0 003D8810  4E 80 04 21 */	bctrl 
/* 803DB8D4 003D8814  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DB8D8 003D8818  40 82 00 20 */	bne .L_803DB8F8
/* 803DB8DC 003D881C  3C 60 80 49 */	lis r3, lbl_80496E3C@ha
/* 803DB8E0 003D8820  3C A0 80 49 */	lis r5, lbl_80496E4C@ha
/* 803DB8E4 003D8824  38 63 6E 3C */	addi r3, r3, lbl_80496E3C@l
/* 803DB8E8 003D8828  38 80 00 9F */	li r4, 0x9f
/* 803DB8EC 003D882C  38 A5 6E 4C */	addi r5, r5, lbl_80496E4C@l
/* 803DB8F0 003D8830  4C C6 31 82 */	crclr 6
/* 803DB8F4 003D8834  4B C4 ED 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803DB8F8:
/* 803DB8F8 003D8838  38 00 00 01 */	li r0, 1
/* 803DB8FC 003D883C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 803DB900 003D8840  48 00 01 8C */	b .L_803DBA8C
.L_803DB904:
/* 803DB904 003D8844  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DB908 003D8848  3B C0 00 00 */	li r30, 0
/* 803DB90C 003D884C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DB910 003D8850  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DB914 003D8854  2C 00 00 00 */	cmpwi r0, 0
/* 803DB918 003D8858  40 82 00 14 */	bne .L_803DB92C
/* 803DB91C 003D885C  48 06 56 A1 */	bl checkStatus__13MemoryCardMgrFv
/* 803DB920 003D8860  28 03 00 0B */	cmplwi r3, 0xb
/* 803DB924 003D8864  41 82 00 08 */	beq .L_803DB92C
/* 803DB928 003D8868  3B C0 00 01 */	li r30, 1
.L_803DB92C:
/* 803DB92C 003D886C  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803DB930 003D8870  41 82 01 5C */	beq .L_803DBA8C
/* 803DB934 003D8874  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DB938 003D8878  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DB93C 003D887C  48 06 A1 D1 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DB940 003D8880  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803DB944 003D8884  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DB948 003D8888  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DB94C 003D888C  48 06 A1 C1 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DB950 003D8890  38 00 00 02 */	li r0, 2
/* 803DB954 003D8894  90 1F 00 14 */	stw r0, 0x14(r31)
/* 803DB958 003D8898  48 00 01 34 */	b .L_803DBA8C
.L_803DB95C:
/* 803DB95C 003D889C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 803DB960 003D88A0  28 00 00 0E */	cmplwi r0, 0xe
/* 803DB964 003D88A4  41 81 01 0C */	bgt .L_803DBA70
/* 803DB968 003D88A8  3C A0 80 4F */	lis r5, lbl_804E8F80@ha
/* 803DB96C 003D88AC  54 00 10 3A */	slwi r0, r0, 2
/* 803DB970 003D88B0  38 A5 8F 80 */	addi r5, r5, lbl_804E8F80@l
/* 803DB974 003D88B4  7C 05 00 2E */	lwzx r0, r5, r0
/* 803DB978 003D88B8  7C 09 03 A6 */	mtctr r0
/* 803DB97C 003D88BC  4E 80 04 20 */	bctr 
.L_803DB980:
/* 803DB980 003D88C0  81 83 00 00 */	lwz r12, 0(r3)
/* 803DB984 003D88C4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803DB988 003D88C8  7D 89 03 A6 */	mtctr r12
/* 803DB98C 003D88CC  4E 80 04 21 */	bctrl 
/* 803DB990 003D88D0  48 00 00 FC */	b .L_803DBA8C
.L_803DB994:
/* 803DB994 003D88D4  81 83 00 00 */	lwz r12, 0(r3)
/* 803DB998 003D88D8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803DB99C 003D88DC  7D 89 03 A6 */	mtctr r12
/* 803DB9A0 003D88E0  4E 80 04 21 */	bctrl 
/* 803DB9A4 003D88E4  48 00 00 E8 */	b .L_803DBA8C
.L_803DB9A8:
/* 803DB9A8 003D88E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803DB9AC 003D88EC  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 803DB9B0 003D88F0  7D 89 03 A6 */	mtctr r12
/* 803DB9B4 003D88F4  4E 80 04 21 */	bctrl 
/* 803DB9B8 003D88F8  48 00 00 D4 */	b .L_803DBA8C
.L_803DB9BC:
/* 803DB9BC 003D88FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803DB9C0 003D8900  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 803DB9C4 003D8904  7D 89 03 A6 */	mtctr r12
/* 803DB9C8 003D8908  4E 80 04 21 */	bctrl 
/* 803DB9CC 003D890C  48 00 00 C0 */	b .L_803DBA8C
.L_803DB9D0:
/* 803DB9D0 003D8910  81 83 00 00 */	lwz r12, 0(r3)
/* 803DB9D4 003D8914  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803DB9D8 003D8918  7D 89 03 A6 */	mtctr r12
/* 803DB9DC 003D891C  4E 80 04 21 */	bctrl 
/* 803DB9E0 003D8920  48 00 00 AC */	b .L_803DBA8C
.L_803DB9E4:
/* 803DB9E4 003D8924  81 83 00 00 */	lwz r12, 0(r3)
/* 803DB9E8 003D8928  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803DB9EC 003D892C  7D 89 03 A6 */	mtctr r12
/* 803DB9F0 003D8930  4E 80 04 21 */	bctrl 
/* 803DB9F4 003D8934  48 00 00 98 */	b .L_803DBA8C
.L_803DB9F8:
/* 803DB9F8 003D8938  81 83 00 00 */	lwz r12, 0(r3)
/* 803DB9FC 003D893C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803DBA00 003D8940  7D 89 03 A6 */	mtctr r12
/* 803DBA04 003D8944  4E 80 04 21 */	bctrl 
/* 803DBA08 003D8948  48 00 00 84 */	b .L_803DBA8C
.L_803DBA0C:
/* 803DBA0C 003D894C  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBA10 003D8950  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 803DBA14 003D8954  7D 89 03 A6 */	mtctr r12
/* 803DBA18 003D8958  4E 80 04 21 */	bctrl 
/* 803DBA1C 003D895C  48 00 00 70 */	b .L_803DBA8C
.L_803DBA20:
/* 803DBA20 003D8960  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBA24 003D8964  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 803DBA28 003D8968  7D 89 03 A6 */	mtctr r12
/* 803DBA2C 003D896C  4E 80 04 21 */	bctrl 
/* 803DBA30 003D8970  48 00 00 5C */	b .L_803DBA8C
.L_803DBA34:
/* 803DBA34 003D8974  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBA38 003D8978  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 803DBA3C 003D897C  7D 89 03 A6 */	mtctr r12
/* 803DBA40 003D8980  4E 80 04 21 */	bctrl 
/* 803DBA44 003D8984  48 00 00 48 */	b .L_803DBA8C
.L_803DBA48:
/* 803DBA48 003D8988  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBA4C 003D898C  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 803DBA50 003D8990  7D 89 03 A6 */	mtctr r12
/* 803DBA54 003D8994  4E 80 04 21 */	bctrl 
/* 803DBA58 003D8998  48 00 00 34 */	b .L_803DBA8C
.L_803DBA5C:
/* 803DBA5C 003D899C  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBA60 003D89A0  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 803DBA64 003D89A4  7D 89 03 A6 */	mtctr r12
/* 803DBA68 003D89A8  4E 80 04 21 */	bctrl 
/* 803DBA6C 003D89AC  48 00 00 20 */	b .L_803DBA8C
.L_803DBA70:
/* 803DBA70 003D89B0  3C 60 80 49 */	lis r3, lbl_80496E3C@ha
/* 803DBA74 003D89B4  3C A0 80 49 */	lis r5, lbl_80496E4C@ha
/* 803DBA78 003D89B8  38 63 6E 3C */	addi r3, r3, lbl_80496E3C@l
/* 803DBA7C 003D89BC  38 80 00 E3 */	li r4, 0xe3
/* 803DBA80 003D89C0  38 A5 6E 4C */	addi r5, r5, lbl_80496E4C@l
/* 803DBA84 003D89C4  4C C6 31 82 */	crclr 6
/* 803DBA88 003D89C8  4B C4 EB B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803DBA8C:
/* 803DBA8C 003D89CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803DBA90 003D89D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803DBA94 003D89D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803DBA98 003D89D8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803DBA9C 003D89DC  7C 08 03 A6 */	mtlr r0
/* 803DBAA0 003D89E0  38 21 00 20 */	addi r1, r1, 0x20
/* 803DBAA4 003D89E4  4E 80 00 20 */	blr 

.global do_transitCardNoCard__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardNoCard__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBAA8 003D89E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBAAC 003D89EC  7C 08 02 A6 */	mflr r0
/* 803DBAB0 003D89F0  38 A0 00 08 */	li r5, 8
/* 803DBAB4 003D89F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBAB8 003D89F8  38 00 00 07 */	li r0, 7
/* 803DBABC 003D89FC  38 C1 00 08 */	addi r6, r1, 8
/* 803DBAC0 003D8A00  90 01 00 08 */	stw r0, 8(r1)
/* 803DBAC4 003D8A04  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBAC8 003D8A08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBACC 003D8A0C  7D 89 03 A6 */	mtctr r12
/* 803DBAD0 003D8A10  4E 80 04 21 */	bctrl 
/* 803DBAD4 003D8A14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBAD8 003D8A18  7C 08 03 A6 */	mtlr r0
/* 803DBADC 003D8A1C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBAE0 003D8A20  4E 80 00 20 */	blr 

.global do_transitCardIOError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardIOError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBAE4 003D8A24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBAE8 003D8A28  7C 08 02 A6 */	mflr r0
/* 803DBAEC 003D8A2C  38 A0 00 08 */	li r5, 8
/* 803DBAF0 003D8A30  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBAF4 003D8A34  38 00 00 08 */	li r0, 8
/* 803DBAF8 003D8A38  38 C1 00 08 */	addi r6, r1, 8
/* 803DBAFC 003D8A3C  90 01 00 08 */	stw r0, 8(r1)
/* 803DBB00 003D8A40  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBB04 003D8A44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBB08 003D8A48  7D 89 03 A6 */	mtctr r12
/* 803DBB0C 003D8A4C  4E 80 04 21 */	bctrl 
/* 803DBB10 003D8A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBB14 003D8A54  7C 08 03 A6 */	mtlr r0
/* 803DBB18 003D8A58  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBB1C 003D8A5C  4E 80 00 20 */	blr 

.global do_transitCardWrongDevice__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardWrongDevice__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBB20 003D8A60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBB24 003D8A64  7C 08 02 A6 */	mflr r0
/* 803DBB28 003D8A68  38 A0 00 08 */	li r5, 8
/* 803DBB2C 003D8A6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBB30 003D8A70  38 00 00 09 */	li r0, 9
/* 803DBB34 003D8A74  38 C1 00 08 */	addi r6, r1, 8
/* 803DBB38 003D8A78  90 01 00 08 */	stw r0, 8(r1)
/* 803DBB3C 003D8A7C  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBB40 003D8A80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBB44 003D8A84  7D 89 03 A6 */	mtctr r12
/* 803DBB48 003D8A88  4E 80 04 21 */	bctrl 
/* 803DBB4C 003D8A8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBB50 003D8A90  7C 08 03 A6 */	mtlr r0
/* 803DBB54 003D8A94  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBB58 003D8A98  4E 80 00 20 */	blr 

.global do_transitCardWrongSector__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardWrongSector__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBB5C 003D8A9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBB60 003D8AA0  7C 08 02 A6 */	mflr r0
/* 803DBB64 003D8AA4  38 A0 00 08 */	li r5, 8
/* 803DBB68 003D8AA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBB6C 003D8AAC  38 00 00 0A */	li r0, 0xa
/* 803DBB70 003D8AB0  38 C1 00 08 */	addi r6, r1, 8
/* 803DBB74 003D8AB4  90 01 00 08 */	stw r0, 8(r1)
/* 803DBB78 003D8AB8  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBB7C 003D8ABC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBB80 003D8AC0  7D 89 03 A6 */	mtctr r12
/* 803DBB84 003D8AC4  4E 80 04 21 */	bctrl 
/* 803DBB88 003D8AC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBB8C 003D8ACC  7C 08 03 A6 */	mtlr r0
/* 803DBB90 003D8AD0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBB94 003D8AD4  4E 80 00 20 */	blr 

.global do_transitCardBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBB98 003D8AD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBB9C 003D8ADC  7C 08 02 A6 */	mflr r0
/* 803DBBA0 003D8AE0  38 A0 00 08 */	li r5, 8
/* 803DBBA4 003D8AE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBBA8 003D8AE8  38 00 00 0B */	li r0, 0xb
/* 803DBBAC 003D8AEC  38 C1 00 08 */	addi r6, r1, 8
/* 803DBBB0 003D8AF0  90 01 00 08 */	stw r0, 8(r1)
/* 803DBBB4 003D8AF4  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBBB8 003D8AF8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBBBC 003D8AFC  7D 89 03 A6 */	mtctr r12
/* 803DBBC0 003D8B00  4E 80 04 21 */	bctrl 
/* 803DBBC4 003D8B04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBBC8 003D8B08  7C 08 03 A6 */	mtlr r0
/* 803DBBCC 003D8B0C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBBD0 003D8B10  4E 80 00 20 */	blr 

.global do_transitCardEncoding__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardEncoding__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBBD4 003D8B14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBBD8 003D8B18  7C 08 02 A6 */	mflr r0
/* 803DBBDC 003D8B1C  38 A0 00 08 */	li r5, 8
/* 803DBBE0 003D8B20  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBBE4 003D8B24  38 00 00 0B */	li r0, 0xb
/* 803DBBE8 003D8B28  38 C1 00 08 */	addi r6, r1, 8
/* 803DBBEC 003D8B2C  90 01 00 08 */	stw r0, 8(r1)
/* 803DBBF0 003D8B30  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBBF4 003D8B34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBBF8 003D8B38  7D 89 03 A6 */	mtctr r12
/* 803DBBFC 003D8B3C  4E 80 04 21 */	bctrl 
/* 803DBC00 003D8B40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBC04 003D8B44  7C 08 03 A6 */	mtlr r0
/* 803DBC08 003D8B48  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBC0C 003D8B4C  4E 80 00 20 */	blr 

.global do_transitCardNoFileSpace__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardNoFileSpace__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBC10 003D8B50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBC14 003D8B54  7C 08 02 A6 */	mflr r0
/* 803DBC18 003D8B58  38 A0 00 08 */	li r5, 8
/* 803DBC1C 003D8B5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBC20 003D8B60  38 00 00 0C */	li r0, 0xc
/* 803DBC24 003D8B64  38 C1 00 08 */	addi r6, r1, 8
/* 803DBC28 003D8B68  90 01 00 08 */	stw r0, 8(r1)
/* 803DBC2C 003D8B6C  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBC30 003D8B70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBC34 003D8B74  7D 89 03 A6 */	mtctr r12
/* 803DBC38 003D8B78  4E 80 04 21 */	bctrl 
/* 803DBC3C 003D8B7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBC40 003D8B80  7C 08 03 A6 */	mtlr r0
/* 803DBC44 003D8B84  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBC48 003D8B88  4E 80 00 20 */	blr 

.global do_transitCardNoFileEntry__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardNoFileEntry__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBC4C 003D8B8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBC50 003D8B90  7C 08 02 A6 */	mflr r0
/* 803DBC54 003D8B94  38 A0 00 08 */	li r5, 8
/* 803DBC58 003D8B98  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBC5C 003D8B9C  38 00 00 0C */	li r0, 0xc
/* 803DBC60 003D8BA0  38 C1 00 08 */	addi r6, r1, 8
/* 803DBC64 003D8BA4  90 01 00 08 */	stw r0, 8(r1)
/* 803DBC68 003D8BA8  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBC6C 003D8BAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBC70 003D8BB0  7D 89 03 A6 */	mtctr r12
/* 803DBC74 003D8BB4  4E 80 04 21 */	bctrl 
/* 803DBC78 003D8BB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBC7C 003D8BBC  7C 08 03 A6 */	mtlr r0
/* 803DBC80 003D8BC0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBC84 003D8BC4  4E 80 00 20 */	blr 

.global do_transitCardFileOpenError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardFileOpenError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBC88 003D8BC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBC8C 003D8BCC  7C 08 02 A6 */	mflr r0
/* 803DBC90 003D8BD0  38 A0 00 08 */	li r5, 8
/* 803DBC94 003D8BD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBC98 003D8BD8  38 00 00 0D */	li r0, 0xd
/* 803DBC9C 003D8BDC  38 C1 00 08 */	addi r6, r1, 8
/* 803DBCA0 003D8BE0  90 01 00 08 */	stw r0, 8(r1)
/* 803DBCA4 003D8BE4  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBCA8 003D8BE8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBCAC 003D8BEC  7D 89 03 A6 */	mtctr r12
/* 803DBCB0 003D8BF0  4E 80 04 21 */	bctrl 
/* 803DBCB4 003D8BF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBCB8 003D8BF8  7C 08 03 A6 */	mtlr r0
/* 803DBCBC 003D8BFC  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBCC0 003D8C00  4E 80 00 20 */	blr 

.global do_transitCardSerialNoError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardSerialNoError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBCC4 003D8C04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBCC8 003D8C08  7C 08 02 A6 */	mflr r0
/* 803DBCCC 003D8C0C  38 A0 00 08 */	li r5, 8
/* 803DBCD0 003D8C10  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBCD4 003D8C14  38 00 00 0E */	li r0, 0xe
/* 803DBCD8 003D8C18  38 C1 00 08 */	addi r6, r1, 8
/* 803DBCDC 003D8C1C  90 01 00 08 */	stw r0, 8(r1)
/* 803DBCE0 003D8C20  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBCE4 003D8C24  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBCE8 003D8C28  7D 89 03 A6 */	mtctr r12
/* 803DBCEC 003D8C2C  4E 80 04 21 */	bctrl 
/* 803DBCF0 003D8C30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBCF4 003D8C34  7C 08 03 A6 */	mtlr r0
/* 803DBCF8 003D8C38  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBCFC 003D8C3C  4E 80 00 20 */	blr 

.global do_transitCardPlayerDataBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
do_transitCardPlayerDataBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr:
/* 803DBD00 003D8C40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBD04 003D8C44  7C 08 02 A6 */	mflr r0
/* 803DBD08 003D8C48  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBD0C 003D8C4C  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBD10 003D8C50  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803DBD14 003D8C54  7D 89 03 A6 */	mtctr r12
/* 803DBD18 003D8C58  4E 80 04 21 */	bctrl 
/* 803DBD1C 003D8C5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBD20 003D8C60  7C 08 03 A6 */	mtlr r0
/* 803DBD24 003D8C64  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBD28 003D8C68  4E 80 00 20 */	blr 

.global do_cardRequest__Q33ebi4Save19FSMState_MountCheckFPQ33ebi4Save4TMgr
do_cardRequest__Q33ebi4Save19FSMState_MountCheckFPQ33ebi4Save4TMgr:
/* 803DBD2C 003D8C6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBD30 003D8C70  7C 08 02 A6 */	mflr r0
/* 803DBD34 003D8C74  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBD38 003D8C78  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DBD3C 003D8C7C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DBD40 003D8C80  48 06 AB 25 */	bl resetError__Q34Game10MemoryCard3MgrFv
/* 803DBD44 003D8C84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBD48 003D8C88  7C 08 03 A6 */	mtlr r0
/* 803DBD4C 003D8C8C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBD50 003D8C90  4E 80 00 20 */	blr 

.global do_transitCardReady__Q33ebi4Save19FSMState_MountCheckFPQ33ebi4Save4TMgr
do_transitCardReady__Q33ebi4Save19FSMState_MountCheckFPQ33ebi4Save4TMgr:
/* 803DBD54 003D8C94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBD58 003D8C98  7C 08 02 A6 */	mflr r0
/* 803DBD5C 003D8C9C  38 A0 00 04 */	li r5, 4
/* 803DBD60 003D8CA0  38 C0 00 00 */	li r6, 0
/* 803DBD64 003D8CA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBD68 003D8CA8  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBD6C 003D8CAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBD70 003D8CB0  7D 89 03 A6 */	mtctr r12
/* 803DBD74 003D8CB4  4E 80 04 21 */	bctrl 
/* 803DBD78 003D8CB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBD7C 003D8CBC  7C 08 03 A6 */	mtlr r0
/* 803DBD80 003D8CC0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBD84 003D8CC4  4E 80 00 20 */	blr 

.global do_cardRequest__Q33ebi4Save24FSMState_GetPlayerHeaderFPQ33ebi4Save4TMgr
do_cardRequest__Q33ebi4Save24FSMState_GetPlayerHeaderFPQ33ebi4Save4TMgr:
/* 803DBD88 003D8CC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBD8C 003D8CCC  7C 08 02 A6 */	mflr r0
/* 803DBD90 003D8CD0  38 84 03 D4 */	addi r4, r4, 0x3d4
/* 803DBD94 003D8CD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBD98 003D8CD8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DBD9C 003D8CDC  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DBDA0 003D8CE0  48 06 78 85 */	bl getPlayerHeader__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard14PlayerFileInfo
/* 803DBDA4 003D8CE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBDA8 003D8CE8  7C 08 03 A6 */	mtlr r0
/* 803DBDAC 003D8CEC  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBDB0 003D8CF0  4E 80 00 20 */	blr 

.global do_transitCardReady__Q33ebi4Save24FSMState_GetPlayerHeaderFPQ33ebi4Save4TMgr
do_transitCardReady__Q33ebi4Save24FSMState_GetPlayerHeaderFPQ33ebi4Save4TMgr:
/* 803DBDB4 003D8CF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DBDB8 003D8CF8  7C 08 02 A6 */	mflr r0
/* 803DBDBC 003D8CFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803DBDC0 003D8D00  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803DBDC4 003D8D04  7C 9F 23 78 */	mr r31, r4
/* 803DBDC8 003D8D08  38 80 00 00 */	li r4, 0
/* 803DBDCC 003D8D0C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803DBDD0 003D8D10  7C 7E 1B 78 */	mr r30, r3
/* 803DBDD4 003D8D14  38 7F 03 D4 */	addi r3, r31, 0x3d4
/* 803DBDD8 003D8D18  48 06 6C 49 */	bl isNewFile__Q34Game10MemoryCard14PlayerFileInfoFi
/* 803DBDDC 003D8D1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DBDE0 003D8D20  40 82 00 18 */	bne .L_803DBDF8
/* 803DBDE4 003D8D24  38 7F 03 D4 */	addi r3, r31, 0x3d4
/* 803DBDE8 003D8D28  38 80 00 00 */	li r4, 0
/* 803DBDEC 003D8D2C  48 06 6B B5 */	bl isBrokenFile__Q34Game10MemoryCard14PlayerFileInfoFi
/* 803DBDF0 003D8D30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DBDF4 003D8D34  41 82 00 80 */	beq .L_803DBE74
.L_803DBDF8:
/* 803DBDF8 003D8D38  38 7F 03 D4 */	addi r3, r31, 0x3d4
/* 803DBDFC 003D8D3C  38 80 00 01 */	li r4, 1
/* 803DBE00 003D8D40  48 06 6C 21 */	bl isNewFile__Q34Game10MemoryCard14PlayerFileInfoFi
/* 803DBE04 003D8D44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DBE08 003D8D48  40 82 00 18 */	bne .L_803DBE20
/* 803DBE0C 003D8D4C  38 7F 03 D4 */	addi r3, r31, 0x3d4
/* 803DBE10 003D8D50  38 80 00 01 */	li r4, 1
/* 803DBE14 003D8D54  48 06 6B 8D */	bl isBrokenFile__Q34Game10MemoryCard14PlayerFileInfoFi
/* 803DBE18 003D8D58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DBE1C 003D8D5C  41 82 00 58 */	beq .L_803DBE74
.L_803DBE20:
/* 803DBE20 003D8D60  38 7F 03 D4 */	addi r3, r31, 0x3d4
/* 803DBE24 003D8D64  38 80 00 02 */	li r4, 2
/* 803DBE28 003D8D68  48 06 6B F9 */	bl isNewFile__Q34Game10MemoryCard14PlayerFileInfoFi
/* 803DBE2C 003D8D6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DBE30 003D8D70  40 82 00 18 */	bne .L_803DBE48
/* 803DBE34 003D8D74  38 7F 03 D4 */	addi r3, r31, 0x3d4
/* 803DBE38 003D8D78  38 80 00 02 */	li r4, 2
/* 803DBE3C 003D8D7C  48 06 6B 65 */	bl isBrokenFile__Q34Game10MemoryCard14PlayerFileInfoFi
/* 803DBE40 003D8D80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DBE44 003D8D84  41 82 00 30 */	beq .L_803DBE74
.L_803DBE48:
/* 803DBE48 003D8D88  38 00 00 01 */	li r0, 1
/* 803DBE4C 003D8D8C  7F C3 F3 78 */	mr r3, r30
/* 803DBE50 003D8D90  98 01 00 08 */	stb r0, 8(r1)
/* 803DBE54 003D8D94  7F E4 FB 78 */	mr r4, r31
/* 803DBE58 003D8D98  38 C1 00 08 */	addi r6, r1, 8
/* 803DBE5C 003D8D9C  38 A0 00 06 */	li r5, 6
/* 803DBE60 003D8DA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DBE64 003D8DA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBE68 003D8DA8  7D 89 03 A6 */	mtctr r12
/* 803DBE6C 003D8DAC  4E 80 04 21 */	bctrl 
/* 803DBE70 003D8DB0  48 00 00 24 */	b .L_803DBE94
.L_803DBE74:
/* 803DBE74 003D8DB4  7F C3 F3 78 */	mr r3, r30
/* 803DBE78 003D8DB8  7F E4 FB 78 */	mr r4, r31
/* 803DBE7C 003D8DBC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DBE80 003D8DC0  38 A0 00 05 */	li r5, 5
/* 803DBE84 003D8DC4  38 C0 00 00 */	li r6, 0
/* 803DBE88 003D8DC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBE8C 003D8DCC  7D 89 03 A6 */	mtctr r12
/* 803DBE90 003D8DD0  4E 80 04 21 */	bctrl 
.L_803DBE94:
/* 803DBE94 003D8DD4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803DBE98 003D8DD8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803DBE9C 003D8DDC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803DBEA0 003D8DE0  7C 08 03 A6 */	mtlr r0
/* 803DBEA4 003D8DE4  38 21 00 20 */	addi r1, r1, 0x20
/* 803DBEA8 003D8DE8  4E 80 00 20 */	blr 

.global do_transitCardSerialNoError__Q33ebi4Save24FSMState_GetPlayerHeaderFPQ33ebi4Save4TMgr
do_transitCardSerialNoError__Q33ebi4Save24FSMState_GetPlayerHeaderFPQ33ebi4Save4TMgr:
/* 803DBEAC 003D8DEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBEB0 003D8DF0  7C 08 02 A6 */	mflr r0
/* 803DBEB4 003D8DF4  3C 60 80 49 */	lis r3, lbl_80496E3C@ha
/* 803DBEB8 003D8DF8  3C A0 80 49 */	lis r5, lbl_80496E4C@ha
/* 803DBEBC 003D8DFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBEC0 003D8E00  38 63 6E 3C */	addi r3, r3, lbl_80496E3C@l
/* 803DBEC4 003D8E04  38 80 01 5D */	li r4, 0x15d
/* 803DBEC8 003D8E08  38 A5 6E 4C */	addi r5, r5, lbl_80496E4C@l
/* 803DBECC 003D8E0C  4C C6 31 82 */	crclr 6
/* 803DBED0 003D8E10  4B C4 E7 71 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803DBED4 003D8E14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBED8 003D8E18  7C 08 03 A6 */	mtlr r0
/* 803DBEDC 003D8E1C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBEE0 003D8E20  4E 80 00 20 */	blr 

.global do_cardRequest__Q33ebi4Save24FSMState_CheckBeforeSaveFPQ33ebi4Save4TMgr
do_cardRequest__Q33ebi4Save24FSMState_CheckBeforeSaveFPQ33ebi4Save4TMgr:
/* 803DBEE4 003D8E24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBEE8 003D8E28  7C 08 02 A6 */	mflr r0
/* 803DBEEC 003D8E2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBEF0 003D8E30  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DBEF4 003D8E34  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DBEF8 003D8E38  48 06 6E 91 */	bl checkBeforeSave__Q34Game10MemoryCard3MgrFv
/* 803DBEFC 003D8E3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBF00 003D8E40  7C 08 03 A6 */	mtlr r0
/* 803DBF04 003D8E44  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBF08 003D8E48  4E 80 00 20 */	blr 

.global do_transitCardReady__Q33ebi4Save24FSMState_CheckBeforeSaveFPQ33ebi4Save4TMgr
do_transitCardReady__Q33ebi4Save24FSMState_CheckBeforeSaveFPQ33ebi4Save4TMgr:
/* 803DBF0C 003D8E4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DBF10 003D8E50  7C 08 02 A6 */	mflr r0
/* 803DBF14 003D8E54  38 A0 00 06 */	li r5, 6
/* 803DBF18 003D8E58  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DBF1C 003D8E5C  38 00 00 00 */	li r0, 0
/* 803DBF20 003D8E60  38 C1 00 08 */	addi r6, r1, 8
/* 803DBF24 003D8E64  98 01 00 08 */	stb r0, 8(r1)
/* 803DBF28 003D8E68  81 83 00 00 */	lwz r12, 0(r3)
/* 803DBF2C 003D8E6C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DBF30 003D8E70  7D 89 03 A6 */	mtctr r12
/* 803DBF34 003D8E74  4E 80 04 21 */	bctrl 
/* 803DBF38 003D8E78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DBF3C 003D8E7C  7C 08 03 A6 */	mtlr r0
/* 803DBF40 003D8E80  38 21 00 10 */	addi r1, r1, 0x10
/* 803DBF44 003D8E84  4E 80 00 20 */	blr 

.global do_init__Q33ebi4Save16FSMState_NowSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg
do_init__Q33ebi4Save16FSMState_NowSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg:
/* 803DBF48 003D8E88  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DBF4C 003D8E8C  7C 08 02 A6 */	mflr r0
/* 803DBF50 003D8E90  90 01 00 24 */	stw r0, 0x24(r1)
/* 803DBF54 003D8E94  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803DBF58 003D8E98  7C BF 2B 79 */	or. r31, r5, r5
/* 803DBF5C 003D8E9C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803DBF60 003D8EA0  7C 9E 23 78 */	mr r30, r4
/* 803DBF64 003D8EA4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803DBF68 003D8EA8  7C 7D 1B 78 */	mr r29, r3
/* 803DBF6C 003D8EAC  40 82 00 20 */	bne .L_803DBF8C
/* 803DBF70 003D8EB0  3C 60 80 49 */	lis r3, lbl_80496E3C@ha
/* 803DBF74 003D8EB4  3C A0 80 49 */	lis r5, lbl_80496E4C@ha
/* 803DBF78 003D8EB8  38 63 6E 3C */	addi r3, r3, lbl_80496E3C@l
/* 803DBF7C 003D8EBC  38 80 01 7D */	li r4, 0x17d
/* 803DBF80 003D8EC0  38 A5 6E 4C */	addi r5, r5, lbl_80496E4C@l
/* 803DBF84 003D8EC4  4C C6 31 82 */	crclr 6
/* 803DBF88 003D8EC8  4B C4 E6 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803DBF8C:
/* 803DBF8C 003D8ECC  88 1F 00 00 */	lbz r0, 0(r31)
/* 803DBF90 003D8ED0  38 7E 00 18 */	addi r3, r30, 0x18
/* 803DBF94 003D8ED4  38 80 00 00 */	li r4, 0
/* 803DBF98 003D8ED8  98 1D 00 18 */	stb r0, 0x18(r29)
/* 803DBF9C 003D8EDC  81 9E 00 18 */	lwz r12, 0x18(r30)
/* 803DBFA0 003D8EE0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803DBFA4 003D8EE4  7D 89 03 A6 */	mtctr r12
/* 803DBFA8 003D8EE8  4E 80 04 21 */	bctrl 
/* 803DBFAC 003D8EEC  80 1E 04 70 */	lwz r0, 0x470(r30)
/* 803DBFB0 003D8EF0  2C 00 00 01 */	cmpwi r0, 1
/* 803DBFB4 003D8EF4  40 82 00 10 */	bne .L_803DBFC4
/* 803DBFB8 003D8EF8  38 00 00 02 */	li r0, 2
/* 803DBFBC 003D8EFC  90 1D 00 10 */	stw r0, 0x10(r29)
/* 803DBFC0 003D8F00  48 00 00 0C */	b .L_803DBFCC
.L_803DBFC4:
/* 803DBFC4 003D8F04  38 00 00 00 */	li r0, 0
/* 803DBFC8 003D8F08  90 1D 00 10 */	stw r0, 0x10(r29)
.L_803DBFCC:
/* 803DBFCC 003D8F0C  38 7E 00 18 */	addi r3, r30, 0x18
/* 803DBFD0 003D8F10  38 80 00 01 */	li r4, 1
/* 803DBFD4 003D8F14  48 00 1A 91 */	bl openMsg__Q33ebi6Screen9TSaveMenuFl
/* 803DBFD8 003D8F18  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DBFDC 003D8F1C  C0 22 18 50 */	lfs f1, lbl_8051FBB0@sda21(r2)
/* 803DBFE0 003D8F20  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803DBFE4 003D8F24  EC 21 00 24 */	fdivs f1, f1, f0
/* 803DBFE8 003D8F28  4B CE 5B 65 */	bl __cvt_fp2unsigned
/* 803DBFEC 003D8F2C  90 7E 03 C8 */	stw r3, 0x3c8(r30)
/* 803DBFF0 003D8F30  90 7E 03 CC */	stw r3, 0x3cc(r30)
/* 803DBFF4 003D8F34  38 7E 01 00 */	addi r3, r30, 0x100
/* 803DBFF8 003D8F38  4B FF 73 C1 */	bl forceQuitSeq__Q33ebi9CardError4TMgrFv
/* 803DBFFC 003D8F3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803DC000 003D8F40  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803DC004 003D8F44  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803DC008 003D8F48  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803DC00C 003D8F4C  7C 08 03 A6 */	mtlr r0
/* 803DC010 003D8F50  38 21 00 20 */	addi r1, r1, 0x20
/* 803DC014 003D8F54  4E 80 00 20 */	blr 

.global do_exec__Q33ebi4Save16FSMState_NowSaveFPQ33ebi4Save4TMgr
do_exec__Q33ebi4Save16FSMState_NowSaveFPQ33ebi4Save4TMgr:
/* 803DC018 003D8F58  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803DC01C 003D8F5C  7C 08 02 A6 */	mflr r0
/* 803DC020 003D8F60  90 01 00 34 */	stw r0, 0x34(r1)
/* 803DC024 003D8F64  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803DC028 003D8F68  7C 9F 23 78 */	mr r31, r4
/* 803DC02C 003D8F6C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803DC030 003D8F70  7C 7E 1B 78 */	mr r30, r3
/* 803DC034 003D8F74  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803DC038 003D8F78  3B A0 00 00 */	li r29, 0
/* 803DC03C 003D8F7C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803DC040 003D8F80  80 65 00 5C */	lwz r3, 0x5c(r5)
/* 803DC044 003D8F84  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DC048 003D8F88  2C 00 00 00 */	cmpwi r0, 0
/* 803DC04C 003D8F8C  40 82 00 14 */	bne .L_803DC060
/* 803DC050 003D8F90  48 06 4F 6D */	bl checkStatus__13MemoryCardMgrFv
/* 803DC054 003D8F94  28 03 00 0B */	cmplwi r3, 0xb
/* 803DC058 003D8F98  41 82 00 08 */	beq .L_803DC060
/* 803DC05C 003D8F9C  3B A0 00 01 */	li r29, 1
.L_803DC060:
/* 803DC060 003D8FA0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 803DC064 003D8FA4  41 82 00 20 */	beq .L_803DC084
/* 803DC068 003D8FA8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC06C 003D8FAC  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC070 003D8FB0  48 06 9A 9D */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DC074 003D8FB4  2C 03 00 00 */	cmpwi r3, 0
/* 803DC078 003D8FB8  40 82 00 0C */	bne .L_803DC084
/* 803DC07C 003D8FBC  38 00 00 01 */	li r0, 1
/* 803DC080 003D8FC0  48 00 00 08 */	b .L_803DC088
.L_803DC084:
/* 803DC084 003D8FC4  38 00 00 00 */	li r0, 0
.L_803DC088:
/* 803DC088 003D8FC8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803DC08C 003D8FCC  41 82 00 30 */	beq .L_803DC0BC
/* 803DC090 003D8FD0  38 00 00 0F */	li r0, 0xf
/* 803DC094 003D8FD4  7F C3 F3 78 */	mr r3, r30
/* 803DC098 003D8FD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DC09C 003D8FDC  7F E4 FB 78 */	mr r4, r31
/* 803DC0A0 003D8FE0  38 C1 00 14 */	addi r6, r1, 0x14
/* 803DC0A4 003D8FE4  38 A0 00 08 */	li r5, 8
/* 803DC0A8 003D8FE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DC0AC 003D8FEC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DC0B0 003D8FF0  7D 89 03 A6 */	mtctr r12
/* 803DC0B4 003D8FF4  4E 80 04 21 */	bctrl 
/* 803DC0B8 003D8FF8  48 00 03 68 */	b .L_803DC420
.L_803DC0BC:
/* 803DC0BC 003D8FFC  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 803DC0C0 003D9000  2C 00 00 02 */	cmpwi r0, 2
/* 803DC0C4 003D9004  41 82 01 5C */	beq .L_803DC220
/* 803DC0C8 003D9008  40 80 00 14 */	bge .L_803DC0DC
/* 803DC0CC 003D900C  2C 00 00 00 */	cmpwi r0, 0
/* 803DC0D0 003D9010  41 82 00 1C */	beq .L_803DC0EC
/* 803DC0D4 003D9014  40 80 00 A8 */	bge .L_803DC17C
/* 803DC0D8 003D9018  48 00 03 48 */	b .L_803DC420
.L_803DC0DC:
/* 803DC0DC 003D901C  2C 00 00 04 */	cmpwi r0, 4
/* 803DC0E0 003D9020  41 82 02 04 */	beq .L_803DC2E4
/* 803DC0E4 003D9024  40 80 03 3C */	bge .L_803DC420
/* 803DC0E8 003D9028  48 00 01 A4 */	b .L_803DC28C
.L_803DC0EC:
/* 803DC0EC 003D902C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC0F0 003D9030  3B A0 00 00 */	li r29, 0
/* 803DC0F4 003D9034  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC0F8 003D9038  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DC0FC 003D903C  2C 00 00 00 */	cmpwi r0, 0
/* 803DC100 003D9040  40 82 00 14 */	bne .L_803DC114
/* 803DC104 003D9044  48 06 4E B9 */	bl checkStatus__13MemoryCardMgrFv
/* 803DC108 003D9048  28 03 00 0B */	cmplwi r3, 0xb
/* 803DC10C 003D904C  41 82 00 08 */	beq .L_803DC114
/* 803DC110 003D9050  3B A0 00 01 */	li r29, 1
.L_803DC114:
/* 803DC114 003D9054  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 803DC118 003D9058  41 82 03 08 */	beq .L_803DC420
/* 803DC11C 003D905C  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 803DC120 003D9060  28 00 00 00 */	cmplwi r0, 0
/* 803DC124 003D9064  41 82 00 18 */	beq .L_803DC13C
/* 803DC128 003D9068  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC12C 003D906C  38 80 FF FF */	li r4, -1
/* 803DC130 003D9070  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC134 003D9074  48 06 6F 21 */	bl savePlayerNoCheckSerialNumber__Q34Game10MemoryCard3MgrFi
/* 803DC138 003D9078  48 00 00 14 */	b .L_803DC14C
.L_803DC13C:
/* 803DC13C 003D907C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC140 003D9080  38 80 FF FF */	li r4, -1
/* 803DC144 003D9084  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC148 003D9088  48 06 70 31 */	bl savePlayer__Q34Game10MemoryCard3MgrFi
.L_803DC14C:
/* 803DC14C 003D908C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DC150 003D9090  40 82 00 20 */	bne .L_803DC170
/* 803DC154 003D9094  3C 60 80 49 */	lis r3, lbl_80496E3C@ha
/* 803DC158 003D9098  3C A0 80 49 */	lis r5, lbl_80496E4C@ha
/* 803DC15C 003D909C  38 63 6E 3C */	addi r3, r3, lbl_80496E3C@l
/* 803DC160 003D90A0  38 80 01 AC */	li r4, 0x1ac
/* 803DC164 003D90A4  38 A5 6E 4C */	addi r5, r5, lbl_80496E4C@l
/* 803DC168 003D90A8  4C C6 31 82 */	crclr 6
/* 803DC16C 003D90AC  4B C4 E4 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803DC170:
/* 803DC170 003D90B0  38 00 00 01 */	li r0, 1
/* 803DC174 003D90B4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803DC178 003D90B8  48 00 02 A8 */	b .L_803DC420
.L_803DC17C:
/* 803DC17C 003D90BC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC180 003D90C0  3B A0 00 00 */	li r29, 0
/* 803DC184 003D90C4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC188 003D90C8  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DC18C 003D90CC  2C 00 00 00 */	cmpwi r0, 0
/* 803DC190 003D90D0  40 82 00 14 */	bne .L_803DC1A4
/* 803DC194 003D90D4  48 06 4E 29 */	bl checkStatus__13MemoryCardMgrFv
/* 803DC198 003D90D8  28 03 00 0B */	cmplwi r3, 0xb
/* 803DC19C 003D90DC  41 82 00 08 */	beq .L_803DC1A4
/* 803DC1A0 003D90E0  3B A0 00 01 */	li r29, 1
.L_803DC1A4:
/* 803DC1A4 003D90E4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 803DC1A8 003D90E8  41 82 02 78 */	beq .L_803DC420
/* 803DC1AC 003D90EC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC1B0 003D90F0  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC1B4 003D90F4  48 06 99 59 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DC1B8 003D90F8  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803DC1BC 003D90FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC1C0 003D9100  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC1C4 003D9104  48 06 99 49 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DC1C8 003D9108  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803DC1CC 003D910C  2C 00 00 0E */	cmpwi r0, 0xe
/* 803DC1D0 003D9110  41 82 00 38 */	beq .L_803DC208
/* 803DC1D4 003D9114  40 80 00 40 */	bge .L_803DC214
/* 803DC1D8 003D9118  2C 00 00 02 */	cmpwi r0, 2
/* 803DC1DC 003D911C  41 82 00 08 */	beq .L_803DC1E4
/* 803DC1E0 003D9120  48 00 00 34 */	b .L_803DC214
.L_803DC1E4:
/* 803DC1E4 003D9124  80 1F 04 70 */	lwz r0, 0x470(r31)
/* 803DC1E8 003D9128  2C 00 00 00 */	cmpwi r0, 0
/* 803DC1EC 003D912C  40 82 00 10 */	bne .L_803DC1FC
/* 803DC1F0 003D9130  38 00 00 04 */	li r0, 4
/* 803DC1F4 003D9134  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803DC1F8 003D9138  48 00 02 28 */	b .L_803DC420
.L_803DC1FC:
/* 803DC1FC 003D913C  38 00 00 02 */	li r0, 2
/* 803DC200 003D9140  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803DC204 003D9144  48 00 02 1C */	b .L_803DC420
.L_803DC208:
/* 803DC208 003D9148  38 00 00 04 */	li r0, 4
/* 803DC20C 003D914C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803DC210 003D9150  48 00 02 10 */	b .L_803DC420
.L_803DC214:
/* 803DC214 003D9154  38 00 00 04 */	li r0, 4
/* 803DC218 003D9158  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803DC21C 003D915C  48 00 02 04 */	b .L_803DC420
.L_803DC220:
/* 803DC220 003D9160  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC224 003D9164  3B E0 00 00 */	li r31, 0
/* 803DC228 003D9168  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC22C 003D916C  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DC230 003D9170  2C 00 00 00 */	cmpwi r0, 0
/* 803DC234 003D9174  40 82 00 14 */	bne .L_803DC248
/* 803DC238 003D9178  48 06 4D 85 */	bl checkStatus__13MemoryCardMgrFv
/* 803DC23C 003D917C  28 03 00 0B */	cmplwi r3, 0xb
/* 803DC240 003D9180  41 82 00 08 */	beq .L_803DC248
/* 803DC244 003D9184  3B E0 00 01 */	li r31, 1
.L_803DC248:
/* 803DC248 003D9188  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803DC24C 003D918C  41 82 01 D4 */	beq .L_803DC420
/* 803DC250 003D9190  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC254 003D9194  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC258 003D9198  48 06 6C 8D */	bl saveGameOption__Q34Game10MemoryCard3MgrFv
/* 803DC25C 003D919C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DC260 003D91A0  40 82 00 20 */	bne .L_803DC280
/* 803DC264 003D91A4  3C 60 80 49 */	lis r3, lbl_80496E3C@ha
/* 803DC268 003D91A8  3C A0 80 49 */	lis r5, lbl_80496E4C@ha
/* 803DC26C 003D91AC  38 63 6E 3C */	addi r3, r3, lbl_80496E3C@l
/* 803DC270 003D91B0  38 80 01 DC */	li r4, 0x1dc
/* 803DC274 003D91B4  38 A5 6E 4C */	addi r5, r5, lbl_80496E4C@l
/* 803DC278 003D91B8  4C C6 31 82 */	crclr 6
/* 803DC27C 003D91BC  4B C4 E3 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803DC280:
/* 803DC280 003D91C0  38 00 00 03 */	li r0, 3
/* 803DC284 003D91C4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803DC288 003D91C8  48 00 01 98 */	b .L_803DC420
.L_803DC28C:
/* 803DC28C 003D91CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC290 003D91D0  3B E0 00 00 */	li r31, 0
/* 803DC294 003D91D4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC298 003D91D8  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DC29C 003D91DC  2C 00 00 00 */	cmpwi r0, 0
/* 803DC2A0 003D91E0  40 82 00 14 */	bne .L_803DC2B4
/* 803DC2A4 003D91E4  48 06 4D 19 */	bl checkStatus__13MemoryCardMgrFv
/* 803DC2A8 003D91E8  28 03 00 0B */	cmplwi r3, 0xb
/* 803DC2AC 003D91EC  41 82 00 08 */	beq .L_803DC2B4
/* 803DC2B0 003D91F0  3B E0 00 01 */	li r31, 1
.L_803DC2B4:
/* 803DC2B4 003D91F4  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803DC2B8 003D91F8  41 82 01 68 */	beq .L_803DC420
/* 803DC2BC 003D91FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC2C0 003D9200  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC2C4 003D9204  48 06 98 49 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DC2C8 003D9208  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803DC2CC 003D920C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC2D0 003D9210  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DC2D4 003D9214  48 06 98 39 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DC2D8 003D9218  38 00 00 04 */	li r0, 4
/* 803DC2DC 003D921C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803DC2E0 003D9220  48 00 01 40 */	b .L_803DC420
.L_803DC2E4:
/* 803DC2E4 003D9224  80 9F 03 C8 */	lwz r4, 0x3c8(r31)
/* 803DC2E8 003D9228  3C 00 43 30 */	lis r0, 0x4330
/* 803DC2EC 003D922C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC2F0 003D9230  90 81 00 1C */	stw r4, 0x1c(r1)
/* 803DC2F4 003D9234  C8 62 18 58 */	lfd f3, lbl_8051FBB8@sda21(r2)
/* 803DC2F8 003D9238  90 01 00 18 */	stw r0, 0x18(r1)
/* 803DC2FC 003D923C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 803DC300 003D9240  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 803DC304 003D9244  C0 02 18 54 */	lfs f0, lbl_8051FBB4@sda21(r2)
/* 803DC308 003D9248  EC 42 18 28 */	fsubs f2, f2, f3
/* 803DC30C 003D924C  EC 22 00 72 */	fmuls f1, f2, f1
/* 803DC310 003D9250  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803DC314 003D9254  40 80 00 1C */	bge .L_803DC330
/* 803DC318 003D9258  80 7F 03 D0 */	lwz r3, 0x3d0(r31)
/* 803DC31C 003D925C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803DC320 003D9260  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 803DC324 003D9264  41 82 00 0C */	beq .L_803DC330
/* 803DC328 003D9268  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DC32C 003D926C  48 00 17 CD */	bl closeMsg__Q33ebi6Screen9TSaveMenuFv
.L_803DC330:
/* 803DC330 003D9270  80 1F 03 C8 */	lwz r0, 0x3c8(r31)
/* 803DC334 003D9274  28 00 00 00 */	cmplwi r0, 0
/* 803DC338 003D9278  40 82 00 0C */	bne .L_803DC344
/* 803DC33C 003D927C  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DC340 003D9280  48 00 17 B9 */	bl closeMsg__Q33ebi6Screen9TSaveMenuFv
.L_803DC344:
/* 803DC344 003D9284  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DC348 003D9288  48 00 18 41 */	bl isFinishMsg__Q33ebi6Screen9TSaveMenuFv
/* 803DC34C 003D928C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DC350 003D9290  41 82 00 D0 */	beq .L_803DC420
/* 803DC354 003D9294  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803DC358 003D9298  2C 00 00 02 */	cmpwi r0, 2
/* 803DC35C 003D929C  41 82 00 20 */	beq .L_803DC37C
/* 803DC360 003D92A0  40 80 00 10 */	bge .L_803DC370
/* 803DC364 003D92A4  2C 00 00 00 */	cmpwi r0, 0
/* 803DC368 003D92A8  41 82 00 38 */	beq .L_803DC3A0
/* 803DC36C 003D92AC  48 00 00 8C */	b .L_803DC3F8
.L_803DC370:
/* 803DC370 003D92B0  2C 00 00 0E */	cmpwi r0, 0xe
/* 803DC374 003D92B4  41 82 00 58 */	beq .L_803DC3CC
/* 803DC378 003D92B8  48 00 00 80 */	b .L_803DC3F8
.L_803DC37C:
/* 803DC37C 003D92BC  7F C3 F3 78 */	mr r3, r30
/* 803DC380 003D92C0  7F E4 FB 78 */	mr r4, r31
/* 803DC384 003D92C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DC388 003D92C8  38 A0 00 07 */	li r5, 7
/* 803DC38C 003D92CC  38 C0 00 00 */	li r6, 0
/* 803DC390 003D92D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DC394 003D92D4  7D 89 03 A6 */	mtctr r12
/* 803DC398 003D92D8  4E 80 04 21 */	bctrl 
/* 803DC39C 003D92DC  48 00 00 84 */	b .L_803DC420
.L_803DC3A0:
/* 803DC3A0 003D92E0  38 00 00 0F */	li r0, 0xf
/* 803DC3A4 003D92E4  7F C3 F3 78 */	mr r3, r30
/* 803DC3A8 003D92E8  90 01 00 10 */	stw r0, 0x10(r1)
/* 803DC3AC 003D92EC  7F E4 FB 78 */	mr r4, r31
/* 803DC3B0 003D92F0  38 C1 00 10 */	addi r6, r1, 0x10
/* 803DC3B4 003D92F4  38 A0 00 08 */	li r5, 8
/* 803DC3B8 003D92F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DC3BC 003D92FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DC3C0 003D9300  7D 89 03 A6 */	mtctr r12
/* 803DC3C4 003D9304  4E 80 04 21 */	bctrl 
/* 803DC3C8 003D9308  48 00 00 58 */	b .L_803DC420
.L_803DC3CC:
/* 803DC3CC 003D930C  38 00 00 0E */	li r0, 0xe
/* 803DC3D0 003D9310  7F C3 F3 78 */	mr r3, r30
/* 803DC3D4 003D9314  90 01 00 0C */	stw r0, 0xc(r1)
/* 803DC3D8 003D9318  7F E4 FB 78 */	mr r4, r31
/* 803DC3DC 003D931C  38 C1 00 0C */	addi r6, r1, 0xc
/* 803DC3E0 003D9320  38 A0 00 08 */	li r5, 8
/* 803DC3E4 003D9324  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DC3E8 003D9328  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DC3EC 003D932C  7D 89 03 A6 */	mtctr r12
/* 803DC3F0 003D9330  4E 80 04 21 */	bctrl 
/* 803DC3F4 003D9334  48 00 00 2C */	b .L_803DC420
.L_803DC3F8:
/* 803DC3F8 003D9338  38 00 00 10 */	li r0, 0x10
/* 803DC3FC 003D933C  7F C3 F3 78 */	mr r3, r30
/* 803DC400 003D9340  90 01 00 08 */	stw r0, 8(r1)
/* 803DC404 003D9344  7F E4 FB 78 */	mr r4, r31
/* 803DC408 003D9348  38 C1 00 08 */	addi r6, r1, 8
/* 803DC40C 003D934C  38 A0 00 08 */	li r5, 8
/* 803DC410 003D9350  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DC414 003D9354  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DC418 003D9358  7D 89 03 A6 */	mtctr r12
/* 803DC41C 003D935C  4E 80 04 21 */	bctrl 
.L_803DC420:
/* 803DC420 003D9360  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803DC424 003D9364  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803DC428 003D9368  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803DC42C 003D936C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803DC430 003D9370  7C 08 03 A6 */	mtlr r0
/* 803DC434 003D9374  38 21 00 30 */	addi r1, r1, 0x30
/* 803DC438 003D9378  4E 80 00 20 */	blr 

.global do_init__Q33ebi4Save18FSMState_AfterSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg
do_init__Q33ebi4Save18FSMState_AfterSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg:
/* 803DC43C 003D937C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DC440 003D9380  7C 08 02 A6 */	mflr r0
/* 803DC444 003D9384  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DC448 003D9388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DC44C 003D938C  7C 9F 23 78 */	mr r31, r4
/* 803DC450 003D9390  38 80 00 02 */	li r4, 2
/* 803DC454 003D9394  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DC458 003D9398  48 00 16 0D */	bl openMsg__Q33ebi6Screen9TSaveMenuFl
/* 803DC45C 003D939C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC460 003D93A0  C0 22 18 50 */	lfs f1, lbl_8051FBB0@sda21(r2)
/* 803DC464 003D93A4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803DC468 003D93A8  EC 21 00 24 */	fdivs f1, f1, f0
/* 803DC46C 003D93AC  4B CE 56 E1 */	bl __cvt_fp2unsigned
/* 803DC470 003D93B0  90 7F 03 C8 */	stw r3, 0x3c8(r31)
/* 803DC474 003D93B4  90 7F 03 CC */	stw r3, 0x3cc(r31)
/* 803DC478 003D93B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DC47C 003D93BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DC480 003D93C0  7C 08 03 A6 */	mtlr r0
/* 803DC484 003D93C4  38 21 00 10 */	addi r1, r1, 0x10
/* 803DC488 003D93C8  4E 80 00 20 */	blr 

.global do_exec__Q33ebi4Save18FSMState_AfterSaveFPQ33ebi4Save4TMgr
do_exec__Q33ebi4Save18FSMState_AfterSaveFPQ33ebi4Save4TMgr:
/* 803DC48C 003D93CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DC490 003D93D0  7C 08 02 A6 */	mflr r0
/* 803DC494 003D93D4  C8 62 18 58 */	lfd f3, lbl_8051FBB8@sda21(r2)
/* 803DC498 003D93D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803DC49C 003D93DC  3C 00 43 30 */	lis r0, 0x4330
/* 803DC4A0 003D93E0  C0 02 18 54 */	lfs f0, lbl_8051FBB4@sda21(r2)
/* 803DC4A4 003D93E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803DC4A8 003D93E8  7C 9F 23 78 */	mr r31, r4
/* 803DC4AC 003D93EC  80 84 03 C8 */	lwz r4, 0x3c8(r4)
/* 803DC4B0 003D93F0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DC4B4 003D93F4  90 81 00 0C */	stw r4, 0xc(r1)
/* 803DC4B8 003D93F8  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 803DC4BC 003D93FC  90 01 00 08 */	stw r0, 8(r1)
/* 803DC4C0 003D9400  C8 41 00 08 */	lfd f2, 8(r1)
/* 803DC4C4 003D9404  EC 42 18 28 */	fsubs f2, f2, f3
/* 803DC4C8 003D9408  EC 22 00 72 */	fmuls f1, f2, f1
/* 803DC4CC 003D940C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803DC4D0 003D9410  40 80 00 1C */	bge .L_803DC4EC
/* 803DC4D4 003D9414  80 7F 03 D0 */	lwz r3, 0x3d0(r31)
/* 803DC4D8 003D9418  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803DC4DC 003D941C  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 803DC4E0 003D9420  41 82 00 0C */	beq .L_803DC4EC
/* 803DC4E4 003D9424  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DC4E8 003D9428  48 00 16 11 */	bl closeMsg__Q33ebi6Screen9TSaveMenuFv
.L_803DC4EC:
/* 803DC4EC 003D942C  80 1F 03 C8 */	lwz r0, 0x3c8(r31)
/* 803DC4F0 003D9430  28 00 00 00 */	cmplwi r0, 0
/* 803DC4F4 003D9434  40 82 00 0C */	bne .L_803DC500
/* 803DC4F8 003D9438  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DC4FC 003D943C  48 00 15 FD */	bl closeMsg__Q33ebi6Screen9TSaveMenuFv
.L_803DC500:
/* 803DC500 003D9440  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DC504 003D9444  48 00 16 85 */	bl isFinishMsg__Q33ebi6Screen9TSaveMenuFv
/* 803DC508 003D9448  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DC50C 003D944C  41 82 00 1C */	beq .L_803DC528
/* 803DC510 003D9450  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DC514 003D9454  38 80 00 00 */	li r4, 0
/* 803DC518 003D9458  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DC51C 003D945C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803DC520 003D9460  7D 89 03 A6 */	mtctr r12
/* 803DC524 003D9464  4E 80 04 21 */	bctrl 
.L_803DC528:
/* 803DC528 003D9468  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DC52C 003D946C  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DC530 003D9470  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803DC534 003D9474  7D 89 03 A6 */	mtctr r12
/* 803DC538 003D9478  4E 80 04 21 */	bctrl 
/* 803DC53C 003D947C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DC540 003D9480  41 82 00 10 */	beq .L_803DC550
/* 803DC544 003D9484  7F E3 FB 78 */	mr r3, r31
/* 803DC548 003D9488  38 80 00 00 */	li r4, 0
/* 803DC54C 003D948C  48 00 07 E1 */	bl goEnd___Q33ebi4Save4TMgrFQ43ebi4Save4TMgr7enumEnd
.L_803DC550:
/* 803DC550 003D9490  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803DC554 003D9494  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803DC558 003D9498  7C 08 03 A6 */	mtlr r0
/* 803DC55C 003D949C  38 21 00 20 */	addi r1, r1, 0x20
/* 803DC560 003D94A0  4E 80 00 20 */	blr 

.global do_init__Q33ebi4Save18FSMState_CardErrorFPQ33ebi4Save4TMgrPQ24Game8StateArg
do_init__Q33ebi4Save18FSMState_CardErrorFPQ33ebi4Save4TMgrPQ24Game8StateArg:
/* 803DC564 003D94A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DC568 003D94A8  7C 08 02 A6 */	mflr r0
/* 803DC56C 003D94AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DC570 003D94B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DC574 003D94B4  7C BF 2B 79 */	or. r31, r5, r5
/* 803DC578 003D94B8  93 C1 00 08 */	stw r30, 8(r1)
/* 803DC57C 003D94BC  7C 9E 23 78 */	mr r30, r4
/* 803DC580 003D94C0  40 82 00 20 */	bne .L_803DC5A0
/* 803DC584 003D94C4  3C 60 80 49 */	lis r3, lbl_80496E3C@ha
/* 803DC588 003D94C8  3C A0 80 49 */	lis r5, lbl_80496E4C@ha
/* 803DC58C 003D94CC  38 63 6E 3C */	addi r3, r3, lbl_80496E3C@l
/* 803DC590 003D94D0  38 80 02 52 */	li r4, 0x252
/* 803DC594 003D94D4  38 A5 6E 4C */	addi r5, r5, lbl_80496E4C@l
/* 803DC598 003D94D8  4C C6 31 82 */	crclr 6
/* 803DC59C 003D94DC  4B C4 E0 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803DC5A0:
/* 803DC5A0 003D94E0  80 9F 00 00 */	lwz r4, 0(r31)
/* 803DC5A4 003D94E4  38 7E 01 00 */	addi r3, r30, 0x100
/* 803DC5A8 003D94E8  4B FF 6A 99 */	bl startSeq__Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr9enumStart
/* 803DC5AC 003D94EC  38 7E 00 18 */	addi r3, r30, 0x18
/* 803DC5B0 003D94F0  48 00 15 85 */	bl noMsg__Q33ebi6Screen9TSaveMenuFv
/* 803DC5B4 003D94F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DC5B8 003D94F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DC5BC 003D94FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DC5C0 003D9500  7C 08 03 A6 */	mtlr r0
/* 803DC5C4 003D9504  38 21 00 10 */	addi r1, r1, 0x10
/* 803DC5C8 003D9508  4E 80 00 20 */	blr 

.global do_exec__Q33ebi4Save18FSMState_CardErrorFPQ33ebi4Save4TMgr
do_exec__Q33ebi4Save18FSMState_CardErrorFPQ33ebi4Save4TMgr:
/* 803DC5CC 003D950C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DC5D0 003D9510  7C 08 02 A6 */	mflr r0
/* 803DC5D4 003D9514  3C A0 80 49 */	lis r5, lbl_80496DD0@ha
/* 803DC5D8 003D9518  90 01 00 24 */	stw r0, 0x24(r1)
/* 803DC5DC 003D951C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803DC5E0 003D9520  3B E5 6D D0 */	addi r31, r5, lbl_80496DD0@l
/* 803DC5E4 003D9524  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803DC5E8 003D9528  7C 9E 23 78 */	mr r30, r4
/* 803DC5EC 003D952C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803DC5F0 003D9530  7C 7D 1B 78 */	mr r29, r3
/* 803DC5F4 003D9534  38 7E 01 00 */	addi r3, r30, 0x100
/* 803DC5F8 003D9538  4B FF 6F DD */	bl isGetEnd__Q33ebi9CardError4TMgrFv
/* 803DC5FC 003D953C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DC600 003D9540  41 82 00 B4 */	beq .L_803DC6B4
/* 803DC604 003D9544  80 1E 03 A0 */	lwz r0, 0x3a0(r30)
/* 803DC608 003D9548  2C 00 00 04 */	cmpwi r0, 4
/* 803DC60C 003D954C  41 82 00 5C */	beq .L_803DC668
/* 803DC610 003D9550  40 80 00 7C */	bge .L_803DC68C
/* 803DC614 003D9554  2C 00 00 03 */	cmpwi r0, 3
/* 803DC618 003D9558  40 80 00 08 */	bge .L_803DC620
/* 803DC61C 003D955C  48 00 00 70 */	b .L_803DC68C
.L_803DC620:
/* 803DC620 003D9560  88 1E 04 7A */	lbz r0, 0x47a(r30)
/* 803DC624 003D9564  28 00 00 00 */	cmplwi r0, 0
/* 803DC628 003D9568  41 82 00 30 */	beq .L_803DC658
/* 803DC62C 003D956C  7F A3 EB 78 */	mr r3, r29
/* 803DC630 003D9570  7F C4 F3 78 */	mr r4, r30
/* 803DC634 003D9574  81 9D 00 00 */	lwz r12, 0(r29)
/* 803DC638 003D9578  38 A0 00 01 */	li r5, 1
/* 803DC63C 003D957C  38 C0 00 00 */	li r6, 0
/* 803DC640 003D9580  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DC644 003D9584  7D 89 03 A6 */	mtctr r12
/* 803DC648 003D9588  4E 80 04 21 */	bctrl 
/* 803DC64C 003D958C  38 7E 01 00 */	addi r3, r30, 0x100
/* 803DC650 003D9590  4B FF 6D 69 */	bl forceQuitSeq__Q33ebi9CardError4TMgrFv
/* 803DC654 003D9594  48 00 00 60 */	b .L_803DC6B4
.L_803DC658:
/* 803DC658 003D9598  7F C3 F3 78 */	mr r3, r30
/* 803DC65C 003D959C  38 80 00 04 */	li r4, 4
/* 803DC660 003D95A0  48 00 06 CD */	bl goEnd___Q33ebi4Save4TMgrFQ43ebi4Save4TMgr7enumEnd
/* 803DC664 003D95A4  48 00 00 50 */	b .L_803DC6B4
.L_803DC668:
/* 803DC668 003D95A8  7F A3 EB 78 */	mr r3, r29
/* 803DC66C 003D95AC  7F C4 F3 78 */	mr r4, r30
/* 803DC670 003D95B0  81 9D 00 00 */	lwz r12, 0(r29)
/* 803DC674 003D95B4  38 A0 00 03 */	li r5, 3
/* 803DC678 003D95B8  38 C0 00 00 */	li r6, 0
/* 803DC67C 003D95BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DC680 003D95C0  7D 89 03 A6 */	mtctr r12
/* 803DC684 003D95C4  4E 80 04 21 */	bctrl 
/* 803DC688 003D95C8  48 00 00 2C */	b .L_803DC6B4
.L_803DC68C:
/* 803DC68C 003D95CC  38 7F 00 6C */	addi r3, r31, 0x6c
/* 803DC690 003D95D0  38 BF 00 88 */	addi r5, r31, 0x88
/* 803DC694 003D95D4  38 80 02 6D */	li r4, 0x26d
/* 803DC698 003D95D8  4C C6 31 82 */	crclr 6
/* 803DC69C 003D95DC  4B C4 DF A5 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803DC6A0 003D95E0  38 7F 00 6C */	addi r3, r31, 0x6c
/* 803DC6A4 003D95E4  38 BF 00 7C */	addi r5, r31, 0x7c
/* 803DC6A8 003D95E8  38 80 02 6E */	li r4, 0x26e
/* 803DC6AC 003D95EC  4C C6 31 82 */	crclr 6
/* 803DC6B0 003D95F0  4B C4 DF 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803DC6B4:
/* 803DC6B4 003D95F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803DC6B8 003D95F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803DC6BC 003D95FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803DC6C0 003D9600  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803DC6C4 003D9604  7C 08 03 A6 */	mtlr r0
/* 803DC6C8 003D9608  38 21 00 20 */	addi r1, r1, 0x20
/* 803DC6CC 003D960C  4E 80 00 20 */	blr 

.global __dt__Q33ebi4Save4TMgrFv
__dt__Q33ebi4Save4TMgrFv:
/* 803DC6D0 003D9610  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DC6D4 003D9614  7C 08 02 A6 */	mflr r0
/* 803DC6D8 003D9618  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DC6DC 003D961C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DC6E0 003D9620  7C 9F 23 78 */	mr r31, r4
/* 803DC6E4 003D9624  93 C1 00 08 */	stw r30, 8(r1)
/* 803DC6E8 003D9628  7C 7E 1B 79 */	or. r30, r3, r3
/* 803DC6EC 003D962C  41 82 01 14 */	beq .L_803DC800
/* 803DC6F0 003D9630  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save4TMgr@ha
/* 803DC6F4 003D9634  38 00 00 00 */	li r0, 0
/* 803DC6F8 003D9638  38 83 8F D4 */	addi r4, r3, __vt__Q33ebi4Save4TMgr@l
/* 803DC6FC 003D963C  38 7E 01 00 */	addi r3, r30, 0x100
/* 803DC700 003D9640  90 9E 00 00 */	stw r4, 0(r30)
/* 803DC704 003D9644  38 80 FF FF */	li r4, -1
/* 803DC708 003D9648  90 0D 9A 58 */	stw r0, msInstance__Q33ebi4Save4TMgr@sda21(r13)
/* 803DC70C 003D964C  48 00 01 11 */	bl __dt__Q33ebi9CardError4TMgrFv
/* 803DC710 003D9650  34 1E 00 18 */	addic. r0, r30, 0x18
/* 803DC714 003D9654  41 82 00 D0 */	beq .L_803DC7E4
/* 803DC718 003D9658  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen9TSaveMenu@ha
/* 803DC71C 003D965C  34 9E 00 BC */	addic. r4, r30, 0xbc
/* 803DC720 003D9660  38 03 92 78 */	addi r0, r3, __vt__Q33ebi6Screen9TSaveMenu@l
/* 803DC724 003D9664  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803DC728 003D9668  41 82 00 5C */	beq .L_803DC784
/* 803DC72C 003D966C  28 04 00 00 */	cmplwi r4, 0
/* 803DC730 003D9670  41 82 00 54 */	beq .L_803DC784
/* 803DC734 003D9674  3C 60 80 4E */	lis r3, __vt__Q25efx2d9T2DCursor@ha
/* 803DC738 003D9678  38 63 76 48 */	addi r3, r3, __vt__Q25efx2d9T2DCursor@l
/* 803DC73C 003D967C  90 7E 00 BC */	stw r3, 0xbc(r30)
/* 803DC740 003D9680  38 03 00 18 */	addi r0, r3, 0x18
/* 803DC744 003D9684  90 1E 00 C4 */	stw r0, 0xc4(r30)
/* 803DC748 003D9688  41 82 00 3C */	beq .L_803DC784
/* 803DC74C 003D968C  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803DC750 003D9690  38 63 73 CC */	addi r3, r3, __vt__Q25efx2d9TChasePos@l
/* 803DC754 003D9694  90 7E 00 BC */	stw r3, 0xbc(r30)
/* 803DC758 003D9698  38 03 00 18 */	addi r0, r3, 0x18
/* 803DC75C 003D969C  90 1E 00 C4 */	stw r0, 0xc4(r30)
/* 803DC760 003D96A0  41 82 00 24 */	beq .L_803DC784
/* 803DC764 003D96A4  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803DC768 003D96A8  38 7E 00 C4 */	addi r3, r30, 0xc4
/* 803DC76C 003D96AC  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803DC770 003D96B0  38 80 00 00 */	li r4, 0
/* 803DC774 003D96B4  90 BE 00 BC */	stw r5, 0xbc(r30)
/* 803DC778 003D96B8  38 05 00 18 */	addi r0, r5, 0x18
/* 803DC77C 003D96BC  90 1E 00 C4 */	stw r0, 0xc4(r30)
/* 803DC780 003D96C0  4B CB 35 1D */	bl __dt__18JPAEmitterCallBackFv
.L_803DC784:
/* 803DC784 003D96C4  34 1E 00 84 */	addic. r0, r30, 0x84
/* 803DC788 003D96C8  41 82 00 5C */	beq .L_803DC7E4
/* 803DC78C 003D96CC  28 00 00 00 */	cmplwi r0, 0
/* 803DC790 003D96D0  41 82 00 54 */	beq .L_803DC7E4
/* 803DC794 003D96D4  3C 60 80 4E */	lis r3, __vt__Q25efx2d9T2DCursor@ha
/* 803DC798 003D96D8  38 63 76 48 */	addi r3, r3, __vt__Q25efx2d9T2DCursor@l
/* 803DC79C 003D96DC  90 7E 00 84 */	stw r3, 0x84(r30)
/* 803DC7A0 003D96E0  38 03 00 18 */	addi r0, r3, 0x18
/* 803DC7A4 003D96E4  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803DC7A8 003D96E8  41 82 00 3C */	beq .L_803DC7E4
/* 803DC7AC 003D96EC  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803DC7B0 003D96F0  38 63 73 CC */	addi r3, r3, __vt__Q25efx2d9TChasePos@l
/* 803DC7B4 003D96F4  90 7E 00 84 */	stw r3, 0x84(r30)
/* 803DC7B8 003D96F8  38 03 00 18 */	addi r0, r3, 0x18
/* 803DC7BC 003D96FC  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803DC7C0 003D9700  41 82 00 24 */	beq .L_803DC7E4
/* 803DC7C4 003D9704  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803DC7C8 003D9708  38 7E 00 8C */	addi r3, r30, 0x8c
/* 803DC7CC 003D970C  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803DC7D0 003D9710  38 80 00 00 */	li r4, 0
/* 803DC7D4 003D9714  90 BE 00 84 */	stw r5, 0x84(r30)
/* 803DC7D8 003D9718  38 05 00 18 */	addi r0, r5, 0x18
/* 803DC7DC 003D971C  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803DC7E0 003D9720  4B CB 34 BD */	bl __dt__18JPAEmitterCallBackFv
.L_803DC7E4:
/* 803DC7E4 003D9724  7F C3 F3 78 */	mr r3, r30
/* 803DC7E8 003D9728  38 80 00 00 */	li r4, 0
/* 803DC7EC 003D972C  4B C4 08 49 */	bl __dt__11JKRDisposerFv
/* 803DC7F0 003D9730  7F E0 07 35 */	extsh. r0, r31
/* 803DC7F4 003D9734  40 81 00 0C */	ble .L_803DC800
/* 803DC7F8 003D9738  7F C3 F3 78 */	mr r3, r30
/* 803DC7FC 003D973C  4B C4 78 B9 */	bl __dl__FPv
.L_803DC800:
/* 803DC800 003D9740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DC804 003D9744  7F C3 F3 78 */	mr r3, r30
/* 803DC808 003D9748  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DC80C 003D974C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DC810 003D9750  7C 08 03 A6 */	mtlr r0
/* 803DC814 003D9754  38 21 00 10 */	addi r1, r1, 0x10
/* 803DC818 003D9758  4E 80 00 20 */	blr 

.global __dt__Q33ebi9CardError4TMgrFv
__dt__Q33ebi9CardError4TMgrFv:
/* 803DC81C 003D975C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DC820 003D9760  7C 08 02 A6 */	mflr r0
/* 803DC824 003D9764  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DC828 003D9768  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DC82C 003D976C  7C 9F 23 78 */	mr r31, r4
/* 803DC830 003D9770  93 C1 00 08 */	stw r30, 8(r1)
/* 803DC834 003D9774  7C 7E 1B 79 */	or. r30, r3, r3
/* 803DC838 003D9778  41 82 00 1C */	beq .L_803DC854
/* 803DC83C 003D977C  38 80 FF FF */	li r4, -1
/* 803DC840 003D9780  4B FF 5E D9 */	bl __dt__Q33ebi6Screen11TMemoryCardFv
/* 803DC844 003D9784  7F E0 07 35 */	extsh. r0, r31
/* 803DC848 003D9788  40 81 00 0C */	ble .L_803DC854
/* 803DC84C 003D978C  7F C3 F3 78 */	mr r3, r30
/* 803DC850 003D9790  4B C4 78 65 */	bl __dl__FPv
.L_803DC854:
/* 803DC854 003D9794  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DC858 003D9798  7F C3 F3 78 */	mr r3, r30
/* 803DC85C 003D979C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DC860 003D97A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DC864 003D97A4  7C 08 03 A6 */	mtlr r0
/* 803DC868 003D97A8  38 21 00 10 */	addi r1, r1, 0x10
/* 803DC86C 003D97AC  4E 80 00 20 */	blr 

.global createInstance__Q33ebi4Save4TMgrFv
createInstance__Q33ebi4Save4TMgrFv:
/* 803DC870 003D97B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DC874 003D97B4  7C 08 02 A6 */	mflr r0
/* 803DC878 003D97B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DC87C 003D97BC  80 0D 9A 58 */	lwz r0, msInstance__Q33ebi4Save4TMgr@sda21(r13)
/* 803DC880 003D97C0  28 00 00 00 */	cmplwi r0, 0
/* 803DC884 003D97C4  40 82 00 20 */	bne .L_803DC8A4
/* 803DC888 003D97C8  38 60 04 9C */	li r3, 0x49c
/* 803DC88C 003D97CC  4B C4 76 19 */	bl __nw__FUl
/* 803DC890 003D97D0  7C 60 1B 79 */	or. r0, r3, r3
/* 803DC894 003D97D4  41 82 00 0C */	beq .L_803DC8A0
/* 803DC898 003D97D8  48 00 00 BD */	bl __ct__Q33ebi4Save4TMgrFv
/* 803DC89C 003D97DC  7C 60 1B 78 */	mr r0, r3
.L_803DC8A0:
/* 803DC8A0 003D97E0  90 0D 9A 58 */	stw r0, msInstance__Q33ebi4Save4TMgr@sda21(r13)
.L_803DC8A4:
/* 803DC8A4 003D97E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DC8A8 003D97E8  80 6D 9A 58 */	lwz r3, msInstance__Q33ebi4Save4TMgr@sda21(r13)
/* 803DC8AC 003D97EC  7C 08 03 A6 */	mtlr r0
/* 803DC8B0 003D97F0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DC8B4 003D97F4  4E 80 00 20 */	blr 

.global onDvdErrorOccured__Q33ebi4Save4TMgrFv
onDvdErrorOccured__Q33ebi4Save4TMgrFv:
/* 803DC8B8 003D97F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DC8BC 003D97FC  7C 08 02 A6 */	mflr r0
/* 803DC8C0 003D9800  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DC8C4 003D9804  80 6D 9A 58 */	lwz r3, msInstance__Q33ebi4Save4TMgr@sda21(r13)
/* 803DC8C8 003D9808  28 03 00 00 */	cmplwi r3, 0
/* 803DC8CC 003D980C  41 82 00 34 */	beq .L_803DC900
/* 803DC8D0 003D9810  48 00 04 11 */	bl isFinish__Q33ebi4Save4TMgrFv
/* 803DC8D4 003D9814  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DC8D8 003D9818  40 82 00 1C */	bne .L_803DC8F4
/* 803DC8DC 003D981C  80 6D 9A 58 */	lwz r3, msInstance__Q33ebi4Save4TMgr@sda21(r13)
/* 803DC8E0 003D9820  38 00 00 01 */	li r0, 1
/* 803DC8E4 003D9824  98 03 04 7B */	stb r0, 0x47b(r3)
/* 803DC8E8 003D9828  80 6D 9A 58 */	lwz r3, msInstance__Q33ebi4Save4TMgr@sda21(r13)
/* 803DC8EC 003D982C  48 00 03 91 */	bl forceQuit__Q33ebi4Save4TMgrFv
/* 803DC8F0 003D9830  48 00 00 10 */	b .L_803DC900
.L_803DC8F4:
/* 803DC8F4 003D9834  80 6D 9A 58 */	lwz r3, msInstance__Q33ebi4Save4TMgr@sda21(r13)
/* 803DC8F8 003D9838  38 00 00 00 */	li r0, 0
/* 803DC8FC 003D983C  98 03 04 7B */	stb r0, 0x47b(r3)
.L_803DC900:
/* 803DC900 003D9840  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DC904 003D9844  7C 08 03 A6 */	mtlr r0
/* 803DC908 003D9848  38 21 00 10 */	addi r1, r1, 0x10
/* 803DC90C 003D984C  4E 80 00 20 */	blr 

.global onDvdErrorRecovered__Q33ebi4Save4TMgrFv
onDvdErrorRecovered__Q33ebi4Save4TMgrFv:
/* 803DC910 003D9850  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DC914 003D9854  7C 08 02 A6 */	mflr r0
/* 803DC918 003D9858  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DC91C 003D985C  80 6D 9A 58 */	lwz r3, msInstance__Q33ebi4Save4TMgr@sda21(r13)
/* 803DC920 003D9860  28 03 00 00 */	cmplwi r3, 0
/* 803DC924 003D9864  41 82 00 20 */	beq .L_803DC944
/* 803DC928 003D9868  88 03 04 7B */	lbz r0, 0x47b(r3)
/* 803DC92C 003D986C  28 00 00 00 */	cmplwi r0, 0
/* 803DC930 003D9870  41 82 00 14 */	beq .L_803DC944
/* 803DC934 003D9874  48 00 02 C9 */	bl start__Q33ebi4Save4TMgrFv
/* 803DC938 003D9878  80 6D 9A 58 */	lwz r3, msInstance__Q33ebi4Save4TMgr@sda21(r13)
/* 803DC93C 003D987C  38 00 00 00 */	li r0, 0
/* 803DC940 003D9880  98 03 04 7B */	stb r0, 0x47b(r3)
.L_803DC944:
/* 803DC944 003D9884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DC948 003D9888  7C 08 03 A6 */	mtlr r0
/* 803DC94C 003D988C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DC950 003D9890  4E 80 00 20 */	blr 

.global __ct__Q33ebi4Save4TMgrFv
__ct__Q33ebi4Save4TMgrFv:
/* 803DC954 003D9894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DC958 003D9898  7C 08 02 A6 */	mflr r0
/* 803DC95C 003D989C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DC960 003D98A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DC964 003D98A4  7C 7F 1B 78 */	mr r31, r3
/* 803DC968 003D98A8  4B C4 06 65 */	bl __ct__11JKRDisposerFv
/* 803DC96C 003D98AC  3C 80 80 4F */	lis r4, __vt__Q33ebi4Save4TMgr@ha
/* 803DC970 003D98B0  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DC974 003D98B4  38 04 8F D4 */	addi r0, r4, __vt__Q33ebi4Save4TMgr@l
/* 803DC978 003D98B8  90 1F 00 00 */	stw r0, 0(r31)
/* 803DC97C 003D98BC  48 00 00 E1 */	bl __ct__Q33ebi6Screen9TSaveMenuFv
/* 803DC980 003D98C0  38 7F 01 00 */	addi r3, r31, 0x100
/* 803DC984 003D98C4  4B FF 5C CD */	bl __ct__Q33ebi9CardError4TMgrFv
/* 803DC988 003D98C8  38 00 00 00 */	li r0, 0
/* 803DC98C 003D98CC  38 7F 03 D4 */	addi r3, r31, 0x3d4
/* 803DC990 003D98D0  90 1F 03 C8 */	stw r0, 0x3c8(r31)
/* 803DC994 003D98D4  90 1F 03 CC */	stw r0, 0x3cc(r31)
/* 803DC998 003D98D8  48 06 5F 51 */	bl __ct__Q34Game10MemoryCard14PlayerFileInfoFv
/* 803DC99C 003D98DC  3C 80 80 4F */	lis r4, "__vt__Q24Game30StateMachine<Q33ebi4Save4TMgr>"@ha
/* 803DC9A0 003D98E0  3C 60 80 4F */	lis r3, __vt__Q33ebi4Save15FSMStateMachine@ha
/* 803DC9A4 003D98E4  38 04 8F BC */	addi r0, r4, "__vt__Q24Game30StateMachine<Q33ebi4Save4TMgr>"@l
/* 803DC9A8 003D98E8  38 A0 FF FF */	li r5, -1
/* 803DC9AC 003D98EC  90 1F 04 7C */	stw r0, 0x47c(r31)
/* 803DC9B0 003D98F0  38 03 92 60 */	addi r0, r3, __vt__Q33ebi4Save15FSMStateMachine@l
/* 803DC9B4 003D98F4  38 7F 04 7C */	addi r3, r31, 0x47c
/* 803DC9B8 003D98F8  7F E4 FB 78 */	mr r4, r31
/* 803DC9BC 003D98FC  90 BF 04 94 */	stw r5, 0x494(r31)
/* 803DC9C0 003D9900  90 1F 04 7C */	stw r0, 0x47c(r31)
/* 803DC9C4 003D9904  81 9F 04 7C */	lwz r12, 0x47c(r31)
/* 803DC9C8 003D9908  81 8C 00 08 */	lwz r12, 8(r12)
/* 803DC9CC 003D990C  7D 89 03 A6 */	mtctr r12
/* 803DC9D0 003D9910  4E 80 04 21 */	bctrl 
/* 803DC9D4 003D9914  38 7F 04 7C */	addi r3, r31, 0x47c
/* 803DC9D8 003D9918  7F E4 FB 78 */	mr r4, r31
/* 803DC9DC 003D991C  81 9F 04 7C */	lwz r12, 0x47c(r31)
/* 803DC9E0 003D9920  38 A0 00 00 */	li r5, 0
/* 803DC9E4 003D9924  38 C0 00 00 */	li r6, 0
/* 803DC9E8 003D9928  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803DC9EC 003D992C  7D 89 03 A6 */	mtctr r12
/* 803DC9F0 003D9930  4E 80 04 21 */	bctrl 
/* 803DC9F4 003D9934  38 80 00 00 */	li r4, 0
/* 803DC9F8 003D9938  38 00 00 01 */	li r0, 1
/* 803DC9FC 003D993C  90 9F 04 70 */	stw r4, 0x470(r31)
/* 803DCA00 003D9940  7F E3 FB 78 */	mr r3, r31
/* 803DCA04 003D9944  98 9F 04 78 */	stb r4, 0x478(r31)
/* 803DCA08 003D9948  98 9F 04 79 */	stb r4, 0x479(r31)
/* 803DCA0C 003D994C  98 1F 04 7A */	stb r0, 0x47a(r31)
/* 803DCA10 003D9950  98 9F 04 7B */	stb r4, 0x47b(r31)
/* 803DCA14 003D9954  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DCA18 003D9958  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCA1C 003D995C  7C 08 03 A6 */	mtlr r0
/* 803DCA20 003D9960  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCA24 003D9964  4E 80 00 20 */	blr 

.global "start__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
"start__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg":
/* 803DCA28 003D9968  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DCA2C 003D996C  7C 08 02 A6 */	mflr r0
/* 803DCA30 003D9970  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DCA34 003D9974  38 00 00 00 */	li r0, 0
/* 803DCA38 003D9978  90 04 04 98 */	stw r0, 0x498(r4)
/* 803DCA3C 003D997C  81 83 00 00 */	lwz r12, 0(r3)
/* 803DCA40 003D9980  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803DCA44 003D9984  7D 89 03 A6 */	mtctr r12
/* 803DCA48 003D9988  4E 80 04 21 */	bctrl 
/* 803DCA4C 003D998C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCA50 003D9990  7C 08 03 A6 */	mtlr r0
/* 803DCA54 003D9994  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCA58 003D9998  4E 80 00 20 */	blr 

.global __ct__Q33ebi6Screen9TSaveMenuFv
__ct__Q33ebi6Screen9TSaveMenuFv:
/* 803DCA5C 003D999C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DCA60 003D99A0  3C 80 80 4F */	lis r4, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
/* 803DCA64 003D99A4  38 04 87 E8 */	addi r0, r4, __vt__Q33ebi6Screen20TScreenBaseInterface@l
/* 803DCA68 003D99A8  3D 40 80 4C */	lis r10, __vt__Q25efx2d7TBaseIF@ha
/* 803DCA6C 003D99AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803DCA70 003D99B0  3D 20 80 4C */	lis r9, __vt__Q25efx2d5TBase@ha
/* 803DCA74 003D99B4  3D 00 80 4A */	lis r8, __vt__18JPAEmitterCallBack@ha
/* 803DCA78 003D99B8  3C 80 80 4F */	lis r4, __vt__Q33ebi6Screen11TScreenBase@ha
/* 803DCA7C 003D99BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803DCA80 003D99C0  39 80 00 00 */	li r12, 0
/* 803DCA84 003D99C4  3C A0 80 4F */	lis r5, __vt__Q33ebi6Screen9TSaveMenu@ha
/* 803DCA88 003D99C8  39 60 00 FF */	li r11, 0xff
/* 803DCA8C 003D99CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803DCA90 003D99D0  39 4A 14 F0 */	addi r10, r10, __vt__Q25efx2d7TBaseIF@l
/* 803DCA94 003D99D4  39 29 14 D8 */	addi r9, r9, __vt__Q25efx2d5TBase@l
/* 803DCA98 003D99D8  39 08 E2 7C */	addi r8, r8, __vt__18JPAEmitterCallBack@l
/* 803DCA9C 003D99DC  90 03 00 00 */	stw r0, 0(r3)
/* 803DCAA0 003D99E0  38 04 8C 90 */	addi r0, r4, __vt__Q33ebi6Screen11TScreenBase@l
/* 803DCAA4 003D99E4  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803DCAA8 003D99E8  C0 62 18 50 */	lfs f3, lbl_8051FBB0@sda21(r2)
/* 803DCAAC 003D99EC  90 03 00 00 */	stw r0, 0(r3)
/* 803DCAB0 003D99F0  38 E4 74 20 */	addi r7, r4, __vt__Q25efx2d8TForever@l
/* 803DCAB4 003D99F4  3C 80 80 4E */	lis r4, __vt__Q25efx2d9TChasePos@ha
/* 803DCAB8 003D99F8  38 05 92 78 */	addi r0, r5, __vt__Q33ebi6Screen9TSaveMenu@l
/* 803DCABC 003D99FC  91 83 00 04 */	stw r12, 4(r3)
/* 803DCAC0 003D9A00  38 C4 73 CC */	addi r6, r4, __vt__Q25efx2d9TChasePos@l
/* 803DCAC4 003D9A04  3C 80 80 4E */	lis r4, __vt__Q25efx2d9T2DCursor@ha
/* 803DCAC8 003D9A08  3B E7 00 18 */	addi r31, r7, 0x18
/* 803DCACC 003D9A0C  91 83 00 08 */	stw r12, 8(r3)
/* 803DCAD0 003D9A10  38 A4 76 48 */	addi r5, r4, __vt__Q25efx2d9T2DCursor@l
/* 803DCAD4 003D9A14  3B C6 00 18 */	addi r30, r6, 0x18
/* 803DCAD8 003D9A18  38 83 00 88 */	addi r4, r3, 0x88
/* 803DCADC 003D9A1C  90 03 00 00 */	stw r0, 0(r3)
/* 803DCAE0 003D9A20  3B A5 00 18 */	addi r29, r5, 0x18
/* 803DCAE4 003D9A24  C0 42 18 60 */	lfs f2, lbl_8051FBC0@sda21(r2)
/* 803DCAE8 003D9A28  38 03 00 C0 */	addi r0, r3, 0xc0
/* 803DCAEC 003D9A2C  99 83 00 14 */	stb r12, 0x14(r3)
/* 803DCAF0 003D9A30  C0 22 18 64 */	lfs f1, lbl_8051FBC4@sda21(r2)
/* 803DCAF4 003D9A34  99 83 00 15 */	stb r12, 0x15(r3)
/* 803DCAF8 003D9A38  99 83 00 16 */	stb r12, 0x16(r3)
/* 803DCAFC 003D9A3C  99 63 00 17 */	stb r11, 0x17(r3)
/* 803DCB00 003D9A40  99 63 00 18 */	stb r11, 0x18(r3)
/* 803DCB04 003D9A44  91 83 00 1C */	stw r12, 0x1c(r3)
/* 803DCB08 003D9A48  91 83 00 20 */	stw r12, 0x20(r3)
/* 803DCB0C 003D9A4C  91 83 00 24 */	stw r12, 0x24(r3)
/* 803DCB10 003D9A50  91 83 00 28 */	stw r12, 0x28(r3)
/* 803DCB14 003D9A54  91 83 00 34 */	stw r12, 0x34(r3)
/* 803DCB18 003D9A58  91 83 00 38 */	stw r12, 0x38(r3)
/* 803DCB1C 003D9A5C  91 43 00 6C */	stw r10, 0x6c(r3)
/* 803DCB20 003D9A60  91 23 00 6C */	stw r9, 0x6c(r3)
/* 803DCB24 003D9A64  99 83 00 70 */	stb r12, 0x70(r3)
/* 803DCB28 003D9A68  99 83 00 71 */	stb r12, 0x71(r3)
/* 803DCB2C 003D9A6C  91 03 00 74 */	stw r8, 0x74(r3)
/* 803DCB30 003D9A70  90 E3 00 6C */	stw r7, 0x6c(r3)
/* 803DCB34 003D9A74  93 E3 00 74 */	stw r31, 0x74(r3)
/* 803DCB38 003D9A78  B1 83 00 78 */	sth r12, 0x78(r3)
/* 803DCB3C 003D9A7C  91 83 00 7C */	stw r12, 0x7c(r3)
/* 803DCB40 003D9A80  90 C3 00 6C */	stw r6, 0x6c(r3)
/* 803DCB44 003D9A84  93 C3 00 74 */	stw r30, 0x74(r3)
/* 803DCB48 003D9A88  90 83 00 80 */	stw r4, 0x80(r3)
/* 803DCB4C 003D9A8C  90 A3 00 6C */	stw r5, 0x6c(r3)
/* 803DCB50 003D9A90  93 A3 00 74 */	stw r29, 0x74(r3)
/* 803DCB54 003D9A94  D0 63 00 84 */	stfs f3, 0x84(r3)
/* 803DCB58 003D9A98  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803DCB5C 003D9A9C  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803DCB60 003D9AA0  EC 02 00 32 */	fmuls f0, f2, f0
/* 803DCB64 003D9AA4  D0 03 00 90 */	stfs f0, 0x90(r3)
/* 803DCB68 003D9AA8  D0 23 00 94 */	stfs f1, 0x94(r3)
/* 803DCB6C 003D9AAC  91 83 00 9C */	stw r12, 0x9c(r3)
/* 803DCB70 003D9AB0  91 83 00 A0 */	stw r12, 0xa0(r3)
/* 803DCB74 003D9AB4  91 43 00 A4 */	stw r10, 0xa4(r3)
/* 803DCB78 003D9AB8  91 23 00 A4 */	stw r9, 0xa4(r3)
/* 803DCB7C 003D9ABC  99 83 00 A8 */	stb r12, 0xa8(r3)
/* 803DCB80 003D9AC0  99 83 00 A9 */	stb r12, 0xa9(r3)
/* 803DCB84 003D9AC4  91 03 00 AC */	stw r8, 0xac(r3)
/* 803DCB88 003D9AC8  90 E3 00 A4 */	stw r7, 0xa4(r3)
/* 803DCB8C 003D9ACC  93 E3 00 AC */	stw r31, 0xac(r3)
/* 803DCB90 003D9AD0  B1 83 00 B0 */	sth r12, 0xb0(r3)
/* 803DCB94 003D9AD4  91 83 00 B4 */	stw r12, 0xb4(r3)
/* 803DCB98 003D9AD8  90 C3 00 A4 */	stw r6, 0xa4(r3)
/* 803DCB9C 003D9ADC  93 C3 00 AC */	stw r30, 0xac(r3)
/* 803DCBA0 003D9AE0  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 803DCBA4 003D9AE4  90 A3 00 A4 */	stw r5, 0xa4(r3)
/* 803DCBA8 003D9AE8  93 A3 00 AC */	stw r29, 0xac(r3)
/* 803DCBAC 003D9AEC  D0 63 00 BC */	stfs f3, 0xbc(r3)
/* 803DCBB0 003D9AF0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803DCBB4 003D9AF4  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803DCBB8 003D9AF8  EC 02 00 32 */	fmuls f0, f2, f0
/* 803DCBBC 003D9AFC  D0 03 00 C8 */	stfs f0, 0xc8(r3)
/* 803DCBC0 003D9B00  D0 23 00 CC */	stfs f1, 0xcc(r3)
/* 803DCBC4 003D9B04  91 83 00 D4 */	stw r12, 0xd4(r3)
/* 803DCBC8 003D9B08  91 83 00 D8 */	stw r12, 0xd8(r3)
/* 803DCBCC 003D9B0C  91 83 00 44 */	stw r12, 0x44(r3)
/* 803DCBD0 003D9B10  91 83 00 48 */	stw r12, 0x48(r3)
/* 803DCBD4 003D9B14  91 83 00 4C */	stw r12, 0x4c(r3)
/* 803DCBD8 003D9B18  91 83 00 50 */	stw r12, 0x50(r3)
/* 803DCBDC 003D9B1C  91 83 00 54 */	stw r12, 0x54(r3)
/* 803DCBE0 003D9B20  91 83 00 58 */	stw r12, 0x58(r3)
/* 803DCBE4 003D9B24  91 83 00 5C */	stw r12, 0x5c(r3)
/* 803DCBE8 003D9B28  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803DCBEC 003D9B2C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803DCBF0 003D9B30  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803DCBF4 003D9B34  38 21 00 20 */	addi r1, r1, 0x20
/* 803DCBF8 003D9B38  4E 80 00 20 */	blr 

.global start__Q33ebi4Save4TMgrFv
start__Q33ebi4Save4TMgrFv:
/* 803DCBFC 003D9B3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DCC00 003D9B40  7C 08 02 A6 */	mflr r0
/* 803DCC04 003D9B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DCC08 003D9B48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DCC0C 003D9B4C  7C 7F 1B 78 */	mr r31, r3
/* 803DCC10 003D9B50  88 03 04 79 */	lbz r0, 0x479(r3)
/* 803DCC14 003D9B54  28 00 00 00 */	cmplwi r0, 0
/* 803DCC18 003D9B58  40 82 00 28 */	bne .L_803DCC40
/* 803DCC1C 003D9B5C  38 7F 04 7C */	addi r3, r31, 0x47c
/* 803DCC20 003D9B60  7F E4 FB 78 */	mr r4, r31
/* 803DCC24 003D9B64  81 9F 04 7C */	lwz r12, 0x47c(r31)
/* 803DCC28 003D9B68  38 A0 00 01 */	li r5, 1
/* 803DCC2C 003D9B6C  38 C0 00 00 */	li r6, 0
/* 803DCC30 003D9B70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803DCC34 003D9B74  7D 89 03 A6 */	mtctr r12
/* 803DCC38 003D9B78  4E 80 04 21 */	bctrl 
/* 803DCC3C 003D9B7C  48 00 00 24 */	b .L_803DCC60
.L_803DCC40:
/* 803DCC40 003D9B80  38 7F 04 7C */	addi r3, r31, 0x47c
/* 803DCC44 003D9B84  7F E4 FB 78 */	mr r4, r31
/* 803DCC48 003D9B88  81 9F 04 7C */	lwz r12, 0x47c(r31)
/* 803DCC4C 003D9B8C  38 A0 00 03 */	li r5, 3
/* 803DCC50 003D9B90  38 C0 00 00 */	li r6, 0
/* 803DCC54 003D9B94  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803DCC58 003D9B98  7D 89 03 A6 */	mtctr r12
/* 803DCC5C 003D9B9C  4E 80 04 21 */	bctrl 
.L_803DCC60:
/* 803DCC60 003D9BA0  7F E3 FB 78 */	mr r3, r31
/* 803DCC64 003D9BA4  48 00 01 31 */	bl update__Q33ebi4Save4TMgrFv
/* 803DCC68 003D9BA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCC6C 003D9BAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DCC70 003D9BB0  7C 08 03 A6 */	mtlr r0
/* 803DCC74 003D9BB4  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCC78 003D9BB8  4E 80 00 20 */	blr 

.global forceQuit__Q33ebi4Save4TMgrFv
forceQuit__Q33ebi4Save4TMgrFv:
/* 803DCC7C 003D9BBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DCC80 003D9BC0  7C 08 02 A6 */	mflr r0
/* 803DCC84 003D9BC4  38 A0 00 00 */	li r5, 0
/* 803DCC88 003D9BC8  38 C0 00 00 */	li r6, 0
/* 803DCC8C 003D9BCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DCC90 003D9BD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DCC94 003D9BD4  7C 7F 1B 78 */	mr r31, r3
/* 803DCC98 003D9BD8  38 7F 04 7C */	addi r3, r31, 0x47c
/* 803DCC9C 003D9BDC  81 9F 04 7C */	lwz r12, 0x47c(r31)
/* 803DCCA0 003D9BE0  7F E4 FB 78 */	mr r4, r31
/* 803DCCA4 003D9BE4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803DCCA8 003D9BE8  7D 89 03 A6 */	mtctr r12
/* 803DCCAC 003D9BEC  4E 80 04 21 */	bctrl 
/* 803DCCB0 003D9BF0  38 7F 01 00 */	addi r3, r31, 0x100
/* 803DCCB4 003D9BF4  4B FF 67 05 */	bl forceQuitSeq__Q33ebi9CardError4TMgrFv
/* 803DCCB8 003D9BF8  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DCCBC 003D9BFC  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DCCC0 003D9C00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803DCCC4 003D9C04  7D 89 03 A6 */	mtctr r12
/* 803DCCC8 003D9C08  4E 80 04 21 */	bctrl 
/* 803DCCCC 003D9C0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCCD0 003D9C10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DCCD4 003D9C14  7C 08 03 A6 */	mtlr r0
/* 803DCCD8 003D9C18  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCCDC 003D9C1C  4E 80 00 20 */	blr 

.global isFinish__Q33ebi4Save4TMgrFv
isFinish__Q33ebi4Save4TMgrFv:
/* 803DCCE0 003D9C20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DCCE4 003D9C24  7C 08 02 A6 */	mflr r0
/* 803DCCE8 003D9C28  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DCCEC 003D9C2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DCCF0 003D9C30  7C 7F 1B 78 */	mr r31, r3
/* 803DCCF4 003D9C34  48 00 01 89 */	bl getStateID__Q33ebi4Save4TMgrFv
/* 803DCCF8 003D9C38  2C 03 00 00 */	cmpwi r3, 0
/* 803DCCFC 003D9C3C  40 82 00 18 */	bne .L_803DCD14
/* 803DCD00 003D9C40  88 1F 04 7B */	lbz r0, 0x47b(r31)
/* 803DCD04 003D9C44  28 00 00 00 */	cmplwi r0, 0
/* 803DCD08 003D9C48  40 82 00 0C */	bne .L_803DCD14
/* 803DCD0C 003D9C4C  38 60 00 01 */	li r3, 1
/* 803DCD10 003D9C50  48 00 00 08 */	b .L_803DCD18
.L_803DCD14:
/* 803DCD14 003D9C54  38 60 00 00 */	li r3, 0
.L_803DCD18:
/* 803DCD18 003D9C58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCD1C 003D9C5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DCD20 003D9C60  7C 08 03 A6 */	mtlr r0
/* 803DCD24 003D9C64  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCD28 003D9C68  4E 80 00 20 */	blr 

.global goEnd___Q33ebi4Save4TMgrFQ43ebi4Save4TMgr7enumEnd
goEnd___Q33ebi4Save4TMgrFQ43ebi4Save4TMgr7enumEnd:
/* 803DCD2C 003D9C6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DCD30 003D9C70  7C 08 02 A6 */	mflr r0
/* 803DCD34 003D9C74  38 A0 00 00 */	li r5, 0
/* 803DCD38 003D9C78  38 C0 00 00 */	li r6, 0
/* 803DCD3C 003D9C7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DCD40 003D9C80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DCD44 003D9C84  7C 7F 1B 78 */	mr r31, r3
/* 803DCD48 003D9C88  90 83 04 74 */	stw r4, 0x474(r3)
/* 803DCD4C 003D9C8C  38 7F 04 7C */	addi r3, r31, 0x47c
/* 803DCD50 003D9C90  7F E4 FB 78 */	mr r4, r31
/* 803DCD54 003D9C94  81 9F 04 7C */	lwz r12, 0x47c(r31)
/* 803DCD58 003D9C98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803DCD5C 003D9C9C  7D 89 03 A6 */	mtctr r12
/* 803DCD60 003D9CA0  4E 80 04 21 */	bctrl 
/* 803DCD64 003D9CA4  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DCD68 003D9CA8  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DCD6C 003D9CAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803DCD70 003D9CB0  7D 89 03 A6 */	mtctr r12
/* 803DCD74 003D9CB4  4E 80 04 21 */	bctrl 
/* 803DCD78 003D9CB8  38 7F 01 00 */	addi r3, r31, 0x100
/* 803DCD7C 003D9CBC  4B FF 66 3D */	bl forceQuitSeq__Q33ebi9CardError4TMgrFv
/* 803DCD80 003D9CC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCD84 003D9CC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DCD88 003D9CC8  7C 08 03 A6 */	mtlr r0
/* 803DCD8C 003D9CCC  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCD90 003D9CD0  4E 80 00 20 */	blr 

.global update__Q33ebi4Save4TMgrFv
update__Q33ebi4Save4TMgrFv:
/* 803DCD94 003D9CD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DCD98 003D9CD8  7C 08 02 A6 */	mflr r0
/* 803DCD9C 003D9CDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DCDA0 003D9CE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DCDA4 003D9CE4  7C 7F 1B 78 */	mr r31, r3
/* 803DCDA8 003D9CE8  38 7F 04 7C */	addi r3, r31, 0x47c
/* 803DCDAC 003D9CEC  81 9F 04 7C */	lwz r12, 0x47c(r31)
/* 803DCDB0 003D9CF0  7F E4 FB 78 */	mr r4, r31
/* 803DCDB4 003D9CF4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803DCDB8 003D9CF8  7D 89 03 A6 */	mtctr r12
/* 803DCDBC 003D9CFC  4E 80 04 21 */	bctrl 
/* 803DCDC0 003D9D00  7F E3 FB 78 */	mr r3, r31
/* 803DCDC4 003D9D04  48 00 00 B9 */	bl getStateID__Q33ebi4Save4TMgrFv
/* 803DCDC8 003D9D08  2C 03 00 00 */	cmpwi r3, 0
/* 803DCDCC 003D9D0C  41 82 00 4C */	beq .L_803DCE18
/* 803DCDD0 003D9D10  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DCDD4 003D9D14  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DCDD8 003D9D18  81 83 00 00 */	lwz r12, 0(r3)
/* 803DCDDC 003D9D1C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803DCDE0 003D9D20  7D 89 03 A6 */	mtctr r12
/* 803DCDE4 003D9D24  4E 80 04 21 */	bctrl 
/* 803DCDE8 003D9D28  38 7F 01 00 */	addi r3, r31, 0x100
/* 803DCDEC 003D9D2C  4B FF 67 41 */	bl update__Q33ebi9CardError4TMgrFv
/* 803DCDF0 003D9D30  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DCDF4 003D9D34  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DCDF8 003D9D38  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803DCDFC 003D9D3C  7D 89 03 A6 */	mtctr r12
/* 803DCE00 003D9D40  4E 80 04 21 */	bctrl 
/* 803DCE04 003D9D44  80 7F 03 C8 */	lwz r3, 0x3c8(r31)
/* 803DCE08 003D9D48  28 03 00 00 */	cmplwi r3, 0
/* 803DCE0C 003D9D4C  41 82 00 0C */	beq .L_803DCE18
/* 803DCE10 003D9D50  38 03 FF FF */	addi r0, r3, -1
/* 803DCE14 003D9D54  90 1F 03 C8 */	stw r0, 0x3c8(r31)
.L_803DCE18:
/* 803DCE18 003D9D58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCE1C 003D9D5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DCE20 003D9D60  7C 08 03 A6 */	mtlr r0
/* 803DCE24 003D9D64  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCE28 003D9D68  4E 80 00 20 */	blr 

.global draw__Q33ebi4Save4TMgrFv
draw__Q33ebi4Save4TMgrFv:
/* 803DCE2C 003D9D6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DCE30 003D9D70  7C 08 02 A6 */	mflr r0
/* 803DCE34 003D9D74  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DCE38 003D9D78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DCE3C 003D9D7C  7C 7F 1B 78 */	mr r31, r3
/* 803DCE40 003D9D80  48 00 00 3D */	bl getStateID__Q33ebi4Save4TMgrFv
/* 803DCE44 003D9D84  2C 03 00 00 */	cmpwi r3, 0
/* 803DCE48 003D9D88  41 82 00 20 */	beq .L_803DCE68
/* 803DCE4C 003D9D8C  38 7F 00 18 */	addi r3, r31, 0x18
/* 803DCE50 003D9D90  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 803DCE54 003D9D94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DCE58 003D9D98  7D 89 03 A6 */	mtctr r12
/* 803DCE5C 003D9D9C  4E 80 04 21 */	bctrl 
/* 803DCE60 003D9DA0  38 7F 01 00 */	addi r3, r31, 0x100
/* 803DCE64 003D9DA4  4B FF 67 35 */	bl draw__Q33ebi9CardError4TMgrFv
.L_803DCE68:
/* 803DCE68 003D9DA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCE6C 003D9DAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DCE70 003D9DB0  7C 08 03 A6 */	mtlr r0
/* 803DCE74 003D9DB4  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCE78 003D9DB8  4E 80 00 20 */	blr 

.global getStateID__Q33ebi4Save4TMgrFv
getStateID__Q33ebi4Save4TMgrFv:
/* 803DCE7C 003D9DBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DCE80 003D9DC0  7C 08 02 A6 */	mflr r0
/* 803DCE84 003D9DC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DCE88 003D9DC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DCE8C 003D9DCC  7C 7F 1B 78 */	mr r31, r3
/* 803DCE90 003D9DD0  80 03 04 98 */	lwz r0, 0x498(r3)
/* 803DCE94 003D9DD4  28 00 00 00 */	cmplwi r0, 0
/* 803DCE98 003D9DD8  40 82 00 20 */	bne .L_803DCEB8
/* 803DCE9C 003D9DDC  3C 60 80 49 */	lis r3, lbl_80496E3C@ha
/* 803DCEA0 003D9DE0  3C A0 80 49 */	lis r5, lbl_80496E4C@ha
/* 803DCEA4 003D9DE4  38 63 6E 3C */	addi r3, r3, lbl_80496E3C@l
/* 803DCEA8 003D9DE8  38 80 03 38 */	li r4, 0x338
/* 803DCEAC 003D9DEC  38 A5 6E 4C */	addi r5, r5, lbl_80496E4C@l
/* 803DCEB0 003D9DF0  4C C6 31 82 */	crclr 6
/* 803DCEB4 003D9DF4  4B C4 D7 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803DCEB8:
/* 803DCEB8 003D9DF8  80 7F 04 98 */	lwz r3, 0x498(r31)
/* 803DCEBC 003D9DFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCEC0 003D9E00  80 63 00 04 */	lwz r3, 4(r3)
/* 803DCEC4 003D9E04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DCEC8 003D9E08  7C 08 03 A6 */	mtlr r0
/* 803DCECC 003D9E0C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCED0 003D9E10  4E 80 00 20 */	blr 

.global "init__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgrPQ24Game8StateArg"
"init__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgrPQ24Game8StateArg":
/* 803DCED4 003D9E14  4E 80 00 20 */	blr 

.global "exec__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
"exec__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr":
/* 803DCED8 003D9E18  4E 80 00 20 */	blr 

.global "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
"cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr":
/* 803DCEDC 003D9E1C  4E 80 00 20 */	blr 

.global "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
"resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr":
/* 803DCEE0 003D9E20  4E 80 00 20 */	blr 

.global "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
"restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr":
/* 803DCEE4 003D9E24  4E 80 00 20 */	blr 

.global "init__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
"init__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr":
/* 803DCEE8 003D9E28  4E 80 00 20 */	blr 

.global "exec__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
"exec__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr":
/* 803DCEEC 003D9E2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DCEF0 003D9E30  7C 08 02 A6 */	mflr r0
/* 803DCEF4 003D9E34  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DCEF8 003D9E38  80 64 04 98 */	lwz r3, 0x498(r4)
/* 803DCEFC 003D9E3C  28 03 00 00 */	cmplwi r3, 0
/* 803DCF00 003D9E40  41 82 00 14 */	beq .L_803DCF14
/* 803DCF04 003D9E44  81 83 00 00 */	lwz r12, 0(r3)
/* 803DCF08 003D9E48  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803DCF0C 003D9E4C  7D 89 03 A6 */	mtctr r12
/* 803DCF10 003D9E50  4E 80 04 21 */	bctrl 
.L_803DCF14:
/* 803DCF14 003D9E54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCF18 003D9E58  7C 08 03 A6 */	mtlr r0
/* 803DCF1C 003D9E5C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCF20 003D9E60  4E 80 00 20 */	blr 

.global "create__Q24Game30StateMachine<Q33ebi4Save4TMgr>Fi"
"create__Q24Game30StateMachine<Q33ebi4Save4TMgr>Fi":
/* 803DCF24 003D9E64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DCF28 003D9E68  7C 08 02 A6 */	mflr r0
/* 803DCF2C 003D9E6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DCF30 003D9E70  38 00 00 00 */	li r0, 0
/* 803DCF34 003D9E74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DCF38 003D9E78  7C 7F 1B 78 */	mr r31, r3
/* 803DCF3C 003D9E7C  90 83 00 0C */	stw r4, 0xc(r3)
/* 803DCF40 003D9E80  90 03 00 08 */	stw r0, 8(r3)
/* 803DCF44 003D9E84  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803DCF48 003D9E88  54 03 10 3A */	slwi r3, r0, 2
/* 803DCF4C 003D9E8C  4B C4 70 61 */	bl __nwa__FUl
/* 803DCF50 003D9E90  90 7F 00 04 */	stw r3, 4(r31)
/* 803DCF54 003D9E94  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803DCF58 003D9E98  54 03 10 3A */	slwi r3, r0, 2
/* 803DCF5C 003D9E9C  4B C4 70 51 */	bl __nwa__FUl
/* 803DCF60 003D9EA0  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803DCF64 003D9EA4  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803DCF68 003D9EA8  54 03 10 3A */	slwi r3, r0, 2
/* 803DCF6C 003D9EAC  4B C4 70 41 */	bl __nwa__FUl
/* 803DCF70 003D9EB0  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803DCF74 003D9EB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DCF78 003D9EB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DCF7C 003D9EBC  7C 08 03 A6 */	mtlr r0
/* 803DCF80 003D9EC0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DCF84 003D9EC4  4E 80 00 20 */	blr 

.global "transit__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
"transit__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg":
/* 803DCF88 003D9EC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DCF8C 003D9ECC  7C 08 02 A6 */	mflr r0
/* 803DCF90 003D9ED0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803DCF94 003D9ED4  54 A0 10 3A */	slwi r0, r5, 2
/* 803DCF98 003D9ED8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803DCF9C 003D9EDC  7C 7B 1B 78 */	mr r27, r3
/* 803DCFA0 003D9EE0  7C 9C 23 78 */	mr r28, r4
/* 803DCFA4 003D9EE4  7C DD 33 78 */	mr r29, r6
/* 803DCFA8 003D9EE8  83 C4 04 98 */	lwz r30, 0x498(r4)
/* 803DCFAC 003D9EEC  80 63 00 14 */	lwz r3, 0x14(r3)
/* 803DCFB0 003D9EF0  28 1E 00 00 */	cmplwi r30, 0
/* 803DCFB4 003D9EF4  7F E3 00 2E */	lwzx r31, r3, r0
/* 803DCFB8 003D9EF8  41 82 00 20 */	beq .L_803DCFD8
/* 803DCFBC 003D9EFC  7F C3 F3 78 */	mr r3, r30
/* 803DCFC0 003D9F00  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DCFC4 003D9F04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803DCFC8 003D9F08  7D 89 03 A6 */	mtctr r12
/* 803DCFCC 003D9F0C  4E 80 04 21 */	bctrl 
/* 803DCFD0 003D9F10  80 1E 00 04 */	lwz r0, 4(r30)
/* 803DCFD4 003D9F14  90 1B 00 18 */	stw r0, 0x18(r27)
.L_803DCFD8:
/* 803DCFD8 003D9F18  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 803DCFDC 003D9F1C  7C 1F 00 00 */	cmpw r31, r0
/* 803DCFE0 003D9F20  41 80 00 08 */	blt .L_803DCFE8
.L_803DCFE4:
/* 803DCFE4 003D9F24  48 00 00 00 */	b .L_803DCFE4
.L_803DCFE8:
/* 803DCFE8 003D9F28  80 7B 00 04 */	lwz r3, 4(r27)
/* 803DCFEC 003D9F2C  57 E0 10 3A */	slwi r0, r31, 2
/* 803DCFF0 003D9F30  7F 84 E3 78 */	mr r4, r28
/* 803DCFF4 003D9F34  7F A5 EB 78 */	mr r5, r29
/* 803DCFF8 003D9F38  7C 63 00 2E */	lwzx r3, r3, r0
/* 803DCFFC 003D9F3C  90 7C 04 98 */	stw r3, 0x498(r28)
/* 803DD000 003D9F40  81 83 00 00 */	lwz r12, 0(r3)
/* 803DD004 003D9F44  81 8C 00 08 */	lwz r12, 8(r12)
/* 803DD008 003D9F48  7D 89 03 A6 */	mtctr r12
/* 803DD00C 003D9F4C  4E 80 04 21 */	bctrl 
/* 803DD010 003D9F50  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803DD014 003D9F54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803DD018 003D9F58  7C 08 03 A6 */	mtlr r0
/* 803DD01C 003D9F5C  38 21 00 20 */	addi r1, r1, 0x20
/* 803DD020 003D9F60  4E 80 00 20 */	blr 

.global "registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>"
"registerState__Q24Game30StateMachine<Q33ebi4Save4TMgr>FPQ24Game26FSMState<Q33ebi4Save4TMgr>":
/* 803DD024 003D9F64  80 C3 00 08 */	lwz r6, 8(r3)
/* 803DD028 003D9F68  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803DD02C 003D9F6C  7C 06 00 00 */	cmpw r6, r0
/* 803DD030 003D9F70  4C 80 00 20 */	bgelr 
/* 803DD034 003D9F74  80 A3 00 04 */	lwz r5, 4(r3)
/* 803DD038 003D9F78  54 C0 10 3A */	slwi r0, r6, 2
/* 803DD03C 003D9F7C  7C 85 01 2E */	stwx r4, r5, r0
/* 803DD040 003D9F80  80 A4 00 04 */	lwz r5, 4(r4)
/* 803DD044 003D9F84  2C 05 00 00 */	cmpwi r5, 0
/* 803DD048 003D9F88  41 80 00 10 */	blt .L_803DD058
/* 803DD04C 003D9F8C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803DD050 003D9F90  7C 05 00 00 */	cmpw r5, r0
/* 803DD054 003D9F94  41 80 00 0C */	blt .L_803DD060
.L_803DD058:
/* 803DD058 003D9F98  38 00 00 00 */	li r0, 0
/* 803DD05C 003D9F9C  48 00 00 08 */	b .L_803DD064
.L_803DD060:
/* 803DD060 003D9FA0  38 00 00 01 */	li r0, 1
.L_803DD064:
/* 803DD064 003D9FA4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803DD068 003D9FA8  4D 82 00 20 */	beqlr 
/* 803DD06C 003D9FAC  90 64 00 08 */	stw r3, 8(r4)
/* 803DD070 003D9FB0  80 03 00 08 */	lwz r0, 8(r3)
/* 803DD074 003D9FB4  80 C4 00 04 */	lwz r6, 4(r4)
/* 803DD078 003D9FB8  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 803DD07C 003D9FBC  54 00 10 3A */	slwi r0, r0, 2
/* 803DD080 003D9FC0  7C C5 01 2E */	stwx r6, r5, r0
/* 803DD084 003D9FC4  80 04 00 04 */	lwz r0, 4(r4)
/* 803DD088 003D9FC8  80 A3 00 08 */	lwz r5, 8(r3)
/* 803DD08C 003D9FCC  80 83 00 14 */	lwz r4, 0x14(r3)
/* 803DD090 003D9FD0  54 00 10 3A */	slwi r0, r0, 2
/* 803DD094 003D9FD4  7C A4 01 2E */	stwx r5, r4, r0
/* 803DD098 003D9FD8  80 83 00 08 */	lwz r4, 8(r3)
/* 803DD09C 003D9FDC  38 04 00 01 */	addi r0, r4, 1
/* 803DD0A0 003D9FE0  90 03 00 08 */	stw r0, 8(r3)
/* 803DD0A4 003D9FE4  4E 80 00 20 */	blr 
