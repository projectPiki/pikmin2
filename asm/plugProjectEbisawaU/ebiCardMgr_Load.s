.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80497118:
	.asciz "ebiCardMgr_Load.cpp"
.balign 4
lbl_8049712C:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q33ebi9CardError29FSMState_WN1_NowCreateNewFile
__vt__Q33ebi9CardError29FSMState_WN1_NowCreateNewFile:
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
	.4byte do_open__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr
	.4byte do_cardRequest__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFv
	.4byte do_transitCardReady__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr
	.4byte do_transitCardNoCard__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr
	.4byte do_transitCardIOError__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr
	.4byte do_transitCardWrongDevice__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardWrongSector__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardBroken__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardEncoding__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardNoFileSpace__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardNoFileEntry__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardFileOpenError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardSerialNoError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError22FSMState_WN0_NowFormat
__vt__Q33ebi9CardError22FSMState_WN0_NowFormat:
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
	.4byte do_open__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
	.4byte do_cardRequest__Q33ebi9CardError22FSMState_WN0_NowFormatFv
	.4byte do_transitCardReady__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
	.4byte do_transitCardNoCard__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
	.4byte do_transitCardIOError__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
	.4byte do_transitCardWrongDevice__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardWrongSector__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardBroken__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardEncoding__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardNoFileSpace__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardNoFileEntry__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardFileOpenError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
	.4byte do_transitCardSerialNoError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError25FSMState_Q05_GameCantSave
__vt__Q33ebi9CardError25FSMState_Q05_GameCantSave:
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
	.4byte do_open__Q33ebi9CardError25FSMState_Q05_GameCantSaveFPQ33ebi9CardError4TMgr
	.4byte do_transitYes__Q33ebi9CardError25FSMState_Q05_GameCantSaveFPQ33ebi9CardError4TMgr
	.4byte do_transitNo__Q33ebi9CardError25FSMState_Q05_GameCantSaveFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSave
__vt__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSave:
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
	.4byte do_open__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSaveFPQ33ebi9CardError4TMgr
	.4byte do_transitYes__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSaveFPQ33ebi9CardError4TMgr
	.4byte do_transitNo__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSaveFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFile
__vt__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFile:
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
	.4byte do_open__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFileFPQ33ebi9CardError4TMgr
	.4byte do_transitYes__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFileFPQ33ebi9CardError4TMgr
	.4byte do_transitNo__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFileFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError24FSMState_Q02_DoYouFormat
__vt__Q33ebi9CardError24FSMState_Q02_DoYouFormat:
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
	.4byte do_open__Q33ebi9CardError24FSMState_Q02_DoYouFormatFPQ33ebi9CardError4TMgr
	.4byte do_transitYes__Q33ebi9CardError24FSMState_Q02_DoYouFormatFPQ33ebi9CardError4TMgr
	.4byte do_transitNo__Q33ebi9CardError24FSMState_Q02_DoYouFormatFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPL
__vt__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPL:
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
	.4byte do_open__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPLFPQ33ebi9CardError4TMgr
	.4byte do_transitYes__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPLFPQ33ebi9CardError4TMgr
	.4byte do_transitNo__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPLFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormat
__vt__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormat:
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
	.4byte do_open__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormatFPQ33ebi9CardError4TMgr
	.4byte do_transitYes__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormatFPQ33ebi9CardError4TMgr
	.4byte do_transitNo__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormatFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError31FSMState_WF5_FailToSave_IOError
__vt__Q33ebi9CardError31FSMState_WF5_FailToSave_IOError:
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
	.4byte do_open__Q33ebi9CardError31FSMState_WF5_FailToSave_IOErrorFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError31FSMState_WF5_FailToSave_IOErrorFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError30FSMState_WF4_FailToSave_NoCard
__vt__Q33ebi9CardError30FSMState_WF4_FailToSave_NoCard:
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
	.4byte do_open__Q33ebi9CardError30FSMState_WF4_FailToSave_NoCardFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError30FSMState_WF4_FailToSave_NoCardFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError40FSMState_WF3_FailToCreateNewFile_IOError
__vt__Q33ebi9CardError40FSMState_WF3_FailToCreateNewFile_IOError:
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
	.4byte do_open__Q33ebi9CardError40FSMState_WF3_FailToCreateNewFile_IOErrorFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError40FSMState_WF3_FailToCreateNewFile_IOErrorFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError39FSMState_WF2_FailToCreateNewFile_NoCard
__vt__Q33ebi9CardError39FSMState_WF2_FailToCreateNewFile_NoCard:
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
	.4byte do_open__Q33ebi9CardError39FSMState_WF2_FailToCreateNewFile_NoCardFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError39FSMState_WF2_FailToCreateNewFile_NoCardFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError33FSMState_WF1_FailToFormat_IOError
__vt__Q33ebi9CardError33FSMState_WF1_FailToFormat_IOError:
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
	.4byte do_open__Q33ebi9CardError33FSMState_WF1_FailToFormat_IOErrorFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError33FSMState_WF1_FailToFormat_IOErrorFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError32FSMState_WF0_FailToFormat_NoCard
__vt__Q33ebi9CardError32FSMState_WF0_FailToFormat_NoCard:
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
	.4byte do_open__Q33ebi9CardError32FSMState_WF0_FailToFormat_NoCardFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError32FSMState_WF0_FailToFormat_NoCardFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError26FSMState_W10_SerialNoError
__vt__Q33ebi9CardError26FSMState_W10_SerialNoError:
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
	.4byte do_open__Q33ebi9CardError26FSMState_W10_SerialNoErrorFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError26FSMState_W10_SerialNoErrorFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError32FSMState_W09_FinishCreateNewFile
__vt__Q33ebi9CardError32FSMState_W09_FinishCreateNewFile:
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
	.4byte do_open__Q33ebi9CardError32FSMState_W09_FinishCreateNewFileFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError32FSMState_W09_FinishCreateNewFileFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError25FSMState_W08_FinishFormat
__vt__Q33ebi9CardError25FSMState_W08_FinishFormat:
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
	.4byte do_open__Q33ebi9CardError25FSMState_W08_FinishFormatFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError25FSMState_W08_FinishFormatFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError26FSMState_W07_NoFileForSave
__vt__Q33ebi9CardError26FSMState_W07_NoFileForSave:
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
	.4byte do_open__Q33ebi9CardError26FSMState_W07_NoFileForSaveFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError26FSMState_W07_NoFileForSaveFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError26FSMState_W06_CardNotUsable
__vt__Q33ebi9CardError26FSMState_W06_CardNotUsable:
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
	.4byte do_open__Q33ebi9CardError26FSMState_W06_CardNotUsableFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError26FSMState_W06_CardNotUsableFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError26FSMState_W05_InitCardOnIPL
__vt__Q33ebi9CardError26FSMState_W05_InitCardOnIPL:
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
	.4byte do_open__Q33ebi9CardError26FSMState_W05_InitCardOnIPLFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError26FSMState_W05_InitCardOnIPLFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError25FSMState_W04_OverCapacity
__vt__Q33ebi9CardError25FSMState_W04_OverCapacity:
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
	.4byte do_open__Q33ebi9CardError25FSMState_W04_OverCapacityFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError25FSMState_W04_OverCapacityFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError24FSMState_W03_WrongSector
__vt__Q33ebi9CardError24FSMState_W03_WrongSector:
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
	.4byte do_open__Q33ebi9CardError24FSMState_W03_WrongSectorFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError24FSMState_W03_WrongSectorFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError24FSMState_W02_WrongDevice
__vt__Q33ebi9CardError24FSMState_W02_WrongDevice:
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
	.4byte do_open__Q33ebi9CardError24FSMState_W02_WrongDeviceFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError24FSMState_W02_WrongDeviceFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError20FSMState_W01_IOError
__vt__Q33ebi9CardError20FSMState_W01_IOError:
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
	.4byte do_open__Q33ebi9CardError20FSMState_W01_IOErrorFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError20FSMState_W01_IOErrorFPQ33ebi9CardError4TMgr
.global __vt__Q33ebi9CardError19FSMState_W00_NoCard
__vt__Q33ebi9CardError19FSMState_W00_NoCard:
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
	.4byte do_open__Q33ebi9CardError19FSMState_W00_NoCardFPQ33ebi9CardError4TMgr
	.4byte do_transit__Q33ebi9CardError19FSMState_W00_NoCardFPQ33ebi9CardError4TMgr
	.4byte do_transitOnCard__Q33ebi9CardError19FSMState_W00_NoCardFPQ33ebi9CardError4TMgr

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global do_open__Q33ebi9CardError19FSMState_W00_NoCardFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError19FSMState_W00_NoCardFPQ33ebi9CardError4TMgr:
/* 803E2520 003DF460  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2524 003DF464  7C 08 02 A6 */	mflr r0
/* 803E2528 003DF468  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E252C 003DF46C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2530 003DF470  2C 00 00 00 */	cmpwi r0, 0
/* 803E2534 003DF474  40 82 00 14 */	bne .L_803E2548
/* 803E2538 003DF478  7C 83 23 78 */	mr r3, r4
/* 803E253C 003DF47C  38 80 00 01 */	li r4, 1
/* 803E2540 003DF480  4B FE 03 B9 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E2544 003DF484  48 00 00 18 */	b .L_803E255C
.L_803E2548:
/* 803E2548 003DF488  2C 00 00 01 */	cmpwi r0, 1
/* 803E254C 003DF48C  40 82 00 10 */	bne .L_803E255C
/* 803E2550 003DF490  7C 83 23 78 */	mr r3, r4
/* 803E2554 003DF494  38 80 00 14 */	li r4, 0x14
/* 803E2558 003DF498  4B FE 03 A1 */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E255C:
/* 803E255C 003DF49C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2560 003DF4A0  7C 08 03 A6 */	mtlr r0
/* 803E2564 003DF4A4  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2568 003DF4A8  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError19FSMState_W00_NoCardFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError19FSMState_W00_NoCardFPQ33ebi9CardError4TMgr:
/* 803E256C 003DF4AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2570 003DF4B0  7C 08 02 A6 */	mflr r0
/* 803E2574 003DF4B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2578 003DF4B8  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E257C 003DF4BC  2C 00 00 00 */	cmpwi r0, 0
/* 803E2580 003DF4C0  40 82 00 20 */	bne .L_803E25A0
/* 803E2584 003DF4C4  81 83 00 00 */	lwz r12, 0(r3)
/* 803E2588 003DF4C8  38 A0 00 17 */	li r5, 0x17
/* 803E258C 003DF4CC  38 C0 00 00 */	li r6, 0
/* 803E2590 003DF4D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E2594 003DF4D4  7D 89 03 A6 */	mtctr r12
/* 803E2598 003DF4D8  4E 80 04 21 */	bctrl 
/* 803E259C 003DF4DC  48 00 00 18 */	b .L_803E25B4
.L_803E25A0:
/* 803E25A0 003DF4E0  2C 00 00 01 */	cmpwi r0, 1
/* 803E25A4 003DF4E4  40 82 00 10 */	bne .L_803E25B4
/* 803E25A8 003DF4E8  7C 83 23 78 */	mr r3, r4
/* 803E25AC 003DF4EC  38 80 00 03 */	li r4, 3
/* 803E25B0 003DF4F0  4B FF 0E 59 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E25B4:
/* 803E25B4 003DF4F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E25B8 003DF4F8  7C 08 03 A6 */	mtlr r0
/* 803E25BC 003DF4FC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E25C0 003DF500  4E 80 00 20 */	blr 

.global do_transitOnCard__Q33ebi9CardError19FSMState_W00_NoCardFPQ33ebi9CardError4TMgr
do_transitOnCard__Q33ebi9CardError19FSMState_W00_NoCardFPQ33ebi9CardError4TMgr:
/* 803E25C4 003DF504  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E25C8 003DF508  7C 08 02 A6 */	mflr r0
/* 803E25CC 003DF50C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E25D0 003DF510  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E25D4 003DF514  2C 00 00 00 */	cmpwi r0, 0
/* 803E25D8 003DF518  40 82 00 14 */	bne .L_803E25EC
/* 803E25DC 003DF51C  7C 83 23 78 */	mr r3, r4
/* 803E25E0 003DF520  38 80 00 02 */	li r4, 2
/* 803E25E4 003DF524  4B FF 0E 25 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E25E8 003DF528  48 00 00 18 */	b .L_803E2600
.L_803E25EC:
/* 803E25EC 003DF52C  2C 00 00 01 */	cmpwi r0, 1
/* 803E25F0 003DF530  40 82 00 10 */	bne .L_803E2600
/* 803E25F4 003DF534  7C 83 23 78 */	mr r3, r4
/* 803E25F8 003DF538  38 80 00 04 */	li r4, 4
/* 803E25FC 003DF53C  4B FF 0E 0D */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2600:
/* 803E2600 003DF540  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2604 003DF544  7C 08 03 A6 */	mtlr r0
/* 803E2608 003DF548  38 21 00 10 */	addi r1, r1, 0x10
/* 803E260C 003DF54C  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError20FSMState_W01_IOErrorFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError20FSMState_W01_IOErrorFPQ33ebi9CardError4TMgr:
/* 803E2610 003DF550  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2614 003DF554  7C 08 02 A6 */	mflr r0
/* 803E2618 003DF558  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E261C 003DF55C  38 00 00 01 */	li r0, 1
/* 803E2620 003DF560  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2624 003DF564  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2628 003DF568  2C 00 00 00 */	cmpwi r0, 0
/* 803E262C 003DF56C  40 82 00 14 */	bne .L_803E2640
/* 803E2630 003DF570  7C 83 23 78 */	mr r3, r4
/* 803E2634 003DF574  38 80 00 02 */	li r4, 2
/* 803E2638 003DF578  4B FE 02 C1 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E263C 003DF57C  48 00 00 18 */	b .L_803E2654
.L_803E2640:
/* 803E2640 003DF580  2C 00 00 01 */	cmpwi r0, 1
/* 803E2644 003DF584  40 82 00 10 */	bne .L_803E2654
/* 803E2648 003DF588  7C 83 23 78 */	mr r3, r4
/* 803E264C 003DF58C  38 80 00 15 */	li r4, 0x15
/* 803E2650 003DF590  4B FE 02 A9 */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2654:
/* 803E2654 003DF594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2658 003DF598  7C 08 03 A6 */	mtlr r0
/* 803E265C 003DF59C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2660 003DF5A0  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError20FSMState_W01_IOErrorFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError20FSMState_W01_IOErrorFPQ33ebi9CardError4TMgr:
/* 803E2664 003DF5A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2668 003DF5A8  7C 08 02 A6 */	mflr r0
/* 803E266C 003DF5AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2670 003DF5B0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2674 003DF5B4  2C 00 00 00 */	cmpwi r0, 0
/* 803E2678 003DF5B8  40 82 00 20 */	bne .L_803E2698
/* 803E267C 003DF5BC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E2680 003DF5C0  38 A0 00 17 */	li r5, 0x17
/* 803E2684 003DF5C4  38 C0 00 00 */	li r6, 0
/* 803E2688 003DF5C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E268C 003DF5CC  7D 89 03 A6 */	mtctr r12
/* 803E2690 003DF5D0  4E 80 04 21 */	bctrl 
/* 803E2694 003DF5D4  48 00 00 18 */	b .L_803E26AC
.L_803E2698:
/* 803E2698 003DF5D8  2C 00 00 01 */	cmpwi r0, 1
/* 803E269C 003DF5DC  40 82 00 10 */	bne .L_803E26AC
/* 803E26A0 003DF5E0  7C 83 23 78 */	mr r3, r4
/* 803E26A4 003DF5E4  38 80 00 03 */	li r4, 3
/* 803E26A8 003DF5E8  4B FF 0D 61 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E26AC:
/* 803E26AC 003DF5EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E26B0 003DF5F0  7C 08 03 A6 */	mtlr r0
/* 803E26B4 003DF5F4  38 21 00 10 */	addi r1, r1, 0x10
/* 803E26B8 003DF5F8  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError24FSMState_W02_WrongDeviceFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError24FSMState_W02_WrongDeviceFPQ33ebi9CardError4TMgr:
/* 803E26BC 003DF5FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E26C0 003DF600  7C 08 02 A6 */	mflr r0
/* 803E26C4 003DF604  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E26C8 003DF608  38 00 00 01 */	li r0, 1
/* 803E26CC 003DF60C  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E26D0 003DF610  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E26D4 003DF614  2C 00 00 00 */	cmpwi r0, 0
/* 803E26D8 003DF618  40 82 00 14 */	bne .L_803E26EC
/* 803E26DC 003DF61C  7C 83 23 78 */	mr r3, r4
/* 803E26E0 003DF620  38 80 00 03 */	li r4, 3
/* 803E26E4 003DF624  4B FE 02 15 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E26E8 003DF628  48 00 00 18 */	b .L_803E2700
.L_803E26EC:
/* 803E26EC 003DF62C  2C 00 00 01 */	cmpwi r0, 1
/* 803E26F0 003DF630  40 82 00 10 */	bne .L_803E2700
/* 803E26F4 003DF634  7C 83 23 78 */	mr r3, r4
/* 803E26F8 003DF638  38 80 00 16 */	li r4, 0x16
/* 803E26FC 003DF63C  4B FE 01 FD */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2700:
/* 803E2700 003DF640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2704 003DF644  7C 08 03 A6 */	mtlr r0
/* 803E2708 003DF648  38 21 00 10 */	addi r1, r1, 0x10
/* 803E270C 003DF64C  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError24FSMState_W02_WrongDeviceFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError24FSMState_W02_WrongDeviceFPQ33ebi9CardError4TMgr:
/* 803E2710 003DF650  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2714 003DF654  7C 08 02 A6 */	mflr r0
/* 803E2718 003DF658  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E271C 003DF65C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2720 003DF660  2C 00 00 00 */	cmpwi r0, 0
/* 803E2724 003DF664  40 82 00 20 */	bne .L_803E2744
/* 803E2728 003DF668  81 83 00 00 */	lwz r12, 0(r3)
/* 803E272C 003DF66C  38 A0 00 17 */	li r5, 0x17
/* 803E2730 003DF670  38 C0 00 00 */	li r6, 0
/* 803E2734 003DF674  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E2738 003DF678  7D 89 03 A6 */	mtctr r12
/* 803E273C 003DF67C  4E 80 04 21 */	bctrl 
/* 803E2740 003DF680  48 00 00 18 */	b .L_803E2758
.L_803E2744:
/* 803E2744 003DF684  2C 00 00 01 */	cmpwi r0, 1
/* 803E2748 003DF688  40 82 00 10 */	bne .L_803E2758
/* 803E274C 003DF68C  7C 83 23 78 */	mr r3, r4
/* 803E2750 003DF690  38 80 00 03 */	li r4, 3
/* 803E2754 003DF694  4B FF 0C B5 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2758:
/* 803E2758 003DF698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E275C 003DF69C  7C 08 03 A6 */	mtlr r0
/* 803E2760 003DF6A0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2764 003DF6A4  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError24FSMState_W03_WrongSectorFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError24FSMState_W03_WrongSectorFPQ33ebi9CardError4TMgr:
/* 803E2768 003DF6A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E276C 003DF6AC  7C 08 02 A6 */	mflr r0
/* 803E2770 003DF6B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2774 003DF6B4  38 00 00 01 */	li r0, 1
/* 803E2778 003DF6B8  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E277C 003DF6BC  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2780 003DF6C0  2C 00 00 00 */	cmpwi r0, 0
/* 803E2784 003DF6C4  40 82 00 14 */	bne .L_803E2798
/* 803E2788 003DF6C8  7C 83 23 78 */	mr r3, r4
/* 803E278C 003DF6CC  38 80 00 04 */	li r4, 4
/* 803E2790 003DF6D0  4B FE 01 69 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E2794 003DF6D4  48 00 00 18 */	b .L_803E27AC
.L_803E2798:
/* 803E2798 003DF6D8  2C 00 00 01 */	cmpwi r0, 1
/* 803E279C 003DF6DC  40 82 00 10 */	bne .L_803E27AC
/* 803E27A0 003DF6E0  7C 83 23 78 */	mr r3, r4
/* 803E27A4 003DF6E4  38 80 00 17 */	li r4, 0x17
/* 803E27A8 003DF6E8  4B FE 01 51 */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E27AC:
/* 803E27AC 003DF6EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E27B0 003DF6F0  7C 08 03 A6 */	mtlr r0
/* 803E27B4 003DF6F4  38 21 00 10 */	addi r1, r1, 0x10
/* 803E27B8 003DF6F8  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError24FSMState_W03_WrongSectorFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError24FSMState_W03_WrongSectorFPQ33ebi9CardError4TMgr:
/* 803E27BC 003DF6FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E27C0 003DF700  7C 08 02 A6 */	mflr r0
/* 803E27C4 003DF704  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E27C8 003DF708  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E27CC 003DF70C  2C 00 00 00 */	cmpwi r0, 0
/* 803E27D0 003DF710  40 82 00 20 */	bne .L_803E27F0
/* 803E27D4 003DF714  81 83 00 00 */	lwz r12, 0(r3)
/* 803E27D8 003DF718  38 A0 00 17 */	li r5, 0x17
/* 803E27DC 003DF71C  38 C0 00 00 */	li r6, 0
/* 803E27E0 003DF720  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E27E4 003DF724  7D 89 03 A6 */	mtctr r12
/* 803E27E8 003DF728  4E 80 04 21 */	bctrl 
/* 803E27EC 003DF72C  48 00 00 18 */	b .L_803E2804
.L_803E27F0:
/* 803E27F0 003DF730  2C 00 00 01 */	cmpwi r0, 1
/* 803E27F4 003DF734  40 82 00 10 */	bne .L_803E2804
/* 803E27F8 003DF738  7C 83 23 78 */	mr r3, r4
/* 803E27FC 003DF73C  38 80 00 03 */	li r4, 3
/* 803E2800 003DF740  4B FF 0C 09 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2804:
/* 803E2804 003DF744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2808 003DF748  7C 08 03 A6 */	mtlr r0
/* 803E280C 003DF74C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2810 003DF750  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError25FSMState_W04_OverCapacityFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError25FSMState_W04_OverCapacityFPQ33ebi9CardError4TMgr:
/* 803E2814 003DF754  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2818 003DF758  7C 08 02 A6 */	mflr r0
/* 803E281C 003DF75C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2820 003DF760  38 00 00 01 */	li r0, 1
/* 803E2824 003DF764  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2828 003DF768  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E282C 003DF76C  2C 00 00 00 */	cmpwi r0, 0
/* 803E2830 003DF770  40 82 00 14 */	bne .L_803E2844
/* 803E2834 003DF774  7C 83 23 78 */	mr r3, r4
/* 803E2838 003DF778  38 80 00 06 */	li r4, 6
/* 803E283C 003DF77C  4B FE 00 BD */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E2840 003DF780  48 00 00 18 */	b .L_803E2858
.L_803E2844:
/* 803E2844 003DF784  2C 00 00 01 */	cmpwi r0, 1
/* 803E2848 003DF788  40 82 00 10 */	bne .L_803E2858
/* 803E284C 003DF78C  7C 83 23 78 */	mr r3, r4
/* 803E2850 003DF790  38 80 00 19 */	li r4, 0x19
/* 803E2854 003DF794  4B FE 00 A5 */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2858:
/* 803E2858 003DF798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E285C 003DF79C  7C 08 03 A6 */	mtlr r0
/* 803E2860 003DF7A0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2864 003DF7A4  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError25FSMState_W04_OverCapacityFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError25FSMState_W04_OverCapacityFPQ33ebi9CardError4TMgr:
/* 803E2868 003DF7A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E286C 003DF7AC  7C 08 02 A6 */	mflr r0
/* 803E2870 003DF7B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2874 003DF7B4  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2878 003DF7B8  2C 00 00 00 */	cmpwi r0, 0
/* 803E287C 003DF7BC  40 82 00 20 */	bne .L_803E289C
/* 803E2880 003DF7C0  81 83 00 00 */	lwz r12, 0(r3)
/* 803E2884 003DF7C4  38 A0 00 07 */	li r5, 7
/* 803E2888 003DF7C8  38 C0 00 00 */	li r6, 0
/* 803E288C 003DF7CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E2890 003DF7D0  7D 89 03 A6 */	mtctr r12
/* 803E2894 003DF7D4  4E 80 04 21 */	bctrl 
/* 803E2898 003DF7D8  48 00 00 24 */	b .L_803E28BC
.L_803E289C:
/* 803E289C 003DF7DC  2C 00 00 01 */	cmpwi r0, 1
/* 803E28A0 003DF7E0  40 82 00 1C */	bne .L_803E28BC
/* 803E28A4 003DF7E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803E28A8 003DF7E8  38 A0 00 07 */	li r5, 7
/* 803E28AC 003DF7EC  38 C0 00 00 */	li r6, 0
/* 803E28B0 003DF7F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E28B4 003DF7F4  7D 89 03 A6 */	mtctr r12
/* 803E28B8 003DF7F8  4E 80 04 21 */	bctrl 
.L_803E28BC:
/* 803E28BC 003DF7FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E28C0 003DF800  7C 08 03 A6 */	mtlr r0
/* 803E28C4 003DF804  38 21 00 10 */	addi r1, r1, 0x10
/* 803E28C8 003DF808  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError26FSMState_W05_InitCardOnIPLFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError26FSMState_W05_InitCardOnIPLFPQ33ebi9CardError4TMgr:
/* 803E28CC 003DF80C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E28D0 003DF810  7C 08 02 A6 */	mflr r0
/* 803E28D4 003DF814  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E28D8 003DF818  38 00 00 01 */	li r0, 1
/* 803E28DC 003DF81C  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E28E0 003DF820  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E28E4 003DF824  2C 00 00 00 */	cmpwi r0, 0
/* 803E28E8 003DF828  40 82 00 14 */	bne .L_803E28FC
/* 803E28EC 003DF82C  7C 83 23 78 */	mr r3, r4
/* 803E28F0 003DF830  38 80 00 07 */	li r4, 7
/* 803E28F4 003DF834  4B FE 00 05 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E28F8 003DF838  48 00 00 18 */	b .L_803E2910
.L_803E28FC:
/* 803E28FC 003DF83C  2C 00 00 01 */	cmpwi r0, 1
/* 803E2900 003DF840  40 82 00 10 */	bne .L_803E2910
/* 803E2904 003DF844  7C 83 23 78 */	mr r3, r4
/* 803E2908 003DF848  38 80 00 1A */	li r4, 0x1a
/* 803E290C 003DF84C  4B FD FF ED */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2910:
/* 803E2910 003DF850  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2914 003DF854  7C 08 03 A6 */	mtlr r0
/* 803E2918 003DF858  38 21 00 10 */	addi r1, r1, 0x10
/* 803E291C 003DF85C  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError26FSMState_W05_InitCardOnIPLFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError26FSMState_W05_InitCardOnIPLFPQ33ebi9CardError4TMgr:
/* 803E2920 003DF860  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2924 003DF864  7C 08 02 A6 */	mflr r0
/* 803E2928 003DF868  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E292C 003DF86C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2930 003DF870  2C 00 00 00 */	cmpwi r0, 0
/* 803E2934 003DF874  40 82 00 20 */	bne .L_803E2954
/* 803E2938 003DF878  81 83 00 00 */	lwz r12, 0(r3)
/* 803E293C 003DF87C  38 A0 00 14 */	li r5, 0x14
/* 803E2940 003DF880  38 C0 00 00 */	li r6, 0
/* 803E2944 003DF884  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E2948 003DF888  7D 89 03 A6 */	mtctr r12
/* 803E294C 003DF88C  4E 80 04 21 */	bctrl 
/* 803E2950 003DF890  48 00 00 24 */	b .L_803E2974
.L_803E2954:
/* 803E2954 003DF894  2C 00 00 01 */	cmpwi r0, 1
/* 803E2958 003DF898  40 82 00 1C */	bne .L_803E2974
/* 803E295C 003DF89C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E2960 003DF8A0  38 A0 00 14 */	li r5, 0x14
/* 803E2964 003DF8A4  38 C0 00 00 */	li r6, 0
/* 803E2968 003DF8A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E296C 003DF8AC  7D 89 03 A6 */	mtctr r12
/* 803E2970 003DF8B0  4E 80 04 21 */	bctrl 
.L_803E2974:
/* 803E2974 003DF8B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2978 003DF8B8  7C 08 03 A6 */	mtlr r0
/* 803E297C 003DF8BC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2980 003DF8C0  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError26FSMState_W06_CardNotUsableFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError26FSMState_W06_CardNotUsableFPQ33ebi9CardError4TMgr:
/* 803E2984 003DF8C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2988 003DF8C8  7C 08 02 A6 */	mflr r0
/* 803E298C 003DF8CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2990 003DF8D0  38 00 00 01 */	li r0, 1
/* 803E2994 003DF8D4  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2998 003DF8D8  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E299C 003DF8DC  2C 00 00 00 */	cmpwi r0, 0
/* 803E29A0 003DF8E0  40 82 00 14 */	bne .L_803E29B4
/* 803E29A4 003DF8E4  7C 83 23 78 */	mr r3, r4
/* 803E29A8 003DF8E8  38 80 00 0C */	li r4, 0xc
/* 803E29AC 003DF8EC  4B FD FF 4D */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E29B0 003DF8F0  48 00 00 18 */	b .L_803E29C8
.L_803E29B4:
/* 803E29B4 003DF8F4  2C 00 00 01 */	cmpwi r0, 1
/* 803E29B8 003DF8F8  40 82 00 10 */	bne .L_803E29C8
/* 803E29BC 003DF8FC  7C 83 23 78 */	mr r3, r4
/* 803E29C0 003DF900  38 80 00 1F */	li r4, 0x1f
/* 803E29C4 003DF904  4B FD FF 35 */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E29C8:
/* 803E29C8 003DF908  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E29CC 003DF90C  7C 08 03 A6 */	mtlr r0
/* 803E29D0 003DF910  38 21 00 10 */	addi r1, r1, 0x10
/* 803E29D4 003DF914  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError26FSMState_W06_CardNotUsableFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError26FSMState_W06_CardNotUsableFPQ33ebi9CardError4TMgr:
/* 803E29D8 003DF918  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E29DC 003DF91C  7C 08 02 A6 */	mflr r0
/* 803E29E0 003DF920  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E29E4 003DF924  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E29E8 003DF928  2C 00 00 00 */	cmpwi r0, 0
/* 803E29EC 003DF92C  40 82 00 20 */	bne .L_803E2A0C
/* 803E29F0 003DF930  81 83 00 00 */	lwz r12, 0(r3)
/* 803E29F4 003DF934  38 A0 00 17 */	li r5, 0x17
/* 803E29F8 003DF938  38 C0 00 00 */	li r6, 0
/* 803E29FC 003DF93C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E2A00 003DF940  7D 89 03 A6 */	mtctr r12
/* 803E2A04 003DF944  4E 80 04 21 */	bctrl 
/* 803E2A08 003DF948  48 00 00 18 */	b .L_803E2A20
.L_803E2A0C:
/* 803E2A0C 003DF94C  2C 00 00 01 */	cmpwi r0, 1
/* 803E2A10 003DF950  40 82 00 10 */	bne .L_803E2A20
/* 803E2A14 003DF954  7C 83 23 78 */	mr r3, r4
/* 803E2A18 003DF958  38 80 00 03 */	li r4, 3
/* 803E2A1C 003DF95C  4B FF 09 ED */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2A20:
/* 803E2A20 003DF960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2A24 003DF964  7C 08 03 A6 */	mtlr r0
/* 803E2A28 003DF968  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2A2C 003DF96C  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError26FSMState_W07_NoFileForSaveFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError26FSMState_W07_NoFileForSaveFPQ33ebi9CardError4TMgr:
/* 803E2A30 003DF970  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2A34 003DF974  7C 08 02 A6 */	mflr r0
/* 803E2A38 003DF978  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2A3C 003DF97C  38 00 00 01 */	li r0, 1
/* 803E2A40 003DF980  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2A44 003DF984  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2A48 003DF988  2C 00 00 00 */	cmpwi r0, 0
/* 803E2A4C 003DF98C  40 82 00 14 */	bne .L_803E2A60
/* 803E2A50 003DF990  7C 83 23 78 */	mr r3, r4
/* 803E2A54 003DF994  38 80 00 10 */	li r4, 0x10
/* 803E2A58 003DF998  4B FD FE A1 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E2A5C 003DF99C  48 00 00 18 */	b .L_803E2A74
.L_803E2A60:
/* 803E2A60 003DF9A0  2C 00 00 01 */	cmpwi r0, 1
/* 803E2A64 003DF9A4  40 82 00 10 */	bne .L_803E2A74
/* 803E2A68 003DF9A8  7C 83 23 78 */	mr r3, r4
/* 803E2A6C 003DF9AC  38 80 00 23 */	li r4, 0x23
/* 803E2A70 003DF9B0  4B FD FE 89 */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2A74:
/* 803E2A74 003DF9B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2A78 003DF9B8  7C 08 03 A6 */	mtlr r0
/* 803E2A7C 003DF9BC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2A80 003DF9C0  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError26FSMState_W07_NoFileForSaveFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError26FSMState_W07_NoFileForSaveFPQ33ebi9CardError4TMgr:
/* 803E2A84 003DF9C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2A88 003DF9C8  7C 08 02 A6 */	mflr r0
/* 803E2A8C 003DF9CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2A90 003DF9D0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2A94 003DF9D4  2C 00 00 00 */	cmpwi r0, 0
/* 803E2A98 003DF9D8  40 82 00 20 */	bne .L_803E2AB8
/* 803E2A9C 003DF9DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E2AA0 003DF9E0  38 A0 00 17 */	li r5, 0x17
/* 803E2AA4 003DF9E4  38 C0 00 00 */	li r6, 0
/* 803E2AA8 003DF9E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E2AAC 003DF9EC  7D 89 03 A6 */	mtctr r12
/* 803E2AB0 003DF9F0  4E 80 04 21 */	bctrl 
/* 803E2AB4 003DF9F4  48 00 00 18 */	b .L_803E2ACC
.L_803E2AB8:
/* 803E2AB8 003DF9F8  2C 00 00 01 */	cmpwi r0, 1
/* 803E2ABC 003DF9FC  40 82 00 10 */	bne .L_803E2ACC
/* 803E2AC0 003DFA00  7C 83 23 78 */	mr r3, r4
/* 803E2AC4 003DFA04  38 80 00 03 */	li r4, 3
/* 803E2AC8 003DFA08  4B FF 09 41 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2ACC:
/* 803E2ACC 003DFA0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2AD0 003DFA10  7C 08 03 A6 */	mtlr r0
/* 803E2AD4 003DFA14  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2AD8 003DFA18  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError25FSMState_W08_FinishFormatFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError25FSMState_W08_FinishFormatFPQ33ebi9CardError4TMgr:
/* 803E2ADC 003DFA1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2AE0 003DFA20  7C 08 02 A6 */	mflr r0
/* 803E2AE4 003DFA24  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2AE8 003DFA28  38 00 00 01 */	li r0, 1
/* 803E2AEC 003DFA2C  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2AF0 003DFA30  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2AF4 003DFA34  2C 00 00 00 */	cmpwi r0, 0
/* 803E2AF8 003DFA38  40 82 00 14 */	bne .L_803E2B0C
/* 803E2AFC 003DFA3C  7C 83 23 78 */	mr r3, r4
/* 803E2B00 003DFA40  38 80 00 09 */	li r4, 9
/* 803E2B04 003DFA44  4B FD FD F5 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E2B08 003DFA48  48 00 00 18 */	b .L_803E2B20
.L_803E2B0C:
/* 803E2B0C 003DFA4C  2C 00 00 01 */	cmpwi r0, 1
/* 803E2B10 003DFA50  40 82 00 10 */	bne .L_803E2B20
/* 803E2B14 003DFA54  7C 83 23 78 */	mr r3, r4
/* 803E2B18 003DFA58  38 80 00 1C */	li r4, 0x1c
/* 803E2B1C 003DFA5C  4B FD FD DD */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2B20:
/* 803E2B20 003DFA60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2B24 003DFA64  7C 08 03 A6 */	mtlr r0
/* 803E2B28 003DFA68  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2B2C 003DFA6C  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError25FSMState_W08_FinishFormatFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError25FSMState_W08_FinishFormatFPQ33ebi9CardError4TMgr:
/* 803E2B30 003DFA70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2B34 003DFA74  7C 08 02 A6 */	mflr r0
/* 803E2B38 003DFA78  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2B3C 003DFA7C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2B40 003DFA80  2C 00 00 00 */	cmpwi r0, 0
/* 803E2B44 003DFA84  40 82 00 14 */	bne .L_803E2B58
/* 803E2B48 003DFA88  7C 83 23 78 */	mr r3, r4
/* 803E2B4C 003DFA8C  38 80 00 02 */	li r4, 2
/* 803E2B50 003DFA90  4B FF 08 B9 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E2B54 003DFA94  48 00 00 18 */	b .L_803E2B6C
.L_803E2B58:
/* 803E2B58 003DFA98  2C 00 00 01 */	cmpwi r0, 1
/* 803E2B5C 003DFA9C  40 82 00 10 */	bne .L_803E2B6C
/* 803E2B60 003DFAA0  7C 83 23 78 */	mr r3, r4
/* 803E2B64 003DFAA4  38 80 00 04 */	li r4, 4
/* 803E2B68 003DFAA8  4B FF 08 A1 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2B6C:
/* 803E2B6C 003DFAAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2B70 003DFAB0  7C 08 03 A6 */	mtlr r0
/* 803E2B74 003DFAB4  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2B78 003DFAB8  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError32FSMState_W09_FinishCreateNewFileFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError32FSMState_W09_FinishCreateNewFileFPQ33ebi9CardError4TMgr:
/* 803E2B7C 003DFABC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2B80 003DFAC0  7C 08 02 A6 */	mflr r0
/* 803E2B84 003DFAC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2B88 003DFAC8  38 00 00 01 */	li r0, 1
/* 803E2B8C 003DFACC  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2B90 003DFAD0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2B94 003DFAD4  2C 00 00 00 */	cmpwi r0, 0
/* 803E2B98 003DFAD8  40 82 00 14 */	bne .L_803E2BAC
/* 803E2B9C 003DFADC  7C 83 23 78 */	mr r3, r4
/* 803E2BA0 003DFAE0  38 80 00 13 */	li r4, 0x13
/* 803E2BA4 003DFAE4  4B FD FD 55 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E2BA8 003DFAE8  48 00 00 18 */	b .L_803E2BC0
.L_803E2BAC:
/* 803E2BAC 003DFAEC  2C 00 00 01 */	cmpwi r0, 1
/* 803E2BB0 003DFAF0  40 82 00 10 */	bne .L_803E2BC0
/* 803E2BB4 003DFAF4  7C 83 23 78 */	mr r3, r4
/* 803E2BB8 003DFAF8  38 80 00 26 */	li r4, 0x26
/* 803E2BBC 003DFAFC  4B FD FD 3D */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2BC0:
/* 803E2BC0 003DFB00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2BC4 003DFB04  7C 08 03 A6 */	mtlr r0
/* 803E2BC8 003DFB08  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2BCC 003DFB0C  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError32FSMState_W09_FinishCreateNewFileFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError32FSMState_W09_FinishCreateNewFileFPQ33ebi9CardError4TMgr:
/* 803E2BD0 003DFB10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2BD4 003DFB14  7C 08 02 A6 */	mflr r0
/* 803E2BD8 003DFB18  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2BDC 003DFB1C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2BE0 003DFB20  2C 00 00 00 */	cmpwi r0, 0
/* 803E2BE4 003DFB24  40 82 00 14 */	bne .L_803E2BF8
/* 803E2BE8 003DFB28  7C 83 23 78 */	mr r3, r4
/* 803E2BEC 003DFB2C  38 80 00 02 */	li r4, 2
/* 803E2BF0 003DFB30  4B FF 08 19 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E2BF4 003DFB34  48 00 00 18 */	b .L_803E2C0C
.L_803E2BF8:
/* 803E2BF8 003DFB38  2C 00 00 01 */	cmpwi r0, 1
/* 803E2BFC 003DFB3C  40 82 00 10 */	bne .L_803E2C0C
/* 803E2C00 003DFB40  7C 83 23 78 */	mr r3, r4
/* 803E2C04 003DFB44  38 80 00 04 */	li r4, 4
/* 803E2C08 003DFB48  4B FF 08 01 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2C0C:
/* 803E2C0C 003DFB4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2C10 003DFB50  7C 08 03 A6 */	mtlr r0
/* 803E2C14 003DFB54  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2C18 003DFB58  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError26FSMState_W10_SerialNoErrorFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError26FSMState_W10_SerialNoErrorFPQ33ebi9CardError4TMgr:
/* 803E2C1C 003DFB5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2C20 003DFB60  7C 08 02 A6 */	mflr r0
/* 803E2C24 003DFB64  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2C28 003DFB68  38 00 00 01 */	li r0, 1
/* 803E2C2C 003DFB6C  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2C30 003DFB70  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2C34 003DFB74  2C 00 00 00 */	cmpwi r0, 0
/* 803E2C38 003DFB78  40 82 00 24 */	bne .L_803E2C5C
/* 803E2C3C 003DFB7C  3C 60 80 49 */	lis r3, lbl_80497118@ha
/* 803E2C40 003DFB80  3C A0 80 49 */	lis r5, lbl_8049712C@ha
/* 803E2C44 003DFB84  38 63 71 18 */	addi r3, r3, lbl_80497118@l
/* 803E2C48 003DFB88  38 80 00 EC */	li r4, 0xec
/* 803E2C4C 003DFB8C  38 A5 71 2C */	addi r5, r5, lbl_8049712C@l
/* 803E2C50 003DFB90  4C C6 31 82 */	crclr 6
/* 803E2C54 003DFB94  4B C4 79 ED */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E2C58 003DFB98  48 00 00 18 */	b .L_803E2C70
.L_803E2C5C:
/* 803E2C5C 003DFB9C  2C 00 00 01 */	cmpwi r0, 1
/* 803E2C60 003DFBA0  40 82 00 10 */	bne .L_803E2C70
/* 803E2C64 003DFBA4  7C 83 23 78 */	mr r3, r4
/* 803E2C68 003DFBA8  38 80 00 27 */	li r4, 0x27
/* 803E2C6C 003DFBAC  4B FD FC 8D */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2C70:
/* 803E2C70 003DFBB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2C74 003DFBB4  7C 08 03 A6 */	mtlr r0
/* 803E2C78 003DFBB8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2C7C 003DFBBC  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError26FSMState_W10_SerialNoErrorFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError26FSMState_W10_SerialNoErrorFPQ33ebi9CardError4TMgr:
/* 803E2C80 003DFBC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2C84 003DFBC4  7C 08 02 A6 */	mflr r0
/* 803E2C88 003DFBC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2C8C 003DFBCC  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2C90 003DFBD0  2C 00 00 00 */	cmpwi r0, 0
/* 803E2C94 003DFBD4  40 82 00 24 */	bne .L_803E2CB8
/* 803E2C98 003DFBD8  3C 60 80 49 */	lis r3, lbl_80497118@ha
/* 803E2C9C 003DFBDC  3C A0 80 49 */	lis r5, lbl_8049712C@ha
/* 803E2CA0 003DFBE0  38 63 71 18 */	addi r3, r3, lbl_80497118@l
/* 803E2CA4 003DFBE4  38 80 00 F5 */	li r4, 0xf5
/* 803E2CA8 003DFBE8  38 A5 71 2C */	addi r5, r5, lbl_8049712C@l
/* 803E2CAC 003DFBEC  4C C6 31 82 */	crclr 6
/* 803E2CB0 003DFBF0  4B C4 79 91 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E2CB4 003DFBF4  48 00 00 18 */	b .L_803E2CCC
.L_803E2CB8:
/* 803E2CB8 003DFBF8  2C 00 00 01 */	cmpwi r0, 1
/* 803E2CBC 003DFBFC  40 82 00 10 */	bne .L_803E2CCC
/* 803E2CC0 003DFC00  7C 83 23 78 */	mr r3, r4
/* 803E2CC4 003DFC04  38 80 00 03 */	li r4, 3
/* 803E2CC8 003DFC08  4B FF 07 41 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2CCC:
/* 803E2CCC 003DFC0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2CD0 003DFC10  7C 08 03 A6 */	mtlr r0
/* 803E2CD4 003DFC14  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2CD8 003DFC18  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError32FSMState_WF0_FailToFormat_NoCardFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError32FSMState_WF0_FailToFormat_NoCardFPQ33ebi9CardError4TMgr:
/* 803E2CDC 003DFC1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2CE0 003DFC20  7C 08 02 A6 */	mflr r0
/* 803E2CE4 003DFC24  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2CE8 003DFC28  38 00 00 00 */	li r0, 0
/* 803E2CEC 003DFC2C  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2CF0 003DFC30  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2CF4 003DFC34  2C 00 00 00 */	cmpwi r0, 0
/* 803E2CF8 003DFC38  40 82 00 14 */	bne .L_803E2D0C
/* 803E2CFC 003DFC3C  7C 83 23 78 */	mr r3, r4
/* 803E2D00 003DFC40  38 80 00 08 */	li r4, 8
/* 803E2D04 003DFC44  4B FD FB F5 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E2D08 003DFC48  48 00 00 18 */	b .L_803E2D20
.L_803E2D0C:
/* 803E2D0C 003DFC4C  2C 00 00 01 */	cmpwi r0, 1
/* 803E2D10 003DFC50  40 82 00 10 */	bne .L_803E2D20
/* 803E2D14 003DFC54  7C 83 23 78 */	mr r3, r4
/* 803E2D18 003DFC58  38 80 00 1B */	li r4, 0x1b
/* 803E2D1C 003DFC5C  4B FD FB DD */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2D20:
/* 803E2D20 003DFC60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2D24 003DFC64  7C 08 03 A6 */	mtlr r0
/* 803E2D28 003DFC68  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2D2C 003DFC6C  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError32FSMState_WF0_FailToFormat_NoCardFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError32FSMState_WF0_FailToFormat_NoCardFPQ33ebi9CardError4TMgr:
/* 803E2D30 003DFC70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2D34 003DFC74  7C 08 02 A6 */	mflr r0
/* 803E2D38 003DFC78  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2D3C 003DFC7C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2D40 003DFC80  2C 00 00 00 */	cmpwi r0, 0
/* 803E2D44 003DFC84  40 82 00 14 */	bne .L_803E2D58
/* 803E2D48 003DFC88  7C 83 23 78 */	mr r3, r4
/* 803E2D4C 003DFC8C  38 80 00 02 */	li r4, 2
/* 803E2D50 003DFC90  4B FF 06 B9 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E2D54 003DFC94  48 00 00 18 */	b .L_803E2D6C
.L_803E2D58:
/* 803E2D58 003DFC98  2C 00 00 01 */	cmpwi r0, 1
/* 803E2D5C 003DFC9C  40 82 00 10 */	bne .L_803E2D6C
/* 803E2D60 003DFCA0  7C 83 23 78 */	mr r3, r4
/* 803E2D64 003DFCA4  38 80 00 04 */	li r4, 4
/* 803E2D68 003DFCA8  4B FF 06 A1 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2D6C:
/* 803E2D6C 003DFCAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2D70 003DFCB0  7C 08 03 A6 */	mtlr r0
/* 803E2D74 003DFCB4  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2D78 003DFCB8  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError33FSMState_WF1_FailToFormat_IOErrorFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError33FSMState_WF1_FailToFormat_IOErrorFPQ33ebi9CardError4TMgr:
/* 803E2D7C 003DFCBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2D80 003DFCC0  7C 08 02 A6 */	mflr r0
/* 803E2D84 003DFCC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2D88 003DFCC8  38 00 00 01 */	li r0, 1
/* 803E2D8C 003DFCCC  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2D90 003DFCD0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2D94 003DFCD4  2C 00 00 00 */	cmpwi r0, 0
/* 803E2D98 003DFCD8  40 82 00 14 */	bne .L_803E2DAC
/* 803E2D9C 003DFCDC  7C 83 23 78 */	mr r3, r4
/* 803E2DA0 003DFCE0  38 80 00 08 */	li r4, 8
/* 803E2DA4 003DFCE4  4B FD FB 55 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E2DA8 003DFCE8  48 00 00 18 */	b .L_803E2DC0
.L_803E2DAC:
/* 803E2DAC 003DFCEC  2C 00 00 01 */	cmpwi r0, 1
/* 803E2DB0 003DFCF0  40 82 00 10 */	bne .L_803E2DC0
/* 803E2DB4 003DFCF4  7C 83 23 78 */	mr r3, r4
/* 803E2DB8 003DFCF8  38 80 00 1B */	li r4, 0x1b
/* 803E2DBC 003DFCFC  4B FD FB 3D */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2DC0:
/* 803E2DC0 003DFD00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2DC4 003DFD04  7C 08 03 A6 */	mtlr r0
/* 803E2DC8 003DFD08  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2DCC 003DFD0C  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError33FSMState_WF1_FailToFormat_IOErrorFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError33FSMState_WF1_FailToFormat_IOErrorFPQ33ebi9CardError4TMgr:
/* 803E2DD0 003DFD10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2DD4 003DFD14  7C 08 02 A6 */	mflr r0
/* 803E2DD8 003DFD18  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2DDC 003DFD1C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2DE0 003DFD20  2C 00 00 00 */	cmpwi r0, 0
/* 803E2DE4 003DFD24  40 82 00 14 */	bne .L_803E2DF8
/* 803E2DE8 003DFD28  7C 83 23 78 */	mr r3, r4
/* 803E2DEC 003DFD2C  38 80 00 02 */	li r4, 2
/* 803E2DF0 003DFD30  4B FF 06 19 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E2DF4 003DFD34  48 00 00 18 */	b .L_803E2E0C
.L_803E2DF8:
/* 803E2DF8 003DFD38  2C 00 00 01 */	cmpwi r0, 1
/* 803E2DFC 003DFD3C  40 82 00 10 */	bne .L_803E2E0C
/* 803E2E00 003DFD40  7C 83 23 78 */	mr r3, r4
/* 803E2E04 003DFD44  38 80 00 04 */	li r4, 4
/* 803E2E08 003DFD48  4B FF 06 01 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2E0C:
/* 803E2E0C 003DFD4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2E10 003DFD50  7C 08 03 A6 */	mtlr r0
/* 803E2E14 003DFD54  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2E18 003DFD58  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError39FSMState_WF2_FailToCreateNewFile_NoCardFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError39FSMState_WF2_FailToCreateNewFile_NoCardFPQ33ebi9CardError4TMgr:
/* 803E2E1C 003DFD5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2E20 003DFD60  7C 08 02 A6 */	mflr r0
/* 803E2E24 003DFD64  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2E28 003DFD68  38 00 00 00 */	li r0, 0
/* 803E2E2C 003DFD6C  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2E30 003DFD70  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2E34 003DFD74  2C 00 00 00 */	cmpwi r0, 0
/* 803E2E38 003DFD78  40 82 00 14 */	bne .L_803E2E4C
/* 803E2E3C 003DFD7C  7C 83 23 78 */	mr r3, r4
/* 803E2E40 003DFD80  38 80 00 11 */	li r4, 0x11
/* 803E2E44 003DFD84  4B FD FA B5 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E2E48 003DFD88  48 00 00 18 */	b .L_803E2E60
.L_803E2E4C:
/* 803E2E4C 003DFD8C  2C 00 00 01 */	cmpwi r0, 1
/* 803E2E50 003DFD90  40 82 00 10 */	bne .L_803E2E60
/* 803E2E54 003DFD94  7C 83 23 78 */	mr r3, r4
/* 803E2E58 003DFD98  38 80 00 25 */	li r4, 0x25
/* 803E2E5C 003DFD9C  4B FD FA 9D */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2E60:
/* 803E2E60 003DFDA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2E64 003DFDA4  7C 08 03 A6 */	mtlr r0
/* 803E2E68 003DFDA8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2E6C 003DFDAC  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError39FSMState_WF2_FailToCreateNewFile_NoCardFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError39FSMState_WF2_FailToCreateNewFile_NoCardFPQ33ebi9CardError4TMgr:
/* 803E2E70 003DFDB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2E74 003DFDB4  7C 08 02 A6 */	mflr r0
/* 803E2E78 003DFDB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2E7C 003DFDBC  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2E80 003DFDC0  2C 00 00 00 */	cmpwi r0, 0
/* 803E2E84 003DFDC4  40 82 00 14 */	bne .L_803E2E98
/* 803E2E88 003DFDC8  7C 83 23 78 */	mr r3, r4
/* 803E2E8C 003DFDCC  38 80 00 02 */	li r4, 2
/* 803E2E90 003DFDD0  4B FF 05 79 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E2E94 003DFDD4  48 00 00 18 */	b .L_803E2EAC
.L_803E2E98:
/* 803E2E98 003DFDD8  2C 00 00 01 */	cmpwi r0, 1
/* 803E2E9C 003DFDDC  40 82 00 10 */	bne .L_803E2EAC
/* 803E2EA0 003DFDE0  7C 83 23 78 */	mr r3, r4
/* 803E2EA4 003DFDE4  38 80 00 04 */	li r4, 4
/* 803E2EA8 003DFDE8  4B FF 05 61 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2EAC:
/* 803E2EAC 003DFDEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2EB0 003DFDF0  7C 08 03 A6 */	mtlr r0
/* 803E2EB4 003DFDF4  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2EB8 003DFDF8  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError40FSMState_WF3_FailToCreateNewFile_IOErrorFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError40FSMState_WF3_FailToCreateNewFile_IOErrorFPQ33ebi9CardError4TMgr:
/* 803E2EBC 003DFDFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2EC0 003DFE00  7C 08 02 A6 */	mflr r0
/* 803E2EC4 003DFE04  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2EC8 003DFE08  38 00 00 01 */	li r0, 1
/* 803E2ECC 003DFE0C  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2ED0 003DFE10  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2ED4 003DFE14  2C 00 00 00 */	cmpwi r0, 0
/* 803E2ED8 003DFE18  40 82 00 14 */	bne .L_803E2EEC
/* 803E2EDC 003DFE1C  7C 83 23 78 */	mr r3, r4
/* 803E2EE0 003DFE20  38 80 00 11 */	li r4, 0x11
/* 803E2EE4 003DFE24  4B FD FA 15 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E2EE8 003DFE28  48 00 00 18 */	b .L_803E2F00
.L_803E2EEC:
/* 803E2EEC 003DFE2C  2C 00 00 01 */	cmpwi r0, 1
/* 803E2EF0 003DFE30  40 82 00 10 */	bne .L_803E2F00
/* 803E2EF4 003DFE34  7C 83 23 78 */	mr r3, r4
/* 803E2EF8 003DFE38  38 80 00 25 */	li r4, 0x25
/* 803E2EFC 003DFE3C  4B FD F9 FD */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2F00:
/* 803E2F00 003DFE40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2F04 003DFE44  7C 08 03 A6 */	mtlr r0
/* 803E2F08 003DFE48  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2F0C 003DFE4C  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError40FSMState_WF3_FailToCreateNewFile_IOErrorFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError40FSMState_WF3_FailToCreateNewFile_IOErrorFPQ33ebi9CardError4TMgr:
/* 803E2F10 003DFE50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2F14 003DFE54  7C 08 02 A6 */	mflr r0
/* 803E2F18 003DFE58  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2F1C 003DFE5C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2F20 003DFE60  2C 00 00 00 */	cmpwi r0, 0
/* 803E2F24 003DFE64  40 82 00 14 */	bne .L_803E2F38
/* 803E2F28 003DFE68  7C 83 23 78 */	mr r3, r4
/* 803E2F2C 003DFE6C  38 80 00 02 */	li r4, 2
/* 803E2F30 003DFE70  4B FF 04 D9 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E2F34 003DFE74  48 00 00 18 */	b .L_803E2F4C
.L_803E2F38:
/* 803E2F38 003DFE78  2C 00 00 01 */	cmpwi r0, 1
/* 803E2F3C 003DFE7C  40 82 00 10 */	bne .L_803E2F4C
/* 803E2F40 003DFE80  7C 83 23 78 */	mr r3, r4
/* 803E2F44 003DFE84  38 80 00 04 */	li r4, 4
/* 803E2F48 003DFE88  4B FF 04 C1 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2F4C:
/* 803E2F4C 003DFE8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2F50 003DFE90  7C 08 03 A6 */	mtlr r0
/* 803E2F54 003DFE94  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2F58 003DFE98  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError30FSMState_WF4_FailToSave_NoCardFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError30FSMState_WF4_FailToSave_NoCardFPQ33ebi9CardError4TMgr:
/* 803E2F5C 003DFE9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2F60 003DFEA0  7C 08 02 A6 */	mflr r0
/* 803E2F64 003DFEA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2F68 003DFEA8  38 00 00 00 */	li r0, 0
/* 803E2F6C 003DFEAC  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E2F70 003DFEB0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2F74 003DFEB4  2C 00 00 00 */	cmpwi r0, 0
/* 803E2F78 003DFEB8  40 82 00 24 */	bne .L_803E2F9C
/* 803E2F7C 003DFEBC  3C 60 80 49 */	lis r3, lbl_80497118@ha
/* 803E2F80 003DFEC0  3C A0 80 49 */	lis r5, lbl_8049712C@ha
/* 803E2F84 003DFEC4  38 63 71 18 */	addi r3, r3, lbl_80497118@l
/* 803E2F88 003DFEC8  38 80 01 56 */	li r4, 0x156
/* 803E2F8C 003DFECC  38 A5 71 2C */	addi r5, r5, lbl_8049712C@l
/* 803E2F90 003DFED0  4C C6 31 82 */	crclr 6
/* 803E2F94 003DFED4  4B C4 76 AD */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E2F98 003DFED8  48 00 00 18 */	b .L_803E2FB0
.L_803E2F9C:
/* 803E2F9C 003DFEDC  2C 00 00 01 */	cmpwi r0, 1
/* 803E2FA0 003DFEE0  40 82 00 10 */	bne .L_803E2FB0
/* 803E2FA4 003DFEE4  7C 83 23 78 */	mr r3, r4
/* 803E2FA8 003DFEE8  38 80 00 2B */	li r4, 0x2b
/* 803E2FAC 003DFEEC  4B FD F9 4D */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E2FB0:
/* 803E2FB0 003DFEF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2FB4 003DFEF4  7C 08 03 A6 */	mtlr r0
/* 803E2FB8 003DFEF8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2FBC 003DFEFC  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError30FSMState_WF4_FailToSave_NoCardFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError30FSMState_WF4_FailToSave_NoCardFPQ33ebi9CardError4TMgr:
/* 803E2FC0 003DFF00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2FC4 003DFF04  7C 08 02 A6 */	mflr r0
/* 803E2FC8 003DFF08  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2FCC 003DFF0C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E2FD0 003DFF10  2C 00 00 00 */	cmpwi r0, 0
/* 803E2FD4 003DFF14  40 82 00 14 */	bne .L_803E2FE8
/* 803E2FD8 003DFF18  7C 83 23 78 */	mr r3, r4
/* 803E2FDC 003DFF1C  38 80 00 02 */	li r4, 2
/* 803E2FE0 003DFF20  4B FF 04 29 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E2FE4 003DFF24  48 00 00 18 */	b .L_803E2FFC
.L_803E2FE8:
/* 803E2FE8 003DFF28  2C 00 00 01 */	cmpwi r0, 1
/* 803E2FEC 003DFF2C  40 82 00 10 */	bne .L_803E2FFC
/* 803E2FF0 003DFF30  7C 83 23 78 */	mr r3, r4
/* 803E2FF4 003DFF34  38 80 00 04 */	li r4, 4
/* 803E2FF8 003DFF38  4B FF 04 11 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E2FFC:
/* 803E2FFC 003DFF3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3000 003DFF40  7C 08 03 A6 */	mtlr r0
/* 803E3004 003DFF44  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3008 003DFF48  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError31FSMState_WF5_FailToSave_IOErrorFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError31FSMState_WF5_FailToSave_IOErrorFPQ33ebi9CardError4TMgr:
/* 803E300C 003DFF4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3010 003DFF50  7C 08 02 A6 */	mflr r0
/* 803E3014 003DFF54  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3018 003DFF58  38 00 00 01 */	li r0, 1
/* 803E301C 003DFF5C  98 03 00 12 */	stb r0, 0x12(r3)
/* 803E3020 003DFF60  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3024 003DFF64  2C 00 00 00 */	cmpwi r0, 0
/* 803E3028 003DFF68  40 82 00 24 */	bne .L_803E304C
/* 803E302C 003DFF6C  3C 60 80 49 */	lis r3, lbl_80497118@ha
/* 803E3030 003DFF70  3C A0 80 49 */	lis r5, lbl_8049712C@ha
/* 803E3034 003DFF74  38 63 71 18 */	addi r3, r3, lbl_80497118@l
/* 803E3038 003DFF78  38 80 01 6B */	li r4, 0x16b
/* 803E303C 003DFF7C  38 A5 71 2C */	addi r5, r5, lbl_8049712C@l
/* 803E3040 003DFF80  4C C6 31 82 */	crclr 6
/* 803E3044 003DFF84  4B C4 75 FD */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E3048 003DFF88  48 00 00 18 */	b .L_803E3060
.L_803E304C:
/* 803E304C 003DFF8C  2C 00 00 01 */	cmpwi r0, 1
/* 803E3050 003DFF90  40 82 00 10 */	bne .L_803E3060
/* 803E3054 003DFF94  7C 83 23 78 */	mr r3, r4
/* 803E3058 003DFF98  38 80 00 2B */	li r4, 0x2b
/* 803E305C 003DFF9C  4B FD F8 9D */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E3060:
/* 803E3060 003DFFA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3064 003DFFA4  7C 08 03 A6 */	mtlr r0
/* 803E3068 003DFFA8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E306C 003DFFAC  4E 80 00 20 */	blr 

.global do_transit__Q33ebi9CardError31FSMState_WF5_FailToSave_IOErrorFPQ33ebi9CardError4TMgr
do_transit__Q33ebi9CardError31FSMState_WF5_FailToSave_IOErrorFPQ33ebi9CardError4TMgr:
/* 803E3070 003DFFB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3074 003DFFB4  7C 08 02 A6 */	mflr r0
/* 803E3078 003DFFB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E307C 003DFFBC  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3080 003DFFC0  2C 00 00 00 */	cmpwi r0, 0
/* 803E3084 003DFFC4  40 82 00 14 */	bne .L_803E3098
/* 803E3088 003DFFC8  7C 83 23 78 */	mr r3, r4
/* 803E308C 003DFFCC  38 80 00 02 */	li r4, 2
/* 803E3090 003DFFD0  4B FF 03 79 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E3094 003DFFD4  48 00 00 18 */	b .L_803E30AC
.L_803E3098:
/* 803E3098 003DFFD8  2C 00 00 01 */	cmpwi r0, 1
/* 803E309C 003DFFDC  40 82 00 10 */	bne .L_803E30AC
/* 803E30A0 003DFFE0  7C 83 23 78 */	mr r3, r4
/* 803E30A4 003DFFE4  38 80 00 04 */	li r4, 4
/* 803E30A8 003DFFE8  4B FF 03 61 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E30AC:
/* 803E30AC 003DFFEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E30B0 003DFFF0  7C 08 03 A6 */	mtlr r0
/* 803E30B4 003DFFF4  38 21 00 10 */	addi r1, r1, 0x10
/* 803E30B8 003DFFF8  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormatFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormatFPQ33ebi9CardError4TMgr:
/* 803E30BC 003DFFFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E30C0 003E0000  7C 08 02 A6 */	mflr r0
/* 803E30C4 003E0004  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E30C8 003E0008  38 00 00 01 */	li r0, 1
/* 803E30CC 003E000C  98 03 00 10 */	stb r0, 0x10(r3)
/* 803E30D0 003E0010  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E30D4 003E0014  2C 00 00 00 */	cmpwi r0, 0
/* 803E30D8 003E0018  40 82 00 14 */	bne .L_803E30EC
/* 803E30DC 003E001C  7C 83 23 78 */	mr r3, r4
/* 803E30E0 003E0020  38 80 00 05 */	li r4, 5
/* 803E30E4 003E0024  4B FD F8 15 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E30E8 003E0028  48 00 00 18 */	b .L_803E3100
.L_803E30EC:
/* 803E30EC 003E002C  2C 00 00 01 */	cmpwi r0, 1
/* 803E30F0 003E0030  40 82 00 10 */	bne .L_803E3100
/* 803E30F4 003E0034  7C 83 23 78 */	mr r3, r4
/* 803E30F8 003E0038  38 80 00 18 */	li r4, 0x18
/* 803E30FC 003E003C  4B FD F7 FD */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E3100:
/* 803E3100 003E0040  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3104 003E0044  7C 08 03 A6 */	mtlr r0
/* 803E3108 003E0048  38 21 00 10 */	addi r1, r1, 0x10
/* 803E310C 003E004C  4E 80 00 20 */	blr 

.global do_transitYes__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormatFPQ33ebi9CardError4TMgr
do_transitYes__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormatFPQ33ebi9CardError4TMgr:
/* 803E3110 003E0050  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3114 003E0054  7C 08 02 A6 */	mflr r0
/* 803E3118 003E0058  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E311C 003E005C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3120 003E0060  2C 00 00 00 */	cmpwi r0, 0
/* 803E3124 003E0064  40 82 00 20 */	bne .L_803E3144
/* 803E3128 003E0068  81 83 00 00 */	lwz r12, 0(r3)
/* 803E312C 003E006C  38 A0 00 15 */	li r5, 0x15
/* 803E3130 003E0070  38 C0 00 00 */	li r6, 0
/* 803E3134 003E0074  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E3138 003E0078  7D 89 03 A6 */	mtctr r12
/* 803E313C 003E007C  4E 80 04 21 */	bctrl 
/* 803E3140 003E0080  48 00 00 24 */	b .L_803E3164
.L_803E3144:
/* 803E3144 003E0084  2C 00 00 01 */	cmpwi r0, 1
/* 803E3148 003E0088  40 82 00 1C */	bne .L_803E3164
/* 803E314C 003E008C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E3150 003E0090  38 A0 00 15 */	li r5, 0x15
/* 803E3154 003E0094  38 C0 00 00 */	li r6, 0
/* 803E3158 003E0098  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E315C 003E009C  7D 89 03 A6 */	mtctr r12
/* 803E3160 003E00A0  4E 80 04 21 */	bctrl 
.L_803E3164:
/* 803E3164 003E00A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3168 003E00A8  7C 08 03 A6 */	mtlr r0
/* 803E316C 003E00AC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3170 003E00B0  4E 80 00 20 */	blr 

.global do_transitNo__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormatFPQ33ebi9CardError4TMgr
do_transitNo__Q33ebi9CardError37FSMState_Q00_DataBrokenAndDoYouFormatFPQ33ebi9CardError4TMgr:
/* 803E3174 003E00B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3178 003E00B8  7C 08 02 A6 */	mflr r0
/* 803E317C 003E00BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3180 003E00C0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3184 003E00C4  2C 00 00 00 */	cmpwi r0, 0
/* 803E3188 003E00C8  40 82 00 20 */	bne .L_803E31A8
/* 803E318C 003E00CC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E3190 003E00D0  38 A0 00 08 */	li r5, 8
/* 803E3194 003E00D4  38 C0 00 00 */	li r6, 0
/* 803E3198 003E00D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E319C 003E00DC  7D 89 03 A6 */	mtctr r12
/* 803E31A0 003E00E0  4E 80 04 21 */	bctrl 
/* 803E31A4 003E00E4  48 00 00 24 */	b .L_803E31C8
.L_803E31A8:
/* 803E31A8 003E00E8  2C 00 00 01 */	cmpwi r0, 1
/* 803E31AC 003E00EC  40 82 00 1C */	bne .L_803E31C8
/* 803E31B0 003E00F0  81 83 00 00 */	lwz r12, 0(r3)
/* 803E31B4 003E00F4  38 A0 00 08 */	li r5, 8
/* 803E31B8 003E00F8  38 C0 00 00 */	li r6, 0
/* 803E31BC 003E00FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E31C0 003E0100  7D 89 03 A6 */	mtctr r12
/* 803E31C4 003E0104  4E 80 04 21 */	bctrl 
.L_803E31C8:
/* 803E31C8 003E0108  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E31CC 003E010C  7C 08 03 A6 */	mtlr r0
/* 803E31D0 003E0110  38 21 00 10 */	addi r1, r1, 0x10
/* 803E31D4 003E0114  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPLFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPLFPQ33ebi9CardError4TMgr:
/* 803E31D8 003E0118  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E31DC 003E011C  7C 08 02 A6 */	mflr r0
/* 803E31E0 003E0120  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E31E4 003E0124  38 00 00 01 */	li r0, 1
/* 803E31E8 003E0128  98 03 00 10 */	stb r0, 0x10(r3)
/* 803E31EC 003E012C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E31F0 003E0130  2C 00 00 00 */	cmpwi r0, 0
/* 803E31F4 003E0134  40 82 00 14 */	bne .L_803E3208
/* 803E31F8 003E0138  7C 83 23 78 */	mr r3, r4
/* 803E31FC 003E013C  38 80 00 0D */	li r4, 0xd
/* 803E3200 003E0140  4B FD F6 F9 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E3204 003E0144  48 00 00 18 */	b .L_803E321C
.L_803E3208:
/* 803E3208 003E0148  2C 00 00 01 */	cmpwi r0, 1
/* 803E320C 003E014C  40 82 00 10 */	bne .L_803E321C
/* 803E3210 003E0150  7C 83 23 78 */	mr r3, r4
/* 803E3214 003E0154  38 80 00 21 */	li r4, 0x21
/* 803E3218 003E0158  4B FD F6 E1 */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E321C:
/* 803E321C 003E015C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3220 003E0160  7C 08 03 A6 */	mtlr r0
/* 803E3224 003E0164  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3228 003E0168  4E 80 00 20 */	blr 

.global do_transitYes__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPLFPQ33ebi9CardError4TMgr
do_transitYes__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPLFPQ33ebi9CardError4TMgr:
/* 803E322C 003E016C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3230 003E0170  7C 08 02 A6 */	mflr r0
/* 803E3234 003E0174  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3238 003E0178  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E323C 003E017C  2C 00 00 00 */	cmpwi r0, 0
/* 803E3240 003E0180  40 82 00 14 */	bne .L_803E3254
/* 803E3244 003E0184  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E3248 003E0188  38 80 00 01 */	li r4, 1
/* 803E324C 003E018C  48 04 01 29 */	bl resetOn__6SystemFb
/* 803E3250 003E0190  48 00 00 24 */	b .L_803E3274
.L_803E3254:
/* 803E3254 003E0194  2C 00 00 01 */	cmpwi r0, 1
/* 803E3258 003E0198  40 82 00 1C */	bne .L_803E3274
/* 803E325C 003E019C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E3260 003E01A0  38 A0 00 18 */	li r5, 0x18
/* 803E3264 003E01A4  38 C0 00 00 */	li r6, 0
/* 803E3268 003E01A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E326C 003E01AC  7D 89 03 A6 */	mtctr r12
/* 803E3270 003E01B0  4E 80 04 21 */	bctrl 
.L_803E3274:
/* 803E3274 003E01B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3278 003E01B8  7C 08 03 A6 */	mtlr r0
/* 803E327C 003E01BC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3280 003E01C0  4E 80 00 20 */	blr 

.global do_transitNo__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPLFPQ33ebi9CardError4TMgr
do_transitNo__Q33ebi9CardError25FSMState_Q01_DoYouOpenIPLFPQ33ebi9CardError4TMgr:
/* 803E3284 003E01C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3288 003E01C8  7C 08 02 A6 */	mflr r0
/* 803E328C 003E01CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3290 003E01D0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3294 003E01D4  2C 00 00 00 */	cmpwi r0, 0
/* 803E3298 003E01D8  40 82 00 20 */	bne .L_803E32B8
/* 803E329C 003E01DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E32A0 003E01E0  38 A0 00 17 */	li r5, 0x17
/* 803E32A4 003E01E4  38 C0 00 00 */	li r6, 0
/* 803E32A8 003E01E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E32AC 003E01EC  7D 89 03 A6 */	mtctr r12
/* 803E32B0 003E01F0  4E 80 04 21 */	bctrl 
/* 803E32B4 003E01F4  48 00 00 18 */	b .L_803E32CC
.L_803E32B8:
/* 803E32B8 003E01F8  2C 00 00 01 */	cmpwi r0, 1
/* 803E32BC 003E01FC  40 82 00 10 */	bne .L_803E32CC
/* 803E32C0 003E0200  7C 83 23 78 */	mr r3, r4
/* 803E32C4 003E0204  38 80 00 03 */	li r4, 3
/* 803E32C8 003E0208  4B FF 01 41 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E32CC:
/* 803E32CC 003E020C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E32D0 003E0210  7C 08 03 A6 */	mtlr r0
/* 803E32D4 003E0214  38 21 00 10 */	addi r1, r1, 0x10
/* 803E32D8 003E0218  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError24FSMState_Q02_DoYouFormatFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError24FSMState_Q02_DoYouFormatFPQ33ebi9CardError4TMgr:
/* 803E32DC 003E021C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E32E0 003E0220  7C 08 02 A6 */	mflr r0
/* 803E32E4 003E0224  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E32E8 003E0228  38 00 00 01 */	li r0, 1
/* 803E32EC 003E022C  98 03 00 10 */	stb r0, 0x10(r3)
/* 803E32F0 003E0230  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E32F4 003E0234  2C 00 00 00 */	cmpwi r0, 0
/* 803E32F8 003E0238  40 82 00 14 */	bne .L_803E330C
/* 803E32FC 003E023C  7C 83 23 78 */	mr r3, r4
/* 803E3300 003E0240  38 80 00 0B */	li r4, 0xb
/* 803E3304 003E0244  4B FD F5 F5 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E3308 003E0248  48 00 00 18 */	b .L_803E3320
.L_803E330C:
/* 803E330C 003E024C  2C 00 00 01 */	cmpwi r0, 1
/* 803E3310 003E0250  40 82 00 10 */	bne .L_803E3320
/* 803E3314 003E0254  7C 83 23 78 */	mr r3, r4
/* 803E3318 003E0258  38 80 00 1E */	li r4, 0x1e
/* 803E331C 003E025C  4B FD F5 DD */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E3320:
/* 803E3320 003E0260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3324 003E0264  7C 08 03 A6 */	mtlr r0
/* 803E3328 003E0268  38 21 00 10 */	addi r1, r1, 0x10
/* 803E332C 003E026C  4E 80 00 20 */	blr 

.global do_transitYes__Q33ebi9CardError24FSMState_Q02_DoYouFormatFPQ33ebi9CardError4TMgr
do_transitYes__Q33ebi9CardError24FSMState_Q02_DoYouFormatFPQ33ebi9CardError4TMgr:
/* 803E3330 003E0270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3334 003E0274  7C 08 02 A6 */	mflr r0
/* 803E3338 003E0278  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E333C 003E027C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3340 003E0280  2C 00 00 00 */	cmpwi r0, 0
/* 803E3344 003E0284  40 82 00 20 */	bne .L_803E3364
/* 803E3348 003E0288  81 83 00 00 */	lwz r12, 0(r3)
/* 803E334C 003E028C  38 A0 00 19 */	li r5, 0x19
/* 803E3350 003E0290  38 C0 00 00 */	li r6, 0
/* 803E3354 003E0294  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E3358 003E0298  7D 89 03 A6 */	mtctr r12
/* 803E335C 003E029C  4E 80 04 21 */	bctrl 
/* 803E3360 003E02A0  48 00 00 24 */	b .L_803E3384
.L_803E3364:
/* 803E3364 003E02A4  2C 00 00 01 */	cmpwi r0, 1
/* 803E3368 003E02A8  40 82 00 1C */	bne .L_803E3384
/* 803E336C 003E02AC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E3370 003E02B0  38 A0 00 19 */	li r5, 0x19
/* 803E3374 003E02B4  38 C0 00 00 */	li r6, 0
/* 803E3378 003E02B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E337C 003E02BC  7D 89 03 A6 */	mtctr r12
/* 803E3380 003E02C0  4E 80 04 21 */	bctrl 
.L_803E3384:
/* 803E3384 003E02C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3388 003E02C8  7C 08 03 A6 */	mtlr r0
/* 803E338C 003E02CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3390 003E02D0  4E 80 00 20 */	blr 

.global do_transitNo__Q33ebi9CardError24FSMState_Q02_DoYouFormatFPQ33ebi9CardError4TMgr
do_transitNo__Q33ebi9CardError24FSMState_Q02_DoYouFormatFPQ33ebi9CardError4TMgr:
/* 803E3394 003E02D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3398 003E02D8  7C 08 02 A6 */	mflr r0
/* 803E339C 003E02DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E33A0 003E02E0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E33A4 003E02E4  2C 00 00 00 */	cmpwi r0, 0
/* 803E33A8 003E02E8  40 82 00 20 */	bne .L_803E33C8
/* 803E33AC 003E02EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E33B0 003E02F0  38 A0 00 08 */	li r5, 8
/* 803E33B4 003E02F4  38 C0 00 00 */	li r6, 0
/* 803E33B8 003E02F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E33BC 003E02FC  7D 89 03 A6 */	mtctr r12
/* 803E33C0 003E0300  4E 80 04 21 */	bctrl 
/* 803E33C4 003E0304  48 00 00 24 */	b .L_803E33E8
.L_803E33C8:
/* 803E33C8 003E0308  2C 00 00 01 */	cmpwi r0, 1
/* 803E33CC 003E030C  40 82 00 1C */	bne .L_803E33E8
/* 803E33D0 003E0310  81 83 00 00 */	lwz r12, 0(r3)
/* 803E33D4 003E0314  38 A0 00 08 */	li r5, 8
/* 803E33D8 003E0318  38 C0 00 00 */	li r6, 0
/* 803E33DC 003E031C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E33E0 003E0320  7D 89 03 A6 */	mtctr r12
/* 803E33E4 003E0324  4E 80 04 21 */	bctrl 
.L_803E33E8:
/* 803E33E8 003E0328  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E33EC 003E032C  7C 08 03 A6 */	mtlr r0
/* 803E33F0 003E0330  38 21 00 10 */	addi r1, r1, 0x10
/* 803E33F4 003E0334  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFileFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFileFPQ33ebi9CardError4TMgr:
/* 803E33F8 003E0338  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E33FC 003E033C  7C 08 02 A6 */	mflr r0
/* 803E3400 003E0340  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3404 003E0344  38 00 00 01 */	li r0, 1
/* 803E3408 003E0348  98 03 00 10 */	stb r0, 0x10(r3)
/* 803E340C 003E034C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3410 003E0350  2C 00 00 00 */	cmpwi r0, 0
/* 803E3414 003E0354  40 82 00 14 */	bne .L_803E3428
/* 803E3418 003E0358  7C 83 23 78 */	mr r3, r4
/* 803E341C 003E035C  38 80 00 0F */	li r4, 0xf
/* 803E3420 003E0360  4B FD F4 D9 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E3424 003E0364  48 00 00 18 */	b .L_803E343C
.L_803E3428:
/* 803E3428 003E0368  2C 00 00 01 */	cmpwi r0, 1
/* 803E342C 003E036C  40 82 00 10 */	bne .L_803E343C
/* 803E3430 003E0370  7C 83 23 78 */	mr r3, r4
/* 803E3434 003E0374  38 80 00 22 */	li r4, 0x22
/* 803E3438 003E0378  4B FD F4 C1 */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E343C:
/* 803E343C 003E037C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3440 003E0380  7C 08 03 A6 */	mtlr r0
/* 803E3444 003E0384  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3448 003E0388  4E 80 00 20 */	blr 

.global do_transitYes__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFileFPQ33ebi9CardError4TMgr
do_transitYes__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFileFPQ33ebi9CardError4TMgr:
/* 803E344C 003E038C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3450 003E0390  7C 08 02 A6 */	mflr r0
/* 803E3454 003E0394  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3458 003E0398  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E345C 003E039C  2C 00 00 00 */	cmpwi r0, 0
/* 803E3460 003E03A0  40 82 00 20 */	bne .L_803E3480
/* 803E3464 003E03A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803E3468 003E03A8  38 A0 00 1A */	li r5, 0x1a
/* 803E346C 003E03AC  38 C0 00 00 */	li r6, 0
/* 803E3470 003E03B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E3474 003E03B4  7D 89 03 A6 */	mtctr r12
/* 803E3478 003E03B8  4E 80 04 21 */	bctrl 
/* 803E347C 003E03BC  48 00 00 24 */	b .L_803E34A0
.L_803E3480:
/* 803E3480 003E03C0  2C 00 00 01 */	cmpwi r0, 1
/* 803E3484 003E03C4  40 82 00 1C */	bne .L_803E34A0
/* 803E3488 003E03C8  81 83 00 00 */	lwz r12, 0(r3)
/* 803E348C 003E03CC  38 A0 00 1A */	li r5, 0x1a
/* 803E3490 003E03D0  38 C0 00 00 */	li r6, 0
/* 803E3494 003E03D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E3498 003E03D8  7D 89 03 A6 */	mtctr r12
/* 803E349C 003E03DC  4E 80 04 21 */	bctrl 
.L_803E34A0:
/* 803E34A0 003E03E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E34A4 003E03E4  7C 08 03 A6 */	mtlr r0
/* 803E34A8 003E03E8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E34AC 003E03EC  4E 80 00 20 */	blr 

.global do_transitNo__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFileFPQ33ebi9CardError4TMgr
do_transitNo__Q33ebi9CardError31FSMState_Q03_DoYouCreateNewFileFPQ33ebi9CardError4TMgr:
/* 803E34B0 003E03F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E34B4 003E03F4  7C 08 02 A6 */	mflr r0
/* 803E34B8 003E03F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E34BC 003E03FC  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E34C0 003E0400  2C 00 00 00 */	cmpwi r0, 0
/* 803E34C4 003E0404  40 82 00 20 */	bne .L_803E34E4
/* 803E34C8 003E0408  81 83 00 00 */	lwz r12, 0(r3)
/* 803E34CC 003E040C  38 A0 00 09 */	li r5, 9
/* 803E34D0 003E0410  38 C0 00 00 */	li r6, 0
/* 803E34D4 003E0414  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E34D8 003E0418  7D 89 03 A6 */	mtctr r12
/* 803E34DC 003E041C  4E 80 04 21 */	bctrl 
/* 803E34E0 003E0420  48 00 00 24 */	b .L_803E3504
.L_803E34E4:
/* 803E34E4 003E0424  2C 00 00 01 */	cmpwi r0, 1
/* 803E34E8 003E0428  40 82 00 1C */	bne .L_803E3504
/* 803E34EC 003E042C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E34F0 003E0430  38 A0 00 09 */	li r5, 9
/* 803E34F4 003E0434  38 C0 00 00 */	li r6, 0
/* 803E34F8 003E0438  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E34FC 003E043C  7D 89 03 A6 */	mtctr r12
/* 803E3500 003E0440  4E 80 04 21 */	bctrl 
.L_803E3504:
/* 803E3504 003E0444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3508 003E0448  7C 08 03 A6 */	mtlr r0
/* 803E350C 003E044C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3510 003E0450  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSaveFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSaveFPQ33ebi9CardError4TMgr:
/* 803E3514 003E0454  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3518 003E0458  7C 08 02 A6 */	mflr r0
/* 803E351C 003E045C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3520 003E0460  38 00 00 00 */	li r0, 0
/* 803E3524 003E0464  98 03 00 10 */	stb r0, 0x10(r3)
/* 803E3528 003E0468  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E352C 003E046C  2C 00 00 00 */	cmpwi r0, 0
/* 803E3530 003E0470  40 82 00 14 */	bne .L_803E3544
/* 803E3534 003E0474  7C 83 23 78 */	mr r3, r4
/* 803E3538 003E0478  38 80 00 0E */	li r4, 0xe
/* 803E353C 003E047C  4B FD F3 BD */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E3540 003E0480  48 00 00 28 */	b .L_803E3568
.L_803E3544:
/* 803E3544 003E0484  2C 00 00 01 */	cmpwi r0, 1
/* 803E3548 003E0488  40 82 00 20 */	bne .L_803E3568
/* 803E354C 003E048C  3C 60 80 49 */	lis r3, lbl_80497118@ha
/* 803E3550 003E0490  3C A0 80 49 */	lis r5, lbl_8049712C@ha
/* 803E3554 003E0494  38 63 71 18 */	addi r3, r3, lbl_80497118@l
/* 803E3558 003E0498  38 80 01 FD */	li r4, 0x1fd
/* 803E355C 003E049C  38 A5 71 2C */	addi r5, r5, lbl_8049712C@l
/* 803E3560 003E04A0  4C C6 31 82 */	crclr 6
/* 803E3564 003E04A4  4B C4 70 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E3568:
/* 803E3568 003E04A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E356C 003E04AC  7C 08 03 A6 */	mtlr r0
/* 803E3570 003E04B0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3574 003E04B4  4E 80 00 20 */	blr 

.global do_transitYes__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSaveFPQ33ebi9CardError4TMgr
do_transitYes__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSaveFPQ33ebi9CardError4TMgr:
/* 803E3578 003E04B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E357C 003E04BC  7C 08 02 A6 */	mflr r0
/* 803E3580 003E04C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3584 003E04C4  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3588 003E04C8  2C 00 00 00 */	cmpwi r0, 0
/* 803E358C 003E04CC  40 82 00 14 */	bne .L_803E35A0
/* 803E3590 003E04D0  7C 83 23 78 */	mr r3, r4
/* 803E3594 003E04D4  38 80 00 01 */	li r4, 1
/* 803E3598 003E04D8  4B FE FE 71 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E359C 003E04DC  48 00 00 28 */	b .L_803E35C4
.L_803E35A0:
/* 803E35A0 003E04E0  2C 00 00 01 */	cmpwi r0, 1
/* 803E35A4 003E04E4  40 82 00 20 */	bne .L_803E35C4
/* 803E35A8 003E04E8  3C 60 80 49 */	lis r3, lbl_80497118@ha
/* 803E35AC 003E04EC  3C A0 80 49 */	lis r5, lbl_8049712C@ha
/* 803E35B0 003E04F0  38 63 71 18 */	addi r3, r3, lbl_80497118@l
/* 803E35B4 003E04F4  38 80 02 06 */	li r4, 0x206
/* 803E35B8 003E04F8  38 A5 71 2C */	addi r5, r5, lbl_8049712C@l
/* 803E35BC 003E04FC  4C C6 31 82 */	crclr 6
/* 803E35C0 003E0500  4B C4 70 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E35C4:
/* 803E35C4 003E0504  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E35C8 003E0508  7C 08 03 A6 */	mtlr r0
/* 803E35CC 003E050C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E35D0 003E0510  4E 80 00 20 */	blr 

.global do_transitNo__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSaveFPQ33ebi9CardError4TMgr
do_transitNo__Q33ebi9CardError38FSMState_Q04_DoYouStartGameWithoutSaveFPQ33ebi9CardError4TMgr:
/* 803E35D4 003E0514  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E35D8 003E0518  7C 08 02 A6 */	mflr r0
/* 803E35DC 003E051C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E35E0 003E0520  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E35E4 003E0524  2C 00 00 00 */	cmpwi r0, 0
/* 803E35E8 003E0528  40 82 00 14 */	bne .L_803E35FC
/* 803E35EC 003E052C  7C 83 23 78 */	mr r3, r4
/* 803E35F0 003E0530  38 80 00 02 */	li r4, 2
/* 803E35F4 003E0534  4B FE FE 15 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
/* 803E35F8 003E0538  48 00 00 28 */	b .L_803E3620
.L_803E35FC:
/* 803E35FC 003E053C  2C 00 00 01 */	cmpwi r0, 1
/* 803E3600 003E0540  40 82 00 20 */	bne .L_803E3620
/* 803E3604 003E0544  3C 60 80 49 */	lis r3, lbl_80497118@ha
/* 803E3608 003E0548  3C A0 80 49 */	lis r5, lbl_8049712C@ha
/* 803E360C 003E054C  38 63 71 18 */	addi r3, r3, lbl_80497118@l
/* 803E3610 003E0550  38 80 02 0F */	li r4, 0x20f
/* 803E3614 003E0554  38 A5 71 2C */	addi r5, r5, lbl_8049712C@l
/* 803E3618 003E0558  4C C6 31 82 */	crclr 6
/* 803E361C 003E055C  4B C4 70 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E3620:
/* 803E3620 003E0560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3624 003E0564  7C 08 03 A6 */	mtlr r0
/* 803E3628 003E0568  38 21 00 10 */	addi r1, r1, 0x10
/* 803E362C 003E056C  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError25FSMState_Q05_GameCantSaveFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError25FSMState_Q05_GameCantSaveFPQ33ebi9CardError4TMgr:
/* 803E3630 003E0570  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3634 003E0574  7C 08 02 A6 */	mflr r0
/* 803E3638 003E0578  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E363C 003E057C  38 00 00 00 */	li r0, 0
/* 803E3640 003E0580  98 03 00 10 */	stb r0, 0x10(r3)
/* 803E3644 003E0584  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3648 003E0588  2C 00 00 00 */	cmpwi r0, 0
/* 803E364C 003E058C  40 82 00 24 */	bne .L_803E3670
/* 803E3650 003E0590  3C 60 80 49 */	lis r3, lbl_80497118@ha
/* 803E3654 003E0594  3C A0 80 49 */	lis r5, lbl_8049712C@ha
/* 803E3658 003E0598  38 63 71 18 */	addi r3, r3, lbl_80497118@l
/* 803E365C 003E059C  38 80 02 19 */	li r4, 0x219
/* 803E3660 003E05A0  38 A5 71 2C */	addi r5, r5, lbl_8049712C@l
/* 803E3664 003E05A4  4C C6 31 82 */	crclr 6
/* 803E3668 003E05A8  4B C4 6F D9 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E366C 003E05AC  48 00 00 18 */	b .L_803E3684
.L_803E3670:
/* 803E3670 003E05B0  2C 00 00 01 */	cmpwi r0, 1
/* 803E3674 003E05B4  40 82 00 10 */	bne .L_803E3684
/* 803E3678 003E05B8  7C 83 23 78 */	mr r3, r4
/* 803E367C 003E05BC  38 80 00 20 */	li r4, 0x20
/* 803E3680 003E05C0  4B FD F2 79 */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E3684:
/* 803E3684 003E05C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3688 003E05C8  7C 08 03 A6 */	mtlr r0
/* 803E368C 003E05CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3690 003E05D0  4E 80 00 20 */	blr 

.global do_transitYes__Q33ebi9CardError25FSMState_Q05_GameCantSaveFPQ33ebi9CardError4TMgr
do_transitYes__Q33ebi9CardError25FSMState_Q05_GameCantSaveFPQ33ebi9CardError4TMgr:
/* 803E3694 003E05D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3698 003E05D8  7C 08 02 A6 */	mflr r0
/* 803E369C 003E05DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E36A0 003E05E0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E36A4 003E05E4  2C 00 00 00 */	cmpwi r0, 0
/* 803E36A8 003E05E8  40 82 00 24 */	bne .L_803E36CC
/* 803E36AC 003E05EC  3C 60 80 49 */	lis r3, lbl_80497118@ha
/* 803E36B0 003E05F0  3C A0 80 49 */	lis r5, lbl_8049712C@ha
/* 803E36B4 003E05F4  38 63 71 18 */	addi r3, r3, lbl_80497118@l
/* 803E36B8 003E05F8  38 80 02 22 */	li r4, 0x222
/* 803E36BC 003E05FC  38 A5 71 2C */	addi r5, r5, lbl_8049712C@l
/* 803E36C0 003E0600  4C C6 31 82 */	crclr 6
/* 803E36C4 003E0604  4B C4 6F 7D */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E36C8 003E0608  48 00 00 18 */	b .L_803E36E0
.L_803E36CC:
/* 803E36CC 003E060C  2C 00 00 01 */	cmpwi r0, 1
/* 803E36D0 003E0610  40 82 00 10 */	bne .L_803E36E0
/* 803E36D4 003E0614  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E36D8 003E0618  38 80 00 01 */	li r4, 1
/* 803E36DC 003E061C  48 03 FC 99 */	bl resetOn__6SystemFb
.L_803E36E0:
/* 803E36E0 003E0620  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E36E4 003E0624  7C 08 03 A6 */	mtlr r0
/* 803E36E8 003E0628  38 21 00 10 */	addi r1, r1, 0x10
/* 803E36EC 003E062C  4E 80 00 20 */	blr 

.global do_transitNo__Q33ebi9CardError25FSMState_Q05_GameCantSaveFPQ33ebi9CardError4TMgr
do_transitNo__Q33ebi9CardError25FSMState_Q05_GameCantSaveFPQ33ebi9CardError4TMgr:
/* 803E36F0 003E0630  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E36F4 003E0634  7C 08 02 A6 */	mflr r0
/* 803E36F8 003E0638  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E36FC 003E063C  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3700 003E0640  2C 00 00 00 */	cmpwi r0, 0
/* 803E3704 003E0644  40 82 00 24 */	bne .L_803E3728
/* 803E3708 003E0648  3C 60 80 49 */	lis r3, lbl_80497118@ha
/* 803E370C 003E064C  3C A0 80 49 */	lis r5, lbl_8049712C@ha
/* 803E3710 003E0650  38 63 71 18 */	addi r3, r3, lbl_80497118@l
/* 803E3714 003E0654  38 80 02 2B */	li r4, 0x22b
/* 803E3718 003E0658  38 A5 71 2C */	addi r5, r5, lbl_8049712C@l
/* 803E371C 003E065C  4C C6 31 82 */	crclr 6
/* 803E3720 003E0660  4B C4 6F 21 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E3724 003E0664  48 00 00 18 */	b .L_803E373C
.L_803E3728:
/* 803E3728 003E0668  2C 00 00 01 */	cmpwi r0, 1
/* 803E372C 003E066C  40 82 00 10 */	bne .L_803E373C
/* 803E3730 003E0670  7C 83 23 78 */	mr r3, r4
/* 803E3734 003E0674  38 80 00 03 */	li r4, 3
/* 803E3738 003E0678  4B FE FC D1 */	bl goEnd___Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr7enumEnd
.L_803E373C:
/* 803E373C 003E067C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3740 003E0680  7C 08 03 A6 */	mtlr r0
/* 803E3744 003E0684  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3748 003E0688  4E 80 00 20 */	blr 

.global do_cardRequest__Q33ebi9CardError22FSMState_WN0_NowFormatFv
do_cardRequest__Q33ebi9CardError22FSMState_WN0_NowFormatFv:
/* 803E374C 003E068C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3750 003E0690  7C 08 02 A6 */	mflr r0
/* 803E3754 003E0694  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3758 003E0698  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E375C 003E069C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E3760 003E06A0  48 05 F5 BD */	bl format__Q34Game10MemoryCard3MgrFv
/* 803E3764 003E06A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3768 003E06A8  7C 08 03 A6 */	mtlr r0
/* 803E376C 003E06AC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3770 003E06B0  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr:
/* 803E3774 003E06B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3778 003E06B8  7C 08 02 A6 */	mflr r0
/* 803E377C 003E06BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3780 003E06C0  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E3784 003E06C4  2C 00 00 00 */	cmpwi r0, 0
/* 803E3788 003E06C8  40 82 00 14 */	bne .L_803E379C
/* 803E378C 003E06CC  7C 83 23 78 */	mr r3, r4
/* 803E3790 003E06D0  38 80 00 0A */	li r4, 0xa
/* 803E3794 003E06D4  4B FD F1 65 */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E3798 003E06D8  48 00 00 18 */	b .L_803E37B0
.L_803E379C:
/* 803E379C 003E06DC  2C 00 00 01 */	cmpwi r0, 1
/* 803E37A0 003E06E0  40 82 00 10 */	bne .L_803E37B0
/* 803E37A4 003E06E4  7C 83 23 78 */	mr r3, r4
/* 803E37A8 003E06E8  38 80 00 1D */	li r4, 0x1d
/* 803E37AC 003E06EC  4B FD F1 4D */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E37B0:
/* 803E37B0 003E06F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E37B4 003E06F4  7C 08 03 A6 */	mtlr r0
/* 803E37B8 003E06F8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E37BC 003E06FC  4E 80 00 20 */	blr 

.global do_transitCardReady__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
do_transitCardReady__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr:
/* 803E37C0 003E0700  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E37C4 003E0704  7C 08 02 A6 */	mflr r0
/* 803E37C8 003E0708  38 A0 00 0A */	li r5, 0xa
/* 803E37CC 003E070C  38 C0 00 00 */	li r6, 0
/* 803E37D0 003E0710  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E37D4 003E0714  81 83 00 00 */	lwz r12, 0(r3)
/* 803E37D8 003E0718  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E37DC 003E071C  7D 89 03 A6 */	mtctr r12
/* 803E37E0 003E0720  4E 80 04 21 */	bctrl 
/* 803E37E4 003E0724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E37E8 003E0728  7C 08 03 A6 */	mtlr r0
/* 803E37EC 003E072C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E37F0 003E0730  4E 80 00 20 */	blr 

.global do_transitCardNoCard__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
do_transitCardNoCard__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr:
/* 803E37F4 003E0734  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E37F8 003E0738  7C 08 02 A6 */	mflr r0
/* 803E37FC 003E073C  38 A0 00 0D */	li r5, 0xd
/* 803E3800 003E0740  38 C0 00 00 */	li r6, 0
/* 803E3804 003E0744  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3808 003E0748  81 83 00 00 */	lwz r12, 0(r3)
/* 803E380C 003E074C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E3810 003E0750  7D 89 03 A6 */	mtctr r12
/* 803E3814 003E0754  4E 80 04 21 */	bctrl 
/* 803E3818 003E0758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E381C 003E075C  7C 08 03 A6 */	mtlr r0
/* 803E3820 003E0760  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3824 003E0764  4E 80 00 20 */	blr 

.global do_transitCardIOError__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
do_transitCardIOError__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr:
/* 803E3828 003E0768  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E382C 003E076C  7C 08 02 A6 */	mflr r0
/* 803E3830 003E0770  38 A0 00 0E */	li r5, 0xe
/* 803E3834 003E0774  38 C0 00 00 */	li r6, 0
/* 803E3838 003E0778  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E383C 003E077C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E3840 003E0780  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E3844 003E0784  7D 89 03 A6 */	mtctr r12
/* 803E3848 003E0788  4E 80 04 21 */	bctrl 
/* 803E384C 003E078C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3850 003E0790  7C 08 03 A6 */	mtlr r0
/* 803E3854 003E0794  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3858 003E0798  4E 80 00 20 */	blr 

.global do_open__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr
do_open__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr:
/* 803E385C 003E079C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3860 003E07A0  7C 08 02 A6 */	mflr r0
/* 803E3864 003E07A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3868 003E07A8  80 04 02 A4 */	lwz r0, 0x2a4(r4)
/* 803E386C 003E07AC  2C 00 00 00 */	cmpwi r0, 0
/* 803E3870 003E07B0  40 82 00 14 */	bne .L_803E3884
/* 803E3874 003E07B4  7C 83 23 78 */	mr r3, r4
/* 803E3878 003E07B8  38 80 00 12 */	li r4, 0x12
/* 803E387C 003E07BC  4B FD F0 7D */	bl open__Q33ebi6Screen11TMemoryCardFl
/* 803E3880 003E07C0  48 00 00 18 */	b .L_803E3898
.L_803E3884:
/* 803E3884 003E07C4  2C 00 00 01 */	cmpwi r0, 1
/* 803E3888 003E07C8  40 82 00 10 */	bne .L_803E3898
/* 803E388C 003E07CC  7C 83 23 78 */	mr r3, r4
/* 803E3890 003E07D0  38 80 00 24 */	li r4, 0x24
/* 803E3894 003E07D4  4B FD F0 65 */	bl open__Q33ebi6Screen11TMemoryCardFl
.L_803E3898:
/* 803E3898 003E07D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E389C 003E07DC  7C 08 03 A6 */	mtlr r0
/* 803E38A0 003E07E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E38A4 003E07E4  4E 80 00 20 */	blr 

.global do_cardRequest__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFv
do_cardRequest__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFv:
/* 803E38A8 003E07E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E38AC 003E07EC  7C 08 02 A6 */	mflr r0
/* 803E38B0 003E07F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E38B4 003E07F4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E38B8 003E07F8  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E38BC 003E07FC  48 05 F5 B5 */	bl createNewFile__Q34Game10MemoryCard3MgrFv
/* 803E38C0 003E0800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E38C4 003E0804  7C 08 03 A6 */	mtlr r0
/* 803E38C8 003E0808  38 21 00 10 */	addi r1, r1, 0x10
/* 803E38CC 003E080C  4E 80 00 20 */	blr 

.global do_transitCardReady__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr
do_transitCardReady__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr:
/* 803E38D0 003E0810  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E38D4 003E0814  7C 08 02 A6 */	mflr r0
/* 803E38D8 003E0818  38 A0 00 0B */	li r5, 0xb
/* 803E38DC 003E081C  38 C0 00 00 */	li r6, 0
/* 803E38E0 003E0820  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E38E4 003E0824  81 83 00 00 */	lwz r12, 0(r3)
/* 803E38E8 003E0828  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E38EC 003E082C  7D 89 03 A6 */	mtctr r12
/* 803E38F0 003E0830  4E 80 04 21 */	bctrl 
/* 803E38F4 003E0834  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E38F8 003E0838  7C 08 03 A6 */	mtlr r0
/* 803E38FC 003E083C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3900 003E0840  4E 80 00 20 */	blr 

.global do_transitCardNoCard__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr
do_transitCardNoCard__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr:
/* 803E3904 003E0844  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E3908 003E0848  7C 08 02 A6 */	mflr r0
/* 803E390C 003E084C  38 A0 00 0F */	li r5, 0xf
/* 803E3910 003E0850  38 C0 00 00 */	li r6, 0
/* 803E3914 003E0854  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E3918 003E0858  81 83 00 00 */	lwz r12, 0(r3)
/* 803E391C 003E085C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E3920 003E0860  7D 89 03 A6 */	mtctr r12
/* 803E3924 003E0864  4E 80 04 21 */	bctrl 
/* 803E3928 003E0868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E392C 003E086C  7C 08 03 A6 */	mtlr r0
/* 803E3930 003E0870  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3934 003E0874  4E 80 00 20 */	blr 

.global do_transitCardIOError__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr
do_transitCardIOError__Q33ebi9CardError29FSMState_WN1_NowCreateNewFileFPQ33ebi9CardError4TMgr:
/* 803E3938 003E0878  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E393C 003E087C  7C 08 02 A6 */	mflr r0
/* 803E3940 003E0880  38 A0 00 10 */	li r5, 0x10
/* 803E3944 003E0884  38 C0 00 00 */	li r6, 0
/* 803E3948 003E0888  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E394C 003E088C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E3950 003E0890  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E3954 003E0894  7D 89 03 A6 */	mtctr r12
/* 803E3958 003E0898  4E 80 04 21 */	bctrl 
/* 803E395C 003E089C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E3960 003E08A0  7C 08 03 A6 */	mtlr r0
/* 803E3964 003E08A4  38 21 00 10 */	addi r1, r1, 0x10
/* 803E3968 003E08A8  4E 80 00 20 */	blr 
