.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_pikiState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047EBE8, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047EBE8
.balign 4
.obj lbl_8047EBF4, local
	.asciz "pikiState"
.endobj lbl_8047EBF4
.balign 4
.obj lbl_8047EC00, local
	.asciz "DEMOWAIT"
.endobj lbl_8047EC00
.balign 4
.obj lbl_8047EC0C, local
	.asciz "WATERHANGED"
.endobj lbl_8047EC0C
.balign 4
.obj lbl_8047EC18, local
	.asciz "KOKEDAMAGE"
.endobj lbl_8047EC18
.balign 4
.obj lbl_8047EC24, local
	.asciz "SWALLOWED"
.endobj lbl_8047EC24
.balign 4
.obj lbl_8047EC30, local
	.asciz "AUTONUKI"
.endobj lbl_8047EC30
.balign 4
.obj lbl_8047EC3C, local
	.asciz "DENKI_DYING"
.endobj lbl_8047EC3C
.balign 4
.obj lbl_8047EC48, local
	.asciz "FALLMECK"
.endobj lbl_8047EC48
.balign 4
.obj lbl_8047EC54, local
	.asciz "FOUNTAINON"
.endobj lbl_8047EC54
.balign 4
.obj lbl_8047EC60, local
	.asciz "pikiState.cpp"
.endobj lbl_8047EC60
.balign 4
.obj lbl_8047EC70, local
	.asciz "*Transit(%d)(%d)\n(%s)=>(%s)\n"
.endobj lbl_8047EC70
.balign 4
.obj lbl_8047EC90, local # Shift-JIS
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2082
	.4byte 0xBE82DF82
	.4byte 0xBE82E681
	.4byte 0x600A0000
.endobj lbl_8047EC90
.balign 4
.obj lbl_8047ECA8, local
	.asciz "need HoleinStateArg !\n"
.endobj lbl_8047ECA8
.balign 4
.obj lbl_8047ECC0, local
	.asciz "need FountainonStateArg !\n"
.endobj lbl_8047ECC0
.balign 4
.obj lbl_8047ECDC, local
	.asciz "P2Assert"
.endobj lbl_8047ECDC
.balign 4
.obj lbl_8047ECE8, local
	.asciz "getNavi():pullW"
.endobj lbl_8047ECE8
.balign 4
.obj lbl_8047ECF8, local
	.asciz "getNavi():Pull"
.endobj lbl_8047ECF8
.balign 4
.obj lbl_8047ED08, local
	.asciz "x16_hiba"
.endobj lbl_8047ED08
.balign 4
.obj lbl_8047ED14, local
	.asciz "s09_holein"
.endobj lbl_8047ED14
.balign 4
.obj lbl_8047ED20, local
	.asciz "not teki (%s)!"
.endobj lbl_8047ED20
.balign 4
.obj lbl_8047ED30, local
	.asciz "Creature"
.endobj lbl_8047ED30
.balign 4
.obj lbl_8047ED3C, local
	.asciz "flick:init:erase\n"
.endobj lbl_8047ED3C
.balign 4
.obj lbl_8047ED50, local
	.asciz "flick:exec:erase\n"
.endobj lbl_8047ED50
.balign 4
.obj lbl_8047ED64, local
	.asciz "flick needs PikiBlowInitArg !\n"
.endobj lbl_8047ED64
.balign 4
.obj lbl_8047ED84, local
	.4byte 0x00000033 # value
	.float 0.33       # chance
	.4byte 0x00000032 # value
	.float 0.33       # chance
	.4byte 0x00000034 # value
	.float 0.33       # chance
.endobj lbl_8047ED84
.obj lbl_8047ED9C, local
	.4byte 0x00000033 # value
	.float 0.33       # chance
	.4byte 0x00000032 # value
	.float 0.33       # chance
	.4byte 0x00000034 # value
	.float 0.33       # chance
.endobj lbl_8047ED9C
.obj lbl_8047EDB4, local
	.4byte 0x00000035 # value
	.float 0.5        # chance
	.4byte 0x00000036 # value
	.float 0.5        # chance
.endobj lbl_8047EDB4
.obj lbl_8047EDC4, local
	.4byte 0x0000000C # value
	.float 0.5        # chance
	.4byte 0x00000036 # value
	.float 0.5        # chance
.endobj lbl_8047EDC4
.balign 4
.obj lbl_8047EDD4, local # Shift-JIS
	.4byte 0x72617043
	.4byte 0x6E742082
	.4byte 0xCC8E6782
	.4byte 0xA295FB82
	.4byte 0xAA82E682
	.4byte 0xAD82C882
	.4byte 0xCC82C593
	.4byte 0x808C8B92
	.4byte 0x86212028
	.4byte 0x52415054
	.4byte 0x55524529
	.2byte 0x0A00
.endobj lbl_8047EDD4
.balign 4
.obj lbl_8047EE04, local
	.asciz "g34_yellow_extract"
.endobj lbl_8047EE04
.balign 4
.obj lbl_8047EE18, local
	.asciz "ActCropArg"
.endobj lbl_8047EE18
.balign 4
.obj lbl_8047EE24, local
	.asciz "ItemPikiHead::InitArg"
.endobj lbl_8047EE24
.balign 4
.obj lbl_8047EE3C, local
	.asciz "ItemInitArg"
.endobj lbl_8047EE3C
.balign 4
.obj lbl_8047EE48, local
	.asciz "PikiKillArg"
.endobj lbl_8047EE48
.balign 4
.obj lbl_8047EE54, local
	.asciz "CreatureKillArg"
.endobj lbl_8047EE54
.balign 4
.obj lbl_8047EE64, local
	.asciz "ArgScale"
.endobj lbl_8047EE64
.balign 4
.obj lbl_8047EE70, local
	.asciz "CreatureActionArg"
.endobj lbl_8047EE70
.balign 4
.obj lbl_8047EE84, local
	.asciz "ActionArg"
.endobj lbl_8047EE84

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804B37DC, local
	.4byte .L_80191690
	.4byte .L_80191704
	.4byte .L_80191778
	.4byte .L_80191840
	.4byte .L_801917DC
	.4byte .L_8019187C
	.4byte .L_801918B8
	.4byte .L_801918F4
	.4byte .L_80191930
.endobj lbl_804B37DC
.obj __vt__Q24Game15PikiEscapeState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PikiEscapeStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game15PikiEscapeStateFPQ24Game4Piki
	.4byte cleanup__Q24Game15PikiEscapeStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game15PikiEscapeStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game15PikiEscapeStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game15PikiEscapeState
.obj __vt__Q24Game15PikiGrowupState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PikiGrowupStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game15PikiGrowupStateFPQ24Game4Piki
	.4byte cleanup__Q24Game15PikiGrowupStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game15PikiGrowupStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game15PikiGrowupState
.obj __vt__Q24Game15PikiAbsorbState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PikiAbsorbStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game15PikiAbsorbStateFPQ24Game4Piki
	.4byte cleanup__Q24Game15PikiAbsorbStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game15PikiAbsorbStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game15PikiAbsorbState
.obj __vt__Q24Game16PikiEmotionState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game16PikiEmotionStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game16PikiEmotionStateFPQ24Game4Piki
	.4byte cleanup__Q24Game16PikiEmotionStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game16PikiEmotionStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game16PikiEmotionStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game16PikiEmotionState
.obj __vt__Q24Game14PikiDrownState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game14PikiDrownStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game14PikiDrownStateFPQ24Game4Piki
	.4byte cleanup__Q24Game14PikiDrownStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game14PikiDrownStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game14PikiDrownStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game14PikiDrownStateFi
	.4byte onFlute__Q24Game14PikiDrownStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game14PikiDrownState
.obj __vt__Q24Game13PikiKokeState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13PikiKokeStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game13PikiKokeStateFPQ24Game4Piki
	.4byte cleanup__Q24Game13PikiKokeStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game13PikiKokeStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game13PikiKokeStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game13PikiKokeStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game13PikiKokeState
.obj __vt__Q24Game19PikiKokeDamageState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game19PikiKokeDamageStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game19PikiKokeDamageStateFPQ24Game4Piki
	.4byte cleanup__Q24Game19PikiKokeDamageStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game19PikiKokeDamageStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game19PikiKokeDamageStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game19PikiKokeDamageStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game19PikiKokeDamageState
.obj __vt__Q24Game13PikiBlowState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13PikiBlowStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game13PikiBlowStateFPQ24Game4Piki
	.4byte cleanup__Q24Game13PikiBlowStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game13PikiBlowStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game13PikiBlowStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game13PikiBlowStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game13PikiBlowStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game13PikiBlowStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game13PikiBlowState
.obj __vt__Q24Game14PikiFlickState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game14PikiFlickStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game14PikiFlickStateFPQ24Game4Piki
	.4byte cleanup__Q24Game14PikiFlickStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game14PikiFlickStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game14PikiFlickStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
	.4byte onKeyEvent__Q24Game14PikiFlickStateFRCQ28SysShape8KeyEvent
	.4byte 0
	.4byte 0
	.4byte "@48@4@onKeyEvent__Q24Game14PikiFlickStateFRCQ28SysShape8KeyEvent"
.endobj __vt__Q24Game14PikiFlickState
.obj __vt__Q26PikiAI10ActCropArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q26PikiAI10ActCropArgFv
.endobj __vt__Q26PikiAI10ActCropArg
.obj __vt__Q24Game15PikiFlyingState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game15PikiFlyingStateFPQ24Game4Piki
	.4byte cleanup__Q24Game15PikiFlyingStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game15PikiFlyingStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game15PikiFlyingStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
	.4byte stopEffect__Q24Game15PikiFlyingStateFv
	.4byte restartEffect__Q24Game15PikiFlyingStateFv
.endobj __vt__Q24Game15PikiFlyingState
.obj __vt__Q24Game16PikiSuikomiState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game16PikiSuikomiStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game16PikiSuikomiStateFPQ24Game4Piki
	.4byte cleanup__Q24Game16PikiSuikomiStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game16PikiSuikomiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game16PikiSuikomiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game16PikiSuikomiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game16PikiSuikomiState
.obj __vt__Q24Game17PikiFallMeckState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game17PikiFallMeckStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game17PikiFallMeckStateFPQ24Game4Piki
	.4byte cleanup__Q24Game17PikiFallMeckStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game17PikiFallMeckStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game17PikiFallMeckStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game17PikiFallMeckStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game17PikiFallMeckStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game17PikiFallMeckState
.obj __vt__Q24Game16PikiHipDropState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game16PikiHipDropStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game16PikiHipDropStateFPQ24Game4Piki
	.4byte cleanup__Q24Game16PikiHipDropStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game16PikiHipDropStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game16PikiHipDropStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game16PikiHipDropStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game16PikiHipDropStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game16PikiHipDropState
.obj __vt__Q24Game20PikiWaterHangedState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game20PikiWaterHangedStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game20PikiWaterHangedStateFPQ24Game4Piki
	.4byte cleanup__Q24Game20PikiWaterHangedStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game20PikiWaterHangedStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game20PikiWaterHangedStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
	.4byte onKeyEvent__Q24Game20PikiWaterHangedStateFRCQ28SysShape8KeyEvent
	.4byte 0
	.4byte 0
	.4byte "@24@4@onKeyEvent__Q24Game20PikiWaterHangedStateFRCQ28SysShape8KeyEvent"
.endobj __vt__Q24Game20PikiWaterHangedState
.obj __vt__Q24Game15PikiHangedState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PikiHangedStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game15PikiHangedStateFPQ24Game4Piki
	.4byte cleanup__Q24Game15PikiHangedStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game15PikiHangedStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game15PikiHangedStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
	.4byte onKeyEvent__Q24Game15PikiHangedStateFRCQ28SysShape8KeyEvent
	.4byte 0
	.4byte 0
	.4byte "@20@4@onKeyEvent__Q24Game15PikiHangedStateFRCQ28SysShape8KeyEvent"
.endobj __vt__Q24Game15PikiHangedState
.obj __vt__Q24Game15PikiGoHangState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PikiGoHangStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game15PikiGoHangStateFPQ24Game4Piki
	.4byte cleanup__Q24Game15PikiGoHangStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game15PikiGoHangStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game15PikiGoHangStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game15PikiGoHangState
.obj __vt__Q24Game17PikiAutoNukiState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game17PikiAutoNukiStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game17PikiAutoNukiStateFPQ24Game4Piki
	.4byte cleanup__Q24Game17PikiAutoNukiStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game17PikiAutoNukiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game17PikiAutoNukiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game17PikiAutoNukiState
.obj __vt__Q24Game15PikiLookAtState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PikiLookAtStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game15PikiLookAtStateFPQ24Game4Piki
	.4byte cleanup__Q24Game15PikiLookAtStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game15PikiLookAtStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game15PikiLookAtStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
	.4byte onKeyEvent__Q24Game15PikiLookAtStateFRCQ28SysShape8KeyEvent
	.4byte 0
	.4byte 0
	.4byte "@28@4@onKeyEvent__Q24Game15PikiLookAtStateFRCQ28SysShape8KeyEvent"
.endobj __vt__Q24Game15PikiLookAtState
.obj __vt__Q24Game16PikiPressedState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game16PikiPressedStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game16PikiPressedStateFPQ24Game4Piki
	.4byte cleanup__Q24Game16PikiPressedStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game16PikiPressedStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game16PikiPressedStateFv
	.4byte transittable__Q24Game16PikiPressedStateFi
	.4byte soft_transittable__Q24Game16PikiPressedStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game16PikiPressedState
.obj __vt__Q23efx9TPkKanden, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.endobj __vt__Q23efx9TPkKanden
.obj __vt__Q24Game19PikiDenkiDyingState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game19PikiDenkiDyingStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game19PikiDenkiDyingStateFPQ24Game4Piki
	.4byte cleanup__Q24Game19PikiDenkiDyingStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game19PikiDenkiDyingStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game19PikiDenkiDyingStateFv
	.4byte transittable__Q24Game19PikiDenkiDyingStateFi
	.4byte soft_transittable__Q24Game19PikiDenkiDyingStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game19PikiDenkiDyingState
.obj __vt__Q24Game14PikiDyingState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game14PikiDyingStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game14PikiDyingStateFPQ24Game4Piki
	.4byte cleanup__Q24Game14PikiDyingStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game14PikiDyingStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game14PikiDyingStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game14PikiDyingStateFv
	.4byte transittable__Q24Game14PikiDyingStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game14PikiDyingState
.obj __vt__Q24Game13PikiDeadState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13PikiDeadStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game13PikiDeadStateFPQ24Game4Piki
	.4byte "cleanup__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game13PikiDeadStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game13PikiDeadStateFv
	.4byte transittable__Q24Game13PikiDeadStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game13PikiDeadState
.obj __vt__Q24Game14PikiPanicState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game14PikiPanicStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game14PikiPanicStateFPQ24Game4Piki
	.4byte cleanup__Q24Game14PikiPanicStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game14PikiPanicStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game14PikiPanicStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game14PikiPanicStateFi
	.4byte soft_transittable__Q24Game14PikiPanicStateFi
	.4byte onFlute__Q24Game14PikiPanicStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game14PikiPanicState
.obj __vt__Q24Game13PikiDopeState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13PikiDopeStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game13PikiDopeStateFPQ24Game4Piki
	.4byte cleanup__Q24Game13PikiDopeStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game13PikiDopeStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game13PikiDopeStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game13PikiDopeState
.obj __vt__Q24Game15PikiNukareState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PikiNukareStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game15PikiNukareStateFPQ24Game4Piki
	.4byte cleanup__Q24Game15PikiNukareStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game15PikiNukareStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game15PikiNukareStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game15PikiNukareState
.obj __vt__Q24Game13PikiTaneState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13PikiTaneStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game13PikiTaneStateFPQ24Game4Piki
	.4byte cleanup__Q24Game13PikiTaneStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game13PikiTaneStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game13PikiTaneStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game13PikiTaneState
.obj __vt__Q24Game19PikiFountainonState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game19PikiFountainonStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game19PikiFountainonStateFPQ24Game4Piki
	.4byte cleanup__Q24Game19PikiFountainonStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game19PikiFountainonStateFPQ24Game4Piki
	.4byte callable__Q24Game19PikiFountainonStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game19PikiFountainonStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game19PikiFountainonState
.obj __vt__Q24Game15PikiHoleinState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PikiHoleinStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game15PikiHoleinStateFPQ24Game4Piki
	.4byte cleanup__Q24Game15PikiHoleinStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game15PikiHoleinStateFPQ24Game4Piki
	.4byte callable__Q24Game15PikiHoleinStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game15PikiHoleinStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game15PikiHoleinState
.obj __vt__Q24Game18PikiSwallowedState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game18PikiSwallowedStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game18PikiSwallowedStateFPQ24Game4Piki
	.4byte cleanup__Q24Game18PikiSwallowedStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game18PikiSwallowedStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game18PikiSwallowedStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game18PikiSwallowedStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game18PikiSwallowedState
.obj __vt__Q23efx5TPkAp, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx5TPkAp
.obj __vt__Q23efx9TPikuBomb, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx9TPikuBomb
.obj __vt__Q23efx9TPikuDead, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx9TPikuDead
.obj __vt__Q24Game15PikiCarrotState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PikiCarrotStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game15PikiCarrotStateFPQ24Game4Piki
	.4byte cleanup__Q24Game15PikiCarrotStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game15PikiCarrotStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game15PikiCarrotStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game15PikiCarrotState
.obj __vt__Q24Game17PikiDemoWaitState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game17PikiDemoWaitStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game17PikiDemoWaitStateFPQ24Game4Piki
	.4byte cleanup__Q24Game17PikiDemoWaitStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game17PikiDemoWaitStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game17PikiDemoWaitState
.obj __vt__Q24Game13PikiWalkState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13PikiWalkStateFPQ24Game4PikiPQ24Game8StateArg
	.4byte exec__Q24Game13PikiWalkStateFPQ24Game4Piki
	.4byte cleanup__Q24Game13PikiWalkStateFPQ24Game4Piki
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game13PikiWalkStateFv
	.4byte aiActive__Q24Game13PikiWalkStateFv
	.4byte dopable__Q24Game13PikiWalkStateFv
	.4byte releasable__Q24Game13PikiWalkStateFv
	.4byte throwable__Q24Game13PikiWalkStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game13PikiWalkStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game13PikiWalkState
.obj "__vt__Q24Game22FSMState<Q24Game4Piki>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiPQ24Game8StateArg"
	.4byte "exec__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "cleanup__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
.endobj "__vt__Q24Game22FSMState<Q24Game4Piki>"
.obj __vt__Q24Game7PikiFSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game7PikiFSMFPQ24Game4Piki
	.4byte "start__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte "exec__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4Piki"
	.4byte transit__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg
.endobj __vt__Q24Game7PikiFSM
.obj __vt__Q24Game9PikiState, global
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiPQ24Game8StateArg"
	.4byte "exec__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "cleanup__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
	.4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
	.4byte getInfo__Q24Game9PikiStateFPc
	.4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
	.4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
	.4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
	.4byte callable__Q24Game9PikiStateFv
	.4byte aiActive__Q24Game9PikiStateFv
	.4byte dopable__Q24Game9PikiStateFv
	.4byte releasable__Q24Game9PikiStateFv
	.4byte throwable__Q24Game9PikiStateFv
	.4byte dead__Q24Game9PikiStateFv
	.4byte battleOK__Q24Game9PikiStateFv
	.4byte pressable__Q24Game9PikiStateFv
	.4byte transittable__Q24Game9PikiStateFi
	.4byte soft_transittable__Q24Game9PikiStateFi
	.4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
	.4byte dump__Q24Game9PikiStateFv
.endobj __vt__Q24Game9PikiState

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
.obj lbl_80518D00, local
	.asciz "%s"
.endobj lbl_80518D00
.balign 4
.obj lbl_80518D04, local
	.asciz "WALK"
.endobj lbl_80518D04
.balign 4
.obj lbl_80518D0C, local
	.asciz "LOOKAT"
.endobj lbl_80518D0C
.balign 4
.obj lbl_80518D14, local
	.asciz "GOHANG"
.endobj lbl_80518D14
.balign 4
.obj lbl_80518D1C, local
	.asciz "HANGED"
.endobj lbl_80518D1C
.balign 4
.obj lbl_80518D24, local
	.asciz "FLYING"
.endobj lbl_80518D24
.balign 4
.obj lbl_80518D2C, local
	.asciz "BLOW"
.endobj lbl_80518D2C
.balign 4
.obj lbl_80518D34, local
	.asciz "FLICK"
.endobj lbl_80518D34
.balign 4
.obj lbl_80518D3C, local
	.asciz "DROWN"
.endobj lbl_80518D3C
.balign 4
.obj lbl_80518D44, local
	.asciz "NUKARE"
.endobj lbl_80518D44
.balign 4
.obj lbl_80518D4C, local
	.asciz "ABSORB"
.endobj lbl_80518D4C
.balign 4
.obj lbl_80518D54, local
	.asciz "GROWUP"
.endobj lbl_80518D54
.balign 4
.obj lbl_80518D5C, local
	.asciz "TANE"
.endobj lbl_80518D5C
.balign 4
.obj lbl_80518D64, local
	.asciz "DOPE"
.endobj lbl_80518D64
.balign 4
.obj lbl_80518D6C, local
	.asciz "HIPDROP"
.endobj lbl_80518D6C
.balign 4
.obj lbl_80518D74, local
	.asciz "EMOTION"
.endobj lbl_80518D74
.balign 4
.obj lbl_80518D7C, local
	.asciz "PRESSED"
.endobj lbl_80518D7C
.balign 4
.obj lbl_80518D84, local
	.asciz "PANIC"
.endobj lbl_80518D84
.balign 4
.obj lbl_80518D8C, local
	.asciz "DYING"
.endobj lbl_80518D8C
.balign 4
.obj lbl_80518D94, local
	.asciz "DEAD"
.endobj lbl_80518D94
.balign 4
.obj lbl_80518D9C, local
	.asciz "SUIKOMI"
.endobj lbl_80518D9C
.balign 4
.obj lbl_80518DA4, local
	.asciz "HOLEIN"
.endobj lbl_80518DA4
.balign 4
.obj lbl_80518DAC, local
	.asciz "KOKE"
.endobj lbl_80518DAC
.balign 4
.obj lbl_80518DB4, local
	.asciz "ESCAPE"
.endobj lbl_80518DB4
.balign 4
.obj lbl_80518DBC, local
	.asciz "CARROT"
.endobj lbl_80518DBC
.balign 4
.obj lbl_80518DC4, local
	.float 0.3
.endobj lbl_80518DC4
.obj lbl_80518DC8, local
	.float 32768.0
.endobj lbl_80518DC8
.obj lbl_80518DCC, local
	.float 10.0
.endobj lbl_80518DCC
.obj lbl_80518DD0, local
	.float 3.0
.endobj lbl_80518DD0
.balign 8
.obj lbl_80518DD8, local
	.8byte 0x4330000080000000
.endobj lbl_80518DD8
.obj lbl_80518DE0, local
	.float 0.0
.endobj lbl_80518DE0
.obj lbl_80518DE4, local
	.float 1.0
.endobj lbl_80518DE4
.obj lbl_80518DE8, local
	.float -1.0
.endobj lbl_80518DE8
.obj lbl_80518DEC, local
	.float -10.0
.endobj lbl_80518DEC
.obj lbl_80518DF0, local
	.float 8.0
.endobj lbl_80518DF0
.obj lbl_80518DF4, local
	.float 0.5
.endobj lbl_80518DF4
.obj lbl_80518DF8, local
	.float 40.0
.endobj lbl_80518DF8
.obj lbl_80518DFC, local
	.float -40.0
.endobj lbl_80518DFC
.obj lbl_80518E00, local
	.float 80.0
.endobj lbl_80518E00
.obj lbl_80518E04, local
	.float 0.2
.endobj lbl_80518E04
.obj lbl_80518E08, local
	.float 1.5
.endobj lbl_80518E08
.obj lbl_80518E0C, local
	.float 1.3
.endobj lbl_80518E0C
.obj lbl_80518E10, local
	.float 0.6
.endobj lbl_80518E10
.obj lbl_80518E14, local
	.float 0.39999998
.endobj lbl_80518E14
.obj lbl_80518E18, local
	.float -50.0
.endobj lbl_80518E18
.obj lbl_80518E1C, local
	.float 50.0
.endobj lbl_80518E1C
.obj lbl_80518E20, local
	.float 400.0
.endobj lbl_80518E20
.obj lbl_80518E24, local
	.float 0.25
.endobj lbl_80518E24
.obj lbl_80518E28, local
	.float 1.2
.endobj lbl_80518E28
.obj lbl_80518E2C, local
	.float 0.1
.endobj lbl_80518E2C
.obj lbl_80518E30, local
	.float 2.0
.endobj lbl_80518E30
.obj lbl_80518E34, local
	.float 325.9493
.endobj lbl_80518E34
.obj lbl_80518E38, local
	.float -325.9493
.endobj lbl_80518E38
.obj lbl_80518E3C, local # pi
	.float 3.1415927
.endobj lbl_80518E3C
.obj lbl_80518E40, local
	.float 0.0055555557
.endobj lbl_80518E40
.obj lbl_80518E44, local
	.float 30.0
.endobj lbl_80518E44
.obj lbl_80518E48, local
	.float 15.0
.endobj lbl_80518E48
.obj lbl_80518E4C, local
	.float 0.99
.endobj lbl_80518E4C
.obj lbl_80518E50, local
	.float 120.0
.endobj lbl_80518E50
.obj lbl_80518E54, local
	.float 20.0
.endobj lbl_80518E54
.obj lbl_80518E58, local
	.float 100.0
.endobj lbl_80518E58
.obj lbl_80518E5C, local
	.float 0.01
.endobj lbl_80518E5C
.obj lbl_80518E60, local # -pi/2
	.float -1.5707964
.endobj lbl_80518E60
.obj lbl_80518E64, local
	.float 12800.0
.endobj lbl_80518E64
.obj lbl_80518E68, local
	.float 600.0
.endobj lbl_80518E68
.obj lbl_80518E6C, local
	.float 350.0
.endobj lbl_80518E6C
.obj lbl_80518E70, local
	.float -900.0
.endobj lbl_80518E70
.obj lbl_80518E74, local
	.float 0.8
.endobj lbl_80518E74
.obj lbl_80518E78, local
	.float 0.15
.endobj lbl_80518E78
.obj lbl_80518E7C, local
	.float 0.075
.endobj lbl_80518E7C
.obj lbl_80518E80, local
	.float 0.42
.endobj lbl_80518E80
.obj lbl_80518E84, local
	.float 0.9
.endobj lbl_80518E84
.obj lbl_80518E88, local
	.float 4.0
.endobj lbl_80518E88
.obj lbl_80518E8C, local
	.float 0.955
.endobj lbl_80518E8C
.obj lbl_80518E90, local
	.float 160.0
.endobj lbl_80518E90
.obj lbl_80518E94, local
	.float 60.0
.endobj lbl_80518E94
.obj lbl_80518E98, local
	.float 500.0
.endobj lbl_80518E98
.obj lbl_80518E9C, local
	.float 5.0
.endobj lbl_80518E9C
.obj lbl_80518EA0, local
	.float -5.0
.endobj lbl_80518EA0
.obj lbl_80518EA4, local
	.float 1000.0
.endobj lbl_80518EA4
.obj lbl_80518EA8, local
	.float 200.0
.endobj lbl_80518EA8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn dump__Q24Game9PikiStateFv, global
/* 80189378 001862B8  4E 80 00 20 */	blr 
.endfn dump__Q24Game9PikiStateFv

.fn getInfo__Q24Game9PikiStateFPc, global
/* 8018937C 001862BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80189380 001862C0  7C 08 02 A6 */	mflr r0
/* 80189384 001862C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80189388 001862C8  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 8018938C 001862CC  7C 83 23 78 */	mr r3, r4
/* 80189390 001862D0  38 82 A9 A0 */	addi r4, r2, lbl_80518D00@sda21
/* 80189394 001862D4  4C C6 31 82 */	crclr 6
/* 80189398 001862D8  4B F3 E0 A1 */	bl sprintf
/* 8018939C 001862DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801893A0 001862E0  7C 08 03 A6 */	mtlr r0
/* 801893A4 001862E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801893A8 001862E8  4E 80 00 20 */	blr 
.endfn getInfo__Q24Game9PikiStateFPc

.fn init__Q24Game7PikiFSMFPQ24Game4Piki, global
/* 801893AC 001862EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801893B0 001862F0  7C 08 02 A6 */	mflr r0
/* 801893B4 001862F4  3C 80 80 48 */	lis r4, lbl_8047EBE8@ha
/* 801893B8 001862F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801893BC 001862FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801893C0 00186300  7C 7F 1B 78 */	mr r31, r3
/* 801893C4 00186304  93 C1 00 08 */	stw r30, 8(r1)
/* 801893C8 00186308  3B C4 EB E8 */	addi r30, r4, lbl_8047EBE8@l
/* 801893CC 0018630C  38 80 00 21 */	li r4, 0x21
/* 801893D0 00186310  48 00 97 55 */	bl "create__Q24Game26StateMachine<Q24Game4Piki>Fi"
/* 801893D4 00186314  38 60 00 10 */	li r3, 0x10
/* 801893D8 00186318  4B E9 AA CD */	bl __nw__FUl
/* 801893DC 0018631C  7C 64 1B 79 */	or. r4, r3, r3
/* 801893E0 00186320  41 82 00 3C */	beq .L_8018941C
/* 801893E4 00186324  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 801893E8 00186328  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 801893EC 0018632C  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 801893F0 00186330  3C 60 80 4B */	lis r3, __vt__Q24Game13PikiWalkState@ha
/* 801893F4 00186334  90 04 00 00 */	stw r0, 0(r4)
/* 801893F8 00186338  38 E0 00 00 */	li r7, 0
/* 801893FC 0018633C  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189400 00186340  38 A2 A9 A4 */	addi r5, r2, lbl_80518D04@sda21
/* 80189404 00186344  90 E4 00 04 */	stw r7, 4(r4)
/* 80189408 00186348  38 03 46 B0 */	addi r0, r3, __vt__Q24Game13PikiWalkState@l
/* 8018940C 0018634C  90 E4 00 08 */	stw r7, 8(r4)
/* 80189410 00186350  90 C4 00 00 */	stw r6, 0(r4)
/* 80189414 00186354  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189418 00186358  90 04 00 00 */	stw r0, 0(r4)
.L_8018941C:
/* 8018941C 0018635C  7F E3 FB 78 */	mr r3, r31
/* 80189420 00186360  48 00 97 69 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189424 00186364  38 60 00 10 */	li r3, 0x10
/* 80189428 00186368  4B E9 AA 7D */	bl __nw__FUl
/* 8018942C 0018636C  7C 64 1B 79 */	or. r4, r3, r3
/* 80189430 00186370  41 82 00 40 */	beq .L_80189470
/* 80189434 00186374  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189438 00186378  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 8018943C 0018637C  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189440 00186380  3C 60 80 4B */	lis r3, __vt__Q24Game17PikiDemoWaitState@ha
/* 80189444 00186384  90 04 00 00 */	stw r0, 0(r4)
/* 80189448 00186388  38 00 00 01 */	li r0, 1
/* 8018944C 0018638C  38 E0 00 00 */	li r7, 0
/* 80189450 00186390  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189454 00186394  90 04 00 04 */	stw r0, 4(r4)
/* 80189458 00186398  38 BE 00 18 */	addi r5, r30, 0x18
/* 8018945C 0018639C  38 03 46 3C */	addi r0, r3, __vt__Q24Game17PikiDemoWaitState@l
/* 80189460 001863A0  90 E4 00 08 */	stw r7, 8(r4)
/* 80189464 001863A4  90 C4 00 00 */	stw r6, 0(r4)
/* 80189468 001863A8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8018946C 001863AC  90 04 00 00 */	stw r0, 0(r4)
.L_80189470:
/* 80189470 001863B0  7F E3 FB 78 */	mr r3, r31
/* 80189474 001863B4  48 00 97 15 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189478 001863B8  38 60 00 24 */	li r3, 0x24
/* 8018947C 001863BC  4B E9 AA 29 */	bl __nw__FUl
/* 80189480 001863C0  7C 64 1B 79 */	or. r4, r3, r3
/* 80189484 001863C4  41 82 00 6C */	beq .L_801894F0
/* 80189488 001863C8  39 04 00 1C */	addi r8, r4, 0x1c
/* 8018948C 001863CC  3C 60 80 4B */	lis r3, __vt__Q28SysShape14MotionListener@ha
/* 80189490 001863D0  91 04 00 10 */	stw r8, 0x10(r4)
/* 80189494 001863D4  38 03 A6 6C */	addi r0, r3, __vt__Q28SysShape14MotionListener@l
/* 80189498 001863D8  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 8018949C 001863DC  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 801894A0 001863E0  90 04 00 1C */	stw r0, 0x1c(r4)
/* 801894A4 001863E4  38 C3 47 24 */	addi r6, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 801894A8 001863E8  3C 60 80 4B */	lis r3, __vt__Q24Game15PikiLookAtState@ha
/* 801894AC 001863EC  38 00 00 02 */	li r0, 2
/* 801894B0 001863F0  90 C4 00 00 */	stw r6, 0(r4)
/* 801894B4 001863F4  38 63 3F F8 */	addi r3, r3, __vt__Q24Game15PikiLookAtState@l
/* 801894B8 001863F8  38 E0 00 00 */	li r7, 0
/* 801894BC 001863FC  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 801894C0 00186400  90 04 00 04 */	stw r0, 4(r4)
/* 801894C4 00186404  38 A2 A9 AC */	addi r5, r2, lbl_80518D0C@sda21
/* 801894C8 00186408  38 03 00 78 */	addi r0, r3, 0x78
/* 801894CC 0018640C  90 E4 00 08 */	stw r7, 8(r4)
/* 801894D0 00186410  90 C4 00 00 */	stw r6, 0(r4)
/* 801894D4 00186414  90 A4 00 0C */	stw r5, 0xc(r4)
/* 801894D8 00186418  90 64 00 00 */	stw r3, 0(r4)
/* 801894DC 0018641C  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801894E0 00186420  90 03 00 00 */	stw r0, 0(r3)
/* 801894E4 00186424  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801894E8 00186428  7C 03 40 50 */	subf r0, r3, r8
/* 801894EC 0018642C  90 03 00 04 */	stw r0, 4(r3)
.L_801894F0:
/* 801894F0 00186430  7F E3 FB 78 */	mr r3, r31
/* 801894F4 00186434  48 00 96 95 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 801894F8 00186438  38 60 00 10 */	li r3, 0x10
/* 801894FC 0018643C  4B E9 A9 A9 */	bl __nw__FUl
/* 80189500 00186440  7C 64 1B 79 */	or. r4, r3, r3
/* 80189504 00186444  41 82 00 40 */	beq .L_80189544
/* 80189508 00186448  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 8018950C 0018644C  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189510 00186450  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189514 00186454  3C 60 80 4B */	lis r3, __vt__Q24Game15PikiGoHangState@ha
/* 80189518 00186458  90 04 00 00 */	stw r0, 0(r4)
/* 8018951C 0018645C  38 00 00 03 */	li r0, 3
/* 80189520 00186460  38 E0 00 00 */	li r7, 0
/* 80189524 00186464  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189528 00186468  90 04 00 04 */	stw r0, 4(r4)
/* 8018952C 0018646C  38 A2 A9 B4 */	addi r5, r2, lbl_80518D14@sda21
/* 80189530 00186470  38 03 3F 10 */	addi r0, r3, __vt__Q24Game15PikiGoHangState@l
/* 80189534 00186474  90 E4 00 08 */	stw r7, 8(r4)
/* 80189538 00186478  90 C4 00 00 */	stw r6, 0(r4)
/* 8018953C 0018647C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189540 00186480  90 04 00 00 */	stw r0, 0(r4)
.L_80189544:
/* 80189544 00186484  7F E3 FB 78 */	mr r3, r31
/* 80189548 00186488  48 00 96 41 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 8018954C 0018648C  38 60 00 1C */	li r3, 0x1c
/* 80189550 00186490  4B E9 A9 55 */	bl __nw__FUl
/* 80189554 00186494  7C 64 1B 79 */	or. r4, r3, r3
/* 80189558 00186498  41 82 00 6C */	beq .L_801895C4
/* 8018955C 0018649C  39 04 00 14 */	addi r8, r4, 0x14
/* 80189560 001864A0  3C 60 80 4B */	lis r3, __vt__Q28SysShape14MotionListener@ha
/* 80189564 001864A4  91 04 00 10 */	stw r8, 0x10(r4)
/* 80189568 001864A8  38 03 A6 6C */	addi r0, r3, __vt__Q28SysShape14MotionListener@l
/* 8018956C 001864AC  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189570 001864B0  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189574 001864B4  90 04 00 14 */	stw r0, 0x14(r4)
/* 80189578 001864B8  38 C3 47 24 */	addi r6, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 8018957C 001864BC  3C 60 80 4B */	lis r3, __vt__Q24Game15PikiHangedState@ha
/* 80189580 001864C0  38 00 00 04 */	li r0, 4
/* 80189584 001864C4  90 C4 00 00 */	stw r6, 0(r4)
/* 80189588 001864C8  38 63 3E 8C */	addi r3, r3, __vt__Q24Game15PikiHangedState@l
/* 8018958C 001864CC  38 E0 00 00 */	li r7, 0
/* 80189590 001864D0  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189594 001864D4  90 04 00 04 */	stw r0, 4(r4)
/* 80189598 001864D8  38 A2 A9 BC */	addi r5, r2, lbl_80518D1C@sda21
/* 8018959C 001864DC  38 03 00 78 */	addi r0, r3, 0x78
/* 801895A0 001864E0  90 E4 00 08 */	stw r7, 8(r4)
/* 801895A4 001864E4  90 C4 00 00 */	stw r6, 0(r4)
/* 801895A8 001864E8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 801895AC 001864EC  90 64 00 00 */	stw r3, 0(r4)
/* 801895B0 001864F0  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801895B4 001864F4  90 03 00 00 */	stw r0, 0(r3)
/* 801895B8 001864F8  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801895BC 001864FC  7C 03 40 50 */	subf r0, r3, r8
/* 801895C0 00186500  90 03 00 04 */	stw r0, 4(r3)
.L_801895C4:
/* 801895C4 00186504  7F E3 FB 78 */	mr r3, r31
/* 801895C8 00186508  48 00 95 C1 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 801895CC 0018650C  38 60 00 20 */	li r3, 0x20
/* 801895D0 00186510  4B E9 A8 D5 */	bl __nw__FUl
/* 801895D4 00186514  7C 64 1B 79 */	or. r4, r3, r3
/* 801895D8 00186518  41 82 00 6C */	beq .L_80189644
/* 801895DC 0018651C  39 04 00 18 */	addi r8, r4, 0x18
/* 801895E0 00186520  3C 60 80 4B */	lis r3, __vt__Q28SysShape14MotionListener@ha
/* 801895E4 00186524  91 04 00 10 */	stw r8, 0x10(r4)
/* 801895E8 00186528  38 03 A6 6C */	addi r0, r3, __vt__Q28SysShape14MotionListener@l
/* 801895EC 0018652C  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 801895F0 00186530  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 801895F4 00186534  90 04 00 18 */	stw r0, 0x18(r4)
/* 801895F8 00186538  38 C3 47 24 */	addi r6, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 801895FC 0018653C  3C 60 80 4B */	lis r3, __vt__Q24Game20PikiWaterHangedState@ha
/* 80189600 00186540  38 00 00 05 */	li r0, 5
/* 80189604 00186544  90 C4 00 00 */	stw r6, 0(r4)
/* 80189608 00186548  38 63 3E 08 */	addi r3, r3, __vt__Q24Game20PikiWaterHangedState@l
/* 8018960C 0018654C  38 E0 00 00 */	li r7, 0
/* 80189610 00186550  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189614 00186554  90 04 00 04 */	stw r0, 4(r4)
/* 80189618 00186558  38 BE 00 24 */	addi r5, r30, 0x24
/* 8018961C 0018655C  38 03 00 78 */	addi r0, r3, 0x78
/* 80189620 00186560  90 E4 00 08 */	stw r7, 8(r4)
/* 80189624 00186564  90 C4 00 00 */	stw r6, 0(r4)
/* 80189628 00186568  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8018962C 0018656C  90 64 00 00 */	stw r3, 0(r4)
/* 80189630 00186570  80 64 00 10 */	lwz r3, 0x10(r4)
/* 80189634 00186574  90 03 00 00 */	stw r0, 0(r3)
/* 80189638 00186578  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8018963C 0018657C  7C 03 40 50 */	subf r0, r3, r8
/* 80189640 00186580  90 03 00 04 */	stw r0, 4(r3)
.L_80189644:
/* 80189644 00186584  7F E3 FB 78 */	mr r3, r31
/* 80189648 00186588  48 00 95 41 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 8018964C 0018658C  38 60 00 34 */	li r3, 0x34
/* 80189650 00186590  4B E9 A8 55 */	bl __nw__FUl
/* 80189654 00186594  7C 64 1B 79 */	or. r4, r3, r3
/* 80189658 00186598  41 82 00 40 */	beq .L_80189698
/* 8018965C 0018659C  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189660 001865A0  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189664 001865A4  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189668 001865A8  3C 60 80 4B */	lis r3, __vt__Q24Game15PikiFlyingState@ha
/* 8018966C 001865AC  90 04 00 00 */	stw r0, 0(r4)
/* 80189670 001865B0  38 00 00 06 */	li r0, 6
/* 80189674 001865B4  38 E0 00 00 */	li r7, 0
/* 80189678 001865B8  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 8018967C 001865BC  90 04 00 04 */	stw r0, 4(r4)
/* 80189680 001865C0  38 A2 A9 C4 */	addi r5, r2, lbl_80518D24@sda21
/* 80189684 001865C4  38 03 3C 30 */	addi r0, r3, __vt__Q24Game15PikiFlyingState@l
/* 80189688 001865C8  90 E4 00 08 */	stw r7, 8(r4)
/* 8018968C 001865CC  90 C4 00 00 */	stw r6, 0(r4)
/* 80189690 001865D0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189694 001865D4  90 04 00 00 */	stw r0, 0(r4)
.L_80189698:
/* 80189698 001865D8  7F E3 FB 78 */	mr r3, r31
/* 8018969C 001865DC  48 00 94 ED */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 801896A0 001865E0  38 60 00 1C */	li r3, 0x1c
/* 801896A4 001865E4  4B E9 A8 01 */	bl __nw__FUl
/* 801896A8 001865E8  7C 64 1B 79 */	or. r4, r3, r3
/* 801896AC 001865EC  41 82 00 40 */	beq .L_801896EC
/* 801896B0 001865F0  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 801896B4 001865F4  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 801896B8 001865F8  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 801896BC 001865FC  3C 60 80 4B */	lis r3, __vt__Q24Game19PikiKokeDamageState@ha
/* 801896C0 00186600  90 04 00 00 */	stw r0, 0(r4)
/* 801896C4 00186604  38 00 00 07 */	li r0, 7
/* 801896C8 00186608  38 E0 00 00 */	li r7, 0
/* 801896CC 0018660C  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 801896D0 00186610  90 04 00 04 */	stw r0, 4(r4)
/* 801896D4 00186614  38 BE 00 30 */	addi r5, r30, 0x30
/* 801896D8 00186618  38 03 3A B8 */	addi r0, r3, __vt__Q24Game19PikiKokeDamageState@l
/* 801896DC 0018661C  90 E4 00 08 */	stw r7, 8(r4)
/* 801896E0 00186620  90 C4 00 00 */	stw r6, 0(r4)
/* 801896E4 00186624  90 A4 00 0C */	stw r5, 0xc(r4)
/* 801896E8 00186628  90 04 00 00 */	stw r0, 0(r4)
.L_801896EC:
/* 801896EC 0018662C  7F E3 FB 78 */	mr r3, r31
/* 801896F0 00186630  48 00 94 99 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 801896F4 00186634  38 60 00 2C */	li r3, 0x2c
/* 801896F8 00186638  4B E9 A7 AD */	bl __nw__FUl
/* 801896FC 0018663C  7C 64 1B 79 */	or. r4, r3, r3
/* 80189700 00186640  41 82 00 40 */	beq .L_80189740
/* 80189704 00186644  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189708 00186648  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 8018970C 0018664C  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189710 00186650  3C 60 80 4B */	lis r3, __vt__Q24Game13PikiBlowState@ha
/* 80189714 00186654  90 04 00 00 */	stw r0, 0(r4)
/* 80189718 00186658  38 00 00 08 */	li r0, 8
/* 8018971C 0018665C  38 E0 00 00 */	li r7, 0
/* 80189720 00186660  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189724 00186664  90 04 00 04 */	stw r0, 4(r4)
/* 80189728 00186668  38 A2 A9 CC */	addi r5, r2, lbl_80518D2C@sda21
/* 8018972C 0018666C  38 03 3B 2C */	addi r0, r3, __vt__Q24Game13PikiBlowState@l
/* 80189730 00186670  90 E4 00 08 */	stw r7, 8(r4)
/* 80189734 00186674  90 C4 00 00 */	stw r6, 0(r4)
/* 80189738 00186678  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8018973C 0018667C  90 04 00 00 */	stw r0, 0(r4)
.L_80189740:
/* 80189740 00186680  7F E3 FB 78 */	mr r3, r31
/* 80189744 00186684  48 00 94 45 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189748 00186688  38 60 00 38 */	li r3, 0x38
/* 8018974C 0018668C  4B E9 A7 59 */	bl __nw__FUl
/* 80189750 00186690  7C 64 1B 79 */	or. r4, r3, r3
/* 80189754 00186694  41 82 00 6C */	beq .L_801897C0
/* 80189758 00186698  39 04 00 30 */	addi r8, r4, 0x30
/* 8018975C 0018669C  3C 60 80 4B */	lis r3, __vt__Q28SysShape14MotionListener@ha
/* 80189760 001866A0  91 04 00 10 */	stw r8, 0x10(r4)
/* 80189764 001866A4  38 03 A6 6C */	addi r0, r3, __vt__Q28SysShape14MotionListener@l
/* 80189768 001866A8  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 8018976C 001866AC  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189770 001866B0  90 04 00 30 */	stw r0, 0x30(r4)
/* 80189774 001866B4  38 C3 47 24 */	addi r6, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189778 001866B8  3C 60 80 4B */	lis r3, __vt__Q24Game14PikiFlickState@ha
/* 8018977C 001866BC  38 00 00 09 */	li r0, 9
/* 80189780 001866C0  90 C4 00 00 */	stw r6, 0(r4)
/* 80189784 001866C4  38 63 3B A0 */	addi r3, r3, __vt__Q24Game14PikiFlickState@l
/* 80189788 001866C8  38 E0 00 00 */	li r7, 0
/* 8018978C 001866CC  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189790 001866D0  90 04 00 04 */	stw r0, 4(r4)
/* 80189794 001866D4  38 A2 A9 D4 */	addi r5, r2, lbl_80518D34@sda21
/* 80189798 001866D8  38 03 00 78 */	addi r0, r3, 0x78
/* 8018979C 001866DC  90 E4 00 08 */	stw r7, 8(r4)
/* 801897A0 001866E0  90 C4 00 00 */	stw r6, 0(r4)
/* 801897A4 001866E4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 801897A8 001866E8  90 64 00 00 */	stw r3, 0(r4)
/* 801897AC 001866EC  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801897B0 001866F0  90 03 00 00 */	stw r0, 0(r3)
/* 801897B4 001866F4  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801897B8 001866F8  7C 03 40 50 */	subf r0, r3, r8
/* 801897BC 001866FC  90 03 00 04 */	stw r0, 4(r3)
.L_801897C0:
/* 801897C0 00186700  7F E3 FB 78 */	mr r3, r31
/* 801897C4 00186704  48 00 93 C5 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 801897C8 00186708  38 60 00 34 */	li r3, 0x34
/* 801897CC 0018670C  4B E9 A6 D9 */	bl __nw__FUl
/* 801897D0 00186710  7C 64 1B 79 */	or. r4, r3, r3
/* 801897D4 00186714  41 82 00 40 */	beq .L_80189814
/* 801897D8 00186718  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 801897DC 0018671C  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 801897E0 00186720  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 801897E4 00186724  3C 60 80 4B */	lis r3, __vt__Q24Game14PikiDrownState@ha
/* 801897E8 00186728  90 04 00 00 */	stw r0, 0(r4)
/* 801897EC 0018672C  38 00 00 0A */	li r0, 0xa
/* 801897F0 00186730  38 E0 00 00 */	li r7, 0
/* 801897F4 00186734  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 801897F8 00186738  90 04 00 04 */	stw r0, 4(r4)
/* 801897FC 0018673C  38 A2 A9 DC */	addi r5, r2, lbl_80518D3C@sda21
/* 80189800 00186740  38 03 39 D0 */	addi r0, r3, __vt__Q24Game14PikiDrownState@l
/* 80189804 00186744  90 E4 00 08 */	stw r7, 8(r4)
/* 80189808 00186748  90 C4 00 00 */	stw r6, 0(r4)
/* 8018980C 0018674C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189810 00186750  90 04 00 00 */	stw r0, 0(r4)
.L_80189814:
/* 80189814 00186754  7F E3 FB 78 */	mr r3, r31
/* 80189818 00186758  48 00 93 71 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 8018981C 0018675C  38 60 00 10 */	li r3, 0x10
/* 80189820 00186760  4B E9 A6 85 */	bl __nw__FUl
/* 80189824 00186764  7C 64 1B 79 */	or. r4, r3, r3
/* 80189828 00186768  41 82 00 40 */	beq .L_80189868
/* 8018982C 0018676C  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189830 00186770  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189834 00186774  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189838 00186778  3C 60 80 4B */	lis r3, __vt__Q24Game18PikiSwallowedState@ha
/* 8018983C 0018677C  90 04 00 00 */	stw r0, 0(r4)
/* 80189840 00186780  38 00 00 0B */	li r0, 0xb
/* 80189844 00186784  38 E0 00 00 */	li r7, 0
/* 80189848 00186788  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 8018984C 0018678C  90 04 00 04 */	stw r0, 4(r4)
/* 80189850 00186790  38 BE 00 3C */	addi r5, r30, 0x3c
/* 80189854 00186794  38 03 45 18 */	addi r0, r3, __vt__Q24Game18PikiSwallowedState@l
/* 80189858 00186798  90 E4 00 08 */	stw r7, 8(r4)
/* 8018985C 0018679C  90 C4 00 00 */	stw r6, 0(r4)
/* 80189860 001867A0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189864 001867A4  90 04 00 00 */	stw r0, 0(r4)
.L_80189868:
/* 80189868 001867A8  7F E3 FB 78 */	mr r3, r31
/* 8018986C 001867AC  48 00 93 1D */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189870 001867B0  38 60 00 18 */	li r3, 0x18
/* 80189874 001867B4  4B E9 A6 31 */	bl __nw__FUl
/* 80189878 001867B8  7C 64 1B 79 */	or. r4, r3, r3
/* 8018987C 001867BC  41 82 00 40 */	beq .L_801898BC
/* 80189880 001867C0  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189884 001867C4  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189888 001867C8  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 8018988C 001867CC  3C 60 80 4B */	lis r3, __vt__Q24Game15PikiNukareState@ha
/* 80189890 001867D0  90 04 00 00 */	stw r0, 0(r4)
/* 80189894 001867D4  38 00 00 0C */	li r0, 0xc
/* 80189898 001867D8  38 E0 00 00 */	li r7, 0
/* 8018989C 001867DC  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 801898A0 001867E0  90 04 00 04 */	stw r0, 4(r4)
/* 801898A4 001867E4  38 A2 A9 E4 */	addi r5, r2, lbl_80518D44@sda21
/* 801898A8 001867E8  38 03 43 48 */	addi r0, r3, __vt__Q24Game15PikiNukareState@l
/* 801898AC 001867EC  90 E4 00 08 */	stw r7, 8(r4)
/* 801898B0 001867F0  90 C4 00 00 */	stw r6, 0(r4)
/* 801898B4 001867F4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 801898B8 001867F8  90 04 00 00 */	stw r0, 0(r4)
.L_801898BC:
/* 801898BC 001867FC  7F E3 FB 78 */	mr r3, r31
/* 801898C0 00186800  48 00 92 C9 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 801898C4 00186804  38 60 00 1C */	li r3, 0x1c
/* 801898C8 00186808  4B E9 A5 DD */	bl __nw__FUl
/* 801898CC 0018680C  7C 64 1B 79 */	or. r4, r3, r3
/* 801898D0 00186810  41 82 00 40 */	beq .L_80189910
/* 801898D4 00186814  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 801898D8 00186818  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 801898DC 0018681C  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 801898E0 00186820  3C 60 80 4B */	lis r3, __vt__Q24Game15PikiAbsorbState@ha
/* 801898E4 00186824  90 04 00 00 */	stw r0, 0(r4)
/* 801898E8 00186828  38 00 00 0D */	li r0, 0xd
/* 801898EC 0018682C  38 E0 00 00 */	li r7, 0
/* 801898F0 00186830  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 801898F4 00186834  90 04 00 04 */	stw r0, 4(r4)
/* 801898F8 00186838  38 A2 A9 EC */	addi r5, r2, lbl_80518D4C@sda21
/* 801898FC 0018683C  38 03 38 E8 */	addi r0, r3, __vt__Q24Game15PikiAbsorbState@l
/* 80189900 00186840  90 E4 00 08 */	stw r7, 8(r4)
/* 80189904 00186844  90 C4 00 00 */	stw r6, 0(r4)
/* 80189908 00186848  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8018990C 0018684C  90 04 00 00 */	stw r0, 0(r4)
.L_80189910:
/* 80189910 00186850  7F E3 FB 78 */	mr r3, r31
/* 80189914 00186854  48 00 92 75 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189918 00186858  38 60 00 14 */	li r3, 0x14
/* 8018991C 0018685C  4B E9 A5 89 */	bl __nw__FUl
/* 80189920 00186860  7C 64 1B 79 */	or. r4, r3, r3
/* 80189924 00186864  41 82 00 40 */	beq .L_80189964
/* 80189928 00186868  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 8018992C 0018686C  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189930 00186870  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189934 00186874  3C 60 80 4B */	lis r3, __vt__Q24Game15PikiGrowupState@ha
/* 80189938 00186878  90 04 00 00 */	stw r0, 0(r4)
/* 8018993C 0018687C  38 00 00 0E */	li r0, 0xe
/* 80189940 00186880  38 E0 00 00 */	li r7, 0
/* 80189944 00186884  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189948 00186888  90 04 00 04 */	stw r0, 4(r4)
/* 8018994C 0018688C  38 A2 A9 F4 */	addi r5, r2, lbl_80518D54@sda21
/* 80189950 00186890  38 03 38 74 */	addi r0, r3, __vt__Q24Game15PikiGrowupState@l
/* 80189954 00186894  90 E4 00 08 */	stw r7, 8(r4)
/* 80189958 00186898  90 C4 00 00 */	stw r6, 0(r4)
/* 8018995C 0018689C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189960 001868A0  90 04 00 00 */	stw r0, 0(r4)
.L_80189964:
/* 80189964 001868A4  7F E3 FB 78 */	mr r3, r31
/* 80189968 001868A8  48 00 92 21 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 8018996C 001868AC  38 60 00 18 */	li r3, 0x18
/* 80189970 001868B0  4B E9 A5 35 */	bl __nw__FUl
/* 80189974 001868B4  7C 64 1B 79 */	or. r4, r3, r3
/* 80189978 001868B8  41 82 00 40 */	beq .L_801899B8
/* 8018997C 001868BC  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189980 001868C0  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189984 001868C4  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189988 001868C8  3C 60 80 4B */	lis r3, __vt__Q24Game13PikiTaneState@ha
/* 8018998C 001868CC  90 04 00 00 */	stw r0, 0(r4)
/* 80189990 001868D0  38 00 00 0F */	li r0, 0xf
/* 80189994 001868D4  38 E0 00 00 */	li r7, 0
/* 80189998 001868D8  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 8018999C 001868DC  90 04 00 04 */	stw r0, 4(r4)
/* 801899A0 001868E0  38 A2 A9 FC */	addi r5, r2, lbl_80518D5C@sda21
/* 801899A4 001868E4  38 03 43 BC */	addi r0, r3, __vt__Q24Game13PikiTaneState@l
/* 801899A8 001868E8  90 E4 00 08 */	stw r7, 8(r4)
/* 801899AC 001868EC  90 C4 00 00 */	stw r6, 0(r4)
/* 801899B0 001868F0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 801899B4 001868F4  90 04 00 00 */	stw r0, 0(r4)
.L_801899B8:
/* 801899B8 001868F8  7F E3 FB 78 */	mr r3, r31
/* 801899BC 001868FC  48 00 91 CD */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 801899C0 00186900  38 60 00 20 */	li r3, 0x20
/* 801899C4 00186904  4B E9 A4 E1 */	bl __nw__FUl
/* 801899C8 00186908  7C 64 1B 79 */	or. r4, r3, r3
/* 801899CC 0018690C  41 82 00 40 */	beq .L_80189A0C
/* 801899D0 00186910  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 801899D4 00186914  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 801899D8 00186918  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 801899DC 0018691C  3C 60 80 4B */	lis r3, __vt__Q24Game13PikiDopeState@ha
/* 801899E0 00186920  90 04 00 00 */	stw r0, 0(r4)
/* 801899E4 00186924  38 00 00 10 */	li r0, 0x10
/* 801899E8 00186928  38 E0 00 00 */	li r7, 0
/* 801899EC 0018692C  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 801899F0 00186930  90 04 00 04 */	stw r0, 4(r4)
/* 801899F4 00186934  38 A2 AA 04 */	addi r5, r2, lbl_80518D64@sda21
/* 801899F8 00186938  38 03 42 D4 */	addi r0, r3, __vt__Q24Game13PikiDopeState@l
/* 801899FC 0018693C  90 E4 00 08 */	stw r7, 8(r4)
/* 80189A00 00186940  90 C4 00 00 */	stw r6, 0(r4)
/* 80189A04 00186944  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189A08 00186948  90 04 00 00 */	stw r0, 0(r4)
.L_80189A0C:
/* 80189A0C 0018694C  7F E3 FB 78 */	mr r3, r31
/* 80189A10 00186950  48 00 91 79 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189A14 00186954  38 60 00 18 */	li r3, 0x18
/* 80189A18 00186958  4B E9 A4 8D */	bl __nw__FUl
/* 80189A1C 0018695C  7C 64 1B 79 */	or. r4, r3, r3
/* 80189A20 00186960  41 82 00 40 */	beq .L_80189A60
/* 80189A24 00186964  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189A28 00186968  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189A2C 0018696C  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189A30 00186970  3C 60 80 4B */	lis r3, __vt__Q24Game17PikiAutoNukiState@ha
/* 80189A34 00186974  90 04 00 00 */	stw r0, 0(r4)
/* 80189A38 00186978  38 00 00 11 */	li r0, 0x11
/* 80189A3C 0018697C  38 E0 00 00 */	li r7, 0
/* 80189A40 00186980  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189A44 00186984  90 04 00 04 */	stw r0, 4(r4)
/* 80189A48 00186988  38 BE 00 48 */	addi r5, r30, 0x48
/* 80189A4C 0018698C  38 03 3F 84 */	addi r0, r3, __vt__Q24Game17PikiAutoNukiState@l
/* 80189A50 00186990  90 E4 00 08 */	stw r7, 8(r4)
/* 80189A54 00186994  90 C4 00 00 */	stw r6, 0(r4)
/* 80189A58 00186998  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189A5C 0018699C  90 04 00 00 */	stw r0, 0(r4)
.L_80189A60:
/* 80189A60 001869A0  7F E3 FB 78 */	mr r3, r31
/* 80189A64 001869A4  48 00 91 25 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189A68 001869A8  38 60 00 18 */	li r3, 0x18
/* 80189A6C 001869AC  4B E9 A4 39 */	bl __nw__FUl
/* 80189A70 001869B0  7C 64 1B 79 */	or. r4, r3, r3
/* 80189A74 001869B4  41 82 00 40 */	beq .L_80189AB4
/* 80189A78 001869B8  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189A7C 001869BC  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189A80 001869C0  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189A84 001869C4  3C 60 80 4B */	lis r3, __vt__Q24Game16PikiHipDropState@ha
/* 80189A88 001869C8  90 04 00 00 */	stw r0, 0(r4)
/* 80189A8C 001869CC  38 00 00 12 */	li r0, 0x12
/* 80189A90 001869D0  38 E0 00 00 */	li r7, 0
/* 80189A94 001869D4  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189A98 001869D8  90 04 00 04 */	stw r0, 4(r4)
/* 80189A9C 001869DC  38 A2 AA 0C */	addi r5, r2, lbl_80518D6C@sda21
/* 80189AA0 001869E0  38 03 3D 94 */	addi r0, r3, __vt__Q24Game16PikiHipDropState@l
/* 80189AA4 001869E4  90 E4 00 08 */	stw r7, 8(r4)
/* 80189AA8 001869E8  90 C4 00 00 */	stw r6, 0(r4)
/* 80189AAC 001869EC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189AB0 001869F0  90 04 00 00 */	stw r0, 0(r4)
.L_80189AB4:
/* 80189AB4 001869F4  7F E3 FB 78 */	mr r3, r31
/* 80189AB8 001869F8  48 00 90 D1 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189ABC 001869FC  38 60 00 28 */	li r3, 0x28
/* 80189AC0 00186A00  4B E9 A3 E5 */	bl __nw__FUl
/* 80189AC4 00186A04  7C 64 1B 79 */	or. r4, r3, r3
/* 80189AC8 00186A08  41 82 00 40 */	beq .L_80189B08
/* 80189ACC 00186A0C  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189AD0 00186A10  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189AD4 00186A14  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189AD8 00186A18  3C 60 80 4B */	lis r3, __vt__Q24Game16PikiEmotionState@ha
/* 80189ADC 00186A1C  90 04 00 00 */	stw r0, 0(r4)
/* 80189AE0 00186A20  38 00 00 13 */	li r0, 0x13
/* 80189AE4 00186A24  38 E0 00 00 */	li r7, 0
/* 80189AE8 00186A28  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189AEC 00186A2C  90 04 00 04 */	stw r0, 4(r4)
/* 80189AF0 00186A30  38 A2 AA 14 */	addi r5, r2, lbl_80518D74@sda21
/* 80189AF4 00186A34  38 03 39 5C */	addi r0, r3, __vt__Q24Game16PikiEmotionState@l
/* 80189AF8 00186A38  90 E4 00 08 */	stw r7, 8(r4)
/* 80189AFC 00186A3C  90 C4 00 00 */	stw r6, 0(r4)
/* 80189B00 00186A40  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189B04 00186A44  90 04 00 00 */	stw r0, 0(r4)
.L_80189B08:
/* 80189B08 00186A48  7F E3 FB 78 */	mr r3, r31
/* 80189B0C 00186A4C  48 00 90 7D */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189B10 00186A50  38 60 00 14 */	li r3, 0x14
/* 80189B14 00186A54  4B E9 A3 91 */	bl __nw__FUl
/* 80189B18 00186A58  7C 64 1B 79 */	or. r4, r3, r3
/* 80189B1C 00186A5C  41 82 00 40 */	beq .L_80189B5C
/* 80189B20 00186A60  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189B24 00186A64  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189B28 00186A68  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189B2C 00186A6C  3C 60 80 4B */	lis r3, __vt__Q24Game16PikiPressedState@ha
/* 80189B30 00186A70  90 04 00 00 */	stw r0, 0(r4)
/* 80189B34 00186A74  38 00 00 14 */	li r0, 0x14
/* 80189B38 00186A78  38 E0 00 00 */	li r7, 0
/* 80189B3C 00186A7C  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189B40 00186A80  90 04 00 04 */	stw r0, 4(r4)
/* 80189B44 00186A84  38 A2 AA 1C */	addi r5, r2, lbl_80518D7C@sda21
/* 80189B48 00186A88  38 03 40 7C */	addi r0, r3, __vt__Q24Game16PikiPressedState@l
/* 80189B4C 00186A8C  90 E4 00 08 */	stw r7, 8(r4)
/* 80189B50 00186A90  90 C4 00 00 */	stw r6, 0(r4)
/* 80189B54 00186A94  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189B58 00186A98  90 04 00 00 */	stw r0, 0(r4)
.L_80189B5C:
/* 80189B5C 00186A9C  7F E3 FB 78 */	mr r3, r31
/* 80189B60 00186AA0  48 00 90 29 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189B64 00186AA4  38 60 00 2C */	li r3, 0x2c
/* 80189B68 00186AA8  4B E9 A3 3D */	bl __nw__FUl
/* 80189B6C 00186AAC  7C 64 1B 79 */	or. r4, r3, r3
/* 80189B70 00186AB0  41 82 00 40 */	beq .L_80189BB0
/* 80189B74 00186AB4  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189B78 00186AB8  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189B7C 00186ABC  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189B80 00186AC0  3C 60 80 4B */	lis r3, __vt__Q24Game14PikiPanicState@ha
/* 80189B84 00186AC4  90 04 00 00 */	stw r0, 0(r4)
/* 80189B88 00186AC8  38 00 00 15 */	li r0, 0x15
/* 80189B8C 00186ACC  38 E0 00 00 */	li r7, 0
/* 80189B90 00186AD0  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189B94 00186AD4  90 04 00 04 */	stw r0, 4(r4)
/* 80189B98 00186AD8  38 A2 AA 24 */	addi r5, r2, lbl_80518D84@sda21
/* 80189B9C 00186ADC  38 03 42 60 */	addi r0, r3, __vt__Q24Game14PikiPanicState@l
/* 80189BA0 00186AE0  90 E4 00 08 */	stw r7, 8(r4)
/* 80189BA4 00186AE4  90 C4 00 00 */	stw r6, 0(r4)
/* 80189BA8 00186AE8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189BAC 00186AEC  90 04 00 00 */	stw r0, 0(r4)
.L_80189BB0:
/* 80189BB0 00186AF0  7F E3 FB 78 */	mr r3, r31
/* 80189BB4 00186AF4  48 00 8F D5 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189BB8 00186AF8  38 60 00 14 */	li r3, 0x14
/* 80189BBC 00186AFC  4B E9 A2 E9 */	bl __nw__FUl
/* 80189BC0 00186B00  7C 64 1B 79 */	or. r4, r3, r3
/* 80189BC4 00186B04  41 82 00 40 */	beq .L_80189C04
/* 80189BC8 00186B08  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189BCC 00186B0C  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189BD0 00186B10  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189BD4 00186B14  3C 60 80 4B */	lis r3, __vt__Q24Game19PikiDenkiDyingState@ha
/* 80189BD8 00186B18  90 04 00 00 */	stw r0, 0(r4)
/* 80189BDC 00186B1C  38 00 00 16 */	li r0, 0x16
/* 80189BE0 00186B20  38 E0 00 00 */	li r7, 0
/* 80189BE4 00186B24  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189BE8 00186B28  90 04 00 04 */	stw r0, 4(r4)
/* 80189BEC 00186B2C  38 BE 00 54 */	addi r5, r30, 0x54
/* 80189BF0 00186B30  38 03 41 04 */	addi r0, r3, __vt__Q24Game19PikiDenkiDyingState@l
/* 80189BF4 00186B34  90 E4 00 08 */	stw r7, 8(r4)
/* 80189BF8 00186B38  90 C4 00 00 */	stw r6, 0(r4)
/* 80189BFC 00186B3C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189C00 00186B40  90 04 00 00 */	stw r0, 0(r4)
.L_80189C04:
/* 80189C04 00186B44  7F E3 FB 78 */	mr r3, r31
/* 80189C08 00186B48  48 00 8F 81 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189C0C 00186B4C  38 60 00 14 */	li r3, 0x14
/* 80189C10 00186B50  4B E9 A2 95 */	bl __nw__FUl
/* 80189C14 00186B54  7C 64 1B 79 */	or. r4, r3, r3
/* 80189C18 00186B58  41 82 00 40 */	beq .L_80189C58
/* 80189C1C 00186B5C  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189C20 00186B60  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189C24 00186B64  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189C28 00186B68  3C 60 80 4B */	lis r3, __vt__Q24Game17PikiFallMeckState@ha
/* 80189C2C 00186B6C  90 04 00 00 */	stw r0, 0(r4)
/* 80189C30 00186B70  38 00 00 17 */	li r0, 0x17
/* 80189C34 00186B74  38 E0 00 00 */	li r7, 0
/* 80189C38 00186B78  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189C3C 00186B7C  90 04 00 04 */	stw r0, 4(r4)
/* 80189C40 00186B80  38 BE 00 60 */	addi r5, r30, 0x60
/* 80189C44 00186B84  38 03 3D 20 */	addi r0, r3, __vt__Q24Game17PikiFallMeckState@l
/* 80189C48 00186B88  90 E4 00 08 */	stw r7, 8(r4)
/* 80189C4C 00186B8C  90 C4 00 00 */	stw r6, 0(r4)
/* 80189C50 00186B90  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189C54 00186B94  90 04 00 00 */	stw r0, 0(r4)
.L_80189C58:
/* 80189C58 00186B98  7F E3 FB 78 */	mr r3, r31
/* 80189C5C 00186B9C  48 00 8F 2D */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189C60 00186BA0  38 60 00 18 */	li r3, 0x18
/* 80189C64 00186BA4  4B E9 A2 41 */	bl __nw__FUl
/* 80189C68 00186BA8  7C 64 1B 79 */	or. r4, r3, r3
/* 80189C6C 00186BAC  41 82 00 40 */	beq .L_80189CAC
/* 80189C70 00186BB0  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189C74 00186BB4  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189C78 00186BB8  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189C7C 00186BBC  3C 60 80 4B */	lis r3, __vt__Q24Game14PikiDyingState@ha
/* 80189C80 00186BC0  90 04 00 00 */	stw r0, 0(r4)
/* 80189C84 00186BC4  38 00 00 18 */	li r0, 0x18
/* 80189C88 00186BC8  38 E0 00 00 */	li r7, 0
/* 80189C8C 00186BCC  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189C90 00186BD0  90 04 00 04 */	stw r0, 4(r4)
/* 80189C94 00186BD4  38 A2 AA 2C */	addi r5, r2, lbl_80518D8C@sda21
/* 80189C98 00186BD8  38 03 41 78 */	addi r0, r3, __vt__Q24Game14PikiDyingState@l
/* 80189C9C 00186BDC  90 E4 00 08 */	stw r7, 8(r4)
/* 80189CA0 00186BE0  90 C4 00 00 */	stw r6, 0(r4)
/* 80189CA4 00186BE4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189CA8 00186BE8  90 04 00 00 */	stw r0, 0(r4)
.L_80189CAC:
/* 80189CAC 00186BEC  7F E3 FB 78 */	mr r3, r31
/* 80189CB0 00186BF0  48 00 8E D9 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189CB4 00186BF4  38 60 00 10 */	li r3, 0x10
/* 80189CB8 00186BF8  4B E9 A1 ED */	bl __nw__FUl
/* 80189CBC 00186BFC  7C 64 1B 79 */	or. r4, r3, r3
/* 80189CC0 00186C00  41 82 00 40 */	beq .L_80189D00
/* 80189CC4 00186C04  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189CC8 00186C08  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189CCC 00186C0C  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189CD0 00186C10  3C 60 80 4B */	lis r3, __vt__Q24Game13PikiDeadState@ha
/* 80189CD4 00186C14  90 04 00 00 */	stw r0, 0(r4)
/* 80189CD8 00186C18  38 00 00 19 */	li r0, 0x19
/* 80189CDC 00186C1C  38 E0 00 00 */	li r7, 0
/* 80189CE0 00186C20  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189CE4 00186C24  90 04 00 04 */	stw r0, 4(r4)
/* 80189CE8 00186C28  38 A2 AA 34 */	addi r5, r2, lbl_80518D94@sda21
/* 80189CEC 00186C2C  38 03 41 EC */	addi r0, r3, __vt__Q24Game13PikiDeadState@l
/* 80189CF0 00186C30  90 E4 00 08 */	stw r7, 8(r4)
/* 80189CF4 00186C34  90 C4 00 00 */	stw r6, 0(r4)
/* 80189CF8 00186C38  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189CFC 00186C3C  90 04 00 00 */	stw r0, 0(r4)
.L_80189D00:
/* 80189D00 00186C40  7F E3 FB 78 */	mr r3, r31
/* 80189D04 00186C44  48 00 8E 85 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189D08 00186C48  38 60 00 24 */	li r3, 0x24
/* 80189D0C 00186C4C  4B E9 A1 99 */	bl __nw__FUl
/* 80189D10 00186C50  7C 64 1B 79 */	or. r4, r3, r3
/* 80189D14 00186C54  41 82 00 40 */	beq .L_80189D54
/* 80189D18 00186C58  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189D1C 00186C5C  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189D20 00186C60  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189D24 00186C64  3C 60 80 4B */	lis r3, __vt__Q24Game16PikiSuikomiState@ha
/* 80189D28 00186C68  90 04 00 00 */	stw r0, 0(r4)
/* 80189D2C 00186C6C  38 00 00 1A */	li r0, 0x1a
/* 80189D30 00186C70  38 E0 00 00 */	li r7, 0
/* 80189D34 00186C74  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189D38 00186C78  90 04 00 04 */	stw r0, 4(r4)
/* 80189D3C 00186C7C  38 A2 AA 3C */	addi r5, r2, lbl_80518D9C@sda21
/* 80189D40 00186C80  38 03 3C AC */	addi r0, r3, __vt__Q24Game16PikiSuikomiState@l
/* 80189D44 00186C84  90 E4 00 08 */	stw r7, 8(r4)
/* 80189D48 00186C88  90 C4 00 00 */	stw r6, 0(r4)
/* 80189D4C 00186C8C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189D50 00186C90  90 04 00 00 */	stw r0, 0(r4)
.L_80189D54:
/* 80189D54 00186C94  7F E3 FB 78 */	mr r3, r31
/* 80189D58 00186C98  48 00 8E 31 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189D5C 00186C9C  38 60 00 4C */	li r3, 0x4c
/* 80189D60 00186CA0  4B E9 A1 45 */	bl __nw__FUl
/* 80189D64 00186CA4  7C 64 1B 79 */	or. r4, r3, r3
/* 80189D68 00186CA8  41 82 00 40 */	beq .L_80189DA8
/* 80189D6C 00186CAC  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189D70 00186CB0  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189D74 00186CB4  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189D78 00186CB8  3C 60 80 4B */	lis r3, __vt__Q24Game15PikiHoleinState@ha
/* 80189D7C 00186CBC  90 04 00 00 */	stw r0, 0(r4)
/* 80189D80 00186CC0  38 00 00 1B */	li r0, 0x1b
/* 80189D84 00186CC4  38 E0 00 00 */	li r7, 0
/* 80189D88 00186CC8  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189D8C 00186CCC  90 04 00 04 */	stw r0, 4(r4)
/* 80189D90 00186CD0  38 A2 AA 44 */	addi r5, r2, lbl_80518DA4@sda21
/* 80189D94 00186CD4  38 03 44 A4 */	addi r0, r3, __vt__Q24Game15PikiHoleinState@l
/* 80189D98 00186CD8  90 E4 00 08 */	stw r7, 8(r4)
/* 80189D9C 00186CDC  90 C4 00 00 */	stw r6, 0(r4)
/* 80189DA0 00186CE0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189DA4 00186CE4  90 04 00 00 */	stw r0, 0(r4)
.L_80189DA8:
/* 80189DA8 00186CE8  7F E3 FB 78 */	mr r3, r31
/* 80189DAC 00186CEC  48 00 8D DD */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189DB0 00186CF0  38 60 00 34 */	li r3, 0x34
/* 80189DB4 00186CF4  4B E9 A0 F1 */	bl __nw__FUl
/* 80189DB8 00186CF8  7C 64 1B 79 */	or. r4, r3, r3
/* 80189DBC 00186CFC  41 82 00 40 */	beq .L_80189DFC
/* 80189DC0 00186D00  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189DC4 00186D04  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189DC8 00186D08  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189DCC 00186D0C  3C 60 80 4B */	lis r3, __vt__Q24Game19PikiFountainonState@ha
/* 80189DD0 00186D10  90 04 00 00 */	stw r0, 0(r4)
/* 80189DD4 00186D14  38 00 00 1C */	li r0, 0x1c
/* 80189DD8 00186D18  38 E0 00 00 */	li r7, 0
/* 80189DDC 00186D1C  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189DE0 00186D20  90 04 00 04 */	stw r0, 4(r4)
/* 80189DE4 00186D24  38 BE 00 6C */	addi r5, r30, 0x6c
/* 80189DE8 00186D28  38 03 44 30 */	addi r0, r3, __vt__Q24Game19PikiFountainonState@l
/* 80189DEC 00186D2C  90 E4 00 08 */	stw r7, 8(r4)
/* 80189DF0 00186D30  90 C4 00 00 */	stw r6, 0(r4)
/* 80189DF4 00186D34  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189DF8 00186D38  90 04 00 00 */	stw r0, 0(r4)
.L_80189DFC:
/* 80189DFC 00186D3C  7F E3 FB 78 */	mr r3, r31
/* 80189E00 00186D40  48 00 8D 89 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189E04 00186D44  38 60 00 14 */	li r3, 0x14
/* 80189E08 00186D48  4B E9 A0 9D */	bl __nw__FUl
/* 80189E0C 00186D4C  7C 64 1B 79 */	or. r4, r3, r3
/* 80189E10 00186D50  41 82 00 40 */	beq .L_80189E50
/* 80189E14 00186D54  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189E18 00186D58  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189E1C 00186D5C  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189E20 00186D60  3C 60 80 4B */	lis r3, __vt__Q24Game13PikiKokeState@ha
/* 80189E24 00186D64  90 04 00 00 */	stw r0, 0(r4)
/* 80189E28 00186D68  38 00 00 1E */	li r0, 0x1e
/* 80189E2C 00186D6C  38 E0 00 00 */	li r7, 0
/* 80189E30 00186D70  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189E34 00186D74  90 04 00 04 */	stw r0, 4(r4)
/* 80189E38 00186D78  38 A2 AA 4C */	addi r5, r2, lbl_80518DAC@sda21
/* 80189E3C 00186D7C  38 03 3A 44 */	addi r0, r3, __vt__Q24Game13PikiKokeState@l
/* 80189E40 00186D80  90 E4 00 08 */	stw r7, 8(r4)
/* 80189E44 00186D84  90 C4 00 00 */	stw r6, 0(r4)
/* 80189E48 00186D88  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189E4C 00186D8C  90 04 00 00 */	stw r0, 0(r4)
.L_80189E50:
/* 80189E50 00186D90  7F E3 FB 78 */	mr r3, r31
/* 80189E54 00186D94  48 00 8D 35 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189E58 00186D98  38 60 00 14 */	li r3, 0x14
/* 80189E5C 00186D9C  4B E9 A0 49 */	bl __nw__FUl
/* 80189E60 00186DA0  7C 64 1B 79 */	or. r4, r3, r3
/* 80189E64 00186DA4  41 82 00 40 */	beq .L_80189EA4
/* 80189E68 00186DA8  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189E6C 00186DAC  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189E70 00186DB0  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189E74 00186DB4  3C 60 80 4B */	lis r3, __vt__Q24Game15PikiEscapeState@ha
/* 80189E78 00186DB8  90 04 00 00 */	stw r0, 0(r4)
/* 80189E7C 00186DBC  38 00 00 1F */	li r0, 0x1f
/* 80189E80 00186DC0  38 E0 00 00 */	li r7, 0
/* 80189E84 00186DC4  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189E88 00186DC8  90 04 00 04 */	stw r0, 4(r4)
/* 80189E8C 00186DCC  38 A2 AA 54 */	addi r5, r2, lbl_80518DB4@sda21
/* 80189E90 00186DD0  38 03 38 00 */	addi r0, r3, __vt__Q24Game15PikiEscapeState@l
/* 80189E94 00186DD4  90 E4 00 08 */	stw r7, 8(r4)
/* 80189E98 00186DD8  90 C4 00 00 */	stw r6, 0(r4)
/* 80189E9C 00186DDC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189EA0 00186DE0  90 04 00 00 */	stw r0, 0(r4)
.L_80189EA4:
/* 80189EA4 00186DE4  7F E3 FB 78 */	mr r3, r31
/* 80189EA8 00186DE8  48 00 8C E1 */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189EAC 00186DEC  38 60 00 24 */	li r3, 0x24
/* 80189EB0 00186DF0  4B E9 9F F5 */	bl __nw__FUl
/* 80189EB4 00186DF4  7C 64 1B 79 */	or. r4, r3, r3
/* 80189EB8 00186DF8  41 82 00 40 */	beq .L_80189EF8
/* 80189EBC 00186DFC  3C 60 80 4B */	lis r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@ha
/* 80189EC0 00186E00  3C A0 80 4B */	lis r5, __vt__Q24Game9PikiState@ha
/* 80189EC4 00186E04  38 03 47 24 */	addi r0, r3, "__vt__Q24Game22FSMState<Q24Game4Piki>"@l
/* 80189EC8 00186E08  3C 60 80 4B */	lis r3, __vt__Q24Game15PikiCarrotState@ha
/* 80189ECC 00186E0C  90 04 00 00 */	stw r0, 0(r4)
/* 80189ED0 00186E10  38 00 00 20 */	li r0, 0x20
/* 80189ED4 00186E14  38 E0 00 00 */	li r7, 0
/* 80189ED8 00186E18  38 C5 47 5C */	addi r6, r5, __vt__Q24Game9PikiState@l
/* 80189EDC 00186E1C  90 04 00 04 */	stw r0, 4(r4)
/* 80189EE0 00186E20  38 A2 AA 5C */	addi r5, r2, lbl_80518DBC@sda21
/* 80189EE4 00186E24  38 03 45 C8 */	addi r0, r3, __vt__Q24Game15PikiCarrotState@l
/* 80189EE8 00186E28  90 E4 00 08 */	stw r7, 8(r4)
/* 80189EEC 00186E2C  90 C4 00 00 */	stw r6, 0(r4)
/* 80189EF0 00186E30  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80189EF4 00186E34  90 04 00 00 */	stw r0, 0(r4)
.L_80189EF8:
/* 80189EF8 00186E38  7F E3 FB 78 */	mr r3, r31
/* 80189EFC 00186E3C  48 00 8C 8D */	bl "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"
/* 80189F00 00186E40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80189F04 00186E44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80189F08 00186E48  83 C1 00 08 */	lwz r30, 8(r1)
/* 80189F0C 00186E4C  7C 08 03 A6 */	mtlr r0
/* 80189F10 00186E50  38 21 00 10 */	addi r1, r1, 0x10
/* 80189F14 00186E54  4E 80 00 20 */	blr 
.endfn init__Q24Game7PikiFSMFPQ24Game4Piki

.fn transit__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg, global
/* 80189F18 00186E58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80189F1C 00186E5C  7C 08 02 A6 */	mflr r0
/* 80189F20 00186E60  3C E0 80 48 */	lis r7, lbl_8047EBE8@ha
/* 80189F24 00186E64  90 01 00 24 */	stw r0, 0x24(r1)
/* 80189F28 00186E68  BF 41 00 08 */	stmw r26, 8(r1)
/* 80189F2C 00186E6C  7C 9B 23 78 */	mr r27, r4
/* 80189F30 00186E70  7C 7A 1B 78 */	mr r26, r3
/* 80189F34 00186E74  7C BC 2B 78 */	mr r28, r5
/* 80189F38 00186E78  7C DD 33 78 */	mr r29, r6
/* 80189F3C 00186E7C  3B E7 EB E8 */	addi r31, r7, lbl_8047EBE8@l
/* 80189F40 00186E80  83 C4 02 90 */	lwz r30, 0x290(r4)
/* 80189F44 00186E84  28 1E 00 00 */	cmplwi r30, 0
/* 80189F48 00186E88  41 82 00 28 */	beq .L_80189F70
/* 80189F4C 00186E8C  80 1E 00 04 */	lwz r0, 4(r30)
/* 80189F50 00186E90  2C 00 00 20 */	cmpwi r0, 0x20
/* 80189F54 00186E94  40 82 00 1C */	bne .L_80189F70
/* 80189F58 00186E98  7F C3 F3 78 */	mr r3, r30
/* 80189F5C 00186E9C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80189F60 00186EA0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80189F64 00186EA4  7D 89 03 A6 */	mtctr r12
/* 80189F68 00186EA8  4E 80 04 21 */	bctrl 
/* 80189F6C 00186EAC  48 00 00 B0 */	b .L_8018A01C
.L_80189F70:
/* 80189F70 00186EB0  28 1E 00 00 */	cmplwi r30, 0
/* 80189F74 00186EB4  41 82 00 90 */	beq .L_8018A004
/* 80189F78 00186EB8  7F C3 F3 78 */	mr r3, r30
/* 80189F7C 00186EBC  7F 84 E3 78 */	mr r4, r28
/* 80189F80 00186EC0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80189F84 00186EC4  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80189F88 00186EC8  7D 89 03 A6 */	mtctr r12
/* 80189F8C 00186ECC  4E 80 04 21 */	bctrl 
/* 80189F90 00186ED0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80189F94 00186ED4  41 82 00 88 */	beq .L_8018A01C
/* 80189F98 00186ED8  7F C3 F3 78 */	mr r3, r30
/* 80189F9C 00186EDC  7F 84 E3 78 */	mr r4, r28
/* 80189FA0 00186EE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80189FA4 00186EE4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80189FA8 00186EE8  7D 89 03 A6 */	mtctr r12
/* 80189FAC 00186EEC  4E 80 04 21 */	bctrl 
/* 80189FB0 00186EF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80189FB4 00186EF4  40 82 00 50 */	bne .L_8018A004
/* 80189FB8 00186EF8  80 9A 00 14 */	lwz r4, 0x14(r26)
/* 80189FBC 00186EFC  57 80 10 3A */	slwi r0, r28, 2
/* 80189FC0 00186F00  81 3A 00 04 */	lwz r9, 4(r26)
/* 80189FC4 00186F04  38 7F 00 78 */	addi r3, r31, 0x78
/* 80189FC8 00186F08  7C E4 00 2E */	lwzx r7, r4, r0
/* 80189FCC 00186F0C  38 BF 00 88 */	addi r5, r31, 0x88
/* 80189FD0 00186F10  80 DE 00 04 */	lwz r6, 4(r30)
/* 80189FD4 00186F14  38 80 02 BD */	li r4, 0x2bd
/* 80189FD8 00186F18  54 E0 10 3A */	slwi r0, r7, 2
/* 80189FDC 00186F1C  81 1E 00 0C */	lwz r8, 0xc(r30)
/* 80189FE0 00186F20  7D 29 00 2E */	lwzx r9, r9, r0
/* 80189FE4 00186F24  81 29 00 0C */	lwz r9, 0xc(r9)
/* 80189FE8 00186F28  4C C6 31 82 */	crclr 6
/* 80189FEC 00186F2C  4B EA 06 55 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80189FF0 00186F30  38 7F 00 78 */	addi r3, r31, 0x78
/* 80189FF4 00186F34  38 BF 00 A8 */	addi r5, r31, 0xa8
/* 80189FF8 00186F38  38 80 02 BE */	li r4, 0x2be
/* 80189FFC 00186F3C  4C C6 31 82 */	crclr 6
/* 8018A000 00186F40  4B EA 06 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018A004:
/* 8018A004 00186F44  93 9A 00 1C */	stw r28, 0x1c(r26)
/* 8018A008 00186F48  7F 43 D3 78 */	mr r3, r26
/* 8018A00C 00186F4C  7F 64 DB 78 */	mr r4, r27
/* 8018A010 00186F50  7F 85 E3 78 */	mr r5, r28
/* 8018A014 00186F54  7F A6 EB 78 */	mr r6, r29
/* 8018A018 00186F58  4B FC 0B 21 */	bl "transit__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
.L_8018A01C:
/* 8018A01C 00186F5C  BB 41 00 08 */	lmw r26, 8(r1)
/* 8018A020 00186F60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018A024 00186F64  7C 08 03 A6 */	mtlr r0
/* 8018A028 00186F68  38 21 00 20 */	addi r1, r1, 0x20
/* 8018A02C 00186F6C  4E 80 00 20 */	blr 
.endfn transit__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg

.fn transitForce__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg, global
/* 8018A030 00186F70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018A034 00186F74  7C 08 02 A6 */	mflr r0
/* 8018A038 00186F78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A03C 00186F7C  80 E4 02 90 */	lwz r7, 0x290(r4)
/* 8018A040 00186F80  28 07 00 00 */	cmplwi r7, 0
/* 8018A044 00186F84  41 82 00 28 */	beq .L_8018A06C
/* 8018A048 00186F88  80 07 00 04 */	lwz r0, 4(r7)
/* 8018A04C 00186F8C  2C 00 00 20 */	cmpwi r0, 0x20
/* 8018A050 00186F90  40 82 00 1C */	bne .L_8018A06C
/* 8018A054 00186F94  7C E3 3B 78 */	mr r3, r7
/* 8018A058 00186F98  81 87 00 00 */	lwz r12, 0(r7)
/* 8018A05C 00186F9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8018A060 00186FA0  7D 89 03 A6 */	mtctr r12
/* 8018A064 00186FA4  4E 80 04 21 */	bctrl 
/* 8018A068 00186FA8  48 00 00 08 */	b .L_8018A070
.L_8018A06C:
/* 8018A06C 00186FAC  4B FC 0A CD */	bl "transit__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
.L_8018A070:
/* 8018A070 00186FB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018A074 00186FB4  7C 08 03 A6 */	mtlr r0
/* 8018A078 00186FB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8018A07C 00186FBC  4E 80 00 20 */	blr 
.endfn transitForce__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg

.fn init__Q24Game13PikiWalkStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018A080 00186FC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018A084 00186FC4  7C 08 02 A6 */	mflr r0
/* 8018A088 00186FC8  7C 83 23 78 */	mr r3, r4
/* 8018A08C 00186FCC  38 80 00 1F */	li r4, 0x1f
/* 8018A090 00186FD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A094 00186FD4  38 A0 00 1F */	li r5, 0x1f
/* 8018A098 00186FD8  38 C0 00 00 */	li r6, 0
/* 8018A09C 00186FDC  38 E0 00 00 */	li r7, 0
/* 8018A0A0 00186FE0  81 83 00 00 */	lwz r12, 0(r3)
/* 8018A0A4 00186FE4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018A0A8 00186FE8  7D 89 03 A6 */	mtctr r12
/* 8018A0AC 00186FEC  4E 80 04 21 */	bctrl 
/* 8018A0B0 00186FF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018A0B4 00186FF4  7C 08 03 A6 */	mtlr r0
/* 8018A0B8 00186FF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8018A0BC 00186FFC  4E 80 00 20 */	blr 
.endfn init__Q24Game13PikiWalkStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game13PikiWalkStateFPQ24Game4Piki, global
/* 8018A0C0 00187000  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018A0C4 00187004  7C 08 02 A6 */	mflr r0
/* 8018A0C8 00187008  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A0CC 0018700C  80 64 02 94 */	lwz r3, 0x294(r4)
/* 8018A0D0 00187010  48 00 CC 55 */	bl exec__Q26PikiAI5BrainFv
/* 8018A0D4 00187014  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018A0D8 00187018  7C 08 03 A6 */	mtlr r0
/* 8018A0DC 0018701C  38 21 00 10 */	addi r1, r1, 0x10
/* 8018A0E0 00187020  4E 80 00 20 */	blr 
.endfn exec__Q24Game13PikiWalkStateFPQ24Game4Piki

.fn cleanup__Q24Game13PikiWalkStateFPQ24Game4Piki, global
/* 8018A0E4 00187024  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13PikiWalkStateFPQ24Game4Piki

.fn init__Q24Game17PikiDemoWaitStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018A0E8 00187028  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018A0EC 0018702C  7C 08 02 A6 */	mflr r0
/* 8018A0F0 00187030  7C 83 23 78 */	mr r3, r4
/* 8018A0F4 00187034  38 80 00 1F */	li r4, 0x1f
/* 8018A0F8 00187038  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A0FC 0018703C  38 A0 00 1F */	li r5, 0x1f
/* 8018A100 00187040  38 C0 00 00 */	li r6, 0
/* 8018A104 00187044  38 E0 00 00 */	li r7, 0
/* 8018A108 00187048  81 83 00 00 */	lwz r12, 0(r3)
/* 8018A10C 0018704C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018A110 00187050  7D 89 03 A6 */	mtctr r12
/* 8018A114 00187054  4E 80 04 21 */	bctrl 
/* 8018A118 00187058  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018A11C 0018705C  7C 08 03 A6 */	mtlr r0
/* 8018A120 00187060  38 21 00 10 */	addi r1, r1, 0x10
/* 8018A124 00187064  4E 80 00 20 */	blr 
.endfn init__Q24Game17PikiDemoWaitStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game17PikiDemoWaitStateFPQ24Game4Piki, global
/* 8018A128 00187068  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018A12C 0018706C  7C 08 02 A6 */	mflr r0
/* 8018A130 00187070  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A134 00187074  80 64 02 94 */	lwz r3, 0x294(r4)
/* 8018A138 00187078  48 00 CB ED */	bl exec__Q26PikiAI5BrainFv
/* 8018A13C 0018707C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018A140 00187080  7C 08 03 A6 */	mtlr r0
/* 8018A144 00187084  38 21 00 10 */	addi r1, r1, 0x10
/* 8018A148 00187088  4E 80 00 20 */	blr 
.endfn exec__Q24Game17PikiDemoWaitStateFPQ24Game4Piki

.fn cleanup__Q24Game17PikiDemoWaitStateFPQ24Game4Piki, global
/* 8018A14C 0018708C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game17PikiDemoWaitStateFPQ24Game4Piki

.fn init__Q24Game15PikiCarrotStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018A150 00187090  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018A154 00187094  7C 08 02 A6 */	mflr r0
/* 8018A158 00187098  38 A0 00 1F */	li r5, 0x1f
/* 8018A15C 0018709C  38 C0 00 00 */	li r6, 0
/* 8018A160 001870A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018A164 001870A4  38 E0 00 00 */	li r7, 0
/* 8018A168 001870A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018A16C 001870AC  7C 9F 23 78 */	mr r31, r4
/* 8018A170 001870B0  38 80 00 1F */	li r4, 0x1f
/* 8018A174 001870B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018A178 001870B8  7C 7E 1B 78 */	mr r30, r3
/* 8018A17C 001870BC  7F E3 FB 78 */	mr r3, r31
/* 8018A180 001870C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A184 001870C4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018A188 001870C8  7D 89 03 A6 */	mtctr r12
/* 8018A18C 001870CC  4E 80 04 21 */	bctrl 
/* 8018A190 001870D0  C0 02 AA 64 */	lfs f0, lbl_80518DC4@sda21(r2)
/* 8018A194 001870D4  7F E3 FB 78 */	mr r3, r31
/* 8018A198 001870D8  38 80 00 00 */	li r4, 0
/* 8018A19C 001870DC  D0 1F 01 80 */	stfs f0, 0x180(r31)
/* 8018A1A0 001870E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A1A4 001870E4  81 8C 01 E8 */	lwz r12, 0x1e8(r12)
/* 8018A1A8 001870E8  7D 89 03 A6 */	mtctr r12
/* 8018A1AC 001870EC  4E 80 04 21 */	bctrl 
/* 8018A1B0 001870F0  7F E3 FB 78 */	mr r3, r31
/* 8018A1B4 001870F4  38 80 00 00 */	li r4, 0
/* 8018A1B8 001870F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A1BC 001870FC  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 8018A1C0 00187100  7D 89 03 A6 */	mtctr r12
/* 8018A1C4 00187104  4E 80 04 21 */	bctrl 
/* 8018A1C8 00187108  7F E3 FB 78 */	mr r3, r31
/* 8018A1CC 0018710C  38 80 00 01 */	li r4, 1
/* 8018A1D0 00187110  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A1D4 00187114  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8018A1D8 00187118  7D 89 03 A6 */	mtctr r12
/* 8018A1DC 0018711C  4E 80 04 21 */	bctrl 
/* 8018A1E0 00187120  7F E3 FB 78 */	mr r3, r31
/* 8018A1E4 00187124  38 80 00 01 */	li r4, 1
/* 8018A1E8 00187128  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A1EC 0018712C  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 8018A1F0 00187130  7D 89 03 A6 */	mtctr r12
/* 8018A1F4 00187134  4E 80 04 21 */	bctrl 
/* 8018A1F8 00187138  4B F3 F3 A9 */	bl rand
/* 8018A1FC 0018713C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8018A200 00187140  3C 60 43 30 */	lis r3, 0x4330
/* 8018A204 00187144  90 01 00 0C */	stw r0, 0xc(r1)
/* 8018A208 00187148  38 00 00 00 */	li r0, 0
/* 8018A20C 0018714C  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018A210 00187150  90 61 00 08 */	stw r3, 8(r1)
/* 8018A214 00187154  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 8018A218 00187158  C8 01 00 08 */	lfd f0, 8(r1)
/* 8018A21C 0018715C  C0 22 AA 70 */	lfs f1, lbl_80518DD0@sda21(r2)
/* 8018A220 00187160  EC 60 18 28 */	fsubs f3, f0, f3
/* 8018A224 00187164  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018A228 00187168  EC 43 10 24 */	fdivs f2, f3, f2
/* 8018A22C 0018716C  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8018A230 00187170  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8018A234 00187174  98 1E 00 14 */	stb r0, 0x14(r30)
/* 8018A238 00187178  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018A23C 0018717C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018A240 00187180  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018A244 00187184  7C 08 03 A6 */	mtlr r0
/* 8018A248 00187188  38 21 00 20 */	addi r1, r1, 0x20
/* 8018A24C 0018718C  4E 80 00 20 */	blr 
.endfn init__Q24Game15PikiCarrotStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game15PikiCarrotStateFPQ24Game4Piki, global
/* 8018A250 00187190  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 8018A254 00187194  7C 08 02 A6 */	mflr r0
/* 8018A258 00187198  90 01 01 24 */	stw r0, 0x124(r1)
/* 8018A25C 0018719C  93 E1 01 1C */	stw r31, 0x11c(r1)
/* 8018A260 001871A0  7C 9F 23 78 */	mr r31, r4
/* 8018A264 001871A4  93 C1 01 18 */	stw r30, 0x118(r1)
/* 8018A268 001871A8  93 A1 01 14 */	stw r29, 0x114(r1)
/* 8018A26C 001871AC  93 81 01 10 */	stw r28, 0x110(r1)
/* 8018A270 001871B0  7C 7C 1B 78 */	mr r28, r3
/* 8018A274 001871B4  7F E3 FB 78 */	mr r3, r31
/* 8018A278 001871B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A27C 001871BC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8018A280 001871C0  7D 89 03 A6 */	mtctr r12
/* 8018A284 001871C4  4E 80 04 21 */	bctrl 
/* 8018A288 001871C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018A28C 001871CC  41 82 01 08 */	beq .L_8018A394
/* 8018A290 001871D0  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018A294 001871D4  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 8018A298 001871D8  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 8018A29C 001871DC  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8018A2A0 001871E0  88 1C 00 14 */	lbz r0, 0x14(r28)
/* 8018A2A4 001871E4  28 00 00 00 */	cmplwi r0, 0
/* 8018A2A8 001871E8  41 82 00 24 */	beq .L_8018A2CC
/* 8018A2AC 001871EC  7F E3 FB 78 */	mr r3, r31
/* 8018A2B0 001871F0  38 9C 00 18 */	addi r4, r28, 0x18
/* 8018A2B4 001871F4  38 A0 00 00 */	li r5, 0
/* 8018A2B8 001871F8  4B FB 0E F1 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8018A2BC 001871FC  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018A2C0 00187200  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8018A2C4 00187204  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8018A2C8 00187208  D0 1F 02 08 */	stfs f0, 0x208(r31)
.L_8018A2CC:
/* 8018A2CC 0018720C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018A2D0 00187210  C0 5C 00 10 */	lfs f2, 0x10(r28)
/* 8018A2D4 00187214  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018A2D8 00187218  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018A2DC 0018721C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8018A2E0 00187220  D0 3C 00 10 */	stfs f1, 0x10(r28)
/* 8018A2E4 00187224  C0 3C 00 10 */	lfs f1, 0x10(r28)
/* 8018A2E8 00187228  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018A2EC 0018722C  4C 40 13 82 */	cror 2, 0, 2
/* 8018A2F0 00187230  40 82 00 9C */	bne .L_8018A38C
/* 8018A2F4 00187234  7F E4 FB 78 */	mr r4, r31
/* 8018A2F8 00187238  38 61 00 14 */	addi r3, r1, 0x14
/* 8018A2FC 0018723C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A300 00187240  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018A304 00187244  7D 89 03 A6 */	mtctr r12
/* 8018A308 00187248  4E 80 04 21 */	bctrl 
/* 8018A30C 0018724C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8018A310 00187250  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8018A314 00187254  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8018A318 00187258  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8018A31C 0018725C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8018A320 00187260  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8018A324 00187264  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8018A328 00187268  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8018A32C 0018726C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8018A330 00187270  3C 60 80 4B */	lis r3, __vt__Q23efx9TPikuDead@ha
/* 8018A334 00187274  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 8018A338 00187278  38 C0 02 76 */	li r6, 0x276
/* 8018A33C 0018727C  38 A0 00 00 */	li r5, 0
/* 8018A340 00187280  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8018A344 00187284  38 03 45 B4 */	addi r0, r3, __vt__Q23efx9TPikuDead@l
/* 8018A348 00187288  38 61 00 2C */	addi r3, r1, 0x2c
/* 8018A34C 0018728C  90 81 00 38 */	stw r4, 0x38(r1)
/* 8018A350 00187290  38 81 00 38 */	addi r4, r1, 0x38
/* 8018A354 00187294  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8018A358 00187298  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8018A35C 0018729C  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8018A360 001872A0  B0 C1 00 30 */	sth r6, 0x30(r1)
/* 8018A364 001872A4  90 A1 00 34 */	stw r5, 0x34(r1)
/* 8018A368 001872A8  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8018A36C 001872AC  48 22 4C 19 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8018A370 001872B0  7F E3 FB 78 */	mr r3, r31
/* 8018A374 001872B4  38 80 38 57 */	li r4, 0x3857
/* 8018A378 001872B8  38 A0 00 00 */	li r5, 0
/* 8018A37C 001872BC  4B FB E5 51 */	bl startSound__Q24Game4PikiFUlb
/* 8018A380 001872C0  7F E3 FB 78 */	mr r3, r31
/* 8018A384 001872C4  38 80 00 00 */	li r4, 0
/* 8018A388 001872C8  4B FB 0D 69 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8018A38C:
/* 8018A38C 001872CC  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018A390 001872D0  D0 1F 02 34 */	stfs f0, 0x234(r31)
.L_8018A394:
/* 8018A394 001872D4  C0 7F 02 00 */	lfs f3, 0x200(r31)
/* 8018A398 001872D8  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018A39C 001872DC  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8018A3A0 001872E0  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8018A3A4 001872E4  C0 5F 02 04 */	lfs f2, 0x204(r31)
/* 8018A3A8 001872E8  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8018A3AC 001872EC  EC 82 00 B2 */	fmuls f4, f2, f2
/* 8018A3B0 001872F0  C0 5F 02 08 */	lfs f2, 0x208(r31)
/* 8018A3B4 001872F4  EC 00 20 2A */	fadds f0, f0, f4
/* 8018A3B8 001872F8  EC A2 00 B2 */	fmuls f5, f2, f2
/* 8018A3BC 001872FC  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 8018A3C0 00187300  EC 05 00 2A */	fadds f0, f5, f0
/* 8018A3C4 00187304  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8018A3C8 00187308  40 81 00 20 */	ble .L_8018A3E8
/* 8018A3CC 0018730C  EC 03 20 FA */	fmadds f0, f3, f3, f4
/* 8018A3D0 00187310  EC 85 00 2A */	fadds f4, f5, f0
/* 8018A3D4 00187314  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 8018A3D8 00187318  40 81 00 14 */	ble .L_8018A3EC
/* 8018A3DC 0018731C  FC 00 20 34 */	frsqrte f0, f4
/* 8018A3E0 00187320  EC 80 01 32 */	fmuls f4, f0, f4
/* 8018A3E4 00187324  48 00 00 08 */	b .L_8018A3EC
.L_8018A3E8:
/* 8018A3E8 00187328  FC 80 08 90 */	fmr f4, f1
.L_8018A3EC:
/* 8018A3EC 0018732C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018A3F0 00187330  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8018A3F4 00187334  40 81 00 34 */	ble .L_8018A428
/* 8018A3F8 00187338  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 8018A3FC 0018733C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8018A400 00187340  EC 60 20 24 */	fdivs f3, f0, f4
/* 8018A404 00187344  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8018A408 00187348  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8018A40C 0018734C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8018A410 00187350  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8018A414 00187354  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8018A418 00187358  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8018A41C 0018735C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8018A420 00187360  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8018A424 00187364  48 00 00 08 */	b .L_8018A42C
.L_8018A428:
/* 8018A428 00187368  FC 80 00 90 */	fmr f4, f0
.L_8018A42C:
/* 8018A42C 0018736C  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018A430 00187370  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 8018A434 00187374  40 81 01 30 */	ble .L_8018A564
/* 8018A438 00187378  C0 61 00 20 */	lfs f3, 0x20(r1)
/* 8018A43C 0018737C  38 61 00 D8 */	addi r3, r1, 0xd8
/* 8018A440 00187380  C0 82 AA 88 */	lfs f4, lbl_80518DE8@sda21(r2)
/* 8018A444 00187384  38 81 00 20 */	addi r4, r1, 0x20
/* 8018A448 00187388  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8018A44C 0018738C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8018A450 00187390  EC 63 01 32 */	fmuls f3, f3, f4
/* 8018A454 00187394  EC 42 01 32 */	fmuls f2, f2, f4
/* 8018A458 00187398  EC 00 01 32 */	fmuls f0, f0, f4
/* 8018A45C 0018739C  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8018A460 001873A0  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8018A464 001873A4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8018A468 001873A8  48 29 DB 29 */	bl "makeNaturalPosture__7MatrixfFR10Vector3<f>f"
/* 8018A46C 001873AC  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 8018A470 001873B0  38 61 00 A8 */	addi r3, r1, 0xa8
/* 8018A474 001873B4  38 A4 41 E4 */	addi r5, r4, "zero__10Vector3<f>"@l
/* 8018A478 001873B8  38 9F 01 68 */	addi r4, r31, 0x168
/* 8018A47C 001873BC  48 29 E0 E5 */	bl "makeST__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 8018A480 001873C0  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018A484 001873C4  38 61 00 D8 */	addi r3, r1, 0xd8
/* 8018A488 001873C8  C0 02 AA 8C */	lfs f0, lbl_80518DEC@sda21(r2)
/* 8018A48C 001873CC  38 81 00 A8 */	addi r4, r1, 0xa8
/* 8018A490 001873D0  D0 21 00 E4 */	stfs f1, 0xe4(r1)
/* 8018A494 001873D4  38 A1 00 48 */	addi r5, r1, 0x48
/* 8018A498 001873D8  D0 01 00 F4 */	stfs f0, 0xf4(r1)
/* 8018A49C 001873DC  D0 21 01 04 */	stfs f1, 0x104(r1)
/* 8018A4A0 001873E0  4B F5 FE 61 */	bl PSMTXConcat
/* 8018A4A4 001873E4  81 81 00 48 */	lwz r12, 0x48(r1)
/* 8018A4A8 001873E8  7F E4 FB 78 */	mr r4, r31
/* 8018A4AC 001873EC  83 81 00 4C */	lwz r28, 0x4c(r1)
/* 8018A4B0 001873F0  38 61 00 08 */	addi r3, r1, 8
/* 8018A4B4 001873F4  83 A1 00 50 */	lwz r29, 0x50(r1)
/* 8018A4B8 001873F8  83 C1 00 54 */	lwz r30, 0x54(r1)
/* 8018A4BC 001873FC  81 61 00 58 */	lwz r11, 0x58(r1)
/* 8018A4C0 00187400  81 41 00 5C */	lwz r10, 0x5c(r1)
/* 8018A4C4 00187404  81 21 00 60 */	lwz r9, 0x60(r1)
/* 8018A4C8 00187408  81 01 00 64 */	lwz r8, 0x64(r1)
/* 8018A4CC 0018740C  80 E1 00 68 */	lwz r7, 0x68(r1)
/* 8018A4D0 00187410  80 C1 00 6C */	lwz r6, 0x6c(r1)
/* 8018A4D4 00187414  80 A1 00 70 */	lwz r5, 0x70(r1)
/* 8018A4D8 00187418  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8018A4DC 0018741C  91 81 00 78 */	stw r12, 0x78(r1)
/* 8018A4E0 00187420  91 9F 01 38 */	stw r12, 0x138(r31)
/* 8018A4E4 00187424  93 9F 01 3C */	stw r28, 0x13c(r31)
/* 8018A4E8 00187428  93 BF 01 40 */	stw r29, 0x140(r31)
/* 8018A4EC 0018742C  93 DF 01 44 */	stw r30, 0x144(r31)
/* 8018A4F0 00187430  91 7F 01 48 */	stw r11, 0x148(r31)
/* 8018A4F4 00187434  91 5F 01 4C */	stw r10, 0x14c(r31)
/* 8018A4F8 00187438  91 3F 01 50 */	stw r9, 0x150(r31)
/* 8018A4FC 0018743C  91 1F 01 54 */	stw r8, 0x154(r31)
/* 8018A500 00187440  90 FF 01 58 */	stw r7, 0x158(r31)
/* 8018A504 00187444  90 DF 01 5C */	stw r6, 0x15c(r31)
/* 8018A508 00187448  90 BF 01 60 */	stw r5, 0x160(r31)
/* 8018A50C 0018744C  90 1F 01 64 */	stw r0, 0x164(r31)
/* 8018A510 00187450  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A514 00187454  93 81 00 7C */	stw r28, 0x7c(r1)
/* 8018A518 00187458  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018A51C 0018745C  93 A1 00 80 */	stw r29, 0x80(r1)
/* 8018A520 00187460  93 C1 00 84 */	stw r30, 0x84(r1)
/* 8018A524 00187464  91 61 00 88 */	stw r11, 0x88(r1)
/* 8018A528 00187468  91 41 00 8C */	stw r10, 0x8c(r1)
/* 8018A52C 0018746C  91 21 00 90 */	stw r9, 0x90(r1)
/* 8018A530 00187470  91 01 00 94 */	stw r8, 0x94(r1)
/* 8018A534 00187474  90 E1 00 98 */	stw r7, 0x98(r1)
/* 8018A538 00187478  90 C1 00 9C */	stw r6, 0x9c(r1)
/* 8018A53C 0018747C  90 A1 00 A0 */	stw r5, 0xa0(r1)
/* 8018A540 00187480  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8018A544 00187484  7D 89 03 A6 */	mtctr r12
/* 8018A548 00187488  4E 80 04 21 */	bctrl 
/* 8018A54C 0018748C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8018A550 00187490  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8018A554 00187494  C0 01 00 08 */	lfs f0, 8(r1)
/* 8018A558 00187498  D0 1F 01 44 */	stfs f0, 0x144(r31)
/* 8018A55C 0018749C  D0 3F 01 54 */	stfs f1, 0x154(r31)
/* 8018A560 001874A0  D0 5F 01 64 */	stfs f2, 0x164(r31)
.L_8018A564:
/* 8018A564 001874A4  80 01 01 24 */	lwz r0, 0x124(r1)
/* 8018A568 001874A8  83 E1 01 1C */	lwz r31, 0x11c(r1)
/* 8018A56C 001874AC  83 C1 01 18 */	lwz r30, 0x118(r1)
/* 8018A570 001874B0  83 A1 01 14 */	lwz r29, 0x114(r1)
/* 8018A574 001874B4  83 81 01 10 */	lwz r28, 0x110(r1)
/* 8018A578 001874B8  7C 08 03 A6 */	mtlr r0
/* 8018A57C 001874BC  38 21 01 20 */	addi r1, r1, 0x120
/* 8018A580 001874C0  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PikiCarrotStateFPQ24Game4Piki

.fn cleanup__Q24Game15PikiCarrotStateFPQ24Game4Piki, global
/* 8018A584 001874C4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8018A588 001874C8  7C 08 02 A6 */	mflr r0
/* 8018A58C 001874CC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018A590 001874D0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8018A594 001874D4  7C 9F 23 78 */	mr r31, r4
/* 8018A598 001874D8  38 80 00 01 */	li r4, 1
/* 8018A59C 001874DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A5A0 001874E0  7F E3 FB 78 */	mr r3, r31
/* 8018A5A4 001874E4  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 8018A5A8 001874E8  7D 89 03 A6 */	mtctr r12
/* 8018A5AC 001874EC  4E 80 04 21 */	bctrl 
/* 8018A5B0 001874F0  7F E4 FB 78 */	mr r4, r31
/* 8018A5B4 001874F4  38 61 00 08 */	addi r3, r1, 8
/* 8018A5B8 001874F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A5BC 001874FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018A5C0 00187500  7D 89 03 A6 */	mtctr r12
/* 8018A5C4 00187504  4E 80 04 21 */	bctrl 
/* 8018A5C8 00187508  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8018A5CC 0018750C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8018A5D0 00187510  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8018A5D4 00187514  C0 41 00 08 */	lfs f2, 8(r1)
/* 8018A5D8 00187518  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A5DC 0018751C  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8018A5E0 00187520  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8018A5E4 00187524  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8018A5E8 00187528  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018A5EC 0018752C  3C 60 80 4B */	lis r3, __vt__Q23efx9TPikuBomb@ha
/* 8018A5F0 00187530  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 8018A5F4 00187534  38 C0 02 75 */	li r6, 0x275
/* 8018A5F8 00187538  38 A0 00 00 */	li r5, 0
/* 8018A5FC 0018753C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A600 00187540  38 03 45 A0 */	addi r0, r3, __vt__Q23efx9TPikuBomb@l
/* 8018A604 00187544  38 61 00 14 */	addi r3, r1, 0x14
/* 8018A608 00187548  90 81 00 20 */	stw r4, 0x20(r1)
/* 8018A60C 0018754C  38 81 00 20 */	addi r4, r1, 0x20
/* 8018A610 00187550  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8018A614 00187554  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8018A618 00187558  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8018A61C 0018755C  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 8018A620 00187560  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8018A624 00187564  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A628 00187568  48 22 49 5D */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8018A62C 0018756C  7F E3 FB 78 */	mr r3, r31
/* 8018A630 00187570  38 80 38 57 */	li r4, 0x3857
/* 8018A634 00187574  38 A0 00 00 */	li r5, 0
/* 8018A638 00187578  4B FB E2 95 */	bl startSound__Q24Game4PikiFUlb
/* 8018A63C 0018757C  7F E3 FB 78 */	mr r3, r31
/* 8018A640 00187580  38 80 00 00 */	li r4, 0
/* 8018A644 00187584  4B FB 0A AD */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8018A648 00187588  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8018A64C 0018758C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8018A650 00187590  7C 08 03 A6 */	mtlr r0
/* 8018A654 00187594  38 21 00 40 */	addi r1, r1, 0x40
/* 8018A658 00187598  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PikiCarrotStateFPQ24Game4Piki

.fn bounceCallback__Q24Game15PikiCarrotStateFPQ24Game4PikiPQ23Sys8Triangle, global
/* 8018A65C 0018759C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8018A660 001875A0  7C 08 02 A6 */	mflr r0
/* 8018A664 001875A4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018A668 001875A8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8018A66C 001875AC  7C 9F 23 78 */	mr r31, r4
/* 8018A670 001875B0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8018A674 001875B4  7C 7E 1B 78 */	mr r30, r3
/* 8018A678 001875B8  88 03 00 14 */	lbz r0, 0x14(r3)
/* 8018A67C 001875BC  28 00 00 00 */	cmplwi r0, 0
/* 8018A680 001875C0  40 82 00 E8 */	bne .L_8018A768
/* 8018A684 001875C4  38 00 00 01 */	li r0, 1
/* 8018A688 001875C8  38 61 00 08 */	addi r3, r1, 8
/* 8018A68C 001875CC  98 1E 00 14 */	stb r0, 0x14(r30)
/* 8018A690 001875D0  81 84 00 00 */	lwz r12, 0(r4)
/* 8018A694 001875D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018A698 001875D8  7D 89 03 A6 */	mtctr r12
/* 8018A69C 001875DC  4E 80 04 21 */	bctrl 
/* 8018A6A0 001875E0  C0 01 00 08 */	lfs f0, 8(r1)
/* 8018A6A4 001875E4  38 9E 00 18 */	addi r4, r30, 0x18
/* 8018A6A8 001875E8  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8018A6AC 001875EC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8018A6B0 001875F0  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8018A6B4 001875F4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018A6B8 001875F8  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8018A6BC 001875FC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8018A6C0 00187600  81 83 00 04 */	lwz r12, 4(r3)
/* 8018A6C4 00187604  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8018A6C8 00187608  7D 89 03 A6 */	mtctr r12
/* 8018A6CC 0018760C  4E 80 04 21 */	bctrl 
/* 8018A6D0 00187610  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8018A6D4 00187614  D0 3E 00 1C */	stfs f1, 0x1c(r30)
/* 8018A6D8 00187618  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 8018A6DC 0018761C  C0 02 AA 90 */	lfs f0, lbl_80518DF0@sda21(r2)
/* 8018A6E0 00187620  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018A6E4 00187624  38 80 38 56 */	li r4, 0x3856
/* 8018A6E8 00187628  38 A0 00 00 */	li r5, 0
/* 8018A6EC 0018762C  38 C0 00 00 */	li r6, 0
/* 8018A6F0 00187630  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 8018A6F4 00187634  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8018A6F8 00187638  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8018A6FC 0018763C  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8018A700 00187640  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 8018A704 00187644  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8018A708 00187648  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8018A70C 0018764C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8018A710 00187650  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8018A714 00187654  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8018A718 00187658  48 2D 7E 69 */	bl startFreePikiSound__Q23PSM4PikiFUlUlUl
/* 8018A71C 0018765C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8018A720 00187660  38 A0 00 00 */	li r5, 0
/* 8018A724 00187664  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8018A728 00187668  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 8018A72C 0018766C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A730 00187670  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 8018A734 00187674  3C 60 80 4B */	lis r3, __vt__Q23efx5TPkAp@ha
/* 8018A738 00187678  38 80 01 46 */	li r4, 0x146
/* 8018A73C 0018767C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A740 00187680  38 03 45 8C */	addi r0, r3, __vt__Q23efx5TPkAp@l
/* 8018A744 00187684  38 C0 01 47 */	li r6, 0x147
/* 8018A748 00187688  38 61 00 14 */	addi r3, r1, 0x14
/* 8018A74C 0018768C  B0 81 00 18 */	sth r4, 0x18(r1)
/* 8018A750 00187690  38 81 00 24 */	addi r4, r1, 0x24
/* 8018A754 00187694  B0 C1 00 1A */	sth r6, 0x1a(r1)
/* 8018A758 00187698  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8018A75C 0018769C  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8018A760 001876A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A764 001876A4  48 22 48 B1 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
.L_8018A768:
/* 8018A768 001876A8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8018A76C 001876AC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8018A770 001876B0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8018A774 001876B4  7C 08 03 A6 */	mtlr r0
/* 8018A778 001876B8  38 21 00 40 */	addi r1, r1, 0x40
/* 8018A77C 001876BC  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game15PikiCarrotStateFPQ24Game4PikiPQ23Sys8Triangle

.fn collisionCallback__Q24Game15PikiCarrotStateFPQ24Game4PikiRQ24Game9CollEvent, global
/* 8018A780 001876C0  4E 80 00 20 */	blr 
.endfn collisionCallback__Q24Game15PikiCarrotStateFPQ24Game4PikiRQ24Game9CollEvent

.fn init__Q24Game18PikiSwallowedStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018A784 001876C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018A788 001876C8  7C 08 02 A6 */	mflr r0
/* 8018A78C 001876CC  28 05 00 00 */	cmplwi r5, 0
/* 8018A790 001876D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018A794 001876D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018A798 001876D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018A79C 001876DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8018A7A0 001876E0  7C 9D 23 78 */	mr r29, r4
/* 8018A7A4 001876E4  41 82 00 0C */	beq .L_8018A7B0
/* 8018A7A8 001876E8  80 85 00 00 */	lwz r4, 0(r5)
/* 8018A7AC 001876EC  48 00 00 08 */	b .L_8018A7B4
.L_8018A7B0:
/* 8018A7B0 001876F0  38 80 00 08 */	li r4, 8
.L_8018A7B4:
/* 8018A7B4 001876F4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018A7B8 001876F8  7F A3 EB 78 */	mr r3, r29
/* 8018A7BC 001876FC  7C 85 23 78 */	mr r5, r4
/* 8018A7C0 00187700  38 C0 00 00 */	li r6, 0
/* 8018A7C4 00187704  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018A7C8 00187708  38 E0 00 00 */	li r7, 0
/* 8018A7CC 0018770C  7D 89 03 A6 */	mtctr r12
/* 8018A7D0 00187710  4E 80 04 21 */	bctrl 
/* 8018A7D4 00187714  83 FD 00 F4 */	lwz r31, 0xf4(r29)
/* 8018A7D8 00187718  7F A3 EB 78 */	mr r3, r29
/* 8018A7DC 0018771C  83 DD 00 F8 */	lwz r30, 0xf8(r29)
/* 8018A7E0 00187720  4B FB D6 35 */	bl getCurrAction__Q24Game4PikiFv
/* 8018A7E4 00187724  28 03 00 00 */	cmplwi r3, 0
/* 8018A7E8 00187728  41 82 00 38 */	beq .L_8018A820
/* 8018A7EC 0018772C  7F A3 EB 78 */	mr r3, r29
/* 8018A7F0 00187730  4B FB D6 25 */	bl getCurrAction__Q24Game4PikiFv
/* 8018A7F4 00187734  81 83 00 00 */	lwz r12, 0(r3)
/* 8018A7F8 00187738  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8018A7FC 0018773C  7D 89 03 A6 */	mtctr r12
/* 8018A800 00187740  4E 80 04 21 */	bctrl 
/* 8018A804 00187744  7F A3 EB 78 */	mr r3, r29
/* 8018A808 00187748  4B FB D6 31 */	bl clearCurrAction__Q24Game4PikiFv
/* 8018A80C 0018774C  7F A3 EB 78 */	mr r3, r29
/* 8018A810 00187750  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018A814 00187754  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8018A818 00187758  7D 89 03 A6 */	mtctr r12
/* 8018A81C 0018775C  4E 80 04 21 */	bctrl 
.L_8018A820:
/* 8018A820 00187760  28 1F 00 00 */	cmplwi r31, 0
/* 8018A824 00187764  41 82 00 1C */	beq .L_8018A840
/* 8018A828 00187768  28 1E 00 00 */	cmplwi r30, 0
/* 8018A82C 0018776C  41 82 00 14 */	beq .L_8018A840
/* 8018A830 00187770  7F A3 EB 78 */	mr r3, r29
/* 8018A834 00187774  7F E4 FB 78 */	mr r4, r31
/* 8018A838 00187778  7F C5 F3 78 */	mr r5, r30
/* 8018A83C 0018777C  48 01 48 2D */	bl startStickMouth__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
.L_8018A840:
/* 8018A840 00187780  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018A844 00187784  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018A848 00187788  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018A84C 0018778C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8018A850 00187790  7C 08 03 A6 */	mtlr r0
/* 8018A854 00187794  38 21 00 20 */	addi r1, r1, 0x20
/* 8018A858 00187798  4E 80 00 20 */	blr 
.endfn init__Q24Game18PikiSwallowedStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game18PikiSwallowedStateFPQ24Game4Piki, global
/* 8018A85C 0018779C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018A860 001877A0  7C 08 02 A6 */	mflr r0
/* 8018A864 001877A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A868 001877A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018A86C 001877AC  7C 9F 23 78 */	mr r31, r4
/* 8018A870 001877B0  93 C1 00 08 */	stw r30, 8(r1)
/* 8018A874 001877B4  7C 7E 1B 78 */	mr r30, r3
/* 8018A878 001877B8  7F E3 FB 78 */	mr r3, r31
/* 8018A87C 001877BC  48 01 4D 0D */	bl isStickToMouth__Q24Game8CreatureFv
/* 8018A880 001877C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018A884 001877C4  40 82 00 34 */	bne .L_8018A8B8
/* 8018A888 001877C8  7F E3 FB 78 */	mr r3, r31
/* 8018A88C 001877CC  38 80 28 22 */	li r4, 0x2822
/* 8018A890 001877D0  38 A0 00 00 */	li r5, 0
/* 8018A894 001877D4  4B FB E0 39 */	bl startSound__Q24Game4PikiFUlb
/* 8018A898 001877D8  7F C3 F3 78 */	mr r3, r30
/* 8018A89C 001877DC  7F E4 FB 78 */	mr r4, r31
/* 8018A8A0 001877E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018A8A4 001877E4  38 A0 00 00 */	li r5, 0
/* 8018A8A8 001877E8  38 C0 00 00 */	li r6, 0
/* 8018A8AC 001877EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018A8B0 001877F0  7D 89 03 A6 */	mtctr r12
/* 8018A8B4 001877F4  4E 80 04 21 */	bctrl 
.L_8018A8B8:
/* 8018A8B8 001877F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018A8BC 001877FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018A8C0 00187800  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018A8C4 00187804  7C 08 03 A6 */	mtlr r0
/* 8018A8C8 00187808  38 21 00 10 */	addi r1, r1, 0x10
/* 8018A8CC 0018780C  4E 80 00 20 */	blr 
.endfn exec__Q24Game18PikiSwallowedStateFPQ24Game4Piki

.fn "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg", weak
/* 8018A8D0 00187810  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018A8D4 00187814  7C 08 02 A6 */	mflr r0
/* 8018A8D8 00187818  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A8DC 0018781C  80 63 00 08 */	lwz r3, 8(r3)
/* 8018A8E0 00187820  81 83 00 00 */	lwz r12, 0(r3)
/* 8018A8E4 00187824  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8018A8E8 00187828  7D 89 03 A6 */	mtctr r12
/* 8018A8EC 0018782C  4E 80 04 21 */	bctrl 
/* 8018A8F0 00187830  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018A8F4 00187834  7C 08 03 A6 */	mtlr r0
/* 8018A8F8 00187838  38 21 00 10 */	addi r1, r1, 0x10
/* 8018A8FC 0018783C  4E 80 00 20 */	blr 
.endfn "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"

.fn cleanup__Q24Game18PikiSwallowedStateFPQ24Game4Piki, global
/* 8018A900 00187840  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018A904 00187844  7C 08 02 A6 */	mflr r0
/* 8018A908 00187848  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018A90C 0018784C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018A910 00187850  7C 9F 23 78 */	mr r31, r4
/* 8018A914 00187854  7F E3 FB 78 */	mr r3, r31
/* 8018A918 00187858  48 01 4B 0D */	bl endStick__Q24Game8CreatureFv
/* 8018A91C 0018785C  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8018A920 00187860  38 80 00 01 */	li r4, 1
/* 8018A924 00187864  38 A0 00 00 */	li r5, 0
/* 8018A928 00187868  48 00 C6 6D */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 8018A92C 0018786C  7F E3 FB 78 */	mr r3, r31
/* 8018A930 00187870  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018A934 00187874  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8018A938 00187878  7D 89 03 A6 */	mtctr r12
/* 8018A93C 0018787C  4E 80 04 21 */	bctrl 
/* 8018A940 00187880  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018A944 00187884  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018A948 00187888  7C 08 03 A6 */	mtlr r0
/* 8018A94C 0018788C  38 21 00 10 */	addi r1, r1, 0x10
/* 8018A950 00187890  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game18PikiSwallowedStateFPQ24Game4Piki

.fn init__Q24Game15PikiHoleinStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018A954 00187894  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8018A958 00187898  7C 08 02 A6 */	mflr r0
/* 8018A95C 0018789C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8018A960 001878A0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018A964 001878A4  7C BF 2B 79 */	or. r31, r5, r5
/* 8018A968 001878A8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8018A96C 001878AC  7C 9E 23 78 */	mr r30, r4
/* 8018A970 001878B0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8018A974 001878B4  7C 7D 1B 78 */	mr r29, r3
/* 8018A978 001878B8  40 82 00 20 */	bne .L_8018A998
/* 8018A97C 001878BC  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 8018A980 001878C0  3C A0 80 48 */	lis r5, lbl_8047ECA8@ha
/* 8018A984 001878C4  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 8018A988 001878C8  38 80 03 B5 */	li r4, 0x3b5
/* 8018A98C 001878CC  38 A5 EC A8 */	addi r5, r5, lbl_8047ECA8@l
/* 8018A990 001878D0  4C C6 31 82 */	crclr 6
/* 8018A994 001878D4  4B E9 FC AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018A998:
/* 8018A998 001878D8  7F C3 F3 78 */	mr r3, r30
/* 8018A99C 001878DC  48 01 4A 89 */	bl endStick__Q24Game8CreatureFv
/* 8018A9A0 001878E0  7F C3 F3 78 */	mr r3, r30
/* 8018A9A4 001878E4  38 80 00 1D */	li r4, 0x1d
/* 8018A9A8 001878E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018A9AC 001878EC  38 A0 00 1D */	li r5, 0x1d
/* 8018A9B0 001878F0  38 C0 00 00 */	li r6, 0
/* 8018A9B4 001878F4  38 E0 00 00 */	li r7, 0
/* 8018A9B8 001878F8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018A9BC 001878FC  7D 89 03 A6 */	mtctr r12
/* 8018A9C0 00187900  4E 80 04 21 */	bctrl 
/* 8018A9C4 00187904  7F C4 F3 78 */	mr r4, r30
/* 8018A9C8 00187908  38 61 00 08 */	addi r3, r1, 8
/* 8018A9CC 0018790C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018A9D0 00187910  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018A9D4 00187914  7D 89 03 A6 */	mtctr r12
/* 8018A9D8 00187918  4E 80 04 21 */	bctrl 
/* 8018A9DC 0018791C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8018A9E0 00187920  C0 5F 00 00 */	lfs f2, 0(r31)
/* 8018A9E4 00187924  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8018A9E8 00187928  C0 9F 00 04 */	lfs f4, 4(r31)
/* 8018A9EC 0018792C  EC 62 00 28 */	fsubs f3, f2, f0
/* 8018A9F0 00187930  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8018A9F4 00187934  C0 BF 00 08 */	lfs f5, 8(r31)
/* 8018A9F8 00187938  EC C4 08 28 */	fsubs f6, f4, f1
/* 8018A9FC 0018793C  C0 82 AA 80 */	lfs f4, lbl_80518DE0@sda21(r2)
/* 8018AA00 00187940  D0 7D 00 1C */	stfs f3, 0x1c(r29)
/* 8018AA04 00187944  EC 65 10 28 */	fsubs f3, f5, f2
/* 8018AA08 00187948  D0 DD 00 20 */	stfs f6, 0x20(r29)
/* 8018AA0C 0018794C  D0 7D 00 24 */	stfs f3, 0x24(r29)
/* 8018AA10 00187950  D0 9D 00 20 */	stfs f4, 0x20(r29)
/* 8018AA14 00187954  C0 DD 00 1C */	lfs f6, 0x1c(r29)
/* 8018AA18 00187958  C0 BD 00 20 */	lfs f5, 0x20(r29)
/* 8018AA1C 0018795C  C0 FD 00 24 */	lfs f7, 0x24(r29)
/* 8018AA20 00187960  EC 66 01 B2 */	fmuls f3, f6, f6
/* 8018AA24 00187964  EC A5 01 72 */	fmuls f5, f5, f5
/* 8018AA28 00187968  EC E7 01 F2 */	fmuls f7, f7, f7
/* 8018AA2C 0018796C  EC 63 28 2A */	fadds f3, f3, f5
/* 8018AA30 00187970  EC 67 18 2A */	fadds f3, f7, f3
/* 8018AA34 00187974  FC 03 20 40 */	fcmpo cr0, f3, f4
/* 8018AA38 00187978  40 81 00 20 */	ble .L_8018AA58
/* 8018AA3C 0018797C  EC 66 29 BA */	fmadds f3, f6, f6, f5
/* 8018AA40 00187980  EC A7 18 2A */	fadds f5, f7, f3
/* 8018AA44 00187984  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 8018AA48 00187988  40 81 00 14 */	ble .L_8018AA5C
/* 8018AA4C 0018798C  FC 60 28 34 */	frsqrte f3, f5
/* 8018AA50 00187990  EC A3 01 72 */	fmuls f5, f3, f5
/* 8018AA54 00187994  48 00 00 08 */	b .L_8018AA5C
.L_8018AA58:
/* 8018AA58 00187998  FC A0 20 90 */	fmr f5, f4
.L_8018AA5C:
/* 8018AA5C 0018799C  C0 62 AA 80 */	lfs f3, lbl_80518DE0@sda21(r2)
/* 8018AA60 001879A0  FC 05 18 40 */	fcmpo cr0, f5, f3
/* 8018AA64 001879A4  40 81 00 34 */	ble .L_8018AA98
/* 8018AA68 001879A8  C0 82 AA 84 */	lfs f4, lbl_80518DE4@sda21(r2)
/* 8018AA6C 001879AC  C0 7D 00 1C */	lfs f3, 0x1c(r29)
/* 8018AA70 001879B0  EC 84 28 24 */	fdivs f4, f4, f5
/* 8018AA74 001879B4  EC 63 01 32 */	fmuls f3, f3, f4
/* 8018AA78 001879B8  D0 7D 00 1C */	stfs f3, 0x1c(r29)
/* 8018AA7C 001879BC  C0 7D 00 20 */	lfs f3, 0x20(r29)
/* 8018AA80 001879C0  EC 63 01 32 */	fmuls f3, f3, f4
/* 8018AA84 001879C4  D0 7D 00 20 */	stfs f3, 0x20(r29)
/* 8018AA88 001879C8  C0 7D 00 24 */	lfs f3, 0x24(r29)
/* 8018AA8C 001879CC  EC 63 01 32 */	fmuls f3, f3, f4
/* 8018AA90 001879D0  D0 7D 00 24 */	stfs f3, 0x24(r29)
/* 8018AA94 001879D4  48 00 00 08 */	b .L_8018AA9C
.L_8018AA98:
/* 8018AA98 001879D8  FC A0 18 90 */	fmr f5, f3
.L_8018AA9C:
/* 8018AA9C 001879DC  D0 BD 00 28 */	stfs f5, 0x28(r29)
/* 8018AAA0 001879E0  C0 62 AA 94 */	lfs f3, lbl_80518DF4@sda21(r2)
/* 8018AAA4 001879E4  C0 9D 00 28 */	lfs f4, 0x28(r29)
/* 8018AAA8 001879E8  EC 64 00 F2 */	fmuls f3, f4, f3
/* 8018AAAC 001879EC  D0 7D 00 28 */	stfs f3, 0x28(r29)
/* 8018AAB0 001879F0  C0 DD 00 28 */	lfs f6, 0x28(r29)
/* 8018AAB4 001879F4  C0 7D 00 1C */	lfs f3, 0x1c(r29)
/* 8018AAB8 001879F8  C0 9D 00 20 */	lfs f4, 0x20(r29)
/* 8018AABC 001879FC  EC 63 01 B2 */	fmuls f3, f3, f6
/* 8018AAC0 00187A00  C0 BD 00 24 */	lfs f5, 0x24(r29)
/* 8018AAC4 00187A04  EC 84 01 B2 */	fmuls f4, f4, f6
/* 8018AAC8 00187A08  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8018AACC 00187A0C  EC 00 18 2A */	fadds f0, f0, f3
/* 8018AAD0 00187A10  EC 21 20 2A */	fadds f1, f1, f4
/* 8018AAD4 00187A14  EC 42 28 2A */	fadds f2, f2, f5
/* 8018AAD8 00187A18  D0 1D 00 10 */	stfs f0, 0x10(r29)
/* 8018AADC 00187A1C  D0 3D 00 14 */	stfs f1, 0x14(r29)
/* 8018AAE0 00187A20  D0 5D 00 18 */	stfs f2, 0x18(r29)
/* 8018AAE4 00187A24  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 8018AAE8 00187A28  FC 00 00 50 */	fneg f0, f0
/* 8018AAEC 00187A2C  D0 1D 00 2C */	stfs f0, 0x2c(r29)
/* 8018AAF0 00187A30  4B F3 EA B1 */	bl rand
/* 8018AAF4 00187A34  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8018AAF8 00187A38  3C 80 43 30 */	lis r4, 0x4330
/* 8018AAFC 00187A3C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8018AB00 00187A40  38 00 00 00 */	li r0, 0
/* 8018AB04 00187A44  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018AB08 00187A48  7F C3 F3 78 */	mr r3, r30
/* 8018AB0C 00187A4C  90 81 00 18 */	stw r4, 0x18(r1)
/* 8018AB10 00187A50  38 80 00 00 */	li r4, 0
/* 8018AB14 00187A54  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8018AB18 00187A58  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 8018AB1C 00187A5C  C0 02 AA 64 */	lfs f0, lbl_80518DC4@sda21(r2)
/* 8018AB20 00187A60  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018AB24 00187A64  EC 22 08 24 */	fdivs f1, f2, f1
/* 8018AB28 00187A68  EC 00 00 72 */	fmuls f0, f0, f1
/* 8018AB2C 00187A6C  D0 1D 00 30 */	stfs f0, 0x30(r29)
/* 8018AB30 00187A70  98 1D 00 34 */	stb r0, 0x34(r29)
/* 8018AB34 00187A74  98 1D 00 44 */	stb r0, 0x44(r29)
/* 8018AB38 00187A78  4B FB 0F 19 */	bl movie_begin__Q24Game8CreatureFb
/* 8018AB3C 00187A7C  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 8018AB40 00187A80  D0 1D 00 48 */	stfs f0, 0x48(r29)
/* 8018AB44 00187A84  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8018AB48 00187A88  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8018AB4C 00187A8C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8018AB50 00187A90  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8018AB54 00187A94  7C 08 03 A6 */	mtlr r0
/* 8018AB58 00187A98  38 21 00 30 */	addi r1, r1, 0x30
/* 8018AB5C 00187A9C  4E 80 00 20 */	blr 
.endfn init__Q24Game15PikiHoleinStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game15PikiHoleinStateFPQ24Game4Piki, global
/* 8018AB60 00187AA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018AB64 00187AA4  7C 08 02 A6 */	mflr r0
/* 8018AB68 00187AA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018AB6C 00187AAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018AB70 00187AB0  7C 9F 23 78 */	mr r31, r4
/* 8018AB74 00187AB4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018AB78 00187AB8  7C 7E 1B 78 */	mr r30, r3
/* 8018AB7C 00187ABC  7F E3 FB 78 */	mr r3, r31
/* 8018AB80 00187AC0  48 01 48 A5 */	bl endStick__Q24Game8CreatureFv
/* 8018AB84 00187AC4  C0 1E 00 48 */	lfs f0, 0x48(r30)
/* 8018AB88 00187AC8  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 8018AB8C 00187ACC  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 8018AB90 00187AD0  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 8018AB94 00187AD4  88 1E 00 34 */	lbz r0, 0x34(r30)
/* 8018AB98 00187AD8  28 00 00 00 */	cmplwi r0, 0
/* 8018AB9C 00187ADC  41 82 00 18 */	beq .L_8018ABB4
/* 8018ABA0 00187AE0  7F E3 FB 78 */	mr r3, r31
/* 8018ABA4 00187AE4  38 9E 00 38 */	addi r4, r30, 0x38
/* 8018ABA8 00187AE8  38 A0 00 00 */	li r5, 0
/* 8018ABAC 00187AEC  4B FB 05 FD */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8018ABB0 00187AF0  48 00 01 58 */	b .L_8018AD08
.L_8018ABB4:
/* 8018ABB4 00187AF4  C0 3E 00 30 */	lfs f1, 0x30(r30)
/* 8018ABB8 00187AF8  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018ABBC 00187AFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018ABC0 00187B00  40 81 00 18 */	ble .L_8018ABD8
/* 8018ABC4 00187B04  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018ABC8 00187B08  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8018ABCC 00187B0C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8018ABD0 00187B10  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 8018ABD4 00187B14  48 00 01 34 */	b .L_8018AD08
.L_8018ABD8:
/* 8018ABD8 00187B18  88 1E 00 44 */	lbz r0, 0x44(r30)
/* 8018ABDC 00187B1C  28 00 00 00 */	cmplwi r0, 0
/* 8018ABE0 00187B20  40 82 00 1C */	bne .L_8018ABFC
/* 8018ABE4 00187B24  38 00 00 01 */	li r0, 1
/* 8018ABE8 00187B28  7F E3 FB 78 */	mr r3, r31
/* 8018ABEC 00187B2C  98 1E 00 44 */	stb r0, 0x44(r30)
/* 8018ABF0 00187B30  38 80 28 2F */	li r4, 0x282f
/* 8018ABF4 00187B34  38 A0 00 00 */	li r5, 0
/* 8018ABF8 00187B38  4B FB DC D5 */	bl startSound__Q24Game4PikiFUlb
.L_8018ABFC:
/* 8018ABFC 00187B3C  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8018AC00 00187B40  7F E3 FB 78 */	mr r3, r31
/* 8018AC04 00187B44  C0 22 AA 9C */	lfs f1, lbl_80518DFC@sda21(r2)
/* 8018AC08 00187B48  38 81 00 08 */	addi r4, r1, 8
/* 8018AC0C 00187B4C  EC 00 00 32 */	fmuls f0, f0, f0
/* 8018AC10 00187B50  C1 1E 00 2C */	lfs f8, 0x2c(r30)
/* 8018AC14 00187B54  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 8018AC18 00187B58  38 A0 00 00 */	li r5, 0
/* 8018AC1C 00187B5C  C0 9E 00 24 */	lfs f4, 0x24(r30)
/* 8018AC20 00187B60  EC C1 00 24 */	fdivs f6, f1, f0
/* 8018AC24 00187B64  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8018AC28 00187B68  C0 E2 AA 98 */	lfs f7, lbl_80518DF8@sda21(r2)
/* 8018AC2C 00187B6C  C0 7E 00 14 */	lfs f3, 0x14(r30)
/* 8018AC30 00187B70  C0 BE 00 18 */	lfs f5, 0x18(r30)
/* 8018AC34 00187B74  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 8018AC38 00187B78  EC C6 02 32 */	fmuls f6, f6, f8
/* 8018AC3C 00187B7C  EC 42 02 32 */	fmuls f2, f2, f8
/* 8018AC40 00187B80  EC 84 02 32 */	fmuls f4, f4, f8
/* 8018AC44 00187B84  EC C8 01 B2 */	fmuls f6, f8, f6
/* 8018AC48 00187B88  EC 43 10 2A */	fadds f2, f3, f2
/* 8018AC4C 00187B8C  EC 00 02 32 */	fmuls f0, f0, f8
/* 8018AC50 00187B90  EC C7 30 2A */	fadds f6, f7, f6
/* 8018AC54 00187B94  EC 65 20 2A */	fadds f3, f5, f4
/* 8018AC58 00187B98  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8018AC5C 00187B9C  EC 21 00 2A */	fadds f1, f1, f0
/* 8018AC60 00187BA0  EC 02 30 2A */	fadds f0, f2, f6
/* 8018AC64 00187BA4  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8018AC68 00187BA8  D0 21 00 08 */	stfs f1, 8(r1)
/* 8018AC6C 00187BAC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8018AC70 00187BB0  4B FB 05 39 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8018AC74 00187BB4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018AC78 00187BB8  C0 62 AA A0 */	lfs f3, lbl_80518E00@sda21(r2)
/* 8018AC7C 00187BBC  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 8018AC80 00187BC0  C0 3E 00 2C */	lfs f1, 0x2c(r30)
/* 8018AC84 00187BC4  C0 02 AA A4 */	lfs f0, lbl_80518E04@sda21(r2)
/* 8018AC88 00187BC8  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 8018AC8C 00187BCC  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 8018AC90 00187BD0  C0 7E 00 28 */	lfs f3, 0x28(r30)
/* 8018AC94 00187BD4  C0 3E 00 2C */	lfs f1, 0x2c(r30)
/* 8018AC98 00187BD8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8018AC9C 00187BDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018ACA0 00187BE0  40 81 00 20 */	ble .L_8018ACC0
/* 8018ACA4 00187BE4  EC 21 00 28 */	fsubs f1, f1, f0
/* 8018ACA8 00187BE8  C0 42 AA A8 */	lfs f2, lbl_80518E08@sda21(r2)
/* 8018ACAC 00187BEC  C0 02 AA AC */	lfs f0, lbl_80518E0C@sda21(r2)
/* 8018ACB0 00187BF0  EC 22 08 F8 */	fmsubs f1, f2, f3, f1
/* 8018ACB4 00187BF4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8018ACB8 00187BF8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8018ACBC 00187BFC  D0 1E 00 48 */	stfs f0, 0x48(r30)
.L_8018ACC0:
/* 8018ACC0 00187C00  C0 22 AA A8 */	lfs f1, lbl_80518E08@sda21(r2)
/* 8018ACC4 00187C04  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8018ACC8 00187C08  C0 5E 00 2C */	lfs f2, 0x2c(r30)
/* 8018ACCC 00187C0C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018ACD0 00187C10  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8018ACD4 00187C14  4C 41 13 82 */	cror 2, 1, 2
/* 8018ACD8 00187C18  40 82 00 30 */	bne .L_8018AD08
/* 8018ACDC 00187C1C  88 1E 00 34 */	lbz r0, 0x34(r30)
/* 8018ACE0 00187C20  28 00 00 00 */	cmplwi r0, 0
/* 8018ACE4 00187C24  40 82 00 24 */	bne .L_8018AD08
/* 8018ACE8 00187C28  38 00 00 01 */	li r0, 1
/* 8018ACEC 00187C2C  98 1E 00 34 */	stb r0, 0x34(r30)
/* 8018ACF0 00187C30  C0 01 00 08 */	lfs f0, 8(r1)
/* 8018ACF4 00187C34  D0 1E 00 38 */	stfs f0, 0x38(r30)
/* 8018ACF8 00187C38  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8018ACFC 00187C3C  D0 1E 00 3C */	stfs f0, 0x3c(r30)
/* 8018AD00 00187C40  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018AD04 00187C44  D0 1E 00 40 */	stfs f0, 0x40(r30)
.L_8018AD08:
/* 8018AD08 00187C48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018AD0C 00187C4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018AD10 00187C50  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018AD14 00187C54  7C 08 03 A6 */	mtlr r0
/* 8018AD18 00187C58  38 21 00 20 */	addi r1, r1, 0x20
/* 8018AD1C 00187C5C  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PikiHoleinStateFPQ24Game4Piki

.fn cleanup__Q24Game15PikiHoleinStateFPQ24Game4Piki, global
/* 8018AD20 00187C60  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PikiHoleinStateFPQ24Game4Piki

.fn init__Q24Game19PikiFountainonStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018AD24 00187C64  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8018AD28 00187C68  7C 08 02 A6 */	mflr r0
/* 8018AD2C 00187C6C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8018AD30 00187C70  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018AD34 00187C74  7C BF 2B 79 */	or. r31, r5, r5
/* 8018AD38 00187C78  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8018AD3C 00187C7C  7C 9E 23 78 */	mr r30, r4
/* 8018AD40 00187C80  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8018AD44 00187C84  7C 7D 1B 78 */	mr r29, r3
/* 8018AD48 00187C88  40 82 00 20 */	bne .L_8018AD68
/* 8018AD4C 00187C8C  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 8018AD50 00187C90  3C A0 80 48 */	lis r5, lbl_8047ECC0@ha
/* 8018AD54 00187C94  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 8018AD58 00187C98  38 80 04 1A */	li r4, 0x41a
/* 8018AD5C 00187C9C  38 A5 EC C0 */	addi r5, r5, lbl_8047ECC0@l
/* 8018AD60 00187CA0  4C C6 31 82 */	crclr 6
/* 8018AD64 00187CA4  4B E9 F8 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018AD68:
/* 8018AD68 00187CA8  7F C3 F3 78 */	mr r3, r30
/* 8018AD6C 00187CAC  48 01 46 B9 */	bl endStick__Q24Game8CreatureFv
/* 8018AD70 00187CB0  7F C3 F3 78 */	mr r3, r30
/* 8018AD74 00187CB4  38 80 00 1D */	li r4, 0x1d
/* 8018AD78 00187CB8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018AD7C 00187CBC  38 A0 00 1D */	li r5, 0x1d
/* 8018AD80 00187CC0  38 C0 00 00 */	li r6, 0
/* 8018AD84 00187CC4  38 E0 00 00 */	li r7, 0
/* 8018AD88 00187CC8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018AD8C 00187CCC  7D 89 03 A6 */	mtctr r12
/* 8018AD90 00187CD0  4E 80 04 21 */	bctrl 
/* 8018AD94 00187CD4  7F C4 F3 78 */	mr r4, r30
/* 8018AD98 00187CD8  38 61 00 08 */	addi r3, r1, 8
/* 8018AD9C 00187CDC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018ADA0 00187CE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018ADA4 00187CE4  7D 89 03 A6 */	mtctr r12
/* 8018ADA8 00187CE8  4E 80 04 21 */	bctrl 
/* 8018ADAC 00187CEC  C1 01 00 08 */	lfs f8, 8(r1)
/* 8018ADB0 00187CF0  C0 E2 AA B0 */	lfs f7, lbl_80518E10@sda21(r2)
/* 8018ADB4 00187CF4  C1 21 00 0C */	lfs f9, 0xc(r1)
/* 8018ADB8 00187CF8  C0 A2 AA B4 */	lfs f5, lbl_80518E14@sda21(r2)
/* 8018ADBC 00187CFC  EC 48 01 F2 */	fmuls f2, f8, f7
/* 8018ADC0 00187D00  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8018ADC4 00187D04  EC 89 01 F2 */	fmuls f4, f9, f7
/* 8018ADC8 00187D08  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8018ADCC 00187D0C  EC 00 01 72 */	fmuls f0, f0, f5
/* 8018ADD0 00187D10  C1 41 00 10 */	lfs f10, 0x10(r1)
/* 8018ADD4 00187D14  EC 61 01 72 */	fmuls f3, f1, f5
/* 8018ADD8 00187D18  C0 DF 00 08 */	lfs f6, 8(r31)
/* 8018ADDC 00187D1C  EC EA 01 F2 */	fmuls f7, f10, f7
/* 8018ADE0 00187D20  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018ADE4 00187D24  EC 02 00 2A */	fadds f0, f2, f0
/* 8018ADE8 00187D28  EC 46 01 72 */	fmuls f2, f6, f5
/* 8018ADEC 00187D2C  EC 64 18 2A */	fadds f3, f4, f3
/* 8018ADF0 00187D30  D0 1D 00 10 */	stfs f0, 0x10(r29)
/* 8018ADF4 00187D34  EC 07 10 2A */	fadds f0, f7, f2
/* 8018ADF8 00187D38  D0 7D 00 14 */	stfs f3, 0x14(r29)
/* 8018ADFC 00187D3C  D0 1D 00 18 */	stfs f0, 0x18(r29)
/* 8018AE00 00187D40  C0 1D 00 10 */	lfs f0, 0x10(r29)
/* 8018AE04 00187D44  C0 5D 00 14 */	lfs f2, 0x14(r29)
/* 8018AE08 00187D48  C0 7D 00 18 */	lfs f3, 0x18(r29)
/* 8018AE0C 00187D4C  EC 00 40 28 */	fsubs f0, f0, f8
/* 8018AE10 00187D50  EC 42 48 28 */	fsubs f2, f2, f9
/* 8018AE14 00187D54  EC 63 50 28 */	fsubs f3, f3, f10
/* 8018AE18 00187D58  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8018AE1C 00187D5C  D0 5D 00 20 */	stfs f2, 0x20(r29)
/* 8018AE20 00187D60  D0 7D 00 24 */	stfs f3, 0x24(r29)
/* 8018AE24 00187D64  C0 7D 00 1C */	lfs f3, 0x1c(r29)
/* 8018AE28 00187D68  C0 5D 00 20 */	lfs f2, 0x20(r29)
/* 8018AE2C 00187D6C  C0 9D 00 24 */	lfs f4, 0x24(r29)
/* 8018AE30 00187D70  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8018AE34 00187D74  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8018AE38 00187D78  EC 84 01 32 */	fmuls f4, f4, f4
/* 8018AE3C 00187D7C  EC 00 10 2A */	fadds f0, f0, f2
/* 8018AE40 00187D80  EC 04 00 2A */	fadds f0, f4, f0
/* 8018AE44 00187D84  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8018AE48 00187D88  40 81 00 20 */	ble .L_8018AE68
/* 8018AE4C 00187D8C  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8018AE50 00187D90  EC 44 00 2A */	fadds f2, f4, f0
/* 8018AE54 00187D94  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8018AE58 00187D98  40 81 00 14 */	ble .L_8018AE6C
/* 8018AE5C 00187D9C  FC 00 10 34 */	frsqrte f0, f2
/* 8018AE60 00187DA0  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8018AE64 00187DA4  48 00 00 08 */	b .L_8018AE6C
.L_8018AE68:
/* 8018AE68 00187DA8  FC 40 08 90 */	fmr f2, f1
.L_8018AE6C:
/* 8018AE6C 00187DAC  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018AE70 00187DB0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8018AE74 00187DB4  40 81 00 34 */	ble .L_8018AEA8
/* 8018AE78 00187DB8  C0 22 AA 84 */	lfs f1, lbl_80518DE4@sda21(r2)
/* 8018AE7C 00187DBC  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 8018AE80 00187DC0  EC 21 10 24 */	fdivs f1, f1, f2
/* 8018AE84 00187DC4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8018AE88 00187DC8  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8018AE8C 00187DCC  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 8018AE90 00187DD0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8018AE94 00187DD4  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8018AE98 00187DD8  C0 1D 00 24 */	lfs f0, 0x24(r29)
/* 8018AE9C 00187DDC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8018AEA0 00187DE0  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 8018AEA4 00187DE4  48 00 00 08 */	b .L_8018AEAC
.L_8018AEA8:
/* 8018AEA8 00187DE8  FC 40 00 90 */	fmr f2, f0
.L_8018AEAC:
/* 8018AEAC 00187DEC  D0 5D 00 28 */	stfs f2, 0x28(r29)
/* 8018AEB0 00187DF0  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 8018AEB4 00187DF4  FC 00 00 50 */	fneg f0, f0
/* 8018AEB8 00187DF8  D0 1D 00 2C */	stfs f0, 0x2c(r29)
/* 8018AEBC 00187DFC  4B F3 E6 E5 */	bl rand
/* 8018AEC0 00187E00  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018AEC4 00187E04  3C 00 43 30 */	lis r0, 0x4330
/* 8018AEC8 00187E08  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8018AECC 00187E0C  7F C3 F3 78 */	mr r3, r30
/* 8018AED0 00187E10  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018AED4 00187E14  38 80 00 00 */	li r4, 0
/* 8018AED8 00187E18  90 01 00 18 */	stw r0, 0x18(r1)
/* 8018AEDC 00187E1C  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8018AEE0 00187E20  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 8018AEE4 00187E24  C0 02 AA 64 */	lfs f0, lbl_80518DC4@sda21(r2)
/* 8018AEE8 00187E28  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018AEEC 00187E2C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8018AEF0 00187E30  EC 00 00 72 */	fmuls f0, f0, f1
/* 8018AEF4 00187E34  D0 1D 00 30 */	stfs f0, 0x30(r29)
/* 8018AEF8 00187E38  4B FB 0B 59 */	bl movie_begin__Q24Game8CreatureFb
/* 8018AEFC 00187E3C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8018AF00 00187E40  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8018AF04 00187E44  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8018AF08 00187E48  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8018AF0C 00187E4C  7C 08 03 A6 */	mtlr r0
/* 8018AF10 00187E50  38 21 00 30 */	addi r1, r1, 0x30
/* 8018AF14 00187E54  4E 80 00 20 */	blr 
.endfn init__Q24Game19PikiFountainonStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game19PikiFountainonStateFPQ24Game4Piki, global
/* 8018AF18 00187E58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018AF1C 00187E5C  7C 08 02 A6 */	mflr r0
/* 8018AF20 00187E60  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018AF24 00187E64  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018AF28 00187E68  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018AF2C 00187E6C  7C 9F 23 78 */	mr r31, r4
/* 8018AF30 00187E70  C0 43 00 30 */	lfs f2, 0x30(r3)
/* 8018AF34 00187E74  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8018AF38 00187E78  40 81 00 38 */	ble .L_8018AF70
/* 8018AF3C 00187E7C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8018AF40 00187E80  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8018AF44 00187E84  EC 02 00 28 */	fsubs f0, f2, f0
/* 8018AF48 00187E88  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 8018AF4C 00187E8C  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 8018AF50 00187E90  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8018AF54 00187E94  4C 40 13 82 */	cror 2, 0, 2
/* 8018AF58 00187E98  40 82 01 4C */	bne .L_8018B0A4
/* 8018AF5C 00187E9C  7F E3 FB 78 */	mr r3, r31
/* 8018AF60 00187EA0  38 80 28 2F */	li r4, 0x282f
/* 8018AF64 00187EA4  38 A0 00 00 */	li r5, 0
/* 8018AF68 00187EA8  4B FB D9 65 */	bl startSound__Q24Game4PikiFUlb
/* 8018AF6C 00187EAC  48 00 01 38 */	b .L_8018B0A4
.L_8018AF70:
/* 8018AF70 00187EB0  C0 63 00 28 */	lfs f3, 0x28(r3)
/* 8018AF74 00187EB4  C0 C2 AA B4 */	lfs f6, lbl_80518E14@sda21(r2)
/* 8018AF78 00187EB8  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8018AF7C 00187EBC  C0 42 AA B8 */	lfs f2, lbl_80518E18@sda21(r2)
/* 8018AF80 00187EC0  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 8018AF84 00187EC4  ED 06 00 F2 */	fmuls f8, f6, f3
/* 8018AF88 00187EC8  C0 A2 AA BC */	lfs f5, lbl_80518E1C@sda21(r2)
/* 8018AF8C 00187ECC  EC 42 08 24 */	fdivs f2, f2, f1
/* 8018AF90 00187ED0  EC 22 00 32 */	fmuls f1, f2, f0
/* 8018AF94 00187ED4  FC 00 40 40 */	fcmpo cr0, f0, f8
/* 8018AF98 00187ED8  EC 20 00 72 */	fmuls f1, f0, f1
/* 8018AF9C 00187EDC  ED 25 08 2A */	fadds f9, f5, f1
/* 8018AFA0 00187EE0  4C 41 13 82 */	cror 2, 1, 2
/* 8018AFA4 00187EE4  40 82 00 70 */	bne .L_8018B014
/* 8018AFA8 00187EE8  EC 42 02 32 */	fmuls f2, f2, f8
/* 8018AFAC 00187EEC  C0 83 00 20 */	lfs f4, 0x20(r3)
/* 8018AFB0 00187EF0  C0 C3 00 24 */	lfs f6, 0x24(r3)
/* 8018AFB4 00187EF4  EC 20 40 28 */	fsubs f1, f0, f8
/* 8018AFB8 00187EF8  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 8018AFBC 00187EFC  EC 84 02 32 */	fmuls f4, f4, f8
/* 8018AFC0 00187F00  EC 48 28 BA */	fmadds f2, f8, f2, f5
/* 8018AFC4 00187F04  C0 A3 00 14 */	lfs f5, 0x14(r3)
/* 8018AFC8 00187F08  EC C6 02 32 */	fmuls f6, f6, f8
/* 8018AFCC 00187F0C  C0 E3 00 18 */	lfs f7, 0x18(r3)
/* 8018AFD0 00187F10  EC A5 20 2A */	fadds f5, f5, f4
/* 8018AFD4 00187F14  C0 83 00 10 */	lfs f4, 0x10(r3)
/* 8018AFD8 00187F18  EC 63 02 32 */	fmuls f3, f3, f8
/* 8018AFDC 00187F1C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8018AFE0 00187F20  EC 22 08 2A */	fadds f1, f2, f1
/* 8018AFE4 00187F24  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 8018AFE8 00187F28  EC C7 30 2A */	fadds f6, f7, f6
/* 8018AFEC 00187F2C  C0 42 AA C0 */	lfs f2, lbl_80518E20@sda21(r2)
/* 8018AFF0 00187F30  EC 64 18 2A */	fadds f3, f4, f3
/* 8018AFF4 00187F34  EC 25 08 2A */	fadds f1, f5, f1
/* 8018AFF8 00187F38  D0 C1 00 10 */	stfs f6, 0x10(r1)
/* 8018AFFC 00187F3C  D0 61 00 08 */	stfs f3, 8(r1)
/* 8018B000 00187F40  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8018B004 00187F44  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8018B008 00187F48  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8018B00C 00187F4C  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 8018B010 00187F50  48 00 00 84 */	b .L_8018B094
.L_8018B014:
/* 8018B014 00187F54  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 8018B018 00187F58  C0 83 00 24 */	lfs f4, 0x24(r3)
/* 8018B01C 00187F5C  EC 41 00 32 */	fmuls f2, f1, f0
/* 8018B020 00187F60  C0 63 00 14 */	lfs f3, 0x14(r3)
/* 8018B024 00187F64  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8018B028 00187F68  EC 84 00 32 */	fmuls f4, f4, f0
/* 8018B02C 00187F6C  C0 A3 00 18 */	lfs f5, 0x18(r3)
/* 8018B030 00187F70  EC E3 10 2A */	fadds f7, f3, f2
/* 8018B034 00187F74  C0 63 00 10 */	lfs f3, 0x10(r3)
/* 8018B038 00187F78  EC 41 00 32 */	fmuls f2, f1, f0
/* 8018B03C 00187F7C  EC 85 20 2A */	fadds f4, f5, f4
/* 8018B040 00187F80  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8018B044 00187F84  EC 27 48 2A */	fadds f1, f7, f9
/* 8018B048 00187F88  EC 63 10 2A */	fadds f3, f3, f2
/* 8018B04C 00187F8C  D0 E1 00 0C */	stfs f7, 0xc(r1)
/* 8018B050 00187F90  C0 42 AA 98 */	lfs f2, lbl_80518DF8@sda21(r2)
/* 8018B054 00187F94  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 8018B058 00187F98  D0 61 00 08 */	stfs f3, 8(r1)
/* 8018B05C 00187F9C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8018B060 00187FA0  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8018B064 00187FA4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8018B068 00187FA8  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 8018B06C 00187FAC  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8018B070 00187FB0  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8018B074 00187FB4  EC 06 00 32 */	fmuls f0, f6, f0
/* 8018B078 00187FB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018B07C 00187FBC  4C 41 13 82 */	cror 2, 1, 2
/* 8018B080 00187FC0  40 82 00 14 */	bne .L_8018B094
/* 8018B084 00187FC4  7F E3 FB 78 */	mr r3, r31
/* 8018B088 00187FC8  38 80 28 5A */	li r4, 0x285a
/* 8018B08C 00187FCC  38 A0 00 00 */	li r5, 0
/* 8018B090 00187FD0  4B FB D8 3D */	bl startSound__Q24Game4PikiFUlb
.L_8018B094:
/* 8018B094 00187FD4  7F E3 FB 78 */	mr r3, r31
/* 8018B098 00187FD8  38 81 00 08 */	addi r4, r1, 8
/* 8018B09C 00187FDC  38 A0 00 00 */	li r5, 0
/* 8018B0A0 00187FE0  4B FB 01 09 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
.L_8018B0A4:
/* 8018B0A4 00187FE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018B0A8 00187FE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018B0AC 00187FEC  7C 08 03 A6 */	mtlr r0
/* 8018B0B0 00187FF0  38 21 00 20 */	addi r1, r1, 0x20
/* 8018B0B4 00187FF4  4E 80 00 20 */	blr 
.endfn exec__Q24Game19PikiFountainonStateFPQ24Game4Piki

.fn cleanup__Q24Game19PikiFountainonStateFPQ24Game4Piki, global
/* 8018B0B8 00187FF8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game19PikiFountainonStateFPQ24Game4Piki

.fn init__Q24Game13PikiTaneStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018B0BC 00187FFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018B0C0 00188000  7C 08 02 A6 */	mflr r0
/* 8018B0C4 00188004  38 A0 00 24 */	li r5, 0x24
/* 8018B0C8 00188008  38 C0 00 00 */	li r6, 0
/* 8018B0CC 0018800C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018B0D0 00188010  38 E0 00 00 */	li r7, 0
/* 8018B0D4 00188014  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018B0D8 00188018  7C 9F 23 78 */	mr r31, r4
/* 8018B0DC 0018801C  38 80 00 24 */	li r4, 0x24
/* 8018B0E0 00188020  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018B0E4 00188024  7C 7E 1B 78 */	mr r30, r3
/* 8018B0E8 00188028  7F E3 FB 78 */	mr r3, r31
/* 8018B0EC 0018802C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018B0F0 00188030  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018B0F4 00188034  7D 89 03 A6 */	mtctr r12
/* 8018B0F8 00188038  4E 80 04 21 */	bctrl 
/* 8018B0FC 0018803C  4B F3 E4 A5 */	bl rand
/* 8018B100 00188040  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018B104 00188044  3C 00 43 30 */	lis r0, 0x4330
/* 8018B108 00188048  90 61 00 0C */	stw r3, 0xc(r1)
/* 8018B10C 0018804C  7F E3 FB 78 */	mr r3, r31
/* 8018B110 00188050  C8 22 AA 78 */	lfd f1, lbl_80518DD8@sda21(r2)
/* 8018B114 00188054  38 80 00 00 */	li r4, 0
/* 8018B118 00188058  90 01 00 08 */	stw r0, 8(r1)
/* 8018B11C 0018805C  C0 82 AA 68 */	lfs f4, lbl_80518DC8@sda21(r2)
/* 8018B120 00188060  C8 01 00 08 */	lfd f0, 8(r1)
/* 8018B124 00188064  C0 62 AA 94 */	lfs f3, lbl_80518DF4@sda21(r2)
/* 8018B128 00188068  EC A0 08 28 */	fsubs f5, f0, f1
/* 8018B12C 0018806C  C0 22 AA 6C */	lfs f1, lbl_80518DCC@sda21(r2)
/* 8018B130 00188070  C0 42 AA A4 */	lfs f2, lbl_80518E04@sda21(r2)
/* 8018B134 00188074  C0 02 AA C4 */	lfs f0, lbl_80518E24@sda21(r2)
/* 8018B138 00188078  EC 85 20 24 */	fdivs f4, f5, f4
/* 8018B13C 0018807C  EC 23 09 3C */	fnmsubs f1, f3, f4, f1
/* 8018B140 00188080  D0 3E 00 14 */	stfs f1, 0x14(r30)
/* 8018B144 00188084  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8018B148 00188088  EC 22 00 72 */	fmuls f1, f2, f1
/* 8018B14C 0018808C  D0 3E 00 10 */	stfs f1, 0x10(r30)
/* 8018B150 00188090  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8018B154 00188094  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018B158 00188098  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8018B15C 0018809C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018B160 001880A0  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8018B164 001880A4  7D 89 03 A6 */	mtctr r12
/* 8018B168 001880A8  4E 80 04 21 */	bctrl 
/* 8018B16C 001880AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018B170 001880B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018B174 001880B4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018B178 001880B8  7C 08 03 A6 */	mtlr r0
/* 8018B17C 001880BC  38 21 00 20 */	addi r1, r1, 0x20
/* 8018B180 001880C0  4E 80 00 20 */	blr 
.endfn init__Q24Game13PikiTaneStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game13PikiTaneStateFPQ24Game4Piki, global
/* 8018B184 001880C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018B188 001880C8  7C 08 02 A6 */	mflr r0
/* 8018B18C 001880CC  7C 66 1B 78 */	mr r6, r3
/* 8018B190 001880D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018B194 001880D4  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8018B198 001880D8  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 8018B19C 001880DC  7C 83 23 78 */	mr r3, r4
/* 8018B1A0 001880E0  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 8018B1A4 001880E4  C0 66 00 14 */	lfs f3, 0x14(r6)
/* 8018B1A8 001880E8  4B FB 05 FD */	bl applyAirDrag__Q24Game8CreatureFfff
/* 8018B1AC 001880EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018B1B0 001880F0  7C 08 03 A6 */	mtlr r0
/* 8018B1B4 001880F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8018B1B8 001880F8  4E 80 00 20 */	blr 
.endfn exec__Q24Game13PikiTaneStateFPQ24Game4Piki

.fn cleanup__Q24Game13PikiTaneStateFPQ24Game4Piki, global
/* 8018B1BC 001880FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018B1C0 00188100  7C 08 02 A6 */	mflr r0
/* 8018B1C4 00188104  7C 83 23 78 */	mr r3, r4
/* 8018B1C8 00188108  38 80 00 01 */	li r4, 1
/* 8018B1CC 0018810C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018B1D0 00188110  81 83 00 00 */	lwz r12, 0(r3)
/* 8018B1D4 00188114  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8018B1D8 00188118  7D 89 03 A6 */	mtctr r12
/* 8018B1DC 0018811C  4E 80 04 21 */	bctrl 
/* 8018B1E0 00188120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018B1E4 00188124  7C 08 03 A6 */	mtlr r0
/* 8018B1E8 00188128  38 21 00 10 */	addi r1, r1, 0x10
/* 8018B1EC 0018812C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13PikiTaneStateFPQ24Game4Piki

.fn bounceCallback__Q24Game13PikiTaneStateFPQ24Game4PikiPQ23Sys8Triangle, global
/* 8018B1F0 00188130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018B1F4 00188134  7C 08 02 A6 */	mflr r0
/* 8018B1F8 00188138  38 A0 00 00 */	li r5, 0
/* 8018B1FC 0018813C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018B200 00188140  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018B204 00188144  7C 9F 23 78 */	mr r31, r4
/* 8018B208 00188148  93 C1 00 08 */	stw r30, 8(r1)
/* 8018B20C 0018814C  7C 7E 1B 78 */	mr r30, r3
/* 8018B210 00188150  80 64 02 94 */	lwz r3, 0x294(r4)
/* 8018B214 00188154  38 80 00 01 */	li r4, 1
/* 8018B218 00188158  48 00 BD 7D */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 8018B21C 0018815C  7F C3 F3 78 */	mr r3, r30
/* 8018B220 00188160  7F E4 FB 78 */	mr r4, r31
/* 8018B224 00188164  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018B228 00188168  38 A0 00 00 */	li r5, 0
/* 8018B22C 0018816C  38 C0 00 00 */	li r6, 0
/* 8018B230 00188170  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018B234 00188174  7D 89 03 A6 */	mtctr r12
/* 8018B238 00188178  4E 80 04 21 */	bctrl 
/* 8018B23C 0018817C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018B240 00188180  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018B244 00188184  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018B248 00188188  7C 08 03 A6 */	mtlr r0
/* 8018B24C 0018818C  38 21 00 10 */	addi r1, r1, 0x10
/* 8018B250 00188190  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game13PikiTaneStateFPQ24Game4PikiPQ23Sys8Triangle

.fn init__Q24Game15PikiNukareStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018B254 00188194  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018B258 00188198  7C 08 02 A6 */	mflr r0
/* 8018B25C 0018819C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018B260 001881A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018B264 001881A4  7C BF 2B 79 */	or. r31, r5, r5
/* 8018B268 001881A8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018B26C 001881AC  7C 9E 23 78 */	mr r30, r4
/* 8018B270 001881B0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8018B274 001881B4  7C 7D 1B 78 */	mr r29, r3
/* 8018B278 001881B8  40 82 00 20 */	bne .L_8018B298
/* 8018B27C 001881BC  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 8018B280 001881C0  3C A0 80 48 */	lis r5, lbl_8047ECDC@ha
/* 8018B284 001881C4  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 8018B288 001881C8  38 80 04 8E */	li r4, 0x48e
/* 8018B28C 001881CC  38 A5 EC DC */	addi r5, r5, lbl_8047ECDC@l
/* 8018B290 001881D0  4C C6 31 82 */	crclr 6
/* 8018B294 001881D4  4B E9 F3 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018B298:
/* 8018B298 001881D8  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018B29C 001881DC  D0 1E 01 E4 */	stfs f0, 0x1e4(r30)
/* 8018B2A0 001881E0  D0 1E 01 E8 */	stfs f0, 0x1e8(r30)
/* 8018B2A4 001881E4  D0 1E 01 EC */	stfs f0, 0x1ec(r30)
/* 8018B2A8 001881E8  80 7F 00 04 */	lwz r3, 4(r31)
/* 8018B2AC 001881EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8018B2B0 001881F0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8018B2B4 001881F4  7D 89 03 A6 */	mtctr r12
/* 8018B2B8 001881F8  4E 80 04 21 */	bctrl 
/* 8018B2BC 001881FC  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 8018B2C0 00188200  80 1F 00 04 */	lwz r0, 4(r31)
/* 8018B2C4 00188204  90 1D 00 10 */	stw r0, 0x10(r29)
/* 8018B2C8 00188208  80 1F 00 04 */	lwz r0, 4(r31)
/* 8018B2CC 0018820C  90 1E 02 C4 */	stw r0, 0x2c4(r30)
/* 8018B2D0 00188210  88 1F 00 00 */	lbz r0, 0(r31)
/* 8018B2D4 00188214  28 00 00 00 */	cmplwi r0, 0
/* 8018B2D8 00188218  41 82 00 10 */	beq .L_8018B2E8
/* 8018B2DC 0018821C  38 00 00 2D */	li r0, 0x2d
/* 8018B2E0 00188220  B0 1D 00 16 */	sth r0, 0x16(r29)
/* 8018B2E4 00188224  48 00 00 0C */	b .L_8018B2F0
.L_8018B2E8:
/* 8018B2E8 00188228  38 00 00 2C */	li r0, 0x2c
/* 8018B2EC 0018822C  B0 1D 00 16 */	sth r0, 0x16(r29)
.L_8018B2F0:
/* 8018B2F0 00188230  28 1E 00 00 */	cmplwi r30, 0
/* 8018B2F4 00188234  7F C6 F3 78 */	mr r6, r30
/* 8018B2F8 00188238  41 82 00 08 */	beq .L_8018B300
/* 8018B2FC 0018823C  38 DE 01 78 */	addi r6, r30, 0x178
.L_8018B300:
/* 8018B300 00188240  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018B304 00188244  7F C3 F3 78 */	mr r3, r30
/* 8018B308 00188248  A8 9D 00 16 */	lha r4, 0x16(r29)
/* 8018B30C 0018824C  38 E0 00 00 */	li r7, 0
/* 8018B310 00188250  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018B314 00188254  7C 85 23 78 */	mr r5, r4
/* 8018B318 00188258  7D 89 03 A6 */	mtctr r12
/* 8018B31C 0018825C  4E 80 04 21 */	bctrl 
/* 8018B320 00188260  38 00 00 00 */	li r0, 0
/* 8018B324 00188264  98 1D 00 14 */	stb r0, 0x14(r29)
/* 8018B328 00188268  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8018B32C 0018826C  88 9E 02 B8 */	lbz r4, 0x2b8(r30)
/* 8018B330 00188270  48 05 BD 79 */	bl hasMetPikmin__Q24Game8PlayDataFi
/* 8018B334 00188274  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018B338 00188278  40 82 00 14 */	bne .L_8018B34C
/* 8018B33C 0018827C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8018B340 00188280  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8018B344 00188284  60 00 00 08 */	ori r0, r0, 8
/* 8018B348 00188288  98 03 00 3C */	stb r0, 0x3c(r3)
.L_8018B34C:
/* 8018B34C 0018828C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018B350 00188290  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018B354 00188294  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018B358 00188298  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8018B35C 0018829C  7C 08 03 A6 */	mtlr r0
/* 8018B360 001882A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8018B364 001882A4  4E 80 00 20 */	blr 
.endfn init__Q24Game15PikiNukareStateFPQ24Game4PikiPQ24Game8StateArg

.fn soft_transittable__Q24Game15PikiNukareStateFi, global
/* 8018B368 001882A8  7C 80 00 34 */	cntlzw r0, r4
/* 8018B36C 001882AC  54 03 D9 7E */	srwi r3, r0, 5
/* 8018B370 001882B0  4E 80 00 20 */	blr 
.endfn soft_transittable__Q24Game15PikiNukareStateFi

.fn exec__Q24Game15PikiNukareStateFPQ24Game4Piki, global
/* 8018B374 001882B4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8018B378 001882B8  7C 08 02 A6 */	mflr r0
/* 8018B37C 001882BC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8018B380 001882C0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018B384 001882C4  7C 9F 23 78 */	mr r31, r4
/* 8018B388 001882C8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8018B38C 001882CC  7C 7E 1B 78 */	mr r30, r3
/* 8018B390 001882D0  A8 83 00 16 */	lha r4, 0x16(r3)
/* 8018B394 001882D4  7F E3 FB 78 */	mr r3, r31
/* 8018B398 001882D8  4B FB 1B 95 */	bl assertMotion__Q24Game8FakePikiFi
/* 8018B39C 001882DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018B3A0 001882E0  40 82 00 0C */	bne .L_8018B3AC
/* 8018B3A4 001882E4  38 00 00 01 */	li r0, 1
/* 8018B3A8 001882E8  98 1E 00 14 */	stb r0, 0x14(r30)
.L_8018B3AC:
/* 8018B3AC 001882EC  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 8018B3B0 001882F0  28 00 00 00 */	cmplwi r0, 0
/* 8018B3B4 001882F4  41 82 00 F8 */	beq .L_8018B4AC
/* 8018B3B8 001882F8  80 DF 01 14 */	lwz r6, 0x114(r31)
/* 8018B3BC 001882FC  7F C3 F3 78 */	mr r3, r30
/* 8018B3C0 00188300  7F E4 FB 78 */	mr r4, r31
/* 8018B3C4 00188304  38 A0 00 00 */	li r5, 0
/* 8018B3C8 00188308  80 E6 00 00 */	lwz r7, 0(r6)
/* 8018B3CC 0018830C  38 C0 00 00 */	li r6, 0
/* 8018B3D0 00188310  C0 07 00 4C */	lfs f0, 0x4c(r7)
/* 8018B3D4 00188314  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8018B3D8 00188318  C0 07 00 50 */	lfs f0, 0x50(r7)
/* 8018B3DC 0018831C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8018B3E0 00188320  C0 07 00 54 */	lfs f0, 0x54(r7)
/* 8018B3E4 00188324  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8018B3E8 00188328  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018B3EC 0018832C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018B3F0 00188330  7D 89 03 A6 */	mtctr r12
/* 8018B3F4 00188334  4E 80 04 21 */	bctrl 
/* 8018B3F8 00188338  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8018B3FC 0018833C  38 81 00 14 */	addi r4, r1, 0x14
/* 8018B400 00188340  81 83 00 04 */	lwz r12, 4(r3)
/* 8018B404 00188344  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8018B408 00188348  7D 89 03 A6 */	mtctr r12
/* 8018B40C 0018834C  4E 80 04 21 */	bctrl 
/* 8018B410 00188350  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8018B414 00188354  7F E3 FB 78 */	mr r3, r31
/* 8018B418 00188358  38 81 00 14 */	addi r4, r1, 0x14
/* 8018B41C 0018835C  38 A0 00 00 */	li r5, 0
/* 8018B420 00188360  4B FA FD 89 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8018B424 00188364  80 DF 02 C4 */	lwz r6, 0x2c4(r31)
/* 8018B428 00188368  3C 60 80 4B */	lis r3, __vt__Q26PikiAI9ActionArg@ha
/* 8018B42C 0018836C  38 83 05 30 */	addi r4, r3, __vt__Q26PikiAI9ActionArg@l
/* 8018B430 00188370  38 00 00 00 */	li r0, 0
/* 8018B434 00188374  3C 60 80 4B */	lis r3, __vt__Q26PikiAI17CreatureActionArg@ha
/* 8018B438 00188378  90 81 00 08 */	stw r4, 8(r1)
/* 8018B43C 0018837C  38 83 05 24 */	addi r4, r3, __vt__Q26PikiAI17CreatureActionArg@l
/* 8018B440 00188380  3C 60 80 4B */	lis r3, __vt__Q26PikiAI19ActFormationInitArg@ha
/* 8018B444 00188384  90 81 00 08 */	stw r4, 8(r1)
/* 8018B448 00188388  38 63 0D 44 */	addi r3, r3, __vt__Q26PikiAI19ActFormationInitArg@l
/* 8018B44C 0018838C  38 A1 00 08 */	addi r5, r1, 8
/* 8018B450 00188390  38 80 00 00 */	li r4, 0
/* 8018B454 00188394  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8018B458 00188398  90 61 00 08 */	stw r3, 8(r1)
/* 8018B45C 0018839C  98 01 00 10 */	stb r0, 0x10(r1)
/* 8018B460 001883A0  98 01 00 11 */	stb r0, 0x11(r1)
/* 8018B464 001883A4  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8018B468 001883A8  48 00 BB 2D */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 8018B46C 001883AC  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 8018B470 001883B0  2C 04 00 00 */	cmpwi r4, 0
/* 8018B474 001883B4  41 80 00 38 */	blt .L_8018B4AC
/* 8018B478 001883B8  2C 04 00 04 */	cmpwi r4, 4
/* 8018B47C 001883BC  41 81 00 30 */	bgt .L_8018B4AC
/* 8018B480 001883C0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8018B484 001883C4  48 05 BC 25 */	bl hasMetPikmin__Q24Game8PlayDataFi
/* 8018B488 001883C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018B48C 001883CC  40 82 00 20 */	bne .L_8018B4AC
/* 8018B490 001883D0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8018B494 001883D4  7F E4 FB 78 */	mr r4, r31
/* 8018B498 001883D8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8018B49C 001883DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8018B4A0 001883E0  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 8018B4A4 001883E4  7D 89 03 A6 */	mtctr r12
/* 8018B4A8 001883E8  4E 80 04 21 */	bctrl 
.L_8018B4AC:
/* 8018B4AC 001883EC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8018B4B0 001883F0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8018B4B4 001883F4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8018B4B8 001883F8  7C 08 03 A6 */	mtlr r0
/* 8018B4BC 001883FC  38 21 00 30 */	addi r1, r1, 0x30
/* 8018B4C0 00188400  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PikiNukareStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game15PikiNukareStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 8018B4C4 00188404  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8018B4C8 00188408  7C 08 02 A6 */	mflr r0
/* 8018B4CC 0018840C  90 01 00 74 */	stw r0, 0x74(r1)
/* 8018B4D0 00188410  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8018B4D4 00188414  3C A0 80 48 */	lis r5, lbl_8047EBE8@ha
/* 8018B4D8 00188418  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8018B4DC 0018841C  3B E5 EB E8 */	addi r31, r5, lbl_8047EBE8@l
/* 8018B4E0 00188420  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8018B4E4 00188424  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8018B4E8 00188428  7C 9E 23 78 */	mr r30, r4
/* 8018B4EC 0018842C  41 82 01 C4 */	beq .L_8018B6B0
/* 8018B4F0 00188430  40 80 01 C8 */	bge .L_8018B6B8
/* 8018B4F4 00188434  2C 00 00 02 */	cmpwi r0, 2
/* 8018B4F8 00188438  41 82 00 08 */	beq .L_8018B500
/* 8018B4FC 0018843C  48 00 01 BC */	b .L_8018B6B8
.L_8018B500:
/* 8018B500 00188440  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 8018B504 00188444  38 80 00 00 */	li r4, 0
/* 8018B508 00188448  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8018B50C 0018844C  A0 A5 02 DC */	lhz r5, 0x2dc(r5)
/* 8018B510 00188450  48 0C 84 15 */	bl startRumble__Q24Game9RumbleMgrFii
/* 8018B514 00188454  7F C4 F3 78 */	mr r4, r30
/* 8018B518 00188458  38 61 00 14 */	addi r3, r1, 0x14
/* 8018B51C 0018845C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018B520 00188460  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018B524 00188464  7D 89 03 A6 */	mtctr r12
/* 8018B528 00188468  4E 80 04 21 */	bctrl 
/* 8018B52C 0018846C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8018B530 00188470  7F C3 F3 78 */	mr r3, r30
/* 8018B534 00188474  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8018B538 00188478  38 A1 00 30 */	addi r5, r1, 0x30
/* 8018B53C 0018847C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8018B540 00188480  38 80 00 00 */	li r4, 0
/* 8018B544 00188484  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8018B548 00188488  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018B54C 0018848C  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 8018B550 00188490  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 8018B554 00188494  80 1E 01 7C */	lwz r0, 0x17c(r30)
/* 8018B558 00188498  60 00 00 10 */	ori r0, r0, 0x10
/* 8018B55C 0018849C  90 1E 01 7C */	stw r0, 0x17c(r30)
/* 8018B560 001884A0  C0 61 00 40 */	lfs f3, 0x40(r1)
/* 8018B564 001884A4  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 8018B568 001884A8  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 8018B56C 001884AC  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8018B570 001884B0  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8018B574 001884B4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8018B578 001884B8  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8018B57C 001884BC  4B FB 05 C1 */	bl checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
/* 8018B580 001884C0  28 03 00 00 */	cmplwi r3, 0
/* 8018B584 001884C4  41 82 00 EC */	beq .L_8018B670
/* 8018B588 001884C8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8018B58C 001884CC  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8018B590 001884D0  80 81 00 44 */	lwz r4, 0x44(r1)
/* 8018B594 001884D4  39 45 A7 F8 */	addi r10, r5, __vt__Q23efx5TBase@l
/* 8018B598 001884D8  80 01 00 48 */	lwz r0, 0x48(r1)
/* 8018B59C 001884DC  3C C0 80 4E */	lis r6, __vt__Q23efx8TSimple2@ha
/* 8018B5A0 001884E0  90 61 00 08 */	stw r3, 8(r1)
/* 8018B5A4 001884E4  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8018B5A8 001884E8  38 A3 A7 EC */	addi r5, r3, __vt__Q23efx3Arg@l
/* 8018B5AC 001884EC  C0 02 AA C8 */	lfs f0, lbl_80518E28@sda21(r2)
/* 8018B5B0 001884F0  38 E0 00 00 */	li r7, 0
/* 8018B5B4 001884F4  90 81 00 0C */	stw r4, 0xc(r1)
/* 8018B5B8 001884F8  C0 61 00 08 */	lfs f3, 8(r1)
/* 8018B5BC 001884FC  3C 80 80 4F */	lis r4, __vt__Q23efx10TEnemyDive@ha
/* 8018B5C0 00188500  90 01 00 10 */	stw r0, 0x10(r1)
/* 8018B5C4 00188504  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 8018B5C8 00188508  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8018B5CC 0018850C  39 20 01 59 */	li r9, 0x159
/* 8018B5D0 00188510  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8018B5D4 00188514  39 00 01 5A */	li r8, 0x15a
/* 8018B5D8 00188518  91 41 00 20 */	stw r10, 0x20(r1)
/* 8018B5DC 0018851C  39 46 6A 64 */	addi r10, r6, __vt__Q23efx8TSimple2@l
/* 8018B5E0 00188520  38 C4 85 E8 */	addi r6, r4, __vt__Q23efx10TEnemyDive@l
/* 8018B5E4 00188524  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 8018B5E8 00188528  91 41 00 20 */	stw r10, 0x20(r1)
/* 8018B5EC 0018852C  38 61 00 20 */	addi r3, r1, 0x20
/* 8018B5F0 00188530  38 81 00 4C */	addi r4, r1, 0x4c
/* 8018B5F4 00188534  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 8018B5F8 00188538  B1 21 00 24 */	sth r9, 0x24(r1)
/* 8018B5FC 0018853C  B1 01 00 26 */	sth r8, 0x26(r1)
/* 8018B600 00188540  90 E1 00 28 */	stw r7, 0x28(r1)
/* 8018B604 00188544  90 E1 00 2C */	stw r7, 0x2c(r1)
/* 8018B608 00188548  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8018B60C 0018854C  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 8018B610 00188550  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 8018B614 00188554  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 8018B618 00188558  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8018B61C 0018855C  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 8018B620 00188560  48 23 D2 B9 */	bl create__Q23efx10TEnemyDiveFPQ23efx3Arg
/* 8018B624 00188564  80 1E 02 C4 */	lwz r0, 0x2c4(r30)
/* 8018B628 00188568  28 00 00 00 */	cmplwi r0, 0
/* 8018B62C 0018856C  40 82 00 18 */	bne .L_8018B644
/* 8018B630 00188570  38 7F 00 78 */	addi r3, r31, 0x78
/* 8018B634 00188574  38 BF 01 00 */	addi r5, r31, 0x100
/* 8018B638 00188578  38 80 04 DA */	li r4, 0x4da
/* 8018B63C 0018857C  4C C6 31 82 */	crclr 6
/* 8018B640 00188580  4B E9 F0 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018B644:
/* 8018B644 00188584  80 9E 02 C4 */	lwz r4, 0x2c4(r30)
/* 8018B648 00188588  7F C3 F3 78 */	mr r3, r30
/* 8018B64C 0018858C  38 A0 38 0B */	li r5, 0x380b
/* 8018B650 00188590  38 C0 00 01 */	li r6, 1
/* 8018B654 00188594  4B FB D3 01 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8018B658 00188598  80 9E 02 C4 */	lwz r4, 0x2c4(r30)
/* 8018B65C 0018859C  7F C3 F3 78 */	mr r3, r30
/* 8018B660 001885A0  38 A0 28 21 */	li r5, 0x2821
/* 8018B664 001885A4  38 C0 00 00 */	li r6, 0
/* 8018B668 001885A8  4B FB D2 ED */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8018B66C 001885AC  48 00 00 4C */	b .L_8018B6B8
.L_8018B670:
/* 8018B670 001885B0  80 1E 02 C4 */	lwz r0, 0x2c4(r30)
/* 8018B674 001885B4  28 00 00 00 */	cmplwi r0, 0
/* 8018B678 001885B8  40 82 00 18 */	bne .L_8018B690
/* 8018B67C 001885BC  38 7F 00 78 */	addi r3, r31, 0x78
/* 8018B680 001885C0  38 BF 01 10 */	addi r5, r31, 0x110
/* 8018B684 001885C4  38 80 04 DE */	li r4, 0x4de
/* 8018B688 001885C8  4C C6 31 82 */	crclr 6
/* 8018B68C 001885CC  4B E9 EF B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018B690:
/* 8018B690 001885D0  38 61 00 40 */	addi r3, r1, 0x40
/* 8018B694 001885D4  48 22 C1 19 */	bl "createSimplePkAp__3efxFR10Vector3<f>"
/* 8018B698 001885D8  80 9E 02 C4 */	lwz r4, 0x2c4(r30)
/* 8018B69C 001885DC  7F C3 F3 78 */	mr r3, r30
/* 8018B6A0 001885E0  38 A0 28 21 */	li r5, 0x2821
/* 8018B6A4 001885E4  38 C0 00 00 */	li r6, 0
/* 8018B6A8 001885E8  4B FB D2 AD */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8018B6AC 001885EC  48 00 00 0C */	b .L_8018B6B8
.L_8018B6B0:
/* 8018B6B0 001885F0  38 00 00 01 */	li r0, 1
/* 8018B6B4 001885F4  98 03 00 14 */	stb r0, 0x14(r3)
.L_8018B6B8:
/* 8018B6B8 001885F8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8018B6BC 001885FC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8018B6C0 00188600  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8018B6C4 00188604  7C 08 03 A6 */	mtlr r0
/* 8018B6C8 00188608  38 21 00 70 */	addi r1, r1, 0x70
/* 8018B6CC 0018860C  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game15PikiNukareStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game15PikiNukareStateFPQ24Game4Piki, global
/* 8018B6D0 00188610  80 04 01 7C */	lwz r0, 0x17c(r4)
/* 8018B6D4 00188614  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 8018B6D8 00188618  90 04 01 7C */	stw r0, 0x17c(r4)
/* 8018B6DC 0018861C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PikiNukareStateFPQ24Game4Piki

.fn init__Q24Game13PikiDopeStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018B6E0 00188620  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018B6E4 00188624  7C 08 02 A6 */	mflr r0
/* 8018B6E8 00188628  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018B6EC 0018862C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018B6F0 00188630  7C BF 2B 79 */	or. r31, r5, r5
/* 8018B6F4 00188634  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018B6F8 00188638  7C 9E 23 78 */	mr r30, r4
/* 8018B6FC 0018863C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8018B700 00188640  7C 7D 1B 78 */	mr r29, r3
/* 8018B704 00188644  40 82 00 20 */	bne .L_8018B724
/* 8018B708 00188648  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 8018B70C 0018864C  3C A0 80 48 */	lis r5, lbl_8047ECDC@ha
/* 8018B710 00188650  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 8018B714 00188654  38 80 04 F6 */	li r4, 0x4f6
/* 8018B718 00188658  38 A5 EC DC */	addi r5, r5, lbl_8047ECDC@l
/* 8018B71C 0018865C  4C C6 31 82 */	crclr 6
/* 8018B720 00188660  4B E9 EF 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018B724:
/* 8018B724 00188664  80 1F 00 00 */	lwz r0, 0(r31)
/* 8018B728 00188668  B0 1D 00 18 */	sth r0, 0x18(r29)
/* 8018B72C 0018866C  4B F3 DE 75 */	bl rand
/* 8018B730 00188670  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8018B734 00188674  3C 60 43 30 */	lis r3, 0x4330
/* 8018B738 00188678  90 01 00 0C */	stw r0, 0xc(r1)
/* 8018B73C 0018867C  38 00 00 00 */	li r0, 0
/* 8018B740 00188680  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018B744 00188684  90 61 00 08 */	stw r3, 8(r1)
/* 8018B748 00188688  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 8018B74C 0018868C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8018B750 00188690  C0 22 AA 64 */	lfs f1, lbl_80518DC4@sda21(r2)
/* 8018B754 00188694  EC 60 18 28 */	fsubs f3, f0, f3
/* 8018B758 00188698  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018B75C 0018869C  EC 43 10 24 */	fdivs f2, f3, f2
/* 8018B760 001886A0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8018B764 001886A4  D0 3D 00 14 */	stfs f1, 0x14(r29)
/* 8018B768 001886A8  98 1D 00 10 */	stb r0, 0x10(r29)
/* 8018B76C 001886AC  D0 1E 01 E4 */	stfs f0, 0x1e4(r30)
/* 8018B770 001886B0  D0 1E 01 E8 */	stfs f0, 0x1e8(r30)
/* 8018B774 001886B4  D0 1E 01 EC */	stfs f0, 0x1ec(r30)
/* 8018B778 001886B8  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 8018B77C 001886BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018B780 001886C0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018B784 001886C4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8018B788 001886C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018B78C 001886CC  7C 08 03 A6 */	mtlr r0
/* 8018B790 001886D0  38 21 00 20 */	addi r1, r1, 0x20
/* 8018B794 001886D4  4E 80 00 20 */	blr 
.endfn init__Q24Game13PikiDopeStateFPQ24Game4PikiPQ24Game8StateArg

.fn onFlute__Q24Game13PikiDopeStateFPQ24Game4PikiPQ24Game4Navi, global
/* 8018B798 001886D8  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 8018B79C 001886DC  4E 80 00 20 */	blr 
.endfn onFlute__Q24Game13PikiDopeStateFPQ24Game4PikiPQ24Game4Navi

.fn exec__Q24Game13PikiDopeStateFPQ24Game4Piki, global
/* 8018B7A0 001886E0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8018B7A4 001886E4  7C 08 02 A6 */	mflr r0
/* 8018B7A8 001886E8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8018B7AC 001886EC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018B7B0 001886F0  7C 9F 23 78 */	mr r31, r4
/* 8018B7B4 001886F4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8018B7B8 001886F8  7C 7E 1B 78 */	mr r30, r3
/* 8018B7BC 001886FC  88 03 00 10 */	lbz r0, 0x10(r3)
/* 8018B7C0 00188700  28 00 00 00 */	cmplwi r0, 0
/* 8018B7C4 00188704  40 82 00 B0 */	bne .L_8018B874
/* 8018B7C8 00188708  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018B7CC 0018870C  C0 5E 00 14 */	lfs f2, 0x14(r30)
/* 8018B7D0 00188710  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018B7D4 00188714  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018B7D8 00188718  EC 22 08 28 */	fsubs f1, f2, f1
/* 8018B7DC 0018871C  D0 3E 00 14 */	stfs f1, 0x14(r30)
/* 8018B7E0 00188720  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8018B7E4 00188724  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018B7E8 00188728  4C 40 13 82 */	cror 2, 0, 2
/* 8018B7EC 0018872C  40 82 01 28 */	bne .L_8018B914
/* 8018B7F0 00188730  38 00 00 01 */	li r0, 1
/* 8018B7F4 00188734  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8018B7F8 00188738  4B F3 DD A9 */	bl rand
/* 8018B7FC 0018873C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018B800 00188740  3C 00 43 30 */	lis r0, 0x4330
/* 8018B804 00188744  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8018B808 00188748  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018B80C 0018874C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8018B810 00188750  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8018B814 00188754  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 8018B818 00188758  C0 02 AA 94 */	lfs f0, lbl_80518DF4@sda21(r2)
/* 8018B81C 0018875C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018B820 00188760  EC 22 08 24 */	fdivs f1, f2, f1
/* 8018B824 00188764  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018B828 00188768  40 81 00 10 */	ble .L_8018B838
/* 8018B82C 0018876C  38 00 00 12 */	li r0, 0x12
/* 8018B830 00188770  B0 1E 00 1A */	sth r0, 0x1a(r30)
/* 8018B834 00188774  48 00 00 0C */	b .L_8018B840
.L_8018B838:
/* 8018B838 00188778  38 00 00 12 */	li r0, 0x12
/* 8018B83C 0018877C  B0 1E 00 1A */	sth r0, 0x1a(r30)
.L_8018B840:
/* 8018B840 00188780  28 1F 00 00 */	cmplwi r31, 0
/* 8018B844 00188784  7F E6 FB 78 */	mr r6, r31
/* 8018B848 00188788  41 82 00 08 */	beq .L_8018B850
/* 8018B84C 0018878C  38 DF 01 78 */	addi r6, r31, 0x178
.L_8018B850:
/* 8018B850 00188790  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018B854 00188794  7F E3 FB 78 */	mr r3, r31
/* 8018B858 00188798  A8 9E 00 1A */	lha r4, 0x1a(r30)
/* 8018B85C 0018879C  38 E0 00 00 */	li r7, 0
/* 8018B860 001887A0  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018B864 001887A4  7C 85 23 78 */	mr r5, r4
/* 8018B868 001887A8  7D 89 03 A6 */	mtctr r12
/* 8018B86C 001887AC  4E 80 04 21 */	bctrl 
/* 8018B870 001887B0  48 00 00 A4 */	b .L_8018B914
.L_8018B874:
/* 8018B874 001887B4  A8 9E 00 1A */	lha r4, 0x1a(r30)
/* 8018B878 001887B8  7F E3 FB 78 */	mr r3, r31
/* 8018B87C 001887BC  4B FB 16 B1 */	bl assertMotion__Q24Game8FakePikiFi
/* 8018B880 001887C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018B884 001887C4  40 82 00 90 */	bne .L_8018B914
/* 8018B888 001887C8  7F E3 FB 78 */	mr r3, r31
/* 8018B88C 001887CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018B890 001887D0  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8018B894 001887D4  7D 89 03 A6 */	mtctr r12
/* 8018B898 001887D8  4E 80 04 21 */	bctrl 
/* 8018B89C 001887DC  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 8018B8A0 001887E0  28 00 00 00 */	cmplwi r0, 0
/* 8018B8A4 001887E4  41 82 00 50 */	beq .L_8018B8F4
/* 8018B8A8 001887E8  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8018B8AC 001887EC  3C A0 80 4B */	lis r5, __vt__Q26PikiAI9ActionArg@ha
/* 8018B8B0 001887F0  3C 80 80 4B */	lis r4, __vt__Q26PikiAI17CreatureActionArg@ha
/* 8018B8B4 001887F4  3C 60 80 4B */	lis r3, __vt__Q26PikiAI19ActFormationInitArg@ha
/* 8018B8B8 001887F8  80 FF 02 C4 */	lwz r7, 0x2c4(r31)
/* 8018B8BC 001887FC  38 00 00 00 */	li r0, 0
/* 8018B8C0 00188800  38 A5 05 30 */	addi r5, r5, __vt__Q26PikiAI9ActionArg@l
/* 8018B8C4 00188804  38 C4 05 24 */	addi r6, r4, __vt__Q26PikiAI17CreatureActionArg@l
/* 8018B8C8 00188808  90 A1 00 08 */	stw r5, 8(r1)
/* 8018B8CC 0018880C  38 63 0D 44 */	addi r3, r3, __vt__Q26PikiAI19ActFormationInitArg@l
/* 8018B8D0 00188810  38 A1 00 08 */	addi r5, r1, 8
/* 8018B8D4 00188814  38 80 00 00 */	li r4, 0
/* 8018B8D8 00188818  90 C1 00 08 */	stw r6, 8(r1)
/* 8018B8DC 0018881C  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8018B8E0 00188820  90 61 00 08 */	stw r3, 8(r1)
/* 8018B8E4 00188824  98 01 00 10 */	stb r0, 0x10(r1)
/* 8018B8E8 00188828  98 01 00 11 */	stb r0, 0x11(r1)
/* 8018B8EC 0018882C  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8018B8F0 00188830  48 00 B6 A5 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_8018B8F4:
/* 8018B8F4 00188834  7F C3 F3 78 */	mr r3, r30
/* 8018B8F8 00188838  7F E4 FB 78 */	mr r4, r31
/* 8018B8FC 0018883C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018B900 00188840  38 A0 00 00 */	li r5, 0
/* 8018B904 00188844  38 C0 00 00 */	li r6, 0
/* 8018B908 00188848  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018B90C 0018884C  7D 89 03 A6 */	mtctr r12
/* 8018B910 00188850  4E 80 04 21 */	bctrl 
.L_8018B914:
/* 8018B914 00188854  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8018B918 00188858  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8018B91C 0018885C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8018B920 00188860  7C 08 03 A6 */	mtlr r0
/* 8018B924 00188864  38 21 00 30 */	addi r1, r1, 0x30
/* 8018B928 00188868  4E 80 00 20 */	blr 
.endfn exec__Q24Game13PikiDopeStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game13PikiDopeStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 8018B92C 0018886C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018B930 00188870  7C 08 02 A6 */	mflr r0
/* 8018B934 00188874  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018B938 00188878  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8018B93C 0018887C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018B940 00188880  7C 9F 23 78 */	mr r31, r4
/* 8018B944 00188884  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8018B948 00188888  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018B94C 0018888C  7C 7E 1B 78 */	mr r30, r3
/* 8018B950 00188890  41 82 00 24 */	beq .L_8018B974
/* 8018B954 00188894  40 80 00 98 */	bge .L_8018B9EC
/* 8018B958 00188898  2C 00 00 02 */	cmpwi r0, 2
/* 8018B95C 0018889C  41 82 00 08 */	beq .L_8018B964
/* 8018B960 001888A0  48 00 00 8C */	b .L_8018B9EC
.L_8018B964:
/* 8018B964 001888A4  A8 9E 00 18 */	lha r4, 0x18(r30)
/* 8018B968 001888A8  7F E3 FB 78 */	mr r3, r31
/* 8018B96C 001888AC  4B FB E4 D9 */	bl startDope__Q24Game4PikiFi
/* 8018B970 001888B0  48 00 00 7C */	b .L_8018B9EC
.L_8018B974:
/* 8018B974 001888B4  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 8018B978 001888B8  28 00 00 00 */	cmplwi r0, 0
/* 8018B97C 001888BC  41 82 00 50 */	beq .L_8018B9CC
/* 8018B980 001888C0  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8018B984 001888C4  3C A0 80 4B */	lis r5, __vt__Q26PikiAI9ActionArg@ha
/* 8018B988 001888C8  3C 80 80 4B */	lis r4, __vt__Q26PikiAI17CreatureActionArg@ha
/* 8018B98C 001888CC  3C 60 80 4B */	lis r3, __vt__Q26PikiAI19ActFormationInitArg@ha
/* 8018B990 001888D0  80 FF 02 C4 */	lwz r7, 0x2c4(r31)
/* 8018B994 001888D4  38 00 00 00 */	li r0, 0
/* 8018B998 001888D8  38 A5 05 30 */	addi r5, r5, __vt__Q26PikiAI9ActionArg@l
/* 8018B99C 001888DC  38 C4 05 24 */	addi r6, r4, __vt__Q26PikiAI17CreatureActionArg@l
/* 8018B9A0 001888E0  90 A1 00 08 */	stw r5, 8(r1)
/* 8018B9A4 001888E4  38 63 0D 44 */	addi r3, r3, __vt__Q26PikiAI19ActFormationInitArg@l
/* 8018B9A8 001888E8  38 A1 00 08 */	addi r5, r1, 8
/* 8018B9AC 001888EC  38 80 00 00 */	li r4, 0
/* 8018B9B0 001888F0  90 C1 00 08 */	stw r6, 8(r1)
/* 8018B9B4 001888F4  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8018B9B8 001888F8  90 61 00 08 */	stw r3, 8(r1)
/* 8018B9BC 001888FC  98 01 00 10 */	stb r0, 0x10(r1)
/* 8018B9C0 00188900  98 01 00 11 */	stb r0, 0x11(r1)
/* 8018B9C4 00188904  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8018B9C8 00188908  48 00 B5 CD */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_8018B9CC:
/* 8018B9CC 0018890C  7F C3 F3 78 */	mr r3, r30
/* 8018B9D0 00188910  7F E4 FB 78 */	mr r4, r31
/* 8018B9D4 00188914  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018B9D8 00188918  38 A0 00 00 */	li r5, 0
/* 8018B9DC 0018891C  38 C0 00 00 */	li r6, 0
/* 8018B9E0 00188920  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018B9E4 00188924  7D 89 03 A6 */	mtctr r12
/* 8018B9E8 00188928  4E 80 04 21 */	bctrl 
.L_8018B9EC:
/* 8018B9EC 0018892C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018B9F0 00188930  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018B9F4 00188934  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018B9F8 00188938  7C 08 03 A6 */	mtlr r0
/* 8018B9FC 0018893C  38 21 00 20 */	addi r1, r1, 0x20
/* 8018BA00 00188940  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game13PikiDopeStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game13PikiDopeStateFPQ24Game4Piki, global
/* 8018BA04 00188944  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13PikiDopeStateFPQ24Game4Piki

.fn soft_transittable__Q24Game14PikiPanicStateFi, global
/* 8018BA08 00188948  2C 04 00 08 */	cmpwi r4, 8
/* 8018BA0C 0018894C  38 60 00 00 */	li r3, 0
/* 8018BA10 00188950  4D 82 00 20 */	beqlr 
/* 8018BA14 00188954  2C 04 00 15 */	cmpwi r4, 0x15
/* 8018BA18 00188958  4D 82 00 20 */	beqlr 
/* 8018BA1C 0018895C  2C 04 00 17 */	cmpwi r4, 0x17
/* 8018BA20 00188960  4D 82 00 20 */	beqlr 
/* 8018BA24 00188964  38 60 00 01 */	li r3, 1
/* 8018BA28 00188968  4E 80 00 20 */	blr 
.endfn soft_transittable__Q24Game14PikiPanicStateFi

.fn transittable__Q24Game14PikiPanicStateFi, global
/* 8018BA2C 0018896C  A0 03 00 24 */	lhz r0, 0x24(r3)
/* 8018BA30 00188970  28 00 00 03 */	cmplwi r0, 3
/* 8018BA34 00188974  40 82 00 14 */	bne .L_8018BA48
/* 8018BA38 00188978  2C 04 00 15 */	cmpwi r4, 0x15
/* 8018BA3C 0018897C  41 82 00 0C */	beq .L_8018BA48
/* 8018BA40 00188980  38 60 00 01 */	li r3, 1
/* 8018BA44 00188984  4E 80 00 20 */	blr 
.L_8018BA48:
/* 8018BA48 00188988  2C 04 00 18 */	cmpwi r4, 0x18
/* 8018BA4C 0018898C  41 82 00 34 */	beq .L_8018BA80
/* 8018BA50 00188990  38 04 FF F6 */	addi r0, r4, -10
/* 8018BA54 00188994  28 00 00 01 */	cmplwi r0, 1
/* 8018BA58 00188998  40 81 00 28 */	ble .L_8018BA80
/* 8018BA5C 0018899C  38 04 FF EC */	addi r0, r4, -20
/* 8018BA60 001889A0  28 00 00 02 */	cmplwi r0, 2
/* 8018BA64 001889A4  40 81 00 1C */	ble .L_8018BA80
/* 8018BA68 001889A8  2C 04 00 1A */	cmpwi r4, 0x1a
/* 8018BA6C 001889AC  41 82 00 14 */	beq .L_8018BA80
/* 8018BA70 001889B0  2C 04 00 04 */	cmpwi r4, 4
/* 8018BA74 001889B4  41 82 00 0C */	beq .L_8018BA80
/* 8018BA78 001889B8  2C 04 00 06 */	cmpwi r4, 6
/* 8018BA7C 001889BC  40 82 00 0C */	bne .L_8018BA88
.L_8018BA80:
/* 8018BA80 001889C0  38 60 00 01 */	li r3, 1
/* 8018BA84 001889C4  4E 80 00 20 */	blr 
.L_8018BA88:
/* 8018BA88 001889C8  88 63 00 20 */	lbz r3, 0x20(r3)
/* 8018BA8C 001889CC  7C 03 00 D0 */	neg r0, r3
/* 8018BA90 001889D0  7C 00 1B 78 */	or r0, r0, r3
/* 8018BA94 001889D4  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8018BA98 001889D8  4E 80 00 20 */	blr 
.endfn transittable__Q24Game14PikiPanicStateFi

.fn init__Q24Game14PikiPanicStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018BA9C 001889DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018BAA0 001889E0  7C 08 02 A6 */	mflr r0
/* 8018BAA4 001889E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018BAA8 001889E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018BAAC 001889EC  7C 9F 23 78 */	mr r31, r4
/* 8018BAB0 001889F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018BAB4 001889F4  7C 7E 1B 78 */	mr r30, r3
/* 8018BAB8 001889F8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8018BABC 001889FC  7C BD 2B 79 */	or. r29, r5, r5
/* 8018BAC0 00188A00  40 82 00 20 */	bne .L_8018BAE0
/* 8018BAC4 00188A04  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 8018BAC8 00188A08  3C A0 80 48 */	lis r5, lbl_8047ECDC@ha
/* 8018BACC 00188A0C  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 8018BAD0 00188A10  38 80 05 77 */	li r4, 0x577
/* 8018BAD4 00188A14  38 A5 EC DC */	addi r5, r5, lbl_8047ECDC@l
/* 8018BAD8 00188A18  4C C6 31 82 */	crclr 6
/* 8018BADC 00188A1C  4B E9 EB 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018BAE0:
/* 8018BAE0 00188A20  A0 9D 00 00 */	lhz r4, 0(r29)
/* 8018BAE4 00188A24  38 A0 00 00 */	li r5, 0
/* 8018BAE8 00188A28  38 00 00 01 */	li r0, 1
/* 8018BAEC 00188A2C  7F E3 FB 78 */	mr r3, r31
/* 8018BAF0 00188A30  B0 9E 00 24 */	sth r4, 0x24(r30)
/* 8018BAF4 00188A34  38 80 00 01 */	li r4, 1
/* 8018BAF8 00188A38  98 BE 00 20 */	stb r5, 0x20(r30)
/* 8018BAFC 00188A3C  98 1E 00 21 */	stb r0, 0x21(r30)
/* 8018BB00 00188A40  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018BB04 00188A44  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 8018BB08 00188A48  7D 89 03 A6 */	mtctr r12
/* 8018BB0C 00188A4C  4E 80 04 21 */	bctrl 
/* 8018BB10 00188A50  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8018BB14 00188A54  C0 03 0C A0 */	lfs f0, 0xca0(r3)
/* 8018BB18 00188A58  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8018BB1C 00188A5C  4B F3 DA 85 */	bl rand
/* 8018BB20 00188A60  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018BB24 00188A64  3C 00 43 30 */	lis r0, 0x4330
/* 8018BB28 00188A68  90 61 00 0C */	stw r3, 0xc(r1)
/* 8018BB2C 00188A6C  7F E3 FB 78 */	mr r3, r31
/* 8018BB30 00188A70  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018BB34 00188A74  90 01 00 08 */	stw r0, 8(r1)
/* 8018BB38 00188A78  C0 02 AA 68 */	lfs f0, lbl_80518DC8@sda21(r2)
/* 8018BB3C 00188A7C  C8 21 00 08 */	lfd f1, 8(r1)
/* 8018BB40 00188A80  C0 42 AA CC */	lfs f2, lbl_80518E2C@sda21(r2)
/* 8018BB44 00188A84  EC 81 18 28 */	fsubs f4, f1, f3
/* 8018BB48 00188A88  C0 22 AA 84 */	lfs f1, lbl_80518DE4@sda21(r2)
/* 8018BB4C 00188A8C  C0 7E 00 10 */	lfs f3, 0x10(r30)
/* 8018BB50 00188A90  EC 04 00 24 */	fdivs f0, f4, f0
/* 8018BB54 00188A94  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8018BB58 00188A98  EC 03 00 32 */	fmuls f0, f3, f0
/* 8018BB5C 00188A9C  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8018BB60 00188AA0  D0 5E 00 14 */	stfs f2, 0x14(r30)
/* 8018BB64 00188AA4  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8018BB68 00188AA8  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8018BB6C 00188AAC  D0 3E 00 1C */	stfs f1, 0x1c(r30)
/* 8018BB70 00188AB0  48 01 38 B5 */	bl endStick__Q24Game8CreatureFv
/* 8018BB74 00188AB4  A0 1E 00 24 */	lhz r0, 0x24(r30)
/* 8018BB78 00188AB8  2C 00 00 02 */	cmpwi r0, 2
/* 8018BB7C 00188ABC  41 82 00 64 */	beq .L_8018BBE0
/* 8018BB80 00188AC0  40 80 00 14 */	bge .L_8018BB94
/* 8018BB84 00188AC4  2C 00 00 00 */	cmpwi r0, 0
/* 8018BB88 00188AC8  41 82 00 B0 */	beq .L_8018BC38
/* 8018BB8C 00188ACC  40 80 00 14 */	bge .L_8018BBA0
/* 8018BB90 00188AD0  48 00 01 24 */	b .L_8018BCB4
.L_8018BB94:
/* 8018BB94 00188AD4  2C 00 00 05 */	cmpwi r0, 5
/* 8018BB98 00188AD8  40 80 01 1C */	bge .L_8018BCB4
/* 8018BB9C 00188ADC  48 00 00 DC */	b .L_8018BC78
.L_8018BBA0:
/* 8018BBA0 00188AE0  80 7F 02 58 */	lwz r3, 0x258(r31)
/* 8018BBA4 00188AE4  80 03 00 00 */	lwz r0, 0(r3)
/* 8018BBA8 00188AE8  60 00 00 10 */	ori r0, r0, 0x10
/* 8018BBAC 00188AEC  90 03 00 00 */	stw r0, 0(r3)
/* 8018BBB0 00188AF0  80 83 00 14 */	lwz r4, 0x14(r3)
/* 8018BBB4 00188AF4  48 22 D1 21 */	bl "createWater___Q23efx9TPkEffectFP10Vector3<f>"
/* 8018BBB8 00188AF8  7F E3 FB 78 */	mr r3, r31
/* 8018BBBC 00188AFC  38 80 00 1E */	li r4, 0x1e
/* 8018BBC0 00188B00  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018BBC4 00188B04  38 A0 00 1E */	li r5, 0x1e
/* 8018BBC8 00188B08  38 C0 00 00 */	li r6, 0
/* 8018BBCC 00188B0C  38 E0 00 00 */	li r7, 0
/* 8018BBD0 00188B10  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018BBD4 00188B14  7D 89 03 A6 */	mtctr r12
/* 8018BBD8 00188B18  4E 80 04 21 */	bctrl 
/* 8018BBDC 00188B1C  48 00 00 D8 */	b .L_8018BCB4
.L_8018BBE0:
/* 8018BBE0 00188B20  80 7F 02 58 */	lwz r3, 0x258(r31)
/* 8018BBE4 00188B24  80 03 00 00 */	lwz r0, 0(r3)
/* 8018BBE8 00188B28  60 00 00 08 */	ori r0, r0, 8
/* 8018BBEC 00188B2C  90 03 00 00 */	stw r0, 0(r3)
/* 8018BBF0 00188B30  80 83 00 0C */	lwz r4, 0xc(r3)
/* 8018BBF4 00188B34  48 22 CF 3D */	bl "createChudoku___Q23efx9TPkEffectFP10Vector3<f>"
/* 8018BBF8 00188B38  7F E3 FB 78 */	mr r3, r31
/* 8018BBFC 00188B3C  38 80 00 3D */	li r4, 0x3d
/* 8018BC00 00188B40  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018BC04 00188B44  38 A0 00 3D */	li r5, 0x3d
/* 8018BC08 00188B48  38 C0 00 00 */	li r6, 0
/* 8018BC0C 00188B4C  38 E0 00 00 */	li r7, 0
/* 8018BC10 00188B50  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018BC14 00188B54  7D 89 03 A6 */	mtctr r12
/* 8018BC18 00188B58  4E 80 04 21 */	bctrl 
/* 8018BC1C 00188B5C  7F E3 FB 78 */	mr r3, r31
/* 8018BC20 00188B60  38 80 00 00 */	li r4, 0
/* 8018BC24 00188B64  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018BC28 00188B68  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 8018BC2C 00188B6C  7D 89 03 A6 */	mtctr r12
/* 8018BC30 00188B70  4E 80 04 21 */	bctrl 
/* 8018BC34 00188B74  48 00 00 80 */	b .L_8018BCB4
.L_8018BC38:
/* 8018BC38 00188B78  7F E3 FB 78 */	mr r3, r31
/* 8018BC3C 00188B7C  38 80 00 1E */	li r4, 0x1e
/* 8018BC40 00188B80  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018BC44 00188B84  38 A0 00 1E */	li r5, 0x1e
/* 8018BC48 00188B88  38 C0 00 00 */	li r6, 0
/* 8018BC4C 00188B8C  38 E0 00 00 */	li r7, 0
/* 8018BC50 00188B90  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018BC54 00188B94  7D 89 03 A6 */	mtctr r12
/* 8018BC58 00188B98  4E 80 04 21 */	bctrl 
/* 8018BC5C 00188B9C  80 7F 02 58 */	lwz r3, 0x258(r31)
/* 8018BC60 00188BA0  80 03 00 00 */	lwz r0, 0(r3)
/* 8018BC64 00188BA4  60 00 00 04 */	ori r0, r0, 4
/* 8018BC68 00188BA8  90 03 00 00 */	stw r0, 0(r3)
/* 8018BC6C 00188BAC  80 83 00 0C */	lwz r4, 0xc(r3)
/* 8018BC70 00188BB0  48 22 CE 01 */	bl "createMoe___Q23efx9TPkEffectFP10Vector3<f>"
/* 8018BC74 00188BB4  48 00 00 40 */	b .L_8018BCB4
.L_8018BC78:
/* 8018BC78 00188BB8  38 00 00 00 */	li r0, 0
/* 8018BC7C 00188BBC  98 1E 00 22 */	stb r0, 0x22(r30)
/* 8018BC80 00188BC0  4B F3 D9 21 */	bl rand
/* 8018BC84 00188BC4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018BC88 00188BC8  3C 00 43 30 */	lis r0, 0x4330
/* 8018BC8C 00188BCC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8018BC90 00188BD0  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018BC94 00188BD4  90 01 00 08 */	stw r0, 8(r1)
/* 8018BC98 00188BD8  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8018BC9C 00188BDC  C8 41 00 08 */	lfd f2, 8(r1)
/* 8018BCA0 00188BE0  C0 02 AA 64 */	lfs f0, lbl_80518DC4@sda21(r2)
/* 8018BCA4 00188BE4  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018BCA8 00188BE8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8018BCAC 00188BEC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8018BCB0 00188BF0  D0 1E 00 14 */	stfs f0, 0x14(r30)
.L_8018BCB4:
/* 8018BCB4 00188BF4  A0 1E 00 24 */	lhz r0, 0x24(r30)
/* 8018BCB8 00188BF8  38 80 28 7A */	li r4, 0x287a
/* 8018BCBC 00188BFC  2C 00 00 01 */	cmpwi r0, 1
/* 8018BCC0 00188C00  41 82 00 18 */	beq .L_8018BCD8
/* 8018BCC4 00188C04  40 80 00 20 */	bge .L_8018BCE4
/* 8018BCC8 00188C08  2C 00 00 00 */	cmpwi r0, 0
/* 8018BCCC 00188C0C  40 80 00 14 */	bge .L_8018BCE0
/* 8018BCD0 00188C10  48 00 00 14 */	b .L_8018BCE4
/* 8018BCD4 00188C14  48 00 00 10 */	b .L_8018BCE4
.L_8018BCD8:
/* 8018BCD8 00188C18  38 80 28 4B */	li r4, 0x284b
/* 8018BCDC 00188C1C  48 00 00 08 */	b .L_8018BCE4
.L_8018BCE0:
/* 8018BCE0 00188C20  38 80 28 0C */	li r4, 0x280c
.L_8018BCE4:
/* 8018BCE4 00188C24  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8018BCE8 00188C28  38 A0 00 07 */	li r5, 7
/* 8018BCEC 00188C2C  38 C0 00 5A */	li r6, 0x5a
/* 8018BCF0 00188C30  38 E0 00 00 */	li r7, 0
/* 8018BCF4 00188C34  48 2D 6A F5 */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
/* 8018BCF8 00188C38  C0 02 AA D0 */	lfs f0, lbl_80518E30@sda21(r2)
/* 8018BCFC 00188C3C  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 8018BD00 00188C40  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018BD04 00188C44  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018BD08 00188C48  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018BD0C 00188C4C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8018BD10 00188C50  7C 08 03 A6 */	mtlr r0
/* 8018BD14 00188C54  38 21 00 20 */	addi r1, r1, 0x20
/* 8018BD18 00188C58  4E 80 00 20 */	blr 
.endfn init__Q24Game14PikiPanicStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game14PikiPanicStateFPQ24Game4Piki, global
/* 8018BD1C 00188C5C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8018BD20 00188C60  7C 08 02 A6 */	mflr r0
/* 8018BD24 00188C64  90 01 00 64 */	stw r0, 0x64(r1)
/* 8018BD28 00188C68  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8018BD2C 00188C6C  7C 9F 23 78 */	mr r31, r4
/* 8018BD30 00188C70  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8018BD34 00188C74  7C 7E 1B 78 */	mr r30, r3
/* 8018BD38 00188C78  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8018BD3C 00188C7C  A0 03 00 24 */	lhz r0, 0x24(r3)
/* 8018BD40 00188C80  28 00 00 03 */	cmplwi r0, 3
/* 8018BD44 00188C84  41 82 00 0C */	beq .L_8018BD50
/* 8018BD48 00188C88  28 00 00 04 */	cmplwi r0, 4
/* 8018BD4C 00188C8C  40 82 00 B0 */	bne .L_8018BDFC
.L_8018BD50:
/* 8018BD50 00188C90  C0 42 AA 80 */	lfs f2, lbl_80518DE0@sda21(r2)
/* 8018BD54 00188C94  D0 5F 01 E4 */	stfs f2, 0x1e4(r31)
/* 8018BD58 00188C98  D0 5F 01 E8 */	stfs f2, 0x1e8(r31)
/* 8018BD5C 00188C9C  D0 5F 01 EC */	stfs f2, 0x1ec(r31)
/* 8018BD60 00188CA0  88 1E 00 22 */	lbz r0, 0x22(r30)
/* 8018BD64 00188CA4  2C 00 00 01 */	cmpwi r0, 1
/* 8018BD68 00188CA8  41 82 00 74 */	beq .L_8018BDDC
/* 8018BD6C 00188CAC  40 80 01 CC */	bge .L_8018BF38
/* 8018BD70 00188CB0  2C 00 00 00 */	cmpwi r0, 0
/* 8018BD74 00188CB4  40 80 00 08 */	bge .L_8018BD7C
/* 8018BD78 00188CB8  48 00 01 C0 */	b .L_8018BF38
.L_8018BD7C:
/* 8018BD7C 00188CBC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018BD80 00188CC0  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8018BD84 00188CC4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8018BD88 00188CC8  EC 01 00 28 */	fsubs f0, f1, f0
/* 8018BD8C 00188CCC  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8018BD90 00188CD0  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8018BD94 00188CD4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8018BD98 00188CD8  4C 40 13 82 */	cror 2, 0, 2
/* 8018BD9C 00188CDC  40 82 01 C4 */	bne .L_8018BF60
/* 8018BDA0 00188CE0  38 00 00 01 */	li r0, 1
/* 8018BDA4 00188CE4  28 1F 00 00 */	cmplwi r31, 0
/* 8018BDA8 00188CE8  98 1E 00 22 */	stb r0, 0x22(r30)
/* 8018BDAC 00188CEC  7F E6 FB 78 */	mr r6, r31
/* 8018BDB0 00188CF0  41 82 00 08 */	beq .L_8018BDB8
/* 8018BDB4 00188CF4  38 DF 01 78 */	addi r6, r31, 0x178
.L_8018BDB8:
/* 8018BDB8 00188CF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018BDBC 00188CFC  7F E3 FB 78 */	mr r3, r31
/* 8018BDC0 00188D00  38 80 00 20 */	li r4, 0x20
/* 8018BDC4 00188D04  38 A0 00 20 */	li r5, 0x20
/* 8018BDC8 00188D08  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018BDCC 00188D0C  38 E0 00 00 */	li r7, 0
/* 8018BDD0 00188D10  7D 89 03 A6 */	mtctr r12
/* 8018BDD4 00188D14  4E 80 04 21 */	bctrl 
/* 8018BDD8 00188D18  48 00 01 88 */	b .L_8018BF60
.L_8018BDDC:
/* 8018BDDC 00188D1C  7F E3 FB 78 */	mr r3, r31
/* 8018BDE0 00188D20  38 80 00 20 */	li r4, 0x20
/* 8018BDE4 00188D24  4B FB 11 49 */	bl assertMotion__Q24Game8FakePikiFi
/* 8018BDE8 00188D28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018BDEC 00188D2C  40 82 01 74 */	bne .L_8018BF60
/* 8018BDF0 00188D30  38 00 00 02 */	li r0, 2
/* 8018BDF4 00188D34  98 1E 00 22 */	stb r0, 0x22(r30)
/* 8018BDF8 00188D38  48 00 01 68 */	b .L_8018BF60
.L_8018BDFC:
/* 8018BDFC 00188D3C  28 00 00 00 */	cmplwi r0, 0
/* 8018BE00 00188D40  3B A0 00 00 */	li r29, 0
/* 8018BE04 00188D44  40 82 00 0C */	bne .L_8018BE10
/* 8018BE08 00188D48  3B A0 00 2F */	li r29, 0x2f
/* 8018BE0C 00188D4C  48 00 00 20 */	b .L_8018BE2C
.L_8018BE10:
/* 8018BE10 00188D50  28 00 00 01 */	cmplwi r0, 1
/* 8018BE14 00188D54  40 82 00 0C */	bne .L_8018BE20
/* 8018BE18 00188D58  3B A0 00 33 */	li r29, 0x33
/* 8018BE1C 00188D5C  48 00 00 10 */	b .L_8018BE2C
.L_8018BE20:
/* 8018BE20 00188D60  28 00 00 02 */	cmplwi r0, 2
/* 8018BE24 00188D64  40 82 00 08 */	bne .L_8018BE2C
/* 8018BE28 00188D68  3B A0 00 34 */	li r29, 0x34
.L_8018BE2C:
/* 8018BE2C 00188D6C  2C 1D 00 00 */	cmpwi r29, 0
/* 8018BE30 00188D70  41 82 01 08 */	beq .L_8018BF38
/* 8018BE34 00188D74  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8018BE38 00188D78  7F A4 EB 78 */	mr r4, r29
/* 8018BE3C 00188D7C  48 05 B5 A5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 8018BE40 00188D80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018BE44 00188D84  40 82 00 F4 */	bne .L_8018BF38
/* 8018BE48 00188D88  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8018BE4C 00188D8C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8018BE50 00188D90  2C 00 00 00 */	cmpwi r0, 0
/* 8018BE54 00188D94  40 82 00 E4 */	bne .L_8018BF38
/* 8018BE58 00188D98  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8018BE5C 00188D9C  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8018BE60 00188DA0  41 82 00 D8 */	beq .L_8018BF38
/* 8018BE64 00188DA4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018BE68 00188DA8  C0 5E 00 28 */	lfs f2, 0x28(r30)
/* 8018BE6C 00188DAC  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018BE70 00188DB0  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018BE74 00188DB4  EC 22 08 28 */	fsubs f1, f2, f1
/* 8018BE78 00188DB8  D0 3E 00 28 */	stfs f1, 0x28(r30)
/* 8018BE7C 00188DBC  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 8018BE80 00188DC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018BE84 00188DC4  4C 40 13 82 */	cror 2, 0, 2
/* 8018BE88 00188DC8  40 82 00 B0 */	bne .L_8018BF38
/* 8018BE8C 00188DCC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8018BE90 00188DD0  7F A4 EB 78 */	mr r4, r29
/* 8018BE94 00188DD4  48 05 B5 11 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 8018BE98 00188DD8  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018BE9C 00188DDC  3C 60 80 48 */	lis r3, lbl_8047ED08@ha
/* 8018BEA0 00188DE0  38 00 00 00 */	li r0, 0
/* 8018BEA4 00188DE4  7F E4 FB 78 */	mr r4, r31
/* 8018BEA8 00188DE8  38 A3 ED 08 */	addi r5, r3, lbl_8047ED08@l
/* 8018BEAC 00188DEC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8018BEB0 00188DF0  38 61 00 08 */	addi r3, r1, 8
/* 8018BEB4 00188DF4  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8018BEB8 00188DF8  90 01 00 20 */	stw r0, 0x20(r1)
/* 8018BEBC 00188DFC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8018BEC0 00188E00  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8018BEC4 00188E04  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8018BEC8 00188E08  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8018BECC 00188E0C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8018BED0 00188E10  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018BED4 00188E14  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8018BED8 00188E18  90 01 00 40 */	stw r0, 0x40(r1)
/* 8018BEDC 00188E1C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8018BEE0 00188E20  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018BEE4 00188E24  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018BEE8 00188E28  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018BEEC 00188E2C  7D 89 03 A6 */	mtctr r12
/* 8018BEF0 00188E30  4E 80 04 21 */	bctrl 
/* 8018BEF4 00188E34  C0 41 00 08 */	lfs f2, 8(r1)
/* 8018BEF8 00188E38  7F E3 FB 78 */	mr r3, r31
/* 8018BEFC 00188E3C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8018BF00 00188E40  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018BF04 00188E44  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8018BF08 00188E48  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8018BF0C 00188E4C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8018BF10 00188E50  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018BF14 00188E54  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8018BF18 00188E58  7D 89 03 A6 */	mtctr r12
/* 8018BF1C 00188E5C  4E 80 04 21 */	bctrl 
/* 8018BF20 00188E60  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8018BF24 00188E64  38 81 00 14 */	addi r4, r1, 0x14
/* 8018BF28 00188E68  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8018BF2C 00188E6C  93 E3 01 94 */	stw r31, 0x194(r3)
/* 8018BF30 00188E70  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8018BF34 00188E74  48 2A 0A 9D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_8018BF38:
/* 8018BF38 00188E78  A0 1E 00 24 */	lhz r0, 0x24(r30)
/* 8018BF3C 00188E7C  28 00 00 02 */	cmplwi r0, 2
/* 8018BF40 00188E80  40 82 00 14 */	bne .L_8018BF54
/* 8018BF44 00188E84  7F C3 F3 78 */	mr r3, r30
/* 8018BF48 00188E88  7F E4 FB 78 */	mr r4, r31
/* 8018BF4C 00188E8C  48 00 03 35 */	bl panicLobster__Q24Game14PikiPanicStateFPQ24Game4Piki
/* 8018BF50 00188E90  48 00 00 10 */	b .L_8018BF60
.L_8018BF54:
/* 8018BF54 00188E94  7F C3 F3 78 */	mr r3, r30
/* 8018BF58 00188E98  7F E4 FB 78 */	mr r4, r31
/* 8018BF5C 00188E9C  48 00 00 69 */	bl panicRun__Q24Game14PikiPanicStateFPQ24Game4Piki
.L_8018BF60:
/* 8018BF60 00188EA0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8018BF64 00188EA4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8018BF68 00188EA8  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8018BF6C 00188EAC  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8018BF70 00188EB0  7C 08 03 A6 */	mtlr r0
/* 8018BF74 00188EB4  38 21 00 60 */	addi r1, r1, 0x60
/* 8018BF78 00188EB8  4E 80 00 20 */	blr 
.endfn exec__Q24Game14PikiPanicStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game14PikiPanicStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 8018BF7C 00188EBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018BF80 00188EC0  7C 08 02 A6 */	mflr r0
/* 8018BF84 00188EC4  38 A0 00 1E */	li r5, 0x1e
/* 8018BF88 00188EC8  38 C0 00 00 */	li r6, 0
/* 8018BF8C 00188ECC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018BF90 00188ED0  38 00 00 02 */	li r0, 2
/* 8018BF94 00188ED4  38 E0 00 00 */	li r7, 0
/* 8018BF98 00188ED8  98 03 00 22 */	stb r0, 0x22(r3)
/* 8018BF9C 00188EDC  7C 83 23 78 */	mr r3, r4
/* 8018BFA0 00188EE0  38 80 00 1E */	li r4, 0x1e
/* 8018BFA4 00188EE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8018BFA8 00188EE8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018BFAC 00188EEC  7D 89 03 A6 */	mtctr r12
/* 8018BFB0 00188EF0  4E 80 04 21 */	bctrl 
/* 8018BFB4 00188EF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018BFB8 00188EF8  7C 08 03 A6 */	mtlr r0
/* 8018BFBC 00188EFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8018BFC0 00188F00  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game14PikiPanicStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn panicRun__Q24Game14PikiPanicStateFPQ24Game4Piki, global
/* 8018BFC4 00188F04  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8018BFC8 00188F08  7C 08 02 A6 */	mflr r0
/* 8018BFCC 00188F0C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018BFD0 00188F10  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018BFD4 00188F14  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8018BFD8 00188F18  7C 9F 23 78 */	mr r31, r4
/* 8018BFDC 00188F1C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8018BFE0 00188F20  7C 7E 1B 78 */	mr r30, r3
/* 8018BFE4 00188F24  C0 83 00 18 */	lfs f4, 0x18(r3)
/* 8018BFE8 00188F28  FC 20 20 90 */	fmr f1, f4
/* 8018BFEC 00188F2C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8018BFF0 00188F30  40 80 00 08 */	bge .L_8018BFF8
/* 8018BFF4 00188F34  FC 20 20 50 */	fneg f1, f4
.L_8018BFF8:
/* 8018BFF8 00188F38  C0 42 AA D4 */	lfs f2, lbl_80518E34@sda21(r2)
/* 8018BFFC 00188F3C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8018C000 00188F40  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018C004 00188F44  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8018C008 00188F48  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8018C00C 00188F4C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8018C010 00188F50  FC 00 08 1E */	fctiwz f0, f1
/* 8018C014 00188F54  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8018C018 00188F58  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8018C01C 00188F5C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8018C020 00188F60  7C 64 02 14 */	add r3, r4, r0
/* 8018C024 00188F64  C0 63 00 04 */	lfs f3, 4(r3)
/* 8018C028 00188F68  40 80 00 28 */	bge .L_8018C050
/* 8018C02C 00188F6C  C0 02 AA D8 */	lfs f0, lbl_80518E38@sda21(r2)
/* 8018C030 00188F70  EC 04 00 32 */	fmuls f0, f4, f0
/* 8018C034 00188F74  FC 00 00 1E */	fctiwz f0, f0
/* 8018C038 00188F78  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8018C03C 00188F7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018C040 00188F80  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8018C044 00188F84  7C 04 04 2E */	lfsx f0, r4, r0
/* 8018C048 00188F88  FC 20 00 50 */	fneg f1, f0
/* 8018C04C 00188F8C  48 00 00 1C */	b .L_8018C068
.L_8018C050:
/* 8018C050 00188F90  EC 04 00 B2 */	fmuls f0, f4, f2
/* 8018C054 00188F94  FC 00 00 1E */	fctiwz f0, f0
/* 8018C058 00188F98  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8018C05C 00188F9C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8018C060 00188FA0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8018C064 00188FA4  7C 24 04 2E */	lfsx f1, r4, r0
.L_8018C068:
/* 8018C068 00188FA8  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018C06C 00188FAC  7F E3 FB 78 */	mr r3, r31
/* 8018C070 00188FB0  D0 21 00 08 */	stfs f1, 8(r1)
/* 8018C074 00188FB4  38 81 00 08 */	addi r4, r1, 8
/* 8018C078 00188FB8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8018C07C 00188FBC  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8018C080 00188FC0  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8018C084 00188FC4  4B FB CF 95 */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 8018C088 00188FC8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018C08C 00188FCC  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 8018C090 00188FD0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8018C094 00188FD4  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018C098 00188FD8  EC 02 00 28 */	fsubs f0, f2, f0
/* 8018C09C 00188FDC  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8018C0A0 00188FE0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018C0A4 00188FE4  C0 5E 00 14 */	lfs f2, 0x14(r30)
/* 8018C0A8 00188FE8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8018C0AC 00188FEC  EC 02 00 28 */	fsubs f0, f2, f0
/* 8018C0B0 00188FF0  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8018C0B4 00188FF4  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 8018C0B8 00188FF8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8018C0BC 00188FFC  40 80 00 9C */	bge .L_8018C158
/* 8018C0C0 00189000  A0 1E 00 24 */	lhz r0, 0x24(r30)
/* 8018C0C4 00189004  28 00 00 03 */	cmplwi r0, 3
/* 8018C0C8 00189008  40 82 00 28 */	bne .L_8018C0F0
/* 8018C0CC 0018900C  7F C3 F3 78 */	mr r3, r30
/* 8018C0D0 00189010  7F E4 FB 78 */	mr r4, r31
/* 8018C0D4 00189014  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018C0D8 00189018  38 A0 00 00 */	li r5, 0
/* 8018C0DC 0018901C  38 C0 00 00 */	li r6, 0
/* 8018C0E0 00189020  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018C0E4 00189024  7D 89 03 A6 */	mtctr r12
/* 8018C0E8 00189028  4E 80 04 21 */	bctrl 
/* 8018C0EC 0018902C  48 00 01 7C */	b .L_8018C268
.L_8018C0F0:
/* 8018C0F0 00189030  2C 00 00 01 */	cmpwi r0, 1
/* 8018C0F4 00189034  41 82 00 2C */	beq .L_8018C120
/* 8018C0F8 00189038  40 80 00 10 */	bge .L_8018C108
/* 8018C0FC 0018903C  2C 00 00 00 */	cmpwi r0, 0
/* 8018C100 00189040  40 80 00 14 */	bge .L_8018C114
/* 8018C104 00189044  48 00 00 30 */	b .L_8018C134
.L_8018C108:
/* 8018C108 00189048  2C 00 00 03 */	cmpwi r0, 3
/* 8018C10C 0018904C  40 80 00 28 */	bge .L_8018C134
/* 8018C110 00189050  48 00 00 1C */	b .L_8018C12C
.L_8018C114:
/* 8018C114 00189054  38 60 00 02 */	li r3, 2
/* 8018C118 00189058  48 0A 46 01 */	bl inc__Q24Game8DeathMgrFi
/* 8018C11C 0018905C  48 00 00 18 */	b .L_8018C134
.L_8018C120:
/* 8018C120 00189060  38 60 00 03 */	li r3, 3
/* 8018C124 00189064  48 0A 45 F5 */	bl inc__Q24Game8DeathMgrFi
/* 8018C128 00189068  48 00 00 0C */	b .L_8018C134
.L_8018C12C:
/* 8018C12C 0018906C  38 60 00 06 */	li r3, 6
/* 8018C130 00189070  48 0A 45 E9 */	bl inc__Q24Game8DeathMgrFi
.L_8018C134:
/* 8018C134 00189074  7F C3 F3 78 */	mr r3, r30
/* 8018C138 00189078  7F E4 FB 78 */	mr r4, r31
/* 8018C13C 0018907C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018C140 00189080  38 A0 00 18 */	li r5, 0x18
/* 8018C144 00189084  38 C0 00 00 */	li r6, 0
/* 8018C148 00189088  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018C14C 0018908C  7D 89 03 A6 */	mtctr r12
/* 8018C150 00189090  4E 80 04 21 */	bctrl 
/* 8018C154 00189094  48 00 01 14 */	b .L_8018C268
.L_8018C158:
/* 8018C158 00189098  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8018C15C 0018909C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8018C160 001890A0  40 80 01 08 */	bge .L_8018C268
/* 8018C164 001890A4  A0 1E 00 24 */	lhz r0, 0x24(r30)
/* 8018C168 001890A8  38 80 28 7A */	li r4, 0x287a
/* 8018C16C 001890AC  2C 00 00 01 */	cmpwi r0, 1
/* 8018C170 001890B0  41 82 00 18 */	beq .L_8018C188
/* 8018C174 001890B4  40 80 00 20 */	bge .L_8018C194
/* 8018C178 001890B8  2C 00 00 00 */	cmpwi r0, 0
/* 8018C17C 001890BC  40 80 00 14 */	bge .L_8018C190
/* 8018C180 001890C0  48 00 00 14 */	b .L_8018C194
/* 8018C184 001890C4  48 00 00 10 */	b .L_8018C194
.L_8018C188:
/* 8018C188 001890C8  38 80 28 4B */	li r4, 0x284b
/* 8018C18C 001890CC  48 00 00 08 */	b .L_8018C194
.L_8018C190:
/* 8018C190 001890D0  38 80 28 0C */	li r4, 0x280c
.L_8018C194:
/* 8018C194 001890D4  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8018C198 001890D8  38 A0 00 07 */	li r5, 7
/* 8018C19C 001890DC  38 C0 00 5A */	li r6, 0x5a
/* 8018C1A0 001890E0  38 E0 00 00 */	li r7, 0
/* 8018C1A4 001890E4  48 2D 66 45 */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
/* 8018C1A8 001890E8  4B F3 D3 F9 */	bl rand
/* 8018C1AC 001890EC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018C1B0 001890F0  3C 00 43 30 */	lis r0, 0x4330
/* 8018C1B4 001890F4  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8018C1B8 001890F8  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018C1BC 001890FC  90 01 00 28 */	stw r0, 0x28(r1)
/* 8018C1C0 00189100  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8018C1C4 00189104  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 8018C1C8 00189108  C0 02 AA A4 */	lfs f0, lbl_80518E04@sda21(r2)
/* 8018C1CC 0018910C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018C1D0 00189110  EC 22 08 24 */	fdivs f1, f2, f1
/* 8018C1D4 00189114  EC 00 00 7A */	fmadds f0, f0, f1, f0
/* 8018C1D8 00189118  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8018C1DC 0018911C  4B F3 D3 C5 */	bl rand
/* 8018C1E0 00189120  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8018C1E4 00189124  3C 60 43 30 */	lis r3, 0x4330
/* 8018C1E8 00189128  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018C1EC 0018912C  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 8018C1F0 00189130  90 61 00 20 */	stw r3, 0x20(r1)
/* 8018C1F4 00189134  C8 22 AA 78 */	lfd f1, lbl_80518DD8@sda21(r2)
/* 8018C1F8 00189138  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8018C1FC 0018913C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8018C200 00189140  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 8018C204 00189144  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 8018C208 00189148  7C 00 1A 78 */	xor r0, r0, r3
/* 8018C20C 0018914C  EC 60 08 28 */	fsubs f3, f0, f1
/* 8018C210 00189150  7C 03 00 50 */	subf r0, r3, r0
/* 8018C214 00189154  C0 22 AA E8 */	lfs f1, lbl_80518E48@sda21(r2)
/* 8018C218 00189158  2C 00 00 01 */	cmpwi r0, 1
/* 8018C21C 0018915C  C0 02 AA E4 */	lfs f0, lbl_80518E44@sda21(r2)
/* 8018C220 00189160  EC 83 10 24 */	fdivs f4, f3, f2
/* 8018C224 00189164  C0 42 AA E0 */	lfs f2, lbl_80518E40@sda21(r2)
/* 8018C228 00189168  C0 62 AA DC */	lfs f3, lbl_80518E3C@sda21(r2)
/* 8018C22C 0018916C  EC 01 01 3A */	fmadds f0, f1, f4, f0
/* 8018C230 00189170  EC 02 00 32 */	fmuls f0, f2, f0
/* 8018C234 00189174  EC 23 00 32 */	fmuls f1, f3, f0
/* 8018C238 00189178  40 82 00 08 */	bne .L_8018C240
/* 8018C23C 0018917C  FC 20 08 50 */	fneg f1, f1
.L_8018C240:
/* 8018C240 00189180  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 8018C244 00189184  EC 00 08 2A */	fadds f0, f0, f1
/* 8018C248 00189188  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8018C24C 0018918C  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 8018C250 00189190  48 28 59 81 */	bl roundAng__Ff
/* 8018C254 00189194  D0 3E 00 18 */	stfs f1, 0x18(r30)
/* 8018C258 00189198  C0 02 AA EC */	lfs f0, lbl_80518E4C@sda21(r2)
/* 8018C25C 0018919C  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8018C260 001891A0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018C264 001891A4  D0 1E 00 1C */	stfs f0, 0x1c(r30)
.L_8018C268:
/* 8018C268 001891A8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8018C26C 001891AC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8018C270 001891B0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8018C274 001891B4  7C 08 03 A6 */	mtlr r0
/* 8018C278 001891B8  38 21 00 40 */	addi r1, r1, 0x40
/* 8018C27C 001891BC  4E 80 00 20 */	blr 
.endfn panicRun__Q24Game14PikiPanicStateFPQ24Game4Piki

.fn panicLobster__Q24Game14PikiPanicStateFPQ24Game4Piki, global
/* 8018C280 001891C0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8018C284 001891C4  7C 08 02 A6 */	mflr r0
/* 8018C288 001891C8  90 01 00 74 */	stw r0, 0x74(r1)
/* 8018C28C 001891CC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8018C290 001891D0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8018C294 001891D4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8018C298 001891D8  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8018C29C 001891DC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8018C2A0 001891E0  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8018C2A4 001891E4  7C 7E 1B 78 */	mr r30, r3
/* 8018C2A8 001891E8  7C 9F 23 78 */	mr r31, r4
/* 8018C2AC 001891EC  88 03 00 21 */	lbz r0, 0x21(r3)
/* 8018C2B0 001891F0  28 00 00 00 */	cmplwi r0, 0
/* 8018C2B4 001891F4  41 82 01 A4 */	beq .L_8018C458
/* 8018C2B8 001891F8  38 00 00 00 */	li r0, 0
/* 8018C2BC 001891FC  98 1E 00 21 */	stb r0, 0x21(r30)
/* 8018C2C0 00189200  C3 DF 01 FC */	lfs f30, 0x1fc(r31)
/* 8018C2C4 00189204  4B F3 D2 DD */	bl rand
/* 8018C2C8 00189208  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8018C2CC 0018920C  3C 60 43 30 */	lis r3, 0x4330
/* 8018C2D0 00189210  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018C2D4 00189214  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 8018C2D8 00189218  90 61 00 10 */	stw r3, 0x10(r1)
/* 8018C2DC 0018921C  C8 22 AA 78 */	lfd f1, lbl_80518DD8@sda21(r2)
/* 8018C2E0 00189220  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8018C2E4 00189224  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8018C2E8 00189228  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 8018C2EC 0018922C  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 8018C2F0 00189230  7C 00 1A 78 */	xor r0, r0, r3
/* 8018C2F4 00189234  EC 60 08 28 */	fsubs f3, f0, f1
/* 8018C2F8 00189238  7C 03 00 50 */	subf r0, r3, r0
/* 8018C2FC 0018923C  C0 22 AA E8 */	lfs f1, lbl_80518E48@sda21(r2)
/* 8018C300 00189240  2C 00 00 01 */	cmpwi r0, 1
/* 8018C304 00189244  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018C308 00189248  EC 83 10 24 */	fdivs f4, f3, f2
/* 8018C30C 0018924C  C0 42 AA E0 */	lfs f2, lbl_80518E40@sda21(r2)
/* 8018C310 00189250  C0 62 AA DC */	lfs f3, lbl_80518E3C@sda21(r2)
/* 8018C314 00189254  EC 01 01 3A */	fmadds f0, f1, f4, f0
/* 8018C318 00189258  EC 02 00 32 */	fmuls f0, f2, f0
/* 8018C31C 0018925C  EC 03 00 32 */	fmuls f0, f3, f0
/* 8018C320 00189260  40 82 00 08 */	bne .L_8018C328
/* 8018C324 00189264  FC 00 00 50 */	fneg f0, f0
.L_8018C328:
/* 8018C328 00189268  EF DE 00 2A */	fadds f30, f30, f0
/* 8018C32C 0018926C  FC 20 F0 90 */	fmr f1, f30
/* 8018C330 00189270  48 28 58 A1 */	bl roundAng__Ff
/* 8018C334 00189274  FF E0 08 90 */	fmr f31, f1
/* 8018C338 00189278  4B F3 D2 69 */	bl rand
/* 8018C33C 0018927C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018C340 00189280  3C 00 43 30 */	lis r0, 0x4330
/* 8018C344 00189284  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8018C348 00189288  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018C34C 0018928C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8018C350 00189290  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 8018C354 00189294  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8018C358 00189298  C0 22 AA F4 */	lfs f1, lbl_80518E54@sda21(r2)
/* 8018C35C 0018929C  EC 60 18 28 */	fsubs f3, f0, f3
/* 8018C360 001892A0  C0 02 AA F0 */	lfs f0, lbl_80518E50@sda21(r2)
/* 8018C364 001892A4  EC 43 10 24 */	fdivs f2, f3, f2
/* 8018C368 001892A8  EF C1 00 BA */	fmadds f30, f1, f2, f0
/* 8018C36C 001892AC  4B F3 D2 35 */	bl rand
/* 8018C370 001892B0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018C374 001892B4  3C 00 43 30 */	lis r0, 0x4330
/* 8018C378 001892B8  90 61 00 24 */	stw r3, 0x24(r1)
/* 8018C37C 001892BC  FC 80 F8 90 */	fmr f4, f31
/* 8018C380 001892C0  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018C384 001892C4  90 01 00 20 */	stw r0, 0x20(r1)
/* 8018C388 001892C8  C8 22 AA 78 */	lfd f1, lbl_80518DD8@sda21(r2)
/* 8018C38C 001892CC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8018C390 001892D0  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8018C394 001892D4  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 8018C398 001892D8  EC 60 08 28 */	fsubs f3, f0, f1
/* 8018C39C 001892DC  C0 22 AA A0 */	lfs f1, lbl_80518E00@sda21(r2)
/* 8018C3A0 001892E0  C0 02 AA F8 */	lfs f0, lbl_80518E58@sda21(r2)
/* 8018C3A4 001892E4  EC 43 10 24 */	fdivs f2, f3, f2
/* 8018C3A8 001892E8  EC 61 00 BA */	fmadds f3, f1, f2, f0
/* 8018C3AC 001892EC  40 80 00 08 */	bge .L_8018C3B4
/* 8018C3B0 001892F0  FC 80 F8 50 */	fneg f4, f31
.L_8018C3B4:
/* 8018C3B4 001892F4  C0 42 AA D4 */	lfs f2, lbl_80518E34@sda21(r2)
/* 8018C3B8 001892F8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8018C3BC 001892FC  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018C3C0 00189300  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8018C3C4 00189304  EC 24 00 B2 */	fmuls f1, f4, f2
/* 8018C3C8 00189308  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8018C3CC 0018930C  FC 00 08 1E */	fctiwz f0, f1
/* 8018C3D0 00189310  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8018C3D4 00189314  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8018C3D8 00189318  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8018C3DC 0018931C  7C 64 02 14 */	add r3, r4, r0
/* 8018C3E0 00189320  C0 03 00 04 */	lfs f0, 4(r3)
/* 8018C3E4 00189324  EC 3E 00 32 */	fmuls f1, f30, f0
/* 8018C3E8 00189328  40 80 00 28 */	bge .L_8018C410
/* 8018C3EC 0018932C  C0 02 AA D8 */	lfs f0, lbl_80518E38@sda21(r2)
/* 8018C3F0 00189330  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8018C3F4 00189334  FC 00 00 1E */	fctiwz f0, f0
/* 8018C3F8 00189338  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8018C3FC 0018933C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8018C400 00189340  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8018C404 00189344  7C 04 04 2E */	lfsx f0, r4, r0
/* 8018C408 00189348  FC 00 00 50 */	fneg f0, f0
/* 8018C40C 0018934C  48 00 00 1C */	b .L_8018C428
.L_8018C410:
/* 8018C410 00189350  EC 1F 00 B2 */	fmuls f0, f31, f2
/* 8018C414 00189354  FC 00 00 1E */	fctiwz f0, f0
/* 8018C418 00189358  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8018C41C 0018935C  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8018C420 00189360  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8018C424 00189364  7C 04 04 2E */	lfsx f0, r4, r0
.L_8018C428:
/* 8018C428 00189368  EC 1E 00 32 */	fmuls f0, f30, f0
/* 8018C42C 0018936C  D3 FF 01 FC */	stfs f31, 0x1fc(r31)
/* 8018C430 00189370  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8018C434 00189374  D0 7F 02 04 */	stfs f3, 0x204(r31)
/* 8018C438 00189378  D0 3F 02 08 */	stfs f1, 0x208(r31)
/* 8018C43C 0018937C  A0 1E 00 24 */	lhz r0, 0x24(r30)
/* 8018C440 00189380  28 00 00 02 */	cmplwi r0, 2
/* 8018C444 00189384  40 82 00 14 */	bne .L_8018C458
/* 8018C448 00189388  7F E3 FB 78 */	mr r3, r31
/* 8018C44C 0018938C  38 80 28 50 */	li r4, 0x2850
/* 8018C450 00189390  38 A0 00 01 */	li r5, 1
/* 8018C454 00189394  4B FB C4 79 */	bl startSound__Q24Game4PikiFUlb
.L_8018C458:
/* 8018C458 00189398  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018C45C 0018939C  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 8018C460 001893A0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018C464 001893A4  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018C468 001893A8  EC 22 08 28 */	fsubs f1, f2, f1
/* 8018C46C 001893AC  D0 3E 00 10 */	stfs f1, 0x10(r30)
/* 8018C470 001893B0  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 8018C474 001893B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018C478 001893B8  40 80 00 B4 */	bge .L_8018C52C
/* 8018C47C 001893BC  A0 1E 00 24 */	lhz r0, 0x24(r30)
/* 8018C480 001893C0  2C 00 00 01 */	cmpwi r0, 1
/* 8018C484 001893C4  41 82 00 2C */	beq .L_8018C4B0
/* 8018C488 001893C8  40 80 00 10 */	bge .L_8018C498
/* 8018C48C 001893CC  2C 00 00 00 */	cmpwi r0, 0
/* 8018C490 001893D0  40 80 00 14 */	bge .L_8018C4A4
/* 8018C494 001893D4  48 00 00 30 */	b .L_8018C4C4
.L_8018C498:
/* 8018C498 001893D8  2C 00 00 03 */	cmpwi r0, 3
/* 8018C49C 001893DC  40 80 00 28 */	bge .L_8018C4C4
/* 8018C4A0 001893E0  48 00 00 1C */	b .L_8018C4BC
.L_8018C4A4:
/* 8018C4A4 001893E4  38 60 00 02 */	li r3, 2
/* 8018C4A8 001893E8  48 0A 42 71 */	bl inc__Q24Game8DeathMgrFi
/* 8018C4AC 001893EC  48 00 00 18 */	b .L_8018C4C4
.L_8018C4B0:
/* 8018C4B0 001893F0  38 60 00 03 */	li r3, 3
/* 8018C4B4 001893F4  48 0A 42 65 */	bl inc__Q24Game8DeathMgrFi
/* 8018C4B8 001893F8  48 00 00 0C */	b .L_8018C4C4
.L_8018C4BC:
/* 8018C4BC 001893FC  38 60 00 06 */	li r3, 6
/* 8018C4C0 00189400  48 0A 42 59 */	bl inc__Q24Game8DeathMgrFi
.L_8018C4C4:
/* 8018C4C4 00189404  A0 1E 00 24 */	lhz r0, 0x24(r30)
/* 8018C4C8 00189408  28 00 00 02 */	cmplwi r0, 2
/* 8018C4CC 0018940C  40 82 00 40 */	bne .L_8018C50C
/* 8018C4D0 00189410  38 00 FF FF */	li r0, -1
/* 8018C4D4 00189414  38 A0 00 00 */	li r5, 0
/* 8018C4D8 00189418  90 01 00 08 */	stw r0, 8(r1)
/* 8018C4DC 0018941C  38 00 00 3E */	li r0, 0x3e
/* 8018C4E0 00189420  7F C3 F3 78 */	mr r3, r30
/* 8018C4E4 00189424  7F E4 FB 78 */	mr r4, r31
/* 8018C4E8 00189428  98 A1 00 0C */	stb r5, 0xc(r1)
/* 8018C4EC 0018942C  38 C1 00 08 */	addi r6, r1, 8
/* 8018C4F0 00189430  38 A0 00 18 */	li r5, 0x18
/* 8018C4F4 00189434  90 01 00 08 */	stw r0, 8(r1)
/* 8018C4F8 00189438  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018C4FC 0018943C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018C500 00189440  7D 89 03 A6 */	mtctr r12
/* 8018C504 00189444  4E 80 04 21 */	bctrl 
/* 8018C508 00189448  48 00 00 24 */	b .L_8018C52C
.L_8018C50C:
/* 8018C50C 0018944C  7F C3 F3 78 */	mr r3, r30
/* 8018C510 00189450  7F E4 FB 78 */	mr r4, r31
/* 8018C514 00189454  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018C518 00189458  38 A0 00 18 */	li r5, 0x18
/* 8018C51C 0018945C  38 C0 00 00 */	li r6, 0
/* 8018C520 00189460  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018C524 00189464  7D 89 03 A6 */	mtctr r12
/* 8018C528 00189468  4E 80 04 21 */	bctrl 
.L_8018C52C:
/* 8018C52C 0018946C  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8018C530 00189470  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8018C534 00189474  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8018C538 00189478  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8018C53C 0018947C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8018C540 00189480  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8018C544 00189484  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8018C548 00189488  7C 08 03 A6 */	mtlr r0
/* 8018C54C 0018948C  38 21 00 70 */	addi r1, r1, 0x70
/* 8018C550 00189490  4E 80 00 20 */	blr 
.endfn panicLobster__Q24Game14PikiPanicStateFPQ24Game4Piki

.fn cleanup__Q24Game14PikiPanicStateFPQ24Game4Piki, global
/* 8018C554 00189494  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018C558 00189498  7C 08 02 A6 */	mflr r0
/* 8018C55C 0018949C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018C560 001894A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018C564 001894A4  93 C1 00 08 */	stw r30, 8(r1)
/* 8018C568 001894A8  7C 9E 23 78 */	mr r30, r4
/* 8018C56C 001894AC  38 80 00 01 */	li r4, 1
/* 8018C570 001894B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018C574 001894B4  7F C3 F3 78 */	mr r3, r30
/* 8018C578 001894B8  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 8018C57C 001894BC  7D 89 03 A6 */	mtctr r12
/* 8018C580 001894C0  4E 80 04 21 */	bctrl 
/* 8018C584 001894C4  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 8018C588 001894C8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8018C58C 001894CC  2C 00 00 18 */	cmpwi r0, 0x18
/* 8018C590 001894D0  41 82 00 90 */	beq .L_8018C620
/* 8018C594 001894D4  83 FE 02 58 */	lwz r31, 0x258(r30)
/* 8018C598 001894D8  7F E3 FB 78 */	mr r3, r31
/* 8018C59C 001894DC  48 22 C5 51 */	bl killMoe___Q23efx9TPkEffectFv
/* 8018C5A0 001894E0  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018C5A4 001894E4  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 8018C5A8 001894E8  41 82 00 28 */	beq .L_8018C5D0
/* 8018C5AC 001894EC  54 60 07 B8 */	rlwinm r0, r3, 0, 0x1e, 0x1c
/* 8018C5B0 001894F0  7F E3 FB 78 */	mr r3, r31
/* 8018C5B4 001894F4  90 1F 00 00 */	stw r0, 0(r31)
/* 8018C5B8 001894F8  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8018C5BC 001894FC  48 22 C5 F9 */	bl "createMoeSmoke___Q23efx9TPkEffectFP10Vector3<f>"
/* 8018C5C0 00189500  38 00 00 3C */	li r0, 0x3c
/* 8018C5C4 00189504  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8018C5C8 00189508  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8018C5CC 0018950C  48 22 B0 05 */	bl "createSimpleChinka__3efxFR10Vector3<f>"
.L_8018C5D0:
/* 8018C5D0 00189510  83 FE 02 58 */	lwz r31, 0x258(r30)
/* 8018C5D4 00189514  7F E3 FB 78 */	mr r3, r31
/* 8018C5D8 00189518  48 22 C7 5D */	bl killWater___Q23efx9TPkEffectFv
/* 8018C5DC 0018951C  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018C5E0 00189520  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 8018C5E4 00189524  41 82 00 14 */	beq .L_8018C5F8
/* 8018C5E8 00189528  54 60 07 34 */	rlwinm r0, r3, 0, 0x1c, 0x1a
/* 8018C5EC 0018952C  90 1F 00 00 */	stw r0, 0(r31)
/* 8018C5F0 00189530  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8018C5F4 00189534  48 22 B2 45 */	bl "createSimpleWaterOff__3efxFR10Vector3<f>"
.L_8018C5F8:
/* 8018C5F8 00189538  83 FE 02 58 */	lwz r31, 0x258(r30)
/* 8018C5FC 0018953C  7F E3 FB 78 */	mr r3, r31
/* 8018C600 00189540  48 22 C5 91 */	bl killChudoku___Q23efx9TPkEffectFv
/* 8018C604 00189544  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018C608 00189548  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 8018C60C 0018954C  41 82 00 14 */	beq .L_8018C620
/* 8018C610 00189550  54 60 07 76 */	rlwinm r0, r3, 0, 0x1d, 0x1b
/* 8018C614 00189554  90 1F 00 00 */	stw r0, 0(r31)
/* 8018C618 00189558  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8018C61C 0018955C  48 22 B0 11 */	bl "createSimpleGedoku__3efxFR10Vector3<f>"
.L_8018C620:
/* 8018C620 00189560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018C624 00189564  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018C628 00189568  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018C62C 0018956C  7C 08 03 A6 */	mtlr r0
/* 8018C630 00189570  38 21 00 10 */	addi r1, r1, 0x10
/* 8018C634 00189574  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game14PikiPanicStateFPQ24Game4Piki

.fn bounceCallback__Q24Game14PikiPanicStateFPQ24Game4PikiPQ23Sys8Triangle, global
/* 8018C638 00189578  38 00 00 01 */	li r0, 1
/* 8018C63C 0018957C  98 03 00 21 */	stb r0, 0x21(r3)
/* 8018C640 00189580  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game14PikiPanicStateFPQ24Game4PikiPQ23Sys8Triangle

.fn onFlute__Q24Game14PikiPanicStateFPQ24Game4PikiPQ24Game4Navi, global
/* 8018C644 00189584  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018C648 00189588  7C 08 02 A6 */	mflr r0
/* 8018C64C 0018958C  38 A0 00 00 */	li r5, 0
/* 8018C650 00189590  38 C0 00 00 */	li r6, 0
/* 8018C654 00189594  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018C658 00189598  38 00 00 01 */	li r0, 1
/* 8018C65C 0018959C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018C660 001895A0  7C 9F 23 78 */	mr r31, r4
/* 8018C664 001895A4  93 C1 00 08 */	stw r30, 8(r1)
/* 8018C668 001895A8  7C 7E 1B 78 */	mr r30, r3
/* 8018C66C 001895AC  98 03 00 20 */	stb r0, 0x20(r3)
/* 8018C670 001895B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8018C674 001895B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018C678 001895B8  7D 89 03 A6 */	mtctr r12
/* 8018C67C 001895BC  4E 80 04 21 */	bctrl 
/* 8018C680 001895C0  A0 1E 00 24 */	lhz r0, 0x24(r30)
/* 8018C684 001895C4  2C 00 00 01 */	cmpwi r0, 1
/* 8018C688 001895C8  41 82 00 60 */	beq .L_8018C6E8
/* 8018C68C 001895CC  40 80 00 10 */	bge .L_8018C69C
/* 8018C690 001895D0  2C 00 00 00 */	cmpwi r0, 0
/* 8018C694 001895D4  40 80 00 14 */	bge .L_8018C6A8
/* 8018C698 001895D8  48 00 00 B0 */	b .L_8018C748
.L_8018C69C:
/* 8018C69C 001895DC  2C 00 00 03 */	cmpwi r0, 3
/* 8018C6A0 001895E0  40 80 00 A8 */	bge .L_8018C748
/* 8018C6A4 001895E4  48 00 00 70 */	b .L_8018C714
.L_8018C6A8:
/* 8018C6A8 001895E8  83 FF 02 58 */	lwz r31, 0x258(r31)
/* 8018C6AC 001895EC  7F E3 FB 78 */	mr r3, r31
/* 8018C6B0 001895F0  48 22 C4 3D */	bl killMoe___Q23efx9TPkEffectFv
/* 8018C6B4 001895F4  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018C6B8 001895F8  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 8018C6BC 001895FC  41 82 00 8C */	beq .L_8018C748
/* 8018C6C0 00189600  54 60 07 B8 */	rlwinm r0, r3, 0, 0x1e, 0x1c
/* 8018C6C4 00189604  7F E3 FB 78 */	mr r3, r31
/* 8018C6C8 00189608  90 1F 00 00 */	stw r0, 0(r31)
/* 8018C6CC 0018960C  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8018C6D0 00189610  48 22 C4 E5 */	bl "createMoeSmoke___Q23efx9TPkEffectFP10Vector3<f>"
/* 8018C6D4 00189614  38 00 00 3C */	li r0, 0x3c
/* 8018C6D8 00189618  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8018C6DC 0018961C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8018C6E0 00189620  48 22 AE F1 */	bl "createSimpleChinka__3efxFR10Vector3<f>"
/* 8018C6E4 00189624  48 00 00 64 */	b .L_8018C748
.L_8018C6E8:
/* 8018C6E8 00189628  83 FF 02 58 */	lwz r31, 0x258(r31)
/* 8018C6EC 0018962C  7F E3 FB 78 */	mr r3, r31
/* 8018C6F0 00189630  48 22 C6 45 */	bl killWater___Q23efx9TPkEffectFv
/* 8018C6F4 00189634  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018C6F8 00189638  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 8018C6FC 0018963C  41 82 00 4C */	beq .L_8018C748
/* 8018C700 00189640  54 60 07 34 */	rlwinm r0, r3, 0, 0x1c, 0x1a
/* 8018C704 00189644  90 1F 00 00 */	stw r0, 0(r31)
/* 8018C708 00189648  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8018C70C 0018964C  48 22 B1 2D */	bl "createSimpleWaterOff__3efxFR10Vector3<f>"
/* 8018C710 00189650  48 00 00 38 */	b .L_8018C748
.L_8018C714:
/* 8018C714 00189654  7F E3 FB 78 */	mr r3, r31
/* 8018C718 00189658  38 80 00 5A */	li r4, 0x5a
/* 8018C71C 0018965C  4B FB CD B1 */	bl setGasInvincible__Q24Game4PikiFUc
/* 8018C720 00189660  83 FF 02 58 */	lwz r31, 0x258(r31)
/* 8018C724 00189664  7F E3 FB 78 */	mr r3, r31
/* 8018C728 00189668  48 22 C4 69 */	bl killChudoku___Q23efx9TPkEffectFv
/* 8018C72C 0018966C  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018C730 00189670  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 8018C734 00189674  41 82 00 14 */	beq .L_8018C748
/* 8018C738 00189678  54 60 07 76 */	rlwinm r0, r3, 0, 0x1d, 0x1b
/* 8018C73C 0018967C  90 1F 00 00 */	stw r0, 0(r31)
/* 8018C740 00189680  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8018C744 00189684  48 22 AE E9 */	bl "createSimpleGedoku__3efxFR10Vector3<f>"
.L_8018C748:
/* 8018C748 00189688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018C74C 0018968C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018C750 00189690  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018C754 00189694  7C 08 03 A6 */	mtlr r0
/* 8018C758 00189698  38 21 00 10 */	addi r1, r1, 0x10
/* 8018C75C 0018969C  4E 80 00 20 */	blr 
.endfn onFlute__Q24Game14PikiPanicStateFPQ24Game4PikiPQ24Game4Navi

.fn init__Q24Game13PikiDeadStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018C760 001896A0  4E 80 00 20 */	blr 
.endfn init__Q24Game13PikiDeadStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game13PikiDeadStateFPQ24Game4Piki, global
/* 8018C764 001896A4  4E 80 00 20 */	blr 
.endfn exec__Q24Game13PikiDeadStateFPQ24Game4Piki

.fn transittable__Q24Game14PikiDyingStateFi, global
/* 8018C768 001896A8  20 04 00 19 */	subfic r0, r4, 0x19
/* 8018C76C 001896AC  7C 00 00 34 */	cntlzw r0, r0
/* 8018C770 001896B0  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 8018C774 001896B4  4E 80 00 20 */	blr 
.endfn transittable__Q24Game14PikiDyingStateFi

.fn init__Q24Game14PikiDyingStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018C778 001896B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018C77C 001896BC  7C 08 02 A6 */	mflr r0
/* 8018C780 001896C0  38 C0 00 05 */	li r6, 5
/* 8018C784 001896C4  28 05 00 00 */	cmplwi r5, 0
/* 8018C788 001896C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018C78C 001896CC  38 00 00 00 */	li r0, 0
/* 8018C790 001896D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018C794 001896D4  7C 9F 23 78 */	mr r31, r4
/* 8018C798 001896D8  90 C3 00 10 */	stw r6, 0x10(r3)
/* 8018C79C 001896DC  98 03 00 14 */	stb r0, 0x14(r3)
/* 8018C7A0 001896E0  41 82 00 24 */	beq .L_8018C7C4
/* 8018C7A4 001896E4  80 05 00 00 */	lwz r0, 0(r5)
/* 8018C7A8 001896E8  90 03 00 10 */	stw r0, 0x10(r3)
/* 8018C7AC 001896EC  88 05 00 04 */	lbz r0, 4(r5)
/* 8018C7B0 001896F0  98 03 00 14 */	stb r0, 0x14(r3)
/* 8018C7B4 001896F4  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8018C7B8 001896F8  2C 00 FF FF */	cmpwi r0, -1
/* 8018C7BC 001896FC  40 82 00 08 */	bne .L_8018C7C4
/* 8018C7C0 00189700  90 C3 00 10 */	stw r6, 0x10(r3)
.L_8018C7C4:
/* 8018C7C4 00189704  28 1F 00 00 */	cmplwi r31, 0
/* 8018C7C8 00189708  7F E6 FB 78 */	mr r6, r31
/* 8018C7CC 0018970C  41 82 00 08 */	beq .L_8018C7D4
/* 8018C7D0 00189710  38 DF 01 78 */	addi r6, r31, 0x178
.L_8018C7D4:
/* 8018C7D4 00189714  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018C7D8 00189718  38 E0 00 00 */	li r7, 0
/* 8018C7DC 0018971C  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8018C7E0 00189720  7F E3 FB 78 */	mr r3, r31
/* 8018C7E4 00189724  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018C7E8 00189728  7C 85 23 78 */	mr r5, r4
/* 8018C7EC 0018972C  7D 89 03 A6 */	mtctr r12
/* 8018C7F0 00189730  4E 80 04 21 */	bctrl 
/* 8018C7F4 00189734  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018C7F8 00189738  38 80 28 0D */	li r4, 0x280d
/* 8018C7FC 0018973C  38 A0 00 00 */	li r5, 0
/* 8018C800 00189740  38 C0 00 00 */	li r6, 0
/* 8018C804 00189744  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 8018C808 00189748  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 8018C80C 0018974C  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8018C810 00189750  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8018C814 00189754  48 2D 5D 6D */	bl startFreePikiSound__Q23PSM4PikiFUlUlUl
/* 8018C818 00189758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018C81C 0018975C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018C820 00189760  7C 08 03 A6 */	mtlr r0
/* 8018C824 00189764  38 21 00 10 */	addi r1, r1, 0x10
/* 8018C828 00189768  4E 80 00 20 */	blr 
.endfn init__Q24Game14PikiDyingStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game14PikiDyingStateFPQ24Game4Piki, global
/* 8018C82C 0018976C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018C830 00189770  7C 08 02 A6 */	mflr r0
/* 8018C834 00189774  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018C838 00189778  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018C83C 0018977C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018C840 00189780  7C 9F 23 78 */	mr r31, r4
/* 8018C844 00189784  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018C848 00189788  7C 7E 1B 78 */	mr r30, r3
/* 8018C84C 0018978C  7F E3 FB 78 */	mr r3, r31
/* 8018C850 00189790  D0 04 01 E4 */	stfs f0, 0x1e4(r4)
/* 8018C854 00189794  D0 04 01 E8 */	stfs f0, 0x1e8(r4)
/* 8018C858 00189798  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 8018C85C 0018979C  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 8018C860 001897A0  4B FB 06 CD */	bl assertMotion__Q24Game8FakePikiFi
/* 8018C864 001897A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018C868 001897A8  40 82 00 88 */	bne .L_8018C8F0
/* 8018C86C 001897AC  7F E3 FB 78 */	mr r3, r31
/* 8018C870 001897B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018C874 001897B4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8018C878 001897B8  7D 89 03 A6 */	mtctr r12
/* 8018C87C 001897BC  4E 80 04 21 */	bctrl 
/* 8018C880 001897C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018C884 001897C4  41 82 00 6C */	beq .L_8018C8F0
/* 8018C888 001897C8  88 1E 00 14 */	lbz r0, 0x14(r30)
/* 8018C88C 001897CC  28 00 00 00 */	cmplwi r0, 0
/* 8018C890 001897D0  41 82 00 34 */	beq .L_8018C8C4
/* 8018C894 001897D4  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureKillArg@ha
/* 8018C898 001897D8  3C 60 80 4B */	lis r3, __vt__Q24Game11PikiKillArg@ha
/* 8018C89C 001897DC  38 04 A2 D0 */	addi r0, r4, __vt__Q24Game15CreatureKillArg@l
/* 8018C8A0 001897E0  3C A0 80 00 */	lis r5, 0x8000
/* 8018C8A4 001897E4  90 01 00 08 */	stw r0, 8(r1)
/* 8018C8A8 001897E8  38 03 11 60 */	addi r0, r3, __vt__Q24Game11PikiKillArg@l
/* 8018C8AC 001897EC  7F E3 FB 78 */	mr r3, r31
/* 8018C8B0 001897F0  38 81 00 08 */	addi r4, r1, 8
/* 8018C8B4 001897F4  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8018C8B8 001897F8  90 01 00 08 */	stw r0, 8(r1)
/* 8018C8BC 001897FC  4B FA E8 35 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8018C8C0 00189800  48 00 00 30 */	b .L_8018C8F0
.L_8018C8C4:
/* 8018C8C4 00189804  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8018C8C8 00189808  28 03 00 00 */	cmplwi r3, 0
/* 8018C8CC 0018980C  41 82 00 18 */	beq .L_8018C8E4
/* 8018C8D0 00189810  3C 80 80 48 */	lis r4, lbl_8047ED14@ha
/* 8018C8D4 00189814  38 84 ED 14 */	addi r4, r4, lbl_8047ED14@l
/* 8018C8D8 00189818  48 2A 1C E1 */	bl isPlaying__Q24Game11MoviePlayerFPc
/* 8018C8DC 0018981C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018C8E0 00189820  40 82 00 10 */	bne .L_8018C8F0
.L_8018C8E4:
/* 8018C8E4 00189824  7F E3 FB 78 */	mr r3, r31
/* 8018C8E8 00189828  38 80 00 00 */	li r4, 0
/* 8018C8EC 0018982C  4B FA E8 05 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8018C8F0:
/* 8018C8F0 00189830  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018C8F4 00189834  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018C8F8 00189838  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018C8FC 0018983C  7C 08 03 A6 */	mtlr r0
/* 8018C900 00189840  38 21 00 20 */	addi r1, r1, 0x20
/* 8018C904 00189844  4E 80 00 20 */	blr 
.endfn exec__Q24Game14PikiDyingStateFPQ24Game4Piki

.fn cleanup__Q24Game14PikiDyingStateFPQ24Game4Piki, global
/* 8018C908 00189848  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game14PikiDyingStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game14PikiDyingStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 8018C90C 0018984C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018C910 00189850  7C 08 02 A6 */	mflr r0
/* 8018C914 00189854  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018C918 00189858  88 03 00 14 */	lbz r0, 0x14(r3)
/* 8018C91C 0018985C  28 00 00 00 */	cmplwi r0, 0
/* 8018C920 00189860  41 82 00 34 */	beq .L_8018C954
/* 8018C924 00189864  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureKillArg@ha
/* 8018C928 00189868  3C 60 80 4B */	lis r3, __vt__Q24Game11PikiKillArg@ha
/* 8018C92C 0018986C  38 05 A2 D0 */	addi r0, r5, __vt__Q24Game15CreatureKillArg@l
/* 8018C930 00189870  3C A0 80 00 */	lis r5, 0x8000
/* 8018C934 00189874  90 01 00 08 */	stw r0, 8(r1)
/* 8018C938 00189878  38 03 11 60 */	addi r0, r3, __vt__Q24Game11PikiKillArg@l
/* 8018C93C 0018987C  7C 83 23 78 */	mr r3, r4
/* 8018C940 00189880  38 81 00 08 */	addi r4, r1, 8
/* 8018C944 00189884  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8018C948 00189888  90 01 00 08 */	stw r0, 8(r1)
/* 8018C94C 0018988C  4B FA E7 A5 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8018C950 00189890  48 00 00 10 */	b .L_8018C960
.L_8018C954:
/* 8018C954 00189894  7C 83 23 78 */	mr r3, r4
/* 8018C958 00189898  38 80 00 00 */	li r4, 0
/* 8018C95C 0018989C  4B FA E7 95 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8018C960:
/* 8018C960 001898A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018C964 001898A4  7C 08 03 A6 */	mtlr r0
/* 8018C968 001898A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8018C96C 001898AC  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game14PikiDyingStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn soft_transittable__Q24Game19PikiDenkiDyingStateFi, global
/* 8018C970 001898B0  20 04 00 19 */	subfic r0, r4, 0x19
/* 8018C974 001898B4  7C 00 00 34 */	cntlzw r0, r0
/* 8018C978 001898B8  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 8018C97C 001898BC  4E 80 00 20 */	blr 
.endfn soft_transittable__Q24Game19PikiDenkiDyingStateFi

.fn transittable__Q24Game19PikiDenkiDyingStateFi, global
/* 8018C980 001898C0  20 04 00 19 */	subfic r0, r4, 0x19
/* 8018C984 001898C4  7C 00 00 34 */	cntlzw r0, r0
/* 8018C988 001898C8  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 8018C98C 001898CC  4E 80 00 20 */	blr 
.endfn transittable__Q24Game19PikiDenkiDyingStateFi

.fn init__Q24Game19PikiDenkiDyingStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018C990 001898D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018C994 001898D4  7C 08 02 A6 */	mflr r0
/* 8018C998 001898D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018C99C 001898DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018C9A0 001898E0  7C 9F 23 79 */	or. r31, r4, r4
/* 8018C9A4 001898E4  93 C1 00 08 */	stw r30, 8(r1)
/* 8018C9A8 001898E8  7C 7E 1B 78 */	mr r30, r3
/* 8018C9AC 001898EC  7F E6 FB 78 */	mr r6, r31
/* 8018C9B0 001898F0  41 82 00 08 */	beq .L_8018C9B8
/* 8018C9B4 001898F4  38 C6 01 78 */	addi r6, r6, 0x178
.L_8018C9B8:
/* 8018C9B8 001898F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018C9BC 001898FC  7F E3 FB 78 */	mr r3, r31
/* 8018C9C0 00189900  38 80 00 05 */	li r4, 5
/* 8018C9C4 00189904  38 A0 00 05 */	li r5, 5
/* 8018C9C8 00189908  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018C9CC 0018990C  38 E0 00 00 */	li r7, 0
/* 8018C9D0 00189910  7D 89 03 A6 */	mtctr r12
/* 8018C9D4 00189914  4E 80 04 21 */	bctrl 
/* 8018C9D8 00189918  C0 22 AA 64 */	lfs f1, lbl_80518DC4@sda21(r2)
/* 8018C9DC 0018991C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018C9E0 00189920  D0 3E 00 10 */	stfs f1, 0x10(r30)
/* 8018C9E4 00189924  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 8018C9E8 00189928  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 8018C9EC 0018992C  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8018C9F0 00189930  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8018C9F4 00189934  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8018C9F8 00189938  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8018C9FC 0018993C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018CA00 00189940  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018CA04 00189944  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018CA08 00189948  7C 08 03 A6 */	mtlr r0
/* 8018CA0C 0018994C  38 21 00 10 */	addi r1, r1, 0x10
/* 8018CA10 00189950  4E 80 00 20 */	blr 
.endfn init__Q24Game19PikiDenkiDyingStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game19PikiDenkiDyingStateFPQ24Game4Piki, global
/* 8018CA14 00189954  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8018CA18 00189958  7C 08 02 A6 */	mflr r0
/* 8018CA1C 0018995C  C0 42 AA 80 */	lfs f2, lbl_80518DE0@sda21(r2)
/* 8018CA20 00189960  90 01 00 54 */	stw r0, 0x54(r1)
/* 8018CA24 00189964  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8018CA28 00189968  7C 9F 23 78 */	mr r31, r4
/* 8018CA2C 0018996C  D0 44 01 E4 */	stfs f2, 0x1e4(r4)
/* 8018CA30 00189970  D0 44 01 E8 */	stfs f2, 0x1e8(r4)
/* 8018CA34 00189974  D0 44 01 EC */	stfs f2, 0x1ec(r4)
/* 8018CA38 00189978  D0 44 02 00 */	stfs f2, 0x200(r4)
/* 8018CA3C 0018997C  D0 44 02 04 */	stfs f2, 0x204(r4)
/* 8018CA40 00189980  D0 44 02 08 */	stfs f2, 0x208(r4)
/* 8018CA44 00189984  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8018CA48 00189988  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 8018CA4C 0018998C  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 8018CA50 00189990  EC 01 00 28 */	fsubs f0, f1, f0
/* 8018CA54 00189994  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8018CA58 00189998  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8018CA5C 0018999C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8018CA60 001899A0  4C 40 13 82 */	cror 2, 0, 2
/* 8018CA64 001899A4  40 82 00 D4 */	bne .L_8018CB38
/* 8018CA68 001899A8  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8018CA6C 001899AC  38 E0 00 00 */	li r7, 0
/* 8018CA70 001899B0  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8018CA74 001899B4  3C A0 80 4E */	lis r5, __vt__Q23efx8TSimple3@ha
/* 8018CA78 001899B8  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8018CA7C 001899BC  C4 43 41 E4 */	lfsu f2, "zero__10Vector3<f>"@l(r3)
/* 8018CA80 001899C0  39 65 6A 50 */	addi r11, r5, __vt__Q23efx8TSimple3@l
/* 8018CA84 001899C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018CA88 001899C8  C0 23 00 04 */	lfs f1, 4(r3)
/* 8018CA8C 001899CC  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8018CA90 001899D0  C0 03 00 08 */	lfs f0, 8(r3)
/* 8018CA94 001899D4  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 8018CA98 001899D8  3C C0 80 4B */	lis r6, __vt__Q23efx9TPkKanden@ha
/* 8018CA9C 001899DC  39 40 01 65 */	li r10, 0x165
/* 8018CAA0 001899E0  39 20 01 66 */	li r9, 0x166
/* 8018CAA4 001899E4  39 00 01 67 */	li r8, 0x167
/* 8018CAA8 001899E8  91 61 00 24 */	stw r11, 0x24(r1)
/* 8018CAAC 001899EC  38 A6 40 F0 */	addi r5, r6, __vt__Q23efx9TPkKanden@l
/* 8018CAB0 001899F0  38 61 00 08 */	addi r3, r1, 8
/* 8018CAB4 001899F4  B1 41 00 28 */	sth r10, 0x28(r1)
/* 8018CAB8 001899F8  B1 21 00 2A */	sth r9, 0x2a(r1)
/* 8018CABC 001899FC  B1 01 00 2C */	sth r8, 0x2c(r1)
/* 8018CAC0 00189A00  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8018CAC4 00189A04  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8018CAC8 00189A08  90 E1 00 38 */	stw r7, 0x38(r1)
/* 8018CACC 00189A0C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8018CAD0 00189A10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018CAD4 00189A14  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8018CAD8 00189A18  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8018CADC 00189A1C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8018CAE0 00189A20  81 84 00 00 */	lwz r12, 0(r4)
/* 8018CAE4 00189A24  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018CAE8 00189A28  7D 89 03 A6 */	mtctr r12
/* 8018CAEC 00189A2C  4E 80 04 21 */	bctrl 
/* 8018CAF0 00189A30  C0 41 00 08 */	lfs f2, 8(r1)
/* 8018CAF4 00189A34  38 61 00 24 */	addi r3, r1, 0x24
/* 8018CAF8 00189A38  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8018CAFC 00189A3C  38 81 00 14 */	addi r4, r1, 0x14
/* 8018CB00 00189A40  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018CB04 00189A44  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8018CB08 00189A48  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8018CB0C 00189A4C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8018CB10 00189A50  48 22 25 AD */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 8018CB14 00189A54  38 60 00 04 */	li r3, 4
/* 8018CB18 00189A58  48 0A 3C 01 */	bl inc__Q24Game8DeathMgrFi
/* 8018CB1C 00189A5C  7F E3 FB 78 */	mr r3, r31
/* 8018CB20 00189A60  38 80 28 4C */	li r4, 0x284c
/* 8018CB24 00189A64  38 A0 00 01 */	li r5, 1
/* 8018CB28 00189A68  4B FB BD A5 */	bl startSound__Q24Game4PikiFUlb
/* 8018CB2C 00189A6C  7F E3 FB 78 */	mr r3, r31
/* 8018CB30 00189A70  38 80 00 00 */	li r4, 0
/* 8018CB34 00189A74  4B FA E5 BD */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8018CB38:
/* 8018CB38 00189A78  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8018CB3C 00189A7C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8018CB40 00189A80  7C 08 03 A6 */	mtlr r0
/* 8018CB44 00189A84  38 21 00 50 */	addi r1, r1, 0x50
/* 8018CB48 00189A88  4E 80 00 20 */	blr 
.endfn exec__Q24Game19PikiDenkiDyingStateFPQ24Game4Piki

.fn cleanup__Q24Game19PikiDenkiDyingStateFPQ24Game4Piki, global
/* 8018CB4C 00189A8C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game19PikiDenkiDyingStateFPQ24Game4Piki

.fn soft_transittable__Q24Game16PikiPressedStateFi, global
/* 8018CB50 00189A90  20 04 00 19 */	subfic r0, r4, 0x19
/* 8018CB54 00189A94  7C 00 00 34 */	cntlzw r0, r0
/* 8018CB58 00189A98  54 03 D9 7E */	srwi r3, r0, 5
/* 8018CB5C 00189A9C  4E 80 00 20 */	blr 
.endfn soft_transittable__Q24Game16PikiPressedStateFi

.fn transittable__Q24Game16PikiPressedStateFi, global
/* 8018CB60 00189AA0  20 04 00 19 */	subfic r0, r4, 0x19
/* 8018CB64 00189AA4  7C 00 00 34 */	cntlzw r0, r0
/* 8018CB68 00189AA8  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 8018CB6C 00189AAC  4E 80 00 20 */	blr 
.endfn transittable__Q24Game16PikiPressedStateFi

.fn init__Q24Game16PikiPressedStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018CB70 00189AB0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8018CB74 00189AB4  7C 08 02 A6 */	mflr r0
/* 8018CB78 00189AB8  C0 22 AA FC */	lfs f1, lbl_80518E5C@sda21(r2)
/* 8018CB7C 00189ABC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018CB80 00189AC0  C0 02 AA A8 */	lfs f0, lbl_80518E08@sda21(r2)
/* 8018CB84 00189AC4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8018CB88 00189AC8  7C 9F 23 78 */	mr r31, r4
/* 8018CB8C 00189ACC  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 8018CB90 00189AD0  38 80 00 00 */	li r4, 0
/* 8018CB94 00189AD4  C0 45 03 40 */	lfs f2, 0x340(r5)
/* 8018CB98 00189AD8  D0 5F 01 68 */	stfs f2, 0x168(r31)
/* 8018CB9C 00189ADC  D0 5F 01 6C */	stfs f2, 0x16c(r31)
/* 8018CBA0 00189AE0  D0 3F 01 70 */	stfs f1, 0x170(r31)
/* 8018CBA4 00189AE4  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8018CBA8 00189AE8  7F E3 FB 78 */	mr r3, r31
/* 8018CBAC 00189AEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018CBB0 00189AF0  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 8018CBB4 00189AF4  7D 89 03 A6 */	mtctr r12
/* 8018CBB8 00189AF8  4E 80 04 21 */	bctrl 
/* 8018CBBC 00189AFC  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 8018CBC0 00189B00  7F E4 FB 78 */	mr r4, r31
/* 8018CBC4 00189B04  C0 22 AB 00 */	lfs f1, lbl_80518E60@sda21(r2)
/* 8018CBC8 00189B08  38 61 00 08 */	addi r3, r1, 8
/* 8018CBCC 00189B0C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018CBD0 00189B10  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8018CBD4 00189B14  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8018CBD8 00189B18  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8018CBDC 00189B1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018CBE0 00189B20  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018CBE4 00189B24  7D 89 03 A6 */	mtctr r12
/* 8018CBE8 00189B28  4E 80 04 21 */	bctrl 
/* 8018CBEC 00189B2C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8018CBF0 00189B30  38 7F 01 38 */	addi r3, r31, 0x138
/* 8018CBF4 00189B34  C0 02 AA D0 */	lfs f0, lbl_80518E30@sda21(r2)
/* 8018CBF8 00189B38  38 9F 01 68 */	addi r4, r31, 0x168
/* 8018CBFC 00189B3C  C0 61 00 08 */	lfs f3, 8(r1)
/* 8018CC00 00189B40  38 A1 00 20 */	addi r5, r1, 0x20
/* 8018CC04 00189B44  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8018CC08 00189B48  EC 02 00 2A */	fadds f0, f2, f0
/* 8018CC0C 00189B4C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8018CC10 00189B50  38 C1 00 14 */	addi r6, r1, 0x14
/* 8018CC14 00189B54  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8018CC18 00189B58  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8018CC1C 00189B5C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8018CC20 00189B60  48 29 B6 B9 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 8018CC24 00189B64  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8018CC28 00189B68  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8018CC2C 00189B6C  7C 08 03 A6 */	mtlr r0
/* 8018CC30 00189B70  38 21 00 40 */	addi r1, r1, 0x40
/* 8018CC34 00189B74  4E 80 00 20 */	blr 
.endfn init__Q24Game16PikiPressedStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game16PikiPressedStateFPQ24Game4Piki, global
/* 8018CC38 00189B78  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8018CC3C 00189B7C  7C 08 02 A6 */	mflr r0
/* 8018CC40 00189B80  C0 22 AB 00 */	lfs f1, lbl_80518E60@sda21(r2)
/* 8018CC44 00189B84  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018CC48 00189B88  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018CC4C 00189B8C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8018CC50 00189B90  7C 9F 23 78 */	mr r31, r4
/* 8018CC54 00189B94  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8018CC58 00189B98  7C 7E 1B 78 */	mr r30, r3
/* 8018CC5C 00189B9C  38 61 00 08 */	addi r3, r1, 8
/* 8018CC60 00189BA0  C0 44 01 FC */	lfs f2, 0x1fc(r4)
/* 8018CC64 00189BA4  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8018CC68 00189BA8  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8018CC6C 00189BAC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8018CC70 00189BB0  81 84 00 00 */	lwz r12, 0(r4)
/* 8018CC74 00189BB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018CC78 00189BB8  7D 89 03 A6 */	mtctr r12
/* 8018CC7C 00189BBC  4E 80 04 21 */	bctrl 
/* 8018CC80 00189BC0  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8018CC84 00189BC4  38 7F 01 38 */	addi r3, r31, 0x138
/* 8018CC88 00189BC8  C0 02 AA D0 */	lfs f0, lbl_80518E30@sda21(r2)
/* 8018CC8C 00189BCC  38 9F 01 68 */	addi r4, r31, 0x168
/* 8018CC90 00189BD0  C0 61 00 08 */	lfs f3, 8(r1)
/* 8018CC94 00189BD4  38 A1 00 20 */	addi r5, r1, 0x20
/* 8018CC98 00189BD8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8018CC9C 00189BDC  EC 02 00 2A */	fadds f0, f2, f0
/* 8018CCA0 00189BE0  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8018CCA4 00189BE4  38 C1 00 14 */	addi r6, r1, 0x14
/* 8018CCA8 00189BE8  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8018CCAC 00189BEC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8018CCB0 00189BF0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8018CCB4 00189BF4  48 29 B6 25 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 8018CCB8 00189BF8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018CCBC 00189BFC  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 8018CCC0 00189C00  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018CCC4 00189C04  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018CCC8 00189C08  EC 22 08 28 */	fsubs f1, f2, f1
/* 8018CCCC 00189C0C  D0 3E 00 10 */	stfs f1, 0x10(r30)
/* 8018CCD0 00189C10  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 8018CCD4 00189C14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018CCD8 00189C18  4C 40 13 82 */	cror 2, 0, 2
/* 8018CCDC 00189C1C  40 82 00 34 */	bne .L_8018CD10
/* 8018CCE0 00189C20  7F E3 FB 78 */	mr r3, r31
/* 8018CCE4 00189C24  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018CCE8 00189C28  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 8018CCEC 00189C2C  7D 89 03 A6 */	mtctr r12
/* 8018CCF0 00189C30  4E 80 04 21 */	bctrl 
/* 8018CCF4 00189C34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018CCF8 00189C38  41 82 00 0C */	beq .L_8018CD04
/* 8018CCFC 00189C3C  38 60 00 00 */	li r3, 0
/* 8018CD00 00189C40  48 0A 3A 19 */	bl inc__Q24Game8DeathMgrFi
.L_8018CD04:
/* 8018CD04 00189C44  7F E3 FB 78 */	mr r3, r31
/* 8018CD08 00189C48  38 80 00 00 */	li r4, 0
/* 8018CD0C 00189C4C  4B FA E3 E5 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8018CD10:
/* 8018CD10 00189C50  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018CD14 00189C54  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8018CD18 00189C58  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8018CD1C 00189C5C  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8018CD20 00189C60  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 8018CD24 00189C64  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 8018CD28 00189C68  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8018CD2C 00189C6C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8018CD30 00189C70  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8018CD34 00189C74  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8018CD38 00189C78  7C 08 03 A6 */	mtlr r0
/* 8018CD3C 00189C7C  38 21 00 40 */	addi r1, r1, 0x40
/* 8018CD40 00189C80  4E 80 00 20 */	blr 
.endfn exec__Q24Game16PikiPressedStateFPQ24Game4Piki

.fn cleanup__Q24Game16PikiPressedStateFPQ24Game4Piki, global
/* 8018CD44 00189C84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018CD48 00189C88  7C 08 02 A6 */	mflr r0
/* 8018CD4C 00189C8C  7C 83 23 78 */	mr r3, r4
/* 8018CD50 00189C90  38 80 00 01 */	li r4, 1
/* 8018CD54 00189C94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018CD58 00189C98  81 83 00 00 */	lwz r12, 0(r3)
/* 8018CD5C 00189C9C  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 8018CD60 00189CA0  7D 89 03 A6 */	mtctr r12
/* 8018CD64 00189CA4  4E 80 04 21 */	bctrl 
/* 8018CD68 00189CA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018CD6C 00189CAC  7C 08 03 A6 */	mtlr r0
/* 8018CD70 00189CB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8018CD74 00189CB4  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game16PikiPressedStateFPQ24Game4Piki

.fn init__Q24Game15PikiLookAtStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018CD78 00189CB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018CD7C 00189CBC  7C 08 02 A6 */	mflr r0
/* 8018CD80 00189CC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018CD84 00189CC4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018CD88 00189CC8  7C 9F 23 78 */	mr r31, r4
/* 8018CD8C 00189CCC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018CD90 00189CD0  7C 7E 1B 78 */	mr r30, r3
/* 8018CD94 00189CD4  4B F3 C8 0D */	bl rand
/* 8018CD98 00189CD8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8018CD9C 00189CDC  3C 60 43 30 */	lis r3, 0x4330
/* 8018CDA0 00189CE0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8018CDA4 00189CE4  38 00 00 00 */	li r0, 0
/* 8018CDA8 00189CE8  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018CDAC 00189CEC  38 80 28 01 */	li r4, 0x2801
/* 8018CDB0 00189CF0  90 61 00 08 */	stw r3, 8(r1)
/* 8018CDB4 00189CF4  38 A0 00 5A */	li r5, 0x5a
/* 8018CDB8 00189CF8  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8018CDBC 00189CFC  38 C0 00 00 */	li r6, 0
/* 8018CDC0 00189D00  C8 41 00 08 */	lfd f2, 8(r1)
/* 8018CDC4 00189D04  C0 02 AA 64 */	lfs f0, lbl_80518DC4@sda21(r2)
/* 8018CDC8 00189D08  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018CDCC 00189D0C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8018CDD0 00189D10  EC 00 00 72 */	fmuls f0, f0, f1
/* 8018CDD4 00189D14  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8018CDD8 00189D18  B0 1E 00 18 */	sth r0, 0x18(r30)
/* 8018CDDC 00189D1C  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8018CDE0 00189D20  48 2D 57 A1 */	bl startFreePikiSound__Q23PSM4PikiFUlUlUl
/* 8018CDE4 00189D24  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018CDE8 00189D28  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018CDEC 00189D2C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018CDF0 00189D30  7C 08 03 A6 */	mtlr r0
/* 8018CDF4 00189D34  38 21 00 20 */	addi r1, r1, 0x20
/* 8018CDF8 00189D38  4E 80 00 20 */	blr 
.endfn init__Q24Game15PikiLookAtStateFPQ24Game4PikiPQ24Game8StateArg

.fn onFlute__Q24Game15PikiLookAtStateFPQ24Game4PikiPQ24Game4Navi, global
/* 8018CDFC 00189D3C  4E 80 00 20 */	blr 
.endfn onFlute__Q24Game15PikiLookAtStateFPQ24Game4PikiPQ24Game4Navi

.fn exec__Q24Game15PikiLookAtStateFPQ24Game4Piki, global
/* 8018CE00 00189D40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018CE04 00189D44  7C 08 02 A6 */	mflr r0
/* 8018CE08 00189D48  C0 42 AA 80 */	lfs f2, lbl_80518DE0@sda21(r2)
/* 8018CE0C 00189D4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018CE10 00189D50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018CE14 00189D54  7C 9F 23 78 */	mr r31, r4
/* 8018CE18 00189D58  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018CE1C 00189D5C  7C 7E 1B 78 */	mr r30, r3
/* 8018CE20 00189D60  D0 44 01 E4 */	stfs f2, 0x1e4(r4)
/* 8018CE24 00189D64  D0 44 01 E8 */	stfs f2, 0x1e8(r4)
/* 8018CE28 00189D68  D0 44 01 EC */	stfs f2, 0x1ec(r4)
/* 8018CE2C 00189D6C  A0 03 00 18 */	lhz r0, 0x18(r3)
/* 8018CE30 00189D70  2C 00 00 01 */	cmpwi r0, 1
/* 8018CE34 00189D74  41 82 00 80 */	beq .L_8018CEB4
/* 8018CE38 00189D78  40 80 00 10 */	bge .L_8018CE48
/* 8018CE3C 00189D7C  2C 00 00 00 */	cmpwi r0, 0
/* 8018CE40 00189D80  40 80 00 14 */	bge .L_8018CE54
/* 8018CE44 00189D84  48 00 01 24 */	b .L_8018CF68
.L_8018CE48:
/* 8018CE48 00189D88  2C 00 00 03 */	cmpwi r0, 3
/* 8018CE4C 00189D8C  40 80 01 1C */	bge .L_8018CF68
/* 8018CE50 00189D90  48 00 00 84 */	b .L_8018CED4
.L_8018CE54:
/* 8018CE54 00189D94  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018CE58 00189D98  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8018CE5C 00189D9C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8018CE60 00189DA0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8018CE64 00189DA4  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8018CE68 00189DA8  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8018CE6C 00189DAC  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8018CE70 00189DB0  40 80 00 F8 */	bge .L_8018CF68
/* 8018CE74 00189DB4  28 1E 00 00 */	cmplwi r30, 0
/* 8018CE78 00189DB8  D0 5E 00 14 */	stfs f2, 0x14(r30)
/* 8018CE7C 00189DBC  7F C6 F3 78 */	mr r6, r30
/* 8018CE80 00189DC0  41 82 00 08 */	beq .L_8018CE88
/* 8018CE84 00189DC4  80 DE 00 10 */	lwz r6, 0x10(r30)
.L_8018CE88:
/* 8018CE88 00189DC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018CE8C 00189DCC  7F E3 FB 78 */	mr r3, r31
/* 8018CE90 00189DD0  38 80 00 20 */	li r4, 0x20
/* 8018CE94 00189DD4  38 A0 00 20 */	li r5, 0x20
/* 8018CE98 00189DD8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018CE9C 00189DDC  38 E0 00 00 */	li r7, 0
/* 8018CEA0 00189DE0  7D 89 03 A6 */	mtctr r12
/* 8018CEA4 00189DE4  4E 80 04 21 */	bctrl 
/* 8018CEA8 00189DE8  38 00 00 01 */	li r0, 1
/* 8018CEAC 00189DEC  B0 1E 00 18 */	sth r0, 0x18(r30)
/* 8018CEB0 00189DF0  48 00 00 B8 */	b .L_8018CF68
.L_8018CEB4:
/* 8018CEB4 00189DF4  7F E3 FB 78 */	mr r3, r31
/* 8018CEB8 00189DF8  38 80 00 20 */	li r4, 0x20
/* 8018CEBC 00189DFC  4B FB 00 71 */	bl assertMotion__Q24Game8FakePikiFi
/* 8018CEC0 00189E00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018CEC4 00189E04  40 82 00 A4 */	bne .L_8018CF68
/* 8018CEC8 00189E08  38 00 00 02 */	li r0, 2
/* 8018CECC 00189E0C  B0 1E 00 18 */	sth r0, 0x18(r30)
/* 8018CED0 00189E10  48 00 00 98 */	b .L_8018CF68
.L_8018CED4:
/* 8018CED4 00189E14  81 1F 02 C4 */	lwz r8, 0x2c4(r31)
/* 8018CED8 00189E18  28 08 00 00 */	cmplwi r8, 0
/* 8018CEDC 00189E1C  41 82 00 74 */	beq .L_8018CF50
/* 8018CEE0 00189E20  3C 80 80 4B */	lis r4, __vt__Q26PikiAI9ActionArg@ha
/* 8018CEE4 00189E24  38 60 00 00 */	li r3, 0
/* 8018CEE8 00189E28  38 04 05 30 */	addi r0, r4, __vt__Q26PikiAI9ActionArg@l
/* 8018CEEC 00189E2C  3C 80 80 4B */	lis r4, __vt__Q26PikiAI17CreatureActionArg@ha
/* 8018CEF0 00189E30  90 01 00 08 */	stw r0, 8(r1)
/* 8018CEF4 00189E34  38 E4 05 24 */	addi r7, r4, __vt__Q26PikiAI17CreatureActionArg@l
/* 8018CEF8 00189E38  3C 80 80 4B */	lis r4, __vt__Q26PikiAI19ActFormationInitArg@ha
/* 8018CEFC 00189E3C  38 00 00 01 */	li r0, 1
/* 8018CF00 00189E40  98 61 00 11 */	stb r3, 0x11(r1)
/* 8018CF04 00189E44  38 C4 0D 44 */	addi r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
/* 8018CF08 00189E48  38 A1 00 08 */	addi r5, r1, 8
/* 8018CF0C 00189E4C  38 80 00 00 */	li r4, 0
/* 8018CF10 00189E50  90 E1 00 08 */	stw r7, 8(r1)
/* 8018CF14 00189E54  91 01 00 0C */	stw r8, 0xc(r1)
/* 8018CF18 00189E58  90 C1 00 08 */	stw r6, 8(r1)
/* 8018CF1C 00189E5C  98 61 00 10 */	stb r3, 0x10(r1)
/* 8018CF20 00189E60  98 01 00 11 */	stb r0, 0x11(r1)
/* 8018CF24 00189E64  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8018CF28 00189E68  48 00 A0 6D */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 8018CF2C 00189E6C  7F C3 F3 78 */	mr r3, r30
/* 8018CF30 00189E70  7F E4 FB 78 */	mr r4, r31
/* 8018CF34 00189E74  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018CF38 00189E78  38 A0 00 00 */	li r5, 0
/* 8018CF3C 00189E7C  38 C0 00 00 */	li r6, 0
/* 8018CF40 00189E80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018CF44 00189E84  7D 89 03 A6 */	mtctr r12
/* 8018CF48 00189E88  4E 80 04 21 */	bctrl 
/* 8018CF4C 00189E8C  48 00 00 1C */	b .L_8018CF68
.L_8018CF50:
/* 8018CF50 00189E90  81 83 00 00 */	lwz r12, 0(r3)
/* 8018CF54 00189E94  38 A0 00 00 */	li r5, 0
/* 8018CF58 00189E98  38 C0 00 00 */	li r6, 0
/* 8018CF5C 00189E9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018CF60 00189EA0  7D 89 03 A6 */	mtctr r12
/* 8018CF64 00189EA4  4E 80 04 21 */	bctrl 
.L_8018CF68:
/* 8018CF68 00189EA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018CF6C 00189EAC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018CF70 00189EB0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018CF74 00189EB4  7C 08 03 A6 */	mtlr r0
/* 8018CF78 00189EB8  38 21 00 20 */	addi r1, r1, 0x20
/* 8018CF7C 00189EBC  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PikiLookAtStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game15PikiLookAtStateFRCQ28SysShape8KeyEvent, global
/* 8018CF80 00189EC0  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8018CF84 00189EC4  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8018CF88 00189EC8  41 82 00 14 */	beq .L_8018CF9C
/* 8018CF8C 00189ECC  4C 80 00 20 */	bgelr 
/* 8018CF90 00189ED0  2C 00 00 04 */	cmpwi r0, 4
/* 8018CF94 00189ED4  4C 80 00 20 */	bgelr 
/* 8018CF98 00189ED8  4E 80 00 20 */	blr 
.L_8018CF9C:
/* 8018CF9C 00189EDC  38 00 00 02 */	li r0, 2
/* 8018CFA0 00189EE0  B0 03 00 18 */	sth r0, 0x18(r3)
/* 8018CFA4 00189EE4  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game15PikiLookAtStateFRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game15PikiLookAtStateFPQ24Game4Piki, global
/* 8018CFA8 00189EE8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PikiLookAtStateFPQ24Game4Piki

.fn init__Q24Game17PikiAutoNukiStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018CFAC 00189EEC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8018CFB0 00189EF0  7C 08 02 A6 */	mflr r0
/* 8018CFB4 00189EF4  90 01 00 74 */	stw r0, 0x74(r1)
/* 8018CFB8 00189EF8  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8018CFBC 00189EFC  7C 9F 23 78 */	mr r31, r4
/* 8018CFC0 00189F00  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8018CFC4 00189F04  7C 7E 1B 78 */	mr r30, r3
/* 8018CFC8 00189F08  4B F3 C5 D9 */	bl rand
/* 8018CFCC 00189F0C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8018CFD0 00189F10  3C 60 43 30 */	lis r3, 0x4330
/* 8018CFD4 00189F14  90 01 00 64 */	stw r0, 0x64(r1)
/* 8018CFD8 00189F18  28 1F 00 00 */	cmplwi r31, 0
/* 8018CFDC 00189F1C  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018CFE0 00189F20  38 00 00 00 */	li r0, 0
/* 8018CFE4 00189F24  90 61 00 60 */	stw r3, 0x60(r1)
/* 8018CFE8 00189F28  7F E6 FB 78 */	mr r6, r31
/* 8018CFEC 00189F2C  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8018CFF0 00189F30  C8 41 00 60 */	lfd f2, 0x60(r1)
/* 8018CFF4 00189F34  C0 02 AA A4 */	lfs f0, lbl_80518E04@sda21(r2)
/* 8018CFF8 00189F38  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018CFFC 00189F3C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8018D000 00189F40  EC 00 00 72 */	fmuls f0, f0, f1
/* 8018D004 00189F44  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8018D008 00189F48  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8018D00C 00189F4C  41 82 00 08 */	beq .L_8018D014
/* 8018D010 00189F50  38 DF 01 78 */	addi r6, r31, 0x178
.L_8018D014:
/* 8018D014 00189F54  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D018 00189F58  7F E3 FB 78 */	mr r3, r31
/* 8018D01C 00189F5C  38 80 00 30 */	li r4, 0x30
/* 8018D020 00189F60  38 A0 00 30 */	li r5, 0x30
/* 8018D024 00189F64  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018D028 00189F68  38 E0 00 00 */	li r7, 0
/* 8018D02C 00189F6C  7D 89 03 A6 */	mtctr r12
/* 8018D030 00189F70  4E 80 04 21 */	bctrl 
/* 8018D034 00189F74  38 00 00 01 */	li r0, 1
/* 8018D038 00189F78  7F E4 FB 78 */	mr r4, r31
/* 8018D03C 00189F7C  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8018D040 00189F80  38 61 00 14 */	addi r3, r1, 0x14
/* 8018D044 00189F84  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D048 00189F88  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018D04C 00189F8C  7D 89 03 A6 */	mtctr r12
/* 8018D050 00189F90  4E 80 04 21 */	bctrl 
/* 8018D054 00189F94  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 8018D058 00189F98  7F E3 FB 78 */	mr r3, r31
/* 8018D05C 00189F9C  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8018D060 00189FA0  38 A1 00 30 */	addi r5, r1, 0x30
/* 8018D064 00189FA4  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8018D068 00189FA8  38 80 00 00 */	li r4, 0
/* 8018D06C 00189FAC  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018D070 00189FB0  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 8018D074 00189FB4  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 8018D078 00189FB8  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 8018D07C 00189FBC  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8018D080 00189FC0  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8018D084 00189FC4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8018D088 00189FC8  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8018D08C 00189FCC  4B FA EA B1 */	bl checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
/* 8018D090 00189FD0  28 03 00 00 */	cmplwi r3, 0
/* 8018D094 00189FD4  41 82 00 D4 */	beq .L_8018D168
/* 8018D098 00189FD8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8018D09C 00189FDC  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8018D0A0 00189FE0  80 81 00 44 */	lwz r4, 0x44(r1)
/* 8018D0A4 00189FE4  39 45 A7 F8 */	addi r10, r5, __vt__Q23efx5TBase@l
/* 8018D0A8 00189FE8  80 01 00 48 */	lwz r0, 0x48(r1)
/* 8018D0AC 00189FEC  3C C0 80 4E */	lis r6, __vt__Q23efx8TSimple2@ha
/* 8018D0B0 00189FF0  90 61 00 08 */	stw r3, 8(r1)
/* 8018D0B4 00189FF4  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8018D0B8 00189FF8  38 A3 A7 EC */	addi r5, r3, __vt__Q23efx3Arg@l
/* 8018D0BC 00189FFC  C0 02 AA C8 */	lfs f0, lbl_80518E28@sda21(r2)
/* 8018D0C0 0018A000  38 E0 00 00 */	li r7, 0
/* 8018D0C4 0018A004  90 81 00 0C */	stw r4, 0xc(r1)
/* 8018D0C8 0018A008  C0 61 00 08 */	lfs f3, 8(r1)
/* 8018D0CC 0018A00C  3C 80 80 4F */	lis r4, __vt__Q23efx10TEnemyDive@ha
/* 8018D0D0 0018A010  90 01 00 10 */	stw r0, 0x10(r1)
/* 8018D0D4 0018A014  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 8018D0D8 0018A018  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8018D0DC 0018A01C  39 20 01 59 */	li r9, 0x159
/* 8018D0E0 0018A020  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8018D0E4 0018A024  39 00 01 5A */	li r8, 0x15a
/* 8018D0E8 0018A028  91 41 00 20 */	stw r10, 0x20(r1)
/* 8018D0EC 0018A02C  39 46 6A 64 */	addi r10, r6, __vt__Q23efx8TSimple2@l
/* 8018D0F0 0018A030  38 C4 85 E8 */	addi r6, r4, __vt__Q23efx10TEnemyDive@l
/* 8018D0F4 0018A034  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 8018D0F8 0018A038  91 41 00 20 */	stw r10, 0x20(r1)
/* 8018D0FC 0018A03C  38 61 00 20 */	addi r3, r1, 0x20
/* 8018D100 0018A040  38 81 00 4C */	addi r4, r1, 0x4c
/* 8018D104 0018A044  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 8018D108 0018A048  B1 21 00 24 */	sth r9, 0x24(r1)
/* 8018D10C 0018A04C  B1 01 00 26 */	sth r8, 0x26(r1)
/* 8018D110 0018A050  90 E1 00 28 */	stw r7, 0x28(r1)
/* 8018D114 0018A054  90 E1 00 2C */	stw r7, 0x2c(r1)
/* 8018D118 0018A058  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8018D11C 0018A05C  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 8018D120 0018A060  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 8018D124 0018A064  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 8018D128 0018A068  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8018D12C 0018A06C  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 8018D130 0018A070  48 23 B7 A9 */	bl create__Q23efx10TEnemyDiveFPQ23efx3Arg
/* 8018D134 0018A074  80 9F 02 C4 */	lwz r4, 0x2c4(r31)
/* 8018D138 0018A078  28 04 00 00 */	cmplwi r4, 0
/* 8018D13C 0018A07C  41 82 00 54 */	beq .L_8018D190
/* 8018D140 0018A080  7F E3 FB 78 */	mr r3, r31
/* 8018D144 0018A084  38 A0 38 0B */	li r5, 0x380b
/* 8018D148 0018A088  38 C0 00 01 */	li r6, 1
/* 8018D14C 0018A08C  4B FB B8 09 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8018D150 0018A090  80 9F 02 C4 */	lwz r4, 0x2c4(r31)
/* 8018D154 0018A094  7F E3 FB 78 */	mr r3, r31
/* 8018D158 0018A098  38 A0 28 21 */	li r5, 0x2821
/* 8018D15C 0018A09C  38 C0 00 00 */	li r6, 0
/* 8018D160 0018A0A0  4B FB B7 F5 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8018D164 0018A0A4  48 00 00 2C */	b .L_8018D190
.L_8018D168:
/* 8018D168 0018A0A8  80 1F 02 C4 */	lwz r0, 0x2c4(r31)
/* 8018D16C 0018A0AC  28 00 00 00 */	cmplwi r0, 0
/* 8018D170 0018A0B0  41 82 00 20 */	beq .L_8018D190
/* 8018D174 0018A0B4  38 61 00 40 */	addi r3, r1, 0x40
/* 8018D178 0018A0B8  48 22 A6 35 */	bl "createSimplePkAp__3efxFR10Vector3<f>"
/* 8018D17C 0018A0BC  80 9F 02 C4 */	lwz r4, 0x2c4(r31)
/* 8018D180 0018A0C0  7F E3 FB 78 */	mr r3, r31
/* 8018D184 0018A0C4  38 A0 28 21 */	li r5, 0x2821
/* 8018D188 0018A0C8  38 C0 00 00 */	li r6, 0
/* 8018D18C 0018A0CC  4B FB B7 C9 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
.L_8018D190:
/* 8018D190 0018A0D0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8018D194 0018A0D4  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8018D198 0018A0D8  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8018D19C 0018A0DC  7C 08 03 A6 */	mtlr r0
/* 8018D1A0 0018A0E0  38 21 00 70 */	addi r1, r1, 0x70
/* 8018D1A4 0018A0E4  4E 80 00 20 */	blr 
.endfn init__Q24Game17PikiAutoNukiStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game17PikiAutoNukiStateFPQ24Game4Piki, global
/* 8018D1A8 0018A0E8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8018D1AC 0018A0EC  7C 08 02 A6 */	mflr r0
/* 8018D1B0 0018A0F0  90 01 00 84 */	stw r0, 0x84(r1)
/* 8018D1B4 0018A0F4  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8018D1B8 0018A0F8  7C 9F 23 78 */	mr r31, r4
/* 8018D1BC 0018A0FC  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8018D1C0 0018A100  7C 7E 1B 78 */	mr r30, r3
/* 8018D1C4 0018A104  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8018D1C8 0018A108  2C 00 00 01 */	cmpwi r0, 1
/* 8018D1CC 0018A10C  41 82 01 D8 */	beq .L_8018D3A4
/* 8018D1D0 0018A110  40 80 00 10 */	bge .L_8018D1E0
/* 8018D1D4 0018A114  2C 00 00 00 */	cmpwi r0, 0
/* 8018D1D8 0018A118  40 80 00 14 */	bge .L_8018D1EC
/* 8018D1DC 0018A11C  48 00 02 B4 */	b .L_8018D490
.L_8018D1E0:
/* 8018D1E0 0018A120  2C 00 00 03 */	cmpwi r0, 3
/* 8018D1E4 0018A124  40 80 02 AC */	bge .L_8018D490
/* 8018D1E8 0018A128  48 00 01 DC */	b .L_8018D3C4
.L_8018D1EC:
/* 8018D1EC 0018A12C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018D1F0 0018A130  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 8018D1F4 0018A134  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018D1F8 0018A138  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018D1FC 0018A13C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8018D200 0018A140  D0 3E 00 10 */	stfs f1, 0x10(r30)
/* 8018D204 0018A144  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 8018D208 0018A148  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018D20C 0018A14C  40 80 02 84 */	bge .L_8018D490
/* 8018D210 0018A150  28 1F 00 00 */	cmplwi r31, 0
/* 8018D214 0018A154  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8018D218 0018A158  7F E6 FB 78 */	mr r6, r31
/* 8018D21C 0018A15C  41 82 00 08 */	beq .L_8018D224
/* 8018D220 0018A160  38 C6 01 78 */	addi r6, r6, 0x178
.L_8018D224:
/* 8018D224 0018A164  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D228 0018A168  7F E3 FB 78 */	mr r3, r31
/* 8018D22C 0018A16C  38 80 00 30 */	li r4, 0x30
/* 8018D230 0018A170  38 A0 00 30 */	li r5, 0x30
/* 8018D234 0018A174  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018D238 0018A178  38 E0 00 00 */	li r7, 0
/* 8018D23C 0018A17C  7D 89 03 A6 */	mtctr r12
/* 8018D240 0018A180  4E 80 04 21 */	bctrl 
/* 8018D244 0018A184  38 00 00 01 */	li r0, 1
/* 8018D248 0018A188  7F E4 FB 78 */	mr r4, r31
/* 8018D24C 0018A18C  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8018D250 0018A190  38 61 00 14 */	addi r3, r1, 0x14
/* 8018D254 0018A194  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D258 0018A198  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018D25C 0018A19C  7D 89 03 A6 */	mtctr r12
/* 8018D260 0018A1A0  4E 80 04 21 */	bctrl 
/* 8018D264 0018A1A4  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 8018D268 0018A1A8  7F E3 FB 78 */	mr r3, r31
/* 8018D26C 0018A1AC  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8018D270 0018A1B0  38 A1 00 3C */	addi r5, r1, 0x3c
/* 8018D274 0018A1B4  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8018D278 0018A1B8  38 80 00 00 */	li r4, 0
/* 8018D27C 0018A1BC  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018D280 0018A1C0  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 8018D284 0018A1C4  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 8018D288 0018A1C8  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 8018D28C 0018A1CC  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 8018D290 0018A1D0  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 8018D294 0018A1D4  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 8018D298 0018A1D8  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8018D29C 0018A1DC  4B FA E8 A1 */	bl checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
/* 8018D2A0 0018A1E0  28 03 00 00 */	cmplwi r3, 0
/* 8018D2A4 0018A1E4  41 82 00 D4 */	beq .L_8018D378
/* 8018D2A8 0018A1E8  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 8018D2AC 0018A1EC  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8018D2B0 0018A1F0  80 81 00 50 */	lwz r4, 0x50(r1)
/* 8018D2B4 0018A1F4  39 45 A7 F8 */	addi r10, r5, __vt__Q23efx5TBase@l
/* 8018D2B8 0018A1F8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8018D2BC 0018A1FC  3C C0 80 4E */	lis r6, __vt__Q23efx8TSimple2@ha
/* 8018D2C0 0018A200  90 61 00 08 */	stw r3, 8(r1)
/* 8018D2C4 0018A204  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8018D2C8 0018A208  38 A3 A7 EC */	addi r5, r3, __vt__Q23efx3Arg@l
/* 8018D2CC 0018A20C  C0 02 AA C8 */	lfs f0, lbl_80518E28@sda21(r2)
/* 8018D2D0 0018A210  38 E0 00 00 */	li r7, 0
/* 8018D2D4 0018A214  90 81 00 0C */	stw r4, 0xc(r1)
/* 8018D2D8 0018A218  C0 61 00 08 */	lfs f3, 8(r1)
/* 8018D2DC 0018A21C  3C 80 80 4F */	lis r4, __vt__Q23efx10TEnemyDive@ha
/* 8018D2E0 0018A220  90 01 00 10 */	stw r0, 0x10(r1)
/* 8018D2E4 0018A224  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 8018D2E8 0018A228  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8018D2EC 0018A22C  39 20 01 59 */	li r9, 0x159
/* 8018D2F0 0018A230  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8018D2F4 0018A234  39 00 01 5A */	li r8, 0x15a
/* 8018D2F8 0018A238  91 41 00 2C */	stw r10, 0x2c(r1)
/* 8018D2FC 0018A23C  39 46 6A 64 */	addi r10, r6, __vt__Q23efx8TSimple2@l
/* 8018D300 0018A240  38 C4 85 E8 */	addi r6, r4, __vt__Q23efx10TEnemyDive@l
/* 8018D304 0018A244  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 8018D308 0018A248  91 41 00 2C */	stw r10, 0x2c(r1)
/* 8018D30C 0018A24C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8018D310 0018A250  38 81 00 58 */	addi r4, r1, 0x58
/* 8018D314 0018A254  90 A1 00 58 */	stw r5, 0x58(r1)
/* 8018D318 0018A258  B1 21 00 30 */	sth r9, 0x30(r1)
/* 8018D31C 0018A25C  B1 01 00 32 */	sth r8, 0x32(r1)
/* 8018D320 0018A260  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8018D324 0018A264  90 E1 00 38 */	stw r7, 0x38(r1)
/* 8018D328 0018A268  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 8018D32C 0018A26C  D0 61 00 5C */	stfs f3, 0x5c(r1)
/* 8018D330 0018A270  D0 41 00 60 */	stfs f2, 0x60(r1)
/* 8018D334 0018A274  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 8018D338 0018A278  90 01 00 58 */	stw r0, 0x58(r1)
/* 8018D33C 0018A27C  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 8018D340 0018A280  48 23 B5 99 */	bl create__Q23efx10TEnemyDiveFPQ23efx3Arg
/* 8018D344 0018A284  80 9F 02 C4 */	lwz r4, 0x2c4(r31)
/* 8018D348 0018A288  28 04 00 00 */	cmplwi r4, 0
/* 8018D34C 0018A28C  41 82 01 44 */	beq .L_8018D490
/* 8018D350 0018A290  7F E3 FB 78 */	mr r3, r31
/* 8018D354 0018A294  38 A0 38 0B */	li r5, 0x380b
/* 8018D358 0018A298  38 C0 00 01 */	li r6, 1
/* 8018D35C 0018A29C  4B FB B5 F9 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8018D360 0018A2A0  80 9F 02 C4 */	lwz r4, 0x2c4(r31)
/* 8018D364 0018A2A4  7F E3 FB 78 */	mr r3, r31
/* 8018D368 0018A2A8  38 A0 28 21 */	li r5, 0x2821
/* 8018D36C 0018A2AC  38 C0 00 00 */	li r6, 0
/* 8018D370 0018A2B0  4B FB B5 E5 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8018D374 0018A2B4  48 00 01 1C */	b .L_8018D490
.L_8018D378:
/* 8018D378 0018A2B8  80 1F 02 C4 */	lwz r0, 0x2c4(r31)
/* 8018D37C 0018A2BC  28 00 00 00 */	cmplwi r0, 0
/* 8018D380 0018A2C0  41 82 01 10 */	beq .L_8018D490
/* 8018D384 0018A2C4  38 61 00 4C */	addi r3, r1, 0x4c
/* 8018D388 0018A2C8  48 22 A4 25 */	bl "createSimplePkAp__3efxFR10Vector3<f>"
/* 8018D38C 0018A2CC  80 9F 02 C4 */	lwz r4, 0x2c4(r31)
/* 8018D390 0018A2D0  7F E3 FB 78 */	mr r3, r31
/* 8018D394 0018A2D4  38 A0 28 21 */	li r5, 0x2821
/* 8018D398 0018A2D8  38 C0 00 00 */	li r6, 0
/* 8018D39C 0018A2DC  4B FB B5 B9 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8018D3A0 0018A2E0  48 00 00 F0 */	b .L_8018D490
.L_8018D3A4:
/* 8018D3A4 0018A2E4  7F E3 FB 78 */	mr r3, r31
/* 8018D3A8 0018A2E8  38 80 00 30 */	li r4, 0x30
/* 8018D3AC 0018A2EC  4B FA FB 81 */	bl assertMotion__Q24Game8FakePikiFi
/* 8018D3B0 0018A2F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018D3B4 0018A2F4  40 82 00 DC */	bne .L_8018D490
/* 8018D3B8 0018A2F8  38 00 00 02 */	li r0, 2
/* 8018D3BC 0018A2FC  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8018D3C0 0018A300  48 00 00 D0 */	b .L_8018D490
.L_8018D3C4:
/* 8018D3C4 0018A304  81 1F 02 C4 */	lwz r8, 0x2c4(r31)
/* 8018D3C8 0018A308  28 08 00 00 */	cmplwi r8, 0
/* 8018D3CC 0018A30C  41 82 00 54 */	beq .L_8018D420
/* 8018D3D0 0018A310  3C 80 80 4B */	lis r4, __vt__Q26PikiAI9ActionArg@ha
/* 8018D3D4 0018A314  38 60 00 00 */	li r3, 0
/* 8018D3D8 0018A318  38 04 05 30 */	addi r0, r4, __vt__Q26PikiAI9ActionArg@l
/* 8018D3DC 0018A31C  3C 80 80 4B */	lis r4, __vt__Q26PikiAI17CreatureActionArg@ha
/* 8018D3E0 0018A320  90 01 00 20 */	stw r0, 0x20(r1)
/* 8018D3E4 0018A324  38 E4 05 24 */	addi r7, r4, __vt__Q26PikiAI17CreatureActionArg@l
/* 8018D3E8 0018A328  3C 80 80 4B */	lis r4, __vt__Q26PikiAI19ActFormationInitArg@ha
/* 8018D3EC 0018A32C  38 00 00 01 */	li r0, 1
/* 8018D3F0 0018A330  98 61 00 29 */	stb r3, 0x29(r1)
/* 8018D3F4 0018A334  38 C4 0D 44 */	addi r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
/* 8018D3F8 0018A338  38 A1 00 20 */	addi r5, r1, 0x20
/* 8018D3FC 0018A33C  38 80 00 00 */	li r4, 0
/* 8018D400 0018A340  90 E1 00 20 */	stw r7, 0x20(r1)
/* 8018D404 0018A344  91 01 00 24 */	stw r8, 0x24(r1)
/* 8018D408 0018A348  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8018D40C 0018A34C  98 61 00 28 */	stb r3, 0x28(r1)
/* 8018D410 0018A350  98 01 00 29 */	stb r0, 0x29(r1)
/* 8018D414 0018A354  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8018D418 0018A358  48 00 9B 7D */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 8018D41C 0018A35C  48 00 00 14 */	b .L_8018D430
.L_8018D420:
/* 8018D420 0018A360  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8018D424 0018A364  38 80 00 01 */	li r4, 1
/* 8018D428 0018A368  38 A0 00 00 */	li r5, 0
/* 8018D42C 0018A36C  48 00 9B 69 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_8018D430:
/* 8018D430 0018A370  7F C3 F3 78 */	mr r3, r30
/* 8018D434 0018A374  7F E4 FB 78 */	mr r4, r31
/* 8018D438 0018A378  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018D43C 0018A37C  38 A0 00 00 */	li r5, 0
/* 8018D440 0018A380  38 C0 00 00 */	li r6, 0
/* 8018D444 0018A384  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018D448 0018A388  7D 89 03 A6 */	mtctr r12
/* 8018D44C 0018A38C  4E 80 04 21 */	bctrl 
/* 8018D450 0018A390  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 8018D454 0018A394  2C 04 00 00 */	cmpwi r4, 0
/* 8018D458 0018A398  41 80 00 38 */	blt .L_8018D490
/* 8018D45C 0018A39C  2C 04 00 04 */	cmpwi r4, 4
/* 8018D460 0018A3A0  41 81 00 30 */	bgt .L_8018D490
/* 8018D464 0018A3A4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8018D468 0018A3A8  48 05 9C 41 */	bl hasMetPikmin__Q24Game8PlayDataFi
/* 8018D46C 0018A3AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018D470 0018A3B0  40 82 00 20 */	bne .L_8018D490
/* 8018D474 0018A3B4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8018D478 0018A3B8  7F E4 FB 78 */	mr r4, r31
/* 8018D47C 0018A3BC  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8018D480 0018A3C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8018D484 0018A3C4  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 8018D488 0018A3C8  7D 89 03 A6 */	mtctr r12
/* 8018D48C 0018A3CC  4E 80 04 21 */	bctrl 
.L_8018D490:
/* 8018D490 0018A3D0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8018D494 0018A3D4  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8018D498 0018A3D8  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8018D49C 0018A3DC  7C 08 03 A6 */	mtlr r0
/* 8018D4A0 0018A3E0  38 21 00 80 */	addi r1, r1, 0x80
/* 8018D4A4 0018A3E4  4E 80 00 20 */	blr 
.endfn exec__Q24Game17PikiAutoNukiStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game17PikiAutoNukiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 8018D4A8 0018A3E8  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8018D4AC 0018A3EC  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8018D4B0 0018A3F0  41 82 00 14 */	beq .L_8018D4C4
/* 8018D4B4 0018A3F4  4C 80 00 20 */	bgelr 
/* 8018D4B8 0018A3F8  2C 00 00 02 */	cmpwi r0, 2
/* 8018D4BC 0018A3FC  4D 82 00 20 */	beqlr 
/* 8018D4C0 0018A400  4E 80 00 20 */	blr 
.L_8018D4C4:
/* 8018D4C4 0018A404  38 00 00 02 */	li r0, 2
/* 8018D4C8 0018A408  B0 03 00 14 */	sth r0, 0x14(r3)
/* 8018D4CC 0018A40C  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game17PikiAutoNukiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game17PikiAutoNukiStateFPQ24Game4Piki, global
/* 8018D4D0 0018A410  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game17PikiAutoNukiStateFPQ24Game4Piki

.fn init__Q24Game15PikiGoHangStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018D4D4 0018A414  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018D4D8 0018A418  7C 08 02 A6 */	mflr r0
/* 8018D4DC 0018A41C  38 A0 00 1D */	li r5, 0x1d
/* 8018D4E0 0018A420  38 C0 00 00 */	li r6, 0
/* 8018D4E4 0018A424  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018D4E8 0018A428  38 E0 00 00 */	li r7, 0
/* 8018D4EC 0018A42C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018D4F0 0018A430  7C 9F 23 78 */	mr r31, r4
/* 8018D4F4 0018A434  38 80 00 1D */	li r4, 0x1d
/* 8018D4F8 0018A438  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D4FC 0018A43C  7F E3 FB 78 */	mr r3, r31
/* 8018D500 0018A440  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018D504 0018A444  7D 89 03 A6 */	mtctr r12
/* 8018D508 0018A448  4E 80 04 21 */	bctrl 
/* 8018D50C 0018A44C  7F E3 FB 78 */	mr r3, r31
/* 8018D510 0018A450  38 80 00 00 */	li r4, 0
/* 8018D514 0018A454  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D518 0018A458  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8018D51C 0018A45C  7D 89 03 A6 */	mtctr r12
/* 8018D520 0018A460  4E 80 04 21 */	bctrl 
/* 8018D524 0018A464  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018D528 0018A468  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018D52C 0018A46C  7C 08 03 A6 */	mtlr r0
/* 8018D530 0018A470  38 21 00 10 */	addi r1, r1, 0x10
/* 8018D534 0018A474  4E 80 00 20 */	blr 
.endfn init__Q24Game15PikiGoHangStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game15PikiGoHangStateFPQ24Game4Piki, global
/* 8018D538 0018A478  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8018D53C 0018A47C  7C 08 02 A6 */	mflr r0
/* 8018D540 0018A480  90 01 00 34 */	stw r0, 0x34(r1)
/* 8018D544 0018A484  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018D548 0018A488  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8018D54C 0018A48C  7C 9E 23 78 */	mr r30, r4
/* 8018D550 0018A490  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8018D554 0018A494  7C 7D 1B 78 */	mr r29, r3
/* 8018D558 0018A498  80 A4 02 C4 */	lwz r5, 0x2c4(r4)
/* 8018D55C 0018A49C  28 05 00 00 */	cmplwi r5, 0
/* 8018D560 0018A4A0  40 82 00 20 */	bne .L_8018D580
/* 8018D564 0018A4A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8018D568 0018A4A8  38 A0 00 00 */	li r5, 0
/* 8018D56C 0018A4AC  38 C0 00 00 */	li r6, 0
/* 8018D570 0018A4B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018D574 0018A4B4  7D 89 03 A6 */	mtctr r12
/* 8018D578 0018A4B8  4E 80 04 21 */	bctrl 
/* 8018D57C 0018A4BC  48 00 01 68 */	b .L_8018D6E4
.L_8018D580:
/* 8018D580 0018A4C0  3C 80 72 68 */	lis r4, 0x72686E64@ha
/* 8018D584 0018A4C4  80 65 01 14 */	lwz r3, 0x114(r5)
/* 8018D588 0018A4C8  38 84 6E 64 */	addi r4, r4, 0x72686E64@l
/* 8018D58C 0018A4CC  4B FA 88 B9 */	bl getCollPart__8CollTreeFUl
/* 8018D590 0018A4D0  7F C4 F3 78 */	mr r4, r30
/* 8018D594 0018A4D4  7C 7F 1B 78 */	mr r31, r3
/* 8018D598 0018A4D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018D59C 0018A4DC  38 61 00 08 */	addi r3, r1, 8
/* 8018D5A0 0018A4E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018D5A4 0018A4E4  7D 89 03 A6 */	mtctr r12
/* 8018D5A8 0018A4E8  4E 80 04 21 */	bctrl 
/* 8018D5AC 0018A4EC  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 8018D5B0 0018A4F0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8018D5B4 0018A4F4  C0 5F 00 54 */	lfs f2, 0x54(r31)
/* 8018D5B8 0018A4F8  EC 81 00 28 */	fsubs f4, f1, f0
/* 8018D5BC 0018A4FC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018D5C0 0018A500  C0 3F 00 4C */	lfs f1, 0x4c(r31)
/* 8018D5C4 0018A504  EC A2 00 28 */	fsubs f5, f2, f0
/* 8018D5C8 0018A508  C0 01 00 08 */	lfs f0, 8(r1)
/* 8018D5CC 0018A50C  EC 44 01 32 */	fmuls f2, f4, f4
/* 8018D5D0 0018A510  EC 61 00 28 */	fsubs f3, f1, f0
/* 8018D5D4 0018A514  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018D5D8 0018A518  EC C5 01 72 */	fmuls f6, f5, f5
/* 8018D5DC 0018A51C  EC 23 10 FA */	fmadds f1, f3, f3, f2
/* 8018D5E0 0018A520  EC 46 08 2A */	fadds f2, f6, f1
/* 8018D5E4 0018A524  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8018D5E8 0018A528  40 81 00 14 */	ble .L_8018D5FC
/* 8018D5EC 0018A52C  40 81 00 14 */	ble .L_8018D600
/* 8018D5F0 0018A530  FC 00 10 34 */	frsqrte f0, f2
/* 8018D5F4 0018A534  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8018D5F8 0018A538  48 00 00 08 */	b .L_8018D600
.L_8018D5FC:
/* 8018D5FC 0018A53C  FC 40 00 90 */	fmr f2, f0
.L_8018D600:
/* 8018D600 0018A540  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018D604 0018A544  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8018D608 0018A548  40 81 00 1C */	ble .L_8018D624
/* 8018D60C 0018A54C  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 8018D610 0018A550  EC 00 10 24 */	fdivs f0, f0, f2
/* 8018D614 0018A554  EC 63 00 32 */	fmuls f3, f3, f0
/* 8018D618 0018A558  EC 84 00 32 */	fmuls f4, f4, f0
/* 8018D61C 0018A55C  EC A5 00 32 */	fmuls f5, f5, f0
/* 8018D620 0018A560  48 00 00 08 */	b .L_8018D628
.L_8018D624:
/* 8018D624 0018A564  FC 40 00 90 */	fmr f2, f0
.L_8018D628:
/* 8018D628 0018A568  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8018D62C 0018A56C  C0 22 AA D0 */	lfs f1, lbl_80518E30@sda21(r2)
/* 8018D630 0018A570  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 8018D634 0018A574  C1 02 AA 84 */	lfs f8, lbl_80518DE4@sda21(r2)
/* 8018D638 0018A578  C0 03 06 60 */	lfs f0, 0x660(r3)
/* 8018D63C 0018A57C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018D640 0018A580  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8018D644 0018A584  40 81 00 08 */	ble .L_8018D64C
/* 8018D648 0018A588  FD 00 08 90 */	fmr f8, f1
.L_8018D64C:
/* 8018D64C 0018A58C  80 7E 02 C4 */	lwz r3, 0x2c4(r30)
/* 8018D650 0018A590  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 8018D654 0018A594  C0 03 02 04 */	lfs f0, 0x204(r3)
/* 8018D658 0018A598  C0 C3 02 08 */	lfs f6, 0x208(r3)
/* 8018D65C 0018A59C  EC E0 00 32 */	fmuls f7, f0, f0
/* 8018D660 0018A5A0  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 8018D664 0018A5A4  C0 44 02 C8 */	lfs f2, 0x2c8(r4)
/* 8018D668 0018A5A8  EC C6 01 B2 */	fmuls f6, f6, f6
/* 8018D66C 0018A5AC  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018D670 0018A5B0  EC 21 38 7A */	fmadds f1, f1, f1, f7
/* 8018D674 0018A5B4  EC E8 00 B2 */	fmuls f7, f8, f2
/* 8018D678 0018A5B8  EC 26 08 2A */	fadds f1, f6, f1
/* 8018D67C 0018A5BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018D680 0018A5C0  40 81 00 14 */	ble .L_8018D694
/* 8018D684 0018A5C4  40 81 00 14 */	ble .L_8018D698
/* 8018D688 0018A5C8  FC 00 08 34 */	frsqrte f0, f1
/* 8018D68C 0018A5CC  EC 20 00 72 */	fmuls f1, f0, f1
/* 8018D690 0018A5D0  48 00 00 08 */	b .L_8018D698
.L_8018D694:
/* 8018D694 0018A5D4  FC 20 00 90 */	fmr f1, f0
.L_8018D698:
/* 8018D698 0018A5D8  EC E7 08 2A */	fadds f7, f7, f1
/* 8018D69C 0018A5DC  EC 43 01 F2 */	fmuls f2, f3, f7
/* 8018D6A0 0018A5E0  EC 24 01 F2 */	fmuls f1, f4, f7
/* 8018D6A4 0018A5E4  EC 05 01 F2 */	fmuls f0, f5, f7
/* 8018D6A8 0018A5E8  D0 5E 01 E4 */	stfs f2, 0x1e4(r30)
/* 8018D6AC 0018A5EC  D0 3E 01 E8 */	stfs f1, 0x1e8(r30)
/* 8018D6B0 0018A5F0  D0 1E 01 EC */	stfs f0, 0x1ec(r30)
/* 8018D6B4 0018A5F4  80 7E 02 C4 */	lwz r3, 0x2c4(r30)
/* 8018D6B8 0018A5F8  4B FB 3D 8D */	bl getStateID__Q24Game4NaviFv
/* 8018D6BC 0018A5FC  2C 03 00 06 */	cmpwi r3, 6
/* 8018D6C0 0018A600  41 82 00 24 */	beq .L_8018D6E4
/* 8018D6C4 0018A604  7F A3 EB 78 */	mr r3, r29
/* 8018D6C8 0018A608  7F C4 F3 78 */	mr r4, r30
/* 8018D6CC 0018A60C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018D6D0 0018A610  38 A0 00 00 */	li r5, 0
/* 8018D6D4 0018A614  38 C0 00 00 */	li r6, 0
/* 8018D6D8 0018A618  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018D6DC 0018A61C  7D 89 03 A6 */	mtctr r12
/* 8018D6E0 0018A620  4E 80 04 21 */	bctrl 
.L_8018D6E4:
/* 8018D6E4 0018A624  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8018D6E8 0018A628  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8018D6EC 0018A62C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8018D6F0 0018A630  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8018D6F4 0018A634  7C 08 03 A6 */	mtlr r0
/* 8018D6F8 0018A638  38 21 00 30 */	addi r1, r1, 0x30
/* 8018D6FC 0018A63C  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PikiGoHangStateFPQ24Game4Piki

.fn cleanup__Q24Game15PikiGoHangStateFPQ24Game4Piki, global
/* 8018D700 0018A640  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018D704 0018A644  7C 08 02 A6 */	mflr r0
/* 8018D708 0018A648  7C 83 23 78 */	mr r3, r4
/* 8018D70C 0018A64C  38 80 00 01 */	li r4, 1
/* 8018D710 0018A650  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018D714 0018A654  81 83 00 00 */	lwz r12, 0(r3)
/* 8018D718 0018A658  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8018D71C 0018A65C  7D 89 03 A6 */	mtctr r12
/* 8018D720 0018A660  4E 80 04 21 */	bctrl 
/* 8018D724 0018A664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018D728 0018A668  7C 08 03 A6 */	mtlr r0
/* 8018D72C 0018A66C  38 21 00 10 */	addi r1, r1, 0x10
/* 8018D730 0018A670  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PikiGoHangStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game15PikiHangedStateFRCQ28SysShape8KeyEvent, global
/* 8018D734 0018A674  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game15PikiHangedStateFRCQ28SysShape8KeyEvent

.fn init__Q24Game15PikiHangedStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018D738 0018A678  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018D73C 0018A67C  7C 08 02 A6 */	mflr r0
/* 8018D740 0018A680  38 A0 00 00 */	li r5, 0
/* 8018D744 0018A684  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018D748 0018A688  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018D74C 0018A68C  7C 9F 23 78 */	mr r31, r4
/* 8018D750 0018A690  38 80 28 38 */	li r4, 0x2838
/* 8018D754 0018A694  93 C1 00 08 */	stw r30, 8(r1)
/* 8018D758 0018A698  7C 7E 1B 78 */	mr r30, r3
/* 8018D75C 0018A69C  7F E3 FB 78 */	mr r3, r31
/* 8018D760 0018A6A0  4B FB B1 6D */	bl startSound__Q24Game4PikiFUlb
/* 8018D764 0018A6A4  28 1E 00 00 */	cmplwi r30, 0
/* 8018D768 0018A6A8  7F C6 F3 78 */	mr r6, r30
/* 8018D76C 0018A6AC  41 82 00 08 */	beq .L_8018D774
/* 8018D770 0018A6B0  80 DE 00 10 */	lwz r6, 0x10(r30)
.L_8018D774:
/* 8018D774 0018A6B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D778 0018A6B8  7F E3 FB 78 */	mr r3, r31
/* 8018D77C 0018A6BC  38 80 00 24 */	li r4, 0x24
/* 8018D780 0018A6C0  38 A0 00 24 */	li r5, 0x24
/* 8018D784 0018A6C4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018D788 0018A6C8  38 E0 00 00 */	li r7, 0
/* 8018D78C 0018A6CC  7D 89 03 A6 */	mtctr r12
/* 8018D790 0018A6D0  4E 80 04 21 */	bctrl 
/* 8018D794 0018A6D4  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018D798 0018A6D8  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8018D79C 0018A6DC  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8018D7A0 0018A6E0  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8018D7A4 0018A6E4  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 8018D7A8 0018A6E8  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 8018D7AC 0018A6EC  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8018D7B0 0018A6F0  80 9F 02 C4 */	lwz r4, 0x2c4(r31)
/* 8018D7B4 0018A6F4  28 04 00 00 */	cmplwi r4, 0
/* 8018D7B8 0018A6F8  41 82 00 14 */	beq .L_8018D7CC
/* 8018D7BC 0018A6FC  7F E3 FB 78 */	mr r3, r31
/* 8018D7C0 0018A700  38 A0 28 02 */	li r5, 0x2802
/* 8018D7C4 0018A704  38 C0 00 00 */	li r6, 0
/* 8018D7C8 0018A708  4B FB B1 8D */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
.L_8018D7CC:
/* 8018D7CC 0018A70C  7F E3 FB 78 */	mr r3, r31
/* 8018D7D0 0018A710  38 80 00 00 */	li r4, 0
/* 8018D7D4 0018A714  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D7D8 0018A718  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8018D7DC 0018A71C  7D 89 03 A6 */	mtctr r12
/* 8018D7E0 0018A720  4E 80 04 21 */	bctrl 
/* 8018D7E4 0018A724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018D7E8 0018A728  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018D7EC 0018A72C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018D7F0 0018A730  7C 08 03 A6 */	mtlr r0
/* 8018D7F4 0018A734  38 21 00 10 */	addi r1, r1, 0x10
/* 8018D7F8 0018A738  4E 80 00 20 */	blr 
.endfn init__Q24Game15PikiHangedStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game15PikiHangedStateFPQ24Game4Piki, global
/* 8018D7FC 0018A73C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018D800 0018A740  7C 08 02 A6 */	mflr r0
/* 8018D804 0018A744  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018D808 0018A748  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018D80C 0018A74C  7C 9F 23 78 */	mr r31, r4
/* 8018D810 0018A750  93 C1 00 08 */	stw r30, 8(r1)
/* 8018D814 0018A754  7C 7E 1B 78 */	mr r30, r3
/* 8018D818 0018A758  80 64 02 C4 */	lwz r3, 0x2c4(r4)
/* 8018D81C 0018A75C  28 03 00 00 */	cmplwi r3, 0
/* 8018D820 0018A760  41 82 00 30 */	beq .L_8018D850
/* 8018D824 0018A764  4B FB 3C 21 */	bl getStateID__Q24Game4NaviFv
/* 8018D828 0018A768  2C 03 00 06 */	cmpwi r3, 6
/* 8018D82C 0018A76C  41 82 00 24 */	beq .L_8018D850
/* 8018D830 0018A770  7F C3 F3 78 */	mr r3, r30
/* 8018D834 0018A774  7F E4 FB 78 */	mr r4, r31
/* 8018D838 0018A778  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018D83C 0018A77C  38 A0 00 00 */	li r5, 0
/* 8018D840 0018A780  38 C0 00 00 */	li r6, 0
/* 8018D844 0018A784  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018D848 0018A788  7D 89 03 A6 */	mtctr r12
/* 8018D84C 0018A78C  4E 80 04 21 */	bctrl 
.L_8018D850:
/* 8018D850 0018A790  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018D854 0018A794  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018D858 0018A798  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018D85C 0018A79C  7C 08 03 A6 */	mtlr r0
/* 8018D860 0018A7A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8018D864 0018A7A4  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PikiHangedStateFPQ24Game4Piki

.fn cleanup__Q24Game15PikiHangedStateFPQ24Game4Piki, global
/* 8018D868 0018A7A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018D86C 0018A7AC  7C 08 02 A6 */	mflr r0
/* 8018D870 0018A7B0  7C 83 23 78 */	mr r3, r4
/* 8018D874 0018A7B4  38 80 00 01 */	li r4, 1
/* 8018D878 0018A7B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018D87C 0018A7BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8018D880 0018A7C0  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8018D884 0018A7C4  7D 89 03 A6 */	mtctr r12
/* 8018D888 0018A7C8  4E 80 04 21 */	bctrl 
/* 8018D88C 0018A7CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018D890 0018A7D0  7C 08 03 A6 */	mtlr r0
/* 8018D894 0018A7D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8018D898 0018A7D8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PikiHangedStateFPQ24Game4Piki

.fn ignoreAtari__Q24Game15PikiHangedStateFPQ24Game4PikiPQ24Game8Creature, global
/* 8018D89C 0018A7DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018D8A0 0018A7E0  7C 08 02 A6 */	mflr r0
/* 8018D8A4 0018A7E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018D8A8 0018A7E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018D8AC 0018A7EC  7C BF 2B 78 */	mr r31, r5
/* 8018D8B0 0018A7F0  7F E3 FB 78 */	mr r3, r31
/* 8018D8B4 0018A7F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D8B8 0018A7F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018D8BC 0018A7FC  7D 89 03 A6 */	mtctr r12
/* 8018D8C0 0018A800  4E 80 04 21 */	bctrl 
/* 8018D8C4 0018A804  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018D8C8 0018A808  40 82 00 20 */	bne .L_8018D8E8
/* 8018D8CC 0018A80C  7F E3 FB 78 */	mr r3, r31
/* 8018D8D0 0018A810  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D8D4 0018A814  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8018D8D8 0018A818  7D 89 03 A6 */	mtctr r12
/* 8018D8DC 0018A81C  4E 80 04 21 */	bctrl 
/* 8018D8E0 0018A820  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018D8E4 0018A824  41 82 00 0C */	beq .L_8018D8F0
.L_8018D8E8:
/* 8018D8E8 0018A828  38 60 00 01 */	li r3, 1
/* 8018D8EC 0018A82C  48 00 00 08 */	b .L_8018D8F4
.L_8018D8F0:
/* 8018D8F0 0018A830  38 60 00 00 */	li r3, 0
.L_8018D8F4:
/* 8018D8F4 0018A834  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018D8F8 0018A838  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018D8FC 0018A83C  7C 08 03 A6 */	mtlr r0
/* 8018D900 0018A840  38 21 00 10 */	addi r1, r1, 0x10
/* 8018D904 0018A844  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q24Game15PikiHangedStateFPQ24Game4PikiPQ24Game8Creature

.fn onKeyEvent__Q24Game20PikiWaterHangedStateFRCQ28SysShape8KeyEvent, global
/* 8018D908 0018A848  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game20PikiWaterHangedStateFRCQ28SysShape8KeyEvent

.fn init__Q24Game20PikiWaterHangedStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018D90C 0018A84C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018D910 0018A850  7C 08 02 A6 */	mflr r0
/* 8018D914 0018A854  28 05 00 00 */	cmplwi r5, 0
/* 8018D918 0018A858  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018D91C 0018A85C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018D920 0018A860  7C 9F 23 78 */	mr r31, r4
/* 8018D924 0018A864  93 C1 00 08 */	stw r30, 8(r1)
/* 8018D928 0018A868  7C 7E 1B 78 */	mr r30, r3
/* 8018D92C 0018A86C  41 82 00 10 */	beq .L_8018D93C
/* 8018D930 0018A870  80 05 00 00 */	lwz r0, 0(r5)
/* 8018D934 0018A874  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8018D938 0018A878  48 00 00 0C */	b .L_8018D944
.L_8018D93C:
/* 8018D93C 0018A87C  38 00 00 00 */	li r0, 0
/* 8018D940 0018A880  90 1E 00 14 */	stw r0, 0x14(r30)
.L_8018D944:
/* 8018D944 0018A884  7F E3 FB 78 */	mr r3, r31
/* 8018D948 0018A888  38 80 28 38 */	li r4, 0x2838
/* 8018D94C 0018A88C  38 A0 00 00 */	li r5, 0
/* 8018D950 0018A890  4B FB AF 7D */	bl startSound__Q24Game4PikiFUlb
/* 8018D954 0018A894  28 1E 00 00 */	cmplwi r30, 0
/* 8018D958 0018A898  7F C6 F3 78 */	mr r6, r30
/* 8018D95C 0018A89C  41 82 00 08 */	beq .L_8018D964
/* 8018D960 0018A8A0  80 DE 00 10 */	lwz r6, 0x10(r30)
.L_8018D964:
/* 8018D964 0018A8A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D968 0018A8A8  7F E3 FB 78 */	mr r3, r31
/* 8018D96C 0018A8AC  38 80 00 24 */	li r4, 0x24
/* 8018D970 0018A8B0  38 A0 00 24 */	li r5, 0x24
/* 8018D974 0018A8B4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018D978 0018A8B8  38 E0 00 00 */	li r7, 0
/* 8018D97C 0018A8BC  7D 89 03 A6 */	mtctr r12
/* 8018D980 0018A8C0  4E 80 04 21 */	bctrl 
/* 8018D984 0018A8C4  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018D988 0018A8C8  7F E3 FB 78 */	mr r3, r31
/* 8018D98C 0018A8CC  38 80 00 00 */	li r4, 0
/* 8018D990 0018A8D0  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8018D994 0018A8D4  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8018D998 0018A8D8  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8018D99C 0018A8DC  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 8018D9A0 0018A8E0  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 8018D9A4 0018A8E4  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8018D9A8 0018A8E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018D9AC 0018A8EC  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8018D9B0 0018A8F0  7D 89 03 A6 */	mtctr r12
/* 8018D9B4 0018A8F4  4E 80 04 21 */	bctrl 
/* 8018D9B8 0018A8F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018D9BC 0018A8FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018D9C0 0018A900  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018D9C4 0018A904  7C 08 03 A6 */	mtlr r0
/* 8018D9C8 0018A908  38 21 00 10 */	addi r1, r1, 0x10
/* 8018D9CC 0018A90C  4E 80 00 20 */	blr 
.endfn init__Q24Game20PikiWaterHangedStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game20PikiWaterHangedStateFPQ24Game4Piki, global
/* 8018D9D0 0018A910  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018D9D4 0018A914  7C 08 02 A6 */	mflr r0
/* 8018D9D8 0018A918  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018D9DC 0018A91C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018D9E0 0018A920  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018D9E4 0018A924  7C 9E 23 78 */	mr r30, r4
/* 8018D9E8 0018A928  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8018D9EC 0018A92C  7C 7D 1B 78 */	mr r29, r3
/* 8018D9F0 0018A930  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8018D9F4 0018A934  28 00 00 00 */	cmplwi r0, 0
/* 8018D9F8 0018A938  41 82 00 4C */	beq .L_8018DA44
/* 8018D9FC 0018A93C  7C 03 03 78 */	mr r3, r0
/* 8018DA00 0018A940  4B FB A4 49 */	bl getCurrActionID__Q24Game4PikiFv
/* 8018DA04 0018A944  7C 7F 1B 78 */	mr r31, r3
/* 8018DA08 0018A948  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 8018DA0C 0018A94C  4B FB B5 29 */	bl getStateID__Q24Game4PikiFv
/* 8018DA10 0018A950  2C 1F 00 0C */	cmpwi r31, 0xc
/* 8018DA14 0018A954  40 82 00 0C */	bne .L_8018DA20
/* 8018DA18 0018A958  2C 03 00 00 */	cmpwi r3, 0
/* 8018DA1C 0018A95C  41 82 00 40 */	beq .L_8018DA5C
.L_8018DA20:
/* 8018DA20 0018A960  7F A3 EB 78 */	mr r3, r29
/* 8018DA24 0018A964  7F C4 F3 78 */	mr r4, r30
/* 8018DA28 0018A968  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018DA2C 0018A96C  38 A0 00 00 */	li r5, 0
/* 8018DA30 0018A970  38 C0 00 00 */	li r6, 0
/* 8018DA34 0018A974  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018DA38 0018A978  7D 89 03 A6 */	mtctr r12
/* 8018DA3C 0018A97C  4E 80 04 21 */	bctrl 
/* 8018DA40 0018A980  48 00 00 1C */	b .L_8018DA5C
.L_8018DA44:
/* 8018DA44 0018A984  81 83 00 00 */	lwz r12, 0(r3)
/* 8018DA48 0018A988  38 A0 00 00 */	li r5, 0
/* 8018DA4C 0018A98C  38 C0 00 00 */	li r6, 0
/* 8018DA50 0018A990  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018DA54 0018A994  7D 89 03 A6 */	mtctr r12
/* 8018DA58 0018A998  4E 80 04 21 */	bctrl 
.L_8018DA5C:
/* 8018DA5C 0018A99C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018DA60 0018A9A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018DA64 0018A9A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018DA68 0018A9A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8018DA6C 0018A9AC  7C 08 03 A6 */	mtlr r0
/* 8018DA70 0018A9B0  38 21 00 20 */	addi r1, r1, 0x20
/* 8018DA74 0018A9B4  4E 80 00 20 */	blr 
.endfn exec__Q24Game20PikiWaterHangedStateFPQ24Game4Piki

.fn cleanup__Q24Game20PikiWaterHangedStateFPQ24Game4Piki, global
/* 8018DA78 0018A9B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018DA7C 0018A9BC  7C 08 02 A6 */	mflr r0
/* 8018DA80 0018A9C0  7C 83 23 78 */	mr r3, r4
/* 8018DA84 0018A9C4  38 80 00 01 */	li r4, 1
/* 8018DA88 0018A9C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018DA8C 0018A9CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8018DA90 0018A9D0  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8018DA94 0018A9D4  7D 89 03 A6 */	mtctr r12
/* 8018DA98 0018A9D8  4E 80 04 21 */	bctrl 
/* 8018DA9C 0018A9DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018DAA0 0018A9E0  7C 08 03 A6 */	mtlr r0
/* 8018DAA4 0018A9E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8018DAA8 0018A9E8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game20PikiWaterHangedStateFPQ24Game4Piki

.fn ignoreAtari__Q24Game20PikiWaterHangedStateFPQ24Game4PikiPQ24Game8Creature, global
/* 8018DAAC 0018A9EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018DAB0 0018A9F0  7C 08 02 A6 */	mflr r0
/* 8018DAB4 0018A9F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018DAB8 0018A9F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018DABC 0018A9FC  7C BF 2B 78 */	mr r31, r5
/* 8018DAC0 0018AA00  7F E3 FB 78 */	mr r3, r31
/* 8018DAC4 0018AA04  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018DAC8 0018AA08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018DACC 0018AA0C  7D 89 03 A6 */	mtctr r12
/* 8018DAD0 0018AA10  4E 80 04 21 */	bctrl 
/* 8018DAD4 0018AA14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018DAD8 0018AA18  40 82 00 20 */	bne .L_8018DAF8
/* 8018DADC 0018AA1C  7F E3 FB 78 */	mr r3, r31
/* 8018DAE0 0018AA20  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018DAE4 0018AA24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8018DAE8 0018AA28  7D 89 03 A6 */	mtctr r12
/* 8018DAEC 0018AA2C  4E 80 04 21 */	bctrl 
/* 8018DAF0 0018AA30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018DAF4 0018AA34  41 82 00 0C */	beq .L_8018DB00
.L_8018DAF8:
/* 8018DAF8 0018AA38  38 60 00 01 */	li r3, 1
/* 8018DAFC 0018AA3C  48 00 00 08 */	b .L_8018DB04
.L_8018DB00:
/* 8018DB00 0018AA40  38 60 00 00 */	li r3, 0
.L_8018DB04:
/* 8018DB04 0018AA44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018DB08 0018AA48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018DB0C 0018AA4C  7C 08 03 A6 */	mtlr r0
/* 8018DB10 0018AA50  38 21 00 10 */	addi r1, r1, 0x10
/* 8018DB14 0018AA54  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q24Game20PikiWaterHangedStateFPQ24Game4PikiPQ24Game8Creature

.fn init__Q24Game16PikiHipDropStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018DB18 0018AA58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018DB1C 0018AA5C  7C 08 02 A6 */	mflr r0
/* 8018DB20 0018AA60  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018DB24 0018AA64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018DB28 0018AA68  38 00 00 00 */	li r0, 0
/* 8018DB2C 0018AA6C  C0 02 AA C4 */	lfs f0, lbl_80518E24@sda21(r2)
/* 8018DB30 0018AA70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018DB34 0018AA74  93 C1 00 08 */	stw r30, 8(r1)
/* 8018DB38 0018AA78  7C 9E 23 78 */	mr r30, r4
/* 8018DB3C 0018AA7C  D0 24 02 08 */	stfs f1, 0x208(r4)
/* 8018DB40 0018AA80  D0 24 02 00 */	stfs f1, 0x200(r4)
/* 8018DB44 0018AA84  B0 03 00 14 */	sth r0, 0x14(r3)
/* 8018DB48 0018AA88  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8018DB4C 0018AA8C  D0 24 02 04 */	stfs f1, 0x204(r4)
/* 8018DB50 0018AA90  83 E4 02 58 */	lwz r31, 0x258(r4)
/* 8018DB54 0018AA94  7F E3 FB 78 */	mr r3, r31
/* 8018DB58 0018AA98  48 22 AE D5 */	bl killNage___Q23efx9TPkEffectFv
/* 8018DB5C 0018AA9C  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8018DB60 0018AAA0  7F E3 FB 78 */	mr r3, r31
/* 8018DB64 0018AAA4  48 22 B0 D5 */	bl "createBlackDown___Q23efx9TPkEffectFP10Vector3<f>"
/* 8018DB68 0018AAA8  38 00 00 01 */	li r0, 1
/* 8018DB6C 0018AAAC  98 1E 01 35 */	stb r0, 0x135(r30)
/* 8018DB70 0018AAB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018DB74 0018AAB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018DB78 0018AAB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018DB7C 0018AABC  7C 08 03 A6 */	mtlr r0
/* 8018DB80 0018AAC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8018DB84 0018AAC4  4E 80 00 20 */	blr 
.endfn init__Q24Game16PikiHipDropStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game16PikiHipDropStateFPQ24Game4Piki, global
/* 8018DB88 0018AAC8  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 8018DB8C 0018AACC  7C 08 02 A6 */	mflr r0
/* 8018DB90 0018AAD0  90 01 01 24 */	stw r0, 0x124(r1)
/* 8018DB94 0018AAD4  DB E1 01 10 */	stfd f31, 0x110(r1)
/* 8018DB98 0018AAD8  F3 E1 01 18 */	psq_st f31, 280(r1), 0, qr0
/* 8018DB9C 0018AADC  DB C1 01 00 */	stfd f30, 0x100(r1)
/* 8018DBA0 0018AAE0  F3 C1 01 08 */	psq_st f30, 264(r1), 0, qr0
/* 8018DBA4 0018AAE4  DB A1 00 F0 */	stfd f29, 0xf0(r1)
/* 8018DBA8 0018AAE8  F3 A1 00 F8 */	psq_st f29, 248(r1), 0, qr0
/* 8018DBAC 0018AAEC  DB 81 00 E0 */	stfd f28, 0xe0(r1)
/* 8018DBB0 0018AAF0  F3 81 00 E8 */	psq_st f28, 232(r1), 0, qr0
/* 8018DBB4 0018AAF4  DB 61 00 D0 */	stfd f27, 0xd0(r1)
/* 8018DBB8 0018AAF8  F3 61 00 D8 */	psq_st f27, 216(r1), 0, qr0
/* 8018DBBC 0018AAFC  DB 41 00 C0 */	stfd f26, 0xc0(r1)
/* 8018DBC0 0018AB00  F3 41 00 C8 */	psq_st f26, 200(r1), 0, qr0
/* 8018DBC4 0018AB04  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 8018DBC8 0018AB08  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 8018DBCC 0018AB0C  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 8018DBD0 0018AB10  93 81 00 B0 */	stw r28, 0xb0(r1)
/* 8018DBD4 0018AB14  7C 7C 1B 78 */	mr r28, r3
/* 8018DBD8 0018AB18  7C 9D 23 78 */	mr r29, r4
/* 8018DBDC 0018AB1C  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8018DBE0 0018AB20  28 00 00 00 */	cmplwi r0, 0
/* 8018DBE4 0018AB24  40 82 02 6C */	bne .L_8018DE50
/* 8018DBE8 0018AB28  C0 42 AA 80 */	lfs f2, lbl_80518DE0@sda21(r2)
/* 8018DBEC 0018AB2C  D0 5D 02 04 */	stfs f2, 0x204(r29)
/* 8018DBF0 0018AB30  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018DBF4 0018AB34  C0 3C 00 10 */	lfs f1, 0x10(r28)
/* 8018DBF8 0018AB38  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8018DBFC 0018AB3C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8018DC00 0018AB40  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8018DC04 0018AB44  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 8018DC08 0018AB48  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8018DC0C 0018AB4C  4C 40 13 82 */	cror 2, 0, 2
/* 8018DC10 0018AB50  40 82 02 F0 */	bne .L_8018DF00
/* 8018DC14 0018AB54  80 AD 93 F0 */	lwz r5, _aiConstants__4Game@sda21(r13)
/* 8018DC18 0018AB58  38 61 00 2C */	addi r3, r1, 0x2c
/* 8018DC1C 0018AB5C  C0 22 AA 94 */	lfs f1, lbl_80518DF4@sda21(r2)
/* 8018DC20 0018AB60  3B E0 00 00 */	li r31, 0
/* 8018DC24 0018AB64  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 8018DC28 0018AB68  C3 C2 AB 04 */	lfs f30, lbl_80518E64@sda21(r2)
/* 8018DC2C 0018AB6C  FC 00 00 50 */	fneg f0, f0
/* 8018DC30 0018AB70  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018DC34 0018AB74  D0 1D 02 04 */	stfs f0, 0x204(r29)
/* 8018DC38 0018AB78  81 84 00 00 */	lwz r12, 0(r4)
/* 8018DC3C 0018AB7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018DC40 0018AB80  7D 89 03 A6 */	mtctr r12
/* 8018DC44 0018AB84  4E 80 04 21 */	bctrl 
/* 8018DC48 0018AB88  C3 E1 00 2C */	lfs f31, 0x2c(r1)
/* 8018DC4C 0018AB8C  38 61 00 48 */	addi r3, r1, 0x48
/* 8018DC50 0018AB90  C3 A1 00 34 */	lfs f29, 0x34(r1)
/* 8018DC54 0018AB94  38 81 00 38 */	addi r4, r1, 0x38
/* 8018DC58 0018AB98  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8018DC5C 0018AB9C  C0 02 AA BC */	lfs f0, lbl_80518E1C@sda21(r2)
/* 8018DC60 0018ABA0  D3 E1 00 38 */	stfs f31, 0x38(r1)
/* 8018DC64 0018ABA4  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 8018DC68 0018ABA8  D3 A1 00 40 */	stfs f29, 0x40(r1)
/* 8018DC6C 0018ABAC  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8018DC70 0018ABB0  48 0A 07 31 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 8018DC74 0018ABB4  38 00 00 01 */	li r0, 1
/* 8018DC78 0018ABB8  38 61 00 68 */	addi r3, r1, 0x68
/* 8018DC7C 0018ABBC  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8018DC80 0018ABC0  38 81 00 48 */	addi r4, r1, 0x48
/* 8018DC84 0018ABC4  48 0A 07 5D */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 8018DC88 0018ABC8  38 61 00 68 */	addi r3, r1, 0x68
/* 8018DC8C 0018ABCC  48 0A 07 D1 */	bl first__Q24Game12CellIteratorFv
/* 8018DC90 0018ABD0  48 00 00 FC */	b .L_8018DD8C
.L_8018DC94:
/* 8018DC94 0018ABD4  38 61 00 68 */	addi r3, r1, 0x68
/* 8018DC98 0018ABD8  48 0A 08 AD */	bl __ml__Q24Game12CellIteratorFv
/* 8018DC9C 0018ABDC  81 83 00 00 */	lwz r12, 0(r3)
/* 8018DCA0 0018ABE0  7C 7E 1B 78 */	mr r30, r3
/* 8018DCA4 0018ABE4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8018DCA8 0018ABE8  7D 89 03 A6 */	mtctr r12
/* 8018DCAC 0018ABEC  4E 80 04 21 */	bctrl 
/* 8018DCB0 0018ABF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018DCB4 0018ABF4  41 82 00 D0 */	beq .L_8018DD84
/* 8018DCB8 0018ABF8  7F C3 F3 78 */	mr r3, r30
/* 8018DCBC 0018ABFC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018DCC0 0018AC00  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8018DCC4 0018AC04  7D 89 03 A6 */	mtctr r12
/* 8018DCC8 0018AC08  4E 80 04 21 */	bctrl 
/* 8018DCCC 0018AC0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018DCD0 0018AC10  41 82 00 B4 */	beq .L_8018DD84
/* 8018DCD4 0018AC14  7F C3 F3 78 */	mr r3, r30
/* 8018DCD8 0018AC18  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018DCDC 0018AC1C  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8018DCE0 0018AC20  7D 89 03 A6 */	mtctr r12
/* 8018DCE4 0018AC24  4E 80 04 21 */	bctrl 
/* 8018DCE8 0018AC28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018DCEC 0018AC2C  41 82 00 98 */	beq .L_8018DD84
/* 8018DCF0 0018AC30  7F C4 F3 78 */	mr r4, r30
/* 8018DCF4 0018AC34  38 61 00 20 */	addi r3, r1, 0x20
/* 8018DCF8 0018AC38  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018DCFC 0018AC3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018DD00 0018AC40  7D 89 03 A6 */	mtctr r12
/* 8018DD04 0018AC44  4E 80 04 21 */	bctrl 
/* 8018DD08 0018AC48  7F A4 EB 78 */	mr r4, r29
/* 8018DD0C 0018AC4C  38 61 00 14 */	addi r3, r1, 0x14
/* 8018DD10 0018AC50  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018DD14 0018AC54  C3 81 00 20 */	lfs f28, 0x20(r1)
/* 8018DD18 0018AC58  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018DD1C 0018AC5C  C3 61 00 24 */	lfs f27, 0x24(r1)
/* 8018DD20 0018AC60  C3 41 00 28 */	lfs f26, 0x28(r1)
/* 8018DD24 0018AC64  7D 89 03 A6 */	mtctr r12
/* 8018DD28 0018AC68  4E 80 04 21 */	bctrl 
/* 8018DD2C 0018AC6C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8018DD30 0018AC70  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8018DD34 0018AC74  EC 9B 00 28 */	fsubs f4, f27, f0
/* 8018DD38 0018AC78  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8018DD3C 0018AC7C  EC 7C 10 28 */	fsubs f3, f28, f2
/* 8018DD40 0018AC80  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018DD44 0018AC84  EC 5A 08 28 */	fsubs f2, f26, f1
/* 8018DD48 0018AC88  EC 24 01 32 */	fmuls f1, f4, f4
/* 8018DD4C 0018AC8C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8018DD50 0018AC90  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8018DD54 0018AC94  EC 22 08 2A */	fadds f1, f2, f1
/* 8018DD58 0018AC98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018DD5C 0018AC9C  40 81 00 14 */	ble .L_8018DD70
/* 8018DD60 0018ACA0  40 81 00 14 */	ble .L_8018DD74
/* 8018DD64 0018ACA4  FC 00 08 34 */	frsqrte f0, f1
/* 8018DD68 0018ACA8  EC 20 00 72 */	fmuls f1, f0, f1
/* 8018DD6C 0018ACAC  48 00 00 08 */	b .L_8018DD74
.L_8018DD70:
/* 8018DD70 0018ACB0  FC 20 00 90 */	fmr f1, f0
.L_8018DD74:
/* 8018DD74 0018ACB4  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 8018DD78 0018ACB8  40 80 00 0C */	bge .L_8018DD84
/* 8018DD7C 0018ACBC  FF C0 08 90 */	fmr f30, f1
/* 8018DD80 0018ACC0  7F DF F3 78 */	mr r31, r30
.L_8018DD84:
/* 8018DD84 0018ACC4  38 61 00 68 */	addi r3, r1, 0x68
/* 8018DD88 0018ACC8  48 0A 07 79 */	bl next__Q24Game12CellIteratorFv
.L_8018DD8C:
/* 8018DD8C 0018ACCC  38 61 00 68 */	addi r3, r1, 0x68
/* 8018DD90 0018ACD0  48 0A 07 A5 */	bl isDone__Q24Game12CellIteratorFv
/* 8018DD94 0018ACD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018DD98 0018ACD8  41 82 FE FC */	beq .L_8018DC94
/* 8018DD9C 0018ACDC  28 1F 00 00 */	cmplwi r31, 0
/* 8018DDA0 0018ACE0  41 82 00 80 */	beq .L_8018DE20
/* 8018DDA4 0018ACE4  7F E4 FB 78 */	mr r4, r31
/* 8018DDA8 0018ACE8  38 61 00 08 */	addi r3, r1, 8
/* 8018DDAC 0018ACEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018DDB0 0018ACF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018DDB4 0018ACF4  7D 89 03 A6 */	mtctr r12
/* 8018DDB8 0018ACF8  4E 80 04 21 */	bctrl 
/* 8018DDBC 0018ACFC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018DDC0 0018AD00  C0 21 00 08 */	lfs f1, 8(r1)
/* 8018DDC4 0018AD04  EC 80 E8 28 */	fsubs f4, f0, f29
/* 8018DDC8 0018AD08  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018DDCC 0018AD0C  EC 61 F8 28 */	fsubs f3, f1, f31
/* 8018DDD0 0018AD10  EC 24 01 32 */	fmuls f1, f4, f4
/* 8018DDD4 0018AD14  EC 43 08 FA */	fmadds f2, f3, f3, f1
/* 8018DDD8 0018AD18  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8018DDDC 0018AD1C  40 81 00 14 */	ble .L_8018DDF0
/* 8018DDE0 0018AD20  40 81 00 14 */	ble .L_8018DDF4
/* 8018DDE4 0018AD24  FC 00 10 34 */	frsqrte f0, f2
/* 8018DDE8 0018AD28  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8018DDEC 0018AD2C  48 00 00 08 */	b .L_8018DDF4
.L_8018DDF0:
/* 8018DDF0 0018AD30  FC 40 00 90 */	fmr f2, f0
.L_8018DDF4:
/* 8018DDF4 0018AD34  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018DDF8 0018AD38  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8018DDFC 0018AD3C  40 81 00 24 */	ble .L_8018DE20
/* 8018DE00 0018AD40  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 8018DE04 0018AD44  C0 22 AA F0 */	lfs f1, lbl_80518E50@sda21(r2)
/* 8018DE08 0018AD48  EC 00 10 24 */	fdivs f0, f0, f2
/* 8018DE0C 0018AD4C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018DE10 0018AD50  EC 63 00 32 */	fmuls f3, f3, f0
/* 8018DE14 0018AD54  EC 84 00 32 */	fmuls f4, f4, f0
/* 8018DE18 0018AD58  D0 7D 02 00 */	stfs f3, 0x200(r29)
/* 8018DE1C 0018AD5C  D0 9D 02 08 */	stfs f4, 0x208(r29)
.L_8018DE20:
/* 8018DE20 0018AD60  38 00 00 01 */	li r0, 1
/* 8018DE24 0018AD64  7F A3 EB 78 */	mr r3, r29
/* 8018DE28 0018AD68  B0 1C 00 14 */	sth r0, 0x14(r28)
/* 8018DE2C 0018AD6C  38 80 00 09 */	li r4, 9
/* 8018DE30 0018AD70  38 A0 00 09 */	li r5, 9
/* 8018DE34 0018AD74  38 C0 00 00 */	li r6, 0
/* 8018DE38 0018AD78  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018DE3C 0018AD7C  38 E0 00 00 */	li r7, 0
/* 8018DE40 0018AD80  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018DE44 0018AD84  7D 89 03 A6 */	mtctr r12
/* 8018DE48 0018AD88  4E 80 04 21 */	bctrl 
/* 8018DE4C 0018AD8C  48 00 00 B4 */	b .L_8018DF00
.L_8018DE50:
/* 8018DE50 0018AD90  28 00 00 01 */	cmplwi r0, 1
/* 8018DE54 0018AD94  40 82 00 38 */	bne .L_8018DE8C
/* 8018DE58 0018AD98  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018DE5C 0018AD9C  C0 42 AA DC */	lfs f2, lbl_80518E3C@sda21(r2)
/* 8018DE60 0018ADA0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018DE64 0018ADA4  C0 02 AA A4 */	lfs f0, lbl_80518E04@sda21(r2)
/* 8018DE68 0018ADA8  EC 22 00 72 */	fmuls f1, f2, f1
/* 8018DE6C 0018ADAC  C0 5D 01 FC */	lfs f2, 0x1fc(r29)
/* 8018DE70 0018ADB0  EC 01 00 24 */	fdivs f0, f1, f0
/* 8018DE74 0018ADB4  EC 02 00 2A */	fadds f0, f2, f0
/* 8018DE78 0018ADB8  D0 1D 01 FC */	stfs f0, 0x1fc(r29)
/* 8018DE7C 0018ADBC  C0 3D 01 FC */	lfs f1, 0x1fc(r29)
/* 8018DE80 0018ADC0  48 28 3D 51 */	bl roundAng__Ff
/* 8018DE84 0018ADC4  D0 3D 01 FC */	stfs f1, 0x1fc(r29)
/* 8018DE88 0018ADC8  48 00 00 78 */	b .L_8018DF00
.L_8018DE8C:
/* 8018DE8C 0018ADCC  28 00 00 02 */	cmplwi r0, 2
/* 8018DE90 0018ADD0  40 82 00 70 */	bne .L_8018DF00
/* 8018DE94 0018ADD4  C0 42 AA 80 */	lfs f2, lbl_80518DE0@sda21(r2)
/* 8018DE98 0018ADD8  D0 5D 01 E4 */	stfs f2, 0x1e4(r29)
/* 8018DE9C 0018ADDC  D0 5D 01 E8 */	stfs f2, 0x1e8(r29)
/* 8018DEA0 0018ADE0  D0 5D 01 EC */	stfs f2, 0x1ec(r29)
/* 8018DEA4 0018ADE4  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8018DEA8 0018ADE8  C0 3C 00 10 */	lfs f1, 0x10(r28)
/* 8018DEAC 0018ADEC  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 8018DEB0 0018ADF0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8018DEB4 0018ADF4  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8018DEB8 0018ADF8  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 8018DEBC 0018ADFC  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8018DEC0 0018AE00  4C 40 13 82 */	cror 2, 0, 2
/* 8018DEC4 0018AE04  40 82 00 3C */	bne .L_8018DF00
/* 8018DEC8 0018AE08  81 83 00 00 */	lwz r12, 0(r3)
/* 8018DECC 0018AE0C  38 A0 00 00 */	li r5, 0
/* 8018DED0 0018AE10  38 C0 00 00 */	li r6, 0
/* 8018DED4 0018AE14  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018DED8 0018AE18  7D 89 03 A6 */	mtctr r12
/* 8018DEDC 0018AE1C  4E 80 04 21 */	bctrl 
/* 8018DEE0 0018AE20  7F A3 EB 78 */	mr r3, r29
/* 8018DEE4 0018AE24  48 02 5D 25 */	bl invokeAI__Q24Game4PikiFv
/* 8018DEE8 0018AE28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018DEEC 0018AE2C  40 82 00 14 */	bne .L_8018DF00
/* 8018DEF0 0018AE30  80 7D 02 94 */	lwz r3, 0x294(r29)
/* 8018DEF4 0018AE34  38 80 00 01 */	li r4, 1
/* 8018DEF8 0018AE38  38 A0 00 00 */	li r5, 0
/* 8018DEFC 0018AE3C  48 00 90 99 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_8018DF00:
/* 8018DF00 0018AE40  E3 E1 01 18 */	psq_l f31, 280(r1), 0, qr0
/* 8018DF04 0018AE44  CB E1 01 10 */	lfd f31, 0x110(r1)
/* 8018DF08 0018AE48  E3 C1 01 08 */	psq_l f30, 264(r1), 0, qr0
/* 8018DF0C 0018AE4C  CB C1 01 00 */	lfd f30, 0x100(r1)
/* 8018DF10 0018AE50  E3 A1 00 F8 */	psq_l f29, 248(r1), 0, qr0
/* 8018DF14 0018AE54  CB A1 00 F0 */	lfd f29, 0xf0(r1)
/* 8018DF18 0018AE58  E3 81 00 E8 */	psq_l f28, 232(r1), 0, qr0
/* 8018DF1C 0018AE5C  CB 81 00 E0 */	lfd f28, 0xe0(r1)
/* 8018DF20 0018AE60  E3 61 00 D8 */	psq_l f27, 216(r1), 0, qr0
/* 8018DF24 0018AE64  CB 61 00 D0 */	lfd f27, 0xd0(r1)
/* 8018DF28 0018AE68  E3 41 00 C8 */	psq_l f26, 200(r1), 0, qr0
/* 8018DF2C 0018AE6C  CB 41 00 C0 */	lfd f26, 0xc0(r1)
/* 8018DF30 0018AE70  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 8018DF34 0018AE74  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 8018DF38 0018AE78  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 8018DF3C 0018AE7C  80 01 01 24 */	lwz r0, 0x124(r1)
/* 8018DF40 0018AE80  83 81 00 B0 */	lwz r28, 0xb0(r1)
/* 8018DF44 0018AE84  7C 08 03 A6 */	mtlr r0
/* 8018DF48 0018AE88  38 21 01 20 */	addi r1, r1, 0x120
/* 8018DF4C 0018AE8C  4E 80 00 20 */	blr 
.endfn exec__Q24Game16PikiHipDropStateFPQ24Game4Piki

.fn cleanup__Q24Game16PikiHipDropStateFPQ24Game4Piki, global
/* 8018DF50 0018AE90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018DF54 0018AE94  7C 08 02 A6 */	mflr r0
/* 8018DF58 0018AE98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018DF5C 0018AE9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018DF60 0018AEA0  7C 9F 23 78 */	mr r31, r4
/* 8018DF64 0018AEA4  80 64 02 58 */	lwz r3, 0x258(r4)
/* 8018DF68 0018AEA8  48 22 AD 41 */	bl killBlackDown___Q23efx9TPkEffectFv
/* 8018DF6C 0018AEAC  38 00 00 00 */	li r0, 0
/* 8018DF70 0018AEB0  98 1F 01 35 */	stb r0, 0x135(r31)
/* 8018DF74 0018AEB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018DF78 0018AEB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018DF7C 0018AEBC  7C 08 03 A6 */	mtlr r0
/* 8018DF80 0018AEC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8018DF84 0018AEC4  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game16PikiHipDropStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game16PikiHipDropStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 8018DF88 0018AEC8  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game16PikiHipDropStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn bounceCallback__Q24Game16PikiHipDropStateFPQ24Game4PikiPQ23Sys8Triangle, global
/* 8018DF8C 0018AECC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018DF90 0018AED0  7C 08 02 A6 */	mflr r0
/* 8018DF94 0018AED4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018DF98 0018AED8  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8018DF9C 0018AEDC  28 00 00 02 */	cmplwi r0, 2
/* 8018DFA0 0018AEE0  41 82 00 08 */	beq .L_8018DFA8
/* 8018DFA4 0018AEE4  48 00 03 21 */	bl dosin__Q24Game16PikiHipDropStateFPQ24Game4Piki
.L_8018DFA8:
/* 8018DFA8 0018AEE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018DFAC 0018AEEC  7C 08 03 A6 */	mtlr r0
/* 8018DFB0 0018AEF0  38 21 00 10 */	addi r1, r1, 0x10
/* 8018DFB4 0018AEF4  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game16PikiHipDropStateFPQ24Game4PikiPQ23Sys8Triangle

.fn collisionCallback__Q24Game16PikiHipDropStateFPQ24Game4PikiRQ24Game9CollEvent, global
/* 8018DFB8 0018AEF8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8018DFBC 0018AEFC  7C 08 02 A6 */	mflr r0
/* 8018DFC0 0018AF00  90 01 00 74 */	stw r0, 0x74(r1)
/* 8018DFC4 0018AF04  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8018DFC8 0018AF08  7C BF 2B 78 */	mr r31, r5
/* 8018DFCC 0018AF0C  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8018DFD0 0018AF10  7C 9E 23 78 */	mr r30, r4
/* 8018DFD4 0018AF14  93 A1 00 64 */	stw r29, 0x64(r1)
/* 8018DFD8 0018AF18  7C 7D 1B 78 */	mr r29, r3
/* 8018DFDC 0018AF1C  93 81 00 60 */	stw r28, 0x60(r1)
/* 8018DFE0 0018AF20  80 65 00 00 */	lwz r3, 0(r5)
/* 8018DFE4 0018AF24  81 83 00 00 */	lwz r12, 0(r3)
/* 8018DFE8 0018AF28  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8018DFEC 0018AF2C  7D 89 03 A6 */	mtctr r12
/* 8018DFF0 0018AF30  4E 80 04 21 */	bctrl 
/* 8018DFF4 0018AF34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018DFF8 0018AF38  40 82 02 80 */	bne .L_8018E278
/* 8018DFFC 0018AF3C  7F C4 F3 78 */	mr r4, r30
/* 8018E000 0018AF40  38 61 00 20 */	addi r3, r1, 0x20
/* 8018E004 0018AF44  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018E008 0018AF48  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018E00C 0018AF4C  7D 89 03 A6 */	mtctr r12
/* 8018E010 0018AF50  4E 80 04 21 */	bctrl 
/* 8018E014 0018AF54  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8018E018 0018AF58  38 61 00 4C */	addi r3, r1, 0x4c
/* 8018E01C 0018AF5C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8018E020 0018AF60  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8018E024 0018AF64  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 8018E028 0018AF68  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 8018E02C 0018AF6C  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 8018E030 0018AF70  48 22 96 59 */	bl "createSimpleBlackDrop__3efxFR10Vector3<f>"
/* 8018E034 0018AF74  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8018E038 0018AF78  38 A1 00 4C */	addi r5, r1, 0x4c
/* 8018E03C 0018AF7C  38 80 00 0B */	li r4, 0xb
/* 8018E040 0018AF80  38 C0 00 02 */	li r6, 2
/* 8018E044 0018AF84  48 0C 57 3D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 8018E048 0018AF88  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8018E04C 0018AF8C  38 A1 00 4C */	addi r5, r1, 0x4c
/* 8018E050 0018AF90  38 80 00 06 */	li r4, 6
/* 8018E054 0018AF94  38 C0 00 02 */	li r6, 2
/* 8018E058 0018AF98  48 0C 41 E5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 8018E05C 0018AF9C  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018E060 0018AFA0  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E064 0018AFA4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8018E068 0018AFA8  7D 89 03 A6 */	mtctr r12
/* 8018E06C 0018AFAC  4E 80 04 21 */	bctrl 
/* 8018E070 0018AFB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018E074 0018AFB4  40 82 00 1C */	bne .L_8018E090
/* 8018E078 0018AFB8  7F C3 F3 78 */	mr r3, r30
/* 8018E07C 0018AFBC  38 80 28 4E */	li r4, 0x284e
/* 8018E080 0018AFC0  38 A0 00 00 */	li r5, 0
/* 8018E084 0018AFC4  4B FB A8 49 */	bl startSound__Q24Game4PikiFUlb
/* 8018E088 0018AFC8  48 00 00 08 */	b .L_8018E090
/* 8018E08C 0018AFCC  48 00 01 EC */	b .L_8018E278
.L_8018E090:
/* 8018E090 0018AFD0  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018E094 0018AFD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E098 0018AFD8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8018E09C 0018AFDC  7D 89 03 A6 */	mtctr r12
/* 8018E0A0 0018AFE0  4E 80 04 21 */	bctrl 
/* 8018E0A4 0018AFE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018E0A8 0018AFE8  41 82 01 78 */	beq .L_8018E220
/* 8018E0AC 0018AFEC  80 FE 00 C0 */	lwz r7, 0xc0(r30)
/* 8018E0B0 0018AFF0  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 8018E0B4 0018AFF4  3C 80 80 4B */	lis r4, __vt__Q24Game14InteractAttack@ha
/* 8018E0B8 0018AFF8  3C 60 80 4B */	lis r3, __vt__Q24Game15InteractHipdrop@ha
/* 8018E0BC 0018AFFC  81 1F 00 04 */	lwz r8, 4(r31)
/* 8018E0C0 0018B000  38 C5 A3 00 */	addi r6, r5, __vt__Q24Game11Interaction@l
/* 8018E0C4 0018B004  C0 07 12 18 */	lfs f0, 0x1218(r7)
/* 8018E0C8 0018B008  38 A4 4D E0 */	addi r5, r4, __vt__Q24Game14InteractAttack@l
/* 8018E0CC 0018B00C  38 03 B3 68 */	addi r0, r3, __vt__Q24Game15InteractHipdrop@l
/* 8018E0D0 0018B010  7F C4 F3 78 */	mr r4, r30
/* 8018E0D4 0018B014  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 8018E0D8 0018B018  38 61 00 14 */	addi r3, r1, 0x14
/* 8018E0DC 0018B01C  3B 80 00 00 */	li r28, 0
/* 8018E0E0 0018B020  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8018E0E4 0018B024  93 C1 00 40 */	stw r30, 0x40(r1)
/* 8018E0E8 0018B028  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8018E0EC 0018B02C  91 01 00 48 */	stw r8, 0x48(r1)
/* 8018E0F0 0018B030  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8018E0F4 0018B034  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018E0F8 0018B038  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8018E0FC 0018B03C  7D 89 03 A6 */	mtctr r12
/* 8018E100 0018B040  4E 80 04 21 */	bctrl 
/* 8018E104 0018B044  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8018E108 0018B048  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018E10C 0018B04C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018E110 0018B050  40 80 00 30 */	bge .L_8018E140
/* 8018E114 0018B054  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018E118 0018B058  38 81 00 3C */	addi r4, r1, 0x3c
/* 8018E11C 0018B05C  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E120 0018B060  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8018E124 0018B064  7D 89 03 A6 */	mtctr r12
/* 8018E128 0018B068  4E 80 04 21 */	bctrl 
/* 8018E12C 0018B06C  7C 60 1B 78 */	mr r0, r3
/* 8018E130 0018B070  7F A3 EB 78 */	mr r3, r29
/* 8018E134 0018B074  7C 1C 03 78 */	mr r28, r0
/* 8018E138 0018B078  7F C4 F3 78 */	mr r4, r30
/* 8018E13C 0018B07C  48 00 02 45 */	bl earthquake__Q24Game16PikiHipDropStateFPQ24Game4Piki
.L_8018E140:
/* 8018E140 0018B080  80 BF 00 04 */	lwz r5, 4(r31)
/* 8018E144 0018B084  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 8018E148 0018B088  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 8018E14C 0018B08C  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018E150 0018B090  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 8018E154 0018B094  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8018E158 0018B098  38 03 B3 20 */	addi r0, r3, __vt__Q24Game13InteractPress@l
/* 8018E15C 0018B09C  7F C4 F3 78 */	mr r4, r30
/* 8018E160 0018B0A0  93 C1 00 30 */	stw r30, 0x30(r1)
/* 8018E164 0018B0A4  38 61 00 08 */	addi r3, r1, 8
/* 8018E168 0018B0A8  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8018E16C 0018B0AC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8018E170 0018B0B0  90 A1 00 38 */	stw r5, 0x38(r1)
/* 8018E174 0018B0B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018E178 0018B0B8  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8018E17C 0018B0BC  7D 89 03 A6 */	mtctr r12
/* 8018E180 0018B0C0  4E 80 04 21 */	bctrl 
/* 8018E184 0018B0C4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8018E188 0018B0C8  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018E18C 0018B0CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018E190 0018B0D0  40 80 00 20 */	bge .L_8018E1B0
/* 8018E194 0018B0D4  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018E198 0018B0D8  38 81 00 2C */	addi r4, r1, 0x2c
/* 8018E19C 0018B0DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E1A0 0018B0E0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8018E1A4 0018B0E4  7D 89 03 A6 */	mtctr r12
/* 8018E1A8 0018B0E8  4E 80 04 21 */	bctrl 
/* 8018E1AC 0018B0EC  7C 7C 1B 78 */	mr r28, r3
.L_8018E1B0:
/* 8018E1B0 0018B0F0  7F C3 F3 78 */	mr r3, r30
/* 8018E1B4 0018B0F4  38 80 28 7C */	li r4, 0x287c
/* 8018E1B8 0018B0F8  38 A0 00 00 */	li r5, 0
/* 8018E1BC 0018B0FC  4B FB A7 11 */	bl startSound__Q24Game4PikiFUlb
/* 8018E1C0 0018B100  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 8018E1C4 0018B104  40 82 00 5C */	bne .L_8018E220
/* 8018E1C8 0018B108  80 7F 00 04 */	lwz r3, 4(r31)
/* 8018E1CC 0018B10C  28 03 00 00 */	cmplwi r3, 0
/* 8018E1D0 0018B110  41 82 00 50 */	beq .L_8018E220
/* 8018E1D4 0018B114  4B FA 8B DD */	bl isStickable__8CollPartFv
/* 8018E1D8 0018B118  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018E1DC 0018B11C  41 82 00 44 */	beq .L_8018E220
/* 8018E1E0 0018B120  80 7F 00 00 */	lwz r3, 0(r31)
/* 8018E1E4 0018B124  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E1E8 0018B128  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8018E1EC 0018B12C  7D 89 03 A6 */	mtctr r12
/* 8018E1F0 0018B130  4E 80 04 21 */	bctrl 
/* 8018E1F4 0018B134  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018E1F8 0018B138  41 82 00 28 */	beq .L_8018E220
/* 8018E1FC 0018B13C  80 9F 00 00 */	lwz r4, 0(r31)
/* 8018E200 0018B140  7F C3 F3 78 */	mr r3, r30
/* 8018E204 0018B144  80 BF 00 04 */	lwz r5, 4(r31)
/* 8018E208 0018B148  48 01 0C ED */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 8018E20C 0018B14C  80 9F 00 00 */	lwz r4, 0(r31)
/* 8018E210 0018B150  7F C3 F3 78 */	mr r3, r30
/* 8018E214 0018B154  38 A0 28 05 */	li r5, 0x2805
/* 8018E218 0018B158  38 C0 00 01 */	li r6, 1
/* 8018E21C 0018B15C  4B FB A7 39 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
.L_8018E220:
/* 8018E220 0018B160  7F C3 F3 78 */	mr r3, r30
/* 8018E224 0018B164  4B FB AD 11 */	bl getStateID__Q24Game4PikiFv
/* 8018E228 0018B168  2C 03 00 12 */	cmpwi r3, 0x12
/* 8018E22C 0018B16C  40 82 00 4C */	bne .L_8018E278
/* 8018E230 0018B170  7F A3 EB 78 */	mr r3, r29
/* 8018E234 0018B174  7F C4 F3 78 */	mr r4, r30
/* 8018E238 0018B178  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018E23C 0018B17C  38 A0 00 00 */	li r5, 0
/* 8018E240 0018B180  38 C0 00 00 */	li r6, 0
/* 8018E244 0018B184  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018E248 0018B188  7D 89 03 A6 */	mtctr r12
/* 8018E24C 0018B18C  4E 80 04 21 */	bctrl 
/* 8018E250 0018B190  7F C3 F3 78 */	mr r3, r30
/* 8018E254 0018B194  7F E4 FB 78 */	mr r4, r31
/* 8018E258 0018B198  38 A0 00 01 */	li r5, 1
/* 8018E25C 0018B19C  48 02 4B 55 */	bl invokeAI__Q24Game4PikiFPQ24Game9CollEventb
/* 8018E260 0018B1A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018E264 0018B1A4  40 82 00 14 */	bne .L_8018E278
/* 8018E268 0018B1A8  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 8018E26C 0018B1AC  38 80 00 01 */	li r4, 1
/* 8018E270 0018B1B0  38 A0 00 00 */	li r5, 0
/* 8018E274 0018B1B4  48 00 8D 21 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_8018E278:
/* 8018E278 0018B1B8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8018E27C 0018B1BC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8018E280 0018B1C0  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8018E284 0018B1C4  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 8018E288 0018B1C8  83 81 00 60 */	lwz r28, 0x60(r1)
/* 8018E28C 0018B1CC  7C 08 03 A6 */	mtlr r0
/* 8018E290 0018B1D0  38 21 00 70 */	addi r1, r1, 0x70
/* 8018E294 0018B1D4  4E 80 00 20 */	blr 
.endfn collisionCallback__Q24Game16PikiHipDropStateFPQ24Game4PikiRQ24Game9CollEvent

.fn platCallback__Q24Game16PikiHipDropStateFPQ24Game4PikiRQ24Game9PlatEvent, global
/* 8018E298 0018B1D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018E29C 0018B1DC  7C 08 02 A6 */	mflr r0
/* 8018E2A0 0018B1E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018E2A4 0018B1E4  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8018E2A8 0018B1E8  28 00 00 02 */	cmplwi r0, 2
/* 8018E2AC 0018B1EC  41 82 00 08 */	beq .L_8018E2B4
/* 8018E2B0 0018B1F0  48 00 00 15 */	bl dosin__Q24Game16PikiHipDropStateFPQ24Game4Piki
.L_8018E2B4:
/* 8018E2B4 0018B1F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018E2B8 0018B1F8  7C 08 03 A6 */	mtlr r0
/* 8018E2BC 0018B1FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8018E2C0 0018B200  4E 80 00 20 */	blr 
.endfn platCallback__Q24Game16PikiHipDropStateFPQ24Game4PikiRQ24Game9PlatEvent

.fn dosin__Q24Game16PikiHipDropStateFPQ24Game4Piki, global
/* 8018E2C4 0018B204  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8018E2C8 0018B208  7C 08 02 A6 */	mflr r0
/* 8018E2CC 0018B20C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8018E2D0 0018B210  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018E2D4 0018B214  7C 9F 23 78 */	mr r31, r4
/* 8018E2D8 0018B218  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8018E2DC 0018B21C  7C 7E 1B 78 */	mr r30, r3
/* 8018E2E0 0018B220  38 61 00 08 */	addi r3, r1, 8
/* 8018E2E4 0018B224  81 84 00 00 */	lwz r12, 0(r4)
/* 8018E2E8 0018B228  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018E2EC 0018B22C  7D 89 03 A6 */	mtctr r12
/* 8018E2F0 0018B230  4E 80 04 21 */	bctrl 
/* 8018E2F4 0018B234  C0 41 00 08 */	lfs f2, 8(r1)
/* 8018E2F8 0018B238  38 61 00 14 */	addi r3, r1, 0x14
/* 8018E2FC 0018B23C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8018E300 0018B240  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018E304 0018B244  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8018E308 0018B248  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8018E30C 0018B24C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8018E310 0018B250  48 22 93 79 */	bl "createSimpleBlackDrop__3efxFR10Vector3<f>"
/* 8018E314 0018B254  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8018E318 0018B258  38 A1 00 14 */	addi r5, r1, 0x14
/* 8018E31C 0018B25C  38 80 00 0B */	li r4, 0xb
/* 8018E320 0018B260  38 C0 00 02 */	li r6, 2
/* 8018E324 0018B264  48 0C 54 5D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 8018E328 0018B268  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8018E32C 0018B26C  38 A1 00 14 */	addi r5, r1, 0x14
/* 8018E330 0018B270  38 80 00 06 */	li r4, 6
/* 8018E334 0018B274  38 C0 00 02 */	li r6, 2
/* 8018E338 0018B278  48 0C 3F 05 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 8018E33C 0018B27C  7F E3 FB 78 */	mr r3, r31
/* 8018E340 0018B280  38 80 28 4E */	li r4, 0x284e
/* 8018E344 0018B284  38 A0 00 00 */	li r5, 0
/* 8018E348 0018B288  4B FB A5 85 */	bl startSound__Q24Game4PikiFUlb
/* 8018E34C 0018B28C  38 00 00 02 */	li r0, 2
/* 8018E350 0018B290  C0 02 AA 64 */	lfs f0, lbl_80518DC4@sda21(r2)
/* 8018E354 0018B294  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8018E358 0018B298  7F C3 F3 78 */	mr r3, r30
/* 8018E35C 0018B29C  7F E4 FB 78 */	mr r4, r31
/* 8018E360 0018B2A0  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8018E364 0018B2A4  48 00 00 1D */	bl earthquake__Q24Game16PikiHipDropStateFPQ24Game4Piki
/* 8018E368 0018B2A8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8018E36C 0018B2AC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8018E370 0018B2B0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8018E374 0018B2B4  7C 08 03 A6 */	mtlr r0
/* 8018E378 0018B2B8  38 21 00 30 */	addi r1, r1, 0x30
/* 8018E37C 0018B2BC  4E 80 00 20 */	blr 
.endfn dosin__Q24Game16PikiHipDropStateFPQ24Game4Piki

.fn earthquake__Q24Game16PikiHipDropStateFPQ24Game4Piki, global
/* 8018E380 0018B2C0  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8018E384 0018B2C4  7C 08 02 A6 */	mflr r0
/* 8018E388 0018B2C8  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8018E38C 0018B2CC  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8018E390 0018B2D0  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8018E394 0018B2D4  93 E1 00 AC */	stw r31, 0xac(r1)
/* 8018E398 0018B2D8  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 8018E39C 0018B2DC  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 8018E3A0 0018B2E0  81 84 00 00 */	lwz r12, 0(r4)
/* 8018E3A4 0018B2E4  7C 9D 23 78 */	mr r29, r4
/* 8018E3A8 0018B2E8  38 61 00 08 */	addi r3, r1, 8
/* 8018E3AC 0018B2EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018E3B0 0018B2F0  7D 89 03 A6 */	mtctr r12
/* 8018E3B4 0018B2F4  4E 80 04 21 */	bctrl 
/* 8018E3B8 0018B2F8  80 AD 92 F4 */	lwz r5, pikiMgr__4Game@sda21(r13)
/* 8018E3BC 0018B2FC  38 61 00 30 */	addi r3, r1, 0x30
/* 8018E3C0 0018B300  C0 41 00 08 */	lfs f2, 8(r1)
/* 8018E3C4 0018B304  38 81 00 20 */	addi r4, r1, 0x20
/* 8018E3C8 0018B308  80 A5 00 6C */	lwz r5, 0x6c(r5)
/* 8018E3CC 0018B30C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8018E3D0 0018B310  C0 65 11 F0 */	lfs f3, 0x11f0(r5)
/* 8018E3D4 0018B314  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018E3D8 0018B318  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8018E3DC 0018B31C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8018E3E0 0018B320  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8018E3E4 0018B324  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 8018E3E8 0018B328  48 09 FF B9 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 8018E3EC 0018B32C  38 00 00 01 */	li r0, 1
/* 8018E3F0 0018B330  38 61 00 50 */	addi r3, r1, 0x50
/* 8018E3F4 0018B334  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018E3F8 0018B338  38 81 00 30 */	addi r4, r1, 0x30
/* 8018E3FC 0018B33C  48 09 FF E5 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 8018E400 0018B340  38 61 00 50 */	addi r3, r1, 0x50
/* 8018E404 0018B344  48 0A 00 59 */	bl first__Q24Game12CellIteratorFv
/* 8018E408 0018B348  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8018E40C 0018B34C  3C 60 80 4B */	lis r3, __vt__Q24Game18InteractEarthquake@ha
/* 8018E410 0018B350  C3 E2 AA 84 */	lfs f31, lbl_80518DE4@sda21(r2)
/* 8018E414 0018B354  3B C4 A3 00 */	addi r30, r4, __vt__Q24Game11Interaction@l
/* 8018E418 0018B358  3B E3 B3 44 */	addi r31, r3, __vt__Q24Game18InteractEarthquake@l
/* 8018E41C 0018B35C  48 00 00 38 */	b .L_8018E454
.L_8018E420:
/* 8018E420 0018B360  38 61 00 50 */	addi r3, r1, 0x50
/* 8018E424 0018B364  48 0A 01 21 */	bl __ml__Q24Game12CellIteratorFv
/* 8018E428 0018B368  93 C1 00 14 */	stw r30, 0x14(r1)
/* 8018E42C 0018B36C  38 81 00 14 */	addi r4, r1, 0x14
/* 8018E430 0018B370  93 A1 00 18 */	stw r29, 0x18(r1)
/* 8018E434 0018B374  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8018E438 0018B378  D3 E1 00 1C */	stfs f31, 0x1c(r1)
/* 8018E43C 0018B37C  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E440 0018B380  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8018E444 0018B384  7D 89 03 A6 */	mtctr r12
/* 8018E448 0018B388  4E 80 04 21 */	bctrl 
/* 8018E44C 0018B38C  38 61 00 50 */	addi r3, r1, 0x50
/* 8018E450 0018B390  48 0A 00 B1 */	bl next__Q24Game12CellIteratorFv
.L_8018E454:
/* 8018E454 0018B394  38 61 00 50 */	addi r3, r1, 0x50
/* 8018E458 0018B398  48 0A 00 DD */	bl isDone__Q24Game12CellIteratorFv
/* 8018E45C 0018B39C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018E460 0018B3A0  41 82 FF C0 */	beq .L_8018E420
/* 8018E464 0018B3A4  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 8018E468 0018B3A8  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8018E46C 0018B3AC  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8018E470 0018B3B0  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 8018E474 0018B3B4  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 8018E478 0018B3B8  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 8018E47C 0018B3BC  7C 08 03 A6 */	mtlr r0
/* 8018E480 0018B3C0  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8018E484 0018B3C4  4E 80 00 20 */	blr 
.endfn earthquake__Q24Game16PikiHipDropStateFPQ24Game4Piki

.fn init__Q24Game17PikiFallMeckStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018E488 0018B3C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018E48C 0018B3CC  7C 08 02 A6 */	mflr r0
/* 8018E490 0018B3D0  38 C0 00 00 */	li r6, 0
/* 8018E494 0018B3D4  38 E0 00 00 */	li r7, 0
/* 8018E498 0018B3D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018E49C 0018B3DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018E4A0 0018B3E0  7C BF 2B 78 */	mr r31, r5
/* 8018E4A4 0018B3E4  38 A0 00 09 */	li r5, 9
/* 8018E4A8 0018B3E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018E4AC 0018B3EC  7C 9E 23 78 */	mr r30, r4
/* 8018E4B0 0018B3F0  38 80 00 09 */	li r4, 9
/* 8018E4B4 0018B3F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8018E4B8 0018B3F8  7C 7D 1B 78 */	mr r29, r3
/* 8018E4BC 0018B3FC  7F C3 F3 78 */	mr r3, r30
/* 8018E4C0 0018B400  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018E4C4 0018B404  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018E4C8 0018B408  7D 89 03 A6 */	mtctr r12
/* 8018E4CC 0018B40C  4E 80 04 21 */	bctrl 
/* 8018E4D0 0018B410  7F C3 F3 78 */	mr r3, r30
/* 8018E4D4 0018B414  48 01 0F 51 */	bl endStick__Q24Game8CreatureFv
/* 8018E4D8 0018B418  28 1F 00 00 */	cmplwi r31, 0
/* 8018E4DC 0018B41C  41 82 00 10 */	beq .L_8018E4EC
/* 8018E4E0 0018B420  88 1F 00 00 */	lbz r0, 0(r31)
/* 8018E4E4 0018B424  98 1D 00 10 */	stb r0, 0x10(r29)
/* 8018E4E8 0018B428  48 00 00 0C */	b .L_8018E4F4
.L_8018E4EC:
/* 8018E4EC 0018B42C  38 00 00 00 */	li r0, 0
/* 8018E4F0 0018B430  98 1D 00 10 */	stb r0, 0x10(r29)
.L_8018E4F4:
/* 8018E4F4 0018B434  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018E4F8 0018B438  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018E4FC 0018B43C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018E500 0018B440  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8018E504 0018B444  7C 08 03 A6 */	mtlr r0
/* 8018E508 0018B448  38 21 00 20 */	addi r1, r1, 0x20
/* 8018E50C 0018B44C  4E 80 00 20 */	blr 
.endfn init__Q24Game17PikiFallMeckStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game17PikiFallMeckStateFPQ24Game4Piki, global
/* 8018E510 0018B450  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018E514 0018B454  7C 08 02 A6 */	mflr r0
/* 8018E518 0018B458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018E51C 0018B45C  80 A4 02 48 */	lwz r5, 0x248(r4)
/* 8018E520 0018B460  28 05 00 00 */	cmplwi r5, 0
/* 8018E524 0018B464  41 82 00 14 */	beq .L_8018E538
/* 8018E528 0018B468  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E52C 0018B46C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8018E530 0018B470  7D 89 03 A6 */	mtctr r12
/* 8018E534 0018B474  4E 80 04 21 */	bctrl 
.L_8018E538:
/* 8018E538 0018B478  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018E53C 0018B47C  7C 08 03 A6 */	mtlr r0
/* 8018E540 0018B480  38 21 00 10 */	addi r1, r1, 0x10
/* 8018E544 0018B484  4E 80 00 20 */	blr 
.endfn exec__Q24Game17PikiFallMeckStateFPQ24Game4Piki

.fn cleanup__Q24Game17PikiFallMeckStateFPQ24Game4Piki, global
/* 8018E548 0018B488  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game17PikiFallMeckStateFPQ24Game4Piki

.fn collisionCallback__Q24Game17PikiFallMeckStateFPQ24Game4PikiRQ24Game9CollEvent, global
/* 8018E54C 0018B48C  4E 80 00 20 */	blr 
.endfn collisionCallback__Q24Game17PikiFallMeckStateFPQ24Game4PikiRQ24Game9CollEvent

.fn platCallback__Q24Game17PikiFallMeckStateFPQ24Game4PikiRQ24Game9PlatEvent, global
/* 8018E550 0018B490  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018E554 0018B494  7C 08 02 A6 */	mflr r0
/* 8018E558 0018B498  38 A0 00 00 */	li r5, 0
/* 8018E55C 0018B49C  38 C0 00 00 */	li r6, 0
/* 8018E560 0018B4A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018E564 0018B4A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E568 0018B4A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018E56C 0018B4AC  7D 89 03 A6 */	mtctr r12
/* 8018E570 0018B4B0  4E 80 04 21 */	bctrl 
/* 8018E574 0018B4B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018E578 0018B4B8  7C 08 03 A6 */	mtlr r0
/* 8018E57C 0018B4BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8018E580 0018B4C0  4E 80 00 20 */	blr 
.endfn platCallback__Q24Game17PikiFallMeckStateFPQ24Game4PikiRQ24Game9PlatEvent

.fn bounceCallback__Q24Game17PikiFallMeckStateFPQ24Game4PikiPQ23Sys8Triangle, global
/* 8018E584 0018B4C4  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 8018E588 0018B4C8  7C 08 02 A6 */	mflr r0
/* 8018E58C 0018B4CC  90 01 01 04 */	stw r0, 0x104(r1)
/* 8018E590 0018B4D0  93 E1 00 FC */	stw r31, 0xfc(r1)
/* 8018E594 0018B4D4  93 C1 00 F8 */	stw r30, 0xf8(r1)
/* 8018E598 0018B4D8  7C 9E 23 78 */	mr r30, r4
/* 8018E59C 0018B4DC  93 A1 00 F4 */	stw r29, 0xf4(r1)
/* 8018E5A0 0018B4E0  7C 7D 1B 78 */	mr r29, r3
/* 8018E5A4 0018B4E4  88 03 00 10 */	lbz r0, 0x10(r3)
/* 8018E5A8 0018B4E8  28 00 00 00 */	cmplwi r0, 0
/* 8018E5AC 0018B4EC  41 82 02 68 */	beq .L_8018E814
/* 8018E5B0 0018B4F0  28 05 00 00 */	cmplwi r5, 0
/* 8018E5B4 0018B4F4  41 82 02 60 */	beq .L_8018E814
/* 8018E5B8 0018B4F8  80 0D 94 70 */	lwz r0, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 8018E5BC 0018B4FC  28 00 00 00 */	cmplwi r0, 0
/* 8018E5C0 0018B500  41 82 02 54 */	beq .L_8018E814
/* 8018E5C4 0018B504  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 8018E5C8 0018B508  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 8018E5CC 0018B50C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018E5D0 0018B510  7D 89 03 A6 */	mtctr r12
/* 8018E5D4 0018B514  4E 80 04 21 */	bctrl 
/* 8018E5D8 0018B518  2C 03 00 63 */	cmpwi r3, 0x63
/* 8018E5DC 0018B51C  41 80 00 0C */	blt .L_8018E5E8
/* 8018E5E0 0018B520  38 00 00 00 */	li r0, 0
/* 8018E5E4 0018B524  48 00 02 24 */	b .L_8018E808
.L_8018E5E8:
/* 8018E5E8 0018B528  38 00 00 01 */	li r0, 1
/* 8018E5EC 0018B52C  80 6D 94 70 */	lwz r3, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 8018E5F0 0018B530  90 0D 92 F8 */	stw r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
/* 8018E5F4 0018B534  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E5F8 0018B538  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8018E5FC 0018B53C  7D 89 03 A6 */	mtctr r12
/* 8018E600 0018B540  4E 80 04 21 */	bctrl 
/* 8018E604 0018B544  38 00 00 00 */	li r0, 0
/* 8018E608 0018B548  7C 7F 1B 78 */	mr r31, r3
/* 8018E60C 0018B54C  90 0D 92 F8 */	stw r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
/* 8018E610 0018B550  7F C4 F3 78 */	mr r4, r30
/* 8018E614 0018B554  38 61 00 68 */	addi r3, r1, 0x68
/* 8018E618 0018B558  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018E61C 0018B55C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018E620 0018B560  7D 89 03 A6 */	mtctr r12
/* 8018E624 0018B564  4E 80 04 21 */	bctrl 
/* 8018E628 0018B568  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 8018E62C 0018B56C  38 81 00 4C */	addi r4, r1, 0x4c
/* 8018E630 0018B570  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 8018E634 0018B574  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 8018E638 0018B578  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 8018E63C 0018B57C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8018E640 0018B580  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 8018E644 0018B584  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 8018E648 0018B588  81 83 00 04 */	lwz r12, 4(r3)
/* 8018E64C 0018B58C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8018E650 0018B590  7D 89 03 A6 */	mtctr r12
/* 8018E654 0018B594  4E 80 04 21 */	bctrl 
/* 8018E658 0018B598  28 1F 00 00 */	cmplwi r31, 0
/* 8018E65C 0018B59C  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 8018E660 0018B5A0  41 82 01 A4 */	beq .L_8018E804
/* 8018E664 0018B5A4  7F C3 F3 78 */	mr r3, r30
/* 8018E668 0018B5A8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018E66C 0018B5AC  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8018E670 0018B5B0  7D 89 03 A6 */	mtctr r12
/* 8018E674 0018B5B4  4E 80 04 21 */	bctrl 
/* 8018E678 0018B5B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018E67C 0018B5BC  41 82 00 A4 */	beq .L_8018E720
/* 8018E680 0018B5C0  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 8018E684 0018B5C4  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8018E688 0018B5C8  80 81 00 50 */	lwz r4, 0x50(r1)
/* 8018E68C 0018B5CC  39 45 A7 F8 */	addi r10, r5, __vt__Q23efx5TBase@l
/* 8018E690 0018B5D0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8018E694 0018B5D4  3C C0 80 4E */	lis r6, __vt__Q23efx8TSimple2@ha
/* 8018E698 0018B5D8  90 61 00 74 */	stw r3, 0x74(r1)
/* 8018E69C 0018B5DC  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8018E6A0 0018B5E0  38 A3 A7 EC */	addi r5, r3, __vt__Q23efx3Arg@l
/* 8018E6A4 0018B5E4  C0 02 AA C8 */	lfs f0, lbl_80518E28@sda21(r2)
/* 8018E6A8 0018B5E8  38 E0 00 00 */	li r7, 0
/* 8018E6AC 0018B5EC  90 81 00 78 */	stw r4, 0x78(r1)
/* 8018E6B0 0018B5F0  C0 61 00 74 */	lfs f3, 0x74(r1)
/* 8018E6B4 0018B5F4  3C 80 80 4F */	lis r4, __vt__Q23efx10TEnemyDive@ha
/* 8018E6B8 0018B5F8  90 01 00 7C */	stw r0, 0x7c(r1)
/* 8018E6BC 0018B5FC  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 8018E6C0 0018B600  C0 41 00 78 */	lfs f2, 0x78(r1)
/* 8018E6C4 0018B604  39 20 01 59 */	li r9, 0x159
/* 8018E6C8 0018B608  C0 21 00 7C */	lfs f1, 0x7c(r1)
/* 8018E6CC 0018B60C  39 00 01 5A */	li r8, 0x15a
/* 8018E6D0 0018B610  91 41 00 58 */	stw r10, 0x58(r1)
/* 8018E6D4 0018B614  39 46 6A 64 */	addi r10, r6, __vt__Q23efx8TSimple2@l
/* 8018E6D8 0018B618  38 C4 85 E8 */	addi r6, r4, __vt__Q23efx10TEnemyDive@l
/* 8018E6DC 0018B61C  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 8018E6E0 0018B620  91 41 00 58 */	stw r10, 0x58(r1)
/* 8018E6E4 0018B624  38 61 00 58 */	addi r3, r1, 0x58
/* 8018E6E8 0018B628  38 81 00 B4 */	addi r4, r1, 0xb4
/* 8018E6EC 0018B62C  90 A1 00 B4 */	stw r5, 0xb4(r1)
/* 8018E6F0 0018B630  B1 21 00 5C */	sth r9, 0x5c(r1)
/* 8018E6F4 0018B634  B1 01 00 5E */	sth r8, 0x5e(r1)
/* 8018E6F8 0018B638  90 E1 00 60 */	stw r7, 0x60(r1)
/* 8018E6FC 0018B63C  90 E1 00 64 */	stw r7, 0x64(r1)
/* 8018E700 0018B640  90 C1 00 58 */	stw r6, 0x58(r1)
/* 8018E704 0018B644  D0 61 00 B8 */	stfs f3, 0xb8(r1)
/* 8018E708 0018B648  D0 41 00 BC */	stfs f2, 0xbc(r1)
/* 8018E70C 0018B64C  D0 21 00 C0 */	stfs f1, 0xc0(r1)
/* 8018E710 0018B650  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8018E714 0018B654  D0 01 00 C4 */	stfs f0, 0xc4(r1)
/* 8018E718 0018B658  48 23 A1 C1 */	bl create__Q23efx10TEnemyDiveFPQ23efx3Arg
/* 8018E71C 0018B65C  48 00 00 1C */	b .L_8018E738
.L_8018E720:
/* 8018E720 0018B660  38 61 00 4C */	addi r3, r1, 0x4c
/* 8018E724 0018B664  48 22 90 89 */	bl "createSimplePkAp__3efxFR10Vector3<f>"
/* 8018E728 0018B668  7F C3 F3 78 */	mr r3, r30
/* 8018E72C 0018B66C  38 80 28 17 */	li r4, 0x2817
/* 8018E730 0018B670  38 A0 00 01 */	li r5, 1
/* 8018E734 0018B674  4B FB A1 99 */	bl startSound__Q24Game4PikiFUlb
.L_8018E738:
/* 8018E738 0018B678  88 FE 02 B8 */	lbz r7, 0x2b8(r30)
/* 8018E73C 0018B67C  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 8018E740 0018B680  38 03 A2 F4 */	addi r0, r3, __vt__Q24Game15CreatureInitArg@l
/* 8018E744 0018B684  3C A0 80 4B */	lis r5, __vt__Q24Game11ItemInitArg@ha
/* 8018E748 0018B688  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8018E74C 0018B68C  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 8018E750 0018B690  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 8018E754 0018B694  38 C5 2C 7C */	addi r6, r5, __vt__Q24Game11ItemInitArg@l
/* 8018E758 0018B698  C0 64 00 00 */	lfs f3, 0(r4)
/* 8018E75C 0018B69C  3C A0 80 4B */	lis r5, __vt__Q34Game12ItemPikihead7InitArg@ha
/* 8018E760 0018B6A0  C0 44 00 04 */	lfs f2, 4(r4)
/* 8018E764 0018B6A4  38 60 00 01 */	li r3, 1
/* 8018E768 0018B6A8  C0 24 00 08 */	lfs f1, 8(r4)
/* 8018E76C 0018B6AC  38 00 00 00 */	li r0, 0
/* 8018E770 0018B6B0  C0 02 AA 88 */	lfs f0, lbl_80518DE8@sda21(r2)
/* 8018E774 0018B6B4  38 85 2C 70 */	addi r4, r5, __vt__Q34Game12ItemPikihead7InitArg@l
/* 8018E778 0018B6B8  90 C1 00 C8 */	stw r6, 0xc8(r1)
/* 8018E77C 0018B6BC  90 81 00 C8 */	stw r4, 0xc8(r1)
/* 8018E780 0018B6C0  90 E1 00 CC */	stw r7, 0xcc(r1)
/* 8018E784 0018B6C4  D0 61 00 D0 */	stfs f3, 0xd0(r1)
/* 8018E788 0018B6C8  D0 41 00 D4 */	stfs f2, 0xd4(r1)
/* 8018E78C 0018B6CC  D0 21 00 D8 */	stfs f1, 0xd8(r1)
/* 8018E790 0018B6D0  98 61 00 DC */	stb r3, 0xdc(r1)
/* 8018E794 0018B6D4  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 8018E798 0018B6D8  D0 01 00 E4 */	stfs f0, 0xe4(r1)
/* 8018E79C 0018B6DC  88 1D 00 10 */	lbz r0, 0x10(r29)
/* 8018E7A0 0018B6E0  28 00 00 00 */	cmplwi r0, 0
/* 8018E7A4 0018B6E4  41 82 00 1C */	beq .L_8018E7C0
/* 8018E7A8 0018B6E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018E7AC 0018B6EC  C0 42 AA 70 */	lfs f2, lbl_80518DD0@sda21(r2)
/* 8018E7B0 0018B6F0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018E7B4 0018B6F4  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018E7B8 0018B6F8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8018E7BC 0018B6FC  D0 01 00 E4 */	stfs f0, 0xe4(r1)
.L_8018E7C0:
/* 8018E7C0 0018B700  7F E3 FB 78 */	mr r3, r31
/* 8018E7C4 0018B704  38 81 00 C8 */	addi r4, r1, 0xc8
/* 8018E7C8 0018B708  4B FA C8 01 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8018E7CC 0018B70C  7F E3 FB 78 */	mr r3, r31
/* 8018E7D0 0018B710  38 81 00 4C */	addi r4, r1, 0x4c
/* 8018E7D4 0018B714  38 A0 00 00 */	li r5, 0
/* 8018E7D8 0018B718  4B FA C9 D1 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8018E7DC 0018B71C  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureKillArg@ha
/* 8018E7E0 0018B720  38 00 00 01 */	li r0, 1
/* 8018E7E4 0018B724  38 A3 A2 D0 */	addi r5, r3, __vt__Q24Game15CreatureKillArg@l
/* 8018E7E8 0018B728  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018E7EC 0018B72C  7F C3 F3 78 */	mr r3, r30
/* 8018E7F0 0018B730  38 81 00 10 */	addi r4, r1, 0x10
/* 8018E7F4 0018B734  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8018E7F8 0018B738  4B FA C8 F9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8018E7FC 0018B73C  38 00 00 01 */	li r0, 1
/* 8018E800 0018B740  48 00 00 08 */	b .L_8018E808
.L_8018E804:
/* 8018E804 0018B744  38 00 00 00 */	li r0, 0
.L_8018E808:
/* 8018E808 0018B748  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8018E80C 0018B74C  41 82 02 88 */	beq .L_8018EA94
/* 8018E810 0018B750  48 00 02 A4 */	b .L_8018EAB4
.L_8018E814:
/* 8018E814 0018B754  28 05 00 00 */	cmplwi r5, 0
/* 8018E818 0018B758  41 82 02 7C */	beq .L_8018EA94
/* 8018E81C 0018B75C  38 65 00 5C */	addi r3, r5, 0x5c
/* 8018E820 0018B760  48 28 DC 2D */	bl isBald__Q27MapCode4CodeFv
/* 8018E824 0018B764  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018E828 0018B768  40 82 02 6C */	bne .L_8018EA94
/* 8018E82C 0018B76C  7F C3 F3 78 */	mr r3, r30
/* 8018E830 0018B770  4B FB A5 55 */	bl might_bury__Q24Game4PikiFv
/* 8018E834 0018B774  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018E838 0018B778  41 82 02 5C */	beq .L_8018EA94
/* 8018E83C 0018B77C  80 0D 94 70 */	lwz r0, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 8018E840 0018B780  28 00 00 00 */	cmplwi r0, 0
/* 8018E844 0018B784  41 82 02 50 */	beq .L_8018EA94
/* 8018E848 0018B788  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 8018E84C 0018B78C  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 8018E850 0018B790  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018E854 0018B794  7D 89 03 A6 */	mtctr r12
/* 8018E858 0018B798  4E 80 04 21 */	bctrl 
/* 8018E85C 0018B79C  2C 03 00 63 */	cmpwi r3, 0x63
/* 8018E860 0018B7A0  41 80 00 0C */	blt .L_8018E86C
/* 8018E864 0018B7A4  38 00 00 00 */	li r0, 0
/* 8018E868 0018B7A8  48 00 02 24 */	b .L_8018EA8C
.L_8018E86C:
/* 8018E86C 0018B7AC  38 00 00 01 */	li r0, 1
/* 8018E870 0018B7B0  80 6D 94 70 */	lwz r3, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 8018E874 0018B7B4  90 0D 92 F8 */	stw r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
/* 8018E878 0018B7B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E87C 0018B7BC  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8018E880 0018B7C0  7D 89 03 A6 */	mtctr r12
/* 8018E884 0018B7C4  4E 80 04 21 */	bctrl 
/* 8018E888 0018B7C8  38 00 00 00 */	li r0, 0
/* 8018E88C 0018B7CC  7C 7F 1B 78 */	mr r31, r3
/* 8018E890 0018B7D0  90 0D 92 F8 */	stw r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
/* 8018E894 0018B7D4  7F C4 F3 78 */	mr r4, r30
/* 8018E898 0018B7D8  38 61 00 34 */	addi r3, r1, 0x34
/* 8018E89C 0018B7DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018E8A0 0018B7E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018E8A4 0018B7E4  7D 89 03 A6 */	mtctr r12
/* 8018E8A8 0018B7E8  4E 80 04 21 */	bctrl 
/* 8018E8AC 0018B7EC  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 8018E8B0 0018B7F0  38 81 00 18 */	addi r4, r1, 0x18
/* 8018E8B4 0018B7F4  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8018E8B8 0018B7F8  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8018E8BC 0018B7FC  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8018E8C0 0018B800  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8018E8C4 0018B804  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8018E8C8 0018B808  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8018E8CC 0018B80C  81 83 00 04 */	lwz r12, 4(r3)
/* 8018E8D0 0018B810  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8018E8D4 0018B814  7D 89 03 A6 */	mtctr r12
/* 8018E8D8 0018B818  4E 80 04 21 */	bctrl 
/* 8018E8DC 0018B81C  28 1F 00 00 */	cmplwi r31, 0
/* 8018E8E0 0018B820  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8018E8E4 0018B824  41 82 01 A4 */	beq .L_8018EA88
/* 8018E8E8 0018B828  7F C3 F3 78 */	mr r3, r30
/* 8018E8EC 0018B82C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018E8F0 0018B830  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8018E8F4 0018B834  7D 89 03 A6 */	mtctr r12
/* 8018E8F8 0018B838  4E 80 04 21 */	bctrl 
/* 8018E8FC 0018B83C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018E900 0018B840  41 82 00 A4 */	beq .L_8018E9A4
/* 8018E904 0018B844  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8018E908 0018B848  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 8018E90C 0018B84C  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8018E910 0018B850  39 45 A7 F8 */	addi r10, r5, __vt__Q23efx5TBase@l
/* 8018E914 0018B854  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8018E918 0018B858  3C C0 80 4E */	lis r6, __vt__Q23efx8TSimple2@ha
/* 8018E91C 0018B85C  90 61 00 40 */	stw r3, 0x40(r1)
/* 8018E920 0018B860  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 8018E924 0018B864  38 A3 A7 EC */	addi r5, r3, __vt__Q23efx3Arg@l
/* 8018E928 0018B868  C0 02 AA C8 */	lfs f0, lbl_80518E28@sda21(r2)
/* 8018E92C 0018B86C  38 E0 00 00 */	li r7, 0
/* 8018E930 0018B870  90 81 00 44 */	stw r4, 0x44(r1)
/* 8018E934 0018B874  C0 61 00 40 */	lfs f3, 0x40(r1)
/* 8018E938 0018B878  3C 80 80 4F */	lis r4, __vt__Q23efx10TEnemyDive@ha
/* 8018E93C 0018B87C  90 01 00 48 */	stw r0, 0x48(r1)
/* 8018E940 0018B880  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 8018E944 0018B884  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 8018E948 0018B888  39 20 01 59 */	li r9, 0x159
/* 8018E94C 0018B88C  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 8018E950 0018B890  39 00 01 5A */	li r8, 0x15a
/* 8018E954 0018B894  91 41 00 24 */	stw r10, 0x24(r1)
/* 8018E958 0018B898  39 46 6A 64 */	addi r10, r6, __vt__Q23efx8TSimple2@l
/* 8018E95C 0018B89C  38 C4 85 E8 */	addi r6, r4, __vt__Q23efx10TEnemyDive@l
/* 8018E960 0018B8A0  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 8018E964 0018B8A4  91 41 00 24 */	stw r10, 0x24(r1)
/* 8018E968 0018B8A8  38 61 00 24 */	addi r3, r1, 0x24
/* 8018E96C 0018B8AC  38 81 00 80 */	addi r4, r1, 0x80
/* 8018E970 0018B8B0  90 A1 00 80 */	stw r5, 0x80(r1)
/* 8018E974 0018B8B4  B1 21 00 28 */	sth r9, 0x28(r1)
/* 8018E978 0018B8B8  B1 01 00 2A */	sth r8, 0x2a(r1)
/* 8018E97C 0018B8BC  90 E1 00 2C */	stw r7, 0x2c(r1)
/* 8018E980 0018B8C0  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8018E984 0018B8C4  90 C1 00 24 */	stw r6, 0x24(r1)
/* 8018E988 0018B8C8  D0 61 00 84 */	stfs f3, 0x84(r1)
/* 8018E98C 0018B8CC  D0 41 00 88 */	stfs f2, 0x88(r1)
/* 8018E990 0018B8D0  D0 21 00 8C */	stfs f1, 0x8c(r1)
/* 8018E994 0018B8D4  90 01 00 80 */	stw r0, 0x80(r1)
/* 8018E998 0018B8D8  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 8018E99C 0018B8DC  48 23 9F 3D */	bl create__Q23efx10TEnemyDiveFPQ23efx3Arg
/* 8018E9A0 0018B8E0  48 00 00 1C */	b .L_8018E9BC
.L_8018E9A4:
/* 8018E9A4 0018B8E4  38 61 00 18 */	addi r3, r1, 0x18
/* 8018E9A8 0018B8E8  48 22 8E 05 */	bl "createSimplePkAp__3efxFR10Vector3<f>"
/* 8018E9AC 0018B8EC  7F C3 F3 78 */	mr r3, r30
/* 8018E9B0 0018B8F0  38 80 28 17 */	li r4, 0x2817
/* 8018E9B4 0018B8F4  38 A0 00 01 */	li r5, 1
/* 8018E9B8 0018B8F8  4B FB 9F 15 */	bl startSound__Q24Game4PikiFUlb
.L_8018E9BC:
/* 8018E9BC 0018B8FC  88 FE 02 B8 */	lbz r7, 0x2b8(r30)
/* 8018E9C0 0018B900  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 8018E9C4 0018B904  38 03 A2 F4 */	addi r0, r3, __vt__Q24Game15CreatureInitArg@l
/* 8018E9C8 0018B908  3C A0 80 4B */	lis r5, __vt__Q24Game11ItemInitArg@ha
/* 8018E9CC 0018B90C  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8018E9D0 0018B910  90 01 00 94 */	stw r0, 0x94(r1)
/* 8018E9D4 0018B914  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 8018E9D8 0018B918  38 C5 2C 7C */	addi r6, r5, __vt__Q24Game11ItemInitArg@l
/* 8018E9DC 0018B91C  C0 64 00 00 */	lfs f3, 0(r4)
/* 8018E9E0 0018B920  3C A0 80 4B */	lis r5, __vt__Q34Game12ItemPikihead7InitArg@ha
/* 8018E9E4 0018B924  C0 44 00 04 */	lfs f2, 4(r4)
/* 8018E9E8 0018B928  38 60 00 01 */	li r3, 1
/* 8018E9EC 0018B92C  C0 24 00 08 */	lfs f1, 8(r4)
/* 8018E9F0 0018B930  38 00 00 00 */	li r0, 0
/* 8018E9F4 0018B934  C0 02 AA 88 */	lfs f0, lbl_80518DE8@sda21(r2)
/* 8018E9F8 0018B938  38 85 2C 70 */	addi r4, r5, __vt__Q34Game12ItemPikihead7InitArg@l
/* 8018E9FC 0018B93C  90 C1 00 94 */	stw r6, 0x94(r1)
/* 8018EA00 0018B940  90 81 00 94 */	stw r4, 0x94(r1)
/* 8018EA04 0018B944  90 E1 00 98 */	stw r7, 0x98(r1)
/* 8018EA08 0018B948  D0 61 00 9C */	stfs f3, 0x9c(r1)
/* 8018EA0C 0018B94C  D0 41 00 A0 */	stfs f2, 0xa0(r1)
/* 8018EA10 0018B950  D0 21 00 A4 */	stfs f1, 0xa4(r1)
/* 8018EA14 0018B954  98 61 00 A8 */	stb r3, 0xa8(r1)
/* 8018EA18 0018B958  90 01 00 AC */	stw r0, 0xac(r1)
/* 8018EA1C 0018B95C  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 8018EA20 0018B960  88 1D 00 10 */	lbz r0, 0x10(r29)
/* 8018EA24 0018B964  28 00 00 00 */	cmplwi r0, 0
/* 8018EA28 0018B968  41 82 00 1C */	beq .L_8018EA44
/* 8018EA2C 0018B96C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018EA30 0018B970  C0 42 AA 70 */	lfs f2, lbl_80518DD0@sda21(r2)
/* 8018EA34 0018B974  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018EA38 0018B978  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018EA3C 0018B97C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8018EA40 0018B980  D0 01 00 B0 */	stfs f0, 0xb0(r1)
.L_8018EA44:
/* 8018EA44 0018B984  7F E3 FB 78 */	mr r3, r31
/* 8018EA48 0018B988  38 81 00 94 */	addi r4, r1, 0x94
/* 8018EA4C 0018B98C  4B FA C5 7D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8018EA50 0018B990  7F E3 FB 78 */	mr r3, r31
/* 8018EA54 0018B994  38 81 00 18 */	addi r4, r1, 0x18
/* 8018EA58 0018B998  38 A0 00 00 */	li r5, 0
/* 8018EA5C 0018B99C  4B FA C7 4D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8018EA60 0018B9A0  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureKillArg@ha
/* 8018EA64 0018B9A4  38 00 00 01 */	li r0, 1
/* 8018EA68 0018B9A8  38 A3 A2 D0 */	addi r5, r3, __vt__Q24Game15CreatureKillArg@l
/* 8018EA6C 0018B9AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8018EA70 0018B9B0  7F C3 F3 78 */	mr r3, r30
/* 8018EA74 0018B9B4  38 81 00 08 */	addi r4, r1, 8
/* 8018EA78 0018B9B8  90 A1 00 08 */	stw r5, 8(r1)
/* 8018EA7C 0018B9BC  4B FA C6 75 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8018EA80 0018B9C0  38 00 00 01 */	li r0, 1
/* 8018EA84 0018B9C4  48 00 00 08 */	b .L_8018EA8C
.L_8018EA88:
/* 8018EA88 0018B9C8  38 00 00 00 */	li r0, 0
.L_8018EA8C:
/* 8018EA8C 0018B9CC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8018EA90 0018B9D0  40 82 00 24 */	bne .L_8018EAB4
.L_8018EA94:
/* 8018EA94 0018B9D4  7F A3 EB 78 */	mr r3, r29
/* 8018EA98 0018B9D8  7F C4 F3 78 */	mr r4, r30
/* 8018EA9C 0018B9DC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018EAA0 0018B9E0  38 A0 00 00 */	li r5, 0
/* 8018EAA4 0018B9E4  38 C0 00 00 */	li r6, 0
/* 8018EAA8 0018B9E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018EAAC 0018B9EC  7D 89 03 A6 */	mtctr r12
/* 8018EAB0 0018B9F0  4E 80 04 21 */	bctrl 
.L_8018EAB4:
/* 8018EAB4 0018B9F4  80 01 01 04 */	lwz r0, 0x104(r1)
/* 8018EAB8 0018B9F8  83 E1 00 FC */	lwz r31, 0xfc(r1)
/* 8018EABC 0018B9FC  83 C1 00 F8 */	lwz r30, 0xf8(r1)
/* 8018EAC0 0018BA00  83 A1 00 F4 */	lwz r29, 0xf4(r1)
/* 8018EAC4 0018BA04  7C 08 03 A6 */	mtlr r0
/* 8018EAC8 0018BA08  38 21 01 00 */	addi r1, r1, 0x100
/* 8018EACC 0018BA0C  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game17PikiFallMeckStateFPQ24Game4PikiPQ23Sys8Triangle

.fn init__Q24Game16PikiSuikomiStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018EAD0 0018BA10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018EAD4 0018BA14  7C 08 02 A6 */	mflr r0
/* 8018EAD8 0018BA18  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018EADC 0018BA1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018EAE0 0018BA20  7C BF 2B 79 */	or. r31, r5, r5
/* 8018EAE4 0018BA24  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018EAE8 0018BA28  7C 9E 23 78 */	mr r30, r4
/* 8018EAEC 0018BA2C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8018EAF0 0018BA30  7C 7D 1B 78 */	mr r29, r3
/* 8018EAF4 0018BA34  40 82 00 20 */	bne .L_8018EB14
/* 8018EAF8 0018BA38  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 8018EAFC 0018BA3C  3C A0 80 48 */	lis r5, lbl_8047ECDC@ha
/* 8018EB00 0018BA40  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 8018EB04 0018BA44  38 80 0A 0C */	li r4, 0xa0c
/* 8018EB08 0018BA48  38 A5 EC DC */	addi r5, r5, lbl_8047ECDC@l
/* 8018EB0C 0018BA4C  4C C6 31 82 */	crclr 6
/* 8018EB10 0018BA50  4B E9 BB 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018EB14:
/* 8018EB14 0018BA54  80 BF 00 00 */	lwz r5, 0(r31)
/* 8018EB18 0018BA58  38 00 00 00 */	li r0, 0
/* 8018EB1C 0018BA5C  7F C3 F3 78 */	mr r3, r30
/* 8018EB20 0018BA60  38 80 00 00 */	li r4, 0
/* 8018EB24 0018BA64  90 BD 00 14 */	stw r5, 0x14(r29)
/* 8018EB28 0018BA68  80 BF 00 04 */	lwz r5, 4(r31)
/* 8018EB2C 0018BA6C  90 BD 00 18 */	stw r5, 0x18(r29)
/* 8018EB30 0018BA70  80 BF 00 08 */	lwz r5, 8(r31)
/* 8018EB34 0018BA74  90 BD 00 1C */	stw r5, 0x1c(r29)
/* 8018EB38 0018BA78  98 1D 00 10 */	stb r0, 0x10(r29)
/* 8018EB3C 0018BA7C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018EB40 0018BA80  81 8C 01 E8 */	lwz r12, 0x1e8(r12)
/* 8018EB44 0018BA84  7D 89 03 A6 */	mtctr r12
/* 8018EB48 0018BA88  4E 80 04 21 */	bctrl 
/* 8018EB4C 0018BA8C  7F C3 F3 78 */	mr r3, r30
/* 8018EB50 0018BA90  48 01 08 D5 */	bl endStick__Q24Game8CreatureFv
/* 8018EB54 0018BA94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018EB58 0018BA98  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018EB5C 0018BA9C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018EB60 0018BAA0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8018EB64 0018BAA4  7C 08 03 A6 */	mtlr r0
/* 8018EB68 0018BAA8  38 21 00 20 */	addi r1, r1, 0x20
/* 8018EB6C 0018BAAC  4E 80 00 20 */	blr 
.endfn init__Q24Game16PikiSuikomiStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game16PikiSuikomiStateFPQ24Game4Piki, global
/* 8018EB70 0018BAB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018EB74 0018BAB4  7C 08 02 A6 */	mflr r0
/* 8018EB78 0018BAB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018EB7C 0018BABC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018EB80 0018BAC0  7C 9F 23 78 */	mr r31, r4
/* 8018EB84 0018BAC4  93 C1 00 08 */	stw r30, 8(r1)
/* 8018EB88 0018BAC8  7C 7E 1B 78 */	mr r30, r3
/* 8018EB8C 0018BACC  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8018EB90 0018BAD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8018EB94 0018BAD4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8018EB98 0018BAD8  7D 89 03 A6 */	mtctr r12
/* 8018EB9C 0018BADC  4E 80 04 21 */	bctrl 
/* 8018EBA0 0018BAE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018EBA4 0018BAE4  40 82 00 60 */	bne .L_8018EC04
/* 8018EBA8 0018BAE8  7F E3 FB 78 */	mr r3, r31
/* 8018EBAC 0018BAEC  4B FB B9 ED */	bl getBaseScale__Q24Game4PikiFv
/* 8018EBB0 0018BAF0  D0 3F 01 68 */	stfs f1, 0x168(r31)
/* 8018EBB4 0018BAF4  7F E3 FB 78 */	mr r3, r31
/* 8018EBB8 0018BAF8  38 80 00 1D */	li r4, 0x1d
/* 8018EBBC 0018BAFC  38 A0 00 1D */	li r5, 0x1d
/* 8018EBC0 0018BB00  D0 3F 01 6C */	stfs f1, 0x16c(r31)
/* 8018EBC4 0018BB04  38 C0 00 00 */	li r6, 0
/* 8018EBC8 0018BB08  38 E0 00 00 */	li r7, 0
/* 8018EBCC 0018BB0C  D0 3F 01 70 */	stfs f1, 0x170(r31)
/* 8018EBD0 0018BB10  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018EBD4 0018BB14  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018EBD8 0018BB18  7D 89 03 A6 */	mtctr r12
/* 8018EBDC 0018BB1C  4E 80 04 21 */	bctrl 
/* 8018EBE0 0018BB20  7F C3 F3 78 */	mr r3, r30
/* 8018EBE4 0018BB24  7F E4 FB 78 */	mr r4, r31
/* 8018EBE8 0018BB28  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018EBEC 0018BB2C  38 A0 00 00 */	li r5, 0
/* 8018EBF0 0018BB30  38 C0 00 00 */	li r6, 0
/* 8018EBF4 0018BB34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018EBF8 0018BB38  7D 89 03 A6 */	mtctr r12
/* 8018EBFC 0018BB3C  4E 80 04 21 */	bctrl 
/* 8018EC00 0018BB40  48 00 00 44 */	b .L_8018EC44
.L_8018EC04:
/* 8018EC04 0018BB44  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 8018EC08 0018BB48  28 00 00 00 */	cmplwi r0, 0
/* 8018EC0C 0018BB4C  40 82 00 14 */	bne .L_8018EC20
/* 8018EC10 0018BB50  7F C3 F3 78 */	mr r3, r30
/* 8018EC14 0018BB54  7F E4 FB 78 */	mr r4, r31
/* 8018EC18 0018BB58  48 00 00 45 */	bl execMouth__Q24Game16PikiSuikomiStateFPQ24Game4Piki
/* 8018EC1C 0018BB5C  48 00 00 28 */	b .L_8018EC44
.L_8018EC20:
/* 8018EC20 0018BB60  28 00 00 01 */	cmplwi r0, 1
/* 8018EC24 0018BB64  40 82 00 14 */	bne .L_8018EC38
/* 8018EC28 0018BB68  7F C3 F3 78 */	mr r3, r30
/* 8018EC2C 0018BB6C  7F E4 FB 78 */	mr r4, r31
/* 8018EC30 0018BB70  48 00 02 61 */	bl execString__Q24Game16PikiSuikomiStateFPQ24Game4Piki
/* 8018EC34 0018BB74  48 00 00 10 */	b .L_8018EC44
.L_8018EC38:
/* 8018EC38 0018BB78  7F C3 F3 78 */	mr r3, r30
/* 8018EC3C 0018BB7C  7F E4 FB 78 */	mr r4, r31
/* 8018EC40 0018BB80  48 00 03 6D */	bl execStomach__Q24Game16PikiSuikomiStateFPQ24Game4Piki
.L_8018EC44:
/* 8018EC44 0018BB84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018EC48 0018BB88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018EC4C 0018BB8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018EC50 0018BB90  7C 08 03 A6 */	mtlr r0
/* 8018EC54 0018BB94  38 21 00 10 */	addi r1, r1, 0x10
/* 8018EC58 0018BB98  4E 80 00 20 */	blr 
.endfn exec__Q24Game16PikiSuikomiStateFPQ24Game4Piki

.fn execMouth__Q24Game16PikiSuikomiStateFPQ24Game4Piki, global
/* 8018EC5C 0018BB9C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8018EC60 0018BBA0  7C 08 02 A6 */	mflr r0
/* 8018EC64 0018BBA4  90 01 00 74 */	stw r0, 0x74(r1)
/* 8018EC68 0018BBA8  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8018EC6C 0018BBAC  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8018EC70 0018BBB0  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8018EC74 0018BBB4  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8018EC78 0018BBB8  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8018EC7C 0018BBBC  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 8018EC80 0018BBC0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8018EC84 0018BBC4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8018EC88 0018BBC8  7C 7E 1B 78 */	mr r30, r3
/* 8018EC8C 0018BBCC  7C 9F 23 78 */	mr r31, r4
/* 8018EC90 0018BBD0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8018EC94 0018BBD4  28 03 00 00 */	cmplwi r3, 0
/* 8018EC98 0018BBD8  40 82 00 20 */	bne .L_8018ECB8
/* 8018EC9C 0018BBDC  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 8018ECA0 0018BBE0  C3 C3 00 50 */	lfs f30, 0x50(r3)
/* 8018ECA4 0018BBE4  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8018ECA8 0018BBE8  C3 E3 00 4C */	lfs f31, 0x4c(r3)
/* 8018ECAC 0018BBEC  EF DE 00 28 */	fsubs f30, f30, f0
/* 8018ECB0 0018BBF0  C3 A3 00 54 */	lfs f29, 0x54(r3)
/* 8018ECB4 0018BBF4  48 00 00 18 */	b .L_8018ECCC
.L_8018ECB8:
/* 8018ECB8 0018BBF8  38 81 00 14 */	addi r4, r1, 0x14
/* 8018ECBC 0018BBFC  4B FA 95 BD */	bl getTube__8CollPartFRQ23Sys4Tube
/* 8018ECC0 0018BC00  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 8018ECC4 0018BC04  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 8018ECC8 0018BC08  C3 A1 00 1C */	lfs f29, 0x1c(r1)
.L_8018ECCC:
/* 8018ECCC 0018BC0C  7F E4 FB 78 */	mr r4, r31
/* 8018ECD0 0018BC10  38 61 00 08 */	addi r3, r1, 8
/* 8018ECD4 0018BC14  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018ECD8 0018BC18  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018ECDC 0018BC1C  7D 89 03 A6 */	mtctr r12
/* 8018ECE0 0018BC20  4E 80 04 21 */	bctrl 
/* 8018ECE4 0018BC24  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8018ECE8 0018BC28  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8018ECEC 0018BC2C  EC 7E 00 28 */	fsubs f3, f30, f0
/* 8018ECF0 0018BC30  C0 21 00 08 */	lfs f1, 8(r1)
/* 8018ECF4 0018BC34  EC 9D 10 28 */	fsubs f4, f29, f2
/* 8018ECF8 0018BC38  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018ECFC 0018BC3C  EC 5F 08 28 */	fsubs f2, f31, f1
/* 8018ED00 0018BC40  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8018ED04 0018BC44  EC A4 01 32 */	fmuls f5, f4, f4
/* 8018ED08 0018BC48  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8018ED0C 0018BC4C  EC 25 08 2A */	fadds f1, f5, f1
/* 8018ED10 0018BC50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018ED14 0018BC54  40 81 00 14 */	ble .L_8018ED28
/* 8018ED18 0018BC58  40 81 00 14 */	ble .L_8018ED2C
/* 8018ED1C 0018BC5C  FC 00 08 34 */	frsqrte f0, f1
/* 8018ED20 0018BC60  EC 20 00 72 */	fmuls f1, f0, f1
/* 8018ED24 0018BC64  48 00 00 08 */	b .L_8018ED2C
.L_8018ED28:
/* 8018ED28 0018BC68  FC 20 00 90 */	fmr f1, f0
.L_8018ED2C:
/* 8018ED2C 0018BC6C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018ED30 0018BC70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018ED34 0018BC74  40 81 00 1C */	ble .L_8018ED50
/* 8018ED38 0018BC78  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 8018ED3C 0018BC7C  EC 00 08 24 */	fdivs f0, f0, f1
/* 8018ED40 0018BC80  EC 42 00 32 */	fmuls f2, f2, f0
/* 8018ED44 0018BC84  EC 63 00 32 */	fmuls f3, f3, f0
/* 8018ED48 0018BC88  EC 84 00 32 */	fmuls f4, f4, f0
/* 8018ED4C 0018BC8C  48 00 00 08 */	b .L_8018ED54
.L_8018ED50:
/* 8018ED50 0018BC90  FC 20 00 90 */	fmr f1, f0
.L_8018ED54:
/* 8018ED54 0018BC94  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018ED58 0018BC98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018ED5C 0018BC9C  40 80 00 B0 */	bge .L_8018EE0C
/* 8018ED60 0018BCA0  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 8018ED64 0018BCA4  28 05 00 00 */	cmplwi r5, 0
/* 8018ED68 0018BCA8  40 82 00 74 */	bne .L_8018EDDC
/* 8018ED6C 0018BCAC  7F E3 FB 78 */	mr r3, r31
/* 8018ED70 0018BCB0  38 80 00 01 */	li r4, 1
/* 8018ED74 0018BCB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018ED78 0018BCB8  81 8C 01 E8 */	lwz r12, 0x1e8(r12)
/* 8018ED7C 0018BCBC  7D 89 03 A6 */	mtctr r12
/* 8018ED80 0018BCC0  4E 80 04 21 */	bctrl 
/* 8018ED84 0018BCC4  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 8018ED88 0018BCC8  7F E3 FB 78 */	mr r3, r31
/* 8018ED8C 0018BCCC  4B FB 05 D9 */	bl startCaptureStomach__Q24Game8FakePikiFP8CollPart
/* 8018ED90 0018BCD0  38 00 00 02 */	li r0, 2
/* 8018ED94 0018BCD4  28 1F 00 00 */	cmplwi r31, 0
/* 8018ED98 0018BCD8  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8018ED9C 0018BCDC  7F E6 FB 78 */	mr r6, r31
/* 8018EDA0 0018BCE0  41 82 00 08 */	beq .L_8018EDA8
/* 8018EDA4 0018BCE4  38 DF 01 78 */	addi r6, r31, 0x178
.L_8018EDA8:
/* 8018EDA8 0018BCE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018EDAC 0018BCEC  7F E3 FB 78 */	mr r3, r31
/* 8018EDB0 0018BCF0  38 80 00 08 */	li r4, 8
/* 8018EDB4 0018BCF4  38 A0 00 08 */	li r5, 8
/* 8018EDB8 0018BCF8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018EDBC 0018BCFC  38 E0 00 00 */	li r7, 0
/* 8018EDC0 0018BD00  7D 89 03 A6 */	mtctr r12
/* 8018EDC4 0018BD04  4E 80 04 21 */	bctrl 
/* 8018EDC8 0018BD08  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8018EDCC 0018BD0C  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8018EDD0 0018BD10  C0 03 11 C8 */	lfs f0, 0x11c8(r3)
/* 8018EDD4 0018BD14  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8018EDD8 0018BD18  48 00 00 50 */	b .L_8018EE28
.L_8018EDDC:
/* 8018EDDC 0018BD1C  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 8018EDE0 0018BD20  7F E3 FB 78 */	mr r3, r31
/* 8018EDE4 0018BD24  48 01 01 11 */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 8018EDE8 0018BD28  7F E3 FB 78 */	mr r3, r31
/* 8018EDEC 0018BD2C  38 80 00 01 */	li r4, 1
/* 8018EDF0 0018BD30  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018EDF4 0018BD34  81 8C 01 E8 */	lwz r12, 0x1e8(r12)
/* 8018EDF8 0018BD38  7D 89 03 A6 */	mtctr r12
/* 8018EDFC 0018BD3C  4E 80 04 21 */	bctrl 
/* 8018EE00 0018BD40  38 00 00 01 */	li r0, 1
/* 8018EE04 0018BD44  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8018EE08 0018BD48  48 00 00 20 */	b .L_8018EE28
.L_8018EE0C:
/* 8018EE0C 0018BD4C  C0 02 AB 08 */	lfs f0, lbl_80518E68@sda21(r2)
/* 8018EE10 0018BD50  EC 42 00 32 */	fmuls f2, f2, f0
/* 8018EE14 0018BD54  EC 23 00 32 */	fmuls f1, f3, f0
/* 8018EE18 0018BD58  EC 04 00 32 */	fmuls f0, f4, f0
/* 8018EE1C 0018BD5C  D0 5F 02 00 */	stfs f2, 0x200(r31)
/* 8018EE20 0018BD60  D0 3F 02 04 */	stfs f1, 0x204(r31)
/* 8018EE24 0018BD64  D0 1F 02 08 */	stfs f0, 0x208(r31)
.L_8018EE28:
/* 8018EE28 0018BD68  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8018EE2C 0018BD6C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8018EE30 0018BD70  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8018EE34 0018BD74  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8018EE38 0018BD78  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 8018EE3C 0018BD7C  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8018EE40 0018BD80  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8018EE44 0018BD84  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8018EE48 0018BD88  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8018EE4C 0018BD8C  7C 08 03 A6 */	mtlr r0
/* 8018EE50 0018BD90  38 21 00 70 */	addi r1, r1, 0x70
/* 8018EE54 0018BD94  4E 80 00 20 */	blr 
.endfn execMouth__Q24Game16PikiSuikomiStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game16PikiSuikomiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 8018EE58 0018BD98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018EE5C 0018BD9C  7C 08 02 A6 */	mflr r0
/* 8018EE60 0018BDA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018EE64 0018BDA4  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8018EE68 0018BDA8  28 00 00 00 */	cmplwi r0, 0
/* 8018EE6C 0018BDAC  40 82 00 14 */	bne .L_8018EE80
/* 8018EE70 0018BDB0  7C 83 23 78 */	mr r3, r4
/* 8018EE74 0018BDB4  38 80 28 49 */	li r4, 0x2849
/* 8018EE78 0018BDB8  38 A0 00 04 */	li r5, 4
/* 8018EE7C 0018BDBC  4B FB 9A 91 */	bl startSound__Q24Game4PikiFUlQ36PSGame5SeMgr7SetSeId
.L_8018EE80:
/* 8018EE80 0018BDC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018EE84 0018BDC4  7C 08 03 A6 */	mtlr r0
/* 8018EE88 0018BDC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8018EE8C 0018BDCC  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game16PikiSuikomiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn execString__Q24Game16PikiSuikomiStateFPQ24Game4Piki, global
/* 8018EE90 0018BDD0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8018EE94 0018BDD4  7C 08 02 A6 */	mflr r0
/* 8018EE98 0018BDD8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018EE9C 0018BDDC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8018EEA0 0018BDE0  7C 9F 23 78 */	mr r31, r4
/* 8018EEA4 0018BDE4  38 81 00 14 */	addi r4, r1, 0x14
/* 8018EEA8 0018BDE8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8018EEAC 0018BDEC  7C 7E 1B 78 */	mr r30, r3
/* 8018EEB0 0018BDF0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8018EEB4 0018BDF4  4B FA 93 C5 */	bl getTube__8CollPartFRQ23Sys4Tube
/* 8018EEB8 0018BDF8  38 61 00 14 */	addi r3, r1, 0x14
/* 8018EEBC 0018BDFC  38 81 00 08 */	addi r4, r1, 8
/* 8018EEC0 0018BE00  48 28 6B E5 */	bl "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
/* 8018EEC4 0018BE04  C0 41 00 08 */	lfs f2, 8(r1)
/* 8018EEC8 0018BE08  7F E3 FB 78 */	mr r3, r31
/* 8018EECC 0018BE0C  C0 62 AB 0C */	lfs f3, lbl_80518E6C@sda21(r2)
/* 8018EED0 0018BE10  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8018EED4 0018BE14  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018EED8 0018BE18  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8018EEDC 0018BE1C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8018EEE0 0018BE20  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8018EEE4 0018BE24  D0 41 00 08 */	stfs f2, 8(r1)
/* 8018EEE8 0018BE28  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8018EEEC 0018BE2C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8018EEF0 0018BE30  D0 5F 02 00 */	stfs f2, 0x200(r31)
/* 8018EEF4 0018BE34  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8018EEF8 0018BE38  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8018EEFC 0018BE3C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8018EF00 0018BE40  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8018EF04 0018BE44  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018EF08 0018BE48  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8018EF0C 0018BE4C  81 8C 01 D0 */	lwz r12, 0x1d0(r12)
/* 8018EF10 0018BE50  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8018EF14 0018BE54  7D 89 03 A6 */	mtctr r12
/* 8018EF18 0018BE58  4E 80 04 21 */	bctrl 
/* 8018EF1C 0018BE5C  C0 3F 01 08 */	lfs f1, 0x108(r31)
/* 8018EF20 0018BE60  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 8018EF24 0018BE64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018EF28 0018BE68  4C 41 13 82 */	cror 2, 1, 2
/* 8018EF2C 0018BE6C  40 82 00 54 */	bne .L_8018EF80
/* 8018EF30 0018BE70  7F E3 FB 78 */	mr r3, r31
/* 8018EF34 0018BE74  48 01 04 F1 */	bl endStick__Q24Game8CreatureFv
/* 8018EF38 0018BE78  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 8018EF3C 0018BE7C  7F E3 FB 78 */	mr r3, r31
/* 8018EF40 0018BE80  4B FB 04 25 */	bl startCaptureStomach__Q24Game8FakePikiFP8CollPart
/* 8018EF44 0018BE84  38 00 00 02 */	li r0, 2
/* 8018EF48 0018BE88  7F E3 FB 78 */	mr r3, r31
/* 8018EF4C 0018BE8C  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8018EF50 0018BE90  38 80 00 08 */	li r4, 8
/* 8018EF54 0018BE94  38 A0 00 08 */	li r5, 8
/* 8018EF58 0018BE98  38 C0 00 00 */	li r6, 0
/* 8018EF5C 0018BE9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018EF60 0018BEA0  38 E0 00 00 */	li r7, 0
/* 8018EF64 0018BEA4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018EF68 0018BEA8  7D 89 03 A6 */	mtctr r12
/* 8018EF6C 0018BEAC  4E 80 04 21 */	bctrl 
/* 8018EF70 0018BEB0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8018EF74 0018BEB4  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8018EF78 0018BEB8  C0 03 11 C8 */	lfs f0, 0x11c8(r3)
/* 8018EF7C 0018BEBC  D0 1E 00 20 */	stfs f0, 0x20(r30)
.L_8018EF80:
/* 8018EF80 0018BEC0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8018EF84 0018BEC4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8018EF88 0018BEC8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8018EF8C 0018BECC  7C 08 03 A6 */	mtlr r0
/* 8018EF90 0018BED0  38 21 00 40 */	addi r1, r1, 0x40
/* 8018EF94 0018BED4  4E 80 00 20 */	blr 
.endfn execString__Q24Game16PikiSuikomiStateFPQ24Game4Piki

.fn ignoreAtari__Q24Game16PikiSuikomiStateFPQ24Game4PikiPQ24Game8Creature, global
/* 8018EF98 0018BED8  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8018EF9C 0018BEDC  7C 00 28 50 */	subf r0, r0, r5
/* 8018EFA0 0018BEE0  7C 00 00 34 */	cntlzw r0, r0
/* 8018EFA4 0018BEE4  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 8018EFA8 0018BEE8  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q24Game16PikiSuikomiStateFPQ24Game4PikiPQ24Game8Creature

.fn execStomach__Q24Game16PikiSuikomiStateFPQ24Game4Piki, global
/* 8018EFAC 0018BEEC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8018EFB0 0018BEF0  7C 08 02 A6 */	mflr r0
/* 8018EFB4 0018BEF4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018EFB8 0018BEF8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8018EFBC 0018BEFC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8018EFC0 0018BF00  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018EFC4 0018BF04  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8018EFC8 0018BF08  7C 7E 1B 78 */	mr r30, r3
/* 8018EFCC 0018BF0C  7C 9F 23 78 */	mr r31, r4
/* 8018EFD0 0018BF10  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8018EFD4 0018BF14  28 03 00 00 */	cmplwi r3, 0
/* 8018EFD8 0018BF18  41 82 00 78 */	beq .L_8018F050
/* 8018EFDC 0018BF1C  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 8018EFE0 0018BF20  28 00 00 02 */	cmplwi r0, 2
/* 8018EFE4 0018BF24  41 82 00 34 */	beq .L_8018F018
/* 8018EFE8 0018BF28  81 83 00 00 */	lwz r12, 0(r3)
/* 8018EFEC 0018BF2C  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8018EFF0 0018BF30  7D 89 03 A6 */	mtctr r12
/* 8018EFF4 0018BF34  4E 80 04 21 */	bctrl 
/* 8018EFF8 0018BF38  3C A0 80 48 */	lis r5, lbl_8047ED20@ha
/* 8018EFFC 0018BF3C  3C E0 80 48 */	lis r7, lbl_8047EC60@ha
/* 8018F000 0018BF40  7C 66 1B 78 */	mr r6, r3
/* 8018F004 0018BF44  38 80 0A 78 */	li r4, 0xa78
/* 8018F008 0018BF48  38 67 EC 60 */	addi r3, r7, lbl_8047EC60@l
/* 8018F00C 0018BF4C  38 A5 ED 20 */	addi r5, r5, lbl_8047ED20@l
/* 8018F010 0018BF50  4C C6 31 82 */	crclr 6
/* 8018F014 0018BF54  4B E9 B6 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8018F018:
/* 8018F018 0018BF58  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 8018F01C 0018BF5C  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8018F020 0018BF60  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8018F024 0018BF64  40 82 00 2C */	bne .L_8018F050
/* 8018F028 0018BF68  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 8018F02C 0018BF6C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018F030 0018BF70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018F034 0018BF74  4C 40 13 82 */	cror 2, 0, 2
/* 8018F038 0018BF78  41 82 00 18 */	beq .L_8018F050
/* 8018F03C 0018BF7C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018F040 0018BF80  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 8018F044 0018BF84  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8018F048 0018BF88  EC 01 00 28 */	fsubs f0, f1, f0
/* 8018F04C 0018BF8C  D0 1E 00 20 */	stfs f0, 0x20(r30)
.L_8018F050:
/* 8018F050 0018BF90  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 8018F054 0018BF94  28 00 00 03 */	cmplwi r0, 3
/* 8018F058 0018BF98  40 82 00 70 */	bne .L_8018F0C8
/* 8018F05C 0018BF9C  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 8018F060 0018BFA0  7F E3 FB 78 */	mr r3, r31
/* 8018F064 0018BFA4  C0 02 AA 94 */	lfs f0, lbl_80518DF4@sda21(r2)
/* 8018F068 0018BFA8  EF E1 00 24 */	fdivs f31, f1, f0
/* 8018F06C 0018BFAC  4B FB B5 2D */	bl getBaseScale__Q24Game4PikiFv
/* 8018F070 0018BFB0  EF FF 00 72 */	fmuls f31, f31, f1
/* 8018F074 0018BFB4  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018F078 0018BFB8  D3 FF 01 68 */	stfs f31, 0x168(r31)
/* 8018F07C 0018BFBC  D3 FF 01 6C */	stfs f31, 0x16c(r31)
/* 8018F080 0018BFC0  D3 FF 01 70 */	stfs f31, 0x170(r31)
/* 8018F084 0018BFC4  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 8018F088 0018BFC8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018F08C 0018BFCC  4C 40 13 82 */	cror 2, 0, 2
/* 8018F090 0018BFD0  40 82 00 BC */	bne .L_8018F14C
/* 8018F094 0018BFD4  7F E3 FB 78 */	mr r3, r31
/* 8018F098 0018BFD8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F09C 0018BFDC  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 8018F0A0 0018BFE0  7D 89 03 A6 */	mtctr r12
/* 8018F0A4 0018BFE4  4E 80 04 21 */	bctrl 
/* 8018F0A8 0018BFE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F0AC 0018BFEC  41 82 00 0C */	beq .L_8018F0B8
/* 8018F0B0 0018BFF0  38 60 00 00 */	li r3, 0
/* 8018F0B4 0018BFF4  48 0A 16 65 */	bl inc__Q24Game8DeathMgrFi
.L_8018F0B8:
/* 8018F0B8 0018BFF8  7F E3 FB 78 */	mr r3, r31
/* 8018F0BC 0018BFFC  38 80 00 00 */	li r4, 0
/* 8018F0C0 0018C000  4B FA C0 31 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8018F0C4 0018C004  48 00 00 88 */	b .L_8018F14C
.L_8018F0C8:
/* 8018F0C8 0018C008  80 1F 01 94 */	lwz r0, 0x194(r31)
/* 8018F0CC 0018C00C  28 00 00 00 */	cmplwi r0, 0
/* 8018F0D0 0018C010  40 82 00 58 */	bne .L_8018F128
/* 8018F0D4 0018C014  81 1E 00 14 */	lwz r8, 0x14(r30)
/* 8018F0D8 0018C018  38 E0 00 00 */	li r7, 0
/* 8018F0DC 0018C01C  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018F0E0 0018C020  38 00 00 0A */	li r0, 0xa
/* 8018F0E4 0018C024  C0 02 AB 10 */	lfs f0, lbl_80518E70@sda21(r2)
/* 8018F0E8 0018C028  7F C3 F3 78 */	mr r3, r30
/* 8018F0EC 0018C02C  D0 21 00 08 */	stfs f1, 8(r1)
/* 8018F0F0 0018C030  7F E4 FB 78 */	mr r4, r31
/* 8018F0F4 0018C034  38 C1 00 08 */	addi r6, r1, 8
/* 8018F0F8 0018C038  38 A0 00 08 */	li r5, 8
/* 8018F0FC 0018C03C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8018F100 0018C040  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8018F104 0018C044  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8018F108 0018C048  98 E1 00 18 */	stb r7, 0x18(r1)
/* 8018F10C 0018C04C  B0 01 00 1A */	sth r0, 0x1a(r1)
/* 8018F110 0018C050  91 01 00 1C */	stw r8, 0x1c(r1)
/* 8018F114 0018C054  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018F118 0018C058  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018F11C 0018C05C  7D 89 03 A6 */	mtctr r12
/* 8018F120 0018C060  4E 80 04 21 */	bctrl 
/* 8018F124 0018C064  48 00 00 28 */	b .L_8018F14C
.L_8018F128:
/* 8018F128 0018C068  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 8018F12C 0018C06C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018F130 0018C070  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018F134 0018C074  4C 40 13 82 */	cror 2, 0, 2
/* 8018F138 0018C078  40 82 00 14 */	bne .L_8018F14C
/* 8018F13C 0018C07C  38 00 00 03 */	li r0, 3
/* 8018F140 0018C080  C0 02 AA 94 */	lfs f0, lbl_80518DF4@sda21(r2)
/* 8018F144 0018C084  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8018F148 0018C088  D0 1E 00 20 */	stfs f0, 0x20(r30)
.L_8018F14C:
/* 8018F14C 0018C08C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8018F150 0018C090  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8018F154 0018C094  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8018F158 0018C098  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8018F15C 0018C09C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8018F160 0018C0A0  7C 08 03 A6 */	mtlr r0
/* 8018F164 0018C0A4  38 21 00 40 */	addi r1, r1, 0x40
/* 8018F168 0018C0A8  4E 80 00 20 */	blr 
.endfn execStomach__Q24Game16PikiSuikomiStateFPQ24Game4Piki

.fn cleanup__Q24Game16PikiSuikomiStateFPQ24Game4Piki, global
/* 8018F16C 0018C0AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018F170 0018C0B0  7C 08 02 A6 */	mflr r0
/* 8018F174 0018C0B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018F178 0018C0B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018F17C 0018C0BC  7C 9F 23 78 */	mr r31, r4
/* 8018F180 0018C0C0  7F E3 FB 78 */	mr r3, r31
/* 8018F184 0018C0C4  4B FB 01 E9 */	bl endCaptureStomach__Q24Game8FakePikiFv
/* 8018F188 0018C0C8  7F E3 FB 78 */	mr r3, r31
/* 8018F18C 0018C0CC  38 80 00 01 */	li r4, 1
/* 8018F190 0018C0D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F194 0018C0D4  81 8C 01 E8 */	lwz r12, 0x1e8(r12)
/* 8018F198 0018C0D8  7D 89 03 A6 */	mtctr r12
/* 8018F19C 0018C0DC  4E 80 04 21 */	bctrl 
/* 8018F1A0 0018C0E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018F1A4 0018C0E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018F1A8 0018C0E8  7C 08 03 A6 */	mtlr r0
/* 8018F1AC 0018C0EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8018F1B0 0018C0F0  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game16PikiSuikomiStateFPQ24Game4Piki

.fn stopEffect__Q24Game15PikiFlyingStateFv, global
/* 8018F1B4 0018C0F4  4E 80 00 20 */	blr 
.endfn stopEffect__Q24Game15PikiFlyingStateFv

.fn restartEffect__Q24Game15PikiFlyingStateFv, global
/* 8018F1B8 0018C0F8  4E 80 00 20 */	blr 
.endfn restartEffect__Q24Game15PikiFlyingStateFv

.fn init__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018F1BC 0018C0FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018F1C0 0018C100  7C 08 02 A6 */	mflr r0
/* 8018F1C4 0018C104  38 A0 00 23 */	li r5, 0x23
/* 8018F1C8 0018C108  38 C0 00 00 */	li r6, 0
/* 8018F1CC 0018C10C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018F1D0 0018C110  38 E0 00 00 */	li r7, 0
/* 8018F1D4 0018C114  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018F1D8 0018C118  7C 9F 23 78 */	mr r31, r4
/* 8018F1DC 0018C11C  38 80 00 23 */	li r4, 0x23
/* 8018F1E0 0018C120  93 C1 00 08 */	stw r30, 8(r1)
/* 8018F1E4 0018C124  7C 7E 1B 78 */	mr r30, r3
/* 8018F1E8 0018C128  7F E3 FB 78 */	mr r3, r31
/* 8018F1EC 0018C12C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F1F0 0018C130  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018F1F4 0018C134  7D 89 03 A6 */	mtctr r12
/* 8018F1F8 0018C138  4E 80 04 21 */	bctrl 
/* 8018F1FC 0018C13C  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 8018F200 0018C140  28 03 00 00 */	cmplwi r3, 0
/* 8018F204 0018C144  41 82 00 4C */	beq .L_8018F250
/* 8018F208 0018C148  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 8018F20C 0018C14C  2C 00 00 05 */	cmpwi r0, 5
/* 8018F210 0018C150  40 82 00 24 */	bne .L_8018F234
/* 8018F214 0018C154  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 8018F218 0018C158  38 80 28 6B */	li r4, 0x286b
/* 8018F21C 0018C15C  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 8018F220 0018C160  38 A0 00 00 */	li r5, 0
/* 8018F224 0018C164  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018F228 0018C168  7D 89 03 A6 */	mtctr r12
/* 8018F22C 0018C16C  4E 80 04 21 */	bctrl 
/* 8018F230 0018C170  48 00 00 20 */	b .L_8018F250
.L_8018F234:
/* 8018F234 0018C174  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 8018F238 0018C178  38 80 28 02 */	li r4, 0x2802
/* 8018F23C 0018C17C  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 8018F240 0018C180  38 A0 00 00 */	li r5, 0
/* 8018F244 0018C184  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018F248 0018C188  7D 89 03 A6 */	mtctr r12
/* 8018F24C 0018C18C  4E 80 04 21 */	bctrl 
.L_8018F250:
/* 8018F250 0018C190  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8018F254 0018C194  38 80 28 03 */	li r4, 0x2803
/* 8018F258 0018C198  38 A0 00 5A */	li r5, 0x5a
/* 8018F25C 0018C19C  38 C0 00 00 */	li r6, 0
/* 8018F260 0018C1A0  48 2D 33 21 */	bl startFreePikiSound__Q23PSM4PikiFUlUlUl
/* 8018F264 0018C1A4  38 00 00 00 */	li r0, 0
/* 8018F268 0018C1A8  7F E3 FB 78 */	mr r3, r31
/* 8018F26C 0018C1AC  98 1E 00 14 */	stb r0, 0x14(r30)
/* 8018F270 0018C1B0  38 80 00 00 */	li r4, 0
/* 8018F274 0018C1B4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8018F278 0018C1B8  98 1E 00 15 */	stb r0, 0x15(r30)
/* 8018F27C 0018C1BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F280 0018C1C0  81 8C 01 E8 */	lwz r12, 0x1e8(r12)
/* 8018F284 0018C1C4  7D 89 03 A6 */	mtctr r12
/* 8018F288 0018C1C8  4E 80 04 21 */	bctrl 
/* 8018F28C 0018C1CC  80 7F 02 58 */	lwz r3, 0x258(r31)
/* 8018F290 0018C1D0  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8018F294 0018C1D4  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 8018F298 0018C1D8  48 22 96 9D */	bl "createNage___Q23efx9TPkEffectFP10Vector3<f>PA4_f"
/* 8018F29C 0018C1DC  38 00 00 01 */	li r0, 1
/* 8018F2A0 0018C1E0  98 1F 01 35 */	stb r0, 0x135(r31)
/* 8018F2A4 0018C1E4  88 0D 92 F0 */	lbz r0, throwPikiDebug__Q24Game7PikiMgr@sda21(r13)
/* 8018F2A8 0018C1E8  28 00 00 00 */	cmplwi r0, 0
/* 8018F2AC 0018C1EC  41 82 00 1C */	beq .L_8018F2C8
/* 8018F2B0 0018C1F0  7F E3 FB 78 */	mr r3, r31
/* 8018F2B4 0018C1F4  38 80 00 01 */	li r4, 1
/* 8018F2B8 0018C1F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F2BC 0018C1FC  81 8C 00 DC */	lwz r12, 0xdc(r12)
/* 8018F2C0 0018C200  7D 89 03 A6 */	mtctr r12
/* 8018F2C4 0018C204  4E 80 04 21 */	bctrl 
.L_8018F2C8:
/* 8018F2C8 0018C208  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018F2CC 0018C20C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018F2D0 0018C210  83 C1 00 08 */	lwz r30, 8(r1)
/* 8018F2D4 0018C214  7C 08 03 A6 */	mtlr r0
/* 8018F2D8 0018C218  38 21 00 10 */	addi r1, r1, 0x10
/* 8018F2DC 0018C21C  4E 80 00 20 */	blr 
.endfn init__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ24Game8StateArg

.fn bounceCallback__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ23Sys8Triangle, global
/* 8018F2E0 0018C220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018F2E4 0018C224  7C 08 02 A6 */	mflr r0
/* 8018F2E8 0018C228  38 A0 00 00 */	li r5, 0
/* 8018F2EC 0018C22C  38 C0 00 00 */	li r6, 0
/* 8018F2F0 0018C230  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018F2F4 0018C234  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018F2F8 0018C238  7C 9F 23 78 */	mr r31, r4
/* 8018F2FC 0018C23C  81 83 00 00 */	lwz r12, 0(r3)
/* 8018F300 0018C240  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018F304 0018C244  7D 89 03 A6 */	mtctr r12
/* 8018F308 0018C248  4E 80 04 21 */	bctrl 
/* 8018F30C 0018C24C  7F E3 FB 78 */	mr r3, r31
/* 8018F310 0018C250  48 02 48 F9 */	bl invokeAI__Q24Game4PikiFv
/* 8018F314 0018C254  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F318 0018C258  40 82 00 14 */	bne .L_8018F32C
/* 8018F31C 0018C25C  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8018F320 0018C260  38 80 00 01 */	li r4, 1
/* 8018F324 0018C264  38 A0 00 00 */	li r5, 0
/* 8018F328 0018C268  48 00 7C 6D */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_8018F32C:
/* 8018F32C 0018C26C  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8018F330 0018C270  38 80 28 04 */	li r4, 0x2804
/* 8018F334 0018C274  38 A0 00 5A */	li r5, 0x5a
/* 8018F338 0018C278  38 C0 00 00 */	li r6, 0
/* 8018F33C 0018C27C  48 2D 32 45 */	bl startFreePikiSound__Q23PSM4PikiFUlUlUl
/* 8018F340 0018C280  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018F344 0018C284  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018F348 0018C288  7C 08 03 A6 */	mtlr r0
/* 8018F34C 0018C28C  38 21 00 10 */	addi r1, r1, 0x10
/* 8018F350 0018C290  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ23Sys8Triangle

.fn collisionCallback__Q24Game15PikiFlyingStateFPQ24Game4PikiRQ24Game9CollEvent, global
/* 8018F354 0018C294  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8018F358 0018C298  7C 08 02 A6 */	mflr r0
/* 8018F35C 0018C29C  90 01 00 74 */	stw r0, 0x74(r1)
/* 8018F360 0018C2A0  BF 61 00 5C */	stmw r27, 0x5c(r1)
/* 8018F364 0018C2A4  7C 7C 1B 78 */	mr r28, r3
/* 8018F368 0018C2A8  7C BE 2B 78 */	mr r30, r5
/* 8018F36C 0018C2AC  7C 9D 23 78 */	mr r29, r4
/* 8018F370 0018C2B0  80 65 00 04 */	lwz r3, 4(r5)
/* 8018F374 0018C2B4  83 E5 00 00 */	lwz r31, 0(r5)
/* 8018F378 0018C2B8  28 03 00 00 */	cmplwi r3, 0
/* 8018F37C 0018C2BC  41 82 00 08 */	beq .L_8018F384
/* 8018F380 0018C2C0  4B FA 7A 31 */	bl isStickable__8CollPartFv
.L_8018F384:
/* 8018F384 0018C2C4  7F A3 EB 78 */	mr r3, r29
/* 8018F388 0018C2C8  80 9E 00 00 */	lwz r4, 0(r30)
/* 8018F38C 0018C2CC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018F390 0018C2D0  81 8C 01 90 */	lwz r12, 0x190(r12)
/* 8018F394 0018C2D4  7D 89 03 A6 */	mtctr r12
/* 8018F398 0018C2D8  4E 80 04 21 */	bctrl 
/* 8018F39C 0018C2DC  7F E3 FB 78 */	mr r3, r31
/* 8018F3A0 0018C2E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F3A4 0018C2E4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8018F3A8 0018C2E8  7D 89 03 A6 */	mtctr r12
/* 8018F3AC 0018C2EC  4E 80 04 21 */	bctrl 
/* 8018F3B0 0018C2F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F3B4 0018C2F4  41 82 01 80 */	beq .L_8018F534
/* 8018F3B8 0018C2F8  7F E3 FB 78 */	mr r3, r31
/* 8018F3BC 0018C2FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F3C0 0018C300  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8018F3C4 0018C304  7D 89 03 A6 */	mtctr r12
/* 8018F3C8 0018C308  4E 80 04 21 */	bctrl 
/* 8018F3CC 0018C30C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F3D0 0018C310  41 82 01 64 */	beq .L_8018F534
/* 8018F3D4 0018C314  7F A4 EB 78 */	mr r4, r29
/* 8018F3D8 0018C318  38 61 00 1C */	addi r3, r1, 0x1c
/* 8018F3DC 0018C31C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018F3E0 0018C320  3B 60 00 00 */	li r27, 0
/* 8018F3E4 0018C324  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8018F3E8 0018C328  7D 89 03 A6 */	mtctr r12
/* 8018F3EC 0018C32C  4E 80 04 21 */	bctrl 
/* 8018F3F0 0018C330  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8018F3F4 0018C334  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018F3F8 0018C338  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018F3FC 0018C33C  40 80 00 4C */	bge .L_8018F448
/* 8018F400 0018C340  80 BE 00 04 */	lwz r5, 4(r30)
/* 8018F404 0018C344  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 8018F408 0018C348  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 8018F40C 0018C34C  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018F410 0018C350  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 8018F414 0018C354  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018F418 0018C358  38 03 B3 20 */	addi r0, r3, __vt__Q24Game13InteractPress@l
/* 8018F41C 0018C35C  38 81 00 44 */	addi r4, r1, 0x44
/* 8018F420 0018C360  93 A1 00 48 */	stw r29, 0x48(r1)
/* 8018F424 0018C364  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018F428 0018C368  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 8018F42C 0018C36C  90 A1 00 50 */	stw r5, 0x50(r1)
/* 8018F430 0018C370  80 7E 00 00 */	lwz r3, 0(r30)
/* 8018F434 0018C374  81 83 00 00 */	lwz r12, 0(r3)
/* 8018F438 0018C378  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8018F43C 0018C37C  7D 89 03 A6 */	mtctr r12
/* 8018F440 0018C380  4E 80 04 21 */	bctrl 
/* 8018F444 0018C384  7C 7B 1B 78 */	mr r27, r3
.L_8018F448:
/* 8018F448 0018C388  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8018F44C 0018C38C  40 82 00 4C */	bne .L_8018F498
/* 8018F450 0018C390  80 BE 00 04 */	lwz r5, 4(r30)
/* 8018F454 0018C394  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 8018F458 0018C398  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 8018F45C 0018C39C  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 8018F460 0018C3A0  3C 60 80 4B */	lis r3, __vt__Q24Game20InteractFlyCollision@ha
/* 8018F464 0018C3A4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8018F468 0018C3A8  38 03 B2 FC */	addi r0, r3, __vt__Q24Game20InteractFlyCollision@l
/* 8018F46C 0018C3AC  38 81 00 34 */	addi r4, r1, 0x34
/* 8018F470 0018C3B0  93 A1 00 38 */	stw r29, 0x38(r1)
/* 8018F474 0018C3B4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8018F478 0018C3B8  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8018F47C 0018C3BC  90 A1 00 40 */	stw r5, 0x40(r1)
/* 8018F480 0018C3C0  80 7E 00 00 */	lwz r3, 0(r30)
/* 8018F484 0018C3C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8018F488 0018C3C8  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8018F48C 0018C3CC  7D 89 03 A6 */	mtctr r12
/* 8018F490 0018C3D0  4E 80 04 21 */	bctrl 
/* 8018F494 0018C3D4  7C 7B 1B 78 */	mr r27, r3
.L_8018F498:
/* 8018F498 0018C3D8  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8018F49C 0018C3DC  40 82 00 98 */	bne .L_8018F534
/* 8018F4A0 0018C3E0  80 7E 00 04 */	lwz r3, 4(r30)
/* 8018F4A4 0018C3E4  28 03 00 00 */	cmplwi r3, 0
/* 8018F4A8 0018C3E8  41 82 00 54 */	beq .L_8018F4FC
/* 8018F4AC 0018C3EC  4B FA 79 05 */	bl isStickable__8CollPartFv
/* 8018F4B0 0018C3F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F4B4 0018C3F4  41 82 00 48 */	beq .L_8018F4FC
/* 8018F4B8 0018C3F8  7F E3 FB 78 */	mr r3, r31
/* 8018F4BC 0018C3FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F4C0 0018C400  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8018F4C4 0018C404  7D 89 03 A6 */	mtctr r12
/* 8018F4C8 0018C408  4E 80 04 21 */	bctrl 
/* 8018F4CC 0018C40C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F4D0 0018C410  41 82 00 2C */	beq .L_8018F4FC
/* 8018F4D4 0018C414  80 9E 00 00 */	lwz r4, 0(r30)
/* 8018F4D8 0018C418  7F A3 EB 78 */	mr r3, r29
/* 8018F4DC 0018C41C  80 BE 00 04 */	lwz r5, 4(r30)
/* 8018F4E0 0018C420  48 00 FA 15 */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 8018F4E4 0018C424  80 9E 00 00 */	lwz r4, 0(r30)
/* 8018F4E8 0018C428  7F A3 EB 78 */	mr r3, r29
/* 8018F4EC 0018C42C  38 A0 28 05 */	li r5, 0x2805
/* 8018F4F0 0018C430  38 C0 00 01 */	li r6, 1
/* 8018F4F4 0018C434  4B FB 94 61 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8018F4F8 0018C438  48 00 00 3C */	b .L_8018F534
.L_8018F4FC:
/* 8018F4FC 0018C43C  7F A4 EB 78 */	mr r4, r29
/* 8018F500 0018C440  38 61 00 10 */	addi r3, r1, 0x10
/* 8018F504 0018C444  81 9D 00 00 */	lwz r12, 0(r29)
/* 8018F508 0018C448  81 8C 00 08 */	lwz r12, 8(r12)
/* 8018F50C 0018C44C  7D 89 03 A6 */	mtctr r12
/* 8018F510 0018C450  4E 80 04 21 */	bctrl 
/* 8018F514 0018C454  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8018F518 0018C458  38 61 00 28 */	addi r3, r1, 0x28
/* 8018F51C 0018C45C  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8018F520 0018C460  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8018F524 0018C464  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 8018F528 0018C468  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8018F52C 0018C46C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8018F530 0018C470  48 22 84 B5 */	bl "createSimpleInstick__3efxFR10Vector3<f>"
.L_8018F534:
/* 8018F534 0018C474  A0 1F 01 28 */	lhz r0, 0x128(r31)
/* 8018F538 0018C478  28 00 04 08 */	cmplwi r0, 0x408
/* 8018F53C 0018C47C  40 82 00 A0 */	bne .L_8018F5DC
/* 8018F540 0018C480  80 7E 00 04 */	lwz r3, 4(r30)
/* 8018F544 0018C484  28 03 00 00 */	cmplwi r3, 0
/* 8018F548 0018C488  41 82 00 94 */	beq .L_8018F5DC
/* 8018F54C 0018C48C  3C 80 74 6F */	lis r4, 0x746F7073@ha
/* 8018F550 0018C490  38 63 00 30 */	addi r3, r3, 0x30
/* 8018F554 0018C494  38 84 70 73 */	addi r4, r4, 0x746F7073@l
/* 8018F558 0018C498  38 A0 00 2A */	li r5, 0x2a
/* 8018F55C 0018C49C  48 28 3D A1 */	bl match__4ID32FUlc
/* 8018F560 0018C4A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F564 0018C4A4  41 82 00 78 */	beq .L_8018F5DC
/* 8018F568 0018C4A8  80 9E 00 00 */	lwz r4, 0(r30)
/* 8018F56C 0018C4AC  7F A3 EB 78 */	mr r3, r29
/* 8018F570 0018C4B0  80 BE 00 04 */	lwz r5, 4(r30)
/* 8018F574 0018C4B4  48 00 F9 81 */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 8018F578 0018C4B8  80 9E 00 00 */	lwz r4, 0(r30)
/* 8018F57C 0018C4BC  7F A3 EB 78 */	mr r3, r29
/* 8018F580 0018C4C0  38 A0 28 05 */	li r5, 0x2805
/* 8018F584 0018C4C4  38 C0 00 01 */	li r6, 1
/* 8018F588 0018C4C8  4B FB 93 CD */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8018F58C 0018C4CC  7F 83 E3 78 */	mr r3, r28
/* 8018F590 0018C4D0  7F A4 EB 78 */	mr r4, r29
/* 8018F594 0018C4D4  81 9C 00 00 */	lwz r12, 0(r28)
/* 8018F598 0018C4D8  38 A0 00 00 */	li r5, 0
/* 8018F59C 0018C4DC  38 C0 00 00 */	li r6, 0
/* 8018F5A0 0018C4E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018F5A4 0018C4E4  7D 89 03 A6 */	mtctr r12
/* 8018F5A8 0018C4E8  4E 80 04 21 */	bctrl 
/* 8018F5AC 0018C4EC  3C 80 80 4B */	lis r4, __vt__Q26PikiAI9ActionArg@ha
/* 8018F5B0 0018C4F0  3C 60 80 4B */	lis r3, __vt__Q26PikiAI10ActCropArg@ha
/* 8018F5B4 0018C4F4  38 84 05 30 */	addi r4, r4, __vt__Q26PikiAI9ActionArg@l
/* 8018F5B8 0018C4F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018F5BC 0018C4FC  38 03 3C 24 */	addi r0, r3, __vt__Q26PikiAI10ActCropArg@l
/* 8018F5C0 0018C500  38 A1 00 08 */	addi r5, r1, 8
/* 8018F5C4 0018C504  90 81 00 08 */	stw r4, 8(r1)
/* 8018F5C8 0018C508  38 80 00 08 */	li r4, 8
/* 8018F5CC 0018C50C  90 01 00 08 */	stw r0, 8(r1)
/* 8018F5D0 0018C510  80 7D 02 94 */	lwz r3, 0x294(r29)
/* 8018F5D4 0018C514  48 00 79 C1 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 8018F5D8 0018C518  48 00 00 90 */	b .L_8018F668
.L_8018F5DC:
/* 8018F5DC 0018C51C  7F A3 EB 78 */	mr r3, r29
/* 8018F5E0 0018C520  4B FB 99 55 */	bl getStateID__Q24Game4PikiFv
/* 8018F5E4 0018C524  2C 03 00 06 */	cmpwi r3, 6
/* 8018F5E8 0018C528  40 82 00 80 */	bne .L_8018F668
/* 8018F5EC 0018C52C  7F E3 FB 78 */	mr r3, r31
/* 8018F5F0 0018C530  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F5F4 0018C534  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 8018F5F8 0018C538  7D 89 03 A6 */	mtctr r12
/* 8018F5FC 0018C53C  4E 80 04 21 */	bctrl 
/* 8018F600 0018C540  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F604 0018C544  41 82 00 64 */	beq .L_8018F668
/* 8018F608 0018C548  7F 83 E3 78 */	mr r3, r28
/* 8018F60C 0018C54C  7F A4 EB 78 */	mr r4, r29
/* 8018F610 0018C550  81 9C 00 00 */	lwz r12, 0(r28)
/* 8018F614 0018C554  38 A0 00 00 */	li r5, 0
/* 8018F618 0018C558  38 C0 00 00 */	li r6, 0
/* 8018F61C 0018C55C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018F620 0018C560  7D 89 03 A6 */	mtctr r12
/* 8018F624 0018C564  4E 80 04 21 */	bctrl 
/* 8018F628 0018C568  7F A3 EB 78 */	mr r3, r29
/* 8018F62C 0018C56C  7F C4 F3 78 */	mr r4, r30
/* 8018F630 0018C570  38 A0 00 01 */	li r5, 1
/* 8018F634 0018C574  48 02 37 7D */	bl invokeAI__Q24Game4PikiFPQ24Game9CollEventb
/* 8018F638 0018C578  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F63C 0018C57C  40 82 00 14 */	bne .L_8018F650
/* 8018F640 0018C580  80 7D 02 94 */	lwz r3, 0x294(r29)
/* 8018F644 0018C584  38 80 00 01 */	li r4, 1
/* 8018F648 0018C588  38 A0 00 00 */	li r5, 0
/* 8018F64C 0018C58C  48 00 79 49 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_8018F650:
/* 8018F650 0018C590  80 7D 02 94 */	lwz r3, 0x294(r29)
/* 8018F654 0018C594  48 00 76 AD */	bl getCurrAction__Q26PikiAI5BrainFv
/* 8018F658 0018C598  28 03 00 00 */	cmplwi r3, 0
/* 8018F65C 0018C59C  41 82 00 0C */	beq .L_8018F668
/* 8018F660 0018C5A0  80 7D 02 94 */	lwz r3, 0x294(r29)
/* 8018F664 0018C5A4  48 00 76 9D */	bl getCurrAction__Q26PikiAI5BrainFv
.L_8018F668:
/* 8018F668 0018C5A8  BB 61 00 5C */	lmw r27, 0x5c(r1)
/* 8018F66C 0018C5AC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8018F670 0018C5B0  7C 08 03 A6 */	mtlr r0
/* 8018F674 0018C5B4  38 21 00 70 */	addi r1, r1, 0x70
/* 8018F678 0018C5B8  4E 80 00 20 */	blr 
.endfn collisionCallback__Q24Game15PikiFlyingStateFPQ24Game4PikiRQ24Game9CollEvent

.fn ignoreAtari__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ24Game8Creature, global
/* 8018F67C 0018C5BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018F680 0018C5C0  7C 08 02 A6 */	mflr r0
/* 8018F684 0018C5C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018F688 0018C5C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018F68C 0018C5CC  7C BF 2B 78 */	mr r31, r5
/* 8018F690 0018C5D0  7F E3 FB 78 */	mr r3, r31
/* 8018F694 0018C5D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F698 0018C5D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018F69C 0018C5DC  7D 89 03 A6 */	mtctr r12
/* 8018F6A0 0018C5E0  4E 80 04 21 */	bctrl 
/* 8018F6A4 0018C5E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F6A8 0018C5E8  40 82 00 20 */	bne .L_8018F6C8
/* 8018F6AC 0018C5EC  7F E3 FB 78 */	mr r3, r31
/* 8018F6B0 0018C5F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F6B4 0018C5F4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8018F6B8 0018C5F8  7D 89 03 A6 */	mtctr r12
/* 8018F6BC 0018C5FC  4E 80 04 21 */	bctrl 
/* 8018F6C0 0018C600  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018F6C4 0018C604  41 82 00 0C */	beq .L_8018F6D0
.L_8018F6C8:
/* 8018F6C8 0018C608  38 60 00 01 */	li r3, 1
/* 8018F6CC 0018C60C  48 00 00 08 */	b .L_8018F6D4
.L_8018F6D0:
/* 8018F6D0 0018C610  38 60 00 00 */	li r3, 0
.L_8018F6D4:
/* 8018F6D4 0018C614  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018F6D8 0018C618  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018F6DC 0018C61C  7C 08 03 A6 */	mtlr r0
/* 8018F6E0 0018C620  38 21 00 10 */	addi r1, r1, 0x10
/* 8018F6E4 0018C624  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ24Game8Creature

.fn exec__Q24Game15PikiFlyingStateFPQ24Game4Piki, global
/* 8018F6E8 0018C628  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8018F6EC 0018C62C  7C 08 02 A6 */	mflr r0
/* 8018F6F0 0018C630  90 01 00 64 */	stw r0, 0x64(r1)
/* 8018F6F4 0018C634  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8018F6F8 0018C638  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8018F6FC 0018C63C  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8018F700 0018C640  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8018F704 0018C644  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8018F708 0018C648  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 8018F70C 0018C64C  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 8018F710 0018C650  F3 81 00 28 */	psq_st f28, 40(r1), 0, qr0
/* 8018F714 0018C654  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018F718 0018C658  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018F71C 0018C65C  7C 7E 1B 78 */	mr r30, r3
/* 8018F720 0018C660  7C 9F 23 78 */	mr r31, r4
/* 8018F724 0018C664  80 A3 00 30 */	lwz r5, 0x30(r3)
/* 8018F728 0018C668  38 05 00 01 */	addi r0, r5, 1
/* 8018F72C 0018C66C  2C 00 00 F0 */	cmpwi r0, 0xf0
/* 8018F730 0018C670  90 03 00 30 */	stw r0, 0x30(r3)
/* 8018F734 0018C674  41 80 00 1C */	blt .L_8018F750
/* 8018F738 0018C678  81 83 00 00 */	lwz r12, 0(r3)
/* 8018F73C 0018C67C  38 A0 00 00 */	li r5, 0
/* 8018F740 0018C680  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8018F744 0018C684  7D 89 03 A6 */	mtctr r12
/* 8018F748 0018C688  4E 80 04 21 */	bctrl 
/* 8018F74C 0018C68C  48 00 03 30 */	b .L_8018FA7C
.L_8018F750:
/* 8018F750 0018C690  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 8018F754 0018C694  2C 00 00 03 */	cmpwi r0, 3
/* 8018F758 0018C698  40 82 00 34 */	bne .L_8018F78C
/* 8018F75C 0018C69C  C0 3F 02 04 */	lfs f1, 0x204(r31)
/* 8018F760 0018C6A0  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018F764 0018C6A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018F768 0018C6A8  4C 40 13 82 */	cror 2, 0, 2
/* 8018F76C 0018C6AC  40 82 00 20 */	bne .L_8018F78C
/* 8018F770 0018C6B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8018F774 0018C6B4  38 A0 00 12 */	li r5, 0x12
/* 8018F778 0018C6B8  38 C0 00 00 */	li r6, 0
/* 8018F77C 0018C6BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018F780 0018C6C0  7D 89 03 A6 */	mtctr r12
/* 8018F784 0018C6C4  4E 80 04 21 */	bctrl 
/* 8018F788 0018C6C8  48 00 02 F4 */	b .L_8018FA7C
.L_8018F78C:
/* 8018F78C 0018C6CC  80 8D 93 F0 */	lwz r4, _aiConstants__4Game@sda21(r13)
/* 8018F790 0018C6D0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8018F794 0018C6D4  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 8018F798 0018C6D8  C0 22 AB 14 */	lfs f1, lbl_80518E74@sda21(r2)
/* 8018F79C 0018C6DC  C0 03 0B B0 */	lfs f0, 0xbb0(r3)
/* 8018F7A0 0018C6E0  EF C1 00 B2 */	fmuls f30, f1, f2
/* 8018F7A4 0018C6E4  88 7E 00 14 */	lbz r3, 0x14(r30)
/* 8018F7A8 0018C6E8  EF A2 00 32 */	fmuls f29, f2, f0
/* 8018F7AC 0018C6EC  C0 02 AB 1C */	lfs f0, lbl_80518E7C@sda21(r2)
/* 8018F7B0 0018C6F0  C0 22 AB 18 */	lfs f1, lbl_80518E78@sda21(r2)
/* 8018F7B4 0018C6F4  28 03 00 00 */	cmplwi r3, 0
/* 8018F7B8 0018C6F8  EF FE E8 28 */	fsubs f31, f30, f29
/* 8018F7BC 0018C6FC  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8018F7C0 0018C700  EC 1E 00 78 */	fmsubs f0, f30, f1, f0
/* 8018F7C4 0018C704  EF 9D 00 7C */	fnmsubs f28, f29, f1, f0
/* 8018F7C8 0018C708  40 82 01 EC */	bne .L_8018F9B4
/* 8018F7CC 0018C70C  88 1F 02 B9 */	lbz r0, 0x2b9(r31)
/* 8018F7D0 0018C710  2C 00 00 02 */	cmpwi r0, 2
/* 8018F7D4 0018C714  40 82 01 E0 */	bne .L_8018F9B4
/* 8018F7D8 0018C718  C0 3F 02 04 */	lfs f1, 0x204(r31)
/* 8018F7DC 0018C71C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018F7E0 0018C720  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018F7E4 0018C724  4C 40 13 82 */	cror 2, 0, 2
/* 8018F7E8 0018C728  40 82 01 CC */	bne .L_8018F9B4
/* 8018F7EC 0018C72C  38 00 00 01 */	li r0, 1
/* 8018F7F0 0018C730  7F E3 FB 78 */	mr r3, r31
/* 8018F7F4 0018C734  98 1E 00 14 */	stb r0, 0x14(r30)
/* 8018F7F8 0018C738  38 80 00 24 */	li r4, 0x24
/* 8018F7FC 0018C73C  38 A0 00 24 */	li r5, 0x24
/* 8018F800 0018C740  38 C0 00 00 */	li r6, 0
/* 8018F804 0018C744  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018F808 0018C748  38 E0 00 00 */	li r7, 0
/* 8018F80C 0018C74C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018F810 0018C750  7D 89 03 A6 */	mtctr r12
/* 8018F814 0018C754  4E 80 04 21 */	bctrl 
/* 8018F818 0018C758  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 8018F81C 0018C75C  C0 22 AA D0 */	lfs f1, lbl_80518E30@sda21(r2)
/* 8018F820 0018C760  2C 00 00 02 */	cmpwi r0, 2
/* 8018F824 0018C764  40 82 00 14 */	bne .L_8018F838
/* 8018F828 0018C768  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8018F82C 0018C76C  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 8018F830 0018C770  C0 03 05 C0 */	lfs f0, 0x5c0(r3)
/* 8018F834 0018C774  48 00 00 10 */	b .L_8018F844
.L_8018F838:
/* 8018F838 0018C778  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8018F83C 0018C77C  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 8018F840 0018C780  C0 03 05 70 */	lfs f0, 0x570(r3)
.L_8018F844:
/* 8018F844 0018C784  EC 21 00 32 */	fmuls f1, f1, f0
/* 8018F848 0018C788  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018F84C 0018C78C  EC 21 07 72 */	fmuls f1, f1, f29
/* 8018F850 0018C790  EC 5C 0F 3A */	fmadds f2, f28, f28, f1
/* 8018F854 0018C794  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8018F858 0018C798  40 81 00 14 */	ble .L_8018F86C
/* 8018F85C 0018C79C  40 81 00 14 */	ble .L_8018F870
/* 8018F860 0018C7A0  FC 00 10 34 */	frsqrte f0, f2
/* 8018F864 0018C7A4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8018F868 0018C7A8  48 00 00 08 */	b .L_8018F870
.L_8018F86C:
/* 8018F86C 0018C7AC  FC 40 00 90 */	fmr f2, f0
.L_8018F870:
/* 8018F870 0018C7B0  FC 20 E0 50 */	fneg f1, f28
/* 8018F874 0018C7B4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8018F878 0018C7B8  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 8018F87C 0018C7BC  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 8018F880 0018C7C0  EC 21 10 2A */	fadds f1, f1, f2
/* 8018F884 0018C7C4  C0 A2 AA 94 */	lfs f5, lbl_80518DF4@sda21(r2)
/* 8018F888 0018C7C8  C0 83 06 38 */	lfs f4, 0x638(r3)
/* 8018F88C 0018C7CC  C0 42 AA 80 */	lfs f2, lbl_80518DE0@sda21(r2)
/* 8018F890 0018C7D0  EC 61 E8 24 */	fdivs f3, f1, f29
/* 8018F894 0018C7D4  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8018F898 0018C7D8  D0 5E 00 20 */	stfs f2, 0x20(r30)
/* 8018F89C 0018C7DC  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 8018F8A0 0018C7E0  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 8018F8A4 0018C7E4  C0 DE 00 1C */	lfs f6, 0x1c(r30)
/* 8018F8A8 0018C7E8  EC 05 01 32 */	fmuls f0, f5, f4
/* 8018F8AC 0018C7EC  C0 9E 00 20 */	lfs f4, 0x20(r30)
/* 8018F8B0 0018C7F0  C0 BE 00 24 */	lfs f5, 0x24(r30)
/* 8018F8B4 0018C7F4  EC 26 01 B2 */	fmuls f1, f6, f6
/* 8018F8B8 0018C7F8  EC 84 01 32 */	fmuls f4, f4, f4
/* 8018F8BC 0018C7FC  EC 00 18 24 */	fdivs f0, f0, f3
/* 8018F8C0 0018C800  EC 65 01 72 */	fmuls f3, f5, f5
/* 8018F8C4 0018C804  EC 21 20 2A */	fadds f1, f1, f4
/* 8018F8C8 0018C808  EC 23 08 2A */	fadds f1, f3, f1
/* 8018F8CC 0018C80C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8018F8D0 0018C810  40 81 00 20 */	ble .L_8018F8F0
/* 8018F8D4 0018C814  EC 26 21 BA */	fmadds f1, f6, f6, f4
/* 8018F8D8 0018C818  EC 63 08 2A */	fadds f3, f3, f1
/* 8018F8DC 0018C81C  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 8018F8E0 0018C820  40 81 00 14 */	ble .L_8018F8F4
/* 8018F8E4 0018C824  FC 20 18 34 */	frsqrte f1, f3
/* 8018F8E8 0018C828  EC 61 00 F2 */	fmuls f3, f1, f3
/* 8018F8EC 0018C82C  48 00 00 08 */	b .L_8018F8F4
.L_8018F8F0:
/* 8018F8F0 0018C830  FC 60 10 90 */	fmr f3, f2
.L_8018F8F4:
/* 8018F8F4 0018C834  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018F8F8 0018C838  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8018F8FC 0018C83C  40 81 00 30 */	ble .L_8018F92C
/* 8018F900 0018C840  C0 42 AA 84 */	lfs f2, lbl_80518DE4@sda21(r2)
/* 8018F904 0018C844  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8018F908 0018C848  EC 42 18 24 */	fdivs f2, f2, f3
/* 8018F90C 0018C84C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8018F910 0018C850  D0 3E 00 1C */	stfs f1, 0x1c(r30)
/* 8018F914 0018C854  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 8018F918 0018C858  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8018F91C 0018C85C  D0 3E 00 20 */	stfs f1, 0x20(r30)
/* 8018F920 0018C860  C0 3E 00 24 */	lfs f1, 0x24(r30)
/* 8018F924 0018C864  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8018F928 0018C868  D0 3E 00 24 */	stfs f1, 0x24(r30)
.L_8018F92C:
/* 8018F92C 0018C86C  C0 9F 02 00 */	lfs f4, 0x200(r31)
/* 8018F930 0018C870  C0 7F 02 08 */	lfs f3, 0x208(r31)
/* 8018F934 0018C874  EC 44 01 32 */	fmuls f2, f4, f4
/* 8018F938 0018C878  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018F93C 0018C87C  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8018F940 0018C880  EC 42 18 2A */	fadds f2, f2, f3
/* 8018F944 0018C884  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8018F948 0018C888  40 81 00 1C */	ble .L_8018F964
/* 8018F94C 0018C88C  EC 44 19 3A */	fmadds f2, f4, f4, f3
/* 8018F950 0018C890  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8018F954 0018C894  40 81 00 14 */	ble .L_8018F968
/* 8018F958 0018C898  FC 20 10 34 */	frsqrte f1, f2
/* 8018F95C 0018C89C  EC 41 00 B2 */	fmuls f2, f1, f2
/* 8018F960 0018C8A0  48 00 00 08 */	b .L_8018F968
.L_8018F964:
/* 8018F964 0018C8A4  FC 40 08 90 */	fmr f2, f1
.L_8018F968:
/* 8018F968 0018C8A8  C0 22 AA 94 */	lfs f1, lbl_80518DF4@sda21(r2)
/* 8018F96C 0018C8AC  D0 5E 00 28 */	stfs f2, 0x28(r30)
/* 8018F970 0018C8B0  EC 41 00 B2 */	fmuls f2, f1, f2
/* 8018F974 0018C8B4  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 8018F978 0018C8B8  D0 5E 00 2C */	stfs f2, 0x2c(r30)
/* 8018F97C 0018C8BC  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 8018F980 0018C8C0  EC 42 00 32 */	fmuls f2, f2, f0
/* 8018F984 0018C8C4  D0 5F 02 00 */	stfs f2, 0x200(r31)
/* 8018F988 0018C8C8  C0 5F 02 08 */	lfs f2, 0x208(r31)
/* 8018F98C 0018C8CC  EC 02 00 32 */	fmuls f0, f2, f0
/* 8018F990 0018C8D0  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8018F994 0018C8D4  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 8018F998 0018C8D8  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 8018F99C 0018C8DC  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 8018F9A0 0018C8E0  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8018F9A4 0018C8E4  D0 3F 02 04 */	stfs f1, 0x204(r31)
/* 8018F9A8 0018C8E8  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 8018F9AC 0018C8EC  D0 3E 00 10 */	stfs f1, 0x10(r30)
/* 8018F9B0 0018C8F0  48 00 00 CC */	b .L_8018FA7C
.L_8018F9B4:
/* 8018F9B4 0018C8F4  28 03 00 00 */	cmplwi r3, 0
/* 8018F9B8 0018C8F8  41 82 00 C4 */	beq .L_8018FA7C
/* 8018F9BC 0018C8FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018F9C0 0018C900  C0 42 AA DC */	lfs f2, lbl_80518E3C@sda21(r2)
/* 8018F9C4 0018C904  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018F9C8 0018C908  C0 02 AB 20 */	lfs f0, lbl_80518E80@sda21(r2)
/* 8018F9CC 0018C90C  EC 22 00 72 */	fmuls f1, f2, f1
/* 8018F9D0 0018C910  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 8018F9D4 0018C914  EC 01 00 24 */	fdivs f0, f1, f0
/* 8018F9D8 0018C918  EC 22 00 2A */	fadds f1, f2, f0
/* 8018F9DC 0018C91C  48 28 21 F5 */	bl roundAng__Ff
/* 8018F9E0 0018C920  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8018F9E4 0018C924  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018F9E8 0018C928  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 8018F9EC 0018C92C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8018F9F0 0018C930  EC 01 00 2A */	fadds f0, f1, f0
/* 8018F9F4 0018C934  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8018F9F8 0018C938  4B F3 9B A9 */	bl rand
/* 8018F9FC 0018C93C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018FA00 0018C940  3C 00 43 30 */	lis r0, 0x4330
/* 8018FA04 0018C944  90 61 00 0C */	stw r3, 0xc(r1)
/* 8018FA08 0018C948  C8 42 AA 78 */	lfd f2, lbl_80518DD8@sda21(r2)
/* 8018FA0C 0018C94C  90 01 00 08 */	stw r0, 8(r1)
/* 8018FA10 0018C950  C0 62 AA 68 */	lfs f3, lbl_80518DC8@sda21(r2)
/* 8018FA14 0018C954  C8 01 00 08 */	lfd f0, 8(r1)
/* 8018FA18 0018C958  C0 22 AA 94 */	lfs f1, lbl_80518DF4@sda21(r2)
/* 8018FA1C 0018C95C  EC 80 10 28 */	fsubs f4, f0, f2
/* 8018FA20 0018C960  C0 42 AA FC */	lfs f2, lbl_80518E5C@sda21(r2)
/* 8018FA24 0018C964  C0 BE 00 10 */	lfs f5, 0x10(r30)
/* 8018FA28 0018C968  C0 02 AB 18 */	lfs f0, lbl_80518E78@sda21(r2)
/* 8018FA2C 0018C96C  EC 64 18 24 */	fdivs f3, f4, f3
/* 8018FA30 0018C970  EC 23 08 28 */	fsubs f1, f3, f1
/* 8018FA34 0018C974  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8018FA38 0018C978  EC 42 00 72 */	fmuls f2, f2, f1
/* 8018FA3C 0018C97C  40 80 00 10 */	bge .L_8018FA4C
/* 8018FA40 0018C980  EC 1F 00 24 */	fdivs f0, f31, f0
/* 8018FA44 0018C984  EC 85 F0 3C */	fnmsubs f4, f5, f0, f30
/* 8018FA48 0018C988  48 00 00 08 */	b .L_8018FA50
.L_8018FA4C:
/* 8018FA4C 0018C98C  FC 80 E8 90 */	fmr f4, f29
.L_8018FA50:
/* 8018FA50 0018C990  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 8018FA54 0018C994  C0 22 AA 84 */	lfs f1, lbl_80518DE4@sda21(r2)
/* 8018FA58 0018C998  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8018FA5C 0018C99C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018FA60 0018C9A0  EC 61 10 2A */	fadds f3, f1, f2
/* 8018FA64 0018C9A4  EC 40 20 28 */	fsubs f2, f0, f4
/* 8018FA68 0018C9A8  C0 1F 02 04 */	lfs f0, 0x204(r31)
/* 8018FA6C 0018C9AC  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018FA70 0018C9B0  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8018FA74 0018C9B4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8018FA78 0018C9B8  D0 1F 02 04 */	stfs f0, 0x204(r31)
.L_8018FA7C:
/* 8018FA7C 0018C9BC  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8018FA80 0018C9C0  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8018FA84 0018C9C4  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8018FA88 0018C9C8  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8018FA8C 0018C9CC  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 8018FA90 0018C9D0  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 8018FA94 0018C9D4  E3 81 00 28 */	psq_l f28, 40(r1), 0, qr0
/* 8018FA98 0018C9D8  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 8018FA9C 0018C9DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018FAA0 0018C9E0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8018FAA4 0018C9E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018FAA8 0018C9E8  7C 08 03 A6 */	mtlr r0
/* 8018FAAC 0018C9EC  38 21 00 60 */	addi r1, r1, 0x60
/* 8018FAB0 0018C9F0  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PikiFlyingStateFPQ24Game4Piki

.fn cleanup__Q24Game15PikiFlyingStateFPQ24Game4Piki, global
/* 8018FAB4 0018C9F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018FAB8 0018C9F8  7C 08 02 A6 */	mflr r0
/* 8018FABC 0018C9FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018FAC0 0018CA00  38 00 00 00 */	li r0, 0
/* 8018FAC4 0018CA04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018FAC8 0018CA08  7C 9F 23 78 */	mr r31, r4
/* 8018FACC 0018CA0C  7F E3 FB 78 */	mr r3, r31
/* 8018FAD0 0018CA10  98 04 01 35 */	stb r0, 0x135(r4)
/* 8018FAD4 0018CA14  38 80 00 01 */	li r4, 1
/* 8018FAD8 0018CA18  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018FADC 0018CA1C  81 8C 01 E8 */	lwz r12, 0x1e8(r12)
/* 8018FAE0 0018CA20  7D 89 03 A6 */	mtctr r12
/* 8018FAE4 0018CA24  4E 80 04 21 */	bctrl 
/* 8018FAE8 0018CA28  80 7F 02 58 */	lwz r3, 0x258(r31)
/* 8018FAEC 0018CA2C  48 22 8F 41 */	bl killNage___Q23efx9TPkEffectFv
/* 8018FAF0 0018CA30  7F E3 FB 78 */	mr r3, r31
/* 8018FAF4 0018CA34  38 80 00 00 */	li r4, 0
/* 8018FAF8 0018CA38  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018FAFC 0018CA3C  81 8C 00 DC */	lwz r12, 0xdc(r12)
/* 8018FB00 0018CA40  7D 89 03 A6 */	mtctr r12
/* 8018FB04 0018CA44  4E 80 04 21 */	bctrl 
/* 8018FB08 0018CA48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018FB0C 0018CA4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018FB10 0018CA50  7C 08 03 A6 */	mtlr r0
/* 8018FB14 0018CA54  38 21 00 10 */	addi r1, r1, 0x10
/* 8018FB18 0018CA58  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PikiFlyingStateFPQ24Game4Piki

.fn init__Q24Game14PikiFlickStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8018FB1C 0018CA5C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8018FB20 0018CA60  7C 08 02 A6 */	mflr r0
/* 8018FB24 0018CA64  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018FB28 0018CA68  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8018FB2C 0018CA6C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8018FB30 0018CA70  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018FB34 0018CA74  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8018FB38 0018CA78  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8018FB3C 0018CA7C  3C E0 80 48 */	lis r7, lbl_8047EC60@ha
/* 8018FB40 0018CA80  3C C0 80 48 */	lis r6, lbl_8047ED3C@ha
/* 8018FB44 0018CA84  38 E7 EC 60 */	addi r7, r7, lbl_8047EC60@l
/* 8018FB48 0018CA88  7C 7D 1B 78 */	mr r29, r3
/* 8018FB4C 0018CA8C  7C 9E 23 78 */	mr r30, r4
/* 8018FB50 0018CA90  38 06 ED 3C */	addi r0, r6, lbl_8047ED3C@l
/* 8018FB54 0018CA94  7C BF 2B 78 */	mr r31, r5
/* 8018FB58 0018CA98  7C E3 3B 78 */	mr r3, r7
/* 8018FB5C 0018CA9C  7C 05 03 78 */	mr r5, r0
/* 8018FB60 0018CAA0  38 80 0B F1 */	li r4, 0xbf1
/* 8018FB64 0018CAA4  4C C6 31 82 */	crclr 6
/* 8018FB68 0018CAA8  4B E9 AA D9 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8018FB6C 0018CAAC  38 00 00 00 */	li r0, 0
/* 8018FB70 0018CAB0  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 8018FB74 0018CAB4  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8018FB78 0018CAB8  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8018FB7C 0018CABC  4B F3 9A 25 */	bl rand
/* 8018FB80 0018CAC0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018FB84 0018CAC4  3C 00 43 30 */	lis r0, 0x4330
/* 8018FB88 0018CAC8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8018FB8C 0018CACC  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018FB90 0018CAD0  90 01 00 08 */	stw r0, 8(r1)
/* 8018FB94 0018CAD4  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 8018FB98 0018CAD8  C8 21 00 08 */	lfd f1, 8(r1)
/* 8018FB9C 0018CADC  C0 02 AA DC */	lfs f0, lbl_80518E3C@sda21(r2)
/* 8018FBA0 0018CAE0  EC 61 18 28 */	fsubs f3, f1, f3
/* 8018FBA4 0018CAE4  C0 22 AA CC */	lfs f1, lbl_80518E2C@sda21(r2)
/* 8018FBA8 0018CAE8  EC 43 10 24 */	fdivs f2, f3, f2
/* 8018FBAC 0018CAEC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8018FBB0 0018CAF0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018FBB4 0018CAF4  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8018FBB8 0018CAF8  4B F3 99 E9 */	bl rand
/* 8018FBBC 0018CAFC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018FBC0 0018CB00  3C 00 43 30 */	lis r0, 0x4330
/* 8018FBC4 0018CB04  90 61 00 14 */	stw r3, 0x14(r1)
/* 8018FBC8 0018CB08  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018FBCC 0018CB0C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8018FBD0 0018CB10  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 8018FBD4 0018CB14  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8018FBD8 0018CB18  C0 22 AA BC */	lfs f1, lbl_80518E1C@sda21(r2)
/* 8018FBDC 0018CB1C  EC 60 18 28 */	fsubs f3, f0, f3
/* 8018FBE0 0018CB20  C0 02 AA F8 */	lfs f0, lbl_80518E58@sda21(r2)
/* 8018FBE4 0018CB24  EC 43 10 24 */	fdivs f2, f3, f2
/* 8018FBE8 0018CB28  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8018FBEC 0018CB2C  D0 1E 02 04 */	stfs f0, 0x204(r30)
/* 8018FBF0 0018CB30  C3 FF 00 04 */	lfs f31, 4(r31)
/* 8018FBF4 0018CB34  4B F3 99 AD */	bl rand
/* 8018FBF8 0018CB38  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018FBFC 0018CB3C  3C 00 43 30 */	lis r0, 0x4330
/* 8018FC00 0018CB40  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8018FC04 0018CB44  28 1D 00 00 */	cmplwi r29, 0
/* 8018FC08 0018CB48  C0 02 AA CC */	lfs f0, lbl_80518E2C@sda21(r2)
/* 8018FC0C 0018CB4C  7F A6 EB 78 */	mr r6, r29
/* 8018FC10 0018CB50  90 01 00 18 */	stw r0, 0x18(r1)
/* 8018FC14 0018CB54  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018FC18 0018CB58  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8018FC1C 0018CB5C  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 8018FC20 0018CB60  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8018FC24 0018CB64  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018FC28 0018CB68  EC 22 08 24 */	fdivs f1, f2, f1
/* 8018FC2C 0018CB6C  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 8018FC30 0018CB70  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 8018FC34 0018CB74  41 82 00 08 */	beq .L_8018FC3C
/* 8018FC38 0018CB78  80 DD 00 10 */	lwz r6, 0x10(r29)
.L_8018FC3C:
/* 8018FC3C 0018CB7C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018FC40 0018CB80  7F C3 F3 78 */	mr r3, r30
/* 8018FC44 0018CB84  38 80 00 16 */	li r4, 0x16
/* 8018FC48 0018CB88  38 A0 00 16 */	li r5, 0x16
/* 8018FC4C 0018CB8C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018FC50 0018CB90  38 E0 00 00 */	li r7, 0
/* 8018FC54 0018CB94  7D 89 03 A6 */	mtctr r12
/* 8018FC58 0018CB98  4E 80 04 21 */	bctrl 
/* 8018FC5C 0018CB9C  93 DD 00 28 */	stw r30, 0x28(r29)
/* 8018FC60 0018CBA0  38 00 00 00 */	li r0, 0
/* 8018FC64 0018CBA4  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 8018FC68 0018CBA8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8018FC6C 0018CBAC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8018FC70 0018CBB0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8018FC74 0018CBB4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8018FC78 0018CBB8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8018FC7C 0018CBBC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8018FC80 0018CBC0  7C 08 03 A6 */	mtlr r0
/* 8018FC84 0018CBC4  38 21 00 40 */	addi r1, r1, 0x40
/* 8018FC88 0018CBC8  4E 80 00 20 */	blr 
.endfn init__Q24Game14PikiFlickStateFPQ24Game4PikiPQ24Game8StateArg

.fn onFlute__Q24Game14PikiFlickStateFPQ24Game4PikiPQ24Game4Navi, global
/* 8018FC8C 0018CBCC  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018FC90 0018CBD0  38 00 00 01 */	li r0, 1
/* 8018FC94 0018CBD4  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8018FC98 0018CBD8  98 03 00 2C */	stb r0, 0x2c(r3)
/* 8018FC9C 0018CBDC  90 A4 02 C4 */	stw r5, 0x2c4(r4)
/* 8018FCA0 0018CBE0  4E 80 00 20 */	blr 
.endfn onFlute__Q24Game14PikiFlickStateFPQ24Game4PikiPQ24Game4Navi

.fn exec__Q24Game14PikiFlickStateFPQ24Game4Piki, global
/* 8018FCA4 0018CBE4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8018FCA8 0018CBE8  7C 08 02 A6 */	mflr r0
/* 8018FCAC 0018CBEC  3C A0 80 48 */	lis r5, lbl_8047ED50@ha
/* 8018FCB0 0018CBF0  3C C0 80 48 */	lis r6, lbl_8047EC60@ha
/* 8018FCB4 0018CBF4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8018FCB8 0018CBF8  38 06 EC 60 */	addi r0, r6, lbl_8047EC60@l
/* 8018FCBC 0018CBFC  38 A5 ED 50 */	addi r5, r5, lbl_8047ED50@l
/* 8018FCC0 0018CC00  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8018FCC4 0018CC04  7C 9F 23 78 */	mr r31, r4
/* 8018FCC8 0018CC08  38 80 0C 14 */	li r4, 0xc14
/* 8018FCCC 0018CC0C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8018FCD0 0018CC10  7C 7E 1B 78 */	mr r30, r3
/* 8018FCD4 0018CC14  7C 03 03 78 */	mr r3, r0
/* 8018FCD8 0018CC18  4C C6 31 82 */	crclr 6
/* 8018FCDC 0018CC1C  4B E9 A9 65 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8018FCE0 0018CC20  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8018FCE4 0018CC24  28 00 00 00 */	cmplwi r0, 0
/* 8018FCE8 0018CC28  40 82 00 D0 */	bne .L_8018FDB8
/* 8018FCEC 0018CC2C  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8018FCF0 0018CC30  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018FCF4 0018CC34  C0 5E 00 24 */	lfs f2, 0x24(r30)
/* 8018FCF8 0018CC38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018FCFC 0018CC3C  40 80 00 30 */	bge .L_8018FD2C
/* 8018FD00 0018CC40  C0 02 AA D8 */	lfs f0, lbl_80518E38@sda21(r2)
/* 8018FD04 0018CC44  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8018FD08 0018CC48  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8018FD0C 0018CC4C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018FD10 0018CC50  FC 00 00 1E */	fctiwz f0, f0
/* 8018FD14 0018CC54  D8 01 00 08 */	stfd f0, 8(r1)
/* 8018FD18 0018CC58  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8018FD1C 0018CC5C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8018FD20 0018CC60  7C 03 04 2E */	lfsx f0, r3, r0
/* 8018FD24 0018CC64  FC 20 00 50 */	fneg f1, f0
/* 8018FD28 0018CC68  48 00 00 28 */	b .L_8018FD50
.L_8018FD2C:
/* 8018FD2C 0018CC6C  C0 02 AA D4 */	lfs f0, lbl_80518E34@sda21(r2)
/* 8018FD30 0018CC70  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8018FD34 0018CC74  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8018FD38 0018CC78  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018FD3C 0018CC7C  FC 00 00 1E */	fctiwz f0, f0
/* 8018FD40 0018CC80  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8018FD44 0018CC84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018FD48 0018CC88  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8018FD4C 0018CC8C  7C 23 04 2E */	lfsx f1, r3, r0
.L_8018FD50:
/* 8018FD50 0018CC90  FC 40 10 50 */	fneg f2, f2
/* 8018FD54 0018CC94  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018FD58 0018CC98  EC 22 00 72 */	fmuls f1, f2, f1
/* 8018FD5C 0018CC9C  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 8018FD60 0018CCA0  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8018FD64 0018CCA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018FD68 0018CCA8  40 80 00 08 */	bge .L_8018FD70
/* 8018FD6C 0018CCAC  FC 20 08 50 */	fneg f1, f1
.L_8018FD70:
/* 8018FD70 0018CCB0  C0 02 AA D4 */	lfs f0, lbl_80518E34@sda21(r2)
/* 8018FD74 0018CCB4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8018FD78 0018CCB8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8018FD7C 0018CCBC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8018FD80 0018CCC0  FC 00 00 1E */	fctiwz f0, f0
/* 8018FD84 0018CCC4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8018FD88 0018CCC8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8018FD8C 0018CCCC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8018FD90 0018CCD0  7C 63 02 14 */	add r3, r3, r0
/* 8018FD94 0018CCD4  C0 03 00 04 */	lfs f0, 4(r3)
/* 8018FD98 0018CCD8  EC 02 00 32 */	fmuls f0, f2, f0
/* 8018FD9C 0018CCDC  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8018FDA0 0018CCE0  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8018FDA4 0018CCE4  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 8018FDA8 0018CCE8  EC 21 00 2A */	fadds f1, f1, f0
/* 8018FDAC 0018CCEC  48 28 1E 25 */	bl roundAng__Ff
/* 8018FDB0 0018CCF0  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8018FDB4 0018CCF4  48 00 00 E0 */	b .L_8018FE94
.L_8018FDB8:
/* 8018FDB8 0018CCF8  28 00 00 02 */	cmplwi r0, 2
/* 8018FDBC 0018CCFC  40 82 00 AC */	bne .L_8018FE68
/* 8018FDC0 0018CD00  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8018FDC4 0018CD04  C0 5E 00 18 */	lfs f2, 0x18(r30)
/* 8018FDC8 0018CD08  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8018FDCC 0018CD0C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018FDD0 0018CD10  EC 22 08 28 */	fsubs f1, f2, f1
/* 8018FDD4 0018CD14  D0 3E 00 18 */	stfs f1, 0x18(r30)
/* 8018FDD8 0018CD18  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 8018FDDC 0018CD1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8018FDE0 0018CD20  40 80 00 58 */	bge .L_8018FE38
/* 8018FDE4 0018CD24  7F E3 FB 78 */	mr r3, r31
/* 8018FDE8 0018CD28  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018FDEC 0018CD2C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8018FDF0 0018CD30  7D 89 03 A6 */	mtctr r12
/* 8018FDF4 0018CD34  4E 80 04 21 */	bctrl 
/* 8018FDF8 0018CD38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018FDFC 0018CD3C  41 82 00 3C */	beq .L_8018FE38
/* 8018FE00 0018CD40  28 1E 00 00 */	cmplwi r30, 0
/* 8018FE04 0018CD44  7F C6 F3 78 */	mr r6, r30
/* 8018FE08 0018CD48  41 82 00 08 */	beq .L_8018FE10
/* 8018FE0C 0018CD4C  80 DE 00 10 */	lwz r6, 0x10(r30)
.L_8018FE10:
/* 8018FE10 0018CD50  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018FE14 0018CD54  7F E3 FB 78 */	mr r3, r31
/* 8018FE18 0018CD58  38 80 00 0E */	li r4, 0xe
/* 8018FE1C 0018CD5C  38 A0 00 0E */	li r5, 0xe
/* 8018FE20 0018CD60  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018FE24 0018CD64  38 E0 00 00 */	li r7, 0
/* 8018FE28 0018CD68  7D 89 03 A6 */	mtctr r12
/* 8018FE2C 0018CD6C  4E 80 04 21 */	bctrl 
/* 8018FE30 0018CD70  38 00 00 03 */	li r0, 3
/* 8018FE34 0018CD74  B0 1E 00 14 */	sth r0, 0x14(r30)
.L_8018FE38:
/* 8018FE38 0018CD78  C0 42 AB 24 */	lfs f2, lbl_80518E84@sda21(r2)
/* 8018FE3C 0018CD7C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8018FE40 0018CD80  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018FE44 0018CD84  EC 22 00 72 */	fmuls f1, f2, f1
/* 8018FE48 0018CD88  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 8018FE4C 0018CD8C  C0 3F 02 08 */	lfs f1, 0x208(r31)
/* 8018FE50 0018CD90  EC 22 00 72 */	fmuls f1, f2, f1
/* 8018FE54 0018CD94  D0 3F 02 08 */	stfs f1, 0x208(r31)
/* 8018FE58 0018CD98  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 8018FE5C 0018CD9C  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 8018FE60 0018CDA0  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8018FE64 0018CDA4  48 00 00 30 */	b .L_8018FE94
.L_8018FE68:
/* 8018FE68 0018CDA8  C0 42 AB 24 */	lfs f2, lbl_80518E84@sda21(r2)
/* 8018FE6C 0018CDAC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8018FE70 0018CDB0  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 8018FE74 0018CDB4  EC 22 00 72 */	fmuls f1, f2, f1
/* 8018FE78 0018CDB8  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 8018FE7C 0018CDBC  C0 3F 02 08 */	lfs f1, 0x208(r31)
/* 8018FE80 0018CDC0  EC 22 00 72 */	fmuls f1, f2, f1
/* 8018FE84 0018CDC4  D0 3F 02 08 */	stfs f1, 0x208(r31)
/* 8018FE88 0018CDC8  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 8018FE8C 0018CDCC  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 8018FE90 0018CDD0  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
.L_8018FE94:
/* 8018FE94 0018CDD4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8018FE98 0018CDD8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8018FE9C 0018CDDC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8018FEA0 0018CDE0  7C 08 03 A6 */	mtlr r0
/* 8018FEA4 0018CDE4  38 21 00 30 */	addi r1, r1, 0x30
/* 8018FEA8 0018CDE8  4E 80 00 20 */	blr 
.endfn exec__Q24Game14PikiFlickStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game14PikiFlickStateFRCQ28SysShape8KeyEvent, global
/* 8018FEAC 0018CDEC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8018FEB0 0018CDF0  7C 08 02 A6 */	mflr r0
/* 8018FEB4 0018CDF4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8018FEB8 0018CDF8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8018FEBC 0018CDFC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8018FEC0 0018CE00  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8018FEC4 0018CE04  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8018FEC8 0018CE08  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018FECC 0018CE0C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018FED0 0018CE10  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8018FED4 0018CE14  7C 7E 1B 78 */	mr r30, r3
/* 8018FED8 0018CE18  83 E3 00 28 */	lwz r31, 0x28(r3)
/* 8018FEDC 0018CE1C  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8018FEE0 0018CE20  41 82 00 08 */	beq .L_8018FEE8
/* 8018FEE4 0018CE24  48 00 00 C4 */	b .L_8018FFA8
.L_8018FEE8:
/* 8018FEE8 0018CE28  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8018FEEC 0018CE2C  28 00 00 00 */	cmplwi r0, 0
/* 8018FEF0 0018CE30  40 82 00 40 */	bne .L_8018FF30
/* 8018FEF4 0018CE34  28 1E 00 00 */	cmplwi r30, 0
/* 8018FEF8 0018CE38  7F C6 F3 78 */	mr r6, r30
/* 8018FEFC 0018CE3C  41 82 00 08 */	beq .L_8018FF04
/* 8018FF00 0018CE40  80 DE 00 10 */	lwz r6, 0x10(r30)
.L_8018FF04:
/* 8018FF04 0018CE44  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018FF08 0018CE48  7F E3 FB 78 */	mr r3, r31
/* 8018FF0C 0018CE4C  38 80 00 17 */	li r4, 0x17
/* 8018FF10 0018CE50  38 A0 00 17 */	li r5, 0x17
/* 8018FF14 0018CE54  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8018FF18 0018CE58  38 E0 00 00 */	li r7, 0
/* 8018FF1C 0018CE5C  7D 89 03 A6 */	mtctr r12
/* 8018FF20 0018CE60  4E 80 04 21 */	bctrl 
/* 8018FF24 0018CE64  38 00 00 01 */	li r0, 1
/* 8018FF28 0018CE68  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8018FF2C 0018CE6C  48 00 00 7C */	b .L_8018FFA8
.L_8018FF30:
/* 8018FF30 0018CE70  28 00 00 01 */	cmplwi r0, 1
/* 8018FF34 0018CE74  40 82 00 50 */	bne .L_8018FF84
/* 8018FF38 0018CE78  38 00 00 02 */	li r0, 2
/* 8018FF3C 0018CE7C  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8018FF40 0018CE80  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8018FF44 0018CE84  C3 E3 0A E8 */	lfs f31, 0xae8(r3)
/* 8018FF48 0018CE88  C3 C3 0A C0 */	lfs f30, 0xac0(r3)
/* 8018FF4C 0018CE8C  4B F3 96 55 */	bl rand
/* 8018FF50 0018CE90  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8018FF54 0018CE94  3C 00 43 30 */	lis r0, 0x4330
/* 8018FF58 0018CE98  90 61 00 0C */	stw r3, 0xc(r1)
/* 8018FF5C 0018CE9C  EC 1E F8 28 */	fsubs f0, f30, f31
/* 8018FF60 0018CEA0  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 8018FF64 0018CEA4  90 01 00 08 */	stw r0, 8(r1)
/* 8018FF68 0018CEA8  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8018FF6C 0018CEAC  C8 41 00 08 */	lfd f2, 8(r1)
/* 8018FF70 0018CEB0  EC 42 18 28 */	fsubs f2, f2, f3
/* 8018FF74 0018CEB4  EC 22 08 24 */	fdivs f1, f2, f1
/* 8018FF78 0018CEB8  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 8018FF7C 0018CEBC  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8018FF80 0018CEC0  48 00 00 28 */	b .L_8018FFA8
.L_8018FF84:
/* 8018FF84 0018CEC4  4B F3 96 1D */	bl rand
/* 8018FF88 0018CEC8  7F C3 F3 78 */	mr r3, r30
/* 8018FF8C 0018CECC  7F E4 FB 78 */	mr r4, r31
/* 8018FF90 0018CED0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8018FF94 0018CED4  38 A0 00 00 */	li r5, 0
/* 8018FF98 0018CED8  38 C0 00 00 */	li r6, 0
/* 8018FF9C 0018CEDC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8018FFA0 0018CEE0  7D 89 03 A6 */	mtctr r12
/* 8018FFA4 0018CEE4  4E 80 04 21 */	bctrl 
.L_8018FFA8:
/* 8018FFA8 0018CEE8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8018FFAC 0018CEEC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8018FFB0 0018CEF0  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8018FFB4 0018CEF4  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8018FFB8 0018CEF8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8018FFBC 0018CEFC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8018FFC0 0018CF00  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8018FFC4 0018CF04  7C 08 03 A6 */	mtlr r0
/* 8018FFC8 0018CF08  38 21 00 40 */	addi r1, r1, 0x40
/* 8018FFCC 0018CF0C  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game14PikiFlickStateFRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game14PikiFlickStateFPQ24Game4Piki, global
/* 8018FFD0 0018CF10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018FFD4 0018CF14  7C 08 02 A6 */	mflr r0
/* 8018FFD8 0018CF18  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018FFDC 0018CF1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018FFE0 0018CF20  7C 9F 23 78 */	mr r31, r4
/* 8018FFE4 0018CF24  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8018FFE8 0018CF28  7C 7E 1B 78 */	mr r30, r3
/* 8018FFEC 0018CF2C  7F E3 FB 78 */	mr r3, r31
/* 8018FFF0 0018CF30  81 9F 00 00 */	lwz r12, 0(r31)
/* 8018FFF4 0018CF34  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8018FFF8 0018CF38  7D 89 03 A6 */	mtctr r12
/* 8018FFFC 0018CF3C  4E 80 04 21 */	bctrl 
/* 80190000 0018CF40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80190004 0018CF44  41 82 00 60 */	beq .L_80190064
/* 80190008 0018CF48  88 1E 00 2C */	lbz r0, 0x2c(r30)
/* 8019000C 0018CF4C  28 00 00 00 */	cmplwi r0, 0
/* 80190010 0018CF50  41 82 00 54 */	beq .L_80190064
/* 80190014 0018CF54  80 FF 02 C4 */	lwz r7, 0x2c4(r31)
/* 80190018 0018CF58  3C 60 80 4B */	lis r3, __vt__Q26PikiAI9ActionArg@ha
/* 8019001C 0018CF5C  38 03 05 30 */	addi r0, r3, __vt__Q26PikiAI9ActionArg@l
/* 80190020 0018CF60  38 60 00 00 */	li r3, 0
/* 80190024 0018CF64  3C 80 80 4B */	lis r4, __vt__Q26PikiAI17CreatureActionArg@ha
/* 80190028 0018CF68  90 01 00 08 */	stw r0, 8(r1)
/* 8019002C 0018CF6C  38 04 05 24 */	addi r0, r4, __vt__Q26PikiAI17CreatureActionArg@l
/* 80190030 0018CF70  3C 80 80 4B */	lis r4, __vt__Q26PikiAI19ActFormationInitArg@ha
/* 80190034 0018CF74  90 01 00 08 */	stw r0, 8(r1)
/* 80190038 0018CF78  38 C4 0D 44 */	addi r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
/* 8019003C 0018CF7C  38 00 00 01 */	li r0, 1
/* 80190040 0018CF80  38 A1 00 08 */	addi r5, r1, 8
/* 80190044 0018CF84  98 61 00 11 */	stb r3, 0x11(r1)
/* 80190048 0018CF88  38 80 00 00 */	li r4, 0
/* 8019004C 0018CF8C  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80190050 0018CF90  90 C1 00 08 */	stw r6, 8(r1)
/* 80190054 0018CF94  98 61 00 10 */	stb r3, 0x10(r1)
/* 80190058 0018CF98  98 01 00 11 */	stb r0, 0x11(r1)
/* 8019005C 0018CF9C  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 80190060 0018CFA0  48 00 6F 35 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_80190064:
/* 80190064 0018CFA4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80190068 0018CFA8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8019006C 0018CFAC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80190070 0018CFB0  7C 08 03 A6 */	mtlr r0
/* 80190074 0018CFB4  38 21 00 20 */	addi r1, r1, 0x20
/* 80190078 0018CFB8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game14PikiFlickStateFPQ24Game4Piki

.fn init__Q24Game13PikiBlowStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8019007C 0018CFBC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80190080 0018CFC0  7C 08 02 A6 */	mflr r0
/* 80190084 0018CFC4  28 05 00 00 */	cmplwi r5, 0
/* 80190088 0018CFC8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8019008C 0018CFCC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80190090 0018CFD0  7C 9F 23 78 */	mr r31, r4
/* 80190094 0018CFD4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80190098 0018CFD8  7C 7E 1B 78 */	mr r30, r3
/* 8019009C 0018CFDC  40 82 00 24 */	bne .L_801900C0
/* 801900A0 0018CFE0  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 801900A4 0018CFE4  3C A0 80 48 */	lis r5, lbl_8047ED64@ha
/* 801900A8 0018CFE8  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 801900AC 0018CFEC  38 80 0C 97 */	li r4, 0xc97
/* 801900B0 0018CFF0  38 A5 ED 64 */	addi r5, r5, lbl_8047ED64@l
/* 801900B4 0018CFF4  4C C6 31 82 */	crclr 6
/* 801900B8 0018CFF8  4B E9 A5 89 */	bl panic_f__12JUTExceptionFPCciPCce
/* 801900BC 0018CFFC  48 00 00 3C */	b .L_801900F8
.L_801900C0:
/* 801900C0 0018D000  C0 05 00 00 */	lfs f0, 0(r5)
/* 801900C4 0018D004  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 801900C8 0018D008  C0 05 00 04 */	lfs f0, 4(r5)
/* 801900CC 0018D00C  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 801900D0 0018D010  C0 05 00 08 */	lfs f0, 8(r5)
/* 801900D4 0018D014  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 801900D8 0018D018  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 801900DC 0018D01C  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801900E0 0018D020  88 05 00 10 */	lbz r0, 0x10(r5)
/* 801900E4 0018D024  98 1E 00 29 */	stb r0, 0x29(r30)
/* 801900E8 0018D028  A0 05 00 12 */	lhz r0, 0x12(r5)
/* 801900EC 0018D02C  B0 1E 00 2A */	sth r0, 0x2a(r30)
/* 801900F0 0018D030  80 05 00 14 */	lwz r0, 0x14(r5)
/* 801900F4 0018D034  90 1E 00 14 */	stw r0, 0x14(r30)
.L_801900F8:
/* 801900F8 0018D038  38 00 00 00 */	li r0, 0
/* 801900FC 0018D03C  28 1F 00 00 */	cmplwi r31, 0
/* 80190100 0018D040  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80190104 0018D044  7F E6 FB 78 */	mr r6, r31
/* 80190108 0018D048  41 82 00 08 */	beq .L_80190110
/* 8019010C 0018D04C  38 DF 01 78 */	addi r6, r31, 0x178
.L_80190110:
/* 80190110 0018D050  81 9F 00 00 */	lwz r12, 0(r31)
/* 80190114 0018D054  7F E3 FB 78 */	mr r3, r31
/* 80190118 0018D058  38 80 00 16 */	li r4, 0x16
/* 8019011C 0018D05C  38 A0 00 16 */	li r5, 0x16
/* 80190120 0018D060  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80190124 0018D064  38 E0 00 00 */	li r7, 0
/* 80190128 0018D068  7D 89 03 A6 */	mtctr r12
/* 8019012C 0018D06C  4E 80 04 21 */	bctrl 
/* 80190130 0018D070  38 00 00 00 */	li r0, 0
/* 80190134 0018D074  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80190138 0018D078  4B F3 94 69 */	bl rand
/* 8019013C 0018D07C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80190140 0018D080  3C 00 43 30 */	lis r0, 0x4330
/* 80190144 0018D084  90 61 00 0C */	stw r3, 0xc(r1)
/* 80190148 0018D088  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8019014C 0018D08C  C8 42 AA 78 */	lfd f2, lbl_80518DD8@sda21(r2)
/* 80190150 0018D090  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80190154 0018D094  90 01 00 08 */	stw r0, 8(r1)
/* 80190158 0018D098  C0 62 AA 68 */	lfs f3, lbl_80518DC8@sda21(r2)
/* 8019015C 0018D09C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80190160 0018D0A0  C0 22 AA CC */	lfs f1, lbl_80518E2C@sda21(r2)
/* 80190164 0018D0A4  EC 80 10 28 */	fsubs f4, f0, f2
/* 80190168 0018D0A8  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 8019016C 0018D0AC  C0 5E 00 1C */	lfs f2, 0x1c(r30)
/* 80190170 0018D0B0  EC 64 18 24 */	fdivs f3, f4, f3
/* 80190174 0018D0B4  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 80190178 0018D0B8  EC 02 00 32 */	fmuls f0, f2, f0
/* 8019017C 0018D0BC  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80190180 0018D0C0  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 80190184 0018D0C4  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 80190188 0018D0C8  4B EA 4F 81 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8019018C 0018D0CC  C0 02 AA DC */	lfs f0, lbl_80518E3C@sda21(r2)
/* 80190190 0018D0D0  EC 20 08 2A */	fadds f1, f0, f1
/* 80190194 0018D0D4  48 28 1A 3D */	bl roundAng__Ff
/* 80190198 0018D0D8  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8019019C 0018D0DC  A0 1E 00 2A */	lhz r0, 0x2a(r30)
/* 801901A0 0018D0E0  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 801901A4 0018D0E4  41 82 00 3C */	beq .L_801901E0
/* 801901A8 0018D0E8  88 1F 02 B9 */	lbz r0, 0x2b9(r31)
/* 801901AC 0018D0EC  2C 00 00 01 */	cmpwi r0, 1
/* 801901B0 0018D0F0  41 80 00 40 */	blt .L_801901F0
/* 801901B4 0018D0F4  80 9F 02 58 */	lwz r4, 0x258(r31)
/* 801901B8 0018D0F8  80 64 00 0C */	lwz r3, 0xc(r4)
/* 801901BC 0018D0FC  80 84 00 08 */	lwz r4, 8(r4)
/* 801901C0 0018D100  48 22 77 31 */	bl "createSimpleChiru__3efxFR10Vector3<f>l"
/* 801901C4 0018D104  7F E3 FB 78 */	mr r3, r31
/* 801901C8 0018D108  38 80 28 46 */	li r4, 0x2846
/* 801901CC 0018D10C  38 A0 00 01 */	li r5, 1
/* 801901D0 0018D110  4B FB 86 FD */	bl startSound__Q24Game4PikiFUlb
/* 801901D4 0018D114  38 00 00 00 */	li r0, 0
/* 801901D8 0018D118  98 1F 02 B9 */	stb r0, 0x2b9(r31)
/* 801901DC 0018D11C  48 00 00 14 */	b .L_801901F0
.L_801901E0:
/* 801901E0 0018D120  7F E3 FB 78 */	mr r3, r31
/* 801901E4 0018D124  38 80 28 54 */	li r4, 0x2854
/* 801901E8 0018D128  38 A0 00 01 */	li r5, 1
/* 801901EC 0018D12C  4B FB 86 E1 */	bl startSound__Q24Game4PikiFUlb
.L_801901F0:
/* 801901F0 0018D130  7F E3 FB 78 */	mr r3, r31
/* 801901F4 0018D134  48 00 F3 81 */	bl isStickTo__Q24Game8CreatureFv
/* 801901F8 0018D138  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801901FC 0018D13C  41 82 00 0C */	beq .L_80190208
/* 80190200 0018D140  7F E3 FB 78 */	mr r3, r31
/* 80190204 0018D144  48 00 F2 21 */	bl endStick__Q24Game8CreatureFv
.L_80190208:
/* 80190208 0018D148  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8019020C 0018D14C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80190210 0018D150  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80190214 0018D154  7C 08 03 A6 */	mtlr r0
/* 80190218 0018D158  38 21 00 20 */	addi r1, r1, 0x20
/* 8019021C 0018D15C  4E 80 00 20 */	blr 
.endfn init__Q24Game13PikiBlowStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game13PikiBlowStateFPQ24Game4Piki, global
/* 80190220 0018D160  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80190224 0018D164  7C 08 02 A6 */	mflr r0
/* 80190228 0018D168  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019022C 0018D16C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80190230 0018D170  7C 9F 23 78 */	mr r31, r4
/* 80190234 0018D174  93 C1 00 08 */	stw r30, 8(r1)
/* 80190238 0018D178  7C 7E 1B 78 */	mr r30, r3
/* 8019023C 0018D17C  7F E3 FB 78 */	mr r3, r31
/* 80190240 0018D180  48 00 F3 35 */	bl isStickTo__Q24Game8CreatureFv
/* 80190244 0018D184  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80190248 0018D188  41 82 00 0C */	beq .L_80190254
/* 8019024C 0018D18C  7F E3 FB 78 */	mr r3, r31
/* 80190250 0018D190  48 00 F1 D5 */	bl endStick__Q24Game8CreatureFv
.L_80190254:
/* 80190254 0018D194  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80190258 0018D198  2C 00 00 01 */	cmpwi r0, 1
/* 8019025C 0018D19C  41 82 00 74 */	beq .L_801902D0
/* 80190260 0018D1A0  40 80 00 E8 */	bge .L_80190348
/* 80190264 0018D1A4  2C 00 00 00 */	cmpwi r0, 0
/* 80190268 0018D1A8  40 80 00 08 */	bge .L_80190270
/* 8019026C 0018D1AC  48 00 00 DC */	b .L_80190348
.L_80190270:
/* 80190270 0018D1B0  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 80190274 0018D1B4  7F E3 FB 78 */	mr r3, r31
/* 80190278 0018D1B8  38 80 00 16 */	li r4, 0x16
/* 8019027C 0018D1BC  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 80190280 0018D1C0  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 80190284 0018D1C4  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 80190288 0018D1C8  4B FA CC A5 */	bl assertMotion__Q24Game8FakePikiFi
/* 8019028C 0018D1CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80190290 0018D1D0  40 82 00 B8 */	bne .L_80190348
/* 80190294 0018D1D4  38 00 00 01 */	li r0, 1
/* 80190298 0018D1D8  28 1F 00 00 */	cmplwi r31, 0
/* 8019029C 0018D1DC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801902A0 0018D1E0  7F E6 FB 78 */	mr r6, r31
/* 801902A4 0018D1E4  41 82 00 08 */	beq .L_801902AC
/* 801902A8 0018D1E8  38 DF 01 78 */	addi r6, r31, 0x178
.L_801902AC:
/* 801902AC 0018D1EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801902B0 0018D1F0  7F E3 FB 78 */	mr r3, r31
/* 801902B4 0018D1F4  38 80 00 17 */	li r4, 0x17
/* 801902B8 0018D1F8  38 A0 00 17 */	li r5, 0x17
/* 801902BC 0018D1FC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801902C0 0018D200  38 E0 00 00 */	li r7, 0
/* 801902C4 0018D204  7D 89 03 A6 */	mtctr r12
/* 801902C8 0018D208  4E 80 04 21 */	bctrl 
/* 801902CC 0018D20C  48 00 00 7C */	b .L_80190348
.L_801902D0:
/* 801902D0 0018D210  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 801902D4 0018D214  7F E3 FB 78 */	mr r3, r31
/* 801902D8 0018D218  C0 22 AB 24 */	lfs f1, lbl_80518E84@sda21(r2)
/* 801902DC 0018D21C  38 80 00 17 */	li r4, 0x17
/* 801902E0 0018D220  EC 00 00 72 */	fmuls f0, f0, f1
/* 801902E4 0018D224  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 801902E8 0018D228  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 801902EC 0018D22C  EC 00 00 72 */	fmuls f0, f0, f1
/* 801902F0 0018D230  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 801902F4 0018D234  4B FA CC 39 */	bl assertMotion__Q24Game8FakePikiFi
/* 801902F8 0018D238  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801902FC 0018D23C  40 82 00 28 */	bne .L_80190324
/* 80190300 0018D240  7F C3 F3 78 */	mr r3, r30
/* 80190304 0018D244  7F E4 FB 78 */	mr r4, r31
/* 80190308 0018D248  81 9E 00 00 */	lwz r12, 0(r30)
/* 8019030C 0018D24C  38 A0 00 00 */	li r5, 0
/* 80190310 0018D250  38 C0 00 00 */	li r6, 0
/* 80190314 0018D254  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80190318 0018D258  7D 89 03 A6 */	mtctr r12
/* 8019031C 0018D25C  4E 80 04 21 */	bctrl 
/* 80190320 0018D260  48 00 00 28 */	b .L_80190348
.L_80190324:
/* 80190324 0018D264  80 BF 02 48 */	lwz r5, 0x248(r31)
/* 80190328 0018D268  28 05 00 00 */	cmplwi r5, 0
/* 8019032C 0018D26C  41 82 00 1C */	beq .L_80190348
/* 80190330 0018D270  81 9E 00 00 */	lwz r12, 0(r30)
/* 80190334 0018D274  7F C3 F3 78 */	mr r3, r30
/* 80190338 0018D278  7F E4 FB 78 */	mr r4, r31
/* 8019033C 0018D27C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80190340 0018D280  7D 89 03 A6 */	mtctr r12
/* 80190344 0018D284  4E 80 04 21 */	bctrl 
.L_80190348:
/* 80190348 0018D288  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019034C 0018D28C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80190350 0018D290  83 C1 00 08 */	lwz r30, 8(r1)
/* 80190354 0018D294  7C 08 03 A6 */	mtlr r0
/* 80190358 0018D298  38 21 00 10 */	addi r1, r1, 0x10
/* 8019035C 0018D29C  4E 80 00 20 */	blr 
.endfn exec__Q24Game13PikiBlowStateFPQ24Game4Piki

.fn cleanup__Q24Game13PikiBlowStateFPQ24Game4Piki, global
/* 80190360 0018D2A0  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13PikiBlowStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game13PikiBlowStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 80190364 0018D2A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80190368 0018D2A8  7C 08 02 A6 */	mflr r0
/* 8019036C 0018D2AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80190370 0018D2B0  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80190374 0018D2B4  7C 85 23 78 */	mr r5, r4
/* 80190378 0018D2B8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8019037C 0018D2BC  40 82 00 3C */	bne .L_801903B8
/* 80190380 0018D2C0  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80190384 0018D2C4  2C 00 00 00 */	cmpwi r0, 0
/* 80190388 0018D2C8  40 82 00 30 */	bne .L_801903B8
/* 8019038C 0018D2CC  38 00 00 01 */	li r0, 1
/* 80190390 0018D2D0  38 80 00 17 */	li r4, 0x17
/* 80190394 0018D2D4  90 03 00 10 */	stw r0, 0x10(r3)
/* 80190398 0018D2D8  7C A3 2B 78 */	mr r3, r5
/* 8019039C 0018D2DC  38 A0 00 17 */	li r5, 0x17
/* 801903A0 0018D2E0  38 C0 00 00 */	li r6, 0
/* 801903A4 0018D2E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801903A8 0018D2E8  38 E0 00 00 */	li r7, 0
/* 801903AC 0018D2EC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801903B0 0018D2F0  7D 89 03 A6 */	mtctr r12
/* 801903B4 0018D2F4  4E 80 04 21 */	bctrl 
.L_801903B8:
/* 801903B8 0018D2F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801903BC 0018D2FC  7C 08 03 A6 */	mtlr r0
/* 801903C0 0018D300  38 21 00 10 */	addi r1, r1, 0x10
/* 801903C4 0018D304  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game13PikiBlowStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn onFlute__Q24Game13PikiBlowStateFPQ24Game4PikiPQ24Game4Navi, global
/* 801903C8 0018D308  38 00 00 01 */	li r0, 1
/* 801903CC 0018D30C  98 03 00 28 */	stb r0, 0x28(r3)
/* 801903D0 0018D310  90 A4 02 C4 */	stw r5, 0x2c4(r4)
/* 801903D4 0018D314  4E 80 00 20 */	blr 
.endfn onFlute__Q24Game13PikiBlowStateFPQ24Game4PikiPQ24Game4Navi

.fn bounceCallback__Q24Game13PikiBlowStateFPQ24Game4PikiPQ23Sys8Triangle, global
/* 801903D8 0018D318  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801903DC 0018D31C  7C 08 02 A6 */	mflr r0
/* 801903E0 0018D320  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 801903E4 0018D324  90 01 00 24 */	stw r0, 0x24(r1)
/* 801903E8 0018D328  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801903EC 0018D32C  7C 9F 23 78 */	mr r31, r4
/* 801903F0 0018D330  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801903F4 0018D334  7C 7E 1B 78 */	mr r30, r3
/* 801903F8 0018D338  3C 60 00 01 */	lis r3, 0x00008000@ha
/* 801903FC 0018D33C  88 BE 00 28 */	lbz r5, 0x28(r30)
/* 80190400 0018D340  38 03 80 00 */	addi r0, r3, 0x00008000@l
/* 80190404 0018D344  A0 DE 00 2A */	lhz r6, 0x2a(r30)
/* 80190408 0018D348  7C 65 00 D0 */	neg r3, r5
/* 8019040C 0018D34C  7C 63 2B 78 */	or r3, r3, r5
/* 80190410 0018D350  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80190414 0018D354  7C 63 FE 70 */	srawi r3, r3, 0x1f
/* 80190418 0018D358  7C 00 18 38 */	and r0, r0, r3
/* 8019041C 0018D35C  7C C0 03 78 */	or r0, r6, r0
/* 80190420 0018D360  B0 01 00 08 */	sth r0, 8(r1)
/* 80190424 0018D364  4B F3 91 7D */	bl rand
/* 80190428 0018D368  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8019042C 0018D36C  3C 00 43 30 */	lis r0, 0x4330
/* 80190430 0018D370  90 61 00 14 */	stw r3, 0x14(r1)
/* 80190434 0018D374  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 80190438 0018D378  90 01 00 10 */	stw r0, 0x10(r1)
/* 8019043C 0018D37C  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 80190440 0018D380  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 80190444 0018D384  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 80190448 0018D388  EC 42 18 28 */	fsubs f2, f2, f3
/* 8019044C 0018D38C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80190450 0018D390  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80190454 0018D394  40 80 00 44 */	bge .L_80190498
/* 80190458 0018D398  88 1F 02 B9 */	lbz r0, 0x2b9(r31)
/* 8019045C 0018D39C  2C 00 00 01 */	cmpwi r0, 1
/* 80190460 0018D3A0  41 80 00 1C */	blt .L_8019047C
/* 80190464 0018D3A4  80 9F 02 58 */	lwz r4, 0x258(r31)
/* 80190468 0018D3A8  80 64 00 0C */	lwz r3, 0xc(r4)
/* 8019046C 0018D3AC  80 84 00 08 */	lwz r4, 8(r4)
/* 80190470 0018D3B0  48 22 74 81 */	bl "createSimpleChiru__3efxFR10Vector3<f>l"
/* 80190474 0018D3B4  38 00 00 00 */	li r0, 0
/* 80190478 0018D3B8  98 1F 02 B9 */	stb r0, 0x2b9(r31)
.L_8019047C:
/* 8019047C 0018D3BC  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 80190480 0018D3C0  28 04 00 00 */	cmplwi r4, 0
/* 80190484 0018D3C4  41 82 00 14 */	beq .L_80190498
/* 80190488 0018D3C8  7F E3 FB 78 */	mr r3, r31
/* 8019048C 0018D3CC  38 A0 28 0A */	li r5, 0x280a
/* 80190490 0018D3D0  38 C0 00 01 */	li r6, 1
/* 80190494 0018D3D4  4B FB 84 C1 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
.L_80190498:
/* 80190498 0018D3D8  88 1E 00 29 */	lbz r0, 0x29(r30)
/* 8019049C 0018D3DC  28 00 00 00 */	cmplwi r0, 0
/* 801904A0 0018D3E0  41 82 00 68 */	beq .L_80190508
/* 801904A4 0018D3E4  7F E3 FB 78 */	mr r3, r31
/* 801904A8 0018D3E8  38 80 28 0B */	li r4, 0x280b
/* 801904AC 0018D3EC  38 A0 00 01 */	li r5, 1
/* 801904B0 0018D3F0  4B FB 84 1D */	bl startSound__Q24Game4PikiFUlb
/* 801904B4 0018D3F4  7F E3 FB 78 */	mr r3, r31
/* 801904B8 0018D3F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801904BC 0018D3FC  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801904C0 0018D400  7D 89 03 A6 */	mtctr r12
/* 801904C4 0018D404  4E 80 04 21 */	bctrl 
/* 801904C8 0018D408  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801904CC 0018D40C  41 82 00 0C */	beq .L_801904D8
/* 801904D0 0018D410  38 60 00 05 */	li r3, 5
/* 801904D4 0018D414  48 0A 02 45 */	bl inc__Q24Game8DeathMgrFi
.L_801904D8:
/* 801904D8 0018D418  7F E3 FB 78 */	mr r3, r31
/* 801904DC 0018D41C  38 80 00 00 */	li r4, 0
/* 801904E0 0018D420  4B FA AC 11 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 801904E4 0018D424  7F C3 F3 78 */	mr r3, r30
/* 801904E8 0018D428  7F E4 FB 78 */	mr r4, r31
/* 801904EC 0018D42C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801904F0 0018D430  38 A0 00 19 */	li r5, 0x19
/* 801904F4 0018D434  38 C0 00 00 */	li r6, 0
/* 801904F8 0018D438  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801904FC 0018D43C  7D 89 03 A6 */	mtctr r12
/* 80190500 0018D440  4E 80 04 21 */	bctrl 
/* 80190504 0018D444  48 00 00 24 */	b .L_80190528
.L_80190508:
/* 80190508 0018D448  7F C3 F3 78 */	mr r3, r30
/* 8019050C 0018D44C  7F E4 FB 78 */	mr r4, r31
/* 80190510 0018D450  81 9E 00 00 */	lwz r12, 0(r30)
/* 80190514 0018D454  38 C1 00 08 */	addi r6, r1, 8
/* 80190518 0018D458  38 A0 00 07 */	li r5, 7
/* 8019051C 0018D45C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80190520 0018D460  7D 89 03 A6 */	mtctr r12
/* 80190524 0018D464  4E 80 04 21 */	bctrl 
.L_80190528:
/* 80190528 0018D468  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8019052C 0018D46C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80190530 0018D470  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80190534 0018D474  7C 08 03 A6 */	mtlr r0
/* 80190538 0018D478  38 21 00 20 */	addi r1, r1, 0x20
/* 8019053C 0018D47C  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game13PikiBlowStateFPQ24Game4PikiPQ23Sys8Triangle

.fn init__Q24Game19PikiKokeDamageStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 80190540 0018D480  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80190544 0018D484  7C 08 02 A6 */	mflr r0
/* 80190548 0018D488  28 05 00 00 */	cmplwi r5, 0
/* 8019054C 0018D48C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80190550 0018D490  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80190554 0018D494  7C 7F 1B 78 */	mr r31, r3
/* 80190558 0018D498  40 82 00 18 */	bne .L_80190570
/* 8019055C 0018D49C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80190560 0018D4A0  38 00 00 00 */	li r0, 0
/* 80190564 0018D4A4  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80190568 0018D4A8  B0 1F 00 14 */	sth r0, 0x14(r31)
/* 8019056C 0018D4AC  48 00 00 14 */	b .L_80190580
.L_80190570:
/* 80190570 0018D4B0  C0 05 00 04 */	lfs f0, 4(r5)
/* 80190574 0018D4B4  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80190578 0018D4B8  A0 05 00 00 */	lhz r0, 0(r5)
/* 8019057C 0018D4BC  B0 1F 00 14 */	sth r0, 0x14(r31)
.L_80190580:
/* 80190580 0018D4C0  28 04 00 00 */	cmplwi r4, 0
/* 80190584 0018D4C4  7C 86 23 78 */	mr r6, r4
/* 80190588 0018D4C8  41 82 00 08 */	beq .L_80190590
/* 8019058C 0018D4CC  38 C4 01 78 */	addi r6, r4, 0x178
.L_80190590:
/* 80190590 0018D4D0  81 84 00 00 */	lwz r12, 0(r4)
/* 80190594 0018D4D4  7C 83 23 78 */	mr r3, r4
/* 80190598 0018D4D8  38 80 00 17 */	li r4, 0x17
/* 8019059C 0018D4DC  38 A0 00 17 */	li r5, 0x17
/* 801905A0 0018D4E0  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801905A4 0018D4E4  38 E0 00 00 */	li r7, 0
/* 801905A8 0018D4E8  7D 89 03 A6 */	mtctr r12
/* 801905AC 0018D4EC  4E 80 04 21 */	bctrl 
/* 801905B0 0018D4F0  38 00 00 00 */	li r0, 0
/* 801905B4 0018D4F4  90 1F 00 18 */	stw r0, 0x18(r31)
/* 801905B8 0018D4F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801905BC 0018D4FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801905C0 0018D500  7C 08 03 A6 */	mtlr r0
/* 801905C4 0018D504  38 21 00 10 */	addi r1, r1, 0x10
/* 801905C8 0018D508  4E 80 00 20 */	blr 
.endfn init__Q24Game19PikiKokeDamageStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game19PikiKokeDamageStateFPQ24Game4Piki, global
/* 801905CC 0018D50C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801905D0 0018D510  7C 08 02 A6 */	mflr r0
/* 801905D4 0018D514  C0 42 AA 80 */	lfs f2, lbl_80518DE0@sda21(r2)
/* 801905D8 0018D518  90 01 00 24 */	stw r0, 0x24(r1)
/* 801905DC 0018D51C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801905E0 0018D520  7C 9F 23 78 */	mr r31, r4
/* 801905E4 0018D524  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801905E8 0018D528  7C 7E 1B 78 */	mr r30, r3
/* 801905EC 0018D52C  D0 44 01 E4 */	stfs f2, 0x1e4(r4)
/* 801905F0 0018D530  D0 44 01 E8 */	stfs f2, 0x1e8(r4)
/* 801905F4 0018D534  D0 44 01 EC */	stfs f2, 0x1ec(r4)
/* 801905F8 0018D538  D0 44 02 00 */	stfs f2, 0x200(r4)
/* 801905FC 0018D53C  D0 44 02 04 */	stfs f2, 0x204(r4)
/* 80190600 0018D540  D0 44 02 08 */	stfs f2, 0x208(r4)
/* 80190604 0018D544  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80190608 0018D548  2C 00 00 01 */	cmpwi r0, 1
/* 8019060C 0018D54C  40 82 00 60 */	bne .L_8019066C
/* 80190610 0018D550  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80190614 0018D554  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80190618 0018D558  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8019061C 0018D55C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80190620 0018D560  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 80190624 0018D564  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 80190628 0018D568  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8019062C 0018D56C  4C 40 13 82 */	cror 2, 0, 2
/* 80190630 0018D570  40 82 00 3C */	bne .L_8019066C
/* 80190634 0018D574  28 1F 00 00 */	cmplwi r31, 0
/* 80190638 0018D578  7F E6 FB 78 */	mr r6, r31
/* 8019063C 0018D57C  41 82 00 08 */	beq .L_80190644
/* 80190640 0018D580  38 C6 01 78 */	addi r6, r6, 0x178
.L_80190644:
/* 80190644 0018D584  81 9F 00 00 */	lwz r12, 0(r31)
/* 80190648 0018D588  7F E3 FB 78 */	mr r3, r31
/* 8019064C 0018D58C  38 80 00 0E */	li r4, 0xe
/* 80190650 0018D590  38 A0 00 0E */	li r5, 0xe
/* 80190654 0018D594  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80190658 0018D598  38 E0 00 00 */	li r7, 0
/* 8019065C 0018D59C  7D 89 03 A6 */	mtctr r12
/* 80190660 0018D5A0  4E 80 04 21 */	bctrl 
/* 80190664 0018D5A4  38 00 00 02 */	li r0, 2
/* 80190668 0018D5A8  90 1E 00 18 */	stw r0, 0x18(r30)
.L_8019066C:
/* 8019066C 0018D5AC  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 80190670 0018D5B0  2C 00 00 00 */	cmpwi r0, 0
/* 80190674 0018D5B4  40 82 00 24 */	bne .L_80190698
/* 80190678 0018D5B8  7F E3 FB 78 */	mr r3, r31
/* 8019067C 0018D5BC  38 80 00 17 */	li r4, 0x17
/* 80190680 0018D5C0  4B FA C8 AD */	bl assertMotion__Q24Game8FakePikiFi
/* 80190684 0018D5C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80190688 0018D5C8  40 82 00 10 */	bne .L_80190698
/* 8019068C 0018D5CC  38 00 00 01 */	li r0, 1
/* 80190690 0018D5D0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80190694 0018D5D4  48 00 00 7C */	b .L_80190710
.L_80190698:
/* 80190698 0018D5D8  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8019069C 0018D5DC  2C 00 00 02 */	cmpwi r0, 2
/* 801906A0 0018D5E0  40 82 00 70 */	bne .L_80190710
/* 801906A4 0018D5E4  7F E3 FB 78 */	mr r3, r31
/* 801906A8 0018D5E8  38 80 00 0E */	li r4, 0xe
/* 801906AC 0018D5EC  4B FA C8 81 */	bl assertMotion__Q24Game8FakePikiFi
/* 801906B0 0018D5F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801906B4 0018D5F4  40 82 00 5C */	bne .L_80190710
/* 801906B8 0018D5F8  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 801906BC 0018D5FC  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 801906C0 0018D600  41 82 00 30 */	beq .L_801906F0
/* 801906C4 0018D604  38 00 00 05 */	li r0, 5
/* 801906C8 0018D608  7F C3 F3 78 */	mr r3, r30
/* 801906CC 0018D60C  B0 01 00 08 */	sth r0, 8(r1)
/* 801906D0 0018D610  7F E4 FB 78 */	mr r4, r31
/* 801906D4 0018D614  38 C1 00 08 */	addi r6, r1, 8
/* 801906D8 0018D618  38 A0 00 13 */	li r5, 0x13
/* 801906DC 0018D61C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801906E0 0018D620  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801906E4 0018D624  7D 89 03 A6 */	mtctr r12
/* 801906E8 0018D628  4E 80 04 21 */	bctrl 
/* 801906EC 0018D62C  48 00 00 24 */	b .L_80190710
.L_801906F0:
/* 801906F0 0018D630  7F C3 F3 78 */	mr r3, r30
/* 801906F4 0018D634  7F E4 FB 78 */	mr r4, r31
/* 801906F8 0018D638  81 9E 00 00 */	lwz r12, 0(r30)
/* 801906FC 0018D63C  38 A0 00 00 */	li r5, 0
/* 80190700 0018D640  38 C0 00 00 */	li r6, 0
/* 80190704 0018D644  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80190708 0018D648  7D 89 03 A6 */	mtctr r12
/* 8019070C 0018D64C  4E 80 04 21 */	bctrl 
.L_80190710:
/* 80190710 0018D650  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80190714 0018D654  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80190718 0018D658  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8019071C 0018D65C  7C 08 03 A6 */	mtlr r0
/* 80190720 0018D660  38 21 00 20 */	addi r1, r1, 0x20
/* 80190724 0018D664  4E 80 00 20 */	blr 
.endfn exec__Q24Game19PikiKokeDamageStateFPQ24Game4Piki

.fn onFlute__Q24Game19PikiKokeDamageStateFPQ24Game4PikiPQ24Game4Navi, global
/* 80190728 0018D668  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8019072C 0018D66C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80190730 0018D670  60 00 80 00 */	ori r0, r0, 0x8000
/* 80190734 0018D674  B0 03 00 14 */	sth r0, 0x14(r3)
/* 80190738 0018D678  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8019073C 0018D67C  90 A4 02 C4 */	stw r5, 0x2c4(r4)
/* 80190740 0018D680  4E 80 00 20 */	blr 
.endfn onFlute__Q24Game19PikiKokeDamageStateFPQ24Game4PikiPQ24Game4Navi

.fn cleanup__Q24Game19PikiKokeDamageStateFPQ24Game4Piki, global
/* 80190744 0018D684  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80190748 0018D688  7C 08 02 A6 */	mflr r0
/* 8019074C 0018D68C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80190750 0018D690  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80190754 0018D694  7C 9F 23 78 */	mr r31, r4
/* 80190758 0018D698  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8019075C 0018D69C  7C 7E 1B 78 */	mr r30, r3
/* 80190760 0018D6A0  7F E3 FB 78 */	mr r3, r31
/* 80190764 0018D6A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80190768 0018D6A8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8019076C 0018D6AC  7D 89 03 A6 */	mtctr r12
/* 80190770 0018D6B0  4E 80 04 21 */	bctrl 
/* 80190774 0018D6B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80190778 0018D6B8  41 82 00 9C */	beq .L_80190814
/* 8019077C 0018D6BC  A0 7E 00 14 */	lhz r3, 0x14(r30)
/* 80190780 0018D6C0  54 60 04 21 */	rlwinm. r0, r3, 0, 0x10, 0x10
/* 80190784 0018D6C4  41 82 00 58 */	beq .L_801907DC
/* 80190788 0018D6C8  80 FF 02 C4 */	lwz r7, 0x2c4(r31)
/* 8019078C 0018D6CC  3C 60 80 4B */	lis r3, __vt__Q26PikiAI9ActionArg@ha
/* 80190790 0018D6D0  38 03 05 30 */	addi r0, r3, __vt__Q26PikiAI9ActionArg@l
/* 80190794 0018D6D4  38 60 00 00 */	li r3, 0
/* 80190798 0018D6D8  3C 80 80 4B */	lis r4, __vt__Q26PikiAI17CreatureActionArg@ha
/* 8019079C 0018D6DC  90 01 00 08 */	stw r0, 8(r1)
/* 801907A0 0018D6E0  38 04 05 24 */	addi r0, r4, __vt__Q26PikiAI17CreatureActionArg@l
/* 801907A4 0018D6E4  3C 80 80 4B */	lis r4, __vt__Q26PikiAI19ActFormationInitArg@ha
/* 801907A8 0018D6E8  90 01 00 08 */	stw r0, 8(r1)
/* 801907AC 0018D6EC  38 C4 0D 44 */	addi r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
/* 801907B0 0018D6F0  38 00 00 01 */	li r0, 1
/* 801907B4 0018D6F4  38 A1 00 08 */	addi r5, r1, 8
/* 801907B8 0018D6F8  98 61 00 11 */	stb r3, 0x11(r1)
/* 801907BC 0018D6FC  38 80 00 00 */	li r4, 0
/* 801907C0 0018D700  90 E1 00 0C */	stw r7, 0xc(r1)
/* 801907C4 0018D704  90 C1 00 08 */	stw r6, 8(r1)
/* 801907C8 0018D708  98 61 00 10 */	stb r3, 0x10(r1)
/* 801907CC 0018D70C  98 01 00 11 */	stb r0, 0x11(r1)
/* 801907D0 0018D710  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 801907D4 0018D714  48 00 67 C1 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 801907D8 0018D718  48 00 00 3C */	b .L_80190814
.L_801907DC:
/* 801907DC 0018D71C  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 801907E0 0018D720  41 82 00 24 */	beq .L_80190804
/* 801907E4 0018D724  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 801907E8 0018D728  2C 00 00 05 */	cmpwi r0, 5
/* 801907EC 0018D72C  41 82 00 28 */	beq .L_80190814
/* 801907F0 0018D730  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 801907F4 0018D734  38 80 00 01 */	li r4, 1
/* 801907F8 0018D738  38 A0 00 00 */	li r5, 0
/* 801907FC 0018D73C  48 00 67 99 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 80190800 0018D740  48 00 00 14 */	b .L_80190814
.L_80190804:
/* 80190804 0018D744  7F E3 FB 78 */	mr r3, r31
/* 80190808 0018D748  38 80 28 3F */	li r4, 0x283f
/* 8019080C 0018D74C  38 A0 00 01 */	li r5, 1
/* 80190810 0018D750  4B FB 80 BD */	bl startSound__Q24Game4PikiFUlb
.L_80190814:
/* 80190814 0018D754  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80190818 0018D758  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8019081C 0018D75C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80190820 0018D760  7C 08 03 A6 */	mtlr r0
/* 80190824 0018D764  38 21 00 20 */	addi r1, r1, 0x20
/* 80190828 0018D768  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game19PikiKokeDamageStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game19PikiKokeDamageStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 8019082C 0018D76C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80190830 0018D770  7C 08 02 A6 */	mflr r0
/* 80190834 0018D774  90 01 00 14 */	stw r0, 0x14(r1)
/* 80190838 0018D778  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8019083C 0018D77C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80190840 0018D780  40 82 00 3C */	bne .L_8019087C
/* 80190844 0018D784  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80190848 0018D788  2C 00 00 00 */	cmpwi r0, 0
/* 8019084C 0018D78C  40 82 00 10 */	bne .L_8019085C
/* 80190850 0018D790  38 00 00 01 */	li r0, 1
/* 80190854 0018D794  90 03 00 18 */	stw r0, 0x18(r3)
/* 80190858 0018D798  48 00 00 24 */	b .L_8019087C
.L_8019085C:
/* 8019085C 0018D79C  2C 00 00 02 */	cmpwi r0, 2
/* 80190860 0018D7A0  40 82 00 1C */	bne .L_8019087C
/* 80190864 0018D7A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80190868 0018D7A8  38 A0 00 00 */	li r5, 0
/* 8019086C 0018D7AC  38 C0 00 00 */	li r6, 0
/* 80190870 0018D7B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80190874 0018D7B4  7D 89 03 A6 */	mtctr r12
/* 80190878 0018D7B8  4E 80 04 21 */	bctrl 
.L_8019087C:
/* 8019087C 0018D7BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80190880 0018D7C0  7C 08 03 A6 */	mtlr r0
/* 80190884 0018D7C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80190888 0018D7C8  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game19PikiKokeDamageStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn init__Q24Game13PikiKokeStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8019088C 0018D7CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80190890 0018D7D0  7C 08 02 A6 */	mflr r0
/* 80190894 0018D7D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80190898 0018D7D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8019089C 0018D7DC  7C 9F 23 78 */	mr r31, r4
/* 801908A0 0018D7E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801908A4 0018D7E4  7C 7E 1B 78 */	mr r30, r3
/* 801908A8 0018D7E8  4B F3 8C F9 */	bl rand
/* 801908AC 0018D7EC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801908B0 0018D7F0  3C 00 43 30 */	lis r0, 0x4330
/* 801908B4 0018D7F4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801908B8 0018D7F8  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 801908BC 0018D7FC  90 01 00 08 */	stw r0, 8(r1)
/* 801908C0 0018D800  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 801908C4 0018D804  C8 41 00 08 */	lfd f2, 8(r1)
/* 801908C8 0018D808  C0 02 AA EC */	lfs f0, lbl_80518E4C@sda21(r2)
/* 801908CC 0018D80C  EC 42 18 28 */	fsubs f2, f2, f3
/* 801908D0 0018D810  EC 22 08 24 */	fdivs f1, f2, f1
/* 801908D4 0018D814  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801908D8 0018D818  40 80 00 40 */	bge .L_80190918
/* 801908DC 0018D81C  28 1F 00 00 */	cmplwi r31, 0
/* 801908E0 0018D820  7F E6 FB 78 */	mr r6, r31
/* 801908E4 0018D824  41 82 00 08 */	beq .L_801908EC
/* 801908E8 0018D828  38 DF 01 78 */	addi r6, r31, 0x178
.L_801908EC:
/* 801908EC 0018D82C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801908F0 0018D830  7F E3 FB 78 */	mr r3, r31
/* 801908F4 0018D834  38 80 00 3C */	li r4, 0x3c
/* 801908F8 0018D838  38 A0 00 3C */	li r5, 0x3c
/* 801908FC 0018D83C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80190900 0018D840  38 E0 00 00 */	li r7, 0
/* 80190904 0018D844  7D 89 03 A6 */	mtctr r12
/* 80190908 0018D848  4E 80 04 21 */	bctrl 
/* 8019090C 0018D84C  38 00 00 01 */	li r0, 1
/* 80190910 0018D850  98 1E 00 11 */	stb r0, 0x11(r30)
/* 80190914 0018D854  48 00 00 3C */	b .L_80190950
.L_80190918:
/* 80190918 0018D858  28 1F 00 00 */	cmplwi r31, 0
/* 8019091C 0018D85C  7F E6 FB 78 */	mr r6, r31
/* 80190920 0018D860  41 82 00 08 */	beq .L_80190928
/* 80190924 0018D864  38 DF 01 78 */	addi r6, r31, 0x178
.L_80190928:
/* 80190928 0018D868  81 9F 00 00 */	lwz r12, 0(r31)
/* 8019092C 0018D86C  7F E3 FB 78 */	mr r3, r31
/* 80190930 0018D870  38 80 00 1A */	li r4, 0x1a
/* 80190934 0018D874  38 A0 00 1A */	li r5, 0x1a
/* 80190938 0018D878  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8019093C 0018D87C  38 E0 00 00 */	li r7, 0
/* 80190940 0018D880  7D 89 03 A6 */	mtctr r12
/* 80190944 0018D884  4E 80 04 21 */	bctrl 
/* 80190948 0018D888  38 00 00 00 */	li r0, 0
/* 8019094C 0018D88C  98 1E 00 11 */	stb r0, 0x11(r30)
.L_80190950:
/* 80190950 0018D890  4B F3 8C 51 */	bl rand
/* 80190954 0018D894  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80190958 0018D898  3C 00 43 30 */	lis r0, 0x4330
/* 8019095C 0018D89C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80190960 0018D8A0  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 80190964 0018D8A4  90 01 00 08 */	stw r0, 8(r1)
/* 80190968 0018D8A8  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 8019096C 0018D8AC  C8 01 00 08 */	lfd f0, 8(r1)
/* 80190970 0018D8B0  C0 22 AB 28 */	lfs f1, lbl_80518E88@sda21(r2)
/* 80190974 0018D8B4  EC 60 18 28 */	fsubs f3, f0, f3
/* 80190978 0018D8B8  C0 02 AA 70 */	lfs f0, lbl_80518DD0@sda21(r2)
/* 8019097C 0018D8BC  EC 43 10 24 */	fdivs f2, f3, f2
/* 80190980 0018D8C0  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 80190984 0018D8C4  FC 00 00 1E */	fctiwz f0, f0
/* 80190988 0018D8C8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8019098C 0018D8CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80190990 0018D8D0  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80190994 0018D8D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80190998 0018D8D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8019099C 0018D8DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801909A0 0018D8E0  7C 08 03 A6 */	mtlr r0
/* 801909A4 0018D8E4  38 21 00 20 */	addi r1, r1, 0x20
/* 801909A8 0018D8E8  4E 80 00 20 */	blr 
.endfn init__Q24Game13PikiKokeStateFPQ24Game4PikiPQ24Game8StateArg

.fn onFlute__Q24Game13PikiKokeStateFPQ24Game4PikiPQ24Game4Navi, global
/* 801909AC 0018D8EC  38 00 00 00 */	li r0, 0
/* 801909B0 0018D8F0  98 03 00 10 */	stb r0, 0x10(r3)
/* 801909B4 0018D8F4  4E 80 00 20 */	blr 
.endfn onFlute__Q24Game13PikiKokeStateFPQ24Game4PikiPQ24Game4Navi

.fn exec__Q24Game13PikiKokeStateFPQ24Game4Piki, global
/* 801909B8 0018D8F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801909BC 0018D8FC  7C 08 02 A6 */	mflr r0
/* 801909C0 0018D900  90 01 00 14 */	stw r0, 0x14(r1)
/* 801909C4 0018D904  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801909C8 0018D908  7C 9F 23 78 */	mr r31, r4
/* 801909CC 0018D90C  80 84 01 B8 */	lwz r4, 0x1b8(r4)
/* 801909D0 0018D910  28 04 00 00 */	cmplwi r4, 0
/* 801909D4 0018D914  41 82 00 0C */	beq .L_801909E0
/* 801909D8 0018D918  A8 04 00 20 */	lha r0, 0x20(r4)
/* 801909DC 0018D91C  48 00 00 08 */	b .L_801909E4
.L_801909E0:
/* 801909E0 0018D920  38 00 FF FF */	li r0, -1
.L_801909E4:
/* 801909E4 0018D924  2C 00 00 1A */	cmpwi r0, 0x1a
/* 801909E8 0018D928  41 82 00 28 */	beq .L_80190A10
/* 801909EC 0018D92C  2C 00 00 3C */	cmpwi r0, 0x3c
/* 801909F0 0018D930  41 82 00 20 */	beq .L_80190A10
/* 801909F4 0018D934  81 83 00 00 */	lwz r12, 0(r3)
/* 801909F8 0018D938  7F E4 FB 78 */	mr r4, r31
/* 801909FC 0018D93C  38 A0 00 00 */	li r5, 0
/* 80190A00 0018D940  38 C0 00 00 */	li r6, 0
/* 80190A04 0018D944  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80190A08 0018D948  7D 89 03 A6 */	mtctr r12
/* 80190A0C 0018D94C  4E 80 04 21 */	bctrl 
.L_80190A10:
/* 80190A10 0018D950  C0 42 AB 2C */	lfs f2, lbl_80518E8C@sda21(r2)
/* 80190A14 0018D954  C0 1F 01 E4 */	lfs f0, 0x1e4(r31)
/* 80190A18 0018D958  C0 3F 01 E8 */	lfs f1, 0x1e8(r31)
/* 80190A1C 0018D95C  C0 7F 01 EC */	lfs f3, 0x1ec(r31)
/* 80190A20 0018D960  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80190A24 0018D964  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80190A28 0018D968  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80190A2C 0018D96C  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80190A30 0018D970  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 80190A34 0018D974  D0 5F 01 EC */	stfs f2, 0x1ec(r31)
/* 80190A38 0018D978  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80190A3C 0018D97C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80190A40 0018D980  7C 08 03 A6 */	mtlr r0
/* 80190A44 0018D984  38 21 00 10 */	addi r1, r1, 0x10
/* 80190A48 0018D988  4E 80 00 20 */	blr 
.endfn exec__Q24Game13PikiKokeStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game13PikiKokeStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 80190A4C 0018D98C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80190A50 0018D990  7C 08 02 A6 */	mflr r0
/* 80190A54 0018D994  90 01 00 14 */	stw r0, 0x14(r1)
/* 80190A58 0018D998  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80190A5C 0018D99C  2C 00 00 C8 */	cmpwi r0, 0xc8
/* 80190A60 0018D9A0  41 82 00 2C */	beq .L_80190A8C
/* 80190A64 0018D9A4  40 80 00 1C */	bge .L_80190A80
/* 80190A68 0018D9A8  2C 00 00 02 */	cmpwi r0, 2
/* 80190A6C 0018D9AC  41 82 00 54 */	beq .L_80190AC0
/* 80190A70 0018D9B0  40 80 00 BC */	bge .L_80190B2C
/* 80190A74 0018D9B4  2C 00 00 01 */	cmpwi r0, 1
/* 80190A78 0018D9B8  40 80 00 68 */	bge .L_80190AE0
/* 80190A7C 0018D9BC  48 00 00 B0 */	b .L_80190B2C
.L_80190A80:
/* 80190A80 0018D9C0  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80190A84 0018D9C4  41 82 00 90 */	beq .L_80190B14
/* 80190A88 0018D9C8  48 00 00 A4 */	b .L_80190B2C
.L_80190A8C:
/* 80190A8C 0018D9CC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80190A90 0018D9D0  28 00 00 00 */	cmplwi r0, 0
/* 80190A94 0018D9D4  41 82 00 18 */	beq .L_80190AAC
/* 80190A98 0018D9D8  7C 83 23 78 */	mr r3, r4
/* 80190A9C 0018D9DC  38 80 28 43 */	li r4, 0x2843
/* 80190AA0 0018D9E0  38 A0 00 01 */	li r5, 1
/* 80190AA4 0018D9E4  4B FB 7E 29 */	bl startSound__Q24Game4PikiFUlb
/* 80190AA8 0018D9E8  48 00 00 84 */	b .L_80190B2C
.L_80190AAC:
/* 80190AAC 0018D9EC  7C 83 23 78 */	mr r3, r4
/* 80190AB0 0018D9F0  38 80 28 44 */	li r4, 0x2844
/* 80190AB4 0018D9F4  38 A0 00 01 */	li r5, 1
/* 80190AB8 0018D9F8  4B FB 7E 15 */	bl startSound__Q24Game4PikiFUlb
/* 80190ABC 0018D9FC  48 00 00 70 */	b .L_80190B2C
.L_80190AC0:
/* 80190AC0 0018DA00  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80190AC4 0018DA04  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 80190AC8 0018DA08  D0 04 02 04 */	stfs f0, 0x204(r4)
/* 80190ACC 0018DA0C  D0 04 02 08 */	stfs f0, 0x208(r4)
/* 80190AD0 0018DA10  D0 04 01 E4 */	stfs f0, 0x1e4(r4)
/* 80190AD4 0018DA14  D0 04 01 E8 */	stfs f0, 0x1e8(r4)
/* 80190AD8 0018DA18  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 80190ADC 0018DA1C  48 00 00 50 */	b .L_80190B2C
.L_80190AE0:
/* 80190AE0 0018DA20  88 A3 00 10 */	lbz r5, 0x10(r3)
/* 80190AE4 0018DA24  38 05 FF FF */	addi r0, r5, -1
/* 80190AE8 0018DA28  98 03 00 10 */	stb r0, 0x10(r3)
/* 80190AEC 0018DA2C  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80190AF0 0018DA30  7C 00 07 75 */	extsb. r0, r0
/* 80190AF4 0018DA34  41 81 00 38 */	bgt .L_80190B2C
/* 80190AF8 0018DA38  88 04 01 C4 */	lbz r0, 0x1c4(r4)
/* 80190AFC 0018DA3C  60 00 00 02 */	ori r0, r0, 2
/* 80190B00 0018DA40  98 04 01 C4 */	stb r0, 0x1c4(r4)
/* 80190B04 0018DA44  88 04 01 E0 */	lbz r0, 0x1e0(r4)
/* 80190B08 0018DA48  60 00 00 02 */	ori r0, r0, 2
/* 80190B0C 0018DA4C  98 04 01 E0 */	stb r0, 0x1e0(r4)
/* 80190B10 0018DA50  48 00 00 1C */	b .L_80190B2C
.L_80190B14:
/* 80190B14 0018DA54  81 83 00 00 */	lwz r12, 0(r3)
/* 80190B18 0018DA58  38 A0 00 00 */	li r5, 0
/* 80190B1C 0018DA5C  38 C0 00 00 */	li r6, 0
/* 80190B20 0018DA60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80190B24 0018DA64  7D 89 03 A6 */	mtctr r12
/* 80190B28 0018DA68  4E 80 04 21 */	bctrl 
.L_80190B2C:
/* 80190B2C 0018DA6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80190B30 0018DA70  7C 08 03 A6 */	mtlr r0
/* 80190B34 0018DA74  38 21 00 10 */	addi r1, r1, 0x10
/* 80190B38 0018DA78  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game13PikiKokeStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game13PikiKokeStateFPQ24Game4Piki, global
/* 80190B3C 0018DA7C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13PikiKokeStateFPQ24Game4Piki

.fn init__Q24Game14PikiDrownStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 80190B40 0018DA80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80190B44 0018DA84  7C 08 02 A6 */	mflr r0
/* 80190B48 0018DA88  38 A0 00 00 */	li r5, 0
/* 80190B4C 0018DA8C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80190B50 0018DA90  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80190B54 0018DA94  7C 9F 23 78 */	mr r31, r4
/* 80190B58 0018DA98  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80190B5C 0018DA9C  7C 7E 1B 78 */	mr r30, r3
/* 80190B60 0018DAA0  80 64 02 94 */	lwz r3, 0x294(r4)
/* 80190B64 0018DAA4  38 80 00 01 */	li r4, 1
/* 80190B68 0018DAA8  48 00 64 2D */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 80190B6C 0018DAAC  28 1F 00 00 */	cmplwi r31, 0
/* 80190B70 0018DAB0  7F E6 FB 78 */	mr r6, r31
/* 80190B74 0018DAB4  41 82 00 08 */	beq .L_80190B7C
/* 80190B78 0018DAB8  38 DF 01 78 */	addi r6, r31, 0x178
.L_80190B7C:
/* 80190B7C 0018DABC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80190B80 0018DAC0  7F E3 FB 78 */	mr r3, r31
/* 80190B84 0018DAC4  38 80 00 25 */	li r4, 0x25
/* 80190B88 0018DAC8  38 A0 00 25 */	li r5, 0x25
/* 80190B8C 0018DACC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80190B90 0018DAD0  38 E0 00 00 */	li r7, 0
/* 80190B94 0018DAD4  7D 89 03 A6 */	mtctr r12
/* 80190B98 0018DAD8  4E 80 04 21 */	bctrl 
/* 80190B9C 0018DADC  80 7F 01 B8 */	lwz r3, 0x1b8(r31)
/* 80190BA0 0018DAE0  28 03 00 00 */	cmplwi r3, 0
/* 80190BA4 0018DAE4  41 82 00 0C */	beq .L_80190BB0
/* 80190BA8 0018DAE8  A8 03 00 20 */	lha r0, 0x20(r3)
/* 80190BAC 0018DAEC  48 00 00 08 */	b .L_80190BB4
.L_80190BB0:
/* 80190BB0 0018DAF0  38 00 FF FF */	li r0, -1
.L_80190BB4:
/* 80190BB4 0018DAF4  2C 00 00 25 */	cmpwi r0, 0x25
/* 80190BB8 0018DAF8  40 82 00 10 */	bne .L_80190BC8
/* 80190BBC 0018DAFC  38 00 00 00 */	li r0, 0
/* 80190BC0 0018DB00  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80190BC4 0018DB04  48 00 00 3C */	b .L_80190C00
.L_80190BC8:
/* 80190BC8 0018DB08  38 00 00 01 */	li r0, 1
/* 80190BCC 0018DB0C  28 1F 00 00 */	cmplwi r31, 0
/* 80190BD0 0018DB10  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80190BD4 0018DB14  7F E6 FB 78 */	mr r6, r31
/* 80190BD8 0018DB18  41 82 00 08 */	beq .L_80190BE0
/* 80190BDC 0018DB1C  38 DF 01 78 */	addi r6, r31, 0x178
.L_80190BE0:
/* 80190BE0 0018DB20  81 9F 00 00 */	lwz r12, 0(r31)
/* 80190BE4 0018DB24  7F E3 FB 78 */	mr r3, r31
/* 80190BE8 0018DB28  38 80 00 26 */	li r4, 0x26
/* 80190BEC 0018DB2C  38 A0 00 26 */	li r5, 0x26
/* 80190BF0 0018DB30  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80190BF4 0018DB34  38 E0 00 00 */	li r7, 0
/* 80190BF8 0018DB38  7D 89 03 A6 */	mtctr r12
/* 80190BFC 0018DB3C  4E 80 04 21 */	bctrl 
.L_80190C00:
/* 80190C00 0018DB40  4B F3 89 A1 */	bl rand
/* 80190C04 0018DB44  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80190C08 0018DB48  3C 80 43 30 */	lis r4, 0x4330
/* 80190C0C 0018DB4C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80190C10 0018DB50  38 00 00 00 */	li r0, 0
/* 80190C14 0018DB54  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 80190C18 0018DB58  7F E3 FB 78 */	mr r3, r31
/* 80190C1C 0018DB5C  90 81 00 08 */	stw r4, 8(r1)
/* 80190C20 0018DB60  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 80190C24 0018DB64  C8 01 00 08 */	lfd f0, 8(r1)
/* 80190C28 0018DB68  C0 22 AA D0 */	lfs f1, lbl_80518E30@sda21(r2)
/* 80190C2C 0018DB6C  EC 60 18 28 */	fsubs f3, f0, f3
/* 80190C30 0018DB70  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80190C34 0018DB74  EC 43 10 24 */	fdivs f2, f3, f2
/* 80190C38 0018DB78  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80190C3C 0018DB7C  FC 20 08 1E */	fctiwz f1, f1
/* 80190C40 0018DB80  D8 21 00 10 */	stfd f1, 0x10(r1)
/* 80190C44 0018DB84  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80190C48 0018DB88  38 84 00 06 */	addi r4, r4, 6
/* 80190C4C 0018DB8C  B0 9E 00 12 */	sth r4, 0x12(r30)
/* 80190C50 0018DB90  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80190C54 0018DB94  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80190C58 0018DB98  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80190C5C 0018DB9C  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 80190C60 0018DBA0  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80190C64 0018DBA4  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80190C68 0018DBA8  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80190C6C 0018DBAC  48 00 E9 09 */	bl isStickTo__Q24Game8CreatureFv
/* 80190C70 0018DBB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80190C74 0018DBB4  41 82 00 0C */	beq .L_80190C80
/* 80190C78 0018DBB8  7F E3 FB 78 */	mr r3, r31
/* 80190C7C 0018DBBC  48 00 E7 A9 */	bl endStick__Q24Game8CreatureFv
.L_80190C80:
/* 80190C80 0018DBC0  38 00 00 00 */	li r0, 0
/* 80190C84 0018DBC4  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80190C88 0018DBC8  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80190C8C 0018DBCC  98 1E 00 30 */	stb r0, 0x30(r30)
/* 80190C90 0018DBD0  B0 1E 00 16 */	sth r0, 0x16(r30)
/* 80190C94 0018DBD4  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 80190C98 0018DBD8  98 1E 00 1C */	stb r0, 0x1c(r30)
/* 80190C9C 0018DBDC  83 DF 02 58 */	lwz r30, 0x258(r31)
/* 80190CA0 0018DBE0  7F C3 F3 78 */	mr r3, r30
/* 80190CA4 0018DBE4  48 22 7E 49 */	bl killMoe___Q23efx9TPkEffectFv
/* 80190CA8 0018DBE8  80 7E 00 00 */	lwz r3, 0(r30)
/* 80190CAC 0018DBEC  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80190CB0 0018DBF0  41 82 00 28 */	beq .L_80190CD8
/* 80190CB4 0018DBF4  54 60 07 B8 */	rlwinm r0, r3, 0, 0x1e, 0x1c
/* 80190CB8 0018DBF8  7F C3 F3 78 */	mr r3, r30
/* 80190CBC 0018DBFC  90 1E 00 00 */	stw r0, 0(r30)
/* 80190CC0 0018DC00  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 80190CC4 0018DC04  48 22 7E F1 */	bl "createMoeSmoke___Q23efx9TPkEffectFP10Vector3<f>"
/* 80190CC8 0018DC08  38 00 00 3C */	li r0, 0x3c
/* 80190CCC 0018DC0C  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80190CD0 0018DC10  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80190CD4 0018DC14  48 22 68 FD */	bl "createSimpleChinka__3efxFR10Vector3<f>"
.L_80190CD8:
/* 80190CD8 0018DC18  83 DF 02 58 */	lwz r30, 0x258(r31)
/* 80190CDC 0018DC1C  7F C3 F3 78 */	mr r3, r30
/* 80190CE0 0018DC20  48 22 80 55 */	bl killWater___Q23efx9TPkEffectFv
/* 80190CE4 0018DC24  80 7E 00 00 */	lwz r3, 0(r30)
/* 80190CE8 0018DC28  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 80190CEC 0018DC2C  41 82 00 14 */	beq .L_80190D00
/* 80190CF0 0018DC30  54 60 07 34 */	rlwinm r0, r3, 0, 0x1c, 0x1a
/* 80190CF4 0018DC34  90 1E 00 00 */	stw r0, 0(r30)
/* 80190CF8 0018DC38  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80190CFC 0018DC3C  48 22 6B 3D */	bl "createSimpleWaterOff__3efxFR10Vector3<f>"
.L_80190D00:
/* 80190D00 0018DC40  83 DF 02 58 */	lwz r30, 0x258(r31)
/* 80190D04 0018DC44  7F C3 F3 78 */	mr r3, r30
/* 80190D08 0018DC48  48 22 7E 89 */	bl killChudoku___Q23efx9TPkEffectFv
/* 80190D0C 0018DC4C  80 7E 00 00 */	lwz r3, 0(r30)
/* 80190D10 0018DC50  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80190D14 0018DC54  41 82 00 14 */	beq .L_80190D28
/* 80190D18 0018DC58  54 60 07 76 */	rlwinm r0, r3, 0, 0x1d, 0x1b
/* 80190D1C 0018DC5C  90 1E 00 00 */	stw r0, 0(r30)
/* 80190D20 0018DC60  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80190D24 0018DC64  48 22 69 09 */	bl "createSimpleGedoku__3efxFR10Vector3<f>"
.L_80190D28:
/* 80190D28 0018DC68  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80190D2C 0018DC6C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80190D30 0018DC70  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80190D34 0018DC74  7C 08 03 A6 */	mtlr r0
/* 80190D38 0018DC78  38 21 00 20 */	addi r1, r1, 0x20
/* 80190D3C 0018DC7C  4E 80 00 20 */	blr 
.endfn init__Q24Game14PikiDrownStateFPQ24Game4PikiPQ24Game8StateArg

.fn soft_transittable__Q24Game14PikiDrownStateFi, global
/* 80190D40 0018DC80  38 A4 FF ED */	addi r5, r4, -19
/* 80190D44 0018DC84  38 60 00 01 */	li r3, 1
/* 80190D48 0018DC88  20 05 00 01 */	subfic r0, r5, 1
/* 80190D4C 0018DC8C  7C 65 2B 38 */	orc r5, r3, r5
/* 80190D50 0018DC90  7C 66 1B 78 */	mr r6, r3
/* 80190D54 0018DC94  54 00 F8 7E */	srwi r0, r0, 1
/* 80190D58 0018DC98  7C 00 28 50 */	subf r0, r0, r5
/* 80190D5C 0018DC9C  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 80190D60 0018DCA0  40 82 00 08 */	bne .L_80190D68
/* 80190D64 0018DCA4  38 C0 00 00 */	li r6, 0
.L_80190D68:
/* 80190D68 0018DCA8  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 80190D6C 0018DCAC  4C 82 00 20 */	bnelr 
/* 80190D70 0018DCB0  2C 04 00 05 */	cmpwi r4, 5
/* 80190D74 0018DCB4  4D 82 00 20 */	beqlr 
/* 80190D78 0018DCB8  38 60 00 00 */	li r3, 0
/* 80190D7C 0018DCBC  4E 80 00 20 */	blr 
.endfn soft_transittable__Q24Game14PikiDrownStateFi

.fn onFlute__Q24Game14PikiDrownStateFPQ24Game4PikiPQ24Game4Navi, global
/* 80190D80 0018DCC0  90 A3 00 20 */	stw r5, 0x20(r3)
/* 80190D84 0018DCC4  38 00 00 01 */	li r0, 1
/* 80190D88 0018DCC8  98 03 00 30 */	stb r0, 0x30(r3)
/* 80190D8C 0018DCCC  4E 80 00 20 */	blr 
.endfn onFlute__Q24Game14PikiDrownStateFPQ24Game4PikiPQ24Game4Navi

.fn outWaterCallback__Q24Game14PikiDrownStateFPQ24Game4Piki, global
/* 80190D90 0018DCD0  38 00 00 01 */	li r0, 1
/* 80190D94 0018DCD4  98 03 00 1C */	stb r0, 0x1c(r3)
/* 80190D98 0018DCD8  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q24Game14PikiDrownStateFPQ24Game4Piki

.fn exec__Q24Game14PikiDrownStateFPQ24Game4Piki, global
/* 80190D9C 0018DCDC  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80190DA0 0018DCE0  7C 08 02 A6 */	mflr r0
/* 80190DA4 0018DCE4  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80190DA8 0018DCE8  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80190DAC 0018DCEC  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 80190DB0 0018DCF0  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80190DB4 0018DCF4  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 80190DB8 0018DCF8  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 80190DBC 0018DCFC  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 80190DC0 0018DD00  BF 61 00 9C */	stmw r27, 0x9c(r1)
/* 80190DC4 0018DD04  7C 7E 1B 78 */	mr r30, r3
/* 80190DC8 0018DD08  7C 9F 23 78 */	mr r31, r4
/* 80190DCC 0018DD0C  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 80190DD0 0018DD10  28 00 00 00 */	cmplwi r0, 0
/* 80190DD4 0018DD14  41 82 01 34 */	beq .L_80190F08
/* 80190DD8 0018DD18  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 80190DDC 0018DD1C  28 04 00 00 */	cmplwi r4, 0
/* 80190DE0 0018DD20  41 82 00 58 */	beq .L_80190E38
/* 80190DE4 0018DD24  81 84 00 00 */	lwz r12, 0(r4)
/* 80190DE8 0018DD28  38 61 00 6C */	addi r3, r1, 0x6c
/* 80190DEC 0018DD2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80190DF0 0018DD30  7D 89 03 A6 */	mtctr r12
/* 80190DF4 0018DD34  4E 80 04 21 */	bctrl 
/* 80190DF8 0018DD38  7F E4 FB 78 */	mr r4, r31
/* 80190DFC 0018DD3C  38 61 00 60 */	addi r3, r1, 0x60
/* 80190E00 0018DD40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80190E04 0018DD44  C3 C1 00 6C */	lfs f30, 0x6c(r1)
/* 80190E08 0018DD48  81 8C 00 08 */	lwz r12, 8(r12)
/* 80190E0C 0018DD4C  C3 E1 00 74 */	lfs f31, 0x74(r1)
/* 80190E10 0018DD50  7D 89 03 A6 */	mtctr r12
/* 80190E14 0018DD54  4E 80 04 21 */	bctrl 
/* 80190E18 0018DD58  C0 21 00 60 */	lfs f1, 0x60(r1)
/* 80190E1C 0018DD5C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80190E20 0018DD60  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 80190E24 0018DD64  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80190E28 0018DD68  EC 3E 08 28 */	fsubs f1, f30, f1
/* 80190E2C 0018DD6C  EC 5F 00 28 */	fsubs f2, f31, f0
/* 80190E30 0018DD70  4B EA 42 D9 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80190E34 0018DD74  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
.L_80190E38:
/* 80190E38 0018DD78  C0 BF 01 FC */	lfs f5, 0x1fc(r31)
/* 80190E3C 0018DD7C  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80190E40 0018DD80  FC 20 28 90 */	fmr f1, f5
/* 80190E44 0018DD84  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80190E48 0018DD88  40 80 00 08 */	bge .L_80190E50
/* 80190E4C 0018DD8C  FC 20 28 50 */	fneg f1, f5
.L_80190E50:
/* 80190E50 0018DD90  C0 42 AA D4 */	lfs f2, lbl_80518E34@sda21(r2)
/* 80190E54 0018DD94  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80190E58 0018DD98  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80190E5C 0018DD9C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80190E60 0018DDA0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80190E64 0018DDA4  C0 62 AA F8 */	lfs f3, lbl_80518E58@sda21(r2)
/* 80190E68 0018DDA8  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80190E6C 0018DDAC  FC 00 08 1E */	fctiwz f0, f1
/* 80190E70 0018DDB0  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 80190E74 0018DDB4  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80190E78 0018DDB8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80190E7C 0018DDBC  7C 64 02 14 */	add r3, r4, r0
/* 80190E80 0018DDC0  C0 03 00 04 */	lfs f0, 4(r3)
/* 80190E84 0018DDC4  EC 83 00 32 */	fmuls f4, f3, f0
/* 80190E88 0018DDC8  40 80 00 28 */	bge .L_80190EB0
/* 80190E8C 0018DDCC  C0 02 AA D8 */	lfs f0, lbl_80518E38@sda21(r2)
/* 80190E90 0018DDD0  EC 05 00 32 */	fmuls f0, f5, f0
/* 80190E94 0018DDD4  FC 00 00 1E */	fctiwz f0, f0
/* 80190E98 0018DDD8  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 80190E9C 0018DDDC  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80190EA0 0018DDE0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80190EA4 0018DDE4  7C 04 04 2E */	lfsx f0, r4, r0
/* 80190EA8 0018DDE8  FC 00 00 50 */	fneg f0, f0
/* 80190EAC 0018DDEC  48 00 00 1C */	b .L_80190EC8
.L_80190EB0:
/* 80190EB0 0018DDF0  EC 05 00 B2 */	fmuls f0, f5, f2
/* 80190EB4 0018DDF4  FC 00 00 1E */	fctiwz f0, f0
/* 80190EB8 0018DDF8  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 80190EBC 0018DDFC  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 80190EC0 0018DE00  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80190EC4 0018DE04  7C 04 04 2E */	lfsx f0, r4, r0
.L_80190EC8:
/* 80190EC8 0018DE08  EC 23 00 32 */	fmuls f1, f3, f0
/* 80190ECC 0018DE0C  C0 02 AB 30 */	lfs f0, lbl_80518E90@sda21(r2)
/* 80190ED0 0018DE10  38 00 00 05 */	li r0, 5
/* 80190ED4 0018DE14  7F C3 F3 78 */	mr r3, r30
/* 80190ED8 0018DE18  7F E4 FB 78 */	mr r4, r31
/* 80190EDC 0018DE1C  38 C1 00 08 */	addi r6, r1, 8
/* 80190EE0 0018DE20  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 80190EE4 0018DE24  38 A0 00 13 */	li r5, 0x13
/* 80190EE8 0018DE28  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80190EEC 0018DE2C  D0 9F 02 08 */	stfs f4, 0x208(r31)
/* 80190EF0 0018DE30  B0 01 00 08 */	sth r0, 8(r1)
/* 80190EF4 0018DE34  81 9E 00 00 */	lwz r12, 0(r30)
/* 80190EF8 0018DE38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80190EFC 0018DE3C  7D 89 03 A6 */	mtctr r12
/* 80190F00 0018DE40  4E 80 04 21 */	bctrl 
/* 80190F04 0018DE44  48 00 05 B8 */	b .L_801914BC
.L_80190F08:
/* 80190F08 0018DE48  80 7F 01 90 */	lwz r3, 0x190(r31)
/* 80190F0C 0018DE4C  28 03 00 00 */	cmplwi r3, 0
/* 80190F10 0018DE50  41 82 01 F4 */	beq .L_80191104
/* 80190F14 0018DE54  81 83 00 00 */	lwz r12, 0(r3)
/* 80190F18 0018DE58  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80190F1C 0018DE5C  7D 89 03 A6 */	mtctr r12
/* 80190F20 0018DE60  4E 80 04 21 */	bctrl 
/* 80190F24 0018DE64  7F E4 FB 78 */	mr r4, r31
/* 80190F28 0018DE68  FF C0 08 90 */	fmr f30, f1
/* 80190F2C 0018DE6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80190F30 0018DE70  38 61 00 54 */	addi r3, r1, 0x54
/* 80190F34 0018DE74  81 8C 00 08 */	lwz r12, 8(r12)
/* 80190F38 0018DE78  7D 89 03 A6 */	mtctr r12
/* 80190F3C 0018DE7C  4E 80 04 21 */	bctrl 
/* 80190F40 0018DE80  A0 1E 00 10 */	lhz r0, 0x10(r30)
/* 80190F44 0018DE84  28 00 00 00 */	cmplwi r0, 0
/* 80190F48 0018DE88  40 82 01 40 */	bne .L_80191088
/* 80190F4C 0018DE8C  A0 1E 00 16 */	lhz r0, 0x16(r30)
/* 80190F50 0018DE90  2C 00 00 01 */	cmpwi r0, 1
/* 80190F54 0018DE94  41 82 01 B0 */	beq .L_80191104
/* 80190F58 0018DE98  40 80 00 10 */	bge .L_80190F68
/* 80190F5C 0018DE9C  2C 00 00 00 */	cmpwi r0, 0
/* 80190F60 0018DEA0  40 80 00 14 */	bge .L_80190F74
/* 80190F64 0018DEA4  48 00 01 A0 */	b .L_80191104
.L_80190F68:
/* 80190F68 0018DEA8  2C 00 00 03 */	cmpwi r0, 3
/* 80190F6C 0018DEAC  40 80 01 98 */	bge .L_80191104
/* 80190F70 0018DEB0  48 00 00 50 */	b .L_80190FC0
.L_80190F74:
/* 80190F74 0018DEB4  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 80190F78 0018DEB8  C0 02 AB 34 */	lfs f0, lbl_80518E94@sda21(r2)
/* 80190F7C 0018DEBC  D0 3F 02 08 */	stfs f1, 0x208(r31)
/* 80190F80 0018DEC0  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 80190F84 0018DEC4  C0 5F 02 04 */	lfs f2, 0x204(r31)
/* 80190F88 0018DEC8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80190F8C 0018DECC  40 80 00 18 */	bge .L_80190FA4
/* 80190F90 0018DED0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80190F94 0018DED4  C0 22 AB 38 */	lfs f1, lbl_80518E98@sda21(r2)
/* 80190F98 0018DED8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80190F9C 0018DEDC  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 80190FA0 0018DEE0  D0 1F 02 04 */	stfs f0, 0x204(r31)
.L_80190FA4:
/* 80190FA4 0018DEE4  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 80190FA8 0018DEE8  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80190FAC 0018DEEC  C0 1F 02 04 */	lfs f0, 0x204(r31)
/* 80190FB0 0018DEF0  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80190FB4 0018DEF4  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 80190FB8 0018DEF8  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80190FBC 0018DEFC  48 00 01 48 */	b .L_80191104
.L_80190FC0:
/* 80190FC0 0018DF00  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 80190FC4 0018DF04  7F E4 FB 78 */	mr r4, r31
/* 80190FC8 0018DF08  C0 02 AB 34 */	lfs f0, lbl_80518E94@sda21(r2)
/* 80190FCC 0018DF0C  38 61 00 48 */	addi r3, r1, 0x48
/* 80190FD0 0018DF10  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 80190FD4 0018DF14  D0 3F 02 04 */	stfs f1, 0x204(r31)
/* 80190FD8 0018DF18  D0 3F 02 08 */	stfs f1, 0x208(r31)
/* 80190FDC 0018DF1C  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80190FE0 0018DF20  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 80190FE4 0018DF24  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 80190FE8 0018DF28  C0 1F 02 04 */	lfs f0, 0x204(r31)
/* 80190FEC 0018DF2C  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80190FF0 0018DF30  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 80190FF4 0018DF34  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 80190FF8 0018DF38  81 9F 00 00 */	lwz r12, 0(r31)
/* 80190FFC 0018DF3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80191000 0018DF40  7D 89 03 A6 */	mtctr r12
/* 80191004 0018DF44  4E 80 04 21 */	bctrl 
/* 80191008 0018DF48  C0 02 AB 3C */	lfs f0, lbl_80518E9C@sda21(r2)
/* 8019100C 0018DF4C  C0 21 00 4C */	lfs f1, 0x4c(r1)
/* 80191010 0018DF50  EC 1E 00 28 */	fsubs f0, f30, f0
/* 80191014 0018DF54  C0 41 00 48 */	lfs f2, 0x48(r1)
/* 80191018 0018DF58  C0 61 00 50 */	lfs f3, 0x50(r1)
/* 8019101C 0018DF5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80191020 0018DF60  4C 41 13 82 */	cror 2, 1, 2
/* 80191024 0018DF64  40 82 00 E0 */	bne .L_80191104
/* 80191028 0018DF68  D0 5F 02 0C */	stfs f2, 0x20c(r31)
/* 8019102C 0018DF6C  28 1F 00 00 */	cmplwi r31, 0
/* 80191030 0018DF70  38 00 00 01 */	li r0, 1
/* 80191034 0018DF74  7F E6 FB 78 */	mr r6, r31
/* 80191038 0018DF78  D0 1F 02 10 */	stfs f0, 0x210(r31)
/* 8019103C 0018DF7C  D0 7F 02 14 */	stfs f3, 0x214(r31)
/* 80191040 0018DF80  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80191044 0018DF84  41 82 00 08 */	beq .L_8019104C
/* 80191048 0018DF88  38 DF 01 78 */	addi r6, r31, 0x178
.L_8019104C:
/* 8019104C 0018DF8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80191050 0018DF90  7F E3 FB 78 */	mr r3, r31
/* 80191054 0018DF94  38 80 00 26 */	li r4, 0x26
/* 80191058 0018DF98  38 A0 00 26 */	li r5, 0x26
/* 8019105C 0018DF9C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80191060 0018DFA0  38 E0 00 00 */	li r7, 0
/* 80191064 0018DFA4  7D 89 03 A6 */	mtctr r12
/* 80191068 0018DFA8  4E 80 04 21 */	bctrl 
/* 8019106C 0018DFAC  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80191070 0018DFB0  38 80 28 12 */	li r4, 0x2812
/* 80191074 0018DFB4  38 A0 00 02 */	li r5, 2
/* 80191078 0018DFB8  38 C0 00 00 */	li r6, 0
/* 8019107C 0018DFBC  38 E0 00 00 */	li r7, 0
/* 80191080 0018DFC0  48 2D 17 69 */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
/* 80191084 0018DFC4  48 00 00 80 */	b .L_80191104
.L_80191088:
/* 80191088 0018DFC8  28 00 00 02 */	cmplwi r0, 2
/* 8019108C 0018DFCC  40 82 00 2C */	bne .L_801910B8
/* 80191090 0018DFD0  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 80191094 0018DFD4  C0 02 AB 40 */	lfs f0, lbl_80518EA0@sda21(r2)
/* 80191098 0018DFD8  D0 3F 02 08 */	stfs f1, 0x208(r31)
/* 8019109C 0018DFDC  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 801910A0 0018DFE0  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 801910A4 0018DFE4  C0 1F 02 04 */	lfs f0, 0x204(r31)
/* 801910A8 0018DFE8  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 801910AC 0018DFEC  D0 3F 01 EC */	stfs f1, 0x1ec(r31)
/* 801910B0 0018DFF0  D0 3F 01 E4 */	stfs f1, 0x1e4(r31)
/* 801910B4 0018DFF4  48 00 00 50 */	b .L_80191104
.L_801910B8:
/* 801910B8 0018DFF8  7F E4 FB 78 */	mr r4, r31
/* 801910BC 0018DFFC  38 61 00 3C */	addi r3, r1, 0x3c
/* 801910C0 0018E000  81 9F 00 00 */	lwz r12, 0(r31)
/* 801910C4 0018E004  81 8C 00 08 */	lwz r12, 8(r12)
/* 801910C8 0018E008  7D 89 03 A6 */	mtctr r12
/* 801910CC 0018E00C  4E 80 04 21 */	bctrl 
/* 801910D0 0018E010  C0 02 AB 3C */	lfs f0, lbl_80518E9C@sda21(r2)
/* 801910D4 0018E014  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 801910D8 0018E018  EC 1E 00 28 */	fsubs f0, f30, f0
/* 801910DC 0018E01C  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 801910E0 0018E020  C0 61 00 44 */	lfs f3, 0x44(r1)
/* 801910E4 0018E024  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801910E8 0018E028  40 80 00 10 */	bge .L_801910F8
/* 801910EC 0018E02C  D0 5F 02 0C */	stfs f2, 0x20c(r31)
/* 801910F0 0018E030  D0 1F 02 10 */	stfs f0, 0x210(r31)
/* 801910F4 0018E034  D0 7F 02 14 */	stfs f3, 0x214(r31)
.L_801910F8:
/* 801910F8 0018E038  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 801910FC 0018E03C  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80191100 0018E040  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
.L_80191104:
/* 80191104 0018E044  A0 1E 00 10 */	lhz r0, 0x10(r30)
/* 80191108 0018E048  28 00 00 01 */	cmplwi r0, 1
/* 8019110C 0018E04C  40 82 00 54 */	bne .L_80191160
/* 80191110 0018E050  7F E3 FB 78 */	mr r3, r31
/* 80191114 0018E054  38 80 00 26 */	li r4, 0x26
/* 80191118 0018E058  4B FA BE 15 */	bl assertMotion__Q24Game8FakePikiFi
/* 8019111C 0018E05C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80191120 0018E060  40 82 00 40 */	bne .L_80191160
/* 80191124 0018E064  38 00 00 02 */	li r0, 2
/* 80191128 0018E068  28 1F 00 00 */	cmplwi r31, 0
/* 8019112C 0018E06C  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80191130 0018E070  7F E6 FB 78 */	mr r6, r31
/* 80191134 0018E074  41 82 00 08 */	beq .L_8019113C
/* 80191138 0018E078  38 DF 01 78 */	addi r6, r31, 0x178
.L_8019113C:
/* 8019113C 0018E07C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80191140 0018E080  7F E3 FB 78 */	mr r3, r31
/* 80191144 0018E084  38 80 00 27 */	li r4, 0x27
/* 80191148 0018E088  38 A0 00 27 */	li r5, 0x27
/* 8019114C 0018E08C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80191150 0018E090  38 E0 00 00 */	li r7, 0
/* 80191154 0018E094  7D 89 03 A6 */	mtctr r12
/* 80191158 0018E098  4E 80 04 21 */	bctrl 
/* 8019115C 0018E09C  48 00 00 40 */	b .L_8019119C
.L_80191160:
/* 80191160 0018E0A0  A0 1E 00 10 */	lhz r0, 0x10(r30)
/* 80191164 0018E0A4  28 00 00 02 */	cmplwi r0, 2
/* 80191168 0018E0A8  40 82 00 34 */	bne .L_8019119C
/* 8019116C 0018E0AC  7F E3 FB 78 */	mr r3, r31
/* 80191170 0018E0B0  38 80 00 27 */	li r4, 0x27
/* 80191174 0018E0B4  4B FA BD B9 */	bl assertMotion__Q24Game8FakePikiFi
/* 80191178 0018E0B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019117C 0018E0BC  40 82 00 20 */	bne .L_8019119C
/* 80191180 0018E0C0  38 60 00 03 */	li r3, 3
/* 80191184 0018E0C4  48 09 F5 95 */	bl inc__Q24Game8DeathMgrFi
/* 80191188 0018E0C8  38 00 FF FF */	li r0, -1
/* 8019118C 0018E0CC  7F E3 FB 78 */	mr r3, r31
/* 80191190 0018E0D0  B0 1F 02 A4 */	sth r0, 0x2a4(r31)
/* 80191194 0018E0D4  38 80 00 00 */	li r4, 0
/* 80191198 0018E0D8  4B FA 9F 59 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8019119C:
/* 8019119C 0018E0DC  A0 1E 00 10 */	lhz r0, 0x10(r30)
/* 801911A0 0018E0E0  28 00 00 01 */	cmplwi r0, 1
/* 801911A4 0018E0E4  40 82 03 18 */	bne .L_801914BC
/* 801911A8 0018E0E8  80 1E 00 20 */	lwz r0, 0x20(r30)
/* 801911AC 0018E0EC  28 00 00 00 */	cmplwi r0, 0
/* 801911B0 0018E0F0  41 82 00 0C */	beq .L_801911BC
/* 801911B4 0018E0F4  7C 1D 03 78 */	mr r29, r0
/* 801911B8 0018E0F8  48 00 00 08 */	b .L_801911C0
.L_801911BC:
/* 801911BC 0018E0FC  83 BF 02 C4 */	lwz r29, 0x2c4(r31)
.L_801911C0:
/* 801911C0 0018E100  28 1D 00 00 */	cmplwi r29, 0
/* 801911C4 0018E104  40 82 00 DC */	bne .L_801912A0
/* 801911C8 0018E108  3B 80 00 00 */	li r28, 0
.L_801911CC:
/* 801911CC 0018E10C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801911D0 0018E110  7F 84 E3 78 */	mr r4, r28
/* 801911D4 0018E114  81 83 00 00 */	lwz r12, 0(r3)
/* 801911D8 0018E118  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801911DC 0018E11C  7D 89 03 A6 */	mtctr r12
/* 801911E0 0018E120  4E 80 04 21 */	bctrl 
/* 801911E4 0018E124  81 83 00 00 */	lwz r12, 0(r3)
/* 801911E8 0018E128  7C 7B 1B 78 */	mr r27, r3
/* 801911EC 0018E12C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801911F0 0018E130  7D 89 03 A6 */	mtctr r12
/* 801911F4 0018E134  4E 80 04 21 */	bctrl 
/* 801911F8 0018E138  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801911FC 0018E13C  41 82 00 98 */	beq .L_80191294
/* 80191200 0018E140  7F 64 DB 78 */	mr r4, r27
/* 80191204 0018E144  38 61 00 30 */	addi r3, r1, 0x30
/* 80191208 0018E148  81 9B 00 00 */	lwz r12, 0(r27)
/* 8019120C 0018E14C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80191210 0018E150  7D 89 03 A6 */	mtctr r12
/* 80191214 0018E154  4E 80 04 21 */	bctrl 
/* 80191218 0018E158  7F E4 FB 78 */	mr r4, r31
/* 8019121C 0018E15C  38 61 00 24 */	addi r3, r1, 0x24
/* 80191220 0018E160  81 9F 00 00 */	lwz r12, 0(r31)
/* 80191224 0018E164  C3 C1 00 30 */	lfs f30, 0x30(r1)
/* 80191228 0018E168  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019122C 0018E16C  C3 E1 00 34 */	lfs f31, 0x34(r1)
/* 80191230 0018E170  C3 A1 00 38 */	lfs f29, 0x38(r1)
/* 80191234 0018E174  7D 89 03 A6 */	mtctr r12
/* 80191238 0018E178  4E 80 04 21 */	bctrl 
/* 8019123C 0018E17C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80191240 0018E180  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80191244 0018E184  EC 7F 00 28 */	fsubs f3, f31, f0
/* 80191248 0018E188  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 8019124C 0018E18C  EC 5E 10 28 */	fsubs f2, f30, f2
/* 80191250 0018E190  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80191254 0018E194  EC 3D 08 28 */	fsubs f1, f29, f1
/* 80191258 0018E198  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8019125C 0018E19C  EC 81 00 72 */	fmuls f4, f1, f1
/* 80191260 0018E1A0  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 80191264 0018E1A4  EC 24 08 2A */	fadds f1, f4, f1
/* 80191268 0018E1A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019126C 0018E1AC  40 81 00 14 */	ble .L_80191280
/* 80191270 0018E1B0  40 81 00 14 */	ble .L_80191284
/* 80191274 0018E1B4  FC 00 08 34 */	frsqrte f0, f1
/* 80191278 0018E1B8  EC 20 00 72 */	fmuls f1, f0, f1
/* 8019127C 0018E1BC  48 00 00 08 */	b .L_80191284
.L_80191280:
/* 80191280 0018E1C0  FC 20 00 90 */	fmr f1, f0
.L_80191284:
/* 80191284 0018E1C4  C0 02 AB 44 */	lfs f0, lbl_80518EA4@sda21(r2)
/* 80191288 0018E1C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019128C 0018E1CC  40 80 00 08 */	bge .L_80191294
/* 80191290 0018E1D0  7F 7D DB 78 */	mr r29, r27
.L_80191294:
/* 80191294 0018E1D4  3B 9C 00 01 */	addi r28, r28, 1
/* 80191298 0018E1D8  2C 1C 00 02 */	cmpwi r28, 2
/* 8019129C 0018E1DC  41 80 FF 30 */	blt .L_801911CC
.L_801912A0:
/* 801912A0 0018E1E0  88 1E 00 30 */	lbz r0, 0x30(r30)
/* 801912A4 0018E1E4  28 00 00 00 */	cmplwi r0, 0
/* 801912A8 0018E1E8  40 82 00 1C */	bne .L_801912C4
/* 801912AC 0018E1EC  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 801912B0 0018E1F0  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 801912B4 0018E1F4  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 801912B8 0018E1F8  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 801912BC 0018E1FC  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 801912C0 0018E200  48 00 01 FC */	b .L_801914BC
.L_801912C4:
/* 801912C4 0018E204  28 1D 00 00 */	cmplwi r29, 0
/* 801912C8 0018E208  41 82 01 F4 */	beq .L_801914BC
/* 801912CC 0018E20C  7F E4 FB 78 */	mr r4, r31
/* 801912D0 0018E210  38 61 00 0C */	addi r3, r1, 0xc
/* 801912D4 0018E214  81 9F 00 00 */	lwz r12, 0(r31)
/* 801912D8 0018E218  81 8C 00 08 */	lwz r12, 8(r12)
/* 801912DC 0018E21C  7D 89 03 A6 */	mtctr r12
/* 801912E0 0018E220  4E 80 04 21 */	bctrl 
/* 801912E4 0018E224  7F A4 EB 78 */	mr r4, r29
/* 801912E8 0018E228  38 61 00 18 */	addi r3, r1, 0x18
/* 801912EC 0018E22C  81 9D 00 00 */	lwz r12, 0(r29)
/* 801912F0 0018E230  81 8C 00 08 */	lwz r12, 8(r12)
/* 801912F4 0018E234  7D 89 03 A6 */	mtctr r12
/* 801912F8 0018E238  4E 80 04 21 */	bctrl 
/* 801912FC 0018E23C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80191300 0018E240  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80191304 0018E244  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80191308 0018E248  EF E1 00 28 */	fsubs f31, f1, f0
/* 8019130C 0018E24C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80191310 0018E250  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80191314 0018E254  EF C2 00 28 */	fsubs f30, f2, f0
/* 80191318 0018E258  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8019131C 0018E25C  EC 5F 07 F2 */	fmuls f2, f31, f31
/* 80191320 0018E260  EF A1 00 28 */	fsubs f29, f1, f0
/* 80191324 0018E264  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80191328 0018E268  EC 7E 07 B2 */	fmuls f3, f30, f30
/* 8019132C 0018E26C  EC 3D 17 7A */	fmadds f1, f29, f29, f2
/* 80191330 0018E270  EC 23 08 2A */	fadds f1, f3, f1
/* 80191334 0018E274  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80191338 0018E278  40 81 00 14 */	ble .L_8019134C
/* 8019133C 0018E27C  40 81 00 14 */	ble .L_80191350
/* 80191340 0018E280  FC 00 08 34 */	frsqrte f0, f1
/* 80191344 0018E284  EC 20 00 72 */	fmuls f1, f0, f1
/* 80191348 0018E288  48 00 00 08 */	b .L_80191350
.L_8019134C:
/* 8019134C 0018E28C  FC 20 00 90 */	fmr f1, f0
.L_80191350:
/* 80191350 0018E290  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80191354 0018E294  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80191358 0018E298  40 81 00 18 */	ble .L_80191370
/* 8019135C 0018E29C  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 80191360 0018E2A0  EC 00 08 24 */	fdivs f0, f0, f1
/* 80191364 0018E2A4  EF BD 00 32 */	fmuls f29, f29, f0
/* 80191368 0018E2A8  EF FF 00 32 */	fmuls f31, f31, f0
/* 8019136C 0018E2AC  EF DE 00 32 */	fmuls f30, f30, f0
.L_80191370:
/* 80191370 0018E2B0  C0 22 AA 94 */	lfs f1, lbl_80518DF4@sda21(r2)
/* 80191374 0018E2B4  7F E3 FB 78 */	mr r3, r31
/* 80191378 0018E2B8  4B FB 7B D9 */	bl getSpeed__Q24Game4PikiFf
/* 8019137C 0018E2BC  EC 9D 00 72 */	fmuls f4, f29, f1
/* 80191380 0018E2C0  C0 42 AA 80 */	lfs f2, lbl_80518DE0@sda21(r2)
/* 80191384 0018E2C4  EC 7F 00 72 */	fmuls f3, f31, f1
/* 80191388 0018E2C8  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8019138C 0018E2CC  D0 9E 00 24 */	stfs f4, 0x24(r30)
/* 80191390 0018E2D0  D0 7E 00 28 */	stfs f3, 0x28(r30)
/* 80191394 0018E2D4  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 80191398 0018E2D8  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8019139C 0018E2DC  C0 3F 01 E8 */	lfs f1, 0x1e8(r31)
/* 801913A0 0018E2E0  C0 9E 00 2C */	lfs f4, 0x2c(r30)
/* 801913A4 0018E2E4  ED 00 08 28 */	fsubs f8, f0, f1
/* 801913A8 0018E2E8  C0 1F 01 EC */	lfs f0, 0x1ec(r31)
/* 801913AC 0018E2EC  C0 7E 00 24 */	lfs f3, 0x24(r30)
/* 801913B0 0018E2F0  ED 24 00 28 */	fsubs f9, f4, f0
/* 801913B4 0018E2F4  C0 DF 01 E4 */	lfs f6, 0x1e4(r31)
/* 801913B8 0018E2F8  EC 88 02 32 */	fmuls f4, f8, f8
/* 801913BC 0018E2FC  EC E3 30 28 */	fsubs f7, f3, f6
/* 801913C0 0018E300  EC A9 02 72 */	fmuls f5, f9, f9
/* 801913C4 0018E304  EC 67 21 FA */	fmadds f3, f7, f7, f4
/* 801913C8 0018E308  EC 65 18 2A */	fadds f3, f5, f3
/* 801913CC 0018E30C  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 801913D0 0018E310  40 81 00 14 */	ble .L_801913E4
/* 801913D4 0018E314  40 81 00 14 */	ble .L_801913E8
/* 801913D8 0018E318  FC 40 18 34 */	frsqrte f2, f3
/* 801913DC 0018E31C  EC 62 00 F2 */	fmuls f3, f2, f3
/* 801913E0 0018E320  48 00 00 08 */	b .L_801913E8
.L_801913E4:
/* 801913E4 0018E324  FC 60 10 90 */	fmr f3, f2
.L_801913E8:
/* 801913E8 0018E328  C0 42 AA 80 */	lfs f2, lbl_80518DE0@sda21(r2)
/* 801913EC 0018E32C  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 801913F0 0018E330  40 81 00 1C */	ble .L_8019140C
/* 801913F4 0018E334  C0 42 AA 84 */	lfs f2, lbl_80518DE4@sda21(r2)
/* 801913F8 0018E338  EC 42 18 24 */	fdivs f2, f2, f3
/* 801913FC 0018E33C  EC E7 00 B2 */	fmuls f7, f7, f2
/* 80191400 0018E340  ED 08 00 B2 */	fmuls f8, f8, f2
/* 80191404 0018E344  ED 29 00 B2 */	fmuls f9, f9, f2
/* 80191408 0018E348  48 00 00 08 */	b .L_80191410
.L_8019140C:
/* 8019140C 0018E34C  FC 60 10 90 */	fmr f3, f2
.L_80191410:
/* 80191410 0018E350  88 1E 00 30 */	lbz r0, 0x30(r30)
/* 80191414 0018E354  C1 42 AA E8 */	lfs f10, lbl_80518E48@sda21(r2)
/* 80191418 0018E358  28 00 00 00 */	cmplwi r0, 0
/* 8019141C 0018E35C  41 82 00 0C */	beq .L_80191428
/* 80191420 0018E360  C0 42 AA D0 */	lfs f2, lbl_80518E30@sda21(r2)
/* 80191424 0018E364  ED 4A 00 B2 */	fmuls f10, f10, f2
.L_80191428:
/* 80191428 0018E368  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8019142C 0018E36C  C0 A3 00 54 */	lfs f5, 0x54(r3)
/* 80191430 0018E370  EC 4A 01 72 */	fmuls f2, f10, f5
/* 80191434 0018E374  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80191438 0018E378  40 81 00 38 */	ble .L_80191470
/* 8019143C 0018E37C  EC 87 02 B2 */	fmuls f4, f7, f10
/* 80191440 0018E380  EC 68 02 B2 */	fmuls f3, f8, f10
/* 80191444 0018E384  EC 49 02 B2 */	fmuls f2, f9, f10
/* 80191448 0018E388  EC 84 01 72 */	fmuls f4, f4, f5
/* 8019144C 0018E38C  EC 63 01 72 */	fmuls f3, f3, f5
/* 80191450 0018E390  EC 42 01 72 */	fmuls f2, f2, f5
/* 80191454 0018E394  EC 86 20 2A */	fadds f4, f6, f4
/* 80191458 0018E398  EC 21 18 2A */	fadds f1, f1, f3
/* 8019145C 0018E39C  EC 00 10 2A */	fadds f0, f0, f2
/* 80191460 0018E3A0  D0 9F 01 E4 */	stfs f4, 0x1e4(r31)
/* 80191464 0018E3A4  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 80191468 0018E3A8  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
/* 8019146C 0018E3AC  48 00 00 28 */	b .L_80191494
.L_80191470:
/* 80191470 0018E3B0  EC 87 01 72 */	fmuls f4, f7, f5
/* 80191474 0018E3B4  EC 68 01 72 */	fmuls f3, f8, f5
/* 80191478 0018E3B8  EC 49 01 72 */	fmuls f2, f9, f5
/* 8019147C 0018E3BC  EC 86 20 2A */	fadds f4, f6, f4
/* 80191480 0018E3C0  EC 21 18 2A */	fadds f1, f1, f3
/* 80191484 0018E3C4  EC 00 10 2A */	fadds f0, f0, f2
/* 80191488 0018E3C8  D0 9F 01 E4 */	stfs f4, 0x1e4(r31)
/* 8019148C 0018E3CC  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 80191490 0018E3D0  D0 1F 01 EC */	stfs f0, 0x1ec(r31)
.L_80191494:
/* 80191494 0018E3D4  C0 1F 01 E4 */	lfs f0, 0x1e4(r31)
/* 80191498 0018E3D8  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8019149C 0018E3DC  C0 1F 01 EC */	lfs f0, 0x1ec(r31)
/* 801914A0 0018E3E0  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 801914A4 0018E3E4  C0 1F 01 E4 */	lfs f0, 0x1e4(r31)
/* 801914A8 0018E3E8  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 801914AC 0018E3EC  C0 1F 01 E8 */	lfs f0, 0x1e8(r31)
/* 801914B0 0018E3F0  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 801914B4 0018E3F4  C0 1F 01 EC */	lfs f0, 0x1ec(r31)
/* 801914B8 0018E3F8  D0 1F 02 08 */	stfs f0, 0x208(r31)
.L_801914BC:
/* 801914BC 0018E3FC  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 801914C0 0018E400  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 801914C4 0018E404  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 801914C8 0018E408  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 801914CC 0018E40C  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 801914D0 0018E410  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 801914D4 0018E414  BB 61 00 9C */	lmw r27, 0x9c(r1)
/* 801914D8 0018E418  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 801914DC 0018E41C  7C 08 03 A6 */	mtlr r0
/* 801914E0 0018E420  38 21 00 E0 */	addi r1, r1, 0xe0
/* 801914E4 0018E424  4E 80 00 20 */	blr 
.endfn exec__Q24Game14PikiDrownStateFPQ24Game4Piki

.fn cleanup__Q24Game14PikiDrownStateFPQ24Game4Piki, global
/* 801914E8 0018E428  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game14PikiDrownStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game14PikiDrownStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 801914EC 0018E42C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801914F0 0018E430  7C 08 02 A6 */	mflr r0
/* 801914F4 0018E434  90 01 00 14 */	stw r0, 0x14(r1)
/* 801914F8 0018E438  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 801914FC 0018E43C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80191500 0018E440  7C 9F 23 78 */	mr r31, r4
/* 80191504 0018E444  2C 00 00 02 */	cmpwi r0, 2
/* 80191508 0018E448  41 82 00 24 */	beq .L_8019152C
/* 8019150C 0018E44C  40 80 00 14 */	bge .L_80191520
/* 80191510 0018E450  2C 00 00 00 */	cmpwi r0, 0
/* 80191514 0018E454  41 82 00 30 */	beq .L_80191544
/* 80191518 0018E458  40 80 00 48 */	bge .L_80191560
/* 8019151C 0018E45C  48 00 00 DC */	b .L_801915F8
.L_80191520:
/* 80191520 0018E460  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80191524 0018E464  41 82 00 9C */	beq .L_801915C0
/* 80191528 0018E468  48 00 00 D0 */	b .L_801915F8
.L_8019152C:
/* 8019152C 0018E46C  A0 03 00 10 */	lhz r0, 0x10(r3)
/* 80191530 0018E470  28 00 00 00 */	cmplwi r0, 0
/* 80191534 0018E474  40 82 00 C4 */	bne .L_801915F8
/* 80191538 0018E478  38 00 00 02 */	li r0, 2
/* 8019153C 0018E47C  B0 03 00 16 */	sth r0, 0x16(r3)
/* 80191540 0018E480  48 00 00 B8 */	b .L_801915F8
.L_80191544:
/* 80191544 0018E484  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80191548 0018E488  38 80 28 12 */	li r4, 0x2812
/* 8019154C 0018E48C  38 A0 00 02 */	li r5, 2
/* 80191550 0018E490  38 C0 00 00 */	li r6, 0
/* 80191554 0018E494  38 E0 00 00 */	li r7, 0
/* 80191558 0018E498  48 2D 12 91 */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
/* 8019155C 0018E49C  48 00 00 9C */	b .L_801915F8
.L_80191560:
/* 80191560 0018E4A0  A0 03 00 10 */	lhz r0, 0x10(r3)
/* 80191564 0018E4A4  28 00 00 01 */	cmplwi r0, 1
/* 80191568 0018E4A8  40 82 00 90 */	bne .L_801915F8
/* 8019156C 0018E4AC  A0 83 00 12 */	lhz r4, 0x12(r3)
/* 80191570 0018E4B0  38 04 FF FF */	addi r0, r4, -1
/* 80191574 0018E4B4  B0 03 00 12 */	sth r0, 0x12(r3)
/* 80191578 0018E4B8  A0 03 00 12 */	lhz r0, 0x12(r3)
/* 8019157C 0018E4BC  28 00 00 00 */	cmplwi r0, 0
/* 80191580 0018E4C0  40 82 00 78 */	bne .L_801915F8
/* 80191584 0018E4C4  38 00 00 02 */	li r0, 2
/* 80191588 0018E4C8  28 1F 00 00 */	cmplwi r31, 0
/* 8019158C 0018E4CC  B0 03 00 10 */	sth r0, 0x10(r3)
/* 80191590 0018E4D0  7F E6 FB 78 */	mr r6, r31
/* 80191594 0018E4D4  41 82 00 08 */	beq .L_8019159C
/* 80191598 0018E4D8  38 C6 01 78 */	addi r6, r6, 0x178
.L_8019159C:
/* 8019159C 0018E4DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801915A0 0018E4E0  7F E3 FB 78 */	mr r3, r31
/* 801915A4 0018E4E4  38 80 00 27 */	li r4, 0x27
/* 801915A8 0018E4E8  38 A0 00 27 */	li r5, 0x27
/* 801915AC 0018E4EC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801915B0 0018E4F0  38 E0 00 00 */	li r7, 0
/* 801915B4 0018E4F4  7D 89 03 A6 */	mtctr r12
/* 801915B8 0018E4F8  4E 80 04 21 */	bctrl 
/* 801915BC 0018E4FC  48 00 00 3C */	b .L_801915F8
.L_801915C0:
/* 801915C0 0018E500  A0 03 00 10 */	lhz r0, 0x10(r3)
/* 801915C4 0018E504  2C 00 00 01 */	cmpwi r0, 1
/* 801915C8 0018E508  41 82 00 30 */	beq .L_801915F8
/* 801915CC 0018E50C  40 80 00 08 */	bge .L_801915D4
/* 801915D0 0018E510  48 00 00 28 */	b .L_801915F8
.L_801915D4:
/* 801915D4 0018E514  2C 00 00 03 */	cmpwi r0, 3
/* 801915D8 0018E518  40 80 00 20 */	bge .L_801915F8
/* 801915DC 0018E51C  38 60 00 03 */	li r3, 3
/* 801915E0 0018E520  48 09 F1 39 */	bl inc__Q24Game8DeathMgrFi
/* 801915E4 0018E524  38 00 FF FF */	li r0, -1
/* 801915E8 0018E528  7F E3 FB 78 */	mr r3, r31
/* 801915EC 0018E52C  B0 1F 02 A4 */	sth r0, 0x2a4(r31)
/* 801915F0 0018E530  38 80 00 00 */	li r4, 0
/* 801915F4 0018E534  4B FA 9A FD */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_801915F8:
/* 801915F8 0018E538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801915FC 0018E53C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80191600 0018E540  7C 08 03 A6 */	mtlr r0
/* 80191604 0018E544  38 21 00 10 */	addi r1, r1, 0x10
/* 80191608 0018E548  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game14PikiDrownStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn init__Q24Game16PikiEmotionStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 8019160C 0018E54C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80191610 0018E550  7C 08 02 A6 */	mflr r0
/* 80191614 0018E554  90 01 00 74 */	stw r0, 0x74(r1)
/* 80191618 0018E558  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8019161C 0018E55C  7C 9F 23 78 */	mr r31, r4
/* 80191620 0018E560  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80191624 0018E564  93 A1 00 64 */	stw r29, 0x64(r1)
/* 80191628 0018E568  7C 7D 1B 78 */	mr r29, r3
/* 8019162C 0018E56C  93 81 00 60 */	stw r28, 0x60(r1)
/* 80191630 0018E570  7C BC 2B 79 */	or. r28, r5, r5
/* 80191634 0018E574  3C A0 80 48 */	lis r5, lbl_8047EBE8@ha
/* 80191638 0018E578  3B C5 EB E8 */	addi r30, r5, lbl_8047EBE8@l
/* 8019163C 0018E57C  40 82 00 18 */	bne .L_80191654
/* 80191640 0018E580  38 7E 00 78 */	addi r3, r30, 0x78
/* 80191644 0018E584  38 BE 00 F4 */	addi r5, r30, 0xf4
/* 80191648 0018E588  38 80 0F 59 */	li r4, 0xf59
/* 8019164C 0018E58C  4C C6 31 82 */	crclr 6
/* 80191650 0018E590  4B E9 8F F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80191654:
/* 80191654 0018E594  A0 7C 00 00 */	lhz r3, 0(r28)
/* 80191658 0018E598  38 00 00 00 */	li r0, 0
/* 8019165C 0018E59C  B0 7D 00 24 */	sth r3, 0x24(r29)
/* 80191660 0018E5A0  98 1D 00 1C */	stb r0, 0x1c(r29)
/* 80191664 0018E5A4  A0 1D 00 24 */	lhz r0, 0x24(r29)
/* 80191668 0018E5A8  28 00 00 09 */	cmplwi r0, 9
/* 8019166C 0018E5AC  41 82 02 D8 */	beq .L_80191944
/* 80191670 0018E5B0  28 00 00 08 */	cmplwi r0, 8
/* 80191674 0018E5B4  41 81 02 D0 */	bgt .L_80191944
/* 80191678 0018E5B8  3C 60 80 4B */	lis r3, lbl_804B37DC@ha
/* 8019167C 0018E5BC  54 00 10 3A */	slwi r0, r0, 2
/* 80191680 0018E5C0  38 63 37 DC */	addi r3, r3, lbl_804B37DC@l
/* 80191684 0018E5C4  7C 03 00 2E */	lwzx r0, r3, r0
/* 80191688 0018E5C8  7C 09 03 A6 */	mtctr r0
/* 8019168C 0018E5CC  4E 80 04 20 */	bctr 
.L_80191690:
/* 80191690 0018E5D0  81 3E 01 9C */	lwz r9, 0x19c(r30)
/* 80191694 0018E5D4  38 61 00 40 */	addi r3, r1, 0x40
/* 80191698 0018E5D8  81 1E 01 A0 */	lwz r8, 0x1a0(r30)
/* 8019169C 0018E5DC  38 80 00 03 */	li r4, 3
/* 801916A0 0018E5E0  80 FE 01 A4 */	lwz r7, 0x1a4(r30)
/* 801916A4 0018E5E4  80 DE 01 A8 */	lwz r6, 0x1a8(r30)
/* 801916A8 0018E5E8  80 BE 01 AC */	lwz r5, 0x1ac(r30)
/* 801916AC 0018E5EC  80 1E 01 B0 */	lwz r0, 0x1b0(r30)
/* 801916B0 0018E5F0  91 21 00 40 */	stw r9, 0x40(r1)
/* 801916B4 0018E5F4  91 01 00 44 */	stw r8, 0x44(r1)
/* 801916B8 0018E5F8  90 E1 00 48 */	stw r7, 0x48(r1)
/* 801916BC 0018E5FC  90 C1 00 4C */	stw r6, 0x4c(r1)
/* 801916C0 0018E600  90 A1 00 50 */	stw r5, 0x50(r1)
/* 801916C4 0018E604  90 01 00 54 */	stw r0, 0x54(r1)
/* 801916C8 0018E608  48 06 62 01 */	bl getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
/* 801916CC 0018E60C  7C 64 1B 78 */	mr r4, r3
/* 801916D0 0018E610  28 1F 00 00 */	cmplwi r31, 0
/* 801916D4 0018E614  B0 9D 00 26 */	sth r4, 0x26(r29)
/* 801916D8 0018E618  7F E6 FB 78 */	mr r6, r31
/* 801916DC 0018E61C  41 82 00 08 */	beq .L_801916E4
/* 801916E0 0018E620  38 DF 01 78 */	addi r6, r31, 0x178
.L_801916E4:
/* 801916E4 0018E624  81 9F 00 00 */	lwz r12, 0(r31)
/* 801916E8 0018E628  7F E3 FB 78 */	mr r3, r31
/* 801916EC 0018E62C  7C 85 23 78 */	mr r5, r4
/* 801916F0 0018E630  38 E0 00 00 */	li r7, 0
/* 801916F4 0018E634  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801916F8 0018E638  7D 89 03 A6 */	mtctr r12
/* 801916FC 0018E63C  4E 80 04 21 */	bctrl 
/* 80191700 0018E640  48 00 02 44 */	b .L_80191944
.L_80191704:
/* 80191704 0018E644  81 3E 01 B4 */	lwz r9, 0x1b4(r30)
/* 80191708 0018E648  38 61 00 28 */	addi r3, r1, 0x28
/* 8019170C 0018E64C  81 1E 01 B8 */	lwz r8, 0x1b8(r30)
/* 80191710 0018E650  38 80 00 03 */	li r4, 3
/* 80191714 0018E654  80 FE 01 BC */	lwz r7, 0x1bc(r30)
/* 80191718 0018E658  80 DE 01 C0 */	lwz r6, 0x1c0(r30)
/* 8019171C 0018E65C  80 BE 01 C4 */	lwz r5, 0x1c4(r30)
/* 80191720 0018E660  80 1E 01 C8 */	lwz r0, 0x1c8(r30)
/* 80191724 0018E664  91 21 00 28 */	stw r9, 0x28(r1)
/* 80191728 0018E668  91 01 00 2C */	stw r8, 0x2c(r1)
/* 8019172C 0018E66C  90 E1 00 30 */	stw r7, 0x30(r1)
/* 80191730 0018E670  90 C1 00 34 */	stw r6, 0x34(r1)
/* 80191734 0018E674  90 A1 00 38 */	stw r5, 0x38(r1)
/* 80191738 0018E678  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8019173C 0018E67C  48 06 61 8D */	bl getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
/* 80191740 0018E680  7C 64 1B 78 */	mr r4, r3
/* 80191744 0018E684  28 1F 00 00 */	cmplwi r31, 0
/* 80191748 0018E688  B0 9D 00 26 */	sth r4, 0x26(r29)
/* 8019174C 0018E68C  7F E6 FB 78 */	mr r6, r31
/* 80191750 0018E690  41 82 00 08 */	beq .L_80191758
/* 80191754 0018E694  38 DF 01 78 */	addi r6, r31, 0x178
.L_80191758:
/* 80191758 0018E698  81 9F 00 00 */	lwz r12, 0(r31)
/* 8019175C 0018E69C  7F E3 FB 78 */	mr r3, r31
/* 80191760 0018E6A0  7C 85 23 78 */	mr r5, r4
/* 80191764 0018E6A4  38 E0 00 00 */	li r7, 0
/* 80191768 0018E6A8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8019176C 0018E6AC  7D 89 03 A6 */	mtctr r12
/* 80191770 0018E6B0  4E 80 04 21 */	bctrl 
/* 80191774 0018E6B4  48 00 01 D0 */	b .L_80191944
.L_80191778:
/* 80191778 0018E6B8  80 FE 01 CC */	lwz r7, 0x1cc(r30)
/* 8019177C 0018E6BC  38 61 00 18 */	addi r3, r1, 0x18
/* 80191780 0018E6C0  80 DE 01 D0 */	lwz r6, 0x1d0(r30)
/* 80191784 0018E6C4  38 80 00 02 */	li r4, 2
/* 80191788 0018E6C8  80 BE 01 D4 */	lwz r5, 0x1d4(r30)
/* 8019178C 0018E6CC  80 1E 01 D8 */	lwz r0, 0x1d8(r30)
/* 80191790 0018E6D0  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80191794 0018E6D4  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80191798 0018E6D8  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8019179C 0018E6DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801917A0 0018E6E0  48 06 61 29 */	bl getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
/* 801917A4 0018E6E4  7C 64 1B 78 */	mr r4, r3
/* 801917A8 0018E6E8  28 1F 00 00 */	cmplwi r31, 0
/* 801917AC 0018E6EC  B0 9D 00 26 */	sth r4, 0x26(r29)
/* 801917B0 0018E6F0  7F E6 FB 78 */	mr r6, r31
/* 801917B4 0018E6F4  41 82 00 08 */	beq .L_801917BC
/* 801917B8 0018E6F8  38 DF 01 78 */	addi r6, r31, 0x178
.L_801917BC:
/* 801917BC 0018E6FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801917C0 0018E700  7F E3 FB 78 */	mr r3, r31
/* 801917C4 0018E704  7C 85 23 78 */	mr r5, r4
/* 801917C8 0018E708  38 E0 00 00 */	li r7, 0
/* 801917CC 0018E70C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801917D0 0018E710  7D 89 03 A6 */	mtctr r12
/* 801917D4 0018E714  4E 80 04 21 */	bctrl 
/* 801917D8 0018E718  48 00 01 6C */	b .L_80191944
.L_801917DC:
/* 801917DC 0018E71C  80 FE 01 DC */	lwz r7, 0x1dc(r30)
/* 801917E0 0018E720  38 61 00 08 */	addi r3, r1, 8
/* 801917E4 0018E724  80 DE 01 E0 */	lwz r6, 0x1e0(r30)
/* 801917E8 0018E728  38 80 00 02 */	li r4, 2
/* 801917EC 0018E72C  80 BE 01 E4 */	lwz r5, 0x1e4(r30)
/* 801917F0 0018E730  80 1E 01 E8 */	lwz r0, 0x1e8(r30)
/* 801917F4 0018E734  90 E1 00 08 */	stw r7, 8(r1)
/* 801917F8 0018E738  90 C1 00 0C */	stw r6, 0xc(r1)
/* 801917FC 0018E73C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80191800 0018E740  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191804 0018E744  48 06 60 C5 */	bl getRandomChoice__8KandoLibFPQ28KandoLib6Choicei
/* 80191808 0018E748  7C 64 1B 78 */	mr r4, r3
/* 8019180C 0018E74C  28 1F 00 00 */	cmplwi r31, 0
/* 80191810 0018E750  B0 9D 00 26 */	sth r4, 0x26(r29)
/* 80191814 0018E754  7F E6 FB 78 */	mr r6, r31
/* 80191818 0018E758  41 82 00 08 */	beq .L_80191820
/* 8019181C 0018E75C  38 DF 01 78 */	addi r6, r31, 0x178
.L_80191820:
/* 80191820 0018E760  81 9F 00 00 */	lwz r12, 0(r31)
/* 80191824 0018E764  7F E3 FB 78 */	mr r3, r31
/* 80191828 0018E768  7C 85 23 78 */	mr r5, r4
/* 8019182C 0018E76C  38 E0 00 00 */	li r7, 0
/* 80191830 0018E770  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80191834 0018E774  7D 89 03 A6 */	mtctr r12
/* 80191838 0018E778  4E 80 04 21 */	bctrl 
/* 8019183C 0018E77C  48 00 01 08 */	b .L_80191944
.L_80191840:
/* 80191840 0018E780  38 00 00 0C */	li r0, 0xc
/* 80191844 0018E784  28 1F 00 00 */	cmplwi r31, 0
/* 80191848 0018E788  B0 1D 00 26 */	sth r0, 0x26(r29)
/* 8019184C 0018E78C  7F E6 FB 78 */	mr r6, r31
/* 80191850 0018E790  41 82 00 08 */	beq .L_80191858
/* 80191854 0018E794  38 DF 01 78 */	addi r6, r31, 0x178
.L_80191858:
/* 80191858 0018E798  81 9F 00 00 */	lwz r12, 0(r31)
/* 8019185C 0018E79C  7F E3 FB 78 */	mr r3, r31
/* 80191860 0018E7A0  38 80 00 0C */	li r4, 0xc
/* 80191864 0018E7A4  38 A0 00 0C */	li r5, 0xc
/* 80191868 0018E7A8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8019186C 0018E7AC  38 E0 00 00 */	li r7, 0
/* 80191870 0018E7B0  7D 89 03 A6 */	mtctr r12
/* 80191874 0018E7B4  4E 80 04 21 */	bctrl 
/* 80191878 0018E7B8  48 00 00 CC */	b .L_80191944
.L_8019187C:
/* 8019187C 0018E7BC  38 00 00 31 */	li r0, 0x31
/* 80191880 0018E7C0  28 1F 00 00 */	cmplwi r31, 0
/* 80191884 0018E7C4  B0 1D 00 26 */	sth r0, 0x26(r29)
/* 80191888 0018E7C8  7F E6 FB 78 */	mr r6, r31
/* 8019188C 0018E7CC  41 82 00 08 */	beq .L_80191894
/* 80191890 0018E7D0  38 DF 01 78 */	addi r6, r31, 0x178
.L_80191894:
/* 80191894 0018E7D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80191898 0018E7D8  7F E3 FB 78 */	mr r3, r31
/* 8019189C 0018E7DC  38 80 00 31 */	li r4, 0x31
/* 801918A0 0018E7E0  38 A0 00 31 */	li r5, 0x31
/* 801918A4 0018E7E4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801918A8 0018E7E8  38 E0 00 00 */	li r7, 0
/* 801918AC 0018E7EC  7D 89 03 A6 */	mtctr r12
/* 801918B0 0018E7F0  4E 80 04 21 */	bctrl 
/* 801918B4 0018E7F4  48 00 00 90 */	b .L_80191944
.L_801918B8:
/* 801918B8 0018E7F8  38 00 00 33 */	li r0, 0x33
/* 801918BC 0018E7FC  28 1F 00 00 */	cmplwi r31, 0
/* 801918C0 0018E800  B0 1D 00 26 */	sth r0, 0x26(r29)
/* 801918C4 0018E804  7F E6 FB 78 */	mr r6, r31
/* 801918C8 0018E808  41 82 00 08 */	beq .L_801918D0
/* 801918CC 0018E80C  38 DF 01 78 */	addi r6, r31, 0x178
.L_801918D0:
/* 801918D0 0018E810  81 9F 00 00 */	lwz r12, 0(r31)
/* 801918D4 0018E814  7F E3 FB 78 */	mr r3, r31
/* 801918D8 0018E818  38 80 00 33 */	li r4, 0x33
/* 801918DC 0018E81C  38 A0 00 33 */	li r5, 0x33
/* 801918E0 0018E820  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801918E4 0018E824  38 E0 00 00 */	li r7, 0
/* 801918E8 0018E828  7D 89 03 A6 */	mtctr r12
/* 801918EC 0018E82C  4E 80 04 21 */	bctrl 
/* 801918F0 0018E830  48 00 00 54 */	b .L_80191944
.L_801918F4:
/* 801918F4 0018E834  38 00 00 1F */	li r0, 0x1f
/* 801918F8 0018E838  28 1F 00 00 */	cmplwi r31, 0
/* 801918FC 0018E83C  B0 1D 00 26 */	sth r0, 0x26(r29)
/* 80191900 0018E840  7F E6 FB 78 */	mr r6, r31
/* 80191904 0018E844  41 82 00 08 */	beq .L_8019190C
/* 80191908 0018E848  38 DF 01 78 */	addi r6, r31, 0x178
.L_8019190C:
/* 8019190C 0018E84C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80191910 0018E850  7F E3 FB 78 */	mr r3, r31
/* 80191914 0018E854  38 80 00 1F */	li r4, 0x1f
/* 80191918 0018E858  38 A0 00 1F */	li r5, 0x1f
/* 8019191C 0018E85C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80191920 0018E860  38 E0 00 00 */	li r7, 0
/* 80191924 0018E864  7D 89 03 A6 */	mtctr r12
/* 80191928 0018E868  4E 80 04 21 */	bctrl 
/* 8019192C 0018E86C  48 00 00 18 */	b .L_80191944
.L_80191930:
/* 80191930 0018E870  38 7E 00 78 */	addi r3, r30, 0x78
/* 80191934 0018E874  38 BE 01 EC */	addi r5, r30, 0x1ec
/* 80191938 0018E878  38 80 10 10 */	li r4, 0x1010
/* 8019193C 0018E87C  4C C6 31 82 */	crclr 6
/* 80191940 0018E880  4B E9 8D 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80191944:
/* 80191944 0018E884  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80191948 0018E888  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8019194C 0018E88C  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80191950 0018E890  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 80191954 0018E894  83 81 00 60 */	lwz r28, 0x60(r1)
/* 80191958 0018E898  7C 08 03 A6 */	mtlr r0
/* 8019195C 0018E89C  38 21 00 70 */	addi r1, r1, 0x70
/* 80191960 0018E8A0  4E 80 00 20 */	blr 
.endfn init__Q24Game16PikiEmotionStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game16PikiEmotionStateFPQ24Game4Piki, global
/* 80191964 0018E8A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80191968 0018E8A8  7C 08 02 A6 */	mflr r0
/* 8019196C 0018E8AC  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80191970 0018E8B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191974 0018E8B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80191978 0018E8B8  7C 9F 23 78 */	mr r31, r4
/* 8019197C 0018E8BC  93 C1 00 08 */	stw r30, 8(r1)
/* 80191980 0018E8C0  7C 7E 1B 78 */	mr r30, r3
/* 80191984 0018E8C4  7F E3 FB 78 */	mr r3, r31
/* 80191988 0018E8C8  D0 04 01 E4 */	stfs f0, 0x1e4(r4)
/* 8019198C 0018E8CC  D0 04 01 E8 */	stfs f0, 0x1e8(r4)
/* 80191990 0018E8D0  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 80191994 0018E8D4  A8 9E 00 26 */	lha r4, 0x26(r30)
/* 80191998 0018E8D8  4B FA B5 95 */	bl assertMotion__Q24Game8FakePikiFi
/* 8019199C 0018E8DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801919A0 0018E8E0  40 82 00 28 */	bne .L_801919C8
/* 801919A4 0018E8E4  7F C3 F3 78 */	mr r3, r30
/* 801919A8 0018E8E8  7F E4 FB 78 */	mr r4, r31
/* 801919AC 0018E8EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801919B0 0018E8F0  38 A0 00 00 */	li r5, 0
/* 801919B4 0018E8F4  38 C0 00 00 */	li r6, 0
/* 801919B8 0018E8F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801919BC 0018E8FC  7D 89 03 A6 */	mtctr r12
/* 801919C0 0018E900  4E 80 04 21 */	bctrl 
/* 801919C4 0018E904  48 00 00 30 */	b .L_801919F4
.L_801919C8:
/* 801919C8 0018E908  A0 1E 00 24 */	lhz r0, 0x24(r30)
/* 801919CC 0018E90C  28 00 00 09 */	cmplwi r0, 9
/* 801919D0 0018E910  40 82 00 24 */	bne .L_801919F4
/* 801919D4 0018E914  7F C3 F3 78 */	mr r3, r30
/* 801919D8 0018E918  7F E4 FB 78 */	mr r4, r31
/* 801919DC 0018E91C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801919E0 0018E920  38 A0 00 00 */	li r5, 0
/* 801919E4 0018E924  38 C0 00 00 */	li r6, 0
/* 801919E8 0018E928  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801919EC 0018E92C  7D 89 03 A6 */	mtctr r12
/* 801919F0 0018E930  4E 80 04 21 */	bctrl 
.L_801919F4:
/* 801919F4 0018E934  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801919F8 0018E938  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801919FC 0018E93C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80191A00 0018E940  7C 08 03 A6 */	mtlr r0
/* 80191A04 0018E944  38 21 00 10 */	addi r1, r1, 0x10
/* 80191A08 0018E948  4E 80 00 20 */	blr 
.endfn exec__Q24Game16PikiEmotionStateFPQ24Game4Piki

.fn cleanup__Q24Game16PikiEmotionStateFPQ24Game4Piki, global
/* 80191A0C 0018E94C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game16PikiEmotionStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game16PikiEmotionStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 80191A10 0018E950  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80191A14 0018E954  7C 08 02 A6 */	mflr r0
/* 80191A18 0018E958  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191A1C 0018E95C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80191A20 0018E960  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80191A24 0018E964  41 82 00 38 */	beq .L_80191A5C
/* 80191A28 0018E968  40 80 00 98 */	bge .L_80191AC0
/* 80191A2C 0018E96C  2C 00 00 C8 */	cmpwi r0, 0xc8
/* 80191A30 0018E970  41 82 00 08 */	beq .L_80191A38
/* 80191A34 0018E974  48 00 00 8C */	b .L_80191AC0
.L_80191A38:
/* 80191A38 0018E978  A8 03 00 26 */	lha r0, 0x26(r3)
/* 80191A3C 0018E97C  2C 00 00 31 */	cmpwi r0, 0x31
/* 80191A40 0018E980  41 82 00 08 */	beq .L_80191A48
/* 80191A44 0018E984  48 00 00 7C */	b .L_80191AC0
.L_80191A48:
/* 80191A48 0018E988  7C 83 23 78 */	mr r3, r4
/* 80191A4C 0018E98C  38 80 28 35 */	li r4, 0x2835
/* 80191A50 0018E990  38 A0 00 01 */	li r5, 1
/* 80191A54 0018E994  4B FB 6E 79 */	bl startSound__Q24Game4PikiFUlb
/* 80191A58 0018E998  48 00 00 68 */	b .L_80191AC0
.L_80191A5C:
/* 80191A5C 0018E99C  A0 03 00 24 */	lhz r0, 0x24(r3)
/* 80191A60 0018E9A0  28 00 00 08 */	cmplwi r0, 8
/* 80191A64 0018E9A4  40 82 00 3C */	bne .L_80191AA0
/* 80191A68 0018E9A8  88 A3 00 1D */	lbz r5, 0x1d(r3)
/* 80191A6C 0018E9AC  38 05 FF FF */	addi r0, r5, -1
/* 80191A70 0018E9B0  98 03 00 1D */	stb r0, 0x1d(r3)
/* 80191A74 0018E9B4  88 03 00 1D */	lbz r0, 0x1d(r3)
/* 80191A78 0018E9B8  28 00 00 00 */	cmplwi r0, 0
/* 80191A7C 0018E9BC  41 82 00 24 */	beq .L_80191AA0
/* 80191A80 0018E9C0  A0 03 00 24 */	lhz r0, 0x24(r3)
/* 80191A84 0018E9C4  38 A1 00 08 */	addi r5, r1, 8
/* 80191A88 0018E9C8  B0 01 00 08 */	sth r0, 8(r1)
/* 80191A8C 0018E9CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80191A90 0018E9D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80191A94 0018E9D4  7D 89 03 A6 */	mtctr r12
/* 80191A98 0018E9D8  4E 80 04 21 */	bctrl 
/* 80191A9C 0018E9DC  48 00 00 24 */	b .L_80191AC0
.L_80191AA0:
/* 80191AA0 0018E9E0  38 00 00 00 */	li r0, 0
/* 80191AA4 0018E9E4  38 A0 00 00 */	li r5, 0
/* 80191AA8 0018E9E8  98 03 00 1D */	stb r0, 0x1d(r3)
/* 80191AAC 0018E9EC  38 C0 00 00 */	li r6, 0
/* 80191AB0 0018E9F0  81 83 00 00 */	lwz r12, 0(r3)
/* 80191AB4 0018E9F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80191AB8 0018E9F8  7D 89 03 A6 */	mtctr r12
/* 80191ABC 0018E9FC  4E 80 04 21 */	bctrl 
.L_80191AC0:
/* 80191AC0 0018EA00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80191AC4 0018EA04  7C 08 03 A6 */	mtlr r0
/* 80191AC8 0018EA08  38 21 00 10 */	addi r1, r1, 0x10
/* 80191ACC 0018EA0C  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game16PikiEmotionStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn init__Q24Game15PikiAbsorbStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 80191AD0 0018EA10  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80191AD4 0018EA14  7C 08 02 A6 */	mflr r0
/* 80191AD8 0018EA18  90 01 00 34 */	stw r0, 0x34(r1)
/* 80191ADC 0018EA1C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80191AE0 0018EA20  7C 9F 23 78 */	mr r31, r4
/* 80191AE4 0018EA24  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80191AE8 0018EA28  7C 7E 1B 78 */	mr r30, r3
/* 80191AEC 0018EA2C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80191AF0 0018EA30  7C BD 2B 79 */	or. r29, r5, r5
/* 80191AF4 0018EA34  40 82 00 20 */	bne .L_80191B14
/* 80191AF8 0018EA38  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 80191AFC 0018EA3C  3C A0 80 48 */	lis r5, lbl_8047ECDC@ha
/* 80191B00 0018EA40  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 80191B04 0018EA44  38 80 10 72 */	li r4, 0x1072
/* 80191B08 0018EA48  38 A5 EC DC */	addi r5, r5, lbl_8047ECDC@l
/* 80191B0C 0018EA4C  4C C6 31 82 */	crclr 6
/* 80191B10 0018EA50  4B E9 8B 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80191B14:
/* 80191B14 0018EA54  80 1D 00 00 */	lwz r0, 0(r29)
/* 80191B18 0018EA58  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80191B1C 0018EA5C  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80191B20 0018EA60  28 00 00 00 */	cmplwi r0, 0
/* 80191B24 0018EA64  40 82 00 20 */	bne .L_80191B44
/* 80191B28 0018EA68  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 80191B2C 0018EA6C  3C A0 80 48 */	lis r5, lbl_8047ECDC@ha
/* 80191B30 0018EA70  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 80191B34 0018EA74  38 80 10 74 */	li r4, 0x1074
/* 80191B38 0018EA78  38 A5 EC DC */	addi r5, r5, lbl_8047ECDC@l
/* 80191B3C 0018EA7C  4C C6 31 82 */	crclr 6
/* 80191B40 0018EA80  4B E9 8B 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80191B44:
/* 80191B44 0018EA84  28 1F 00 00 */	cmplwi r31, 0
/* 80191B48 0018EA88  7F E6 FB 78 */	mr r6, r31
/* 80191B4C 0018EA8C  41 82 00 08 */	beq .L_80191B54
/* 80191B50 0018EA90  38 DF 01 78 */	addi r6, r31, 0x178
.L_80191B54:
/* 80191B54 0018EA94  81 9F 00 00 */	lwz r12, 0(r31)
/* 80191B58 0018EA98  7F E3 FB 78 */	mr r3, r31
/* 80191B5C 0018EA9C  38 80 00 37 */	li r4, 0x37
/* 80191B60 0018EAA0  38 A0 00 37 */	li r5, 0x37
/* 80191B64 0018EAA4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80191B68 0018EAA8  38 E0 00 00 */	li r7, 0
/* 80191B6C 0018EAAC  7D 89 03 A6 */	mtctr r12
/* 80191B70 0018EAB0  4E 80 04 21 */	bctrl 
/* 80191B74 0018EAB4  38 00 00 00 */	li r0, 0
/* 80191B78 0018EAB8  38 61 00 08 */	addi r3, r1, 8
/* 80191B7C 0018EABC  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80191B80 0018EAC0  98 1E 00 18 */	stb r0, 0x18(r30)
/* 80191B84 0018EAC4  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 80191B88 0018EAC8  81 84 00 00 */	lwz r12, 0(r4)
/* 80191B8C 0018EACC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80191B90 0018EAD0  7D 89 03 A6 */	mtctr r12
/* 80191B94 0018EAD4  4E 80 04 21 */	bctrl 
/* 80191B98 0018EAD8  C0 41 00 08 */	lfs f2, 8(r1)
/* 80191B9C 0018EADC  7F E3 FB 78 */	mr r3, r31
/* 80191BA0 0018EAE0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80191BA4 0018EAE4  38 81 00 14 */	addi r4, r1, 0x14
/* 80191BA8 0018EAE8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80191BAC 0018EAEC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80191BB0 0018EAF0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80191BB4 0018EAF4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80191BB8 0018EAF8  4B FA C0 1D */	bl "turnTo__Q24Game8FakePikiFR10Vector3<f>"
/* 80191BBC 0018EAFC  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80191BC0 0018EB00  81 83 00 00 */	lwz r12, 0(r3)
/* 80191BC4 0018EB04  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80191BC8 0018EB08  7D 89 03 A6 */	mtctr r12
/* 80191BCC 0018EB0C  4E 80 04 21 */	bctrl 
/* 80191BD0 0018EB10  28 03 00 00 */	cmplwi r3, 0
/* 80191BD4 0018EB14  40 82 00 20 */	bne .L_80191BF4
/* 80191BD8 0018EB18  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 80191BDC 0018EB1C  3C A0 80 48 */	lis r5, lbl_8047ECDC@ha
/* 80191BE0 0018EB20  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 80191BE4 0018EB24  38 80 10 7B */	li r4, 0x107b
/* 80191BE8 0018EB28  38 A5 EC DC */	addi r5, r5, lbl_8047ECDC@l
/* 80191BEC 0018EB2C  4C C6 31 82 */	crclr 6
/* 80191BF0 0018EB30  4B E9 8A 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80191BF4:
/* 80191BF4 0018EB34  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80191BF8 0018EB38  81 83 00 00 */	lwz r12, 0(r3)
/* 80191BFC 0018EB3C  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80191C00 0018EB40  7D 89 03 A6 */	mtctr r12
/* 80191C04 0018EB44  4E 80 04 21 */	bctrl 
/* 80191C08 0018EB48  7C 64 1B 78 */	mr r4, r3
/* 80191C0C 0018EB4C  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80191C10 0018EB50  38 A0 28 33 */	li r5, 0x2833
/* 80191C14 0018EB54  38 C0 00 00 */	li r6, 0
/* 80191C18 0018EB58  48 2D 0A AD */	bl startPikiSound__Q23PSM4PikiFPQ27JAInter6ObjectUlUl
/* 80191C1C 0018EB5C  38 00 00 00 */	li r0, 0
/* 80191C20 0018EB60  98 1E 00 19 */	stb r0, 0x19(r30)
/* 80191C24 0018EB64  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80191C28 0018EB68  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80191C2C 0018EB6C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80191C30 0018EB70  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80191C34 0018EB74  7C 08 03 A6 */	mtlr r0
/* 80191C38 0018EB78  38 21 00 30 */	addi r1, r1, 0x30
/* 80191C3C 0018EB7C  4E 80 00 20 */	blr 
.endfn init__Q24Game15PikiAbsorbStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game15PikiAbsorbStateFPQ24Game4Piki, global
/* 80191C40 0018EB80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80191C44 0018EB84  7C 08 02 A6 */	mflr r0
/* 80191C48 0018EB88  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80191C4C 0018EB8C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80191C50 0018EB90  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80191C54 0018EB94  7C 9F 23 78 */	mr r31, r4
/* 80191C58 0018EB98  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80191C5C 0018EB9C  7C 7E 1B 78 */	mr r30, r3
/* 80191C60 0018EBA0  D0 04 02 08 */	stfs f0, 0x208(r4)
/* 80191C64 0018EBA4  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 80191C68 0018EBA8  D0 04 01 E4 */	stfs f0, 0x1e4(r4)
/* 80191C6C 0018EBAC  D0 04 01 E8 */	stfs f0, 0x1e8(r4)
/* 80191C70 0018EBB0  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 80191C74 0018EBB4  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80191C78 0018EBB8  28 00 00 01 */	cmplwi r0, 1
/* 80191C7C 0018EBBC  40 82 00 68 */	bne .L_80191CE4
/* 80191C80 0018EBC0  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80191C84 0018EBC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80191C88 0018EBC8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80191C8C 0018EBCC  7D 89 03 A6 */	mtctr r12
/* 80191C90 0018EBD0  4E 80 04 21 */	bctrl 
/* 80191C94 0018EBD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80191C98 0018EBD8  41 82 00 4C */	beq .L_80191CE4
/* 80191C9C 0018EBDC  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80191CA0 0018EBE0  28 00 00 00 */	cmplwi r0, 0
/* 80191CA4 0018EBE4  40 82 00 40 */	bne .L_80191CE4
/* 80191CA8 0018EBE8  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80191CAC 0018EBEC  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAbsorb@ha
/* 80191CB0 0018EBF0  38 A4 A3 00 */	addi r5, r4, __vt__Q24Game11Interaction@l
/* 80191CB4 0018EBF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80191CB8 0018EBF8  38 03 74 30 */	addi r0, r3, __vt__Q24Game14InteractAbsorb@l
/* 80191CBC 0018EBFC  38 81 00 08 */	addi r4, r1, 8
/* 80191CC0 0018EC00  90 A1 00 08 */	stw r5, 8(r1)
/* 80191CC4 0018EC04  90 01 00 08 */	stw r0, 8(r1)
/* 80191CC8 0018EC08  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80191CCC 0018EC0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80191CD0 0018EC10  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80191CD4 0018EC14  7D 89 03 A6 */	mtctr r12
/* 80191CD8 0018EC18  4E 80 04 21 */	bctrl 
/* 80191CDC 0018EC1C  38 00 00 01 */	li r0, 1
/* 80191CE0 0018EC20  98 1E 00 18 */	stb r0, 0x18(r30)
.L_80191CE4:
/* 80191CE4 0018EC24  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80191CE8 0018EC28  28 00 00 00 */	cmplwi r0, 0
/* 80191CEC 0018EC2C  40 82 00 2C */	bne .L_80191D18
/* 80191CF0 0018EC30  88 7E 00 19 */	lbz r3, 0x19(r30)
/* 80191CF4 0018EC34  38 03 00 01 */	addi r0, r3, 1
/* 80191CF8 0018EC38  98 1E 00 19 */	stb r0, 0x19(r30)
/* 80191CFC 0018EC3C  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 80191D00 0018EC40  28 00 00 B4 */	cmplwi r0, 0xb4
/* 80191D04 0018EC44  40 81 00 14 */	ble .L_80191D18
/* 80191D08 0018EC48  38 60 00 01 */	li r3, 1
/* 80191D0C 0018EC4C  38 00 00 B4 */	li r0, 0xb4
/* 80191D10 0018EC50  98 7E 00 18 */	stb r3, 0x18(r30)
/* 80191D14 0018EC54  98 1E 00 19 */	stb r0, 0x19(r30)
.L_80191D18:
/* 80191D18 0018EC58  7F E3 FB 78 */	mr r3, r31
/* 80191D1C 0018EC5C  38 80 00 37 */	li r4, 0x37
/* 80191D20 0018EC60  4B FA B2 0D */	bl assertMotion__Q24Game8FakePikiFi
/* 80191D24 0018EC64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80191D28 0018EC68  40 82 00 54 */	bne .L_80191D7C
/* 80191D2C 0018EC6C  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80191D30 0018EC70  28 00 00 00 */	cmplwi r0, 0
/* 80191D34 0018EC74  41 82 00 28 */	beq .L_80191D5C
/* 80191D38 0018EC78  7F C3 F3 78 */	mr r3, r30
/* 80191D3C 0018EC7C  7F E4 FB 78 */	mr r4, r31
/* 80191D40 0018EC80  81 9E 00 00 */	lwz r12, 0(r30)
/* 80191D44 0018EC84  38 A0 00 0E */	li r5, 0xe
/* 80191D48 0018EC88  38 C0 00 00 */	li r6, 0
/* 80191D4C 0018EC8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80191D50 0018EC90  7D 89 03 A6 */	mtctr r12
/* 80191D54 0018EC94  4E 80 04 21 */	bctrl 
/* 80191D58 0018EC98  48 00 00 24 */	b .L_80191D7C
.L_80191D5C:
/* 80191D5C 0018EC9C  7F C3 F3 78 */	mr r3, r30
/* 80191D60 0018ECA0  7F E4 FB 78 */	mr r4, r31
/* 80191D64 0018ECA4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80191D68 0018ECA8  38 A0 00 00 */	li r5, 0
/* 80191D6C 0018ECAC  38 C0 00 00 */	li r6, 0
/* 80191D70 0018ECB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80191D74 0018ECB4  7D 89 03 A6 */	mtctr r12
/* 80191D78 0018ECB8  4E 80 04 21 */	bctrl 
.L_80191D7C:
/* 80191D7C 0018ECBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80191D80 0018ECC0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80191D84 0018ECC4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80191D88 0018ECC8  7C 08 03 A6 */	mtlr r0
/* 80191D8C 0018ECCC  38 21 00 20 */	addi r1, r1, 0x20
/* 80191D90 0018ECD0  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PikiAbsorbStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game15PikiAbsorbStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 80191D94 0018ECD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80191D98 0018ECD8  7C 08 02 A6 */	mflr r0
/* 80191D9C 0018ECDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80191DA0 0018ECE0  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80191DA4 0018ECE4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80191DA8 0018ECE8  2C 00 00 01 */	cmpwi r0, 1
/* 80191DAC 0018ECEC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80191DB0 0018ECF0  7C 9E 23 78 */	mr r30, r4
/* 80191DB4 0018ECF4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80191DB8 0018ECF8  7C 7D 1B 78 */	mr r29, r3
/* 80191DBC 0018ECFC  41 82 00 2C */	beq .L_80191DE8
/* 80191DC0 0018ED00  40 80 00 10 */	bge .L_80191DD0
/* 80191DC4 0018ED04  2C 00 00 00 */	cmpwi r0, 0
/* 80191DC8 0018ED08  40 80 00 14 */	bge .L_80191DDC
/* 80191DCC 0018ED0C  48 00 00 D8 */	b .L_80191EA4
.L_80191DD0:
/* 80191DD0 0018ED10  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80191DD4 0018ED14  41 82 00 90 */	beq .L_80191E64
/* 80191DD8 0018ED18  48 00 00 CC */	b .L_80191EA4
.L_80191DDC:
/* 80191DDC 0018ED1C  38 00 00 01 */	li r0, 1
/* 80191DE0 0018ED20  98 1D 00 10 */	stb r0, 0x10(r29)
/* 80191DE4 0018ED24  48 00 00 C0 */	b .L_80191EA4
.L_80191DE8:
/* 80191DE8 0018ED28  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80191DEC 0018ED2C  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 80191DF0 0018ED30  28 00 04 06 */	cmplwi r0, 0x406
/* 80191DF4 0018ED34  41 82 00 20 */	beq .L_80191E14
/* 80191DF8 0018ED38  3C 60 80 48 */	lis r3, lbl_8047EC60@ha
/* 80191DFC 0018ED3C  3C A0 80 48 */	lis r5, lbl_8047ECDC@ha
/* 80191E00 0018ED40  38 63 EC 60 */	addi r3, r3, lbl_8047EC60@l
/* 80191E04 0018ED44  38 80 10 A5 */	li r4, 0x10a5
/* 80191E08 0018ED48  38 A5 EC DC */	addi r5, r5, lbl_8047ECDC@l
/* 80191E0C 0018ED4C  4C C6 31 82 */	crclr 6
/* 80191E10 0018ED50  4B E9 88 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80191E14:
/* 80191E14 0018ED54  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80191E18 0018ED58  81 83 00 00 */	lwz r12, 0(r3)
/* 80191E1C 0018ED5C  7C 7F 1B 78 */	mr r31, r3
/* 80191E20 0018ED60  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80191E24 0018ED64  7D 89 03 A6 */	mtctr r12
/* 80191E28 0018ED68  4E 80 04 21 */	bctrl 
/* 80191E2C 0018ED6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80191E30 0018ED70  41 82 00 20 */	beq .L_80191E50
/* 80191E34 0018ED74  88 1D 00 18 */	lbz r0, 0x18(r29)
/* 80191E38 0018ED78  28 00 00 00 */	cmplwi r0, 0
/* 80191E3C 0018ED7C  40 82 00 14 */	bne .L_80191E50
/* 80191E40 0018ED80  7F E3 FB 78 */	mr r3, r31
/* 80191E44 0018ED84  48 04 1F 59 */	bl isShrinking__Q34Game9ItemHoney4ItemFv
/* 80191E48 0018ED88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80191E4C 0018ED8C  40 82 00 58 */	bne .L_80191EA4
.L_80191E50:
/* 80191E50 0018ED90  38 00 00 02 */	li r0, 2
/* 80191E54 0018ED94  7F C3 F3 78 */	mr r3, r30
/* 80191E58 0018ED98  98 1D 00 10 */	stb r0, 0x10(r29)
/* 80191E5C 0018ED9C  4B FA B2 65 */	bl finishMotion__Q24Game8FakePikiFv
/* 80191E60 0018EDA0  48 00 00 44 */	b .L_80191EA4
.L_80191E64:
/* 80191E64 0018EDA4  88 1D 00 18 */	lbz r0, 0x18(r29)
/* 80191E68 0018EDA8  28 00 00 00 */	cmplwi r0, 0
/* 80191E6C 0018EDAC  41 82 00 20 */	beq .L_80191E8C
/* 80191E70 0018EDB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80191E74 0018EDB4  38 A0 00 0E */	li r5, 0xe
/* 80191E78 0018EDB8  38 C0 00 00 */	li r6, 0
/* 80191E7C 0018EDBC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80191E80 0018EDC0  7D 89 03 A6 */	mtctr r12
/* 80191E84 0018EDC4  4E 80 04 21 */	bctrl 
/* 80191E88 0018EDC8  48 00 00 1C */	b .L_80191EA4
.L_80191E8C:
/* 80191E8C 0018EDCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80191E90 0018EDD0  38 A0 00 00 */	li r5, 0
/* 80191E94 0018EDD4  38 C0 00 00 */	li r6, 0
/* 80191E98 0018EDD8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80191E9C 0018EDDC  7D 89 03 A6 */	mtctr r12
/* 80191EA0 0018EDE0  4E 80 04 21 */	bctrl 
.L_80191EA4:
/* 80191EA4 0018EDE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80191EA8 0018EDE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80191EAC 0018EDEC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80191EB0 0018EDF0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80191EB4 0018EDF4  7C 08 03 A6 */	mtlr r0
/* 80191EB8 0018EDF8  38 21 00 20 */	addi r1, r1, 0x20
/* 80191EBC 0018EDFC  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game15PikiAbsorbStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game15PikiAbsorbStateFPQ24Game4Piki, global
/* 80191EC0 0018EE00  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PikiAbsorbStateFPQ24Game4Piki

.fn init__Q24Game15PikiGrowupStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 80191EC4 0018EE04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80191EC8 0018EE08  7C 08 02 A6 */	mflr r0
/* 80191ECC 0018EE0C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80191ED0 0018EE10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80191ED4 0018EE14  7C 9F 23 78 */	mr r31, r4
/* 80191ED8 0018EE18  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80191EDC 0018EE1C  7C 7E 1B 78 */	mr r30, r3
/* 80191EE0 0018EE20  4B F3 76 C1 */	bl rand
/* 80191EE4 0018EE24  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80191EE8 0018EE28  3C 00 43 30 */	lis r0, 0x4330
/* 80191EEC 0018EE2C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80191EF0 0018EE30  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 80191EF4 0018EE34  90 01 00 08 */	stw r0, 8(r1)
/* 80191EF8 0018EE38  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 80191EFC 0018EE3C  C8 41 00 08 */	lfd f2, 8(r1)
/* 80191F00 0018EE40  C0 02 AA 94 */	lfs f0, lbl_80518DF4@sda21(r2)
/* 80191F04 0018EE44  EC 42 18 28 */	fsubs f2, f2, f3
/* 80191F08 0018EE48  EC 22 08 24 */	fdivs f1, f2, f1
/* 80191F0C 0018EE4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80191F10 0018EE50  40 81 00 10 */	ble .L_80191F20
/* 80191F14 0018EE54  38 00 00 12 */	li r0, 0x12
/* 80191F18 0018EE58  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 80191F1C 0018EE5C  48 00 00 0C */	b .L_80191F28
.L_80191F20:
/* 80191F20 0018EE60  38 00 00 13 */	li r0, 0x13
/* 80191F24 0018EE64  B0 1E 00 10 */	sth r0, 0x10(r30)
.L_80191F28:
/* 80191F28 0018EE68  28 1F 00 00 */	cmplwi r31, 0
/* 80191F2C 0018EE6C  7F E6 FB 78 */	mr r6, r31
/* 80191F30 0018EE70  41 82 00 08 */	beq .L_80191F38
/* 80191F34 0018EE74  38 DF 01 78 */	addi r6, r31, 0x178
.L_80191F38:
/* 80191F38 0018EE78  81 9F 00 00 */	lwz r12, 0(r31)
/* 80191F3C 0018EE7C  7F E3 FB 78 */	mr r3, r31
/* 80191F40 0018EE80  A8 9E 00 10 */	lha r4, 0x10(r30)
/* 80191F44 0018EE84  38 E0 00 00 */	li r7, 0
/* 80191F48 0018EE88  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80191F4C 0018EE8C  7C 85 23 78 */	mr r5, r4
/* 80191F50 0018EE90  7D 89 03 A6 */	mtctr r12
/* 80191F54 0018EE94  4E 80 04 21 */	bctrl 
/* 80191F58 0018EE98  A8 9E 00 10 */	lha r4, 0x10(r30)
/* 80191F5C 0018EE9C  7F E3 FB 78 */	mr r3, r31
/* 80191F60 0018EEA0  4B FA AF CD */	bl assertMotion__Q24Game8FakePikiFi
/* 80191F64 0018EEA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80191F68 0018EEA8  40 82 00 24 */	bne .L_80191F8C
/* 80191F6C 0018EEAC  7F C3 F3 78 */	mr r3, r30
/* 80191F70 0018EEB0  7F E4 FB 78 */	mr r4, r31
/* 80191F74 0018EEB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80191F78 0018EEB8  38 A0 00 00 */	li r5, 0
/* 80191F7C 0018EEBC  38 C0 00 00 */	li r6, 0
/* 80191F80 0018EEC0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80191F84 0018EEC4  7D 89 03 A6 */	mtctr r12
/* 80191F88 0018EEC8  4E 80 04 21 */	bctrl 
.L_80191F8C:
/* 80191F8C 0018EECC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80191F90 0018EED0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80191F94 0018EED4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80191F98 0018EED8  7C 08 03 A6 */	mtlr r0
/* 80191F9C 0018EEDC  38 21 00 20 */	addi r1, r1, 0x20
/* 80191FA0 0018EEE0  4E 80 00 20 */	blr 
.endfn init__Q24Game15PikiGrowupStateFPQ24Game4PikiPQ24Game8StateArg

.fn exec__Q24Game15PikiGrowupStateFPQ24Game4Piki, global
/* 80191FA4 0018EEE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80191FA8 0018EEE8  7C 08 02 A6 */	mflr r0
/* 80191FAC 0018EEEC  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80191FB0 0018EEF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191FB4 0018EEF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80191FB8 0018EEF8  7C 9F 23 78 */	mr r31, r4
/* 80191FBC 0018EEFC  93 C1 00 08 */	stw r30, 8(r1)
/* 80191FC0 0018EF00  7C 7E 1B 78 */	mr r30, r3
/* 80191FC4 0018EF04  7F E3 FB 78 */	mr r3, r31
/* 80191FC8 0018EF08  D0 04 01 E4 */	stfs f0, 0x1e4(r4)
/* 80191FCC 0018EF0C  D0 04 01 E8 */	stfs f0, 0x1e8(r4)
/* 80191FD0 0018EF10  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 80191FD4 0018EF14  A8 9E 00 10 */	lha r4, 0x10(r30)
/* 80191FD8 0018EF18  4B FA AF 55 */	bl assertMotion__Q24Game8FakePikiFi
/* 80191FDC 0018EF1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80191FE0 0018EF20  40 82 00 24 */	bne .L_80192004
/* 80191FE4 0018EF24  7F C3 F3 78 */	mr r3, r30
/* 80191FE8 0018EF28  7F E4 FB 78 */	mr r4, r31
/* 80191FEC 0018EF2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80191FF0 0018EF30  38 A0 00 00 */	li r5, 0
/* 80191FF4 0018EF34  38 C0 00 00 */	li r6, 0
/* 80191FF8 0018EF38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80191FFC 0018EF3C  7D 89 03 A6 */	mtctr r12
/* 80192000 0018EF40  4E 80 04 21 */	bctrl 
.L_80192004:
/* 80192004 0018EF44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80192008 0018EF48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019200C 0018EF4C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80192010 0018EF50  7C 08 03 A6 */	mtlr r0
/* 80192014 0018EF54  38 21 00 10 */	addi r1, r1, 0x10
/* 80192018 0018EF58  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PikiGrowupStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game15PikiGrowupStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 8019201C 0018EF5C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80192020 0018EF60  7C 08 02 A6 */	mflr r0
/* 80192024 0018EF64  90 01 00 54 */	stw r0, 0x54(r1)
/* 80192028 0018EF68  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8019202C 0018EF6C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80192030 0018EF70  7C 9F 23 78 */	mr r31, r4
/* 80192034 0018EF74  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80192038 0018EF78  41 82 01 58 */	beq .L_80192190
/* 8019203C 0018EF7C  40 80 01 6C */	bge .L_801921A8
/* 80192040 0018EF80  2C 00 00 02 */	cmpwi r0, 2
/* 80192044 0018EF84  41 82 00 08 */	beq .L_8019204C
/* 80192048 0018EF88  48 00 01 60 */	b .L_801921A8
.L_8019204C:
/* 8019204C 0018EF8C  88 1F 02 B9 */	lbz r0, 0x2b9(r31)
/* 80192050 0018EF90  2C 00 00 02 */	cmpwi r0, 2
/* 80192054 0018EF94  41 82 01 54 */	beq .L_801921A8
/* 80192058 0018EF98  7F E3 FB 78 */	mr r3, r31
/* 8019205C 0018EF9C  38 80 00 02 */	li r4, 2
/* 80192060 0018EFA0  4B FB 87 11 */	bl changeHappa__Q24Game4PikiFi
/* 80192064 0018EFA4  7F E3 FB 78 */	mr r3, r31
/* 80192068 0018EFA8  38 80 28 45 */	li r4, 0x2845
/* 8019206C 0018EFAC  38 A0 00 01 */	li r5, 1
/* 80192070 0018EFB0  4B FB 68 5D */	bl startSound__Q24Game4PikiFUlb
/* 80192074 0018EFB4  7F E3 FB 78 */	mr r3, r31
/* 80192078 0018EFB8  4B FB 5D D1 */	bl getCurrActionID__Q24Game4PikiFv
/* 8019207C 0018EFBC  2C 03 00 00 */	cmpwi r3, 0
/* 80192080 0018EFC0  40 82 00 30 */	bne .L_801920B0
/* 80192084 0018EFC4  80 1F 02 C4 */	lwz r0, 0x2c4(r31)
/* 80192088 0018EFC8  28 00 00 00 */	cmplwi r0, 0
/* 8019208C 0018EFCC  40 82 00 14 */	bne .L_801920A0
/* 80192090 0018EFD0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80192094 0018EFD4  38 80 00 00 */	li r4, 0
/* 80192098 0018EFD8  4B FC 92 35 */	bl getAliveOrima__Q24Game7NaviMgrFi
/* 8019209C 0018EFDC  90 7F 02 C4 */	stw r3, 0x2c4(r31)
.L_801920A0:
/* 801920A0 0018EFE0  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 801920A4 0018EFE4  7F E4 FB 78 */	mr r4, r31
/* 801920A8 0018EFE8  80 63 02 54 */	lwz r3, 0x254(r3)
/* 801920AC 0018EFEC  48 00 37 05 */	bl changeFlower__Q24Game6CPlateFPQ24Game8Creature
.L_801920B0:
/* 801920B0 0018EFF0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801920B4 0018EFF4  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 801920B8 0018EFF8  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 801920BC 0018EFFC  41 82 00 EC */	beq .L_801921A8
/* 801920C0 0018F000  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801920C4 0018F004  38 80 00 14 */	li r4, 0x14
/* 801920C8 0018F008  48 05 53 19 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801920CC 0018F00C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801920D0 0018F010  40 82 00 D8 */	bne .L_801921A8
/* 801920D4 0018F014  80 0D 9B 54 */	lwz r0, moviePlayer__4Game@sda21(r13)
/* 801920D8 0018F018  28 00 00 00 */	cmplwi r0, 0
/* 801920DC 0018F01C  41 82 00 A4 */	beq .L_80192180
/* 801920E0 0018F020  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 801920E4 0018F024  3C 60 80 48 */	lis r3, lbl_8047EE04@ha
/* 801920E8 0018F028  38 00 00 00 */	li r0, 0
/* 801920EC 0018F02C  7F E4 FB 78 */	mr r4, r31
/* 801920F0 0018F030  38 A3 EE 04 */	addi r5, r3, lbl_8047EE04@l
/* 801920F4 0018F034  90 01 00 18 */	stw r0, 0x18(r1)
/* 801920F8 0018F038  38 61 00 08 */	addi r3, r1, 8
/* 801920FC 0018F03C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80192100 0018F040  90 01 00 20 */	stw r0, 0x20(r1)
/* 80192104 0018F044  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80192108 0018F048  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8019210C 0018F04C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80192110 0018F050  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80192114 0018F054  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80192118 0018F058  90 01 00 24 */	stw r0, 0x24(r1)
/* 8019211C 0018F05C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80192120 0018F060  90 01 00 40 */	stw r0, 0x40(r1)
/* 80192124 0018F064  90 01 00 28 */	stw r0, 0x28(r1)
/* 80192128 0018F068  90 01 00 44 */	stw r0, 0x44(r1)
/* 8019212C 0018F06C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80192130 0018F070  81 8C 00 08 */	lwz r12, 8(r12)
/* 80192134 0018F074  7D 89 03 A6 */	mtctr r12
/* 80192138 0018F078  4E 80 04 21 */	bctrl 
/* 8019213C 0018F07C  C0 41 00 08 */	lfs f2, 8(r1)
/* 80192140 0018F080  7F E3 FB 78 */	mr r3, r31
/* 80192144 0018F084  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80192148 0018F088  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8019214C 0018F08C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80192150 0018F090  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80192154 0018F094  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80192158 0018F098  81 9F 00 00 */	lwz r12, 0(r31)
/* 8019215C 0018F09C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80192160 0018F0A0  7D 89 03 A6 */	mtctr r12
/* 80192164 0018F0A4  4E 80 04 21 */	bctrl 
/* 80192168 0018F0A8  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8019216C 0018F0AC  38 81 00 14 */	addi r4, r1, 0x14
/* 80192170 0018F0B0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80192174 0018F0B4  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80192178 0018F0B8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8019217C 0018F0BC  48 29 A8 55 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_80192180:
/* 80192180 0018F0C0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80192184 0018F0C4  38 80 00 14 */	li r4, 0x14
/* 80192188 0018F0C8  48 05 52 1D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 8019218C 0018F0CC  48 00 00 1C */	b .L_801921A8
.L_80192190:
/* 80192190 0018F0D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80192194 0018F0D4  38 A0 00 00 */	li r5, 0
/* 80192198 0018F0D8  38 C0 00 00 */	li r6, 0
/* 8019219C 0018F0DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801921A0 0018F0E0  7D 89 03 A6 */	mtctr r12
/* 801921A4 0018F0E4  4E 80 04 21 */	bctrl 
.L_801921A8:
/* 801921A8 0018F0E8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801921AC 0018F0EC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801921B0 0018F0F0  7C 08 03 A6 */	mtlr r0
/* 801921B4 0018F0F4  38 21 00 50 */	addi r1, r1, 0x50
/* 801921B8 0018F0F8  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game15PikiGrowupStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game15PikiGrowupStateFPQ24Game4Piki, global
/* 801921BC 0018F0FC  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PikiGrowupStateFPQ24Game4Piki

.fn init__Q24Game15PikiEscapeStateFPQ24Game4PikiPQ24Game8StateArg, global
/* 801921C0 0018F100  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801921C4 0018F104  7C 08 02 A6 */	mflr r0
/* 801921C8 0018F108  90 01 00 14 */	stw r0, 0x14(r1)
/* 801921CC 0018F10C  48 00 00 15 */	bl initRun__Q24Game15PikiEscapeStateFPQ24Game4Piki
/* 801921D0 0018F110  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801921D4 0018F114  7C 08 03 A6 */	mtlr r0
/* 801921D8 0018F118  38 21 00 10 */	addi r1, r1, 0x10
/* 801921DC 0018F11C  4E 80 00 20 */	blr 
.endfn init__Q24Game15PikiEscapeStateFPQ24Game4PikiPQ24Game8StateArg

.fn initRun__Q24Game15PikiEscapeStateFPQ24Game4Piki, global
/* 801921E0 0018F120  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801921E4 0018F124  7C 08 02 A6 */	mflr r0
/* 801921E8 0018F128  90 01 00 24 */	stw r0, 0x24(r1)
/* 801921EC 0018F12C  38 00 00 00 */	li r0, 0
/* 801921F0 0018F130  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801921F4 0018F134  7C 7F 1B 78 */	mr r31, r3
/* 801921F8 0018F138  98 03 00 11 */	stb r0, 0x11(r3)
/* 801921FC 0018F13C  4B F3 73 A5 */	bl rand
/* 80192200 0018F140  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80192204 0018F144  3C 00 43 30 */	lis r0, 0x4330
/* 80192208 0018F148  90 61 00 0C */	stw r3, 0xc(r1)
/* 8019220C 0018F14C  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 80192210 0018F150  90 01 00 08 */	stw r0, 8(r1)
/* 80192214 0018F154  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 80192218 0018F158  C8 41 00 08 */	lfd f2, 8(r1)
/* 8019221C 0018F15C  C0 02 AA 94 */	lfs f0, lbl_80518DF4@sda21(r2)
/* 80192220 0018F160  EC 42 18 28 */	fsubs f2, f2, f3
/* 80192224 0018F164  EC 22 08 24 */	fdivs f1, f2, f1
/* 80192228 0018F168  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019222C 0018F16C  40 81 00 0C */	ble .L_80192238
/* 80192230 0018F170  38 00 00 01 */	li r0, 1
/* 80192234 0018F174  48 00 00 08 */	b .L_8019223C
.L_80192238:
/* 80192238 0018F178  38 00 00 00 */	li r0, 0
.L_8019223C:
/* 8019223C 0018F17C  98 1F 00 10 */	stb r0, 0x10(r31)
/* 80192240 0018F180  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80192244 0018F184  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80192248 0018F188  7C 08 03 A6 */	mtlr r0
/* 8019224C 0018F18C  38 21 00 20 */	addi r1, r1, 0x20
/* 80192250 0018F190  4E 80 00 20 */	blr 
.endfn initRun__Q24Game15PikiEscapeStateFPQ24Game4Piki

.fn exec__Q24Game15PikiEscapeStateFPQ24Game4Piki, global
/* 80192254 0018F194  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 80192258 0018F198  7C 08 02 A6 */	mflr r0
/* 8019225C 0018F19C  90 01 01 24 */	stw r0, 0x124(r1)
/* 80192260 0018F1A0  DB E1 01 10 */	stfd f31, 0x110(r1)
/* 80192264 0018F1A4  F3 E1 01 18 */	psq_st f31, 280(r1), 0, qr0
/* 80192268 0018F1A8  DB C1 01 00 */	stfd f30, 0x100(r1)
/* 8019226C 0018F1AC  F3 C1 01 08 */	psq_st f30, 264(r1), 0, qr0
/* 80192270 0018F1B0  DB A1 00 F0 */	stfd f29, 0xf0(r1)
/* 80192274 0018F1B4  F3 A1 00 F8 */	psq_st f29, 248(r1), 0, qr0
/* 80192278 0018F1B8  93 E1 00 EC */	stw r31, 0xec(r1)
/* 8019227C 0018F1BC  93 C1 00 E8 */	stw r30, 0xe8(r1)
/* 80192280 0018F1C0  93 A1 00 E4 */	stw r29, 0xe4(r1)
/* 80192284 0018F1C4  93 81 00 E0 */	stw r28, 0xe0(r1)
/* 80192288 0018F1C8  7C 7E 1B 78 */	mr r30, r3
/* 8019228C 0018F1CC  7C 9F 23 78 */	mr r31, r4
/* 80192290 0018F1D0  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80192294 0018F1D4  2C 00 00 03 */	cmpwi r0, 3
/* 80192298 0018F1D8  40 80 00 3C */	bge .L_801922D4
/* 8019229C 0018F1DC  2C 00 00 01 */	cmpwi r0, 1
/* 801922A0 0018F1E0  40 80 00 08 */	bge .L_801922A8
/* 801922A4 0018F1E4  48 00 00 30 */	b .L_801922D4
.L_801922A8:
/* 801922A8 0018F1E8  C0 42 AB 2C */	lfs f2, lbl_80518E8C@sda21(r2)
/* 801922AC 0018F1EC  C0 1F 01 E4 */	lfs f0, 0x1e4(r31)
/* 801922B0 0018F1F0  C0 3F 01 E8 */	lfs f1, 0x1e8(r31)
/* 801922B4 0018F1F4  C0 7F 01 EC */	lfs f3, 0x1ec(r31)
/* 801922B8 0018F1F8  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801922BC 0018F1FC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801922C0 0018F200  EC 43 00 B2 */	fmuls f2, f3, f2
/* 801922C4 0018F204  D0 1F 01 E4 */	stfs f0, 0x1e4(r31)
/* 801922C8 0018F208  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 801922CC 0018F20C  D0 5F 01 EC */	stfs f2, 0x1ec(r31)
/* 801922D0 0018F210  48 00 05 14 */	b .L_801927E4
.L_801922D4:
/* 801922D4 0018F214  7F E4 FB 78 */	mr r4, r31
/* 801922D8 0018F218  38 61 00 18 */	addi r3, r1, 0x18
/* 801922DC 0018F21C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801922E0 0018F220  81 8C 00 08 */	lwz r12, 8(r12)
/* 801922E4 0018F224  7D 89 03 A6 */	mtctr r12
/* 801922E8 0018F228  4E 80 04 21 */	bctrl 
/* 801922EC 0018F22C  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 801922F0 0018F230  38 61 00 60 */	addi r3, r1, 0x60
/* 801922F4 0018F234  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 801922F8 0018F238  38 81 00 08 */	addi r4, r1, 8
/* 801922FC 0018F23C  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 80192300 0018F240  C0 02 AB 48 */	lfs f0, lbl_80518EA8@sda21(r2)
/* 80192304 0018F244  D0 61 00 08 */	stfs f3, 8(r1)
/* 80192308 0018F248  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8019230C 0018F24C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80192310 0018F250  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80192314 0018F254  48 09 C0 8D */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 80192318 0018F258  38 61 00 80 */	addi r3, r1, 0x80
/* 8019231C 0018F25C  38 81 00 60 */	addi r4, r1, 0x60
/* 80192320 0018F260  48 09 C0 C1 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 80192324 0018F264  C3 E2 AB 48 */	lfs f31, lbl_80518EA8@sda21(r2)
/* 80192328 0018F268  38 61 00 80 */	addi r3, r1, 0x80
/* 8019232C 0018F26C  3B 80 00 00 */	li r28, 0
/* 80192330 0018F270  48 09 C1 2D */	bl first__Q24Game12CellIteratorFv
/* 80192334 0018F274  48 00 00 E4 */	b .L_80192418
.L_80192338:
/* 80192338 0018F278  38 61 00 80 */	addi r3, r1, 0x80
/* 8019233C 0018F27C  48 09 C2 09 */	bl __ml__Q24Game12CellIteratorFv
/* 80192340 0018F280  81 83 00 00 */	lwz r12, 0(r3)
/* 80192344 0018F284  7C 7D 1B 78 */	mr r29, r3
/* 80192348 0018F288  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8019234C 0018F28C  7D 89 03 A6 */	mtctr r12
/* 80192350 0018F290  4E 80 04 21 */	bctrl 
/* 80192354 0018F294  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192358 0018F298  41 82 00 B8 */	beq .L_80192410
/* 8019235C 0018F29C  7F A3 EB 78 */	mr r3, r29
/* 80192360 0018F2A0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80192364 0018F2A4  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80192368 0018F2A8  7D 89 03 A6 */	mtctr r12
/* 8019236C 0018F2AC  4E 80 04 21 */	bctrl 
/* 80192370 0018F2B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192374 0018F2B4  41 82 00 9C */	beq .L_80192410
/* 80192378 0018F2B8  7F A3 EB 78 */	mr r3, r29
/* 8019237C 0018F2BC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80192380 0018F2C0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80192384 0018F2C4  7D 89 03 A6 */	mtctr r12
/* 80192388 0018F2C8  4E 80 04 21 */	bctrl 
/* 8019238C 0018F2CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192390 0018F2D0  41 82 00 80 */	beq .L_80192410
/* 80192394 0018F2D4  7F A4 EB 78 */	mr r4, r29
/* 80192398 0018F2D8  38 61 00 24 */	addi r3, r1, 0x24
/* 8019239C 0018F2DC  81 9D 00 00 */	lwz r12, 0(r29)
/* 801923A0 0018F2E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801923A4 0018F2E4  7D 89 03 A6 */	mtctr r12
/* 801923A8 0018F2E8  4E 80 04 21 */	bctrl 
/* 801923AC 0018F2EC  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 801923B0 0018F2F0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801923B4 0018F2F4  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 801923B8 0018F2F8  EC 81 00 28 */	fsubs f4, f1, f0
/* 801923BC 0018F2FC  C0 41 00 08 */	lfs f2, 8(r1)
/* 801923C0 0018F300  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 801923C4 0018F304  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801923C8 0018F308  EC 63 10 28 */	fsubs f3, f3, f2
/* 801923CC 0018F30C  EC 84 01 32 */	fmuls f4, f4, f4
/* 801923D0 0018F310  EC 41 00 28 */	fsubs f2, f1, f0
/* 801923D4 0018F314  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 801923D8 0018F318  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 801923DC 0018F31C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801923E0 0018F320  EC 22 08 2A */	fadds f1, f2, f1
/* 801923E4 0018F324  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801923E8 0018F328  40 81 00 14 */	ble .L_801923FC
/* 801923EC 0018F32C  40 81 00 14 */	ble .L_80192400
/* 801923F0 0018F330  FC 00 08 34 */	frsqrte f0, f1
/* 801923F4 0018F334  EC 20 00 72 */	fmuls f1, f0, f1
/* 801923F8 0018F338  48 00 00 08 */	b .L_80192400
.L_801923FC:
/* 801923FC 0018F33C  FC 20 00 90 */	fmr f1, f0
.L_80192400:
/* 80192400 0018F340  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80192404 0018F344  40 80 00 0C */	bge .L_80192410
/* 80192408 0018F348  7F BC EB 78 */	mr r28, r29
/* 8019240C 0018F34C  FF E0 08 90 */	fmr f31, f1
.L_80192410:
/* 80192410 0018F350  38 61 00 80 */	addi r3, r1, 0x80
/* 80192414 0018F354  48 09 C0 ED */	bl next__Q24Game12CellIteratorFv
.L_80192418:
/* 80192418 0018F358  38 61 00 80 */	addi r3, r1, 0x80
/* 8019241C 0018F35C  48 09 C1 19 */	bl isDone__Q24Game12CellIteratorFv
/* 80192420 0018F360  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192424 0018F364  41 82 FF 14 */	beq .L_80192338
/* 80192428 0018F368  28 1C 00 00 */	cmplwi r28, 0
/* 8019242C 0018F36C  41 82 03 B8 */	beq .L_801927E4
/* 80192430 0018F370  7F 84 E3 78 */	mr r4, r28
/* 80192434 0018F374  38 61 00 3C */	addi r3, r1, 0x3c
/* 80192438 0018F378  81 9C 00 00 */	lwz r12, 0(r28)
/* 8019243C 0018F37C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80192440 0018F380  7D 89 03 A6 */	mtctr r12
/* 80192444 0018F384  4E 80 04 21 */	bctrl 
/* 80192448 0018F388  7F E4 FB 78 */	mr r4, r31
/* 8019244C 0018F38C  38 61 00 30 */	addi r3, r1, 0x30
/* 80192450 0018F390  81 9F 00 00 */	lwz r12, 0(r31)
/* 80192454 0018F394  C3 C1 00 3C */	lfs f30, 0x3c(r1)
/* 80192458 0018F398  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019245C 0018F39C  C3 E1 00 40 */	lfs f31, 0x40(r1)
/* 80192460 0018F3A0  C3 A1 00 44 */	lfs f29, 0x44(r1)
/* 80192464 0018F3A4  7D 89 03 A6 */	mtctr r12
/* 80192468 0018F3A8  4E 80 04 21 */	bctrl 
/* 8019246C 0018F3AC  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80192470 0018F3B0  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80192474 0018F3B4  EC 61 F0 28 */	fsubs f3, f1, f30
/* 80192478 0018F3B8  C0 81 00 38 */	lfs f4, 0x38(r1)
/* 8019247C 0018F3BC  EC 40 F8 28 */	fsubs f2, f0, f31
/* 80192480 0018F3C0  C0 22 AA 80 */	lfs f1, lbl_80518DE0@sda21(r2)
/* 80192484 0018F3C4  EC 84 E8 28 */	fsubs f4, f4, f29
/* 80192488 0018F3C8  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8019248C 0018F3CC  EC A2 00 B2 */	fmuls f5, f2, f2
/* 80192490 0018F3D0  D0 61 00 54 */	stfs f3, 0x54(r1)
/* 80192494 0018F3D4  EC C4 01 32 */	fmuls f6, f4, f4
/* 80192498 0018F3D8  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 8019249C 0018F3DC  EC 00 28 2A */	fadds f0, f0, f5
/* 801924A0 0018F3E0  D0 81 00 5C */	stfs f4, 0x5c(r1)
/* 801924A4 0018F3E4  EC 06 00 2A */	fadds f0, f6, f0
/* 801924A8 0018F3E8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801924AC 0018F3EC  40 81 00 20 */	ble .L_801924CC
/* 801924B0 0018F3F0  EC 03 28 FA */	fmadds f0, f3, f3, f5
/* 801924B4 0018F3F4  EF E6 00 2A */	fadds f31, f6, f0
/* 801924B8 0018F3F8  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 801924BC 0018F3FC  40 81 00 14 */	ble .L_801924D0
/* 801924C0 0018F400  FC 00 F8 34 */	frsqrte f0, f31
/* 801924C4 0018F404  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801924C8 0018F408  48 00 00 08 */	b .L_801924D0
.L_801924CC:
/* 801924CC 0018F40C  FF E0 08 90 */	fmr f31, f1
.L_801924D0:
/* 801924D0 0018F410  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 801924D4 0018F414  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801924D8 0018F418  40 81 00 34 */	ble .L_8019250C
/* 801924DC 0018F41C  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 801924E0 0018F420  C0 41 00 54 */	lfs f2, 0x54(r1)
/* 801924E4 0018F424  EC 60 F8 24 */	fdivs f3, f0, f31
/* 801924E8 0018F428  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 801924EC 0018F42C  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 801924F0 0018F430  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801924F4 0018F434  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801924F8 0018F438  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801924FC 0018F43C  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 80192500 0018F440  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 80192504 0018F444  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80192508 0018F448  48 00 00 08 */	b .L_80192510
.L_8019250C:
/* 8019250C 0018F44C  FF E0 00 90 */	fmr f31, f0
.L_80192510:
/* 80192510 0018F450  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 80192514 0018F454  C0 62 AA 84 */	lfs f3, lbl_80518DE4@sda21(r2)
/* 80192518 0018F458  28 00 00 00 */	cmplwi r0, 0
/* 8019251C 0018F45C  41 82 00 08 */	beq .L_80192524
/* 80192520 0018F460  C0 62 AA 88 */	lfs f3, lbl_80518DE8@sda21(r2)
.L_80192524:
/* 80192524 0018F464  C0 81 00 54 */	lfs f4, 0x54(r1)
/* 80192528 0018F468  C0 42 AA 80 */	lfs f2, lbl_80518DE0@sda21(r2)
/* 8019252C 0018F46C  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 80192530 0018F470  EC 04 00 B2 */	fmuls f0, f4, f2
/* 80192534 0018F474  C0 A1 00 5C */	lfs f5, 0x5c(r1)
/* 80192538 0018F478  EC C1 00 B2 */	fmuls f6, f1, f2
/* 8019253C 0018F47C  EC 05 00 B8 */	fmsubs f0, f5, f2, f0
/* 80192540 0018F480  EC 25 30 FC */	fnmsubs f1, f5, f3, f6
/* 80192544 0018F484  EC 64 30 F8 */	fmsubs f3, f4, f3, f6
/* 80192548 0018F488  EC 80 00 32 */	fmuls f4, f0, f0
/* 8019254C 0018F48C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80192550 0018F490  EC 01 00 72 */	fmuls f0, f1, f1
/* 80192554 0018F494  EC A3 00 F2 */	fmuls f5, f3, f3
/* 80192558 0018F498  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 8019255C 0018F49C  EC 00 20 2A */	fadds f0, f0, f4
/* 80192560 0018F4A0  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 80192564 0018F4A4  EC 05 00 2A */	fadds f0, f5, f0
/* 80192568 0018F4A8  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8019256C 0018F4AC  40 81 00 20 */	ble .L_8019258C
/* 80192570 0018F4B0  EC 01 20 7A */	fmadds f0, f1, f1, f4
/* 80192574 0018F4B4  EC 25 00 2A */	fadds f1, f5, f0
/* 80192578 0018F4B8  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8019257C 0018F4BC  40 81 00 14 */	ble .L_80192590
/* 80192580 0018F4C0  FC 00 08 34 */	frsqrte f0, f1
/* 80192584 0018F4C4  EC 20 00 72 */	fmuls f1, f0, f1
/* 80192588 0018F4C8  48 00 00 08 */	b .L_80192590
.L_8019258C:
/* 8019258C 0018F4CC  FC 20 10 90 */	fmr f1, f2
.L_80192590:
/* 80192590 0018F4D0  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 80192594 0018F4D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80192598 0018F4D8  40 81 00 30 */	ble .L_801925C8
/* 8019259C 0018F4DC  C0 02 AA 84 */	lfs f0, lbl_80518DE4@sda21(r2)
/* 801925A0 0018F4E0  C0 41 00 48 */	lfs f2, 0x48(r1)
/* 801925A4 0018F4E4  EC 60 08 24 */	fdivs f3, f0, f1
/* 801925A8 0018F4E8  C0 21 00 4C */	lfs f1, 0x4c(r1)
/* 801925AC 0018F4EC  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 801925B0 0018F4F0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801925B4 0018F4F4  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801925B8 0018F4F8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801925BC 0018F4FC  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 801925C0 0018F500  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 801925C4 0018F504  D0 01 00 50 */	stfs f0, 0x50(r1)
.L_801925C8:
/* 801925C8 0018F508  4B F3 6F D9 */	bl rand
/* 801925CC 0018F50C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801925D0 0018F510  3C 00 43 30 */	lis r0, 0x4330
/* 801925D4 0018F514  90 61 00 CC */	stw r3, 0xcc(r1)
/* 801925D8 0018F518  7F 83 E3 78 */	mr r3, r28
/* 801925DC 0018F51C  81 9C 00 00 */	lwz r12, 0(r28)
/* 801925E0 0018F520  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 801925E4 0018F524  C8 42 AA 78 */	lfd f2, lbl_80518DD8@sda21(r2)
/* 801925E8 0018F528  C8 21 00 C8 */	lfd f1, 0xc8(r1)
/* 801925EC 0018F52C  C0 02 AA 68 */	lfs f0, lbl_80518DC8@sda21(r2)
/* 801925F0 0018F530  EC 21 10 28 */	fsubs f1, f1, f2
/* 801925F4 0018F534  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 801925F8 0018F538  EF C1 00 24 */	fdivs f30, f1, f0
/* 801925FC 0018F53C  7D 89 03 A6 */	mtctr r12
/* 80192600 0018F540  4E 80 04 21 */	bctrl 
/* 80192604 0018F544  C0 42 AA F4 */	lfs f2, lbl_80518E54@sda21(r2)
/* 80192608 0018F548  EC 3F 08 28 */	fsubs f1, f31, f1
/* 8019260C 0018F54C  C0 02 AA 6C */	lfs f0, lbl_80518DCC@sda21(r2)
/* 80192610 0018F550  EC 02 07 B8 */	fmsubs f0, f2, f30, f0
/* 80192614 0018F554  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80192618 0018F558  40 80 00 18 */	bge .L_80192630
/* 8019261C 0018F55C  C0 22 AA B0 */	lfs f1, lbl_80518E10@sda21(r2)
/* 80192620 0018F560  7F E3 FB 78 */	mr r3, r31
/* 80192624 0018F564  38 81 00 54 */	addi r4, r1, 0x54
/* 80192628 0018F568  4B FB 69 F1 */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 8019262C 0018F56C  48 00 00 14 */	b .L_80192640
.L_80192630:
/* 80192630 0018F570  C0 22 AA B0 */	lfs f1, lbl_80518E10@sda21(r2)
/* 80192634 0018F574  7F E3 FB 78 */	mr r3, r31
/* 80192638 0018F578  38 81 00 48 */	addi r4, r1, 0x48
/* 8019263C 0018F57C  4B FB 69 DD */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
.L_80192640:
/* 80192640 0018F580  4B F3 6F 61 */	bl rand
/* 80192644 0018F584  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80192648 0018F588  3C 00 43 30 */	lis r0, 0x4330
/* 8019264C 0018F58C  90 61 00 CC */	stw r3, 0xcc(r1)
/* 80192650 0018F590  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 80192654 0018F594  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80192658 0018F598  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8019265C 0018F59C  C8 41 00 C8 */	lfd f2, 0xc8(r1)
/* 80192660 0018F5A0  C0 02 AA FC */	lfs f0, lbl_80518E5C@sda21(r2)
/* 80192664 0018F5A4  EC 42 18 28 */	fsubs f2, f2, f3
/* 80192668 0018F5A8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8019266C 0018F5AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80192670 0018F5B0  40 80 00 F4 */	bge .L_80192764
/* 80192674 0018F5B4  4B F3 6F 2D */	bl rand
/* 80192678 0018F5B8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8019267C 0018F5BC  3C 00 43 30 */	lis r0, 0x4330
/* 80192680 0018F5C0  90 61 00 CC */	stw r3, 0xcc(r1)
/* 80192684 0018F5C4  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 80192688 0018F5C8  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 8019268C 0018F5CC  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 80192690 0018F5D0  C8 41 00 C8 */	lfd f2, 0xc8(r1)
/* 80192694 0018F5D4  C0 02 AA A4 */	lfs f0, lbl_80518E04@sda21(r2)
/* 80192698 0018F5D8  EC 42 18 28 */	fsubs f2, f2, f3
/* 8019269C 0018F5DC  EC 22 08 24 */	fdivs f1, f2, f1
/* 801926A0 0018F5E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801926A4 0018F5E4  40 80 00 40 */	bge .L_801926E4
/* 801926A8 0018F5E8  28 1F 00 00 */	cmplwi r31, 0
/* 801926AC 0018F5EC  7F E6 FB 78 */	mr r6, r31
/* 801926B0 0018F5F0  41 82 00 08 */	beq .L_801926B8
/* 801926B4 0018F5F4  38 DF 01 78 */	addi r6, r31, 0x178
.L_801926B8:
/* 801926B8 0018F5F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801926BC 0018F5FC  7F E3 FB 78 */	mr r3, r31
/* 801926C0 0018F600  38 80 00 3C */	li r4, 0x3c
/* 801926C4 0018F604  38 A0 00 3C */	li r5, 0x3c
/* 801926C8 0018F608  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801926CC 0018F60C  38 E0 00 00 */	li r7, 0
/* 801926D0 0018F610  7D 89 03 A6 */	mtctr r12
/* 801926D4 0018F614  4E 80 04 21 */	bctrl 
/* 801926D8 0018F618  38 00 00 02 */	li r0, 2
/* 801926DC 0018F61C  98 1E 00 11 */	stb r0, 0x11(r30)
/* 801926E0 0018F620  48 00 00 3C */	b .L_8019271C
.L_801926E4:
/* 801926E4 0018F624  28 1F 00 00 */	cmplwi r31, 0
/* 801926E8 0018F628  7F E6 FB 78 */	mr r6, r31
/* 801926EC 0018F62C  41 82 00 08 */	beq .L_801926F4
/* 801926F0 0018F630  38 DF 01 78 */	addi r6, r31, 0x178
.L_801926F4:
/* 801926F4 0018F634  81 9F 00 00 */	lwz r12, 0(r31)
/* 801926F8 0018F638  7F E3 FB 78 */	mr r3, r31
/* 801926FC 0018F63C  38 80 00 1A */	li r4, 0x1a
/* 80192700 0018F640  38 A0 00 1A */	li r5, 0x1a
/* 80192704 0018F644  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80192708 0018F648  38 E0 00 00 */	li r7, 0
/* 8019270C 0018F64C  7D 89 03 A6 */	mtctr r12
/* 80192710 0018F650  4E 80 04 21 */	bctrl 
/* 80192714 0018F654  38 00 00 01 */	li r0, 1
/* 80192718 0018F658  98 1E 00 11 */	stb r0, 0x11(r30)
.L_8019271C:
/* 8019271C 0018F65C  4B F3 6E 85 */	bl rand
/* 80192720 0018F660  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80192724 0018F664  3C 00 43 30 */	lis r0, 0x4330
/* 80192728 0018F668  90 61 00 CC */	stw r3, 0xcc(r1)
/* 8019272C 0018F66C  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 80192730 0018F670  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80192734 0018F674  C0 42 AA 68 */	lfs f2, lbl_80518DC8@sda21(r2)
/* 80192738 0018F678  C8 01 00 C8 */	lfd f0, 0xc8(r1)
/* 8019273C 0018F67C  C0 22 AB 28 */	lfs f1, lbl_80518E88@sda21(r2)
/* 80192740 0018F680  EC 60 18 28 */	fsubs f3, f0, f3
/* 80192744 0018F684  C0 02 AA 70 */	lfs f0, lbl_80518DD0@sda21(r2)
/* 80192748 0018F688  EC 43 10 24 */	fdivs f2, f3, f2
/* 8019274C 0018F68C  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 80192750 0018F690  FC 00 00 1E */	fctiwz f0, f0
/* 80192754 0018F694  D8 01 00 D0 */	stfd f0, 0xd0(r1)
/* 80192758 0018F698  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8019275C 0018F69C  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80192760 0018F6A0  48 00 00 84 */	b .L_801927E4
.L_80192764:
/* 80192764 0018F6A4  4B F3 6E 3D */	bl rand
/* 80192768 0018F6A8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8019276C 0018F6AC  3C 00 43 30 */	lis r0, 0x4330
/* 80192770 0018F6B0  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 80192774 0018F6B4  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 80192778 0018F6B8  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 8019277C 0018F6BC  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 80192780 0018F6C0  C8 41 00 D0 */	lfd f2, 0xd0(r1)
/* 80192784 0018F6C4  C0 02 AA CC */	lfs f0, lbl_80518E2C@sda21(r2)
/* 80192788 0018F6C8  EC 42 18 28 */	fsubs f2, f2, f3
/* 8019278C 0018F6CC  EC 22 08 24 */	fdivs f1, f2, f1
/* 80192790 0018F6D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80192794 0018F6D4  40 80 00 50 */	bge .L_801927E4
/* 80192798 0018F6D8  38 00 00 00 */	li r0, 0
/* 8019279C 0018F6DC  98 1E 00 11 */	stb r0, 0x11(r30)
/* 801927A0 0018F6E0  4B F3 6E 01 */	bl rand
/* 801927A4 0018F6E4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801927A8 0018F6E8  3C 00 43 30 */	lis r0, 0x4330
/* 801927AC 0018F6EC  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 801927B0 0018F6F0  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 801927B4 0018F6F4  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 801927B8 0018F6F8  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 801927BC 0018F6FC  C8 41 00 D0 */	lfd f2, 0xd0(r1)
/* 801927C0 0018F700  C0 02 AA 94 */	lfs f0, lbl_80518DF4@sda21(r2)
/* 801927C4 0018F704  EC 42 18 28 */	fsubs f2, f2, f3
/* 801927C8 0018F708  EC 22 08 24 */	fdivs f1, f2, f1
/* 801927CC 0018F70C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801927D0 0018F710  40 81 00 0C */	ble .L_801927DC
/* 801927D4 0018F714  38 00 00 01 */	li r0, 1
/* 801927D8 0018F718  48 00 00 08 */	b .L_801927E0
.L_801927DC:
/* 801927DC 0018F71C  38 00 00 00 */	li r0, 0
.L_801927E0:
/* 801927E0 0018F720  98 1E 00 10 */	stb r0, 0x10(r30)
.L_801927E4:
/* 801927E4 0018F724  E3 E1 01 18 */	psq_l f31, 280(r1), 0, qr0
/* 801927E8 0018F728  CB E1 01 10 */	lfd f31, 0x110(r1)
/* 801927EC 0018F72C  E3 C1 01 08 */	psq_l f30, 264(r1), 0, qr0
/* 801927F0 0018F730  CB C1 01 00 */	lfd f30, 0x100(r1)
/* 801927F4 0018F734  E3 A1 00 F8 */	psq_l f29, 248(r1), 0, qr0
/* 801927F8 0018F738  CB A1 00 F0 */	lfd f29, 0xf0(r1)
/* 801927FC 0018F73C  83 E1 00 EC */	lwz r31, 0xec(r1)
/* 80192800 0018F740  83 C1 00 E8 */	lwz r30, 0xe8(r1)
/* 80192804 0018F744  83 A1 00 E4 */	lwz r29, 0xe4(r1)
/* 80192808 0018F748  80 01 01 24 */	lwz r0, 0x124(r1)
/* 8019280C 0018F74C  83 81 00 E0 */	lwz r28, 0xe0(r1)
/* 80192810 0018F750  7C 08 03 A6 */	mtlr r0
/* 80192814 0018F754  38 21 01 20 */	addi r1, r1, 0x120
/* 80192818 0018F758  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PikiEscapeStateFPQ24Game4Piki

.fn onKeyEvent__Q24Game15PikiEscapeStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, global
/* 8019281C 0018F75C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80192820 0018F760  7C 08 02 A6 */	mflr r0
/* 80192824 0018F764  90 01 00 24 */	stw r0, 0x24(r1)
/* 80192828 0018F768  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8019282C 0018F76C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80192830 0018F770  7C 7F 1B 78 */	mr r31, r3
/* 80192834 0018F774  2C 00 00 C8 */	cmpwi r0, 0xc8
/* 80192838 0018F778  41 82 00 2C */	beq .L_80192864
/* 8019283C 0018F77C  40 80 00 1C */	bge .L_80192858
/* 80192840 0018F780  2C 00 00 02 */	cmpwi r0, 2
/* 80192844 0018F784  41 82 00 64 */	beq .L_801928A8
/* 80192848 0018F788  40 80 01 3C */	bge .L_80192984
/* 8019284C 0018F78C  2C 00 00 01 */	cmpwi r0, 1
/* 80192850 0018F790  40 80 00 8C */	bge .L_801928DC
/* 80192854 0018F794  48 00 01 30 */	b .L_80192984
.L_80192858:
/* 80192858 0018F798  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8019285C 0018F79C  41 82 00 C8 */	beq .L_80192924
/* 80192860 0018F7A0  48 00 01 24 */	b .L_80192984
.L_80192864:
/* 80192864 0018F7A4  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 80192868 0018F7A8  2C 00 00 02 */	cmpwi r0, 2
/* 8019286C 0018F7AC  41 82 00 14 */	beq .L_80192880
/* 80192870 0018F7B0  40 80 01 14 */	bge .L_80192984
/* 80192874 0018F7B4  2C 00 00 01 */	cmpwi r0, 1
/* 80192878 0018F7B8  40 80 00 1C */	bge .L_80192894
/* 8019287C 0018F7BC  48 00 01 08 */	b .L_80192984
.L_80192880:
/* 80192880 0018F7C0  7C 83 23 78 */	mr r3, r4
/* 80192884 0018F7C4  38 80 28 43 */	li r4, 0x2843
/* 80192888 0018F7C8  38 A0 00 01 */	li r5, 1
/* 8019288C 0018F7CC  4B FB 60 41 */	bl startSound__Q24Game4PikiFUlb
/* 80192890 0018F7D0  48 00 00 F4 */	b .L_80192984
.L_80192894:
/* 80192894 0018F7D4  7C 83 23 78 */	mr r3, r4
/* 80192898 0018F7D8  38 80 28 44 */	li r4, 0x2844
/* 8019289C 0018F7DC  38 A0 00 01 */	li r5, 1
/* 801928A0 0018F7E0  4B FB 60 2D */	bl startSound__Q24Game4PikiFUlb
/* 801928A4 0018F7E4  48 00 00 E0 */	b .L_80192984
.L_801928A8:
/* 801928A8 0018F7E8  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 801928AC 0018F7EC  28 00 00 01 */	cmplwi r0, 1
/* 801928B0 0018F7F0  41 82 00 0C */	beq .L_801928BC
/* 801928B4 0018F7F4  28 00 00 02 */	cmplwi r0, 2
/* 801928B8 0018F7F8  40 82 00 CC */	bne .L_80192984
.L_801928BC:
/* 801928BC 0018F7FC  C0 02 AA 80 */	lfs f0, lbl_80518DE0@sda21(r2)
/* 801928C0 0018F800  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 801928C4 0018F804  D0 04 02 04 */	stfs f0, 0x204(r4)
/* 801928C8 0018F808  D0 04 02 08 */	stfs f0, 0x208(r4)
/* 801928CC 0018F80C  D0 04 01 E4 */	stfs f0, 0x1e4(r4)
/* 801928D0 0018F810  D0 04 01 E8 */	stfs f0, 0x1e8(r4)
/* 801928D4 0018F814  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 801928D8 0018F818  48 00 00 AC */	b .L_80192984
.L_801928DC:
/* 801928DC 0018F81C  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 801928E0 0018F820  28 00 00 01 */	cmplwi r0, 1
/* 801928E4 0018F824  41 82 00 0C */	beq .L_801928F0
/* 801928E8 0018F828  28 00 00 02 */	cmplwi r0, 2
/* 801928EC 0018F82C  40 82 00 98 */	bne .L_80192984
.L_801928F0:
/* 801928F0 0018F830  88 7F 00 10 */	lbz r3, 0x10(r31)
/* 801928F4 0018F834  38 03 FF FF */	addi r0, r3, -1
/* 801928F8 0018F838  98 1F 00 10 */	stb r0, 0x10(r31)
/* 801928FC 0018F83C  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80192900 0018F840  7C 00 07 75 */	extsb. r0, r0
/* 80192904 0018F844  41 81 00 80 */	bgt .L_80192984
/* 80192908 0018F848  88 04 01 C4 */	lbz r0, 0x1c4(r4)
/* 8019290C 0018F84C  60 00 00 02 */	ori r0, r0, 2
/* 80192910 0018F850  98 04 01 C4 */	stb r0, 0x1c4(r4)
/* 80192914 0018F854  88 04 01 E0 */	lbz r0, 0x1e0(r4)
/* 80192918 0018F858  60 00 00 02 */	ori r0, r0, 2
/* 8019291C 0018F85C  98 04 01 E0 */	stb r0, 0x1e0(r4)
/* 80192920 0018F860  48 00 00 64 */	b .L_80192984
.L_80192924:
/* 80192924 0018F864  88 1F 00 11 */	lbz r0, 0x11(r31)
/* 80192928 0018F868  28 00 00 01 */	cmplwi r0, 1
/* 8019292C 0018F86C  41 82 00 0C */	beq .L_80192938
/* 80192930 0018F870  28 00 00 02 */	cmplwi r0, 2
/* 80192934 0018F874  40 82 00 50 */	bne .L_80192984
.L_80192938:
/* 80192938 0018F878  38 00 00 00 */	li r0, 0
/* 8019293C 0018F87C  98 1F 00 11 */	stb r0, 0x11(r31)
/* 80192940 0018F880  4B F3 6C 61 */	bl rand
/* 80192944 0018F884  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80192948 0018F888  3C 00 43 30 */	lis r0, 0x4330
/* 8019294C 0018F88C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80192950 0018F890  C8 62 AA 78 */	lfd f3, lbl_80518DD8@sda21(r2)
/* 80192954 0018F894  90 01 00 08 */	stw r0, 8(r1)
/* 80192958 0018F898  C0 22 AA 68 */	lfs f1, lbl_80518DC8@sda21(r2)
/* 8019295C 0018F89C  C8 41 00 08 */	lfd f2, 8(r1)
/* 80192960 0018F8A0  C0 02 AA 94 */	lfs f0, lbl_80518DF4@sda21(r2)
/* 80192964 0018F8A4  EC 42 18 28 */	fsubs f2, f2, f3
/* 80192968 0018F8A8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8019296C 0018F8AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80192970 0018F8B0  40 81 00 0C */	ble .L_8019297C
/* 80192974 0018F8B4  38 00 00 01 */	li r0, 1
/* 80192978 0018F8B8  48 00 00 08 */	b .L_80192980
.L_8019297C:
/* 8019297C 0018F8BC  38 00 00 00 */	li r0, 0
.L_80192980:
/* 80192980 0018F8C0  98 1F 00 10 */	stb r0, 0x10(r31)
.L_80192984:
/* 80192984 0018F8C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80192988 0018F8C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8019298C 0018F8CC  7C 08 03 A6 */	mtlr r0
/* 80192990 0018F8D0  38 21 00 20 */	addi r1, r1, 0x20
/* 80192994 0018F8D4  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game15PikiEscapeStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn cleanup__Q24Game15PikiEscapeStateFPQ24Game4Piki, global
/* 80192998 0018F8D8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PikiEscapeStateFPQ24Game4Piki

.fn callable__Q24Game15PikiEscapeStateFv, weak
/* 8019299C 0018F8DC  38 60 00 00 */	li r3, 0
/* 801929A0 0018F8E0  4E 80 00 20 */	blr 
.endfn callable__Q24Game15PikiEscapeStateFv

.fn invincible__Q24Game9PikiStateFPQ24Game4Piki, weak
/* 801929A4 0018F8E4  38 60 00 00 */	li r3, 0
/* 801929A8 0018F8E8  4E 80 00 20 */	blr 
.endfn invincible__Q24Game9PikiStateFPQ24Game4Piki

.fn dopable__Q24Game9PikiStateFv, weak
/* 801929AC 0018F8EC  38 60 00 00 */	li r3, 0
/* 801929B0 0018F8F0  4E 80 00 20 */	blr 
.endfn dopable__Q24Game9PikiStateFv

.fn pressable__Q24Game9PikiStateFv, weak
/* 801929B4 0018F8F4  38 60 00 01 */	li r3, 1
/* 801929B8 0018F8F8  4E 80 00 20 */	blr 
.endfn pressable__Q24Game9PikiStateFv

.fn onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi, weak
/* 801929BC 0018F8FC  4E 80 00 20 */	blr 
.endfn onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi

.fn callable__Q24Game9PikiStateFv, weak
/* 801929C0 0018F900  38 60 00 00 */	li r3, 0
/* 801929C4 0018F904  4E 80 00 20 */	blr 
.endfn callable__Q24Game9PikiStateFv

.fn callable__Q24Game16PikiEmotionStateFv, weak
/* 801929C8 0018F908  38 60 00 01 */	li r3, 1
/* 801929CC 0018F90C  4E 80 00 20 */	blr 
.endfn callable__Q24Game16PikiEmotionStateFv

.fn callable__Q24Game13PikiKokeStateFv, weak
/* 801929D0 0018F910  38 60 00 00 */	li r3, 0
/* 801929D4 0018F914  4E 80 00 20 */	blr 
.endfn callable__Q24Game13PikiKokeStateFv

.fn callable__Q24Game19PikiKokeDamageStateFv, weak
/* 801929D8 0018F918  38 60 00 00 */	li r3, 0
/* 801929DC 0018F91C  4E 80 00 20 */	blr 
.endfn callable__Q24Game19PikiKokeDamageStateFv

.fn pressable__Q24Game13PikiBlowStateFv, weak
/* 801929E0 0018F920  38 60 00 00 */	li r3, 0
/* 801929E4 0018F924  4E 80 00 20 */	blr 
.endfn pressable__Q24Game13PikiBlowStateFv

.fn callable__Q24Game13PikiBlowStateFv, weak
/* 801929E8 0018F928  38 60 00 00 */	li r3, 0
/* 801929EC 0018F92C  4E 80 00 20 */	blr 
.endfn callable__Q24Game13PikiBlowStateFv

.fn callable__Q24Game14PikiFlickStateFv, weak
/* 801929F0 0018F930  38 60 00 00 */	li r3, 0
/* 801929F4 0018F934  4E 80 00 20 */	blr 
.endfn callable__Q24Game14PikiFlickStateFv

.fn getName__Q26PikiAI10ActCropArgFv, weak
/* 801929F8 0018F938  3C 60 80 48 */	lis r3, lbl_8047EE18@ha
/* 801929FC 0018F93C  38 63 EE 18 */	addi r3, r3, lbl_8047EE18@l
/* 80192A00 0018F940  4E 80 00 20 */	blr 
.endfn getName__Q26PikiAI10ActCropArgFv

.fn callable__Q24Game15PikiFlyingStateFv, weak
/* 80192A04 0018F944  38 60 00 00 */	li r3, 0
/* 80192A08 0018F948  4E 80 00 20 */	blr 
.endfn callable__Q24Game15PikiFlyingStateFv

.fn pressable__Q24Game16PikiSuikomiStateFv, weak
/* 80192A0C 0018F94C  38 60 00 00 */	li r3, 0
/* 80192A10 0018F950  4E 80 00 20 */	blr 
.endfn pressable__Q24Game16PikiSuikomiStateFv

.fn pressable__Q24Game17PikiFallMeckStateFv, weak
/* 80192A14 0018F954  38 60 00 00 */	li r3, 0
/* 80192A18 0018F958  4E 80 00 20 */	blr 
.endfn pressable__Q24Game17PikiFallMeckStateFv

.fn throwable__Q24Game20PikiWaterHangedStateFv, weak
/* 80192A1C 0018F95C  38 60 00 01 */	li r3, 1
/* 80192A20 0018F960  4E 80 00 20 */	blr 
.endfn throwable__Q24Game20PikiWaterHangedStateFv

.fn throwable__Q24Game15PikiHangedStateFv, weak
/* 80192A24 0018F964  38 60 00 01 */	li r3, 1
/* 80192A28 0018F968  4E 80 00 20 */	blr 
.endfn throwable__Q24Game15PikiHangedStateFv

.fn callable__Q24Game15PikiGoHangStateFv, weak
/* 80192A2C 0018F96C  38 60 00 01 */	li r3, 1
/* 80192A30 0018F970  4E 80 00 20 */	blr 
.endfn callable__Q24Game15PikiGoHangStateFv

.fn throwable__Q24Game15PikiGoHangStateFv, weak
/* 80192A34 0018F974  38 60 00 01 */	li r3, 1
/* 80192A38 0018F978  4E 80 00 20 */	blr 
.endfn throwable__Q24Game15PikiGoHangStateFv

.fn callable__Q24Game17PikiAutoNukiStateFv, weak
/* 80192A3C 0018F97C  38 60 00 00 */	li r3, 0
/* 80192A40 0018F980  4E 80 00 20 */	blr 
.endfn callable__Q24Game17PikiAutoNukiStateFv

.fn callable__Q24Game15PikiLookAtStateFv, weak
/* 80192A44 0018F984  38 60 00 00 */	li r3, 0
/* 80192A48 0018F988  4E 80 00 20 */	blr 
.endfn callable__Q24Game15PikiLookAtStateFv

.fn pressable__Q24Game16PikiPressedStateFv, weak
/* 80192A4C 0018F98C  38 60 00 00 */	li r3, 0
/* 80192A50 0018F990  4E 80 00 20 */	blr 
.endfn pressable__Q24Game16PikiPressedStateFv

.fn dead__Q24Game16PikiPressedStateFv, weak
/* 80192A54 0018F994  38 60 00 01 */	li r3, 1
/* 80192A58 0018F998  4E 80 00 20 */	blr 
.endfn dead__Q24Game16PikiPressedStateFv

.fn pressable__Q24Game19PikiDenkiDyingStateFv, weak
/* 80192A5C 0018F99C  38 60 00 00 */	li r3, 0
/* 80192A60 0018F9A0  4E 80 00 20 */	blr 
.endfn pressable__Q24Game19PikiDenkiDyingStateFv

.fn dead__Q24Game19PikiDenkiDyingStateFv, weak
/* 80192A64 0018F9A4  38 60 00 01 */	li r3, 1
/* 80192A68 0018F9A8  4E 80 00 20 */	blr 
.endfn dead__Q24Game19PikiDenkiDyingStateFv

.fn pressable__Q24Game14PikiDyingStateFv, weak
/* 80192A6C 0018F9AC  38 60 00 00 */	li r3, 0
/* 80192A70 0018F9B0  4E 80 00 20 */	blr 
.endfn pressable__Q24Game14PikiDyingStateFv

.fn dead__Q24Game14PikiDyingStateFv, weak
/* 80192A74 0018F9B4  38 60 00 01 */	li r3, 1
/* 80192A78 0018F9B8  4E 80 00 20 */	blr 
.endfn dead__Q24Game14PikiDyingStateFv

.fn pressable__Q24Game13PikiDeadStateFv, weak
/* 80192A7C 0018F9BC  38 60 00 00 */	li r3, 0
/* 80192A80 0018F9C0  4E 80 00 20 */	blr 
.endfn pressable__Q24Game13PikiDeadStateFv

.fn transittable__Q24Game13PikiDeadStateFi, weak
/* 80192A84 0018F9C4  38 60 00 00 */	li r3, 0
/* 80192A88 0018F9C8  4E 80 00 20 */	blr 
.endfn transittable__Q24Game13PikiDeadStateFi

.fn dead__Q24Game13PikiDeadStateFv, weak
/* 80192A8C 0018F9CC  38 60 00 01 */	li r3, 1
/* 80192A90 0018F9D0  4E 80 00 20 */	blr 
.endfn dead__Q24Game13PikiDeadStateFv

.fn callable__Q24Game13PikiTaneStateFv, weak
/* 80192A94 0018F9D4  38 60 00 00 */	li r3, 0
/* 80192A98 0018F9D8  4E 80 00 20 */	blr 
.endfn callable__Q24Game13PikiTaneStateFv

.fn callable__Q24Game19PikiFountainonStateFv, weak
/* 80192A9C 0018F9DC  38 60 00 00 */	li r3, 0
/* 80192AA0 0018F9E0  4E 80 00 20 */	blr 
.endfn callable__Q24Game19PikiFountainonStateFv

.fn soft_transittable__Q24Game19PikiFountainonStateFi, weak
/* 80192AA4 0018F9E4  38 60 00 00 */	li r3, 0
/* 80192AA8 0018F9E8  4E 80 00 20 */	blr 
.endfn soft_transittable__Q24Game19PikiFountainonStateFi

.fn invincible__Q24Game19PikiFountainonStateFPQ24Game4Piki, weak
/* 80192AAC 0018F9EC  38 60 00 01 */	li r3, 1
/* 80192AB0 0018F9F0  4E 80 00 20 */	blr 
.endfn invincible__Q24Game19PikiFountainonStateFPQ24Game4Piki

.fn callable__Q24Game15PikiHoleinStateFv, weak
/* 80192AB4 0018F9F4  38 60 00 00 */	li r3, 0
/* 80192AB8 0018F9F8  4E 80 00 20 */	blr 
.endfn callable__Q24Game15PikiHoleinStateFv

.fn soft_transittable__Q24Game15PikiHoleinStateFi, weak
/* 80192ABC 0018F9FC  38 60 00 00 */	li r3, 0
/* 80192AC0 0018FA00  4E 80 00 20 */	blr 
.endfn soft_transittable__Q24Game15PikiHoleinStateFi

.fn invincible__Q24Game15PikiHoleinStateFPQ24Game4Piki, weak
/* 80192AC4 0018FA04  38 60 00 01 */	li r3, 1
/* 80192AC8 0018FA08  4E 80 00 20 */	blr 
.endfn invincible__Q24Game15PikiHoleinStateFPQ24Game4Piki

.fn dead__Q24Game18PikiSwallowedStateFv, weak
/* 80192ACC 0018FA0C  38 60 00 01 */	li r3, 1
/* 80192AD0 0018FA10  4E 80 00 20 */	blr 
.endfn dead__Q24Game18PikiSwallowedStateFv

.fn ignoreAtari__Q24Game18PikiSwallowedStateFPQ24Game4PikiPQ24Game8Creature, weak
/* 80192AD4 0018FA14  38 60 00 01 */	li r3, 1
/* 80192AD8 0018FA18  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q24Game18PikiSwallowedStateFPQ24Game4PikiPQ24Game8Creature

.fn callable__Q24Game18PikiSwallowedStateFv, weak
/* 80192ADC 0018FA1C  38 60 00 00 */	li r3, 0
/* 80192AE0 0018FA20  4E 80 00 20 */	blr 
.endfn callable__Q24Game18PikiSwallowedStateFv

.fn invincible__Q24Game17PikiDemoWaitStateFPQ24Game4Piki, weak
/* 80192AE4 0018FA24  38 60 00 01 */	li r3, 1
/* 80192AE8 0018FA28  4E 80 00 20 */	blr 
.endfn invincible__Q24Game17PikiDemoWaitStateFPQ24Game4Piki

.fn dopable__Q24Game13PikiWalkStateFv, weak
/* 80192AEC 0018FA2C  38 60 00 01 */	li r3, 1
/* 80192AF0 0018FA30  4E 80 00 20 */	blr 
.endfn dopable__Q24Game13PikiWalkStateFv

.fn aiActive__Q24Game13PikiWalkStateFv, weak
/* 80192AF4 0018FA34  38 60 00 01 */	li r3, 1
/* 80192AF8 0018FA38  4E 80 00 20 */	blr 
.endfn aiActive__Q24Game13PikiWalkStateFv

.fn callable__Q24Game13PikiWalkStateFv, weak
/* 80192AFC 0018FA3C  38 60 00 01 */	li r3, 1
/* 80192B00 0018FA40  4E 80 00 20 */	blr 
.endfn callable__Q24Game13PikiWalkStateFv

.fn releasable__Q24Game13PikiWalkStateFv, weak
/* 80192B04 0018FA44  38 60 00 01 */	li r3, 1
/* 80192B08 0018FA48  4E 80 00 20 */	blr 
.endfn releasable__Q24Game13PikiWalkStateFv

.fn battleOK__Q24Game13PikiWalkStateFv, weak
/* 80192B0C 0018FA4C  38 60 00 01 */	li r3, 1
/* 80192B10 0018FA50  4E 80 00 20 */	blr 
.endfn battleOK__Q24Game13PikiWalkStateFv

.fn throwable__Q24Game13PikiWalkStateFv, weak
/* 80192B14 0018FA54  38 60 00 01 */	li r3, 1
/* 80192B18 0018FA58  4E 80 00 20 */	blr 
.endfn throwable__Q24Game13PikiWalkStateFv

.fn "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki", weak
/* 80192B1C 0018FA5C  4E 80 00 20 */	blr 
.endfn "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"

.fn "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki", weak
/* 80192B20 0018FA60  4E 80 00 20 */	blr 
.endfn "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"

.fn "create__Q24Game26StateMachine<Q24Game4Piki>Fi", weak
/* 80192B24 0018FA64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80192B28 0018FA68  7C 08 02 A6 */	mflr r0
/* 80192B2C 0018FA6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80192B30 0018FA70  38 00 00 00 */	li r0, 0
/* 80192B34 0018FA74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80192B38 0018FA78  7C 7F 1B 78 */	mr r31, r3
/* 80192B3C 0018FA7C  90 83 00 0C */	stw r4, 0xc(r3)
/* 80192B40 0018FA80  90 03 00 08 */	stw r0, 8(r3)
/* 80192B44 0018FA84  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80192B48 0018FA88  54 03 10 3A */	slwi r3, r0, 2
/* 80192B4C 0018FA8C  4B E9 14 61 */	bl __nwa__FUl
/* 80192B50 0018FA90  90 7F 00 04 */	stw r3, 4(r31)
/* 80192B54 0018FA94  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80192B58 0018FA98  54 03 10 3A */	slwi r3, r0, 2
/* 80192B5C 0018FA9C  4B E9 14 51 */	bl __nwa__FUl
/* 80192B60 0018FAA0  90 7F 00 10 */	stw r3, 0x10(r31)
/* 80192B64 0018FAA4  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80192B68 0018FAA8  54 03 10 3A */	slwi r3, r0, 2
/* 80192B6C 0018FAAC  4B E9 14 41 */	bl __nwa__FUl
/* 80192B70 0018FAB0  90 7F 00 14 */	stw r3, 0x14(r31)
/* 80192B74 0018FAB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80192B78 0018FAB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80192B7C 0018FABC  7C 08 03 A6 */	mtlr r0
/* 80192B80 0018FAC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80192B84 0018FAC4  4E 80 00 20 */	blr 
.endfn "create__Q24Game26StateMachine<Q24Game4Piki>Fi"

.fn "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>", weak
/* 80192B88 0018FAC8  80 C3 00 08 */	lwz r6, 8(r3)
/* 80192B8C 0018FACC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80192B90 0018FAD0  7C 06 00 00 */	cmpw r6, r0
/* 80192B94 0018FAD4  4C 80 00 20 */	bgelr 
/* 80192B98 0018FAD8  80 A3 00 04 */	lwz r5, 4(r3)
/* 80192B9C 0018FADC  54 C0 10 3A */	slwi r0, r6, 2
/* 80192BA0 0018FAE0  7C 85 01 2E */	stwx r4, r5, r0
/* 80192BA4 0018FAE4  80 A4 00 04 */	lwz r5, 4(r4)
/* 80192BA8 0018FAE8  2C 05 00 00 */	cmpwi r5, 0
/* 80192BAC 0018FAEC  41 80 00 10 */	blt .L_80192BBC
/* 80192BB0 0018FAF0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80192BB4 0018FAF4  7C 05 00 00 */	cmpw r5, r0
/* 80192BB8 0018FAF8  41 80 00 0C */	blt .L_80192BC4
.L_80192BBC:
/* 80192BBC 0018FAFC  38 00 00 00 */	li r0, 0
/* 80192BC0 0018FB00  48 00 00 08 */	b .L_80192BC8
.L_80192BC4:
/* 80192BC4 0018FB04  38 00 00 01 */	li r0, 1
.L_80192BC8:
/* 80192BC8 0018FB08  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80192BCC 0018FB0C  4D 82 00 20 */	beqlr 
/* 80192BD0 0018FB10  90 64 00 08 */	stw r3, 8(r4)
/* 80192BD4 0018FB14  80 03 00 08 */	lwz r0, 8(r3)
/* 80192BD8 0018FB18  80 C4 00 04 */	lwz r6, 4(r4)
/* 80192BDC 0018FB1C  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 80192BE0 0018FB20  54 00 10 3A */	slwi r0, r0, 2
/* 80192BE4 0018FB24  7C C5 01 2E */	stwx r6, r5, r0
/* 80192BE8 0018FB28  80 04 00 04 */	lwz r0, 4(r4)
/* 80192BEC 0018FB2C  80 A3 00 08 */	lwz r5, 8(r3)
/* 80192BF0 0018FB30  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80192BF4 0018FB34  54 00 10 3A */	slwi r0, r0, 2
/* 80192BF8 0018FB38  7C A4 01 2E */	stwx r5, r4, r0
/* 80192BFC 0018FB3C  80 83 00 08 */	lwz r4, 8(r3)
/* 80192C00 0018FB40  38 04 00 01 */	addi r0, r4, 1
/* 80192C04 0018FB44  90 03 00 08 */	stw r0, 8(r3)
/* 80192C08 0018FB48  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game22FSMState<Q24Game4Piki>"

.fn __sinit_pikiState_cpp, local
/* 80192C0C 0018FB4C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80192C10 0018FB50  38 00 FF FF */	li r0, -1
/* 80192C14 0018FB54  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80192C18 0018FB58  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80192C1C 0018FB5C  90 0D 93 40 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80192C20 0018FB60  D4 03 37 D0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80192C24 0018FB64  D0 0D 93 44 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80192C28 0018FB68  D0 03 00 04 */	stfs f0, 4(r3)
/* 80192C2C 0018FB6C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80192C30 0018FB70  4E 80 00 20 */	blr 
.endfn __sinit_pikiState_cpp

.fn "@28@4@onKeyEvent__Q24Game15PikiLookAtStateFRCQ28SysShape8KeyEvent", weak
/* 80192C34 0018FB74  39 60 00 04 */	li r11, 4
/* 80192C38 0018FB78  7D 63 58 2E */	lwzx r11, r3, r11
/* 80192C3C 0018FB7C  7C 63 5A 14 */	add r3, r3, r11
/* 80192C40 0018FB80  38 63 FF E4 */	addi r3, r3, -28
/* 80192C44 0018FB84  4B FF A3 3C */	b onKeyEvent__Q24Game15PikiLookAtStateFRCQ28SysShape8KeyEvent
.endfn "@28@4@onKeyEvent__Q24Game15PikiLookAtStateFRCQ28SysShape8KeyEvent"

.fn "@20@4@onKeyEvent__Q24Game15PikiHangedStateFRCQ28SysShape8KeyEvent", weak
/* 80192C48 0018FB88  39 60 00 04 */	li r11, 4
/* 80192C4C 0018FB8C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80192C50 0018FB90  7C 63 5A 14 */	add r3, r3, r11
/* 80192C54 0018FB94  38 63 FF EC */	addi r3, r3, -20
/* 80192C58 0018FB98  4B FF AA DC */	b onKeyEvent__Q24Game15PikiHangedStateFRCQ28SysShape8KeyEvent
.endfn "@20@4@onKeyEvent__Q24Game15PikiHangedStateFRCQ28SysShape8KeyEvent"

.fn "@24@4@onKeyEvent__Q24Game20PikiWaterHangedStateFRCQ28SysShape8KeyEvent", weak
/* 80192C5C 0018FB9C  39 60 00 04 */	li r11, 4
/* 80192C60 0018FBA0  7D 63 58 2E */	lwzx r11, r3, r11
/* 80192C64 0018FBA4  7C 63 5A 14 */	add r3, r3, r11
/* 80192C68 0018FBA8  38 63 FF E8 */	addi r3, r3, -24
/* 80192C6C 0018FBAC  4B FF AC 9C */	b onKeyEvent__Q24Game20PikiWaterHangedStateFRCQ28SysShape8KeyEvent
.endfn "@24@4@onKeyEvent__Q24Game20PikiWaterHangedStateFRCQ28SysShape8KeyEvent"

.fn "@48@4@onKeyEvent__Q24Game14PikiFlickStateFRCQ28SysShape8KeyEvent", weak
/* 80192C70 0018FBB0  39 60 00 04 */	li r11, 4
/* 80192C74 0018FBB4  7D 63 58 2E */	lwzx r11, r3, r11
/* 80192C78 0018FBB8  7C 63 5A 14 */	add r3, r3, r11
/* 80192C7C 0018FBBC  38 63 FF D0 */	addi r3, r3, -48
/* 80192C80 0018FBC0  4B FF D2 2C */	b onKeyEvent__Q24Game14PikiFlickStateFRCQ28SysShape8KeyEvent
.endfn "@48@4@onKeyEvent__Q24Game14PikiFlickStateFRCQ28SysShape8KeyEvent"
