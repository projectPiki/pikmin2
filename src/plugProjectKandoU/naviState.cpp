#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_naviState_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047EAC8
    lbl_8047EAC8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x6E617669
        .4byte 0x53746174
        .4byte 0x65000000
    lbl_8047EAE0:
        .4byte 0x00000000
        .float 0.25
        .4byte 0x0000000B
        .float 0.25
        .4byte 0x00000036
        .float 0.25
        .4byte 0x00000032
        .float 0.25
    .global lbl_8047EB00
    lbl_8047EB00:
        .4byte 0x00000000
        .float 0.25
        .4byte 0x0000000B
        .float 0.25
        .4byte 0x00000036
        .float 0.25
        .4byte 0x0000000D
        .float 0.25
    .global lbl_8047EB20
    lbl_8047EB20:
        .4byte 0x00000032
        .float 0.25
        .4byte 0x00000000
        .float 0.25
        .4byte 0x00000003
        .float 0.25
        .4byte 0x00000036
        .float 0.25
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x00000000
    .global lbl_8047EB4C
    lbl_8047EB4C:
        .4byte 0x6E617669
        .4byte 0x53746174
        .4byte 0x652E6370
        .4byte 0x70000000
    .global lbl_8047EB5C
    lbl_8047EB5C:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x6E617669
        .4byte 0x20636C69
        .4byte 0x6D620A00
    .global lbl_8047EB74
    lbl_8047EB74:
        .4byte 0x666C6963
        .4byte 0x6B206E65
        .4byte 0x65647320
        .4byte 0x4E617669
        .4byte 0x466C6963
        .4byte 0x6B496E69
        .4byte 0x74417267
        .4byte 0x20210A00
        .4byte 0x67616D65
        .4byte 0x53746174
        .4byte 0x2E680000
    .global lbl_8047EBA0
    lbl_8047EBA0:
        .4byte 0x6F70656E
        .4byte 0x2D636F6E
        .4byte 0x74000000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x41726753
        .4byte 0x63616C65
        .4byte 0x00000000
    .global lbl_8047EBD8
    lbl_8047EBD8:
        .4byte 0x41726744
        .4byte 0x6F70696E
        .4byte 0x67536D6F
        .4byte 0x6B650000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B2D40
    lbl_804B2D40:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000003
        .4byte 0x00000000
    .global "se_taisos__23@unnamed@naviState_cpp@"
    "se_taisos__23@unnamed@naviState_cpp@":
        .4byte 0x00000883
        .4byte 0x00000884
        .4byte 0x00000885
    .global "se_chats__23@unnamed@naviState_cpp@"
    "se_chats__23@unnamed@naviState_cpp@":
        .4byte 0x00000886
        .4byte 0x00000887
        .4byte 0x00000888
    .global "se_lookbacks__23@unnamed@naviState_cpp@"
    "se_lookbacks__23@unnamed@naviState_cpp@":
        .4byte 0x00000880
        .4byte 0x00000881
        .4byte 0x00000882
    .global "se_novis__23@unnamed@naviState_cpp@"
    "se_novis__23@unnamed@naviState_cpp@":
        .4byte 0x0000087D
        .4byte 0x0000087E
        .4byte 0x0000087F
    .global "se_jumps__23@unnamed@naviState_cpp@"
    "se_jumps__23@unnamed@naviState_cpp@":
        .4byte 0x00000874
        .4byte 0x00000875
        .4byte 0x00000876
    .global "se_kyoros__23@unnamed@naviState_cpp@"
    "se_kyoros__23@unnamed@naviState_cpp@":
        .4byte 0x0000087A
        .4byte 0x0000087B
        .4byte 0x0000087C
    .global lbl_804B2DA4
    lbl_804B2DA4:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte hitCallback__Q24Game14NaviPunchStateFP8CollPart
    .global lbl_804B2DB0
    lbl_804B2DB0:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte doAnimCallback__Q24Game18NaviThrowWaitStateFv
    .global __vt__Q24Game16NaviPressedState
    __vt__Q24Game16NaviPressedState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game16NaviPressedStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game16NaviPressedStateFPQ24Game4Navi
        .4byte cleanup__Q24Game16NaviPressedStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game16NaviPressedStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game16NaviPressedStateFv .4byte callable__Q24Game9NaviStateFv
        .4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
        .4byte needYChangeMotion__Q24Game9NaviStateFv
        .4byte vsUsableY__Q24Game16NaviPressedStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game20NaviDemo_HoleInState
    __vt__Q24Game20NaviDemo_HoleInState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q24Game20NaviDemo_HoleInStateFPQ24Game4NaviPQ24Game8StateArg .4byte
   exec__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi .4byte
   cleanup__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi .4byte
   "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi" .4byte
   "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi" .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte
   onKeyEvent__Q24Game20NaviDemo_HoleInStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game17NaviDemo_UfoState
    __vt__Q24Game17NaviDemo_UfoState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game17NaviDemo_UfoStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi
        .4byte cleanup__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game15NaviPelletState
    __vt__Q24Game15NaviPelletState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game15NaviPelletStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game15NaviPelletStateFPQ24Game4Navi
        .4byte cleanup__Q24Game15NaviPelletStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte
   onKeyEvent__Q24Game15NaviPelletStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game15NaviPelletStateFv
        .4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
        .4byte needYChangeMotion__Q24Game9NaviStateFv
        .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game14NaviThrowState
    __vt__Q24Game14NaviThrowState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game14NaviThrowStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game14NaviThrowStateFPQ24Game4Navi
        .4byte cleanup__Q24Game14NaviThrowStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
        .4byte onKeyEvent__Q24Game14NaviThrowStateFRCQ28SysShape8KeyEvent
        .4byte 0
        .4byte 0
        .4byte
   "@32@4@onKeyEvent__Q24Game14NaviThrowStateFRCQ28SysShape8KeyEvent" .global
   __vt__Q24Game18NaviThrowWaitState
    __vt__Q24Game18NaviThrowWaitState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game18NaviThrowWaitStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
        .4byte cleanup__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
        .4byte resume__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
        .4byte restart__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game18NaviThrowWaitStateFR14J2DGrafContextRi
        .4byte onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent
        .4byte 0
        .4byte 0
        .4byte
   "@60@4@onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent"
    .global "__vt__37Delegate<Q24Game18NaviThrowWaitState>"
    "__vt__37Delegate<Q24Game18NaviThrowWaitState>":
        .4byte 0
        .4byte 0
        .4byte "invoke__37Delegate<Q24Game18NaviThrowWaitState>Fv"
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game15NaviGatherState
    __vt__Q24Game15NaviGatherState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game15NaviGatherStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game15NaviGatherStateFPQ24Game4Navi
        .4byte cleanup__Q24Game15NaviGatherStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game13NaviDeadState
    __vt__Q24Game13NaviDeadState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game13NaviDeadStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game13NaviDeadStateFPQ24Game4Navi
        .4byte cleanup__Q24Game13NaviDeadStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game13NaviDeadStateFv
        .4byte
   onKeyEvent__Q24Game13NaviDeadStateFPQ24Game4NaviRCQ28SysShape8KeyEvent .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game13NaviDeadStateFv .4byte callable__Q24Game9NaviStateFv
        .4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
        .4byte needYChangeMotion__Q24Game9NaviStateFv
        .4byte vsUsableY__Q24Game13NaviDeadStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game16NaviDamagedState
    __vt__Q24Game16NaviDamagedState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game16NaviDamagedStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game16NaviDamagedStateFPQ24Game4Navi
        .4byte cleanup__Q24Game16NaviDamagedStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game16NaviDamagedStateFv
        .4byte
   onKeyEvent__Q24Game16NaviDamagedStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte
   vsUsableY__Q24Game16NaviDamagedStateFv .4byte
   draw2d__Q24Game9NaviStateFR14J2DGrafContextRi .global
   __vt__Q24Game15NaviAbsorbState
    __vt__Q24Game15NaviAbsorbState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game15NaviAbsorbStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game15NaviAbsorbStateFPQ24Game4Navi
        .4byte cleanup__Q24Game15NaviAbsorbStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game15NaviAbsorbStateFv
        .4byte
   onKeyEvent__Q24Game15NaviAbsorbStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game15NaviAbsorbStateFv .4byte callable__Q24Game9NaviStateFv
        .4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
        .4byte needYChangeMotion__Q24Game9NaviStateFv
        .4byte vsUsableY__Q24Game15NaviAbsorbStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q32og6Screen17DispMemberContena
    __vt__Q32og6Screen17DispMemberContena:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen17DispMemberContenaFv
        .4byte getOwnerID__Q32og6Screen17DispMemberContenaFv
        .4byte getMemberID__Q32og6Screen17DispMemberContenaFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen17DispMemberUfoMenu
    __vt__Q32og6Screen17DispMemberUfoMenu:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen17DispMemberUfoMenuFv
        .4byte getOwnerID__Q32og6Screen17DispMemberUfoMenuFv
        .4byte getMemberID__Q32og6Screen17DispMemberUfoMenuFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen18DispMemberUfoGroup
    __vt__Q32og6Screen18DispMemberUfoGroup:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen18DispMemberUfoGroupFv
        .4byte getOwnerID__Q32og6Screen18DispMemberUfoGroupFv
        .4byte getMemberID__Q32og6Screen18DispMemberUfoGroupFv
        .4byte doSetSubMemberAll__Q32og6Screen18DispMemberUfoGroupFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game18NaviContainerState
    __vt__Q24Game18NaviContainerState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game18NaviContainerStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game18NaviContainerStateFPQ24Game4Navi
        .4byte cleanup__Q24Game18NaviContainerStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game18NaviContainerStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game18NaviSaraiExitState
    __vt__Q24Game18NaviSaraiExitState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game18NaviSaraiExitStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game18NaviSaraiExitStateFPQ24Game4Navi
        .4byte cleanup__Q24Game18NaviSaraiExitStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game18NaviSaraiExitStateFPQ24Game4NaviPQ23Sys8Triangle
        .4byte pressable__Q24Game18NaviSaraiExitStateFv
        .4byte callable__Q24Game9NaviStateFv
        .4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
        .4byte needYChangeMotion__Q24Game9NaviStateFv
        .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game14NaviSaraiState
    __vt__Q24Game14NaviSaraiState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game14NaviSaraiStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game14NaviSaraiStateFPQ24Game4Navi
        .4byte cleanup__Q24Game14NaviSaraiStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game14NaviSaraiStateFv .4byte callable__Q24Game9NaviStateFv
        .4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
        .4byte needYChangeMotion__Q24Game9NaviStateFv
        .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game19NaviKokeDamageState
    __vt__Q24Game19NaviKokeDamageState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game19NaviKokeDamageStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game19NaviKokeDamageStateFPQ24Game4Navi
        .4byte cleanup__Q24Game19NaviKokeDamageStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte
   onKeyEvent__Q24Game19NaviKokeDamageStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game19NaviKokeDamageStateFv .4byte
   callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte
   vsUsableY__Q24Game19NaviKokeDamageStateFv .4byte
   draw2d__Q24Game9NaviStateFR14J2DGrafContextRi .global
   __vt__Q24Game14NaviFlickState
    __vt__Q24Game14NaviFlickState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game14NaviFlickStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game14NaviFlickStateFPQ24Game4Navi
        .4byte cleanup__Q24Game14NaviFlickStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte
   onKeyEvent__Q24Game14NaviFlickStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game14NaviFlickStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game14NaviFlickStateFv .4byte callable__Q24Game9NaviStateFv
        .4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
        .4byte needYChangeMotion__Q24Game9NaviStateFv
        .4byte vsUsableY__Q24Game14NaviFlickStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game17NaviFallMeckState
    __vt__Q24Game17NaviFallMeckState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game17NaviFallMeckStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game17NaviFallMeckStateFPQ24Game4Navi
        .4byte cleanup__Q24Game17NaviFallMeckStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte
   onKeyEvent__Q24Game17NaviFallMeckStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game17NaviFallMeckStateFPQ24Game4NaviPQ23Sys8Triangle
        .4byte pressable__Q24Game17NaviFallMeckStateFv
        .4byte callable__Q24Game9NaviStateFv
        .4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
        .4byte needYChangeMotion__Q24Game9NaviStateFv
        .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game14NaviClimbState
    __vt__Q24Game14NaviClimbState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game14NaviClimbStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game14NaviClimbStateFPQ24Game4Navi
        .4byte cleanup__Q24Game14NaviClimbStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q23efx14ArgDopingSmoke
    __vt__Q23efx14ArgDopingSmoke:
        .4byte 0
        .4byte 0
        .4byte getName__Q23efx14ArgDopingSmokeFv
    .global __vt__Q24Game13NaviDopeState
    __vt__Q24Game13NaviDopeState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game13NaviDopeStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game13NaviDopeStateFPQ24Game4Navi
        .4byte cleanup__Q24Game13NaviDopeStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game13NaviDopeStateFv
        .4byte
   onKeyEvent__Q24Game13NaviDopeStateFPQ24Game4NaviRCQ28SysShape8KeyEvent .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game19NaviNukuAdjustState
    __vt__Q24Game19NaviNukuAdjustState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game19NaviNukuAdjustStateFPQ24Game4Navi
        .4byte cleanup__Q24Game19NaviNukuAdjustStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviRQ24Game9CollEvent
        .4byte
   "wallCallback__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviR10Vector3<f>"
        .4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
        .4byte pressable__Q24Game9NaviStateFv
        .4byte callable__Q24Game9NaviStateFv
        .4byte ignoreAtari__Q24Game19NaviNukuAdjustStateFPQ24Game8Creature
        .4byte needYChangeMotion__Q24Game9NaviStateFv
        .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game13NaviNukuState
    __vt__Q24Game13NaviNukuState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game13NaviNukuStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game13NaviNukuStateFPQ24Game4Navi
        .4byte cleanup__Q24Game13NaviNukuStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game13NaviNukuStateFv
        .4byte
   onKeyEvent__Q24Game13NaviNukuStateFPQ24Game4NaviRCQ28SysShape8KeyEvent .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game17NaviPathMoveState
    __vt__Q24Game17NaviPathMoveState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game17NaviPathMoveStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game17NaviPathMoveStateFPQ24Game4Navi
        .4byte cleanup__Q24Game17NaviPathMoveStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global "__vt__45Delegate1<Q24Game14NaviPunchState,P8CollPart>"
    "__vt__45Delegate1<Q24Game14NaviPunchState,P8CollPart>":
        .4byte 0
        .4byte 0
        .4byte
   "invoke__45Delegate1<Q24Game14NaviPunchState,P8CollPart>FP8CollPart" .global
   "__vt__22IDelegate1<P8CollPart>"
    "__vt__22IDelegate1<P8CollPart>":
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q23efx11TOrimapunch
    __vt__Q23efx11TOrimapunch:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game14NaviPunchState
    __vt__Q24Game14NaviPunchState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game14NaviPunchStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game14NaviPunchStateFPQ24Game4Navi
        .4byte cleanup__Q24Game14NaviPunchStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte
   onKeyEvent__Q24Game14NaviPunchStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game15NaviFollowState
    __vt__Q24Game15NaviFollowState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game15NaviFollowStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game15NaviFollowStateFPQ24Game4Navi
        .4byte cleanup__Q24Game15NaviFollowStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte
   onKeyEvent__Q24Game15NaviFollowStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game15NaviFollowStateFv .4byte
   vsUsableY__Q24Game9NaviStateFv .4byte
   draw2d__Q24Game9NaviStateFR14J2DGrafContextRi .global
   __vt__Q24Game15NaviChangeState
    __vt__Q24Game15NaviChangeState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game15NaviChangeStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game15NaviChangeStateFPQ24Game4Navi
        .4byte cleanup__Q24Game15NaviChangeStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte
   onKeyEvent__Q24Game15NaviChangeStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
    .global __vt__Q24Game13NaviWalkState
    __vt__Q24Game13NaviWalkState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game13NaviWalkStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game13NaviWalkStateFPQ24Game4Navi
        .4byte cleanup__Q24Game13NaviWalkStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte
   onKeyEvent__Q24Game13NaviWalkStateFPQ24Game4NaviRCQ28SysShape8KeyEvent .4byte
   collisionCallback__Q24Game13NaviWalkStateFPQ24Game4NaviRQ24Game9CollEvent
        .4byte "wallCallback__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"
        .4byte bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle
        .4byte pressable__Q24Game9NaviStateFv
        .4byte callable__Q24Game13NaviWalkStateFv
        .4byte ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature
        .4byte needYChangeMotion__Q24Game13NaviWalkStateFv
        .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game14NaviStuckState
    __vt__Q24Game14NaviStuckState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game14NaviStuckStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game14NaviStuckStateFPQ24Game4Navi
        .4byte cleanup__Q24Game14NaviStuckStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte
   vsUsableY__Q24Game14NaviStuckStateFv .4byte
   draw2d__Q24Game9NaviStateFR14J2DGrafContextRi .global
   __vt__Q24Game18NaviCarryBombState
    __vt__Q24Game18NaviCarryBombState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game18NaviCarryBombStateFPQ24Game4NaviPQ24Game8StateArg
        .4byte exec__Q24Game18NaviCarryBombStateFPQ24Game4Navi
        .4byte cleanup__Q24Game18NaviCarryBombStateFPQ24Game4Navi
        .4byte "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi"
        .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte
   onKeyEvent__Q24Game18NaviCarryBombStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi
        .4byte 0
        .4byte 0
        .4byte 0
    .global "__vt__Q24Game22FSMState<Q24Game4Navi>"
    "__vt__Q24Game22FSMState<Q24Game4Navi>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviPQ24Game8StateArg" .4byte
   "exec__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi" .4byte
   "cleanup__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi" .4byte
   "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi" .4byte
   "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi" .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
    .global __vt__Q24Game7NaviFSM
    __vt__Q24Game7NaviFSM:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game7NaviFSMFPQ24Game4Navi
        .4byte
   "start__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte "exec__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"
        .4byte transit__Q24Game7NaviFSMFPQ24Game4NaviiPQ24Game8StateArg
    .global __vt__Q24Game9NaviState
    __vt__Q24Game9NaviState:
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviPQ24Game8StateArg" .4byte
   "exec__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi" .4byte
   "cleanup__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi" .4byte
   "resume__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi" .4byte
   "restart__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4Navi" .4byte
   "transit__Q24Game22FSMState<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
        .4byte invincible__Q24Game9NaviStateFv
        .4byte onKeyEvent__Q24Game9NaviStateFPQ24Game4NaviRCQ28SysShape8KeyEvent
        .4byte
   collisionCallback__Q24Game9NaviStateFPQ24Game4NaviRQ24Game9CollEvent .4byte
   "wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<f>" .4byte
   bounceCallback__Q24Game9NaviStateFPQ24Game4NaviPQ23Sys8Triangle .4byte
   pressable__Q24Game9NaviStateFv .4byte callable__Q24Game9NaviStateFv .4byte
   ignoreAtari__Q24Game9NaviStateFPQ24Game8Creature .4byte
   needYChangeMotion__Q24Game9NaviStateFv .4byte vsUsableY__Q24Game9NaviStateFv
        .4byte draw2d__Q24Game9NaviStateFR14J2DGrafContextRi

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805159B8
    lbl_805159B8:
        .skip 0x4
    .global lbl_805159BC
    lbl_805159BC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518BE0
    lbl_80518BE0:
        .float 0.0
    .global lbl_80518BE4
    lbl_80518BE4:
        .float 17.0
    .global lbl_80518BE8
    lbl_80518BE8:
        .float 325.9493
    .global lbl_80518BEC
    lbl_80518BEC:
        .float -325.9493
    .global lbl_80518BF0
    lbl_80518BF0:
        .float 4.8
    .global lbl_80518BF4
    lbl_80518BF4:
        .float 260.0
    .global lbl_80518BF8
    lbl_80518BF8:
        .float 340.0
    .global lbl_80518BFC
    lbl_80518BFC:
        .float 0.45
    .global lbl_80518C00
    lbl_80518C00:
        .float 0.3
    .global lbl_80518C04
    lbl_80518C04:
        .float 0.5
    .global lbl_80518C08
    lbl_80518C08:
        .float 32768.0
    .global lbl_80518C0C
    lbl_80518C0C:
        .float 0.05
    .global lbl_80518C10
    lbl_80518C10:
        .float 120.0
    .global lbl_80518C14
    lbl_80518C14:
        .float 100.0
    .global lbl_80518C18
    lbl_80518C18:
        .float -1000.0
    .global lbl_80518C1C
    lbl_80518C1C:
        .float 0.1
    .global lbl_80518C20
    lbl_80518C20:
        .float 0.9424779
    .global lbl_80518C24
    lbl_80518C24:
        .float 5.0
    .global lbl_80518C28
    lbl_80518C28:
        .float 0.2
        .skip 0x4
    .global lbl_80518C30
    lbl_80518C30:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80518C38
    lbl_80518C38:
        .4byte 0x40400000
    .global lbl_80518C3C
    lbl_80518C3C:
        .4byte 0x40000000
    .global lbl_80518C40
    lbl_80518C40:
        .4byte 0x41100000
    .global lbl_80518C44
    lbl_80518C44:
        .4byte 0x461C4000
    .global lbl_80518C48
    lbl_80518C48:
        .float 1.0
    .global lbl_80518C4C
    lbl_80518C4C:
        .4byte 0x41200000
    .global lbl_80518C50
    lbl_80518C50:
        .4byte 0x420C0000
    .global lbl_80518C54
    lbl_80518C54:
        .4byte 0x41700000
    .global lbl_80518C58
    lbl_80518C58:
        .4byte 0x41000000
    .global lbl_80518C5C
    lbl_80518C5C:
        .4byte 0x41A00000
    .global lbl_80518C60
    lbl_80518C60:
        .4byte 0x3FB4F4AB
    .global lbl_80518C64
    lbl_80518C64:
        .4byte 0x41F00000
    .global lbl_80518C68
    lbl_80518C68:
        .4byte 0x42700000
    .global lbl_80518C6C
    lbl_80518C6C:
        .4byte 0x43D70000
    .global lbl_80518C70
    lbl_80518C70:
        .4byte 0x40F00000
    .global lbl_80518C74
    lbl_80518C74:
        .4byte 0x40200000
    .global lbl_80518C78
    lbl_80518C78:
        .4byte 0x41C80000
    .global lbl_80518C7C
    lbl_80518C7C:
        .4byte 0x43160000
    .global lbl_80518C80
    lbl_80518C80:
        .4byte 0x40C00000
    .global lbl_80518C84
    lbl_80518C84:
        .4byte 0x3EA0D97C
    .global lbl_80518C88
    lbl_80518C88:
        .float -1.0
    .global lbl_80518C8C
    lbl_80518C8C:
        .4byte 0x3EB33333
    .global lbl_80518C90
    lbl_80518C90:
        .4byte 0x3F266666
    .global lbl_80518C94
    lbl_80518C94:
        .4byte 0x428C0000
    .global lbl_80518C98
    lbl_80518C98:
        .4byte 0x40800000
    .global lbl_80518C9C
    lbl_80518C9C:
        .4byte 0xC3C80000
    .global lbl_80518CA0
    lbl_80518CA0:
        .4byte 0xC2C80000
    .global lbl_80518CA4
    lbl_80518CA4:
        .4byte 0x40490FDB
    .global lbl_80518CA8
    lbl_80518CA8:
        .4byte 0x3F666666
    .global lbl_80518CAC
    lbl_80518CAC:
        .4byte 0x41B00000
    .global lbl_80518CB0
    lbl_80518CB0:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80518CB8
    lbl_80518CB8:
        .4byte 0x42A00000
    .global lbl_80518CBC
    lbl_80518CBC:
        .4byte 0xBDCCCCCD
    .global lbl_80518CC0
    lbl_80518CC0:
        .4byte 0x42020000
    .global lbl_80518CC4
    lbl_80518CC4:
        .4byte 0x430C0000
    .global lbl_80518CC8
    lbl_80518CC8:
        .4byte 0x6F72696D
        .4byte 0x61000000
    .global lbl_80518CD0
    lbl_80518CD0:
        .4byte 0x3FA66666
    .global lbl_80518CD4
    lbl_80518CD4:
        .4byte 0x3FC00000
    .global lbl_80518CD8
    lbl_80518CD8:
        .4byte 0x44610000
    .global lbl_80518CDC
    lbl_80518CDC:
        .4byte 0x3F400000
    .global lbl_80518CE0
    lbl_80518CE0:
        .4byte 0x44340000
    .global lbl_80518CE4
    lbl_80518CE4:
        .4byte 0x46480000
    .global lbl_80518CE8
    lbl_80518CE8:
        .4byte 0x451C4000
    .global lbl_80518CEC
    lbl_80518CEC:
        .4byte 0x43700000
    .global lbl_80518CF0
    lbl_80518CF0:
        .4byte 0x3C23D70A
    .global lbl_80518CF4
    lbl_80518CF4:
        .4byte 0xBFC90FDB
    .global lbl_80518CF8
    lbl_80518CF8:
        .float 0.7
    .global lbl_80518CFC
    lbl_80518CFC:
        .4byte 0x40C90FDB
*/

#include "Game/NaviState.h"
#include "KandoLib/Choice.h"

namespace Game {

/*
 * --INFO--
 * Address:	8017D44C
 * Size:	000004
 */
void NaviState::draw2d(J2DGrafContext& graf, int& a2) { }

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void NaviState::getBackupStateID(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void NaviState::playBiku(Game::Navi*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void NaviState::playChangeVoice(Game::Navi*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void NaviState::playPikon(Game::Navi*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void NaviFSM::clearBackupState(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8017D450
 * Size:	000084
 */
void NaviFSM::transit(Game::Navi*, int, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       "getCurrID__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"
	cmpwi    r3, 0
	beq      lbl_8017D490
	cmpwi    r3, 1
	bne      lbl_8017D4A0

lbl_8017D490:
	lwz      r0, 0x1c(r28)
	cmpw     r0, r3
	beq      lbl_8017D4A0
	stw      r3, 0x1c(r28)

lbl_8017D4A0:
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	mr       r6, r31
	bl
"transit__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017D4D4
 * Size:	000820
 */
void NaviFSM::init(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1b
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0x1c(r3)
	bl       "create__Q24Game26StateMachine<Q24Game4Navi>Fi"
	li       r3, 0x30
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D538
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game13NaviWalkState@ha
	stw      r0, 0(r4)
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	addi     r0, r3, __vt__Q24Game13NaviWalkState@l
	stw      r6, 4(r4)
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D538:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x20
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D584
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game15NaviFollowState@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game15NaviFollowState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D584:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D5A4
	bl       __ct__Q24Game14NaviPunchStateFv
	mr       r4, r3

lbl_8017D5A4:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D5F0
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game15NaviChangeState@ha
	stw      r0, 0(r4)
	li       r0, 3
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game15NaviChangeState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D5F0:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D644
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game15NaviGatherState@ha
	stw      r0, 0(r4)
	li       r0, 4
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game15NaviGatherState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)
	stb      r6, 0x10(r4)
	stb      r6, 0x11(r4)

lbl_8017D644:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x28
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D6BC
	addi     r7, r4, 0x20
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r7, 0x10(r4)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	stw      r0, 0x20(r4)
	addi     r6, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game14NaviThrowState@ha
	li       r0, 5
	stw      r6, 0(r4)
	addi     r3, r3, __vt__Q24Game14NaviThrowState@l
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, 0x50
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r3, 0(r4)
	lwz      r3, 0x10(r4)
	stw      r0, 0(r3)
	lwz      r3, 0x10(r4)
	subf     r0, r3, r7
	stw      r0, 4(r3)

lbl_8017D6BC:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x44
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D6E0
	li       r4, 1
	bl       __ct__Q24Game18NaviThrowWaitStateFv
	mr       r4, r3

lbl_8017D6E0:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D72C
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game13NaviDopeState@ha
	stw      r0, 0(r4)
	li       r0, 7
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game13NaviDopeState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D72C:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D778
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game13NaviNukuState@ha
	stw      r0, 0(r4)
	li       r0, 8
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game13NaviNukuState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D778:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x60
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D7C8
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game19NaviNukuAdjustState@ha
	stw      r0, 0(r4)
	li       r0, 9
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game19NaviNukuAdjustState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)
	stb      r6, 0x48(r4)

lbl_8017D7C8:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x24
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D814
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game18NaviContainerState@ha
	stw      r0, 0(r4)
	li       r0, 0xa
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game18NaviContainerState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D814:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D860
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game15NaviAbsorbState@ha
	stw      r0, 0(r4)
	li       r0, 0xb
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game15NaviAbsorbState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D860:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x28
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D8AC
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game14NaviFlickState@ha
	stw      r0, 0(r4)
	li       r0, 0xc
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game14NaviFlickState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D8AC:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D8F8
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game16NaviDamagedState@ha
	stw      r0, 0(r4)
	li       r0, 0xd
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game16NaviDamagedState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D8F8:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x24
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D944
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game16NaviPressedState@ha
	stw      r0, 0(r4)
	li       r0, 0xe
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game16NaviPressedState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D944:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D990
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game17NaviFallMeckState@ha
	stw      r0, 0(r4)
	li       r0, 0xf
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game17NaviFallMeckState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D990:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x24
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017D9DC
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game19NaviKokeDamageState@ha
	stw      r0, 0(r4)
	li       r0, 0x10
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game19NaviKokeDamageState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017D9DC:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017DA28
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game14NaviSaraiState@ha
	stw      r0, 0(r4)
	li       r0, 0x11
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game14NaviSaraiState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017DA28:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017DA74
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game18NaviSaraiExitState@ha
	stw      r0, 0(r4)
	li       r0, 0x12
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game18NaviSaraiExitState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017DA74:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017DAC0
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game13NaviDeadState@ha
	stw      r0, 0(r4)
	li       r0, 0x13
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game13NaviDeadState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017DAC0:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x24
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017DB0C
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game14NaviStuckState@ha
	stw      r0, 0(r4)
	li       r0, 0x14
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game14NaviStuckState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017DB0C:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x34
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017DB58
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game17NaviDemo_UfoState@ha
	stw      r0, 0(r4)
	li       r0, 0x15
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game17NaviDemo_UfoState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017DB58:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017DBA4
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game20NaviDemo_HoleInState@ha
	stw      r0, 0(r4)
	li       r0, 0x16
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game20NaviDemo_HoleInState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017DBA4:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017DBF0
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game15NaviPelletState@ha
	stw      r0, 0(r4)
	li       r0, 0x17
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game15NaviPelletState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017DBF0:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x48
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017DC40
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game18NaviCarryBombState@ha
	stw      r0, 0(r4)
	li       r0, 0x18
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game18NaviCarryBombState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)
	stw      r6, 0x10(r4)

lbl_8017DC40:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x28
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017DC8C
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game14NaviClimbState@ha
	stw      r0, 0(r4)
	li       r0, 0x19
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game14NaviClimbState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017DC8C:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	li       r3, 0x30
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8017DCD8
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game17NaviPathMoveState@ha
	stw      r0, 0(r4)
	li       r0, 0x1a
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q24Game17NaviPathMoveState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_8017DCD8:
	mr       r3, r31
	bl
"registerState__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game22FSMState<Q24Game4Navi>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017DCF4
 * Size:	0000D8
 */
void NaviCarryBombState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0(r5)
	stw      r0, 0x10(r3)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_8017DD40
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017DDAC

lbl_8017DD40:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_8017DD50
	addi     r6, r6, 0x178

lbl_8017DD50:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x29
	li       r5, 0x29
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       enableMotionBlend__Q24Game8FakePikiFv
	lwz      r3, 0x26c(r31)
	li       r4, 0x8a9
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	bl       updateMatrix__Q24Game18NaviCarryBombStateFPQ24Game4Navi
	lwz      r3, 0x10(r30)
	addi     r4, r30, 0x14
	bl       startCapture__Q24Game8CreatureFP7Matrixf

lbl_8017DDAC:
	li       r0, 0
	stb      r0, 0x44(r30)
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
 * Address:	8017DDCC
 * Size:	000030
 */
void transit__Q24Game22FSMState<Game::Navi> FPQ24Game4NaviiPQ24Game8StateArg(void)
{
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
}

/*
 * --INFO--
 * Address:	8017DDFC
 * Size:	000148
 */
void NaviCarryBombState::updateMatrix(Game::Navi*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r31
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f1, 0x18(r1)
	fcmpo    cr0, f2, f0
	stfs     f0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	bge      lbl_8017DE78
	fneg     f2, f2

lbl_8017DE78:
	lfs      f3, lbl_80518BE8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518BE0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	lfs      f5, lbl_80518BE4@sda21(r2)
	fcmpo    cr0, f1, f0
	lfs      f4, 0x20(r1)
	fctiwz   f0, f2
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f6, f5, f0
	bge      lbl_8017DEDC
	lfs      f0, lbl_80518BEC@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8017DEF4

lbl_8017DEDC:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8017DEF4:
	fmuls    f3, f5, f0
	lfs      f0, 0x28(r1)
	lfs      f2, 0x24(r1)
	addi     r3, r30, 0x14
	lfs      f1, lbl_80518BF0@sda21(r2)
	fadds    f0, f0, f6
	fadds    f3, f4, f3
	addi     r4, r1, 0x20
	fadds    f1, f2, f1
	stfs     f0, 0x28(r1)
	addi     r5, r1, 0x14
	stfs     f3, 0x20(r1)
	stfs     f1, 0x24(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017DF44
 * Size:	00024C
 */
void NaviCarryBombState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	mr       r31, r4
	stw      r30, 0x88(r1)
	mr       r30, r3
	mr       r3, r31
	bl       control__Q24Game4NaviFv
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	mr       r3, r31
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmr      f2, f1
	stfs     f1, 0x18(r1)
	fcmpo    cr0, f1, f0
	stfs     f0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	bge      lbl_8017DFCC
	fneg     f2, f1

lbl_8017DFCC:
	lfs      f3, lbl_80518BE8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518BE0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	lfs      f5, lbl_80518BE4@sda21(r2)
	fcmpo    cr0, f1, f0
	lfs      f4, 8(r1)
	fctiwz   f0, f2
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f6, f5, f0
	bge      lbl_8017E030
	lfs      f0, lbl_80518BEC@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8017E048

lbl_8017E030:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8017E048:
	fmuls    f3, f5, f0
	lfs      f0, 0x10(r1)
	lfs      f2, 0xc(r1)
	addi     r3, r30, 0x14
	lfs      f1, lbl_80518BF0@sda21(r2)
	fadds    f0, f0, f6
	fadds    f3, f4, f3
	addi     r4, r1, 8
	fadds    f1, f2, f1
	stfs     f0, 0x10(r1)
	addi     r5, r1, 0x14
	stfs     f3, 8(r1)
	stfs     f1, 0xc(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_8017E0D0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518BE0@sda21(r2)
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r4, r3, "zero__10Vector3<f>"@l
	stfs     f1, 0x30(r1)
	addi     r3, r1, 0x38
	addi     r5, r1, 0x2c
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x34(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r3, 0x10(r30)
	addi     r4, r1, 0x38
	bl       updateCapture__Q24Game8CreatureFR7Matrixf

lbl_8017E0D0:
	lbz      r0, 0x44(r30)
	cmplwi   r0, 0
	bne      lbl_8017E178
	lwz      r3, 0x10(r30)
	lwz      r0, 0xb8(r3)
	cmplwi   r0, 0
	beq      lbl_8017E0F4
	cmplwi   r3, 0
	bne      lbl_8017E118

lbl_8017E0F4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017E178

lbl_8017E118:
	lwz      r3, 0x278(r31)
	cmplwi   r3, 0
	beq      lbl_8017E144
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_8017E144
	mr       r3, r31
	bl       finishMotion__Q24Game8FakePikiFv
	li       r0, 1
	stb      r0, 0x44(r30)
	b        lbl_8017E178

lbl_8017E144:
	cmplwi   r3, 0
	beq      lbl_8017E178
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8017E178
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8017E178:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017E190
 * Size:	00017C
 */
void NaviCarryBombState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	lwz      r0, 0x1c(r5)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	cmpwi    r0, 0x3e8
	stw      r30, 0x38(r1)
	mr       r30, r3
	beq      lbl_8017E2DC
	bge      lbl_8017E2F4
	cmpwi    r0, 1
	beq      lbl_8017E1C8
	b        lbl_8017E2F4

lbl_8017E1C8:
	lbz      r0, 0x44(r30)
	cmplwi   r0, 0
	beq      lbl_8017E2F4
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_8017E2F4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_8017E208
	fneg     f2, f2

lbl_8017E208:
	lfs      f3, lbl_80518BE8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518BE0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	lfs      f4, lbl_80518BF4@sda21(r2)
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f2, f4, f0
	bge      lbl_8017E268
	lfs      f0, lbl_80518BEC@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8017E280

lbl_8017E268:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8017E280:
	fmuls    f1, f4, f0
	lfs      f0, lbl_80518BF8@sda21(r2)
	stfs     f2, 0x10(r1)
	li       r4, 0x806
	li       r5, 0
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r3, 0x26c(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r30)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r30)
	bl       endCapture__Q24Game8CreatureFv
	li       r0, 0
	stw      r0, 0x10(r30)
	b        lbl_8017E2F4

lbl_8017E2DC:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8017E2F4:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017E30C
 * Size:	00002C
 */
void NaviCarryBombState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_8017E328
	bl       endCapture__Q24Game8CreatureFv

lbl_8017E328:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017E338
 * Size:	000058
 */
void NaviStuckState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80518BFC@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r0, 0x20(r3)
	stfs     f0, 0x1c(r3)
	lwz      r5, 0x278(r4)
	cmplwi   r5, 0
	beq      lbl_8017E378
	lfs      f2, 0x4c(r5)
	lfs      f1, 0x48(r5)
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f1, 0x10(r3)
	stfs     f0, 0x14(r3)
	stfs     f2, 0x18(r3)

lbl_8017E378:
	mr       r3, r4
	bl       releasePikis__Q24Game4NaviFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017E390
 * Size:	0004BC
 */
void NaviStuckState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r0, 0x278(r4)
	cmplwi   r0, 0
	beq      lbl_8017E3E8
	lbz      r0, 0x259(r31)
	cmplwi   r0, 0
	bne      lbl_8017E40C

lbl_8017E3E8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017E810

lbl_8017E40C:
	mr       r3, r31
	bl       control__Q24Game4NaviFv
	lwz      r3, 0x278(r31)
	lfs      f1, lbl_80518BE0@sda21(r2)
	lfs      f31, 0x4c(r3)
	lfs      f30, 0x48(r3)
	fmuls    f2, f31, f31
	fmadds   f0, f30, f30, f1
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8017E448
	ble      lbl_8017E44C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8017E44C

lbl_8017E448:
	fmr      f2, f1

lbl_8017E44C:
	lfs      f0, lbl_80518C00@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8017E7D0
	lfs      f1, lbl_80518BE0@sda21(r2)
	lfs      f0, 0x14(r30)
	lfs      f2, 0x10(r30)
	fmuls    f1, f1, f0
	lfs      f3, 0x18(r30)
	lfs      f0, lbl_80518C04@sda21(r2)
	fmadds   f1, f30, f2, f1
	fmadds   f1, f31, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8017E7D0
	lwz      r3, 0x20(r30)
	addi     r0, r3, 1
	stw      r0, 0x20(r30)
	lwz      r0, 0x20(r30)
	cmpwi    r0, 9
	ble      lbl_8017E7B8
	mr       r4, r31
	addi     r3, r1, 0x2c
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x2c
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017E4E4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017E784

lbl_8017E4E4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017E550

lbl_8017E4FC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017E784
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017E550:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017E4FC
	b        lbl_8017E784

lbl_8017E570:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_8017E6C8
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x4c(r1)
	lfd      f3, lbl_80518C30@sda21(r2)
	stw      r0, 0x48(r1)
	lfs      f1, lbl_80518C08@sda21(r2)
	lfd      f2, 0x48(r1)
	lfs      f0, lbl_80518C0C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8017E6C8
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x4c(r1)
	lfd      f3, lbl_80518C30@sda21(r2)
	stw      r0, 0x48(r1)
	lfs      f2, lbl_80518C08@sda21(r2)
	lfd      f0, 0x48(r1)
	lfs      f1, lbl_80518C14@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80518C10@sda21(r2)
	lfs      f28, lbl_80518C18@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f29, f1, f2, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	lfd      f3, lbl_80518C30@sda21(r2)
	stw      r0, 0x50(r1)
	lfs      f1, lbl_80518C08@sda21(r2)
	lfd      f2, 0x50(r1)
	lfs      f0, lbl_80518C1C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8017E684
	fmr      f1, f30
	lis      r3, atanTable___5JMath@ha
	fmr      f2, f31
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f28, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	lfd      f3, lbl_80518C30@sda21(r2)
	stw      r0, 0x50(r1)
	lfs      f2, lbl_80518C08@sda21(r2)
	lfd      f1, 0x50(r1)
	lfs      f0, lbl_80518C04@sda21(r2)
	fsubs    f3, f1, f3
	lfs      f1, lbl_80518C20@sda21(r2)
	fdivs    f2, f3, f2
	fsubs    f0, f2, f0
	fmadds   f1, f1, f0, f28
	bl       roundAng__Ff
	fmr      f28, f1

lbl_8017E684:
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_80518C24@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game13InteractFlick@ha
	stw      r0, 0x18(r1)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	mr       r3, r29
	addi     r4, r1, 0x18
	stw      r31, 0x1c(r1)
	stw      r0, 0x18(r1)
	stfs     f29, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f28, 0x28(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8017E6C8:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017E6F4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017E784

lbl_8017E6F4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017E768

lbl_8017E714:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017E784
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017E768:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017E714

lbl_8017E784:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017E570
	li       r0, 0
	addi     r3, r1, 0x2c
	stw      r0, 0x20(r30)
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_8017E7B8:
	stfs     f30, 0x10(r30)
	lfs      f1, lbl_80518BE0@sda21(r2)
	lfs      f0, lbl_80518C28@sda21(r2)
	stfs     f1, 0x14(r30)
	stfs     f31, 0x18(r30)
	stfs     f0, 0x1c(r30)

lbl_8017E7D0:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x1c(r30)
	lfs      f0, 0x54(r3)
	lfs      f1, lbl_80518BE0@sda21(r2)
	fsubs    f0, f2, f0
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x1c(r30)
	fcmpo    cr0, f0, f1
	bge      lbl_8017E810
	stfs     f30, 0x10(r30)
	li       r0, 0
	lfs      f0, lbl_80518C04@sda21(r2)
	stfs     f1, 0x14(r30)
	stfs     f31, 0x18(r30)
	stw      r0, 0x20(r30)
	stfs     f0, 0x1c(r30)

lbl_8017E810:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r0, 0xb4(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017E84C
 * Size:	000004
 */
void NaviStuckState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	8017E850
 * Size:	0000DC
 */
void NaviWalkState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017E8C8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017E8C8
	mr       r3, r31
	li       r4, 0x1e
	lwz      r12, 0(r31)
	li       r5, 0x1e
	li       r6, 0
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8017E8C8:
	li       r0, 0
	lfs      f0, lbl_80518C38@sda21(r2)
	stb      r0, 0x10(r30)
	mr       r4, r31
	addi     r3, r1, 8
	stfs     f0, 0x14(r30)
	stw      r0, 0x18(r30)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	li       r0, 0
	stfs     f0, 0x1c(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x20(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x24(r30)
	stb      r0, 0x2c(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017E92C
 * Size:	000634
 */
void NaviWalkState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	lbz      r3, 0x2c(r3)
	cmplwi   r3, 0
	beq      lbl_8017E960
	addi     r0, r3, -1
	stb      r0, 0x2c(r31)

lbl_8017E960:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017EF44
	mr       r3, r30
	bl       control__Q24Game4NaviFv
	mr       r3, r30
	bl       findNextThrowPiki__Q24Game4NaviFv
	lwz      r0, 0x278(r30)
	cmplwi   r0, 0
	bne      lbl_8017E9E0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017E9E0
	lbz      r0, 0x10(r31)
	cmplwi   r0, 0
	bne      lbl_8017E9D0
	li       r0, 1
	lfs      f0, lbl_80518C3C@sda21(r2)
	stb      r0, 0x10(r31)
	stfs     f0, 0x14(r31)

lbl_8017E9D0:
	mr       r3, r31
	mr       r4, r30
	bl       execAI__Q24Game13NaviWalkStateFPQ24Game4Navi
	b        lbl_8017EA98

lbl_8017E9E0:
	lwz      r0, 0x278(r30)
	cmplwi   r0, 0
	beq      lbl_8017EA40
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017EA40
	lfs      f1, 0x308(r30)
	lfs      f0, lbl_80518C40@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8017EA40
	lbz      r0, 0x10(r31)
	cmplwi   r0, 0
	bne      lbl_8017EA30
	mr       r3, r31
	mr       r4, r30
	bl       initAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi

lbl_8017EA30:
	mr       r3, r31
	mr       r4, r30
	bl       execAI__Q24Game13NaviWalkStateFPQ24Game4Navi
	b        lbl_8017EA98

lbl_8017EA40:
	lwz      r0, 0x278(r30)
	cmplwi   r0, 0
	beq      lbl_8017EA98
	lbz      r0, 0x10(r31)
	cmplwi   r0, 0
	beq      lbl_8017EA98
	lfs      f1, 0x308(r30)
	lfs      f0, lbl_80518C40@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8017EA98
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x10(r31)
	li       r4, 0x1f
	li       r5, 0x1f
	li       r6, 0
	lwz      r12, 0(r30)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8017EA98:
	lwz      r0, 0x278(r30)
	cmplwi   r0, 0
	beq      lbl_8017EAC0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017EAD8

lbl_8017EAC0:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017EF44

lbl_8017EAD8:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_8017EF44
	lbz      r0, 0x259(r30)
	cmplwi   r0, 0
	beq      lbl_8017EB18
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	li       r5, 0x14
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017EF44

lbl_8017EB18:
	mr       r3, r30
	bl       checkOnyon__Q24Game4NaviFv
	cmplwi   r3, 0
	beq      lbl_8017EB6C
	lwz      r4, 0x278(r30)
	lwz      r0, 0x1c(r4)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_8017EB6C
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 3
	beq      lbl_8017EB6C
	stw      r3, 0x10(r1)
	mr       r3, r31
	mr       r4, r30
	addi     r6, r1, 0x10
	lwz      r12, 0(r31)
	li       r5, 0xa
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017EF44

lbl_8017EB6C:
	lwz      r3, 0x278(r30)
	lwz      r3, 0x1c(r3)
	rlwinm.  r0, r3, 0, 0x16, 0x16
	beq      lbl_8017EBA0
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017EF44

lbl_8017EBA0:
	rlwinm.  r0, r3, 0, 0x17, 0x17
	beq      lbl_8017EBF0
	mr       r3, r30
	bl       procActionButton__Q24Game4NaviFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017EF44
	mr       r3, r30
	bl       throwable__Q24Game4NaviFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017EF44
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017EF44
	b        lbl_8017EF44

lbl_8017EBF0:
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_8017EC24
	li       r0, 1
	mr       r3, r31
	stw      r0, 0xc(r1)
	mr       r4, r30
	addi     r6, r1, 0xc
	li       r5, 7
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017EF44

lbl_8017EC24:
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_8017EC58
	li       r0, 0
	mr       r3, r31
	stw      r0, 8(r1)
	mr       r4, r30
	addi     r6, r1, 8
	li       r5, 7
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017EF44

lbl_8017EC58:
	rlwinm.  r0, r3, 0, 0x15, 0x15
	beq      lbl_8017EC84
	mr       r3, r30
	bl       releasePikis__Q24Game4NaviFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017EC7C
	li       r0, 0x14
	stb      r0, 0x2b(r31)
	b        lbl_8017EC84

lbl_8017EC7C:
	li       r0, 1
	stb      r0, 0x2b(r31)

lbl_8017EC84:
	lwz      r3, 0x278(r30)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x15, 0x15
	beq      lbl_8017ED08
	lbz      r3, 0x2b(r31)
	cmplwi   r3, 0
	beq      lbl_8017ED10
	addi     r0, r3, 1
	stb      r0, 0x2b(r31)
	lbz      r0, 0x2b(r31)
	cmplwi   r0, 0x23
	ble      lbl_8017ED10
	li       r0, 0
	li       r4, 9
	stb      r0, 0x2b(r31)
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0x48
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017ECE4
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	beq      lbl_8017ED10

lbl_8017ECE4:
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	li       r5, 0x17
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017EF44

lbl_8017ED08:
	li       r0, 0
	stb      r0, 0x2b(r31)

lbl_8017ED10:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused_soft__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017EF44
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_8017EF44
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_8017ED4C
	cmpwi    r0, 3
	bne      lbl_8017ED50

lbl_8017ED4C:
	li       r3, 1

lbl_8017ED50:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017EF44
	lwz      r3, 0x278(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_8017EF44
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x25
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017EF44
	lwz      r3, naviMgr__4Game@sda21(r13)
	lhz      r0, 0x2dc(r30)
	lwz      r12, 0(r3)
	subfic   r4, r0, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	bl       getStateID__Q24Game4NaviFv
	mr       r29, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017EF44
	cmpwi    r29, 8
	beq      lbl_8017EF44
	cmpwi    r29, 9
	beq      lbl_8017EF44
	cmpwi    r29, 2
	beq      lbl_8017EF44
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	bl       pmTogglePlayer__Q24Game15BaseGameSectionFv
	lhz      r0, 0x2dc(r31)
	cmplwi   r0, 0
	bne      lbl_8017EE04
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x188d
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8017EE38

lbl_8017EE04:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017EE28
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x188f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8017EE38

lbl_8017EE28:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x188e
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_8017EE38:
	lhz      r0, 0x2dc(r31)
	cmplwi   r0, 0
	bne      lbl_8017EE64
	lwz      r3, 0x26c(r31)
	li       r4, 0x8a6
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017EEB0

lbl_8017EE64:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017EE94
	lwz      r3, 0x26c(r31)
	li       r4, 0x8a8
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017EEB0

lbl_8017EE94:
	lwz      r3, 0x26c(r31)
	li       r4, 0x8a7
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_8017EEB0:
	mr       r3, r31
	bl       getStateID__Q24Game4NaviFv
	cmpwi    r3, 1
	bne      lbl_8017EF00
	lis      r3, __vt__Q24Game11Interaction@ha
	li       r0, 0
	addi     r4, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game11InteractFue@ha
	stw      r4, 0x14(r1)
	addi     r5, r3, __vt__Q24Game11InteractFue@l
	mr       r3, r30
	addi     r4, r1, 0x14
	stw      r31, 0x18(r1)
	stw      r5, 0x14(r1)
	stb      r0, 0x1c(r1)
	stb      r0, 0x1d(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8017EF00:
	mr       r3, r31
	bl       getStateID__Q24Game4NaviFv
	lwz      r3, 0x274(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017EF44
	lwz      r3, 0x270(r31)
	mr       r4, r31
	li       r5, 3
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8017EF44:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017EF60
 * Size:	000008
 */
bool NaviState::needYChangeMotion(void) { return false; }

/*
 * --INFO--
 * Address:	8017EF68
 * Size:	000004
 */
void NaviWalkState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	8017EF6C
 * Size:	000198
 */
void NaviWalkState::collisionCallback(Game::Navi*, Game::CollEvent&)
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
	lwz      r6, moviePlayer__4Game@sda21(r13)
	lwz      r31, 0(r5)
	lwz      r0, 0x18(r6)
	cmpwi    r0, 0
	bne      lbl_8017EFF8
	lhz      r0, 0x128(r31)
	cmplwi   r0, 0x406
	bne      lbl_8017EFF8
	lbz      r0, 0x1e0(r31)
	cmplwi   r0, 0
	beq      lbl_8017EFF8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x228(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017EFF8
	stw      r31, 0xc(r1)
	mr       r4, r30
	addi     r6, r1, 0xc
	li       r5, 0xb
	lwz      r3, 0x270(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8017EFF8:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_8017F0E8
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_8017F0E8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017F0E8
	lwz      r0, 0xb8(r31)
	cmplwi   r0, 0
	bne      lbl_8017F0E8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017F0E8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x24
	bne      lbl_8017F0E8
	lwz      r3, 0x278(r30)
	cmplwi   r3, 0
	beq      lbl_8017F0E8
	lfs      f0, 0x48(r3)
	lfs      f1, 0x4c(r3)
	fneg     f2, f0
	lfs      f0, lbl_80518C04@sda21(r2)
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8017F0E8
	lbz      r3, 0x2c(r29)
	cmplwi   r3, 0x64
	bge      lbl_8017F0B8
	addi     r0, r3, 3
	stb      r0, 0x2c(r29)

lbl_8017F0B8:
	lbz      r0, 0x2c(r29)
	cmplwi   r0, 0x3c
	ble      lbl_8017F0E8
	stw      r31, 8(r1)
	mr       r3, r29
	mr       r4, r30
	addi     r6, r1, 8
	lwz      r12, 0(r29)
	li       r5, 0x18
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8017F0E8:
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
 * Address:	8017F104
 * Size:	000094
 */
void NaviWalkState::execAI(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x10(r3)
	cmpwi    r0, 3
	beq      lbl_8017F174
	bge      lbl_8017F140
	cmpwi    r0, 1
	beq      lbl_8017F14C
	bge      lbl_8017F160
	b        lbl_8017F180

lbl_8017F140:
	cmpwi    r0, 5
	bge      lbl_8017F180
	b        lbl_8017F17C

lbl_8017F14C:
	bl       execAI_wait__Q24Game13NaviWalkStateFPQ24Game4Navi
	mr       r3, r30
	mr       r4, r31
	bl       checkAI__Q24Game13NaviWalkStateFPQ24Game4Navi
	b        lbl_8017F180

lbl_8017F160:
	bl       execAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi
	mr       r3, r30
	mr       r4, r31
	bl       checkAI__Q24Game13NaviWalkStateFPQ24Game4Navi
	b        lbl_8017F180

lbl_8017F174:
	bl       execAI_escape__Q24Game13NaviWalkStateFPQ24Game4Navi
	b        lbl_8017F180

lbl_8017F17C:
	bl       execAI_attack__Q24Game13NaviWalkStateFPQ24Game4Navi

lbl_8017F180:
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
 * Address:	8017F198
 * Size:	00023C
 */
void NaviWalkState::checkAI(Game::Navi*)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	stw      r29, 0x94(r1)
	mr       r29, r4
	stw      r28, 0x90(r1)
	mr       r28, r3
	lwz      r0, 0x278(r4)
	cmplwi   r0, 0
	beq      lbl_8017F1D0
	li       r3, 0
	b        lbl_8017F3B4

lbl_8017F1D0:
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 8(r1)
	addi     r3, r1, 0x24
	lfs      f2, 0xc(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0x10(r1)
	li       r31, 0
	lfs      f0, lbl_80518C14@sda21(r2)
	stfs     f3, 0x14(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	addi     r3, r1, 0x44
	addi     r4, r1, 0x24
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x44
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8017F2D4

lbl_8017F22C:
	addi     r3, r1, 0x44
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017F29C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017F29C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017F29C
	lbz      r0, 0x1f0(r30)
	cmplwi   r0, 0
	beq      lbl_8017F29C
	mr       r31, r30
	b        lbl_8017F2E4

lbl_8017F29C:
	cmplwi   r31, 0
	bne      lbl_8017F2CC
	cmplw    r30, r29
	beq      lbl_8017F2CC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017F2CC
	mr       r31, r30

lbl_8017F2CC:
	addi     r3, r1, 0x44
	bl       next__Q24Game12CellIteratorFv

lbl_8017F2D4:
	addi     r3, r1, 0x44
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017F22C

lbl_8017F2E4:
	cmplwi   r31, 0
	beq      lbl_8017F380
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017F380
	stw      r31, 0x18(r28)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lbz      r0, 0x30(r3)
	extsb    r0, r0
	cmpwi    r0, 1
	beq      lbl_8017F35C
	bge      lbl_8017F36C
	cmpwi    r0, 0
	bge      lbl_8017F34C
	b        lbl_8017F36C

lbl_8017F34C:
	mr       r3, r28
	mr       r4, r29
	bl       initAI_wait__Q24Game13NaviWalkStateFPQ24Game4Navi
	b        lbl_8017F378

lbl_8017F35C:
	mr       r3, r28
	mr       r4, r29
	bl       initAI_escape__Q24Game13NaviWalkStateFPQ24Game4Navi
	b        lbl_8017F378

lbl_8017F36C:
	mr       r3, r28
	mr       r4, r29
	bl       initAI_escape__Q24Game13NaviWalkStateFPQ24Game4Navi

lbl_8017F378:
	li       r3, 1
	b        lbl_8017F3B4

lbl_8017F380:
	cmplwi   r31, 0
	beq      lbl_8017F3B0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017F3B0
	stw      r31, 0x18(r28)
	li       r3, 1
	b        lbl_8017F3B4

lbl_8017F3B0:
	li       r3, 0

lbl_8017F3B4:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	lwz      r28, 0x90(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017F3D4
 * Size:	000100
 */
void NaviWalkState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	lbz      r6, 0x10(r3)
	cmplwi   r6, 0
	beq      lbl_8017F414
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0x3e8
	bne      lbl_8017F414
	cmplwi   r6, 2
	bne      lbl_8017F414
	bl       initAI_wait__Q24Game13NaviWalkStateFPQ24Game4Navi

lbl_8017F414:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8017F42C
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	bne      lbl_8017F4BC

lbl_8017F42C:
	lha      r0, 0x20(r31)
	cmpwi    r0, 0x32
	bne      lbl_8017F4BC
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0xc8
	bne      lbl_8017F4BC
	lhz      r0, 0x2dc(r30)
	cmplwi   r0, 0
	bne      lbl_8017F470
	lwz      r3, 0x26c(r30)
	li       r4, 0x877
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017F4BC

lbl_8017F470:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017F4A0
	lwz      r3, 0x26c(r30)
	li       r4, 0x879
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017F4BC

lbl_8017F4A0:
	lwz      r3, 0x26c(r30)
	li       r4, 0x878
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_8017F4BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017F4D4
 * Size:	000034
 */
void wallCallback__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3f(void)
{
	/*
	lbz      r0, 0x10(r3)
	cmplwi   r0, 3
	bnelr
	lbz      r0, 0x29(r3)
	cmplwi   r0, 0
	bnelr
	lbz      r4, 0x28(r3)
	li       r0, 0xa
	cntlzw   r4, r4
	srwi     r4, r4, 5
	stb      r4, 0x28(r3)
	stb      r0, 0x29(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8017F508
 * Size:	000048
 */
void NaviWalkState::initAI_wait(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 1
	li       r6, 0
	stw      r0, 0x14(r1)
	li       r0, 1
	li       r7, 0
	stb      r0, 0x10(r3)
	mr       r3, r4
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
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
 * Address:	8017F550
 * Size:	0001C4
 */
void NaviWalkState::execAI_wait(Game::Navi*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	lis      r5, "zero__10Vector3<f>"@ha
	mr       r30, r3
	addi     r5, r5, "zero__10Vector3<f>"@l
	mr       r31, r4
	bl       "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x14(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x14(r30)
	lfs      f1, 0x14(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8017F5F4
	mr       r3, r30
	mr       r4, r31
	bl       initAI_animation__Q24Game13NaviWalkStateFPQ24Game4Navi
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_80518C30@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_80518C08@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_80518C3C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fadds    f0, f0, f1
	stfs     f0, 0x14(r30)
	b        lbl_8017F6EC

lbl_8017F5F4:
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_8017F6EC
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r30)
	addi     r3, r1, 8
	lfs      f31, 0x14(r1)
	lwz      r12, 0(r4)
	lfs      f30, 0x1c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	lfs      f4, 8(r1)
	fsubs    f1, f30, f2
	lfs      f0, lbl_80518C44@sda21(r2)
	fsubs    f3, f31, f4
	fmuls    f1, f1, f1
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8017F668
	li       r0, 0
	stw      r0, 0x18(r30)
	b        lbl_8017F6EC

lbl_8017F668:
	fsubs    f2, f2, f30
	lfs      f3, lbl_80518BE0@sda21(r2)
	fsubs    f1, f4, f31
	fmuls    f4, f2, f2
	fmadds   f0, f1, f1, f3
	fadds    f4, f4, f0
	fcmpo    cr0, f4, f3
	ble      lbl_8017F698
	ble      lbl_8017F69C
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8017F69C

lbl_8017F698:
	fmr      f4, f3

lbl_8017F69C:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8017F6B8
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f4
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0

lbl_8017F6B8:
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x1fc(r31)
	bl       angDist__Fff
	lfs      f2, lbl_80518C28@sda21(r2)
	lfs      f0, 0x1fc(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1fc(r31)
	lfs      f1, 0x1fc(r31)
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)

lbl_8017F6EC:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017F714
 * Size:	00026C
 */
void NaviWalkState::initAI_animation(Game::Navi*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	lis      r5, lbl_8047EAE0@ha
	stw      r0, 0x74(r1)
	li       r0, 2
	stmw     r23, 0x4c(r1)
	mr       r29, r3
	lis      r3, lbl_8047EB00@ha
	mr       r30, r4
	addi     r10, r3, lbl_8047EB00@l
	lis      r3, lbl_804B2D40@ha
	addi     r31, r3, lbl_804B2D40@l
	stb      r0, 0x10(r29)
	lwzu     r23, lbl_8047EAE0@l(r5)
	lwz      r9, 0(r10)
	lwz      r24, 4(r5)
	lwz      r25, 8(r5)
	lwz      r26, 0xc(r5)
	lwz      r27, 0x10(r5)
	lwz      r28, 0x14(r5)
	lwz      r12, 0x18(r5)
	lwz      r11, 0x1c(r5)
	lwz      r8, 4(r10)
	lwz      r7, 8(r10)
	lwz      r6, 0xc(r10)
	lwz      r5, 0x10(r10)
	lwz      r4, 0x14(r10)
	lwz      r3, 0x18(r10)
	lwz      r0, 0x1c(r10)
	stw      r23, 0x28(r1)
	stw      r24, 0x2c(r1)
	stw      r25, 0x30(r1)
	stw      r26, 0x34(r1)
	stw      r27, 0x38(r1)
	stw      r28, 0x3c(r1)
	stw      r12, 0x40(r1)
	stw      r11, 0x44(r1)
	stw      r9, 8(r1)
	stw      r8, 0xc(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r5, 0x18(r1)
	stw      r4, 0x1c(r1)
	stw      r3, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r0, 0x278(r30)
	cmplwi   r0, 0
	beq      lbl_8017F7E4
	addi     r3, r1, 8
	li       r4, 4
	bl       getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
	b        lbl_8017F7F0

lbl_8017F7E4:
	addi     r3, r1, 0x28
	li       r4, 4
	bl       getRandomChoice__8KandoLibFPQ28KandoLib6Choicei

lbl_8017F7F0:
	cmplwi   r30, 0
	stb      r3, 0x2a(r29)
	mr       r23, r3
	mr       r6, r30
	beq      lbl_8017F808
	addi     r6, r30, 0x178

lbl_8017F808:
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r23
	mr       r5, r23
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8017F840
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	bne      lbl_8017F96C

lbl_8017F840:
	lhz      r4, 0x2dc(r30)
	cmpwi    r4, 1
	bne      lbl_8017F86C
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_8017F86C
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017F86C
	addi     r4, r4, 1

lbl_8017F86C:
	cmpwi    r23, 0xd
	beq      lbl_8017F948
	bge      lbl_8017F890
	cmpwi    r23, 0xb
	beq      lbl_8017F8A8
	bge      lbl_8017F96C
	cmpwi    r23, 0
	beq      lbl_8017F8D0
	b        lbl_8017F96C

lbl_8017F890:
	cmpwi    r23, 0x36
	beq      lbl_8017F920
	bge      lbl_8017F96C
	cmpwi    r23, 0x32
	beq      lbl_8017F8F8
	b        lbl_8017F96C

lbl_8017F8A8:
	lwz      r3, 0x26c(r30)
	slwi     r0, r4, 2
	addi     r4, r31, 0x34
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwzx     r4, r4, r0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017F96C

lbl_8017F8D0:
	lwz      r3, 0x26c(r30)
	slwi     r0, r4, 2
	addi     r4, r31, 0x40
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwzx     r4, r4, r0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017F96C

lbl_8017F8F8:
	lwz      r3, 0x26c(r30)
	slwi     r0, r4, 2
	addi     r4, r31, 0x4c
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwzx     r4, r4, r0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017F96C

lbl_8017F920:
	lwz      r3, 0x26c(r30)
	slwi     r0, r4, 2
	addi     r4, r31, 0x58
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwzx     r4, r4, r0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8017F96C

lbl_8017F948:
	lwz      r3, 0x26c(r30)
	slwi     r0, r4, 2
	addi     r4, r31, 0x1c
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwzx     r4, r4, r0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_8017F96C:
	lmw      r23, 0x4c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017F980
 * Size:	000080
 */
void NaviWalkState::execAI_animation(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, "zero__10Vector3<f>"@ha
	stw      r0, 0x14(r1)
	addi     r5, r5, "zero__10Vector3<f>"@l
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"
	lbz      r4, 0x2a(r30)
	mr       r3, r31
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017F9E8
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x10(r30)
	li       r4, 1
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r31)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8017F9E8:
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
 * Address:	........
 * Size:	00000C
 */
void NaviWalkState::initAI_attack(Game::Navi*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8017FA00
 * Size:	000240
 */
void NaviWalkState::execAI_attack(Game::Navi*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017FA78
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x10(r30)
	li       r4, 1
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r31)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x18(r30)
	b        lbl_8017FC20

lbl_8017FA78:
	lwz      r4, 0x18(r30)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r4, r31
	lfs      f1, 0x18(r1)
	addi     r3, r1, 8
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x40(r1)
	lfs      f0, 0xc(r1)
	lfs      f1, 0x3c(r1)
	fsubs    f4, f2, f0
	lfs      f0, 8(r1)
	lfs      f3, 0x44(r1)
	fsubs    f2, f1, f0
	lfs      f0, 0x10(r1)
	fmuls    f5, f4, f4
	fsubs    f3, f3, f0
	lfs      f1, lbl_80518BE0@sda21(r2)
	fmuls    f0, f2, f2
	stfs     f2, 0x30(r1)
	fmuls    f6, f3, f3
	fadds    f0, f0, f5
	stfs     f4, 0x34(r1)
	stfs     f3, 0x38(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8017FB2C
	fmadds   f0, f2, f2, f5
	fadds    f31, f6, f0
	fcmpo    cr0, f31, f1
	ble      lbl_8017FB30
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_8017FB30

lbl_8017FB2C:
	fmr      f31, f1

lbl_8017FB30:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8017FB6C
	lfs      f0, lbl_80518C48@sda21(r2)
	lfs      f2, 0x30(r1)
	fdivs    f3, f0, f31
	lfs      f1, 0x34(r1)
	lfs      f0, 0x38(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	b        lbl_8017FB70

lbl_8017FB6C:
	fmr      f31, f0

lbl_8017FB70:
	lwz      r3, 0x18(r30)
	addi     r4, r1, 0x20
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x2c(r1)
	mr       r3, r31
	fsubs    f31, f31, f0
	bl       control__Q24Game4NaviFv
	lwz      r5, naviMgr__4Game@sda21(r13)
	mr       r3, r30
	lfs      f2, 0x38(r1)
	mr       r4, r31
	lwz      r6, 0xc8(r5)
	addi     r5, r1, 0x30
	lfs      f1, 0x34(r1)
	lfs      f4, 0x3b8(r6)
	lfs      f0, 0x30(r1)
	fmuls    f3, f2, f4
	lfs      f2, lbl_80518C04@sda21(r2)
	fmuls    f1, f1, f4
	fmuls    f0, f0, f4
	fmuls    f3, f3, f2
	fmuls    f1, f1, f2
	fmuls    f0, f0, f2
	stfs     f3, 0x38(r1)
	stfs     f0, 0x30(r1)
	stfs     f1, 0x34(r1)
	bl       "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"
	lfs      f0, lbl_80518C4C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8017FC20
	mr       r3, r31
	addi     r4, r1, 0x3c
	bl       "turnTo__Q24Game8FakePikiFR10Vector3<f>"
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8017FC20:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017FC40
 * Size:	00008C
 */
void NaviWalkState::initAI_escape(Game::Navi*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_80518BE0@sda21(r2)
	stw      r0, 0x24(r1)
	li       r0, 3
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stb      r0, 0x10(r3)
	stfs     f0, 0x14(r3)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r3, 0x4330
	stw      r0, 0xc(r1)
	li       r0, 0
	lfd      f3, lbl_80518C30@sda21(r2)
	stw      r3, 8(r1)
	lfs      f1, lbl_80518C08@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80518C3C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	neg      r3, r4
	or       r3, r3, r4
	srwi     r3, r3, 0x1f
	stb      r3, 0x28(r31)
	stb      r0, 0x29(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017FCCC
 * Size:	0002B4
 */
void NaviWalkState::execAI_escape(Game::Navi*)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017FD5C
	lfs      f0, lbl_80518C24@sda21(r2)
	li       r0, 1
	mr       r3, r31
	li       r4, 1
	stfs     f0, 0x14(r30)
	li       r5, 1
	li       r6, 0
	li       r7, 0
	stb      r0, 0x10(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x18(r30)
	b        lbl_8017FF50

lbl_8017FD5C:
	lbz      r3, 0x29(r30)
	cmplwi   r3, 0
	beq      lbl_8017FD70
	addi     r0, r3, -1
	stb      r0, 0x29(r30)

lbl_8017FD70:
	lwz      r4, 0x18(r30)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x18(r1)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	fsubs    f3, f1, f31
	lfs      f4, 0x10(r1)
	fsubs    f2, f0, f30
	lfs      f1, lbl_80518BE0@sda21(r2)
	fsubs    f4, f4, f29
	fmuls    f0, f3, f3
	fmuls    f5, f2, f2
	stfs     f3, 0x30(r1)
	fmuls    f6, f4, f4
	stfs     f2, 0x34(r1)
	fadds    f0, f0, f5
	stfs     f4, 0x38(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8017FE0C
	fmadds   f0, f3, f3, f5
	fadds    f31, f6, f0
	fcmpo    cr0, f31, f1
	ble      lbl_8017FE10
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_8017FE10

lbl_8017FE0C:
	fmr      f31, f1

lbl_8017FE10:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8017FE4C
	lfs      f0, lbl_80518C48@sda21(r2)
	lfs      f2, 0x30(r1)
	fdivs    f3, f0, f31
	lfs      f1, 0x34(r1)
	lfs      f0, 0x38(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	b        lbl_8017FE50

lbl_8017FE4C:
	fmr      f31, f0

lbl_8017FE50:
	lwz      r3, 0x18(r30)
	addi     r4, r1, 0x20
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r30)
	lfs      f0, 0x2c(r1)
	lwz      r12, 0(r3)
	fsubs    f29, f31, f0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518C50@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_8017FEC8
	lfs      f0, lbl_80518C24@sda21(r2)
	li       r0, 1
	mr       r3, r31
	li       r4, 1
	stfs     f0, 0x14(r30)
	li       r5, 1
	li       r6, 0
	li       r7, 0
	stb      r0, 0x10(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_8017FF50

lbl_8017FEC8:
	lfs      f0, lbl_80518C54@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_8017FF08
	lfs      f0, 0x30(r1)
	lfs      f2, 0x38(r1)
	fneg     f0, f0
	stfs     f2, 0x30(r1)
	stfs     f0, 0x38(r1)
	lbz      r0, 0x28(r30)
	cmplwi   r0, 0
	bne      lbl_8017FF08
	frsp     f1, f0
	fneg     f0, f2
	fneg     f1, f1
	stfs     f0, 0x30(r1)
	stfs     f1, 0x38(r1)

lbl_8017FF08:
	mr       r3, r31
	bl       control__Q24Game4NaviFv
	lwz      r5, naviMgr__4Game@sda21(r13)
	mr       r3, r30
	lfs      f2, 0x38(r1)
	mr       r4, r31
	lwz      r6, 0xc8(r5)
	addi     r5, r1, 0x30
	lfs      f1, 0x34(r1)
	lfs      f3, 0x3b8(r6)
	lfs      f0, 0x30(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x38(r1)
	stfs     f0, 0x30(r1)
	stfs     f1, 0x34(r1)
	bl       "blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<f>"

lbl_8017FF50:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017FF80
 * Size:	000034
 */
void blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3f(void)
{
	/*
	lfs      f1, 0x1e4(r4)
	lfs      f0, 0(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x1e4(r4)
	lfs      f1, 0x1e8(r4)
	lfs      f0, 4(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x1e8(r4)
	lfs      f1, 0x1ec(r4)
	lfs      f0, 8(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x1ec(r4)
	blr
	*/
}

namespace Game {
/*
 * --INFO--
 * Address:	8017FFB4
 * Size:	0000A8
 */
void NaviChangeState::init(Navi* navi, StateArg* arg)
{
	if (!navi->isMovieActor()) {
		navi->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, navi, nullptr);
	}

	newNavi = naviMgr->getAt(1 - navi->m_naviIndex);
	finish  = 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018001C
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_8017FFFC
	addi     r6, r31, 0x178

lbl_8017FFFC:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x20
	li       r5, 0x20
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl

lbl_8018001C:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lhz      r0, 0x2dc(r31)
	lwz      r12, 0(r3)
	subfic   r4, r0, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x10(r30)
	li       r0, 0
	stb      r0, 0x14(r30)
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
 * Address:	8018005C
 * Size:	000058
 */
void NaviChangeState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& key)
{
	if (key.m_type == 1000) {
		finish = true;
		navi->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, navi, nullptr);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	mr       r5, r4
	cmplwi   r0, 0x3e8
	bne      lbl_801800A4
	li       r0, 1
	li       r4, 0x1e
	stb      r0, 0x14(r3)
	mr       r3, r5
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_801800A4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801800B4
 * Size:	0000AC
 */
void NaviChangeState::exec(Navi* navi)
{
	if (navi->isMovieActor()) {
		transit(navi, 0, nullptr);
	}
	navi->m_velocity.x = 0.0f;
	navi->m_velocity.y = 0.0f;
	navi->m_velocity.z = 0.0f;

	if (finish) {
		transit(navi, 0, nullptr);
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
	lwz      r12, 0(r31)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018010C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8018010C:
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	lbz      r0, 0x14(r30)
	cmplwi   r0, 1
	bne      lbl_80180148
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80180148:
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
 * Address:	80180160
 * Size:	000004
 */
void NaviChangeState::cleanup(Navi*) { }

/*
 * --INFO--
 * Address:	80180164
 * Size:	00016C
 */
void NaviFollowState::init(Navi* navi, StateArg* arg)
{
	if (!arg) // theres a check for the first member of the arg being 0 too but
	          // idk how StateArg works here
	{
		finish = true;
		navi->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, navi, nullptr);
	} else {
		navi->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, navi, nullptr);
		finish = false;

		if (!navi->m_naviIndex) {
			navi->m_soundObj->startSound(0x895,
			                             nullptr); // sound id needs an enum
		} else if (!(PlayData->storyflags & 1))    // payed debt flag (for louie/president)
			navi->m_soundObj->startSound(0x896, nullptr);
		else
			navi->m_soundObj->startSound(0x89c, nullptr);
	}

	targetNavi = NaviMgr->getAt(1 - navi->m_naviIndex);
	navi->setMoveRotation(1);
	counter = 0;
	unkNavi = nullptr;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80180248
	lbz      r0, 0(r5)
	cmplwi   r0, 0
	beq      lbl_80180248
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_801801A4
	addi     r6, r6, 0x178

lbl_801801A4:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x20
	li       r5, 0x20
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x14(r30)
	lhz      r0, 0x2dc(r31)
	cmplwi   r0, 0
	bne      lbl_801801F8
	lwz      r3, 0x26c(r31)
	li       r4, 0x895
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80180274

lbl_801801F8:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80180228
	lwz      r3, 0x26c(r31)
	li       r4, 0x89c
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80180274

lbl_80180228:
	lwz      r3, 0x26c(r31)
	li       r4, 0x896
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80180274

lbl_80180248:
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x14(r30)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r31)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_80180274:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lhz      r0, 0x2dc(r31)
	lwz      r12, 0(r3)
	subfic   r4, r0, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x10(r30)
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x1c(r30)
	stw      r0, 0x18(r30)
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
 * Address:	801802D0
 * Size:	000174
 */
void NaviFollowState::onKeyEvent(Navi* navi, SysShape::KeyEvent const& key)
{
	if (key.m_type == 1000) {
		if (finish != 1) {
			if (!finish) {
				finish = 1;
				navi->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, navi, nullptr);
			} else if (finish < 3) {
				counter = 0;
				finish  = 1;
				navi->startMotion(IPikiAnims::WALK, IPikiAnims::WALK, navi, nullptr);
			}
		}
	}
	// animid is missing from this keyevent struct
	if ((!GameSys || !GameSys->frozen) && key.animid == 0x32 && key.m_type == 200) {
		if (!navi->m_naviIndex) {
			navi->m_soundObj->startSound(0x877, nullptr);
		} else if (!(PlayData->storyflags & 1)) // payed debt flag (for louie/president)
			navi->m_soundObj->startSound(0x878, nullptr);
		else
			navi->m_soundObj->startSound(0x879, nullptr);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	stw      r31, 0xc(r1)
	mr       r31, r5
	cmplwi   r0, 0x3e8
	stw      r30, 8(r1)
	mr       r30, r4
	bne      lbl_80180384
	lbz      r0, 0x14(r3)
	cmpwi    r0, 1
	beq      lbl_80180384
	bge      lbl_80180314
	cmpwi    r0, 0
	bge      lbl_80180320
	b        lbl_80180384

lbl_80180314:
	cmpwi    r0, 3
	bge      lbl_80180384
	b        lbl_80180350

lbl_80180320:
	li       r0, 1
	li       r4, 0x1e
	stb      r0, 0x14(r3)
	mr       r3, r30
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r30)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_80180384

lbl_80180350:
	li       r4, 0
	li       r0, 1
	stb      r4, 0x1c(r3)
	li       r4, 0x1f
	li       r5, 0x1f
	li       r6, 0
	stb      r0, 0x14(r3)
	mr       r3, r30
	li       r7, 0
	lwz      r12, 0(r30)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_80180384:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8018039C
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	bne      lbl_8018042C

lbl_8018039C:
	lha      r0, 0x20(r31)
	cmpwi    r0, 0x32
	bne      lbl_8018042C
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0xc8
	bne      lbl_8018042C
	lhz      r0, 0x2dc(r30)
	cmplwi   r0, 0
	bne      lbl_801803E0
	lwz      r3, 0x26c(r30)
	li       r4, 0x877
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018042C

lbl_801803E0:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80180410
	lwz      r3, 0x26c(r30)
	li       r4, 0x879
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018042C

lbl_80180410:
	lwz      r3, 0x26c(r30)
	li       r4, 0x878
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_8018042C:
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
 * Address:	........
 * Size:	00007C
 */
void NaviFollowState::messageAttack(Game::Creature*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80180444
 * Size:	0009A0
 */
void NaviFollowState::exec(Navi* navi)
{
	if (!MoviePlayer || !MoviePlayer->m_demostate) {
		if (!navi->m_padinput) {
			if (!finish) {
				if (!navi->assertMotion(IPikiAnims::WAIT)) {
					finish = true;
					navi->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, navi, nullptr);
				}
				navi->m_velocity.x = 0.0f;
				navi->m_velocity.y = 0.0f;
				navi->m_velocity.z = 0.0f;
			} else {
				if (!targetNavi->isStickTo()) {
					if (finish == 3) {
						if (unkNavi == nullptr || !unkNavi->isAlive() || unkNavi->isFlying() || unkNavi->isUnderground()) {
							finish  = 1;
							unkNavi = nullptr;
							navi->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, navi, nullptr);
						} else {
							Sys::Sphere targetPos;
							unkNavi->getBoundingSphere(targetPos);
							Vector3f naviPos = navi->getPosition();
							float dx         = targetPos.m_position.x - naviPos.x;
							float dy         = targetPos.m_position.y - naviPos.y;
							float dz         = targetPos.m_position.z - naviPos.z;
							float dist       = dx * dx + dy * dy + dz * dz;
							if (dist > 0.0f) {
								dist = (1.0 / SQRT(dist)) * dist;
							}
							if (dist > 0.0f) {
								dx *= 1.0f / dist;
								dy *= 1.0f / dist;
								dz *= 1.0f / dist;
							}
							if (8.0f <= dist - targetPos.m_radius) {
								counter2++;
								if (counter2 < 0x3c) {
									navi->control();
									navi->m_velocity.x = dx * NaviMgr->m_parms.p004.value * 0.5f;
									navi->m_velocity.y = dx * NaviMgr->m_parms.p004.value * 0.5f;
									navi->m_velocity.z = dx * NaviMgr->m_parms.p004.value * 0.5f;
								} else {
									finish = 1;
									navi->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, navi, nullptr);
									unkNavi = nullptr;
								}
							} else {
								navi->turnTo(targetPos.m_position);
								StateArg arg; // set 0x0 and 0x1 to 1 - need to make this use FollowStateArg eventually
								transit(navi, 2, &arg);
							}
						}
					} else {
						float dx   = targetNavi->m_position2.x;
						float dy   = targetNavi->m_position2.y;
						float dz   = targetNavi->m_position2.z;
						float dist = dx * dx + dy * dy + dz * dz;
						if (dist > 0.0f) {
							dist = (1.0 / SQRT(dist)) * dist;
						}
						if (finish == 2) {
							if (dist < 20.0f) {
								navi->startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, navi, nullptr);
								finish = 0;
							} else {
								navi->m_velocity.x = 0.0f;
								navi->m_velocity.y = 0.0f;
								navi->m_velocity.z = 0.0f;
								if (!navi->assertMotion(motion)) {
									finish = 1;
									navi->startMotion(IPikiAnims::RUN2, IPikiAnims::RUN2, navi, nullptr);
								}
							}
						} else {
							if (dist < 20.0f) {
								counter = 0;
							} else {
								if (counter < 0x5a) {
									counter++;
								} else {
									KandoLib::Choice choice[4];
									choice[0].m_result = IPikiAnims::JUMP;
									choice[0].m_chance = 0.25;
									choice[1].m_result = IPikiAnims::AKUBI;
									choice[1].m_chance = 0.25;
									choice[2].m_result = IPikiAnims::CHATTING;
									choice[2].m_chance = 0.25;
									choice[3].m_result = IPikiAnims::SAGASU2;
									choice[3].m_chance = 0.25;
									motion             = KandoLib::getRandomChoice(choice, 4);
									navi->startMotion(motion, motion, navi, nullptr);
									finish = 2;
									if (!GameSys->frozen) {
										int id = navi->m_naviIndex;
										if (id == 1 && GameSys->gamemode == 0 && PlayData->flags & 1) {
											id = 2;
										}
										if (motion == IPikiAnims::JUMP) {
											// NaviJumpSounds is the table at
											// 804b2ccc (thats usa demo 1
											// address, cry about it :troll:)

											// Address for NaviJumpSounds is
											// 804B2D8C in USA Retail. There are
											// other sound tables nearby,
											// unnamed in the symbol map.
											// -EpochFlame
											navi->m_soundObj->startSound(NaviJumpSounds[id], nullptr);
										} else if (motion == IPikiAnims::AKUBI) {
											navi->m_soundObj->startSound(NaviNoviSounds[id], nullptr);
										} else if (motion == IPikiAnims::CHATTING) {
											navi->m_soundObj->startSound(NaviChatSounds[id], nullptr);
										} else {
											navi->m_soundObj->startSound(NaviKyoroSounds[id], nullptr);
										}
									}
								}
							}
							Vector3f newpos = targetNavi->getPosition();
							float angle     = targetNavi->getFaceDir();
							int state       = targetNavi->getStateID();
							if (dist < 20.0f || (state != 5 && state != 6)) {
								if (state == 2) {
									float timer = -targetNavi->m_cPlateMgr->m_timer;
									if (angle < 0.0f)
										angle = -angle;
									// this extremely complicated trig stuff is
									// beyond me ill finish this function later
								}
							}
						}
					}
				}
			}
		}
	}
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stfd     f26, 0xb0(r1)
	psq_st   f26, 184(r1), 0, qr0
	stfd     f25, 0xa0(r1)
	psq_st   f25, 168(r1), 0, qr0
	stmw     r27, 0x8c(r1)
	lwz      r6, moviePlayer__4Game@sda21(r13)
	lis      r5, lbl_804B2D40@ha
	mr       r28, r3
	mr       r29, r4
	cmplwi   r6, 0
	addi     r31, r5, lbl_804B2D40@l
	beq      lbl_801804B4
	lwz      r0, 0x18(r6)
	cmpwi    r0, 0
	bne      lbl_80180D98

lbl_801804B4:
	lwz      r0, 0x278(r29)
	cmplwi   r0, 0
	beq      lbl_801804E4
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80180D98

lbl_801804E4:
	lbz      r0, 0x14(r28)
	cmplwi   r0, 0
	bne      lbl_80180544
	mr       r3, r29
	li       r4, 0x20
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80180530
	li       r0, 1
	mr       r3, r29
	stb      r0, 0x14(r28)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r29)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_80180530:
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x1e4(r29)
	stfs     f0, 0x1e8(r29)
	stfs     f0, 0x1ec(r29)
	b        lbl_80180D98

lbl_80180544:
	lwz      r3, 0x10(r28)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80180578
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80180D98

lbl_80180578:
	lbz      r0, 0x14(r28)
	cmplwi   r0, 3
	bne      lbl_801807A8
	lwz      r3, 0x18(r28)
	cmplwi   r3, 0
	beq      lbl_801805E0
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801805E0
	lwz      r3, 0x18(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801805E0
	lwz      r3, 0x18(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80180618

lbl_801805E0:
	li       r3, 1
	li       r0, 0
	stb      r3, 0x14(r28)
	mr       r3, r29
	li       r4, 0x1e
	li       r5, 0x1e
	stw      r0, 0x18(r28)
	li       r6, 0
	li       r7, 0
	lwz      r12, 0(r29)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_80180D98

lbl_80180618:
	lwz      r3, 0x18(r28)
	addi     r4, r1, 0x34
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x28
	lwz      r12, 0(r29)
	lfs      f25, 0x34(r1)
	lwz      r12, 8(r12)
	lfs      f26, 0x38(r1)
	lfs      f27, 0x3c(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x2c(r1)
	lfs      f2, 0x28(r1)
	fsubs    f26, f26, f0
	lfs      f1, 0x30(r1)
	fsubs    f25, f25, f2
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f27, f27, f1
	fmuls    f1, f26, f26
	fmuls    f2, f27, f27
	fmadds   f1, f25, f25, f1
	fadds    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_80180698
	ble      lbl_8018069C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8018069C

lbl_80180698:
	fmr      f2, f0

lbl_8018069C:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801806C0
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f25, f25, f0
	fmuls    f26, f26, f0
	fmuls    f27, f27, f0
	b        lbl_801806C4

lbl_801806C0:
	fmr      f2, f0

lbl_801806C4:
	lfs      f1, 0x40(r1)
	lfs      f0, lbl_80518C58@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80180720
	mr       r3, r29
	addi     r4, r1, 0x34
	bl       "turnTo__Q24Game8FakePikiFR10Vector3<f>"
	li       r5, 0
	li       r0, 1
	stb      r5, 8(r1)
	mr       r3, r28
	mr       r4, r29
	addi     r6, r1, 8
	stw      r5, 0xc(r1)
	li       r5, 2
	stb      r0, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80180D98

lbl_80180720:
	lbz      r3, 0x1e(r28)
	addi     r3, r3, 1
	clrlwi   r0, r3, 0x18
	stb      r3, 0x1e(r28)
	cmplwi   r0, 0x3c
	blt      lbl_80180770
	li       r0, 1
	mr       r3, r29
	stb      r0, 0x14(r28)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r29)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x18(r28)
	b        lbl_80180D98

lbl_80180770:
	mr       r3, r29
	bl       control__Q24Game4NaviFv
	lwz      r3, naviMgr__4Game@sda21(r13)
	lfs      f1, lbl_80518C04@sda21(r2)
	lwz      r3, 0xc8(r3)
	lfs      f0, 0x3b8(r3)
	fmuls    f0, f1, f0
	fmuls    f2, f25, f0
	fmuls    f1, f26, f0
	fmuls    f0, f27, f0
	stfs     f2, 0x1e4(r29)
	stfs     f1, 0x1e8(r29)
	stfs     f0, 0x1ec(r29)
	b        lbl_80180D98

lbl_801807A8:
	lwz      r3, 0x10(r28)
	lfs      f1, lbl_80518BE0@sda21(r2)
	lfs      f3, 0x200(r3)
	lfs      f2, 0x204(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x208(r3)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801807F4
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_801807F8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_801807F8

lbl_801807F4:
	fmr      f2, f1

lbl_801807F8:
	lfs      f0, lbl_80518C5C@sda21(r2)
	li       r30, 0
	fcmpo    cr0, f2, f0
	ble      lbl_8018080C
	li       r30, 1

lbl_8018080C:
	cmplwi   r0, 2
	bne      lbl_801808AC
	clrlwi.  r0, r30, 0x18
	beq      lbl_80180858
	cmplwi   r29, 0
	mr       r6, r29
	beq      lbl_8018082C
	addi     r6, r29, 0x178

lbl_8018082C:
	lwz      r12, 0(r29)
	mr       r3, r29
	li       r4, 0x20
	li       r5, 0x20
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x14(r28)
	b        lbl_80180D98

lbl_80180858:
	lfs      f0, lbl_80518BE0@sda21(r2)
	mr       r3, r29
	stfs     f0, 0x1e4(r29)
	stfs     f0, 0x1e8(r29)
	stfs     f0, 0x1ec(r29)
	lbz      r4, 0x1d(r28)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80180D98
	li       r0, 1
	mr       r3, r29
	stb      r0, 0x14(r28)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r29)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_80180D98

lbl_801808AC:
	clrlwi.  r0, r30, 0x18
	beq      lbl_801808C0
	li       r0, 0
	stb      r0, 0x1c(r28)
	b        lbl_80180A7C

lbl_801808C0:
	lbz      r3, 0x1c(r28)
	cmplwi   r3, 0x5a
	bge      lbl_801808D8
	addi     r0, r3, 1
	stb      r0, 0x1c(r28)
	b        lbl_80180A7C

lbl_801808D8:
	lis      r4, lbl_8047EB20@ha
	addi     r3, r1, 0x44
	addi     r12, r4, lbl_8047EB20@l
	li       r4, 4
	lwz      r11, 0(r12)
	lwz      r10, 4(r12)
	lwz      r9, 8(r12)
	lwz      r8, 0xc(r12)
	lwz      r7, 0x10(r12)
	lwz      r6, 0x14(r12)
	lwz      r5, 0x18(r12)
	lwz      r0, 0x1c(r12)
	stw      r11, 0x44(r1)
	stw      r10, 0x48(r1)
	stw      r9, 0x4c(r1)
	stw      r8, 0x50(r1)
	stw      r7, 0x54(r1)
	stw      r6, 0x58(r1)
	stw      r5, 0x5c(r1)
	stw      r0, 0x60(r1)
	bl       getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
	mr       r27, r3
	cmplwi   r29, 0
	stb      r27, 0x1d(r28)
	mr       r6, r29
	beq      lbl_80180944
	addi     r6, r29, 0x178

lbl_80180944:
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r4, r27
	mr       r5, r27
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 2
	stb      r0, 0x14(r28)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80180A7C
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	bne      lbl_80180A7C
	lhz      r4, 0x2dc(r29)
	cmpwi    r4, 1
	bne      lbl_801809B0
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_801809B0
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_801809B0
	addi     r4, r4, 1

lbl_801809B0:
	cmpwi    r27, 0x32
	beq      lbl_80180A30
	bge      lbl_801809D4
	cmpwi    r27, 3
	beq      lbl_801809E0
	bge      lbl_80180A7C
	cmpwi    r27, 0
	beq      lbl_80180A08
	b        lbl_80180A7C

lbl_801809D4:
	cmpwi    r27, 0x36
	beq      lbl_80180A58
	b        lbl_80180A7C

lbl_801809E0:
	lwz      r3, 0x26c(r29)
	slwi     r0, r4, 2
	addi     r4, r31, 0x28
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwzx     r4, r4, r0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80180A7C

lbl_80180A08:
	lwz      r3, 0x26c(r29)
	slwi     r0, r4, 2
	addi     r4, r31, 0x40
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwzx     r4, r4, r0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80180A7C

lbl_80180A30:
	lwz      r3, 0x26c(r29)
	slwi     r0, r4, 2
	addi     r4, r31, 0x4c
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwzx     r4, r4, r0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80180A7C

lbl_80180A58:
	lwz      r3, 0x26c(r29)
	slwi     r0, r4, 2
	addi     r4, r31, 0x58
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwzx     r4, r4, r0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_80180A7C:
	lwz      r4, 0x10(r28)
	addi     r3, r1, 0x1c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r28)
	lfs      f31, 0x1c(r1)
	lwz      r12, 0(r3)
	lfs      f30, 0x20(r1)
	lwz      r12, 0x64(r12)
	lfs      f29, 0x24(r1)
	mtctr    r12
	bctrl
	fmr      f25, f1
	lwz      r3, 0x10(r28)
	bl       getStateID__Q24Game4NaviFv
	clrlwi.  r0, r30, 0x18
	bne      lbl_80180B84
	cmpwi    r3, 5
	beq      lbl_80180AD8
	cmpwi    r3, 6
	bne      lbl_80180B84

lbl_80180AD8:
	lfs      f1, lbl_80518C60@sda21(r2)
	lfs      f0, lbl_80518BE0@sda21(r2)
	fadds    f5, f1, f25
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_80180AF4
	fneg     f1, f5

lbl_80180AF4:
	lfs      f2, lbl_80518BE8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518BE0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_80518C64@sda21(r2)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f3, f0
	bge      lbl_80180B54
	lfs      f0, lbl_80518BEC@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80180B6C

lbl_80180B54:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80180B6C:
	fmuls    f1, f3, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fadds    f29, f29, f4
	fadds    f30, f30, f0
	fadds    f31, f31, f1
	b        lbl_80180C38

lbl_80180B84:
	cmpwi    r3, 2
	bne      lbl_80180C38
	lwz      r3, 0x10(r28)
	fmr      f1, f25
	lfs      f0, lbl_80518BE0@sda21(r2)
	lwz      r3, 0x254(r3)
	fcmpo    cr0, f25, f0
	lfs      f0, 0xb0(r3)
	fneg     f4, f0
	bge      lbl_80180BB0
	fneg     f1, f25

lbl_80180BB0:
	lfs      f2, lbl_80518BE8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518BE0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f25, f0
	fctiwz   f0, f1
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f3, f4, f0
	bge      lbl_80180C0C
	lfs      f0, lbl_80518BEC@sda21(r2)
	fmuls    f0, f25, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80180C24

lbl_80180C0C:
	fmuls    f0, f25, f2
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80180C24:
	fmuls    f1, f4, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fadds    f29, f29, f3
	fadds    f30, f30, f0
	fadds    f31, f31, f1

lbl_80180C38:
	mr       r4, r29
	lwz      r5, 0x10(r28)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x10
	lfs      f28, 0x1e4(r5)
	lwz      r12, 8(r12)
	lfs      f27, 0x1e8(r5)
	lfs      f26, 0x1ec(r5)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	lfs      f2, 0x18(r1)
	fsubs    f30, f30, f0
	lfs      f1, 0x10(r1)
	fsubs    f25, f29, f2
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f29, f31, f1
	fmuls    f1, f30, f30
	fmuls    f2, f25, f25
	fmadds   f1, f29, f29, f1
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_80180CA4
	ble      lbl_80180CA8
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_80180CA8

lbl_80180CA4:
	fmr      f31, f0

lbl_80180CA8:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80180CCC
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f31
	fmuls    f29, f29, f0
	fmuls    f30, f30, f0
	fmuls    f25, f25, f0
	b        lbl_80180CD0

lbl_80180CCC:
	fmr      f31, f0

lbl_80180CD0:
	mr       r3, r29
	bl       getOlimarData__Q24Game4NaviFv
	li       r4, 7
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80180CF8
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r3, 0xc8(r3)
	lfs      f1, 0xbb0(r3)
	b        lbl_80180D04

lbl_80180CF8:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r3, 0xc8(r3)
	lfs      f1, 0x3b8(r3)

lbl_80180D04:
	lfs      f0, lbl_80518C64@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80180D14
	lfs      f1, lbl_80518BE0@sda21(r2)

lbl_80180D14:
	lfs      f0, lbl_80518C68@sda21(r2)
	fmuls    f29, f29, f1
	fmuls    f30, f30, f1
	fcmpo    cr0, f31, f0
	fmuls    f25, f25, f1
	bge      lbl_80180D54
	lfs      f0, lbl_80518C04@sda21(r2)
	fmuls    f5, f29, f0
	fmuls    f4, f28, f0
	fmuls    f3, f30, f0
	fmuls    f2, f27, f0
	fmuls    f1, f25, f0
	fmuls    f0, f26, f0
	fadds    f29, f5, f4
	fadds    f30, f3, f2
	fadds    f25, f1, f0

lbl_80180D54:
	lfs      f0, lbl_80518C6C@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80180D84
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80180D98

lbl_80180D84:
	mr       r3, r29
	bl       control__Q24Game4NaviFv
	stfs     f29, 0x1e4(r29)
	stfs     f30, 0x1e8(r29)
	stfs     f25, 0x1ec(r29)

lbl_80180D98:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	psq_l    f26, 184(r1), 0, qr0
	lfd      f26, 0xb0(r1)
	psq_l    f25, 168(r1), 0, qr0
	lfd      f25, 0xa0(r1)
	lmw      r27, 0x8c(r1)
	lwz      r0, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	80180DE4
 * Size:	000004
 */
void NaviFollowState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	80180DE8
 * Size:	000040
 */
NaviPunchState::NaviPunchState(void)
{
	/*
	lis      r4, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r4, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r4, __vt__Q24Game14NaviPunchState@ha
	stw      r0, 0(r3)
	li       r0, 2
	li       r6, 0
	addi     r5, r5, __vt__Q24Game9NaviState@l
	stw      r0, 4(r3)
	addi     r0, r4, __vt__Q24Game14NaviPunchState@l
	stw      r6, 8(r3)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stb      r6, 0x24(r3)
	stw      r6, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80180E28
 * Size:	0000D4
 */
void NaviPunchState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80180E60
	lbz      r0, 0(r5)
	stb      r0, 0x24(r30)
	lwz      r0, 4(r5)
	stw      r0, 0x28(r30)
	b        lbl_80180E6C

lbl_80180E60:
	li       r0, 0
	stb      r0, 0x24(r30)
	stw      r0, 0x28(r30)

lbl_80180E6C:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80180E7C
	addi     r6, r31, 0x178

lbl_80180E7C:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x40
	li       r5, 0x40
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lwz      r3, 0x26c(r31)
	li       r4, 0x800
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       enableMotionBlend__Q24Game8FakePikiFv
	li       r0, 0
	stb      r0, 0x10(r30)
	stw      r31, 0x18(r30)
	stw      r0, 0x14(r30)
	stb      r0, 0x1c(r30)
	stb      r0, 0x1e(r30)
	stb      r0, 0x1d(r30)
	stb      r0, 0x20(r30)
	stb      r0, 0x1f(r30)
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
 * Address:	........
 * Size:	000108
 */
void NaviPunchState::renzokuInit(Game::Navi*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80180EFC
 * Size:	000300
 */
void NaviPunchState::hitCallback(CollPart*)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r30, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r29, r4
	li       r4, 0x23
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_801811C8
	cmplwi   r29, 0
	beq      lbl_801811C8
	lwz      r6, 0x18(r30)
	li       r31, 0
	lfs      f1, lbl_80518C70@sda21(r2)
	lwz      r3, 0x1b8(r6)
	cmplwi   r3, 0
	beq      lbl_80180F70
	lha      r0, 0x20(r3)
	b        lbl_80180F74

lbl_80180F70:
	li       r0, -1

lbl_80180F74:
	cmpwi    r0, 0x42
	bne      lbl_80180F88
	lfs      f0, lbl_80518C74@sda21(r2)
	li       r31, 1
	fmuls    f1, f1, f0

lbl_80180F88:
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game14InteractAttack@ha
	addi     r5, r4, __vt__Q24Game11Interaction@l
	stw      r6, 0x28(r1)
	addi     r0, r3, __vt__Q24Game14InteractAttack@l
	addi     r4, r1, 0x24
	stw      r5, 0x24(r1)
	stw      r0, 0x24(r1)
	stfs     f1, 0x2c(r1)
	stw      r29, 0x30(r1)
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801811C8
	lwz      r5, 0x18(r30)
	lis      r3, 0x72686E64@ha
	lfs      f31, 0x4c(r29)
	addi     r4, r3, 0x72686E64@l
	lfs      f30, 0x50(r29)
	lfs      f29, 0x54(r29)
	lwz      r3, 0x114(r5)
	bl       getCollPart__8CollTreeFUl
	lfs      f4, 0x50(r3)
	lfs      f5, 0x54(r3)
	fsubs    f7, f30, f4
	lfs      f3, 0x4c(r3)
	fsubs    f8, f29, f5
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f6, f31, f3
	fmuls    f1, f7, f7
	fmuls    f2, f8, f8
	fmadds   f1, f6, f6, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80181030
	ble      lbl_80181034
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80181034

lbl_80181030:
	fmr      f1, f0

lbl_80181034:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80181054
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f6, f6, f0
	fmuls    f7, f7, f0
	fmuls    f8, f8, f0

lbl_80181054:
	lfs      f0, lbl_80518C54@sda21(r2)
	lis      r3, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple1@ha
	fmuls    f6, f6, f0
	lis      r5, __vt__Q23efx3Arg@ha
	fmuls    f7, f7, f0
	lis      r3, __vt__Q23efx11TOrimapunch@ha
	fmuls    f8, f8, f0
	stw      r0, 8(r1)
	fadds    f6, f6, f3
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	fadds    f7, f7, f4
	addi     r4, r5, __vt__Q23efx3Arg@l
	fadds    f8, f8, f5
	li       r6, 0x26d
	li       r5, 0
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx11TOrimapunch@l
	addi     r3, r1, 8
	stw      r4, 0x14(r1)
	addi     r4, r1, 0x14
	stfs     f6, 0x18(r1)
	stfs     f7, 0x1c(r1)
	stfs     f8, 0x20(r1)
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	clrlwi.  r0, r31, 0x18
	beq      lbl_801810F4
	lwz      r3, 0x18(r30)
	li       r4, 0x2828
	li       r5, 0
	lwz      r3, 0x26c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80181114

lbl_801810F4:
	lwz      r3, 0x18(r30)
	li       r4, 0x801
	li       r5, 0
	lwz      r3, 0x26c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_80181114:
	li       r0, 1
	stb      r0, 0x1f(r30)
	lbz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_801811C8
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r4, 0x18(r30)
	lwz      r12, 0(r3)
	lhz      r0, 0x2dc(r4)
	lwz      r12, 0x24(r12)
	subfic   r4, r0, 1
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_801811C8
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801811C8
	mr       r3, r31
	bl       getStateID__Q24Game4NaviFv
	cmpwi    r3, 1
	bne      lbl_801811C8
	lwz      r31, 0x274(r31)
	lwz      r30, 0x14(r30)
	lbz      r0, 0x14(r31)
	cmplwi   r0, 1
	beq      lbl_80181194
	cmplwi   r0, 2
	bne      lbl_801811C8

lbl_80181194:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801811C8
	stw      r30, 0x18(r31)
	li       r3, 3
	li       r0, 0
	stb      r3, 0x14(r31)
	stb      r0, 0x1e(r31)
	stb      r0, 0x1c(r31)

lbl_801811C8:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x84(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	801811FC
 * Size:	0003A4
 */
void NaviPunchState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	mr       r29, r5
	mr       r30, r3
	lwz      r0, 0x1c(r5)
	mr       r31, r4
	cmpwi    r0, 0x3e8
	beq      lbl_8018140C
	bge      lbl_80181564
	cmpwi    r0, 2
	beq      lbl_8018125C
	b        lbl_80181564

lbl_8018125C:
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x10(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x20(r29)
	fmr      f30, f1
	lfs      f29, lbl_80518C54@sda21(r2)
	cmpwi    r0, 0x42
	lfs      f28, lbl_80518C5C@sda21(r2)
	bne      lbl_80181298
	lfs      f29, lbl_80518C78@sda21(r2)
	lfs      f28, lbl_80518C50@sda21(r2)

lbl_80181298:
	fmr      f1, f30
	bl       cos
	frsp     f31, f1
	fmr      f1, f30
	bl       sin
	mr       r4, r31
	frsp     f30, f1
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f4, f29, f30
	lfs      f3, 8(r1)
	lfs      f2, 0xc(r1)
	fmuls    f1, f29, f31
	lfs      f0, 0x10(r1)
	addi     r3, r1, 0x38
	fadds    f3, f4, f3
	stfs     f28, 0x20(r1)
	fadds    f2, f28, f2
	addi     r4, r1, 0x14
	fadds    f0, f1, f0
	stfs     f3, 0x14(r1)
	stfs     f2, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	addi     r3, r1, 0x58
	addi     r4, r1, 0x38
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x58
	bl       first__Q24Game12CellIteratorFv
	b        lbl_801813F8

lbl_8018131C:
	addi     r3, r1, 0x58
	bl       dump__Q24Game12CellIteratorFv
	addi     r3, r1, 0x58
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801813F0
	lwz      r0, 0x114(r29)
	cmplwi   r0, 0
	beq      lbl_801813F0
	cmplw    r29, r31
	beq      lbl_801813F0
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801813F0
	stw      r29, 0x14(r30)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	lis      r6, "__vt__22IDelegate1<P8CollPart>"@ha
	lis      r3, lbl_804B2DA4@ha
	addi     r5, r3, lbl_804B2DA4@l
	lis      r4, "__vt__45Delegate1<Q24Game14NaviPunchState,P8CollPart>"@ha
	addi     r0, r6, "__vt__22IDelegate1<P8CollPart>"@l
	lwz      r6, 0(r5)
	lwz      r3, 4(r5)
	addi     r7, r4, "__vt__45Delegate1<Q24Game14NaviPunchState,P8CollPart>"@l
	stw      r0, 0x24(r1)
	addi     r4, r1, 0x14
	lwz      r0, 8(r5)
	addi     r5, r1, 0x24
	stw      r7, 0x24(r1)
	stw      r30, 0x28(r1)
	stw      r6, 0x2c(r1)
	stw      r3, 0x30(r1)
	stw      r0, 0x34(r1)
	lwz      r3, 0x114(r29)
	bl       "checkCollision__8CollTreeFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

lbl_801813F0:
	addi     r3, r1, 0x58
	bl       next__Q24Game12CellIteratorFv

lbl_801813F8:
	addi     r3, r1, 0x58
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018131C
	b        lbl_80181564

lbl_8018140C:
	lbz      r0, 0x1d(r30)
	cmplwi   r0, 0
	beq      lbl_80181538
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0
	addi     r3, r3, 0x48
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80181508
	lbz      r3, 0x1e(r30)
	addi     r3, r3, 1
	clrlwi   r0, r3, 0x18
	stb      r3, 0x1e(r30)
	cmplwi   r0, 1
	bgt      lbl_80181498
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80181458
	addi     r6, r31, 0x178

lbl_80181458:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x41
	li       r5, 0x41
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lwz      r3, 0x26c(r31)
	li       r4, 0x800
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_801814E4

lbl_80181498:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_801814A8
	addi     r6, r31, 0x178

lbl_801814A8:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x42
	li       r5, 0x42
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lwz      r3, 0x26c(r31)
	li       r4, 0x800
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_801814E4:
	mr       r3, r31
	bl       enableMotionBlend__Q24Game8FakePikiFv
	li       r0, 0
	stb      r0, 0x10(r30)
	stw      r0, 0x14(r30)
	stb      r0, 0x1c(r30)
	stb      r0, 0x1d(r30)
	stb      r0, 0x1f(r30)
	b        lbl_80181564

lbl_80181508:
	li       r0, 4
	li       r4, 0x1f
	stb      r0, 0x20(r30)
	li       r5, 0x1f
	li       r6, 0
	li       r7, 0
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	b        lbl_80181564

lbl_80181538:
	li       r0, 4
	li       r4, 0x1f
	stb      r0, 0x20(r30)
	li       r5, 0x1f
	li       r6, 0
	li       r7, 0
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_80181564:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r0, 0xf4(r1)
	lwz      r29, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801815A0
 * Size:	00017C
 */
void NaviPunchState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r5, 0x20(r3)
	cmplwi   r5, 0
	beq      lbl_80181654
	addi     r5, r5, -1
	clrlwi.  r0, r5, 0x18
	stb      r5, 0x20(r30)
	bne      lbl_801815F4
	lwz      r12, 0(r3)
	li       r6, 0
	lwz      r5, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80181704

lbl_801815F4:
	mr       r3, r31
	li       r4, 0x40
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80181704
	mr       r3, r31
	li       r4, 0x41
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80181704
	mr       r3, r31
	li       r4, 0x42
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80181704
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80181704

lbl_80181654:
	lbz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_80181698
	lwz      r3, 0x278(r31)
	cmplwi   r3, 0
	beq      lbl_80181698
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80181698
	lbz      r0, 0x1d(r30)
	cmplwi   r0, 0
	bne      lbl_80181698
	lbz      r0, 0x1e(r30)
	cmplwi   r0, 2
	bge      lbl_80181698
	li       r0, 1
	stb      r0, 0x1d(r30)

lbl_80181698:
	mr       r3, r31
	bl       control__Q24Game4NaviFv
	mr       r3, r31
	bl       findNextThrowPiki__Q24Game4NaviFv
	mr       r3, r31
	li       r4, 0x40
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80181704
	mr       r3, r31
	li       r4, 0x41
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80181704
	mr       r3, r31
	li       r4, 0x42
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80181704
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80181704:
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
 * Address:	8018171C
 * Size:	000004
 */
void NaviPunchState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	80181720
 * Size:	0000A0
 */
void NaviPathMoveState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r0, 0x14(r3)
	beq      lbl_8018177C
	lfs      f0, 0(r5)
	stfs     f0, 0x18(r29)
	lfs      f0, 4(r5)
	stfs     f0, 0x1c(r29)
	lfs      f0, 8(r5)
	stfs     f0, 0x20(r29)
	bl       initPathfinding__Q24Game17NaviPathMoveStateFPQ24Game4Navi
	cmpwi    r3, 1
	bne      lbl_8018177C
	li       r31, 1

lbl_8018177C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_801817A4
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801817A4:
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
 * Address:	801817C0
 * Size:	0000D8
 */
void NaviPathMoveState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lhz      r0, 0x10(r3)
	cmpwi    r0, 1
	beq      lbl_80181820
	bge      lbl_80181800
	cmpwi    r0, 0
	bge      lbl_8018180C
	b        lbl_80181854

lbl_80181800:
	cmpwi    r0, 3
	bge      lbl_80181854
	b        lbl_80181844

lbl_8018180C:
	bl       execPathfinding__Q24Game17NaviPathMoveStateFPQ24Game4Navi
	cmpwi    r3, 2
	bne      lbl_80181854
	li       r31, 1
	b        lbl_80181854

lbl_80181820:
	bl       execMove__Q24Game17NaviPathMoveStateFPQ24Game4Navi
	cmpwi    r3, 2
	bne      lbl_80181834
	li       r31, 1
	b        lbl_80181854

lbl_80181834:
	cmpwi    r3, 1
	bne      lbl_80181854
	li       r31, 1
	b        lbl_80181854

lbl_80181844:
	bl       execMoveGoal__Q24Game17NaviPathMoveStateFPQ24Game4Navi
	cmpwi    r3, 2
	bne      lbl_80181854
	li       r31, 1

lbl_80181854:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8018187C
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8018187C:
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
 * Address:	80181898
 * Size:	000044
 */
void NaviPathMoveState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0x14(r3)
	cmplwi   r4, 0
	beq      lbl_801818C8
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl
	li       r0, 0
	stw      r0, 0x14(r31)

lbl_801818C8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801818DC
 * Size:	0001BC
 */
void NaviPathMoveState::initPathfinding(Game::Navi*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	addi     r3, r1, 0x10
	stw      r30, 0x58(r1)
	mr       r30, r4
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	li       r4, 0
	lfs      f1, 0x14(r1)
	li       r0, -1
	lfs      f0, 0x18(r1)
	mr       r3, r30
	stw      r4, 0x50(r1)
	stw      r4, 0x4c(r1)
	stb      r4, 0x40(r1)
	sth      r0, 0x48(r1)
	stw      r4, 0x44(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	lha      r0, 0x18c(r30)
	sth      r0, 0x48(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018196C
	li       r0, 1
	stb      r0, 0x40(r1)

lbl_8018196C:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x34
	lwz      r3, 8(r3)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_801819A4
	lwz      r3, 0x4c(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8018199C
	mr       r30, r3
	b        lbl_801819E4

lbl_8018199C:
	lwz      r30, 0x50(r1)
	b        lbl_801819E4

lbl_801819A4:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x34
	lwz      r3, 8(r3)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_801819DC
	lwz      r3, 0x4c(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_801819D4
	lwz      r30, 0x50(r1)
	b        lbl_801819E4

lbl_801819D4:
	mr       r30, r3
	b        lbl_801819E4

lbl_801819DC:
	li       r3, 2
	b        lbl_80181A80

lbl_801819E4:
	lwz      r4, 0x14(r31)
	cmplwi   r4, 0
	beq      lbl_80181A00
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl
	li       r0, 0
	stw      r0, 0x14(r31)

lbl_80181A00:
	lfs      f1, 0x18(r31)
	li       r0, 0
	lfs      f0, lbl_80518C4C@sda21(r2)
	addi     r4, r1, 0x1c
	stfs     f1, 0x1c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lfs      f1, 0x1c(r31)
	stfs     f1, 0x20(r1)
	lfs      f1, 0x20(r31)
	stfs     f1, 0x24(r1)
	stw      r0, 0x28(r1)
	stb      r0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	cmplwi   r3, 0
	bne      lbl_80181A4C
	li       r3, 2
	b        lbl_80181A80

lbl_80181A4C:
	lha      r6, 0x36(r3)
	li       r0, 1
	lha      r5, 0x36(r30)
	addi     r4, r1, 8
	lwz      r3, testPathfinder__4Game@sda21(r13)
	sth      r5, 8(r1)
	sth      r6, 0xa(r1)
	stb      r0, 0xc(r1)
	bl       start__Q24Game10PathfinderFRQ24Game15PathfindRequest
	stw      r3, 0x14(r31)
	li       r0, 0
	li       r3, 1
	sth      r0, 0x10(r31)

lbl_80181A80:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80181A98
 * Size:	000090
 */
void NaviPathMoveState::execPathfinding(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0x14(r3)
	cmplwi   r4, 0
	bne      lbl_80181AC0
	li       r3, 2
	b        lbl_80181B14

lbl_80181AC0:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       check__Q24Game10PathfinderFUl
	cmpwi    r3, 1
	beq      lbl_80181B08
	bge      lbl_80181B10
	cmpwi    r3, 0
	bge      lbl_80181AE0
	b        lbl_80181B10

lbl_80181AE0:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	addi     r5, r31, 0x24
	lwz      r4, 0x14(r31)
	bl       makepath__Q24Game10PathfinderFUlPPQ24Game8PathNode
	stw      r3, 0x2c(r31)
	li       r0, 1
	lwz      r3, 0x24(r31)
	stw      r3, 0x28(r31)
	sth      r0, 0x10(r31)
	b        lbl_80181B10

lbl_80181B08:
	li       r3, 2
	b        lbl_80181B14

lbl_80181B10:
	li       r3, 0

lbl_80181B14:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80181B28
 * Size:	00015C
 */
void NaviPathMoveState::execMove(Game::Navi*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	lwz      r6, mapMgr__4Game@sda21(r13)
	mr       r30, r3
	lwz      r5, 0x24(r3)
	mr       r31, r4
	lwz      r3, 8(r6)
	lha      r4, 0x20(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f29, 0x4c(r3)
	lwz      r12, 0(r31)
	lfs      f30, 0x54(r3)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x10(r1)
	lfs      f0, 8(r1)
	fsubs    f30, f30, f1
	lfs      f31, lbl_80518BE0@sda21(r2)
	fsubs    f29, f29, f0
	fmuls    f1, f30, f30
	fmadds   f0, f29, f29, f31
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f31
	ble      lbl_80181BD4
	ble      lbl_80181BD8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80181BD8

lbl_80181BD4:
	fmr      f1, f31

lbl_80181BD8:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80181BFC
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f29, f29, f0
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0
	b        lbl_80181C00

lbl_80181BFC:
	fmr      f1, f0

lbl_80181C00:
	lfs      f0, lbl_80518C54@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80181C2C
	lwz      r3, 0x24(r30)
	lwz      r0, 0xc(r3)
	stw      r0, 0x24(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_80181C2C
	li       r3, 1
	b        lbl_80181C54

lbl_80181C2C:
	mr       r3, r31
	bl       control__Q24Game4NaviFv
	lfs      f0, lbl_80518C7C@sda21(r2)
	li       r3, 0
	fmuls    f2, f29, f0
	fmuls    f1, f31, f0
	fmuls    f0, f30, f0
	stfs     f2, 0x1e4(r31)
	stfs     f1, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_80181C54:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80181C84
 * Size:	000008
 */
u32 NaviPathMoveState::execMoveGoal(Game::Navi*) { return 0x0; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void NaviPathMoveState::getWayPont(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80181C8C
 * Size:	0000E4
 */
void NaviNukuState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80181CBC
	lbz      r0, 0(r5)
	stb      r0, 0x18(r30)
	b        lbl_80181CC4

lbl_80181CBC:
	li       r0, 0
	stb      r0, 0x18(r30)

lbl_80181CC4:
	lbz      r0, 0x26a(r31)
	cmplwi   r0, 0
	beq      lbl_80181CDC
	li       r0, 0x2b
	sth      r0, 0x16(r30)
	b        lbl_80181CE4

lbl_80181CDC:
	li       r0, 0x2a
	sth      r0, 0x16(r30)

lbl_80181CE4:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80181CF4
	addi     r6, r31, 0x178

lbl_80181CF4:
	lwz      r12, 0(r31)
	mr       r3, r31
	lha      r4, 0x16(r30)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mr       r5, r4
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r31)
	li       r4, 0x803
	li       r5, 0
	lwz      r0, 0x688(r3)
	sth      r0, 0x10(r30)
	lwz      r3, 0x26c(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_80518BE0@sda21(r2)
	stb      r0, 0x12(r30)
	stb      r0, 0x14(r30)
	stb      r0, 0x13(r30)
	stb      r0, 0x15(r30)
	stfs     f0, 0x118(r31)
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
 * Address:	80181D70
 * Size:	00018C
 */
void NaviNukuState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r5, moviePlayer__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_80181DF0
	lwz      r0, 0x18(r5)
	cmpwi    r0, 0
	beq      lbl_80181DF0
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_80181DD4
	li       r0, 0
	addi     r6, r1, 0xc
	stb      r0, 0xc(r1)
	li       r5, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80181EE4

lbl_80181DD4:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80181EE4

lbl_80181DF0:
	lfs      f0, lbl_80518BE0@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	lha      r4, 0x16(r30)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80181E84
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_80181E58
	li       r0, 0
	mr       r3, r30
	stb      r0, 8(r1)
	mr       r4, r31
	addi     r6, r1, 8
	li       r5, 1
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80181E78

lbl_80181E58:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80181E78:
	li       r0, 0
	stb      r0, 0x26a(r31)
	b        lbl_80181EE4

lbl_80181E84:
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_80181EE4
	lbz      r0, 0x13(r30)
	cmplwi   r0, 0
	bne      lbl_80181EB4
	lwz      r3, 0x278(r31)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80181EB4
	li       r0, 1
	stb      r0, 0x13(r30)

lbl_80181EB4:
	lbz      r0, 0x13(r30)
	cmplwi   r0, 0
	beq      lbl_80181EE4
	lwz      r3, 0x278(r31)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80181EE4
	li       r0, 1
	stb      r0, 0x14(r30)
	lbz      r3, 0x26a(r31)
	addi     r0, r3, 1
	stb      r0, 0x26a(r31)

lbl_80181EE4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80181EFC
 * Size:	00002C
 */
void NaviNukuState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80518C48@sda21(r2)
	mr       r3, r4
	stw      r0, 0x14(r1)
	stfs     f0, 0x118(r4)
	bl       startThrowDisable__Q24Game4NaviFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80181F28
 * Size:	000178
 */
void NaviNukuState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r0, 0x1c(r5)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	cmpwi    r0, 0x3e8
	stw      r30, 0x18(r1)
	mr       r30, r3
	beq      lbl_80181FA8
	bge      lbl_80182088
	cmpwi    r0, 2
	beq      lbl_80181F60
	b        lbl_80182088

lbl_80181F60:
	li       r0, 1
	stb      r0, 0x15(r30)
	lhz      r3, 0x10(r30)
	addi     r0, r3, -1
	sth      r0, 0x10(r30)
	lhz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_80182088
	lwz      r3, 0x26c(r31)
	li       r4, 0x2821
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x12(r30)
	b        lbl_80182088

lbl_80181FA8:
	lbz      r0, 0x14(r30)
	cmplwi   r0, 0
	beq      lbl_80182038
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_80181FD0
	mr       r3, r31
	bl       procActionButton__Q24Game4NaviFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80182088

lbl_80181FD0:
	li       r3, 0
	stb      r3, 0x14(r30)
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_8018200C
	stb      r3, 0xc(r1)
	mr       r3, r30
	mr       r4, r31
	addi     r6, r1, 0xc
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018202C

lbl_8018200C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8018202C:
	li       r0, 0
	stb      r0, 0x26a(r31)
	b        lbl_80182088

lbl_80182038:
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_80182068
	li       r0, 0
	addi     r6, r1, 8
	stb      r0, 8(r1)
	li       r5, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182080

lbl_80182068:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80182080:
	li       r0, 0
	stb      r0, 0x26a(r31)

lbl_80182088:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801820A0
 * Size:	000240
 */
void NaviNukuAdjustState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r30, r4
	mr       r31, r5
	li       r4, 0
	bl       setDemoFlag__Q24Game8PlayDataFi
	cmplwi   r31, 0
	bne      lbl_8018210C
	lis      r3, lbl_8047EB4C@ha
	lis      r5, lbl_8047EB5C@ha
	addi     r3, r3, lbl_8047EB4C@l
	li       r4, 0xad1
	addi     r5, r5, lbl_8047EB5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8018210C:
	lfs      f0, 0(r31)
	li       r0, 0
	mr       r4, r30
	addi     r3, r1, 0x14
	stfs     f0, 0x30(r29)
	lfs      f0, 4(r31)
	stfs     f0, 0x34(r29)
	lfs      f0, 8(r31)
	stfs     f0, 0x38(r29)
	lfs      f0, 0xc(r31)
	stfs     f0, 0x3c(r29)
	lwz      r5, 0x10(r31)
	stw      r5, 0x40(r29)
	lwz      r5, 0x14(r31)
	stw      r5, 0x44(r29)
	lbz      r5, 0x18(r31)
	stb      r5, 0x48(r29)
	stb      r0, 0x20(r29)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x20(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f2, 0x14(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x28(r1)
	lfs      f0, 0x1c(r1)
	fsubs    f30, f3, f2
	lfs      f2, 0x24(r1)
	fsubs    f31, f1, f0
	lfs      f0, 0x18(r1)
	fmr      f1, f30
	fsubs    f29, f2, f0
	fmr      f2, f31
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmuls    f2, f29, f29
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f3, f31, f31
	stfs     f1, 0x10(r29)
	fmadds   f1, f30, f30, f2
	fadds    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801821E4
	ble      lbl_801821E8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801821E8

lbl_801821E4:
	fmr      f1, f0

lbl_801821E8:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80182208
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0
	fmuls    f31, f31, f0

lbl_80182208:
	lwz      r4, 0x14(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, lbl_80518C80@sda21(r2)
	mr       r3, r30
	lfs      f1, 8(r1)
	li       r4, 0x1e
	fmuls    f0, f30, f4
	lfs      f3, 0xc(r1)
	fmuls    f2, f29, f4
	lfs      f5, 0x10(r1)
	fmuls    f4, f31, f4
	li       r5, 0x1e
	fsubs    f0, f1, f0
	li       r6, 0
	fsubs    f1, f3, f2
	li       r7, 0
	fsubs    f2, f5, f4
	stfs     f0, 0x14(r29)
	stfs     f1, 0x18(r29)
	stfs     f2, 0x1c(r29)
	lwz      r12, 0(r30)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       enableMotionBlend__Q24Game8FakePikiFv
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0(r30)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_80518BE0@sda21(r2)
	stb      r0, 0x4c(r29)
	stfs     f0, 0x118(r30)
	stb      r0, 0x5c(r29)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x74(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801822E0
 * Size:	000010
 */
void wallCallback__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviR10Vector3f(void)
{
	/*
	lbz      r4, 0x5c(r3)
	addi     r0, r4, 1
	stb      r0, 0x5c(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801822F0
 * Size:	000064
 */
void NaviNukuAdjustState::ignoreAtari(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80182334
	lhz      r0, 0x128(r30)
	cmplwi   r0, 0x402
	bne      lbl_80182338

lbl_80182334:
	li       r31, 1

lbl_80182338:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80182354
 * Size:	0000C4
 */
void NaviNukuAdjustState::collisionCallback(Game::Navi*, Game::CollEvent&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r31, 0(r5)
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80182400
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80182400
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801823C8
	b        lbl_80182400

lbl_801823C8:
	li       r0, 1
	mr       r4, r31
	stb      r0, 0x4c(r30)
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0x50(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x54(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x58(r30)

lbl_80182400:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80182418
 * Size:	000784
 */
void NaviNukuAdjustState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stfd     f27, 0xa0(r1)
	psq_st   f27, 168(r1), 0, qr0
	stfd     f26, 0x90(r1)
	psq_st   f26, 152(r1), 0, qr0
	stfd     f25, 0x80(r1)
	psq_st   f25, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	lwz      r5, moviePlayer__4Game@sda21(r13)
	mr       r30, r3
	mr       r31, r4
	cmplwi   r5, 0
	beq      lbl_801824CC
	lwz      r0, 0x18(r5)
	cmpwi    r0, 0
	beq      lbl_801824CC
	lbz      r0, 0x48(r30)
	cmplwi   r0, 0
	beq      lbl_801824B0
	lwz      r12, 0(r3)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

lbl_801824B0:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

lbl_801824CC:
	lwz      r3, 0x44(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018253C
	lbz      r0, 0x48(r30)
	cmplwi   r0, 0
	beq      lbl_80182518
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

lbl_80182518:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

lbl_8018253C:
	lbz      r0, 0x48(r30)
	cmplwi   r0, 0
	bne      lbl_80182554
	mr       r3, r31
	li       r4, 0
	bl       makeCStick__Q24Game4NaviFb

lbl_80182554:
	lwz      r3, 0x278(r31)
	cmplwi   r3, 0
	beq      lbl_80182598
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80182598
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x26a(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

lbl_80182598:
	mr       r4, r31
	addi     r3, r1, 0x50
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x50(r1)
	mr       r4, r31
	addi     r3, r1, 0x38
	stfs     f0, 0x24(r30)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x28(r30)
	lfs      f0, 0x58(r1)
	stfs     f0, 0x2c(r30)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x44(r30)
	addi     r3, r1, 0x44
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x48(r1)
	lfs      f0, 0x3c(r1)
	lfs      f3, 0x44(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x38(r1)
	lfs      f1, 0x4c(r1)
	lfs      f0, 0x40(r1)
	fsubs    f2, f3, f2
	fmuls    f4, f4, f4
	fsubs    f3, f1, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmadds   f1, f2, f2, f4
	fmuls    f2, f3, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x14(r30)
	lfs      f2, 0x2c(r1)
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x34(r1)
	fsubs    f28, f3, f2
	lfs      f2, 0x18(r30)
	fsubs    f26, f1, f0
	lfs      f1, 0x30(r1)
	fmuls    f4, f28, f28
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f27, f2, f1
	fmuls    f3, f26, f26
	fadds    f1, f4, f3
	fcmpo    cr0, f1, f0
	ble      lbl_801826A0
	fmadds   f31, f28, f28, f3
	fcmpo    cr0, f31, f0
	ble      lbl_801826A4
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801826A4

lbl_801826A0:
	fmr      f31, f0

lbl_801826A4:
	fmuls    f5, f27, f27
	lfs      f1, lbl_80518BE0@sda21(r2)
	fabs     f2, f27
	fadds    f0, f4, f5
	frsp     f29, f2
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801826E0
	fmadds   f0, f28, f28, f5
	fadds    f30, f3, f0
	fcmpo    cr0, f30, f1
	ble      lbl_801826E4
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_801826E4

lbl_801826E0:
	fmr      f30, f1

lbl_801826E4:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_80182708
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f30
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0
	b        lbl_8018270C

lbl_80182708:
	fmr      f30, f0

lbl_8018270C:
	lfs      f25, 0x10(r30)
	lfs      f2, 0x1fc(r31)
	fmr      f1, f25
	bl       angDist__Fff
	fabs     f2, f1
	lfs      f0, lbl_80518C84@sda21(r2)
	frsp     f2, f2
	fcmpo    cr0, f2, f0
	bge      lbl_801828AC
	lfs      f0, lbl_80518C3C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_801828AC
	lfs      f0, lbl_80518C4C@sda21(r2)
	fcmpo    cr0, f29, f0
	bge      lbl_801828AC
	stfs     f25, 0x1fc(r31)
	li       r0, 1
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	or.      r29, r3, r3
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	bne      lbl_801827CC
	lbz      r0, 0x48(r30)
	cmplwi   r0, 0
	beq      lbl_801827A8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

lbl_801827A8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

lbl_801827CC:
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r4, 0x44(r30)
	mr       r3, r29
	lhz      r4, 0x1f4(r4)
	bl       changeShape__Q24Game4PikiFi
	lwz      r4, 0x44(r30)
	mr       r3, r29
	lhz      r4, 0x1f6(r4)
	bl       changeHappa__Q24Game4PikiFi
	lwz      r4, 0x44(r30)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	mr       r3, r29
	lfs      f1, 0x24(r1)
	addi     r4, r1, 0x5c
	lfs      f0, 0x28(r1)
	li       r5, 0
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, 0x44(r30)
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x44(r30)
	addi     r6, r1, 0xc
	li       r5, 0xc
	lbz      r3, 0x26a(r31)
	neg      r0, r3
	stw      r31, 0x10(r1)
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0xc(r1)
	lwz      r3, 0x28c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x48(r30)
	mr       r3, r30
	mr       r4, r31
	addi     r6, r1, 8
	stb      r0, 8(r1)
	li       r5, 8
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182918

lbl_801828AC:
	lfs      f0, lbl_80518C28@sda21(r2)
	lfs      f2, 0x1fc(r31)
	fmuls    f0, f0, f1
	fadds    f1, f2, f0
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f4, lbl_80518C14@sda21(r2)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x54(r3)
	fmuls    f0, f4, f1
	fcmpo    cr0, f0, f30
	ble      lbl_801828E4
	lfs      f0, lbl_80518C04@sda21(r2)
	fdivs    f4, f0, f1

lbl_801828E4:
	fmuls    f3, f28, f4
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f2, f27, f4
	fmuls    f1, f26, f4
	stfs     f3, 0x200(r31)
	stfs     f2, 0x204(r31)
	stfs     f1, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	stfs     f3, 0x1e4(r31)
	stfs     f2, 0x1e8(r31)
	stfs     f1, 0x1ec(r31)

lbl_80182918:
	lbz      r0, 0x5c(r30)
	cmplwi   r0, 0xa
	ble      lbl_80182978
	lbz      r0, 0x48(r30)
	cmplwi   r0, 0
	beq      lbl_80182954
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

lbl_80182954:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80182B48

lbl_80182978:
	lbz      r3, 0x4c(r30)
	cmplwi   r3, 0
	beq      lbl_80182B48
	lfs      f29, 0x200(r31)
	addi     r0, r3, -1
	lfs      f30, 0x204(r31)
	mr       r4, r31
	lfs      f31, 0x208(r31)
	addi     r3, r1, 0x14
	stb      r0, 0x4c(r30)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x54(r30)
	lfs      f0, 0x18(r1)
	lfs      f2, 0x50(r30)
	fsubs    f4, f1, f0
	lfs      f1, 0x14(r1)
	lfs      f3, 0x58(r30)
	lfs      f0, 0x1c(r1)
	fsubs    f5, f2, f1
	fmuls    f1, f4, f4
	fsubs    f3, f3, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmadds   f1, f5, f5, f1
	fmuls    f2, f3, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80182A00
	ble      lbl_80182A04
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80182A04

lbl_80182A00:
	fmr      f1, f0

lbl_80182A04:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80182A24
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f5, f5, f0
	fmuls    f3, f3, f0
	b        lbl_80182A28

lbl_80182A24:
	fmr      f1, f0

lbl_80182A28:
	lfs      f2, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f2
	ble      lbl_80182B48
	fmuls    f0, f30, f30
	fmuls    f1, f5, f31
	fmuls    f4, f31, f31
	fmadds   f0, f29, f29, f0
	fmsubs   f1, f3, f29, f1
	fneg     f3, f3
	fadds    f7, f4, f0
	fcmpo    cr0, f7, f2
	ble      lbl_80182A68
	ble      lbl_80182A6C
	frsqrte  f0, f7
	fmuls    f7, f0, f7
	b        lbl_80182A6C

lbl_80182A68:
	fmr      f7, f2

lbl_80182A6C:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f3, f3, f7
	fmuls    f8, f5, f7
	fcmpo    cr0, f1, f0
	fmuls    f1, f0, f7
	blt      lbl_80182A94
	lfs      f0, lbl_80518C88@sda21(r2)
	fmuls    f3, f3, f0
	fmuls    f1, f1, f0
	fmuls    f8, f8, f0

lbl_80182A94:
	lfs      f6, lbl_80518C8C@sda21(r2)
	lfs      f4, lbl_80518C90@sda21(r2)
	fmuls    f2, f30, f6
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f1, f1, f4
	fmuls    f5, f29, f6
	fmuls    f3, f3, f4
	fadds    f9, f2, f1
	fmuls    f2, f31, f6
	fmuls    f1, f8, f4
	fadds    f4, f5, f3
	fmuls    f3, f9, f9
	fadds    f5, f2, f1
	fmadds   f1, f4, f4, f3
	fmuls    f2, f5, f5
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80182AEC
	ble      lbl_80182AF0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80182AF0

lbl_80182AEC:
	fmr      f1, f0

lbl_80182AF0:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80182B14
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f4, f4, f0
	fmuls    f9, f9, f0
	fmuls    f5, f5, f0
	b        lbl_80182B18

lbl_80182B14:
	fmr      f1, f0

lbl_80182B18:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpu    cr0, f0, f1
	beq      lbl_80182B48
	fmuls    f0, f4, f7
	fmuls    f1, f9, f7
	fmuls    f2, f5, f7
	stfs     f0, 0x200(r31)
	stfs     f1, 0x204(r31)
	stfs     f2, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f1, 0x1e8(r31)
	stfs     f2, 0x1ec(r31)

lbl_80182B48:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	psq_l    f27, 168(r1), 0, qr0
	lfd      f27, 0xa0(r1)
	psq_l    f26, 152(r1), 0, qr0
	lfd      f26, 0x90(r1)
	psq_l    f25, 136(r1), 0, qr0
	lfd      f25, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r0, 0xf4(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80182B9C
 * Size:	000050
 */
void NaviNukuAdjustState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 1
	stb      r0, 0x5c(r3)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518C48@sda21(r2)
	stfs     f0, 0x118(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80182BEC
 * Size:	0005EC
 */
void NaviDopeState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	or.      r28, r5, r5
	mr       r29, r3
	mr       r30, r4
	bne      lbl_80182C64
	lis      r3, lbl_8047EB4C@ha
	lis      r5, lbl_8047EB5C@ha
	addi     r3, r3, lbl_8047EB4C@l
	li       r4, 0xbbe
	addi     r5, r5, lbl_8047EB5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80182C64:
	lwz      r0, 0(r28)
	mr       r4, r30
	addi     r3, r1, 0x14
	stw      r0, 0x10(r29)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x14(r1)
	li       r4, 0
	lfs      f30, 0x18(r1)
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	lfs      f29, 0x1c(r1)
	cmplwi   r4, 0
	lfs      f26, lbl_80518BE0@sda21(r2)
	addi     r0, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	stb      r4, 0x14(r29)
	li       r31, 0
	fmr      f27, f26
	lwz      r3, 0x254(r30)
	fmr      f28, f26
	stw      r0, 0x38(r1)
	stw      r4, 0x44(r1)
	stw      r4, 0x3c(r1)
	stw      r3, 0x40(r1)
	bne      lbl_80182CE4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80182E90

lbl_80182CE4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80182D50

lbl_80182CFC:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80182E90
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80182D50:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80182CFC
	b        lbl_80182E90

lbl_80182D70:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80182DD4
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r31, r31, 1
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fadds    f26, f26, f2
	fadds    f27, f27, f1
	fadds    f28, f28, f0

lbl_80182DD4:
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_80182E00
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80182E90

lbl_80182E00:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80182E74

lbl_80182E20:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80182E90
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80182E74:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80182E20

lbl_80182E90:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_80182D70
	lwz      r4, 0x10(r29)
	cmpwi    r4, 1
	beq      lbl_80182EC4
	cmpwi    r31, 0
	ble      lbl_80183188

lbl_80182EC4:
	mr       r3, r30
	bl       hasDope__Q24Game4NaviFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80183188
	lwz      r0, 0x10(r29)
	cmpwi    r0, 1
	bne      lbl_80182F14
	cmplwi   r30, 0
	mr       r6, r30
	beq      lbl_80182EF0
	addi     r6, r30, 0x178

lbl_80182EF0:
	lwz      r12, 0(r30)
	mr       r3, r30
	li       r4, 0x13
	li       r5, 0x13
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	b        lbl_80182F44

lbl_80182F14:
	cmplwi   r30, 0
	mr       r6, r30
	beq      lbl_80182F24
	addi     r6, r30, 0x178

lbl_80182F24:
	lwz      r12, 0(r30)
	mr       r3, r30
	li       r4, 0x13
	li       r5, 0x13
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl

lbl_80182F44:
	mr       r3, r30
	bl       enableMotionBlend__Q24Game8FakePikiFv
	stfs     f31, 0x2c(r1)
	stfs     f30, 0x30(r1)
	stfs     f29, 0x34(r1)
	lwz      r0, 0x10(r29)
	cmpwi    r0, 1
	bne      lbl_80182FFC
	lwz      r3, 0x28c(r30)
	lfs      f0, lbl_80518BE0@sda21(r2)
	lfs      f1, 0x10(r3)
	lfs      f2, 0xc(r3)
	fsubs    f27, f1, f30
	lfs      f1, 0x14(r3)
	fsubs    f28, f2, f31
	fsubs    f26, f1, f29
	fmuls    f1, f27, f27
	fmuls    f2, f26, f26
	fmadds   f1, f28, f28, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80182FAC
	ble      lbl_80182FB0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80182FB0

lbl_80182FAC:
	fmr      f1, f0

lbl_80182FB0:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80182FD0
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0

lbl_80182FD0:
	lfs      f0, lbl_80518C94@sda21(r2)
	fmuls    f2, f28, f0
	fmuls    f1, f27, f0
	fmuls    f0, f26, f0
	fadds    f2, f31, f2
	fadds    f1, f30, f1
	fadds    f0, f29, f0
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	b        lbl_801830A0

lbl_80182FFC:
	cmpwi    r31, 0
	ble      lbl_80183094
	xoris    r3, r31, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x6c(r1)
	lfd      f2, lbl_80518C30@sda21(r2)
	stw      r0, 0x68(r1)
	lfs      f3, lbl_80518C48@sda21(r2)
	lfd      f1, 0x68(r1)
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f1, f1, f2
	fdivs    f2, f3, f1
	fmuls    f3, f27, f2
	fmuls    f1, f28, f2
	fmuls    f2, f26, f2
	fsubs    f27, f3, f30
	fsubs    f26, f1, f29
	fsubs    f28, f2, f31
	fmuls    f1, f27, f27
	fmuls    f2, f26, f26
	fmadds   f1, f28, f28, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8018306C
	ble      lbl_80183070
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80183070

lbl_8018306C:
	fmr      f1, f0

lbl_80183070:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801830A0
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0
	b        lbl_801830A0

lbl_80183094:
	lfs      f28, lbl_80518BE0@sda21(r2)
	lfs      f27, lbl_80518C48@sda21(r2)
	fmr      f26, f28

lbl_801830A0:
	lwz      r0, 0x10(r29)
	li       r28, 1
	cmpwi    r0, 1
	beq      lbl_801830D4
	lwz      r3, 0x26c(r30)
	li       r28, 0
	li       r4, 0x861
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_801830F0

lbl_801830D4:
	lwz      r3, 0x26c(r30)
	li       r4, 0x860
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_801830F0:
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx3Arg@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x20(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx14ArgDopingSmoke@ha
	lis      r3, __vt__Q23efx12TDopingSmoke@ha
	stw      r5, 0x48(r1)
	addi     r7, r4, __vt__Q23efx14ArgDopingSmoke@l
	li       r6, 0x44
	li       r5, 0
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q23efx12TDopingSmoke@l
	addi     r3, r1, 0x20
	stfs     f31, 0x4c(r1)
	addi     r4, r1, 0x48
	stfs     f30, 0x50(r1)
	stfs     f29, 0x54(r1)
	stw      r7, 0x48(r1)
	stfs     f28, 0x58(r1)
	stfs     f27, 0x5c(r1)
	stfs     f26, 0x60(r1)
	sth      r28, 0x64(r1)
	sth      r6, 0x24(r1)
	stw      r5, 0x28(r1)
	stw      r0, 0x20(r1)
	bl       create__Q23efx12TDopingSmokeFPQ23efx3Arg
	li       r0, 1
	mr       r3, r30
	stb      r0, 0x14(r29)
	addi     r5, r1, 0x2c
	lwz      r4, 0x10(r29)
	bl       "applyDopes__Q24Game4NaviFiR10Vector3<f>"
	lwz      r4, 0x10(r29)
	mr       r3, r30
	bl       useDope__Q24Game4NaviFi

lbl_80183188:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r0, 0xe4(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801831D8
 * Size:	0000A0
 */
void NaviDopeState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       control__Q24Game4NaviFv
	lbz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_8018322C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80183260

lbl_8018322C:
	mr       r3, r31
	li       r4, 0x13
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80183260
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80183260:
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
 * Address:	80183278
 * Size:	000004
 */
void NaviDopeState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	8018327C
 * Size:	00004C
 */
void NaviDopeState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x14(r3)
	cmplwi   r0, 0
	beq      lbl_801832B8
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_801832B8
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801832B8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801832C8
 * Size:	0000E0
 */
void NaviClimbState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, lbl_8047EAC8@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r6, lbl_8047EAC8@l
	stw      r30, 0x18(r1)
	mr       r30, r5
	addi     r5, r31, 0xa0
	stw      r29, 0x14(r1)
	mr       r29, r4
	li       r4, 0xc25
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r3, r31, 0x84
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	cmplwi   r30, 0
	bne      lbl_80183328
	addi     r3, r31, 0x84
	addi     r5, r31, 0x94
	li       r4, 0xc28
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80183328:
	cmplwi   r29, 0
	mr       r6, r29
	beq      lbl_80183338
	addi     r6, r29, 0x178

lbl_80183338:
	lwz      r12, 0(r29)
	mr       r3, r29
	li       r4, 0x14
	li       r5, 0x14
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       enableMotionBlend__Q24Game8FakePikiFv
	lwz      r0, 0(r30)
	mr       r3, r28
	mr       r4, r29
	stw      r0, 0x20(r28)
	lwz      r5, 0x20(r28)
	lwz      r5, 0x114(r5)
	lwz      r5, 0(r5)
	lwz      r0, 0x10(r5)
	stw      r0, 0x24(r28)
	bl       prepare__Q24Game14NaviClimbStateFPQ24Game4Navi
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801833A8
 * Size:	0000BC
 */
void NaviClimbState::prepare(Game::Navi*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	lwz      r4, 0x20(r30)
	mr       r3, r31
	lwz      r5, 0x24(r30)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r3, 0x24(r30)
	addi     r4, r1, 8
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 8
	addi     r4, r30, 0x10
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f1, 0xc(r1)
	lfs      f0, 0x18(r1)
	lfs      f3, 8(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x14(r1)
	lfs      f1, 0x10(r1)
	lfs      f0, 0x1c(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80183444
	ble      lbl_80183448
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80183448

lbl_80183444:
	fmr      f1, f0

lbl_80183448:
	stfs     f1, 0x1c(r30)
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80183464
 * Size:	0002BC
 */
void NaviClimbState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	mr       r31, r4
	lfs      f2, lbl_80518C14@sda21(r2)
	mr       r3, r31
	lfs      f0, 0x10(r30)
	lwz      r4, 0x278(r4)
	lfs      f1, 0x14(r30)
	fmuls    f0, f0, f2
	lfs      f4, 0x4c(r4)
	fmuls    f1, f1, f2
	lfs      f3, 0x18(r30)
	fmuls    f0, f0, f4
	fmuls    f2, f3, f2
	fmuls    f1, f1, f4
	stfs     f0, 0x200(r31)
	fmuls    f0, f2, f4
	stfs     f1, 0x204(r31)
	stfs     f0, 0x208(r31)
	lwz      r12, 0(r31)
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0x1d0(r12)
	lfs      f1, 0x54(r4)
	mtctr    r12
	bctrl
	lwz      r3, 0x278(r31)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80183510
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80183510:
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x108(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_80518C98@sda21(r2)
	lfs      f1, 0x1c(r30)
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f1, f2, f1
	fadds    f0, f0, f1
	fcmpo    cr0, f31, f0
	ble      lbl_80183620
	lwz      r3, 0x24(r30)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_801835FC
	lbz      r0, 0x58(r3)
	cmplwi   r0, 1
	beq      lbl_8018356C
	cmplwi   r0, 2
	bne      lbl_801835FC

lbl_8018356C:
	stw      r3, 0x24(r30)
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	lwz      r4, 0x20(r30)
	mr       r3, r31
	lwz      r5, 0x24(r30)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r3, 0x24(r30)
	addi     r4, r1, 0x38
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 0x38
	addi     r4, r30, 0x10
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x48(r1)
	lfs      f3, 0x38(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x44(r1)
	lfs      f1, 0x40(r1)
	lfs      f0, 0x4c(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801835F0
	ble      lbl_801835F4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801835F4

lbl_801835F0:
	fmr      f1, f0

lbl_801835F4:
	stfs     f1, 0x1c(r30)
	b        lbl_80183700

lbl_801835FC:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80183700

lbl_80183620:
	fneg     f0, f1
	fcmpo    cr0, f31, f0
	bge      lbl_80183700
	lwz      r3, 0x24(r30)
	lwz      r3, 0xc(r3)
	cmplwi   r3, 0
	beq      lbl_801836E0
	lbz      r0, 0x58(r3)
	cmplwi   r0, 1
	beq      lbl_80183650
	cmplwi   r0, 2
	bne      lbl_801836E0

lbl_80183650:
	stw      r3, 0x24(r30)
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	lwz      r4, 0x20(r30)
	mr       r3, r31
	lwz      r5, 0x24(r30)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r3, 0x24(r30)
	addi     r4, r1, 0x18
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 0x18
	addi     r4, r30, 0x10
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x28(r1)
	lfs      f3, 0x18(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x24(r1)
	lfs      f1, 0x20(r1)
	lfs      f0, 0x2c(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801836D4
	ble      lbl_801836D8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801836D8

lbl_801836D4:
	fmr      f1, f0

lbl_801836D8:
	stfs     f1, 0x1c(r30)
	b        lbl_80183700

lbl_801836E0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80183700:
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80183720
 * Size:	000024
 */
void NaviClimbState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       endStick__Q24Game8CreatureFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80183744
 * Size:	0000B8
 */
void NaviFallMeckState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_80183774
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x10(r30)
	b        lbl_8018377C

lbl_80183774:
	lfs      f0, 0(r5)
	stfs     f0, 0x10(r30)

lbl_8018377C:
	mr       r3, r31
	li       r4, 9
	lwz      r12, 0(r31)
	li       r5, 9
	li       r6, 0
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	li       r0, 0
	lfs      f0, lbl_80518BE0@sda21(r2)
	stw      r0, 0x14(r30)
	lfs      f1, 0x10(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_801837D4
	lfs      f0, lbl_80518C9C@sda21(r2)
	stfs     f0, 0x204(r31)
	lfs      f0, 0x204(r31)
	stfs     f0, 0x1e8(r31)
	b        lbl_801837E4

lbl_801837D4:
	lfs      f0, lbl_80518CA0@sda21(r2)
	stfs     f0, 0x204(r31)
	lfs      f0, 0x204(r31)
	stfs     f0, 0x1e8(r31)

lbl_801837E4:
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
 * Address:	801837FC
 * Size:	00009C
 */
void NaviFallMeckState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x14(r3)
	cmpwi    r0, 0
	beq      lbl_80183840
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)

lbl_80183840:
	lwz      r0, 0x14(r30)
	cmpwi    r0, 0
	bne      lbl_80183880
	mr       r3, r31
	li       r4, 9
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80183880
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80183880:
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
 * Address:	80183898
 * Size:	000004
 */
void NaviFallMeckState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	8018389C
 * Size:	00009C
 */
void NaviFallMeckState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	stw      r31, 0xc(r1)
	mr       r31, r3
	cmplwi   r0, 0x3e8
	bne      lbl_80183924
	lwz      r0, 0x14(r31)
	cmpwi    r0, 1
	bne      lbl_80183904
	cmplwi   r4, 0
	mr       r6, r4
	beq      lbl_801838D8
	addi     r6, r6, 0x178

lbl_801838D8:
	lwz      r12, 0(r4)
	mr       r3, r4
	li       r4, 0xe
	li       r5, 0xe
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x14(r31)
	b        lbl_80183924

lbl_80183904:
	cmpwi    r0, 2
	bne      lbl_80183924
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80183924:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80183938
 * Size:	000268
 */
void NaviFallMeckState::bounceCallback(Game::Navi*, Sys::Triangle*)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	mr       r31, r4
	stw      r30, 0x98(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80183A68
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x7c(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lis      r3, __vt__Q23efx13TEnemyDownWat@ha
	li       r4, 0x54
	stw      r0, 0x7c(r1)
	addi     r0, r3, __vt__Q23efx13TEnemyDownWat@l
	li       r7, 0x55
	li       r6, 0x56
	sth      r4, 0x80(r1)
	mr       r4, r31
	addi     r3, r1, 0x20
	sth      r7, 0x82(r1)
	sth      r6, 0x84(r1)
	stw      r5, 0x88(r1)
	stw      r5, 0x8c(r1)
	stw      r5, 0x90(r1)
	stw      r0, 0x7c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x190(r31)
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r3)
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 0x14(r12)
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	lis      r3, __vt__Q23efx3Arg@ha
	lwz      r4, 0x5c(r1)
	addi     r5, r3, __vt__Q23efx3Arg@l
	stfs     f0, 0x60(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	lwz      r6, 0x64(r1)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	lwz      r7, 0x60(r1)
	addi     r3, r1, 0x7c
	stw      r4, 0x14(r1)
	addi     r4, r1, 0x68
	lfs      f0, lbl_80518C04@sda21(r2)
	stw      r7, 0x18(r1)
	lfs      f3, 0x14(r1)
	stw      r6, 0x1c(r1)
	lfs      f2, 0x18(r1)
	stw      r5, 0x68(r1)
	lfs      f1, 0x1c(r1)
	stfs     f3, 0x6c(r1)
	stfs     f2, 0x70(r1)
	stfs     f1, 0x74(r1)
	stw      r0, 0x68(r1)
	stfs     f0, 0x78(r1)
	bl       create__Q23efx13TEnemyDownWatFPQ23efx3Arg
	b        lbl_80183AF4

lbl_80183A68:
	lis      r3, __vt__Q23efx5TBase@ha
	lfs      f1, lbl_80518C48@sda21(r2)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x4c(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r3, __vt__Q23efx15TEnemyDownSmoke@ha
	li       r6, 0x53
	stw      r0, 0x4c(r1)
	addi     r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
	li       r5, 0
	lfs      f0, lbl_80518C04@sda21(r2)
	stfs     f1, 0x58(r1)
	mr       r4, r31
	addi     r3, r1, 8
	sth      r6, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r0, 0x4c(r1)
	stfs     f0, 0x58(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lfs      f1, 0xc(r1)
	addi     r0, r3, __vt__Q23efx3Arg@l
	lfs      f0, 0x10(r1)
	addi     r3, r1, 0x4c
	stw      r0, 0x3c(r1)
	addi     r4, r1, 0x3c
	stfs     f2, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	bl       create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg

lbl_80183AF4:
	lwz      r0, 0x14(r30)
	cmpwi    r0, 0
	bne      lbl_80183B88
	lfs      f2, 0x10(r30)
	lfs      f1, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_80183B58
	lfs      f0, lbl_80518C48@sda21(r2)
	li       r0, 0
	stw      r0, 0x2c(r1)
	mr       r3, r31
	li       r4, 1
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	stb      r0, 0x38(r1)
	bl       addDamage__Q24Game4NaviFfb
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	addi     r6, r1, 0x2c
	li       r5, 0x10
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80183B88

lbl_80183B58:
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	lhz      r5, 0x2dc(r31)
	bl       startRumble__Q24Game9RumbleMgrFii
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80183B88:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80183BA0
 * Size:	00012C
 */
void NaviFlickState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_80183BE4
	lis      r3, lbl_8047EB4C@ha
	lis      r5, lbl_8047EB74@ha
	addi     r3, r3, lbl_8047EB4C@l
	li       r4, 0xcd4
	addi     r5, r5, lbl_8047EB74@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80183C0C

lbl_80183BE4:
	lfs      f0, 0x10(r5)
	stfs     f0, 0x24(r30)
	lfs      f0, 4(r5)
	stfs     f0, 0x18(r30)
	lfs      f0, 8(r5)
	stfs     f0, 0x1c(r30)
	lfs      f0, 0xc(r5)
	stfs     f0, 0x20(r30)
	lwz      r0, 0(r5)
	stw      r0, 0x14(r30)

lbl_80183C0C:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80183C1C
	addi     r6, r31, 0x178

lbl_80183C1C:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x16
	li       r5, 0x16
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 0
	lis      r3, atanTable___5JMath@ha
	stw      r0, 0x10(r30)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x204(r31)
	lfs      f1, 0x18(r30)
	lfs      f2, 0x20(r30)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f0, lbl_80518CA4@sda21(r2)
	fadds    f1, f0, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	li       r4, 0x80f
	li       r5, 0
	lwz      r3, 0x26c(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2d0(r31)
	lwz      r4, 0x14(r3)
	bl       createOrimadamage___Q23efx11TNaviEffectFPA4_f
	bl       PSMGetDamageD__Fv
	cmplwi   r3, 0
	beq      lbl_80183CB4
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80183CB4:
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
 * Address:	80183CCC
 * Size:	000118
 */
void NaviFlickState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r0, 0x10(r3)
	cmpwi    r0, 1
	beq      lbl_80183D6C
	bge      lbl_80183DCC
	cmpwi    r0, 0
	bge      lbl_80183D04
	b        lbl_80183DCC

lbl_80183D04:
	lfs      f0, 0x18(r30)
	mr       r3, r31
	li       r4, 0x16
	stfs     f0, 0x200(r31)
	lfs      f0, 0x20(r30)
	stfs     f0, 0x208(r31)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80183DCC
	lfs      f1, 0x24(r30)
	li       r0, 0
	lwz      r5, 0x14(r30)
	mr       r3, r30
	lfs      f0, lbl_80518C48@sda21(r2)
	mr       r4, r31
	stw      r5, 0x18(r1)
	addi     r6, r1, 0x18
	li       r5, 0x10
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stb      r0, 0x24(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80183DCC

lbl_80183D6C:
	lfs      f0, 0x200(r31)
	lfs      f1, lbl_80518CA8@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x200(r31)
	lfs      f0, 0x208(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x208(r31)
	lwz      r0, 0x248(r31)
	cmplwi   r0, 0
	beq      lbl_80183DCC
	lfs      f1, 0x24(r30)
	li       r0, 0
	lwz      r7, 0x14(r30)
	addi     r6, r1, 8
	lfs      f0, lbl_80518C48@sda21(r2)
	li       r5, 0x10
	stw      r7, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	stb      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80183DCC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80183DE4
 * Size:	000004
 */
void NaviFlickState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	80183DE8
 * Size:	000064
 */
void NaviFlickState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	mr       r5, r4
	cmplwi   r0, 0x3e8
	bne      lbl_80183E3C
	lwz      r0, 0x10(r3)
	cmpwi    r0, 0
	bne      lbl_80183E3C
	li       r0, 1
	li       r4, 0x17
	stw      r0, 0x10(r3)
	mr       r3, r5
	li       r5, 0x17
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_80183E3C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80183E4C
 * Size:	000070
 */
void NaviFlickState::bounceCallback(Game::Navi*, Sys::Triangle*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_80518C48@sda21(r2)
	li       r5, 0x10
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r6, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r4
	lfs      f1, 0x24(r3)
	stw      r0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	stb      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80183EBC
 * Size:	0000C0
 */
void NaviKokeDamageState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_80183EFC
	lfs      f0, lbl_80518BE0@sda21(r2)
	li       r0, 0
	stfs     f0, 0x10(r30)
	stfs     f0, 0x14(r30)
	stw      r0, 0x1c(r30)
	stb      r0, 0x20(r30)
	b        lbl_80183F1C

lbl_80183EFC:
	lfs      f0, 4(r5)
	stfs     f0, 0x10(r30)
	lfs      f0, 8(r5)
	stfs     f0, 0x14(r30)
	lwz      r0, 0(r5)
	stw      r0, 0x1c(r30)
	lbz      r0, 0xc(r5)
	stb      r0, 0x20(r30)

lbl_80183F1C:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80183F2C
	addi     r6, r31, 0x178

lbl_80183F2C:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x17
	li       r5, 0x17
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 1
	lhz      r5, 0x2dc(r31)
	bl       startRumble__Q24Game9RumbleMgrFii
	li       r0, 0
	stw      r0, 0x18(r30)
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
 * Address:	80183F7C
 * Size:	000208
 */
void NaviKokeDamageState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, moviePlayer__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_80183FCC
	lwz      r0, 0x18(r5)
	cmpwi    r0, 0
	beq      lbl_80183FCC
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018416C

lbl_80183FCC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80184008
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	bne      lbl_80184008
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018416C

lbl_80184008:
	lfs      f2, lbl_80518BE0@sda21(r2)
	stfs     f2, 0x1e4(r31)
	stfs     f2, 0x1e8(r31)
	stfs     f2, 0x1ec(r31)
	stfs     f2, 0x200(r31)
	stfs     f2, 0x204(r31)
	stfs     f2, 0x208(r31)
	lwz      r0, 0x18(r30)
	cmpwi    r0, 1
	bne      lbl_8018408C
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x14(r30)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x14(r30)
	lfs      f0, 0x14(r30)
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_8018408C
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80184064
	addi     r6, r31, 0x178

lbl_80184064:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0xe
	li       r5, 0xe
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x18(r30)

lbl_8018408C:
	lwz      r0, 0x18(r30)
	cmpwi    r0, 0
	bne      lbl_801840FC
	mr       r3, r31
	li       r4, 0x17
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801840FC
	lwz      r3, 8(r30)
	lwz      r5, 0x1c(r3)
	cmpwi    r5, -1
	bne      lbl_801840E0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801840FC

lbl_801840E0:
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801840FC:
	lwz      r0, 0x18(r30)
	cmpwi    r0, 2
	bne      lbl_8018416C
	mr       r3, r31
	li       r4, 0xe
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018416C
	lwz      r3, 8(r30)
	lwz      r5, 0x1c(r3)
	cmpwi    r5, -1
	bne      lbl_80184150
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018416C

lbl_80184150:
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8018416C:
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
 * Address:	80184184
 * Size:	000004
 */
void NaviKokeDamageState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	80184188
 * Size:	00009C
 */
void NaviKokeDamageState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	mr       r5, r3
	cmplwi   r0, 0x3e8
	bne      lbl_80184214
	lwz      r0, 0x18(r5)
	cmpwi    r0, 0
	bne      lbl_801841CC
	li       r0, 1
	mr       r3, r4
	stw      r0, 0x18(r5)
	lfs      f1, 0x10(r5)
	lbz      r4, 0x20(r5)
	bl       addDamage__Q24Game4NaviFfb
	b        lbl_80184214

lbl_801841CC:
	cmpwi    r0, 2
	bne      lbl_80184214
	lwz      r5, 8(r5)
	lwz      r5, 0x1c(r5)
	cmpwi    r5, -1
	bne      lbl_80184200
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80184214

lbl_80184200:
	lwz      r12, 0(r3)
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80184214:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80184224
 * Size:	00006C
 */
void NaviSaraiState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 9
	li       r6, 0
	stw      r0, 0x14(r1)
	li       r7, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 9
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x10(r30)
	sth      r0, 0x14(r30)
	bl       releasePikis__Q24Game4NaviFv
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
 * Address:	80184290
 * Size:	000380
 */
void NaviSaraiState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	lwz      r0, 0x10(r3)
	mr       r30, r3
	mr       r31, r4
	rlwinm.  r0, r0, 0, 4, 4
	beq      lbl_801842E4
	lhz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_801842E4
	addi     r0, r3, -1
	sth      r0, 0x14(r30)

lbl_801842E4:
	lwz      r0, 0x10(r30)
	mr       r3, r31
	slwi     r0, r0, 1
	stw      r0, 0x10(r30)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018432C
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018435C

lbl_8018432C:
	lwz      r3, 0x278(r31)
	cmplwi   r3, 0
	beq      lbl_8018435C
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 4, 7
	beq      lbl_8018435C
	lwz      r0, 0x10(r30)
	ori      r0, r0, 1
	stw      r0, 0x10(r30)
	lhz      r3, 0x14(r30)
	addi     r0, r3, 1
	sth      r0, 0x14(r30)

lbl_8018435C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused_soft__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018451C
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_80184388
	cmpwi    r0, 3
	bne      lbl_8018438C

lbl_80184388:
	li       r3, 1

lbl_8018438C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018451C
	lwz      r3, 0x278(r31)
	cmplwi   r3, 0
	beq      lbl_8018451C
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_8018451C
	lwz      r3, naviMgr__4Game@sda21(r13)
	lhz      r0, 0x2dc(r31)
	lwz      r12, 0(r3)
	subfic   r4, r0, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	bl       getStateID__Q24Game4NaviFv
	mr       r29, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018451C
	cmpwi    r29, 8
	beq      lbl_8018451C
	cmpwi    r29, 9
	beq      lbl_8018451C
	cmpwi    r29, 2
	beq      lbl_8018451C
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	bl       pmTogglePlayer__Q24Game15BaseGameSectionFv
	lhz      r0, 0x2dc(r28)
	cmplwi   r0, 0
	bne      lbl_80184434
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x188d
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80184468

lbl_80184434:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80184458
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x188f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80184468

lbl_80184458:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x188e
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80184468:
	lhz      r0, 0x2dc(r28)
	cmplwi   r0, 0
	bne      lbl_80184494
	lwz      r3, 0x26c(r28)
	li       r4, 0x8a6
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_801844E0

lbl_80184494:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_801844C4
	lwz      r3, 0x26c(r28)
	li       r4, 0x8a8
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_801844E0

lbl_801844C4:
	lwz      r3, 0x26c(r28)
	li       r4, 0x8a7
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_801844E0:
	lwz      r3, 0x274(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018451C
	lwz      r3, 0x270(r28)
	mr       r4, r28
	li       r5, 3
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8018451C:
	lhz      r3, 0x14(r30)
	lfs      f31, lbl_80518C64@sda21(r2)
	cmplwi   r3, 6
	blt      lbl_801845DC
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80518CB0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80518CAC@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80518C68@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f30, f2, f1
	fmadds   f31, f0, f30, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	fmuls    f0, f30, f30
	lfd      f3, lbl_80518C30@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_80518C08@sda21(r2)
	lfd      f2, 0x10(r1)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801845DC
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_80518C30@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_80518C08@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, lbl_80518C1C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801845DC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0x12
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801845DC:
	stfs     f31, 0x234(r31)
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r0, 0x54(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80184610
 * Size:	00000C
 */
void NaviSaraiState::cleanup(Game::Navi*)
{
	/*
	lfs      f0, lbl_80518C64@sda21(r2)
	stfs     f0, 0x234(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018461C
 * Size:	00006C
 */
void NaviSaraiExitState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	mr       r3, r31
	li       r4, 9
	lwz      r12, 0(r31)
	li       r5, 9
	li       r6, 0
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
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
 * Address:	80184688
 * Size:	00004C
 */
void NaviSaraiExitState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x248(r4)
	cmplwi   r0, 0
	bne      lbl_801846AC
	lwz      r0, 0xc8(r4)
	cmplwi   r0, 0
	beq      lbl_801846C4

lbl_801846AC:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801846C4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801846D4
 * Size:	000034
 */
void NaviSaraiExitState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	li       r4, 1
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
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
 * Address:	80184708
 * Size:	000034
 */
void NaviSaraiExitState::bounceCallback(Game::Navi*, Sys::Triangle*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
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
 * Address:	8018473C
 * Size:	0005FC
 */
void NaviContainerState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stmw     r23, 0xdc(r1)
	or.      r23, r5, r5
	lis      r5, lbl_8047EAC8@ha
	mr       r28, r3
	mr       r29, r4
	addi     r31, r5, lbl_8047EAC8@l
	bne      lbl_80184778
	addi     r3, r31, 0x84
	addi     r5, r31, 0x94
	li       r4, 0xe12
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80184778:
	lwz      r0, 0(r23)
	stw      r0, 0x10(r28)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x278(r29)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lwz      r3, 0x10(r28)
	li       r0, 0
	lhz      r30, 0x22e(r3)
	stb      r0, 0x20(r28)
	lwz      r3, 0x10(r28)
	lhz      r3, 0x22e(r3)
	cmplwi   r3, 4
	bne      lbl_80184B58
	li       r7, -1
	li       r30, 0x64
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	stw      r7, 0x60(r1)
	addi     r23, r3, __vt__Q32og6Screen14DispMemberBase@l
	li       r6, 4
	stw      r6, 0x60(r1)
	lis      r24, __vt__Q32og6Screen18DispMemberUfoGroup@ha
	li       r12, 0x3e8
	li       r11, 0x14
	li       r10, 0x32
	li       r9, 0x3c
	li       r8, 0xc8
	lis      r5, __vt__Q32og6Screen17DispMemberUfoMenu@ha
	lis      r4, __vt__Q32og6Screen17DispMemberContena@ha
	lwz      r3, playData__4Game@sda21(r13)
	li       r26, 1
	stw      r23, 0x40(r1)
	addi     r24, r24, __vt__Q32og6Screen18DispMemberUfoGroup@l
	addi     r25, r5, __vt__Q32og6Screen17DispMemberUfoMenu@l
	stw      r23, 0x48(r1)
	addi     r27, r4, __vt__Q32og6Screen17DispMemberContena@l
	li       r5, 3
	addi     r3, r3, 0xa8
	stw      r23, 0x58(r1)
	li       r4, 4
	stw      r23, 0x90(r1)
	stw      r7, 0x98(r1)
	stw      r0, 0x44(r1)
	stw      r24, 0x40(r1)
	stw      r0, 0x4c(r1)
	stw      r25, 0x48(r1)
	stw      r26, 0x50(r1)
	stb      r0, 0x54(r1)
	stw      r0, 0x5c(r1)
	stw      r27, 0x58(r1)
	stw      r30, 0x64(r1)
	stw      r12, 0x68(r1)
	stw      r0, 0x6c(r1)
	stw      r11, 0x70(r1)
	stw      r10, 0x74(r1)
	stw      r9, 0x78(r1)
	stw      r8, 0x7c(r1)
	stw      r0, 0x80(r1)
	stb      r0, 0x84(r1)
	stw      r0, 0x88(r1)
	sth      r0, 0x8c(r1)
	stw      r0, 0x94(r1)
	stw      r27, 0x90(r1)
	stw      r30, 0x9c(r1)
	stw      r12, 0xa0(r1)
	stw      r0, 0xa4(r1)
	stw      r11, 0xa8(r1)
	stw      r10, 0xac(r1)
	stw      r9, 0xb0(r1)
	stw      r8, 0xb4(r1)
	stw      r0, 0xb8(r1)
	stb      r0, 0xbc(r1)
	stw      r0, 0xc0(r1)
	sth      r0, 0xc4(r1)
	stb      r0, 0xc8(r1)
	stb      r0, 0xc9(r1)
	stw      r5, 0x98(r1)
	stb      r0, 0xca(r1)
	stw      r6, 0x60(r1)
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r4, 0x10(r28)
	lwz      r0, 0x1e4(r4)
	subf.    r0, r0, r3
	bge      lbl_801848C8
	li       r0, 0

lbl_801848C8:
	lis      r3, 0x0001F400@ha
	stw      r0, 0x64(r1)
	addi     r3, r3, 0x0001F400@l
	li       r0, 0
	stw      r3, 0x68(r1)
	lhz      r23, 0x2dc(r29)
	cmpwi    r23, 0
	blt      lbl_801848F4
	cmpwi    r23, 7
	bge      lbl_801848F4
	li       r0, 1

lbl_801848F4:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80184910
	addi     r3, r31, 0xcc
	addi     r5, r31, 0x94
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80184910:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	slwi     r5, r23, 5
	addi     r0, r3, formationPikis__Q24Game8GameStat@l
	li       r4, 4
	add      r3, r0, r5
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r4, 0x64
	stw      r3, 0x6c(r1)
	li       r0, 0
	stw      r4, 0x70(r1)
	lhz      r23, 0x2dc(r29)
	cmpwi    r23, 0
	blt      lbl_8018495C
	cmpwi    r23, 7
	bge      lbl_8018495C
	li       r0, 1

lbl_8018495C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80184978
	addi     r3, r31, 0xcc
	addi     r5, r31, 0x94
	li       r4, 0x73
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80184978:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	slwi     r4, r23, 5
	addi     r0, r3, formationPikis__Q24Game8GameStat@l
	add      r3, r0, r4
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x74(r1)
	li       r3, -1
	bl       getMapPikmins__Q24Game8GameStatFi
	mr       r30, r3
	li       r3, -1
	bl       getZikatuPikmins__Q24Game8GameStatFi
	subf     r0, r3, r30
	li       r3, -1
	stw      r0, 0x78(r1)
	bl       getZikatuPikmins__Q24Game8GameStatFi
	subfic   r4, r3, 0x64
	lwz      r3, playData__4Game@sda21(r13)
	li       r0, 3
	stw      r4, 0x7c(r1)
	addi     r3, r3, 0xa8
	li       r4, 3
	stw      r0, 0x98(r1)
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r4, 0x10(r28)
	lwz      r0, 0x1e8(r4)
	subf.    r0, r0, r3
	bge      lbl_801849F4
	li       r0, 0

lbl_801849F4:
	lis      r3, 0x0001F400@ha
	stw      r0, 0x9c(r1)
	addi     r3, r3, 0x0001F400@l
	li       r0, 0
	stw      r3, 0xa0(r1)
	lhz      r23, 0x2dc(r29)
	cmpwi    r23, 0
	blt      lbl_80184A20
	cmpwi    r23, 7
	bge      lbl_80184A20
	li       r0, 1

lbl_80184A20:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80184A3C
	addi     r3, r31, 0xcc
	addi     r5, r31, 0x94
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80184A3C:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	slwi     r5, r23, 5
	addi     r0, r3, formationPikis__Q24Game8GameStat@l
	li       r4, 3
	add      r3, r0, r5
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r4, 0x64
	stw      r3, 0xa4(r1)
	li       r0, 0
	stw      r4, 0xa8(r1)
	lhz      r23, 0x2dc(r29)
	cmpwi    r23, 0
	blt      lbl_80184A88
	cmpwi    r23, 7
	bge      lbl_80184A88
	li       r0, 1

lbl_80184A88:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80184AA4
	addi     r3, r31, 0xcc
	addi     r5, r31, 0x94
	li       r4, 0x73
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80184AA4:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	slwi     r4, r23, 5
	addi     r0, r3, formationPikis__Q24Game8GameStat@l
	add      r3, r0, r4
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xac(r1)
	li       r3, -1
	bl       getMapPikmins__Q24Game8GameStatFi
	mr       r29, r3
	li       r3, -1
	bl       getZikatuPikmins__Q24Game8GameStatFi
	subf     r0, r3, r29
	li       r3, -1
	stw      r0, 0xb0(r1)
	bl       getZikatuPikmins__Q24Game8GameStatFi
	subfic   r0, r3, 0x64
	lwz      r3, playData__4Game@sda21(r13)
	stw      r0, 0xb4(r1)
	li       r4, 4
	bl       hasContainer__Q24Game8PlayDataFi
	stb      r3, 0xc8(r1)
	li       r4, 3
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasContainer__Q24Game8PlayDataFi
	stb      r3, 0xc9(r1)
	lwz      r4, playData__4Game@sda21(r13)
	lbz      r0, 0xc8(r1)
	lbz      r4, 0x2f(r4)
	cmplwi   r0, 0
	clrlwi   r0, r4, 0x1f
	stb      r0, 0xca(r1)
	bne      lbl_80184B44
	clrlwi.  r0, r3, 0x18
	bne      lbl_80184B44
	li       r0, 0
	stb      r0, 0x20(r28)
	b        lbl_80184CE4

lbl_80184B44:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x40
	bl       open_UfoMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberUfoGroup
	stb      r3, 0x20(r28)
	b        lbl_80184CE4

lbl_80184B58:
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	li       r3, -1
	addi     r11, r4, __vt__Q32og6Screen14DispMemberBase@l
	stw      r3, 0x10(r1)
	lis      r4, __vt__Q32og6Screen17DispMemberContena@ha
	lwz      r3, playData__4Game@sda21(r13)
	li       r10, 0x64
	li       r9, 0x3e8
	li       r8, 0x14
	li       r7, 0x32
	li       r6, 0x3c
	li       r5, 0xc8
	stw      r11, 8(r1)
	addi     r11, r4, __vt__Q32og6Screen17DispMemberContena@l
	mr       r4, r30
	addi     r3, r3, 0xa8
	stw      r0, 0xc(r1)
	stw      r11, 8(r1)
	stw      r10, 0x14(r1)
	stw      r9, 0x18(r1)
	stw      r0, 0x1c(r1)
	stw      r8, 0x20(r1)
	stw      r7, 0x24(r1)
	stw      r6, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r0, 0x30(r1)
	stb      r0, 0x34(r1)
	stw      r0, 0x38(r1)
	sth      r0, 0x3c(r1)
	stw      r30, 0x10(r1)
	bl       getColorSum__Q24Game13PikiContainerFi
	lis      r4, 0x0001F400@ha
	stw      r3, 0x14(r1)
	addi     r3, r4, 0x0001F400@l
	li       r0, 0
	stw      r3, 0x18(r1)
	lhz      r23, 0x2dc(r29)
	cmpwi    r23, 0
	blt      lbl_80184C00
	cmpwi    r23, 7
	bge      lbl_80184C00
	li       r0, 1

lbl_80184C00:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80184C1C
	addi     r3, r31, 0xcc
	addi     r5, r31, 0x94
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80184C1C:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	slwi     r5, r23, 5
	addi     r0, r3, formationPikis__Q24Game8GameStat@l
	mr       r4, r30
	add      r3, r0, r5
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r4, 0x64
	stw      r3, 0x1c(r1)
	li       r0, 0
	stw      r4, 0x20(r1)
	lhz      r23, 0x2dc(r29)
	cmpwi    r23, 0
	blt      lbl_80184C68
	cmpwi    r23, 7
	bge      lbl_80184C68
	li       r0, 1

lbl_80184C68:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80184C84
	addi     r3, r31, 0xcc
	addi     r5, r31, 0x94
	li       r4, 0x73
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80184C84:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	slwi     r4, r23, 5
	addi     r0, r3, formationPikis__Q24Game8GameStat@l
	add      r3, r0, r4
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	li       r3, -1
	bl       getMapPikmins__Q24Game8GameStatFi
	mr       r29, r3
	li       r3, -1
	bl       getZikatuPikmins__Q24Game8GameStatFi
	subf     r0, r3, r29
	li       r3, -1
	stw      r0, 0x28(r1)
	bl       getZikatuPikmins__Q24Game8GameStatFi
	subfic   r0, r3, 0x64
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	stw      r0, 0x2c(r1)
	addi     r4, r1, 8
	bl       open_Contena__Q26Screen9Game2DMgrFRQ32og6Screen17DispMemberContena
	stb      r3, 0x20(r28)

lbl_80184CE4:
	lbz      r0, 0x20(r28)
	cmplwi   r0, 0
	beq      lbl_80184D10
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0xd8
	li       r4, 1
	bl       setFrozen__Q24Game10GameSystemFbPc
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0xd8
	li       r4, 1
	bl       setMoviePause__Q24Game10GameSystemFbPc

lbl_80184D10:
	li       r0, 1
	stb      r0, 0x18(r28)
	lwz      r3, 0x10(r28)
	lhz      r0, 0x22e(r3)
	stw      r0, 0x1c(r28)
	lmw      r23, 0xdc(r1)
	lwz      r0, 0x104(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/*
 * --INFO--
 * Address:	80184D38
 * Size:	000270
 */
void NaviContainerState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lbz      r0, 0x20(r3)
	cmplwi   r0, 0
	bne      lbl_80184D7C
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80184F90

lbl_80184D7C:
	lwz      r3, 0x10(r30)
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 4
	bne      lbl_80184EBC
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_UfoMenu__Q26Screen9Game2DMgrFv
	cmpwi    r3, 2
	beq      lbl_80184DD0
	bge      lbl_80184E9C
	cmpwi    r3, 1
	bge      lbl_80184DAC
	b        lbl_80184E9C

lbl_80184DAC:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80184F90

lbl_80184DD0:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	bl       result_UfoMenu__Q26Screen9Game2DMgrFPiPi
	lwz      r0, 0xc(r1)
	li       r5, 0
	li       r3, 1
	cmpwi    r0, 0
	beq      lbl_80184E00
	mr       r5, r0
	li       r3, 1
	b        lbl_80184E14

lbl_80184E00:
	lwz      r0, 8(r1)
	cmpwi    r0, 0
	beq      lbl_80184E14
	mr       r5, r0
	li       r3, 0

lbl_80184E14:
	cmpwi    r5, 0
	bge      lbl_80184E4C
	clrlwi.  r0, r3, 0x18
	beq      lbl_80184E30
	li       r0, 4
	stw      r0, 0x1c(r30)
	b        lbl_80184E38

lbl_80184E30:
	li       r0, 3
	stw      r0, 0x1c(r30)

lbl_80184E38:
	lwz      r3, 0x10(r30)
	neg      r4, r5
	lwz      r5, 0x1c(r30)
	bl       exitPikis__Q24Game5OnyonFii
	b        lbl_80184E78

lbl_80184E4C:
	ble      lbl_80184E78
	clrlwi.  r0, r3, 0x18
	beq      lbl_80184E64
	li       r0, 4
	stw      r0, 0x1c(r30)
	b        lbl_80184E6C

lbl_80184E64:
	li       r0, 3
	stw      r0, 0x1c(r30)

lbl_80184E6C:
	mr       r3, r30
	mr       r4, r31
	bl       enterPikis__Q24Game18NaviContainerStateFPQ24Game4Navii

lbl_80184E78:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80184F90

lbl_80184E9C:
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	b        lbl_80184F90

lbl_80184EBC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_Contena__Q26Screen9Game2DMgrFv
	cmpwi    r3, 2
	beq      lbl_80184F00
	bge      lbl_80184F74
	cmpwi    r3, 1
	bge      lbl_80184EDC
	b        lbl_80184F74

lbl_80184EDC:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80184F90

lbl_80184F00:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       result_Contena__Q26Screen9Game2DMgrFv
	or.      r0, r3, r3
	bge      lbl_80184F3C
	lwz      r3, 0x10(r30)
	lhz      r5, 0x22e(r3)
	cmplwi   r5, 4
	bne      lbl_80184F30
	lwz      r5, 0x1c(r30)
	neg      r4, r0
	bl       exitPikis__Q24Game5OnyonFii
	b        lbl_80184F50

lbl_80184F30:
	neg      r4, r0
	bl       exitPikis__Q24Game5OnyonFii
	b        lbl_80184F50

lbl_80184F3C:
	ble      lbl_80184F50
	mr       r3, r30
	mr       r4, r31
	mr       r5, r0
	bl       enterPikis__Q24Game18NaviContainerStateFPQ24Game4Navii

lbl_80184F50:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80184F90

lbl_80184F74:
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_80184F90:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80184FA8
 * Size:	0002A0
 */
void NaviContainerState::enterPikis(Game::Navi*, int)
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	stw      r0, 0x1d4(r1)
	stmw     r26, 0x1b8(r1)
	li       r28, 0
	cmplwi   r28, 0
	mr       r29, r3
	mr       r30, r5
	li       r31, 0
	lwz      r6, 0x254(r4)
	lis      r4, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r0, r4, "__vt__26Iterator<Q24Game8Creature>"@l
	stw      r0, 0x10(r1)
	stw      r28, 0x1c(r1)
	stw      r28, 0x14(r1)
	stw      r6, 0x18(r1)
	bne      lbl_80185008
	mr       r3, r6
	lwz      r12, 0(r6)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801851C4

lbl_80185008:
	mr       r3, r6
	lwz      r12, 0(r6)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80185078

lbl_80185024:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801851C4
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80185078:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185024
	b        lbl_801851C4

lbl_80185098:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x10(r29)
	li       r5, 0
	lhz      r4, 0x22e(r4)
	cmplwi   r4, 4
	bne      lbl_801850D8
	lwz      r4, 0x1c(r29)
	lbz      r0, 0x2b8(r3)
	cmpw     r4, r0
	bne      lbl_801850E8
	li       r5, 1
	b        lbl_801850E8

lbl_801850D8:
	lbz      r0, 0x2b8(r3)
	cmpw     r0, r4
	bne      lbl_801850E8
	li       r5, 1

lbl_801850E8:
	clrlwi.  r0, r5, 0x18
	beq      lbl_80185108
	addi     r31, r31, 1
	addi     r4, r1, 0x20
	cmpw     r31, r30
	stwx     r3, r4, r28
	addi     r28, r28, 4
	bge      lbl_801851E4

lbl_80185108:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_80185134
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801851C4

lbl_80185134:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801851A8

lbl_80185154:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801851C4
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_801851A8:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185154

lbl_801851C4:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_80185098

lbl_801851E4:
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	lis      r3, __vt__Q26PikiAI17CreatureActionArg@ha
	addi     r27, r1, 0x20
	li       r26, 0
	addi     r30, r4, __vt__Q26PikiAI9ActionArg@l
	addi     r28, r3, __vt__Q26PikiAI17CreatureActionArg@l
	b        lbl_8018522C

lbl_80185200:
	lwz      r0, 0x10(r29)
	addi     r5, r1, 8
	lwz      r3, 0(r27)
	li       r4, 2
	stw      r30, 8(r1)
	stw      r28, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r3, 0x294(r3)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	addi     r27, r27, 4
	addi     r26, r26, 1

lbl_8018522C:
	cmpw     r26, r31
	blt      lbl_80185200
	lmw      r26, 0x1b8(r1)
	lwz      r0, 0x1d4(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80185248
 * Size:	000044
 */
void NaviContainerState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8047EBA0@ha
	stw      r0, 0x14(r1)
	addi     r5, r4, lbl_8047EBA0@l
	li       r4, 0
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setFrozen__Q24Game10GameSystemFbPc
	lis      r4, lbl_8047EBA0@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8047EBA0@l
	li       r4, 0
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018528C
 * Size:	000140
 */
void NaviAbsorbState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	or.      r31, r5, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	bne      lbl_801852D0
	lis      r3, lbl_8047EB4C@ha
	lis      r5, lbl_8047EB5C@ha
	addi     r3, r3, lbl_8047EB4C@l
	li       r4, 0xf4b
	addi     r5, r5, lbl_8047EB5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801852D0:
	lwz      r0, 0(r31)
	stw      r0, 0x14(r29)
	lwz      r0, 0x14(r29)
	cmplwi   r0, 0
	bne      lbl_80185300
	lis      r3, lbl_8047EB4C@ha
	lis      r5, lbl_8047EB5C@ha
	addi     r3, r3, lbl_8047EB4C@l
	li       r4, 0xf4d
	addi     r5, r5, lbl_8047EB5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80185300:
	cmplwi   r30, 0
	mr       r6, r30
	beq      lbl_80185310
	addi     r6, r30, 0x178

lbl_80185310:
	lwz      r12, 0(r30)
	mr       r3, r30
	li       r4, 0x37
	li       r5, 0x37
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lwz      r3, 0x26c(r30)
	li       r4, 0x80c
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	addi     r3, r1, 8
	stb      r0, 0x10(r29)
	stb      r0, 0x18(r29)
	lwz      r4, 0x14(r29)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r30
	lfs      f1, 0xc(r1)
	addi     r4, r1, 0x14
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "turnTo__Q24Game8FakePikiFR10Vector3<f>"
	lwz      r3, cameraMgr__4Game@sda21(r13)
	lhz      r4, 0x2dc(r30)
	bl       controllerLock__Q24Game9CameraMgrFi
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r5, 0
	lhz      r4, 0x2dc(r30)
	bl       startDemoCamera__Q24Game9CameraMgrFii
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801853CC
 * Size:	0000F0
 */
void NaviAbsorbState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_80518BE0@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stfs     f0, 0x208(r4)
	stfs     f0, 0x200(r4)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lbz      r0, 0x10(r3)
	cmplwi   r0, 1
	bne      lbl_80185470
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185470
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_80185470
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game14InteractAbsorb@ha
	addi     r5, r4, __vt__Q24Game11Interaction@l
	stw      r31, 0xc(r1)
	addi     r0, r3, __vt__Q24Game14InteractAbsorb@l
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r0, 8(r1)
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x18(r30)

lbl_80185470:
	mr       r3, r31
	li       r4, 0x37
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801854A4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801854A4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801854BC
 * Size:	000174
 */
void NaviAbsorbState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r0, 0x1c(r5)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	cmpwi    r0, 1
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	beq      lbl_80185510
	bge      lbl_801854F8
	cmpwi    r0, 0
	bge      lbl_80185504
	b        lbl_80185614

lbl_801854F8:
	cmpwi    r0, 0x3e8
	beq      lbl_80185580
	b        lbl_80185614

lbl_80185504:
	li       r0, 1
	stb      r0, 0x10(r30)
	b        lbl_80185614

lbl_80185510:
	lwz      r3, 0x14(r30)
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x406
	beq      lbl_8018553C
	lis      r3, lbl_8047EB4C@ha
	lis      r5, lbl_8047EB5C@ha
	addi     r3, r3, lbl_8047EB4C@l
	li       r4, 0xf74
	addi     r5, r5, lbl_8047EB5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8018553C:
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018556C
	mr       r3, r29
	bl       isShrinking__Q34Game9ItemHoney4ItemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80185614

lbl_8018556C:
	li       r0, 2
	mr       r3, r31
	stb      r0, 0x10(r30)
	bl       finishMotion__Q24Game8FakePikiFv
	b        lbl_80185614

lbl_80185580:
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_801855FC
	lwz      r3, 0x14(r30)
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x406
	beq      lbl_801855B8
	lis      r3, lbl_8047EB4C@ha
	lis      r5, lbl_8047EB5C@ha
	addi     r3, r3, lbl_8047EB4C@l
	li       r4, 0xf80
	addi     r5, r5, lbl_8047EB5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801855B8:
	lwz      r4, 0x14(r30)
	mr       r3, r31
	lbz      r5, 0x1e0(r4)
	subfic   r4, r5, 1
	addi     r0, r5, -1
	or       r0, r4, r0
	srwi     r4, r0, 0x1f
	bl       incDopeCount__Q24Game4NaviFi
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80185614

lbl_801855FC:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80185614:
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
 * Address:	80185630
 * Size:	000040
 */
void NaviAbsorbState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r3, cameraMgr__4Game@sda21(r13)
	lhz      r4, 0x2dc(r4)
	bl       controllerUnLock__Q24Game9CameraMgrFi
	lwz      r3, cameraMgr__4Game@sda21(r13)
	lhz      r4, 0x2dc(r31)
	bl       finishDemoCamera__Q24Game9CameraMgrFi
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80185670
 * Size:	000084
 */
void NaviDamagedState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	bne      lbl_801856A8
	lis      r3, lbl_8047EB4C@ha
	lis      r5, lbl_8047EB5C@ha
	addi     r3, r3, lbl_8047EB4C@l
	li       r4, 0xfa2
	addi     r5, r5, lbl_8047EB5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801856A8:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_801856B8
	addi     r6, r31, 0x178

lbl_801856B8:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 4
	li       r5, 4
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       enableMotionBlend__Q24Game8FakePikiFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801856F4
 * Size:	000098
 */
void NaviDamagedState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80185774
	lwz      r3, 8(r30)
	lwz      r5, 0x1c(r3)
	cmpwi    r5, -1
	bne      lbl_80185758
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80185774

lbl_80185758:
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80185774:
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
 * Address:	8018578C
 * Size:	000028
 */
void NaviDamagedState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	li       r4, 0x3c
	stw      r0, 0x14(r1)
	bl       setInvincibleTimer__Q24Game4NaviFUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801857B4
 * Size:	000068
 */
void NaviDamagedState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_8018580C
	lwz      r5, 8(r3)
	lwz      r5, 0x1c(r5)
	cmpwi    r5, -1
	bne      lbl_801857F8
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8018580C

lbl_801857F8:
	lwz      r12, 0(r3)
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8018580C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018581C
 * Size:	00005C
 */
void NaviDeadState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r3, gameSystem__4Game@sda21(r13)
	lhz      r4, 0x2dc(r4)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
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
 * Address:	80185878
 * Size:	000020
 */
void NaviDeadState::exec(Game::Navi*)
{
	/*
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	stfs     f0, 0x200(r4)
	stfs     f0, 0x204(r4)
	stfs     f0, 0x208(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80185898
 * Size:	000004
 */
void NaviDeadState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	8018589C
 * Size:	000040
 */
void NaviDeadState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_801858CC
	mr       r3, r4
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl

lbl_801858CC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002FC
 */
void NaviGatherInitArg::findTargetPikmin(Game::Navi*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801858DC
 * Size:	0000F8
 */
void NaviGatherState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	beq      lbl_80185914
	lbz      r0, 0(r5)
	stb      r0, 0x10(r31)
	lbz      r0, 1(r5)
	stb      r0, 0x11(r31)
	b        lbl_8018591C

lbl_80185914:
	li       r0, 0
	stb      r0, 0x10(r31)

lbl_8018591C:
	mr       r3, r30
	li       r4, 0xa
	lwz      r12, 0(r30)
	li       r5, 0xa
	li       r6, 0
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       enableMotionBlend__Q24Game8FakePikiFv
	lwz      r3, 0x28c(r30)
	bl       start__Q24Game11NaviWhistleFv
	lbz      r0, 0x10(r31)
	cmplwi   r0, 0
	bne      lbl_8018596C
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 3
	lhz      r5, 0x2dc(r30)
	bl       startRumble__Q24Game9RumbleMgrFii

lbl_8018596C:
	lwz      r31, 0x2d0(r30)
	addi     r4, r1, 8
	lwz      r5, 0x28c(r30)
	lwz      r6, 0xc(r31)
	mr       r3, r31
	lfs      f1, 0x24(r5)
	lwz      r5, 0(r6)
	lwz      r0, 4(r6)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r0, 8(r6)
	stw      r0, 0x10(r1)
	bl       "createCursor___Q23efx11TNaviEffectF10Vector3<f>f"
	lwz      r4, 0x10(r31)
	mr       r3, r31
	bl       createLightAct___Q23efx11TNaviEffectFPA4_f
	lwz      r4, 0x10(r31)
	mr       r3, r31
	lwz      r5, 0xc(r31)
	bl       "createFueact___Q23efx11TNaviEffectFPA4_fP10Vector3<f>"
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801859D4
 * Size:	00012C
 */
void NaviGatherState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_80185A58
	lfs      f0, lbl_80518BE0@sda21(r2)
	addi     r4, r1, 8
	li       r5, 1
	stfs     f0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 0x28c(r31)
	bl       "update__Q24Game11NaviWhistleFR10Vector3<f>b"
	mr       r3, r31
	bl       callPikis__Q24Game4NaviFv
	lwz      r3, 0x28c(r31)
	bl       timeout__Q24Game11NaviWhistleFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185AE8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80185AE8

lbl_80185A58:
	lwz      r0, 0x278(r31)
	cmplwi   r0, 0
	beq      lbl_80185AE8
	lwz      r3, 0x26c(r31)
	bl       playShugoSE__Q23PSM4NaviFv
	mr       r3, r31
	bl       control__Q24Game4NaviFv
	mr       r3, r31
	bl       callPikis__Q24Game4NaviFv
	lwz      r3, 0x278(r31)
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80185AB8
	lwz      r3, 0x28c(r31)
	bl       stop__Q24Game11NaviWhistleFv
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80185AE8

lbl_80185AB8:
	lwz      r3, 0x28c(r31)
	bl       timeout__Q24Game11NaviWhistleFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185AE8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80185AE8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80185B00
 * Size:	000060
 */
void NaviGatherState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_80185B30
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 3
	lhz      r5, 0x2dc(r31)
	bl       stopRumble__Q24Game9RumbleMgrFii

lbl_80185B30:
	lwz      r31, 0x2d0(r31)
	mr       r3, r31
	bl       killCursor___Q23efx11TNaviEffectFv
	mr       r3, r31
	bl       killLightAct___Q23efx11TNaviEffectFv
	mr       r3, r31
	bl       killFueact___Q23efx11TNaviEffectFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80185B60
 * Size:	0000F4
 */
NaviThrowWaitState::NaviThrowWaitState(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	extsh.   r0, r4
	stw      r31, 0x1c(r1)
	mr       r31, r3
	beq      lbl_80185B90
	addi     r0, r31, 0x3c
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0x10(r31)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x3c(r31)

lbl_80185B90:
	lis      r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@ha
	lis      r5, __vt__Q24Game9NaviState@ha
	addi     r0, r3, "__vt__Q24Game22FSMState<Q24Game4Navi>"@l
	lis      r3, __vt__Q24Game18NaviThrowWaitState@ha
	stw      r0, 0(r31)
	li       r0, 6
	addi     r4, r3, __vt__Q24Game18NaviThrowWaitState@l
	li       r3, 0
	stw      r0, 4(r31)
	addi     r6, r5, __vt__Q24Game9NaviState@l
	addi     r5, r4, 0x50
	addi     r0, r31, 0x3c
	stw      r3, 8(r31)
	li       r3, 0x14
	stw      r6, 0(r31)
	stw      r4, 0(r31)
	lwz      r4, 0x10(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x10(r31)
	subf     r0, r4, r0
	stw      r0, 4(r4)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80185C38
	lis      r4, lbl_804B2DB0@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804B2DB0@l
	lis      r4, "__vt__37Delegate<Q24Game18NaviThrowWaitState>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__37Delegate<Q24Game18NaviThrowWaitState>"@l
	lwz      r4, 8(r8)
	stw      r7, 8(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r31, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r4, 0x10(r3)

lbl_80185C38:
	stw      r3, 0x30(r31)
	mr       r3, r31
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80185C54
 * Size:	000004
 */
void NaviThrowWaitState::draw2d(J2DGrafContext&, int&) { }

/*
 * --INFO--
 * Address:	80185C58
 * Size:	00002C
 */
void NaviThrowWaitState::resume(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
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
 * Address:	80185C84
 * Size:	000034
 */
void NaviThrowWaitState::restart(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
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
 * Address:	80185CB8
 * Size:	000558
 */
void NaviThrowWaitState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stmw     r27, 0x4c(r1)
	mr       r28, r3
	li       r0, -1
	stw      r0, 0x38(r3)
	mr       r29, r4
	li       r4, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	stw      r29, 0x34(r28)
	cmplwi   r4, 0
	lfs      f0, lbl_80518BE0@sda21(r2)
	addi     r0, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	lfs      f29, lbl_80518CB8@sda21(r2)
	li       r30, 0
	stfs     f0, 0x2b0(r29)
	stw      r4, 0x14(r28)
	stw      r4, 0x18(r28)
	lwz      r3, 0x254(r29)
	stw      r0, 0x20(r1)
	stw      r4, 0x2c(r1)
	stw      r4, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_80185D5C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80185DE4

lbl_80185D5C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80185DC8

lbl_80185D74:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80185DE4
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80185DC8:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185D74

lbl_80185DE4:
	lis      r3, sincosTable___5JMath@ha
	lfs      f30, lbl_80518BE0@sda21(r2)
	lfs      f31, lbl_80518BE8@sda21(r2)
	addi     r31, r3, sincosTable___5JMath@l
	lfs      f28, lbl_80518C54@sda21(r2)
	b        lbl_8018603C

lbl_80185DFC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r29)
	mr       r27, r3
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r27
	addi     r3, r1, 0x14
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f6, 0x1fc(r29)
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x10(r1)
	fmr      f5, f6
	lfs      f3, 0x18(r1)
	fcmpo    cr0, f6, f30
	lfs      f2, 0xc(r1)
	fsubs    f4, f1, f0
	lfs      f1, 0x14(r1)
	lfs      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f7, f1, f0
	bge      lbl_80185E7C
	fneg     f5, f6

lbl_80185E7C:
	fmuls    f0, f5, f31
	fcmpo    cr0, f6, f30
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f3, 4(r3)
	bge      lbl_80185ECC
	lfs      f0, lbl_80518BEC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f5, f0
	b        lbl_80185EEC

lbl_80185ECC:
	fmuls    f0, f6, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f5, r3, r0

lbl_80185EEC:
	fmuls    f0, f2, f2
	fmuls    f1, f4, f4
	fmadds   f0, f7, f7, f0
	fadds    f6, f1, f0
	fcmpo    cr0, f6, f30
	ble      lbl_80185F14
	ble      lbl_80185F18
	frsqrte  f0, f6
	fmuls    f6, f0, f6
	b        lbl_80185F18

lbl_80185F14:
	fmr      f6, f30

lbl_80185F18:
	fabs     f0, f2
	fmr      f27, f6
	frsp     f0, f0
	fcmpo    cr0, f0, f28
	bgt      lbl_80185F80
	lfs      f1, lbl_80518BE0@sda21(r2)
	lfs      f0, lbl_80518CBC@sda21(r2)
	fmuls    f1, f2, f1
	fmadds   f1, f7, f5, f1
	fmadds   f1, f4, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80185F50
	lfs      f0, lbl_80518C4C@sda21(r2)
	fadds    f27, f6, f0

lbl_80185F50:
	fcmpo    cr0, f27, f29
	bge      lbl_80185F80
	mr       r3, r27
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_80185F80
	mr       r3, r27
	bl       isThrowable__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185F80
	mr       r30, r27
	fmr      f29, f27

lbl_80185F80:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80185FAC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8018603C

lbl_80185FAC:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80186020

lbl_80185FCC:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018603C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80186020:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80185FCC

lbl_8018603C:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_80185DFC
	lwz      r3, 0xc0(r29)
	lfs      f0, 0x660(r3)
	fcmpo    cr0, f29, f0
	cror     2, 0, 2
	bne      lbl_80186078
	stw      r30, 0x14(r28)
	b        lbl_8018607C

lbl_80186078:
	stw      r30, 0x18(r28)

lbl_8018607C:
	lwz      r0, 0x14(r28)
	cmplwi   r0, 0
	beq      lbl_801860CC
	lfs      f0, lbl_80518C64@sda21(r2)
	cmplwi   r28, 0
	mr       r6, r28
	stfs     f0, 0x234(r29)
	beq      lbl_801860A0
	lwz      r6, 0x10(r28)

lbl_801860A0:
	lwz      r12, 0(r29)
	mr       r3, r29
	li       r4, 0x22
	li       r5, 0x22
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       enableMotionBlend__Q24Game8FakePikiFv
	b        lbl_801860F4

lbl_801860CC:
	lwz      r4, 0x18(r28)
	cmplwi   r4, 0
	beq      lbl_801860F4
	lwz      r3, 0x28c(r4)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801860F4:
	li       r0, 0
	stb      r0, 0x20(r28)
	stw      r0, 0x1c(r28)
	lwz      r0, 0x14(r28)
	cmplwi   r0, 0
	beq      lbl_80186148
	lwz      r5, 0x34(r28)
	li       r4, 2
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	lhz      r5, 0x2dc(r5)
	bl       startRumble__Q24Game9RumbleMgrFii
	lwz      r4, 0x14(r28)
	li       r5, 4
	li       r6, 0
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x20(r28)

lbl_80186148:
	lwz      r4, 0x1c(r28)
	lis      r0, 0x4330
	lwz      r5, 0xc0(r29)
	mr       r3, r29
	xoris    r4, r4, 0x8000
	stw      r0, 0x40(r1)
	lfd      f5, lbl_80518C30@sda21(r2)
	stw      r4, 0x44(r1)
	lfs      f4, lbl_80518C38@sda21(r2)
	lfd      f1, 0x40(r1)
	lfs      f0, 0x520(r5)
	fsubs    f3, f1, f5
	lfs      f2, 0x548(r5)
	stw      r0, 0x38(r1)
	fsubs    f1, f0, f2
	lfs      f0, lbl_80518C1C@sda21(r2)
	fdivs    f3, f3, f4
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x2b4(r29)
	lwz      r0, 0x1c(r28)
	lwz      r4, 0xc0(r29)
	xoris    r0, r0, 0x8000
	stw      r0, 0x3c(r1)
	lfs      f1, 0x570(r4)
	lfd      f3, 0x38(r1)
	lfs      f2, 0x598(r4)
	fsubs    f3, f3, f5
	fsubs    f1, f1, f2
	fdivs    f3, f3, f4
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x2b8(r29)
	stfs     f4, 0x28(r28)
	stfs     f0, 0x2c(r28)
	lwz      r4, 0x30(r28)
	bl       setDoAnimCallback__Q24Game8FakePikiFP9IDelegate
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80186210
 * Size:	00003C
 */
void NaviThrowWaitState::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	lwz      r0, 0x1c(r4)
	cmpwi    r0, 2
	beq      lbl_80186240
	bge      lbl_80186240
	cmpwi    r0, 1
	bge      lbl_8018622C
	b        lbl_80186240

lbl_8018622C:
	lwz      r4, 0x1c(r3)
	cmpwi    r4, 3
	bge      lbl_80186240
	addi     r0, r4, 1
	stw      r0, 0x1c(r3)

lbl_80186240:
	li       r0, 0
	stw      r0, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018624C
 * Size:	000024
 */
void NaviThrowWaitState::doAnimCallback(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x34(r3)
	bl       lockHangPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80186270
 * Size:	000084
 */
void NaviThrowWaitState::lockHangPiki(Game::Navi*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	beq      lbl_801862E0
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	beq      lbl_801862E0
	lwz      r3, 0x114(r4)
	lis      r4, 0x72686E64@ha
	addi     r4, r4, 0x72686E64@l
	bl       getCollPart__8CollTreeFUl
	lfs      f1, 0x4c(r3)
	addi     r4, r1, 8
	lfs      f0, lbl_80518C80@sda21(r2)
	li       r5, 0
	stfs     f1, 8(r1)
	lfs      f1, 0x50(r3)
	stfs     f1, 0xc(r1)
	fsubs    f0, f1, f0
	lfs      f1, 0x54(r3)
	stfs     f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	lwz      r3, 0x14(r31)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_801862E0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801862F4
 * Size:	000AE0
 */
void NaviThrowWaitState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stmw     r23, 0x9c(r1)
	lwz      r5, moviePlayer__4Game@sda21(r13)
	mr       r28, r3
	mr       r29, r4
	cmplwi   r5, 0
	beq      lbl_80186358
	lwz      r0, 0x18(r5)
	cmpwi    r0, 0
	beq      lbl_80186358
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_80186358:
	lwz      r0, 0x278(r29)
	cmplwi   r0, 0
	beq      lbl_80186DA8
	mr       r3, r29
	bl       control__Q24Game4NaviFv
	lwz      r0, 0x14(r28)
	cmplwi   r0, 0
	bne      lbl_80186544
	lwz      r0, 0x18(r28)
	cmplwi   r0, 0
	beq      lbl_80186520
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x28(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x28(r28)
	lfs      f1, 0x28(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_801863CC
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_801863CC:
	lwz      r3, 0x278(r29)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80186400
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_80186400:
	lis      r4, 0x72686E64@ha
	lwz      r3, 0x114(r29)
	addi     r4, r4, 0x72686E64@l
	bl       getCollPart__8CollTreeFUl
	lwz      r4, 0x18(r28)
	lfs      f31, 0x4c(r3)
	lwz      r12, 0(r4)
	lfs      f30, 0x50(r3)
	lwz      r12, 8(r12)
	lfs      f29, 0x54(r3)
	addi     r3, r1, 0x30
	mtctr    r12
	bctrl
	lfs      f0, 0x34(r1)
	lfs      f2, 0x30(r1)
	fsubs    f4, f30, f0
	lfs      f1, 0x38(r1)
	fsubs    f3, f31, f2
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f2, f29, f1
	fmuls    f1, f4, f4
	fmuls    f2, f2, f2
	fmadds   f1, f3, f3, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80186478
	ble      lbl_8018647C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8018647C

lbl_80186478:
	fmr      f1, f0

lbl_8018647C:
	lfs      f0, lbl_80518CC0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80186DA8
	lfs      f0, lbl_80518C64@sda21(r2)
	cmplwi   r28, 0
	mr       r6, r28
	stfs     f0, 0x234(r29)
	beq      lbl_801864A4
	lwz      r6, 0x10(r28)

lbl_801864A4:
	lwz      r12, 0(r29)
	mr       r3, r29
	li       r4, 0x22
	li       r5, 0x22
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       enableMotionBlend__Q24Game8FakePikiFv
	lwz      r3, 0x18(r28)
	li       r0, 0
	li       r4, 2
	stw      r3, 0x14(r28)
	stw      r0, 0x18(r28)
	lwz      r5, 0x34(r28)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	lhz      r5, 0x2dc(r5)
	bl       startRumble__Q24Game9RumbleMgrFii
	lwz      r4, 0x14(r28)
	li       r5, 4
	li       r6, 0
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x20(r28)
	b        lbl_80186544
	b        lbl_80186DA8

lbl_80186520:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_80186544:
	lwz      r3, 0x14(r28)
	lis      r0, 0x4330
	stw      r0, 0x88(r1)
	lfd      f4, lbl_80518C30@sda21(r2)
	stw      r3, 0x2a8(r29)
	lfs      f3, lbl_80518C38@sda21(r2)
	lwz      r3, 0x1c(r28)
	lwz      r4, 0xc0(r29)
	xoris    r3, r3, 0x8000
	stw      r0, 0x90(r1)
	lfs      f0, 0x520(r4)
	stw      r3, 0x8c(r1)
	lfs      f1, 0x548(r4)
	lfd      f2, 0x88(r1)
	fsubs    f0, f0, f1
	fsubs    f2, f2, f4
	fdivs    f2, f2, f3
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x2b4(r29)
	lwz      r0, 0x1c(r28)
	lwz      r3, 0xc0(r29)
	xoris    r0, r0, 0x8000
	stw      r0, 0x94(r1)
	lfs      f0, 0x570(r3)
	lfd      f2, 0x90(r1)
	lfs      f1, 0x598(r3)
	fsubs    f2, f2, f4
	fsubs    f0, f0, f1
	fdivs    f2, f2, f3
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x2b8(r29)
	lwz      r3, 0x14(r28)
	cmplwi   r3, 0
	beq      lbl_80186610
	lbz      r0, 0x20(r28)
	cmplwi   r0, 0
	beq      lbl_80186610
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 4
	beq      lbl_80186610
	cmpwi    r3, 3
	beq      lbl_80186610
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_80186610:
	lwz      r3, 0x278(r29)
	lwz      r3, 0x1c(r3)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_8018681C
	li       r0, -1
	lis      r3, 0x92492493@ha
	stw      r0, 0x38(r28)
	addi     r9, r3, 0x92492493@l
	addi     r26, r1, 0x6c
	li       r31, 0
	lwz      r3, 0x14(r28)
	li       r30, 0
	lbz      r27, 0x2b8(r3)
	addi     r10, r27, 1
	addi     r7, r27, 2
	mulhw    r6, r9, r10
	addi     r5, r27, 3
	addi     r3, r27, 4
	addi     r0, r27, 5
	addi     r12, r27, 6
	mulhw    r4, r9, r7
	add      r6, r6, r10
	srawi    r8, r6, 2
	mulhw    r6, r9, r5
	srwi     r11, r8, 0x1f
	add      r4, r4, r7
	add      r8, r8, r11
	srawi    r11, r4, 2
	mulhw    r4, r9, r3
	add      r6, r6, r5
	srwi     r24, r11, 0x1f
	srawi    r23, r6, 2
	add      r6, r11, r24
	mulhw    r11, r9, r0
	add      r4, r4, r3
	srwi     r25, r23, 0x1f
	srawi    r24, r4, 2
	add      r4, r23, r25
	mulhw    r9, r9, r12
	srwi     r25, r24, 0x1f
	add      r11, r11, r0
	add      r25, r24, r25
	srawi    r23, r11, 2
	mulli    r6, r6, 7
	add      r9, r9, r12
	srwi     r24, r23, 0x1f
	mulli    r4, r4, 7
	srawi    r9, r9, 2
	subf     r6, r6, r7
	stw      r6, 0x70(r1)
	srwi     r11, r9, 0x1f
	mulli    r6, r25, 7
	subf     r4, r4, r5
	add      r23, r23, r24
	stw      r4, 0x74(r1)
	mulli    r4, r23, 7
	add      r9, r9, r11
	subf     r3, r6, r3
	stw      r3, 0x78(r1)
	mulli    r8, r8, 7
	subf     r0, r4, r0
	stw      r0, 0x7c(r1)
	mulli    r3, r9, 7
	subf     r8, r8, r10
	stw      r8, 0x6c(r1)
	subf     r0, r3, r12
	stw      r0, 0x80(r1)

lbl_8018671C:
	lwz      r5, 0(r26)
	mr       r3, r28
	mr       r4, r29
	bl       findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii
	cmplwi   r3, 0
	beq      lbl_8018673C
	mr       r31, r3
	b        lbl_8018674C

lbl_8018673C:
	addi     r30, r30, 1
	addi     r26, r26, 4
	cmpwi    r30, 6
	blt      lbl_8018671C

lbl_8018674C:
	cmplwi   r31, 0
	beq      lbl_80186BA4
	lwz      r23, 0x14(r28)
	lwz      r3, 0x2c4(r23)
	cmplwi   r3, 0
	beq      lbl_801867A8
	cmpwi    r27, 5
	bne      lbl_8018678C
	lwz      r3, 0x26c(r3)
	li       r4, 0x286b
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801867A8

lbl_8018678C:
	lwz      r3, 0x26c(r3)
	li       r4, 0x2802
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801867A8:
	lwz      r3, 0x28c(r23)
	mr       r4, r23
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r31, 0x14(r28)
	mr       r4, r31
	li       r5, 4
	li       r6, 0
	lwz      r3, 0x28c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1822
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	lhz      r5, 0x2dc(r29)
	bl       startRumble__Q24Game9RumbleMgrFii
	b        lbl_80186DA8

lbl_8018681C:
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80186A20
	li       r0, -1
	lis      r3, 0x92492493@ha
	stw      r0, 0x38(r28)
	addi     r9, r3, 0x92492493@l
	addi     r26, r1, 0x54
	li       r30, 0
	lwz      r3, 0x14(r28)
	li       r31, 0
	lbz      r27, 0x2b8(r3)
	addi     r10, r27, 6
	addi     r7, r27, 5
	mulhw    r6, r9, r10
	addi     r5, r27, 4
	addi     r3, r27, 3
	addi     r0, r27, 2
	addi     r12, r27, 1
	mulhw    r4, r9, r7
	add      r6, r6, r10
	srawi    r8, r6, 2
	mulhw    r6, r9, r5
	srwi     r11, r8, 0x1f
	add      r4, r4, r7
	add      r8, r8, r11
	srawi    r11, r4, 2
	mulhw    r4, r9, r3
	add      r6, r6, r5
	srwi     r24, r11, 0x1f
	srawi    r23, r6, 2
	add      r6, r11, r24
	mulhw    r11, r9, r0
	add      r4, r4, r3
	srwi     r25, r23, 0x1f
	srawi    r24, r4, 2
	add      r4, r23, r25
	mulhw    r9, r9, r12
	srwi     r23, r24, 0x1f
	add      r11, r11, r0
	add      r23, r24, r23
	srawi    r25, r11, 2
	mulli    r6, r6, 7
	add      r9, r9, r12
	srwi     r24, r25, 0x1f
	mulli    r4, r4, 7
	srawi    r9, r9, 2
	subf     r6, r6, r7
	stw      r6, 0x58(r1)
	srwi     r11, r9, 0x1f
	mulli    r6, r23, 7
	subf     r4, r4, r5
	add      r25, r25, r24
	stw      r4, 0x5c(r1)
	mulli    r4, r25, 7
	add      r9, r9, r11
	subf     r3, r6, r3
	stw      r3, 0x60(r1)
	mulli    r8, r8, 7
	subf     r0, r4, r0
	stw      r0, 0x64(r1)
	mulli    r3, r9, 7
	subf     r8, r8, r10
	stw      r8, 0x54(r1)
	subf     r0, r3, r12
	stw      r0, 0x68(r1)

lbl_80186920:
	lwz      r5, 0(r26)
	mr       r3, r28
	mr       r4, r29
	bl       findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii
	cmplwi   r3, 0
	beq      lbl_80186940
	mr       r30, r3
	b        lbl_80186950

lbl_80186940:
	addi     r31, r31, 1
	addi     r26, r26, 4
	cmpwi    r31, 6
	blt      lbl_80186920

lbl_80186950:
	cmplwi   r30, 0
	beq      lbl_80186BA4
	lwz      r23, 0x14(r28)
	lwz      r3, 0x2c4(r23)
	cmplwi   r3, 0
	beq      lbl_801869AC
	cmpwi    r27, 5
	bne      lbl_80186990
	lwz      r3, 0x26c(r3)
	li       r4, 0x286b
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801869AC

lbl_80186990:
	lwz      r3, 0x26c(r3)
	li       r4, 0x2802
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801869AC:
	lwz      r3, 0x28c(r23)
	mr       r4, r23
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r30, 0x14(r28)
	mr       r4, r30
	li       r5, 4
	li       r6, 0
	lwz      r3, 0x28c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1822
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	lhz      r5, 0x2dc(r29)
	bl       startRumble__Q24Game9RumbleMgrFii
	b        lbl_80186DA8

lbl_80186A20:
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	bne      lbl_80186A30
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_80186BA4

lbl_80186A30:
	lwz      r4, 0x14(r28)
	rlwinm   r31, r3, 0x1e, 0x1f, 0x1f
	li       r26, 0
	lbz      r30, 0x2b8(r4)
	lbz      r27, 0x2b9(r4)

lbl_80186A44:
	cmplwi   r31, 0
	beq      lbl_80186A78
	lwz      r4, 0x38(r28)
	lis      r3, 0x55555556@ha
	addi     r0, r3, 0x55555556@l
	addi     r4, r4, 2
	mulhw    r3, r0, r4
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf     r0, r0, r4
	stw      r0, 0x38(r28)
	b        lbl_80186AA0

lbl_80186A78:
	lwz      r4, 0x38(r28)
	lis      r3, 0x55555556@ha
	addi     r0, r3, 0x55555556@l
	addi     r4, r4, 1
	mulhw    r3, r0, r4
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf     r0, r0, r4
	stw      r0, 0x38(r28)

lbl_80186AA0:
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	bl       findNearestColorPiki__Q24Game18NaviThrowWaitStateFPQ24Game4Navii
	or.      r23, r3, r3
	beq      lbl_80186AC4
	lbz      r0, 0x2b9(r23)
	cmpw     r27, r0
	bne      lbl_80186AD4

lbl_80186AC4:
	addi     r26, r26, 1
	li       r23, 0
	cmpwi    r26, 2
	blt      lbl_80186A44

lbl_80186AD4:
	cmplwi   r23, 0
	beq      lbl_80186BA4
	lwz      r24, 0x14(r28)
	lwz      r3, 0x2c4(r24)
	cmplwi   r3, 0
	beq      lbl_80186B30
	cmpwi    r30, 5
	bne      lbl_80186B14
	lwz      r3, 0x26c(r3)
	li       r4, 0x286b
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186B30

lbl_80186B14:
	lwz      r3, 0x26c(r3)
	li       r4, 0x2802
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80186B30:
	lwz      r3, 0x28c(r24)
	mr       r4, r24
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r23, 0x14(r28)
	mr       r4, r23
	li       r5, 4
	li       r6, 0
	lwz      r3, 0x28c(r23)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1822
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	lhz      r5, 0x2dc(r29)
	bl       startRumble__Q24Game9RumbleMgrFii
	b        lbl_80186DA8

lbl_80186BA4:
	lwz      r3, 0x278(r29)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80186C24
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	lwz      r4, 0x1c(r28)
	lis      r0, 0x4330
	lwz      r7, 0xc0(r29)
	mr       r3, r28
	xoris    r5, r4, 0x8000
	stw      r0, 0x90(r1)
	lfd      f3, lbl_80518C30@sda21(r2)
	mr       r4, r29
	stw      r5, 0x94(r1)
	addi     r6, r1, 8
	lfs      f1, lbl_80518C38@sda21(r2)
	li       r5, 5
	lfd      f2, 0x90(r1)
	lfs      f0, 0x4f8(r7)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f1, f0
	stfs     f0, 0x2b0(r29)
	lwz      r0, 0x14(r28)
	stw      r0, 8(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80186DA8

lbl_80186C24:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2b0(r29)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2b0(r29)
	lwz      r3, 0xc0(r29)
	lfs      f1, 0x2b0(r29)
	lfs      f0, 0x4f8(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80186C50
	stfs     f0, 0x2b0(r29)

lbl_80186C50:
	lfs      f2, 0x2c(r28)
	lfs      f1, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_80186C90
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0x2c(r28)
	lfs      f0, 0x2c(r28)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80186DA8
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi
	b        lbl_80186DA8

lbl_80186C90:
	lwz      r3, 0x254(r29)
	lwz      r0, 0xbc(r3)
	cmpwi    r0, 0
	ble      lbl_80186DA8
	mr       r4, r29
	lwz      r5, 0xc0(r3)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x24
	lfs      f29, 0xc(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x10(r5)
	lfs      f31, 0x14(r5)
	mtctr    r12
	bctrl
	lfs      f0, 0x28(r1)
	lfs      f2, 0x24(r1)
	fsubs    f4, f30, f0
	lfs      f1, 0x2c(r1)
	fsubs    f3, f29, f2
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f2, f31, f1
	fmuls    f1, f4, f4
	fmuls    f2, f2, f2
	fmadds   f1, f3, f3, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80186D0C
	ble      lbl_80186D10
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80186D10

lbl_80186D0C:
	fmr      f1, f0

lbl_80186D10:
	lfs      f0, lbl_80518C64@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80186DA8
	mr       r4, r29
	addi     r3, r1, 0x18
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	mr       r4, r29
	lfs      f1, 0x1c(r1)
	addi     r3, r1, 0xc
	lfs      f0, 0x20(r1)
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	addi     r4, r1, 0x48
	lfs      f2, 0x10(r1)
	addi     r5, r1, 0x3c
	lfs      f0, 0x14(r1)
	stfs     f1, 0x3c(r1)
	lfs      f1, lbl_80518CA4@sda21(r2)
	stfs     f2, 0x40(r1)
	lfs      f2, lbl_80518C48@sda21(r2)
	stfs     f0, 0x44(r1)
	lfs      f0, 0x1fc(r29)
	lwz      r3, 0x254(r29)
	fadds    f1, f1, f0
	bl       "setPos__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"
	mr       r3, r28
	mr       r4, r29
	bl       sortPikis__Q24Game18NaviThrowWaitStateFPQ24Game4Navi

lbl_80186DA8:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	lmw      r23, 0x9c(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80186DD4
 * Size:	0002FC
 */
void NaviThrowWaitState::findNearestColorPiki(Game::Navi*, int)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	mr       r29, r4
	lis      r4, "__vt__26Iterator<Q24Game8Creature>"@ha
	lwz      r6, 0x254(r29)
	li       r0, 0
	addi     r4, r4, "__vt__26Iterator<Q24Game8Creature>"@l
	lfs      f30, lbl_80518CC4@sda21(r2)
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	mr       r28, r3
	mr       r30, r5
	stw      r0, 0x2c(r1)
	li       r31, 0
	stw      r0, 0x24(r1)
	stw      r6, 0x28(r1)
	bne      lbl_80186E4C
	mr       r3, r6
	lwz      r12, 0(r6)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80187088

lbl_80186E4C:
	mr       r3, r6
	lwz      r12, 0(r6)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80186EBC

lbl_80186E68:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80187088
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80186EBC:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80186E68
	b        lbl_80187088

lbl_80186EDC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r3)
	mr       r27, r3
	cmpw     r30, r0
	bne      lbl_80186FCC
	lwz      r3, 0x38(r28)
	cmpwi    r3, -1
	beq      lbl_80186F18
	lbz      r0, 0x2b9(r27)
	cmpw     r3, r0
	bne      lbl_80186FCC

lbl_80186F18:
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r27
	addi     r3, r1, 0x14
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x18(r1)
	lfs      f0, 0xc(r1)
	lfs      f3, 0x1c(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x10(r1)
	lfs      f1, 0x14(r1)
	lfs      f0, 8(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_80186F98
	ble      lbl_80186F9C
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_80186F9C

lbl_80186F98:
	fmr      f31, f0

lbl_80186F9C:
	fcmpo    cr0, f31, f30
	bge      lbl_80186FCC
	mr       r3, r27
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_80186FCC
	mr       r3, r27
	bl       isThrowable__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80186FCC
	mr       r31, r27
	fmr      f30, f31

lbl_80186FCC:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80186FF8
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80187088

lbl_80186FF8:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8018706C

lbl_80187018:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80187088
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_8018706C:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80187018

lbl_80187088:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_80186EDC
	mr       r3, r31
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	801870D0
 * Size:	000270
 */
void NaviThrowWaitState::sortPikis(Game::Navi*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	lwz      r3, 0x254(r4)
	lwz      r4, 0x14(r5)
	lwz      r5, 0x38(r5)
	bl       sortByColor__Q24Game6CPlateFPQ24Game8Creaturei
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	addi     r4, r1, 0x24
	lfs      f2, 0xc(r1)
	addi     r5, r31, 0x200
	lfs      f0, 0x10(r1)
	stfs     f1, 0x24(r1)
	lfs      f1, lbl_80518CA4@sda21(r2)
	stfs     f2, 0x28(r1)
	lfs      f2, lbl_80518C48@sda21(r2)
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x1fc(r31)
	lwz      r3, 0x254(r31)
	fadds    f1, f1, f0
	bl       "setPos__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"
	lwz      r3, 0x254(r31)
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8Creature>"@l
	cmplwi   r0, 0
	stw      r4, 0x14(r1)
	stw      r0, 0x20(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_80187188
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8018730C

lbl_80187188:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_801871F4

lbl_801871A0:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018730C
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_801871F4:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801871A0
	b        lbl_8018730C

lbl_80187214:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r31, r0
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_80187250
	mr       r3, r31
	bl       getCurrAction__Q24Game4PikiFv
	cmplwi   r3, 0
	beq      lbl_80187250
	bl       startSort__Q26PikiAI12ActFormationFv

lbl_80187250:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_8018727C
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8018730C

lbl_8018727C:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_801872F0

lbl_8018729C:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8018730C
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_801872F0:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8018729C

lbl_8018730C:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_80187214
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80187340
 * Size:	000068
 */
void NaviThrowWaitState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0x286b
	lwz      r3, 0x26c(r31)
	lwzu     r12, 0x30(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x26c(r31)
	li       r4, 0x2802
	lwzu     r12, 0x30(r3)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       clearDoAnimCallback__Q24Game8FakePikiFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801873A8
 * Size:	0000C8
 */
void NaviThrowState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_80518C64@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	or.      r29, r3, r3
	stfs     f0, 0x234(r4)
	mr       r6, r29
	beq      lbl_801873E0
	lwz      r6, 0x10(r29)

lbl_801873E0:
	lwz      r12, 0(r30)
	mr       r3, r30
	li       r4, 0x21
	li       r5, 0x21
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       enableMotionBlend__Q24Game8FakePikiFv
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x14(r29)
	li       r4, 0x21
	stb      r0, 0x15(r29)
	stw      r30, 0x1c(r29)
	lwz      r0, 0(r31)
	stw      r0, 0x18(r29)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80187454
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80187454:
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
 * Address:	80187470
 * Size:	0000D4
 */
void NaviThrowState::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r0, 0x1c(r4)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	cmpwi    r0, 0x3e8
	beq      lbl_80187514
	bge      lbl_80187530
	cmpwi    r0, 2
	beq      lbl_801874A0
	b        lbl_80187530

lbl_801874A0:
	lwz      r3, 0x18(r31)
	bl       isThrowable__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801874BC
	li       r0, 1
	stb      r0, 0x14(r31)
	b        lbl_80187530

lbl_801874BC:
	lwz      r3, 0x1c(r31)
	addi     r5, r1, 8
	lwz      r4, 0x28c(r3)
	lfs      f1, 0x10(r4)
	lfs      f2, 0x14(r4)
	lfs      f0, 0xc(r4)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lwz      r4, 0x18(r31)
	bl       "throwPiki__Q24Game4NaviFPQ24Game4PikiR10Vector3<f>"
	lwz      r4, 0x18(r31)
	li       r5, 6
	li       r6, 0
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x14(r31)
	b        lbl_80187530

lbl_80187514:
	lwz      r12, 0(r3)
	li       r5, 0
	lwz      r4, 0x1c(r31)
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80187530:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80187544
 * Size:	0000F0
 */
void NaviThrowState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x278(r4)
	cmplwi   r0, 0
	beq      lbl_8018761C
	mr       r3, r31
	bl       control__Q24Game4NaviFv
	lwz      r3, 0x278(r31)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8018758C
	li       r0, 1
	stb      r0, 0x15(r30)

lbl_8018758C:
	mr       r3, r31
	bl       findNextThrowPiki__Q24Game4NaviFv
	lbz      r0, 0x14(r30)
	cmplwi   r0, 0
	beq      lbl_801875E0
	lwz      r3, 0x278(r31)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_801875E0
	mr       r3, r31
	bl       throwable__Q24Game4NaviFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801875E0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801875E0:
	lbz      r0, 0x14(r30)
	cmplwi   r0, 0
	beq      lbl_8018761C
	lwz      r3, 0x278(r31)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8018761C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8018761C:
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
 * Address:	80187634
 * Size:	000004
 */
void NaviThrowState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	80187638
 * Size:	0001C0
 */
void NaviPelletState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	or.      r31, r4, r4
	li       r0, 0
	stb      r0, 0x10(r3)
	mr       r30, r3
	mr       r6, r31
	beq      lbl_80187680
	addi     r6, r6, 0x178

lbl_80187680:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0x17
	li       r5, 0x17
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lhz      r0, 0x2dc(r31)
	cmplwi   r0, 0
	bne      lbl_801876CC
	lwz      r3, 0x26c(r31)
	li       r4, 0x897
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80187718

lbl_801876CC:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_801876FC
	lwz      r3, 0x26c(r31)
	li       r4, 0x89d
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80187718

lbl_801876FC:
	lwz      r3, 0x26c(r31)
	li       r4, 0x898
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_80187718:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f30, 0xc(r1)
	addi     r3, r1, 0x14
	lfs      f0, lbl_80518C24@sda21(r2)
	lfs      f31, 8(r1)
	fadds    f30, f30, f0
	lfs      f29, 0x10(r1)
	bl       __ct__Q24Game13PelletViewArgFv
	addi     r0, r31, 0x138
	addi     r3, r2, lbl_80518CC8@sda21
	stw      r3, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f30, 0x1c(r1)
	stfs     f29, 0x20(r1)
	stw      r31, 0x28(r1)
	stw      r0, 0x24(r1)
	lhz      r0, 0x2dc(r31)
	cmplwi   r0, 0
	bne      lbl_8018778C
	lfs      f0, lbl_80518CD0@sda21(r2)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)
	b        lbl_8018779C

lbl_8018778C:
	lfs      f0, lbl_80518CD4@sda21(r2)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)

lbl_8018779C:
	lwz      r3, 0x250(r31)
	addi     r4, r1, 0x14
	bl       becomePellet__Q24Game10PelletViewFPQ24Game13PelletViewArg
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x14(r30)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	801877F8
 * Size:	0003F8
 */
void NaviPelletState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	lwz      r5, 0x250(r4)
	lwz      r0, 4(r5)
	cmplwi   r0, 0
	bne      lbl_80187848
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80187BD0

lbl_80187848:
	lwz      r0, 0x278(r31)
	cmplwi   r0, 0
	beq      lbl_80187BD0
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80187BD0
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused_soft__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80187A38
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_80187890
	cmpwi    r0, 3
	bne      lbl_80187894

lbl_80187890:
	li       r3, 1

lbl_80187894:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80187A38
	lwz      r3, 0x278(r31)
	cmplwi   r3, 0
	beq      lbl_80187A38
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_80187A38
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x25
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80187A38
	lwz      r3, naviMgr__4Game@sda21(r13)
	lhz      r0, 0x2dc(r31)
	lwz      r12, 0(r3)
	subfic   r4, r0, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	bl       getStateID__Q24Game4NaviFv
	mr       r29, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80187A38
	cmpwi    r29, 8
	beq      lbl_80187A38
	cmpwi    r29, 9
	beq      lbl_80187A38
	cmpwi    r29, 2
	beq      lbl_80187A38
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	bl       pmTogglePlayer__Q24Game15BaseGameSectionFv
	lhz      r0, 0x2dc(r28)
	cmplwi   r0, 0
	bne      lbl_80187950
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x188d
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80187984

lbl_80187950:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80187974
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x188f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80187984

lbl_80187974:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x188e
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80187984:
	lhz      r0, 0x2dc(r28)
	cmplwi   r0, 0
	bne      lbl_801879B0
	lwz      r3, 0x26c(r28)
	li       r4, 0x8a6
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_801879FC

lbl_801879B0:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_801879E0
	lwz      r3, 0x26c(r28)
	li       r4, 0x8a8
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_801879FC

lbl_801879E0:
	lwz      r3, 0x26c(r28)
	li       r4, 0x8a7
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_801879FC:
	lwz      r3, 0x274(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80187A38
	lwz      r3, 0x270(r28)
	mr       r4, r28
	li       r5, 3
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80187A38:
	lwz      r0, 0x14(r30)
	cmpwi    r0, 1
	beq      lbl_80187A4C
	cmpwi    r0, 0
	bne      lbl_80187B34

lbl_80187A4C:
	lwz      r3, 0x278(r31)
	cmplwi   r3, 0
	beq      lbl_80187B34
	lwz      r0, 0x1c(r3)
	andi.    r0, r0, 0x70f
	beq      lbl_80187B34
	lbz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_80187A84
	lfs      f0, lbl_80518C68@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x234(r31)
	bl       finishMotion__Q24Game8FakePikiFv
	b        lbl_80187B2C

lbl_80187A84:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_80187A94
	addi     r6, r31, 0x178

lbl_80187A94:
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r4, 0xe
	li       r5, 0xe
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	lhz      r0, 0x2dc(r31)
	cmplwi   r0, 0
	bne      lbl_80187AE0
	lwz      r3, 0x26c(r31)
	li       r4, 0x899
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80187B2C

lbl_80187AE0:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80187B10
	lwz      r3, 0x26c(r31)
	li       r4, 0x89e
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80187B2C

lbl_80187B10:
	lwz      r3, 0x26c(r31)
	li       r4, 0x89a
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_80187B2C:
	li       r0, 2
	stw      r0, 0x14(r30)

lbl_80187B34:
	lwz      r0, 0x14(r30)
	cmpwi    r0, 3
	bne      lbl_80187B78
	lwz      r3, 0x250(r31)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_80187B58
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80187B58:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80187B78:
	lwz      r3, 0x250(r31)
	lwz      r4, 4(r3)
	cmplwi   r4, 0
	bne      lbl_80187BAC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80187BD0

lbl_80187BAC:
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)

lbl_80187BD0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80187BF0
 * Size:	00012C
 */
void NaviPelletState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_80187CBC
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 1
	bne      lbl_80187C94
	lbz      r0, 0x1c4(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80187C7C
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80187C60
	lwz      r3, 0x26c(r4)
	li       r4, 0x89e
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80187C7C

lbl_80187C60:
	lwz      r3, 0x26c(r4)
	li       r4, 0x89a
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_80187C7C:
	lwz      r0, 0x14(r30)
	cmpwi    r0, 0
	beq      lbl_80187C8C
	b        lbl_80187C94

lbl_80187C8C:
	li       r0, 1
	stw      r0, 0x14(r30)

lbl_80187C94:
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0x3e8
	bne      lbl_80187D04
	lwz      r0, 0x14(r30)
	cmpwi    r0, 2
	beq      lbl_80187CB0
	b        lbl_80187D04

lbl_80187CB0:
	li       r0, 3
	stw      r0, 0x14(r30)
	b        lbl_80187D04

lbl_80187CBC:
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0x3e8
	bne      lbl_80187D04
	lwz      r0, 0x14(r30)
	cmpwi    r0, 1
	beq      lbl_80187D04
	bge      lbl_80187CE4
	cmpwi    r0, 0
	bge      lbl_80187CF0
	b        lbl_80187D04

lbl_80187CE4:
	cmpwi    r0, 3
	bge      lbl_80187D04
	b        lbl_80187CFC

lbl_80187CF0:
	li       r0, 1
	stw      r0, 0x14(r30)
	b        lbl_80187D04

lbl_80187CFC:
	li       r0, 3
	stw      r0, 0x14(r30)

lbl_80187D04:
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
 * Address:	80187D1C
 * Size:	000080
 */
void NaviPelletState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r3, 0x250(r4)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_80187D48
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80187D48:
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80187D9C
 * Size:	000048
 */
void NaviDemo_UfoState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0x1e
	li       r6, 0
	stw      r0, 0x14(r1)
	li       r0, 0
	li       r7, 0
	sth      r0, 0x10(r3)
	mr       r3, r4
	li       r4, 0x1e
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
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
 * Address:	80187DE4
 * Size:	0000B0
 */
void NaviDemo_UfoState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lhz      r0, 0x10(r3)
	cmpwi    r0, 1
	beq      lbl_80187E4C
	bge      lbl_80187E1C
	cmpwi    r0, 0
	bge      lbl_80187E28
	b        lbl_80187E7C

lbl_80187E1C:
	cmpwi    r0, 3
	bge      lbl_80187E7C
	b        lbl_80187E64

lbl_80187E28:
	bl       execGoto__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80187E7C
	li       r0, 1
	mr       r3, r30
	sth      r0, 0x10(r30)
	mr       r4, r31
	bl       initSuck__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi
	b        lbl_80187E7C

lbl_80187E4C:
	bl       execSuck__Q24Game17NaviDemo_UfoStateFPQ24Game4Navi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80187E7C
	li       r0, 2
	sth      r0, 0x10(r30)
	b        lbl_80187E7C

lbl_80187E64:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80187E7C:
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
 * Address:	80187E94
 * Size:	000004
 */
void NaviDemo_UfoState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	80187E98
 * Size:	00017C
 */
void NaviDemo_UfoState::execGoto(Game::Navi*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	lwz      r5, mgr__Q24Game9ItemOnyon@sda21(r13)
	mr       r31, r4
	addi     r3, r1, 0x14
	lwz      r4, 0xb0(r5)
	lwz      r12, 0(r4)
	lwz      r12, 0x198(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x18(r1)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x10(r1)
	lfs      f0, 8(r1)
	fsubs    f6, f29, f1
	lfs      f1, 0xc(r1)
	fsubs    f4, f31, f0
	lfs      f0, lbl_80518CD8@sda21(r2)
	fsubs    f5, f30, f1
	fmuls    f3, f6, f6
	fmuls    f2, f4, f4
	fadds    f1, f2, f3
	fcmpo    cr0, f1, f0
	bge      lbl_80187F58
	lfs      f0, lbl_80518BE0@sda21(r2)
	li       r3, 1
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	b        lbl_80187FE8

lbl_80187F58:
	fmuls    f7, f5, f5
	lfs      f1, lbl_80518BE0@sda21(r2)
	fadds    f0, f2, f7
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80187F8C
	fmadds   f0, f4, f4, f7
	fadds    f2, f3, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80187F90
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80187F90

lbl_80187F8C:
	fmr      f2, f1

lbl_80187F90:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80187FB0
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0

lbl_80187FB0:
	lwz      r4, naviMgr__4Game@sda21(r13)
	li       r3, 0
	lfs      f3, lbl_80518C04@sda21(r2)
	lwz      r4, 0xc8(r4)
	lfs      f0, 0x3b8(r4)
	fmuls    f2, f4, f0
	fmuls    f1, f5, f0
	fmuls    f0, f6, f0
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x1e4(r31)
	stfs     f1, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_80187FE8:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80188014
 * Size:	000118
 */
void NaviDemo_UfoState::initSuck(Game::Navi*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r5, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r12, 8(r12)
	lwz      r31, 0xb0(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 0x194(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x24(r1)
	lfs      f0, 0x18(r1)
	lfs      f3, 0x28(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x1c(r1)
	lfs      f1, 0x20(r1)
	lfs      f0, 0x14(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801880B8
	ble      lbl_801880BC
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801880BC

lbl_801880B8:
	fmr      f1, f0

lbl_801880BC:
	stfs     f1, 0x18(r29)
	mr       r4, r30
	lfs      f2, lbl_80518BE0@sda21(r2)
	addi     r3, r1, 8
	lfs      f0, lbl_80518C48@sda21(r2)
	stfs     f2, 0x14(r29)
	stfs     f2, 0x204(r30)
	stfs     f0, 0x1c(r29)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f1, 0x24(r29)
	lfs      f1, 0xc(r1)
	stfs     f1, 0x28(r29)
	lfs      f1, 0x10(r1)
	stfs     f1, 0x2c(r29)
	stfs     f0, 0x20(r29)
	stfs     f0, 0x30(r29)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018812C
 * Size:	000120
 */
void NaviDemo_UfoState::execSuck(Game::Navi*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	addi     r3, r1, 8
	lwz      r5, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r4, 0xb0(r5)
	lwz      r12, 0(r4)
	lwz      r12, 0x194(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x10(r1)
	mr       r3, r31
	lfs      f5, 0x2c(r30)
	addi     r4, r1, 0x14
	lfs      f0, 0xc(r1)
	li       r5, 0
	lfs      f6, 0x28(r30)
	fsubs    f2, f1, f5
	lfs      f4, 0x20(r30)
	fsubs    f3, f0, f6
	lfs      f1, 8(r1)
	lfs      f7, 0x24(r30)
	fmuls    f0, f2, f4
	fsubs    f2, f1, f7
	fmuls    f1, f3, f4
	fadds    f0, f5, f0
	fmuls    f2, f2, f4
	fadds    f1, f6, f1
	stfs     f0, 0x1c(r1)
	fadds    f0, f7, f2
	stfs     f1, 0x18(r1)
	stfs     f0, 0x14(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f2, lbl_80518CDC@sda21(r2)
	lfs      f1, 0x20(r30)
	lfs      f4, lbl_80518C48@sda21(r2)
	lfs      f0, 0x1c(r30)
	fnmsubs  f1, f2, f1, f4
	lfs      f2, lbl_80518CE0@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x168(r31)
	stfs     f0, 0x16c(r31)
	stfs     f0, 0x170(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f3, 0x30(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x18(r30)
	fmuls    f1, f3, f1
	lfs      f3, 0x20(r30)
	fdivs    f0, f1, f0
	fadds    f0, f3, f0
	stfs     f0, 0x20(r30)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x30(r30)
	lfs      f1, 0x54(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x30(r30)
	lfs      f0, 0x20(r30)
	fcmpo    cr0, f0, f4
	cror     2, 1, 2
	mfcr     r0
	lwz      r31, 0x2c(r1)
	rlwinm   r3, r0, 3, 0x1f, 0x1f
	lwz      r0, 0x34(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8018824C
 * Size:	00058C
 */
void NaviDemo_HoleInState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r30, r3
	li       r0, 0
	mr       r31, r4
	sth      r0, 0x10(r3)
	mr       r3, r31
	li       r4, 0x1e
	lwz      r12, 0(r31)
	li       r5, 0x1e
	li       r6, 0
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r4, r31
	stw      r0, 0x14(r30)
	addi     r3, r1, 0x2c
	lfs      f31, lbl_80518CE4@sda21(r2)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game8ItemCave@sda21(r13)
	lfs      f29, 0x2c(r1)
	cmplwi   r3, 0
	lfs      f28, 0x30(r1)
	lfs      f27, 0x34(r1)
	beq      lbl_80188300
	addi     r3, r3, 0x30

lbl_80188300:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x54(r1)
	cmplwi   r0, 0
	stw      r4, 0x48(r1)
	stw      r0, 0x4c(r1)
	stw      r3, 0x50(r1)
	bne      lbl_8018833C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_801883C4

lbl_8018833C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_801883A8

lbl_80188354:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801883C4
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)

lbl_801883A8:
	lwz      r12, 0x48(r1)
	addi     r3, r1, 0x48
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80188354

lbl_801883C4:
	lfs      f30, lbl_80518BE0@sda21(r2)
	b        lbl_80188510

lbl_801883CC:
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 0x20
	mr       r29, r0
	lwz      r12, 0(r29)
	mr       r4, r29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x24(r1)
	lfs      f1, 0x20(r1)
	fsubs    f2, f0, f28
	lfs      f0, 0x28(r1)
	fsubs    f1, f1, f29
	fsubs    f0, f0, f27
	fmuls    f2, f2, f2
	fmuls    f3, f0, f0
	fmadds   f0, f1, f1, f2
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f30
	ble      lbl_80188440
	ble      lbl_80188444
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_80188444

lbl_80188440:
	fmr      f0, f30

lbl_80188444:
	fcmpo    cr0, f0, f31
	bge      lbl_80188454
	fmr      f31, f0
	stw      r29, 0x14(r30)

lbl_80188454:
	lwz      r0, 0x54(r1)
	cmplwi   r0, 0
	bne      lbl_80188480
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_80188510

lbl_80188480:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)
	b        lbl_801884F4

lbl_801884A0:
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80188510
	lwz      r3, 0x50(r1)
	lwz      r4, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x4c(r1)

lbl_801884F4:
	lwz      r12, 0x48(r1)
	addi     r3, r1, 0x48
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801884A0

lbl_80188510:
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r1)
	cmplw    r4, r3
	bne      lbl_801883CC
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game8ItemHole@sda21(r13)
	lfs      f27, 0x14(r1)
	cmplwi   r3, 0
	lfs      f28, 0x18(r1)
	lfs      f29, 0x1c(r1)
	beq      lbl_80188564
	addi     r3, r3, 0x30

lbl_80188564:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x44(r1)
	cmplwi   r0, 0
	stw      r4, 0x38(r1)
	stw      r0, 0x3c(r1)
	stw      r3, 0x40(r1)
	bne      lbl_801885A0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80188628

lbl_801885A0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_8018860C

lbl_801885B8:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80188628
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_8018860C:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801885B8

lbl_80188628:
	lfs      f30, lbl_80518BE0@sda21(r2)
	b        lbl_80188774

lbl_80188630:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 8
	mr       r29, r0
	lwz      r12, 0(r29)
	mr       r4, r29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f1, 8(r1)
	fsubs    f2, f0, f28
	lfs      f0, 0x10(r1)
	fsubs    f1, f1, f27
	fsubs    f0, f0, f29
	fmuls    f2, f2, f2
	fmuls    f3, f0, f0
	fmadds   f0, f1, f1, f2
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f30
	ble      lbl_801886A4
	ble      lbl_801886A8
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_801886A8

lbl_801886A4:
	fmr      f0, f30

lbl_801886A8:
	fcmpo    cr0, f0, f31
	bge      lbl_801886B8
	fmr      f31, f0
	stw      r29, 0x14(r30)

lbl_801886B8:
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_801886E4
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80188774

lbl_801886E4:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80188758

lbl_80188704:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80188774
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80188758:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80188704

lbl_80188774:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_80188630
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r0, 0xc4(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801887D8
 * Size:	0000A8
 */
void NaviDemo_HoleInState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lhz      r0, 0x10(r3)
	cmpwi    r0, 1
	beq      lbl_80188840
	bge      lbl_80188810
	cmpwi    r0, 0
	bge      lbl_8018881C
	b        lbl_80188868

lbl_80188810:
	cmpwi    r0, 3
	bge      lbl_80188868
	b        lbl_80188864

lbl_8018881C:
	bl       execGoto__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80188868
	li       r0, 1
	mr       r3, r30
	sth      r0, 0x10(r30)
	mr       r4, r31
	bl       initHesitate__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
	b        lbl_80188868

lbl_80188840:
	bl       execHesitate__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80188868
	li       r0, 2
	mr       r3, r30
	sth      r0, 0x10(r30)
	mr       r4, r31
	bl       initFall__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi
	b        lbl_80188868

lbl_80188864:
	bl       execFall__Q24Game20NaviDemo_HoleInStateFPQ24Game4Navi

lbl_80188868:
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
 * Address:	80188880
 * Size:	00000C
 */
void NaviDemo_HoleInState::onKeyEvent(Game::Navi*, SysShape::KeyEvent const&)
{
	// Generated from stb r0, 0x12(r3)
	_12 = 1;
}

/*
 * --INFO--
 * Address:	8018888C
 * Size:	000004
 */
void NaviDemo_HoleInState::cleanup(Game::Navi*) { }

/*
 * --INFO--
 * Address:	80188890
 * Size:	000178
 */
void NaviDemo_HoleInState::execGoto(Game::Navi*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r4
	lwz      r4, 0x14(r3)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x18(r1)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x10(r1)
	lfs      f0, 8(r1)
	fsubs    f6, f29, f1
	lfs      f1, 0xc(r1)
	fsubs    f4, f31, f0
	lfs      f0, lbl_80518CE8@sda21(r2)
	fsubs    f5, f30, f1
	fmuls    f3, f6, f6
	fmuls    f2, f4, f4
	fadds    f1, f2, f3
	fcmpo    cr0, f1, f0
	bge      lbl_8018894C
	lfs      f0, lbl_80518BE0@sda21(r2)
	li       r3, 1
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)
	b        lbl_801889DC

lbl_8018894C:
	fmuls    f7, f5, f5
	lfs      f1, lbl_80518BE0@sda21(r2)
	fadds    f0, f2, f7
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80188980
	fmadds   f0, f4, f4, f7
	fadds    f2, f3, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80188984
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80188984

lbl_80188980:
	fmr      f2, f1

lbl_80188984:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801889A4
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0

lbl_801889A4:
	lwz      r4, naviMgr__4Game@sda21(r13)
	li       r3, 0
	lfs      f3, lbl_80518C04@sda21(r2)
	lwz      r4, 0xc8(r4)
	lfs      f0, 0x3b8(r4)
	fmuls    f2, f4, f0
	fmuls    f1, f5, f0
	fmuls    f0, f6, f0
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x1e4(r31)
	stfs     f1, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_801889DC:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80188A08
 * Size:	000060
 */
void NaviDemo_HoleInState::initHesitate(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	mr       r6, r4
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80188A2C
	addi     r6, r6, 0x178

lbl_80188A2C:
	lwz      r12, 0(r4)
	mr       r3, r4
	li       r4, 0x35
	li       r5, 0x35
	lwz      r12, 0x208(r12)
	li       r7, 0
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x12(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80188A68
 * Size:	00016C
 */
void NaviDemo_HoleInState::execHesitate(Game::Navi*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	lbz      r0, 0x12(r3)
	mr       r31, r4
	cmplwi   r0, 0
	beq      lbl_80188B88
	lwz      r4, 0x14(r3)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x18(r1)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 0x10(r1)
	fsubs    f3, f30, f0
	lfs      f1, 8(r1)
	fsubs    f4, f29, f2
	lfs      f0, lbl_80518BE0@sda21(r2)
	fsubs    f2, f31, f1
	fmuls    f1, f3, f3
	fmuls    f3, f4, f4
	fmadds   f1, f2, f2, f1
	fadds    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80188B20
	ble      lbl_80188B24
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80188B24

lbl_80188B20:
	fmr      f1, f0

lbl_80188B24:
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80188B40
	lfs      f0, lbl_80518C48@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f4, f4, f0

lbl_80188B40:
	lfs      f1, lbl_80518C3C@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_80518CEC@sda21(r2)
	li       r4, 0
	fmuls    f2, f2, f1
	fmuls    f4, f4, f1
	stfs     f2, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f4, 0x208(r31)
	stfs     f2, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f4, 0x1ec(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x1f0(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80188BA8

lbl_80188B88:
	lfs      f0, lbl_80518BE0@sda21(r2)
	li       r3, 0
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_80188BA8:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80188BD4
 * Size:	000004
 */
void NaviDemo_HoleInState::initFall(Game::Navi*) { }

/*
 * --INFO--
 * Address:	80188BD8
 * Size:	000008
 */
u32 NaviDemo_HoleInState::execFall(Game::Navi*) { return 0x0; }

/*
 * --INFO--
 * Address:	80188BE0
 * Size:	000144
 */
void NaviPressedState::init(Game::Navi*, Game::StateArg*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f2, lbl_80518CD4@sda21(r2)
	stw      r0, 0x44(r1)
	lfs      f1, lbl_80518CF0@sda21(r2)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	mr       r3, r31
	lfs      f0, 0x168(r4)
	li       r4, 0
	stfs     f0, 0x14(r30)
	lfs      f0, lbl_80518C3C@sda21(r2)
	lfs      f3, 0x16c(r31)
	stfs     f3, 0x18(r30)
	lfs      f3, 0x170(r31)
	stfs     f3, 0x1c(r30)
	stfs     f2, 0x168(r31)
	stfs     f1, 0x16c(r31)
	stfs     f2, 0x170(r31)
	stfs     f0, 0x10(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x1e0(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x1fc(r31)
	mr       r4, r31
	lfs      f1, lbl_80518CF4@sda21(r2)
	addi     r3, r1, 8
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f1, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f0, 0x20(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	addi     r3, r31, 0x138
	lfs      f0, lbl_80518C3C@sda21(r2)
	addi     r4, r31, 0x168
	lfs      f3, 8(r1)
	addi     r5, r1, 0x20
	lfs      f1, 0x10(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x18(r1)
	addi     r6, r1, 0x14
	stfs     f3, 0x14(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x18(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	li       r4, 0x80f
	stw      r0, 0x20(r30)
	li       r5, 0
	lwz      r3, 0x26c(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	bl       PSMGetDamageD__Fv
	cmplwi   r3, 0
	beq      lbl_80188D0C
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80188D0C:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80188D24
 * Size:	000270
 */
void NaviPressedState::exec(Game::Navi*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r5, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x1f0(r5)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80188D6C
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80188F7C

lbl_80188D6C:
	lfs      f2, 0x1fc(r31)
	addi     r3, r1, 8
	lfs      f1, lbl_80518CF4@sda21(r2)
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f1, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	lfs      f5, lbl_80518BE0@sda21(r2)
	stfs     f2, 0x14(r1)
	lwz      r3, sys@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stfs     f5, 0x20(r1)
	lfs      f1, 0x10(r30)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x10(r30)
	lwz      r0, 0x20(r30)
	cmpwi    r0, 1
	beq      lbl_80188E34
	bge      lbl_80188F60
	cmpwi    r0, 0
	bge      lbl_80188DE8
	b        lbl_80188F60

lbl_80188DE8:
	lfs      f1, 0x18(r1)
	addi     r3, r31, 0x138
	lfs      f0, lbl_80518C3C@sda21(r2)
	addi     r4, r31, 0x168
	addi     r5, r1, 0x20
	addi     r6, r1, 0x14
	fadds    f0, f1, f0
	stfs     f0, 0x18(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lfs      f1, 0x10(r30)
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80188F60
	li       r0, 1
	lfs      f0, lbl_80518CF8@sda21(r2)
	stw      r0, 0x20(r30)
	stfs     f0, 0x10(r30)
	b        lbl_80188F60

lbl_80188E34:
	lfs      f6, 0x10(r30)
	lfs      f1, lbl_80518CF8@sda21(r2)
	lfs      f0, lbl_80518CFC@sda21(r2)
	fdivs    f2, f6, f1
	lfs      f4, lbl_80518C48@sda21(r2)
	lfs      f3, lbl_80518C98@sda21(r2)
	lfs      f1, lbl_80518C04@sda21(r2)
	fsubs    f7, f4, f2
	fmuls    f2, f0, f6
	fsubs    f0, f4, f7
	fmuls    f2, f3, f2
	fmuls    f1, f1, f0
	fcmpo    cr0, f2, f5
	bge      lbl_80188E98
	lfs      f0, lbl_80518BEC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80188EBC

lbl_80188E98:
	lfs      f0, lbl_80518BE8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80188EBC:
	fmuls    f1, f1, f0
	lfs      f0, lbl_80518BE0@sda21(r2)
	fadds    f7, f7, f1
	fcmpo    cr0, f7, f0
	bge      lbl_80188ED4
	fmr      f7, f0

lbl_80188ED4:
	lfs      f0, lbl_80518C48@sda21(r2)
	addi     r3, r31, 0x138
	lfs      f3, lbl_80518CD4@sda21(r2)
	addi     r4, r31, 0x168
	fsubs    f5, f0, f7
	lfs      f1, lbl_80518CF0@sda21(r2)
	lfs      f4, 0x14(r30)
	addi     r5, r1, 0x20
	lfs      f2, 0x18(r30)
	addi     r6, r1, 0x14
	fmuls    f3, f3, f5
	lfs      f0, lbl_80518C3C@sda21(r2)
	fmuls    f1, f1, f5
	fmadds   f3, f7, f4, f3
	fmadds   f1, f7, f2, f1
	stfs     f3, 0x168(r31)
	stfs     f1, 0x16c(r31)
	stfs     f3, 0x170(r31)
	lfs      f1, 0x18(r1)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lfs      f1, 0x10(r30)
	lfs      f0, lbl_80518BE0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80188F60
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80188F60:
	lfs      f0, lbl_80518BE0@sda21(r2)
	stfs     f0, 0x200(r31)
	stfs     f0, 0x204(r31)
	stfs     f0, 0x208(r31)
	stfs     f0, 0x1e4(r31)
	stfs     f0, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_80188F7C:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80188F94
 * Size:	00007C
 */
void NaviPressedState::cleanup(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 1
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0x1e0(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r30)
	stfs     f0, 0x168(r31)
	lfs      f0, 0x18(r30)
	stfs     f0, 0x16c(r31)
	lfs      f0, 0x1c(r30)
	stfs     f0, 0x170(r31)
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
 * Address:	80189010
 * Size:	000008
 */
u32 NaviPressedState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80189018
 * Size:	000008
 */
u32 NaviPressedState::invincible(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80189020
 * Size:	000008
 */
u32 NaviPressedState::vsUsableY(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80189028
 * Size:	000008
 */
bool NaviState::callable(void) { return false; }

/*
 * --INFO--
 * Address:	80189030
 * Size:	000008
 */
bool NaviState::pressable(void) { return true; }

/*
 * --INFO--
 * Address:	80189038
 * Size:	000008
 */
u32 NaviPelletState::callable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80189040
 * Size:	000008
 */
u32 NaviDeadState::invincible(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80189048
 * Size:	000008
 */
u32 NaviDeadState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80189050
 * Size:	000008
 */
u32 NaviDeadState::vsUsableY(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80189058
 * Size:	000008
 */
u32 NaviDamagedState::invincible(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80189060
 * Size:	000008
 */
u32 NaviDamagedState::vsUsableY(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80189068
 * Size:	000008
 */
u32 NaviAbsorbState::vsUsableY(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80189070
 * Size:	000008
 */
u32 NaviAbsorbState::invincible(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80189078
 * Size:	000008
 */
u32 NaviAbsorbState::pressable(void) { return 0x0; }

} // namespace Game

namespace og {

namespace Screen {

/*
 * --INFO--
 * Address:	80189080
 * Size:	000008
 */
u32 DispMemberContena::getSize(void) { return 0x38; }

/*
 * --INFO--
 * Address:	80189088
 * Size:	00000C
 */
void DispMemberContena::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80189094
 * Size:	000014
 */
void DispMemberContena::getMemberID(void)
{
	/*
lis      r4, 0x54454E41@ha
lis      r3, 0x00434F4E@ha
addi     r4, r4, 0x54454E41@l
addi     r3, r3, 0x00434F4E@l
blr
	*/
}

/*
 * --INFO--
 * Address:	801890A8
 * Size:	000008
 */
u32 DispMemberUfoMenu::getSize(void) { return 0x10; }

/*
 * --INFO--
 * Address:	801890B0
 * Size:	00000C
 */
void DispMemberUfoMenu::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	801890BC
 * Size:	000014
 */
void DispMemberUfoMenu::getMemberID(void)
{
	/*
lis      r4, 0x4D454E55@ha
lis      r3, 0x0055464F@ha
addi     r4, r4, 0x4D454E55@l
addi     r3, r3, 0x0055464F@l
blr
	*/
}

/*
 * --INFO--
 * Address:	801890D0
 * Size:	000008
 */
u32 DispMemberUfoGroup::getSize(void) { return 0x8C; }

/*
 * --INFO--
 * Address:	801890D8
 * Size:	00000C
 */
void DispMemberUfoGroup::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	801890E4
 * Size:	000014
 */
void DispMemberUfoGroup::getMemberID(void)
{
	/*
lis      r4, 0x5F475250@ha
lis      r3, 0x0055464F@ha
addi     r4, r4, 0x5F475250@l
addi     r3, r3, 0x0055464F@l
blr
	*/
}

/*
 * --INFO--
 * Address:	801890F8
 * Size:	000048
 */
void DispMemberUfoGroup::doSetSubMemberAll(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
addi     r4, r31, 8
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
mr       r3, r31
addi     r4, r31, 0x18
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
mr       r3, r31
addi     r4, r31, 0x50
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

namespace Game {

} // namespace Game

} // namespace Screen

/*
 * --INFO--
 * Address:	80189140
 * Size:	000008
 */
u32 NaviContainerState::invincible(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80189148
 * Size:	000008
 */
u32 NaviSaraiExitState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80189150
 * Size:	000008
 */
u32 NaviSaraiState::pressable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80189158
 * Size:	000008
 */
u32 NaviKokeDamageState::pressable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80189160
 * Size:	000008
 */
u32 NaviKokeDamageState::vsUsableY(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80189168
 * Size:	000008
 */
u32 NaviFlickState::pressable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80189170
 * Size:	000008
 */
u32 NaviFlickState::vsUsableY(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80189178
 * Size:	000008
 */
u32 NaviFallMeckState::pressable(void) { return 0x0; }

} // namespace og

namespace efx {

/*
 * --INFO--
 * Address:	80189180
 * Size:	00000C
 */
void ArgDopingSmoke::getName(void)
{
	/*
	lis      r3, lbl_8047EBD8@ha
	addi     r3, r3, lbl_8047EBD8@l
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	8018918C
 * Size:	000008
 */
u32 NaviDopeState::invincible(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80189194
 * Size:	000008
 */
u32 NaviNukuState::invincible(void) { return 0x1; }

/*
 * --INFO--
 * Address:	8018919C
 * Size:	000008
 */
bool NaviFollowState::needYChangeMotion(void) { return true; }

/*
 * --INFO--
 * Address:	801891A4
 * Size:	000008
 */
u32 NaviWalkState::callable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	801891AC
 * Size:	000008
 */
u32 NaviWalkState::needYChangeMotion(void) { return 0x1; }

/*
 * --INFO--
 * Address:	801891B4
 * Size:	000008
 */
u32 NaviStuckState::vsUsableY(void) { return 0x0; }

} // namespace efx

/*
 * --INFO--
 * Address:	801891BC
 * Size:	000004
 */
void resume__Q24Game22FSMState<Game::Navi> FPQ24Game4Navi(void) { }

/*
 * --INFO--
 * Address:	801891C0
 * Size:	000004
 */
void restart__Q24Game22FSMState<Game::Navi> FPQ24Game4Navi(void) { }

/*
 * --INFO--
 * Address:	801891C4
 * Size:	000064
 */
void create__Q24Game26StateMachine<Game::Navi> Fi(void)
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
 * Address:	80189228
 * Size:	000030
 */
void Delegate1<Game::NaviPunchState, CollPart*>::invoke(CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	addi     r12, r5, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80189258
 * Size:	000030
 */
void Delegate<Game::NaviThrowWaitState>::invoke()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r12, r4, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80189288
 * Size:	00001C
 */
void getCurrID__Q24Game26StateMachine<Game::Navi> FPQ24Game4Navi(void)
{
	/*
	lwz      r3, 0x274(r4)
	cmplwi   r3, 0
	beq      lbl_8018929C
	lwz      r3, 4(r3)
	blr

lbl_8018929C:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	801892A4
 * Size:	000084
 */
void registerState__Q24Game26StateMachine<Game::Navi> FPQ24Game22FSMState<Game::Navi>(void)
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

/*
 * --INFO--
 * Address:	80189328
 * Size:	000028
 */
void __sinit_naviState_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B2D40@ha
	stw      r0, lbl_805159B8@sda21(r13)
	stfsu    f0, lbl_804B2D40@l(r3)
	stfs     f0, lbl_805159BC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80189350
 * Size:	000014
 */
void @60 @4 @Game::NaviThrowWaitState::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -60
	b        onKeyEvent__Q24Game18NaviThrowWaitStateFRCQ28SysShape8KeyEvent
	*/
}

/*
 * --INFO--
 * Address:	80189364
 * Size:	000014
 */
void @32 @4 @Game::NaviThrowState::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -32
	b        onKeyEvent__Q24Game14NaviThrowStateFRCQ28SysShape8KeyEvent
	*/
}
