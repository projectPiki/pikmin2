.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_naviState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047EAC8, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047EAC8
.balign 4
.obj lbl_8047EAD4, local
	.asciz "naviState"
.endobj lbl_8047EAD4
.balign 4
.obj lbl_8047EAE0, local
	.4byte 0x00000000 # value
	.float 0.25 # chance
	.4byte 0x0000000B # value
	.float 0.25 # chance
	.4byte 0x00000036 # value
	.float 0.25 # chance
	.4byte 0x00000032 # value
	.float 0.25 # chance
.endobj lbl_8047EAE0
.obj lbl_8047EB00, local
	.4byte 0x00000000 # value
	.float 0.25 # chance
	.4byte 0x0000000B # value
	.float 0.25 # chance
	.4byte 0x00000036 # value
	.float 0.25 # chance
	.4byte 0x0000000D # value
	.float 0.25 # chance
.endobj lbl_8047EB00
.obj lbl_8047EB20, local
	.4byte 0x00000032 # value
	.float 0.25 # chance
	.4byte 0x00000000 # value
	.float 0.25 # chance
	.4byte 0x00000003 # value
	.float 0.25 # chance
	.4byte 0x00000036 # value
	.float 0.25 # chance
.endobj lbl_8047EB20
.balign 4
.obj lbl_8047EB40, local
	.asciz "Creature"
.endobj lbl_8047EB40
.balign 4
.obj lbl_8047EB4C, local
	.asciz "naviState.cpp"
.endobj lbl_8047EB4C
.balign 4
.obj lbl_8047EB5C, local
	.asciz "P2Assert"
.endobj lbl_8047EB5C
.balign 4
.obj lbl_8047EB68, local
	.asciz "navi climb\n"
.endobj lbl_8047EB68
.balign 4
.obj lbl_8047EB74, local
	.asciz "flick needs NaviFlickInitArg !\n"
.endobj lbl_8047EB74
.balign 4
.obj lbl_8047EB94, local
	.asciz "gameStat.h"
.endobj lbl_8047EB94
.balign 4
.obj lbl_8047EBA0, local
	.asciz "open-cont"
.endobj lbl_8047EBA0
.balign 4
.obj lbl_8047EBAC, local
	.asciz "CreatureActionArg"
.endobj lbl_8047EBAC
.balign 4
.obj lbl_8047EBC0, local
	.asciz "ActionArg"
.endobj lbl_8047EBC0
.balign 4
.obj lbl_8047EBCC, local
	.asciz "ArgScale"
.endobj lbl_8047EBCC
.balign 4
.obj lbl_8047EBD8, local
	.asciz "ArgDopingSmoke"
.endobj lbl_8047EBD8

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804B2D4C, local # no label exists here
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x00000003
	.4byte 0x00000000
.endobj lbl_804B2D4C # end made-up label
.obj "se_taisos__23@unnamed@naviState_cpp@", local
	.4byte 0x00000883
	.4byte 0x00000884
	.4byte 0x00000885
.endobj "se_taisos__23@unnamed@naviState_cpp@"
.obj "se_chats__23@unnamed@naviState_cpp@", local
	.4byte 0x00000886
	.4byte 0x00000887
	.4byte 0x00000888
.endobj "se_chats__23@unnamed@naviState_cpp@"
.obj "se_lookbacks__23@unnamed@naviState_cpp@", local
	.4byte 0x00000880
	.4byte 0x00000881
	.4byte 0x00000882
.endobj "se_lookbacks__23@unnamed@naviState_cpp@"
.obj "se_novis__23@unnamed@naviState_cpp@", local
	.4byte 0x0000087D
	.4byte 0x0000087E
	.4byte 0x0000087F
.endobj "se_novis__23@unnamed@naviState_cpp@"
.obj "se_jumps__23@unnamed@naviState_cpp@", local
	.4byte 0x00000874
	.4byte 0x00000875
	.4byte 0x00000876
.endobj "se_jumps__23@unnamed@naviState_cpp@"
.obj "se_kyoros__23@unnamed@naviState_cpp@", local
	.4byte 0x0000087A
	.4byte 0x0000087B
	.4byte 0x0000087C
.endobj "se_kyoros__23@unnamed@naviState_cpp@"
.obj lbl_804B2DA4, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte hitCallback__Q24Game14NaviPunchStateFP8CollPart
.endobj lbl_804B2DA4
.obj lbl_804B2DB0, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte doAnimCallback__Q24Game18NaviThrowWaitStateFv
.endobj lbl_804B2DB0
.obj __vt__Q24Game16NaviPressedState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game16NaviPressedStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game16NaviPressedStateFPQ24Game4Navi
	.4byte cleanup__Q24Game16NaviPressedStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game16NaviPressedStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game16NaviPressedStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game16NaviPressedStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game16NaviPressedState
.skip 0x18
.obj __vt__Q24Game20NaviDemo_HoleInState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game20NaviDemo_HoleInStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
	.4byte cleanup__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game20NaviDemo_HoleInStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game20NaviDemo_HoleInState
.obj __vt__Q24Game17NaviDemo_UfoState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game17NaviDemo_UfoStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi
	.4byte cleanup__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game17NaviDemo_UfoState
.obj __vt__Q24Game15NaviPelletState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15NaviPelletStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game15NaviPelletStateFPQ24Game4Navi
	.4byte cleanup__Q24Game15NaviPelletStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game15NaviPelletStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game15NaviPelletStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game15NaviPelletState
.obj __vt__Q24Game14NaviThrowState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game14NaviThrowStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game14NaviThrowStateFPQ24Game4Navi
	.4byte cleanup__Q24Game14NaviThrowStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
	.4byte onKeyEvent__Q24Game14NaviThrowStateFRCQ28SysShape8KeyEvent
	.4byte 0
	.4byte 0
	.4byte "@32@4@onKeyEvent__Q24Game14NaviThrowStateFRCQ28SysShape8KeyEvent"
.endobj __vt__Q24Game14NaviThrowState
.obj __vt__Q24Game18NaviThrowWaitState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game18NaviThrowWaitStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	.4byte cleanup__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	.4byte resume__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	.4byte restart__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game18NaviThrowWaitStateFR14J2DGrafContextRi
	.4byte onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent
	.4byte 0
	.4byte 0
	.4byte "@60@4@onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent"
.endobj __vt__Q24Game18NaviThrowWaitState
.obj "__vt__37Delegate<Q24Game18NaviThrowWaitState>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__37Delegate<Q24Game18NaviThrowWaitState>Fv"
.endobj "__vt__37Delegate<Q24Game18NaviThrowWaitState>"
.skip 0xC
.obj __vt__Q24Game15NaviGatherState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15NaviGatherStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game15NaviGatherStateFPQ24Game4Navi
	.4byte cleanup__Q24Game15NaviGatherStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game15NaviGatherState
.skip 0x18
.obj __vt__Q24Game13NaviDeadState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13NaviDeadStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game13NaviDeadStateFPQ24Game4Navi
	.4byte cleanup__Q24Game13NaviDeadStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game13NaviDeadStateFv
	.4byte onKeyEvent__Q24Game13NaviDeadStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game13NaviDeadStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game13NaviDeadStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game13NaviDeadState
.obj __vt__Q24Game16NaviDamagedState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game16NaviDamagedStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game16NaviDamagedStateFPQ24Game4Navi
	.4byte cleanup__Q24Game16NaviDamagedStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game16NaviDamagedStateFv
	.4byte onKeyEvent__Q24Game16NaviDamagedStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game16NaviDamagedStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game16NaviDamagedState
.obj __vt__Q24Game15NaviAbsorbState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15NaviAbsorbStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game15NaviAbsorbStateFPQ24Game4Navi
	.4byte cleanup__Q24Game15NaviAbsorbStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game15NaviAbsorbStateFv
	.4byte onKeyEvent__Q24Game15NaviAbsorbStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game15NaviAbsorbStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game15NaviAbsorbStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game15NaviAbsorbState
.skip 0x18
.obj __vt__Q32og6Screen17DispMemberContena, weak
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen17DispMemberContenaFv
	.4byte getOwnerID__Q32og6Screen17DispMemberContenaFv
	.4byte getMemberID__Q32og6Screen17DispMemberContenaFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.endobj __vt__Q32og6Screen17DispMemberContena
.obj __vt__Q32og6Screen17DispMemberUfoMenu, weak
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen17DispMemberUfoMenuFv
	.4byte getOwnerID__Q32og6Screen17DispMemberUfoMenuFv
	.4byte getMemberID__Q32og6Screen17DispMemberUfoMenuFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.endobj __vt__Q32og6Screen17DispMemberUfoMenu
.obj __vt__Q32og6Screen18DispMemberUfoGroup, weak
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen18DispMemberUfoGroupFv
	.4byte getOwnerID__Q32og6Screen18DispMemberUfoGroupFv
	.4byte getMemberID__Q32og6Screen18DispMemberUfoGroupFv
	.4byte doSetSubMemberAll__Q32og6Screen18DispMemberUfoGroupFv
.endobj __vt__Q32og6Screen18DispMemberUfoGroup
.skip 0x18
.obj __vt__Q24Game18NaviContainerState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game18NaviContainerStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game18NaviContainerStateFPQ24Game4Navi
	.4byte cleanup__Q24Game18NaviContainerStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game18NaviContainerStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game18NaviContainerState
.obj __vt__Q24Game18NaviSaraiExitState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game18NaviSaraiExitStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game18NaviSaraiExitStateFPQ24Game4Navi
	.4byte cleanup__Q24Game18NaviSaraiExitStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game18NaviSaraiExitStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game18NaviSaraiExitStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game18NaviSaraiExitState
.obj __vt__Q24Game14NaviSaraiState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game14NaviSaraiStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game14NaviSaraiStateFPQ24Game4Navi
	.4byte cleanup__Q24Game14NaviSaraiStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game14NaviSaraiStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game14NaviSaraiState
.obj __vt__Q24Game19NaviKokeDamageState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game19NaviKokeDamageStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game19NaviKokeDamageStateFPQ24Game4Navi
	.4byte cleanup__Q24Game19NaviKokeDamageStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game19NaviKokeDamageStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game19NaviKokeDamageStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game19NaviKokeDamageStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game19NaviKokeDamageState
.obj __vt__Q24Game14NaviFlickState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game14NaviFlickStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game14NaviFlickStateFPQ24Game4Navi
	.4byte cleanup__Q24Game14NaviFlickStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game14NaviFlickStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game14NaviFlickStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game14NaviFlickStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game14NaviFlickStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game14NaviFlickState
.skip 0xC
.obj __vt__Q24Game17NaviFallMeckState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game17NaviFallMeckStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game17NaviFallMeckStateFPQ24Game4Navi
	.4byte cleanup__Q24Game17NaviFallMeckStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game17NaviFallMeckStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game17NaviFallMeckStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game17NaviFallMeckStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game17NaviFallMeckState
.obj __vt__Q24Game14NaviClimbState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game14NaviClimbStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game14NaviClimbStateFPQ24Game4Navi
	.4byte cleanup__Q24Game14NaviClimbStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game14NaviClimbState
.obj __vt__Q23efx14ArgDopingSmoke, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx14ArgDopingSmokeFv
.endobj __vt__Q23efx14ArgDopingSmoke
.obj __vt__Q24Game13NaviDopeState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13NaviDopeStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game13NaviDopeStateFPQ24Game4Navi
	.4byte cleanup__Q24Game13NaviDopeStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game13NaviDopeStateFv
	.4byte onKeyEvent__Q24Game13NaviDopeStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game13NaviDopeState
.obj __vt__Q24Game19NaviNukuAdjustState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game19NaviNukuAdjustStateFPQ24Game4Navi
	.4byte cleanup__Q24Game19NaviNukuAdjustStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game19NaviNukuAdjustStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game19NaviNukuAdjustState
.obj __vt__Q24Game13NaviNukuState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13NaviNukuStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game13NaviNukuStateFPQ24Game4Navi
	.4byte cleanup__Q24Game13NaviNukuStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game13NaviNukuStateFv
	.4byte onKeyEvent__Q24Game13NaviNukuStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game13NaviNukuState
.obj __vt__Q24Game17NaviPathMoveState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game17NaviPathMoveStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game17NaviPathMoveStateFPQ24Game4Navi
	.4byte cleanup__Q24Game17NaviPathMoveStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game17NaviPathMoveState
.obj "__vt__45Delegate1<Q24Game14NaviPunchState,P8CollPart>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__45Delegate1<Q24Game14NaviPunchState,P8CollPart>FP8CollPart"
.endobj "__vt__45Delegate1<Q24Game14NaviPunchState,P8CollPart>"
.obj "__vt__22IDelegate1<P8CollPart>", weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj "__vt__22IDelegate1<P8CollPart>"
.obj __vt__Q23efx11TOrimapunch, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx11TOrimapunch
.skip 0x20
.obj __vt__Q24Game14NaviPunchState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game14NaviPunchStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game14NaviPunchStateFPQ24Game4Navi
	.4byte cleanup__Q24Game14NaviPunchStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game14NaviPunchStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game14NaviPunchState
.obj __vt__Q24Game15NaviFollowState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15NaviFollowStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game15NaviFollowStateFPQ24Game4Navi
	.4byte cleanup__Q24Game15NaviFollowStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game15NaviFollowStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game15NaviFollowStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game15NaviFollowState
.obj __vt__Q24Game15NaviChangeState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15NaviChangeStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game15NaviChangeStateFPQ24Game4Navi
	.4byte cleanup__Q24Game15NaviChangeStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game15NaviChangeStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game15NaviChangeState
.balign 4
.obj __vt__Q24Game13NaviWalkState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13NaviWalkStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game13NaviWalkStateFPQ24Game4Navi
	.4byte cleanup__Q24Game13NaviWalkStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game13NaviWalkStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game13NaviWalkStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game13NaviWalkStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game13NaviWalkStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game13NaviWalkState
.skip 0x3C
.balign 4
.obj __vt__Q24Game14NaviStuckState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game14NaviStuckStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game14NaviStuckStateFPQ24Game4Navi
	.4byte cleanup__Q24Game14NaviStuckStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game14NaviStuckStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game14NaviStuckState
.obj __vt__Q24Game18NaviCarryBombState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game18NaviCarryBombStateFPQ24Game4NaviPQ24Game8StateArg
	.4byte exec__Q24Game18NaviCarryBombStateFPQ24Game4Navi
	.4byte cleanup__Q24Game18NaviCarryBombStateFPQ24Game4Navi
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game18NaviCarryBombStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game18NaviCarryBombState
.skip 0xC
.obj "__vt__Q24Game22FSMState<Q24Game4Navi>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviPQ24Game8StateArg"
	.4byte "exec__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "cleanup__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
.endobj "__vt__Q24Game22FSMState<Q24Game4Navi>"
.obj __vt__Q24Game7NaviFSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game7NaviFSMFPQ24Game4Navi
	.4byte "start__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte "exec__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"
	.4byte transit__Q24Game7NaviFSMFPQ24Game4NaviiPQ24Game8StateArg
.endobj __vt__Q24Game7NaviFSM
.obj __vt__Q24Game9NaviState, global
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviPQ24Game8StateArg"
	.4byte "exec__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "cleanup__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
	.4byte "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	.4byte invincible__Q24Game9NaviStateFv
	.4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
	.4byte collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent
	.4byte "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>"
	.4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
	.4byte pressable__Q24Game9NaviStateFv
	.4byte callable__Q24Game9NaviStateFv
	.4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
	.4byte needYChangeMotion__Q24Game9NaviStateFv
	.4byte vsUsableY__Q24Game9NaviStateFv
	.4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
.endobj __vt__Q24Game9NaviState

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80518BE0, local
	.float 0.0
.endobj lbl_80518BE0
.obj lbl_80518BE4, local
	.float 17.0
.endobj lbl_80518BE4
.obj lbl_80518BE8, local
	.float 325.9493
.endobj lbl_80518BE8
.obj lbl_80518BEC, local
	.float -325.9493
.endobj lbl_80518BEC
.obj lbl_80518BF0, local
	.float 4.8
.endobj lbl_80518BF0
.obj lbl_80518BF4, local
	.float 260.0
.endobj lbl_80518BF4
.obj lbl_80518BF8, local
	.float 340.0
.endobj lbl_80518BF8
.obj lbl_80518BFC, local
	.float 0.45
.endobj lbl_80518BFC
.obj lbl_80518C00, local
	.float 0.3
.endobj lbl_80518C00
.obj lbl_80518C04, local
	.float 0.5
.endobj lbl_80518C04
.obj lbl_80518C08, local
	.float 32768.0
.endobj lbl_80518C08
.obj lbl_80518C0C, local
	.float 0.05
.endobj lbl_80518C0C
.obj lbl_80518C10, local
	.float 120.0
.endobj lbl_80518C10
.obj lbl_80518C14, local
	.float 100.0
.endobj lbl_80518C14
.obj lbl_80518C18, local
	.float -1000.0
.endobj lbl_80518C18
.obj lbl_80518C1C, local
	.float 0.1
.endobj lbl_80518C1C
.obj lbl_80518C20, local
	.float 0.9424779
.endobj lbl_80518C20
.obj lbl_80518C24, local
	.float 5.0
.endobj lbl_80518C24
.obj lbl_80518C28, local
	.float 0.2
.endobj lbl_80518C28
.balign 8
.obj lbl_80518C30, local
	.8byte 0x4330000080000000
.endobj lbl_80518C30
.obj lbl_80518C38, local
	.float 3.0
.endobj lbl_80518C38
.obj lbl_80518C3C, local
	.float 2.0
.endobj lbl_80518C3C
.obj lbl_80518C40, local
	.float 9.0
.endobj lbl_80518C40
.obj lbl_80518C44, local
	.float 10000.0
.endobj lbl_80518C44
.obj lbl_80518C48, local
	.float 1.0
.endobj lbl_80518C48
.obj lbl_80518C4C, local
	.float 10.0
.endobj lbl_80518C4C
.obj lbl_80518C50, local
	.float 35.0
.endobj lbl_80518C50
.obj lbl_80518C54, local
	.float 15.0
.endobj lbl_80518C54
.obj lbl_80518C58, local
	.float 8.0
.endobj lbl_80518C58
.obj lbl_80518C5C, local
	.float 20.0
.endobj lbl_80518C5C
.obj lbl_80518C60, local
	.float 1.4137167
.endobj lbl_80518C60
.obj lbl_80518C64, local
	.float 30.0
.endobj lbl_80518C64
.obj lbl_80518C68, local
	.float 60.0
.endobj lbl_80518C68
.obj lbl_80518C6C, local
	.float 430.0
.endobj lbl_80518C6C
.obj lbl_80518C70, local
	.float 7.5
.endobj lbl_80518C70
.obj lbl_80518C74, local
	.float 2.5
.endobj lbl_80518C74
.obj lbl_80518C78, local
	.float 25.0
.endobj lbl_80518C78
.obj lbl_80518C7C, local
	.float 150.0
.endobj lbl_80518C7C
.obj lbl_80518C80, local
	.float 6.0
.endobj lbl_80518C80
.obj lbl_80518C84, local # pi/10
	.float 0.31415927
.endobj lbl_80518C84
.obj lbl_80518C88, local
	.float -1.0
.endobj lbl_80518C88
.obj lbl_80518C8C, local
	.float 0.35
.endobj lbl_80518C8C
.obj lbl_80518C90, local
	.float 0.65
.endobj lbl_80518C90
.obj lbl_80518C94, local
	.float 70.0
.endobj lbl_80518C94
.obj lbl_80518C98, local
	.float 4.0
.endobj lbl_80518C98
.obj lbl_80518C9C, local
	.float -400.0
.endobj lbl_80518C9C
.obj lbl_80518CA0, local
	.float -100.0
.endobj lbl_80518CA0
.obj lbl_80518CA4, local # pi
	.float 3.1415927
.endobj lbl_80518CA4
.obj lbl_80518CA8, local
	.float 0.9
.endobj lbl_80518CA8
.obj lbl_80518CAC, local
	.float 22.0
.endobj lbl_80518CAC
.balign 8
.obj lbl_80518CB0, local
	.8byte 0x4330000000000000
.endobj lbl_80518CB0
.obj lbl_80518CB8, local
	.float 80.0
.endobj lbl_80518CB8
.obj lbl_80518CBC, local
	.float -0.1
.endobj lbl_80518CBC
.obj lbl_80518CC0, local
	.float 32.5
.endobj lbl_80518CC0
.obj lbl_80518CC4, local
	.float 140.0
.endobj lbl_80518CC4
.balign 4
.obj lbl_80518CC8, local
	.asciz "orima"
.endobj lbl_80518CC8
.balign 4
.obj lbl_80518CD0, local
	.float 1.3
.endobj lbl_80518CD0
.obj lbl_80518CD4, local
	.float 1.5
.endobj lbl_80518CD4
.obj lbl_80518CD8, local
	.float 900.0
.endobj lbl_80518CD8
.obj lbl_80518CDC, local
	.float 0.75
.endobj lbl_80518CDC
.obj lbl_80518CE0, local
	.float 720.0
.endobj lbl_80518CE0
.obj lbl_80518CE4, local
	.float 12800.0
.endobj lbl_80518CE4
.obj lbl_80518CE8, local
	.float 2500.0
.endobj lbl_80518CE8
.obj lbl_80518CEC, local
	.float 240.0
.endobj lbl_80518CEC
.obj lbl_80518CF0, local
	.float 0.01
.endobj lbl_80518CF0
.obj lbl_80518CF4, local # -pi/2
	.float -1.5707964
.endobj lbl_80518CF4
.obj lbl_80518CF8, local
	.float 0.7
.endobj lbl_80518CF8
.obj lbl_80518CFC, local # tau
	.float 6.2831855
.endobj lbl_80518CFC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn draw2d__Q24Game9NaviStateFR14J2DGrafContextRi, global
/* 8017D44C 0017A38C  4E 80 00 20 */	blr 
.endfn draw2d__Q24Game9NaviStateFR14J2DGrafContextRi

.fn transit__Q24Game7NaviFSMFPQ24Game4NaviiPQ24Game8StateArg, global
/* 8017D450 0017A390  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017D454 0017A394  7C 08 02 A6 */	mflr r0
/* 8017D458 0017A398  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017D45C 0017A39C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017D460 0017A3A0  7C DF 33 78 */	mr r31, r6
/* 8017D464 0017A3A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017D468 0017A3A8  7C BE 2B 78 */	mr r30, r5
/* 8017D46C 0017A3AC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017D470 0017A3B0  7C 9D 23 78 */	mr r29, r4
/* 8017D474 0017A3B4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8017D478 0017A3B8  7C 7C 1B 78 */	mr r28, r3
/* 8017D47C 0017A3BC  48 00 BE 0D */	bl "getCurrID__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"
/* 8017D480 0017A3C0  2C 03 00 00 */	cmpwi r3, 0
/* 8017D484 0017A3C4  41 82 00 0C */	beq .L_8017D490
/* 8017D488 0017A3C8  2C 03 00 01 */	cmpwi r3, 1
/* 8017D48C 0017A3CC  40 82 00 14 */	bne .L_8017D4A0
.L_8017D490:
/* 8017D490 0017A3D0  80 1C 00 1C */	lwz r0, 0x1c(r28)
/* 8017D494 0017A3D4  7C 00 18 00 */	cmpw r0, r3
/* 8017D498 0017A3D8  41 82 00 08 */	beq .L_8017D4A0
/* 8017D49C 0017A3DC  90 7C 00 1C */	stw r3, 0x1c(r28)
.L_8017D4A0:
/* 8017D4A0 0017A3E0  7F 83 E3 78 */	mr r3, r28
/* 8017D4A4 0017A3E4  7F A4 EB 78 */	mr r4, r29
/* 8017D4A8 0017A3E8  7F C5 F3 78 */	mr r5, r30
/* 8017D4AC 0017A3EC  7F E6 FB 78 */	mr r6, r31
/* 8017D4B0 0017A3F0  4B FC A0 D1 */	bl "transit__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
/* 8017D4B4 0017A3F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017D4B8 0017A3F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017D4BC 0017A3FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017D4C0 0017A400  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017D4C4 0017A404  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8017D4C8 0017A408  7C 08 03 A6 */	mtlr r0
/* 8017D4CC 0017A40C  38 21 00 20 */	addi r1, r1, 0x20
/* 8017D4D0 0017A410  4E 80 00 20 */	blr 
.endfn transit__Q24Game7NaviFSMFPQ24Game4NaviiPQ24Game8StateArg

.fn init__Q24Game7NaviFSMFPQ24Game4Navi, global
/* 8017D4D4 0017A414  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017D4D8 0017A418  7C 08 02 A6 */	mflr r0
/* 8017D4DC 0017A41C  38 80 00 1B */	li r4, 0x1b
/* 8017D4E0 0017A420  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017D4E4 0017A424  38 00 FF FF */	li r0, -1
/* 8017D4E8 0017A428  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017D4EC 0017A42C  7C 7F 1B 78 */	mr r31, r3
/* 8017D4F0 0017A430  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8017D4F4 0017A434  48 00 BC D1 */	bl "create__Q24Game26StateMachine<Q24Game4Navi>Fi"
/* 8017D4F8 0017A438  38 60 00 30 */	li r3, 0x30
/* 8017D4FC 0017A43C  4B EA 69 A9 */	bl __nw__FUl
/* 8017D500 0017A440  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D504 0017A444  41 82 00 34 */	beq .L_8017D538
/* 8017D508 0017A448  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D50C 0017A44C  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D510 0017A450  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D514 0017A454  3C 60 80 4B */	lis r3, __vt__Q24Game13NaviWalkState@ha
/* 8017D518 0017A458  90 04 00 00 */	stw r0, 0(r4)
/* 8017D51C 0017A45C  38 C0 00 00 */	li r6, 0
/* 8017D520 0017A460  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D524 0017A464  38 03 36 20 */	addi r0, r3, __vt__Q24Game13NaviWalkState@l
/* 8017D528 0017A468  90 C4 00 04 */	stw r6, 4(r4)
/* 8017D52C 0017A46C  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D530 0017A470  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D534 0017A474  90 04 00 00 */	stw r0, 0(r4)
.L_8017D538:
/* 8017D538 0017A478  7F E3 FB 78 */	mr r3, r31
/* 8017D53C 0017A47C  48 00 BD 69 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D540 0017A480  38 60 00 20 */	li r3, 0x20
/* 8017D544 0017A484  4B EA 69 61 */	bl __nw__FUl
/* 8017D548 0017A488  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D54C 0017A48C  41 82 00 38 */	beq .L_8017D584
/* 8017D550 0017A490  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D554 0017A494  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D558 0017A498  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D55C 0017A49C  3C 60 80 4B */	lis r3, __vt__Q24Game15NaviFollowState@ha
/* 8017D560 0017A4A0  90 04 00 00 */	stw r0, 0(r4)
/* 8017D564 0017A4A4  38 00 00 01 */	li r0, 1
/* 8017D568 0017A4A8  38 C0 00 00 */	li r6, 0
/* 8017D56C 0017A4AC  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D570 0017A4B0  90 04 00 04 */	stw r0, 4(r4)
/* 8017D574 0017A4B4  38 03 35 88 */	addi r0, r3, __vt__Q24Game15NaviFollowState@l
/* 8017D578 0017A4B8  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D57C 0017A4BC  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D580 0017A4C0  90 04 00 00 */	stw r0, 0(r4)
.L_8017D584:
/* 8017D584 0017A4C4  7F E3 FB 78 */	mr r3, r31
/* 8017D588 0017A4C8  48 00 BD 1D */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D58C 0017A4CC  38 60 00 2C */	li r3, 0x2c
/* 8017D590 0017A4D0  4B EA 69 15 */	bl __nw__FUl
/* 8017D594 0017A4D4  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D598 0017A4D8  41 82 00 0C */	beq .L_8017D5A4
/* 8017D59C 0017A4DC  48 00 38 4D */	bl __ct__Q24Game14NaviPunchStateFv
/* 8017D5A0 0017A4E0  7C 64 1B 78 */	mr r4, r3
.L_8017D5A4:
/* 8017D5A4 0017A4E4  7F E3 FB 78 */	mr r3, r31
/* 8017D5A8 0017A4E8  48 00 BC FD */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D5AC 0017A4EC  38 60 00 18 */	li r3, 0x18
/* 8017D5B0 0017A4F0  4B EA 68 F5 */	bl __nw__FUl
/* 8017D5B4 0017A4F4  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D5B8 0017A4F8  41 82 00 38 */	beq .L_8017D5F0
/* 8017D5BC 0017A4FC  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D5C0 0017A500  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D5C4 0017A504  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D5C8 0017A508  3C 60 80 4B */	lis r3, __vt__Q24Game15NaviChangeState@ha
/* 8017D5CC 0017A50C  90 04 00 00 */	stw r0, 0(r4)
/* 8017D5D0 0017A510  38 00 00 03 */	li r0, 3
/* 8017D5D4 0017A514  38 C0 00 00 */	li r6, 0
/* 8017D5D8 0017A518  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D5DC 0017A51C  90 04 00 04 */	stw r0, 4(r4)
/* 8017D5E0 0017A520  38 03 35 D4 */	addi r0, r3, __vt__Q24Game15NaviChangeState@l
/* 8017D5E4 0017A524  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D5E8 0017A528  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D5EC 0017A52C  90 04 00 00 */	stw r0, 0(r4)
.L_8017D5F0:
/* 8017D5F0 0017A530  7F E3 FB 78 */	mr r3, r31
/* 8017D5F4 0017A534  48 00 BC B1 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D5F8 0017A538  38 60 00 18 */	li r3, 0x18
/* 8017D5FC 0017A53C  4B EA 68 A9 */	bl __nw__FUl
/* 8017D600 0017A540  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D604 0017A544  41 82 00 40 */	beq .L_8017D644
/* 8017D608 0017A548  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D60C 0017A54C  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D610 0017A550  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D614 0017A554  3C 60 80 4B */	lis r3, __vt__Q24Game15NaviGatherState@ha
/* 8017D618 0017A558  90 04 00 00 */	stw r0, 0(r4)
/* 8017D61C 0017A55C  38 00 00 04 */	li r0, 4
/* 8017D620 0017A560  38 C0 00 00 */	li r6, 0
/* 8017D624 0017A564  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D628 0017A568  90 04 00 04 */	stw r0, 4(r4)
/* 8017D62C 0017A56C  38 03 2F D4 */	addi r0, r3, __vt__Q24Game15NaviGatherState@l
/* 8017D630 0017A570  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D634 0017A574  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D638 0017A578  90 04 00 00 */	stw r0, 0(r4)
/* 8017D63C 0017A57C  98 C4 00 10 */	stb r6, 0x10(r4)
/* 8017D640 0017A580  98 C4 00 11 */	stb r6, 0x11(r4)
.L_8017D644:
/* 8017D644 0017A584  7F E3 FB 78 */	mr r3, r31
/* 8017D648 0017A588  48 00 BC 5D */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D64C 0017A58C  38 60 00 28 */	li r3, 0x28
/* 8017D650 0017A590  4B EA 68 55 */	bl __nw__FUl
/* 8017D654 0017A594  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D658 0017A598  41 82 00 64 */	beq .L_8017D6BC
/* 8017D65C 0017A59C  38 E4 00 20 */	addi r7, r4, 0x20
/* 8017D660 0017A5A0  3C 60 80 4B */	lis r3, __vt__Q28SysShape14MotionListener@ha
/* 8017D664 0017A5A4  90 E4 00 10 */	stw r7, 0x10(r4)
/* 8017D668 0017A5A8  38 03 A6 6C */	addi r0, r3, __vt__Q28SysShape14MotionListener@l
/* 8017D66C 0017A5AC  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D670 0017A5B0  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D674 0017A5B4  90 04 00 20 */	stw r0, 0x20(r4)
/* 8017D678 0017A5B8  38 C3 37 4C */	addi r6, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D67C 0017A5BC  3C 60 80 4B */	lis r3, __vt__Q24Game14NaviThrowState@ha
/* 8017D680 0017A5C0  38 00 00 05 */	li r0, 5
/* 8017D684 0017A5C4  90 C4 00 00 */	stw r6, 0(r4)
/* 8017D688 0017A5C8  38 63 2F 04 */	addi r3, r3, __vt__Q24Game14NaviThrowState@l
/* 8017D68C 0017A5CC  38 C0 00 00 */	li r6, 0
/* 8017D690 0017A5D0  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D694 0017A5D4  90 04 00 04 */	stw r0, 4(r4)
/* 8017D698 0017A5D8  38 03 00 50 */	addi r0, r3, 0x50
/* 8017D69C 0017A5DC  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D6A0 0017A5E0  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D6A4 0017A5E4  90 64 00 00 */	stw r3, 0(r4)
/* 8017D6A8 0017A5E8  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8017D6AC 0017A5EC  90 03 00 00 */	stw r0, 0(r3)
/* 8017D6B0 0017A5F0  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8017D6B4 0017A5F4  7C 03 38 50 */	subf r0, r3, r7
/* 8017D6B8 0017A5F8  90 03 00 04 */	stw r0, 4(r3)
.L_8017D6BC:
/* 8017D6BC 0017A5FC  7F E3 FB 78 */	mr r3, r31
/* 8017D6C0 0017A600  48 00 BB E5 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D6C4 0017A604  38 60 00 44 */	li r3, 0x44
/* 8017D6C8 0017A608  4B EA 67 DD */	bl __nw__FUl
/* 8017D6CC 0017A60C  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D6D0 0017A610  41 82 00 10 */	beq .L_8017D6E0
/* 8017D6D4 0017A614  38 80 00 01 */	li r4, 1
/* 8017D6D8 0017A618  48 00 84 89 */	bl __ct__Q24Game18NaviThrowWaitStateFv
/* 8017D6DC 0017A61C  7C 64 1B 78 */	mr r4, r3
.L_8017D6E0:
/* 8017D6E0 0017A620  7F E3 FB 78 */	mr r3, r31
/* 8017D6E4 0017A624  48 00 BB C1 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D6E8 0017A628  38 60 00 18 */	li r3, 0x18
/* 8017D6EC 0017A62C  4B EA 67 B9 */	bl __nw__FUl
/* 8017D6F0 0017A630  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D6F4 0017A634  41 82 00 38 */	beq .L_8017D72C
/* 8017D6F8 0017A638  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D6FC 0017A63C  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D700 0017A640  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D704 0017A644  3C 60 80 4B */	lis r3, __vt__Q24Game13NaviDopeState@ha
/* 8017D708 0017A648  90 04 00 00 */	stw r0, 0(r4)
/* 8017D70C 0017A64C  38 00 00 07 */	li r0, 7
/* 8017D710 0017A650  38 C0 00 00 */	li r6, 0
/* 8017D714 0017A654  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D718 0017A658  90 04 00 04 */	stw r0, 4(r4)
/* 8017D71C 0017A65C  38 03 33 C0 */	addi r0, r3, __vt__Q24Game13NaviDopeState@l
/* 8017D720 0017A660  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D724 0017A664  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D728 0017A668  90 04 00 00 */	stw r0, 0(r4)
.L_8017D72C:
/* 8017D72C 0017A66C  7F E3 FB 78 */	mr r3, r31
/* 8017D730 0017A670  48 00 BB 75 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D734 0017A674  38 60 00 1C */	li r3, 0x1c
/* 8017D738 0017A678  4B EA 67 6D */	bl __nw__FUl
/* 8017D73C 0017A67C  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D740 0017A680  41 82 00 38 */	beq .L_8017D778
/* 8017D744 0017A684  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D748 0017A688  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D74C 0017A68C  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D750 0017A690  3C 60 80 4B */	lis r3, __vt__Q24Game13NaviNukuState@ha
/* 8017D754 0017A694  90 04 00 00 */	stw r0, 0(r4)
/* 8017D758 0017A698  38 00 00 08 */	li r0, 8
/* 8017D75C 0017A69C  38 C0 00 00 */	li r6, 0
/* 8017D760 0017A6A0  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D764 0017A6A4  90 04 00 04 */	stw r0, 4(r4)
/* 8017D768 0017A6A8  38 03 34 58 */	addi r0, r3, __vt__Q24Game13NaviNukuState@l
/* 8017D76C 0017A6AC  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D770 0017A6B0  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D774 0017A6B4  90 04 00 00 */	stw r0, 0(r4)
.L_8017D778:
/* 8017D778 0017A6B8  7F E3 FB 78 */	mr r3, r31
/* 8017D77C 0017A6BC  48 00 BB 29 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D780 0017A6C0  38 60 00 60 */	li r3, 0x60
/* 8017D784 0017A6C4  4B EA 67 21 */	bl __nw__FUl
/* 8017D788 0017A6C8  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D78C 0017A6CC  41 82 00 3C */	beq .L_8017D7C8
/* 8017D790 0017A6D0  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D794 0017A6D4  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D798 0017A6D8  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D79C 0017A6DC  3C 60 80 4B */	lis r3, __vt__Q24Game19NaviNukuAdjustState@ha
/* 8017D7A0 0017A6E0  90 04 00 00 */	stw r0, 0(r4)
/* 8017D7A4 0017A6E4  38 00 00 09 */	li r0, 9
/* 8017D7A8 0017A6E8  38 C0 00 00 */	li r6, 0
/* 8017D7AC 0017A6EC  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D7B0 0017A6F0  90 04 00 04 */	stw r0, 4(r4)
/* 8017D7B4 0017A6F4  38 03 34 0C */	addi r0, r3, __vt__Q24Game19NaviNukuAdjustState@l
/* 8017D7B8 0017A6F8  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D7BC 0017A6FC  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D7C0 0017A700  90 04 00 00 */	stw r0, 0(r4)
/* 8017D7C4 0017A704  98 C4 00 48 */	stb r6, 0x48(r4)
.L_8017D7C8:
/* 8017D7C8 0017A708  7F E3 FB 78 */	mr r3, r31
/* 8017D7CC 0017A70C  48 00 BA D9 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D7D0 0017A710  38 60 00 24 */	li r3, 0x24
/* 8017D7D4 0017A714  4B EA 66 D1 */	bl __nw__FUl
/* 8017D7D8 0017A718  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D7DC 0017A71C  41 82 00 38 */	beq .L_8017D814
/* 8017D7E0 0017A720  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D7E4 0017A724  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D7E8 0017A728  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D7EC 0017A72C  3C 60 80 4B */	lis r3, __vt__Q24Game18NaviContainerState@ha
/* 8017D7F0 0017A730  90 04 00 00 */	stw r0, 0(r4)
/* 8017D7F4 0017A734  38 00 00 0A */	li r0, 0xa
/* 8017D7F8 0017A738  38 C0 00 00 */	li r6, 0
/* 8017D7FC 0017A73C  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D800 0017A740  90 04 00 04 */	stw r0, 4(r4)
/* 8017D804 0017A744  38 03 31 94 */	addi r0, r3, __vt__Q24Game18NaviContainerState@l
/* 8017D808 0017A748  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D80C 0017A74C  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D810 0017A750  90 04 00 00 */	stw r0, 0(r4)
.L_8017D814:
/* 8017D814 0017A754  7F E3 FB 78 */	mr r3, r31
/* 8017D818 0017A758  48 00 BA 8D */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D81C 0017A75C  38 60 00 1C */	li r3, 0x1c
/* 8017D820 0017A760  4B EA 66 85 */	bl __nw__FUl
/* 8017D824 0017A764  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D828 0017A768  41 82 00 38 */	beq .L_8017D860
/* 8017D82C 0017A76C  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D830 0017A770  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D834 0017A774  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D838 0017A778  3C 60 80 4B */	lis r3, __vt__Q24Game15NaviAbsorbState@ha
/* 8017D83C 0017A77C  90 04 00 00 */	stw r0, 0(r4)
/* 8017D840 0017A780  38 00 00 0B */	li r0, 0xb
/* 8017D844 0017A784  38 C0 00 00 */	li r6, 0
/* 8017D848 0017A788  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D84C 0017A78C  90 04 00 04 */	stw r0, 4(r4)
/* 8017D850 0017A790  38 03 30 D0 */	addi r0, r3, __vt__Q24Game15NaviAbsorbState@l
/* 8017D854 0017A794  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D858 0017A798  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D85C 0017A79C  90 04 00 00 */	stw r0, 0(r4)
.L_8017D860:
/* 8017D860 0017A7A0  7F E3 FB 78 */	mr r3, r31
/* 8017D864 0017A7A4  48 00 BA 41 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D868 0017A7A8  38 60 00 28 */	li r3, 0x28
/* 8017D86C 0017A7AC  4B EA 66 39 */	bl __nw__FUl
/* 8017D870 0017A7B0  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D874 0017A7B4  41 82 00 38 */	beq .L_8017D8AC
/* 8017D878 0017A7B8  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D87C 0017A7BC  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D880 0017A7C0  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D884 0017A7C4  3C 60 80 4B */	lis r3, __vt__Q24Game14NaviFlickState@ha
/* 8017D888 0017A7C8  90 04 00 00 */	stw r0, 0(r4)
/* 8017D88C 0017A7CC  38 00 00 0C */	li r0, 0xc
/* 8017D890 0017A7D0  38 C0 00 00 */	li r6, 0
/* 8017D894 0017A7D4  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D898 0017A7D8  90 04 00 04 */	stw r0, 4(r4)
/* 8017D89C 0017A7DC  38 03 32 C4 */	addi r0, r3, __vt__Q24Game14NaviFlickState@l
/* 8017D8A0 0017A7E0  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D8A4 0017A7E4  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D8A8 0017A7E8  90 04 00 00 */	stw r0, 0(r4)
.L_8017D8AC:
/* 8017D8AC 0017A7EC  7F E3 FB 78 */	mr r3, r31
/* 8017D8B0 0017A7F0  48 00 B9 F5 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D8B4 0017A7F4  38 60 00 10 */	li r3, 0x10
/* 8017D8B8 0017A7F8  4B EA 65 ED */	bl __nw__FUl
/* 8017D8BC 0017A7FC  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D8C0 0017A800  41 82 00 38 */	beq .L_8017D8F8
/* 8017D8C4 0017A804  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D8C8 0017A808  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D8CC 0017A80C  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D8D0 0017A810  3C 60 80 4B */	lis r3, __vt__Q24Game16NaviDamagedState@ha
/* 8017D8D4 0017A814  90 04 00 00 */	stw r0, 0(r4)
/* 8017D8D8 0017A818  38 00 00 0D */	li r0, 0xd
/* 8017D8DC 0017A81C  38 C0 00 00 */	li r6, 0
/* 8017D8E0 0017A820  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D8E4 0017A824  90 04 00 04 */	stw r0, 4(r4)
/* 8017D8E8 0017A828  38 03 30 84 */	addi r0, r3, __vt__Q24Game16NaviDamagedState@l
/* 8017D8EC 0017A82C  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D8F0 0017A830  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D8F4 0017A834  90 04 00 00 */	stw r0, 0(r4)
.L_8017D8F8:
/* 8017D8F8 0017A838  7F E3 FB 78 */	mr r3, r31
/* 8017D8FC 0017A83C  48 00 B9 A9 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D900 0017A840  38 60 00 24 */	li r3, 0x24
/* 8017D904 0017A844  4B EA 65 A1 */	bl __nw__FUl
/* 8017D908 0017A848  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D90C 0017A84C  41 82 00 38 */	beq .L_8017D944
/* 8017D910 0017A850  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D914 0017A854  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D918 0017A858  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D91C 0017A85C  3C 60 80 4B */	lis r3, __vt__Q24Game16NaviPressedState@ha
/* 8017D920 0017A860  90 04 00 00 */	stw r0, 0(r4)
/* 8017D924 0017A864  38 00 00 0E */	li r0, 0xe
/* 8017D928 0017A868  38 C0 00 00 */	li r6, 0
/* 8017D92C 0017A86C  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D930 0017A870  90 04 00 04 */	stw r0, 4(r4)
/* 8017D934 0017A874  38 03 2D BC */	addi r0, r3, __vt__Q24Game16NaviPressedState@l
/* 8017D938 0017A878  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D93C 0017A87C  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D940 0017A880  90 04 00 00 */	stw r0, 0(r4)
.L_8017D944:
/* 8017D944 0017A884  7F E3 FB 78 */	mr r3, r31
/* 8017D948 0017A888  48 00 B9 5D */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D94C 0017A88C  38 60 00 18 */	li r3, 0x18
/* 8017D950 0017A890  4B EA 65 55 */	bl __nw__FUl
/* 8017D954 0017A894  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D958 0017A898  41 82 00 38 */	beq .L_8017D990
/* 8017D95C 0017A89C  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D960 0017A8A0  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D964 0017A8A4  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D968 0017A8A8  3C 60 80 4B */	lis r3, __vt__Q24Game17NaviFallMeckState@ha
/* 8017D96C 0017A8AC  90 04 00 00 */	stw r0, 0(r4)
/* 8017D970 0017A8B0  38 00 00 0F */	li r0, 0xf
/* 8017D974 0017A8B4  38 C0 00 00 */	li r6, 0
/* 8017D978 0017A8B8  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D97C 0017A8BC  90 04 00 04 */	stw r0, 4(r4)
/* 8017D980 0017A8C0  38 03 33 1C */	addi r0, r3, __vt__Q24Game17NaviFallMeckState@l
/* 8017D984 0017A8C4  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D988 0017A8C8  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D98C 0017A8CC  90 04 00 00 */	stw r0, 0(r4)
.L_8017D990:
/* 8017D990 0017A8D0  7F E3 FB 78 */	mr r3, r31
/* 8017D994 0017A8D4  48 00 B9 11 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D998 0017A8D8  38 60 00 24 */	li r3, 0x24
/* 8017D99C 0017A8DC  4B EA 65 09 */	bl __nw__FUl
/* 8017D9A0 0017A8E0  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D9A4 0017A8E4  41 82 00 38 */	beq .L_8017D9DC
/* 8017D9A8 0017A8E8  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D9AC 0017A8EC  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D9B0 0017A8F0  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017D9B4 0017A8F4  3C 60 80 4B */	lis r3, __vt__Q24Game19NaviKokeDamageState@ha
/* 8017D9B8 0017A8F8  90 04 00 00 */	stw r0, 0(r4)
/* 8017D9BC 0017A8FC  38 00 00 10 */	li r0, 0x10
/* 8017D9C0 0017A900  38 C0 00 00 */	li r6, 0
/* 8017D9C4 0017A904  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017D9C8 0017A908  90 04 00 04 */	stw r0, 4(r4)
/* 8017D9CC 0017A90C  38 03 32 78 */	addi r0, r3, __vt__Q24Game19NaviKokeDamageState@l
/* 8017D9D0 0017A910  90 C4 00 08 */	stw r6, 8(r4)
/* 8017D9D4 0017A914  90 A4 00 00 */	stw r5, 0(r4)
/* 8017D9D8 0017A918  90 04 00 00 */	stw r0, 0(r4)
.L_8017D9DC:
/* 8017D9DC 0017A91C  7F E3 FB 78 */	mr r3, r31
/* 8017D9E0 0017A920  48 00 B8 C5 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017D9E4 0017A924  38 60 00 18 */	li r3, 0x18
/* 8017D9E8 0017A928  4B EA 64 BD */	bl __nw__FUl
/* 8017D9EC 0017A92C  7C 64 1B 79 */	or. r4, r3, r3
/* 8017D9F0 0017A930  41 82 00 38 */	beq .L_8017DA28
/* 8017D9F4 0017A934  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017D9F8 0017A938  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017D9FC 0017A93C  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017DA00 0017A940  3C 60 80 4B */	lis r3, __vt__Q24Game14NaviSaraiState@ha
/* 8017DA04 0017A944  90 04 00 00 */	stw r0, 0(r4)
/* 8017DA08 0017A948  38 00 00 11 */	li r0, 0x11
/* 8017DA0C 0017A94C  38 C0 00 00 */	li r6, 0
/* 8017DA10 0017A950  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017DA14 0017A954  90 04 00 04 */	stw r0, 4(r4)
/* 8017DA18 0017A958  38 03 32 2C */	addi r0, r3, __vt__Q24Game14NaviSaraiState@l
/* 8017DA1C 0017A95C  90 C4 00 08 */	stw r6, 8(r4)
/* 8017DA20 0017A960  90 A4 00 00 */	stw r5, 0(r4)
/* 8017DA24 0017A964  90 04 00 00 */	stw r0, 0(r4)
.L_8017DA28:
/* 8017DA28 0017A968  7F E3 FB 78 */	mr r3, r31
/* 8017DA2C 0017A96C  48 00 B8 79 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017DA30 0017A970  38 60 00 10 */	li r3, 0x10
/* 8017DA34 0017A974  4B EA 64 71 */	bl __nw__FUl
/* 8017DA38 0017A978  7C 64 1B 79 */	or. r4, r3, r3
/* 8017DA3C 0017A97C  41 82 00 38 */	beq .L_8017DA74
/* 8017DA40 0017A980  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017DA44 0017A984  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017DA48 0017A988  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017DA4C 0017A98C  3C 60 80 4B */	lis r3, __vt__Q24Game18NaviSaraiExitState@ha
/* 8017DA50 0017A990  90 04 00 00 */	stw r0, 0(r4)
/* 8017DA54 0017A994  38 00 00 12 */	li r0, 0x12
/* 8017DA58 0017A998  38 C0 00 00 */	li r6, 0
/* 8017DA5C 0017A99C  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017DA60 0017A9A0  90 04 00 04 */	stw r0, 4(r4)
/* 8017DA64 0017A9A4  38 03 31 E0 */	addi r0, r3, __vt__Q24Game18NaviSaraiExitState@l
/* 8017DA68 0017A9A8  90 C4 00 08 */	stw r6, 8(r4)
/* 8017DA6C 0017A9AC  90 A4 00 00 */	stw r5, 0(r4)
/* 8017DA70 0017A9B0  90 04 00 00 */	stw r0, 0(r4)
.L_8017DA74:
/* 8017DA74 0017A9B4  7F E3 FB 78 */	mr r3, r31
/* 8017DA78 0017A9B8  48 00 B8 2D */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017DA7C 0017A9BC  38 60 00 10 */	li r3, 0x10
/* 8017DA80 0017A9C0  4B EA 64 25 */	bl __nw__FUl
/* 8017DA84 0017A9C4  7C 64 1B 79 */	or. r4, r3, r3
/* 8017DA88 0017A9C8  41 82 00 38 */	beq .L_8017DAC0
/* 8017DA8C 0017A9CC  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017DA90 0017A9D0  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017DA94 0017A9D4  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017DA98 0017A9D8  3C 60 80 4B */	lis r3, __vt__Q24Game13NaviDeadState@ha
/* 8017DA9C 0017A9DC  90 04 00 00 */	stw r0, 0(r4)
/* 8017DAA0 0017A9E0  38 00 00 13 */	li r0, 0x13
/* 8017DAA4 0017A9E4  38 C0 00 00 */	li r6, 0
/* 8017DAA8 0017A9E8  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017DAAC 0017A9EC  90 04 00 04 */	stw r0, 4(r4)
/* 8017DAB0 0017A9F0  38 03 30 38 */	addi r0, r3, __vt__Q24Game13NaviDeadState@l
/* 8017DAB4 0017A9F4  90 C4 00 08 */	stw r6, 8(r4)
/* 8017DAB8 0017A9F8  90 A4 00 00 */	stw r5, 0(r4)
/* 8017DABC 0017A9FC  90 04 00 00 */	stw r0, 0(r4)
.L_8017DAC0:
/* 8017DAC0 0017AA00  7F E3 FB 78 */	mr r3, r31
/* 8017DAC4 0017AA04  48 00 B7 E1 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017DAC8 0017AA08  38 60 00 24 */	li r3, 0x24
/* 8017DACC 0017AA0C  4B EA 63 D9 */	bl __nw__FUl
/* 8017DAD0 0017AA10  7C 64 1B 79 */	or. r4, r3, r3
/* 8017DAD4 0017AA14  41 82 00 38 */	beq .L_8017DB0C
/* 8017DAD8 0017AA18  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017DADC 0017AA1C  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017DAE0 0017AA20  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017DAE4 0017AA24  3C 60 80 4B */	lis r3, __vt__Q24Game14NaviStuckState@ha
/* 8017DAE8 0017AA28  90 04 00 00 */	stw r0, 0(r4)
/* 8017DAEC 0017AA2C  38 00 00 14 */	li r0, 0x14
/* 8017DAF0 0017AA30  38 C0 00 00 */	li r6, 0
/* 8017DAF4 0017AA34  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017DAF8 0017AA38  90 04 00 04 */	stw r0, 4(r4)
/* 8017DAFC 0017AA3C  38 03 36 A8 */	addi r0, r3, __vt__Q24Game14NaviStuckState@l
/* 8017DB00 0017AA40  90 C4 00 08 */	stw r6, 8(r4)
/* 8017DB04 0017AA44  90 A4 00 00 */	stw r5, 0(r4)
/* 8017DB08 0017AA48  90 04 00 00 */	stw r0, 0(r4)
.L_8017DB0C:
/* 8017DB0C 0017AA4C  7F E3 FB 78 */	mr r3, r31
/* 8017DB10 0017AA50  48 00 B7 95 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017DB14 0017AA54  38 60 00 34 */	li r3, 0x34
/* 8017DB18 0017AA58  4B EA 63 8D */	bl __nw__FUl
/* 8017DB1C 0017AA5C  7C 64 1B 79 */	or. r4, r3, r3
/* 8017DB20 0017AA60  41 82 00 38 */	beq .L_8017DB58
/* 8017DB24 0017AA64  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017DB28 0017AA68  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017DB2C 0017AA6C  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017DB30 0017AA70  3C 60 80 4B */	lis r3, __vt__Q24Game17NaviDemo_UfoState@ha
/* 8017DB34 0017AA74  90 04 00 00 */	stw r0, 0(r4)
/* 8017DB38 0017AA78  38 00 00 15 */	li r0, 0x15
/* 8017DB3C 0017AA7C  38 C0 00 00 */	li r6, 0
/* 8017DB40 0017AA80  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017DB44 0017AA84  90 04 00 04 */	stw r0, 4(r4)
/* 8017DB48 0017AA88  38 03 2E 6C */	addi r0, r3, __vt__Q24Game17NaviDemo_UfoState@l
/* 8017DB4C 0017AA8C  90 C4 00 08 */	stw r6, 8(r4)
/* 8017DB50 0017AA90  90 A4 00 00 */	stw r5, 0(r4)
/* 8017DB54 0017AA94  90 04 00 00 */	stw r0, 0(r4)
.L_8017DB58:
/* 8017DB58 0017AA98  7F E3 FB 78 */	mr r3, r31
/* 8017DB5C 0017AA9C  48 00 B7 49 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017DB60 0017AAA0  38 60 00 18 */	li r3, 0x18
/* 8017DB64 0017AAA4  4B EA 63 41 */	bl __nw__FUl
/* 8017DB68 0017AAA8  7C 64 1B 79 */	or. r4, r3, r3
/* 8017DB6C 0017AAAC  41 82 00 38 */	beq .L_8017DBA4
/* 8017DB70 0017AAB0  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017DB74 0017AAB4  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017DB78 0017AAB8  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017DB7C 0017AABC  3C 60 80 4B */	lis r3, __vt__Q24Game20NaviDemo_HoleInState@ha
/* 8017DB80 0017AAC0  90 04 00 00 */	stw r0, 0(r4)
/* 8017DB84 0017AAC4  38 00 00 16 */	li r0, 0x16
/* 8017DB88 0017AAC8  38 C0 00 00 */	li r6, 0
/* 8017DB8C 0017AACC  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017DB90 0017AAD0  90 04 00 04 */	stw r0, 4(r4)
/* 8017DB94 0017AAD4  38 03 2E 20 */	addi r0, r3, __vt__Q24Game20NaviDemo_HoleInState@l
/* 8017DB98 0017AAD8  90 C4 00 08 */	stw r6, 8(r4)
/* 8017DB9C 0017AADC  90 A4 00 00 */	stw r5, 0(r4)
/* 8017DBA0 0017AAE0  90 04 00 00 */	stw r0, 0(r4)
.L_8017DBA4:
/* 8017DBA4 0017AAE4  7F E3 FB 78 */	mr r3, r31
/* 8017DBA8 0017AAE8  48 00 B6 FD */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017DBAC 0017AAEC  38 60 00 18 */	li r3, 0x18
/* 8017DBB0 0017AAF0  4B EA 62 F5 */	bl __nw__FUl
/* 8017DBB4 0017AAF4  7C 64 1B 79 */	or. r4, r3, r3
/* 8017DBB8 0017AAF8  41 82 00 38 */	beq .L_8017DBF0
/* 8017DBBC 0017AAFC  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017DBC0 0017AB00  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017DBC4 0017AB04  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017DBC8 0017AB08  3C 60 80 4B */	lis r3, __vt__Q24Game15NaviPelletState@ha
/* 8017DBCC 0017AB0C  90 04 00 00 */	stw r0, 0(r4)
/* 8017DBD0 0017AB10  38 00 00 17 */	li r0, 0x17
/* 8017DBD4 0017AB14  38 C0 00 00 */	li r6, 0
/* 8017DBD8 0017AB18  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017DBDC 0017AB1C  90 04 00 04 */	stw r0, 4(r4)
/* 8017DBE0 0017AB20  38 03 2E B8 */	addi r0, r3, __vt__Q24Game15NaviPelletState@l
/* 8017DBE4 0017AB24  90 C4 00 08 */	stw r6, 8(r4)
/* 8017DBE8 0017AB28  90 A4 00 00 */	stw r5, 0(r4)
/* 8017DBEC 0017AB2C  90 04 00 00 */	stw r0, 0(r4)
.L_8017DBF0:
/* 8017DBF0 0017AB30  7F E3 FB 78 */	mr r3, r31
/* 8017DBF4 0017AB34  48 00 B6 B1 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017DBF8 0017AB38  38 60 00 48 */	li r3, 0x48
/* 8017DBFC 0017AB3C  4B EA 62 A9 */	bl __nw__FUl
/* 8017DC00 0017AB40  7C 64 1B 79 */	or. r4, r3, r3
/* 8017DC04 0017AB44  41 82 00 3C */	beq .L_8017DC40
/* 8017DC08 0017AB48  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017DC0C 0017AB4C  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017DC10 0017AB50  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017DC14 0017AB54  3C 60 80 4B */	lis r3, __vt__Q24Game18NaviCarryBombState@ha
/* 8017DC18 0017AB58  90 04 00 00 */	stw r0, 0(r4)
/* 8017DC1C 0017AB5C  38 00 00 18 */	li r0, 0x18
/* 8017DC20 0017AB60  38 C0 00 00 */	li r6, 0
/* 8017DC24 0017AB64  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017DC28 0017AB68  90 04 00 04 */	stw r0, 4(r4)
/* 8017DC2C 0017AB6C  38 03 36 F4 */	addi r0, r3, __vt__Q24Game18NaviCarryBombState@l
/* 8017DC30 0017AB70  90 C4 00 08 */	stw r6, 8(r4)
/* 8017DC34 0017AB74  90 A4 00 00 */	stw r5, 0(r4)
/* 8017DC38 0017AB78  90 04 00 00 */	stw r0, 0(r4)
/* 8017DC3C 0017AB7C  90 C4 00 10 */	stw r6, 0x10(r4)
.L_8017DC40:
/* 8017DC40 0017AB80  7F E3 FB 78 */	mr r3, r31
/* 8017DC44 0017AB84  48 00 B6 61 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017DC48 0017AB88  38 60 00 28 */	li r3, 0x28
/* 8017DC4C 0017AB8C  4B EA 62 59 */	bl __nw__FUl
/* 8017DC50 0017AB90  7C 64 1B 79 */	or. r4, r3, r3
/* 8017DC54 0017AB94  41 82 00 38 */	beq .L_8017DC8C
/* 8017DC58 0017AB98  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017DC5C 0017AB9C  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017DC60 0017ABA0  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017DC64 0017ABA4  3C 60 80 4B */	lis r3, __vt__Q24Game14NaviClimbState@ha
/* 8017DC68 0017ABA8  90 04 00 00 */	stw r0, 0(r4)
/* 8017DC6C 0017ABAC  38 00 00 19 */	li r0, 0x19
/* 8017DC70 0017ABB0  38 C0 00 00 */	li r6, 0
/* 8017DC74 0017ABB4  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017DC78 0017ABB8  90 04 00 04 */	stw r0, 4(r4)
/* 8017DC7C 0017ABBC  38 03 33 68 */	addi r0, r3, __vt__Q24Game14NaviClimbState@l
/* 8017DC80 0017ABC0  90 C4 00 08 */	stw r6, 8(r4)
/* 8017DC84 0017ABC4  90 A4 00 00 */	stw r5, 0(r4)
/* 8017DC88 0017ABC8  90 04 00 00 */	stw r0, 0(r4)
.L_8017DC8C:
/* 8017DC8C 0017ABCC  7F E3 FB 78 */	mr r3, r31
/* 8017DC90 0017ABD0  48 00 B6 15 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017DC94 0017ABD4  38 60 00 30 */	li r3, 0x30
/* 8017DC98 0017ABD8  4B EA 62 0D */	bl __nw__FUl
/* 8017DC9C 0017ABDC  7C 64 1B 79 */	or. r4, r3, r3
/* 8017DCA0 0017ABE0  41 82 00 38 */	beq .L_8017DCD8
/* 8017DCA4 0017ABE4  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 8017DCA8 0017ABE8  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 8017DCAC 0017ABEC  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 8017DCB0 0017ABF0  3C 60 80 4B */	lis r3, __vt__Q24Game17NaviPathMoveState@ha
/* 8017DCB4 0017ABF4  90 04 00 00 */	stw r0, 0(r4)
/* 8017DCB8 0017ABF8  38 00 00 1A */	li r0, 0x1a
/* 8017DCBC 0017ABFC  38 C0 00 00 */	li r6, 0
/* 8017DCC0 0017AC00  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 8017DCC4 0017AC04  90 04 00 04 */	stw r0, 4(r4)
/* 8017DCC8 0017AC08  38 03 34 A4 */	addi r0, r3, __vt__Q24Game17NaviPathMoveState@l
/* 8017DCCC 0017AC0C  90 C4 00 08 */	stw r6, 8(r4)
/* 8017DCD0 0017AC10  90 A4 00 00 */	stw r5, 0(r4)
/* 8017DCD4 0017AC14  90 04 00 00 */	stw r0, 0(r4)
.L_8017DCD8:
/* 8017DCD8 0017AC18  7F E3 FB 78 */	mr r3, r31
/* 8017DCDC 0017AC1C  48 00 B5 C9 */	bl "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
/* 8017DCE0 0017AC20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017DCE4 0017AC24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017DCE8 0017AC28  7C 08 03 A6 */	mtlr r0
/* 8017DCEC 0017AC2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017DCF0 0017AC30  4E 80 00 20 */	blr 
.endfn init__Q24Game7NaviFSMFPQ24Game4Navi

.fn init__Q24Game18NaviCarryBombStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 8017DCF4 0017AC34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017DCF8 0017AC38  7C 08 02 A6 */	mflr r0
/* 8017DCFC 0017AC3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017DD00 0017AC40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017DD04 0017AC44  7C 9F 23 78 */	mr r31, r4
/* 8017DD08 0017AC48  93 C1 00 08 */	stw r30, 8(r1)
/* 8017DD0C 0017AC4C  7C 7E 1B 78 */	mr r30, r3
/* 8017DD10 0017AC50  80 05 00 00 */	lwz r0, 0(r5)
/* 8017DD14 0017AC54  90 03 00 10 */	stw r0, 0x10(r3)
/* 8017DD18 0017AC58  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8017DD1C 0017AC5C  28 00 00 00 */	cmplwi r0, 0
/* 8017DD20 0017AC60  40 82 00 20 */	bne .L_8017DD40
/* 8017DD24 0017AC64  81 83 00 00 */	lwz r12, 0(r3)
/* 8017DD28 0017AC68  38 A0 00 00 */	li r5, 0
/* 8017DD2C 0017AC6C  38 C0 00 00 */	li r6, 0
/* 8017DD30 0017AC70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017DD34 0017AC74  7D 89 03 A6 */	mtctr r12
/* 8017DD38 0017AC78  4E 80 04 21 */	bctrl 
/* 8017DD3C 0017AC7C  48 00 00 70 */	b .L_8017DDAC
.L_8017DD40:
/* 8017DD40 0017AC80  28 1F 00 00 */	cmplwi r31, 0
/* 8017DD44 0017AC84  7F E6 FB 78 */	mr r6, r31
/* 8017DD48 0017AC88  41 82 00 08 */	beq .L_8017DD50
/* 8017DD4C 0017AC8C  38 C6 01 78 */	addi r6, r6, 0x178
.L_8017DD50:
/* 8017DD50 0017AC90  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017DD54 0017AC94  7F E3 FB 78 */	mr r3, r31
/* 8017DD58 0017AC98  38 80 00 29 */	li r4, 0x29
/* 8017DD5C 0017AC9C  38 A0 00 29 */	li r5, 0x29
/* 8017DD60 0017ACA0  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8017DD64 0017ACA4  38 E0 00 00 */	li r7, 0
/* 8017DD68 0017ACA8  7D 89 03 A6 */	mtctr r12
/* 8017DD6C 0017ACAC  4E 80 04 21 */	bctrl 
/* 8017DD70 0017ACB0  7F E3 FB 78 */	mr r3, r31
/* 8017DD74 0017ACB4  4B FB F1 E1 */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 8017DD78 0017ACB8  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 8017DD7C 0017ACBC  38 80 08 A9 */	li r4, 0x8a9
/* 8017DD80 0017ACC0  38 A0 00 00 */	li r5, 0
/* 8017DD84 0017ACC4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017DD88 0017ACC8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017DD8C 0017ACCC  7D 89 03 A6 */	mtctr r12
/* 8017DD90 0017ACD0  4E 80 04 21 */	bctrl 
/* 8017DD94 0017ACD4  7F C3 F3 78 */	mr r3, r30
/* 8017DD98 0017ACD8  7F E4 FB 78 */	mr r4, r31
/* 8017DD9C 0017ACDC  48 00 00 61 */	bl updateMatrix__Q24Game18NaviCarryBombStateFPQ24Game4Navi
/* 8017DDA0 0017ACE0  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8017DDA4 0017ACE4  38 9E 00 14 */	addi r4, r30, 0x14
/* 8017DDA8 0017ACE8  48 02 1D 01 */	bl startCapture__Q24Game8CreatureFP7Matrixf
.L_8017DDAC:
/* 8017DDAC 0017ACEC  38 00 00 00 */	li r0, 0
/* 8017DDB0 0017ACF0  98 1E 00 44 */	stb r0, 0x44(r30)
/* 8017DDB4 0017ACF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017DDB8 0017ACF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017DDBC 0017ACFC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8017DDC0 0017AD00  7C 08 03 A6 */	mtlr r0
/* 8017DDC4 0017AD04  38 21 00 10 */	addi r1, r1, 0x10
/* 8017DDC8 0017AD08  4E 80 00 20 */	blr 
.endfn init__Q24Game18NaviCarryBombStateFPQ24Game4NaviPQ24Game8StateArg

.fn "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg", weak
/* 8017DDCC 0017AD0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017DDD0 0017AD10  7C 08 02 A6 */	mflr r0
/* 8017DDD4 0017AD14  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017DDD8 0017AD18  80 63 00 08 */	lwz r3, 8(r3)
/* 8017DDDC 0017AD1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8017DDE0 0017AD20  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017DDE4 0017AD24  7D 89 03 A6 */	mtctr r12
/* 8017DDE8 0017AD28  4E 80 04 21 */	bctrl 
/* 8017DDEC 0017AD2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017DDF0 0017AD30  7C 08 03 A6 */	mtlr r0
/* 8017DDF4 0017AD34  38 21 00 10 */	addi r1, r1, 0x10
/* 8017DDF8 0017AD38  4E 80 00 20 */	blr 
.endfn "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"

.fn updateMatrix__Q24Game18NaviCarryBombStateFPQ24Game4Navi, global
/* 8017DDFC 0017AD3C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8017DE00 0017AD40  7C 08 02 A6 */	mflr r0
/* 8017DE04 0017AD44  90 01 00 54 */	stw r0, 0x54(r1)
/* 8017DE08 0017AD48  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8017DE0C 0017AD4C  7C 9F 23 78 */	mr r31, r4
/* 8017DE10 0017AD50  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8017DE14 0017AD54  7C 7E 1B 78 */	mr r30, r3
/* 8017DE18 0017AD58  38 61 00 08 */	addi r3, r1, 8
/* 8017DE1C 0017AD5C  81 84 00 00 */	lwz r12, 0(r4)
/* 8017DE20 0017AD60  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017DE24 0017AD64  7D 89 03 A6 */	mtctr r12
/* 8017DE28 0017AD68  4E 80 04 21 */	bctrl 
/* 8017DE2C 0017AD6C  C0 41 00 08 */	lfs f2, 8(r1)
/* 8017DE30 0017AD70  7F E3 FB 78 */	mr r3, r31
/* 8017DE34 0017AD74  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8017DE38 0017AD78  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8017DE3C 0017AD7C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8017DE40 0017AD80  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8017DE44 0017AD84  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8017DE48 0017AD88  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017DE4C 0017AD8C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8017DE50 0017AD90  7D 89 03 A6 */	mtctr r12
/* 8017DE54 0017AD94  4E 80 04 21 */	bctrl 
/* 8017DE58 0017AD98  FC 40 08 90 */	fmr f2, f1
/* 8017DE5C 0017AD9C  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017DE60 0017ADA0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8017DE64 0017ADA4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8017DE68 0017ADA8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8017DE6C 0017ADAC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8017DE70 0017ADB0  40 80 00 08 */	bge .L_8017DE78
/* 8017DE74 0017ADB4  FC 40 10 50 */	fneg f2, f2
.L_8017DE78:
/* 8017DE78 0017ADB8  C0 62 A8 88 */	lfs f3, lbl_80518BE8@sda21(r2)
/* 8017DE7C 0017ADBC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8017DE80 0017ADC0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017DE84 0017ADC4  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8017DE88 0017ADC8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8017DE8C 0017ADCC  C0 A2 A8 84 */	lfs f5, lbl_80518BE4@sda21(r2)
/* 8017DE90 0017ADD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017DE94 0017ADD4  C0 81 00 20 */	lfs f4, 0x20(r1)
/* 8017DE98 0017ADD8  FC 00 10 1E */	fctiwz f0, f2
/* 8017DE9C 0017ADDC  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8017DEA0 0017ADE0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017DEA4 0017ADE4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8017DEA8 0017ADE8  7C 64 02 14 */	add r3, r4, r0
/* 8017DEAC 0017ADEC  C0 03 00 04 */	lfs f0, 4(r3)
/* 8017DEB0 0017ADF0  EC C5 00 32 */	fmuls f6, f5, f0
/* 8017DEB4 0017ADF4  40 80 00 28 */	bge .L_8017DEDC
/* 8017DEB8 0017ADF8  C0 02 A8 8C */	lfs f0, lbl_80518BEC@sda21(r2)
/* 8017DEBC 0017ADFC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8017DEC0 0017AE00  FC 00 00 1E */	fctiwz f0, f0
/* 8017DEC4 0017AE04  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8017DEC8 0017AE08  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8017DECC 0017AE0C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8017DED0 0017AE10  7C 04 04 2E */	lfsx f0, r4, r0
/* 8017DED4 0017AE14  FC 00 00 50 */	fneg f0, f0
/* 8017DED8 0017AE18  48 00 00 1C */	b .L_8017DEF4
.L_8017DEDC:
/* 8017DEDC 0017AE1C  EC 01 00 F2 */	fmuls f0, f1, f3
/* 8017DEE0 0017AE20  FC 00 00 1E */	fctiwz f0, f0
/* 8017DEE4 0017AE24  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8017DEE8 0017AE28  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017DEEC 0017AE2C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8017DEF0 0017AE30  7C 04 04 2E */	lfsx f0, r4, r0
.L_8017DEF4:
/* 8017DEF4 0017AE34  EC 65 00 32 */	fmuls f3, f5, f0
/* 8017DEF8 0017AE38  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8017DEFC 0017AE3C  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8017DF00 0017AE40  38 7E 00 14 */	addi r3, r30, 0x14
/* 8017DF04 0017AE44  C0 22 A8 90 */	lfs f1, lbl_80518BF0@sda21(r2)
/* 8017DF08 0017AE48  EC 00 30 2A */	fadds f0, f0, f6
/* 8017DF0C 0017AE4C  EC 64 18 2A */	fadds f3, f4, f3
/* 8017DF10 0017AE50  38 81 00 20 */	addi r4, r1, 0x20
/* 8017DF14 0017AE54  EC 22 08 2A */	fadds f1, f2, f1
/* 8017DF18 0017AE58  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8017DF1C 0017AE5C  38 A1 00 14 */	addi r5, r1, 0x14
/* 8017DF20 0017AE60  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8017DF24 0017AE64  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8017DF28 0017AE68  48 2A A9 61 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 8017DF2C 0017AE6C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8017DF30 0017AE70  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8017DF34 0017AE74  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8017DF38 0017AE78  7C 08 03 A6 */	mtlr r0
/* 8017DF3C 0017AE7C  38 21 00 50 */	addi r1, r1, 0x50
/* 8017DF40 0017AE80  4E 80 00 20 */	blr 
.endfn updateMatrix__Q24Game18NaviCarryBombStateFPQ24Game4Navi

.fn exec__Q24Game18NaviCarryBombStateFPQ24Game4Navi, global
/* 8017DF44 0017AE84  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8017DF48 0017AE88  7C 08 02 A6 */	mflr r0
/* 8017DF4C 0017AE8C  90 01 00 94 */	stw r0, 0x94(r1)
/* 8017DF50 0017AE90  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8017DF54 0017AE94  7C 9F 23 78 */	mr r31, r4
/* 8017DF58 0017AE98  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8017DF5C 0017AE9C  7C 7E 1B 78 */	mr r30, r3
/* 8017DF60 0017AEA0  7F E3 FB 78 */	mr r3, r31
/* 8017DF64 0017AEA4  4B FC 5B A1 */	bl control__Q24Game4NaviFv
/* 8017DF68 0017AEA8  7F E4 FB 78 */	mr r4, r31
/* 8017DF6C 0017AEAC  38 61 00 20 */	addi r3, r1, 0x20
/* 8017DF70 0017AEB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017DF74 0017AEB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017DF78 0017AEB8  7D 89 03 A6 */	mtctr r12
/* 8017DF7C 0017AEBC  4E 80 04 21 */	bctrl 
/* 8017DF80 0017AEC0  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8017DF84 0017AEC4  7F E3 FB 78 */	mr r3, r31
/* 8017DF88 0017AEC8  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8017DF8C 0017AECC  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8017DF90 0017AED0  D0 41 00 08 */	stfs f2, 8(r1)
/* 8017DF94 0017AED4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8017DF98 0017AED8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8017DF9C 0017AEDC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017DFA0 0017AEE0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8017DFA4 0017AEE4  7D 89 03 A6 */	mtctr r12
/* 8017DFA8 0017AEE8  4E 80 04 21 */	bctrl 
/* 8017DFAC 0017AEEC  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017DFB0 0017AEF0  FC 40 08 90 */	fmr f2, f1
/* 8017DFB4 0017AEF4  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8017DFB8 0017AEF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017DFBC 0017AEFC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8017DFC0 0017AF00  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8017DFC4 0017AF04  40 80 00 08 */	bge .L_8017DFCC
/* 8017DFC8 0017AF08  FC 40 08 50 */	fneg f2, f1
.L_8017DFCC:
/* 8017DFCC 0017AF0C  C0 62 A8 88 */	lfs f3, lbl_80518BE8@sda21(r2)
/* 8017DFD0 0017AF10  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8017DFD4 0017AF14  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017DFD8 0017AF18  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8017DFDC 0017AF1C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8017DFE0 0017AF20  C0 A2 A8 84 */	lfs f5, lbl_80518BE4@sda21(r2)
/* 8017DFE4 0017AF24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017DFE8 0017AF28  C0 81 00 08 */	lfs f4, 8(r1)
/* 8017DFEC 0017AF2C  FC 00 10 1E */	fctiwz f0, f2
/* 8017DFF0 0017AF30  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 8017DFF4 0017AF34  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 8017DFF8 0017AF38  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8017DFFC 0017AF3C  7C 64 02 14 */	add r3, r4, r0
/* 8017E000 0017AF40  C0 03 00 04 */	lfs f0, 4(r3)
/* 8017E004 0017AF44  EC C5 00 32 */	fmuls f6, f5, f0
/* 8017E008 0017AF48  40 80 00 28 */	bge .L_8017E030
/* 8017E00C 0017AF4C  C0 02 A8 8C */	lfs f0, lbl_80518BEC@sda21(r2)
/* 8017E010 0017AF50  EC 01 00 32 */	fmuls f0, f1, f0
/* 8017E014 0017AF54  FC 00 00 1E */	fctiwz f0, f0
/* 8017E018 0017AF58  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 8017E01C 0017AF5C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8017E020 0017AF60  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8017E024 0017AF64  7C 04 04 2E */	lfsx f0, r4, r0
/* 8017E028 0017AF68  FC 00 00 50 */	fneg f0, f0
/* 8017E02C 0017AF6C  48 00 00 1C */	b .L_8017E048
.L_8017E030:
/* 8017E030 0017AF70  EC 01 00 F2 */	fmuls f0, f1, f3
/* 8017E034 0017AF74  FC 00 00 1E */	fctiwz f0, f0
/* 8017E038 0017AF78  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 8017E03C 0017AF7C  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8017E040 0017AF80  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8017E044 0017AF84  7C 04 04 2E */	lfsx f0, r4, r0
.L_8017E048:
/* 8017E048 0017AF88  EC 65 00 32 */	fmuls f3, f5, f0
/* 8017E04C 0017AF8C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8017E050 0017AF90  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8017E054 0017AF94  38 7E 00 14 */	addi r3, r30, 0x14
/* 8017E058 0017AF98  C0 22 A8 90 */	lfs f1, lbl_80518BF0@sda21(r2)
/* 8017E05C 0017AF9C  EC 00 30 2A */	fadds f0, f0, f6
/* 8017E060 0017AFA0  EC 64 18 2A */	fadds f3, f4, f3
/* 8017E064 0017AFA4  38 81 00 08 */	addi r4, r1, 8
/* 8017E068 0017AFA8  EC 22 08 2A */	fadds f1, f2, f1
/* 8017E06C 0017AFAC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8017E070 0017AFB0  38 A1 00 14 */	addi r5, r1, 0x14
/* 8017E074 0017AFB4  D0 61 00 08 */	stfs f3, 8(r1)
/* 8017E078 0017AFB8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8017E07C 0017AFBC  48 2A A8 0D */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 8017E080 0017AFC0  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8017E084 0017AFC4  28 00 00 00 */	cmplwi r0, 0
/* 8017E088 0017AFC8  41 82 00 48 */	beq .L_8017E0D0
/* 8017E08C 0017AFCC  7F E3 FB 78 */	mr r3, r31
/* 8017E090 0017AFD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017E094 0017AFD4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8017E098 0017AFD8  7D 89 03 A6 */	mtctr r12
/* 8017E09C 0017AFDC  4E 80 04 21 */	bctrl 
/* 8017E0A0 0017AFE0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017E0A4 0017AFE4  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8017E0A8 0017AFE8  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 8017E0AC 0017AFEC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8017E0B0 0017AFF0  38 61 00 38 */	addi r3, r1, 0x38
/* 8017E0B4 0017AFF4  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8017E0B8 0017AFF8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8017E0BC 0017AFFC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8017E0C0 0017B000  48 2A A7 C9 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 8017E0C4 0017B004  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8017E0C8 0017B008  38 81 00 38 */	addi r4, r1, 0x38
/* 8017E0CC 0017B00C  48 02 1A 31 */	bl updateCapture__Q24Game8CreatureFR7Matrixf
.L_8017E0D0:
/* 8017E0D0 0017B010  88 1E 00 44 */	lbz r0, 0x44(r30)
/* 8017E0D4 0017B014  28 00 00 00 */	cmplwi r0, 0
/* 8017E0D8 0017B018  40 82 00 A0 */	bne .L_8017E178
/* 8017E0DC 0017B01C  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8017E0E0 0017B020  80 03 00 B8 */	lwz r0, 0xb8(r3)
/* 8017E0E4 0017B024  28 00 00 00 */	cmplwi r0, 0
/* 8017E0E8 0017B028  41 82 00 0C */	beq .L_8017E0F4
/* 8017E0EC 0017B02C  28 03 00 00 */	cmplwi r3, 0
/* 8017E0F0 0017B030  40 82 00 28 */	bne .L_8017E118
.L_8017E0F4:
/* 8017E0F4 0017B034  7F C3 F3 78 */	mr r3, r30
/* 8017E0F8 0017B038  7F E4 FB 78 */	mr r4, r31
/* 8017E0FC 0017B03C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017E100 0017B040  38 A0 00 00 */	li r5, 0
/* 8017E104 0017B044  38 C0 00 00 */	li r6, 0
/* 8017E108 0017B048  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017E10C 0017B04C  7D 89 03 A6 */	mtctr r12
/* 8017E110 0017B050  4E 80 04 21 */	bctrl 
/* 8017E114 0017B054  48 00 00 64 */	b .L_8017E178
.L_8017E118:
/* 8017E118 0017B058  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 8017E11C 0017B05C  28 03 00 00 */	cmplwi r3, 0
/* 8017E120 0017B060  41 82 00 24 */	beq .L_8017E144
/* 8017E124 0017B064  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8017E128 0017B068  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 8017E12C 0017B06C  41 82 00 18 */	beq .L_8017E144
/* 8017E130 0017B070  7F E3 FB 78 */	mr r3, r31
/* 8017E134 0017B074  4B FB EF 8D */	bl finishMotion__Q24Game8FakePikiFv
/* 8017E138 0017B078  38 00 00 01 */	li r0, 1
/* 8017E13C 0017B07C  98 1E 00 44 */	stb r0, 0x44(r30)
/* 8017E140 0017B080  48 00 00 38 */	b .L_8017E178
.L_8017E144:
/* 8017E144 0017B084  28 03 00 00 */	cmplwi r3, 0
/* 8017E148 0017B088  41 82 00 30 */	beq .L_8017E178
/* 8017E14C 0017B08C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8017E150 0017B090  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8017E154 0017B094  41 82 00 24 */	beq .L_8017E178
/* 8017E158 0017B098  7F C3 F3 78 */	mr r3, r30
/* 8017E15C 0017B09C  7F E4 FB 78 */	mr r4, r31
/* 8017E160 0017B0A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017E164 0017B0A4  38 A0 00 00 */	li r5, 0
/* 8017E168 0017B0A8  38 C0 00 00 */	li r6, 0
/* 8017E16C 0017B0AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017E170 0017B0B0  7D 89 03 A6 */	mtctr r12
/* 8017E174 0017B0B4  4E 80 04 21 */	bctrl 
.L_8017E178:
/* 8017E178 0017B0B8  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8017E17C 0017B0BC  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8017E180 0017B0C0  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8017E184 0017B0C4  7C 08 03 A6 */	mtlr r0
/* 8017E188 0017B0C8  38 21 00 90 */	addi r1, r1, 0x90
/* 8017E18C 0017B0CC  4E 80 00 20 */	blr 
.endfn exec__Q24Game18NaviCarryBombStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game18NaviCarryBombStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 8017E190 0017B0D0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8017E194 0017B0D4  7C 08 02 A6 */	mflr r0
/* 8017E198 0017B0D8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017E19C 0017B0DC  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8017E1A0 0017B0E0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8017E1A4 0017B0E4  7C 9F 23 78 */	mr r31, r4
/* 8017E1A8 0017B0E8  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8017E1AC 0017B0EC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8017E1B0 0017B0F0  7C 7E 1B 78 */	mr r30, r3
/* 8017E1B4 0017B0F4  41 82 01 28 */	beq .L_8017E2DC
/* 8017E1B8 0017B0F8  40 80 01 3C */	bge .L_8017E2F4
/* 8017E1BC 0017B0FC  2C 00 00 01 */	cmpwi r0, 1
/* 8017E1C0 0017B100  41 82 00 08 */	beq .L_8017E1C8
/* 8017E1C4 0017B104  48 00 01 30 */	b .L_8017E2F4
.L_8017E1C8:
/* 8017E1C8 0017B108  88 1E 00 44 */	lbz r0, 0x44(r30)
/* 8017E1CC 0017B10C  28 00 00 00 */	cmplwi r0, 0
/* 8017E1D0 0017B110  41 82 01 24 */	beq .L_8017E2F4
/* 8017E1D4 0017B114  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8017E1D8 0017B118  28 00 00 00 */	cmplwi r0, 0
/* 8017E1DC 0017B11C  41 82 01 18 */	beq .L_8017E2F4
/* 8017E1E0 0017B120  7F E3 FB 78 */	mr r3, r31
/* 8017E1E4 0017B124  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017E1E8 0017B128  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8017E1EC 0017B12C  7D 89 03 A6 */	mtctr r12
/* 8017E1F0 0017B130  4E 80 04 21 */	bctrl 
/* 8017E1F4 0017B134  FC 40 08 90 */	fmr f2, f1
/* 8017E1F8 0017B138  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017E1FC 0017B13C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8017E200 0017B140  40 80 00 08 */	bge .L_8017E208
/* 8017E204 0017B144  FC 40 10 50 */	fneg f2, f2
.L_8017E208:
/* 8017E208 0017B148  C0 62 A8 88 */	lfs f3, lbl_80518BE8@sda21(r2)
/* 8017E20C 0017B14C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8017E210 0017B150  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017E214 0017B154  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8017E218 0017B158  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8017E21C 0017B15C  C0 82 A8 94 */	lfs f4, lbl_80518BF4@sda21(r2)
/* 8017E220 0017B160  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017E224 0017B164  FC 00 10 1E */	fctiwz f0, f2
/* 8017E228 0017B168  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8017E22C 0017B16C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8017E230 0017B170  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8017E234 0017B174  7C 64 02 14 */	add r3, r4, r0
/* 8017E238 0017B178  C0 03 00 04 */	lfs f0, 4(r3)
/* 8017E23C 0017B17C  EC 44 00 32 */	fmuls f2, f4, f0
/* 8017E240 0017B180  40 80 00 28 */	bge .L_8017E268
/* 8017E244 0017B184  C0 02 A8 8C */	lfs f0, lbl_80518BEC@sda21(r2)
/* 8017E248 0017B188  EC 01 00 32 */	fmuls f0, f1, f0
/* 8017E24C 0017B18C  FC 00 00 1E */	fctiwz f0, f0
/* 8017E250 0017B190  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8017E254 0017B194  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017E258 0017B198  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8017E25C 0017B19C  7C 04 04 2E */	lfsx f0, r4, r0
/* 8017E260 0017B1A0  FC 00 00 50 */	fneg f0, f0
/* 8017E264 0017B1A4  48 00 00 1C */	b .L_8017E280
.L_8017E268:
/* 8017E268 0017B1A8  EC 01 00 F2 */	fmuls f0, f1, f3
/* 8017E26C 0017B1AC  FC 00 00 1E */	fctiwz f0, f0
/* 8017E270 0017B1B0  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8017E274 0017B1B4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8017E278 0017B1B8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8017E27C 0017B1BC  7C 04 04 2E */	lfsx f0, r4, r0
.L_8017E280:
/* 8017E280 0017B1C0  EC 24 00 32 */	fmuls f1, f4, f0
/* 8017E284 0017B1C4  C0 02 A8 98 */	lfs f0, lbl_80518BF8@sda21(r2)
/* 8017E288 0017B1C8  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8017E28C 0017B1CC  38 80 08 06 */	li r4, 0x806
/* 8017E290 0017B1D0  38 A0 00 00 */	li r5, 0
/* 8017E294 0017B1D4  D0 21 00 08 */	stfs f1, 8(r1)
/* 8017E298 0017B1D8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8017E29C 0017B1DC  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 8017E2A0 0017B1E0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017E2A4 0017B1E4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017E2A8 0017B1E8  7D 89 03 A6 */	mtctr r12
/* 8017E2AC 0017B1EC  4E 80 04 21 */	bctrl 
/* 8017E2B0 0017B1F0  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8017E2B4 0017B1F4  38 81 00 08 */	addi r4, r1, 8
/* 8017E2B8 0017B1F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E2BC 0017B1FC  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8017E2C0 0017B200  7D 89 03 A6 */	mtctr r12
/* 8017E2C4 0017B204  4E 80 04 21 */	bctrl 
/* 8017E2C8 0017B208  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8017E2CC 0017B20C  48 02 18 D1 */	bl endCapture__Q24Game8CreatureFv
/* 8017E2D0 0017B210  38 00 00 00 */	li r0, 0
/* 8017E2D4 0017B214  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8017E2D8 0017B218  48 00 00 1C */	b .L_8017E2F4
.L_8017E2DC:
/* 8017E2DC 0017B21C  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E2E0 0017B220  38 A0 00 00 */	li r5, 0
/* 8017E2E4 0017B224  38 C0 00 00 */	li r6, 0
/* 8017E2E8 0017B228  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017E2EC 0017B22C  7D 89 03 A6 */	mtctr r12
/* 8017E2F0 0017B230  4E 80 04 21 */	bctrl 
.L_8017E2F4:
/* 8017E2F4 0017B234  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017E2F8 0017B238  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8017E2FC 0017B23C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8017E300 0017B240  7C 08 03 A6 */	mtlr r0
/* 8017E304 0017B244  38 21 00 40 */	addi r1, r1, 0x40
/* 8017E308 0017B248  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game18NaviCarryBombStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game18NaviCarryBombStateFPQ24Game4Navi, global
/* 8017E30C 0017B24C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017E310 0017B250  7C 08 02 A6 */	mflr r0
/* 8017E314 0017B254  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017E318 0017B258  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8017E31C 0017B25C  28 03 00 00 */	cmplwi r3, 0
/* 8017E320 0017B260  41 82 00 08 */	beq .L_8017E328
/* 8017E324 0017B264  48 02 18 79 */	bl endCapture__Q24Game8CreatureFv
.L_8017E328:
/* 8017E328 0017B268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017E32C 0017B26C  7C 08 03 A6 */	mtlr r0
/* 8017E330 0017B270  38 21 00 10 */	addi r1, r1, 0x10
/* 8017E334 0017B274  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game18NaviCarryBombStateFPQ24Game4Navi

.fn init__Q24Game14NaviStuckStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 8017E338 0017B278  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017E33C 0017B27C  7C 08 02 A6 */	mflr r0
/* 8017E340 0017B280  C0 02 A8 9C */	lfs f0, lbl_80518BFC@sda21(r2)
/* 8017E344 0017B284  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017E348 0017B288  38 00 00 00 */	li r0, 0
/* 8017E34C 0017B28C  90 03 00 20 */	stw r0, 0x20(r3)
/* 8017E350 0017B290  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8017E354 0017B294  80 A4 02 78 */	lwz r5, 0x278(r4)
/* 8017E358 0017B298  28 05 00 00 */	cmplwi r5, 0
/* 8017E35C 0017B29C  41 82 00 1C */	beq .L_8017E378
/* 8017E360 0017B2A0  C0 45 00 4C */	lfs f2, 0x4c(r5)
/* 8017E364 0017B2A4  C0 25 00 48 */	lfs f1, 0x48(r5)
/* 8017E368 0017B2A8  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017E36C 0017B2AC  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 8017E370 0017B2B0  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8017E374 0017B2B4  D0 43 00 18 */	stfs f2, 0x18(r3)
.L_8017E378:
/* 8017E378 0017B2B8  7C 83 23 78 */	mr r3, r4
/* 8017E37C 0017B2BC  4B FC 71 11 */	bl releasePikis__Q24Game4NaviFv
/* 8017E380 0017B2C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017E384 0017B2C4  7C 08 03 A6 */	mtlr r0
/* 8017E388 0017B2C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017E38C 0017B2CC  4E 80 00 20 */	blr 
.endfn init__Q24Game14NaviStuckStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game14NaviStuckStateFPQ24Game4Navi, global
/* 8017E390 0017B2D0  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8017E394 0017B2D4  7C 08 02 A6 */	mflr r0
/* 8017E398 0017B2D8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8017E39C 0017B2DC  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8017E3A0 0017B2E0  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8017E3A4 0017B2E4  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 8017E3A8 0017B2E8  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 8017E3AC 0017B2EC  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 8017E3B0 0017B2F0  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 8017E3B4 0017B2F4  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 8017E3B8 0017B2F8  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 8017E3BC 0017B2FC  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8017E3C0 0017B300  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8017E3C4 0017B304  93 A1 00 64 */	stw r29, 0x64(r1)
/* 8017E3C8 0017B308  7C 9F 23 78 */	mr r31, r4
/* 8017E3CC 0017B30C  7C 7E 1B 78 */	mr r30, r3
/* 8017E3D0 0017B310  80 04 02 78 */	lwz r0, 0x278(r4)
/* 8017E3D4 0017B314  28 00 00 00 */	cmplwi r0, 0
/* 8017E3D8 0017B318  41 82 00 10 */	beq .L_8017E3E8
/* 8017E3DC 0017B31C  88 1F 02 59 */	lbz r0, 0x259(r31)
/* 8017E3E0 0017B320  28 00 00 00 */	cmplwi r0, 0
/* 8017E3E4 0017B324  40 82 00 28 */	bne .L_8017E40C
.L_8017E3E8:
/* 8017E3E8 0017B328  7F C3 F3 78 */	mr r3, r30
/* 8017E3EC 0017B32C  7F E4 FB 78 */	mr r4, r31
/* 8017E3F0 0017B330  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017E3F4 0017B334  38 A0 00 00 */	li r5, 0
/* 8017E3F8 0017B338  38 C0 00 00 */	li r6, 0
/* 8017E3FC 0017B33C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017E400 0017B340  7D 89 03 A6 */	mtctr r12
/* 8017E404 0017B344  4E 80 04 21 */	bctrl 
/* 8017E408 0017B348  48 00 04 08 */	b .L_8017E810
.L_8017E40C:
/* 8017E40C 0017B34C  7F E3 FB 78 */	mr r3, r31
/* 8017E410 0017B350  4B FC 56 F5 */	bl control__Q24Game4NaviFv
/* 8017E414 0017B354  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 8017E418 0017B358  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 8017E41C 0017B35C  C3 E3 00 4C */	lfs f31, 0x4c(r3)
/* 8017E420 0017B360  C3 C3 00 48 */	lfs f30, 0x48(r3)
/* 8017E424 0017B364  EC 5F 07 F2 */	fmuls f2, f31, f31
/* 8017E428 0017B368  EC 1E 0F BA */	fmadds f0, f30, f30, f1
/* 8017E42C 0017B36C  EC 42 00 2A */	fadds f2, f2, f0
/* 8017E430 0017B370  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8017E434 0017B374  40 81 00 14 */	ble .L_8017E448
/* 8017E438 0017B378  40 81 00 14 */	ble .L_8017E44C
/* 8017E43C 0017B37C  FC 00 10 34 */	frsqrte f0, f2
/* 8017E440 0017B380  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8017E444 0017B384  48 00 00 08 */	b .L_8017E44C
.L_8017E448:
/* 8017E448 0017B388  FC 40 08 90 */	fmr f2, f1
.L_8017E44C:
/* 8017E44C 0017B38C  C0 02 A8 A0 */	lfs f0, lbl_80518C00@sda21(r2)
/* 8017E450 0017B390  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8017E454 0017B394  40 81 03 7C */	ble .L_8017E7D0
/* 8017E458 0017B398  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 8017E45C 0017B39C  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8017E460 0017B3A0  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 8017E464 0017B3A4  EC 21 00 32 */	fmuls f1, f1, f0
/* 8017E468 0017B3A8  C0 7E 00 18 */	lfs f3, 0x18(r30)
/* 8017E46C 0017B3AC  C0 02 A8 A4 */	lfs f0, lbl_80518C04@sda21(r2)
/* 8017E470 0017B3B0  EC 3E 08 BA */	fmadds f1, f30, f2, f1
/* 8017E474 0017B3B4  EC 3F 08 FA */	fmadds f1, f31, f3, f1
/* 8017E478 0017B3B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017E47C 0017B3BC  40 80 03 54 */	bge .L_8017E7D0
/* 8017E480 0017B3C0  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 8017E484 0017B3C4  38 03 00 01 */	addi r0, r3, 1
/* 8017E488 0017B3C8  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8017E48C 0017B3CC  80 1E 00 20 */	lwz r0, 0x20(r30)
/* 8017E490 0017B3D0  2C 00 00 09 */	cmpwi r0, 9
/* 8017E494 0017B3D4  40 81 03 24 */	ble .L_8017E7B8
/* 8017E498 0017B3D8  7F E4 FB 78 */	mr r4, r31
/* 8017E49C 0017B3DC  38 61 00 2C */	addi r3, r1, 0x2c
/* 8017E4A0 0017B3E0  48 02 17 BD */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 8017E4A4 0017B3E4  38 00 00 00 */	li r0, 0
/* 8017E4A8 0017B3E8  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 8017E4AC 0017B3EC  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 8017E4B0 0017B3F0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8017E4B4 0017B3F4  28 00 00 00 */	cmplwi r0, 0
/* 8017E4B8 0017B3F8  90 81 00 08 */	stw r4, 8(r1)
/* 8017E4BC 0017B3FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017E4C0 0017B400  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017E4C4 0017B404  90 61 00 10 */	stw r3, 0x10(r1)
/* 8017E4C8 0017B408  40 82 00 1C */	bne .L_8017E4E4
/* 8017E4CC 0017B40C  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E4D0 0017B410  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8017E4D4 0017B414  7D 89 03 A6 */	mtctr r12
/* 8017E4D8 0017B418  4E 80 04 21 */	bctrl 
/* 8017E4DC 0017B41C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017E4E0 0017B420  48 00 02 A4 */	b .L_8017E784
.L_8017E4E4:
/* 8017E4E4 0017B424  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E4E8 0017B428  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8017E4EC 0017B42C  7D 89 03 A6 */	mtctr r12
/* 8017E4F0 0017B430  4E 80 04 21 */	bctrl 
/* 8017E4F4 0017B434  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017E4F8 0017B438  48 00 00 58 */	b .L_8017E550
.L_8017E4FC:
/* 8017E4FC 0017B43C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017E500 0017B440  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017E504 0017B444  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E508 0017B448  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8017E50C 0017B44C  7D 89 03 A6 */	mtctr r12
/* 8017E510 0017B450  4E 80 04 21 */	bctrl 
/* 8017E514 0017B454  7C 64 1B 78 */	mr r4, r3
/* 8017E518 0017B458  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8017E51C 0017B45C  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E520 0017B460  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017E524 0017B464  7D 89 03 A6 */	mtctr r12
/* 8017E528 0017B468  4E 80 04 21 */	bctrl 
/* 8017E52C 0017B46C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017E530 0017B470  40 82 02 54 */	bne .L_8017E784
/* 8017E534 0017B474  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017E538 0017B478  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017E53C 0017B47C  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E540 0017B480  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017E544 0017B484  7D 89 03 A6 */	mtctr r12
/* 8017E548 0017B488  4E 80 04 21 */	bctrl 
/* 8017E54C 0017B48C  90 61 00 0C */	stw r3, 0xc(r1)
.L_8017E550:
/* 8017E550 0017B490  81 81 00 08 */	lwz r12, 8(r1)
/* 8017E554 0017B494  38 61 00 08 */	addi r3, r1, 8
/* 8017E558 0017B498  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8017E55C 0017B49C  7D 89 03 A6 */	mtctr r12
/* 8017E560 0017B4A0  4E 80 04 21 */	bctrl 
/* 8017E564 0017B4A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017E568 0017B4A8  41 82 FF 94 */	beq .L_8017E4FC
/* 8017E56C 0017B4AC  48 00 02 18 */	b .L_8017E784
.L_8017E570:
/* 8017E570 0017B4B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017E574 0017B4B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E578 0017B4B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8017E57C 0017B4BC  7D 89 03 A6 */	mtctr r12
/* 8017E580 0017B4C0  4E 80 04 21 */	bctrl 
/* 8017E584 0017B4C4  7C 7D 1B 79 */	or. r29, r3, r3
/* 8017E588 0017B4C8  41 82 01 40 */	beq .L_8017E6C8
/* 8017E58C 0017B4CC  4B F4 B0 15 */	bl rand
/* 8017E590 0017B4D0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8017E594 0017B4D4  3C 00 43 30 */	lis r0, 0x4330
/* 8017E598 0017B4D8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8017E59C 0017B4DC  C8 62 A8 D0 */	lfd f3, lbl_80518C30@sda21(r2)
/* 8017E5A0 0017B4E0  90 01 00 48 */	stw r0, 0x48(r1)
/* 8017E5A4 0017B4E4  C0 22 A8 A8 */	lfs f1, lbl_80518C08@sda21(r2)
/* 8017E5A8 0017B4E8  C8 41 00 48 */	lfd f2, 0x48(r1)
/* 8017E5AC 0017B4EC  C0 02 A8 AC */	lfs f0, lbl_80518C0C@sda21(r2)
/* 8017E5B0 0017B4F0  EC 42 18 28 */	fsubs f2, f2, f3
/* 8017E5B4 0017B4F4  EC 22 08 24 */	fdivs f1, f2, f1
/* 8017E5B8 0017B4F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017E5BC 0017B4FC  40 81 01 0C */	ble .L_8017E6C8
/* 8017E5C0 0017B500  4B F4 AF E1 */	bl rand
/* 8017E5C4 0017B504  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8017E5C8 0017B508  3C 00 43 30 */	lis r0, 0x4330
/* 8017E5CC 0017B50C  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8017E5D0 0017B510  C8 62 A8 D0 */	lfd f3, lbl_80518C30@sda21(r2)
/* 8017E5D4 0017B514  90 01 00 48 */	stw r0, 0x48(r1)
/* 8017E5D8 0017B518  C0 42 A8 A8 */	lfs f2, lbl_80518C08@sda21(r2)
/* 8017E5DC 0017B51C  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 8017E5E0 0017B520  C0 22 A8 B4 */	lfs f1, lbl_80518C14@sda21(r2)
/* 8017E5E4 0017B524  EC 60 18 28 */	fsubs f3, f0, f3
/* 8017E5E8 0017B528  C0 02 A8 B0 */	lfs f0, lbl_80518C10@sda21(r2)
/* 8017E5EC 0017B52C  C3 82 A8 B8 */	lfs f28, lbl_80518C18@sda21(r2)
/* 8017E5F0 0017B530  EC 43 10 24 */	fdivs f2, f3, f2
/* 8017E5F4 0017B534  EF A1 00 BA */	fmadds f29, f1, f2, f0
/* 8017E5F8 0017B538  4B F4 AF A9 */	bl rand
/* 8017E5FC 0017B53C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8017E600 0017B540  3C 00 43 30 */	lis r0, 0x4330
/* 8017E604 0017B544  90 61 00 54 */	stw r3, 0x54(r1)
/* 8017E608 0017B548  C8 62 A8 D0 */	lfd f3, lbl_80518C30@sda21(r2)
/* 8017E60C 0017B54C  90 01 00 50 */	stw r0, 0x50(r1)
/* 8017E610 0017B550  C0 22 A8 A8 */	lfs f1, lbl_80518C08@sda21(r2)
/* 8017E614 0017B554  C8 41 00 50 */	lfd f2, 0x50(r1)
/* 8017E618 0017B558  C0 02 A8 BC */	lfs f0, lbl_80518C1C@sda21(r2)
/* 8017E61C 0017B55C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8017E620 0017B560  EC 22 08 24 */	fdivs f1, f2, f1
/* 8017E624 0017B564  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017E628 0017B568  40 81 00 5C */	ble .L_8017E684
/* 8017E62C 0017B56C  FC 20 F0 90 */	fmr f1, f30
/* 8017E630 0017B570  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8017E634 0017B574  FC 40 F8 90 */	fmr f2, f31
/* 8017E638 0017B578  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8017E63C 0017B57C  4B EB 6A CD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8017E640 0017B580  FF 80 08 90 */	fmr f28, f1
/* 8017E644 0017B584  4B F4 AF 5D */	bl rand
/* 8017E648 0017B588  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8017E64C 0017B58C  3C 00 43 30 */	lis r0, 0x4330
/* 8017E650 0017B590  90 61 00 54 */	stw r3, 0x54(r1)
/* 8017E654 0017B594  C8 62 A8 D0 */	lfd f3, lbl_80518C30@sda21(r2)
/* 8017E658 0017B598  90 01 00 50 */	stw r0, 0x50(r1)
/* 8017E65C 0017B59C  C0 42 A8 A8 */	lfs f2, lbl_80518C08@sda21(r2)
/* 8017E660 0017B5A0  C8 21 00 50 */	lfd f1, 0x50(r1)
/* 8017E664 0017B5A4  C0 02 A8 A4 */	lfs f0, lbl_80518C04@sda21(r2)
/* 8017E668 0017B5A8  EC 61 18 28 */	fsubs f3, f1, f3
/* 8017E66C 0017B5AC  C0 22 A8 C0 */	lfs f1, lbl_80518C20@sda21(r2)
/* 8017E670 0017B5B0  EC 43 10 24 */	fdivs f2, f3, f2
/* 8017E674 0017B5B4  EC 02 00 28 */	fsubs f0, f2, f0
/* 8017E678 0017B5B8  EC 21 E0 3A */	fmadds f1, f1, f0, f28
/* 8017E67C 0017B5BC  48 29 35 55 */	bl roundAng__Ff
/* 8017E680 0017B5C0  FF 80 08 90 */	fmr f28, f1
.L_8017E684:
/* 8017E684 0017B5C4  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 8017E688 0017B5C8  C0 02 A8 C4 */	lfs f0, lbl_80518C24@sda21(r2)
/* 8017E68C 0017B5CC  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 8017E690 0017B5D0  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 8017E694 0017B5D4  90 01 00 18 */	stw r0, 0x18(r1)
/* 8017E698 0017B5D8  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 8017E69C 0017B5DC  7F A3 EB 78 */	mr r3, r29
/* 8017E6A0 0017B5E0  38 81 00 18 */	addi r4, r1, 0x18
/* 8017E6A4 0017B5E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017E6A8 0017B5E8  90 01 00 18 */	stw r0, 0x18(r1)
/* 8017E6AC 0017B5EC  D3 A1 00 20 */	stfs f29, 0x20(r1)
/* 8017E6B0 0017B5F0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8017E6B4 0017B5F4  D3 81 00 28 */	stfs f28, 0x28(r1)
/* 8017E6B8 0017B5F8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8017E6BC 0017B5FC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8017E6C0 0017B600  7D 89 03 A6 */	mtctr r12
/* 8017E6C4 0017B604  4E 80 04 21 */	bctrl 
.L_8017E6C8:
/* 8017E6C8 0017B608  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017E6CC 0017B60C  28 00 00 00 */	cmplwi r0, 0
/* 8017E6D0 0017B610  40 82 00 24 */	bne .L_8017E6F4
/* 8017E6D4 0017B614  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017E6D8 0017B618  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017E6DC 0017B61C  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E6E0 0017B620  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017E6E4 0017B624  7D 89 03 A6 */	mtctr r12
/* 8017E6E8 0017B628  4E 80 04 21 */	bctrl 
/* 8017E6EC 0017B62C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017E6F0 0017B630  48 00 00 94 */	b .L_8017E784
.L_8017E6F4:
/* 8017E6F4 0017B634  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017E6F8 0017B638  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017E6FC 0017B63C  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E700 0017B640  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017E704 0017B644  7D 89 03 A6 */	mtctr r12
/* 8017E708 0017B648  4E 80 04 21 */	bctrl 
/* 8017E70C 0017B64C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017E710 0017B650  48 00 00 58 */	b .L_8017E768
.L_8017E714:
/* 8017E714 0017B654  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017E718 0017B658  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017E71C 0017B65C  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E720 0017B660  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8017E724 0017B664  7D 89 03 A6 */	mtctr r12
/* 8017E728 0017B668  4E 80 04 21 */	bctrl 
/* 8017E72C 0017B66C  7C 64 1B 78 */	mr r4, r3
/* 8017E730 0017B670  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8017E734 0017B674  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E738 0017B678  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017E73C 0017B67C  7D 89 03 A6 */	mtctr r12
/* 8017E740 0017B680  4E 80 04 21 */	bctrl 
/* 8017E744 0017B684  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017E748 0017B688  40 82 00 3C */	bne .L_8017E784
/* 8017E74C 0017B68C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017E750 0017B690  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017E754 0017B694  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E758 0017B698  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017E75C 0017B69C  7D 89 03 A6 */	mtctr r12
/* 8017E760 0017B6A0  4E 80 04 21 */	bctrl 
/* 8017E764 0017B6A4  90 61 00 0C */	stw r3, 0xc(r1)
.L_8017E768:
/* 8017E768 0017B6A8  81 81 00 08 */	lwz r12, 8(r1)
/* 8017E76C 0017B6AC  38 61 00 08 */	addi r3, r1, 8
/* 8017E770 0017B6B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8017E774 0017B6B4  7D 89 03 A6 */	mtctr r12
/* 8017E778 0017B6B8  4E 80 04 21 */	bctrl 
/* 8017E77C 0017B6BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017E780 0017B6C0  41 82 FF 94 */	beq .L_8017E714
.L_8017E784:
/* 8017E784 0017B6C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017E788 0017B6C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017E78C 0017B6CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017E790 0017B6D0  7D 89 03 A6 */	mtctr r12
/* 8017E794 0017B6D4  4E 80 04 21 */	bctrl 
/* 8017E798 0017B6D8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017E79C 0017B6DC  7C 04 18 40 */	cmplw r4, r3
/* 8017E7A0 0017B6E0  40 82 FD D0 */	bne .L_8017E570
/* 8017E7A4 0017B6E4  38 00 00 00 */	li r0, 0
/* 8017E7A8 0017B6E8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8017E7AC 0017B6EC  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8017E7B0 0017B6F0  38 80 FF FF */	li r4, -1
/* 8017E7B4 0017B6F4  48 02 15 B1 */	bl __dt__Q24Game8StickersFv
.L_8017E7B8:
/* 8017E7B8 0017B6F8  D3 DE 00 10 */	stfs f30, 0x10(r30)
/* 8017E7BC 0017B6FC  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 8017E7C0 0017B700  C0 02 A8 C8 */	lfs f0, lbl_80518C28@sda21(r2)
/* 8017E7C4 0017B704  D0 3E 00 14 */	stfs f1, 0x14(r30)
/* 8017E7C8 0017B708  D3 FE 00 18 */	stfs f31, 0x18(r30)
/* 8017E7CC 0017B70C  D0 1E 00 1C */	stfs f0, 0x1c(r30)
.L_8017E7D0:
/* 8017E7D0 0017B710  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8017E7D4 0017B714  C0 5E 00 1C */	lfs f2, 0x1c(r30)
/* 8017E7D8 0017B718  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8017E7DC 0017B71C  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 8017E7E0 0017B720  EC 02 00 28 */	fsubs f0, f2, f0
/* 8017E7E4 0017B724  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8017E7E8 0017B728  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8017E7EC 0017B72C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8017E7F0 0017B730  40 80 00 20 */	bge .L_8017E810
/* 8017E7F4 0017B734  D3 DE 00 10 */	stfs f30, 0x10(r30)
/* 8017E7F8 0017B738  38 00 00 00 */	li r0, 0
/* 8017E7FC 0017B73C  C0 02 A8 A4 */	lfs f0, lbl_80518C04@sda21(r2)
/* 8017E800 0017B740  D0 3E 00 14 */	stfs f1, 0x14(r30)
/* 8017E804 0017B744  D3 FE 00 18 */	stfs f31, 0x18(r30)
/* 8017E808 0017B748  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8017E80C 0017B74C  D0 1E 00 1C */	stfs f0, 0x1c(r30)
.L_8017E810:
/* 8017E810 0017B750  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 8017E814 0017B754  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8017E818 0017B758  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 8017E81C 0017B75C  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 8017E820 0017B760  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 8017E824 0017B764  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 8017E828 0017B768  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 8017E82C 0017B76C  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 8017E830 0017B770  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8017E834 0017B774  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8017E838 0017B778  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8017E83C 0017B77C  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 8017E840 0017B780  7C 08 03 A6 */	mtlr r0
/* 8017E844 0017B784  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8017E848 0017B788  4E 80 00 20 */	blr 
.endfn exec__Q24Game14NaviStuckStateFPQ24Game4Navi

.fn cleanup__Q24Game14NaviStuckStateFPQ24Game4Navi, global
/* 8017E84C 0017B78C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game14NaviStuckStateFPQ24Game4Navi

.fn init__Q24Game13NaviWalkStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 8017E850 0017B790  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017E854 0017B794  7C 08 02 A6 */	mflr r0
/* 8017E858 0017B798  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017E85C 0017B79C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017E860 0017B7A0  7C 9F 23 78 */	mr r31, r4
/* 8017E864 0017B7A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017E868 0017B7A8  7C 7E 1B 78 */	mr r30, r3
/* 8017E86C 0017B7AC  7F E3 FB 78 */	mr r3, r31
/* 8017E870 0017B7B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017E874 0017B7B4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8017E878 0017B7B8  7D 89 03 A6 */	mtctr r12
/* 8017E87C 0017B7BC  4E 80 04 21 */	bctrl 
/* 8017E880 0017B7C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017E884 0017B7C4  41 82 00 44 */	beq .L_8017E8C8
/* 8017E888 0017B7C8  7F E3 FB 78 */	mr r3, r31
/* 8017E88C 0017B7CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017E890 0017B7D0  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8017E894 0017B7D4  7D 89 03 A6 */	mtctr r12
/* 8017E898 0017B7D8  4E 80 04 21 */	bctrl 
/* 8017E89C 0017B7DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017E8A0 0017B7E0  40 82 00 28 */	bne .L_8017E8C8
/* 8017E8A4 0017B7E4  7F E3 FB 78 */	mr r3, r31
/* 8017E8A8 0017B7E8  38 80 00 1E */	li r4, 0x1e
/* 8017E8AC 0017B7EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017E8B0 0017B7F0  38 A0 00 1E */	li r5, 0x1e
/* 8017E8B4 0017B7F4  38 C0 00 00 */	li r6, 0
/* 8017E8B8 0017B7F8  38 E0 00 00 */	li r7, 0
/* 8017E8BC 0017B7FC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8017E8C0 0017B800  7D 89 03 A6 */	mtctr r12
/* 8017E8C4 0017B804  4E 80 04 21 */	bctrl 
.L_8017E8C8:
/* 8017E8C8 0017B808  38 00 00 00 */	li r0, 0
/* 8017E8CC 0017B80C  C0 02 A8 D8 */	lfs f0, lbl_80518C38@sda21(r2)
/* 8017E8D0 0017B810  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8017E8D4 0017B814  7F E4 FB 78 */	mr r4, r31
/* 8017E8D8 0017B818  38 61 00 08 */	addi r3, r1, 8
/* 8017E8DC 0017B81C  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8017E8E0 0017B820  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8017E8E4 0017B824  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017E8E8 0017B828  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017E8EC 0017B82C  7D 89 03 A6 */	mtctr r12
/* 8017E8F0 0017B830  4E 80 04 21 */	bctrl 
/* 8017E8F4 0017B834  C0 01 00 08 */	lfs f0, 8(r1)
/* 8017E8F8 0017B838  38 00 00 00 */	li r0, 0
/* 8017E8FC 0017B83C  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8017E900 0017B840  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8017E904 0017B844  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8017E908 0017B848  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8017E90C 0017B84C  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 8017E910 0017B850  98 1E 00 2C */	stb r0, 0x2c(r30)
/* 8017E914 0017B854  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017E918 0017B858  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017E91C 0017B85C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017E920 0017B860  7C 08 03 A6 */	mtlr r0
/* 8017E924 0017B864  38 21 00 20 */	addi r1, r1, 0x20
/* 8017E928 0017B868  4E 80 00 20 */	blr 
.endfn init__Q24Game13NaviWalkStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017E92C 0017B86C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8017E930 0017B870  7C 08 02 A6 */	mflr r0
/* 8017E934 0017B874  90 01 00 34 */	stw r0, 0x34(r1)
/* 8017E938 0017B878  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8017E93C 0017B87C  7C 7F 1B 78 */	mr r31, r3
/* 8017E940 0017B880  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8017E944 0017B884  7C 9E 23 78 */	mr r30, r4
/* 8017E948 0017B888  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8017E94C 0017B88C  88 63 00 2C */	lbz r3, 0x2c(r3)
/* 8017E950 0017B890  28 03 00 00 */	cmplwi r3, 0
/* 8017E954 0017B894  41 82 00 0C */	beq .L_8017E960
/* 8017E958 0017B898  38 03 FF FF */	addi r0, r3, -1
/* 8017E95C 0017B89C  98 1F 00 2C */	stb r0, 0x2c(r31)
.L_8017E960:
/* 8017E960 0017B8A0  7F C3 F3 78 */	mr r3, r30
/* 8017E964 0017B8A4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017E968 0017B8A8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8017E96C 0017B8AC  7D 89 03 A6 */	mtctr r12
/* 8017E970 0017B8B0  4E 80 04 21 */	bctrl 
/* 8017E974 0017B8B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017E978 0017B8B8  41 82 05 CC */	beq .L_8017EF44
/* 8017E97C 0017B8BC  7F C3 F3 78 */	mr r3, r30
/* 8017E980 0017B8C0  4B FC 51 85 */	bl control__Q24Game4NaviFv
/* 8017E984 0017B8C4  7F C3 F3 78 */	mr r3, r30
/* 8017E988 0017B8C8  4B FC 7D E5 */	bl findNextThrowPiki__Q24Game4NaviFv
/* 8017E98C 0017B8CC  80 1E 02 78 */	lwz r0, 0x278(r30)
/* 8017E990 0017B8D0  28 00 00 00 */	cmplwi r0, 0
/* 8017E994 0017B8D4  40 82 00 4C */	bne .L_8017E9E0
/* 8017E998 0017B8D8  7F C3 F3 78 */	mr r3, r30
/* 8017E99C 0017B8DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017E9A0 0017B8E0  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8017E9A4 0017B8E4  7D 89 03 A6 */	mtctr r12
/* 8017E9A8 0017B8E8  4E 80 04 21 */	bctrl 
/* 8017E9AC 0017B8EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017E9B0 0017B8F0  40 82 00 30 */	bne .L_8017E9E0
/* 8017E9B4 0017B8F4  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8017E9B8 0017B8F8  28 00 00 00 */	cmplwi r0, 0
/* 8017E9BC 0017B8FC  40 82 00 14 */	bne .L_8017E9D0
/* 8017E9C0 0017B900  38 00 00 01 */	li r0, 1
/* 8017E9C4 0017B904  C0 02 A8 DC */	lfs f0, lbl_80518C3C@sda21(r2)
/* 8017E9C8 0017B908  98 1F 00 10 */	stb r0, 0x10(r31)
/* 8017E9CC 0017B90C  D0 1F 00 14 */	stfs f0, 0x14(r31)
.L_8017E9D0:
/* 8017E9D0 0017B910  7F E3 FB 78 */	mr r3, r31
/* 8017E9D4 0017B914  7F C4 F3 78 */	mr r4, r30
/* 8017E9D8 0017B918  48 00 07 2D */	bl execAI__Q24Game13NaviWalkStateFPQ24Game4Navi
/* 8017E9DC 0017B91C  48 00 00 BC */	b .L_8017EA98
.L_8017E9E0:
/* 8017E9E0 0017B920  80 1E 02 78 */	lwz r0, 0x278(r30)
/* 8017E9E4 0017B924  28 00 00 00 */	cmplwi r0, 0
/* 8017E9E8 0017B928  41 82 00 58 */	beq .L_8017EA40
/* 8017E9EC 0017B92C  7F C3 F3 78 */	mr r3, r30
/* 8017E9F0 0017B930  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017E9F4 0017B934  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8017E9F8 0017B938  7D 89 03 A6 */	mtctr r12
/* 8017E9FC 0017B93C  4E 80 04 21 */	bctrl 
/* 8017EA00 0017B940  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017EA04 0017B944  40 82 00 3C */	bne .L_8017EA40
/* 8017EA08 0017B948  C0 3E 03 08 */	lfs f1, 0x308(r30)
/* 8017EA0C 0017B94C  C0 02 A8 E0 */	lfs f0, lbl_80518C40@sda21(r2)
/* 8017EA10 0017B950  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017EA14 0017B954  40 81 00 2C */	ble .L_8017EA40
/* 8017EA18 0017B958  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8017EA1C 0017B95C  28 00 00 00 */	cmplwi r0, 0
/* 8017EA20 0017B960  40 82 00 10 */	bne .L_8017EA30
/* 8017EA24 0017B964  7F E3 FB 78 */	mr r3, r31
/* 8017EA28 0017B968  7F C4 F3 78 */	mr r4, r30
/* 8017EA2C 0017B96C  48 00 0C E9 */	bl initAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi
.L_8017EA30:
/* 8017EA30 0017B970  7F E3 FB 78 */	mr r3, r31
/* 8017EA34 0017B974  7F C4 F3 78 */	mr r4, r30
/* 8017EA38 0017B978  48 00 06 CD */	bl execAI__Q24Game13NaviWalkStateFPQ24Game4Navi
/* 8017EA3C 0017B97C  48 00 00 5C */	b .L_8017EA98
.L_8017EA40:
/* 8017EA40 0017B980  80 1E 02 78 */	lwz r0, 0x278(r30)
/* 8017EA44 0017B984  28 00 00 00 */	cmplwi r0, 0
/* 8017EA48 0017B988  41 82 00 50 */	beq .L_8017EA98
/* 8017EA4C 0017B98C  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8017EA50 0017B990  28 00 00 00 */	cmplwi r0, 0
/* 8017EA54 0017B994  41 82 00 44 */	beq .L_8017EA98
/* 8017EA58 0017B998  C0 3E 03 08 */	lfs f1, 0x308(r30)
/* 8017EA5C 0017B99C  C0 02 A8 E0 */	lfs f0, lbl_80518C40@sda21(r2)
/* 8017EA60 0017B9A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017EA64 0017B9A4  4C 40 13 82 */	cror 2, 0, 2
/* 8017EA68 0017B9A8  40 82 00 30 */	bne .L_8017EA98
/* 8017EA6C 0017B9AC  38 00 00 00 */	li r0, 0
/* 8017EA70 0017B9B0  7F C3 F3 78 */	mr r3, r30
/* 8017EA74 0017B9B4  98 1F 00 10 */	stb r0, 0x10(r31)
/* 8017EA78 0017B9B8  38 80 00 1F */	li r4, 0x1f
/* 8017EA7C 0017B9BC  38 A0 00 1F */	li r5, 0x1f
/* 8017EA80 0017B9C0  38 C0 00 00 */	li r6, 0
/* 8017EA84 0017B9C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017EA88 0017B9C8  38 E0 00 00 */	li r7, 0
/* 8017EA8C 0017B9CC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8017EA90 0017B9D0  7D 89 03 A6 */	mtctr r12
/* 8017EA94 0017B9D4  4E 80 04 21 */	bctrl 
.L_8017EA98:
/* 8017EA98 0017B9D8  80 1E 02 78 */	lwz r0, 0x278(r30)
/* 8017EA9C 0017B9DC  28 00 00 00 */	cmplwi r0, 0
/* 8017EAA0 0017B9E0  41 82 00 20 */	beq .L_8017EAC0
/* 8017EAA4 0017B9E4  7F C3 F3 78 */	mr r3, r30
/* 8017EAA8 0017B9E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017EAAC 0017B9EC  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8017EAB0 0017B9F0  7D 89 03 A6 */	mtctr r12
/* 8017EAB4 0017B9F4  4E 80 04 21 */	bctrl 
/* 8017EAB8 0017B9F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017EABC 0017B9FC  41 82 00 1C */	beq .L_8017EAD8
.L_8017EAC0:
/* 8017EAC0 0017BA00  7F C3 F3 78 */	mr r3, r30
/* 8017EAC4 0017BA04  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017EAC8 0017BA08  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8017EACC 0017BA0C  7D 89 03 A6 */	mtctr r12
/* 8017EAD0 0017BA10  4E 80 04 21 */	bctrl 
/* 8017EAD4 0017BA14  48 00 04 70 */	b .L_8017EF44
.L_8017EAD8:
/* 8017EAD8 0017BA18  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8017EADC 0017BA1C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8017EAE0 0017BA20  2C 00 00 00 */	cmpwi r0, 0
/* 8017EAE4 0017BA24  40 82 04 60 */	bne .L_8017EF44
/* 8017EAE8 0017BA28  88 1E 02 59 */	lbz r0, 0x259(r30)
/* 8017EAEC 0017BA2C  28 00 00 00 */	cmplwi r0, 0
/* 8017EAF0 0017BA30  41 82 00 28 */	beq .L_8017EB18
/* 8017EAF4 0017BA34  7F E3 FB 78 */	mr r3, r31
/* 8017EAF8 0017BA38  7F C4 F3 78 */	mr r4, r30
/* 8017EAFC 0017BA3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017EB00 0017BA40  38 A0 00 14 */	li r5, 0x14
/* 8017EB04 0017BA44  38 C0 00 00 */	li r6, 0
/* 8017EB08 0017BA48  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017EB0C 0017BA4C  7D 89 03 A6 */	mtctr r12
/* 8017EB10 0017BA50  4E 80 04 21 */	bctrl 
/* 8017EB14 0017BA54  48 00 04 30 */	b .L_8017EF44
.L_8017EB18:
/* 8017EB18 0017BA58  7F C3 F3 78 */	mr r3, r30
/* 8017EB1C 0017BA5C  4B FC 4C 1D */	bl checkOnyon__Q24Game4NaviFv
/* 8017EB20 0017BA60  28 03 00 00 */	cmplwi r3, 0
/* 8017EB24 0017BA64  41 82 00 48 */	beq .L_8017EB6C
/* 8017EB28 0017BA68  80 9E 02 78 */	lwz r4, 0x278(r30)
/* 8017EB2C 0017BA6C  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8017EB30 0017BA70  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 8017EB34 0017BA74  41 82 00 38 */	beq .L_8017EB6C
/* 8017EB38 0017BA78  A0 03 02 2E */	lhz r0, 0x22e(r3)
/* 8017EB3C 0017BA7C  28 00 00 03 */	cmplwi r0, 3
/* 8017EB40 0017BA80  41 82 00 2C */	beq .L_8017EB6C
/* 8017EB44 0017BA84  90 61 00 10 */	stw r3, 0x10(r1)
/* 8017EB48 0017BA88  7F E3 FB 78 */	mr r3, r31
/* 8017EB4C 0017BA8C  7F C4 F3 78 */	mr r4, r30
/* 8017EB50 0017BA90  38 C1 00 10 */	addi r6, r1, 0x10
/* 8017EB54 0017BA94  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017EB58 0017BA98  38 A0 00 0A */	li r5, 0xa
/* 8017EB5C 0017BA9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017EB60 0017BAA0  7D 89 03 A6 */	mtctr r12
/* 8017EB64 0017BAA4  4E 80 04 21 */	bctrl 
/* 8017EB68 0017BAA8  48 00 03 DC */	b .L_8017EF44
.L_8017EB6C:
/* 8017EB6C 0017BAAC  80 7E 02 78 */	lwz r3, 0x278(r30)
/* 8017EB70 0017BAB0  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8017EB74 0017BAB4  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 8017EB78 0017BAB8  41 82 00 28 */	beq .L_8017EBA0
/* 8017EB7C 0017BABC  7F E3 FB 78 */	mr r3, r31
/* 8017EB80 0017BAC0  7F C4 F3 78 */	mr r4, r30
/* 8017EB84 0017BAC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017EB88 0017BAC8  38 A0 00 04 */	li r5, 4
/* 8017EB8C 0017BACC  38 C0 00 00 */	li r6, 0
/* 8017EB90 0017BAD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017EB94 0017BAD4  7D 89 03 A6 */	mtctr r12
/* 8017EB98 0017BAD8  4E 80 04 21 */	bctrl 
/* 8017EB9C 0017BADC  48 00 03 A8 */	b .L_8017EF44
.L_8017EBA0:
/* 8017EBA0 0017BAE0  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 8017EBA4 0017BAE4  41 82 00 4C */	beq .L_8017EBF0
/* 8017EBA8 0017BAE8  7F C3 F3 78 */	mr r3, r30
/* 8017EBAC 0017BAEC  4B FC 1A 99 */	bl procActionButton__Q24Game4NaviFv
/* 8017EBB0 0017BAF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017EBB4 0017BAF4  40 82 03 90 */	bne .L_8017EF44
/* 8017EBB8 0017BAF8  7F C3 F3 78 */	mr r3, r30
/* 8017EBBC 0017BAFC  4B FC 5F 95 */	bl throwable__Q24Game4NaviFv
/* 8017EBC0 0017BB00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017EBC4 0017BB04  41 82 03 80 */	beq .L_8017EF44
/* 8017EBC8 0017BB08  7F E3 FB 78 */	mr r3, r31
/* 8017EBCC 0017BB0C  7F C4 F3 78 */	mr r4, r30
/* 8017EBD0 0017BB10  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017EBD4 0017BB14  38 A0 00 06 */	li r5, 6
/* 8017EBD8 0017BB18  38 C0 00 00 */	li r6, 0
/* 8017EBDC 0017BB1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017EBE0 0017BB20  7D 89 03 A6 */	mtctr r12
/* 8017EBE4 0017BB24  4E 80 04 21 */	bctrl 
/* 8017EBE8 0017BB28  48 00 03 5C */	b .L_8017EF44
/* 8017EBEC 0017BB2C  48 00 03 58 */	b .L_8017EF44
.L_8017EBF0:
/* 8017EBF0 0017BB30  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 8017EBF4 0017BB34  41 82 00 30 */	beq .L_8017EC24
/* 8017EBF8 0017BB38  38 00 00 01 */	li r0, 1
/* 8017EBFC 0017BB3C  7F E3 FB 78 */	mr r3, r31
/* 8017EC00 0017BB40  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017EC04 0017BB44  7F C4 F3 78 */	mr r4, r30
/* 8017EC08 0017BB48  38 C1 00 0C */	addi r6, r1, 0xc
/* 8017EC0C 0017BB4C  38 A0 00 07 */	li r5, 7
/* 8017EC10 0017BB50  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017EC14 0017BB54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017EC18 0017BB58  7D 89 03 A6 */	mtctr r12
/* 8017EC1C 0017BB5C  4E 80 04 21 */	bctrl 
/* 8017EC20 0017BB60  48 00 03 24 */	b .L_8017EF44
.L_8017EC24:
/* 8017EC24 0017BB64  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 8017EC28 0017BB68  41 82 00 30 */	beq .L_8017EC58
/* 8017EC2C 0017BB6C  38 00 00 00 */	li r0, 0
/* 8017EC30 0017BB70  7F E3 FB 78 */	mr r3, r31
/* 8017EC34 0017BB74  90 01 00 08 */	stw r0, 8(r1)
/* 8017EC38 0017BB78  7F C4 F3 78 */	mr r4, r30
/* 8017EC3C 0017BB7C  38 C1 00 08 */	addi r6, r1, 8
/* 8017EC40 0017BB80  38 A0 00 07 */	li r5, 7
/* 8017EC44 0017BB84  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017EC48 0017BB88  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017EC4C 0017BB8C  7D 89 03 A6 */	mtctr r12
/* 8017EC50 0017BB90  4E 80 04 21 */	bctrl 
/* 8017EC54 0017BB94  48 00 02 F0 */	b .L_8017EF44
.L_8017EC58:
/* 8017EC58 0017BB98  54 60 05 6B */	rlwinm. r0, r3, 0, 0x15, 0x15
/* 8017EC5C 0017BB9C  41 82 00 28 */	beq .L_8017EC84
/* 8017EC60 0017BBA0  7F C3 F3 78 */	mr r3, r30
/* 8017EC64 0017BBA4  4B FC 68 29 */	bl releasePikis__Q24Game4NaviFv
/* 8017EC68 0017BBA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017EC6C 0017BBAC  40 82 00 10 */	bne .L_8017EC7C
/* 8017EC70 0017BBB0  38 00 00 14 */	li r0, 0x14
/* 8017EC74 0017BBB4  98 1F 00 2B */	stb r0, 0x2b(r31)
/* 8017EC78 0017BBB8  48 00 00 0C */	b .L_8017EC84
.L_8017EC7C:
/* 8017EC7C 0017BBBC  38 00 00 01 */	li r0, 1
/* 8017EC80 0017BBC0  98 1F 00 2B */	stb r0, 0x2b(r31)
.L_8017EC84:
/* 8017EC84 0017BBC4  80 7E 02 78 */	lwz r3, 0x278(r30)
/* 8017EC88 0017BBC8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8017EC8C 0017BBCC  54 00 05 6B */	rlwinm. r0, r0, 0, 0x15, 0x15
/* 8017EC90 0017BBD0  41 82 00 78 */	beq .L_8017ED08
/* 8017EC94 0017BBD4  88 7F 00 2B */	lbz r3, 0x2b(r31)
/* 8017EC98 0017BBD8  28 03 00 00 */	cmplwi r3, 0
/* 8017EC9C 0017BBDC  41 82 00 74 */	beq .L_8017ED10
/* 8017ECA0 0017BBE0  38 03 00 01 */	addi r0, r3, 1
/* 8017ECA4 0017BBE4  98 1F 00 2B */	stb r0, 0x2b(r31)
/* 8017ECA8 0017BBE8  88 1F 00 2B */	lbz r0, 0x2b(r31)
/* 8017ECAC 0017BBEC  28 00 00 23 */	cmplwi r0, 0x23
/* 8017ECB0 0017BBF0  40 81 00 60 */	ble .L_8017ED10
/* 8017ECB4 0017BBF4  38 00 00 00 */	li r0, 0
/* 8017ECB8 0017BBF8  38 80 00 09 */	li r4, 9
/* 8017ECBC 0017BBFC  98 1F 00 2B */	stb r0, 0x2b(r31)
/* 8017ECC0 0017BC00  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8017ECC4 0017BC04  38 63 00 48 */	addi r3, r3, 0x48
/* 8017ECC8 0017BC08  48 06 73 09 */	bl hasItem__Q24Game10OlimarDataFi
/* 8017ECCC 0017BC0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017ECD0 0017BC10  40 82 00 14 */	bne .L_8017ECE4
/* 8017ECD4 0017BC14  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8017ECD8 0017BC18  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8017ECDC 0017BC1C  2C 00 00 00 */	cmpwi r0, 0
/* 8017ECE0 0017BC20  41 82 00 30 */	beq .L_8017ED10
.L_8017ECE4:
/* 8017ECE4 0017BC24  7F E3 FB 78 */	mr r3, r31
/* 8017ECE8 0017BC28  7F C4 F3 78 */	mr r4, r30
/* 8017ECEC 0017BC2C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017ECF0 0017BC30  38 A0 00 17 */	li r5, 0x17
/* 8017ECF4 0017BC34  38 C0 00 00 */	li r6, 0
/* 8017ECF8 0017BC38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017ECFC 0017BC3C  7D 89 03 A6 */	mtctr r12
/* 8017ED00 0017BC40  4E 80 04 21 */	bctrl 
/* 8017ED04 0017BC44  48 00 02 40 */	b .L_8017EF44
.L_8017ED08:
/* 8017ED08 0017BC48  38 00 00 00 */	li r0, 0
/* 8017ED0C 0017BC4C  98 1F 00 2B */	stb r0, 0x2b(r31)
.L_8017ED10:
/* 8017ED10 0017BC50  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8017ED14 0017BC54  48 03 62 AD */	bl paused_soft__Q24Game10GameSystemFv
/* 8017ED18 0017BC58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017ED1C 0017BC5C  40 82 02 28 */	bne .L_8017EF44
/* 8017ED20 0017BC60  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8017ED24 0017BC64  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8017ED28 0017BC68  2C 00 00 00 */	cmpwi r0, 0
/* 8017ED2C 0017BC6C  40 82 02 18 */	bne .L_8017EF44
/* 8017ED30 0017BC70  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8017ED34 0017BC74  38 60 00 00 */	li r3, 0
/* 8017ED38 0017BC78  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8017ED3C 0017BC7C  2C 00 00 01 */	cmpwi r0, 1
/* 8017ED40 0017BC80  41 82 00 0C */	beq .L_8017ED4C
/* 8017ED44 0017BC84  2C 00 00 03 */	cmpwi r0, 3
/* 8017ED48 0017BC88  40 82 00 08 */	bne .L_8017ED50
.L_8017ED4C:
/* 8017ED4C 0017BC8C  38 60 00 01 */	li r3, 1
.L_8017ED50:
/* 8017ED50 0017BC90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017ED54 0017BC94  40 82 01 F0 */	bne .L_8017EF44
/* 8017ED58 0017BC98  80 7E 02 78 */	lwz r3, 0x278(r30)
/* 8017ED5C 0017BC9C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8017ED60 0017BCA0  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 8017ED64 0017BCA4  41 82 01 E0 */	beq .L_8017EF44
/* 8017ED68 0017BCA8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8017ED6C 0017BCAC  38 80 00 25 */	li r4, 0x25
/* 8017ED70 0017BCB0  48 06 86 71 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 8017ED74 0017BCB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017ED78 0017BCB8  41 82 01 CC */	beq .L_8017EF44
/* 8017ED7C 0017BCBC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8017ED80 0017BCC0  A0 1E 02 DC */	lhz r0, 0x2dc(r30)
/* 8017ED84 0017BCC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8017ED88 0017BCC8  20 80 00 01 */	subfic r4, r0, 1
/* 8017ED8C 0017BCCC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8017ED90 0017BCD0  7D 89 03 A6 */	mtctr r12
/* 8017ED94 0017BCD4  4E 80 04 21 */	bctrl 
/* 8017ED98 0017BCD8  7C 7F 1B 78 */	mr r31, r3
/* 8017ED9C 0017BCDC  4B FC 26 A9 */	bl getStateID__Q24Game4NaviFv
/* 8017EDA0 0017BCE0  7C 7D 1B 78 */	mr r29, r3
/* 8017EDA4 0017BCE4  7F E3 FB 78 */	mr r3, r31
/* 8017EDA8 0017BCE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017EDAC 0017BCEC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8017EDB0 0017BCF0  7D 89 03 A6 */	mtctr r12
/* 8017EDB4 0017BCF4  4E 80 04 21 */	bctrl 
/* 8017EDB8 0017BCF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017EDBC 0017BCFC  41 82 01 88 */	beq .L_8017EF44
/* 8017EDC0 0017BD00  2C 1D 00 08 */	cmpwi r29, 8
/* 8017EDC4 0017BD04  41 82 01 80 */	beq .L_8017EF44
/* 8017EDC8 0017BD08  2C 1D 00 09 */	cmpwi r29, 9
/* 8017EDCC 0017BD0C  41 82 01 78 */	beq .L_8017EF44
/* 8017EDD0 0017BD10  2C 1D 00 02 */	cmpwi r29, 2
/* 8017EDD4 0017BD14  41 82 01 70 */	beq .L_8017EF44
/* 8017EDD8 0017BD18  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8017EDDC 0017BD1C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8017EDE0 0017BD20  4B FC EA 85 */	bl pmTogglePlayer__Q24Game15BaseGameSectionFv
/* 8017EDE4 0017BD24  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 8017EDE8 0017BD28  28 00 00 00 */	cmplwi r0, 0
/* 8017EDEC 0017BD2C  40 82 00 18 */	bne .L_8017EE04
/* 8017EDF0 0017BD30  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8017EDF4 0017BD34  38 80 18 8D */	li r4, 0x188d
/* 8017EDF8 0017BD38  38 A0 00 00 */	li r5, 0
/* 8017EDFC 0017BD3C  48 1B 98 35 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8017EE00 0017BD40  48 00 00 38 */	b .L_8017EE38
.L_8017EE04:
/* 8017EE04 0017BD44  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8017EE08 0017BD48  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 8017EE0C 0017BD4C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8017EE10 0017BD50  41 82 00 18 */	beq .L_8017EE28
/* 8017EE14 0017BD54  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8017EE18 0017BD58  38 80 18 8F */	li r4, 0x188f
/* 8017EE1C 0017BD5C  38 A0 00 00 */	li r5, 0
/* 8017EE20 0017BD60  48 1B 98 11 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8017EE24 0017BD64  48 00 00 14 */	b .L_8017EE38
.L_8017EE28:
/* 8017EE28 0017BD68  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8017EE2C 0017BD6C  38 80 18 8E */	li r4, 0x188e
/* 8017EE30 0017BD70  38 A0 00 00 */	li r5, 0
/* 8017EE34 0017BD74  48 1B 97 FD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8017EE38:
/* 8017EE38 0017BD78  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 8017EE3C 0017BD7C  28 00 00 00 */	cmplwi r0, 0
/* 8017EE40 0017BD80  40 82 00 24 */	bne .L_8017EE64
/* 8017EE44 0017BD84  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 8017EE48 0017BD88  38 80 08 A6 */	li r4, 0x8a6
/* 8017EE4C 0017BD8C  38 A0 00 00 */	li r5, 0
/* 8017EE50 0017BD90  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017EE54 0017BD94  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017EE58 0017BD98  7D 89 03 A6 */	mtctr r12
/* 8017EE5C 0017BD9C  4E 80 04 21 */	bctrl 
/* 8017EE60 0017BDA0  48 00 00 50 */	b .L_8017EEB0
.L_8017EE64:
/* 8017EE64 0017BDA4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8017EE68 0017BDA8  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 8017EE6C 0017BDAC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8017EE70 0017BDB0  41 82 00 24 */	beq .L_8017EE94
/* 8017EE74 0017BDB4  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 8017EE78 0017BDB8  38 80 08 A8 */	li r4, 0x8a8
/* 8017EE7C 0017BDBC  38 A0 00 00 */	li r5, 0
/* 8017EE80 0017BDC0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017EE84 0017BDC4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017EE88 0017BDC8  7D 89 03 A6 */	mtctr r12
/* 8017EE8C 0017BDCC  4E 80 04 21 */	bctrl 
/* 8017EE90 0017BDD0  48 00 00 20 */	b .L_8017EEB0
.L_8017EE94:
/* 8017EE94 0017BDD4  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 8017EE98 0017BDD8  38 80 08 A7 */	li r4, 0x8a7
/* 8017EE9C 0017BDDC  38 A0 00 00 */	li r5, 0
/* 8017EEA0 0017BDE0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017EEA4 0017BDE4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017EEA8 0017BDE8  7D 89 03 A6 */	mtctr r12
/* 8017EEAC 0017BDEC  4E 80 04 21 */	bctrl 
.L_8017EEB0:
/* 8017EEB0 0017BDF0  7F E3 FB 78 */	mr r3, r31
/* 8017EEB4 0017BDF4  4B FC 25 91 */	bl getStateID__Q24Game4NaviFv
/* 8017EEB8 0017BDF8  2C 03 00 01 */	cmpwi r3, 1
/* 8017EEBC 0017BDFC  40 82 00 44 */	bne .L_8017EF00
/* 8017EEC0 0017BE00  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 8017EEC4 0017BE04  38 00 00 00 */	li r0, 0
/* 8017EEC8 0017BE08  38 83 A3 00 */	addi r4, r3, __vt__Q24Game11Interaction@l
/* 8017EECC 0017BE0C  3C 60 80 4B */	lis r3, __vt__Q24Game11InteractFue@ha
/* 8017EED0 0017BE10  90 81 00 14 */	stw r4, 0x14(r1)
/* 8017EED4 0017BE14  38 A3 49 BC */	addi r5, r3, __vt__Q24Game11InteractFue@l
/* 8017EED8 0017BE18  7F C3 F3 78 */	mr r3, r30
/* 8017EEDC 0017BE1C  38 81 00 14 */	addi r4, r1, 0x14
/* 8017EEE0 0017BE20  93 E1 00 18 */	stw r31, 0x18(r1)
/* 8017EEE4 0017BE24  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8017EEE8 0017BE28  98 01 00 1C */	stb r0, 0x1c(r1)
/* 8017EEEC 0017BE2C  98 01 00 1D */	stb r0, 0x1d(r1)
/* 8017EEF0 0017BE30  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017EEF4 0017BE34  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8017EEF8 0017BE38  7D 89 03 A6 */	mtctr r12
/* 8017EEFC 0017BE3C  4E 80 04 21 */	bctrl 
.L_8017EF00:
/* 8017EF00 0017BE40  7F E3 FB 78 */	mr r3, r31
/* 8017EF04 0017BE44  4B FC 25 41 */	bl getStateID__Q24Game4NaviFv
/* 8017EF08 0017BE48  80 7F 02 74 */	lwz r3, 0x274(r31)
/* 8017EF0C 0017BE4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8017EF10 0017BE50  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8017EF14 0017BE54  7D 89 03 A6 */	mtctr r12
/* 8017EF18 0017BE58  4E 80 04 21 */	bctrl 
/* 8017EF1C 0017BE5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017EF20 0017BE60  41 82 00 24 */	beq .L_8017EF44
/* 8017EF24 0017BE64  80 7F 02 70 */	lwz r3, 0x270(r31)
/* 8017EF28 0017BE68  7F E4 FB 78 */	mr r4, r31
/* 8017EF2C 0017BE6C  38 A0 00 03 */	li r5, 3
/* 8017EF30 0017BE70  38 C0 00 00 */	li r6, 0
/* 8017EF34 0017BE74  81 83 00 00 */	lwz r12, 0(r3)
/* 8017EF38 0017BE78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017EF3C 0017BE7C  7D 89 03 A6 */	mtctr r12
/* 8017EF40 0017BE80  4E 80 04 21 */	bctrl 
.L_8017EF44:
/* 8017EF44 0017BE84  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017EF48 0017BE88  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8017EF4C 0017BE8C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8017EF50 0017BE90  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8017EF54 0017BE94  7C 08 03 A6 */	mtlr r0
/* 8017EF58 0017BE98  38 21 00 30 */	addi r1, r1, 0x30
/* 8017EF5C 0017BE9C  4E 80 00 20 */	blr 
.endfn exec__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn needYChangeMotion__Q24Game9NaviStateFv, weak
/* 8017EF60 0017BEA0  38 60 00 00 */	li r3, 0
/* 8017EF64 0017BEA4  4E 80 00 20 */	blr 
.endfn needYChangeMotion__Q24Game9NaviStateFv

.fn cleanup__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017EF68 0017BEA8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn collisionCallback__Q24Game13NaviWalkStateFPQ24Game4NaviRQ24Game9CollEvent, global
/* 8017EF6C 0017BEAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017EF70 0017BEB0  7C 08 02 A6 */	mflr r0
/* 8017EF74 0017BEB4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017EF78 0017BEB8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017EF7C 0017BEBC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017EF80 0017BEC0  7C 9E 23 78 */	mr r30, r4
/* 8017EF84 0017BEC4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017EF88 0017BEC8  7C 7D 1B 78 */	mr r29, r3
/* 8017EF8C 0017BECC  80 CD 9B 54 */	lwz r6, moviePlayer__4Game@sda21(r13)
/* 8017EF90 0017BED0  83 E5 00 00 */	lwz r31, 0(r5)
/* 8017EF94 0017BED4  80 06 00 18 */	lwz r0, 0x18(r6)
/* 8017EF98 0017BED8  2C 00 00 00 */	cmpwi r0, 0
/* 8017EF9C 0017BEDC  40 82 00 5C */	bne .L_8017EFF8
/* 8017EFA0 0017BEE0  A0 1F 01 28 */	lhz r0, 0x128(r31)
/* 8017EFA4 0017BEE4  28 00 04 06 */	cmplwi r0, 0x406
/* 8017EFA8 0017BEE8  40 82 00 50 */	bne .L_8017EFF8
/* 8017EFAC 0017BEEC  88 1F 01 E0 */	lbz r0, 0x1e0(r31)
/* 8017EFB0 0017BEF0  28 00 00 00 */	cmplwi r0, 0
/* 8017EFB4 0017BEF4  41 82 00 44 */	beq .L_8017EFF8
/* 8017EFB8 0017BEF8  7F E3 FB 78 */	mr r3, r31
/* 8017EFBC 0017BEFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017EFC0 0017BF00  81 8C 02 28 */	lwz r12, 0x228(r12)
/* 8017EFC4 0017BF04  7D 89 03 A6 */	mtctr r12
/* 8017EFC8 0017BF08  4E 80 04 21 */	bctrl 
/* 8017EFCC 0017BF0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017EFD0 0017BF10  41 82 00 28 */	beq .L_8017EFF8
/* 8017EFD4 0017BF14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017EFD8 0017BF18  7F C4 F3 78 */	mr r4, r30
/* 8017EFDC 0017BF1C  38 C1 00 0C */	addi r6, r1, 0xc
/* 8017EFE0 0017BF20  38 A0 00 0B */	li r5, 0xb
/* 8017EFE4 0017BF24  80 7E 02 70 */	lwz r3, 0x270(r30)
/* 8017EFE8 0017BF28  81 83 00 00 */	lwz r12, 0(r3)
/* 8017EFEC 0017BF2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017EFF0 0017BF30  7D 89 03 A6 */	mtctr r12
/* 8017EFF4 0017BF34  4E 80 04 21 */	bctrl 
.L_8017EFF8:
/* 8017EFF8 0017BF38  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8017EFFC 0017BF3C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8017F000 0017BF40  2C 00 00 00 */	cmpwi r0, 0
/* 8017F004 0017BF44  40 82 00 E4 */	bne .L_8017F0E8
/* 8017F008 0017BF48  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8017F00C 0017BF4C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8017F010 0017BF50  2C 00 00 01 */	cmpwi r0, 1
/* 8017F014 0017BF54  40 82 00 D4 */	bne .L_8017F0E8
/* 8017F018 0017BF58  7F E3 FB 78 */	mr r3, r31
/* 8017F01C 0017BF5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017F020 0017BF60  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F024 0017BF64  7D 89 03 A6 */	mtctr r12
/* 8017F028 0017BF68  4E 80 04 21 */	bctrl 
/* 8017F02C 0017BF6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017F030 0017BF70  41 82 00 B8 */	beq .L_8017F0E8
/* 8017F034 0017BF74  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 8017F038 0017BF78  28 00 00 00 */	cmplwi r0, 0
/* 8017F03C 0017BF7C  40 82 00 AC */	bne .L_8017F0E8
/* 8017F040 0017BF80  7F E3 FB 78 */	mr r3, r31
/* 8017F044 0017BF84  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017F048 0017BF88  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8017F04C 0017BF8C  7D 89 03 A6 */	mtctr r12
/* 8017F050 0017BF90  4E 80 04 21 */	bctrl 
/* 8017F054 0017BF94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017F058 0017BF98  41 82 00 90 */	beq .L_8017F0E8
/* 8017F05C 0017BF9C  7F E3 FB 78 */	mr r3, r31
/* 8017F060 0017BFA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017F064 0017BFA4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8017F068 0017BFA8  7D 89 03 A6 */	mtctr r12
/* 8017F06C 0017BFAC  4E 80 04 21 */	bctrl 
/* 8017F070 0017BFB0  2C 03 00 24 */	cmpwi r3, 0x24
/* 8017F074 0017BFB4  40 82 00 74 */	bne .L_8017F0E8
/* 8017F078 0017BFB8  80 7E 02 78 */	lwz r3, 0x278(r30)
/* 8017F07C 0017BFBC  28 03 00 00 */	cmplwi r3, 0
/* 8017F080 0017BFC0  41 82 00 68 */	beq .L_8017F0E8
/* 8017F084 0017BFC4  C0 03 00 48 */	lfs f0, 0x48(r3)
/* 8017F088 0017BFC8  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 8017F08C 0017BFCC  FC 40 00 50 */	fneg f2, f0
/* 8017F090 0017BFD0  C0 02 A8 A4 */	lfs f0, lbl_80518C04@sda21(r2)
/* 8017F094 0017BFD4  EC 21 00 72 */	fmuls f1, f1, f1
/* 8017F098 0017BFD8  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8017F09C 0017BFDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017F0A0 0017BFE0  40 81 00 48 */	ble .L_8017F0E8
/* 8017F0A4 0017BFE4  88 7D 00 2C */	lbz r3, 0x2c(r29)
/* 8017F0A8 0017BFE8  28 03 00 64 */	cmplwi r3, 0x64
/* 8017F0AC 0017BFEC  40 80 00 0C */	bge .L_8017F0B8
/* 8017F0B0 0017BFF0  38 03 00 03 */	addi r0, r3, 3
/* 8017F0B4 0017BFF4  98 1D 00 2C */	stb r0, 0x2c(r29)
.L_8017F0B8:
/* 8017F0B8 0017BFF8  88 1D 00 2C */	lbz r0, 0x2c(r29)
/* 8017F0BC 0017BFFC  28 00 00 3C */	cmplwi r0, 0x3c
/* 8017F0C0 0017C000  40 81 00 28 */	ble .L_8017F0E8
/* 8017F0C4 0017C004  93 E1 00 08 */	stw r31, 8(r1)
/* 8017F0C8 0017C008  7F A3 EB 78 */	mr r3, r29
/* 8017F0CC 0017C00C  7F C4 F3 78 */	mr r4, r30
/* 8017F0D0 0017C010  38 C1 00 08 */	addi r6, r1, 8
/* 8017F0D4 0017C014  81 9D 00 00 */	lwz r12, 0(r29)
/* 8017F0D8 0017C018  38 A0 00 18 */	li r5, 0x18
/* 8017F0DC 0017C01C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017F0E0 0017C020  7D 89 03 A6 */	mtctr r12
/* 8017F0E4 0017C024  4E 80 04 21 */	bctrl 
.L_8017F0E8:
/* 8017F0E8 0017C028  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017F0EC 0017C02C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017F0F0 0017C030  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017F0F4 0017C034  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017F0F8 0017C038  7C 08 03 A6 */	mtlr r0
/* 8017F0FC 0017C03C  38 21 00 20 */	addi r1, r1, 0x20
/* 8017F100 0017C040  4E 80 00 20 */	blr 
.endfn collisionCallback__Q24Game13NaviWalkStateFPQ24Game4NaviRQ24Game9CollEvent

.fn execAI__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017F104 0017C044  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017F108 0017C048  7C 08 02 A6 */	mflr r0
/* 8017F10C 0017C04C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017F110 0017C050  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017F114 0017C054  7C 9F 23 78 */	mr r31, r4
/* 8017F118 0017C058  93 C1 00 08 */	stw r30, 8(r1)
/* 8017F11C 0017C05C  7C 7E 1B 78 */	mr r30, r3
/* 8017F120 0017C060  88 03 00 10 */	lbz r0, 0x10(r3)
/* 8017F124 0017C064  2C 00 00 03 */	cmpwi r0, 3
/* 8017F128 0017C068  41 82 00 4C */	beq .L_8017F174
/* 8017F12C 0017C06C  40 80 00 14 */	bge .L_8017F140
/* 8017F130 0017C070  2C 00 00 01 */	cmpwi r0, 1
/* 8017F134 0017C074  41 82 00 18 */	beq .L_8017F14C
/* 8017F138 0017C078  40 80 00 28 */	bge .L_8017F160
/* 8017F13C 0017C07C  48 00 00 44 */	b .L_8017F180
.L_8017F140:
/* 8017F140 0017C080  2C 00 00 05 */	cmpwi r0, 5
/* 8017F144 0017C084  40 80 00 3C */	bge .L_8017F180
/* 8017F148 0017C088  48 00 00 34 */	b .L_8017F17C
.L_8017F14C:
/* 8017F14C 0017C08C  48 00 04 05 */	bl execAI_wait__Q24Game13NaviWalkStateFPQ24Game4Navi
/* 8017F150 0017C090  7F C3 F3 78 */	mr r3, r30
/* 8017F154 0017C094  7F E4 FB 78 */	mr r4, r31
/* 8017F158 0017C098  48 00 00 41 */	bl checkAI__Q24Game13NaviWalkStateFPQ24Game4Navi
/* 8017F15C 0017C09C  48 00 00 24 */	b .L_8017F180
.L_8017F160:
/* 8017F160 0017C0A0  48 00 08 21 */	bl execAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi
/* 8017F164 0017C0A4  7F C3 F3 78 */	mr r3, r30
/* 8017F168 0017C0A8  7F E4 FB 78 */	mr r4, r31
/* 8017F16C 0017C0AC  48 00 00 2D */	bl checkAI__Q24Game13NaviWalkStateFPQ24Game4Navi
/* 8017F170 0017C0B0  48 00 00 10 */	b .L_8017F180
.L_8017F174:
/* 8017F174 0017C0B4  48 00 0B 59 */	bl execAI_escape__Q24Game13NaviWalkStateFPQ24Game4Navi
/* 8017F178 0017C0B8  48 00 00 08 */	b .L_8017F180
.L_8017F17C:
/* 8017F17C 0017C0BC  48 00 08 85 */	bl execAI_attack__Q24Game13NaviWalkStateFPQ24Game4Navi
.L_8017F180:
/* 8017F180 0017C0C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017F184 0017C0C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017F188 0017C0C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8017F18C 0017C0CC  7C 08 03 A6 */	mtlr r0
/* 8017F190 0017C0D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017F194 0017C0D4  4E 80 00 20 */	blr 
.endfn execAI__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn checkAI__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017F198 0017C0D8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8017F19C 0017C0DC  7C 08 02 A6 */	mflr r0
/* 8017F1A0 0017C0E0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8017F1A4 0017C0E4  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8017F1A8 0017C0E8  93 C1 00 98 */	stw r30, 0x98(r1)
/* 8017F1AC 0017C0EC  93 A1 00 94 */	stw r29, 0x94(r1)
/* 8017F1B0 0017C0F0  7C 9D 23 78 */	mr r29, r4
/* 8017F1B4 0017C0F4  93 81 00 90 */	stw r28, 0x90(r1)
/* 8017F1B8 0017C0F8  7C 7C 1B 78 */	mr r28, r3
/* 8017F1BC 0017C0FC  80 04 02 78 */	lwz r0, 0x278(r4)
/* 8017F1C0 0017C100  28 00 00 00 */	cmplwi r0, 0
/* 8017F1C4 0017C104  41 82 00 0C */	beq .L_8017F1D0
/* 8017F1C8 0017C108  38 60 00 00 */	li r3, 0
/* 8017F1CC 0017C10C  48 00 01 E8 */	b .L_8017F3B4
.L_8017F1D0:
/* 8017F1D0 0017C110  81 84 00 00 */	lwz r12, 0(r4)
/* 8017F1D4 0017C114  38 61 00 08 */	addi r3, r1, 8
/* 8017F1D8 0017C118  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017F1DC 0017C11C  7D 89 03 A6 */	mtctr r12
/* 8017F1E0 0017C120  4E 80 04 21 */	bctrl 
/* 8017F1E4 0017C124  C0 61 00 08 */	lfs f3, 8(r1)
/* 8017F1E8 0017C128  38 61 00 24 */	addi r3, r1, 0x24
/* 8017F1EC 0017C12C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8017F1F0 0017C130  38 81 00 14 */	addi r4, r1, 0x14
/* 8017F1F4 0017C134  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8017F1F8 0017C138  3B E0 00 00 */	li r31, 0
/* 8017F1FC 0017C13C  C0 02 A8 B4 */	lfs f0, lbl_80518C14@sda21(r2)
/* 8017F200 0017C140  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8017F204 0017C144  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8017F208 0017C148  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8017F20C 0017C14C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8017F210 0017C150  48 0A F1 91 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 8017F214 0017C154  38 61 00 44 */	addi r3, r1, 0x44
/* 8017F218 0017C158  38 81 00 24 */	addi r4, r1, 0x24
/* 8017F21C 0017C15C  48 0A F1 C5 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 8017F220 0017C160  38 61 00 44 */	addi r3, r1, 0x44
/* 8017F224 0017C164  48 0A F2 39 */	bl first__Q24Game12CellIteratorFv
/* 8017F228 0017C168  48 00 00 AC */	b .L_8017F2D4
.L_8017F22C:
/* 8017F22C 0017C16C  38 61 00 44 */	addi r3, r1, 0x44
/* 8017F230 0017C170  48 0A F3 15 */	bl __ml__Q24Game12CellIteratorFv
/* 8017F234 0017C174  81 83 00 00 */	lwz r12, 0(r3)
/* 8017F238 0017C178  7C 7E 1B 78 */	mr r30, r3
/* 8017F23C 0017C17C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8017F240 0017C180  7D 89 03 A6 */	mtctr r12
/* 8017F244 0017C184  4E 80 04 21 */	bctrl 
/* 8017F248 0017C188  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017F24C 0017C18C  41 82 00 50 */	beq .L_8017F29C
/* 8017F250 0017C190  7F C3 F3 78 */	mr r3, r30
/* 8017F254 0017C194  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017F258 0017C198  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F25C 0017C19C  7D 89 03 A6 */	mtctr r12
/* 8017F260 0017C1A0  4E 80 04 21 */	bctrl 
/* 8017F264 0017C1A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017F268 0017C1A8  41 82 00 34 */	beq .L_8017F29C
/* 8017F26C 0017C1AC  7F C3 F3 78 */	mr r3, r30
/* 8017F270 0017C1B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017F274 0017C1B4  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8017F278 0017C1B8  7D 89 03 A6 */	mtctr r12
/* 8017F27C 0017C1BC  4E 80 04 21 */	bctrl 
/* 8017F280 0017C1C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017F284 0017C1C4  41 82 00 18 */	beq .L_8017F29C
/* 8017F288 0017C1C8  88 1E 01 F0 */	lbz r0, 0x1f0(r30)
/* 8017F28C 0017C1CC  28 00 00 00 */	cmplwi r0, 0
/* 8017F290 0017C1D0  41 82 00 0C */	beq .L_8017F29C
/* 8017F294 0017C1D4  7F DF F3 78 */	mr r31, r30
/* 8017F298 0017C1D8  48 00 00 4C */	b .L_8017F2E4
.L_8017F29C:
/* 8017F29C 0017C1DC  28 1F 00 00 */	cmplwi r31, 0
/* 8017F2A0 0017C1E0  40 82 00 2C */	bne .L_8017F2CC
/* 8017F2A4 0017C1E4  7C 1E E8 40 */	cmplw r30, r29
/* 8017F2A8 0017C1E8  41 82 00 24 */	beq .L_8017F2CC
/* 8017F2AC 0017C1EC  7F C3 F3 78 */	mr r3, r30
/* 8017F2B0 0017C1F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017F2B4 0017C1F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017F2B8 0017C1F8  7D 89 03 A6 */	mtctr r12
/* 8017F2BC 0017C1FC  4E 80 04 21 */	bctrl 
/* 8017F2C0 0017C200  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017F2C4 0017C204  41 82 00 08 */	beq .L_8017F2CC
/* 8017F2C8 0017C208  7F DF F3 78 */	mr r31, r30
.L_8017F2CC:
/* 8017F2CC 0017C20C  38 61 00 44 */	addi r3, r1, 0x44
/* 8017F2D0 0017C210  48 0A F2 31 */	bl next__Q24Game12CellIteratorFv
.L_8017F2D4:
/* 8017F2D4 0017C214  38 61 00 44 */	addi r3, r1, 0x44
/* 8017F2D8 0017C218  48 0A F2 5D */	bl isDone__Q24Game12CellIteratorFv
/* 8017F2DC 0017C21C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017F2E0 0017C220  41 82 FF 4C */	beq .L_8017F22C
.L_8017F2E4:
/* 8017F2E4 0017C224  28 1F 00 00 */	cmplwi r31, 0
/* 8017F2E8 0017C228  41 82 00 98 */	beq .L_8017F380
/* 8017F2EC 0017C22C  7F E3 FB 78 */	mr r3, r31
/* 8017F2F0 0017C230  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017F2F4 0017C234  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F2F8 0017C238  7D 89 03 A6 */	mtctr r12
/* 8017F2FC 0017C23C  4E 80 04 21 */	bctrl 
/* 8017F300 0017C240  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017F304 0017C244  41 82 00 7C */	beq .L_8017F380
/* 8017F308 0017C248  93 FC 00 18 */	stw r31, 0x18(r28)
/* 8017F30C 0017C24C  7F E3 FB 78 */	mr r3, r31
/* 8017F310 0017C250  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017F314 0017C254  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8017F318 0017C258  7D 89 03 A6 */	mtctr r12
/* 8017F31C 0017C25C  4E 80 04 21 */	bctrl 
/* 8017F320 0017C260  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8017F324 0017C264  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 8017F328 0017C268  4B FA 3F 51 */	bl getEnemyInfo__Q24Game13EnemyInfoFuncFii
/* 8017F32C 0017C26C  88 03 00 30 */	lbz r0, 0x30(r3)
/* 8017F330 0017C270  7C 00 07 74 */	extsb r0, r0
/* 8017F334 0017C274  2C 00 00 01 */	cmpwi r0, 1
/* 8017F338 0017C278  41 82 00 24 */	beq .L_8017F35C
/* 8017F33C 0017C27C  40 80 00 30 */	bge .L_8017F36C
/* 8017F340 0017C280  2C 00 00 00 */	cmpwi r0, 0
/* 8017F344 0017C284  40 80 00 08 */	bge .L_8017F34C
/* 8017F348 0017C288  48 00 00 24 */	b .L_8017F36C
.L_8017F34C:
/* 8017F34C 0017C28C  7F 83 E3 78 */	mr r3, r28
/* 8017F350 0017C290  7F A4 EB 78 */	mr r4, r29
/* 8017F354 0017C294  48 00 01 B5 */	bl initAI_wait__Q24Game13NaviWalkStateFPQ24Game4Navi
/* 8017F358 0017C298  48 00 00 20 */	b .L_8017F378
.L_8017F35C:
/* 8017F35C 0017C29C  7F 83 E3 78 */	mr r3, r28
/* 8017F360 0017C2A0  7F A4 EB 78 */	mr r4, r29
/* 8017F364 0017C2A4  48 00 08 DD */	bl initAI_escape__Q24Game13NaviWalkStateFPQ24Game4Navi
/* 8017F368 0017C2A8  48 00 00 10 */	b .L_8017F378
.L_8017F36C:
/* 8017F36C 0017C2AC  7F 83 E3 78 */	mr r3, r28
/* 8017F370 0017C2B0  7F A4 EB 78 */	mr r4, r29
/* 8017F374 0017C2B4  48 00 08 CD */	bl initAI_escape__Q24Game13NaviWalkStateFPQ24Game4Navi
.L_8017F378:
/* 8017F378 0017C2B8  38 60 00 01 */	li r3, 1
/* 8017F37C 0017C2BC  48 00 00 38 */	b .L_8017F3B4
.L_8017F380:
/* 8017F380 0017C2C0  28 1F 00 00 */	cmplwi r31, 0
/* 8017F384 0017C2C4  41 82 00 2C */	beq .L_8017F3B0
/* 8017F388 0017C2C8  7F E3 FB 78 */	mr r3, r31
/* 8017F38C 0017C2CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017F390 0017C2D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017F394 0017C2D4  7D 89 03 A6 */	mtctr r12
/* 8017F398 0017C2D8  4E 80 04 21 */	bctrl 
/* 8017F39C 0017C2DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017F3A0 0017C2E0  41 82 00 10 */	beq .L_8017F3B0
/* 8017F3A4 0017C2E4  93 FC 00 18 */	stw r31, 0x18(r28)
/* 8017F3A8 0017C2E8  38 60 00 01 */	li r3, 1
/* 8017F3AC 0017C2EC  48 00 00 08 */	b .L_8017F3B4
.L_8017F3B0:
/* 8017F3B0 0017C2F0  38 60 00 00 */	li r3, 0
.L_8017F3B4:
/* 8017F3B4 0017C2F4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8017F3B8 0017C2F8  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8017F3BC 0017C2FC  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8017F3C0 0017C300  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 8017F3C4 0017C304  83 81 00 90 */	lwz r28, 0x90(r1)
/* 8017F3C8 0017C308  7C 08 03 A6 */	mtlr r0
/* 8017F3CC 0017C30C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8017F3D0 0017C310  4E 80 00 20 */	blr 
.endfn checkAI__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game13NaviWalkStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 8017F3D4 0017C314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017F3D8 0017C318  7C 08 02 A6 */	mflr r0
/* 8017F3DC 0017C31C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017F3E0 0017C320  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017F3E4 0017C324  7C BF 2B 78 */	mr r31, r5
/* 8017F3E8 0017C328  93 C1 00 08 */	stw r30, 8(r1)
/* 8017F3EC 0017C32C  7C 9E 23 78 */	mr r30, r4
/* 8017F3F0 0017C330  88 C3 00 10 */	lbz r6, 0x10(r3)
/* 8017F3F4 0017C334  28 06 00 00 */	cmplwi r6, 0
/* 8017F3F8 0017C338  41 82 00 1C */	beq .L_8017F414
/* 8017F3FC 0017C33C  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8017F400 0017C340  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8017F404 0017C344  40 82 00 10 */	bne .L_8017F414
/* 8017F408 0017C348  28 06 00 02 */	cmplwi r6, 2
/* 8017F40C 0017C34C  40 82 00 08 */	bne .L_8017F414
/* 8017F410 0017C350  48 00 00 F9 */	bl initAI_wait__Q24Game13NaviWalkStateFPQ24Game4Navi
.L_8017F414:
/* 8017F414 0017C354  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8017F418 0017C358  28 03 00 00 */	cmplwi r3, 0
/* 8017F41C 0017C35C  41 82 00 10 */	beq .L_8017F42C
/* 8017F420 0017C360  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 8017F424 0017C364  28 00 00 00 */	cmplwi r0, 0
/* 8017F428 0017C368  40 82 00 94 */	bne .L_8017F4BC
.L_8017F42C:
/* 8017F42C 0017C36C  A8 1F 00 20 */	lha r0, 0x20(r31)
/* 8017F430 0017C370  2C 00 00 32 */	cmpwi r0, 0x32
/* 8017F434 0017C374  40 82 00 88 */	bne .L_8017F4BC
/* 8017F438 0017C378  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8017F43C 0017C37C  28 00 00 C8 */	cmplwi r0, 0xc8
/* 8017F440 0017C380  40 82 00 7C */	bne .L_8017F4BC
/* 8017F444 0017C384  A0 1E 02 DC */	lhz r0, 0x2dc(r30)
/* 8017F448 0017C388  28 00 00 00 */	cmplwi r0, 0
/* 8017F44C 0017C38C  40 82 00 24 */	bne .L_8017F470
/* 8017F450 0017C390  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 8017F454 0017C394  38 80 08 77 */	li r4, 0x877
/* 8017F458 0017C398  38 A0 00 00 */	li r5, 0
/* 8017F45C 0017C39C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017F460 0017C3A0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F464 0017C3A4  7D 89 03 A6 */	mtctr r12
/* 8017F468 0017C3A8  4E 80 04 21 */	bctrl 
/* 8017F46C 0017C3AC  48 00 00 50 */	b .L_8017F4BC
.L_8017F470:
/* 8017F470 0017C3B0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8017F474 0017C3B4  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 8017F478 0017C3B8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8017F47C 0017C3BC  41 82 00 24 */	beq .L_8017F4A0
/* 8017F480 0017C3C0  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 8017F484 0017C3C4  38 80 08 79 */	li r4, 0x879
/* 8017F488 0017C3C8  38 A0 00 00 */	li r5, 0
/* 8017F48C 0017C3CC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017F490 0017C3D0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F494 0017C3D4  7D 89 03 A6 */	mtctr r12
/* 8017F498 0017C3D8  4E 80 04 21 */	bctrl 
/* 8017F49C 0017C3DC  48 00 00 20 */	b .L_8017F4BC
.L_8017F4A0:
/* 8017F4A0 0017C3E0  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 8017F4A4 0017C3E4  38 80 08 78 */	li r4, 0x878
/* 8017F4A8 0017C3E8  38 A0 00 00 */	li r5, 0
/* 8017F4AC 0017C3EC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017F4B0 0017C3F0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F4B4 0017C3F4  7D 89 03 A6 */	mtctr r12
/* 8017F4B8 0017C3F8  4E 80 04 21 */	bctrl 
.L_8017F4BC:
/* 8017F4BC 0017C3FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017F4C0 0017C400  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017F4C4 0017C404  83 C1 00 08 */	lwz r30, 8(r1)
/* 8017F4C8 0017C408  7C 08 03 A6 */	mtlr r0
/* 8017F4CC 0017C40C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017F4D0 0017C410  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game13NaviWalkStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn "wallCallback__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>", global
/* 8017F4D4 0017C414  88 03 00 10 */	lbz r0, 0x10(r3)
/* 8017F4D8 0017C418  28 00 00 03 */	cmplwi r0, 3
/* 8017F4DC 0017C41C  4C 82 00 20 */	bnelr 
/* 8017F4E0 0017C420  88 03 00 29 */	lbz r0, 0x29(r3)
/* 8017F4E4 0017C424  28 00 00 00 */	cmplwi r0, 0
/* 8017F4E8 0017C428  4C 82 00 20 */	bnelr 
/* 8017F4EC 0017C42C  88 83 00 28 */	lbz r4, 0x28(r3)
/* 8017F4F0 0017C430  38 00 00 0A */	li r0, 0xa
/* 8017F4F4 0017C434  7C 84 00 34 */	cntlzw r4, r4
/* 8017F4F8 0017C438  54 84 D9 7E */	srwi r4, r4, 5
/* 8017F4FC 0017C43C  98 83 00 28 */	stb r4, 0x28(r3)
/* 8017F500 0017C440  98 03 00 29 */	stb r0, 0x29(r3)
/* 8017F504 0017C444  4E 80 00 20 */	blr 
.endfn "wallCallback__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"

.fn initAI_wait__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017F508 0017C448  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017F50C 0017C44C  7C 08 02 A6 */	mflr r0
/* 8017F510 0017C450  38 A0 00 01 */	li r5, 1
/* 8017F514 0017C454  38 C0 00 00 */	li r6, 0
/* 8017F518 0017C458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017F51C 0017C45C  38 00 00 01 */	li r0, 1
/* 8017F520 0017C460  38 E0 00 00 */	li r7, 0
/* 8017F524 0017C464  98 03 00 10 */	stb r0, 0x10(r3)
/* 8017F528 0017C468  7C 83 23 78 */	mr r3, r4
/* 8017F52C 0017C46C  38 80 00 01 */	li r4, 1
/* 8017F530 0017C470  81 83 00 00 */	lwz r12, 0(r3)
/* 8017F534 0017C474  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8017F538 0017C478  7D 89 03 A6 */	mtctr r12
/* 8017F53C 0017C47C  4E 80 04 21 */	bctrl 
/* 8017F540 0017C480  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017F544 0017C484  7C 08 03 A6 */	mtlr r0
/* 8017F548 0017C488  38 21 00 10 */	addi r1, r1, 0x10
/* 8017F54C 0017C48C  4E 80 00 20 */	blr 
.endfn initAI_wait__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn execAI_wait__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017F550 0017C490  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8017F554 0017C494  7C 08 02 A6 */	mflr r0
/* 8017F558 0017C498  90 01 00 54 */	stw r0, 0x54(r1)
/* 8017F55C 0017C49C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8017F560 0017C4A0  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8017F564 0017C4A4  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8017F568 0017C4A8  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8017F56C 0017C4AC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8017F570 0017C4B0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8017F574 0017C4B4  3C A0 80 51 */	lis r5, "zero__10Vector3<f>"@ha
/* 8017F578 0017C4B8  7C 7E 1B 78 */	mr r30, r3
/* 8017F57C 0017C4BC  38 A5 41 E4 */	addi r5, r5, "zero__10Vector3<f>"@l
/* 8017F580 0017C4C0  7C 9F 23 78 */	mr r31, r4
/* 8017F584 0017C4C4  48 00 09 FD */	bl "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"
/* 8017F588 0017C4C8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8017F58C 0017C4CC  C0 5E 00 14 */	lfs f2, 0x14(r30)
/* 8017F590 0017C4D0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8017F594 0017C4D4  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017F598 0017C4D8  EC 22 08 28 */	fsubs f1, f2, f1
/* 8017F59C 0017C4DC  D0 3E 00 14 */	stfs f1, 0x14(r30)
/* 8017F5A0 0017C4E0  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8017F5A4 0017C4E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017F5A8 0017C4E8  4C 40 13 82 */	cror 2, 0, 2
/* 8017F5AC 0017C4EC  40 82 00 48 */	bne .L_8017F5F4
/* 8017F5B0 0017C4F0  7F C3 F3 78 */	mr r3, r30
/* 8017F5B4 0017C4F4  7F E4 FB 78 */	mr r4, r31
/* 8017F5B8 0017C4F8  48 00 01 5D */	bl initAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi
/* 8017F5BC 0017C4FC  4B F4 9F E5 */	bl rand
/* 8017F5C0 0017C500  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8017F5C4 0017C504  3C 00 43 30 */	lis r0, 0x4330
/* 8017F5C8 0017C508  90 61 00 24 */	stw r3, 0x24(r1)
/* 8017F5CC 0017C50C  C8 62 A8 D0 */	lfd f3, lbl_80518C30@sda21(r2)
/* 8017F5D0 0017C510  90 01 00 20 */	stw r0, 0x20(r1)
/* 8017F5D4 0017C514  C0 22 A8 A8 */	lfs f1, lbl_80518C08@sda21(r2)
/* 8017F5D8 0017C518  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 8017F5DC 0017C51C  C0 02 A8 DC */	lfs f0, lbl_80518C3C@sda21(r2)
/* 8017F5E0 0017C520  EC 42 18 28 */	fsubs f2, f2, f3
/* 8017F5E4 0017C524  EC 22 08 24 */	fdivs f1, f2, f1
/* 8017F5E8 0017C528  EC 00 08 2A */	fadds f0, f0, f1
/* 8017F5EC 0017C52C  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8017F5F0 0017C530  48 00 00 FC */	b .L_8017F6EC
.L_8017F5F4:
/* 8017F5F4 0017C534  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8017F5F8 0017C538  28 00 00 00 */	cmplwi r0, 0
/* 8017F5FC 0017C53C  41 82 00 F0 */	beq .L_8017F6EC
/* 8017F600 0017C540  7F E4 FB 78 */	mr r4, r31
/* 8017F604 0017C544  38 61 00 14 */	addi r3, r1, 0x14
/* 8017F608 0017C548  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017F60C 0017C54C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017F610 0017C550  7D 89 03 A6 */	mtctr r12
/* 8017F614 0017C554  4E 80 04 21 */	bctrl 
/* 8017F618 0017C558  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 8017F61C 0017C55C  38 61 00 08 */	addi r3, r1, 8
/* 8017F620 0017C560  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 8017F624 0017C564  81 84 00 00 */	lwz r12, 0(r4)
/* 8017F628 0017C568  C3 C1 00 1C */	lfs f30, 0x1c(r1)
/* 8017F62C 0017C56C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017F630 0017C570  7D 89 03 A6 */	mtctr r12
/* 8017F634 0017C574  4E 80 04 21 */	bctrl 
/* 8017F638 0017C578  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8017F63C 0017C57C  C0 81 00 08 */	lfs f4, 8(r1)
/* 8017F640 0017C580  EC 3E 10 28 */	fsubs f1, f30, f2
/* 8017F644 0017C584  C0 02 A8 E4 */	lfs f0, lbl_80518C44@sda21(r2)
/* 8017F648 0017C588  EC 7F 20 28 */	fsubs f3, f31, f4
/* 8017F64C 0017C58C  EC 21 00 72 */	fmuls f1, f1, f1
/* 8017F650 0017C590  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8017F654 0017C594  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017F658 0017C598  40 81 00 10 */	ble .L_8017F668
/* 8017F65C 0017C59C  38 00 00 00 */	li r0, 0
/* 8017F660 0017C5A0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8017F664 0017C5A4  48 00 00 88 */	b .L_8017F6EC
.L_8017F668:
/* 8017F668 0017C5A8  EC 42 F0 28 */	fsubs f2, f2, f30
/* 8017F66C 0017C5AC  C0 62 A8 80 */	lfs f3, lbl_80518BE0@sda21(r2)
/* 8017F670 0017C5B0  EC 24 F8 28 */	fsubs f1, f4, f31
/* 8017F674 0017C5B4  EC 82 00 B2 */	fmuls f4, f2, f2
/* 8017F678 0017C5B8  EC 01 18 7A */	fmadds f0, f1, f1, f3
/* 8017F67C 0017C5BC  EC 84 00 2A */	fadds f4, f4, f0
/* 8017F680 0017C5C0  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 8017F684 0017C5C4  40 81 00 14 */	ble .L_8017F698
/* 8017F688 0017C5C8  40 81 00 14 */	ble .L_8017F69C
/* 8017F68C 0017C5CC  FC 00 20 34 */	frsqrte f0, f4
/* 8017F690 0017C5D0  EC 80 01 32 */	fmuls f4, f0, f4
/* 8017F694 0017C5D4  48 00 00 08 */	b .L_8017F69C
.L_8017F698:
/* 8017F698 0017C5D8  FC 80 18 90 */	fmr f4, f3
.L_8017F69C:
/* 8017F69C 0017C5DC  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017F6A0 0017C5E0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8017F6A4 0017C5E4  40 81 00 14 */	ble .L_8017F6B8
/* 8017F6A8 0017C5E8  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 8017F6AC 0017C5EC  EC 00 20 24 */	fdivs f0, f0, f4
/* 8017F6B0 0017C5F0  EC 21 00 32 */	fmuls f1, f1, f0
/* 8017F6B4 0017C5F4  EC 42 00 32 */	fmuls f2, f2, f0
.L_8017F6B8:
/* 8017F6B8 0017C5F8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8017F6BC 0017C5FC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8017F6C0 0017C600  4B EB 5A 49 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8017F6C4 0017C604  48 29 25 0D */	bl roundAng__Ff
/* 8017F6C8 0017C608  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 8017F6CC 0017C60C  48 29 25 31 */	bl angDist__Fff
/* 8017F6D0 0017C610  C0 42 A8 C8 */	lfs f2, lbl_80518C28@sda21(r2)
/* 8017F6D4 0017C614  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8017F6D8 0017C618  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8017F6DC 0017C61C  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 8017F6E0 0017C620  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8017F6E4 0017C624  48 29 24 ED */	bl roundAng__Ff
/* 8017F6E8 0017C628  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
.L_8017F6EC:
/* 8017F6EC 0017C62C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8017F6F0 0017C630  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8017F6F4 0017C634  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8017F6F8 0017C638  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8017F6FC 0017C63C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8017F700 0017C640  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8017F704 0017C644  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8017F708 0017C648  7C 08 03 A6 */	mtlr r0
/* 8017F70C 0017C64C  38 21 00 50 */	addi r1, r1, 0x50
/* 8017F710 0017C650  4E 80 00 20 */	blr 
.endfn execAI_wait__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn initAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017F714 0017C654  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8017F718 0017C658  7C 08 02 A6 */	mflr r0
/* 8017F71C 0017C65C  3C A0 80 48 */	lis r5, lbl_8047EAE0@ha
/* 8017F720 0017C660  90 01 00 74 */	stw r0, 0x74(r1)
/* 8017F724 0017C664  38 00 00 02 */	li r0, 2
/* 8017F728 0017C668  BE E1 00 4C */	stmw r23, 0x4c(r1)
/* 8017F72C 0017C66C  7C 7D 1B 78 */	mr r29, r3
/* 8017F730 0017C670  3C 60 80 48 */	lis r3, lbl_8047EB00@ha
/* 8017F734 0017C674  7C 9E 23 78 */	mr r30, r4
/* 8017F738 0017C678  39 43 EB 00 */	addi r10, r3, lbl_8047EB00@l
/* 8017F73C 0017C67C  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8017F740 0017C680  3B E3 2D 40 */	addi r31, r3, govNAN___Q24Game5P2JST@l
/* 8017F744 0017C684  98 1D 00 10 */	stb r0, 0x10(r29)
/* 8017F748 0017C688  86 E5 EA E0 */	lwzu r23, lbl_8047EAE0@l(r5)
/* 8017F74C 0017C68C  81 2A 00 00 */	lwz r9, 0(r10)
/* 8017F750 0017C690  83 05 00 04 */	lwz r24, 4(r5)
/* 8017F754 0017C694  83 25 00 08 */	lwz r25, 8(r5)
/* 8017F758 0017C698  83 45 00 0C */	lwz r26, 0xc(r5)
/* 8017F75C 0017C69C  83 65 00 10 */	lwz r27, 0x10(r5)
/* 8017F760 0017C6A0  83 85 00 14 */	lwz r28, 0x14(r5)
/* 8017F764 0017C6A4  81 85 00 18 */	lwz r12, 0x18(r5)
/* 8017F768 0017C6A8  81 65 00 1C */	lwz r11, 0x1c(r5)
/* 8017F76C 0017C6AC  81 0A 00 04 */	lwz r8, 4(r10)
/* 8017F770 0017C6B0  80 EA 00 08 */	lwz r7, 8(r10)
/* 8017F774 0017C6B4  80 CA 00 0C */	lwz r6, 0xc(r10)
/* 8017F778 0017C6B8  80 AA 00 10 */	lwz r5, 0x10(r10)
/* 8017F77C 0017C6BC  80 8A 00 14 */	lwz r4, 0x14(r10)
/* 8017F780 0017C6C0  80 6A 00 18 */	lwz r3, 0x18(r10)
/* 8017F784 0017C6C4  80 0A 00 1C */	lwz r0, 0x1c(r10)
/* 8017F788 0017C6C8  92 E1 00 28 */	stw r23, 0x28(r1)
/* 8017F78C 0017C6CC  93 01 00 2C */	stw r24, 0x2c(r1)
/* 8017F790 0017C6D0  93 21 00 30 */	stw r25, 0x30(r1)
/* 8017F794 0017C6D4  93 41 00 34 */	stw r26, 0x34(r1)
/* 8017F798 0017C6D8  93 61 00 38 */	stw r27, 0x38(r1)
/* 8017F79C 0017C6DC  93 81 00 3C */	stw r28, 0x3c(r1)
/* 8017F7A0 0017C6E0  91 81 00 40 */	stw r12, 0x40(r1)
/* 8017F7A4 0017C6E4  91 61 00 44 */	stw r11, 0x44(r1)
/* 8017F7A8 0017C6E8  91 21 00 08 */	stw r9, 8(r1)
/* 8017F7AC 0017C6EC  91 01 00 0C */	stw r8, 0xc(r1)
/* 8017F7B0 0017C6F0  90 E1 00 10 */	stw r7, 0x10(r1)
/* 8017F7B4 0017C6F4  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8017F7B8 0017C6F8  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8017F7BC 0017C6FC  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8017F7C0 0017C700  90 61 00 20 */	stw r3, 0x20(r1)
/* 8017F7C4 0017C704  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017F7C8 0017C708  80 1E 02 78 */	lwz r0, 0x278(r30)
/* 8017F7CC 0017C70C  28 00 00 00 */	cmplwi r0, 0
/* 8017F7D0 0017C710  41 82 00 14 */	beq .L_8017F7E4
/* 8017F7D4 0017C714  38 61 00 08 */	addi r3, r1, 8
/* 8017F7D8 0017C718  38 80 00 04 */	li r4, 4
/* 8017F7DC 0017C71C  48 07 80 ED */	bl getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
/* 8017F7E0 0017C720  48 00 00 10 */	b .L_8017F7F0
.L_8017F7E4:
/* 8017F7E4 0017C724  38 61 00 28 */	addi r3, r1, 0x28
/* 8017F7E8 0017C728  38 80 00 04 */	li r4, 4
/* 8017F7EC 0017C72C  48 07 80 DD */	bl getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
.L_8017F7F0:
/* 8017F7F0 0017C730  28 1E 00 00 */	cmplwi r30, 0
/* 8017F7F4 0017C734  98 7D 00 2A */	stb r3, 0x2a(r29)
/* 8017F7F8 0017C738  7C 77 1B 78 */	mr r23, r3
/* 8017F7FC 0017C73C  7F C6 F3 78 */	mr r6, r30
/* 8017F800 0017C740  41 82 00 08 */	beq .L_8017F808
/* 8017F804 0017C744  38 DE 01 78 */	addi r6, r30, 0x178
.L_8017F808:
/* 8017F808 0017C748  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017F80C 0017C74C  7F C3 F3 78 */	mr r3, r30
/* 8017F810 0017C750  7E E4 BB 78 */	mr r4, r23
/* 8017F814 0017C754  7E E5 BB 78 */	mr r5, r23
/* 8017F818 0017C758  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8017F81C 0017C75C  38 E0 00 00 */	li r7, 0
/* 8017F820 0017C760  7D 89 03 A6 */	mtctr r12
/* 8017F824 0017C764  4E 80 04 21 */	bctrl 
/* 8017F828 0017C768  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8017F82C 0017C76C  28 03 00 00 */	cmplwi r3, 0
/* 8017F830 0017C770  41 82 00 10 */	beq .L_8017F840
/* 8017F834 0017C774  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 8017F838 0017C778  28 00 00 00 */	cmplwi r0, 0
/* 8017F83C 0017C77C  40 82 01 30 */	bne .L_8017F96C
.L_8017F840:
/* 8017F840 0017C780  A0 9E 02 DC */	lhz r4, 0x2dc(r30)
/* 8017F844 0017C784  2C 04 00 01 */	cmpwi r4, 1
/* 8017F848 0017C788  40 82 00 24 */	bne .L_8017F86C
/* 8017F84C 0017C78C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8017F850 0017C790  2C 00 00 00 */	cmpwi r0, 0
/* 8017F854 0017C794  40 82 00 18 */	bne .L_8017F86C
/* 8017F858 0017C798  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8017F85C 0017C79C  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 8017F860 0017C7A0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8017F864 0017C7A4  41 82 00 08 */	beq .L_8017F86C
/* 8017F868 0017C7A8  38 84 00 01 */	addi r4, r4, 1
.L_8017F86C:
/* 8017F86C 0017C7AC  2C 17 00 0D */	cmpwi r23, 0xd
/* 8017F870 0017C7B0  41 82 00 D8 */	beq .L_8017F948
/* 8017F874 0017C7B4  40 80 00 1C */	bge .L_8017F890
/* 8017F878 0017C7B8  2C 17 00 0B */	cmpwi r23, 0xb
/* 8017F87C 0017C7BC  41 82 00 2C */	beq .L_8017F8A8
/* 8017F880 0017C7C0  40 80 00 EC */	bge .L_8017F96C
/* 8017F884 0017C7C4  2C 17 00 00 */	cmpwi r23, 0
/* 8017F888 0017C7C8  41 82 00 48 */	beq .L_8017F8D0
/* 8017F88C 0017C7CC  48 00 00 E0 */	b .L_8017F96C
.L_8017F890:
/* 8017F890 0017C7D0  2C 17 00 36 */	cmpwi r23, 0x36
/* 8017F894 0017C7D4  41 82 00 8C */	beq .L_8017F920
/* 8017F898 0017C7D8  40 80 00 D4 */	bge .L_8017F96C
/* 8017F89C 0017C7DC  2C 17 00 32 */	cmpwi r23, 0x32
/* 8017F8A0 0017C7E0  41 82 00 58 */	beq .L_8017F8F8
/* 8017F8A4 0017C7E4  48 00 00 C8 */	b .L_8017F96C
.L_8017F8A8:
/* 8017F8A8 0017C7E8  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 8017F8AC 0017C7EC  54 80 10 3A */	slwi r0, r4, 2
/* 8017F8B0 0017C7F0  38 9F 00 34 */	addi r4, r31, 0x34
/* 8017F8B4 0017C7F4  38 A0 00 00 */	li r5, 0
/* 8017F8B8 0017C7F8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017F8BC 0017C7FC  7C 84 00 2E */	lwzx r4, r4, r0
/* 8017F8C0 0017C800  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F8C4 0017C804  7D 89 03 A6 */	mtctr r12
/* 8017F8C8 0017C808  4E 80 04 21 */	bctrl 
/* 8017F8CC 0017C80C  48 00 00 A0 */	b .L_8017F96C
.L_8017F8D0:
/* 8017F8D0 0017C810  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 8017F8D4 0017C814  54 80 10 3A */	slwi r0, r4, 2
/* 8017F8D8 0017C818  38 9F 00 40 */	addi r4, r31, 0x40
/* 8017F8DC 0017C81C  38 A0 00 00 */	li r5, 0
/* 8017F8E0 0017C820  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017F8E4 0017C824  7C 84 00 2E */	lwzx r4, r4, r0
/* 8017F8E8 0017C828  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F8EC 0017C82C  7D 89 03 A6 */	mtctr r12
/* 8017F8F0 0017C830  4E 80 04 21 */	bctrl 
/* 8017F8F4 0017C834  48 00 00 78 */	b .L_8017F96C
.L_8017F8F8:
/* 8017F8F8 0017C838  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 8017F8FC 0017C83C  54 80 10 3A */	slwi r0, r4, 2
/* 8017F900 0017C840  38 9F 00 4C */	addi r4, r31, 0x4c
/* 8017F904 0017C844  38 A0 00 00 */	li r5, 0
/* 8017F908 0017C848  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017F90C 0017C84C  7C 84 00 2E */	lwzx r4, r4, r0
/* 8017F910 0017C850  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F914 0017C854  7D 89 03 A6 */	mtctr r12
/* 8017F918 0017C858  4E 80 04 21 */	bctrl 
/* 8017F91C 0017C85C  48 00 00 50 */	b .L_8017F96C
.L_8017F920:
/* 8017F920 0017C860  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 8017F924 0017C864  54 80 10 3A */	slwi r0, r4, 2
/* 8017F928 0017C868  38 9F 00 58 */	addi r4, r31, 0x58
/* 8017F92C 0017C86C  38 A0 00 00 */	li r5, 0
/* 8017F930 0017C870  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017F934 0017C874  7C 84 00 2E */	lwzx r4, r4, r0
/* 8017F938 0017C878  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F93C 0017C87C  7D 89 03 A6 */	mtctr r12
/* 8017F940 0017C880  4E 80 04 21 */	bctrl 
/* 8017F944 0017C884  48 00 00 28 */	b .L_8017F96C
.L_8017F948:
/* 8017F948 0017C888  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 8017F94C 0017C88C  54 80 10 3A */	slwi r0, r4, 2
/* 8017F950 0017C890  38 9F 00 1C */	addi r4, r31, 0x1c
/* 8017F954 0017C894  38 A0 00 00 */	li r5, 0
/* 8017F958 0017C898  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8017F95C 0017C89C  7C 84 00 2E */	lwzx r4, r4, r0
/* 8017F960 0017C8A0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017F964 0017C8A4  7D 89 03 A6 */	mtctr r12
/* 8017F968 0017C8A8  4E 80 04 21 */	bctrl 
.L_8017F96C:
/* 8017F96C 0017C8AC  BA E1 00 4C */	lmw r23, 0x4c(r1)
/* 8017F970 0017C8B0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8017F974 0017C8B4  7C 08 03 A6 */	mtlr r0
/* 8017F978 0017C8B8  38 21 00 70 */	addi r1, r1, 0x70
/* 8017F97C 0017C8BC  4E 80 00 20 */	blr 
.endfn initAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn execAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017F980 0017C8C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017F984 0017C8C4  7C 08 02 A6 */	mflr r0
/* 8017F988 0017C8C8  3C A0 80 51 */	lis r5, "zero__10Vector3<f>"@ha
/* 8017F98C 0017C8CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017F990 0017C8D0  38 A5 41 E4 */	addi r5, r5, "zero__10Vector3<f>"@l
/* 8017F994 0017C8D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017F998 0017C8D8  7C 9F 23 78 */	mr r31, r4
/* 8017F99C 0017C8DC  93 C1 00 08 */	stw r30, 8(r1)
/* 8017F9A0 0017C8E0  7C 7E 1B 78 */	mr r30, r3
/* 8017F9A4 0017C8E4  48 00 05 DD */	bl "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"
/* 8017F9A8 0017C8E8  88 9E 00 2A */	lbz r4, 0x2a(r30)
/* 8017F9AC 0017C8EC  7F E3 FB 78 */	mr r3, r31
/* 8017F9B0 0017C8F0  4B FB D5 7D */	bl assertMotion__Q24Game8FakePikiFi
/* 8017F9B4 0017C8F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017F9B8 0017C8F8  40 82 00 30 */	bne .L_8017F9E8
/* 8017F9BC 0017C8FC  38 00 00 01 */	li r0, 1
/* 8017F9C0 0017C900  7F E3 FB 78 */	mr r3, r31
/* 8017F9C4 0017C904  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8017F9C8 0017C908  38 80 00 01 */	li r4, 1
/* 8017F9CC 0017C90C  38 A0 00 01 */	li r5, 1
/* 8017F9D0 0017C910  38 C0 00 00 */	li r6, 0
/* 8017F9D4 0017C914  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017F9D8 0017C918  38 E0 00 00 */	li r7, 0
/* 8017F9DC 0017C91C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8017F9E0 0017C920  7D 89 03 A6 */	mtctr r12
/* 8017F9E4 0017C924  4E 80 04 21 */	bctrl 
.L_8017F9E8:
/* 8017F9E8 0017C928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017F9EC 0017C92C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017F9F0 0017C930  83 C1 00 08 */	lwz r30, 8(r1)
/* 8017F9F4 0017C934  7C 08 03 A6 */	mtlr r0
/* 8017F9F8 0017C938  38 21 00 10 */	addi r1, r1, 0x10
/* 8017F9FC 0017C93C  4E 80 00 20 */	blr 
.endfn execAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn execAI_attack__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017FA00 0017C940  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8017FA04 0017C944  7C 08 02 A6 */	mflr r0
/* 8017FA08 0017C948  90 01 00 64 */	stw r0, 0x64(r1)
/* 8017FA0C 0017C94C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8017FA10 0017C950  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8017FA14 0017C954  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8017FA18 0017C958  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8017FA1C 0017C95C  7C 7E 1B 78 */	mr r30, r3
/* 8017FA20 0017C960  7C 9F 23 78 */	mr r31, r4
/* 8017FA24 0017C964  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8017FA28 0017C968  81 83 00 00 */	lwz r12, 0(r3)
/* 8017FA2C 0017C96C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8017FA30 0017C970  7D 89 03 A6 */	mtctr r12
/* 8017FA34 0017C974  4E 80 04 21 */	bctrl 
/* 8017FA38 0017C978  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017FA3C 0017C97C  40 82 00 3C */	bne .L_8017FA78
/* 8017FA40 0017C980  38 00 00 01 */	li r0, 1
/* 8017FA44 0017C984  7F E3 FB 78 */	mr r3, r31
/* 8017FA48 0017C988  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8017FA4C 0017C98C  38 80 00 01 */	li r4, 1
/* 8017FA50 0017C990  38 A0 00 01 */	li r5, 1
/* 8017FA54 0017C994  38 C0 00 00 */	li r6, 0
/* 8017FA58 0017C998  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017FA5C 0017C99C  38 E0 00 00 */	li r7, 0
/* 8017FA60 0017C9A0  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8017FA64 0017C9A4  7D 89 03 A6 */	mtctr r12
/* 8017FA68 0017C9A8  4E 80 04 21 */	bctrl 
/* 8017FA6C 0017C9AC  38 00 00 00 */	li r0, 0
/* 8017FA70 0017C9B0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8017FA74 0017C9B4  48 00 01 AC */	b .L_8017FC20
.L_8017FA78:
/* 8017FA78 0017C9B8  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 8017FA7C 0017C9BC  38 61 00 14 */	addi r3, r1, 0x14
/* 8017FA80 0017C9C0  81 84 00 00 */	lwz r12, 0(r4)
/* 8017FA84 0017C9C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017FA88 0017C9C8  7D 89 03 A6 */	mtctr r12
/* 8017FA8C 0017C9CC  4E 80 04 21 */	bctrl 
/* 8017FA90 0017C9D0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8017FA94 0017C9D4  7F E4 FB 78 */	mr r4, r31
/* 8017FA98 0017C9D8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8017FA9C 0017C9DC  38 61 00 08 */	addi r3, r1, 8
/* 8017FAA0 0017C9E0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8017FAA4 0017C9E4  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8017FAA8 0017C9E8  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8017FAAC 0017C9EC  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8017FAB0 0017C9F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017FAB4 0017C9F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017FAB8 0017C9F8  7D 89 03 A6 */	mtctr r12
/* 8017FABC 0017C9FC  4E 80 04 21 */	bctrl 
/* 8017FAC0 0017CA00  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 8017FAC4 0017CA04  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8017FAC8 0017CA08  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 8017FACC 0017CA0C  EC 82 00 28 */	fsubs f4, f2, f0
/* 8017FAD0 0017CA10  C0 01 00 08 */	lfs f0, 8(r1)
/* 8017FAD4 0017CA14  C0 61 00 44 */	lfs f3, 0x44(r1)
/* 8017FAD8 0017CA18  EC 41 00 28 */	fsubs f2, f1, f0
/* 8017FADC 0017CA1C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8017FAE0 0017CA20  EC A4 01 32 */	fmuls f5, f4, f4
/* 8017FAE4 0017CA24  EC 63 00 28 */	fsubs f3, f3, f0
/* 8017FAE8 0017CA28  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 8017FAEC 0017CA2C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8017FAF0 0017CA30  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8017FAF4 0017CA34  EC C3 00 F2 */	fmuls f6, f3, f3
/* 8017FAF8 0017CA38  EC 00 28 2A */	fadds f0, f0, f5
/* 8017FAFC 0017CA3C  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 8017FB00 0017CA40  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 8017FB04 0017CA44  EC 06 00 2A */	fadds f0, f6, f0
/* 8017FB08 0017CA48  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8017FB0C 0017CA4C  40 81 00 20 */	ble .L_8017FB2C
/* 8017FB10 0017CA50  EC 02 28 BA */	fmadds f0, f2, f2, f5
/* 8017FB14 0017CA54  EF E6 00 2A */	fadds f31, f6, f0
/* 8017FB18 0017CA58  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8017FB1C 0017CA5C  40 81 00 14 */	ble .L_8017FB30
/* 8017FB20 0017CA60  FC 00 F8 34 */	frsqrte f0, f31
/* 8017FB24 0017CA64  EF E0 07 F2 */	fmuls f31, f0, f31
/* 8017FB28 0017CA68  48 00 00 08 */	b .L_8017FB30
.L_8017FB2C:
/* 8017FB2C 0017CA6C  FF E0 08 90 */	fmr f31, f1
.L_8017FB30:
/* 8017FB30 0017CA70  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017FB34 0017CA74  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8017FB38 0017CA78  40 81 00 34 */	ble .L_8017FB6C
/* 8017FB3C 0017CA7C  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 8017FB40 0017CA80  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 8017FB44 0017CA84  EC 60 F8 24 */	fdivs f3, f0, f31
/* 8017FB48 0017CA88  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8017FB4C 0017CA8C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8017FB50 0017CA90  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8017FB54 0017CA94  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8017FB58 0017CA98  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8017FB5C 0017CA9C  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8017FB60 0017CAA0  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8017FB64 0017CAA4  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8017FB68 0017CAA8  48 00 00 08 */	b .L_8017FB70
.L_8017FB6C:
/* 8017FB6C 0017CAAC  FF E0 00 90 */	fmr f31, f0
.L_8017FB70:
/* 8017FB70 0017CAB0  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 8017FB74 0017CAB4  38 81 00 20 */	addi r4, r1, 0x20
/* 8017FB78 0017CAB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017FB7C 0017CABC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8017FB80 0017CAC0  7D 89 03 A6 */	mtctr r12
/* 8017FB84 0017CAC4  4E 80 04 21 */	bctrl 
/* 8017FB88 0017CAC8  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8017FB8C 0017CACC  7F E3 FB 78 */	mr r3, r31
/* 8017FB90 0017CAD0  EF FF 00 28 */	fsubs f31, f31, f0
/* 8017FB94 0017CAD4  4B FC 3F 71 */	bl control__Q24Game4NaviFv
/* 8017FB98 0017CAD8  80 AD 92 E0 */	lwz r5, naviMgr__4Game@sda21(r13)
/* 8017FB9C 0017CADC  7F C3 F3 78 */	mr r3, r30
/* 8017FBA0 0017CAE0  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 8017FBA4 0017CAE4  7F E4 FB 78 */	mr r4, r31
/* 8017FBA8 0017CAE8  80 C5 00 C8 */	lwz r6, 0xc8(r5)
/* 8017FBAC 0017CAEC  38 A1 00 30 */	addi r5, r1, 0x30
/* 8017FBB0 0017CAF0  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8017FBB4 0017CAF4  C0 86 03 B8 */	lfs f4, 0x3b8(r6)
/* 8017FBB8 0017CAF8  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8017FBBC 0017CAFC  EC 62 01 32 */	fmuls f3, f2, f4
/* 8017FBC0 0017CB00  C0 42 A8 A4 */	lfs f2, lbl_80518C04@sda21(r2)
/* 8017FBC4 0017CB04  EC 21 01 32 */	fmuls f1, f1, f4
/* 8017FBC8 0017CB08  EC 00 01 32 */	fmuls f0, f0, f4
/* 8017FBCC 0017CB0C  EC 63 00 B2 */	fmuls f3, f3, f2
/* 8017FBD0 0017CB10  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8017FBD4 0017CB14  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8017FBD8 0017CB18  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 8017FBDC 0017CB1C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8017FBE0 0017CB20  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8017FBE4 0017CB24  48 00 03 9D */	bl "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"
/* 8017FBE8 0017CB28  C0 02 A8 EC */	lfs f0, lbl_80518C4C@sda21(r2)
/* 8017FBEC 0017CB2C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8017FBF0 0017CB30  40 80 00 30 */	bge .L_8017FC20
/* 8017FBF4 0017CB34  7F E3 FB 78 */	mr r3, r31
/* 8017FBF8 0017CB38  38 81 00 3C */	addi r4, r1, 0x3c
/* 8017FBFC 0017CB3C  4B FB DF D9 */	bl "turnTo__Q24Game8FakePikiFR10Vector3<f>"
/* 8017FC00 0017CB40  7F C3 F3 78 */	mr r3, r30
/* 8017FC04 0017CB44  7F E4 FB 78 */	mr r4, r31
/* 8017FC08 0017CB48  81 9E 00 00 */	lwz r12, 0(r30)
/* 8017FC0C 0017CB4C  38 A0 00 02 */	li r5, 2
/* 8017FC10 0017CB50  38 C0 00 00 */	li r6, 0
/* 8017FC14 0017CB54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017FC18 0017CB58  7D 89 03 A6 */	mtctr r12
/* 8017FC1C 0017CB5C  4E 80 04 21 */	bctrl 
.L_8017FC20:
/* 8017FC20 0017CB60  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8017FC24 0017CB64  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8017FC28 0017CB68  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8017FC2C 0017CB6C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8017FC30 0017CB70  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8017FC34 0017CB74  7C 08 03 A6 */	mtlr r0
/* 8017FC38 0017CB78  38 21 00 60 */	addi r1, r1, 0x60
/* 8017FC3C 0017CB7C  4E 80 00 20 */	blr 
.endfn execAI_attack__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn initAI_escape__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017FC40 0017CB80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017FC44 0017CB84  7C 08 02 A6 */	mflr r0
/* 8017FC48 0017CB88  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017FC4C 0017CB8C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017FC50 0017CB90  38 00 00 03 */	li r0, 3
/* 8017FC54 0017CB94  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017FC58 0017CB98  7C 7F 1B 78 */	mr r31, r3
/* 8017FC5C 0017CB9C  98 03 00 10 */	stb r0, 0x10(r3)
/* 8017FC60 0017CBA0  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8017FC64 0017CBA4  4B F4 99 3D */	bl rand
/* 8017FC68 0017CBA8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8017FC6C 0017CBAC  3C 60 43 30 */	lis r3, 0x4330
/* 8017FC70 0017CBB0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017FC74 0017CBB4  38 00 00 00 */	li r0, 0
/* 8017FC78 0017CBB8  C8 62 A8 D0 */	lfd f3, lbl_80518C30@sda21(r2)
/* 8017FC7C 0017CBBC  90 61 00 08 */	stw r3, 8(r1)
/* 8017FC80 0017CBC0  C0 22 A8 A8 */	lfs f1, lbl_80518C08@sda21(r2)
/* 8017FC84 0017CBC4  C8 41 00 08 */	lfd f2, 8(r1)
/* 8017FC88 0017CBC8  C0 02 A8 DC */	lfs f0, lbl_80518C3C@sda21(r2)
/* 8017FC8C 0017CBCC  EC 42 18 28 */	fsubs f2, f2, f3
/* 8017FC90 0017CBD0  EC 22 08 24 */	fdivs f1, f2, f1
/* 8017FC94 0017CBD4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8017FC98 0017CBD8  FC 00 00 1E */	fctiwz f0, f0
/* 8017FC9C 0017CBDC  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8017FCA0 0017CBE0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8017FCA4 0017CBE4  7C 64 00 D0 */	neg r3, r4
/* 8017FCA8 0017CBE8  7C 63 23 78 */	or r3, r3, r4
/* 8017FCAC 0017CBEC  54 63 0F FE */	srwi r3, r3, 0x1f
/* 8017FCB0 0017CBF0  98 7F 00 28 */	stb r3, 0x28(r31)
/* 8017FCB4 0017CBF4  98 1F 00 29 */	stb r0, 0x29(r31)
/* 8017FCB8 0017CBF8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017FCBC 0017CBFC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017FCC0 0017CC00  7C 08 03 A6 */	mtlr r0
/* 8017FCC4 0017CC04  38 21 00 20 */	addi r1, r1, 0x20
/* 8017FCC8 0017CC08  4E 80 00 20 */	blr 
.endfn initAI_escape__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn execAI_escape__Q24Game13NaviWalkStateFPQ24Game4Navi, global
/* 8017FCCC 0017CC0C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8017FCD0 0017CC10  7C 08 02 A6 */	mflr r0
/* 8017FCD4 0017CC14  90 01 00 84 */	stw r0, 0x84(r1)
/* 8017FCD8 0017CC18  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8017FCDC 0017CC1C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8017FCE0 0017CC20  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8017FCE4 0017CC24  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 8017FCE8 0017CC28  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 8017FCEC 0017CC2C  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 8017FCF0 0017CC30  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8017FCF4 0017CC34  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8017FCF8 0017CC38  7C 7E 1B 78 */	mr r30, r3
/* 8017FCFC 0017CC3C  7C 9F 23 78 */	mr r31, r4
/* 8017FD00 0017CC40  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8017FD04 0017CC44  81 83 00 00 */	lwz r12, 0(r3)
/* 8017FD08 0017CC48  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8017FD0C 0017CC4C  7D 89 03 A6 */	mtctr r12
/* 8017FD10 0017CC50  4E 80 04 21 */	bctrl 
/* 8017FD14 0017CC54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017FD18 0017CC58  40 82 00 44 */	bne .L_8017FD5C
/* 8017FD1C 0017CC5C  C0 02 A8 C4 */	lfs f0, lbl_80518C24@sda21(r2)
/* 8017FD20 0017CC60  38 00 00 01 */	li r0, 1
/* 8017FD24 0017CC64  7F E3 FB 78 */	mr r3, r31
/* 8017FD28 0017CC68  38 80 00 01 */	li r4, 1
/* 8017FD2C 0017CC6C  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8017FD30 0017CC70  38 A0 00 01 */	li r5, 1
/* 8017FD34 0017CC74  38 C0 00 00 */	li r6, 0
/* 8017FD38 0017CC78  38 E0 00 00 */	li r7, 0
/* 8017FD3C 0017CC7C  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8017FD40 0017CC80  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017FD44 0017CC84  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8017FD48 0017CC88  7D 89 03 A6 */	mtctr r12
/* 8017FD4C 0017CC8C  4E 80 04 21 */	bctrl 
/* 8017FD50 0017CC90  38 00 00 00 */	li r0, 0
/* 8017FD54 0017CC94  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8017FD58 0017CC98  48 00 01 F8 */	b .L_8017FF50
.L_8017FD5C:
/* 8017FD5C 0017CC9C  88 7E 00 29 */	lbz r3, 0x29(r30)
/* 8017FD60 0017CCA0  28 03 00 00 */	cmplwi r3, 0
/* 8017FD64 0017CCA4  41 82 00 0C */	beq .L_8017FD70
/* 8017FD68 0017CCA8  38 03 FF FF */	addi r0, r3, -1
/* 8017FD6C 0017CCAC  98 1E 00 29 */	stb r0, 0x29(r30)
.L_8017FD70:
/* 8017FD70 0017CCB0  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 8017FD74 0017CCB4  38 61 00 14 */	addi r3, r1, 0x14
/* 8017FD78 0017CCB8  81 84 00 00 */	lwz r12, 0(r4)
/* 8017FD7C 0017CCBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017FD80 0017CCC0  7D 89 03 A6 */	mtctr r12
/* 8017FD84 0017CCC4  4E 80 04 21 */	bctrl 
/* 8017FD88 0017CCC8  7F E4 FB 78 */	mr r4, r31
/* 8017FD8C 0017CCCC  38 61 00 08 */	addi r3, r1, 8
/* 8017FD90 0017CCD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017FD94 0017CCD4  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 8017FD98 0017CCD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017FD9C 0017CCDC  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 8017FDA0 0017CCE0  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 8017FDA4 0017CCE4  7D 89 03 A6 */	mtctr r12
/* 8017FDA8 0017CCE8  4E 80 04 21 */	bctrl 
/* 8017FDAC 0017CCEC  C0 21 00 08 */	lfs f1, 8(r1)
/* 8017FDB0 0017CCF0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8017FDB4 0017CCF4  EC 61 F8 28 */	fsubs f3, f1, f31
/* 8017FDB8 0017CCF8  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 8017FDBC 0017CCFC  EC 40 F0 28 */	fsubs f2, f0, f30
/* 8017FDC0 0017CD00  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 8017FDC4 0017CD04  EC 84 E8 28 */	fsubs f4, f4, f29
/* 8017FDC8 0017CD08  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8017FDCC 0017CD0C  EC A2 00 B2 */	fmuls f5, f2, f2
/* 8017FDD0 0017CD10  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8017FDD4 0017CD14  EC C4 01 32 */	fmuls f6, f4, f4
/* 8017FDD8 0017CD18  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8017FDDC 0017CD1C  EC 00 28 2A */	fadds f0, f0, f5
/* 8017FDE0 0017CD20  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 8017FDE4 0017CD24  EC 06 00 2A */	fadds f0, f6, f0
/* 8017FDE8 0017CD28  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8017FDEC 0017CD2C  40 81 00 20 */	ble .L_8017FE0C
/* 8017FDF0 0017CD30  EC 03 28 FA */	fmadds f0, f3, f3, f5
/* 8017FDF4 0017CD34  EF E6 00 2A */	fadds f31, f6, f0
/* 8017FDF8 0017CD38  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8017FDFC 0017CD3C  40 81 00 14 */	ble .L_8017FE10
/* 8017FE00 0017CD40  FC 00 F8 34 */	frsqrte f0, f31
/* 8017FE04 0017CD44  EF E0 07 F2 */	fmuls f31, f0, f31
/* 8017FE08 0017CD48  48 00 00 08 */	b .L_8017FE10
.L_8017FE0C:
/* 8017FE0C 0017CD4C  FF E0 08 90 */	fmr f31, f1
.L_8017FE10:
/* 8017FE10 0017CD50  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8017FE14 0017CD54  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8017FE18 0017CD58  40 81 00 34 */	ble .L_8017FE4C
/* 8017FE1C 0017CD5C  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 8017FE20 0017CD60  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 8017FE24 0017CD64  EC 60 F8 24 */	fdivs f3, f0, f31
/* 8017FE28 0017CD68  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8017FE2C 0017CD6C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8017FE30 0017CD70  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8017FE34 0017CD74  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8017FE38 0017CD78  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8017FE3C 0017CD7C  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8017FE40 0017CD80  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8017FE44 0017CD84  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8017FE48 0017CD88  48 00 00 08 */	b .L_8017FE50
.L_8017FE4C:
/* 8017FE4C 0017CD8C  FF E0 00 90 */	fmr f31, f0
.L_8017FE50:
/* 8017FE50 0017CD90  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 8017FE54 0017CD94  38 81 00 20 */	addi r4, r1, 0x20
/* 8017FE58 0017CD98  81 83 00 00 */	lwz r12, 0(r3)
/* 8017FE5C 0017CD9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8017FE60 0017CDA0  7D 89 03 A6 */	mtctr r12
/* 8017FE64 0017CDA4  4E 80 04 21 */	bctrl 
/* 8017FE68 0017CDA8  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 8017FE6C 0017CDAC  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8017FE70 0017CDB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8017FE74 0017CDB4  EF BF 00 28 */	fsubs f29, f31, f0
/* 8017FE78 0017CDB8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8017FE7C 0017CDBC  7D 89 03 A6 */	mtctr r12
/* 8017FE80 0017CDC0  4E 80 04 21 */	bctrl 
/* 8017FE84 0017CDC4  C0 02 A8 F0 */	lfs f0, lbl_80518C50@sda21(r2)
/* 8017FE88 0017CDC8  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8017FE8C 0017CDCC  40 81 00 3C */	ble .L_8017FEC8
/* 8017FE90 0017CDD0  C0 02 A8 C4 */	lfs f0, lbl_80518C24@sda21(r2)
/* 8017FE94 0017CDD4  38 00 00 01 */	li r0, 1
/* 8017FE98 0017CDD8  7F E3 FB 78 */	mr r3, r31
/* 8017FE9C 0017CDDC  38 80 00 01 */	li r4, 1
/* 8017FEA0 0017CDE0  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8017FEA4 0017CDE4  38 A0 00 01 */	li r5, 1
/* 8017FEA8 0017CDE8  38 C0 00 00 */	li r6, 0
/* 8017FEAC 0017CDEC  38 E0 00 00 */	li r7, 0
/* 8017FEB0 0017CDF0  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8017FEB4 0017CDF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017FEB8 0017CDF8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8017FEBC 0017CDFC  7D 89 03 A6 */	mtctr r12
/* 8017FEC0 0017CE00  4E 80 04 21 */	bctrl 
/* 8017FEC4 0017CE04  48 00 00 8C */	b .L_8017FF50
.L_8017FEC8:
/* 8017FEC8 0017CE08  C0 02 A8 F4 */	lfs f0, lbl_80518C54@sda21(r2)
/* 8017FECC 0017CE0C  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8017FED0 0017CE10  40 81 00 38 */	ble .L_8017FF08
/* 8017FED4 0017CE14  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8017FED8 0017CE18  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 8017FEDC 0017CE1C  FC 00 00 50 */	fneg f0, f0
/* 8017FEE0 0017CE20  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8017FEE4 0017CE24  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8017FEE8 0017CE28  88 1E 00 28 */	lbz r0, 0x28(r30)
/* 8017FEEC 0017CE2C  28 00 00 00 */	cmplwi r0, 0
/* 8017FEF0 0017CE30  40 82 00 18 */	bne .L_8017FF08
/* 8017FEF4 0017CE34  FC 20 00 18 */	frsp f1, f0
/* 8017FEF8 0017CE38  FC 00 10 50 */	fneg f0, f2
/* 8017FEFC 0017CE3C  FC 20 08 50 */	fneg f1, f1
/* 8017FF00 0017CE40  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8017FF04 0017CE44  D0 21 00 38 */	stfs f1, 0x38(r1)
.L_8017FF08:
/* 8017FF08 0017CE48  7F E3 FB 78 */	mr r3, r31
/* 8017FF0C 0017CE4C  4B FC 3B F9 */	bl control__Q24Game4NaviFv
/* 8017FF10 0017CE50  80 AD 92 E0 */	lwz r5, naviMgr__4Game@sda21(r13)
/* 8017FF14 0017CE54  7F C3 F3 78 */	mr r3, r30
/* 8017FF18 0017CE58  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 8017FF1C 0017CE5C  7F E4 FB 78 */	mr r4, r31
/* 8017FF20 0017CE60  80 C5 00 C8 */	lwz r6, 0xc8(r5)
/* 8017FF24 0017CE64  38 A1 00 30 */	addi r5, r1, 0x30
/* 8017FF28 0017CE68  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8017FF2C 0017CE6C  C0 66 03 B8 */	lfs f3, 0x3b8(r6)
/* 8017FF30 0017CE70  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8017FF34 0017CE74  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8017FF38 0017CE78  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8017FF3C 0017CE7C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8017FF40 0017CE80  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 8017FF44 0017CE84  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8017FF48 0017CE88  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8017FF4C 0017CE8C  48 00 00 35 */	bl "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"
.L_8017FF50:
/* 8017FF50 0017CE90  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8017FF54 0017CE94  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8017FF58 0017CE98  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 8017FF5C 0017CE9C  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8017FF60 0017CEA0  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 8017FF64 0017CEA4  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 8017FF68 0017CEA8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8017FF6C 0017CEAC  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8017FF70 0017CEB0  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8017FF74 0017CEB4  7C 08 03 A6 */	mtlr r0
/* 8017FF78 0017CEB8  38 21 00 80 */	addi r1, r1, 0x80
/* 8017FF7C 0017CEBC  4E 80 00 20 */	blr 
.endfn execAI_escape__Q24Game13NaviWalkStateFPQ24Game4Navi

.fn "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>", global
/* 8017FF80 0017CEC0  C0 24 01 E4 */	lfs f1, 0x1e4(r4)
/* 8017FF84 0017CEC4  C0 05 00 00 */	lfs f0, 0(r5)
/* 8017FF88 0017CEC8  EC 01 00 2A */	fadds f0, f1, f0
/* 8017FF8C 0017CECC  D0 04 01 E4 */	stfs f0, 0x1e4(r4)
/* 8017FF90 0017CED0  C0 24 01 E8 */	lfs f1, 0x1e8(r4)
/* 8017FF94 0017CED4  C0 05 00 04 */	lfs f0, 4(r5)
/* 8017FF98 0017CED8  EC 01 00 2A */	fadds f0, f1, f0
/* 8017FF9C 0017CEDC  D0 04 01 E8 */	stfs f0, 0x1e8(r4)
/* 8017FFA0 0017CEE0  C0 24 01 EC */	lfs f1, 0x1ec(r4)
/* 8017FFA4 0017CEE4  C0 05 00 08 */	lfs f0, 8(r5)
/* 8017FFA8 0017CEE8  EC 01 00 2A */	fadds f0, f1, f0
/* 8017FFAC 0017CEEC  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 8017FFB0 0017CEF0  4E 80 00 20 */	blr 
.endfn "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"

.fn init__Q24Game15NaviChangeStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 8017FFB4 0017CEF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017FFB8 0017CEF8  7C 08 02 A6 */	mflr r0
/* 8017FFBC 0017CEFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017FFC0 0017CF00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017FFC4 0017CF04  7C 9F 23 78 */	mr r31, r4
/* 8017FFC8 0017CF08  93 C1 00 08 */	stw r30, 8(r1)
/* 8017FFCC 0017CF0C  7C 7E 1B 78 */	mr r30, r3
/* 8017FFD0 0017CF10  7F E3 FB 78 */	mr r3, r31
/* 8017FFD4 0017CF14  81 9F 00 00 */	lwz r12, 0(r31)
/* 8017FFD8 0017CF18  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8017FFDC 0017CF1C  7D 89 03 A6 */	mtctr r12
/* 8017FFE0 0017CF20  4E 80 04 21 */	bctrl 
/* 8017FFE4 0017CF24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017FFE8 0017CF28  40 82 00 34 */	bne .L_8018001C
/* 8017FFEC 0017CF2C  28 1F 00 00 */	cmplwi r31, 0
/* 8017FFF0 0017CF30  7F E6 FB 78 */	mr r6, r31
/* 8017FFF4 0017CF34  41 82 00 08 */	beq .L_8017FFFC
/* 8017FFF8 0017CF38  38 DF 01 78 */	addi r6, r31, 0x178
.L_8017FFFC:
/* 8017FFFC 0017CF3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80180000 0017CF40  7F E3 FB 78 */	mr r3, r31
/* 80180004 0017CF44  38 80 00 20 */	li r4, 0x20
/* 80180008 0017CF48  38 A0 00 20 */	li r5, 0x20
/* 8018000C 0017CF4C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80180010 0017CF50  38 E0 00 00 */	li r7, 0
/* 80180014 0017CF54  7D 89 03 A6 */	mtctr r12
/* 80180018 0017CF58  4E 80 04 21 */	bctrl 
.L_8018001C:
/* 8018001C 0017CF5C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80180020 0017CF60  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 80180024 0017CF64  81 83 00 00 */	lwz r12, 0(r3)
/* 80180028 0017CF68  20 80 00 01 */	subfic r4, r0, 1
/* 8018002C 0017CF6C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80180030 0017CF70  7D 89 03 A6 */	mtctr r12
/* 80180034 0017CF74  4E 80 04 21 */	bctrl 
/* 80180038 0017CF78  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8018003C 0017CF7C  38 00 00 00 */	li r0, 0
/* 80180040 0017CF80  98 1E 00 14 */	stb r0, 0x14(r30)
/* 80180044 0017CF84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80180048 0017CF88  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018004C 0017CF8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80180050 0017CF90  7C 08 03 A6 */	mtlr r0
/* 80180054 0017CF94  38 21 00 10 */	addi r1, r1, 0x10
/* 80180058 0017CF98  4E 80 00 20 */	blr 
.endfn init__Q24Game15NaviChangeStateFPQ24Game4NaviPQ24Game8StateArg

.fn onKeyEvent__Q24Game15NaviChangeStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 8018005C 0017CF9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80180060 0017CFA0  7C 08 02 A6 */	mflr r0
/* 80180064 0017CFA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80180068 0017CFA8  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8018006C 0017CFAC  7C 85 23 78 */	mr r5, r4
/* 80180070 0017CFB0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80180074 0017CFB4  40 82 00 30 */	bne .L_801800A4
/* 80180078 0017CFB8  38 00 00 01 */	li r0, 1
/* 8018007C 0017CFBC  38 80 00 1E */	li r4, 0x1e
/* 80180080 0017CFC0  98 03 00 14 */	stb r0, 0x14(r3)
/* 80180084 0017CFC4  7C A3 2B 78 */	mr r3, r5
/* 80180088 0017CFC8  38 A0 00 1E */	li r5, 0x1e
/* 8018008C 0017CFCC  38 C0 00 00 */	li r6, 0
/* 80180090 0017CFD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80180094 0017CFD4  38 E0 00 00 */	li r7, 0
/* 80180098 0017CFD8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018009C 0017CFDC  7D 89 03 A6 */	mtctr r12
/* 801800A0 0017CFE0  4E 80 04 21 */	bctrl 
.L_801800A4:
/* 801800A4 0017CFE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801800A8 0017CFE8  7C 08 03 A6 */	mtlr r0
/* 801800AC 0017CFEC  38 21 00 10 */	addi r1, r1, 0x10
/* 801800B0 0017CFF0  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game15NaviChangeStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn exec__Q24Game15NaviChangeStateFPQ24Game4Navi, global
/* 801800B4 0017CFF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801800B8 0017CFF8  7C 08 02 A6 */	mflr r0
/* 801800BC 0017CFFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801800C0 0017D000  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801800C4 0017D004  7C 9F 23 78 */	mr r31, r4
/* 801800C8 0017D008  93 C1 00 08 */	stw r30, 8(r1)
/* 801800CC 0017D00C  7C 7E 1B 78 */	mr r30, r3
/* 801800D0 0017D010  7F E3 FB 78 */	mr r3, r31
/* 801800D4 0017D014  81 9F 00 00 */	lwz r12, 0(r31)
/* 801800D8 0017D018  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 801800DC 0017D01C  7D 89 03 A6 */	mtctr r12
/* 801800E0 0017D020  4E 80 04 21 */	bctrl 
/* 801800E4 0017D024  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801800E8 0017D028  41 82 00 24 */	beq .L_8018010C
/* 801800EC 0017D02C  7F C3 F3 78 */	mr r3, r30
/* 801800F0 0017D030  7F E4 FB 78 */	mr r4, r31
/* 801800F4 0017D034  81 9E 00 00 */	lwz r12, 0(r30)
/* 801800F8 0017D038  38 A0 00 00 */	li r5, 0
/* 801800FC 0017D03C  38 C0 00 00 */	li r6, 0
/* 80180100 0017D040  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80180104 0017D044  7D 89 03 A6 */	mtctr r12
/* 80180108 0017D048  4E 80 04 21 */	bctrl 
.L_8018010C:
/* 8018010C 0017D04C  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80180110 0017D050  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80180114 0017D054  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80180118 0017D058  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8018011C 0017D05C  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 80180120 0017D060  28 00 00 01 */	cmplwi r0, 1
/* 80180124 0017D064  40 82 00 24 */	bne .L_80180148
/* 80180128 0017D068  7F C3 F3 78 */	mr r3, r30
/* 8018012C 0017D06C  7F E4 FB 78 */	mr r4, r31
/* 80180130 0017D070  81 9E 00 00 */	lwz r12, 0(r30)
/* 80180134 0017D074  38 A0 00 00 */	li r5, 0
/* 80180138 0017D078  38 C0 00 00 */	li r6, 0
/* 8018013C 0017D07C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80180140 0017D080  7D 89 03 A6 */	mtctr r12
/* 80180144 0017D084  4E 80 04 21 */	bctrl 
.L_80180148:
/* 80180148 0017D088  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018014C 0017D08C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80180150 0017D090  83 C1 00 08 */	lwz r30, 8(r1)
/* 80180154 0017D094  7C 08 03 A6 */	mtlr r0
/* 80180158 0017D098  38 21 00 10 */	addi r1, r1, 0x10
/* 8018015C 0017D09C  4E 80 00 20 */	blr 
.endfn exec__Q24Game15NaviChangeStateFPQ24Game4Navi

.fn cleanup__Q24Game15NaviChangeStateFPQ24Game4Navi, global
/* 80180160 0017D0A0  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15NaviChangeStateFPQ24Game4Navi

.fn init__Q24Game15NaviFollowStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80180164 0017D0A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80180168 0017D0A8  7C 08 02 A6 */	mflr r0
/* 8018016C 0017D0AC  28 05 00 00 */	cmplwi r5, 0
/* 80180170 0017D0B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80180174 0017D0B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80180178 0017D0B8  7C 9F 23 78 */	mr r31, r4
/* 8018017C 0017D0BC  93 C1 00 08 */	stw r30, 8(r1)
/* 80180180 0017D0C0  7C 7E 1B 78 */	mr r30, r3
/* 80180184 0017D0C4  41 82 00 C4 */	beq .L_80180248
/* 80180188 0017D0C8  88 05 00 00 */	lbz r0, 0(r5)
/* 8018018C 0017D0CC  28 00 00 00 */	cmplwi r0, 0
/* 80180190 0017D0D0  41 82 00 B8 */	beq .L_80180248
/* 80180194 0017D0D4  28 1F 00 00 */	cmplwi r31, 0
/* 80180198 0017D0D8  7F E6 FB 78 */	mr r6, r31
/* 8018019C 0017D0DC  41 82 00 08 */	beq .L_801801A4
/* 801801A0 0017D0E0  38 C6 01 78 */	addi r6, r6, 0x178
.L_801801A4:
/* 801801A4 0017D0E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801801A8 0017D0E8  7F E3 FB 78 */	mr r3, r31
/* 801801AC 0017D0EC  38 80 00 20 */	li r4, 0x20
/* 801801B0 0017D0F0  38 A0 00 20 */	li r5, 0x20
/* 801801B4 0017D0F4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801801B8 0017D0F8  38 E0 00 00 */	li r7, 0
/* 801801BC 0017D0FC  7D 89 03 A6 */	mtctr r12
/* 801801C0 0017D100  4E 80 04 21 */	bctrl 
/* 801801C4 0017D104  38 00 00 00 */	li r0, 0
/* 801801C8 0017D108  98 1E 00 14 */	stb r0, 0x14(r30)
/* 801801CC 0017D10C  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 801801D0 0017D110  28 00 00 00 */	cmplwi r0, 0
/* 801801D4 0017D114  40 82 00 24 */	bne .L_801801F8
/* 801801D8 0017D118  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 801801DC 0017D11C  38 80 08 95 */	li r4, 0x895
/* 801801E0 0017D120  38 A0 00 00 */	li r5, 0
/* 801801E4 0017D124  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801801E8 0017D128  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801801EC 0017D12C  7D 89 03 A6 */	mtctr r12
/* 801801F0 0017D130  4E 80 04 21 */	bctrl 
/* 801801F4 0017D134  48 00 00 80 */	b .L_80180274
.L_801801F8:
/* 801801F8 0017D138  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801801FC 0017D13C  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80180200 0017D140  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80180204 0017D144  41 82 00 24 */	beq .L_80180228
/* 80180208 0017D148  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 8018020C 0017D14C  38 80 08 9C */	li r4, 0x89c
/* 80180210 0017D150  38 A0 00 00 */	li r5, 0
/* 80180214 0017D154  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80180218 0017D158  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8018021C 0017D15C  7D 89 03 A6 */	mtctr r12
/* 80180220 0017D160  4E 80 04 21 */	bctrl 
/* 80180224 0017D164  48 00 00 50 */	b .L_80180274
.L_80180228:
/* 80180228 0017D168  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 8018022C 0017D16C  38 80 08 96 */	li r4, 0x896
/* 80180230 0017D170  38 A0 00 00 */	li r5, 0
/* 80180234 0017D174  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80180238 0017D178  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8018023C 0017D17C  7D 89 03 A6 */	mtctr r12
/* 80180240 0017D180  4E 80 04 21 */	bctrl 
/* 80180244 0017D184  48 00 00 30 */	b .L_80180274
.L_80180248:
/* 80180248 0017D188  38 00 00 01 */	li r0, 1
/* 8018024C 0017D18C  7F E3 FB 78 */	mr r3, r31
/* 80180250 0017D190  98 1E 00 14 */	stb r0, 0x14(r30)
/* 80180254 0017D194  38 80 00 1E */	li r4, 0x1e
/* 80180258 0017D198  38 A0 00 1E */	li r5, 0x1e
/* 8018025C 0017D19C  38 C0 00 00 */	li r6, 0
/* 80180260 0017D1A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80180264 0017D1A4  38 E0 00 00 */	li r7, 0
/* 80180268 0017D1A8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018026C 0017D1AC  7D 89 03 A6 */	mtctr r12
/* 80180270 0017D1B0  4E 80 04 21 */	bctrl 
.L_80180274:
/* 80180274 0017D1B4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80180278 0017D1B8  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 8018027C 0017D1BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80180280 0017D1C0  20 80 00 01 */	subfic r4, r0, 1
/* 80180284 0017D1C4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80180288 0017D1C8  7D 89 03 A6 */	mtctr r12
/* 8018028C 0017D1CC  4E 80 04 21 */	bctrl 
/* 80180290 0017D1D0  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80180294 0017D1D4  7F E3 FB 78 */	mr r3, r31
/* 80180298 0017D1D8  38 80 00 01 */	li r4, 1
/* 8018029C 0017D1DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801802A0 0017D1E0  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 801802A4 0017D1E4  7D 89 03 A6 */	mtctr r12
/* 801802A8 0017D1E8  4E 80 04 21 */	bctrl 
/* 801802AC 0017D1EC  38 00 00 00 */	li r0, 0
/* 801802B0 0017D1F0  98 1E 00 1C */	stb r0, 0x1c(r30)
/* 801802B4 0017D1F4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801802B8 0017D1F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801802BC 0017D1FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801802C0 0017D200  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801802C4 0017D204  7C 08 03 A6 */	mtlr r0
/* 801802C8 0017D208  38 21 00 10 */	addi r1, r1, 0x10
/* 801802CC 0017D20C  4E 80 00 20 */	blr 
.endfn init__Q24Game15NaviFollowStateFPQ24Game4NaviPQ24Game8StateArg

.fn onKeyEvent__Q24Game15NaviFollowStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 801802D0 0017D210  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801802D4 0017D214  7C 08 02 A6 */	mflr r0
/* 801802D8 0017D218  90 01 00 14 */	stw r0, 0x14(r1)
/* 801802DC 0017D21C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 801802E0 0017D220  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801802E4 0017D224  7C BF 2B 78 */	mr r31, r5
/* 801802E8 0017D228  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 801802EC 0017D22C  93 C1 00 08 */	stw r30, 8(r1)
/* 801802F0 0017D230  7C 9E 23 78 */	mr r30, r4
/* 801802F4 0017D234  40 82 00 90 */	bne .L_80180384
/* 801802F8 0017D238  88 03 00 14 */	lbz r0, 0x14(r3)
/* 801802FC 0017D23C  2C 00 00 01 */	cmpwi r0, 1
/* 80180300 0017D240  41 82 00 84 */	beq .L_80180384
/* 80180304 0017D244  40 80 00 10 */	bge .L_80180314
/* 80180308 0017D248  2C 00 00 00 */	cmpwi r0, 0
/* 8018030C 0017D24C  40 80 00 14 */	bge .L_80180320
/* 80180310 0017D250  48 00 00 74 */	b .L_80180384
.L_80180314:
/* 80180314 0017D254  2C 00 00 03 */	cmpwi r0, 3
/* 80180318 0017D258  40 80 00 6C */	bge .L_80180384
/* 8018031C 0017D25C  48 00 00 34 */	b .L_80180350
.L_80180320:
/* 80180320 0017D260  38 00 00 01 */	li r0, 1
/* 80180324 0017D264  38 80 00 1E */	li r4, 0x1e
/* 80180328 0017D268  98 03 00 14 */	stb r0, 0x14(r3)
/* 8018032C 0017D26C  7F C3 F3 78 */	mr r3, r30
/* 80180330 0017D270  38 A0 00 1E */	li r5, 0x1e
/* 80180334 0017D274  38 C0 00 00 */	li r6, 0
/* 80180338 0017D278  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018033C 0017D27C  38 E0 00 00 */	li r7, 0
/* 80180340 0017D280  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80180344 0017D284  7D 89 03 A6 */	mtctr r12
/* 80180348 0017D288  4E 80 04 21 */	bctrl 
/* 8018034C 0017D28C  48 00 00 38 */	b .L_80180384
.L_80180350:
/* 80180350 0017D290  38 80 00 00 */	li r4, 0
/* 80180354 0017D294  38 00 00 01 */	li r0, 1
/* 80180358 0017D298  98 83 00 1C */	stb r4, 0x1c(r3)
/* 8018035C 0017D29C  38 80 00 1F */	li r4, 0x1f
/* 80180360 0017D2A0  38 A0 00 1F */	li r5, 0x1f
/* 80180364 0017D2A4  38 C0 00 00 */	li r6, 0
/* 80180368 0017D2A8  98 03 00 14 */	stb r0, 0x14(r3)
/* 8018036C 0017D2AC  7F C3 F3 78 */	mr r3, r30
/* 80180370 0017D2B0  38 E0 00 00 */	li r7, 0
/* 80180374 0017D2B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80180378 0017D2B8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018037C 0017D2BC  7D 89 03 A6 */	mtctr r12
/* 80180380 0017D2C0  4E 80 04 21 */	bctrl 
.L_80180384:
/* 80180384 0017D2C4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80180388 0017D2C8  28 03 00 00 */	cmplwi r3, 0
/* 8018038C 0017D2CC  41 82 00 10 */	beq .L_8018039C
/* 80180390 0017D2D0  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 80180394 0017D2D4  28 00 00 00 */	cmplwi r0, 0
/* 80180398 0017D2D8  40 82 00 94 */	bne .L_8018042C
.L_8018039C:
/* 8018039C 0017D2DC  A8 1F 00 20 */	lha r0, 0x20(r31)
/* 801803A0 0017D2E0  2C 00 00 32 */	cmpwi r0, 0x32
/* 801803A4 0017D2E4  40 82 00 88 */	bne .L_8018042C
/* 801803A8 0017D2E8  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 801803AC 0017D2EC  28 00 00 C8 */	cmplwi r0, 0xc8
/* 801803B0 0017D2F0  40 82 00 7C */	bne .L_8018042C
/* 801803B4 0017D2F4  A0 1E 02 DC */	lhz r0, 0x2dc(r30)
/* 801803B8 0017D2F8  28 00 00 00 */	cmplwi r0, 0
/* 801803BC 0017D2FC  40 82 00 24 */	bne .L_801803E0
/* 801803C0 0017D300  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 801803C4 0017D304  38 80 08 77 */	li r4, 0x877
/* 801803C8 0017D308  38 A0 00 00 */	li r5, 0
/* 801803CC 0017D30C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801803D0 0017D310  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801803D4 0017D314  7D 89 03 A6 */	mtctr r12
/* 801803D8 0017D318  4E 80 04 21 */	bctrl 
/* 801803DC 0017D31C  48 00 00 50 */	b .L_8018042C
.L_801803E0:
/* 801803E0 0017D320  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801803E4 0017D324  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 801803E8 0017D328  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801803EC 0017D32C  41 82 00 24 */	beq .L_80180410
/* 801803F0 0017D330  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 801803F4 0017D334  38 80 08 79 */	li r4, 0x879
/* 801803F8 0017D338  38 A0 00 00 */	li r5, 0
/* 801803FC 0017D33C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80180400 0017D340  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80180404 0017D344  7D 89 03 A6 */	mtctr r12
/* 80180408 0017D348  4E 80 04 21 */	bctrl 
/* 8018040C 0017D34C  48 00 00 20 */	b .L_8018042C
.L_80180410:
/* 80180410 0017D350  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 80180414 0017D354  38 80 08 78 */	li r4, 0x878
/* 80180418 0017D358  38 A0 00 00 */	li r5, 0
/* 8018041C 0017D35C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80180420 0017D360  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80180424 0017D364  7D 89 03 A6 */	mtctr r12
/* 80180428 0017D368  4E 80 04 21 */	bctrl 
.L_8018042C:
/* 8018042C 0017D36C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80180430 0017D370  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80180434 0017D374  83 C1 00 08 */	lwz r30, 8(r1)
/* 80180438 0017D378  7C 08 03 A6 */	mtlr r0
/* 8018043C 0017D37C  38 21 00 10 */	addi r1, r1, 0x10
/* 80180440 0017D380  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game15NaviFollowStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn exec__Q24Game15NaviFollowStateFPQ24Game4Navi, global
/* 80180444 0017D384  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80180448 0017D388  7C 08 02 A6 */	mflr r0
/* 8018044C 0017D38C  90 01 01 14 */	stw r0, 0x114(r1)
/* 80180450 0017D390  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 80180454 0017D394  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 80180458 0017D398  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 8018045C 0017D39C  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 80180460 0017D3A0  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 80180464 0017D3A4  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 80180468 0017D3A8  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 8018046C 0017D3AC  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 80180470 0017D3B0  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 80180474 0017D3B4  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 80180478 0017D3B8  DB 41 00 B0 */	stfd f26, 0xb0(r1)
/* 8018047C 0017D3BC  F3 41 00 B8 */	psq_st f26, 184(r1), 0, qr0
/* 80180480 0017D3C0  DB 21 00 A0 */	stfd f25, 0xa0(r1)
/* 80180484 0017D3C4  F3 21 00 A8 */	psq_st f25, 168(r1), 0, qr0
/* 80180488 0017D3C8  BF 61 00 8C */	stmw r27, 0x8c(r1)
/* 8018048C 0017D3CC  80 CD 9B 54 */	lwz r6, moviePlayer__4Game@sda21(r13)
/* 80180490 0017D3D0  3C A0 80 4B */	lis r5, govNAN___Q24Game5P2JST@ha
/* 80180494 0017D3D4  7C 7C 1B 78 */	mr r28, r3
/* 80180498 0017D3D8  7C 9D 23 78 */	mr r29, r4
/* 8018049C 0017D3DC  28 06 00 00 */	cmplwi r6, 0
/* 801804A0 0017D3E0  3B E5 2D 40 */	addi r31, r5, govNAN___Q24Game5P2JST@l
/* 801804A4 0017D3E4  41 82 00 10 */	beq .L_801804B4
/* 801804A8 0017D3E8  80 06 00 18 */	lwz r0, 0x18(r6)
/* 801804AC 0017D3EC  2C 00 00 00 */	cmpwi r0, 0
/* 801804B0 0017D3F0  40 82 08 E8 */	bne .L_80180D98
.L_801804B4:
/* 801804B4 0017D3F4  80 1D 02 78 */	lwz r0, 0x278(r29)
/* 801804B8 0017D3F8  28 00 00 00 */	cmplwi r0, 0
/* 801804BC 0017D3FC  41 82 00 28 */	beq .L_801804E4
/* 801804C0 0017D400  7F 83 E3 78 */	mr r3, r28
/* 801804C4 0017D404  7F A4 EB 78 */	mr r4, r29
/* 801804C8 0017D408  81 9C 00 00 */	lwz r12, 0(r28)
/* 801804CC 0017D40C  38 A0 00 00 */	li r5, 0
/* 801804D0 0017D410  38 C0 00 00 */	li r6, 0
/* 801804D4 0017D414  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801804D8 0017D418  7D 89 03 A6 */	mtctr r12
/* 801804DC 0017D41C  4E 80 04 21 */	bctrl 
/* 801804E0 0017D420  48 00 08 B8 */	b .L_80180D98
.L_801804E4:
/* 801804E4 0017D424  88 1C 00 14 */	lbz r0, 0x14(r28)
/* 801804E8 0017D428  28 00 00 00 */	cmplwi r0, 0
/* 801804EC 0017D42C  40 82 00 58 */	bne .L_80180544
/* 801804F0 0017D430  7F A3 EB 78 */	mr r3, r29
/* 801804F4 0017D434  38 80 00 20 */	li r4, 0x20
/* 801804F8 0017D438  4B FB CA 35 */	bl assertMotion__Q24Game8FakePikiFi
/* 801804FC 0017D43C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80180500 0017D440  40 82 00 30 */	bne .L_80180530
/* 80180504 0017D444  38 00 00 01 */	li r0, 1
/* 80180508 0017D448  7F A3 EB 78 */	mr r3, r29
/* 8018050C 0017D44C  98 1C 00 14 */	stb r0, 0x14(r28)
/* 80180510 0017D450  38 80 00 1E */	li r4, 0x1e
/* 80180514 0017D454  38 A0 00 1E */	li r5, 0x1e
/* 80180518 0017D458  38 C0 00 00 */	li r6, 0
/* 8018051C 0017D45C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80180520 0017D460  38 E0 00 00 */	li r7, 0
/* 80180524 0017D464  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80180528 0017D468  7D 89 03 A6 */	mtctr r12
/* 8018052C 0017D46C  4E 80 04 21 */	bctrl 
.L_80180530:
/* 80180530 0017D470  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80180534 0017D474  D0 1D 01 E4 */	stfs f0, 0x1e4(r29)
/* 80180538 0017D478  D0 1D 01 E8 */	stfs f0, 0x1e8(r29)
/* 8018053C 0017D47C  D0 1D 01 EC */	stfs f0, 0x1ec(r29)
/* 80180540 0017D480  48 00 08 58 */	b .L_80180D98
.L_80180544:
/* 80180544 0017D484  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 80180548 0017D488  48 01 F0 2D */	bl isStickTo__Q24Game8CreatureFv
/* 8018054C 0017D48C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80180550 0017D490  41 82 00 28 */	beq .L_80180578
/* 80180554 0017D494  7F 83 E3 78 */	mr r3, r28
/* 80180558 0017D498  7F A4 EB 78 */	mr r4, r29
/* 8018055C 0017D49C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80180560 0017D4A0  38 A0 00 00 */	li r5, 0
/* 80180564 0017D4A4  38 C0 00 00 */	li r6, 0
/* 80180568 0017D4A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018056C 0017D4AC  7D 89 03 A6 */	mtctr r12
/* 80180570 0017D4B0  4E 80 04 21 */	bctrl 
/* 80180574 0017D4B4  48 00 08 24 */	b .L_80180D98
.L_80180578:
/* 80180578 0017D4B8  88 1C 00 14 */	lbz r0, 0x14(r28)
/* 8018057C 0017D4BC  28 00 00 03 */	cmplwi r0, 3
/* 80180580 0017D4C0  40 82 02 28 */	bne .L_801807A8
/* 80180584 0017D4C4  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 80180588 0017D4C8  28 03 00 00 */	cmplwi r3, 0
/* 8018058C 0017D4CC  41 82 00 54 */	beq .L_801805E0
/* 80180590 0017D4D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80180594 0017D4D4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80180598 0017D4D8  7D 89 03 A6 */	mtctr r12
/* 8018059C 0017D4DC  4E 80 04 21 */	bctrl 
/* 801805A0 0017D4E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801805A4 0017D4E4  41 82 00 3C */	beq .L_801805E0
/* 801805A8 0017D4E8  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 801805AC 0017D4EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801805B0 0017D4F0  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 801805B4 0017D4F4  7D 89 03 A6 */	mtctr r12
/* 801805B8 0017D4F8  4E 80 04 21 */	bctrl 
/* 801805BC 0017D4FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801805C0 0017D500  40 82 00 20 */	bne .L_801805E0
/* 801805C4 0017D504  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 801805C8 0017D508  81 83 00 00 */	lwz r12, 0(r3)
/* 801805CC 0017D50C  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 801805D0 0017D510  7D 89 03 A6 */	mtctr r12
/* 801805D4 0017D514  4E 80 04 21 */	bctrl 
/* 801805D8 0017D518  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801805DC 0017D51C  41 82 00 3C */	beq .L_80180618
.L_801805E0:
/* 801805E0 0017D520  38 60 00 01 */	li r3, 1
/* 801805E4 0017D524  38 00 00 00 */	li r0, 0
/* 801805E8 0017D528  98 7C 00 14 */	stb r3, 0x14(r28)
/* 801805EC 0017D52C  7F A3 EB 78 */	mr r3, r29
/* 801805F0 0017D530  38 80 00 1E */	li r4, 0x1e
/* 801805F4 0017D534  38 A0 00 1E */	li r5, 0x1e
/* 801805F8 0017D538  90 1C 00 18 */	stw r0, 0x18(r28)
/* 801805FC 0017D53C  38 C0 00 00 */	li r6, 0
/* 80180600 0017D540  38 E0 00 00 */	li r7, 0
/* 80180604 0017D544  81 9D 00 00 */	lwz r12, 0(r29)
/* 80180608 0017D548  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018060C 0017D54C  7D 89 03 A6 */	mtctr r12
/* 80180610 0017D550  4E 80 04 21 */	bctrl 
/* 80180614 0017D554  48 00 07 84 */	b .L_80180D98
.L_80180618:
/* 80180618 0017D558  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 8018061C 0017D55C  38 81 00 34 */	addi r4, r1, 0x34
/* 80180620 0017D560  81 83 00 00 */	lwz r12, 0(r3)
/* 80180624 0017D564  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80180628 0017D568  7D 89 03 A6 */	mtctr r12
/* 8018062C 0017D56C  4E 80 04 21 */	bctrl 
/* 80180630 0017D570  7F A4 EB 78 */	mr r4, r29
/* 80180634 0017D574  38 61 00 28 */	addi r3, r1, 0x28
/* 80180638 0017D578  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018063C 0017D57C  C3 21 00 34 */	lfs f25, 0x34(r1)
/* 80180640 0017D580  81 8C 00 08 */	lwz r12, 8(r12)
/* 80180644 0017D584  C3 41 00 38 */	lfs f26, 0x38(r1)
/* 80180648 0017D588  C3 61 00 3C */	lfs f27, 0x3c(r1)
/* 8018064C 0017D58C  7D 89 03 A6 */	mtctr r12
/* 80180650 0017D590  4E 80 04 21 */	bctrl 
/* 80180654 0017D594  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80180658 0017D598  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 8018065C 0017D59C  EF 5A 00 28 */	fsubs f26, f26, f0
/* 80180660 0017D5A0  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80180664 0017D5A4  EF 39 10 28 */	fsubs f25, f25, f2
/* 80180668 0017D5A8  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8018066C 0017D5AC  EF 7B 08 28 */	fsubs f27, f27, f1
/* 80180670 0017D5B0  EC 3A 06 B2 */	fmuls f1, f26, f26
/* 80180674 0017D5B4  EC 5B 06 F2 */	fmuls f2, f27, f27
/* 80180678 0017D5B8  EC 39 0E 7A */	fmadds f1, f25, f25, f1
/* 8018067C 0017D5BC  EC 42 08 2A */	fadds f2, f2, f1
/* 80180680 0017D5C0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80180684 0017D5C4  40 81 00 14 */	ble .L_80180698
/* 80180688 0017D5C8  40 81 00 14 */	ble .L_8018069C
/* 8018068C 0017D5CC  FC 00 10 34 */	frsqrte f0, f2
/* 80180690 0017D5D0  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80180694 0017D5D4  48 00 00 08 */	b .L_8018069C
.L_80180698:
/* 80180698 0017D5D8  FC 40 00 90 */	fmr f2, f0
.L_8018069C:
/* 8018069C 0017D5DC  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801806A0 0017D5E0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801806A4 0017D5E4  40 81 00 1C */	ble .L_801806C0
/* 801806A8 0017D5E8  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 801806AC 0017D5EC  EC 00 10 24 */	fdivs f0, f0, f2
/* 801806B0 0017D5F0  EF 39 00 32 */	fmuls f25, f25, f0
/* 801806B4 0017D5F4  EF 5A 00 32 */	fmuls f26, f26, f0
/* 801806B8 0017D5F8  EF 7B 00 32 */	fmuls f27, f27, f0
/* 801806BC 0017D5FC  48 00 00 08 */	b .L_801806C4
.L_801806C0:
/* 801806C0 0017D600  FC 40 00 90 */	fmr f2, f0
.L_801806C4:
/* 801806C4 0017D604  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 801806C8 0017D608  C0 02 A8 F8 */	lfs f0, lbl_80518C58@sda21(r2)
/* 801806CC 0017D60C  EC 22 08 28 */	fsubs f1, f2, f1
/* 801806D0 0017D610  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801806D4 0017D614  40 80 00 4C */	bge .L_80180720
/* 801806D8 0017D618  7F A3 EB 78 */	mr r3, r29
/* 801806DC 0017D61C  38 81 00 34 */	addi r4, r1, 0x34
/* 801806E0 0017D620  4B FB D4 F5 */	bl "turnTo__Q24Game8FakePikiFR10Vector3<f>"
/* 801806E4 0017D624  38 A0 00 00 */	li r5, 0
/* 801806E8 0017D628  38 00 00 01 */	li r0, 1
/* 801806EC 0017D62C  98 A1 00 08 */	stb r5, 8(r1)
/* 801806F0 0017D630  7F 83 E3 78 */	mr r3, r28
/* 801806F4 0017D634  7F A4 EB 78 */	mr r4, r29
/* 801806F8 0017D638  38 C1 00 08 */	addi r6, r1, 8
/* 801806FC 0017D63C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80180700 0017D640  38 A0 00 02 */	li r5, 2
/* 80180704 0017D644  98 01 00 08 */	stb r0, 8(r1)
/* 80180708 0017D648  90 01 00 0C */	stw r0, 0xc(r1)
/* 8018070C 0017D64C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80180710 0017D650  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80180714 0017D654  7D 89 03 A6 */	mtctr r12
/* 80180718 0017D658  4E 80 04 21 */	bctrl 
/* 8018071C 0017D65C  48 00 06 7C */	b .L_80180D98
.L_80180720:
/* 80180720 0017D660  88 7C 00 1E */	lbz r3, 0x1e(r28)
/* 80180724 0017D664  38 63 00 01 */	addi r3, r3, 1
/* 80180728 0017D668  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8018072C 0017D66C  98 7C 00 1E */	stb r3, 0x1e(r28)
/* 80180730 0017D670  28 00 00 3C */	cmplwi r0, 0x3c
/* 80180734 0017D674  41 80 00 3C */	blt .L_80180770
/* 80180738 0017D678  38 00 00 01 */	li r0, 1
/* 8018073C 0017D67C  7F A3 EB 78 */	mr r3, r29
/* 80180740 0017D680  98 1C 00 14 */	stb r0, 0x14(r28)
/* 80180744 0017D684  38 80 00 1E */	li r4, 0x1e
/* 80180748 0017D688  38 A0 00 1E */	li r5, 0x1e
/* 8018074C 0017D68C  38 C0 00 00 */	li r6, 0
/* 80180750 0017D690  81 9D 00 00 */	lwz r12, 0(r29)
/* 80180754 0017D694  38 E0 00 00 */	li r7, 0
/* 80180758 0017D698  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018075C 0017D69C  7D 89 03 A6 */	mtctr r12
/* 80180760 0017D6A0  4E 80 04 21 */	bctrl 
/* 80180764 0017D6A4  38 00 00 00 */	li r0, 0
/* 80180768 0017D6A8  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8018076C 0017D6AC  48 00 06 2C */	b .L_80180D98
.L_80180770:
/* 80180770 0017D6B0  7F A3 EB 78 */	mr r3, r29
/* 80180774 0017D6B4  4B FC 33 91 */	bl control__Q24Game4NaviFv
/* 80180778 0017D6B8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8018077C 0017D6BC  C0 22 A8 A4 */	lfs f1, lbl_80518C04@sda21(r2)
/* 80180780 0017D6C0  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80180784 0017D6C4  C0 03 03 B8 */	lfs f0, 0x3b8(r3)
/* 80180788 0017D6C8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018078C 0017D6CC  EC 59 00 32 */	fmuls f2, f25, f0
/* 80180790 0017D6D0  EC 3A 00 32 */	fmuls f1, f26, f0
/* 80180794 0017D6D4  EC 1B 00 32 */	fmuls f0, f27, f0
/* 80180798 0017D6D8  D0 5D 01 E4 */	stfs f2, 0x1e4(r29)
/* 8018079C 0017D6DC  D0 3D 01 E8 */	stfs f1, 0x1e8(r29)
/* 801807A0 0017D6E0  D0 1D 01 EC */	stfs f0, 0x1ec(r29)
/* 801807A4 0017D6E4  48 00 05 F4 */	b .L_80180D98
.L_801807A8:
/* 801807A8 0017D6E8  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 801807AC 0017D6EC  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 801807B0 0017D6F0  C0 63 02 00 */	lfs f3, 0x200(r3)
/* 801807B4 0017D6F4  C0 43 02 04 */	lfs f2, 0x204(r3)
/* 801807B8 0017D6F8  EC 03 00 F2 */	fmuls f0, f3, f3
/* 801807BC 0017D6FC  C0 83 02 08 */	lfs f4, 0x208(r3)
/* 801807C0 0017D700  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801807C4 0017D704  EC 84 01 32 */	fmuls f4, f4, f4
/* 801807C8 0017D708  EC 00 10 2A */	fadds f0, f0, f2
/* 801807CC 0017D70C  EC 04 00 2A */	fadds f0, f4, f0
/* 801807D0 0017D710  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801807D4 0017D714  40 81 00 20 */	ble .L_801807F4
/* 801807D8 0017D718  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 801807DC 0017D71C  EC 44 00 2A */	fadds f2, f4, f0
/* 801807E0 0017D720  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801807E4 0017D724  40 81 00 14 */	ble .L_801807F8
/* 801807E8 0017D728  FC 00 10 34 */	frsqrte f0, f2
/* 801807EC 0017D72C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 801807F0 0017D730  48 00 00 08 */	b .L_801807F8
.L_801807F4:
/* 801807F4 0017D734  FC 40 08 90 */	fmr f2, f1
.L_801807F8:
/* 801807F8 0017D738  C0 02 A8 FC */	lfs f0, lbl_80518C5C@sda21(r2)
/* 801807FC 0017D73C  3B C0 00 00 */	li r30, 0
/* 80180800 0017D740  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80180804 0017D744  40 81 00 08 */	ble .L_8018080C
/* 80180808 0017D748  3B C0 00 01 */	li r30, 1
.L_8018080C:
/* 8018080C 0017D74C  28 00 00 02 */	cmplwi r0, 2
/* 80180810 0017D750  40 82 00 9C */	bne .L_801808AC
/* 80180814 0017D754  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80180818 0017D758  41 82 00 40 */	beq .L_80180858
/* 8018081C 0017D75C  28 1D 00 00 */	cmplwi r29, 0
/* 80180820 0017D760  7F A6 EB 78 */	mr r6, r29
/* 80180824 0017D764  41 82 00 08 */	beq .L_8018082C
/* 80180828 0017D768  38 DD 01 78 */	addi r6, r29, 0x178
.L_8018082C:
/* 8018082C 0017D76C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80180830 0017D770  7F A3 EB 78 */	mr r3, r29
/* 80180834 0017D774  38 80 00 20 */	li r4, 0x20
/* 80180838 0017D778  38 A0 00 20 */	li r5, 0x20
/* 8018083C 0017D77C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80180840 0017D780  38 E0 00 00 */	li r7, 0
/* 80180844 0017D784  7D 89 03 A6 */	mtctr r12
/* 80180848 0017D788  4E 80 04 21 */	bctrl 
/* 8018084C 0017D78C  38 00 00 00 */	li r0, 0
/* 80180850 0017D790  98 1C 00 14 */	stb r0, 0x14(r28)
/* 80180854 0017D794  48 00 05 44 */	b .L_80180D98
.L_80180858:
/* 80180858 0017D798  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8018085C 0017D79C  7F A3 EB 78 */	mr r3, r29
/* 80180860 0017D7A0  D0 1D 01 E4 */	stfs f0, 0x1e4(r29)
/* 80180864 0017D7A4  D0 1D 01 E8 */	stfs f0, 0x1e8(r29)
/* 80180868 0017D7A8  D0 1D 01 EC */	stfs f0, 0x1ec(r29)
/* 8018086C 0017D7AC  88 9C 00 1D */	lbz r4, 0x1d(r28)
/* 80180870 0017D7B0  4B FB C6 BD */	bl assertMotion__Q24Game8FakePikiFi
/* 80180874 0017D7B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80180878 0017D7B8  40 82 05 20 */	bne .L_80180D98
/* 8018087C 0017D7BC  38 00 00 01 */	li r0, 1
/* 80180880 0017D7C0  7F A3 EB 78 */	mr r3, r29
/* 80180884 0017D7C4  98 1C 00 14 */	stb r0, 0x14(r28)
/* 80180888 0017D7C8  38 80 00 1E */	li r4, 0x1e
/* 8018088C 0017D7CC  38 A0 00 1E */	li r5, 0x1e
/* 80180890 0017D7D0  38 C0 00 00 */	li r6, 0
/* 80180894 0017D7D4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80180898 0017D7D8  38 E0 00 00 */	li r7, 0
/* 8018089C 0017D7DC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801808A0 0017D7E0  7D 89 03 A6 */	mtctr r12
/* 801808A4 0017D7E4  4E 80 04 21 */	bctrl 
/* 801808A8 0017D7E8  48 00 04 F0 */	b .L_80180D98
.L_801808AC:
/* 801808AC 0017D7EC  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 801808B0 0017D7F0  41 82 00 10 */	beq .L_801808C0
/* 801808B4 0017D7F4  38 00 00 00 */	li r0, 0
/* 801808B8 0017D7F8  98 1C 00 1C */	stb r0, 0x1c(r28)
/* 801808BC 0017D7FC  48 00 01 C0 */	b .L_80180A7C
.L_801808C0:
/* 801808C0 0017D800  88 7C 00 1C */	lbz r3, 0x1c(r28)
/* 801808C4 0017D804  28 03 00 5A */	cmplwi r3, 0x5a
/* 801808C8 0017D808  40 80 00 10 */	bge .L_801808D8
/* 801808CC 0017D80C  38 03 00 01 */	addi r0, r3, 1
/* 801808D0 0017D810  98 1C 00 1C */	stb r0, 0x1c(r28)
/* 801808D4 0017D814  48 00 01 A8 */	b .L_80180A7C
.L_801808D8:
/* 801808D8 0017D818  3C 80 80 48 */	lis r4, lbl_8047EB20@ha
/* 801808DC 0017D81C  38 61 00 44 */	addi r3, r1, 0x44
/* 801808E0 0017D820  39 84 EB 20 */	addi r12, r4, lbl_8047EB20@l
/* 801808E4 0017D824  38 80 00 04 */	li r4, 4
/* 801808E8 0017D828  81 6C 00 00 */	lwz r11, 0(r12)
/* 801808EC 0017D82C  81 4C 00 04 */	lwz r10, 4(r12)
/* 801808F0 0017D830  81 2C 00 08 */	lwz r9, 8(r12)
/* 801808F4 0017D834  81 0C 00 0C */	lwz r8, 0xc(r12)
/* 801808F8 0017D838  80 EC 00 10 */	lwz r7, 0x10(r12)
/* 801808FC 0017D83C  80 CC 00 14 */	lwz r6, 0x14(r12)
/* 80180900 0017D840  80 AC 00 18 */	lwz r5, 0x18(r12)
/* 80180904 0017D844  80 0C 00 1C */	lwz r0, 0x1c(r12)
/* 80180908 0017D848  91 61 00 44 */	stw r11, 0x44(r1)
/* 8018090C 0017D84C  91 41 00 48 */	stw r10, 0x48(r1)
/* 80180910 0017D850  91 21 00 4C */	stw r9, 0x4c(r1)
/* 80180914 0017D854  91 01 00 50 */	stw r8, 0x50(r1)
/* 80180918 0017D858  90 E1 00 54 */	stw r7, 0x54(r1)
/* 8018091C 0017D85C  90 C1 00 58 */	stw r6, 0x58(r1)
/* 80180920 0017D860  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 80180924 0017D864  90 01 00 60 */	stw r0, 0x60(r1)
/* 80180928 0017D868  48 07 6F A1 */	bl getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
/* 8018092C 0017D86C  7C 7B 1B 78 */	mr r27, r3
/* 80180930 0017D870  28 1D 00 00 */	cmplwi r29, 0
/* 80180934 0017D874  9B 7C 00 1D */	stb r27, 0x1d(r28)
/* 80180938 0017D878  7F A6 EB 78 */	mr r6, r29
/* 8018093C 0017D87C  41 82 00 08 */	beq .L_80180944
/* 80180940 0017D880  38 DD 01 78 */	addi r6, r29, 0x178
.L_80180944:
/* 80180944 0017D884  81 9D 00 00 */	lwz r12, 0(r29)
/* 80180948 0017D888  7F A3 EB 78 */	mr r3, r29
/* 8018094C 0017D88C  7F 64 DB 78 */	mr r4, r27
/* 80180950 0017D890  7F 65 DB 78 */	mr r5, r27
/* 80180954 0017D894  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80180958 0017D898  38 E0 00 00 */	li r7, 0
/* 8018095C 0017D89C  7D 89 03 A6 */	mtctr r12
/* 80180960 0017D8A0  4E 80 04 21 */	bctrl 
/* 80180964 0017D8A4  38 00 00 02 */	li r0, 2
/* 80180968 0017D8A8  98 1C 00 14 */	stb r0, 0x14(r28)
/* 8018096C 0017D8AC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80180970 0017D8B0  28 03 00 00 */	cmplwi r3, 0
/* 80180974 0017D8B4  41 82 01 08 */	beq .L_80180A7C
/* 80180978 0017D8B8  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 8018097C 0017D8BC  28 00 00 00 */	cmplwi r0, 0
/* 80180980 0017D8C0  40 82 00 FC */	bne .L_80180A7C
/* 80180984 0017D8C4  A0 9D 02 DC */	lhz r4, 0x2dc(r29)
/* 80180988 0017D8C8  2C 04 00 01 */	cmpwi r4, 1
/* 8018098C 0017D8CC  40 82 00 24 */	bne .L_801809B0
/* 80180990 0017D8D0  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80180994 0017D8D4  2C 00 00 00 */	cmpwi r0, 0
/* 80180998 0017D8D8  40 82 00 18 */	bne .L_801809B0
/* 8018099C 0017D8DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801809A0 0017D8E0  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 801809A4 0017D8E4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801809A8 0017D8E8  41 82 00 08 */	beq .L_801809B0
/* 801809AC 0017D8EC  38 84 00 01 */	addi r4, r4, 1
.L_801809B0:
/* 801809B0 0017D8F0  2C 1B 00 32 */	cmpwi r27, 0x32
/* 801809B4 0017D8F4  41 82 00 7C */	beq .L_80180A30
/* 801809B8 0017D8F8  40 80 00 1C */	bge .L_801809D4
/* 801809BC 0017D8FC  2C 1B 00 03 */	cmpwi r27, 3
/* 801809C0 0017D900  41 82 00 20 */	beq .L_801809E0
/* 801809C4 0017D904  40 80 00 B8 */	bge .L_80180A7C
/* 801809C8 0017D908  2C 1B 00 00 */	cmpwi r27, 0
/* 801809CC 0017D90C  41 82 00 3C */	beq .L_80180A08
/* 801809D0 0017D910  48 00 00 AC */	b .L_80180A7C
.L_801809D4:
/* 801809D4 0017D914  2C 1B 00 36 */	cmpwi r27, 0x36
/* 801809D8 0017D918  41 82 00 80 */	beq .L_80180A58
/* 801809DC 0017D91C  48 00 00 A0 */	b .L_80180A7C
.L_801809E0:
/* 801809E0 0017D920  80 7D 02 6C */	lwz r3, 0x26c(r29)
/* 801809E4 0017D924  54 80 10 3A */	slwi r0, r4, 2
/* 801809E8 0017D928  38 9F 00 28 */	addi r4, r31, 0x28
/* 801809EC 0017D92C  38 A0 00 00 */	li r5, 0
/* 801809F0 0017D930  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801809F4 0017D934  7C 84 00 2E */	lwzx r4, r4, r0
/* 801809F8 0017D938  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801809FC 0017D93C  7D 89 03 A6 */	mtctr r12
/* 80180A00 0017D940  4E 80 04 21 */	bctrl 
/* 80180A04 0017D944  48 00 00 78 */	b .L_80180A7C
.L_80180A08:
/* 80180A08 0017D948  80 7D 02 6C */	lwz r3, 0x26c(r29)
/* 80180A0C 0017D94C  54 80 10 3A */	slwi r0, r4, 2
/* 80180A10 0017D950  38 9F 00 40 */	addi r4, r31, 0x40
/* 80180A14 0017D954  38 A0 00 00 */	li r5, 0
/* 80180A18 0017D958  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80180A1C 0017D95C  7C 84 00 2E */	lwzx r4, r4, r0
/* 80180A20 0017D960  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80180A24 0017D964  7D 89 03 A6 */	mtctr r12
/* 80180A28 0017D968  4E 80 04 21 */	bctrl 
/* 80180A2C 0017D96C  48 00 00 50 */	b .L_80180A7C
.L_80180A30:
/* 80180A30 0017D970  80 7D 02 6C */	lwz r3, 0x26c(r29)
/* 80180A34 0017D974  54 80 10 3A */	slwi r0, r4, 2
/* 80180A38 0017D978  38 9F 00 4C */	addi r4, r31, 0x4c
/* 80180A3C 0017D97C  38 A0 00 00 */	li r5, 0
/* 80180A40 0017D980  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80180A44 0017D984  7C 84 00 2E */	lwzx r4, r4, r0
/* 80180A48 0017D988  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80180A4C 0017D98C  7D 89 03 A6 */	mtctr r12
/* 80180A50 0017D990  4E 80 04 21 */	bctrl 
/* 80180A54 0017D994  48 00 00 28 */	b .L_80180A7C
.L_80180A58:
/* 80180A58 0017D998  80 7D 02 6C */	lwz r3, 0x26c(r29)
/* 80180A5C 0017D99C  54 80 10 3A */	slwi r0, r4, 2
/* 80180A60 0017D9A0  38 9F 00 58 */	addi r4, r31, 0x58
/* 80180A64 0017D9A4  38 A0 00 00 */	li r5, 0
/* 80180A68 0017D9A8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80180A6C 0017D9AC  7C 84 00 2E */	lwzx r4, r4, r0
/* 80180A70 0017D9B0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80180A74 0017D9B4  7D 89 03 A6 */	mtctr r12
/* 80180A78 0017D9B8  4E 80 04 21 */	bctrl 
.L_80180A7C:
/* 80180A7C 0017D9BC  80 9C 00 10 */	lwz r4, 0x10(r28)
/* 80180A80 0017D9C0  38 61 00 1C */	addi r3, r1, 0x1c
/* 80180A84 0017D9C4  81 84 00 00 */	lwz r12, 0(r4)
/* 80180A88 0017D9C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80180A8C 0017D9CC  7D 89 03 A6 */	mtctr r12
/* 80180A90 0017D9D0  4E 80 04 21 */	bctrl 
/* 80180A94 0017D9D4  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 80180A98 0017D9D8  C3 E1 00 1C */	lfs f31, 0x1c(r1)
/* 80180A9C 0017D9DC  81 83 00 00 */	lwz r12, 0(r3)
/* 80180AA0 0017D9E0  C3 C1 00 20 */	lfs f30, 0x20(r1)
/* 80180AA4 0017D9E4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80180AA8 0017D9E8  C3 A1 00 24 */	lfs f29, 0x24(r1)
/* 80180AAC 0017D9EC  7D 89 03 A6 */	mtctr r12
/* 80180AB0 0017D9F0  4E 80 04 21 */	bctrl 
/* 80180AB4 0017D9F4  FF 20 08 90 */	fmr f25, f1
/* 80180AB8 0017D9F8  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 80180ABC 0017D9FC  4B FC 09 89 */	bl getStateID__Q24Game4NaviFv
/* 80180AC0 0017DA00  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80180AC4 0017DA04  40 82 00 C0 */	bne .L_80180B84
/* 80180AC8 0017DA08  2C 03 00 05 */	cmpwi r3, 5
/* 80180ACC 0017DA0C  41 82 00 0C */	beq .L_80180AD8
/* 80180AD0 0017DA10  2C 03 00 06 */	cmpwi r3, 6
/* 80180AD4 0017DA14  40 82 00 B0 */	bne .L_80180B84
.L_80180AD8:
/* 80180AD8 0017DA18  C0 22 A9 00 */	lfs f1, lbl_80518C60@sda21(r2)
/* 80180ADC 0017DA1C  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80180AE0 0017DA20  EC A1 C8 2A */	fadds f5, f1, f25
/* 80180AE4 0017DA24  FC 20 28 90 */	fmr f1, f5
/* 80180AE8 0017DA28  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80180AEC 0017DA2C  40 80 00 08 */	bge .L_80180AF4
/* 80180AF0 0017DA30  FC 20 28 50 */	fneg f1, f5
.L_80180AF4:
/* 80180AF4 0017DA34  C0 42 A8 88 */	lfs f2, lbl_80518BE8@sda21(r2)
/* 80180AF8 0017DA38  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80180AFC 0017DA3C  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80180B00 0017DA40  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80180B04 0017DA44  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80180B08 0017DA48  C0 62 A9 04 */	lfs f3, lbl_80518C64@sda21(r2)
/* 80180B0C 0017DA4C  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80180B10 0017DA50  FC 00 08 1E */	fctiwz f0, f1
/* 80180B14 0017DA54  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 80180B18 0017DA58  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80180B1C 0017DA5C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80180B20 0017DA60  7C 64 02 14 */	add r3, r4, r0
/* 80180B24 0017DA64  C0 03 00 04 */	lfs f0, 4(r3)
/* 80180B28 0017DA68  EC 83 00 32 */	fmuls f4, f3, f0
/* 80180B2C 0017DA6C  40 80 00 28 */	bge .L_80180B54
/* 80180B30 0017DA70  C0 02 A8 8C */	lfs f0, lbl_80518BEC@sda21(r2)
/* 80180B34 0017DA74  EC 05 00 32 */	fmuls f0, f5, f0
/* 80180B38 0017DA78  FC 00 00 1E */	fctiwz f0, f0
/* 80180B3C 0017DA7C  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 80180B40 0017DA80  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80180B44 0017DA84  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80180B48 0017DA88  7C 04 04 2E */	lfsx f0, r4, r0
/* 80180B4C 0017DA8C  FC 00 00 50 */	fneg f0, f0
/* 80180B50 0017DA90  48 00 00 1C */	b .L_80180B6C
.L_80180B54:
/* 80180B54 0017DA94  EC 05 00 B2 */	fmuls f0, f5, f2
/* 80180B58 0017DA98  FC 00 00 1E */	fctiwz f0, f0
/* 80180B5C 0017DA9C  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 80180B60 0017DAA0  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80180B64 0017DAA4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80180B68 0017DAA8  7C 04 04 2E */	lfsx f0, r4, r0
.L_80180B6C:
/* 80180B6C 0017DAAC  EC 23 00 32 */	fmuls f1, f3, f0
/* 80180B70 0017DAB0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80180B74 0017DAB4  EF BD 20 2A */	fadds f29, f29, f4
/* 80180B78 0017DAB8  EF DE 00 2A */	fadds f30, f30, f0
/* 80180B7C 0017DABC  EF FF 08 2A */	fadds f31, f31, f1
/* 80180B80 0017DAC0  48 00 00 B8 */	b .L_80180C38
.L_80180B84:
/* 80180B84 0017DAC4  2C 03 00 02 */	cmpwi r3, 2
/* 80180B88 0017DAC8  40 82 00 B0 */	bne .L_80180C38
/* 80180B8C 0017DACC  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 80180B90 0017DAD0  FC 20 C8 90 */	fmr f1, f25
/* 80180B94 0017DAD4  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80180B98 0017DAD8  80 63 02 54 */	lwz r3, 0x254(r3)
/* 80180B9C 0017DADC  FC 19 00 40 */	fcmpo cr0, f25, f0
/* 80180BA0 0017DAE0  C0 03 00 B0 */	lfs f0, 0xb0(r3)
/* 80180BA4 0017DAE4  FC 80 00 50 */	fneg f4, f0
/* 80180BA8 0017DAE8  40 80 00 08 */	bge .L_80180BB0
/* 80180BAC 0017DAEC  FC 20 C8 50 */	fneg f1, f25
.L_80180BB0:
/* 80180BB0 0017DAF0  C0 42 A8 88 */	lfs f2, lbl_80518BE8@sda21(r2)
/* 80180BB4 0017DAF4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80180BB8 0017DAF8  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80180BBC 0017DAFC  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80180BC0 0017DB00  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80180BC4 0017DB04  FC 19 00 40 */	fcmpo cr0, f25, f0
/* 80180BC8 0017DB08  FC 00 08 1E */	fctiwz f0, f1
/* 80180BCC 0017DB0C  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 80180BD0 0017DB10  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80180BD4 0017DB14  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80180BD8 0017DB18  7C 64 02 14 */	add r3, r4, r0
/* 80180BDC 0017DB1C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80180BE0 0017DB20  EC 64 00 32 */	fmuls f3, f4, f0
/* 80180BE4 0017DB24  40 80 00 28 */	bge .L_80180C0C
/* 80180BE8 0017DB28  C0 02 A8 8C */	lfs f0, lbl_80518BEC@sda21(r2)
/* 80180BEC 0017DB2C  EC 19 00 32 */	fmuls f0, f25, f0
/* 80180BF0 0017DB30  FC 00 00 1E */	fctiwz f0, f0
/* 80180BF4 0017DB34  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 80180BF8 0017DB38  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80180BFC 0017DB3C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80180C00 0017DB40  7C 04 04 2E */	lfsx f0, r4, r0
/* 80180C04 0017DB44  FC 00 00 50 */	fneg f0, f0
/* 80180C08 0017DB48  48 00 00 1C */	b .L_80180C24
.L_80180C0C:
/* 80180C0C 0017DB4C  EC 19 00 B2 */	fmuls f0, f25, f2
/* 80180C10 0017DB50  FC 00 00 1E */	fctiwz f0, f0
/* 80180C14 0017DB54  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 80180C18 0017DB58  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80180C1C 0017DB5C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80180C20 0017DB60  7C 04 04 2E */	lfsx f0, r4, r0
.L_80180C24:
/* 80180C24 0017DB64  EC 24 00 32 */	fmuls f1, f4, f0
/* 80180C28 0017DB68  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80180C2C 0017DB6C  EF BD 18 2A */	fadds f29, f29, f3
/* 80180C30 0017DB70  EF DE 00 2A */	fadds f30, f30, f0
/* 80180C34 0017DB74  EF FF 08 2A */	fadds f31, f31, f1
.L_80180C38:
/* 80180C38 0017DB78  7F A4 EB 78 */	mr r4, r29
/* 80180C3C 0017DB7C  80 BC 00 10 */	lwz r5, 0x10(r28)
/* 80180C40 0017DB80  81 9D 00 00 */	lwz r12, 0(r29)
/* 80180C44 0017DB84  38 61 00 10 */	addi r3, r1, 0x10
/* 80180C48 0017DB88  C3 85 01 E4 */	lfs f28, 0x1e4(r5)
/* 80180C4C 0017DB8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80180C50 0017DB90  C3 65 01 E8 */	lfs f27, 0x1e8(r5)
/* 80180C54 0017DB94  C3 45 01 EC */	lfs f26, 0x1ec(r5)
/* 80180C58 0017DB98  7D 89 03 A6 */	mtctr r12
/* 80180C5C 0017DB9C  4E 80 04 21 */	bctrl 
/* 80180C60 0017DBA0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80180C64 0017DBA4  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80180C68 0017DBA8  EF DE 00 28 */	fsubs f30, f30, f0
/* 80180C6C 0017DBAC  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80180C70 0017DBB0  EF 3D 10 28 */	fsubs f25, f29, f2
/* 80180C74 0017DBB4  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80180C78 0017DBB8  EF BF 08 28 */	fsubs f29, f31, f1
/* 80180C7C 0017DBBC  EC 3E 07 B2 */	fmuls f1, f30, f30
/* 80180C80 0017DBC0  EC 59 06 72 */	fmuls f2, f25, f25
/* 80180C84 0017DBC4  EC 3D 0F 7A */	fmadds f1, f29, f29, f1
/* 80180C88 0017DBC8  EF E2 08 2A */	fadds f31, f2, f1
/* 80180C8C 0017DBCC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80180C90 0017DBD0  40 81 00 14 */	ble .L_80180CA4
/* 80180C94 0017DBD4  40 81 00 14 */	ble .L_80180CA8
/* 80180C98 0017DBD8  FC 00 F8 34 */	frsqrte f0, f31
/* 80180C9C 0017DBDC  EF E0 07 F2 */	fmuls f31, f0, f31
/* 80180CA0 0017DBE0  48 00 00 08 */	b .L_80180CA8
.L_80180CA4:
/* 80180CA4 0017DBE4  FF E0 00 90 */	fmr f31, f0
.L_80180CA8:
/* 80180CA8 0017DBE8  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80180CAC 0017DBEC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80180CB0 0017DBF0  40 81 00 1C */	ble .L_80180CCC
/* 80180CB4 0017DBF4  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80180CB8 0017DBF8  EC 00 F8 24 */	fdivs f0, f0, f31
/* 80180CBC 0017DBFC  EF BD 00 32 */	fmuls f29, f29, f0
/* 80180CC0 0017DC00  EF DE 00 32 */	fmuls f30, f30, f0
/* 80180CC4 0017DC04  EF 39 00 32 */	fmuls f25, f25, f0
/* 80180CC8 0017DC08  48 00 00 08 */	b .L_80180CD0
.L_80180CCC:
/* 80180CCC 0017DC0C  FF E0 00 90 */	fmr f31, f0
.L_80180CD0:
/* 80180CD0 0017DC10  7F A3 EB 78 */	mr r3, r29
/* 80180CD4 0017DC14  4B FC 07 D1 */	bl getOlimarData__Q24Game4NaviFv
/* 80180CD8 0017DC18  38 80 00 07 */	li r4, 7
/* 80180CDC 0017DC1C  48 06 52 F5 */	bl hasItem__Q24Game10OlimarDataFi
/* 80180CE0 0017DC20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80180CE4 0017DC24  41 82 00 14 */	beq .L_80180CF8
/* 80180CE8 0017DC28  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80180CEC 0017DC2C  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80180CF0 0017DC30  C0 23 0B B0 */	lfs f1, 0xbb0(r3)
/* 80180CF4 0017DC34  48 00 00 10 */	b .L_80180D04
.L_80180CF8:
/* 80180CF8 0017DC38  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80180CFC 0017DC3C  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80180D00 0017DC40  C0 23 03 B8 */	lfs f1, 0x3b8(r3)
.L_80180D04:
/* 80180D04 0017DC44  C0 02 A9 04 */	lfs f0, lbl_80518C64@sda21(r2)
/* 80180D08 0017DC48  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80180D0C 0017DC4C  40 80 00 08 */	bge .L_80180D14
/* 80180D10 0017DC50  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
.L_80180D14:
/* 80180D14 0017DC54  C0 02 A9 08 */	lfs f0, lbl_80518C68@sda21(r2)
/* 80180D18 0017DC58  EF BD 00 72 */	fmuls f29, f29, f1
/* 80180D1C 0017DC5C  EF DE 00 72 */	fmuls f30, f30, f1
/* 80180D20 0017DC60  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80180D24 0017DC64  EF 39 00 72 */	fmuls f25, f25, f1
/* 80180D28 0017DC68  40 80 00 2C */	bge .L_80180D54
/* 80180D2C 0017DC6C  C0 02 A8 A4 */	lfs f0, lbl_80518C04@sda21(r2)
/* 80180D30 0017DC70  EC BD 00 32 */	fmuls f5, f29, f0
/* 80180D34 0017DC74  EC 9C 00 32 */	fmuls f4, f28, f0
/* 80180D38 0017DC78  EC 7E 00 32 */	fmuls f3, f30, f0
/* 80180D3C 0017DC7C  EC 5B 00 32 */	fmuls f2, f27, f0
/* 80180D40 0017DC80  EC 39 00 32 */	fmuls f1, f25, f0
/* 80180D44 0017DC84  EC 1A 00 32 */	fmuls f0, f26, f0
/* 80180D48 0017DC88  EF A5 20 2A */	fadds f29, f5, f4
/* 80180D4C 0017DC8C  EF C3 10 2A */	fadds f30, f3, f2
/* 80180D50 0017DC90  EF 21 00 2A */	fadds f25, f1, f0
.L_80180D54:
/* 80180D54 0017DC94  C0 02 A9 0C */	lfs f0, lbl_80518C6C@sda21(r2)
/* 80180D58 0017DC98  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80180D5C 0017DC9C  40 81 00 28 */	ble .L_80180D84
/* 80180D60 0017DCA0  7F 83 E3 78 */	mr r3, r28
/* 80180D64 0017DCA4  7F A4 EB 78 */	mr r4, r29
/* 80180D68 0017DCA8  81 9C 00 00 */	lwz r12, 0(r28)
/* 80180D6C 0017DCAC  38 A0 00 00 */	li r5, 0
/* 80180D70 0017DCB0  38 C0 00 00 */	li r6, 0
/* 80180D74 0017DCB4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80180D78 0017DCB8  7D 89 03 A6 */	mtctr r12
/* 80180D7C 0017DCBC  4E 80 04 21 */	bctrl 
/* 80180D80 0017DCC0  48 00 00 18 */	b .L_80180D98
.L_80180D84:
/* 80180D84 0017DCC4  7F A3 EB 78 */	mr r3, r29
/* 80180D88 0017DCC8  4B FC 2D 7D */	bl control__Q24Game4NaviFv
/* 80180D8C 0017DCCC  D3 BD 01 E4 */	stfs f29, 0x1e4(r29)
/* 80180D90 0017DCD0  D3 DD 01 E8 */	stfs f30, 0x1e8(r29)
/* 80180D94 0017DCD4  D3 3D 01 EC */	stfs f25, 0x1ec(r29)
.L_80180D98:
/* 80180D98 0017DCD8  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 80180D9C 0017DCDC  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 80180DA0 0017DCE0  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 80180DA4 0017DCE4  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 80180DA8 0017DCE8  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 80180DAC 0017DCEC  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 80180DB0 0017DCF0  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 80180DB4 0017DCF4  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 80180DB8 0017DCF8  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 80180DBC 0017DCFC  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 80180DC0 0017DD00  E3 41 00 B8 */	psq_l f26, 184(r1), 0, qr0
/* 80180DC4 0017DD04  CB 41 00 B0 */	lfd f26, 0xb0(r1)
/* 80180DC8 0017DD08  E3 21 00 A8 */	psq_l f25, 168(r1), 0, qr0
/* 80180DCC 0017DD0C  CB 21 00 A0 */	lfd f25, 0xa0(r1)
/* 80180DD0 0017DD10  BB 61 00 8C */	lmw r27, 0x8c(r1)
/* 80180DD4 0017DD14  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80180DD8 0017DD18  7C 08 03 A6 */	mtlr r0
/* 80180DDC 0017DD1C  38 21 01 10 */	addi r1, r1, 0x110
/* 80180DE0 0017DD20  4E 80 00 20 */	blr 
.endfn exec__Q24Game15NaviFollowStateFPQ24Game4Navi

.fn cleanup__Q24Game15NaviFollowStateFPQ24Game4Navi, global
/* 80180DE4 0017DD24  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15NaviFollowStateFPQ24Game4Navi

.fn __ct__Q24Game14NaviPunchStateFv, global
/* 80180DE8 0017DD28  3C 80 80 4B */	lis r4, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 80180DEC 0017DD2C  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 80180DF0 0017DD30  38 04 37 4C */	addi r0, r4, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 80180DF4 0017DD34  3C 80 80 4B */	lis r4, __vt__Q24Game14NaviPunchState@ha
/* 80180DF8 0017DD38  90 03 00 00 */	stw r0, 0(r3)
/* 80180DFC 0017DD3C  38 00 00 02 */	li r0, 2
/* 80180E00 0017DD40  38 C0 00 00 */	li r6, 0
/* 80180E04 0017DD44  38 A5 37 84 */	addi r5, r5, __vt__Q24Game9NaviState@l
/* 80180E08 0017DD48  90 03 00 04 */	stw r0, 4(r3)
/* 80180E0C 0017DD4C  38 04 35 3C */	addi r0, r4, __vt__Q24Game14NaviPunchState@l
/* 80180E10 0017DD50  90 C3 00 08 */	stw r6, 8(r3)
/* 80180E14 0017DD54  90 A3 00 00 */	stw r5, 0(r3)
/* 80180E18 0017DD58  90 03 00 00 */	stw r0, 0(r3)
/* 80180E1C 0017DD5C  98 C3 00 24 */	stb r6, 0x24(r3)
/* 80180E20 0017DD60  90 C3 00 28 */	stw r6, 0x28(r3)
/* 80180E24 0017DD64  4E 80 00 20 */	blr 
.endfn __ct__Q24Game14NaviPunchStateFv

.fn init__Q24Game14NaviPunchStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80180E28 0017DD68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80180E2C 0017DD6C  7C 08 02 A6 */	mflr r0
/* 80180E30 0017DD70  28 05 00 00 */	cmplwi r5, 0
/* 80180E34 0017DD74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80180E38 0017DD78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80180E3C 0017DD7C  7C 9F 23 78 */	mr r31, r4
/* 80180E40 0017DD80  93 C1 00 08 */	stw r30, 8(r1)
/* 80180E44 0017DD84  7C 7E 1B 78 */	mr r30, r3
/* 80180E48 0017DD88  41 82 00 18 */	beq .L_80180E60
/* 80180E4C 0017DD8C  88 05 00 00 */	lbz r0, 0(r5)
/* 80180E50 0017DD90  98 1E 00 24 */	stb r0, 0x24(r30)
/* 80180E54 0017DD94  80 05 00 04 */	lwz r0, 4(r5)
/* 80180E58 0017DD98  90 1E 00 28 */	stw r0, 0x28(r30)
/* 80180E5C 0017DD9C  48 00 00 10 */	b .L_80180E6C
.L_80180E60:
/* 80180E60 0017DDA0  38 00 00 00 */	li r0, 0
/* 80180E64 0017DDA4  98 1E 00 24 */	stb r0, 0x24(r30)
/* 80180E68 0017DDA8  90 1E 00 28 */	stw r0, 0x28(r30)
.L_80180E6C:
/* 80180E6C 0017DDAC  28 1F 00 00 */	cmplwi r31, 0
/* 80180E70 0017DDB0  7F E6 FB 78 */	mr r6, r31
/* 80180E74 0017DDB4  41 82 00 08 */	beq .L_80180E7C
/* 80180E78 0017DDB8  38 DF 01 78 */	addi r6, r31, 0x178
.L_80180E7C:
/* 80180E7C 0017DDBC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80180E80 0017DDC0  7F E3 FB 78 */	mr r3, r31
/* 80180E84 0017DDC4  38 80 00 40 */	li r4, 0x40
/* 80180E88 0017DDC8  38 A0 00 40 */	li r5, 0x40
/* 80180E8C 0017DDCC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80180E90 0017DDD0  38 E0 00 00 */	li r7, 0
/* 80180E94 0017DDD4  7D 89 03 A6 */	mtctr r12
/* 80180E98 0017DDD8  4E 80 04 21 */	bctrl 
/* 80180E9C 0017DDDC  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80180EA0 0017DDE0  38 80 08 00 */	li r4, 0x800
/* 80180EA4 0017DDE4  38 A0 00 00 */	li r5, 0
/* 80180EA8 0017DDE8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80180EAC 0017DDEC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80180EB0 0017DDF0  7D 89 03 A6 */	mtctr r12
/* 80180EB4 0017DDF4  4E 80 04 21 */	bctrl 
/* 80180EB8 0017DDF8  7F E3 FB 78 */	mr r3, r31
/* 80180EBC 0017DDFC  4B FB C0 99 */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 80180EC0 0017DE00  38 00 00 00 */	li r0, 0
/* 80180EC4 0017DE04  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80180EC8 0017DE08  93 FE 00 18 */	stw r31, 0x18(r30)
/* 80180ECC 0017DE0C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80180ED0 0017DE10  98 1E 00 1C */	stb r0, 0x1c(r30)
/* 80180ED4 0017DE14  98 1E 00 1E */	stb r0, 0x1e(r30)
/* 80180ED8 0017DE18  98 1E 00 1D */	stb r0, 0x1d(r30)
/* 80180EDC 0017DE1C  98 1E 00 20 */	stb r0, 0x20(r30)
/* 80180EE0 0017DE20  98 1E 00 1F */	stb r0, 0x1f(r30)
/* 80180EE4 0017DE24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80180EE8 0017DE28  83 C1 00 08 */	lwz r30, 8(r1)
/* 80180EEC 0017DE2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80180EF0 0017DE30  7C 08 03 A6 */	mtlr r0
/* 80180EF4 0017DE34  38 21 00 10 */	addi r1, r1, 0x10
/* 80180EF8 0017DE38  4E 80 00 20 */	blr 
.endfn init__Q24Game14NaviPunchStateFPQ24Game4NaviPQ24Game8StateArg

.fn hitCallback__Q24Game14NaviPunchStateFP8CollPart, global
/* 80180EFC 0017DE3C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80180F00 0017DE40  7C 08 02 A6 */	mflr r0
/* 80180F04 0017DE44  90 01 00 84 */	stw r0, 0x84(r1)
/* 80180F08 0017DE48  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80180F0C 0017DE4C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80180F10 0017DE50  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80180F14 0017DE54  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80180F18 0017DE58  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80180F1C 0017DE5C  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 80180F20 0017DE60  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80180F24 0017DE64  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80180F28 0017DE68  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80180F2C 0017DE6C  7C 7E 1B 78 */	mr r30, r3
/* 80180F30 0017DE70  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80180F34 0017DE74  7C 9D 23 78 */	mr r29, r4
/* 80180F38 0017DE78  38 80 00 23 */	li r4, 0x23
/* 80180F3C 0017DE7C  48 06 64 A5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80180F40 0017DE80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80180F44 0017DE84  41 82 02 84 */	beq .L_801811C8
/* 80180F48 0017DE88  28 1D 00 00 */	cmplwi r29, 0
/* 80180F4C 0017DE8C  41 82 02 7C */	beq .L_801811C8
/* 80180F50 0017DE90  80 DE 00 18 */	lwz r6, 0x18(r30)
/* 80180F54 0017DE94  3B E0 00 00 */	li r31, 0
/* 80180F58 0017DE98  C0 22 A9 10 */	lfs f1, lbl_80518C70@sda21(r2)
/* 80180F5C 0017DE9C  80 66 01 B8 */	lwz r3, 0x1b8(r6)
/* 80180F60 0017DEA0  28 03 00 00 */	cmplwi r3, 0
/* 80180F64 0017DEA4  41 82 00 0C */	beq .L_80180F70
/* 80180F68 0017DEA8  A8 03 00 20 */	lha r0, 0x20(r3)
/* 80180F6C 0017DEAC  48 00 00 08 */	b .L_80180F74
.L_80180F70:
/* 80180F70 0017DEB0  38 00 FF FF */	li r0, -1
.L_80180F74:
/* 80180F74 0017DEB4  2C 00 00 42 */	cmpwi r0, 0x42
/* 80180F78 0017DEB8  40 82 00 10 */	bne .L_80180F88
/* 80180F7C 0017DEBC  C0 02 A9 14 */	lfs f0, lbl_80518C74@sda21(r2)
/* 80180F80 0017DEC0  3B E0 00 01 */	li r31, 1
/* 80180F84 0017DEC4  EC 21 00 32 */	fmuls f1, f1, f0
.L_80180F88:
/* 80180F88 0017DEC8  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80180F8C 0017DECC  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 80180F90 0017DED0  38 A4 A3 00 */	addi r5, r4, __vt__Q24Game11Interaction@l
/* 80180F94 0017DED4  90 C1 00 28 */	stw r6, 0x28(r1)
/* 80180F98 0017DED8  38 03 4D E0 */	addi r0, r3, __vt__Q24Game14InteractAttack@l
/* 80180F9C 0017DEDC  38 81 00 24 */	addi r4, r1, 0x24
/* 80180FA0 0017DEE0  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80180FA4 0017DEE4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80180FA8 0017DEE8  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80180FAC 0017DEEC  93 A1 00 30 */	stw r29, 0x30(r1)
/* 80180FB0 0017DEF0  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80180FB4 0017DEF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80180FB8 0017DEF8  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80180FBC 0017DEFC  7D 89 03 A6 */	mtctr r12
/* 80180FC0 0017DF00  4E 80 04 21 */	bctrl 
/* 80180FC4 0017DF04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80180FC8 0017DF08  41 82 02 00 */	beq .L_801811C8
/* 80180FCC 0017DF0C  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 80180FD0 0017DF10  3C 60 72 68 */	lis r3, 0x72686E64@ha
/* 80180FD4 0017DF14  C3 FD 00 4C */	lfs f31, 0x4c(r29)
/* 80180FD8 0017DF18  38 83 6E 64 */	addi r4, r3, 0x72686E64@l
/* 80180FDC 0017DF1C  C3 DD 00 50 */	lfs f30, 0x50(r29)
/* 80180FE0 0017DF20  C3 BD 00 54 */	lfs f29, 0x54(r29)
/* 80180FE4 0017DF24  80 65 01 14 */	lwz r3, 0x114(r5)
/* 80180FE8 0017DF28  4B FB 4E 5D */	bl getCollPart__8CollTreeFUl
/* 80180FEC 0017DF2C  C0 83 00 50 */	lfs f4, 0x50(r3)
/* 80180FF0 0017DF30  C0 A3 00 54 */	lfs f5, 0x54(r3)
/* 80180FF4 0017DF34  EC FE 20 28 */	fsubs f7, f30, f4
/* 80180FF8 0017DF38  C0 63 00 4C */	lfs f3, 0x4c(r3)
/* 80180FFC 0017DF3C  ED 1D 28 28 */	fsubs f8, f29, f5
/* 80181000 0017DF40  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80181004 0017DF44  EC DF 18 28 */	fsubs f6, f31, f3
/* 80181008 0017DF48  EC 27 01 F2 */	fmuls f1, f7, f7
/* 8018100C 0017DF4C  EC 48 02 32 */	fmuls f2, f8, f8
/* 80181010 0017DF50  EC 26 09 BA */	fmadds f1, f6, f6, f1
/* 80181014 0017DF54  EC 22 08 2A */	fadds f1, f2, f1
/* 80181018 0017DF58  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018101C 0017DF5C  40 81 00 14 */	ble .L_80181030
/* 80181020 0017DF60  40 81 00 14 */	ble .L_80181034
/* 80181024 0017DF64  FC 00 08 34 */	frsqrte f0, f1
/* 80181028 0017DF68  EC 20 00 72 */	fmuls f1, f0, f1
/* 8018102C 0017DF6C  48 00 00 08 */	b .L_80181034
.L_80181030:
/* 80181030 0017DF70  FC 20 00 90 */	fmr f1, f0
.L_80181034:
/* 80181034 0017DF74  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80181038 0017DF78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018103C 0017DF7C  40 81 00 18 */	ble .L_80181054
/* 80181040 0017DF80  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80181044 0017DF84  EC 00 08 24 */	fdivs f0, f0, f1
/* 80181048 0017DF88  EC C6 00 32 */	fmuls f6, f6, f0
/* 8018104C 0017DF8C  EC E7 00 32 */	fmuls f7, f7, f0
/* 80181050 0017DF90  ED 08 00 32 */	fmuls f8, f8, f0
.L_80181054:
/* 80181054 0017DF94  C0 02 A8 F4 */	lfs f0, lbl_80518C54@sda21(r2)
/* 80181058 0017DF98  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8018105C 0017DF9C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80181060 0017DFA0  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 80181064 0017DFA4  EC C6 00 32 */	fmuls f6, f6, f0
/* 80181068 0017DFA8  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8018106C 0017DFAC  EC E7 00 32 */	fmuls f7, f7, f0
/* 80181070 0017DFB0  3C 60 80 4B */	lis r3, __vt__Q23efx11TOrimapunch@ha
/* 80181074 0017DFB4  ED 08 00 32 */	fmuls f8, f8, f0
/* 80181078 0017DFB8  90 01 00 08 */	stw r0, 8(r1)
/* 8018107C 0017DFBC  EC C6 18 2A */	fadds f6, f6, f3
/* 80181080 0017DFC0  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 80181084 0017DFC4  EC E7 20 2A */	fadds f7, f7, f4
/* 80181088 0017DFC8  38 85 A7 EC */	addi r4, r5, __vt__Q23efx3Arg@l
/* 8018108C 0017DFCC  ED 08 28 2A */	fadds f8, f8, f5
/* 80181090 0017DFD0  38 C0 02 6D */	li r6, 0x26d
/* 80181094 0017DFD4  38 A0 00 00 */	li r5, 0
/* 80181098 0017DFD8  90 01 00 08 */	stw r0, 8(r1)
/* 8018109C 0017DFDC  38 03 35 08 */	addi r0, r3, __vt__Q23efx11TOrimapunch@l
/* 801810A0 0017DFE0  38 61 00 08 */	addi r3, r1, 8
/* 801810A4 0017DFE4  90 81 00 14 */	stw r4, 0x14(r1)
/* 801810A8 0017DFE8  38 81 00 14 */	addi r4, r1, 0x14
/* 801810AC 0017DFEC  D0 C1 00 18 */	stfs f6, 0x18(r1)
/* 801810B0 0017DFF0  D0 E1 00 1C */	stfs f7, 0x1c(r1)
/* 801810B4 0017DFF4  D1 01 00 20 */	stfs f8, 0x20(r1)
/* 801810B8 0017DFF8  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 801810BC 0017DFFC  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801810C0 0017E000  90 01 00 08 */	stw r0, 8(r1)
/* 801810C4 0017E004  48 22 DE C1 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 801810C8 0017E008  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801810CC 0017E00C  41 82 00 28 */	beq .L_801810F4
/* 801810D0 0017E010  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 801810D4 0017E014  38 80 28 28 */	li r4, 0x2828
/* 801810D8 0017E018  38 A0 00 00 */	li r5, 0
/* 801810DC 0017E01C  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 801810E0 0017E020  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801810E4 0017E024  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801810E8 0017E028  7D 89 03 A6 */	mtctr r12
/* 801810EC 0017E02C  4E 80 04 21 */	bctrl 
/* 801810F0 0017E030  48 00 00 24 */	b .L_80181114
.L_801810F4:
/* 801810F4 0017E034  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 801810F8 0017E038  38 80 08 01 */	li r4, 0x801
/* 801810FC 0017E03C  38 A0 00 00 */	li r5, 0
/* 80181100 0017E040  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 80181104 0017E044  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80181108 0017E048  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8018110C 0017E04C  7D 89 03 A6 */	mtctr r12
/* 80181110 0017E050  4E 80 04 21 */	bctrl 
.L_80181114:
/* 80181114 0017E054  38 00 00 01 */	li r0, 1
/* 80181118 0017E058  98 1E 00 1F */	stb r0, 0x1f(r30)
/* 8018111C 0017E05C  88 1E 00 24 */	lbz r0, 0x24(r30)
/* 80181120 0017E060  28 00 00 00 */	cmplwi r0, 0
/* 80181124 0017E064  40 82 00 A4 */	bne .L_801811C8
/* 80181128 0017E068  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8018112C 0017E06C  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 80181130 0017E070  81 83 00 00 */	lwz r12, 0(r3)
/* 80181134 0017E074  A0 04 02 DC */	lhz r0, 0x2dc(r4)
/* 80181138 0017E078  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8018113C 0017E07C  20 80 00 01 */	subfic r4, r0, 1
/* 80181140 0017E080  7D 89 03 A6 */	mtctr r12
/* 80181144 0017E084  4E 80 04 21 */	bctrl 
/* 80181148 0017E088  7C 7F 1B 79 */	or. r31, r3, r3
/* 8018114C 0017E08C  41 82 00 7C */	beq .L_801811C8
/* 80181150 0017E090  81 83 00 00 */	lwz r12, 0(r3)
/* 80181154 0017E094  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80181158 0017E098  7D 89 03 A6 */	mtctr r12
/* 8018115C 0017E09C  4E 80 04 21 */	bctrl 
/* 80181160 0017E0A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80181164 0017E0A4  41 82 00 64 */	beq .L_801811C8
/* 80181168 0017E0A8  7F E3 FB 78 */	mr r3, r31
/* 8018116C 0017E0AC  4B FC 02 D9 */	bl getStateID__Q24Game4NaviFv
/* 80181170 0017E0B0  2C 03 00 01 */	cmpwi r3, 1
/* 80181174 0017E0B4  40 82 00 54 */	bne .L_801811C8
/* 80181178 0017E0B8  83 FF 02 74 */	lwz r31, 0x274(r31)
/* 8018117C 0017E0BC  83 DE 00 14 */	lwz r30, 0x14(r30)
/* 80181180 0017E0C0  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 80181184 0017E0C4  28 00 00 01 */	cmplwi r0, 1
/* 80181188 0017E0C8  41 82 00 0C */	beq .L_80181194
/* 8018118C 0017E0CC  28 00 00 02 */	cmplwi r0, 2
/* 80181190 0017E0D0  40 82 00 38 */	bne .L_801811C8
.L_80181194:
/* 80181194 0017E0D4  7F C3 F3 78 */	mr r3, r30
/* 80181198 0017E0D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018119C 0017E0DC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801811A0 0017E0E0  7D 89 03 A6 */	mtctr r12
/* 801811A4 0017E0E4  4E 80 04 21 */	bctrl 
/* 801811A8 0017E0E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801811AC 0017E0EC  41 82 00 1C */	beq .L_801811C8
/* 801811B0 0017E0F0  93 DF 00 18 */	stw r30, 0x18(r31)
/* 801811B4 0017E0F4  38 60 00 03 */	li r3, 3
/* 801811B8 0017E0F8  38 00 00 00 */	li r0, 0
/* 801811BC 0017E0FC  98 7F 00 14 */	stb r3, 0x14(r31)
/* 801811C0 0017E100  98 1F 00 1E */	stb r0, 0x1e(r31)
/* 801811C4 0017E104  98 1F 00 1C */	stb r0, 0x1c(r31)
.L_801811C8:
/* 801811C8 0017E108  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 801811CC 0017E10C  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 801811D0 0017E110  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 801811D4 0017E114  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 801811D8 0017E118  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 801811DC 0017E11C  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 801811E0 0017E120  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801811E4 0017E124  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801811E8 0017E128  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801811EC 0017E12C  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 801811F0 0017E130  7C 08 03 A6 */	mtlr r0
/* 801811F4 0017E134  38 21 00 80 */	addi r1, r1, 0x80
/* 801811F8 0017E138  4E 80 00 20 */	blr 
.endfn hitCallback__Q24Game14NaviPunchStateFP8CollPart

.fn onKeyEvent__Q24Game14NaviPunchStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 801811FC 0017E13C  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 80181200 0017E140  7C 08 02 A6 */	mflr r0
/* 80181204 0017E144  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80181208 0017E148  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 8018120C 0017E14C  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 80181210 0017E150  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 80181214 0017E154  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 80181218 0017E158  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 8018121C 0017E15C  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 80181220 0017E160  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 80181224 0017E164  F3 81 00 B8 */	psq_st f28, 184(r1), 0, qr0
/* 80181228 0017E168  93 E1 00 AC */	stw r31, 0xac(r1)
/* 8018122C 0017E16C  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 80181230 0017E170  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 80181234 0017E174  7C BD 2B 78 */	mr r29, r5
/* 80181238 0017E178  7C 7E 1B 78 */	mr r30, r3
/* 8018123C 0017E17C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80181240 0017E180  7C 9F 23 78 */	mr r31, r4
/* 80181244 0017E184  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80181248 0017E188  41 82 01 C4 */	beq .L_8018140C
/* 8018124C 0017E18C  40 80 03 18 */	bge .L_80181564
/* 80181250 0017E190  2C 00 00 02 */	cmpwi r0, 2
/* 80181254 0017E194  41 82 00 08 */	beq .L_8018125C
/* 80181258 0017E198  48 00 03 0C */	b .L_80181564
.L_8018125C:
/* 8018125C 0017E19C  38 00 00 01 */	li r0, 1
/* 80181260 0017E1A0  7F E3 FB 78 */	mr r3, r31
/* 80181264 0017E1A4  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80181268 0017E1A8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018126C 0017E1AC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80181270 0017E1B0  7D 89 03 A6 */	mtctr r12
/* 80181274 0017E1B4  4E 80 04 21 */	bctrl 
/* 80181278 0017E1B8  A8 1D 00 20 */	lha r0, 0x20(r29)
/* 8018127C 0017E1BC  FF C0 08 90 */	fmr f30, f1
/* 80181280 0017E1C0  C3 A2 A8 F4 */	lfs f29, lbl_80518C54@sda21(r2)
/* 80181284 0017E1C4  2C 00 00 42 */	cmpwi r0, 0x42
/* 80181288 0017E1C8  C3 82 A8 FC */	lfs f28, lbl_80518C5C@sda21(r2)
/* 8018128C 0017E1CC  40 82 00 0C */	bne .L_80181298
/* 80181290 0017E1D0  C3 A2 A9 18 */	lfs f29, lbl_80518C78@sda21(r2)
/* 80181294 0017E1D4  C3 82 A8 F0 */	lfs f28, lbl_80518C50@sda21(r2)
.L_80181298:
/* 80181298 0017E1D8  FC 20 F0 90 */	fmr f1, f30
/* 8018129C 0017E1DC  4B F4 E0 19 */	bl cos
/* 801812A0 0017E1E0  FF E0 08 18 */	frsp f31, f1
/* 801812A4 0017E1E4  FC 20 F0 90 */	fmr f1, f30
/* 801812A8 0017E1E8  4B F4 E5 75 */	bl sin
/* 801812AC 0017E1EC  7F E4 FB 78 */	mr r4, r31
/* 801812B0 0017E1F0  FF C0 08 18 */	frsp f30, f1
/* 801812B4 0017E1F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801812B8 0017E1F8  38 61 00 08 */	addi r3, r1, 8
/* 801812BC 0017E1FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801812C0 0017E200  7D 89 03 A6 */	mtctr r12
/* 801812C4 0017E204  4E 80 04 21 */	bctrl 
/* 801812C8 0017E208  EC 9D 07 B2 */	fmuls f4, f29, f30
/* 801812CC 0017E20C  C0 61 00 08 */	lfs f3, 8(r1)
/* 801812D0 0017E210  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801812D4 0017E214  EC 3D 07 F2 */	fmuls f1, f29, f31
/* 801812D8 0017E218  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801812DC 0017E21C  38 61 00 38 */	addi r3, r1, 0x38
/* 801812E0 0017E220  EC 64 18 2A */	fadds f3, f4, f3
/* 801812E4 0017E224  D3 81 00 20 */	stfs f28, 0x20(r1)
/* 801812E8 0017E228  EC 5C 10 2A */	fadds f2, f28, f2
/* 801812EC 0017E22C  38 81 00 14 */	addi r4, r1, 0x14
/* 801812F0 0017E230  EC 01 00 2A */	fadds f0, f1, f0
/* 801812F4 0017E234  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 801812F8 0017E238  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801812FC 0017E23C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80181300 0017E240  48 0A D0 A1 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 80181304 0017E244  38 61 00 58 */	addi r3, r1, 0x58
/* 80181308 0017E248  38 81 00 38 */	addi r4, r1, 0x38
/* 8018130C 0017E24C  48 0A D0 D5 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 80181310 0017E250  38 61 00 58 */	addi r3, r1, 0x58
/* 80181314 0017E254  48 0A D1 49 */	bl first__Q24Game12CellIteratorFv
/* 80181318 0017E258  48 00 00 E0 */	b .L_801813F8
.L_8018131C:
/* 8018131C 0017E25C  38 61 00 58 */	addi r3, r1, 0x58
/* 80181320 0017E260  48 0A D7 71 */	bl dump__Q24Game12CellIteratorFv
/* 80181324 0017E264  38 61 00 58 */	addi r3, r1, 0x58
/* 80181328 0017E268  48 0A D2 1D */	bl __ml__Q24Game12CellIteratorFv
/* 8018132C 0017E26C  81 83 00 00 */	lwz r12, 0(r3)
/* 80181330 0017E270  7C 7D 1B 78 */	mr r29, r3
/* 80181334 0017E274  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80181338 0017E278  7D 89 03 A6 */	mtctr r12
/* 8018133C 0017E27C  4E 80 04 21 */	bctrl 
/* 80181340 0017E280  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80181344 0017E284  40 82 00 AC */	bne .L_801813F0
/* 80181348 0017E288  80 1D 01 14 */	lwz r0, 0x114(r29)
/* 8018134C 0017E28C  28 00 00 00 */	cmplwi r0, 0
/* 80181350 0017E290  41 82 00 A0 */	beq .L_801813F0
/* 80181354 0017E294  7C 1D F8 40 */	cmplw r29, r31
/* 80181358 0017E298  41 82 00 98 */	beq .L_801813F0
/* 8018135C 0017E29C  7F A3 EB 78 */	mr r3, r29
/* 80181360 0017E2A0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80181364 0017E2A4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80181368 0017E2A8  7D 89 03 A6 */	mtctr r12
/* 8018136C 0017E2AC  4E 80 04 21 */	bctrl 
/* 80181370 0017E2B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80181374 0017E2B4  41 82 00 7C */	beq .L_801813F0
/* 80181378 0017E2B8  93 BE 00 14 */	stw r29, 0x14(r30)
/* 8018137C 0017E2BC  7F A3 EB 78 */	mr r3, r29
/* 80181380 0017E2C0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80181384 0017E2C4  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 80181388 0017E2C8  7D 89 03 A6 */	mtctr r12
/* 8018138C 0017E2CC  4E 80 04 21 */	bctrl 
/* 80181390 0017E2D0  7F A3 EB 78 */	mr r3, r29
/* 80181394 0017E2D4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80181398 0017E2D8  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8018139C 0017E2DC  7D 89 03 A6 */	mtctr r12
/* 801813A0 0017E2E0  4E 80 04 21 */	bctrl 
/* 801813A4 0017E2E4  3C C0 80 4B */	lis r6, "__vt__22IDelegate1<P8CollPart>"@ha
/* 801813A8 0017E2E8  3C 60 80 4B */	lis r3, lbl_804B2DA4@ha
/* 801813AC 0017E2EC  38 A3 2D A4 */	addi r5, r3, lbl_804B2DA4@l
/* 801813B0 0017E2F0  3C 80 80 4B */	lis r4, "__vt__45Delegate1<Q24Game14NaviPunchState,P8CollPart>"@ha
/* 801813B4 0017E2F4  38 06 34 FC */	addi r0, r6, "__vt__22IDelegate1<P8CollPart>"@l
/* 801813B8 0017E2F8  80 C5 00 00 */	lwz r6, 0(r5)
/* 801813BC 0017E2FC  80 65 00 04 */	lwz r3, 4(r5)
/* 801813C0 0017E300  38 E4 34 F0 */	addi r7, r4, "__vt__45Delegate1<Q24Game14NaviPunchState,P8CollPart>"@l
/* 801813C4 0017E304  90 01 00 24 */	stw r0, 0x24(r1)
/* 801813C8 0017E308  38 81 00 14 */	addi r4, r1, 0x14
/* 801813CC 0017E30C  80 05 00 08 */	lwz r0, 8(r5)
/* 801813D0 0017E310  38 A1 00 24 */	addi r5, r1, 0x24
/* 801813D4 0017E314  90 E1 00 24 */	stw r7, 0x24(r1)
/* 801813D8 0017E318  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801813DC 0017E31C  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 801813E0 0017E320  90 61 00 30 */	stw r3, 0x30(r1)
/* 801813E4 0017E324  90 01 00 34 */	stw r0, 0x34(r1)
/* 801813E8 0017E328  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 801813EC 0017E32C  4B FB 37 E5 */	bl "checkCollision__8CollTreeFRQ23Sys6SphereP22IDelegate1<P8CollPart>"
.L_801813F0:
/* 801813F0 0017E330  38 61 00 58 */	addi r3, r1, 0x58
/* 801813F4 0017E334  48 0A D1 0D */	bl next__Q24Game12CellIteratorFv
.L_801813F8:
/* 801813F8 0017E338  38 61 00 58 */	addi r3, r1, 0x58
/* 801813FC 0017E33C  48 0A D1 39 */	bl isDone__Q24Game12CellIteratorFv
/* 80181400 0017E340  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80181404 0017E344  41 82 FF 18 */	beq .L_8018131C
/* 80181408 0017E348  48 00 01 5C */	b .L_80181564
.L_8018140C:
/* 8018140C 0017E34C  88 1E 00 1D */	lbz r0, 0x1d(r30)
/* 80181410 0017E350  28 00 00 00 */	cmplwi r0, 0
/* 80181414 0017E354  41 82 01 24 */	beq .L_80181538
/* 80181418 0017E358  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8018141C 0017E35C  38 80 00 00 */	li r4, 0
/* 80181420 0017E360  38 63 00 48 */	addi r3, r3, 0x48
/* 80181424 0017E364  48 06 4B AD */	bl hasItem__Q24Game10OlimarDataFi
/* 80181428 0017E368  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018142C 0017E36C  41 82 00 DC */	beq .L_80181508
/* 80181430 0017E370  88 7E 00 1E */	lbz r3, 0x1e(r30)
/* 80181434 0017E374  38 63 00 01 */	addi r3, r3, 1
/* 80181438 0017E378  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8018143C 0017E37C  98 7E 00 1E */	stb r3, 0x1e(r30)
/* 80181440 0017E380  28 00 00 01 */	cmplwi r0, 1
/* 80181444 0017E384  41 81 00 54 */	bgt .L_80181498
/* 80181448 0017E388  28 1F 00 00 */	cmplwi r31, 0
/* 8018144C 0017E38C  7F E6 FB 78 */	mr r6, r31
/* 80181450 0017E390  41 82 00 08 */	beq .L_80181458
/* 80181454 0017E394  38 DF 01 78 */	addi r6, r31, 0x178
.L_80181458:
/* 80181458 0017E398  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018145C 0017E39C  7F E3 FB 78 */	mr r3, r31
/* 80181460 0017E3A0  38 80 00 41 */	li r4, 0x41
/* 80181464 0017E3A4  38 A0 00 41 */	li r5, 0x41
/* 80181468 0017E3A8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018146C 0017E3AC  38 E0 00 00 */	li r7, 0
/* 80181470 0017E3B0  7D 89 03 A6 */	mtctr r12
/* 80181474 0017E3B4  4E 80 04 21 */	bctrl 
/* 80181478 0017E3B8  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 8018147C 0017E3BC  38 80 08 00 */	li r4, 0x800
/* 80181480 0017E3C0  38 A0 00 00 */	li r5, 0
/* 80181484 0017E3C4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80181488 0017E3C8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8018148C 0017E3CC  7D 89 03 A6 */	mtctr r12
/* 80181490 0017E3D0  4E 80 04 21 */	bctrl 
/* 80181494 0017E3D4  48 00 00 50 */	b .L_801814E4
.L_80181498:
/* 80181498 0017E3D8  28 1F 00 00 */	cmplwi r31, 0
/* 8018149C 0017E3DC  7F E6 FB 78 */	mr r6, r31
/* 801814A0 0017E3E0  41 82 00 08 */	beq .L_801814A8
/* 801814A4 0017E3E4  38 DF 01 78 */	addi r6, r31, 0x178
.L_801814A8:
/* 801814A8 0017E3E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801814AC 0017E3EC  7F E3 FB 78 */	mr r3, r31
/* 801814B0 0017E3F0  38 80 00 42 */	li r4, 0x42
/* 801814B4 0017E3F4  38 A0 00 42 */	li r5, 0x42
/* 801814B8 0017E3F8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801814BC 0017E3FC  38 E0 00 00 */	li r7, 0
/* 801814C0 0017E400  7D 89 03 A6 */	mtctr r12
/* 801814C4 0017E404  4E 80 04 21 */	bctrl 
/* 801814C8 0017E408  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 801814CC 0017E40C  38 80 08 00 */	li r4, 0x800
/* 801814D0 0017E410  38 A0 00 00 */	li r5, 0
/* 801814D4 0017E414  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801814D8 0017E418  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801814DC 0017E41C  7D 89 03 A6 */	mtctr r12
/* 801814E0 0017E420  4E 80 04 21 */	bctrl 
.L_801814E4:
/* 801814E4 0017E424  7F E3 FB 78 */	mr r3, r31
/* 801814E8 0017E428  4B FB BA 6D */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 801814EC 0017E42C  38 00 00 00 */	li r0, 0
/* 801814F0 0017E430  98 1E 00 10 */	stb r0, 0x10(r30)
/* 801814F4 0017E434  90 1E 00 14 */	stw r0, 0x14(r30)
/* 801814F8 0017E438  98 1E 00 1C */	stb r0, 0x1c(r30)
/* 801814FC 0017E43C  98 1E 00 1D */	stb r0, 0x1d(r30)
/* 80181500 0017E440  98 1E 00 1F */	stb r0, 0x1f(r30)
/* 80181504 0017E444  48 00 00 60 */	b .L_80181564
.L_80181508:
/* 80181508 0017E448  38 00 00 04 */	li r0, 4
/* 8018150C 0017E44C  38 80 00 1F */	li r4, 0x1f
/* 80181510 0017E450  98 1E 00 20 */	stb r0, 0x20(r30)
/* 80181514 0017E454  38 A0 00 1F */	li r5, 0x1f
/* 80181518 0017E458  38 C0 00 00 */	li r6, 0
/* 8018151C 0017E45C  38 E0 00 00 */	li r7, 0
/* 80181520 0017E460  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 80181524 0017E464  81 83 00 00 */	lwz r12, 0(r3)
/* 80181528 0017E468  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018152C 0017E46C  7D 89 03 A6 */	mtctr r12
/* 80181530 0017E470  4E 80 04 21 */	bctrl 
/* 80181534 0017E474  48 00 00 30 */	b .L_80181564
.L_80181538:
/* 80181538 0017E478  38 00 00 04 */	li r0, 4
/* 8018153C 0017E47C  38 80 00 1F */	li r4, 0x1f
/* 80181540 0017E480  98 1E 00 20 */	stb r0, 0x20(r30)
/* 80181544 0017E484  38 A0 00 1F */	li r5, 0x1f
/* 80181548 0017E488  38 C0 00 00 */	li r6, 0
/* 8018154C 0017E48C  38 E0 00 00 */	li r7, 0
/* 80181550 0017E490  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 80181554 0017E494  81 83 00 00 */	lwz r12, 0(r3)
/* 80181558 0017E498  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018155C 0017E49C  7D 89 03 A6 */	mtctr r12
/* 80181560 0017E4A0  4E 80 04 21 */	bctrl 
.L_80181564:
/* 80181564 0017E4A4  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 80181568 0017E4A8  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 8018156C 0017E4AC  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 80181570 0017E4B0  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 80181574 0017E4B4  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 80181578 0017E4B8  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 8018157C 0017E4BC  E3 81 00 B8 */	psq_l f28, 184(r1), 0, qr0
/* 80181580 0017E4C0  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 80181584 0017E4C4  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80181588 0017E4C8  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 8018158C 0017E4CC  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 80181590 0017E4D0  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80181594 0017E4D4  7C 08 03 A6 */	mtlr r0
/* 80181598 0017E4D8  38 21 00 F0 */	addi r1, r1, 0xf0
/* 8018159C 0017E4DC  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game14NaviPunchStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn exec__Q24Game14NaviPunchStateFPQ24Game4Navi, global
/* 801815A0 0017E4E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801815A4 0017E4E4  7C 08 02 A6 */	mflr r0
/* 801815A8 0017E4E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801815AC 0017E4EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801815B0 0017E4F0  7C 9F 23 78 */	mr r31, r4
/* 801815B4 0017E4F4  93 C1 00 08 */	stw r30, 8(r1)
/* 801815B8 0017E4F8  7C 7E 1B 78 */	mr r30, r3
/* 801815BC 0017E4FC  88 A3 00 20 */	lbz r5, 0x20(r3)
/* 801815C0 0017E500  28 05 00 00 */	cmplwi r5, 0
/* 801815C4 0017E504  41 82 00 90 */	beq .L_80181654
/* 801815C8 0017E508  38 A5 FF FF */	addi r5, r5, -1
/* 801815CC 0017E50C  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 801815D0 0017E510  98 BE 00 20 */	stb r5, 0x20(r30)
/* 801815D4 0017E514  40 82 00 20 */	bne .L_801815F4
/* 801815D8 0017E518  81 83 00 00 */	lwz r12, 0(r3)
/* 801815DC 0017E51C  38 C0 00 00 */	li r6, 0
/* 801815E0 0017E520  80 BE 00 28 */	lwz r5, 0x28(r30)
/* 801815E4 0017E524  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801815E8 0017E528  7D 89 03 A6 */	mtctr r12
/* 801815EC 0017E52C  4E 80 04 21 */	bctrl 
/* 801815F0 0017E530  48 00 01 14 */	b .L_80181704
.L_801815F4:
/* 801815F4 0017E534  7F E3 FB 78 */	mr r3, r31
/* 801815F8 0017E538  38 80 00 40 */	li r4, 0x40
/* 801815FC 0017E53C  4B FB B9 31 */	bl assertMotion__Q24Game8FakePikiFi
/* 80181600 0017E540  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80181604 0017E544  40 82 01 00 */	bne .L_80181704
/* 80181608 0017E548  7F E3 FB 78 */	mr r3, r31
/* 8018160C 0017E54C  38 80 00 41 */	li r4, 0x41
/* 80181610 0017E550  4B FB B9 1D */	bl assertMotion__Q24Game8FakePikiFi
/* 80181614 0017E554  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80181618 0017E558  40 82 00 EC */	bne .L_80181704
/* 8018161C 0017E55C  7F E3 FB 78 */	mr r3, r31
/* 80181620 0017E560  38 80 00 42 */	li r4, 0x42
/* 80181624 0017E564  4B FB B9 09 */	bl assertMotion__Q24Game8FakePikiFi
/* 80181628 0017E568  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018162C 0017E56C  40 82 00 D8 */	bne .L_80181704
/* 80181630 0017E570  7F C3 F3 78 */	mr r3, r30
/* 80181634 0017E574  7F E4 FB 78 */	mr r4, r31
/* 80181638 0017E578  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018163C 0017E57C  38 C0 00 00 */	li r6, 0
/* 80181640 0017E580  80 BE 00 28 */	lwz r5, 0x28(r30)
/* 80181644 0017E584  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80181648 0017E588  7D 89 03 A6 */	mtctr r12
/* 8018164C 0017E58C  4E 80 04 21 */	bctrl 
/* 80181650 0017E590  48 00 00 B4 */	b .L_80181704
.L_80181654:
/* 80181654 0017E594  88 1E 00 24 */	lbz r0, 0x24(r30)
/* 80181658 0017E598  28 00 00 00 */	cmplwi r0, 0
/* 8018165C 0017E59C  40 82 00 3C */	bne .L_80181698
/* 80181660 0017E5A0  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 80181664 0017E5A4  28 03 00 00 */	cmplwi r3, 0
/* 80181668 0017E5A8  41 82 00 30 */	beq .L_80181698
/* 8018166C 0017E5AC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80181670 0017E5B0  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80181674 0017E5B4  41 82 00 24 */	beq .L_80181698
/* 80181678 0017E5B8  88 1E 00 1D */	lbz r0, 0x1d(r30)
/* 8018167C 0017E5BC  28 00 00 00 */	cmplwi r0, 0
/* 80181680 0017E5C0  40 82 00 18 */	bne .L_80181698
/* 80181684 0017E5C4  88 1E 00 1E */	lbz r0, 0x1e(r30)
/* 80181688 0017E5C8  28 00 00 02 */	cmplwi r0, 2
/* 8018168C 0017E5CC  40 80 00 0C */	bge .L_80181698
/* 80181690 0017E5D0  38 00 00 01 */	li r0, 1
/* 80181694 0017E5D4  98 1E 00 1D */	stb r0, 0x1d(r30)
.L_80181698:
/* 80181698 0017E5D8  7F E3 FB 78 */	mr r3, r31
/* 8018169C 0017E5DC  4B FC 24 69 */	bl control__Q24Game4NaviFv
/* 801816A0 0017E5E0  7F E3 FB 78 */	mr r3, r31
/* 801816A4 0017E5E4  4B FC 50 C9 */	bl findNextThrowPiki__Q24Game4NaviFv
/* 801816A8 0017E5E8  7F E3 FB 78 */	mr r3, r31
/* 801816AC 0017E5EC  38 80 00 40 */	li r4, 0x40
/* 801816B0 0017E5F0  4B FB B8 7D */	bl assertMotion__Q24Game8FakePikiFi
/* 801816B4 0017E5F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801816B8 0017E5F8  40 82 00 4C */	bne .L_80181704
/* 801816BC 0017E5FC  7F E3 FB 78 */	mr r3, r31
/* 801816C0 0017E600  38 80 00 41 */	li r4, 0x41
/* 801816C4 0017E604  4B FB B8 69 */	bl assertMotion__Q24Game8FakePikiFi
/* 801816C8 0017E608  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801816CC 0017E60C  40 82 00 38 */	bne .L_80181704
/* 801816D0 0017E610  7F E3 FB 78 */	mr r3, r31
/* 801816D4 0017E614  38 80 00 42 */	li r4, 0x42
/* 801816D8 0017E618  4B FB B8 55 */	bl assertMotion__Q24Game8FakePikiFi
/* 801816DC 0017E61C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801816E0 0017E620  40 82 00 24 */	bne .L_80181704
/* 801816E4 0017E624  7F C3 F3 78 */	mr r3, r30
/* 801816E8 0017E628  7F E4 FB 78 */	mr r4, r31
/* 801816EC 0017E62C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801816F0 0017E630  38 C0 00 00 */	li r6, 0
/* 801816F4 0017E634  80 BE 00 28 */	lwz r5, 0x28(r30)
/* 801816F8 0017E638  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801816FC 0017E63C  7D 89 03 A6 */	mtctr r12
/* 80181700 0017E640  4E 80 04 21 */	bctrl 
.L_80181704:
/* 80181704 0017E644  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80181708 0017E648  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018170C 0017E64C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80181710 0017E650  7C 08 03 A6 */	mtlr r0
/* 80181714 0017E654  38 21 00 10 */	addi r1, r1, 0x10
/* 80181718 0017E658  4E 80 00 20 */	blr 
.endfn exec__Q24Game14NaviPunchStateFPQ24Game4Navi

.fn cleanup__Q24Game14NaviPunchStateFPQ24Game4Navi, global
/* 8018171C 0017E65C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game14NaviPunchStateFPQ24Game4Navi

.fn init__Q24Game17NaviPathMoveStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80181720 0017E660  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80181724 0017E664  7C 08 02 A6 */	mflr r0
/* 80181728 0017E668  28 05 00 00 */	cmplwi r5, 0
/* 8018172C 0017E66C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80181730 0017E670  38 00 00 00 */	li r0, 0
/* 80181734 0017E674  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80181738 0017E678  3B E0 00 00 */	li r31, 0
/* 8018173C 0017E67C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80181740 0017E680  7C 9E 23 78 */	mr r30, r4
/* 80181744 0017E684  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80181748 0017E688  7C 7D 1B 78 */	mr r29, r3
/* 8018174C 0017E68C  90 03 00 14 */	stw r0, 0x14(r3)
/* 80181750 0017E690  41 82 00 2C */	beq .L_8018177C
/* 80181754 0017E694  C0 05 00 00 */	lfs f0, 0(r5)
/* 80181758 0017E698  D0 1D 00 18 */	stfs f0, 0x18(r29)
/* 8018175C 0017E69C  C0 05 00 04 */	lfs f0, 4(r5)
/* 80181760 0017E6A0  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 80181764 0017E6A4  C0 05 00 08 */	lfs f0, 8(r5)
/* 80181768 0017E6A8  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8018176C 0017E6AC  48 00 01 71 */	bl initPathfinding__Q24Game17NaviPathMoveStateFPQ24Game4Navi
/* 80181770 0017E6B0  2C 03 00 01 */	cmpwi r3, 1
/* 80181774 0017E6B4  40 82 00 08 */	bne .L_8018177C
/* 80181778 0017E6B8  3B E0 00 01 */	li r31, 1
.L_8018177C:
/* 8018177C 0017E6BC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80181780 0017E6C0  40 82 00 24 */	bne .L_801817A4
/* 80181784 0017E6C4  7F A3 EB 78 */	mr r3, r29
/* 80181788 0017E6C8  7F C4 F3 78 */	mr r4, r30
/* 8018178C 0017E6CC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80181790 0017E6D0  38 A0 00 00 */	li r5, 0
/* 80181794 0017E6D4  38 C0 00 00 */	li r6, 0
/* 80181798 0017E6D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018179C 0017E6DC  7D 89 03 A6 */	mtctr r12
/* 801817A0 0017E6E0  4E 80 04 21 */	bctrl 
.L_801817A4:
/* 801817A4 0017E6E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801817A8 0017E6E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801817AC 0017E6EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801817B0 0017E6F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801817B4 0017E6F4  7C 08 03 A6 */	mtlr r0
/* 801817B8 0017E6F8  38 21 00 20 */	addi r1, r1, 0x20
/* 801817BC 0017E6FC  4E 80 00 20 */	blr 
.endfn init__Q24Game17NaviPathMoveStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game17NaviPathMoveStateFPQ24Game4Navi, global
/* 801817C0 0017E700  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801817C4 0017E704  7C 08 02 A6 */	mflr r0
/* 801817C8 0017E708  90 01 00 24 */	stw r0, 0x24(r1)
/* 801817CC 0017E70C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801817D0 0017E710  3B E0 00 00 */	li r31, 0
/* 801817D4 0017E714  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801817D8 0017E718  7C 9E 23 78 */	mr r30, r4
/* 801817DC 0017E71C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801817E0 0017E720  7C 7D 1B 78 */	mr r29, r3
/* 801817E4 0017E724  A0 03 00 10 */	lhz r0, 0x10(r3)
/* 801817E8 0017E728  2C 00 00 01 */	cmpwi r0, 1
/* 801817EC 0017E72C  41 82 00 34 */	beq .L_80181820
/* 801817F0 0017E730  40 80 00 10 */	bge .L_80181800
/* 801817F4 0017E734  2C 00 00 00 */	cmpwi r0, 0
/* 801817F8 0017E738  40 80 00 14 */	bge .L_8018180C
/* 801817FC 0017E73C  48 00 00 58 */	b .L_80181854
.L_80181800:
/* 80181800 0017E740  2C 00 00 03 */	cmpwi r0, 3
/* 80181804 0017E744  40 80 00 50 */	bge .L_80181854
/* 80181808 0017E748  48 00 00 3C */	b .L_80181844
.L_8018180C:
/* 8018180C 0017E74C  48 00 02 8D */	bl execPathfinding__Q24Game17NaviPathMoveStateFPQ24Game4Navi
/* 80181810 0017E750  2C 03 00 02 */	cmpwi r3, 2
/* 80181814 0017E754  40 82 00 40 */	bne .L_80181854
/* 80181818 0017E758  3B E0 00 01 */	li r31, 1
/* 8018181C 0017E75C  48 00 00 38 */	b .L_80181854
.L_80181820:
/* 80181820 0017E760  48 00 03 09 */	bl execMove__Q24Game17NaviPathMoveStateFPQ24Game4Navi
/* 80181824 0017E764  2C 03 00 02 */	cmpwi r3, 2
/* 80181828 0017E768  40 82 00 0C */	bne .L_80181834
/* 8018182C 0017E76C  3B E0 00 01 */	li r31, 1
/* 80181830 0017E770  48 00 00 24 */	b .L_80181854
.L_80181834:
/* 80181834 0017E774  2C 03 00 01 */	cmpwi r3, 1
/* 80181838 0017E778  40 82 00 1C */	bne .L_80181854
/* 8018183C 0017E77C  3B E0 00 01 */	li r31, 1
/* 80181840 0017E780  48 00 00 14 */	b .L_80181854
.L_80181844:
/* 80181844 0017E784  48 00 04 41 */	bl execMoveGoal__Q24Game17NaviPathMoveStateFPQ24Game4Navi
/* 80181848 0017E788  2C 03 00 02 */	cmpwi r3, 2
/* 8018184C 0017E78C  40 82 00 08 */	bne .L_80181854
/* 80181850 0017E790  3B E0 00 01 */	li r31, 1
.L_80181854:
/* 80181854 0017E794  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80181858 0017E798  41 82 00 24 */	beq .L_8018187C
/* 8018185C 0017E79C  7F A3 EB 78 */	mr r3, r29
/* 80181860 0017E7A0  7F C4 F3 78 */	mr r4, r30
/* 80181864 0017E7A4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80181868 0017E7A8  38 A0 00 00 */	li r5, 0
/* 8018186C 0017E7AC  38 C0 00 00 */	li r6, 0
/* 80181870 0017E7B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80181874 0017E7B4  7D 89 03 A6 */	mtctr r12
/* 80181878 0017E7B8  4E 80 04 21 */	bctrl 
.L_8018187C:
/* 8018187C 0017E7BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80181880 0017E7C0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80181884 0017E7C4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80181888 0017E7C8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8018188C 0017E7CC  7C 08 03 A6 */	mtlr r0
/* 80181890 0017E7D0  38 21 00 20 */	addi r1, r1, 0x20
/* 80181894 0017E7D4  4E 80 00 20 */	blr 
.endfn exec__Q24Game17NaviPathMoveStateFPQ24Game4Navi

.fn cleanup__Q24Game17NaviPathMoveStateFPQ24Game4Navi, global
/* 80181898 0017E7D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018189C 0017E7DC  7C 08 02 A6 */	mflr r0
/* 801818A0 0017E7E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801818A4 0017E7E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801818A8 0017E7E8  7C 7F 1B 78 */	mr r31, r3
/* 801818AC 0017E7EC  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801818B0 0017E7F0  28 04 00 00 */	cmplwi r4, 0
/* 801818B4 0017E7F4  41 82 00 14 */	beq .L_801818C8
/* 801818B8 0017E7F8  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 801818BC 0017E7FC  48 02 21 A5 */	bl release__Q24Game10PathfinderFUl
/* 801818C0 0017E800  38 00 00 00 */	li r0, 0
/* 801818C4 0017E804  90 1F 00 14 */	stw r0, 0x14(r31)
.L_801818C8:
/* 801818C8 0017E808  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801818CC 0017E80C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801818D0 0017E810  7C 08 03 A6 */	mtlr r0
/* 801818D4 0017E814  38 21 00 10 */	addi r1, r1, 0x10
/* 801818D8 0017E818  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game17NaviPathMoveStateFPQ24Game4Navi

.fn initPathfinding__Q24Game17NaviPathMoveStateFPQ24Game4Navi, global
/* 801818DC 0017E81C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801818E0 0017E820  7C 08 02 A6 */	mflr r0
/* 801818E4 0017E824  90 01 00 64 */	stw r0, 0x64(r1)
/* 801818E8 0017E828  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801818EC 0017E82C  7C 7F 1B 78 */	mr r31, r3
/* 801818F0 0017E830  38 61 00 10 */	addi r3, r1, 0x10
/* 801818F4 0017E834  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801818F8 0017E838  7C 9E 23 78 */	mr r30, r4
/* 801818FC 0017E83C  81 84 00 00 */	lwz r12, 0(r4)
/* 80181900 0017E840  81 8C 00 08 */	lwz r12, 8(r12)
/* 80181904 0017E844  7D 89 03 A6 */	mtctr r12
/* 80181908 0017E848  4E 80 04 21 */	bctrl 
/* 8018190C 0017E84C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80181910 0017E850  38 80 00 00 */	li r4, 0
/* 80181914 0017E854  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80181918 0017E858  38 00 FF FF */	li r0, -1
/* 8018191C 0017E85C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80181920 0017E860  7F C3 F3 78 */	mr r3, r30
/* 80181924 0017E864  90 81 00 50 */	stw r4, 0x50(r1)
/* 80181928 0017E868  90 81 00 4C */	stw r4, 0x4c(r1)
/* 8018192C 0017E86C  98 81 00 40 */	stb r4, 0x40(r1)
/* 80181930 0017E870  B0 01 00 48 */	sth r0, 0x48(r1)
/* 80181934 0017E874  90 81 00 44 */	stw r4, 0x44(r1)
/* 80181938 0017E878  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8018193C 0017E87C  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80181940 0017E880  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80181944 0017E884  A8 1E 01 8C */	lha r0, 0x18c(r30)
/* 80181948 0017E888  B0 01 00 48 */	sth r0, 0x48(r1)
/* 8018194C 0017E88C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80181950 0017E890  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80181954 0017E894  7D 89 03 A6 */	mtctr r12
/* 80181958 0017E898  4E 80 04 21 */	bctrl 
/* 8018195C 0017E89C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80181960 0017E8A0  41 82 00 0C */	beq .L_8018196C
/* 80181964 0017E8A4  38 00 00 01 */	li r0, 1
/* 80181968 0017E8A8  98 01 00 40 */	stb r0, 0x40(r1)
.L_8018196C:
/* 8018196C 0017E8AC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80181970 0017E8B0  38 81 00 34 */	addi r4, r1, 0x34
/* 80181974 0017E8B4  80 63 00 08 */	lwz r3, 8(r3)
/* 80181978 0017E8B8  4B FF 19 F5 */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 8018197C 0017E8BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80181980 0017E8C0  41 82 00 24 */	beq .L_801819A4
/* 80181984 0017E8C4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80181988 0017E8C8  88 03 00 34 */	lbz r0, 0x34(r3)
/* 8018198C 0017E8CC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80181990 0017E8D0  40 82 00 0C */	bne .L_8018199C
/* 80181994 0017E8D4  7C 7E 1B 78 */	mr r30, r3
/* 80181998 0017E8D8  48 00 00 4C */	b .L_801819E4
.L_8018199C:
/* 8018199C 0017E8DC  83 C1 00 50 */	lwz r30, 0x50(r1)
/* 801819A0 0017E8E0  48 00 00 44 */	b .L_801819E4
.L_801819A4:
/* 801819A4 0017E8E4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801819A8 0017E8E8  38 81 00 34 */	addi r4, r1, 0x34
/* 801819AC 0017E8EC  80 63 00 08 */	lwz r3, 8(r3)
/* 801819B0 0017E8F0  4B FF 19 BD */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 801819B4 0017E8F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801819B8 0017E8F8  41 82 00 24 */	beq .L_801819DC
/* 801819BC 0017E8FC  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801819C0 0017E900  88 03 00 34 */	lbz r0, 0x34(r3)
/* 801819C4 0017E904  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801819C8 0017E908  41 82 00 0C */	beq .L_801819D4
/* 801819CC 0017E90C  83 C1 00 50 */	lwz r30, 0x50(r1)
/* 801819D0 0017E910  48 00 00 14 */	b .L_801819E4
.L_801819D4:
/* 801819D4 0017E914  7C 7E 1B 78 */	mr r30, r3
/* 801819D8 0017E918  48 00 00 0C */	b .L_801819E4
.L_801819DC:
/* 801819DC 0017E91C  38 60 00 02 */	li r3, 2
/* 801819E0 0017E920  48 00 00 A0 */	b .L_80181A80
.L_801819E4:
/* 801819E4 0017E924  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 801819E8 0017E928  28 04 00 00 */	cmplwi r4, 0
/* 801819EC 0017E92C  41 82 00 14 */	beq .L_80181A00
/* 801819F0 0017E930  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 801819F4 0017E934  48 02 20 6D */	bl release__Q24Game10PathfinderFUl
/* 801819F8 0017E938  38 00 00 00 */	li r0, 0
/* 801819FC 0017E93C  90 1F 00 14 */	stw r0, 0x14(r31)
.L_80181A00:
/* 80181A00 0017E940  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80181A04 0017E944  38 00 00 00 */	li r0, 0
/* 80181A08 0017E948  C0 02 A8 EC */	lfs f0, lbl_80518C4C@sda21(r2)
/* 80181A0C 0017E94C  38 81 00 1C */	addi r4, r1, 0x1c
/* 80181A10 0017E950  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80181A14 0017E954  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80181A18 0017E958  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 80181A1C 0017E95C  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80181A20 0017E960  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80181A24 0017E964  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 80181A28 0017E968  90 01 00 28 */	stw r0, 0x28(r1)
/* 80181A2C 0017E96C  98 01 00 2C */	stb r0, 0x2c(r1)
/* 80181A30 0017E970  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80181A34 0017E974  80 63 00 08 */	lwz r3, 8(r3)
/* 80181A38 0017E978  4B FF 15 8D */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 80181A3C 0017E97C  28 03 00 00 */	cmplwi r3, 0
/* 80181A40 0017E980  40 82 00 0C */	bne .L_80181A4C
/* 80181A44 0017E984  38 60 00 02 */	li r3, 2
/* 80181A48 0017E988  48 00 00 38 */	b .L_80181A80
.L_80181A4C:
/* 80181A4C 0017E98C  A8 C3 00 36 */	lha r6, 0x36(r3)
/* 80181A50 0017E990  38 00 00 01 */	li r0, 1
/* 80181A54 0017E994  A8 BE 00 36 */	lha r5, 0x36(r30)
/* 80181A58 0017E998  38 81 00 08 */	addi r4, r1, 8
/* 80181A5C 0017E99C  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80181A60 0017E9A0  B0 A1 00 08 */	sth r5, 8(r1)
/* 80181A64 0017E9A4  B0 C1 00 0A */	sth r6, 0xa(r1)
/* 80181A68 0017E9A8  98 01 00 0C */	stb r0, 0xc(r1)
/* 80181A6C 0017E9AC  48 02 1D E9 */	bl start__Q24Game10PathfinderFRQ24Game15PathfindRequest
/* 80181A70 0017E9B0  90 7F 00 14 */	stw r3, 0x14(r31)
/* 80181A74 0017E9B4  38 00 00 00 */	li r0, 0
/* 80181A78 0017E9B8  38 60 00 01 */	li r3, 1
/* 80181A7C 0017E9BC  B0 1F 00 10 */	sth r0, 0x10(r31)
.L_80181A80:
/* 80181A80 0017E9C0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80181A84 0017E9C4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80181A88 0017E9C8  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80181A8C 0017E9CC  7C 08 03 A6 */	mtlr r0
/* 80181A90 0017E9D0  38 21 00 60 */	addi r1, r1, 0x60
/* 80181A94 0017E9D4  4E 80 00 20 */	blr 
.endfn initPathfinding__Q24Game17NaviPathMoveStateFPQ24Game4Navi

.fn execPathfinding__Q24Game17NaviPathMoveStateFPQ24Game4Navi, global
/* 80181A98 0017E9D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80181A9C 0017E9DC  7C 08 02 A6 */	mflr r0
/* 80181AA0 0017E9E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80181AA4 0017E9E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80181AA8 0017E9E8  7C 7F 1B 78 */	mr r31, r3
/* 80181AAC 0017E9EC  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80181AB0 0017E9F0  28 04 00 00 */	cmplwi r4, 0
/* 80181AB4 0017E9F4  40 82 00 0C */	bne .L_80181AC0
/* 80181AB8 0017E9F8  38 60 00 02 */	li r3, 2
/* 80181ABC 0017E9FC  48 00 00 58 */	b .L_80181B14
.L_80181AC0:
/* 80181AC0 0017EA00  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80181AC4 0017EA04  48 02 20 0D */	bl check__Q24Game10PathfinderFUl
/* 80181AC8 0017EA08  2C 03 00 01 */	cmpwi r3, 1
/* 80181ACC 0017EA0C  41 82 00 3C */	beq .L_80181B08
/* 80181AD0 0017EA10  40 80 00 40 */	bge .L_80181B10
/* 80181AD4 0017EA14  2C 03 00 00 */	cmpwi r3, 0
/* 80181AD8 0017EA18  40 80 00 08 */	bge .L_80181AE0
/* 80181ADC 0017EA1C  48 00 00 34 */	b .L_80181B10
.L_80181AE0:
/* 80181AE0 0017EA20  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80181AE4 0017EA24  38 BF 00 24 */	addi r5, r31, 0x24
/* 80181AE8 0017EA28  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 80181AEC 0017EA2C  48 02 1E B5 */	bl makepath__Q24Game10PathfinderFUlPPQ24Game8PathNode
/* 80181AF0 0017EA30  90 7F 00 2C */	stw r3, 0x2c(r31)
/* 80181AF4 0017EA34  38 00 00 01 */	li r0, 1
/* 80181AF8 0017EA38  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80181AFC 0017EA3C  90 7F 00 28 */	stw r3, 0x28(r31)
/* 80181B00 0017EA40  B0 1F 00 10 */	sth r0, 0x10(r31)
/* 80181B04 0017EA44  48 00 00 0C */	b .L_80181B10
.L_80181B08:
/* 80181B08 0017EA48  38 60 00 02 */	li r3, 2
/* 80181B0C 0017EA4C  48 00 00 08 */	b .L_80181B14
.L_80181B10:
/* 80181B10 0017EA50  38 60 00 00 */	li r3, 0
.L_80181B14:
/* 80181B14 0017EA54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80181B18 0017EA58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80181B1C 0017EA5C  7C 08 03 A6 */	mtlr r0
/* 80181B20 0017EA60  38 21 00 10 */	addi r1, r1, 0x10
/* 80181B24 0017EA64  4E 80 00 20 */	blr 
.endfn execPathfinding__Q24Game17NaviPathMoveStateFPQ24Game4Navi

.fn execMove__Q24Game17NaviPathMoveStateFPQ24Game4Navi, global
/* 80181B28 0017EA68  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80181B2C 0017EA6C  7C 08 02 A6 */	mflr r0
/* 80181B30 0017EA70  90 01 00 54 */	stw r0, 0x54(r1)
/* 80181B34 0017EA74  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80181B38 0017EA78  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80181B3C 0017EA7C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80181B40 0017EA80  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80181B44 0017EA84  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 80181B48 0017EA88  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 80181B4C 0017EA8C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80181B50 0017EA90  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80181B54 0017EA94  80 CD 93 08 */	lwz r6, mapMgr__4Game@sda21(r13)
/* 80181B58 0017EA98  7C 7E 1B 78 */	mr r30, r3
/* 80181B5C 0017EA9C  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 80181B60 0017EAA0  7C 9F 23 78 */	mr r31, r4
/* 80181B64 0017EAA4  80 66 00 08 */	lwz r3, 8(r6)
/* 80181B68 0017EAA8  A8 85 00 20 */	lha r4, 0x20(r5)
/* 80181B6C 0017EAAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80181B70 0017EAB0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80181B74 0017EAB4  7D 89 03 A6 */	mtctr r12
/* 80181B78 0017EAB8  4E 80 04 21 */	bctrl 
/* 80181B7C 0017EABC  7F E4 FB 78 */	mr r4, r31
/* 80181B80 0017EAC0  C3 A3 00 4C */	lfs f29, 0x4c(r3)
/* 80181B84 0017EAC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80181B88 0017EAC8  C3 C3 00 54 */	lfs f30, 0x54(r3)
/* 80181B8C 0017EACC  38 61 00 08 */	addi r3, r1, 8
/* 80181B90 0017EAD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80181B94 0017EAD4  7D 89 03 A6 */	mtctr r12
/* 80181B98 0017EAD8  4E 80 04 21 */	bctrl 
/* 80181B9C 0017EADC  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80181BA0 0017EAE0  C0 01 00 08 */	lfs f0, 8(r1)
/* 80181BA4 0017EAE4  EF DE 08 28 */	fsubs f30, f30, f1
/* 80181BA8 0017EAE8  C3 E2 A8 80 */	lfs f31, lbl_80518BE0@sda21(r2)
/* 80181BAC 0017EAEC  EF BD 00 28 */	fsubs f29, f29, f0
/* 80181BB0 0017EAF0  EC 3E 07 B2 */	fmuls f1, f30, f30
/* 80181BB4 0017EAF4  EC 1D FF 7A */	fmadds f0, f29, f29, f31
/* 80181BB8 0017EAF8  EC 21 00 2A */	fadds f1, f1, f0
/* 80181BBC 0017EAFC  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80181BC0 0017EB00  40 81 00 14 */	ble .L_80181BD4
/* 80181BC4 0017EB04  40 81 00 14 */	ble .L_80181BD8
/* 80181BC8 0017EB08  FC 00 08 34 */	frsqrte f0, f1
/* 80181BCC 0017EB0C  EC 20 00 72 */	fmuls f1, f0, f1
/* 80181BD0 0017EB10  48 00 00 08 */	b .L_80181BD8
.L_80181BD4:
/* 80181BD4 0017EB14  FC 20 F8 90 */	fmr f1, f31
.L_80181BD8:
/* 80181BD8 0017EB18  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80181BDC 0017EB1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80181BE0 0017EB20  40 81 00 1C */	ble .L_80181BFC
/* 80181BE4 0017EB24  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80181BE8 0017EB28  EC 00 08 24 */	fdivs f0, f0, f1
/* 80181BEC 0017EB2C  EF BD 00 32 */	fmuls f29, f29, f0
/* 80181BF0 0017EB30  EF FF 00 32 */	fmuls f31, f31, f0
/* 80181BF4 0017EB34  EF DE 00 32 */	fmuls f30, f30, f0
/* 80181BF8 0017EB38  48 00 00 08 */	b .L_80181C00
.L_80181BFC:
/* 80181BFC 0017EB3C  FC 20 00 90 */	fmr f1, f0
.L_80181C00:
/* 80181C00 0017EB40  C0 02 A8 F4 */	lfs f0, lbl_80518C54@sda21(r2)
/* 80181C04 0017EB44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80181C08 0017EB48  40 80 00 24 */	bge .L_80181C2C
/* 80181C0C 0017EB4C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80181C10 0017EB50  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80181C14 0017EB54  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80181C18 0017EB58  80 1E 00 24 */	lwz r0, 0x24(r30)
/* 80181C1C 0017EB5C  28 00 00 00 */	cmplwi r0, 0
/* 80181C20 0017EB60  40 82 00 0C */	bne .L_80181C2C
/* 80181C24 0017EB64  38 60 00 01 */	li r3, 1
/* 80181C28 0017EB68  48 00 00 2C */	b .L_80181C54
.L_80181C2C:
/* 80181C2C 0017EB6C  7F E3 FB 78 */	mr r3, r31
/* 80181C30 0017EB70  4B FC 1E D5 */	bl control__Q24Game4NaviFv
/* 80181C34 0017EB74  C0 02 A9 1C */	lfs f0, lbl_80518C7C@sda21(r2)
/* 80181C38 0017EB78  38 60 00 00 */	li r3, 0
/* 80181C3C 0017EB7C  EC 5D 00 32 */	fmuls f2, f29, f0
/* 80181C40 0017EB80  EC 3F 00 32 */	fmuls f1, f31, f0
/* 80181C44 0017EB84  EC 1E 00 32 */	fmuls f0, f30, f0
/* 80181C48 0017EB88  D0 5F 01 E4 */	stfs f2, 0x1e4(r31)
/* 80181C4C 0017EB8C  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 80181C50 0017EB90  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
.L_80181C54:
/* 80181C54 0017EB94  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80181C58 0017EB98  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80181C5C 0017EB9C  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80181C60 0017EBA0  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80181C64 0017EBA4  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 80181C68 0017EBA8  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80181C6C 0017EBAC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80181C70 0017EBB0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80181C74 0017EBB4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80181C78 0017EBB8  7C 08 03 A6 */	mtlr r0
/* 80181C7C 0017EBBC  38 21 00 50 */	addi r1, r1, 0x50
/* 80181C80 0017EBC0  4E 80 00 20 */	blr 
.endfn execMove__Q24Game17NaviPathMoveStateFPQ24Game4Navi

.fn execMoveGoal__Q24Game17NaviPathMoveStateFPQ24Game4Navi, global
/* 80181C84 0017EBC4  38 60 00 00 */	li r3, 0
/* 80181C88 0017EBC8  4E 80 00 20 */	blr 
.endfn execMoveGoal__Q24Game17NaviPathMoveStateFPQ24Game4Navi

.fn init__Q24Game13NaviNukuStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80181C8C 0017EBCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80181C90 0017EBD0  7C 08 02 A6 */	mflr r0
/* 80181C94 0017EBD4  28 05 00 00 */	cmplwi r5, 0
/* 80181C98 0017EBD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80181C9C 0017EBDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80181CA0 0017EBE0  7C 9F 23 78 */	mr r31, r4
/* 80181CA4 0017EBE4  93 C1 00 08 */	stw r30, 8(r1)
/* 80181CA8 0017EBE8  7C 7E 1B 78 */	mr r30, r3
/* 80181CAC 0017EBEC  41 82 00 10 */	beq .L_80181CBC
/* 80181CB0 0017EBF0  88 05 00 00 */	lbz r0, 0(r5)
/* 80181CB4 0017EBF4  98 1E 00 18 */	stb r0, 0x18(r30)
/* 80181CB8 0017EBF8  48 00 00 0C */	b .L_80181CC4
.L_80181CBC:
/* 80181CBC 0017EBFC  38 00 00 00 */	li r0, 0
/* 80181CC0 0017EC00  98 1E 00 18 */	stb r0, 0x18(r30)
.L_80181CC4:
/* 80181CC4 0017EC04  88 1F 02 6A */	lbz r0, 0x26a(r31)
/* 80181CC8 0017EC08  28 00 00 00 */	cmplwi r0, 0
/* 80181CCC 0017EC0C  41 82 00 10 */	beq .L_80181CDC
/* 80181CD0 0017EC10  38 00 00 2B */	li r0, 0x2b
/* 80181CD4 0017EC14  B0 1E 00 16 */	sth r0, 0x16(r30)
/* 80181CD8 0017EC18  48 00 00 0C */	b .L_80181CE4
.L_80181CDC:
/* 80181CDC 0017EC1C  38 00 00 2A */	li r0, 0x2a
/* 80181CE0 0017EC20  B0 1E 00 16 */	sth r0, 0x16(r30)
.L_80181CE4:
/* 80181CE4 0017EC24  28 1F 00 00 */	cmplwi r31, 0
/* 80181CE8 0017EC28  7F E6 FB 78 */	mr r6, r31
/* 80181CEC 0017EC2C  41 82 00 08 */	beq .L_80181CF4
/* 80181CF0 0017EC30  38 DF 01 78 */	addi r6, r31, 0x178
.L_80181CF4:
/* 80181CF4 0017EC34  81 9F 00 00 */	lwz r12, 0(r31)
/* 80181CF8 0017EC38  7F E3 FB 78 */	mr r3, r31
/* 80181CFC 0017EC3C  A8 9E 00 16 */	lha r4, 0x16(r30)
/* 80181D00 0017EC40  38 E0 00 00 */	li r7, 0
/* 80181D04 0017EC44  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80181D08 0017EC48  7C 85 23 78 */	mr r5, r4
/* 80181D0C 0017EC4C  7D 89 03 A6 */	mtctr r12
/* 80181D10 0017EC50  4E 80 04 21 */	bctrl 
/* 80181D14 0017EC54  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80181D18 0017EC58  38 80 08 03 */	li r4, 0x803
/* 80181D1C 0017EC5C  38 A0 00 00 */	li r5, 0
/* 80181D20 0017EC60  80 03 06 88 */	lwz r0, 0x688(r3)
/* 80181D24 0017EC64  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80181D28 0017EC68  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80181D2C 0017EC6C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80181D30 0017EC70  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80181D34 0017EC74  7D 89 03 A6 */	mtctr r12
/* 80181D38 0017EC78  4E 80 04 21 */	bctrl 
/* 80181D3C 0017EC7C  38 00 00 00 */	li r0, 0
/* 80181D40 0017EC80  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80181D44 0017EC84  98 1E 00 12 */	stb r0, 0x12(r30)
/* 80181D48 0017EC88  98 1E 00 14 */	stb r0, 0x14(r30)
/* 80181D4C 0017EC8C  98 1E 00 13 */	stb r0, 0x13(r30)
/* 80181D50 0017EC90  98 1E 00 15 */	stb r0, 0x15(r30)
/* 80181D54 0017EC94  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 80181D58 0017EC98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80181D5C 0017EC9C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80181D60 0017ECA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80181D64 0017ECA4  7C 08 03 A6 */	mtlr r0
/* 80181D68 0017ECA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80181D6C 0017ECAC  4E 80 00 20 */	blr 
.endfn init__Q24Game13NaviNukuStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game13NaviNukuStateFPQ24Game4Navi, global
/* 80181D70 0017ECB0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80181D74 0017ECB4  7C 08 02 A6 */	mflr r0
/* 80181D78 0017ECB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80181D7C 0017ECBC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80181D80 0017ECC0  7C 9F 23 78 */	mr r31, r4
/* 80181D84 0017ECC4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80181D88 0017ECC8  7C 7E 1B 78 */	mr r30, r3
/* 80181D8C 0017ECCC  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80181D90 0017ECD0  28 05 00 00 */	cmplwi r5, 0
/* 80181D94 0017ECD4  41 82 00 5C */	beq .L_80181DF0
/* 80181D98 0017ECD8  80 05 00 18 */	lwz r0, 0x18(r5)
/* 80181D9C 0017ECDC  2C 00 00 00 */	cmpwi r0, 0
/* 80181DA0 0017ECE0  41 82 00 50 */	beq .L_80181DF0
/* 80181DA4 0017ECE4  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80181DA8 0017ECE8  28 00 00 00 */	cmplwi r0, 0
/* 80181DAC 0017ECEC  41 82 00 28 */	beq .L_80181DD4
/* 80181DB0 0017ECF0  38 00 00 00 */	li r0, 0
/* 80181DB4 0017ECF4  38 C1 00 0C */	addi r6, r1, 0xc
/* 80181DB8 0017ECF8  98 01 00 0C */	stb r0, 0xc(r1)
/* 80181DBC 0017ECFC  38 A0 00 01 */	li r5, 1
/* 80181DC0 0017ED00  81 83 00 00 */	lwz r12, 0(r3)
/* 80181DC4 0017ED04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80181DC8 0017ED08  7D 89 03 A6 */	mtctr r12
/* 80181DCC 0017ED0C  4E 80 04 21 */	bctrl 
/* 80181DD0 0017ED10  48 00 01 14 */	b .L_80181EE4
.L_80181DD4:
/* 80181DD4 0017ED14  81 83 00 00 */	lwz r12, 0(r3)
/* 80181DD8 0017ED18  38 A0 00 00 */	li r5, 0
/* 80181DDC 0017ED1C  38 C0 00 00 */	li r6, 0
/* 80181DE0 0017ED20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80181DE4 0017ED24  7D 89 03 A6 */	mtctr r12
/* 80181DE8 0017ED28  4E 80 04 21 */	bctrl 
/* 80181DEC 0017ED2C  48 00 00 F8 */	b .L_80181EE4
.L_80181DF0:
/* 80181DF0 0017ED30  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80181DF4 0017ED34  7F E3 FB 78 */	mr r3, r31
/* 80181DF8 0017ED38  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80181DFC 0017ED3C  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80181E00 0017ED40  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80181E04 0017ED44  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80181E08 0017ED48  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80181E0C 0017ED4C  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80181E10 0017ED50  A8 9E 00 16 */	lha r4, 0x16(r30)
/* 80181E14 0017ED54  4B FB B1 19 */	bl assertMotion__Q24Game8FakePikiFi
/* 80181E18 0017ED58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80181E1C 0017ED5C  40 82 00 68 */	bne .L_80181E84
/* 80181E20 0017ED60  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80181E24 0017ED64  28 00 00 00 */	cmplwi r0, 0
/* 80181E28 0017ED68  41 82 00 30 */	beq .L_80181E58
/* 80181E2C 0017ED6C  38 00 00 00 */	li r0, 0
/* 80181E30 0017ED70  7F C3 F3 78 */	mr r3, r30
/* 80181E34 0017ED74  98 01 00 08 */	stb r0, 8(r1)
/* 80181E38 0017ED78  7F E4 FB 78 */	mr r4, r31
/* 80181E3C 0017ED7C  38 C1 00 08 */	addi r6, r1, 8
/* 80181E40 0017ED80  38 A0 00 01 */	li r5, 1
/* 80181E44 0017ED84  81 9E 00 00 */	lwz r12, 0(r30)
/* 80181E48 0017ED88  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80181E4C 0017ED8C  7D 89 03 A6 */	mtctr r12
/* 80181E50 0017ED90  4E 80 04 21 */	bctrl 
/* 80181E54 0017ED94  48 00 00 24 */	b .L_80181E78
.L_80181E58:
/* 80181E58 0017ED98  7F C3 F3 78 */	mr r3, r30
/* 80181E5C 0017ED9C  7F E4 FB 78 */	mr r4, r31
/* 80181E60 0017EDA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80181E64 0017EDA4  38 A0 00 00 */	li r5, 0
/* 80181E68 0017EDA8  38 C0 00 00 */	li r6, 0
/* 80181E6C 0017EDAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80181E70 0017EDB0  7D 89 03 A6 */	mtctr r12
/* 80181E74 0017EDB4  4E 80 04 21 */	bctrl 
.L_80181E78:
/* 80181E78 0017EDB8  38 00 00 00 */	li r0, 0
/* 80181E7C 0017EDBC  98 1F 02 6A */	stb r0, 0x26a(r31)
/* 80181E80 0017EDC0  48 00 00 64 */	b .L_80181EE4
.L_80181E84:
/* 80181E84 0017EDC4  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80181E88 0017EDC8  28 00 00 00 */	cmplwi r0, 0
/* 80181E8C 0017EDCC  40 82 00 58 */	bne .L_80181EE4
/* 80181E90 0017EDD0  88 1E 00 13 */	lbz r0, 0x13(r30)
/* 80181E94 0017EDD4  28 00 00 00 */	cmplwi r0, 0
/* 80181E98 0017EDD8  40 82 00 1C */	bne .L_80181EB4
/* 80181E9C 0017EDDC  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 80181EA0 0017EDE0  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80181EA4 0017EDE4  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80181EA8 0017EDE8  41 82 00 0C */	beq .L_80181EB4
/* 80181EAC 0017EDEC  38 00 00 01 */	li r0, 1
/* 80181EB0 0017EDF0  98 1E 00 13 */	stb r0, 0x13(r30)
.L_80181EB4:
/* 80181EB4 0017EDF4  88 1E 00 13 */	lbz r0, 0x13(r30)
/* 80181EB8 0017EDF8  28 00 00 00 */	cmplwi r0, 0
/* 80181EBC 0017EDFC  41 82 00 28 */	beq .L_80181EE4
/* 80181EC0 0017EE00  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 80181EC4 0017EE04  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80181EC8 0017EE08  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80181ECC 0017EE0C  40 82 00 18 */	bne .L_80181EE4
/* 80181ED0 0017EE10  38 00 00 01 */	li r0, 1
/* 80181ED4 0017EE14  98 1E 00 14 */	stb r0, 0x14(r30)
/* 80181ED8 0017EE18  88 7F 02 6A */	lbz r3, 0x26a(r31)
/* 80181EDC 0017EE1C  38 03 00 01 */	addi r0, r3, 1
/* 80181EE0 0017EE20  98 1F 02 6A */	stb r0, 0x26a(r31)
.L_80181EE4:
/* 80181EE4 0017EE24  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80181EE8 0017EE28  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80181EEC 0017EE2C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80181EF0 0017EE30  7C 08 03 A6 */	mtlr r0
/* 80181EF4 0017EE34  38 21 00 20 */	addi r1, r1, 0x20
/* 80181EF8 0017EE38  4E 80 00 20 */	blr 
.endfn exec__Q24Game13NaviNukuStateFPQ24Game4Navi

.fn cleanup__Q24Game13NaviNukuStateFPQ24Game4Navi, global
/* 80181EFC 0017EE3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80181F00 0017EE40  7C 08 02 A6 */	mflr r0
/* 80181F04 0017EE44  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80181F08 0017EE48  7C 83 23 78 */	mr r3, r4
/* 80181F0C 0017EE4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80181F10 0017EE50  D0 04 01 18 */	stfs f0, 0x118(r4)
/* 80181F14 0017EE54  4B FC 2C 4D */	bl startThrowDisable__Q24Game4NaviFv
/* 80181F18 0017EE58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80181F1C 0017EE5C  7C 08 03 A6 */	mtlr r0
/* 80181F20 0017EE60  38 21 00 10 */	addi r1, r1, 0x10
/* 80181F24 0017EE64  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13NaviNukuStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game13NaviNukuStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 80181F28 0017EE68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80181F2C 0017EE6C  7C 08 02 A6 */	mflr r0
/* 80181F30 0017EE70  90 01 00 24 */	stw r0, 0x24(r1)
/* 80181F34 0017EE74  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80181F38 0017EE78  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80181F3C 0017EE7C  7C 9F 23 78 */	mr r31, r4
/* 80181F40 0017EE80  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80181F44 0017EE84  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80181F48 0017EE88  7C 7E 1B 78 */	mr r30, r3
/* 80181F4C 0017EE8C  41 82 00 5C */	beq .L_80181FA8
/* 80181F50 0017EE90  40 80 01 38 */	bge .L_80182088
/* 80181F54 0017EE94  2C 00 00 02 */	cmpwi r0, 2
/* 80181F58 0017EE98  41 82 00 08 */	beq .L_80181F60
/* 80181F5C 0017EE9C  48 00 01 2C */	b .L_80182088
.L_80181F60:
/* 80181F60 0017EEA0  38 00 00 01 */	li r0, 1
/* 80181F64 0017EEA4  98 1E 00 15 */	stb r0, 0x15(r30)
/* 80181F68 0017EEA8  A0 7E 00 10 */	lhz r3, 0x10(r30)
/* 80181F6C 0017EEAC  38 03 FF FF */	addi r0, r3, -1
/* 80181F70 0017EEB0  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80181F74 0017EEB4  A0 1E 00 10 */	lhz r0, 0x10(r30)
/* 80181F78 0017EEB8  28 00 00 00 */	cmplwi r0, 0
/* 80181F7C 0017EEBC  40 82 01 0C */	bne .L_80182088
/* 80181F80 0017EEC0  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80181F84 0017EEC4  38 80 28 21 */	li r4, 0x2821
/* 80181F88 0017EEC8  38 A0 00 00 */	li r5, 0
/* 80181F8C 0017EECC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80181F90 0017EED0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80181F94 0017EED4  7D 89 03 A6 */	mtctr r12
/* 80181F98 0017EED8  4E 80 04 21 */	bctrl 
/* 80181F9C 0017EEDC  38 00 00 01 */	li r0, 1
/* 80181FA0 0017EEE0  98 1E 00 12 */	stb r0, 0x12(r30)
/* 80181FA4 0017EEE4  48 00 00 E4 */	b .L_80182088
.L_80181FA8:
/* 80181FA8 0017EEE8  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 80181FAC 0017EEEC  28 00 00 00 */	cmplwi r0, 0
/* 80181FB0 0017EEF0  41 82 00 88 */	beq .L_80182038
/* 80181FB4 0017EEF4  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80181FB8 0017EEF8  28 00 00 00 */	cmplwi r0, 0
/* 80181FBC 0017EEFC  40 82 00 14 */	bne .L_80181FD0
/* 80181FC0 0017EF00  7F E3 FB 78 */	mr r3, r31
/* 80181FC4 0017EF04  4B FB E6 81 */	bl procActionButton__Q24Game4NaviFv
/* 80181FC8 0017EF08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80181FCC 0017EF0C  40 82 00 BC */	bne .L_80182088
.L_80181FD0:
/* 80181FD0 0017EF10  38 60 00 00 */	li r3, 0
/* 80181FD4 0017EF14  98 7E 00 14 */	stb r3, 0x14(r30)
/* 80181FD8 0017EF18  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80181FDC 0017EF1C  28 00 00 00 */	cmplwi r0, 0
/* 80181FE0 0017EF20  41 82 00 2C */	beq .L_8018200C
/* 80181FE4 0017EF24  98 61 00 0C */	stb r3, 0xc(r1)
/* 80181FE8 0017EF28  7F C3 F3 78 */	mr r3, r30
/* 80181FEC 0017EF2C  7F E4 FB 78 */	mr r4, r31
/* 80181FF0 0017EF30  38 C1 00 0C */	addi r6, r1, 0xc
/* 80181FF4 0017EF34  81 9E 00 00 */	lwz r12, 0(r30)
/* 80181FF8 0017EF38  38 A0 00 01 */	li r5, 1
/* 80181FFC 0017EF3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80182000 0017EF40  7D 89 03 A6 */	mtctr r12
/* 80182004 0017EF44  4E 80 04 21 */	bctrl 
/* 80182008 0017EF48  48 00 00 24 */	b .L_8018202C
.L_8018200C:
/* 8018200C 0017EF4C  7F C3 F3 78 */	mr r3, r30
/* 80182010 0017EF50  7F E4 FB 78 */	mr r4, r31
/* 80182014 0017EF54  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182018 0017EF58  38 A0 00 00 */	li r5, 0
/* 8018201C 0017EF5C  38 C0 00 00 */	li r6, 0
/* 80182020 0017EF60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80182024 0017EF64  7D 89 03 A6 */	mtctr r12
/* 80182028 0017EF68  4E 80 04 21 */	bctrl 
.L_8018202C:
/* 8018202C 0017EF6C  38 00 00 00 */	li r0, 0
/* 80182030 0017EF70  98 1F 02 6A */	stb r0, 0x26a(r31)
/* 80182034 0017EF74  48 00 00 54 */	b .L_80182088
.L_80182038:
/* 80182038 0017EF78  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 8018203C 0017EF7C  28 00 00 00 */	cmplwi r0, 0
/* 80182040 0017EF80  41 82 00 28 */	beq .L_80182068
/* 80182044 0017EF84  38 00 00 00 */	li r0, 0
/* 80182048 0017EF88  38 C1 00 08 */	addi r6, r1, 8
/* 8018204C 0017EF8C  98 01 00 08 */	stb r0, 8(r1)
/* 80182050 0017EF90  38 A0 00 01 */	li r5, 1
/* 80182054 0017EF94  81 83 00 00 */	lwz r12, 0(r3)
/* 80182058 0017EF98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018205C 0017EF9C  7D 89 03 A6 */	mtctr r12
/* 80182060 0017EFA0  4E 80 04 21 */	bctrl 
/* 80182064 0017EFA4  48 00 00 1C */	b .L_80182080
.L_80182068:
/* 80182068 0017EFA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8018206C 0017EFAC  38 A0 00 00 */	li r5, 0
/* 80182070 0017EFB0  38 C0 00 00 */	li r6, 0
/* 80182074 0017EFB4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80182078 0017EFB8  7D 89 03 A6 */	mtctr r12
/* 8018207C 0017EFBC  4E 80 04 21 */	bctrl 
.L_80182080:
/* 80182080 0017EFC0  38 00 00 00 */	li r0, 0
/* 80182084 0017EFC4  98 1F 02 6A */	stb r0, 0x26a(r31)
.L_80182088:
/* 80182088 0017EFC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018208C 0017EFCC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80182090 0017EFD0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80182094 0017EFD4  7C 08 03 A6 */	mtlr r0
/* 80182098 0017EFD8  38 21 00 20 */	addi r1, r1, 0x20
/* 8018209C 0017EFDC  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game13NaviNukuStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn init__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 801820A0 0017EFE0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801820A4 0017EFE4  7C 08 02 A6 */	mflr r0
/* 801820A8 0017EFE8  90 01 00 74 */	stw r0, 0x74(r1)
/* 801820AC 0017EFEC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 801820B0 0017EFF0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 801820B4 0017EFF4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 801820B8 0017EFF8  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 801820BC 0017EFFC  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 801820C0 0017F000  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 801820C4 0017F004  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801820C8 0017F008  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801820CC 0017F00C  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801820D0 0017F010  7C 7D 1B 78 */	mr r29, r3
/* 801820D4 0017F014  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801820D8 0017F018  7C 9E 23 78 */	mr r30, r4
/* 801820DC 0017F01C  7C BF 2B 78 */	mr r31, r5
/* 801820E0 0017F020  38 80 00 00 */	li r4, 0
/* 801820E4 0017F024  48 06 52 C1 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801820E8 0017F028  28 1F 00 00 */	cmplwi r31, 0
/* 801820EC 0017F02C  40 82 00 20 */	bne .L_8018210C
/* 801820F0 0017F030  3C 60 80 48 */	lis r3, lbl_8047EB4C@ha
/* 801820F4 0017F034  3C A0 80 48 */	lis r5, lbl_8047EB5C@ha
/* 801820F8 0017F038  38 63 EB 4C */	addi r3, r3, lbl_8047EB4C@l
/* 801820FC 0017F03C  38 80 0A D1 */	li r4, 0xad1
/* 80182100 0017F040  38 A5 EB 5C */	addi r5, r5, lbl_8047EB5C@l
/* 80182104 0017F044  4C C6 31 82 */	crclr 6
/* 80182108 0017F048  4B EA 85 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018210C:
/* 8018210C 0017F04C  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80182110 0017F050  38 00 00 00 */	li r0, 0
/* 80182114 0017F054  7F C4 F3 78 */	mr r4, r30
/* 80182118 0017F058  38 61 00 14 */	addi r3, r1, 0x14
/* 8018211C 0017F05C  D0 1D 00 30 */	stfs f0, 0x30(r29)
/* 80182120 0017F060  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80182124 0017F064  D0 1D 00 34 */	stfs f0, 0x34(r29)
/* 80182128 0017F068  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8018212C 0017F06C  D0 1D 00 38 */	stfs f0, 0x38(r29)
/* 80182130 0017F070  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80182134 0017F074  D0 1D 00 3C */	stfs f0, 0x3c(r29)
/* 80182138 0017F078  80 BF 00 10 */	lwz r5, 0x10(r31)
/* 8018213C 0017F07C  90 BD 00 40 */	stw r5, 0x40(r29)
/* 80182140 0017F080  80 BF 00 14 */	lwz r5, 0x14(r31)
/* 80182144 0017F084  90 BD 00 44 */	stw r5, 0x44(r29)
/* 80182148 0017F088  88 BF 00 18 */	lbz r5, 0x18(r31)
/* 8018214C 0017F08C  98 BD 00 48 */	stb r5, 0x48(r29)
/* 80182150 0017F090  98 1D 00 20 */	stb r0, 0x20(r29)
/* 80182154 0017F094  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182158 0017F098  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018215C 0017F09C  7D 89 03 A6 */	mtctr r12
/* 80182160 0017F0A0  4E 80 04 21 */	bctrl 
/* 80182164 0017F0A4  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 80182168 0017F0A8  38 61 00 20 */	addi r3, r1, 0x20
/* 8018216C 0017F0AC  81 84 00 00 */	lwz r12, 0(r4)
/* 80182170 0017F0B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80182174 0017F0B4  7D 89 03 A6 */	mtctr r12
/* 80182178 0017F0B8  4E 80 04 21 */	bctrl 
/* 8018217C 0017F0BC  C0 61 00 20 */	lfs f3, 0x20(r1)
/* 80182180 0017F0C0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80182184 0017F0C4  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80182188 0017F0C8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8018218C 0017F0CC  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 80182190 0017F0D0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80182194 0017F0D4  EF C3 10 28 */	fsubs f30, f3, f2
/* 80182198 0017F0D8  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8018219C 0017F0DC  EF E1 00 28 */	fsubs f31, f1, f0
/* 801821A0 0017F0E0  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801821A4 0017F0E4  FC 20 F0 90 */	fmr f1, f30
/* 801821A8 0017F0E8  EF A2 00 28 */	fsubs f29, f2, f0
/* 801821AC 0017F0EC  FC 40 F8 90 */	fmr f2, f31
/* 801821B0 0017F0F0  4B EB 2F 59 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 801821B4 0017F0F4  EC 5D 07 72 */	fmuls f2, f29, f29
/* 801821B8 0017F0F8  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801821BC 0017F0FC  EC 7F 07 F2 */	fmuls f3, f31, f31
/* 801821C0 0017F100  D0 3D 00 10 */	stfs f1, 0x10(r29)
/* 801821C4 0017F104  EC 3E 17 BA */	fmadds f1, f30, f30, f2
/* 801821C8 0017F108  EC 23 08 2A */	fadds f1, f3, f1
/* 801821CC 0017F10C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801821D0 0017F110  40 81 00 14 */	ble .L_801821E4
/* 801821D4 0017F114  40 81 00 14 */	ble .L_801821E8
/* 801821D8 0017F118  FC 00 08 34 */	frsqrte f0, f1
/* 801821DC 0017F11C  EC 20 00 72 */	fmuls f1, f0, f1
/* 801821E0 0017F120  48 00 00 08 */	b .L_801821E8
.L_801821E4:
/* 801821E4 0017F124  FC 20 00 90 */	fmr f1, f0
.L_801821E8:
/* 801821E8 0017F128  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801821EC 0017F12C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801821F0 0017F130  40 81 00 18 */	ble .L_80182208
/* 801821F4 0017F134  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 801821F8 0017F138  EC 00 08 24 */	fdivs f0, f0, f1
/* 801821FC 0017F13C  EF DE 00 32 */	fmuls f30, f30, f0
/* 80182200 0017F140  EF BD 00 32 */	fmuls f29, f29, f0
/* 80182204 0017F144  EF FF 00 32 */	fmuls f31, f31, f0
.L_80182208:
/* 80182208 0017F148  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 8018220C 0017F14C  38 61 00 08 */	addi r3, r1, 8
/* 80182210 0017F150  81 84 00 00 */	lwz r12, 0(r4)
/* 80182214 0017F154  81 8C 00 08 */	lwz r12, 8(r12)
/* 80182218 0017F158  7D 89 03 A6 */	mtctr r12
/* 8018221C 0017F15C  4E 80 04 21 */	bctrl 
/* 80182220 0017F160  C0 82 A9 20 */	lfs f4, lbl_80518C80@sda21(r2)
/* 80182224 0017F164  7F C3 F3 78 */	mr r3, r30
/* 80182228 0017F168  C0 21 00 08 */	lfs f1, 8(r1)
/* 8018222C 0017F16C  38 80 00 1E */	li r4, 0x1e
/* 80182230 0017F170  EC 1E 01 32 */	fmuls f0, f30, f4
/* 80182234 0017F174  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 80182238 0017F178  EC 5D 01 32 */	fmuls f2, f29, f4
/* 8018223C 0017F17C  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 80182240 0017F180  EC 9F 01 32 */	fmuls f4, f31, f4
/* 80182244 0017F184  38 A0 00 1E */	li r5, 0x1e
/* 80182248 0017F188  EC 01 00 28 */	fsubs f0, f1, f0
/* 8018224C 0017F18C  38 C0 00 00 */	li r6, 0
/* 80182250 0017F190  EC 23 10 28 */	fsubs f1, f3, f2
/* 80182254 0017F194  38 E0 00 00 */	li r7, 0
/* 80182258 0017F198  EC 45 20 28 */	fsubs f2, f5, f4
/* 8018225C 0017F19C  D0 1D 00 14 */	stfs f0, 0x14(r29)
/* 80182260 0017F1A0  D0 3D 00 18 */	stfs f1, 0x18(r29)
/* 80182264 0017F1A4  D0 5D 00 1C */	stfs f2, 0x1c(r29)
/* 80182268 0017F1A8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018226C 0017F1AC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80182270 0017F1B0  7D 89 03 A6 */	mtctr r12
/* 80182274 0017F1B4  4E 80 04 21 */	bctrl 
/* 80182278 0017F1B8  7F C3 F3 78 */	mr r3, r30
/* 8018227C 0017F1BC  4B FB AC D9 */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 80182280 0017F1C0  7F C3 F3 78 */	mr r3, r30
/* 80182284 0017F1C4  38 80 00 00 */	li r4, 0
/* 80182288 0017F1C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018228C 0017F1CC  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 80182290 0017F1D0  7D 89 03 A6 */	mtctr r12
/* 80182294 0017F1D4  4E 80 04 21 */	bctrl 
/* 80182298 0017F1D8  38 00 00 00 */	li r0, 0
/* 8018229C 0017F1DC  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801822A0 0017F1E0  98 1D 00 4C */	stb r0, 0x4c(r29)
/* 801822A4 0017F1E4  D0 1E 01 18 */	stfs f0, 0x118(r30)
/* 801822A8 0017F1E8  98 1D 00 5C */	stb r0, 0x5c(r29)
/* 801822AC 0017F1EC  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 801822B0 0017F1F0  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 801822B4 0017F1F4  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 801822B8 0017F1F8  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 801822BC 0017F1FC  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 801822C0 0017F200  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 801822C4 0017F204  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801822C8 0017F208  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801822CC 0017F20C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801822D0 0017F210  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 801822D4 0017F214  7C 08 03 A6 */	mtlr r0
/* 801822D8 0017F218  38 21 00 70 */	addi r1, r1, 0x70
/* 801822DC 0017F21C  4E 80 00 20 */	blr 
.endfn init__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviPQ24Game8StateArg

.fn "wallCallback__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviR10Vector3<f>", global
/* 801822E0 0017F220  88 83 00 5C */	lbz r4, 0x5c(r3)
/* 801822E4 0017F224  38 04 00 01 */	addi r0, r4, 1
/* 801822E8 0017F228  98 03 00 5C */	stb r0, 0x5c(r3)
/* 801822EC 0017F22C  4E 80 00 20 */	blr 
.endfn "wallCallback__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviR10Vector3<f>"

.fn ignoreAtari__Q24Game19NaviNukuAdjustStateFPQ24Game8Creature, global
/* 801822F0 0017F230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801822F4 0017F234  7C 08 02 A6 */	mflr r0
/* 801822F8 0017F238  90 01 00 14 */	stw r0, 0x14(r1)
/* 801822FC 0017F23C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80182300 0017F240  3B E0 00 00 */	li r31, 0
/* 80182304 0017F244  93 C1 00 08 */	stw r30, 8(r1)
/* 80182308 0017F248  7C 9E 23 78 */	mr r30, r4
/* 8018230C 0017F24C  7F C3 F3 78 */	mr r3, r30
/* 80182310 0017F250  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182314 0017F254  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80182318 0017F258  7D 89 03 A6 */	mtctr r12
/* 8018231C 0017F25C  4E 80 04 21 */	bctrl 
/* 80182320 0017F260  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80182324 0017F264  40 82 00 10 */	bne .L_80182334
/* 80182328 0017F268  A0 1E 01 28 */	lhz r0, 0x128(r30)
/* 8018232C 0017F26C  28 00 04 02 */	cmplwi r0, 0x402
/* 80182330 0017F270  40 82 00 08 */	bne .L_80182338
.L_80182334:
/* 80182334 0017F274  3B E0 00 01 */	li r31, 1
.L_80182338:
/* 80182338 0017F278  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018233C 0017F27C  7F E3 FB 78 */	mr r3, r31
/* 80182340 0017F280  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80182344 0017F284  83 C1 00 08 */	lwz r30, 8(r1)
/* 80182348 0017F288  7C 08 03 A6 */	mtlr r0
/* 8018234C 0017F28C  38 21 00 10 */	addi r1, r1, 0x10
/* 80182350 0017F290  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q24Game19NaviNukuAdjustStateFPQ24Game8Creature

.fn collisionCallback__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviRQ24Game9CollEvent, global
/* 80182354 0017F294  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80182358 0017F298  7C 08 02 A6 */	mflr r0
/* 8018235C 0017F29C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80182360 0017F2A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80182364 0017F2A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80182368 0017F2A8  7C 7E 1B 78 */	mr r30, r3
/* 8018236C 0017F2AC  83 E5 00 00 */	lwz r31, 0(r5)
/* 80182370 0017F2B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80182374 0017F2B4  7F E3 FB 78 */	mr r3, r31
/* 80182378 0017F2B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8018237C 0017F2BC  7D 89 03 A6 */	mtctr r12
/* 80182380 0017F2C0  4E 80 04 21 */	bctrl 
/* 80182384 0017F2C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80182388 0017F2C8  40 82 00 78 */	bne .L_80182400
/* 8018238C 0017F2CC  7F E3 FB 78 */	mr r3, r31
/* 80182390 0017F2D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80182394 0017F2D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80182398 0017F2D8  7D 89 03 A6 */	mtctr r12
/* 8018239C 0017F2DC  4E 80 04 21 */	bctrl 
/* 801823A0 0017F2E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801823A4 0017F2E4  40 82 00 5C */	bne .L_80182400
/* 801823A8 0017F2E8  7F E3 FB 78 */	mr r3, r31
/* 801823AC 0017F2EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801823B0 0017F2F0  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 801823B4 0017F2F4  7D 89 03 A6 */	mtctr r12
/* 801823B8 0017F2F8  4E 80 04 21 */	bctrl 
/* 801823BC 0017F2FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801823C0 0017F300  40 82 00 08 */	bne .L_801823C8
/* 801823C4 0017F304  48 00 00 3C */	b .L_80182400
.L_801823C8:
/* 801823C8 0017F308  38 00 00 01 */	li r0, 1
/* 801823CC 0017F30C  7F E4 FB 78 */	mr r4, r31
/* 801823D0 0017F310  98 1E 00 4C */	stb r0, 0x4c(r30)
/* 801823D4 0017F314  38 61 00 08 */	addi r3, r1, 8
/* 801823D8 0017F318  81 9F 00 00 */	lwz r12, 0(r31)
/* 801823DC 0017F31C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801823E0 0017F320  7D 89 03 A6 */	mtctr r12
/* 801823E4 0017F324  4E 80 04 21 */	bctrl 
/* 801823E8 0017F328  C0 01 00 08 */	lfs f0, 8(r1)
/* 801823EC 0017F32C  D0 1E 00 50 */	stfs f0, 0x50(r30)
/* 801823F0 0017F330  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801823F4 0017F334  D0 1E 00 54 */	stfs f0, 0x54(r30)
/* 801823F8 0017F338  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801823FC 0017F33C  D0 1E 00 58 */	stfs f0, 0x58(r30)
.L_80182400:
/* 80182400 0017F340  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80182404 0017F344  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80182408 0017F348  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018240C 0017F34C  7C 08 03 A6 */	mtlr r0
/* 80182410 0017F350  38 21 00 20 */	addi r1, r1, 0x20
/* 80182414 0017F354  4E 80 00 20 */	blr 
.endfn collisionCallback__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviRQ24Game9CollEvent

.fn exec__Q24Game19NaviNukuAdjustStateFPQ24Game4Navi, global
/* 80182418 0017F358  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 8018241C 0017F35C  7C 08 02 A6 */	mflr r0
/* 80182420 0017F360  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80182424 0017F364  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 80182428 0017F368  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 8018242C 0017F36C  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 80182430 0017F370  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 80182434 0017F374  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 80182438 0017F378  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 8018243C 0017F37C  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 80182440 0017F380  F3 81 00 B8 */	psq_st f28, 184(r1), 0, qr0
/* 80182444 0017F384  DB 61 00 A0 */	stfd f27, 0xa0(r1)
/* 80182448 0017F388  F3 61 00 A8 */	psq_st f27, 168(r1), 0, qr0
/* 8018244C 0017F38C  DB 41 00 90 */	stfd f26, 0x90(r1)
/* 80182450 0017F390  F3 41 00 98 */	psq_st f26, 152(r1), 0, qr0
/* 80182454 0017F394  DB 21 00 80 */	stfd f25, 0x80(r1)
/* 80182458 0017F398  F3 21 00 88 */	psq_st f25, 136(r1), 0, qr0
/* 8018245C 0017F39C  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80182460 0017F3A0  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80182464 0017F3A4  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80182468 0017F3A8  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 8018246C 0017F3AC  7C 7E 1B 78 */	mr r30, r3
/* 80182470 0017F3B0  7C 9F 23 78 */	mr r31, r4
/* 80182474 0017F3B4  28 05 00 00 */	cmplwi r5, 0
/* 80182478 0017F3B8  41 82 00 54 */	beq .L_801824CC
/* 8018247C 0017F3BC  80 05 00 18 */	lwz r0, 0x18(r5)
/* 80182480 0017F3C0  2C 00 00 00 */	cmpwi r0, 0
/* 80182484 0017F3C4  41 82 00 48 */	beq .L_801824CC
/* 80182488 0017F3C8  88 1E 00 48 */	lbz r0, 0x48(r30)
/* 8018248C 0017F3CC  28 00 00 00 */	cmplwi r0, 0
/* 80182490 0017F3D0  41 82 00 20 */	beq .L_801824B0
/* 80182494 0017F3D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80182498 0017F3D8  38 A0 00 01 */	li r5, 1
/* 8018249C 0017F3DC  38 C0 00 00 */	li r6, 0
/* 801824A0 0017F3E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801824A4 0017F3E4  7D 89 03 A6 */	mtctr r12
/* 801824A8 0017F3E8  4E 80 04 21 */	bctrl 
/* 801824AC 0017F3EC  48 00 06 9C */	b .L_80182B48
.L_801824B0:
/* 801824B0 0017F3F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801824B4 0017F3F4  38 A0 00 00 */	li r5, 0
/* 801824B8 0017F3F8  38 C0 00 00 */	li r6, 0
/* 801824BC 0017F3FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801824C0 0017F400  7D 89 03 A6 */	mtctr r12
/* 801824C4 0017F404  4E 80 04 21 */	bctrl 
/* 801824C8 0017F408  48 00 06 80 */	b .L_80182B48
.L_801824CC:
/* 801824CC 0017F40C  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 801824D0 0017F410  81 83 00 00 */	lwz r12, 0(r3)
/* 801824D4 0017F414  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801824D8 0017F418  7D 89 03 A6 */	mtctr r12
/* 801824DC 0017F41C  4E 80 04 21 */	bctrl 
/* 801824E0 0017F420  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801824E4 0017F424  40 82 00 58 */	bne .L_8018253C
/* 801824E8 0017F428  88 1E 00 48 */	lbz r0, 0x48(r30)
/* 801824EC 0017F42C  28 00 00 00 */	cmplwi r0, 0
/* 801824F0 0017F430  41 82 00 28 */	beq .L_80182518
/* 801824F4 0017F434  7F C3 F3 78 */	mr r3, r30
/* 801824F8 0017F438  7F E4 FB 78 */	mr r4, r31
/* 801824FC 0017F43C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182500 0017F440  38 A0 00 01 */	li r5, 1
/* 80182504 0017F444  38 C0 00 00 */	li r6, 0
/* 80182508 0017F448  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018250C 0017F44C  7D 89 03 A6 */	mtctr r12
/* 80182510 0017F450  4E 80 04 21 */	bctrl 
/* 80182514 0017F454  48 00 06 34 */	b .L_80182B48
.L_80182518:
/* 80182518 0017F458  7F C3 F3 78 */	mr r3, r30
/* 8018251C 0017F45C  7F E4 FB 78 */	mr r4, r31
/* 80182520 0017F460  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182524 0017F464  38 A0 00 00 */	li r5, 0
/* 80182528 0017F468  38 C0 00 00 */	li r6, 0
/* 8018252C 0017F46C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80182530 0017F470  7D 89 03 A6 */	mtctr r12
/* 80182534 0017F474  4E 80 04 21 */	bctrl 
/* 80182538 0017F478  48 00 06 10 */	b .L_80182B48
.L_8018253C:
/* 8018253C 0017F47C  88 1E 00 48 */	lbz r0, 0x48(r30)
/* 80182540 0017F480  28 00 00 00 */	cmplwi r0, 0
/* 80182544 0017F484  40 82 00 10 */	bne .L_80182554
/* 80182548 0017F488  7F E3 FB 78 */	mr r3, r31
/* 8018254C 0017F48C  38 80 00 00 */	li r4, 0
/* 80182550 0017F490  4B FC 38 99 */	bl makeCStick__Q24Game4NaviFb
.L_80182554:
/* 80182554 0017F494  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 80182558 0017F498  28 03 00 00 */	cmplwi r3, 0
/* 8018255C 0017F49C  41 82 00 3C */	beq .L_80182598
/* 80182560 0017F4A0  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80182564 0017F4A4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80182568 0017F4A8  41 82 00 30 */	beq .L_80182598
/* 8018256C 0017F4AC  38 00 00 00 */	li r0, 0
/* 80182570 0017F4B0  7F C3 F3 78 */	mr r3, r30
/* 80182574 0017F4B4  98 1F 02 6A */	stb r0, 0x26a(r31)
/* 80182578 0017F4B8  7F E4 FB 78 */	mr r4, r31
/* 8018257C 0017F4BC  38 A0 00 00 */	li r5, 0
/* 80182580 0017F4C0  38 C0 00 00 */	li r6, 0
/* 80182584 0017F4C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182588 0017F4C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018258C 0017F4CC  7D 89 03 A6 */	mtctr r12
/* 80182590 0017F4D0  4E 80 04 21 */	bctrl 
/* 80182594 0017F4D4  48 00 05 B4 */	b .L_80182B48
.L_80182598:
/* 80182598 0017F4D8  7F E4 FB 78 */	mr r4, r31
/* 8018259C 0017F4DC  38 61 00 50 */	addi r3, r1, 0x50
/* 801825A0 0017F4E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801825A4 0017F4E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801825A8 0017F4E8  7D 89 03 A6 */	mtctr r12
/* 801825AC 0017F4EC  4E 80 04 21 */	bctrl 
/* 801825B0 0017F4F0  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 801825B4 0017F4F4  7F E4 FB 78 */	mr r4, r31
/* 801825B8 0017F4F8  38 61 00 38 */	addi r3, r1, 0x38
/* 801825BC 0017F4FC  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801825C0 0017F500  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 801825C4 0017F504  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 801825C8 0017F508  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 801825CC 0017F50C  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 801825D0 0017F510  81 9F 00 00 */	lwz r12, 0(r31)
/* 801825D4 0017F514  81 8C 00 08 */	lwz r12, 8(r12)
/* 801825D8 0017F518  7D 89 03 A6 */	mtctr r12
/* 801825DC 0017F51C  4E 80 04 21 */	bctrl 
/* 801825E0 0017F520  80 9E 00 44 */	lwz r4, 0x44(r30)
/* 801825E4 0017F524  38 61 00 44 */	addi r3, r1, 0x44
/* 801825E8 0017F528  81 84 00 00 */	lwz r12, 0(r4)
/* 801825EC 0017F52C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801825F0 0017F530  7D 89 03 A6 */	mtctr r12
/* 801825F4 0017F534  4E 80 04 21 */	bctrl 
/* 801825F8 0017F538  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 801825FC 0017F53C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80182600 0017F540  C0 61 00 44 */	lfs f3, 0x44(r1)
/* 80182604 0017F544  EC 81 00 28 */	fsubs f4, f1, f0
/* 80182608 0017F548  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 8018260C 0017F54C  C0 21 00 4C */	lfs f1, 0x4c(r1)
/* 80182610 0017F550  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80182614 0017F554  EC 43 10 28 */	fsubs f2, f3, f2
/* 80182618 0017F558  EC 84 01 32 */	fmuls f4, f4, f4
/* 8018261C 0017F55C  EC 61 00 28 */	fsubs f3, f1, f0
/* 80182620 0017F560  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80182624 0017F564  EC 22 20 BA */	fmadds f1, f2, f2, f4
/* 80182628 0017F568  EC 43 00 F2 */	fmuls f2, f3, f3
/* 8018262C 0017F56C  EC 22 08 2A */	fadds f1, f2, f1
/* 80182630 0017F570  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80182634 0017F574  7F E4 FB 78 */	mr r4, r31
/* 80182638 0017F578  38 61 00 2C */	addi r3, r1, 0x2c
/* 8018263C 0017F57C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80182640 0017F580  81 8C 00 08 */	lwz r12, 8(r12)
/* 80182644 0017F584  7D 89 03 A6 */	mtctr r12
/* 80182648 0017F588  4E 80 04 21 */	bctrl 
/* 8018264C 0017F58C  C0 7E 00 14 */	lfs f3, 0x14(r30)
/* 80182650 0017F590  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80182654 0017F594  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 80182658 0017F598  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8018265C 0017F59C  EF 83 10 28 */	fsubs f28, f3, f2
/* 80182660 0017F5A0  C0 5E 00 18 */	lfs f2, 0x18(r30)
/* 80182664 0017F5A4  EF 41 00 28 */	fsubs f26, f1, f0
/* 80182668 0017F5A8  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8018266C 0017F5AC  EC 9C 07 32 */	fmuls f4, f28, f28
/* 80182670 0017F5B0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80182674 0017F5B4  EF 62 08 28 */	fsubs f27, f2, f1
/* 80182678 0017F5B8  EC 7A 06 B2 */	fmuls f3, f26, f26
/* 8018267C 0017F5BC  EC 24 18 2A */	fadds f1, f4, f3
/* 80182680 0017F5C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80182684 0017F5C4  40 81 00 1C */	ble .L_801826A0
/* 80182688 0017F5C8  EF FC 1F 3A */	fmadds f31, f28, f28, f3
/* 8018268C 0017F5CC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80182690 0017F5D0  40 81 00 14 */	ble .L_801826A4
/* 80182694 0017F5D4  FC 00 F8 34 */	frsqrte f0, f31
/* 80182698 0017F5D8  EF E0 07 F2 */	fmuls f31, f0, f31
/* 8018269C 0017F5DC  48 00 00 08 */	b .L_801826A4
.L_801826A0:
/* 801826A0 0017F5E0  FF E0 00 90 */	fmr f31, f0
.L_801826A4:
/* 801826A4 0017F5E4  EC BB 06 F2 */	fmuls f5, f27, f27
/* 801826A8 0017F5E8  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 801826AC 0017F5EC  FC 40 DA 10 */	fabs f2, f27
/* 801826B0 0017F5F0  EC 04 28 2A */	fadds f0, f4, f5
/* 801826B4 0017F5F4  FF A0 10 18 */	frsp f29, f2
/* 801826B8 0017F5F8  EC 03 00 2A */	fadds f0, f3, f0
/* 801826BC 0017F5FC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801826C0 0017F600  40 81 00 20 */	ble .L_801826E0
/* 801826C4 0017F604  EC 1C 2F 3A */	fmadds f0, f28, f28, f5
/* 801826C8 0017F608  EF C3 00 2A */	fadds f30, f3, f0
/* 801826CC 0017F60C  FC 1E 08 40 */	fcmpo cr0, f30, f1
/* 801826D0 0017F610  40 81 00 14 */	ble .L_801826E4
/* 801826D4 0017F614  FC 00 F0 34 */	frsqrte f0, f30
/* 801826D8 0017F618  EF C0 07 B2 */	fmuls f30, f0, f30
/* 801826DC 0017F61C  48 00 00 08 */	b .L_801826E4
.L_801826E0:
/* 801826E0 0017F620  FF C0 08 90 */	fmr f30, f1
.L_801826E4:
/* 801826E4 0017F624  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801826E8 0017F628  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801826EC 0017F62C  40 81 00 1C */	ble .L_80182708
/* 801826F0 0017F630  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 801826F4 0017F634  EC 00 F0 24 */	fdivs f0, f0, f30
/* 801826F8 0017F638  EF 9C 00 32 */	fmuls f28, f28, f0
/* 801826FC 0017F63C  EF 7B 00 32 */	fmuls f27, f27, f0
/* 80182700 0017F640  EF 5A 00 32 */	fmuls f26, f26, f0
/* 80182704 0017F644  48 00 00 08 */	b .L_8018270C
.L_80182708:
/* 80182708 0017F648  FF C0 00 90 */	fmr f30, f0
.L_8018270C:
/* 8018270C 0017F64C  C3 3E 00 10 */	lfs f25, 0x10(r30)
/* 80182710 0017F650  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 80182714 0017F654  FC 20 C8 90 */	fmr f1, f25
/* 80182718 0017F658  48 28 F4 E5 */	bl angDist__Fff
/* 8018271C 0017F65C  FC 40 0A 10 */	fabs f2, f1
/* 80182720 0017F660  C0 02 A9 24 */	lfs f0, lbl_80518C84@sda21(r2)
/* 80182724 0017F664  FC 40 10 18 */	frsp f2, f2
/* 80182728 0017F668  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8018272C 0017F66C  40 80 01 80 */	bge .L_801828AC
/* 80182730 0017F670  C0 02 A8 DC */	lfs f0, lbl_80518C3C@sda21(r2)
/* 80182734 0017F674  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80182738 0017F678  40 80 01 74 */	bge .L_801828AC
/* 8018273C 0017F67C  C0 02 A8 EC */	lfs f0, lbl_80518C4C@sda21(r2)
/* 80182740 0017F680  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80182744 0017F684  40 80 01 68 */	bge .L_801828AC
/* 80182748 0017F688  D3 3F 01 FC */	stfs f25, 0x1fc(r31)
/* 8018274C 0017F68C  38 00 00 01 */	li r0, 1
/* 80182750 0017F690  90 0D 92 F8 */	stw r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
/* 80182754 0017F694  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80182758 0017F698  81 83 00 00 */	lwz r12, 0(r3)
/* 8018275C 0017F69C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80182760 0017F6A0  7D 89 03 A6 */	mtctr r12
/* 80182764 0017F6A4  4E 80 04 21 */	bctrl 
/* 80182768 0017F6A8  38 00 00 00 */	li r0, 0
/* 8018276C 0017F6AC  7C 7D 1B 79 */	or. r29, r3, r3
/* 80182770 0017F6B0  90 0D 92 F8 */	stw r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
/* 80182774 0017F6B4  40 82 00 58 */	bne .L_801827CC
/* 80182778 0017F6B8  88 1E 00 48 */	lbz r0, 0x48(r30)
/* 8018277C 0017F6BC  28 00 00 00 */	cmplwi r0, 0
/* 80182780 0017F6C0  41 82 00 28 */	beq .L_801827A8
/* 80182784 0017F6C4  7F C3 F3 78 */	mr r3, r30
/* 80182788 0017F6C8  7F E4 FB 78 */	mr r4, r31
/* 8018278C 0017F6CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182790 0017F6D0  38 A0 00 01 */	li r5, 1
/* 80182794 0017F6D4  38 C0 00 00 */	li r6, 0
/* 80182798 0017F6D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018279C 0017F6DC  7D 89 03 A6 */	mtctr r12
/* 801827A0 0017F6E0  4E 80 04 21 */	bctrl 
/* 801827A4 0017F6E4  48 00 03 A4 */	b .L_80182B48
.L_801827A8:
/* 801827A8 0017F6E8  7F C3 F3 78 */	mr r3, r30
/* 801827AC 0017F6EC  7F E4 FB 78 */	mr r4, r31
/* 801827B0 0017F6F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801827B4 0017F6F4  38 A0 00 00 */	li r5, 0
/* 801827B8 0017F6F8  38 C0 00 00 */	li r6, 0
/* 801827BC 0017F6FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801827C0 0017F700  7D 89 03 A6 */	mtctr r12
/* 801827C4 0017F704  4E 80 04 21 */	bctrl 
/* 801827C8 0017F708  48 00 03 80 */	b .L_80182B48
.L_801827CC:
/* 801827CC 0017F70C  38 80 00 00 */	li r4, 0
/* 801827D0 0017F710  4B FB 87 F9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801827D4 0017F714  80 9E 00 44 */	lwz r4, 0x44(r30)
/* 801827D8 0017F718  7F A3 EB 78 */	mr r3, r29
/* 801827DC 0017F71C  A0 84 01 F4 */	lhz r4, 0x1f4(r4)
/* 801827E0 0017F720  4B FC 7D E1 */	bl changeShape__Q24Game4PikiFi
/* 801827E4 0017F724  80 9E 00 44 */	lwz r4, 0x44(r30)
/* 801827E8 0017F728  7F A3 EB 78 */	mr r3, r29
/* 801827EC 0017F72C  A0 84 01 F6 */	lhz r4, 0x1f6(r4)
/* 801827F0 0017F730  4B FC 7F 81 */	bl changeHappa__Q24Game4PikiFi
/* 801827F4 0017F734  80 9E 00 44 */	lwz r4, 0x44(r30)
/* 801827F8 0017F738  38 61 00 20 */	addi r3, r1, 0x20
/* 801827FC 0017F73C  81 84 00 00 */	lwz r12, 0(r4)
/* 80182800 0017F740  81 8C 00 08 */	lwz r12, 8(r12)
/* 80182804 0017F744  7D 89 03 A6 */	mtctr r12
/* 80182808 0017F748  4E 80 04 21 */	bctrl 
/* 8018280C 0017F74C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80182810 0017F750  7F A3 EB 78 */	mr r3, r29
/* 80182814 0017F754  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80182818 0017F758  38 81 00 5C */	addi r4, r1, 0x5c
/* 8018281C 0017F75C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80182820 0017F760  38 A0 00 00 */	li r5, 0
/* 80182824 0017F764  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 80182828 0017F768  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 8018282C 0017F76C  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 80182830 0017F770  4B FB 89 79 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80182834 0017F774  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 80182838 0017F778  38 80 00 00 */	li r4, 0
/* 8018283C 0017F77C  4B FB 88 B5 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 80182840 0017F780  38 00 00 00 */	li r0, 0
/* 80182844 0017F784  7F A4 EB 78 */	mr r4, r29
/* 80182848 0017F788  90 1E 00 44 */	stw r0, 0x44(r30)
/* 8018284C 0017F78C  38 C1 00 0C */	addi r6, r1, 0xc
/* 80182850 0017F790  38 A0 00 0C */	li r5, 0xc
/* 80182854 0017F794  88 7F 02 6A */	lbz r3, 0x26a(r31)
/* 80182858 0017F798  7C 03 00 D0 */	neg r0, r3
/* 8018285C 0017F79C  93 E1 00 10 */	stw r31, 0x10(r1)
/* 80182860 0017F7A0  7C 00 1B 78 */	or r0, r0, r3
/* 80182864 0017F7A4  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80182868 0017F7A8  98 01 00 0C */	stb r0, 0xc(r1)
/* 8018286C 0017F7AC  80 7D 02 8C */	lwz r3, 0x28c(r29)
/* 80182870 0017F7B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80182874 0017F7B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80182878 0017F7B8  7D 89 03 A6 */	mtctr r12
/* 8018287C 0017F7BC  4E 80 04 21 */	bctrl 
/* 80182880 0017F7C0  88 1E 00 48 */	lbz r0, 0x48(r30)
/* 80182884 0017F7C4  7F C3 F3 78 */	mr r3, r30
/* 80182888 0017F7C8  7F E4 FB 78 */	mr r4, r31
/* 8018288C 0017F7CC  38 C1 00 08 */	addi r6, r1, 8
/* 80182890 0017F7D0  98 01 00 08 */	stb r0, 8(r1)
/* 80182894 0017F7D4  38 A0 00 08 */	li r5, 8
/* 80182898 0017F7D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018289C 0017F7DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801828A0 0017F7E0  7D 89 03 A6 */	mtctr r12
/* 801828A4 0017F7E4  4E 80 04 21 */	bctrl 
/* 801828A8 0017F7E8  48 00 00 70 */	b .L_80182918
.L_801828AC:
/* 801828AC 0017F7EC  C0 02 A8 C8 */	lfs f0, lbl_80518C28@sda21(r2)
/* 801828B0 0017F7F0  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 801828B4 0017F7F4  EC 00 00 72 */	fmuls f0, f0, f1
/* 801828B8 0017F7F8  EC 22 00 2A */	fadds f1, f2, f0
/* 801828BC 0017F7FC  48 28 F3 15 */	bl roundAng__Ff
/* 801828C0 0017F800  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 801828C4 0017F804  C0 82 A8 B4 */	lfs f4, lbl_80518C14@sda21(r2)
/* 801828C8 0017F808  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801828CC 0017F80C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 801828D0 0017F810  EC 04 00 72 */	fmuls f0, f4, f1
/* 801828D4 0017F814  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 801828D8 0017F818  40 81 00 0C */	ble .L_801828E4
/* 801828DC 0017F81C  C0 02 A8 A4 */	lfs f0, lbl_80518C04@sda21(r2)
/* 801828E0 0017F820  EC 80 08 24 */	fdivs f4, f0, f1
.L_801828E4:
/* 801828E4 0017F824  EC 7C 01 32 */	fmuls f3, f28, f4
/* 801828E8 0017F828  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801828EC 0017F82C  EC 5B 01 32 */	fmuls f2, f27, f4
/* 801828F0 0017F830  EC 3A 01 32 */	fmuls f1, f26, f4
/* 801828F4 0017F834  D0 7F 02 00 */	stfs f3, 0x200(r31)
/* 801828F8 0017F838  D0 5F 02 04 */	stfs f2, 0x204(r31)
/* 801828FC 0017F83C  D0 3F 02 08 */	stfs f1, 0x208(r31)
/* 80182900 0017F840  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80182904 0017F844  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80182908 0017F848  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8018290C 0017F84C  D0 7F 01 E4 */	stfs f3, 0x1e4(r31)
/* 80182910 0017F850  D0 5F 01 E8 */	stfs f2, 0x1e8(r31)
/* 80182914 0017F854  D0 3F 01 EC */	stfs f1, 0x1ec(r31)
.L_80182918:
/* 80182918 0017F858  88 1E 00 5C */	lbz r0, 0x5c(r30)
/* 8018291C 0017F85C  28 00 00 0A */	cmplwi r0, 0xa
/* 80182920 0017F860  40 81 00 58 */	ble .L_80182978
/* 80182924 0017F864  88 1E 00 48 */	lbz r0, 0x48(r30)
/* 80182928 0017F868  28 00 00 00 */	cmplwi r0, 0
/* 8018292C 0017F86C  41 82 00 28 */	beq .L_80182954
/* 80182930 0017F870  7F C3 F3 78 */	mr r3, r30
/* 80182934 0017F874  7F E4 FB 78 */	mr r4, r31
/* 80182938 0017F878  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018293C 0017F87C  38 A0 00 01 */	li r5, 1
/* 80182940 0017F880  38 C0 00 00 */	li r6, 0
/* 80182944 0017F884  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80182948 0017F888  7D 89 03 A6 */	mtctr r12
/* 8018294C 0017F88C  4E 80 04 21 */	bctrl 
/* 80182950 0017F890  48 00 01 F8 */	b .L_80182B48
.L_80182954:
/* 80182954 0017F894  7F C3 F3 78 */	mr r3, r30
/* 80182958 0017F898  7F E4 FB 78 */	mr r4, r31
/* 8018295C 0017F89C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182960 0017F8A0  38 A0 00 00 */	li r5, 0
/* 80182964 0017F8A4  38 C0 00 00 */	li r6, 0
/* 80182968 0017F8A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018296C 0017F8AC  7D 89 03 A6 */	mtctr r12
/* 80182970 0017F8B0  4E 80 04 21 */	bctrl 
/* 80182974 0017F8B4  48 00 01 D4 */	b .L_80182B48
.L_80182978:
/* 80182978 0017F8B8  88 7E 00 4C */	lbz r3, 0x4c(r30)
/* 8018297C 0017F8BC  28 03 00 00 */	cmplwi r3, 0
/* 80182980 0017F8C0  41 82 01 C8 */	beq .L_80182B48
/* 80182984 0017F8C4  C3 BF 02 00 */	lfs f29, 0x200(r31)
/* 80182988 0017F8C8  38 03 FF FF */	addi r0, r3, -1
/* 8018298C 0017F8CC  C3 DF 02 04 */	lfs f30, 0x204(r31)
/* 80182990 0017F8D0  7F E4 FB 78 */	mr r4, r31
/* 80182994 0017F8D4  C3 FF 02 08 */	lfs f31, 0x208(r31)
/* 80182998 0017F8D8  38 61 00 14 */	addi r3, r1, 0x14
/* 8018299C 0017F8DC  98 1E 00 4C */	stb r0, 0x4c(r30)
/* 801829A0 0017F8E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801829A4 0017F8E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801829A8 0017F8E8  7D 89 03 A6 */	mtctr r12
/* 801829AC 0017F8EC  4E 80 04 21 */	bctrl 
/* 801829B0 0017F8F0  C0 3E 00 54 */	lfs f1, 0x54(r30)
/* 801829B4 0017F8F4  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801829B8 0017F8F8  C0 5E 00 50 */	lfs f2, 0x50(r30)
/* 801829BC 0017F8FC  EC 81 00 28 */	fsubs f4, f1, f0
/* 801829C0 0017F900  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 801829C4 0017F904  C0 7E 00 58 */	lfs f3, 0x58(r30)
/* 801829C8 0017F908  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801829CC 0017F90C  EC A2 08 28 */	fsubs f5, f2, f1
/* 801829D0 0017F910  EC 24 01 32 */	fmuls f1, f4, f4
/* 801829D4 0017F914  EC 63 00 28 */	fsubs f3, f3, f0
/* 801829D8 0017F918  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801829DC 0017F91C  EC 25 09 7A */	fmadds f1, f5, f5, f1
/* 801829E0 0017F920  EC 43 00 F2 */	fmuls f2, f3, f3
/* 801829E4 0017F924  EC 22 08 2A */	fadds f1, f2, f1
/* 801829E8 0017F928  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801829EC 0017F92C  40 81 00 14 */	ble .L_80182A00
/* 801829F0 0017F930  40 81 00 14 */	ble .L_80182A04
/* 801829F4 0017F934  FC 00 08 34 */	frsqrte f0, f1
/* 801829F8 0017F938  EC 20 00 72 */	fmuls f1, f0, f1
/* 801829FC 0017F93C  48 00 00 08 */	b .L_80182A04
.L_80182A00:
/* 80182A00 0017F940  FC 20 00 90 */	fmr f1, f0
.L_80182A04:
/* 80182A04 0017F944  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80182A08 0017F948  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80182A0C 0017F94C  40 81 00 18 */	ble .L_80182A24
/* 80182A10 0017F950  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80182A14 0017F954  EC 00 08 24 */	fdivs f0, f0, f1
/* 80182A18 0017F958  EC A5 00 32 */	fmuls f5, f5, f0
/* 80182A1C 0017F95C  EC 63 00 32 */	fmuls f3, f3, f0
/* 80182A20 0017F960  48 00 00 08 */	b .L_80182A28
.L_80182A24:
/* 80182A24 0017F964  FC 20 00 90 */	fmr f1, f0
.L_80182A28:
/* 80182A28 0017F968  C0 42 A8 80 */	lfs f2, lbl_80518BE0@sda21(r2)
/* 80182A2C 0017F96C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80182A30 0017F970  40 81 01 18 */	ble .L_80182B48
/* 80182A34 0017F974  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80182A38 0017F978  EC 25 07 F2 */	fmuls f1, f5, f31
/* 80182A3C 0017F97C  EC 9F 07 F2 */	fmuls f4, f31, f31
/* 80182A40 0017F980  EC 1D 07 7A */	fmadds f0, f29, f29, f0
/* 80182A44 0017F984  EC 23 0F 78 */	fmsubs f1, f3, f29, f1
/* 80182A48 0017F988  FC 60 18 50 */	fneg f3, f3
/* 80182A4C 0017F98C  EC E4 00 2A */	fadds f7, f4, f0
/* 80182A50 0017F990  FC 07 10 40 */	fcmpo cr0, f7, f2
/* 80182A54 0017F994  40 81 00 14 */	ble .L_80182A68
/* 80182A58 0017F998  40 81 00 14 */	ble .L_80182A6C
/* 80182A5C 0017F99C  FC 00 38 34 */	frsqrte f0, f7
/* 80182A60 0017F9A0  EC E0 01 F2 */	fmuls f7, f0, f7
/* 80182A64 0017F9A4  48 00 00 08 */	b .L_80182A6C
.L_80182A68:
/* 80182A68 0017F9A8  FC E0 10 90 */	fmr f7, f2
.L_80182A6C:
/* 80182A6C 0017F9AC  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80182A70 0017F9B0  EC 63 01 F2 */	fmuls f3, f3, f7
/* 80182A74 0017F9B4  ED 05 01 F2 */	fmuls f8, f5, f7
/* 80182A78 0017F9B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80182A7C 0017F9BC  EC 20 01 F2 */	fmuls f1, f0, f7
/* 80182A80 0017F9C0  41 80 00 14 */	blt .L_80182A94
/* 80182A84 0017F9C4  C0 02 A9 28 */	lfs f0, lbl_80518C88@sda21(r2)
/* 80182A88 0017F9C8  EC 63 00 32 */	fmuls f3, f3, f0
/* 80182A8C 0017F9CC  EC 21 00 32 */	fmuls f1, f1, f0
/* 80182A90 0017F9D0  ED 08 00 32 */	fmuls f8, f8, f0
.L_80182A94:
/* 80182A94 0017F9D4  C0 C2 A9 2C */	lfs f6, lbl_80518C8C@sda21(r2)
/* 80182A98 0017F9D8  C0 82 A9 30 */	lfs f4, lbl_80518C90@sda21(r2)
/* 80182A9C 0017F9DC  EC 5E 01 B2 */	fmuls f2, f30, f6
/* 80182AA0 0017F9E0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80182AA4 0017F9E4  EC 21 01 32 */	fmuls f1, f1, f4
/* 80182AA8 0017F9E8  EC BD 01 B2 */	fmuls f5, f29, f6
/* 80182AAC 0017F9EC  EC 63 01 32 */	fmuls f3, f3, f4
/* 80182AB0 0017F9F0  ED 22 08 2A */	fadds f9, f2, f1
/* 80182AB4 0017F9F4  EC 5F 01 B2 */	fmuls f2, f31, f6
/* 80182AB8 0017F9F8  EC 28 01 32 */	fmuls f1, f8, f4
/* 80182ABC 0017F9FC  EC 85 18 2A */	fadds f4, f5, f3
/* 80182AC0 0017FA00  EC 69 02 72 */	fmuls f3, f9, f9
/* 80182AC4 0017FA04  EC A2 08 2A */	fadds f5, f2, f1
/* 80182AC8 0017FA08  EC 24 19 3A */	fmadds f1, f4, f4, f3
/* 80182ACC 0017FA0C  EC 45 01 72 */	fmuls f2, f5, f5
/* 80182AD0 0017FA10  EC 22 08 2A */	fadds f1, f2, f1
/* 80182AD4 0017FA14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80182AD8 0017FA18  40 81 00 14 */	ble .L_80182AEC
/* 80182ADC 0017FA1C  40 81 00 14 */	ble .L_80182AF0
/* 80182AE0 0017FA20  FC 00 08 34 */	frsqrte f0, f1
/* 80182AE4 0017FA24  EC 20 00 72 */	fmuls f1, f0, f1
/* 80182AE8 0017FA28  48 00 00 08 */	b .L_80182AF0
.L_80182AEC:
/* 80182AEC 0017FA2C  FC 20 00 90 */	fmr f1, f0
.L_80182AF0:
/* 80182AF0 0017FA30  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80182AF4 0017FA34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80182AF8 0017FA38  40 81 00 1C */	ble .L_80182B14
/* 80182AFC 0017FA3C  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80182B00 0017FA40  EC 00 08 24 */	fdivs f0, f0, f1
/* 80182B04 0017FA44  EC 84 00 32 */	fmuls f4, f4, f0
/* 80182B08 0017FA48  ED 29 00 32 */	fmuls f9, f9, f0
/* 80182B0C 0017FA4C  EC A5 00 32 */	fmuls f5, f5, f0
/* 80182B10 0017FA50  48 00 00 08 */	b .L_80182B18
.L_80182B14:
/* 80182B14 0017FA54  FC 20 00 90 */	fmr f1, f0
.L_80182B18:
/* 80182B18 0017FA58  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80182B1C 0017FA5C  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80182B20 0017FA60  41 82 00 28 */	beq .L_80182B48
/* 80182B24 0017FA64  EC 04 01 F2 */	fmuls f0, f4, f7
/* 80182B28 0017FA68  EC 29 01 F2 */	fmuls f1, f9, f7
/* 80182B2C 0017FA6C  EC 45 01 F2 */	fmuls f2, f5, f7
/* 80182B30 0017FA70  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80182B34 0017FA74  D0 3F 02 04 */	stfs f1, 0x204(r31)
/* 80182B38 0017FA78  D0 5F 02 08 */	stfs f2, 0x208(r31)
/* 80182B3C 0017FA7C  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80182B40 0017FA80  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 80182B44 0017FA84  D0 5F 01 EC */	stfs f2, 0x1ec(r31)
.L_80182B48:
/* 80182B48 0017FA88  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 80182B4C 0017FA8C  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 80182B50 0017FA90  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 80182B54 0017FA94  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 80182B58 0017FA98  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 80182B5C 0017FA9C  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 80182B60 0017FAA0  E3 81 00 B8 */	psq_l f28, 184(r1), 0, qr0
/* 80182B64 0017FAA4  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 80182B68 0017FAA8  E3 61 00 A8 */	psq_l f27, 168(r1), 0, qr0
/* 80182B6C 0017FAAC  CB 61 00 A0 */	lfd f27, 0xa0(r1)
/* 80182B70 0017FAB0  E3 41 00 98 */	psq_l f26, 152(r1), 0, qr0
/* 80182B74 0017FAB4  CB 41 00 90 */	lfd f26, 0x90(r1)
/* 80182B78 0017FAB8  E3 21 00 88 */	psq_l f25, 136(r1), 0, qr0
/* 80182B7C 0017FABC  CB 21 00 80 */	lfd f25, 0x80(r1)
/* 80182B80 0017FAC0  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80182B84 0017FAC4  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80182B88 0017FAC8  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 80182B8C 0017FACC  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80182B90 0017FAD0  7C 08 03 A6 */	mtlr r0
/* 80182B94 0017FAD4  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80182B98 0017FAD8  4E 80 00 20 */	blr 
.endfn exec__Q24Game19NaviNukuAdjustStateFPQ24Game4Navi

.fn cleanup__Q24Game19NaviNukuAdjustStateFPQ24Game4Navi, global
/* 80182B9C 0017FADC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80182BA0 0017FAE0  7C 08 02 A6 */	mflr r0
/* 80182BA4 0017FAE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80182BA8 0017FAE8  38 00 00 00 */	li r0, 0
/* 80182BAC 0017FAEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80182BB0 0017FAF0  7C 9F 23 78 */	mr r31, r4
/* 80182BB4 0017FAF4  38 80 00 01 */	li r4, 1
/* 80182BB8 0017FAF8  98 03 00 5C */	stb r0, 0x5c(r3)
/* 80182BBC 0017FAFC  7F E3 FB 78 */	mr r3, r31
/* 80182BC0 0017FB00  81 9F 00 00 */	lwz r12, 0(r31)
/* 80182BC4 0017FB04  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 80182BC8 0017FB08  7D 89 03 A6 */	mtctr r12
/* 80182BCC 0017FB0C  4E 80 04 21 */	bctrl 
/* 80182BD0 0017FB10  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80182BD4 0017FB14  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 80182BD8 0017FB18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80182BDC 0017FB1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80182BE0 0017FB20  7C 08 03 A6 */	mtlr r0
/* 80182BE4 0017FB24  38 21 00 10 */	addi r1, r1, 0x10
/* 80182BE8 0017FB28  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game19NaviNukuAdjustStateFPQ24Game4Navi

.fn init__Q24Game13NaviDopeStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80182BEC 0017FB2C  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80182BF0 0017FB30  7C 08 02 A6 */	mflr r0
/* 80182BF4 0017FB34  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80182BF8 0017FB38  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80182BFC 0017FB3C  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 80182C00 0017FB40  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80182C04 0017FB44  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 80182C08 0017FB48  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 80182C0C 0017FB4C  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 80182C10 0017FB50  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 80182C14 0017FB54  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 80182C18 0017FB58  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 80182C1C 0017FB5C  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 80182C20 0017FB60  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 80182C24 0017FB64  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 80182C28 0017FB68  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80182C2C 0017FB6C  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80182C30 0017FB70  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80182C34 0017FB74  93 81 00 70 */	stw r28, 0x70(r1)
/* 80182C38 0017FB78  7C BC 2B 79 */	or. r28, r5, r5
/* 80182C3C 0017FB7C  7C 7D 1B 78 */	mr r29, r3
/* 80182C40 0017FB80  7C 9E 23 78 */	mr r30, r4
/* 80182C44 0017FB84  40 82 00 20 */	bne .L_80182C64
/* 80182C48 0017FB88  3C 60 80 48 */	lis r3, lbl_8047EB4C@ha
/* 80182C4C 0017FB8C  3C A0 80 48 */	lis r5, lbl_8047EB5C@ha
/* 80182C50 0017FB90  38 63 EB 4C */	addi r3, r3, lbl_8047EB4C@l
/* 80182C54 0017FB94  38 80 0B BE */	li r4, 0xbbe
/* 80182C58 0017FB98  38 A5 EB 5C */	addi r5, r5, lbl_8047EB5C@l
/* 80182C5C 0017FB9C  4C C6 31 82 */	crclr 6
/* 80182C60 0017FBA0  4B EA 79 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80182C64:
/* 80182C64 0017FBA4  80 1C 00 00 */	lwz r0, 0(r28)
/* 80182C68 0017FBA8  7F C4 F3 78 */	mr r4, r30
/* 80182C6C 0017FBAC  38 61 00 14 */	addi r3, r1, 0x14
/* 80182C70 0017FBB0  90 1D 00 10 */	stw r0, 0x10(r29)
/* 80182C74 0017FBB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182C78 0017FBB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80182C7C 0017FBBC  7D 89 03 A6 */	mtctr r12
/* 80182C80 0017FBC0  4E 80 04 21 */	bctrl 
/* 80182C84 0017FBC4  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80182C88 0017FBC8  38 80 00 00 */	li r4, 0
/* 80182C8C 0017FBCC  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 80182C90 0017FBD0  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80182C94 0017FBD4  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 80182C98 0017FBD8  28 04 00 00 */	cmplwi r4, 0
/* 80182C9C 0017FBDC  C3 42 A8 80 */	lfs f26, lbl_80518BE0@sda21(r2)
/* 80182CA0 0017FBE0  38 03 BC 84 */	addi r0, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80182CA4 0017FBE4  98 9D 00 14 */	stb r4, 0x14(r29)
/* 80182CA8 0017FBE8  3B E0 00 00 */	li r31, 0
/* 80182CAC 0017FBEC  FF 60 D0 90 */	fmr f27, f26
/* 80182CB0 0017FBF0  80 7E 02 54 */	lwz r3, 0x254(r30)
/* 80182CB4 0017FBF4  FF 80 D0 90 */	fmr f28, f26
/* 80182CB8 0017FBF8  90 01 00 38 */	stw r0, 0x38(r1)
/* 80182CBC 0017FBFC  90 81 00 44 */	stw r4, 0x44(r1)
/* 80182CC0 0017FC00  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80182CC4 0017FC04  90 61 00 40 */	stw r3, 0x40(r1)
/* 80182CC8 0017FC08  40 82 00 1C */	bne .L_80182CE4
/* 80182CCC 0017FC0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80182CD0 0017FC10  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80182CD4 0017FC14  7D 89 03 A6 */	mtctr r12
/* 80182CD8 0017FC18  4E 80 04 21 */	bctrl 
/* 80182CDC 0017FC1C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80182CE0 0017FC20  48 00 01 B0 */	b .L_80182E90
.L_80182CE4:
/* 80182CE4 0017FC24  81 83 00 00 */	lwz r12, 0(r3)
/* 80182CE8 0017FC28  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80182CEC 0017FC2C  7D 89 03 A6 */	mtctr r12
/* 80182CF0 0017FC30  4E 80 04 21 */	bctrl 
/* 80182CF4 0017FC34  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80182CF8 0017FC38  48 00 00 58 */	b .L_80182D50
.L_80182CFC:
/* 80182CFC 0017FC3C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80182D00 0017FC40  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80182D04 0017FC44  81 83 00 00 */	lwz r12, 0(r3)
/* 80182D08 0017FC48  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80182D0C 0017FC4C  7D 89 03 A6 */	mtctr r12
/* 80182D10 0017FC50  4E 80 04 21 */	bctrl 
/* 80182D14 0017FC54  7C 64 1B 78 */	mr r4, r3
/* 80182D18 0017FC58  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80182D1C 0017FC5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80182D20 0017FC60  81 8C 00 08 */	lwz r12, 8(r12)
/* 80182D24 0017FC64  7D 89 03 A6 */	mtctr r12
/* 80182D28 0017FC68  4E 80 04 21 */	bctrl 
/* 80182D2C 0017FC6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80182D30 0017FC70  40 82 01 60 */	bne .L_80182E90
/* 80182D34 0017FC74  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80182D38 0017FC78  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80182D3C 0017FC7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80182D40 0017FC80  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80182D44 0017FC84  7D 89 03 A6 */	mtctr r12
/* 80182D48 0017FC88  4E 80 04 21 */	bctrl 
/* 80182D4C 0017FC8C  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80182D50:
/* 80182D50 0017FC90  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80182D54 0017FC94  38 61 00 38 */	addi r3, r1, 0x38
/* 80182D58 0017FC98  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80182D5C 0017FC9C  7D 89 03 A6 */	mtctr r12
/* 80182D60 0017FCA0  4E 80 04 21 */	bctrl 
/* 80182D64 0017FCA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80182D68 0017FCA8  41 82 FF 94 */	beq .L_80182CFC
/* 80182D6C 0017FCAC  48 00 01 24 */	b .L_80182E90
.L_80182D70:
/* 80182D70 0017FCB0  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80182D74 0017FCB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80182D78 0017FCB8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80182D7C 0017FCBC  7D 89 03 A6 */	mtctr r12
/* 80182D80 0017FCC0  4E 80 04 21 */	bctrl 
/* 80182D84 0017FCC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80182D88 0017FCC8  7C 7C 1B 78 */	mr r28, r3
/* 80182D8C 0017FCCC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80182D90 0017FCD0  7D 89 03 A6 */	mtctr r12
/* 80182D94 0017FCD4  4E 80 04 21 */	bctrl 
/* 80182D98 0017FCD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80182D9C 0017FCDC  41 82 00 38 */	beq .L_80182DD4
/* 80182DA0 0017FCE0  7F 84 E3 78 */	mr r4, r28
/* 80182DA4 0017FCE4  38 61 00 08 */	addi r3, r1, 8
/* 80182DA8 0017FCE8  81 9C 00 00 */	lwz r12, 0(r28)
/* 80182DAC 0017FCEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80182DB0 0017FCF0  7D 89 03 A6 */	mtctr r12
/* 80182DB4 0017FCF4  4E 80 04 21 */	bctrl 
/* 80182DB8 0017FCF8  C0 41 00 08 */	lfs f2, 8(r1)
/* 80182DBC 0017FCFC  3B FF 00 01 */	addi r31, r31, 1
/* 80182DC0 0017FD00  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80182DC4 0017FD04  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80182DC8 0017FD08  EF 5A 10 2A */	fadds f26, f26, f2
/* 80182DCC 0017FD0C  EF 7B 08 2A */	fadds f27, f27, f1
/* 80182DD0 0017FD10  EF 9C 00 2A */	fadds f28, f28, f0
.L_80182DD4:
/* 80182DD4 0017FD14  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80182DD8 0017FD18  28 00 00 00 */	cmplwi r0, 0
/* 80182DDC 0017FD1C  40 82 00 24 */	bne .L_80182E00
/* 80182DE0 0017FD20  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80182DE4 0017FD24  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80182DE8 0017FD28  81 83 00 00 */	lwz r12, 0(r3)
/* 80182DEC 0017FD2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80182DF0 0017FD30  7D 89 03 A6 */	mtctr r12
/* 80182DF4 0017FD34  4E 80 04 21 */	bctrl 
/* 80182DF8 0017FD38  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80182DFC 0017FD3C  48 00 00 94 */	b .L_80182E90
.L_80182E00:
/* 80182E00 0017FD40  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80182E04 0017FD44  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80182E08 0017FD48  81 83 00 00 */	lwz r12, 0(r3)
/* 80182E0C 0017FD4C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80182E10 0017FD50  7D 89 03 A6 */	mtctr r12
/* 80182E14 0017FD54  4E 80 04 21 */	bctrl 
/* 80182E18 0017FD58  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80182E1C 0017FD5C  48 00 00 58 */	b .L_80182E74
.L_80182E20:
/* 80182E20 0017FD60  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80182E24 0017FD64  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80182E28 0017FD68  81 83 00 00 */	lwz r12, 0(r3)
/* 80182E2C 0017FD6C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80182E30 0017FD70  7D 89 03 A6 */	mtctr r12
/* 80182E34 0017FD74  4E 80 04 21 */	bctrl 
/* 80182E38 0017FD78  7C 64 1B 78 */	mr r4, r3
/* 80182E3C 0017FD7C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80182E40 0017FD80  81 83 00 00 */	lwz r12, 0(r3)
/* 80182E44 0017FD84  81 8C 00 08 */	lwz r12, 8(r12)
/* 80182E48 0017FD88  7D 89 03 A6 */	mtctr r12
/* 80182E4C 0017FD8C  4E 80 04 21 */	bctrl 
/* 80182E50 0017FD90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80182E54 0017FD94  40 82 00 3C */	bne .L_80182E90
/* 80182E58 0017FD98  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80182E5C 0017FD9C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80182E60 0017FDA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80182E64 0017FDA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80182E68 0017FDA8  7D 89 03 A6 */	mtctr r12
/* 80182E6C 0017FDAC  4E 80 04 21 */	bctrl 
/* 80182E70 0017FDB0  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80182E74:
/* 80182E74 0017FDB4  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80182E78 0017FDB8  38 61 00 38 */	addi r3, r1, 0x38
/* 80182E7C 0017FDBC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80182E80 0017FDC0  7D 89 03 A6 */	mtctr r12
/* 80182E84 0017FDC4  4E 80 04 21 */	bctrl 
/* 80182E88 0017FDC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80182E8C 0017FDCC  41 82 FF 94 */	beq .L_80182E20
.L_80182E90:
/* 80182E90 0017FDD0  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80182E94 0017FDD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80182E98 0017FDD8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80182E9C 0017FDDC  7D 89 03 A6 */	mtctr r12
/* 80182EA0 0017FDE0  4E 80 04 21 */	bctrl 
/* 80182EA4 0017FDE4  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80182EA8 0017FDE8  7C 04 18 40 */	cmplw r4, r3
/* 80182EAC 0017FDEC  40 82 FE C4 */	bne .L_80182D70
/* 80182EB0 0017FDF0  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 80182EB4 0017FDF4  2C 04 00 01 */	cmpwi r4, 1
/* 80182EB8 0017FDF8  41 82 00 0C */	beq .L_80182EC4
/* 80182EBC 0017FDFC  2C 1F 00 00 */	cmpwi r31, 0
/* 80182EC0 0017FE00  40 81 02 C8 */	ble .L_80183188
.L_80182EC4:
/* 80182EC4 0017FE04  7F C3 F3 78 */	mr r3, r30
/* 80182EC8 0017FE08  4B FB DF 65 */	bl hasDope__Q24Game4NaviFi
/* 80182ECC 0017FE0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80182ED0 0017FE10  41 82 02 B8 */	beq .L_80183188
/* 80182ED4 0017FE14  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80182ED8 0017FE18  2C 00 00 01 */	cmpwi r0, 1
/* 80182EDC 0017FE1C  40 82 00 38 */	bne .L_80182F14
/* 80182EE0 0017FE20  28 1E 00 00 */	cmplwi r30, 0
/* 80182EE4 0017FE24  7F C6 F3 78 */	mr r6, r30
/* 80182EE8 0017FE28  41 82 00 08 */	beq .L_80182EF0
/* 80182EEC 0017FE2C  38 DE 01 78 */	addi r6, r30, 0x178
.L_80182EF0:
/* 80182EF0 0017FE30  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182EF4 0017FE34  7F C3 F3 78 */	mr r3, r30
/* 80182EF8 0017FE38  38 80 00 13 */	li r4, 0x13
/* 80182EFC 0017FE3C  38 A0 00 13 */	li r5, 0x13
/* 80182F00 0017FE40  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80182F04 0017FE44  38 E0 00 00 */	li r7, 0
/* 80182F08 0017FE48  7D 89 03 A6 */	mtctr r12
/* 80182F0C 0017FE4C  4E 80 04 21 */	bctrl 
/* 80182F10 0017FE50  48 00 00 34 */	b .L_80182F44
.L_80182F14:
/* 80182F14 0017FE54  28 1E 00 00 */	cmplwi r30, 0
/* 80182F18 0017FE58  7F C6 F3 78 */	mr r6, r30
/* 80182F1C 0017FE5C  41 82 00 08 */	beq .L_80182F24
/* 80182F20 0017FE60  38 DE 01 78 */	addi r6, r30, 0x178
.L_80182F24:
/* 80182F24 0017FE64  81 9E 00 00 */	lwz r12, 0(r30)
/* 80182F28 0017FE68  7F C3 F3 78 */	mr r3, r30
/* 80182F2C 0017FE6C  38 80 00 13 */	li r4, 0x13
/* 80182F30 0017FE70  38 A0 00 13 */	li r5, 0x13
/* 80182F34 0017FE74  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80182F38 0017FE78  38 E0 00 00 */	li r7, 0
/* 80182F3C 0017FE7C  7D 89 03 A6 */	mtctr r12
/* 80182F40 0017FE80  4E 80 04 21 */	bctrl 
.L_80182F44:
/* 80182F44 0017FE84  7F C3 F3 78 */	mr r3, r30
/* 80182F48 0017FE88  4B FB A0 0D */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 80182F4C 0017FE8C  D3 E1 00 2C */	stfs f31, 0x2c(r1)
/* 80182F50 0017FE90  D3 C1 00 30 */	stfs f30, 0x30(r1)
/* 80182F54 0017FE94  D3 A1 00 34 */	stfs f29, 0x34(r1)
/* 80182F58 0017FE98  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80182F5C 0017FE9C  2C 00 00 01 */	cmpwi r0, 1
/* 80182F60 0017FEA0  40 82 00 9C */	bne .L_80182FFC
/* 80182F64 0017FEA4  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80182F68 0017FEA8  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80182F6C 0017FEAC  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 80182F70 0017FEB0  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 80182F74 0017FEB4  EF 61 F0 28 */	fsubs f27, f1, f30
/* 80182F78 0017FEB8  C0 23 00 14 */	lfs f1, 0x14(r3)
/* 80182F7C 0017FEBC  EF 82 F8 28 */	fsubs f28, f2, f31
/* 80182F80 0017FEC0  EF 41 E8 28 */	fsubs f26, f1, f29
/* 80182F84 0017FEC4  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 80182F88 0017FEC8  EC 5A 06 B2 */	fmuls f2, f26, f26
/* 80182F8C 0017FECC  EC 3C 0F 3A */	fmadds f1, f28, f28, f1
/* 80182F90 0017FED0  EC 22 08 2A */	fadds f1, f2, f1
/* 80182F94 0017FED4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80182F98 0017FED8  40 81 00 14 */	ble .L_80182FAC
/* 80182F9C 0017FEDC  40 81 00 14 */	ble .L_80182FB0
/* 80182FA0 0017FEE0  FC 00 08 34 */	frsqrte f0, f1
/* 80182FA4 0017FEE4  EC 20 00 72 */	fmuls f1, f0, f1
/* 80182FA8 0017FEE8  48 00 00 08 */	b .L_80182FB0
.L_80182FAC:
/* 80182FAC 0017FEEC  FC 20 00 90 */	fmr f1, f0
.L_80182FB0:
/* 80182FB0 0017FEF0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80182FB4 0017FEF4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80182FB8 0017FEF8  40 81 00 18 */	ble .L_80182FD0
/* 80182FBC 0017FEFC  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80182FC0 0017FF00  EC 00 08 24 */	fdivs f0, f0, f1
/* 80182FC4 0017FF04  EF 9C 00 32 */	fmuls f28, f28, f0
/* 80182FC8 0017FF08  EF 7B 00 32 */	fmuls f27, f27, f0
/* 80182FCC 0017FF0C  EF 5A 00 32 */	fmuls f26, f26, f0
.L_80182FD0:
/* 80182FD0 0017FF10  C0 02 A9 34 */	lfs f0, lbl_80518C94@sda21(r2)
/* 80182FD4 0017FF14  EC 5C 00 32 */	fmuls f2, f28, f0
/* 80182FD8 0017FF18  EC 3B 00 32 */	fmuls f1, f27, f0
/* 80182FDC 0017FF1C  EC 1A 00 32 */	fmuls f0, f26, f0
/* 80182FE0 0017FF20  EC 5F 10 2A */	fadds f2, f31, f2
/* 80182FE4 0017FF24  EC 3E 08 2A */	fadds f1, f30, f1
/* 80182FE8 0017FF28  EC 1D 00 2A */	fadds f0, f29, f0
/* 80182FEC 0017FF2C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80182FF0 0017FF30  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80182FF4 0017FF34  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80182FF8 0017FF38  48 00 00 A8 */	b .L_801830A0
.L_80182FFC:
/* 80182FFC 0017FF3C  2C 1F 00 00 */	cmpwi r31, 0
/* 80183000 0017FF40  40 81 00 94 */	ble .L_80183094
/* 80183004 0017FF44  6F E3 80 00 */	xoris r3, r31, 0x8000
/* 80183008 0017FF48  3C 00 43 30 */	lis r0, 0x4330
/* 8018300C 0017FF4C  90 61 00 6C */	stw r3, 0x6c(r1)
/* 80183010 0017FF50  C8 42 A8 D0 */	lfd f2, lbl_80518C30@sda21(r2)
/* 80183014 0017FF54  90 01 00 68 */	stw r0, 0x68(r1)
/* 80183018 0017FF58  C0 62 A8 E8 */	lfs f3, lbl_80518C48@sda21(r2)
/* 8018301C 0017FF5C  C8 21 00 68 */	lfd f1, 0x68(r1)
/* 80183020 0017FF60  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80183024 0017FF64  EC 21 10 28 */	fsubs f1, f1, f2
/* 80183028 0017FF68  EC 43 08 24 */	fdivs f2, f3, f1
/* 8018302C 0017FF6C  EC 7B 00 B2 */	fmuls f3, f27, f2
/* 80183030 0017FF70  EC 3C 00 B2 */	fmuls f1, f28, f2
/* 80183034 0017FF74  EC 5A 00 B2 */	fmuls f2, f26, f2
/* 80183038 0017FF78  EF 63 F0 28 */	fsubs f27, f3, f30
/* 8018303C 0017FF7C  EF 41 E8 28 */	fsubs f26, f1, f29
/* 80183040 0017FF80  EF 82 F8 28 */	fsubs f28, f2, f31
/* 80183044 0017FF84  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 80183048 0017FF88  EC 5A 06 B2 */	fmuls f2, f26, f26
/* 8018304C 0017FF8C  EC 3C 0F 3A */	fmadds f1, f28, f28, f1
/* 80183050 0017FF90  EC 22 08 2A */	fadds f1, f2, f1
/* 80183054 0017FF94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80183058 0017FF98  40 81 00 14 */	ble .L_8018306C
/* 8018305C 0017FF9C  40 81 00 14 */	ble .L_80183070
/* 80183060 0017FFA0  FC 00 08 34 */	frsqrte f0, f1
/* 80183064 0017FFA4  EC 20 00 72 */	fmuls f1, f0, f1
/* 80183068 0017FFA8  48 00 00 08 */	b .L_80183070
.L_8018306C:
/* 8018306C 0017FFAC  FC 20 00 90 */	fmr f1, f0
.L_80183070:
/* 80183070 0017FFB0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80183074 0017FFB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80183078 0017FFB8  40 81 00 28 */	ble .L_801830A0
/* 8018307C 0017FFBC  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80183080 0017FFC0  EC 00 08 24 */	fdivs f0, f0, f1
/* 80183084 0017FFC4  EF 9C 00 32 */	fmuls f28, f28, f0
/* 80183088 0017FFC8  EF 7B 00 32 */	fmuls f27, f27, f0
/* 8018308C 0017FFCC  EF 5A 00 32 */	fmuls f26, f26, f0
/* 80183090 0017FFD0  48 00 00 10 */	b .L_801830A0
.L_80183094:
/* 80183094 0017FFD4  C3 82 A8 80 */	lfs f28, lbl_80518BE0@sda21(r2)
/* 80183098 0017FFD8  C3 62 A8 E8 */	lfs f27, lbl_80518C48@sda21(r2)
/* 8018309C 0017FFDC  FF 40 E0 90 */	fmr f26, f28
.L_801830A0:
/* 801830A0 0017FFE0  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 801830A4 0017FFE4  3B 80 00 01 */	li r28, 1
/* 801830A8 0017FFE8  2C 00 00 01 */	cmpwi r0, 1
/* 801830AC 0017FFEC  41 82 00 28 */	beq .L_801830D4
/* 801830B0 0017FFF0  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 801830B4 0017FFF4  3B 80 00 00 */	li r28, 0
/* 801830B8 0017FFF8  38 80 08 61 */	li r4, 0x861
/* 801830BC 0017FFFC  38 A0 00 00 */	li r5, 0
/* 801830C0 00180000  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801830C4 00180004  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801830C8 00180008  7D 89 03 A6 */	mtctr r12
/* 801830CC 0018000C  4E 80 04 21 */	bctrl 
/* 801830D0 00180010  48 00 00 20 */	b .L_801830F0
.L_801830D4:
/* 801830D4 00180014  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 801830D8 00180018  38 80 08 60 */	li r4, 0x860
/* 801830DC 0018001C  38 A0 00 00 */	li r5, 0
/* 801830E0 00180020  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801830E4 00180024  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801830E8 00180028  7D 89 03 A6 */	mtctr r12
/* 801830EC 0018002C  4E 80 04 21 */	bctrl 
.L_801830F0:
/* 801830F0 00180030  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801830F4 00180034  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 801830F8 00180038  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801830FC 0018003C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 80183100 00180040  90 01 00 20 */	stw r0, 0x20(r1)
/* 80183104 00180044  38 A4 A7 EC */	addi r5, r4, __vt__Q23efx3Arg@l
/* 80183108 00180048  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8018310C 0018004C  3C 80 80 4B */	lis r4, __vt__Q23efx14ArgDopingSmoke@ha
/* 80183110 00180050  3C 60 80 4E */	lis r3, __vt__Q23efx12TDopingSmoke@ha
/* 80183114 00180054  90 A1 00 48 */	stw r5, 0x48(r1)
/* 80183118 00180058  38 E4 33 B4 */	addi r7, r4, __vt__Q23efx14ArgDopingSmoke@l
/* 8018311C 0018005C  38 C0 00 44 */	li r6, 0x44
/* 80183120 00180060  38 A0 00 00 */	li r5, 0
/* 80183124 00180064  90 01 00 20 */	stw r0, 0x20(r1)
/* 80183128 00180068  38 03 73 04 */	addi r0, r3, __vt__Q23efx12TDopingSmoke@l
/* 8018312C 0018006C  38 61 00 20 */	addi r3, r1, 0x20
/* 80183130 00180070  D3 E1 00 4C */	stfs f31, 0x4c(r1)
/* 80183134 00180074  38 81 00 48 */	addi r4, r1, 0x48
/* 80183138 00180078  D3 C1 00 50 */	stfs f30, 0x50(r1)
/* 8018313C 0018007C  D3 A1 00 54 */	stfs f29, 0x54(r1)
/* 80183140 00180080  90 E1 00 48 */	stw r7, 0x48(r1)
/* 80183144 00180084  D3 81 00 58 */	stfs f28, 0x58(r1)
/* 80183148 00180088  D3 61 00 5C */	stfs f27, 0x5c(r1)
/* 8018314C 0018008C  D3 41 00 60 */	stfs f26, 0x60(r1)
/* 80183150 00180090  B3 81 00 64 */	sth r28, 0x64(r1)
/* 80183154 00180094  B0 C1 00 24 */	sth r6, 0x24(r1)
/* 80183158 00180098  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8018315C 0018009C  90 01 00 20 */	stw r0, 0x20(r1)
/* 80183160 001800A0  48 23 36 41 */	bl create__Q23efx12TDopingSmokeFPQ23efx3Arg
/* 80183164 001800A4  38 00 00 01 */	li r0, 1
/* 80183168 001800A8  7F C3 F3 78 */	mr r3, r30
/* 8018316C 001800AC  98 1D 00 14 */	stb r0, 0x14(r29)
/* 80183170 001800B0  38 A1 00 2C */	addi r5, r1, 0x2c
/* 80183174 001800B4  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 80183178 001800B8  4B FB DE 3D */	bl "applyDopes__Q24Game4NaviFiR10Vector3<f>"
/* 8018317C 001800BC  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 80183180 001800C0  7F C3 F3 78 */	mr r3, r30
/* 80183184 001800C4  4B FB DD 3D */	bl useDope__Q24Game4NaviFi
.L_80183188:
/* 80183188 001800C8  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 8018318C 001800CC  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 80183190 001800D0  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 80183194 001800D4  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 80183198 001800D8  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 8018319C 001800DC  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 801831A0 001800E0  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 801831A4 001800E4  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 801831A8 001800E8  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 801831AC 001800EC  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 801831B0 001800F0  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 801831B4 001800F4  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 801831B8 001800F8  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 801831BC 001800FC  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 801831C0 00180100  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 801831C4 00180104  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 801831C8 00180108  83 81 00 70 */	lwz r28, 0x70(r1)
/* 801831CC 0018010C  7C 08 03 A6 */	mtlr r0
/* 801831D0 00180110  38 21 00 E0 */	addi r1, r1, 0xe0
/* 801831D4 00180114  4E 80 00 20 */	blr 
.endfn init__Q24Game13NaviDopeStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game13NaviDopeStateFPQ24Game4Navi, global
/* 801831D8 00180118  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801831DC 0018011C  7C 08 02 A6 */	mflr r0
/* 801831E0 00180120  90 01 00 14 */	stw r0, 0x14(r1)
/* 801831E4 00180124  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801831E8 00180128  7C 9F 23 78 */	mr r31, r4
/* 801831EC 0018012C  93 C1 00 08 */	stw r30, 8(r1)
/* 801831F0 00180130  7C 7E 1B 78 */	mr r30, r3
/* 801831F4 00180134  7F E3 FB 78 */	mr r3, r31
/* 801831F8 00180138  4B FC 09 0D */	bl control__Q24Game4NaviFv
/* 801831FC 0018013C  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 80183200 00180140  28 00 00 00 */	cmplwi r0, 0
/* 80183204 00180144  40 82 00 28 */	bne .L_8018322C
/* 80183208 00180148  7F C3 F3 78 */	mr r3, r30
/* 8018320C 0018014C  7F E4 FB 78 */	mr r4, r31
/* 80183210 00180150  81 9E 00 00 */	lwz r12, 0(r30)
/* 80183214 00180154  38 A0 00 00 */	li r5, 0
/* 80183218 00180158  38 C0 00 00 */	li r6, 0
/* 8018321C 0018015C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183220 00180160  7D 89 03 A6 */	mtctr r12
/* 80183224 00180164  4E 80 04 21 */	bctrl 
/* 80183228 00180168  48 00 00 38 */	b .L_80183260
.L_8018322C:
/* 8018322C 0018016C  7F E3 FB 78 */	mr r3, r31
/* 80183230 00180170  38 80 00 13 */	li r4, 0x13
/* 80183234 00180174  4B FB 9C F9 */	bl assertMotion__Q24Game8FakePikiFi
/* 80183238 00180178  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018323C 0018017C  40 82 00 24 */	bne .L_80183260
/* 80183240 00180180  7F C3 F3 78 */	mr r3, r30
/* 80183244 00180184  7F E4 FB 78 */	mr r4, r31
/* 80183248 00180188  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018324C 0018018C  38 A0 00 00 */	li r5, 0
/* 80183250 00180190  38 C0 00 00 */	li r6, 0
/* 80183254 00180194  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183258 00180198  7D 89 03 A6 */	mtctr r12
/* 8018325C 0018019C  4E 80 04 21 */	bctrl 
.L_80183260:
/* 80183260 001801A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80183264 001801A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80183268 001801A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018326C 001801AC  7C 08 03 A6 */	mtlr r0
/* 80183270 001801B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80183274 001801B4  4E 80 00 20 */	blr 
.endfn exec__Q24Game13NaviDopeStateFPQ24Game4Navi

.fn cleanup__Q24Game13NaviDopeStateFPQ24Game4Navi, global
/* 80183278 001801B8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13NaviDopeStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game13NaviDopeStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 8018327C 001801BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80183280 001801C0  7C 08 02 A6 */	mflr r0
/* 80183284 001801C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80183288 001801C8  88 03 00 14 */	lbz r0, 0x14(r3)
/* 8018328C 001801CC  28 00 00 00 */	cmplwi r0, 0
/* 80183290 001801D0  41 82 00 28 */	beq .L_801832B8
/* 80183294 001801D4  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80183298 001801D8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8018329C 001801DC  40 82 00 1C */	bne .L_801832B8
/* 801832A0 001801E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801832A4 001801E4  38 A0 00 00 */	li r5, 0
/* 801832A8 001801E8  38 C0 00 00 */	li r6, 0
/* 801832AC 001801EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801832B0 001801F0  7D 89 03 A6 */	mtctr r12
/* 801832B4 001801F4  4E 80 04 21 */	bctrl 
.L_801832B8:
/* 801832B8 001801F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801832BC 001801FC  7C 08 03 A6 */	mtlr r0
/* 801832C0 00180200  38 21 00 10 */	addi r1, r1, 0x10
/* 801832C4 00180204  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game13NaviDopeStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn init__Q24Game14NaviClimbStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 801832C8 00180208  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801832CC 0018020C  7C 08 02 A6 */	mflr r0
/* 801832D0 00180210  3C C0 80 48 */	lis r6, lbl_8047EAC8@ha
/* 801832D4 00180214  90 01 00 24 */	stw r0, 0x24(r1)
/* 801832D8 00180218  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801832DC 0018021C  3B E6 EA C8 */	addi r31, r6, lbl_8047EAC8@l
/* 801832E0 00180220  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801832E4 00180224  7C BE 2B 78 */	mr r30, r5
/* 801832E8 00180228  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 801832EC 0018022C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801832F0 00180230  7C 9D 23 78 */	mr r29, r4
/* 801832F4 00180234  38 80 0C 25 */	li r4, 0xc25
/* 801832F8 00180238  93 81 00 10 */	stw r28, 0x10(r1)
/* 801832FC 0018023C  7C 7C 1B 78 */	mr r28, r3
/* 80183300 00180240  38 7F 00 84 */	addi r3, r31, 0x84
/* 80183304 00180244  4C C6 31 82 */	crclr 6
/* 80183308 00180248  4B EA 73 39 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8018330C 0018024C  28 1E 00 00 */	cmplwi r30, 0
/* 80183310 00180250  40 82 00 18 */	bne .L_80183328
/* 80183314 00180254  38 7F 00 84 */	addi r3, r31, 0x84
/* 80183318 00180258  38 BF 00 94 */	addi r5, r31, 0x94
/* 8018331C 0018025C  38 80 0C 28 */	li r4, 0xc28
/* 80183320 00180260  4C C6 31 82 */	crclr 6
/* 80183324 00180264  4B EA 73 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80183328:
/* 80183328 00180268  28 1D 00 00 */	cmplwi r29, 0
/* 8018332C 0018026C  7F A6 EB 78 */	mr r6, r29
/* 80183330 00180270  41 82 00 08 */	beq .L_80183338
/* 80183334 00180274  38 DD 01 78 */	addi r6, r29, 0x178
.L_80183338:
/* 80183338 00180278  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018333C 0018027C  7F A3 EB 78 */	mr r3, r29
/* 80183340 00180280  38 80 00 14 */	li r4, 0x14
/* 80183344 00180284  38 A0 00 14 */	li r5, 0x14
/* 80183348 00180288  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018334C 0018028C  38 E0 00 00 */	li r7, 0
/* 80183350 00180290  7D 89 03 A6 */	mtctr r12
/* 80183354 00180294  4E 80 04 21 */	bctrl 
/* 80183358 00180298  7F A3 EB 78 */	mr r3, r29
/* 8018335C 0018029C  4B FB 9B F9 */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 80183360 001802A0  80 1E 00 00 */	lwz r0, 0(r30)
/* 80183364 001802A4  7F 83 E3 78 */	mr r3, r28
/* 80183368 001802A8  7F A4 EB 78 */	mr r4, r29
/* 8018336C 001802AC  90 1C 00 20 */	stw r0, 0x20(r28)
/* 80183370 001802B0  80 BC 00 20 */	lwz r5, 0x20(r28)
/* 80183374 001802B4  80 A5 01 14 */	lwz r5, 0x114(r5)
/* 80183378 001802B8  80 A5 00 00 */	lwz r5, 0(r5)
/* 8018337C 001802BC  80 05 00 10 */	lwz r0, 0x10(r5)
/* 80183380 001802C0  90 1C 00 24 */	stw r0, 0x24(r28)
/* 80183384 001802C4  48 00 00 25 */	bl prepare__Q24Game14NaviClimbStateFPQ24Game4Navi
/* 80183388 001802C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018338C 001802CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80183390 001802D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80183394 001802D4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80183398 001802D8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8018339C 001802DC  7C 08 03 A6 */	mtlr r0
/* 801833A0 001802E0  38 21 00 20 */	addi r1, r1, 0x20
/* 801833A4 001802E4  4E 80 00 20 */	blr 
.endfn init__Q24Game14NaviClimbStateFPQ24Game4NaviPQ24Game8StateArg

.fn prepare__Q24Game14NaviClimbStateFPQ24Game4Navi, global
/* 801833A8 001802E8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801833AC 001802EC  7C 08 02 A6 */	mflr r0
/* 801833B0 001802F0  90 01 00 34 */	stw r0, 0x34(r1)
/* 801833B4 001802F4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801833B8 001802F8  7C 9F 23 78 */	mr r31, r4
/* 801833BC 001802FC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801833C0 00180300  7C 7E 1B 78 */	mr r30, r3
/* 801833C4 00180304  7F E3 FB 78 */	mr r3, r31
/* 801833C8 00180308  48 01 C0 5D */	bl endStick__Q24Game8CreatureFv
/* 801833CC 0018030C  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 801833D0 00180310  7F E3 FB 78 */	mr r3, r31
/* 801833D4 00180314  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 801833D8 00180318  48 01 BB 1D */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 801833DC 0018031C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 801833E0 00180320  38 81 00 08 */	addi r4, r1, 8
/* 801833E4 00180324  4B FB 4E 95 */	bl getTube__8CollPartFRQ23Sys4Tube
/* 801833E8 00180328  38 61 00 08 */	addi r3, r1, 8
/* 801833EC 0018032C  38 9E 00 10 */	addi r4, r30, 0x10
/* 801833F0 00180330  48 29 26 B5 */	bl "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
/* 801833F4 00180334  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801833F8 00180338  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801833FC 0018033C  C0 61 00 08 */	lfs f3, 8(r1)
/* 80183400 00180340  EC 81 00 28 */	fsubs f4, f1, f0
/* 80183404 00180344  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80183408 00180348  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8018340C 0018034C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80183410 00180350  EC 63 10 28 */	fsubs f3, f3, f2
/* 80183414 00180354  EC 84 01 32 */	fmuls f4, f4, f4
/* 80183418 00180358  EC 41 00 28 */	fsubs f2, f1, f0
/* 8018341C 0018035C  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80183420 00180360  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 80183424 00180364  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80183428 00180368  EC 22 08 2A */	fadds f1, f2, f1
/* 8018342C 0018036C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80183430 00180370  40 81 00 14 */	ble .L_80183444
/* 80183434 00180374  40 81 00 14 */	ble .L_80183448
/* 80183438 00180378  FC 00 08 34 */	frsqrte f0, f1
/* 8018343C 0018037C  EC 20 00 72 */	fmuls f1, f0, f1
/* 80183440 00180380  48 00 00 08 */	b .L_80183448
.L_80183444:
/* 80183444 00180384  FC 20 00 90 */	fmr f1, f0
.L_80183448:
/* 80183448 00180388  D0 3E 00 1C */	stfs f1, 0x1c(r30)
/* 8018344C 0018038C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80183450 00180390  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80183454 00180394  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80183458 00180398  7C 08 03 A6 */	mtlr r0
/* 8018345C 0018039C  38 21 00 30 */	addi r1, r1, 0x30
/* 80183460 001803A0  4E 80 00 20 */	blr 
.endfn prepare__Q24Game14NaviClimbStateFPQ24Game4Navi

.fn exec__Q24Game14NaviClimbStateFPQ24Game4Navi, global
/* 80183464 001803A4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80183468 001803A8  7C 08 02 A6 */	mflr r0
/* 8018346C 001803AC  90 01 00 74 */	stw r0, 0x74(r1)
/* 80183470 001803B0  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80183474 001803B4  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80183478 001803B8  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8018347C 001803BC  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80183480 001803C0  7C 7E 1B 78 */	mr r30, r3
/* 80183484 001803C4  7C 9F 23 78 */	mr r31, r4
/* 80183488 001803C8  C0 42 A8 B4 */	lfs f2, lbl_80518C14@sda21(r2)
/* 8018348C 001803CC  7F E3 FB 78 */	mr r3, r31
/* 80183490 001803D0  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 80183494 001803D4  80 84 02 78 */	lwz r4, 0x278(r4)
/* 80183498 001803D8  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8018349C 001803DC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801834A0 001803E0  C0 84 00 4C */	lfs f4, 0x4c(r4)
/* 801834A4 001803E4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801834A8 001803E8  C0 7E 00 18 */	lfs f3, 0x18(r30)
/* 801834AC 001803EC  EC 00 01 32 */	fmuls f0, f0, f4
/* 801834B0 001803F0  EC 43 00 B2 */	fmuls f2, f3, f2
/* 801834B4 001803F4  EC 21 01 32 */	fmuls f1, f1, f4
/* 801834B8 001803F8  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 801834BC 001803FC  EC 02 01 32 */	fmuls f0, f2, f4
/* 801834C0 00180400  D0 3F 02 04 */	stfs f1, 0x204(r31)
/* 801834C4 00180404  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 801834C8 00180408  81 9F 00 00 */	lwz r12, 0(r31)
/* 801834CC 0018040C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 801834D0 00180410  81 8C 01 D0 */	lwz r12, 0x1d0(r12)
/* 801834D4 00180414  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 801834D8 00180418  7D 89 03 A6 */	mtctr r12
/* 801834DC 0018041C  4E 80 04 21 */	bctrl 
/* 801834E0 00180420  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 801834E4 00180424  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801834E8 00180428  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 801834EC 0018042C  41 82 00 24 */	beq .L_80183510
/* 801834F0 00180430  7F C3 F3 78 */	mr r3, r30
/* 801834F4 00180434  7F E4 FB 78 */	mr r4, r31
/* 801834F8 00180438  81 9E 00 00 */	lwz r12, 0(r30)
/* 801834FC 0018043C  38 A0 00 00 */	li r5, 0
/* 80183500 00180440  38 C0 00 00 */	li r6, 0
/* 80183504 00180444  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183508 00180448  7D 89 03 A6 */	mtctr r12
/* 8018350C 0018044C  4E 80 04 21 */	bctrl 
.L_80183510:
/* 80183510 00180450  7F E3 FB 78 */	mr r3, r31
/* 80183514 00180454  38 81 00 08 */	addi r4, r1, 8
/* 80183518 00180458  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018351C 0018045C  C3 FF 01 08 */	lfs f31, 0x108(r31)
/* 80183520 00180460  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80183524 00180464  7D 89 03 A6 */	mtctr r12
/* 80183528 00180468  4E 80 04 21 */	bctrl 
/* 8018352C 0018046C  C0 42 A9 38 */	lfs f2, lbl_80518C98@sda21(r2)
/* 80183530 00180470  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 80183534 00180474  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80183538 00180478  EC 22 08 24 */	fdivs f1, f2, f1
/* 8018353C 0018047C  EC 00 08 2A */	fadds f0, f0, f1
/* 80183540 00180480  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80183544 00180484  40 81 00 DC */	ble .L_80183620
/* 80183548 00180488  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8018354C 0018048C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80183550 00180490  28 03 00 00 */	cmplwi r3, 0
/* 80183554 00180494  41 82 00 A8 */	beq .L_801835FC
/* 80183558 00180498  88 03 00 58 */	lbz r0, 0x58(r3)
/* 8018355C 0018049C  28 00 00 01 */	cmplwi r0, 1
/* 80183560 001804A0  41 82 00 0C */	beq .L_8018356C
/* 80183564 001804A4  28 00 00 02 */	cmplwi r0, 2
/* 80183568 001804A8  40 82 00 94 */	bne .L_801835FC
.L_8018356C:
/* 8018356C 001804AC  90 7E 00 24 */	stw r3, 0x24(r30)
/* 80183570 001804B0  7F E3 FB 78 */	mr r3, r31
/* 80183574 001804B4  48 01 BE B1 */	bl endStick__Q24Game8CreatureFv
/* 80183578 001804B8  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 8018357C 001804BC  7F E3 FB 78 */	mr r3, r31
/* 80183580 001804C0  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 80183584 001804C4  48 01 B9 71 */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 80183588 001804C8  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8018358C 001804CC  38 81 00 38 */	addi r4, r1, 0x38
/* 80183590 001804D0  4B FB 4C E9 */	bl getTube__8CollPartFRQ23Sys4Tube
/* 80183594 001804D4  38 61 00 38 */	addi r3, r1, 0x38
/* 80183598 001804D8  38 9E 00 10 */	addi r4, r30, 0x10
/* 8018359C 001804DC  48 29 25 09 */	bl "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
/* 801835A0 001804E0  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 801835A4 001804E4  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 801835A8 001804E8  C0 61 00 38 */	lfs f3, 0x38(r1)
/* 801835AC 001804EC  EC 81 00 28 */	fsubs f4, f1, f0
/* 801835B0 001804F0  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 801835B4 001804F4  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 801835B8 001804F8  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 801835BC 001804FC  EC 63 10 28 */	fsubs f3, f3, f2
/* 801835C0 00180500  EC 84 01 32 */	fmuls f4, f4, f4
/* 801835C4 00180504  EC 41 00 28 */	fsubs f2, f1, f0
/* 801835C8 00180508  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801835CC 0018050C  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 801835D0 00180510  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801835D4 00180514  EC 22 08 2A */	fadds f1, f2, f1
/* 801835D8 00180518  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801835DC 0018051C  40 81 00 14 */	ble .L_801835F0
/* 801835E0 00180520  40 81 00 14 */	ble .L_801835F4
/* 801835E4 00180524  FC 00 08 34 */	frsqrte f0, f1
/* 801835E8 00180528  EC 20 00 72 */	fmuls f1, f0, f1
/* 801835EC 0018052C  48 00 00 08 */	b .L_801835F4
.L_801835F0:
/* 801835F0 00180530  FC 20 00 90 */	fmr f1, f0
.L_801835F4:
/* 801835F4 00180534  D0 3E 00 1C */	stfs f1, 0x1c(r30)
/* 801835F8 00180538  48 00 01 08 */	b .L_80183700
.L_801835FC:
/* 801835FC 0018053C  7F C3 F3 78 */	mr r3, r30
/* 80183600 00180540  7F E4 FB 78 */	mr r4, r31
/* 80183604 00180544  81 9E 00 00 */	lwz r12, 0(r30)
/* 80183608 00180548  38 A0 00 00 */	li r5, 0
/* 8018360C 0018054C  38 C0 00 00 */	li r6, 0
/* 80183610 00180550  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183614 00180554  7D 89 03 A6 */	mtctr r12
/* 80183618 00180558  4E 80 04 21 */	bctrl 
/* 8018361C 0018055C  48 00 00 E4 */	b .L_80183700
.L_80183620:
/* 80183620 00180560  FC 00 08 50 */	fneg f0, f1
/* 80183624 00180564  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80183628 00180568  40 80 00 D8 */	bge .L_80183700
/* 8018362C 0018056C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80183630 00180570  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80183634 00180574  28 03 00 00 */	cmplwi r3, 0
/* 80183638 00180578  41 82 00 A8 */	beq .L_801836E0
/* 8018363C 0018057C  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80183640 00180580  28 00 00 01 */	cmplwi r0, 1
/* 80183644 00180584  41 82 00 0C */	beq .L_80183650
/* 80183648 00180588  28 00 00 02 */	cmplwi r0, 2
/* 8018364C 0018058C  40 82 00 94 */	bne .L_801836E0
.L_80183650:
/* 80183650 00180590  90 7E 00 24 */	stw r3, 0x24(r30)
/* 80183654 00180594  7F E3 FB 78 */	mr r3, r31
/* 80183658 00180598  48 01 BD CD */	bl endStick__Q24Game8CreatureFv
/* 8018365C 0018059C  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 80183660 001805A0  7F E3 FB 78 */	mr r3, r31
/* 80183664 001805A4  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 80183668 001805A8  48 01 B8 8D */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 8018366C 001805AC  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80183670 001805B0  38 81 00 18 */	addi r4, r1, 0x18
/* 80183674 001805B4  4B FB 4C 05 */	bl getTube__8CollPartFRQ23Sys4Tube
/* 80183678 001805B8  38 61 00 18 */	addi r3, r1, 0x18
/* 8018367C 001805BC  38 9E 00 10 */	addi r4, r30, 0x10
/* 80183680 001805C0  48 29 24 25 */	bl "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
/* 80183684 001805C4  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80183688 001805C8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8018368C 001805CC  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 80183690 001805D0  EC 81 00 28 */	fsubs f4, f1, f0
/* 80183694 001805D4  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80183698 001805D8  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8018369C 001805DC  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 801836A0 001805E0  EC 63 10 28 */	fsubs f3, f3, f2
/* 801836A4 001805E4  EC 84 01 32 */	fmuls f4, f4, f4
/* 801836A8 001805E8  EC 41 00 28 */	fsubs f2, f1, f0
/* 801836AC 001805EC  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801836B0 001805F0  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 801836B4 001805F4  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801836B8 001805F8  EC 22 08 2A */	fadds f1, f2, f1
/* 801836BC 001805FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801836C0 00180600  40 81 00 14 */	ble .L_801836D4
/* 801836C4 00180604  40 81 00 14 */	ble .L_801836D8
/* 801836C8 00180608  FC 00 08 34 */	frsqrte f0, f1
/* 801836CC 0018060C  EC 20 00 72 */	fmuls f1, f0, f1
/* 801836D0 00180610  48 00 00 08 */	b .L_801836D8
.L_801836D4:
/* 801836D4 00180614  FC 20 00 90 */	fmr f1, f0
.L_801836D8:
/* 801836D8 00180618  D0 3E 00 1C */	stfs f1, 0x1c(r30)
/* 801836DC 0018061C  48 00 00 24 */	b .L_80183700
.L_801836E0:
/* 801836E0 00180620  7F C3 F3 78 */	mr r3, r30
/* 801836E4 00180624  7F E4 FB 78 */	mr r4, r31
/* 801836E8 00180628  81 9E 00 00 */	lwz r12, 0(r30)
/* 801836EC 0018062C  38 A0 00 00 */	li r5, 0
/* 801836F0 00180630  38 C0 00 00 */	li r6, 0
/* 801836F4 00180634  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801836F8 00180638  7D 89 03 A6 */	mtctr r12
/* 801836FC 0018063C  4E 80 04 21 */	bctrl 
.L_80183700:
/* 80183700 00180640  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80183704 00180644  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80183708 00180648  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8018370C 0018064C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80183710 00180650  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80183714 00180654  7C 08 03 A6 */	mtlr r0
/* 80183718 00180658  38 21 00 70 */	addi r1, r1, 0x70
/* 8018371C 0018065C  4E 80 00 20 */	blr 
.endfn exec__Q24Game14NaviClimbStateFPQ24Game4Navi

.fn cleanup__Q24Game14NaviClimbStateFPQ24Game4Navi, global
/* 80183720 00180660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80183724 00180664  7C 08 02 A6 */	mflr r0
/* 80183728 00180668  7C 83 23 78 */	mr r3, r4
/* 8018372C 0018066C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80183730 00180670  48 01 BC F5 */	bl endStick__Q24Game8CreatureFv
/* 80183734 00180674  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80183738 00180678  7C 08 03 A6 */	mtlr r0
/* 8018373C 0018067C  38 21 00 10 */	addi r1, r1, 0x10
/* 80183740 00180680  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game14NaviClimbStateFPQ24Game4Navi

.fn init__Q24Game17NaviFallMeckStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80183744 00180684  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80183748 00180688  7C 08 02 A6 */	mflr r0
/* 8018374C 0018068C  28 05 00 00 */	cmplwi r5, 0
/* 80183750 00180690  90 01 00 14 */	stw r0, 0x14(r1)
/* 80183754 00180694  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80183758 00180698  7C 9F 23 78 */	mr r31, r4
/* 8018375C 0018069C  93 C1 00 08 */	stw r30, 8(r1)
/* 80183760 001806A0  7C 7E 1B 78 */	mr r30, r3
/* 80183764 001806A4  40 82 00 10 */	bne .L_80183774
/* 80183768 001806A8  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8018376C 001806AC  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 80183770 001806B0  48 00 00 0C */	b .L_8018377C
.L_80183774:
/* 80183774 001806B4  C0 05 00 00 */	lfs f0, 0(r5)
/* 80183778 001806B8  D0 1E 00 10 */	stfs f0, 0x10(r30)
.L_8018377C:
/* 8018377C 001806BC  7F E3 FB 78 */	mr r3, r31
/* 80183780 001806C0  38 80 00 09 */	li r4, 9
/* 80183784 001806C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80183788 001806C8  38 A0 00 09 */	li r5, 9
/* 8018378C 001806CC  38 C0 00 00 */	li r6, 0
/* 80183790 001806D0  38 E0 00 00 */	li r7, 0
/* 80183794 001806D4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80183798 001806D8  7D 89 03 A6 */	mtctr r12
/* 8018379C 001806DC  4E 80 04 21 */	bctrl 
/* 801837A0 001806E0  7F E3 FB 78 */	mr r3, r31
/* 801837A4 001806E4  48 01 BC 81 */	bl endStick__Q24Game8CreatureFv
/* 801837A8 001806E8  38 00 00 00 */	li r0, 0
/* 801837AC 001806EC  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801837B0 001806F0  90 1E 00 14 */	stw r0, 0x14(r30)
/* 801837B4 001806F4  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 801837B8 001806F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801837BC 001806FC  40 81 00 18 */	ble .L_801837D4
/* 801837C0 00180700  C0 02 A9 3C */	lfs f0, lbl_80518C9C@sda21(r2)
/* 801837C4 00180704  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 801837C8 00180708  C0 1F 02 04 */	lfs f0, 0x204(r31)
/* 801837CC 0018070C  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 801837D0 00180710  48 00 00 14 */	b .L_801837E4
.L_801837D4:
/* 801837D4 00180714  C0 02 A9 40 */	lfs f0, lbl_80518CA0@sda21(r2)
/* 801837D8 00180718  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 801837DC 0018071C  C0 1F 02 04 */	lfs f0, 0x204(r31)
/* 801837E0 00180720  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
.L_801837E4:
/* 801837E4 00180724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801837E8 00180728  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801837EC 0018072C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801837F0 00180730  7C 08 03 A6 */	mtlr r0
/* 801837F4 00180734  38 21 00 10 */	addi r1, r1, 0x10
/* 801837F8 00180738  4E 80 00 20 */	blr 
.endfn init__Q24Game17NaviFallMeckStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game17NaviFallMeckStateFPQ24Game4Navi, global
/* 801837FC 0018073C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80183800 00180740  7C 08 02 A6 */	mflr r0
/* 80183804 00180744  90 01 00 14 */	stw r0, 0x14(r1)
/* 80183808 00180748  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018380C 0018074C  7C 9F 23 78 */	mr r31, r4
/* 80183810 00180750  93 C1 00 08 */	stw r30, 8(r1)
/* 80183814 00180754  7C 7E 1B 78 */	mr r30, r3
/* 80183818 00180758  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8018381C 0018075C  2C 00 00 00 */	cmpwi r0, 0
/* 80183820 00180760  41 82 00 20 */	beq .L_80183840
/* 80183824 00180764  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80183828 00180768  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 8018382C 0018076C  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80183830 00180770  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80183834 00180774  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80183838 00180778  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8018383C 0018077C  D0 1F 02 08 */	stfs f0, 0x208(r31)
.L_80183840:
/* 80183840 00180780  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80183844 00180784  2C 00 00 00 */	cmpwi r0, 0
/* 80183848 00180788  40 82 00 38 */	bne .L_80183880
/* 8018384C 0018078C  7F E3 FB 78 */	mr r3, r31
/* 80183850 00180790  38 80 00 09 */	li r4, 9
/* 80183854 00180794  4B FB 96 D9 */	bl assertMotion__Q24Game8FakePikiFi
/* 80183858 00180798  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018385C 0018079C  40 82 00 24 */	bne .L_80183880
/* 80183860 001807A0  7F C3 F3 78 */	mr r3, r30
/* 80183864 001807A4  7F E4 FB 78 */	mr r4, r31
/* 80183868 001807A8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018386C 001807AC  38 A0 00 00 */	li r5, 0
/* 80183870 001807B0  38 C0 00 00 */	li r6, 0
/* 80183874 001807B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183878 001807B8  7D 89 03 A6 */	mtctr r12
/* 8018387C 001807BC  4E 80 04 21 */	bctrl 
.L_80183880:
/* 80183880 001807C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80183884 001807C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80183888 001807C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018388C 001807CC  7C 08 03 A6 */	mtlr r0
/* 80183890 001807D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80183894 001807D4  4E 80 00 20 */	blr 
.endfn exec__Q24Game17NaviFallMeckStateFPQ24Game4Navi

.fn cleanup__Q24Game17NaviFallMeckStateFPQ24Game4Navi, global
/* 80183898 001807D8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game17NaviFallMeckStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game17NaviFallMeckStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 8018389C 001807DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801838A0 001807E0  7C 08 02 A6 */	mflr r0
/* 801838A4 001807E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801838A8 001807E8  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 801838AC 001807EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801838B0 001807F0  7C 7F 1B 78 */	mr r31, r3
/* 801838B4 001807F4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 801838B8 001807F8  40 82 00 6C */	bne .L_80183924
/* 801838BC 001807FC  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 801838C0 00180800  2C 00 00 01 */	cmpwi r0, 1
/* 801838C4 00180804  40 82 00 40 */	bne .L_80183904
/* 801838C8 00180808  28 04 00 00 */	cmplwi r4, 0
/* 801838CC 0018080C  7C 86 23 78 */	mr r6, r4
/* 801838D0 00180810  41 82 00 08 */	beq .L_801838D8
/* 801838D4 00180814  38 C6 01 78 */	addi r6, r6, 0x178
.L_801838D8:
/* 801838D8 00180818  81 84 00 00 */	lwz r12, 0(r4)
/* 801838DC 0018081C  7C 83 23 78 */	mr r3, r4
/* 801838E0 00180820  38 80 00 0E */	li r4, 0xe
/* 801838E4 00180824  38 A0 00 0E */	li r5, 0xe
/* 801838E8 00180828  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801838EC 0018082C  38 E0 00 00 */	li r7, 0
/* 801838F0 00180830  7D 89 03 A6 */	mtctr r12
/* 801838F4 00180834  4E 80 04 21 */	bctrl 
/* 801838F8 00180838  38 00 00 02 */	li r0, 2
/* 801838FC 0018083C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80183900 00180840  48 00 00 24 */	b .L_80183924
.L_80183904:
/* 80183904 00180844  2C 00 00 02 */	cmpwi r0, 2
/* 80183908 00180848  40 82 00 1C */	bne .L_80183924
/* 8018390C 0018084C  81 83 00 00 */	lwz r12, 0(r3)
/* 80183910 00180850  38 A0 00 00 */	li r5, 0
/* 80183914 00180854  38 C0 00 00 */	li r6, 0
/* 80183918 00180858  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018391C 0018085C  7D 89 03 A6 */	mtctr r12
/* 80183920 00180860  4E 80 04 21 */	bctrl 
.L_80183924:
/* 80183924 00180864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80183928 00180868  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018392C 0018086C  7C 08 03 A6 */	mtlr r0
/* 80183930 00180870  38 21 00 10 */	addi r1, r1, 0x10
/* 80183934 00180874  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game17NaviFallMeckStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn bounceCallback__Q24Game17NaviFallMeckStateFPQ24Game4NaviPQ23Sys8Triangle, global
/* 80183938 00180878  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8018393C 0018087C  7C 08 02 A6 */	mflr r0
/* 80183940 00180880  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80183944 00180884  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 80183948 00180888  7C 9F 23 78 */	mr r31, r4
/* 8018394C 0018088C  93 C1 00 98 */	stw r30, 0x98(r1)
/* 80183950 00180890  7C 7E 1B 78 */	mr r30, r3
/* 80183954 00180894  7F E3 FB 78 */	mr r3, r31
/* 80183958 00180898  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018395C 0018089C  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80183960 001808A0  7D 89 03 A6 */	mtctr r12
/* 80183964 001808A4  4E 80 04 21 */	bctrl 
/* 80183968 001808A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018396C 001808AC  41 82 00 FC */	beq .L_80183A68
/* 80183970 001808B0  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80183974 001808B4  38 A0 00 00 */	li r5, 0
/* 80183978 001808B8  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8018397C 001808BC  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 80183980 001808C0  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80183984 001808C4  38 03 6A 50 */	addi r0, r3, __vt__Q23efx8TSimple3@l
/* 80183988 001808C8  3C 60 80 4F */	lis r3, __vt__Q23efx13TEnemyDownWat@ha
/* 8018398C 001808CC  38 80 00 54 */	li r4, 0x54
/* 80183990 001808D0  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80183994 001808D4  38 03 85 FC */	addi r0, r3, __vt__Q23efx13TEnemyDownWat@l
/* 80183998 001808D8  38 E0 00 55 */	li r7, 0x55
/* 8018399C 001808DC  38 C0 00 56 */	li r6, 0x56
/* 801839A0 001808E0  B0 81 00 80 */	sth r4, 0x80(r1)
/* 801839A4 001808E4  7F E4 FB 78 */	mr r4, r31
/* 801839A8 001808E8  38 61 00 20 */	addi r3, r1, 0x20
/* 801839AC 001808EC  B0 E1 00 82 */	sth r7, 0x82(r1)
/* 801839B0 001808F0  B0 C1 00 84 */	sth r6, 0x84(r1)
/* 801839B4 001808F4  90 A1 00 88 */	stw r5, 0x88(r1)
/* 801839B8 001808F8  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 801839BC 001808FC  90 A1 00 90 */	stw r5, 0x90(r1)
/* 801839C0 00180900  90 01 00 7C */	stw r0, 0x7c(r1)
/* 801839C4 00180904  81 9F 00 00 */	lwz r12, 0(r31)
/* 801839C8 00180908  81 8C 00 08 */	lwz r12, 8(r12)
/* 801839CC 0018090C  7D 89 03 A6 */	mtctr r12
/* 801839D0 00180910  4E 80 04 21 */	bctrl 
/* 801839D4 00180914  80 7F 01 90 */	lwz r3, 0x190(r31)
/* 801839D8 00180918  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 801839DC 0018091C  81 83 00 00 */	lwz r12, 0(r3)
/* 801839E0 00180920  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801839E4 00180924  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801839E8 00180928  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801839EC 0018092C  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 801839F0 00180930  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 801839F4 00180934  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 801839F8 00180938  7D 89 03 A6 */	mtctr r12
/* 801839FC 0018093C  4E 80 04 21 */	bctrl 
/* 80183A00 00180940  C0 03 00 00 */	lfs f0, 0(r3)
/* 80183A04 00180944  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 80183A08 00180948  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80183A0C 0018094C  38 A3 A7 EC */	addi r5, r3, __vt__Q23efx3Arg@l
/* 80183A10 00180950  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80183A14 00180954  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 80183A18 00180958  80 C1 00 64 */	lwz r6, 0x64(r1)
/* 80183A1C 0018095C  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 80183A20 00180960  80 E1 00 60 */	lwz r7, 0x60(r1)
/* 80183A24 00180964  38 61 00 7C */	addi r3, r1, 0x7c
/* 80183A28 00180968  90 81 00 14 */	stw r4, 0x14(r1)
/* 80183A2C 0018096C  38 81 00 68 */	addi r4, r1, 0x68
/* 80183A30 00180970  C0 02 A8 A4 */	lfs f0, lbl_80518C04@sda21(r2)
/* 80183A34 00180974  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80183A38 00180978  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 80183A3C 0018097C  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80183A40 00180980  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80183A44 00180984  90 A1 00 68 */	stw r5, 0x68(r1)
/* 80183A48 00180988  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80183A4C 0018098C  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 80183A50 00180990  D0 41 00 70 */	stfs f2, 0x70(r1)
/* 80183A54 00180994  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 80183A58 00180998  90 01 00 68 */	stw r0, 0x68(r1)
/* 80183A5C 0018099C  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80183A60 001809A0  48 24 4D 6D */	bl create__Q23efx13TEnemyDownWatFPQ23efx3Arg
/* 80183A64 001809A4  48 00 00 90 */	b .L_80183AF4
.L_80183A68:
/* 80183A68 001809A8  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80183A6C 001809AC  C0 22 A8 E8 */	lfs f1, lbl_80518C48@sda21(r2)
/* 80183A70 001809B0  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80183A74 001809B4  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 80183A78 001809B8  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80183A7C 001809BC  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 80183A80 001809C0  3C 60 80 4F */	lis r3, __vt__Q23efx15TEnemyDownSmoke@ha
/* 80183A84 001809C4  38 C0 00 53 */	li r6, 0x53
/* 80183A88 001809C8  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80183A8C 001809CC  38 03 86 10 */	addi r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
/* 80183A90 001809D0  38 A0 00 00 */	li r5, 0
/* 80183A94 001809D4  C0 02 A8 A4 */	lfs f0, lbl_80518C04@sda21(r2)
/* 80183A98 001809D8  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 80183A9C 001809DC  7F E4 FB 78 */	mr r4, r31
/* 80183AA0 001809E0  38 61 00 08 */	addi r3, r1, 8
/* 80183AA4 001809E4  B0 C1 00 50 */	sth r6, 0x50(r1)
/* 80183AA8 001809E8  90 A1 00 54 */	stw r5, 0x54(r1)
/* 80183AAC 001809EC  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80183AB0 001809F0  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80183AB4 001809F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80183AB8 001809F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80183ABC 001809FC  7D 89 03 A6 */	mtctr r12
/* 80183AC0 00180A00  4E 80 04 21 */	bctrl 
/* 80183AC4 00180A04  C0 41 00 08 */	lfs f2, 8(r1)
/* 80183AC8 00180A08  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 80183ACC 00180A0C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80183AD0 00180A10  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 80183AD4 00180A14  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80183AD8 00180A18  38 61 00 4C */	addi r3, r1, 0x4c
/* 80183ADC 00180A1C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80183AE0 00180A20  38 81 00 3C */	addi r4, r1, 0x3c
/* 80183AE4 00180A24  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 80183AE8 00180A28  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80183AEC 00180A2C  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80183AF0 00180A30  48 24 4C 75 */	bl create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg
.L_80183AF4:
/* 80183AF4 00180A34  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80183AF8 00180A38  2C 00 00 00 */	cmpwi r0, 0
/* 80183AFC 00180A3C  40 82 00 8C */	bne .L_80183B88
/* 80183B00 00180A40  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 80183B04 00180A44  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 80183B08 00180A48  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80183B0C 00180A4C  40 81 00 4C */	ble .L_80183B58
/* 80183B10 00180A50  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80183B14 00180A54  38 00 00 00 */	li r0, 0
/* 80183B18 00180A58  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80183B1C 00180A5C  7F E3 FB 78 */	mr r3, r31
/* 80183B20 00180A60  38 80 00 01 */	li r4, 1
/* 80183B24 00180A64  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 80183B28 00180A68  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80183B2C 00180A6C  98 01 00 38 */	stb r0, 0x38(r1)
/* 80183B30 00180A70  4B FC 0A E1 */	bl addDamage__Q24Game4NaviFfb
/* 80183B34 00180A74  7F C3 F3 78 */	mr r3, r30
/* 80183B38 00180A78  7F E4 FB 78 */	mr r4, r31
/* 80183B3C 00180A7C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80183B40 00180A80  38 C1 00 2C */	addi r6, r1, 0x2c
/* 80183B44 00180A84  38 A0 00 10 */	li r5, 0x10
/* 80183B48 00180A88  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183B4C 00180A8C  7D 89 03 A6 */	mtctr r12
/* 80183B50 00180A90  4E 80 04 21 */	bctrl 
/* 80183B54 00180A94  48 00 00 34 */	b .L_80183B88
.L_80183B58:
/* 80183B58 00180A98  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80183B5C 00180A9C  38 80 00 02 */	li r4, 2
/* 80183B60 00180AA0  A0 BF 02 DC */	lhz r5, 0x2dc(r31)
/* 80183B64 00180AA4  48 0C FD C1 */	bl startRumble__Q24Game9RumbleMgrFii
/* 80183B68 00180AA8  7F C3 F3 78 */	mr r3, r30
/* 80183B6C 00180AAC  7F E4 FB 78 */	mr r4, r31
/* 80183B70 00180AB0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80183B74 00180AB4  38 A0 00 00 */	li r5, 0
/* 80183B78 00180AB8  38 C0 00 00 */	li r6, 0
/* 80183B7C 00180ABC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183B80 00180AC0  7D 89 03 A6 */	mtctr r12
/* 80183B84 00180AC4  4E 80 04 21 */	bctrl 
.L_80183B88:
/* 80183B88 00180AC8  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80183B8C 00180ACC  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 80183B90 00180AD0  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 80183B94 00180AD4  7C 08 03 A6 */	mtlr r0
/* 80183B98 00180AD8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80183B9C 00180ADC  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game17NaviFallMeckStateFPQ24Game4NaviPQ23Sys8Triangle

.fn init__Q24Game14NaviFlickStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80183BA0 00180AE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80183BA4 00180AE4  7C 08 02 A6 */	mflr r0
/* 80183BA8 00180AE8  28 05 00 00 */	cmplwi r5, 0
/* 80183BAC 00180AEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80183BB0 00180AF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80183BB4 00180AF4  7C 9F 23 78 */	mr r31, r4
/* 80183BB8 00180AF8  93 C1 00 08 */	stw r30, 8(r1)
/* 80183BBC 00180AFC  7C 7E 1B 78 */	mr r30, r3
/* 80183BC0 00180B00  40 82 00 24 */	bne .L_80183BE4
/* 80183BC4 00180B04  3C 60 80 48 */	lis r3, lbl_8047EB4C@ha
/* 80183BC8 00180B08  3C A0 80 48 */	lis r5, lbl_8047EB74@ha
/* 80183BCC 00180B0C  38 63 EB 4C */	addi r3, r3, lbl_8047EB4C@l
/* 80183BD0 00180B10  38 80 0C D4 */	li r4, 0xcd4
/* 80183BD4 00180B14  38 A5 EB 74 */	addi r5, r5, lbl_8047EB74@l
/* 80183BD8 00180B18  4C C6 31 82 */	crclr 6
/* 80183BDC 00180B1C  4B EA 6A 65 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80183BE0 00180B20  48 00 00 2C */	b .L_80183C0C
.L_80183BE4:
/* 80183BE4 00180B24  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 80183BE8 00180B28  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 80183BEC 00180B2C  C0 05 00 04 */	lfs f0, 4(r5)
/* 80183BF0 00180B30  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 80183BF4 00180B34  C0 05 00 08 */	lfs f0, 8(r5)
/* 80183BF8 00180B38  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 80183BFC 00180B3C  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 80183C00 00180B40  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 80183C04 00180B44  80 05 00 00 */	lwz r0, 0(r5)
/* 80183C08 00180B48  90 1E 00 14 */	stw r0, 0x14(r30)
.L_80183C0C:
/* 80183C0C 00180B4C  28 1F 00 00 */	cmplwi r31, 0
/* 80183C10 00180B50  7F E6 FB 78 */	mr r6, r31
/* 80183C14 00180B54  41 82 00 08 */	beq .L_80183C1C
/* 80183C18 00180B58  38 DF 01 78 */	addi r6, r31, 0x178
.L_80183C1C:
/* 80183C1C 00180B5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80183C20 00180B60  7F E3 FB 78 */	mr r3, r31
/* 80183C24 00180B64  38 80 00 16 */	li r4, 0x16
/* 80183C28 00180B68  38 A0 00 16 */	li r5, 0x16
/* 80183C2C 00180B6C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80183C30 00180B70  38 E0 00 00 */	li r7, 0
/* 80183C34 00180B74  7D 89 03 A6 */	mtctr r12
/* 80183C38 00180B78  4E 80 04 21 */	bctrl 
/* 80183C3C 00180B7C  38 00 00 00 */	li r0, 0
/* 80183C40 00180B80  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80183C44 00180B84  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80183C48 00180B88  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80183C4C 00180B8C  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80183C50 00180B90  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80183C54 00180B94  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 80183C58 00180B98  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 80183C5C 00180B9C  4B EB 14 AD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80183C60 00180BA0  C0 02 A9 44 */	lfs f0, lbl_80518CA4@sda21(r2)
/* 80183C64 00180BA4  EC 20 08 2A */	fadds f1, f0, f1
/* 80183C68 00180BA8  48 28 DF 69 */	bl roundAng__Ff
/* 80183C6C 00180BAC  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80183C70 00180BB0  38 80 08 0F */	li r4, 0x80f
/* 80183C74 00180BB4  38 A0 00 00 */	li r5, 0
/* 80183C78 00180BB8  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80183C7C 00180BBC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80183C80 00180BC0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80183C84 00180BC4  7D 89 03 A6 */	mtctr r12
/* 80183C88 00180BC8  4E 80 04 21 */	bctrl 
/* 80183C8C 00180BCC  80 7F 02 D0 */	lwz r3, 0x2d0(r31)
/* 80183C90 00180BD0  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80183C94 00180BD4  48 23 49 A5 */	bl createOrimadamage___Q23efx11TNaviEffectFPA4_f
/* 80183C98 00180BD8  48 2D 51 E9 */	bl PSMGetDamageD__Fv
/* 80183C9C 00180BDC  28 03 00 00 */	cmplwi r3, 0
/* 80183CA0 00180BE0  41 82 00 14 */	beq .L_80183CB4
/* 80183CA4 00180BE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80183CA8 00180BE8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80183CAC 00180BEC  7D 89 03 A6 */	mtctr r12
/* 80183CB0 00180BF0  4E 80 04 21 */	bctrl 
.L_80183CB4:
/* 80183CB4 00180BF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80183CB8 00180BF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80183CBC 00180BFC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80183CC0 00180C00  7C 08 03 A6 */	mtlr r0
/* 80183CC4 00180C04  38 21 00 10 */	addi r1, r1, 0x10
/* 80183CC8 00180C08  4E 80 00 20 */	blr 
.endfn init__Q24Game14NaviFlickStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game14NaviFlickStateFPQ24Game4Navi, global
/* 80183CCC 00180C0C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80183CD0 00180C10  7C 08 02 A6 */	mflr r0
/* 80183CD4 00180C14  90 01 00 34 */	stw r0, 0x34(r1)
/* 80183CD8 00180C18  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80183CDC 00180C1C  7C 9F 23 78 */	mr r31, r4
/* 80183CE0 00180C20  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80183CE4 00180C24  7C 7E 1B 78 */	mr r30, r3
/* 80183CE8 00180C28  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80183CEC 00180C2C  2C 00 00 01 */	cmpwi r0, 1
/* 80183CF0 00180C30  41 82 00 7C */	beq .L_80183D6C
/* 80183CF4 00180C34  40 80 00 D8 */	bge .L_80183DCC
/* 80183CF8 00180C38  2C 00 00 00 */	cmpwi r0, 0
/* 80183CFC 00180C3C  40 80 00 08 */	bge .L_80183D04
/* 80183D00 00180C40  48 00 00 CC */	b .L_80183DCC
.L_80183D04:
/* 80183D04 00180C44  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 80183D08 00180C48  7F E3 FB 78 */	mr r3, r31
/* 80183D0C 00180C4C  38 80 00 16 */	li r4, 0x16
/* 80183D10 00180C50  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80183D14 00180C54  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 80183D18 00180C58  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80183D1C 00180C5C  4B FB 92 11 */	bl assertMotion__Q24Game8FakePikiFi
/* 80183D20 00180C60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80183D24 00180C64  40 82 00 A8 */	bne .L_80183DCC
/* 80183D28 00180C68  C0 3E 00 24 */	lfs f1, 0x24(r30)
/* 80183D2C 00180C6C  38 00 00 00 */	li r0, 0
/* 80183D30 00180C70  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 80183D34 00180C74  7F C3 F3 78 */	mr r3, r30
/* 80183D38 00180C78  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80183D3C 00180C7C  7F E4 FB 78 */	mr r4, r31
/* 80183D40 00180C80  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80183D44 00180C84  38 C1 00 18 */	addi r6, r1, 0x18
/* 80183D48 00180C88  38 A0 00 10 */	li r5, 0x10
/* 80183D4C 00180C8C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80183D50 00180C90  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80183D54 00180C94  98 01 00 24 */	stb r0, 0x24(r1)
/* 80183D58 00180C98  81 9E 00 00 */	lwz r12, 0(r30)
/* 80183D5C 00180C9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183D60 00180CA0  7D 89 03 A6 */	mtctr r12
/* 80183D64 00180CA4  4E 80 04 21 */	bctrl 
/* 80183D68 00180CA8  48 00 00 64 */	b .L_80183DCC
.L_80183D6C:
/* 80183D6C 00180CAC  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 80183D70 00180CB0  C0 22 A9 48 */	lfs f1, lbl_80518CA8@sda21(r2)
/* 80183D74 00180CB4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80183D78 00180CB8  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80183D7C 00180CBC  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 80183D80 00180CC0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80183D84 00180CC4  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80183D88 00180CC8  80 1F 02 48 */	lwz r0, 0x248(r31)
/* 80183D8C 00180CCC  28 00 00 00 */	cmplwi r0, 0
/* 80183D90 00180CD0  41 82 00 3C */	beq .L_80183DCC
/* 80183D94 00180CD4  C0 3E 00 24 */	lfs f1, 0x24(r30)
/* 80183D98 00180CD8  38 00 00 00 */	li r0, 0
/* 80183D9C 00180CDC  80 FE 00 14 */	lwz r7, 0x14(r30)
/* 80183DA0 00180CE0  38 C1 00 08 */	addi r6, r1, 8
/* 80183DA4 00180CE4  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80183DA8 00180CE8  38 A0 00 10 */	li r5, 0x10
/* 80183DAC 00180CEC  90 E1 00 08 */	stw r7, 8(r1)
/* 80183DB0 00180CF0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80183DB4 00180CF4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80183DB8 00180CF8  98 01 00 14 */	stb r0, 0x14(r1)
/* 80183DBC 00180CFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80183DC0 00180D00  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183DC4 00180D04  7D 89 03 A6 */	mtctr r12
/* 80183DC8 00180D08  4E 80 04 21 */	bctrl 
.L_80183DCC:
/* 80183DCC 00180D0C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80183DD0 00180D10  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80183DD4 00180D14  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80183DD8 00180D18  7C 08 03 A6 */	mtlr r0
/* 80183DDC 00180D1C  38 21 00 30 */	addi r1, r1, 0x30
/* 80183DE0 00180D20  4E 80 00 20 */	blr 
.endfn exec__Q24Game14NaviFlickStateFPQ24Game4Navi

.fn cleanup__Q24Game14NaviFlickStateFPQ24Game4Navi, global
/* 80183DE4 00180D24  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game14NaviFlickStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game14NaviFlickStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 80183DE8 00180D28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80183DEC 00180D2C  7C 08 02 A6 */	mflr r0
/* 80183DF0 00180D30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80183DF4 00180D34  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80183DF8 00180D38  7C 85 23 78 */	mr r5, r4
/* 80183DFC 00180D3C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80183E00 00180D40  40 82 00 3C */	bne .L_80183E3C
/* 80183E04 00180D44  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80183E08 00180D48  2C 00 00 00 */	cmpwi r0, 0
/* 80183E0C 00180D4C  40 82 00 30 */	bne .L_80183E3C
/* 80183E10 00180D50  38 00 00 01 */	li r0, 1
/* 80183E14 00180D54  38 80 00 17 */	li r4, 0x17
/* 80183E18 00180D58  90 03 00 10 */	stw r0, 0x10(r3)
/* 80183E1C 00180D5C  7C A3 2B 78 */	mr r3, r5
/* 80183E20 00180D60  38 A0 00 17 */	li r5, 0x17
/* 80183E24 00180D64  38 C0 00 00 */	li r6, 0
/* 80183E28 00180D68  81 83 00 00 */	lwz r12, 0(r3)
/* 80183E2C 00180D6C  38 E0 00 00 */	li r7, 0
/* 80183E30 00180D70  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80183E34 00180D74  7D 89 03 A6 */	mtctr r12
/* 80183E38 00180D78  4E 80 04 21 */	bctrl 
.L_80183E3C:
/* 80183E3C 00180D7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80183E40 00180D80  7C 08 03 A6 */	mtlr r0
/* 80183E44 00180D84  38 21 00 10 */	addi r1, r1, 0x10
/* 80183E48 00180D88  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game14NaviFlickStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn bounceCallback__Q24Game14NaviFlickStateFPQ24Game4NaviPQ23Sys8Triangle, global
/* 80183E4C 00180D8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80183E50 00180D90  7C 08 02 A6 */	mflr r0
/* 80183E54 00180D94  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80183E58 00180D98  38 A0 00 10 */	li r5, 0x10
/* 80183E5C 00180D9C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80183E60 00180DA0  38 00 00 00 */	li r0, 0
/* 80183E64 00180DA4  38 C1 00 08 */	addi r6, r1, 8
/* 80183E68 00180DA8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80183E6C 00180DAC  7C 9F 23 78 */	mr r31, r4
/* 80183E70 00180DB0  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 80183E74 00180DB4  90 01 00 08 */	stw r0, 8(r1)
/* 80183E78 00180DB8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80183E7C 00180DBC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80183E80 00180DC0  98 01 00 14 */	stb r0, 0x14(r1)
/* 80183E84 00180DC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80183E88 00180DC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183E8C 00180DCC  7D 89 03 A6 */	mtctr r12
/* 80183E90 00180DD0  4E 80 04 21 */	bctrl 
/* 80183E94 00180DD4  7F E3 FB 78 */	mr r3, r31
/* 80183E98 00180DD8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80183E9C 00180DDC  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80183EA0 00180DE0  7D 89 03 A6 */	mtctr r12
/* 80183EA4 00180DE4  4E 80 04 21 */	bctrl 
/* 80183EA8 00180DE8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80183EAC 00180DEC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80183EB0 00180DF0  7C 08 03 A6 */	mtlr r0
/* 80183EB4 00180DF4  38 21 00 20 */	addi r1, r1, 0x20
/* 80183EB8 00180DF8  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game14NaviFlickStateFPQ24Game4NaviPQ23Sys8Triangle

.fn init__Q24Game19NaviKokeDamageStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80183EBC 00180DFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80183EC0 00180E00  7C 08 02 A6 */	mflr r0
/* 80183EC4 00180E04  28 05 00 00 */	cmplwi r5, 0
/* 80183EC8 00180E08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80183ECC 00180E0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80183ED0 00180E10  7C 9F 23 78 */	mr r31, r4
/* 80183ED4 00180E14  93 C1 00 08 */	stw r30, 8(r1)
/* 80183ED8 00180E18  7C 7E 1B 78 */	mr r30, r3
/* 80183EDC 00180E1C  40 82 00 20 */	bne .L_80183EFC
/* 80183EE0 00180E20  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80183EE4 00180E24  38 00 00 00 */	li r0, 0
/* 80183EE8 00180E28  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 80183EEC 00180E2C  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 80183EF0 00180E30  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80183EF4 00180E34  98 1E 00 20 */	stb r0, 0x20(r30)
/* 80183EF8 00180E38  48 00 00 24 */	b .L_80183F1C
.L_80183EFC:
/* 80183EFC 00180E3C  C0 05 00 04 */	lfs f0, 4(r5)
/* 80183F00 00180E40  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 80183F04 00180E44  C0 05 00 08 */	lfs f0, 8(r5)
/* 80183F08 00180E48  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 80183F0C 00180E4C  80 05 00 00 */	lwz r0, 0(r5)
/* 80183F10 00180E50  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80183F14 00180E54  88 05 00 0C */	lbz r0, 0xc(r5)
/* 80183F18 00180E58  98 1E 00 20 */	stb r0, 0x20(r30)
.L_80183F1C:
/* 80183F1C 00180E5C  28 1F 00 00 */	cmplwi r31, 0
/* 80183F20 00180E60  7F E6 FB 78 */	mr r6, r31
/* 80183F24 00180E64  41 82 00 08 */	beq .L_80183F2C
/* 80183F28 00180E68  38 DF 01 78 */	addi r6, r31, 0x178
.L_80183F2C:
/* 80183F2C 00180E6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80183F30 00180E70  7F E3 FB 78 */	mr r3, r31
/* 80183F34 00180E74  38 80 00 17 */	li r4, 0x17
/* 80183F38 00180E78  38 A0 00 17 */	li r5, 0x17
/* 80183F3C 00180E7C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80183F40 00180E80  38 E0 00 00 */	li r7, 0
/* 80183F44 00180E84  7D 89 03 A6 */	mtctr r12
/* 80183F48 00180E88  4E 80 04 21 */	bctrl 
/* 80183F4C 00180E8C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80183F50 00180E90  38 80 00 01 */	li r4, 1
/* 80183F54 00180E94  A0 BF 02 DC */	lhz r5, 0x2dc(r31)
/* 80183F58 00180E98  48 0C F9 CD */	bl startRumble__Q24Game9RumbleMgrFii
/* 80183F5C 00180E9C  38 00 00 00 */	li r0, 0
/* 80183F60 00180EA0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80183F64 00180EA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80183F68 00180EA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80183F6C 00180EAC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80183F70 00180EB0  7C 08 03 A6 */	mtlr r0
/* 80183F74 00180EB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80183F78 00180EB8  4E 80 00 20 */	blr 
.endfn init__Q24Game19NaviKokeDamageStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game19NaviKokeDamageStateFPQ24Game4Navi, global
/* 80183F7C 00180EBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80183F80 00180EC0  7C 08 02 A6 */	mflr r0
/* 80183F84 00180EC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80183F88 00180EC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80183F8C 00180ECC  7C 9F 23 78 */	mr r31, r4
/* 80183F90 00180ED0  93 C1 00 08 */	stw r30, 8(r1)
/* 80183F94 00180ED4  7C 7E 1B 78 */	mr r30, r3
/* 80183F98 00180ED8  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80183F9C 00180EDC  28 05 00 00 */	cmplwi r5, 0
/* 80183FA0 00180EE0  41 82 00 2C */	beq .L_80183FCC
/* 80183FA4 00180EE4  80 05 00 18 */	lwz r0, 0x18(r5)
/* 80183FA8 00180EE8  2C 00 00 00 */	cmpwi r0, 0
/* 80183FAC 00180EEC  41 82 00 20 */	beq .L_80183FCC
/* 80183FB0 00180EF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80183FB4 00180EF4  38 A0 00 00 */	li r5, 0
/* 80183FB8 00180EF8  38 C0 00 00 */	li r6, 0
/* 80183FBC 00180EFC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183FC0 00180F00  7D 89 03 A6 */	mtctr r12
/* 80183FC4 00180F04  4E 80 04 21 */	bctrl 
/* 80183FC8 00180F08  48 00 01 A4 */	b .L_8018416C
.L_80183FCC:
/* 80183FCC 00180F0C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80183FD0 00180F10  28 03 00 00 */	cmplwi r3, 0
/* 80183FD4 00180F14  41 82 00 34 */	beq .L_80184008
/* 80183FD8 00180F18  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80183FDC 00180F1C  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80183FE0 00180F20  40 82 00 28 */	bne .L_80184008
/* 80183FE4 00180F24  7F C3 F3 78 */	mr r3, r30
/* 80183FE8 00180F28  7F E4 FB 78 */	mr r4, r31
/* 80183FEC 00180F2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80183FF0 00180F30  38 A0 00 00 */	li r5, 0
/* 80183FF4 00180F34  38 C0 00 00 */	li r6, 0
/* 80183FF8 00180F38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80183FFC 00180F3C  7D 89 03 A6 */	mtctr r12
/* 80184000 00180F40  4E 80 04 21 */	bctrl 
/* 80184004 00180F44  48 00 01 68 */	b .L_8018416C
.L_80184008:
/* 80184008 00180F48  C0 42 A8 80 */	lfs f2, lbl_80518BE0@sda21(r2)
/* 8018400C 00180F4C  D0 5F 01 E4 */	stfs f2, 0x1e4(r31)
/* 80184010 00180F50  D0 5F 01 E8 */	stfs f2, 0x1e8(r31)
/* 80184014 00180F54  D0 5F 01 EC */	stfs f2, 0x1ec(r31)
/* 80184018 00180F58  D0 5F 02 00 */	stfs f2, 0x200(r31)
/* 8018401C 00180F5C  D0 5F 02 04 */	stfs f2, 0x204(r31)
/* 80184020 00180F60  D0 5F 02 08 */	stfs f2, 0x208(r31)
/* 80184024 00180F64  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 80184028 00180F68  2C 00 00 01 */	cmpwi r0, 1
/* 8018402C 00180F6C  40 82 00 60 */	bne .L_8018408C
/* 80184030 00180F70  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80184034 00180F74  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 80184038 00180F78  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8018403C 00180F7C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80184040 00180F80  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 80184044 00180F84  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 80184048 00180F88  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8018404C 00180F8C  4C 40 13 82 */	cror 2, 0, 2
/* 80184050 00180F90  40 82 00 3C */	bne .L_8018408C
/* 80184054 00180F94  28 1F 00 00 */	cmplwi r31, 0
/* 80184058 00180F98  7F E6 FB 78 */	mr r6, r31
/* 8018405C 00180F9C  41 82 00 08 */	beq .L_80184064
/* 80184060 00180FA0  38 DF 01 78 */	addi r6, r31, 0x178
.L_80184064:
/* 80184064 00180FA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80184068 00180FA8  7F E3 FB 78 */	mr r3, r31
/* 8018406C 00180FAC  38 80 00 0E */	li r4, 0xe
/* 80184070 00180FB0  38 A0 00 0E */	li r5, 0xe
/* 80184074 00180FB4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80184078 00180FB8  38 E0 00 00 */	li r7, 0
/* 8018407C 00180FBC  7D 89 03 A6 */	mtctr r12
/* 80184080 00180FC0  4E 80 04 21 */	bctrl 
/* 80184084 00180FC4  38 00 00 02 */	li r0, 2
/* 80184088 00180FC8  90 1E 00 18 */	stw r0, 0x18(r30)
.L_8018408C:
/* 8018408C 00180FCC  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 80184090 00180FD0  2C 00 00 00 */	cmpwi r0, 0
/* 80184094 00180FD4  40 82 00 68 */	bne .L_801840FC
/* 80184098 00180FD8  7F E3 FB 78 */	mr r3, r31
/* 8018409C 00180FDC  38 80 00 17 */	li r4, 0x17
/* 801840A0 00180FE0  4B FB 8E 8D */	bl assertMotion__Q24Game8FakePikiFi
/* 801840A4 00180FE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801840A8 00180FE8  40 82 00 54 */	bne .L_801840FC
/* 801840AC 00180FEC  80 7E 00 08 */	lwz r3, 8(r30)
/* 801840B0 00180FF0  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 801840B4 00180FF4  2C 05 FF FF */	cmpwi r5, -1
/* 801840B8 00180FF8  40 82 00 28 */	bne .L_801840E0
/* 801840BC 00180FFC  7F C3 F3 78 */	mr r3, r30
/* 801840C0 00181000  7F E4 FB 78 */	mr r4, r31
/* 801840C4 00181004  81 9E 00 00 */	lwz r12, 0(r30)
/* 801840C8 00181008  38 A0 00 00 */	li r5, 0
/* 801840CC 0018100C  38 C0 00 00 */	li r6, 0
/* 801840D0 00181010  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801840D4 00181014  7D 89 03 A6 */	mtctr r12
/* 801840D8 00181018  4E 80 04 21 */	bctrl 
/* 801840DC 0018101C  48 00 00 20 */	b .L_801840FC
.L_801840E0:
/* 801840E0 00181020  81 9E 00 00 */	lwz r12, 0(r30)
/* 801840E4 00181024  7F C3 F3 78 */	mr r3, r30
/* 801840E8 00181028  7F E4 FB 78 */	mr r4, r31
/* 801840EC 0018102C  38 C0 00 00 */	li r6, 0
/* 801840F0 00181030  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801840F4 00181034  7D 89 03 A6 */	mtctr r12
/* 801840F8 00181038  4E 80 04 21 */	bctrl 
.L_801840FC:
/* 801840FC 0018103C  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 80184100 00181040  2C 00 00 02 */	cmpwi r0, 2
/* 80184104 00181044  40 82 00 68 */	bne .L_8018416C
/* 80184108 00181048  7F E3 FB 78 */	mr r3, r31
/* 8018410C 0018104C  38 80 00 0E */	li r4, 0xe
/* 80184110 00181050  4B FB 8E 1D */	bl assertMotion__Q24Game8FakePikiFi
/* 80184114 00181054  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80184118 00181058  40 82 00 54 */	bne .L_8018416C
/* 8018411C 0018105C  80 7E 00 08 */	lwz r3, 8(r30)
/* 80184120 00181060  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 80184124 00181064  2C 05 FF FF */	cmpwi r5, -1
/* 80184128 00181068  40 82 00 28 */	bne .L_80184150
/* 8018412C 0018106C  7F C3 F3 78 */	mr r3, r30
/* 80184130 00181070  7F E4 FB 78 */	mr r4, r31
/* 80184134 00181074  81 9E 00 00 */	lwz r12, 0(r30)
/* 80184138 00181078  38 A0 00 00 */	li r5, 0
/* 8018413C 0018107C  38 C0 00 00 */	li r6, 0
/* 80184140 00181080  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80184144 00181084  7D 89 03 A6 */	mtctr r12
/* 80184148 00181088  4E 80 04 21 */	bctrl 
/* 8018414C 0018108C  48 00 00 20 */	b .L_8018416C
.L_80184150:
/* 80184150 00181090  81 9E 00 00 */	lwz r12, 0(r30)
/* 80184154 00181094  7F C3 F3 78 */	mr r3, r30
/* 80184158 00181098  7F E4 FB 78 */	mr r4, r31
/* 8018415C 0018109C  38 C0 00 00 */	li r6, 0
/* 80184160 001810A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80184164 001810A4  7D 89 03 A6 */	mtctr r12
/* 80184168 001810A8  4E 80 04 21 */	bctrl 
.L_8018416C:
/* 8018416C 001810AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80184170 001810B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80184174 001810B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80184178 001810B8  7C 08 03 A6 */	mtlr r0
/* 8018417C 001810BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80184180 001810C0  4E 80 00 20 */	blr 
.endfn exec__Q24Game19NaviKokeDamageStateFPQ24Game4Navi

.fn cleanup__Q24Game19NaviKokeDamageStateFPQ24Game4Navi, global
/* 80184184 001810C4  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game19NaviKokeDamageStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game19NaviKokeDamageStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 80184188 001810C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018418C 001810CC  7C 08 02 A6 */	mflr r0
/* 80184190 001810D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80184194 001810D4  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80184198 001810D8  7C 65 1B 78 */	mr r5, r3
/* 8018419C 001810DC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 801841A0 001810E0  40 82 00 74 */	bne .L_80184214
/* 801841A4 001810E4  80 05 00 18 */	lwz r0, 0x18(r5)
/* 801841A8 001810E8  2C 00 00 00 */	cmpwi r0, 0
/* 801841AC 001810EC  40 82 00 20 */	bne .L_801841CC
/* 801841B0 001810F0  38 00 00 01 */	li r0, 1
/* 801841B4 001810F4  7C 83 23 78 */	mr r3, r4
/* 801841B8 001810F8  90 05 00 18 */	stw r0, 0x18(r5)
/* 801841BC 001810FC  C0 25 00 10 */	lfs f1, 0x10(r5)
/* 801841C0 00181100  88 85 00 20 */	lbz r4, 0x20(r5)
/* 801841C4 00181104  4B FC 04 4D */	bl addDamage__Q24Game4NaviFfb
/* 801841C8 00181108  48 00 00 4C */	b .L_80184214
.L_801841CC:
/* 801841CC 0018110C  2C 00 00 02 */	cmpwi r0, 2
/* 801841D0 00181110  40 82 00 44 */	bne .L_80184214
/* 801841D4 00181114  80 A5 00 08 */	lwz r5, 8(r5)
/* 801841D8 00181118  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 801841DC 0018111C  2C 05 FF FF */	cmpwi r5, -1
/* 801841E0 00181120  40 82 00 20 */	bne .L_80184200
/* 801841E4 00181124  81 83 00 00 */	lwz r12, 0(r3)
/* 801841E8 00181128  38 A0 00 00 */	li r5, 0
/* 801841EC 0018112C  38 C0 00 00 */	li r6, 0
/* 801841F0 00181130  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801841F4 00181134  7D 89 03 A6 */	mtctr r12
/* 801841F8 00181138  4E 80 04 21 */	bctrl 
/* 801841FC 0018113C  48 00 00 18 */	b .L_80184214
.L_80184200:
/* 80184200 00181140  81 83 00 00 */	lwz r12, 0(r3)
/* 80184204 00181144  38 C0 00 00 */	li r6, 0
/* 80184208 00181148  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018420C 0018114C  7D 89 03 A6 */	mtctr r12
/* 80184210 00181150  4E 80 04 21 */	bctrl 
.L_80184214:
/* 80184214 00181154  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80184218 00181158  7C 08 03 A6 */	mtlr r0
/* 8018421C 0018115C  38 21 00 10 */	addi r1, r1, 0x10
/* 80184220 00181160  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game19NaviKokeDamageStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn init__Q24Game14NaviSaraiStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80184224 00181164  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80184228 00181168  7C 08 02 A6 */	mflr r0
/* 8018422C 0018116C  38 A0 00 09 */	li r5, 9
/* 80184230 00181170  38 C0 00 00 */	li r6, 0
/* 80184234 00181174  90 01 00 14 */	stw r0, 0x14(r1)
/* 80184238 00181178  38 E0 00 00 */	li r7, 0
/* 8018423C 0018117C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80184240 00181180  7C 9F 23 78 */	mr r31, r4
/* 80184244 00181184  38 80 00 09 */	li r4, 9
/* 80184248 00181188  93 C1 00 08 */	stw r30, 8(r1)
/* 8018424C 0018118C  7C 7E 1B 78 */	mr r30, r3
/* 80184250 00181190  7F E3 FB 78 */	mr r3, r31
/* 80184254 00181194  81 9F 00 00 */	lwz r12, 0(r31)
/* 80184258 00181198  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018425C 0018119C  7D 89 03 A6 */	mtctr r12
/* 80184260 001811A0  4E 80 04 21 */	bctrl 
/* 80184264 001811A4  38 00 00 00 */	li r0, 0
/* 80184268 001811A8  7F E3 FB 78 */	mr r3, r31
/* 8018426C 001811AC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80184270 001811B0  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 80184274 001811B4  4B FC 12 19 */	bl releasePikis__Q24Game4NaviFv
/* 80184278 001811B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018427C 001811BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80184280 001811C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80184284 001811C4  7C 08 03 A6 */	mtlr r0
/* 80184288 001811C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8018428C 001811CC  4E 80 00 20 */	blr 
.endfn init__Q24Game14NaviSaraiStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game14NaviSaraiStateFPQ24Game4Navi, global
/* 80184290 001811D0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80184294 001811D4  7C 08 02 A6 */	mflr r0
/* 80184298 001811D8  90 01 00 54 */	stw r0, 0x54(r1)
/* 8018429C 001811DC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801842A0 001811E0  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801842A4 001811E4  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801842A8 001811E8  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 801842AC 001811EC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801842B0 001811F0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801842B4 001811F4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801842B8 001811F8  93 81 00 20 */	stw r28, 0x20(r1)
/* 801842BC 001811FC  80 03 00 10 */	lwz r0, 0x10(r3)
/* 801842C0 00181200  7C 7E 1B 78 */	mr r30, r3
/* 801842C4 00181204  7C 9F 23 78 */	mr r31, r4
/* 801842C8 00181208  54 00 01 09 */	rlwinm. r0, r0, 0, 4, 4
/* 801842CC 0018120C  41 82 00 18 */	beq .L_801842E4
/* 801842D0 00181210  A0 7E 00 14 */	lhz r3, 0x14(r30)
/* 801842D4 00181214  28 03 00 00 */	cmplwi r3, 0
/* 801842D8 00181218  41 82 00 0C */	beq .L_801842E4
/* 801842DC 0018121C  38 03 FF FF */	addi r0, r3, -1
/* 801842E0 00181220  B0 1E 00 14 */	sth r0, 0x14(r30)
.L_801842E4:
/* 801842E4 00181224  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 801842E8 00181228  7F E3 FB 78 */	mr r3, r31
/* 801842EC 0018122C  54 00 08 3C */	slwi r0, r0, 1
/* 801842F0 00181230  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801842F4 00181234  48 01 B2 81 */	bl isStickTo__Q24Game8CreatureFv
/* 801842F8 00181238  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801842FC 0018123C  40 82 00 30 */	bne .L_8018432C
/* 80184300 00181240  7F E3 FB 78 */	mr r3, r31
/* 80184304 00181244  48 01 B1 21 */	bl endStick__Q24Game8CreatureFv
/* 80184308 00181248  7F C3 F3 78 */	mr r3, r30
/* 8018430C 0018124C  7F E4 FB 78 */	mr r4, r31
/* 80184310 00181250  81 9E 00 00 */	lwz r12, 0(r30)
/* 80184314 00181254  38 A0 00 00 */	li r5, 0
/* 80184318 00181258  38 C0 00 00 */	li r6, 0
/* 8018431C 0018125C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80184320 00181260  7D 89 03 A6 */	mtctr r12
/* 80184324 00181264  4E 80 04 21 */	bctrl 
/* 80184328 00181268  48 00 00 34 */	b .L_8018435C
.L_8018432C:
/* 8018432C 0018126C  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 80184330 00181270  28 03 00 00 */	cmplwi r3, 0
/* 80184334 00181274  41 82 00 28 */	beq .L_8018435C
/* 80184338 00181278  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8018433C 0018127C  54 00 01 0F */	rlwinm. r0, r0, 0, 4, 7
/* 80184340 00181280  41 82 00 1C */	beq .L_8018435C
/* 80184344 00181284  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80184348 00181288  60 00 00 01 */	ori r0, r0, 1
/* 8018434C 0018128C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80184350 00181290  A0 7E 00 14 */	lhz r3, 0x14(r30)
/* 80184354 00181294  38 03 00 01 */	addi r0, r3, 1
/* 80184358 00181298  B0 1E 00 14 */	sth r0, 0x14(r30)
.L_8018435C:
/* 8018435C 0018129C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80184360 001812A0  48 03 0C 61 */	bl paused_soft__Q24Game10GameSystemFv
/* 80184364 001812A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80184368 001812A8  40 82 01 B4 */	bne .L_8018451C
/* 8018436C 001812AC  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80184370 001812B0  38 60 00 00 */	li r3, 0
/* 80184374 001812B4  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80184378 001812B8  2C 00 00 01 */	cmpwi r0, 1
/* 8018437C 001812BC  41 82 00 0C */	beq .L_80184388
/* 80184380 001812C0  2C 00 00 03 */	cmpwi r0, 3
/* 80184384 001812C4  40 82 00 08 */	bne .L_8018438C
.L_80184388:
/* 80184388 001812C8  38 60 00 01 */	li r3, 1
.L_8018438C:
/* 8018438C 001812CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80184390 001812D0  40 82 01 8C */	bne .L_8018451C
/* 80184394 001812D4  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 80184398 001812D8  28 03 00 00 */	cmplwi r3, 0
/* 8018439C 001812DC  41 82 01 80 */	beq .L_8018451C
/* 801843A0 001812E0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801843A4 001812E4  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 801843A8 001812E8  41 82 01 74 */	beq .L_8018451C
/* 801843AC 001812EC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801843B0 001812F0  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 801843B4 001812F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801843B8 001812F8  20 80 00 01 */	subfic r4, r0, 1
/* 801843BC 001812FC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801843C0 00181300  7D 89 03 A6 */	mtctr r12
/* 801843C4 00181304  4E 80 04 21 */	bctrl 
/* 801843C8 00181308  7C 7C 1B 78 */	mr r28, r3
/* 801843CC 0018130C  4B FB D0 79 */	bl getStateID__Q24Game4NaviFv
/* 801843D0 00181310  7C 7D 1B 78 */	mr r29, r3
/* 801843D4 00181314  7F 83 E3 78 */	mr r3, r28
/* 801843D8 00181318  81 9C 00 00 */	lwz r12, 0(r28)
/* 801843DC 0018131C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801843E0 00181320  7D 89 03 A6 */	mtctr r12
/* 801843E4 00181324  4E 80 04 21 */	bctrl 
/* 801843E8 00181328  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801843EC 0018132C  41 82 01 30 */	beq .L_8018451C
/* 801843F0 00181330  2C 1D 00 08 */	cmpwi r29, 8
/* 801843F4 00181334  41 82 01 28 */	beq .L_8018451C
/* 801843F8 00181338  2C 1D 00 09 */	cmpwi r29, 9
/* 801843FC 0018133C  41 82 01 20 */	beq .L_8018451C
/* 80184400 00181340  2C 1D 00 02 */	cmpwi r29, 2
/* 80184404 00181344  41 82 01 18 */	beq .L_8018451C
/* 80184408 00181348  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8018440C 0018134C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80184410 00181350  4B FC 94 55 */	bl pmTogglePlayer__Q24Game15BaseGameSectionFv
/* 80184414 00181354  A0 1C 02 DC */	lhz r0, 0x2dc(r28)
/* 80184418 00181358  28 00 00 00 */	cmplwi r0, 0
/* 8018441C 0018135C  40 82 00 18 */	bne .L_80184434
/* 80184420 00181360  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80184424 00181364  38 80 18 8D */	li r4, 0x188d
/* 80184428 00181368  38 A0 00 00 */	li r5, 0
/* 8018442C 0018136C  48 1B 42 05 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80184430 00181370  48 00 00 38 */	b .L_80184468
.L_80184434:
/* 80184434 00181374  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80184438 00181378  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 8018443C 0018137C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80184440 00181380  41 82 00 18 */	beq .L_80184458
/* 80184444 00181384  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80184448 00181388  38 80 18 8F */	li r4, 0x188f
/* 8018444C 0018138C  38 A0 00 00 */	li r5, 0
/* 80184450 00181390  48 1B 41 E1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80184454 00181394  48 00 00 14 */	b .L_80184468
.L_80184458:
/* 80184458 00181398  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8018445C 0018139C  38 80 18 8E */	li r4, 0x188e
/* 80184460 001813A0  38 A0 00 00 */	li r5, 0
/* 80184464 001813A4  48 1B 41 CD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80184468:
/* 80184468 001813A8  A0 1C 02 DC */	lhz r0, 0x2dc(r28)
/* 8018446C 001813AC  28 00 00 00 */	cmplwi r0, 0
/* 80184470 001813B0  40 82 00 24 */	bne .L_80184494
/* 80184474 001813B4  80 7C 02 6C */	lwz r3, 0x26c(r28)
/* 80184478 001813B8  38 80 08 A6 */	li r4, 0x8a6
/* 8018447C 001813BC  38 A0 00 00 */	li r5, 0
/* 80184480 001813C0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80184484 001813C4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80184488 001813C8  7D 89 03 A6 */	mtctr r12
/* 8018448C 001813CC  4E 80 04 21 */	bctrl 
/* 80184490 001813D0  48 00 00 50 */	b .L_801844E0
.L_80184494:
/* 80184494 001813D4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80184498 001813D8  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 8018449C 001813DC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801844A0 001813E0  41 82 00 24 */	beq .L_801844C4
/* 801844A4 001813E4  80 7C 02 6C */	lwz r3, 0x26c(r28)
/* 801844A8 001813E8  38 80 08 A8 */	li r4, 0x8a8
/* 801844AC 001813EC  38 A0 00 00 */	li r5, 0
/* 801844B0 001813F0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801844B4 001813F4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801844B8 001813F8  7D 89 03 A6 */	mtctr r12
/* 801844BC 001813FC  4E 80 04 21 */	bctrl 
/* 801844C0 00181400  48 00 00 20 */	b .L_801844E0
.L_801844C4:
/* 801844C4 00181404  80 7C 02 6C */	lwz r3, 0x26c(r28)
/* 801844C8 00181408  38 80 08 A7 */	li r4, 0x8a7
/* 801844CC 0018140C  38 A0 00 00 */	li r5, 0
/* 801844D0 00181410  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801844D4 00181414  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801844D8 00181418  7D 89 03 A6 */	mtctr r12
/* 801844DC 0018141C  4E 80 04 21 */	bctrl 
.L_801844E0:
/* 801844E0 00181420  80 7C 02 74 */	lwz r3, 0x274(r28)
/* 801844E4 00181424  81 83 00 00 */	lwz r12, 0(r3)
/* 801844E8 00181428  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801844EC 0018142C  7D 89 03 A6 */	mtctr r12
/* 801844F0 00181430  4E 80 04 21 */	bctrl 
/* 801844F4 00181434  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801844F8 00181438  41 82 00 24 */	beq .L_8018451C
/* 801844FC 0018143C  80 7C 02 70 */	lwz r3, 0x270(r28)
/* 80184500 00181440  7F 84 E3 78 */	mr r4, r28
/* 80184504 00181444  38 A0 00 03 */	li r5, 3
/* 80184508 00181448  38 C0 00 00 */	li r6, 0
/* 8018450C 0018144C  81 83 00 00 */	lwz r12, 0(r3)
/* 80184510 00181450  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80184514 00181454  7D 89 03 A6 */	mtctr r12
/* 80184518 00181458  4E 80 04 21 */	bctrl 
.L_8018451C:
/* 8018451C 0018145C  A0 7E 00 14 */	lhz r3, 0x14(r30)
/* 80184520 00181460  C3 E2 A9 04 */	lfs f31, lbl_80518C64@sda21(r2)
/* 80184524 00181464  28 03 00 06 */	cmplwi r3, 6
/* 80184528 00181468  41 80 00 B4 */	blt .L_801845DC
/* 8018452C 0018146C  3C 00 43 30 */	lis r0, 0x4330
/* 80184530 00181470  90 61 00 0C */	stw r3, 0xc(r1)
/* 80184534 00181474  C8 62 A9 50 */	lfd f3, lbl_80518CB0@sda21(r2)
/* 80184538 00181478  90 01 00 08 */	stw r0, 8(r1)
/* 8018453C 0018147C  C0 22 A9 4C */	lfs f1, lbl_80518CAC@sda21(r2)
/* 80184540 00181480  C8 41 00 08 */	lfd f2, 8(r1)
/* 80184544 00181484  C0 02 A9 08 */	lfs f0, lbl_80518C68@sda21(r2)
/* 80184548 00181488  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018454C 0018148C  EF C2 08 24 */	fdivs f30, f2, f1
/* 80184550 00181490  EF E0 07 BA */	fmadds f31, f0, f30, f0
/* 80184554 00181494  4B F4 50 4D */	bl rand
/* 80184558 00181498  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018455C 0018149C  3C 00 43 30 */	lis r0, 0x4330
/* 80184560 001814A0  90 61 00 14 */	stw r3, 0x14(r1)
/* 80184564 001814A4  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80184568 001814A8  C8 62 A8 D0 */	lfd f3, lbl_80518C30@sda21(r2)
/* 8018456C 001814AC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80184570 001814B0  C0 22 A8 A8 */	lfs f1, lbl_80518C08@sda21(r2)
/* 80184574 001814B4  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 80184578 001814B8  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018457C 001814BC  EC 22 08 24 */	fdivs f1, f2, f1
/* 80184580 001814C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80184584 001814C4  40 80 00 58 */	bge .L_801845DC
/* 80184588 001814C8  4B F4 50 19 */	bl rand
/* 8018458C 001814CC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80184590 001814D0  3C 00 43 30 */	lis r0, 0x4330
/* 80184594 001814D4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80184598 001814D8  C8 62 A8 D0 */	lfd f3, lbl_80518C30@sda21(r2)
/* 8018459C 001814DC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801845A0 001814E0  C0 22 A8 A8 */	lfs f1, lbl_80518C08@sda21(r2)
/* 801845A4 001814E4  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 801845A8 001814E8  C0 02 A8 BC */	lfs f0, lbl_80518C1C@sda21(r2)
/* 801845AC 001814EC  EC 42 18 28 */	fsubs f2, f2, f3
/* 801845B0 001814F0  EC 22 08 24 */	fdivs f1, f2, f1
/* 801845B4 001814F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801845B8 001814F8  40 80 00 24 */	bge .L_801845DC
/* 801845BC 001814FC  7F C3 F3 78 */	mr r3, r30
/* 801845C0 00181500  7F E4 FB 78 */	mr r4, r31
/* 801845C4 00181504  81 9E 00 00 */	lwz r12, 0(r30)
/* 801845C8 00181508  38 A0 00 12 */	li r5, 0x12
/* 801845CC 0018150C  38 C0 00 00 */	li r6, 0
/* 801845D0 00181510  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801845D4 00181514  7D 89 03 A6 */	mtctr r12
/* 801845D8 00181518  4E 80 04 21 */	bctrl 
.L_801845DC:
/* 801845DC 0018151C  D3 FF 02 34 */	stfs f31, 0x234(r31)
/* 801845E0 00181520  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801845E4 00181524  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801845E8 00181528  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 801845EC 0018152C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801845F0 00181530  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801845F4 00181534  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801845F8 00181538  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801845FC 0018153C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80184600 00181540  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80184604 00181544  7C 08 03 A6 */	mtlr r0
/* 80184608 00181548  38 21 00 50 */	addi r1, r1, 0x50
/* 8018460C 0018154C  4E 80 00 20 */	blr 
.endfn exec__Q24Game14NaviSaraiStateFPQ24Game4Navi

.fn cleanup__Q24Game14NaviSaraiStateFPQ24Game4Navi, global
/* 80184610 00181550  C0 02 A9 04 */	lfs f0, lbl_80518C64@sda21(r2)
/* 80184614 00181554  D0 04 02 34 */	stfs f0, 0x234(r4)
/* 80184618 00181558  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game14NaviSaraiStateFPQ24Game4Navi

.fn init__Q24Game18NaviSaraiExitStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 8018461C 0018155C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80184620 00181560  7C 08 02 A6 */	mflr r0
/* 80184624 00181564  90 01 00 14 */	stw r0, 0x14(r1)
/* 80184628 00181568  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018462C 0018156C  7C 9F 23 78 */	mr r31, r4
/* 80184630 00181570  7F E3 FB 78 */	mr r3, r31
/* 80184634 00181574  48 01 AD F1 */	bl endStick__Q24Game8CreatureFv
/* 80184638 00181578  7F E3 FB 78 */	mr r3, r31
/* 8018463C 0018157C  38 80 00 09 */	li r4, 9
/* 80184640 00181580  81 9F 00 00 */	lwz r12, 0(r31)
/* 80184644 00181584  38 A0 00 09 */	li r5, 9
/* 80184648 00181588  38 C0 00 00 */	li r6, 0
/* 8018464C 0018158C  38 E0 00 00 */	li r7, 0
/* 80184650 00181590  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80184654 00181594  7D 89 03 A6 */	mtctr r12
/* 80184658 00181598  4E 80 04 21 */	bctrl 
/* 8018465C 0018159C  7F E3 FB 78 */	mr r3, r31
/* 80184660 001815A0  38 80 00 00 */	li r4, 0
/* 80184664 001815A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80184668 001815A8  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8018466C 001815AC  7D 89 03 A6 */	mtctr r12
/* 80184670 001815B0  4E 80 04 21 */	bctrl 
/* 80184674 001815B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80184678 001815B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018467C 001815BC  7C 08 03 A6 */	mtlr r0
/* 80184680 001815C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80184684 001815C4  4E 80 00 20 */	blr 
.endfn init__Q24Game18NaviSaraiExitStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game18NaviSaraiExitStateFPQ24Game4Navi, global
/* 80184688 001815C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018468C 001815CC  7C 08 02 A6 */	mflr r0
/* 80184690 001815D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80184694 001815D4  80 04 02 48 */	lwz r0, 0x248(r4)
/* 80184698 001815D8  28 00 00 00 */	cmplwi r0, 0
/* 8018469C 001815DC  40 82 00 10 */	bne .L_801846AC
/* 801846A0 001815E0  80 04 00 C8 */	lwz r0, 0xc8(r4)
/* 801846A4 001815E4  28 00 00 00 */	cmplwi r0, 0
/* 801846A8 001815E8  41 82 00 1C */	beq .L_801846C4
.L_801846AC:
/* 801846AC 001815EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801846B0 001815F0  38 A0 00 00 */	li r5, 0
/* 801846B4 001815F4  38 C0 00 00 */	li r6, 0
/* 801846B8 001815F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801846BC 001815FC  7D 89 03 A6 */	mtctr r12
/* 801846C0 00181600  4E 80 04 21 */	bctrl 
.L_801846C4:
/* 801846C4 00181604  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801846C8 00181608  7C 08 03 A6 */	mtlr r0
/* 801846CC 0018160C  38 21 00 10 */	addi r1, r1, 0x10
/* 801846D0 00181610  4E 80 00 20 */	blr 
.endfn exec__Q24Game18NaviSaraiExitStateFPQ24Game4Navi

.fn cleanup__Q24Game18NaviSaraiExitStateFPQ24Game4Navi, global
/* 801846D4 00181614  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801846D8 00181618  7C 08 02 A6 */	mflr r0
/* 801846DC 0018161C  7C 83 23 78 */	mr r3, r4
/* 801846E0 00181620  38 80 00 01 */	li r4, 1
/* 801846E4 00181624  90 01 00 14 */	stw r0, 0x14(r1)
/* 801846E8 00181628  81 83 00 00 */	lwz r12, 0(r3)
/* 801846EC 0018162C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801846F0 00181630  7D 89 03 A6 */	mtctr r12
/* 801846F4 00181634  4E 80 04 21 */	bctrl 
/* 801846F8 00181638  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801846FC 0018163C  7C 08 03 A6 */	mtlr r0
/* 80184700 00181640  38 21 00 10 */	addi r1, r1, 0x10
/* 80184704 00181644  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game18NaviSaraiExitStateFPQ24Game4Navi

.fn bounceCallback__Q24Game18NaviSaraiExitStateFPQ24Game4NaviPQ23Sys8Triangle, global
/* 80184708 00181648  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018470C 0018164C  7C 08 02 A6 */	mflr r0
/* 80184710 00181650  38 A0 00 00 */	li r5, 0
/* 80184714 00181654  38 C0 00 00 */	li r6, 0
/* 80184718 00181658  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018471C 0018165C  81 83 00 00 */	lwz r12, 0(r3)
/* 80184720 00181660  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80184724 00181664  7D 89 03 A6 */	mtctr r12
/* 80184728 00181668  4E 80 04 21 */	bctrl 
/* 8018472C 0018166C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80184730 00181670  7C 08 03 A6 */	mtlr r0
/* 80184734 00181674  38 21 00 10 */	addi r1, r1, 0x10
/* 80184738 00181678  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game18NaviSaraiExitStateFPQ24Game4NaviPQ23Sys8Triangle

.fn init__Q24Game18NaviContainerStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 8018473C 0018167C  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 80184740 00181680  7C 08 02 A6 */	mflr r0
/* 80184744 00181684  90 01 01 04 */	stw r0, 0x104(r1)
/* 80184748 00181688  BE E1 00 DC */	stmw r23, 0xdc(r1)
/* 8018474C 0018168C  7C B7 2B 79 */	or. r23, r5, r5
/* 80184750 00181690  3C A0 80 48 */	lis r5, lbl_8047EAC8@ha
/* 80184754 00181694  7C 7C 1B 78 */	mr r28, r3
/* 80184758 00181698  7C 9D 23 78 */	mr r29, r4
/* 8018475C 0018169C  3B E5 EA C8 */	addi r31, r5, lbl_8047EAC8@l
/* 80184760 001816A0  40 82 00 18 */	bne .L_80184778
/* 80184764 001816A4  38 7F 00 84 */	addi r3, r31, 0x84
/* 80184768 001816A8  38 BF 00 94 */	addi r5, r31, 0x94
/* 8018476C 001816AC  38 80 0E 12 */	li r4, 0xe12
/* 80184770 001816B0  4C C6 31 82 */	crclr 6
/* 80184774 001816B4  4B EA 5E CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80184778:
/* 80184778 001816B8  80 17 00 00 */	lwz r0, 0(r23)
/* 8018477C 001816BC  90 1C 00 10 */	stw r0, 0x10(r28)
/* 80184780 001816C0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80184784 001816C4  80 9D 02 78 */	lwz r4, 0x278(r29)
/* 80184788 001816C8  48 27 78 F1 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8018478C 001816CC  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 80184790 001816D0  38 00 00 00 */	li r0, 0
/* 80184794 001816D4  A3 C3 02 2E */	lhz r30, 0x22e(r3)
/* 80184798 001816D8  98 1C 00 20 */	stb r0, 0x20(r28)
/* 8018479C 001816DC  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 801847A0 001816E0  A0 63 02 2E */	lhz r3, 0x22e(r3)
/* 801847A4 001816E4  28 03 00 04 */	cmplwi r3, 4
/* 801847A8 001816E8  40 82 03 B0 */	bne .L_80184B58
/* 801847AC 001816EC  38 E0 FF FF */	li r7, -1
/* 801847B0 001816F0  3B C0 00 64 */	li r30, 0x64
/* 801847B4 001816F4  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 801847B8 001816F8  90 E1 00 60 */	stw r7, 0x60(r1)
/* 801847BC 001816FC  3A E3 11 48 */	addi r23, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 801847C0 00181700  38 C0 00 04 */	li r6, 4
/* 801847C4 00181704  90 C1 00 60 */	stw r6, 0x60(r1)
/* 801847C8 00181708  3F 00 80 4B */	lis r24, __vt__Q32og6Screen18DispMemberUfoGroup@ha
/* 801847CC 0018170C  39 80 03 E8 */	li r12, 0x3e8
/* 801847D0 00181710  39 60 00 14 */	li r11, 0x14
/* 801847D4 00181714  39 40 00 32 */	li r10, 0x32
/* 801847D8 00181718  39 20 00 3C */	li r9, 0x3c
/* 801847DC 0018171C  39 00 00 C8 */	li r8, 0xc8
/* 801847E0 00181720  3C A0 80 4B */	lis r5, __vt__Q32og6Screen17DispMemberUfoMenu@ha
/* 801847E4 00181724  3C 80 80 4B */	lis r4, __vt__Q32og6Screen17DispMemberContena@ha
/* 801847E8 00181728  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801847EC 0018172C  3B 40 00 01 */	li r26, 1
/* 801847F0 00181730  92 E1 00 40 */	stw r23, 0x40(r1)
/* 801847F4 00181734  3B 18 31 64 */	addi r24, r24, __vt__Q32og6Screen18DispMemberUfoGroup@l
/* 801847F8 00181738  3B 25 31 4C */	addi r25, r5, __vt__Q32og6Screen17DispMemberUfoMenu@l
/* 801847FC 0018173C  92 E1 00 48 */	stw r23, 0x48(r1)
/* 80184800 00181740  3B 64 31 34 */	addi r27, r4, __vt__Q32og6Screen17DispMemberContena@l
/* 80184804 00181744  38 A0 00 03 */	li r5, 3
/* 80184808 00181748  38 63 00 A8 */	addi r3, r3, 0xa8
/* 8018480C 0018174C  92 E1 00 58 */	stw r23, 0x58(r1)
/* 80184810 00181750  38 80 00 04 */	li r4, 4
/* 80184814 00181754  92 E1 00 90 */	stw r23, 0x90(r1)
/* 80184818 00181758  90 E1 00 98 */	stw r7, 0x98(r1)
/* 8018481C 0018175C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80184820 00181760  93 01 00 40 */	stw r24, 0x40(r1)
/* 80184824 00181764  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80184828 00181768  93 21 00 48 */	stw r25, 0x48(r1)
/* 8018482C 0018176C  93 41 00 50 */	stw r26, 0x50(r1)
/* 80184830 00181770  98 01 00 54 */	stb r0, 0x54(r1)
/* 80184834 00181774  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80184838 00181778  93 61 00 58 */	stw r27, 0x58(r1)
/* 8018483C 0018177C  93 C1 00 64 */	stw r30, 0x64(r1)
/* 80184840 00181780  91 81 00 68 */	stw r12, 0x68(r1)
/* 80184844 00181784  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80184848 00181788  91 61 00 70 */	stw r11, 0x70(r1)
/* 8018484C 0018178C  91 41 00 74 */	stw r10, 0x74(r1)
/* 80184850 00181790  91 21 00 78 */	stw r9, 0x78(r1)
/* 80184854 00181794  91 01 00 7C */	stw r8, 0x7c(r1)
/* 80184858 00181798  90 01 00 80 */	stw r0, 0x80(r1)
/* 8018485C 0018179C  98 01 00 84 */	stb r0, 0x84(r1)
/* 80184860 001817A0  90 01 00 88 */	stw r0, 0x88(r1)
/* 80184864 001817A4  B0 01 00 8C */	sth r0, 0x8c(r1)
/* 80184868 001817A8  90 01 00 94 */	stw r0, 0x94(r1)
/* 8018486C 001817AC  93 61 00 90 */	stw r27, 0x90(r1)
/* 80184870 001817B0  93 C1 00 9C */	stw r30, 0x9c(r1)
/* 80184874 001817B4  91 81 00 A0 */	stw r12, 0xa0(r1)
/* 80184878 001817B8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8018487C 001817BC  91 61 00 A8 */	stw r11, 0xa8(r1)
/* 80184880 001817C0  91 41 00 AC */	stw r10, 0xac(r1)
/* 80184884 001817C4  91 21 00 B0 */	stw r9, 0xb0(r1)
/* 80184888 001817C8  91 01 00 B4 */	stw r8, 0xb4(r1)
/* 8018488C 001817CC  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80184890 001817D0  98 01 00 BC */	stb r0, 0xbc(r1)
/* 80184894 001817D4  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 80184898 001817D8  B0 01 00 C4 */	sth r0, 0xc4(r1)
/* 8018489C 001817DC  98 01 00 C8 */	stb r0, 0xc8(r1)
/* 801848A0 001817E0  98 01 00 C9 */	stb r0, 0xc9(r1)
/* 801848A4 001817E4  90 A1 00 98 */	stw r5, 0x98(r1)
/* 801848A8 001817E8  98 01 00 CA */	stb r0, 0xca(r1)
/* 801848AC 001817EC  90 C1 00 60 */	stw r6, 0x60(r1)
/* 801848B0 001817F0  48 06 CD 01 */	bl getColorSum__Q24Game13PikiContainerFi
/* 801848B4 001817F4  80 9C 00 10 */	lwz r4, 0x10(r28)
/* 801848B8 001817F8  80 04 01 E4 */	lwz r0, 0x1e4(r4)
/* 801848BC 001817FC  7C 00 18 51 */	subf. r0, r0, r3
/* 801848C0 00181800  40 80 00 08 */	bge .L_801848C8
/* 801848C4 00181804  38 00 00 00 */	li r0, 0
.L_801848C8:
/* 801848C8 00181808  3C 60 00 02 */	lis r3, 0x0001F400@ha
/* 801848CC 0018180C  90 01 00 64 */	stw r0, 0x64(r1)
/* 801848D0 00181810  38 63 F4 00 */	addi r3, r3, 0x0001F400@l
/* 801848D4 00181814  38 00 00 00 */	li r0, 0
/* 801848D8 00181818  90 61 00 68 */	stw r3, 0x68(r1)
/* 801848DC 0018181C  A2 FD 02 DC */	lhz r23, 0x2dc(r29)
/* 801848E0 00181820  2C 17 00 00 */	cmpwi r23, 0
/* 801848E4 00181824  41 80 00 10 */	blt .L_801848F4
/* 801848E8 00181828  2C 17 00 07 */	cmpwi r23, 7
/* 801848EC 0018182C  40 80 00 08 */	bge .L_801848F4
/* 801848F0 00181830  38 00 00 01 */	li r0, 1
.L_801848F4:
/* 801848F4 00181834  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801848F8 00181838  40 82 00 18 */	bne .L_80184910
/* 801848FC 0018183C  38 7F 00 CC */	addi r3, r31, 0xcc
/* 80184900 00181840  38 BF 00 94 */	addi r5, r31, 0x94
/* 80184904 00181844  38 80 00 77 */	li r4, 0x77
/* 80184908 00181848  4C C6 31 82 */	crclr 6
/* 8018490C 0018184C  4B EA 5D 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80184910:
/* 80184910 00181850  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80184914 00181854  56 E5 28 34 */	slwi r5, r23, 5
/* 80184918 00181858  38 03 22 EC */	addi r0, r3, formationPikis__Q24Game8GameStat@l
/* 8018491C 0018185C  38 80 00 04 */	li r4, 4
/* 80184920 00181860  7C 60 2A 14 */	add r3, r0, r5
/* 80184924 00181864  81 83 00 00 */	lwz r12, 0(r3)
/* 80184928 00181868  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8018492C 0018186C  7D 89 03 A6 */	mtctr r12
/* 80184930 00181870  4E 80 04 21 */	bctrl 
/* 80184934 00181874  38 80 00 64 */	li r4, 0x64
/* 80184938 00181878  90 61 00 6C */	stw r3, 0x6c(r1)
/* 8018493C 0018187C  38 00 00 00 */	li r0, 0
/* 80184940 00181880  90 81 00 70 */	stw r4, 0x70(r1)
/* 80184944 00181884  A2 FD 02 DC */	lhz r23, 0x2dc(r29)
/* 80184948 00181888  2C 17 00 00 */	cmpwi r23, 0
/* 8018494C 0018188C  41 80 00 10 */	blt .L_8018495C
/* 80184950 00181890  2C 17 00 07 */	cmpwi r23, 7
/* 80184954 00181894  40 80 00 08 */	bge .L_8018495C
/* 80184958 00181898  38 00 00 01 */	li r0, 1
.L_8018495C:
/* 8018495C 0018189C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80184960 001818A0  40 82 00 18 */	bne .L_80184978
/* 80184964 001818A4  38 7F 00 CC */	addi r3, r31, 0xcc
/* 80184968 001818A8  38 BF 00 94 */	addi r5, r31, 0x94
/* 8018496C 001818AC  38 80 00 73 */	li r4, 0x73
/* 80184970 001818B0  4C C6 31 82 */	crclr 6
/* 80184974 001818B4  4B EA 5C CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80184978:
/* 80184978 001818B8  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 8018497C 001818BC  56 E4 28 34 */	slwi r4, r23, 5
/* 80184980 001818C0  38 03 22 EC */	addi r0, r3, formationPikis__Q24Game8GameStat@l
/* 80184984 001818C4  7C 60 22 14 */	add r3, r0, r4
/* 80184988 001818C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8018498C 001818CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80184990 001818D0  7D 89 03 A6 */	mtctr r12
/* 80184994 001818D4  4E 80 04 21 */	bctrl 
/* 80184998 001818D8  90 61 00 74 */	stw r3, 0x74(r1)
/* 8018499C 001818DC  38 60 FF FF */	li r3, -1
/* 801849A0 001818E0  48 04 C4 C1 */	bl getMapPikmins__Q24Game8GameStatFi
/* 801849A4 001818E4  7C 7E 1B 78 */	mr r30, r3
/* 801849A8 001818E8  38 60 FF FF */	li r3, -1
/* 801849AC 001818EC  48 04 C5 41 */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 801849B0 001818F0  7C 03 F0 50 */	subf r0, r3, r30
/* 801849B4 001818F4  38 60 FF FF */	li r3, -1
/* 801849B8 001818F8  90 01 00 78 */	stw r0, 0x78(r1)
/* 801849BC 001818FC  48 04 C5 31 */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 801849C0 00181900  20 83 00 64 */	subfic r4, r3, 0x64
/* 801849C4 00181904  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801849C8 00181908  38 00 00 03 */	li r0, 3
/* 801849CC 0018190C  90 81 00 7C */	stw r4, 0x7c(r1)
/* 801849D0 00181910  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801849D4 00181914  38 80 00 03 */	li r4, 3
/* 801849D8 00181918  90 01 00 98 */	stw r0, 0x98(r1)
/* 801849DC 0018191C  48 06 CB D5 */	bl getColorSum__Q24Game13PikiContainerFi
/* 801849E0 00181920  80 9C 00 10 */	lwz r4, 0x10(r28)
/* 801849E4 00181924  80 04 01 E8 */	lwz r0, 0x1e8(r4)
/* 801849E8 00181928  7C 00 18 51 */	subf. r0, r0, r3
/* 801849EC 0018192C  40 80 00 08 */	bge .L_801849F4
/* 801849F0 00181930  38 00 00 00 */	li r0, 0
.L_801849F4:
/* 801849F4 00181934  3C 60 00 02 */	lis r3, 0x0001F400@ha
/* 801849F8 00181938  90 01 00 9C */	stw r0, 0x9c(r1)
/* 801849FC 0018193C  38 63 F4 00 */	addi r3, r3, 0x0001F400@l
/* 80184A00 00181940  38 00 00 00 */	li r0, 0
/* 80184A04 00181944  90 61 00 A0 */	stw r3, 0xa0(r1)
/* 80184A08 00181948  A2 FD 02 DC */	lhz r23, 0x2dc(r29)
/* 80184A0C 0018194C  2C 17 00 00 */	cmpwi r23, 0
/* 80184A10 00181950  41 80 00 10 */	blt .L_80184A20
/* 80184A14 00181954  2C 17 00 07 */	cmpwi r23, 7
/* 80184A18 00181958  40 80 00 08 */	bge .L_80184A20
/* 80184A1C 0018195C  38 00 00 01 */	li r0, 1
.L_80184A20:
/* 80184A20 00181960  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80184A24 00181964  40 82 00 18 */	bne .L_80184A3C
/* 80184A28 00181968  38 7F 00 CC */	addi r3, r31, 0xcc
/* 80184A2C 0018196C  38 BF 00 94 */	addi r5, r31, 0x94
/* 80184A30 00181970  38 80 00 77 */	li r4, 0x77
/* 80184A34 00181974  4C C6 31 82 */	crclr 6
/* 80184A38 00181978  4B EA 5C 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80184A3C:
/* 80184A3C 0018197C  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80184A40 00181980  56 E5 28 34 */	slwi r5, r23, 5
/* 80184A44 00181984  38 03 22 EC */	addi r0, r3, formationPikis__Q24Game8GameStat@l
/* 80184A48 00181988  38 80 00 03 */	li r4, 3
/* 80184A4C 0018198C  7C 60 2A 14 */	add r3, r0, r5
/* 80184A50 00181990  81 83 00 00 */	lwz r12, 0(r3)
/* 80184A54 00181994  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80184A58 00181998  7D 89 03 A6 */	mtctr r12
/* 80184A5C 0018199C  4E 80 04 21 */	bctrl 
/* 80184A60 001819A0  38 80 00 64 */	li r4, 0x64
/* 80184A64 001819A4  90 61 00 A4 */	stw r3, 0xa4(r1)
/* 80184A68 001819A8  38 00 00 00 */	li r0, 0
/* 80184A6C 001819AC  90 81 00 A8 */	stw r4, 0xa8(r1)
/* 80184A70 001819B0  A2 FD 02 DC */	lhz r23, 0x2dc(r29)
/* 80184A74 001819B4  2C 17 00 00 */	cmpwi r23, 0
/* 80184A78 001819B8  41 80 00 10 */	blt .L_80184A88
/* 80184A7C 001819BC  2C 17 00 07 */	cmpwi r23, 7
/* 80184A80 001819C0  40 80 00 08 */	bge .L_80184A88
/* 80184A84 001819C4  38 00 00 01 */	li r0, 1
.L_80184A88:
/* 80184A88 001819C8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80184A8C 001819CC  40 82 00 18 */	bne .L_80184AA4
/* 80184A90 001819D0  38 7F 00 CC */	addi r3, r31, 0xcc
/* 80184A94 001819D4  38 BF 00 94 */	addi r5, r31, 0x94
/* 80184A98 001819D8  38 80 00 73 */	li r4, 0x73
/* 80184A9C 001819DC  4C C6 31 82 */	crclr 6
/* 80184AA0 001819E0  4B EA 5B A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80184AA4:
/* 80184AA4 001819E4  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80184AA8 001819E8  56 E4 28 34 */	slwi r4, r23, 5
/* 80184AAC 001819EC  38 03 22 EC */	addi r0, r3, formationPikis__Q24Game8GameStat@l
/* 80184AB0 001819F0  7C 60 22 14 */	add r3, r0, r4
/* 80184AB4 001819F4  81 83 00 00 */	lwz r12, 0(r3)
/* 80184AB8 001819F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80184ABC 001819FC  7D 89 03 A6 */	mtctr r12
/* 80184AC0 00181A00  4E 80 04 21 */	bctrl 
/* 80184AC4 00181A04  90 61 00 AC */	stw r3, 0xac(r1)
/* 80184AC8 00181A08  38 60 FF FF */	li r3, -1
/* 80184ACC 00181A0C  48 04 C3 95 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80184AD0 00181A10  7C 7D 1B 78 */	mr r29, r3
/* 80184AD4 00181A14  38 60 FF FF */	li r3, -1
/* 80184AD8 00181A18  48 04 C4 15 */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80184ADC 00181A1C  7C 03 E8 50 */	subf r0, r3, r29
/* 80184AE0 00181A20  38 60 FF FF */	li r3, -1
/* 80184AE4 00181A24  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 80184AE8 00181A28  48 04 C4 05 */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80184AEC 00181A2C  20 03 00 64 */	subfic r0, r3, 0x64
/* 80184AF0 00181A30  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80184AF4 00181A34  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80184AF8 00181A38  38 80 00 04 */	li r4, 4
/* 80184AFC 00181A3C  48 06 25 25 */	bl hasContainer__Q24Game8PlayDataFi
/* 80184B00 00181A40  98 61 00 C8 */	stb r3, 0xc8(r1)
/* 80184B04 00181A44  38 80 00 03 */	li r4, 3
/* 80184B08 00181A48  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80184B0C 00181A4C  48 06 25 15 */	bl hasContainer__Q24Game8PlayDataFi
/* 80184B10 00181A50  98 61 00 C9 */	stb r3, 0xc9(r1)
/* 80184B14 00181A54  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80184B18 00181A58  88 01 00 C8 */	lbz r0, 0xc8(r1)
/* 80184B1C 00181A5C  88 84 00 2F */	lbz r4, 0x2f(r4)
/* 80184B20 00181A60  28 00 00 00 */	cmplwi r0, 0
/* 80184B24 00181A64  54 80 07 FE */	clrlwi r0, r4, 0x1f
/* 80184B28 00181A68  98 01 00 CA */	stb r0, 0xca(r1)
/* 80184B2C 00181A6C  40 82 00 18 */	bne .L_80184B44
/* 80184B30 00181A70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80184B34 00181A74  40 82 00 10 */	bne .L_80184B44
/* 80184B38 00181A78  38 00 00 00 */	li r0, 0
/* 80184B3C 00181A7C  98 1C 00 20 */	stb r0, 0x20(r28)
/* 80184B40 00181A80  48 00 01 A4 */	b .L_80184CE4
.L_80184B44:
/* 80184B44 00181A84  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80184B48 00181A88  38 81 00 40 */	addi r4, r1, 0x40
/* 80184B4C 00181A8C  48 27 A5 75 */	bl open_UfoMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberUfoGroup
/* 80184B50 00181A90  98 7C 00 20 */	stb r3, 0x20(r28)
/* 80184B54 00181A94  48 00 01 90 */	b .L_80184CE4
.L_80184B58:
/* 80184B58 00181A98  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80184B5C 00181A9C  38 60 FF FF */	li r3, -1
/* 80184B60 00181AA0  39 64 11 48 */	addi r11, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80184B64 00181AA4  90 61 00 10 */	stw r3, 0x10(r1)
/* 80184B68 00181AA8  3C 80 80 4B */	lis r4, __vt__Q32og6Screen17DispMemberContena@ha
/* 80184B6C 00181AAC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80184B70 00181AB0  39 40 00 64 */	li r10, 0x64
/* 80184B74 00181AB4  39 20 03 E8 */	li r9, 0x3e8
/* 80184B78 00181AB8  39 00 00 14 */	li r8, 0x14
/* 80184B7C 00181ABC  38 E0 00 32 */	li r7, 0x32
/* 80184B80 00181AC0  38 C0 00 3C */	li r6, 0x3c
/* 80184B84 00181AC4  38 A0 00 C8 */	li r5, 0xc8
/* 80184B88 00181AC8  91 61 00 08 */	stw r11, 8(r1)
/* 80184B8C 00181ACC  39 64 31 34 */	addi r11, r4, __vt__Q32og6Screen17DispMemberContena@l
/* 80184B90 00181AD0  7F C4 F3 78 */	mr r4, r30
/* 80184B94 00181AD4  38 63 00 A8 */	addi r3, r3, 0xa8
/* 80184B98 00181AD8  90 01 00 0C */	stw r0, 0xc(r1)
/* 80184B9C 00181ADC  91 61 00 08 */	stw r11, 8(r1)
/* 80184BA0 00181AE0  91 41 00 14 */	stw r10, 0x14(r1)
/* 80184BA4 00181AE4  91 21 00 18 */	stw r9, 0x18(r1)
/* 80184BA8 00181AE8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80184BAC 00181AEC  91 01 00 20 */	stw r8, 0x20(r1)
/* 80184BB0 00181AF0  90 E1 00 24 */	stw r7, 0x24(r1)
/* 80184BB4 00181AF4  90 C1 00 28 */	stw r6, 0x28(r1)
/* 80184BB8 00181AF8  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80184BBC 00181AFC  90 01 00 30 */	stw r0, 0x30(r1)
/* 80184BC0 00181B00  98 01 00 34 */	stb r0, 0x34(r1)
/* 80184BC4 00181B04  90 01 00 38 */	stw r0, 0x38(r1)
/* 80184BC8 00181B08  B0 01 00 3C */	sth r0, 0x3c(r1)
/* 80184BCC 00181B0C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80184BD0 00181B10  48 06 C9 E1 */	bl getColorSum__Q24Game13PikiContainerFi
/* 80184BD4 00181B14  3C 80 00 02 */	lis r4, 0x0001F400@ha
/* 80184BD8 00181B18  90 61 00 14 */	stw r3, 0x14(r1)
/* 80184BDC 00181B1C  38 64 F4 00 */	addi r3, r4, 0x0001F400@l
/* 80184BE0 00181B20  38 00 00 00 */	li r0, 0
/* 80184BE4 00181B24  90 61 00 18 */	stw r3, 0x18(r1)
/* 80184BE8 00181B28  A2 FD 02 DC */	lhz r23, 0x2dc(r29)
/* 80184BEC 00181B2C  2C 17 00 00 */	cmpwi r23, 0
/* 80184BF0 00181B30  41 80 00 10 */	blt .L_80184C00
/* 80184BF4 00181B34  2C 17 00 07 */	cmpwi r23, 7
/* 80184BF8 00181B38  40 80 00 08 */	bge .L_80184C00
/* 80184BFC 00181B3C  38 00 00 01 */	li r0, 1
.L_80184C00:
/* 80184C00 00181B40  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80184C04 00181B44  40 82 00 18 */	bne .L_80184C1C
/* 80184C08 00181B48  38 7F 00 CC */	addi r3, r31, 0xcc
/* 80184C0C 00181B4C  38 BF 00 94 */	addi r5, r31, 0x94
/* 80184C10 00181B50  38 80 00 77 */	li r4, 0x77
/* 80184C14 00181B54  4C C6 31 82 */	crclr 6
/* 80184C18 00181B58  4B EA 5A 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80184C1C:
/* 80184C1C 00181B5C  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80184C20 00181B60  56 E5 28 34 */	slwi r5, r23, 5
/* 80184C24 00181B64  38 03 22 EC */	addi r0, r3, formationPikis__Q24Game8GameStat@l
/* 80184C28 00181B68  7F C4 F3 78 */	mr r4, r30
/* 80184C2C 00181B6C  7C 60 2A 14 */	add r3, r0, r5
/* 80184C30 00181B70  81 83 00 00 */	lwz r12, 0(r3)
/* 80184C34 00181B74  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80184C38 00181B78  7D 89 03 A6 */	mtctr r12
/* 80184C3C 00181B7C  4E 80 04 21 */	bctrl 
/* 80184C40 00181B80  38 80 00 64 */	li r4, 0x64
/* 80184C44 00181B84  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80184C48 00181B88  38 00 00 00 */	li r0, 0
/* 80184C4C 00181B8C  90 81 00 20 */	stw r4, 0x20(r1)
/* 80184C50 00181B90  A2 FD 02 DC */	lhz r23, 0x2dc(r29)
/* 80184C54 00181B94  2C 17 00 00 */	cmpwi r23, 0
/* 80184C58 00181B98  41 80 00 10 */	blt .L_80184C68
/* 80184C5C 00181B9C  2C 17 00 07 */	cmpwi r23, 7
/* 80184C60 00181BA0  40 80 00 08 */	bge .L_80184C68
/* 80184C64 00181BA4  38 00 00 01 */	li r0, 1
.L_80184C68:
/* 80184C68 00181BA8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80184C6C 00181BAC  40 82 00 18 */	bne .L_80184C84
/* 80184C70 00181BB0  38 7F 00 CC */	addi r3, r31, 0xcc
/* 80184C74 00181BB4  38 BF 00 94 */	addi r5, r31, 0x94
/* 80184C78 00181BB8  38 80 00 73 */	li r4, 0x73
/* 80184C7C 00181BBC  4C C6 31 82 */	crclr 6
/* 80184C80 00181BC0  4B EA 59 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80184C84:
/* 80184C84 00181BC4  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80184C88 00181BC8  56 E4 28 34 */	slwi r4, r23, 5
/* 80184C8C 00181BCC  38 03 22 EC */	addi r0, r3, formationPikis__Q24Game8GameStat@l
/* 80184C90 00181BD0  7C 60 22 14 */	add r3, r0, r4
/* 80184C94 00181BD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80184C98 00181BD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80184C9C 00181BDC  7D 89 03 A6 */	mtctr r12
/* 80184CA0 00181BE0  4E 80 04 21 */	bctrl 
/* 80184CA4 00181BE4  90 61 00 24 */	stw r3, 0x24(r1)
/* 80184CA8 00181BE8  38 60 FF FF */	li r3, -1
/* 80184CAC 00181BEC  48 04 C1 B5 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80184CB0 00181BF0  7C 7D 1B 78 */	mr r29, r3
/* 80184CB4 00181BF4  38 60 FF FF */	li r3, -1
/* 80184CB8 00181BF8  48 04 C2 35 */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80184CBC 00181BFC  7C 03 E8 50 */	subf r0, r3, r29
/* 80184CC0 00181C00  38 60 FF FF */	li r3, -1
/* 80184CC4 00181C04  90 01 00 28 */	stw r0, 0x28(r1)
/* 80184CC8 00181C08  48 04 C2 25 */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80184CCC 00181C0C  20 03 00 64 */	subfic r0, r3, 0x64
/* 80184CD0 00181C10  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80184CD4 00181C14  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80184CD8 00181C18  38 81 00 08 */	addi r4, r1, 8
/* 80184CDC 00181C1C  48 27 A1 1D */	bl open_Contena__Q26Screen9Game2DMgrFRQ32og6Screen17DispMemberContena
/* 80184CE0 00181C20  98 7C 00 20 */	stb r3, 0x20(r28)
.L_80184CE4:
/* 80184CE4 00181C24  88 1C 00 20 */	lbz r0, 0x20(r28)
/* 80184CE8 00181C28  28 00 00 00 */	cmplwi r0, 0
/* 80184CEC 00181C2C  41 82 00 24 */	beq .L_80184D10
/* 80184CF0 00181C30  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80184CF4 00181C34  38 BF 00 D8 */	addi r5, r31, 0xd8
/* 80184CF8 00181C38  38 80 00 01 */	li r4, 1
/* 80184CFC 00181C3C  48 03 02 91 */	bl setFrozen__Q24Game10GameSystemFbPc
/* 80184D00 00181C40  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80184D04 00181C44  38 BF 00 D8 */	addi r5, r31, 0xd8
/* 80184D08 00181C48  38 80 00 01 */	li r4, 1
/* 80184D0C 00181C4C  48 03 02 79 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_80184D10:
/* 80184D10 00181C50  38 00 00 01 */	li r0, 1
/* 80184D14 00181C54  98 1C 00 18 */	stb r0, 0x18(r28)
/* 80184D18 00181C58  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 80184D1C 00181C5C  A0 03 02 2E */	lhz r0, 0x22e(r3)
/* 80184D20 00181C60  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 80184D24 00181C64  BA E1 00 DC */	lmw r23, 0xdc(r1)
/* 80184D28 00181C68  80 01 01 04 */	lwz r0, 0x104(r1)
/* 80184D2C 00181C6C  7C 08 03 A6 */	mtlr r0
/* 80184D30 00181C70  38 21 01 00 */	addi r1, r1, 0x100
/* 80184D34 00181C74  4E 80 00 20 */	blr 
.endfn init__Q24Game18NaviContainerStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game18NaviContainerStateFPQ24Game4Navi, global
/* 80184D38 00181C78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80184D3C 00181C7C  7C 08 02 A6 */	mflr r0
/* 80184D40 00181C80  90 01 00 24 */	stw r0, 0x24(r1)
/* 80184D44 00181C84  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80184D48 00181C88  7C 9F 23 78 */	mr r31, r4
/* 80184D4C 00181C8C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80184D50 00181C90  7C 7E 1B 78 */	mr r30, r3
/* 80184D54 00181C94  88 03 00 20 */	lbz r0, 0x20(r3)
/* 80184D58 00181C98  28 00 00 00 */	cmplwi r0, 0
/* 80184D5C 00181C9C  40 82 00 20 */	bne .L_80184D7C
/* 80184D60 00181CA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80184D64 00181CA4  38 A0 00 00 */	li r5, 0
/* 80184D68 00181CA8  38 C0 00 00 */	li r6, 0
/* 80184D6C 00181CAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80184D70 00181CB0  7D 89 03 A6 */	mtctr r12
/* 80184D74 00181CB4  4E 80 04 21 */	bctrl 
/* 80184D78 00181CB8  48 00 02 18 */	b .L_80184F90
.L_80184D7C:
/* 80184D7C 00181CBC  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80184D80 00181CC0  A0 03 02 2E */	lhz r0, 0x22e(r3)
/* 80184D84 00181CC4  28 00 00 04 */	cmplwi r0, 4
/* 80184D88 00181CC8  40 82 01 34 */	bne .L_80184EBC
/* 80184D8C 00181CCC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80184D90 00181CD0  48 27 A5 75 */	bl check_UfoMenu__Q26Screen9Game2DMgrFv
/* 80184D94 00181CD4  2C 03 00 02 */	cmpwi r3, 2
/* 80184D98 00181CD8  41 82 00 38 */	beq .L_80184DD0
/* 80184D9C 00181CDC  40 80 01 00 */	bge .L_80184E9C
/* 80184DA0 00181CE0  2C 03 00 01 */	cmpwi r3, 1
/* 80184DA4 00181CE4  40 80 00 08 */	bge .L_80184DAC
/* 80184DA8 00181CE8  48 00 00 F4 */	b .L_80184E9C
.L_80184DAC:
/* 80184DAC 00181CEC  7F C3 F3 78 */	mr r3, r30
/* 80184DB0 00181CF0  7F E4 FB 78 */	mr r4, r31
/* 80184DB4 00181CF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80184DB8 00181CF8  38 A0 00 00 */	li r5, 0
/* 80184DBC 00181CFC  38 C0 00 00 */	li r6, 0
/* 80184DC0 00181D00  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80184DC4 00181D04  7D 89 03 A6 */	mtctr r12
/* 80184DC8 00181D08  4E 80 04 21 */	bctrl 
/* 80184DCC 00181D0C  48 00 01 C4 */	b .L_80184F90
.L_80184DD0:
/* 80184DD0 00181D10  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80184DD4 00181D14  38 81 00 0C */	addi r4, r1, 0xc
/* 80184DD8 00181D18  38 A1 00 08 */	addi r5, r1, 8
/* 80184DDC 00181D1C  48 27 A6 59 */	bl result_UfoMenu__Q26Screen9Game2DMgrFPiPi
/* 80184DE0 00181D20  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80184DE4 00181D24  38 A0 00 00 */	li r5, 0
/* 80184DE8 00181D28  38 60 00 01 */	li r3, 1
/* 80184DEC 00181D2C  2C 00 00 00 */	cmpwi r0, 0
/* 80184DF0 00181D30  41 82 00 10 */	beq .L_80184E00
/* 80184DF4 00181D34  7C 05 03 78 */	mr r5, r0
/* 80184DF8 00181D38  38 60 00 01 */	li r3, 1
/* 80184DFC 00181D3C  48 00 00 18 */	b .L_80184E14
.L_80184E00:
/* 80184E00 00181D40  80 01 00 08 */	lwz r0, 8(r1)
/* 80184E04 00181D44  2C 00 00 00 */	cmpwi r0, 0
/* 80184E08 00181D48  41 82 00 0C */	beq .L_80184E14
/* 80184E0C 00181D4C  7C 05 03 78 */	mr r5, r0
/* 80184E10 00181D50  38 60 00 00 */	li r3, 0
.L_80184E14:
/* 80184E14 00181D54  2C 05 00 00 */	cmpwi r5, 0
/* 80184E18 00181D58  40 80 00 34 */	bge .L_80184E4C
/* 80184E1C 00181D5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80184E20 00181D60  41 82 00 10 */	beq .L_80184E30
/* 80184E24 00181D64  38 00 00 04 */	li r0, 4
/* 80184E28 00181D68  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80184E2C 00181D6C  48 00 00 0C */	b .L_80184E38
.L_80184E30:
/* 80184E30 00181D70  38 00 00 03 */	li r0, 3
/* 80184E34 00181D74  90 1E 00 1C */	stw r0, 0x1c(r30)
.L_80184E38:
/* 80184E38 00181D78  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80184E3C 00181D7C  7C 85 00 D0 */	neg r4, r5
/* 80184E40 00181D80  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 80184E44 00181D84  4B FF 49 C9 */	bl exitPikis__Q24Game5OnyonFii
/* 80184E48 00181D88  48 00 00 30 */	b .L_80184E78
.L_80184E4C:
/* 80184E4C 00181D8C  40 81 00 2C */	ble .L_80184E78
/* 80184E50 00181D90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80184E54 00181D94  41 82 00 10 */	beq .L_80184E64
/* 80184E58 00181D98  38 00 00 04 */	li r0, 4
/* 80184E5C 00181D9C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80184E60 00181DA0  48 00 00 0C */	b .L_80184E6C
.L_80184E64:
/* 80184E64 00181DA4  38 00 00 03 */	li r0, 3
/* 80184E68 00181DA8  90 1E 00 1C */	stw r0, 0x1c(r30)
.L_80184E6C:
/* 80184E6C 00181DAC  7F C3 F3 78 */	mr r3, r30
/* 80184E70 00181DB0  7F E4 FB 78 */	mr r4, r31
/* 80184E74 00181DB4  48 00 01 35 */	bl enterPikis__Q24Game18NaviContainerStateFPQ24Game4Navii
.L_80184E78:
/* 80184E78 00181DB8  7F C3 F3 78 */	mr r3, r30
/* 80184E7C 00181DBC  7F E4 FB 78 */	mr r4, r31
/* 80184E80 00181DC0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80184E84 00181DC4  38 A0 00 00 */	li r5, 0
/* 80184E88 00181DC8  38 C0 00 00 */	li r6, 0
/* 80184E8C 00181DCC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80184E90 00181DD0  7D 89 03 A6 */	mtctr r12
/* 80184E94 00181DD4  4E 80 04 21 */	bctrl 
/* 80184E98 00181DD8  48 00 00 F8 */	b .L_80184F90
.L_80184E9C:
/* 80184E9C 00181DDC  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80184EA0 00181DE0  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80184EA4 00181DE4  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80184EA8 00181DE8  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80184EAC 00181DEC  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80184EB0 00181DF0  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80184EB4 00181DF4  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80184EB8 00181DF8  48 00 00 D8 */	b .L_80184F90
.L_80184EBC:
/* 80184EBC 00181DFC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80184EC0 00181E00  48 27 A0 91 */	bl check_Contena__Q26Screen9Game2DMgrFv
/* 80184EC4 00181E04  2C 03 00 02 */	cmpwi r3, 2
/* 80184EC8 00181E08  41 82 00 38 */	beq .L_80184F00
/* 80184ECC 00181E0C  40 80 00 A8 */	bge .L_80184F74
/* 80184ED0 00181E10  2C 03 00 01 */	cmpwi r3, 1
/* 80184ED4 00181E14  40 80 00 08 */	bge .L_80184EDC
/* 80184ED8 00181E18  48 00 00 9C */	b .L_80184F74
.L_80184EDC:
/* 80184EDC 00181E1C  7F C3 F3 78 */	mr r3, r30
/* 80184EE0 00181E20  7F E4 FB 78 */	mr r4, r31
/* 80184EE4 00181E24  81 9E 00 00 */	lwz r12, 0(r30)
/* 80184EE8 00181E28  38 A0 00 00 */	li r5, 0
/* 80184EEC 00181E2C  38 C0 00 00 */	li r6, 0
/* 80184EF0 00181E30  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80184EF4 00181E34  7D 89 03 A6 */	mtctr r12
/* 80184EF8 00181E38  4E 80 04 21 */	bctrl 
/* 80184EFC 00181E3C  48 00 00 94 */	b .L_80184F90
.L_80184F00:
/* 80184F00 00181E40  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80184F04 00181E44  48 27 A1 15 */	bl result_Contena__Q26Screen9Game2DMgrFv
/* 80184F08 00181E48  7C 60 1B 79 */	or. r0, r3, r3
/* 80184F0C 00181E4C  40 80 00 30 */	bge .L_80184F3C
/* 80184F10 00181E50  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80184F14 00181E54  A0 A3 02 2E */	lhz r5, 0x22e(r3)
/* 80184F18 00181E58  28 05 00 04 */	cmplwi r5, 4
/* 80184F1C 00181E5C  40 82 00 14 */	bne .L_80184F30
/* 80184F20 00181E60  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 80184F24 00181E64  7C 80 00 D0 */	neg r4, r0
/* 80184F28 00181E68  4B FF 48 E5 */	bl exitPikis__Q24Game5OnyonFii
/* 80184F2C 00181E6C  48 00 00 24 */	b .L_80184F50
.L_80184F30:
/* 80184F30 00181E70  7C 80 00 D0 */	neg r4, r0
/* 80184F34 00181E74  4B FF 48 D9 */	bl exitPikis__Q24Game5OnyonFii
/* 80184F38 00181E78  48 00 00 18 */	b .L_80184F50
.L_80184F3C:
/* 80184F3C 00181E7C  40 81 00 14 */	ble .L_80184F50
/* 80184F40 00181E80  7F C3 F3 78 */	mr r3, r30
/* 80184F44 00181E84  7F E4 FB 78 */	mr r4, r31
/* 80184F48 00181E88  7C 05 03 78 */	mr r5, r0
/* 80184F4C 00181E8C  48 00 00 5D */	bl enterPikis__Q24Game18NaviContainerStateFPQ24Game4Navii
.L_80184F50:
/* 80184F50 00181E90  7F C3 F3 78 */	mr r3, r30
/* 80184F54 00181E94  7F E4 FB 78 */	mr r4, r31
/* 80184F58 00181E98  81 9E 00 00 */	lwz r12, 0(r30)
/* 80184F5C 00181E9C  38 A0 00 00 */	li r5, 0
/* 80184F60 00181EA0  38 C0 00 00 */	li r6, 0
/* 80184F64 00181EA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80184F68 00181EA8  7D 89 03 A6 */	mtctr r12
/* 80184F6C 00181EAC  4E 80 04 21 */	bctrl 
/* 80184F70 00181EB0  48 00 00 20 */	b .L_80184F90
.L_80184F74:
/* 80184F74 00181EB4  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80184F78 00181EB8  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80184F7C 00181EBC  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80184F80 00181EC0  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80184F84 00181EC4  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80184F88 00181EC8  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80184F8C 00181ECC  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
.L_80184F90:
/* 80184F90 00181ED0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80184F94 00181ED4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80184F98 00181ED8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80184F9C 00181EDC  7C 08 03 A6 */	mtlr r0
/* 80184FA0 00181EE0  38 21 00 20 */	addi r1, r1, 0x20
/* 80184FA4 00181EE4  4E 80 00 20 */	blr 
.endfn exec__Q24Game18NaviContainerStateFPQ24Game4Navi

.fn enterPikis__Q24Game18NaviContainerStateFPQ24Game4Navii, global
/* 80184FA8 00181EE8  94 21 FE 30 */	stwu r1, -0x1d0(r1)
/* 80184FAC 00181EEC  7C 08 02 A6 */	mflr r0
/* 80184FB0 00181EF0  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 80184FB4 00181EF4  BF 41 01 B8 */	stmw r26, 0x1b8(r1)
/* 80184FB8 00181EF8  3B 80 00 00 */	li r28, 0
/* 80184FBC 00181EFC  28 1C 00 00 */	cmplwi r28, 0
/* 80184FC0 00181F00  7C 7D 1B 78 */	mr r29, r3
/* 80184FC4 00181F04  7C BE 2B 78 */	mr r30, r5
/* 80184FC8 00181F08  3B E0 00 00 */	li r31, 0
/* 80184FCC 00181F0C  80 C4 02 54 */	lwz r6, 0x254(r4)
/* 80184FD0 00181F10  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80184FD4 00181F14  38 04 BC 84 */	addi r0, r4, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80184FD8 00181F18  90 01 00 10 */	stw r0, 0x10(r1)
/* 80184FDC 00181F1C  93 81 00 1C */	stw r28, 0x1c(r1)
/* 80184FE0 00181F20  93 81 00 14 */	stw r28, 0x14(r1)
/* 80184FE4 00181F24  90 C1 00 18 */	stw r6, 0x18(r1)
/* 80184FE8 00181F28  40 82 00 20 */	bne .L_80185008
/* 80184FEC 00181F2C  7C C3 33 78 */	mr r3, r6
/* 80184FF0 00181F30  81 86 00 00 */	lwz r12, 0(r6)
/* 80184FF4 00181F34  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80184FF8 00181F38  7D 89 03 A6 */	mtctr r12
/* 80184FFC 00181F3C  4E 80 04 21 */	bctrl 
/* 80185000 00181F40  90 61 00 14 */	stw r3, 0x14(r1)
/* 80185004 00181F44  48 00 01 C0 */	b .L_801851C4
.L_80185008:
/* 80185008 00181F48  7C C3 33 78 */	mr r3, r6
/* 8018500C 00181F4C  81 86 00 00 */	lwz r12, 0(r6)
/* 80185010 00181F50  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80185014 00181F54  7D 89 03 A6 */	mtctr r12
/* 80185018 00181F58  4E 80 04 21 */	bctrl 
/* 8018501C 00181F5C  90 61 00 14 */	stw r3, 0x14(r1)
/* 80185020 00181F60  48 00 00 58 */	b .L_80185078
.L_80185024:
/* 80185024 00181F64  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80185028 00181F68  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8018502C 00181F6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80185030 00181F70  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80185034 00181F74  7D 89 03 A6 */	mtctr r12
/* 80185038 00181F78  4E 80 04 21 */	bctrl 
/* 8018503C 00181F7C  7C 64 1B 78 */	mr r4, r3
/* 80185040 00181F80  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80185044 00181F84  81 83 00 00 */	lwz r12, 0(r3)
/* 80185048 00181F88  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018504C 00181F8C  7D 89 03 A6 */	mtctr r12
/* 80185050 00181F90  4E 80 04 21 */	bctrl 
/* 80185054 00181F94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185058 00181F98  40 82 01 6C */	bne .L_801851C4
/* 8018505C 00181F9C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80185060 00181FA0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80185064 00181FA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80185068 00181FA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8018506C 00181FAC  7D 89 03 A6 */	mtctr r12
/* 80185070 00181FB0  4E 80 04 21 */	bctrl 
/* 80185074 00181FB4  90 61 00 14 */	stw r3, 0x14(r1)
.L_80185078:
/* 80185078 00181FB8  81 81 00 10 */	lwz r12, 0x10(r1)
/* 8018507C 00181FBC  38 61 00 10 */	addi r3, r1, 0x10
/* 80185080 00181FC0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80185084 00181FC4  7D 89 03 A6 */	mtctr r12
/* 80185088 00181FC8  4E 80 04 21 */	bctrl 
/* 8018508C 00181FCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185090 00181FD0  41 82 FF 94 */	beq .L_80185024
/* 80185094 00181FD4  48 00 01 30 */	b .L_801851C4
.L_80185098:
/* 80185098 00181FD8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8018509C 00181FDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801850A0 00181FE0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801850A4 00181FE4  7D 89 03 A6 */	mtctr r12
/* 801850A8 00181FE8  4E 80 04 21 */	bctrl 
/* 801850AC 00181FEC  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 801850B0 00181FF0  38 A0 00 00 */	li r5, 0
/* 801850B4 00181FF4  A0 84 02 2E */	lhz r4, 0x22e(r4)
/* 801850B8 00181FF8  28 04 00 04 */	cmplwi r4, 4
/* 801850BC 00181FFC  40 82 00 1C */	bne .L_801850D8
/* 801850C0 00182000  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 801850C4 00182004  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 801850C8 00182008  7C 04 00 00 */	cmpw r4, r0
/* 801850CC 0018200C  40 82 00 1C */	bne .L_801850E8
/* 801850D0 00182010  38 A0 00 01 */	li r5, 1
/* 801850D4 00182014  48 00 00 14 */	b .L_801850E8
.L_801850D8:
/* 801850D8 00182018  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 801850DC 0018201C  7C 00 20 00 */	cmpw r0, r4
/* 801850E0 00182020  40 82 00 08 */	bne .L_801850E8
/* 801850E4 00182024  38 A0 00 01 */	li r5, 1
.L_801850E8:
/* 801850E8 00182028  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 801850EC 0018202C  41 82 00 1C */	beq .L_80185108
/* 801850F0 00182030  3B FF 00 01 */	addi r31, r31, 1
/* 801850F4 00182034  38 81 00 20 */	addi r4, r1, 0x20
/* 801850F8 00182038  7C 1F F0 00 */	cmpw r31, r30
/* 801850FC 0018203C  7C 64 E1 2E */	stwx r3, r4, r28
/* 80185100 00182040  3B 9C 00 04 */	addi r28, r28, 4
/* 80185104 00182044  40 80 00 E0 */	bge .L_801851E4
.L_80185108:
/* 80185108 00182048  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8018510C 0018204C  28 00 00 00 */	cmplwi r0, 0
/* 80185110 00182050  40 82 00 24 */	bne .L_80185134
/* 80185114 00182054  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80185118 00182058  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8018511C 0018205C  81 83 00 00 */	lwz r12, 0(r3)
/* 80185120 00182060  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80185124 00182064  7D 89 03 A6 */	mtctr r12
/* 80185128 00182068  4E 80 04 21 */	bctrl 
/* 8018512C 0018206C  90 61 00 14 */	stw r3, 0x14(r1)
/* 80185130 00182070  48 00 00 94 */	b .L_801851C4
.L_80185134:
/* 80185134 00182074  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80185138 00182078  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8018513C 0018207C  81 83 00 00 */	lwz r12, 0(r3)
/* 80185140 00182080  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80185144 00182084  7D 89 03 A6 */	mtctr r12
/* 80185148 00182088  4E 80 04 21 */	bctrl 
/* 8018514C 0018208C  90 61 00 14 */	stw r3, 0x14(r1)
/* 80185150 00182090  48 00 00 58 */	b .L_801851A8
.L_80185154:
/* 80185154 00182094  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80185158 00182098  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8018515C 0018209C  81 83 00 00 */	lwz r12, 0(r3)
/* 80185160 001820A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80185164 001820A4  7D 89 03 A6 */	mtctr r12
/* 80185168 001820A8  4E 80 04 21 */	bctrl 
/* 8018516C 001820AC  7C 64 1B 78 */	mr r4, r3
/* 80185170 001820B0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80185174 001820B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80185178 001820B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018517C 001820BC  7D 89 03 A6 */	mtctr r12
/* 80185180 001820C0  4E 80 04 21 */	bctrl 
/* 80185184 001820C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185188 001820C8  40 82 00 3C */	bne .L_801851C4
/* 8018518C 001820CC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80185190 001820D0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80185194 001820D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80185198 001820D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8018519C 001820DC  7D 89 03 A6 */	mtctr r12
/* 801851A0 001820E0  4E 80 04 21 */	bctrl 
/* 801851A4 001820E4  90 61 00 14 */	stw r3, 0x14(r1)
.L_801851A8:
/* 801851A8 001820E8  81 81 00 10 */	lwz r12, 0x10(r1)
/* 801851AC 001820EC  38 61 00 10 */	addi r3, r1, 0x10
/* 801851B0 001820F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801851B4 001820F4  7D 89 03 A6 */	mtctr r12
/* 801851B8 001820F8  4E 80 04 21 */	bctrl 
/* 801851BC 001820FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801851C0 00182100  41 82 FF 94 */	beq .L_80185154
.L_801851C4:
/* 801851C4 00182104  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801851C8 00182108  81 83 00 00 */	lwz r12, 0(r3)
/* 801851CC 0018210C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801851D0 00182110  7D 89 03 A6 */	mtctr r12
/* 801851D4 00182114  4E 80 04 21 */	bctrl 
/* 801851D8 00182118  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801851DC 0018211C  7C 04 18 40 */	cmplw r4, r3
/* 801851E0 00182120  40 82 FE B8 */	bne .L_80185098
.L_801851E4:
/* 801851E4 00182124  3C 80 80 4B */	lis r4, __vt__Q26PikiAI9ActionArg@ha
/* 801851E8 00182128  3C 60 80 4B */	lis r3, __vt__Q26PikiAI17CreatureActionArg@ha
/* 801851EC 0018212C  3B 61 00 20 */	addi r27, r1, 0x20
/* 801851F0 00182130  3B 40 00 00 */	li r26, 0
/* 801851F4 00182134  3B C4 05 30 */	addi r30, r4, __vt__Q26PikiAI9ActionArg@l
/* 801851F8 00182138  3B 83 05 24 */	addi r28, r3, __vt__Q26PikiAI17CreatureActionArg@l
/* 801851FC 0018213C  48 00 00 30 */	b .L_8018522C
.L_80185200:
/* 80185200 00182140  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80185204 00182144  38 A1 00 08 */	addi r5, r1, 8
/* 80185208 00182148  80 7B 00 00 */	lwz r3, 0(r27)
/* 8018520C 0018214C  38 80 00 02 */	li r4, 2
/* 80185210 00182150  93 C1 00 08 */	stw r30, 8(r1)
/* 80185214 00182154  93 81 00 08 */	stw r28, 8(r1)
/* 80185218 00182158  90 01 00 0C */	stw r0, 0xc(r1)
/* 8018521C 0018215C  80 63 02 94 */	lwz r3, 0x294(r3)
/* 80185220 00182160  48 01 1D 75 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 80185224 00182164  3B 7B 00 04 */	addi r27, r27, 4
/* 80185228 00182168  3B 5A 00 01 */	addi r26, r26, 1
.L_8018522C:
/* 8018522C 0018216C  7C 1A F8 00 */	cmpw r26, r31
/* 80185230 00182170  41 80 FF D0 */	blt .L_80185200
/* 80185234 00182174  BB 41 01 B8 */	lmw r26, 0x1b8(r1)
/* 80185238 00182178  80 01 01 D4 */	lwz r0, 0x1d4(r1)
/* 8018523C 0018217C  7C 08 03 A6 */	mtlr r0
/* 80185240 00182180  38 21 01 D0 */	addi r1, r1, 0x1d0
/* 80185244 00182184  4E 80 00 20 */	blr 
.endfn enterPikis__Q24Game18NaviContainerStateFPQ24Game4Navii

.fn cleanup__Q24Game18NaviContainerStateFPQ24Game4Navi, global
/* 80185248 00182188  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018524C 0018218C  7C 08 02 A6 */	mflr r0
/* 80185250 00182190  3C 80 80 48 */	lis r4, lbl_8047EBA0@ha
/* 80185254 00182194  90 01 00 14 */	stw r0, 0x14(r1)
/* 80185258 00182198  38 A4 EB A0 */	addi r5, r4, lbl_8047EBA0@l
/* 8018525C 0018219C  38 80 00 00 */	li r4, 0
/* 80185260 001821A0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80185264 001821A4  48 02 FD 29 */	bl setFrozen__Q24Game10GameSystemFbPc
/* 80185268 001821A8  3C 80 80 48 */	lis r4, lbl_8047EBA0@ha
/* 8018526C 001821AC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80185270 001821B0  38 A4 EB A0 */	addi r5, r4, lbl_8047EBA0@l
/* 80185274 001821B4  38 80 00 00 */	li r4, 0
/* 80185278 001821B8  48 02 FD 0D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8018527C 001821BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80185280 001821C0  7C 08 03 A6 */	mtlr r0
/* 80185284 001821C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80185288 001821C8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game18NaviContainerStateFPQ24Game4Navi

.fn init__Q24Game15NaviAbsorbStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 8018528C 001821CC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80185290 001821D0  7C 08 02 A6 */	mflr r0
/* 80185294 001821D4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80185298 001821D8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018529C 001821DC  7C BF 2B 79 */	or. r31, r5, r5
/* 801852A0 001821E0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801852A4 001821E4  7C 9E 23 78 */	mr r30, r4
/* 801852A8 001821E8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801852AC 001821EC  7C 7D 1B 78 */	mr r29, r3
/* 801852B0 001821F0  40 82 00 20 */	bne .L_801852D0
/* 801852B4 001821F4  3C 60 80 48 */	lis r3, lbl_8047EB4C@ha
/* 801852B8 001821F8  3C A0 80 48 */	lis r5, lbl_8047EB5C@ha
/* 801852BC 001821FC  38 63 EB 4C */	addi r3, r3, lbl_8047EB4C@l
/* 801852C0 00182200  38 80 0F 4B */	li r4, 0xf4b
/* 801852C4 00182204  38 A5 EB 5C */	addi r5, r5, lbl_8047EB5C@l
/* 801852C8 00182208  4C C6 31 82 */	crclr 6
/* 801852CC 0018220C  4B EA 53 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801852D0:
/* 801852D0 00182210  80 1F 00 00 */	lwz r0, 0(r31)
/* 801852D4 00182214  90 1D 00 14 */	stw r0, 0x14(r29)
/* 801852D8 00182218  80 1D 00 14 */	lwz r0, 0x14(r29)
/* 801852DC 0018221C  28 00 00 00 */	cmplwi r0, 0
/* 801852E0 00182220  40 82 00 20 */	bne .L_80185300
/* 801852E4 00182224  3C 60 80 48 */	lis r3, lbl_8047EB4C@ha
/* 801852E8 00182228  3C A0 80 48 */	lis r5, lbl_8047EB5C@ha
/* 801852EC 0018222C  38 63 EB 4C */	addi r3, r3, lbl_8047EB4C@l
/* 801852F0 00182230  38 80 0F 4D */	li r4, 0xf4d
/* 801852F4 00182234  38 A5 EB 5C */	addi r5, r5, lbl_8047EB5C@l
/* 801852F8 00182238  4C C6 31 82 */	crclr 6
/* 801852FC 0018223C  4B EA 53 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80185300:
/* 80185300 00182240  28 1E 00 00 */	cmplwi r30, 0
/* 80185304 00182244  7F C6 F3 78 */	mr r6, r30
/* 80185308 00182248  41 82 00 08 */	beq .L_80185310
/* 8018530C 0018224C  38 DE 01 78 */	addi r6, r30, 0x178
.L_80185310:
/* 80185310 00182250  81 9E 00 00 */	lwz r12, 0(r30)
/* 80185314 00182254  7F C3 F3 78 */	mr r3, r30
/* 80185318 00182258  38 80 00 37 */	li r4, 0x37
/* 8018531C 0018225C  38 A0 00 37 */	li r5, 0x37
/* 80185320 00182260  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80185324 00182264  38 E0 00 00 */	li r7, 0
/* 80185328 00182268  7D 89 03 A6 */	mtctr r12
/* 8018532C 0018226C  4E 80 04 21 */	bctrl 
/* 80185330 00182270  80 7E 02 6C */	lwz r3, 0x26c(r30)
/* 80185334 00182274  38 80 08 0C */	li r4, 0x80c
/* 80185338 00182278  38 A0 00 00 */	li r5, 0
/* 8018533C 0018227C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80185340 00182280  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80185344 00182284  7D 89 03 A6 */	mtctr r12
/* 80185348 00182288  4E 80 04 21 */	bctrl 
/* 8018534C 0018228C  38 00 00 00 */	li r0, 0
/* 80185350 00182290  38 61 00 08 */	addi r3, r1, 8
/* 80185354 00182294  98 1D 00 10 */	stb r0, 0x10(r29)
/* 80185358 00182298  98 1D 00 18 */	stb r0, 0x18(r29)
/* 8018535C 0018229C  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 80185360 001822A0  81 84 00 00 */	lwz r12, 0(r4)
/* 80185364 001822A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80185368 001822A8  7D 89 03 A6 */	mtctr r12
/* 8018536C 001822AC  4E 80 04 21 */	bctrl 
/* 80185370 001822B0  C0 41 00 08 */	lfs f2, 8(r1)
/* 80185374 001822B4  7F C3 F3 78 */	mr r3, r30
/* 80185378 001822B8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8018537C 001822BC  38 81 00 14 */	addi r4, r1, 0x14
/* 80185380 001822C0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80185384 001822C4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80185388 001822C8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8018538C 001822CC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80185390 001822D0  4B FB 88 45 */	bl "turnTo__Q24Game8FakePikiFR10Vector3<f>"
/* 80185394 001822D4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80185398 001822D8  A0 9E 02 DC */	lhz r4, 0x2dc(r30)
/* 8018539C 001822DC  48 0C D0 D1 */	bl controllerLock__Q24Game9CameraMgrFi
/* 801853A0 001822E0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 801853A4 001822E4  38 A0 00 00 */	li r5, 0
/* 801853A8 001822E8  A0 9E 02 DC */	lhz r4, 0x2dc(r30)
/* 801853AC 001822EC  48 0C D1 A1 */	bl startDemoCamera__Q24Game9CameraMgrFii
/* 801853B0 001822F0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801853B4 001822F4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801853B8 001822F8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801853BC 001822FC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801853C0 00182300  7C 08 03 A6 */	mtlr r0
/* 801853C4 00182304  38 21 00 30 */	addi r1, r1, 0x30
/* 801853C8 00182308  4E 80 00 20 */	blr 
.endfn init__Q24Game15NaviAbsorbStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game15NaviAbsorbStateFPQ24Game4Navi, global
/* 801853CC 0018230C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801853D0 00182310  7C 08 02 A6 */	mflr r0
/* 801853D4 00182314  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801853D8 00182318  90 01 00 24 */	stw r0, 0x24(r1)
/* 801853DC 0018231C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801853E0 00182320  7C 9F 23 78 */	mr r31, r4
/* 801853E4 00182324  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801853E8 00182328  7C 7E 1B 78 */	mr r30, r3
/* 801853EC 0018232C  D0 04 02 08 */	stfs f0, 0x208(r4)
/* 801853F0 00182330  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 801853F4 00182334  D0 04 01 E4 */	stfs f0, 0x1e4(r4)
/* 801853F8 00182338  D0 04 01 E8 */	stfs f0, 0x1e8(r4)
/* 801853FC 0018233C  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 80185400 00182340  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80185404 00182344  28 00 00 01 */	cmplwi r0, 1
/* 80185408 00182348  40 82 00 68 */	bne .L_80185470
/* 8018540C 0018234C  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80185410 00182350  81 83 00 00 */	lwz r12, 0(r3)
/* 80185414 00182354  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80185418 00182358  7D 89 03 A6 */	mtctr r12
/* 8018541C 0018235C  4E 80 04 21 */	bctrl 
/* 80185420 00182360  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185424 00182364  41 82 00 4C */	beq .L_80185470
/* 80185428 00182368  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 8018542C 0018236C  28 00 00 00 */	cmplwi r0, 0
/* 80185430 00182370  40 82 00 40 */	bne .L_80185470
/* 80185434 00182374  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80185438 00182378  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAbsorb@ha
/* 8018543C 0018237C  38 A4 A3 00 */	addi r5, r4, __vt__Q24Game11Interaction@l
/* 80185440 00182380  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80185444 00182384  38 03 74 30 */	addi r0, r3, __vt__Q24Game14InteractAbsorb@l
/* 80185448 00182388  38 81 00 08 */	addi r4, r1, 8
/* 8018544C 0018238C  90 A1 00 08 */	stw r5, 8(r1)
/* 80185450 00182390  90 01 00 08 */	stw r0, 8(r1)
/* 80185454 00182394  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80185458 00182398  81 83 00 00 */	lwz r12, 0(r3)
/* 8018545C 0018239C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80185460 001823A0  7D 89 03 A6 */	mtctr r12
/* 80185464 001823A4  4E 80 04 21 */	bctrl 
/* 80185468 001823A8  38 00 00 01 */	li r0, 1
/* 8018546C 001823AC  98 1E 00 18 */	stb r0, 0x18(r30)
.L_80185470:
/* 80185470 001823B0  7F E3 FB 78 */	mr r3, r31
/* 80185474 001823B4  38 80 00 37 */	li r4, 0x37
/* 80185478 001823B8  4B FB 7A B5 */	bl assertMotion__Q24Game8FakePikiFi
/* 8018547C 001823BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185480 001823C0  40 82 00 24 */	bne .L_801854A4
/* 80185484 001823C4  7F C3 F3 78 */	mr r3, r30
/* 80185488 001823C8  7F E4 FB 78 */	mr r4, r31
/* 8018548C 001823CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80185490 001823D0  38 A0 00 00 */	li r5, 0
/* 80185494 001823D4  38 C0 00 00 */	li r6, 0
/* 80185498 001823D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018549C 001823DC  7D 89 03 A6 */	mtctr r12
/* 801854A0 001823E0  4E 80 04 21 */	bctrl 
.L_801854A4:
/* 801854A4 001823E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801854A8 001823E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801854AC 001823EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801854B0 001823F0  7C 08 03 A6 */	mtlr r0
/* 801854B4 001823F4  38 21 00 20 */	addi r1, r1, 0x20
/* 801854B8 001823F8  4E 80 00 20 */	blr 
.endfn exec__Q24Game15NaviAbsorbStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game15NaviAbsorbStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 801854BC 001823FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801854C0 00182400  7C 08 02 A6 */	mflr r0
/* 801854C4 00182404  90 01 00 24 */	stw r0, 0x24(r1)
/* 801854C8 00182408  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 801854CC 0018240C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801854D0 00182410  7C 9F 23 78 */	mr r31, r4
/* 801854D4 00182414  2C 00 00 01 */	cmpwi r0, 1
/* 801854D8 00182418  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801854DC 0018241C  7C 7E 1B 78 */	mr r30, r3
/* 801854E0 00182420  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801854E4 00182424  41 82 00 2C */	beq .L_80185510
/* 801854E8 00182428  40 80 00 10 */	bge .L_801854F8
/* 801854EC 0018242C  2C 00 00 00 */	cmpwi r0, 0
/* 801854F0 00182430  40 80 00 14 */	bge .L_80185504
/* 801854F4 00182434  48 00 01 20 */	b .L_80185614
.L_801854F8:
/* 801854F8 00182438  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 801854FC 0018243C  41 82 00 84 */	beq .L_80185580
/* 80185500 00182440  48 00 01 14 */	b .L_80185614
.L_80185504:
/* 80185504 00182444  38 00 00 01 */	li r0, 1
/* 80185508 00182448  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8018550C 0018244C  48 00 01 08 */	b .L_80185614
.L_80185510:
/* 80185510 00182450  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80185514 00182454  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 80185518 00182458  28 00 04 06 */	cmplwi r0, 0x406
/* 8018551C 0018245C  41 82 00 20 */	beq .L_8018553C
/* 80185520 00182460  3C 60 80 48 */	lis r3, lbl_8047EB4C@ha
/* 80185524 00182464  3C A0 80 48 */	lis r5, lbl_8047EB5C@ha
/* 80185528 00182468  38 63 EB 4C */	addi r3, r3, lbl_8047EB4C@l
/* 8018552C 0018246C  38 80 0F 74 */	li r4, 0xf74
/* 80185530 00182470  38 A5 EB 5C */	addi r5, r5, lbl_8047EB5C@l
/* 80185534 00182474  4C C6 31 82 */	crclr 6
/* 80185538 00182478  4B EA 51 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018553C:
/* 8018553C 0018247C  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80185540 00182480  81 83 00 00 */	lwz r12, 0(r3)
/* 80185544 00182484  7C 7D 1B 78 */	mr r29, r3
/* 80185548 00182488  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8018554C 0018248C  7D 89 03 A6 */	mtctr r12
/* 80185550 00182490  4E 80 04 21 */	bctrl 
/* 80185554 00182494  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185558 00182498  41 82 00 14 */	beq .L_8018556C
/* 8018555C 0018249C  7F A3 EB 78 */	mr r3, r29
/* 80185560 001824A0  48 04 E8 3D */	bl isShrinking__Q34Game9ItemHoney4ItemFv
/* 80185564 001824A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185568 001824A8  40 82 00 AC */	bne .L_80185614
.L_8018556C:
/* 8018556C 001824AC  38 00 00 02 */	li r0, 2
/* 80185570 001824B0  7F E3 FB 78 */	mr r3, r31
/* 80185574 001824B4  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80185578 001824B8  4B FB 7B 49 */	bl finishMotion__Q24Game8FakePikiFv
/* 8018557C 001824BC  48 00 00 98 */	b .L_80185614
.L_80185580:
/* 80185580 001824C0  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80185584 001824C4  28 00 00 00 */	cmplwi r0, 0
/* 80185588 001824C8  41 82 00 74 */	beq .L_801855FC
/* 8018558C 001824CC  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80185590 001824D0  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 80185594 001824D4  28 00 04 06 */	cmplwi r0, 0x406
/* 80185598 001824D8  41 82 00 20 */	beq .L_801855B8
/* 8018559C 001824DC  3C 60 80 48 */	lis r3, lbl_8047EB4C@ha
/* 801855A0 001824E0  3C A0 80 48 */	lis r5, lbl_8047EB5C@ha
/* 801855A4 001824E4  38 63 EB 4C */	addi r3, r3, lbl_8047EB4C@l
/* 801855A8 001824E8  38 80 0F 80 */	li r4, 0xf80
/* 801855AC 001824EC  38 A5 EB 5C */	addi r5, r5, lbl_8047EB5C@l
/* 801855B0 001824F0  4C C6 31 82 */	crclr 6
/* 801855B4 001824F4  4B EA 50 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801855B8:
/* 801855B8 001824F8  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 801855BC 001824FC  7F E3 FB 78 */	mr r3, r31
/* 801855C0 00182500  88 A4 01 E0 */	lbz r5, 0x1e0(r4)
/* 801855C4 00182504  20 85 00 01 */	subfic r4, r5, 1
/* 801855C8 00182508  38 05 FF FF */	addi r0, r5, -1
/* 801855CC 0018250C  7C 80 03 78 */	or r0, r4, r0
/* 801855D0 00182510  54 04 0F FE */	srwi r4, r0, 0x1f
/* 801855D4 00182514  4B FB B9 39 */	bl incDopeCount__Q24Game4NaviFi
/* 801855D8 00182518  7F C3 F3 78 */	mr r3, r30
/* 801855DC 0018251C  7F E4 FB 78 */	mr r4, r31
/* 801855E0 00182520  81 9E 00 00 */	lwz r12, 0(r30)
/* 801855E4 00182524  38 A0 00 00 */	li r5, 0
/* 801855E8 00182528  38 C0 00 00 */	li r6, 0
/* 801855EC 0018252C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801855F0 00182530  7D 89 03 A6 */	mtctr r12
/* 801855F4 00182534  4E 80 04 21 */	bctrl 
/* 801855F8 00182538  48 00 00 1C */	b .L_80185614
.L_801855FC:
/* 801855FC 0018253C  81 83 00 00 */	lwz r12, 0(r3)
/* 80185600 00182540  38 A0 00 00 */	li r5, 0
/* 80185604 00182544  38 C0 00 00 */	li r6, 0
/* 80185608 00182548  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018560C 0018254C  7D 89 03 A6 */	mtctr r12
/* 80185610 00182550  4E 80 04 21 */	bctrl 
.L_80185614:
/* 80185614 00182554  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80185618 00182558  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018561C 0018255C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80185620 00182560  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80185624 00182564  7C 08 03 A6 */	mtlr r0
/* 80185628 00182568  38 21 00 20 */	addi r1, r1, 0x20
/* 8018562C 0018256C  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game15NaviAbsorbStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game15NaviAbsorbStateFPQ24Game4Navi, global
/* 80185630 00182570  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80185634 00182574  7C 08 02 A6 */	mflr r0
/* 80185638 00182578  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018563C 0018257C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80185640 00182580  7C 9F 23 78 */	mr r31, r4
/* 80185644 00182584  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80185648 00182588  A0 84 02 DC */	lhz r4, 0x2dc(r4)
/* 8018564C 0018258C  48 0C CE 91 */	bl controllerUnLock__Q24Game9CameraMgrFi
/* 80185650 00182590  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80185654 00182594  A0 9F 02 DC */	lhz r4, 0x2dc(r31)
/* 80185658 00182598  48 0C CF 85 */	bl finishDemoCamera__Q24Game9CameraMgrFi
/* 8018565C 0018259C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80185660 001825A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80185664 001825A4  7C 08 03 A6 */	mtlr r0
/* 80185668 001825A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8018566C 001825AC  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15NaviAbsorbStateFPQ24Game4Navi

.fn init__Q24Game16NaviDamagedStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80185670 001825B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80185674 001825B4  7C 08 02 A6 */	mflr r0
/* 80185678 001825B8  28 05 00 00 */	cmplwi r5, 0
/* 8018567C 001825BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80185680 001825C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80185684 001825C4  7C 9F 23 78 */	mr r31, r4
/* 80185688 001825C8  40 82 00 20 */	bne .L_801856A8
/* 8018568C 001825CC  3C 60 80 48 */	lis r3, lbl_8047EB4C@ha
/* 80185690 001825D0  3C A0 80 48 */	lis r5, lbl_8047EB5C@ha
/* 80185694 001825D4  38 63 EB 4C */	addi r3, r3, lbl_8047EB4C@l
/* 80185698 001825D8  38 80 0F A2 */	li r4, 0xfa2
/* 8018569C 001825DC  38 A5 EB 5C */	addi r5, r5, lbl_8047EB5C@l
/* 801856A0 001825E0  4C C6 31 82 */	crclr 6
/* 801856A4 001825E4  4B EA 4F 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801856A8:
/* 801856A8 001825E8  28 1F 00 00 */	cmplwi r31, 0
/* 801856AC 001825EC  7F E6 FB 78 */	mr r6, r31
/* 801856B0 001825F0  41 82 00 08 */	beq .L_801856B8
/* 801856B4 001825F4  38 DF 01 78 */	addi r6, r31, 0x178
.L_801856B8:
/* 801856B8 001825F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801856BC 001825FC  7F E3 FB 78 */	mr r3, r31
/* 801856C0 00182600  38 80 00 04 */	li r4, 4
/* 801856C4 00182604  38 A0 00 04 */	li r5, 4
/* 801856C8 00182608  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801856CC 0018260C  38 E0 00 00 */	li r7, 0
/* 801856D0 00182610  7D 89 03 A6 */	mtctr r12
/* 801856D4 00182614  4E 80 04 21 */	bctrl 
/* 801856D8 00182618  7F E3 FB 78 */	mr r3, r31
/* 801856DC 0018261C  4B FB 78 79 */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 801856E0 00182620  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801856E4 00182624  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801856E8 00182628  7C 08 03 A6 */	mtlr r0
/* 801856EC 0018262C  38 21 00 10 */	addi r1, r1, 0x10
/* 801856F0 00182630  4E 80 00 20 */	blr 
.endfn init__Q24Game16NaviDamagedStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game16NaviDamagedStateFPQ24Game4Navi, global
/* 801856F4 00182634  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801856F8 00182638  7C 08 02 A6 */	mflr r0
/* 801856FC 0018263C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80185700 00182640  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80185704 00182644  7C 9F 23 78 */	mr r31, r4
/* 80185708 00182648  38 80 00 04 */	li r4, 4
/* 8018570C 0018264C  93 C1 00 08 */	stw r30, 8(r1)
/* 80185710 00182650  7C 7E 1B 78 */	mr r30, r3
/* 80185714 00182654  7F E3 FB 78 */	mr r3, r31
/* 80185718 00182658  4B FB 78 15 */	bl assertMotion__Q24Game8FakePikiFi
/* 8018571C 0018265C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185720 00182660  40 82 00 54 */	bne .L_80185774
/* 80185724 00182664  80 7E 00 08 */	lwz r3, 8(r30)
/* 80185728 00182668  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 8018572C 0018266C  2C 05 FF FF */	cmpwi r5, -1
/* 80185730 00182670  40 82 00 28 */	bne .L_80185758
/* 80185734 00182674  7F C3 F3 78 */	mr r3, r30
/* 80185738 00182678  7F E4 FB 78 */	mr r4, r31
/* 8018573C 0018267C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80185740 00182680  38 A0 00 00 */	li r5, 0
/* 80185744 00182684  38 C0 00 00 */	li r6, 0
/* 80185748 00182688  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018574C 0018268C  7D 89 03 A6 */	mtctr r12
/* 80185750 00182690  4E 80 04 21 */	bctrl 
/* 80185754 00182694  48 00 00 20 */	b .L_80185774
.L_80185758:
/* 80185758 00182698  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018575C 0018269C  7F C3 F3 78 */	mr r3, r30
/* 80185760 001826A0  7F E4 FB 78 */	mr r4, r31
/* 80185764 001826A4  38 C0 00 00 */	li r6, 0
/* 80185768 001826A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018576C 001826AC  7D 89 03 A6 */	mtctr r12
/* 80185770 001826B0  4E 80 04 21 */	bctrl 
.L_80185774:
/* 80185774 001826B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80185778 001826B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018577C 001826BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80185780 001826C0  7C 08 03 A6 */	mtlr r0
/* 80185784 001826C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80185788 001826C8  4E 80 00 20 */	blr 
.endfn exec__Q24Game16NaviDamagedStateFPQ24Game4Navi

.fn cleanup__Q24Game16NaviDamagedStateFPQ24Game4Navi, global
/* 8018578C 001826CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80185790 001826D0  7C 08 02 A6 */	mflr r0
/* 80185794 001826D4  7C 83 23 78 */	mr r3, r4
/* 80185798 001826D8  38 80 00 3C */	li r4, 0x3c
/* 8018579C 001826DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801857A0 001826E0  4B FB EC 61 */	bl setInvincibleTimer__Q24Game4NaviFUc
/* 801857A4 001826E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801857A8 001826E8  7C 08 03 A6 */	mtlr r0
/* 801857AC 001826EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801857B0 001826F0  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game16NaviDamagedStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game16NaviDamagedStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 801857B4 001826F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801857B8 001826F8  7C 08 02 A6 */	mflr r0
/* 801857BC 001826FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801857C0 00182700  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 801857C4 00182704  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 801857C8 00182708  40 82 00 44 */	bne .L_8018580C
/* 801857CC 0018270C  80 A3 00 08 */	lwz r5, 8(r3)
/* 801857D0 00182710  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 801857D4 00182714  2C 05 FF FF */	cmpwi r5, -1
/* 801857D8 00182718  40 82 00 20 */	bne .L_801857F8
/* 801857DC 0018271C  81 83 00 00 */	lwz r12, 0(r3)
/* 801857E0 00182720  38 A0 00 00 */	li r5, 0
/* 801857E4 00182724  38 C0 00 00 */	li r6, 0
/* 801857E8 00182728  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801857EC 0018272C  7D 89 03 A6 */	mtctr r12
/* 801857F0 00182730  4E 80 04 21 */	bctrl 
/* 801857F4 00182734  48 00 00 18 */	b .L_8018580C
.L_801857F8:
/* 801857F8 00182738  81 83 00 00 */	lwz r12, 0(r3)
/* 801857FC 0018273C  38 C0 00 00 */	li r6, 0
/* 80185800 00182740  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80185804 00182744  7D 89 03 A6 */	mtctr r12
/* 80185808 00182748  4E 80 04 21 */	bctrl 
.L_8018580C:
/* 8018580C 0018274C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80185810 00182750  7C 08 03 A6 */	mtlr r0
/* 80185814 00182754  38 21 00 10 */	addi r1, r1, 0x10
/* 80185818 00182758  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game16NaviDamagedStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn init__Q24Game13NaviDeadStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 8018581C 0018275C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80185820 00182760  7C 08 02 A6 */	mflr r0
/* 80185824 00182764  90 01 00 14 */	stw r0, 0x14(r1)
/* 80185828 00182768  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018582C 0018276C  7C 9F 23 78 */	mr r31, r4
/* 80185830 00182770  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80185834 00182774  A0 84 02 DC */	lhz r4, 0x2dc(r4)
/* 80185838 00182778  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8018583C 0018277C  81 83 00 00 */	lwz r12, 0(r3)
/* 80185840 00182780  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 80185844 00182784  7D 89 03 A6 */	mtctr r12
/* 80185848 00182788  4E 80 04 21 */	bctrl 
/* 8018584C 0018278C  7F E3 FB 78 */	mr r3, r31
/* 80185850 00182790  38 80 00 00 */	li r4, 0
/* 80185854 00182794  81 9F 00 00 */	lwz r12, 0(r31)
/* 80185858 00182798  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8018585C 0018279C  7D 89 03 A6 */	mtctr r12
/* 80185860 001827A0  4E 80 04 21 */	bctrl 
/* 80185864 001827A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80185868 001827A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018586C 001827AC  7C 08 03 A6 */	mtlr r0
/* 80185870 001827B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80185874 001827B4  4E 80 00 20 */	blr 
.endfn init__Q24Game13NaviDeadStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game13NaviDeadStateFPQ24Game4Navi, global
/* 80185878 001827B8  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8018587C 001827BC  D0 04 01 E4 */	stfs f0, 0x1e4(r4)
/* 80185880 001827C0  D0 04 01 E8 */	stfs f0, 0x1e8(r4)
/* 80185884 001827C4  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 80185888 001827C8  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 8018588C 001827CC  D0 04 02 04 */	stfs f0, 0x204(r4)
/* 80185890 001827D0  D0 04 02 08 */	stfs f0, 0x208(r4)
/* 80185894 001827D4  4E 80 00 20 */	blr 
.endfn exec__Q24Game13NaviDeadStateFPQ24Game4Navi

.fn cleanup__Q24Game13NaviDeadStateFPQ24Game4Navi, global
/* 80185898 001827D8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13NaviDeadStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game13NaviDeadStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 8018589C 001827DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801858A0 001827E0  7C 08 02 A6 */	mflr r0
/* 801858A4 001827E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801858A8 001827E8  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 801858AC 001827EC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 801858B0 001827F0  40 82 00 1C */	bne .L_801858CC
/* 801858B4 001827F4  7C 83 23 78 */	mr r3, r4
/* 801858B8 001827F8  38 80 00 00 */	li r4, 0
/* 801858BC 001827FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801858C0 00182800  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801858C4 00182804  7D 89 03 A6 */	mtctr r12
/* 801858C8 00182808  4E 80 04 21 */	bctrl 
.L_801858CC:
/* 801858CC 0018280C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801858D0 00182810  7C 08 03 A6 */	mtlr r0
/* 801858D4 00182814  38 21 00 10 */	addi r1, r1, 0x10
/* 801858D8 00182818  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game13NaviDeadStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn init__Q24Game15NaviGatherStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 801858DC 0018281C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801858E0 00182820  7C 08 02 A6 */	mflr r0
/* 801858E4 00182824  28 05 00 00 */	cmplwi r5, 0
/* 801858E8 00182828  90 01 00 24 */	stw r0, 0x24(r1)
/* 801858EC 0018282C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801858F0 00182830  7C 7F 1B 78 */	mr r31, r3
/* 801858F4 00182834  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801858F8 00182838  7C 9E 23 78 */	mr r30, r4
/* 801858FC 0018283C  41 82 00 18 */	beq .L_80185914
/* 80185900 00182840  88 05 00 00 */	lbz r0, 0(r5)
/* 80185904 00182844  98 1F 00 10 */	stb r0, 0x10(r31)
/* 80185908 00182848  88 05 00 01 */	lbz r0, 1(r5)
/* 8018590C 0018284C  98 1F 00 11 */	stb r0, 0x11(r31)
/* 80185910 00182850  48 00 00 0C */	b .L_8018591C
.L_80185914:
/* 80185914 00182854  38 00 00 00 */	li r0, 0
/* 80185918 00182858  98 1F 00 10 */	stb r0, 0x10(r31)
.L_8018591C:
/* 8018591C 0018285C  7F C3 F3 78 */	mr r3, r30
/* 80185920 00182860  38 80 00 0A */	li r4, 0xa
/* 80185924 00182864  81 9E 00 00 */	lwz r12, 0(r30)
/* 80185928 00182868  38 A0 00 0A */	li r5, 0xa
/* 8018592C 0018286C  38 C0 00 00 */	li r6, 0
/* 80185930 00182870  38 E0 00 00 */	li r7, 0
/* 80185934 00182874  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80185938 00182878  7D 89 03 A6 */	mtctr r12
/* 8018593C 0018287C  4E 80 04 21 */	bctrl 
/* 80185940 00182880  7F C3 F3 78 */	mr r3, r30
/* 80185944 00182884  4B FB 76 11 */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 80185948 00182888  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 8018594C 0018288C  4B FD FA 29 */	bl start__Q24Game11NaviWhistleFv
/* 80185950 00182890  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80185954 00182894  28 00 00 00 */	cmplwi r0, 0
/* 80185958 00182898  40 82 00 14 */	bne .L_8018596C
/* 8018595C 0018289C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80185960 001828A0  38 80 00 03 */	li r4, 3
/* 80185964 001828A4  A0 BE 02 DC */	lhz r5, 0x2dc(r30)
/* 80185968 001828A8  48 0C DF BD */	bl startRumble__Q24Game9RumbleMgrFii
.L_8018596C:
/* 8018596C 001828AC  83 FE 02 D0 */	lwz r31, 0x2d0(r30)
/* 80185970 001828B0  38 81 00 08 */	addi r4, r1, 8
/* 80185974 001828B4  80 BE 02 8C */	lwz r5, 0x28c(r30)
/* 80185978 001828B8  80 DF 00 0C */	lwz r6, 0xc(r31)
/* 8018597C 001828BC  7F E3 FB 78 */	mr r3, r31
/* 80185980 001828C0  C0 25 00 24 */	lfs f1, 0x24(r5)
/* 80185984 001828C4  80 A6 00 00 */	lwz r5, 0(r6)
/* 80185988 001828C8  80 06 00 04 */	lwz r0, 4(r6)
/* 8018598C 001828CC  90 A1 00 08 */	stw r5, 8(r1)
/* 80185990 001828D0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80185994 001828D4  80 06 00 08 */	lwz r0, 8(r6)
/* 80185998 001828D8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8018599C 001828DC  48 23 28 A9 */	bl "createCursor___Q23efx11TNaviEffectF10Vector3<f>f"
/* 801859A0 001828E0  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 801859A4 001828E4  7F E3 FB 78 */	mr r3, r31
/* 801859A8 001828E8  48 23 27 F9 */	bl createLightAct___Q23efx11TNaviEffectFPA4_f
/* 801859AC 001828EC  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 801859B0 001828F0  7F E3 FB 78 */	mr r3, r31
/* 801859B4 001828F4  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 801859B8 001828F8  48 23 2B A1 */	bl "createFueact___Q23efx11TNaviEffectFPA4_fP10Vector3<f>"
/* 801859BC 001828FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801859C0 00182900  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801859C4 00182904  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801859C8 00182908  7C 08 03 A6 */	mtlr r0
/* 801859CC 0018290C  38 21 00 20 */	addi r1, r1, 0x20
/* 801859D0 00182910  4E 80 00 20 */	blr 
.endfn init__Q24Game15NaviGatherStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game15NaviGatherStateFPQ24Game4Navi, global
/* 801859D4 00182914  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801859D8 00182918  7C 08 02 A6 */	mflr r0
/* 801859DC 0018291C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801859E0 00182920  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801859E4 00182924  7C 9F 23 78 */	mr r31, r4
/* 801859E8 00182928  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801859EC 0018292C  7C 7E 1B 78 */	mr r30, r3
/* 801859F0 00182930  88 03 00 10 */	lbz r0, 0x10(r3)
/* 801859F4 00182934  28 00 00 00 */	cmplwi r0, 0
/* 801859F8 00182938  41 82 00 60 */	beq .L_80185A58
/* 801859FC 0018293C  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80185A00 00182940  38 81 00 08 */	addi r4, r1, 8
/* 80185A04 00182944  38 A0 00 01 */	li r5, 1
/* 80185A08 00182948  D0 01 00 08 */	stfs f0, 8(r1)
/* 80185A0C 0018294C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80185A10 00182950  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80185A14 00182954  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80185A18 00182958  4B FD FD 01 */	bl "update__Q24Game11NaviWhistleFR10Vector3<f>b"
/* 80185A1C 0018295C  7F E3 FB 78 */	mr r3, r31
/* 80185A20 00182960  4B FB E7 79 */	bl callPikis__Q24Game4NaviFv
/* 80185A24 00182964  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80185A28 00182968  4B FD F9 F9 */	bl timeout__Q24Game11NaviWhistleFv
/* 80185A2C 0018296C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185A30 00182970  41 82 00 B8 */	beq .L_80185AE8
/* 80185A34 00182974  7F C3 F3 78 */	mr r3, r30
/* 80185A38 00182978  7F E4 FB 78 */	mr r4, r31
/* 80185A3C 0018297C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80185A40 00182980  38 A0 00 00 */	li r5, 0
/* 80185A44 00182984  38 C0 00 00 */	li r6, 0
/* 80185A48 00182988  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80185A4C 0018298C  7D 89 03 A6 */	mtctr r12
/* 80185A50 00182990  4E 80 04 21 */	bctrl 
/* 80185A54 00182994  48 00 00 94 */	b .L_80185AE8
.L_80185A58:
/* 80185A58 00182998  80 1F 02 78 */	lwz r0, 0x278(r31)
/* 80185A5C 0018299C  28 00 00 00 */	cmplwi r0, 0
/* 80185A60 001829A0  41 82 00 88 */	beq .L_80185AE8
/* 80185A64 001829A4  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80185A68 001829A8  48 2D D3 5D */	bl playShugoSE__Q23PSM4NaviFv
/* 80185A6C 001829AC  7F E3 FB 78 */	mr r3, r31
/* 80185A70 001829B0  4B FB E0 95 */	bl control__Q24Game4NaviFv
/* 80185A74 001829B4  7F E3 FB 78 */	mr r3, r31
/* 80185A78 001829B8  4B FB E7 21 */	bl callPikis__Q24Game4NaviFv
/* 80185A7C 001829BC  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 80185A80 001829C0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80185A84 001829C4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80185A88 001829C8  41 82 00 30 */	beq .L_80185AB8
/* 80185A8C 001829CC  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80185A90 001829D0  4B FD F9 5D */	bl stop__Q24Game11NaviWhistleFv
/* 80185A94 001829D4  7F C3 F3 78 */	mr r3, r30
/* 80185A98 001829D8  7F E4 FB 78 */	mr r4, r31
/* 80185A9C 001829DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80185AA0 001829E0  38 A0 00 00 */	li r5, 0
/* 80185AA4 001829E4  38 C0 00 00 */	li r6, 0
/* 80185AA8 001829E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80185AAC 001829EC  7D 89 03 A6 */	mtctr r12
/* 80185AB0 001829F0  4E 80 04 21 */	bctrl 
/* 80185AB4 001829F4  48 00 00 34 */	b .L_80185AE8
.L_80185AB8:
/* 80185AB8 001829F8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80185ABC 001829FC  4B FD F9 65 */	bl timeout__Q24Game11NaviWhistleFv
/* 80185AC0 00182A00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185AC4 00182A04  41 82 00 24 */	beq .L_80185AE8
/* 80185AC8 00182A08  7F C3 F3 78 */	mr r3, r30
/* 80185ACC 00182A0C  7F E4 FB 78 */	mr r4, r31
/* 80185AD0 00182A10  81 9E 00 00 */	lwz r12, 0(r30)
/* 80185AD4 00182A14  38 A0 00 00 */	li r5, 0
/* 80185AD8 00182A18  38 C0 00 00 */	li r6, 0
/* 80185ADC 00182A1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80185AE0 00182A20  7D 89 03 A6 */	mtctr r12
/* 80185AE4 00182A24  4E 80 04 21 */	bctrl 
.L_80185AE8:
/* 80185AE8 00182A28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80185AEC 00182A2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80185AF0 00182A30  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80185AF4 00182A34  7C 08 03 A6 */	mtlr r0
/* 80185AF8 00182A38  38 21 00 20 */	addi r1, r1, 0x20
/* 80185AFC 00182A3C  4E 80 00 20 */	blr 
.endfn exec__Q24Game15NaviGatherStateFPQ24Game4Navi

.fn cleanup__Q24Game15NaviGatherStateFPQ24Game4Navi, global
/* 80185B00 00182A40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80185B04 00182A44  7C 08 02 A6 */	mflr r0
/* 80185B08 00182A48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80185B0C 00182A4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80185B10 00182A50  7C 9F 23 78 */	mr r31, r4
/* 80185B14 00182A54  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80185B18 00182A58  28 00 00 00 */	cmplwi r0, 0
/* 80185B1C 00182A5C  40 82 00 14 */	bne .L_80185B30
/* 80185B20 00182A60  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80185B24 00182A64  38 80 00 03 */	li r4, 3
/* 80185B28 00182A68  A0 BF 02 DC */	lhz r5, 0x2dc(r31)
/* 80185B2C 00182A6C  48 0C DE B1 */	bl stopRumble__Q24Game9RumbleMgrFii
.L_80185B30:
/* 80185B30 00182A70  83 FF 02 D0 */	lwz r31, 0x2d0(r31)
/* 80185B34 00182A74  7F E3 FB 78 */	mr r3, r31
/* 80185B38 00182A78  48 23 27 71 */	bl killCursor___Q23efx11TNaviEffectFv
/* 80185B3C 00182A7C  7F E3 FB 78 */	mr r3, r31
/* 80185B40 00182A80  48 23 26 D9 */	bl killLightAct___Q23efx11TNaviEffectFv
/* 80185B44 00182A84  7F E3 FB 78 */	mr r3, r31
/* 80185B48 00182A88  48 23 2A C5 */	bl killFueact___Q23efx11TNaviEffectFv
/* 80185B4C 00182A8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80185B50 00182A90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80185B54 00182A94  7C 08 03 A6 */	mtlr r0
/* 80185B58 00182A98  38 21 00 10 */	addi r1, r1, 0x10
/* 80185B5C 00182A9C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15NaviGatherStateFPQ24Game4Navi

.fn __ct__Q24Game18NaviThrowWaitStateFv, global
/* 80185B60 00182AA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80185B64 00182AA4  7C 08 02 A6 */	mflr r0
/* 80185B68 00182AA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80185B6C 00182AAC  7C 80 07 35 */	extsh. r0, r4
/* 80185B70 00182AB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80185B74 00182AB4  7C 7F 1B 78 */	mr r31, r3
/* 80185B78 00182AB8  41 82 00 18 */	beq .L_80185B90
/* 80185B7C 00182ABC  38 1F 00 3C */	addi r0, r31, 0x3c
/* 80185B80 00182AC0  3C 60 80 4B */	lis r3, __vt__Q28SysShape14MotionListener@ha
/* 80185B84 00182AC4  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80185B88 00182AC8  38 03 A6 6C */	addi r0, r3, __vt__Q28SysShape14MotionListener@l
/* 80185B8C 00182ACC  90 1F 00 3C */	stw r0, 0x3c(r31)
.L_80185B90:
/* 80185B90 00182AD0  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
/* 80185B94 00182AD4  3C A0 80 4B */	lis r5, __vt__Q24Game9NaviState@ha
/* 80185B98 00182AD8  38 03 37 4C */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
/* 80185B9C 00182ADC  3C 60 80 4B */	lis r3, __vt__Q24Game18NaviThrowWaitState@ha
/* 80185BA0 00182AE0  90 1F 00 00 */	stw r0, 0(r31)
/* 80185BA4 00182AE4  38 00 00 06 */	li r0, 6
/* 80185BA8 00182AE8  38 83 2F 60 */	addi r4, r3, __vt__Q24Game18NaviThrowWaitState@l
/* 80185BAC 00182AEC  38 60 00 00 */	li r3, 0
/* 80185BB0 00182AF0  90 1F 00 04 */	stw r0, 4(r31)
/* 80185BB4 00182AF4  38 C5 37 84 */	addi r6, r5, __vt__Q24Game9NaviState@l
/* 80185BB8 00182AF8  38 A4 00 50 */	addi r5, r4, 0x50
/* 80185BBC 00182AFC  38 1F 00 3C */	addi r0, r31, 0x3c
/* 80185BC0 00182B00  90 7F 00 08 */	stw r3, 8(r31)
/* 80185BC4 00182B04  38 60 00 14 */	li r3, 0x14
/* 80185BC8 00182B08  90 DF 00 00 */	stw r6, 0(r31)
/* 80185BCC 00182B0C  90 9F 00 00 */	stw r4, 0(r31)
/* 80185BD0 00182B10  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 80185BD4 00182B14  90 A4 00 00 */	stw r5, 0(r4)
/* 80185BD8 00182B18  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 80185BDC 00182B1C  7C 04 00 50 */	subf r0, r4, r0
/* 80185BE0 00182B20  90 04 00 04 */	stw r0, 4(r4)
/* 80185BE4 00182B24  4B E9 E2 C1 */	bl __nw__FUl
/* 80185BE8 00182B28  28 03 00 00 */	cmplwi r3, 0
/* 80185BEC 00182B2C  41 82 00 4C */	beq .L_80185C38
/* 80185BF0 00182B30  3C 80 80 4B */	lis r4, lbl_804B2DB0@ha
/* 80185BF4 00182B34  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 80185BF8 00182B38  39 04 2D B0 */	addi r8, r4, lbl_804B2DB0@l
/* 80185BFC 00182B3C  3C 80 80 4B */	lis r4, "__vt__37Delegate<Q24Game18NaviThrowWaitState>"@ha
/* 80185C00 00182B40  80 E8 00 00 */	lwz r7, 0(r8)
/* 80185C04 00182B44  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 80185C08 00182B48  80 C8 00 04 */	lwz r6, 4(r8)
/* 80185C0C 00182B4C  38 04 2F BC */	addi r0, r4, "__vt__37Delegate<Q24Game18NaviThrowWaitState>"@l
/* 80185C10 00182B50  80 88 00 08 */	lwz r4, 8(r8)
/* 80185C14 00182B54  90 E1 00 08 */	stw r7, 8(r1)
/* 80185C18 00182B58  90 A3 00 00 */	stw r5, 0(r3)
/* 80185C1C 00182B5C  90 03 00 00 */	stw r0, 0(r3)
/* 80185C20 00182B60  93 E3 00 04 */	stw r31, 4(r3)
/* 80185C24 00182B64  90 E3 00 08 */	stw r7, 8(r3)
/* 80185C28 00182B68  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80185C2C 00182B6C  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80185C30 00182B70  90 81 00 10 */	stw r4, 0x10(r1)
/* 80185C34 00182B74  90 83 00 10 */	stw r4, 0x10(r3)
.L_80185C38:
/* 80185C38 00182B78  90 7F 00 30 */	stw r3, 0x30(r31)
/* 80185C3C 00182B7C  7F E3 FB 78 */	mr r3, r31
/* 80185C40 00182B80  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80185C44 00182B84  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80185C48 00182B88  7C 08 03 A6 */	mtlr r0
/* 80185C4C 00182B8C  38 21 00 20 */	addi r1, r1, 0x20
/* 80185C50 00182B90  4E 80 00 20 */	blr 
.endfn __ct__Q24Game18NaviThrowWaitStateFv

.fn draw2d__Q24Game18NaviThrowWaitStateFR14J2DGrafContextRi, global
/* 80185C54 00182B94  4E 80 00 20 */	blr 
.endfn draw2d__Q24Game18NaviThrowWaitStateFR14J2DGrafContextRi

.fn resume__Q24Game18NaviThrowWaitStateFPQ24Game4Navi, global
/* 80185C58 00182B98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80185C5C 00182B9C  7C 08 02 A6 */	mflr r0
/* 80185C60 00182BA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80185C64 00182BA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80185C68 00182BA8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80185C6C 00182BAC  7D 89 03 A6 */	mtctr r12
/* 80185C70 00182BB0  4E 80 04 21 */	bctrl 
/* 80185C74 00182BB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80185C78 00182BB8  7C 08 03 A6 */	mtlr r0
/* 80185C7C 00182BBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80185C80 00182BC0  4E 80 00 20 */	blr 
.endfn resume__Q24Game18NaviThrowWaitStateFPQ24Game4Navi

.fn restart__Q24Game18NaviThrowWaitStateFPQ24Game4Navi, global
/* 80185C84 00182BC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80185C88 00182BC8  7C 08 02 A6 */	mflr r0
/* 80185C8C 00182BCC  38 A0 00 00 */	li r5, 0
/* 80185C90 00182BD0  38 C0 00 00 */	li r6, 0
/* 80185C94 00182BD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80185C98 00182BD8  81 83 00 00 */	lwz r12, 0(r3)
/* 80185C9C 00182BDC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80185CA0 00182BE0  7D 89 03 A6 */	mtctr r12
/* 80185CA4 00182BE4  4E 80 04 21 */	bctrl 
/* 80185CA8 00182BE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80185CAC 00182BEC  7C 08 03 A6 */	mtlr r0
/* 80185CB0 00182BF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80185CB4 00182BF4  4E 80 00 20 */	blr 
.endfn restart__Q24Game18NaviThrowWaitStateFPQ24Game4Navi

.fn init__Q24Game18NaviThrowWaitStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80185CB8 00182BF8  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80185CBC 00182BFC  7C 08 02 A6 */	mflr r0
/* 80185CC0 00182C00  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80185CC4 00182C04  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 80185CC8 00182C08  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 80185CCC 00182C0C  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 80185CD0 00182C10  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 80185CD4 00182C14  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 80185CD8 00182C18  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 80185CDC 00182C1C  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 80185CE0 00182C20  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 80185CE4 00182C24  DB 61 00 60 */	stfd f27, 0x60(r1)
/* 80185CE8 00182C28  F3 61 00 68 */	psq_st f27, 104(r1), 0, qr0
/* 80185CEC 00182C2C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 80185CF0 00182C30  7C 7C 1B 78 */	mr r28, r3
/* 80185CF4 00182C34  38 00 FF FF */	li r0, -1
/* 80185CF8 00182C38  90 03 00 38 */	stw r0, 0x38(r3)
/* 80185CFC 00182C3C  7C 9D 23 78 */	mr r29, r4
/* 80185D00 00182C40  38 80 00 00 */	li r4, 0
/* 80185D04 00182C44  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80185D08 00182C48  93 BC 00 34 */	stw r29, 0x34(r28)
/* 80185D0C 00182C4C  28 04 00 00 */	cmplwi r4, 0
/* 80185D10 00182C50  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80185D14 00182C54  38 03 BC 84 */	addi r0, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80185D18 00182C58  C3 A2 A9 58 */	lfs f29, lbl_80518CB8@sda21(r2)
/* 80185D1C 00182C5C  3B C0 00 00 */	li r30, 0
/* 80185D20 00182C60  D0 1D 02 B0 */	stfs f0, 0x2b0(r29)
/* 80185D24 00182C64  90 9C 00 14 */	stw r4, 0x14(r28)
/* 80185D28 00182C68  90 9C 00 18 */	stw r4, 0x18(r28)
/* 80185D2C 00182C6C  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 80185D30 00182C70  90 01 00 20 */	stw r0, 0x20(r1)
/* 80185D34 00182C74  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80185D38 00182C78  90 81 00 24 */	stw r4, 0x24(r1)
/* 80185D3C 00182C7C  90 61 00 28 */	stw r3, 0x28(r1)
/* 80185D40 00182C80  40 82 00 1C */	bne .L_80185D5C
/* 80185D44 00182C84  81 83 00 00 */	lwz r12, 0(r3)
/* 80185D48 00182C88  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80185D4C 00182C8C  7D 89 03 A6 */	mtctr r12
/* 80185D50 00182C90  4E 80 04 21 */	bctrl 
/* 80185D54 00182C94  90 61 00 24 */	stw r3, 0x24(r1)
/* 80185D58 00182C98  48 00 00 8C */	b .L_80185DE4
.L_80185D5C:
/* 80185D5C 00182C9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80185D60 00182CA0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80185D64 00182CA4  7D 89 03 A6 */	mtctr r12
/* 80185D68 00182CA8  4E 80 04 21 */	bctrl 
/* 80185D6C 00182CAC  90 61 00 24 */	stw r3, 0x24(r1)
/* 80185D70 00182CB0  48 00 00 58 */	b .L_80185DC8
.L_80185D74:
/* 80185D74 00182CB4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80185D78 00182CB8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80185D7C 00182CBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80185D80 00182CC0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80185D84 00182CC4  7D 89 03 A6 */	mtctr r12
/* 80185D88 00182CC8  4E 80 04 21 */	bctrl 
/* 80185D8C 00182CCC  7C 64 1B 78 */	mr r4, r3
/* 80185D90 00182CD0  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80185D94 00182CD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80185D98 00182CD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80185D9C 00182CDC  7D 89 03 A6 */	mtctr r12
/* 80185DA0 00182CE0  4E 80 04 21 */	bctrl 
/* 80185DA4 00182CE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185DA8 00182CE8  40 82 00 3C */	bne .L_80185DE4
/* 80185DAC 00182CEC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80185DB0 00182CF0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80185DB4 00182CF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80185DB8 00182CF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80185DBC 00182CFC  7D 89 03 A6 */	mtctr r12
/* 80185DC0 00182D00  4E 80 04 21 */	bctrl 
/* 80185DC4 00182D04  90 61 00 24 */	stw r3, 0x24(r1)
.L_80185DC8:
/* 80185DC8 00182D08  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80185DCC 00182D0C  38 61 00 20 */	addi r3, r1, 0x20
/* 80185DD0 00182D10  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80185DD4 00182D14  7D 89 03 A6 */	mtctr r12
/* 80185DD8 00182D18  4E 80 04 21 */	bctrl 
/* 80185DDC 00182D1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185DE0 00182D20  41 82 FF 94 */	beq .L_80185D74
.L_80185DE4:
/* 80185DE4 00182D24  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80185DE8 00182D28  C3 C2 A8 80 */	lfs f30, lbl_80518BE0@sda21(r2)
/* 80185DEC 00182D2C  C3 E2 A8 88 */	lfs f31, lbl_80518BE8@sda21(r2)
/* 80185DF0 00182D30  3B E3 71 A0 */	addi r31, r3, sincosTable___5JMath@l
/* 80185DF4 00182D34  C3 82 A8 F4 */	lfs f28, lbl_80518C54@sda21(r2)
/* 80185DF8 00182D38  48 00 02 44 */	b .L_8018603C
.L_80185DFC:
/* 80185DFC 00182D3C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80185E00 00182D40  81 83 00 00 */	lwz r12, 0(r3)
/* 80185E04 00182D44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80185E08 00182D48  7D 89 03 A6 */	mtctr r12
/* 80185E0C 00182D4C  4E 80 04 21 */	bctrl 
/* 80185E10 00182D50  81 9D 00 00 */	lwz r12, 0(r29)
/* 80185E14 00182D54  7C 7B 1B 78 */	mr r27, r3
/* 80185E18 00182D58  7F A4 EB 78 */	mr r4, r29
/* 80185E1C 00182D5C  38 61 00 08 */	addi r3, r1, 8
/* 80185E20 00182D60  81 8C 00 08 */	lwz r12, 8(r12)
/* 80185E24 00182D64  7D 89 03 A6 */	mtctr r12
/* 80185E28 00182D68  4E 80 04 21 */	bctrl 
/* 80185E2C 00182D6C  7F 64 DB 78 */	mr r4, r27
/* 80185E30 00182D70  38 61 00 14 */	addi r3, r1, 0x14
/* 80185E34 00182D74  81 9B 00 00 */	lwz r12, 0(r27)
/* 80185E38 00182D78  81 8C 00 08 */	lwz r12, 8(r12)
/* 80185E3C 00182D7C  7D 89 03 A6 */	mtctr r12
/* 80185E40 00182D80  4E 80 04 21 */	bctrl 
/* 80185E44 00182D84  C0 DD 01 FC */	lfs f6, 0x1fc(r29)
/* 80185E48 00182D88  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80185E4C 00182D8C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80185E50 00182D90  FC A0 30 90 */	fmr f5, f6
/* 80185E54 00182D94  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 80185E58 00182D98  FC 06 F0 40 */	fcmpo cr0, f6, f30
/* 80185E5C 00182D9C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80185E60 00182DA0  EC 81 00 28 */	fsubs f4, f1, f0
/* 80185E64 00182DA4  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80185E68 00182DA8  C0 01 00 08 */	lfs f0, 8(r1)
/* 80185E6C 00182DAC  EC 43 10 28 */	fsubs f2, f3, f2
/* 80185E70 00182DB0  EC E1 00 28 */	fsubs f7, f1, f0
/* 80185E74 00182DB4  40 80 00 08 */	bge .L_80185E7C
/* 80185E78 00182DB8  FC A0 30 50 */	fneg f5, f6
.L_80185E7C:
/* 80185E7C 00182DBC  EC 05 07 F2 */	fmuls f0, f5, f31
/* 80185E80 00182DC0  FC 06 F0 40 */	fcmpo cr0, f6, f30
/* 80185E84 00182DC4  FC 00 00 1E */	fctiwz f0, f0
/* 80185E88 00182DC8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80185E8C 00182DCC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80185E90 00182DD0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80185E94 00182DD4  7C 7F 02 14 */	add r3, r31, r0
/* 80185E98 00182DD8  C0 63 00 04 */	lfs f3, 4(r3)
/* 80185E9C 00182DDC  40 80 00 30 */	bge .L_80185ECC
/* 80185EA0 00182DE0  C0 02 A8 8C */	lfs f0, lbl_80518BEC@sda21(r2)
/* 80185EA4 00182DE4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80185EA8 00182DE8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80185EAC 00182DEC  EC 06 00 32 */	fmuls f0, f6, f0
/* 80185EB0 00182DF0  FC 00 00 1E */	fctiwz f0, f0
/* 80185EB4 00182DF4  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80185EB8 00182DF8  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80185EBC 00182DFC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80185EC0 00182E00  7C 03 04 2E */	lfsx f0, r3, r0
/* 80185EC4 00182E04  FC A0 00 50 */	fneg f5, f0
/* 80185EC8 00182E08  48 00 00 24 */	b .L_80185EEC
.L_80185ECC:
/* 80185ECC 00182E0C  EC 06 07 F2 */	fmuls f0, f6, f31
/* 80185ED0 00182E10  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80185ED4 00182E14  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80185ED8 00182E18  FC 00 00 1E */	fctiwz f0, f0
/* 80185EDC 00182E1C  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80185EE0 00182E20  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80185EE4 00182E24  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80185EE8 00182E28  7C A3 04 2E */	lfsx f5, r3, r0
.L_80185EEC:
/* 80185EEC 00182E2C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80185EF0 00182E30  EC 24 01 32 */	fmuls f1, f4, f4
/* 80185EF4 00182E34  EC 07 01 FA */	fmadds f0, f7, f7, f0
/* 80185EF8 00182E38  EC C1 00 2A */	fadds f6, f1, f0
/* 80185EFC 00182E3C  FC 06 F0 40 */	fcmpo cr0, f6, f30
/* 80185F00 00182E40  40 81 00 14 */	ble .L_80185F14
/* 80185F04 00182E44  40 81 00 14 */	ble .L_80185F18
/* 80185F08 00182E48  FC 00 30 34 */	frsqrte f0, f6
/* 80185F0C 00182E4C  EC C0 01 B2 */	fmuls f6, f0, f6
/* 80185F10 00182E50  48 00 00 08 */	b .L_80185F18
.L_80185F14:
/* 80185F14 00182E54  FC C0 F0 90 */	fmr f6, f30
.L_80185F18:
/* 80185F18 00182E58  FC 00 12 10 */	fabs f0, f2
/* 80185F1C 00182E5C  FF 60 30 90 */	fmr f27, f6
/* 80185F20 00182E60  FC 00 00 18 */	frsp f0, f0
/* 80185F24 00182E64  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80185F28 00182E68  41 81 00 58 */	bgt .L_80185F80
/* 80185F2C 00182E6C  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 80185F30 00182E70  C0 02 A9 5C */	lfs f0, lbl_80518CBC@sda21(r2)
/* 80185F34 00182E74  EC 22 00 72 */	fmuls f1, f2, f1
/* 80185F38 00182E78  EC 27 09 7A */	fmadds f1, f7, f5, f1
/* 80185F3C 00182E7C  EC 24 08 FA */	fmadds f1, f4, f3, f1
/* 80185F40 00182E80  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80185F44 00182E84  40 81 00 0C */	ble .L_80185F50
/* 80185F48 00182E88  C0 02 A8 EC */	lfs f0, lbl_80518C4C@sda21(r2)
/* 80185F4C 00182E8C  EF 66 00 2A */	fadds f27, f6, f0
.L_80185F50:
/* 80185F50 00182E90  FC 1B E8 40 */	fcmpo cr0, f27, f29
/* 80185F54 00182E94  40 80 00 2C */	bge .L_80185F80
/* 80185F58 00182E98  7F 63 DB 78 */	mr r3, r27
/* 80185F5C 00182E9C  4B FC 2F D9 */	bl getStateID__Q24Game4PikiFv
/* 80185F60 00182EA0  2C 03 00 00 */	cmpwi r3, 0
/* 80185F64 00182EA4  40 82 00 1C */	bne .L_80185F80
/* 80185F68 00182EA8  7F 63 DB 78 */	mr r3, r27
/* 80185F6C 00182EAC  4B FC 34 B9 */	bl isThrowable__Q24Game4PikiFv
/* 80185F70 00182EB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80185F74 00182EB4  41 82 00 0C */	beq .L_80185F80
/* 80185F78 00182EB8  7F 7E DB 78 */	mr r30, r27
/* 80185F7C 00182EBC  FF A0 D8 90 */	fmr f29, f27
.L_80185F80:
/* 80185F80 00182EC0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80185F84 00182EC4  28 00 00 00 */	cmplwi r0, 0
/* 80185F88 00182EC8  40 82 00 24 */	bne .L_80185FAC
/* 80185F8C 00182ECC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80185F90 00182ED0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80185F94 00182ED4  81 83 00 00 */	lwz r12, 0(r3)
/* 80185F98 00182ED8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80185F9C 00182EDC  7D 89 03 A6 */	mtctr r12
/* 80185FA0 00182EE0  4E 80 04 21 */	bctrl 
/* 80185FA4 00182EE4  90 61 00 24 */	stw r3, 0x24(r1)
/* 80185FA8 00182EE8  48 00 00 94 */	b .L_8018603C
.L_80185FAC:
/* 80185FAC 00182EEC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80185FB0 00182EF0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80185FB4 00182EF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80185FB8 00182EF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80185FBC 00182EFC  7D 89 03 A6 */	mtctr r12
/* 80185FC0 00182F00  4E 80 04 21 */	bctrl 
/* 80185FC4 00182F04  90 61 00 24 */	stw r3, 0x24(r1)
/* 80185FC8 00182F08  48 00 00 58 */	b .L_80186020
.L_80185FCC:
/* 80185FCC 00182F0C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80185FD0 00182F10  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80185FD4 00182F14  81 83 00 00 */	lwz r12, 0(r3)
/* 80185FD8 00182F18  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80185FDC 00182F1C  7D 89 03 A6 */	mtctr r12
/* 80185FE0 00182F20  4E 80 04 21 */	bctrl 
/* 80185FE4 00182F24  7C 64 1B 78 */	mr r4, r3
/* 80185FE8 00182F28  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80185FEC 00182F2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80185FF0 00182F30  81 8C 00 08 */	lwz r12, 8(r12)
/* 80185FF4 00182F34  7D 89 03 A6 */	mtctr r12
/* 80185FF8 00182F38  4E 80 04 21 */	bctrl 
/* 80185FFC 00182F3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80186000 00182F40  40 82 00 3C */	bne .L_8018603C
/* 80186004 00182F44  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80186008 00182F48  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8018600C 00182F4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80186010 00182F50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80186014 00182F54  7D 89 03 A6 */	mtctr r12
/* 80186018 00182F58  4E 80 04 21 */	bctrl 
/* 8018601C 00182F5C  90 61 00 24 */	stw r3, 0x24(r1)
.L_80186020:
/* 80186020 00182F60  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80186024 00182F64  38 61 00 20 */	addi r3, r1, 0x20
/* 80186028 00182F68  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8018602C 00182F6C  7D 89 03 A6 */	mtctr r12
/* 80186030 00182F70  4E 80 04 21 */	bctrl 
/* 80186034 00182F74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80186038 00182F78  41 82 FF 94 */	beq .L_80185FCC
.L_8018603C:
/* 8018603C 00182F7C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80186040 00182F80  81 83 00 00 */	lwz r12, 0(r3)
/* 80186044 00182F84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80186048 00182F88  7D 89 03 A6 */	mtctr r12
/* 8018604C 00182F8C  4E 80 04 21 */	bctrl 
/* 80186050 00182F90  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80186054 00182F94  7C 04 18 40 */	cmplw r4, r3
/* 80186058 00182F98  40 82 FD A4 */	bne .L_80185DFC
/* 8018605C 00182F9C  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 80186060 00182FA0  C0 03 06 60 */	lfs f0, 0x660(r3)
/* 80186064 00182FA4  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80186068 00182FA8  4C 40 13 82 */	cror 2, 0, 2
/* 8018606C 00182FAC  40 82 00 0C */	bne .L_80186078
/* 80186070 00182FB0  93 DC 00 14 */	stw r30, 0x14(r28)
/* 80186074 00182FB4  48 00 00 08 */	b .L_8018607C
.L_80186078:
/* 80186078 00182FB8  93 DC 00 18 */	stw r30, 0x18(r28)
.L_8018607C:
/* 8018607C 00182FBC  80 1C 00 14 */	lwz r0, 0x14(r28)
/* 80186080 00182FC0  28 00 00 00 */	cmplwi r0, 0
/* 80186084 00182FC4  41 82 00 48 */	beq .L_801860CC
/* 80186088 00182FC8  C0 02 A9 04 */	lfs f0, lbl_80518C64@sda21(r2)
/* 8018608C 00182FCC  28 1C 00 00 */	cmplwi r28, 0
/* 80186090 00182FD0  7F 86 E3 78 */	mr r6, r28
/* 80186094 00182FD4  D0 1D 02 34 */	stfs f0, 0x234(r29)
/* 80186098 00182FD8  41 82 00 08 */	beq .L_801860A0
/* 8018609C 00182FDC  80 DC 00 10 */	lwz r6, 0x10(r28)
.L_801860A0:
/* 801860A0 00182FE0  81 9D 00 00 */	lwz r12, 0(r29)
/* 801860A4 00182FE4  7F A3 EB 78 */	mr r3, r29
/* 801860A8 00182FE8  38 80 00 22 */	li r4, 0x22
/* 801860AC 00182FEC  38 A0 00 22 */	li r5, 0x22
/* 801860B0 00182FF0  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801860B4 00182FF4  38 E0 00 00 */	li r7, 0
/* 801860B8 00182FF8  7D 89 03 A6 */	mtctr r12
/* 801860BC 00182FFC  4E 80 04 21 */	bctrl 
/* 801860C0 00183000  7F A3 EB 78 */	mr r3, r29
/* 801860C4 00183004  4B FB 6E 91 */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 801860C8 00183008  48 00 00 2C */	b .L_801860F4
.L_801860CC:
/* 801860CC 0018300C  80 9C 00 18 */	lwz r4, 0x18(r28)
/* 801860D0 00183010  28 04 00 00 */	cmplwi r4, 0
/* 801860D4 00183014  41 82 00 20 */	beq .L_801860F4
/* 801860D8 00183018  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 801860DC 0018301C  38 A0 00 03 */	li r5, 3
/* 801860E0 00183020  38 C0 00 00 */	li r6, 0
/* 801860E4 00183024  81 83 00 00 */	lwz r12, 0(r3)
/* 801860E8 00183028  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801860EC 0018302C  7D 89 03 A6 */	mtctr r12
/* 801860F0 00183030  4E 80 04 21 */	bctrl 
.L_801860F4:
/* 801860F4 00183034  38 00 00 00 */	li r0, 0
/* 801860F8 00183038  98 1C 00 20 */	stb r0, 0x20(r28)
/* 801860FC 0018303C  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 80186100 00183040  80 1C 00 14 */	lwz r0, 0x14(r28)
/* 80186104 00183044  28 00 00 00 */	cmplwi r0, 0
/* 80186108 00183048  41 82 00 40 */	beq .L_80186148
/* 8018610C 0018304C  80 BC 00 34 */	lwz r5, 0x34(r28)
/* 80186110 00183050  38 80 00 02 */	li r4, 2
/* 80186114 00183054  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80186118 00183058  A0 A5 02 DC */	lhz r5, 0x2dc(r5)
/* 8018611C 0018305C  48 0C D8 09 */	bl startRumble__Q24Game9RumbleMgrFii
/* 80186120 00183060  80 9C 00 14 */	lwz r4, 0x14(r28)
/* 80186124 00183064  38 A0 00 04 */	li r5, 4
/* 80186128 00183068  38 C0 00 00 */	li r6, 0
/* 8018612C 0018306C  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 80186130 00183070  81 83 00 00 */	lwz r12, 0(r3)
/* 80186134 00183074  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80186138 00183078  7D 89 03 A6 */	mtctr r12
/* 8018613C 0018307C  4E 80 04 21 */	bctrl 
/* 80186140 00183080  38 00 00 01 */	li r0, 1
/* 80186144 00183084  98 1C 00 20 */	stb r0, 0x20(r28)
.L_80186148:
/* 80186148 00183088  80 9C 00 1C */	lwz r4, 0x1c(r28)
/* 8018614C 0018308C  3C 00 43 30 */	lis r0, 0x4330
/* 80186150 00183090  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 80186154 00183094  7F A3 EB 78 */	mr r3, r29
/* 80186158 00183098  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 8018615C 0018309C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80186160 001830A0  C8 A2 A8 D0 */	lfd f5, lbl_80518C30@sda21(r2)
/* 80186164 001830A4  90 81 00 44 */	stw r4, 0x44(r1)
/* 80186168 001830A8  C0 82 A8 D8 */	lfs f4, lbl_80518C38@sda21(r2)
/* 8018616C 001830AC  C8 21 00 40 */	lfd f1, 0x40(r1)
/* 80186170 001830B0  C0 05 05 20 */	lfs f0, 0x520(r5)
/* 80186174 001830B4  EC 61 28 28 */	fsubs f3, f1, f5
/* 80186178 001830B8  C0 45 05 48 */	lfs f2, 0x548(r5)
/* 8018617C 001830BC  90 01 00 38 */	stw r0, 0x38(r1)
/* 80186180 001830C0  EC 20 10 28 */	fsubs f1, f0, f2
/* 80186184 001830C4  C0 02 A8 BC */	lfs f0, lbl_80518C1C@sda21(r2)
/* 80186188 001830C8  EC 63 20 24 */	fdivs f3, f3, f4
/* 8018618C 001830CC  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 80186190 001830D0  D0 3D 02 B4 */	stfs f1, 0x2b4(r29)
/* 80186194 001830D4  80 1C 00 1C */	lwz r0, 0x1c(r28)
/* 80186198 001830D8  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 8018619C 001830DC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801861A0 001830E0  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801861A4 001830E4  C0 24 05 70 */	lfs f1, 0x570(r4)
/* 801861A8 001830E8  C8 61 00 38 */	lfd f3, 0x38(r1)
/* 801861AC 001830EC  C0 44 05 98 */	lfs f2, 0x598(r4)
/* 801861B0 001830F0  EC 63 28 28 */	fsubs f3, f3, f5
/* 801861B4 001830F4  EC 21 10 28 */	fsubs f1, f1, f2
/* 801861B8 001830F8  EC 63 20 24 */	fdivs f3, f3, f4
/* 801861BC 001830FC  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 801861C0 00183100  D0 3D 02 B8 */	stfs f1, 0x2b8(r29)
/* 801861C4 00183104  D0 9C 00 28 */	stfs f4, 0x28(r28)
/* 801861C8 00183108  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 801861CC 0018310C  80 9C 00 30 */	lwz r4, 0x30(r28)
/* 801861D0 00183110  4B FB 6F 15 */	bl setDoAnimCallback__Q24Game8FakePikiFP9IDelegate
/* 801861D4 00183114  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 801861D8 00183118  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 801861DC 0018311C  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 801861E0 00183120  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 801861E4 00183124  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 801861E8 00183128  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 801861EC 0018312C  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 801861F0 00183130  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 801861F4 00183134  E3 61 00 68 */	psq_l f27, 104(r1), 0, qr0
/* 801861F8 00183138  CB 61 00 60 */	lfd f27, 0x60(r1)
/* 801861FC 0018313C  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 80186200 00183140  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80186204 00183144  7C 08 03 A6 */	mtlr r0
/* 80186208 00183148  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8018620C 0018314C  4E 80 00 20 */	blr 
.endfn init__Q24Game18NaviThrowWaitStateFPQ24Game4NaviPQ24Game8StateArg

.fn onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent, global
/* 80186210 00183150  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80186214 00183154  2C 00 00 02 */	cmpwi r0, 2
/* 80186218 00183158  41 82 00 28 */	beq .L_80186240
/* 8018621C 0018315C  40 80 00 24 */	bge .L_80186240
/* 80186220 00183160  2C 00 00 01 */	cmpwi r0, 1
/* 80186224 00183164  40 80 00 08 */	bge .L_8018622C
/* 80186228 00183168  48 00 00 18 */	b .L_80186240
.L_8018622C:
/* 8018622C 0018316C  80 83 00 1C */	lwz r4, 0x1c(r3)
/* 80186230 00183170  2C 04 00 03 */	cmpwi r4, 3
/* 80186234 00183174  40 80 00 0C */	bge .L_80186240
/* 80186238 00183178  38 04 00 01 */	addi r0, r4, 1
/* 8018623C 0018317C  90 03 00 1C */	stw r0, 0x1c(r3)
.L_80186240:
/* 80186240 00183180  38 00 00 00 */	li r0, 0
/* 80186244 00183184  90 03 00 24 */	stw r0, 0x24(r3)
/* 80186248 00183188  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent

.fn doAnimCallback__Q24Game18NaviThrowWaitStateFv, global
/* 8018624C 0018318C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80186250 00183190  7C 08 02 A6 */	mflr r0
/* 80186254 00183194  90 01 00 14 */	stw r0, 0x14(r1)
/* 80186258 00183198  80 83 00 34 */	lwz r4, 0x34(r3)
/* 8018625C 0018319C  48 00 00 15 */	bl lockHangPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
/* 80186260 001831A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80186264 001831A4  7C 08 03 A6 */	mtlr r0
/* 80186268 001831A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8018626C 001831AC  4E 80 00 20 */	blr 
.endfn doAnimCallback__Q24Game18NaviThrowWaitStateFv

.fn lockHangPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navi, global
/* 80186270 001831B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80186274 001831B4  7C 08 02 A6 */	mflr r0
/* 80186278 001831B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018627C 001831BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80186280 001831C0  7C 7F 1B 78 */	mr r31, r3
/* 80186284 001831C4  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80186288 001831C8  28 00 00 00 */	cmplwi r0, 0
/* 8018628C 001831CC  41 82 00 54 */	beq .L_801862E0
/* 80186290 001831D0  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 80186294 001831D4  28 00 00 00 */	cmplwi r0, 0
/* 80186298 001831D8  41 82 00 48 */	beq .L_801862E0
/* 8018629C 001831DC  80 64 01 14 */	lwz r3, 0x114(r4)
/* 801862A0 001831E0  3C 80 72 68 */	lis r4, 0x72686E64@ha
/* 801862A4 001831E4  38 84 6E 64 */	addi r4, r4, 0x72686E64@l
/* 801862A8 001831E8  4B FA FB 9D */	bl getCollPart__8CollTreeFUl
/* 801862AC 001831EC  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 801862B0 001831F0  38 81 00 08 */	addi r4, r1, 8
/* 801862B4 001831F4  C0 02 A9 20 */	lfs f0, lbl_80518C80@sda21(r2)
/* 801862B8 001831F8  38 A0 00 00 */	li r5, 0
/* 801862BC 001831FC  D0 21 00 08 */	stfs f1, 8(r1)
/* 801862C0 00183200  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 801862C4 00183204  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801862C8 00183208  EC 01 00 28 */	fsubs f0, f1, f0
/* 801862CC 0018320C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 801862D0 00183210  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801862D4 00183214  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801862D8 00183218  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 801862DC 0018321C  4B FB 4E CD */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
.L_801862E0:
/* 801862E0 00183220  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801862E4 00183224  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801862E8 00183228  7C 08 03 A6 */	mtlr r0
/* 801862EC 0018322C  38 21 00 20 */	addi r1, r1, 0x20
/* 801862F0 00183230  4E 80 00 20 */	blr 
.endfn lockHangPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navi

.fn exec__Q24Game18NaviThrowWaitStateFPQ24Game4Navi, global
/* 801862F4 00183234  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 801862F8 00183238  7C 08 02 A6 */	mflr r0
/* 801862FC 0018323C  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80186300 00183240  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 80186304 00183244  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 80186308 00183248  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 8018630C 0018324C  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 80186310 00183250  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 80186314 00183254  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 80186318 00183258  BE E1 00 9C */	stmw r23, 0x9c(r1)
/* 8018631C 0018325C  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80186320 00183260  7C 7C 1B 78 */	mr r28, r3
/* 80186324 00183264  7C 9D 23 78 */	mr r29, r4
/* 80186328 00183268  28 05 00 00 */	cmplwi r5, 0
/* 8018632C 0018326C  41 82 00 2C */	beq .L_80186358
/* 80186330 00183270  80 05 00 18 */	lwz r0, 0x18(r5)
/* 80186334 00183274  2C 00 00 00 */	cmpwi r0, 0
/* 80186338 00183278  41 82 00 20 */	beq .L_80186358
/* 8018633C 0018327C  81 83 00 00 */	lwz r12, 0(r3)
/* 80186340 00183280  38 A0 00 00 */	li r5, 0
/* 80186344 00183284  38 C0 00 00 */	li r6, 0
/* 80186348 00183288  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018634C 0018328C  7D 89 03 A6 */	mtctr r12
/* 80186350 00183290  4E 80 04 21 */	bctrl 
/* 80186354 00183294  48 00 0A 54 */	b .L_80186DA8
.L_80186358:
/* 80186358 00183298  80 1D 02 78 */	lwz r0, 0x278(r29)
/* 8018635C 0018329C  28 00 00 00 */	cmplwi r0, 0
/* 80186360 001832A0  41 82 0A 48 */	beq .L_80186DA8
/* 80186364 001832A4  7F A3 EB 78 */	mr r3, r29
/* 80186368 001832A8  4B FB D7 9D */	bl control__Q24Game4NaviFv
/* 8018636C 001832AC  80 1C 00 14 */	lwz r0, 0x14(r28)
/* 80186370 001832B0  28 00 00 00 */	cmplwi r0, 0
/* 80186374 001832B4  40 82 01 D0 */	bne .L_80186544
/* 80186378 001832B8  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 8018637C 001832BC  28 00 00 00 */	cmplwi r0, 0
/* 80186380 001832C0  41 82 01 A0 */	beq .L_80186520
/* 80186384 001832C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80186388 001832C8  C0 5C 00 28 */	lfs f2, 0x28(r28)
/* 8018638C 001832CC  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80186390 001832D0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80186394 001832D4  EC 22 08 28 */	fsubs f1, f2, f1
/* 80186398 001832D8  D0 3C 00 28 */	stfs f1, 0x28(r28)
/* 8018639C 001832DC  C0 3C 00 28 */	lfs f1, 0x28(r28)
/* 801863A0 001832E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801863A4 001832E4  40 80 00 28 */	bge .L_801863CC
/* 801863A8 001832E8  7F 83 E3 78 */	mr r3, r28
/* 801863AC 001832EC  7F A4 EB 78 */	mr r4, r29
/* 801863B0 001832F0  81 9C 00 00 */	lwz r12, 0(r28)
/* 801863B4 001832F4  38 A0 00 00 */	li r5, 0
/* 801863B8 001832F8  38 C0 00 00 */	li r6, 0
/* 801863BC 001832FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801863C0 00183300  7D 89 03 A6 */	mtctr r12
/* 801863C4 00183304  4E 80 04 21 */	bctrl 
/* 801863C8 00183308  48 00 09 E0 */	b .L_80186DA8
.L_801863CC:
/* 801863CC 0018330C  80 7D 02 78 */	lwz r3, 0x278(r29)
/* 801863D0 00183310  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801863D4 00183314  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 801863D8 00183318  41 82 00 28 */	beq .L_80186400
/* 801863DC 0018331C  7F 83 E3 78 */	mr r3, r28
/* 801863E0 00183320  7F A4 EB 78 */	mr r4, r29
/* 801863E4 00183324  81 9C 00 00 */	lwz r12, 0(r28)
/* 801863E8 00183328  38 A0 00 00 */	li r5, 0
/* 801863EC 0018332C  38 C0 00 00 */	li r6, 0
/* 801863F0 00183330  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801863F4 00183334  7D 89 03 A6 */	mtctr r12
/* 801863F8 00183338  4E 80 04 21 */	bctrl 
/* 801863FC 0018333C  48 00 09 AC */	b .L_80186DA8
.L_80186400:
/* 80186400 00183340  3C 80 72 68 */	lis r4, 0x72686E64@ha
/* 80186404 00183344  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 80186408 00183348  38 84 6E 64 */	addi r4, r4, 0x72686E64@l
/* 8018640C 0018334C  4B FA FA 39 */	bl getCollPart__8CollTreeFUl
/* 80186410 00183350  80 9C 00 18 */	lwz r4, 0x18(r28)
/* 80186414 00183354  C3 E3 00 4C */	lfs f31, 0x4c(r3)
/* 80186418 00183358  81 84 00 00 */	lwz r12, 0(r4)
/* 8018641C 0018335C  C3 C3 00 50 */	lfs f30, 0x50(r3)
/* 80186420 00183360  81 8C 00 08 */	lwz r12, 8(r12)
/* 80186424 00183364  C3 A3 00 54 */	lfs f29, 0x54(r3)
/* 80186428 00183368  38 61 00 30 */	addi r3, r1, 0x30
/* 8018642C 0018336C  7D 89 03 A6 */	mtctr r12
/* 80186430 00183370  4E 80 04 21 */	bctrl 
/* 80186434 00183374  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80186438 00183378  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 8018643C 0018337C  EC 9E 00 28 */	fsubs f4, f30, f0
/* 80186440 00183380  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80186444 00183384  EC 7F 10 28 */	fsubs f3, f31, f2
/* 80186448 00183388  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8018644C 0018338C  EC 5D 08 28 */	fsubs f2, f29, f1
/* 80186450 00183390  EC 24 01 32 */	fmuls f1, f4, f4
/* 80186454 00183394  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80186458 00183398  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8018645C 0018339C  EC 22 08 2A */	fadds f1, f2, f1
/* 80186460 001833A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80186464 001833A4  40 81 00 14 */	ble .L_80186478
/* 80186468 001833A8  40 81 00 14 */	ble .L_8018647C
/* 8018646C 001833AC  FC 00 08 34 */	frsqrte f0, f1
/* 80186470 001833B0  EC 20 00 72 */	fmuls f1, f0, f1
/* 80186474 001833B4  48 00 00 08 */	b .L_8018647C
.L_80186478:
/* 80186478 001833B8  FC 20 00 90 */	fmr f1, f0
.L_8018647C:
/* 8018647C 001833BC  C0 02 A9 60 */	lfs f0, lbl_80518CC0@sda21(r2)
/* 80186480 001833C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80186484 001833C4  4C 40 13 82 */	cror 2, 0, 2
/* 80186488 001833C8  40 82 09 20 */	bne .L_80186DA8
/* 8018648C 001833CC  C0 02 A9 04 */	lfs f0, lbl_80518C64@sda21(r2)
/* 80186490 001833D0  28 1C 00 00 */	cmplwi r28, 0
/* 80186494 001833D4  7F 86 E3 78 */	mr r6, r28
/* 80186498 001833D8  D0 1D 02 34 */	stfs f0, 0x234(r29)
/* 8018649C 001833DC  41 82 00 08 */	beq .L_801864A4
/* 801864A0 001833E0  80 DC 00 10 */	lwz r6, 0x10(r28)
.L_801864A4:
/* 801864A4 001833E4  81 9D 00 00 */	lwz r12, 0(r29)
/* 801864A8 001833E8  7F A3 EB 78 */	mr r3, r29
/* 801864AC 001833EC  38 80 00 22 */	li r4, 0x22
/* 801864B0 001833F0  38 A0 00 22 */	li r5, 0x22
/* 801864B4 001833F4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801864B8 001833F8  38 E0 00 00 */	li r7, 0
/* 801864BC 001833FC  7D 89 03 A6 */	mtctr r12
/* 801864C0 00183400  4E 80 04 21 */	bctrl 
/* 801864C4 00183404  7F A3 EB 78 */	mr r3, r29
/* 801864C8 00183408  4B FB 6A 8D */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 801864CC 0018340C  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 801864D0 00183410  38 00 00 00 */	li r0, 0
/* 801864D4 00183414  38 80 00 02 */	li r4, 2
/* 801864D8 00183418  90 7C 00 14 */	stw r3, 0x14(r28)
/* 801864DC 0018341C  90 1C 00 18 */	stw r0, 0x18(r28)
/* 801864E0 00183420  80 BC 00 34 */	lwz r5, 0x34(r28)
/* 801864E4 00183424  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 801864E8 00183428  A0 A5 02 DC */	lhz r5, 0x2dc(r5)
/* 801864EC 0018342C  48 0C D4 39 */	bl startRumble__Q24Game9RumbleMgrFii
/* 801864F0 00183430  80 9C 00 14 */	lwz r4, 0x14(r28)
/* 801864F4 00183434  38 A0 00 04 */	li r5, 4
/* 801864F8 00183438  38 C0 00 00 */	li r6, 0
/* 801864FC 0018343C  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 80186500 00183440  81 83 00 00 */	lwz r12, 0(r3)
/* 80186504 00183444  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80186508 00183448  7D 89 03 A6 */	mtctr r12
/* 8018650C 0018344C  4E 80 04 21 */	bctrl 
/* 80186510 00183450  38 00 00 01 */	li r0, 1
/* 80186514 00183454  98 1C 00 20 */	stb r0, 0x20(r28)
/* 80186518 00183458  48 00 00 2C */	b .L_80186544
/* 8018651C 0018345C  48 00 08 8C */	b .L_80186DA8
.L_80186520:
/* 80186520 00183460  7F 83 E3 78 */	mr r3, r28
/* 80186524 00183464  7F A4 EB 78 */	mr r4, r29
/* 80186528 00183468  81 9C 00 00 */	lwz r12, 0(r28)
/* 8018652C 0018346C  38 A0 00 02 */	li r5, 2
/* 80186530 00183470  38 C0 00 00 */	li r6, 0
/* 80186534 00183474  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80186538 00183478  7D 89 03 A6 */	mtctr r12
/* 8018653C 0018347C  4E 80 04 21 */	bctrl 
/* 80186540 00183480  48 00 08 68 */	b .L_80186DA8
.L_80186544:
/* 80186544 00183484  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 80186548 00183488  3C 00 43 30 */	lis r0, 0x4330
/* 8018654C 0018348C  90 01 00 88 */	stw r0, 0x88(r1)
/* 80186550 00183490  C8 82 A8 D0 */	lfd f4, lbl_80518C30@sda21(r2)
/* 80186554 00183494  90 7D 02 A8 */	stw r3, 0x2a8(r29)
/* 80186558 00183498  C0 62 A8 D8 */	lfs f3, lbl_80518C38@sda21(r2)
/* 8018655C 0018349C  80 7C 00 1C */	lwz r3, 0x1c(r28)
/* 80186560 001834A0  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 80186564 001834A4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80186568 001834A8  90 01 00 90 */	stw r0, 0x90(r1)
/* 8018656C 001834AC  C0 04 05 20 */	lfs f0, 0x520(r4)
/* 80186570 001834B0  90 61 00 8C */	stw r3, 0x8c(r1)
/* 80186574 001834B4  C0 24 05 48 */	lfs f1, 0x548(r4)
/* 80186578 001834B8  C8 41 00 88 */	lfd f2, 0x88(r1)
/* 8018657C 001834BC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80186580 001834C0  EC 42 20 28 */	fsubs f2, f2, f4
/* 80186584 001834C4  EC 42 18 24 */	fdivs f2, f2, f3
/* 80186588 001834C8  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8018658C 001834CC  D0 1D 02 B4 */	stfs f0, 0x2b4(r29)
/* 80186590 001834D0  80 1C 00 1C */	lwz r0, 0x1c(r28)
/* 80186594 001834D4  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 80186598 001834D8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8018659C 001834DC  90 01 00 94 */	stw r0, 0x94(r1)
/* 801865A0 001834E0  C0 03 05 70 */	lfs f0, 0x570(r3)
/* 801865A4 001834E4  C8 41 00 90 */	lfd f2, 0x90(r1)
/* 801865A8 001834E8  C0 23 05 98 */	lfs f1, 0x598(r3)
/* 801865AC 001834EC  EC 42 20 28 */	fsubs f2, f2, f4
/* 801865B0 001834F0  EC 00 08 28 */	fsubs f0, f0, f1
/* 801865B4 001834F4  EC 42 18 24 */	fdivs f2, f2, f3
/* 801865B8 001834F8  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 801865BC 001834FC  D0 1D 02 B8 */	stfs f0, 0x2b8(r29)
/* 801865C0 00183500  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 801865C4 00183504  28 03 00 00 */	cmplwi r3, 0
/* 801865C8 00183508  41 82 00 48 */	beq .L_80186610
/* 801865CC 0018350C  88 1C 00 20 */	lbz r0, 0x20(r28)
/* 801865D0 00183510  28 00 00 00 */	cmplwi r0, 0
/* 801865D4 00183514  41 82 00 3C */	beq .L_80186610
/* 801865D8 00183518  4B FC 29 5D */	bl getStateID__Q24Game4PikiFv
/* 801865DC 0018351C  2C 03 00 04 */	cmpwi r3, 4
/* 801865E0 00183520  41 82 00 30 */	beq .L_80186610
/* 801865E4 00183524  2C 03 00 03 */	cmpwi r3, 3
/* 801865E8 00183528  41 82 00 28 */	beq .L_80186610
/* 801865EC 0018352C  7F 83 E3 78 */	mr r3, r28
/* 801865F0 00183530  7F A4 EB 78 */	mr r4, r29
/* 801865F4 00183534  81 9C 00 00 */	lwz r12, 0(r28)
/* 801865F8 00183538  38 A0 00 00 */	li r5, 0
/* 801865FC 0018353C  38 C0 00 00 */	li r6, 0
/* 80186600 00183540  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80186604 00183544  7D 89 03 A6 */	mtctr r12
/* 80186608 00183548  4E 80 04 21 */	bctrl 
/* 8018660C 0018354C  48 00 07 9C */	b .L_80186DA8
.L_80186610:
/* 80186610 00183550  80 7D 02 78 */	lwz r3, 0x278(r29)
/* 80186614 00183554  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80186618 00183558  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 8018661C 0018355C  41 82 02 00 */	beq .L_8018681C
/* 80186620 00183560  38 00 FF FF */	li r0, -1
/* 80186624 00183564  3C 60 92 49 */	lis r3, 0x92492493@ha
/* 80186628 00183568  90 1C 00 38 */	stw r0, 0x38(r28)
/* 8018662C 0018356C  39 23 24 93 */	addi r9, r3, 0x92492493@l
/* 80186630 00183570  3B 41 00 6C */	addi r26, r1, 0x6c
/* 80186634 00183574  3B E0 00 00 */	li r31, 0
/* 80186638 00183578  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 8018663C 0018357C  3B C0 00 00 */	li r30, 0
/* 80186640 00183580  8B 63 02 B8 */	lbz r27, 0x2b8(r3)
/* 80186644 00183584  39 5B 00 01 */	addi r10, r27, 1
/* 80186648 00183588  38 FB 00 02 */	addi r7, r27, 2
/* 8018664C 0018358C  7C C9 50 96 */	mulhw r6, r9, r10
/* 80186650 00183590  38 BB 00 03 */	addi r5, r27, 3
/* 80186654 00183594  38 7B 00 04 */	addi r3, r27, 4
/* 80186658 00183598  38 1B 00 05 */	addi r0, r27, 5
/* 8018665C 0018359C  39 9B 00 06 */	addi r12, r27, 6
/* 80186660 001835A0  7C 89 38 96 */	mulhw r4, r9, r7
/* 80186664 001835A4  7C C6 52 14 */	add r6, r6, r10
/* 80186668 001835A8  7C C8 16 70 */	srawi r8, r6, 2
/* 8018666C 001835AC  7C C9 28 96 */	mulhw r6, r9, r5
/* 80186670 001835B0  55 0B 0F FE */	srwi r11, r8, 0x1f
/* 80186674 001835B4  7C 84 3A 14 */	add r4, r4, r7
/* 80186678 001835B8  7D 08 5A 14 */	add r8, r8, r11
/* 8018667C 001835BC  7C 8B 16 70 */	srawi r11, r4, 2
/* 80186680 001835C0  7C 89 18 96 */	mulhw r4, r9, r3
/* 80186684 001835C4  7C C6 2A 14 */	add r6, r6, r5
/* 80186688 001835C8  55 78 0F FE */	srwi r24, r11, 0x1f
/* 8018668C 001835CC  7C D7 16 70 */	srawi r23, r6, 2
/* 80186690 001835D0  7C CB C2 14 */	add r6, r11, r24
/* 80186694 001835D4  7D 69 00 96 */	mulhw r11, r9, r0
/* 80186698 001835D8  7C 84 1A 14 */	add r4, r4, r3
/* 8018669C 001835DC  56 F9 0F FE */	srwi r25, r23, 0x1f
/* 801866A0 001835E0  7C 98 16 70 */	srawi r24, r4, 2
/* 801866A4 001835E4  7C 97 CA 14 */	add r4, r23, r25
/* 801866A8 001835E8  7D 29 60 96 */	mulhw r9, r9, r12
/* 801866AC 001835EC  57 19 0F FE */	srwi r25, r24, 0x1f
/* 801866B0 001835F0  7D 6B 02 14 */	add r11, r11, r0
/* 801866B4 001835F4  7F 38 CA 14 */	add r25, r24, r25
/* 801866B8 001835F8  7D 77 16 70 */	srawi r23, r11, 2
/* 801866BC 001835FC  1C C6 00 07 */	mulli r6, r6, 7
/* 801866C0 00183600  7D 29 62 14 */	add r9, r9, r12
/* 801866C4 00183604  56 F8 0F FE */	srwi r24, r23, 0x1f
/* 801866C8 00183608  1C 84 00 07 */	mulli r4, r4, 7
/* 801866CC 0018360C  7D 29 16 70 */	srawi r9, r9, 2
/* 801866D0 00183610  7C C6 38 50 */	subf r6, r6, r7
/* 801866D4 00183614  90 C1 00 70 */	stw r6, 0x70(r1)
/* 801866D8 00183618  55 2B 0F FE */	srwi r11, r9, 0x1f
/* 801866DC 0018361C  1C D9 00 07 */	mulli r6, r25, 7
/* 801866E0 00183620  7C 84 28 50 */	subf r4, r4, r5
/* 801866E4 00183624  7E F7 C2 14 */	add r23, r23, r24
/* 801866E8 00183628  90 81 00 74 */	stw r4, 0x74(r1)
/* 801866EC 0018362C  1C 97 00 07 */	mulli r4, r23, 7
/* 801866F0 00183630  7D 29 5A 14 */	add r9, r9, r11
/* 801866F4 00183634  7C 66 18 50 */	subf r3, r6, r3
/* 801866F8 00183638  90 61 00 78 */	stw r3, 0x78(r1)
/* 801866FC 0018363C  1D 08 00 07 */	mulli r8, r8, 7
/* 80186700 00183640  7C 04 00 50 */	subf r0, r4, r0
/* 80186704 00183644  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80186708 00183648  1C 69 00 07 */	mulli r3, r9, 7
/* 8018670C 0018364C  7D 08 50 50 */	subf r8, r8, r10
/* 80186710 00183650  91 01 00 6C */	stw r8, 0x6c(r1)
/* 80186714 00183654  7C 03 60 50 */	subf r0, r3, r12
/* 80186718 00183658  90 01 00 80 */	stw r0, 0x80(r1)
.L_8018671C:
/* 8018671C 0018365C  80 BA 00 00 */	lwz r5, 0(r26)
/* 80186720 00183660  7F 83 E3 78 */	mr r3, r28
/* 80186724 00183664  7F A4 EB 78 */	mr r4, r29
/* 80186728 00183668  48 00 06 AD */	bl findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii
/* 8018672C 0018366C  28 03 00 00 */	cmplwi r3, 0
/* 80186730 00183670  41 82 00 0C */	beq .L_8018673C
/* 80186734 00183674  7C 7F 1B 78 */	mr r31, r3
/* 80186738 00183678  48 00 00 14 */	b .L_8018674C
.L_8018673C:
/* 8018673C 0018367C  3B DE 00 01 */	addi r30, r30, 1
/* 80186740 00183680  3B 5A 00 04 */	addi r26, r26, 4
/* 80186744 00183684  2C 1E 00 06 */	cmpwi r30, 6
/* 80186748 00183688  41 80 FF D4 */	blt .L_8018671C
.L_8018674C:
/* 8018674C 0018368C  28 1F 00 00 */	cmplwi r31, 0
/* 80186750 00183690  41 82 04 54 */	beq .L_80186BA4
/* 80186754 00183694  82 FC 00 14 */	lwz r23, 0x14(r28)
/* 80186758 00183698  80 77 02 C4 */	lwz r3, 0x2c4(r23)
/* 8018675C 0018369C  28 03 00 00 */	cmplwi r3, 0
/* 80186760 001836A0  41 82 00 48 */	beq .L_801867A8
/* 80186764 001836A4  2C 1B 00 05 */	cmpwi r27, 5
/* 80186768 001836A8  40 82 00 24 */	bne .L_8018678C
/* 8018676C 001836AC  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 80186770 001836B0  38 80 28 6B */	li r4, 0x286b
/* 80186774 001836B4  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80186778 001836B8  38 A0 00 00 */	li r5, 0
/* 8018677C 001836BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80186780 001836C0  7D 89 03 A6 */	mtctr r12
/* 80186784 001836C4  4E 80 04 21 */	bctrl 
/* 80186788 001836C8  48 00 00 20 */	b .L_801867A8
.L_8018678C:
/* 8018678C 001836CC  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 80186790 001836D0  38 80 28 02 */	li r4, 0x2802
/* 80186794 001836D4  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80186798 001836D8  38 A0 00 00 */	li r5, 0
/* 8018679C 001836DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801867A0 001836E0  7D 89 03 A6 */	mtctr r12
/* 801867A4 001836E4  4E 80 04 21 */	bctrl 
.L_801867A8:
/* 801867A8 001836E8  80 77 02 8C */	lwz r3, 0x28c(r23)
/* 801867AC 001836EC  7E E4 BB 78 */	mr r4, r23
/* 801867B0 001836F0  38 A0 00 00 */	li r5, 0
/* 801867B4 001836F4  38 C0 00 00 */	li r6, 0
/* 801867B8 001836F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801867BC 001836FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801867C0 00183700  7D 89 03 A6 */	mtctr r12
/* 801867C4 00183704  4E 80 04 21 */	bctrl 
/* 801867C8 00183708  93 FC 00 14 */	stw r31, 0x14(r28)
/* 801867CC 0018370C  7F E4 FB 78 */	mr r4, r31
/* 801867D0 00183710  38 A0 00 04 */	li r5, 4
/* 801867D4 00183714  38 C0 00 00 */	li r6, 0
/* 801867D8 00183718  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801867DC 0018371C  81 83 00 00 */	lwz r12, 0(r3)
/* 801867E0 00183720  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801867E4 00183724  7D 89 03 A6 */	mtctr r12
/* 801867E8 00183728  4E 80 04 21 */	bctrl 
/* 801867EC 0018372C  7F 83 E3 78 */	mr r3, r28
/* 801867F0 00183730  7F A4 EB 78 */	mr r4, r29
/* 801867F4 00183734  48 00 08 DD */	bl sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
/* 801867F8 00183738  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 801867FC 0018373C  38 80 18 22 */	li r4, 0x1822
/* 80186800 00183740  38 A0 00 00 */	li r5, 0
/* 80186804 00183744  48 1B 1E 2D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80186808 00183748  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8018680C 0018374C  38 80 00 02 */	li r4, 2
/* 80186810 00183750  A0 BD 02 DC */	lhz r5, 0x2dc(r29)
/* 80186814 00183754  48 0C D1 11 */	bl startRumble__Q24Game9RumbleMgrFii
/* 80186818 00183758  48 00 05 90 */	b .L_80186DA8
.L_8018681C:
/* 8018681C 0018375C  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80186820 00183760  41 82 02 00 */	beq .L_80186A20
/* 80186824 00183764  38 00 FF FF */	li r0, -1
/* 80186828 00183768  3C 60 92 49 */	lis r3, 0x92492493@ha
/* 8018682C 0018376C  90 1C 00 38 */	stw r0, 0x38(r28)
/* 80186830 00183770  39 23 24 93 */	addi r9, r3, 0x92492493@l
/* 80186834 00183774  3B 41 00 54 */	addi r26, r1, 0x54
/* 80186838 00183778  3B C0 00 00 */	li r30, 0
/* 8018683C 0018377C  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 80186840 00183780  3B E0 00 00 */	li r31, 0
/* 80186844 00183784  8B 63 02 B8 */	lbz r27, 0x2b8(r3)
/* 80186848 00183788  39 5B 00 06 */	addi r10, r27, 6
/* 8018684C 0018378C  38 FB 00 05 */	addi r7, r27, 5
/* 80186850 00183790  7C C9 50 96 */	mulhw r6, r9, r10
/* 80186854 00183794  38 BB 00 04 */	addi r5, r27, 4
/* 80186858 00183798  38 7B 00 03 */	addi r3, r27, 3
/* 8018685C 0018379C  38 1B 00 02 */	addi r0, r27, 2
/* 80186860 001837A0  39 9B 00 01 */	addi r12, r27, 1
/* 80186864 001837A4  7C 89 38 96 */	mulhw r4, r9, r7
/* 80186868 001837A8  7C C6 52 14 */	add r6, r6, r10
/* 8018686C 001837AC  7C C8 16 70 */	srawi r8, r6, 2
/* 80186870 001837B0  7C C9 28 96 */	mulhw r6, r9, r5
/* 80186874 001837B4  55 0B 0F FE */	srwi r11, r8, 0x1f
/* 80186878 001837B8  7C 84 3A 14 */	add r4, r4, r7
/* 8018687C 001837BC  7D 08 5A 14 */	add r8, r8, r11
/* 80186880 001837C0  7C 8B 16 70 */	srawi r11, r4, 2
/* 80186884 001837C4  7C 89 18 96 */	mulhw r4, r9, r3
/* 80186888 001837C8  7C C6 2A 14 */	add r6, r6, r5
/* 8018688C 001837CC  55 78 0F FE */	srwi r24, r11, 0x1f
/* 80186890 001837D0  7C D7 16 70 */	srawi r23, r6, 2
/* 80186894 001837D4  7C CB C2 14 */	add r6, r11, r24
/* 80186898 001837D8  7D 69 00 96 */	mulhw r11, r9, r0
/* 8018689C 001837DC  7C 84 1A 14 */	add r4, r4, r3
/* 801868A0 001837E0  56 F9 0F FE */	srwi r25, r23, 0x1f
/* 801868A4 001837E4  7C 98 16 70 */	srawi r24, r4, 2
/* 801868A8 001837E8  7C 97 CA 14 */	add r4, r23, r25
/* 801868AC 001837EC  7D 29 60 96 */	mulhw r9, r9, r12
/* 801868B0 001837F0  57 17 0F FE */	srwi r23, r24, 0x1f
/* 801868B4 001837F4  7D 6B 02 14 */	add r11, r11, r0
/* 801868B8 001837F8  7E F8 BA 14 */	add r23, r24, r23
/* 801868BC 001837FC  7D 79 16 70 */	srawi r25, r11, 2
/* 801868C0 00183800  1C C6 00 07 */	mulli r6, r6, 7
/* 801868C4 00183804  7D 29 62 14 */	add r9, r9, r12
/* 801868C8 00183808  57 38 0F FE */	srwi r24, r25, 0x1f
/* 801868CC 0018380C  1C 84 00 07 */	mulli r4, r4, 7
/* 801868D0 00183810  7D 29 16 70 */	srawi r9, r9, 2
/* 801868D4 00183814  7C C6 38 50 */	subf r6, r6, r7
/* 801868D8 00183818  90 C1 00 58 */	stw r6, 0x58(r1)
/* 801868DC 0018381C  55 2B 0F FE */	srwi r11, r9, 0x1f
/* 801868E0 00183820  1C D7 00 07 */	mulli r6, r23, 7
/* 801868E4 00183824  7C 84 28 50 */	subf r4, r4, r5
/* 801868E8 00183828  7F 39 C2 14 */	add r25, r25, r24
/* 801868EC 0018382C  90 81 00 5C */	stw r4, 0x5c(r1)
/* 801868F0 00183830  1C 99 00 07 */	mulli r4, r25, 7
/* 801868F4 00183834  7D 29 5A 14 */	add r9, r9, r11
/* 801868F8 00183838  7C 66 18 50 */	subf r3, r6, r3
/* 801868FC 0018383C  90 61 00 60 */	stw r3, 0x60(r1)
/* 80186900 00183840  1D 08 00 07 */	mulli r8, r8, 7
/* 80186904 00183844  7C 04 00 50 */	subf r0, r4, r0
/* 80186908 00183848  90 01 00 64 */	stw r0, 0x64(r1)
/* 8018690C 0018384C  1C 69 00 07 */	mulli r3, r9, 7
/* 80186910 00183850  7D 08 50 50 */	subf r8, r8, r10
/* 80186914 00183854  91 01 00 54 */	stw r8, 0x54(r1)
/* 80186918 00183858  7C 03 60 50 */	subf r0, r3, r12
/* 8018691C 0018385C  90 01 00 68 */	stw r0, 0x68(r1)
.L_80186920:
/* 80186920 00183860  80 BA 00 00 */	lwz r5, 0(r26)
/* 80186924 00183864  7F 83 E3 78 */	mr r3, r28
/* 80186928 00183868  7F A4 EB 78 */	mr r4, r29
/* 8018692C 0018386C  48 00 04 A9 */	bl findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii
/* 80186930 00183870  28 03 00 00 */	cmplwi r3, 0
/* 80186934 00183874  41 82 00 0C */	beq .L_80186940
/* 80186938 00183878  7C 7E 1B 78 */	mr r30, r3
/* 8018693C 0018387C  48 00 00 14 */	b .L_80186950
.L_80186940:
/* 80186940 00183880  3B FF 00 01 */	addi r31, r31, 1
/* 80186944 00183884  3B 5A 00 04 */	addi r26, r26, 4
/* 80186948 00183888  2C 1F 00 06 */	cmpwi r31, 6
/* 8018694C 0018388C  41 80 FF D4 */	blt .L_80186920
.L_80186950:
/* 80186950 00183890  28 1E 00 00 */	cmplwi r30, 0
/* 80186954 00183894  41 82 02 50 */	beq .L_80186BA4
/* 80186958 00183898  82 FC 00 14 */	lwz r23, 0x14(r28)
/* 8018695C 0018389C  80 77 02 C4 */	lwz r3, 0x2c4(r23)
/* 80186960 001838A0  28 03 00 00 */	cmplwi r3, 0
/* 80186964 001838A4  41 82 00 48 */	beq .L_801869AC
/* 80186968 001838A8  2C 1B 00 05 */	cmpwi r27, 5
/* 8018696C 001838AC  40 82 00 24 */	bne .L_80186990
/* 80186970 001838B0  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 80186974 001838B4  38 80 28 6B */	li r4, 0x286b
/* 80186978 001838B8  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 8018697C 001838BC  38 A0 00 00 */	li r5, 0
/* 80186980 001838C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80186984 001838C4  7D 89 03 A6 */	mtctr r12
/* 80186988 001838C8  4E 80 04 21 */	bctrl 
/* 8018698C 001838CC  48 00 00 20 */	b .L_801869AC
.L_80186990:
/* 80186990 001838D0  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 80186994 001838D4  38 80 28 02 */	li r4, 0x2802
/* 80186998 001838D8  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 8018699C 001838DC  38 A0 00 00 */	li r5, 0
/* 801869A0 001838E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801869A4 001838E4  7D 89 03 A6 */	mtctr r12
/* 801869A8 001838E8  4E 80 04 21 */	bctrl 
.L_801869AC:
/* 801869AC 001838EC  80 77 02 8C */	lwz r3, 0x28c(r23)
/* 801869B0 001838F0  7E E4 BB 78 */	mr r4, r23
/* 801869B4 001838F4  38 A0 00 00 */	li r5, 0
/* 801869B8 001838F8  38 C0 00 00 */	li r6, 0
/* 801869BC 001838FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801869C0 00183900  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801869C4 00183904  7D 89 03 A6 */	mtctr r12
/* 801869C8 00183908  4E 80 04 21 */	bctrl 
/* 801869CC 0018390C  93 DC 00 14 */	stw r30, 0x14(r28)
/* 801869D0 00183910  7F C4 F3 78 */	mr r4, r30
/* 801869D4 00183914  38 A0 00 04 */	li r5, 4
/* 801869D8 00183918  38 C0 00 00 */	li r6, 0
/* 801869DC 0018391C  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 801869E0 00183920  81 83 00 00 */	lwz r12, 0(r3)
/* 801869E4 00183924  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801869E8 00183928  7D 89 03 A6 */	mtctr r12
/* 801869EC 0018392C  4E 80 04 21 */	bctrl 
/* 801869F0 00183930  7F 83 E3 78 */	mr r3, r28
/* 801869F4 00183934  7F A4 EB 78 */	mr r4, r29
/* 801869F8 00183938  48 00 06 D9 */	bl sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
/* 801869FC 0018393C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80186A00 00183940  38 80 18 22 */	li r4, 0x1822
/* 80186A04 00183944  38 A0 00 00 */	li r5, 0
/* 80186A08 00183948  48 1B 1C 29 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80186A0C 0018394C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80186A10 00183950  38 80 00 02 */	li r4, 2
/* 80186A14 00183954  A0 BD 02 DC */	lhz r5, 0x2dc(r29)
/* 80186A18 00183958  48 0C CF 0D */	bl startRumble__Q24Game9RumbleMgrFii
/* 80186A1C 0018395C  48 00 03 8C */	b .L_80186DA8
.L_80186A20:
/* 80186A20 00183960  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80186A24 00183964  40 82 00 0C */	bne .L_80186A30
/* 80186A28 00183968  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80186A2C 0018396C  41 82 01 78 */	beq .L_80186BA4
.L_80186A30:
/* 80186A30 00183970  80 9C 00 14 */	lwz r4, 0x14(r28)
/* 80186A34 00183974  54 7F F7 FE */	rlwinm r31, r3, 0x1e, 0x1f, 0x1f
/* 80186A38 00183978  3B 40 00 00 */	li r26, 0
/* 80186A3C 0018397C  8B C4 02 B8 */	lbz r30, 0x2b8(r4)
/* 80186A40 00183980  8B 64 02 B9 */	lbz r27, 0x2b9(r4)
.L_80186A44:
/* 80186A44 00183984  28 1F 00 00 */	cmplwi r31, 0
/* 80186A48 00183988  41 82 00 30 */	beq .L_80186A78
/* 80186A4C 0018398C  80 9C 00 38 */	lwz r4, 0x38(r28)
/* 80186A50 00183990  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 80186A54 00183994  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 80186A58 00183998  38 84 00 02 */	addi r4, r4, 2
/* 80186A5C 0018399C  7C 60 20 96 */	mulhw r3, r0, r4
/* 80186A60 001839A0  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80186A64 001839A4  7C 03 02 14 */	add r0, r3, r0
/* 80186A68 001839A8  1C 00 00 03 */	mulli r0, r0, 3
/* 80186A6C 001839AC  7C 00 20 50 */	subf r0, r0, r4
/* 80186A70 001839B0  90 1C 00 38 */	stw r0, 0x38(r28)
/* 80186A74 001839B4  48 00 00 2C */	b .L_80186AA0
.L_80186A78:
/* 80186A78 001839B8  80 9C 00 38 */	lwz r4, 0x38(r28)
/* 80186A7C 001839BC  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 80186A80 001839C0  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 80186A84 001839C4  38 84 00 01 */	addi r4, r4, 1
/* 80186A88 001839C8  7C 60 20 96 */	mulhw r3, r0, r4
/* 80186A8C 001839CC  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80186A90 001839D0  7C 03 02 14 */	add r0, r3, r0
/* 80186A94 001839D4  1C 00 00 03 */	mulli r0, r0, 3
/* 80186A98 001839D8  7C 00 20 50 */	subf r0, r0, r4
/* 80186A9C 001839DC  90 1C 00 38 */	stw r0, 0x38(r28)
.L_80186AA0:
/* 80186AA0 001839E0  7F 83 E3 78 */	mr r3, r28
/* 80186AA4 001839E4  7F A4 EB 78 */	mr r4, r29
/* 80186AA8 001839E8  7F C5 F3 78 */	mr r5, r30
/* 80186AAC 001839EC  48 00 03 29 */	bl findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii
/* 80186AB0 001839F0  7C 77 1B 79 */	or. r23, r3, r3
/* 80186AB4 001839F4  41 82 00 10 */	beq .L_80186AC4
/* 80186AB8 001839F8  88 17 02 B9 */	lbz r0, 0x2b9(r23)
/* 80186ABC 001839FC  7C 1B 00 00 */	cmpw r27, r0
/* 80186AC0 00183A00  40 82 00 14 */	bne .L_80186AD4
.L_80186AC4:
/* 80186AC4 00183A04  3B 5A 00 01 */	addi r26, r26, 1
/* 80186AC8 00183A08  3A E0 00 00 */	li r23, 0
/* 80186ACC 00183A0C  2C 1A 00 02 */	cmpwi r26, 2
/* 80186AD0 00183A10  41 80 FF 74 */	blt .L_80186A44
.L_80186AD4:
/* 80186AD4 00183A14  28 17 00 00 */	cmplwi r23, 0
/* 80186AD8 00183A18  41 82 00 CC */	beq .L_80186BA4
/* 80186ADC 00183A1C  83 1C 00 14 */	lwz r24, 0x14(r28)
/* 80186AE0 00183A20  80 78 02 C4 */	lwz r3, 0x2c4(r24)
/* 80186AE4 00183A24  28 03 00 00 */	cmplwi r3, 0
/* 80186AE8 00183A28  41 82 00 48 */	beq .L_80186B30
/* 80186AEC 00183A2C  2C 1E 00 05 */	cmpwi r30, 5
/* 80186AF0 00183A30  40 82 00 24 */	bne .L_80186B14
/* 80186AF4 00183A34  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 80186AF8 00183A38  38 80 28 6B */	li r4, 0x286b
/* 80186AFC 00183A3C  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80186B00 00183A40  38 A0 00 00 */	li r5, 0
/* 80186B04 00183A44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80186B08 00183A48  7D 89 03 A6 */	mtctr r12
/* 80186B0C 00183A4C  4E 80 04 21 */	bctrl 
/* 80186B10 00183A50  48 00 00 20 */	b .L_80186B30
.L_80186B14:
/* 80186B14 00183A54  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 80186B18 00183A58  38 80 28 02 */	li r4, 0x2802
/* 80186B1C 00183A5C  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80186B20 00183A60  38 A0 00 00 */	li r5, 0
/* 80186B24 00183A64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80186B28 00183A68  7D 89 03 A6 */	mtctr r12
/* 80186B2C 00183A6C  4E 80 04 21 */	bctrl 
.L_80186B30:
/* 80186B30 00183A70  80 78 02 8C */	lwz r3, 0x28c(r24)
/* 80186B34 00183A74  7F 04 C3 78 */	mr r4, r24
/* 80186B38 00183A78  38 A0 00 00 */	li r5, 0
/* 80186B3C 00183A7C  38 C0 00 00 */	li r6, 0
/* 80186B40 00183A80  81 83 00 00 */	lwz r12, 0(r3)
/* 80186B44 00183A84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80186B48 00183A88  7D 89 03 A6 */	mtctr r12
/* 80186B4C 00183A8C  4E 80 04 21 */	bctrl 
/* 80186B50 00183A90  92 FC 00 14 */	stw r23, 0x14(r28)
/* 80186B54 00183A94  7E E4 BB 78 */	mr r4, r23
/* 80186B58 00183A98  38 A0 00 04 */	li r5, 4
/* 80186B5C 00183A9C  38 C0 00 00 */	li r6, 0
/* 80186B60 00183AA0  80 77 02 8C */	lwz r3, 0x28c(r23)
/* 80186B64 00183AA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80186B68 00183AA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80186B6C 00183AAC  7D 89 03 A6 */	mtctr r12
/* 80186B70 00183AB0  4E 80 04 21 */	bctrl 
/* 80186B74 00183AB4  7F 83 E3 78 */	mr r3, r28
/* 80186B78 00183AB8  7F A4 EB 78 */	mr r4, r29
/* 80186B7C 00183ABC  48 00 05 55 */	bl sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
/* 80186B80 00183AC0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80186B84 00183AC4  38 80 18 22 */	li r4, 0x1822
/* 80186B88 00183AC8  38 A0 00 00 */	li r5, 0
/* 80186B8C 00183ACC  48 1B 1A A5 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80186B90 00183AD0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80186B94 00183AD4  38 80 00 02 */	li r4, 2
/* 80186B98 00183AD8  A0 BD 02 DC */	lhz r5, 0x2dc(r29)
/* 80186B9C 00183ADC  48 0C CD 89 */	bl startRumble__Q24Game9RumbleMgrFii
/* 80186BA0 00183AE0  48 00 02 08 */	b .L_80186DA8
.L_80186BA4:
/* 80186BA4 00183AE4  80 7D 02 78 */	lwz r3, 0x278(r29)
/* 80186BA8 00183AE8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80186BAC 00183AEC  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80186BB0 00183AF0  40 82 00 74 */	bne .L_80186C24
/* 80186BB4 00183AF4  7F 83 E3 78 */	mr r3, r28
/* 80186BB8 00183AF8  7F A4 EB 78 */	mr r4, r29
/* 80186BBC 00183AFC  48 00 05 15 */	bl sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
/* 80186BC0 00183B00  80 9C 00 1C */	lwz r4, 0x1c(r28)
/* 80186BC4 00183B04  3C 00 43 30 */	lis r0, 0x4330
/* 80186BC8 00183B08  80 FD 00 C0 */	lwz r7, 0xc0(r29)
/* 80186BCC 00183B0C  7F 83 E3 78 */	mr r3, r28
/* 80186BD0 00183B10  6C 85 80 00 */	xoris r5, r4, 0x8000
/* 80186BD4 00183B14  90 01 00 90 */	stw r0, 0x90(r1)
/* 80186BD8 00183B18  C8 62 A8 D0 */	lfd f3, lbl_80518C30@sda21(r2)
/* 80186BDC 00183B1C  7F A4 EB 78 */	mr r4, r29
/* 80186BE0 00183B20  90 A1 00 94 */	stw r5, 0x94(r1)
/* 80186BE4 00183B24  38 C1 00 08 */	addi r6, r1, 8
/* 80186BE8 00183B28  C0 22 A8 D8 */	lfs f1, lbl_80518C38@sda21(r2)
/* 80186BEC 00183B2C  38 A0 00 05 */	li r5, 5
/* 80186BF0 00183B30  C8 41 00 90 */	lfd f2, 0x90(r1)
/* 80186BF4 00183B34  C0 07 04 F8 */	lfs f0, 0x4f8(r7)
/* 80186BF8 00183B38  EC 42 18 28 */	fsubs f2, f2, f3
/* 80186BFC 00183B3C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80186C00 00183B40  EC 01 00 32 */	fmuls f0, f1, f0
/* 80186C04 00183B44  D0 1D 02 B0 */	stfs f0, 0x2b0(r29)
/* 80186C08 00183B48  80 1C 00 14 */	lwz r0, 0x14(r28)
/* 80186C0C 00183B4C  90 01 00 08 */	stw r0, 8(r1)
/* 80186C10 00183B50  81 9C 00 00 */	lwz r12, 0(r28)
/* 80186C14 00183B54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80186C18 00183B58  7D 89 03 A6 */	mtctr r12
/* 80186C1C 00183B5C  4E 80 04 21 */	bctrl 
/* 80186C20 00183B60  48 00 01 88 */	b .L_80186DA8
.L_80186C24:
/* 80186C24 00183B64  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80186C28 00183B68  C0 3D 02 B0 */	lfs f1, 0x2b0(r29)
/* 80186C2C 00183B6C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80186C30 00183B70  EC 01 00 2A */	fadds f0, f1, f0
/* 80186C34 00183B74  D0 1D 02 B0 */	stfs f0, 0x2b0(r29)
/* 80186C38 00183B78  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 80186C3C 00183B7C  C0 3D 02 B0 */	lfs f1, 0x2b0(r29)
/* 80186C40 00183B80  C0 03 04 F8 */	lfs f0, 0x4f8(r3)
/* 80186C44 00183B84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80186C48 00183B88  40 81 00 08 */	ble .L_80186C50
/* 80186C4C 00183B8C  D0 1D 02 B0 */	stfs f0, 0x2b0(r29)
.L_80186C50:
/* 80186C50 00183B90  C0 5C 00 2C */	lfs f2, 0x2c(r28)
/* 80186C54 00183B94  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 80186C58 00183B98  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80186C5C 00183B9C  40 81 00 34 */	ble .L_80186C90
/* 80186C60 00183BA0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80186C64 00183BA4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80186C68 00183BA8  EC 02 00 28 */	fsubs f0, f2, f0
/* 80186C6C 00183BAC  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 80186C70 00183BB0  C0 1C 00 2C */	lfs f0, 0x2c(r28)
/* 80186C74 00183BB4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80186C78 00183BB8  4C 40 13 82 */	cror 2, 0, 2
/* 80186C7C 00183BBC  40 82 01 2C */	bne .L_80186DA8
/* 80186C80 00183BC0  7F 83 E3 78 */	mr r3, r28
/* 80186C84 00183BC4  7F A4 EB 78 */	mr r4, r29
/* 80186C88 00183BC8  48 00 04 49 */	bl sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
/* 80186C8C 00183BCC  48 00 01 1C */	b .L_80186DA8
.L_80186C90:
/* 80186C90 00183BD0  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 80186C94 00183BD4  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80186C98 00183BD8  2C 00 00 00 */	cmpwi r0, 0
/* 80186C9C 00183BDC  40 81 01 0C */	ble .L_80186DA8
/* 80186CA0 00183BE0  7F A4 EB 78 */	mr r4, r29
/* 80186CA4 00183BE4  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 80186CA8 00183BE8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80186CAC 00183BEC  38 61 00 24 */	addi r3, r1, 0x24
/* 80186CB0 00183BF0  C3 A5 00 0C */	lfs f29, 0xc(r5)
/* 80186CB4 00183BF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80186CB8 00183BF8  C3 C5 00 10 */	lfs f30, 0x10(r5)
/* 80186CBC 00183BFC  C3 E5 00 14 */	lfs f31, 0x14(r5)
/* 80186CC0 00183C00  7D 89 03 A6 */	mtctr r12
/* 80186CC4 00183C04  4E 80 04 21 */	bctrl 
/* 80186CC8 00183C08  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80186CCC 00183C0C  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80186CD0 00183C10  EC 9E 00 28 */	fsubs f4, f30, f0
/* 80186CD4 00183C14  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 80186CD8 00183C18  EC 7D 10 28 */	fsubs f3, f29, f2
/* 80186CDC 00183C1C  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80186CE0 00183C20  EC 5F 08 28 */	fsubs f2, f31, f1
/* 80186CE4 00183C24  EC 24 01 32 */	fmuls f1, f4, f4
/* 80186CE8 00183C28  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80186CEC 00183C2C  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80186CF0 00183C30  EC 22 08 2A */	fadds f1, f2, f1
/* 80186CF4 00183C34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80186CF8 00183C38  40 81 00 14 */	ble .L_80186D0C
/* 80186CFC 00183C3C  40 81 00 14 */	ble .L_80186D10
/* 80186D00 00183C40  FC 00 08 34 */	frsqrte f0, f1
/* 80186D04 00183C44  EC 20 00 72 */	fmuls f1, f0, f1
/* 80186D08 00183C48  48 00 00 08 */	b .L_80186D10
.L_80186D0C:
/* 80186D0C 00183C4C  FC 20 00 90 */	fmr f1, f0
.L_80186D10:
/* 80186D10 00183C50  C0 02 A9 04 */	lfs f0, lbl_80518C64@sda21(r2)
/* 80186D14 00183C54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80186D18 00183C58  40 81 00 90 */	ble .L_80186DA8
/* 80186D1C 00183C5C  7F A4 EB 78 */	mr r4, r29
/* 80186D20 00183C60  38 61 00 18 */	addi r3, r1, 0x18
/* 80186D24 00183C64  81 9D 00 00 */	lwz r12, 0(r29)
/* 80186D28 00183C68  81 8C 00 08 */	lwz r12, 8(r12)
/* 80186D2C 00183C6C  7D 89 03 A6 */	mtctr r12
/* 80186D30 00183C70  4E 80 04 21 */	bctrl 
/* 80186D34 00183C74  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80186D38 00183C78  7F A4 EB 78 */	mr r4, r29
/* 80186D3C 00183C7C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80186D40 00183C80  38 61 00 0C */	addi r3, r1, 0xc
/* 80186D44 00183C84  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80186D48 00183C88  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 80186D4C 00183C8C  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 80186D50 00183C90  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80186D54 00183C94  81 9D 00 00 */	lwz r12, 0(r29)
/* 80186D58 00183C98  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80186D5C 00183C9C  7D 89 03 A6 */	mtctr r12
/* 80186D60 00183CA0  4E 80 04 21 */	bctrl 
/* 80186D64 00183CA4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80186D68 00183CA8  38 81 00 48 */	addi r4, r1, 0x48
/* 80186D6C 00183CAC  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80186D70 00183CB0  38 A1 00 3C */	addi r5, r1, 0x3c
/* 80186D74 00183CB4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80186D78 00183CB8  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80186D7C 00183CBC  C0 22 A9 44 */	lfs f1, lbl_80518CA4@sda21(r2)
/* 80186D80 00183CC0  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 80186D84 00183CC4  C0 42 A8 E8 */	lfs f2, lbl_80518C48@sda21(r2)
/* 80186D88 00183CC8  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80186D8C 00183CCC  C0 1D 01 FC */	lfs f0, 0x1fc(r29)
/* 80186D90 00183CD0  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 80186D94 00183CD4  EC 21 00 2A */	fadds f1, f1, f0
/* 80186D98 00183CD8  48 00 E5 55 */	bl "setPos__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"
/* 80186D9C 00183CDC  7F 83 E3 78 */	mr r3, r28
/* 80186DA0 00183CE0  7F A4 EB 78 */	mr r4, r29
/* 80186DA4 00183CE4  48 00 03 2D */	bl sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
.L_80186DA8:
/* 80186DA8 00183CE8  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 80186DAC 00183CEC  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 80186DB0 00183CF0  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 80186DB4 00183CF4  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 80186DB8 00183CF8  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 80186DBC 00183CFC  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 80186DC0 00183D00  BA E1 00 9C */	lmw r23, 0x9c(r1)
/* 80186DC4 00183D04  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 80186DC8 00183D08  7C 08 03 A6 */	mtlr r0
/* 80186DCC 00183D0C  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80186DD0 00183D10  4E 80 00 20 */	blr 
.endfn exec__Q24Game18NaviThrowWaitStateFPQ24Game4Navi

.fn findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii, global
/* 80186DD4 00183D14  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80186DD8 00183D18  7C 08 02 A6 */	mflr r0
/* 80186DDC 00183D1C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80186DE0 00183D20  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80186DE4 00183D24  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80186DE8 00183D28  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80186DEC 00183D2C  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80186DF0 00183D30  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 80186DF4 00183D34  7C 9D 23 78 */	mr r29, r4
/* 80186DF8 00183D38  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80186DFC 00183D3C  80 DD 02 54 */	lwz r6, 0x254(r29)
/* 80186E00 00183D40  38 00 00 00 */	li r0, 0
/* 80186E04 00183D44  38 84 BC 84 */	addi r4, r4, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80186E08 00183D48  C3 C2 A9 64 */	lfs f30, lbl_80518CC4@sda21(r2)
/* 80186E0C 00183D4C  28 00 00 00 */	cmplwi r0, 0
/* 80186E10 00183D50  90 81 00 20 */	stw r4, 0x20(r1)
/* 80186E14 00183D54  7C 7C 1B 78 */	mr r28, r3
/* 80186E18 00183D58  7C BE 2B 78 */	mr r30, r5
/* 80186E1C 00183D5C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80186E20 00183D60  3B E0 00 00 */	li r31, 0
/* 80186E24 00183D64  90 01 00 24 */	stw r0, 0x24(r1)
/* 80186E28 00183D68  90 C1 00 28 */	stw r6, 0x28(r1)
/* 80186E2C 00183D6C  40 82 00 20 */	bne .L_80186E4C
/* 80186E30 00183D70  7C C3 33 78 */	mr r3, r6
/* 80186E34 00183D74  81 86 00 00 */	lwz r12, 0(r6)
/* 80186E38 00183D78  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80186E3C 00183D7C  7D 89 03 A6 */	mtctr r12
/* 80186E40 00183D80  4E 80 04 21 */	bctrl 
/* 80186E44 00183D84  90 61 00 24 */	stw r3, 0x24(r1)
/* 80186E48 00183D88  48 00 02 40 */	b .L_80187088
.L_80186E4C:
/* 80186E4C 00183D8C  7C C3 33 78 */	mr r3, r6
/* 80186E50 00183D90  81 86 00 00 */	lwz r12, 0(r6)
/* 80186E54 00183D94  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80186E58 00183D98  7D 89 03 A6 */	mtctr r12
/* 80186E5C 00183D9C  4E 80 04 21 */	bctrl 
/* 80186E60 00183DA0  90 61 00 24 */	stw r3, 0x24(r1)
/* 80186E64 00183DA4  48 00 00 58 */	b .L_80186EBC
.L_80186E68:
/* 80186E68 00183DA8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80186E6C 00183DAC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80186E70 00183DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80186E74 00183DB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80186E78 00183DB8  7D 89 03 A6 */	mtctr r12
/* 80186E7C 00183DBC  4E 80 04 21 */	bctrl 
/* 80186E80 00183DC0  7C 64 1B 78 */	mr r4, r3
/* 80186E84 00183DC4  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80186E88 00183DC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80186E8C 00183DCC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80186E90 00183DD0  7D 89 03 A6 */	mtctr r12
/* 80186E94 00183DD4  4E 80 04 21 */	bctrl 
/* 80186E98 00183DD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80186E9C 00183DDC  40 82 01 EC */	bne .L_80187088
/* 80186EA0 00183DE0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80186EA4 00183DE4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80186EA8 00183DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80186EAC 00183DEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80186EB0 00183DF0  7D 89 03 A6 */	mtctr r12
/* 80186EB4 00183DF4  4E 80 04 21 */	bctrl 
/* 80186EB8 00183DF8  90 61 00 24 */	stw r3, 0x24(r1)
.L_80186EBC:
/* 80186EBC 00183DFC  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80186EC0 00183E00  38 61 00 20 */	addi r3, r1, 0x20
/* 80186EC4 00183E04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80186EC8 00183E08  7D 89 03 A6 */	mtctr r12
/* 80186ECC 00183E0C  4E 80 04 21 */	bctrl 
/* 80186ED0 00183E10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80186ED4 00183E14  41 82 FF 94 */	beq .L_80186E68
/* 80186ED8 00183E18  48 00 01 B0 */	b .L_80187088
.L_80186EDC:
/* 80186EDC 00183E1C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80186EE0 00183E20  81 83 00 00 */	lwz r12, 0(r3)
/* 80186EE4 00183E24  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80186EE8 00183E28  7D 89 03 A6 */	mtctr r12
/* 80186EEC 00183E2C  4E 80 04 21 */	bctrl 
/* 80186EF0 00183E30  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 80186EF4 00183E34  7C 7B 1B 78 */	mr r27, r3
/* 80186EF8 00183E38  7C 1E 00 00 */	cmpw r30, r0
/* 80186EFC 00183E3C  40 82 00 D0 */	bne .L_80186FCC
/* 80186F00 00183E40  80 7C 00 38 */	lwz r3, 0x38(r28)
/* 80186F04 00183E44  2C 03 FF FF */	cmpwi r3, -1
/* 80186F08 00183E48  41 82 00 10 */	beq .L_80186F18
/* 80186F0C 00183E4C  88 1B 02 B9 */	lbz r0, 0x2b9(r27)
/* 80186F10 00183E50  7C 03 00 00 */	cmpw r3, r0
/* 80186F14 00183E54  40 82 00 B8 */	bne .L_80186FCC
.L_80186F18:
/* 80186F18 00183E58  7F A4 EB 78 */	mr r4, r29
/* 80186F1C 00183E5C  38 61 00 08 */	addi r3, r1, 8
/* 80186F20 00183E60  81 9D 00 00 */	lwz r12, 0(r29)
/* 80186F24 00183E64  81 8C 00 08 */	lwz r12, 8(r12)
/* 80186F28 00183E68  7D 89 03 A6 */	mtctr r12
/* 80186F2C 00183E6C  4E 80 04 21 */	bctrl 
/* 80186F30 00183E70  7F 64 DB 78 */	mr r4, r27
/* 80186F34 00183E74  38 61 00 14 */	addi r3, r1, 0x14
/* 80186F38 00183E78  81 9B 00 00 */	lwz r12, 0(r27)
/* 80186F3C 00183E7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80186F40 00183E80  7D 89 03 A6 */	mtctr r12
/* 80186F44 00183E84  4E 80 04 21 */	bctrl 
/* 80186F48 00183E88  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80186F4C 00183E8C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80186F50 00183E90  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 80186F54 00183E94  EC 81 00 28 */	fsubs f4, f1, f0
/* 80186F58 00183E98  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80186F5C 00183E9C  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80186F60 00183EA0  C0 01 00 08 */	lfs f0, 8(r1)
/* 80186F64 00183EA4  EC 43 10 28 */	fsubs f2, f3, f2
/* 80186F68 00183EA8  EC 64 01 32 */	fmuls f3, f4, f4
/* 80186F6C 00183EAC  EC 21 00 28 */	fsubs f1, f1, f0
/* 80186F70 00183EB0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80186F74 00183EB4  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80186F78 00183EB8  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 80186F7C 00183EBC  EF E2 08 2A */	fadds f31, f2, f1
/* 80186F80 00183EC0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80186F84 00183EC4  40 81 00 14 */	ble .L_80186F98
/* 80186F88 00183EC8  40 81 00 14 */	ble .L_80186F9C
/* 80186F8C 00183ECC  FC 00 F8 34 */	frsqrte f0, f31
/* 80186F90 00183ED0  EF E0 07 F2 */	fmuls f31, f0, f31
/* 80186F94 00183ED4  48 00 00 08 */	b .L_80186F9C
.L_80186F98:
/* 80186F98 00183ED8  FF E0 00 90 */	fmr f31, f0
.L_80186F9C:
/* 80186F9C 00183EDC  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 80186FA0 00183EE0  40 80 00 2C */	bge .L_80186FCC
/* 80186FA4 00183EE4  7F 63 DB 78 */	mr r3, r27
/* 80186FA8 00183EE8  4B FC 1F 8D */	bl getStateID__Q24Game4PikiFv
/* 80186FAC 00183EEC  2C 03 00 00 */	cmpwi r3, 0
/* 80186FB0 00183EF0  40 82 00 1C */	bne .L_80186FCC
/* 80186FB4 00183EF4  7F 63 DB 78 */	mr r3, r27
/* 80186FB8 00183EF8  4B FC 24 6D */	bl isThrowable__Q24Game4PikiFv
/* 80186FBC 00183EFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80186FC0 00183F00  41 82 00 0C */	beq .L_80186FCC
/* 80186FC4 00183F04  7F 7F DB 78 */	mr r31, r27
/* 80186FC8 00183F08  FF C0 F8 90 */	fmr f30, f31
.L_80186FCC:
/* 80186FCC 00183F0C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80186FD0 00183F10  28 00 00 00 */	cmplwi r0, 0
/* 80186FD4 00183F14  40 82 00 24 */	bne .L_80186FF8
/* 80186FD8 00183F18  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80186FDC 00183F1C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80186FE0 00183F20  81 83 00 00 */	lwz r12, 0(r3)
/* 80186FE4 00183F24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80186FE8 00183F28  7D 89 03 A6 */	mtctr r12
/* 80186FEC 00183F2C  4E 80 04 21 */	bctrl 
/* 80186FF0 00183F30  90 61 00 24 */	stw r3, 0x24(r1)
/* 80186FF4 00183F34  48 00 00 94 */	b .L_80187088
.L_80186FF8:
/* 80186FF8 00183F38  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80186FFC 00183F3C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80187000 00183F40  81 83 00 00 */	lwz r12, 0(r3)
/* 80187004 00183F44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80187008 00183F48  7D 89 03 A6 */	mtctr r12
/* 8018700C 00183F4C  4E 80 04 21 */	bctrl 
/* 80187010 00183F50  90 61 00 24 */	stw r3, 0x24(r1)
/* 80187014 00183F54  48 00 00 58 */	b .L_8018706C
.L_80187018:
/* 80187018 00183F58  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8018701C 00183F5C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80187020 00183F60  81 83 00 00 */	lwz r12, 0(r3)
/* 80187024 00183F64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80187028 00183F68  7D 89 03 A6 */	mtctr r12
/* 8018702C 00183F6C  4E 80 04 21 */	bctrl 
/* 80187030 00183F70  7C 64 1B 78 */	mr r4, r3
/* 80187034 00183F74  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80187038 00183F78  81 83 00 00 */	lwz r12, 0(r3)
/* 8018703C 00183F7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80187040 00183F80  7D 89 03 A6 */	mtctr r12
/* 80187044 00183F84  4E 80 04 21 */	bctrl 
/* 80187048 00183F88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018704C 00183F8C  40 82 00 3C */	bne .L_80187088
/* 80187050 00183F90  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80187054 00183F94  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80187058 00183F98  81 83 00 00 */	lwz r12, 0(r3)
/* 8018705C 00183F9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80187060 00183FA0  7D 89 03 A6 */	mtctr r12
/* 80187064 00183FA4  4E 80 04 21 */	bctrl 
/* 80187068 00183FA8  90 61 00 24 */	stw r3, 0x24(r1)
.L_8018706C:
/* 8018706C 00183FAC  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80187070 00183FB0  38 61 00 20 */	addi r3, r1, 0x20
/* 80187074 00183FB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80187078 00183FB8  7D 89 03 A6 */	mtctr r12
/* 8018707C 00183FBC  4E 80 04 21 */	bctrl 
/* 80187080 00183FC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80187084 00183FC4  41 82 FF 94 */	beq .L_80187018
.L_80187088:
/* 80187088 00183FC8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8018708C 00183FCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80187090 00183FD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80187094 00183FD4  7D 89 03 A6 */	mtctr r12
/* 80187098 00183FD8  4E 80 04 21 */	bctrl 
/* 8018709C 00183FDC  80 81 00 24 */	lwz r4, 0x24(r1)
/* 801870A0 00183FE0  7C 04 18 40 */	cmplw r4, r3
/* 801870A4 00183FE4  40 82 FE 38 */	bne .L_80186EDC
/* 801870A8 00183FE8  7F E3 FB 78 */	mr r3, r31
/* 801870AC 00183FEC  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 801870B0 00183FF0  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 801870B4 00183FF4  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 801870B8 00183FF8  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 801870BC 00183FFC  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 801870C0 00184000  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801870C4 00184004  7C 08 03 A6 */	mtlr r0
/* 801870C8 00184008  38 21 00 70 */	addi r1, r1, 0x70
/* 801870CC 0018400C  4E 80 00 20 */	blr 
.endfn findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii

.fn sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi, global
/* 801870D0 00184010  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801870D4 00184014  7C 08 02 A6 */	mflr r0
/* 801870D8 00184018  7C 65 1B 78 */	mr r5, r3
/* 801870DC 0018401C  90 01 00 44 */	stw r0, 0x44(r1)
/* 801870E0 00184020  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801870E4 00184024  7C 9F 23 78 */	mr r31, r4
/* 801870E8 00184028  80 64 02 54 */	lwz r3, 0x254(r4)
/* 801870EC 0018402C  80 85 00 14 */	lwz r4, 0x14(r5)
/* 801870F0 00184030  80 A5 00 38 */	lwz r5, 0x38(r5)
/* 801870F4 00184034  48 00 E8 C1 */	bl sortByColor__Q24Game6CPlateFPQ24Game8Creaturei
/* 801870F8 00184038  7F E4 FB 78 */	mr r4, r31
/* 801870FC 0018403C  38 61 00 08 */	addi r3, r1, 8
/* 80187100 00184040  81 9F 00 00 */	lwz r12, 0(r31)
/* 80187104 00184044  81 8C 00 08 */	lwz r12, 8(r12)
/* 80187108 00184048  7D 89 03 A6 */	mtctr r12
/* 8018710C 0018404C  4E 80 04 21 */	bctrl 
/* 80187110 00184050  C0 21 00 08 */	lfs f1, 8(r1)
/* 80187114 00184054  38 81 00 24 */	addi r4, r1, 0x24
/* 80187118 00184058  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8018711C 0018405C  38 BF 02 00 */	addi r5, r31, 0x200
/* 80187120 00184060  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80187124 00184064  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 80187128 00184068  C0 22 A9 44 */	lfs f1, lbl_80518CA4@sda21(r2)
/* 8018712C 0018406C  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 80187130 00184070  C0 42 A8 E8 */	lfs f2, lbl_80518C48@sda21(r2)
/* 80187134 00184074  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80187138 00184078  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8018713C 0018407C  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80187140 00184080  EC 21 00 2A */	fadds f1, f1, f0
/* 80187144 00184084  48 00 E1 A9 */	bl "setPos__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"
/* 80187148 00184088  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 8018714C 0018408C  38 00 00 00 */	li r0, 0
/* 80187150 00184090  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80187154 00184094  38 84 BC 84 */	addi r4, r4, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80187158 00184098  28 00 00 00 */	cmplwi r0, 0
/* 8018715C 0018409C  90 81 00 14 */	stw r4, 0x14(r1)
/* 80187160 001840A0  90 01 00 20 */	stw r0, 0x20(r1)
/* 80187164 001840A4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80187168 001840A8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8018716C 001840AC  40 82 00 1C */	bne .L_80187188
/* 80187170 001840B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80187174 001840B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80187178 001840B8  7D 89 03 A6 */	mtctr r12
/* 8018717C 001840BC  4E 80 04 21 */	bctrl 
/* 80187180 001840C0  90 61 00 18 */	stw r3, 0x18(r1)
/* 80187184 001840C4  48 00 01 88 */	b .L_8018730C
.L_80187188:
/* 80187188 001840C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8018718C 001840CC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80187190 001840D0  7D 89 03 A6 */	mtctr r12
/* 80187194 001840D4  4E 80 04 21 */	bctrl 
/* 80187198 001840D8  90 61 00 18 */	stw r3, 0x18(r1)
/* 8018719C 001840DC  48 00 00 58 */	b .L_801871F4
.L_801871A0:
/* 801871A0 001840E0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801871A4 001840E4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801871A8 001840E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801871AC 001840EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801871B0 001840F0  7D 89 03 A6 */	mtctr r12
/* 801871B4 001840F4  4E 80 04 21 */	bctrl 
/* 801871B8 001840F8  7C 64 1B 78 */	mr r4, r3
/* 801871BC 001840FC  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801871C0 00184100  81 83 00 00 */	lwz r12, 0(r3)
/* 801871C4 00184104  81 8C 00 08 */	lwz r12, 8(r12)
/* 801871C8 00184108  7D 89 03 A6 */	mtctr r12
/* 801871CC 0018410C  4E 80 04 21 */	bctrl 
/* 801871D0 00184110  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801871D4 00184114  40 82 01 38 */	bne .L_8018730C
/* 801871D8 00184118  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801871DC 0018411C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801871E0 00184120  81 83 00 00 */	lwz r12, 0(r3)
/* 801871E4 00184124  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801871E8 00184128  7D 89 03 A6 */	mtctr r12
/* 801871EC 0018412C  4E 80 04 21 */	bctrl 
/* 801871F0 00184130  90 61 00 18 */	stw r3, 0x18(r1)
.L_801871F4:
/* 801871F4 00184134  81 81 00 14 */	lwz r12, 0x14(r1)
/* 801871F8 00184138  38 61 00 14 */	addi r3, r1, 0x14
/* 801871FC 0018413C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80187200 00184140  7D 89 03 A6 */	mtctr r12
/* 80187204 00184144  4E 80 04 21 */	bctrl 
/* 80187208 00184148  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018720C 0018414C  41 82 FF 94 */	beq .L_801871A0
/* 80187210 00184150  48 00 00 FC */	b .L_8018730C
.L_80187214:
/* 80187214 00184154  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80187218 00184158  81 83 00 00 */	lwz r12, 0(r3)
/* 8018721C 0018415C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80187220 00184160  7D 89 03 A6 */	mtctr r12
/* 80187224 00184164  4E 80 04 21 */	bctrl 
/* 80187228 00184168  7C 60 1B 78 */	mr r0, r3
/* 8018722C 0018416C  7C 1F 03 78 */	mr r31, r0
/* 80187230 00184170  4B FC 0C 19 */	bl getCurrActionID__Q24Game4PikiFv
/* 80187234 00184174  2C 03 00 00 */	cmpwi r3, 0
/* 80187238 00184178  40 82 00 18 */	bne .L_80187250
/* 8018723C 0018417C  7F E3 FB 78 */	mr r3, r31
/* 80187240 00184180  4B FC 0B D5 */	bl getCurrAction__Q24Game4PikiFv
/* 80187244 00184184  28 03 00 00 */	cmplwi r3, 0
/* 80187248 00184188  41 82 00 08 */	beq .L_80187250
/* 8018724C 0018418C  48 01 5C 25 */	bl startSort__Q26PikiAI12ActFormationFv
.L_80187250:
/* 80187250 00184190  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80187254 00184194  28 00 00 00 */	cmplwi r0, 0
/* 80187258 00184198  40 82 00 24 */	bne .L_8018727C
/* 8018725C 0018419C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80187260 001841A0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80187264 001841A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80187268 001841A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8018726C 001841AC  7D 89 03 A6 */	mtctr r12
/* 80187270 001841B0  4E 80 04 21 */	bctrl 
/* 80187274 001841B4  90 61 00 18 */	stw r3, 0x18(r1)
/* 80187278 001841B8  48 00 00 94 */	b .L_8018730C
.L_8018727C:
/* 8018727C 001841BC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80187280 001841C0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80187284 001841C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80187288 001841C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8018728C 001841CC  7D 89 03 A6 */	mtctr r12
/* 80187290 001841D0  4E 80 04 21 */	bctrl 
/* 80187294 001841D4  90 61 00 18 */	stw r3, 0x18(r1)
/* 80187298 001841D8  48 00 00 58 */	b .L_801872F0
.L_8018729C:
/* 8018729C 001841DC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801872A0 001841E0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801872A4 001841E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801872A8 001841E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801872AC 001841EC  7D 89 03 A6 */	mtctr r12
/* 801872B0 001841F0  4E 80 04 21 */	bctrl 
/* 801872B4 001841F4  7C 64 1B 78 */	mr r4, r3
/* 801872B8 001841F8  80 61 00 20 */	lwz r3, 0x20(r1)
/* 801872BC 001841FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801872C0 00184200  81 8C 00 08 */	lwz r12, 8(r12)
/* 801872C4 00184204  7D 89 03 A6 */	mtctr r12
/* 801872C8 00184208  4E 80 04 21 */	bctrl 
/* 801872CC 0018420C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801872D0 00184210  40 82 00 3C */	bne .L_8018730C
/* 801872D4 00184214  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801872D8 00184218  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801872DC 0018421C  81 83 00 00 */	lwz r12, 0(r3)
/* 801872E0 00184220  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801872E4 00184224  7D 89 03 A6 */	mtctr r12
/* 801872E8 00184228  4E 80 04 21 */	bctrl 
/* 801872EC 0018422C  90 61 00 18 */	stw r3, 0x18(r1)
.L_801872F0:
/* 801872F0 00184230  81 81 00 14 */	lwz r12, 0x14(r1)
/* 801872F4 00184234  38 61 00 14 */	addi r3, r1, 0x14
/* 801872F8 00184238  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801872FC 0018423C  7D 89 03 A6 */	mtctr r12
/* 80187300 00184240  4E 80 04 21 */	bctrl 
/* 80187304 00184244  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80187308 00184248  41 82 FF 94 */	beq .L_8018729C
.L_8018730C:
/* 8018730C 0018424C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80187310 00184250  81 83 00 00 */	lwz r12, 0(r3)
/* 80187314 00184254  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80187318 00184258  7D 89 03 A6 */	mtctr r12
/* 8018731C 0018425C  4E 80 04 21 */	bctrl 
/* 80187320 00184260  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80187324 00184264  7C 04 18 40 */	cmplw r4, r3
/* 80187328 00184268  40 82 FE EC */	bne .L_80187214
/* 8018732C 0018426C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80187330 00184270  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80187334 00184274  7C 08 03 A6 */	mtlr r0
/* 80187338 00184278  38 21 00 40 */	addi r1, r1, 0x40
/* 8018733C 0018427C  4E 80 00 20 */	blr 
.endfn sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi

.fn cleanup__Q24Game18NaviThrowWaitStateFPQ24Game4Navi, global
/* 80187340 00184280  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80187344 00184284  7C 08 02 A6 */	mflr r0
/* 80187348 00184288  38 A0 00 00 */	li r5, 0
/* 8018734C 0018428C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80187350 00184290  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80187354 00184294  7C 9F 23 78 */	mr r31, r4
/* 80187358 00184298  38 80 28 6B */	li r4, 0x286b
/* 8018735C 0018429C  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80187360 001842A0  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80187364 001842A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80187368 001842A8  7D 89 03 A6 */	mtctr r12
/* 8018736C 001842AC  4E 80 04 21 */	bctrl 
/* 80187370 001842B0  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80187374 001842B4  38 80 28 02 */	li r4, 0x2802
/* 80187378 001842B8  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 8018737C 001842BC  38 A0 00 00 */	li r5, 0
/* 80187380 001842C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80187384 001842C4  7D 89 03 A6 */	mtctr r12
/* 80187388 001842C8  4E 80 04 21 */	bctrl 
/* 8018738C 001842CC  7F E3 FB 78 */	mr r3, r31
/* 80187390 001842D0  4B FB 5D 5D */	bl clearDoAnimCallback__Q24Game8FakePikiFv
/* 80187394 001842D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80187398 001842D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018739C 001842DC  7C 08 03 A6 */	mtlr r0
/* 801873A0 001842E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801873A4 001842E4  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game18NaviThrowWaitStateFPQ24Game4Navi

.fn init__Q24Game14NaviThrowStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 801873A8 001842E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801873AC 001842EC  7C 08 02 A6 */	mflr r0
/* 801873B0 001842F0  C0 02 A9 04 */	lfs f0, lbl_80518C64@sda21(r2)
/* 801873B4 001842F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801873B8 001842F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801873BC 001842FC  7C BF 2B 78 */	mr r31, r5
/* 801873C0 00184300  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801873C4 00184304  7C 9E 23 78 */	mr r30, r4
/* 801873C8 00184308  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801873CC 0018430C  7C 7D 1B 79 */	or. r29, r3, r3
/* 801873D0 00184310  D0 04 02 34 */	stfs f0, 0x234(r4)
/* 801873D4 00184314  7F A6 EB 78 */	mr r6, r29
/* 801873D8 00184318  41 82 00 08 */	beq .L_801873E0
/* 801873DC 0018431C  80 DD 00 10 */	lwz r6, 0x10(r29)
.L_801873E0:
/* 801873E0 00184320  81 9E 00 00 */	lwz r12, 0(r30)
/* 801873E4 00184324  7F C3 F3 78 */	mr r3, r30
/* 801873E8 00184328  38 80 00 21 */	li r4, 0x21
/* 801873EC 0018432C  38 A0 00 21 */	li r5, 0x21
/* 801873F0 00184330  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801873F4 00184334  38 E0 00 00 */	li r7, 0
/* 801873F8 00184338  7D 89 03 A6 */	mtctr r12
/* 801873FC 0018433C  4E 80 04 21 */	bctrl 
/* 80187400 00184340  7F C3 F3 78 */	mr r3, r30
/* 80187404 00184344  4B FB 5B 51 */	bl enableMotionBlend__Q24Game8FakePikiFv
/* 80187408 00184348  38 00 00 00 */	li r0, 0
/* 8018740C 0018434C  7F C3 F3 78 */	mr r3, r30
/* 80187410 00184350  98 1D 00 14 */	stb r0, 0x14(r29)
/* 80187414 00184354  38 80 00 21 */	li r4, 0x21
/* 80187418 00184358  98 1D 00 15 */	stb r0, 0x15(r29)
/* 8018741C 0018435C  93 DD 00 1C */	stw r30, 0x1c(r29)
/* 80187420 00184360  80 1F 00 00 */	lwz r0, 0(r31)
/* 80187424 00184364  90 1D 00 18 */	stw r0, 0x18(r29)
/* 80187428 00184368  4B FB 5B 05 */	bl assertMotion__Q24Game8FakePikiFi
/* 8018742C 0018436C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80187430 00184370  40 82 00 24 */	bne .L_80187454
/* 80187434 00184374  7F A3 EB 78 */	mr r3, r29
/* 80187438 00184378  7F C4 F3 78 */	mr r4, r30
/* 8018743C 0018437C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80187440 00184380  38 A0 00 00 */	li r5, 0
/* 80187444 00184384  38 C0 00 00 */	li r6, 0
/* 80187448 00184388  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018744C 0018438C  7D 89 03 A6 */	mtctr r12
/* 80187450 00184390  4E 80 04 21 */	bctrl 
.L_80187454:
/* 80187454 00184394  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80187458 00184398  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018745C 0018439C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80187460 001843A0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80187464 001843A4  7C 08 03 A6 */	mtlr r0
/* 80187468 001843A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8018746C 001843AC  4E 80 00 20 */	blr 
.endfn init__Q24Game14NaviThrowStateFPQ24Game4NaviPQ24Game8StateArg

.fn onKeyEvent__Q24Game14NaviThrowStateFRCQ28SysShape8KeyEvent, global
/* 80187470 001843B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80187474 001843B4  7C 08 02 A6 */	mflr r0
/* 80187478 001843B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018747C 001843BC  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80187480 001843C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80187484 001843C4  7C 7F 1B 78 */	mr r31, r3
/* 80187488 001843C8  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8018748C 001843CC  41 82 00 88 */	beq .L_80187514
/* 80187490 001843D0  40 80 00 A0 */	bge .L_80187530
/* 80187494 001843D4  2C 00 00 02 */	cmpwi r0, 2
/* 80187498 001843D8  41 82 00 08 */	beq .L_801874A0
/* 8018749C 001843DC  48 00 00 94 */	b .L_80187530
.L_801874A0:
/* 801874A0 001843E0  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801874A4 001843E4  4B FC 1F 81 */	bl isThrowable__Q24Game4PikiFv
/* 801874A8 001843E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801874AC 001843EC  40 82 00 10 */	bne .L_801874BC
/* 801874B0 001843F0  38 00 00 01 */	li r0, 1
/* 801874B4 001843F4  98 1F 00 14 */	stb r0, 0x14(r31)
/* 801874B8 001843F8  48 00 00 78 */	b .L_80187530
.L_801874BC:
/* 801874BC 001843FC  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 801874C0 00184400  38 A1 00 08 */	addi r5, r1, 8
/* 801874C4 00184404  80 83 02 8C */	lwz r4, 0x28c(r3)
/* 801874C8 00184408  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 801874CC 0018440C  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 801874D0 00184410  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801874D4 00184414  D0 01 00 08 */	stfs f0, 8(r1)
/* 801874D8 00184418  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801874DC 0018441C  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 801874E0 00184420  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 801874E4 00184424  4B FB F5 71 */	bl "throwPiki__Q24Game4NaviFPQ24Game4PikiR10Vector3<f>"
/* 801874E8 00184428  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 801874EC 0018442C  38 A0 00 06 */	li r5, 6
/* 801874F0 00184430  38 C0 00 00 */	li r6, 0
/* 801874F4 00184434  80 64 02 8C */	lwz r3, 0x28c(r4)
/* 801874F8 00184438  81 83 00 00 */	lwz r12, 0(r3)
/* 801874FC 0018443C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80187500 00184440  7D 89 03 A6 */	mtctr r12
/* 80187504 00184444  4E 80 04 21 */	bctrl 
/* 80187508 00184448  38 00 00 01 */	li r0, 1
/* 8018750C 0018444C  98 1F 00 14 */	stb r0, 0x14(r31)
/* 80187510 00184450  48 00 00 20 */	b .L_80187530
.L_80187514:
/* 80187514 00184454  81 83 00 00 */	lwz r12, 0(r3)
/* 80187518 00184458  38 A0 00 00 */	li r5, 0
/* 8018751C 0018445C  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 80187520 00184460  38 C0 00 00 */	li r6, 0
/* 80187524 00184464  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80187528 00184468  7D 89 03 A6 */	mtctr r12
/* 8018752C 0018446C  4E 80 04 21 */	bctrl 
.L_80187530:
/* 80187530 00184470  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80187534 00184474  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80187538 00184478  7C 08 03 A6 */	mtlr r0
/* 8018753C 0018447C  38 21 00 20 */	addi r1, r1, 0x20
/* 80187540 00184480  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game14NaviThrowStateFRCQ28SysShape8KeyEvent

.fn exec__Q24Game14NaviThrowStateFPQ24Game4Navi, global
/* 80187544 00184484  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80187548 00184488  7C 08 02 A6 */	mflr r0
/* 8018754C 0018448C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80187550 00184490  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80187554 00184494  7C 9F 23 78 */	mr r31, r4
/* 80187558 00184498  93 C1 00 08 */	stw r30, 8(r1)
/* 8018755C 0018449C  7C 7E 1B 78 */	mr r30, r3
/* 80187560 001844A0  80 04 02 78 */	lwz r0, 0x278(r4)
/* 80187564 001844A4  28 00 00 00 */	cmplwi r0, 0
/* 80187568 001844A8  41 82 00 B4 */	beq .L_8018761C
/* 8018756C 001844AC  7F E3 FB 78 */	mr r3, r31
/* 80187570 001844B0  4B FB C5 95 */	bl control__Q24Game4NaviFv
/* 80187574 001844B4  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 80187578 001844B8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8018757C 001844BC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80187580 001844C0  41 82 00 0C */	beq .L_8018758C
/* 80187584 001844C4  38 00 00 01 */	li r0, 1
/* 80187588 001844C8  98 1E 00 15 */	stb r0, 0x15(r30)
.L_8018758C:
/* 8018758C 001844CC  7F E3 FB 78 */	mr r3, r31
/* 80187590 001844D0  4B FB F1 DD */	bl findNextThrowPiki__Q24Game4NaviFv
/* 80187594 001844D4  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 80187598 001844D8  28 00 00 00 */	cmplwi r0, 0
/* 8018759C 001844DC  41 82 00 44 */	beq .L_801875E0
/* 801875A0 001844E0  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 801875A4 001844E4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801875A8 001844E8  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 801875AC 001844EC  41 82 00 34 */	beq .L_801875E0
/* 801875B0 001844F0  7F E3 FB 78 */	mr r3, r31
/* 801875B4 001844F4  4B FB D5 9D */	bl throwable__Q24Game4NaviFv
/* 801875B8 001844F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801875BC 001844FC  41 82 00 24 */	beq .L_801875E0
/* 801875C0 00184500  7F C3 F3 78 */	mr r3, r30
/* 801875C4 00184504  7F E4 FB 78 */	mr r4, r31
/* 801875C8 00184508  81 9E 00 00 */	lwz r12, 0(r30)
/* 801875CC 0018450C  38 A0 00 06 */	li r5, 6
/* 801875D0 00184510  38 C0 00 00 */	li r6, 0
/* 801875D4 00184514  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801875D8 00184518  7D 89 03 A6 */	mtctr r12
/* 801875DC 0018451C  4E 80 04 21 */	bctrl 
.L_801875E0:
/* 801875E0 00184520  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 801875E4 00184524  28 00 00 00 */	cmplwi r0, 0
/* 801875E8 00184528  41 82 00 34 */	beq .L_8018761C
/* 801875EC 0018452C  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 801875F0 00184530  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801875F4 00184534  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 801875F8 00184538  41 82 00 24 */	beq .L_8018761C
/* 801875FC 0018453C  7F C3 F3 78 */	mr r3, r30
/* 80187600 00184540  7F E4 FB 78 */	mr r4, r31
/* 80187604 00184544  81 9E 00 00 */	lwz r12, 0(r30)
/* 80187608 00184548  38 A0 00 04 */	li r5, 4
/* 8018760C 0018454C  38 C0 00 00 */	li r6, 0
/* 80187610 00184550  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80187614 00184554  7D 89 03 A6 */	mtctr r12
/* 80187618 00184558  4E 80 04 21 */	bctrl 
.L_8018761C:
/* 8018761C 0018455C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80187620 00184560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80187624 00184564  83 C1 00 08 */	lwz r30, 8(r1)
/* 80187628 00184568  7C 08 03 A6 */	mtlr r0
/* 8018762C 0018456C  38 21 00 10 */	addi r1, r1, 0x10
/* 80187630 00184570  4E 80 00 20 */	blr 
.endfn exec__Q24Game14NaviThrowStateFPQ24Game4Navi

.fn cleanup__Q24Game14NaviThrowStateFPQ24Game4Navi, global
/* 80187634 00184574  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game14NaviThrowStateFPQ24Game4Navi

.fn init__Q24Game15NaviPelletStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80187638 00184578  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8018763C 0018457C  7C 08 02 A6 */	mflr r0
/* 80187640 00184580  90 01 00 74 */	stw r0, 0x74(r1)
/* 80187644 00184584  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80187648 00184588  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8018764C 0018458C  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80187650 00184590  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80187654 00184594  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 80187658 00184598  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 8018765C 0018459C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80187660 001845A0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80187664 001845A4  7C 9F 23 79 */	or. r31, r4, r4
/* 80187668 001845A8  38 00 00 00 */	li r0, 0
/* 8018766C 001845AC  98 03 00 10 */	stb r0, 0x10(r3)
/* 80187670 001845B0  7C 7E 1B 78 */	mr r30, r3
/* 80187674 001845B4  7F E6 FB 78 */	mr r6, r31
/* 80187678 001845B8  41 82 00 08 */	beq .L_80187680
/* 8018767C 001845BC  38 C6 01 78 */	addi r6, r6, 0x178
.L_80187680:
/* 80187680 001845C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80187684 001845C4  7F E3 FB 78 */	mr r3, r31
/* 80187688 001845C8  38 80 00 17 */	li r4, 0x17
/* 8018768C 001845CC  38 A0 00 17 */	li r5, 0x17
/* 80187690 001845D0  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80187694 001845D4  38 E0 00 00 */	li r7, 0
/* 80187698 001845D8  7D 89 03 A6 */	mtctr r12
/* 8018769C 001845DC  4E 80 04 21 */	bctrl 
/* 801876A0 001845E0  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 801876A4 001845E4  28 00 00 00 */	cmplwi r0, 0
/* 801876A8 001845E8  40 82 00 24 */	bne .L_801876CC
/* 801876AC 001845EC  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 801876B0 001845F0  38 80 08 97 */	li r4, 0x897
/* 801876B4 001845F4  38 A0 00 00 */	li r5, 0
/* 801876B8 001845F8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801876BC 001845FC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801876C0 00184600  7D 89 03 A6 */	mtctr r12
/* 801876C4 00184604  4E 80 04 21 */	bctrl 
/* 801876C8 00184608  48 00 00 50 */	b .L_80187718
.L_801876CC:
/* 801876CC 0018460C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801876D0 00184610  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 801876D4 00184614  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801876D8 00184618  41 82 00 24 */	beq .L_801876FC
/* 801876DC 0018461C  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 801876E0 00184620  38 80 08 9D */	li r4, 0x89d
/* 801876E4 00184624  38 A0 00 00 */	li r5, 0
/* 801876E8 00184628  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801876EC 0018462C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801876F0 00184630  7D 89 03 A6 */	mtctr r12
/* 801876F4 00184634  4E 80 04 21 */	bctrl 
/* 801876F8 00184638  48 00 00 20 */	b .L_80187718
.L_801876FC:
/* 801876FC 0018463C  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80187700 00184640  38 80 08 98 */	li r4, 0x898
/* 80187704 00184644  38 A0 00 00 */	li r5, 0
/* 80187708 00184648  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8018770C 0018464C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80187710 00184650  7D 89 03 A6 */	mtctr r12
/* 80187714 00184654  4E 80 04 21 */	bctrl 
.L_80187718:
/* 80187718 00184658  7F E4 FB 78 */	mr r4, r31
/* 8018771C 0018465C  38 61 00 08 */	addi r3, r1, 8
/* 80187720 00184660  81 9F 00 00 */	lwz r12, 0(r31)
/* 80187724 00184664  81 8C 00 08 */	lwz r12, 8(r12)
/* 80187728 00184668  7D 89 03 A6 */	mtctr r12
/* 8018772C 0018466C  4E 80 04 21 */	bctrl 
/* 80187730 00184670  C3 C1 00 0C */	lfs f30, 0xc(r1)
/* 80187734 00184674  38 61 00 14 */	addi r3, r1, 0x14
/* 80187738 00184678  C0 02 A8 C4 */	lfs f0, lbl_80518C24@sda21(r2)
/* 8018773C 0018467C  C3 E1 00 08 */	lfs f31, 8(r1)
/* 80187740 00184680  EF DE 00 2A */	fadds f30, f30, f0
/* 80187744 00184684  C3 A1 00 10 */	lfs f29, 0x10(r1)
/* 80187748 00184688  4B FD E4 05 */	bl __ct__Q24Game13PelletViewArgFv
/* 8018774C 0018468C  38 1F 01 38 */	addi r0, r31, 0x138
/* 80187750 00184690  38 62 A9 68 */	addi r3, r2, lbl_80518CC8@sda21
/* 80187754 00184694  90 61 00 14 */	stw r3, 0x14(r1)
/* 80187758 00184698  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 8018775C 0018469C  D3 C1 00 1C */	stfs f30, 0x1c(r1)
/* 80187760 001846A0  D3 A1 00 20 */	stfs f29, 0x20(r1)
/* 80187764 001846A4  93 E1 00 28 */	stw r31, 0x28(r1)
/* 80187768 001846A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018776C 001846AC  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 80187770 001846B0  28 00 00 00 */	cmplwi r0, 0
/* 80187774 001846B4  40 82 00 18 */	bne .L_8018778C
/* 80187778 001846B8  C0 02 A9 70 */	lfs f0, lbl_80518CD0@sda21(r2)
/* 8018777C 001846BC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80187780 001846C0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80187784 001846C4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80187788 001846C8  48 00 00 14 */	b .L_8018779C
.L_8018778C:
/* 8018778C 001846CC  C0 02 A9 74 */	lfs f0, lbl_80518CD4@sda21(r2)
/* 80187790 001846D0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80187794 001846D4  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80187798 001846D8  D0 01 00 34 */	stfs f0, 0x34(r1)
.L_8018779C:
/* 8018779C 001846DC  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 801877A0 001846E0  38 81 00 14 */	addi r4, r1, 0x14
/* 801877A4 001846E4  4B FD E3 DD */	bl becomePellet__Q24Game10PelletViewFPQ24Game13PelletViewArg
/* 801877A8 001846E8  7F E3 FB 78 */	mr r3, r31
/* 801877AC 001846EC  38 80 00 00 */	li r4, 0
/* 801877B0 001846F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801877B4 001846F4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801877B8 001846F8  7D 89 03 A6 */	mtctr r12
/* 801877BC 001846FC  4E 80 04 21 */	bctrl 
/* 801877C0 00184700  38 00 00 00 */	li r0, 0
/* 801877C4 00184704  90 1E 00 14 */	stw r0, 0x14(r30)
/* 801877C8 00184708  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 801877CC 0018470C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 801877D0 00184710  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 801877D4 00184714  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 801877D8 00184718  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 801877DC 0018471C  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 801877E0 00184720  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801877E4 00184724  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801877E8 00184728  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801877EC 0018472C  7C 08 03 A6 */	mtlr r0
/* 801877F0 00184730  38 21 00 70 */	addi r1, r1, 0x70
/* 801877F4 00184734  4E 80 00 20 */	blr 
.endfn init__Q24Game15NaviPelletStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game15NaviPelletStateFPQ24Game4Navi, global
/* 801877F8 00184738  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801877FC 0018473C  7C 08 02 A6 */	mflr r0
/* 80187800 00184740  90 01 00 34 */	stw r0, 0x34(r1)
/* 80187804 00184744  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80187808 00184748  7C 9F 23 78 */	mr r31, r4
/* 8018780C 0018474C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80187810 00184750  7C 7E 1B 78 */	mr r30, r3
/* 80187814 00184754  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80187818 00184758  93 81 00 20 */	stw r28, 0x20(r1)
/* 8018781C 0018475C  80 A4 02 50 */	lwz r5, 0x250(r4)
/* 80187820 00184760  80 05 00 04 */	lwz r0, 4(r5)
/* 80187824 00184764  28 00 00 00 */	cmplwi r0, 0
/* 80187828 00184768  40 82 00 20 */	bne .L_80187848
/* 8018782C 0018476C  81 83 00 00 */	lwz r12, 0(r3)
/* 80187830 00184770  38 A0 00 00 */	li r5, 0
/* 80187834 00184774  38 C0 00 00 */	li r6, 0
/* 80187838 00184778  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018783C 0018477C  7D 89 03 A6 */	mtctr r12
/* 80187840 00184780  4E 80 04 21 */	bctrl 
/* 80187844 00184784  48 00 03 8C */	b .L_80187BD0
.L_80187848:
/* 80187848 00184788  80 1F 02 78 */	lwz r0, 0x278(r31)
/* 8018784C 0018478C  28 00 00 00 */	cmplwi r0, 0
/* 80187850 00184790  41 82 03 80 */	beq .L_80187BD0
/* 80187854 00184794  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80187858 00184798  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8018785C 0018479C  2C 00 00 00 */	cmpwi r0, 0
/* 80187860 001847A0  40 82 03 70 */	bne .L_80187BD0
/* 80187864 001847A4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80187868 001847A8  48 02 D7 59 */	bl paused_soft__Q24Game10GameSystemFv
/* 8018786C 001847AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80187870 001847B0  40 82 01 C8 */	bne .L_80187A38
/* 80187874 001847B4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80187878 001847B8  38 60 00 00 */	li r3, 0
/* 8018787C 001847BC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80187880 001847C0  2C 00 00 01 */	cmpwi r0, 1
/* 80187884 001847C4  41 82 00 0C */	beq .L_80187890
/* 80187888 001847C8  2C 00 00 03 */	cmpwi r0, 3
/* 8018788C 001847CC  40 82 00 08 */	bne .L_80187894
.L_80187890:
/* 80187890 001847D0  38 60 00 01 */	li r3, 1
.L_80187894:
/* 80187894 001847D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80187898 001847D8  40 82 01 A0 */	bne .L_80187A38
/* 8018789C 001847DC  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 801878A0 001847E0  28 03 00 00 */	cmplwi r3, 0
/* 801878A4 001847E4  41 82 01 94 */	beq .L_80187A38
/* 801878A8 001847E8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801878AC 001847EC  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 801878B0 001847F0  41 82 01 88 */	beq .L_80187A38
/* 801878B4 001847F4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801878B8 001847F8  38 80 00 25 */	li r4, 0x25
/* 801878BC 001847FC  48 05 FB 25 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801878C0 00184800  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801878C4 00184804  41 82 01 74 */	beq .L_80187A38
/* 801878C8 00184808  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801878CC 0018480C  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 801878D0 00184810  81 83 00 00 */	lwz r12, 0(r3)
/* 801878D4 00184814  20 80 00 01 */	subfic r4, r0, 1
/* 801878D8 00184818  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801878DC 0018481C  7D 89 03 A6 */	mtctr r12
/* 801878E0 00184820  4E 80 04 21 */	bctrl 
/* 801878E4 00184824  7C 7C 1B 78 */	mr r28, r3
/* 801878E8 00184828  4B FB 9B 5D */	bl getStateID__Q24Game4NaviFv
/* 801878EC 0018482C  7C 7D 1B 78 */	mr r29, r3
/* 801878F0 00184830  7F 83 E3 78 */	mr r3, r28
/* 801878F4 00184834  81 9C 00 00 */	lwz r12, 0(r28)
/* 801878F8 00184838  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801878FC 0018483C  7D 89 03 A6 */	mtctr r12
/* 80187900 00184840  4E 80 04 21 */	bctrl 
/* 80187904 00184844  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80187908 00184848  41 82 01 30 */	beq .L_80187A38
/* 8018790C 0018484C  2C 1D 00 08 */	cmpwi r29, 8
/* 80187910 00184850  41 82 01 28 */	beq .L_80187A38
/* 80187914 00184854  2C 1D 00 09 */	cmpwi r29, 9
/* 80187918 00184858  41 82 01 20 */	beq .L_80187A38
/* 8018791C 0018485C  2C 1D 00 02 */	cmpwi r29, 2
/* 80187920 00184860  41 82 01 18 */	beq .L_80187A38
/* 80187924 00184864  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80187928 00184868  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8018792C 0018486C  4B FC 5F 39 */	bl pmTogglePlayer__Q24Game15BaseGameSectionFv
/* 80187930 00184870  A0 1C 02 DC */	lhz r0, 0x2dc(r28)
/* 80187934 00184874  28 00 00 00 */	cmplwi r0, 0
/* 80187938 00184878  40 82 00 18 */	bne .L_80187950
/* 8018793C 0018487C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80187940 00184880  38 80 18 8D */	li r4, 0x188d
/* 80187944 00184884  38 A0 00 00 */	li r5, 0
/* 80187948 00184888  48 1B 0C E9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8018794C 0018488C  48 00 00 38 */	b .L_80187984
.L_80187950:
/* 80187950 00184890  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80187954 00184894  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80187958 00184898  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8018795C 0018489C  41 82 00 18 */	beq .L_80187974
/* 80187960 001848A0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80187964 001848A4  38 80 18 8F */	li r4, 0x188f
/* 80187968 001848A8  38 A0 00 00 */	li r5, 0
/* 8018796C 001848AC  48 1B 0C C5 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80187970 001848B0  48 00 00 14 */	b .L_80187984
.L_80187974:
/* 80187974 001848B4  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80187978 001848B8  38 80 18 8E */	li r4, 0x188e
/* 8018797C 001848BC  38 A0 00 00 */	li r5, 0
/* 80187980 001848C0  48 1B 0C B1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80187984:
/* 80187984 001848C4  A0 1C 02 DC */	lhz r0, 0x2dc(r28)
/* 80187988 001848C8  28 00 00 00 */	cmplwi r0, 0
/* 8018798C 001848CC  40 82 00 24 */	bne .L_801879B0
/* 80187990 001848D0  80 7C 02 6C */	lwz r3, 0x26c(r28)
/* 80187994 001848D4  38 80 08 A6 */	li r4, 0x8a6
/* 80187998 001848D8  38 A0 00 00 */	li r5, 0
/* 8018799C 001848DC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801879A0 001848E0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801879A4 001848E4  7D 89 03 A6 */	mtctr r12
/* 801879A8 001848E8  4E 80 04 21 */	bctrl 
/* 801879AC 001848EC  48 00 00 50 */	b .L_801879FC
.L_801879B0:
/* 801879B0 001848F0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801879B4 001848F4  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 801879B8 001848F8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801879BC 001848FC  41 82 00 24 */	beq .L_801879E0
/* 801879C0 00184900  80 7C 02 6C */	lwz r3, 0x26c(r28)
/* 801879C4 00184904  38 80 08 A8 */	li r4, 0x8a8
/* 801879C8 00184908  38 A0 00 00 */	li r5, 0
/* 801879CC 0018490C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801879D0 00184910  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801879D4 00184914  7D 89 03 A6 */	mtctr r12
/* 801879D8 00184918  4E 80 04 21 */	bctrl 
/* 801879DC 0018491C  48 00 00 20 */	b .L_801879FC
.L_801879E0:
/* 801879E0 00184920  80 7C 02 6C */	lwz r3, 0x26c(r28)
/* 801879E4 00184924  38 80 08 A7 */	li r4, 0x8a7
/* 801879E8 00184928  38 A0 00 00 */	li r5, 0
/* 801879EC 0018492C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801879F0 00184930  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801879F4 00184934  7D 89 03 A6 */	mtctr r12
/* 801879F8 00184938  4E 80 04 21 */	bctrl 
.L_801879FC:
/* 801879FC 0018493C  80 7C 02 74 */	lwz r3, 0x274(r28)
/* 80187A00 00184940  81 83 00 00 */	lwz r12, 0(r3)
/* 80187A04 00184944  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80187A08 00184948  7D 89 03 A6 */	mtctr r12
/* 80187A0C 0018494C  4E 80 04 21 */	bctrl 
/* 80187A10 00184950  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80187A14 00184954  41 82 00 24 */	beq .L_80187A38
/* 80187A18 00184958  80 7C 02 70 */	lwz r3, 0x270(r28)
/* 80187A1C 0018495C  7F 84 E3 78 */	mr r4, r28
/* 80187A20 00184960  38 A0 00 03 */	li r5, 3
/* 80187A24 00184964  38 C0 00 00 */	li r6, 0
/* 80187A28 00184968  81 83 00 00 */	lwz r12, 0(r3)
/* 80187A2C 0018496C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80187A30 00184970  7D 89 03 A6 */	mtctr r12
/* 80187A34 00184974  4E 80 04 21 */	bctrl 
.L_80187A38:
/* 80187A38 00184978  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80187A3C 0018497C  2C 00 00 01 */	cmpwi r0, 1
/* 80187A40 00184980  41 82 00 0C */	beq .L_80187A4C
/* 80187A44 00184984  2C 00 00 00 */	cmpwi r0, 0
/* 80187A48 00184988  40 82 00 EC */	bne .L_80187B34
.L_80187A4C:
/* 80187A4C 0018498C  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 80187A50 00184990  28 03 00 00 */	cmplwi r3, 0
/* 80187A54 00184994  41 82 00 E0 */	beq .L_80187B34
/* 80187A58 00184998  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80187A5C 0018499C  70 00 07 0F */	andi. r0, r0, 0x70f
/* 80187A60 001849A0  41 82 00 D4 */	beq .L_80187B34
/* 80187A64 001849A4  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 80187A68 001849A8  28 00 00 00 */	cmplwi r0, 0
/* 80187A6C 001849AC  41 82 00 18 */	beq .L_80187A84
/* 80187A70 001849B0  C0 02 A9 08 */	lfs f0, lbl_80518C68@sda21(r2)
/* 80187A74 001849B4  7F E3 FB 78 */	mr r3, r31
/* 80187A78 001849B8  D0 1F 02 34 */	stfs f0, 0x234(r31)
/* 80187A7C 001849BC  4B FB 56 45 */	bl finishMotion__Q24Game8FakePikiFv
/* 80187A80 001849C0  48 00 00 AC */	b .L_80187B2C
.L_80187A84:
/* 80187A84 001849C4  28 1F 00 00 */	cmplwi r31, 0
/* 80187A88 001849C8  7F E6 FB 78 */	mr r6, r31
/* 80187A8C 001849CC  41 82 00 08 */	beq .L_80187A94
/* 80187A90 001849D0  38 DF 01 78 */	addi r6, r31, 0x178
.L_80187A94:
/* 80187A94 001849D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80187A98 001849D8  7F E3 FB 78 */	mr r3, r31
/* 80187A9C 001849DC  38 80 00 0E */	li r4, 0xe
/* 80187AA0 001849E0  38 A0 00 0E */	li r5, 0xe
/* 80187AA4 001849E4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80187AA8 001849E8  38 E0 00 00 */	li r7, 0
/* 80187AAC 001849EC  7D 89 03 A6 */	mtctr r12
/* 80187AB0 001849F0  4E 80 04 21 */	bctrl 
/* 80187AB4 001849F4  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 80187AB8 001849F8  28 00 00 00 */	cmplwi r0, 0
/* 80187ABC 001849FC  40 82 00 24 */	bne .L_80187AE0
/* 80187AC0 00184A00  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80187AC4 00184A04  38 80 08 99 */	li r4, 0x899
/* 80187AC8 00184A08  38 A0 00 00 */	li r5, 0
/* 80187ACC 00184A0C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80187AD0 00184A10  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80187AD4 00184A14  7D 89 03 A6 */	mtctr r12
/* 80187AD8 00184A18  4E 80 04 21 */	bctrl 
/* 80187ADC 00184A1C  48 00 00 50 */	b .L_80187B2C
.L_80187AE0:
/* 80187AE0 00184A20  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80187AE4 00184A24  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80187AE8 00184A28  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80187AEC 00184A2C  41 82 00 24 */	beq .L_80187B10
/* 80187AF0 00184A30  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80187AF4 00184A34  38 80 08 9E */	li r4, 0x89e
/* 80187AF8 00184A38  38 A0 00 00 */	li r5, 0
/* 80187AFC 00184A3C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80187B00 00184A40  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80187B04 00184A44  7D 89 03 A6 */	mtctr r12
/* 80187B08 00184A48  4E 80 04 21 */	bctrl 
/* 80187B0C 00184A4C  48 00 00 20 */	b .L_80187B2C
.L_80187B10:
/* 80187B10 00184A50  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80187B14 00184A54  38 80 08 9A */	li r4, 0x89a
/* 80187B18 00184A58  38 A0 00 00 */	li r5, 0
/* 80187B1C 00184A5C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80187B20 00184A60  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80187B24 00184A64  7D 89 03 A6 */	mtctr r12
/* 80187B28 00184A68  4E 80 04 21 */	bctrl 
.L_80187B2C:
/* 80187B2C 00184A6C  38 00 00 02 */	li r0, 2
/* 80187B30 00184A70  90 1E 00 14 */	stw r0, 0x14(r30)
.L_80187B34:
/* 80187B34 00184A74  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80187B38 00184A78  2C 00 00 03 */	cmpwi r0, 3
/* 80187B3C 00184A7C  40 82 00 3C */	bne .L_80187B78
/* 80187B40 00184A80  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80187B44 00184A84  80 63 00 04 */	lwz r3, 4(r3)
/* 80187B48 00184A88  28 03 00 00 */	cmplwi r3, 0
/* 80187B4C 00184A8C  41 82 00 0C */	beq .L_80187B58
/* 80187B50 00184A90  38 80 00 00 */	li r4, 0
/* 80187B54 00184A94  4B FB 35 9D */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80187B58:
/* 80187B58 00184A98  7F C3 F3 78 */	mr r3, r30
/* 80187B5C 00184A9C  7F E4 FB 78 */	mr r4, r31
/* 80187B60 00184AA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80187B64 00184AA4  38 A0 00 00 */	li r5, 0
/* 80187B68 00184AA8  38 C0 00 00 */	li r6, 0
/* 80187B6C 00184AAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80187B70 00184AB0  7D 89 03 A6 */	mtctr r12
/* 80187B74 00184AB4  4E 80 04 21 */	bctrl 
.L_80187B78:
/* 80187B78 00184AB8  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80187B7C 00184ABC  80 83 00 04 */	lwz r4, 4(r3)
/* 80187B80 00184AC0  28 04 00 00 */	cmplwi r4, 0
/* 80187B84 00184AC4  40 82 00 28 */	bne .L_80187BAC
/* 80187B88 00184AC8  7F C3 F3 78 */	mr r3, r30
/* 80187B8C 00184ACC  7F E4 FB 78 */	mr r4, r31
/* 80187B90 00184AD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80187B94 00184AD4  38 A0 00 00 */	li r5, 0
/* 80187B98 00184AD8  38 C0 00 00 */	li r6, 0
/* 80187B9C 00184ADC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80187BA0 00184AE0  7D 89 03 A6 */	mtctr r12
/* 80187BA4 00184AE4  4E 80 04 21 */	bctrl 
/* 80187BA8 00184AE8  48 00 00 28 */	b .L_80187BD0
.L_80187BAC:
/* 80187BAC 00184AEC  81 84 00 00 */	lwz r12, 0(r4)
/* 80187BB0 00184AF0  38 61 00 08 */	addi r3, r1, 8
/* 80187BB4 00184AF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80187BB8 00184AF8  7D 89 03 A6 */	mtctr r12
/* 80187BBC 00184AFC  4E 80 04 21 */	bctrl 
/* 80187BC0 00184B00  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80187BC4 00184B04  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80187BC8 00184B08  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80187BCC 00184B0C  D0 1F 02 08 */	stfs f0, 0x208(r31)
.L_80187BD0:
/* 80187BD0 00184B10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80187BD4 00184B14  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80187BD8 00184B18  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80187BDC 00184B1C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80187BE0 00184B20  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80187BE4 00184B24  7C 08 03 A6 */	mtlr r0
/* 80187BE8 00184B28  38 21 00 30 */	addi r1, r1, 0x30
/* 80187BEC 00184B2C  4E 80 00 20 */	blr 
.endfn exec__Q24Game15NaviPelletStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game15NaviPelletStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 80187BF0 00184B30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80187BF4 00184B34  7C 08 02 A6 */	mflr r0
/* 80187BF8 00184B38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80187BFC 00184B3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80187C00 00184B40  7C BF 2B 78 */	mr r31, r5
/* 80187C04 00184B44  93 C1 00 08 */	stw r30, 8(r1)
/* 80187C08 00184B48  7C 7E 1B 78 */	mr r30, r3
/* 80187C0C 00184B4C  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80187C10 00184B50  28 00 00 00 */	cmplwi r0, 0
/* 80187C14 00184B54  41 82 00 A8 */	beq .L_80187CBC
/* 80187C18 00184B58  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80187C1C 00184B5C  28 00 00 01 */	cmplwi r0, 1
/* 80187C20 00184B60  40 82 00 74 */	bne .L_80187C94
/* 80187C24 00184B64  88 04 01 C4 */	lbz r0, 0x1c4(r4)
/* 80187C28 00184B68  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80187C2C 00184B6C  41 82 00 50 */	beq .L_80187C7C
/* 80187C30 00184B70  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80187C34 00184B74  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80187C38 00184B78  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80187C3C 00184B7C  41 82 00 24 */	beq .L_80187C60
/* 80187C40 00184B80  80 64 02 6C */	lwz r3, 0x26c(r4)
/* 80187C44 00184B84  38 80 08 9E */	li r4, 0x89e
/* 80187C48 00184B88  38 A0 00 00 */	li r5, 0
/* 80187C4C 00184B8C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80187C50 00184B90  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80187C54 00184B94  7D 89 03 A6 */	mtctr r12
/* 80187C58 00184B98  4E 80 04 21 */	bctrl 
/* 80187C5C 00184B9C  48 00 00 20 */	b .L_80187C7C
.L_80187C60:
/* 80187C60 00184BA0  80 64 02 6C */	lwz r3, 0x26c(r4)
/* 80187C64 00184BA4  38 80 08 9A */	li r4, 0x89a
/* 80187C68 00184BA8  38 A0 00 00 */	li r5, 0
/* 80187C6C 00184BAC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80187C70 00184BB0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80187C74 00184BB4  7D 89 03 A6 */	mtctr r12
/* 80187C78 00184BB8  4E 80 04 21 */	bctrl 
.L_80187C7C:
/* 80187C7C 00184BBC  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80187C80 00184BC0  2C 00 00 00 */	cmpwi r0, 0
/* 80187C84 00184BC4  41 82 00 08 */	beq .L_80187C8C
/* 80187C88 00184BC8  48 00 00 0C */	b .L_80187C94
.L_80187C8C:
/* 80187C8C 00184BCC  38 00 00 01 */	li r0, 1
/* 80187C90 00184BD0  90 1E 00 14 */	stw r0, 0x14(r30)
.L_80187C94:
/* 80187C94 00184BD4  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80187C98 00184BD8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80187C9C 00184BDC  40 82 00 68 */	bne .L_80187D04
/* 80187CA0 00184BE0  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80187CA4 00184BE4  2C 00 00 02 */	cmpwi r0, 2
/* 80187CA8 00184BE8  41 82 00 08 */	beq .L_80187CB0
/* 80187CAC 00184BEC  48 00 00 58 */	b .L_80187D04
.L_80187CB0:
/* 80187CB0 00184BF0  38 00 00 03 */	li r0, 3
/* 80187CB4 00184BF4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80187CB8 00184BF8  48 00 00 4C */	b .L_80187D04
.L_80187CBC:
/* 80187CBC 00184BFC  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80187CC0 00184C00  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80187CC4 00184C04  40 82 00 40 */	bne .L_80187D04
/* 80187CC8 00184C08  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80187CCC 00184C0C  2C 00 00 01 */	cmpwi r0, 1
/* 80187CD0 00184C10  41 82 00 34 */	beq .L_80187D04
/* 80187CD4 00184C14  40 80 00 10 */	bge .L_80187CE4
/* 80187CD8 00184C18  2C 00 00 00 */	cmpwi r0, 0
/* 80187CDC 00184C1C  40 80 00 14 */	bge .L_80187CF0
/* 80187CE0 00184C20  48 00 00 24 */	b .L_80187D04
.L_80187CE4:
/* 80187CE4 00184C24  2C 00 00 03 */	cmpwi r0, 3
/* 80187CE8 00184C28  40 80 00 1C */	bge .L_80187D04
/* 80187CEC 00184C2C  48 00 00 10 */	b .L_80187CFC
.L_80187CF0:
/* 80187CF0 00184C30  38 00 00 01 */	li r0, 1
/* 80187CF4 00184C34  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80187CF8 00184C38  48 00 00 0C */	b .L_80187D04
.L_80187CFC:
/* 80187CFC 00184C3C  38 00 00 03 */	li r0, 3
/* 80187D00 00184C40  90 1E 00 14 */	stw r0, 0x14(r30)
.L_80187D04:
/* 80187D04 00184C44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80187D08 00184C48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80187D0C 00184C4C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80187D10 00184C50  7C 08 03 A6 */	mtlr r0
/* 80187D14 00184C54  38 21 00 10 */	addi r1, r1, 0x10
/* 80187D18 00184C58  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game15NaviPelletStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game15NaviPelletStateFPQ24Game4Navi, global
/* 80187D1C 00184C5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80187D20 00184C60  7C 08 02 A6 */	mflr r0
/* 80187D24 00184C64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80187D28 00184C68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80187D2C 00184C6C  7C 9F 23 78 */	mr r31, r4
/* 80187D30 00184C70  80 64 02 50 */	lwz r3, 0x250(r4)
/* 80187D34 00184C74  80 63 00 04 */	lwz r3, 4(r3)
/* 80187D38 00184C78  28 03 00 00 */	cmplwi r3, 0
/* 80187D3C 00184C7C  41 82 00 0C */	beq .L_80187D48
/* 80187D40 00184C80  38 80 00 00 */	li r4, 0
/* 80187D44 00184C84  4B FB 33 AD */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80187D48:
/* 80187D48 00184C88  7F E3 FB 78 */	mr r3, r31
/* 80187D4C 00184C8C  38 80 00 01 */	li r4, 1
/* 80187D50 00184C90  81 9F 00 00 */	lwz r12, 0(r31)
/* 80187D54 00184C94  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80187D58 00184C98  7D 89 03 A6 */	mtctr r12
/* 80187D5C 00184C9C  4E 80 04 21 */	bctrl 
/* 80187D60 00184CA0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80187D64 00184CA4  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 80187D68 00184CA8  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 80187D6C 00184CAC  D0 1F 01 24 */	stfs f0, 0x124(r31)
/* 80187D70 00184CB0  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80187D74 00184CB4  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80187D78 00184CB8  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80187D7C 00184CBC  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80187D80 00184CC0  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80187D84 00184CC4  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80187D88 00184CC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80187D8C 00184CCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80187D90 00184CD0  7C 08 03 A6 */	mtlr r0
/* 80187D94 00184CD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80187D98 00184CD8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15NaviPelletStateFPQ24Game4Navi

.fn init__Q24Game17NaviDemo_UfoStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80187D9C 00184CDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80187DA0 00184CE0  7C 08 02 A6 */	mflr r0
/* 80187DA4 00184CE4  38 A0 00 1E */	li r5, 0x1e
/* 80187DA8 00184CE8  38 C0 00 00 */	li r6, 0
/* 80187DAC 00184CEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80187DB0 00184CF0  38 00 00 00 */	li r0, 0
/* 80187DB4 00184CF4  38 E0 00 00 */	li r7, 0
/* 80187DB8 00184CF8  B0 03 00 10 */	sth r0, 0x10(r3)
/* 80187DBC 00184CFC  7C 83 23 78 */	mr r3, r4
/* 80187DC0 00184D00  38 80 00 1E */	li r4, 0x1e
/* 80187DC4 00184D04  81 83 00 00 */	lwz r12, 0(r3)
/* 80187DC8 00184D08  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80187DCC 00184D0C  7D 89 03 A6 */	mtctr r12
/* 80187DD0 00184D10  4E 80 04 21 */	bctrl 
/* 80187DD4 00184D14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80187DD8 00184D18  7C 08 03 A6 */	mtlr r0
/* 80187DDC 00184D1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80187DE0 00184D20  4E 80 00 20 */	blr 
.endfn init__Q24Game17NaviDemo_UfoStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi, global
/* 80187DE4 00184D24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80187DE8 00184D28  7C 08 02 A6 */	mflr r0
/* 80187DEC 00184D2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80187DF0 00184D30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80187DF4 00184D34  7C 9F 23 78 */	mr r31, r4
/* 80187DF8 00184D38  93 C1 00 08 */	stw r30, 8(r1)
/* 80187DFC 00184D3C  7C 7E 1B 78 */	mr r30, r3
/* 80187E00 00184D40  A0 03 00 10 */	lhz r0, 0x10(r3)
/* 80187E04 00184D44  2C 00 00 01 */	cmpwi r0, 1
/* 80187E08 00184D48  41 82 00 44 */	beq .L_80187E4C
/* 80187E0C 00184D4C  40 80 00 10 */	bge .L_80187E1C
/* 80187E10 00184D50  2C 00 00 00 */	cmpwi r0, 0
/* 80187E14 00184D54  40 80 00 14 */	bge .L_80187E28
/* 80187E18 00184D58  48 00 00 64 */	b .L_80187E7C
.L_80187E1C:
/* 80187E1C 00184D5C  2C 00 00 03 */	cmpwi r0, 3
/* 80187E20 00184D60  40 80 00 5C */	bge .L_80187E7C
/* 80187E24 00184D64  48 00 00 40 */	b .L_80187E64
.L_80187E28:
/* 80187E28 00184D68  48 00 00 71 */	bl execGoto__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi
/* 80187E2C 00184D6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80187E30 00184D70  41 82 00 4C */	beq .L_80187E7C
/* 80187E34 00184D74  38 00 00 01 */	li r0, 1
/* 80187E38 00184D78  7F C3 F3 78 */	mr r3, r30
/* 80187E3C 00184D7C  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80187E40 00184D80  7F E4 FB 78 */	mr r4, r31
/* 80187E44 00184D84  48 00 01 D1 */	bl initSuck__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi
/* 80187E48 00184D88  48 00 00 34 */	b .L_80187E7C
.L_80187E4C:
/* 80187E4C 00184D8C  48 00 02 E1 */	bl execSuck__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi
/* 80187E50 00184D90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80187E54 00184D94  41 82 00 28 */	beq .L_80187E7C
/* 80187E58 00184D98  38 00 00 02 */	li r0, 2
/* 80187E5C 00184D9C  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80187E60 00184DA0  48 00 00 1C */	b .L_80187E7C
.L_80187E64:
/* 80187E64 00184DA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80187E68 00184DA8  38 A0 00 00 */	li r5, 0
/* 80187E6C 00184DAC  38 C0 00 00 */	li r6, 0
/* 80187E70 00184DB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80187E74 00184DB4  7D 89 03 A6 */	mtctr r12
/* 80187E78 00184DB8  4E 80 04 21 */	bctrl 
.L_80187E7C:
/* 80187E7C 00184DBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80187E80 00184DC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80187E84 00184DC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80187E88 00184DC8  7C 08 03 A6 */	mtlr r0
/* 80187E8C 00184DCC  38 21 00 10 */	addi r1, r1, 0x10
/* 80187E90 00184DD0  4E 80 00 20 */	blr 
.endfn exec__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi

.fn cleanup__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi, global
/* 80187E94 00184DD4  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi

.fn execGoto__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi, global
/* 80187E98 00184DD8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80187E9C 00184DDC  7C 08 02 A6 */	mflr r0
/* 80187EA0 00184DE0  90 01 00 64 */	stw r0, 0x64(r1)
/* 80187EA4 00184DE4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80187EA8 00184DE8  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80187EAC 00184DEC  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80187EB0 00184DF0  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80187EB4 00184DF4  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80187EB8 00184DF8  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 80187EBC 00184DFC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80187EC0 00184E00  80 AD 93 30 */	lwz r5, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80187EC4 00184E04  7C 9F 23 78 */	mr r31, r4
/* 80187EC8 00184E08  38 61 00 14 */	addi r3, r1, 0x14
/* 80187ECC 00184E0C  80 85 00 B0 */	lwz r4, 0xb0(r5)
/* 80187ED0 00184E10  81 84 00 00 */	lwz r12, 0(r4)
/* 80187ED4 00184E14  81 8C 01 98 */	lwz r12, 0x198(r12)
/* 80187ED8 00184E18  7D 89 03 A6 */	mtctr r12
/* 80187EDC 00184E1C  4E 80 04 21 */	bctrl 
/* 80187EE0 00184E20  7F E4 FB 78 */	mr r4, r31
/* 80187EE4 00184E24  38 61 00 08 */	addi r3, r1, 8
/* 80187EE8 00184E28  81 9F 00 00 */	lwz r12, 0(r31)
/* 80187EEC 00184E2C  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80187EF0 00184E30  81 8C 00 08 */	lwz r12, 8(r12)
/* 80187EF4 00184E34  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 80187EF8 00184E38  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 80187EFC 00184E3C  7D 89 03 A6 */	mtctr r12
/* 80187F00 00184E40  4E 80 04 21 */	bctrl 
/* 80187F04 00184E44  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80187F08 00184E48  C0 01 00 08 */	lfs f0, 8(r1)
/* 80187F0C 00184E4C  EC DD 08 28 */	fsubs f6, f29, f1
/* 80187F10 00184E50  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80187F14 00184E54  EC 9F 00 28 */	fsubs f4, f31, f0
/* 80187F18 00184E58  C0 02 A9 78 */	lfs f0, lbl_80518CD8@sda21(r2)
/* 80187F1C 00184E5C  EC BE 08 28 */	fsubs f5, f30, f1
/* 80187F20 00184E60  EC 66 01 B2 */	fmuls f3, f6, f6
/* 80187F24 00184E64  EC 44 01 32 */	fmuls f2, f4, f4
/* 80187F28 00184E68  EC 22 18 2A */	fadds f1, f2, f3
/* 80187F2C 00184E6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80187F30 00184E70  40 80 00 28 */	bge .L_80187F58
/* 80187F34 00184E74  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80187F38 00184E78  38 60 00 01 */	li r3, 1
/* 80187F3C 00184E7C  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80187F40 00184E80  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80187F44 00184E84  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80187F48 00184E88  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80187F4C 00184E8C  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80187F50 00184E90  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80187F54 00184E94  48 00 00 94 */	b .L_80187FE8
.L_80187F58:
/* 80187F58 00184E98  EC E5 01 72 */	fmuls f7, f5, f5
/* 80187F5C 00184E9C  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 80187F60 00184EA0  EC 02 38 2A */	fadds f0, f2, f7
/* 80187F64 00184EA4  EC 03 00 2A */	fadds f0, f3, f0
/* 80187F68 00184EA8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80187F6C 00184EAC  40 81 00 20 */	ble .L_80187F8C
/* 80187F70 00184EB0  EC 04 39 3A */	fmadds f0, f4, f4, f7
/* 80187F74 00184EB4  EC 43 00 2A */	fadds f2, f3, f0
/* 80187F78 00184EB8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80187F7C 00184EBC  40 81 00 14 */	ble .L_80187F90
/* 80187F80 00184EC0  FC 00 10 34 */	frsqrte f0, f2
/* 80187F84 00184EC4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80187F88 00184EC8  48 00 00 08 */	b .L_80187F90
.L_80187F8C:
/* 80187F8C 00184ECC  FC 40 08 90 */	fmr f2, f1
.L_80187F90:
/* 80187F90 00184ED0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80187F94 00184ED4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80187F98 00184ED8  40 81 00 18 */	ble .L_80187FB0
/* 80187F9C 00184EDC  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80187FA0 00184EE0  EC 00 10 24 */	fdivs f0, f0, f2
/* 80187FA4 00184EE4  EC 84 00 32 */	fmuls f4, f4, f0
/* 80187FA8 00184EE8  EC A5 00 32 */	fmuls f5, f5, f0
/* 80187FAC 00184EEC  EC C6 00 32 */	fmuls f6, f6, f0
.L_80187FB0:
/* 80187FB0 00184EF0  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 80187FB4 00184EF4  38 60 00 00 */	li r3, 0
/* 80187FB8 00184EF8  C0 62 A8 A4 */	lfs f3, lbl_80518C04@sda21(r2)
/* 80187FBC 00184EFC  80 84 00 C8 */	lwz r4, 0xc8(r4)
/* 80187FC0 00184F00  C0 04 03 B8 */	lfs f0, 0x3b8(r4)
/* 80187FC4 00184F04  EC 44 00 32 */	fmuls f2, f4, f0
/* 80187FC8 00184F08  EC 25 00 32 */	fmuls f1, f5, f0
/* 80187FCC 00184F0C  EC 06 00 32 */	fmuls f0, f6, f0
/* 80187FD0 00184F10  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80187FD4 00184F14  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80187FD8 00184F18  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80187FDC 00184F1C  D0 5F 01 E4 */	stfs f2, 0x1e4(r31)
/* 80187FE0 00184F20  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 80187FE4 00184F24  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
.L_80187FE8:
/* 80187FE8 00184F28  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80187FEC 00184F2C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80187FF0 00184F30  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80187FF4 00184F34  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80187FF8 00184F38  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80187FFC 00184F3C  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80188000 00184F40  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80188004 00184F44  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80188008 00184F48  7C 08 03 A6 */	mtlr r0
/* 8018800C 00184F4C  38 21 00 60 */	addi r1, r1, 0x60
/* 80188010 00184F50  4E 80 00 20 */	blr 
.endfn execGoto__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi

.fn initSuck__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi, global
/* 80188014 00184F54  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80188018 00184F58  7C 08 02 A6 */	mflr r0
/* 8018801C 00184F5C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80188020 00184F60  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80188024 00184F64  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80188028 00184F68  7C 9E 23 78 */	mr r30, r4
/* 8018802C 00184F6C  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80188030 00184F70  7C 7D 1B 78 */	mr r29, r3
/* 80188034 00184F74  38 61 00 14 */	addi r3, r1, 0x14
/* 80188038 00184F78  81 84 00 00 */	lwz r12, 0(r4)
/* 8018803C 00184F7C  80 AD 93 30 */	lwz r5, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80188040 00184F80  81 8C 00 08 */	lwz r12, 8(r12)
/* 80188044 00184F84  83 E5 00 B0 */	lwz r31, 0xb0(r5)
/* 80188048 00184F88  7D 89 03 A6 */	mtctr r12
/* 8018804C 00184F8C  4E 80 04 21 */	bctrl 
/* 80188050 00184F90  7F E4 FB 78 */	mr r4, r31
/* 80188054 00184F94  38 61 00 20 */	addi r3, r1, 0x20
/* 80188058 00184F98  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018805C 00184F9C  81 8C 01 94 */	lwz r12, 0x194(r12)
/* 80188060 00184FA0  7D 89 03 A6 */	mtctr r12
/* 80188064 00184FA4  4E 80 04 21 */	bctrl 
/* 80188068 00184FA8  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8018806C 00184FAC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80188070 00184FB0  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 80188074 00184FB4  EC 81 00 28 */	fsubs f4, f1, f0
/* 80188078 00184FB8  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 8018807C 00184FBC  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 80188080 00184FC0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80188084 00184FC4  EC 43 10 28 */	fsubs f2, f3, f2
/* 80188088 00184FC8  EC 64 01 32 */	fmuls f3, f4, f4
/* 8018808C 00184FCC  EC 21 00 28 */	fsubs f1, f1, f0
/* 80188090 00184FD0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188094 00184FD4  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80188098 00184FD8  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 8018809C 00184FDC  EC 22 08 2A */	fadds f1, f2, f1
/* 801880A0 00184FE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801880A4 00184FE4  40 81 00 14 */	ble .L_801880B8
/* 801880A8 00184FE8  40 81 00 14 */	ble .L_801880BC
/* 801880AC 00184FEC  FC 00 08 34 */	frsqrte f0, f1
/* 801880B0 00184FF0  EC 20 00 72 */	fmuls f1, f0, f1
/* 801880B4 00184FF4  48 00 00 08 */	b .L_801880BC
.L_801880B8:
/* 801880B8 00184FF8  FC 20 00 90 */	fmr f1, f0
.L_801880BC:
/* 801880BC 00184FFC  D0 3D 00 18 */	stfs f1, 0x18(r29)
/* 801880C0 00185000  7F C4 F3 78 */	mr r4, r30
/* 801880C4 00185004  C0 42 A8 80 */	lfs f2, lbl_80518BE0@sda21(r2)
/* 801880C8 00185008  38 61 00 08 */	addi r3, r1, 8
/* 801880CC 0018500C  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 801880D0 00185010  D0 5D 00 14 */	stfs f2, 0x14(r29)
/* 801880D4 00185014  D0 5E 02 04 */	stfs f2, 0x204(r30)
/* 801880D8 00185018  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 801880DC 0018501C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801880E0 00185020  81 8C 00 08 */	lwz r12, 8(r12)
/* 801880E4 00185024  7D 89 03 A6 */	mtctr r12
/* 801880E8 00185028  4E 80 04 21 */	bctrl 
/* 801880EC 0018502C  C0 21 00 08 */	lfs f1, 8(r1)
/* 801880F0 00185030  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 801880F4 00185034  D0 3D 00 24 */	stfs f1, 0x24(r29)
/* 801880F8 00185038  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801880FC 0018503C  D0 3D 00 28 */	stfs f1, 0x28(r29)
/* 80188100 00185040  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80188104 00185044  D0 3D 00 2C */	stfs f1, 0x2c(r29)
/* 80188108 00185048  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8018810C 0018504C  D0 1D 00 30 */	stfs f0, 0x30(r29)
/* 80188110 00185050  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80188114 00185054  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80188118 00185058  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8018811C 0018505C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80188120 00185060  7C 08 03 A6 */	mtlr r0
/* 80188124 00185064  38 21 00 40 */	addi r1, r1, 0x40
/* 80188128 00185068  4E 80 00 20 */	blr 
.endfn initSuck__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi

.fn execSuck__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi, global
/* 8018812C 0018506C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80188130 00185070  7C 08 02 A6 */	mflr r0
/* 80188134 00185074  90 01 00 34 */	stw r0, 0x34(r1)
/* 80188138 00185078  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018813C 0018507C  7C 9F 23 78 */	mr r31, r4
/* 80188140 00185080  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80188144 00185084  7C 7E 1B 78 */	mr r30, r3
/* 80188148 00185088  38 61 00 08 */	addi r3, r1, 8
/* 8018814C 0018508C  80 AD 93 30 */	lwz r5, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80188150 00185090  80 85 00 B0 */	lwz r4, 0xb0(r5)
/* 80188154 00185094  81 84 00 00 */	lwz r12, 0(r4)
/* 80188158 00185098  81 8C 01 94 */	lwz r12, 0x194(r12)
/* 8018815C 0018509C  7D 89 03 A6 */	mtctr r12
/* 80188160 001850A0  4E 80 04 21 */	bctrl 
/* 80188164 001850A4  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80188168 001850A8  7F E3 FB 78 */	mr r3, r31
/* 8018816C 001850AC  C0 BE 00 2C */	lfs f5, 0x2c(r30)
/* 80188170 001850B0  38 81 00 14 */	addi r4, r1, 0x14
/* 80188174 001850B4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80188178 001850B8  38 A0 00 00 */	li r5, 0
/* 8018817C 001850BC  C0 DE 00 28 */	lfs f6, 0x28(r30)
/* 80188180 001850C0  EC 41 28 28 */	fsubs f2, f1, f5
/* 80188184 001850C4  C0 9E 00 20 */	lfs f4, 0x20(r30)
/* 80188188 001850C8  EC 60 30 28 */	fsubs f3, f0, f6
/* 8018818C 001850CC  C0 21 00 08 */	lfs f1, 8(r1)
/* 80188190 001850D0  C0 FE 00 24 */	lfs f7, 0x24(r30)
/* 80188194 001850D4  EC 02 01 32 */	fmuls f0, f2, f4
/* 80188198 001850D8  EC 41 38 28 */	fsubs f2, f1, f7
/* 8018819C 001850DC  EC 23 01 32 */	fmuls f1, f3, f4
/* 801881A0 001850E0  EC 05 00 2A */	fadds f0, f5, f0
/* 801881A4 001850E4  EC 42 01 32 */	fmuls f2, f2, f4
/* 801881A8 001850E8  EC 26 08 2A */	fadds f1, f6, f1
/* 801881AC 001850EC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801881B0 001850F0  EC 07 10 2A */	fadds f0, f7, f2
/* 801881B4 001850F4  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 801881B8 001850F8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801881BC 001850FC  4B FB 2F ED */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801881C0 00185100  C0 42 A9 7C */	lfs f2, lbl_80518CDC@sda21(r2)
/* 801881C4 00185104  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 801881C8 00185108  C0 82 A8 E8 */	lfs f4, lbl_80518C48@sda21(r2)
/* 801881CC 0018510C  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 801881D0 00185110  EC 22 20 7C */	fnmsubs f1, f2, f1, f4
/* 801881D4 00185114  C0 42 A9 80 */	lfs f2, lbl_80518CE0@sda21(r2)
/* 801881D8 00185118  EC 01 00 32 */	fmuls f0, f1, f0
/* 801881DC 0018511C  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 801881E0 00185120  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 801881E4 00185124  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 801881E8 00185128  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801881EC 0018512C  C0 7E 00 30 */	lfs f3, 0x30(r30)
/* 801881F0 00185130  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 801881F4 00185134  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 801881F8 00185138  EC 23 00 72 */	fmuls f1, f3, f1
/* 801881FC 0018513C  C0 7E 00 20 */	lfs f3, 0x20(r30)
/* 80188200 00185140  EC 01 00 24 */	fdivs f0, f1, f0
/* 80188204 00185144  EC 03 00 2A */	fadds f0, f3, f0
/* 80188208 00185148  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8018820C 0018514C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80188210 00185150  C0 1E 00 30 */	lfs f0, 0x30(r30)
/* 80188214 00185154  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80188218 00185158  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8018821C 0018515C  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 80188220 00185160  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 80188224 00185164  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80188228 00185168  4C 41 13 82 */	cror 2, 1, 2
/* 8018822C 0018516C  7C 00 00 26 */	mfcr r0
/* 80188230 00185170  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80188234 00185174  54 03 1F FE */	rlwinm r3, r0, 3, 0x1f, 0x1f
/* 80188238 00185178  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8018823C 0018517C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80188240 00185180  7C 08 03 A6 */	mtlr r0
/* 80188244 00185184  38 21 00 30 */	addi r1, r1, 0x30
/* 80188248 00185188  4E 80 00 20 */	blr 
.endfn execSuck__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi

.fn init__Q24Game20NaviDemo_HoleInStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 8018824C 0018518C  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80188250 00185190  7C 08 02 A6 */	mflr r0
/* 80188254 00185194  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80188258 00185198  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8018825C 0018519C  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 80188260 001851A0  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 80188264 001851A4  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 80188268 001851A8  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 8018826C 001851AC  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 80188270 001851B0  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 80188274 001851B4  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 80188278 001851B8  DB 61 00 70 */	stfd f27, 0x70(r1)
/* 8018827C 001851BC  F3 61 00 78 */	psq_st f27, 120(r1), 0, qr0
/* 80188280 001851C0  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80188284 001851C4  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80188288 001851C8  93 A1 00 64 */	stw r29, 0x64(r1)
/* 8018828C 001851CC  7C 7E 1B 78 */	mr r30, r3
/* 80188290 001851D0  38 00 00 00 */	li r0, 0
/* 80188294 001851D4  7C 9F 23 78 */	mr r31, r4
/* 80188298 001851D8  B0 03 00 10 */	sth r0, 0x10(r3)
/* 8018829C 001851DC  7F E3 FB 78 */	mr r3, r31
/* 801882A0 001851E0  38 80 00 1E */	li r4, 0x1e
/* 801882A4 001851E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801882A8 001851E8  38 A0 00 1E */	li r5, 0x1e
/* 801882AC 001851EC  38 C0 00 00 */	li r6, 0
/* 801882B0 001851F0  38 E0 00 00 */	li r7, 0
/* 801882B4 001851F4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801882B8 001851F8  7D 89 03 A6 */	mtctr r12
/* 801882BC 001851FC  4E 80 04 21 */	bctrl 
/* 801882C0 00185200  38 00 00 00 */	li r0, 0
/* 801882C4 00185204  7F E4 FB 78 */	mr r4, r31
/* 801882C8 00185208  90 1E 00 14 */	stw r0, 0x14(r30)
/* 801882CC 0018520C  38 61 00 2C */	addi r3, r1, 0x2c
/* 801882D0 00185210  C3 E2 A9 84 */	lfs f31, lbl_80518CE4@sda21(r2)
/* 801882D4 00185214  81 9F 00 00 */	lwz r12, 0(r31)
/* 801882D8 00185218  81 8C 00 08 */	lwz r12, 8(r12)
/* 801882DC 0018521C  7D 89 03 A6 */	mtctr r12
/* 801882E0 00185220  4E 80 04 21 */	bctrl 
/* 801882E4 00185224  80 6D 94 A0 */	lwz r3, mgr__Q24Game8ItemCave@sda21(r13)
/* 801882E8 00185228  C3 A1 00 2C */	lfs f29, 0x2c(r1)
/* 801882EC 0018522C  28 03 00 00 */	cmplwi r3, 0
/* 801882F0 00185230  C3 81 00 30 */	lfs f28, 0x30(r1)
/* 801882F4 00185234  C3 61 00 34 */	lfs f27, 0x34(r1)
/* 801882F8 00185238  41 82 00 08 */	beq .L_80188300
/* 801882FC 0018523C  38 63 00 30 */	addi r3, r3, 0x30
.L_80188300:
/* 80188300 00185240  38 00 00 00 */	li r0, 0
/* 80188304 00185244  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 80188308 00185248  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 8018830C 0018524C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80188310 00185250  28 00 00 00 */	cmplwi r0, 0
/* 80188314 00185254  90 81 00 48 */	stw r4, 0x48(r1)
/* 80188318 00185258  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8018831C 0018525C  90 61 00 50 */	stw r3, 0x50(r1)
/* 80188320 00185260  40 82 00 1C */	bne .L_8018833C
/* 80188324 00185264  81 83 00 00 */	lwz r12, 0(r3)
/* 80188328 00185268  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8018832C 0018526C  7D 89 03 A6 */	mtctr r12
/* 80188330 00185270  4E 80 04 21 */	bctrl 
/* 80188334 00185274  90 61 00 4C */	stw r3, 0x4c(r1)
/* 80188338 00185278  48 00 00 8C */	b .L_801883C4
.L_8018833C:
/* 8018833C 0018527C  81 83 00 00 */	lwz r12, 0(r3)
/* 80188340 00185280  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80188344 00185284  7D 89 03 A6 */	mtctr r12
/* 80188348 00185288  4E 80 04 21 */	bctrl 
/* 8018834C 0018528C  90 61 00 4C */	stw r3, 0x4c(r1)
/* 80188350 00185290  48 00 00 58 */	b .L_801883A8
.L_80188354:
/* 80188354 00185294  80 61 00 50 */	lwz r3, 0x50(r1)
/* 80188358 00185298  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8018835C 0018529C  81 83 00 00 */	lwz r12, 0(r3)
/* 80188360 001852A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80188364 001852A4  7D 89 03 A6 */	mtctr r12
/* 80188368 001852A8  4E 80 04 21 */	bctrl 
/* 8018836C 001852AC  7C 64 1B 78 */	mr r4, r3
/* 80188370 001852B0  80 61 00 54 */	lwz r3, 0x54(r1)
/* 80188374 001852B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80188378 001852B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018837C 001852BC  7D 89 03 A6 */	mtctr r12
/* 80188380 001852C0  4E 80 04 21 */	bctrl 
/* 80188384 001852C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80188388 001852C8  40 82 00 3C */	bne .L_801883C4
/* 8018838C 001852CC  80 61 00 50 */	lwz r3, 0x50(r1)
/* 80188390 001852D0  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 80188394 001852D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80188398 001852D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8018839C 001852DC  7D 89 03 A6 */	mtctr r12
/* 801883A0 001852E0  4E 80 04 21 */	bctrl 
/* 801883A4 001852E4  90 61 00 4C */	stw r3, 0x4c(r1)
.L_801883A8:
/* 801883A8 001852E8  81 81 00 48 */	lwz r12, 0x48(r1)
/* 801883AC 001852EC  38 61 00 48 */	addi r3, r1, 0x48
/* 801883B0 001852F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801883B4 001852F4  7D 89 03 A6 */	mtctr r12
/* 801883B8 001852F8  4E 80 04 21 */	bctrl 
/* 801883BC 001852FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801883C0 00185300  41 82 FF 94 */	beq .L_80188354
.L_801883C4:
/* 801883C4 00185304  C3 C2 A8 80 */	lfs f30, lbl_80518BE0@sda21(r2)
/* 801883C8 00185308  48 00 01 48 */	b .L_80188510
.L_801883CC:
/* 801883CC 0018530C  80 61 00 50 */	lwz r3, 0x50(r1)
/* 801883D0 00185310  81 83 00 00 */	lwz r12, 0(r3)
/* 801883D4 00185314  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801883D8 00185318  7D 89 03 A6 */	mtctr r12
/* 801883DC 0018531C  4E 80 04 21 */	bctrl 
/* 801883E0 00185320  7C 60 1B 78 */	mr r0, r3
/* 801883E4 00185324  38 61 00 20 */	addi r3, r1, 0x20
/* 801883E8 00185328  7C 1D 03 78 */	mr r29, r0
/* 801883EC 0018532C  81 9D 00 00 */	lwz r12, 0(r29)
/* 801883F0 00185330  7F A4 EB 78 */	mr r4, r29
/* 801883F4 00185334  81 8C 00 08 */	lwz r12, 8(r12)
/* 801883F8 00185338  7D 89 03 A6 */	mtctr r12
/* 801883FC 0018533C  4E 80 04 21 */	bctrl 
/* 80188400 00185340  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80188404 00185344  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 80188408 00185348  EC 40 E0 28 */	fsubs f2, f0, f28
/* 8018840C 0018534C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80188410 00185350  EC 21 E8 28 */	fsubs f1, f1, f29
/* 80188414 00185354  EC 00 D8 28 */	fsubs f0, f0, f27
/* 80188418 00185358  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8018841C 0018535C  EC 60 00 32 */	fmuls f3, f0, f0
/* 80188420 00185360  EC 01 10 7A */	fmadds f0, f1, f1, f2
/* 80188424 00185364  EC 03 00 2A */	fadds f0, f3, f0
/* 80188428 00185368  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8018842C 0018536C  40 81 00 14 */	ble .L_80188440
/* 80188430 00185370  40 81 00 14 */	ble .L_80188444
/* 80188434 00185374  FC 20 00 34 */	frsqrte f1, f0
/* 80188438 00185378  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018843C 0018537C  48 00 00 08 */	b .L_80188444
.L_80188440:
/* 80188440 00185380  FC 00 F0 90 */	fmr f0, f30
.L_80188444:
/* 80188444 00185384  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80188448 00185388  40 80 00 0C */	bge .L_80188454
/* 8018844C 0018538C  FF E0 00 90 */	fmr f31, f0
/* 80188450 00185390  93 BE 00 14 */	stw r29, 0x14(r30)
.L_80188454:
/* 80188454 00185394  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80188458 00185398  28 00 00 00 */	cmplwi r0, 0
/* 8018845C 0018539C  40 82 00 24 */	bne .L_80188480
/* 80188460 001853A0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 80188464 001853A4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 80188468 001853A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8018846C 001853AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80188470 001853B0  7D 89 03 A6 */	mtctr r12
/* 80188474 001853B4  4E 80 04 21 */	bctrl 
/* 80188478 001853B8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8018847C 001853BC  48 00 00 94 */	b .L_80188510
.L_80188480:
/* 80188480 001853C0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 80188484 001853C4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 80188488 001853C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8018848C 001853CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80188490 001853D0  7D 89 03 A6 */	mtctr r12
/* 80188494 001853D4  4E 80 04 21 */	bctrl 
/* 80188498 001853D8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8018849C 001853DC  48 00 00 58 */	b .L_801884F4
.L_801884A0:
/* 801884A0 001853E0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 801884A4 001853E4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 801884A8 001853E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801884AC 001853EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801884B0 001853F0  7D 89 03 A6 */	mtctr r12
/* 801884B4 001853F4  4E 80 04 21 */	bctrl 
/* 801884B8 001853F8  7C 64 1B 78 */	mr r4, r3
/* 801884BC 001853FC  80 61 00 54 */	lwz r3, 0x54(r1)
/* 801884C0 00185400  81 83 00 00 */	lwz r12, 0(r3)
/* 801884C4 00185404  81 8C 00 08 */	lwz r12, 8(r12)
/* 801884C8 00185408  7D 89 03 A6 */	mtctr r12
/* 801884CC 0018540C  4E 80 04 21 */	bctrl 
/* 801884D0 00185410  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801884D4 00185414  40 82 00 3C */	bne .L_80188510
/* 801884D8 00185418  80 61 00 50 */	lwz r3, 0x50(r1)
/* 801884DC 0018541C  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 801884E0 00185420  81 83 00 00 */	lwz r12, 0(r3)
/* 801884E4 00185424  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801884E8 00185428  7D 89 03 A6 */	mtctr r12
/* 801884EC 0018542C  4E 80 04 21 */	bctrl 
/* 801884F0 00185430  90 61 00 4C */	stw r3, 0x4c(r1)
.L_801884F4:
/* 801884F4 00185434  81 81 00 48 */	lwz r12, 0x48(r1)
/* 801884F8 00185438  38 61 00 48 */	addi r3, r1, 0x48
/* 801884FC 0018543C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80188500 00185440  7D 89 03 A6 */	mtctr r12
/* 80188504 00185444  4E 80 04 21 */	bctrl 
/* 80188508 00185448  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018850C 0018544C  41 82 FF 94 */	beq .L_801884A0
.L_80188510:
/* 80188510 00185450  80 61 00 50 */	lwz r3, 0x50(r1)
/* 80188514 00185454  81 83 00 00 */	lwz r12, 0(r3)
/* 80188518 00185458  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018851C 0018545C  7D 89 03 A6 */	mtctr r12
/* 80188520 00185460  4E 80 04 21 */	bctrl 
/* 80188524 00185464  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 80188528 00185468  7C 04 18 40 */	cmplw r4, r3
/* 8018852C 0018546C  40 82 FE A0 */	bne .L_801883CC
/* 80188530 00185470  7F E4 FB 78 */	mr r4, r31
/* 80188534 00185474  38 61 00 14 */	addi r3, r1, 0x14
/* 80188538 00185478  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018853C 0018547C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80188540 00185480  7D 89 03 A6 */	mtctr r12
/* 80188544 00185484  4E 80 04 21 */	bctrl 
/* 80188548 00185488  80 6D 94 48 */	lwz r3, mgr__Q24Game8ItemHole@sda21(r13)
/* 8018854C 0018548C  C3 61 00 14 */	lfs f27, 0x14(r1)
/* 80188550 00185490  28 03 00 00 */	cmplwi r3, 0
/* 80188554 00185494  C3 81 00 18 */	lfs f28, 0x18(r1)
/* 80188558 00185498  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 8018855C 0018549C  41 82 00 08 */	beq .L_80188564
/* 80188560 001854A0  38 63 00 30 */	addi r3, r3, 0x30
.L_80188564:
/* 80188564 001854A4  38 00 00 00 */	li r0, 0
/* 80188568 001854A8  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 8018856C 001854AC  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 80188570 001854B0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80188574 001854B4  28 00 00 00 */	cmplwi r0, 0
/* 80188578 001854B8  90 81 00 38 */	stw r4, 0x38(r1)
/* 8018857C 001854BC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80188580 001854C0  90 61 00 40 */	stw r3, 0x40(r1)
/* 80188584 001854C4  40 82 00 1C */	bne .L_801885A0
/* 80188588 001854C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8018858C 001854CC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80188590 001854D0  7D 89 03 A6 */	mtctr r12
/* 80188594 001854D4  4E 80 04 21 */	bctrl 
/* 80188598 001854D8  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8018859C 001854DC  48 00 00 8C */	b .L_80188628
.L_801885A0:
/* 801885A0 001854E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801885A4 001854E4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801885A8 001854E8  7D 89 03 A6 */	mtctr r12
/* 801885AC 001854EC  4E 80 04 21 */	bctrl 
/* 801885B0 001854F0  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801885B4 001854F4  48 00 00 58 */	b .L_8018860C
.L_801885B8:
/* 801885B8 001854F8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801885BC 001854FC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801885C0 00185500  81 83 00 00 */	lwz r12, 0(r3)
/* 801885C4 00185504  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801885C8 00185508  7D 89 03 A6 */	mtctr r12
/* 801885CC 0018550C  4E 80 04 21 */	bctrl 
/* 801885D0 00185510  7C 64 1B 78 */	mr r4, r3
/* 801885D4 00185514  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801885D8 00185518  81 83 00 00 */	lwz r12, 0(r3)
/* 801885DC 0018551C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801885E0 00185520  7D 89 03 A6 */	mtctr r12
/* 801885E4 00185524  4E 80 04 21 */	bctrl 
/* 801885E8 00185528  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801885EC 0018552C  40 82 00 3C */	bne .L_80188628
/* 801885F0 00185530  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801885F4 00185534  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801885F8 00185538  81 83 00 00 */	lwz r12, 0(r3)
/* 801885FC 0018553C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80188600 00185540  7D 89 03 A6 */	mtctr r12
/* 80188604 00185544  4E 80 04 21 */	bctrl 
/* 80188608 00185548  90 61 00 3C */	stw r3, 0x3c(r1)
.L_8018860C:
/* 8018860C 0018554C  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80188610 00185550  38 61 00 38 */	addi r3, r1, 0x38
/* 80188614 00185554  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80188618 00185558  7D 89 03 A6 */	mtctr r12
/* 8018861C 0018555C  4E 80 04 21 */	bctrl 
/* 80188620 00185560  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80188624 00185564  41 82 FF 94 */	beq .L_801885B8
.L_80188628:
/* 80188628 00185568  C3 C2 A8 80 */	lfs f30, lbl_80518BE0@sda21(r2)
/* 8018862C 0018556C  48 00 01 48 */	b .L_80188774
.L_80188630:
/* 80188630 00185570  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80188634 00185574  81 83 00 00 */	lwz r12, 0(r3)
/* 80188638 00185578  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8018863C 0018557C  7D 89 03 A6 */	mtctr r12
/* 80188640 00185580  4E 80 04 21 */	bctrl 
/* 80188644 00185584  7C 60 1B 78 */	mr r0, r3
/* 80188648 00185588  38 61 00 08 */	addi r3, r1, 8
/* 8018864C 0018558C  7C 1D 03 78 */	mr r29, r0
/* 80188650 00185590  81 9D 00 00 */	lwz r12, 0(r29)
/* 80188654 00185594  7F A4 EB 78 */	mr r4, r29
/* 80188658 00185598  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018865C 0018559C  7D 89 03 A6 */	mtctr r12
/* 80188660 001855A0  4E 80 04 21 */	bctrl 
/* 80188664 001855A4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80188668 001855A8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8018866C 001855AC  EC 40 E0 28 */	fsubs f2, f0, f28
/* 80188670 001855B0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80188674 001855B4  EC 21 D8 28 */	fsubs f1, f1, f27
/* 80188678 001855B8  EC 00 E8 28 */	fsubs f0, f0, f29
/* 8018867C 001855BC  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80188680 001855C0  EC 60 00 32 */	fmuls f3, f0, f0
/* 80188684 001855C4  EC 01 10 7A */	fmadds f0, f1, f1, f2
/* 80188688 001855C8  EC 03 00 2A */	fadds f0, f3, f0
/* 8018868C 001855CC  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80188690 001855D0  40 81 00 14 */	ble .L_801886A4
/* 80188694 001855D4  40 81 00 14 */	ble .L_801886A8
/* 80188698 001855D8  FC 20 00 34 */	frsqrte f1, f0
/* 8018869C 001855DC  EC 01 00 32 */	fmuls f0, f1, f0
/* 801886A0 001855E0  48 00 00 08 */	b .L_801886A8
.L_801886A4:
/* 801886A4 001855E4  FC 00 F0 90 */	fmr f0, f30
.L_801886A8:
/* 801886A8 001855E8  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 801886AC 001855EC  40 80 00 0C */	bge .L_801886B8
/* 801886B0 001855F0  FF E0 00 90 */	fmr f31, f0
/* 801886B4 001855F4  93 BE 00 14 */	stw r29, 0x14(r30)
.L_801886B8:
/* 801886B8 001855F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801886BC 001855FC  28 00 00 00 */	cmplwi r0, 0
/* 801886C0 00185600  40 82 00 24 */	bne .L_801886E4
/* 801886C4 00185604  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801886C8 00185608  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801886CC 0018560C  81 83 00 00 */	lwz r12, 0(r3)
/* 801886D0 00185610  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801886D4 00185614  7D 89 03 A6 */	mtctr r12
/* 801886D8 00185618  4E 80 04 21 */	bctrl 
/* 801886DC 0018561C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801886E0 00185620  48 00 00 94 */	b .L_80188774
.L_801886E4:
/* 801886E4 00185624  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801886E8 00185628  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801886EC 0018562C  81 83 00 00 */	lwz r12, 0(r3)
/* 801886F0 00185630  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801886F4 00185634  7D 89 03 A6 */	mtctr r12
/* 801886F8 00185638  4E 80 04 21 */	bctrl 
/* 801886FC 0018563C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80188700 00185640  48 00 00 58 */	b .L_80188758
.L_80188704:
/* 80188704 00185644  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80188708 00185648  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8018870C 0018564C  81 83 00 00 */	lwz r12, 0(r3)
/* 80188710 00185650  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80188714 00185654  7D 89 03 A6 */	mtctr r12
/* 80188718 00185658  4E 80 04 21 */	bctrl 
/* 8018871C 0018565C  7C 64 1B 78 */	mr r4, r3
/* 80188720 00185660  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80188724 00185664  81 83 00 00 */	lwz r12, 0(r3)
/* 80188728 00185668  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018872C 0018566C  7D 89 03 A6 */	mtctr r12
/* 80188730 00185670  4E 80 04 21 */	bctrl 
/* 80188734 00185674  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80188738 00185678  40 82 00 3C */	bne .L_80188774
/* 8018873C 0018567C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80188740 00185680  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80188744 00185684  81 83 00 00 */	lwz r12, 0(r3)
/* 80188748 00185688  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8018874C 0018568C  7D 89 03 A6 */	mtctr r12
/* 80188750 00185690  4E 80 04 21 */	bctrl 
/* 80188754 00185694  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80188758:
/* 80188758 00185698  81 81 00 38 */	lwz r12, 0x38(r1)
/* 8018875C 0018569C  38 61 00 38 */	addi r3, r1, 0x38
/* 80188760 001856A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80188764 001856A4  7D 89 03 A6 */	mtctr r12
/* 80188768 001856A8  4E 80 04 21 */	bctrl 
/* 8018876C 001856AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80188770 001856B0  41 82 FF 94 */	beq .L_80188704
.L_80188774:
/* 80188774 001856B4  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80188778 001856B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8018877C 001856BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80188780 001856C0  7D 89 03 A6 */	mtctr r12
/* 80188784 001856C4  4E 80 04 21 */	bctrl 
/* 80188788 001856C8  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8018878C 001856CC  7C 04 18 40 */	cmplw r4, r3
/* 80188790 001856D0  40 82 FE A0 */	bne .L_80188630
/* 80188794 001856D4  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 80188798 001856D8  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8018879C 001856DC  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 801887A0 001856E0  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 801887A4 001856E4  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 801887A8 001856E8  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 801887AC 001856EC  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 801887B0 001856F0  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 801887B4 001856F4  E3 61 00 78 */	psq_l f27, 120(r1), 0, qr0
/* 801887B8 001856F8  CB 61 00 70 */	lfd f27, 0x70(r1)
/* 801887BC 001856FC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801887C0 00185700  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 801887C4 00185704  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 801887C8 00185708  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 801887CC 0018570C  7C 08 03 A6 */	mtlr r0
/* 801887D0 00185710  38 21 00 C0 */	addi r1, r1, 0xc0
/* 801887D4 00185714  4E 80 00 20 */	blr 
.endfn init__Q24Game20NaviDemo_HoleInStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi, global
/* 801887D8 00185718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801887DC 0018571C  7C 08 02 A6 */	mflr r0
/* 801887E0 00185720  90 01 00 14 */	stw r0, 0x14(r1)
/* 801887E4 00185724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801887E8 00185728  7C 9F 23 78 */	mr r31, r4
/* 801887EC 0018572C  93 C1 00 08 */	stw r30, 8(r1)
/* 801887F0 00185730  7C 7E 1B 78 */	mr r30, r3
/* 801887F4 00185734  A0 03 00 10 */	lhz r0, 0x10(r3)
/* 801887F8 00185738  2C 00 00 01 */	cmpwi r0, 1
/* 801887FC 0018573C  41 82 00 44 */	beq .L_80188840
/* 80188800 00185740  40 80 00 10 */	bge .L_80188810
/* 80188804 00185744  2C 00 00 00 */	cmpwi r0, 0
/* 80188808 00185748  40 80 00 14 */	bge .L_8018881C
/* 8018880C 0018574C  48 00 00 5C */	b .L_80188868
.L_80188810:
/* 80188810 00185750  2C 00 00 03 */	cmpwi r0, 3
/* 80188814 00185754  40 80 00 54 */	bge .L_80188868
/* 80188818 00185758  48 00 00 4C */	b .L_80188864
.L_8018881C:
/* 8018881C 0018575C  48 00 00 75 */	bl execGoto__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
/* 80188820 00185760  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80188824 00185764  41 82 00 44 */	beq .L_80188868
/* 80188828 00185768  38 00 00 01 */	li r0, 1
/* 8018882C 0018576C  7F C3 F3 78 */	mr r3, r30
/* 80188830 00185770  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80188834 00185774  7F E4 FB 78 */	mr r4, r31
/* 80188838 00185778  48 00 01 D1 */	bl initHesitate__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
/* 8018883C 0018577C  48 00 00 2C */	b .L_80188868
.L_80188840:
/* 80188840 00185780  48 00 02 29 */	bl execHesitate__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
/* 80188844 00185784  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80188848 00185788  41 82 00 20 */	beq .L_80188868
/* 8018884C 0018578C  38 00 00 02 */	li r0, 2
/* 80188850 00185790  7F C3 F3 78 */	mr r3, r30
/* 80188854 00185794  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80188858 00185798  7F E4 FB 78 */	mr r4, r31
/* 8018885C 0018579C  48 00 03 79 */	bl initFall__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
/* 80188860 001857A0  48 00 00 08 */	b .L_80188868
.L_80188864:
/* 80188864 001857A4  48 00 03 75 */	bl execFall__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
.L_80188868:
/* 80188868 001857A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018886C 001857AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80188870 001857B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80188874 001857B4  7C 08 03 A6 */	mtlr r0
/* 80188878 001857B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8018887C 001857BC  4E 80 00 20 */	blr 
.endfn exec__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi

.fn onKeyEvent__Q24Game20NaviDemo_HoleInStateFPQ24Game4NaviRCQ28SysShape8KeyEvent, global
/* 80188880 001857C0  38 00 00 01 */	li r0, 1
/* 80188884 001857C4  98 03 00 12 */	stb r0, 0x12(r3)
/* 80188888 001857C8  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game20NaviDemo_HoleInStateFPQ24Game4NaviRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi, global
/* 8018888C 001857CC  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi

.fn execGoto__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi, global
/* 80188890 001857D0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80188894 001857D4  7C 08 02 A6 */	mflr r0
/* 80188898 001857D8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8018889C 001857DC  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 801888A0 001857E0  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 801888A4 001857E4  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 801888A8 001857E8  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 801888AC 001857EC  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 801888B0 001857F0  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 801888B4 001857F4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801888B8 001857F8  7C 9F 23 78 */	mr r31, r4
/* 801888BC 001857FC  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801888C0 00185800  38 61 00 14 */	addi r3, r1, 0x14
/* 801888C4 00185804  81 84 00 00 */	lwz r12, 0(r4)
/* 801888C8 00185808  81 8C 00 08 */	lwz r12, 8(r12)
/* 801888CC 0018580C  7D 89 03 A6 */	mtctr r12
/* 801888D0 00185810  4E 80 04 21 */	bctrl 
/* 801888D4 00185814  7F E4 FB 78 */	mr r4, r31
/* 801888D8 00185818  38 61 00 08 */	addi r3, r1, 8
/* 801888DC 0018581C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801888E0 00185820  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 801888E4 00185824  81 8C 00 08 */	lwz r12, 8(r12)
/* 801888E8 00185828  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 801888EC 0018582C  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 801888F0 00185830  7D 89 03 A6 */	mtctr r12
/* 801888F4 00185834  4E 80 04 21 */	bctrl 
/* 801888F8 00185838  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801888FC 0018583C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80188900 00185840  EC DD 08 28 */	fsubs f6, f29, f1
/* 80188904 00185844  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80188908 00185848  EC 9F 00 28 */	fsubs f4, f31, f0
/* 8018890C 0018584C  C0 02 A9 88 */	lfs f0, lbl_80518CE8@sda21(r2)
/* 80188910 00185850  EC BE 08 28 */	fsubs f5, f30, f1
/* 80188914 00185854  EC 66 01 B2 */	fmuls f3, f6, f6
/* 80188918 00185858  EC 44 01 32 */	fmuls f2, f4, f4
/* 8018891C 0018585C  EC 22 18 2A */	fadds f1, f2, f3
/* 80188920 00185860  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80188924 00185864  40 80 00 28 */	bge .L_8018894C
/* 80188928 00185868  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 8018892C 0018586C  38 60 00 01 */	li r3, 1
/* 80188930 00185870  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80188934 00185874  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80188938 00185878  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8018893C 0018587C  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80188940 00185880  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80188944 00185884  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80188948 00185888  48 00 00 94 */	b .L_801889DC
.L_8018894C:
/* 8018894C 0018588C  EC E5 01 72 */	fmuls f7, f5, f5
/* 80188950 00185890  C0 22 A8 80 */	lfs f1, lbl_80518BE0@sda21(r2)
/* 80188954 00185894  EC 02 38 2A */	fadds f0, f2, f7
/* 80188958 00185898  EC 03 00 2A */	fadds f0, f3, f0
/* 8018895C 0018589C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80188960 001858A0  40 81 00 20 */	ble .L_80188980
/* 80188964 001858A4  EC 04 39 3A */	fmadds f0, f4, f4, f7
/* 80188968 001858A8  EC 43 00 2A */	fadds f2, f3, f0
/* 8018896C 001858AC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80188970 001858B0  40 81 00 14 */	ble .L_80188984
/* 80188974 001858B4  FC 00 10 34 */	frsqrte f0, f2
/* 80188978 001858B8  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8018897C 001858BC  48 00 00 08 */	b .L_80188984
.L_80188980:
/* 80188980 001858C0  FC 40 08 90 */	fmr f2, f1
.L_80188984:
/* 80188984 001858C4  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188988 001858C8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8018898C 001858CC  40 81 00 18 */	ble .L_801889A4
/* 80188990 001858D0  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80188994 001858D4  EC 00 10 24 */	fdivs f0, f0, f2
/* 80188998 001858D8  EC 84 00 32 */	fmuls f4, f4, f0
/* 8018899C 001858DC  EC A5 00 32 */	fmuls f5, f5, f0
/* 801889A0 001858E0  EC C6 00 32 */	fmuls f6, f6, f0
.L_801889A4:
/* 801889A4 001858E4  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 801889A8 001858E8  38 60 00 00 */	li r3, 0
/* 801889AC 001858EC  C0 62 A8 A4 */	lfs f3, lbl_80518C04@sda21(r2)
/* 801889B0 001858F0  80 84 00 C8 */	lwz r4, 0xc8(r4)
/* 801889B4 001858F4  C0 04 03 B8 */	lfs f0, 0x3b8(r4)
/* 801889B8 001858F8  EC 44 00 32 */	fmuls f2, f4, f0
/* 801889BC 001858FC  EC 25 00 32 */	fmuls f1, f5, f0
/* 801889C0 00185900  EC 06 00 32 */	fmuls f0, f6, f0
/* 801889C4 00185904  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801889C8 00185908  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801889CC 0018590C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801889D0 00185910  D0 5F 01 E4 */	stfs f2, 0x1e4(r31)
/* 801889D4 00185914  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 801889D8 00185918  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
.L_801889DC:
/* 801889DC 0018591C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 801889E0 00185920  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 801889E4 00185924  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 801889E8 00185928  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 801889EC 0018592C  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 801889F0 00185930  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 801889F4 00185934  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801889F8 00185938  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801889FC 0018593C  7C 08 03 A6 */	mtlr r0
/* 80188A00 00185940  38 21 00 60 */	addi r1, r1, 0x60
/* 80188A04 00185944  4E 80 00 20 */	blr 
.endfn execGoto__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi

.fn initHesitate__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi, global
/* 80188A08 00185948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80188A0C 0018594C  7C 08 02 A6 */	mflr r0
/* 80188A10 00185950  28 04 00 00 */	cmplwi r4, 0
/* 80188A14 00185954  7C 86 23 78 */	mr r6, r4
/* 80188A18 00185958  90 01 00 14 */	stw r0, 0x14(r1)
/* 80188A1C 0018595C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80188A20 00185960  7C 7F 1B 78 */	mr r31, r3
/* 80188A24 00185964  41 82 00 08 */	beq .L_80188A2C
/* 80188A28 00185968  38 C6 01 78 */	addi r6, r6, 0x178
.L_80188A2C:
/* 80188A2C 0018596C  81 84 00 00 */	lwz r12, 0(r4)
/* 80188A30 00185970  7C 83 23 78 */	mr r3, r4
/* 80188A34 00185974  38 80 00 35 */	li r4, 0x35
/* 80188A38 00185978  38 A0 00 35 */	li r5, 0x35
/* 80188A3C 0018597C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80188A40 00185980  38 E0 00 00 */	li r7, 0
/* 80188A44 00185984  7D 89 03 A6 */	mtctr r12
/* 80188A48 00185988  4E 80 04 21 */	bctrl 
/* 80188A4C 0018598C  38 00 00 00 */	li r0, 0
/* 80188A50 00185990  98 1F 00 12 */	stb r0, 0x12(r31)
/* 80188A54 00185994  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80188A58 00185998  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80188A5C 0018599C  7C 08 03 A6 */	mtlr r0
/* 80188A60 001859A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80188A64 001859A4  4E 80 00 20 */	blr 
.endfn initHesitate__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi

.fn execHesitate__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi, global
/* 80188A68 001859A8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80188A6C 001859AC  7C 08 02 A6 */	mflr r0
/* 80188A70 001859B0  90 01 00 64 */	stw r0, 0x64(r1)
/* 80188A74 001859B4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80188A78 001859B8  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80188A7C 001859BC  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80188A80 001859C0  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80188A84 001859C4  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80188A88 001859C8  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 80188A8C 001859CC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80188A90 001859D0  88 03 00 12 */	lbz r0, 0x12(r3)
/* 80188A94 001859D4  7C 9F 23 78 */	mr r31, r4
/* 80188A98 001859D8  28 00 00 00 */	cmplwi r0, 0
/* 80188A9C 001859DC  41 82 00 EC */	beq .L_80188B88
/* 80188AA0 001859E0  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80188AA4 001859E4  38 61 00 14 */	addi r3, r1, 0x14
/* 80188AA8 001859E8  81 84 00 00 */	lwz r12, 0(r4)
/* 80188AAC 001859EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80188AB0 001859F0  7D 89 03 A6 */	mtctr r12
/* 80188AB4 001859F4  4E 80 04 21 */	bctrl 
/* 80188AB8 001859F8  7F E4 FB 78 */	mr r4, r31
/* 80188ABC 001859FC  38 61 00 08 */	addi r3, r1, 8
/* 80188AC0 00185A00  81 9F 00 00 */	lwz r12, 0(r31)
/* 80188AC4 00185A04  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80188AC8 00185A08  81 8C 00 08 */	lwz r12, 8(r12)
/* 80188ACC 00185A0C  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 80188AD0 00185A10  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 80188AD4 00185A14  7D 89 03 A6 */	mtctr r12
/* 80188AD8 00185A18  4E 80 04 21 */	bctrl 
/* 80188ADC 00185A1C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80188AE0 00185A20  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80188AE4 00185A24  EC 7E 00 28 */	fsubs f3, f30, f0
/* 80188AE8 00185A28  C0 21 00 08 */	lfs f1, 8(r1)
/* 80188AEC 00185A2C  EC 9D 10 28 */	fsubs f4, f29, f2
/* 80188AF0 00185A30  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188AF4 00185A34  EC 5F 08 28 */	fsubs f2, f31, f1
/* 80188AF8 00185A38  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80188AFC 00185A3C  EC 64 01 32 */	fmuls f3, f4, f4
/* 80188B00 00185A40  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80188B04 00185A44  EC 23 08 2A */	fadds f1, f3, f1
/* 80188B08 00185A48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80188B0C 00185A4C  40 81 00 14 */	ble .L_80188B20
/* 80188B10 00185A50  40 81 00 14 */	ble .L_80188B24
/* 80188B14 00185A54  FC 00 08 34 */	frsqrte f0, f1
/* 80188B18 00185A58  EC 20 00 72 */	fmuls f1, f0, f1
/* 80188B1C 00185A5C  48 00 00 08 */	b .L_80188B24
.L_80188B20:
/* 80188B20 00185A60  FC 20 00 90 */	fmr f1, f0
.L_80188B24:
/* 80188B24 00185A64  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188B28 00185A68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80188B2C 00185A6C  40 81 00 14 */	ble .L_80188B40
/* 80188B30 00185A70  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80188B34 00185A74  EC 00 08 24 */	fdivs f0, f0, f1
/* 80188B38 00185A78  EC 42 00 32 */	fmuls f2, f2, f0
/* 80188B3C 00185A7C  EC 84 00 32 */	fmuls f4, f4, f0
.L_80188B40:
/* 80188B40 00185A80  C0 22 A8 DC */	lfs f1, lbl_80518C3C@sda21(r2)
/* 80188B44 00185A84  7F E3 FB 78 */	mr r3, r31
/* 80188B48 00185A88  C0 02 A9 8C */	lfs f0, lbl_80518CEC@sda21(r2)
/* 80188B4C 00185A8C  38 80 00 00 */	li r4, 0
/* 80188B50 00185A90  EC 42 00 72 */	fmuls f2, f2, f1
/* 80188B54 00185A94  EC 84 00 72 */	fmuls f4, f4, f1
/* 80188B58 00185A98  D0 5F 02 00 */	stfs f2, 0x200(r31)
/* 80188B5C 00185A9C  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80188B60 00185AA0  D0 9F 02 08 */	stfs f4, 0x208(r31)
/* 80188B64 00185AA4  D0 5F 01 E4 */	stfs f2, 0x1e4(r31)
/* 80188B68 00185AA8  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80188B6C 00185AAC  D0 9F 01 EC */	stfs f4, 0x1ec(r31)
/* 80188B70 00185AB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80188B74 00185AB4  81 8C 01 F0 */	lwz r12, 0x1f0(r12)
/* 80188B78 00185AB8  7D 89 03 A6 */	mtctr r12
/* 80188B7C 00185ABC  4E 80 04 21 */	bctrl 
/* 80188B80 00185AC0  38 60 00 01 */	li r3, 1
/* 80188B84 00185AC4  48 00 00 24 */	b .L_80188BA8
.L_80188B88:
/* 80188B88 00185AC8  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188B8C 00185ACC  38 60 00 00 */	li r3, 0
/* 80188B90 00185AD0  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80188B94 00185AD4  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80188B98 00185AD8  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80188B9C 00185ADC  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80188BA0 00185AE0  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80188BA4 00185AE4  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
.L_80188BA8:
/* 80188BA8 00185AE8  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80188BAC 00185AEC  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80188BB0 00185AF0  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80188BB4 00185AF4  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80188BB8 00185AF8  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80188BBC 00185AFC  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80188BC0 00185B00  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80188BC4 00185B04  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80188BC8 00185B08  7C 08 03 A6 */	mtlr r0
/* 80188BCC 00185B0C  38 21 00 60 */	addi r1, r1, 0x60
/* 80188BD0 00185B10  4E 80 00 20 */	blr 
.endfn execHesitate__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi

.fn initFall__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi, global
/* 80188BD4 00185B14  4E 80 00 20 */	blr 
.endfn initFall__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi

.fn execFall__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi, global
/* 80188BD8 00185B18  38 60 00 00 */	li r3, 0
/* 80188BDC 00185B1C  4E 80 00 20 */	blr 
.endfn execFall__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi

.fn init__Q24Game16NaviPressedStateFPQ24Game4NaviPQ24Game8StateArg, global
/* 80188BE0 00185B20  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80188BE4 00185B24  7C 08 02 A6 */	mflr r0
/* 80188BE8 00185B28  C0 42 A9 74 */	lfs f2, lbl_80518CD4@sda21(r2)
/* 80188BEC 00185B2C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80188BF0 00185B30  C0 22 A9 90 */	lfs f1, lbl_80518CF0@sda21(r2)
/* 80188BF4 00185B34  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80188BF8 00185B38  7C 9F 23 78 */	mr r31, r4
/* 80188BFC 00185B3C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80188C00 00185B40  7C 7E 1B 78 */	mr r30, r3
/* 80188C04 00185B44  7F E3 FB 78 */	mr r3, r31
/* 80188C08 00185B48  C0 04 01 68 */	lfs f0, 0x168(r4)
/* 80188C0C 00185B4C  38 80 00 00 */	li r4, 0
/* 80188C10 00185B50  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 80188C14 00185B54  C0 02 A8 DC */	lfs f0, lbl_80518C3C@sda21(r2)
/* 80188C18 00185B58  C0 7F 01 6C */	lfs f3, 0x16c(r31)
/* 80188C1C 00185B5C  D0 7E 00 18 */	stfs f3, 0x18(r30)
/* 80188C20 00185B60  C0 7F 01 70 */	lfs f3, 0x170(r31)
/* 80188C24 00185B64  D0 7E 00 1C */	stfs f3, 0x1c(r30)
/* 80188C28 00185B68  D0 5F 01 68 */	stfs f2, 0x168(r31)
/* 80188C2C 00185B6C  D0 3F 01 6C */	stfs f1, 0x16c(r31)
/* 80188C30 00185B70  D0 5F 01 70 */	stfs f2, 0x170(r31)
/* 80188C34 00185B74  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 80188C38 00185B78  81 9F 00 00 */	lwz r12, 0(r31)
/* 80188C3C 00185B7C  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 80188C40 00185B80  7D 89 03 A6 */	mtctr r12
/* 80188C44 00185B84  4E 80 04 21 */	bctrl 
/* 80188C48 00185B88  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 80188C4C 00185B8C  7F E4 FB 78 */	mr r4, r31
/* 80188C50 00185B90  C0 22 A9 94 */	lfs f1, lbl_80518CF4@sda21(r2)
/* 80188C54 00185B94  38 61 00 08 */	addi r3, r1, 8
/* 80188C58 00185B98  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188C5C 00185B9C  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80188C60 00185BA0  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80188C64 00185BA4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80188C68 00185BA8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80188C6C 00185BAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80188C70 00185BB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80188C74 00185BB4  7D 89 03 A6 */	mtctr r12
/* 80188C78 00185BB8  4E 80 04 21 */	bctrl 
/* 80188C7C 00185BBC  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80188C80 00185BC0  38 7F 01 38 */	addi r3, r31, 0x138
/* 80188C84 00185BC4  C0 02 A8 DC */	lfs f0, lbl_80518C3C@sda21(r2)
/* 80188C88 00185BC8  38 9F 01 68 */	addi r4, r31, 0x168
/* 80188C8C 00185BCC  C0 61 00 08 */	lfs f3, 8(r1)
/* 80188C90 00185BD0  38 A1 00 20 */	addi r5, r1, 0x20
/* 80188C94 00185BD4  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80188C98 00185BD8  EC 02 00 2A */	fadds f0, f2, f0
/* 80188C9C 00185BDC  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80188CA0 00185BE0  38 C1 00 14 */	addi r6, r1, 0x14
/* 80188CA4 00185BE4  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 80188CA8 00185BE8  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80188CAC 00185BEC  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80188CB0 00185BF0  48 29 F6 29 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 80188CB4 00185BF4  7F E3 FB 78 */	mr r3, r31
/* 80188CB8 00185BF8  38 80 00 00 */	li r4, 0
/* 80188CBC 00185BFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80188CC0 00185C00  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80188CC4 00185C04  7D 89 03 A6 */	mtctr r12
/* 80188CC8 00185C08  4E 80 04 21 */	bctrl 
/* 80188CCC 00185C0C  38 00 00 00 */	li r0, 0
/* 80188CD0 00185C10  38 80 08 0F */	li r4, 0x80f
/* 80188CD4 00185C14  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80188CD8 00185C18  38 A0 00 00 */	li r5, 0
/* 80188CDC 00185C1C  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 80188CE0 00185C20  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80188CE4 00185C24  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80188CE8 00185C28  7D 89 03 A6 */	mtctr r12
/* 80188CEC 00185C2C  4E 80 04 21 */	bctrl 
/* 80188CF0 00185C30  48 2D 01 91 */	bl PSMGetDamageD__Fv
/* 80188CF4 00185C34  28 03 00 00 */	cmplwi r3, 0
/* 80188CF8 00185C38  41 82 00 14 */	beq .L_80188D0C
/* 80188CFC 00185C3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80188D00 00185C40  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80188D04 00185C44  7D 89 03 A6 */	mtctr r12
/* 80188D08 00185C48  4E 80 04 21 */	bctrl 
.L_80188D0C:
/* 80188D0C 00185C4C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80188D10 00185C50  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80188D14 00185C54  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80188D18 00185C58  7C 08 03 A6 */	mtlr r0
/* 80188D1C 00185C5C  38 21 00 40 */	addi r1, r1, 0x40
/* 80188D20 00185C60  4E 80 00 20 */	blr 
.endfn init__Q24Game16NaviPressedStateFPQ24Game4NaviPQ24Game8StateArg

.fn exec__Q24Game16NaviPressedStateFPQ24Game4Navi, global
/* 80188D24 00185C64  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80188D28 00185C68  7C 08 02 A6 */	mflr r0
/* 80188D2C 00185C6C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80188D30 00185C70  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80188D34 00185C74  7C 9F 23 78 */	mr r31, r4
/* 80188D38 00185C78  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80188D3C 00185C7C  7C 7E 1B 78 */	mr r30, r3
/* 80188D40 00185C80  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80188D44 00185C84  80 05 01 F0 */	lwz r0, 0x1f0(r5)
/* 80188D48 00185C88  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80188D4C 00185C8C  41 82 00 20 */	beq .L_80188D6C
/* 80188D50 00185C90  81 83 00 00 */	lwz r12, 0(r3)
/* 80188D54 00185C94  38 A0 00 00 */	li r5, 0
/* 80188D58 00185C98  38 C0 00 00 */	li r6, 0
/* 80188D5C 00185C9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80188D60 00185CA0  7D 89 03 A6 */	mtctr r12
/* 80188D64 00185CA4  4E 80 04 21 */	bctrl 
/* 80188D68 00185CA8  48 00 02 14 */	b .L_80188F7C
.L_80188D6C:
/* 80188D6C 00185CAC  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 80188D70 00185CB0  38 61 00 08 */	addi r3, r1, 8
/* 80188D74 00185CB4  C0 22 A9 94 */	lfs f1, lbl_80518CF4@sda21(r2)
/* 80188D78 00185CB8  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188D7C 00185CBC  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80188D80 00185CC0  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80188D84 00185CC4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80188D88 00185CC8  81 84 00 00 */	lwz r12, 0(r4)
/* 80188D8C 00185CCC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80188D90 00185CD0  7D 89 03 A6 */	mtctr r12
/* 80188D94 00185CD4  4E 80 04 21 */	bctrl 
/* 80188D98 00185CD8  C0 41 00 08 */	lfs f2, 8(r1)
/* 80188D9C 00185CDC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80188DA0 00185CE0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80188DA4 00185CE4  C0 A2 A8 80 */	lfs f5, lbl_80518BE0@sda21(r2)
/* 80188DA8 00185CE8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80188DAC 00185CEC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80188DB0 00185CF0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80188DB4 00185CF4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80188DB8 00185CF8  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 80188DBC 00185CFC  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80188DC0 00185D00  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80188DC4 00185D04  EC 01 00 28 */	fsubs f0, f1, f0
/* 80188DC8 00185D08  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 80188DCC 00185D0C  80 1E 00 20 */	lwz r0, 0x20(r30)
/* 80188DD0 00185D10  2C 00 00 01 */	cmpwi r0, 1
/* 80188DD4 00185D14  41 82 00 60 */	beq .L_80188E34
/* 80188DD8 00185D18  40 80 01 88 */	bge .L_80188F60
/* 80188DDC 00185D1C  2C 00 00 00 */	cmpwi r0, 0
/* 80188DE0 00185D20  40 80 00 08 */	bge .L_80188DE8
/* 80188DE4 00185D24  48 00 01 7C */	b .L_80188F60
.L_80188DE8:
/* 80188DE8 00185D28  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80188DEC 00185D2C  38 7F 01 38 */	addi r3, r31, 0x138
/* 80188DF0 00185D30  C0 02 A8 DC */	lfs f0, lbl_80518C3C@sda21(r2)
/* 80188DF4 00185D34  38 9F 01 68 */	addi r4, r31, 0x168
/* 80188DF8 00185D38  38 A1 00 20 */	addi r5, r1, 0x20
/* 80188DFC 00185D3C  38 C1 00 14 */	addi r6, r1, 0x14
/* 80188E00 00185D40  EC 01 00 2A */	fadds f0, f1, f0
/* 80188E04 00185D44  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80188E08 00185D48  48 29 F4 D1 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 80188E0C 00185D4C  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80188E10 00185D50  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188E14 00185D54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80188E18 00185D58  4C 40 13 82 */	cror 2, 0, 2
/* 80188E1C 00185D5C  40 82 01 44 */	bne .L_80188F60
/* 80188E20 00185D60  38 00 00 01 */	li r0, 1
/* 80188E24 00185D64  C0 02 A9 98 */	lfs f0, lbl_80518CF8@sda21(r2)
/* 80188E28 00185D68  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80188E2C 00185D6C  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 80188E30 00185D70  48 00 01 30 */	b .L_80188F60
.L_80188E34:
/* 80188E34 00185D74  C0 DE 00 10 */	lfs f6, 0x10(r30)
/* 80188E38 00185D78  C0 22 A9 98 */	lfs f1, lbl_80518CF8@sda21(r2)
/* 80188E3C 00185D7C  C0 02 A9 9C */	lfs f0, lbl_80518CFC@sda21(r2)
/* 80188E40 00185D80  EC 46 08 24 */	fdivs f2, f6, f1
/* 80188E44 00185D84  C0 82 A8 E8 */	lfs f4, lbl_80518C48@sda21(r2)
/* 80188E48 00185D88  C0 62 A9 38 */	lfs f3, lbl_80518C98@sda21(r2)
/* 80188E4C 00185D8C  C0 22 A8 A4 */	lfs f1, lbl_80518C04@sda21(r2)
/* 80188E50 00185D90  EC E4 10 28 */	fsubs f7, f4, f2
/* 80188E54 00185D94  EC 40 01 B2 */	fmuls f2, f0, f6
/* 80188E58 00185D98  EC 04 38 28 */	fsubs f0, f4, f7
/* 80188E5C 00185D9C  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80188E60 00185DA0  EC 21 00 32 */	fmuls f1, f1, f0
/* 80188E64 00185DA4  FC 02 28 40 */	fcmpo cr0, f2, f5
/* 80188E68 00185DA8  40 80 00 30 */	bge .L_80188E98
/* 80188E6C 00185DAC  C0 02 A8 8C */	lfs f0, lbl_80518BEC@sda21(r2)
/* 80188E70 00185DB0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80188E74 00185DB4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80188E78 00185DB8  EC 02 00 32 */	fmuls f0, f2, f0
/* 80188E7C 00185DBC  FC 00 00 1E */	fctiwz f0, f0
/* 80188E80 00185DC0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80188E84 00185DC4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80188E88 00185DC8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80188E8C 00185DCC  7C 03 04 2E */	lfsx f0, r3, r0
/* 80188E90 00185DD0  FC 00 00 50 */	fneg f0, f0
/* 80188E94 00185DD4  48 00 00 28 */	b .L_80188EBC
.L_80188E98:
/* 80188E98 00185DD8  C0 02 A8 88 */	lfs f0, lbl_80518BE8@sda21(r2)
/* 80188E9C 00185DDC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80188EA0 00185DE0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80188EA4 00185DE4  EC 02 00 32 */	fmuls f0, f2, f0
/* 80188EA8 00185DE8  FC 00 00 1E */	fctiwz f0, f0
/* 80188EAC 00185DEC  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80188EB0 00185DF0  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80188EB4 00185DF4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80188EB8 00185DF8  7C 03 04 2E */	lfsx f0, r3, r0
.L_80188EBC:
/* 80188EBC 00185DFC  EC 21 00 32 */	fmuls f1, f1, f0
/* 80188EC0 00185E00  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188EC4 00185E04  EC E7 08 2A */	fadds f7, f7, f1
/* 80188EC8 00185E08  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80188ECC 00185E0C  40 80 00 08 */	bge .L_80188ED4
/* 80188ED0 00185E10  FC E0 00 90 */	fmr f7, f0
.L_80188ED4:
/* 80188ED4 00185E14  C0 02 A8 E8 */	lfs f0, lbl_80518C48@sda21(r2)
/* 80188ED8 00185E18  38 7F 01 38 */	addi r3, r31, 0x138
/* 80188EDC 00185E1C  C0 62 A9 74 */	lfs f3, lbl_80518CD4@sda21(r2)
/* 80188EE0 00185E20  38 9F 01 68 */	addi r4, r31, 0x168
/* 80188EE4 00185E24  EC A0 38 28 */	fsubs f5, f0, f7
/* 80188EE8 00185E28  C0 22 A9 90 */	lfs f1, lbl_80518CF0@sda21(r2)
/* 80188EEC 00185E2C  C0 9E 00 14 */	lfs f4, 0x14(r30)
/* 80188EF0 00185E30  38 A1 00 20 */	addi r5, r1, 0x20
/* 80188EF4 00185E34  C0 5E 00 18 */	lfs f2, 0x18(r30)
/* 80188EF8 00185E38  38 C1 00 14 */	addi r6, r1, 0x14
/* 80188EFC 00185E3C  EC 63 01 72 */	fmuls f3, f3, f5
/* 80188F00 00185E40  C0 02 A8 DC */	lfs f0, lbl_80518C3C@sda21(r2)
/* 80188F04 00185E44  EC 21 01 72 */	fmuls f1, f1, f5
/* 80188F08 00185E48  EC 67 19 3A */	fmadds f3, f7, f4, f3
/* 80188F0C 00185E4C  EC 27 08 BA */	fmadds f1, f7, f2, f1
/* 80188F10 00185E50  D0 7F 01 68 */	stfs f3, 0x168(r31)
/* 80188F14 00185E54  D0 3F 01 6C */	stfs f1, 0x16c(r31)
/* 80188F18 00185E58  D0 7F 01 70 */	stfs f3, 0x170(r31)
/* 80188F1C 00185E5C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80188F20 00185E60  EC 01 00 2A */	fadds f0, f1, f0
/* 80188F24 00185E64  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80188F28 00185E68  48 29 F3 B1 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 80188F2C 00185E6C  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80188F30 00185E70  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188F34 00185E74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80188F38 00185E78  4C 40 13 82 */	cror 2, 0, 2
/* 80188F3C 00185E7C  40 82 00 24 */	bne .L_80188F60
/* 80188F40 00185E80  7F C3 F3 78 */	mr r3, r30
/* 80188F44 00185E84  7F E4 FB 78 */	mr r4, r31
/* 80188F48 00185E88  81 9E 00 00 */	lwz r12, 0(r30)
/* 80188F4C 00185E8C  38 A0 00 00 */	li r5, 0
/* 80188F50 00185E90  38 C0 00 00 */	li r6, 0
/* 80188F54 00185E94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80188F58 00185E98  7D 89 03 A6 */	mtctr r12
/* 80188F5C 00185E9C  4E 80 04 21 */	bctrl 
.L_80188F60:
/* 80188F60 00185EA0  C0 02 A8 80 */	lfs f0, lbl_80518BE0@sda21(r2)
/* 80188F64 00185EA4  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80188F68 00185EA8  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80188F6C 00185EAC  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80188F70 00185EB0  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80188F74 00185EB4  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80188F78 00185EB8  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
.L_80188F7C:
/* 80188F7C 00185EBC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80188F80 00185EC0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80188F84 00185EC4  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80188F88 00185EC8  7C 08 03 A6 */	mtlr r0
/* 80188F8C 00185ECC  38 21 00 50 */	addi r1, r1, 0x50
/* 80188F90 00185ED0  4E 80 00 20 */	blr 
.endfn exec__Q24Game16NaviPressedStateFPQ24Game4Navi

.fn cleanup__Q24Game16NaviPressedStateFPQ24Game4Navi, global
/* 80188F94 00185ED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80188F98 00185ED8  7C 08 02 A6 */	mflr r0
/* 80188F9C 00185EDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80188FA0 00185EE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80188FA4 00185EE4  7C 9F 23 78 */	mr r31, r4
/* 80188FA8 00185EE8  38 80 00 01 */	li r4, 1
/* 80188FAC 00185EEC  93 C1 00 08 */	stw r30, 8(r1)
/* 80188FB0 00185EF0  7C 7E 1B 78 */	mr r30, r3
/* 80188FB4 00185EF4  7F E3 FB 78 */	mr r3, r31
/* 80188FB8 00185EF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80188FBC 00185EFC  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80188FC0 00185F00  7D 89 03 A6 */	mtctr r12
/* 80188FC4 00185F04  4E 80 04 21 */	bctrl 
/* 80188FC8 00185F08  7F E3 FB 78 */	mr r3, r31
/* 80188FCC 00185F0C  38 80 00 01 */	li r4, 1
/* 80188FD0 00185F10  81 9F 00 00 */	lwz r12, 0(r31)
/* 80188FD4 00185F14  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 80188FD8 00185F18  7D 89 03 A6 */	mtctr r12
/* 80188FDC 00185F1C  4E 80 04 21 */	bctrl 
/* 80188FE0 00185F20  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 80188FE4 00185F24  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 80188FE8 00185F28  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 80188FEC 00185F2C  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 80188FF0 00185F30  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 80188FF4 00185F34  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 80188FF8 00185F38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80188FFC 00185F3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80189000 00185F40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80189004 00185F44  7C 08 03 A6 */	mtlr r0
/* 80189008 00185F48  38 21 00 10 */	addi r1, r1, 0x10
/* 8018900C 00185F4C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game16NaviPressedStateFPQ24Game4Navi

.fn pressable__Q24Game16NaviPressedStateFv, weak
/* 80189010 00185F50  38 60 00 00 */	li r3, 0
/* 80189014 00185F54  4E 80 00 20 */	blr 
.endfn pressable__Q24Game16NaviPressedStateFv

.fn invincible__Q24Game16NaviPressedStateFv, weak
/* 80189018 00185F58  38 60 00 01 */	li r3, 1
/* 8018901C 00185F5C  4E 80 00 20 */	blr 
.endfn invincible__Q24Game16NaviPressedStateFv

.fn vsUsableY__Q24Game16NaviPressedStateFv, weak
/* 80189020 00185F60  38 60 00 00 */	li r3, 0
/* 80189024 00185F64  4E 80 00 20 */	blr 
.endfn vsUsableY__Q24Game16NaviPressedStateFv

.fn callable__Q24Game9NaviStateFv, weak
/* 80189028 00185F68  38 60 00 00 */	li r3, 0
/* 8018902C 00185F6C  4E 80 00 20 */	blr 
.endfn callable__Q24Game9NaviStateFv

.fn pressable__Q24Game9NaviStateFv, weak
/* 80189030 00185F70  38 60 00 01 */	li r3, 1
/* 80189034 00185F74  4E 80 00 20 */	blr 
.endfn pressable__Q24Game9NaviStateFv

.fn callable__Q24Game15NaviPelletStateFv, weak
/* 80189038 00185F78  38 60 00 01 */	li r3, 1
/* 8018903C 00185F7C  4E 80 00 20 */	blr 
.endfn callable__Q24Game15NaviPelletStateFv

.fn invincible__Q24Game13NaviDeadStateFv, weak
/* 80189040 00185F80  38 60 00 01 */	li r3, 1
/* 80189044 00185F84  4E 80 00 20 */	blr 
.endfn invincible__Q24Game13NaviDeadStateFv

.fn pressable__Q24Game13NaviDeadStateFv, weak
/* 80189048 00185F88  38 60 00 00 */	li r3, 0
/* 8018904C 00185F8C  4E 80 00 20 */	blr 
.endfn pressable__Q24Game13NaviDeadStateFv

.fn vsUsableY__Q24Game13NaviDeadStateFv, weak
/* 80189050 00185F90  38 60 00 00 */	li r3, 0
/* 80189054 00185F94  4E 80 00 20 */	blr 
.endfn vsUsableY__Q24Game13NaviDeadStateFv

.fn invincible__Q24Game16NaviDamagedStateFv, weak
/* 80189058 00185F98  38 60 00 01 */	li r3, 1
/* 8018905C 00185F9C  4E 80 00 20 */	blr 
.endfn invincible__Q24Game16NaviDamagedStateFv

.fn vsUsableY__Q24Game16NaviDamagedStateFv, weak
/* 80189060 00185FA0  38 60 00 00 */	li r3, 0
/* 80189064 00185FA4  4E 80 00 20 */	blr 
.endfn vsUsableY__Q24Game16NaviDamagedStateFv

.fn vsUsableY__Q24Game15NaviAbsorbStateFv, weak
/* 80189068 00185FA8  38 60 00 00 */	li r3, 0
/* 8018906C 00185FAC  4E 80 00 20 */	blr 
.endfn vsUsableY__Q24Game15NaviAbsorbStateFv

.fn invincible__Q24Game15NaviAbsorbStateFv, weak
/* 80189070 00185FB0  38 60 00 01 */	li r3, 1
/* 80189074 00185FB4  4E 80 00 20 */	blr 
.endfn invincible__Q24Game15NaviAbsorbStateFv

.fn pressable__Q24Game15NaviAbsorbStateFv, weak
/* 80189078 00185FB8  38 60 00 00 */	li r3, 0
/* 8018907C 00185FBC  4E 80 00 20 */	blr 
.endfn pressable__Q24Game15NaviAbsorbStateFv

.fn getSize__Q32og6Screen17DispMemberContenaFv, weak
/* 80189080 00185FC0  38 60 00 38 */	li r3, 0x38
/* 80189084 00185FC4  4E 80 00 20 */	blr 
.endfn getSize__Q32og6Screen17DispMemberContenaFv

.fn getOwnerID__Q32og6Screen17DispMemberContenaFv, weak
/* 80189088 00185FC8  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8018908C 00185FCC  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80189090 00185FD0  4E 80 00 20 */	blr 
.endfn getOwnerID__Q32og6Screen17DispMemberContenaFv

.fn getMemberID__Q32og6Screen17DispMemberContenaFv, weak
/* 80189094 00185FD4  3C 80 54 45 */	lis r4, 0x54454E41@ha
/* 80189098 00185FD8  3C 60 00 43 */	lis r3, 0x00434F4E@ha
/* 8018909C 00185FDC  38 84 4E 41 */	addi r4, r4, 0x54454E41@l
/* 801890A0 00185FE0  38 63 4F 4E */	addi r3, r3, 0x00434F4E@l
/* 801890A4 00185FE4  4E 80 00 20 */	blr 
.endfn getMemberID__Q32og6Screen17DispMemberContenaFv

.fn getSize__Q32og6Screen17DispMemberUfoMenuFv, weak
/* 801890A8 00185FE8  38 60 00 10 */	li r3, 0x10
/* 801890AC 00185FEC  4E 80 00 20 */	blr 
.endfn getSize__Q32og6Screen17DispMemberUfoMenuFv

.fn getOwnerID__Q32og6Screen17DispMemberUfoMenuFv, weak
/* 801890B0 00185FF0  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 801890B4 00185FF4  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 801890B8 00185FF8  4E 80 00 20 */	blr 
.endfn getOwnerID__Q32og6Screen17DispMemberUfoMenuFv

.fn getMemberID__Q32og6Screen17DispMemberUfoMenuFv, weak
/* 801890BC 00185FFC  3C 80 4D 45 */	lis r4, 0x4D454E55@ha
/* 801890C0 00186000  3C 60 00 55 */	lis r3, 0x0055464F@ha
/* 801890C4 00186004  38 84 4E 55 */	addi r4, r4, 0x4D454E55@l
/* 801890C8 00186008  38 63 46 4F */	addi r3, r3, 0x0055464F@l
/* 801890CC 0018600C  4E 80 00 20 */	blr 
.endfn getMemberID__Q32og6Screen17DispMemberUfoMenuFv

.fn getSize__Q32og6Screen18DispMemberUfoGroupFv, weak
/* 801890D0 00186010  38 60 00 8C */	li r3, 0x8c
/* 801890D4 00186014  4E 80 00 20 */	blr 
.endfn getSize__Q32og6Screen18DispMemberUfoGroupFv

.fn getOwnerID__Q32og6Screen18DispMemberUfoGroupFv, weak
/* 801890D8 00186018  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 801890DC 0018601C  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 801890E0 00186020  4E 80 00 20 */	blr 
.endfn getOwnerID__Q32og6Screen18DispMemberUfoGroupFv

.fn getMemberID__Q32og6Screen18DispMemberUfoGroupFv, weak
/* 801890E4 00186024  3C 80 5F 47 */	lis r4, 0x5F475250@ha
/* 801890E8 00186028  3C 60 00 55 */	lis r3, 0x0055464F@ha
/* 801890EC 0018602C  38 84 52 50 */	addi r4, r4, 0x5F475250@l
/* 801890F0 00186030  38 63 46 4F */	addi r3, r3, 0x0055464F@l
/* 801890F4 00186034  4E 80 00 20 */	blr 
.endfn getMemberID__Q32og6Screen18DispMemberUfoGroupFv

.fn doSetSubMemberAll__Q32og6Screen18DispMemberUfoGroupFv, weak
/* 801890F8 00186038  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801890FC 0018603C  7C 08 02 A6 */	mflr r0
/* 80189100 00186040  90 01 00 14 */	stw r0, 0x14(r1)
/* 80189104 00186044  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80189108 00186048  7C 7F 1B 78 */	mr r31, r3
/* 8018910C 0018604C  38 9F 00 08 */	addi r4, r31, 8
/* 80189110 00186050  48 18 62 CD */	bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
/* 80189114 00186054  7F E3 FB 78 */	mr r3, r31
/* 80189118 00186058  38 9F 00 18 */	addi r4, r31, 0x18
/* 8018911C 0018605C  48 18 62 C1 */	bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
/* 80189120 00186060  7F E3 FB 78 */	mr r3, r31
/* 80189124 00186064  38 9F 00 50 */	addi r4, r31, 0x50
/* 80189128 00186068  48 18 62 B5 */	bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
/* 8018912C 0018606C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80189130 00186070  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80189134 00186074  7C 08 03 A6 */	mtlr r0
/* 80189138 00186078  38 21 00 10 */	addi r1, r1, 0x10
/* 8018913C 0018607C  4E 80 00 20 */	blr 
.endfn doSetSubMemberAll__Q32og6Screen18DispMemberUfoGroupFv

.fn invincible__Q24Game18NaviContainerStateFv, weak
/* 80189140 00186080  38 60 00 01 */	li r3, 1
/* 80189144 00186084  4E 80 00 20 */	blr 
.endfn invincible__Q24Game18NaviContainerStateFv

.fn pressable__Q24Game18NaviSaraiExitStateFv, weak
/* 80189148 00186088  38 60 00 00 */	li r3, 0
/* 8018914C 0018608C  4E 80 00 20 */	blr 
.endfn pressable__Q24Game18NaviSaraiExitStateFv

.fn pressable__Q24Game14NaviSaraiStateFv, weak
/* 80189150 00186090  38 60 00 00 */	li r3, 0
/* 80189154 00186094  4E 80 00 20 */	blr 
.endfn pressable__Q24Game14NaviSaraiStateFv

.fn pressable__Q24Game19NaviKokeDamageStateFv, weak
/* 80189158 00186098  38 60 00 01 */	li r3, 1
/* 8018915C 0018609C  4E 80 00 20 */	blr 
.endfn pressable__Q24Game19NaviKokeDamageStateFv

.fn vsUsableY__Q24Game19NaviKokeDamageStateFv, weak
/* 80189160 001860A0  38 60 00 00 */	li r3, 0
/* 80189164 001860A4  4E 80 00 20 */	blr 
.endfn vsUsableY__Q24Game19NaviKokeDamageStateFv

.fn pressable__Q24Game14NaviFlickStateFv, weak
/* 80189168 001860A8  38 60 00 01 */	li r3, 1
/* 8018916C 001860AC  4E 80 00 20 */	blr 
.endfn pressable__Q24Game14NaviFlickStateFv

.fn vsUsableY__Q24Game14NaviFlickStateFv, weak
/* 80189170 001860B0  38 60 00 00 */	li r3, 0
/* 80189174 001860B4  4E 80 00 20 */	blr 
.endfn vsUsableY__Q24Game14NaviFlickStateFv

.fn pressable__Q24Game17NaviFallMeckStateFv, weak
/* 80189178 001860B8  38 60 00 00 */	li r3, 0
/* 8018917C 001860BC  4E 80 00 20 */	blr 
.endfn pressable__Q24Game17NaviFallMeckStateFv

.fn getName__Q23efx14ArgDopingSmokeFv, weak
/* 80189180 001860C0  3C 60 80 48 */	lis r3, lbl_8047EBD8@ha
/* 80189184 001860C4  38 63 EB D8 */	addi r3, r3, lbl_8047EBD8@l
/* 80189188 001860C8  4E 80 00 20 */	blr 
.endfn getName__Q23efx14ArgDopingSmokeFv

.fn invincible__Q24Game13NaviDopeStateFv, weak
/* 8018918C 001860CC  38 60 00 01 */	li r3, 1
/* 80189190 001860D0  4E 80 00 20 */	blr 
.endfn invincible__Q24Game13NaviDopeStateFv

.fn invincible__Q24Game13NaviNukuStateFv, weak
/* 80189194 001860D4  38 60 00 01 */	li r3, 1
/* 80189198 001860D8  4E 80 00 20 */	blr 
.endfn invincible__Q24Game13NaviNukuStateFv

.fn needYChangeMotion__Q24Game15NaviFollowStateFv, weak
/* 8018919C 001860DC  38 60 00 01 */	li r3, 1
/* 801891A0 001860E0  4E 80 00 20 */	blr 
.endfn needYChangeMotion__Q24Game15NaviFollowStateFv

.fn callable__Q24Game13NaviWalkStateFv, weak
/* 801891A4 001860E4  38 60 00 01 */	li r3, 1
/* 801891A8 001860E8  4E 80 00 20 */	blr 
.endfn callable__Q24Game13NaviWalkStateFv

.fn needYChangeMotion__Q24Game13NaviWalkStateFv, weak
/* 801891AC 001860EC  38 60 00 01 */	li r3, 1
/* 801891B0 001860F0  4E 80 00 20 */	blr 
.endfn needYChangeMotion__Q24Game13NaviWalkStateFv

.fn vsUsableY__Q24Game14NaviStuckStateFv, weak
/* 801891B4 001860F4  38 60 00 00 */	li r3, 0
/* 801891B8 001860F8  4E 80 00 20 */	blr 
.endfn vsUsableY__Q24Game14NaviStuckStateFv

.fn "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi", weak
/* 801891BC 001860FC  4E 80 00 20 */	blr 
.endfn "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"

.fn "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi", weak
/* 801891C0 00186100  4E 80 00 20 */	blr 
.endfn "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"

.fn "create__Q24Game26StateMachine<Q24Game4Navi>Fi", weak
/* 801891C4 00186104  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801891C8 00186108  7C 08 02 A6 */	mflr r0
/* 801891CC 0018610C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801891D0 00186110  38 00 00 00 */	li r0, 0
/* 801891D4 00186114  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801891D8 00186118  7C 7F 1B 78 */	mr r31, r3
/* 801891DC 0018611C  90 83 00 0C */	stw r4, 0xc(r3)
/* 801891E0 00186120  90 03 00 08 */	stw r0, 8(r3)
/* 801891E4 00186124  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801891E8 00186128  54 03 10 3A */	slwi r3, r0, 2
/* 801891EC 0018612C  4B E9 AD C1 */	bl __nwa__FUl
/* 801891F0 00186130  90 7F 00 04 */	stw r3, 4(r31)
/* 801891F4 00186134  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801891F8 00186138  54 03 10 3A */	slwi r3, r0, 2
/* 801891FC 0018613C  4B E9 AD B1 */	bl __nwa__FUl
/* 80189200 00186140  90 7F 00 10 */	stw r3, 0x10(r31)
/* 80189204 00186144  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80189208 00186148  54 03 10 3A */	slwi r3, r0, 2
/* 8018920C 0018614C  4B E9 AD A1 */	bl __nwa__FUl
/* 80189210 00186150  90 7F 00 14 */	stw r3, 0x14(r31)
/* 80189214 00186154  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80189218 00186158  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018921C 0018615C  7C 08 03 A6 */	mtlr r0
/* 80189220 00186160  38 21 00 10 */	addi r1, r1, 0x10
/* 80189224 00186164  4E 80 00 20 */	blr 
.endfn "create__Q24Game26StateMachine<Q24Game4Navi>Fi"

.fn "invoke__45Delegate1<Q24Game14NaviPunchState,P8CollPart>FP8CollPart", weak
/* 80189228 00186168  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018922C 0018616C  7C 08 02 A6 */	mflr r0
/* 80189230 00186170  7C 65 1B 78 */	mr r5, r3
/* 80189234 00186174  90 01 00 14 */	stw r0, 0x14(r1)
/* 80189238 00186178  39 85 00 08 */	addi r12, r5, 8
/* 8018923C 0018617C  80 63 00 04 */	lwz r3, 4(r3)
/* 80189240 00186180  4B F3 88 E5 */	bl __ptmf_scall
/* 80189244 00186184  60 00 00 00 */	nop 
/* 80189248 00186188  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018924C 0018618C  7C 08 03 A6 */	mtlr r0
/* 80189250 00186190  38 21 00 10 */	addi r1, r1, 0x10
/* 80189254 00186194  4E 80 00 20 */	blr 
.endfn "invoke__45Delegate1<Q24Game14NaviPunchState,P8CollPart>FP8CollPart"

.fn "invoke__37Delegate<Q24Game18NaviThrowWaitState>Fv", weak
/* 80189258 00186198  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018925C 0018619C  7C 08 02 A6 */	mflr r0
/* 80189260 001861A0  7C 64 1B 78 */	mr r4, r3
/* 80189264 001861A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80189268 001861A8  39 84 00 08 */	addi r12, r4, 8
/* 8018926C 001861AC  80 63 00 04 */	lwz r3, 4(r3)
/* 80189270 001861B0  4B F3 88 B5 */	bl __ptmf_scall
/* 80189274 001861B4  60 00 00 00 */	nop 
/* 80189278 001861B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018927C 001861BC  7C 08 03 A6 */	mtlr r0
/* 80189280 001861C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80189284 001861C4  4E 80 00 20 */	blr 
.endfn "invoke__37Delegate<Q24Game18NaviThrowWaitState>Fv"

.fn "getCurrID__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi", weak
/* 80189288 001861C8  80 64 02 74 */	lwz r3, 0x274(r4)
/* 8018928C 001861CC  28 03 00 00 */	cmplwi r3, 0
/* 80189290 001861D0  41 82 00 0C */	beq .L_8018929C
/* 80189294 001861D4  80 63 00 04 */	lwz r3, 4(r3)
/* 80189298 001861D8  4E 80 00 20 */	blr 
.L_8018929C:
/* 8018929C 001861DC  38 60 FF FF */	li r3, -1
/* 801892A0 001861E0  4E 80 00 20 */	blr 
.endfn "getCurrID__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"

.fn "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>", weak
/* 801892A4 001861E4  80 C3 00 08 */	lwz r6, 8(r3)
/* 801892A8 001861E8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801892AC 001861EC  7C 06 00 00 */	cmpw r6, r0
/* 801892B0 001861F0  4C 80 00 20 */	bgelr 
/* 801892B4 001861F4  80 A3 00 04 */	lwz r5, 4(r3)
/* 801892B8 001861F8  54 C0 10 3A */	slwi r0, r6, 2
/* 801892BC 001861FC  7C 85 01 2E */	stwx r4, r5, r0
/* 801892C0 00186200  80 A4 00 04 */	lwz r5, 4(r4)
/* 801892C4 00186204  2C 05 00 00 */	cmpwi r5, 0
/* 801892C8 00186208  41 80 00 10 */	blt .L_801892D8
/* 801892CC 0018620C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801892D0 00186210  7C 05 00 00 */	cmpw r5, r0
/* 801892D4 00186214  41 80 00 0C */	blt .L_801892E0
.L_801892D8:
/* 801892D8 00186218  38 00 00 00 */	li r0, 0
/* 801892DC 0018621C  48 00 00 08 */	b .L_801892E4
.L_801892E0:
/* 801892E0 00186220  38 00 00 01 */	li r0, 1
.L_801892E4:
/* 801892E4 00186224  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801892E8 00186228  4D 82 00 20 */	beqlr 
/* 801892EC 0018622C  90 64 00 08 */	stw r3, 8(r4)
/* 801892F0 00186230  80 03 00 08 */	lwz r0, 8(r3)
/* 801892F4 00186234  80 C4 00 04 */	lwz r6, 4(r4)
/* 801892F8 00186238  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801892FC 0018623C  54 00 10 3A */	slwi r0, r0, 2
/* 80189300 00186240  7C C5 01 2E */	stwx r6, r5, r0
/* 80189304 00186244  80 04 00 04 */	lwz r0, 4(r4)
/* 80189308 00186248  80 A3 00 08 */	lwz r5, 8(r3)
/* 8018930C 0018624C  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80189310 00186250  54 00 10 3A */	slwi r0, r0, 2
/* 80189314 00186254  7C A4 01 2E */	stwx r5, r4, r0
/* 80189318 00186258  80 83 00 08 */	lwz r4, 8(r3)
/* 8018931C 0018625C  38 04 00 01 */	addi r0, r4, 1
/* 80189320 00186260  90 03 00 08 */	stw r0, 8(r3)
/* 80189324 00186264  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"

.fn __sinit_naviState_cpp, local
/* 80189328 00186268  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8018932C 0018626C  38 00 FF FF */	li r0, -1
/* 80189330 00186270  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80189334 00186274  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80189338 00186278  90 0D 93 38 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8018933C 0018627C  D4 03 2D 40 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80189340 00186280  D0 0D 93 3C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80189344 00186284  D0 03 00 04 */	stfs f0, 4(r3)
/* 80189348 00186288  D0 03 00 08 */	stfs f0, 8(r3)
/* 8018934C 0018628C  4E 80 00 20 */	blr 
.endfn __sinit_naviState_cpp

.fn "@60@4@onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent", weak
/* 80189350 00186290  39 60 00 04 */	li r11, 4
/* 80189354 00186294  7D 63 58 2E */	lwzx r11, r3, r11
/* 80189358 00186298  7C 63 5A 14 */	add r3, r3, r11
/* 8018935C 0018629C  38 63 FF C4 */	addi r3, r3, -60
/* 80189360 001862A0  4B FF CE B0 */	b onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent
.endfn "@60@4@onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent"

.fn "@32@4@onKeyEvent__Q24Game14NaviThrowStateFRCQ28SysShape8KeyEvent", weak
/* 80189364 001862A4  39 60 00 04 */	li r11, 4
/* 80189368 001862A8  7D 63 58 2E */	lwzx r11, r3, r11
/* 8018936C 001862AC  7C 63 5A 14 */	add r3, r3, r11
/* 80189370 001862B0  38 63 FF E0 */	addi r3, r3, -32
/* 80189374 001862B4  4B FF E0 FC */	b onKeyEvent__Q24Game14NaviThrowStateFRCQ28SysShape8KeyEvent
.endfn "@32@4@onKeyEvent__Q24Game14NaviThrowStateFRCQ28SysShape8KeyEvent"
