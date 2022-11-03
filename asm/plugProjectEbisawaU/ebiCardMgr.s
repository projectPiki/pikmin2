.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80496698:
	.asciz "ebiCardMgr"
.balign 4
lbl_804966A4:
	.asciz "EmptyScreen"
.balign 4
lbl_804966B0:
	.asciz "W00_NoCard"
.balign 4
lbl_804966BC:
	.asciz "W01_IOError"
.balign 4
lbl_804966C8:
	.asciz "W02_WrongDevice"
.balign 4
lbl_804966D8:
	.asciz "W03_WrongSector"
.balign 4
lbl_804966E8:
	.asciz "W04_OverCapacity"
.balign 4
lbl_804966FC:
	.asciz "W05_InitCardOnIPL"
.balign 4
lbl_80496710:
	.asciz "W06_CardNotUsable"
.balign 4
lbl_80496724:
	.asciz "W07_NoFileForSave"
.balign 4
lbl_80496738:
	.asciz "W08_FinishFormat"
.balign 4
lbl_8049674C:
	.asciz "W09_FinishCreateNewFile"
.balign 4
lbl_80496764:
	.asciz "W10_SerialNoError"
.balign 4
lbl_80496778:
	.asciz "WF0_FailToFormat_NoCard"
.balign 4
lbl_80496790:
	.asciz "WF1_FailToFormat_IOError"
.balign 4
lbl_804967AC:
	.asciz "WF2_FailToCreateNewFile_NoCard"
.balign 4
lbl_804967CC:
	.asciz "WF3_FailToCreateNewFile_IOError"
.balign 4
lbl_804967EC:
	.asciz "WF4_FailToSave_NoCard"
.balign 4
lbl_80496804:
	.asciz "WF5_FailToSave_IOError"
.balign 4
lbl_8049681C:
	.asciz "Q00_DataBrokenAndDoYouFormat"
.balign 4
lbl_8049683C:
	.asciz "FSMState_Q01_DoYouOpenIPL"
.balign 4
lbl_80496858:
	.asciz "Q02_DoYouFormat"
.balign 4
lbl_80496868:
	.asciz "Q03_DoYouCreateNewFile"
.balign 4
lbl_80496880:
	.asciz "Q04_DoYouStartGameWithoutSave"
.balign 4
lbl_804968A0:
	.asciz "Q05_GameCantSave"
.balign 4
lbl_804968B4:
	.asciz "WN0_NowFormat"
.balign 4
lbl_804968C4:
	.asciz "WN1_NowCreateNewFile"
.balign 4
lbl_804968DC:
	.asciz "ebiCardMgr.cpp"
.balign 4
lbl_804968EC:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
lbl_804E8AA0:
	.4byte .L_803D2000
	.4byte .L_803D20E0
	.4byte .L_803D1FE4
	.4byte .L_803D2070
	.4byte .L_803D208C
	.4byte .L_803D201C
	.4byte .L_803D2038
	.4byte .L_803D2054
	.4byte .L_803D20A8
	.4byte .L_803D20C4
	.4byte .L_803D2118
	.4byte .L_803D2118
	.4byte .L_803D2118
	.4byte .L_803D2118
	.4byte .L_803D20FC
lbl_804E8ADC:
	.4byte .L_803D30B8
	.4byte .L_803D30E4
	.4byte .L_803D3110
	.4byte .L_803D313C
	.4byte .L_803D3168
	.4byte .L_803D3194
	.4byte .L_803D31C0
	.4byte .L_803D31EC
	.4byte .L_803D3218
	.4byte .L_803D3244
	.4byte .L_803D3270
	.4byte .L_803D329C
	.4byte .L_803D32C8
	.4byte .L_803D32F4
	.4byte .L_803D3320
	.4byte .L_803D334C
	.4byte .L_803D3378
.global "__vt__Q24Game35StateMachine<Q33ebi9CardError4TMgr>"
"__vt__Q24Game35StateMachine<Q33ebi9CardError4TMgr>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "start__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "transit__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
.global __vt__Q33ebi9CardError15FSMState_NoCard
__vt__Q33ebi9CardError15FSMState_NoCard:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
	.4byte "cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi9CardError15FSMState_NoCardFPQ33ebi9CardError4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi9CardError15FSMState_NoCardFPQ33ebi9CardError4TMgr
	.4byte 0
	.4byte 0
	.4byte 0
.global __vt__Q33ebi9CardError20FSMState_CardRequest
__vt__Q33ebi9CardError20FSMState_CardRequest:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
	.4byte "cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte do_transitCardNoCard__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardIOError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardWrongDevice__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardWrongSector__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardBroken__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardEncoding__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardNoFileSpace__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardNoFileEntry__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardFileOpenError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardSerialNoError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError17FSMState_Question
__vt__Q33ebi9CardError17FSMState_Question:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
	.4byte "cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi9CardError17FSMState_QuestionFPQ33ebi9CardError4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi9CardError17FSMState_QuestionFPQ33ebi9CardError4TMgr
	.4byte 0
	.4byte 0
	.4byte 0
.global __vt__Q33ebi9CardError16FSMState_Warning
__vt__Q33ebi9CardError16FSMState_Warning:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
	.4byte "cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi9CardError16FSMState_WarningFPQ33ebi9CardError4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi9CardError16FSMState_WarningFPQ33ebi9CardError4TMgr
	.4byte 0
	.4byte 0
.global __vt__Q33ebi9CardError8FSMState
__vt__Q33ebi9CardError8FSMState:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
	.4byte "cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
.global "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"
"__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgrPQ24Game8StateArg"
	.4byte "exec__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
.global __vt__Q33ebi9CardError15FSMStateMachine
__vt__Q33ebi9CardError15FSMStateMachine:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi9CardError15FSMStateMachineFPQ33ebi9CardError4TMgr
	.4byte "start__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
	.4byte "transit__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051FAC0:
	.asciz "Standby"
.balign 4
lbl_8051FAC8:
	.float 0.0
lbl_8051FACC:
	.float 3.0
lbl_8051FAD0:
	.float 0.03333
lbl_8051FAD4:
	.float 1.0
lbl_8051FAD8:
	.float 5.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q33ebi9CardError15FSMStateMachineFPQ33ebi9CardError4TMgr
init__Q33ebi9CardError15FSMStateMachineFPQ33ebi9CardError4TMgr:
/* 803D1104 003CE044  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D1108 003CE048  7C 08 02 A6 */	mflr r0
/* 803D110C 003CE04C  3C 80 80 49 */	lis r4, lbl_80496698@ha
/* 803D1110 003CE050  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D1114 003CE054  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D1118 003CE058  7C 7F 1B 78 */	mr r31, r3
/* 803D111C 003CE05C  93 C1 00 08 */	stw r30, 8(r1)
/* 803D1120 003CE060  3B C4 66 98 */	addi r30, r4, lbl_80496698@l
/* 803D1124 003CE064  38 80 00 1B */	li r4, 0x1b
/* 803D1128 003CE068  48 00 25 A5 */	bl "create__Q24Game35StateMachine<Q33ebi9CardError4TMgr>Fi"
/* 803D112C 003CE06C  38 60 00 10 */	li r3, 0x10
/* 803D1130 003CE070  4B C5 2D 75 */	bl __nw__FUl
/* 803D1134 003CE074  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1138 003CE078  41 82 00 30 */	beq .L_803D1168
/* 803D113C 003CE07C  3C A0 80 4F */	lis r5, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D1140 003CE080  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1144 003CE084  38 05 8C 54 */	addi r0, r5, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1148 003CE088  38 A0 00 00 */	li r5, 0
/* 803D114C 003CE08C  90 04 00 00 */	stw r0, 0(r4)
/* 803D1150 003CE090  38 63 8C 2C */	addi r3, r3, __vt__Q33ebi9CardError8FSMState@l
/* 803D1154 003CE094  38 02 17 60 */	addi r0, r2, lbl_8051FAC0@sda21
/* 803D1158 003CE098  90 A4 00 04 */	stw r5, 4(r4)
/* 803D115C 003CE09C  90 A4 00 08 */	stw r5, 8(r4)
/* 803D1160 003CE0A0  90 64 00 00 */	stw r3, 0(r4)
/* 803D1164 003CE0A4  90 04 00 0C */	stw r0, 0xc(r4)
.L_803D1168:
/* 803D1168 003CE0A8  7F E3 FB 78 */	mr r3, r31
/* 803D116C 003CE0AC  48 00 26 61 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1170 003CE0B0  38 60 00 10 */	li r3, 0x10
/* 803D1174 003CE0B4  4B C5 2D 31 */	bl __nw__FUl
/* 803D1178 003CE0B8  7C 64 1B 79 */	or. r4, r3, r3
/* 803D117C 003CE0BC  41 82 00 34 */	beq .L_803D11B0
/* 803D1180 003CE0C0  3C A0 80 4F */	lis r5, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D1184 003CE0C4  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1188 003CE0C8  38 05 8C 54 */	addi r0, r5, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D118C 003CE0CC  38 C0 00 01 */	li r6, 1
/* 803D1190 003CE0D0  90 04 00 00 */	stw r0, 0(r4)
/* 803D1194 003CE0D4  38 A0 00 00 */	li r5, 0
/* 803D1198 003CE0D8  38 63 8C 2C */	addi r3, r3, __vt__Q33ebi9CardError8FSMState@l
/* 803D119C 003CE0DC  38 1E 00 0C */	addi r0, r30, 0xc
/* 803D11A0 003CE0E0  90 C4 00 04 */	stw r6, 4(r4)
/* 803D11A4 003CE0E4  90 A4 00 08 */	stw r5, 8(r4)
/* 803D11A8 003CE0E8  90 64 00 00 */	stw r3, 0(r4)
/* 803D11AC 003CE0EC  90 04 00 0C */	stw r0, 0xc(r4)
.L_803D11B0:
/* 803D11B0 003CE0F0  7F E3 FB 78 */	mr r3, r31
/* 803D11B4 003CE0F4  48 00 26 19 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D11B8 003CE0F8  38 60 00 14 */	li r3, 0x14
/* 803D11BC 003CE0FC  4B C5 2C E9 */	bl __nw__FUl
/* 803D11C0 003CE100  7C 64 1B 79 */	or. r4, r3, r3
/* 803D11C4 003CE104  41 82 00 4C */	beq .L_803D1210
/* 803D11C8 003CE108  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D11CC 003CE10C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D11D0 003CE110  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D11D4 003CE114  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError15FSMState_NoCard@ha
/* 803D11D8 003CE118  90 04 00 00 */	stw r0, 0(r4)
/* 803D11DC 003CE11C  38 E0 00 02 */	li r7, 2
/* 803D11E0 003CE120  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError19FSMState_W00_NoCard@ha
/* 803D11E4 003CE124  38 00 00 00 */	li r0, 0
/* 803D11E8 003CE128  90 E4 00 04 */	stw r7, 4(r4)
/* 803D11EC 003CE12C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D11F0 003CE130  38 DE 00 18 */	addi r6, r30, 0x18
/* 803D11F4 003CE134  38 A5 8B 38 */	addi r5, r5, __vt__Q33ebi9CardError15FSMState_NoCard@l
/* 803D11F8 003CE138  90 04 00 08 */	stw r0, 8(r4)
/* 803D11FC 003CE13C  38 03 9D B8 */	addi r0, r3, __vt__Q33ebi9CardError19FSMState_W00_NoCard@l
/* 803D1200 003CE140  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1204 003CE144  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1208 003CE148  90 A4 00 00 */	stw r5, 0(r4)
/* 803D120C 003CE14C  90 04 00 00 */	stw r0, 0(r4)
.L_803D1210:
/* 803D1210 003CE150  7F E3 FB 78 */	mr r3, r31
/* 803D1214 003CE154  48 00 25 B9 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1218 003CE158  38 60 00 14 */	li r3, 0x14
/* 803D121C 003CE15C  4B C5 2C 89 */	bl __nw__FUl
/* 803D1220 003CE160  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1224 003CE164  41 82 00 4C */	beq .L_803D1270
/* 803D1228 003CE168  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D122C 003CE16C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1230 003CE170  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1234 003CE174  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D1238 003CE178  90 04 00 00 */	stw r0, 0(r4)
/* 803D123C 003CE17C  38 E0 00 03 */	li r7, 3
/* 803D1240 003CE180  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError20FSMState_W01_IOError@ha
/* 803D1244 003CE184  38 00 00 00 */	li r0, 0
/* 803D1248 003CE188  90 E4 00 04 */	stw r7, 4(r4)
/* 803D124C 003CE18C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1250 003CE190  38 DE 00 24 */	addi r6, r30, 0x24
/* 803D1254 003CE194  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D1258 003CE198  90 04 00 08 */	stw r0, 8(r4)
/* 803D125C 003CE19C  38 03 9D 88 */	addi r0, r3, __vt__Q33ebi9CardError20FSMState_W01_IOError@l
/* 803D1260 003CE1A0  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1264 003CE1A4  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1268 003CE1A8  90 A4 00 00 */	stw r5, 0(r4)
/* 803D126C 003CE1AC  90 04 00 00 */	stw r0, 0(r4)
.L_803D1270:
/* 803D1270 003CE1B0  7F E3 FB 78 */	mr r3, r31
/* 803D1274 003CE1B4  48 00 25 59 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1278 003CE1B8  38 60 00 14 */	li r3, 0x14
/* 803D127C 003CE1BC  4B C5 2C 29 */	bl __nw__FUl
/* 803D1280 003CE1C0  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1284 003CE1C4  41 82 00 4C */	beq .L_803D12D0
/* 803D1288 003CE1C8  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D128C 003CE1CC  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1290 003CE1D0  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1294 003CE1D4  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D1298 003CE1D8  90 04 00 00 */	stw r0, 0(r4)
/* 803D129C 003CE1DC  38 E0 00 04 */	li r7, 4
/* 803D12A0 003CE1E0  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError24FSMState_W02_WrongDevice@ha
/* 803D12A4 003CE1E4  38 00 00 00 */	li r0, 0
/* 803D12A8 003CE1E8  90 E4 00 04 */	stw r7, 4(r4)
/* 803D12AC 003CE1EC  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D12B0 003CE1F0  38 DE 00 30 */	addi r6, r30, 0x30
/* 803D12B4 003CE1F4  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D12B8 003CE1F8  90 04 00 08 */	stw r0, 8(r4)
/* 803D12BC 003CE1FC  38 03 9D 58 */	addi r0, r3, __vt__Q33ebi9CardError24FSMState_W02_WrongDevice@l
/* 803D12C0 003CE200  90 E4 00 00 */	stw r7, 0(r4)
/* 803D12C4 003CE204  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D12C8 003CE208  90 A4 00 00 */	stw r5, 0(r4)
/* 803D12CC 003CE20C  90 04 00 00 */	stw r0, 0(r4)
.L_803D12D0:
/* 803D12D0 003CE210  7F E3 FB 78 */	mr r3, r31
/* 803D12D4 003CE214  48 00 24 F9 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D12D8 003CE218  38 60 00 14 */	li r3, 0x14
/* 803D12DC 003CE21C  4B C5 2B C9 */	bl __nw__FUl
/* 803D12E0 003CE220  7C 64 1B 79 */	or. r4, r3, r3
/* 803D12E4 003CE224  41 82 00 4C */	beq .L_803D1330
/* 803D12E8 003CE228  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D12EC 003CE22C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D12F0 003CE230  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D12F4 003CE234  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D12F8 003CE238  90 04 00 00 */	stw r0, 0(r4)
/* 803D12FC 003CE23C  38 E0 00 05 */	li r7, 5
/* 803D1300 003CE240  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError24FSMState_W03_WrongSector@ha
/* 803D1304 003CE244  38 00 00 00 */	li r0, 0
/* 803D1308 003CE248  90 E4 00 04 */	stw r7, 4(r4)
/* 803D130C 003CE24C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1310 003CE250  38 DE 00 40 */	addi r6, r30, 0x40
/* 803D1314 003CE254  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D1318 003CE258  90 04 00 08 */	stw r0, 8(r4)
/* 803D131C 003CE25C  38 03 9D 28 */	addi r0, r3, __vt__Q33ebi9CardError24FSMState_W03_WrongSector@l
/* 803D1320 003CE260  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1324 003CE264  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1328 003CE268  90 A4 00 00 */	stw r5, 0(r4)
/* 803D132C 003CE26C  90 04 00 00 */	stw r0, 0(r4)
.L_803D1330:
/* 803D1330 003CE270  7F E3 FB 78 */	mr r3, r31
/* 803D1334 003CE274  48 00 24 99 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1338 003CE278  38 60 00 14 */	li r3, 0x14
/* 803D133C 003CE27C  4B C5 2B 69 */	bl __nw__FUl
/* 803D1340 003CE280  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1344 003CE284  41 82 00 4C */	beq .L_803D1390
/* 803D1348 003CE288  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D134C 003CE28C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1350 003CE290  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1354 003CE294  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D1358 003CE298  90 04 00 00 */	stw r0, 0(r4)
/* 803D135C 003CE29C  38 E0 00 06 */	li r7, 6
/* 803D1360 003CE2A0  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError25FSMState_W04_OverCapacity@ha
/* 803D1364 003CE2A4  38 00 00 00 */	li r0, 0
/* 803D1368 003CE2A8  90 E4 00 04 */	stw r7, 4(r4)
/* 803D136C 003CE2AC  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1370 003CE2B0  38 DE 00 50 */	addi r6, r30, 0x50
/* 803D1374 003CE2B4  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D1378 003CE2B8  90 04 00 08 */	stw r0, 8(r4)
/* 803D137C 003CE2BC  38 03 9C F8 */	addi r0, r3, __vt__Q33ebi9CardError25FSMState_W04_OverCapacity@l
/* 803D1380 003CE2C0  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1384 003CE2C4  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1388 003CE2C8  90 A4 00 00 */	stw r5, 0(r4)
/* 803D138C 003CE2CC  90 04 00 00 */	stw r0, 0(r4)
.L_803D1390:
/* 803D1390 003CE2D0  7F E3 FB 78 */	mr r3, r31
/* 803D1394 003CE2D4  48 00 24 39 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1398 003CE2D8  38 60 00 14 */	li r3, 0x14
/* 803D139C 003CE2DC  4B C5 2B 09 */	bl __nw__FUl
/* 803D13A0 003CE2E0  7C 64 1B 79 */	or. r4, r3, r3
/* 803D13A4 003CE2E4  41 82 00 4C */	beq .L_803D13F0
/* 803D13A8 003CE2E8  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D13AC 003CE2EC  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D13B0 003CE2F0  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D13B4 003CE2F4  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D13B8 003CE2F8  90 04 00 00 */	stw r0, 0(r4)
/* 803D13BC 003CE2FC  38 E0 00 07 */	li r7, 7
/* 803D13C0 003CE300  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError26FSMState_W05_InitCardOnIPL@ha
/* 803D13C4 003CE304  38 00 00 00 */	li r0, 0
/* 803D13C8 003CE308  90 E4 00 04 */	stw r7, 4(r4)
/* 803D13CC 003CE30C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D13D0 003CE310  38 DE 00 64 */	addi r6, r30, 0x64
/* 803D13D4 003CE314  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D13D8 003CE318  90 04 00 08 */	stw r0, 8(r4)
/* 803D13DC 003CE31C  38 03 9C C8 */	addi r0, r3, __vt__Q33ebi9CardError26FSMState_W05_InitCardOnIPL@l
/* 803D13E0 003CE320  90 E4 00 00 */	stw r7, 0(r4)
/* 803D13E4 003CE324  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D13E8 003CE328  90 A4 00 00 */	stw r5, 0(r4)
/* 803D13EC 003CE32C  90 04 00 00 */	stw r0, 0(r4)
.L_803D13F0:
/* 803D13F0 003CE330  7F E3 FB 78 */	mr r3, r31
/* 803D13F4 003CE334  48 00 23 D9 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D13F8 003CE338  38 60 00 14 */	li r3, 0x14
/* 803D13FC 003CE33C  4B C5 2A A9 */	bl __nw__FUl
/* 803D1400 003CE340  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1404 003CE344  41 82 00 4C */	beq .L_803D1450
/* 803D1408 003CE348  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D140C 003CE34C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1410 003CE350  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1414 003CE354  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D1418 003CE358  90 04 00 00 */	stw r0, 0(r4)
/* 803D141C 003CE35C  38 E0 00 08 */	li r7, 8
/* 803D1420 003CE360  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError26FSMState_W06_CardNotUsable@ha
/* 803D1424 003CE364  38 00 00 00 */	li r0, 0
/* 803D1428 003CE368  90 E4 00 04 */	stw r7, 4(r4)
/* 803D142C 003CE36C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1430 003CE370  38 DE 00 78 */	addi r6, r30, 0x78
/* 803D1434 003CE374  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D1438 003CE378  90 04 00 08 */	stw r0, 8(r4)
/* 803D143C 003CE37C  38 03 9C 98 */	addi r0, r3, __vt__Q33ebi9CardError26FSMState_W06_CardNotUsable@l
/* 803D1440 003CE380  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1444 003CE384  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1448 003CE388  90 A4 00 00 */	stw r5, 0(r4)
/* 803D144C 003CE38C  90 04 00 00 */	stw r0, 0(r4)
.L_803D1450:
/* 803D1450 003CE390  7F E3 FB 78 */	mr r3, r31
/* 803D1454 003CE394  48 00 23 79 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1458 003CE398  38 60 00 14 */	li r3, 0x14
/* 803D145C 003CE39C  4B C5 2A 49 */	bl __nw__FUl
/* 803D1460 003CE3A0  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1464 003CE3A4  41 82 00 4C */	beq .L_803D14B0
/* 803D1468 003CE3A8  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D146C 003CE3AC  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1470 003CE3B0  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1474 003CE3B4  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D1478 003CE3B8  90 04 00 00 */	stw r0, 0(r4)
/* 803D147C 003CE3BC  38 E0 00 09 */	li r7, 9
/* 803D1480 003CE3C0  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError26FSMState_W07_NoFileForSave@ha
/* 803D1484 003CE3C4  38 00 00 00 */	li r0, 0
/* 803D1488 003CE3C8  90 E4 00 04 */	stw r7, 4(r4)
/* 803D148C 003CE3CC  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1490 003CE3D0  38 DE 00 8C */	addi r6, r30, 0x8c
/* 803D1494 003CE3D4  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D1498 003CE3D8  90 04 00 08 */	stw r0, 8(r4)
/* 803D149C 003CE3DC  38 03 9C 68 */	addi r0, r3, __vt__Q33ebi9CardError26FSMState_W07_NoFileForSave@l
/* 803D14A0 003CE3E0  90 E4 00 00 */	stw r7, 0(r4)
/* 803D14A4 003CE3E4  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D14A8 003CE3E8  90 A4 00 00 */	stw r5, 0(r4)
/* 803D14AC 003CE3EC  90 04 00 00 */	stw r0, 0(r4)
.L_803D14B0:
/* 803D14B0 003CE3F0  7F E3 FB 78 */	mr r3, r31
/* 803D14B4 003CE3F4  48 00 23 19 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D14B8 003CE3F8  38 60 00 14 */	li r3, 0x14
/* 803D14BC 003CE3FC  4B C5 29 E9 */	bl __nw__FUl
/* 803D14C0 003CE400  7C 64 1B 79 */	or. r4, r3, r3
/* 803D14C4 003CE404  41 82 00 4C */	beq .L_803D1510
/* 803D14C8 003CE408  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D14CC 003CE40C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D14D0 003CE410  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D14D4 003CE414  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D14D8 003CE418  90 04 00 00 */	stw r0, 0(r4)
/* 803D14DC 003CE41C  38 E0 00 0A */	li r7, 0xa
/* 803D14E0 003CE420  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError25FSMState_W08_FinishFormat@ha
/* 803D14E4 003CE424  38 00 00 00 */	li r0, 0
/* 803D14E8 003CE428  90 E4 00 04 */	stw r7, 4(r4)
/* 803D14EC 003CE42C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D14F0 003CE430  38 DE 00 A0 */	addi r6, r30, 0xa0
/* 803D14F4 003CE434  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D14F8 003CE438  90 04 00 08 */	stw r0, 8(r4)
/* 803D14FC 003CE43C  38 03 9C 38 */	addi r0, r3, __vt__Q33ebi9CardError25FSMState_W08_FinishFormat@l
/* 803D1500 003CE440  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1504 003CE444  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1508 003CE448  90 A4 00 00 */	stw r5, 0(r4)
/* 803D150C 003CE44C  90 04 00 00 */	stw r0, 0(r4)
.L_803D1510:
/* 803D1510 003CE450  7F E3 FB 78 */	mr r3, r31
/* 803D1514 003CE454  48 00 22 B9 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1518 003CE458  38 60 00 14 */	li r3, 0x14
/* 803D151C 003CE45C  4B C5 29 89 */	bl __nw__FUl
/* 803D1520 003CE460  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1524 003CE464  41 82 00 4C */	beq .L_803D1570
/* 803D1528 003CE468  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D152C 003CE46C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1530 003CE470  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1534 003CE474  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D1538 003CE478  90 04 00 00 */	stw r0, 0(r4)
/* 803D153C 003CE47C  38 E0 00 0B */	li r7, 0xb
/* 803D1540 003CE480  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError32FSMState_W09_FinishCreateNewFile@ha
/* 803D1544 003CE484  38 00 00 00 */	li r0, 0
/* 803D1548 003CE488  90 E4 00 04 */	stw r7, 4(r4)
/* 803D154C 003CE48C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1550 003CE490  38 DE 00 B4 */	addi r6, r30, 0xb4
/* 803D1554 003CE494  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D1558 003CE498  90 04 00 08 */	stw r0, 8(r4)
/* 803D155C 003CE49C  38 03 9C 08 */	addi r0, r3, __vt__Q33ebi9CardError32FSMState_W09_FinishCreateNewFile@l
/* 803D1560 003CE4A0  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1564 003CE4A4  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1568 003CE4A8  90 A4 00 00 */	stw r5, 0(r4)
/* 803D156C 003CE4AC  90 04 00 00 */	stw r0, 0(r4)
.L_803D1570:
/* 803D1570 003CE4B0  7F E3 FB 78 */	mr r3, r31
/* 803D1574 003CE4B4  48 00 22 59 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1578 003CE4B8  38 60 00 14 */	li r3, 0x14
/* 803D157C 003CE4BC  4B C5 29 29 */	bl __nw__FUl
/* 803D1580 003CE4C0  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1584 003CE4C4  41 82 00 4C */	beq .L_803D15D0
/* 803D1588 003CE4C8  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D158C 003CE4CC  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1590 003CE4D0  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1594 003CE4D4  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D1598 003CE4D8  90 04 00 00 */	stw r0, 0(r4)
/* 803D159C 003CE4DC  38 E0 00 0C */	li r7, 0xc
/* 803D15A0 003CE4E0  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError26FSMState_W10_SerialNoError@ha
/* 803D15A4 003CE4E4  38 00 00 00 */	li r0, 0
/* 803D15A8 003CE4E8  90 E4 00 04 */	stw r7, 4(r4)
/* 803D15AC 003CE4EC  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D15B0 003CE4F0  38 DE 00 CC */	addi r6, r30, 0xcc
/* 803D15B4 003CE4F4  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D15B8 003CE4F8  90 04 00 08 */	stw r0, 8(r4)
/* 803D15BC 003CE4FC  38 03 9B D8 */	addi r0, r3, __vt__Q33ebi9CardError26FSMState_W10_SerialNoError@l
/* 803D15C0 003CE500  90 E4 00 00 */	stw r7, 0(r4)
/* 803D15C4 003CE504  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D15C8 003CE508  90 A4 00 00 */	stw r5, 0(r4)
/* 803D15CC 003CE50C  90 04 00 00 */	stw r0, 0(r4)
.L_803D15D0:
/* 803D15D0 003CE510  7F E3 FB 78 */	mr r3, r31
/* 803D15D4 003CE514  48 00 21 F9 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D15D8 003CE518  38 60 00 14 */	li r3, 0x14
/* 803D15DC 003CE51C  4B C5 28 C9 */	bl __nw__FUl
/* 803D15E0 003CE520  7C 64 1B 79 */	or. r4, r3, r3
/* 803D15E4 003CE524  41 82 00 4C */	beq .L_803D1630
/* 803D15E8 003CE528  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D15EC 003CE52C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D15F0 003CE530  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D15F4 003CE534  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D15F8 003CE538  90 04 00 00 */	stw r0, 0(r4)
/* 803D15FC 003CE53C  38 E0 00 0D */	li r7, 0xd
/* 803D1600 003CE540  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError32FSMState_WF0_FailToFormat_NoCard@ha
/* 803D1604 003CE544  38 00 00 00 */	li r0, 0
/* 803D1608 003CE548  90 E4 00 04 */	stw r7, 4(r4)
/* 803D160C 003CE54C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1610 003CE550  38 DE 00 E0 */	addi r6, r30, 0xe0
/* 803D1614 003CE554  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D1618 003CE558  90 04 00 08 */	stw r0, 8(r4)
/* 803D161C 003CE55C  38 03 9B A8 */	addi r0, r3, __vt__Q33ebi9CardError32FSMState_WF0_FailToFormat_NoCard@l
/* 803D1620 003CE560  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1624 003CE564  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1628 003CE568  90 A4 00 00 */	stw r5, 0(r4)
/* 803D162C 003CE56C  90 04 00 00 */	stw r0, 0(r4)
.L_803D1630:
/* 803D1630 003CE570  7F E3 FB 78 */	mr r3, r31
/* 803D1634 003CE574  48 00 21 99 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1638 003CE578  38 60 00 14 */	li r3, 0x14
/* 803D163C 003CE57C  4B C5 28 69 */	bl __nw__FUl
/* 803D1640 003CE580  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1644 003CE584  41 82 00 4C */	beq .L_803D1690
/* 803D1648 003CE588  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D164C 003CE58C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1650 003CE590  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1654 003CE594  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D1658 003CE598  90 04 00 00 */	stw r0, 0(r4)
/* 803D165C 003CE59C  38 E0 00 0E */	li r7, 0xe
/* 803D1660 003CE5A0  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError33FSMState_WF1_FailToFormat_IOError@ha
/* 803D1664 003CE5A4  38 00 00 00 */	li r0, 0
/* 803D1668 003CE5A8  90 E4 00 04 */	stw r7, 4(r4)
/* 803D166C 003CE5AC  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1670 003CE5B0  38 DE 00 F8 */	addi r6, r30, 0xf8
/* 803D1674 003CE5B4  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D1678 003CE5B8  90 04 00 08 */	stw r0, 8(r4)
/* 803D167C 003CE5BC  38 03 9B 78 */	addi r0, r3, __vt__Q33ebi9CardError33FSMState_WF1_FailToFormat_IOError@l
/* 803D1680 003CE5C0  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1684 003CE5C4  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1688 003CE5C8  90 A4 00 00 */	stw r5, 0(r4)
/* 803D168C 003CE5CC  90 04 00 00 */	stw r0, 0(r4)
.L_803D1690:
/* 803D1690 003CE5D0  7F E3 FB 78 */	mr r3, r31
/* 803D1694 003CE5D4  48 00 21 39 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1698 003CE5D8  38 60 00 14 */	li r3, 0x14
/* 803D169C 003CE5DC  4B C5 28 09 */	bl __nw__FUl
/* 803D16A0 003CE5E0  7C 64 1B 79 */	or. r4, r3, r3
/* 803D16A4 003CE5E4  41 82 00 4C */	beq .L_803D16F0
/* 803D16A8 003CE5E8  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D16AC 003CE5EC  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D16B0 003CE5F0  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D16B4 003CE5F4  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D16B8 003CE5F8  90 04 00 00 */	stw r0, 0(r4)
/* 803D16BC 003CE5FC  38 E0 00 0F */	li r7, 0xf
/* 803D16C0 003CE600  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError39FSMState_WF2_FailToCreateNewFile_NoCard@ha
/* 803D16C4 003CE604  38 00 00 00 */	li r0, 0
/* 803D16C8 003CE608  90 E4 00 04 */	stw r7, 4(r4)
/* 803D16CC 003CE60C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D16D0 003CE610  38 DE 01 14 */	addi r6, r30, 0x114
/* 803D16D4 003CE614  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D16D8 003CE618  90 04 00 08 */	stw r0, 8(r4)
/* 803D16DC 003CE61C  38 03 9B 48 */	addi r0, r3, __vt__Q33ebi9CardError39FSMState_WF2_FailToCreateNewFile_NoCard@l
/* 803D16E0 003CE620  90 E4 00 00 */	stw r7, 0(r4)
/* 803D16E4 003CE624  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D16E8 003CE628  90 A4 00 00 */	stw r5, 0(r4)
/* 803D16EC 003CE62C  90 04 00 00 */	stw r0, 0(r4)
.L_803D16F0:
/* 803D16F0 003CE630  7F E3 FB 78 */	mr r3, r31
/* 803D16F4 003CE634  48 00 20 D9 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D16F8 003CE638  38 60 00 14 */	li r3, 0x14
/* 803D16FC 003CE63C  4B C5 27 A9 */	bl __nw__FUl
/* 803D1700 003CE640  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1704 003CE644  41 82 00 4C */	beq .L_803D1750
/* 803D1708 003CE648  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D170C 003CE64C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1710 003CE650  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1714 003CE654  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D1718 003CE658  90 04 00 00 */	stw r0, 0(r4)
/* 803D171C 003CE65C  38 E0 00 10 */	li r7, 0x10
/* 803D1720 003CE660  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError40FSMState_WF3_FailToCreateNewFile_IOError@ha
/* 803D1724 003CE664  38 00 00 00 */	li r0, 0
/* 803D1728 003CE668  90 E4 00 04 */	stw r7, 4(r4)
/* 803D172C 003CE66C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1730 003CE670  38 DE 01 34 */	addi r6, r30, 0x134
/* 803D1734 003CE674  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D1738 003CE678  90 04 00 08 */	stw r0, 8(r4)
/* 803D173C 003CE67C  38 03 9B 18 */	addi r0, r3, __vt__Q33ebi9CardError40FSMState_WF3_FailToCreateNewFile_IOError@l
/* 803D1740 003CE680  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1744 003CE684  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1748 003CE688  90 A4 00 00 */	stw r5, 0(r4)
/* 803D174C 003CE68C  90 04 00 00 */	stw r0, 0(r4)
.L_803D1750:
/* 803D1750 003CE690  7F E3 FB 78 */	mr r3, r31
/* 803D1754 003CE694  48 00 20 79 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1758 003CE698  38 60 00 14 */	li r3, 0x14
/* 803D175C 003CE69C  4B C5 27 49 */	bl __nw__FUl
/* 803D1760 003CE6A0  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1764 003CE6A4  41 82 00 4C */	beq .L_803D17B0
/* 803D1768 003CE6A8  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D176C 003CE6AC  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1770 003CE6B0  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1774 003CE6B4  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D1778 003CE6B8  90 04 00 00 */	stw r0, 0(r4)
/* 803D177C 003CE6BC  38 E0 00 11 */	li r7, 0x11
/* 803D1780 003CE6C0  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError30FSMState_WF4_FailToSave_NoCard@ha
/* 803D1784 003CE6C4  38 00 00 00 */	li r0, 0
/* 803D1788 003CE6C8  90 E4 00 04 */	stw r7, 4(r4)
/* 803D178C 003CE6CC  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1790 003CE6D0  38 DE 01 54 */	addi r6, r30, 0x154
/* 803D1794 003CE6D4  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D1798 003CE6D8  90 04 00 08 */	stw r0, 8(r4)
/* 803D179C 003CE6DC  38 03 9A E8 */	addi r0, r3, __vt__Q33ebi9CardError30FSMState_WF4_FailToSave_NoCard@l
/* 803D17A0 003CE6E0  90 E4 00 00 */	stw r7, 0(r4)
/* 803D17A4 003CE6E4  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D17A8 003CE6E8  90 A4 00 00 */	stw r5, 0(r4)
/* 803D17AC 003CE6EC  90 04 00 00 */	stw r0, 0(r4)
.L_803D17B0:
/* 803D17B0 003CE6F0  7F E3 FB 78 */	mr r3, r31
/* 803D17B4 003CE6F4  48 00 20 19 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D17B8 003CE6F8  38 60 00 14 */	li r3, 0x14
/* 803D17BC 003CE6FC  4B C5 26 E9 */	bl __nw__FUl
/* 803D17C0 003CE700  7C 64 1B 79 */	or. r4, r3, r3
/* 803D17C4 003CE704  41 82 00 4C */	beq .L_803D1810
/* 803D17C8 003CE708  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D17CC 003CE70C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D17D0 003CE710  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D17D4 003CE714  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError16FSMState_Warning@ha
/* 803D17D8 003CE718  90 04 00 00 */	stw r0, 0(r4)
/* 803D17DC 003CE71C  38 E0 00 12 */	li r7, 0x12
/* 803D17E0 003CE720  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError31FSMState_WF5_FailToSave_IOError@ha
/* 803D17E4 003CE724  38 00 00 00 */	li r0, 0
/* 803D17E8 003CE728  90 E4 00 04 */	stw r7, 4(r4)
/* 803D17EC 003CE72C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D17F0 003CE730  38 DE 01 6C */	addi r6, r30, 0x16c
/* 803D17F4 003CE734  38 A5 8B FC */	addi r5, r5, __vt__Q33ebi9CardError16FSMState_Warning@l
/* 803D17F8 003CE738  90 04 00 08 */	stw r0, 8(r4)
/* 803D17FC 003CE73C  38 03 9A B8 */	addi r0, r3, __vt__Q33ebi9CardError31FSMState_WF5_FailToSave_IOError@l
/* 803D1800 003CE740  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1804 003CE744  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1808 003CE748  90 A4 00 00 */	stw r5, 0(r4)
/* 803D180C 003CE74C  90 04 00 00 */	stw r0, 0(r4)
.L_803D1810:
/* 803D1810 003CE750  7F E3 FB 78 */	mr r3, r31
/* 803D1814 003CE754  48 00 1F B9 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1818 003CE758  38 60 00 14 */	li r3, 0x14
/* 803D181C 003CE75C  4B C5 26 89 */	bl __nw__FUl
/* 803D1820 003CE760  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1824 003CE764  41 82 00 4C */	beq .L_803D1870
/* 803D1828 003CE768  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D182C 003CE76C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1830 003CE770  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1834 003CE774  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError17FSMState_Question@ha
/* 803D1838 003CE778  90 04 00 00 */	stw r0, 0(r4)
/* 803D183C 003CE77C  38 E0 00 13 */	li r7, 0x13
/* 803D1840 003CE780  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormat@ha
/* 803D1844 003CE784  38 00 00 00 */	li r0, 0
/* 803D1848 003CE788  90 E4 00 04 */	stw r7, 4(r4)
/* 803D184C 003CE78C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1850 003CE790  38 DE 01 84 */	addi r6, r30, 0x184
/* 803D1854 003CE794  38 A5 8B C8 */	addi r5, r5, __vt__Q33ebi9CardError17FSMState_Question@l
/* 803D1858 003CE798  90 04 00 08 */	stw r0, 8(r4)
/* 803D185C 003CE79C  38 03 9A 84 */	addi r0, r3, __vt__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormat@l
/* 803D1860 003CE7A0  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1864 003CE7A4  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1868 003CE7A8  90 A4 00 00 */	stw r5, 0(r4)
/* 803D186C 003CE7AC  90 04 00 00 */	stw r0, 0(r4)
.L_803D1870:
/* 803D1870 003CE7B0  7F E3 FB 78 */	mr r3, r31
/* 803D1874 003CE7B4  48 00 1F 59 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1878 003CE7B8  38 60 00 14 */	li r3, 0x14
/* 803D187C 003CE7BC  4B C5 26 29 */	bl __nw__FUl
/* 803D1880 003CE7C0  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1884 003CE7C4  41 82 00 4C */	beq .L_803D18D0
/* 803D1888 003CE7C8  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D188C 003CE7CC  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1890 003CE7D0  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1894 003CE7D4  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError17FSMState_Question@ha
/* 803D1898 003CE7D8  90 04 00 00 */	stw r0, 0(r4)
/* 803D189C 003CE7DC  38 E0 00 14 */	li r7, 0x14
/* 803D18A0 003CE7E0  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPL@ha
/* 803D18A4 003CE7E4  38 00 00 00 */	li r0, 0
/* 803D18A8 003CE7E8  90 E4 00 04 */	stw r7, 4(r4)
/* 803D18AC 003CE7EC  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D18B0 003CE7F0  38 DE 01 A4 */	addi r6, r30, 0x1a4
/* 803D18B4 003CE7F4  38 A5 8B C8 */	addi r5, r5, __vt__Q33ebi9CardError17FSMState_Question@l
/* 803D18B8 003CE7F8  90 04 00 08 */	stw r0, 8(r4)
/* 803D18BC 003CE7FC  38 03 9A 50 */	addi r0, r3, __vt__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPL@l
/* 803D18C0 003CE800  90 E4 00 00 */	stw r7, 0(r4)
/* 803D18C4 003CE804  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D18C8 003CE808  90 A4 00 00 */	stw r5, 0(r4)
/* 803D18CC 003CE80C  90 04 00 00 */	stw r0, 0(r4)
.L_803D18D0:
/* 803D18D0 003CE810  7F E3 FB 78 */	mr r3, r31
/* 803D18D4 003CE814  48 00 1E F9 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D18D8 003CE818  38 60 00 14 */	li r3, 0x14
/* 803D18DC 003CE81C  4B C5 25 C9 */	bl __nw__FUl
/* 803D18E0 003CE820  7C 64 1B 79 */	or. r4, r3, r3
/* 803D18E4 003CE824  41 82 00 4C */	beq .L_803D1930
/* 803D18E8 003CE828  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D18EC 003CE82C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D18F0 003CE830  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D18F4 003CE834  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError17FSMState_Question@ha
/* 803D18F8 003CE838  90 04 00 00 */	stw r0, 0(r4)
/* 803D18FC 003CE83C  38 E0 00 15 */	li r7, 0x15
/* 803D1900 003CE840  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError24FSMState_Q02_DoYouFormat@ha
/* 803D1904 003CE844  38 00 00 00 */	li r0, 0
/* 803D1908 003CE848  90 E4 00 04 */	stw r7, 4(r4)
/* 803D190C 003CE84C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1910 003CE850  38 DE 01 C0 */	addi r6, r30, 0x1c0
/* 803D1914 003CE854  38 A5 8B C8 */	addi r5, r5, __vt__Q33ebi9CardError17FSMState_Question@l
/* 803D1918 003CE858  90 04 00 08 */	stw r0, 8(r4)
/* 803D191C 003CE85C  38 03 9A 1C */	addi r0, r3, __vt__Q33ebi9CardError24FSMState_Q02_DoYouFormat@l
/* 803D1920 003CE860  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1924 003CE864  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1928 003CE868  90 A4 00 00 */	stw r5, 0(r4)
/* 803D192C 003CE86C  90 04 00 00 */	stw r0, 0(r4)
.L_803D1930:
/* 803D1930 003CE870  7F E3 FB 78 */	mr r3, r31
/* 803D1934 003CE874  48 00 1E 99 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1938 003CE878  38 60 00 14 */	li r3, 0x14
/* 803D193C 003CE87C  4B C5 25 69 */	bl __nw__FUl
/* 803D1940 003CE880  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1944 003CE884  41 82 00 4C */	beq .L_803D1990
/* 803D1948 003CE888  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D194C 003CE88C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1950 003CE890  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1954 003CE894  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError17FSMState_Question@ha
/* 803D1958 003CE898  90 04 00 00 */	stw r0, 0(r4)
/* 803D195C 003CE89C  38 E0 00 16 */	li r7, 0x16
/* 803D1960 003CE8A0  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFile@ha
/* 803D1964 003CE8A4  38 00 00 00 */	li r0, 0
/* 803D1968 003CE8A8  90 E4 00 04 */	stw r7, 4(r4)
/* 803D196C 003CE8AC  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1970 003CE8B0  38 DE 01 D0 */	addi r6, r30, 0x1d0
/* 803D1974 003CE8B4  38 A5 8B C8 */	addi r5, r5, __vt__Q33ebi9CardError17FSMState_Question@l
/* 803D1978 003CE8B8  90 04 00 08 */	stw r0, 8(r4)
/* 803D197C 003CE8BC  38 03 99 E8 */	addi r0, r3, __vt__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFile@l
/* 803D1980 003CE8C0  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1984 003CE8C4  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1988 003CE8C8  90 A4 00 00 */	stw r5, 0(r4)
/* 803D198C 003CE8CC  90 04 00 00 */	stw r0, 0(r4)
.L_803D1990:
/* 803D1990 003CE8D0  7F E3 FB 78 */	mr r3, r31
/* 803D1994 003CE8D4  48 00 1E 39 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1998 003CE8D8  38 60 00 14 */	li r3, 0x14
/* 803D199C 003CE8DC  4B C5 25 09 */	bl __nw__FUl
/* 803D19A0 003CE8E0  7C 64 1B 79 */	or. r4, r3, r3
/* 803D19A4 003CE8E4  41 82 00 4C */	beq .L_803D19F0
/* 803D19A8 003CE8E8  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D19AC 003CE8EC  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D19B0 003CE8F0  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D19B4 003CE8F4  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError17FSMState_Question@ha
/* 803D19B8 003CE8F8  90 04 00 00 */	stw r0, 0(r4)
/* 803D19BC 003CE8FC  38 E0 00 17 */	li r7, 0x17
/* 803D19C0 003CE900  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSave@ha
/* 803D19C4 003CE904  38 00 00 00 */	li r0, 0
/* 803D19C8 003CE908  90 E4 00 04 */	stw r7, 4(r4)
/* 803D19CC 003CE90C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D19D0 003CE910  38 DE 01 E8 */	addi r6, r30, 0x1e8
/* 803D19D4 003CE914  38 A5 8B C8 */	addi r5, r5, __vt__Q33ebi9CardError17FSMState_Question@l
/* 803D19D8 003CE918  90 04 00 08 */	stw r0, 8(r4)
/* 803D19DC 003CE91C  38 03 99 B4 */	addi r0, r3, __vt__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSave@l
/* 803D19E0 003CE920  90 E4 00 00 */	stw r7, 0(r4)
/* 803D19E4 003CE924  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D19E8 003CE928  90 A4 00 00 */	stw r5, 0(r4)
/* 803D19EC 003CE92C  90 04 00 00 */	stw r0, 0(r4)
.L_803D19F0:
/* 803D19F0 003CE930  7F E3 FB 78 */	mr r3, r31
/* 803D19F4 003CE934  48 00 1D D9 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D19F8 003CE938  38 60 00 14 */	li r3, 0x14
/* 803D19FC 003CE93C  4B C5 24 A9 */	bl __nw__FUl
/* 803D1A00 003CE940  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1A04 003CE944  41 82 00 4C */	beq .L_803D1A50
/* 803D1A08 003CE948  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D1A0C 003CE94C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1A10 003CE950  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1A14 003CE954  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError17FSMState_Question@ha
/* 803D1A18 003CE958  90 04 00 00 */	stw r0, 0(r4)
/* 803D1A1C 003CE95C  38 E0 00 18 */	li r7, 0x18
/* 803D1A20 003CE960  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError25FSMState_Q05_GameCantSave@ha
/* 803D1A24 003CE964  38 00 00 00 */	li r0, 0
/* 803D1A28 003CE968  90 E4 00 04 */	stw r7, 4(r4)
/* 803D1A2C 003CE96C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1A30 003CE970  38 DE 02 08 */	addi r6, r30, 0x208
/* 803D1A34 003CE974  38 A5 8B C8 */	addi r5, r5, __vt__Q33ebi9CardError17FSMState_Question@l
/* 803D1A38 003CE978  90 04 00 08 */	stw r0, 8(r4)
/* 803D1A3C 003CE97C  38 03 99 80 */	addi r0, r3, __vt__Q33ebi9CardError25FSMState_Q05_GameCantSave@l
/* 803D1A40 003CE980  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1A44 003CE984  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1A48 003CE988  90 A4 00 00 */	stw r5, 0(r4)
/* 803D1A4C 003CE98C  90 04 00 00 */	stw r0, 0(r4)
.L_803D1A50:
/* 803D1A50 003CE990  7F E3 FB 78 */	mr r3, r31
/* 803D1A54 003CE994  48 00 1D 79 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1A58 003CE998  38 60 00 18 */	li r3, 0x18
/* 803D1A5C 003CE99C  4B C5 24 49 */	bl __nw__FUl
/* 803D1A60 003CE9A0  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1A64 003CE9A4  41 82 00 4C */	beq .L_803D1AB0
/* 803D1A68 003CE9A8  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D1A6C 003CE9AC  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1A70 003CE9B0  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1A74 003CE9B4  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError20FSMState_CardRequest@ha
/* 803D1A78 003CE9B8  90 04 00 00 */	stw r0, 0(r4)
/* 803D1A7C 003CE9BC  38 E0 00 19 */	li r7, 0x19
/* 803D1A80 003CE9C0  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError22FSMState_WN0_NowFormat@ha
/* 803D1A84 003CE9C4  38 00 00 00 */	li r0, 0
/* 803D1A88 003CE9C8  90 E4 00 04 */	stw r7, 4(r4)
/* 803D1A8C 003CE9CC  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1A90 003CE9D0  38 DE 02 1C */	addi r6, r30, 0x21c
/* 803D1A94 003CE9D4  38 A5 8B 6C */	addi r5, r5, __vt__Q33ebi9CardError20FSMState_CardRequest@l
/* 803D1A98 003CE9D8  90 04 00 08 */	stw r0, 8(r4)
/* 803D1A9C 003CE9DC  38 03 99 24 */	addi r0, r3, __vt__Q33ebi9CardError22FSMState_WN0_NowFormat@l
/* 803D1AA0 003CE9E0  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1AA4 003CE9E4  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1AA8 003CE9E8  90 A4 00 00 */	stw r5, 0(r4)
/* 803D1AAC 003CE9EC  90 04 00 00 */	stw r0, 0(r4)
.L_803D1AB0:
/* 803D1AB0 003CE9F0  7F E3 FB 78 */	mr r3, r31
/* 803D1AB4 003CE9F4  48 00 1D 19 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1AB8 003CE9F8  38 60 00 18 */	li r3, 0x18
/* 803D1ABC 003CE9FC  4B C5 23 E9 */	bl __nw__FUl
/* 803D1AC0 003CEA00  7C 64 1B 79 */	or. r4, r3, r3
/* 803D1AC4 003CEA04  41 82 00 4C */	beq .L_803D1B10
/* 803D1AC8 003CEA08  3C 60 80 4F */	lis r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@ha
/* 803D1ACC 003CEA0C  3C C0 80 4F */	lis r6, __vt__Q33ebi9CardError8FSMState@ha
/* 803D1AD0 003CEA10  38 03 8C 54 */	addi r0, r3, "__vt__Q24Game31FSMState<Q33ebi9CardError4TMgr>"@l
/* 803D1AD4 003CEA14  3C A0 80 4F */	lis r5, __vt__Q33ebi9CardError20FSMState_CardRequest@ha
/* 803D1AD8 003CEA18  90 04 00 00 */	stw r0, 0(r4)
/* 803D1ADC 003CEA1C  38 E0 00 1A */	li r7, 0x1a
/* 803D1AE0 003CEA20  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError29FSMState_WN1_NowCreateNewFile@ha
/* 803D1AE4 003CEA24  38 00 00 00 */	li r0, 0
/* 803D1AE8 003CEA28  90 E4 00 04 */	stw r7, 4(r4)
/* 803D1AEC 003CEA2C  38 E6 8C 2C */	addi r7, r6, __vt__Q33ebi9CardError8FSMState@l
/* 803D1AF0 003CEA30  38 DE 02 2C */	addi r6, r30, 0x22c
/* 803D1AF4 003CEA34  38 A5 8B 6C */	addi r5, r5, __vt__Q33ebi9CardError20FSMState_CardRequest@l
/* 803D1AF8 003CEA38  90 04 00 08 */	stw r0, 8(r4)
/* 803D1AFC 003CEA3C  38 03 98 C8 */	addi r0, r3, __vt__Q33ebi9CardError29FSMState_WN1_NowCreateNewFile@l
/* 803D1B00 003CEA40  90 E4 00 00 */	stw r7, 0(r4)
/* 803D1B04 003CEA44  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803D1B08 003CEA48  90 A4 00 00 */	stw r5, 0(r4)
/* 803D1B0C 003CEA4C  90 04 00 00 */	stw r0, 0(r4)
.L_803D1B10:
/* 803D1B10 003CEA50  7F E3 FB 78 */	mr r3, r31
/* 803D1B14 003CEA54  48 00 1C B9 */	bl "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
/* 803D1B18 003CEA58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D1B1C 003CEA5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D1B20 003CEA60  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D1B24 003CEA64  7C 08 03 A6 */	mtlr r0
/* 803D1B28 003CEA68  38 21 00 10 */	addi r1, r1, 0x10
/* 803D1B2C 003CEA6C  4E 80 00 20 */	blr 

.global init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg:
/* 803D1B30 003CEA70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D1B34 003CEA74  7C 08 02 A6 */	mflr r0
/* 803D1B38 003CEA78  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D1B3C 003CEA7C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D1B40 003CEA80  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803D1B44 003CEA84  7D 89 03 A6 */	mtctr r12
/* 803D1B48 003CEA88  4E 80 04 21 */	bctrl 
/* 803D1B4C 003CEA8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D1B50 003CEA90  7C 08 03 A6 */	mtlr r0
/* 803D1B54 003CEA94  38 21 00 10 */	addi r1, r1, 0x10
/* 803D1B58 003CEA98  4E 80 00 20 */	blr 

.global do_init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
do_init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg:
/* 803D1B5C 003CEA9C  4E 80 00 20 */	blr 

.global exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr:
/* 803D1B60 003CEAA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D1B64 003CEAA4  7C 08 02 A6 */	mflr r0
/* 803D1B68 003CEAA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D1B6C 003CEAAC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D1B70 003CEAB0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D1B74 003CEAB4  7D 89 03 A6 */	mtctr r12
/* 803D1B78 003CEAB8  4E 80 04 21 */	bctrl 
/* 803D1B7C 003CEABC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D1B80 003CEAC0  7C 08 03 A6 */	mtlr r0
/* 803D1B84 003CEAC4  38 21 00 10 */	addi r1, r1, 0x10
/* 803D1B88 003CEAC8  4E 80 00 20 */	blr 

.global do_exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
do_exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr:
/* 803D1B8C 003CEACC  4E 80 00 20 */	blr 

.global do_init__Q33ebi9CardError16FSMState_WarningFPQ33ebi9CardError4TMgrPQ24Game8StateArg
do_init__Q33ebi9CardError16FSMState_WarningFPQ33ebi9CardError4TMgrPQ24Game8StateArg:
/* 803D1B90 003CEAD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D1B94 003CEAD4  7C 08 02 A6 */	mflr r0
/* 803D1B98 003CEAD8  C0 22 17 68 */	lfs f1, lbl_8051FAC8@sda21(r2)
/* 803D1B9C 003CEADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D1BA0 003CEAE0  38 00 00 00 */	li r0, 0
/* 803D1BA4 003CEAE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D1BA8 003CEAE8  7C 9F 23 78 */	mr r31, r4
/* 803D1BAC 003CEAEC  93 C1 00 08 */	stw r30, 8(r1)
/* 803D1BB0 003CEAF0  7C 7E 1B 78 */	mr r30, r3
/* 803D1BB4 003CEAF4  98 03 00 11 */	stb r0, 0x11(r3)
/* 803D1BB8 003CEAF8  98 03 00 10 */	stb r0, 0x10(r3)
/* 803D1BBC 003CEAFC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D1BC0 003CEB00  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803D1BC4 003CEB04  EC 21 00 24 */	fdivs f1, f1, f0
/* 803D1BC8 003CEB08  4B CE FF 85 */	bl __cvt_fp2unsigned
/* 803D1BCC 003CEB0C  90 7F 02 98 */	stw r3, 0x298(r31)
/* 803D1BD0 003CEB10  38 A0 00 00 */	li r5, 0
/* 803D1BD4 003CEB14  38 00 00 01 */	li r0, 1
/* 803D1BD8 003CEB18  7F E4 FB 78 */	mr r4, r31
/* 803D1BDC 003CEB1C  90 7F 02 9C */	stw r3, 0x29c(r31)
/* 803D1BE0 003CEB20  7F C3 F3 78 */	mr r3, r30
/* 803D1BE4 003CEB24  98 BE 00 12 */	stb r5, 0x12(r30)
/* 803D1BE8 003CEB28  98 1F 00 19 */	stb r0, 0x19(r31)
/* 803D1BEC 003CEB2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D1BF0 003CEB30  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803D1BF4 003CEB34  7D 89 03 A6 */	mtctr r12
/* 803D1BF8 003CEB38  4E 80 04 21 */	bctrl 
/* 803D1BFC 003CEB3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D1C00 003CEB40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D1C04 003CEB44  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D1C08 003CEB48  7C 08 03 A6 */	mtlr r0
/* 803D1C0C 003CEB4C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D1C10 003CEB50  4E 80 00 20 */	blr 

.global do_exec__Q33ebi9CardError16FSMState_WarningFPQ33ebi9CardError4TMgr
do_exec__Q33ebi9CardError16FSMState_WarningFPQ33ebi9CardError4TMgr:
/* 803D1C14 003CEB54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D1C18 003CEB58  7C 08 02 A6 */	mflr r0
/* 803D1C1C 003CEB5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D1C20 003CEB60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D1C24 003CEB64  7C 9F 23 78 */	mr r31, r4
/* 803D1C28 003CEB68  93 C1 00 08 */	stw r30, 8(r1)
/* 803D1C2C 003CEB6C  7C 7E 1B 78 */	mr r30, r3
/* 803D1C30 003CEB70  88 03 00 12 */	lbz r0, 0x12(r3)
/* 803D1C34 003CEB74  28 00 00 00 */	cmplwi r0, 0
/* 803D1C38 003CEB78  41 82 00 0C */	beq .L_803D1C44
/* 803D1C3C 003CEB7C  7F E3 FB 78 */	mr r3, r31
/* 803D1C40 003CEB80  48 00 18 0D */	bl checkAndTransitNoCard___Q33ebi9CardError4TMgrFv
.L_803D1C44:
/* 803D1C44 003CEB84  80 1F 02 98 */	lwz r0, 0x298(r31)
/* 803D1C48 003CEB88  28 00 00 00 */	cmplwi r0, 0
/* 803D1C4C 003CEB8C  40 82 00 2C */	bne .L_803D1C78
/* 803D1C50 003CEB90  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 803D1C54 003CEB94  28 00 00 00 */	cmplwi r0, 0
/* 803D1C58 003CEB98  41 82 00 20 */	beq .L_803D1C78
/* 803D1C5C 003CEB9C  88 1E 00 11 */	lbz r0, 0x11(r30)
/* 803D1C60 003CEBA0  28 00 00 00 */	cmplwi r0, 0
/* 803D1C64 003CEBA4  40 82 00 14 */	bne .L_803D1C78
/* 803D1C68 003CEBA8  7F E3 FB 78 */	mr r3, r31
/* 803D1C6C 003CEBAC  4B FF 1E 95 */	bl close__Q33ebi6Screen11TMemoryCardFv
/* 803D1C70 003CEBB0  38 00 00 01 */	li r0, 1
/* 803D1C74 003CEBB4  98 1E 00 11 */	stb r0, 0x11(r30)
.L_803D1C78:
/* 803D1C78 003CEBB8  7F E3 FB 78 */	mr r3, r31
/* 803D1C7C 003CEBBC  4B FF 23 35 */	bl isFinish__Q33ebi6Screen11TMemoryCardFv
/* 803D1C80 003CEBC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803D1C84 003CEBC4  41 82 00 1C */	beq .L_803D1CA0
/* 803D1C88 003CEBC8  7F C3 F3 78 */	mr r3, r30
/* 803D1C8C 003CEBCC  7F E4 FB 78 */	mr r4, r31
/* 803D1C90 003CEBD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D1C94 003CEBD4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803D1C98 003CEBD8  7D 89 03 A6 */	mtctr r12
/* 803D1C9C 003CEBDC  4E 80 04 21 */	bctrl 
.L_803D1CA0:
/* 803D1CA0 003CEBE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D1CA4 003CEBE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D1CA8 003CEBE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D1CAC 003CEBEC  7C 08 03 A6 */	mtlr r0
/* 803D1CB0 003CEBF0  38 21 00 10 */	addi r1, r1, 0x10
/* 803D1CB4 003CEBF4  4E 80 00 20 */	blr 

.global do_init__Q33ebi9CardError17FSMState_QuestionFPQ33ebi9CardError4TMgrPQ24Game8StateArg
do_init__Q33ebi9CardError17FSMState_QuestionFPQ33ebi9CardError4TMgrPQ24Game8StateArg:
/* 803D1CB8 003CEBF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D1CBC 003CEBFC  7C 08 02 A6 */	mflr r0
/* 803D1CC0 003CEC00  38 A0 00 00 */	li r5, 0
/* 803D1CC4 003CEC04  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D1CC8 003CEC08  38 00 00 01 */	li r0, 1
/* 803D1CCC 003CEC0C  98 A3 00 10 */	stb r5, 0x10(r3)
/* 803D1CD0 003CEC10  98 04 00 19 */	stb r0, 0x19(r4)
/* 803D1CD4 003CEC14  81 83 00 00 */	lwz r12, 0(r3)
/* 803D1CD8 003CEC18  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803D1CDC 003CEC1C  7D 89 03 A6 */	mtctr r12
/* 803D1CE0 003CEC20  4E 80 04 21 */	bctrl 
/* 803D1CE4 003CEC24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D1CE8 003CEC28  7C 08 03 A6 */	mtlr r0
/* 803D1CEC 003CEC2C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D1CF0 003CEC30  4E 80 00 20 */	blr 

.global do_exec__Q33ebi9CardError17FSMState_QuestionFPQ33ebi9CardError4TMgr
do_exec__Q33ebi9CardError17FSMState_QuestionFPQ33ebi9CardError4TMgr:
/* 803D1CF4 003CEC34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D1CF8 003CEC38  7C 08 02 A6 */	mflr r0
/* 803D1CFC 003CEC3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D1D00 003CEC40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D1D04 003CEC44  7C 9F 23 78 */	mr r31, r4
/* 803D1D08 003CEC48  93 C1 00 08 */	stw r30, 8(r1)
/* 803D1D0C 003CEC4C  7C 7E 1B 78 */	mr r30, r3
/* 803D1D10 003CEC50  88 03 00 10 */	lbz r0, 0x10(r3)
/* 803D1D14 003CEC54  28 00 00 00 */	cmplwi r0, 0
/* 803D1D18 003CEC58  41 82 00 0C */	beq .L_803D1D24
/* 803D1D1C 003CEC5C  7F E3 FB 78 */	mr r3, r31
/* 803D1D20 003CEC60  48 00 17 2D */	bl checkAndTransitNoCard___Q33ebi9CardError4TMgrFv
.L_803D1D24:
/* 803D1D24 003CEC64  7F E3 FB 78 */	mr r3, r31
/* 803D1D28 003CEC68  4B FF 22 89 */	bl isFinish__Q33ebi6Screen11TMemoryCardFv
/* 803D1D2C 003CEC6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803D1D30 003CEC70  41 82 00 44 */	beq .L_803D1D74
/* 803D1D34 003CEC74  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 803D1D38 003CEC78  28 00 00 01 */	cmplwi r0, 1
/* 803D1D3C 003CEC7C  40 82 00 20 */	bne .L_803D1D5C
/* 803D1D40 003CEC80  7F C3 F3 78 */	mr r3, r30
/* 803D1D44 003CEC84  7F E4 FB 78 */	mr r4, r31
/* 803D1D48 003CEC88  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D1D4C 003CEC8C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803D1D50 003CEC90  7D 89 03 A6 */	mtctr r12
/* 803D1D54 003CEC94  4E 80 04 21 */	bctrl 
/* 803D1D58 003CEC98  48 00 00 1C */	b .L_803D1D74
.L_803D1D5C:
/* 803D1D5C 003CEC9C  7F C3 F3 78 */	mr r3, r30
/* 803D1D60 003CECA0  7F E4 FB 78 */	mr r4, r31
/* 803D1D64 003CECA4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D1D68 003CECA8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803D1D6C 003CECAC  7D 89 03 A6 */	mtctr r12
/* 803D1D70 003CECB0  4E 80 04 21 */	bctrl 
.L_803D1D74:
/* 803D1D74 003CECB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D1D78 003CECB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D1D7C 003CECBC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D1D80 003CECC0  7C 08 03 A6 */	mtlr r0
/* 803D1D84 003CECC4  38 21 00 10 */	addi r1, r1, 0x10
/* 803D1D88 003CECC8  4E 80 00 20 */	blr 

.global do_init__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgrPQ24Game8StateArg
do_init__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgrPQ24Game8StateArg:
/* 803D1D8C 003CECCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D1D90 003CECD0  7C 08 02 A6 */	mflr r0
/* 803D1D94 003CECD4  C0 22 17 6C */	lfs f1, lbl_8051FACC@sda21(r2)
/* 803D1D98 003CECD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D1D9C 003CECDC  38 00 00 00 */	li r0, 0
/* 803D1DA0 003CECE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D1DA4 003CECE4  7C 9F 23 78 */	mr r31, r4
/* 803D1DA8 003CECE8  93 C1 00 08 */	stw r30, 8(r1)
/* 803D1DAC 003CECEC  7C 7E 1B 78 */	mr r30, r3
/* 803D1DB0 003CECF0  98 04 00 19 */	stb r0, 0x19(r4)
/* 803D1DB4 003CECF4  90 03 00 10 */	stw r0, 0x10(r3)
/* 803D1DB8 003CECF8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D1DBC 003CECFC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803D1DC0 003CED00  EC 21 00 24 */	fdivs f1, f1, f0
/* 803D1DC4 003CED04  4B CE FD 89 */	bl __cvt_fp2unsigned
/* 803D1DC8 003CED08  90 7F 02 98 */	stw r3, 0x298(r31)
/* 803D1DCC 003CED0C  7F E4 FB 78 */	mr r4, r31
/* 803D1DD0 003CED10  90 7F 02 9C */	stw r3, 0x29c(r31)
/* 803D1DD4 003CED14  7F C3 F3 78 */	mr r3, r30
/* 803D1DD8 003CED18  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D1DDC 003CED1C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803D1DE0 003CED20  7D 89 03 A6 */	mtctr r12
/* 803D1DE4 003CED24  4E 80 04 21 */	bctrl 
/* 803D1DE8 003CED28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D1DEC 003CED2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D1DF0 003CED30  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D1DF4 003CED34  7C 08 03 A6 */	mtlr r0
/* 803D1DF8 003CED38  38 21 00 10 */	addi r1, r1, 0x10
/* 803D1DFC 003CED3C  4E 80 00 20 */	blr 

.global do_exec__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_exec__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D1E00 003CED40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803D1E04 003CED44  7C 08 02 A6 */	mflr r0
/* 803D1E08 003CED48  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D1E0C 003CED4C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803D1E10 003CED50  7C 9F 23 78 */	mr r31, r4
/* 803D1E14 003CED54  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D1E18 003CED58  7C 7E 1B 78 */	mr r30, r3
/* 803D1E1C 003CED5C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803D1E20 003CED60  3B A0 00 00 */	li r29, 0
/* 803D1E24 003CED64  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D1E28 003CED68  80 65 00 5C */	lwz r3, 0x5c(r5)
/* 803D1E2C 003CED6C  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803D1E30 003CED70  2C 00 00 00 */	cmpwi r0, 0
/* 803D1E34 003CED74  40 82 00 14 */	bne .L_803D1E48
/* 803D1E38 003CED78  48 06 F1 85 */	bl checkStatus__13MemoryCardMgrFv
/* 803D1E3C 003CED7C  28 03 00 0B */	cmplwi r3, 0xb
/* 803D1E40 003CED80  41 82 00 08 */	beq .L_803D1E48
/* 803D1E44 003CED84  3B A0 00 01 */	li r29, 1
.L_803D1E48:
/* 803D1E48 003CED88  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 803D1E4C 003CED8C  41 82 00 20 */	beq .L_803D1E6C
/* 803D1E50 003CED90  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D1E54 003CED94  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D1E58 003CED98  48 07 3C B5 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803D1E5C 003CED9C  2C 03 00 00 */	cmpwi r3, 0
/* 803D1E60 003CEDA0  40 82 00 0C */	bne .L_803D1E6C
/* 803D1E64 003CEDA4  38 00 00 01 */	li r0, 1
/* 803D1E68 003CEDA8  48 00 00 08 */	b .L_803D1E70
.L_803D1E6C:
/* 803D1E6C 003CEDAC  38 00 00 00 */	li r0, 0
.L_803D1E70:
/* 803D1E70 003CEDB0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D1E74 003CEDB4  41 82 00 1C */	beq .L_803D1E90
/* 803D1E78 003CEDB8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D1E7C 003CEDBC  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D1E80 003CEDC0  48 07 3C 8D */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803D1E84 003CEDC4  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803D1E88 003CEDC8  7F E3 FB 78 */	mr r3, r31
/* 803D1E8C 003CEDCC  4B FF 1C 75 */	bl close__Q33ebi6Screen11TMemoryCardFv
.L_803D1E90:
/* 803D1E90 003CEDD0  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 803D1E94 003CEDD4  2C 00 00 01 */	cmpwi r0, 1
/* 803D1E98 003CEDD8  41 82 00 98 */	beq .L_803D1F30
/* 803D1E9C 003CEDDC  40 80 00 10 */	bge .L_803D1EAC
/* 803D1EA0 003CEDE0  2C 00 00 00 */	cmpwi r0, 0
/* 803D1EA4 003CEDE4  40 80 00 14 */	bge .L_803D1EB8
/* 803D1EA8 003CEDE8  48 00 02 8C */	b .L_803D2134
.L_803D1EAC:
/* 803D1EAC 003CEDEC  2C 00 00 03 */	cmpwi r0, 3
/* 803D1EB0 003CEDF0  40 80 02 84 */	bge .L_803D2134
/* 803D1EB4 003CEDF4  48 00 00 E0 */	b .L_803D1F94
.L_803D1EB8:
/* 803D1EB8 003CEDF8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D1EBC 003CEDFC  3B E0 00 00 */	li r31, 0
/* 803D1EC0 003CEE00  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D1EC4 003CEE04  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803D1EC8 003CEE08  2C 00 00 00 */	cmpwi r0, 0
/* 803D1ECC 003CEE0C  40 82 00 14 */	bne .L_803D1EE0
/* 803D1ED0 003CEE10  48 06 F0 ED */	bl checkStatus__13MemoryCardMgrFv
/* 803D1ED4 003CEE14  28 03 00 0B */	cmplwi r3, 0xb
/* 803D1ED8 003CEE18  41 82 00 08 */	beq .L_803D1EE0
/* 803D1EDC 003CEE1C  3B E0 00 01 */	li r31, 1
.L_803D1EE0:
/* 803D1EE0 003CEE20  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803D1EE4 003CEE24  41 82 02 50 */	beq .L_803D2134
/* 803D1EE8 003CEE28  7F C3 F3 78 */	mr r3, r30
/* 803D1EEC 003CEE2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D1EF0 003CEE30  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803D1EF4 003CEE34  7D 89 03 A6 */	mtctr r12
/* 803D1EF8 003CEE38  4E 80 04 21 */	bctrl 
/* 803D1EFC 003CEE3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803D1F00 003CEE40  41 82 00 10 */	beq .L_803D1F10
/* 803D1F04 003CEE44  38 00 00 01 */	li r0, 1
/* 803D1F08 003CEE48  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803D1F0C 003CEE4C  48 00 02 28 */	b .L_803D2134
.L_803D1F10:
/* 803D1F10 003CEE50  3C 60 80 49 */	lis r3, lbl_804968DC@ha
/* 803D1F14 003CEE54  3C A0 80 49 */	lis r5, lbl_804968EC@ha
/* 803D1F18 003CEE58  38 63 68 DC */	addi r3, r3, lbl_804968DC@l
/* 803D1F1C 003CEE5C  38 80 00 BF */	li r4, 0xbf
/* 803D1F20 003CEE60  38 A5 68 EC */	addi r5, r5, lbl_804968EC@l
/* 803D1F24 003CEE64  4C C6 31 82 */	crclr 6
/* 803D1F28 003CEE68  4B C5 87 19 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803D1F2C 003CEE6C  48 00 02 08 */	b .L_803D2134
.L_803D1F30:
/* 803D1F30 003CEE70  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D1F34 003CEE74  3B E0 00 00 */	li r31, 0
/* 803D1F38 003CEE78  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D1F3C 003CEE7C  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803D1F40 003CEE80  2C 00 00 00 */	cmpwi r0, 0
/* 803D1F44 003CEE84  40 82 00 14 */	bne .L_803D1F58
/* 803D1F48 003CEE88  48 06 F0 75 */	bl checkStatus__13MemoryCardMgrFv
/* 803D1F4C 003CEE8C  28 03 00 0B */	cmplwi r3, 0xb
/* 803D1F50 003CEE90  41 82 00 08 */	beq .L_803D1F58
/* 803D1F54 003CEE94  3B E0 00 01 */	li r31, 1
.L_803D1F58:
/* 803D1F58 003CEE98  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803D1F5C 003CEE9C  41 82 01 D8 */	beq .L_803D2134
/* 803D1F60 003CEEA0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D1F64 003CEEA4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D1F68 003CEEA8  48 07 3B A5 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803D1F6C 003CEEAC  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803D1F70 003CEEB0  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803D1F74 003CEEB4  2C 00 00 02 */	cmpwi r0, 2
/* 803D1F78 003CEEB8  41 82 00 10 */	beq .L_803D1F88
/* 803D1F7C 003CEEBC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D1F80 003CEEC0  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D1F84 003CEEC4  48 07 3B 89 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
.L_803D1F88:
/* 803D1F88 003CEEC8  38 00 00 02 */	li r0, 2
/* 803D1F8C 003CEECC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803D1F90 003CEED0  48 00 01 A4 */	b .L_803D2134
.L_803D1F94:
/* 803D1F94 003CEED4  80 1F 02 98 */	lwz r0, 0x298(r31)
/* 803D1F98 003CEED8  28 00 00 00 */	cmplwi r0, 0
/* 803D1F9C 003CEEDC  40 82 00 0C */	bne .L_803D1FA8
/* 803D1FA0 003CEEE0  7F E3 FB 78 */	mr r3, r31
/* 803D1FA4 003CEEE4  4B FF 1B 5D */	bl close__Q33ebi6Screen11TMemoryCardFv
.L_803D1FA8:
/* 803D1FA8 003CEEE8  7F E3 FB 78 */	mr r3, r31
/* 803D1FAC 003CEEEC  4B FF 20 05 */	bl isFinish__Q33ebi6Screen11TMemoryCardFv
/* 803D1FB0 003CEEF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803D1FB4 003CEEF4  41 82 01 80 */	beq .L_803D2134
/* 803D1FB8 003CEEF8  38 00 00 01 */	li r0, 1
/* 803D1FBC 003CEEFC  98 1F 00 19 */	stb r0, 0x19(r31)
/* 803D1FC0 003CEF00  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803D1FC4 003CEF04  28 00 00 0E */	cmplwi r0, 0xe
/* 803D1FC8 003CEF08  41 81 01 50 */	bgt .L_803D2118
/* 803D1FCC 003CEF0C  3C 60 80 4F */	lis r3, lbl_804E8AA0@ha
/* 803D1FD0 003CEF10  54 00 10 3A */	slwi r0, r0, 2
/* 803D1FD4 003CEF14  38 63 8A A0 */	addi r3, r3, lbl_804E8AA0@l
/* 803D1FD8 003CEF18  7C 03 00 2E */	lwzx r0, r3, r0
/* 803D1FDC 003CEF1C  7C 09 03 A6 */	mtctr r0
/* 803D1FE0 003CEF20  4E 80 04 20 */	bctr 
.L_803D1FE4:
/* 803D1FE4 003CEF24  7F C3 F3 78 */	mr r3, r30
/* 803D1FE8 003CEF28  7F E4 FB 78 */	mr r4, r31
/* 803D1FEC 003CEF2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D1FF0 003CEF30  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803D1FF4 003CEF34  7D 89 03 A6 */	mtctr r12
/* 803D1FF8 003CEF38  4E 80 04 21 */	bctrl 
/* 803D1FFC 003CEF3C  48 00 01 38 */	b .L_803D2134
.L_803D2000:
/* 803D2000 003CEF40  7F C3 F3 78 */	mr r3, r30
/* 803D2004 003CEF44  7F E4 FB 78 */	mr r4, r31
/* 803D2008 003CEF48  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D200C 003CEF4C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 803D2010 003CEF50  7D 89 03 A6 */	mtctr r12
/* 803D2014 003CEF54  4E 80 04 21 */	bctrl 
/* 803D2018 003CEF58  48 00 01 1C */	b .L_803D2134
.L_803D201C:
/* 803D201C 003CEF5C  7F C3 F3 78 */	mr r3, r30
/* 803D2020 003CEF60  7F E4 FB 78 */	mr r4, r31
/* 803D2024 003CEF64  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D2028 003CEF68  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 803D202C 003CEF6C  7D 89 03 A6 */	mtctr r12
/* 803D2030 003CEF70  4E 80 04 21 */	bctrl 
/* 803D2034 003CEF74  48 00 01 00 */	b .L_803D2134
.L_803D2038:
/* 803D2038 003CEF78  7F C3 F3 78 */	mr r3, r30
/* 803D203C 003CEF7C  7F E4 FB 78 */	mr r4, r31
/* 803D2040 003CEF80  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D2044 003CEF84  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803D2048 003CEF88  7D 89 03 A6 */	mtctr r12
/* 803D204C 003CEF8C  4E 80 04 21 */	bctrl 
/* 803D2050 003CEF90  48 00 00 E4 */	b .L_803D2134
.L_803D2054:
/* 803D2054 003CEF94  7F C3 F3 78 */	mr r3, r30
/* 803D2058 003CEF98  7F E4 FB 78 */	mr r4, r31
/* 803D205C 003CEF9C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D2060 003CEFA0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803D2064 003CEFA4  7D 89 03 A6 */	mtctr r12
/* 803D2068 003CEFA8  4E 80 04 21 */	bctrl 
/* 803D206C 003CEFAC  48 00 00 C8 */	b .L_803D2134
.L_803D2070:
/* 803D2070 003CEFB0  7F C3 F3 78 */	mr r3, r30
/* 803D2074 003CEFB4  7F E4 FB 78 */	mr r4, r31
/* 803D2078 003CEFB8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D207C 003CEFBC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803D2080 003CEFC0  7D 89 03 A6 */	mtctr r12
/* 803D2084 003CEFC4  4E 80 04 21 */	bctrl 
/* 803D2088 003CEFC8  48 00 00 AC */	b .L_803D2134
.L_803D208C:
/* 803D208C 003CEFCC  7F C3 F3 78 */	mr r3, r30
/* 803D2090 003CEFD0  7F E4 FB 78 */	mr r4, r31
/* 803D2094 003CEFD4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D2098 003CEFD8  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 803D209C 003CEFDC  7D 89 03 A6 */	mtctr r12
/* 803D20A0 003CEFE0  4E 80 04 21 */	bctrl 
/* 803D20A4 003CEFE4  48 00 00 90 */	b .L_803D2134
.L_803D20A8:
/* 803D20A8 003CEFE8  7F C3 F3 78 */	mr r3, r30
/* 803D20AC 003CEFEC  7F E4 FB 78 */	mr r4, r31
/* 803D20B0 003CEFF0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D20B4 003CEFF4  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 803D20B8 003CEFF8  7D 89 03 A6 */	mtctr r12
/* 803D20BC 003CEFFC  4E 80 04 21 */	bctrl 
/* 803D20C0 003CF000  48 00 00 74 */	b .L_803D2134
.L_803D20C4:
/* 803D20C4 003CF004  7F C3 F3 78 */	mr r3, r30
/* 803D20C8 003CF008  7F E4 FB 78 */	mr r4, r31
/* 803D20CC 003CF00C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D20D0 003CF010  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 803D20D4 003CF014  7D 89 03 A6 */	mtctr r12
/* 803D20D8 003CF018  4E 80 04 21 */	bctrl 
/* 803D20DC 003CF01C  48 00 00 58 */	b .L_803D2134
.L_803D20E0:
/* 803D20E0 003CF020  7F C3 F3 78 */	mr r3, r30
/* 803D20E4 003CF024  7F E4 FB 78 */	mr r4, r31
/* 803D20E8 003CF028  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D20EC 003CF02C  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 803D20F0 003CF030  7D 89 03 A6 */	mtctr r12
/* 803D20F4 003CF034  4E 80 04 21 */	bctrl 
/* 803D20F8 003CF038  48 00 00 3C */	b .L_803D2134
.L_803D20FC:
/* 803D20FC 003CF03C  7F C3 F3 78 */	mr r3, r30
/* 803D2100 003CF040  7F E4 FB 78 */	mr r4, r31
/* 803D2104 003CF044  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D2108 003CF048  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 803D210C 003CF04C  7D 89 03 A6 */	mtctr r12
/* 803D2110 003CF050  4E 80 04 21 */	bctrl 
/* 803D2114 003CF054  48 00 00 20 */	b .L_803D2134
.L_803D2118:
/* 803D2118 003CF058  3C 60 80 49 */	lis r3, lbl_804968DC@ha
/* 803D211C 003CF05C  3C A0 80 49 */	lis r5, lbl_804968EC@ha
/* 803D2120 003CF060  38 63 68 DC */	addi r3, r3, lbl_804968DC@l
/* 803D2124 003CF064  38 80 01 0A */	li r4, 0x10a
/* 803D2128 003CF068  38 A5 68 EC */	addi r5, r5, lbl_804968EC@l
/* 803D212C 003CF06C  4C C6 31 82 */	crclr 6
/* 803D2130 003CF070  4B C5 85 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D2134:
/* 803D2134 003CF074  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D2138 003CF078  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803D213C 003CF07C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803D2140 003CF080  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803D2144 003CF084  7C 08 03 A6 */	mtlr r0
/* 803D2148 003CF088  38 21 00 20 */	addi r1, r1, 0x20
/* 803D214C 003CF08C  4E 80 00 20 */	blr 

.global do_transitCardNoCard__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_transitCardNoCard__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D2150 003CF090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D2154 003CF094  7C 08 02 A6 */	mflr r0
/* 803D2158 003CF098  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D215C 003CF09C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803D2160 003CF0A0  2C 00 00 00 */	cmpwi r0, 0
/* 803D2164 003CF0A4  40 82 00 20 */	bne .L_803D2184
/* 803D2168 003CF0A8  81 83 00 00 */	lwz r12, 0(r3)
/* 803D216C 003CF0AC  38 A0 00 02 */	li r5, 2
/* 803D2170 003CF0B0  38 C0 00 00 */	li r6, 0
/* 803D2174 003CF0B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D2178 003CF0B8  7D 89 03 A6 */	mtctr r12
/* 803D217C 003CF0BC  4E 80 04 21 */	bctrl 
/* 803D2180 003CF0C0  48 00 00 24 */	b .L_803D21A4
.L_803D2184:
/* 803D2184 003CF0C4  2C 00 00 01 */	cmpwi r0, 1
/* 803D2188 003CF0C8  40 82 00 1C */	bne .L_803D21A4
/* 803D218C 003CF0CC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2190 003CF0D0  38 A0 00 02 */	li r5, 2
/* 803D2194 003CF0D4  38 C0 00 00 */	li r6, 0
/* 803D2198 003CF0D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D219C 003CF0DC  7D 89 03 A6 */	mtctr r12
/* 803D21A0 003CF0E0  4E 80 04 21 */	bctrl 
.L_803D21A4:
/* 803D21A4 003CF0E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D21A8 003CF0E8  7C 08 03 A6 */	mtlr r0
/* 803D21AC 003CF0EC  38 21 00 10 */	addi r1, r1, 0x10
/* 803D21B0 003CF0F0  4E 80 00 20 */	blr 

.global "transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
"transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg":
/* 803D21B4 003CF0F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D21B8 003CF0F8  7C 08 02 A6 */	mflr r0
/* 803D21BC 003CF0FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D21C0 003CF100  80 63 00 08 */	lwz r3, 8(r3)
/* 803D21C4 003CF104  81 83 00 00 */	lwz r12, 0(r3)
/* 803D21C8 003CF108  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D21CC 003CF10C  7D 89 03 A6 */	mtctr r12
/* 803D21D0 003CF110  4E 80 04 21 */	bctrl 
/* 803D21D4 003CF114  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D21D8 003CF118  7C 08 03 A6 */	mtlr r0
/* 803D21DC 003CF11C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D21E0 003CF120  4E 80 00 20 */	blr 

.global do_transitCardIOError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_transitCardIOError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D21E4 003CF124  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D21E8 003CF128  7C 08 02 A6 */	mflr r0
/* 803D21EC 003CF12C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D21F0 003CF130  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803D21F4 003CF134  2C 00 00 00 */	cmpwi r0, 0
/* 803D21F8 003CF138  40 82 00 20 */	bne .L_803D2218
/* 803D21FC 003CF13C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2200 003CF140  38 A0 00 03 */	li r5, 3
/* 803D2204 003CF144  38 C0 00 00 */	li r6, 0
/* 803D2208 003CF148  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D220C 003CF14C  7D 89 03 A6 */	mtctr r12
/* 803D2210 003CF150  4E 80 04 21 */	bctrl 
/* 803D2214 003CF154  48 00 00 24 */	b .L_803D2238
.L_803D2218:
/* 803D2218 003CF158  2C 00 00 01 */	cmpwi r0, 1
/* 803D221C 003CF15C  40 82 00 1C */	bne .L_803D2238
/* 803D2220 003CF160  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2224 003CF164  38 A0 00 03 */	li r5, 3
/* 803D2228 003CF168  38 C0 00 00 */	li r6, 0
/* 803D222C 003CF16C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D2230 003CF170  7D 89 03 A6 */	mtctr r12
/* 803D2234 003CF174  4E 80 04 21 */	bctrl 
.L_803D2238:
/* 803D2238 003CF178  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D223C 003CF17C  7C 08 03 A6 */	mtlr r0
/* 803D2240 003CF180  38 21 00 10 */	addi r1, r1, 0x10
/* 803D2244 003CF184  4E 80 00 20 */	blr 

.global do_transitCardWrongDevice__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_transitCardWrongDevice__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D2248 003CF188  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D224C 003CF18C  7C 08 02 A6 */	mflr r0
/* 803D2250 003CF190  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D2254 003CF194  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803D2258 003CF198  2C 00 00 00 */	cmpwi r0, 0
/* 803D225C 003CF19C  40 82 00 20 */	bne .L_803D227C
/* 803D2260 003CF1A0  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2264 003CF1A4  38 A0 00 04 */	li r5, 4
/* 803D2268 003CF1A8  38 C0 00 00 */	li r6, 0
/* 803D226C 003CF1AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D2270 003CF1B0  7D 89 03 A6 */	mtctr r12
/* 803D2274 003CF1B4  4E 80 04 21 */	bctrl 
/* 803D2278 003CF1B8  48 00 00 24 */	b .L_803D229C
.L_803D227C:
/* 803D227C 003CF1BC  2C 00 00 01 */	cmpwi r0, 1
/* 803D2280 003CF1C0  40 82 00 1C */	bne .L_803D229C
/* 803D2284 003CF1C4  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2288 003CF1C8  38 A0 00 04 */	li r5, 4
/* 803D228C 003CF1CC  38 C0 00 00 */	li r6, 0
/* 803D2290 003CF1D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D2294 003CF1D4  7D 89 03 A6 */	mtctr r12
/* 803D2298 003CF1D8  4E 80 04 21 */	bctrl 
.L_803D229C:
/* 803D229C 003CF1DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D22A0 003CF1E0  7C 08 03 A6 */	mtlr r0
/* 803D22A4 003CF1E4  38 21 00 10 */	addi r1, r1, 0x10
/* 803D22A8 003CF1E8  4E 80 00 20 */	blr 

.global do_transitCardWrongSector__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_transitCardWrongSector__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D22AC 003CF1EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D22B0 003CF1F0  7C 08 02 A6 */	mflr r0
/* 803D22B4 003CF1F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D22B8 003CF1F8  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803D22BC 003CF1FC  2C 00 00 00 */	cmpwi r0, 0
/* 803D22C0 003CF200  40 82 00 20 */	bne .L_803D22E0
/* 803D22C4 003CF204  81 83 00 00 */	lwz r12, 0(r3)
/* 803D22C8 003CF208  38 A0 00 05 */	li r5, 5
/* 803D22CC 003CF20C  38 C0 00 00 */	li r6, 0
/* 803D22D0 003CF210  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D22D4 003CF214  7D 89 03 A6 */	mtctr r12
/* 803D22D8 003CF218  4E 80 04 21 */	bctrl 
/* 803D22DC 003CF21C  48 00 00 24 */	b .L_803D2300
.L_803D22E0:
/* 803D22E0 003CF220  2C 00 00 01 */	cmpwi r0, 1
/* 803D22E4 003CF224  40 82 00 1C */	bne .L_803D2300
/* 803D22E8 003CF228  81 83 00 00 */	lwz r12, 0(r3)
/* 803D22EC 003CF22C  38 A0 00 05 */	li r5, 5
/* 803D22F0 003CF230  38 C0 00 00 */	li r6, 0
/* 803D22F4 003CF234  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D22F8 003CF238  7D 89 03 A6 */	mtctr r12
/* 803D22FC 003CF23C  4E 80 04 21 */	bctrl 
.L_803D2300:
/* 803D2300 003CF240  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D2304 003CF244  7C 08 03 A6 */	mtlr r0
/* 803D2308 003CF248  38 21 00 10 */	addi r1, r1, 0x10
/* 803D230C 003CF24C  4E 80 00 20 */	blr 

.global do_transitCardBroken__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_transitCardBroken__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D2310 003CF250  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D2314 003CF254  7C 08 02 A6 */	mflr r0
/* 803D2318 003CF258  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D231C 003CF25C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803D2320 003CF260  2C 00 00 00 */	cmpwi r0, 0
/* 803D2324 003CF264  40 82 00 20 */	bne .L_803D2344
/* 803D2328 003CF268  81 83 00 00 */	lwz r12, 0(r3)
/* 803D232C 003CF26C  38 A0 00 13 */	li r5, 0x13
/* 803D2330 003CF270  38 C0 00 00 */	li r6, 0
/* 803D2334 003CF274  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D2338 003CF278  7D 89 03 A6 */	mtctr r12
/* 803D233C 003CF27C  4E 80 04 21 */	bctrl 
/* 803D2340 003CF280  48 00 00 24 */	b .L_803D2364
.L_803D2344:
/* 803D2344 003CF284  2C 00 00 01 */	cmpwi r0, 1
/* 803D2348 003CF288  40 82 00 1C */	bne .L_803D2364
/* 803D234C 003CF28C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2350 003CF290  38 A0 00 13 */	li r5, 0x13
/* 803D2354 003CF294  38 C0 00 00 */	li r6, 0
/* 803D2358 003CF298  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D235C 003CF29C  7D 89 03 A6 */	mtctr r12
/* 803D2360 003CF2A0  4E 80 04 21 */	bctrl 
.L_803D2364:
/* 803D2364 003CF2A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D2368 003CF2A8  7C 08 03 A6 */	mtlr r0
/* 803D236C 003CF2AC  38 21 00 10 */	addi r1, r1, 0x10
/* 803D2370 003CF2B0  4E 80 00 20 */	blr 

.global do_transitCardEncoding__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_transitCardEncoding__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D2374 003CF2B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D2378 003CF2B8  7C 08 02 A6 */	mflr r0
/* 803D237C 003CF2BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D2380 003CF2C0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803D2384 003CF2C4  2C 00 00 00 */	cmpwi r0, 0
/* 803D2388 003CF2C8  40 82 00 20 */	bne .L_803D23A8
/* 803D238C 003CF2CC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2390 003CF2D0  38 A0 00 13 */	li r5, 0x13
/* 803D2394 003CF2D4  38 C0 00 00 */	li r6, 0
/* 803D2398 003CF2D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D239C 003CF2DC  7D 89 03 A6 */	mtctr r12
/* 803D23A0 003CF2E0  4E 80 04 21 */	bctrl 
/* 803D23A4 003CF2E4  48 00 00 24 */	b .L_803D23C8
.L_803D23A8:
/* 803D23A8 003CF2E8  2C 00 00 01 */	cmpwi r0, 1
/* 803D23AC 003CF2EC  40 82 00 1C */	bne .L_803D23C8
/* 803D23B0 003CF2F0  81 83 00 00 */	lwz r12, 0(r3)
/* 803D23B4 003CF2F4  38 A0 00 13 */	li r5, 0x13
/* 803D23B8 003CF2F8  38 C0 00 00 */	li r6, 0
/* 803D23BC 003CF2FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D23C0 003CF300  7D 89 03 A6 */	mtctr r12
/* 803D23C4 003CF304  4E 80 04 21 */	bctrl 
.L_803D23C8:
/* 803D23C8 003CF308  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D23CC 003CF30C  7C 08 03 A6 */	mtlr r0
/* 803D23D0 003CF310  38 21 00 10 */	addi r1, r1, 0x10
/* 803D23D4 003CF314  4E 80 00 20 */	blr 

.global do_transitCardNoFileSpace__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_transitCardNoFileSpace__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D23D8 003CF318  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D23DC 003CF31C  7C 08 02 A6 */	mflr r0
/* 803D23E0 003CF320  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D23E4 003CF324  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803D23E8 003CF328  2C 00 00 00 */	cmpwi r0, 0
/* 803D23EC 003CF32C  40 82 00 20 */	bne .L_803D240C
/* 803D23F0 003CF330  81 83 00 00 */	lwz r12, 0(r3)
/* 803D23F4 003CF334  38 A0 00 06 */	li r5, 6
/* 803D23F8 003CF338  38 C0 00 00 */	li r6, 0
/* 803D23FC 003CF33C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D2400 003CF340  7D 89 03 A6 */	mtctr r12
/* 803D2404 003CF344  4E 80 04 21 */	bctrl 
/* 803D2408 003CF348  48 00 00 24 */	b .L_803D242C
.L_803D240C:
/* 803D240C 003CF34C  2C 00 00 01 */	cmpwi r0, 1
/* 803D2410 003CF350  40 82 00 1C */	bne .L_803D242C
/* 803D2414 003CF354  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2418 003CF358  38 A0 00 06 */	li r5, 6
/* 803D241C 003CF35C  38 C0 00 00 */	li r6, 0
/* 803D2420 003CF360  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D2424 003CF364  7D 89 03 A6 */	mtctr r12
/* 803D2428 003CF368  4E 80 04 21 */	bctrl 
.L_803D242C:
/* 803D242C 003CF36C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D2430 003CF370  7C 08 03 A6 */	mtlr r0
/* 803D2434 003CF374  38 21 00 10 */	addi r1, r1, 0x10
/* 803D2438 003CF378  4E 80 00 20 */	blr 

.global do_transitCardNoFileEntry__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_transitCardNoFileEntry__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D243C 003CF37C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D2440 003CF380  7C 08 02 A6 */	mflr r0
/* 803D2444 003CF384  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D2448 003CF388  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803D244C 003CF38C  2C 00 00 00 */	cmpwi r0, 0
/* 803D2450 003CF390  40 82 00 20 */	bne .L_803D2470
/* 803D2454 003CF394  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2458 003CF398  38 A0 00 06 */	li r5, 6
/* 803D245C 003CF39C  38 C0 00 00 */	li r6, 0
/* 803D2460 003CF3A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D2464 003CF3A4  7D 89 03 A6 */	mtctr r12
/* 803D2468 003CF3A8  4E 80 04 21 */	bctrl 
/* 803D246C 003CF3AC  48 00 00 24 */	b .L_803D2490
.L_803D2470:
/* 803D2470 003CF3B0  2C 00 00 01 */	cmpwi r0, 1
/* 803D2474 003CF3B4  40 82 00 1C */	bne .L_803D2490
/* 803D2478 003CF3B8  81 83 00 00 */	lwz r12, 0(r3)
/* 803D247C 003CF3BC  38 A0 00 06 */	li r5, 6
/* 803D2480 003CF3C0  38 C0 00 00 */	li r6, 0
/* 803D2484 003CF3C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D2488 003CF3C8  7D 89 03 A6 */	mtctr r12
/* 803D248C 003CF3CC  4E 80 04 21 */	bctrl 
.L_803D2490:
/* 803D2490 003CF3D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D2494 003CF3D4  7C 08 03 A6 */	mtlr r0
/* 803D2498 003CF3D8  38 21 00 10 */	addi r1, r1, 0x10
/* 803D249C 003CF3DC  4E 80 00 20 */	blr 

.global do_transitCardFileOpenError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_transitCardFileOpenError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D24A0 003CF3E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D24A4 003CF3E4  7C 08 02 A6 */	mflr r0
/* 803D24A8 003CF3E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D24AC 003CF3EC  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803D24B0 003CF3F0  2C 00 00 00 */	cmpwi r0, 0
/* 803D24B4 003CF3F4  40 82 00 20 */	bne .L_803D24D4
/* 803D24B8 003CF3F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803D24BC 003CF3FC  38 A0 00 16 */	li r5, 0x16
/* 803D24C0 003CF400  38 C0 00 00 */	li r6, 0
/* 803D24C4 003CF404  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D24C8 003CF408  7D 89 03 A6 */	mtctr r12
/* 803D24CC 003CF40C  4E 80 04 21 */	bctrl 
/* 803D24D0 003CF410  48 00 00 24 */	b .L_803D24F4
.L_803D24D4:
/* 803D24D4 003CF414  2C 00 00 01 */	cmpwi r0, 1
/* 803D24D8 003CF418  40 82 00 1C */	bne .L_803D24F4
/* 803D24DC 003CF41C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D24E0 003CF420  38 A0 00 16 */	li r5, 0x16
/* 803D24E4 003CF424  38 C0 00 00 */	li r6, 0
/* 803D24E8 003CF428  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D24EC 003CF42C  7D 89 03 A6 */	mtctr r12
/* 803D24F0 003CF430  4E 80 04 21 */	bctrl 
.L_803D24F4:
/* 803D24F4 003CF434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D24F8 003CF438  7C 08 03 A6 */	mtlr r0
/* 803D24FC 003CF43C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D2500 003CF440  4E 80 00 20 */	blr 

.global do_transitCardSerialNoError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
do_transitCardSerialNoError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr:
/* 803D2504 003CF444  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D2508 003CF448  7C 08 02 A6 */	mflr r0
/* 803D250C 003CF44C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D2510 003CF450  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803D2514 003CF454  2C 00 00 00 */	cmpwi r0, 0
/* 803D2518 003CF458  40 82 00 24 */	bne .L_803D253C
/* 803D251C 003CF45C  3C 60 80 49 */	lis r3, lbl_804968DC@ha
/* 803D2520 003CF460  3C A0 80 49 */	lis r5, lbl_804968EC@ha
/* 803D2524 003CF464  38 63 68 DC */	addi r3, r3, lbl_804968DC@l
/* 803D2528 003CF468  38 80 01 69 */	li r4, 0x169
/* 803D252C 003CF46C  38 A5 68 EC */	addi r5, r5, lbl_804968EC@l
/* 803D2530 003CF470  4C C6 31 82 */	crclr 6
/* 803D2534 003CF474  4B C5 81 0D */	bl panic_f__12JUTExceptionFPCciPCce
/* 803D2538 003CF478  48 00 00 24 */	b .L_803D255C
.L_803D253C:
/* 803D253C 003CF47C  2C 00 00 01 */	cmpwi r0, 1
/* 803D2540 003CF480  40 82 00 1C */	bne .L_803D255C
/* 803D2544 003CF484  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2548 003CF488  38 A0 00 0C */	li r5, 0xc
/* 803D254C 003CF48C  38 C0 00 00 */	li r6, 0
/* 803D2550 003CF490  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803D2554 003CF494  7D 89 03 A6 */	mtctr r12
/* 803D2558 003CF498  4E 80 04 21 */	bctrl 
.L_803D255C:
/* 803D255C 003CF49C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D2560 003CF4A0  7C 08 03 A6 */	mtlr r0
/* 803D2564 003CF4A4  38 21 00 10 */	addi r1, r1, 0x10
/* 803D2568 003CF4A8  4E 80 00 20 */	blr 

.global do_init__Q33ebi9CardError15FSMState_NoCardFPQ33ebi9CardError4TMgrPQ24Game8StateArg
do_init__Q33ebi9CardError15FSMState_NoCardFPQ33ebi9CardError4TMgrPQ24Game8StateArg:
/* 803D256C 003CF4AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D2570 003CF4B0  7C 08 02 A6 */	mflr r0
/* 803D2574 003CF4B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D2578 003CF4B8  38 00 00 00 */	li r0, 0
/* 803D257C 003CF4BC  98 03 00 10 */	stb r0, 0x10(r3)
/* 803D2580 003CF4C0  81 83 00 00 */	lwz r12, 0(r3)
/* 803D2584 003CF4C4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803D2588 003CF4C8  7D 89 03 A6 */	mtctr r12
/* 803D258C 003CF4CC  4E 80 04 21 */	bctrl 
/* 803D2590 003CF4D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D2594 003CF4D4  7C 08 03 A6 */	mtlr r0
/* 803D2598 003CF4D8  38 21 00 10 */	addi r1, r1, 0x10
/* 803D259C 003CF4DC  4E 80 00 20 */	blr 

.global do_exec__Q33ebi9CardError15FSMState_NoCardFPQ33ebi9CardError4TMgr
do_exec__Q33ebi9CardError15FSMState_NoCardFPQ33ebi9CardError4TMgr:
/* 803D25A0 003CF4E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D25A4 003CF4E4  7C 08 02 A6 */	mflr r0
/* 803D25A8 003CF4E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D25AC 003CF4EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D25B0 003CF4F0  7C 9F 23 78 */	mr r31, r4
/* 803D25B4 003CF4F4  93 C1 00 08 */	stw r30, 8(r1)
/* 803D25B8 003CF4F8  7C 7E 1B 78 */	mr r30, r3
/* 803D25BC 003CF4FC  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D25C0 003CF500  80 65 00 5C */	lwz r3, 0x5c(r5)
/* 803D25C4 003CF504  48 07 35 49 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803D25C8 003CF508  7C 03 00 D0 */	neg r0, r3
/* 803D25CC 003CF50C  7C 00 1B 78 */	or r0, r0, r3
/* 803D25D0 003CF510  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 803D25D4 003CF514  41 82 00 14 */	beq .L_803D25E8
/* 803D25D8 003CF518  7F E3 FB 78 */	mr r3, r31
/* 803D25DC 003CF51C  4B FF 15 25 */	bl close__Q33ebi6Screen11TMemoryCardFv
/* 803D25E0 003CF520  38 00 00 01 */	li r0, 1
/* 803D25E4 003CF524  98 1E 00 10 */	stb r0, 0x10(r30)
.L_803D25E8:
/* 803D25E8 003CF528  7F E3 FB 78 */	mr r3, r31
/* 803D25EC 003CF52C  4B FF 19 C5 */	bl isFinish__Q33ebi6Screen11TMemoryCardFv
/* 803D25F0 003CF530  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803D25F4 003CF534  41 82 00 44 */	beq .L_803D2638
/* 803D25F8 003CF538  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 803D25FC 003CF53C  28 00 00 00 */	cmplwi r0, 0
/* 803D2600 003CF540  41 82 00 20 */	beq .L_803D2620
/* 803D2604 003CF544  7F C3 F3 78 */	mr r3, r30
/* 803D2608 003CF548  7F E4 FB 78 */	mr r4, r31
/* 803D260C 003CF54C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D2610 003CF550  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803D2614 003CF554  7D 89 03 A6 */	mtctr r12
/* 803D2618 003CF558  4E 80 04 21 */	bctrl 
/* 803D261C 003CF55C  48 00 00 1C */	b .L_803D2638
.L_803D2620:
/* 803D2620 003CF560  7F C3 F3 78 */	mr r3, r30
/* 803D2624 003CF564  7F E4 FB 78 */	mr r4, r31
/* 803D2628 003CF568  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D262C 003CF56C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803D2630 003CF570  7D 89 03 A6 */	mtctr r12
/* 803D2634 003CF574  4E 80 04 21 */	bctrl 
.L_803D2638:
/* 803D2638 003CF578  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D263C 003CF57C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D2640 003CF580  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D2644 003CF584  7C 08 03 A6 */	mtlr r0
/* 803D2648 003CF588  38 21 00 10 */	addi r1, r1, 0x10
/* 803D264C 003CF58C  4E 80 00 20 */	blr 

.global __ct__Q33ebi9CardError4TMgrFv
__ct__Q33ebi9CardError4TMgrFv:
/* 803D2650 003CF590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D2654 003CF594  7C 08 02 A6 */	mflr r0
/* 803D2658 003CF598  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D265C 003CF59C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D2660 003CF5A0  7C 7F 1B 78 */	mr r31, r3
/* 803D2664 003CF5A4  48 00 05 15 */	bl __ct__Q33ebi6Screen11TMemoryCardFv
/* 803D2668 003CF5A8  38 00 00 00 */	li r0, 0
/* 803D266C 003CF5AC  3C 80 80 4F */	lis r4, "__vt__Q24Game35StateMachine<Q33ebi9CardError4TMgr>"@ha
/* 803D2670 003CF5B0  90 1F 02 98 */	stw r0, 0x298(r31)
/* 803D2674 003CF5B4  3C 60 80 4F */	lis r3, __vt__Q33ebi9CardError15FSMStateMachine@ha
/* 803D2678 003CF5B8  38 C4 8B 20 */	addi r6, r4, "__vt__Q24Game35StateMachine<Q33ebi9CardError4TMgr>"@l
/* 803D267C 003CF5BC  38 A0 FF FF */	li r5, -1
/* 803D2680 003CF5C0  90 1F 02 9C */	stw r0, 0x29c(r31)
/* 803D2684 003CF5C4  38 03 8C 74 */	addi r0, r3, __vt__Q33ebi9CardError15FSMStateMachine@l
/* 803D2688 003CF5C8  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D268C 003CF5CC  7F E4 FB 78 */	mr r4, r31
/* 803D2690 003CF5D0  90 DF 02 A8 */	stw r6, 0x2a8(r31)
/* 803D2694 003CF5D4  90 BF 02 C0 */	stw r5, 0x2c0(r31)
/* 803D2698 003CF5D8  90 1F 02 A8 */	stw r0, 0x2a8(r31)
/* 803D269C 003CF5DC  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D26A0 003CF5E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D26A4 003CF5E4  7D 89 03 A6 */	mtctr r12
/* 803D26A8 003CF5E8  4E 80 04 21 */	bctrl 
/* 803D26AC 003CF5EC  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D26B0 003CF5F0  7F E4 FB 78 */	mr r4, r31
/* 803D26B4 003CF5F4  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D26B8 003CF5F8  38 A0 00 00 */	li r5, 0
/* 803D26BC 003CF5FC  38 C0 00 00 */	li r6, 0
/* 803D26C0 003CF600  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D26C4 003CF604  7D 89 03 A6 */	mtctr r12
/* 803D26C8 003CF608  4E 80 04 21 */	bctrl 
/* 803D26CC 003CF60C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D26D0 003CF610  7F E3 FB 78 */	mr r3, r31
/* 803D26D4 003CF614  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D26D8 003CF618  7C 08 03 A6 */	mtlr r0
/* 803D26DC 003CF61C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D26E0 003CF620  4E 80 00 20 */	blr 

.global "start__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
"start__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg":
/* 803D26E4 003CF624  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D26E8 003CF628  7C 08 02 A6 */	mflr r0
/* 803D26EC 003CF62C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D26F0 003CF630  38 00 00 00 */	li r0, 0
/* 803D26F4 003CF634  90 04 02 C4 */	stw r0, 0x2c4(r4)
/* 803D26F8 003CF638  81 83 00 00 */	lwz r12, 0(r3)
/* 803D26FC 003CF63C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D2700 003CF640  7D 89 03 A6 */	mtctr r12
/* 803D2704 003CF644  4E 80 04 21 */	bctrl 
/* 803D2708 003CF648  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D270C 003CF64C  7C 08 03 A6 */	mtlr r0
/* 803D2710 003CF650  38 21 00 10 */	addi r1, r1, 0x10
/* 803D2714 003CF654  4E 80 00 20 */	blr 

.global __dt__Q33ebi6Screen11TMemoryCardFv
__dt__Q33ebi6Screen11TMemoryCardFv:
/* 803D2718 003CF658  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D271C 003CF65C  7C 08 02 A6 */	mflr r0
/* 803D2720 003CF660  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D2724 003CF664  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D2728 003CF668  7C 9F 23 78 */	mr r31, r4
/* 803D272C 003CF66C  93 C1 00 08 */	stw r30, 8(r1)
/* 803D2730 003CF670  7C 7E 1B 79 */	or. r30, r3, r3
/* 803D2734 003CF674  41 82 04 28 */	beq .L_803D2B5C
/* 803D2738 003CF678  34 1E 02 5C */	addic. r0, r30, 0x25c
/* 803D273C 003CF67C  41 82 00 64 */	beq .L_803D27A0
/* 803D2740 003CF680  34 1E 02 5C */	addic. r0, r30, 0x25c
/* 803D2744 003CF684  41 82 00 5C */	beq .L_803D27A0
/* 803D2748 003CF688  3C 60 80 4E */	lis r3, __vt__Q25efx2d9T2DCursor@ha
/* 803D274C 003CF68C  34 1E 02 5C */	addic. r0, r30, 0x25c
/* 803D2750 003CF690  38 63 76 48 */	addi r3, r3, __vt__Q25efx2d9T2DCursor@l
/* 803D2754 003CF694  90 7E 02 5C */	stw r3, 0x25c(r30)
/* 803D2758 003CF698  38 03 00 18 */	addi r0, r3, 0x18
/* 803D275C 003CF69C  90 1E 02 64 */	stw r0, 0x264(r30)
/* 803D2760 003CF6A0  41 82 00 40 */	beq .L_803D27A0
/* 803D2764 003CF6A4  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803D2768 003CF6A8  34 1E 02 5C */	addic. r0, r30, 0x25c
/* 803D276C 003CF6AC  38 63 73 CC */	addi r3, r3, __vt__Q25efx2d9TChasePos@l
/* 803D2770 003CF6B0  90 7E 02 5C */	stw r3, 0x25c(r30)
/* 803D2774 003CF6B4  38 03 00 18 */	addi r0, r3, 0x18
/* 803D2778 003CF6B8  90 1E 02 64 */	stw r0, 0x264(r30)
/* 803D277C 003CF6BC  41 82 00 24 */	beq .L_803D27A0
/* 803D2780 003CF6C0  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803D2784 003CF6C4  38 7E 02 64 */	addi r3, r30, 0x264
/* 803D2788 003CF6C8  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803D278C 003CF6CC  38 80 00 00 */	li r4, 0
/* 803D2790 003CF6D0  90 BE 02 5C */	stw r5, 0x25c(r30)
/* 803D2794 003CF6D4  38 05 00 18 */	addi r0, r5, 0x18
/* 803D2798 003CF6D8  90 1E 02 64 */	stw r0, 0x264(r30)
/* 803D279C 003CF6DC  4B CB D5 01 */	bl __dt__18JPAEmitterCallBackFv
.L_803D27A0:
/* 803D27A0 003CF6E0  34 1E 02 24 */	addic. r0, r30, 0x224
/* 803D27A4 003CF6E4  41 82 00 64 */	beq .L_803D2808
/* 803D27A8 003CF6E8  34 1E 02 24 */	addic. r0, r30, 0x224
/* 803D27AC 003CF6EC  41 82 00 5C */	beq .L_803D2808
/* 803D27B0 003CF6F0  3C 60 80 4E */	lis r3, __vt__Q25efx2d9T2DCursor@ha
/* 803D27B4 003CF6F4  34 1E 02 24 */	addic. r0, r30, 0x224
/* 803D27B8 003CF6F8  38 63 76 48 */	addi r3, r3, __vt__Q25efx2d9T2DCursor@l
/* 803D27BC 003CF6FC  90 7E 02 24 */	stw r3, 0x224(r30)
/* 803D27C0 003CF700  38 03 00 18 */	addi r0, r3, 0x18
/* 803D27C4 003CF704  90 1E 02 2C */	stw r0, 0x22c(r30)
/* 803D27C8 003CF708  41 82 00 40 */	beq .L_803D2808
/* 803D27CC 003CF70C  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803D27D0 003CF710  34 1E 02 24 */	addic. r0, r30, 0x224
/* 803D27D4 003CF714  38 63 73 CC */	addi r3, r3, __vt__Q25efx2d9TChasePos@l
/* 803D27D8 003CF718  90 7E 02 24 */	stw r3, 0x224(r30)
/* 803D27DC 003CF71C  38 03 00 18 */	addi r0, r3, 0x18
/* 803D27E0 003CF720  90 1E 02 2C */	stw r0, 0x22c(r30)
/* 803D27E4 003CF724  41 82 00 24 */	beq .L_803D2808
/* 803D27E8 003CF728  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803D27EC 003CF72C  38 7E 02 2C */	addi r3, r30, 0x22c
/* 803D27F0 003CF730  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803D27F4 003CF734  38 80 00 00 */	li r4, 0
/* 803D27F8 003CF738  90 BE 02 24 */	stw r5, 0x224(r30)
/* 803D27FC 003CF73C  38 05 00 18 */	addi r0, r5, 0x18
/* 803D2800 003CF740  90 1E 02 2C */	stw r0, 0x22c(r30)
/* 803D2804 003CF744  4B CB D4 99 */	bl __dt__18JPAEmitterCallBackFv
.L_803D2808:
/* 803D2808 003CF748  34 1E 02 04 */	addic. r0, r30, 0x204
/* 803D280C 003CF74C  41 82 00 58 */	beq .L_803D2864
/* 803D2810 003CF750  3C 60 80 4F */	lis r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803D2814 003CF754  34 1E 02 04 */	addic. r0, r30, 0x204
/* 803D2818 003CF758  38 03 88 0C */	addi r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803D281C 003CF75C  90 1E 02 04 */	stw r0, 0x204(r30)
/* 803D2820 003CF760  41 82 00 44 */	beq .L_803D2864
/* 803D2824 003CF764  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2828 003CF768  34 1E 02 04 */	addic. r0, r30, 0x204
/* 803D282C 003CF76C  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2830 003CF770  90 1E 02 04 */	stw r0, 0x204(r30)
/* 803D2834 003CF774  41 82 00 30 */	beq .L_803D2864
/* 803D2838 003CF778  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D283C 003CF77C  34 1E 02 04 */	addic. r0, r30, 0x204
/* 803D2840 003CF780  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2844 003CF784  90 1E 02 04 */	stw r0, 0x204(r30)
/* 803D2848 003CF788  41 82 00 1C */	beq .L_803D2864
/* 803D284C 003CF78C  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803D2850 003CF790  38 7E 02 04 */	addi r3, r30, 0x204
/* 803D2854 003CF794  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803D2858 003CF798  38 80 00 00 */	li r4, 0
/* 803D285C 003CF79C  90 1E 02 04 */	stw r0, 0x204(r30)
/* 803D2860 003CF7A0  48 03 ED 29 */	bl __dt__5CNodeFv
.L_803D2864:
/* 803D2864 003CF7A4  34 1E 01 C8 */	addic. r0, r30, 0x1c8
/* 803D2868 003CF7A8  41 82 00 6C */	beq .L_803D28D4
/* 803D286C 003CF7AC  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D2870 003CF7B0  34 1E 01 E8 */	addic. r0, r30, 0x1e8
/* 803D2874 003CF7B4  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D2878 003CF7B8  90 1E 01 C8 */	stw r0, 0x1c8(r30)
/* 803D287C 003CF7BC  41 82 00 10 */	beq .L_803D288C
/* 803D2880 003CF7C0  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D2884 003CF7C4  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D2888 003CF7C8  90 1E 01 E8 */	stw r0, 0x1e8(r30)
.L_803D288C:
/* 803D288C 003CF7CC  34 1E 01 C8 */	addic. r0, r30, 0x1c8
/* 803D2890 003CF7D0  41 82 00 44 */	beq .L_803D28D4
/* 803D2894 003CF7D4  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2898 003CF7D8  34 1E 01 C8 */	addic. r0, r30, 0x1c8
/* 803D289C 003CF7DC  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D28A0 003CF7E0  90 1E 01 C8 */	stw r0, 0x1c8(r30)
/* 803D28A4 003CF7E4  41 82 00 30 */	beq .L_803D28D4
/* 803D28A8 003CF7E8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D28AC 003CF7EC  34 1E 01 C8 */	addic. r0, r30, 0x1c8
/* 803D28B0 003CF7F0  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803D28B4 003CF7F4  90 1E 01 C8 */	stw r0, 0x1c8(r30)
/* 803D28B8 003CF7F8  41 82 00 1C */	beq .L_803D28D4
/* 803D28BC 003CF7FC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803D28C0 003CF800  38 7E 01 C8 */	addi r3, r30, 0x1c8
/* 803D28C4 003CF804  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803D28C8 003CF808  38 80 00 00 */	li r4, 0
/* 803D28CC 003CF80C  90 1E 01 C8 */	stw r0, 0x1c8(r30)
/* 803D28D0 003CF810  48 03 EC B9 */	bl __dt__5CNodeFv
.L_803D28D4:
/* 803D28D4 003CF814  34 1E 01 8C */	addic. r0, r30, 0x18c
/* 803D28D8 003CF818  41 82 00 6C */	beq .L_803D2944
/* 803D28DC 003CF81C  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D28E0 003CF820  34 1E 01 AC */	addic. r0, r30, 0x1ac
/* 803D28E4 003CF824  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D28E8 003CF828  90 1E 01 8C */	stw r0, 0x18c(r30)
/* 803D28EC 003CF82C  41 82 00 10 */	beq .L_803D28FC
/* 803D28F0 003CF830  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D28F4 003CF834  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D28F8 003CF838  90 1E 01 AC */	stw r0, 0x1ac(r30)
.L_803D28FC:
/* 803D28FC 003CF83C  34 1E 01 8C */	addic. r0, r30, 0x18c
/* 803D2900 003CF840  41 82 00 44 */	beq .L_803D2944
/* 803D2904 003CF844  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2908 003CF848  34 1E 01 8C */	addic. r0, r30, 0x18c
/* 803D290C 003CF84C  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2910 003CF850  90 1E 01 8C */	stw r0, 0x18c(r30)
/* 803D2914 003CF854  41 82 00 30 */	beq .L_803D2944
/* 803D2918 003CF858  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D291C 003CF85C  34 1E 01 8C */	addic. r0, r30, 0x18c
/* 803D2920 003CF860  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2924 003CF864  90 1E 01 8C */	stw r0, 0x18c(r30)
/* 803D2928 003CF868  41 82 00 1C */	beq .L_803D2944
/* 803D292C 003CF86C  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803D2930 003CF870  38 7E 01 8C */	addi r3, r30, 0x18c
/* 803D2934 003CF874  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803D2938 003CF878  38 80 00 00 */	li r4, 0
/* 803D293C 003CF87C  90 1E 01 8C */	stw r0, 0x18c(r30)
/* 803D2940 003CF880  48 03 EC 49 */	bl __dt__5CNodeFv
.L_803D2944:
/* 803D2944 003CF884  34 1E 01 50 */	addic. r0, r30, 0x150
/* 803D2948 003CF888  41 82 00 6C */	beq .L_803D29B4
/* 803D294C 003CF88C  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D2950 003CF890  34 1E 01 70 */	addic. r0, r30, 0x170
/* 803D2954 003CF894  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D2958 003CF898  90 1E 01 50 */	stw r0, 0x150(r30)
/* 803D295C 003CF89C  41 82 00 10 */	beq .L_803D296C
/* 803D2960 003CF8A0  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D2964 003CF8A4  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D2968 003CF8A8  90 1E 01 70 */	stw r0, 0x170(r30)
.L_803D296C:
/* 803D296C 003CF8AC  34 1E 01 50 */	addic. r0, r30, 0x150
/* 803D2970 003CF8B0  41 82 00 44 */	beq .L_803D29B4
/* 803D2974 003CF8B4  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2978 003CF8B8  34 1E 01 50 */	addic. r0, r30, 0x150
/* 803D297C 003CF8BC  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2980 003CF8C0  90 1E 01 50 */	stw r0, 0x150(r30)
/* 803D2984 003CF8C4  41 82 00 30 */	beq .L_803D29B4
/* 803D2988 003CF8C8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D298C 003CF8CC  34 1E 01 50 */	addic. r0, r30, 0x150
/* 803D2990 003CF8D0  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2994 003CF8D4  90 1E 01 50 */	stw r0, 0x150(r30)
/* 803D2998 003CF8D8  41 82 00 1C */	beq .L_803D29B4
/* 803D299C 003CF8DC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803D29A0 003CF8E0  38 7E 01 50 */	addi r3, r30, 0x150
/* 803D29A4 003CF8E4  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803D29A8 003CF8E8  38 80 00 00 */	li r4, 0
/* 803D29AC 003CF8EC  90 1E 01 50 */	stw r0, 0x150(r30)
/* 803D29B0 003CF8F0  48 03 EB D9 */	bl __dt__5CNodeFv
.L_803D29B4:
/* 803D29B4 003CF8F4  34 1E 01 14 */	addic. r0, r30, 0x114
/* 803D29B8 003CF8F8  41 82 00 6C */	beq .L_803D2A24
/* 803D29BC 003CF8FC  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D29C0 003CF900  34 1E 01 34 */	addic. r0, r30, 0x134
/* 803D29C4 003CF904  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D29C8 003CF908  90 1E 01 14 */	stw r0, 0x114(r30)
/* 803D29CC 003CF90C  41 82 00 10 */	beq .L_803D29DC
/* 803D29D0 003CF910  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D29D4 003CF914  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D29D8 003CF918  90 1E 01 34 */	stw r0, 0x134(r30)
.L_803D29DC:
/* 803D29DC 003CF91C  34 1E 01 14 */	addic. r0, r30, 0x114
/* 803D29E0 003CF920  41 82 00 44 */	beq .L_803D2A24
/* 803D29E4 003CF924  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D29E8 003CF928  34 1E 01 14 */	addic. r0, r30, 0x114
/* 803D29EC 003CF92C  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D29F0 003CF930  90 1E 01 14 */	stw r0, 0x114(r30)
/* 803D29F4 003CF934  41 82 00 30 */	beq .L_803D2A24
/* 803D29F8 003CF938  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D29FC 003CF93C  34 1E 01 14 */	addic. r0, r30, 0x114
/* 803D2A00 003CF940  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2A04 003CF944  90 1E 01 14 */	stw r0, 0x114(r30)
/* 803D2A08 003CF948  41 82 00 1C */	beq .L_803D2A24
/* 803D2A0C 003CF94C  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803D2A10 003CF950  38 7E 01 14 */	addi r3, r30, 0x114
/* 803D2A14 003CF954  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803D2A18 003CF958  38 80 00 00 */	li r4, 0
/* 803D2A1C 003CF95C  90 1E 01 14 */	stw r0, 0x114(r30)
/* 803D2A20 003CF960  48 03 EB 69 */	bl __dt__5CNodeFv
.L_803D2A24:
/* 803D2A24 003CF964  34 1E 00 D8 */	addic. r0, r30, 0xd8
/* 803D2A28 003CF968  41 82 00 6C */	beq .L_803D2A94
/* 803D2A2C 003CF96C  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D2A30 003CF970  34 1E 00 F8 */	addic. r0, r30, 0xf8
/* 803D2A34 003CF974  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D2A38 003CF978  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 803D2A3C 003CF97C  41 82 00 10 */	beq .L_803D2A4C
/* 803D2A40 003CF980  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D2A44 003CF984  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D2A48 003CF988  90 1E 00 F8 */	stw r0, 0xf8(r30)
.L_803D2A4C:
/* 803D2A4C 003CF98C  34 1E 00 D8 */	addic. r0, r30, 0xd8
/* 803D2A50 003CF990  41 82 00 44 */	beq .L_803D2A94
/* 803D2A54 003CF994  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2A58 003CF998  34 1E 00 D8 */	addic. r0, r30, 0xd8
/* 803D2A5C 003CF99C  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2A60 003CF9A0  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 803D2A64 003CF9A4  41 82 00 30 */	beq .L_803D2A94
/* 803D2A68 003CF9A8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2A6C 003CF9AC  34 1E 00 D8 */	addic. r0, r30, 0xd8
/* 803D2A70 003CF9B0  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2A74 003CF9B4  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 803D2A78 003CF9B8  41 82 00 1C */	beq .L_803D2A94
/* 803D2A7C 003CF9BC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803D2A80 003CF9C0  38 7E 00 D8 */	addi r3, r30, 0xd8
/* 803D2A84 003CF9C4  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803D2A88 003CF9C8  38 80 00 00 */	li r4, 0
/* 803D2A8C 003CF9CC  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 803D2A90 003CF9D0  48 03 EA F9 */	bl __dt__5CNodeFv
.L_803D2A94:
/* 803D2A94 003CF9D4  34 1E 00 8C */	addic. r0, r30, 0x8c
/* 803D2A98 003CF9D8  41 82 00 58 */	beq .L_803D2AF0
/* 803D2A9C 003CF9DC  3C 60 80 4F */	lis r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803D2AA0 003CF9E0  34 1E 00 8C */	addic. r0, r30, 0x8c
/* 803D2AA4 003CF9E4  38 03 8A 54 */	addi r0, r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803D2AA8 003CF9E8  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803D2AAC 003CF9EC  41 82 00 44 */	beq .L_803D2AF0
/* 803D2AB0 003CF9F0  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2AB4 003CF9F4  34 1E 00 8C */	addic. r0, r30, 0x8c
/* 803D2AB8 003CF9F8  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2ABC 003CF9FC  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803D2AC0 003CFA00  41 82 00 30 */	beq .L_803D2AF0
/* 803D2AC4 003CFA04  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2AC8 003CFA08  34 1E 00 8C */	addic. r0, r30, 0x8c
/* 803D2ACC 003CFA0C  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2AD0 003CFA10  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803D2AD4 003CFA14  41 82 00 1C */	beq .L_803D2AF0
/* 803D2AD8 003CFA18  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803D2ADC 003CFA1C  38 7E 00 8C */	addi r3, r30, 0x8c
/* 803D2AE0 003CFA20  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803D2AE4 003CFA24  38 80 00 00 */	li r4, 0
/* 803D2AE8 003CFA28  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 803D2AEC 003CFA2C  48 03 EA 9D */	bl __dt__5CNodeFv
.L_803D2AF0:
/* 803D2AF0 003CFA30  34 1E 00 40 */	addic. r0, r30, 0x40
/* 803D2AF4 003CFA34  41 82 00 58 */	beq .L_803D2B4C
/* 803D2AF8 003CFA38  3C 60 80 4F */	lis r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803D2AFC 003CFA3C  34 1E 00 40 */	addic. r0, r30, 0x40
/* 803D2B00 003CFA40  38 03 8A 54 */	addi r0, r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803D2B04 003CFA44  90 1E 00 40 */	stw r0, 0x40(r30)
/* 803D2B08 003CFA48  41 82 00 44 */	beq .L_803D2B4C
/* 803D2B0C 003CFA4C  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2B10 003CFA50  34 1E 00 40 */	addic. r0, r30, 0x40
/* 803D2B14 003CFA54  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2B18 003CFA58  90 1E 00 40 */	stw r0, 0x40(r30)
/* 803D2B1C 003CFA5C  41 82 00 30 */	beq .L_803D2B4C
/* 803D2B20 003CFA60  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2B24 003CFA64  34 1E 00 40 */	addic. r0, r30, 0x40
/* 803D2B28 003CFA68  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2B2C 003CFA6C  90 1E 00 40 */	stw r0, 0x40(r30)
/* 803D2B30 003CFA70  41 82 00 1C */	beq .L_803D2B4C
/* 803D2B34 003CFA74  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803D2B38 003CFA78  38 7E 00 40 */	addi r3, r30, 0x40
/* 803D2B3C 003CFA7C  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803D2B40 003CFA80  38 80 00 00 */	li r4, 0
/* 803D2B44 003CFA84  90 1E 00 40 */	stw r0, 0x40(r30)
/* 803D2B48 003CFA88  48 03 EA 41 */	bl __dt__5CNodeFv
.L_803D2B4C:
/* 803D2B4C 003CFA8C  7F E0 07 35 */	extsh. r0, r31
/* 803D2B50 003CFA90  40 81 00 0C */	ble .L_803D2B5C
/* 803D2B54 003CFA94  7F C3 F3 78 */	mr r3, r30
/* 803D2B58 003CFA98  4B C5 15 5D */	bl __dl__FPv
.L_803D2B5C:
/* 803D2B5C 003CFA9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D2B60 003CFAA0  7F C3 F3 78 */	mr r3, r30
/* 803D2B64 003CFAA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D2B68 003CFAA8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D2B6C 003CFAAC  7C 08 03 A6 */	mtlr r0
/* 803D2B70 003CFAB0  38 21 00 10 */	addi r1, r1, 0x10
/* 803D2B74 003CFAB4  4E 80 00 20 */	blr 

.global __ct__Q33ebi6Screen11TMemoryCardFv
__ct__Q33ebi6Screen11TMemoryCardFv:
/* 803D2B78 003CFAB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803D2B7C 003CFABC  7C 08 02 A6 */	mflr r0
/* 803D2B80 003CFAC0  38 80 00 00 */	li r4, 0
/* 803D2B84 003CFAC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D2B88 003CFAC8  38 00 00 01 */	li r0, 1
/* 803D2B8C 003CFACC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803D2B90 003CFAD0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D2B94 003CFAD4  7C 7E 1B 78 */	mr r30, r3
/* 803D2B98 003CFAD8  3B FE 00 40 */	addi r31, r30, 0x40
/* 803D2B9C 003CFADC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803D2BA0 003CFAE0  7F FD FB 78 */	mr r29, r31
/* 803D2BA4 003CFAE4  90 83 00 00 */	stw r4, 0(r3)
/* 803D2BA8 003CFAE8  90 83 00 08 */	stw r4, 8(r3)
/* 803D2BAC 003CFAEC  7F E3 FB 78 */	mr r3, r31
/* 803D2BB0 003CFAF0  90 9E 00 0C */	stw r4, 0xc(r30)
/* 803D2BB4 003CFAF4  90 9E 00 10 */	stw r4, 0x10(r30)
/* 803D2BB8 003CFAF8  90 9E 00 14 */	stw r4, 0x14(r30)
/* 803D2BBC 003CFAFC  98 1E 00 19 */	stb r0, 0x19(r30)
/* 803D2BC0 003CFB00  90 9E 00 20 */	stw r4, 0x20(r30)
/* 803D2BC4 003CFB04  90 9E 00 24 */	stw r4, 0x24(r30)
/* 803D2BC8 003CFB08  90 9E 00 28 */	stw r4, 0x28(r30)
/* 803D2BCC 003CFB0C  90 9E 00 2C */	stw r4, 0x2c(r30)
/* 803D2BD0 003CFB10  48 03 E7 C1 */	bl __ct__5CNodeFv
/* 803D2BD4 003CFB14  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D2BD8 003CFB18  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2BDC 003CFB1C  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D2BE0 003CFB20  3C C0 80 4F */	lis r6, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2BE4 003CFB24  90 1F 00 00 */	stw r0, 0(r31)
/* 803D2BE8 003CFB28  38 00 00 00 */	li r0, 0
/* 803D2BEC 003CFB2C  3C 60 80 3D */	lis r3, __ct__Q23ebi16E2DFullFontColorFv@ha
/* 803D2BF0 003CFB30  38 E0 00 01 */	li r7, 1
/* 803D2BF4 003CFB34  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803D2BF8 003CFB38  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2BFC 003CFB3C  38 83 FE EC */	addi r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
/* 803D2C00 003CFB40  38 66 88 30 */	addi r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2C04 003CFB44  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2C08 003CFB48  3C A0 80 4F */	lis r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803D2C0C 003CFB4C  38 05 8A 54 */	addi r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803D2C10 003CFB50  38 C0 00 10 */	li r6, 0x10
/* 803D2C14 003CFB54  90 7D 00 00 */	stw r3, 0(r29)
/* 803D2C18 003CFB58  38 7F 00 20 */	addi r3, r31, 0x20
/* 803D2C1C 003CFB5C  38 A0 00 00 */	li r5, 0
/* 803D2C20 003CFB60  98 FD 00 1C */	stb r7, 0x1c(r29)
/* 803D2C24 003CFB64  38 E0 00 02 */	li r7, 2
/* 803D2C28 003CFB68  90 1F 00 00 */	stw r0, 0(r31)
/* 803D2C2C 003CFB6C  4B CE EC 11 */	bl __construct_array
/* 803D2C30 003CFB70  C0 22 17 68 */	lfs f1, lbl_8051FAC8@sda21(r2)
/* 803D2C34 003CFB74  3B BE 00 8C */	addi r29, r30, 0x8c
/* 803D2C38 003CFB78  C0 02 17 70 */	lfs f0, lbl_8051FAD0@sda21(r2)
/* 803D2C3C 003CFB7C  38 80 00 01 */	li r4, 1
/* 803D2C40 003CFB80  D0 3F 00 40 */	stfs f1, 0x40(r31)
/* 803D2C44 003CFB84  38 00 00 00 */	li r0, 0
/* 803D2C48 003CFB88  7F A3 EB 78 */	mr r3, r29
/* 803D2C4C 003CFB8C  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 803D2C50 003CFB90  98 9F 00 48 */	stb r4, 0x48(r31)
/* 803D2C54 003CFB94  98 1F 00 49 */	stb r0, 0x49(r31)
/* 803D2C58 003CFB98  98 1F 00 1C */	stb r0, 0x1c(r31)
/* 803D2C5C 003CFB9C  48 03 E7 35 */	bl __ct__5CNodeFv
/* 803D2C60 003CFBA0  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D2C64 003CFBA4  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2C68 003CFBA8  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D2C6C 003CFBAC  3C C0 80 4F */	lis r6, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2C70 003CFBB0  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2C74 003CFBB4  38 00 00 00 */	li r0, 0
/* 803D2C78 003CFBB8  3C 60 80 3D */	lis r3, __ct__Q23ebi16E2DFullFontColorFv@ha
/* 803D2C7C 003CFBBC  38 E0 00 01 */	li r7, 1
/* 803D2C80 003CFBC0  90 1D 00 18 */	stw r0, 0x18(r29)
/* 803D2C84 003CFBC4  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2C88 003CFBC8  38 83 FE EC */	addi r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
/* 803D2C8C 003CFBCC  38 66 88 30 */	addi r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2C90 003CFBD0  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2C94 003CFBD4  3C A0 80 4F */	lis r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803D2C98 003CFBD8  38 05 8A 54 */	addi r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803D2C9C 003CFBDC  38 C0 00 10 */	li r6, 0x10
/* 803D2CA0 003CFBE0  90 7D 00 00 */	stw r3, 0(r29)
/* 803D2CA4 003CFBE4  38 7D 00 20 */	addi r3, r29, 0x20
/* 803D2CA8 003CFBE8  38 A0 00 00 */	li r5, 0
/* 803D2CAC 003CFBEC  98 FD 00 1C */	stb r7, 0x1c(r29)
/* 803D2CB0 003CFBF0  38 E0 00 02 */	li r7, 2
/* 803D2CB4 003CFBF4  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2CB8 003CFBF8  4B CE EB 85 */	bl __construct_array
/* 803D2CBC 003CFBFC  C0 22 17 68 */	lfs f1, lbl_8051FAC8@sda21(r2)
/* 803D2CC0 003CFC00  3B FE 00 D8 */	addi r31, r30, 0xd8
/* 803D2CC4 003CFC04  C0 02 17 70 */	lfs f0, lbl_8051FAD0@sda21(r2)
/* 803D2CC8 003CFC08  38 80 00 01 */	li r4, 1
/* 803D2CCC 003CFC0C  D0 3D 00 40 */	stfs f1, 0x40(r29)
/* 803D2CD0 003CFC10  38 00 00 00 */	li r0, 0
/* 803D2CD4 003CFC14  7F E3 FB 78 */	mr r3, r31
/* 803D2CD8 003CFC18  D0 1D 00 44 */	stfs f0, 0x44(r29)
/* 803D2CDC 003CFC1C  98 9D 00 48 */	stb r4, 0x48(r29)
/* 803D2CE0 003CFC20  98 1D 00 49 */	stb r0, 0x49(r29)
/* 803D2CE4 003CFC24  98 1D 00 1C */	stb r0, 0x1c(r29)
/* 803D2CE8 003CFC28  48 03 E6 A9 */	bl __ct__5CNodeFv
/* 803D2CEC 003CFC2C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D2CF0 003CFC30  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2CF4 003CFC34  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D2CF8 003CFC38  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2CFC 003CFC3C  90 1F 00 00 */	stw r0, 0(r31)
/* 803D2D00 003CFC40  38 00 00 00 */	li r0, 0
/* 803D2D04 003CFC44  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D2D08 003CFC48  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D2D0C 003CFC4C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803D2D10 003CFC50  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2D14 003CFC54  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2D18 003CFC58  38 C0 00 01 */	li r6, 1
/* 803D2D1C 003CFC5C  90 1F 00 00 */	stw r0, 0(r31)
/* 803D2D20 003CFC60  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D2D24 003CFC64  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D2D28 003CFC68  38 7F 00 20 */	addi r3, r31, 0x20
/* 803D2D2C 003CFC6C  90 FF 00 00 */	stw r7, 0(r31)
/* 803D2D30 003CFC70  38 80 00 00 */	li r4, 0
/* 803D2D34 003CFC74  98 DF 00 1C */	stb r6, 0x1c(r31)
/* 803D2D38 003CFC78  90 BF 00 00 */	stw r5, 0(r31)
/* 803D2D3C 003CFC7C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 803D2D40 003CFC80  4B C9 49 39 */	bl init__12J3DFrameCtrlFs
/* 803D2D44 003CFC84  3B BE 01 14 */	addi r29, r30, 0x114
/* 803D2D48 003CFC88  7F A3 EB 78 */	mr r3, r29
/* 803D2D4C 003CFC8C  48 03 E6 45 */	bl __ct__5CNodeFv
/* 803D2D50 003CFC90  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D2D54 003CFC94  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2D58 003CFC98  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D2D5C 003CFC9C  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2D60 003CFCA0  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2D64 003CFCA4  38 00 00 00 */	li r0, 0
/* 803D2D68 003CFCA8  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D2D6C 003CFCAC  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D2D70 003CFCB0  90 1D 00 18 */	stw r0, 0x18(r29)
/* 803D2D74 003CFCB4  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2D78 003CFCB8  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2D7C 003CFCBC  38 C0 00 01 */	li r6, 1
/* 803D2D80 003CFCC0  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2D84 003CFCC4  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D2D88 003CFCC8  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D2D8C 003CFCCC  38 7D 00 20 */	addi r3, r29, 0x20
/* 803D2D90 003CFCD0  90 FD 00 00 */	stw r7, 0(r29)
/* 803D2D94 003CFCD4  38 80 00 00 */	li r4, 0
/* 803D2D98 003CFCD8  98 DD 00 1C */	stb r6, 0x1c(r29)
/* 803D2D9C 003CFCDC  90 BD 00 00 */	stw r5, 0(r29)
/* 803D2DA0 003CFCE0  90 1D 00 20 */	stw r0, 0x20(r29)
/* 803D2DA4 003CFCE4  4B C9 48 D5 */	bl init__12J3DFrameCtrlFs
/* 803D2DA8 003CFCE8  3B BE 01 50 */	addi r29, r30, 0x150
/* 803D2DAC 003CFCEC  7F A3 EB 78 */	mr r3, r29
/* 803D2DB0 003CFCF0  48 03 E5 E1 */	bl __ct__5CNodeFv
/* 803D2DB4 003CFCF4  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D2DB8 003CFCF8  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2DBC 003CFCFC  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D2DC0 003CFD00  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2DC4 003CFD04  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2DC8 003CFD08  38 00 00 00 */	li r0, 0
/* 803D2DCC 003CFD0C  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D2DD0 003CFD10  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D2DD4 003CFD14  90 1D 00 18 */	stw r0, 0x18(r29)
/* 803D2DD8 003CFD18  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2DDC 003CFD1C  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2DE0 003CFD20  38 C0 00 01 */	li r6, 1
/* 803D2DE4 003CFD24  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2DE8 003CFD28  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D2DEC 003CFD2C  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D2DF0 003CFD30  38 7D 00 20 */	addi r3, r29, 0x20
/* 803D2DF4 003CFD34  90 FD 00 00 */	stw r7, 0(r29)
/* 803D2DF8 003CFD38  38 80 00 00 */	li r4, 0
/* 803D2DFC 003CFD3C  98 DD 00 1C */	stb r6, 0x1c(r29)
/* 803D2E00 003CFD40  90 BD 00 00 */	stw r5, 0(r29)
/* 803D2E04 003CFD44  90 1D 00 20 */	stw r0, 0x20(r29)
/* 803D2E08 003CFD48  4B C9 48 71 */	bl init__12J3DFrameCtrlFs
/* 803D2E0C 003CFD4C  3B BE 01 8C */	addi r29, r30, 0x18c
/* 803D2E10 003CFD50  7F A3 EB 78 */	mr r3, r29
/* 803D2E14 003CFD54  48 03 E5 7D */	bl __ct__5CNodeFv
/* 803D2E18 003CFD58  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D2E1C 003CFD5C  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2E20 003CFD60  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D2E24 003CFD64  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2E28 003CFD68  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2E2C 003CFD6C  38 00 00 00 */	li r0, 0
/* 803D2E30 003CFD70  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D2E34 003CFD74  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D2E38 003CFD78  90 1D 00 18 */	stw r0, 0x18(r29)
/* 803D2E3C 003CFD7C  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2E40 003CFD80  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2E44 003CFD84  38 C0 00 01 */	li r6, 1
/* 803D2E48 003CFD88  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2E4C 003CFD8C  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D2E50 003CFD90  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D2E54 003CFD94  38 7D 00 20 */	addi r3, r29, 0x20
/* 803D2E58 003CFD98  90 FD 00 00 */	stw r7, 0(r29)
/* 803D2E5C 003CFD9C  38 80 00 00 */	li r4, 0
/* 803D2E60 003CFDA0  98 DD 00 1C */	stb r6, 0x1c(r29)
/* 803D2E64 003CFDA4  90 BD 00 00 */	stw r5, 0(r29)
/* 803D2E68 003CFDA8  90 1D 00 20 */	stw r0, 0x20(r29)
/* 803D2E6C 003CFDAC  4B C9 48 0D */	bl init__12J3DFrameCtrlFs
/* 803D2E70 003CFDB0  3B BE 01 C8 */	addi r29, r30, 0x1c8
/* 803D2E74 003CFDB4  7F A3 EB 78 */	mr r3, r29
/* 803D2E78 003CFDB8  48 03 E5 19 */	bl __ct__5CNodeFv
/* 803D2E7C 003CFDBC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D2E80 003CFDC0  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2E84 003CFDC4  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D2E88 003CFDC8  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2E8C 003CFDCC  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2E90 003CFDD0  38 00 00 00 */	li r0, 0
/* 803D2E94 003CFDD4  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D2E98 003CFDD8  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D2E9C 003CFDDC  90 1D 00 18 */	stw r0, 0x18(r29)
/* 803D2EA0 003CFDE0  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2EA4 003CFDE4  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2EA8 003CFDE8  38 C0 00 01 */	li r6, 1
/* 803D2EAC 003CFDEC  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2EB0 003CFDF0  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D2EB4 003CFDF4  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D2EB8 003CFDF8  38 7D 00 20 */	addi r3, r29, 0x20
/* 803D2EBC 003CFDFC  90 FD 00 00 */	stw r7, 0(r29)
/* 803D2EC0 003CFE00  38 80 00 00 */	li r4, 0
/* 803D2EC4 003CFE04  98 DD 00 1C */	stb r6, 0x1c(r29)
/* 803D2EC8 003CFE08  90 BD 00 00 */	stw r5, 0(r29)
/* 803D2ECC 003CFE0C  90 1D 00 20 */	stw r0, 0x20(r29)
/* 803D2ED0 003CFE10  4B C9 47 A9 */	bl init__12J3DFrameCtrlFs
/* 803D2ED4 003CFE14  3B BE 02 04 */	addi r29, r30, 0x204
/* 803D2ED8 003CFE18  7F A3 EB 78 */	mr r3, r29
/* 803D2EDC 003CFE1C  48 03 E4 B5 */	bl __ct__5CNodeFv
/* 803D2EE0 003CFE20  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D2EE4 003CFE24  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D2EE8 003CFE28  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D2EEC 003CFE2C  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D2EF0 003CFE30  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2EF4 003CFE34  39 60 00 00 */	li r11, 0
/* 803D2EF8 003CFE38  3D 40 80 4F */	lis r10, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803D2EFC 003CFE3C  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 803D2F00 003CFE40  91 7D 00 18 */	stw r11, 0x18(r29)
/* 803D2F04 003CFE44  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803D2F08 003CFE48  3D 20 80 4C */	lis r9, __vt__Q25efx2d5TBase@ha
/* 803D2F0C 003CFE4C  3D 00 80 4A */	lis r8, __vt__18JPAEmitterCallBack@ha
/* 803D2F10 003CFE50  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2F14 003CFE54  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D2F18 003CFE58  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803D2F1C 003CFE5C  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803D2F20 003CFE60  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2F24 003CFE64  38 00 00 01 */	li r0, 1
/* 803D2F28 003CFE68  38 E4 74 20 */	addi r7, r4, __vt__Q25efx2d8TForever@l
/* 803D2F2C 003CFE6C  38 C3 73 CC */	addi r6, r3, __vt__Q25efx2d9TChasePos@l
/* 803D2F30 003CFE70  98 1D 00 1C */	stb r0, 0x1c(r29)
/* 803D2F34 003CFE74  38 0A 88 0C */	addi r0, r10, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803D2F38 003CFE78  3C 60 80 4E */	lis r3, __vt__Q25efx2d9T2DCursor@ha
/* 803D2F3C 003CFE7C  39 45 14 F0 */	addi r10, r5, __vt__Q25efx2d7TBaseIF@l
/* 803D2F40 003CFE80  90 1D 00 00 */	stw r0, 0(r29)
/* 803D2F44 003CFE84  38 A3 76 48 */	addi r5, r3, __vt__Q25efx2d9T2DCursor@l
/* 803D2F48 003CFE88  39 29 14 D8 */	addi r9, r9, __vt__Q25efx2d5TBase@l
/* 803D2F4C 003CFE8C  39 08 E2 7C */	addi r8, r8, __vt__18JPAEmitterCallBack@l
/* 803D2F50 003CFE90  91 5E 02 24 */	stw r10, 0x224(r30)
/* 803D2F54 003CFE94  39 87 00 18 */	addi r12, r7, 0x18
/* 803D2F58 003CFE98  3B A6 00 18 */	addi r29, r6, 0x18
/* 803D2F5C 003CFE9C  38 9E 02 40 */	addi r4, r30, 0x240
/* 803D2F60 003CFEA0  91 3E 02 24 */	stw r9, 0x224(r30)
/* 803D2F64 003CFEA4  3B E5 00 18 */	addi r31, r5, 0x18
/* 803D2F68 003CFEA8  C0 62 17 74 */	lfs f3, lbl_8051FAD4@sda21(r2)
/* 803D2F6C 003CFEAC  38 1E 02 78 */	addi r0, r30, 0x278
/* 803D2F70 003CFEB0  99 7E 02 28 */	stb r11, 0x228(r30)
/* 803D2F74 003CFEB4  7F C3 F3 78 */	mr r3, r30
/* 803D2F78 003CFEB8  C0 42 17 78 */	lfs f2, lbl_8051FAD8@sda21(r2)
/* 803D2F7C 003CFEBC  99 7E 02 29 */	stb r11, 0x229(r30)
/* 803D2F80 003CFEC0  C0 22 17 68 */	lfs f1, lbl_8051FAC8@sda21(r2)
/* 803D2F84 003CFEC4  91 1E 02 2C */	stw r8, 0x22c(r30)
/* 803D2F88 003CFEC8  90 FE 02 24 */	stw r7, 0x224(r30)
/* 803D2F8C 003CFECC  91 9E 02 2C */	stw r12, 0x22c(r30)
/* 803D2F90 003CFED0  B1 7E 02 30 */	sth r11, 0x230(r30)
/* 803D2F94 003CFED4  91 7E 02 34 */	stw r11, 0x234(r30)
/* 803D2F98 003CFED8  90 DE 02 24 */	stw r6, 0x224(r30)
/* 803D2F9C 003CFEDC  93 BE 02 2C */	stw r29, 0x22c(r30)
/* 803D2FA0 003CFEE0  90 9E 02 38 */	stw r4, 0x238(r30)
/* 803D2FA4 003CFEE4  90 BE 02 24 */	stw r5, 0x224(r30)
/* 803D2FA8 003CFEE8  93 FE 02 2C */	stw r31, 0x22c(r30)
/* 803D2FAC 003CFEEC  D0 7E 02 3C */	stfs f3, 0x23c(r30)
/* 803D2FB0 003CFEF0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D2FB4 003CFEF4  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803D2FB8 003CFEF8  EC 02 00 32 */	fmuls f0, f2, f0
/* 803D2FBC 003CFEFC  D0 1E 02 48 */	stfs f0, 0x248(r30)
/* 803D2FC0 003CFF00  D0 3E 02 4C */	stfs f1, 0x24c(r30)
/* 803D2FC4 003CFF04  91 7E 02 54 */	stw r11, 0x254(r30)
/* 803D2FC8 003CFF08  91 7E 02 58 */	stw r11, 0x258(r30)
/* 803D2FCC 003CFF0C  91 5E 02 5C */	stw r10, 0x25c(r30)
/* 803D2FD0 003CFF10  91 3E 02 5C */	stw r9, 0x25c(r30)
/* 803D2FD4 003CFF14  99 7E 02 60 */	stb r11, 0x260(r30)
/* 803D2FD8 003CFF18  99 7E 02 61 */	stb r11, 0x261(r30)
/* 803D2FDC 003CFF1C  91 1E 02 64 */	stw r8, 0x264(r30)
/* 803D2FE0 003CFF20  90 FE 02 5C */	stw r7, 0x25c(r30)
/* 803D2FE4 003CFF24  91 9E 02 64 */	stw r12, 0x264(r30)
/* 803D2FE8 003CFF28  B1 7E 02 68 */	sth r11, 0x268(r30)
/* 803D2FEC 003CFF2C  91 7E 02 6C */	stw r11, 0x26c(r30)
/* 803D2FF0 003CFF30  90 DE 02 5C */	stw r6, 0x25c(r30)
/* 803D2FF4 003CFF34  93 BE 02 64 */	stw r29, 0x264(r30)
/* 803D2FF8 003CFF38  90 1E 02 70 */	stw r0, 0x270(r30)
/* 803D2FFC 003CFF3C  90 BE 02 5C */	stw r5, 0x25c(r30)
/* 803D3000 003CFF40  93 FE 02 64 */	stw r31, 0x264(r30)
/* 803D3004 003CFF44  D0 7E 02 74 */	stfs f3, 0x274(r30)
/* 803D3008 003CFF48  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D300C 003CFF4C  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803D3010 003CFF50  EC 02 00 32 */	fmuls f0, f2, f0
/* 803D3014 003CFF54  D0 1E 02 80 */	stfs f0, 0x280(r30)
/* 803D3018 003CFF58  D0 3E 02 84 */	stfs f1, 0x284(r30)
/* 803D301C 003CFF5C  91 7E 02 8C */	stw r11, 0x28c(r30)
/* 803D3020 003CFF60  91 7E 02 90 */	stw r11, 0x290(r30)
/* 803D3024 003CFF64  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803D3028 003CFF68  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803D302C 003CFF6C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803D3030 003CFF70  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D3034 003CFF74  7C 08 03 A6 */	mtlr r0
/* 803D3038 003CFF78  38 21 00 20 */	addi r1, r1, 0x20
/* 803D303C 003CFF7C  4E 80 00 20 */	blr 

.global startSeq__Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr9enumStart
startSeq__Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr9enumStart:
/* 803D3040 003CFF80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D3044 003CFF84  7C 08 02 A6 */	mflr r0
/* 803D3048 003CFF88  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D304C 003CFF8C  38 00 00 00 */	li r0, 0
/* 803D3050 003CFF90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D3054 003CFF94  7C 7F 1B 78 */	mr r31, r3
/* 803D3058 003CFF98  93 C1 00 08 */	stw r30, 8(r1)
/* 803D305C 003CFF9C  7C 9E 23 79 */	or. r30, r4, r4
/* 803D3060 003CFFA0  90 03 02 A0 */	stw r0, 0x2a0(r3)
/* 803D3064 003CFFA4  41 80 00 10 */	blt .L_803D3074
/* 803D3068 003CFFA8  2C 1E 00 11 */	cmpwi r30, 0x11
/* 803D306C 003CFFAC  40 80 00 08 */	bge .L_803D3074
/* 803D3070 003CFFB0  38 00 00 01 */	li r0, 1
.L_803D3074:
/* 803D3074 003CFFB4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D3078 003CFFB8  40 82 00 20 */	bne .L_803D3098
/* 803D307C 003CFFBC  3C 60 80 49 */	lis r3, lbl_804968DC@ha
/* 803D3080 003CFFC0  3C A0 80 49 */	lis r5, lbl_804968EC@ha
/* 803D3084 003CFFC4  38 63 68 DC */	addi r3, r3, lbl_804968DC@l
/* 803D3088 003CFFC8  38 80 01 9C */	li r4, 0x19c
/* 803D308C 003CFFCC  38 A5 68 EC */	addi r5, r5, lbl_804968EC@l
/* 803D3090 003CFFD0  4C C6 31 82 */	crclr 6
/* 803D3094 003CFFD4  4B C5 75 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D3098:
/* 803D3098 003CFFD8  28 1E 00 10 */	cmplwi r30, 0x10
/* 803D309C 003CFFDC  41 81 03 04 */	bgt .L_803D33A0
/* 803D30A0 003CFFE0  3C 60 80 4F */	lis r3, lbl_804E8ADC@ha
/* 803D30A4 003CFFE4  57 C0 10 3A */	slwi r0, r30, 2
/* 803D30A8 003CFFE8  38 63 8A DC */	addi r3, r3, lbl_804E8ADC@l
/* 803D30AC 003CFFEC  7C 03 00 2E */	lwzx r0, r3, r0
/* 803D30B0 003CFFF0  7C 09 03 A6 */	mtctr r0
/* 803D30B4 003CFFF4  4E 80 04 20 */	bctr 
.L_803D30B8:
/* 803D30B8 003CFFF8  38 00 00 00 */	li r0, 0
/* 803D30BC 003CFFFC  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D30C0 003D0000  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D30C4 003D0004  7F E4 FB 78 */	mr r4, r31
/* 803D30C8 003D0008  38 A0 00 02 */	li r5, 2
/* 803D30CC 003D000C  38 C0 00 00 */	li r6, 0
/* 803D30D0 003D0010  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D30D4 003D0014  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D30D8 003D0018  7D 89 03 A6 */	mtctr r12
/* 803D30DC 003D001C  4E 80 04 21 */	bctrl 
/* 803D30E0 003D0020  48 00 02 C0 */	b .L_803D33A0
.L_803D30E4:
/* 803D30E4 003D0024  38 00 00 00 */	li r0, 0
/* 803D30E8 003D0028  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D30EC 003D002C  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D30F0 003D0030  7F E4 FB 78 */	mr r4, r31
/* 803D30F4 003D0034  38 A0 00 03 */	li r5, 3
/* 803D30F8 003D0038  38 C0 00 00 */	li r6, 0
/* 803D30FC 003D003C  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D3100 003D0040  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D3104 003D0044  7D 89 03 A6 */	mtctr r12
/* 803D3108 003D0048  4E 80 04 21 */	bctrl 
/* 803D310C 003D004C  48 00 02 94 */	b .L_803D33A0
.L_803D3110:
/* 803D3110 003D0050  38 00 00 00 */	li r0, 0
/* 803D3114 003D0054  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D3118 003D0058  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D311C 003D005C  7F E4 FB 78 */	mr r4, r31
/* 803D3120 003D0060  38 A0 00 04 */	li r5, 4
/* 803D3124 003D0064  38 C0 00 00 */	li r6, 0
/* 803D3128 003D0068  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D312C 003D006C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D3130 003D0070  7D 89 03 A6 */	mtctr r12
/* 803D3134 003D0074  4E 80 04 21 */	bctrl 
/* 803D3138 003D0078  48 00 02 68 */	b .L_803D33A0
.L_803D313C:
/* 803D313C 003D007C  38 00 00 00 */	li r0, 0
/* 803D3140 003D0080  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D3144 003D0084  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D3148 003D0088  7F E4 FB 78 */	mr r4, r31
/* 803D314C 003D008C  38 A0 00 05 */	li r5, 5
/* 803D3150 003D0090  38 C0 00 00 */	li r6, 0
/* 803D3154 003D0094  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D3158 003D0098  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D315C 003D009C  7D 89 03 A6 */	mtctr r12
/* 803D3160 003D00A0  4E 80 04 21 */	bctrl 
/* 803D3164 003D00A4  48 00 02 3C */	b .L_803D33A0
.L_803D3168:
/* 803D3168 003D00A8  38 00 00 00 */	li r0, 0
/* 803D316C 003D00AC  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D3170 003D00B0  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D3174 003D00B4  7F E4 FB 78 */	mr r4, r31
/* 803D3178 003D00B8  38 A0 00 13 */	li r5, 0x13
/* 803D317C 003D00BC  38 C0 00 00 */	li r6, 0
/* 803D3180 003D00C0  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D3184 003D00C4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D3188 003D00C8  7D 89 03 A6 */	mtctr r12
/* 803D318C 003D00CC  4E 80 04 21 */	bctrl 
/* 803D3190 003D00D0  48 00 02 10 */	b .L_803D33A0
.L_803D3194:
/* 803D3194 003D00D4  38 00 00 00 */	li r0, 0
/* 803D3198 003D00D8  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D319C 003D00DC  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D31A0 003D00E0  7F E4 FB 78 */	mr r4, r31
/* 803D31A4 003D00E4  38 A0 00 06 */	li r5, 6
/* 803D31A8 003D00E8  38 C0 00 00 */	li r6, 0
/* 803D31AC 003D00EC  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D31B0 003D00F0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D31B4 003D00F4  7D 89 03 A6 */	mtctr r12
/* 803D31B8 003D00F8  4E 80 04 21 */	bctrl 
/* 803D31BC 003D00FC  48 00 01 E4 */	b .L_803D33A0
.L_803D31C0:
/* 803D31C0 003D0100  38 00 00 00 */	li r0, 0
/* 803D31C4 003D0104  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D31C8 003D0108  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D31CC 003D010C  7F E4 FB 78 */	mr r4, r31
/* 803D31D0 003D0110  38 A0 00 16 */	li r5, 0x16
/* 803D31D4 003D0114  38 C0 00 00 */	li r6, 0
/* 803D31D8 003D0118  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D31DC 003D011C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D31E0 003D0120  7D 89 03 A6 */	mtctr r12
/* 803D31E4 003D0124  4E 80 04 21 */	bctrl 
/* 803D31E8 003D0128  48 00 01 B8 */	b .L_803D33A0
.L_803D31EC:
/* 803D31EC 003D012C  38 00 00 01 */	li r0, 1
/* 803D31F0 003D0130  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D31F4 003D0134  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D31F8 003D0138  7F E4 FB 78 */	mr r4, r31
/* 803D31FC 003D013C  38 A0 00 02 */	li r5, 2
/* 803D3200 003D0140  38 C0 00 00 */	li r6, 0
/* 803D3204 003D0144  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D3208 003D0148  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D320C 003D014C  7D 89 03 A6 */	mtctr r12
/* 803D3210 003D0150  4E 80 04 21 */	bctrl 
/* 803D3214 003D0154  48 00 01 8C */	b .L_803D33A0
.L_803D3218:
/* 803D3218 003D0158  38 00 00 01 */	li r0, 1
/* 803D321C 003D015C  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D3220 003D0160  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D3224 003D0164  7F E4 FB 78 */	mr r4, r31
/* 803D3228 003D0168  38 A0 00 03 */	li r5, 3
/* 803D322C 003D016C  38 C0 00 00 */	li r6, 0
/* 803D3230 003D0170  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D3234 003D0174  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D3238 003D0178  7D 89 03 A6 */	mtctr r12
/* 803D323C 003D017C  4E 80 04 21 */	bctrl 
/* 803D3240 003D0180  48 00 01 60 */	b .L_803D33A0
.L_803D3244:
/* 803D3244 003D0184  38 00 00 01 */	li r0, 1
/* 803D3248 003D0188  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D324C 003D018C  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D3250 003D0190  7F E4 FB 78 */	mr r4, r31
/* 803D3254 003D0194  38 A0 00 04 */	li r5, 4
/* 803D3258 003D0198  38 C0 00 00 */	li r6, 0
/* 803D325C 003D019C  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D3260 003D01A0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D3264 003D01A4  7D 89 03 A6 */	mtctr r12
/* 803D3268 003D01A8  4E 80 04 21 */	bctrl 
/* 803D326C 003D01AC  48 00 01 34 */	b .L_803D33A0
.L_803D3270:
/* 803D3270 003D01B0  38 00 00 01 */	li r0, 1
/* 803D3274 003D01B4  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D3278 003D01B8  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D327C 003D01BC  7F E4 FB 78 */	mr r4, r31
/* 803D3280 003D01C0  38 A0 00 05 */	li r5, 5
/* 803D3284 003D01C4  38 C0 00 00 */	li r6, 0
/* 803D3288 003D01C8  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D328C 003D01CC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D3290 003D01D0  7D 89 03 A6 */	mtctr r12
/* 803D3294 003D01D4  4E 80 04 21 */	bctrl 
/* 803D3298 003D01D8  48 00 01 08 */	b .L_803D33A0
.L_803D329C:
/* 803D329C 003D01DC  38 00 00 01 */	li r0, 1
/* 803D32A0 003D01E0  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D32A4 003D01E4  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D32A8 003D01E8  7F E4 FB 78 */	mr r4, r31
/* 803D32AC 003D01EC  38 A0 00 13 */	li r5, 0x13
/* 803D32B0 003D01F0  38 C0 00 00 */	li r6, 0
/* 803D32B4 003D01F4  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D32B8 003D01F8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D32BC 003D01FC  7D 89 03 A6 */	mtctr r12
/* 803D32C0 003D0200  4E 80 04 21 */	bctrl 
/* 803D32C4 003D0204  48 00 00 DC */	b .L_803D33A0
.L_803D32C8:
/* 803D32C8 003D0208  38 00 00 01 */	li r0, 1
/* 803D32CC 003D020C  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D32D0 003D0210  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D32D4 003D0214  7F E4 FB 78 */	mr r4, r31
/* 803D32D8 003D0218  38 A0 00 06 */	li r5, 6
/* 803D32DC 003D021C  38 C0 00 00 */	li r6, 0
/* 803D32E0 003D0220  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D32E4 003D0224  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D32E8 003D0228  7D 89 03 A6 */	mtctr r12
/* 803D32EC 003D022C  4E 80 04 21 */	bctrl 
/* 803D32F0 003D0230  48 00 00 B0 */	b .L_803D33A0
.L_803D32F4:
/* 803D32F4 003D0234  38 00 00 01 */	li r0, 1
/* 803D32F8 003D0238  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D32FC 003D023C  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D3300 003D0240  7F E4 FB 78 */	mr r4, r31
/* 803D3304 003D0244  38 A0 00 16 */	li r5, 0x16
/* 803D3308 003D0248  38 C0 00 00 */	li r6, 0
/* 803D330C 003D024C  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D3310 003D0250  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D3314 003D0254  7D 89 03 A6 */	mtctr r12
/* 803D3318 003D0258  4E 80 04 21 */	bctrl 
/* 803D331C 003D025C  48 00 00 84 */	b .L_803D33A0
.L_803D3320:
/* 803D3320 003D0260  38 00 00 01 */	li r0, 1
/* 803D3324 003D0264  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D3328 003D0268  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D332C 003D026C  7F E4 FB 78 */	mr r4, r31
/* 803D3330 003D0270  38 A0 00 0C */	li r5, 0xc
/* 803D3334 003D0274  38 C0 00 00 */	li r6, 0
/* 803D3338 003D0278  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D333C 003D027C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D3340 003D0280  7D 89 03 A6 */	mtctr r12
/* 803D3344 003D0284  4E 80 04 21 */	bctrl 
/* 803D3348 003D0288  48 00 00 58 */	b .L_803D33A0
.L_803D334C:
/* 803D334C 003D028C  38 00 00 01 */	li r0, 1
/* 803D3350 003D0290  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D3354 003D0294  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D3358 003D0298  7F E4 FB 78 */	mr r4, r31
/* 803D335C 003D029C  38 A0 00 11 */	li r5, 0x11
/* 803D3360 003D02A0  38 C0 00 00 */	li r6, 0
/* 803D3364 003D02A4  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D3368 003D02A8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D336C 003D02AC  7D 89 03 A6 */	mtctr r12
/* 803D3370 003D02B0  4E 80 04 21 */	bctrl 
/* 803D3374 003D02B4  48 00 00 2C */	b .L_803D33A0
.L_803D3378:
/* 803D3378 003D02B8  38 00 00 01 */	li r0, 1
/* 803D337C 003D02BC  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D3380 003D02C0  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 803D3384 003D02C4  7F E4 FB 78 */	mr r4, r31
/* 803D3388 003D02C8  38 A0 00 12 */	li r5, 0x12
/* 803D338C 003D02CC  38 C0 00 00 */	li r6, 0
/* 803D3390 003D02D0  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D3394 003D02D4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D3398 003D02D8  7D 89 03 A6 */	mtctr r12
/* 803D339C 003D02DC  4E 80 04 21 */	bctrl 
.L_803D33A0:
/* 803D33A0 003D02E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D33A4 003D02E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D33A8 003D02E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D33AC 003D02EC  7C 08 03 A6 */	mtlr r0
/* 803D33B0 003D02F0  38 21 00 10 */	addi r1, r1, 0x10
/* 803D33B4 003D02F4  4E 80 00 20 */	blr 

.global forceQuitSeq__Q33ebi9CardError4TMgrFv
forceQuitSeq__Q33ebi9CardError4TMgrFv:
/* 803D33B8 003D02F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D33BC 003D02FC  7C 08 02 A6 */	mflr r0
/* 803D33C0 003D0300  38 A0 00 00 */	li r5, 0
/* 803D33C4 003D0304  38 C0 00 00 */	li r6, 0
/* 803D33C8 003D0308  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D33CC 003D030C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D33D0 003D0310  7C 7F 1B 78 */	mr r31, r3
/* 803D33D4 003D0314  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D33D8 003D0318  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D33DC 003D031C  7F E4 FB 78 */	mr r4, r31
/* 803D33E0 003D0320  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D33E4 003D0324  7D 89 03 A6 */	mtctr r12
/* 803D33E8 003D0328  4E 80 04 21 */	bctrl 
/* 803D33EC 003D032C  7F E3 FB 78 */	mr r3, r31
/* 803D33F0 003D0330  4B FF 07 41 */	bl killScreen__Q33ebi6Screen11TMemoryCardFv
/* 803D33F4 003D0334  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D33F8 003D0338  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D33FC 003D033C  7C 08 03 A6 */	mtlr r0
/* 803D3400 003D0340  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3404 003D0344  4E 80 00 20 */	blr 

.global goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd:
/* 803D3408 003D0348  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D340C 003D034C  7C 08 02 A6 */	mflr r0
/* 803D3410 003D0350  7C 66 1B 78 */	mr r6, r3
/* 803D3414 003D0354  38 A0 00 01 */	li r5, 1
/* 803D3418 003D0358  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D341C 003D035C  90 83 02 A0 */	stw r4, 0x2a0(r3)
/* 803D3420 003D0360  38 66 02 A8 */	addi r3, r6, 0x2a8
/* 803D3424 003D0364  7C C4 33 78 */	mr r4, r6
/* 803D3428 003D0368  38 C0 00 00 */	li r6, 0
/* 803D342C 003D036C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D3430 003D0370  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D3434 003D0374  7D 89 03 A6 */	mtctr r12
/* 803D3438 003D0378  4E 80 04 21 */	bctrl 
/* 803D343C 003D037C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3440 003D0380  7C 08 03 A6 */	mtlr r0
/* 803D3444 003D0384  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3448 003D0388  4E 80 00 20 */	blr 

.global checkAndTransitNoCard___Q33ebi9CardError4TMgrFv
checkAndTransitNoCard___Q33ebi9CardError4TMgrFv:
/* 803D344C 003D038C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D3450 003D0390  7C 08 02 A6 */	mflr r0
/* 803D3454 003D0394  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D3458 003D0398  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D345C 003D039C  3B E0 00 00 */	li r31, 0
/* 803D3460 003D03A0  93 C1 00 08 */	stw r30, 8(r1)
/* 803D3464 003D03A4  7C 7E 1B 78 */	mr r30, r3
/* 803D3468 003D03A8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D346C 003D03AC  80 64 00 5C */	lwz r3, 0x5c(r4)
/* 803D3470 003D03B0  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803D3474 003D03B4  2C 00 00 00 */	cmpwi r0, 0
/* 803D3478 003D03B8  40 82 00 14 */	bne .L_803D348C
/* 803D347C 003D03BC  48 06 DB 41 */	bl checkStatus__13MemoryCardMgrFv
/* 803D3480 003D03C0  28 03 00 0B */	cmplwi r3, 0xb
/* 803D3484 003D03C4  41 82 00 08 */	beq .L_803D348C
/* 803D3488 003D03C8  3B E0 00 01 */	li r31, 1
.L_803D348C:
/* 803D348C 003D03CC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803D3490 003D03D0  41 82 00 20 */	beq .L_803D34B0
/* 803D3494 003D03D4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D3498 003D03D8  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D349C 003D03DC  48 07 26 71 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803D34A0 003D03E0  2C 03 00 00 */	cmpwi r3, 0
/* 803D34A4 003D03E4  40 82 00 0C */	bne .L_803D34B0
/* 803D34A8 003D03E8  38 00 00 01 */	li r0, 1
/* 803D34AC 003D03EC  48 00 00 08 */	b .L_803D34B4
.L_803D34B0:
/* 803D34B0 003D03F0  38 00 00 00 */	li r0, 0
.L_803D34B4:
/* 803D34B4 003D03F4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D34B8 003D03F8  41 82 00 5C */	beq .L_803D3514
/* 803D34BC 003D03FC  80 1E 02 A4 */	lwz r0, 0x2a4(r30)
/* 803D34C0 003D0400  2C 00 00 00 */	cmpwi r0, 0
/* 803D34C4 003D0404  40 82 00 28 */	bne .L_803D34EC
/* 803D34C8 003D0408  38 7E 02 A8 */	addi r3, r30, 0x2a8
/* 803D34CC 003D040C  7F C4 F3 78 */	mr r4, r30
/* 803D34D0 003D0410  81 9E 02 A8 */	lwz r12, 0x2a8(r30)
/* 803D34D4 003D0414  38 A0 00 02 */	li r5, 2
/* 803D34D8 003D0418  38 C0 00 00 */	li r6, 0
/* 803D34DC 003D041C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D34E0 003D0420  7D 89 03 A6 */	mtctr r12
/* 803D34E4 003D0424  4E 80 04 21 */	bctrl 
/* 803D34E8 003D0428  48 00 00 2C */	b .L_803D3514
.L_803D34EC:
/* 803D34EC 003D042C  2C 00 00 01 */	cmpwi r0, 1
/* 803D34F0 003D0430  40 82 00 24 */	bne .L_803D3514
/* 803D34F4 003D0434  38 7E 02 A8 */	addi r3, r30, 0x2a8
/* 803D34F8 003D0438  7F C4 F3 78 */	mr r4, r30
/* 803D34FC 003D043C  81 9E 02 A8 */	lwz r12, 0x2a8(r30)
/* 803D3500 003D0440  38 A0 00 02 */	li r5, 2
/* 803D3504 003D0444  38 C0 00 00 */	li r6, 0
/* 803D3508 003D0448  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D350C 003D044C  7D 89 03 A6 */	mtctr r12
/* 803D3510 003D0450  4E 80 04 21 */	bctrl 
.L_803D3514:
/* 803D3514 003D0454  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3518 003D0458  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D351C 003D045C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D3520 003D0460  7C 08 03 A6 */	mtlr r0
/* 803D3524 003D0464  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3528 003D0468  4E 80 00 20 */	blr 

.global update__Q33ebi9CardError4TMgrFv
update__Q33ebi9CardError4TMgrFv:
/* 803D352C 003D046C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D3530 003D0470  7C 08 02 A6 */	mflr r0
/* 803D3534 003D0474  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D3538 003D0478  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D353C 003D047C  7C 7F 1B 78 */	mr r31, r3
/* 803D3540 003D0480  38 7F 02 A8 */	addi r3, r31, 0x2a8
/* 803D3544 003D0484  81 9F 02 A8 */	lwz r12, 0x2a8(r31)
/* 803D3548 003D0488  7F E4 FB 78 */	mr r4, r31
/* 803D354C 003D048C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D3550 003D0490  7D 89 03 A6 */	mtctr r12
/* 803D3554 003D0494  4E 80 04 21 */	bctrl 
/* 803D3558 003D0498  7F E3 FB 78 */	mr r3, r31
/* 803D355C 003D049C  48 00 00 C9 */	bl getStateID__Q33ebi9CardError4TMgrFv
/* 803D3560 003D04A0  2C 03 00 00 */	cmpwi r3, 0
/* 803D3564 003D04A4  41 82 00 20 */	beq .L_803D3584
/* 803D3568 003D04A8  7F E3 FB 78 */	mr r3, r31
/* 803D356C 003D04AC  4B FF 0F 59 */	bl update__Q33ebi6Screen11TMemoryCardFv
/* 803D3570 003D04B0  80 7F 02 98 */	lwz r3, 0x298(r31)
/* 803D3574 003D04B4  28 03 00 00 */	cmplwi r3, 0
/* 803D3578 003D04B8  41 82 00 0C */	beq .L_803D3584
/* 803D357C 003D04BC  38 03 FF FF */	addi r0, r3, -1
/* 803D3580 003D04C0  90 1F 02 98 */	stw r0, 0x298(r31)
.L_803D3584:
/* 803D3584 003D04C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3588 003D04C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D358C 003D04CC  7C 08 03 A6 */	mtlr r0
/* 803D3590 003D04D0  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3594 003D04D4  4E 80 00 20 */	blr 

.global draw__Q33ebi9CardError4TMgrFv
draw__Q33ebi9CardError4TMgrFv:
/* 803D3598 003D04D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D359C 003D04DC  7C 08 02 A6 */	mflr r0
/* 803D35A0 003D04E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D35A4 003D04E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D35A8 003D04E8  7C 7F 1B 78 */	mr r31, r3
/* 803D35AC 003D04EC  48 00 00 79 */	bl getStateID__Q33ebi9CardError4TMgrFv
/* 803D35B0 003D04F0  2C 03 00 00 */	cmpwi r3, 0
/* 803D35B4 003D04F4  41 82 00 0C */	beq .L_803D35C0
/* 803D35B8 003D04F8  7F E3 FB 78 */	mr r3, r31
/* 803D35BC 003D04FC  4B FF 17 D1 */	bl draw__Q33ebi6Screen11TMemoryCardFv
.L_803D35C0:
/* 803D35C0 003D0500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D35C4 003D0504  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D35C8 003D0508  7C 08 03 A6 */	mtlr r0
/* 803D35CC 003D050C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D35D0 003D0510  4E 80 00 20 */	blr 

.global isGetEnd__Q33ebi9CardError4TMgrFv
isGetEnd__Q33ebi9CardError4TMgrFv:
/* 803D35D4 003D0514  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D35D8 003D0518  7C 08 02 A6 */	mflr r0
/* 803D35DC 003D051C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D35E0 003D0520  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D35E4 003D0524  7C 7F 1B 78 */	mr r31, r3
/* 803D35E8 003D0528  48 00 00 3D */	bl getStateID__Q33ebi9CardError4TMgrFv
/* 803D35EC 003D052C  2C 03 00 00 */	cmpwi r3, 0
/* 803D35F0 003D0530  41 82 00 14 */	beq .L_803D3604
/* 803D35F4 003D0534  7F E3 FB 78 */	mr r3, r31
/* 803D35F8 003D0538  48 00 00 2D */	bl getStateID__Q33ebi9CardError4TMgrFv
/* 803D35FC 003D053C  2C 03 00 01 */	cmpwi r3, 1
/* 803D3600 003D0540  40 82 00 0C */	bne .L_803D360C
.L_803D3604:
/* 803D3604 003D0544  38 60 00 01 */	li r3, 1
/* 803D3608 003D0548  48 00 00 08 */	b .L_803D3610
.L_803D360C:
/* 803D360C 003D054C  38 60 00 00 */	li r3, 0
.L_803D3610:
/* 803D3610 003D0550  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3614 003D0554  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D3618 003D0558  7C 08 03 A6 */	mtlr r0
/* 803D361C 003D055C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3620 003D0560  4E 80 00 20 */	blr 

.global getStateID__Q33ebi9CardError4TMgrFv
getStateID__Q33ebi9CardError4TMgrFv:
/* 803D3624 003D0564  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D3628 003D0568  7C 08 02 A6 */	mflr r0
/* 803D362C 003D056C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D3630 003D0570  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D3634 003D0574  7C 7F 1B 78 */	mr r31, r3
/* 803D3638 003D0578  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 803D363C 003D057C  28 00 00 00 */	cmplwi r0, 0
/* 803D3640 003D0580  40 82 00 20 */	bne .L_803D3660
/* 803D3644 003D0584  3C 60 80 49 */	lis r3, lbl_804968DC@ha
/* 803D3648 003D0588  3C A0 80 49 */	lis r5, lbl_804968EC@ha
/* 803D364C 003D058C  38 63 68 DC */	addi r3, r3, lbl_804968DC@l
/* 803D3650 003D0590  38 80 02 F8 */	li r4, 0x2f8
/* 803D3654 003D0594  38 A5 68 EC */	addi r5, r5, lbl_804968EC@l
/* 803D3658 003D0598  4C C6 31 82 */	crclr 6
/* 803D365C 003D059C  4B C5 6F E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D3660:
/* 803D3660 003D05A0  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 803D3664 003D05A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3668 003D05A8  80 63 00 04 */	lwz r3, 4(r3)
/* 803D366C 003D05AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D3670 003D05B0  7C 08 03 A6 */	mtlr r0
/* 803D3674 003D05B4  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3678 003D05B8  4E 80 00 20 */	blr 

.global "init__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgrPQ24Game8StateArg"
"init__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgrPQ24Game8StateArg":
/* 803D367C 003D05BC  4E 80 00 20 */	blr 

.global "exec__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
"exec__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr":
/* 803D3680 003D05C0  4E 80 00 20 */	blr 

.global "cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
"cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr":
/* 803D3684 003D05C4  4E 80 00 20 */	blr 

.global "resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
"resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr":
/* 803D3688 003D05C8  4E 80 00 20 */	blr 

.global "restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
"restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr":
/* 803D368C 003D05CC  4E 80 00 20 */	blr 

.global "init__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
"init__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr":
/* 803D3690 003D05D0  4E 80 00 20 */	blr 

.global "exec__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
"exec__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr":
/* 803D3694 003D05D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D3698 003D05D8  7C 08 02 A6 */	mflr r0
/* 803D369C 003D05DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D36A0 003D05E0  80 64 02 C4 */	lwz r3, 0x2c4(r4)
/* 803D36A4 003D05E4  28 03 00 00 */	cmplwi r3, 0
/* 803D36A8 003D05E8  41 82 00 14 */	beq .L_803D36BC
/* 803D36AC 003D05EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D36B0 003D05F0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D36B4 003D05F4  7D 89 03 A6 */	mtctr r12
/* 803D36B8 003D05F8  4E 80 04 21 */	bctrl 
.L_803D36BC:
/* 803D36BC 003D05FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D36C0 003D0600  7C 08 03 A6 */	mtlr r0
/* 803D36C4 003D0604  38 21 00 10 */	addi r1, r1, 0x10
/* 803D36C8 003D0608  4E 80 00 20 */	blr 

.global "create__Q24Game35StateMachine<Q33ebi9CardError4TMgr>Fi"
"create__Q24Game35StateMachine<Q33ebi9CardError4TMgr>Fi":
/* 803D36CC 003D060C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D36D0 003D0610  7C 08 02 A6 */	mflr r0
/* 803D36D4 003D0614  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D36D8 003D0618  38 00 00 00 */	li r0, 0
/* 803D36DC 003D061C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D36E0 003D0620  7C 7F 1B 78 */	mr r31, r3
/* 803D36E4 003D0624  90 83 00 0C */	stw r4, 0xc(r3)
/* 803D36E8 003D0628  90 03 00 08 */	stw r0, 8(r3)
/* 803D36EC 003D062C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803D36F0 003D0630  54 03 10 3A */	slwi r3, r0, 2
/* 803D36F4 003D0634  4B C5 08 B9 */	bl __nwa__FUl
/* 803D36F8 003D0638  90 7F 00 04 */	stw r3, 4(r31)
/* 803D36FC 003D063C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803D3700 003D0640  54 03 10 3A */	slwi r3, r0, 2
/* 803D3704 003D0644  4B C5 08 A9 */	bl __nwa__FUl
/* 803D3708 003D0648  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803D370C 003D064C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803D3710 003D0650  54 03 10 3A */	slwi r3, r0, 2
/* 803D3714 003D0654  4B C5 08 99 */	bl __nwa__FUl
/* 803D3718 003D0658  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803D371C 003D065C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3720 003D0660  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D3724 003D0664  7C 08 03 A6 */	mtlr r0
/* 803D3728 003D0668  38 21 00 10 */	addi r1, r1, 0x10
/* 803D372C 003D066C  4E 80 00 20 */	blr 

.global "transit__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
"transit__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg":
/* 803D3730 003D0670  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803D3734 003D0674  7C 08 02 A6 */	mflr r0
/* 803D3738 003D0678  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D373C 003D067C  54 A0 10 3A */	slwi r0, r5, 2
/* 803D3740 003D0680  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803D3744 003D0684  7C 7B 1B 78 */	mr r27, r3
/* 803D3748 003D0688  7C 9C 23 78 */	mr r28, r4
/* 803D374C 003D068C  7C DD 33 78 */	mr r29, r6
/* 803D3750 003D0690  83 C4 02 C4 */	lwz r30, 0x2c4(r4)
/* 803D3754 003D0694  80 63 00 14 */	lwz r3, 0x14(r3)
/* 803D3758 003D0698  28 1E 00 00 */	cmplwi r30, 0
/* 803D375C 003D069C  7F E3 00 2E */	lwzx r31, r3, r0
/* 803D3760 003D06A0  41 82 00 20 */	beq .L_803D3780
/* 803D3764 003D06A4  7F C3 F3 78 */	mr r3, r30
/* 803D3768 003D06A8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D376C 003D06AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D3770 003D06B0  7D 89 03 A6 */	mtctr r12
/* 803D3774 003D06B4  4E 80 04 21 */	bctrl 
/* 803D3778 003D06B8  80 1E 00 04 */	lwz r0, 4(r30)
/* 803D377C 003D06BC  90 1B 00 18 */	stw r0, 0x18(r27)
.L_803D3780:
/* 803D3780 003D06C0  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 803D3784 003D06C4  7C 1F 00 00 */	cmpw r31, r0
/* 803D3788 003D06C8  41 80 00 08 */	blt .L_803D3790
.L_803D378C:
/* 803D378C 003D06CC  48 00 00 00 */	b .L_803D378C
.L_803D3790:
/* 803D3790 003D06D0  80 7B 00 04 */	lwz r3, 4(r27)
/* 803D3794 003D06D4  57 E0 10 3A */	slwi r0, r31, 2
/* 803D3798 003D06D8  7F 84 E3 78 */	mr r4, r28
/* 803D379C 003D06DC  7F A5 EB 78 */	mr r5, r29
/* 803D37A0 003D06E0  7C 63 00 2E */	lwzx r3, r3, r0
/* 803D37A4 003D06E4  90 7C 02 C4 */	stw r3, 0x2c4(r28)
/* 803D37A8 003D06E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803D37AC 003D06EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D37B0 003D06F0  7D 89 03 A6 */	mtctr r12
/* 803D37B4 003D06F4  4E 80 04 21 */	bctrl 
/* 803D37B8 003D06F8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803D37BC 003D06FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D37C0 003D0700  7C 08 03 A6 */	mtlr r0
/* 803D37C4 003D0704  38 21 00 20 */	addi r1, r1, 0x20
/* 803D37C8 003D0708  4E 80 00 20 */	blr 

.global "registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>"
"registerState__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ24Game31FSMState<Q33ebi9CardError4TMgr>":
/* 803D37CC 003D070C  80 C3 00 08 */	lwz r6, 8(r3)
/* 803D37D0 003D0710  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803D37D4 003D0714  7C 06 00 00 */	cmpw r6, r0
/* 803D37D8 003D0718  4C 80 00 20 */	bgelr 
/* 803D37DC 003D071C  80 A3 00 04 */	lwz r5, 4(r3)
/* 803D37E0 003D0720  54 C0 10 3A */	slwi r0, r6, 2
/* 803D37E4 003D0724  7C 85 01 2E */	stwx r4, r5, r0
/* 803D37E8 003D0728  80 A4 00 04 */	lwz r5, 4(r4)
/* 803D37EC 003D072C  2C 05 00 00 */	cmpwi r5, 0
/* 803D37F0 003D0730  41 80 00 10 */	blt .L_803D3800
/* 803D37F4 003D0734  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803D37F8 003D0738  7C 05 00 00 */	cmpw r5, r0
/* 803D37FC 003D073C  41 80 00 0C */	blt .L_803D3808
.L_803D3800:
/* 803D3800 003D0740  38 00 00 00 */	li r0, 0
/* 803D3804 003D0744  48 00 00 08 */	b .L_803D380C
.L_803D3808:
/* 803D3808 003D0748  38 00 00 01 */	li r0, 1
.L_803D380C:
/* 803D380C 003D074C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D3810 003D0750  4D 82 00 20 */	beqlr 
/* 803D3814 003D0754  90 64 00 08 */	stw r3, 8(r4)
/* 803D3818 003D0758  80 03 00 08 */	lwz r0, 8(r3)
/* 803D381C 003D075C  80 C4 00 04 */	lwz r6, 4(r4)
/* 803D3820 003D0760  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 803D3824 003D0764  54 00 10 3A */	slwi r0, r0, 2
/* 803D3828 003D0768  7C C5 01 2E */	stwx r6, r5, r0
/* 803D382C 003D076C  80 04 00 04 */	lwz r0, 4(r4)
/* 803D3830 003D0770  80 A3 00 08 */	lwz r5, 8(r3)
/* 803D3834 003D0774  80 83 00 14 */	lwz r4, 0x14(r3)
/* 803D3838 003D0778  54 00 10 3A */	slwi r0, r0, 2
/* 803D383C 003D077C  7C A4 01 2E */	stwx r5, r4, r0
/* 803D3840 003D0780  80 83 00 08 */	lwz r4, 8(r3)
/* 803D3844 003D0784  38 04 00 01 */	addi r0, r4, 1
/* 803D3848 003D0788  90 03 00 08 */	stw r0, 8(r3)
/* 803D384C 003D078C  4E 80 00 20 */	blr 
