.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80496F18:
	.asciz "ebiScreenFileSelect_Mgr"
.balign 4
lbl_80496F30:
	.asciz "OpenScene"
.balign 4
lbl_80496F3C:
	.asciz "CheckData"
.balign 4
lbl_80496F48:
	.asciz "DecideData"
.balign 4
lbl_80496F54:
	.asciz "SelectData"
.balign 4
lbl_80496F60:
	.asciz "DataBroken"
.balign 4
lbl_80496F6C:
	.asciz "NowDelete"
.balign 4
lbl_80496F78:
	.asciz "DoYouDelete"
.balign 4
lbl_80496F84:
	.asciz "WhichDataDoYouCopyTo"
.balign 4
lbl_80496F9C:
	.asciz "FailToDelete"
.balign 4
lbl_80496FAC:
	.asciz "FinishDelete"
.balign 4
lbl_80496FBC:
	.asciz "DoYouOverwrite"
.balign 4
lbl_80496FCC:
	.asciz "FailToCopy"
.balign 4
lbl_80496FD8:
	.asciz "FinishCopy"
.balign 4
lbl_80496FE4:
	.asciz "ebiScreenFileSelect_Mgr.cpp"
.balign 4
lbl_80497000:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global "__vt__Q24Game28StateMachine<Q33ebi2FS4TMgr>"
"__vt__Q24Game28StateMachine<Q33ebi2FS4TMgr>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "start__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
.global __vt__Q33ebi2FS31FSMState04_WhichDataDoYouCopyTo
__vt__Q33ebi2FS31FSMState04_WhichDataDoYouCopyTo:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS31FSMState04_WhichDataDoYouCopyToFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS31FSMState04_WhichDataDoYouCopyToFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS22FSMState00c_DecideData
__vt__Q33ebi2FS22FSMState00c_DecideData:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS22FSMState00c_DecideDataFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS22FSMState00c_DecideDataFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS21FSMState00b_CheckData
__vt__Q33ebi2FS21FSMState00b_CheckData:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS21FSMState00b_CheckDataFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS21FSMState00b_CheckDataFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS21FSMState00_SelectData
__vt__Q33ebi2FS21FSMState00_SelectData:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS21FSMState00_SelectDataFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS21FSMState00_SelectDataFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS21FSMState00a_OpenScene
__vt__Q33ebi2FS21FSMState00a_OpenScene:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS21FSMState00a_OpenSceneFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS21FSMState00a_OpenSceneFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS18FSMState09_NowCopy
__vt__Q33ebi2FS18FSMState09_NowCopy:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
	.4byte cleanup__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte do_cardRequest__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
	.4byte do_transitCardReady__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
	.4byte do_transitCardNoCard__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
	.4byte do_transitCardIOError__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
	.4byte do_transitCardPlayerDataBroken__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
	.4byte do_close__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS20FSMState02_NowDelete
__vt__Q33ebi2FS20FSMState02_NowDelete:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
	.4byte cleanup__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte do_cardRequest__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
	.4byte do_transitCardReady__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
	.4byte do_transitCardNoCard__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
	.4byte do_transitCardIOError__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
	.4byte do_transitCardPlayerDataBroken__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
	.4byte do_close__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS17FSMState_CardTask
__vt__Q33ebi2FS17FSMState_CardTask:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte do_transitCardPlayerDataBroken__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
	.4byte do_close__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS21FSMState10_FinishCopy
__vt__Q33ebi2FS21FSMState10_FinishCopy:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgr
	.4byte do_open__Q33ebi2FS21FSMState10_FinishCopyFPQ33ebi2FS4TMgr
	.4byte do_transit__Q33ebi2FS21FSMState10_FinishCopyFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS21FSMState08_FailToCopy
__vt__Q33ebi2FS21FSMState08_FailToCopy:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgr
	.4byte do_open__Q33ebi2FS21FSMState08_FailToCopyFPQ33ebi2FS4TMgr
	.4byte do_transit__Q33ebi2FS21FSMState08_FailToCopyFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS23FSMState06_FinishDelete
__vt__Q33ebi2FS23FSMState06_FinishDelete:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgr
	.4byte do_open__Q33ebi2FS23FSMState06_FinishDeleteFPQ33ebi2FS4TMgr
	.4byte do_transit__Q33ebi2FS23FSMState06_FinishDeleteFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS23FSMState05_FailToDelete
__vt__Q33ebi2FS23FSMState05_FailToDelete:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgr
	.4byte do_open__Q33ebi2FS23FSMState05_FailToDeleteFPQ33ebi2FS4TMgr
	.4byte do_transit__Q33ebi2FS23FSMState05_FailToDeleteFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS16FSMState_Warning
__vt__Q33ebi2FS16FSMState_Warning:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgr
	.4byte 0
	.4byte 0
.global __vt__Q33ebi2FS25FSMState07_DoYouOverwrite
__vt__Q33ebi2FS25FSMState07_DoYouOverwrite:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr
	.4byte do_set__Q33ebi2FS25FSMState07_DoYouOverwriteFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_decide__Q33ebi2FS25FSMState07_DoYouOverwriteFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS22FSMState03_DoYouDelete
__vt__Q33ebi2FS22FSMState03_DoYouDelete:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr
	.4byte do_set__Q33ebi2FS22FSMState03_DoYouDeleteFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_decide__Q33ebi2FS22FSMState03_DoYouDeleteFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS21FSMState01_DataBroken
__vt__Q33ebi2FS21FSMState01_DataBroken:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr
	.4byte do_set__Q33ebi2FS21FSMState01_DataBrokenFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_decide__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS20FSMState_SelectYesNo
__vt__Q33ebi2FS20FSMState_SelectYesNo:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr
	.4byte 0
	.4byte do_decide__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr
.global __vt__Q33ebi2FS8FSMState
__vt__Q33ebi2FS8FSMState:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
.global "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"
"__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgrPQ24Game8StateArg"
	.4byte "exec__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
.global __vt__Q33ebi2FS15FSMStateMachine
__vt__Q33ebi2FS15FSMStateMachine:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi2FS15FSMStateMachineFPQ33ebi2FS4TMgr
	.4byte "start__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
	.4byte "transit__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051FBF8:
	.asciz "Standby"
.balign 4
lbl_8051FC00:
	.asciz "NowCopy"
.balign 4
lbl_8051FC08:
	.float 0.5
lbl_8051FC0C:
	.float -0.5
lbl_8051FC10:
	.float 3.0
lbl_8051FC14:
	.float 1.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q33ebi2FS15FSMStateMachineFPQ33ebi2FS4TMgr
init__Q33ebi2FS15FSMStateMachineFPQ33ebi2FS4TMgr:
/* 803DE2C0 003DB200  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DE2C4 003DB204  7C 08 02 A6 */	mflr r0
/* 803DE2C8 003DB208  3C 80 80 49 */	lis r4, lbl_80496F18@ha
/* 803DE2CC 003DB20C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DE2D0 003DB210  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DE2D4 003DB214  7C 7F 1B 78 */	mr r31, r3
/* 803DE2D8 003DB218  93 C1 00 08 */	stw r30, 8(r1)
/* 803DE2DC 003DB21C  3B C4 6F 18 */	addi r30, r4, lbl_80496F18@l
/* 803DE2E0 003DB220  38 80 00 0F */	li r4, 0xf
/* 803DE2E4 003DB224  48 00 2E 79 */	bl "create__Q24Game28StateMachine<Q33ebi2FS4TMgr>Fi"
/* 803DE2E8 003DB228  38 60 00 10 */	li r3, 0x10
/* 803DE2EC 003DB22C  4B C4 5B B9 */	bl __nw__FUl
/* 803DE2F0 003DB230  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE2F4 003DB234  41 82 00 30 */	beq .L_803DE324
/* 803DE2F8 003DB238  3C A0 80 4F */	lis r5, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE2FC 003DB23C  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS8FSMState@ha
/* 803DE300 003DB240  38 05 96 40 */	addi r0, r5, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE304 003DB244  38 A0 00 00 */	li r5, 0
/* 803DE308 003DB248  90 04 00 00 */	stw r0, 0(r4)
/* 803DE30C 003DB24C  38 63 96 18 */	addi r3, r3, __vt__Q33ebi2FS8FSMState@l
/* 803DE310 003DB250  38 02 18 98 */	addi r0, r2, lbl_8051FBF8@sda21
/* 803DE314 003DB254  90 A4 00 04 */	stw r5, 4(r4)
/* 803DE318 003DB258  90 A4 00 08 */	stw r5, 8(r4)
/* 803DE31C 003DB25C  90 64 00 00 */	stw r3, 0(r4)
/* 803DE320 003DB260  90 04 00 0C */	stw r0, 0xc(r4)
.L_803DE324:
/* 803DE324 003DB264  7F E3 FB 78 */	mr r3, r31
/* 803DE328 003DB268  48 00 2F 35 */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE32C 003DB26C  38 60 00 10 */	li r3, 0x10
/* 803DE330 003DB270  4B C4 5B 75 */	bl __nw__FUl
/* 803DE334 003DB274  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE338 003DB278  41 82 00 40 */	beq .L_803DE378
/* 803DE33C 003DB27C  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE340 003DB280  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS8FSMState@ha
/* 803DE344 003DB284  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE348 003DB288  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS21FSMState00a_OpenScene@ha
/* 803DE34C 003DB28C  90 04 00 00 */	stw r0, 0(r4)
/* 803DE350 003DB290  38 00 00 01 */	li r0, 1
/* 803DE354 003DB294  38 E0 00 00 */	li r7, 0
/* 803DE358 003DB298  38 C5 96 18 */	addi r6, r5, __vt__Q33ebi2FS8FSMState@l
/* 803DE35C 003DB29C  90 04 00 04 */	stw r0, 4(r4)
/* 803DE360 003DB2A0  38 BE 00 18 */	addi r5, r30, 0x18
/* 803DE364 003DB2A4  38 03 93 80 */	addi r0, r3, __vt__Q33ebi2FS21FSMState00a_OpenScene@l
/* 803DE368 003DB2A8  90 E4 00 08 */	stw r7, 8(r4)
/* 803DE36C 003DB2AC  90 C4 00 00 */	stw r6, 0(r4)
/* 803DE370 003DB2B0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803DE374 003DB2B4  90 04 00 00 */	stw r0, 0(r4)
.L_803DE378:
/* 803DE378 003DB2B8  7F E3 FB 78 */	mr r3, r31
/* 803DE37C 003DB2BC  48 00 2E E1 */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE380 003DB2C0  38 60 00 18 */	li r3, 0x18
/* 803DE384 003DB2C4  4B C4 5B 21 */	bl __nw__FUl
/* 803DE388 003DB2C8  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE38C 003DB2CC  41 82 00 40 */	beq .L_803DE3CC
/* 803DE390 003DB2D0  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE394 003DB2D4  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS8FSMState@ha
/* 803DE398 003DB2D8  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE39C 003DB2DC  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS21FSMState00b_CheckData@ha
/* 803DE3A0 003DB2E0  90 04 00 00 */	stw r0, 0(r4)
/* 803DE3A4 003DB2E4  38 00 00 02 */	li r0, 2
/* 803DE3A8 003DB2E8  38 E0 00 00 */	li r7, 0
/* 803DE3AC 003DB2EC  38 C5 96 18 */	addi r6, r5, __vt__Q33ebi2FS8FSMState@l
/* 803DE3B0 003DB2F0  90 04 00 04 */	stw r0, 4(r4)
/* 803DE3B4 003DB2F4  38 BE 00 24 */	addi r5, r30, 0x24
/* 803DE3B8 003DB2F8  38 03 93 30 */	addi r0, r3, __vt__Q33ebi2FS21FSMState00b_CheckData@l
/* 803DE3BC 003DB2FC  90 E4 00 08 */	stw r7, 8(r4)
/* 803DE3C0 003DB300  90 C4 00 00 */	stw r6, 0(r4)
/* 803DE3C4 003DB304  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803DE3C8 003DB308  90 04 00 00 */	stw r0, 0(r4)
.L_803DE3CC:
/* 803DE3CC 003DB30C  7F E3 FB 78 */	mr r3, r31
/* 803DE3D0 003DB310  48 00 2E 8D */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE3D4 003DB314  38 60 00 10 */	li r3, 0x10
/* 803DE3D8 003DB318  4B C4 5A CD */	bl __nw__FUl
/* 803DE3DC 003DB31C  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE3E0 003DB320  41 82 00 40 */	beq .L_803DE420
/* 803DE3E4 003DB324  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE3E8 003DB328  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS8FSMState@ha
/* 803DE3EC 003DB32C  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE3F0 003DB330  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS22FSMState00c_DecideData@ha
/* 803DE3F4 003DB334  90 04 00 00 */	stw r0, 0(r4)
/* 803DE3F8 003DB338  38 00 00 03 */	li r0, 3
/* 803DE3FC 003DB33C  38 E0 00 00 */	li r7, 0
/* 803DE400 003DB340  38 C5 96 18 */	addi r6, r5, __vt__Q33ebi2FS8FSMState@l
/* 803DE404 003DB344  90 04 00 04 */	stw r0, 4(r4)
/* 803DE408 003DB348  38 BE 00 30 */	addi r5, r30, 0x30
/* 803DE40C 003DB34C  38 03 93 08 */	addi r0, r3, __vt__Q33ebi2FS22FSMState00c_DecideData@l
/* 803DE410 003DB350  90 E4 00 08 */	stw r7, 8(r4)
/* 803DE414 003DB354  90 C4 00 00 */	stw r6, 0(r4)
/* 803DE418 003DB358  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803DE41C 003DB35C  90 04 00 00 */	stw r0, 0(r4)
.L_803DE420:
/* 803DE420 003DB360  7F E3 FB 78 */	mr r3, r31
/* 803DE424 003DB364  48 00 2E 39 */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE428 003DB368  38 60 00 1C */	li r3, 0x1c
/* 803DE42C 003DB36C  4B C4 5A 79 */	bl __nw__FUl
/* 803DE430 003DB370  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE434 003DB374  41 82 00 48 */	beq .L_803DE47C
/* 803DE438 003DB378  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE43C 003DB37C  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS8FSMState@ha
/* 803DE440 003DB380  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE444 003DB384  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS21FSMState00_SelectData@ha
/* 803DE448 003DB388  90 04 00 00 */	stw r0, 0(r4)
/* 803DE44C 003DB38C  38 00 00 04 */	li r0, 4
/* 803DE450 003DB390  38 E0 00 00 */	li r7, 0
/* 803DE454 003DB394  38 C5 96 18 */	addi r6, r5, __vt__Q33ebi2FS8FSMState@l
/* 803DE458 003DB398  90 04 00 04 */	stw r0, 4(r4)
/* 803DE45C 003DB39C  38 BE 00 3C */	addi r5, r30, 0x3c
/* 803DE460 003DB3A0  38 03 93 58 */	addi r0, r3, __vt__Q33ebi2FS21FSMState00_SelectData@l
/* 803DE464 003DB3A4  90 E4 00 08 */	stw r7, 8(r4)
/* 803DE468 003DB3A8  90 C4 00 00 */	stw r6, 0(r4)
/* 803DE46C 003DB3AC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803DE470 003DB3B0  90 04 00 00 */	stw r0, 0(r4)
/* 803DE474 003DB3B4  90 E4 00 14 */	stw r7, 0x14(r4)
/* 803DE478 003DB3B8  90 E4 00 18 */	stw r7, 0x18(r4)
.L_803DE47C:
/* 803DE47C 003DB3BC  7F E3 FB 78 */	mr r3, r31
/* 803DE480 003DB3C0  48 00 2D DD */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE484 003DB3C4  38 60 00 24 */	li r3, 0x24
/* 803DE488 003DB3C8  4B C4 5A 1D */	bl __nw__FUl
/* 803DE48C 003DB3CC  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE490 003DB3D0  41 82 00 4C */	beq .L_803DE4DC
/* 803DE494 003DB3D4  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE498 003DB3D8  3C C0 80 4F */	lis r6, __vt__Q33ebi2FS8FSMState@ha
/* 803DE49C 003DB3DC  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE4A0 003DB3E0  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS20FSMState_SelectYesNo@ha
/* 803DE4A4 003DB3E4  90 04 00 00 */	stw r0, 0(r4)
/* 803DE4A8 003DB3E8  38 E0 00 05 */	li r7, 5
/* 803DE4AC 003DB3EC  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS21FSMState01_DataBroken@ha
/* 803DE4B0 003DB3F0  38 00 00 00 */	li r0, 0
/* 803DE4B4 003DB3F4  90 E4 00 04 */	stw r7, 4(r4)
/* 803DE4B8 003DB3F8  38 E6 96 18 */	addi r7, r6, __vt__Q33ebi2FS8FSMState@l
/* 803DE4BC 003DB3FC  38 DE 00 48 */	addi r6, r30, 0x48
/* 803DE4C0 003DB400  38 A5 95 E8 */	addi r5, r5, __vt__Q33ebi2FS20FSMState_SelectYesNo@l
/* 803DE4C4 003DB404  90 04 00 08 */	stw r0, 8(r4)
/* 803DE4C8 003DB408  38 03 95 B8 */	addi r0, r3, __vt__Q33ebi2FS21FSMState01_DataBroken@l
/* 803DE4CC 003DB40C  90 E4 00 00 */	stw r7, 0(r4)
/* 803DE4D0 003DB410  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DE4D4 003DB414  90 A4 00 00 */	stw r5, 0(r4)
/* 803DE4D8 003DB418  90 04 00 00 */	stw r0, 0(r4)
.L_803DE4DC:
/* 803DE4DC 003DB41C  7F E3 FB 78 */	mr r3, r31
/* 803DE4E0 003DB420  48 00 2D 7D */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE4E4 003DB424  38 60 00 18 */	li r3, 0x18
/* 803DE4E8 003DB428  4B C4 59 BD */	bl __nw__FUl
/* 803DE4EC 003DB42C  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE4F0 003DB430  41 82 00 4C */	beq .L_803DE53C
/* 803DE4F4 003DB434  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE4F8 003DB438  3C C0 80 4F */	lis r6, __vt__Q33ebi2FS8FSMState@ha
/* 803DE4FC 003DB43C  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE500 003DB440  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS17FSMState_CardTask@ha
/* 803DE504 003DB444  90 04 00 00 */	stw r0, 0(r4)
/* 803DE508 003DB448  38 E0 00 06 */	li r7, 6
/* 803DE50C 003DB44C  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS20FSMState02_NowDelete@ha
/* 803DE510 003DB450  38 00 00 00 */	li r0, 0
/* 803DE514 003DB454  90 E4 00 04 */	stw r7, 4(r4)
/* 803DE518 003DB458  38 E6 96 18 */	addi r7, r6, __vt__Q33ebi2FS8FSMState@l
/* 803DE51C 003DB45C  38 DE 00 54 */	addi r6, r30, 0x54
/* 803DE520 003DB460  38 A5 94 28 */	addi r5, r5, __vt__Q33ebi2FS17FSMState_CardTask@l
/* 803DE524 003DB464  90 04 00 08 */	stw r0, 8(r4)
/* 803DE528 003DB468  38 03 93 E8 */	addi r0, r3, __vt__Q33ebi2FS20FSMState02_NowDelete@l
/* 803DE52C 003DB46C  90 E4 00 00 */	stw r7, 0(r4)
/* 803DE530 003DB470  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DE534 003DB474  90 A4 00 00 */	stw r5, 0(r4)
/* 803DE538 003DB478  90 04 00 00 */	stw r0, 0(r4)
.L_803DE53C:
/* 803DE53C 003DB47C  7F E3 FB 78 */	mr r3, r31
/* 803DE540 003DB480  48 00 2D 1D */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE544 003DB484  38 60 00 24 */	li r3, 0x24
/* 803DE548 003DB488  4B C4 59 5D */	bl __nw__FUl
/* 803DE54C 003DB48C  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE550 003DB490  41 82 00 4C */	beq .L_803DE59C
/* 803DE554 003DB494  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE558 003DB498  3C C0 80 4F */	lis r6, __vt__Q33ebi2FS8FSMState@ha
/* 803DE55C 003DB49C  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE560 003DB4A0  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS20FSMState_SelectYesNo@ha
/* 803DE564 003DB4A4  90 04 00 00 */	stw r0, 0(r4)
/* 803DE568 003DB4A8  38 E0 00 07 */	li r7, 7
/* 803DE56C 003DB4AC  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS22FSMState03_DoYouDelete@ha
/* 803DE570 003DB4B0  38 00 00 00 */	li r0, 0
/* 803DE574 003DB4B4  90 E4 00 04 */	stw r7, 4(r4)
/* 803DE578 003DB4B8  38 E6 96 18 */	addi r7, r6, __vt__Q33ebi2FS8FSMState@l
/* 803DE57C 003DB4BC  38 DE 00 60 */	addi r6, r30, 0x60
/* 803DE580 003DB4C0  38 A5 95 E8 */	addi r5, r5, __vt__Q33ebi2FS20FSMState_SelectYesNo@l
/* 803DE584 003DB4C4  90 04 00 08 */	stw r0, 8(r4)
/* 803DE588 003DB4C8  38 03 95 88 */	addi r0, r3, __vt__Q33ebi2FS22FSMState03_DoYouDelete@l
/* 803DE58C 003DB4CC  90 E4 00 00 */	stw r7, 0(r4)
/* 803DE590 003DB4D0  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DE594 003DB4D4  90 A4 00 00 */	stw r5, 0(r4)
/* 803DE598 003DB4D8  90 04 00 00 */	stw r0, 0(r4)
.L_803DE59C:
/* 803DE59C 003DB4DC  7F E3 FB 78 */	mr r3, r31
/* 803DE5A0 003DB4E0  48 00 2C BD */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE5A4 003DB4E4  38 60 00 18 */	li r3, 0x18
/* 803DE5A8 003DB4E8  4B C4 58 FD */	bl __nw__FUl
/* 803DE5AC 003DB4EC  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE5B0 003DB4F0  41 82 00 40 */	beq .L_803DE5F0
/* 803DE5B4 003DB4F4  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE5B8 003DB4F8  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS8FSMState@ha
/* 803DE5BC 003DB4FC  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE5C0 003DB500  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS31FSMState04_WhichDataDoYouCopyTo@ha
/* 803DE5C4 003DB504  90 04 00 00 */	stw r0, 0(r4)
/* 803DE5C8 003DB508  38 00 00 08 */	li r0, 8
/* 803DE5CC 003DB50C  38 E0 00 00 */	li r7, 0
/* 803DE5D0 003DB510  38 C5 96 18 */	addi r6, r5, __vt__Q33ebi2FS8FSMState@l
/* 803DE5D4 003DB514  90 04 00 04 */	stw r0, 4(r4)
/* 803DE5D8 003DB518  38 BE 00 6C */	addi r5, r30, 0x6c
/* 803DE5DC 003DB51C  38 03 92 E0 */	addi r0, r3, __vt__Q33ebi2FS31FSMState04_WhichDataDoYouCopyTo@l
/* 803DE5E0 003DB520  90 E4 00 08 */	stw r7, 8(r4)
/* 803DE5E4 003DB524  90 C4 00 00 */	stw r6, 0(r4)
/* 803DE5E8 003DB528  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803DE5EC 003DB52C  90 04 00 00 */	stw r0, 0(r4)
.L_803DE5F0:
/* 803DE5F0 003DB530  7F E3 FB 78 */	mr r3, r31
/* 803DE5F4 003DB534  48 00 2C 69 */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE5F8 003DB538  38 60 00 1C */	li r3, 0x1c
/* 803DE5FC 003DB53C  4B C4 58 A9 */	bl __nw__FUl
/* 803DE600 003DB540  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE604 003DB544  41 82 00 54 */	beq .L_803DE658
/* 803DE608 003DB548  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE60C 003DB54C  3C C0 80 4F */	lis r6, __vt__Q33ebi2FS8FSMState@ha
/* 803DE610 003DB550  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE614 003DB554  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS16FSMState_Warning@ha
/* 803DE618 003DB558  90 04 00 00 */	stw r0, 0(r4)
/* 803DE61C 003DB55C  38 00 00 09 */	li r0, 9
/* 803DE620 003DB560  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS23FSMState05_FailToDelete@ha
/* 803DE624 003DB564  39 00 00 00 */	li r8, 0
/* 803DE628 003DB568  90 04 00 04 */	stw r0, 4(r4)
/* 803DE62C 003DB56C  38 E6 96 18 */	addi r7, r6, __vt__Q33ebi2FS8FSMState@l
/* 803DE630 003DB570  38 DE 00 84 */	addi r6, r30, 0x84
/* 803DE634 003DB574  38 A5 95 28 */	addi r5, r5, __vt__Q33ebi2FS16FSMState_Warning@l
/* 803DE638 003DB578  91 04 00 08 */	stw r8, 8(r4)
/* 803DE63C 003DB57C  38 03 94 F8 */	addi r0, r3, __vt__Q33ebi2FS23FSMState05_FailToDelete@l
/* 803DE640 003DB580  90 E4 00 00 */	stw r7, 0(r4)
/* 803DE644 003DB584  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DE648 003DB588  90 A4 00 00 */	stw r5, 0(r4)
/* 803DE64C 003DB58C  91 04 00 14 */	stw r8, 0x14(r4)
/* 803DE650 003DB590  91 04 00 18 */	stw r8, 0x18(r4)
/* 803DE654 003DB594  90 04 00 00 */	stw r0, 0(r4)
.L_803DE658:
/* 803DE658 003DB598  7F E3 FB 78 */	mr r3, r31
/* 803DE65C 003DB59C  48 00 2C 01 */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE660 003DB5A0  38 60 00 1C */	li r3, 0x1c
/* 803DE664 003DB5A4  4B C4 58 41 */	bl __nw__FUl
/* 803DE668 003DB5A8  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE66C 003DB5AC  41 82 00 54 */	beq .L_803DE6C0
/* 803DE670 003DB5B0  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE674 003DB5B4  3C C0 80 4F */	lis r6, __vt__Q33ebi2FS8FSMState@ha
/* 803DE678 003DB5B8  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE67C 003DB5BC  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS16FSMState_Warning@ha
/* 803DE680 003DB5C0  90 04 00 00 */	stw r0, 0(r4)
/* 803DE684 003DB5C4  38 00 00 0A */	li r0, 0xa
/* 803DE688 003DB5C8  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS23FSMState06_FinishDelete@ha
/* 803DE68C 003DB5CC  39 00 00 00 */	li r8, 0
/* 803DE690 003DB5D0  90 04 00 04 */	stw r0, 4(r4)
/* 803DE694 003DB5D4  38 E6 96 18 */	addi r7, r6, __vt__Q33ebi2FS8FSMState@l
/* 803DE698 003DB5D8  38 DE 00 94 */	addi r6, r30, 0x94
/* 803DE69C 003DB5DC  38 A5 95 28 */	addi r5, r5, __vt__Q33ebi2FS16FSMState_Warning@l
/* 803DE6A0 003DB5E0  91 04 00 08 */	stw r8, 8(r4)
/* 803DE6A4 003DB5E4  38 03 94 C8 */	addi r0, r3, __vt__Q33ebi2FS23FSMState06_FinishDelete@l
/* 803DE6A8 003DB5E8  90 E4 00 00 */	stw r7, 0(r4)
/* 803DE6AC 003DB5EC  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DE6B0 003DB5F0  90 A4 00 00 */	stw r5, 0(r4)
/* 803DE6B4 003DB5F4  91 04 00 14 */	stw r8, 0x14(r4)
/* 803DE6B8 003DB5F8  91 04 00 18 */	stw r8, 0x18(r4)
/* 803DE6BC 003DB5FC  90 04 00 00 */	stw r0, 0(r4)
.L_803DE6C0:
/* 803DE6C0 003DB600  7F E3 FB 78 */	mr r3, r31
/* 803DE6C4 003DB604  48 00 2B 99 */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE6C8 003DB608  38 60 00 24 */	li r3, 0x24
/* 803DE6CC 003DB60C  4B C4 57 D9 */	bl __nw__FUl
/* 803DE6D0 003DB610  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE6D4 003DB614  41 82 00 4C */	beq .L_803DE720
/* 803DE6D8 003DB618  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE6DC 003DB61C  3C C0 80 4F */	lis r6, __vt__Q33ebi2FS8FSMState@ha
/* 803DE6E0 003DB620  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE6E4 003DB624  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS20FSMState_SelectYesNo@ha
/* 803DE6E8 003DB628  90 04 00 00 */	stw r0, 0(r4)
/* 803DE6EC 003DB62C  38 E0 00 0B */	li r7, 0xb
/* 803DE6F0 003DB630  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS25FSMState07_DoYouOverwrite@ha
/* 803DE6F4 003DB634  38 00 00 00 */	li r0, 0
/* 803DE6F8 003DB638  90 E4 00 04 */	stw r7, 4(r4)
/* 803DE6FC 003DB63C  38 E6 96 18 */	addi r7, r6, __vt__Q33ebi2FS8FSMState@l
/* 803DE700 003DB640  38 DE 00 A4 */	addi r6, r30, 0xa4
/* 803DE704 003DB644  38 A5 95 E8 */	addi r5, r5, __vt__Q33ebi2FS20FSMState_SelectYesNo@l
/* 803DE708 003DB648  90 04 00 08 */	stw r0, 8(r4)
/* 803DE70C 003DB64C  38 03 95 58 */	addi r0, r3, __vt__Q33ebi2FS25FSMState07_DoYouOverwrite@l
/* 803DE710 003DB650  90 E4 00 00 */	stw r7, 0(r4)
/* 803DE714 003DB654  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DE718 003DB658  90 A4 00 00 */	stw r5, 0(r4)
/* 803DE71C 003DB65C  90 04 00 00 */	stw r0, 0(r4)
.L_803DE720:
/* 803DE720 003DB660  7F E3 FB 78 */	mr r3, r31
/* 803DE724 003DB664  48 00 2B 39 */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE728 003DB668  38 60 00 1C */	li r3, 0x1c
/* 803DE72C 003DB66C  4B C4 57 79 */	bl __nw__FUl
/* 803DE730 003DB670  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE734 003DB674  41 82 00 54 */	beq .L_803DE788
/* 803DE738 003DB678  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE73C 003DB67C  3C C0 80 4F */	lis r6, __vt__Q33ebi2FS8FSMState@ha
/* 803DE740 003DB680  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE744 003DB684  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS16FSMState_Warning@ha
/* 803DE748 003DB688  90 04 00 00 */	stw r0, 0(r4)
/* 803DE74C 003DB68C  38 00 00 0C */	li r0, 0xc
/* 803DE750 003DB690  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS21FSMState08_FailToCopy@ha
/* 803DE754 003DB694  39 00 00 00 */	li r8, 0
/* 803DE758 003DB698  90 04 00 04 */	stw r0, 4(r4)
/* 803DE75C 003DB69C  38 E6 96 18 */	addi r7, r6, __vt__Q33ebi2FS8FSMState@l
/* 803DE760 003DB6A0  38 DE 00 B4 */	addi r6, r30, 0xb4
/* 803DE764 003DB6A4  38 A5 95 28 */	addi r5, r5, __vt__Q33ebi2FS16FSMState_Warning@l
/* 803DE768 003DB6A8  91 04 00 08 */	stw r8, 8(r4)
/* 803DE76C 003DB6AC  38 03 94 98 */	addi r0, r3, __vt__Q33ebi2FS21FSMState08_FailToCopy@l
/* 803DE770 003DB6B0  90 E4 00 00 */	stw r7, 0(r4)
/* 803DE774 003DB6B4  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DE778 003DB6B8  90 A4 00 00 */	stw r5, 0(r4)
/* 803DE77C 003DB6BC  91 04 00 14 */	stw r8, 0x14(r4)
/* 803DE780 003DB6C0  91 04 00 18 */	stw r8, 0x18(r4)
/* 803DE784 003DB6C4  90 04 00 00 */	stw r0, 0(r4)
.L_803DE788:
/* 803DE788 003DB6C8  7F E3 FB 78 */	mr r3, r31
/* 803DE78C 003DB6CC  48 00 2A D1 */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE790 003DB6D0  38 60 00 18 */	li r3, 0x18
/* 803DE794 003DB6D4  4B C4 57 11 */	bl __nw__FUl
/* 803DE798 003DB6D8  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE79C 003DB6DC  41 82 00 4C */	beq .L_803DE7E8
/* 803DE7A0 003DB6E0  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE7A4 003DB6E4  3C C0 80 4F */	lis r6, __vt__Q33ebi2FS8FSMState@ha
/* 803DE7A8 003DB6E8  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE7AC 003DB6EC  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS17FSMState_CardTask@ha
/* 803DE7B0 003DB6F0  90 04 00 00 */	stw r0, 0(r4)
/* 803DE7B4 003DB6F4  38 E0 00 0D */	li r7, 0xd
/* 803DE7B8 003DB6F8  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS18FSMState09_NowCopy@ha
/* 803DE7BC 003DB6FC  38 00 00 00 */	li r0, 0
/* 803DE7C0 003DB700  90 E4 00 04 */	stw r7, 4(r4)
/* 803DE7C4 003DB704  38 E6 96 18 */	addi r7, r6, __vt__Q33ebi2FS8FSMState@l
/* 803DE7C8 003DB708  38 C2 18 A0 */	addi r6, r2, lbl_8051FC00@sda21
/* 803DE7CC 003DB70C  38 A5 94 28 */	addi r5, r5, __vt__Q33ebi2FS17FSMState_CardTask@l
/* 803DE7D0 003DB710  90 04 00 08 */	stw r0, 8(r4)
/* 803DE7D4 003DB714  38 03 93 A8 */	addi r0, r3, __vt__Q33ebi2FS18FSMState09_NowCopy@l
/* 803DE7D8 003DB718  90 E4 00 00 */	stw r7, 0(r4)
/* 803DE7DC 003DB71C  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DE7E0 003DB720  90 A4 00 00 */	stw r5, 0(r4)
/* 803DE7E4 003DB724  90 04 00 00 */	stw r0, 0(r4)
.L_803DE7E8:
/* 803DE7E8 003DB728  7F E3 FB 78 */	mr r3, r31
/* 803DE7EC 003DB72C  48 00 2A 71 */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE7F0 003DB730  38 60 00 1C */	li r3, 0x1c
/* 803DE7F4 003DB734  4B C4 56 B1 */	bl __nw__FUl
/* 803DE7F8 003DB738  7C 64 1B 79 */	or. r4, r3, r3
/* 803DE7FC 003DB73C  41 82 00 54 */	beq .L_803DE850
/* 803DE800 003DB740  3C 60 80 4F */	lis r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@ha
/* 803DE804 003DB744  3C C0 80 4F */	lis r6, __vt__Q33ebi2FS8FSMState@ha
/* 803DE808 003DB748  38 03 96 40 */	addi r0, r3, "__vt__Q24Game24FSMState<Q33ebi2FS4TMgr>"@l
/* 803DE80C 003DB74C  3C A0 80 4F */	lis r5, __vt__Q33ebi2FS16FSMState_Warning@ha
/* 803DE810 003DB750  90 04 00 00 */	stw r0, 0(r4)
/* 803DE814 003DB754  38 00 00 0E */	li r0, 0xe
/* 803DE818 003DB758  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS21FSMState10_FinishCopy@ha
/* 803DE81C 003DB75C  39 00 00 00 */	li r8, 0
/* 803DE820 003DB760  90 04 00 04 */	stw r0, 4(r4)
/* 803DE824 003DB764  38 E6 96 18 */	addi r7, r6, __vt__Q33ebi2FS8FSMState@l
/* 803DE828 003DB768  38 DE 00 C0 */	addi r6, r30, 0xc0
/* 803DE82C 003DB76C  38 A5 95 28 */	addi r5, r5, __vt__Q33ebi2FS16FSMState_Warning@l
/* 803DE830 003DB770  91 04 00 08 */	stw r8, 8(r4)
/* 803DE834 003DB774  38 03 94 68 */	addi r0, r3, __vt__Q33ebi2FS21FSMState10_FinishCopy@l
/* 803DE838 003DB778  90 E4 00 00 */	stw r7, 0(r4)
/* 803DE83C 003DB77C  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803DE840 003DB780  90 A4 00 00 */	stw r5, 0(r4)
/* 803DE844 003DB784  91 04 00 14 */	stw r8, 0x14(r4)
/* 803DE848 003DB788  91 04 00 18 */	stw r8, 0x18(r4)
/* 803DE84C 003DB78C  90 04 00 00 */	stw r0, 0(r4)
.L_803DE850:
/* 803DE850 003DB790  7F E3 FB 78 */	mr r3, r31
/* 803DE854 003DB794  48 00 2A 09 */	bl "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
/* 803DE858 003DB798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DE85C 003DB79C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DE860 003DB7A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DE864 003DB7A4  7C 08 03 A6 */	mtlr r0
/* 803DE868 003DB7A8  38 21 00 10 */	addi r1, r1, 0x10
/* 803DE86C 003DB7AC  4E 80 00 20 */	blr 

.global init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DE870 003DB7B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DE874 003DB7B4  7C 08 02 A6 */	mflr r0
/* 803DE878 003DB7B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DE87C 003DB7BC  81 83 00 00 */	lwz r12, 0(r3)
/* 803DE880 003DB7C0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803DE884 003DB7C4  7D 89 03 A6 */	mtctr r12
/* 803DE888 003DB7C8  4E 80 04 21 */	bctrl 
/* 803DE88C 003DB7CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DE890 003DB7D0  7C 08 03 A6 */	mtlr r0
/* 803DE894 003DB7D4  38 21 00 10 */	addi r1, r1, 0x10
/* 803DE898 003DB7D8  4E 80 00 20 */	blr 

.global exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr:
/* 803DE89C 003DB7DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DE8A0 003DB7E0  7C 08 02 A6 */	mflr r0
/* 803DE8A4 003DB7E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DE8A8 003DB7E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803DE8AC 003DB7EC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803DE8B0 003DB7F0  7D 89 03 A6 */	mtctr r12
/* 803DE8B4 003DB7F4  4E 80 04 21 */	bctrl 
/* 803DE8B8 003DB7F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DE8BC 003DB7FC  7C 08 03 A6 */	mtlr r0
/* 803DE8C0 003DB800  38 21 00 10 */	addi r1, r1, 0x10
/* 803DE8C4 003DB804  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DE8C8 003DB808  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DE8CC 003DB80C  7C 08 02 A6 */	mflr r0
/* 803DE8D0 003DB810  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DE8D4 003DB814  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DE8D8 003DB818  7C 9F 23 78 */	mr r31, r4
/* 803DE8DC 003DB81C  93 C1 00 08 */	stw r30, 8(r1)
/* 803DE8E0 003DB820  7C 7E 1B 78 */	mr r30, r3
/* 803DE8E4 003DB824  81 83 00 00 */	lwz r12, 0(r3)
/* 803DE8E8 003DB828  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803DE8EC 003DB82C  7D 89 03 A6 */	mtctr r12
/* 803DE8F0 003DB830  4E 80 04 21 */	bctrl 
/* 803DE8F4 003DB834  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 803DE8F8 003DB838  7F E3 FB 78 */	mr r3, r31
/* 803DE8FC 003DB83C  4B FF 99 2D */	bl openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DE900 003DB840  7F E3 FB 78 */	mr r3, r31
/* 803DE904 003DB844  4B FF 9F 2D */	bl outCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DE908 003DB848  88 9E 00 10 */	lbz r4, 0x10(r30)
/* 803DE90C 003DB84C  7F E3 FB 78 */	mr r3, r31
/* 803DE910 003DB850  4B FF 9C 41 */	bl setYesNo__Q43ebi6Screen10FileSelect11TMainScreenFb
/* 803DE914 003DB854  38 00 00 00 */	li r0, 0
/* 803DE918 003DB858  98 1E 00 21 */	stb r0, 0x21(r30)
/* 803DE91C 003DB85C  98 1E 00 20 */	stb r0, 0x20(r30)
/* 803DE920 003DB860  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DE924 003DB864  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DE928 003DB868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DE92C 003DB86C  7C 08 03 A6 */	mtlr r0
/* 803DE930 003DB870  38 21 00 10 */	addi r1, r1, 0x10
/* 803DE934 003DB874  4E 80 00 20 */	blr 

.global do_exec__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr
do_exec__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr:
/* 803DE938 003DB878  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DE93C 003DB87C  7C 08 02 A6 */	mflr r0
/* 803DE940 003DB880  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DE944 003DB884  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DE948 003DB888  7C 9F 23 78 */	mr r31, r4
/* 803DE94C 003DB88C  93 C1 00 08 */	stw r30, 8(r1)
/* 803DE950 003DB890  7C 7E 1B 78 */	mr r30, r3
/* 803DE954 003DB894  88 03 00 21 */	lbz r0, 0x21(r3)
/* 803DE958 003DB898  28 00 00 00 */	cmplwi r0, 0
/* 803DE95C 003DB89C  40 82 01 24 */	bne .L_803DEA80
/* 803DE960 003DB8A0  80 7F 0C 00 */	lwz r3, 0xc00(r31)
/* 803DE964 003DB8A4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 803DE968 003DB8A8  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 803DE96C 003DB8AC  40 82 00 14 */	bne .L_803DE980
/* 803DE970 003DB8B0  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 803DE974 003DB8B4  C0 02 18 A8 */	lfs f0, lbl_8051FC08@sda21(r2)
/* 803DE978 003DB8B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803DE97C 003DB8BC  40 81 00 0C */	ble .L_803DE988
.L_803DE980:
/* 803DE980 003DB8C0  38 00 00 01 */	li r0, 1
/* 803DE984 003DB8C4  48 00 00 08 */	b .L_803DE98C
.L_803DE988:
/* 803DE988 003DB8C8  38 00 00 00 */	li r0, 0
.L_803DE98C:
/* 803DE98C 003DB8CC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803DE990 003DB8D0  41 82 00 38 */	beq .L_803DE9C8
/* 803DE994 003DB8D4  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 803DE998 003DB8D8  28 00 00 00 */	cmplwi r0, 0
/* 803DE99C 003DB8DC  40 82 00 8C */	bne .L_803DEA28
/* 803DE9A0 003DB8E0  7F E3 FB 78 */	mr r3, r31
/* 803DE9A4 003DB8E4  38 80 00 01 */	li r4, 1
/* 803DE9A8 003DB8E8  4B FF 9B A9 */	bl setYesNo__Q43ebi6Screen10FileSelect11TMainScreenFb
/* 803DE9AC 003DB8EC  38 00 00 01 */	li r0, 1
/* 803DE9B0 003DB8F0  38 80 18 02 */	li r4, 0x1802
/* 803DE9B4 003DB8F4  98 1E 00 10 */	stb r0, 0x10(r30)
/* 803DE9B8 003DB8F8  38 A0 00 00 */	li r5, 0
/* 803DE9BC 003DB8FC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DE9C0 003DB900  4B F5 9C 71 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803DE9C4 003DB904  48 00 00 64 */	b .L_803DEA28
.L_803DE9C8:
/* 803DE9C8 003DB908  80 03 00 18 */	lwz r0, 0x18(r3)
/* 803DE9CC 003DB90C  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 803DE9D0 003DB910  40 82 00 14 */	bne .L_803DE9E4
/* 803DE9D4 003DB914  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 803DE9D8 003DB918  C0 02 18 AC */	lfs f0, lbl_8051FC0C@sda21(r2)
/* 803DE9DC 003DB91C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803DE9E0 003DB920  40 80 00 0C */	bge .L_803DE9EC
.L_803DE9E4:
/* 803DE9E4 003DB924  38 00 00 01 */	li r0, 1
/* 803DE9E8 003DB928  48 00 00 08 */	b .L_803DE9F0
.L_803DE9EC:
/* 803DE9EC 003DB92C  38 00 00 00 */	li r0, 0
.L_803DE9F0:
/* 803DE9F0 003DB930  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803DE9F4 003DB934  41 82 00 34 */	beq .L_803DEA28
/* 803DE9F8 003DB938  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 803DE9FC 003DB93C  28 00 00 01 */	cmplwi r0, 1
/* 803DEA00 003DB940  40 82 00 28 */	bne .L_803DEA28
/* 803DEA04 003DB944  7F E3 FB 78 */	mr r3, r31
/* 803DEA08 003DB948  38 80 00 00 */	li r4, 0
/* 803DEA0C 003DB94C  4B FF 9B 45 */	bl setYesNo__Q43ebi6Screen10FileSelect11TMainScreenFb
/* 803DEA10 003DB950  38 00 00 00 */	li r0, 0
/* 803DEA14 003DB954  38 80 18 02 */	li r4, 0x1802
/* 803DEA18 003DB958  98 1E 00 10 */	stb r0, 0x10(r30)
/* 803DEA1C 003DB95C  38 A0 00 00 */	li r5, 0
/* 803DEA20 003DB960  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DEA24 003DB964  4B F5 9C 0D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803DEA28:
/* 803DEA28 003DB968  80 7F 0C 00 */	lwz r3, 0xc00(r31)
/* 803DEA2C 003DB96C  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 803DEA30 003DB970  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 803DEA34 003DB974  41 82 00 20 */	beq .L_803DEA54
/* 803DEA38 003DB978  38 00 00 01 */	li r0, 1
/* 803DEA3C 003DB97C  38 80 18 00 */	li r4, 0x1800
/* 803DEA40 003DB980  98 1E 00 21 */	stb r0, 0x21(r30)
/* 803DEA44 003DB984  38 A0 00 00 */	li r5, 0
/* 803DEA48 003DB988  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DEA4C 003DB98C  4B F5 9B E5 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803DEA50 003DB990  48 00 00 5C */	b .L_803DEAAC
.L_803DEA54:
/* 803DEA54 003DB994  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 803DEA58 003DB998  41 82 00 54 */	beq .L_803DEAAC
/* 803DEA5C 003DB99C  38 60 00 00 */	li r3, 0
/* 803DEA60 003DB9A0  38 00 00 01 */	li r0, 1
/* 803DEA64 003DB9A4  98 7E 00 10 */	stb r3, 0x10(r30)
/* 803DEA68 003DB9A8  38 80 18 01 */	li r4, 0x1801
/* 803DEA6C 003DB9AC  38 A0 00 00 */	li r5, 0
/* 803DEA70 003DB9B0  98 1E 00 21 */	stb r0, 0x21(r30)
/* 803DEA74 003DB9B4  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DEA78 003DB9B8  4B F5 9B B9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803DEA7C 003DB9BC  48 00 00 30 */	b .L_803DEAAC
.L_803DEA80:
/* 803DEA80 003DB9C0  88 1E 00 20 */	lbz r0, 0x20(r30)
/* 803DEA84 003DB9C4  28 00 00 00 */	cmplwi r0, 0
/* 803DEA88 003DB9C8  40 82 00 24 */	bne .L_803DEAAC
/* 803DEA8C 003DB9CC  38 00 00 01 */	li r0, 1
/* 803DEA90 003DB9D0  98 1E 00 20 */	stb r0, 0x20(r30)
/* 803DEA94 003DB9D4  81 83 00 00 */	lwz r12, 0(r3)
/* 803DEA98 003DB9D8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803DEA9C 003DB9DC  7D 89 03 A6 */	mtctr r12
/* 803DEAA0 003DB9E0  4E 80 04 21 */	bctrl 
/* 803DEAA4 003DB9E4  7F E3 FB 78 */	mr r3, r31
/* 803DEAA8 003DB9E8  4B FF 9A 21 */	bl closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
.L_803DEAAC:
/* 803DEAAC 003DB9EC  7F E3 FB 78 */	mr r3, r31
/* 803DEAB0 003DB9F0  4B FF 9A 79 */	bl isFinishCloseMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DEAB4 003DB9F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DEAB8 003DB9F8  41 82 00 6C */	beq .L_803DEB24
/* 803DEABC 003DB9FC  88 1E 00 21 */	lbz r0, 0x21(r30)
/* 803DEAC0 003DBA00  28 00 00 00 */	cmplwi r0, 0
/* 803DEAC4 003DBA04  41 82 00 60 */	beq .L_803DEB24
/* 803DEAC8 003DBA08  88 1E 00 20 */	lbz r0, 0x20(r30)
/* 803DEACC 003DBA0C  28 00 00 00 */	cmplwi r0, 0
/* 803DEAD0 003DBA10  41 82 00 54 */	beq .L_803DEB24
/* 803DEAD4 003DBA14  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 803DEAD8 003DBA18  28 00 00 00 */	cmplwi r0, 0
/* 803DEADC 003DBA1C  41 82 00 28 */	beq .L_803DEB04
/* 803DEAE0 003DBA20  7F C3 F3 78 */	mr r3, r30
/* 803DEAE4 003DBA24  7F E4 FB 78 */	mr r4, r31
/* 803DEAE8 003DBA28  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DEAEC 003DBA2C  38 C0 00 00 */	li r6, 0
/* 803DEAF0 003DBA30  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 803DEAF4 003DBA34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DEAF8 003DBA38  7D 89 03 A6 */	mtctr r12
/* 803DEAFC 003DBA3C  4E 80 04 21 */	bctrl 
/* 803DEB00 003DBA40  48 00 00 24 */	b .L_803DEB24
.L_803DEB04:
/* 803DEB04 003DBA44  7F C3 F3 78 */	mr r3, r30
/* 803DEB08 003DBA48  7F E4 FB 78 */	mr r4, r31
/* 803DEB0C 003DBA4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DEB10 003DBA50  38 C0 00 00 */	li r6, 0
/* 803DEB14 003DBA54  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 803DEB18 003DBA58  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DEB1C 003DBA5C  7D 89 03 A6 */	mtctr r12
/* 803DEB20 003DBA60  4E 80 04 21 */	bctrl 
.L_803DEB24:
/* 803DEB24 003DBA64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEB28 003DBA68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DEB2C 003DBA6C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DEB30 003DBA70  7C 08 03 A6 */	mtlr r0
/* 803DEB34 003DBA74  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEB38 003DBA78  4E 80 00 20 */	blr 

.global do_set__Q33ebi2FS21FSMState01_DataBrokenFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_set__Q33ebi2FS21FSMState01_DataBrokenFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DEB3C 003DBA7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEB40 003DBA80  7C 08 02 A6 */	mflr r0
/* 803DEB44 003DBA84  38 C0 00 00 */	li r6, 0
/* 803DEB48 003DBA88  38 A0 00 06 */	li r5, 6
/* 803DEB4C 003DBA8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEB50 003DBA90  38 00 00 01 */	li r0, 1
/* 803DEB54 003DBA94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DEB58 003DBA98  7C 9F 23 78 */	mr r31, r4
/* 803DEB5C 003DBA9C  90 03 00 14 */	stw r0, 0x14(r3)
/* 803DEB60 003DBAA0  38 00 00 04 */	li r0, 4
/* 803DEB64 003DBAA4  98 C3 00 10 */	stb r6, 0x10(r3)
/* 803DEB68 003DBAA8  90 A3 00 18 */	stw r5, 0x18(r3)
/* 803DEB6C 003DBAAC  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803DEB70 003DBAB0  7F E3 FB 78 */	mr r3, r31
/* 803DEB74 003DBAB4  80 84 0C 30 */	lwz r4, 0xc30(r4)
/* 803DEB78 003DBAB8  4B FF A2 6D */	bl setDataBallBroken__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DEB7C 003DBABC  80 9F 0C 30 */	lwz r4, 0xc30(r31)
/* 803DEB80 003DBAC0  7F E3 FB 78 */	mr r3, r31
/* 803DEB84 003DBAC4  4B FF 92 91 */	bl openDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DEB88 003DBAC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEB8C 003DBACC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DEB90 003DBAD0  7C 08 03 A6 */	mtlr r0
/* 803DEB94 003DBAD4  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEB98 003DBAD8  4E 80 00 20 */	blr 

.global do_set__Q33ebi2FS22FSMState03_DoYouDeleteFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_set__Q33ebi2FS22FSMState03_DoYouDeleteFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DEB9C 003DBADC  38 00 00 03 */	li r0, 3
/* 803DEBA0 003DBAE0  38 A0 00 00 */	li r5, 0
/* 803DEBA4 003DBAE4  90 03 00 14 */	stw r0, 0x14(r3)
/* 803DEBA8 003DBAE8  38 80 00 06 */	li r4, 6
/* 803DEBAC 003DBAEC  38 00 00 04 */	li r0, 4
/* 803DEBB0 003DBAF0  98 A3 00 10 */	stb r5, 0x10(r3)
/* 803DEBB4 003DBAF4  90 83 00 18 */	stw r4, 0x18(r3)
/* 803DEBB8 003DBAF8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803DEBBC 003DBAFC  4E 80 00 20 */	blr 

.global do_decide__Q33ebi2FS22FSMState03_DoYouDeleteFPQ33ebi2FS4TMgr
do_decide__Q33ebi2FS22FSMState03_DoYouDeleteFPQ33ebi2FS4TMgr:
/* 803DEBC0 003DBB00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEBC4 003DBB04  7C 08 02 A6 */	mflr r0
/* 803DEBC8 003DBB08  7C 83 23 78 */	mr r3, r4
/* 803DEBCC 003DBB0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEBD0 003DBB10  4B FF 95 5D */	bl closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DEBD4 003DBB14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEBD8 003DBB18  7C 08 03 A6 */	mtlr r0
/* 803DEBDC 003DBB1C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEBE0 003DBB20  4E 80 00 20 */	blr 

.global do_set__Q33ebi2FS25FSMState07_DoYouOverwriteFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_set__Q33ebi2FS25FSMState07_DoYouOverwriteFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DEBE4 003DBB24  38 00 00 07 */	li r0, 7
/* 803DEBE8 003DBB28  38 A0 00 00 */	li r5, 0
/* 803DEBEC 003DBB2C  90 03 00 14 */	stw r0, 0x14(r3)
/* 803DEBF0 003DBB30  38 80 00 0D */	li r4, 0xd
/* 803DEBF4 003DBB34  38 00 00 04 */	li r0, 4
/* 803DEBF8 003DBB38  98 A3 00 10 */	stb r5, 0x10(r3)
/* 803DEBFC 003DBB3C  90 83 00 18 */	stw r4, 0x18(r3)
/* 803DEC00 003DBB40  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803DEC04 003DBB44  4E 80 00 20 */	blr 

.global do_decide__Q33ebi2FS25FSMState07_DoYouOverwriteFPQ33ebi2FS4TMgr
do_decide__Q33ebi2FS25FSMState07_DoYouOverwriteFPQ33ebi2FS4TMgr:
/* 803DEC08 003DBB48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEC0C 003DBB4C  7C 08 02 A6 */	mflr r0
/* 803DEC10 003DBB50  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEC14 003DBB54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DEC18 003DBB58  7C 9F 23 78 */	mr r31, r4
/* 803DEC1C 003DBB5C  7F E3 FB 78 */	mr r3, r31
/* 803DEC20 003DBB60  4B FF 8D DD */	bl fadeCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DEC24 003DBB64  7F E3 FB 78 */	mr r3, r31
/* 803DEC28 003DBB68  4B FF 95 05 */	bl closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DEC2C 003DBB6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEC30 003DBB70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DEC34 003DBB74  7C 08 03 A6 */	mtlr r0
/* 803DEC38 003DBB78  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEC3C 003DBB7C  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DEC40 003DBB80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEC44 003DBB84  7C 08 02 A6 */	mflr r0
/* 803DEC48 003DBB88  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEC4C 003DBB8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DEC50 003DBB90  7C 7F 1B 78 */	mr r31, r3
/* 803DEC54 003DBB94  81 83 00 00 */	lwz r12, 0(r3)
/* 803DEC58 003DBB98  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803DEC5C 003DBB9C  7D 89 03 A6 */	mtctr r12
/* 803DEC60 003DBBA0  4E 80 04 21 */	bctrl 
/* 803DEC64 003DBBA4  38 00 00 00 */	li r0, 0
/* 803DEC68 003DBBA8  C0 22 18 B0 */	lfs f1, lbl_8051FC10@sda21(r2)
/* 803DEC6C 003DBBAC  98 1F 00 11 */	stb r0, 0x11(r31)
/* 803DEC70 003DBBB0  98 1F 00 10 */	stb r0, 0x10(r31)
/* 803DEC74 003DBBB4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DEC78 003DBBB8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803DEC7C 003DBBBC  EC 21 00 24 */	fdivs f1, f1, f0
/* 803DEC80 003DBBC0  4B CE 2E CD */	bl __cvt_fp2unsigned
/* 803DEC84 003DBBC4  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803DEC88 003DBBC8  90 7F 00 18 */	stw r3, 0x18(r31)
/* 803DEC8C 003DBBCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEC90 003DBBD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DEC94 003DBBD4  7C 08 03 A6 */	mtlr r0
/* 803DEC98 003DBBD8  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEC9C 003DBBDC  4E 80 00 20 */	blr 

.global do_exec__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgr
do_exec__Q33ebi2FS16FSMState_WarningFPQ33ebi2FS4TMgr:
/* 803DECA0 003DBBE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DECA4 003DBBE4  7C 08 02 A6 */	mflr r0
/* 803DECA8 003DBBE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DECAC 003DBBEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DECB0 003DBBF0  7C 9F 23 78 */	mr r31, r4
/* 803DECB4 003DBBF4  93 C1 00 08 */	stw r30, 8(r1)
/* 803DECB8 003DBBF8  7C 7E 1B 78 */	mr r30, r3
/* 803DECBC 003DBBFC  80 63 00 14 */	lwz r3, 0x14(r3)
/* 803DECC0 003DBC00  28 03 00 00 */	cmplwi r3, 0
/* 803DECC4 003DBC04  41 82 00 0C */	beq .L_803DECD0
/* 803DECC8 003DBC08  38 03 FF FF */	addi r0, r3, -1
/* 803DECCC 003DBC0C  90 1E 00 14 */	stw r0, 0x14(r30)
.L_803DECD0:
/* 803DECD0 003DBC10  88 1E 00 11 */	lbz r0, 0x11(r30)
/* 803DECD4 003DBC14  28 00 00 00 */	cmplwi r0, 0
/* 803DECD8 003DBC18  40 82 00 24 */	bne .L_803DECFC
/* 803DECDC 003DBC1C  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803DECE0 003DBC20  28 00 00 00 */	cmplwi r0, 0
/* 803DECE4 003DBC24  40 82 00 34 */	bne .L_803DED18
/* 803DECE8 003DBC28  7F E3 FB 78 */	mr r3, r31
/* 803DECEC 003DBC2C  4B FF 97 DD */	bl closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DECF0 003DBC30  38 00 00 01 */	li r0, 1
/* 803DECF4 003DBC34  98 1E 00 11 */	stb r0, 0x11(r30)
/* 803DECF8 003DBC38  48 00 00 20 */	b .L_803DED18
.L_803DECFC:
/* 803DECFC 003DBC3C  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 803DED00 003DBC40  28 00 00 00 */	cmplwi r0, 0
/* 803DED04 003DBC44  40 82 00 14 */	bne .L_803DED18
/* 803DED08 003DBC48  38 00 00 01 */	li r0, 1
/* 803DED0C 003DBC4C  7F E3 FB 78 */	mr r3, r31
/* 803DED10 003DBC50  98 1E 00 10 */	stb r0, 0x10(r30)
/* 803DED14 003DBC54  4B FF 97 B5 */	bl closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
.L_803DED18:
/* 803DED18 003DBC58  7F E3 FB 78 */	mr r3, r31
/* 803DED1C 003DBC5C  4B FF 98 0D */	bl isFinishCloseMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DED20 003DBC60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DED24 003DBC64  41 82 00 28 */	beq .L_803DED4C
/* 803DED28 003DBC68  88 1E 00 11 */	lbz r0, 0x11(r30)
/* 803DED2C 003DBC6C  28 00 00 00 */	cmplwi r0, 0
/* 803DED30 003DBC70  41 82 00 1C */	beq .L_803DED4C
/* 803DED34 003DBC74  7F C3 F3 78 */	mr r3, r30
/* 803DED38 003DBC78  7F E4 FB 78 */	mr r4, r31
/* 803DED3C 003DBC7C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DED40 003DBC80  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803DED44 003DBC84  7D 89 03 A6 */	mtctr r12
/* 803DED48 003DBC88  4E 80 04 21 */	bctrl 
.L_803DED4C:
/* 803DED4C 003DBC8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DED50 003DBC90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DED54 003DBC94  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DED58 003DBC98  7C 08 03 A6 */	mtlr r0
/* 803DED5C 003DBC9C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DED60 003DBCA0  4E 80 00 20 */	blr 

.global do_open__Q33ebi2FS23FSMState05_FailToDeleteFPQ33ebi2FS4TMgr
do_open__Q33ebi2FS23FSMState05_FailToDeleteFPQ33ebi2FS4TMgr:
/* 803DED64 003DBCA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DED68 003DBCA8  7C 08 02 A6 */	mflr r0
/* 803DED6C 003DBCAC  7C 83 23 78 */	mr r3, r4
/* 803DED70 003DBCB0  38 80 00 05 */	li r4, 5
/* 803DED74 003DBCB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DED78 003DBCB8  4B FF 94 B1 */	bl openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DED7C 003DBCBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DED80 003DBCC0  7C 08 03 A6 */	mtlr r0
/* 803DED84 003DBCC4  38 21 00 10 */	addi r1, r1, 0x10
/* 803DED88 003DBCC8  4E 80 00 20 */	blr 

.global do_transit__Q33ebi2FS23FSMState05_FailToDeleteFPQ33ebi2FS4TMgr
do_transit__Q33ebi2FS23FSMState05_FailToDeleteFPQ33ebi2FS4TMgr:
/* 803DED8C 003DBCCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DED90 003DBCD0  7C 08 02 A6 */	mflr r0
/* 803DED94 003DBCD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DED98 003DBCD8  88 04 0C 3C */	lbz r0, 0xc3c(r4)
/* 803DED9C 003DBCDC  28 00 00 00 */	cmplwi r0, 0
/* 803DEDA0 003DBCE0  40 82 00 14 */	bne .L_803DEDB4
/* 803DEDA4 003DBCE4  7C 83 23 78 */	mr r3, r4
/* 803DEDA8 003DBCE8  38 80 00 01 */	li r4, 1
/* 803DEDAC 003DBCEC  48 00 15 6D */	bl goEnd___Q33ebi2FS4TMgrFQ43ebi2FS4TMgr7enumEnd
/* 803DEDB0 003DBCF0  48 00 00 10 */	b .L_803DEDC0
.L_803DEDB4:
/* 803DEDB4 003DBCF4  7C 83 23 78 */	mr r3, r4
/* 803DEDB8 003DBCF8  38 80 00 02 */	li r4, 2
/* 803DEDBC 003DBCFC  48 00 15 5D */	bl goEnd___Q33ebi2FS4TMgrFQ43ebi2FS4TMgr7enumEnd
.L_803DEDC0:
/* 803DEDC0 003DBD00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEDC4 003DBD04  7C 08 03 A6 */	mtlr r0
/* 803DEDC8 003DBD08  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEDCC 003DBD0C  4E 80 00 20 */	blr 

.global do_open__Q33ebi2FS23FSMState06_FinishDeleteFPQ33ebi2FS4TMgr
do_open__Q33ebi2FS23FSMState06_FinishDeleteFPQ33ebi2FS4TMgr:
/* 803DEDD0 003DBD10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEDD4 003DBD14  7C 08 02 A6 */	mflr r0
/* 803DEDD8 003DBD18  7C 83 23 78 */	mr r3, r4
/* 803DEDDC 003DBD1C  38 80 00 06 */	li r4, 6
/* 803DEDE0 003DBD20  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEDE4 003DBD24  4B FF 94 45 */	bl openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DEDE8 003DBD28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEDEC 003DBD2C  7C 08 03 A6 */	mtlr r0
/* 803DEDF0 003DBD30  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEDF4 003DBD34  4E 80 00 20 */	blr 

.global do_transit__Q33ebi2FS23FSMState06_FinishDeleteFPQ33ebi2FS4TMgr
do_transit__Q33ebi2FS23FSMState06_FinishDeleteFPQ33ebi2FS4TMgr:
/* 803DEDF8 003DBD38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEDFC 003DBD3C  7C 08 02 A6 */	mflr r0
/* 803DEE00 003DBD40  38 A0 00 04 */	li r5, 4
/* 803DEE04 003DBD44  38 C0 00 00 */	li r6, 0
/* 803DEE08 003DBD48  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEE0C 003DBD4C  81 83 00 00 */	lwz r12, 0(r3)
/* 803DEE10 003DBD50  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DEE14 003DBD54  7D 89 03 A6 */	mtctr r12
/* 803DEE18 003DBD58  4E 80 04 21 */	bctrl 
/* 803DEE1C 003DBD5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEE20 003DBD60  7C 08 03 A6 */	mtlr r0
/* 803DEE24 003DBD64  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEE28 003DBD68  4E 80 00 20 */	blr 

.global do_open__Q33ebi2FS21FSMState08_FailToCopyFPQ33ebi2FS4TMgr
do_open__Q33ebi2FS21FSMState08_FailToCopyFPQ33ebi2FS4TMgr:
/* 803DEE2C 003DBD6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEE30 003DBD70  7C 08 02 A6 */	mflr r0
/* 803DEE34 003DBD74  7C 83 23 78 */	mr r3, r4
/* 803DEE38 003DBD78  38 80 00 08 */	li r4, 8
/* 803DEE3C 003DBD7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEE40 003DBD80  4B FF 93 E9 */	bl openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DEE44 003DBD84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEE48 003DBD88  7C 08 03 A6 */	mtlr r0
/* 803DEE4C 003DBD8C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEE50 003DBD90  4E 80 00 20 */	blr 

.global do_transit__Q33ebi2FS21FSMState08_FailToCopyFPQ33ebi2FS4TMgr
do_transit__Q33ebi2FS21FSMState08_FailToCopyFPQ33ebi2FS4TMgr:
/* 803DEE54 003DBD94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEE58 003DBD98  7C 08 02 A6 */	mflr r0
/* 803DEE5C 003DBD9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEE60 003DBDA0  88 04 0C 3C */	lbz r0, 0xc3c(r4)
/* 803DEE64 003DBDA4  28 00 00 00 */	cmplwi r0, 0
/* 803DEE68 003DBDA8  40 82 00 14 */	bne .L_803DEE7C
/* 803DEE6C 003DBDAC  7C 83 23 78 */	mr r3, r4
/* 803DEE70 003DBDB0  38 80 00 01 */	li r4, 1
/* 803DEE74 003DBDB4  48 00 14 A5 */	bl goEnd___Q33ebi2FS4TMgrFQ43ebi2FS4TMgr7enumEnd
/* 803DEE78 003DBDB8  48 00 00 10 */	b .L_803DEE88
.L_803DEE7C:
/* 803DEE7C 003DBDBC  7C 83 23 78 */	mr r3, r4
/* 803DEE80 003DBDC0  38 80 00 02 */	li r4, 2
/* 803DEE84 003DBDC4  48 00 14 95 */	bl goEnd___Q33ebi2FS4TMgrFQ43ebi2FS4TMgr7enumEnd
.L_803DEE88:
/* 803DEE88 003DBDC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEE8C 003DBDCC  7C 08 03 A6 */	mtlr r0
/* 803DEE90 003DBDD0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEE94 003DBDD4  4E 80 00 20 */	blr 

.global do_open__Q33ebi2FS21FSMState10_FinishCopyFPQ33ebi2FS4TMgr
do_open__Q33ebi2FS21FSMState10_FinishCopyFPQ33ebi2FS4TMgr:
/* 803DEE98 003DBDD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEE9C 003DBDDC  7C 08 02 A6 */	mflr r0
/* 803DEEA0 003DBDE0  7C 83 23 78 */	mr r3, r4
/* 803DEEA4 003DBDE4  38 80 00 0A */	li r4, 0xa
/* 803DEEA8 003DBDE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEEAC 003DBDEC  4B FF 93 7D */	bl openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DEEB0 003DBDF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEEB4 003DBDF4  7C 08 03 A6 */	mtlr r0
/* 803DEEB8 003DBDF8  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEEBC 003DBDFC  4E 80 00 20 */	blr 

.global do_transit__Q33ebi2FS21FSMState10_FinishCopyFPQ33ebi2FS4TMgr
do_transit__Q33ebi2FS21FSMState10_FinishCopyFPQ33ebi2FS4TMgr:
/* 803DEEC0 003DBE00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEEC4 003DBE04  7C 08 02 A6 */	mflr r0
/* 803DEEC8 003DBE08  38 A0 00 04 */	li r5, 4
/* 803DEECC 003DBE0C  38 C0 00 00 */	li r6, 0
/* 803DEED0 003DBE10  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEED4 003DBE14  81 83 00 00 */	lwz r12, 0(r3)
/* 803DEED8 003DBE18  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DEEDC 003DBE1C  7D 89 03 A6 */	mtctr r12
/* 803DEEE0 003DBE20  4E 80 04 21 */	bctrl 
/* 803DEEE4 003DBE24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEEE8 003DBE28  7C 08 03 A6 */	mtlr r0
/* 803DEEEC 003DBE2C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEEF0 003DBE30  4E 80 00 20 */	blr 

.global init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg
init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DEEF4 003DBE34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DEEF8 003DBE38  7C 08 02 A6 */	mflr r0
/* 803DEEFC 003DBE3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DEF00 003DBE40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DEF04 003DBE44  7C 9F 23 78 */	mr r31, r4
/* 803DEF08 003DBE48  93 C1 00 08 */	stw r30, 8(r1)
/* 803DEF0C 003DBE4C  7C 7E 1B 78 */	mr r30, r3
/* 803DEF10 003DBE50  81 83 00 00 */	lwz r12, 0(r3)
/* 803DEF14 003DBE54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803DEF18 003DBE58  7D 89 03 A6 */	mtctr r12
/* 803DEF1C 003DBE5C  4E 80 04 21 */	bctrl 
/* 803DEF20 003DBE60  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DEF24 003DBE64  C0 22 18 B0 */	lfs f1, lbl_8051FC10@sda21(r2)
/* 803DEF28 003DBE68  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803DEF2C 003DBE6C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803DEF30 003DBE70  4B CE 2C 1D */	bl __cvt_fp2unsigned
/* 803DEF34 003DBE74  90 7F 0B F8 */	stw r3, 0xbf8(r31)
/* 803DEF38 003DBE78  38 00 00 00 */	li r0, 0
/* 803DEF3C 003DBE7C  90 7F 0B FC */	stw r3, 0xbfc(r31)
/* 803DEF40 003DBE80  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803DEF44 003DBE84  98 1F 0C 3C */	stb r0, 0xc3c(r31)
/* 803DEF48 003DBE88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DEF4C 003DBE8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DEF50 003DBE90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DEF54 003DBE94  7C 08 03 A6 */	mtlr r0
/* 803DEF58 003DBE98  38 21 00 10 */	addi r1, r1, 0x10
/* 803DEF5C 003DBE9C  4E 80 00 20 */	blr 

.global exec__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
exec__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr:
/* 803DEF60 003DBEA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DEF64 003DBEA4  7C 08 02 A6 */	mflr r0
/* 803DEF68 003DBEA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803DEF6C 003DBEAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803DEF70 003DBEB0  7C 9F 23 78 */	mr r31, r4
/* 803DEF74 003DBEB4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803DEF78 003DBEB8  7C 7E 1B 78 */	mr r30, r3
/* 803DEF7C 003DBEBC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803DEF80 003DBEC0  3B A0 00 00 */	li r29, 0
/* 803DEF84 003DBEC4  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803DEF88 003DBEC8  80 65 00 5C */	lwz r3, 0x5c(r5)
/* 803DEF8C 003DBECC  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DEF90 003DBED0  2C 00 00 00 */	cmpwi r0, 0
/* 803DEF94 003DBED4  40 82 00 14 */	bne .L_803DEFA8
/* 803DEF98 003DBED8  48 06 20 25 */	bl checkStatus__13MemoryCardMgrFv
/* 803DEF9C 003DBEDC  28 03 00 0B */	cmplwi r3, 0xb
/* 803DEFA0 003DBEE0  41 82 00 08 */	beq .L_803DEFA8
/* 803DEFA4 003DBEE4  3B A0 00 01 */	li r29, 1
.L_803DEFA8:
/* 803DEFA8 003DBEE8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 803DEFAC 003DBEEC  41 82 00 20 */	beq .L_803DEFCC
/* 803DEFB0 003DBEF0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DEFB4 003DBEF4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DEFB8 003DBEF8  48 06 6B 55 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DEFBC 003DBEFC  2C 03 00 00 */	cmpwi r3, 0
/* 803DEFC0 003DBF00  40 82 00 0C */	bne .L_803DEFCC
/* 803DEFC4 003DBF04  38 00 00 01 */	li r0, 1
/* 803DEFC8 003DBF08  48 00 00 08 */	b .L_803DEFD0
.L_803DEFCC:
/* 803DEFCC 003DBF0C  38 00 00 00 */	li r0, 0
.L_803DEFD0:
/* 803DEFD0 003DBF10  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803DEFD4 003DBF14  41 82 00 1C */	beq .L_803DEFF0
/* 803DEFD8 003DBF18  38 60 00 00 */	li r3, 0
/* 803DEFDC 003DBF1C  38 00 00 03 */	li r0, 3
/* 803DEFE0 003DBF20  90 7E 00 10 */	stw r3, 0x10(r30)
/* 803DEFE4 003DBF24  7F E3 FB 78 */	mr r3, r31
/* 803DEFE8 003DBF28  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803DEFEC 003DBF2C  4B FF 94 DD */	bl closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
.L_803DEFF0:
/* 803DEFF0 003DBF30  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803DEFF4 003DBF34  2C 00 00 02 */	cmpwi r0, 2
/* 803DEFF8 003DBF38  41 82 00 F4 */	beq .L_803DF0EC
/* 803DEFFC 003DBF3C  40 80 00 14 */	bge .L_803DF010
/* 803DF000 003DBF40  2C 00 00 00 */	cmpwi r0, 0
/* 803DF004 003DBF44  41 82 00 18 */	beq .L_803DF01C
/* 803DF008 003DBF48  40 80 00 8C */	bge .L_803DF094
/* 803DF00C 003DBF4C  48 00 01 F8 */	b .L_803DF204
.L_803DF010:
/* 803DF010 003DBF50  2C 00 00 04 */	cmpwi r0, 4
/* 803DF014 003DBF54  40 80 01 F0 */	bge .L_803DF204
/* 803DF018 003DBF58  48 00 01 0C */	b .L_803DF124
.L_803DF01C:
/* 803DF01C 003DBF5C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DF020 003DBF60  3B A0 00 00 */	li r29, 0
/* 803DF024 003DBF64  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DF028 003DBF68  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DF02C 003DBF6C  2C 00 00 00 */	cmpwi r0, 0
/* 803DF030 003DBF70  40 82 00 14 */	bne .L_803DF044
/* 803DF034 003DBF74  48 06 1F 89 */	bl checkStatus__13MemoryCardMgrFv
/* 803DF038 003DBF78  28 03 00 0B */	cmplwi r3, 0xb
/* 803DF03C 003DBF7C  41 82 00 08 */	beq .L_803DF044
/* 803DF040 003DBF80  3B A0 00 01 */	li r29, 1
.L_803DF044:
/* 803DF044 003DBF84  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 803DF048 003DBF88  41 82 01 BC */	beq .L_803DF204
/* 803DF04C 003DBF8C  7F C3 F3 78 */	mr r3, r30
/* 803DF050 003DBF90  7F E4 FB 78 */	mr r4, r31
/* 803DF054 003DBF94  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF058 003DBF98  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803DF05C 003DBF9C  7D 89 03 A6 */	mtctr r12
/* 803DF060 003DBFA0  4E 80 04 21 */	bctrl 
/* 803DF064 003DBFA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DF068 003DBFA8  40 82 00 20 */	bne .L_803DF088
/* 803DF06C 003DBFAC  3C 60 80 49 */	lis r3, lbl_80496FE4@ha
/* 803DF070 003DBFB0  3C A0 80 49 */	lis r5, lbl_80497000@ha
/* 803DF074 003DBFB4  38 63 6F E4 */	addi r3, r3, lbl_80496FE4@l
/* 803DF078 003DBFB8  38 80 01 31 */	li r4, 0x131
/* 803DF07C 003DBFBC  38 A5 70 00 */	addi r5, r5, lbl_80497000@l
/* 803DF080 003DBFC0  4C C6 31 82 */	crclr 6
/* 803DF084 003DBFC4  4B C4 B5 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803DF088:
/* 803DF088 003DBFC8  38 00 00 01 */	li r0, 1
/* 803DF08C 003DBFCC  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803DF090 003DBFD0  48 00 01 74 */	b .L_803DF204
.L_803DF094:
/* 803DF094 003DBFD4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DF098 003DBFD8  3B E0 00 00 */	li r31, 0
/* 803DF09C 003DBFDC  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DF0A0 003DBFE0  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DF0A4 003DBFE4  2C 00 00 00 */	cmpwi r0, 0
/* 803DF0A8 003DBFE8  40 82 00 14 */	bne .L_803DF0BC
/* 803DF0AC 003DBFEC  48 06 1F 11 */	bl checkStatus__13MemoryCardMgrFv
/* 803DF0B0 003DBFF0  28 03 00 0B */	cmplwi r3, 0xb
/* 803DF0B4 003DBFF4  41 82 00 08 */	beq .L_803DF0BC
/* 803DF0B8 003DBFF8  3B E0 00 01 */	li r31, 1
.L_803DF0BC:
/* 803DF0BC 003DBFFC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803DF0C0 003DC000  41 82 01 44 */	beq .L_803DF204
/* 803DF0C4 003DC004  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DF0C8 003DC008  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DF0CC 003DC00C  48 06 6A 41 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DF0D0 003DC010  90 7E 00 10 */	stw r3, 0x10(r30)
/* 803DF0D4 003DC014  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DF0D8 003DC018  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DF0DC 003DC01C  48 06 6A 31 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DF0E0 003DC020  38 00 00 02 */	li r0, 2
/* 803DF0E4 003DC024  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803DF0E8 003DC028  48 00 01 1C */	b .L_803DF204
.L_803DF0EC:
/* 803DF0EC 003DC02C  80 1F 0B F8 */	lwz r0, 0xbf8(r31)
/* 803DF0F0 003DC030  28 00 00 00 */	cmplwi r0, 0
/* 803DF0F4 003DC034  40 82 01 10 */	bne .L_803DF204
/* 803DF0F8 003DC038  7F E3 FB 78 */	mr r3, r31
/* 803DF0FC 003DC03C  4B FF 93 CD */	bl closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF100 003DC040  38 00 00 03 */	li r0, 3
/* 803DF104 003DC044  7F C3 F3 78 */	mr r3, r30
/* 803DF108 003DC048  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803DF10C 003DC04C  7F E4 FB 78 */	mr r4, r31
/* 803DF110 003DC050  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF114 003DC054  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803DF118 003DC058  7D 89 03 A6 */	mtctr r12
/* 803DF11C 003DC05C  4E 80 04 21 */	bctrl 
/* 803DF120 003DC060  48 00 00 E4 */	b .L_803DF204
.L_803DF124:
/* 803DF124 003DC064  7F E3 FB 78 */	mr r3, r31
/* 803DF128 003DC068  4B FF 94 01 */	bl isFinishCloseMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF12C 003DC06C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DF130 003DC070  41 82 00 D4 */	beq .L_803DF204
/* 803DF134 003DC074  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 803DF138 003DC078  2C 00 00 02 */	cmpwi r0, 2
/* 803DF13C 003DC07C  41 82 00 14 */	beq .L_803DF150
/* 803DF140 003DC080  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DF144 003DC084  38 80 18 0D */	li r4, 0x180d
/* 803DF148 003DC088  38 A0 00 00 */	li r5, 0
/* 803DF14C 003DC08C  4B F5 94 E5 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803DF150:
/* 803DF150 003DC090  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 803DF154 003DC094  2C 00 00 02 */	cmpwi r0, 2
/* 803DF158 003DC098  41 82 00 20 */	beq .L_803DF178
/* 803DF15C 003DC09C  40 80 00 10 */	bge .L_803DF16C
/* 803DF160 003DC0A0  2C 00 00 00 */	cmpwi r0, 0
/* 803DF164 003DC0A4  41 82 00 5C */	beq .L_803DF1C0
/* 803DF168 003DC0A8  48 00 00 7C */	b .L_803DF1E4
.L_803DF16C:
/* 803DF16C 003DC0AC  2C 00 00 0D */	cmpwi r0, 0xd
/* 803DF170 003DC0B0  41 82 00 2C */	beq .L_803DF19C
/* 803DF174 003DC0B4  48 00 00 70 */	b .L_803DF1E4
.L_803DF178:
/* 803DF178 003DC0B8  38 00 00 01 */	li r0, 1
/* 803DF17C 003DC0BC  7F C3 F3 78 */	mr r3, r30
/* 803DF180 003DC0C0  98 1F 0C 3C */	stb r0, 0xc3c(r31)
/* 803DF184 003DC0C4  7F E4 FB 78 */	mr r4, r31
/* 803DF188 003DC0C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF18C 003DC0CC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803DF190 003DC0D0  7D 89 03 A6 */	mtctr r12
/* 803DF194 003DC0D4  4E 80 04 21 */	bctrl 
/* 803DF198 003DC0D8  48 00 00 6C */	b .L_803DF204
.L_803DF19C:
/* 803DF19C 003DC0DC  38 00 00 01 */	li r0, 1
/* 803DF1A0 003DC0E0  7F C3 F3 78 */	mr r3, r30
/* 803DF1A4 003DC0E4  98 1F 0C 3C */	stb r0, 0xc3c(r31)
/* 803DF1A8 003DC0E8  7F E4 FB 78 */	mr r4, r31
/* 803DF1AC 003DC0EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF1B0 003DC0F0  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 803DF1B4 003DC0F4  7D 89 03 A6 */	mtctr r12
/* 803DF1B8 003DC0F8  4E 80 04 21 */	bctrl 
/* 803DF1BC 003DC0FC  48 00 00 48 */	b .L_803DF204
.L_803DF1C0:
/* 803DF1C0 003DC100  38 00 00 00 */	li r0, 0
/* 803DF1C4 003DC104  7F C3 F3 78 */	mr r3, r30
/* 803DF1C8 003DC108  98 1F 0C 3C */	stb r0, 0xc3c(r31)
/* 803DF1CC 003DC10C  7F E4 FB 78 */	mr r4, r31
/* 803DF1D0 003DC110  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF1D4 003DC114  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803DF1D8 003DC118  7D 89 03 A6 */	mtctr r12
/* 803DF1DC 003DC11C  4E 80 04 21 */	bctrl 
/* 803DF1E0 003DC120  48 00 00 24 */	b .L_803DF204
.L_803DF1E4:
/* 803DF1E4 003DC124  38 00 00 01 */	li r0, 1
/* 803DF1E8 003DC128  7F C3 F3 78 */	mr r3, r30
/* 803DF1EC 003DC12C  98 1F 0C 3C */	stb r0, 0xc3c(r31)
/* 803DF1F0 003DC130  7F E4 FB 78 */	mr r4, r31
/* 803DF1F4 003DC134  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF1F8 003DC138  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 803DF1FC 003DC13C  7D 89 03 A6 */	mtctr r12
/* 803DF200 003DC140  4E 80 04 21 */	bctrl 
.L_803DF204:
/* 803DF204 003DC144  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803DF208 003DC148  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803DF20C 003DC14C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803DF210 003DC150  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803DF214 003DC154  7C 08 03 A6 */	mtlr r0
/* 803DF218 003DC158  38 21 00 20 */	addi r1, r1, 0x20
/* 803DF21C 003DC15C  4E 80 00 20 */	blr 

.global do_transitCardPlayerDataBroken__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
do_transitCardPlayerDataBroken__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr:
/* 803DF220 003DC160  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF224 003DC164  7C 08 02 A6 */	mflr r0
/* 803DF228 003DC168  38 A0 00 05 */	li r5, 5
/* 803DF22C 003DC16C  38 C0 00 00 */	li r6, 0
/* 803DF230 003DC170  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF234 003DC174  81 83 00 00 */	lwz r12, 0(r3)
/* 803DF238 003DC178  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF23C 003DC17C  7D 89 03 A6 */	mtctr r12
/* 803DF240 003DC180  4E 80 04 21 */	bctrl 
/* 803DF244 003DC184  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF248 003DC188  7C 08 03 A6 */	mtlr r0
/* 803DF24C 003DC18C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF250 003DC190  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DF254 003DC194  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF258 003DC198  7C 08 02 A6 */	mflr r0
/* 803DF25C 003DC19C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF260 003DC1A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DF264 003DC1A4  7C 9F 23 78 */	mr r31, r4
/* 803DF268 003DC1A8  38 80 00 02 */	li r4, 2
/* 803DF26C 003DC1AC  7F E3 FB 78 */	mr r3, r31
/* 803DF270 003DC1B0  4B FF 8F B9 */	bl openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF274 003DC1B4  80 9F 0C 30 */	lwz r4, 0xc30(r31)
/* 803DF278 003DC1B8  7F E3 FB 78 */	mr r3, r31
/* 803DF27C 003DC1BC  4B FF 8A 29 */	bl createFiledeletingEffect__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF280 003DC1C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF284 003DC1C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DF288 003DC1C8  7C 08 03 A6 */	mtlr r0
/* 803DF28C 003DC1CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF290 003DC1D0  4E 80 00 20 */	blr 

.global do_close__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
do_close__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr:
/* 803DF294 003DC1D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF298 003DC1D8  7C 08 02 A6 */	mflr r0
/* 803DF29C 003DC1DC  7C 83 23 78 */	mr r3, r4
/* 803DF2A0 003DC1E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF2A4 003DC1E4  4B FF 8B 19 */	bl fadeFiledeletingEffect__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF2A8 003DC1E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF2AC 003DC1EC  7C 08 03 A6 */	mtlr r0
/* 803DF2B0 003DC1F0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF2B4 003DC1F4  4E 80 00 20 */	blr 

.global do_cardRequest__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
do_cardRequest__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr:
/* 803DF2B8 003DC1F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF2BC 003DC1FC  7C 08 02 A6 */	mflr r0
/* 803DF2C0 003DC200  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF2C4 003DC204  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DF2C8 003DC208  80 84 0C 30 */	lwz r4, 0xc30(r4)
/* 803DF2CC 003DC20C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DF2D0 003DC210  48 06 40 E1 */	bl deletePlayer__Q34Game10MemoryCard3MgrFi
/* 803DF2D4 003DC214  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF2D8 003DC218  7C 08 03 A6 */	mtlr r0
/* 803DF2DC 003DC21C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF2E0 003DC220  4E 80 00 20 */	blr 

.global do_transitCardReady__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
do_transitCardReady__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr:
/* 803DF2E4 003DC224  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF2E8 003DC228  7C 08 02 A6 */	mflr r0
/* 803DF2EC 003DC22C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF2F0 003DC230  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DF2F4 003DC234  7C 9F 23 78 */	mr r31, r4
/* 803DF2F8 003DC238  93 C1 00 08 */	stw r30, 8(r1)
/* 803DF2FC 003DC23C  7C 7E 1B 78 */	mr r30, r3
/* 803DF300 003DC240  7F E3 FB 78 */	mr r3, r31
/* 803DF304 003DC244  80 84 0C 30 */	lwz r4, 0xc30(r4)
/* 803DF308 003DC248  4B FF 98 8D */	bl setDataBallNew__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF30C 003DC24C  7F C3 F3 78 */	mr r3, r30
/* 803DF310 003DC250  7F E4 FB 78 */	mr r4, r31
/* 803DF314 003DC254  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF318 003DC258  38 A0 00 0A */	li r5, 0xa
/* 803DF31C 003DC25C  38 C0 00 00 */	li r6, 0
/* 803DF320 003DC260  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF324 003DC264  7D 89 03 A6 */	mtctr r12
/* 803DF328 003DC268  4E 80 04 21 */	bctrl 
/* 803DF32C 003DC26C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF330 003DC270  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DF334 003DC274  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DF338 003DC278  7C 08 03 A6 */	mtlr r0
/* 803DF33C 003DC27C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF340 003DC280  4E 80 00 20 */	blr 

.global do_transitCardNoCard__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
do_transitCardNoCard__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr:
/* 803DF344 003DC284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF348 003DC288  7C 08 02 A6 */	mflr r0
/* 803DF34C 003DC28C  38 A0 00 09 */	li r5, 9
/* 803DF350 003DC290  38 C0 00 00 */	li r6, 0
/* 803DF354 003DC294  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF358 003DC298  81 83 00 00 */	lwz r12, 0(r3)
/* 803DF35C 003DC29C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF360 003DC2A0  7D 89 03 A6 */	mtctr r12
/* 803DF364 003DC2A4  4E 80 04 21 */	bctrl 
/* 803DF368 003DC2A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF36C 003DC2AC  7C 08 03 A6 */	mtlr r0
/* 803DF370 003DC2B0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF374 003DC2B4  4E 80 00 20 */	blr 

.global do_transitCardIOError__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
do_transitCardIOError__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr:
/* 803DF378 003DC2B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF37C 003DC2BC  7C 08 02 A6 */	mflr r0
/* 803DF380 003DC2C0  38 A0 00 09 */	li r5, 9
/* 803DF384 003DC2C4  38 C0 00 00 */	li r6, 0
/* 803DF388 003DC2C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF38C 003DC2CC  81 83 00 00 */	lwz r12, 0(r3)
/* 803DF390 003DC2D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF394 003DC2D4  7D 89 03 A6 */	mtctr r12
/* 803DF398 003DC2D8  4E 80 04 21 */	bctrl 
/* 803DF39C 003DC2DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF3A0 003DC2E0  7C 08 03 A6 */	mtlr r0
/* 803DF3A4 003DC2E4  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF3A8 003DC2E8  4E 80 00 20 */	blr 

.global cleanup__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
cleanup__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr:
/* 803DF3AC 003DC2EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF3B0 003DC2F0  7C 08 02 A6 */	mflr r0
/* 803DF3B4 003DC2F4  7C 83 23 78 */	mr r3, r4
/* 803DF3B8 003DC2F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF3BC 003DC2FC  4B FF 8A 01 */	bl fadeFiledeletingEffect__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF3C0 003DC300  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF3C4 003DC304  7C 08 03 A6 */	mtlr r0
/* 803DF3C8 003DC308  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF3CC 003DC30C  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DF3D0 003DC310  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF3D4 003DC314  7C 08 02 A6 */	mflr r0
/* 803DF3D8 003DC318  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF3DC 003DC31C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DF3E0 003DC320  7C 9F 23 78 */	mr r31, r4
/* 803DF3E4 003DC324  38 80 00 09 */	li r4, 9
/* 803DF3E8 003DC328  7F E3 FB 78 */	mr r3, r31
/* 803DF3EC 003DC32C  4B FF 8E 3D */	bl openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF3F0 003DC330  80 9F 0C 30 */	lwz r4, 0xc30(r31)
/* 803DF3F4 003DC334  7F E3 FB 78 */	mr r3, r31
/* 803DF3F8 003DC338  80 BF 0C 34 */	lwz r5, 0xc34(r31)
/* 803DF3FC 003DC33C  4B FF 86 71 */	bl createFilecopyEffect__Q43ebi6Screen10FileSelect11TMainScreenFll
/* 803DF400 003DC340  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF404 003DC344  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DF408 003DC348  7C 08 03 A6 */	mtlr r0
/* 803DF40C 003DC34C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF410 003DC350  4E 80 00 20 */	blr 

.global do_close__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
do_close__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr:
/* 803DF414 003DC354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF418 003DC358  7C 08 02 A6 */	mflr r0
/* 803DF41C 003DC35C  7C 83 23 78 */	mr r3, r4
/* 803DF420 003DC360  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF424 003DC364  4B FF 88 29 */	bl fadeFilecopyEffect__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF428 003DC368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF42C 003DC36C  7C 08 03 A6 */	mtlr r0
/* 803DF430 003DC370  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF434 003DC374  4E 80 00 20 */	blr 

.global do_cardRequest__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
do_cardRequest__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr:
/* 803DF438 003DC378  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF43C 003DC37C  7C 08 02 A6 */	mflr r0
/* 803DF440 003DC380  7C 85 23 78 */	mr r5, r4
/* 803DF444 003DC384  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF448 003DC388  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DF44C 003DC38C  80 84 0C 30 */	lwz r4, 0xc30(r4)
/* 803DF450 003DC390  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DF454 003DC394  80 A5 0C 34 */	lwz r5, 0xc34(r5)
/* 803DF458 003DC398  48 06 40 7D */	bl copyPlayer__Q34Game10MemoryCard3MgrFii
/* 803DF45C 003DC39C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF460 003DC3A0  7C 08 03 A6 */	mtlr r0
/* 803DF464 003DC3A4  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF468 003DC3A8  4E 80 00 20 */	blr 

.global do_transitCardReady__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
do_transitCardReady__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr:
/* 803DF46C 003DC3AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF470 003DC3B0  7C 08 02 A6 */	mflr r0
/* 803DF474 003DC3B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF478 003DC3B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DF47C 003DC3BC  7C 9F 23 78 */	mr r31, r4
/* 803DF480 003DC3C0  93 C1 00 08 */	stw r30, 8(r1)
/* 803DF484 003DC3C4  7C 7E 1B 78 */	mr r30, r3
/* 803DF488 003DC3C8  7F E3 FB 78 */	mr r3, r31
/* 803DF48C 003DC3CC  80 84 0C 30 */	lwz r4, 0xc30(r4)
/* 803DF490 003DC3D0  80 BF 0C 34 */	lwz r5, 0xc34(r31)
/* 803DF494 003DC3D4  4B FF 95 41 */	bl setDataBallCopyResult__Q43ebi6Screen10FileSelect11TMainScreenFll
/* 803DF498 003DC3D8  7F C3 F3 78 */	mr r3, r30
/* 803DF49C 003DC3DC  7F E4 FB 78 */	mr r4, r31
/* 803DF4A0 003DC3E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF4A4 003DC3E4  38 A0 00 0E */	li r5, 0xe
/* 803DF4A8 003DC3E8  38 C0 00 00 */	li r6, 0
/* 803DF4AC 003DC3EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF4B0 003DC3F0  7D 89 03 A6 */	mtctr r12
/* 803DF4B4 003DC3F4  4E 80 04 21 */	bctrl 
/* 803DF4B8 003DC3F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF4BC 003DC3FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DF4C0 003DC400  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DF4C4 003DC404  7C 08 03 A6 */	mtlr r0
/* 803DF4C8 003DC408  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF4CC 003DC40C  4E 80 00 20 */	blr 

.global do_transitCardNoCard__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
do_transitCardNoCard__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr:
/* 803DF4D0 003DC410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF4D4 003DC414  7C 08 02 A6 */	mflr r0
/* 803DF4D8 003DC418  38 A0 00 0C */	li r5, 0xc
/* 803DF4DC 003DC41C  38 C0 00 00 */	li r6, 0
/* 803DF4E0 003DC420  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF4E4 003DC424  81 83 00 00 */	lwz r12, 0(r3)
/* 803DF4E8 003DC428  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF4EC 003DC42C  7D 89 03 A6 */	mtctr r12
/* 803DF4F0 003DC430  4E 80 04 21 */	bctrl 
/* 803DF4F4 003DC434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF4F8 003DC438  7C 08 03 A6 */	mtlr r0
/* 803DF4FC 003DC43C  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF500 003DC440  4E 80 00 20 */	blr 

.global do_transitCardIOError__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
do_transitCardIOError__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr:
/* 803DF504 003DC444  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF508 003DC448  7C 08 02 A6 */	mflr r0
/* 803DF50C 003DC44C  38 A0 00 0C */	li r5, 0xc
/* 803DF510 003DC450  38 C0 00 00 */	li r6, 0
/* 803DF514 003DC454  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF518 003DC458  81 83 00 00 */	lwz r12, 0(r3)
/* 803DF51C 003DC45C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF520 003DC460  7D 89 03 A6 */	mtctr r12
/* 803DF524 003DC464  4E 80 04 21 */	bctrl 
/* 803DF528 003DC468  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF52C 003DC46C  7C 08 03 A6 */	mtlr r0
/* 803DF530 003DC470  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF534 003DC474  4E 80 00 20 */	blr 

.global cleanup__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr
cleanup__Q33ebi2FS18FSMState09_NowCopyFPQ33ebi2FS4TMgr:
/* 803DF538 003DC478  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF53C 003DC47C  7C 08 02 A6 */	mflr r0
/* 803DF540 003DC480  7C 83 23 78 */	mr r3, r4
/* 803DF544 003DC484  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF548 003DC488  4B FF 87 05 */	bl fadeFilecopyEffect__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF54C 003DC48C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF550 003DC490  7C 08 03 A6 */	mtlr r0
/* 803DF554 003DC494  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF558 003DC498  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS21FSMState00a_OpenSceneFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS21FSMState00a_OpenSceneFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DF55C 003DC49C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF560 003DC4A0  7C 08 02 A6 */	mflr r0
/* 803DF564 003DC4A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF568 003DC4A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DF56C 003DC4AC  7C 9F 23 78 */	mr r31, r4
/* 803DF570 003DC4B0  38 80 00 00 */	li r4, 0
/* 803DF574 003DC4B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 803DF578 003DC4B8  7F E3 FB 78 */	mr r3, r31
/* 803DF57C 003DC4BC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803DF580 003DC4C0  7D 89 03 A6 */	mtctr r12
/* 803DF584 003DC4C4  4E 80 04 21 */	bctrl 
/* 803DF588 003DC4C8  38 00 00 00 */	li r0, 0
/* 803DF58C 003DC4CC  90 1F 0C 30 */	stw r0, 0xc30(r31)
/* 803DF590 003DC4D0  90 1F 0C 38 */	stw r0, 0xc38(r31)
/* 803DF594 003DC4D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DF598 003DC4D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF59C 003DC4DC  7C 08 03 A6 */	mtlr r0
/* 803DF5A0 003DC4E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF5A4 003DC4E4  4E 80 00 20 */	blr 

.global do_exec__Q33ebi2FS21FSMState00a_OpenSceneFPQ33ebi2FS4TMgr
do_exec__Q33ebi2FS21FSMState00a_OpenSceneFPQ33ebi2FS4TMgr:
/* 803DF5A8 003DC4E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF5AC 003DC4EC  7C 08 02 A6 */	mflr r0
/* 803DF5B0 003DC4F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF5B4 003DC4F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DF5B8 003DC4F8  7C 9F 23 78 */	mr r31, r4
/* 803DF5BC 003DC4FC  93 C1 00 08 */	stw r30, 8(r1)
/* 803DF5C0 003DC500  7C 7E 1B 78 */	mr r30, r3
/* 803DF5C4 003DC504  7F E3 FB 78 */	mr r3, r31
/* 803DF5C8 003DC508  4B FF 43 D1 */	bl isWaitScreen__Q33ebi6Screen11TScreenBaseFv
/* 803DF5CC 003DC50C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DF5D0 003DC510  41 82 00 24 */	beq .L_803DF5F4
/* 803DF5D4 003DC514  7F C3 F3 78 */	mr r3, r30
/* 803DF5D8 003DC518  7F E4 FB 78 */	mr r4, r31
/* 803DF5DC 003DC51C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF5E0 003DC520  38 A0 00 04 */	li r5, 4
/* 803DF5E4 003DC524  38 C0 00 00 */	li r6, 0
/* 803DF5E8 003DC528  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF5EC 003DC52C  7D 89 03 A6 */	mtctr r12
/* 803DF5F0 003DC530  4E 80 04 21 */	bctrl 
.L_803DF5F4:
/* 803DF5F4 003DC534  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF5F8 003DC538  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DF5FC 003DC53C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DF600 003DC540  7C 08 03 A6 */	mtlr r0
/* 803DF604 003DC544  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF608 003DC548  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS21FSMState00_SelectDataFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS21FSMState00_SelectDataFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DF60C 003DC54C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF610 003DC550  7C 08 02 A6 */	mflr r0
/* 803DF614 003DC554  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF618 003DC558  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DF61C 003DC55C  7C 9F 23 78 */	mr r31, r4
/* 803DF620 003DC560  93 C1 00 08 */	stw r30, 8(r1)
/* 803DF624 003DC564  7C 7E 1B 78 */	mr r30, r3
/* 803DF628 003DC568  7F E3 FB 78 */	mr r3, r31
/* 803DF62C 003DC56C  80 84 0C 30 */	lwz r4, 0xc30(r4)
/* 803DF630 003DC570  4B FF 7E 5D */	bl inDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF634 003DC574  80 9F 0C 30 */	lwz r4, 0xc30(r31)
/* 803DF638 003DC578  7F E3 FB 78 */	mr r3, r31
/* 803DF63C 003DC57C  4B FF 87 D9 */	bl openDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF640 003DC580  7F E3 FB 78 */	mr r3, r31
/* 803DF644 003DC584  38 80 00 00 */	li r4, 0
/* 803DF648 003DC588  4B FF 8B E1 */	bl openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF64C 003DC58C  80 1F 0C 30 */	lwz r0, 0xc30(r31)
/* 803DF650 003DC590  1C 60 00 34 */	mulli r3, r0, 0x34
/* 803DF654 003DC594  38 63 0B 00 */	addi r3, r3, 0xb00
/* 803DF658 003DC598  7C 7F 1A 14 */	add r3, r31, r3
/* 803DF65C 003DC59C  88 03 00 01 */	lbz r0, 1(r3)
/* 803DF660 003DC5A0  28 00 00 00 */	cmplwi r0, 0
/* 803DF664 003DC5A4  41 82 00 10 */	beq .L_803DF674
/* 803DF668 003DC5A8  88 03 00 00 */	lbz r0, 0(r3)
/* 803DF66C 003DC5AC  28 00 00 00 */	cmplwi r0, 0
/* 803DF670 003DC5B0  41 82 00 0C */	beq .L_803DF67C
.L_803DF674:
/* 803DF674 003DC5B4  7F E3 FB 78 */	mr r3, r31
/* 803DF678 003DC5B8  4B FF 91 2D */	bl inCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv
.L_803DF67C:
/* 803DF67C 003DC5BC  38 00 00 00 */	li r0, 0
/* 803DF680 003DC5C0  C0 22 18 A8 */	lfs f1, lbl_8051FC08@sda21(r2)
/* 803DF684 003DC5C4  98 1E 00 10 */	stb r0, 0x10(r30)
/* 803DF688 003DC5C8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DF68C 003DC5CC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803DF690 003DC5D0  EC 21 00 24 */	fdivs f1, f1, f0
/* 803DF694 003DC5D4  4B CE 24 B9 */	bl __cvt_fp2unsigned
/* 803DF698 003DC5D8  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803DF69C 003DC5DC  90 7E 00 18 */	stw r3, 0x18(r30)
/* 803DF6A0 003DC5E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF6A4 003DC5E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DF6A8 003DC5E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DF6AC 003DC5EC  7C 08 03 A6 */	mtlr r0
/* 803DF6B0 003DC5F0  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF6B4 003DC5F4  4E 80 00 20 */	blr 

.global do_exec__Q33ebi2FS21FSMState00_SelectDataFPQ33ebi2FS4TMgr
do_exec__Q33ebi2FS21FSMState00_SelectDataFPQ33ebi2FS4TMgr:
/* 803DF6B8 003DC5F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DF6BC 003DC5FC  7C 08 02 A6 */	mflr r0
/* 803DF6C0 003DC600  90 01 00 24 */	stw r0, 0x24(r1)
/* 803DF6C4 003DC604  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803DF6C8 003DC608  7C 9F 23 78 */	mr r31, r4
/* 803DF6CC 003DC60C  7C 7E 1B 78 */	mr r30, r3
/* 803DF6D0 003DC610  7F E3 FB 78 */	mr r3, r31
/* 803DF6D4 003DC614  4B FF 42 C5 */	bl isWaitScreen__Q33ebi6Screen11TScreenBaseFv
/* 803DF6D8 003DC618  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DF6DC 003DC61C  41 82 01 F4 */	beq .L_803DF8D0
/* 803DF6E0 003DC620  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 803DF6E4 003DC624  28 03 00 00 */	cmplwi r3, 0
/* 803DF6E8 003DC628  41 82 00 0C */	beq .L_803DF6F4
/* 803DF6EC 003DC62C  38 03 FF FF */	addi r0, r3, -1
/* 803DF6F0 003DC630  90 1E 00 14 */	stw r0, 0x14(r30)
.L_803DF6F4:
/* 803DF6F4 003DC634  83 9F 0C 00 */	lwz r28, 0xc00(r31)
/* 803DF6F8 003DC638  38 7F 0C 04 */	addi r3, r31, 0xc04
/* 803DF6FC 003DC63C  83 7F 0C 30 */	lwz r27, 0xc30(r31)
/* 803DF700 003DC640  4B FE 23 9D */	bl update__Q23ebi24EUTPadInterface_countNumFv
/* 803DF704 003DC644  80 1F 0C 30 */	lwz r0, 0xc30(r31)
/* 803DF708 003DC648  3B A0 00 01 */	li r29, 1
/* 803DF70C 003DC64C  1C 60 00 34 */	mulli r3, r0, 0x34
/* 803DF710 003DC650  38 63 0B 00 */	addi r3, r3, 0xb00
/* 803DF714 003DC654  7C 7F 1A 14 */	add r3, r31, r3
/* 803DF718 003DC658  88 03 00 01 */	lbz r0, 1(r3)
/* 803DF71C 003DC65C  28 00 00 00 */	cmplwi r0, 0
/* 803DF720 003DC660  41 82 00 14 */	beq .L_803DF734
/* 803DF724 003DC664  88 03 00 00 */	lbz r0, 0(r3)
/* 803DF728 003DC668  28 00 00 00 */	cmplwi r0, 0
/* 803DF72C 003DC66C  40 82 00 08 */	bne .L_803DF734
/* 803DF730 003DC670  3B A0 00 00 */	li r29, 0
.L_803DF734:
/* 803DF734 003DC674  80 1F 0C 30 */	lwz r0, 0xc30(r31)
/* 803DF738 003DC678  7C 1B 00 00 */	cmpw r27, r0
/* 803DF73C 003DC67C  41 82 00 58 */	beq .L_803DF794
/* 803DF740 003DC680  7F E3 FB 78 */	mr r3, r31
/* 803DF744 003DC684  7F 64 DB 78 */	mr r4, r27
/* 803DF748 003DC688  4B FF 7E F5 */	bl outDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF74C 003DC68C  7F E3 FB 78 */	mr r3, r31
/* 803DF750 003DC690  4B FF 89 DD */	bl closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF754 003DC694  80 9F 0C 30 */	lwz r4, 0xc30(r31)
/* 803DF758 003DC698  7F E3 FB 78 */	mr r3, r31
/* 803DF75C 003DC69C  4B FF 7D 31 */	bl inDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF760 003DC6A0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 803DF764 003DC6A4  41 82 00 10 */	beq .L_803DF774
/* 803DF768 003DC6A8  7F E3 FB 78 */	mr r3, r31
/* 803DF76C 003DC6AC  4B FF 90 39 */	bl inCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF770 003DC6B0  48 00 00 0C */	b .L_803DF77C
.L_803DF774:
/* 803DF774 003DC6B4  7F E3 FB 78 */	mr r3, r31
/* 803DF778 003DC6B8  4B FF 90 B9 */	bl outCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv
.L_803DF77C:
/* 803DF77C 003DC6BC  38 00 00 01 */	li r0, 1
/* 803DF780 003DC6C0  38 80 18 02 */	li r4, 0x1802
/* 803DF784 003DC6C4  98 1E 00 10 */	stb r0, 0x10(r30)
/* 803DF788 003DC6C8  38 A0 00 00 */	li r5, 0
/* 803DF78C 003DC6CC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DF790 003DC6D0  4B F5 8E A1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803DF794:
/* 803DF794 003DC6D4  7F E3 FB 78 */	mr r3, r31
/* 803DF798 003DC6D8  4B FF 8A 6D */	bl isFinishCloseDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF79C 003DC6DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DF7A0 003DC6E0  41 82 00 24 */	beq .L_803DF7C4
/* 803DF7A4 003DC6E4  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 803DF7A8 003DC6E8  28 00 00 00 */	cmplwi r0, 0
/* 803DF7AC 003DC6EC  41 82 00 18 */	beq .L_803DF7C4
/* 803DF7B0 003DC6F0  38 00 00 00 */	li r0, 0
/* 803DF7B4 003DC6F4  7F E3 FB 78 */	mr r3, r31
/* 803DF7B8 003DC6F8  98 1E 00 10 */	stb r0, 0x10(r30)
/* 803DF7BC 003DC6FC  80 9F 0C 30 */	lwz r4, 0xc30(r31)
/* 803DF7C0 003DC700  4B FF 86 55 */	bl openDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFl
.L_803DF7C4:
/* 803DF7C4 003DC704  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803DF7C8 003DC708  28 00 00 00 */	cmplwi r0, 0
/* 803DF7CC 003DC70C  40 82 01 04 */	bne .L_803DF8D0
/* 803DF7D0 003DC710  80 7C 00 1C */	lwz r3, 0x1c(r28)
/* 803DF7D4 003DC714  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 803DF7D8 003DC718  41 82 00 38 */	beq .L_803DF810
/* 803DF7DC 003DC71C  7F C3 F3 78 */	mr r3, r30
/* 803DF7E0 003DC720  7F E4 FB 78 */	mr r4, r31
/* 803DF7E4 003DC724  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF7E8 003DC728  38 A0 00 02 */	li r5, 2
/* 803DF7EC 003DC72C  38 C0 00 00 */	li r6, 0
/* 803DF7F0 003DC730  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF7F4 003DC734  7D 89 03 A6 */	mtctr r12
/* 803DF7F8 003DC738  4E 80 04 21 */	bctrl 
/* 803DF7FC 003DC73C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DF800 003DC740  38 80 18 00 */	li r4, 0x1800
/* 803DF804 003DC744  38 A0 00 00 */	li r5, 0
/* 803DF808 003DC748  4B F5 8E 29 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803DF80C 003DC74C  48 00 00 C4 */	b .L_803DF8D0
.L_803DF810:
/* 803DF810 003DC750  54 60 05 29 */	rlwinm. r0, r3, 0, 0x14, 0x14
/* 803DF814 003DC754  41 82 00 48 */	beq .L_803DF85C
/* 803DF818 003DC758  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 803DF81C 003DC75C  41 82 00 B4 */	beq .L_803DF8D0
/* 803DF820 003DC760  7F C3 F3 78 */	mr r3, r30
/* 803DF824 003DC764  7F E4 FB 78 */	mr r4, r31
/* 803DF828 003DC768  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF82C 003DC76C  38 A0 00 08 */	li r5, 8
/* 803DF830 003DC770  38 C0 00 00 */	li r6, 0
/* 803DF834 003DC774  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF838 003DC778  7D 89 03 A6 */	mtctr r12
/* 803DF83C 003DC77C  4E 80 04 21 */	bctrl 
/* 803DF840 003DC780  7F E3 FB 78 */	mr r3, r31
/* 803DF844 003DC784  4B FF 88 E9 */	bl closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF848 003DC788  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DF84C 003DC78C  38 80 18 00 */	li r4, 0x1800
/* 803DF850 003DC790  38 A0 00 00 */	li r5, 0
/* 803DF854 003DC794  4B F5 8D DD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803DF858 003DC798  48 00 00 78 */	b .L_803DF8D0
.L_803DF85C:
/* 803DF85C 003DC79C  54 60 05 6B */	rlwinm. r0, r3, 0, 0x15, 0x15
/* 803DF860 003DC7A0  41 82 00 40 */	beq .L_803DF8A0
/* 803DF864 003DC7A4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 803DF868 003DC7A8  41 82 00 68 */	beq .L_803DF8D0
/* 803DF86C 003DC7AC  7F C3 F3 78 */	mr r3, r30
/* 803DF870 003DC7B0  7F E4 FB 78 */	mr r4, r31
/* 803DF874 003DC7B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803DF878 003DC7B8  38 A0 00 07 */	li r5, 7
/* 803DF87C 003DC7BC  38 C0 00 00 */	li r6, 0
/* 803DF880 003DC7C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DF884 003DC7C4  7D 89 03 A6 */	mtctr r12
/* 803DF888 003DC7C8  4E 80 04 21 */	bctrl 
/* 803DF88C 003DC7CC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DF890 003DC7D0  38 80 18 00 */	li r4, 0x1800
/* 803DF894 003DC7D4  38 A0 00 00 */	li r5, 0
/* 803DF898 003DC7D8  4B F5 8D 99 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803DF89C 003DC7DC  48 00 00 34 */	b .L_803DF8D0
.L_803DF8A0:
/* 803DF8A0 003DC7E0  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 803DF8A4 003DC7E4  41 82 00 2C */	beq .L_803DF8D0
/* 803DF8A8 003DC7E8  7F E3 FB 78 */	mr r3, r31
/* 803DF8AC 003DC7EC  38 80 00 00 */	li r4, 0
/* 803DF8B0 003DC7F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 803DF8B4 003DC7F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803DF8B8 003DC7F8  7D 89 03 A6 */	mtctr r12
/* 803DF8BC 003DC7FC  4E 80 04 21 */	bctrl 
/* 803DF8C0 003DC800  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DF8C4 003DC804  38 80 18 01 */	li r4, 0x1801
/* 803DF8C8 003DC808  38 A0 00 00 */	li r5, 0
/* 803DF8CC 003DC80C  4B F5 8D 65 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803DF8D0:
/* 803DF8D0 003DC810  7F E3 FB 78 */	mr r3, r31
/* 803DF8D4 003DC814  81 9F 00 00 */	lwz r12, 0(r31)
/* 803DF8D8 003DC818  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803DF8DC 003DC81C  7D 89 03 A6 */	mtctr r12
/* 803DF8E0 003DC820  4E 80 04 21 */	bctrl 
/* 803DF8E4 003DC824  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DF8E8 003DC828  41 82 00 10 */	beq .L_803DF8F8
/* 803DF8EC 003DC82C  7F E3 FB 78 */	mr r3, r31
/* 803DF8F0 003DC830  38 80 00 05 */	li r4, 5
/* 803DF8F4 003DC834  48 00 0A 25 */	bl goEnd___Q33ebi2FS4TMgrFQ43ebi2FS4TMgr7enumEnd
.L_803DF8F8:
/* 803DF8F8 003DC838  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803DF8FC 003DC83C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803DF900 003DC840  7C 08 03 A6 */	mtlr r0
/* 803DF904 003DC844  38 21 00 20 */	addi r1, r1, 0x20
/* 803DF908 003DC848  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS21FSMState00b_CheckDataFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS21FSMState00b_CheckDataFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DF90C 003DC84C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DF910 003DC850  7C 08 02 A6 */	mflr r0
/* 803DF914 003DC854  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DF918 003DC858  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DF91C 003DC85C  7C 9F 23 78 */	mr r31, r4
/* 803DF920 003DC860  93 C1 00 08 */	stw r30, 8(r1)
/* 803DF924 003DC864  7C 7E 1B 78 */	mr r30, r3
/* 803DF928 003DC868  7F E3 FB 78 */	mr r3, r31
/* 803DF92C 003DC86C  4B FF 8B 9D */	bl closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF930 003DC870  7F E3 FB 78 */	mr r3, r31
/* 803DF934 003DC874  4B FF 8E FD */	bl outCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DF938 003DC878  80 9F 0C 30 */	lwz r4, 0xc30(r31)
/* 803DF93C 003DC87C  7F E3 FB 78 */	mr r3, r31
/* 803DF940 003DC880  4B FF 7C FD */	bl outDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF944 003DC884  80 9F 0C 30 */	lwz r4, 0xc30(r31)
/* 803DF948 003DC888  7F E3 FB 78 */	mr r3, r31
/* 803DF94C 003DC88C  4B FF 7E 39 */	bl createFiledecide__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DF950 003DC890  38 00 00 00 */	li r0, 0
/* 803DF954 003DC894  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803DF958 003DC898  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DF95C 003DC89C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DF960 003DC8A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DF964 003DC8A4  7C 08 03 A6 */	mtlr r0
/* 803DF968 003DC8A8  38 21 00 10 */	addi r1, r1, 0x10
/* 803DF96C 003DC8AC  4E 80 00 20 */	blr 

.global do_exec__Q33ebi2FS21FSMState00b_CheckDataFPQ33ebi2FS4TMgr
do_exec__Q33ebi2FS21FSMState00b_CheckDataFPQ33ebi2FS4TMgr:
/* 803DF970 003DC8B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DF974 003DC8B4  7C 08 02 A6 */	mflr r0
/* 803DF978 003DC8B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803DF97C 003DC8BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803DF980 003DC8C0  7C 7F 1B 78 */	mr r31, r3
/* 803DF984 003DC8C4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803DF988 003DC8C8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803DF98C 003DC8CC  7C 9D 23 78 */	mr r29, r4
/* 803DF990 003DC8D0  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803DF994 003DC8D4  2C 00 00 01 */	cmpwi r0, 1
/* 803DF998 003DC8D8  41 82 00 90 */	beq .L_803DFA28
/* 803DF99C 003DC8DC  40 80 00 10 */	bge .L_803DF9AC
/* 803DF9A0 003DC8E0  2C 00 00 00 */	cmpwi r0, 0
/* 803DF9A4 003DC8E4  40 80 00 14 */	bge .L_803DF9B8
/* 803DF9A8 003DC8E8  48 00 01 8C */	b .L_803DFB34
.L_803DF9AC:
/* 803DF9AC 003DC8EC  2C 00 00 03 */	cmpwi r0, 3
/* 803DF9B0 003DC8F0  40 80 01 84 */	bge .L_803DFB34
/* 803DF9B4 003DC8F4  48 00 00 C0 */	b .L_803DFA74
.L_803DF9B8:
/* 803DF9B8 003DC8F8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DF9BC 003DC8FC  3B C0 00 00 */	li r30, 0
/* 803DF9C0 003DC900  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DF9C4 003DC904  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DF9C8 003DC908  2C 00 00 00 */	cmpwi r0, 0
/* 803DF9CC 003DC90C  40 82 00 14 */	bne .L_803DF9E0
/* 803DF9D0 003DC910  48 06 15 ED */	bl checkStatus__13MemoryCardMgrFv
/* 803DF9D4 003DC914  28 03 00 0B */	cmplwi r3, 0xb
/* 803DF9D8 003DC918  41 82 00 08 */	beq .L_803DF9E0
/* 803DF9DC 003DC91C  3B C0 00 01 */	li r30, 1
.L_803DF9E0:
/* 803DF9E0 003DC920  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803DF9E4 003DC924  41 82 01 50 */	beq .L_803DFB34
/* 803DF9E8 003DC928  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DF9EC 003DC92C  80 9D 0C 30 */	lwz r4, 0xc30(r29)
/* 803DF9F0 003DC930  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DF9F4 003DC934  48 06 38 99 */	bl loadPlayer__Q34Game10MemoryCard3MgrFi
/* 803DF9F8 003DC938  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DF9FC 003DC93C  40 82 00 20 */	bne .L_803DFA1C
/* 803DFA00 003DC940  3C 60 80 49 */	lis r3, lbl_80496FE4@ha
/* 803DFA04 003DC944  3C A0 80 49 */	lis r5, lbl_80497000@ha
/* 803DFA08 003DC948  38 63 6F E4 */	addi r3, r3, lbl_80496FE4@l
/* 803DFA0C 003DC94C  38 80 02 71 */	li r4, 0x271
/* 803DFA10 003DC950  38 A5 70 00 */	addi r5, r5, lbl_80497000@l
/* 803DFA14 003DC954  4C C6 31 82 */	crclr 6
/* 803DFA18 003DC958  4B C4 AC 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803DFA1C:
/* 803DFA1C 003DC95C  38 00 00 01 */	li r0, 1
/* 803DFA20 003DC960  90 1F 00 10 */	stw r0, 0x10(r31)
/* 803DFA24 003DC964  48 00 01 10 */	b .L_803DFB34
.L_803DFA28:
/* 803DFA28 003DC968  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DFA2C 003DC96C  3B C0 00 00 */	li r30, 0
/* 803DFA30 003DC970  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DFA34 003DC974  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803DFA38 003DC978  2C 00 00 00 */	cmpwi r0, 0
/* 803DFA3C 003DC97C  40 82 00 14 */	bne .L_803DFA50
/* 803DFA40 003DC980  48 06 15 7D */	bl checkStatus__13MemoryCardMgrFv
/* 803DFA44 003DC984  28 03 00 0B */	cmplwi r3, 0xb
/* 803DFA48 003DC988  41 82 00 08 */	beq .L_803DFA50
/* 803DFA4C 003DC98C  3B C0 00 01 */	li r30, 1
.L_803DFA50:
/* 803DFA50 003DC990  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803DFA54 003DC994  41 82 00 E0 */	beq .L_803DFB34
/* 803DFA58 003DC998  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803DFA5C 003DC99C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803DFA60 003DC9A0  48 06 60 AD */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803DFA64 003DC9A4  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803DFA68 003DC9A8  38 00 00 02 */	li r0, 2
/* 803DFA6C 003DC9AC  90 1F 00 10 */	stw r0, 0x10(r31)
/* 803DFA70 003DC9B0  48 00 00 C4 */	b .L_803DFB34
.L_803DFA74:
/* 803DFA74 003DC9B4  7F A3 EB 78 */	mr r3, r29
/* 803DFA78 003DC9B8  4B FF 8A B1 */	bl isFinishCloseMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFA7C 003DC9BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DFA80 003DC9C0  41 82 00 B4 */	beq .L_803DFB34
/* 803DFA84 003DC9C4  80 9D 0C 30 */	lwz r4, 0xc30(r29)
/* 803DFA88 003DC9C8  7F A3 EB 78 */	mr r3, r29
/* 803DFA8C 003DC9CC  4B FF 7E 1D */	bl isFinishOutDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DFA90 003DC9D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DFA94 003DC9D4  41 82 00 A0 */	beq .L_803DFB34
/* 803DFA98 003DC9D8  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 803DFA9C 003DC9DC  2C 00 00 0D */	cmpwi r0, 0xd
/* 803DFAA0 003DC9E0  41 82 00 38 */	beq .L_803DFAD8
/* 803DFAA4 003DC9E4  40 80 00 64 */	bge .L_803DFB08
/* 803DFAA8 003DC9E8  2C 00 00 02 */	cmpwi r0, 2
/* 803DFAAC 003DC9EC  41 82 00 08 */	beq .L_803DFAB4
/* 803DFAB0 003DC9F0  48 00 00 58 */	b .L_803DFB08
.L_803DFAB4:
/* 803DFAB4 003DC9F4  7F E3 FB 78 */	mr r3, r31
/* 803DFAB8 003DC9F8  7F A4 EB 78 */	mr r4, r29
/* 803DFABC 003DC9FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803DFAC0 003DCA00  38 A0 00 03 */	li r5, 3
/* 803DFAC4 003DCA04  38 C0 00 00 */	li r6, 0
/* 803DFAC8 003DCA08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DFACC 003DCA0C  7D 89 03 A6 */	mtctr r12
/* 803DFAD0 003DCA10  4E 80 04 21 */	bctrl 
/* 803DFAD4 003DCA14  48 00 00 60 */	b .L_803DFB34
.L_803DFAD8:
/* 803DFAD8 003DCA18  80 9D 0C 30 */	lwz r4, 0xc30(r29)
/* 803DFADC 003DCA1C  7F A3 EB 78 */	mr r3, r29
/* 803DFAE0 003DCA20  4B FF 79 AD */	bl inDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DFAE4 003DCA24  7F E3 FB 78 */	mr r3, r31
/* 803DFAE8 003DCA28  7F A4 EB 78 */	mr r4, r29
/* 803DFAEC 003DCA2C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803DFAF0 003DCA30  38 A0 00 05 */	li r5, 5
/* 803DFAF4 003DCA34  38 C0 00 00 */	li r6, 0
/* 803DFAF8 003DCA38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DFAFC 003DCA3C  7D 89 03 A6 */	mtctr r12
/* 803DFB00 003DCA40  4E 80 04 21 */	bctrl 
/* 803DFB04 003DCA44  48 00 00 30 */	b .L_803DFB34
.L_803DFB08:
/* 803DFB08 003DCA48  80 9D 0C 30 */	lwz r4, 0xc30(r29)
/* 803DFB0C 003DCA4C  7F A3 EB 78 */	mr r3, r29
/* 803DFB10 003DCA50  4B FF 79 7D */	bl inDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DFB14 003DCA54  7F E3 FB 78 */	mr r3, r31
/* 803DFB18 003DCA58  7F A4 EB 78 */	mr r4, r29
/* 803DFB1C 003DCA5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803DFB20 003DCA60  38 A0 00 05 */	li r5, 5
/* 803DFB24 003DCA64  38 C0 00 00 */	li r6, 0
/* 803DFB28 003DCA68  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DFB2C 003DCA6C  7D 89 03 A6 */	mtctr r12
/* 803DFB30 003DCA70  4E 80 04 21 */	bctrl 
.L_803DFB34:
/* 803DFB34 003DCA74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803DFB38 003DCA78  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803DFB3C 003DCA7C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803DFB40 003DCA80  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803DFB44 003DCA84  7C 08 03 A6 */	mtlr r0
/* 803DFB48 003DCA88  38 21 00 20 */	addi r1, r1, 0x20
/* 803DFB4C 003DCA8C  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS22FSMState00c_DecideDataFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS22FSMState00c_DecideDataFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DFB50 003DCA90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DFB54 003DCA94  7C 08 02 A6 */	mflr r0
/* 803DFB58 003DCA98  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DFB5C 003DCA9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DFB60 003DCAA0  7C 9F 23 78 */	mr r31, r4
/* 803DFB64 003DCAA4  7F E3 FB 78 */	mr r3, r31
/* 803DFB68 003DCAA8  80 84 0C 30 */	lwz r4, 0xc30(r4)
/* 803DFB6C 003DCAAC  4B FF 7B 75 */	bl decideDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DFB70 003DCAB0  7F E3 FB 78 */	mr r3, r31
/* 803DFB74 003DCAB4  4B FF 86 25 */	bl decideDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFB78 003DCAB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DFB7C 003DCABC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DFB80 003DCAC0  7C 08 03 A6 */	mtlr r0
/* 803DFB84 003DCAC4  38 21 00 10 */	addi r1, r1, 0x10
/* 803DFB88 003DCAC8  4E 80 00 20 */	blr 

.global do_exec__Q33ebi2FS22FSMState00c_DecideDataFPQ33ebi2FS4TMgr
do_exec__Q33ebi2FS22FSMState00c_DecideDataFPQ33ebi2FS4TMgr:
/* 803DFB8C 003DCACC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DFB90 003DCAD0  7C 08 02 A6 */	mflr r0
/* 803DFB94 003DCAD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DFB98 003DCAD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DFB9C 003DCADC  7C 9F 23 78 */	mr r31, r4
/* 803DFBA0 003DCAE0  7F E3 FB 78 */	mr r3, r31
/* 803DFBA4 003DCAE4  4B FF 3D F5 */	bl isWaitScreen__Q33ebi6Screen11TScreenBaseFv
/* 803DFBA8 003DCAE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DFBAC 003DCAEC  41 82 00 30 */	beq .L_803DFBDC
/* 803DFBB0 003DCAF0  80 9F 0C 30 */	lwz r4, 0xc30(r31)
/* 803DFBB4 003DCAF4  7F E3 FB 78 */	mr r3, r31
/* 803DFBB8 003DCAF8  4B FF 7D 21 */	bl isFinishDecideDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DFBBC 003DCAFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DFBC0 003DCB00  41 82 00 1C */	beq .L_803DFBDC
/* 803DFBC4 003DCB04  7F E3 FB 78 */	mr r3, r31
/* 803DFBC8 003DCB08  38 80 00 00 */	li r4, 0
/* 803DFBCC 003DCB0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803DFBD0 003DCB10  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803DFBD4 003DCB14  7D 89 03 A6 */	mtctr r12
/* 803DFBD8 003DCB18  4E 80 04 21 */	bctrl 
.L_803DFBDC:
/* 803DFBDC 003DCB1C  7F E3 FB 78 */	mr r3, r31
/* 803DFBE0 003DCB20  81 9F 00 00 */	lwz r12, 0(r31)
/* 803DFBE4 003DCB24  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803DFBE8 003DCB28  7D 89 03 A6 */	mtctr r12
/* 803DFBEC 003DCB2C  4E 80 04 21 */	bctrl 
/* 803DFBF0 003DCB30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DFBF4 003DCB34  41 82 00 38 */	beq .L_803DFC2C
/* 803DFBF8 003DCB38  80 1F 0C 30 */	lwz r0, 0xc30(r31)
/* 803DFBFC 003DCB3C  1C 60 00 34 */	mulli r3, r0, 0x34
/* 803DFC00 003DCB40  38 03 0B 01 */	addi r0, r3, 0xb01
/* 803DFC04 003DCB44  7C 1F 00 AE */	lbzx r0, r31, r0
/* 803DFC08 003DCB48  28 00 00 00 */	cmplwi r0, 0
/* 803DFC0C 003DCB4C  41 82 00 14 */	beq .L_803DFC20
/* 803DFC10 003DCB50  7F E3 FB 78 */	mr r3, r31
/* 803DFC14 003DCB54  38 80 00 04 */	li r4, 4
/* 803DFC18 003DCB58  48 00 07 01 */	bl goEnd___Q33ebi2FS4TMgrFQ43ebi2FS4TMgr7enumEnd
/* 803DFC1C 003DCB5C  48 00 00 10 */	b .L_803DFC2C
.L_803DFC20:
/* 803DFC20 003DCB60  7F E3 FB 78 */	mr r3, r31
/* 803DFC24 003DCB64  38 80 00 03 */	li r4, 3
/* 803DFC28 003DCB68  48 00 06 F1 */	bl goEnd___Q33ebi2FS4TMgrFQ43ebi2FS4TMgr7enumEnd
.L_803DFC2C:
/* 803DFC2C 003DCB6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DFC30 003DCB70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DFC34 003DCB74  7C 08 03 A6 */	mtlr r0
/* 803DFC38 003DCB78  38 21 00 10 */	addi r1, r1, 0x10
/* 803DFC3C 003DCB7C  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS31FSMState04_WhichDataDoYouCopyToFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS31FSMState04_WhichDataDoYouCopyToFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803DFC40 003DCB80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DFC44 003DCB84  7C 08 02 A6 */	mflr r0
/* 803DFC48 003DCB88  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DFC4C 003DCB8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DFC50 003DCB90  7C 9F 23 78 */	mr r31, r4
/* 803DFC54 003DCB94  93 C1 00 08 */	stw r30, 8(r1)
/* 803DFC58 003DCB98  7C 7E 1B 78 */	mr r30, r3
/* 803DFC5C 003DCB9C  7F E3 FB 78 */	mr r3, r31
/* 803DFC60 003DCBA0  80 84 0C 30 */	lwz r4, 0xc30(r4)
/* 803DFC64 003DCBA4  4B FF 7C A5 */	bl createCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DFC68 003DCBA8  7F E3 FB 78 */	mr r3, r31
/* 803DFC6C 003DCBAC  38 80 00 04 */	li r4, 4
/* 803DFC70 003DCBB0  4B FF 85 B9 */	bl openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803DFC74 003DCBB4  7F E3 FB 78 */	mr r3, r31
/* 803DFC78 003DCBB8  4B FF 8B B9 */	bl outCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFC7C 003DCBBC  80 1F 0C 30 */	lwz r0, 0xc30(r31)
/* 803DFC80 003DCBC0  2C 00 00 01 */	cmpwi r0, 1
/* 803DFC84 003DCBC4  41 82 00 2C */	beq .L_803DFCB0
/* 803DFC88 003DCBC8  40 80 00 10 */	bge .L_803DFC98
/* 803DFC8C 003DCBCC  2C 00 00 00 */	cmpwi r0, 0
/* 803DFC90 003DCBD0  40 80 00 14 */	bge .L_803DFCA4
/* 803DFC94 003DCBD4  48 00 00 30 */	b .L_803DFCC4
.L_803DFC98:
/* 803DFC98 003DCBD8  2C 00 00 03 */	cmpwi r0, 3
/* 803DFC9C 003DCBDC  40 80 00 28 */	bge .L_803DFCC4
/* 803DFCA0 003DCBE0  48 00 00 1C */	b .L_803DFCBC
.L_803DFCA4:
/* 803DFCA4 003DCBE4  38 00 00 01 */	li r0, 1
/* 803DFCA8 003DCBE8  90 1F 0C 34 */	stw r0, 0xc34(r31)
/* 803DFCAC 003DCBEC  48 00 00 18 */	b .L_803DFCC4
.L_803DFCB0:
/* 803DFCB0 003DCBF0  38 00 00 00 */	li r0, 0
/* 803DFCB4 003DCBF4  90 1F 0C 34 */	stw r0, 0xc34(r31)
/* 803DFCB8 003DCBF8  48 00 00 0C */	b .L_803DFCC4
.L_803DFCBC:
/* 803DFCBC 003DCBFC  38 00 00 00 */	li r0, 0
/* 803DFCC0 003DCC00  90 1F 0C 34 */	stw r0, 0xc34(r31)
.L_803DFCC4:
/* 803DFCC4 003DCC04  38 60 00 00 */	li r3, 0
/* 803DFCC8 003DCC08  38 00 00 01 */	li r0, 1
/* 803DFCCC 003DCC0C  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803DFCD0 003DCC10  98 7E 00 10 */	stb r3, 0x10(r30)
/* 803DFCD4 003DCC14  98 1E 00 11 */	stb r0, 0x11(r30)
/* 803DFCD8 003DCC18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803DFCDC 003DCC1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803DFCE0 003DCC20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803DFCE4 003DCC24  7C 08 03 A6 */	mtlr r0
/* 803DFCE8 003DCC28  38 21 00 10 */	addi r1, r1, 0x10
/* 803DFCEC 003DCC2C  4E 80 00 20 */	blr 

.global do_exec__Q33ebi2FS31FSMState04_WhichDataDoYouCopyToFPQ33ebi2FS4TMgr
do_exec__Q33ebi2FS31FSMState04_WhichDataDoYouCopyToFPQ33ebi2FS4TMgr:
/* 803DFCF0 003DCC30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803DFCF4 003DCC34  7C 08 02 A6 */	mflr r0
/* 803DFCF8 003DCC38  90 01 00 24 */	stw r0, 0x24(r1)
/* 803DFCFC 003DCC3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803DFD00 003DCC40  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803DFD04 003DCC44  7C 9E 23 78 */	mr r30, r4
/* 803DFD08 003DCC48  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803DFD0C 003DCC4C  7C 7D 1B 78 */	mr r29, r3
/* 803DFD10 003DCC50  80 03 00 14 */	lwz r0, 0x14(r3)
/* 803DFD14 003DCC54  2C 00 00 01 */	cmpwi r0, 1
/* 803DFD18 003DCC58  41 82 01 F8 */	beq .L_803DFF10
/* 803DFD1C 003DCC5C  40 80 02 54 */	bge .L_803DFF70
/* 803DFD20 003DCC60  2C 00 00 00 */	cmpwi r0, 0
/* 803DFD24 003DCC64  40 80 00 08 */	bge .L_803DFD2C
/* 803DFD28 003DCC68  48 00 02 48 */	b .L_803DFF70
.L_803DFD2C:
/* 803DFD2C 003DCC6C  80 7E 0C 00 */	lwz r3, 0xc00(r30)
/* 803DFD30 003DCC70  83 FE 0C 34 */	lwz r31, 0xc34(r30)
/* 803DFD34 003DCC74  80 03 00 18 */	lwz r0, 0x18(r3)
/* 803DFD38 003DCC78  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 803DFD3C 003DCC7C  40 82 00 14 */	bne .L_803DFD50
/* 803DFD40 003DCC80  C0 23 00 48 */	lfs f1, 0x48(r3)
/* 803DFD44 003DCC84  C0 02 18 A8 */	lfs f0, lbl_8051FC08@sda21(r2)
/* 803DFD48 003DCC88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803DFD4C 003DCC8C  40 81 00 0C */	ble .L_803DFD58
.L_803DFD50:
/* 803DFD50 003DCC90  38 00 00 01 */	li r0, 1
/* 803DFD54 003DCC94  48 00 00 08 */	b .L_803DFD5C
.L_803DFD58:
/* 803DFD58 003DCC98  38 00 00 00 */	li r0, 0
.L_803DFD5C:
/* 803DFD5C 003DCC9C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803DFD60 003DCCA0  41 82 00 58 */	beq .L_803DFDB8
/* 803DFD64 003DCCA4  7F C3 F3 78 */	mr r3, r30
/* 803DFD68 003DCCA8  4B FF 7C F5 */	bl moveRightCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFD6C 003DCCAC  80 1E 0C 30 */	lwz r0, 0xc30(r30)
/* 803DFD70 003DCCB0  2C 00 00 01 */	cmpwi r0, 1
/* 803DFD74 003DCCB4  41 82 00 2C */	beq .L_803DFDA0
/* 803DFD78 003DCCB8  40 80 00 10 */	bge .L_803DFD88
/* 803DFD7C 003DCCBC  2C 00 00 00 */	cmpwi r0, 0
/* 803DFD80 003DCCC0  40 80 00 14 */	bge .L_803DFD94
/* 803DFD84 003DCCC4  48 00 00 B4 */	b .L_803DFE38
.L_803DFD88:
/* 803DFD88 003DCCC8  2C 00 00 03 */	cmpwi r0, 3
/* 803DFD8C 003DCCCC  40 80 00 AC */	bge .L_803DFE38
/* 803DFD90 003DCCD0  48 00 00 1C */	b .L_803DFDAC
.L_803DFD94:
/* 803DFD94 003DCCD4  38 00 00 02 */	li r0, 2
/* 803DFD98 003DCCD8  90 1E 0C 34 */	stw r0, 0xc34(r30)
/* 803DFD9C 003DCCDC  48 00 00 9C */	b .L_803DFE38
.L_803DFDA0:
/* 803DFDA0 003DCCE0  38 00 00 02 */	li r0, 2
/* 803DFDA4 003DCCE4  90 1E 0C 34 */	stw r0, 0xc34(r30)
/* 803DFDA8 003DCCE8  48 00 00 90 */	b .L_803DFE38
.L_803DFDAC:
/* 803DFDAC 003DCCEC  38 00 00 01 */	li r0, 1
/* 803DFDB0 003DCCF0  90 1E 0C 34 */	stw r0, 0xc34(r30)
/* 803DFDB4 003DCCF4  48 00 00 84 */	b .L_803DFE38
.L_803DFDB8:
/* 803DFDB8 003DCCF8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 803DFDBC 003DCCFC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803DFDC0 003DCD00  40 82 00 14 */	bne .L_803DFDD4
/* 803DFDC4 003DCD04  C0 23 00 48 */	lfs f1, 0x48(r3)
/* 803DFDC8 003DCD08  C0 02 18 AC */	lfs f0, lbl_8051FC0C@sda21(r2)
/* 803DFDCC 003DCD0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803DFDD0 003DCD10  40 80 00 0C */	bge .L_803DFDDC
.L_803DFDD4:
/* 803DFDD4 003DCD14  38 00 00 01 */	li r0, 1
/* 803DFDD8 003DCD18  48 00 00 08 */	b .L_803DFDE0
.L_803DFDDC:
/* 803DFDDC 003DCD1C  38 00 00 00 */	li r0, 0
.L_803DFDE0:
/* 803DFDE0 003DCD20  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803DFDE4 003DCD24  41 82 00 54 */	beq .L_803DFE38
/* 803DFDE8 003DCD28  7F C3 F3 78 */	mr r3, r30
/* 803DFDEC 003DCD2C  4B FF 7C 61 */	bl moveLeftCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFDF0 003DCD30  80 1E 0C 30 */	lwz r0, 0xc30(r30)
/* 803DFDF4 003DCD34  2C 00 00 01 */	cmpwi r0, 1
/* 803DFDF8 003DCD38  41 82 00 2C */	beq .L_803DFE24
/* 803DFDFC 003DCD3C  40 80 00 10 */	bge .L_803DFE0C
/* 803DFE00 003DCD40  2C 00 00 00 */	cmpwi r0, 0
/* 803DFE04 003DCD44  40 80 00 14 */	bge .L_803DFE18
/* 803DFE08 003DCD48  48 00 00 30 */	b .L_803DFE38
.L_803DFE0C:
/* 803DFE0C 003DCD4C  2C 00 00 03 */	cmpwi r0, 3
/* 803DFE10 003DCD50  40 80 00 28 */	bge .L_803DFE38
/* 803DFE14 003DCD54  48 00 00 1C */	b .L_803DFE30
.L_803DFE18:
/* 803DFE18 003DCD58  38 00 00 01 */	li r0, 1
/* 803DFE1C 003DCD5C  90 1E 0C 34 */	stw r0, 0xc34(r30)
/* 803DFE20 003DCD60  48 00 00 18 */	b .L_803DFE38
.L_803DFE24:
/* 803DFE24 003DCD64  38 00 00 00 */	li r0, 0
/* 803DFE28 003DCD68  90 1E 0C 34 */	stw r0, 0xc34(r30)
/* 803DFE2C 003DCD6C  48 00 00 0C */	b .L_803DFE38
.L_803DFE30:
/* 803DFE30 003DCD70  38 00 00 00 */	li r0, 0
/* 803DFE34 003DCD74  90 1E 0C 34 */	stw r0, 0xc34(r30)
.L_803DFE38:
/* 803DFE38 003DCD78  80 1E 0C 34 */	lwz r0, 0xc34(r30)
/* 803DFE3C 003DCD7C  7C 1F 00 00 */	cmpw r31, r0
/* 803DFE40 003DCD80  41 82 00 24 */	beq .L_803DFE64
/* 803DFE44 003DCD84  7F C3 F3 78 */	mr r3, r30
/* 803DFE48 003DCD88  4B FF 82 E5 */	bl closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFE4C 003DCD8C  38 00 00 01 */	li r0, 1
/* 803DFE50 003DCD90  38 80 18 02 */	li r4, 0x1802
/* 803DFE54 003DCD94  98 1D 00 11 */	stb r0, 0x11(r29)
/* 803DFE58 003DCD98  38 A0 00 00 */	li r5, 0
/* 803DFE5C 003DCD9C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DFE60 003DCDA0  4B F5 87 D1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803DFE64:
/* 803DFE64 003DCDA4  7F C3 F3 78 */	mr r3, r30
/* 803DFE68 003DCDA8  4B FF 83 9D */	bl isFinishCloseDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFE6C 003DCDAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DFE70 003DCDB0  41 82 00 24 */	beq .L_803DFE94
/* 803DFE74 003DCDB4  88 1D 00 11 */	lbz r0, 0x11(r29)
/* 803DFE78 003DCDB8  28 00 00 00 */	cmplwi r0, 0
/* 803DFE7C 003DCDBC  41 82 00 18 */	beq .L_803DFE94
/* 803DFE80 003DCDC0  38 00 00 00 */	li r0, 0
/* 803DFE84 003DCDC4  7F C3 F3 78 */	mr r3, r30
/* 803DFE88 003DCDC8  98 1D 00 11 */	stb r0, 0x11(r29)
/* 803DFE8C 003DCDCC  80 9E 0C 34 */	lwz r4, 0xc34(r30)
/* 803DFE90 003DCDD0  4B FF 7F 85 */	bl openDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFl
.L_803DFE94:
/* 803DFE94 003DCDD4  80 7E 0C 00 */	lwz r3, 0xc00(r30)
/* 803DFE98 003DCDD8  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 803DFE9C 003DCDDC  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 803DFEA0 003DCDE0  41 82 00 30 */	beq .L_803DFED0
/* 803DFEA4 003DCDE4  7F C3 F3 78 */	mr r3, r30
/* 803DFEA8 003DCDE8  4B FF 86 21 */	bl closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFEAC 003DCDEC  38 60 00 01 */	li r3, 1
/* 803DFEB0 003DCDF0  38 00 00 00 */	li r0, 0
/* 803DFEB4 003DCDF4  90 7D 00 14 */	stw r3, 0x14(r29)
/* 803DFEB8 003DCDF8  38 80 18 00 */	li r4, 0x1800
/* 803DFEBC 003DCDFC  38 A0 00 00 */	li r5, 0
/* 803DFEC0 003DCE00  98 1D 00 10 */	stb r0, 0x10(r29)
/* 803DFEC4 003DCE04  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DFEC8 003DCE08  4B F5 87 69 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803DFECC 003DCE0C  48 00 00 A4 */	b .L_803DFF70
.L_803DFED0:
/* 803DFED0 003DCE10  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 803DFED4 003DCE14  41 82 00 9C */	beq .L_803DFF70
/* 803DFED8 003DCE18  7F C3 F3 78 */	mr r3, r30
/* 803DFEDC 003DCE1C  4B FF 85 ED */	bl closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFEE0 003DCE20  7F C3 F3 78 */	mr r3, r30
/* 803DFEE4 003DCE24  4B FF 7B 19 */	bl fadeCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFEE8 003DCE28  38 00 00 01 */	li r0, 1
/* 803DFEEC 003DCE2C  7F C3 F3 78 */	mr r3, r30
/* 803DFEF0 003DCE30  90 1D 00 14 */	stw r0, 0x14(r29)
/* 803DFEF4 003DCE34  98 1D 00 10 */	stb r0, 0x10(r29)
/* 803DFEF8 003DCE38  4B FF 82 35 */	bl closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFEFC 003DCE3C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803DFF00 003DCE40  38 80 18 01 */	li r4, 0x1801
/* 803DFF04 003DCE44  38 A0 00 00 */	li r5, 0
/* 803DFF08 003DCE48  4B F5 87 29 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803DFF0C 003DCE4C  48 00 00 64 */	b .L_803DFF70
.L_803DFF10:
/* 803DFF10 003DCE50  7F C3 F3 78 */	mr r3, r30
/* 803DFF14 003DCE54  4B FF 86 15 */	bl isFinishCloseMSG__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFF18 003DCE58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803DFF1C 003DCE5C  41 82 00 54 */	beq .L_803DFF70
/* 803DFF20 003DCE60  88 1D 00 10 */	lbz r0, 0x10(r29)
/* 803DFF24 003DCE64  28 00 00 00 */	cmplwi r0, 0
/* 803DFF28 003DCE68  41 82 00 28 */	beq .L_803DFF50
/* 803DFF2C 003DCE6C  7F A3 EB 78 */	mr r3, r29
/* 803DFF30 003DCE70  7F C4 F3 78 */	mr r4, r30
/* 803DFF34 003DCE74  81 9D 00 00 */	lwz r12, 0(r29)
/* 803DFF38 003DCE78  38 A0 00 04 */	li r5, 4
/* 803DFF3C 003DCE7C  38 C0 00 00 */	li r6, 0
/* 803DFF40 003DCE80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DFF44 003DCE84  7D 89 03 A6 */	mtctr r12
/* 803DFF48 003DCE88  4E 80 04 21 */	bctrl 
/* 803DFF4C 003DCE8C  48 00 00 24 */	b .L_803DFF70
.L_803DFF50:
/* 803DFF50 003DCE90  7F A3 EB 78 */	mr r3, r29
/* 803DFF54 003DCE94  7F C4 F3 78 */	mr r4, r30
/* 803DFF58 003DCE98  81 9D 00 00 */	lwz r12, 0(r29)
/* 803DFF5C 003DCE9C  38 A0 00 0B */	li r5, 0xb
/* 803DFF60 003DCEA0  38 C0 00 00 */	li r6, 0
/* 803DFF64 003DCEA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803DFF68 003DCEA8  7D 89 03 A6 */	mtctr r12
/* 803DFF6C 003DCEAC  4E 80 04 21 */	bctrl 
.L_803DFF70:
/* 803DFF70 003DCEB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803DFF74 003DCEB4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803DFF78 003DCEB8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803DFF7C 003DCEBC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803DFF80 003DCEC0  7C 08 03 A6 */	mtlr r0
/* 803DFF84 003DCEC4  38 21 00 20 */	addi r1, r1, 0x20
/* 803DFF88 003DCEC8  4E 80 00 20 */	blr 

.global __ct__Q33ebi2FS4TMgrFv
__ct__Q33ebi2FS4TMgrFv:
/* 803DFF8C 003DCECC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803DFF90 003DCED0  7C 08 02 A6 */	mflr r0
/* 803DFF94 003DCED4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803DFF98 003DCED8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803DFF9C 003DCEDC  7C 7F 1B 78 */	mr r31, r3
/* 803DFFA0 003DCEE0  4B FF 44 F9 */	bl __ct__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803DFFA4 003DCEE4  38 E0 00 00 */	li r7, 0
/* 803DFFA8 003DCEE8  3C 80 80 4F */	lis r4, "__vt__Q24Game28StateMachine<Q33ebi2FS4TMgr>"@ha
/* 803DFFAC 003DCEEC  90 FF 0B F8 */	stw r7, 0xbf8(r31)
/* 803DFFB0 003DCEF0  3C 60 80 4F */	lis r3, __vt__Q33ebi2FS15FSMStateMachine@ha
/* 803DFFB4 003DCEF4  38 C4 92 C8 */	addi r6, r4, "__vt__Q24Game28StateMachine<Q33ebi2FS4TMgr>"@l
/* 803DFFB8 003DCEF8  38 A0 FF FF */	li r5, -1
/* 803DFFBC 003DCEFC  90 FF 0B FC */	stw r7, 0xbfc(r31)
/* 803DFFC0 003DCF00  38 03 96 60 */	addi r0, r3, __vt__Q33ebi2FS15FSMStateMachine@l
/* 803DFFC4 003DCF04  38 7F 0C 40 */	addi r3, r31, 0xc40
/* 803DFFC8 003DCF08  7F E4 FB 78 */	mr r4, r31
/* 803DFFCC 003DCF0C  90 FF 0C 08 */	stw r7, 0xc08(r31)
/* 803DFFD0 003DCF10  90 FF 0C 0C */	stw r7, 0xc0c(r31)
/* 803DFFD4 003DCF14  90 DF 0C 40 */	stw r6, 0xc40(r31)
/* 803DFFD8 003DCF18  90 BF 0C 58 */	stw r5, 0xc58(r31)
/* 803DFFDC 003DCF1C  90 1F 0C 40 */	stw r0, 0xc40(r31)
/* 803DFFE0 003DCF20  81 9F 0C 40 */	lwz r12, 0xc40(r31)
/* 803DFFE4 003DCF24  81 8C 00 08 */	lwz r12, 8(r12)
/* 803DFFE8 003DCF28  7D 89 03 A6 */	mtctr r12
/* 803DFFEC 003DCF2C  4E 80 04 21 */	bctrl 
/* 803DFFF0 003DCF30  38 7F 0C 40 */	addi r3, r31, 0xc40
/* 803DFFF4 003DCF34  7F E4 FB 78 */	mr r4, r31
/* 803DFFF8 003DCF38  81 9F 0C 40 */	lwz r12, 0xc40(r31)
/* 803DFFFC 003DCF3C  38 A0 00 00 */	li r5, 0
/* 803E0000 003DCF40  38 C0 00 00 */	li r6, 0
/* 803E0004 003DCF44  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E0008 003DCF48  7D 89 03 A6 */	mtctr r12
/* 803E000C 003DCF4C  4E 80 04 21 */	bctrl 
/* 803E0010 003DCF50  38 00 00 00 */	li r0, 0
/* 803E0014 003DCF54  7F E3 FB 78 */	mr r3, r31
/* 803E0018 003DCF58  90 1F 0C 30 */	stw r0, 0xc30(r31)
/* 803E001C 003DCF5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E0020 003DCF60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E0024 003DCF64  7C 08 03 A6 */	mtlr r0
/* 803E0028 003DCF68  38 21 00 10 */	addi r1, r1, 0x10
/* 803E002C 003DCF6C  4E 80 00 20 */	blr 

.global setController__Q33ebi2FS4TMgrFP10Controller
setController__Q33ebi2FS4TMgrFP10Controller:
/* 803E0030 003DCF70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E0034 003DCF74  7C 08 02 A6 */	mflr r0
/* 803E0038 003DCF78  C0 22 18 B4 */	lfs f1, lbl_8051FC14@sda21(r2)
/* 803E003C 003DCF7C  7C 65 1B 78 */	mr r5, r3
/* 803E0040 003DCF80  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E0044 003DCF84  38 E5 0C 30 */	addi r7, r5, 0xc30
/* 803E0048 003DCF88  FC 40 08 90 */	fmr f2, f1
/* 803E004C 003DCF8C  38 C0 00 02 */	li r6, 2
/* 803E0050 003DCF90  90 83 0C 00 */	stw r4, 0xc00(r3)
/* 803E0054 003DCF94  38 65 0C 04 */	addi r3, r5, 0xc04
/* 803E0058 003DCF98  39 00 00 01 */	li r8, 1
/* 803E005C 003DCF9C  80 85 0C 00 */	lwz r4, 0xc00(r5)
/* 803E0060 003DCFA0  38 A0 00 00 */	li r5, 0
/* 803E0064 003DCFA4  4B FE 19 D9 */	bl init__Q23ebi24EUTPadInterface_countNumFP10ControllerllPlQ33ebi24EUTPadInterface_countNum8enumModeff
/* 803E0068 003DCFA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E006C 003DCFAC  7C 08 03 A6 */	mtlr r0
/* 803E0070 003DCFB0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E0074 003DCFB4  4E 80 00 20 */	blr 

.global perseInfo__Q33ebi2FS4TMgrFRQ34Game10MemoryCard14PlayerFileInfo
perseInfo__Q33ebi2FS4TMgrFRQ34Game10MemoryCard14PlayerFileInfo:
/* 803E0078 003DCFB8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 803E007C 003DCFBC  7C 08 02 A6 */	mflr r0
/* 803E0080 003DCFC0  3C A0 88 89 */	lis r5, 0x88888889@ha
/* 803E0084 003DCFC4  90 01 00 64 */	stw r0, 0x64(r1)
/* 803E0088 003DCFC8  BD C1 00 18 */	stmw r14, 0x18(r1)
/* 803E008C 003DCFCC  7C 9E 23 78 */	mr r30, r4
/* 803E0090 003DCFD0  3B E0 00 00 */	li r31, 0
/* 803E0094 003DCFD4  7C 70 1B 78 */	mr r16, r3
/* 803E0098 003DCFD8  3B A5 88 89 */	addi r29, r5, 0x88888889@l
.L_803E009C:
/* 803E009C 003DCFDC  7F C3 F3 78 */	mr r3, r30
/* 803E00A0 003DCFE0  7F E4 FB 78 */	mr r4, r31
/* 803E00A4 003DCFE4  48 06 28 89 */	bl getPlayer__Q34Game10MemoryCard14PlayerFileInfoFi
/* 803E00A8 003DCFE8  7C 7C 1B 78 */	mr r28, r3
/* 803E00AC 003DCFEC  7F C3 F3 78 */	mr r3, r30
/* 803E00B0 003DCFF0  7F E4 FB 78 */	mr r4, r31
/* 803E00B4 003DCFF4  48 06 28 ED */	bl isBrokenFile__Q34Game10MemoryCard14PlayerFileInfoFi
/* 803E00B8 003DCFF8  81 FC 00 30 */	lwz r15, 0x30(r28)
/* 803E00BC 003DCFFC  7C 6E 1B 78 */	mr r14, r3
/* 803E00C0 003DD000  82 5C 00 2C */	lwz r18, 0x2c(r28)
/* 803E00C4 003DD004  7F C3 F3 78 */	mr r3, r30
/* 803E00C8 003DD008  7C 1D 78 16 */	mulhwu r0, r29, r15
/* 803E00CC 003DD00C  82 7C 00 28 */	lwz r19, 0x28(r28)
/* 803E00D0 003DD010  82 9C 00 24 */	lwz r20, 0x24(r28)
/* 803E00D4 003DD014  7F E4 FB 78 */	mr r4, r31
/* 803E00D8 003DD018  82 BC 00 20 */	lwz r21, 0x20(r28)
/* 803E00DC 003DD01C  82 DC 00 18 */	lwz r22, 0x18(r28)
/* 803E00E0 003DD020  54 00 D9 7E */	srwi r0, r0, 5
/* 803E00E4 003DD024  82 FC 00 1C */	lwz r23, 0x1c(r28)
/* 803E00E8 003DD028  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 803E00EC 003DD02C  83 1C 00 14 */	lwz r24, 0x14(r28)
/* 803E00F0 003DD030  83 3C 00 0C */	lwz r25, 0xc(r28)
/* 803E00F4 003DD034  83 5C 00 10 */	lwz r26, 0x10(r28)
/* 803E00F8 003DD038  83 7C 00 08 */	lwz r27, 8(r28)
/* 803E00FC 003DD03C  7E 20 78 50 */	subf r17, r0, r15
/* 803E0100 003DD040  48 06 29 21 */	bl isNewFile__Q34Game10MemoryCard14PlayerFileInfoFi
/* 803E0104 003DD044  98 70 0B 01 */	stb r3, 0xb01(r16)
/* 803E0108 003DD048  7C 1D 78 16 */	mulhwu r0, r29, r15
/* 803E010C 003DD04C  38 81 00 08 */	addi r4, r1, 8
/* 803E0110 003DD050  93 70 0B 04 */	stw r27, 0xb04(r16)
/* 803E0114 003DD054  93 50 0B 08 */	stw r26, 0xb08(r16)
/* 803E0118 003DD058  93 30 0B 0C */	stw r25, 0xb0c(r16)
/* 803E011C 003DD05C  54 00 D9 7E */	srwi r0, r0, 5
/* 803E0120 003DD060  93 10 0B 10 */	stw r24, 0xb10(r16)
/* 803E0124 003DD064  92 F0 0B 18 */	stw r23, 0xb18(r16)
/* 803E0128 003DD068  92 D0 0B 14 */	stw r22, 0xb14(r16)
/* 803E012C 003DD06C  92 B0 0B 1C */	stw r21, 0xb1c(r16)
/* 803E0130 003DD070  92 90 0B 20 */	stw r20, 0xb20(r16)
/* 803E0134 003DD074  92 70 0B 24 */	stw r19, 0xb24(r16)
/* 803E0138 003DD078  92 50 0B 28 */	stw r18, 0xb28(r16)
/* 803E013C 003DD07C  90 10 0B 2C */	stw r0, 0xb2c(r16)
/* 803E0140 003DD080  92 30 0B 30 */	stw r17, 0xb30(r16)
/* 803E0144 003DD084  99 D0 0B 00 */	stb r14, 0xb00(r16)
/* 803E0148 003DD088  80 7C 00 28 */	lwz r3, 0x28(r28)
/* 803E014C 003DD08C  4B FE 1D 6D */	bl EUTDebug_Tag32ToName__3ebiFUlPc
/* 803E0150 003DD090  3B FF 00 01 */	addi r31, r31, 1
/* 803E0154 003DD094  3A 10 00 34 */	addi r16, r16, 0x34
/* 803E0158 003DD098  2C 1F 00 03 */	cmpwi r31, 3
/* 803E015C 003DD09C  41 80 FF 40 */	blt .L_803E009C
/* 803E0160 003DD0A0  B9 C1 00 18 */	lmw r14, 0x18(r1)
/* 803E0164 003DD0A4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803E0168 003DD0A8  7C 08 03 A6 */	mtlr r0
/* 803E016C 003DD0AC  38 21 00 60 */	addi r1, r1, 0x60
/* 803E0170 003DD0B0  4E 80 00 20 */	blr 

.global update__Q33ebi2FS4TMgrFv
update__Q33ebi2FS4TMgrFv:
/* 803E0174 003DD0B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E0178 003DD0B8  7C 08 02 A6 */	mflr r0
/* 803E017C 003DD0BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E0180 003DD0C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E0184 003DD0C4  7C 7F 1B 78 */	mr r31, r3
/* 803E0188 003DD0C8  38 7F 0C 40 */	addi r3, r31, 0xc40
/* 803E018C 003DD0CC  81 9F 0C 40 */	lwz r12, 0xc40(r31)
/* 803E0190 003DD0D0  7F E4 FB 78 */	mr r4, r31
/* 803E0194 003DD0D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803E0198 003DD0D8  7D 89 03 A6 */	mtctr r12
/* 803E019C 003DD0DC  4E 80 04 21 */	bctrl 
/* 803E01A0 003DD0E0  7F E3 FB 78 */	mr r3, r31
/* 803E01A4 003DD0E4  48 00 02 A5 */	bl getStateID__Q33ebi2FS4TMgrFv
/* 803E01A8 003DD0E8  2C 03 00 00 */	cmpwi r3, 0
/* 803E01AC 003DD0EC  41 82 00 4C */	beq .L_803E01F8
/* 803E01B0 003DD0F0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E01B4 003DD0F4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E01B8 003DD0F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803E01BC 003DD0FC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E01C0 003DD100  7D 89 03 A6 */	mtctr r12
/* 803E01C4 003DD104  4E 80 04 21 */	bctrl 
/* 803E01C8 003DD108  7F E3 FB 78 */	mr r3, r31
/* 803E01CC 003DD10C  48 00 01 AD */	bl checkAndTransitNoCard___Q33ebi2FS4TMgrFv
/* 803E01D0 003DD110  7F E3 FB 78 */	mr r3, r31
/* 803E01D4 003DD114  81 9F 00 00 */	lwz r12, 0(r31)
/* 803E01D8 003DD118  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803E01DC 003DD11C  7D 89 03 A6 */	mtctr r12
/* 803E01E0 003DD120  4E 80 04 21 */	bctrl 
/* 803E01E4 003DD124  80 7F 0B F8 */	lwz r3, 0xbf8(r31)
/* 803E01E8 003DD128  28 03 00 00 */	cmplwi r3, 0
/* 803E01EC 003DD12C  41 82 00 0C */	beq .L_803E01F8
/* 803E01F0 003DD130  38 03 FF FF */	addi r0, r3, -1
/* 803E01F4 003DD134  90 1F 0B F8 */	stw r0, 0xbf8(r31)
.L_803E01F8:
/* 803E01F8 003DD138  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E01FC 003DD13C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E0200 003DD140  7C 08 03 A6 */	mtlr r0
/* 803E0204 003DD144  38 21 00 10 */	addi r1, r1, 0x10
/* 803E0208 003DD148  4E 80 00 20 */	blr 

.global draw__Q33ebi2FS4TMgrFv
draw__Q33ebi2FS4TMgrFv:
/* 803E020C 003DD14C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E0210 003DD150  7C 08 02 A6 */	mflr r0
/* 803E0214 003DD154  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E0218 003DD158  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E021C 003DD15C  7C 7F 1B 78 */	mr r31, r3
/* 803E0220 003DD160  48 00 02 29 */	bl getStateID__Q33ebi2FS4TMgrFv
/* 803E0224 003DD164  2C 03 00 00 */	cmpwi r3, 0
/* 803E0228 003DD168  41 82 00 18 */	beq .L_803E0240
/* 803E022C 003DD16C  7F E3 FB 78 */	mr r3, r31
/* 803E0230 003DD170  81 9F 00 00 */	lwz r12, 0(r31)
/* 803E0234 003DD174  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E0238 003DD178  7D 89 03 A6 */	mtctr r12
/* 803E023C 003DD17C  4E 80 04 21 */	bctrl 
.L_803E0240:
/* 803E0240 003DD180  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E0244 003DD184  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E0248 003DD188  7C 08 03 A6 */	mtlr r0
/* 803E024C 003DD18C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E0250 003DD190  4E 80 00 20 */	blr 

.global startSeq__Q33ebi2FS4TMgrFv
startSeq__Q33ebi2FS4TMgrFv:
/* 803E0254 003DD194  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E0258 003DD198  7C 08 02 A6 */	mflr r0
/* 803E025C 003DD19C  7C 64 1B 78 */	mr r4, r3
/* 803E0260 003DD1A0  38 A0 00 01 */	li r5, 1
/* 803E0264 003DD1A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E0268 003DD1A8  38 00 00 01 */	li r0, 1
/* 803E026C 003DD1AC  38 C0 00 00 */	li r6, 0
/* 803E0270 003DD1B0  98 03 0C 3C */	stb r0, 0xc3c(r3)
/* 803E0274 003DD1B4  38 64 0C 40 */	addi r3, r4, 0xc40
/* 803E0278 003DD1B8  81 84 0C 40 */	lwz r12, 0xc40(r4)
/* 803E027C 003DD1BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E0280 003DD1C0  7D 89 03 A6 */	mtctr r12
/* 803E0284 003DD1C4  4E 80 04 21 */	bctrl 
/* 803E0288 003DD1C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E028C 003DD1CC  7C 08 03 A6 */	mtlr r0
/* 803E0290 003DD1D0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E0294 003DD1D4  4E 80 00 20 */	blr 

.global forceQuitSeq__Q33ebi2FS4TMgrFv
forceQuitSeq__Q33ebi2FS4TMgrFv:
/* 803E0298 003DD1D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E029C 003DD1DC  7C 08 02 A6 */	mflr r0
/* 803E02A0 003DD1E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E02A4 003DD1E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E02A8 003DD1E8  7C 7F 1B 78 */	mr r31, r3
/* 803E02AC 003DD1EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E02B0 003DD1F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E02B4 003DD1F4  7D 89 03 A6 */	mtctr r12
/* 803E02B8 003DD1F8  4E 80 04 21 */	bctrl 
/* 803E02BC 003DD1FC  38 7F 0C 40 */	addi r3, r31, 0xc40
/* 803E02C0 003DD200  7F E4 FB 78 */	mr r4, r31
/* 803E02C4 003DD204  81 9F 0C 40 */	lwz r12, 0xc40(r31)
/* 803E02C8 003DD208  38 A0 00 00 */	li r5, 0
/* 803E02CC 003DD20C  38 C0 00 00 */	li r6, 0
/* 803E02D0 003DD210  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E02D4 003DD214  7D 89 03 A6 */	mtctr r12
/* 803E02D8 003DD218  4E 80 04 21 */	bctrl 
/* 803E02DC 003DD21C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E02E0 003DD220  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E02E4 003DD224  7C 08 03 A6 */	mtlr r0
/* 803E02E8 003DD228  38 21 00 10 */	addi r1, r1, 0x10
/* 803E02EC 003DD22C  4E 80 00 20 */	blr 

.global isFinish__Q33ebi2FS4TMgrFv
isFinish__Q33ebi2FS4TMgrFv:
/* 803E02F0 003DD230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E02F4 003DD234  7C 08 02 A6 */	mflr r0
/* 803E02F8 003DD238  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E02FC 003DD23C  48 00 01 4D */	bl getStateID__Q33ebi2FS4TMgrFv
/* 803E0300 003DD240  7C 60 00 34 */	cntlzw r0, r3
/* 803E0304 003DD244  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 803E0308 003DD248  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E030C 003DD24C  7C 08 03 A6 */	mtlr r0
/* 803E0310 003DD250  38 21 00 10 */	addi r1, r1, 0x10
/* 803E0314 003DD254  4E 80 00 20 */	blr 

.global goEnd___Q33ebi2FS4TMgrFQ43ebi2FS4TMgr7enumEnd
goEnd___Q33ebi2FS4TMgrFQ43ebi2FS4TMgr7enumEnd:
/* 803E0318 003DD258  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E031C 003DD25C  7C 08 02 A6 */	mflr r0
/* 803E0320 003DD260  38 A0 00 00 */	li r5, 0
/* 803E0324 003DD264  38 C0 00 00 */	li r6, 0
/* 803E0328 003DD268  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E032C 003DD26C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E0330 003DD270  7C 7F 1B 78 */	mr r31, r3
/* 803E0334 003DD274  90 83 0C 38 */	stw r4, 0xc38(r3)
/* 803E0338 003DD278  38 7F 0C 40 */	addi r3, r31, 0xc40
/* 803E033C 003DD27C  7F E4 FB 78 */	mr r4, r31
/* 803E0340 003DD280  81 9F 0C 40 */	lwz r12, 0xc40(r31)
/* 803E0344 003DD284  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E0348 003DD288  7D 89 03 A6 */	mtctr r12
/* 803E034C 003DD28C  4E 80 04 21 */	bctrl 
/* 803E0350 003DD290  7F E3 FB 78 */	mr r3, r31
/* 803E0354 003DD294  81 9F 00 00 */	lwz r12, 0(r31)
/* 803E0358 003DD298  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E035C 003DD29C  7D 89 03 A6 */	mtctr r12
/* 803E0360 003DD2A0  4E 80 04 21 */	bctrl 
/* 803E0364 003DD2A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E0368 003DD2A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E036C 003DD2AC  7C 08 03 A6 */	mtlr r0
/* 803E0370 003DD2B0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E0374 003DD2B4  4E 80 00 20 */	blr 

.global checkAndTransitNoCard___Q33ebi2FS4TMgrFv
checkAndTransitNoCard___Q33ebi2FS4TMgrFv:
/* 803E0378 003DD2B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E037C 003DD2BC  7C 08 02 A6 */	mflr r0
/* 803E0380 003DD2C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E0384 003DD2C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E0388 003DD2C8  93 C1 00 08 */	stw r30, 8(r1)
/* 803E038C 003DD2CC  7C 7E 1B 78 */	mr r30, r3
/* 803E0390 003DD2D0  88 03 0C 3C */	lbz r0, 0xc3c(r3)
/* 803E0394 003DD2D4  28 00 00 00 */	cmplwi r0, 0
/* 803E0398 003DD2D8  41 82 00 98 */	beq .L_803E0430
/* 803E039C 003DD2DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E03A0 003DD2E0  3B E0 00 00 */	li r31, 0
/* 803E03A4 003DD2E4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E03A8 003DD2E8  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803E03AC 003DD2EC  2C 00 00 00 */	cmpwi r0, 0
/* 803E03B0 003DD2F0  40 82 00 14 */	bne .L_803E03C4
/* 803E03B4 003DD2F4  48 06 0C 09 */	bl checkStatus__13MemoryCardMgrFv
/* 803E03B8 003DD2F8  28 03 00 0B */	cmplwi r3, 0xb
/* 803E03BC 003DD2FC  41 82 00 08 */	beq .L_803E03C4
/* 803E03C0 003DD300  3B E0 00 01 */	li r31, 1
.L_803E03C4:
/* 803E03C4 003DD304  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803E03C8 003DD308  41 82 00 20 */	beq .L_803E03E8
/* 803E03CC 003DD30C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E03D0 003DD310  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E03D4 003DD314  48 06 57 39 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803E03D8 003DD318  2C 03 00 00 */	cmpwi r3, 0
/* 803E03DC 003DD31C  40 82 00 0C */	bne .L_803E03E8
/* 803E03E0 003DD320  38 00 00 01 */	li r0, 1
/* 803E03E4 003DD324  48 00 00 08 */	b .L_803E03EC
.L_803E03E8:
/* 803E03E8 003DD328  38 00 00 00 */	li r0, 0
.L_803E03EC:
/* 803E03EC 003DD32C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803E03F0 003DD330  41 82 00 40 */	beq .L_803E0430
/* 803E03F4 003DD334  38 00 00 01 */	li r0, 1
/* 803E03F8 003DD338  38 7E 0C 40 */	addi r3, r30, 0xc40
/* 803E03FC 003DD33C  90 1E 0C 38 */	stw r0, 0xc38(r30)
/* 803E0400 003DD340  7F C4 F3 78 */	mr r4, r30
/* 803E0404 003DD344  38 A0 00 00 */	li r5, 0
/* 803E0408 003DD348  38 C0 00 00 */	li r6, 0
/* 803E040C 003DD34C  81 9E 0C 40 */	lwz r12, 0xc40(r30)
/* 803E0410 003DD350  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E0414 003DD354  7D 89 03 A6 */	mtctr r12
/* 803E0418 003DD358  4E 80 04 21 */	bctrl 
/* 803E041C 003DD35C  7F C3 F3 78 */	mr r3, r30
/* 803E0420 003DD360  81 9E 00 00 */	lwz r12, 0(r30)
/* 803E0424 003DD364  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E0428 003DD368  7D 89 03 A6 */	mtctr r12
/* 803E042C 003DD36C  4E 80 04 21 */	bctrl 
.L_803E0430:
/* 803E0430 003DD370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E0434 003DD374  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E0438 003DD378  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E043C 003DD37C  7C 08 03 A6 */	mtlr r0
/* 803E0440 003DD380  38 21 00 10 */	addi r1, r1, 0x10
/* 803E0444 003DD384  4E 80 00 20 */	blr 

.global getStateID__Q33ebi2FS4TMgrFv
getStateID__Q33ebi2FS4TMgrFv:
/* 803E0448 003DD388  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E044C 003DD38C  7C 08 02 A6 */	mflr r0
/* 803E0450 003DD390  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E0454 003DD394  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E0458 003DD398  7C 7F 1B 78 */	mr r31, r3
/* 803E045C 003DD39C  80 03 0C 5C */	lwz r0, 0xc5c(r3)
/* 803E0460 003DD3A0  28 00 00 00 */	cmplwi r0, 0
/* 803E0464 003DD3A4  40 82 00 20 */	bne .L_803E0484
/* 803E0468 003DD3A8  3C 60 80 49 */	lis r3, lbl_80496FE4@ha
/* 803E046C 003DD3AC  3C A0 80 49 */	lis r5, lbl_80497000@ha
/* 803E0470 003DD3B0  38 63 6F E4 */	addi r3, r3, lbl_80496FE4@l
/* 803E0474 003DD3B4  38 80 03 DC */	li r4, 0x3dc
/* 803E0478 003DD3B8  38 A5 70 00 */	addi r5, r5, lbl_80497000@l
/* 803E047C 003DD3BC  4C C6 31 82 */	crclr 6
/* 803E0480 003DD3C0  4B C4 A1 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E0484:
/* 803E0484 003DD3C4  80 7F 0C 5C */	lwz r3, 0xc5c(r31)
/* 803E0488 003DD3C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E048C 003DD3CC  80 63 00 04 */	lwz r3, 4(r3)
/* 803E0490 003DD3D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E0494 003DD3D4  7C 08 03 A6 */	mtlr r0
/* 803E0498 003DD3D8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E049C 003DD3DC  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803E04A0 003DD3E0  4E 80 00 20 */	blr 

.global do_exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
do_exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr:
/* 803E04A4 003DD3E4  4E 80 00 20 */	blr 

.global do_decide__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr
do_decide__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr:
/* 803E04A8 003DD3E8  4E 80 00 20 */	blr 

.global do_init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg
do_init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg:
/* 803E04AC 003DD3EC  4E 80 00 20 */	blr 

.global do_close__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
do_close__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr:
/* 803E04B0 003DD3F0  4E 80 00 20 */	blr 

.global "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
"transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg":
/* 803E04B4 003DD3F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E04B8 003DD3F8  7C 08 02 A6 */	mflr r0
/* 803E04BC 003DD3FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E04C0 003DD400  80 63 00 08 */	lwz r3, 8(r3)
/* 803E04C4 003DD404  81 83 00 00 */	lwz r12, 0(r3)
/* 803E04C8 003DD408  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E04CC 003DD40C  7D 89 03 A6 */	mtctr r12
/* 803E04D0 003DD410  4E 80 04 21 */	bctrl 
/* 803E04D4 003DD414  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E04D8 003DD418  7C 08 03 A6 */	mtlr r0
/* 803E04DC 003DD41C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E04E0 003DD420  4E 80 00 20 */	blr 

.global "start__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
"start__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg":
/* 803E04E4 003DD424  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E04E8 003DD428  7C 08 02 A6 */	mflr r0
/* 803E04EC 003DD42C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E04F0 003DD430  38 00 00 00 */	li r0, 0
/* 803E04F4 003DD434  90 04 0C 5C */	stw r0, 0xc5c(r4)
/* 803E04F8 003DD438  81 83 00 00 */	lwz r12, 0(r3)
/* 803E04FC 003DD43C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E0500 003DD440  7D 89 03 A6 */	mtctr r12
/* 803E0504 003DD444  4E 80 04 21 */	bctrl 
/* 803E0508 003DD448  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E050C 003DD44C  7C 08 03 A6 */	mtlr r0
/* 803E0510 003DD450  38 21 00 10 */	addi r1, r1, 0x10
/* 803E0514 003DD454  4E 80 00 20 */	blr 

.global __dt__Q43ebi6Screen10FileSelect11TMainScreenFv
__dt__Q43ebi6Screen10FileSelect11TMainScreenFv:
/* 803E0518 003DD458  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E051C 003DD45C  7C 08 02 A6 */	mflr r0
/* 803E0520 003DD460  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E0524 003DD464  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E0528 003DD468  7C 9F 23 78 */	mr r31, r4
/* 803E052C 003DD46C  93 C1 00 08 */	stw r30, 8(r1)
/* 803E0530 003DD470  7C 7E 1B 79 */	or. r30, r3, r3
/* 803E0534 003DD474  41 82 0B BC */	beq .L_803E10F0
/* 803E0538 003DD478  3C 60 80 4F */	lis r3, __vt__Q43ebi6Screen10FileSelect11TMainScreen@ha
/* 803E053C 003DD47C  34 1E 0A B0 */	addic. r0, r30, 0xab0
/* 803E0540 003DD480  38 03 8D 8C */	addi r0, r3, __vt__Q43ebi6Screen10FileSelect11TMainScreen@l
/* 803E0544 003DD484  90 1E 00 00 */	stw r0, 0(r30)
/* 803E0548 003DD488  41 82 00 40 */	beq .L_803E0588
/* 803E054C 003DD48C  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect16T2DFiledeletingM@ha
/* 803E0550 003DD490  34 1E 0A B0 */	addic. r0, r30, 0xab0
/* 803E0554 003DD494  38 63 8E 50 */	addi r3, r3, __vt__Q35efx2d10FileSelect16T2DFiledeletingM@l
/* 803E0558 003DD498  90 7E 0A B0 */	stw r3, 0xab0(r30)
/* 803E055C 003DD49C  38 03 00 18 */	addi r0, r3, 0x18
/* 803E0560 003DD4A0  90 1E 0A B8 */	stw r0, 0xab8(r30)
/* 803E0564 003DD4A4  41 82 00 24 */	beq .L_803E0588
/* 803E0568 003DD4A8  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803E056C 003DD4AC  38 7E 0A B8 */	addi r3, r30, 0xab8
/* 803E0570 003DD4B0  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803E0574 003DD4B4  38 80 00 00 */	li r4, 0
/* 803E0578 003DD4B8  90 BE 0A B0 */	stw r5, 0xab0(r30)
/* 803E057C 003DD4BC  38 05 00 18 */	addi r0, r5, 0x18
/* 803E0580 003DD4C0  90 1E 0A B8 */	stw r0, 0xab8(r30)
/* 803E0584 003DD4C4  4B CA F7 19 */	bl __dt__18JPAEmitterCallBackFv
.L_803E0588:
/* 803E0588 003DD4C8  34 1E 0A 9C */	addic. r0, r30, 0xa9c
/* 803E058C 003DD4CC  41 82 00 40 */	beq .L_803E05CC
/* 803E0590 003DD4D0  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect15T2DFiledeleting@ha
/* 803E0594 003DD4D4  34 1E 0A 9C */	addic. r0, r30, 0xa9c
/* 803E0598 003DD4D8  38 63 8E 88 */	addi r3, r3, __vt__Q35efx2d10FileSelect15T2DFiledeleting@l
/* 803E059C 003DD4DC  90 7E 0A 9C */	stw r3, 0xa9c(r30)
/* 803E05A0 003DD4E0  38 03 00 18 */	addi r0, r3, 0x18
/* 803E05A4 003DD4E4  90 1E 0A A4 */	stw r0, 0xaa4(r30)
/* 803E05A8 003DD4E8  41 82 00 24 */	beq .L_803E05CC
/* 803E05AC 003DD4EC  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803E05B0 003DD4F0  38 7E 0A A4 */	addi r3, r30, 0xaa4
/* 803E05B4 003DD4F4  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803E05B8 003DD4F8  38 80 00 00 */	li r4, 0
/* 803E05BC 003DD4FC  90 BE 0A 9C */	stw r5, 0xa9c(r30)
/* 803E05C0 003DD500  38 05 00 18 */	addi r0, r5, 0x18
/* 803E05C4 003DD504  90 1E 0A A4 */	stw r0, 0xaa4(r30)
/* 803E05C8 003DD508  4B CA F6 D5 */	bl __dt__18JPAEmitterCallBackFv
.L_803E05CC:
/* 803E05CC 003DD50C  34 1E 0A 70 */	addic. r0, r30, 0xa70
/* 803E05D0 003DD510  41 82 00 5C */	beq .L_803E062C
/* 803E05D4 003DD514  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect12T2DFilecopyM@ha
/* 803E05D8 003DD518  34 1E 0A 70 */	addic. r0, r30, 0xa70
/* 803E05DC 003DD51C  38 63 8E C0 */	addi r3, r3, __vt__Q35efx2d10FileSelect12T2DFilecopyM@l
/* 803E05E0 003DD520  90 7E 0A 70 */	stw r3, 0xa70(r30)
/* 803E05E4 003DD524  38 03 00 18 */	addi r0, r3, 0x18
/* 803E05E8 003DD528  90 1E 0A 78 */	stw r0, 0xa78(r30)
/* 803E05EC 003DD52C  41 82 00 40 */	beq .L_803E062C
/* 803E05F0 003DD530  3C 60 80 4E */	lis r3, __vt__Q35efx2d10FileSelect15T2DFilecopyBase@ha
/* 803E05F4 003DD534  34 1E 0A 70 */	addic. r0, r30, 0xa70
/* 803E05F8 003DD538  38 63 75 60 */	addi r3, r3, __vt__Q35efx2d10FileSelect15T2DFilecopyBase@l
/* 803E05FC 003DD53C  90 7E 0A 70 */	stw r3, 0xa70(r30)
/* 803E0600 003DD540  38 03 00 18 */	addi r0, r3, 0x18
/* 803E0604 003DD544  90 1E 0A 78 */	stw r0, 0xa78(r30)
/* 803E0608 003DD548  41 82 00 24 */	beq .L_803E062C
/* 803E060C 003DD54C  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803E0610 003DD550  38 7E 0A 78 */	addi r3, r30, 0xa78
/* 803E0614 003DD554  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803E0618 003DD558  38 80 00 00 */	li r4, 0
/* 803E061C 003DD55C  90 BE 0A 70 */	stw r5, 0xa70(r30)
/* 803E0620 003DD560  38 05 00 18 */	addi r0, r5, 0x18
/* 803E0624 003DD564  90 1E 0A 78 */	stw r0, 0xa78(r30)
/* 803E0628 003DD568  4B CA F6 75 */	bl __dt__18JPAEmitterCallBackFv
.L_803E062C:
/* 803E062C 003DD56C  34 1E 0A 5C */	addic. r0, r30, 0xa5c
/* 803E0630 003DD570  41 82 00 5C */	beq .L_803E068C
/* 803E0634 003DD574  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect11T2DFilecopy@ha
/* 803E0638 003DD578  34 1E 0A 5C */	addic. r0, r30, 0xa5c
/* 803E063C 003DD57C  38 63 8E F8 */	addi r3, r3, __vt__Q35efx2d10FileSelect11T2DFilecopy@l
/* 803E0640 003DD580  90 7E 0A 5C */	stw r3, 0xa5c(r30)
/* 803E0644 003DD584  38 03 00 18 */	addi r0, r3, 0x18
/* 803E0648 003DD588  90 1E 0A 64 */	stw r0, 0xa64(r30)
/* 803E064C 003DD58C  41 82 00 40 */	beq .L_803E068C
/* 803E0650 003DD590  3C 60 80 4E */	lis r3, __vt__Q35efx2d10FileSelect15T2DFilecopyBase@ha
/* 803E0654 003DD594  34 1E 0A 5C */	addic. r0, r30, 0xa5c
/* 803E0658 003DD598  38 63 75 60 */	addi r3, r3, __vt__Q35efx2d10FileSelect15T2DFilecopyBase@l
/* 803E065C 003DD59C  90 7E 0A 5C */	stw r3, 0xa5c(r30)
/* 803E0660 003DD5A0  38 03 00 18 */	addi r0, r3, 0x18
/* 803E0664 003DD5A4  90 1E 0A 64 */	stw r0, 0xa64(r30)
/* 803E0668 003DD5A8  41 82 00 24 */	beq .L_803E068C
/* 803E066C 003DD5AC  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803E0670 003DD5B0  38 7E 0A 64 */	addi r3, r30, 0xa64
/* 803E0674 003DD5B4  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803E0678 003DD5B8  38 80 00 00 */	li r4, 0
/* 803E067C 003DD5BC  90 BE 0A 5C */	stw r5, 0xa5c(r30)
/* 803E0680 003DD5C0  38 05 00 18 */	addi r0, r5, 0x18
/* 803E0684 003DD5C4  90 1E 0A 64 */	stw r0, 0xa64(r30)
/* 803E0688 003DD5C8  4B CA F6 15 */	bl __dt__18JPAEmitterCallBackFv
.L_803E068C:
/* 803E068C 003DD5CC  34 1E 0A 24 */	addic. r0, r30, 0xa24
/* 803E0690 003DD5D0  41 82 00 64 */	beq .L_803E06F4
/* 803E0694 003DD5D4  34 1E 0A 24 */	addic. r0, r30, 0xa24
/* 803E0698 003DD5D8  41 82 00 5C */	beq .L_803E06F4
/* 803E069C 003DD5DC  3C 60 80 4E */	lis r3, __vt__Q25efx2d9T2DCursor@ha
/* 803E06A0 003DD5E0  34 1E 0A 24 */	addic. r0, r30, 0xa24
/* 803E06A4 003DD5E4  38 63 76 48 */	addi r3, r3, __vt__Q25efx2d9T2DCursor@l
/* 803E06A8 003DD5E8  90 7E 0A 24 */	stw r3, 0xa24(r30)
/* 803E06AC 003DD5EC  38 03 00 18 */	addi r0, r3, 0x18
/* 803E06B0 003DD5F0  90 1E 0A 2C */	stw r0, 0xa2c(r30)
/* 803E06B4 003DD5F4  41 82 00 40 */	beq .L_803E06F4
/* 803E06B8 003DD5F8  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803E06BC 003DD5FC  34 1E 0A 24 */	addic. r0, r30, 0xa24
/* 803E06C0 003DD600  38 63 73 CC */	addi r3, r3, __vt__Q25efx2d9TChasePos@l
/* 803E06C4 003DD604  90 7E 0A 24 */	stw r3, 0xa24(r30)
/* 803E06C8 003DD608  38 03 00 18 */	addi r0, r3, 0x18
/* 803E06CC 003DD60C  90 1E 0A 2C */	stw r0, 0xa2c(r30)
/* 803E06D0 003DD610  41 82 00 24 */	beq .L_803E06F4
/* 803E06D4 003DD614  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803E06D8 003DD618  38 7E 0A 2C */	addi r3, r30, 0xa2c
/* 803E06DC 003DD61C  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803E06E0 003DD620  38 80 00 00 */	li r4, 0
/* 803E06E4 003DD624  90 BE 0A 24 */	stw r5, 0xa24(r30)
/* 803E06E8 003DD628  38 05 00 18 */	addi r0, r5, 0x18
/* 803E06EC 003DD62C  90 1E 0A 2C */	stw r0, 0xa2c(r30)
/* 803E06F0 003DD630  4B CA F5 AD */	bl __dt__18JPAEmitterCallBackFv
.L_803E06F4:
/* 803E06F4 003DD634  34 1E 09 EC */	addic. r0, r30, 0x9ec
/* 803E06F8 003DD638  41 82 00 64 */	beq .L_803E075C
/* 803E06FC 003DD63C  34 1E 09 EC */	addic. r0, r30, 0x9ec
/* 803E0700 003DD640  41 82 00 5C */	beq .L_803E075C
/* 803E0704 003DD644  3C 60 80 4E */	lis r3, __vt__Q25efx2d9T2DCursor@ha
/* 803E0708 003DD648  34 1E 09 EC */	addic. r0, r30, 0x9ec
/* 803E070C 003DD64C  38 63 76 48 */	addi r3, r3, __vt__Q25efx2d9T2DCursor@l
/* 803E0710 003DD650  90 7E 09 EC */	stw r3, 0x9ec(r30)
/* 803E0714 003DD654  38 03 00 18 */	addi r0, r3, 0x18
/* 803E0718 003DD658  90 1E 09 F4 */	stw r0, 0x9f4(r30)
/* 803E071C 003DD65C  41 82 00 40 */	beq .L_803E075C
/* 803E0720 003DD660  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803E0724 003DD664  34 1E 09 EC */	addic. r0, r30, 0x9ec
/* 803E0728 003DD668  38 63 73 CC */	addi r3, r3, __vt__Q25efx2d9TChasePos@l
/* 803E072C 003DD66C  90 7E 09 EC */	stw r3, 0x9ec(r30)
/* 803E0730 003DD670  38 03 00 18 */	addi r0, r3, 0x18
/* 803E0734 003DD674  90 1E 09 F4 */	stw r0, 0x9f4(r30)
/* 803E0738 003DD678  41 82 00 24 */	beq .L_803E075C
/* 803E073C 003DD67C  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803E0740 003DD680  38 7E 09 F4 */	addi r3, r30, 0x9f4
/* 803E0744 003DD684  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803E0748 003DD688  38 80 00 00 */	li r4, 0
/* 803E074C 003DD68C  90 BE 09 EC */	stw r5, 0x9ec(r30)
/* 803E0750 003DD690  38 05 00 18 */	addi r0, r5, 0x18
/* 803E0754 003DD694  90 1E 09 F4 */	stw r0, 0x9f4(r30)
/* 803E0758 003DD698  4B CA F5 45 */	bl __dt__18JPAEmitterCallBackFv
.L_803E075C:
/* 803E075C 003DD69C  3C 80 80 3D */	lis r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803E0760 003DD6A0  38 7E 09 54 */	addi r3, r30, 0x954
/* 803E0764 003DD6A4  38 84 F7 E4 */	addi r4, r4, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803E0768 003DD6A8  38 A0 00 40 */	li r5, 0x40
/* 803E076C 003DD6AC  38 C0 00 02 */	li r6, 2
/* 803E0770 003DD6B0  4B CE 10 55 */	bl __destroy_arr
/* 803E0774 003DD6B4  34 1E 09 08 */	addic. r0, r30, 0x908
/* 803E0778 003DD6B8  41 82 00 58 */	beq .L_803E07D0
/* 803E077C 003DD6BC  3C 60 80 4F */	lis r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803E0780 003DD6C0  34 1E 09 08 */	addic. r0, r30, 0x908
/* 803E0784 003DD6C4  38 03 8A 54 */	addi r0, r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803E0788 003DD6C8  90 1E 09 08 */	stw r0, 0x908(r30)
/* 803E078C 003DD6CC  41 82 00 44 */	beq .L_803E07D0
/* 803E0790 003DD6D0  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0794 003DD6D4  34 1E 09 08 */	addic. r0, r30, 0x908
/* 803E0798 003DD6D8  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E079C 003DD6DC  90 1E 09 08 */	stw r0, 0x908(r30)
/* 803E07A0 003DD6E0  41 82 00 30 */	beq .L_803E07D0
/* 803E07A4 003DD6E4  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E07A8 003DD6E8  34 1E 09 08 */	addic. r0, r30, 0x908
/* 803E07AC 003DD6EC  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E07B0 003DD6F0  90 1E 09 08 */	stw r0, 0x908(r30)
/* 803E07B4 003DD6F4  41 82 00 1C */	beq .L_803E07D0
/* 803E07B8 003DD6F8  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E07BC 003DD6FC  38 7E 09 08 */	addi r3, r30, 0x908
/* 803E07C0 003DD700  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E07C4 003DD704  38 80 00 00 */	li r4, 0
/* 803E07C8 003DD708  90 1E 09 08 */	stw r0, 0x908(r30)
/* 803E07CC 003DD70C  48 03 0D BD */	bl __dt__5CNodeFv
.L_803E07D0:
/* 803E07D0 003DD710  34 1E 08 BC */	addic. r0, r30, 0x8bc
/* 803E07D4 003DD714  41 82 00 58 */	beq .L_803E082C
/* 803E07D8 003DD718  3C 60 80 4F */	lis r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803E07DC 003DD71C  34 1E 08 BC */	addic. r0, r30, 0x8bc
/* 803E07E0 003DD720  38 03 8A 54 */	addi r0, r3, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803E07E4 003DD724  90 1E 08 BC */	stw r0, 0x8bc(r30)
/* 803E07E8 003DD728  41 82 00 44 */	beq .L_803E082C
/* 803E07EC 003DD72C  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E07F0 003DD730  34 1E 08 BC */	addic. r0, r30, 0x8bc
/* 803E07F4 003DD734  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E07F8 003DD738  90 1E 08 BC */	stw r0, 0x8bc(r30)
/* 803E07FC 003DD73C  41 82 00 30 */	beq .L_803E082C
/* 803E0800 003DD740  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0804 003DD744  34 1E 08 BC */	addic. r0, r30, 0x8bc
/* 803E0808 003DD748  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E080C 003DD74C  90 1E 08 BC */	stw r0, 0x8bc(r30)
/* 803E0810 003DD750  41 82 00 1C */	beq .L_803E082C
/* 803E0814 003DD754  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0818 003DD758  38 7E 08 BC */	addi r3, r30, 0x8bc
/* 803E081C 003DD75C  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0820 003DD760  38 80 00 00 */	li r4, 0
/* 803E0824 003DD764  90 1E 08 BC */	stw r0, 0x8bc(r30)
/* 803E0828 003DD768  48 03 0D 61 */	bl __dt__5CNodeFv
.L_803E082C:
/* 803E082C 003DD76C  34 1E 08 9C */	addic. r0, r30, 0x89c
/* 803E0830 003DD770  41 82 00 58 */	beq .L_803E0888
/* 803E0834 003DD774  3C 60 80 4F */	lis r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803E0838 003DD778  34 1E 08 9C */	addic. r0, r30, 0x89c
/* 803E083C 003DD77C  38 03 88 0C */	addi r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803E0840 003DD780  90 1E 08 9C */	stw r0, 0x89c(r30)
/* 803E0844 003DD784  41 82 00 44 */	beq .L_803E0888
/* 803E0848 003DD788  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E084C 003DD78C  34 1E 08 9C */	addic. r0, r30, 0x89c
/* 803E0850 003DD790  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0854 003DD794  90 1E 08 9C */	stw r0, 0x89c(r30)
/* 803E0858 003DD798  41 82 00 30 */	beq .L_803E0888
/* 803E085C 003DD79C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0860 003DD7A0  34 1E 08 9C */	addic. r0, r30, 0x89c
/* 803E0864 003DD7A4  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0868 003DD7A8  90 1E 08 9C */	stw r0, 0x89c(r30)
/* 803E086C 003DD7AC  41 82 00 1C */	beq .L_803E0888
/* 803E0870 003DD7B0  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0874 003DD7B4  38 7E 08 9C */	addi r3, r30, 0x89c
/* 803E0878 003DD7B8  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E087C 003DD7BC  38 80 00 00 */	li r4, 0
/* 803E0880 003DD7C0  90 1E 08 9C */	stw r0, 0x89c(r30)
/* 803E0884 003DD7C4  48 03 0D 05 */	bl __dt__5CNodeFv
.L_803E0888:
/* 803E0888 003DD7C8  34 1E 08 60 */	addic. r0, r30, 0x860
/* 803E088C 003DD7CC  41 82 00 6C */	beq .L_803E08F8
/* 803E0890 003DD7D0  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0894 003DD7D4  34 1E 08 80 */	addic. r0, r30, 0x880
/* 803E0898 003DD7D8  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E089C 003DD7DC  90 1E 08 60 */	stw r0, 0x860(r30)
/* 803E08A0 003DD7E0  41 82 00 10 */	beq .L_803E08B0
/* 803E08A4 003DD7E4  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E08A8 003DD7E8  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E08AC 003DD7EC  90 1E 08 80 */	stw r0, 0x880(r30)
.L_803E08B0:
/* 803E08B0 003DD7F0  34 1E 08 60 */	addic. r0, r30, 0x860
/* 803E08B4 003DD7F4  41 82 00 44 */	beq .L_803E08F8
/* 803E08B8 003DD7F8  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E08BC 003DD7FC  34 1E 08 60 */	addic. r0, r30, 0x860
/* 803E08C0 003DD800  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E08C4 003DD804  90 1E 08 60 */	stw r0, 0x860(r30)
/* 803E08C8 003DD808  41 82 00 30 */	beq .L_803E08F8
/* 803E08CC 003DD80C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E08D0 003DD810  34 1E 08 60 */	addic. r0, r30, 0x860
/* 803E08D4 003DD814  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E08D8 003DD818  90 1E 08 60 */	stw r0, 0x860(r30)
/* 803E08DC 003DD81C  41 82 00 1C */	beq .L_803E08F8
/* 803E08E0 003DD820  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E08E4 003DD824  38 7E 08 60 */	addi r3, r30, 0x860
/* 803E08E8 003DD828  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E08EC 003DD82C  38 80 00 00 */	li r4, 0
/* 803E08F0 003DD830  90 1E 08 60 */	stw r0, 0x860(r30)
/* 803E08F4 003DD834  48 03 0C 95 */	bl __dt__5CNodeFv
.L_803E08F8:
/* 803E08F8 003DD838  34 1E 08 24 */	addic. r0, r30, 0x824
/* 803E08FC 003DD83C  41 82 00 6C */	beq .L_803E0968
/* 803E0900 003DD840  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0904 003DD844  34 1E 08 44 */	addic. r0, r30, 0x844
/* 803E0908 003DD848  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E090C 003DD84C  90 1E 08 24 */	stw r0, 0x824(r30)
/* 803E0910 003DD850  41 82 00 10 */	beq .L_803E0920
/* 803E0914 003DD854  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0918 003DD858  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E091C 003DD85C  90 1E 08 44 */	stw r0, 0x844(r30)
.L_803E0920:
/* 803E0920 003DD860  34 1E 08 24 */	addic. r0, r30, 0x824
/* 803E0924 003DD864  41 82 00 44 */	beq .L_803E0968
/* 803E0928 003DD868  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E092C 003DD86C  34 1E 08 24 */	addic. r0, r30, 0x824
/* 803E0930 003DD870  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0934 003DD874  90 1E 08 24 */	stw r0, 0x824(r30)
/* 803E0938 003DD878  41 82 00 30 */	beq .L_803E0968
/* 803E093C 003DD87C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0940 003DD880  34 1E 08 24 */	addic. r0, r30, 0x824
/* 803E0944 003DD884  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0948 003DD888  90 1E 08 24 */	stw r0, 0x824(r30)
/* 803E094C 003DD88C  41 82 00 1C */	beq .L_803E0968
/* 803E0950 003DD890  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0954 003DD894  38 7E 08 24 */	addi r3, r30, 0x824
/* 803E0958 003DD898  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E095C 003DD89C  38 80 00 00 */	li r4, 0
/* 803E0960 003DD8A0  90 1E 08 24 */	stw r0, 0x824(r30)
/* 803E0964 003DD8A4  48 03 0C 25 */	bl __dt__5CNodeFv
.L_803E0968:
/* 803E0968 003DD8A8  34 1E 07 E8 */	addic. r0, r30, 0x7e8
/* 803E096C 003DD8AC  41 82 00 6C */	beq .L_803E09D8
/* 803E0970 003DD8B0  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0974 003DD8B4  34 1E 08 08 */	addic. r0, r30, 0x808
/* 803E0978 003DD8B8  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E097C 003DD8BC  90 1E 07 E8 */	stw r0, 0x7e8(r30)
/* 803E0980 003DD8C0  41 82 00 10 */	beq .L_803E0990
/* 803E0984 003DD8C4  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0988 003DD8C8  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E098C 003DD8CC  90 1E 08 08 */	stw r0, 0x808(r30)
.L_803E0990:
/* 803E0990 003DD8D0  34 1E 07 E8 */	addic. r0, r30, 0x7e8
/* 803E0994 003DD8D4  41 82 00 44 */	beq .L_803E09D8
/* 803E0998 003DD8D8  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E099C 003DD8DC  34 1E 07 E8 */	addic. r0, r30, 0x7e8
/* 803E09A0 003DD8E0  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E09A4 003DD8E4  90 1E 07 E8 */	stw r0, 0x7e8(r30)
/* 803E09A8 003DD8E8  41 82 00 30 */	beq .L_803E09D8
/* 803E09AC 003DD8EC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E09B0 003DD8F0  34 1E 07 E8 */	addic. r0, r30, 0x7e8
/* 803E09B4 003DD8F4  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E09B8 003DD8F8  90 1E 07 E8 */	stw r0, 0x7e8(r30)
/* 803E09BC 003DD8FC  41 82 00 1C */	beq .L_803E09D8
/* 803E09C0 003DD900  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E09C4 003DD904  38 7E 07 E8 */	addi r3, r30, 0x7e8
/* 803E09C8 003DD908  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E09CC 003DD90C  38 80 00 00 */	li r4, 0
/* 803E09D0 003DD910  90 1E 07 E8 */	stw r0, 0x7e8(r30)
/* 803E09D4 003DD914  48 03 0B B5 */	bl __dt__5CNodeFv
.L_803E09D8:
/* 803E09D8 003DD918  34 1E 07 AC */	addic. r0, r30, 0x7ac
/* 803E09DC 003DD91C  41 82 00 6C */	beq .L_803E0A48
/* 803E09E0 003DD920  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E09E4 003DD924  34 1E 07 CC */	addic. r0, r30, 0x7cc
/* 803E09E8 003DD928  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E09EC 003DD92C  90 1E 07 AC */	stw r0, 0x7ac(r30)
/* 803E09F0 003DD930  41 82 00 10 */	beq .L_803E0A00
/* 803E09F4 003DD934  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E09F8 003DD938  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E09FC 003DD93C  90 1E 07 CC */	stw r0, 0x7cc(r30)
.L_803E0A00:
/* 803E0A00 003DD940  34 1E 07 AC */	addic. r0, r30, 0x7ac
/* 803E0A04 003DD944  41 82 00 44 */	beq .L_803E0A48
/* 803E0A08 003DD948  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0A0C 003DD94C  34 1E 07 AC */	addic. r0, r30, 0x7ac
/* 803E0A10 003DD950  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0A14 003DD954  90 1E 07 AC */	stw r0, 0x7ac(r30)
/* 803E0A18 003DD958  41 82 00 30 */	beq .L_803E0A48
/* 803E0A1C 003DD95C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0A20 003DD960  34 1E 07 AC */	addic. r0, r30, 0x7ac
/* 803E0A24 003DD964  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0A28 003DD968  90 1E 07 AC */	stw r0, 0x7ac(r30)
/* 803E0A2C 003DD96C  41 82 00 1C */	beq .L_803E0A48
/* 803E0A30 003DD970  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0A34 003DD974  38 7E 07 AC */	addi r3, r30, 0x7ac
/* 803E0A38 003DD978  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0A3C 003DD97C  38 80 00 00 */	li r4, 0
/* 803E0A40 003DD980  90 1E 07 AC */	stw r0, 0x7ac(r30)
/* 803E0A44 003DD984  48 03 0B 45 */	bl __dt__5CNodeFv
.L_803E0A48:
/* 803E0A48 003DD988  34 1E 07 70 */	addic. r0, r30, 0x770
/* 803E0A4C 003DD98C  41 82 00 6C */	beq .L_803E0AB8
/* 803E0A50 003DD990  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0A54 003DD994  34 1E 07 90 */	addic. r0, r30, 0x790
/* 803E0A58 003DD998  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0A5C 003DD99C  90 1E 07 70 */	stw r0, 0x770(r30)
/* 803E0A60 003DD9A0  41 82 00 10 */	beq .L_803E0A70
/* 803E0A64 003DD9A4  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0A68 003DD9A8  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0A6C 003DD9AC  90 1E 07 90 */	stw r0, 0x790(r30)
.L_803E0A70:
/* 803E0A70 003DD9B0  34 1E 07 70 */	addic. r0, r30, 0x770
/* 803E0A74 003DD9B4  41 82 00 44 */	beq .L_803E0AB8
/* 803E0A78 003DD9B8  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0A7C 003DD9BC  34 1E 07 70 */	addic. r0, r30, 0x770
/* 803E0A80 003DD9C0  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0A84 003DD9C4  90 1E 07 70 */	stw r0, 0x770(r30)
/* 803E0A88 003DD9C8  41 82 00 30 */	beq .L_803E0AB8
/* 803E0A8C 003DD9CC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0A90 003DD9D0  34 1E 07 70 */	addic. r0, r30, 0x770
/* 803E0A94 003DD9D4  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0A98 003DD9D8  90 1E 07 70 */	stw r0, 0x770(r30)
/* 803E0A9C 003DD9DC  41 82 00 1C */	beq .L_803E0AB8
/* 803E0AA0 003DD9E0  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0AA4 003DD9E4  38 7E 07 70 */	addi r3, r30, 0x770
/* 803E0AA8 003DD9E8  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0AAC 003DD9EC  38 80 00 00 */	li r4, 0
/* 803E0AB0 003DD9F0  90 1E 07 70 */	stw r0, 0x770(r30)
/* 803E0AB4 003DD9F4  48 03 0A D5 */	bl __dt__5CNodeFv
.L_803E0AB8:
/* 803E0AB8 003DD9F8  34 1E 07 34 */	addic. r0, r30, 0x734
/* 803E0ABC 003DD9FC  41 82 00 6C */	beq .L_803E0B28
/* 803E0AC0 003DDA00  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0AC4 003DDA04  34 1E 07 54 */	addic. r0, r30, 0x754
/* 803E0AC8 003DDA08  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0ACC 003DDA0C  90 1E 07 34 */	stw r0, 0x734(r30)
/* 803E0AD0 003DDA10  41 82 00 10 */	beq .L_803E0AE0
/* 803E0AD4 003DDA14  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0AD8 003DDA18  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0ADC 003DDA1C  90 1E 07 54 */	stw r0, 0x754(r30)
.L_803E0AE0:
/* 803E0AE0 003DDA20  34 1E 07 34 */	addic. r0, r30, 0x734
/* 803E0AE4 003DDA24  41 82 00 44 */	beq .L_803E0B28
/* 803E0AE8 003DDA28  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0AEC 003DDA2C  34 1E 07 34 */	addic. r0, r30, 0x734
/* 803E0AF0 003DDA30  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0AF4 003DDA34  90 1E 07 34 */	stw r0, 0x734(r30)
/* 803E0AF8 003DDA38  41 82 00 30 */	beq .L_803E0B28
/* 803E0AFC 003DDA3C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0B00 003DDA40  34 1E 07 34 */	addic. r0, r30, 0x734
/* 803E0B04 003DDA44  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0B08 003DDA48  90 1E 07 34 */	stw r0, 0x734(r30)
/* 803E0B0C 003DDA4C  41 82 00 1C */	beq .L_803E0B28
/* 803E0B10 003DDA50  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0B14 003DDA54  38 7E 07 34 */	addi r3, r30, 0x734
/* 803E0B18 003DDA58  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0B1C 003DDA5C  38 80 00 00 */	li r4, 0
/* 803E0B20 003DDA60  90 1E 07 34 */	stw r0, 0x734(r30)
/* 803E0B24 003DDA64  48 03 0A 65 */	bl __dt__5CNodeFv
.L_803E0B28:
/* 803E0B28 003DDA68  34 1E 06 F8 */	addic. r0, r30, 0x6f8
/* 803E0B2C 003DDA6C  41 82 00 6C */	beq .L_803E0B98
/* 803E0B30 003DDA70  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0B34 003DDA74  34 1E 07 18 */	addic. r0, r30, 0x718
/* 803E0B38 003DDA78  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0B3C 003DDA7C  90 1E 06 F8 */	stw r0, 0x6f8(r30)
/* 803E0B40 003DDA80  41 82 00 10 */	beq .L_803E0B50
/* 803E0B44 003DDA84  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0B48 003DDA88  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0B4C 003DDA8C  90 1E 07 18 */	stw r0, 0x718(r30)
.L_803E0B50:
/* 803E0B50 003DDA90  34 1E 06 F8 */	addic. r0, r30, 0x6f8
/* 803E0B54 003DDA94  41 82 00 44 */	beq .L_803E0B98
/* 803E0B58 003DDA98  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0B5C 003DDA9C  34 1E 06 F8 */	addic. r0, r30, 0x6f8
/* 803E0B60 003DDAA0  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0B64 003DDAA4  90 1E 06 F8 */	stw r0, 0x6f8(r30)
/* 803E0B68 003DDAA8  41 82 00 30 */	beq .L_803E0B98
/* 803E0B6C 003DDAAC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0B70 003DDAB0  34 1E 06 F8 */	addic. r0, r30, 0x6f8
/* 803E0B74 003DDAB4  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0B78 003DDAB8  90 1E 06 F8 */	stw r0, 0x6f8(r30)
/* 803E0B7C 003DDABC  41 82 00 1C */	beq .L_803E0B98
/* 803E0B80 003DDAC0  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0B84 003DDAC4  38 7E 06 F8 */	addi r3, r30, 0x6f8
/* 803E0B88 003DDAC8  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0B8C 003DDACC  38 80 00 00 */	li r4, 0
/* 803E0B90 003DDAD0  90 1E 06 F8 */	stw r0, 0x6f8(r30)
/* 803E0B94 003DDAD4  48 03 09 F5 */	bl __dt__5CNodeFv
.L_803E0B98:
/* 803E0B98 003DDAD8  34 1E 06 BC */	addic. r0, r30, 0x6bc
/* 803E0B9C 003DDADC  41 82 00 6C */	beq .L_803E0C08
/* 803E0BA0 003DDAE0  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0BA4 003DDAE4  34 1E 06 DC */	addic. r0, r30, 0x6dc
/* 803E0BA8 003DDAE8  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0BAC 003DDAEC  90 1E 06 BC */	stw r0, 0x6bc(r30)
/* 803E0BB0 003DDAF0  41 82 00 10 */	beq .L_803E0BC0
/* 803E0BB4 003DDAF4  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0BB8 003DDAF8  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0BBC 003DDAFC  90 1E 06 DC */	stw r0, 0x6dc(r30)
.L_803E0BC0:
/* 803E0BC0 003DDB00  34 1E 06 BC */	addic. r0, r30, 0x6bc
/* 803E0BC4 003DDB04  41 82 00 44 */	beq .L_803E0C08
/* 803E0BC8 003DDB08  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0BCC 003DDB0C  34 1E 06 BC */	addic. r0, r30, 0x6bc
/* 803E0BD0 003DDB10  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0BD4 003DDB14  90 1E 06 BC */	stw r0, 0x6bc(r30)
/* 803E0BD8 003DDB18  41 82 00 30 */	beq .L_803E0C08
/* 803E0BDC 003DDB1C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0BE0 003DDB20  34 1E 06 BC */	addic. r0, r30, 0x6bc
/* 803E0BE4 003DDB24  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0BE8 003DDB28  90 1E 06 BC */	stw r0, 0x6bc(r30)
/* 803E0BEC 003DDB2C  41 82 00 1C */	beq .L_803E0C08
/* 803E0BF0 003DDB30  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0BF4 003DDB34  38 7E 06 BC */	addi r3, r30, 0x6bc
/* 803E0BF8 003DDB38  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0BFC 003DDB3C  38 80 00 00 */	li r4, 0
/* 803E0C00 003DDB40  90 1E 06 BC */	stw r0, 0x6bc(r30)
/* 803E0C04 003DDB44  48 03 09 85 */	bl __dt__5CNodeFv
.L_803E0C08:
/* 803E0C08 003DDB48  34 1E 06 80 */	addic. r0, r30, 0x680
/* 803E0C0C 003DDB4C  41 82 00 6C */	beq .L_803E0C78
/* 803E0C10 003DDB50  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0C14 003DDB54  34 1E 06 A0 */	addic. r0, r30, 0x6a0
/* 803E0C18 003DDB58  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0C1C 003DDB5C  90 1E 06 80 */	stw r0, 0x680(r30)
/* 803E0C20 003DDB60  41 82 00 10 */	beq .L_803E0C30
/* 803E0C24 003DDB64  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0C28 003DDB68  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0C2C 003DDB6C  90 1E 06 A0 */	stw r0, 0x6a0(r30)
.L_803E0C30:
/* 803E0C30 003DDB70  34 1E 06 80 */	addic. r0, r30, 0x680
/* 803E0C34 003DDB74  41 82 00 44 */	beq .L_803E0C78
/* 803E0C38 003DDB78  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0C3C 003DDB7C  34 1E 06 80 */	addic. r0, r30, 0x680
/* 803E0C40 003DDB80  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0C44 003DDB84  90 1E 06 80 */	stw r0, 0x680(r30)
/* 803E0C48 003DDB88  41 82 00 30 */	beq .L_803E0C78
/* 803E0C4C 003DDB8C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0C50 003DDB90  34 1E 06 80 */	addic. r0, r30, 0x680
/* 803E0C54 003DDB94  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0C58 003DDB98  90 1E 06 80 */	stw r0, 0x680(r30)
/* 803E0C5C 003DDB9C  41 82 00 1C */	beq .L_803E0C78
/* 803E0C60 003DDBA0  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0C64 003DDBA4  38 7E 06 80 */	addi r3, r30, 0x680
/* 803E0C68 003DDBA8  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0C6C 003DDBAC  38 80 00 00 */	li r4, 0
/* 803E0C70 003DDBB0  90 1E 06 80 */	stw r0, 0x680(r30)
/* 803E0C74 003DDBB4  48 03 09 15 */	bl __dt__5CNodeFv
.L_803E0C78:
/* 803E0C78 003DDBB8  34 1E 06 44 */	addic. r0, r30, 0x644
/* 803E0C7C 003DDBBC  41 82 00 6C */	beq .L_803E0CE8
/* 803E0C80 003DDBC0  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0C84 003DDBC4  34 1E 06 64 */	addic. r0, r30, 0x664
/* 803E0C88 003DDBC8  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0C8C 003DDBCC  90 1E 06 44 */	stw r0, 0x644(r30)
/* 803E0C90 003DDBD0  41 82 00 10 */	beq .L_803E0CA0
/* 803E0C94 003DDBD4  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0C98 003DDBD8  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0C9C 003DDBDC  90 1E 06 64 */	stw r0, 0x664(r30)
.L_803E0CA0:
/* 803E0CA0 003DDBE0  34 1E 06 44 */	addic. r0, r30, 0x644
/* 803E0CA4 003DDBE4  41 82 00 44 */	beq .L_803E0CE8
/* 803E0CA8 003DDBE8  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0CAC 003DDBEC  34 1E 06 44 */	addic. r0, r30, 0x644
/* 803E0CB0 003DDBF0  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0CB4 003DDBF4  90 1E 06 44 */	stw r0, 0x644(r30)
/* 803E0CB8 003DDBF8  41 82 00 30 */	beq .L_803E0CE8
/* 803E0CBC 003DDBFC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0CC0 003DDC00  34 1E 06 44 */	addic. r0, r30, 0x644
/* 803E0CC4 003DDC04  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0CC8 003DDC08  90 1E 06 44 */	stw r0, 0x644(r30)
/* 803E0CCC 003DDC0C  41 82 00 1C */	beq .L_803E0CE8
/* 803E0CD0 003DDC10  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0CD4 003DDC14  38 7E 06 44 */	addi r3, r30, 0x644
/* 803E0CD8 003DDC18  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0CDC 003DDC1C  38 80 00 00 */	li r4, 0
/* 803E0CE0 003DDC20  90 1E 06 44 */	stw r0, 0x644(r30)
/* 803E0CE4 003DDC24  48 03 08 A5 */	bl __dt__5CNodeFv
.L_803E0CE8:
/* 803E0CE8 003DDC28  34 1E 06 08 */	addic. r0, r30, 0x608
/* 803E0CEC 003DDC2C  41 82 00 6C */	beq .L_803E0D58
/* 803E0CF0 003DDC30  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0CF4 003DDC34  34 1E 06 28 */	addic. r0, r30, 0x628
/* 803E0CF8 003DDC38  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0CFC 003DDC3C  90 1E 06 08 */	stw r0, 0x608(r30)
/* 803E0D00 003DDC40  41 82 00 10 */	beq .L_803E0D10
/* 803E0D04 003DDC44  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0D08 003DDC48  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0D0C 003DDC4C  90 1E 06 28 */	stw r0, 0x628(r30)
.L_803E0D10:
/* 803E0D10 003DDC50  34 1E 06 08 */	addic. r0, r30, 0x608
/* 803E0D14 003DDC54  41 82 00 44 */	beq .L_803E0D58
/* 803E0D18 003DDC58  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0D1C 003DDC5C  34 1E 06 08 */	addic. r0, r30, 0x608
/* 803E0D20 003DDC60  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0D24 003DDC64  90 1E 06 08 */	stw r0, 0x608(r30)
/* 803E0D28 003DDC68  41 82 00 30 */	beq .L_803E0D58
/* 803E0D2C 003DDC6C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0D30 003DDC70  34 1E 06 08 */	addic. r0, r30, 0x608
/* 803E0D34 003DDC74  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0D38 003DDC78  90 1E 06 08 */	stw r0, 0x608(r30)
/* 803E0D3C 003DDC7C  41 82 00 1C */	beq .L_803E0D58
/* 803E0D40 003DDC80  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0D44 003DDC84  38 7E 06 08 */	addi r3, r30, 0x608
/* 803E0D48 003DDC88  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0D4C 003DDC8C  38 80 00 00 */	li r4, 0
/* 803E0D50 003DDC90  90 1E 06 08 */	stw r0, 0x608(r30)
/* 803E0D54 003DDC94  48 03 08 35 */	bl __dt__5CNodeFv
.L_803E0D58:
/* 803E0D58 003DDC98  34 1E 05 CC */	addic. r0, r30, 0x5cc
/* 803E0D5C 003DDC9C  41 82 00 6C */	beq .L_803E0DC8
/* 803E0D60 003DDCA0  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0D64 003DDCA4  34 1E 05 EC */	addic. r0, r30, 0x5ec
/* 803E0D68 003DDCA8  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0D6C 003DDCAC  90 1E 05 CC */	stw r0, 0x5cc(r30)
/* 803E0D70 003DDCB0  41 82 00 10 */	beq .L_803E0D80
/* 803E0D74 003DDCB4  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0D78 003DDCB8  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0D7C 003DDCBC  90 1E 05 EC */	stw r0, 0x5ec(r30)
.L_803E0D80:
/* 803E0D80 003DDCC0  34 1E 05 CC */	addic. r0, r30, 0x5cc
/* 803E0D84 003DDCC4  41 82 00 44 */	beq .L_803E0DC8
/* 803E0D88 003DDCC8  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0D8C 003DDCCC  34 1E 05 CC */	addic. r0, r30, 0x5cc
/* 803E0D90 003DDCD0  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0D94 003DDCD4  90 1E 05 CC */	stw r0, 0x5cc(r30)
/* 803E0D98 003DDCD8  41 82 00 30 */	beq .L_803E0DC8
/* 803E0D9C 003DDCDC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0DA0 003DDCE0  34 1E 05 CC */	addic. r0, r30, 0x5cc
/* 803E0DA4 003DDCE4  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0DA8 003DDCE8  90 1E 05 CC */	stw r0, 0x5cc(r30)
/* 803E0DAC 003DDCEC  41 82 00 1C */	beq .L_803E0DC8
/* 803E0DB0 003DDCF0  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0DB4 003DDCF4  38 7E 05 CC */	addi r3, r30, 0x5cc
/* 803E0DB8 003DDCF8  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0DBC 003DDCFC  38 80 00 00 */	li r4, 0
/* 803E0DC0 003DDD00  90 1E 05 CC */	stw r0, 0x5cc(r30)
/* 803E0DC4 003DDD04  48 03 07 C5 */	bl __dt__5CNodeFv
.L_803E0DC8:
/* 803E0DC8 003DDD08  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803E0DCC 003DDD0C  38 7E 05 18 */	addi r3, r30, 0x518
/* 803E0DD0 003DDD10  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803E0DD4 003DDD14  38 A0 00 3C */	li r5, 0x3c
/* 803E0DD8 003DDD18  38 C0 00 03 */	li r6, 3
/* 803E0DDC 003DDD1C  4B CE 09 E9 */	bl __destroy_arr
/* 803E0DE0 003DDD20  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803E0DE4 003DDD24  38 7E 04 64 */	addi r3, r30, 0x464
/* 803E0DE8 003DDD28  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803E0DEC 003DDD2C  38 A0 00 3C */	li r5, 0x3c
/* 803E0DF0 003DDD30  38 C0 00 03 */	li r6, 3
/* 803E0DF4 003DDD34  4B CE 09 D1 */	bl __destroy_arr
/* 803E0DF8 003DDD38  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803E0DFC 003DDD3C  38 7E 03 B0 */	addi r3, r30, 0x3b0
/* 803E0E00 003DDD40  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803E0E04 003DDD44  38 A0 00 3C */	li r5, 0x3c
/* 803E0E08 003DDD48  38 C0 00 03 */	li r6, 3
/* 803E0E0C 003DDD4C  4B CE 09 B9 */	bl __destroy_arr
/* 803E0E10 003DDD50  34 1E 03 74 */	addic. r0, r30, 0x374
/* 803E0E14 003DDD54  41 82 00 6C */	beq .L_803E0E80
/* 803E0E18 003DDD58  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0E1C 003DDD5C  34 1E 03 94 */	addic. r0, r30, 0x394
/* 803E0E20 003DDD60  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0E24 003DDD64  90 1E 03 74 */	stw r0, 0x374(r30)
/* 803E0E28 003DDD68  41 82 00 10 */	beq .L_803E0E38
/* 803E0E2C 003DDD6C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0E30 003DDD70  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0E34 003DDD74  90 1E 03 94 */	stw r0, 0x394(r30)
.L_803E0E38:
/* 803E0E38 003DDD78  34 1E 03 74 */	addic. r0, r30, 0x374
/* 803E0E3C 003DDD7C  41 82 00 44 */	beq .L_803E0E80
/* 803E0E40 003DDD80  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0E44 003DDD84  34 1E 03 74 */	addic. r0, r30, 0x374
/* 803E0E48 003DDD88  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0E4C 003DDD8C  90 1E 03 74 */	stw r0, 0x374(r30)
/* 803E0E50 003DDD90  41 82 00 30 */	beq .L_803E0E80
/* 803E0E54 003DDD94  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0E58 003DDD98  34 1E 03 74 */	addic. r0, r30, 0x374
/* 803E0E5C 003DDD9C  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0E60 003DDDA0  90 1E 03 74 */	stw r0, 0x374(r30)
/* 803E0E64 003DDDA4  41 82 00 1C */	beq .L_803E0E80
/* 803E0E68 003DDDA8  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0E6C 003DDDAC  38 7E 03 74 */	addi r3, r30, 0x374
/* 803E0E70 003DDDB0  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0E74 003DDDB4  38 80 00 00 */	li r4, 0
/* 803E0E78 003DDDB8  90 1E 03 74 */	stw r0, 0x374(r30)
/* 803E0E7C 003DDDBC  48 03 07 0D */	bl __dt__5CNodeFv
.L_803E0E80:
/* 803E0E80 003DDDC0  34 1E 03 38 */	addic. r0, r30, 0x338
/* 803E0E84 003DDDC4  41 82 00 6C */	beq .L_803E0EF0
/* 803E0E88 003DDDC8  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0E8C 003DDDCC  34 1E 03 58 */	addic. r0, r30, 0x358
/* 803E0E90 003DDDD0  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0E94 003DDDD4  90 1E 03 38 */	stw r0, 0x338(r30)
/* 803E0E98 003DDDD8  41 82 00 10 */	beq .L_803E0EA8
/* 803E0E9C 003DDDDC  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0EA0 003DDDE0  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0EA4 003DDDE4  90 1E 03 58 */	stw r0, 0x358(r30)
.L_803E0EA8:
/* 803E0EA8 003DDDE8  34 1E 03 38 */	addic. r0, r30, 0x338
/* 803E0EAC 003DDDEC  41 82 00 44 */	beq .L_803E0EF0
/* 803E0EB0 003DDDF0  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0EB4 003DDDF4  34 1E 03 38 */	addic. r0, r30, 0x338
/* 803E0EB8 003DDDF8  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0EBC 003DDDFC  90 1E 03 38 */	stw r0, 0x338(r30)
/* 803E0EC0 003DDE00  41 82 00 30 */	beq .L_803E0EF0
/* 803E0EC4 003DDE04  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0EC8 003DDE08  34 1E 03 38 */	addic. r0, r30, 0x338
/* 803E0ECC 003DDE0C  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0ED0 003DDE10  90 1E 03 38 */	stw r0, 0x338(r30)
/* 803E0ED4 003DDE14  41 82 00 1C */	beq .L_803E0EF0
/* 803E0ED8 003DDE18  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0EDC 003DDE1C  38 7E 03 38 */	addi r3, r30, 0x338
/* 803E0EE0 003DDE20  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0EE4 003DDE24  38 80 00 00 */	li r4, 0
/* 803E0EE8 003DDE28  90 1E 03 38 */	stw r0, 0x338(r30)
/* 803E0EEC 003DDE2C  48 03 06 9D */	bl __dt__5CNodeFv
.L_803E0EF0:
/* 803E0EF0 003DDE30  34 1E 02 FC */	addic. r0, r30, 0x2fc
/* 803E0EF4 003DDE34  41 82 00 6C */	beq .L_803E0F60
/* 803E0EF8 003DDE38  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0EFC 003DDE3C  34 1E 03 1C */	addic. r0, r30, 0x31c
/* 803E0F00 003DDE40  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0F04 003DDE44  90 1E 02 FC */	stw r0, 0x2fc(r30)
/* 803E0F08 003DDE48  41 82 00 10 */	beq .L_803E0F18
/* 803E0F0C 003DDE4C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0F10 003DDE50  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0F14 003DDE54  90 1E 03 1C */	stw r0, 0x31c(r30)
.L_803E0F18:
/* 803E0F18 003DDE58  34 1E 02 FC */	addic. r0, r30, 0x2fc
/* 803E0F1C 003DDE5C  41 82 00 44 */	beq .L_803E0F60
/* 803E0F20 003DDE60  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0F24 003DDE64  34 1E 02 FC */	addic. r0, r30, 0x2fc
/* 803E0F28 003DDE68  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0F2C 003DDE6C  90 1E 02 FC */	stw r0, 0x2fc(r30)
/* 803E0F30 003DDE70  41 82 00 30 */	beq .L_803E0F60
/* 803E0F34 003DDE74  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0F38 003DDE78  34 1E 02 FC */	addic. r0, r30, 0x2fc
/* 803E0F3C 003DDE7C  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0F40 003DDE80  90 1E 02 FC */	stw r0, 0x2fc(r30)
/* 803E0F44 003DDE84  41 82 00 1C */	beq .L_803E0F60
/* 803E0F48 003DDE88  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0F4C 003DDE8C  38 7E 02 FC */	addi r3, r30, 0x2fc
/* 803E0F50 003DDE90  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0F54 003DDE94  38 80 00 00 */	li r4, 0
/* 803E0F58 003DDE98  90 1E 02 FC */	stw r0, 0x2fc(r30)
/* 803E0F5C 003DDE9C  48 03 06 2D */	bl __dt__5CNodeFv
.L_803E0F60:
/* 803E0F60 003DDEA0  34 1E 02 C0 */	addic. r0, r30, 0x2c0
/* 803E0F64 003DDEA4  41 82 00 6C */	beq .L_803E0FD0
/* 803E0F68 003DDEA8  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E0F6C 003DDEAC  34 1E 02 E0 */	addic. r0, r30, 0x2e0
/* 803E0F70 003DDEB0  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E0F74 003DDEB4  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 803E0F78 003DDEB8  41 82 00 10 */	beq .L_803E0F88
/* 803E0F7C 003DDEBC  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E0F80 003DDEC0  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E0F84 003DDEC4  90 1E 02 E0 */	stw r0, 0x2e0(r30)
.L_803E0F88:
/* 803E0F88 003DDEC8  34 1E 02 C0 */	addic. r0, r30, 0x2c0
/* 803E0F8C 003DDECC  41 82 00 44 */	beq .L_803E0FD0
/* 803E0F90 003DDED0  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E0F94 003DDED4  34 1E 02 C0 */	addic. r0, r30, 0x2c0
/* 803E0F98 003DDED8  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E0F9C 003DDEDC  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 803E0FA0 003DDEE0  41 82 00 30 */	beq .L_803E0FD0
/* 803E0FA4 003DDEE4  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E0FA8 003DDEE8  34 1E 02 C0 */	addic. r0, r30, 0x2c0
/* 803E0FAC 003DDEEC  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E0FB0 003DDEF0  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 803E0FB4 003DDEF4  41 82 00 1C */	beq .L_803E0FD0
/* 803E0FB8 003DDEF8  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E0FBC 003DDEFC  38 7E 02 C0 */	addi r3, r30, 0x2c0
/* 803E0FC0 003DDF00  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E0FC4 003DDF04  38 80 00 00 */	li r4, 0
/* 803E0FC8 003DDF08  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 803E0FCC 003DDF0C  48 03 05 BD */	bl __dt__5CNodeFv
.L_803E0FD0:
/* 803E0FD0 003DDF10  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803E0FD4 003DDF14  38 7E 02 0C */	addi r3, r30, 0x20c
/* 803E0FD8 003DDF18  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803E0FDC 003DDF1C  38 A0 00 3C */	li r5, 0x3c
/* 803E0FE0 003DDF20  38 C0 00 03 */	li r6, 3
/* 803E0FE4 003DDF24  4B CE 07 E1 */	bl __destroy_arr
/* 803E0FE8 003DDF28  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803E0FEC 003DDF2C  38 7E 01 58 */	addi r3, r30, 0x158
/* 803E0FF0 003DDF30  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803E0FF4 003DDF34  38 A0 00 3C */	li r5, 0x3c
/* 803E0FF8 003DDF38  38 C0 00 03 */	li r6, 3
/* 803E0FFC 003DDF3C  4B CE 07 C9 */	bl __destroy_arr
/* 803E1000 003DDF40  34 1E 01 1C */	addic. r0, r30, 0x11c
/* 803E1004 003DDF44  41 82 00 6C */	beq .L_803E1070
/* 803E1008 003DDF48  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E100C 003DDF4C  34 1E 01 3C */	addic. r0, r30, 0x13c
/* 803E1010 003DDF50  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E1014 003DDF54  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 803E1018 003DDF58  41 82 00 10 */	beq .L_803E1028
/* 803E101C 003DDF5C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E1020 003DDF60  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E1024 003DDF64  90 1E 01 3C */	stw r0, 0x13c(r30)
.L_803E1028:
/* 803E1028 003DDF68  34 1E 01 1C */	addic. r0, r30, 0x11c
/* 803E102C 003DDF6C  41 82 00 44 */	beq .L_803E1070
/* 803E1030 003DDF70  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E1034 003DDF74  34 1E 01 1C */	addic. r0, r30, 0x11c
/* 803E1038 003DDF78  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E103C 003DDF7C  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 803E1040 003DDF80  41 82 00 30 */	beq .L_803E1070
/* 803E1044 003DDF84  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E1048 003DDF88  34 1E 01 1C */	addic. r0, r30, 0x11c
/* 803E104C 003DDF8C  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E1050 003DDF90  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 803E1054 003DDF94  41 82 00 1C */	beq .L_803E1070
/* 803E1058 003DDF98  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E105C 003DDF9C  38 7E 01 1C */	addi r3, r30, 0x11c
/* 803E1060 003DDFA0  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E1064 003DDFA4  38 80 00 00 */	li r4, 0
/* 803E1068 003DDFA8  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 803E106C 003DDFAC  48 03 05 1D */	bl __dt__5CNodeFv
.L_803E1070:
/* 803E1070 003DDFB0  34 1E 00 E0 */	addic. r0, r30, 0xe0
/* 803E1074 003DDFB4  41 82 00 6C */	beq .L_803E10E0
/* 803E1078 003DDFB8  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803E107C 003DDFBC  34 1E 01 00 */	addic. r0, r30, 0x100
/* 803E1080 003DDFC0  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803E1084 003DDFC4  90 1E 00 E0 */	stw r0, 0xe0(r30)
/* 803E1088 003DDFC8  41 82 00 10 */	beq .L_803E1098
/* 803E108C 003DDFCC  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E1090 003DDFD0  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E1094 003DDFD4  90 1E 01 00 */	stw r0, 0x100(r30)
.L_803E1098:
/* 803E1098 003DDFD8  34 1E 00 E0 */	addic. r0, r30, 0xe0
/* 803E109C 003DDFDC  41 82 00 44 */	beq .L_803E10E0
/* 803E10A0 003DDFE0  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803E10A4 003DDFE4  34 1E 00 E0 */	addic. r0, r30, 0xe0
/* 803E10A8 003DDFE8  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 803E10AC 003DDFEC  90 1E 00 E0 */	stw r0, 0xe0(r30)
/* 803E10B0 003DDFF0  41 82 00 30 */	beq .L_803E10E0
/* 803E10B4 003DDFF4  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803E10B8 003DDFF8  34 1E 00 E0 */	addic. r0, r30, 0xe0
/* 803E10BC 003DDFFC  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803E10C0 003DE000  90 1E 00 E0 */	stw r0, 0xe0(r30)
/* 803E10C4 003DE004  41 82 00 1C */	beq .L_803E10E0
/* 803E10C8 003DE008  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803E10CC 003DE00C  38 7E 00 E0 */	addi r3, r30, 0xe0
/* 803E10D0 003DE010  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803E10D4 003DE014  38 80 00 00 */	li r4, 0
/* 803E10D8 003DE018  90 1E 00 E0 */	stw r0, 0xe0(r30)
/* 803E10DC 003DE01C  48 03 04 AD */	bl __dt__5CNodeFv
.L_803E10E0:
/* 803E10E0 003DE020  7F E0 07 35 */	extsh. r0, r31
/* 803E10E4 003DE024  40 81 00 0C */	ble .L_803E10F0
/* 803E10E8 003DE028  7F C3 F3 78 */	mr r3, r30
/* 803E10EC 003DE02C  4B C4 2F C9 */	bl __dl__FPv
.L_803E10F0:
/* 803E10F0 003DE030  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E10F4 003DE034  7F C3 F3 78 */	mr r3, r30
/* 803E10F8 003DE038  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E10FC 003DE03C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E1100 003DE040  7C 08 03 A6 */	mtlr r0
/* 803E1104 003DE044  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1108 003DE048  4E 80 00 20 */	blr 

.global "init__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgrPQ24Game8StateArg"
"init__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgrPQ24Game8StateArg":
/* 803E110C 003DE04C  4E 80 00 20 */	blr 

.global "exec__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
"exec__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr":
/* 803E1110 003DE050  4E 80 00 20 */	blr 

.global "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
"cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr":
/* 803E1114 003DE054  4E 80 00 20 */	blr 

.global "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
"resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr":
/* 803E1118 003DE058  4E 80 00 20 */	blr 

.global "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
"restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr":
/* 803E111C 003DE05C  4E 80 00 20 */	blr 

.global "init__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
"init__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr":
/* 803E1120 003DE060  4E 80 00 20 */	blr 

.global "exec__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
"exec__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr":
/* 803E1124 003DE064  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1128 003DE068  7C 08 02 A6 */	mflr r0
/* 803E112C 003DE06C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1130 003DE070  80 64 0C 5C */	lwz r3, 0xc5c(r4)
/* 803E1134 003DE074  28 03 00 00 */	cmplwi r3, 0
/* 803E1138 003DE078  41 82 00 14 */	beq .L_803E114C
/* 803E113C 003DE07C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1140 003DE080  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E1144 003DE084  7D 89 03 A6 */	mtctr r12
/* 803E1148 003DE088  4E 80 04 21 */	bctrl 
.L_803E114C:
/* 803E114C 003DE08C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1150 003DE090  7C 08 03 A6 */	mtlr r0
/* 803E1154 003DE094  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1158 003DE098  4E 80 00 20 */	blr 

.global "create__Q24Game28StateMachine<Q33ebi2FS4TMgr>Fi"
"create__Q24Game28StateMachine<Q33ebi2FS4TMgr>Fi":
/* 803E115C 003DE09C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1160 003DE0A0  7C 08 02 A6 */	mflr r0
/* 803E1164 003DE0A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1168 003DE0A8  38 00 00 00 */	li r0, 0
/* 803E116C 003DE0AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E1170 003DE0B0  7C 7F 1B 78 */	mr r31, r3
/* 803E1174 003DE0B4  90 83 00 0C */	stw r4, 0xc(r3)
/* 803E1178 003DE0B8  90 03 00 08 */	stw r0, 8(r3)
/* 803E117C 003DE0BC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803E1180 003DE0C0  54 03 10 3A */	slwi r3, r0, 2
/* 803E1184 003DE0C4  4B C4 2E 29 */	bl __nwa__FUl
/* 803E1188 003DE0C8  90 7F 00 04 */	stw r3, 4(r31)
/* 803E118C 003DE0CC  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803E1190 003DE0D0  54 03 10 3A */	slwi r3, r0, 2
/* 803E1194 003DE0D4  4B C4 2E 19 */	bl __nwa__FUl
/* 803E1198 003DE0D8  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803E119C 003DE0DC  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803E11A0 003DE0E0  54 03 10 3A */	slwi r3, r0, 2
/* 803E11A4 003DE0E4  4B C4 2E 09 */	bl __nwa__FUl
/* 803E11A8 003DE0E8  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803E11AC 003DE0EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E11B0 003DE0F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E11B4 003DE0F4  7C 08 03 A6 */	mtlr r0
/* 803E11B8 003DE0F8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E11BC 003DE0FC  4E 80 00 20 */	blr 

.global "transit__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
"transit__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg":
/* 803E11C0 003DE100  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E11C4 003DE104  7C 08 02 A6 */	mflr r0
/* 803E11C8 003DE108  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E11CC 003DE10C  54 A0 10 3A */	slwi r0, r5, 2
/* 803E11D0 003DE110  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803E11D4 003DE114  7C 7B 1B 78 */	mr r27, r3
/* 803E11D8 003DE118  7C 9C 23 78 */	mr r28, r4
/* 803E11DC 003DE11C  7C DD 33 78 */	mr r29, r6
/* 803E11E0 003DE120  83 C4 0C 5C */	lwz r30, 0xc5c(r4)
/* 803E11E4 003DE124  80 63 00 14 */	lwz r3, 0x14(r3)
/* 803E11E8 003DE128  28 1E 00 00 */	cmplwi r30, 0
/* 803E11EC 003DE12C  7F E3 00 2E */	lwzx r31, r3, r0
/* 803E11F0 003DE130  41 82 00 20 */	beq .L_803E1210
/* 803E11F4 003DE134  7F C3 F3 78 */	mr r3, r30
/* 803E11F8 003DE138  81 9E 00 00 */	lwz r12, 0(r30)
/* 803E11FC 003DE13C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803E1200 003DE140  7D 89 03 A6 */	mtctr r12
/* 803E1204 003DE144  4E 80 04 21 */	bctrl 
/* 803E1208 003DE148  80 1E 00 04 */	lwz r0, 4(r30)
/* 803E120C 003DE14C  90 1B 00 18 */	stw r0, 0x18(r27)
.L_803E1210:
/* 803E1210 003DE150  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 803E1214 003DE154  7C 1F 00 00 */	cmpw r31, r0
/* 803E1218 003DE158  41 80 00 08 */	blt .L_803E1220
.L_803E121C:
/* 803E121C 003DE15C  48 00 00 00 */	b .L_803E121C
.L_803E1220:
/* 803E1220 003DE160  80 7B 00 04 */	lwz r3, 4(r27)
/* 803E1224 003DE164  57 E0 10 3A */	slwi r0, r31, 2
/* 803E1228 003DE168  7F 84 E3 78 */	mr r4, r28
/* 803E122C 003DE16C  7F A5 EB 78 */	mr r5, r29
/* 803E1230 003DE170  7C 63 00 2E */	lwzx r3, r3, r0
/* 803E1234 003DE174  90 7C 0C 5C */	stw r3, 0xc5c(r28)
/* 803E1238 003DE178  81 83 00 00 */	lwz r12, 0(r3)
/* 803E123C 003DE17C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803E1240 003DE180  7D 89 03 A6 */	mtctr r12
/* 803E1244 003DE184  4E 80 04 21 */	bctrl 
/* 803E1248 003DE188  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803E124C 003DE18C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E1250 003DE190  7C 08 03 A6 */	mtlr r0
/* 803E1254 003DE194  38 21 00 20 */	addi r1, r1, 0x20
/* 803E1258 003DE198  4E 80 00 20 */	blr 

.global "registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>"
"registerState__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ24Game24FSMState<Q33ebi2FS4TMgr>":
/* 803E125C 003DE19C  80 C3 00 08 */	lwz r6, 8(r3)
/* 803E1260 003DE1A0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803E1264 003DE1A4  7C 06 00 00 */	cmpw r6, r0
/* 803E1268 003DE1A8  4C 80 00 20 */	bgelr 
/* 803E126C 003DE1AC  80 A3 00 04 */	lwz r5, 4(r3)
/* 803E1270 003DE1B0  54 C0 10 3A */	slwi r0, r6, 2
/* 803E1274 003DE1B4  7C 85 01 2E */	stwx r4, r5, r0
/* 803E1278 003DE1B8  80 A4 00 04 */	lwz r5, 4(r4)
/* 803E127C 003DE1BC  2C 05 00 00 */	cmpwi r5, 0
/* 803E1280 003DE1C0  41 80 00 10 */	blt .L_803E1290
/* 803E1284 003DE1C4  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803E1288 003DE1C8  7C 05 00 00 */	cmpw r5, r0
/* 803E128C 003DE1CC  41 80 00 0C */	blt .L_803E1298
.L_803E1290:
/* 803E1290 003DE1D0  38 00 00 00 */	li r0, 0
/* 803E1294 003DE1D4  48 00 00 08 */	b .L_803E129C
.L_803E1298:
/* 803E1298 003DE1D8  38 00 00 01 */	li r0, 1
.L_803E129C:
/* 803E129C 003DE1DC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803E12A0 003DE1E0  4D 82 00 20 */	beqlr 
/* 803E12A4 003DE1E4  90 64 00 08 */	stw r3, 8(r4)
/* 803E12A8 003DE1E8  80 03 00 08 */	lwz r0, 8(r3)
/* 803E12AC 003DE1EC  80 C4 00 04 */	lwz r6, 4(r4)
/* 803E12B0 003DE1F0  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 803E12B4 003DE1F4  54 00 10 3A */	slwi r0, r0, 2
/* 803E12B8 003DE1F8  7C C5 01 2E */	stwx r6, r5, r0
/* 803E12BC 003DE1FC  80 04 00 04 */	lwz r0, 4(r4)
/* 803E12C0 003DE200  80 A3 00 08 */	lwz r5, 8(r3)
/* 803E12C4 003DE204  80 83 00 14 */	lwz r4, 0x14(r3)
/* 803E12C8 003DE208  54 00 10 3A */	slwi r0, r0, 2
/* 803E12CC 003DE20C  7C A4 01 2E */	stwx r5, r4, r0
/* 803E12D0 003DE210  80 83 00 08 */	lwz r4, 8(r3)
/* 803E12D4 003DE214  38 04 00 01 */	addi r0, r4, 1
/* 803E12D8 003DE218  90 03 00 08 */	stw r0, 8(r3)
/* 803E12DC 003DE21C  4E 80 00 20 */	blr 
