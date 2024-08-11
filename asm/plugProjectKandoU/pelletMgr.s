.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_pelletMgr_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047E318, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047E318
.balign 4
.obj lbl_8047E324, local
	.asciz "pelletMgr"
.endobj lbl_8047E324
.balign 4
.obj lbl_8047E330, local
	.asciz "no config pellet"
.endobj lbl_8047E330
.balign 4
.obj lbl_8047E344, local
	.asciz "pelletMgr.cpp"
.endobj lbl_8047E344
.balign 4
.obj lbl_8047E354, local
	.asciz "P2Assert"
.endobj lbl_8047E354
.balign 4
.obj lbl_8047E360, local # bury radius array of five words
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047E360
.balign 4
.obj lbl_8047E374, local
	.asciz "number10"
.endobj lbl_8047E374
.balign 4
.obj lbl_8047E380, local
	.asciz "number20"
.endobj lbl_8047E380
.balign 4
.obj lbl_8047E38C, local # Shift-JIS
	.4byte 0x82AA82C1
	.4byte 0x82A982E8
	.2byte 0x0A00
.endobj lbl_8047E38C
.balign 4
.obj lbl_8047E398, local
	.asciz "PSGame.h"
.endobj lbl_8047E398
.balign 4
.obj lbl_8047E3A4, local
	.asciz "PSScene.h"
.endobj lbl_8047E3A4
.balign 4
.obj lbl_8047E3B0, local
	.asciz "get sound scene at\ninvalid timming\n"
.endobj lbl_8047E3B0
.balign 4
.obj lbl_8047E3D4, local
	.asciz "PSMainSide_Scene.h"
.endobj lbl_8047E3D4
.balign 4
.obj lbl_8047E3E8, local
	.asciz "onSlotStickEnd\n"
.endobj lbl_8047E3E8
.balign 4
.obj lbl_8047E3F8, local
	.asciz "/user/Abe/Pellet/%s/"
.endobj lbl_8047E3F8
.balign 4
.obj lbl_8047E410, local
	.asciz "user/Kando/pellet/"
.endobj lbl_8047E410
.balign 4
.obj lbl_8047E424, local
	.asciz "meck ** %s : is not foun !\n"
.endobj lbl_8047E424
.balign 4
.obj lbl_8047E440, local
	.asciz "%s: not found !\n"
.endobj lbl_8047E440
.balign 4
.obj lbl_8047E454, local
	.asciz "archive not found\n"
.endobj lbl_8047E454
.balign 4
.obj lbl_8047E468, local
	.asciz "%s : is not foun !\n"
.endobj lbl_8047E468
.balign 4
.obj lbl_8047E47C, local
	.asciz "bpmgr:no modelData!%d\n"
.endobj lbl_8047E47C
.balign 4
.obj lbl_8047E494, local # Shift-JIS
	.4byte 0x8379838C
	.4byte 0x83628367
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000
.endobj lbl_8047E494
.balign 4
.obj lbl_8047E4A8, local
	.asciz "illegal code (%x)\n"
.endobj lbl_8047E4A8
.balign 4
.obj lbl_8047E4BC, local
	.asciz "illegal code no config found (%x) index %d\n"
.endobj lbl_8047E4BC
.balign 4
.obj lbl_8047E4E8, local
	.asciz "no config found(%s)\n"
.endobj lbl_8047E4E8
.balign 4
.obj lbl_8047E500, local # Shift-JIS
	.4byte 0x232082A8
	.4byte 0x95F38341
	.4byte 0x83438365
	.4byte 0x83808352
	.4byte 0x815B8368
	.4byte 0x0D0A0000
.endobj lbl_8047E500
.balign 4
.obj lbl_8047E518, local
	.asciz "ArgScale"
.endobj lbl_8047E518
.balign 4
.obj lbl_8047E524, local
	.asciz "PelletInitArg"
.endobj lbl_8047E524
.balign 4
.obj lbl_8047E534, local
	.asciz "PelletGoalStateArg"
.endobj lbl_8047E534

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804B1A6C, local
	.4byte .L_80166C44
	.4byte .L_80166BF4
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C04
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C14
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C44
	.4byte .L_80166C2C
.endobj lbl_804B1A6C
.obj lbl_804B1AC0, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte createModelCallback__Q24Game13BasePelletMgrFPQ28SysShape5Model
.endobj lbl_804B1AC0
.obj __vt__Q24Game9PelletMgr, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game9PelletMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__29Container<16GenericObjectMgr>FPv"
	.4byte "getNext__33NodeObjectMgr<16GenericObjectMgr>FPv"
	.4byte "getStart__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte "getEnd__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte "get__33NodeObjectMgr<16GenericObjectMgr>FPv"
	.4byte "getAt__29Container<16GenericObjectMgr>Fi"
	.4byte "getTo__29Container<16GenericObjectMgr>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__Q24Game9PelletMgrFv"
	.4byte "@28@doEntry__Q24Game9PelletMgrFv"
	.4byte "@28@doSetView__Q24Game9PelletMgrFi"
	.4byte "@28@doViewCalc__Q24Game9PelletMgrFv"
	.4byte "@28@doSimulation__Q24Game9PelletMgrFf"
	.4byte "@28@doDirectDraw__Q24Game9PelletMgrFR8Graphics"
	.4byte "@28@doSimpleDraw__Q24Game9PelletMgrFP8Viewport"
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte doAnimation__Q24Game9PelletMgrFv
	.4byte doEntry__Q24Game9PelletMgrFv
	.4byte doSetView__Q24Game9PelletMgrFi
	.4byte doViewCalc__Q24Game9PelletMgrFv
	.4byte doSimulation__Q24Game9PelletMgrFf
	.4byte doDirectDraw__Q24Game9PelletMgrFR8Graphics
	.4byte "resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte getMgrName__Q24Game9PelletMgrFv
	.4byte getCaveName__Q24Game9PelletMgrFi
	.4byte getCaveID__Q24Game9PelletMgrFPc
	.4byte doSimpleDraw__Q24Game9PelletMgrFP8Viewport
.endobj __vt__Q24Game9PelletMgr
.obj "__vt__28Iterator<16GenericObjectMgr>", weak
	.4byte 0
	.4byte 0
	.4byte "first__28Iterator<16GenericObjectMgr>Fv"
	.4byte "next__28Iterator<16GenericObjectMgr>Fv"
	.4byte "isDone__28Iterator<16GenericObjectMgr>Fv"
	.4byte "__ml__28Iterator<16GenericObjectMgr>Fv"
.endobj "__vt__28Iterator<16GenericObjectMgr>"
.obj "__vt__36Iterator<Q34Game10PelletItem6Object>", weak
	.4byte 0
	.4byte 0
	.4byte "first__36Iterator<Q34Game10PelletItem6Object>Fv"
	.4byte "next__36Iterator<Q34Game10PelletItem6Object>Fv"
	.4byte "isDone__36Iterator<Q34Game10PelletItem6Object>Fv"
	.4byte "__ml__36Iterator<Q34Game10PelletItem6Object>Fv"
.endobj "__vt__36Iterator<Q34Game10PelletItem6Object>"
.obj "__vt__39Iterator<Q34Game13PelletOtakara6Object>", weak
	.4byte 0
	.4byte 0
	.4byte "first__39Iterator<Q34Game13PelletOtakara6Object>Fv"
	.4byte "next__39Iterator<Q34Game13PelletOtakara6Object>Fv"
	.4byte "isDone__39Iterator<Q34Game13PelletOtakara6Object>Fv"
	.4byte "__ml__39Iterator<Q34Game13PelletOtakara6Object>Fv"
.endobj "__vt__39Iterator<Q34Game13PelletOtakara6Object>"
.obj "__vt__31TObjectNode<16GenericObjectMgr>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__31TObjectNode<16GenericObjectMgr>Fv"
	.4byte getChildCount__5CNodeFv
.endobj "__vt__31TObjectNode<16GenericObjectMgr>"
.obj "__vt__33NodeObjectMgr<16GenericObjectMgr>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__29Container<16GenericObjectMgr>FPv"
	.4byte "getNext__33NodeObjectMgr<16GenericObjectMgr>FPv"
	.4byte "getStart__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte "getEnd__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte "get__33NodeObjectMgr<16GenericObjectMgr>FPv"
	.4byte "getAt__29Container<16GenericObjectMgr>Fi"
	.4byte "getTo__29Container<16GenericObjectMgr>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "@28@doEntry__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "@28@doSetView__29ObjectMgr<16GenericObjectMgr>Fi"
	.4byte "@28@doViewCalc__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "@28@doSimulation__29ObjectMgr<16GenericObjectMgr>Ff"
	.4byte "@28@doDirectDraw__29ObjectMgr<16GenericObjectMgr>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "doEntry__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "doSetView__29ObjectMgr<16GenericObjectMgr>Fi"
	.4byte "doViewCalc__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "doSimulation__29ObjectMgr<16GenericObjectMgr>Ff"
	.4byte "doDirectDraw__29ObjectMgr<16GenericObjectMgr>FR8Graphics"
	.4byte "resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
.endobj "__vt__33NodeObjectMgr<16GenericObjectMgr>"
.obj "__vt__29ObjectMgr<16GenericObjectMgr>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__29Container<16GenericObjectMgr>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__29Container<16GenericObjectMgr>Fi"
	.4byte "getTo__29Container<16GenericObjectMgr>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "@28@doEntry__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "@28@doSetView__29ObjectMgr<16GenericObjectMgr>Fi"
	.4byte "@28@doViewCalc__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "@28@doSimulation__29ObjectMgr<16GenericObjectMgr>Ff"
	.4byte "@28@doDirectDraw__29ObjectMgr<16GenericObjectMgr>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "doEntry__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "doSetView__29ObjectMgr<16GenericObjectMgr>Fi"
	.4byte "doViewCalc__29ObjectMgr<16GenericObjectMgr>Fv"
	.4byte "doSimulation__29ObjectMgr<16GenericObjectMgr>Ff"
	.4byte "doDirectDraw__29ObjectMgr<16GenericObjectMgr>FR8Graphics"
.endobj "__vt__29ObjectMgr<16GenericObjectMgr>"
.obj "__vt__29Container<16GenericObjectMgr>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__29Container<16GenericObjectMgr>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__29Container<16GenericObjectMgr>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__29Container<16GenericObjectMgr>Fi"
	.4byte "getTo__29Container<16GenericObjectMgr>Fv"
.endobj "__vt__29Container<16GenericObjectMgr>"
.obj __vt__Q24Game13BasePelletMgr, global
	.4byte 0
	.4byte 0
	.4byte doAnimation__Q24Game13BasePelletMgrFv
	.4byte doEntry__Q24Game13BasePelletMgrFv
	.4byte doSetView__Q24Game13BasePelletMgrFi
	.4byte doViewCalc__Q24Game13BasePelletMgrFv
	.4byte doSimulation__Q24Game13BasePelletMgrFf
	.4byte doDirectDraw__Q24Game13BasePelletMgrFR8Graphics
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte 0
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte onCreateModel__Q24Game13BasePelletMgrFPQ28SysShape5Model
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte createShape__Q24Game13BasePelletMgrFii
	.4byte "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
	.4byte generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm
	.4byte generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
	.4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
	.4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
	.4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.endobj __vt__Q24Game13BasePelletMgr
.obj "__vt__52Delegate1<Q24Game13BasePelletMgr,PQ28SysShape5Model>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__52Delegate1<Q24Game13BasePelletMgr,PQ28SysShape5Model>FPQ28SysShape5Model"
.endobj "__vt__52Delegate1<Q24Game13BasePelletMgr,PQ28SysShape5Model>"
.obj "__vt__20Container<8CollPart>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__20Container<8CollPart>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__20Container<8CollPart>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__20Container<8CollPart>Fi"
	.4byte "getTo__20Container<8CollPart>Fv"
.endobj "__vt__20Container<8CollPart>"
.obj "__vt__20ObjectMgr<8CollPart>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__20ObjectMgr<8CollPart>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__20Container<8CollPart>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__20Container<8CollPart>Fi"
	.4byte "getTo__20Container<8CollPart>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__20ObjectMgr<8CollPart>Fv"
	.4byte "@28@doEntry__20ObjectMgr<8CollPart>Fv"
	.4byte "@28@doSetView__20ObjectMgr<8CollPart>Fi"
	.4byte "@28@doViewCalc__20ObjectMgr<8CollPart>Fv"
	.4byte "@28@doSimulation__20ObjectMgr<8CollPart>Ff"
	.4byte "@28@doDirectDraw__20ObjectMgr<8CollPart>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__20ObjectMgr<8CollPart>Fv"
	.4byte "doEntry__20ObjectMgr<8CollPart>Fv"
	.4byte "doSetView__20ObjectMgr<8CollPart>Fi"
	.4byte "doViewCalc__20ObjectMgr<8CollPart>Fv"
	.4byte "doSimulation__20ObjectMgr<8CollPart>Ff"
	.4byte "doDirectDraw__20ObjectMgr<8CollPart>FR8Graphics"
.endobj "__vt__20ObjectMgr<8CollPart>"
.obj "__vt__24MonoObjectMgr<8CollPart>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__24MonoObjectMgr<8CollPart>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__20Container<8CollPart>FPv"
	.4byte "getNext__24MonoObjectMgr<8CollPart>FPv"
	.4byte "getStart__24MonoObjectMgr<8CollPart>Fv"
	.4byte "getEnd__24MonoObjectMgr<8CollPart>Fv"
	.4byte "get__24MonoObjectMgr<8CollPart>FPv"
	.4byte "getAt__24MonoObjectMgr<8CollPart>Fi"
	.4byte "getTo__24MonoObjectMgr<8CollPart>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__24MonoObjectMgr<8CollPart>Fv"
	.4byte "@28@doEntry__24MonoObjectMgr<8CollPart>Fv"
	.4byte "@28@doSetView__24MonoObjectMgr<8CollPart>Fi"
	.4byte "@28@doViewCalc__24MonoObjectMgr<8CollPart>Fv"
	.4byte "@28@doSimulation__24MonoObjectMgr<8CollPart>Ff"
	.4byte "@28@doDirectDraw__24MonoObjectMgr<8CollPart>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__24MonoObjectMgr<8CollPart>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__24MonoObjectMgr<8CollPart>Fv"
	.4byte "doEntry__24MonoObjectMgr<8CollPart>Fv"
	.4byte "doSetView__24MonoObjectMgr<8CollPart>Fi"
	.4byte "doViewCalc__24MonoObjectMgr<8CollPart>Fv"
	.4byte "doSimulation__24MonoObjectMgr<8CollPart>Ff"
	.4byte "doDirectDraw__24MonoObjectMgr<8CollPart>FR8Graphics"
	.4byte "birth__24MonoObjectMgr<8CollPart>Fv"
	.4byte "resetMgr__24MonoObjectMgr<8CollPart>Fv"
	.4byte "clearMgr__24MonoObjectMgr<8CollPart>Fv"
	.4byte "onAlloc__24MonoObjectMgr<8CollPart>Fv"
.endobj "__vt__24MonoObjectMgr<8CollPart>"
.obj __vt__11CollPartMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__11CollPartMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__20Container<8CollPart>FPv"
	.4byte "getNext__24MonoObjectMgr<8CollPart>FPv"
	.4byte "getStart__24MonoObjectMgr<8CollPart>Fv"
	.4byte "getEnd__24MonoObjectMgr<8CollPart>Fv"
	.4byte "get__24MonoObjectMgr<8CollPart>FPv"
	.4byte "getAt__24MonoObjectMgr<8CollPart>Fi"
	.4byte "getTo__24MonoObjectMgr<8CollPart>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__24MonoObjectMgr<8CollPart>Fv"
	.4byte "@28@doEntry__24MonoObjectMgr<8CollPart>Fv"
	.4byte "@28@doSetView__24MonoObjectMgr<8CollPart>Fi"
	.4byte "@28@doViewCalc__24MonoObjectMgr<8CollPart>Fv"
	.4byte "@28@doSimulation__24MonoObjectMgr<8CollPart>Ff"
	.4byte "@28@doDirectDraw__24MonoObjectMgr<8CollPart>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__24MonoObjectMgr<8CollPart>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__24MonoObjectMgr<8CollPart>Fv"
	.4byte "doEntry__24MonoObjectMgr<8CollPart>Fv"
	.4byte "doSetView__24MonoObjectMgr<8CollPart>Fi"
	.4byte "doViewCalc__24MonoObjectMgr<8CollPart>Fv"
	.4byte "doSimulation__24MonoObjectMgr<8CollPart>Ff"
	.4byte "doDirectDraw__24MonoObjectMgr<8CollPart>FR8Graphics"
	.4byte "birth__24MonoObjectMgr<8CollPart>Fv"
	.4byte "resetMgr__24MonoObjectMgr<8CollPart>Fv"
	.4byte "clearMgr__24MonoObjectMgr<8CollPart>Fv"
	.4byte "onAlloc__24MonoObjectMgr<8CollPart>Fv"
.endobj __vt__11CollPartMgr
.obj __vt__13WPExcludeSpot, weak
	.4byte 0
	.4byte 0
	.4byte satisfy__13WPExcludeSpotFPQ24Game8WayPoint
.endobj __vt__13WPExcludeSpot
.obj "__vt__Q223@unnamed@pelletMgr_cpp@6NotOff", weak
	.4byte 0
	.4byte 0
	.4byte "satisfy__Q223@unnamed@pelletMgr_cpp@6NotOffFPQ24Game8WayPoint"
.endobj "__vt__Q223@unnamed@pelletMgr_cpp@6NotOff"
.obj __vt__Q24Game11WPCondition, weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj __vt__Q24Game11WPCondition
.obj "__vt__27Condition<Q24Game8WayPoint>", weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj "__vt__27Condition<Q24Game8WayPoint>"
.obj __vt__Q24Game6Pellet, global
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game6PelletFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game6PelletFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game6PelletFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte constructor__Q24Game6PelletFv
	.4byte onInit__Q24Game6PelletFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game6PelletFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game6PelletFv
	.4byte doEntry__Q24Game6PelletFv
	.4byte doSetView__Q24Game6PelletFi
	.4byte doViewCalc__Q24Game6PelletFv
	.4byte doSimulation__Q24Game6PelletFf
	.4byte doDirectDraw__Q24Game6PelletFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game6PelletFv
	.4byte "setVelocity__Q24Game6PelletFR10Vector3<f>"
	.4byte getVelocity__Q24Game6PelletFv
	.4byte "onSetPosition__Q24Game6PelletFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q24Game6PelletFv
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game8CreatureFv
	.4byte inWater__Q24Game6PelletFv
	.4byte getFlockMgr__Q24Game8CreatureFv
	.4byte onStartCapture__Q24Game6PelletFv
	.4byte onUpdateCapture__Q24Game6PelletFR7Matrixf
	.4byte onEndCapture__Q24Game6PelletFv
	.4byte isAtari__Q24Game8CreatureFv
	.4byte setAtari__Q24Game8CreatureFb
	.4byte isAlive__Q24Game8CreatureFv
	.4byte setAlive__Q24Game8CreatureFb
	.4byte isCollisionFlick__Q24Game8CreatureFv
	.4byte setCollisionFlick__Q24Game8CreatureFb
	.4byte isMovieActor__Q24Game8CreatureFv
	.4byte isMovieExtra__Q24Game8CreatureFv
	.4byte isMovieMotion__Q24Game8CreatureFv
	.4byte setMovieMotion__Q24Game8CreatureFb
	.4byte isBuried__Q24Game8CreatureFv
	.4byte isFlying__Q24Game8CreatureFv
	.4byte isUnderground__Q24Game8CreatureFv
	.4byte isLivingThing__Q24Game8CreatureFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game6PelletFR6Stream
	.4byte doLoad__Q24Game6PelletFR6Stream
	.4byte bounceCallback__Q24Game6PelletFPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game8CreatureFRQ24Game9CollEvent
	.4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
	.4byte getJAIObject__Q24Game6PelletFv
	.4byte getPSCreature__Q24Game6PelletFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game6PelletFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q24Game8CreatureFb
	.4byte movieStartAnimation__Q24Game8CreatureFUl
	.4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
	.4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8CreatureFf
	.4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game6PelletFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game6PelletFv
	.4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game6PelletFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game6PelletFv
	.4byte endPick__Q24Game6PelletFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte isSlotFree__Q24Game6PelletFs
	.4byte getFreeStickSlot__Q24Game6PelletFv
	.4byte "getNearFreeStickSlot__Q24Game6PelletFR10Vector3<f>"
	.4byte getRandomFreeStickSlot__Q24Game6PelletFv
	.4byte onSlotStickStart__Q24Game6PelletFPQ24Game8Creatures
	.4byte onSlotStickEnd__Q24Game6PelletFPQ24Game8Creatures
	.4byte "calcStickSlotGlobal__Q24Game6PelletFsR10Vector3<f>"
	.4byte "getVelocityAt__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game6PelletFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game6PelletFv
	.4byte getCreatureID__Q24Game6PelletFv
	.4byte onSetPosition__Q24Game6PelletFv
	.4byte 0
	.4byte 0
	.4byte "@788@onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent"
	.4byte 0
	.4byte 0
	.4byte "@792@getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam"
	.4byte do_onInit__Q24Game6PelletFPQ24Game15CreatureInitArg
	.4byte onCreateShape__Q24Game6PelletFv
	.4byte theEntry__Q24Game6PelletFv
	.4byte onBounce__Q24Game6PelletFv
	.4byte shadowOn__Q24Game6PelletFv
	.4byte shadowOff__Q24Game6PelletFv
	.4byte isPickable__Q24Game6PelletFv
	.4byte getBedamaColor__Q24Game6PelletFv
	.4byte do_update__Q24Game6PelletFv
	.4byte onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent
	.4byte 0
	.4byte changeMaterial__Q24Game6PelletFv
	.4byte "createKiraEffect__Q24Game6PelletFR10Vector3<f>"
	.4byte getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam
	.4byte isCarried__Q24Game6PelletFv
	.4byte isPicked__Q24Game6PelletFv
	.4byte sound_otakaraEventStart__Q24Game6PelletFv
	.4byte sound_otakaraEventRestart__Q24Game6PelletFv
	.4byte sound_otakaraEventStop__Q24Game6PelletFv
	.4byte sound_otakaraEventFinish__Q24Game6PelletFv
.endobj __vt__Q24Game6Pellet
.obj __vt__Q24Game19PelletNumberInitArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q24Game13PelletInitArgFv
.endobj __vt__Q24Game19PelletNumberInitArg
.obj __vt__Q24Game18PelletIndexInitArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q24Game13PelletInitArgFv
.endobj __vt__Q24Game18PelletIndexInitArg
.obj __vt__Q23PSM9EventBase, weak
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "@16@__dt__Q23PSM9EventBaseFv"
	.4byte __dt__Q23PSM9EventBaseFv
	.4byte frameEnd_onPlaySe__Q23PSM11CreatureObjFv
	.4byte getCastType__Q23PSM11CreatureObjFv
	.4byte exec__Q23PSM8CreatureFv
	.4byte getJAIObject__Q23PSM11CreatureObjFv
	.4byte onCalcOn__Q23PSM11CreatureObjFv
	.4byte loopCalc__Q23PSM8CreatureFRQ23PSM12FrameCalcArg
	.4byte startSoundInner__Q23PSM8CreatureFRQ23PSM13StartSoundArg
	.4byte judgeNearWithPlayer__Q23PSM8CreatureFRC3VecRC3Vecff
	.4byte onPlayingSe__Q23PSM8CreatureFUlP8JAISound
	.4byte getHandleArea__Q23PSM11CreatureObjFUc
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q23PSM9EventBaseFv"
	.4byte "@48@startSound__Q23PSM11CreatureObjFUlUl"
	.4byte "@48@startSound__Q23PSM11CreatureObjFUcUlUl"
	.4byte "@48@startSound__Q23PSM11CreatureObjFPP8JAISoundUlUl"
	.4byte stopAllSound__Q27JAInter10ObjectBaseFv
	.4byte stopSound__Q27JAInter10ObjectBaseFUlUl
	.4byte enable__Q27JAInter10ObjectBaseFv
	.4byte disable__Q27JAInter6ObjectFv
	.4byte dispose__Q27JAInter10ObjectBaseFv
	.4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
	.4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
	.4byte handleStop__Q27JAInter10ObjectBaseFUcUl
	.4byte loop__Q27JAInter6ObjectFv
	.4byte startSound__Q23PSM11CreatureObjFUlUl
	.4byte startSound__Q23PSM11CreatureObjFUcUlUl
	.4byte startSound__Q23PSM11CreatureObjFPP8JAISoundUlUl
.endobj __vt__Q23PSM9EventBase
.obj "__vt__Q24Game28StateMachine<Q24Game6Pellet>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "start__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte "exec__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
.endobj "__vt__Q24Game28StateMachine<Q24Game6Pellet>"
.obj __vt__Q24Game18PelletGoalStateArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q24Game18PelletGoalStateArgFv
.endobj __vt__Q24Game18PelletGoalStateArg
.obj __vt__Q24Game12InteractSuck, global
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game12InteractSuckFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
.endobj __vt__Q24Game12InteractSuck
.obj __vt__Q23efx12TFruitsDownP, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx12TFruitsDownP
.obj __vt__Q23efx12TFruitsDownR, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx12TFruitsDownR
.obj __vt__Q24Game11InteractEat, global
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game11InteractEatFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game11InteractEatFPQ24Game8BaseItem
.endobj __vt__Q24Game11InteractEat
.obj __vt__Q24Game15InteractMattuan, global
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game15InteractMattuanFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
.endobj __vt__Q24Game15InteractMattuan
.obj "__vt__19Iterator<8CollPart>", weak
	.4byte 0
	.4byte 0
	.4byte "first__19Iterator<8CollPart>Fv"
	.4byte "next__19Iterator<8CollPart>Fv"
	.4byte "isDone__19Iterator<8CollPart>Fv"
	.4byte "__ml__19Iterator<8CollPart>Fv"
.endobj "__vt__19Iterator<8CollPart>"

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj sFromTekiEnable__Q24Game6Pellet, global
	.byte 0x01
.endobj sFromTekiEnable__Q24Game6Pellet

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj pelletMgr__4Game, global
	.skip 0x4
.endobj pelletMgr__4Game
.obj mDebug__Q24Game9PelletMgr, global
	.skip 0x1
.endobj mDebug__Q24Game9PelletMgr
.obj disableDynamics__Q24Game9PelletMgr, global
	.skip 0x1
.endobj disableDynamics__Q24Game9PelletMgr

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80518910, local
	.float 1.0
.endobj lbl_80518910
.obj lbl_80518914, local
	.float 0.0
.endobj lbl_80518914
.obj lbl_80518918, local
	.float 0.5
.endobj lbl_80518918
.obj lbl_8051891C, local
	.float 0.2
.endobj lbl_8051891C
.obj lbl_80518920, local
	.float 90.0
.endobj lbl_80518920
.obj lbl_80518924, local
	.float -0.5
.endobj lbl_80518924
.obj lbl_80518928, local
	.float 30.0
.endobj lbl_80518928
.balign 8
.obj lbl_80518930, local
	.8byte 0x4330000080000000
.endobj lbl_80518930
.obj lbl_80518938, local
	.float 4.0
.endobj lbl_80518938
.obj lbl_8051893C, local
	.float 0.25
.endobj lbl_8051893C
.obj lbl_80518940, local
	.float 32768.0
.endobj lbl_80518940
.obj lbl_80518944, local
	.float 3.0
.endobj lbl_80518944
.balign 4
.obj lbl_80518948, local
	.asciz "number1"
.endobj lbl_80518948
.balign 4
.obj lbl_80518950, local
	.asciz "number5"
.endobj lbl_80518950
.balign 4
.obj lbl_80518958, local
	.float 128000.0
.endobj lbl_80518958
.obj lbl_8051895C, local
	.float 0.01
.endobj lbl_8051895C
.balign 4
.obj lbl_80518960, local
	.asciz "loozy"
.endobj lbl_80518960
.balign 4
.obj lbl_80518968, local
	.asciz "orima"
.endobj lbl_80518968
.balign 4
.obj lbl_80518970, local
	.float 2.0
.endobj lbl_80518970
.balign 4
.obj lbl_80518974, local
	.asciz "never"
.endobj lbl_80518974
.balign 4
.obj lbl_8051897C, local
	.asciz "lod"
.endobj lbl_8051897C
.balign 4
.obj lbl_80518980, local
	.asciz "simple"
.endobj lbl_80518980
.balign 4
.obj lbl_80518988, local # tau
	.float 6.2831855
.endobj lbl_80518988
.obj lbl_8051898C, local
	.float 325.9493
.endobj lbl_8051898C
.obj lbl_80518990, local
	.float -325.9493
.endobj lbl_80518990
.obj lbl_80518994, local
	.float 10.0
.endobj lbl_80518994
.obj lbl_80518998, local
	.float 0.1
.endobj lbl_80518998
.obj lbl_8051899C, local
	.float 12.0
.endobj lbl_8051899C
.obj lbl_805189A0, local
	.float -1.0
.endobj lbl_805189A0
.obj lbl_805189A4, local # pi
	.float 3.1415927
.endobj lbl_805189A4
.obj lbl_805189A8, local
	.float 1023.5
.endobj lbl_805189A8
.obj lbl_805189AC, local # pi/2
	.float 1.5707964
.endobj lbl_805189AC
.obj lbl_805189B0, local
	.float 0.6
.endobj lbl_805189B0
.obj lbl_805189B4, local
	.float 100.0
.endobj lbl_805189B4
.balign 4
.obj lbl_805189B8, local
	.asciz "pmotion"
.endobj lbl_805189B8
.balign 4
.obj lbl_805189C0, local
	.float 12800.0
.endobj lbl_805189C0
.obj lbl_805189C4, local
	.float -0.0
.endobj lbl_805189C4
.balign 4
.obj lbl_805189C8, local
	.asciz "jpn"
.endobj lbl_805189C8
.balign 4
.obj lbl_805189CC, local
	.asciz "us"
.endobj lbl_805189CC
.balign 4
.obj lbl_805189D0, local
	.asciz "pal"
.endobj lbl_805189D0
.balign 4
.obj lbl_805189D4, local
	.asciz "null"
.endobj lbl_805189D4
.balign 4
.obj lbl_805189DC, local
	.asciz "%s%s"
.endobj lbl_805189DC
.balign 4
.obj lbl_805189E4, local
	.asciz "%s"
.endobj lbl_805189E4
.balign 4
.obj lbl_805189E8, local
	.asciz "%s/%s"
.endobj lbl_805189E8
.balign 4
.obj lbl_805189F0, local
	.asciz "manda!\n"
.endobj lbl_805189F0
.balign 4
.obj lbl_805189F8, local
	.asciz "yes"
.endobj lbl_805189F8
.balign 4
.obj lbl_805189FC, local
	.float 70.0
.endobj lbl_805189FC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn getCreatureName__Q24Game6PelletFv, global
/* 801658EC 0016282C  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 801658F0 00162830  28 03 00 00 */	cmplwi r3, 0
/* 801658F4 00162834  41 82 00 0C */	beq .L_80165900
/* 801658F8 00162838  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801658FC 0016283C  4E 80 00 20 */	blr 
.L_80165900:
/* 80165900 00162840  3C 60 80 48 */	lis r3, lbl_8047E330@ha
/* 80165904 00162844  38 63 E3 30 */	addi r3, r3, lbl_8047E330@l
/* 80165908 00162848  4E 80 00 20 */	blr 
.endfn getCreatureName__Q24Game6PelletFv

.fn getCreatureID__Q24Game6PelletFv, global
/* 8016590C 0016284C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80165910 00162850  7C 08 02 A6 */	mflr r0
/* 80165914 00162854  90 01 00 14 */	stw r0, 0x14(r1)
/* 80165918 00162858  80 03 03 5C */	lwz r0, 0x35c(r3)
/* 8016591C 0016285C  28 00 00 00 */	cmplwi r0, 0
/* 80165920 00162860  41 82 00 0C */	beq .L_8016592C
/* 80165924 00162864  48 00 10 BD */	bl getConfigIndex__Q24Game6PelletFv
/* 80165928 00162868  48 00 00 08 */	b .L_80165930
.L_8016592C:
/* 8016592C 0016286C  38 60 FF FF */	li r3, -1
.L_80165930:
/* 80165930 00162870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80165934 00162874  7C 08 03 A6 */	mtlr r0
/* 80165938 00162878  38 21 00 10 */	addi r1, r1, 0x10
/* 8016593C 0016287C  4E 80 00 20 */	blr 
.endfn getCreatureID__Q24Game6PelletFv

.fn getShadowParam__Q24Game6PelletFRQ24Game11ShadowParam, global
/* 80165940 00162880  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80165944 00162884  7C 08 02 A6 */	mflr r0
/* 80165948 00162888  90 01 00 94 */	stw r0, 0x94(r1)
/* 8016594C 0016288C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80165950 00162890  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80165954 00162894  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80165958 00162898  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8016595C 0016289C  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80165960 001628A0  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80165964 001628A4  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 80165968 001628A8  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 8016596C 001628AC  DB 61 00 40 */	stfd f27, 0x40(r1)
/* 80165970 001628B0  F3 61 00 48 */	psq_st f27, 72(r1), 0, qr0
/* 80165974 001628B4  DB 41 00 30 */	stfd f26, 0x30(r1)
/* 80165978 001628B8  F3 41 00 38 */	psq_st f26, 56(r1), 0, qr0
/* 8016597C 001628BC  DB 21 00 20 */	stfd f25, 0x20(r1)
/* 80165980 001628C0  F3 21 00 28 */	psq_st f25, 40(r1), 0, qr0
/* 80165984 001628C4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80165988 001628C8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016598C 001628CC  7C 7E 1B 78 */	mr r30, r3
/* 80165990 001628D0  C0 22 A5 B0 */	lfs f1, lbl_80518910@sda21(r2)
/* 80165994 001628D4  C3 C3 01 4C */	lfs f30, 0x14c(r3)
/* 80165998 001628D8  7C 9F 23 78 */	mr r31, r4
/* 8016599C 001628DC  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 801659A0 001628E0  FC 40 F2 10 */	fabs f2, f30
/* 801659A4 001628E4  C3 E3 01 3C */	lfs f31, 0x13c(r3)
/* 801659A8 001628E8  C3 A3 01 5C */	lfs f29, 0x15c(r3)
/* 801659AC 001628EC  FC 40 10 18 */	frsp f2, f2
/* 801659B0 001628F0  EC 22 08 BC */	fnmsubs f1, f2, f2, f1
/* 801659B4 001628F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801659B8 001628F8  7F C3 F3 78 */	mr r3, r30
/* 801659BC 001628FC  48 00 10 0D */	bl getPickRadius__Q24Game6PelletFv
/* 801659C0 00162900  7F C4 F3 78 */	mr r4, r30
/* 801659C4 00162904  FF 80 08 90 */	fmr f28, f1
/* 801659C8 00162908  81 9E 00 00 */	lwz r12, 0(r30)
/* 801659CC 0016290C  38 61 00 08 */	addi r3, r1, 8
/* 801659D0 00162910  81 8C 00 08 */	lwz r12, 8(r12)
/* 801659D4 00162914  7D 89 03 A6 */	mtctr r12
/* 801659D8 00162918  4E 80 04 21 */	bctrl 
/* 801659DC 0016291C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 801659E0 00162920  C3 61 00 08 */	lfs f27, 8(r1)
/* 801659E4 00162924  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801659E8 00162928  C3 41 00 0C */	lfs f26, 0xc(r1)
/* 801659EC 0016292C  C3 21 00 10 */	lfs f25, 0x10(r1)
/* 801659F0 00162930  40 81 00 30 */	ble .L_80165A20
/* 801659F4 00162934  7F C3 F3 78 */	mr r3, r30
/* 801659F8 00162938  48 00 0F DD */	bl getCylinderHeight__Q24Game6PelletFv
/* 801659FC 0016293C  C0 02 A5 B8 */	lfs f0, lbl_80518918@sda21(r2)
/* 80165A00 00162940  EC 00 00 72 */	fmuls f0, f0, f1
/* 80165A04 00162944  EC 5F 00 32 */	fmuls f2, f31, f0
/* 80165A08 00162948  EC 3E 00 32 */	fmuls f1, f30, f0
/* 80165A0C 0016294C  EC 1D 00 32 */	fmuls f0, f29, f0
/* 80165A10 00162950  EC 7B 10 28 */	fsubs f3, f27, f2
/* 80165A14 00162954  EC 9A 08 28 */	fsubs f4, f26, f1
/* 80165A18 00162958  EC B9 00 28 */	fsubs f5, f25, f0
/* 80165A1C 0016295C  48 00 00 2C */	b .L_80165A48
.L_80165A20:
/* 80165A20 00162960  7F C3 F3 78 */	mr r3, r30
/* 80165A24 00162964  48 00 0F B1 */	bl getCylinderHeight__Q24Game6PelletFv
/* 80165A28 00162968  C0 02 A5 B8 */	lfs f0, lbl_80518918@sda21(r2)
/* 80165A2C 0016296C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80165A30 00162970  EC 5F 00 32 */	fmuls f2, f31, f0
/* 80165A34 00162974  EC 3E 00 32 */	fmuls f1, f30, f0
/* 80165A38 00162978  EC 1D 00 32 */	fmuls f0, f29, f0
/* 80165A3C 0016297C  EC 7B 10 2A */	fadds f3, f27, f2
/* 80165A40 00162980  EC 9A 08 2A */	fadds f4, f26, f1
/* 80165A44 00162984  EC B9 00 2A */	fadds f5, f25, f0
.L_80165A48:
/* 80165A48 00162988  C0 02 A5 BC */	lfs f0, lbl_8051891C@sda21(r2)
/* 80165A4C 0016298C  FC 40 F2 10 */	fabs f2, f30
/* 80165A50 00162990  D0 7F 00 00 */	stfs f3, 0(r31)
/* 80165A54 00162994  EC 84 00 2A */	fadds f4, f4, f0
/* 80165A58 00162998  C0 22 A5 C0 */	lfs f1, lbl_80518920@sda21(r2)
/* 80165A5C 0016299C  FC 00 10 18 */	frsp f0, f2
/* 80165A60 001629A0  D0 9F 00 04 */	stfs f4, 4(r31)
/* 80165A64 001629A4  EC 1C 00 32 */	fmuls f0, f28, f0
/* 80165A68 001629A8  D0 BF 00 08 */	stfs f5, 8(r31)
/* 80165A6C 001629AC  D3 FF 00 0C */	stfs f31, 0xc(r31)
/* 80165A70 001629B0  D3 DF 00 10 */	stfs f30, 0x10(r31)
/* 80165A74 001629B4  D3 BF 00 14 */	stfs f29, 0x14(r31)
/* 80165A78 001629B8  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 80165A7C 001629BC  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80165A80 001629C0  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80165A84 001629C4  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80165A88 001629C8  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80165A8C 001629CC  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80165A90 001629D0  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80165A94 001629D4  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80165A98 001629D8  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 80165A9C 001629DC  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 80165AA0 001629E0  E3 61 00 48 */	psq_l f27, 72(r1), 0, qr0
/* 80165AA4 001629E4  CB 61 00 40 */	lfd f27, 0x40(r1)
/* 80165AA8 001629E8  E3 41 00 38 */	psq_l f26, 56(r1), 0, qr0
/* 80165AAC 001629EC  CB 41 00 30 */	lfd f26, 0x30(r1)
/* 80165AB0 001629F0  E3 21 00 28 */	psq_l f25, 40(r1), 0, qr0
/* 80165AB4 001629F4  CB 21 00 20 */	lfd f25, 0x20(r1)
/* 80165AB8 001629F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80165ABC 001629FC  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80165AC0 00162A00  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80165AC4 00162A04  7C 08 03 A6 */	mtlr r0
/* 80165AC8 00162A08  38 21 00 90 */	addi r1, r1, 0x90
/* 80165ACC 00162A0C  4E 80 00 20 */	blr 
.endfn getShadowParam__Q24Game6PelletFRQ24Game11ShadowParam

.fn needShadow__Q24Game6PelletFv, global
/* 80165AD0 00162A10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80165AD4 00162A14  7C 08 02 A6 */	mflr r0
/* 80165AD8 00162A18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80165ADC 00162A1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80165AE0 00162A20  3B E0 00 00 */	li r31, 0
/* 80165AE4 00162A24  93 C1 00 08 */	stw r30, 8(r1)
/* 80165AE8 00162A28  7C 7E 1B 78 */	mr r30, r3
/* 80165AEC 00162A2C  80 8D 93 20 */	lwz r4, pelletMgr__4Game@sda21(r13)
/* 80165AF0 00162A30  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 80165AF4 00162A34  28 00 00 00 */	cmplwi r0, 0
/* 80165AF8 00162A38  41 82 00 2C */	beq .L_80165B24
/* 80165AFC 00162A3C  41 82 00 2C */	beq .L_80165B28
/* 80165B00 00162A40  81 83 00 00 */	lwz r12, 0(r3)
/* 80165B04 00162A44  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80165B08 00162A48  7D 89 03 A6 */	mtctr r12
/* 80165B0C 00162A4C  4E 80 04 21 */	bctrl 
/* 80165B10 00162A50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80165B14 00162A54  41 82 00 14 */	beq .L_80165B28
/* 80165B18 00162A58  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 80165B1C 00162A5C  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80165B20 00162A60  41 82 00 08 */	beq .L_80165B28
.L_80165B24:
/* 80165B24 00162A64  3B E0 00 01 */	li r31, 1
.L_80165B28:
/* 80165B28 00162A68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80165B2C 00162A6C  7F E3 FB 78 */	mr r3, r31
/* 80165B30 00162A70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80165B34 00162A74  83 C1 00 08 */	lwz r30, 8(r1)
/* 80165B38 00162A78  7C 08 03 A6 */	mtlr r0
/* 80165B3C 00162A7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80165B40 00162A80  4E 80 00 20 */	blr 
.endfn needShadow__Q24Game6PelletFv

.fn getWallTimer__Q24Game6PelletFv, global
/* 80165B44 00162A84  88 63 03 BC */	lbz r3, 0x3bc(r3)
/* 80165B48 00162A88  4E 80 00 20 */	blr 
.endfn getWallTimer__Q24Game6PelletFv

.fn __ct__Q24Game13PelletViewArgFv, global
/* 80165B4C 00162A8C  C0 22 A5 B0 */	lfs f1, lbl_80518910@sda21(r2)
/* 80165B50 00162A90  38 00 00 00 */	li r0, 0
/* 80165B54 00162A94  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80165B58 00162A98  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 80165B5C 00162A9C  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 80165B60 00162AA0  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 80165B64 00162AA4  90 03 00 14 */	stw r0, 0x14(r3)
/* 80165B68 00162AA8  90 03 00 10 */	stw r0, 0x10(r3)
/* 80165B6C 00162AAC  D0 03 00 04 */	stfs f0, 4(r3)
/* 80165B70 00162AB0  D0 03 00 08 */	stfs f0, 8(r3)
/* 80165B74 00162AB4  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80165B78 00162AB8  90 03 00 00 */	stw r0, 0(r3)
/* 80165B7C 00162ABC  4E 80 00 20 */	blr 
.endfn __ct__Q24Game13PelletViewArgFv

.fn becomePellet__Q24Game10PelletViewFPQ24Game13PelletViewArg, global
/* 80165B80 00162AC0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80165B84 00162AC4  7C 08 02 A6 */	mflr r0
/* 80165B88 00162AC8  3C C0 80 4B */	lis r6, __vt__Q24Game13PelletInitArg@ha
/* 80165B8C 00162ACC  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 80165B90 00162AD0  90 01 00 64 */	stw r0, 0x64(r1)
/* 80165B94 00162AD4  38 05 A2 F4 */	addi r0, r5, __vt__Q24Game15CreatureInitArg@l
/* 80165B98 00162AD8  39 06 A2 B8 */	addi r8, r6, __vt__Q24Game13PelletInitArg@l
/* 80165B9C 00162ADC  38 E0 00 00 */	li r7, 0
/* 80165BA0 00162AE0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80165BA4 00162AE4  38 A0 FF FF */	li r5, -1
/* 80165BA8 00162AE8  38 C0 00 01 */	li r6, 1
/* 80165BAC 00162AEC  7C 7F 1B 78 */	mr r31, r3
/* 80165BB0 00162AF0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80165BB4 00162AF4  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80165BB8 00162AF8  7C 9D 23 78 */	mr r29, r4
/* 80165BBC 00162AFC  38 81 00 20 */	addi r4, r1, 0x20
/* 80165BC0 00162B00  90 01 00 20 */	stw r0, 0x20(r1)
/* 80165BC4 00162B04  38 00 00 FF */	li r0, 0xff
/* 80165BC8 00162B08  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80165BCC 00162B0C  91 01 00 20 */	stw r8, 0x20(r1)
/* 80165BD0 00162B10  98 E1 00 3C */	stb r7, 0x3c(r1)
/* 80165BD4 00162B14  B0 E1 00 34 */	sth r7, 0x34(r1)
/* 80165BD8 00162B18  98 01 00 36 */	stb r0, 0x36(r1)
/* 80165BDC 00162B1C  90 E1 00 38 */	stw r7, 0x38(r1)
/* 80165BE0 00162B20  98 E1 00 37 */	stb r7, 0x37(r1)
/* 80165BE4 00162B24  98 C1 00 24 */	stb r6, 0x24(r1)
/* 80165BE8 00162B28  98 E1 00 3D */	stb r7, 0x3d(r1)
/* 80165BEC 00162B2C  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80165BF0 00162B30  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80165BF4 00162B34  98 E1 00 3E */	stb r7, 0x3e(r1)
/* 80165BF8 00162B38  98 E1 00 3F */	stb r7, 0x3f(r1)
/* 80165BFC 00162B3C  80 1D 00 00 */	lwz r0, 0(r29)
/* 80165C00 00162B40  90 01 00 28 */	stw r0, 0x28(r1)
/* 80165C04 00162B44  90 E1 00 2C */	stw r7, 0x2c(r1)
/* 80165C08 00162B48  90 A1 00 30 */	stw r5, 0x30(r1)
/* 80165C0C 00162B4C  98 C1 00 36 */	stb r6, 0x36(r1)
/* 80165C10 00162B50  93 E1 00 38 */	stw r31, 0x38(r1)
/* 80165C14 00162B54  48 00 78 AD */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 80165C18 00162B58  7C 7E 1B 79 */	or. r30, r3, r3
/* 80165C1C 00162B5C  41 82 01 58 */	beq .L_80165D74
/* 80165C20 00162B60  C0 1D 00 04 */	lfs f0, 4(r29)
/* 80165C24 00162B64  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80165C28 00162B68  C0 1D 00 08 */	lfs f0, 8(r29)
/* 80165C2C 00162B6C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80165C30 00162B70  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 80165C34 00162B74  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80165C38 00162B78  48 00 0D 9D */	bl getCylinderHeight__Q24Game6PelletFv
/* 80165C3C 00162B7C  C0 62 A5 B8 */	lfs f3, lbl_80518918@sda21(r2)
/* 80165C40 00162B80  7F C3 F3 78 */	mr r3, r30
/* 80165C44 00162B84  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80165C48 00162B88  38 81 00 14 */	addi r4, r1, 0x14
/* 80165C4C 00162B8C  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80165C50 00162B90  38 A0 00 00 */	li r5, 0
/* 80165C54 00162B94  ED 23 00 7A */	fmadds f9, f3, f1, f0
/* 80165C58 00162B98  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80165C5C 00162B9C  D1 21 00 18 */	stfs f9, 0x18(r1)
/* 80165C60 00162BA0  80 FD 00 10 */	lwz r7, 0x10(r29)
/* 80165C64 00162BA4  80 DE 03 5C */	lwz r6, 0x35c(r30)
/* 80165C68 00162BA8  C0 87 00 04 */	lfs f4, 4(r7)
/* 80165C6C 00162BAC  C1 46 02 14 */	lfs f10, 0x214(r6)
/* 80165C70 00162BB0  C0 67 00 14 */	lfs f3, 0x14(r7)
/* 80165C74 00162BB4  C0 27 00 24 */	lfs f1, 0x24(r7)
/* 80165C78 00162BB8  EC CA 01 32 */	fmuls f6, f10, f4
/* 80165C7C 00162BBC  C1 06 02 10 */	lfs f8, 0x210(r6)
/* 80165C80 00162BC0  EC 8A 00 F2 */	fmuls f4, f10, f3
/* 80165C84 00162BC4  C0 E7 00 00 */	lfs f7, 0(r7)
/* 80165C88 00162BC8  EC 2A 00 72 */	fmuls f1, f10, f1
/* 80165C8C 00162BCC  C0 A7 00 10 */	lfs f5, 0x10(r7)
/* 80165C90 00162BD0  C0 67 00 20 */	lfs f3, 0x20(r7)
/* 80165C94 00162BD4  EC C8 31 FA */	fmadds f6, f8, f7, f6
/* 80165C98 00162BD8  C1 66 02 18 */	lfs f11, 0x218(r6)
/* 80165C9C 00162BDC  EC 88 21 7A */	fmadds f4, f8, f5, f4
/* 80165CA0 00162BE0  C0 E7 00 08 */	lfs f7, 8(r7)
/* 80165CA4 00162BE4  EC 28 08 FA */	fmadds f1, f8, f3, f1
/* 80165CA8 00162BE8  C0 A7 00 18 */	lfs f5, 0x18(r7)
/* 80165CAC 00162BEC  C0 67 00 28 */	lfs f3, 0x28(r7)
/* 80165CB0 00162BF0  EC CB 31 FA */	fmadds f6, f11, f7, f6
/* 80165CB4 00162BF4  EC 8B 21 7A */	fmadds f4, f11, f5, f4
/* 80165CB8 00162BF8  D1 01 00 08 */	stfs f8, 8(r1)
/* 80165CBC 00162BFC  EC 2B 08 FA */	fmadds f1, f11, f3, f1
/* 80165CC0 00162C00  EC 00 30 2A */	fadds f0, f0, f6
/* 80165CC4 00162C04  D1 41 00 0C */	stfs f10, 0xc(r1)
/* 80165CC8 00162C08  EC 69 20 2A */	fadds f3, f9, f4
/* 80165CCC 00162C0C  EC 42 08 2A */	fadds f2, f2, f1
/* 80165CD0 00162C10  D1 61 00 10 */	stfs f11, 0x10(r1)
/* 80165CD4 00162C14  D0 C1 00 08 */	stfs f6, 8(r1)
/* 80165CD8 00162C18  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 80165CDC 00162C1C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80165CE0 00162C20  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80165CE4 00162C24  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 80165CE8 00162C28  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80165CEC 00162C2C  4B FD 54 BD */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80165CF0 00162C30  93 DF 00 04 */	stw r30, 4(r31)
/* 80165CF4 00162C34  38 00 00 01 */	li r0, 1
/* 80165CF8 00162C38  7F C3 F3 78 */	mr r3, r30
/* 80165CFC 00162C3C  98 1E 03 24 */	stb r0, 0x324(r30)
/* 80165D00 00162C40  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 80165D04 00162C44  48 00 27 C9 */	bl setOrientation__Q24Game6PelletFR7Matrixf
/* 80165D08 00162C48  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 80165D0C 00162C4C  7F E3 FB 78 */	mr r3, r31
/* 80165D10 00162C50  D0 1E 01 68 */	stfs f0, 0x168(r30)
/* 80165D14 00162C54  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 80165D18 00162C58  D0 1E 01 6C */	stfs f0, 0x16c(r30)
/* 80165D1C 00162C5C  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 80165D20 00162C60  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 80165D24 00162C64  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 80165D28 00162C68  60 00 00 34 */	ori r0, r0, 0x34
/* 80165D2C 00162C6C  98 1E 00 D8 */	stb r0, 0xd8(r30)
/* 80165D30 00162C70  81 9F 00 00 */	lwz r12, 0(r31)
/* 80165D34 00162C74  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80165D38 00162C78  7D 89 03 A6 */	mtctr r12
/* 80165D3C 00162C7C  4E 80 04 21 */	bctrl 
/* 80165D40 00162C80  80 1D 00 14 */	lwz r0, 0x14(r29)
/* 80165D44 00162C84  90 1F 00 08 */	stw r0, 8(r31)
/* 80165D48 00162C88  80 1F 00 08 */	lwz r0, 8(r31)
/* 80165D4C 00162C8C  28 00 00 00 */	cmplwi r0, 0
/* 80165D50 00162C90  40 82 00 30 */	bne .L_80165D80
/* 80165D54 00162C94  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 80165D58 00162C98  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 80165D5C 00162C9C  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 80165D60 00162CA0  38 80 03 7F */	li r4, 0x37f
/* 80165D64 00162CA4  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 80165D68 00162CA8  4C C6 31 82 */	crclr 6
/* 80165D6C 00162CAC  4B EC 48 D5 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80165D70 00162CB0  48 00 00 10 */	b .L_80165D80
.L_80165D74:
/* 80165D74 00162CB4  38 00 00 00 */	li r0, 0
/* 80165D78 00162CB8  90 1F 00 04 */	stw r0, 4(r31)
/* 80165D7C 00162CBC  90 1F 00 08 */	stw r0, 8(r31)
.L_80165D80:
/* 80165D80 00162CC0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80165D84 00162CC4  80 7F 00 04 */	lwz r3, 4(r31)
/* 80165D88 00162CC8  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80165D8C 00162CCC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80165D90 00162CD0  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80165D94 00162CD4  7C 08 03 A6 */	mtlr r0
/* 80165D98 00162CD8  38 21 00 60 */	addi r1, r1, 0x60
/* 80165D9C 00162CDC  4E 80 00 20 */	blr 
.endfn becomePellet__Q24Game10PelletViewFPQ24Game13PelletViewArg

.fn viewMakeMatrix__Q24Game10PelletViewFR7Matrixf, global
/* 80165DA0 00162CE0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80165DA4 00162CE4  7C 08 02 A6 */	mflr r0
/* 80165DA8 00162CE8  90 01 00 54 */	stw r0, 0x54(r1)
/* 80165DAC 00162CEC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80165DB0 00162CF0  7C 9F 23 78 */	mr r31, r4
/* 80165DB4 00162CF4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80165DB8 00162CF8  7C 7E 1B 78 */	mr r30, r3
/* 80165DBC 00162CFC  80 63 00 04 */	lwz r3, 4(r3)
/* 80165DC0 00162D00  48 00 0C 15 */	bl getCylinderHeight__Q24Game6PelletFv
/* 80165DC4 00162D04  C0 42 A5 C4 */	lfs f2, lbl_80518924@sda21(r2)
/* 80165DC8 00162D08  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80165DCC 00162D0C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80165DD0 00162D10  38 A3 41 E4 */	addi r5, r3, "zero__10Vector3<f>"@l
/* 80165DD4 00162D14  EC 22 00 72 */	fmuls f1, f2, f1
/* 80165DD8 00162D18  38 61 00 14 */	addi r3, r1, 0x14
/* 80165DDC 00162D1C  D0 01 00 08 */	stfs f0, 8(r1)
/* 80165DE0 00162D20  38 C1 00 08 */	addi r6, r1, 8
/* 80165DE4 00162D24  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80165DE8 00162D28  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80165DEC 00162D2C  80 9E 00 04 */	lwz r4, 4(r30)
/* 80165DF0 00162D30  38 84 01 68 */	addi r4, r4, 0x168
/* 80165DF4 00162D34  48 2C 24 E5 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 80165DF8 00162D38  80 7E 00 04 */	lwz r3, 4(r30)
/* 80165DFC 00162D3C  7F E5 FB 78 */	mr r5, r31
/* 80165E00 00162D40  38 81 00 14 */	addi r4, r1, 0x14
/* 80165E04 00162D44  38 63 01 38 */	addi r3, r3, 0x138
/* 80165E08 00162D48  4B F8 44 F9 */	bl PSMTXConcat
/* 80165E0C 00162D4C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80165E10 00162D50  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80165E14 00162D54  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80165E18 00162D58  7C 08 03 A6 */	mtlr r0
/* 80165E1C 00162D5C  38 21 00 50 */	addi r1, r1, 0x50
/* 80165E20 00162D60  4E 80 00 20 */	blr 
.endfn viewMakeMatrix__Q24Game10PelletViewFR7Matrixf

.fn clearClaim__Q24Game6PelletFv, global
/* 80165E24 00162D64  38 00 00 00 */	li r0, 0
/* 80165E28 00162D68  90 03 03 C0 */	stw r0, 0x3c0(r3)
/* 80165E2C 00162D6C  4E 80 00 20 */	blr 
.endfn clearClaim__Q24Game6PelletFv

.fn sendClaim__Q24Game6PelletFv, global
/* 80165E30 00162D70  80 83 03 C0 */	lwz r4, 0x3c0(r3)
/* 80165E34 00162D74  2C 04 00 0A */	cmpwi r4, 0xa
/* 80165E38 00162D78  4C 80 00 20 */	bgelr 
/* 80165E3C 00162D7C  38 04 00 01 */	addi r0, r4, 1
/* 80165E40 00162D80  90 03 03 C0 */	stw r0, 0x3c0(r3)
/* 80165E44 00162D84  4E 80 00 20 */	blr 
.endfn sendClaim__Q24Game6PelletFv

.fn updateClaim__Q24Game6PelletFv, global
/* 80165E48 00162D88  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80165E4C 00162D8C  7C 08 02 A6 */	mflr r0
/* 80165E50 00162D90  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80165E54 00162D94  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 80165E58 00162D98  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 80165E5C 00162D9C  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 80165E60 00162DA0  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 80165E64 00162DA4  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 80165E68 00162DA8  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 80165E6C 00162DAC  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80165E70 00162DB0  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80165E74 00162DB4  7C 7F 1B 78 */	mr r31, r3
/* 80165E78 00162DB8  80 03 03 C0 */	lwz r0, 0x3c0(r3)
/* 80165E7C 00162DBC  2C 00 00 0A */	cmpwi r0, 0xa
/* 80165E80 00162DC0  41 80 03 8C */	blt .L_8016620C
/* 80165E84 00162DC4  C3 E2 A5 B4 */	lfs f31, lbl_80518914@sda21(r2)
/* 80165E88 00162DC8  7F E4 FB 78 */	mr r4, r31
/* 80165E8C 00162DCC  38 61 00 48 */	addi r3, r1, 0x48
/* 80165E90 00162DD0  3B C0 00 00 */	li r30, 0
/* 80165E94 00162DD4  FF C0 F8 90 */	fmr f30, f31
/* 80165E98 00162DD8  FF A0 F8 90 */	fmr f29, f31
/* 80165E9C 00162DDC  48 03 9D C1 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 80165EA0 00162DE0  38 00 00 00 */	li r0, 0
/* 80165EA4 00162DE4  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80165EA8 00162DE8  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80165EAC 00162DEC  38 61 00 48 */	addi r3, r1, 0x48
/* 80165EB0 00162DF0  28 00 00 00 */	cmplwi r0, 0
/* 80165EB4 00162DF4  90 81 00 38 */	stw r4, 0x38(r1)
/* 80165EB8 00162DF8  90 01 00 44 */	stw r0, 0x44(r1)
/* 80165EBC 00162DFC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80165EC0 00162E00  90 61 00 40 */	stw r3, 0x40(r1)
/* 80165EC4 00162E04  40 82 00 1C */	bne .L_80165EE0
/* 80165EC8 00162E08  81 83 00 00 */	lwz r12, 0(r3)
/* 80165ECC 00162E0C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80165ED0 00162E10  7D 89 03 A6 */	mtctr r12
/* 80165ED4 00162E14  4E 80 04 21 */	bctrl 
/* 80165ED8 00162E18  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80165EDC 00162E1C  48 00 01 94 */	b .L_80166070
.L_80165EE0:
/* 80165EE0 00162E20  81 83 00 00 */	lwz r12, 0(r3)
/* 80165EE4 00162E24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80165EE8 00162E28  7D 89 03 A6 */	mtctr r12
/* 80165EEC 00162E2C  4E 80 04 21 */	bctrl 
/* 80165EF0 00162E30  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80165EF4 00162E34  48 00 00 58 */	b .L_80165F4C
.L_80165EF8:
/* 80165EF8 00162E38  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80165EFC 00162E3C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80165F00 00162E40  81 83 00 00 */	lwz r12, 0(r3)
/* 80165F04 00162E44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80165F08 00162E48  7D 89 03 A6 */	mtctr r12
/* 80165F0C 00162E4C  4E 80 04 21 */	bctrl 
/* 80165F10 00162E50  7C 64 1B 78 */	mr r4, r3
/* 80165F14 00162E54  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80165F18 00162E58  81 83 00 00 */	lwz r12, 0(r3)
/* 80165F1C 00162E5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80165F20 00162E60  7D 89 03 A6 */	mtctr r12
/* 80165F24 00162E64  4E 80 04 21 */	bctrl 
/* 80165F28 00162E68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80165F2C 00162E6C  40 82 01 44 */	bne .L_80166070
/* 80165F30 00162E70  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80165F34 00162E74  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80165F38 00162E78  81 83 00 00 */	lwz r12, 0(r3)
/* 80165F3C 00162E7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80165F40 00162E80  7D 89 03 A6 */	mtctr r12
/* 80165F44 00162E84  4E 80 04 21 */	bctrl 
/* 80165F48 00162E88  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80165F4C:
/* 80165F4C 00162E8C  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80165F50 00162E90  38 61 00 38 */	addi r3, r1, 0x38
/* 80165F54 00162E94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80165F58 00162E98  7D 89 03 A6 */	mtctr r12
/* 80165F5C 00162E9C  4E 80 04 21 */	bctrl 
/* 80165F60 00162EA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80165F64 00162EA4  41 82 FF 94 */	beq .L_80165EF8
/* 80165F68 00162EA8  48 00 01 08 */	b .L_80166070
.L_80165F6C:
/* 80165F6C 00162EAC  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80165F70 00162EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80165F74 00162EB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80165F78 00162EB8  7D 89 03 A6 */	mtctr r12
/* 80165F7C 00162EBC  4E 80 04 21 */	bctrl 
/* 80165F80 00162EC0  7C 64 1B 78 */	mr r4, r3
/* 80165F84 00162EC4  38 61 00 14 */	addi r3, r1, 0x14
/* 80165F88 00162EC8  81 84 00 00 */	lwz r12, 0(r4)
/* 80165F8C 00162ECC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80165F90 00162ED0  7D 89 03 A6 */	mtctr r12
/* 80165F94 00162ED4  4E 80 04 21 */	bctrl 
/* 80165F98 00162ED8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80165F9C 00162EDC  3B DE 00 01 */	addi r30, r30, 1
/* 80165FA0 00162EE0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80165FA4 00162EE4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80165FA8 00162EE8  EF FF 10 2A */	fadds f31, f31, f2
/* 80165FAC 00162EEC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80165FB0 00162EF0  EF DE 08 2A */	fadds f30, f30, f1
/* 80165FB4 00162EF4  EF BD 00 2A */	fadds f29, f29, f0
/* 80165FB8 00162EF8  28 00 00 00 */	cmplwi r0, 0
/* 80165FBC 00162EFC  40 82 00 24 */	bne .L_80165FE0
/* 80165FC0 00162F00  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80165FC4 00162F04  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80165FC8 00162F08  81 83 00 00 */	lwz r12, 0(r3)
/* 80165FCC 00162F0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80165FD0 00162F10  7D 89 03 A6 */	mtctr r12
/* 80165FD4 00162F14  4E 80 04 21 */	bctrl 
/* 80165FD8 00162F18  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80165FDC 00162F1C  48 00 00 94 */	b .L_80166070
.L_80165FE0:
/* 80165FE0 00162F20  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80165FE4 00162F24  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80165FE8 00162F28  81 83 00 00 */	lwz r12, 0(r3)
/* 80165FEC 00162F2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80165FF0 00162F30  7D 89 03 A6 */	mtctr r12
/* 80165FF4 00162F34  4E 80 04 21 */	bctrl 
/* 80165FF8 00162F38  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80165FFC 00162F3C  48 00 00 58 */	b .L_80166054
.L_80166000:
/* 80166000 00162F40  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80166004 00162F44  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80166008 00162F48  81 83 00 00 */	lwz r12, 0(r3)
/* 8016600C 00162F4C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80166010 00162F50  7D 89 03 A6 */	mtctr r12
/* 80166014 00162F54  4E 80 04 21 */	bctrl 
/* 80166018 00162F58  7C 64 1B 78 */	mr r4, r3
/* 8016601C 00162F5C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80166020 00162F60  81 83 00 00 */	lwz r12, 0(r3)
/* 80166024 00162F64  81 8C 00 08 */	lwz r12, 8(r12)
/* 80166028 00162F68  7D 89 03 A6 */	mtctr r12
/* 8016602C 00162F6C  4E 80 04 21 */	bctrl 
/* 80166030 00162F70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80166034 00162F74  40 82 00 3C */	bne .L_80166070
/* 80166038 00162F78  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8016603C 00162F7C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80166040 00162F80  81 83 00 00 */	lwz r12, 0(r3)
/* 80166044 00162F84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80166048 00162F88  7D 89 03 A6 */	mtctr r12
/* 8016604C 00162F8C  4E 80 04 21 */	bctrl 
/* 80166050 00162F90  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80166054:
/* 80166054 00162F94  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80166058 00162F98  38 61 00 38 */	addi r3, r1, 0x38
/* 8016605C 00162F9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80166060 00162FA0  7D 89 03 A6 */	mtctr r12
/* 80166064 00162FA4  4E 80 04 21 */	bctrl 
/* 80166068 00162FA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016606C 00162FAC  41 82 FF 94 */	beq .L_80166000
.L_80166070:
/* 80166070 00162FB0  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80166074 00162FB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80166078 00162FB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016607C 00162FBC  7D 89 03 A6 */	mtctr r12
/* 80166080 00162FC0  4E 80 04 21 */	bctrl 
/* 80166084 00162FC4  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80166088 00162FC8  7C 04 18 40 */	cmplw r4, r3
/* 8016608C 00162FCC  40 82 FE E0 */	bne .L_80165F6C
/* 80166090 00162FD0  2C 1E 00 00 */	cmpwi r30, 0
/* 80166094 00162FD4  40 81 01 6C */	ble .L_80166200
/* 80166098 00162FD8  6F C3 80 00 */	xoris r3, r30, 0x8000
/* 8016609C 00162FDC  3C 00 43 30 */	lis r0, 0x4330
/* 801660A0 00162FE0  90 61 00 6C */	stw r3, 0x6c(r1)
/* 801660A4 00162FE4  C8 22 A5 D0 */	lfd f1, lbl_80518930@sda21(r2)
/* 801660A8 00162FE8  90 01 00 68 */	stw r0, 0x68(r1)
/* 801660AC 00162FEC  C0 A2 A5 B0 */	lfs f5, lbl_80518910@sda21(r2)
/* 801660B0 00162FF0  C8 01 00 68 */	lfd f0, 0x68(r1)
/* 801660B4 00162FF4  C0 7F 03 B0 */	lfs f3, 0x3b0(r31)
/* 801660B8 00162FF8  EC 40 08 28 */	fsubs f2, f0, f1
/* 801660BC 00162FFC  C0 1F 03 AC */	lfs f0, 0x3ac(r31)
/* 801660C0 00163000  C0 9F 03 B4 */	lfs f4, 0x3b4(r31)
/* 801660C4 00163004  C0 22 A5 B4 */	lfs f1, lbl_80518914@sda21(r2)
/* 801660C8 00163008  EC 45 10 24 */	fdivs f2, f5, f2
/* 801660CC 0016300C  EF FF 00 B2 */	fmuls f31, f31, f2
/* 801660D0 00163010  EF DE 00 B2 */	fmuls f30, f30, f2
/* 801660D4 00163014  EF BD 00 B2 */	fmuls f29, f29, f2
/* 801660D8 00163018  EC 5F 00 28 */	fsubs f2, f31, f0
/* 801660DC 0016301C  EC 7E 18 28 */	fsubs f3, f30, f3
/* 801660E0 00163020  EC 9D 20 28 */	fsubs f4, f29, f4
/* 801660E4 00163024  EC 02 00 B2 */	fmuls f0, f2, f2
/* 801660E8 00163028  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 801660EC 0016302C  EC A3 00 F2 */	fmuls f5, f3, f3
/* 801660F0 00163030  EC C4 01 32 */	fmuls f6, f4, f4
/* 801660F4 00163034  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 801660F8 00163038  EC 00 28 2A */	fadds f0, f0, f5
/* 801660FC 0016303C  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 80166100 00163040  EC 06 00 2A */	fadds f0, f6, f0
/* 80166104 00163044  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80166108 00163048  40 81 00 20 */	ble .L_80166128
/* 8016610C 0016304C  EC 02 28 BA */	fmadds f0, f2, f2, f5
/* 80166110 00163050  EC 66 00 2A */	fadds f3, f6, f0
/* 80166114 00163054  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80166118 00163058  40 81 00 14 */	ble .L_8016612C
/* 8016611C 0016305C  FC 00 18 34 */	frsqrte f0, f3
/* 80166120 00163060  EC 60 00 F2 */	fmuls f3, f0, f3
/* 80166124 00163064  48 00 00 08 */	b .L_8016612C
.L_80166128:
/* 80166128 00163068  FC 60 08 90 */	fmr f3, f1
.L_8016612C:
/* 8016612C 0016306C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80166130 00163070  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80166134 00163074  40 81 00 30 */	ble .L_80166164
/* 80166138 00163078  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 8016613C 0016307C  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80166140 00163080  EC 60 18 24 */	fdivs f3, f0, f3
/* 80166144 00163084  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80166148 00163088  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8016614C 0016308C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80166150 00163090  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80166154 00163094  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80166158 00163098  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8016615C 0016309C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80166160 001630A0  D0 01 00 34 */	stfs f0, 0x34(r1)
.L_80166164:
/* 80166164 001630A4  7F E4 FB 78 */	mr r4, r31
/* 80166168 001630A8  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8016616C 001630AC  C0 62 A5 C8 */	lfs f3, lbl_80518928@sda21(r2)
/* 80166170 001630B0  38 61 00 08 */	addi r3, r1, 8
/* 80166174 001630B4  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80166178 001630B8  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8016617C 001630BC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80166180 001630C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80166184 001630C4  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80166188 001630C8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8016618C 001630CC  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80166190 001630D0  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80166194 001630D4  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80166198 001630D8  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8016619C 001630DC  7D 89 03 A6 */	mtctr r12
/* 801661A0 001630E0  4E 80 04 21 */	bctrl 
/* 801661A4 001630E4  C0 A1 00 08 */	lfs f5, 8(r1)
/* 801661A8 001630E8  7F E3 FB 78 */	mr r3, r31
/* 801661AC 001630EC  C0 81 00 0C */	lfs f4, 0xc(r1)
/* 801661B0 001630F0  38 81 00 20 */	addi r4, r1, 0x20
/* 801661B4 001630F4  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801661B8 001630F8  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 801661BC 001630FC  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 801661C0 00163100  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 801661C4 00163104  EC 45 10 2A */	fadds f2, f5, f2
/* 801661C8 00163108  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 801661CC 0016310C  EC 24 08 2A */	fadds f1, f4, f1
/* 801661D0 00163110  EC 03 00 2A */	fadds f0, f3, f0
/* 801661D4 00163114  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 801661D8 00163118  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 801661DC 0016311C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 801661E0 00163120  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 801661E4 00163124  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801661E8 00163128  81 9F 00 00 */	lwz r12, 0(r31)
/* 801661EC 0016312C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801661F0 00163130  7D 89 03 A6 */	mtctr r12
/* 801661F4 00163134  4E 80 04 21 */	bctrl 
/* 801661F8 00163138  38 00 00 00 */	li r0, 0
/* 801661FC 0016313C  90 1F 03 C0 */	stw r0, 0x3c0(r31)
.L_80166200:
/* 80166200 00163140  38 61 00 48 */	addi r3, r1, 0x48
/* 80166204 00163144  38 80 FF FF */	li r4, -1
/* 80166208 00163148  48 03 9B 5D */	bl __dt__Q24Game8StickersFv
.L_8016620C:
/* 8016620C 0016314C  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 80166210 00163150  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 80166214 00163154  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 80166218 00163158  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 8016621C 0016315C  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 80166220 00163160  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 80166224 00163164  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80166228 00163168  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8016622C 0016316C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80166230 00163170  7C 08 03 A6 */	mtlr r0
/* 80166234 00163174  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80166238 00163178  4E 80 00 20 */	blr 
.endfn updateClaim__Q24Game6PelletFv

.fn getBuryDepthMax__Q24Game6PelletFv, global
/* 8016623C 0016317C  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 80166240 00163180  C0 23 01 C0 */	lfs f1, 0x1c0(r3)
/* 80166244 00163184  4E 80 00 20 */	blr 
.endfn getBuryDepthMax__Q24Game6PelletFv

.fn getBuryDepth__Q24Game6PelletFv, global
/* 80166248 00163188  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 8016624C 0016318C  C0 23 01 B0 */	lfs f1, 0x1b0(r3)
/* 80166250 00163190  4E 80 00 20 */	blr 
.endfn getBuryDepth__Q24Game6PelletFv

.fn getBuryRadius__Q24Game6PelletFf, global
/* 80166254 00163194  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80166258 00163198  7C 08 02 A6 */	mflr r0
/* 8016625C 0016319C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80166260 001631A0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80166264 001631A4  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80166268 001631A8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016626C 001631AC  C0 82 A5 D8 */	lfs f4, lbl_80518938@sda21(r2)
/* 80166270 001631B0  3C 80 43 30 */	lis r4, 0x4330
/* 80166274 001631B4  80 A3 03 5C */	lwz r5, 0x35c(r3)
/* 80166278 001631B8  3C 60 80 48 */	lis r3, lbl_8047E318@ha
/* 8016627C 001631BC  EC 04 00 72 */	fmuls f0, f4, f1
/* 80166280 001631C0  39 63 E3 18 */	addi r11, r3, lbl_8047E318@l
/* 80166284 001631C4  81 4B 00 48 */	lwz r10, 0x48(r11)
/* 80166288 001631C8  38 00 00 00 */	li r0, 0
/* 8016628C 001631CC  81 2B 00 4C */	lwz r9, 0x4c(r11)
/* 80166290 001631D0  FC 00 00 1E */	fctiwz f0, f0
/* 80166294 001631D4  81 0B 00 50 */	lwz r8, 0x50(r11)
/* 80166298 001631D8  80 EB 00 54 */	lwz r7, 0x54(r11)
/* 8016629C 001631DC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 801662A0 001631E0  80 CB 00 58 */	lwz r6, 0x58(r11)
/* 801662A4 001631E4  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 801662A8 001631E8  90 81 00 28 */	stw r4, 0x28(r1)
/* 801662AC 001631EC  6F E3 80 00 */	xoris r3, r31, 0x8000
/* 801662B0 001631F0  C8 42 A5 D0 */	lfd f2, lbl_80518930@sda21(r2)
/* 801662B4 001631F4  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801662B8 001631F8  2C 1F 00 00 */	cmpwi r31, 0
/* 801662BC 001631FC  C0 62 A5 DC */	lfs f3, lbl_8051893C@sda21(r2)
/* 801662C0 00163200  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 801662C4 00163204  91 41 00 08 */	stw r10, 8(r1)
/* 801662C8 00163208  EC 00 10 28 */	fsubs f0, f0, f2
/* 801662CC 0016320C  C0 C5 01 D0 */	lfs f6, 0x1d0(r5)
/* 801662D0 00163210  91 21 00 0C */	stw r9, 0xc(r1)
/* 801662D4 00163214  C0 A5 01 E0 */	lfs f5, 0x1e0(r5)
/* 801662D8 00163218  EC 03 00 32 */	fmuls f0, f3, f0
/* 801662DC 0016321C  91 01 00 10 */	stw r8, 0x10(r1)
/* 801662E0 00163220  C0 45 01 F0 */	lfs f2, 0x1f0(r5)
/* 801662E4 00163224  90 E1 00 14 */	stw r7, 0x14(r1)
/* 801662E8 00163228  EC 01 00 28 */	fsubs f0, f1, f0
/* 801662EC 0016322C  C0 25 02 00 */	lfs f1, 0x200(r5)
/* 801662F0 00163230  90 C1 00 18 */	stw r6, 0x18(r1)
/* 801662F4 00163234  EF E4 00 32 */	fmuls f31, f4, f0
/* 801662F8 00163238  D0 C1 00 08 */	stfs f6, 8(r1)
/* 801662FC 0016323C  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 80166300 00163240  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 80166304 00163244  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 80166308 00163248  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8016630C 0016324C  41 80 00 10 */	blt .L_8016631C
/* 80166310 00163250  2C 1F 00 04 */	cmpwi r31, 4
/* 80166314 00163254  41 81 00 08 */	bgt .L_8016631C
/* 80166318 00163258  38 00 00 01 */	li r0, 1
.L_8016631C:
/* 8016631C 0016325C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80166320 00163260  40 82 00 18 */	bne .L_80166338
/* 80166324 00163264  38 6B 00 2C */	addi r3, r11, 0x2c
/* 80166328 00163268  38 AB 00 3C */	addi r5, r11, 0x3c
/* 8016632C 0016326C  38 80 03 EE */	li r4, 0x3ee
/* 80166330 00163270  4C C6 31 82 */	crclr 6
/* 80166334 00163274  4B EC 43 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80166338:
/* 80166338 00163278  57 E0 10 3A */	slwi r0, r31, 2
/* 8016633C 0016327C  38 61 00 0C */	addi r3, r1, 0xc
/* 80166340 00163280  C0 22 A5 B0 */	lfs f1, lbl_80518910@sda21(r2)
/* 80166344 00163284  38 81 00 08 */	addi r4, r1, 8
/* 80166348 00163288  7C 03 04 2E */	lfsx f0, r3, r0
/* 8016634C 0016328C  EC 41 F8 28 */	fsubs f2, f1, f31
/* 80166350 00163290  7C 24 04 2E */	lfsx f1, r4, r0
/* 80166354 00163294  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80166358 00163298  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8016635C 0016329C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80166360 001632A0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80166364 001632A4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80166368 001632A8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016636C 001632AC  7C 08 03 A6 */	mtlr r0
/* 80166370 001632B0  38 21 00 50 */	addi r1, r1, 0x50
/* 80166374 001632B4  4E 80 00 20 */	blr 
.endfn getBuryRadius__Q24Game6PelletFf

.fn stimulate__Q24Game6PelletFRQ24Game11Interaction, global
/* 80166378 001632B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016637C 001632BC  7C 08 02 A6 */	mflr r0
/* 80166380 001632C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80166384 001632C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80166388 001632C8  7C 9F 23 78 */	mr r31, r4
/* 8016638C 001632CC  93 C1 00 08 */	stw r30, 8(r1)
/* 80166390 001632D0  7C 7E 1B 78 */	mr r30, r3
/* 80166394 001632D4  7F E3 FB 78 */	mr r3, r31
/* 80166398 001632D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016639C 001632DC  7F C4 F3 78 */	mr r4, r30
/* 801663A0 001632E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801663A4 001632E4  7D 89 03 A6 */	mtctr r12
/* 801663A8 001632E8  4E 80 04 21 */	bctrl 
/* 801663AC 001632EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801663B0 001632F0  41 82 00 20 */	beq .L_801663D0
/* 801663B4 001632F4  7F E3 FB 78 */	mr r3, r31
/* 801663B8 001632F8  7F C4 F3 78 */	mr r4, r30
/* 801663BC 001632FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801663C0 00163300  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801663C4 00163304  7D 89 03 A6 */	mtctr r12
/* 801663C8 00163308  4E 80 04 21 */	bctrl 
/* 801663CC 0016330C  48 00 00 08 */	b .L_801663D4
.L_801663D0:
/* 801663D0 00163310  38 60 00 00 */	li r3, 0
.L_801663D4:
/* 801663D4 00163314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801663D8 00163318  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801663DC 0016331C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801663E0 00163320  7C 08 03 A6 */	mtlr r0
/* 801663E4 00163324  38 21 00 10 */	addi r1, r1, 0x10
/* 801663E8 00163328  4E 80 00 20 */	blr 
.endfn stimulate__Q24Game6PelletFRQ24Game11Interaction

.fn actPellet__Q24Game15InteractMattuanFPQ24Game6Pellet, global
/* 801663EC 0016332C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801663F0 00163330  7C 08 02 A6 */	mflr r0
/* 801663F4 00163334  90 01 00 24 */	stw r0, 0x24(r1)
/* 801663F8 00163338  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801663FC 0016333C  7C 9F 23 78 */	mr r31, r4
/* 80166400 00163340  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80166404 00163344  7C 7E 1B 78 */	mr r30, r3
/* 80166408 00163348  7F E3 FB 78 */	mr r3, r31
/* 8016640C 0016334C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80166410 00163350  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80166414 00163354  7D 89 03 A6 */	mtctr r12
/* 80166418 00163358  4E 80 04 21 */	bctrl 
/* 8016641C 0016335C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80166420 00163360  28 00 00 04 */	cmplwi r0, 4
/* 80166424 00163364  40 82 00 2C */	bne .L_80166450
/* 80166428 00163368  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8016642C 0016336C  7F E3 FB 78 */	mr r3, r31
/* 80166430 00163370  C0 3E 00 08 */	lfs f1, 8(r30)
/* 80166434 00163374  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80166438 00163378  EC 01 00 24 */	fdivs f0, f1, f0
/* 8016643C 0016337C  FC 00 00 1E */	fctiwz f0, f0
/* 80166440 00163380  D8 01 00 08 */	stfd f0, 8(r1)
/* 80166444 00163384  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80166448 00163388  48 00 50 89 */	bl startDiscoverDisable__Q24Game6PelletFUc
/* 8016644C 0016338C  48 00 00 0C */	b .L_80166458
.L_80166450:
/* 80166450 00163390  7F E3 FB 78 */	mr r3, r31
/* 80166454 00163394  48 00 50 71 */	bl clearDiscoverDisable__Q24Game6PelletFv
.L_80166458:
/* 80166458 00163398  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016645C 0016339C  38 60 00 01 */	li r3, 1
/* 80166460 001633A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80166464 001633A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80166468 001633A8  7C 08 03 A6 */	mtlr r0
/* 8016646C 001633AC  38 21 00 20 */	addi r1, r1, 0x20
/* 80166470 001633B0  4E 80 00 20 */	blr 
.endfn actPellet__Q24Game15InteractMattuanFPQ24Game6Pellet

.fn actPellet__Q24Game11InteractEatFPQ24Game6Pellet, global
/* 80166474 001633B4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80166478 001633B8  7C 08 02 A6 */	mflr r0
/* 8016647C 001633BC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80166480 001633C0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80166484 001633C4  7C 9F 23 78 */	mr r31, r4
/* 80166488 001633C8  7F E3 FB 78 */	mr r3, r31
/* 8016648C 001633CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80166490 001633D0  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80166494 001633D4  7D 89 03 A6 */	mtctr r12
/* 80166498 001633D8  4E 80 04 21 */	bctrl 
/* 8016649C 001633DC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801664A0 001633E0  28 00 00 02 */	cmplwi r0, 2
/* 801664A4 001633E4  40 82 01 40 */	bne .L_801665E4
/* 801664A8 001633E8  7F E3 FB 78 */	mr r3, r31
/* 801664AC 001633EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801664B0 001633F0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801664B4 001633F4  7D 89 03 A6 */	mtctr r12
/* 801664B8 001633F8  4E 80 04 21 */	bctrl 
/* 801664BC 001633FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801664C0 00163400  41 82 01 24 */	beq .L_801665E4
/* 801664C4 00163404  7F E4 FB 78 */	mr r4, r31
/* 801664C8 00163408  38 61 00 08 */	addi r3, r1, 8
/* 801664CC 0016340C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801664D0 00163410  81 8C 00 08 */	lwz r12, 8(r12)
/* 801664D4 00163414  7D 89 03 A6 */	mtctr r12
/* 801664D8 00163418  4E 80 04 21 */	bctrl 
/* 801664DC 0016341C  C0 41 00 08 */	lfs f2, 8(r1)
/* 801664E0 00163420  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801664E4 00163424  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801664E8 00163428  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801664EC 0016342C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801664F0 00163430  90 01 00 34 */	stw r0, 0x34(r1)
/* 801664F4 00163434  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 801664F8 00163438  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801664FC 0016343C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80166500 00163440  A0 1F 04 3E */	lhz r0, 0x43e(r31)
/* 80166504 00163444  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 80166508 00163448  28 00 00 00 */	cmplwi r0, 0
/* 8016650C 0016344C  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80166510 00163450  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80166514 00163454  40 82 00 54 */	bne .L_80166568
/* 80166518 00163458  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8016651C 0016345C  38 A0 00 00 */	li r5, 0
/* 80166520 00163460  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80166524 00163464  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 80166528 00163468  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016652C 0016346C  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 80166530 00163470  3C 60 80 4B */	lis r3, __vt__Q23efx12TFruitsDownR@ha
/* 80166534 00163474  38 80 00 65 */	li r4, 0x65
/* 80166538 00163478  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016653C 0016347C  38 03 22 88 */	addi r0, r3, __vt__Q23efx12TFruitsDownR@l
/* 80166540 00163480  38 C0 00 66 */	li r6, 0x66
/* 80166544 00163484  38 61 00 24 */	addi r3, r1, 0x24
/* 80166548 00163488  B0 81 00 28 */	sth r4, 0x28(r1)
/* 8016654C 0016348C  38 81 00 34 */	addi r4, r1, 0x34
/* 80166550 00163490  B0 C1 00 2A */	sth r6, 0x2a(r1)
/* 80166554 00163494  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80166558 00163498  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8016655C 0016349C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80166560 001634A0  48 24 8A B5 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 80166564 001634A4  48 00 00 50 */	b .L_801665B4
.L_80166568:
/* 80166568 001634A8  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8016656C 001634AC  38 A0 00 00 */	li r5, 0
/* 80166570 001634B0  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80166574 001634B4  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 80166578 001634B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016657C 001634BC  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 80166580 001634C0  3C 60 80 4B */	lis r3, __vt__Q23efx12TFruitsDownP@ha
/* 80166584 001634C4  38 80 00 63 */	li r4, 0x63
/* 80166588 001634C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016658C 001634CC  38 03 22 74 */	addi r0, r3, __vt__Q23efx12TFruitsDownP@l
/* 80166590 001634D0  38 C0 00 64 */	li r6, 0x64
/* 80166594 001634D4  38 61 00 14 */	addi r3, r1, 0x14
/* 80166598 001634D8  B0 81 00 18 */	sth r4, 0x18(r1)
/* 8016659C 001634DC  38 81 00 34 */	addi r4, r1, 0x34
/* 801665A0 001634E0  B0 C1 00 1A */	sth r6, 0x1a(r1)
/* 801665A4 001634E4  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 801665A8 001634E8  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801665AC 001634EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801665B0 001634F0  48 24 8A 65 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
.L_801665B4:
/* 801665B4 001634F4  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 801665B8 001634F8  38 80 38 42 */	li r4, 0x3842
/* 801665BC 001634FC  38 A0 00 00 */	li r5, 0
/* 801665C0 00163500  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801665C4 00163504  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801665C8 00163508  7D 89 03 A6 */	mtctr r12
/* 801665CC 0016350C  4E 80 04 21 */	bctrl 
/* 801665D0 00163510  7F E3 FB 78 */	mr r3, r31
/* 801665D4 00163514  38 80 00 00 */	li r4, 0
/* 801665D8 00163518  4B FD 4B 19 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 801665DC 0016351C  38 60 00 01 */	li r3, 1
/* 801665E0 00163520  48 00 00 08 */	b .L_801665E8
.L_801665E4:
/* 801665E4 00163524  38 60 00 00 */	li r3, 0
.L_801665E8:
/* 801665E8 00163528  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801665EC 0016352C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801665F0 00163530  7C 08 03 A6 */	mtlr r0
/* 801665F4 00163534  38 21 00 60 */	addi r1, r1, 0x60
/* 801665F8 00163538  4E 80 00 20 */	blr 
.endfn actPellet__Q24Game11InteractEatFPQ24Game6Pellet

.fn actPellet__Q24Game12InteractSuckFPQ24Game6Pellet, global
/* 801665FC 0016353C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80166600 00163540  7C 08 02 A6 */	mflr r0
/* 80166604 00163544  3C A0 80 4B */	lis r5, __vt__Q24Game18PelletGoalStateArg@ha
/* 80166608 00163548  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016660C 0016354C  38 05 22 44 */	addi r0, r5, __vt__Q24Game18PelletGoalStateArg@l
/* 80166610 00163550  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80166614 00163554  7C 9F 23 78 */	mr r31, r4
/* 80166618 00163558  80 63 00 04 */	lwz r3, 4(r3)
/* 8016661C 0016355C  28 03 00 00 */	cmplwi r3, 0
/* 80166620 00163560  90 01 00 0C */	stw r0, 0xc(r1)
/* 80166624 00163564  90 61 00 08 */	stw r3, 8(r1)
/* 80166628 00163568  41 82 00 14 */	beq .L_8016663C
/* 8016662C 0016356C  81 83 00 00 */	lwz r12, 0(r3)
/* 80166630 00163570  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80166634 00163574  7D 89 03 A6 */	mtctr r12
/* 80166638 00163578  4E 80 04 21 */	bctrl 
.L_8016663C:
/* 8016663C 0016357C  80 7F 03 C8 */	lwz r3, 0x3c8(r31)
/* 80166640 00163580  7F E4 FB 78 */	mr r4, r31
/* 80166644 00163584  38 C1 00 08 */	addi r6, r1, 8
/* 80166648 00163588  38 A0 00 07 */	li r5, 7
/* 8016664C 0016358C  81 83 00 00 */	lwz r12, 0(r3)
/* 80166650 00163590  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80166654 00163594  7D 89 03 A6 */	mtctr r12
/* 80166658 00163598  4E 80 04 21 */	bctrl 
/* 8016665C 0016359C  7F E3 FB 78 */	mr r3, r31
/* 80166660 001635A0  48 00 17 85 */	bl finishDisplayCarryInfo__Q24Game6PelletFv
/* 80166664 001635A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80166668 001635A8  38 60 00 01 */	li r3, 1
/* 8016666C 001635AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80166670 001635B0  7C 08 03 A6 */	mtlr r0
/* 80166674 001635B4  38 21 00 20 */	addi r1, r1, 0x20
/* 80166678 001635B8  4E 80 00 20 */	blr 
.endfn actPellet__Q24Game12InteractSuckFPQ24Game6Pellet

.fn doDirectDraw__Q24Game6PelletFR8Graphics, global
/* 8016667C 001635BC  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game6PelletFR8Graphics

.fn __ct__Q24Game6PelletFv, global
/* 80166680 001635C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80166684 001635C4  7C 08 02 A6 */	mflr r0
/* 80166688 001635C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016668C 001635CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80166690 001635D0  7C 7F 1B 78 */	mr r31, r3
/* 80166694 001635D4  48 04 1A 4D */	bl __ct__Q24Game11DynCreatureFv
/* 80166698 001635D8  3C 60 80 4B */	lis r3, __vt__Q28SysShape14MotionListener@ha
/* 8016669C 001635DC  3C 80 80 4B */	lis r4, __vt__14CarryInfoOwner@ha
/* 801666A0 001635E0  38 03 A6 6C */	addi r0, r3, __vt__Q28SysShape14MotionListener@l
/* 801666A4 001635E4  3C 60 80 4B */	lis r3, __vt__Q24Game6Pellet@ha
/* 801666A8 001635E8  90 1F 03 14 */	stw r0, 0x314(r31)
/* 801666AC 001635EC  38 A3 1F 70 */	addi r5, r3, __vt__Q24Game6Pellet@l
/* 801666B0 001635F0  38 04 C3 D8 */	addi r0, r4, __vt__14CarryInfoOwner@l
/* 801666B4 001635F4  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 801666B8 001635F8  90 1F 03 18 */	stw r0, 0x318(r31)
/* 801666BC 001635FC  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 801666C0 00163600  38 05 01 B4 */	addi r0, r5, 0x1b4
/* 801666C4 00163604  38 E5 01 C0 */	addi r7, r5, 0x1c0
/* 801666C8 00163608  90 BF 00 00 */	stw r5, 0(r31)
/* 801666CC 0016360C  38 C4 B9 88 */	addi r6, r4, __vt__Q28SysShape12BaseAnimator@l
/* 801666D0 00163610  38 A3 BE 00 */	addi r5, r3, __vt__Q28SysShape8Animator@l
/* 801666D4 00163614  38 80 00 00 */	li r4, 0
/* 801666D8 00163618  90 1F 03 14 */	stw r0, 0x314(r31)
/* 801666DC 0016361C  38 00 04 01 */	li r0, 0x401
/* 801666E0 00163620  38 60 00 08 */	li r3, 8
/* 801666E4 00163624  90 FF 03 18 */	stw r7, 0x318(r31)
/* 801666E8 00163628  90 DF 03 3C */	stw r6, 0x33c(r31)
/* 801666EC 0016362C  90 BF 03 3C */	stw r5, 0x33c(r31)
/* 801666F0 00163630  98 9F 03 54 */	stb r4, 0x354(r31)
/* 801666F4 00163634  90 9F 03 48 */	stw r4, 0x348(r31)
/* 801666F8 00163638  90 9F 03 40 */	stw r4, 0x340(r31)
/* 801666FC 0016363C  98 9F 03 54 */	stb r4, 0x354(r31)
/* 80166700 00163640  90 9F 03 4C */	stw r4, 0x34c(r31)
/* 80166704 00163644  98 9F 03 D0 */	stb r4, 0x3d0(r31)
/* 80166708 00163648  98 9F 03 E4 */	stb r4, 0x3e4(r31)
/* 8016670C 0016364C  98 9F 03 E5 */	stb r4, 0x3e5(r31)
/* 80166710 00163650  98 9F 03 E6 */	stb r4, 0x3e6(r31)
/* 80166714 00163654  98 9F 03 E7 */	stb r4, 0x3e7(r31)
/* 80166718 00163658  98 9F 03 E8 */	stb r4, 0x3e8(r31)
/* 8016671C 0016365C  98 9F 03 E9 */	stb r4, 0x3e9(r31)
/* 80166720 00163660  98 9F 03 EA */	stb r4, 0x3ea(r31)
/* 80166724 00163664  98 9F 03 EB */	stb r4, 0x3eb(r31)
/* 80166728 00163668  98 9F 03 EC */	stb r4, 0x3ec(r31)
/* 8016672C 0016366C  98 9F 03 ED */	stb r4, 0x3ed(r31)
/* 80166730 00163670  98 9F 03 EE */	stb r4, 0x3ee(r31)
/* 80166734 00163674  98 9F 03 EF */	stb r4, 0x3ef(r31)
/* 80166738 00163678  98 9F 03 F0 */	stb r4, 0x3f0(r31)
/* 8016673C 0016367C  98 9F 03 F1 */	stb r4, 0x3f1(r31)
/* 80166740 00163680  98 9F 03 F2 */	stb r4, 0x3f2(r31)
/* 80166744 00163684  98 9F 03 F3 */	stb r4, 0x3f3(r31)
/* 80166748 00163688  90 DF 04 1C */	stw r6, 0x41c(r31)
/* 8016674C 0016368C  90 BF 04 1C */	stw r5, 0x41c(r31)
/* 80166750 00163690  98 9F 04 34 */	stb r4, 0x434(r31)
/* 80166754 00163694  90 9F 04 28 */	stw r4, 0x428(r31)
/* 80166758 00163698  90 9F 04 20 */	stw r4, 0x420(r31)
/* 8016675C 0016369C  98 9F 04 34 */	stb r4, 0x434(r31)
/* 80166760 001636A0  90 9F 04 2C */	stw r4, 0x42c(r31)
/* 80166764 001636A4  90 9F 03 28 */	stw r4, 0x328(r31)
/* 80166768 001636A8  90 9F 01 74 */	stw r4, 0x174(r31)
/* 8016676C 001636AC  B0 1F 01 28 */	sth r0, 0x128(r31)
/* 80166770 001636B0  4B EB D7 35 */	bl __nw__FUl
/* 80166774 001636B4  7C 60 1B 79 */	or. r0, r3, r3
/* 80166778 001636B8  41 82 00 0C */	beq .L_80166784
/* 8016677C 001636BC  4B FC D8 E1 */	bl __ct__8CollTreeFv
/* 80166780 001636C0  7C 60 1B 78 */	mr r0, r3
.L_80166784:
/* 80166784 001636C4  90 1F 01 14 */	stw r0, 0x114(r31)
/* 80166788 001636C8  38 60 00 1C */	li r3, 0x1c
/* 8016678C 001636CC  4B EB D7 19 */	bl __nw__FUl
/* 80166790 001636D0  28 03 00 00 */	cmplwi r3, 0
/* 80166794 001636D4  41 82 00 24 */	beq .L_801667B8
/* 80166798 001636D8  3C A0 80 4B */	lis r5, "__vt__Q24Game28StateMachine<Q24Game6Pellet>"@ha
/* 8016679C 001636DC  3C 80 80 4B */	lis r4, __vt__Q24Game9PelletFSM@ha
/* 801667A0 001636E0  38 05 22 2C */	addi r0, r5, "__vt__Q24Game28StateMachine<Q24Game6Pellet>"@l
/* 801667A4 001636E4  38 A0 FF FF */	li r5, -1
/* 801667A8 001636E8  90 03 00 00 */	stw r0, 0(r3)
/* 801667AC 001636EC  38 04 52 00 */	addi r0, r4, __vt__Q24Game9PelletFSM@l
/* 801667B0 001636F0  90 A3 00 18 */	stw r5, 0x18(r3)
/* 801667B4 001636F4  90 03 00 00 */	stw r0, 0(r3)
.L_801667B8:
/* 801667B8 001636F8  90 7F 03 C8 */	stw r3, 0x3c8(r31)
/* 801667BC 001636FC  7F E4 FB 78 */	mr r4, r31
/* 801667C0 00163700  80 7F 03 C8 */	lwz r3, 0x3c8(r31)
/* 801667C4 00163704  81 83 00 00 */	lwz r12, 0(r3)
/* 801667C8 00163708  81 8C 00 08 */	lwz r12, 8(r12)
/* 801667CC 0016370C  7D 89 03 A6 */	mtctr r12
/* 801667D0 00163710  4E 80 04 21 */	bctrl 
/* 801667D4 00163714  7F E4 FB 78 */	mr r4, r31
/* 801667D8 00163718  38 7F 00 A8 */	addi r3, r31, 0xa8
/* 801667DC 0016371C  38 A0 00 08 */	li r5, 8
/* 801667E0 00163720  4B FF 06 51 */	bl alloc__Q24Game15CollisionBufferFPQ24Game10CellObjecti
/* 801667E4 00163724  38 60 00 04 */	li r3, 4
/* 801667E8 00163728  38 00 00 00 */	li r0, 0
/* 801667EC 0016372C  B0 7F 04 3E */	sth r3, 0x43e(r31)
/* 801667F0 00163730  7F E3 FB 78 */	mr r3, r31
/* 801667F4 00163734  90 1F 03 58 */	stw r0, 0x358(r31)
/* 801667F8 00163738  48 00 17 3D */	bl clearCarryColor__Q24Game6PelletFv
/* 801667FC 0016373C  38 60 00 18 */	li r3, 0x18
/* 80166800 00163740  4B EB D6 A5 */	bl __nw__FUl
/* 80166804 00163744  7C 60 1B 79 */	or. r0, r3, r3
/* 80166808 00163748  41 82 00 0C */	beq .L_80166814
/* 8016680C 0016374C  48 0C E6 ED */	bl __ct__Q24Game11PelletCarryFv
/* 80166810 00163750  7C 60 1B 78 */	mr r0, r3
.L_80166814:
/* 80166814 00163754  90 1F 03 34 */	stw r0, 0x334(r31)
/* 80166818 00163758  7F E3 FB 78 */	mr r3, r31
/* 8016681C 0016375C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80166820 00163760  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80166824 00163764  7C 08 03 A6 */	mtlr r0
/* 80166828 00163768  38 21 00 10 */	addi r1, r1, 0x10
/* 8016682C 0016376C  4E 80 00 20 */	blr 
.endfn __ct__Q24Game6PelletFv

.fn constructor__Q24Game6PelletFv, global
/* 80166830 00163770  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80166834 00163774  7C 08 02 A6 */	mflr r0
/* 80166838 00163778  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016683C 0016377C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80166840 00163780  93 C1 00 08 */	stw r30, 8(r1)
/* 80166844 00163784  7C 7E 1B 78 */	mr r30, r3
/* 80166848 00163788  38 60 00 70 */	li r3, 0x70
/* 8016684C 0016378C  4B EB D6 59 */	bl __nw__FUl
/* 80166850 00163790  7C 7F 1B 79 */	or. r31, r3, r3
/* 80166854 00163794  41 82 00 2C */	beq .L_80166880
/* 80166858 00163798  7F C4 F3 78 */	mr r4, r30
/* 8016685C 0016379C  38 A0 00 02 */	li r5, 2
/* 80166860 001637A0  48 2F 6F 45 */	bl __ct__Q23PSM11CreatureObjFPQ24Game8CreatureUc
/* 80166864 001637A4  3C 60 80 4B */	lis r3, __vt__Q23PSM9EventBase@ha
/* 80166868 001637A8  38 83 21 A4 */	addi r4, r3, __vt__Q23PSM9EventBase@l
/* 8016686C 001637AC  90 9F 00 28 */	stw r4, 0x28(r31)
/* 80166870 001637B0  38 64 00 08 */	addi r3, r4, 8
/* 80166874 001637B4  38 04 00 40 */	addi r0, r4, 0x40
/* 80166878 001637B8  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8016687C 001637BC  90 1F 00 30 */	stw r0, 0x30(r31)
.L_80166880:
/* 80166880 001637C0  93 FE 03 30 */	stw r31, 0x330(r30)
/* 80166884 001637C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80166888 001637C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016688C 001637CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80166890 001637D0  7C 08 03 A6 */	mtlr r0
/* 80166894 001637D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80166898 001637D8  4E 80 00 20 */	blr 
.endfn constructor__Q24Game6PelletFv

.fn __dt__Q23PSM11CreatureObjFv, weak
/* 8016689C 001637DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801668A0 001637E0  7C 08 02 A6 */	mflr r0
/* 801668A4 001637E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801668A8 001637E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801668AC 001637EC  7C 9F 23 78 */	mr r31, r4
/* 801668B0 001637F0  93 C1 00 08 */	stw r30, 8(r1)
/* 801668B4 001637F4  7C 7E 1B 79 */	or. r30, r3, r3
/* 801668B8 001637F8  41 82 00 64 */	beq .L_8016691C
/* 801668BC 001637FC  3C 80 80 4F */	lis r4, __vt__Q23PSM11CreatureObj@ha
/* 801668C0 00163800  38 7E 00 30 */	addi r3, r30, 0x30
/* 801668C4 00163804  38 C4 F1 44 */	addi r6, r4, __vt__Q23PSM11CreatureObj@l
/* 801668C8 00163808  38 80 00 00 */	li r4, 0
/* 801668CC 0016380C  90 DE 00 28 */	stw r6, 0x28(r30)
/* 801668D0 00163810  38 A6 00 08 */	addi r5, r6, 8
/* 801668D4 00163814  38 06 00 40 */	addi r0, r6, 0x40
/* 801668D8 00163818  90 BE 00 10 */	stw r5, 0x10(r30)
/* 801668DC 0016381C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801668E0 00163820  4B F5 33 01 */	bl __dt__Q27JAInter6ObjectFv
/* 801668E4 00163824  28 1E 00 00 */	cmplwi r30, 0
/* 801668E8 00163828  41 82 00 24 */	beq .L_8016690C
/* 801668EC 0016382C  3C 80 80 4F */	lis r4, __vt__Q23PSM8Creature@ha
/* 801668F0 00163830  7F C3 F3 78 */	mr r3, r30
/* 801668F4 00163834  38 A4 F1 CC */	addi r5, r4, __vt__Q23PSM8Creature@l
/* 801668F8 00163838  38 80 00 00 */	li r4, 0
/* 801668FC 0016383C  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80166900 00163840  38 05 00 08 */	addi r0, r5, 8
/* 80166904 00163844  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80166908 00163848  48 2F 65 5D */	bl __dt__Q23PSM7ObjBaseFv
.L_8016690C:
/* 8016690C 0016384C  7F E0 07 35 */	extsh. r0, r31
/* 80166910 00163850  40 81 00 0C */	ble .L_8016691C
/* 80166914 00163854  7F C3 F3 78 */	mr r3, r30
/* 80166918 00163858  4B EB D7 9D */	bl __dl__FPv
.L_8016691C:
/* 8016691C 0016385C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80166920 00163860  7F C3 F3 78 */	mr r3, r30
/* 80166924 00163864  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80166928 00163868  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016692C 0016386C  7C 08 03 A6 */	mtlr r0
/* 80166930 00163870  38 21 00 10 */	addi r1, r1, 0x10
/* 80166934 00163874  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM11CreatureObjFv

.fn shadowOn__Q24Game6PelletFv, global
/* 80166938 00163878  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016693C 0016387C  7C 08 02 A6 */	mflr r0
/* 80166940 00163880  7C 64 1B 78 */	mr r4, r3
/* 80166944 00163884  90 01 00 14 */	stw r0, 0x14(r1)
/* 80166948 00163888  80 0D 96 80 */	lwz r0, shadowMgr__4Game@sda21(r13)
/* 8016694C 0016388C  28 00 00 00 */	cmplwi r0, 0
/* 80166950 00163890  41 82 00 0C */	beq .L_8016695C
/* 80166954 00163894  7C 03 03 78 */	mr r3, r0
/* 80166958 00163898  48 0D B3 55 */	bl addShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_8016695C:
/* 8016695C 0016389C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80166960 001638A0  7C 08 03 A6 */	mtlr r0
/* 80166964 001638A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80166968 001638A8  4E 80 00 20 */	blr 
.endfn shadowOn__Q24Game6PelletFv

.fn shadowOff__Q24Game6PelletFv, global
/* 8016696C 001638AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80166970 001638B0  7C 08 02 A6 */	mflr r0
/* 80166974 001638B4  7C 64 1B 78 */	mr r4, r3
/* 80166978 001638B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016697C 001638BC  80 0D 96 80 */	lwz r0, shadowMgr__4Game@sda21(r13)
/* 80166980 001638C0  28 00 00 00 */	cmplwi r0, 0
/* 80166984 001638C4  41 82 00 0C */	beq .L_80166990
/* 80166988 001638C8  7C 03 03 78 */	mr r3, r0
/* 8016698C 001638CC  48 0D B3 65 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_80166990:
/* 80166990 001638D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80166994 001638D4  7C 08 03 A6 */	mtlr r0
/* 80166998 001638D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016699C 001638DC  4E 80 00 20 */	blr 
.endfn shadowOff__Q24Game6PelletFv

.fn getJAIObject__Q24Game6PelletFv, global
/* 801669A0 001638E0  80 63 03 30 */	lwz r3, 0x330(r3)
/* 801669A4 001638E4  28 03 00 00 */	cmplwi r3, 0
/* 801669A8 001638E8  4D 82 00 20 */	beqlr 
/* 801669AC 001638EC  38 63 00 30 */	addi r3, r3, 0x30
/* 801669B0 001638F0  4E 80 00 20 */	blr 
.endfn getJAIObject__Q24Game6PelletFv

.fn getPSCreature__Q24Game6PelletFv, global
/* 801669B4 001638F4  80 63 03 30 */	lwz r3, 0x330(r3)
/* 801669B8 001638F8  4E 80 00 20 */	blr 
.endfn getPSCreature__Q24Game6PelletFv

.fn getBottomRadius__Q24Game6PelletFv, global
/* 801669BC 001638FC  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 801669C0 00163900  C0 23 00 A0 */	lfs f1, 0xa0(r3)
/* 801669C4 00163904  4E 80 00 20 */	blr 
.endfn getBottomRadius__Q24Game6PelletFv

.fn getPickRadius__Q24Game6PelletFv, global
/* 801669C8 00163908  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 801669CC 0016390C  C0 23 00 B0 */	lfs f1, 0xb0(r3)
/* 801669D0 00163910  4E 80 00 20 */	blr 
.endfn getPickRadius__Q24Game6PelletFv

.fn getCylinderHeight__Q24Game6PelletFv, global
/* 801669D4 00163914  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 801669D8 00163918  C0 23 00 C0 */	lfs f1, 0xc0(r3)
/* 801669DC 0016391C  4E 80 00 20 */	blr 
.endfn getCylinderHeight__Q24Game6PelletFv

.fn getConfigIndex__Q24Game6PelletFv, global
/* 801669E0 00163920  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801669E4 00163924  7C 08 02 A6 */	mflr r0
/* 801669E8 00163928  90 01 00 14 */	stw r0, 0x14(r1)
/* 801669EC 0016392C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801669F0 00163930  7C 7F 1B 78 */	mr r31, r3
/* 801669F4 00163934  80 03 03 5C */	lwz r0, 0x35c(r3)
/* 801669F8 00163938  28 00 00 00 */	cmplwi r0, 0
/* 801669FC 0016393C  40 82 00 20 */	bne .L_80166A1C
/* 80166A00 00163940  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 80166A04 00163944  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 80166A08 00163948  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 80166A0C 0016394C  38 80 05 99 */	li r4, 0x599
/* 80166A10 00163950  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 80166A14 00163954  4C C6 31 82 */	crclr 6
/* 80166A18 00163958  4B EC 3C 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80166A1C:
/* 80166A1C 0016395C  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 80166A20 00163960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80166A24 00163964  A8 63 02 58 */	lha r3, 0x258(r3)
/* 80166A28 00163968  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80166A2C 0016396C  7C 08 03 A6 */	mtlr r0
/* 80166A30 00163970  38 21 00 10 */	addi r1, r1, 0x10
/* 80166A34 00163974  4E 80 00 20 */	blr 
.endfn getConfigIndex__Q24Game6PelletFv

.fn getConfigName__Q24Game6PelletFv, global
/* 80166A38 00163978  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 80166A3C 0016397C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80166A40 00163980  4E 80 00 20 */	blr 
.endfn getConfigName__Q24Game6PelletFv

.fn __ct__Q24Game18PelletIndexInitArgFi, global
/* 80166A44 00163984  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80166A48 00163988  7C 08 02 A6 */	mflr r0
/* 80166A4C 0016398C  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 80166A50 00163990  39 40 00 00 */	li r10, 0
/* 80166A54 00163994  90 01 00 34 */	stw r0, 0x34(r1)
/* 80166A58 00163998  38 05 A2 F4 */	addi r0, r5, __vt__Q24Game15CreatureInitArg@l
/* 80166A5C 0016399C  39 20 00 FF */	li r9, 0xff
/* 80166A60 001639A0  39 00 00 01 */	li r8, 1
/* 80166A64 001639A4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80166A68 001639A8  7C 7F 1B 78 */	mr r31, r3
/* 80166A6C 001639AC  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 80166A70 001639B0  38 E0 FF FF */	li r7, -1
/* 80166A74 001639B4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80166A78 001639B8  38 BF 00 16 */	addi r5, r31, 0x16
/* 80166A7C 001639BC  38 C1 00 08 */	addi r6, r1, 8
/* 80166A80 001639C0  90 1F 00 00 */	stw r0, 0(r31)
/* 80166A84 001639C4  38 03 A2 B8 */	addi r0, r3, __vt__Q24Game13PelletInitArg@l
/* 80166A88 001639C8  3C 60 80 4B */	lis r3, __vt__Q24Game18PelletIndexInitArg@ha
/* 80166A8C 001639CC  90 1F 00 00 */	stw r0, 0(r31)
/* 80166A90 001639D0  38 03 21 98 */	addi r0, r3, __vt__Q24Game18PelletIndexInitArg@l
/* 80166A94 001639D4  99 5F 00 1C */	stb r10, 0x1c(r31)
/* 80166A98 001639D8  B1 5F 00 14 */	sth r10, 0x14(r31)
/* 80166A9C 001639DC  99 3F 00 16 */	stb r9, 0x16(r31)
/* 80166AA0 001639E0  91 5F 00 18 */	stw r10, 0x18(r31)
/* 80166AA4 001639E4  99 5F 00 17 */	stb r10, 0x17(r31)
/* 80166AA8 001639E8  99 1F 00 04 */	stb r8, 4(r31)
/* 80166AAC 001639EC  99 5F 00 1D */	stb r10, 0x1d(r31)
/* 80166AB0 001639F0  90 FF 00 24 */	stw r7, 0x24(r31)
/* 80166AB4 001639F4  90 FF 00 20 */	stw r7, 0x20(r31)
/* 80166AB8 001639F8  99 5F 00 1E */	stb r10, 0x1e(r31)
/* 80166ABC 001639FC  99 5F 00 1F */	stb r10, 0x1f(r31)
/* 80166AC0 00163A00  90 1F 00 00 */	stw r0, 0(r31)
/* 80166AC4 00163A04  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80166AC8 00163A08  48 00 82 C1 */	bl decode__Q24Game9PelletMgrFlRUcRi
/* 80166ACC 00163A0C  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80166AD0 00163A10  88 9F 00 16 */	lbz r4, 0x16(r31)
/* 80166AD4 00163A14  48 00 85 F9 */	bl getMgrByID__Q24Game9PelletMgrFUc
/* 80166AD8 00163A18  7C 7E 1B 79 */	or. r30, r3, r3
/* 80166ADC 00163A1C  40 82 00 20 */	bne .L_80166AFC
/* 80166AE0 00163A20  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 80166AE4 00163A24  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 80166AE8 00163A28  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 80166AEC 00163A2C  38 80 05 B9 */	li r4, 0x5b9
/* 80166AF0 00163A30  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 80166AF4 00163A34  4C C6 31 82 */	crclr 6
/* 80166AF8 00163A38  4B EC 3B 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80166AFC:
/* 80166AFC 00163A3C  80 81 00 08 */	lwz r4, 8(r1)
/* 80166B00 00163A40  7F C3 F3 78 */	mr r3, r30
/* 80166B04 00163A44  48 00 52 85 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 80166B08 00163A48  80 03 00 40 */	lwz r0, 0x40(r3)
/* 80166B0C 00163A4C  90 1F 00 08 */	stw r0, 8(r31)
/* 80166B10 00163A50  80 01 00 08 */	lwz r0, 8(r1)
/* 80166B14 00163A54  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80166B18 00163A58  4B F6 2A 89 */	bl rand
/* 80166B1C 00163A5C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80166B20 00163A60  3C 00 43 30 */	lis r0, 0x4330
/* 80166B24 00163A64  90 61 00 14 */	stw r3, 0x14(r1)
/* 80166B28 00163A68  7F E3 FB 78 */	mr r3, r31
/* 80166B2C 00163A6C  C8 62 A5 D0 */	lfd f3, lbl_80518930@sda21(r2)
/* 80166B30 00163A70  90 01 00 10 */	stw r0, 0x10(r1)
/* 80166B34 00163A74  C0 22 A5 E0 */	lfs f1, lbl_80518940@sda21(r2)
/* 80166B38 00163A78  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 80166B3C 00163A7C  C0 02 A5 E4 */	lfs f0, lbl_80518944@sda21(r2)
/* 80166B40 00163A80  EC 42 18 28 */	fsubs f2, f2, f3
/* 80166B44 00163A84  EC 22 08 24 */	fdivs f1, f2, f1
/* 80166B48 00163A88  EC 00 00 72 */	fmuls f0, f0, f1
/* 80166B4C 00163A8C  FC 00 00 1E */	fctiwz f0, f0
/* 80166B50 00163A90  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80166B54 00163A94  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80166B58 00163A98  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80166B5C 00163A9C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80166B60 00163AA0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80166B64 00163AA4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80166B68 00163AA8  7C 08 03 A6 */	mtlr r0
/* 80166B6C 00163AAC  38 21 00 30 */	addi r1, r1, 0x30
/* 80166B70 00163AB0  4E 80 00 20 */	blr 
.endfn __ct__Q24Game18PelletIndexInitArgFi

.fn __ct__Q24Game19PelletNumberInitArgFii, global
/* 80166B74 00163AB4  3D 00 80 4B */	lis r8, __vt__Q24Game15CreatureInitArg@ha
/* 80166B78 00163AB8  3C E0 80 4B */	lis r7, __vt__Q24Game13PelletInitArg@ha
/* 80166B7C 00163ABC  39 08 A2 F4 */	addi r8, r8, __vt__Q24Game15CreatureInitArg@l
/* 80166B80 00163AC0  39 40 00 00 */	li r10, 0
/* 80166B84 00163AC4  91 03 00 00 */	stw r8, 0(r3)
/* 80166B88 00163AC8  38 07 A2 B8 */	addi r0, r7, __vt__Q24Game13PelletInitArg@l
/* 80166B8C 00163ACC  39 20 00 FF */	li r9, 0xff
/* 80166B90 00163AD0  39 00 00 01 */	li r8, 1
/* 80166B94 00163AD4  90 03 00 00 */	stw r0, 0(r3)
/* 80166B98 00163AD8  3C C0 80 4B */	lis r6, __vt__Q24Game19PelletNumberInitArg@ha
/* 80166B9C 00163ADC  38 E0 FF FF */	li r7, -1
/* 80166BA0 00163AE0  28 04 00 14 */	cmplwi r4, 0x14
/* 80166BA4 00163AE4  99 43 00 1C */	stb r10, 0x1c(r3)
/* 80166BA8 00163AE8  38 06 21 8C */	addi r0, r6, __vt__Q24Game19PelletNumberInitArg@l
/* 80166BAC 00163AEC  B1 43 00 14 */	sth r10, 0x14(r3)
/* 80166BB0 00163AF0  99 23 00 16 */	stb r9, 0x16(r3)
/* 80166BB4 00163AF4  91 43 00 18 */	stw r10, 0x18(r3)
/* 80166BB8 00163AF8  99 43 00 17 */	stb r10, 0x17(r3)
/* 80166BBC 00163AFC  99 03 00 04 */	stb r8, 4(r3)
/* 80166BC0 00163B00  99 43 00 1D */	stb r10, 0x1d(r3)
/* 80166BC4 00163B04  90 E3 00 24 */	stw r7, 0x24(r3)
/* 80166BC8 00163B08  90 E3 00 20 */	stw r7, 0x20(r3)
/* 80166BCC 00163B0C  99 43 00 1E */	stb r10, 0x1e(r3)
/* 80166BD0 00163B10  99 43 00 1F */	stb r10, 0x1f(r3)
/* 80166BD4 00163B14  90 03 00 00 */	stw r0, 0(r3)
/* 80166BD8 00163B18  41 81 00 6C */	bgt .L_80166C44
/* 80166BDC 00163B1C  3C C0 80 4B */	lis r6, lbl_804B1A6C@ha
/* 80166BE0 00163B20  54 80 10 3A */	slwi r0, r4, 2
/* 80166BE4 00163B24  38 86 1A 6C */	addi r4, r6, lbl_804B1A6C@l
/* 80166BE8 00163B28  7C 04 00 2E */	lwzx r0, r4, r0
/* 80166BEC 00163B2C  7C 09 03 A6 */	mtctr r0
/* 80166BF0 00163B30  4E 80 04 20 */	bctr 
.L_80166BF4:
/* 80166BF4 00163B34  38 02 A5 E8 */	addi r0, r2, lbl_80518948@sda21
/* 80166BF8 00163B38  90 03 00 08 */	stw r0, 8(r3)
/* 80166BFC 00163B3C  91 43 00 10 */	stw r10, 0x10(r3)
/* 80166C00 00163B40  48 00 00 54 */	b .L_80166C54
.L_80166C04:
/* 80166C04 00163B44  38 02 A5 F0 */	addi r0, r2, lbl_80518950@sda21
/* 80166C08 00163B48  90 03 00 08 */	stw r0, 8(r3)
/* 80166C0C 00163B4C  91 03 00 10 */	stw r8, 0x10(r3)
/* 80166C10 00163B50  48 00 00 44 */	b .L_80166C54
.L_80166C14:
/* 80166C14 00163B54  3C 80 80 48 */	lis r4, lbl_8047E374@ha
/* 80166C18 00163B58  38 00 00 02 */	li r0, 2
/* 80166C1C 00163B5C  38 84 E3 74 */	addi r4, r4, lbl_8047E374@l
/* 80166C20 00163B60  90 83 00 08 */	stw r4, 8(r3)
/* 80166C24 00163B64  90 03 00 10 */	stw r0, 0x10(r3)
/* 80166C28 00163B68  48 00 00 2C */	b .L_80166C54
.L_80166C2C:
/* 80166C2C 00163B6C  3C 80 80 48 */	lis r4, lbl_8047E380@ha
/* 80166C30 00163B70  38 00 00 03 */	li r0, 3
/* 80166C34 00163B74  38 84 E3 80 */	addi r4, r4, lbl_8047E380@l
/* 80166C38 00163B78  90 83 00 08 */	stw r4, 8(r3)
/* 80166C3C 00163B7C  90 03 00 10 */	stw r0, 0x10(r3)
/* 80166C40 00163B80  48 00 00 14 */	b .L_80166C54
.L_80166C44:
/* 80166C44 00163B84  38 82 A5 E8 */	addi r4, r2, lbl_80518948@sda21
/* 80166C48 00163B88  38 00 00 00 */	li r0, 0
/* 80166C4C 00163B8C  90 83 00 08 */	stw r4, 8(r3)
/* 80166C50 00163B90  90 03 00 10 */	stw r0, 0x10(r3)
.L_80166C54:
/* 80166C54 00163B94  90 A3 00 0C */	stw r5, 0xc(r3)
/* 80166C58 00163B98  38 00 00 00 */	li r0, 0
/* 80166C5C 00163B9C  98 03 00 16 */	stb r0, 0x16(r3)
/* 80166C60 00163BA0  4E 80 00 20 */	blr 
.endfn __ct__Q24Game19PelletNumberInitArgFii

.fn isPickable__Q24Game6PelletFv, global
/* 80166C64 00163BA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80166C68 00163BA8  7C 08 02 A6 */	mflr r0
/* 80166C6C 00163BAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80166C70 00163BB0  80 63 03 CC */	lwz r3, 0x3cc(r3)
/* 80166C74 00163BB4  28 03 00 00 */	cmplwi r3, 0
/* 80166C78 00163BB8  41 82 00 18 */	beq .L_80166C90
/* 80166C7C 00163BBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80166C80 00163BC0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80166C84 00163BC4  7D 89 03 A6 */	mtctr r12
/* 80166C88 00163BC8  4E 80 04 21 */	bctrl 
/* 80166C8C 00163BCC  48 00 00 08 */	b .L_80166C94
.L_80166C90:
/* 80166C90 00163BD0  38 60 00 00 */	li r3, 0
.L_80166C94:
/* 80166C94 00163BD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80166C98 00163BD8  7C 08 03 A6 */	mtlr r0
/* 80166C9C 00163BDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80166CA0 00163BE0  4E 80 00 20 */	blr 
.endfn isPickable__Q24Game6PelletFv

.fn isPickable__Q24Game11PelletStateFv, weak
/* 80166CA4 00163BE4  38 60 00 00 */	li r3, 0
/* 80166CA8 00163BE8  4E 80 00 20 */	blr 
.endfn isPickable__Q24Game11PelletStateFv

.fn onKill__Q24Game6PelletFPQ24Game15CreatureKillArg, global
/* 80166CAC 00163BEC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80166CB0 00163BF0  7C 08 02 A6 */	mflr r0
/* 80166CB4 00163BF4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80166CB8 00163BF8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80166CBC 00163BFC  7C 7F 1B 78 */	mr r31, r3
/* 80166CC0 00163C00  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80166CC4 00163C04  7C 9E 23 78 */	mr r30, r4
/* 80166CC8 00163C08  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80166CCC 00163C0C  80 05 00 44 */	lwz r0, 0x44(r5)
/* 80166CD0 00163C10  2C 00 00 01 */	cmpwi r0, 1
/* 80166CD4 00163C14  40 82 00 24 */	bne .L_80166CF8
/* 80166CD8 00163C18  80 7F 03 C8 */	lwz r3, 0x3c8(r31)
/* 80166CDC 00163C1C  7F E4 FB 78 */	mr r4, r31
/* 80166CE0 00163C20  38 A0 00 00 */	li r5, 0
/* 80166CE4 00163C24  38 C0 00 00 */	li r6, 0
/* 80166CE8 00163C28  81 83 00 00 */	lwz r12, 0(r3)
/* 80166CEC 00163C2C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80166CF0 00163C30  7D 89 03 A6 */	mtctr r12
/* 80166CF4 00163C34  4E 80 04 21 */	bctrl 
.L_80166CF8:
/* 80166CF8 00163C38  7F E3 FB 78 */	mr r3, r31
/* 80166CFC 00163C3C  38 80 00 00 */	li r4, 0
/* 80166D00 00163C40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80166D04 00163C44  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80166D08 00163C48  7D 89 03 A6 */	mtctr r12
/* 80166D0C 00163C4C  4E 80 04 21 */	bctrl 
/* 80166D10 00163C50  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80166D14 00163C54  28 03 00 00 */	cmplwi r3, 0
/* 80166D18 00163C58  41 82 00 0C */	beq .L_80166D24
/* 80166D1C 00163C5C  7F E4 FB 78 */	mr r4, r31
/* 80166D20 00163C60  48 0D AF D1 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_80166D24:
/* 80166D24 00163C64  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 80166D28 00163C68  80 06 00 44 */	lwz r0, 0x44(r6)
/* 80166D2C 00163C6C  2C 00 00 01 */	cmpwi r0, 1
/* 80166D30 00163C70  40 82 00 38 */	bne .L_80166D68
/* 80166D34 00163C74  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80166D38 00163C78  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessagePelletDead@ha
/* 80166D3C 00163C7C  38 A4 05 90 */	addi r5, r4, __vt__Q24Game11GameMessage@l
/* 80166D40 00163C80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80166D44 00163C84  38 03 61 44 */	addi r0, r3, __vt__Q24Game21GameMessagePelletDead@l
/* 80166D48 00163C88  38 81 00 08 */	addi r4, r1, 8
/* 80166D4C 00163C8C  90 A1 00 08 */	stw r5, 8(r1)
/* 80166D50 00163C90  90 01 00 08 */	stw r0, 8(r1)
/* 80166D54 00163C94  80 66 00 58 */	lwz r3, 0x58(r6)
/* 80166D58 00163C98  81 83 00 00 */	lwz r12, 0(r3)
/* 80166D5C 00163C9C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80166D60 00163CA0  7D 89 03 A6 */	mtctr r12
/* 80166D64 00163CA4  4E 80 04 21 */	bctrl 
.L_80166D68:
/* 80166D68 00163CA8  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80166D6C 00163CAC  38 7F 01 38 */	addi r3, r31, 0x138
/* 80166D70 00163CB0  C0 22 A5 B0 */	lfs f1, lbl_80518910@sda21(r2)
/* 80166D74 00163CB4  38 81 00 28 */	addi r4, r1, 0x28
/* 80166D78 00163CB8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80166D7C 00163CBC  38 A1 00 1C */	addi r5, r1, 0x1c
/* 80166D80 00163CC0  38 C1 00 10 */	addi r6, r1, 0x10
/* 80166D84 00163CC4  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80166D88 00163CC8  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80166D8C 00163CCC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80166D90 00163CD0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80166D94 00163CD4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80166D98 00163CD8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80166D9C 00163CDC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80166DA0 00163CE0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80166DA4 00163CE4  48 2C 15 35 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 80166DA8 00163CE8  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 80166DAC 00163CEC  28 00 00 00 */	cmplwi r0, 0
/* 80166DB0 00163CF0  41 82 00 80 */	beq .L_80166E30
/* 80166DB4 00163CF4  C0 42 A5 B4 */	lfs f2, lbl_80518914@sda21(r2)
/* 80166DB8 00163CF8  38 7F 01 38 */	addi r3, r31, 0x138
/* 80166DBC 00163CFC  C0 22 A5 F8 */	lfs f1, lbl_80518958@sda21(r2)
/* 80166DC0 00163D00  D0 5F 04 44 */	stfs f2, 0x444(r31)
/* 80166DC4 00163D04  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 80166DC8 00163D08  D0 5F 04 48 */	stfs f2, 0x448(r31)
/* 80166DCC 00163D0C  D0 5F 04 4C */	stfs f2, 0x44c(r31)
/* 80166DD0 00163D10  D0 3F 04 50 */	stfs f1, 0x450(r31)
/* 80166DD4 00163D14  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 80166DD8 00163D18  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 80166DDC 00163D1C  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 80166DE0 00163D20  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 80166DE4 00163D24  80 84 00 08 */	lwz r4, 8(r4)
/* 80166DE8 00163D28  38 84 00 24 */	addi r4, r4, 0x24
/* 80166DEC 00163D2C  4B F8 34 E1 */	bl PSMTXCopy
/* 80166DF0 00163D30  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80166DF4 00163D34  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 80166DF8 00163D38  80 63 00 08 */	lwz r3, 8(r3)
/* 80166DFC 00163D3C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80166E00 00163D40  C0 1F 01 6C */	lfs f0, 0x16c(r31)
/* 80166E04 00163D44  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80166E08 00163D48  C0 1F 01 70 */	lfs f0, 0x170(r31)
/* 80166E0C 00163D4C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 80166E10 00163D50  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80166E14 00163D54  48 2C 1E 3D */	bl clearAnimatorAll__Q28SysShape5ModelFv
/* 80166E18 00163D58  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80166E1C 00163D5C  80 63 00 08 */	lwz r3, 8(r3)
/* 80166E20 00163D60  81 83 00 00 */	lwz r12, 0(r3)
/* 80166E24 00163D64  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80166E28 00163D68  7D 89 03 A6 */	mtctr r12
/* 80166E2C 00163D6C  4E 80 04 21 */	bctrl 
.L_80166E30:
/* 80166E30 00163D70  7F E3 FB 78 */	mr r3, r31
/* 80166E34 00163D74  48 04 13 D1 */	bl releaseParticles__Q24Game11DynCreatureFv
/* 80166E38 00163D78  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80166E3C 00163D7C  4B FC D3 79 */	bl release__8CollTreeFv
/* 80166E40 00163D80  80 7F 04 54 */	lwz r3, 0x454(r31)
/* 80166E44 00163D84  7F E4 FB 78 */	mr r4, r31
/* 80166E48 00163D88  81 83 00 00 */	lwz r12, 0(r3)
/* 80166E4C 00163D8C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80166E50 00163D90  7D 89 03 A6 */	mtctr r12
/* 80166E54 00163D94  4E 80 04 21 */	bctrl 
/* 80166E58 00163D98  28 1E 00 00 */	cmplwi r30, 0
/* 80166E5C 00163D9C  41 82 00 10 */	beq .L_80166E6C
/* 80166E60 00163DA0  88 1E 00 08 */	lbz r0, 8(r30)
/* 80166E64 00163DA4  28 00 00 00 */	cmplwi r0, 0
/* 80166E68 00163DA8  40 82 00 20 */	bne .L_80166E88
.L_80166E6C:
/* 80166E6C 00163DAC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80166E70 00163DB0  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80166E74 00163DB4  2C 00 00 01 */	cmpwi r0, 1
/* 80166E78 00163DB8  40 82 00 28 */	bne .L_80166EA0
/* 80166E7C 00163DBC  88 1F 03 2C */	lbz r0, 0x32c(r31)
/* 80166E80 00163DC0  28 00 00 03 */	cmplwi r0, 3
/* 80166E84 00163DC4  40 82 00 1C */	bne .L_80166EA0
.L_80166E88:
/* 80166E88 00163DC8  80 7F 04 54 */	lwz r3, 0x454(r31)
/* 80166E8C 00163DCC  7F E4 FB 78 */	mr r4, r31
/* 80166E90 00163DD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80166E94 00163DD4  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 80166E98 00163DD8  7D 89 03 A6 */	mtctr r12
/* 80166E9C 00163DDC  4E 80 04 21 */	bctrl 
.L_80166EA0:
/* 80166EA0 00163DE0  7F E3 FB 78 */	mr r3, r31
/* 80166EA4 00163DE4  48 00 0F 41 */	bl finishDisplayCarryInfo__Q24Game6PelletFv
/* 80166EA8 00163DE8  80 7F 03 58 */	lwz r3, 0x358(r31)
/* 80166EAC 00163DEC  28 03 00 00 */	cmplwi r3, 0
/* 80166EB0 00163DF0  41 82 00 24 */	beq .L_80166ED4
/* 80166EB4 00163DF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80166EB8 00163DF8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80166EBC 00163DFC  7D 89 03 A6 */	mtctr r12
/* 80166EC0 00163E00  4E 80 04 21 */	bctrl 
/* 80166EC4 00163E04  80 7F 03 58 */	lwz r3, 0x358(r31)
/* 80166EC8 00163E08  38 00 00 00 */	li r0, 0
/* 80166ECC 00163E0C  90 03 00 04 */	stw r0, 4(r3)
/* 80166ED0 00163E10  90 1F 03 58 */	stw r0, 0x358(r31)
.L_80166ED4:
/* 80166ED4 00163E14  7F E3 FB 78 */	mr r3, r31
/* 80166ED8 00163E18  81 9F 00 00 */	lwz r12, 0(r31)
/* 80166EDC 00163E1C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80166EE0 00163E20  7D 89 03 A6 */	mtctr r12
/* 80166EE4 00163E24  4E 80 04 21 */	bctrl 
/* 80166EE8 00163E28  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80166EEC 00163E2C  28 00 00 03 */	cmplwi r0, 3
/* 80166EF0 00163E30  41 82 00 24 */	beq .L_80166F14
/* 80166EF4 00163E34  7F E3 FB 78 */	mr r3, r31
/* 80166EF8 00163E38  81 9F 00 00 */	lwz r12, 0(r31)
/* 80166EFC 00163E3C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80166F00 00163E40  7D 89 03 A6 */	mtctr r12
/* 80166F04 00163E44  4E 80 04 21 */	bctrl 
/* 80166F08 00163E48  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80166F0C 00163E4C  28 00 00 04 */	cmplwi r0, 4
/* 80166F10 00163E50  40 82 00 0C */	bne .L_80166F1C
.L_80166F14:
/* 80166F14 00163E54  7F E3 FB 78 */	mr r3, r31
/* 80166F18 00163E58  48 0B 76 DD */	bl exit__Q25Radar3MgrFPQ24Game15TPositionObject
.L_80166F1C:
/* 80166F1C 00163E5C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80166F20 00163E60  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80166F24 00163E64  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80166F28 00163E68  7C 08 03 A6 */	mtlr r0
/* 80166F2C 00163E6C  38 21 00 40 */	addi r1, r1, 0x40
/* 80166F30 00163E70  4E 80 00 20 */	blr 
.endfn onKill__Q24Game6PelletFPQ24Game15CreatureKillArg

.fn "start__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg", weak
/* 80166F34 00163E74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80166F38 00163E78  7C 08 02 A6 */	mflr r0
/* 80166F3C 00163E7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80166F40 00163E80  38 00 00 00 */	li r0, 0
/* 80166F44 00163E84  90 04 03 CC */	stw r0, 0x3cc(r4)
/* 80166F48 00163E88  81 83 00 00 */	lwz r12, 0(r3)
/* 80166F4C 00163E8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80166F50 00163E90  7D 89 03 A6 */	mtctr r12
/* 80166F54 00163E94  4E 80 04 21 */	bctrl 
/* 80166F58 00163E98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80166F5C 00163E9C  7C 08 03 A6 */	mtlr r0
/* 80166F60 00163EA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80166F64 00163EA4  4E 80 00 20 */	blr 
.endfn "start__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"

.fn onInit__Q24Game6PelletFPQ24Game15CreatureInitArg, global
/* 80166F68 00163EA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80166F6C 00163EAC  7C 08 02 A6 */	mflr r0
/* 80166F70 00163EB0  38 A0 FF FF */	li r5, -1
/* 80166F74 00163EB4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80166F78 00163EB8  38 00 00 00 */	li r0, 0
/* 80166F7C 00163EBC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80166F80 00163EC0  7C 9F 23 78 */	mr r31, r4
/* 80166F84 00163EC4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80166F88 00163EC8  7C 7E 1B 78 */	mr r30, r3
/* 80166F8C 00163ECC  90 A3 03 DC */	stw r5, 0x3dc(r3)
/* 80166F90 00163ED0  90 A3 03 D8 */	stw r5, 0x3d8(r3)
/* 80166F94 00163ED4  98 03 03 BC */	stb r0, 0x3bc(r3)
/* 80166F98 00163ED8  98 03 03 24 */	stb r0, 0x324(r3)
/* 80166F9C 00163EDC  98 03 03 25 */	stb r0, 0x325(r3)
/* 80166FA0 00163EE0  48 00 45 25 */	bl clearDiscoverDisable__Q24Game6PelletFv
/* 80166FA4 00163EE4  38 00 00 00 */	li r0, 0
/* 80166FA8 00163EE8  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80166FAC 00163EEC  90 1E 03 C0 */	stw r0, 0x3c0(r30)
/* 80166FB0 00163EF0  7F C3 F3 78 */	mr r3, r30
/* 80166FB4 00163EF4  D0 1E 03 E0 */	stfs f0, 0x3e0(r30)
/* 80166FB8 00163EF8  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 80166FBC 00163EFC  98 1E 03 11 */	stb r0, 0x311(r30)
/* 80166FC0 00163F00  D0 1E 03 B8 */	stfs f0, 0x3b8(r30)
/* 80166FC4 00163F04  D0 1E 04 38 */	stfs f0, 0x438(r30)
/* 80166FC8 00163F08  98 1E 03 C4 */	stb r0, 0x3c4(r30)
/* 80166FCC 00163F0C  98 1E 03 D0 */	stb r0, 0x3d0(r30)
/* 80166FD0 00163F10  90 1E 03 98 */	stw r0, 0x398(r30)
/* 80166FD4 00163F14  48 03 8A C9 */	bl clearCapture__Q24Game8CreatureFv
/* 80166FD8 00163F18  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80166FDC 00163F1C  28 1F 00 00 */	cmplwi r31, 0
/* 80166FE0 00163F20  D0 1E 04 18 */	stfs f0, 0x418(r30)
/* 80166FE4 00163F24  40 82 00 20 */	bne .L_80167004
/* 80166FE8 00163F28  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 80166FEC 00163F2C  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 80166FF0 00163F30  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 80166FF4 00163F34  38 80 06 60 */	li r4, 0x660
/* 80166FF8 00163F38  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 80166FFC 00163F3C  4C C6 31 82 */	crclr 6
/* 80167000 00163F40  4B EC 36 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80167004:
/* 80167004 00163F44  A0 1F 00 14 */	lhz r0, 0x14(r31)
/* 80167008 00163F48  28 00 00 00 */	cmplwi r0, 0
/* 8016700C 00163F4C  40 82 00 38 */	bne .L_80167044
/* 80167010 00163F50  80 7E 03 C8 */	lwz r3, 0x3c8(r30)
/* 80167014 00163F54  7F C4 F3 78 */	mr r4, r30
/* 80167018 00163F58  38 A0 00 00 */	li r5, 0
/* 8016701C 00163F5C  38 C0 00 00 */	li r6, 0
/* 80167020 00163F60  81 83 00 00 */	lwz r12, 0(r3)
/* 80167024 00163F64  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80167028 00163F68  7D 89 03 A6 */	mtctr r12
/* 8016702C 00163F6C  4E 80 04 21 */	bctrl 
/* 80167030 00163F70  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 80167034 00163F74  D0 1E 01 68 */	stfs f0, 0x168(r30)
/* 80167038 00163F78  D0 1E 01 6C */	stfs f0, 0x16c(r30)
/* 8016703C 00163F7C  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 80167040 00163F80  48 00 00 9C */	b .L_801670DC
.L_80167044:
/* 80167044 00163F84  28 00 00 03 */	cmplwi r0, 3
/* 80167048 00163F88  40 82 00 28 */	bne .L_80167070
/* 8016704C 00163F8C  80 7E 03 C8 */	lwz r3, 0x3c8(r30)
/* 80167050 00163F90  7F C4 F3 78 */	mr r4, r30
/* 80167054 00163F94  38 A0 00 06 */	li r5, 6
/* 80167058 00163F98  38 C0 00 00 */	li r6, 0
/* 8016705C 00163F9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80167060 00163FA0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80167064 00163FA4  7D 89 03 A6 */	mtctr r12
/* 80167068 00163FA8  4E 80 04 21 */	bctrl 
/* 8016706C 00163FAC  48 00 00 70 */	b .L_801670DC
.L_80167070:
/* 80167070 00163FB0  28 00 00 01 */	cmplwi r0, 1
/* 80167074 00163FB4  40 82 00 38 */	bne .L_801670AC
/* 80167078 00163FB8  80 7E 03 C8 */	lwz r3, 0x3c8(r30)
/* 8016707C 00163FBC  7F C4 F3 78 */	mr r4, r30
/* 80167080 00163FC0  38 A0 00 04 */	li r5, 4
/* 80167084 00163FC4  38 C0 00 00 */	li r6, 0
/* 80167088 00163FC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016708C 00163FCC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80167090 00163FD0  7D 89 03 A6 */	mtctr r12
/* 80167094 00163FD4  4E 80 04 21 */	bctrl 
/* 80167098 00163FD8  C0 02 A5 FC */	lfs f0, lbl_8051895C@sda21(r2)
/* 8016709C 00163FDC  D0 1E 01 68 */	stfs f0, 0x168(r30)
/* 801670A0 00163FE0  D0 1E 01 6C */	stfs f0, 0x16c(r30)
/* 801670A4 00163FE4  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 801670A8 00163FE8  48 00 00 34 */	b .L_801670DC
.L_801670AC:
/* 801670AC 00163FEC  80 7E 03 C8 */	lwz r3, 0x3c8(r30)
/* 801670B0 00163FF0  7F C4 F3 78 */	mr r4, r30
/* 801670B4 00163FF4  38 A0 00 05 */	li r5, 5
/* 801670B8 00163FF8  38 C0 00 00 */	li r6, 0
/* 801670BC 00163FFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801670C0 00164000  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801670C4 00164004  7D 89 03 A6 */	mtctr r12
/* 801670C8 00164008  4E 80 04 21 */	bctrl 
/* 801670CC 0016400C  C0 02 A5 FC */	lfs f0, lbl_8051895C@sda21(r2)
/* 801670D0 00164010  D0 1E 01 68 */	stfs f0, 0x168(r30)
/* 801670D4 00164014  D0 1E 01 6C */	stfs f0, 0x16c(r30)
/* 801670D8 00164018  D0 1E 01 70 */	stfs f0, 0x170(r30)
.L_801670DC:
/* 801670DC 0016401C  38 00 00 00 */	li r0, 0
/* 801670E0 00164020  90 1E 03 F8 */	stw r0, 0x3f8(r30)
/* 801670E4 00164024  90 1E 03 FC */	stw r0, 0x3fc(r30)
/* 801670E8 00164028  90 1E 04 00 */	stw r0, 0x400(r30)
/* 801670EC 0016402C  90 1E 04 04 */	stw r0, 0x404(r30)
/* 801670F0 00164030  90 1E 04 08 */	stw r0, 0x408(r30)
/* 801670F4 00164034  90 1E 04 0C */	stw r0, 0x40c(r30)
/* 801670F8 00164038  90 1E 04 10 */	stw r0, 0x410(r30)
/* 801670FC 0016403C  90 1E 04 14 */	stw r0, 0x414(r30)
/* 80167100 00164040  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80167104 00164044  B0 1E 04 3C */	sth r0, 0x43c(r30)
/* 80167108 00164048  80 7E 04 54 */	lwz r3, 0x454(r30)
/* 8016710C 0016404C  80 9F 00 08 */	lwz r4, 8(r31)
/* 80167110 00164050  80 63 00 08 */	lwz r3, 8(r3)
/* 80167114 00164054  48 04 D3 11 */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 80167118 00164058  90 7E 03 5C */	stw r3, 0x35c(r30)
/* 8016711C 0016405C  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 80167120 00164060  A0 03 02 44 */	lhz r0, 0x244(r3)
/* 80167124 00164064  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80167128 00164068  40 82 00 18 */	bne .L_80167140
/* 8016712C 0016406C  7F C3 F3 78 */	mr r3, r30
/* 80167130 00164070  81 9E 00 00 */	lwz r12, 0(r30)
/* 80167134 00164074  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 80167138 00164078  7D 89 03 A6 */	mtctr r12
/* 8016713C 0016407C  4E 80 04 21 */	bctrl 
.L_80167140:
/* 80167140 00164080  88 1F 00 1D */	lbz r0, 0x1d(r31)
/* 80167144 00164084  28 00 00 00 */	cmplwi r0, 0
/* 80167148 00164088  41 82 00 2C */	beq .L_80167174
/* 8016714C 0016408C  38 60 FF FF */	li r3, -1
/* 80167150 00164090  48 06 9D 11 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80167154 00164094  90 7E 03 D8 */	stw r3, 0x3d8(r30)
/* 80167158 00164098  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8016715C 0016409C  80 1E 03 D8 */	lwz r0, 0x3d8(r30)
/* 80167160 001640A0  80 63 01 20 */	lwz r3, 0x120(r3)
/* 80167164 001640A4  7C 00 18 00 */	cmpw r0, r3
/* 80167168 001640A8  40 81 00 14 */	ble .L_8016717C
/* 8016716C 001640AC  90 7E 03 D8 */	stw r3, 0x3d8(r30)
/* 80167170 001640B0  48 00 00 0C */	b .L_8016717C
.L_80167174:
/* 80167174 001640B4  38 00 FF FF */	li r0, -1
/* 80167178 001640B8  90 1E 03 D8 */	stw r0, 0x3d8(r30)
.L_8016717C:
/* 8016717C 001640BC  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80167180 001640C0  2C 03 FF FF */	cmpwi r3, -1
/* 80167184 001640C4  41 82 00 1C */	beq .L_801671A0
/* 80167188 001640C8  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8016718C 001640CC  2C 00 FF FF */	cmpwi r0, -1
/* 80167190 001640D0  41 82 00 10 */	beq .L_801671A0
/* 80167194 001640D4  90 7E 03 D8 */	stw r3, 0x3d8(r30)
/* 80167198 001640D8  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8016719C 001640DC  90 1E 03 DC */	stw r0, 0x3dc(r30)
.L_801671A0:
/* 801671A0 001640E0  88 1E 02 F1 */	lbz r0, 0x2f1(r30)
/* 801671A4 001640E4  38 82 A6 00 */	addi r4, r2, lbl_80518960@sda21
/* 801671A8 001640E8  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 801671AC 001640EC  98 1E 02 F1 */	stb r0, 0x2f1(r30)
/* 801671B0 001640F0  88 1E 02 F1 */	lbz r0, 0x2f1(r30)
/* 801671B4 001640F4  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 801671B8 001640F8  98 1E 02 F1 */	stb r0, 0x2f1(r30)
/* 801671BC 001640FC  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801671C0 00164100  B0 1E 04 3E */	sth r0, 0x43e(r30)
/* 801671C4 00164104  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 801671C8 00164108  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801671CC 0016410C  4B F6 34 F5 */	bl strcmp
/* 801671D0 00164110  2C 03 00 00 */	cmpwi r3, 0
/* 801671D4 00164114  40 82 00 10 */	bne .L_801671E4
/* 801671D8 00164118  38 00 00 00 */	li r0, 0
/* 801671DC 0016411C  98 1E 03 2C */	stb r0, 0x32c(r30)
/* 801671E0 00164120  48 00 00 30 */	b .L_80167210
.L_801671E4:
/* 801671E4 00164124  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 801671E8 00164128  38 82 A6 08 */	addi r4, r2, lbl_80518968@sda21
/* 801671EC 0016412C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801671F0 00164130  4B F6 34 D1 */	bl strcmp
/* 801671F4 00164134  2C 03 00 00 */	cmpwi r3, 0
/* 801671F8 00164138  40 82 00 10 */	bne .L_80167208
/* 801671FC 0016413C  38 00 00 01 */	li r0, 1
/* 80167200 00164140  98 1E 03 2C */	stb r0, 0x32c(r30)
/* 80167204 00164144  48 00 00 0C */	b .L_80167210
.L_80167208:
/* 80167208 00164148  38 00 00 02 */	li r0, 2
/* 8016720C 0016414C  98 1E 03 2C */	stb r0, 0x32c(r30)
.L_80167210:
/* 80167210 00164150  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 80167214 00164154  80 8D 84 84 */	lwz r4, cBedamaYellow__13VsOtakaraName@sda21(r13)
/* 80167218 00164158  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8016721C 0016415C  4B F6 34 A5 */	bl strcmp
/* 80167220 00164160  2C 03 00 00 */	cmpwi r3, 0
/* 80167224 00164164  40 82 00 10 */	bne .L_80167234
/* 80167228 00164168  38 00 00 06 */	li r0, 6
/* 8016722C 0016416C  98 1E 03 2C */	stb r0, 0x32c(r30)
/* 80167230 00164170  48 00 00 6C */	b .L_8016729C
.L_80167234:
/* 80167234 00164174  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 80167238 00164178  80 8D 84 80 */	lwz r4, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 8016723C 0016417C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80167240 00164180  4B F6 34 81 */	bl strcmp
/* 80167244 00164184  2C 03 00 00 */	cmpwi r3, 0
/* 80167248 00164188  40 82 00 10 */	bne .L_80167258
/* 8016724C 0016418C  38 00 00 04 */	li r0, 4
/* 80167250 00164190  98 1E 03 2C */	stb r0, 0x32c(r30)
/* 80167254 00164194  48 00 00 48 */	b .L_8016729C
.L_80167258:
/* 80167258 00164198  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8016725C 0016419C  80 8D 84 7C */	lwz r4, cBedamaBlue__13VsOtakaraName@sda21(r13)
/* 80167260 001641A0  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80167264 001641A4  4B F6 34 5D */	bl strcmp
/* 80167268 001641A8  2C 03 00 00 */	cmpwi r3, 0
/* 8016726C 001641AC  40 82 00 10 */	bne .L_8016727C
/* 80167270 001641B0  38 00 00 05 */	li r0, 5
/* 80167274 001641B4  98 1E 03 2C */	stb r0, 0x32c(r30)
/* 80167278 001641B8  48 00 00 24 */	b .L_8016729C
.L_8016727C:
/* 8016727C 001641BC  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 80167280 001641C0  80 8D 84 78 */	lwz r4, cCoin__13VsOtakaraName@sda21(r13)
/* 80167284 001641C4  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80167288 001641C8  4B F6 34 39 */	bl strcmp
/* 8016728C 001641CC  2C 03 00 00 */	cmpwi r3, 0
/* 80167290 001641D0  40 82 00 0C */	bne .L_8016729C
/* 80167294 001641D4  38 00 00 03 */	li r0, 3
/* 80167298 001641D8  98 1E 03 2C */	stb r0, 0x32c(r30)
.L_8016729C:
/* 8016729C 001641DC  88 1F 00 1C */	lbz r0, 0x1c(r31)
/* 801672A0 001641E0  28 00 00 00 */	cmplwi r0, 0
/* 801672A4 001641E4  40 82 00 38 */	bne .L_801672DC
/* 801672A8 001641E8  80 7E 04 54 */	lwz r3, 0x454(r30)
/* 801672AC 001641EC  A0 9E 04 3C */	lhz r4, 0x43c(r30)
/* 801672B0 001641F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801672B4 001641F4  80 BE 04 40 */	lwz r5, 0x440(r30)
/* 801672B8 001641F8  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801672BC 001641FC  7D 89 03 A6 */	mtctr r12
/* 801672C0 00164200  4E 80 04 21 */	bctrl 
/* 801672C4 00164204  90 7E 01 74 */	stw r3, 0x174(r30)
/* 801672C8 00164208  7F C3 F3 78 */	mr r3, r30
/* 801672CC 0016420C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801672D0 00164210  81 8C 01 D0 */	lwz r12, 0x1d0(r12)
/* 801672D4 00164214  7D 89 03 A6 */	mtctr r12
/* 801672D8 00164218  4E 80 04 21 */	bctrl 
.L_801672DC:
/* 801672DC 0016421C  80 1E 01 74 */	lwz r0, 0x174(r30)
/* 801672E0 00164220  28 00 00 00 */	cmplwi r0, 0
/* 801672E4 00164224  41 82 00 34 */	beq .L_80167318
/* 801672E8 00164228  80 7E 04 54 */	lwz r3, 0x454(r30)
/* 801672EC 0016422C  A0 1E 04 3C */	lhz r0, 0x43c(r30)
/* 801672F0 00164230  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801672F4 00164234  54 00 10 3A */	slwi r0, r0, 2
/* 801672F8 00164238  7C 03 00 2E */	lwzx r0, r3, r0
/* 801672FC 0016423C  90 1E 04 2C */	stw r0, 0x42c(r30)
/* 80167300 00164240  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 80167304 00164244  48 2D 72 D1 */	bl getRoughBoundingRadius__Q28SysShape5ModelFv
/* 80167308 00164248  C0 02 A6 10 */	lfs f0, lbl_80518970@sda21(r2)
/* 8016730C 0016424C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80167310 00164250  D0 1E 03 1C */	stfs f0, 0x31c(r30)
/* 80167314 00164254  48 00 00 10 */	b .L_80167324
.L_80167318:
/* 80167318 00164258  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8016731C 0016425C  C0 03 00 A0 */	lfs f0, 0xa0(r3)
/* 80167320 00164260  D0 1E 03 1C */	stfs f0, 0x31c(r30)
.L_80167324:
/* 80167324 00164264  80 1E 04 2C */	lwz r0, 0x42c(r30)
/* 80167328 00164268  28 00 00 00 */	cmplwi r0, 0
/* 8016732C 0016426C  41 82 00 5C */	beq .L_80167388
/* 80167330 00164270  28 1E 00 00 */	cmplwi r30, 0
/* 80167334 00164274  7F C5 F3 78 */	mr r5, r30
/* 80167338 00164278  41 82 00 08 */	beq .L_80167340
/* 8016733C 0016427C  38 BE 03 14 */	addi r5, r30, 0x314
.L_80167340:
/* 80167340 00164280  38 7E 04 1C */	addi r3, r30, 0x41c
/* 80167344 00164284  38 80 00 00 */	li r4, 0
/* 80167348 00164288  48 2C 19 41 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8016734C 0016428C  7F C3 F3 78 */	mr r3, r30
/* 80167350 00164290  48 00 2F B1 */	bl stop_carrymotion__Q24Game6PelletFv
/* 80167354 00164294  7F C3 F3 78 */	mr r3, r30
/* 80167358 00164298  48 00 2E 59 */	bl init_pmotions__Q24Game6PelletFv
/* 8016735C 0016429C  7F C3 F3 78 */	mr r3, r30
/* 80167360 001642A0  48 00 2F 5D */	bl start_pmotions__Q24Game6PelletFv
/* 80167364 001642A4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80167368 001642A8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8016736C 001642AC  2C 00 00 04 */	cmpwi r0, 4
/* 80167370 001642B0  40 82 00 18 */	bne .L_80167388
/* 80167374 001642B4  88 1E 03 2C */	lbz r0, 0x32c(r30)
/* 80167378 001642B8  28 00 00 00 */	cmplwi r0, 0
/* 8016737C 001642BC  40 82 00 0C */	bne .L_80167388
/* 80167380 001642C0  C0 02 A5 C8 */	lfs f0, lbl_80518928@sda21(r2)
/* 80167384 001642C4  D0 1E 04 38 */	stfs f0, 0x438(r30)
.L_80167388:
/* 80167388 001642C8  80 7E 04 54 */	lwz r3, 0x454(r30)
/* 8016738C 001642CC  7F C4 F3 78 */	mr r4, r30
/* 80167390 001642D0  A0 BE 04 3C */	lhz r5, 0x43c(r30)
/* 80167394 001642D4  48 00 54 51 */	bl setCollTree__Q24Game13BasePelletMgrFPQ24Game6Pelleti
/* 80167398 001642D8  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8016739C 001642DC  38 82 A6 14 */	addi r4, r2, lbl_80518974@sda21
/* 801673A0 001642E0  80 63 01 60 */	lwz r3, 0x160(r3)
/* 801673A4 001642E4  4B F6 33 1D */	bl strcmp
/* 801673A8 001642E8  2C 03 00 00 */	cmpwi r3, 0
/* 801673AC 001642EC  40 82 00 20 */	bne .L_801673CC
/* 801673B0 001642F0  38 60 00 02 */	li r3, 2
/* 801673B4 001642F4  38 00 00 00 */	li r0, 0
/* 801673B8 001642F8  98 7E 03 64 */	stb r3, 0x364(r30)
/* 801673BC 001642FC  98 1E 03 9C */	stb r0, 0x39c(r30)
/* 801673C0 00164300  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 801673C4 00164304  90 03 00 F0 */	stw r0, 0xf0(r3)
/* 801673C8 00164308  48 00 00 3C */	b .L_80167404
.L_801673CC:
/* 801673CC 0016430C  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 801673D0 00164310  38 82 A6 1C */	addi r4, r2, lbl_8051897C@sda21
/* 801673D4 00164314  80 63 01 60 */	lwz r3, 0x160(r3)
/* 801673D8 00164318  4B F6 32 E9 */	bl strcmp
/* 801673DC 0016431C  2C 03 00 00 */	cmpwi r3, 0
/* 801673E0 00164320  40 82 00 14 */	bne .L_801673F4
/* 801673E4 00164324  38 00 00 01 */	li r0, 1
/* 801673E8 00164328  98 1E 03 64 */	stb r0, 0x364(r30)
/* 801673EC 0016432C  98 1E 03 9C */	stb r0, 0x39c(r30)
/* 801673F0 00164330  48 00 00 14 */	b .L_80167404
.L_801673F4:
/* 801673F4 00164334  38 60 00 00 */	li r3, 0
/* 801673F8 00164338  38 00 00 01 */	li r0, 1
/* 801673FC 0016433C  98 7E 03 64 */	stb r3, 0x364(r30)
/* 80167400 00164340  98 1E 03 9C */	stb r0, 0x39c(r30)
.L_80167404:
/* 80167404 00164344  38 00 00 00 */	li r0, 0
/* 80167408 00164348  7F C3 F3 78 */	mr r3, r30
/* 8016740C 0016434C  98 1E 03 E4 */	stb r0, 0x3e4(r30)
/* 80167410 00164350  98 1E 03 E5 */	stb r0, 0x3e5(r30)
/* 80167414 00164354  98 1E 03 E6 */	stb r0, 0x3e6(r30)
/* 80167418 00164358  98 1E 03 E7 */	stb r0, 0x3e7(r30)
/* 8016741C 0016435C  98 1E 03 E8 */	stb r0, 0x3e8(r30)
/* 80167420 00164360  98 1E 03 E9 */	stb r0, 0x3e9(r30)
/* 80167424 00164364  98 1E 03 EA */	stb r0, 0x3ea(r30)
/* 80167428 00164368  98 1E 03 EB */	stb r0, 0x3eb(r30)
/* 8016742C 0016436C  98 1E 03 EC */	stb r0, 0x3ec(r30)
/* 80167430 00164370  98 1E 03 ED */	stb r0, 0x3ed(r30)
/* 80167434 00164374  98 1E 03 EE */	stb r0, 0x3ee(r30)
/* 80167438 00164378  98 1E 03 EF */	stb r0, 0x3ef(r30)
/* 8016743C 0016437C  98 1E 03 F0 */	stb r0, 0x3f0(r30)
/* 80167440 00164380  98 1E 03 F1 */	stb r0, 0x3f1(r30)
/* 80167444 00164384  98 1E 03 F2 */	stb r0, 0x3f2(r30)
/* 80167448 00164388  98 1E 03 F3 */	stb r0, 0x3f3(r30)
/* 8016744C 0016438C  98 1E 03 F6 */	stb r0, 0x3f6(r30)
/* 80167450 00164390  48 00 01 61 */	bl getPelletConfigMax__Q24Game6PelletFv
/* 80167454 00164394  B0 7E 03 F4 */	sth r3, 0x3f4(r30)
/* 80167458 00164398  A8 1E 03 F4 */	lha r0, 0x3f4(r30)
/* 8016745C 0016439C  2C 00 00 80 */	cmpwi r0, 0x80
/* 80167460 001643A0  40 81 00 0C */	ble .L_8016746C
/* 80167464 001643A4  38 00 00 80 */	li r0, 0x80
/* 80167468 001643A8  B0 1E 03 F4 */	sth r0, 0x3f4(r30)
.L_8016746C:
/* 8016746C 001643AC  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 80167470 001643B0  80 03 01 20 */	lwz r0, 0x120(r3)
/* 80167474 001643B4  2C 00 00 80 */	cmpwi r0, 0x80
/* 80167478 001643B8  40 82 00 10 */	bne .L_80167488
/* 8016747C 001643BC  38 00 03 E8 */	li r0, 0x3e8
/* 80167480 001643C0  90 1E 03 D8 */	stw r0, 0x3d8(r30)
/* 80167484 001643C4  90 1E 03 DC */	stw r0, 0x3dc(r30)
.L_80167488:
/* 80167488 001643C8  38 00 00 00 */	li r0, 0
/* 8016748C 001643CC  7F C3 F3 78 */	mr r3, r30
/* 80167490 001643D0  90 1E 01 78 */	stw r0, 0x178(r30)
/* 80167494 001643D4  48 00 01 3D */	bl setupParticles__Q24Game6PelletFv
/* 80167498 001643D8  7F C3 F3 78 */	mr r3, r30
/* 8016749C 001643DC  7F E4 FB 78 */	mr r4, r31
/* 801674A0 001643E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801674A4 001643E4  81 8C 01 CC */	lwz r12, 0x1cc(r12)
/* 801674A8 001643E8  7D 89 03 A6 */	mtctr r12
/* 801674AC 001643EC  4E 80 04 21 */	bctrl 
/* 801674B0 001643F0  7F C3 F3 78 */	mr r3, r30
/* 801674B4 001643F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801674B8 001643F8  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801674BC 001643FC  7D 89 03 A6 */	mtctr r12
/* 801674C0 00164400  4E 80 04 21 */	bctrl 
/* 801674C4 00164404  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801674C8 00164408  28 00 00 03 */	cmplwi r0, 3
/* 801674CC 0016440C  40 82 00 18 */	bne .L_801674E4
/* 801674D0 00164410  7F C3 F3 78 */	mr r3, r30
/* 801674D4 00164414  38 80 00 10 */	li r4, 0x10
/* 801674D8 00164418  38 A0 00 00 */	li r5, 0
/* 801674DC 0016441C  48 0B 70 A9 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 801674E0 00164420  48 00 00 34 */	b .L_80167514
.L_801674E4:
/* 801674E4 00164424  7F C3 F3 78 */	mr r3, r30
/* 801674E8 00164428  81 9E 00 00 */	lwz r12, 0(r30)
/* 801674EC 0016442C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801674F0 00164430  7D 89 03 A6 */	mtctr r12
/* 801674F4 00164434  4E 80 04 21 */	bctrl 
/* 801674F8 00164438  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801674FC 0016443C  28 00 00 04 */	cmplwi r0, 4
/* 80167500 00164440  40 82 00 14 */	bne .L_80167514
/* 80167504 00164444  7F C3 F3 78 */	mr r3, r30
/* 80167508 00164448  38 80 00 12 */	li r4, 0x12
/* 8016750C 0016444C  38 A0 00 00 */	li r5, 0
/* 80167510 00164450  48 0B 70 75 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
.L_80167514:
/* 80167514 00164454  7F C3 F3 78 */	mr r3, r30
/* 80167518 00164458  38 80 00 01 */	li r4, 1
/* 8016751C 0016445C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80167520 00164460  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80167524 00164464  7D 89 03 A6 */	mtctr r12
/* 80167528 00164468  4E 80 04 21 */	bctrl 
/* 8016752C 0016446C  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 80167530 00164470  80 06 00 44 */	lwz r0, 0x44(r6)
/* 80167534 00164474  2C 00 00 01 */	cmpwi r0, 1
/* 80167538 00164478  40 82 00 38 */	bne .L_80167570
/* 8016753C 0016447C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80167540 00164480  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessagePelletBorn@ha
/* 80167544 00164484  38 A4 05 90 */	addi r5, r4, __vt__Q24Game11GameMessage@l
/* 80167548 00164488  93 C1 00 0C */	stw r30, 0xc(r1)
/* 8016754C 0016448C  38 03 61 58 */	addi r0, r3, __vt__Q24Game21GameMessagePelletBorn@l
/* 80167550 00164490  38 81 00 08 */	addi r4, r1, 8
/* 80167554 00164494  90 A1 00 08 */	stw r5, 8(r1)
/* 80167558 00164498  90 01 00 08 */	stw r0, 8(r1)
/* 8016755C 0016449C  80 66 00 58 */	lwz r3, 0x58(r6)
/* 80167560 001644A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80167564 001644A4  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80167568 001644A8  7D 89 03 A6 */	mtctr r12
/* 8016756C 001644AC  4E 80 04 21 */	bctrl 
.L_80167570:
/* 80167570 001644B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80167574 001644B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80167578 001644B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016757C 001644BC  7C 08 03 A6 */	mtlr r0
/* 80167580 001644C0  38 21 00 20 */	addi r1, r1, 0x20
/* 80167584 001644C4  4E 80 00 20 */	blr 
.endfn onInit__Q24Game6PelletFPQ24Game15CreatureInitArg

.fn do_onInit__Q24Game6PelletFPQ24Game15CreatureInitArg, weak
/* 80167588 001644C8  4E 80 00 20 */	blr 
.endfn do_onInit__Q24Game6PelletFPQ24Game15CreatureInitArg

.fn onCreateShape__Q24Game6PelletFv, weak
/* 8016758C 001644CC  4E 80 00 20 */	blr 
.endfn onCreateShape__Q24Game6PelletFv

.fn getPelletConfigMin__Q24Game6PelletFv, global
/* 80167590 001644D0  80 03 03 D8 */	lwz r0, 0x3d8(r3)
/* 80167594 001644D4  2C 00 00 00 */	cmpwi r0, 0
/* 80167598 001644D8  40 81 00 0C */	ble .L_801675A4
/* 8016759C 001644DC  7C 03 03 78 */	mr r3, r0
/* 801675A0 001644E0  4E 80 00 20 */	blr 
.L_801675A4:
/* 801675A4 001644E4  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 801675A8 001644E8  80 63 01 20 */	lwz r3, 0x120(r3)
/* 801675AC 001644EC  4E 80 00 20 */	blr 
.endfn getPelletConfigMin__Q24Game6PelletFv

.fn getPelletConfigMax__Q24Game6PelletFv, global
/* 801675B0 001644F0  80 03 03 DC */	lwz r0, 0x3dc(r3)
/* 801675B4 001644F4  2C 00 00 00 */	cmpwi r0, 0
/* 801675B8 001644F8  40 81 00 0C */	ble .L_801675C4
/* 801675BC 001644FC  7C 03 03 78 */	mr r3, r0
/* 801675C0 00164500  4E 80 00 20 */	blr 
.L_801675C4:
/* 801675C4 00164504  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 801675C8 00164508  80 63 01 30 */	lwz r3, 0x130(r3)
/* 801675CC 0016450C  4E 80 00 20 */	blr 
.endfn getPelletConfigMax__Q24Game6PelletFv

.fn setupParticles__Q24Game6PelletFv, global
/* 801675D0 00164510  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 801675D4 00164514  7C 08 02 A6 */	mflr r0
/* 801675D8 00164518  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801675DC 0016451C  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 801675E0 00164520  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 801675E4 00164524  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 801675E8 00164528  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 801675EC 0016452C  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 801675F0 00164530  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 801675F4 00164534  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 801675F8 00164538  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 801675FC 0016453C  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 80167600 00164540  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 80167604 00164544  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 80167608 00164548  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 8016760C 0016454C  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 80167610 00164550  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 80167614 00164554  DB 01 00 60 */	stfd f24, 0x60(r1)
/* 80167618 00164558  F3 01 00 68 */	psq_st f24, 104(r1), 0, qr0
/* 8016761C 0016455C  DA E1 00 50 */	stfd f23, 0x50(r1)
/* 80167620 00164560  F2 E1 00 58 */	psq_st f23, 88(r1), 0, qr0
/* 80167624 00164564  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 80167628 00164568  7C 7B 1B 78 */	mr r27, r3
/* 8016762C 0016456C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80167630 00164570  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 80167634 00164574  C3 23 00 A0 */	lfs f25, 0xa0(r3)
/* 80167638 00164578  D0 1B 02 F4 */	stfs f0, 0x2f4(r27)
/* 8016763C 0016457C  D0 1B 02 F8 */	stfs f0, 0x2f8(r27)
/* 80167640 00164580  D0 1B 02 FC */	stfs f0, 0x2fc(r27)
/* 80167644 00164584  80 7B 03 5C */	lwz r3, 0x35c(r27)
/* 80167648 00164588  80 03 00 F0 */	lwz r0, 0xf0(r3)
/* 8016764C 0016458C  90 1B 03 60 */	stw r0, 0x360(r27)
/* 80167650 00164590  80 1B 03 60 */	lwz r0, 0x360(r27)
/* 80167654 00164594  2C 00 00 00 */	cmpwi r0, 0
/* 80167658 00164598  41 82 02 70 */	beq .L_801678C8
/* 8016765C 0016459C  80 9B 03 5C */	lwz r4, 0x35c(r27)
/* 80167660 001645A0  38 62 A6 20 */	addi r3, r2, lbl_80518980@sda21
/* 80167664 001645A4  80 84 00 E0 */	lwz r4, 0xe0(r4)
/* 80167668 001645A8  4B F6 30 59 */	bl strcmp
/* 8016766C 001645AC  2C 03 00 00 */	cmpwi r3, 0
/* 80167670 001645B0  40 82 00 3C */	bne .L_801676AC
/* 80167674 001645B4  80 7B 03 5C */	lwz r3, 0x35c(r27)
/* 80167678 001645B8  C0 22 A5 B8 */	lfs f1, lbl_80518918@sda21(r2)
/* 8016767C 001645BC  C0 03 00 C0 */	lfs f0, 0xc0(r3)
/* 80167680 001645C0  C0 42 A6 10 */	lfs f2, lbl_80518970@sda21(r2)
/* 80167684 001645C4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80167688 001645C8  EC 02 00 32 */	fmuls f0, f2, f0
/* 8016768C 001645CC  FC 00 C8 40 */	fcmpo cr0, f0, f25
/* 80167690 001645D0  40 81 00 10 */	ble .L_801676A0
/* 80167694 001645D4  7F 63 DB 78 */	mr r3, r27
/* 80167698 001645D8  48 00 04 AD */	bl setupParticles_tall__Q24Game6PelletFv
/* 8016769C 001645DC  48 00 01 E0 */	b .L_8016787C
.L_801676A0:
/* 801676A0 001645E0  7F 63 DB 78 */	mr r3, r27
/* 801676A4 001645E4  48 00 02 81 */	bl setupParticles_simple__Q24Game6PelletFv
/* 801676A8 001645E8  48 00 01 D4 */	b .L_8016787C
.L_801676AC:
/* 801676AC 001645EC  38 60 00 00 */	li r3, 0
/* 801676B0 001645F0  38 00 00 01 */	li r0, 1
/* 801676B4 001645F4  98 7B 03 64 */	stb r3, 0x364(r27)
/* 801676B8 001645F8  7F 63 DB 78 */	mr r3, r27
/* 801676BC 001645FC  98 1B 03 9C */	stb r0, 0x39c(r27)
/* 801676C0 00164600  83 BB 03 60 */	lwz r29, 0x360(r27)
/* 801676C4 00164604  38 1D 00 01 */	addi r0, r29, 1
/* 801676C8 00164608  90 1B 03 60 */	stw r0, 0x360(r27)
/* 801676CC 0016460C  80 9B 03 60 */	lwz r4, 0x360(r27)
/* 801676D0 00164610  48 04 0A 85 */	bl createParticles__Q24Game11DynCreatureFi
/* 801676D4 00164614  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801676D8 00164618  C3 62 A6 28 */	lfs f27, lbl_80518988@sda21(r2)
/* 801676DC 0016461C  CB 82 A5 D0 */	lfd f28, lbl_80518930@sda21(r2)
/* 801676E0 00164620  6F BE 80 00 */	xoris r30, r29, 0x8000
/* 801676E4 00164624  C3 A2 A5 B8 */	lfs f29, lbl_80518918@sda21(r2)
/* 801676E8 00164628  3B 43 71 A0 */	addi r26, r3, sincosTable___5JMath@l
/* 801676EC 0016462C  C3 C2 A5 B4 */	lfs f30, lbl_80518914@sda21(r2)
/* 801676F0 00164630  3B 80 00 00 */	li r28, 0
/* 801676F4 00164634  C3 E2 A6 2C */	lfs f31, lbl_8051898C@sda21(r2)
/* 801676F8 00164638  3F E0 43 30 */	lis r31, 0x4330
/* 801676FC 0016463C  48 00 01 18 */	b .L_80167814
.L_80167700:
/* 80167700 00164640  93 C1 00 0C */	stw r30, 0xc(r1)
/* 80167704 00164644  6F 80 80 00 */	xoris r0, r28, 0x8000
/* 80167708 00164648  80 7B 03 5C */	lwz r3, 0x35c(r27)
/* 8016770C 0016464C  93 E1 00 08 */	stw r31, 8(r1)
/* 80167710 00164650  C0 03 00 C0 */	lfs f0, 0xc0(r3)
/* 80167714 00164654  C8 21 00 08 */	lfd f1, 8(r1)
/* 80167718 00164658  EF 1D 00 32 */	fmuls f24, f29, f0
/* 8016771C 0016465C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80167720 00164660  EC 01 E0 28 */	fsubs f0, f1, f28
/* 80167724 00164664  93 E1 00 10 */	stw r31, 0x10(r1)
/* 80167728 00164668  EC 59 C0 28 */	fsubs f2, f25, f24
/* 8016772C 0016466C  EC 3B 00 24 */	fdivs f1, f27, f0
/* 80167730 00164670  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80167734 00164674  EC 00 E0 28 */	fsubs f0, f0, f28
/* 80167738 00164678  EC 21 00 32 */	fmuls f1, f1, f0
/* 8016773C 0016467C  FC 00 08 90 */	fmr f0, f1
/* 80167740 00164680  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 80167744 00164684  40 80 00 08 */	bge .L_8016774C
/* 80167748 00164688  FC 00 08 50 */	fneg f0, f1
.L_8016774C:
/* 8016774C 0016468C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80167750 00164690  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 80167754 00164694  FC 00 00 1E */	fctiwz f0, f0
/* 80167758 00164698  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8016775C 0016469C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80167760 001646A0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80167764 001646A4  7C 7A 02 14 */	add r3, r26, r0
/* 80167768 001646A8  C0 03 00 04 */	lfs f0, 4(r3)
/* 8016776C 001646AC  EF 42 00 32 */	fmuls f26, f2, f0
/* 80167770 001646B0  40 80 00 30 */	bge .L_801677A0
/* 80167774 001646B4  C0 02 A6 30 */	lfs f0, lbl_80518990@sda21(r2)
/* 80167778 001646B8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8016777C 001646BC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80167780 001646C0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80167784 001646C4  FC 00 00 1E */	fctiwz f0, f0
/* 80167788 001646C8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8016778C 001646CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80167790 001646D0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80167794 001646D4  7C 03 04 2E */	lfsx f0, r3, r0
/* 80167798 001646D8  FC 00 00 50 */	fneg f0, f0
/* 8016779C 001646DC  48 00 00 24 */	b .L_801677C0
.L_801677A0:
/* 801677A0 001646E0  EC 01 07 F2 */	fmuls f0, f1, f31
/* 801677A4 001646E4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801677A8 001646E8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801677AC 001646EC  FC 00 00 1E */	fctiwz f0, f0
/* 801677B0 001646F0  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 801677B4 001646F4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801677B8 001646F8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801677BC 001646FC  7C 03 04 2E */	lfsx f0, r3, r0
.L_801677C0:
/* 801677C0 00164700  EE E2 00 32 */	fmuls f23, f2, f0
/* 801677C4 00164704  C0 1B 02 F4 */	lfs f0, 0x2f4(r27)
/* 801677C8 00164708  C0 3B 02 F8 */	lfs f1, 0x2f8(r27)
/* 801677CC 0016470C  7F 84 E3 78 */	mr r4, r28
/* 801677D0 00164710  C0 5B 02 FC */	lfs f2, 0x2fc(r27)
/* 801677D4 00164714  EC 00 B8 2A */	fadds f0, f0, f23
/* 801677D8 00164718  EC 21 F0 2A */	fadds f1, f1, f30
/* 801677DC 0016471C  EC 42 D0 2A */	fadds f2, f2, f26
/* 801677E0 00164720  D0 1B 02 F4 */	stfs f0, 0x2f4(r27)
/* 801677E4 00164724  D0 3B 02 F8 */	stfs f1, 0x2f8(r27)
/* 801677E8 00164728  D0 5B 02 FC */	stfs f2, 0x2fc(r27)
/* 801677EC 0016472C  80 7B 01 78 */	lwz r3, 0x178(r27)
/* 801677F0 00164730  48 04 08 79 */	bl getAt__Q24Game11DynParticleFi
/* 801677F4 00164734  D2 E3 00 00 */	stfs f23, 0(r3)
/* 801677F8 00164738  7F 84 E3 78 */	mr r4, r28
/* 801677FC 0016473C  D3 C3 00 04 */	stfs f30, 4(r3)
/* 80167800 00164740  D3 43 00 08 */	stfs f26, 8(r3)
/* 80167804 00164744  80 7B 01 78 */	lwz r3, 0x178(r27)
/* 80167808 00164748  48 04 08 61 */	bl getAt__Q24Game11DynParticleFi
/* 8016780C 0016474C  D3 03 00 18 */	stfs f24, 0x18(r3)
/* 80167810 00164750  3B 9C 00 01 */	addi r28, r28, 1
.L_80167814:
/* 80167814 00164754  7C 1C E8 00 */	cmpw r28, r29
/* 80167818 00164758  41 80 FE E8 */	blt .L_80167700
/* 8016781C 0016475C  C3 22 A5 B4 */	lfs f25, lbl_80518914@sda21(r2)
/* 80167820 00164760  7F A4 EB 78 */	mr r4, r29
/* 80167824 00164764  C0 1B 02 F4 */	lfs f0, 0x2f4(r27)
/* 80167828 00164768  80 7B 03 5C */	lwz r3, 0x35c(r27)
/* 8016782C 0016476C  C0 3B 02 F8 */	lfs f1, 0x2f8(r27)
/* 80167830 00164770  EC 00 C8 2A */	fadds f0, f0, f25
/* 80167834 00164774  C0 5B 02 FC */	lfs f2, 0x2fc(r27)
/* 80167838 00164778  C2 E3 00 C0 */	lfs f23, 0xc0(r3)
/* 8016783C 0016477C  EC 21 C8 2A */	fadds f1, f1, f25
/* 80167840 00164780  EC 42 C8 2A */	fadds f2, f2, f25
/* 80167844 00164784  C3 02 A5 B8 */	lfs f24, lbl_80518918@sda21(r2)
/* 80167848 00164788  D0 1B 02 F4 */	stfs f0, 0x2f4(r27)
/* 8016784C 0016478C  D0 3B 02 F8 */	stfs f1, 0x2f8(r27)
/* 80167850 00164790  D0 5B 02 FC */	stfs f2, 0x2fc(r27)
/* 80167854 00164794  80 7B 01 78 */	lwz r3, 0x178(r27)
/* 80167858 00164798  48 04 08 11 */	bl getAt__Q24Game11DynParticleFi
/* 8016785C 0016479C  D3 23 00 00 */	stfs f25, 0(r3)
/* 80167860 001647A0  EF 18 05 F2 */	fmuls f24, f24, f23
/* 80167864 001647A4  7F A4 EB 78 */	mr r4, r29
/* 80167868 001647A8  D3 23 00 04 */	stfs f25, 4(r3)
/* 8016786C 001647AC  D3 23 00 08 */	stfs f25, 8(r3)
/* 80167870 001647B0  80 7B 01 78 */	lwz r3, 0x178(r27)
/* 80167874 001647B4  48 04 07 F5 */	bl getAt__Q24Game11DynParticleFi
/* 80167878 001647B8  D3 03 00 18 */	stfs f24, 0x18(r3)
.L_8016787C:
/* 8016787C 001647BC  80 7B 03 60 */	lwz r3, 0x360(r27)
/* 80167880 001647C0  3C 00 43 30 */	lis r0, 0x4330
/* 80167884 001647C4  90 01 00 28 */	stw r0, 0x28(r1)
/* 80167888 001647C8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8016788C 001647CC  C8 42 A5 D0 */	lfd f2, lbl_80518930@sda21(r2)
/* 80167890 001647D0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80167894 001647D4  C0 82 A5 B0 */	lfs f4, lbl_80518910@sda21(r2)
/* 80167898 001647D8  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 8016789C 001647DC  C0 1B 02 F4 */	lfs f0, 0x2f4(r27)
/* 801678A0 001647E0  EC 61 10 28 */	fsubs f3, f1, f2
/* 801678A4 001647E4  C0 3B 02 F8 */	lfs f1, 0x2f8(r27)
/* 801678A8 001647E8  C0 5B 02 FC */	lfs f2, 0x2fc(r27)
/* 801678AC 001647EC  EC 64 18 24 */	fdivs f3, f4, f3
/* 801678B0 001647F0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801678B4 001647F4  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801678B8 001647F8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801678BC 001647FC  D0 1B 02 F4 */	stfs f0, 0x2f4(r27)
/* 801678C0 00164800  D0 3B 02 F8 */	stfs f1, 0x2f8(r27)
/* 801678C4 00164804  D0 5B 02 FC */	stfs f2, 0x2fc(r27)
.L_801678C8:
/* 801678C8 00164808  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 801678CC 0016480C  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 801678D0 00164810  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 801678D4 00164814  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 801678D8 00164818  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 801678DC 0016481C  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 801678E0 00164820  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 801678E4 00164824  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 801678E8 00164828  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 801678EC 0016482C  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 801678F0 00164830  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 801678F4 00164834  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 801678F8 00164838  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 801678FC 0016483C  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 80167900 00164840  E3 01 00 68 */	psq_l f24, 104(r1), 0, qr0
/* 80167904 00164844  CB 01 00 60 */	lfd f24, 0x60(r1)
/* 80167908 00164848  E2 E1 00 58 */	psq_l f23, 88(r1), 0, qr0
/* 8016790C 0016484C  CA E1 00 50 */	lfd f23, 0x50(r1)
/* 80167910 00164850  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 80167914 00164854  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80167918 00164858  7C 08 03 A6 */	mtlr r0
/* 8016791C 0016485C  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80167920 00164860  4E 80 00 20 */	blr 
.endfn setupParticles__Q24Game6PelletFv

.fn setupParticles_simple__Q24Game6PelletFv, global
/* 80167924 00164864  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80167928 00164868  7C 08 02 A6 */	mflr r0
/* 8016792C 0016486C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80167930 00164870  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 80167934 00164874  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 80167938 00164878  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 8016793C 0016487C  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 80167940 00164880  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 80167944 00164884  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 80167948 00164888  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 8016794C 0016488C  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 80167950 00164890  DB 61 00 70 */	stfd f27, 0x70(r1)
/* 80167954 00164894  F3 61 00 78 */	psq_st f27, 120(r1), 0, qr0
/* 80167958 00164898  DB 41 00 60 */	stfd f26, 0x60(r1)
/* 8016795C 0016489C  F3 41 00 68 */	psq_st f26, 104(r1), 0, qr0
/* 80167960 001648A0  DB 21 00 50 */	stfd f25, 0x50(r1)
/* 80167964 001648A4  F3 21 00 58 */	psq_st f25, 88(r1), 0, qr0
/* 80167968 001648A8  DB 01 00 40 */	stfd f24, 0x40(r1)
/* 8016796C 001648AC  F3 01 00 48 */	psq_st f24, 72(r1), 0, qr0
/* 80167970 001648B0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80167974 001648B4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80167978 001648B8  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8016797C 001648BC  93 81 00 30 */	stw r28, 0x30(r1)
/* 80167980 001648C0  7C 7D 1B 78 */	mr r29, r3
/* 80167984 001648C4  80 A3 03 5C */	lwz r5, 0x35c(r3)
/* 80167988 001648C8  80 83 03 60 */	lwz r4, 0x360(r3)
/* 8016798C 001648CC  C3 05 00 A0 */	lfs f24, 0xa0(r5)
/* 80167990 001648D0  48 04 07 C5 */	bl createParticles__Q24Game11DynCreatureFi
/* 80167994 001648D4  80 1D 03 60 */	lwz r0, 0x360(r29)
/* 80167998 001648D8  3F E0 43 30 */	lis r31, 0x4330
/* 8016799C 001648DC  80 9D 03 5C */	lwz r4, 0x35c(r29)
/* 801679A0 001648E0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801679A4 001648E4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801679A8 001648E8  93 E1 00 08 */	stw r31, 8(r1)
/* 801679AC 001648EC  CB A2 A5 D0 */	lfd f29, lbl_80518930@sda21(r2)
/* 801679B0 001648F0  3B 83 71 A0 */	addi r28, r3, sincosTable___5JMath@l
/* 801679B4 001648F4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801679B8 001648F8  3B C0 00 00 */	li r30, 0
/* 801679BC 001648FC  C0 62 A6 28 */	lfs f3, lbl_80518988@sda21(r2)
/* 801679C0 00164900  C8 01 00 08 */	lfd f0, 8(r1)
/* 801679C4 00164904  C0 22 A5 B8 */	lfs f1, lbl_80518918@sda21(r2)
/* 801679C8 00164908  EC 40 E8 28 */	fsubs f2, f0, f29
/* 801679CC 0016490C  C0 04 00 C0 */	lfs f0, 0xc0(r4)
/* 801679D0 00164910  C3 C2 A5 B4 */	lfs f30, lbl_80518914@sda21(r2)
/* 801679D4 00164914  EF 21 00 32 */	fmuls f25, f1, f0
/* 801679D8 00164918  C3 E2 A6 2C */	lfs f31, lbl_8051898C@sda21(r2)
/* 801679DC 0016491C  EF 43 10 24 */	fdivs f26, f3, f2
/* 801679E0 00164920  EF 78 C8 28 */	fsubs f27, f24, f25
/* 801679E4 00164924  48 00 00 F4 */	b .L_80167AD8
.L_801679E8:
/* 801679E8 00164928  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 801679EC 0016492C  93 E1 00 08 */	stw r31, 8(r1)
/* 801679F0 00164930  90 01 00 0C */	stw r0, 0xc(r1)
/* 801679F4 00164934  C8 01 00 08 */	lfd f0, 8(r1)
/* 801679F8 00164938  EC 00 E8 28 */	fsubs f0, f0, f29
/* 801679FC 0016493C  EC 3A 00 32 */	fmuls f1, f26, f0
/* 80167A00 00164940  FC 00 08 90 */	fmr f0, f1
/* 80167A04 00164944  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 80167A08 00164948  40 80 00 08 */	bge .L_80167A10
/* 80167A0C 0016494C  FC 00 08 50 */	fneg f0, f1
.L_80167A10:
/* 80167A10 00164950  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80167A14 00164954  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 80167A18 00164958  FC 00 00 1E */	fctiwz f0, f0
/* 80167A1C 0016495C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80167A20 00164960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80167A24 00164964  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80167A28 00164968  7C 7C 02 14 */	add r3, r28, r0
/* 80167A2C 0016496C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80167A30 00164970  EF 9B 00 32 */	fmuls f28, f27, f0
/* 80167A34 00164974  40 80 00 30 */	bge .L_80167A64
/* 80167A38 00164978  C0 02 A6 30 */	lfs f0, lbl_80518990@sda21(r2)
/* 80167A3C 0016497C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80167A40 00164980  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80167A44 00164984  EC 01 00 32 */	fmuls f0, f1, f0
/* 80167A48 00164988  FC 00 00 1E */	fctiwz f0, f0
/* 80167A4C 0016498C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80167A50 00164990  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80167A54 00164994  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80167A58 00164998  7C 03 04 2E */	lfsx f0, r3, r0
/* 80167A5C 0016499C  FC 00 00 50 */	fneg f0, f0
/* 80167A60 001649A0  48 00 00 24 */	b .L_80167A84
.L_80167A64:
/* 80167A64 001649A4  EC 01 07 F2 */	fmuls f0, f1, f31
/* 80167A68 001649A8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80167A6C 001649AC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80167A70 001649B0  FC 00 00 1E */	fctiwz f0, f0
/* 80167A74 001649B4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80167A78 001649B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80167A7C 001649BC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80167A80 001649C0  7C 03 04 2E */	lfsx f0, r3, r0
.L_80167A84:
/* 80167A84 001649C4  EF 1B 00 32 */	fmuls f24, f27, f0
/* 80167A88 001649C8  C0 1D 02 F4 */	lfs f0, 0x2f4(r29)
/* 80167A8C 001649CC  C0 3D 02 F8 */	lfs f1, 0x2f8(r29)
/* 80167A90 001649D0  7F C4 F3 78 */	mr r4, r30
/* 80167A94 001649D4  C0 5D 02 FC */	lfs f2, 0x2fc(r29)
/* 80167A98 001649D8  EC 00 C0 2A */	fadds f0, f0, f24
/* 80167A9C 001649DC  EC 21 F0 2A */	fadds f1, f1, f30
/* 80167AA0 001649E0  EC 42 E0 2A */	fadds f2, f2, f28
/* 80167AA4 001649E4  D0 1D 02 F4 */	stfs f0, 0x2f4(r29)
/* 80167AA8 001649E8  D0 3D 02 F8 */	stfs f1, 0x2f8(r29)
/* 80167AAC 001649EC  D0 5D 02 FC */	stfs f2, 0x2fc(r29)
/* 80167AB0 001649F0  80 7D 01 78 */	lwz r3, 0x178(r29)
/* 80167AB4 001649F4  48 04 05 B5 */	bl getAt__Q24Game11DynParticleFi
/* 80167AB8 001649F8  D3 03 00 00 */	stfs f24, 0(r3)
/* 80167ABC 001649FC  7F C4 F3 78 */	mr r4, r30
/* 80167AC0 00164A00  D3 C3 00 04 */	stfs f30, 4(r3)
/* 80167AC4 00164A04  D3 83 00 08 */	stfs f28, 8(r3)
/* 80167AC8 00164A08  80 7D 01 78 */	lwz r3, 0x178(r29)
/* 80167ACC 00164A0C  48 04 05 9D */	bl getAt__Q24Game11DynParticleFi
/* 80167AD0 00164A10  D3 23 00 18 */	stfs f25, 0x18(r3)
/* 80167AD4 00164A14  3B DE 00 01 */	addi r30, r30, 1
.L_80167AD8:
/* 80167AD8 00164A18  80 1D 03 60 */	lwz r0, 0x360(r29)
/* 80167ADC 00164A1C  7C 1E 00 00 */	cmpw r30, r0
/* 80167AE0 00164A20  41 80 FF 08 */	blt .L_801679E8
/* 80167AE4 00164A24  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 80167AE8 00164A28  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 80167AEC 00164A2C  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 80167AF0 00164A30  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 80167AF4 00164A34  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 80167AF8 00164A38  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 80167AFC 00164A3C  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 80167B00 00164A40  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 80167B04 00164A44  E3 61 00 78 */	psq_l f27, 120(r1), 0, qr0
/* 80167B08 00164A48  CB 61 00 70 */	lfd f27, 0x70(r1)
/* 80167B0C 00164A4C  E3 41 00 68 */	psq_l f26, 104(r1), 0, qr0
/* 80167B10 00164A50  CB 41 00 60 */	lfd f26, 0x60(r1)
/* 80167B14 00164A54  E3 21 00 58 */	psq_l f25, 88(r1), 0, qr0
/* 80167B18 00164A58  CB 21 00 50 */	lfd f25, 0x50(r1)
/* 80167B1C 00164A5C  E3 01 00 48 */	psq_l f24, 72(r1), 0, qr0
/* 80167B20 00164A60  CB 01 00 40 */	lfd f24, 0x40(r1)
/* 80167B24 00164A64  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80167B28 00164A68  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80167B2C 00164A6C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80167B30 00164A70  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 80167B34 00164A74  83 81 00 30 */	lwz r28, 0x30(r1)
/* 80167B38 00164A78  7C 08 03 A6 */	mtlr r0
/* 80167B3C 00164A7C  38 21 00 C0 */	addi r1, r1, 0xc0
/* 80167B40 00164A80  4E 80 00 20 */	blr 
.endfn setupParticles_simple__Q24Game6PelletFv

.fn setupParticles_tall__Q24Game6PelletFv, global
/* 80167B44 00164A84  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 80167B48 00164A88  7C 08 02 A6 */	mflr r0
/* 80167B4C 00164A8C  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80167B50 00164A90  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 80167B54 00164A94  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 80167B58 00164A98  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 80167B5C 00164A9C  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 80167B60 00164AA0  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 80167B64 00164AA4  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 80167B68 00164AA8  DB 81 00 90 */	stfd f28, 0x90(r1)
/* 80167B6C 00164AAC  F3 81 00 98 */	psq_st f28, 152(r1), 0, qr0
/* 80167B70 00164AB0  DB 61 00 80 */	stfd f27, 0x80(r1)
/* 80167B74 00164AB4  F3 61 00 88 */	psq_st f27, 136(r1), 0, qr0
/* 80167B78 00164AB8  DB 41 00 70 */	stfd f26, 0x70(r1)
/* 80167B7C 00164ABC  F3 41 00 78 */	psq_st f26, 120(r1), 0, qr0
/* 80167B80 00164AC0  DB 21 00 60 */	stfd f25, 0x60(r1)
/* 80167B84 00164AC4  F3 21 00 68 */	psq_st f25, 104(r1), 0, qr0
/* 80167B88 00164AC8  DB 01 00 50 */	stfd f24, 0x50(r1)
/* 80167B8C 00164ACC  F3 01 00 58 */	psq_st f24, 88(r1), 0, qr0
/* 80167B90 00164AD0  DA E1 00 40 */	stfd f23, 0x40(r1)
/* 80167B94 00164AD4  F2 E1 00 48 */	psq_st f23, 72(r1), 0, qr0
/* 80167B98 00164AD8  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 80167B9C 00164ADC  7C 7E 1B 78 */	mr r30, r3
/* 80167BA0 00164AE0  C0 22 A5 B8 */	lfs f1, lbl_80518918@sda21(r2)
/* 80167BA4 00164AE4  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 80167BA8 00164AE8  C0 02 A6 34 */	lfs f0, lbl_80518994@sda21(r2)
/* 80167BAC 00164AEC  C0 43 00 C0 */	lfs f2, 0xc0(r3)
/* 80167BB0 00164AF0  C2 E3 00 A0 */	lfs f23, 0xa0(r3)
/* 80167BB4 00164AF4  EF 01 00 B2 */	fmuls f24, f1, f2
/* 80167BB8 00164AF8  FF 20 C0 90 */	fmr f25, f24
/* 80167BBC 00164AFC  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 80167BC0 00164B00  40 81 00 08 */	ble .L_80167BC8
/* 80167BC4 00164B04  FF 20 00 90 */	fmr f25, f0
.L_80167BC8:
/* 80167BC8 00164B08  83 FE 03 60 */	lwz r31, 0x360(r30)
/* 80167BCC 00164B0C  7F C3 F3 78 */	mr r3, r30
/* 80167BD0 00164B10  7F E4 FB 78 */	mr r4, r31
/* 80167BD4 00164B14  48 04 05 81 */	bl createParticles__Q24Game11DynCreatureFi
/* 80167BD8 00164B18  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 80167BDC 00164B1C  3F 80 43 30 */	lis r28, 0x4330
/* 80167BE0 00164B20  90 01 00 0C */	stw r0, 0xc(r1)
/* 80167BE4 00164B24  EC 18 C8 28 */	fsubs f0, f24, f25
/* 80167BE8 00164B28  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80167BEC 00164B2C  CB A2 A5 D0 */	lfd f29, lbl_80518930@sda21(r2)
/* 80167BF0 00164B30  93 81 00 08 */	stw r28, 8(r1)
/* 80167BF4 00164B34  EF 77 C8 28 */	fsubs f27, f23, f25
/* 80167BF8 00164B38  C0 42 A6 28 */	lfs f2, lbl_80518988@sda21(r2)
/* 80167BFC 00164B3C  C8 21 00 08 */	lfd f1, 8(r1)
/* 80167C00 00164B40  FF 40 00 50 */	fneg f26, f0
/* 80167C04 00164B44  C3 C2 A5 B4 */	lfs f30, lbl_80518914@sda21(r2)
/* 80167C08 00164B48  3B A3 71 A0 */	addi r29, r3, sincosTable___5JMath@l
/* 80167C0C 00164B4C  EC 01 E8 28 */	fsubs f0, f1, f29
/* 80167C10 00164B50  C3 E2 A6 2C */	lfs f31, lbl_8051898C@sda21(r2)
/* 80167C14 00164B54  3B 60 00 00 */	li r27, 0
/* 80167C18 00164B58  EF 02 00 24 */	fdivs f24, f2, f0
/* 80167C1C 00164B5C  48 00 00 F4 */	b .L_80167D10
.L_80167C20:
/* 80167C20 00164B60  6F 60 80 00 */	xoris r0, r27, 0x8000
/* 80167C24 00164B64  93 81 00 08 */	stw r28, 8(r1)
/* 80167C28 00164B68  90 01 00 0C */	stw r0, 0xc(r1)
/* 80167C2C 00164B6C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80167C30 00164B70  EC 00 E8 28 */	fsubs f0, f0, f29
/* 80167C34 00164B74  EC 38 00 32 */	fmuls f1, f24, f0
/* 80167C38 00164B78  FC 00 08 90 */	fmr f0, f1
/* 80167C3C 00164B7C  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 80167C40 00164B80  40 80 00 08 */	bge .L_80167C48
/* 80167C44 00164B84  FC 00 08 50 */	fneg f0, f1
.L_80167C48:
/* 80167C48 00164B88  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80167C4C 00164B8C  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 80167C50 00164B90  FC 00 00 1E */	fctiwz f0, f0
/* 80167C54 00164B94  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80167C58 00164B98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80167C5C 00164B9C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80167C60 00164BA0  7C 7D 02 14 */	add r3, r29, r0
/* 80167C64 00164BA4  C0 03 00 04 */	lfs f0, 4(r3)
/* 80167C68 00164BA8  EF 9B 00 32 */	fmuls f28, f27, f0
/* 80167C6C 00164BAC  40 80 00 30 */	bge .L_80167C9C
/* 80167C70 00164BB0  C0 02 A6 30 */	lfs f0, lbl_80518990@sda21(r2)
/* 80167C74 00164BB4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80167C78 00164BB8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80167C7C 00164BBC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80167C80 00164BC0  FC 00 00 1E */	fctiwz f0, f0
/* 80167C84 00164BC4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80167C88 00164BC8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80167C8C 00164BCC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80167C90 00164BD0  7C 03 04 2E */	lfsx f0, r3, r0
/* 80167C94 00164BD4  FC 00 00 50 */	fneg f0, f0
/* 80167C98 00164BD8  48 00 00 24 */	b .L_80167CBC
.L_80167C9C:
/* 80167C9C 00164BDC  EC 01 07 F2 */	fmuls f0, f1, f31
/* 80167CA0 00164BE0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80167CA4 00164BE4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80167CA8 00164BE8  FC 00 00 1E */	fctiwz f0, f0
/* 80167CAC 00164BEC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80167CB0 00164BF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80167CB4 00164BF4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80167CB8 00164BF8  7C 03 04 2E */	lfsx f0, r3, r0
.L_80167CBC:
/* 80167CBC 00164BFC  EE FB 00 32 */	fmuls f23, f27, f0
/* 80167CC0 00164C00  C0 1E 02 F4 */	lfs f0, 0x2f4(r30)
/* 80167CC4 00164C04  C0 3E 02 F8 */	lfs f1, 0x2f8(r30)
/* 80167CC8 00164C08  7F 64 DB 78 */	mr r4, r27
/* 80167CCC 00164C0C  C0 5E 02 FC */	lfs f2, 0x2fc(r30)
/* 80167CD0 00164C10  EC 00 B8 2A */	fadds f0, f0, f23
/* 80167CD4 00164C14  EC 21 D0 2A */	fadds f1, f1, f26
/* 80167CD8 00164C18  EC 42 E0 2A */	fadds f2, f2, f28
/* 80167CDC 00164C1C  D0 1E 02 F4 */	stfs f0, 0x2f4(r30)
/* 80167CE0 00164C20  D0 3E 02 F8 */	stfs f1, 0x2f8(r30)
/* 80167CE4 00164C24  D0 5E 02 FC */	stfs f2, 0x2fc(r30)
/* 80167CE8 00164C28  80 7E 01 78 */	lwz r3, 0x178(r30)
/* 80167CEC 00164C2C  48 04 03 7D */	bl getAt__Q24Game11DynParticleFi
/* 80167CF0 00164C30  D2 E3 00 00 */	stfs f23, 0(r3)
/* 80167CF4 00164C34  7F 64 DB 78 */	mr r4, r27
/* 80167CF8 00164C38  D3 43 00 04 */	stfs f26, 4(r3)
/* 80167CFC 00164C3C  D3 83 00 08 */	stfs f28, 8(r3)
/* 80167D00 00164C40  80 7E 01 78 */	lwz r3, 0x178(r30)
/* 80167D04 00164C44  48 04 03 65 */	bl getAt__Q24Game11DynParticleFi
/* 80167D08 00164C48  D3 23 00 18 */	stfs f25, 0x18(r3)
/* 80167D0C 00164C4C  3B 7B 00 01 */	addi r27, r27, 1
.L_80167D10:
/* 80167D10 00164C50  7C 1B F8 00 */	cmpw r27, r31
/* 80167D14 00164C54  41 80 FF 0C */	blt .L_80167C20
/* 80167D18 00164C58  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 80167D1C 00164C5C  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 80167D20 00164C60  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 80167D24 00164C64  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 80167D28 00164C68  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 80167D2C 00164C6C  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 80167D30 00164C70  E3 81 00 98 */	psq_l f28, 152(r1), 0, qr0
/* 80167D34 00164C74  CB 81 00 90 */	lfd f28, 0x90(r1)
/* 80167D38 00164C78  E3 61 00 88 */	psq_l f27, 136(r1), 0, qr0
/* 80167D3C 00164C7C  CB 61 00 80 */	lfd f27, 0x80(r1)
/* 80167D40 00164C80  E3 41 00 78 */	psq_l f26, 120(r1), 0, qr0
/* 80167D44 00164C84  CB 41 00 70 */	lfd f26, 0x70(r1)
/* 80167D48 00164C88  E3 21 00 68 */	psq_l f25, 104(r1), 0, qr0
/* 80167D4C 00164C8C  CB 21 00 60 */	lfd f25, 0x60(r1)
/* 80167D50 00164C90  E3 01 00 58 */	psq_l f24, 88(r1), 0, qr0
/* 80167D54 00164C94  CB 01 00 50 */	lfd f24, 0x50(r1)
/* 80167D58 00164C98  E2 E1 00 48 */	psq_l f23, 72(r1), 0, qr0
/* 80167D5C 00164C9C  CA E1 00 40 */	lfd f23, 0x40(r1)
/* 80167D60 00164CA0  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 80167D64 00164CA4  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80167D68 00164CA8  7C 08 03 A6 */	mtlr r0
/* 80167D6C 00164CAC  38 21 00 D0 */	addi r1, r1, 0xd0
/* 80167D70 00164CB0  4E 80 00 20 */	blr 
.endfn setupParticles_tall__Q24Game6PelletFv

.fn panmodokiCarryable__Q24Game6PelletFv, global
/* 80167D74 00164CB4  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 80167D78 00164CB8  A0 03 02 44 */	lhz r0, 0x244(r3)
/* 80167D7C 00164CBC  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 80167D80 00164CC0  7C 00 00 34 */	cntlzw r0, r0
/* 80167D84 00164CC4  54 03 D9 7E */	srwi r3, r0, 5
/* 80167D88 00164CC8  4E 80 00 20 */	blr 
.endfn panmodokiCarryable__Q24Game6PelletFv

.fn isCarried__Q24Game6PelletFv, global
/* 80167D8C 00164CCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80167D90 00164CD0  7C 08 02 A6 */	mflr r0
/* 80167D94 00164CD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80167D98 00164CD8  88 03 03 F6 */	lbz r0, 0x3f6(r3)
/* 80167D9C 00164CDC  28 00 00 00 */	cmplwi r0, 0
/* 80167DA0 00164CE0  40 82 00 1C */	bne .L_80167DBC
/* 80167DA4 00164CE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80167DA8 00164CE8  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80167DAC 00164CEC  7D 89 03 A6 */	mtctr r12
/* 80167DB0 00164CF0  4E 80 04 21 */	bctrl 
/* 80167DB4 00164CF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80167DB8 00164CF8  41 82 00 0C */	beq .L_80167DC4
.L_80167DBC:
/* 80167DBC 00164CFC  38 60 00 01 */	li r3, 1
/* 80167DC0 00164D00  48 00 00 08 */	b .L_80167DC8
.L_80167DC4:
/* 80167DC4 00164D04  38 60 00 00 */	li r3, 0
.L_80167DC8:
/* 80167DC8 00164D08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80167DCC 00164D0C  7C 08 03 A6 */	mtlr r0
/* 80167DD0 00164D10  38 21 00 10 */	addi r1, r1, 0x10
/* 80167DD4 00164D14  4E 80 00 20 */	blr 
.endfn isCarried__Q24Game6PelletFv

.fn isPicked__Q24Game6PelletFv, weak
/* 80167DD8 00164D18  88 03 03 D0 */	lbz r0, 0x3d0(r3)
/* 80167DDC 00164D1C  54 03 07 FE */	clrlwi r3, r0, 0x1f
/* 80167DE0 00164D20  4E 80 00 20 */	blr 
.endfn isPicked__Q24Game6PelletFv

.fn finishDisplayCarryInfo__Q24Game6PelletFv, global
/* 80167DE4 00164D24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80167DE8 00164D28  7C 08 02 A6 */	mflr r0
/* 80167DEC 00164D2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80167DF0 00164D30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80167DF4 00164D34  7C 7F 1B 78 */	mr r31, r3
/* 80167DF8 00164D38  80 63 03 98 */	lwz r3, 0x398(r3)
/* 80167DFC 00164D3C  28 03 00 00 */	cmplwi r3, 0
/* 80167E00 00164D40  41 82 00 14 */	beq .L_80167E14
/* 80167E04 00164D44  38 63 00 48 */	addi r3, r3, 0x48
/* 80167E08 00164D48  4B FB 31 C9 */	bl disappear__9CarryInfoFv
/* 80167E0C 00164D4C  38 00 00 00 */	li r0, 0
/* 80167E10 00164D50  90 1F 03 98 */	stw r0, 0x398(r31)
.L_80167E14:
/* 80167E14 00164D54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80167E18 00164D58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80167E1C 00164D5C  7C 08 03 A6 */	mtlr r0
/* 80167E20 00164D60  38 21 00 10 */	addi r1, r1, 0x10
/* 80167E24 00164D64  4E 80 00 20 */	blr 
.endfn finishDisplayCarryInfo__Q24Game6PelletFv

.fn getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam, global
/* 80167E28 00164D68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80167E2C 00164D6C  7C 08 02 A6 */	mflr r0
/* 80167E30 00164D70  C0 22 A5 C8 */	lfs f1, lbl_80518928@sda21(r2)
/* 80167E34 00164D74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80167E38 00164D78  38 00 00 00 */	li r0, 0
/* 80167E3C 00164D7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80167E40 00164D80  7C 9F 23 78 */	mr r31, r4
/* 80167E44 00164D84  93 C1 00 08 */	stw r30, 8(r1)
/* 80167E48 00164D88  7C 7E 1B 78 */	mr r30, r3
/* 80167E4C 00164D8C  90 04 00 00 */	stw r0, 0(r4)
/* 80167E50 00164D90  38 00 00 01 */	li r0, 1
/* 80167E54 00164D94  C0 03 01 B0 */	lfs f0, 0x1b0(r3)
/* 80167E58 00164D98  D0 04 00 04 */	stfs f0, 4(r4)
/* 80167E5C 00164D9C  C0 03 01 B4 */	lfs f0, 0x1b4(r3)
/* 80167E60 00164DA0  D0 04 00 08 */	stfs f0, 8(r4)
/* 80167E64 00164DA4  C0 03 01 B8 */	lfs f0, 0x1b8(r3)
/* 80167E68 00164DA8  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80167E6C 00164DAC  80 83 03 5C */	lwz r4, 0x35c(r3)
/* 80167E70 00164DB0  C0 04 00 C0 */	lfs f0, 0xc0(r4)
/* 80167E74 00164DB4  EC 01 00 2A */	fadds f0, f1, f0
/* 80167E78 00164DB8  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80167E7C 00164DBC  98 1F 00 14 */	stb r0, 0x14(r31)
/* 80167E80 00164DC0  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80167E84 00164DC4  48 00 2A ED */	bl getTotalCarryPikmins__Q24Game6PelletFv
/* 80167E88 00164DC8  B0 7F 00 18 */	sth r3, 0x18(r31)
/* 80167E8C 00164DCC  80 1E 03 D8 */	lwz r0, 0x3d8(r30)
/* 80167E90 00164DD0  2C 00 00 00 */	cmpwi r0, 0
/* 80167E94 00164DD4  40 81 00 08 */	ble .L_80167E9C
/* 80167E98 00164DD8  48 00 00 0C */	b .L_80167EA4
.L_80167E9C:
/* 80167E9C 00164DDC  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 80167EA0 00164DE0  80 03 01 20 */	lwz r0, 0x120(r3)
.L_80167EA4:
/* 80167EA4 00164DE4  B0 1F 00 16 */	sth r0, 0x16(r31)
/* 80167EA8 00164DE8  80 1E 03 D4 */	lwz r0, 0x3d4(r30)
/* 80167EAC 00164DEC  98 1F 00 15 */	stb r0, 0x15(r31)
/* 80167EB0 00164DF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80167EB4 00164DF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80167EB8 00164DF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80167EBC 00164DFC  7C 08 03 A6 */	mtlr r0
/* 80167EC0 00164E00  38 21 00 10 */	addi r1, r1, 0x10
/* 80167EC4 00164E04  4E 80 00 20 */	blr 
.endfn getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam

.fn setCarryColor__Q24Game6PelletFi, global
/* 80167EC8 00164E08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80167ECC 00164E0C  7C 08 02 A6 */	mflr r0
/* 80167ED0 00164E10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80167ED4 00164E14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80167ED8 00164E18  7C 9F 23 78 */	mr r31, r4
/* 80167EDC 00164E1C  93 C1 00 08 */	stw r30, 8(r1)
/* 80167EE0 00164E20  7C 7E 1B 78 */	mr r30, r3
/* 80167EE4 00164E24  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80167EE8 00164E28  80 05 00 44 */	lwz r0, 0x44(r5)
/* 80167EEC 00164E2C  2C 00 00 01 */	cmpwi r0, 1
/* 80167EF0 00164E30  40 82 00 24 */	bne .L_80167F14
/* 80167EF4 00164E34  80 1E 03 D4 */	lwz r0, 0x3d4(r30)
/* 80167EF8 00164E38  7C 1F 00 00 */	cmpw r31, r0
/* 80167EFC 00164E3C  41 82 00 18 */	beq .L_80167F14
/* 80167F00 00164E40  93 FE 03 D4 */	stw r31, 0x3d4(r30)
/* 80167F04 00164E44  81 83 00 00 */	lwz r12, 0(r3)
/* 80167F08 00164E48  81 8C 02 0C */	lwz r12, 0x20c(r12)
/* 80167F0C 00164E4C  7D 89 03 A6 */	mtctr r12
/* 80167F10 00164E50  4E 80 04 21 */	bctrl 
.L_80167F14:
/* 80167F14 00164E54  93 FE 03 D4 */	stw r31, 0x3d4(r30)
/* 80167F18 00164E58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80167F1C 00164E5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80167F20 00164E60  83 C1 00 08 */	lwz r30, 8(r1)
/* 80167F24 00164E64  7C 08 03 A6 */	mtlr r0
/* 80167F28 00164E68  38 21 00 10 */	addi r1, r1, 0x10
/* 80167F2C 00164E6C  4E 80 00 20 */	blr 
.endfn setCarryColor__Q24Game6PelletFi

.fn sound_otakaraEventStart__Q24Game6PelletFv, weak
/* 80167F30 00164E70  4E 80 00 20 */	blr 
.endfn sound_otakaraEventStart__Q24Game6PelletFv

.fn clearCarryColor__Q24Game6PelletFv, global
/* 80167F34 00164E74  38 00 00 05 */	li r0, 5
/* 80167F38 00164E78  90 03 03 D4 */	stw r0, 0x3d4(r3)
/* 80167F3C 00164E7C  4E 80 00 20 */	blr 
.endfn clearCarryColor__Q24Game6PelletFv

.fn getVelocity__Q24Game6PelletFv, global
/* 80167F40 00164E80  C0 04 01 BC */	lfs f0, 0x1bc(r4)
/* 80167F44 00164E84  D0 03 00 00 */	stfs f0, 0(r3)
/* 80167F48 00164E88  C0 04 01 C0 */	lfs f0, 0x1c0(r4)
/* 80167F4C 00164E8C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80167F50 00164E90  C0 04 01 C4 */	lfs f0, 0x1c4(r4)
/* 80167F54 00164E94  D0 03 00 08 */	stfs f0, 8(r3)
/* 80167F58 00164E98  4E 80 00 20 */	blr 
.endfn getVelocity__Q24Game6PelletFv

.fn "setVelocity__Q24Game6PelletFR10Vector3<f>", global
/* 80167F5C 00164E9C  C0 04 00 00 */	lfs f0, 0(r4)
/* 80167F60 00164EA0  D0 03 01 BC */	stfs f0, 0x1bc(r3)
/* 80167F64 00164EA4  C0 04 00 04 */	lfs f0, 4(r4)
/* 80167F68 00164EA8  D0 03 01 C0 */	stfs f0, 0x1c0(r3)
/* 80167F6C 00164EAC  C0 04 00 08 */	lfs f0, 8(r4)
/* 80167F70 00164EB0  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
/* 80167F74 00164EB4  4E 80 00 20 */	blr 
.endfn "setVelocity__Q24Game6PelletFR10Vector3<f>"

.fn allocateTexCaster__Q24Game6PelletFv, global
/* 80167F78 00164EB8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80167F7C 00164EBC  7C 08 02 A6 */	mflr r0
/* 80167F80 00164EC0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80167F84 00164EC4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80167F88 00164EC8  7C 7F 1B 78 */	mr r31, r3
/* 80167F8C 00164ECC  81 83 00 00 */	lwz r12, 0(r3)
/* 80167F90 00164ED0  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80167F94 00164ED4  7D 89 03 A6 */	mtctr r12
/* 80167F98 00164ED8  4E 80 04 21 */	bctrl 
/* 80167F9C 00164EDC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80167FA0 00164EE0  28 00 00 03 */	cmplwi r0, 3
/* 80167FA4 00164EE4  41 82 00 24 */	beq .L_80167FC8
/* 80167FA8 00164EE8  7F E3 FB 78 */	mr r3, r31
/* 80167FAC 00164EEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80167FB0 00164EF0  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80167FB4 00164EF4  7D 89 03 A6 */	mtctr r12
/* 80167FB8 00164EF8  4E 80 04 21 */	bctrl 
/* 80167FBC 00164EFC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80167FC0 00164F00  28 00 00 04 */	cmplwi r0, 4
/* 80167FC4 00164F04  40 82 00 A4 */	bne .L_80168068
.L_80167FC8:
/* 80167FC8 00164F08  80 1F 03 28 */	lwz r0, 0x328(r31)
/* 80167FCC 00164F0C  28 00 00 00 */	cmplwi r0, 0
/* 80167FD0 00164F10  40 82 00 98 */	bne .L_80168068
/* 80167FD4 00164F14  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 80167FD8 00164F18  C0 3F 03 AC */	lfs f1, 0x3ac(r31)
/* 80167FDC 00164F1C  C0 43 00 B0 */	lfs f2, 0xb0(r3)
/* 80167FE0 00164F20  C0 02 A6 10 */	lfs f0, lbl_80518970@sda21(r2)
/* 80167FE4 00164F24  D0 21 00 08 */	stfs f1, 8(r1)
/* 80167FE8 00164F28  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80167FEC 00164F2C  C0 3F 03 B0 */	lfs f1, 0x3b0(r31)
/* 80167FF0 00164F30  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80167FF4 00164F34  C0 3F 03 B4 */	lfs f1, 0x3b4(r31)
/* 80167FF8 00164F38  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80167FFC 00164F3C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80168000 00164F40  4B F6 15 A1 */	bl rand
/* 80168004 00164F44  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80168008 00164F48  3C 00 43 30 */	lis r0, 0x4330
/* 8016800C 00164F4C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80168010 00164F50  38 81 00 08 */	addi r4, r1, 8
/* 80168014 00164F54  C8 62 A5 D0 */	lfd f3, lbl_80518930@sda21(r2)
/* 80168018 00164F58  90 01 00 18 */	stw r0, 0x18(r1)
/* 8016801C 00164F5C  C0 22 A5 E0 */	lfs f1, lbl_80518940@sda21(r2)
/* 80168020 00164F60  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 80168024 00164F64  C0 02 A6 28 */	lfs f0, lbl_80518988@sda21(r2)
/* 80168028 00164F68  EC 42 18 28 */	fsubs f2, f2, f3
/* 8016802C 00164F6C  80 6D 96 50 */	lwz r3, sInstance__Q29TexCaster3Mgr@sda21(r13)
/* 80168030 00164F70  EC 22 08 24 */	fdivs f1, f2, f1
/* 80168034 00164F74  EC 20 00 72 */	fmuls f1, f0, f1
/* 80168038 00164F78  48 0D 4C 0D */	bl create__Q29TexCaster3MgrFRQ23Sys6Spheref
/* 8016803C 00164F7C  90 7F 03 28 */	stw r3, 0x328(r31)
/* 80168040 00164F80  80 7F 03 28 */	lwz r3, 0x328(r31)
/* 80168044 00164F84  28 03 00 00 */	cmplwi r3, 0
/* 80168048 00164F88  41 82 00 20 */	beq .L_80168068
/* 8016804C 00164F8C  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 80168050 00164F90  28 00 00 00 */	cmplwi r0, 0
/* 80168054 00164F94  41 82 00 0C */	beq .L_80168060
/* 80168058 00164F98  48 0D 49 65 */	bl hide__Q29TexCaster6CasterFv
/* 8016805C 00164F9C  48 00 00 0C */	b .L_80168068
.L_80168060:
/* 80168060 00164FA0  C0 22 A5 B8 */	lfs f1, lbl_80518918@sda21(r2)
/* 80168064 00164FA4  48 0D 49 6D */	bl fadein__Q29TexCaster6CasterFf
.L_80168068:
/* 80168068 00164FA8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016806C 00164FAC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80168070 00164FB0  7C 08 03 A6 */	mtlr r0
/* 80168074 00164FB4  38 21 00 30 */	addi r1, r1, 0x30
/* 80168078 00164FB8  4E 80 00 20 */	blr 
.endfn allocateTexCaster__Q24Game6PelletFv

.fn onSetPosition__Q24Game6PelletFv, global
/* 8016807C 00164FBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168080 00164FC0  7C 08 02 A6 */	mflr r0
/* 80168084 00164FC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168088 00164FC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016808C 00164FCC  7C 7F 1B 78 */	mr r31, r3
/* 80168090 00164FD0  93 C1 00 08 */	stw r30, 8(r1)
/* 80168094 00164FD4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80168098 00164FD8  80 84 00 44 */	lwz r4, 0x44(r4)
/* 8016809C 00164FDC  2C 04 00 04 */	cmpwi r4, 4
/* 801680A0 00164FE0  41 82 01 28 */	beq .L_801681C8
/* 801680A4 00164FE4  80 BF 00 B8 */	lwz r5, 0xb8(r31)
/* 801680A8 00164FE8  3B C0 00 00 */	li r30, 0
/* 801680AC 00164FEC  28 05 00 00 */	cmplwi r5, 0
/* 801680B0 00164FF0  40 82 00 34 */	bne .L_801680E4
/* 801680B4 00164FF4  88 0D 93 24 */	lbz r0, mDebug__Q24Game9PelletMgr@sda21(r13)
/* 801680B8 00164FF8  28 00 00 00 */	cmplwi r0, 0
/* 801680BC 00164FFC  40 82 00 28 */	bne .L_801680E4
/* 801680C0 00165000  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 801680C4 00165004  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 801680C8 00165008  C0 23 01 B0 */	lfs f1, 0x1b0(r3)
/* 801680CC 0016500C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801680D0 00165010  40 81 00 14 */	ble .L_801680E4
/* 801680D4 00165014  88 1F 03 C4 */	lbz r0, 0x3c4(r31)
/* 801680D8 00165018  28 00 00 00 */	cmplwi r0, 0
/* 801680DC 0016501C  40 82 00 08 */	bne .L_801680E4
/* 801680E0 00165020  3B C0 00 01 */	li r30, 1
.L_801680E4:
/* 801680E4 00165024  2C 04 00 01 */	cmpwi r4, 1
/* 801680E8 00165028  40 82 00 58 */	bne .L_80168140
/* 801680EC 0016502C  28 05 00 00 */	cmplwi r5, 0
/* 801680F0 00165030  40 82 00 50 */	bne .L_80168140
/* 801680F4 00165034  88 1F 03 C4 */	lbz r0, 0x3c4(r31)
/* 801680F8 00165038  28 00 00 00 */	cmplwi r0, 0
/* 801680FC 0016503C  40 82 00 44 */	bne .L_80168140
/* 80168100 00165040  88 1F 03 2C */	lbz r0, 0x32c(r31)
/* 80168104 00165044  28 00 00 04 */	cmplwi r0, 4
/* 80168108 00165048  40 82 00 0C */	bne .L_80168114
/* 8016810C 0016504C  3B C0 00 00 */	li r30, 0
/* 80168110 00165050  48 00 00 30 */	b .L_80168140
.L_80168114:
/* 80168114 00165054  28 00 00 05 */	cmplwi r0, 5
/* 80168118 00165058  40 82 00 0C */	bne .L_80168124
/* 8016811C 0016505C  3B C0 00 00 */	li r30, 0
/* 80168120 00165060  48 00 00 20 */	b .L_80168140
.L_80168124:
/* 80168124 00165064  28 00 00 06 */	cmplwi r0, 6
/* 80168128 00165068  40 82 00 18 */	bne .L_80168140
/* 8016812C 0016506C  7F E3 FB 78 */	mr r3, r31
/* 80168130 00165070  48 00 06 6D */	bl getStateID__Q24Game6PelletFv
/* 80168134 00165074  2C 03 00 05 */	cmpwi r3, 5
/* 80168138 00165078  41 82 00 08 */	beq .L_80168140
/* 8016813C 0016507C  3B C0 00 01 */	li r30, 1
.L_80168140:
/* 80168140 00165080  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80168144 00165084  41 82 00 84 */	beq .L_801681C8
/* 80168148 00165088  80 6D 94 D0 */	lwz r3, mgr__Q24Game12ItemTreasure@sda21(r13)
/* 8016814C 0016508C  81 83 00 00 */	lwz r12, 0(r3)
/* 80168150 00165090  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 80168154 00165094  7D 89 03 A6 */	mtctr r12
/* 80168158 00165098  4E 80 04 21 */	bctrl 
/* 8016815C 0016509C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80168160 001650A0  41 82 00 4C */	beq .L_801681AC
/* 80168164 001650A4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80168168 001650A8  38 9F 03 AC */	addi r4, r31, 0x3ac
/* 8016816C 001650AC  81 83 00 04 */	lwz r12, 4(r3)
/* 80168170 001650B0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80168174 001650B4  7D 89 03 A6 */	mtctr r12
/* 80168178 001650B8  4E 80 04 21 */	bctrl 
/* 8016817C 001650BC  D0 3F 03 B0 */	stfs f1, 0x3b0(r31)
/* 80168180 001650C0  7F C3 F3 78 */	mr r3, r30
/* 80168184 001650C4  38 80 00 00 */	li r4, 0
/* 80168188 001650C8  4B FD 2E 41 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8016818C 001650CC  7F C3 F3 78 */	mr r3, r30
/* 80168190 001650D0  38 9F 03 AC */	addi r4, r31, 0x3ac
/* 80168194 001650D4  38 A0 00 00 */	li r5, 0
/* 80168198 001650D8  4B FD 30 11 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8016819C 001650DC  7F C3 F3 78 */	mr r3, r30
/* 801681A0 001650E0  7F E4 FB 78 */	mr r4, r31
/* 801681A4 001650E4  48 08 BB BD */	bl setTreasure__Q34Game12ItemTreasure4ItemFPQ24Game6Pellet
/* 801681A8 001650E8  48 00 00 20 */	b .L_801681C8
.L_801681AC:
/* 801681AC 001650EC  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 801681B0 001650F0  3C A0 80 48 */	lis r5, lbl_8047E38C@ha
/* 801681B4 001650F4  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 801681B8 001650F8  38 80 09 16 */	li r4, 0x916
/* 801681BC 001650FC  38 A5 E3 8C */	addi r5, r5, lbl_8047E38C@l
/* 801681C0 00165100  4C C6 31 82 */	crclr 6
/* 801681C4 00165104  4B EC 24 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801681C8:
/* 801681C8 00165108  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 801681CC 0016510C  38 7F 01 7C */	addi r3, r31, 0x17c
/* 801681D0 00165110  38 A4 41 E4 */	addi r5, r4, "zero__10Vector3<f>"@l
/* 801681D4 00165114  38 9F 03 AC */	addi r4, r31, 0x3ac
/* 801681D8 00165118  4B FD 1F 01 */	bl "initPosition__Q24Game5RigidFR10Vector3<f>R10Vector3<f>"
/* 801681DC 0016511C  80 9F 01 80 */	lwz r4, 0x180(r31)
/* 801681E0 00165120  7F E3 FB 78 */	mr r3, r31
/* 801681E4 00165124  80 1F 01 84 */	lwz r0, 0x184(r31)
/* 801681E8 00165128  90 9F 01 38 */	stw r4, 0x138(r31)
/* 801681EC 0016512C  90 1F 01 3C */	stw r0, 0x13c(r31)
/* 801681F0 00165130  80 9F 01 88 */	lwz r4, 0x188(r31)
/* 801681F4 00165134  80 1F 01 8C */	lwz r0, 0x18c(r31)
/* 801681F8 00165138  90 9F 01 40 */	stw r4, 0x140(r31)
/* 801681FC 0016513C  90 1F 01 44 */	stw r0, 0x144(r31)
/* 80168200 00165140  80 9F 01 90 */	lwz r4, 0x190(r31)
/* 80168204 00165144  80 1F 01 94 */	lwz r0, 0x194(r31)
/* 80168208 00165148  90 9F 01 48 */	stw r4, 0x148(r31)
/* 8016820C 0016514C  90 1F 01 4C */	stw r0, 0x14c(r31)
/* 80168210 00165150  80 9F 01 98 */	lwz r4, 0x198(r31)
/* 80168214 00165154  80 1F 01 9C */	lwz r0, 0x19c(r31)
/* 80168218 00165158  90 9F 01 50 */	stw r4, 0x150(r31)
/* 8016821C 0016515C  90 1F 01 54 */	stw r0, 0x154(r31)
/* 80168220 00165160  80 9F 01 A0 */	lwz r4, 0x1a0(r31)
/* 80168224 00165164  80 1F 01 A4 */	lwz r0, 0x1a4(r31)
/* 80168228 00165168  90 9F 01 58 */	stw r4, 0x158(r31)
/* 8016822C 0016516C  90 1F 01 5C */	stw r0, 0x15c(r31)
/* 80168230 00165170  80 9F 01 A8 */	lwz r4, 0x1a8(r31)
/* 80168234 00165174  80 1F 01 AC */	lwz r0, 0x1ac(r31)
/* 80168238 00165178  90 9F 01 60 */	stw r4, 0x160(r31)
/* 8016823C 0016517C  90 1F 01 64 */	stw r0, 0x164(r31)
/* 80168240 00165180  C0 1F 03 AC */	lfs f0, 0x3ac(r31)
/* 80168244 00165184  D0 1F 04 44 */	stfs f0, 0x444(r31)
/* 80168248 00165188  C0 1F 03 B0 */	lfs f0, 0x3b0(r31)
/* 8016824C 0016518C  D0 1F 04 48 */	stfs f0, 0x448(r31)
/* 80168250 00165190  C0 1F 03 B4 */	lfs f0, 0x3b4(r31)
/* 80168254 00165194  D0 1F 04 4C */	stfs f0, 0x44c(r31)
/* 80168258 00165198  48 04 00 21 */	bl updateParticlePositions__Q24Game11DynCreatureFv
/* 8016825C 0016519C  C0 22 A5 B0 */	lfs f1, lbl_80518910@sda21(r2)
/* 80168260 001651A0  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80168264 001651A4  D0 3F 01 7C */	stfs f1, 0x17c(r31)
/* 80168268 001651A8  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 8016826C 001651AC  88 1F 03 2C */	lbz r0, 0x32c(r31)
/* 80168270 001651B0  28 00 00 01 */	cmplwi r0, 1
/* 80168274 001651B4  40 82 00 0C */	bne .L_80168280
/* 80168278 001651B8  C0 02 A6 38 */	lfs f0, lbl_80518998@sda21(r2)
/* 8016827C 001651BC  D0 1F 01 18 */	stfs f0, 0x118(r31)
.L_80168280:
/* 80168280 001651C0  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 80168284 001651C4  C0 42 A6 3C */	lfs f2, lbl_8051899C@sda21(r2)
/* 80168288 001651C8  C0 C3 00 D0 */	lfs f6, 0xd0(r3)
/* 8016828C 001651CC  C0 03 00 C0 */	lfs f0, 0xc0(r3)
/* 80168290 001651D0  C0 63 00 A0 */	lfs f3, 0xa0(r3)
/* 80168294 001651D4  EC E0 30 24 */	fdivs f7, f0, f6
/* 80168298 001651D8  C0 82 A5 DC */	lfs f4, lbl_8051893C@sda21(r2)
/* 8016829C 001651DC  C0 A2 A5 B0 */	lfs f5, lbl_80518910@sda21(r2)
/* 801682A0 001651E0  C0 1F 02 C0 */	lfs f0, 0x2c0(r31)
/* 801682A4 001651E4  C0 22 A5 B8 */	lfs f1, lbl_80518918@sda21(r2)
/* 801682A8 001651E8  EC C3 30 24 */	fdivs f6, f3, f6
/* 801682AC 001651EC  EC 67 01 F2 */	fmuls f3, f7, f7
/* 801682B0 001651F0  EC C6 01 B2 */	fmuls f6, f6, f6
/* 801682B4 001651F4  EC 43 10 24 */	fdivs f2, f3, f2
/* 801682B8 001651F8  EC 46 11 3A */	fmadds f2, f6, f4, f2
/* 801682BC 001651FC  EC 26 00 72 */	fmuls f1, f6, f1
/* 801682C0 00165200  EC 45 00 B2 */	fmuls f2, f5, f2
/* 801682C4 00165204  EC 25 00 72 */	fmuls f1, f5, f1
/* 801682C8 00165208  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801682CC 0016520C  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 801682D0 00165210  C0 1F 02 C4 */	lfs f0, 0x2c4(r31)
/* 801682D4 00165214  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801682D8 00165218  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 801682DC 0016521C  C0 1F 02 C8 */	lfs f0, 0x2c8(r31)
/* 801682E0 00165220  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801682E4 00165224  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 801682E8 00165228  C0 1F 02 D0 */	lfs f0, 0x2d0(r31)
/* 801682EC 0016522C  EC 00 00 72 */	fmuls f0, f0, f1
/* 801682F0 00165230  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 801682F4 00165234  C0 1F 02 D4 */	lfs f0, 0x2d4(r31)
/* 801682F8 00165238  EC 00 00 72 */	fmuls f0, f0, f1
/* 801682FC 0016523C  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 80168300 00165240  C0 1F 02 D8 */	lfs f0, 0x2d8(r31)
/* 80168304 00165244  EC 00 00 72 */	fmuls f0, f0, f1
/* 80168308 00165248  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 8016830C 0016524C  C0 1F 02 E0 */	lfs f0, 0x2e0(r31)
/* 80168310 00165250  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80168314 00165254  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 80168318 00165258  C0 1F 02 E4 */	lfs f0, 0x2e4(r31)
/* 8016831C 0016525C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80168320 00165260  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 80168324 00165264  C0 1F 02 E8 */	lfs f0, 0x2e8(r31)
/* 80168328 00165268  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8016832C 0016526C  D0 1F 02 E8 */	stfs f0, 0x2e8(r31)
/* 80168330 00165270  C0 1F 03 AC */	lfs f0, 0x3ac(r31)
/* 80168334 00165274  D0 1F 04 44 */	stfs f0, 0x444(r31)
/* 80168338 00165278  C0 1F 03 B0 */	lfs f0, 0x3b0(r31)
/* 8016833C 0016527C  D0 1F 04 48 */	stfs f0, 0x448(r31)
/* 80168340 00165280  C0 1F 03 B4 */	lfs f0, 0x3b4(r31)
/* 80168344 00165284  D0 1F 04 4C */	stfs f0, 0x44c(r31)
/* 80168348 00165288  88 1F 02 F1 */	lbz r0, 0x2f1(r31)
/* 8016834C 0016528C  60 00 00 01 */	ori r0, r0, 1
/* 80168350 00165290  98 1F 02 F1 */	stb r0, 0x2f1(r31)
/* 80168354 00165294  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168358 00165298  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016835C 0016529C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168360 001652A0  7C 08 03 A6 */	mtlr r0
/* 80168364 001652A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80168368 001652A8  4E 80 00 20 */	blr 
.endfn onSetPosition__Q24Game6PelletFv

.fn setPanModokiRotation__Q24Game6PelletFf, global
/* 8016836C 001652AC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80168370 001652B0  7C 08 02 A6 */	mflr r0
/* 80168374 001652B4  C0 42 A5 B4 */	lfs f2, lbl_80518914@sda21(r2)
/* 80168378 001652B8  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016837C 001652BC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80168380 001652C0  7C 7F 1B 78 */	mr r31, r3
/* 80168384 001652C4  D0 23 03 B8 */	stfs f1, 0x3b8(r3)
/* 80168388 001652C8  C0 83 01 3C */	lfs f4, 0x13c(r3)
/* 8016838C 001652CC  D0 81 00 08 */	stfs f4, 8(r1)
/* 80168390 001652D0  EC 04 01 32 */	fmuls f0, f4, f4
/* 80168394 001652D4  C0 63 01 4C */	lfs f3, 0x14c(r3)
/* 80168398 001652D8  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 8016839C 001652DC  EC A3 00 F2 */	fmuls f5, f3, f3
/* 801683A0 001652E0  C0 63 01 5C */	lfs f3, 0x15c(r3)
/* 801683A4 001652E4  EC 00 28 2A */	fadds f0, f0, f5
/* 801683A8 001652E8  EC C3 00 F2 */	fmuls f6, f3, f3
/* 801683AC 001652EC  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 801683B0 001652F0  EC 06 00 2A */	fadds f0, f6, f0
/* 801683B4 001652F4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801683B8 001652F8  40 81 00 20 */	ble .L_801683D8
/* 801683BC 001652FC  EC 04 29 3A */	fmadds f0, f4, f4, f5
/* 801683C0 00165300  EC 86 00 2A */	fadds f4, f6, f0
/* 801683C4 00165304  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 801683C8 00165308  40 81 00 14 */	ble .L_801683DC
/* 801683CC 0016530C  FC 00 20 34 */	frsqrte f0, f4
/* 801683D0 00165310  EC 80 01 32 */	fmuls f4, f0, f4
/* 801683D4 00165314  48 00 00 08 */	b .L_801683DC
.L_801683D8:
/* 801683D8 00165318  FC 80 10 90 */	fmr f4, f2
.L_801683DC:
/* 801683DC 0016531C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 801683E0 00165320  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 801683E4 00165324  40 81 00 30 */	ble .L_80168414
/* 801683E8 00165328  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 801683EC 0016532C  C0 61 00 08 */	lfs f3, 8(r1)
/* 801683F0 00165330  EC 80 20 24 */	fdivs f4, f0, f4
/* 801683F4 00165334  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801683F8 00165338  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801683FC 0016533C  EC 63 01 32 */	fmuls f3, f3, f4
/* 80168400 00165340  EC 42 01 32 */	fmuls f2, f2, f4
/* 80168404 00165344  EC 00 01 32 */	fmuls f0, f0, f4
/* 80168408 00165348  D0 61 00 08 */	stfs f3, 8(r1)
/* 8016840C 0016534C  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80168410 00165350  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_80168414:
/* 80168414 00165354  38 61 00 14 */	addi r3, r1, 0x14
/* 80168418 00165358  38 81 00 08 */	addi r4, r1, 8
/* 8016841C 0016535C  48 2B FB 75 */	bl "makeNaturalPosture__7MatrixfFR10Vector3<f>f"
/* 80168420 00165360  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 80168424 00165364  38 7F 01 F8 */	addi r3, r31, 0x1f8
/* 80168428 00165368  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8016842C 0016536C  38 9F 01 38 */	addi r4, r31, 0x138
/* 80168430 00165370  90 BF 01 38 */	stw r5, 0x138(r31)
/* 80168434 00165374  90 1F 01 3C */	stw r0, 0x13c(r31)
/* 80168438 00165378  80 A1 00 1C */	lwz r5, 0x1c(r1)
/* 8016843C 0016537C  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80168440 00165380  90 BF 01 40 */	stw r5, 0x140(r31)
/* 80168444 00165384  90 1F 01 44 */	stw r0, 0x144(r31)
/* 80168448 00165388  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 8016844C 0016538C  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80168450 00165390  90 BF 01 48 */	stw r5, 0x148(r31)
/* 80168454 00165394  90 1F 01 4C */	stw r0, 0x14c(r31)
/* 80168458 00165398  80 A1 00 2C */	lwz r5, 0x2c(r1)
/* 8016845C 0016539C  80 01 00 30 */	lwz r0, 0x30(r1)
/* 80168460 001653A0  90 BF 01 50 */	stw r5, 0x150(r31)
/* 80168464 001653A4  90 1F 01 54 */	stw r0, 0x154(r31)
/* 80168468 001653A8  80 A1 00 34 */	lwz r5, 0x34(r1)
/* 8016846C 001653AC  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80168470 001653B0  90 BF 01 58 */	stw r5, 0x158(r31)
/* 80168474 001653B4  90 1F 01 5C */	stw r0, 0x15c(r31)
/* 80168478 001653B8  80 A1 00 3C */	lwz r5, 0x3c(r1)
/* 8016847C 001653BC  80 01 00 40 */	lwz r0, 0x40(r1)
/* 80168480 001653C0  90 BF 01 60 */	stw r5, 0x160(r31)
/* 80168484 001653C4  90 1F 01 64 */	stw r0, 0x164(r31)
/* 80168488 001653C8  48 2A A7 B1 */	bl fromMatrixf__4QuatFR7Matrixf
/* 8016848C 001653CC  38 7F 01 F8 */	addi r3, r31, 0x1f8
/* 80168490 001653D0  48 2A A3 BD */	bl normalise__4QuatFv
/* 80168494 001653D4  C0 1F 03 AC */	lfs f0, 0x3ac(r31)
/* 80168498 001653D8  38 7F 01 38 */	addi r3, r31, 0x138
/* 8016849C 001653DC  38 9F 01 80 */	addi r4, r31, 0x180
/* 801684A0 001653E0  D0 1F 01 44 */	stfs f0, 0x144(r31)
/* 801684A4 001653E4  C0 1F 03 B0 */	lfs f0, 0x3b0(r31)
/* 801684A8 001653E8  D0 1F 01 54 */	stfs f0, 0x154(r31)
/* 801684AC 001653EC  C0 1F 03 B4 */	lfs f0, 0x3b4(r31)
/* 801684B0 001653F0  D0 1F 01 64 */	stfs f0, 0x164(r31)
/* 801684B4 001653F4  4B F8 1E 19 */	bl PSMTXCopy
/* 801684B8 001653F8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801684BC 001653FC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801684C0 00165400  7C 08 03 A6 */	mtlr r0
/* 801684C4 00165404  38 21 00 50 */	addi r1, r1, 0x50
/* 801684C8 00165408  4E 80 00 20 */	blr 
.endfn setPanModokiRotation__Q24Game6PelletFf

.fn setOrientation__Q24Game6PelletFR7Matrixf, global
/* 801684CC 0016540C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801684D0 00165410  7C 08 02 A6 */	mflr r0
/* 801684D4 00165414  90 01 00 34 */	stw r0, 0x34(r1)
/* 801684D8 00165418  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801684DC 0016541C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 801684E0 00165420  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801684E4 00165424  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801684E8 00165428  7C 7F 1B 78 */	mr r31, r3
/* 801684EC 0016542C  7C 9E 23 78 */	mr r30, r4
/* 801684F0 00165430  38 61 00 08 */	addi r3, r1, 8
/* 801684F4 00165434  48 2A 9E D5 */	bl __ct__4QuatFv
/* 801684F8 00165438  7F C4 F3 78 */	mr r4, r30
/* 801684FC 0016543C  38 61 00 08 */	addi r3, r1, 8
/* 80168500 00165440  48 2A A7 39 */	bl fromMatrixf__4QuatFR7Matrixf
/* 80168504 00165444  38 61 00 08 */	addi r3, r1, 8
/* 80168508 00165448  48 2A A3 45 */	bl normalise__4QuatFv
/* 8016850C 0016544C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80168510 00165450  38 7F 01 38 */	addi r3, r31, 0x138
/* 80168514 00165454  38 81 00 08 */	addi r4, r1, 8
/* 80168518 00165458  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 8016851C 0016545C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80168520 00165460  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 80168524 00165464  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80168528 00165468  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8016852C 0016546C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80168530 00165470  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 80168534 00165474  48 2C 06 55 */	bl makeQ__7MatrixfFR4Quat
/* 80168538 00165478  C0 1F 03 AC */	lfs f0, 0x3ac(r31)
/* 8016853C 0016547C  38 7F 01 38 */	addi r3, r31, 0x138
/* 80168540 00165480  38 9F 01 80 */	addi r4, r31, 0x180
/* 80168544 00165484  D0 1F 01 44 */	stfs f0, 0x144(r31)
/* 80168548 00165488  C0 1F 03 B0 */	lfs f0, 0x3b0(r31)
/* 8016854C 0016548C  D0 1F 01 54 */	stfs f0, 0x154(r31)
/* 80168550 00165490  C0 1F 03 B4 */	lfs f0, 0x3b4(r31)
/* 80168554 00165494  D0 1F 01 64 */	stfs f0, 0x164(r31)
/* 80168558 00165498  4B F8 1D 75 */	bl PSMTXCopy
/* 8016855C 0016549C  C0 3F 01 4C */	lfs f1, 0x14c(r31)
/* 80168560 001654A0  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80168564 001654A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168568 001654A8  40 81 00 10 */	ble .L_80168578
/* 8016856C 001654AC  C0 3F 01 40 */	lfs f1, 0x140(r31)
/* 80168570 001654B0  C3 FF 01 60 */	lfs f31, 0x160(r31)
/* 80168574 001654B4  48 00 00 0C */	b .L_80168580
.L_80168578:
/* 80168578 001654B8  C0 3F 01 38 */	lfs f1, 0x138(r31)
/* 8016857C 001654BC  C3 FF 01 58 */	lfs f31, 0x158(r31)
.L_80168580:
/* 80168580 001654C0  C0 02 A6 40 */	lfs f0, lbl_805189A0@sda21(r2)
/* 80168584 001654C4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80168588 001654C8  40 80 00 0C */	bge .L_80168594
/* 8016858C 001654CC  FF E0 00 90 */	fmr f31, f0
/* 80168590 001654D0  48 00 00 14 */	b .L_801685A4
.L_80168594:
/* 80168594 001654D4  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 80168598 001654D8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8016859C 001654DC  40 81 00 08 */	ble .L_801685A4
/* 801685A0 001654E0  FF E0 00 90 */	fmr f31, f0
.L_801685A4:
/* 801685A4 001654E4  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 801685A8 001654E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801685AC 001654EC  40 81 00 E4 */	ble .L_80168690
/* 801685B0 001654F0  C0 02 A6 40 */	lfs f0, lbl_805189A0@sda21(r2)
/* 801685B4 001654F4  38 00 00 00 */	li r0, 0
/* 801685B8 001654F8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801685BC 001654FC  4C 41 13 82 */	cror 2, 1, 2
/* 801685C0 00165500  40 82 00 18 */	bne .L_801685D8
/* 801685C4 00165504  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 801685C8 00165508  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801685CC 0016550C  4C 40 13 82 */	cror 2, 0, 2
/* 801685D0 00165510  40 82 00 08 */	bne .L_801685D8
/* 801685D4 00165514  38 00 00 01 */	li r0, 1
.L_801685D8:
/* 801685D8 00165518  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801685DC 0016551C  40 82 00 20 */	bne .L_801685FC
/* 801685E0 00165520  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 801685E4 00165524  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 801685E8 00165528  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 801685EC 0016552C  38 80 09 C8 */	li r4, 0x9c8
/* 801685F0 00165530  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 801685F4 00165534  4C C6 31 82 */	crclr 6
/* 801685F8 00165538  4B EC 20 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801685FC:
/* 801685FC 0016553C  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 80168600 00165540  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80168604 00165544  4C 41 13 82 */	cror 2, 1, 2
/* 80168608 00165548  40 82 00 0C */	bne .L_80168614
/* 8016860C 0016554C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80168610 00165550  48 00 00 78 */	b .L_80168688
.L_80168614:
/* 80168614 00165554  C0 02 A6 40 */	lfs f0, lbl_805189A0@sda21(r2)
/* 80168618 00165558  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8016861C 0016555C  4C 40 13 82 */	cror 2, 0, 2
/* 80168620 00165560  40 82 00 0C */	bne .L_8016862C
/* 80168624 00165564  C0 02 A6 44 */	lfs f0, lbl_805189A4@sda21(r2)
/* 80168628 00165568  48 00 00 60 */	b .L_80168688
.L_8016862C:
/* 8016862C 0016556C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80168630 00165570  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80168634 00165574  40 80 00 30 */	bge .L_80168664
/* 80168638 00165578  FC 00 F8 50 */	fneg f0, f31
/* 8016863C 0016557C  C0 22 A6 48 */	lfs f1, lbl_805189A8@sda21(r2)
/* 80168640 00165580  EC 21 00 32 */	fmuls f1, f1, f0
/* 80168644 00165584  4B F5 95 09 */	bl __cvt_fp2unsigned
/* 80168648 00165588  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 8016864C 0016558C  54 60 10 3A */	slwi r0, r3, 2
/* 80168650 00165590  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 80168654 00165594  C0 02 A6 4C */	lfs f0, lbl_805189AC@sda21(r2)
/* 80168658 00165598  7C 23 04 2E */	lfsx f1, r3, r0
/* 8016865C 0016559C  EC 01 00 2A */	fadds f0, f1, f0
/* 80168660 001655A0  48 00 00 28 */	b .L_80168688
.L_80168664:
/* 80168664 001655A4  C0 02 A6 48 */	lfs f0, lbl_805189A8@sda21(r2)
/* 80168668 001655A8  EC 20 07 F2 */	fmuls f1, f0, f31
/* 8016866C 001655AC  4B F5 94 E1 */	bl __cvt_fp2unsigned
/* 80168670 001655B0  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 80168674 001655B4  54 60 10 3A */	slwi r0, r3, 2
/* 80168678 001655B8  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 8016867C 001655BC  C0 02 A6 4C */	lfs f0, lbl_805189AC@sda21(r2)
/* 80168680 001655C0  7C 23 04 2E */	lfsx f1, r3, r0
/* 80168684 001655C4  EC 00 08 28 */	fsubs f0, f0, f1
.L_80168688:
/* 80168688 001655C8  D0 1F 03 B8 */	stfs f0, 0x3b8(r31)
/* 8016868C 001655CC  48 00 00 E4 */	b .L_80168770
.L_80168690:
/* 80168690 001655D0  C0 02 A6 40 */	lfs f0, lbl_805189A0@sda21(r2)
/* 80168694 001655D4  38 00 00 00 */	li r0, 0
/* 80168698 001655D8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8016869C 001655DC  4C 41 13 82 */	cror 2, 1, 2
/* 801686A0 001655E0  40 82 00 18 */	bne .L_801686B8
/* 801686A4 001655E4  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 801686A8 001655E8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801686AC 001655EC  4C 40 13 82 */	cror 2, 0, 2
/* 801686B0 001655F0  40 82 00 08 */	bne .L_801686B8
/* 801686B4 001655F4  38 00 00 01 */	li r0, 1
.L_801686B8:
/* 801686B8 001655F8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801686BC 001655FC  40 82 00 20 */	bne .L_801686DC
/* 801686C0 00165600  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 801686C4 00165604  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 801686C8 00165608  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 801686CC 0016560C  38 80 09 CB */	li r4, 0x9cb
/* 801686D0 00165610  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 801686D4 00165614  4C C6 31 82 */	crclr 6
/* 801686D8 00165618  4B EC 1F 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801686DC:
/* 801686DC 0016561C  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 801686E0 00165620  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801686E4 00165624  4C 41 13 82 */	cror 2, 1, 2
/* 801686E8 00165628  40 82 00 0C */	bne .L_801686F4
/* 801686EC 0016562C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 801686F0 00165630  48 00 00 78 */	b .L_80168768
.L_801686F4:
/* 801686F4 00165634  C0 02 A6 40 */	lfs f0, lbl_805189A0@sda21(r2)
/* 801686F8 00165638  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801686FC 0016563C  4C 40 13 82 */	cror 2, 0, 2
/* 80168700 00165640  40 82 00 0C */	bne .L_8016870C
/* 80168704 00165644  C0 02 A6 44 */	lfs f0, lbl_805189A4@sda21(r2)
/* 80168708 00165648  48 00 00 60 */	b .L_80168768
.L_8016870C:
/* 8016870C 0016564C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80168710 00165650  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80168714 00165654  40 80 00 30 */	bge .L_80168744
/* 80168718 00165658  FC 00 F8 50 */	fneg f0, f31
/* 8016871C 0016565C  C0 22 A6 48 */	lfs f1, lbl_805189A8@sda21(r2)
/* 80168720 00165660  EC 21 00 32 */	fmuls f1, f1, f0
/* 80168724 00165664  4B F5 94 29 */	bl __cvt_fp2unsigned
/* 80168728 00165668  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 8016872C 0016566C  54 60 10 3A */	slwi r0, r3, 2
/* 80168730 00165670  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 80168734 00165674  C0 02 A6 4C */	lfs f0, lbl_805189AC@sda21(r2)
/* 80168738 00165678  7C 23 04 2E */	lfsx f1, r3, r0
/* 8016873C 0016567C  EC 01 00 2A */	fadds f0, f1, f0
/* 80168740 00165680  48 00 00 28 */	b .L_80168768
.L_80168744:
/* 80168744 00165684  C0 02 A6 48 */	lfs f0, lbl_805189A8@sda21(r2)
/* 80168748 00165688  EC 20 07 F2 */	fmuls f1, f0, f31
/* 8016874C 0016568C  4B F5 94 01 */	bl __cvt_fp2unsigned
/* 80168750 00165690  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 80168754 00165694  54 60 10 3A */	slwi r0, r3, 2
/* 80168758 00165698  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 8016875C 0016569C  C0 02 A6 4C */	lfs f0, lbl_805189AC@sda21(r2)
/* 80168760 001656A0  7C 23 04 2E */	lfsx f1, r3, r0
/* 80168764 001656A4  EC 00 08 28 */	fsubs f0, f0, f1
.L_80168768:
/* 80168768 001656A8  FC 00 00 50 */	fneg f0, f0
/* 8016876C 001656AC  D0 1F 03 B8 */	stfs f0, 0x3b8(r31)
.L_80168770:
/* 80168770 001656B0  C0 3F 03 B8 */	lfs f1, 0x3b8(r31)
/* 80168774 001656B4  48 2A 94 5D */	bl roundAng__Ff
/* 80168778 001656B8  D0 3F 03 B8 */	stfs f1, 0x3b8(r31)
/* 8016877C 001656BC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80168780 001656C0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80168784 001656C4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80168788 001656C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016878C 001656CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80168790 001656D0  7C 08 03 A6 */	mtlr r0
/* 80168794 001656D4  38 21 00 30 */	addi r1, r1, 0x30
/* 80168798 001656D8  4E 80 00 20 */	blr 
.endfn setOrientation__Q24Game6PelletFR7Matrixf

.fn getStateID__Q24Game6PelletFv, global
/* 8016879C 001656DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801687A0 001656E0  7C 08 02 A6 */	mflr r0
/* 801687A4 001656E4  7C 64 1B 78 */	mr r4, r3
/* 801687A8 001656E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801687AC 001656EC  80 63 03 C8 */	lwz r3, 0x3c8(r3)
/* 801687B0 001656F0  48 00 97 E1 */	bl "getCurrID__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
/* 801687B4 001656F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801687B8 001656F8  7C 08 03 A6 */	mtlr r0
/* 801687BC 001656FC  38 21 00 10 */	addi r1, r1, 0x10
/* 801687C0 00165700  4E 80 00 20 */	blr 
.endfn getStateID__Q24Game6PelletFv

.fn bounceCallback__Q24Game6PelletFPQ23Sys8Triangle, global
/* 801687C4 00165704  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801687C8 00165708  7C 08 02 A6 */	mflr r0
/* 801687CC 0016570C  90 01 00 84 */	stw r0, 0x84(r1)
/* 801687D0 00165710  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 801687D4 00165714  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 801687D8 00165718  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801687DC 0016571C  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801687E0 00165720  93 A1 00 64 */	stw r29, 0x64(r1)
/* 801687E4 00165724  7C 7E 1B 78 */	mr r30, r3
/* 801687E8 00165728  38 61 00 14 */	addi r3, r1, 0x14
/* 801687EC 0016572C  7F C4 F3 78 */	mr r4, r30
/* 801687F0 00165730  80 BE 03 5C */	lwz r5, 0x35c(r30)
/* 801687F4 00165734  81 9E 00 00 */	lwz r12, 0(r30)
/* 801687F8 00165738  C3 E5 00 B0 */	lfs f31, 0xb0(r5)
/* 801687FC 0016573C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80168800 00165740  7D 89 03 A6 */	mtctr r12
/* 80168804 00165744  4E 80 04 21 */	bctrl 
/* 80168808 00165748  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8016880C 0016574C  3B E0 00 00 */	li r31, 0
/* 80168810 00165750  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80168814 00165754  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80168818 00165758  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8016881C 0016575C  C0 02 A5 C8 */	lfs f0, lbl_80518928@sda21(r2)
/* 80168820 00165760  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80168824 00165764  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80168828 00165768  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8016882C 0016576C  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 80168830 00165770  C0 23 00 C0 */	lfs f1, 0xc0(r3)
/* 80168834 00165774  EC 02 08 28 */	fsubs f0, f2, f1
/* 80168838 00165778  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8016883C 0016577C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80168840 00165780  40 81 00 0C */	ble .L_8016884C
/* 80168844 00165784  3B E0 00 02 */	li r31, 2
/* 80168848 00165788  48 00 00 14 */	b .L_8016885C
.L_8016884C:
/* 8016884C 0016578C  C0 02 A6 34 */	lfs f0, lbl_80518994@sda21(r2)
/* 80168850 00165790  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80168854 00165794  40 81 00 08 */	ble .L_8016885C
/* 80168858 00165798  3B E0 00 01 */	li r31, 1
.L_8016885C:
/* 8016885C 0016579C  7F C3 F3 78 */	mr r3, r30
/* 80168860 001657A0  38 A1 00 20 */	addi r5, r1, 0x20
/* 80168864 001657A4  38 80 00 00 */	li r4, 0
/* 80168868 001657A8  4B FD 32 D5 */	bl checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
/* 8016886C 001657AC  7C 60 1B 78 */	mr r0, r3
/* 80168870 001657B0  7F C3 F3 78 */	mr r3, r30
/* 80168874 001657B4  7C 1D 03 78 */	mr r29, r0
/* 80168878 001657B8  38 A1 00 20 */	addi r5, r1, 0x20
/* 8016887C 001657BC  38 80 00 00 */	li r4, 0
/* 80168880 001657C0  4B FD 32 BD */	bl checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
/* 80168884 001657C4  28 03 00 00 */	cmplwi r3, 0
/* 80168888 001657C8  41 82 01 14 */	beq .L_8016899C
/* 8016888C 001657CC  88 1E 03 24 */	lbz r0, 0x324(r30)
/* 80168890 001657D0  28 00 00 00 */	cmplwi r0, 0
/* 80168894 001657D4  40 82 00 FC */	bne .L_80168990
/* 80168898 001657D8  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8016889C 001657DC  38 80 00 00 */	li r4, 0
/* 801688A0 001657E0  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801688A4 001657E4  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 801688A8 001657E8  90 01 00 44 */	stw r0, 0x44(r1)
/* 801688AC 001657EC  38 03 6A 50 */	addi r0, r3, __vt__Q23efx8TSimple3@l
/* 801688B0 001657F0  3C 60 80 4E */	lis r3, __vt__Q23efx12TOtakaraDive@ha
/* 801688B4 001657F4  38 E0 02 79 */	li r7, 0x279
/* 801688B8 001657F8  90 01 00 44 */	stw r0, 0x44(r1)
/* 801688BC 001657FC  38 03 71 8C */	addi r0, r3, __vt__Q23efx12TOtakaraDive@l
/* 801688C0 00165800  38 C0 02 7A */	li r6, 0x27a
/* 801688C4 00165804  38 A0 02 7B */	li r5, 0x27b
/* 801688C8 00165808  B0 E1 00 48 */	sth r7, 0x48(r1)
/* 801688CC 0016580C  7F A3 EB 78 */	mr r3, r29
/* 801688D0 00165810  B0 C1 00 4A */	sth r6, 0x4a(r1)
/* 801688D4 00165814  B0 A1 00 4C */	sth r5, 0x4c(r1)
/* 801688D8 00165818  90 81 00 50 */	stw r4, 0x50(r1)
/* 801688DC 0016581C  90 81 00 54 */	stw r4, 0x54(r1)
/* 801688E0 00165820  90 81 00 58 */	stw r4, 0x58(r1)
/* 801688E4 00165824  90 01 00 44 */	stw r0, 0x44(r1)
/* 801688E8 00165828  81 9D 00 00 */	lwz r12, 0(r29)
/* 801688EC 0016582C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801688F0 00165830  7D 89 03 A6 */	mtctr r12
/* 801688F4 00165834  4E 80 04 21 */	bctrl 
/* 801688F8 00165838  C0 03 00 00 */	lfs f0, 0(r3)
/* 801688FC 0016583C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80168900 00165840  81 01 00 20 */	lwz r8, 0x20(r1)
/* 80168904 00165844  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 80168908 00165848  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8016890C 0016584C  38 A4 A7 EC */	addi r5, r4, __vt__Q23efx3Arg@l
/* 80168910 00165850  80 C1 00 28 */	lwz r6, 0x28(r1)
/* 80168914 00165854  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 80168918 00165858  81 3E 03 5C */	lwz r9, 0x35c(r30)
/* 8016891C 0016585C  38 61 00 44 */	addi r3, r1, 0x44
/* 80168920 00165860  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 80168924 00165864  38 81 00 30 */	addi r4, r1, 0x30
/* 80168928 00165868  C0 69 00 B0 */	lfs f3, 0xb0(r9)
/* 8016892C 0016586C  91 01 00 08 */	stw r8, 8(r1)
/* 80168930 00165870  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80168934 00165874  C0 41 00 08 */	lfs f2, 8(r1)
/* 80168938 00165878  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8016893C 0016587C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80168940 00165880  90 A1 00 30 */	stw r5, 0x30(r1)
/* 80168944 00165884  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80168948 00165888  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8016894C 0016588C  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80168950 00165890  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80168954 00165894  90 01 00 30 */	stw r0, 0x30(r1)
/* 80168958 00165898  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 8016895C 0016589C  48 24 CE 61 */	bl create__Q23efx12TOtakaraDiveFPQ23efx3Arg
/* 80168960 001658A0  80 7E 03 30 */	lwz r3, 0x330(r30)
/* 80168964 001658A4  38 9F 38 0B */	addi r4, r31, 0x380b
/* 80168968 001658A8  38 A0 00 00 */	li r5, 0
/* 8016896C 001658AC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80168970 001658B0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80168974 001658B4  7D 89 03 A6 */	mtctr r12
/* 80168978 001658B8  4E 80 04 21 */	bctrl 
/* 8016897C 001658BC  7F C3 F3 78 */	mr r3, r30
/* 80168980 001658C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168984 001658C4  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 80168988 001658C8  7D 89 03 A6 */	mtctr r12
/* 8016898C 001658CC  4E 80 04 21 */	bctrl 
.L_80168990:
/* 80168990 001658D0  38 00 00 01 */	li r0, 1
/* 80168994 001658D4  98 1E 03 24 */	stb r0, 0x324(r30)
/* 80168998 001658D8  48 00 00 68 */	b .L_80168A00
.L_8016899C:
/* 8016899C 001658DC  88 1E 03 24 */	lbz r0, 0x324(r30)
/* 801689A0 001658E0  28 00 00 00 */	cmplwi r0, 0
/* 801689A4 001658E4  40 82 00 5C */	bne .L_80168A00
/* 801689A8 001658E8  7F C3 F3 78 */	mr r3, r30
/* 801689AC 001658EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801689B0 001658F0  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801689B4 001658F4  7D 89 03 A6 */	mtctr r12
/* 801689B8 001658F8  4E 80 04 21 */	bctrl 
/* 801689BC 001658FC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801689C0 00165900  28 00 00 01 */	cmplwi r0, 1
/* 801689C4 00165904  41 82 00 3C */	beq .L_80168A00
/* 801689C8 00165908  80 7E 03 30 */	lwz r3, 0x330(r30)
/* 801689CC 0016590C  38 9F 38 08 */	addi r4, r31, 0x3808
/* 801689D0 00165910  38 A0 00 00 */	li r5, 0
/* 801689D4 00165914  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801689D8 00165918  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801689DC 0016591C  7D 89 03 A6 */	mtctr r12
/* 801689E0 00165920  4E 80 04 21 */	bctrl 
/* 801689E4 00165924  38 00 00 01 */	li r0, 1
/* 801689E8 00165928  7F C3 F3 78 */	mr r3, r30
/* 801689EC 0016592C  98 1E 03 24 */	stb r0, 0x324(r30)
/* 801689F0 00165930  81 9E 00 00 */	lwz r12, 0(r30)
/* 801689F4 00165934  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 801689F8 00165938  7D 89 03 A6 */	mtctr r12
/* 801689FC 0016593C  4E 80 04 21 */	bctrl 
.L_80168A00:
/* 80168A00 00165940  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80168A04 00165944  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80168A08 00165948  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80168A0C 0016594C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80168A10 00165950  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80168A14 00165954  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 80168A18 00165958  7C 08 03 A6 */	mtlr r0
/* 80168A1C 0016595C  38 21 00 80 */	addi r1, r1, 0x80
/* 80168A20 00165960  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game6PelletFPQ23Sys8Triangle

.fn onBounce__Q24Game6PelletFv, weak
/* 80168A24 00165964  4E 80 00 20 */	blr 
.endfn onBounce__Q24Game6PelletFv

.fn update__Q24Game6PelletFv, global
/* 80168A28 00165968  94 21 FD 10 */	stwu r1, -0x2f0(r1)
/* 80168A2C 0016596C  7C 08 02 A6 */	mflr r0
/* 80168A30 00165970  90 01 02 F4 */	stw r0, 0x2f4(r1)
/* 80168A34 00165974  DB E1 02 E0 */	stfd f31, 0x2e0(r1)
/* 80168A38 00165978  F3 E1 02 E8 */	psq_st f31, 744(r1), 0, qr0
/* 80168A3C 0016597C  DB C1 02 D0 */	stfd f30, 0x2d0(r1)
/* 80168A40 00165980  F3 C1 02 D8 */	psq_st f30, 728(r1), 0, qr0
/* 80168A44 00165984  DB A1 02 C0 */	stfd f29, 0x2c0(r1)
/* 80168A48 00165988  F3 A1 02 C8 */	psq_st f29, 712(r1), 0, qr0
/* 80168A4C 0016598C  DB 81 02 B0 */	stfd f28, 0x2b0(r1)
/* 80168A50 00165990  F3 81 02 B8 */	psq_st f28, 696(r1), 0, qr0
/* 80168A54 00165994  93 E1 02 AC */	stw r31, 0x2ac(r1)
/* 80168A58 00165998  93 C1 02 A8 */	stw r30, 0x2a8(r1)
/* 80168A5C 0016599C  93 A1 02 A4 */	stw r29, 0x2a4(r1)
/* 80168A60 001659A0  7C 7E 1B 78 */	mr r30, r3
/* 80168A64 001659A4  3C A0 80 48 */	lis r5, lbl_8047E318@ha
/* 80168A68 001659A8  7F C4 F3 78 */	mr r4, r30
/* 80168A6C 001659AC  38 61 00 14 */	addi r3, r1, 0x14
/* 80168A70 001659B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168A74 001659B4  3B E5 E3 18 */	addi r31, r5, lbl_8047E318@l
/* 80168A78 001659B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80168A7C 001659BC  7D 89 03 A6 */	mtctr r12
/* 80168A80 001659C0  4E 80 04 21 */	bctrl 
/* 80168A84 001659C4  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80168A88 001659C8  7F C3 F3 78 */	mr r3, r30
/* 80168A8C 001659CC  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80168A90 001659D0  38 A1 00 B0 */	addi r5, r1, 0xb0
/* 80168A94 001659D4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80168A98 001659D8  38 80 00 00 */	li r4, 0
/* 80168A9C 001659DC  D0 21 00 B0 */	stfs f1, 0xb0(r1)
/* 80168AA0 001659E0  D0 41 00 B4 */	stfs f2, 0xb4(r1)
/* 80168AA4 001659E4  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 80168AA8 001659E8  80 DE 03 5C */	lwz r6, 0x35c(r30)
/* 80168AAC 001659EC  C0 26 00 C0 */	lfs f1, 0xc0(r6)
/* 80168AB0 001659F0  EC 02 08 28 */	fsubs f0, f2, f1
/* 80168AB4 001659F4  D0 21 00 BC */	stfs f1, 0xbc(r1)
/* 80168AB8 001659F8  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 80168ABC 001659FC  4B FD 30 81 */	bl checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
/* 80168AC0 00165A00  28 03 00 00 */	cmplwi r3, 0
/* 80168AC4 00165A04  41 82 00 10 */	beq .L_80168AD4
/* 80168AC8 00165A08  38 00 00 01 */	li r0, 1
/* 80168ACC 00165A0C  98 1E 03 25 */	stb r0, 0x325(r30)
/* 80168AD0 00165A10  48 00 00 0C */	b .L_80168ADC
.L_80168AD4:
/* 80168AD4 00165A14  38 00 00 00 */	li r0, 0
/* 80168AD8 00165A18  98 1E 03 25 */	stb r0, 0x325(r30)
.L_80168ADC:
/* 80168ADC 00165A1C  7F C3 F3 78 */	mr r3, r30
/* 80168AE0 00165A20  48 00 29 F9 */	bl updateDiscoverDisable__Q24Game6PelletFv
/* 80168AE4 00165A24  80 7E 03 30 */	lwz r3, 0x330(r30)
/* 80168AE8 00165A28  28 03 00 00 */	cmplwi r3, 0
/* 80168AEC 00165A2C  41 82 01 7C */	beq .L_80168C68
/* 80168AF0 00165A30  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80168AF4 00165A34  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80168AF8 00165A38  7D 89 03 A6 */	mtctr r12
/* 80168AFC 00165A3C  4E 80 04 21 */	bctrl 
/* 80168B00 00165A40  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80168B04 00165A44  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80168B08 00165A48  2C 00 00 00 */	cmpwi r0, 0
/* 80168B0C 00165A4C  40 82 01 5C */	bne .L_80168C68
/* 80168B10 00165A50  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80168B14 00165A54  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 80168B18 00165A58  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80168B1C 00165A5C  40 82 01 4C */	bne .L_80168C68
/* 80168B20 00165A60  7F C3 F3 78 */	mr r3, r30
/* 80168B24 00165A64  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168B28 00165A68  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80168B2C 00165A6C  7D 89 03 A6 */	mtctr r12
/* 80168B30 00165A70  4E 80 04 21 */	bctrl 
/* 80168B34 00165A74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80168B38 00165A78  40 82 01 30 */	bne .L_80168C68
/* 80168B3C 00165A7C  7F C3 F3 78 */	mr r3, r30
/* 80168B40 00165A80  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168B44 00165A84  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80168B48 00165A88  7D 89 03 A6 */	mtctr r12
/* 80168B4C 00165A8C  4E 80 04 21 */	bctrl 
/* 80168B50 00165A90  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80168B54 00165A94  28 00 00 03 */	cmplwi r0, 3
/* 80168B58 00165A98  41 82 00 24 */	beq .L_80168B7C
/* 80168B5C 00165A9C  7F C3 F3 78 */	mr r3, r30
/* 80168B60 00165AA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168B64 00165AA4  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80168B68 00165AA8  7D 89 03 A6 */	mtctr r12
/* 80168B6C 00165AAC  4E 80 04 21 */	bctrl 
/* 80168B70 00165AB0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80168B74 00165AB4  28 00 00 04 */	cmplwi r0, 4
/* 80168B78 00165AB8  40 82 00 F0 */	bne .L_80168C68
.L_80168B7C:
/* 80168B7C 00165ABC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80168B80 00165AC0  28 00 00 00 */	cmplwi r0, 0
/* 80168B84 00165AC4  40 82 00 18 */	bne .L_80168B9C
/* 80168B88 00165AC8  38 7F 00 80 */	addi r3, r31, 0x80
/* 80168B8C 00165ACC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80168B90 00165AD0  38 80 01 D3 */	li r4, 0x1d3
/* 80168B94 00165AD4  4C C6 31 82 */	crclr 6
/* 80168B98 00165AD8  4B EC 1A A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80168B9C:
/* 80168B9C 00165ADC  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 80168BA0 00165AE0  28 1D 00 00 */	cmplwi r29, 0
/* 80168BA4 00165AE4  40 82 00 18 */	bne .L_80168BBC
/* 80168BA8 00165AE8  38 7F 00 80 */	addi r3, r31, 0x80
/* 80168BAC 00165AEC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80168BB0 00165AF0  38 80 01 DC */	li r4, 0x1dc
/* 80168BB4 00165AF4  4C C6 31 82 */	crclr 6
/* 80168BB8 00165AF8  4B EC 1A 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80168BBC:
/* 80168BBC 00165AFC  80 1D 00 04 */	lwz r0, 4(r29)
/* 80168BC0 00165B00  28 00 00 00 */	cmplwi r0, 0
/* 80168BC4 00165B04  40 82 00 18 */	bne .L_80168BDC
/* 80168BC8 00165B08  38 7F 00 8C */	addi r3, r31, 0x8c
/* 80168BCC 00165B0C  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80168BD0 00165B10  38 80 00 CF */	li r4, 0xcf
/* 80168BD4 00165B14  4C C6 31 82 */	crclr 6
/* 80168BD8 00165B18  4B EC 1A 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80168BDC:
/* 80168BDC 00165B1C  80 7D 00 04 */	lwz r3, 4(r29)
/* 80168BE0 00165B20  83 A3 00 04 */	lwz r29, 4(r3)
/* 80168BE4 00165B24  28 1D 00 00 */	cmplwi r29, 0
/* 80168BE8 00165B28  40 82 00 18 */	bne .L_80168C00
/* 80168BEC 00165B2C  38 7F 00 8C */	addi r3, r31, 0x8c
/* 80168BF0 00165B30  38 BF 00 98 */	addi r5, r31, 0x98
/* 80168BF4 00165B34  38 80 00 D1 */	li r4, 0xd1
/* 80168BF8 00165B38  4C C6 31 82 */	crclr 6
/* 80168BFC 00165B3C  4B EC 1A 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80168C00:
/* 80168C00 00165B40  81 9D 00 00 */	lwz r12, 0(r29)
/* 80168C04 00165B44  7F A3 EB 78 */	mr r3, r29
/* 80168C08 00165B48  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80168C0C 00165B4C  7D 89 03 A6 */	mtctr r12
/* 80168C10 00165B50  4E 80 04 21 */	bctrl 
/* 80168C14 00165B54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80168C18 00165B58  40 82 00 18 */	bne .L_80168C30
/* 80168C1C 00165B5C  38 7F 00 BC */	addi r3, r31, 0xbc
/* 80168C20 00165B60  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80168C24 00165B64  38 80 01 77 */	li r4, 0x177
/* 80168C28 00165B68  4C C6 31 82 */	crclr 6
/* 80168C2C 00165B6C  4B EC 1A 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80168C30:
/* 80168C30 00165B70  7F A3 EB 78 */	mr r3, r29
/* 80168C34 00165B74  81 9D 00 00 */	lwz r12, 0(r29)
/* 80168C38 00165B78  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80168C3C 00165B7C  7D 89 03 A6 */	mtctr r12
/* 80168C40 00165B80  4E 80 04 21 */	bctrl 
/* 80168C44 00165B84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80168C48 00165B88  40 82 00 20 */	bne .L_80168C68
/* 80168C4C 00165B8C  80 7E 03 30 */	lwz r3, 0x330(r30)
/* 80168C50 00165B90  38 80 40 02 */	li r4, 0x4002
/* 80168C54 00165B94  38 A0 00 00 */	li r5, 0
/* 80168C58 00165B98  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80168C5C 00165B9C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80168C60 00165BA0  7D 89 03 A6 */	mtctr r12
/* 80168C64 00165BA4  4E 80 04 21 */	bctrl 
.L_80168C68:
/* 80168C68 00165BA8  80 7E 03 34 */	lwz r3, 0x334(r30)
/* 80168C6C 00165BAC  38 81 00 A4 */	addi r4, r1, 0xa4
/* 80168C70 00165BB0  48 0C C3 CD */	bl "frameWork__Q24Game11PelletCarryFR10Vector3<f>"
/* 80168C74 00165BB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80168C78 00165BB8  41 82 00 54 */	beq .L_80168CCC
/* 80168C7C 00165BBC  80 1E 00 F0 */	lwz r0, 0xf0(r30)
/* 80168C80 00165BC0  28 00 00 00 */	cmplwi r0, 0
/* 80168C84 00165BC4  40 82 00 10 */	bne .L_80168C94
/* 80168C88 00165BC8  80 7E 03 34 */	lwz r3, 0x334(r30)
/* 80168C8C 00165BCC  48 0C C2 9D */	bl reset__Q24Game11PelletCarryFv
/* 80168C90 00165BD0  48 00 00 3C */	b .L_80168CCC
.L_80168C94:
/* 80168C94 00165BD4  7F C4 F3 78 */	mr r4, r30
/* 80168C98 00165BD8  38 61 00 08 */	addi r3, r1, 8
/* 80168C9C 00165BDC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168CA0 00165BE0  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80168CA4 00165BE4  7D 89 03 A6 */	mtctr r12
/* 80168CA8 00165BE8  4E 80 04 21 */	bctrl 
/* 80168CAC 00165BEC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80168CB0 00165BF0  7F C3 F3 78 */	mr r3, r30
/* 80168CB4 00165BF4  38 81 00 A4 */	addi r4, r1, 0xa4
/* 80168CB8 00165BF8  D0 01 00 A8 */	stfs f0, 0xa8(r1)
/* 80168CBC 00165BFC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168CC0 00165C00  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80168CC4 00165C04  7D 89 03 A6 */	mtctr r12
/* 80168CC8 00165C08  4E 80 04 21 */	bctrl 
.L_80168CCC:
/* 80168CCC 00165C0C  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 80168CD0 00165C10  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80168CD4 00165C14  40 82 00 0C */	bne .L_80168CE0
/* 80168CD8 00165C18  7F C3 F3 78 */	mr r3, r30
/* 80168CDC 00165C1C  4B FF D1 6D */	bl updateClaim__Q24Game6PelletFv
.L_80168CE0:
/* 80168CE0 00165C20  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 80168CE4 00165C24  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80168CE8 00165C28  41 82 00 74 */	beq .L_80168D5C
/* 80168CEC 00165C2C  83 BE 03 D8 */	lwz r29, 0x3d8(r30)
/* 80168CF0 00165C30  2C 1D 00 00 */	cmpwi r29, 0
/* 80168CF4 00165C34  40 81 00 08 */	ble .L_80168CFC
/* 80168CF8 00165C38  48 00 00 0C */	b .L_80168D04
.L_80168CFC:
/* 80168CFC 00165C3C  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 80168D00 00165C40  83 A3 01 20 */	lwz r29, 0x120(r3)
.L_80168D04:
/* 80168D04 00165C44  7F C3 F3 78 */	mr r3, r30
/* 80168D08 00165C48  48 00 1C 69 */	bl getTotalCarryPikmins__Q24Game6PelletFv
/* 80168D0C 00165C4C  7C 03 E8 00 */	cmpw r3, r29
/* 80168D10 00165C50  40 80 00 4C */	bge .L_80168D5C
/* 80168D14 00165C54  7F C3 F3 78 */	mr r3, r30
/* 80168D18 00165C58  38 80 00 00 */	li r4, 0
/* 80168D1C 00165C5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168D20 00165C60  81 8C 01 4C */	lwz r12, 0x14c(r12)
/* 80168D24 00165C64  7D 89 03 A6 */	mtctr r12
/* 80168D28 00165C68  4E 80 04 21 */	bctrl 
/* 80168D2C 00165C6C  80 7E 03 34 */	lwz r3, 0x334(r30)
/* 80168D30 00165C70  48 0C C1 F9 */	bl reset__Q24Game11PelletCarryFv
/* 80168D34 00165C74  88 1E 03 F6 */	lbz r0, 0x3f6(r30)
/* 80168D38 00165C78  28 00 00 00 */	cmplwi r0, 0
/* 80168D3C 00165C7C  40 82 00 20 */	bne .L_80168D5C
/* 80168D40 00165C80  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168D44 00165C84  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 80168D48 00165C88  7F C3 F3 78 */	mr r3, r30
/* 80168D4C 00165C8C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80168D50 00165C90  38 84 41 E4 */	addi r4, r4, "zero__10Vector3<f>"@l
/* 80168D54 00165C94  7D 89 03 A6 */	mtctr r12
/* 80168D58 00165C98  4E 80 04 21 */	bctrl 
.L_80168D5C:
/* 80168D5C 00165C9C  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 80168D60 00165CA0  38 9E 04 44 */	addi r4, r30, 0x444
/* 80168D64 00165CA4  4B FC DE DD */	bl getBoundingSphere__8CollTreeFRQ23Sys6Sphere
/* 80168D68 00165CA8  7F C3 F3 78 */	mr r3, r30
/* 80168D6C 00165CAC  4B FD 2F FD */	bl updateCell__Q24Game8CreatureFv
/* 80168D70 00165CB0  80 1E 03 58 */	lwz r0, 0x358(r30)
/* 80168D74 00165CB4  28 00 00 00 */	cmplwi r0, 0
/* 80168D78 00165CB8  41 82 00 38 */	beq .L_80168DB0
/* 80168D7C 00165CBC  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 80168D80 00165CC0  4B FC CD 1D */	bl update__8CollTreeFv
/* 80168D84 00165CC4  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 80168D88 00165CC8  38 9E 04 44 */	addi r4, r30, 0x444
/* 80168D8C 00165CCC  4B FC DE B5 */	bl getBoundingSphere__8CollTreeFRQ23Sys6Sphere
/* 80168D90 00165CD0  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 80168D94 00165CD4  38 80 00 00 */	li r4, 0
/* 80168D98 00165CD8  80 63 00 00 */	lwz r3, 0(r3)
/* 80168D9C 00165CDC  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 80168DA0 00165CE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80168DA4 00165CE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80168DA8 00165CE8  7D 89 03 A6 */	mtctr r12
/* 80168DAC 00165CEC  4E 80 04 21 */	bctrl 
.L_80168DB0:
/* 80168DB0 00165CF0  80 7E 03 C8 */	lwz r3, 0x3c8(r30)
/* 80168DB4 00165CF4  7F C4 F3 78 */	mr r4, r30
/* 80168DB8 00165CF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80168DBC 00165CFC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80168DC0 00165D00  7D 89 03 A6 */	mtctr r12
/* 80168DC4 00165D04  4E 80 04 21 */	bctrl 
/* 80168DC8 00165D08  80 7E 03 C8 */	lwz r3, 0x3c8(r30)
/* 80168DCC 00165D0C  7F C4 F3 78 */	mr r4, r30
/* 80168DD0 00165D10  48 00 91 C1 */	bl "getCurrID__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
/* 80168DD4 00165D14  2C 03 00 06 */	cmpwi r3, 6
/* 80168DD8 00165D18  40 82 00 1C */	bne .L_80168DF4
/* 80168DDC 00165D1C  38 61 00 98 */	addi r3, r1, 0x98
/* 80168DE0 00165D20  48 06 EA 29 */	bl __ct__Q24Game9AILODParmFv
/* 80168DE4 00165D24  7F C3 F3 78 */	mr r3, r30
/* 80168DE8 00165D28  38 81 00 98 */	addi r4, r1, 0x98
/* 80168DEC 00165D2C  48 06 EA 51 */	bl updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
/* 80168DF0 00165D30  48 00 0B 80 */	b .L_80169970
.L_80168DF4:
/* 80168DF4 00165D34  7F C3 F3 78 */	mr r3, r30
/* 80168DF8 00165D38  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168DFC 00165D3C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80168E00 00165D40  7D 89 03 A6 */	mtctr r12
/* 80168E04 00165D44  4E 80 04 21 */	bctrl 
/* 80168E08 00165D48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80168E0C 00165D4C  40 82 00 44 */	bne .L_80168E50
/* 80168E10 00165D50  38 61 00 8C */	addi r3, r1, 0x8c
/* 80168E14 00165D54  48 06 E9 F5 */	bl __ct__Q24Game9AILODParmFv
/* 80168E18 00165D58  7F C3 F3 78 */	mr r3, r30
/* 80168E1C 00165D5C  38 81 00 8C */	addi r4, r1, 0x8c
/* 80168E20 00165D60  48 06 EA 1D */	bl updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
/* 80168E24 00165D64  7F C3 F3 78 */	mr r3, r30
/* 80168E28 00165D68  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168E2C 00165D6C  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80168E30 00165D70  7D 89 03 A6 */	mtctr r12
/* 80168E34 00165D74  4E 80 04 21 */	bctrl 
/* 80168E38 00165D78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80168E3C 00165D7C  41 82 0B 34 */	beq .L_80169970
/* 80168E40 00165D80  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 80168E44 00165D84  60 00 00 34 */	ori r0, r0, 0x34
/* 80168E48 00165D88  98 1E 00 D8 */	stb r0, 0xd8(r30)
/* 80168E4C 00165D8C  48 00 0B 24 */	b .L_80169970
.L_80168E50:
/* 80168E50 00165D90  80 1E 00 B8 */	lwz r0, 0xb8(r30)
/* 80168E54 00165D94  28 00 00 00 */	cmplwi r0, 0
/* 80168E58 00165D98  41 82 00 1C */	beq .L_80168E74
/* 80168E5C 00165D9C  38 61 00 80 */	addi r3, r1, 0x80
/* 80168E60 00165DA0  48 06 E9 A9 */	bl __ct__Q24Game9AILODParmFv
/* 80168E64 00165DA4  7F C3 F3 78 */	mr r3, r30
/* 80168E68 00165DA8  38 81 00 80 */	addi r4, r1, 0x80
/* 80168E6C 00165DAC  48 06 E9 D1 */	bl updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
/* 80168E70 00165DB0  48 00 0B 00 */	b .L_80169970
.L_80168E74:
/* 80168E74 00165DB4  38 61 00 74 */	addi r3, r1, 0x74
/* 80168E78 00165DB8  48 06 E9 91 */	bl __ct__Q24Game9AILODParmFv
/* 80168E7C 00165DBC  7F C3 F3 78 */	mr r3, r30
/* 80168E80 00165DC0  38 81 00 74 */	addi r4, r1, 0x74
/* 80168E84 00165DC4  48 06 E9 B9 */	bl updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
/* 80168E88 00165DC8  7F C3 F3 78 */	mr r3, r30
/* 80168E8C 00165DCC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168E90 00165DD0  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80168E94 00165DD4  7D 89 03 A6 */	mtctr r12
/* 80168E98 00165DD8  4E 80 04 21 */	bctrl 
/* 80168E9C 00165DDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80168EA0 00165DE0  41 82 00 10 */	beq .L_80168EB0
/* 80168EA4 00165DE4  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 80168EA8 00165DE8  60 00 00 34 */	ori r0, r0, 0x34
/* 80168EAC 00165DEC  98 1E 00 D8 */	stb r0, 0xd8(r30)
.L_80168EB0:
/* 80168EB0 00165DF0  88 1E 03 64 */	lbz r0, 0x364(r30)
/* 80168EB4 00165DF4  38 A0 00 02 */	li r5, 2
/* 80168EB8 00165DF8  28 00 00 00 */	cmplwi r0, 0
/* 80168EBC 00165DFC  40 82 00 0C */	bne .L_80168EC8
/* 80168EC0 00165E00  38 80 00 01 */	li r4, 1
/* 80168EC4 00165E04  48 00 00 30 */	b .L_80168EF4
.L_80168EC8:
/* 80168EC8 00165E08  28 00 00 02 */	cmplwi r0, 2
/* 80168ECC 00165E0C  40 82 00 0C */	bne .L_80168ED8
/* 80168ED0 00165E10  38 80 00 00 */	li r4, 0
/* 80168ED4 00165E14  48 00 00 20 */	b .L_80168EF4
.L_80168ED8:
/* 80168ED8 00165E18  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 80168EDC 00165E1C  54 00 07 BE */	clrlwi r0, r0, 0x1e
/* 80168EE0 00165E20  2C 00 00 02 */	cmpwi r0, 2
/* 80168EE4 00165E24  41 80 00 0C */	blt .L_80168EF0
/* 80168EE8 00165E28  38 80 00 00 */	li r4, 0
/* 80168EEC 00165E2C  48 00 00 08 */	b .L_80168EF4
.L_80168EF0:
/* 80168EF0 00165E30  38 80 00 01 */	li r4, 1
.L_80168EF4:
/* 80168EF4 00165E34  88 7E 00 D8 */	lbz r3, 0xd8(r30)
/* 80168EF8 00165E38  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80168EFC 00165E3C  41 82 00 10 */	beq .L_80168F0C
/* 80168F00 00165E40  54 60 07 BE */	clrlwi r0, r3, 0x1e
/* 80168F04 00165E44  2C 00 00 01 */	cmpwi r0, 1
/* 80168F08 00165E48  41 80 00 08 */	blt .L_80168F10
.L_80168F0C:
/* 80168F0C 00165E4C  38 A0 00 01 */	li r5, 1
.L_80168F10:
/* 80168F10 00165E50  98 9E 03 9C */	stb r4, 0x39c(r30)
/* 80168F14 00165E54  88 0D 93 25 */	lbz r0, disableDynamics__Q24Game9PelletMgr@sda21(r13)
/* 80168F18 00165E58  28 00 00 00 */	cmplwi r0, 0
/* 80168F1C 00165E5C  40 82 00 10 */	bne .L_80168F2C
/* 80168F20 00165E60  88 1E 03 9C */	lbz r0, 0x39c(r30)
/* 80168F24 00165E64  28 00 00 00 */	cmplwi r0, 0
/* 80168F28 00165E68  40 82 04 3C */	bne .L_80169364
.L_80168F2C:
/* 80168F2C 00165E6C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80168F30 00165E70  C0 1E 03 AC */	lfs f0, 0x3ac(r30)
/* 80168F34 00165E74  C3 E3 00 54 */	lfs f31, 0x54(r3)
/* 80168F38 00165E78  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 80168F3C 00165E7C  C0 3E 03 B0 */	lfs f1, 0x3b0(r30)
/* 80168F40 00165E80  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 80168F44 00165E84  C0 1E 03 B4 */	lfs f0, 0x3b4(r30)
/* 80168F48 00165E88  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 80168F4C 00165E8C  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 80168F50 00165E90  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80168F54 00165E94  41 82 00 10 */	beq .L_80168F64
/* 80168F58 00165E98  C0 02 A5 D8 */	lfs f0, lbl_80518938@sda21(r2)
/* 80168F5C 00165E9C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80168F60 00165EA0  D0 01 00 68 */	stfs f0, 0x68(r1)
.L_80168F64:
/* 80168F64 00165EA4  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 80168F68 00165EA8  3B FE 01 BC */	addi r31, r30, 0x1bc
/* 80168F6C 00165EAC  C0 42 A5 B8 */	lfs f2, lbl_80518918@sda21(r2)
/* 80168F70 00165EB0  C0 23 00 C0 */	lfs f1, 0xc0(r3)
/* 80168F74 00165EB4  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80168F78 00165EB8  EC 22 00 72 */	fmuls f1, f2, f1
/* 80168F7C 00165EBC  D0 21 00 70 */	stfs f1, 0x70(r1)
/* 80168F80 00165EC0  D0 1E 01 E0 */	stfs f0, 0x1e0(r30)
/* 80168F84 00165EC4  D0 1E 01 E4 */	stfs f0, 0x1e4(r30)
/* 80168F88 00165EC8  D0 1E 01 E8 */	stfs f0, 0x1e8(r30)
/* 80168F8C 00165ECC  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 80168F90 00165ED0  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 80168F94 00165ED4  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 80168F98 00165ED8  88 1E 03 F6 */	lbz r0, 0x3f6(r30)
/* 80168F9C 00165EDC  28 00 00 00 */	cmplwi r0, 0
/* 80168FA0 00165EE0  40 82 00 10 */	bne .L_80168FB0
/* 80168FA4 00165EE4  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 80168FA8 00165EE8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80168FAC 00165EEC  41 82 00 10 */	beq .L_80168FBC
.L_80168FB0:
/* 80168FB0 00165EF0  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 80168FB4 00165EF4  28 00 00 00 */	cmplwi r0, 0
/* 80168FB8 00165EF8  40 82 00 18 */	bne .L_80168FD0
.L_80168FBC:
/* 80168FBC 00165EFC  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 80168FC0 00165F00  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80168FC4 00165F04  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 80168FC8 00165F08  EC 1F 00 7C */	fnmsubs f0, f31, f1, f0
/* 80168FCC 00165F0C  D0 1F 00 04 */	stfs f0, 4(r31)
.L_80168FD0:
/* 80168FD0 00165F10  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80168FD4 00165F14  7F C3 F3 78 */	mr r3, r30
/* 80168FD8 00165F18  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 80168FDC 00165F1C  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80168FE0 00165F20  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80168FE4 00165F24  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80168FE8 00165F28  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80168FEC 00165F2C  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80168FF0 00165F30  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80168FF4 00165F34  81 9E 00 00 */	lwz r12, 0(r30)
/* 80168FF8 00165F38  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 80168FFC 00165F3C  7D 89 03 A6 */	mtctr r12
/* 80169000 00165F40  4E 80 04 21 */	bctrl 
/* 80169004 00165F44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80169008 00165F48  41 82 00 58 */	beq .L_80169060
/* 8016900C 00165F4C  88 1E 03 2C */	lbz r0, 0x32c(r30)
/* 80169010 00165F50  28 00 00 01 */	cmplwi r0, 1
/* 80169014 00165F54  41 82 00 4C */	beq .L_80169060
/* 80169018 00165F58  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 8016901C 00165F5C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80169020 00165F60  40 82 00 40 */	bne .L_80169060
/* 80169024 00165F64  88 1E 03 F6 */	lbz r0, 0x3f6(r30)
/* 80169028 00165F68  28 00 00 00 */	cmplwi r0, 0
/* 8016902C 00165F6C  40 82 00 34 */	bne .L_80169060
/* 80169030 00165F70  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 80169034 00165F74  C0 1E 01 1C */	lfs f0, 0x11c(r30)
/* 80169038 00165F78  C0 41 00 5C */	lfs f2, 0x5c(r1)
/* 8016903C 00165F7C  EC 01 00 2A */	fadds f0, f1, f0
/* 80169040 00165F80  C0 21 00 60 */	lfs f1, 0x60(r1)
/* 80169044 00165F84  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80169048 00165F88  C0 1E 01 20 */	lfs f0, 0x120(r30)
/* 8016904C 00165F8C  EC 02 00 2A */	fadds f0, f2, f0
/* 80169050 00165F90  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80169054 00165F94  C0 1E 01 24 */	lfs f0, 0x124(r30)
/* 80169058 00165F98  EC 01 00 2A */	fadds f0, f1, f0
/* 8016905C 00165F9C  D0 01 00 60 */	stfs f0, 0x60(r1)
.L_80169060:
/* 80169060 00165FA0  C0 82 A5 B4 */	lfs f4, lbl_80518914@sda21(r2)
/* 80169064 00165FA4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80169068 00165FA8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8016906C 00165FAC  38 A0 00 00 */	li r5, 0
/* 80169070 00165FB0  D0 9E 01 1C */	stfs f4, 0x11c(r30)
/* 80169074 00165FB4  38 E1 00 64 */	addi r7, r1, 0x64
/* 80169078 00165FB8  C0 62 A5 B8 */	lfs f3, lbl_80518918@sda21(r2)
/* 8016907C 00165FBC  38 C1 00 58 */	addi r6, r1, 0x58
/* 80169080 00165FC0  D0 9E 01 20 */	stfs f4, 0x120(r30)
/* 80169084 00165FC4  38 00 FF FF */	li r0, -1
/* 80169088 00165FC8  C0 02 A6 50 */	lfs f0, lbl_805189B0@sda21(r2)
/* 8016908C 00165FCC  FC 20 F8 90 */	fmr f1, f31
/* 80169090 00165FD0  D0 9E 01 24 */	stfs f4, 0x124(r30)
/* 80169094 00165FD4  38 81 01 F8 */	addi r4, r1, 0x1f8
/* 80169098 00165FD8  90 A1 02 0C */	stw r5, 0x20c(r1)
/* 8016909C 00165FDC  C0 43 08 00 */	lfs f2, 0x800(r3)
/* 801690A0 00165FE0  90 E1 01 F8 */	stw r7, 0x1f8(r1)
/* 801690A4 00165FE4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801690A8 00165FE8  90 C1 01 FC */	stw r6, 0x1fc(r1)
/* 801690AC 00165FEC  D0 61 02 00 */	stfs f3, 0x200(r1)
/* 801690B0 00165FF0  D0 81 02 04 */	stfs f4, 0x204(r1)
/* 801690B4 00165FF4  90 A1 02 08 */	stw r5, 0x208(r1)
/* 801690B8 00165FF8  90 A1 02 3C */	stw r5, 0x23c(r1)
/* 801690BC 00165FFC  98 A1 02 6C */	stb r5, 0x26c(r1)
/* 801690C0 00166000  98 A1 02 11 */	stb r5, 0x211(r1)
/* 801690C4 00166004  98 A1 02 10 */	stb r5, 0x210(r1)
/* 801690C8 00166008  90 A1 02 40 */	stw r5, 0x240(r1)
/* 801690CC 0016600C  98 A1 02 88 */	stb r5, 0x288(r1)
/* 801690D0 00166010  90 A1 02 8C */	stw r5, 0x28c(r1)
/* 801690D4 00166014  D0 41 02 24 */	stfs f2, 0x224(r1)
/* 801690D8 00166018  D0 01 02 28 */	stfs f0, 0x228(r1)
/* 801690DC 0016601C  90 01 02 90 */	stw r0, 0x290(r1)
/* 801690E0 00166020  90 A1 02 44 */	stw r5, 0x244(r1)
/* 801690E4 00166024  98 A1 02 12 */	stb r5, 0x212(r1)
/* 801690E8 00166028  93 C1 02 0C */	stw r30, 0x20c(r1)
/* 801690EC 0016602C  81 83 00 04 */	lwz r12, 4(r3)
/* 801690F0 00166030  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801690F4 00166034  7D 89 03 A6 */	mtctr r12
/* 801690F8 00166038  4E 80 04 21 */	bctrl 
/* 801690FC 0016603C  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 80169100 00166040  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80169104 00166044  41 82 00 84 */	beq .L_80169188
/* 80169108 00166048  80 61 02 40 */	lwz r3, 0x240(r1)
/* 8016910C 0016604C  7C 03 00 D0 */	neg r0, r3
/* 80169110 00166050  7C 00 1B 78 */	or r0, r0, r3
/* 80169114 00166054  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 80169118 00166058  41 82 00 38 */	beq .L_80169150
/* 8016911C 0016605C  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 80169120 00166060  C0 01 02 58 */	lfs f0, 0x258(r1)
/* 80169124 00166064  C0 41 00 58 */	lfs f2, 0x58(r1)
/* 80169128 00166068  EC 01 00 32 */	fmuls f0, f1, f0
/* 8016912C 0016606C  C0 21 02 54 */	lfs f1, 0x254(r1)
/* 80169130 00166070  C0 81 00 60 */	lfs f4, 0x60(r1)
/* 80169134 00166074  C0 61 02 5C */	lfs f3, 0x25c(r1)
/* 80169138 00166078  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8016913C 0016607C  C0 02 A5 B8 */	lfs f0, lbl_80518918@sda21(r2)
/* 80169140 00166080  EC 24 08 FA */	fmadds f1, f4, f3, f1
/* 80169144 00166084  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80169148 00166088  40 81 00 08 */	ble .L_80169150
/* 8016914C 0016608C  38 00 00 00 */	li r0, 0
.L_80169150:
/* 80169150 00166090  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80169154 00166094  41 82 00 1C */	beq .L_80169170
/* 80169158 00166098  88 7E 03 BC */	lbz r3, 0x3bc(r30)
/* 8016915C 0016609C  28 03 00 64 */	cmplwi r3, 0x64
/* 80169160 001660A0  40 80 00 30 */	bge .L_80169190
/* 80169164 001660A4  38 03 00 02 */	addi r0, r3, 2
/* 80169168 001660A8  98 1E 03 BC */	stb r0, 0x3bc(r30)
/* 8016916C 001660AC  48 00 00 24 */	b .L_80169190
.L_80169170:
/* 80169170 001660B0  88 7E 03 BC */	lbz r3, 0x3bc(r30)
/* 80169174 001660B4  28 03 00 00 */	cmplwi r3, 0
/* 80169178 001660B8  41 82 00 18 */	beq .L_80169190
/* 8016917C 001660BC  38 03 FF FF */	addi r0, r3, -1
/* 80169180 001660C0  98 1E 03 BC */	stb r0, 0x3bc(r30)
/* 80169184 001660C4  48 00 00 0C */	b .L_80169190
.L_80169188:
/* 80169188 001660C8  38 00 00 00 */	li r0, 0
/* 8016918C 001660CC  98 1E 03 BC */	stb r0, 0x3bc(r30)
.L_80169190:
/* 80169190 001660D0  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80169194 001660D4  38 00 00 00 */	li r0, 0
/* 80169198 001660D8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8016919C 001660DC  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 801691A0 001660E0  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801691A4 001660E4  C0 01 00 60 */	lfs f0, 0x60(r1)
/* 801691A8 001660E8  D0 1F 00 08 */	stfs f0, 8(r31)
/* 801691AC 001660EC  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801691B0 001660F0  93 E1 01 FC */	stw r31, 0x1fc(r1)
/* 801691B4 001660F4  28 03 00 00 */	cmplwi r3, 0
/* 801691B8 001660F8  98 01 02 11 */	stb r0, 0x211(r1)
/* 801691BC 001660FC  41 82 00 10 */	beq .L_801691CC
/* 801691C0 00166100  FC 20 F8 90 */	fmr f1, f31
/* 801691C4 00166104  38 81 01 F8 */	addi r4, r1, 0x1f8
/* 801691C8 00166108  48 05 C9 F1 */	bl traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
.L_801691CC:
/* 801691CC 0016610C  80 81 02 3C */	lwz r4, 0x23c(r1)
/* 801691D0 00166110  28 04 00 00 */	cmplwi r4, 0
/* 801691D4 00166114  41 82 01 38 */	beq .L_8016930C
/* 801691D8 00166118  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 801691DC 0016611C  28 00 00 00 */	cmplwi r0, 0
/* 801691E0 00166120  40 82 00 18 */	bne .L_801691F8
/* 801691E4 00166124  81 9E 00 00 */	lwz r12, 0(r30)
/* 801691E8 00166128  7F C3 F3 78 */	mr r3, r30
/* 801691EC 0016612C  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 801691F0 00166130  7D 89 03 A6 */	mtctr r12
/* 801691F4 00166134  4E 80 04 21 */	bctrl 
.L_801691F8:
/* 801691F8 00166138  80 01 02 3C */	lwz r0, 0x23c(r1)
/* 801691FC 0016613C  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 80169200 00166140  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 80169204 00166144  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80169208 00166148  40 82 01 0C */	bne .L_80169314
/* 8016920C 0016614C  88 1E 03 F6 */	lbz r0, 0x3f6(r30)
/* 80169210 00166150  28 00 00 00 */	cmplwi r0, 0
/* 80169214 00166154  40 82 01 00 */	bne .L_80169314
/* 80169218 00166158  C0 21 02 4C */	lfs f1, 0x24c(r1)
/* 8016921C 0016615C  C0 9F 00 04 */	lfs f4, 4(r31)
/* 80169220 00166160  80 8D 93 F0 */	lwz r4, _aiConstants__4Game@sda21(r13)
/* 80169224 00166164  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80169228 00166168  EC 04 00 72 */	fmuls f0, f4, f1
/* 8016922C 0016616C  C1 A1 02 48 */	lfs f13, 0x248(r1)
/* 80169230 00166170  C3 9F 00 00 */	lfs f28, 0(r31)
/* 80169234 00166174  C0 E4 00 28 */	lfs f7, 0x28(r4)
/* 80169238 00166178  C0 C3 00 54 */	lfs f6, 0x54(r3)
/* 8016923C 0016617C  EC BC 03 7A */	fmadds f5, f28, f13, f0
/* 80169240 00166180  C0 41 02 50 */	lfs f2, 0x250(r1)
/* 80169244 00166184  C0 7F 00 08 */	lfs f3, 8(r31)
/* 80169248 00166188  EC C7 01 B2 */	fmuls f6, f7, f6
/* 8016924C 0016618C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80169250 00166190  ED 63 28 BA */	fmadds f11, f3, f2, f5
/* 80169254 00166194  C1 42 A6 34 */	lfs f10, lbl_80518994@sda21(r2)
/* 80169258 00166198  FD 80 30 50 */	fneg f12, f6
/* 8016925C 0016619C  C0 A2 A5 B0 */	lfs f5, lbl_80518910@sda21(r2)
/* 80169260 001661A0  EC CD 02 F2 */	fmuls f6, f13, f11
/* 80169264 001661A4  ED 2C 00 72 */	fmuls f9, f12, f1
/* 80169268 001661A8  EC E1 02 F2 */	fmuls f7, f1, f11
/* 8016926C 001661AC  ED 1C 30 28 */	fsubs f8, f28, f6
/* 80169270 001661B0  EC C2 02 F2 */	fmuls f6, f2, f11
/* 80169274 001661B4  ED 60 4B 7A */	fmadds f11, f0, f13, f9
/* 80169278 001661B8  EC E4 38 28 */	fsubs f7, f4, f7
/* 8016927C 001661BC  ED 28 07 F2 */	fmuls f9, f8, f31
/* 80169280 001661C0  ED 60 58 BA */	fmadds f11, f0, f2, f11
/* 80169284 001661C4  EC C3 30 28 */	fsubs f6, f3, f6
/* 80169288 001661C8  ED 07 07 F2 */	fmuls f8, f7, f31
/* 8016928C 001661CC  ED 29 02 B2 */	fmuls f9, f9, f10
/* 80169290 001661D0  EC E6 07 F2 */	fmuls f7, f6, f31
/* 80169294 001661D4  ED 08 02 B2 */	fmuls f8, f8, f10
/* 80169298 001661D8  EC CD 02 F2 */	fmuls f6, f13, f11
/* 8016929C 001661DC  ED 3C 48 28 */	fsubs f9, f28, f9
/* 801692A0 001661E0  EC E7 02 B2 */	fmuls f7, f7, f10
/* 801692A4 001661E4  EC C0 30 28 */	fsubs f6, f0, f6
/* 801692A8 001661E8  EC 21 02 F2 */	fmuls f1, f1, f11
/* 801692AC 001661EC  D1 3F 00 00 */	stfs f9, 0(r31)
/* 801692B0 001661F0  ED 04 40 28 */	fsubs f8, f4, f8
/* 801692B4 001661F4  FC C0 30 50 */	fneg f6, f6
/* 801692B8 001661F8  EC 8C 08 28 */	fsubs f4, f12, f1
/* 801692BC 001661FC  EC 22 02 F2 */	fmuls f1, f2, f11
/* 801692C0 00166200  D1 1F 00 04 */	stfs f8, 4(r31)
/* 801692C4 00166204  EC 63 38 28 */	fsubs f3, f3, f7
/* 801692C8 00166208  FC 40 20 50 */	fneg f2, f4
/* 801692CC 0016620C  EC 00 08 28 */	fsubs f0, f0, f1
/* 801692D0 00166210  D0 7F 00 08 */	stfs f3, 8(r31)
/* 801692D4 00166214  EC 66 01 72 */	fmuls f3, f6, f5
/* 801692D8 00166218  EC 22 01 72 */	fmuls f1, f2, f5
/* 801692DC 0016621C  C0 5F 00 00 */	lfs f2, 0(r31)
/* 801692E0 00166220  FC 00 00 50 */	fneg f0, f0
/* 801692E4 00166224  EC 42 18 2A */	fadds f2, f2, f3
/* 801692E8 00166228  EC 00 01 72 */	fmuls f0, f0, f5
/* 801692EC 0016622C  D0 5F 00 00 */	stfs f2, 0(r31)
/* 801692F0 00166230  C0 5F 00 04 */	lfs f2, 4(r31)
/* 801692F4 00166234  EC 22 08 2A */	fadds f1, f2, f1
/* 801692F8 00166238  D0 3F 00 04 */	stfs f1, 4(r31)
/* 801692FC 0016623C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80169300 00166240  EC 01 00 2A */	fadds f0, f1, f0
/* 80169304 00166244  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80169308 00166248  48 00 00 0C */	b .L_80169314
.L_8016930C:
/* 8016930C 0016624C  38 00 00 00 */	li r0, 0
/* 80169310 00166250  90 1E 00 C8 */	stw r0, 0xc8(r30)
.L_80169314:
/* 80169314 00166254  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 80169318 00166258  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016931C 0016625C  41 82 00 14 */	beq .L_80169330
/* 80169320 00166260  C0 21 00 68 */	lfs f1, 0x68(r1)
/* 80169324 00166264  C0 02 A5 D8 */	lfs f0, lbl_80518938@sda21(r2)
/* 80169328 00166268  EC 01 00 2A */	fadds f0, f1, f0
/* 8016932C 0016626C  D0 01 00 68 */	stfs f0, 0x68(r1)
.L_80169330:
/* 80169330 00166270  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 80169334 00166274  D0 1E 03 AC */	stfs f0, 0x3ac(r30)
/* 80169338 00166278  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 8016933C 0016627C  D0 1E 03 B0 */	stfs f0, 0x3b0(r30)
/* 80169340 00166280  C0 01 00 6C */	lfs f0, 0x6c(r1)
/* 80169344 00166284  D0 1E 03 B4 */	stfs f0, 0x3b4(r30)
/* 80169348 00166288  C0 1E 03 AC */	lfs f0, 0x3ac(r30)
/* 8016934C 0016628C  D0 1E 01 B0 */	stfs f0, 0x1b0(r30)
/* 80169350 00166290  C0 1E 03 B0 */	lfs f0, 0x3b0(r30)
/* 80169354 00166294  D0 1E 01 B4 */	stfs f0, 0x1b4(r30)
/* 80169358 00166298  C0 1E 03 B4 */	lfs f0, 0x3b4(r30)
/* 8016935C 0016629C  D0 1E 01 B8 */	stfs f0, 0x1b8(r30)
/* 80169360 001662A0  48 00 05 FC */	b .L_8016995C
.L_80169364:
/* 80169364 001662A4  2C 05 00 00 */	cmpwi r5, 0
/* 80169368 001662A8  40 81 05 F4 */	ble .L_8016995C
/* 8016936C 001662AC  38 7E 01 7C */	addi r3, r30, 0x17c
/* 80169370 001662B0  38 80 00 00 */	li r4, 0
/* 80169374 001662B4  4B FD 0E B5 */	bl computeForces__Q24Game5RigidFi
/* 80169378 001662B8  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 8016937C 001662BC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80169380 001662C0  40 82 00 20 */	bne .L_801693A0
/* 80169384 001662C4  88 1E 03 F6 */	lbz r0, 0x3f6(r30)
/* 80169388 001662C8  28 00 00 00 */	cmplwi r0, 0
/* 8016938C 001662CC  40 82 00 14 */	bne .L_801693A0
/* 80169390 001662D0  80 9E 03 5C */	lwz r4, 0x35c(r30)
/* 80169394 001662D4  7F C3 F3 78 */	mr r3, r30
/* 80169398 001662D8  C0 24 01 10 */	lfs f1, 0x110(r4)
/* 8016939C 001662DC  48 03 EF 49 */	bl computeForces__Q24Game11DynCreatureFf
.L_801693A0:
/* 801693A0 001662E0  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 801693A4 001662E4  7F C4 F3 78 */	mr r4, r30
/* 801693A8 001662E8  3B E0 00 01 */	li r31, 1
/* 801693AC 001662EC  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 801693B0 001662F0  FC 00 00 50 */	fneg f0, f0
/* 801693B4 001662F4  D0 1E 01 CC */	stfs f0, 0x1cc(r30)
/* 801693B8 001662F8  80 7E 03 C8 */	lwz r3, 0x3c8(r30)
/* 801693BC 001662FC  48 00 8B D5 */	bl "getCurrID__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
/* 801693C0 00166300  2C 03 00 00 */	cmpwi r3, 0
/* 801693C4 00166304  40 82 01 F8 */	bne .L_801695BC
/* 801693C8 00166308  88 1E 03 11 */	lbz r0, 0x311(r30)
/* 801693CC 0016630C  28 00 00 00 */	cmplwi r0, 0
/* 801693D0 00166310  41 82 01 EC */	beq .L_801695BC
/* 801693D4 00166314  7F C3 F3 78 */	mr r3, r30
/* 801693D8 00166318  81 9E 00 00 */	lwz r12, 0(r30)
/* 801693DC 0016631C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801693E0 00166320  7D 89 03 A6 */	mtctr r12
/* 801693E4 00166324  4E 80 04 21 */	bctrl 
/* 801693E8 00166328  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801693EC 0016632C  40 82 01 D0 */	bne .L_801695BC
/* 801693F0 00166330  C0 5E 01 BC */	lfs f2, 0x1bc(r30)
/* 801693F4 00166334  C0 3E 01 C0 */	lfs f1, 0x1c0(r30)
/* 801693F8 00166338  EC 02 00 B2 */	fmuls f0, f2, f2
/* 801693FC 0016633C  C0 7E 01 C4 */	lfs f3, 0x1c4(r30)
/* 80169400 00166340  EC 81 00 72 */	fmuls f4, f1, f1
/* 80169404 00166344  C0 22 A5 B4 */	lfs f1, lbl_80518914@sda21(r2)
/* 80169408 00166348  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8016940C 0016634C  EC 00 20 2A */	fadds f0, f0, f4
/* 80169410 00166350  EC 03 00 2A */	fadds f0, f3, f0
/* 80169414 00166354  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80169418 00166358  40 81 00 20 */	ble .L_80169438
/* 8016941C 0016635C  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 80169420 00166360  EC 43 00 2A */	fadds f2, f3, f0
/* 80169424 00166364  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80169428 00166368  40 81 00 14 */	ble .L_8016943C
/* 8016942C 0016636C  FC 00 10 34 */	frsqrte f0, f2
/* 80169430 00166370  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80169434 00166374  48 00 00 08 */	b .L_8016943C
.L_80169438:
/* 80169438 00166378  FC 40 08 90 */	fmr f2, f1
.L_8016943C:
/* 8016943C 0016637C  C0 02 A6 34 */	lfs f0, lbl_80518994@sda21(r2)
/* 80169440 00166380  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80169444 00166384  40 80 01 78 */	bge .L_801695BC
/* 80169448 00166388  C0 5E 01 E0 */	lfs f2, 0x1e0(r30)
/* 8016944C 0016638C  C0 3E 01 E4 */	lfs f1, 0x1e4(r30)
/* 80169450 00166390  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80169454 00166394  C0 7E 01 E8 */	lfs f3, 0x1e8(r30)
/* 80169458 00166398  EC 81 00 72 */	fmuls f4, f1, f1
/* 8016945C 0016639C  C0 22 A5 B4 */	lfs f1, lbl_80518914@sda21(r2)
/* 80169460 001663A0  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80169464 001663A4  EC 00 20 2A */	fadds f0, f0, f4
/* 80169468 001663A8  EC 03 00 2A */	fadds f0, f3, f0
/* 8016946C 001663AC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80169470 001663B0  40 81 00 20 */	ble .L_80169490
/* 80169474 001663B4  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 80169478 001663B8  EC 43 00 2A */	fadds f2, f3, f0
/* 8016947C 001663BC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80169480 001663C0  40 81 00 14 */	ble .L_80169494
/* 80169484 001663C4  FC 00 10 34 */	frsqrte f0, f2
/* 80169488 001663C8  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8016948C 001663CC  48 00 00 08 */	b .L_80169494
.L_80169490:
/* 80169490 001663D0  FC 40 08 90 */	fmr f2, f1
.L_80169494:
/* 80169494 001663D4  C0 02 A6 54 */	lfs f0, lbl_805189B4@sda21(r2)
/* 80169498 001663D8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8016949C 001663DC  40 80 01 20 */	bge .L_801695BC
/* 801694A0 001663E0  88 1E 03 F6 */	lbz r0, 0x3f6(r30)
/* 801694A4 001663E4  28 00 00 00 */	cmplwi r0, 0
/* 801694A8 001663E8  40 82 01 14 */	bne .L_801695BC
/* 801694AC 001663EC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 801694B0 001663F0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801694B4 001663F4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801694B8 001663F8  C0 1E 01 B0 */	lfs f0, 0x1b0(r30)
/* 801694BC 001663FC  C3 84 00 54 */	lfs f28, 0x54(r4)
/* 801694C0 00166400  38 E1 00 48 */	addi r7, r1, 0x48
/* 801694C4 00166404  C0 A2 A5 B8 */	lfs f5, lbl_80518918@sda21(r2)
/* 801694C8 00166408  38 C1 00 3C */	addi r6, r1, 0x3c
/* 801694CC 0016640C  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801694D0 00166410  38 A0 00 00 */	li r5, 0
/* 801694D4 00166414  81 0D 93 F0 */	lwz r8, _aiConstants__4Game@sda21(r13)
/* 801694D8 00166418  38 00 FF FF */	li r0, -1
/* 801694DC 0016641C  C0 DE 01 B4 */	lfs f6, 0x1b4(r30)
/* 801694E0 00166420  FC 20 E0 90 */	fmr f1, f28
/* 801694E4 00166424  C0 82 A5 B4 */	lfs f4, lbl_80518914@sda21(r2)
/* 801694E8 00166428  38 81 01 5C */	addi r4, r1, 0x15c
/* 801694EC 0016642C  D0 C1 00 4C */	stfs f6, 0x4c(r1)
/* 801694F0 00166430  C0 43 08 00 */	lfs f2, 0x800(r3)
/* 801694F4 00166434  C0 7E 01 B8 */	lfs f3, 0x1b8(r30)
/* 801694F8 00166438  C0 02 A6 50 */	lfs f0, lbl_805189B0@sda21(r2)
/* 801694FC 0016643C  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 80169500 00166440  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80169504 00166444  81 3E 03 5C */	lwz r9, 0x35c(r30)
/* 80169508 00166448  C0 69 00 C0 */	lfs f3, 0xc0(r9)
/* 8016950C 0016644C  EC A5 00 F2 */	fmuls f5, f5, f3
/* 80169510 00166450  EC 66 28 28 */	fsubs f3, f6, f5
/* 80169514 00166454  D0 A1 00 54 */	stfs f5, 0x54(r1)
/* 80169518 00166458  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 8016951C 0016645C  C0 68 00 28 */	lfs f3, 0x28(r8)
/* 80169520 00166460  FC 60 18 50 */	fneg f3, f3
/* 80169524 00166464  D0 81 00 3C */	stfs f4, 0x3c(r1)
/* 80169528 00166468  D0 81 00 44 */	stfs f4, 0x44(r1)
/* 8016952C 0016646C  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 80169530 00166470  90 E1 01 5C */	stw r7, 0x15c(r1)
/* 80169534 00166474  90 C1 01 60 */	stw r6, 0x160(r1)
/* 80169538 00166478  D0 81 01 64 */	stfs f4, 0x164(r1)
/* 8016953C 0016647C  D0 81 01 68 */	stfs f4, 0x168(r1)
/* 80169540 00166480  90 A1 01 6C */	stw r5, 0x16c(r1)
/* 80169544 00166484  90 A1 01 A0 */	stw r5, 0x1a0(r1)
/* 80169548 00166488  98 A1 01 D0 */	stb r5, 0x1d0(r1)
/* 8016954C 0016648C  98 A1 01 75 */	stb r5, 0x175(r1)
/* 80169550 00166490  98 A1 01 74 */	stb r5, 0x174(r1)
/* 80169554 00166494  90 A1 01 A4 */	stw r5, 0x1a4(r1)
/* 80169558 00166498  90 A1 01 70 */	stw r5, 0x170(r1)
/* 8016955C 0016649C  98 A1 01 EC */	stb r5, 0x1ec(r1)
/* 80169560 001664A0  90 A1 01 F0 */	stw r5, 0x1f0(r1)
/* 80169564 001664A4  D0 41 01 88 */	stfs f2, 0x188(r1)
/* 80169568 001664A8  D0 01 01 8C */	stfs f0, 0x18c(r1)
/* 8016956C 001664AC  90 01 01 F4 */	stw r0, 0x1f4(r1)
/* 80169570 001664B0  90 A1 01 A8 */	stw r5, 0x1a8(r1)
/* 80169574 001664B4  98 A1 01 76 */	stb r5, 0x176(r1)
/* 80169578 001664B8  81 83 00 04 */	lwz r12, 4(r3)
/* 8016957C 001664BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80169580 001664C0  7D 89 03 A6 */	mtctr r12
/* 80169584 001664C4  4E 80 04 21 */	bctrl 
/* 80169588 001664C8  80 01 01 A0 */	lwz r0, 0x1a0(r1)
/* 8016958C 001664CC  28 00 00 00 */	cmplwi r0, 0
/* 80169590 001664D0  40 82 00 1C */	bne .L_801695AC
/* 80169594 001664D4  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 80169598 001664D8  28 03 00 00 */	cmplwi r3, 0
/* 8016959C 001664DC  41 82 00 10 */	beq .L_801695AC
/* 801695A0 001664E0  FC 20 E0 90 */	fmr f1, f28
/* 801695A4 001664E4  38 81 01 5C */	addi r4, r1, 0x15c
/* 801695A8 001664E8  48 05 C6 11 */	bl traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
.L_801695AC:
/* 801695AC 001664EC  80 01 01 A0 */	lwz r0, 0x1a0(r1)
/* 801695B0 001664F0  28 00 00 00 */	cmplwi r0, 0
/* 801695B4 001664F4  41 82 00 08 */	beq .L_801695BC
/* 801695B8 001664F8  3B E0 00 00 */	li r31, 0
.L_801695BC:
/* 801695BC 001664FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801695C0 00166500  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801695C4 00166504  C0 02 A5 B8 */	lfs f0, lbl_80518918@sda21(r2)
/* 801695C8 00166508  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 801695CC 0016650C  C3 DE 01 B0 */	lfs f30, 0x1b0(r30)
/* 801695D0 00166510  EF E1 00 32 */	fmuls f31, f1, f0
/* 801695D4 00166514  C3 BE 01 B4 */	lfs f29, 0x1b4(r30)
/* 801695D8 00166518  C3 9E 01 B8 */	lfs f28, 0x1b8(r30)
/* 801695DC 0016651C  41 82 00 8C */	beq .L_80169668
/* 801695E0 00166520  7F C3 F3 78 */	mr r3, r30
/* 801695E4 00166524  81 9E 00 00 */	lwz r12, 0(r30)
/* 801695E8 00166528  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 801695EC 0016652C  7D 89 03 A6 */	mtctr r12
/* 801695F0 00166530  4E 80 04 21 */	bctrl 
/* 801695F4 00166534  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801695F8 00166538  41 82 00 54 */	beq .L_8016964C
/* 801695FC 0016653C  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 80169600 00166540  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80169604 00166544  40 82 00 48 */	bne .L_8016964C
/* 80169608 00166548  88 1E 03 F6 */	lbz r0, 0x3f6(r30)
/* 8016960C 0016654C  28 00 00 00 */	cmplwi r0, 0
/* 80169610 00166550  40 82 00 3C */	bne .L_8016964C
/* 80169614 00166554  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80169618 00166558  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 8016961C 0016655C  C0 3E 01 BC */	lfs f1, 0x1bc(r30)
/* 80169620 00166560  C0 1E 01 1C */	lfs f0, 0x11c(r30)
/* 80169624 00166564  EC 01 00 2A */	fadds f0, f1, f0
/* 80169628 00166568  D0 1E 01 BC */	stfs f0, 0x1bc(r30)
/* 8016962C 0016656C  C0 3E 01 C0 */	lfs f1, 0x1c0(r30)
/* 80169630 00166570  C0 1E 01 20 */	lfs f0, 0x120(r30)
/* 80169634 00166574  EC 01 00 2A */	fadds f0, f1, f0
/* 80169638 00166578  D0 1E 01 C0 */	stfs f0, 0x1c0(r30)
/* 8016963C 0016657C  C0 3E 01 C4 */	lfs f1, 0x1c4(r30)
/* 80169640 00166580  C0 1E 01 24 */	lfs f0, 0x124(r30)
/* 80169644 00166584  EC 01 00 2A */	fadds f0, f1, f0
/* 80169648 00166588  D0 1E 01 C4 */	stfs f0, 0x1c4(r30)
.L_8016964C:
/* 8016964C 0016658C  3B A0 00 00 */	li r29, 0
.L_80169650:
/* 80169650 00166590  FC 20 F8 90 */	fmr f1, f31
/* 80169654 00166594  7F C3 F3 78 */	mr r3, r30
/* 80169658 00166598  48 03 F2 35 */	bl simulate__Q24Game11DynCreatureFf
/* 8016965C 0016659C  3B BD 00 01 */	addi r29, r29, 1
/* 80169660 001665A0  2C 1D 00 02 */	cmpwi r29, 2
/* 80169664 001665A4  41 80 FF EC */	blt .L_80169650
.L_80169668:
/* 80169668 001665A8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8016966C 001665AC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80169670 001665B0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80169674 001665B4  C0 C2 A5 B8 */	lfs f6, lbl_80518918@sda21(r2)
/* 80169678 001665B8  C3 E4 00 54 */	lfs f31, 0x54(r4)
/* 8016967C 001665BC  38 E1 00 2C */	addi r7, r1, 0x2c
/* 80169680 001665C0  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 80169684 001665C4  38 C1 00 20 */	addi r6, r1, 0x20
/* 80169688 001665C8  D3 C1 00 2C */	stfs f30, 0x2c(r1)
/* 8016968C 001665CC  38 A0 00 00 */	li r5, 0
/* 80169690 001665D0  ED 20 F8 24 */	fdivs f9, f0, f31
/* 80169694 001665D4  C0 62 A5 B4 */	lfs f3, lbl_80518914@sda21(r2)
/* 80169698 001665D8  D3 A1 00 30 */	stfs f29, 0x30(r1)
/* 8016969C 001665DC  38 00 FF FF */	li r0, -1
/* 801696A0 001665E0  C0 43 08 00 */	lfs f2, 0x800(r3)
/* 801696A4 001665E4  38 81 00 C0 */	addi r4, r1, 0xc0
/* 801696A8 001665E8  D3 81 00 34 */	stfs f28, 0x34(r1)
/* 801696AC 001665EC  FC 20 F8 90 */	fmr f1, f31
/* 801696B0 001665F0  C0 02 A6 50 */	lfs f0, lbl_805189B0@sda21(r2)
/* 801696B4 001665F4  81 1E 03 5C */	lwz r8, 0x35c(r30)
/* 801696B8 001665F8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801696BC 001665FC  C0 88 00 C0 */	lfs f4, 0xc0(r8)
/* 801696C0 00166600  EC 86 01 32 */	fmuls f4, f6, f4
/* 801696C4 00166604  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 801696C8 00166608  C0 9E 01 B0 */	lfs f4, 0x1b0(r30)
/* 801696CC 0016660C  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 801696D0 00166610  EC 84 F0 28 */	fsubs f4, f4, f30
/* 801696D4 00166614  C0 BE 01 B4 */	lfs f5, 0x1b4(r30)
/* 801696D8 00166618  EF C4 02 72 */	fmuls f30, f4, f9
/* 801696DC 0016661C  D0 A1 00 24 */	stfs f5, 0x24(r1)
/* 801696E0 00166620  EC E5 E8 28 */	fsubs f7, f5, f29
/* 801696E4 00166624  C0 BE 01 B8 */	lfs f5, 0x1b8(r30)
/* 801696E8 00166628  EF A7 02 72 */	fmuls f29, f7, f9
/* 801696EC 0016662C  ED 05 E0 28 */	fsubs f8, f5, f28
/* 801696F0 00166630  D0 A1 00 28 */	stfs f5, 0x28(r1)
/* 801696F4 00166634  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 801696F8 00166638  EF 88 02 72 */	fmuls f28, f8, f9
/* 801696FC 0016663C  D0 E1 00 24 */	stfs f7, 0x24(r1)
/* 80169700 00166640  D1 01 00 28 */	stfs f8, 0x28(r1)
/* 80169704 00166644  D3 C1 00 20 */	stfs f30, 0x20(r1)
/* 80169708 00166648  D3 A1 00 24 */	stfs f29, 0x24(r1)
/* 8016970C 0016664C  D3 81 00 28 */	stfs f28, 0x28(r1)
/* 80169710 00166650  90 E1 00 C0 */	stw r7, 0xc0(r1)
/* 80169714 00166654  90 C1 00 C4 */	stw r6, 0xc4(r1)
/* 80169718 00166658  D0 C1 00 C8 */	stfs f6, 0xc8(r1)
/* 8016971C 0016665C  D0 61 00 CC */	stfs f3, 0xcc(r1)
/* 80169720 00166660  90 A1 00 D0 */	stw r5, 0xd0(r1)
/* 80169724 00166664  90 A1 01 04 */	stw r5, 0x104(r1)
/* 80169728 00166668  98 A1 01 34 */	stb r5, 0x134(r1)
/* 8016972C 0016666C  98 A1 00 D9 */	stb r5, 0xd9(r1)
/* 80169730 00166670  98 A1 00 D8 */	stb r5, 0xd8(r1)
/* 80169734 00166674  90 A1 01 08 */	stw r5, 0x108(r1)
/* 80169738 00166678  90 A1 00 D4 */	stw r5, 0xd4(r1)
/* 8016973C 0016667C  98 A1 01 50 */	stb r5, 0x150(r1)
/* 80169740 00166680  90 A1 01 54 */	stw r5, 0x154(r1)
/* 80169744 00166684  D0 41 00 EC */	stfs f2, 0xec(r1)
/* 80169748 00166688  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 8016974C 0016668C  90 01 01 58 */	stw r0, 0x158(r1)
/* 80169750 00166690  90 A1 01 0C */	stw r5, 0x10c(r1)
/* 80169754 00166694  98 A1 00 DA */	stb r5, 0xda(r1)
/* 80169758 00166698  81 83 00 04 */	lwz r12, 4(r3)
/* 8016975C 0016669C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80169760 001666A0  7D 89 03 A6 */	mtctr r12
/* 80169764 001666A4  4E 80 04 21 */	bctrl 
/* 80169768 001666A8  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 8016976C 001666AC  28 03 00 00 */	cmplwi r3, 0
/* 80169770 001666B0  41 82 00 10 */	beq .L_80169780
/* 80169774 001666B4  FC 20 F8 90 */	fmr f1, f31
/* 80169778 001666B8  38 81 00 C0 */	addi r4, r1, 0xc0
/* 8016977C 001666BC  48 05 C4 3D */	bl traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
.L_80169780:
/* 80169780 001666C0  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 80169784 001666C4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80169788 001666C8  41 82 00 78 */	beq .L_80169800
/* 8016978C 001666CC  80 61 01 08 */	lwz r3, 0x108(r1)
/* 80169790 001666D0  7C 03 00 D0 */	neg r0, r3
/* 80169794 001666D4  7C 00 1B 78 */	or r0, r0, r3
/* 80169798 001666D8  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 8016979C 001666DC  41 82 00 2C */	beq .L_801697C8
/* 801697A0 001666E0  C0 01 01 20 */	lfs f0, 0x120(r1)
/* 801697A4 001666E4  C0 41 01 1C */	lfs f2, 0x11c(r1)
/* 801697A8 001666E8  EC 3D 00 32 */	fmuls f1, f29, f0
/* 801697AC 001666EC  C0 61 01 24 */	lfs f3, 0x124(r1)
/* 801697B0 001666F0  C0 02 A5 B8 */	lfs f0, lbl_80518918@sda21(r2)
/* 801697B4 001666F4  EC 3E 08 BA */	fmadds f1, f30, f2, f1
/* 801697B8 001666F8  EC 3C 08 FA */	fmadds f1, f28, f3, f1
/* 801697BC 001666FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801697C0 00166700  40 81 00 08 */	ble .L_801697C8
/* 801697C4 00166704  38 00 00 00 */	li r0, 0
.L_801697C8:
/* 801697C8 00166708  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801697CC 0016670C  41 82 00 1C */	beq .L_801697E8
/* 801697D0 00166710  88 7E 03 BC */	lbz r3, 0x3bc(r30)
/* 801697D4 00166714  28 03 00 64 */	cmplwi r3, 0x64
/* 801697D8 00166718  40 80 00 30 */	bge .L_80169808
/* 801697DC 0016671C  38 03 00 02 */	addi r0, r3, 2
/* 801697E0 00166720  98 1E 03 BC */	stb r0, 0x3bc(r30)
/* 801697E4 00166724  48 00 00 24 */	b .L_80169808
.L_801697E8:
/* 801697E8 00166728  88 7E 03 BC */	lbz r3, 0x3bc(r30)
/* 801697EC 0016672C  28 03 00 00 */	cmplwi r3, 0
/* 801697F0 00166730  41 82 00 18 */	beq .L_80169808
/* 801697F4 00166734  38 03 FF FF */	addi r0, r3, -1
/* 801697F8 00166738  98 1E 03 BC */	stb r0, 0x3bc(r30)
/* 801697FC 0016673C  48 00 00 0C */	b .L_80169808
.L_80169800:
/* 80169800 00166740  38 00 00 00 */	li r0, 0
/* 80169804 00166744  98 1E 03 BC */	stb r0, 0x3bc(r30)
.L_80169808:
/* 80169808 00166748  80 61 00 C0 */	lwz r3, 0xc0(r1)
/* 8016980C 0016674C  C0 22 A5 B4 */	lfs f1, lbl_80518914@sda21(r2)
/* 80169810 00166750  C0 63 00 08 */	lfs f3, 8(r3)
/* 80169814 00166754  C0 03 00 00 */	lfs f0, 0(r3)
/* 80169818 00166758  D0 1E 01 B0 */	stfs f0, 0x1b0(r30)
/* 8016981C 0016675C  D0 7E 01 B8 */	stfs f3, 0x1b8(r30)
/* 80169820 00166760  C0 7E 01 BC */	lfs f3, 0x1bc(r30)
/* 80169824 00166764  C0 5E 01 C0 */	lfs f2, 0x1c0(r30)
/* 80169828 00166768  C0 9E 01 C4 */	lfs f4, 0x1c4(r30)
/* 8016982C 0016676C  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80169830 00166770  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80169834 00166774  EC 84 01 32 */	fmuls f4, f4, f4
/* 80169838 00166778  EC 00 10 2A */	fadds f0, f0, f2
/* 8016983C 0016677C  EC 04 00 2A */	fadds f0, f4, f0
/* 80169840 00166780  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80169844 00166784  40 81 00 20 */	ble .L_80169864
/* 80169848 00166788  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8016984C 0016678C  EC 44 00 2A */	fadds f2, f4, f0
/* 80169850 00166790  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80169854 00166794  40 81 00 14 */	ble .L_80169868
/* 80169858 00166798  FC 00 10 34 */	frsqrte f0, f2
/* 8016985C 0016679C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80169860 001667A0  48 00 00 08 */	b .L_80169868
.L_80169864:
/* 80169864 001667A4  FC 40 08 90 */	fmr f2, f1
.L_80169868:
/* 80169868 001667A8  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016986C 001667AC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80169870 001667B0  40 81 00 34 */	ble .L_801698A4
/* 80169874 001667B4  C0 22 A5 B0 */	lfs f1, lbl_80518910@sda21(r2)
/* 80169878 001667B8  C0 1E 01 BC */	lfs f0, 0x1bc(r30)
/* 8016987C 001667BC  EC 21 10 24 */	fdivs f1, f1, f2
/* 80169880 001667C0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80169884 001667C4  D0 1E 01 BC */	stfs f0, 0x1bc(r30)
/* 80169888 001667C8  C0 1E 01 C0 */	lfs f0, 0x1c0(r30)
/* 8016988C 001667CC  EC 00 00 72 */	fmuls f0, f0, f1
/* 80169890 001667D0  D0 1E 01 C0 */	stfs f0, 0x1c0(r30)
/* 80169894 001667D4  C0 1E 01 C4 */	lfs f0, 0x1c4(r30)
/* 80169898 001667D8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8016989C 001667DC  D0 1E 01 C4 */	stfs f0, 0x1c4(r30)
/* 801698A0 001667E0  48 00 00 08 */	b .L_801698A8
.L_801698A4:
/* 801698A4 001667E4  FC 40 00 90 */	fmr f2, f0
.L_801698A8:
/* 801698A8 001667E8  C0 7E 01 1C */	lfs f3, 0x11c(r30)
/* 801698AC 001667EC  C0 3E 01 20 */	lfs f1, 0x120(r30)
/* 801698B0 001667F0  EC 03 00 F2 */	fmuls f0, f3, f3
/* 801698B4 001667F4  C0 9E 01 24 */	lfs f4, 0x124(r30)
/* 801698B8 001667F8  EC A1 00 72 */	fmuls f5, f1, f1
/* 801698BC 001667FC  C0 22 A5 B4 */	lfs f1, lbl_80518914@sda21(r2)
/* 801698C0 00166800  EC 84 01 32 */	fmuls f4, f4, f4
/* 801698C4 00166804  EC 00 28 2A */	fadds f0, f0, f5
/* 801698C8 00166808  EC 04 00 2A */	fadds f0, f4, f0
/* 801698CC 0016680C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801698D0 00166810  40 81 00 20 */	ble .L_801698F0
/* 801698D4 00166814  EC 03 28 FA */	fmadds f0, f3, f3, f5
/* 801698D8 00166818  EC 04 00 2A */	fadds f0, f4, f0
/* 801698DC 0016681C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801698E0 00166820  40 81 00 14 */	ble .L_801698F4
/* 801698E4 00166824  FC 20 00 34 */	frsqrte f1, f0
/* 801698E8 00166828  EC 01 00 32 */	fmuls f0, f1, f0
/* 801698EC 0016682C  48 00 00 08 */	b .L_801698F4
.L_801698F0:
/* 801698F0 00166830  FC 00 08 90 */	fmr f0, f1
.L_801698F4:
/* 801698F4 00166834  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801698F8 00166838  40 81 00 30 */	ble .L_80169928
/* 801698FC 0016683C  EC 22 00 28 */	fsubs f1, f2, f0
/* 80169900 00166840  C0 1E 01 BC */	lfs f0, 0x1bc(r30)
/* 80169904 00166844  EC 00 00 72 */	fmuls f0, f0, f1
/* 80169908 00166848  D0 1E 01 BC */	stfs f0, 0x1bc(r30)
/* 8016990C 0016684C  C0 1E 01 C0 */	lfs f0, 0x1c0(r30)
/* 80169910 00166850  EC 00 00 72 */	fmuls f0, f0, f1
/* 80169914 00166854  D0 1E 01 C0 */	stfs f0, 0x1c0(r30)
/* 80169918 00166858  C0 1E 01 C4 */	lfs f0, 0x1c4(r30)
/* 8016991C 0016685C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80169920 00166860  D0 1E 01 C4 */	stfs f0, 0x1c4(r30)
/* 80169924 00166864  48 00 00 28 */	b .L_8016994C
.L_80169928:
/* 80169928 00166868  C0 1E 01 BC */	lfs f0, 0x1bc(r30)
/* 8016992C 0016686C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80169930 00166870  D0 1E 01 BC */	stfs f0, 0x1bc(r30)
/* 80169934 00166874  C0 1E 01 C0 */	lfs f0, 0x1c0(r30)
/* 80169938 00166878  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8016993C 0016687C  D0 1E 01 C0 */	stfs f0, 0x1c0(r30)
/* 80169940 00166880  C0 1E 01 C4 */	lfs f0, 0x1c4(r30)
/* 80169944 00166884  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80169948 00166888  D0 1E 01 C4 */	stfs f0, 0x1c4(r30)
.L_8016994C:
/* 8016994C 0016688C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 80169950 00166890  D0 1E 01 1C */	stfs f0, 0x11c(r30)
/* 80169954 00166894  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 80169958 00166898  D0 1E 01 24 */	stfs f0, 0x124(r30)
.L_8016995C:
/* 8016995C 0016689C  7F C3 F3 78 */	mr r3, r30
/* 80169960 001668A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80169964 001668A4  81 8C 01 EC */	lwz r12, 0x1ec(r12)
/* 80169968 001668A8  7D 89 03 A6 */	mtctr r12
/* 8016996C 001668AC  4E 80 04 21 */	bctrl 
.L_80169970:
/* 80169970 001668B0  E3 E1 02 E8 */	psq_l f31, 744(r1), 0, qr0
/* 80169974 001668B4  CB E1 02 E0 */	lfd f31, 0x2e0(r1)
/* 80169978 001668B8  E3 C1 02 D8 */	psq_l f30, 728(r1), 0, qr0
/* 8016997C 001668BC  CB C1 02 D0 */	lfd f30, 0x2d0(r1)
/* 80169980 001668C0  E3 A1 02 C8 */	psq_l f29, 712(r1), 0, qr0
/* 80169984 001668C4  CB A1 02 C0 */	lfd f29, 0x2c0(r1)
/* 80169988 001668C8  E3 81 02 B8 */	psq_l f28, 696(r1), 0, qr0
/* 8016998C 001668CC  CB 81 02 B0 */	lfd f28, 0x2b0(r1)
/* 80169990 001668D0  83 E1 02 AC */	lwz r31, 0x2ac(r1)
/* 80169994 001668D4  83 C1 02 A8 */	lwz r30, 0x2a8(r1)
/* 80169998 001668D8  80 01 02 F4 */	lwz r0, 0x2f4(r1)
/* 8016999C 001668DC  83 A1 02 A4 */	lwz r29, 0x2a4(r1)
/* 801699A0 001668E0  7C 08 03 A6 */	mtlr r0
/* 801699A4 001668E4  38 21 02 F0 */	addi r1, r1, 0x2f0
/* 801699A8 001668E8  4E 80 00 20 */	blr 
.endfn update__Q24Game6PelletFv

.fn do_update__Q24Game6PelletFv, weak
/* 801699AC 001668EC  4E 80 00 20 */	blr 
.endfn do_update__Q24Game6PelletFv

.fn isCave__Q23PSM10Scene_GameFv, weak
/* 801699B0 001668F0  38 60 00 00 */	li r3, 0
/* 801699B4 001668F4  4E 80 00 20 */	blr 
.endfn isCave__Q23PSM10Scene_GameFv

.fn getPikiBirthCount__Q24Game6PelletFRiRi, global
/* 801699B8 001668F8  80 C3 03 5C */	lwz r6, 0x35c(r3)
/* 801699BC 001668FC  80 06 01 50 */	lwz r0, 0x150(r6)
/* 801699C0 00166900  90 04 00 00 */	stw r0, 0(r4)
/* 801699C4 00166904  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 801699C8 00166908  80 03 01 40 */	lwz r0, 0x140(r3)
/* 801699CC 0016690C  90 05 00 00 */	stw r0, 0(r5)
/* 801699D0 00166910  4E 80 00 20 */	blr 
.endfn getPikiBirthCount__Q24Game6PelletFRiRi

.fn setMovieDraw__Q24Game9PelletMgrFb, global
/* 801699D4 00166914  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 801699D8 00166918  7C 00 00 34 */	cntlzw r0, r0
/* 801699DC 0016691C  54 00 D9 7E */	srwi r0, r0, 5
/* 801699E0 00166920  98 03 00 3C */	stb r0, 0x3c(r3)
/* 801699E4 00166924  4E 80 00 20 */	blr 
.endfn setMovieDraw__Q24Game9PelletMgrFb

.fn doSimulation__Q24Game6PelletFf, global
/* 801699E8 00166928  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801699EC 0016692C  7C 08 02 A6 */	mflr r0
/* 801699F0 00166930  38 80 00 01 */	li r4, 1
/* 801699F4 00166934  90 01 00 54 */	stw r0, 0x54(r1)
/* 801699F8 00166938  38 00 00 00 */	li r0, 0
/* 801699FC 0016693C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80169A00 00166940  7C 7F 1B 78 */	mr r31, r3
/* 80169A04 00166944  98 81 00 08 */	stb r4, 8(r1)
/* 80169A08 00166948  38 81 00 08 */	addi r4, r1, 8
/* 80169A0C 0016694C  98 01 00 08 */	stb r0, 8(r1)
/* 80169A10 00166950  4B FD 22 15 */	bl checkHell__Q24Game8CreatureFRQ34Game8Creature12CheckHellArg
/* 80169A14 00166954  2C 03 00 02 */	cmpwi r3, 2
/* 80169A18 00166958  40 82 00 E8 */	bne .L_80169B00
/* 80169A1C 0016695C  7F E4 FB 78 */	mr r4, r31
/* 80169A20 00166960  38 61 00 10 */	addi r3, r1, 0x10
/* 80169A24 00166964  81 9F 00 00 */	lwz r12, 0(r31)
/* 80169A28 00166968  81 8C 00 08 */	lwz r12, 8(r12)
/* 80169A2C 0016696C  7D 89 03 A6 */	mtctr r12
/* 80169A30 00166970  4E 80 04 21 */	bctrl 
/* 80169A34 00166974  3C 60 80 4B */	lis r3, "__vt__27Condition<Q24Game8WayPoint>"@ha
/* 80169A38 00166978  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 80169A3C 0016697C  38 03 1F 64 */	addi r0, r3, "__vt__27Condition<Q24Game8WayPoint>"@l
/* 80169A40 00166980  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80169A44 00166984  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80169A48 00166988  3C 60 80 4B */	lis r3, __vt__Q24Game11WPCondition@ha
/* 80169A4C 0016698C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169A50 00166990  38 83 1F 58 */	addi r4, r3, __vt__Q24Game11WPCondition@l
/* 80169A54 00166994  C0 22 A5 B4 */	lfs f1, lbl_80518914@sda21(r2)
/* 80169A58 00166998  3C 60 80 4B */	lis r3, "__vt__Q223@unnamed@pelletMgr_cpp@6NotOff"@ha
/* 80169A5C 0016699C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80169A60 001669A0  38 A1 00 0C */	addi r5, r1, 0xc
/* 80169A64 001669A4  C0 02 A6 34 */	lfs f0, lbl_80518994@sda21(r2)
/* 80169A68 001669A8  38 00 00 00 */	li r0, 0
/* 80169A6C 001669AC  90 81 00 0C */	stw r4, 0xc(r1)
/* 80169A70 001669B0  38 C3 1F 4C */	addi r6, r3, "__vt__Q223@unnamed@pelletMgr_cpp@6NotOff"@l
/* 80169A74 001669B4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80169A78 001669B8  38 81 00 28 */	addi r4, r1, 0x28
/* 80169A7C 001669BC  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80169A80 001669C0  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80169A84 001669C4  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80169A88 001669C8  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80169A8C 001669CC  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 80169A90 001669D0  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80169A94 001669D4  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 80169A98 001669D8  90 A1 00 34 */	stw r5, 0x34(r1)
/* 80169A9C 001669DC  98 01 00 38 */	stb r0, 0x38(r1)
/* 80169AA0 001669E0  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80169AA4 001669E4  80 63 00 08 */	lwz r3, 8(r3)
/* 80169AA8 001669E8  48 00 95 1D */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 80169AAC 001669EC  28 03 00 00 */	cmplwi r3, 0
/* 80169AB0 001669F0  41 82 00 50 */	beq .L_80169B00
/* 80169AB4 001669F4  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 80169AB8 001669F8  38 81 00 1C */	addi r4, r1, 0x1c
/* 80169ABC 001669FC  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80169AC0 00166A00  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80169AC4 00166A04  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80169AC8 00166A08  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80169ACC 00166A0C  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80169AD0 00166A10  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80169AD4 00166A14  81 83 00 04 */	lwz r12, 4(r3)
/* 80169AD8 00166A18  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80169ADC 00166A1C  7D 89 03 A6 */	mtctr r12
/* 80169AE0 00166A20  4E 80 04 21 */	bctrl 
/* 80169AE4 00166A24  C0 02 A6 54 */	lfs f0, lbl_805189B4@sda21(r2)
/* 80169AE8 00166A28  7F E3 FB 78 */	mr r3, r31
/* 80169AEC 00166A2C  38 81 00 1C */	addi r4, r1, 0x1c
/* 80169AF0 00166A30  38 A0 00 00 */	li r5, 0
/* 80169AF4 00166A34  EC 00 08 2A */	fadds f0, f0, f1
/* 80169AF8 00166A38  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80169AFC 00166A3C  4B FD 16 AD */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
.L_80169B00:
/* 80169B00 00166A40  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80169B04 00166A44  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80169B08 00166A48  7C 08 03 A6 */	mtlr r0
/* 80169B0C 00166A4C  38 21 00 50 */	addi r1, r1, 0x50
/* 80169B10 00166A50  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game6PelletFf

.fn updateTrMatrix__Q24Game6PelletFv, global
/* 80169B14 00166A54  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80169B18 00166A58  7C 08 02 A6 */	mflr r0
/* 80169B1C 00166A5C  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80169B20 00166A60  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80169B24 00166A64  7C 7F 1B 78 */	mr r31, r3
/* 80169B28 00166A68  80 03 00 B8 */	lwz r0, 0xb8(r3)
/* 80169B2C 00166A6C  28 00 00 00 */	cmplwi r0, 0
/* 80169B30 00166A70  40 82 00 E4 */	bne .L_80169C14
/* 80169B34 00166A74  C0 1F 01 B0 */	lfs f0, 0x1b0(r31)
/* 80169B38 00166A78  38 61 00 74 */	addi r3, r1, 0x74
/* 80169B3C 00166A7C  C0 42 A6 40 */	lfs f2, lbl_805189A0@sda21(r2)
/* 80169B40 00166A80  38 81 00 08 */	addi r4, r1, 8
/* 80169B44 00166A84  D0 1F 03 AC */	stfs f0, 0x3ac(r31)
/* 80169B48 00166A88  C0 1F 01 B4 */	lfs f0, 0x1b4(r31)
/* 80169B4C 00166A8C  D0 1F 03 B0 */	stfs f0, 0x3b0(r31)
/* 80169B50 00166A90  C0 1F 01 B8 */	lfs f0, 0x1b8(r31)
/* 80169B54 00166A94  D0 1F 03 B4 */	stfs f0, 0x3b4(r31)
/* 80169B58 00166A98  C0 7F 02 FC */	lfs f3, 0x2fc(r31)
/* 80169B5C 00166A9C  C0 3F 02 F8 */	lfs f1, 0x2f8(r31)
/* 80169B60 00166AA0  C0 1F 02 F4 */	lfs f0, 0x2f4(r31)
/* 80169B64 00166AA4  EC 63 00 B2 */	fmuls f3, f3, f2
/* 80169B68 00166AA8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80169B6C 00166AAC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80169B70 00166AB0  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 80169B74 00166AB4  D0 01 00 08 */	stfs f0, 8(r1)
/* 80169B78 00166AB8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80169B7C 00166ABC  48 2B EC C5 */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 80169B80 00166AC0  38 61 00 44 */	addi r3, r1, 0x44
/* 80169B84 00166AC4  38 9F 01 F8 */	addi r4, r31, 0x1f8
/* 80169B88 00166AC8  48 2B F0 01 */	bl makeQ__7MatrixfFR4Quat
/* 80169B8C 00166ACC  38 61 00 44 */	addi r3, r1, 0x44
/* 80169B90 00166AD0  38 81 00 74 */	addi r4, r1, 0x74
/* 80169B94 00166AD4  38 A1 00 14 */	addi r5, r1, 0x14
/* 80169B98 00166AD8  4B F8 07 69 */	bl PSMTXConcat
/* 80169B9C 00166ADC  C0 1F 03 AC */	lfs f0, 0x3ac(r31)
/* 80169BA0 00166AE0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80169BA4 00166AE4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80169BA8 00166AE8  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80169BAC 00166AEC  C0 1F 03 B0 */	lfs f0, 0x3b0(r31)
/* 80169BB0 00166AF0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80169BB4 00166AF4  C0 1F 03 B4 */	lfs f0, 0x3b4(r31)
/* 80169BB8 00166AF8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80169BBC 00166AFC  90 7F 01 38 */	stw r3, 0x138(r31)
/* 80169BC0 00166B00  90 1F 01 3C */	stw r0, 0x13c(r31)
/* 80169BC4 00166B04  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80169BC8 00166B08  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80169BCC 00166B0C  90 7F 01 40 */	stw r3, 0x140(r31)
/* 80169BD0 00166B10  90 1F 01 44 */	stw r0, 0x144(r31)
/* 80169BD4 00166B14  80 61 00 24 */	lwz r3, 0x24(r1)
/* 80169BD8 00166B18  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80169BDC 00166B1C  90 7F 01 48 */	stw r3, 0x148(r31)
/* 80169BE0 00166B20  90 1F 01 4C */	stw r0, 0x14c(r31)
/* 80169BE4 00166B24  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80169BE8 00166B28  80 01 00 30 */	lwz r0, 0x30(r1)
/* 80169BEC 00166B2C  90 7F 01 50 */	stw r3, 0x150(r31)
/* 80169BF0 00166B30  90 1F 01 54 */	stw r0, 0x154(r31)
/* 80169BF4 00166B34  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80169BF8 00166B38  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80169BFC 00166B3C  90 7F 01 58 */	stw r3, 0x158(r31)
/* 80169C00 00166B40  90 1F 01 5C */	stw r0, 0x15c(r31)
/* 80169C04 00166B44  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80169C08 00166B48  80 01 00 40 */	lwz r0, 0x40(r1)
/* 80169C0C 00166B4C  90 7F 01 60 */	stw r3, 0x160(r31)
/* 80169C10 00166B50  90 1F 01 64 */	stw r0, 0x164(r31)
.L_80169C14:
/* 80169C14 00166B54  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80169C18 00166B58  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80169C1C 00166B5C  7C 08 03 A6 */	mtlr r0
/* 80169C20 00166B60  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80169C24 00166B64  4E 80 00 20 */	blr 
.endfn updateTrMatrix__Q24Game6PelletFv

.fn doAnimation__Q24Game6PelletFv, global
/* 80169C28 00166B68  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80169C2C 00166B6C  7C 08 02 A6 */	mflr r0
/* 80169C30 00166B70  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80169C34 00166B74  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 80169C38 00166B78  7C 7F 1B 78 */	mr r31, r3
/* 80169C3C 00166B7C  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 80169C40 00166B80  80 8D 93 20 */	lwz r4, pelletMgr__4Game@sda21(r13)
/* 80169C44 00166B84  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 80169C48 00166B88  28 00 00 00 */	cmplwi r0, 0
/* 80169C4C 00166B8C  41 82 00 1C */	beq .L_80169C68
/* 80169C50 00166B90  81 83 00 00 */	lwz r12, 0(r3)
/* 80169C54 00166B94  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80169C58 00166B98  7D 89 03 A6 */	mtctr r12
/* 80169C5C 00166B9C  4E 80 04 21 */	bctrl 
/* 80169C60 00166BA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80169C64 00166BA4  41 82 02 28 */	beq .L_80169E8C
.L_80169C68:
/* 80169C68 00166BA8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80169C6C 00166BAC  28 03 00 00 */	cmplwi r3, 0
/* 80169C70 00166BB0  41 82 00 1C */	beq .L_80169C8C
/* 80169C74 00166BB4  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80169C78 00166BB8  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80169C7C 00166BBC  41 82 00 10 */	beq .L_80169C8C
/* 80169C80 00166BC0  7F E3 FB 78 */	mr r3, r31
/* 80169C84 00166BC4  4B FF ED A5 */	bl update__Q24Game6PelletFv
/* 80169C88 00166BC8  48 00 00 2C */	b .L_80169CB4
.L_80169C8C:
/* 80169C8C 00166BCC  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80169C90 00166BD0  28 03 00 00 */	cmplwi r3, 0
/* 80169C94 00166BD4  41 82 00 0C */	beq .L_80169CA0
/* 80169C98 00166BD8  38 9F 04 44 */	addi r4, r31, 0x444
/* 80169C9C 00166BDC  4B FC CF A5 */	bl getBoundingSphere__8CollTreeFRQ23Sys6Sphere
.L_80169CA0:
/* 80169CA0 00166BE0  38 61 00 14 */	addi r3, r1, 0x14
/* 80169CA4 00166BE4  48 06 DB 65 */	bl __ct__Q24Game9AILODParmFv
/* 80169CA8 00166BE8  7F E3 FB 78 */	mr r3, r31
/* 80169CAC 00166BEC  38 81 00 14 */	addi r4, r1, 0x14
/* 80169CB0 00166BF0  48 06 DB 8D */	bl updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
.L_80169CB4:
/* 80169CB4 00166BF4  80 7F 03 C8 */	lwz r3, 0x3c8(r31)
/* 80169CB8 00166BF8  7F E4 FB 78 */	mr r4, r31
/* 80169CBC 00166BFC  48 00 82 D5 */	bl "getCurrID__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
/* 80169CC0 00166C00  2C 03 00 06 */	cmpwi r3, 6
/* 80169CC4 00166C04  40 82 00 54 */	bne .L_80169D18
/* 80169CC8 00166C08  38 7F 04 1C */	addi r3, r31, 0x41c
/* 80169CCC 00166C0C  C0 3F 04 38 */	lfs f1, 0x438(r31)
/* 80169CD0 00166C10  81 9F 04 1C */	lwz r12, 0x41c(r31)
/* 80169CD4 00166C14  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80169CD8 00166C18  7D 89 03 A6 */	mtctr r12
/* 80169CDC 00166C1C  4E 80 04 21 */	bctrl 
/* 80169CE0 00166C20  38 7F 04 1C */	addi r3, r31, 0x41c
/* 80169CE4 00166C24  83 DF 01 74 */	lwz r30, 0x174(r31)
/* 80169CE8 00166C28  81 9F 04 1C */	lwz r12, 0x41c(r31)
/* 80169CEC 00166C2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80169CF0 00166C30  7D 89 03 A6 */	mtctr r12
/* 80169CF4 00166C34  4E 80 04 21 */	bctrl 
/* 80169CF8 00166C38  80 9E 00 08 */	lwz r4, 8(r30)
/* 80169CFC 00166C3C  80 84 00 04 */	lwz r4, 4(r4)
/* 80169D00 00166C40  80 84 00 28 */	lwz r4, 0x28(r4)
/* 80169D04 00166C44  80 84 00 00 */	lwz r4, 0(r4)
/* 80169D08 00166C48  90 64 00 54 */	stw r3, 0x54(r4)
/* 80169D0C 00166C4C  7F E3 FB 78 */	mr r3, r31
/* 80169D10 00166C50  48 00 04 F9 */	bl update_pmotions__Q24Game6PelletFv
/* 80169D14 00166C54  48 00 01 70 */	b .L_80169E84
.L_80169D18:
/* 80169D18 00166C58  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 80169D1C 00166C5C  28 00 00 00 */	cmplwi r0, 0
/* 80169D20 00166C60  40 82 01 6C */	bne .L_80169E8C
/* 80169D24 00166C64  80 1F 03 58 */	lwz r0, 0x358(r31)
/* 80169D28 00166C68  28 00 00 00 */	cmplwi r0, 0
/* 80169D2C 00166C6C  40 82 00 68 */	bne .L_80169D94
/* 80169D30 00166C70  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 80169D34 00166C74  28 00 00 00 */	cmplwi r0, 0
/* 80169D38 00166C78  41 82 00 5C */	beq .L_80169D94
/* 80169D3C 00166C7C  80 1F 04 2C */	lwz r0, 0x42c(r31)
/* 80169D40 00166C80  28 00 00 00 */	cmplwi r0, 0
/* 80169D44 00166C84  41 82 00 50 */	beq .L_80169D94
/* 80169D48 00166C88  38 7F 04 1C */	addi r3, r31, 0x41c
/* 80169D4C 00166C8C  C0 3F 04 38 */	lfs f1, 0x438(r31)
/* 80169D50 00166C90  81 9F 04 1C */	lwz r12, 0x41c(r31)
/* 80169D54 00166C94  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80169D58 00166C98  7D 89 03 A6 */	mtctr r12
/* 80169D5C 00166C9C  4E 80 04 21 */	bctrl 
/* 80169D60 00166CA0  38 7F 04 1C */	addi r3, r31, 0x41c
/* 80169D64 00166CA4  83 DF 01 74 */	lwz r30, 0x174(r31)
/* 80169D68 00166CA8  81 9F 04 1C */	lwz r12, 0x41c(r31)
/* 80169D6C 00166CAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80169D70 00166CB0  7D 89 03 A6 */	mtctr r12
/* 80169D74 00166CB4  4E 80 04 21 */	bctrl 
/* 80169D78 00166CB8  80 9E 00 08 */	lwz r4, 8(r30)
/* 80169D7C 00166CBC  80 84 00 04 */	lwz r4, 4(r4)
/* 80169D80 00166CC0  80 84 00 28 */	lwz r4, 0x28(r4)
/* 80169D84 00166CC4  80 84 00 00 */	lwz r4, 0(r4)
/* 80169D88 00166CC8  90 64 00 54 */	stw r3, 0x54(r4)
/* 80169D8C 00166CCC  7F E3 FB 78 */	mr r3, r31
/* 80169D90 00166CD0  48 00 04 79 */	bl update_pmotions__Q24Game6PelletFv
.L_80169D94:
/* 80169D94 00166CD4  C0 1F 01 B0 */	lfs f0, 0x1b0(r31)
/* 80169D98 00166CD8  38 61 00 80 */	addi r3, r1, 0x80
/* 80169D9C 00166CDC  C0 42 A6 40 */	lfs f2, lbl_805189A0@sda21(r2)
/* 80169DA0 00166CE0  38 81 00 08 */	addi r4, r1, 8
/* 80169DA4 00166CE4  D0 1F 03 AC */	stfs f0, 0x3ac(r31)
/* 80169DA8 00166CE8  C0 1F 01 B4 */	lfs f0, 0x1b4(r31)
/* 80169DAC 00166CEC  D0 1F 03 B0 */	stfs f0, 0x3b0(r31)
/* 80169DB0 00166CF0  C0 1F 01 B8 */	lfs f0, 0x1b8(r31)
/* 80169DB4 00166CF4  D0 1F 03 B4 */	stfs f0, 0x3b4(r31)
/* 80169DB8 00166CF8  C0 7F 02 FC */	lfs f3, 0x2fc(r31)
/* 80169DBC 00166CFC  C0 3F 02 F8 */	lfs f1, 0x2f8(r31)
/* 80169DC0 00166D00  C0 1F 02 F4 */	lfs f0, 0x2f4(r31)
/* 80169DC4 00166D04  EC 63 00 B2 */	fmuls f3, f3, f2
/* 80169DC8 00166D08  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80169DCC 00166D0C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80169DD0 00166D10  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 80169DD4 00166D14  D0 01 00 08 */	stfs f0, 8(r1)
/* 80169DD8 00166D18  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80169DDC 00166D1C  48 2B EA 65 */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 80169DE0 00166D20  38 61 00 50 */	addi r3, r1, 0x50
/* 80169DE4 00166D24  38 9F 01 F8 */	addi r4, r31, 0x1f8
/* 80169DE8 00166D28  48 2B ED A1 */	bl makeQ__7MatrixfFR4Quat
/* 80169DEC 00166D2C  38 61 00 50 */	addi r3, r1, 0x50
/* 80169DF0 00166D30  38 81 00 80 */	addi r4, r1, 0x80
/* 80169DF4 00166D34  38 A1 00 20 */	addi r5, r1, 0x20
/* 80169DF8 00166D38  4B F8 05 09 */	bl PSMTXConcat
/* 80169DFC 00166D3C  C0 1F 03 AC */	lfs f0, 0x3ac(r31)
/* 80169E00 00166D40  7F E3 FB 78 */	mr r3, r31
/* 80169E04 00166D44  80 81 00 20 */	lwz r4, 0x20(r1)
/* 80169E08 00166D48  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80169E0C 00166D4C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80169E10 00166D50  C0 1F 03 B0 */	lfs f0, 0x3b0(r31)
/* 80169E14 00166D54  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80169E18 00166D58  C0 1F 03 B4 */	lfs f0, 0x3b4(r31)
/* 80169E1C 00166D5C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80169E20 00166D60  90 9F 01 38 */	stw r4, 0x138(r31)
/* 80169E24 00166D64  90 1F 01 3C */	stw r0, 0x13c(r31)
/* 80169E28 00166D68  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80169E2C 00166D6C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80169E30 00166D70  90 9F 01 40 */	stw r4, 0x140(r31)
/* 80169E34 00166D74  90 1F 01 44 */	stw r0, 0x144(r31)
/* 80169E38 00166D78  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80169E3C 00166D7C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80169E40 00166D80  90 9F 01 48 */	stw r4, 0x148(r31)
/* 80169E44 00166D84  90 1F 01 4C */	stw r0, 0x14c(r31)
/* 80169E48 00166D88  80 81 00 38 */	lwz r4, 0x38(r1)
/* 80169E4C 00166D8C  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80169E50 00166D90  90 9F 01 50 */	stw r4, 0x150(r31)
/* 80169E54 00166D94  90 1F 01 54 */	stw r0, 0x154(r31)
/* 80169E58 00166D98  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80169E5C 00166D9C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80169E60 00166DA0  90 9F 01 58 */	stw r4, 0x158(r31)
/* 80169E64 00166DA4  90 1F 01 5C */	stw r0, 0x15c(r31)
/* 80169E68 00166DA8  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80169E6C 00166DAC  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80169E70 00166DB0  90 9F 01 60 */	stw r4, 0x160(r31)
/* 80169E74 00166DB4  90 1F 01 64 */	stw r0, 0x164(r31)
/* 80169E78 00166DB8  48 03 E4 01 */	bl updateParticlePositions__Q24Game11DynCreatureFv
/* 80169E7C 00166DBC  48 00 00 08 */	b .L_80169E84
/* 80169E80 00166DC0  48 00 00 0C */	b .L_80169E8C
.L_80169E84:
/* 80169E84 00166DC4  7F E3 FB 78 */	mr r3, r31
/* 80169E88 00166DC8  48 00 02 2D */	bl entryShape__Q24Game6PelletFv
.L_80169E8C:
/* 80169E8C 00166DCC  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 80169E90 00166DD0  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 80169E94 00166DD4  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 80169E98 00166DD8  7C 08 03 A6 */	mtlr r0
/* 80169E9C 00166DDC  38 21 00 C0 */	addi r1, r1, 0xc0
/* 80169EA0 00166DE0  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game6PelletFv

.fn doEntry__Q24Game6PelletFv, global
/* 80169EA4 00166DE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169EA8 00166DE8  7C 08 02 A6 */	mflr r0
/* 80169EAC 00166DEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169EB0 00166DF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169EB4 00166DF4  7C 7F 1B 78 */	mr r31, r3
/* 80169EB8 00166DF8  80 8D 93 20 */	lwz r4, pelletMgr__4Game@sda21(r13)
/* 80169EBC 00166DFC  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 80169EC0 00166E00  28 00 00 00 */	cmplwi r0, 0
/* 80169EC4 00166E04  41 82 00 1C */	beq .L_80169EE0
/* 80169EC8 00166E08  81 83 00 00 */	lwz r12, 0(r3)
/* 80169ECC 00166E0C  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80169ED0 00166E10  7D 89 03 A6 */	mtctr r12
/* 80169ED4 00166E14  4E 80 04 21 */	bctrl 
/* 80169ED8 00166E18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80169EDC 00166E1C  41 82 00 A4 */	beq .L_80169F80
.L_80169EE0:
/* 80169EE0 00166E20  80 1F 03 58 */	lwz r0, 0x358(r31)
/* 80169EE4 00166E24  28 00 00 00 */	cmplwi r0, 0
/* 80169EE8 00166E28  40 82 00 84 */	bne .L_80169F6C
/* 80169EEC 00166E2C  88 1F 00 D8 */	lbz r0, 0xd8(r31)
/* 80169EF0 00166E30  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80169EF4 00166E34  41 82 00 30 */	beq .L_80169F24
/* 80169EF8 00166E38  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80169EFC 00166E3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80169F00 00166E40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80169F04 00166E44  7D 89 03 A6 */	mtctr r12
/* 80169F08 00166E48  4E 80 04 21 */	bctrl 
/* 80169F0C 00166E4C  7F E3 FB 78 */	mr r3, r31
/* 80169F10 00166E50  81 9F 00 00 */	lwz r12, 0(r31)
/* 80169F14 00166E54  81 8C 01 F8 */	lwz r12, 0x1f8(r12)
/* 80169F18 00166E58  7D 89 03 A6 */	mtctr r12
/* 80169F1C 00166E5C  4E 80 04 21 */	bctrl 
/* 80169F20 00166E60  48 00 00 4C */	b .L_80169F6C
.L_80169F24:
/* 80169F24 00166E64  88 0D 84 68 */	lbz r0, sEntryOpt__Q24Game12BaseHIOParms@sda21(r13)
/* 80169F28 00166E68  28 00 00 00 */	cmplwi r0, 0
/* 80169F2C 00166E6C  41 82 00 2C */	beq .L_80169F58
/* 80169F30 00166E70  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80169F34 00166E74  38 60 00 00 */	li r3, 0
/* 80169F38 00166E78  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80169F3C 00166E7C  2C 00 00 01 */	cmpwi r0, 1
/* 80169F40 00166E80  41 82 00 0C */	beq .L_80169F4C
/* 80169F44 00166E84  2C 00 00 03 */	cmpwi r0, 3
/* 80169F48 00166E88  40 82 00 08 */	bne .L_80169F50
.L_80169F4C:
/* 80169F4C 00166E8C  38 60 00 01 */	li r3, 1
.L_80169F50:
/* 80169F50 00166E90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80169F54 00166E94  41 82 00 2C */	beq .L_80169F80
.L_80169F58:
/* 80169F58 00166E98  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80169F5C 00166E9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80169F60 00166EA0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80169F64 00166EA4  7D 89 03 A6 */	mtctr r12
/* 80169F68 00166EA8  4E 80 04 21 */	bctrl 
.L_80169F6C:
/* 80169F6C 00166EAC  7F E3 FB 78 */	mr r3, r31
/* 80169F70 00166EB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80169F74 00166EB4  81 8C 01 D4 */	lwz r12, 0x1d4(r12)
/* 80169F78 00166EB8  7D 89 03 A6 */	mtctr r12
/* 80169F7C 00166EBC  4E 80 04 21 */	bctrl 
.L_80169F80:
/* 80169F80 00166EC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169F84 00166EC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169F88 00166EC8  7C 08 03 A6 */	mtlr r0
/* 80169F8C 00166ECC  38 21 00 10 */	addi r1, r1, 0x10
/* 80169F90 00166ED0  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game6PelletFv

.fn changeMaterial__Q24Game6PelletFv, weak
/* 80169F94 00166ED4  4E 80 00 20 */	blr 
.endfn changeMaterial__Q24Game6PelletFv

.fn doSetView__Q24Game6PelletFi, global
/* 80169F98 00166ED8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169F9C 00166EDC  7C 08 02 A6 */	mflr r0
/* 80169FA0 00166EE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169FA4 00166EE4  4B FD 19 0D */	bl doSetView__Q24Game8CreatureFi
/* 80169FA8 00166EE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169FAC 00166EEC  7C 08 03 A6 */	mtlr r0
/* 80169FB0 00166EF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80169FB4 00166EF4  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game6PelletFi

.fn doViewCalc__Q24Game6PelletFv, global
/* 80169FB8 00166EF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169FBC 00166EFC  7C 08 02 A6 */	mflr r0
/* 80169FC0 00166F00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169FC4 00166F04  4B FD 19 F5 */	bl doViewCalc__Q24Game8CreatureFv
/* 80169FC8 00166F08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169FCC 00166F0C  7C 08 03 A6 */	mtlr r0
/* 80169FD0 00166F10  38 21 00 10 */	addi r1, r1, 0x10
/* 80169FD4 00166F14  4E 80 00 20 */	blr 
.endfn doViewCalc__Q24Game6PelletFv

.fn theEntry__Q24Game6PelletFv, global
/* 80169FD8 00166F18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169FDC 00166F1C  7C 08 02 A6 */	mflr r0
/* 80169FE0 00166F20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169FE4 00166F24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169FE8 00166F28  7C 7F 1B 78 */	mr r31, r3
/* 80169FEC 00166F2C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80169FF0 00166F30  28 03 00 00 */	cmplwi r3, 0
/* 80169FF4 00166F34  41 82 00 AC */	beq .L_8016A0A0
/* 80169FF8 00166F38  88 1F 00 D8 */	lbz r0, 0xd8(r31)
/* 80169FFC 00166F3C  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8016A000 00166F40  41 82 00 18 */	beq .L_8016A018
/* 8016A004 00166F44  81 83 00 00 */	lwz r12, 0(r3)
/* 8016A008 00166F48  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016A00C 00166F4C  7D 89 03 A6 */	mtctr r12
/* 8016A010 00166F50  4E 80 04 21 */	bctrl 
/* 8016A014 00166F54  48 00 00 48 */	b .L_8016A05C
.L_8016A018:
/* 8016A018 00166F58  88 0D 84 68 */	lbz r0, sEntryOpt__Q24Game12BaseHIOParms@sda21(r13)
/* 8016A01C 00166F5C  28 00 00 00 */	cmplwi r0, 0
/* 8016A020 00166F60  41 82 00 2C */	beq .L_8016A04C
/* 8016A024 00166F64  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8016A028 00166F68  38 80 00 00 */	li r4, 0
/* 8016A02C 00166F6C  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8016A030 00166F70  2C 00 00 01 */	cmpwi r0, 1
/* 8016A034 00166F74  41 82 00 0C */	beq .L_8016A040
/* 8016A038 00166F78  2C 00 00 03 */	cmpwi r0, 3
/* 8016A03C 00166F7C  40 82 00 08 */	bne .L_8016A044
.L_8016A040:
/* 8016A040 00166F80  38 80 00 01 */	li r4, 1
.L_8016A044:
/* 8016A044 00166F84  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8016A048 00166F88  41 82 00 58 */	beq .L_8016A0A0
.L_8016A04C:
/* 8016A04C 00166F8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016A050 00166F90  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016A054 00166F94  7D 89 03 A6 */	mtctr r12
/* 8016A058 00166F98  4E 80 04 21 */	bctrl 
.L_8016A05C:
/* 8016A05C 00166F9C  7F E3 FB 78 */	mr r3, r31
/* 8016A060 00166FA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016A064 00166FA4  81 8C 01 F8 */	lwz r12, 0x1f8(r12)
/* 8016A068 00166FA8  7D 89 03 A6 */	mtctr r12
/* 8016A06C 00166FAC  4E 80 04 21 */	bctrl 
/* 8016A070 00166FB0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8016A074 00166FB4  80 63 00 08 */	lwz r3, 8(r3)
/* 8016A078 00166FB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016A07C 00166FBC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8016A080 00166FC0  7D 89 03 A6 */	mtctr r12
/* 8016A084 00166FC4  4E 80 04 21 */	bctrl 
/* 8016A088 00166FC8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8016A08C 00166FCC  80 63 00 08 */	lwz r3, 8(r3)
/* 8016A090 00166FD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016A094 00166FD4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016A098 00166FD8  7D 89 03 A6 */	mtctr r12
/* 8016A09C 00166FDC  4E 80 04 21 */	bctrl 
.L_8016A0A0:
/* 8016A0A0 00166FE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016A0A4 00166FE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016A0A8 00166FE8  7C 08 03 A6 */	mtlr r0
/* 8016A0AC 00166FEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016A0B0 00166FF0  4E 80 00 20 */	blr 
.endfn theEntry__Q24Game6PelletFv

.fn entryShape__Q24Game6PelletFv, global
/* 8016A0B4 00166FF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016A0B8 00166FF8  7C 08 02 A6 */	mflr r0
/* 8016A0BC 00166FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016A0C0 00167000  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016A0C4 00167004  7C 7F 1B 78 */	mr r31, r3
/* 8016A0C8 00167008  80 03 03 58 */	lwz r0, 0x358(r3)
/* 8016A0CC 0016700C  28 00 00 00 */	cmplwi r0, 0
/* 8016A0D0 00167010  40 82 00 64 */	bne .L_8016A134
/* 8016A0D4 00167014  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8016A0D8 00167018  28 03 00 00 */	cmplwi r3, 0
/* 8016A0DC 0016701C  41 82 00 60 */	beq .L_8016A13C
/* 8016A0E0 00167020  80 83 00 08 */	lwz r4, 8(r3)
/* 8016A0E4 00167024  38 7F 01 38 */	addi r3, r31, 0x138
/* 8016A0E8 00167028  38 84 00 24 */	addi r4, r4, 0x24
/* 8016A0EC 0016702C  4B F8 01 E1 */	bl PSMTXCopy
/* 8016A0F0 00167030  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8016A0F4 00167034  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 8016A0F8 00167038  80 63 00 08 */	lwz r3, 8(r3)
/* 8016A0FC 0016703C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8016A100 00167040  C0 1F 01 6C */	lfs f0, 0x16c(r31)
/* 8016A104 00167044  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8016A108 00167048  C0 1F 01 70 */	lfs f0, 0x170(r31)
/* 8016A10C 0016704C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8016A110 00167050  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8016A114 00167054  80 63 00 08 */	lwz r3, 8(r3)
/* 8016A118 00167058  81 83 00 00 */	lwz r12, 0(r3)
/* 8016A11C 0016705C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016A120 00167060  7D 89 03 A6 */	mtctr r12
/* 8016A124 00167064  4E 80 04 21 */	bctrl 
/* 8016A128 00167068  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8016A12C 0016706C  4B FC B9 71 */	bl update__8CollTreeFv
/* 8016A130 00167070  48 00 00 0C */	b .L_8016A13C
.L_8016A134:
/* 8016A134 00167074  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8016A138 00167078  4B FC B9 65 */	bl update__8CollTreeFv
.L_8016A13C:
/* 8016A13C 0016707C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016A140 00167080  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016A144 00167084  7C 08 03 A6 */	mtlr r0
/* 8016A148 00167088  38 21 00 10 */	addi r1, r1, 0x10
/* 8016A14C 0016708C  4E 80 00 20 */	blr 
.endfn entryShape__Q24Game6PelletFv

.fn getBoundingSphere__Q24Game6PelletFRQ23Sys6Sphere, global
/* 8016A150 00167090  C0 03 04 44 */	lfs f0, 0x444(r3)
/* 8016A154 00167094  D0 04 00 00 */	stfs f0, 0(r4)
/* 8016A158 00167098  C0 03 04 48 */	lfs f0, 0x448(r3)
/* 8016A15C 0016709C  D0 04 00 04 */	stfs f0, 4(r4)
/* 8016A160 001670A0  C0 03 04 4C */	lfs f0, 0x44c(r3)
/* 8016A164 001670A4  D0 04 00 08 */	stfs f0, 8(r4)
/* 8016A168 001670A8  C0 03 04 50 */	lfs f0, 0x450(r3)
/* 8016A16C 001670AC  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 8016A170 001670B0  4E 80 00 20 */	blr 
.endfn getBoundingSphere__Q24Game6PelletFRQ23Sys6Sphere

.fn getLODSphere__Q24Game6PelletFRQ23Sys6Sphere, global
/* 8016A174 001670B4  C0 03 04 44 */	lfs f0, 0x444(r3)
/* 8016A178 001670B8  D0 04 00 00 */	stfs f0, 0(r4)
/* 8016A17C 001670BC  C0 03 04 48 */	lfs f0, 0x448(r3)
/* 8016A180 001670C0  D0 04 00 04 */	stfs f0, 4(r4)
/* 8016A184 001670C4  C0 03 04 4C */	lfs f0, 0x44c(r3)
/* 8016A188 001670C8  D0 04 00 08 */	stfs f0, 8(r4)
/* 8016A18C 001670CC  80 03 03 58 */	lwz r0, 0x358(r3)
/* 8016A190 001670D0  28 00 00 00 */	cmplwi r0, 0
/* 8016A194 001670D4  40 82 00 10 */	bne .L_8016A1A4
/* 8016A198 001670D8  C0 03 03 1C */	lfs f0, 0x31c(r3)
/* 8016A19C 001670DC  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 8016A1A0 001670E0  4E 80 00 20 */	blr 
.L_8016A1A4:
/* 8016A1A4 001670E4  C0 03 04 50 */	lfs f0, 0x450(r3)
/* 8016A1A8 001670E8  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 8016A1AC 001670EC  4E 80 00 20 */	blr 
.endfn getLODSphere__Q24Game6PelletFRQ23Sys6Sphere

.fn init_pmotions__Q24Game6PelletFv, global
/* 8016A1B0 001670F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016A1B4 001670F4  7C 08 02 A6 */	mflr r0
/* 8016A1B8 001670F8  7C 66 1B 78 */	mr r6, r3
/* 8016A1BC 001670FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016A1C0 00167100  80 63 03 5C */	lwz r3, 0x35c(r3)
/* 8016A1C4 00167104  80 03 01 A0 */	lwz r0, 0x1a0(r3)
/* 8016A1C8 00167108  2C 00 00 00 */	cmpwi r0, 0
/* 8016A1CC 0016710C  40 81 00 24 */	ble .L_8016A1F0
/* 8016A1D0 00167110  98 06 03 38 */	stb r0, 0x338(r6)
/* 8016A1D4 00167114  38 66 03 3C */	addi r3, r6, 0x33c
/* 8016A1D8 00167118  38 80 00 00 */	li r4, 0
/* 8016A1DC 0016711C  38 A0 00 00 */	li r5, 0
/* 8016A1E0 00167120  80 06 04 2C */	lwz r0, 0x42c(r6)
/* 8016A1E4 00167124  90 06 03 4C */	stw r0, 0x34c(r6)
/* 8016A1E8 00167128  48 2B EA A1 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8016A1EC 0016712C  48 00 00 0C */	b .L_8016A1F8
.L_8016A1F0:
/* 8016A1F0 00167130  38 00 00 00 */	li r0, 0
/* 8016A1F4 00167134  98 06 03 38 */	stb r0, 0x338(r6)
.L_8016A1F8:
/* 8016A1F8 00167138  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016A1FC 0016713C  7C 08 03 A6 */	mtlr r0
/* 8016A200 00167140  38 21 00 10 */	addi r1, r1, 0x10
/* 8016A204 00167144  4E 80 00 20 */	blr 
.endfn init_pmotions__Q24Game6PelletFv

.fn update_pmotions__Q24Game6PelletFv, global
/* 8016A208 00167148  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8016A20C 0016714C  7C 08 02 A6 */	mflr r0
/* 8016A210 00167150  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8016A214 00167154  BF 61 00 8C */	stmw r27, 0x8c(r1)
/* 8016A218 00167158  7C 7B 1B 78 */	mr r27, r3
/* 8016A21C 0016715C  3B A0 00 00 */	li r29, 0
/* 8016A220 00167160  3B 9B 03 3C */	addi r28, r27, 0x33c
/* 8016A224 00167164  48 00 00 78 */	b .L_8016A29C
.L_8016A228:
/* 8016A228 00167168  7F 83 E3 78 */	mr r3, r28
/* 8016A22C 0016716C  C0 22 A5 B0 */	lfs f1, lbl_80518910@sda21(r2)
/* 8016A230 00167170  81 9C 00 00 */	lwz r12, 0(r28)
/* 8016A234 00167174  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8016A238 00167178  7D 89 03 A6 */	mtctr r12
/* 8016A23C 0016717C  4E 80 04 21 */	bctrl 
/* 8016A240 00167180  38 61 00 08 */	addi r3, r1, 8
/* 8016A244 00167184  38 82 A6 58 */	addi r4, r2, lbl_805189B8@sda21
/* 8016A248 00167188  4C C6 31 82 */	crclr 6
/* 8016A24C 0016718C  4B F5 D1 ED */	bl sprintf
/* 8016A250 00167190  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 8016A254 00167194  38 81 00 08 */	addi r4, r1, 8
/* 8016A258 00167198  48 2D 4D 8D */	bl getJoint__Q28SysShape5ModelFPc
/* 8016A25C 0016719C  28 03 00 00 */	cmplwi r3, 0
/* 8016A260 001671A0  41 82 00 38 */	beq .L_8016A298
/* 8016A264 001671A4  A3 C3 00 38 */	lhz r30, 0x38(r3)
/* 8016A268 001671A8  7F 83 E3 78 */	mr r3, r28
/* 8016A26C 001671AC  81 9C 00 00 */	lwz r12, 0(r28)
/* 8016A270 001671B0  83 FB 01 74 */	lwz r31, 0x174(r27)
/* 8016A274 001671B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016A278 001671B8  7D 89 03 A6 */	mtctr r12
/* 8016A27C 001671BC  4E 80 04 21 */	bctrl 
/* 8016A280 001671C0  80 9F 00 08 */	lwz r4, 8(r31)
/* 8016A284 001671C4  57 C0 13 BA */	rlwinm r0, r30, 2, 0xe, 0x1d
/* 8016A288 001671C8  80 84 00 04 */	lwz r4, 4(r4)
/* 8016A28C 001671CC  80 84 00 28 */	lwz r4, 0x28(r4)
/* 8016A290 001671D0  7C 84 00 2E */	lwzx r4, r4, r0
/* 8016A294 001671D4  90 64 00 54 */	stw r3, 0x54(r4)
.L_8016A298:
/* 8016A298 001671D8  3B BD 00 01 */	addi r29, r29, 1
.L_8016A29C:
/* 8016A29C 001671DC  88 1B 03 38 */	lbz r0, 0x338(r27)
/* 8016A2A0 001671E0  7C 1D 00 00 */	cmpw r29, r0
/* 8016A2A4 001671E4  41 80 FF 84 */	blt .L_8016A228
/* 8016A2A8 001671E8  BB 61 00 8C */	lmw r27, 0x8c(r1)
/* 8016A2AC 001671EC  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8016A2B0 001671F0  7C 08 03 A6 */	mtlr r0
/* 8016A2B4 001671F4  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8016A2B8 001671F8  4E 80 00 20 */	blr 
.endfn update_pmotions__Q24Game6PelletFv

.fn start_pmotions__Q24Game6PelletFv, global
/* 8016A2BC 001671FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016A2C0 00167200  7C 08 02 A6 */	mflr r0
/* 8016A2C4 00167204  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016A2C8 00167208  88 03 03 38 */	lbz r0, 0x338(r3)
/* 8016A2CC 0016720C  28 00 00 00 */	cmplwi r0, 0
/* 8016A2D0 00167210  41 82 00 20 */	beq .L_8016A2F0
/* 8016A2D4 00167214  28 03 00 00 */	cmplwi r3, 0
/* 8016A2D8 00167218  7C 65 1B 78 */	mr r5, r3
/* 8016A2DC 0016721C  38 63 03 3C */	addi r3, r3, 0x33c
/* 8016A2E0 00167220  41 82 00 08 */	beq .L_8016A2E8
/* 8016A2E4 00167224  38 A5 03 14 */	addi r5, r5, 0x314
.L_8016A2E8:
/* 8016A2E8 00167228  38 80 00 01 */	li r4, 1
/* 8016A2EC 0016722C  48 2B E9 9D */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
.L_8016A2F0:
/* 8016A2F0 00167230  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016A2F4 00167234  7C 08 03 A6 */	mtlr r0
/* 8016A2F8 00167238  38 21 00 10 */	addi r1, r1, 0x10
/* 8016A2FC 0016723C  4E 80 00 20 */	blr 
.endfn start_pmotions__Q24Game6PelletFv

.fn stop_carrymotion__Q24Game6PelletFv, global
/* 8016A300 00167240  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016A304 00167244  D0 03 04 38 */	stfs f0, 0x438(r3)
/* 8016A308 00167248  4E 80 00 20 */	blr 
.endfn stop_carrymotion__Q24Game6PelletFv

.fn finish_carrymotion__Q24Game6PelletFv, global
/* 8016A30C 0016724C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016A310 00167250  7C 08 02 A6 */	mflr r0
/* 8016A314 00167254  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016A318 00167258  80 03 04 2C */	lwz r0, 0x42c(r3)
/* 8016A31C 0016725C  28 00 00 00 */	cmplwi r0, 0
/* 8016A320 00167260  41 82 00 14 */	beq .L_8016A334
/* 8016A324 00167264  88 03 04 34 */	lbz r0, 0x434(r3)
/* 8016A328 00167268  60 00 00 02 */	ori r0, r0, 2
/* 8016A32C 0016726C  98 03 04 34 */	stb r0, 0x434(r3)
/* 8016A330 00167270  48 00 00 20 */	b .L_8016A350
.L_8016A334:
/* 8016A334 00167274  80 63 03 58 */	lwz r3, 0x358(r3)
/* 8016A338 00167278  28 03 00 00 */	cmplwi r3, 0
/* 8016A33C 0016727C  41 82 00 14 */	beq .L_8016A350
/* 8016A340 00167280  81 83 00 00 */	lwz r12, 0(r3)
/* 8016A344 00167284  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016A348 00167288  7D 89 03 A6 */	mtctr r12
/* 8016A34C 0016728C  4E 80 04 21 */	bctrl 
.L_8016A350:
/* 8016A350 00167290  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016A354 00167294  7C 08 03 A6 */	mtlr r0
/* 8016A358 00167298  38 21 00 10 */	addi r1, r1, 0x10
/* 8016A35C 0016729C  4E 80 00 20 */	blr 
.endfn finish_carrymotion__Q24Game6PelletFv

.fn onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent, global
/* 8016A360 001672A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016A364 001672A4  7C 08 02 A6 */	mflr r0
/* 8016A368 001672A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016A36C 001672AC  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8016A370 001672B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016A374 001672B4  7C 7F 1B 78 */	mr r31, r3
/* 8016A378 001672B8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8016A37C 001672BC  40 82 00 58 */	bne .L_8016A3D4
/* 8016A380 001672C0  88 1F 04 34 */	lbz r0, 0x434(r31)
/* 8016A384 001672C4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016A388 001672C8  41 82 00 4C */	beq .L_8016A3D4
/* 8016A38C 001672CC  28 1F 00 00 */	cmplwi r31, 0
/* 8016A390 001672D0  7F E5 FB 78 */	mr r5, r31
/* 8016A394 001672D4  41 82 00 08 */	beq .L_8016A39C
/* 8016A398 001672D8  38 A5 03 14 */	addi r5, r5, 0x314
.L_8016A39C:
/* 8016A39C 001672DC  38 7F 04 1C */	addi r3, r31, 0x41c
/* 8016A3A0 001672E0  38 80 00 00 */	li r4, 0
/* 8016A3A4 001672E4  48 2B E8 E5 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8016A3A8 001672E8  88 1F 03 D0 */	lbz r0, 0x3d0(r31)
/* 8016A3AC 001672EC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016A3B0 001672F0  41 82 00 1C */	beq .L_8016A3CC
/* 8016A3B4 001672F4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8016A3B8 001672F8  C0 22 A5 C8 */	lfs f1, lbl_80518928@sda21(r2)
/* 8016A3BC 001672FC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8016A3C0 00167300  EC 01 00 32 */	fmuls f0, f1, f0
/* 8016A3C4 00167304  D0 1F 04 38 */	stfs f0, 0x438(r31)
/* 8016A3C8 00167308  48 00 00 0C */	b .L_8016A3D4
.L_8016A3CC:
/* 8016A3CC 0016730C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016A3D0 00167310  D0 1F 04 38 */	stfs f0, 0x438(r31)
.L_8016A3D4:
/* 8016A3D4 00167314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016A3D8 00167318  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016A3DC 0016731C  7C 08 03 A6 */	mtlr r0
/* 8016A3E0 00167320  38 21 00 10 */	addi r1, r1, 0x10
/* 8016A3E4 00167324  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent

.fn isSlotFree__Q24Game6PelletFs, global
/* 8016A3E8 00167328  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016A3EC 0016732C  7C 08 02 A6 */	mflr r0
/* 8016A3F0 00167330  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016A3F4 00167334  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016A3F8 00167338  7C 9F 23 78 */	mr r31, r4
/* 8016A3FC 0016733C  7F E4 07 34 */	extsh r4, r31
/* 8016A400 00167340  2C 04 27 0F */	cmpwi r4, 0x270f
/* 8016A404 00167344  93 C1 00 08 */	stw r30, 8(r1)
/* 8016A408 00167348  7C 7E 1B 78 */	mr r30, r3
/* 8016A40C 0016734C  40 82 00 14 */	bne .L_8016A420
/* 8016A410 00167350  88 1E 03 F6 */	lbz r0, 0x3f6(r30)
/* 8016A414 00167354  7C 00 00 34 */	cntlzw r0, r0
/* 8016A418 00167358  54 03 D9 7E */	srwi r3, r0, 5
/* 8016A41C 0016735C  48 00 00 74 */	b .L_8016A490
.L_8016A420:
/* 8016A420 00167360  7F E0 07 35 */	extsh. r0, r31
/* 8016A424 00167364  38 60 00 00 */	li r3, 0
/* 8016A428 00167368  41 80 00 14 */	blt .L_8016A43C
/* 8016A42C 0016736C  A8 1E 03 F4 */	lha r0, 0x3f4(r30)
/* 8016A430 00167370  7C 04 00 00 */	cmpw r4, r0
/* 8016A434 00167374  40 80 00 08 */	bge .L_8016A43C
/* 8016A438 00167378  38 60 00 01 */	li r3, 1
.L_8016A43C:
/* 8016A43C 0016737C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016A440 00167380  40 82 00 20 */	bne .L_8016A460
/* 8016A444 00167384  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016A448 00167388  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016A44C 0016738C  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016A450 00167390  38 80 0E 66 */	li r4, 0xe66
/* 8016A454 00167394  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016A458 00167398  4C C6 31 82 */	crclr 6
/* 8016A45C 0016739C  4B EC 01 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016A460:
/* 8016A460 001673A0  7F E6 07 34 */	extsh r6, r31
/* 8016A464 001673A4  38 A0 00 01 */	li r5, 1
/* 8016A468 001673A8  7C C3 1E 70 */	srawi r3, r6, 3
/* 8016A46C 001673AC  20 03 00 0F */	subfic r0, r3, 0xf
/* 8016A470 001673B0  54 64 18 38 */	slwi r4, r3, 3
/* 8016A474 001673B4  7C 7E 02 14 */	add r3, r30, r0
/* 8016A478 001673B8  7C 84 30 50 */	subf r4, r4, r6
/* 8016A47C 001673BC  88 03 03 E4 */	lbz r0, 0x3e4(r3)
/* 8016A480 001673C0  7C A3 20 30 */	slw r3, r5, r4
/* 8016A484 001673C4  7C 60 00 38 */	and r0, r3, r0
/* 8016A488 001673C8  7C 00 00 34 */	cntlzw r0, r0
/* 8016A48C 001673CC  54 03 D9 7E */	srwi r3, r0, 5
.L_8016A490:
/* 8016A490 001673D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016A494 001673D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016A498 001673D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016A49C 001673DC  7C 08 03 A6 */	mtlr r0
/* 8016A4A0 001673E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016A4A4 001673E4  4E 80 00 20 */	blr 
.endfn isSlotFree__Q24Game6PelletFs

.fn getSpeicalSlot__Q24Game6PelletFv, global
/* 8016A4A8 001673E8  88 03 03 F6 */	lbz r0, 0x3f6(r3)
/* 8016A4AC 001673EC  38 60 27 0F */	li r3, 0x270f
/* 8016A4B0 001673F0  28 00 00 00 */	cmplwi r0, 0
/* 8016A4B4 001673F4  41 82 00 08 */	beq .L_8016A4BC
/* 8016A4B8 001673F8  38 60 FF FF */	li r3, -1
.L_8016A4BC:
/* 8016A4BC 001673FC  7C 63 07 34 */	extsh r3, r3
/* 8016A4C0 00167400  4E 80 00 20 */	blr 
.endfn getSpeicalSlot__Q24Game6PelletFv

.fn getFreeStickSlot__Q24Game6PelletFv, global
/* 8016A4C4 00167404  A8 03 03 F4 */	lha r0, 0x3f4(r3)
/* 8016A4C8 00167408  38 E0 00 00 */	li r7, 0
/* 8016A4CC 0016740C  38 C0 00 01 */	li r6, 1
/* 8016A4D0 00167410  7C 09 03 A6 */	mtctr r0
/* 8016A4D4 00167414  2C 00 00 00 */	cmpwi r0, 0
/* 8016A4D8 00167418  40 81 00 38 */	ble .L_8016A510
.L_8016A4DC:
/* 8016A4DC 0016741C  7C E4 1E 70 */	srawi r4, r7, 3
/* 8016A4E0 00167420  20 04 00 0F */	subfic r0, r4, 0xf
/* 8016A4E4 00167424  54 85 18 38 */	slwi r5, r4, 3
/* 8016A4E8 00167428  7C 83 02 14 */	add r4, r3, r0
/* 8016A4EC 0016742C  7C A5 38 50 */	subf r5, r5, r7
/* 8016A4F0 00167430  88 04 03 E4 */	lbz r0, 0x3e4(r4)
/* 8016A4F4 00167434  7C C4 28 30 */	slw r4, r6, r5
/* 8016A4F8 00167438  7C 80 00 39 */	and. r0, r4, r0
/* 8016A4FC 0016743C  40 82 00 0C */	bne .L_8016A508
/* 8016A500 00167440  7C E3 07 34 */	extsh r3, r7
/* 8016A504 00167444  4E 80 00 20 */	blr 
.L_8016A508:
/* 8016A508 00167448  38 E7 00 01 */	addi r7, r7, 1
/* 8016A50C 0016744C  42 00 FF D0 */	bdnz .L_8016A4DC
.L_8016A510:
/* 8016A510 00167450  38 60 FF FF */	li r3, -1
/* 8016A514 00167454  4E 80 00 20 */	blr 
.endfn getFreeStickSlot__Q24Game6PelletFv

.fn "getNearFreeStickSlot__Q24Game6PelletFR10Vector3<f>", global
/* 8016A518 00167458  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016A51C 0016745C  7C 08 02 A6 */	mflr r0
/* 8016A520 00167460  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016A524 00167464  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016A528 00167468  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8016A52C 0016746C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016A530 00167470  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016A534 00167474  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8016A538 00167478  93 81 00 20 */	stw r28, 0x20(r1)
/* 8016A53C 0016747C  C3 E2 A6 60 */	lfs f31, lbl_805189C0@sda21(r2)
/* 8016A540 00167480  7C 7C 1B 78 */	mr r28, r3
/* 8016A544 00167484  7C 9D 23 78 */	mr r29, r4
/* 8016A548 00167488  3B E0 FF FF */	li r31, -1
/* 8016A54C 0016748C  3B C0 00 00 */	li r30, 0
/* 8016A550 00167490  48 00 00 B4 */	b .L_8016A604
.L_8016A554:
/* 8016A554 00167494  7F C6 07 34 */	extsh r6, r30
/* 8016A558 00167498  38 A0 00 01 */	li r5, 1
/* 8016A55C 0016749C  7C C3 1E 70 */	srawi r3, r6, 3
/* 8016A560 001674A0  20 03 00 0F */	subfic r0, r3, 0xf
/* 8016A564 001674A4  54 64 18 38 */	slwi r4, r3, 3
/* 8016A568 001674A8  7C 7C 02 14 */	add r3, r28, r0
/* 8016A56C 001674AC  7C 84 30 50 */	subf r4, r4, r6
/* 8016A570 001674B0  88 03 03 E4 */	lbz r0, 0x3e4(r3)
/* 8016A574 001674B4  7C A3 20 30 */	slw r3, r5, r4
/* 8016A578 001674B8  7C 60 00 39 */	and. r0, r3, r0
/* 8016A57C 001674BC  40 82 00 84 */	bne .L_8016A600
/* 8016A580 001674C0  7F 83 E3 78 */	mr r3, r28
/* 8016A584 001674C4  7F C4 F3 78 */	mr r4, r30
/* 8016A588 001674C8  81 9C 00 00 */	lwz r12, 0(r28)
/* 8016A58C 001674CC  38 A1 00 08 */	addi r5, r1, 8
/* 8016A590 001674D0  81 8C 01 80 */	lwz r12, 0x180(r12)
/* 8016A594 001674D4  7D 89 03 A6 */	mtctr r12
/* 8016A598 001674D8  4E 80 04 21 */	bctrl 
/* 8016A59C 001674DC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016A5A0 001674E0  C0 1D 00 04 */	lfs f0, 4(r29)
/* 8016A5A4 001674E4  C0 61 00 08 */	lfs f3, 8(r1)
/* 8016A5A8 001674E8  EC 81 00 28 */	fsubs f4, f1, f0
/* 8016A5AC 001674EC  C0 5D 00 00 */	lfs f2, 0(r29)
/* 8016A5B0 001674F0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8016A5B4 001674F4  C0 1D 00 08 */	lfs f0, 8(r29)
/* 8016A5B8 001674F8  EC 63 10 28 */	fsubs f3, f3, f2
/* 8016A5BC 001674FC  EC 84 01 32 */	fmuls f4, f4, f4
/* 8016A5C0 00167500  EC 41 00 28 */	fsubs f2, f1, f0
/* 8016A5C4 00167504  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016A5C8 00167508  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 8016A5CC 0016750C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8016A5D0 00167510  EC 22 08 2A */	fadds f1, f2, f1
/* 8016A5D4 00167514  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016A5D8 00167518  40 81 00 14 */	ble .L_8016A5EC
/* 8016A5DC 0016751C  40 81 00 14 */	ble .L_8016A5F0
/* 8016A5E0 00167520  FC 00 08 34 */	frsqrte f0, f1
/* 8016A5E4 00167524  EC 20 00 72 */	fmuls f1, f0, f1
/* 8016A5E8 00167528  48 00 00 08 */	b .L_8016A5F0
.L_8016A5EC:
/* 8016A5EC 0016752C  FC 20 00 90 */	fmr f1, f0
.L_8016A5F0:
/* 8016A5F0 00167530  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 8016A5F4 00167534  40 80 00 0C */	bge .L_8016A600
/* 8016A5F8 00167538  FF E0 08 90 */	fmr f31, f1
/* 8016A5FC 0016753C  7F DF F3 78 */	mr r31, r30
.L_8016A600:
/* 8016A600 00167540  3B DE 00 01 */	addi r30, r30, 1
.L_8016A604:
/* 8016A604 00167544  A8 1C 03 F4 */	lha r0, 0x3f4(r28)
/* 8016A608 00167548  7F C3 07 34 */	extsh r3, r30
/* 8016A60C 0016754C  7C 03 00 00 */	cmpw r3, r0
/* 8016A610 00167550  41 80 FF 44 */	blt .L_8016A554
/* 8016A614 00167554  7F E3 FB 78 */	mr r3, r31
/* 8016A618 00167558  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8016A61C 0016755C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016A620 00167560  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016A624 00167564  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016A628 00167568  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016A62C 0016756C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8016A630 00167570  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8016A634 00167574  7C 08 03 A6 */	mtlr r0
/* 8016A638 00167578  38 21 00 40 */	addi r1, r1, 0x40
/* 8016A63C 0016757C  4E 80 00 20 */	blr 
.endfn "getNearFreeStickSlot__Q24Game6PelletFR10Vector3<f>"

.fn getRandomFreeStickSlot__Q24Game6PelletFv, global
/* 8016A640 00167580  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016A644 00167584  7C 08 02 A6 */	mflr r0
/* 8016A648 00167588  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016A64C 0016758C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016A650 00167590  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016A654 00167594  7C 7E 1B 78 */	mr r30, r3
/* 8016A658 00167598  AB E3 03 F4 */	lha r31, 0x3f4(r3)
/* 8016A65C 0016759C  4B F5 EF 45 */	bl rand
/* 8016A660 001675A0  3C 80 43 30 */	lis r4, 0x4330
/* 8016A664 001675A4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8016A668 001675A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016A66C 001675AC  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 8016A670 001675B0  C8 42 A5 D0 */	lfd f2, lbl_80518930@sda21(r2)
/* 8016A674 001675B4  39 20 00 80 */	li r9, 0x80
/* 8016A678 001675B8  90 81 00 08 */	stw r4, 8(r1)
/* 8016A67C 001675BC  38 60 FF FF */	li r3, -1
/* 8016A680 001675C0  C0 02 A5 E0 */	lfs f0, lbl_80518940@sda21(r2)
/* 8016A684 001675C4  39 40 00 00 */	li r10, 0
/* 8016A688 001675C8  C8 21 00 08 */	lfd f1, 8(r1)
/* 8016A68C 001675CC  38 C0 00 01 */	li r6, 1
/* 8016A690 001675D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016A694 001675D4  EC 21 10 28 */	fsubs f1, f1, f2
/* 8016A698 001675D8  90 81 00 10 */	stw r4, 0x10(r1)
/* 8016A69C 001675DC  EC 21 00 24 */	fdivs f1, f1, f0
/* 8016A6A0 001675E0  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8016A6A4 001675E4  EC 00 10 28 */	fsubs f0, f0, f2
/* 8016A6A8 001675E8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8016A6AC 001675EC  FC 00 00 1E */	fctiwz f0, f0
/* 8016A6B0 001675F0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8016A6B4 001675F4  81 01 00 1C */	lwz r8, 0x1c(r1)
/* 8016A6B8 001675F8  48 00 00 4C */	b .L_8016A704
.L_8016A6BC:
/* 8016A6BC 001675FC  7C E4 1E 70 */	srawi r4, r7, 3
/* 8016A6C0 00167600  20 04 00 0F */	subfic r0, r4, 0xf
/* 8016A6C4 00167604  54 85 18 38 */	slwi r5, r4, 3
/* 8016A6C8 00167608  7C 9E 02 14 */	add r4, r30, r0
/* 8016A6CC 0016760C  7C A5 38 50 */	subf r5, r5, r7
/* 8016A6D0 00167610  88 04 03 E4 */	lbz r0, 0x3e4(r4)
/* 8016A6D4 00167614  7C C4 28 30 */	slw r4, r6, r5
/* 8016A6D8 00167618  7C 80 00 39 */	and. r0, r4, r0
/* 8016A6DC 0016761C  40 82 00 24 */	bne .L_8016A700
/* 8016A6E0 00167620  7C 08 38 50 */	subf r0, r8, r7
/* 8016A6E4 00167624  7C 04 FE 70 */	srawi r4, r0, 0x1f
/* 8016A6E8 00167628  7C 80 02 78 */	xor r0, r4, r0
/* 8016A6EC 0016762C  7C 04 00 50 */	subf r0, r4, r0
/* 8016A6F0 00167630  7C 00 48 00 */	cmpw r0, r9
/* 8016A6F4 00167634  40 80 00 0C */	bge .L_8016A700
/* 8016A6F8 00167638  7C 09 03 78 */	mr r9, r0
/* 8016A6FC 0016763C  7D 43 53 78 */	mr r3, r10
.L_8016A700:
/* 8016A700 00167640  39 4A 00 01 */	addi r10, r10, 1
.L_8016A704:
/* 8016A704 00167644  7D 47 07 34 */	extsh r7, r10
/* 8016A708 00167648  7C 07 F8 00 */	cmpw r7, r31
/* 8016A70C 0016764C  41 80 FF B0 */	blt .L_8016A6BC
/* 8016A710 00167650  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016A714 00167654  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016A718 00167658  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016A71C 0016765C  7C 08 03 A6 */	mtlr r0
/* 8016A720 00167660  38 21 00 30 */	addi r1, r1, 0x30
/* 8016A724 00167664  4E 80 00 20 */	blr 
.endfn getRandomFreeStickSlot__Q24Game6PelletFv

.fn getPelletGoal__Q24Game6PelletFv, global
/* 8016A728 00167668  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016A72C 0016766C  7C 08 02 A6 */	mflr r0
/* 8016A730 00167670  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016A734 00167674  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016A738 00167678  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016A73C 0016767C  7C 7E 1B 78 */	mr r30, r3
/* 8016A740 00167680  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8016A744 00167684  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8016A748 00167688  2C 00 00 01 */	cmpwi r0, 1
/* 8016A74C 0016768C  41 82 00 60 */	beq .L_8016A7AC
/* 8016A750 00167690  81 83 00 00 */	lwz r12, 0(r3)
/* 8016A754 00167694  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8016A758 00167698  7D 89 03 A6 */	mtctr r12
/* 8016A75C 0016769C  4E 80 04 21 */	bctrl 
/* 8016A760 001676A0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8016A764 001676A4  28 00 00 03 */	cmplwi r0, 3
/* 8016A768 001676A8  41 82 01 98 */	beq .L_8016A900
/* 8016A76C 001676AC  7F C3 F3 78 */	mr r3, r30
/* 8016A770 001676B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8016A774 001676B4  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8016A778 001676B8  7D 89 03 A6 */	mtctr r12
/* 8016A77C 001676BC  4E 80 04 21 */	bctrl 
/* 8016A780 001676C0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8016A784 001676C4  28 00 00 02 */	cmplwi r0, 2
/* 8016A788 001676C8  41 82 01 78 */	beq .L_8016A900
/* 8016A78C 001676CC  7F C3 F3 78 */	mr r3, r30
/* 8016A790 001676D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8016A794 001676D4  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8016A798 001676D8  7D 89 03 A6 */	mtctr r12
/* 8016A79C 001676DC  4E 80 04 21 */	bctrl 
/* 8016A7A0 001676E0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8016A7A4 001676E4  28 00 00 04 */	cmplwi r0, 4
/* 8016A7A8 001676E8  41 82 01 58 */	beq .L_8016A900
.L_8016A7AC:
/* 8016A7AC 001676EC  80 1E 03 F8 */	lwz r0, 0x3f8(r30)
/* 8016A7B0 001676F0  38 A0 FF FF */	li r5, -1
/* 8016A7B4 001676F4  3B E0 00 00 */	li r31, 0
/* 8016A7B8 001676F8  38 60 00 00 */	li r3, 0
/* 8016A7BC 001676FC  7C 05 00 00 */	cmpw r5, r0
/* 8016A7C0 00167700  40 80 00 08 */	bge .L_8016A7C8
/* 8016A7C4 00167704  7C 05 03 78 */	mr r5, r0
.L_8016A7C8:
/* 8016A7C8 00167708  80 1E 03 FC */	lwz r0, 0x3fc(r30)
/* 8016A7CC 0016770C  7C 05 00 00 */	cmpw r5, r0
/* 8016A7D0 00167710  40 80 00 08 */	bge .L_8016A7D8
/* 8016A7D4 00167714  7C 05 03 78 */	mr r5, r0
.L_8016A7D8:
/* 8016A7D8 00167718  80 1E 04 00 */	lwz r0, 0x400(r30)
/* 8016A7DC 0016771C  7C 05 00 00 */	cmpw r5, r0
/* 8016A7E0 00167720  40 80 00 08 */	bge .L_8016A7E8
/* 8016A7E4 00167724  7C 05 03 78 */	mr r5, r0
.L_8016A7E8:
/* 8016A7E8 00167728  80 1E 03 F8 */	lwz r0, 0x3f8(r30)
/* 8016A7EC 0016772C  38 81 00 08 */	addi r4, r1, 8
/* 8016A7F0 00167730  38 C0 00 00 */	li r6, 0
/* 8016A7F4 00167734  7C 05 00 00 */	cmpw r5, r0
/* 8016A7F8 00167738  40 82 00 10 */	bne .L_8016A808
/* 8016A7FC 0016773C  90 C1 00 08 */	stw r6, 8(r1)
/* 8016A800 00167740  3B E0 00 01 */	li r31, 1
/* 8016A804 00167744  38 60 00 04 */	li r3, 4
.L_8016A808:
/* 8016A808 00167748  80 1E 03 FC */	lwz r0, 0x3fc(r30)
/* 8016A80C 0016774C  38 C0 00 01 */	li r6, 1
/* 8016A810 00167750  7C 05 00 00 */	cmpw r5, r0
/* 8016A814 00167754  40 82 00 10 */	bne .L_8016A824
/* 8016A818 00167758  7C C4 19 2E */	stwx r6, r4, r3
/* 8016A81C 0016775C  3B FF 00 01 */	addi r31, r31, 1
/* 8016A820 00167760  38 63 00 04 */	addi r3, r3, 4
.L_8016A824:
/* 8016A824 00167764  80 1E 04 00 */	lwz r0, 0x400(r30)
/* 8016A828 00167768  38 C0 00 02 */	li r6, 2
/* 8016A82C 0016776C  7C 05 00 00 */	cmpw r5, r0
/* 8016A830 00167770  40 82 00 0C */	bne .L_8016A83C
/* 8016A834 00167774  7C C4 19 2E */	stwx r6, r4, r3
/* 8016A838 00167778  3B FF 00 01 */	addi r31, r31, 1
.L_8016A83C:
/* 8016A83C 0016777C  4B F5 ED 65 */	bl rand
/* 8016A840 00167780  3C 80 43 30 */	lis r4, 0x4330
/* 8016A844 00167784  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8016A848 00167788  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016A84C 0016778C  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 8016A850 00167790  C8 42 A5 D0 */	lfd f2, lbl_80518930@sda21(r2)
/* 8016A854 00167794  90 81 00 18 */	stw r4, 0x18(r1)
/* 8016A858 00167798  C0 02 A5 E0 */	lfs f0, lbl_80518940@sda21(r2)
/* 8016A85C 0016779C  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 8016A860 001677A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016A864 001677A4  EC 21 10 28 */	fsubs f1, f1, f2
/* 8016A868 001677A8  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016A86C 001677AC  EC 21 00 24 */	fdivs f1, f1, f0
/* 8016A870 001677B0  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8016A874 001677B4  EC 00 10 28 */	fsubs f0, f0, f2
/* 8016A878 001677B8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8016A87C 001677BC  FC 00 00 1E */	fctiwz f0, f0
/* 8016A880 001677C0  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8016A884 001677C4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8016A888 001677C8  7C 00 F8 00 */	cmpw r0, r31
/* 8016A88C 001677CC  41 80 00 08 */	blt .L_8016A894
/* 8016A890 001677D0  38 00 00 00 */	li r0, 0
.L_8016A894:
/* 8016A894 001677D4  54 00 10 3A */	slwi r0, r0, 2
/* 8016A898 001677D8  38 61 00 08 */	addi r3, r1, 8
/* 8016A89C 001677DC  7F C3 00 2E */	lwzx r30, r3, r0
/* 8016A8A0 001677E0  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8016A8A4 001677E4  7F C4 F3 78 */	mr r4, r30
/* 8016A8A8 001677E8  48 01 11 F5 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8016A8AC 001677EC  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8016A8B0 001677F0  7C 7F 1B 78 */	mr r31, r3
/* 8016A8B4 001677F4  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8016A8B8 001677F8  2C 00 00 00 */	cmpwi r0, 0
/* 8016A8BC 001677FC  40 82 00 1C */	bne .L_8016A8D8
/* 8016A8C0 00167800  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8016A8C4 00167804  7F C4 F3 78 */	mr r4, r30
/* 8016A8C8 00167808  48 07 C8 11 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 8016A8CC 0016780C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016A8D0 00167810  40 82 00 08 */	bne .L_8016A8D8
/* 8016A8D4 00167814  3B E0 00 00 */	li r31, 0
.L_8016A8D8:
/* 8016A8D8 00167818  28 1F 00 00 */	cmplwi r31, 0
/* 8016A8DC 0016781C  40 82 00 3C */	bne .L_8016A918
/* 8016A8E0 00167820  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8016A8E4 00167824  38 80 00 01 */	li r4, 1
/* 8016A8E8 00167828  48 01 11 B5 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8016A8EC 0016782C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8016A8F0 00167830  40 82 00 28 */	bne .L_8016A918
/* 8016A8F4 00167834  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8016A8F8 00167838  83 E3 00 AC */	lwz r31, 0xac(r3)
/* 8016A8FC 0016783C  48 00 00 1C */	b .L_8016A918
.L_8016A900:
/* 8016A900 00167840  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8016A904 00167844  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 8016A908 00167848  28 00 00 00 */	cmplwi r0, 0
/* 8016A90C 0016784C  7C 1F 03 78 */	mr r31, r0
/* 8016A910 00167850  40 82 00 08 */	bne .L_8016A918
/* 8016A914 00167854  83 E3 00 AC */	lwz r31, 0xac(r3)
.L_8016A918:
/* 8016A918 00167858  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016A91C 0016785C  7F E3 FB 78 */	mr r3, r31
/* 8016A920 00167860  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016A924 00167864  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016A928 00167868  7C 08 03 A6 */	mtlr r0
/* 8016A92C 0016786C  38 21 00 40 */	addi r1, r1, 0x40
/* 8016A930 00167870  4E 80 00 20 */	blr 
.endfn getPelletGoal__Q24Game6PelletFv

.fn getTotalPikmins__Q24Game6PelletFv, global
/* 8016A934 00167874  80 A3 03 F8 */	lwz r5, 0x3f8(r3)
/* 8016A938 00167878  80 83 03 FC */	lwz r4, 0x3fc(r3)
/* 8016A93C 0016787C  80 03 04 00 */	lwz r0, 0x400(r3)
/* 8016A940 00167880  7C A5 22 14 */	add r5, r5, r4
/* 8016A944 00167884  80 83 04 04 */	lwz r4, 0x404(r3)
/* 8016A948 00167888  7C A5 02 14 */	add r5, r5, r0
/* 8016A94C 0016788C  80 03 04 08 */	lwz r0, 0x408(r3)
/* 8016A950 00167890  7C A5 22 14 */	add r5, r5, r4
/* 8016A954 00167894  80 83 04 0C */	lwz r4, 0x40c(r3)
/* 8016A958 00167898  7C A5 02 14 */	add r5, r5, r0
/* 8016A95C 0016789C  80 03 04 10 */	lwz r0, 0x410(r3)
/* 8016A960 001678A0  7C A5 22 14 */	add r5, r5, r4
/* 8016A964 001678A4  7C A5 02 14 */	add r5, r5, r0
/* 8016A968 001678A8  7C A3 2B 78 */	mr r3, r5
/* 8016A96C 001678AC  4E 80 00 20 */	blr 
.endfn getTotalPikmins__Q24Game6PelletFv

.fn getTotalCarryPikmins__Q24Game6PelletFv, global
/* 8016A970 001678B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016A974 001678B4  7C 08 02 A6 */	mflr r0
/* 8016A978 001678B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016A97C 001678BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016A980 001678C0  7C 7F 1B 78 */	mr r31, r3
/* 8016A984 001678C4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016A988 001678C8  3B C0 00 00 */	li r30, 0
/* 8016A98C 001678CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016A990 001678D0  3B A0 00 00 */	li r29, 0
.L_8016A994:
/* 8016A994 001678D4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8016A998 001678D8  7F A4 EB 78 */	mr r4, r29
/* 8016A99C 001678DC  4B FF 4E B1 */	bl getColorTransportScale__Q24Game7PikiMgrFi
/* 8016A9A0 001678E0  80 1F 03 F8 */	lwz r0, 0x3f8(r31)
/* 8016A9A4 001678E4  3B BD 00 01 */	addi r29, r29, 1
/* 8016A9A8 001678E8  2C 1D 00 07 */	cmpwi r29, 7
/* 8016A9AC 001678EC  3B FF 00 04 */	addi r31, r31, 4
/* 8016A9B0 001678F0  7C 00 19 D6 */	mullw r0, r0, r3
/* 8016A9B4 001678F4  7F DE 02 14 */	add r30, r30, r0
/* 8016A9B8 001678F8  41 80 FF DC */	blt .L_8016A994
/* 8016A9BC 001678FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016A9C0 00167900  7F C3 F3 78 */	mr r3, r30
/* 8016A9C4 00167904  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016A9C8 00167908  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016A9CC 0016790C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016A9D0 00167910  7C 08 03 A6 */	mtlr r0
/* 8016A9D4 00167914  38 21 00 20 */	addi r1, r1, 0x20
/* 8016A9D8 00167918  4E 80 00 20 */	blr 
.endfn getTotalCarryPikmins__Q24Game6PelletFv

.fn getPikmins__Q24Game6PelletFi, global
/* 8016A9DC 0016791C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016A9E0 00167920  7C 08 02 A6 */	mflr r0
/* 8016A9E4 00167924  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016A9E8 00167928  38 00 00 00 */	li r0, 0
/* 8016A9EC 0016792C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016A9F0 00167930  7C 9F 23 79 */	or. r31, r4, r4
/* 8016A9F4 00167934  93 C1 00 08 */	stw r30, 8(r1)
/* 8016A9F8 00167938  7C 7E 1B 78 */	mr r30, r3
/* 8016A9FC 0016793C  41 80 00 10 */	blt .L_8016AA0C
/* 8016AA00 00167940  2C 1F 00 07 */	cmpwi r31, 7
/* 8016AA04 00167944  40 80 00 08 */	bge .L_8016AA0C
/* 8016AA08 00167948  38 00 00 01 */	li r0, 1
.L_8016AA0C:
/* 8016AA0C 0016794C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8016AA10 00167950  40 82 00 20 */	bne .L_8016AA30
/* 8016AA14 00167954  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016AA18 00167958  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016AA1C 0016795C  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016AA20 00167960  38 80 0F 3E */	li r4, 0xf3e
/* 8016AA24 00167964  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016AA28 00167968  4C C6 31 82 */	crclr 6
/* 8016AA2C 0016796C  4B EB FC 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016AA30:
/* 8016AA30 00167970  57 E0 10 3A */	slwi r0, r31, 2
/* 8016AA34 00167974  7C 7E 02 14 */	add r3, r30, r0
/* 8016AA38 00167978  80 63 03 F8 */	lwz r3, 0x3f8(r3)
/* 8016AA3C 0016797C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016AA40 00167980  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016AA44 00167984  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016AA48 00167988  7C 08 03 A6 */	mtlr r0
/* 8016AA4C 0016798C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016AA50 00167990  4E 80 00 20 */	blr 
.endfn getPikmins__Q24Game6PelletFi

.fn onSlotStickStart__Q24Game6PelletFPQ24Game8Creatures, global
/* 8016AA54 00167994  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016AA58 00167998  7C 08 02 A6 */	mflr r0
/* 8016AA5C 0016799C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016AA60 001679A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016AA64 001679A4  7C 9F 23 78 */	mr r31, r4
/* 8016AA68 001679A8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016AA6C 001679AC  7C 7E 1B 78 */	mr r30, r3
/* 8016AA70 001679B0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016AA74 001679B4  7C BD 2B 78 */	mr r29, r5
/* 8016AA78 001679B8  7F A5 07 34 */	extsh r5, r29
/* 8016AA7C 001679BC  2C 05 27 0F */	cmpwi r5, 0x270f
/* 8016AA80 001679C0  41 82 00 B4 */	beq .L_8016AB34
/* 8016AA84 001679C4  7F A0 07 35 */	extsh. r0, r29
/* 8016AA88 001679C8  38 60 00 00 */	li r3, 0
/* 8016AA8C 001679CC  41 80 00 14 */	blt .L_8016AAA0
/* 8016AA90 001679D0  A8 1E 03 F4 */	lha r0, 0x3f4(r30)
/* 8016AA94 001679D4  7C 05 00 00 */	cmpw r5, r0
/* 8016AA98 001679D8  40 80 00 08 */	bge .L_8016AAA0
/* 8016AA9C 001679DC  38 60 00 01 */	li r3, 1
.L_8016AAA0:
/* 8016AAA0 001679E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016AAA4 001679E4  40 82 00 20 */	bne .L_8016AAC4
/* 8016AAA8 001679E8  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016AAAC 001679EC  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016AAB0 001679F0  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016AAB4 001679F4  38 80 0F 4D */	li r4, 0xf4d
/* 8016AAB8 001679F8  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016AABC 001679FC  4C C6 31 82 */	crclr 6
/* 8016AAC0 00167A00  4B EB FB 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016AAC4:
/* 8016AAC4 00167A04  7F C3 F3 78 */	mr r3, r30
/* 8016AAC8 00167A08  7F A4 EB 78 */	mr r4, r29
/* 8016AACC 00167A0C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8016AAD0 00167A10  81 8C 01 68 */	lwz r12, 0x168(r12)
/* 8016AAD4 00167A14  7D 89 03 A6 */	mtctr r12
/* 8016AAD8 00167A18  4E 80 04 21 */	bctrl 
/* 8016AADC 00167A1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016AAE0 00167A20  40 82 00 20 */	bne .L_8016AB00
/* 8016AAE4 00167A24  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016AAE8 00167A28  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016AAEC 00167A2C  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016AAF0 00167A30  38 80 0F 4E */	li r4, 0xf4e
/* 8016AAF4 00167A34  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016AAF8 00167A38  4C C6 31 82 */	crclr 6
/* 8016AAFC 00167A3C  4B EB FB 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016AB00:
/* 8016AB00 00167A40  7F A6 07 34 */	extsh r6, r29
/* 8016AB04 00167A44  2C 06 00 80 */	cmpwi r6, 0x80
/* 8016AB08 00167A48  40 80 00 2C */	bge .L_8016AB34
/* 8016AB0C 00167A4C  7C C4 1E 70 */	srawi r4, r6, 3
/* 8016AB10 00167A50  38 60 00 01 */	li r3, 1
/* 8016AB14 00167A54  20 04 00 0F */	subfic r0, r4, 0xf
/* 8016AB18 00167A58  7C BE 02 14 */	add r5, r30, r0
/* 8016AB1C 00167A5C  54 80 18 38 */	slwi r0, r4, 3
/* 8016AB20 00167A60  88 85 03 E4 */	lbz r4, 0x3e4(r5)
/* 8016AB24 00167A64  7C 00 30 50 */	subf r0, r0, r6
/* 8016AB28 00167A68  7C 60 00 30 */	slw r0, r3, r0
/* 8016AB2C 00167A6C  7C 80 03 78 */	or r0, r4, r0
/* 8016AB30 00167A70  98 05 03 E4 */	stb r0, 0x3e4(r5)
.L_8016AB34:
/* 8016AB34 00167A74  7F E3 FB 78 */	mr r3, r31
/* 8016AB38 00167A78  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016AB3C 00167A7C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016AB40 00167A80  7D 89 03 A6 */	mtctr r12
/* 8016AB44 00167A84  4E 80 04 21 */	bctrl 
/* 8016AB48 00167A88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016AB4C 00167A8C  41 82 00 70 */	beq .L_8016ABBC
/* 8016AB50 00167A90  8B BF 02 B8 */	lbz r29, 0x2b8(r31)
/* 8016AB54 00167A94  38 00 00 00 */	li r0, 0
/* 8016AB58 00167A98  2C 1D 00 00 */	cmpwi r29, 0
/* 8016AB5C 00167A9C  41 80 00 10 */	blt .L_8016AB6C
/* 8016AB60 00167AA0  2C 1D 00 07 */	cmpwi r29, 7
/* 8016AB64 00167AA4  40 80 00 08 */	bge .L_8016AB6C
/* 8016AB68 00167AA8  38 00 00 01 */	li r0, 1
.L_8016AB6C:
/* 8016AB6C 00167AAC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8016AB70 00167AB0  40 82 00 20 */	bne .L_8016AB90
/* 8016AB74 00167AB4  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016AB78 00167AB8  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016AB7C 00167ABC  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016AB80 00167AC0  38 80 0F 55 */	li r4, 0xf55
/* 8016AB84 00167AC4  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016AB88 00167AC8  4C C6 31 82 */	crclr 6
/* 8016AB8C 00167ACC  4B EB FA B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016AB90:
/* 8016AB90 00167AD0  57 A0 10 3A */	slwi r0, r29, 2
/* 8016AB94 00167AD4  7F E3 FB 78 */	mr r3, r31
/* 8016AB98 00167AD8  7C BE 02 14 */	add r5, r30, r0
/* 8016AB9C 00167ADC  80 85 03 F8 */	lwz r4, 0x3f8(r5)
/* 8016ABA0 00167AE0  38 04 00 01 */	addi r0, r4, 1
/* 8016ABA4 00167AE4  90 05 03 F8 */	stw r0, 0x3f8(r5)
/* 8016ABA8 00167AE8  4B FD EA FD */	bl getPelletCarryPower__Q24Game4PikiFv
/* 8016ABAC 00167AEC  C0 1E 04 18 */	lfs f0, 0x418(r30)
/* 8016ABB0 00167AF0  EC 00 08 2A */	fadds f0, f0, f1
/* 8016ABB4 00167AF4  D0 1E 04 18 */	stfs f0, 0x418(r30)
/* 8016ABB8 00167AF8  48 00 00 10 */	b .L_8016ABC8
.L_8016ABBC:
/* 8016ABBC 00167AFC  80 7E 04 14 */	lwz r3, 0x414(r30)
/* 8016ABC0 00167B00  38 03 00 01 */	addi r0, r3, 1
/* 8016ABC4 00167B04  90 1E 04 14 */	stw r0, 0x414(r30)
.L_8016ABC8:
/* 8016ABC8 00167B08  80 1E 03 DC */	lwz r0, 0x3dc(r30)
/* 8016ABCC 00167B0C  2C 00 00 00 */	cmpwi r0, 0
/* 8016ABD0 00167B10  40 81 00 08 */	ble .L_8016ABD8
/* 8016ABD4 00167B14  48 00 00 0C */	b .L_8016ABE0
.L_8016ABD8:
/* 8016ABD8 00167B18  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8016ABDC 00167B1C  80 03 01 30 */	lwz r0, 0x130(r3)
.L_8016ABE0:
/* 8016ABE0 00167B20  2C 00 00 01 */	cmpwi r0, 1
/* 8016ABE4 00167B24  41 82 00 28 */	beq .L_8016AC0C
/* 8016ABE8 00167B28  38 00 00 05 */	li r0, 5
/* 8016ABEC 00167B2C  28 1E 00 00 */	cmplwi r30, 0
/* 8016ABF0 00167B30  90 1E 03 D4 */	stw r0, 0x3d4(r30)
/* 8016ABF4 00167B34  7F C4 F3 78 */	mr r4, r30
/* 8016ABF8 00167B38  41 82 00 08 */	beq .L_8016AC00
/* 8016ABFC 00167B3C  38 9E 03 18 */	addi r4, r30, 0x318
.L_8016AC00:
/* 8016AC00 00167B40  80 6D 92 18 */	lwz r3, carryInfoMgr@sda21(r13)
/* 8016AC04 00167B44  4B FB 15 D5 */	bl appear__12CarryInfoMgrFP14CarryInfoOwner
/* 8016AC08 00167B48  90 7E 03 98 */	stw r3, 0x398(r30)
.L_8016AC0C:
/* 8016AC0C 00167B4C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016AC10 00167B50  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016AC14 00167B54  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016AC18 00167B58  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016AC1C 00167B5C  7C 08 03 A6 */	mtlr r0
/* 8016AC20 00167B60  38 21 00 20 */	addi r1, r1, 0x20
/* 8016AC24 00167B64  4E 80 00 20 */	blr 
.endfn onSlotStickStart__Q24Game6PelletFPQ24Game8Creatures

.fn onSlotStickEnd__Q24Game6PelletFPQ24Game8Creatures, global
/* 8016AC28 00167B68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016AC2C 00167B6C  7C 08 02 A6 */	mflr r0
/* 8016AC30 00167B70  3C C0 80 48 */	lis r6, lbl_8047E318@ha
/* 8016AC34 00167B74  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016AC38 00167B78  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016AC3C 00167B7C  3B E6 E3 18 */	addi r31, r6, lbl_8047E318@l
/* 8016AC40 00167B80  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016AC44 00167B84  7C 9E 23 78 */	mr r30, r4
/* 8016AC48 00167B88  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016AC4C 00167B8C  7C 7D 1B 78 */	mr r29, r3
/* 8016AC50 00167B90  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016AC54 00167B94  7C BC 2B 78 */	mr r28, r5
/* 8016AC58 00167B98  7F 85 07 34 */	extsh r5, r28
/* 8016AC5C 00167B9C  2C 05 27 0F */	cmpwi r5, 0x270f
/* 8016AC60 00167BA0  41 82 00 A4 */	beq .L_8016AD04
/* 8016AC64 00167BA4  7F 80 07 35 */	extsh. r0, r28
/* 8016AC68 00167BA8  38 60 00 00 */	li r3, 0
/* 8016AC6C 00167BAC  41 80 00 14 */	blt .L_8016AC80
/* 8016AC70 00167BB0  A8 1D 03 F4 */	lha r0, 0x3f4(r29)
/* 8016AC74 00167BB4  7C 05 00 00 */	cmpw r5, r0
/* 8016AC78 00167BB8  40 80 00 08 */	bge .L_8016AC80
/* 8016AC7C 00167BBC  38 60 00 01 */	li r3, 1
.L_8016AC80:
/* 8016AC80 00167BC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016AC84 00167BC4  40 82 00 18 */	bne .L_8016AC9C
/* 8016AC88 00167BC8  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8016AC8C 00167BCC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 8016AC90 00167BD0  38 80 0F 70 */	li r4, 0xf70
/* 8016AC94 00167BD4  4C C6 31 82 */	crclr 6
/* 8016AC98 00167BD8  4B EB F9 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016AC9C:
/* 8016AC9C 00167BDC  7F A3 EB 78 */	mr r3, r29
/* 8016ACA0 00167BE0  7F 84 E3 78 */	mr r4, r28
/* 8016ACA4 00167BE4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8016ACA8 00167BE8  81 8C 01 68 */	lwz r12, 0x168(r12)
/* 8016ACAC 00167BEC  7D 89 03 A6 */	mtctr r12
/* 8016ACB0 00167BF0  4E 80 04 21 */	bctrl 
/* 8016ACB4 00167BF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016ACB8 00167BF8  41 82 00 18 */	beq .L_8016ACD0
/* 8016ACBC 00167BFC  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8016ACC0 00167C00  38 BF 00 D0 */	addi r5, r31, 0xd0
/* 8016ACC4 00167C04  38 80 0F 74 */	li r4, 0xf74
/* 8016ACC8 00167C08  4C C6 31 82 */	crclr 6
/* 8016ACCC 00167C0C  4B EB F9 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016ACD0:
/* 8016ACD0 00167C10  7F 86 07 34 */	extsh r6, r28
/* 8016ACD4 00167C14  2C 06 00 80 */	cmpwi r6, 0x80
/* 8016ACD8 00167C18  40 80 00 2C */	bge .L_8016AD04
/* 8016ACDC 00167C1C  7C C4 1E 70 */	srawi r4, r6, 3
/* 8016ACE0 00167C20  38 60 00 01 */	li r3, 1
/* 8016ACE4 00167C24  20 04 00 0F */	subfic r0, r4, 0xf
/* 8016ACE8 00167C28  7C BD 02 14 */	add r5, r29, r0
/* 8016ACEC 00167C2C  54 80 18 38 */	slwi r0, r4, 3
/* 8016ACF0 00167C30  88 85 03 E4 */	lbz r4, 0x3e4(r5)
/* 8016ACF4 00167C34  7C 00 30 50 */	subf r0, r0, r6
/* 8016ACF8 00167C38  7C 60 00 30 */	slw r0, r3, r0
/* 8016ACFC 00167C3C  7C 80 00 78 */	andc r0, r4, r0
/* 8016AD00 00167C40  98 05 03 E4 */	stb r0, 0x3e4(r5)
.L_8016AD04:
/* 8016AD04 00167C44  7F C3 F3 78 */	mr r3, r30
/* 8016AD08 00167C48  81 9E 00 00 */	lwz r12, 0(r30)
/* 8016AD0C 00167C4C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016AD10 00167C50  7D 89 03 A6 */	mtctr r12
/* 8016AD14 00167C54  4E 80 04 21 */	bctrl 
/* 8016AD18 00167C58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016AD1C 00167C5C  41 82 00 68 */	beq .L_8016AD84
/* 8016AD20 00167C60  8B 9E 02 B8 */	lbz r28, 0x2b8(r30)
/* 8016AD24 00167C64  38 00 00 00 */	li r0, 0
/* 8016AD28 00167C68  2C 1C 00 00 */	cmpwi r28, 0
/* 8016AD2C 00167C6C  41 80 00 10 */	blt .L_8016AD3C
/* 8016AD30 00167C70  2C 1C 00 07 */	cmpwi r28, 7
/* 8016AD34 00167C74  40 80 00 08 */	bge .L_8016AD3C
/* 8016AD38 00167C78  38 00 00 01 */	li r0, 1
.L_8016AD3C:
/* 8016AD3C 00167C7C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8016AD40 00167C80  40 82 00 18 */	bne .L_8016AD58
/* 8016AD44 00167C84  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8016AD48 00167C88  38 BF 00 3C */	addi r5, r31, 0x3c
/* 8016AD4C 00167C8C  38 80 0F 7C */	li r4, 0xf7c
/* 8016AD50 00167C90  4C C6 31 82 */	crclr 6
/* 8016AD54 00167C94  4B EB F8 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016AD58:
/* 8016AD58 00167C98  57 80 10 3A */	slwi r0, r28, 2
/* 8016AD5C 00167C9C  7F C3 F3 78 */	mr r3, r30
/* 8016AD60 00167CA0  7C BD 02 14 */	add r5, r29, r0
/* 8016AD64 00167CA4  80 85 03 F8 */	lwz r4, 0x3f8(r5)
/* 8016AD68 00167CA8  38 04 FF FF */	addi r0, r4, -1
/* 8016AD6C 00167CAC  90 05 03 F8 */	stw r0, 0x3f8(r5)
/* 8016AD70 00167CB0  4B FD E9 35 */	bl getPelletCarryPower__Q24Game4PikiFv
/* 8016AD74 00167CB4  C0 1D 04 18 */	lfs f0, 0x418(r29)
/* 8016AD78 00167CB8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8016AD7C 00167CBC  D0 1D 04 18 */	stfs f0, 0x418(r29)
/* 8016AD80 00167CC0  48 00 00 10 */	b .L_8016AD90
.L_8016AD84:
/* 8016AD84 00167CC4  80 7D 04 14 */	lwz r3, 0x414(r29)
/* 8016AD88 00167CC8  38 03 FF FF */	addi r0, r3, -1
/* 8016AD8C 00167CCC  90 1D 04 14 */	stw r0, 0x414(r29)
.L_8016AD90:
/* 8016AD90 00167CD0  80 9D 03 F8 */	lwz r4, 0x3f8(r29)
/* 8016AD94 00167CD4  80 7D 03 FC */	lwz r3, 0x3fc(r29)
/* 8016AD98 00167CD8  80 1D 04 00 */	lwz r0, 0x400(r29)
/* 8016AD9C 00167CDC  7C 84 1A 14 */	add r4, r4, r3
/* 8016ADA0 00167CE0  80 7D 04 04 */	lwz r3, 0x404(r29)
/* 8016ADA4 00167CE4  7C 84 02 14 */	add r4, r4, r0
/* 8016ADA8 00167CE8  80 1D 04 08 */	lwz r0, 0x408(r29)
/* 8016ADAC 00167CEC  7C 84 1A 14 */	add r4, r4, r3
/* 8016ADB0 00167CF0  80 7D 04 0C */	lwz r3, 0x40c(r29)
/* 8016ADB4 00167CF4  7C 84 02 14 */	add r4, r4, r0
/* 8016ADB8 00167CF8  80 1D 04 10 */	lwz r0, 0x410(r29)
/* 8016ADBC 00167CFC  7C 84 1A 14 */	add r4, r4, r3
/* 8016ADC0 00167D00  7C 84 02 15 */	add. r4, r4, r0
/* 8016ADC4 00167D04  40 82 00 2C */	bne .L_8016ADF0
/* 8016ADC8 00167D08  80 7D 03 98 */	lwz r3, 0x398(r29)
/* 8016ADCC 00167D0C  28 03 00 00 */	cmplwi r3, 0
/* 8016ADD0 00167D10  41 82 00 14 */	beq .L_8016ADE4
/* 8016ADD4 00167D14  38 63 00 48 */	addi r3, r3, 0x48
/* 8016ADD8 00167D18  4B FB 01 F9 */	bl disappear__9CarryInfoFv
/* 8016ADDC 00167D1C  38 00 00 00 */	li r0, 0
/* 8016ADE0 00167D20  90 1D 03 98 */	stw r0, 0x398(r29)
.L_8016ADE4:
/* 8016ADE4 00167D24  80 7D 03 34 */	lwz r3, 0x334(r29)
/* 8016ADE8 00167D28  38 80 00 00 */	li r4, 0
/* 8016ADEC 00167D2C  48 0C A2 1D */	bl giveup__Q24Game11PelletCarryFUs
.L_8016ADF0:
/* 8016ADF0 00167D30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016ADF4 00167D34  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016ADF8 00167D38  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016ADFC 00167D3C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016AE00 00167D40  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8016AE04 00167D44  7C 08 03 A6 */	mtlr r0
/* 8016AE08 00167D48  38 21 00 20 */	addi r1, r1, 0x20
/* 8016AE0C 00167D4C  4E 80 00 20 */	blr 
.endfn onSlotStickEnd__Q24Game6PelletFPQ24Game8Creatures

.fn "calcStickSlotGlobal__Q24Game6PelletFsR10Vector3<f>", global
/* 8016AE10 00167D50  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8016AE14 00167D54  7C 08 02 A6 */	mflr r0
/* 8016AE18 00167D58  90 01 00 64 */	stw r0, 0x64(r1)
/* 8016AE1C 00167D5C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8016AE20 00167D60  7C BF 2B 78 */	mr r31, r5
/* 8016AE24 00167D64  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8016AE28 00167D68  7C 7E 1B 78 */	mr r30, r3
/* 8016AE2C 00167D6C  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8016AE30 00167D70  7C 9D 23 78 */	mr r29, r4
/* 8016AE34 00167D74  7F A4 07 34 */	extsh r4, r29
/* 8016AE38 00167D78  2C 04 27 0F */	cmpwi r4, 0x270f
/* 8016AE3C 00167D7C  40 82 00 18 */	bne .L_8016AE54
/* 8016AE40 00167D80  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016AE44 00167D84  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8016AE48 00167D88  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8016AE4C 00167D8C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016AE50 00167D90  48 00 01 98 */	b .L_8016AFE8
.L_8016AE54:
/* 8016AE54 00167D94  7F A0 07 35 */	extsh. r0, r29
/* 8016AE58 00167D98  38 60 00 00 */	li r3, 0
/* 8016AE5C 00167D9C  41 80 00 14 */	blt .L_8016AE70
/* 8016AE60 00167DA0  A8 1E 03 F4 */	lha r0, 0x3f4(r30)
/* 8016AE64 00167DA4  7C 04 00 00 */	cmpw r4, r0
/* 8016AE68 00167DA8  40 80 00 08 */	bge .L_8016AE70
/* 8016AE6C 00167DAC  38 60 00 01 */	li r3, 1
.L_8016AE70:
/* 8016AE70 00167DB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016AE74 00167DB4  40 82 00 20 */	bne .L_8016AE94
/* 8016AE78 00167DB8  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016AE7C 00167DBC  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016AE80 00167DC0  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016AE84 00167DC4  38 80 0F B0 */	li r4, 0xfb0
/* 8016AE88 00167DC8  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016AE8C 00167DCC  4C C6 31 82 */	crclr 6
/* 8016AE90 00167DD0  4B EB F7 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016AE94:
/* 8016AE94 00167DD4  A8 BE 03 F4 */	lha r5, 0x3f4(r30)
/* 8016AE98 00167DD8  3C 80 43 30 */	lis r4, 0x4330
/* 8016AE9C 00167DDC  7F A0 07 34 */	extsh r0, r29
/* 8016AEA0 00167DE0  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 8016AEA4 00167DE4  6C A5 80 00 */	xoris r5, r5, 0x8000
/* 8016AEA8 00167DE8  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016AEAC 00167DEC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8016AEB0 00167DF0  C8 62 A5 D0 */	lfd f3, lbl_80518930@sda21(r2)
/* 8016AEB4 00167DF4  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8016AEB8 00167DF8  C0 82 A6 28 */	lfs f4, lbl_80518988@sda21(r2)
/* 8016AEBC 00167DFC  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8016AEC0 00167E00  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8016AEC4 00167E04  EC 40 18 28 */	fsubs f2, f0, f3
/* 8016AEC8 00167E08  C0 3E 03 E0 */	lfs f1, 0x3e0(r30)
/* 8016AECC 00167E0C  90 81 00 28 */	stw r4, 0x28(r1)
/* 8016AED0 00167E10  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016AED4 00167E14  EC 84 10 24 */	fdivs f4, f4, f2
/* 8016AED8 00167E18  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 8016AEDC 00167E1C  C0 A3 00 B0 */	lfs f5, 0xb0(r3)
/* 8016AEE0 00167E20  EC 42 18 28 */	fsubs f2, f2, f3
/* 8016AEE4 00167E24  EC 84 08 BA */	fmadds f4, f4, f2, f1
/* 8016AEE8 00167E28  FC 20 20 90 */	fmr f1, f4
/* 8016AEEC 00167E2C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8016AEF0 00167E30  40 80 00 08 */	bge .L_8016AEF8
/* 8016AEF4 00167E34  FC 20 20 50 */	fneg f1, f4
.L_8016AEF8:
/* 8016AEF8 00167E38  C0 42 A6 2C */	lfs f2, lbl_8051898C@sda21(r2)
/* 8016AEFC 00167E3C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8016AF00 00167E40  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016AF04 00167E44  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8016AF08 00167E48  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8016AF0C 00167E4C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8016AF10 00167E50  FC 00 08 1E */	fctiwz f0, f1
/* 8016AF14 00167E54  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8016AF18 00167E58  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016AF1C 00167E5C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8016AF20 00167E60  7C 64 02 14 */	add r3, r4, r0
/* 8016AF24 00167E64  C0 03 00 04 */	lfs f0, 4(r3)
/* 8016AF28 00167E68  EC 65 00 32 */	fmuls f3, f5, f0
/* 8016AF2C 00167E6C  40 80 00 28 */	bge .L_8016AF54
/* 8016AF30 00167E70  C0 02 A6 30 */	lfs f0, lbl_80518990@sda21(r2)
/* 8016AF34 00167E74  EC 04 00 32 */	fmuls f0, f4, f0
/* 8016AF38 00167E78  FC 00 00 1E */	fctiwz f0, f0
/* 8016AF3C 00167E7C  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8016AF40 00167E80  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8016AF44 00167E84  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8016AF48 00167E88  7C 04 04 2E */	lfsx f0, r4, r0
/* 8016AF4C 00167E8C  FC 00 00 50 */	fneg f0, f0
/* 8016AF50 00167E90  48 00 00 1C */	b .L_8016AF6C
.L_8016AF54:
/* 8016AF54 00167E94  EC 04 00 B2 */	fmuls f0, f4, f2
/* 8016AF58 00167E98  FC 00 00 1E */	fctiwz f0, f0
/* 8016AF5C 00167E9C  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8016AF60 00167EA0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016AF64 00167EA4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8016AF68 00167EA8  7C 04 04 2E */	lfsx f0, r4, r0
.L_8016AF6C:
/* 8016AF6C 00167EAC  EC 25 00 32 */	fmuls f1, f5, f0
/* 8016AF70 00167EB0  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016AF74 00167EB4  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8016AF78 00167EB8  7F C3 F3 78 */	mr r3, r30
/* 8016AF7C 00167EBC  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8016AF80 00167EC0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8016AF84 00167EC4  48 00 00 A9 */	bl getFace__Q24Game6PelletFv
/* 8016AF88 00167EC8  80 9E 03 5C */	lwz r4, 0x35c(r30)
/* 8016AF8C 00167ECC  2C 03 00 00 */	cmpwi r3, 0
/* 8016AF90 00167ED0  C0 42 A5 B8 */	lfs f2, lbl_80518918@sda21(r2)
/* 8016AF94 00167ED4  C0 24 00 C0 */	lfs f1, 0xc0(r4)
/* 8016AF98 00167ED8  C0 02 A5 B0 */	lfs f0, lbl_80518910@sda21(r2)
/* 8016AF9C 00167EDC  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8016AFA0 00167EE0  40 82 00 2C */	bne .L_8016AFCC
/* 8016AFA4 00167EE4  FC 00 08 50 */	fneg f0, f1
/* 8016AFA8 00167EE8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8016AFAC 00167EEC  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 8016AFB0 00167EF0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016AFB4 00167EF4  41 82 00 34 */	beq .L_8016AFE8
/* 8016AFB8 00167EF8  FC 20 00 18 */	frsp f1, f0
/* 8016AFBC 00167EFC  C0 02 A5 D8 */	lfs f0, lbl_80518938@sda21(r2)
/* 8016AFC0 00167F00  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016AFC4 00167F04  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8016AFC8 00167F08  48 00 00 20 */	b .L_8016AFE8
.L_8016AFCC:
/* 8016AFCC 00167F0C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8016AFD0 00167F10  88 1E 03 D0 */	lbz r0, 0x3d0(r30)
/* 8016AFD4 00167F14  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016AFD8 00167F18  41 82 00 10 */	beq .L_8016AFE8
/* 8016AFDC 00167F1C  C0 02 A5 D8 */	lfs f0, lbl_80518938@sda21(r2)
/* 8016AFE0 00167F20  EC 01 00 2A */	fadds f0, f1, f0
/* 8016AFE4 00167F24  D0 01 00 18 */	stfs f0, 0x18(r1)
.L_8016AFE8:
/* 8016AFE8 00167F28  38 7E 01 38 */	addi r3, r30, 0x138
/* 8016AFEC 00167F2C  38 81 00 14 */	addi r4, r1, 0x14
/* 8016AFF0 00167F30  38 A1 00 08 */	addi r5, r1, 8
/* 8016AFF4 00167F34  4B F7 FB E5 */	bl PSMTXMultVec
/* 8016AFF8 00167F38  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016AFFC 00167F3C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8016B000 00167F40  C0 01 00 08 */	lfs f0, 8(r1)
/* 8016B004 00167F44  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8016B008 00167F48  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8016B00C 00167F4C  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8016B010 00167F50  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8016B014 00167F54  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8016B018 00167F58  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8016B01C 00167F5C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8016B020 00167F60  7C 08 03 A6 */	mtlr r0
/* 8016B024 00167F64  38 21 00 60 */	addi r1, r1, 0x60
/* 8016B028 00167F68  4E 80 00 20 */	blr 
.endfn "calcStickSlotGlobal__Q24Game6PelletFsR10Vector3<f>"

.fn getFace__Q24Game6PelletFv, global
/* 8016B02C 00167F6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016B030 00167F70  7C 08 02 A6 */	mflr r0
/* 8016B034 00167F74  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016B038 00167F78  88 03 03 64 */	lbz r0, 0x364(r3)
/* 8016B03C 00167F7C  28 00 00 02 */	cmplwi r0, 2
/* 8016B040 00167F80  40 82 00 0C */	bne .L_8016B04C
/* 8016B044 00167F84  38 60 00 00 */	li r3, 0
/* 8016B048 00167F88  48 00 00 3C */	b .L_8016B084
.L_8016B04C:
/* 8016B04C 00167F8C  38 81 00 08 */	addi r4, r1, 8
/* 8016B050 00167F90  4B FD 02 F1 */	bl "getYVector__Q24Game8CreatureFR10Vector3<f>"
/* 8016B054 00167F94  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016B058 00167F98  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016B05C 00167F9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016B060 00167FA0  40 81 00 0C */	ble .L_8016B06C
/* 8016B064 00167FA4  38 60 00 00 */	li r3, 0
/* 8016B068 00167FA8  48 00 00 1C */	b .L_8016B084
.L_8016B06C:
/* 8016B06C 00167FAC  C0 02 A6 64 */	lfs f0, lbl_805189C4@sda21(r2)
/* 8016B070 00167FB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016B074 00167FB4  40 80 00 0C */	bge .L_8016B080
/* 8016B078 00167FB8  38 60 00 01 */	li r3, 1
/* 8016B07C 00167FBC  48 00 00 08 */	b .L_8016B084
.L_8016B080:
/* 8016B080 00167FC0  38 60 00 02 */	li r3, 2
.L_8016B084:
/* 8016B084 00167FC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016B088 00167FC8  7C 08 03 A6 */	mtlr r0
/* 8016B08C 00167FCC  38 21 00 20 */	addi r1, r1, 0x20
/* 8016B090 00167FD0  4E 80 00 20 */	blr 
.endfn getFace__Q24Game6PelletFv

.fn startPick__Q24Game6PelletFv, global
/* 8016B094 00167FD4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016B098 00167FD8  7C 08 02 A6 */	mflr r0
/* 8016B09C 00167FDC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016B0A0 00167FE0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016B0A4 00167FE4  7C 7F 1B 78 */	mr r31, r3
/* 8016B0A8 00167FE8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016B0AC 00167FEC  88 03 03 D0 */	lbz r0, 0x3d0(r3)
/* 8016B0B0 00167FF0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016B0B4 00167FF4  40 82 02 74 */	bne .L_8016B328
/* 8016B0B8 00167FF8  80 9F 03 5C */	lwz r4, 0x35c(r31)
/* 8016B0BC 00167FFC  A0 04 02 44 */	lhz r0, 0x244(r4)
/* 8016B0C0 00168000  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016B0C4 00168004  41 82 00 14 */	beq .L_8016B0D8
/* 8016B0C8 00168008  81 83 00 00 */	lwz r12, 0(r3)
/* 8016B0CC 0016800C  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 8016B0D0 00168010  7D 89 03 A6 */	mtctr r12
/* 8016B0D4 00168014  4E 80 04 21 */	bctrl 
.L_8016B0D8:
/* 8016B0D8 00168018  80 1F 04 2C */	lwz r0, 0x42c(r31)
/* 8016B0DC 0016801C  28 00 00 00 */	cmplwi r0, 0
/* 8016B0E0 00168020  41 82 00 44 */	beq .L_8016B124
/* 8016B0E4 00168024  88 1F 04 34 */	lbz r0, 0x434(r31)
/* 8016B0E8 00168028  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016B0EC 0016802C  40 82 00 54 */	bne .L_8016B140
/* 8016B0F0 00168030  28 1F 00 00 */	cmplwi r31, 0
/* 8016B0F4 00168034  7F E5 FB 78 */	mr r5, r31
/* 8016B0F8 00168038  41 82 00 08 */	beq .L_8016B100
/* 8016B0FC 0016803C  38 BF 03 14 */	addi r5, r31, 0x314
.L_8016B100:
/* 8016B100 00168040  38 7F 04 1C */	addi r3, r31, 0x41c
/* 8016B104 00168044  38 80 00 00 */	li r4, 0
/* 8016B108 00168048  48 2B DB 81 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8016B10C 0016804C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8016B110 00168050  C0 22 A5 C8 */	lfs f1, lbl_80518928@sda21(r2)
/* 8016B114 00168054  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8016B118 00168058  EC 01 00 32 */	fmuls f0, f1, f0
/* 8016B11C 0016805C  D0 1F 04 38 */	stfs f0, 0x438(r31)
/* 8016B120 00168060  48 00 00 20 */	b .L_8016B140
.L_8016B124:
/* 8016B124 00168064  80 7F 03 58 */	lwz r3, 0x358(r31)
/* 8016B128 00168068  28 03 00 00 */	cmplwi r3, 0
/* 8016B12C 0016806C  41 82 00 14 */	beq .L_8016B140
/* 8016B130 00168070  81 83 00 00 */	lwz r12, 0(r3)
/* 8016B134 00168074  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016B138 00168078  7D 89 03 A6 */	mtctr r12
/* 8016B13C 0016807C  4E 80 04 21 */	bctrl 
.L_8016B140:
/* 8016B140 00168080  88 1F 03 64 */	lbz r0, 0x364(r31)
/* 8016B144 00168084  28 00 00 02 */	cmplwi r0, 2
/* 8016B148 00168088  41 82 00 10 */	beq .L_8016B158
/* 8016B14C 0016808C  7F E3 FB 78 */	mr r3, r31
/* 8016B150 00168090  38 81 00 20 */	addi r4, r1, 0x20
/* 8016B154 00168094  4B FD 01 ED */	bl "getYVector__Q24Game8CreatureFR10Vector3<f>"
.L_8016B158:
/* 8016B158 00168098  7F E3 FB 78 */	mr r3, r31
/* 8016B15C 0016809C  38 81 00 2C */	addi r4, r1, 0x2c
/* 8016B160 001680A0  4B FD 01 E1 */	bl "getYVector__Q24Game8CreatureFR10Vector3<f>"
/* 8016B164 001680A4  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 8016B168 001680A8  C0 42 A5 D8 */	lfs f2, lbl_80518938@sda21(r2)
/* 8016B16C 001680AC  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8016B170 001680B0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8016B174 001680B4  EC 63 00 B2 */	fmuls f3, f3, f2
/* 8016B178 001680B8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8016B17C 001680BC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8016B180 001680C0  D0 61 00 34 */	stfs f3, 0x34(r1)
/* 8016B184 001680C4  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8016B188 001680C8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8016B18C 001680CC  88 1F 03 64 */	lbz r0, 0x364(r31)
/* 8016B190 001680D0  28 00 00 02 */	cmplwi r0, 2
/* 8016B194 001680D4  40 82 00 0C */	bne .L_8016B1A0
/* 8016B198 001680D8  38 00 00 00 */	li r0, 0
/* 8016B19C 001680DC  48 00 00 40 */	b .L_8016B1DC
.L_8016B1A0:
/* 8016B1A0 001680E0  7F E3 FB 78 */	mr r3, r31
/* 8016B1A4 001680E4  38 81 00 14 */	addi r4, r1, 0x14
/* 8016B1A8 001680E8  4B FD 01 99 */	bl "getYVector__Q24Game8CreatureFR10Vector3<f>"
/* 8016B1AC 001680EC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8016B1B0 001680F0  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016B1B4 001680F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016B1B8 001680F8  40 81 00 0C */	ble .L_8016B1C4
/* 8016B1BC 001680FC  38 00 00 00 */	li r0, 0
/* 8016B1C0 00168100  48 00 00 1C */	b .L_8016B1DC
.L_8016B1C4:
/* 8016B1C4 00168104  C0 02 A6 64 */	lfs f0, lbl_805189C4@sda21(r2)
/* 8016B1C8 00168108  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016B1CC 0016810C  40 80 00 0C */	bge .L_8016B1D8
/* 8016B1D0 00168110  38 00 00 01 */	li r0, 1
/* 8016B1D4 00168114  48 00 00 08 */	b .L_8016B1DC
.L_8016B1D8:
/* 8016B1D8 00168118  38 00 00 02 */	li r0, 2
.L_8016B1DC:
/* 8016B1DC 0016811C  2C 00 00 00 */	cmpwi r0, 0
/* 8016B1E0 00168120  40 82 00 38 */	bne .L_8016B218
/* 8016B1E4 00168124  C0 3F 01 B0 */	lfs f1, 0x1b0(r31)
/* 8016B1E8 00168128  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8016B1EC 0016812C  EC 01 00 2A */	fadds f0, f1, f0
/* 8016B1F0 00168130  D0 1F 01 B0 */	stfs f0, 0x1b0(r31)
/* 8016B1F4 00168134  C0 3F 01 B4 */	lfs f1, 0x1b4(r31)
/* 8016B1F8 00168138  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8016B1FC 0016813C  EC 01 00 2A */	fadds f0, f1, f0
/* 8016B200 00168140  D0 1F 01 B4 */	stfs f0, 0x1b4(r31)
/* 8016B204 00168144  C0 3F 01 B8 */	lfs f1, 0x1b8(r31)
/* 8016B208 00168148  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8016B20C 0016814C  EC 01 00 2A */	fadds f0, f1, f0
/* 8016B210 00168150  D0 1F 01 B8 */	stfs f0, 0x1b8(r31)
/* 8016B214 00168154  48 00 00 34 */	b .L_8016B248
.L_8016B218:
/* 8016B218 00168158  C0 3F 01 B0 */	lfs f1, 0x1b0(r31)
/* 8016B21C 0016815C  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8016B220 00168160  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016B224 00168164  D0 1F 01 B0 */	stfs f0, 0x1b0(r31)
/* 8016B228 00168168  C0 3F 01 B4 */	lfs f1, 0x1b4(r31)
/* 8016B22C 0016816C  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8016B230 00168170  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016B234 00168174  D0 1F 01 B4 */	stfs f0, 0x1b4(r31)
/* 8016B238 00168178  C0 3F 01 B8 */	lfs f1, 0x1b8(r31)
/* 8016B23C 0016817C  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8016B240 00168180  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016B244 00168184  D0 1F 01 B8 */	stfs f0, 0x1b8(r31)
.L_8016B248:
/* 8016B248 00168188  83 DF 01 78 */	lwz r30, 0x178(r31)
/* 8016B24C 0016818C  48 00 00 84 */	b .L_8016B2D0
.L_8016B250:
/* 8016B250 00168190  88 1F 03 64 */	lbz r0, 0x364(r31)
/* 8016B254 00168194  28 00 00 02 */	cmplwi r0, 2
/* 8016B258 00168198  40 82 00 0C */	bne .L_8016B264
/* 8016B25C 0016819C  38 00 00 00 */	li r0, 0
/* 8016B260 001681A0  48 00 00 40 */	b .L_8016B2A0
.L_8016B264:
/* 8016B264 001681A4  7F E3 FB 78 */	mr r3, r31
/* 8016B268 001681A8  38 81 00 08 */	addi r4, r1, 8
/* 8016B26C 001681AC  4B FD 00 D5 */	bl "getYVector__Q24Game8CreatureFR10Vector3<f>"
/* 8016B270 001681B0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016B274 001681B4  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016B278 001681B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016B27C 001681BC  40 81 00 0C */	ble .L_8016B288
/* 8016B280 001681C0  38 00 00 00 */	li r0, 0
/* 8016B284 001681C4  48 00 00 1C */	b .L_8016B2A0
.L_8016B288:
/* 8016B288 001681C8  C0 02 A6 64 */	lfs f0, lbl_805189C4@sda21(r2)
/* 8016B28C 001681CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016B290 001681D0  40 80 00 0C */	bge .L_8016B29C
/* 8016B294 001681D4  38 00 00 01 */	li r0, 1
/* 8016B298 001681D8  48 00 00 08 */	b .L_8016B2A0
.L_8016B29C:
/* 8016B29C 001681DC  38 00 00 02 */	li r0, 2
.L_8016B2A0:
/* 8016B2A0 001681E0  2C 00 00 00 */	cmpwi r0, 0
/* 8016B2A4 001681E4  40 82 00 18 */	bne .L_8016B2BC
/* 8016B2A8 001681E8  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8016B2AC 001681EC  C0 02 A5 D8 */	lfs f0, lbl_80518938@sda21(r2)
/* 8016B2B0 001681F0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016B2B4 001681F4  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8016B2B8 001681F8  48 00 00 14 */	b .L_8016B2CC
.L_8016B2BC:
/* 8016B2BC 001681FC  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8016B2C0 00168200  C0 02 A5 D8 */	lfs f0, lbl_80518938@sda21(r2)
/* 8016B2C4 00168204  EC 01 00 2A */	fadds f0, f1, f0
/* 8016B2C8 00168208  D0 1E 00 04 */	stfs f0, 4(r30)
.L_8016B2CC:
/* 8016B2CC 0016820C  83 DE 00 1C */	lwz r30, 0x1c(r30)
.L_8016B2D0:
/* 8016B2D0 00168210  28 1E 00 00 */	cmplwi r30, 0
/* 8016B2D4 00168214  40 82 FF 7C */	bne .L_8016B250
/* 8016B2D8 00168218  88 1F 03 D0 */	lbz r0, 0x3d0(r31)
/* 8016B2DC 0016821C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016B2E0 00168220  41 82 00 1C */	beq .L_8016B2FC
/* 8016B2E4 00168224  7F E3 FB 78 */	mr r3, r31
/* 8016B2E8 00168228  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016B2EC 0016822C  81 8C 02 10 */	lwz r12, 0x210(r12)
/* 8016B2F0 00168230  7D 89 03 A6 */	mtctr r12
/* 8016B2F4 00168234  4E 80 04 21 */	bctrl 
/* 8016B2F8 00168238  48 00 00 24 */	b .L_8016B31C
.L_8016B2FC:
/* 8016B2FC 0016823C  7F E3 FB 78 */	mr r3, r31
/* 8016B300 00168240  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016B304 00168244  81 8C 02 0C */	lwz r12, 0x20c(r12)
/* 8016B308 00168248  7D 89 03 A6 */	mtctr r12
/* 8016B30C 0016824C  4E 80 04 21 */	bctrl 
/* 8016B310 00168250  88 1F 03 D0 */	lbz r0, 0x3d0(r31)
/* 8016B314 00168254  60 00 00 02 */	ori r0, r0, 2
/* 8016B318 00168258  98 1F 03 D0 */	stb r0, 0x3d0(r31)
.L_8016B31C:
/* 8016B31C 0016825C  88 1F 03 D0 */	lbz r0, 0x3d0(r31)
/* 8016B320 00168260  60 00 00 01 */	ori r0, r0, 1
/* 8016B324 00168264  98 1F 03 D0 */	stb r0, 0x3d0(r31)
.L_8016B328:
/* 8016B328 00168268  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016B32C 0016826C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016B330 00168270  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016B334 00168274  7C 08 03 A6 */	mtlr r0
/* 8016B338 00168278  38 21 00 40 */	addi r1, r1, 0x40
/* 8016B33C 0016827C  4E 80 00 20 */	blr 
.endfn startPick__Q24Game6PelletFv

.fn sound_otakaraEventRestart__Q24Game6PelletFv, weak
/* 8016B340 00168280  4E 80 00 20 */	blr 
.endfn sound_otakaraEventRestart__Q24Game6PelletFv

.fn endPick__Q24Game6PelletFb, global
/* 8016B344 00168284  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016B348 00168288  7C 08 02 A6 */	mflr r0
/* 8016B34C 0016828C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016B350 00168290  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016B354 00168294  7C 7F 1B 78 */	mr r31, r3
/* 8016B358 00168298  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016B35C 0016829C  7C 9E 23 78 */	mr r30, r4
/* 8016B360 001682A0  88 03 03 D0 */	lbz r0, 0x3d0(r3)
/* 8016B364 001682A4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016B368 001682A8  41 82 01 40 */	beq .L_8016B4A8
/* 8016B36C 001682AC  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 8016B370 001682B0  48 0C 9B B9 */	bl reset__Q24Game11PelletCarryFv
/* 8016B374 001682B4  38 00 00 05 */	li r0, 5
/* 8016B378 001682B8  7F E3 FB 78 */	mr r3, r31
/* 8016B37C 001682BC  90 1F 03 D4 */	stw r0, 0x3d4(r31)
/* 8016B380 001682C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016B384 001682C4  81 8C 02 14 */	lwz r12, 0x214(r12)
/* 8016B388 001682C8  7D 89 03 A6 */	mtctr r12
/* 8016B38C 001682CC  4E 80 04 21 */	bctrl 
/* 8016B390 001682D0  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8016B394 001682D4  40 82 00 60 */	bne .L_8016B3F4
/* 8016B398 001682D8  80 1F 04 2C */	lwz r0, 0x42c(r31)
/* 8016B39C 001682DC  28 00 00 00 */	cmplwi r0, 0
/* 8016B3A0 001682E0  41 82 00 14 */	beq .L_8016B3B4
/* 8016B3A4 001682E4  88 1F 04 34 */	lbz r0, 0x434(r31)
/* 8016B3A8 001682E8  60 00 00 02 */	ori r0, r0, 2
/* 8016B3AC 001682EC  98 1F 04 34 */	stb r0, 0x434(r31)
/* 8016B3B0 001682F0  48 00 00 20 */	b .L_8016B3D0
.L_8016B3B4:
/* 8016B3B4 001682F4  80 7F 03 58 */	lwz r3, 0x358(r31)
/* 8016B3B8 001682F8  28 03 00 00 */	cmplwi r3, 0
/* 8016B3BC 001682FC  41 82 00 14 */	beq .L_8016B3D0
/* 8016B3C0 00168300  81 83 00 00 */	lwz r12, 0(r3)
/* 8016B3C4 00168304  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016B3C8 00168308  7D 89 03 A6 */	mtctr r12
/* 8016B3CC 0016830C  4E 80 04 21 */	bctrl 
.L_8016B3D0:
/* 8016B3D0 00168310  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 8016B3D4 00168314  A0 03 02 44 */	lhz r0, 0x244(r3)
/* 8016B3D8 00168318  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016B3DC 0016831C  41 82 00 18 */	beq .L_8016B3F4
/* 8016B3E0 00168320  7F E3 FB 78 */	mr r3, r31
/* 8016B3E4 00168324  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016B3E8 00168328  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 8016B3EC 0016832C  7D 89 03 A6 */	mtctr r12
/* 8016B3F0 00168330  4E 80 04 21 */	bctrl 
.L_8016B3F4:
/* 8016B3F4 00168334  88 1F 03 D0 */	lbz r0, 0x3d0(r31)
/* 8016B3F8 00168338  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 8016B3FC 0016833C  98 1F 03 D0 */	stb r0, 0x3d0(r31)
/* 8016B400 00168340  88 1F 03 64 */	lbz r0, 0x364(r31)
/* 8016B404 00168344  28 00 00 02 */	cmplwi r0, 2
/* 8016B408 00168348  41 82 00 10 */	beq .L_8016B418
/* 8016B40C 0016834C  7F E3 FB 78 */	mr r3, r31
/* 8016B410 00168350  38 81 00 14 */	addi r4, r1, 0x14
/* 8016B414 00168354  4B FC FF 2D */	bl "getYVector__Q24Game8CreatureFR10Vector3<f>"
.L_8016B418:
/* 8016B418 00168358  83 DF 01 78 */	lwz r30, 0x178(r31)
/* 8016B41C 0016835C  48 00 00 84 */	b .L_8016B4A0
.L_8016B420:
/* 8016B420 00168360  88 1F 03 64 */	lbz r0, 0x364(r31)
/* 8016B424 00168364  28 00 00 02 */	cmplwi r0, 2
/* 8016B428 00168368  40 82 00 0C */	bne .L_8016B434
/* 8016B42C 0016836C  38 00 00 00 */	li r0, 0
/* 8016B430 00168370  48 00 00 40 */	b .L_8016B470
.L_8016B434:
/* 8016B434 00168374  7F E3 FB 78 */	mr r3, r31
/* 8016B438 00168378  38 81 00 08 */	addi r4, r1, 8
/* 8016B43C 0016837C  4B FC FF 05 */	bl "getYVector__Q24Game8CreatureFR10Vector3<f>"
/* 8016B440 00168380  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016B444 00168384  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016B448 00168388  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016B44C 0016838C  40 81 00 0C */	ble .L_8016B458
/* 8016B450 00168390  38 00 00 00 */	li r0, 0
/* 8016B454 00168394  48 00 00 1C */	b .L_8016B470
.L_8016B458:
/* 8016B458 00168398  C0 02 A6 64 */	lfs f0, lbl_805189C4@sda21(r2)
/* 8016B45C 0016839C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016B460 001683A0  40 80 00 0C */	bge .L_8016B46C
/* 8016B464 001683A4  38 00 00 01 */	li r0, 1
/* 8016B468 001683A8  48 00 00 08 */	b .L_8016B470
.L_8016B46C:
/* 8016B46C 001683AC  38 00 00 02 */	li r0, 2
.L_8016B470:
/* 8016B470 001683B0  2C 00 00 00 */	cmpwi r0, 0
/* 8016B474 001683B4  40 82 00 18 */	bne .L_8016B48C
/* 8016B478 001683B8  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8016B47C 001683BC  C0 02 A5 D8 */	lfs f0, lbl_80518938@sda21(r2)
/* 8016B480 001683C0  EC 01 00 2A */	fadds f0, f1, f0
/* 8016B484 001683C4  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8016B488 001683C8  48 00 00 14 */	b .L_8016B49C
.L_8016B48C:
/* 8016B48C 001683CC  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8016B490 001683D0  C0 02 A5 D8 */	lfs f0, lbl_80518938@sda21(r2)
/* 8016B494 001683D4  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016B498 001683D8  D0 1E 00 04 */	stfs f0, 4(r30)
.L_8016B49C:
/* 8016B49C 001683DC  83 DE 00 1C */	lwz r30, 0x1c(r30)
.L_8016B4A0:
/* 8016B4A0 001683E0  28 1E 00 00 */	cmplwi r30, 0
/* 8016B4A4 001683E4  40 82 FF 7C */	bne .L_8016B420
.L_8016B4A8:
/* 8016B4A8 001683E8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016B4AC 001683EC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016B4B0 001683F0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016B4B4 001683F4  7C 08 03 A6 */	mtlr r0
/* 8016B4B8 001683F8  38 21 00 30 */	addi r1, r1, 0x30
/* 8016B4BC 001683FC  4E 80 00 20 */	blr 
.endfn endPick__Q24Game6PelletFb

.fn sound_otakaraEventStop__Q24Game6PelletFv, weak
/* 8016B4C0 00168400  4E 80 00 20 */	blr 
.endfn sound_otakaraEventStop__Q24Game6PelletFv

.fn clearDiscoverDisable__Q24Game6PelletFv, global
/* 8016B4C4 00168404  38 00 00 00 */	li r0, 0
/* 8016B4C8 00168408  98 03 03 2D */	stb r0, 0x32d(r3)
/* 8016B4CC 0016840C  4E 80 00 20 */	blr 
.endfn clearDiscoverDisable__Q24Game6PelletFv

.fn startDiscoverDisable__Q24Game6PelletFUc, global
/* 8016B4D0 00168410  98 83 03 2D */	stb r4, 0x32d(r3)
/* 8016B4D4 00168414  4E 80 00 20 */	blr 
.endfn startDiscoverDisable__Q24Game6PelletFUc

.fn updateDiscoverDisable__Q24Game6PelletFv, global
/* 8016B4D8 00168418  88 83 03 2D */	lbz r4, 0x32d(r3)
/* 8016B4DC 0016841C  28 04 00 00 */	cmplwi r4, 0
/* 8016B4E0 00168420  4D 82 00 20 */	beqlr 
/* 8016B4E4 00168424  38 04 FF FF */	addi r0, r4, -1
/* 8016B4E8 00168428  98 03 03 2D */	stb r0, 0x32d(r3)
/* 8016B4EC 0016842C  4E 80 00 20 */	blr 
.endfn updateDiscoverDisable__Q24Game6PelletFv

.fn discoverDisabled__Q24Game6PelletFv, global
/* 8016B4F0 00168430  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8016B4F4 00168434  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8016B4F8 00168438  2C 00 00 00 */	cmpwi r0, 0
/* 8016B4FC 0016843C  40 82 00 18 */	bne .L_8016B514
/* 8016B500 00168440  88 63 03 2D */	lbz r3, 0x32d(r3)
/* 8016B504 00168444  7C 03 00 D0 */	neg r0, r3
/* 8016B508 00168448  7C 00 1B 78 */	or r0, r0, r3
/* 8016B50C 0016844C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8016B510 00168450  4E 80 00 20 */	blr 
.L_8016B514:
/* 8016B514 00168454  38 60 00 00 */	li r3, 0
/* 8016B518 00168458  4E 80 00 20 */	blr 
.endfn discoverDisabled__Q24Game6PelletFv

.fn doSave__Q24Game6PelletFR6Stream, global
/* 8016B51C 0016845C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016B520 00168460  7C 08 02 A6 */	mflr r0
/* 8016B524 00168464  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016B528 00168468  88 03 03 C4 */	lbz r0, 0x3c4(r3)
/* 8016B52C 0016846C  7C 83 23 78 */	mr r3, r4
/* 8016B530 00168470  7C 04 03 78 */	mr r4, r0
/* 8016B534 00168474  48 2A A1 3D */	bl writeByte__6StreamFUc
/* 8016B538 00168478  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016B53C 0016847C  7C 08 03 A6 */	mtlr r0
/* 8016B540 00168480  38 21 00 10 */	addi r1, r1, 0x10
/* 8016B544 00168484  4E 80 00 20 */	blr 
.endfn doSave__Q24Game6PelletFR6Stream

.fn doLoad__Q24Game6PelletFR6Stream, global
/* 8016B548 00168488  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8016B54C 0016848C  7C 08 02 A6 */	mflr r0
/* 8016B550 00168490  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8016B554 00168494  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8016B558 00168498  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8016B55C 0016849C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8016B560 001684A0  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8016B564 001684A4  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8016B568 001684A8  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8016B56C 001684AC  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8016B570 001684B0  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8016B574 001684B4  93 A1 00 64 */	stw r29, 0x64(r1)
/* 8016B578 001684B8  93 81 00 60 */	stw r28, 0x60(r1)
/* 8016B57C 001684BC  7C 7F 1B 78 */	mr r31, r3
/* 8016B580 001684C0  7C 83 23 78 */	mr r3, r4
/* 8016B584 001684C4  48 2A 8F 19 */	bl readByte__6StreamFv
/* 8016B588 001684C8  54 65 06 3E */	clrlwi r5, r3, 0x18
/* 8016B58C 001684CC  7F E4 FB 78 */	mr r4, r31
/* 8016B590 001684D0  7C 05 00 D0 */	neg r0, r5
/* 8016B594 001684D4  38 61 00 0C */	addi r3, r1, 0xc
/* 8016B598 001684D8  7C 00 2B 78 */	or r0, r0, r5
/* 8016B59C 001684DC  54 00 0F FE */	srwi r0, r0, 0x1f
/* 8016B5A0 001684E0  98 1F 03 C4 */	stb r0, 0x3c4(r31)
/* 8016B5A4 001684E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016B5A8 001684E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016B5AC 001684EC  7D 89 03 A6 */	mtctr r12
/* 8016B5B0 001684F0  4E 80 04 21 */	bctrl 
/* 8016B5B4 001684F4  C3 A1 00 0C */	lfs f29, 0xc(r1)
/* 8016B5B8 001684F8  38 00 00 00 */	li r0, 0
/* 8016B5BC 001684FC  C3 E1 00 10 */	lfs f31, 0x10(r1)
/* 8016B5C0 00168500  38 81 00 3C */	addi r4, r1, 0x3c
/* 8016B5C4 00168504  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 8016B5C8 00168508  C0 02 A6 34 */	lfs f0, lbl_80518994@sda21(r2)
/* 8016B5CC 0016850C  D3 A1 00 3C */	stfs f29, 0x3c(r1)
/* 8016B5D0 00168510  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8016B5D4 00168514  D3 E1 00 40 */	stfs f31, 0x40(r1)
/* 8016B5D8 00168518  D3 C1 00 44 */	stfs f30, 0x44(r1)
/* 8016B5DC 0016851C  90 01 00 48 */	stw r0, 0x48(r1)
/* 8016B5E0 00168520  98 01 00 4C */	stb r0, 0x4c(r1)
/* 8016B5E4 00168524  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8016B5E8 00168528  80 63 00 08 */	lwz r3, 8(r3)
/* 8016B5EC 0016852C  48 00 79 D9 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 8016B5F0 00168530  7C 7E 1B 78 */	mr r30, r3
/* 8016B5F4 00168534  3B A0 00 00 */	li r29, 0
/* 8016B5F8 00168538  3B 80 00 00 */	li r28, 0
.L_8016B5FC:
/* 8016B5FC 0016853C  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8016B600 00168540  7F 84 E3 78 */	mr r4, r28
/* 8016B604 00168544  48 01 04 99 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8016B608 00168548  28 03 00 00 */	cmplwi r3, 0
/* 8016B60C 0016854C  41 82 00 14 */	beq .L_8016B620
/* 8016B610 00168550  80 03 02 3C */	lwz r0, 0x23c(r3)
/* 8016B614 00168554  7C 1E 00 40 */	cmplw r30, r0
/* 8016B618 00168558  40 82 00 08 */	bne .L_8016B620
/* 8016B61C 0016855C  3B A0 00 01 */	li r29, 1
.L_8016B620:
/* 8016B620 00168560  3B 9C 00 01 */	addi r28, r28, 1
/* 8016B624 00168564  2C 1C 00 03 */	cmpwi r28, 3
/* 8016B628 00168568  41 80 FF D4 */	blt .L_8016B5FC
/* 8016B62C 0016856C  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8016B630 00168570  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8016B634 00168574  80 03 02 3C */	lwz r0, 0x23c(r3)
/* 8016B638 00168578  7C 00 F0 40 */	cmplw r0, r30
/* 8016B63C 0016857C  40 82 00 08 */	bne .L_8016B644
/* 8016B640 00168580  3B A0 00 01 */	li r29, 1
.L_8016B644:
/* 8016B644 00168584  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B648 00168588  41 82 00 A4 */	beq .L_8016B6EC
/* 8016B64C 0016858C  3C 80 80 4B */	lis r4, "__vt__27Condition<Q24Game8WayPoint>"@ha
/* 8016B650 00168590  3C 60 80 4B */	lis r3, __vt__Q24Game11WPCondition@ha
/* 8016B654 00168594  38 04 1F 64 */	addi r0, r4, "__vt__27Condition<Q24Game8WayPoint>"@l
/* 8016B658 00168598  C0 02 A6 34 */	lfs f0, lbl_80518994@sda21(r2)
/* 8016B65C 0016859C  90 01 00 08 */	stw r0, 8(r1)
/* 8016B660 001685A0  38 03 1F 58 */	addi r0, r3, __vt__Q24Game11WPCondition@l
/* 8016B664 001685A4  3C 60 80 4B */	lis r3, __vt__13WPExcludeSpot@ha
/* 8016B668 001685A8  38 A1 00 08 */	addi r5, r1, 8
/* 8016B66C 001685AC  90 01 00 08 */	stw r0, 8(r1)
/* 8016B670 001685B0  38 83 1F 40 */	addi r4, r3, __vt__13WPExcludeSpot@l
/* 8016B674 001685B4  38 00 00 00 */	li r0, 0
/* 8016B678 001685B8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8016B67C 001685BC  90 81 00 08 */	stw r4, 8(r1)
/* 8016B680 001685C0  38 81 00 24 */	addi r4, r1, 0x24
/* 8016B684 001685C4  D3 A1 00 24 */	stfs f29, 0x24(r1)
/* 8016B688 001685C8  D3 E1 00 28 */	stfs f31, 0x28(r1)
/* 8016B68C 001685CC  D3 C1 00 2C */	stfs f30, 0x2c(r1)
/* 8016B690 001685D0  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8016B694 001685D4  98 01 00 34 */	stb r0, 0x34(r1)
/* 8016B698 001685D8  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8016B69C 001685DC  80 63 00 08 */	lwz r3, 8(r3)
/* 8016B6A0 001685E0  48 00 79 25 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 8016B6A4 001685E4  28 03 00 00 */	cmplwi r3, 0
/* 8016B6A8 001685E8  41 82 00 44 */	beq .L_8016B6EC
/* 8016B6AC 001685EC  C0 43 00 50 */	lfs f2, 0x50(r3)
/* 8016B6B0 001685F0  38 81 00 18 */	addi r4, r1, 0x18
/* 8016B6B4 001685F4  C0 63 00 54 */	lfs f3, 0x54(r3)
/* 8016B6B8 001685F8  38 A0 00 00 */	li r5, 0
/* 8016B6BC 001685FC  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8016B6C0 00168600  7F E3 FB 78 */	mr r3, r31
/* 8016B6C4 00168604  C0 22 A5 B8 */	lfs f1, lbl_80518918@sda21(r2)
/* 8016B6C8 00168608  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8016B6CC 0016860C  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8016B6D0 00168610  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8016B6D4 00168614  80 DF 03 5C */	lwz r6, 0x35c(r31)
/* 8016B6D8 00168618  C0 06 00 C0 */	lfs f0, 0xc0(r6)
/* 8016B6DC 0016861C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8016B6E0 00168620  EC 02 00 2A */	fadds f0, f2, f0
/* 8016B6E4 00168624  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016B6E8 00168628  4B FC FA C1 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
.L_8016B6EC:
/* 8016B6EC 0016862C  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8016B6F0 00168630  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8016B6F4 00168634  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8016B6F8 00168638  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8016B6FC 0016863C  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8016B700 00168640  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8016B704 00168644  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8016B708 00168648  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8016B70C 0016864C  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 8016B710 00168650  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8016B714 00168654  83 81 00 60 */	lwz r28, 0x60(r1)
/* 8016B718 00168658  7C 08 03 A6 */	mtlr r0
/* 8016B71C 0016865C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8016B720 00168660  4E 80 00 20 */	blr 
.endfn doLoad__Q24Game6PelletFR6Stream

.fn onStartCapture__Q24Game6PelletFv, global
/* 8016B724 00168664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016B728 00168668  7C 08 02 A6 */	mflr r0
/* 8016B72C 0016866C  C0 02 A5 B4 */	lfs f0, lbl_80518914@sda21(r2)
/* 8016B730 00168670  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016B734 00168674  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016B738 00168678  7C 7F 1B 78 */	mr r31, r3
/* 8016B73C 0016867C  80 63 00 B8 */	lwz r3, 0xb8(r3)
/* 8016B740 00168680  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8016B744 00168684  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 8016B748 00168688  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 8016B74C 0016868C  D0 1F 01 BC */	stfs f0, 0x1bc(r31)
/* 8016B750 00168690  D0 1F 01 C0 */	stfs f0, 0x1c0(r31)
/* 8016B754 00168694  D0 1F 01 C4 */	stfs f0, 0x1c4(r31)
/* 8016B758 00168698  D0 3F 01 B0 */	stfs f1, 0x1b0(r31)
/* 8016B75C 0016869C  D0 5F 01 B4 */	stfs f2, 0x1b4(r31)
/* 8016B760 001686A0  D0 7F 01 B8 */	stfs f3, 0x1b8(r31)
/* 8016B764 001686A4  D0 3F 04 44 */	stfs f1, 0x444(r31)
/* 8016B768 001686A8  D0 5F 04 48 */	stfs f2, 0x448(r31)
/* 8016B76C 001686AC  D0 7F 04 4C */	stfs f3, 0x44c(r31)
/* 8016B770 001686B0  D0 3F 03 AC */	stfs f1, 0x3ac(r31)
/* 8016B774 001686B4  D0 5F 03 B0 */	stfs f2, 0x3b0(r31)
/* 8016B778 001686B8  D0 7F 03 B4 */	stfs f3, 0x3b4(r31)
/* 8016B77C 001686BC  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 8016B780 001686C0  28 00 00 00 */	cmplwi r0, 0
/* 8016B784 001686C4  41 82 00 6C */	beq .L_8016B7F0
/* 8016B788 001686C8  38 7F 01 38 */	addi r3, r31, 0x138
/* 8016B78C 001686CC  38 9F 03 AC */	addi r4, r31, 0x3ac
/* 8016B790 001686D0  48 2B D0 B1 */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 8016B794 001686D4  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 8016B798 001686D8  38 7F 01 38 */	addi r3, r31, 0x138
/* 8016B79C 001686DC  80 84 00 08 */	lwz r4, 8(r4)
/* 8016B7A0 001686E0  38 84 00 24 */	addi r4, r4, 0x24
/* 8016B7A4 001686E4  4B F7 EB 29 */	bl PSMTXCopy
/* 8016B7A8 001686E8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8016B7AC 001686EC  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 8016B7B0 001686F0  80 63 00 08 */	lwz r3, 8(r3)
/* 8016B7B4 001686F4  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8016B7B8 001686F8  C0 1F 01 6C */	lfs f0, 0x16c(r31)
/* 8016B7BC 001686FC  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8016B7C0 00168700  C0 1F 01 70 */	lfs f0, 0x170(r31)
/* 8016B7C4 00168704  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8016B7C8 00168708  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8016B7CC 0016870C  80 63 00 08 */	lwz r3, 8(r3)
/* 8016B7D0 00168710  81 83 00 00 */	lwz r12, 0(r3)
/* 8016B7D4 00168714  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016B7D8 00168718  7D 89 03 A6 */	mtctr r12
/* 8016B7DC 0016871C  4E 80 04 21 */	bctrl 
/* 8016B7E0 00168720  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8016B7E4 00168724  28 03 00 00 */	cmplwi r3, 0
/* 8016B7E8 00168728  41 82 00 08 */	beq .L_8016B7F0
/* 8016B7EC 0016872C  4B FC A2 B1 */	bl update__8CollTreeFv
.L_8016B7F0:
/* 8016B7F0 00168730  7F E3 FB 78 */	mr r3, r31
/* 8016B7F4 00168734  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016B7F8 00168738  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 8016B7FC 0016873C  7D 89 03 A6 */	mtctr r12
/* 8016B800 00168740  4E 80 04 21 */	bctrl 
/* 8016B804 00168744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016B808 00168748  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016B80C 0016874C  7C 08 03 A6 */	mtlr r0
/* 8016B810 00168750  38 21 00 10 */	addi r1, r1, 0x10
/* 8016B814 00168754  4E 80 00 20 */	blr 
.endfn onStartCapture__Q24Game6PelletFv

.fn onUpdateCapture__Q24Game6PelletFR7Matrixf, global
/* 8016B818 00168758  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016B81C 0016875C  7C 08 02 A6 */	mflr r0
/* 8016B820 00168760  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016B824 00168764  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016B828 00168768  93 C1 00 08 */	stw r30, 8(r1)
/* 8016B82C 0016876C  7C 7E 1B 78 */	mr r30, r3
/* 8016B830 00168770  80 03 04 2C */	lwz r0, 0x42c(r3)
/* 8016B834 00168774  28 00 00 00 */	cmplwi r0, 0
/* 8016B838 00168778  41 82 00 1C */	beq .L_8016B854
/* 8016B83C 0016877C  38 7E 04 1C */	addi r3, r30, 0x41c
/* 8016B840 00168780  C0 22 A5 B4 */	lfs f1, lbl_80518914@sda21(r2)
/* 8016B844 00168784  81 9E 04 1C */	lwz r12, 0x41c(r30)
/* 8016B848 00168788  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8016B84C 0016878C  7D 89 03 A6 */	mtctr r12
/* 8016B850 00168790  4E 80 04 21 */	bctrl 
.L_8016B854:
/* 8016B854 00168794  83 FE 01 74 */	lwz r31, 0x174(r30)
/* 8016B858 00168798  28 1F 00 00 */	cmplwi r31, 0
/* 8016B85C 0016879C  41 82 00 2C */	beq .L_8016B888
/* 8016B860 001687A0  38 7E 04 1C */	addi r3, r30, 0x41c
/* 8016B864 001687A4  81 9E 04 1C */	lwz r12, 0x41c(r30)
/* 8016B868 001687A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016B86C 001687AC  7D 89 03 A6 */	mtctr r12
/* 8016B870 001687B0  4E 80 04 21 */	bctrl 
/* 8016B874 001687B4  80 9F 00 08 */	lwz r4, 8(r31)
/* 8016B878 001687B8  80 84 00 04 */	lwz r4, 4(r4)
/* 8016B87C 001687BC  80 84 00 28 */	lwz r4, 0x28(r4)
/* 8016B880 001687C0  80 84 00 00 */	lwz r4, 0(r4)
/* 8016B884 001687C4  90 64 00 54 */	stw r3, 0x54(r4)
.L_8016B888:
/* 8016B888 001687C8  80 1E 03 58 */	lwz r0, 0x358(r30)
/* 8016B88C 001687CC  28 00 00 00 */	cmplwi r0, 0
/* 8016B890 001687D0  40 82 00 64 */	bne .L_8016B8F4
/* 8016B894 001687D4  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8016B898 001687D8  28 03 00 00 */	cmplwi r3, 0
/* 8016B89C 001687DC  41 82 00 60 */	beq .L_8016B8FC
/* 8016B8A0 001687E0  80 83 00 08 */	lwz r4, 8(r3)
/* 8016B8A4 001687E4  38 7E 01 38 */	addi r3, r30, 0x138
/* 8016B8A8 001687E8  38 84 00 24 */	addi r4, r4, 0x24
/* 8016B8AC 001687EC  4B F7 EA 21 */	bl PSMTXCopy
/* 8016B8B0 001687F0  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8016B8B4 001687F4  C0 1E 01 68 */	lfs f0, 0x168(r30)
/* 8016B8B8 001687F8  80 63 00 08 */	lwz r3, 8(r3)
/* 8016B8BC 001687FC  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8016B8C0 00168800  C0 1E 01 6C */	lfs f0, 0x16c(r30)
/* 8016B8C4 00168804  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8016B8C8 00168808  C0 1E 01 70 */	lfs f0, 0x170(r30)
/* 8016B8CC 0016880C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8016B8D0 00168810  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8016B8D4 00168814  80 63 00 08 */	lwz r3, 8(r3)
/* 8016B8D8 00168818  81 83 00 00 */	lwz r12, 0(r3)
/* 8016B8DC 0016881C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016B8E0 00168820  7D 89 03 A6 */	mtctr r12
/* 8016B8E4 00168824  4E 80 04 21 */	bctrl 
/* 8016B8E8 00168828  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8016B8EC 0016882C  4B FC A1 B1 */	bl update__8CollTreeFv
/* 8016B8F0 00168830  48 00 00 0C */	b .L_8016B8FC
.L_8016B8F4:
/* 8016B8F4 00168834  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8016B8F8 00168838  4B FC A1 A5 */	bl update__8CollTreeFv
.L_8016B8FC:
/* 8016B8FC 0016883C  88 1E 03 2C */	lbz r0, 0x32c(r30)
/* 8016B900 00168840  28 00 00 00 */	cmplwi r0, 0
/* 8016B904 00168844  40 82 00 0C */	bne .L_8016B910
/* 8016B908 00168848  38 00 00 5A */	li r0, 0x5a
/* 8016B90C 0016884C  98 1E 03 2D */	stb r0, 0x32d(r30)
.L_8016B910:
/* 8016B910 00168850  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016B914 00168854  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016B918 00168858  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016B91C 0016885C  7C 08 03 A6 */	mtlr r0
/* 8016B920 00168860  38 21 00 10 */	addi r1, r1, 0x10
/* 8016B924 00168864  4E 80 00 20 */	blr 
.endfn onUpdateCapture__Q24Game6PelletFR7Matrixf

.fn onEndCapture__Q24Game6PelletFv, global
/* 8016B928 00168868  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016B92C 0016886C  7C 08 02 A6 */	mflr r0
/* 8016B930 00168870  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016B934 00168874  38 81 00 08 */	addi r4, r1, 8
/* 8016B938 00168878  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016B93C 0016887C  7C 7F 1B 78 */	mr r31, r3
/* 8016B940 00168880  38 7F 01 38 */	addi r3, r31, 0x138
/* 8016B944 00168884  4B F7 E9 89 */	bl PSMTXCopy
/* 8016B948 00168888  38 00 00 01 */	li r0, 1
/* 8016B94C 0016888C  7F E3 FB 78 */	mr r3, r31
/* 8016B950 00168890  98 1F 03 C4 */	stb r0, 0x3c4(r31)
/* 8016B954 00168894  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016B958 00168898  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 8016B95C 0016889C  7D 89 03 A6 */	mtctr r12
/* 8016B960 001688A0  4E 80 04 21 */	bctrl 
/* 8016B964 001688A4  7F E3 FB 78 */	mr r3, r31
/* 8016B968 001688A8  38 9F 01 B0 */	addi r4, r31, 0x1b0
/* 8016B96C 001688AC  38 A0 00 00 */	li r5, 0
/* 8016B970 001688B0  4B FC F8 39 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8016B974 001688B4  7F E3 FB 78 */	mr r3, r31
/* 8016B978 001688B8  38 9F 03 AC */	addi r4, r31, 0x3ac
/* 8016B97C 001688BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016B980 001688C0  81 8C 01 FC */	lwz r12, 0x1fc(r12)
/* 8016B984 001688C4  7D 89 03 A6 */	mtctr r12
/* 8016B988 001688C8  4E 80 04 21 */	bctrl 
/* 8016B98C 001688CC  88 1F 03 64 */	lbz r0, 0x364(r31)
/* 8016B990 001688D0  28 00 00 02 */	cmplwi r0, 2
/* 8016B994 001688D4  40 82 00 0C */	bne .L_8016B9A0
/* 8016B998 001688D8  38 61 00 08 */	addi r3, r1, 8
/* 8016B99C 001688DC  4B F7 E9 05 */	bl PSMTXIdentity
.L_8016B9A0:
/* 8016B9A0 001688E0  7F E3 FB 78 */	mr r3, r31
/* 8016B9A4 001688E4  38 81 00 08 */	addi r4, r1, 8
/* 8016B9A8 001688E8  4B FF CB 25 */	bl setOrientation__Q24Game6PelletFR7Matrixf
/* 8016B9AC 001688EC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016B9B0 001688F0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016B9B4 001688F4  7C 08 03 A6 */	mtlr r0
/* 8016B9B8 001688F8  38 21 00 40 */	addi r1, r1, 0x40
/* 8016B9BC 001688FC  4E 80 00 20 */	blr 
.endfn onEndCapture__Q24Game6PelletFv

.fn __ct__Q24Game13BasePelletMgrFQ34Game10PelletList5cKind, global
/* 8016B9C0 00168900  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016B9C4 00168904  7C 08 02 A6 */	mflr r0
/* 8016B9C8 00168908  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016B9CC 0016890C  7C 80 07 35 */	extsh. r0, r4
/* 8016B9D0 00168910  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016B9D4 00168914  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016B9D8 00168918  7C 7E 1B 78 */	mr r30, r3
/* 8016B9DC 0016891C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016B9E0 00168920  7C BD 2B 78 */	mr r29, r5
/* 8016B9E4 00168924  41 82 00 0C */	beq .L_8016B9F0
/* 8016B9E8 00168928  38 1E 00 54 */	addi r0, r30, 0x54
/* 8016B9EC 0016892C  90 1E 00 04 */	stw r0, 4(r30)
.L_8016B9F0:
/* 8016B9F0 00168930  3C 80 80 4B */	lis r4, __vt__16GenericObjectMgr@ha
/* 8016B9F4 00168934  3C 60 80 4B */	lis r3, __vt__Q24Game13BasePelletMgr@ha
/* 8016B9F8 00168938  38 04 B5 F0 */	addi r0, r4, __vt__16GenericObjectMgr@l
/* 8016B9FC 0016893C  3B FE 00 18 */	addi r31, r30, 0x18
/* 8016BA00 00168940  90 1E 00 00 */	stw r0, 0(r30)
/* 8016BA04 00168944  38 03 1C DC */	addi r0, r3, __vt__Q24Game13BasePelletMgr@l
/* 8016BA08 00168948  7F E3 FB 78 */	mr r3, r31
/* 8016BA0C 0016894C  90 1E 00 00 */	stw r0, 0(r30)
/* 8016BA10 00168950  48 00 64 41 */	bl "__ct__24MonoObjectMgr<8CollPart>Fv"
/* 8016BA14 00168954  3C 80 80 4B */	lis r4, __vt__11CollPartMgr@ha
/* 8016BA18 00168958  7F A3 EB 78 */	mr r3, r29
/* 8016BA1C 0016895C  38 84 1E B4 */	addi r4, r4, __vt__11CollPartMgr@l
/* 8016BA20 00168960  90 9F 00 00 */	stw r4, 0(r31)
/* 8016BA24 00168964  38 04 00 2C */	addi r0, r4, 0x2c
/* 8016BA28 00168968  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8016BA2C 0016896C  48 0B C3 31 */	bl getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
/* 8016BA30 00168970  90 7E 00 08 */	stw r3, 8(r30)
/* 8016BA34 00168974  80 7E 00 08 */	lwz r3, 8(r30)
/* 8016BA38 00168978  83 E3 00 18 */	lwz r31, 0x18(r3)
/* 8016BA3C 0016897C  57 FD 10 3A */	slwi r29, r31, 2
/* 8016BA40 00168980  93 FE 00 50 */	stw r31, 0x50(r30)
/* 8016BA44 00168984  7F A3 EB 78 */	mr r3, r29
/* 8016BA48 00168988  4B EB 85 65 */	bl __nwa__FUl
/* 8016BA4C 0016898C  90 7E 00 0C */	stw r3, 0xc(r30)
/* 8016BA50 00168990  7F A3 EB 78 */	mr r3, r29
/* 8016BA54 00168994  4B EB 85 59 */	bl __nwa__FUl
/* 8016BA58 00168998  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8016BA5C 0016899C  7F A3 EB 78 */	mr r3, r29
/* 8016BA60 001689A0  4B EB 85 4D */	bl __nwa__FUl
/* 8016BA64 001689A4  90 7E 00 14 */	stw r3, 0x14(r30)
/* 8016BA68 001689A8  7F E3 FB 78 */	mr r3, r31
/* 8016BA6C 001689AC  4B EB 85 41 */	bl __nwa__FUl
/* 8016BA70 001689B0  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 8016BA74 001689B4  38 A0 00 00 */	li r5, 0
/* 8016BA78 001689B8  38 80 00 01 */	li r4, 1
/* 8016BA7C 001689BC  38 00 00 00 */	li r0, 0
/* 8016BA80 001689C0  7F E9 03 A6 */	mtctr r31
/* 8016BA84 001689C4  2C 1F 00 00 */	cmpwi r31, 0
/* 8016BA88 001689C8  40 81 00 2C */	ble .L_8016BAB4
.L_8016BA8C:
/* 8016BA8C 001689CC  88 6D 93 24 */	lbz r3, mDebug__Q24Game9PelletMgr@sda21(r13)
/* 8016BA90 001689D0  28 03 00 00 */	cmplwi r3, 0
/* 8016BA94 001689D4  41 82 00 10 */	beq .L_8016BAA4
/* 8016BA98 001689D8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016BA9C 001689DC  7C 83 29 AE */	stbx r4, r3, r5
/* 8016BAA0 001689E0  48 00 00 0C */	b .L_8016BAAC
.L_8016BAA4:
/* 8016BAA4 001689E4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016BAA8 001689E8  7C 03 29 AE */	stbx r0, r3, r5
.L_8016BAAC:
/* 8016BAAC 001689EC  38 A5 00 01 */	addi r5, r5, 1
/* 8016BAB0 001689F0  42 00 FF DC */	bdnz .L_8016BA8C
.L_8016BAB4:
/* 8016BAB4 001689F4  2C 1F 00 00 */	cmpwi r31, 0
/* 8016BAB8 001689F8  38 80 00 00 */	li r4, 0
/* 8016BABC 001689FC  40 81 01 4C */	ble .L_8016BC08
/* 8016BAC0 00168A00  2C 1F 00 08 */	cmpwi r31, 8
/* 8016BAC4 00168A04  38 BF FF F8 */	addi r5, r31, -8
/* 8016BAC8 00168A08  40 81 01 08 */	ble .L_8016BBD0
/* 8016BACC 00168A0C  38 05 00 07 */	addi r0, r5, 7
/* 8016BAD0 00168A10  38 60 00 00 */	li r3, 0
/* 8016BAD4 00168A14  54 00 E8 FE */	srwi r0, r0, 3
/* 8016BAD8 00168A18  7C 09 03 A6 */	mtctr r0
/* 8016BADC 00168A1C  2C 05 00 00 */	cmpwi r5, 0
/* 8016BAE0 00168A20  40 81 00 F0 */	ble .L_8016BBD0
.L_8016BAE4:
/* 8016BAE4 00168A24  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8016BAE8 00168A28  38 00 00 00 */	li r0, 0
/* 8016BAEC 00168A2C  39 83 00 04 */	addi r12, r3, 4
/* 8016BAF0 00168A30  39 63 00 08 */	addi r11, r3, 8
/* 8016BAF4 00168A34  7C 05 19 2E */	stwx r0, r5, r3
/* 8016BAF8 00168A38  39 43 00 0C */	addi r10, r3, 0xc
/* 8016BAFC 00168A3C  39 23 00 10 */	addi r9, r3, 0x10
/* 8016BB00 00168A40  39 03 00 14 */	addi r8, r3, 0x14
/* 8016BB04 00168A44  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8016BB08 00168A48  38 E3 00 18 */	addi r7, r3, 0x18
/* 8016BB0C 00168A4C  38 C3 00 1C */	addi r6, r3, 0x1c
/* 8016BB10 00168A50  38 84 00 08 */	addi r4, r4, 8
/* 8016BB14 00168A54  7C 05 19 2E */	stwx r0, r5, r3
/* 8016BB18 00168A58  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8016BB1C 00168A5C  7C 05 19 2E */	stwx r0, r5, r3
/* 8016BB20 00168A60  38 63 00 20 */	addi r3, r3, 0x20
/* 8016BB24 00168A64  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8016BB28 00168A68  7C 05 61 2E */	stwx r0, r5, r12
/* 8016BB2C 00168A6C  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8016BB30 00168A70  7C 05 61 2E */	stwx r0, r5, r12
/* 8016BB34 00168A74  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8016BB38 00168A78  7C 05 61 2E */	stwx r0, r5, r12
/* 8016BB3C 00168A7C  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8016BB40 00168A80  7C 05 59 2E */	stwx r0, r5, r11
/* 8016BB44 00168A84  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8016BB48 00168A88  7C 05 59 2E */	stwx r0, r5, r11
/* 8016BB4C 00168A8C  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8016BB50 00168A90  7C 05 59 2E */	stwx r0, r5, r11
/* 8016BB54 00168A94  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8016BB58 00168A98  7C 05 51 2E */	stwx r0, r5, r10
/* 8016BB5C 00168A9C  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8016BB60 00168AA0  7C 05 51 2E */	stwx r0, r5, r10
/* 8016BB64 00168AA4  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8016BB68 00168AA8  7C 05 51 2E */	stwx r0, r5, r10
/* 8016BB6C 00168AAC  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8016BB70 00168AB0  7C 05 49 2E */	stwx r0, r5, r9
/* 8016BB74 00168AB4  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8016BB78 00168AB8  7C 05 49 2E */	stwx r0, r5, r9
/* 8016BB7C 00168ABC  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8016BB80 00168AC0  7C 05 49 2E */	stwx r0, r5, r9
/* 8016BB84 00168AC4  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8016BB88 00168AC8  7C 05 41 2E */	stwx r0, r5, r8
/* 8016BB8C 00168ACC  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8016BB90 00168AD0  7C 05 41 2E */	stwx r0, r5, r8
/* 8016BB94 00168AD4  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8016BB98 00168AD8  7C 05 41 2E */	stwx r0, r5, r8
/* 8016BB9C 00168ADC  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8016BBA0 00168AE0  7C 05 39 2E */	stwx r0, r5, r7
/* 8016BBA4 00168AE4  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8016BBA8 00168AE8  7C 05 39 2E */	stwx r0, r5, r7
/* 8016BBAC 00168AEC  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8016BBB0 00168AF0  7C 05 39 2E */	stwx r0, r5, r7
/* 8016BBB4 00168AF4  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8016BBB8 00168AF8  7C 05 31 2E */	stwx r0, r5, r6
/* 8016BBBC 00168AFC  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8016BBC0 00168B00  7C 05 31 2E */	stwx r0, r5, r6
/* 8016BBC4 00168B04  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8016BBC8 00168B08  7C 05 31 2E */	stwx r0, r5, r6
/* 8016BBCC 00168B0C  42 00 FF 18 */	bdnz .L_8016BAE4
.L_8016BBD0:
/* 8016BBD0 00168B10  7C 04 F8 50 */	subf r0, r4, r31
/* 8016BBD4 00168B14  54 86 10 3A */	slwi r6, r4, 2
/* 8016BBD8 00168B18  38 A0 00 00 */	li r5, 0
/* 8016BBDC 00168B1C  7C 09 03 A6 */	mtctr r0
/* 8016BBE0 00168B20  7C 04 F8 00 */	cmpw r4, r31
/* 8016BBE4 00168B24  40 80 00 24 */	bge .L_8016BC08
.L_8016BBE8:
/* 8016BBE8 00168B28  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8016BBEC 00168B2C  7C A3 31 2E */	stwx r5, r3, r6
/* 8016BBF0 00168B30  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8016BBF4 00168B34  7C A3 31 2E */	stwx r5, r3, r6
/* 8016BBF8 00168B38  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 8016BBFC 00168B3C  7C A3 31 2E */	stwx r5, r3, r6
/* 8016BC00 00168B40  38 C6 00 04 */	addi r6, r6, 4
/* 8016BC04 00168B44  42 00 FF E4 */	bdnz .L_8016BBE8
.L_8016BC08:
/* 8016BC08 00168B48  38 00 00 00 */	li r0, 0
/* 8016BC0C 00168B4C  7F C3 F3 78 */	mr r3, r30
/* 8016BC10 00168B50  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8016BC14 00168B54  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016BC18 00168B58  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016BC1C 00168B5C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016BC20 00168B60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016BC24 00168B64  7C 08 03 A6 */	mtlr r0
/* 8016BC28 00168B68  38 21 00 20 */	addi r1, r1, 0x20
/* 8016BC2C 00168B6C  4E 80 00 20 */	blr 
.endfn __ct__Q24Game13BasePelletMgrFQ34Game10PelletList5cKind

.fn __dt__11CollPartMgrFv, weak
/* 8016BC30 00168B70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016BC34 00168B74  7C 08 02 A6 */	mflr r0
/* 8016BC38 00168B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016BC3C 00168B7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016BC40 00168B80  7C 9F 23 78 */	mr r31, r4
/* 8016BC44 00168B84  93 C1 00 08 */	stw r30, 8(r1)
/* 8016BC48 00168B88  7C 7E 1B 79 */	or. r30, r3, r3
/* 8016BC4C 00168B8C  41 82 00 80 */	beq .L_8016BCCC
/* 8016BC50 00168B90  3C 80 80 4B */	lis r4, __vt__11CollPartMgr@ha
/* 8016BC54 00168B94  38 84 1E B4 */	addi r4, r4, __vt__11CollPartMgr@l
/* 8016BC58 00168B98  90 9E 00 00 */	stw r4, 0(r30)
/* 8016BC5C 00168B9C  38 04 00 2C */	addi r0, r4, 0x2c
/* 8016BC60 00168BA0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8016BC64 00168BA4  41 82 00 58 */	beq .L_8016BCBC
/* 8016BC68 00168BA8  3C 80 80 4B */	lis r4, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 8016BC6C 00168BAC  38 84 1E 28 */	addi r4, r4, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 8016BC70 00168BB0  90 9E 00 00 */	stw r4, 0(r30)
/* 8016BC74 00168BB4  38 04 00 2C */	addi r0, r4, 0x2c
/* 8016BC78 00168BB8  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8016BC7C 00168BBC  41 82 00 40 */	beq .L_8016BCBC
/* 8016BC80 00168BC0  3C 80 80 4B */	lis r4, "__vt__20ObjectMgr<8CollPart>"@ha
/* 8016BC84 00168BC4  38 84 1D AC */	addi r4, r4, "__vt__20ObjectMgr<8CollPart>"@l
/* 8016BC88 00168BC8  90 9E 00 00 */	stw r4, 0(r30)
/* 8016BC8C 00168BCC  38 04 00 2C */	addi r0, r4, 0x2c
/* 8016BC90 00168BD0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8016BC94 00168BD4  41 82 00 28 */	beq .L_8016BCBC
/* 8016BC98 00168BD8  3C 80 80 4B */	lis r4, "__vt__20Container<8CollPart>"@ha
/* 8016BC9C 00168BDC  38 04 1D 80 */	addi r0, r4, "__vt__20Container<8CollPart>"@l
/* 8016BCA0 00168BE0  90 1E 00 00 */	stw r0, 0(r30)
/* 8016BCA4 00168BE4  41 82 00 18 */	beq .L_8016BCBC
/* 8016BCA8 00168BE8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8016BCAC 00168BEC  38 80 00 00 */	li r4, 0
/* 8016BCB0 00168BF0  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8016BCB4 00168BF4  90 1E 00 00 */	stw r0, 0(r30)
/* 8016BCB8 00168BF8  48 2A 58 D1 */	bl __dt__5CNodeFv
.L_8016BCBC:
/* 8016BCBC 00168BFC  7F E0 07 35 */	extsh. r0, r31
/* 8016BCC0 00168C00  40 81 00 0C */	ble .L_8016BCCC
/* 8016BCC4 00168C04  7F C3 F3 78 */	mr r3, r30
/* 8016BCC8 00168C08  4B EB 83 ED */	bl __dl__FPv
.L_8016BCCC:
/* 8016BCCC 00168C0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016BCD0 00168C10  7F C3 F3 78 */	mr r3, r30
/* 8016BCD4 00168C14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016BCD8 00168C18  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016BCDC 00168C1C  7C 08 03 A6 */	mtlr r0
/* 8016BCE0 00168C20  38 21 00 10 */	addi r1, r1, 0x10
/* 8016BCE4 00168C24  4E 80 00 20 */	blr 
.endfn __dt__11CollPartMgrFv

.fn "__dt__24MonoObjectMgr<8CollPart>Fv", weak
/* 8016BCE8 00168C28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016BCEC 00168C2C  7C 08 02 A6 */	mflr r0
/* 8016BCF0 00168C30  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016BCF4 00168C34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016BCF8 00168C38  7C 9F 23 78 */	mr r31, r4
/* 8016BCFC 00168C3C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016BD00 00168C40  7C 7E 1B 79 */	or. r30, r3, r3
/* 8016BD04 00168C44  41 82 00 68 */	beq .L_8016BD6C
/* 8016BD08 00168C48  3C 80 80 4B */	lis r4, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 8016BD0C 00168C4C  38 84 1E 28 */	addi r4, r4, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 8016BD10 00168C50  90 9E 00 00 */	stw r4, 0(r30)
/* 8016BD14 00168C54  38 04 00 2C */	addi r0, r4, 0x2c
/* 8016BD18 00168C58  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8016BD1C 00168C5C  41 82 00 40 */	beq .L_8016BD5C
/* 8016BD20 00168C60  3C 80 80 4B */	lis r4, "__vt__20ObjectMgr<8CollPart>"@ha
/* 8016BD24 00168C64  38 84 1D AC */	addi r4, r4, "__vt__20ObjectMgr<8CollPart>"@l
/* 8016BD28 00168C68  90 9E 00 00 */	stw r4, 0(r30)
/* 8016BD2C 00168C6C  38 04 00 2C */	addi r0, r4, 0x2c
/* 8016BD30 00168C70  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8016BD34 00168C74  41 82 00 28 */	beq .L_8016BD5C
/* 8016BD38 00168C78  3C 80 80 4B */	lis r4, "__vt__20Container<8CollPart>"@ha
/* 8016BD3C 00168C7C  38 04 1D 80 */	addi r0, r4, "__vt__20Container<8CollPart>"@l
/* 8016BD40 00168C80  90 1E 00 00 */	stw r0, 0(r30)
/* 8016BD44 00168C84  41 82 00 18 */	beq .L_8016BD5C
/* 8016BD48 00168C88  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8016BD4C 00168C8C  38 80 00 00 */	li r4, 0
/* 8016BD50 00168C90  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8016BD54 00168C94  90 1E 00 00 */	stw r0, 0(r30)
/* 8016BD58 00168C98  48 2A 58 31 */	bl __dt__5CNodeFv
.L_8016BD5C:
/* 8016BD5C 00168C9C  7F E0 07 35 */	extsh. r0, r31
/* 8016BD60 00168CA0  40 81 00 0C */	ble .L_8016BD6C
/* 8016BD64 00168CA4  7F C3 F3 78 */	mr r3, r30
/* 8016BD68 00168CA8  4B EB 83 4D */	bl __dl__FPv
.L_8016BD6C:
/* 8016BD6C 00168CAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016BD70 00168CB0  7F C3 F3 78 */	mr r3, r30
/* 8016BD74 00168CB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016BD78 00168CB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016BD7C 00168CBC  7C 08 03 A6 */	mtlr r0
/* 8016BD80 00168CC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016BD84 00168CC4  4E 80 00 20 */	blr 
.endfn "__dt__24MonoObjectMgr<8CollPart>Fv"

.fn getPelletConfig__Q24Game13BasePelletMgrFi, global
/* 8016BD88 00168CC8  2C 04 00 00 */	cmpwi r4, 0
/* 8016BD8C 00168CCC  41 80 00 14 */	blt .L_8016BDA0
/* 8016BD90 00168CD0  80 63 00 08 */	lwz r3, 8(r3)
/* 8016BD94 00168CD4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016BD98 00168CD8  7C 04 00 00 */	cmpw r4, r0
/* 8016BD9C 00168CDC  41 80 00 0C */	blt .L_8016BDA8
.L_8016BDA0:
/* 8016BDA0 00168CE0  38 60 00 00 */	li r3, 0
/* 8016BDA4 00168CE4  4E 80 00 20 */	blr 
.L_8016BDA8:
/* 8016BDA8 00168CE8  1C 04 02 60 */	mulli r0, r4, 0x260
/* 8016BDAC 00168CEC  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8016BDB0 00168CF0  7C 63 02 14 */	add r3, r3, r0
/* 8016BDB4 00168CF4  4E 80 00 20 */	blr 
.endfn getPelletConfig__Q24Game13BasePelletMgrFi

.fn setUse__Q24Game13BasePelletMgrFi, global
/* 8016BDB8 00168CF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016BDBC 00168CFC  7C 08 02 A6 */	mflr r0
/* 8016BDC0 00168D00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016BDC4 00168D04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016BDC8 00168D08  7C 9F 23 79 */	or. r31, r4, r4
/* 8016BDCC 00168D0C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016BDD0 00168D10  7C 7E 1B 78 */	mr r30, r3
/* 8016BDD4 00168D14  38 60 00 00 */	li r3, 0
/* 8016BDD8 00168D18  41 80 00 14 */	blt .L_8016BDEC
/* 8016BDDC 00168D1C  80 1E 00 50 */	lwz r0, 0x50(r30)
/* 8016BDE0 00168D20  7C 1F 00 00 */	cmpw r31, r0
/* 8016BDE4 00168D24  40 80 00 08 */	bge .L_8016BDEC
/* 8016BDE8 00168D28  38 60 00 01 */	li r3, 1
.L_8016BDEC:
/* 8016BDEC 00168D2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016BDF0 00168D30  40 82 00 20 */	bne .L_8016BE10
/* 8016BDF4 00168D34  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016BDF8 00168D38  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016BDFC 00168D3C  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016BE00 00168D40  38 80 11 43 */	li r4, 0x1143
/* 8016BE04 00168D44  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016BE08 00168D48  4C C6 31 82 */	crclr 6
/* 8016BE0C 00168D4C  4B EB E8 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016BE10:
/* 8016BE10 00168D50  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016BE14 00168D54  38 00 00 01 */	li r0, 1
/* 8016BE18 00168D58  7C 03 F9 AE */	stbx r0, r3, r31
/* 8016BE1C 00168D5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016BE20 00168D60  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016BE24 00168D64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016BE28 00168D68  7C 08 03 A6 */	mtlr r0
/* 8016BE2C 00168D6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016BE30 00168D70  4E 80 00 20 */	blr 
.endfn setUse__Q24Game13BasePelletMgrFi

.fn load__Q24Game13BasePelletMgrFv, global
/* 8016BE34 00168D74  94 21 FB D0 */	stwu r1, -0x430(r1)
/* 8016BE38 00168D78  7C 08 02 A6 */	mflr r0
/* 8016BE3C 00168D7C  3C 80 80 51 */	lis r4, gGameConfig__4Game@ha
/* 8016BE40 00168D80  3C A0 80 48 */	lis r5, lbl_8047E318@ha
/* 8016BE44 00168D84  90 01 04 34 */	stw r0, 0x434(r1)
/* 8016BE48 00168D88  38 84 41 FC */	addi r4, r4, gGameConfig__4Game@l
/* 8016BE4C 00168D8C  BE E1 04 0C */	stmw r23, 0x40c(r1)
/* 8016BE50 00168D90  7C 77 1B 78 */	mr r23, r3
/* 8016BE54 00168D94  3B E5 E3 18 */	addi r31, r5, lbl_8047E318@l
/* 8016BE58 00168D98  3B 80 00 00 */	li r28, 0
/* 8016BE5C 00168D9C  80 04 01 58 */	lwz r0, 0x158(r4)
/* 8016BE60 00168DA0  2C 00 00 00 */	cmpwi r0, 0
/* 8016BE64 00168DA4  41 82 00 90 */	beq .L_8016BEF4
/* 8016BE68 00168DA8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8016BE6C 00168DAC  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 8016BE70 00168DB0  2C 00 00 04 */	cmpwi r0, 4
/* 8016BE74 00168DB4  41 82 00 64 */	beq .L_8016BED8
/* 8016BE78 00168DB8  40 80 00 1C */	bge .L_8016BE94
/* 8016BE7C 00168DBC  2C 00 00 00 */	cmpwi r0, 0
/* 8016BE80 00168DC0  41 82 00 3C */	beq .L_8016BEBC
/* 8016BE84 00168DC4  41 80 00 74 */	blt .L_8016BEF8
/* 8016BE88 00168DC8  2C 00 00 03 */	cmpwi r0, 3
/* 8016BE8C 00168DCC  40 80 00 6C */	bge .L_8016BEF8
/* 8016BE90 00168DD0  48 00 00 48 */	b .L_8016BED8
.L_8016BE94:
/* 8016BE94 00168DD4  2C 00 00 06 */	cmpwi r0, 6
/* 8016BE98 00168DD8  41 82 00 40 */	beq .L_8016BED8
/* 8016BE9C 00168DDC  40 80 00 5C */	bge .L_8016BEF8
/* 8016BEA0 00168DE0  38 61 02 08 */	addi r3, r1, 0x208
/* 8016BEA4 00168DE4  38 9F 00 E0 */	addi r4, r31, 0xe0
/* 8016BEA8 00168DE8  38 A2 A6 68 */	addi r5, r2, lbl_805189C8@sda21
/* 8016BEAC 00168DEC  4C C6 31 82 */	crclr 6
/* 8016BEB0 00168DF0  4B F5 B5 89 */	bl sprintf
/* 8016BEB4 00168DF4  3B 81 02 08 */	addi r28, r1, 0x208
/* 8016BEB8 00168DF8  48 00 00 40 */	b .L_8016BEF8
.L_8016BEBC:
/* 8016BEBC 00168DFC  38 61 02 08 */	addi r3, r1, 0x208
/* 8016BEC0 00168E00  38 9F 00 E0 */	addi r4, r31, 0xe0
/* 8016BEC4 00168E04  38 A2 A6 6C */	addi r5, r2, lbl_805189CC@sda21
/* 8016BEC8 00168E08  4C C6 31 82 */	crclr 6
/* 8016BECC 00168E0C  4B F5 B5 6D */	bl sprintf
/* 8016BED0 00168E10  3B 81 02 08 */	addi r28, r1, 0x208
/* 8016BED4 00168E14  48 00 00 24 */	b .L_8016BEF8
.L_8016BED8:
/* 8016BED8 00168E18  38 61 02 08 */	addi r3, r1, 0x208
/* 8016BEDC 00168E1C  38 9F 00 E0 */	addi r4, r31, 0xe0
/* 8016BEE0 00168E20  38 A2 A6 70 */	addi r5, r2, lbl_805189D0@sda21
/* 8016BEE4 00168E24  4C C6 31 82 */	crclr 6
/* 8016BEE8 00168E28  4B F5 B5 51 */	bl sprintf
/* 8016BEEC 00168E2C  3B 81 02 08 */	addi r28, r1, 0x208
/* 8016BEF0 00168E30  48 00 00 08 */	b .L_8016BEF8
.L_8016BEF4:
/* 8016BEF4 00168E34  3B 9F 00 F8 */	addi r28, r31, 0xf8
.L_8016BEF8:
/* 8016BEF8 00168E38  3B C0 00 00 */	li r30, 0
/* 8016BEFC 00168E3C  3B 60 00 00 */	li r27, 0
/* 8016BF00 00168E40  7F DD F3 78 */	mr r29, r30
/* 8016BF04 00168E44  48 00 01 A4 */	b .L_8016C0A8
.L_8016BF08:
/* 8016BF08 00168E48  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8016BF0C 00168E4C  3B 20 00 00 */	li r25, 0
/* 8016BF10 00168E50  38 62 A6 74 */	addi r3, r2, lbl_805189D4@sda21
/* 8016BF14 00168E54  7F 40 F2 14 */	add r26, r0, r30
/* 8016BF18 00168E58  B3 7A 02 58 */	sth r27, 0x258(r26)
/* 8016BF1C 00168E5C  80 9A 00 50 */	lwz r4, 0x50(r26)
/* 8016BF20 00168E60  4B F5 E7 A1 */	bl strcmp
/* 8016BF24 00168E64  2C 03 00 00 */	cmpwi r3, 0
/* 8016BF28 00168E68  41 82 00 34 */	beq .L_8016BF5C
/* 8016BF2C 00168E6C  80 DA 00 50 */	lwz r6, 0x50(r26)
/* 8016BF30 00168E70  7F 85 E3 78 */	mr r5, r28
/* 8016BF34 00168E74  38 61 00 08 */	addi r3, r1, 8
/* 8016BF38 00168E78  38 82 A6 7C */	addi r4, r2, lbl_805189DC@sda21
/* 8016BF3C 00168E7C  4C C6 31 82 */	crclr 6
/* 8016BF40 00168E80  4B F5 B4 F9 */	bl sprintf
/* 8016BF44 00168E84  38 61 00 08 */	addi r3, r1, 8
/* 8016BF48 00168E88  38 80 00 01 */	li r4, 1
/* 8016BF4C 00168E8C  38 A0 00 00 */	li r5, 0
/* 8016BF50 00168E90  38 C0 00 01 */	li r6, 1
/* 8016BF54 00168E94  4B EA F1 DD */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8016BF58 00168E98  7C 79 1B 78 */	mr r25, r3
.L_8016BF5C:
/* 8016BF5C 00168E9C  80 9A 00 70 */	lwz r4, 0x70(r26)
/* 8016BF60 00168EA0  3B 00 00 00 */	li r24, 0
/* 8016BF64 00168EA4  38 62 A6 74 */	addi r3, r2, lbl_805189D4@sda21
/* 8016BF68 00168EA8  4B F5 E7 59 */	bl strcmp
/* 8016BF6C 00168EAC  2C 03 00 00 */	cmpwi r3, 0
/* 8016BF70 00168EB0  40 82 00 14 */	bne .L_8016BF84
/* 8016BF74 00168EB4  80 77 00 0C */	lwz r3, 0xc(r23)
/* 8016BF78 00168EB8  38 00 00 00 */	li r0, 0
/* 8016BF7C 00168EBC  7C 03 E9 2E */	stwx r0, r3, r29
/* 8016BF80 00168EC0  48 00 00 B4 */	b .L_8016C034
.L_8016BF84:
/* 8016BF84 00168EC4  80 BA 00 70 */	lwz r5, 0x70(r26)
/* 8016BF88 00168EC8  38 61 00 08 */	addi r3, r1, 8
/* 8016BF8C 00168ECC  38 82 A6 84 */	addi r4, r2, lbl_805189E4@sda21
/* 8016BF90 00168ED0  4C C6 31 82 */	crclr 6
/* 8016BF94 00168ED4  4B F5 B4 A5 */	bl sprintf
/* 8016BF98 00168ED8  38 61 00 08 */	addi r3, r1, 8
/* 8016BF9C 00168EDC  38 80 00 00 */	li r4, 0
/* 8016BFA0 00168EE0  4B EB 70 79 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 8016BFA4 00168EE4  7C 78 1B 79 */	or. r24, r3, r3
/* 8016BFA8 00168EE8  40 82 00 1C */	bne .L_8016BFC4
/* 8016BFAC 00168EEC  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8016BFB0 00168EF0  38 BF 01 0C */	addi r5, r31, 0x10c
/* 8016BFB4 00168EF4  38 C1 00 08 */	addi r6, r1, 8
/* 8016BFB8 00168EF8  38 80 11 D0 */	li r4, 0x11d0
/* 8016BFBC 00168EFC  4C C6 31 82 */	crclr 6
/* 8016BFC0 00168F00  4B EB E6 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016BFC4:
/* 8016BFC4 00168F04  A0 1A 02 44 */	lhz r0, 0x244(r26)
/* 8016BFC8 00168F08  3C 60 21 02 */	lis r3, 0x21020010@ha
/* 8016BFCC 00168F0C  38 83 00 10 */	addi r4, r3, 0x21020010@l
/* 8016BFD0 00168F10  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016BFD4 00168F14  41 82 00 08 */	beq .L_8016BFDC
/* 8016BFD8 00168F18  60 84 00 20 */	ori r4, r4, 0x20
.L_8016BFDC:
/* 8016BFDC 00168F1C  7F 03 C3 78 */	mr r3, r24
/* 8016BFE0 00168F20  4B F0 38 B5 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 8016BFE4 00168F24  A0 1A 02 44 */	lhz r0, 0x244(r26)
/* 8016BFE8 00168F28  7C 78 1B 78 */	mr r24, r3
/* 8016BFEC 00168F2C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016BFF0 00168F30  41 82 00 3C */	beq .L_8016C02C
/* 8016BFF4 00168F34  38 80 00 00 */	li r4, 0
/* 8016BFF8 00168F38  48 00 00 24 */	b .L_8016C01C
.L_8016BFFC:
/* 8016BFFC 00168F3C  80 78 00 80 */	lwz r3, 0x80(r24)
/* 8016C000 00168F40  54 80 13 BA */	rlwinm r0, r4, 2, 0xe, 0x1d
/* 8016C004 00168F44  38 84 00 01 */	addi r4, r4, 1
/* 8016C008 00168F48  7C 63 00 2E */	lwzx r3, r3, r0
/* 8016C00C 00168F4C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8016C010 00168F50  54 00 05 1E */	rlwinm r0, r0, 0, 0x14, 0xf
/* 8016C014 00168F54  60 00 20 00 */	ori r0, r0, 0x2000
/* 8016C018 00168F58  90 03 00 0C */	stw r0, 0xc(r3)
.L_8016C01C:
/* 8016C01C 00168F5C  A0 18 00 7C */	lhz r0, 0x7c(r24)
/* 8016C020 00168F60  54 83 04 3E */	clrlwi r3, r4, 0x10
/* 8016C024 00168F64  7C 03 00 40 */	cmplw r3, r0
/* 8016C028 00168F68  41 80 FF D4 */	blt .L_8016BFFC
.L_8016C02C:
/* 8016C02C 00168F6C  80 77 00 0C */	lwz r3, 0xc(r23)
/* 8016C030 00168F70  7F 03 E9 2E */	stwx r24, r3, r29
.L_8016C034:
/* 8016C034 00168F74  80 DA 00 80 */	lwz r6, 0x80(r26)
/* 8016C038 00168F78  28 06 00 00 */	cmplwi r6, 0
/* 8016C03C 00168F7C  41 82 00 30 */	beq .L_8016C06C
/* 8016C040 00168F80  7F 85 E3 78 */	mr r5, r28
/* 8016C044 00168F84  38 61 00 08 */	addi r3, r1, 8
/* 8016C048 00168F88  38 82 A6 7C */	addi r4, r2, lbl_805189DC@sda21
/* 8016C04C 00168F8C  4C C6 31 82 */	crclr 6
/* 8016C050 00168F90  4B F5 B3 E9 */	bl sprintf
/* 8016C054 00168F94  7F 04 C3 78 */	mr r4, r24
/* 8016C058 00168F98  7F 25 CB 78 */	mr r5, r25
/* 8016C05C 00168F9C  38 61 00 08 */	addi r3, r1, 8
/* 8016C060 00168FA0  48 2B DA 49 */	bl load__Q28SysShape7AnimMgrFPcP12J3DModelDataP13JKRFileLoader
/* 8016C064 00168FA4  80 97 00 10 */	lwz r4, 0x10(r23)
/* 8016C068 00168FA8  7C 64 E9 2E */	stwx r3, r4, r29
.L_8016C06C:
/* 8016C06C 00168FAC  80 DA 00 90 */	lwz r6, 0x90(r26)
/* 8016C070 00168FB0  28 06 00 00 */	cmplwi r6, 0
/* 8016C074 00168FB4  41 82 00 28 */	beq .L_8016C09C
/* 8016C078 00168FB8  7F 85 E3 78 */	mr r5, r28
/* 8016C07C 00168FBC  38 61 00 08 */	addi r3, r1, 8
/* 8016C080 00168FC0  38 82 A6 7C */	addi r4, r2, lbl_805189DC@sda21
/* 8016C084 00168FC4  4C C6 31 82 */	crclr 6
/* 8016C088 00168FC8  4B F5 B3 B1 */	bl sprintf
/* 8016C08C 00168FCC  38 61 00 08 */	addi r3, r1, 8
/* 8016C090 00168FD0  4B FC C7 65 */	bl load__15CollPartFactoryFPc
/* 8016C094 00168FD4  80 97 00 14 */	lwz r4, 0x14(r23)
/* 8016C098 00168FD8  7C 64 E9 2E */	stwx r3, r4, r29
.L_8016C09C:
/* 8016C09C 00168FDC  3B DE 02 60 */	addi r30, r30, 0x260
/* 8016C0A0 00168FE0  3B BD 00 04 */	addi r29, r29, 4
/* 8016C0A4 00168FE4  3B 7B 00 01 */	addi r27, r27, 1
.L_8016C0A8:
/* 8016C0A8 00168FE8  80 77 00 08 */	lwz r3, 8(r23)
/* 8016C0AC 00168FEC  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016C0B0 00168FF0  7C 1B 00 00 */	cmpw r27, r0
/* 8016C0B4 00168FF4  41 80 FE 54 */	blt .L_8016BF08
/* 8016C0B8 00168FF8  BA E1 04 0C */	lmw r23, 0x40c(r1)
/* 8016C0BC 00168FFC  80 01 04 34 */	lwz r0, 0x434(r1)
/* 8016C0C0 00169000  7C 08 03 A6 */	mtlr r0
/* 8016C0C4 00169004  38 21 04 30 */	addi r1, r1, 0x430
/* 8016C0C8 00169008  4E 80 00 20 */	blr 
.endfn load__Q24Game13BasePelletMgrFv

.fn load_texArc__Q24Game13BasePelletMgrFPc, global
/* 8016C0CC 0016900C  94 21 FB D0 */	stwu r1, -0x430(r1)
/* 8016C0D0 00169010  7C 08 02 A6 */	mflr r0
/* 8016C0D4 00169014  3C A0 80 51 */	lis r5, gGameConfig__4Game@ha
/* 8016C0D8 00169018  3C C0 80 48 */	lis r6, lbl_8047E318@ha
/* 8016C0DC 0016901C  90 01 04 34 */	stw r0, 0x434(r1)
/* 8016C0E0 00169020  38 A5 41 FC */	addi r5, r5, gGameConfig__4Game@l
/* 8016C0E4 00169024  BE C1 04 08 */	stmw r22, 0x408(r1)
/* 8016C0E8 00169028  7C 7F 1B 78 */	mr r31, r3
/* 8016C0EC 0016902C  7C 96 23 78 */	mr r22, r4
/* 8016C0F0 00169030  3B C6 E3 18 */	addi r30, r6, lbl_8047E318@l
/* 8016C0F4 00169034  3B 00 00 00 */	li r24, 0
/* 8016C0F8 00169038  80 05 01 58 */	lwz r0, 0x158(r5)
/* 8016C0FC 0016903C  2C 00 00 00 */	cmpwi r0, 0
/* 8016C100 00169040  41 82 00 90 */	beq .L_8016C190
/* 8016C104 00169044  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8016C108 00169048  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 8016C10C 0016904C  2C 00 00 04 */	cmpwi r0, 4
/* 8016C110 00169050  41 82 00 64 */	beq .L_8016C174
/* 8016C114 00169054  40 80 00 1C */	bge .L_8016C130
/* 8016C118 00169058  2C 00 00 00 */	cmpwi r0, 0
/* 8016C11C 0016905C  41 82 00 3C */	beq .L_8016C158
/* 8016C120 00169060  41 80 00 74 */	blt .L_8016C194
/* 8016C124 00169064  2C 00 00 03 */	cmpwi r0, 3
/* 8016C128 00169068  40 80 00 6C */	bge .L_8016C194
/* 8016C12C 0016906C  48 00 00 48 */	b .L_8016C174
.L_8016C130:
/* 8016C130 00169070  2C 00 00 06 */	cmpwi r0, 6
/* 8016C134 00169074  41 82 00 40 */	beq .L_8016C174
/* 8016C138 00169078  40 80 00 5C */	bge .L_8016C194
/* 8016C13C 0016907C  38 61 02 08 */	addi r3, r1, 0x208
/* 8016C140 00169080  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 8016C144 00169084  38 A2 A6 68 */	addi r5, r2, lbl_805189C8@sda21
/* 8016C148 00169088  4C C6 31 82 */	crclr 6
/* 8016C14C 0016908C  4B F5 B2 ED */	bl sprintf
/* 8016C150 00169090  3B 01 02 08 */	addi r24, r1, 0x208
/* 8016C154 00169094  48 00 00 40 */	b .L_8016C194
.L_8016C158:
/* 8016C158 00169098  38 61 02 08 */	addi r3, r1, 0x208
/* 8016C15C 0016909C  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 8016C160 001690A0  38 A2 A6 6C */	addi r5, r2, lbl_805189CC@sda21
/* 8016C164 001690A4  4C C6 31 82 */	crclr 6
/* 8016C168 001690A8  4B F5 B2 D1 */	bl sprintf
/* 8016C16C 001690AC  3B 01 02 08 */	addi r24, r1, 0x208
/* 8016C170 001690B0  48 00 00 24 */	b .L_8016C194
.L_8016C174:
/* 8016C174 001690B4  38 61 02 08 */	addi r3, r1, 0x208
/* 8016C178 001690B8  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 8016C17C 001690BC  38 A2 A6 70 */	addi r5, r2, lbl_805189D0@sda21
/* 8016C180 001690C0  4C C6 31 82 */	crclr 6
/* 8016C184 001690C4  4B F5 B2 B5 */	bl sprintf
/* 8016C188 001690C8  3B 01 02 08 */	addi r24, r1, 0x208
/* 8016C18C 001690CC  48 00 00 08 */	b .L_8016C194
.L_8016C190:
/* 8016C190 001690D0  3B 1E 00 F8 */	addi r24, r30, 0xf8
.L_8016C194:
/* 8016C194 001690D4  7F 05 C3 78 */	mr r5, r24
/* 8016C198 001690D8  7E C6 B3 78 */	mr r6, r22
/* 8016C19C 001690DC  38 61 00 08 */	addi r3, r1, 8
/* 8016C1A0 001690E0  38 82 A6 7C */	addi r4, r2, lbl_805189DC@sda21
/* 8016C1A4 001690E4  4C C6 31 82 */	crclr 6
/* 8016C1A8 001690E8  4B F5 B2 91 */	bl sprintf
/* 8016C1AC 001690EC  7F E3 FB 78 */	mr r3, r31
/* 8016C1B0 001690F0  38 81 00 08 */	addi r4, r1, 8
/* 8016C1B4 001690F4  48 00 02 FD */	bl openTextArc__Q24Game13BasePelletMgrFPc
/* 8016C1B8 001690F8  7C 7B 1B 79 */	or. r27, r3, r3
/* 8016C1BC 001690FC  40 82 00 1C */	bne .L_8016C1D8
/* 8016C1C0 00169100  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8016C1C4 00169104  38 BE 01 28 */	addi r5, r30, 0x128
/* 8016C1C8 00169108  38 C1 00 08 */	addi r6, r1, 8
/* 8016C1CC 0016910C  38 80 12 78 */	li r4, 0x1278
/* 8016C1D0 00169110  4C C6 31 82 */	crclr 6
/* 8016C1D4 00169114  4B EB E4 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016C1D8:
/* 8016C1D8 00169118  3B A0 00 00 */	li r29, 0
/* 8016C1DC 0016911C  3B 40 00 00 */	li r26, 0
/* 8016C1E0 00169120  7F BC EB 78 */	mr r28, r29
/* 8016C1E4 00169124  48 00 02 9C */	b .L_8016C480
.L_8016C1E8:
/* 8016C1E8 00169128  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8016C1EC 0016912C  2C 1A 00 00 */	cmpwi r26, 0
/* 8016C1F0 00169130  38 60 00 00 */	li r3, 0
/* 8016C1F4 00169134  7F 20 EA 14 */	add r25, r0, r29
/* 8016C1F8 00169138  41 80 00 14 */	blt .L_8016C20C
/* 8016C1FC 0016913C  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 8016C200 00169140  7C 1A 00 00 */	cmpw r26, r0
/* 8016C204 00169144  40 80 00 08 */	bge .L_8016C20C
/* 8016C208 00169148  38 60 00 01 */	li r3, 1
.L_8016C20C:
/* 8016C20C 0016914C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016C210 00169150  40 82 00 18 */	bne .L_8016C228
/* 8016C214 00169154  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8016C218 00169158  38 BE 00 3C */	addi r5, r30, 0x3c
/* 8016C21C 0016915C  38 80 11 49 */	li r4, 0x1149
/* 8016C220 00169160  4C C6 31 82 */	crclr 6
/* 8016C224 00169164  4B EB E4 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016C228:
/* 8016C228 00169168  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8016C22C 0016916C  7C 03 D0 AE */	lbzx r0, r3, r26
/* 8016C230 00169170  28 00 00 00 */	cmplwi r0, 0
/* 8016C234 00169174  41 82 02 40 */	beq .L_8016C474
/* 8016C238 00169178  B3 59 02 58 */	sth r26, 0x258(r25)
/* 8016C23C 0016917C  3A E0 00 00 */	li r23, 0
/* 8016C240 00169180  38 62 A6 74 */	addi r3, r2, lbl_805189D4@sda21
/* 8016C244 00169184  80 99 00 50 */	lwz r4, 0x50(r25)
/* 8016C248 00169188  4B F5 E4 79 */	bl strcmp
/* 8016C24C 0016918C  2C 03 00 00 */	cmpwi r3, 0
/* 8016C250 00169190  41 82 00 34 */	beq .L_8016C284
/* 8016C254 00169194  80 D9 00 50 */	lwz r6, 0x50(r25)
/* 8016C258 00169198  7F 05 C3 78 */	mr r5, r24
/* 8016C25C 0016919C  38 61 00 08 */	addi r3, r1, 8
/* 8016C260 001691A0  38 82 A6 7C */	addi r4, r2, lbl_805189DC@sda21
/* 8016C264 001691A4  4C C6 31 82 */	crclr 6
/* 8016C268 001691A8  4B F5 B1 D1 */	bl sprintf
/* 8016C26C 001691AC  38 61 00 08 */	addi r3, r1, 8
/* 8016C270 001691B0  38 80 00 01 */	li r4, 1
/* 8016C274 001691B4  38 A0 00 00 */	li r5, 0
/* 8016C278 001691B8  38 C0 00 01 */	li r6, 1
/* 8016C27C 001691BC  4B EA EE B5 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8016C280 001691C0  7C 77 1B 78 */	mr r23, r3
.L_8016C284:
/* 8016C284 001691C4  80 99 00 70 */	lwz r4, 0x70(r25)
/* 8016C288 001691C8  3A C0 00 00 */	li r22, 0
/* 8016C28C 001691CC  38 62 A6 74 */	addi r3, r2, lbl_805189D4@sda21
/* 8016C290 001691D0  4B F5 E4 31 */	bl strcmp
/* 8016C294 001691D4  2C 03 00 00 */	cmpwi r3, 0
/* 8016C298 001691D8  40 82 00 14 */	bne .L_8016C2AC
/* 8016C29C 001691DC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8016C2A0 001691E0  38 00 00 00 */	li r0, 0
/* 8016C2A4 001691E4  7C 03 E1 2E */	stwx r0, r3, r28
/* 8016C2A8 001691E8  48 00 01 28 */	b .L_8016C3D0
.L_8016C2AC:
/* 8016C2AC 001691EC  28 17 00 00 */	cmplwi r23, 0
/* 8016C2B0 001691F0  40 82 00 18 */	bne .L_8016C2C8
/* 8016C2B4 001691F4  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8016C2B8 001691F8  38 BE 01 3C */	addi r5, r30, 0x13c
/* 8016C2BC 001691FC  38 80 12 A8 */	li r4, 0x12a8
/* 8016C2C0 00169200  4C C6 31 82 */	crclr 6
/* 8016C2C4 00169204  4B EB E3 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016C2C8:
/* 8016C2C8 00169208  80 B9 00 70 */	lwz r5, 0x70(r25)
/* 8016C2CC 0016920C  38 61 00 08 */	addi r3, r1, 8
/* 8016C2D0 00169210  38 82 A6 84 */	addi r4, r2, lbl_805189E4@sda21
/* 8016C2D4 00169214  4C C6 31 82 */	crclr 6
/* 8016C2D8 00169218  4B F5 B1 61 */	bl sprintf
/* 8016C2DC 0016921C  38 61 00 08 */	addi r3, r1, 8
/* 8016C2E0 00169220  38 80 00 00 */	li r4, 0
/* 8016C2E4 00169224  4B EB 6D 35 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 8016C2E8 00169228  28 03 00 00 */	cmplwi r3, 0
/* 8016C2EC 0016922C  7C 76 1B 78 */	mr r22, r3
/* 8016C2F0 00169230  40 82 00 3C */	bne .L_8016C32C
/* 8016C2F4 00169234  7E E3 BB 78 */	mr r3, r23
/* 8016C2F8 00169238  38 81 00 08 */	addi r4, r1, 8
/* 8016C2FC 0016923C  81 97 00 00 */	lwz r12, 0(r23)
/* 8016C300 00169240  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016C304 00169244  7D 89 03 A6 */	mtctr r12
/* 8016C308 00169248  4E 80 04 21 */	bctrl 
/* 8016C30C 0016924C  7C 60 1B 78 */	mr r0, r3
/* 8016C310 00169250  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8016C314 00169254  7C 16 03 78 */	mr r22, r0
/* 8016C318 00169258  38 BE 01 50 */	addi r5, r30, 0x150
/* 8016C31C 0016925C  38 C1 00 08 */	addi r6, r1, 8
/* 8016C320 00169260  38 80 12 B2 */	li r4, 0x12b2
/* 8016C324 00169264  4C C6 31 82 */	crclr 6
/* 8016C328 00169268  4B EB E3 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016C32C:
/* 8016C32C 0016926C  88 19 02 5A */	lbz r0, 0x25a(r25)
/* 8016C330 00169270  28 00 00 00 */	cmplwi r0, 0
/* 8016C334 00169274  41 82 00 2C */	beq .L_8016C360
/* 8016C338 00169278  A0 19 02 44 */	lhz r0, 0x244(r25)
/* 8016C33C 0016927C  3C 60 21 02 */	lis r3, 0x21020010@ha
/* 8016C340 00169280  38 83 00 10 */	addi r4, r3, 0x21020010@l
/* 8016C344 00169284  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016C348 00169288  41 82 00 08 */	beq .L_8016C350
/* 8016C34C 0016928C  60 84 00 20 */	ori r4, r4, 0x20
.L_8016C350:
/* 8016C350 00169290  7E C3 B3 78 */	mr r3, r22
/* 8016C354 00169294  4B F0 35 41 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 8016C358 00169298  7C 76 1B 78 */	mr r22, r3
/* 8016C35C 0016929C  48 00 00 28 */	b .L_8016C384
.L_8016C360:
/* 8016C360 001692A0  A0 19 02 44 */	lhz r0, 0x244(r25)
/* 8016C364 001692A4  3C 60 20 02 */	lis r3, 0x20020010@ha
/* 8016C368 001692A8  38 83 00 10 */	addi r4, r3, 0x20020010@l
/* 8016C36C 001692AC  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016C370 001692B0  41 82 00 08 */	beq .L_8016C378
/* 8016C374 001692B4  60 84 00 20 */	ori r4, r4, 0x20
.L_8016C378:
/* 8016C378 001692B8  7E C3 B3 78 */	mr r3, r22
/* 8016C37C 001692BC  4B F0 35 19 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 8016C380 001692C0  7C 76 1B 78 */	mr r22, r3
.L_8016C384:
/* 8016C384 001692C4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8016C388 001692C8  7E C3 E1 2E */	stwx r22, r3, r28
/* 8016C38C 001692CC  A0 19 02 44 */	lhz r0, 0x244(r25)
/* 8016C390 001692D0  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016C394 001692D4  41 82 00 3C */	beq .L_8016C3D0
/* 8016C398 001692D8  38 80 00 00 */	li r4, 0
/* 8016C39C 001692DC  48 00 00 24 */	b .L_8016C3C0
.L_8016C3A0:
/* 8016C3A0 001692E0  80 76 00 80 */	lwz r3, 0x80(r22)
/* 8016C3A4 001692E4  54 80 13 BA */	rlwinm r0, r4, 2, 0xe, 0x1d
/* 8016C3A8 001692E8  38 84 00 01 */	addi r4, r4, 1
/* 8016C3AC 001692EC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8016C3B0 001692F0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8016C3B4 001692F4  54 00 05 1E */	rlwinm r0, r0, 0, 0x14, 0xf
/* 8016C3B8 001692F8  60 00 20 00 */	ori r0, r0, 0x2000
/* 8016C3BC 001692FC  90 03 00 0C */	stw r0, 0xc(r3)
.L_8016C3C0:
/* 8016C3C0 00169300  A0 16 00 7C */	lhz r0, 0x7c(r22)
/* 8016C3C4 00169304  54 83 04 3E */	clrlwi r3, r4, 0x10
/* 8016C3C8 00169308  7C 03 00 40 */	cmplw r3, r0
/* 8016C3CC 0016930C  41 80 FF D4 */	blt .L_8016C3A0
.L_8016C3D0:
/* 8016C3D0 00169310  80 D9 00 80 */	lwz r6, 0x80(r25)
/* 8016C3D4 00169314  28 06 00 00 */	cmplwi r6, 0
/* 8016C3D8 00169318  41 82 00 68 */	beq .L_8016C440
/* 8016C3DC 0016931C  80 B9 00 40 */	lwz r5, 0x40(r25)
/* 8016C3E0 00169320  38 61 00 08 */	addi r3, r1, 8
/* 8016C3E4 00169324  38 82 A6 88 */	addi r4, r2, lbl_805189E8@sda21
/* 8016C3E8 00169328  4C C6 31 82 */	crclr 6
/* 8016C3EC 0016932C  4B F5 B0 4D */	bl sprintf
/* 8016C3F0 00169330  7F 63 DB 78 */	mr r3, r27
/* 8016C3F4 00169334  7E C5 B3 78 */	mr r5, r22
/* 8016C3F8 00169338  7E E6 BB 78 */	mr r6, r23
/* 8016C3FC 0016933C  38 81 00 08 */	addi r4, r1, 8
/* 8016C400 00169340  38 E0 00 00 */	li r7, 0
/* 8016C404 00169344  48 2D 19 59 */	bl load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
/* 8016C408 00169348  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8016C40C 0016934C  7C 64 E1 2E */	stwx r3, r4, r28
/* 8016C410 00169350  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8016C414 00169354  7C 03 E0 2E */	lwzx r0, r3, r28
/* 8016C418 00169358  28 00 00 00 */	cmplwi r0, 0
/* 8016C41C 0016935C  40 82 00 24 */	bne .L_8016C440
/* 8016C420 00169360  7F 63 DB 78 */	mr r3, r27
/* 8016C424 00169364  7E C5 B3 78 */	mr r5, r22
/* 8016C428 00169368  7E E6 BB 78 */	mr r6, r23
/* 8016C42C 0016936C  38 81 00 08 */	addi r4, r1, 8
/* 8016C430 00169370  38 E0 00 00 */	li r7, 0
/* 8016C434 00169374  48 2D 19 29 */	bl load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
/* 8016C438 00169378  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8016C43C 0016937C  7C 64 E1 2E */	stwx r3, r4, r28
.L_8016C440:
/* 8016C440 00169380  80 D9 00 90 */	lwz r6, 0x90(r25)
/* 8016C444 00169384  28 06 00 00 */	cmplwi r6, 0
/* 8016C448 00169388  41 82 00 2C */	beq .L_8016C474
/* 8016C44C 0016938C  80 B9 00 40 */	lwz r5, 0x40(r25)
/* 8016C450 00169390  38 61 00 08 */	addi r3, r1, 8
/* 8016C454 00169394  38 82 A6 88 */	addi r4, r2, lbl_805189E8@sda21
/* 8016C458 00169398  4C C6 31 82 */	crclr 6
/* 8016C45C 0016939C  4B F5 AF DD */	bl sprintf
/* 8016C460 001693A0  7F 63 DB 78 */	mr r3, r27
/* 8016C464 001693A4  38 81 00 08 */	addi r4, r1, 8
/* 8016C468 001693A8  4B FC C4 DD */	bl load__15CollPartFactoryFP13JKRFileLoaderPc
/* 8016C46C 001693AC  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 8016C470 001693B0  7C 64 E1 2E */	stwx r3, r4, r28
.L_8016C474:
/* 8016C474 001693B4  3B BD 02 60 */	addi r29, r29, 0x260
/* 8016C478 001693B8  3B 9C 00 04 */	addi r28, r28, 4
/* 8016C47C 001693BC  3B 5A 00 01 */	addi r26, r26, 1
.L_8016C480:
/* 8016C480 001693C0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016C484 001693C4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016C488 001693C8  7C 1A 00 00 */	cmpw r26, r0
/* 8016C48C 001693CC  41 80 FD 5C */	blt .L_8016C1E8
/* 8016C490 001693D0  7F E3 FB 78 */	mr r3, r31
/* 8016C494 001693D4  7F 64 DB 78 */	mr r4, r27
/* 8016C498 001693D8  48 00 01 25 */	bl closeTextArc__Q24Game13BasePelletMgrFP10JKRArchive
/* 8016C49C 001693DC  BA C1 04 08 */	lmw r22, 0x408(r1)
/* 8016C4A0 001693E0  80 01 04 34 */	lwz r0, 0x434(r1)
/* 8016C4A4 001693E4  7C 08 03 A6 */	mtlr r0
/* 8016C4A8 001693E8  38 21 04 30 */	addi r1, r1, 0x430
/* 8016C4AC 001693EC  4E 80 00 20 */	blr 
.endfn load_texArc__Q24Game13BasePelletMgrFPc

.fn openTextArc__Q24Game13BasePelletMgrFPc, global
/* 8016C4B0 001693F0  94 21 FB F0 */	stwu r1, -0x410(r1)
/* 8016C4B4 001693F4  7C 08 02 A6 */	mflr r0
/* 8016C4B8 001693F8  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8016C4BC 001693FC  38 A0 00 00 */	li r5, 0
/* 8016C4C0 00169400  90 01 04 14 */	stw r0, 0x414(r1)
/* 8016C4C4 00169404  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8016C4C8 00169408  93 E1 04 0C */	stw r31, 0x40c(r1)
/* 8016C4CC 0016940C  7C 9F 23 78 */	mr r31, r4
/* 8016C4D0 00169410  80 03 01 58 */	lwz r0, 0x158(r3)
/* 8016C4D4 00169414  2C 00 00 00 */	cmpwi r0, 0
/* 8016C4D8 00169418  41 82 00 9C */	beq .L_8016C574
/* 8016C4DC 0016941C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8016C4E0 00169420  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 8016C4E4 00169424  2C 00 00 04 */	cmpwi r0, 4
/* 8016C4E8 00169428  41 82 00 6C */	beq .L_8016C554
/* 8016C4EC 0016942C  40 80 00 1C */	bge .L_8016C508
/* 8016C4F0 00169430  2C 00 00 00 */	cmpwi r0, 0
/* 8016C4F4 00169434  41 82 00 40 */	beq .L_8016C534
/* 8016C4F8 00169438  41 80 00 88 */	blt .L_8016C580
/* 8016C4FC 0016943C  2C 00 00 03 */	cmpwi r0, 3
/* 8016C500 00169440  40 80 00 80 */	bge .L_8016C580
/* 8016C504 00169444  48 00 00 50 */	b .L_8016C554
.L_8016C508:
/* 8016C508 00169448  2C 00 00 06 */	cmpwi r0, 6
/* 8016C50C 0016944C  41 82 00 48 */	beq .L_8016C554
/* 8016C510 00169450  40 80 00 70 */	bge .L_8016C580
/* 8016C514 00169454  3C 80 80 48 */	lis r4, lbl_8047E3F8@ha
/* 8016C518 00169458  38 61 02 08 */	addi r3, r1, 0x208
/* 8016C51C 0016945C  38 84 E3 F8 */	addi r4, r4, lbl_8047E3F8@l
/* 8016C520 00169460  38 A2 A6 68 */	addi r5, r2, lbl_805189C8@sda21
/* 8016C524 00169464  4C C6 31 82 */	crclr 6
/* 8016C528 00169468  4B F5 AF 11 */	bl sprintf
/* 8016C52C 0016946C  38 A1 02 08 */	addi r5, r1, 0x208
/* 8016C530 00169470  48 00 00 50 */	b .L_8016C580
.L_8016C534:
/* 8016C534 00169474  3C 80 80 48 */	lis r4, lbl_8047E3F8@ha
/* 8016C538 00169478  38 61 02 08 */	addi r3, r1, 0x208
/* 8016C53C 0016947C  38 84 E3 F8 */	addi r4, r4, lbl_8047E3F8@l
/* 8016C540 00169480  38 A2 A6 6C */	addi r5, r2, lbl_805189CC@sda21
/* 8016C544 00169484  4C C6 31 82 */	crclr 6
/* 8016C548 00169488  4B F5 AE F1 */	bl sprintf
/* 8016C54C 0016948C  38 A1 02 08 */	addi r5, r1, 0x208
/* 8016C550 00169490  48 00 00 30 */	b .L_8016C580
.L_8016C554:
/* 8016C554 00169494  3C 80 80 48 */	lis r4, lbl_8047E3F8@ha
/* 8016C558 00169498  38 61 02 08 */	addi r3, r1, 0x208
/* 8016C55C 0016949C  38 84 E3 F8 */	addi r4, r4, lbl_8047E3F8@l
/* 8016C560 001694A0  38 A2 A6 70 */	addi r5, r2, lbl_805189D0@sda21
/* 8016C564 001694A4  4C C6 31 82 */	crclr 6
/* 8016C568 001694A8  4B F5 AE D1 */	bl sprintf
/* 8016C56C 001694AC  38 A1 02 08 */	addi r5, r1, 0x208
/* 8016C570 001694B0  48 00 00 10 */	b .L_8016C580
.L_8016C574:
/* 8016C574 001694B4  3C 60 80 48 */	lis r3, lbl_8047E410@ha
/* 8016C578 001694B8  38 03 E4 10 */	addi r0, r3, lbl_8047E410@l
/* 8016C57C 001694BC  7C 05 03 78 */	mr r5, r0
.L_8016C580:
/* 8016C580 001694C0  7F E6 FB 78 */	mr r6, r31
/* 8016C584 001694C4  38 61 00 08 */	addi r3, r1, 8
/* 8016C588 001694C8  38 82 A6 88 */	addi r4, r2, lbl_805189E8@sda21
/* 8016C58C 001694CC  4C C6 31 82 */	crclr 6
/* 8016C590 001694D0  4B F5 AE A9 */	bl sprintf
/* 8016C594 001694D4  80 AD 88 2C */	lwz r5, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8016C598 001694D8  38 61 00 08 */	addi r3, r1, 8
/* 8016C59C 001694DC  38 80 00 01 */	li r4, 1
/* 8016C5A0 001694E0  38 C0 00 02 */	li r6, 2
/* 8016C5A4 001694E4  4B EA EB 8D */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8016C5A8 001694E8  80 01 04 14 */	lwz r0, 0x414(r1)
/* 8016C5AC 001694EC  83 E1 04 0C */	lwz r31, 0x40c(r1)
/* 8016C5B0 001694F0  7C 08 03 A6 */	mtlr r0
/* 8016C5B4 001694F4  38 21 04 10 */	addi r1, r1, 0x410
/* 8016C5B8 001694F8  4E 80 00 20 */	blr 
.endfn openTextArc__Q24Game13BasePelletMgrFPc

.fn closeTextArc__Q24Game13BasePelletMgrFP10JKRArchive, global
/* 8016C5BC 001694FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016C5C0 00169500  7C 08 02 A6 */	mflr r0
/* 8016C5C4 00169504  7C 83 23 78 */	mr r3, r4
/* 8016C5C8 00169508  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016C5CC 0016950C  81 84 00 00 */	lwz r12, 0(r4)
/* 8016C5D0 00169510  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8016C5D4 00169514  7D 89 03 A6 */	mtctr r12
/* 8016C5D8 00169518  4E 80 04 21 */	bctrl 
/* 8016C5DC 0016951C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016C5E0 00169520  7C 08 03 A6 */	mtlr r0
/* 8016C5E4 00169524  38 21 00 10 */	addi r1, r1, 0x10
/* 8016C5E8 00169528  4E 80 00 20 */	blr 
.endfn closeTextArc__Q24Game13BasePelletMgrFP10JKRArchive

.if version == 0
.fn useModelMgr__Q24Game13BasePelletMgrFiUl, global
/* 8016C5EC 0016952C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016C5F0 00169530  7C 08 02 A6 */	mflr r0
/* 8016C5F4 00169534  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016C5F8 00169538  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8016C5FC 0016953C  7C 7C 1B 78 */	mr r28, r3
/* 8016C600 00169540  7C 9D 23 78 */	mr r29, r4
/* 8016C604 00169544  7C BE 2B 78 */	mr r30, r5
/* 8016C608 00169548  3B E0 00 02 */	li r31, 2
/* 8016C60C 0016954C  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8016C610 00169550  28 06 00 00 */	cmplwi r6, 0
/* 8016C614 00169554  41 82 00 18 */	beq .L_8016C62C
/* 8016C618 00169558  80 66 00 58 */	lwz r3, 0x58(r6)
/* 8016C61C 0016955C  80 03 01 14 */	lwz r0, 0x134(r3)
/* 8016C620 00169560  2C 00 00 01 */	cmpwi r0, 1
/* 8016C624 00169564  40 82 00 08 */	bne .L_8016C62C
/* 8016C628 00169568  3B E0 00 01 */	li r31, 1
.L_8016C62C:
/* 8016C62C 0016956C  38 60 00 1C */	li r3, 0x1c
/* 8016C630 00169570  4B EB 78 75 */	bl __nw__FUl
/* 8016C634 00169574  7C 7B 1B 79 */	or. r27, r3, r3
/* 8016C638 00169578  41 82 00 80 */	beq .L_8016C6B8
/* 8016C63C 0016957C  38 60 00 14 */	li r3, 0x14
/* 8016C640 00169580  4B EB 78 65 */	bl __nw__FUl
/* 8016C644 00169584  7C 69 1B 79 */	or. r9, r3, r3
/* 8016C648 00169588  41 82 00 4C */	beq .L_8016C694
/* 8016C64C 0016958C  3C 60 80 4B */	lis r3, lbl_804B1AC0@ha
/* 8016C650 00169590  3C 80 80 4B */	lis r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@ha
/* 8016C654 00169594  38 E3 1A C0 */	addi r7, r3, lbl_804B1AC0@l
/* 8016C658 00169598  3C 60 80 4B */	lis r3, "__vt__52Delegate1<Q24Game13BasePelletMgr,PQ28SysShape5Model>"@ha
/* 8016C65C 0016959C  80 C7 00 00 */	lwz r6, 0(r7)
/* 8016C660 001695A0  38 84 16 BC */	addi r4, r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@l
/* 8016C664 001695A4  80 A7 00 04 */	lwz r5, 4(r7)
/* 8016C668 001695A8  38 03 1D 74 */	addi r0, r3, "__vt__52Delegate1<Q24Game13BasePelletMgr,PQ28SysShape5Model>"@l
/* 8016C66C 001695AC  80 67 00 08 */	lwz r3, 8(r7)
/* 8016C670 001695B0  90 C1 00 08 */	stw r6, 8(r1)
/* 8016C674 001695B4  90 89 00 00 */	stw r4, 0(r9)
/* 8016C678 001695B8  90 09 00 00 */	stw r0, 0(r9)
/* 8016C67C 001695BC  93 89 00 04 */	stw r28, 4(r9)
/* 8016C680 001695C0  90 C9 00 08 */	stw r6, 8(r9)
/* 8016C684 001695C4  90 A9 00 0C */	stw r5, 0xc(r9)
/* 8016C688 001695C8  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8016C68C 001695CC  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016C690 001695D0  90 69 00 10 */	stw r3, 0x10(r9)
.L_8016C694:
/* 8016C694 001695D4  80 9C 00 08 */	lwz r4, 8(r28)
/* 8016C698 001695D8  7F 63 DB 78 */	mr r3, r27
/* 8016C69C 001695DC  80 BC 00 0C */	lwz r5, 0xc(r28)
/* 8016C6A0 001695E0  7F A6 EB 78 */	mr r6, r29
/* 8016C6A4 001695E4  80 84 00 18 */	lwz r4, 0x18(r4)
/* 8016C6A8 001695E8  7F C7 F3 78 */	mr r7, r30
/* 8016C6AC 001695EC  7F E8 FB 78 */	mr r8, r31
/* 8016C6B0 001695F0  48 2B E4 51 */	bl "__ct__Q28SysShape8ModelMgrFiPP12J3DModelDataiUlUlP30IDelegate1<PQ28SysShape5Model>"
/* 8016C6B4 001695F4  7C 7B 1B 78 */	mr r27, r3
.L_8016C6B8:
/* 8016C6B8 001695F8  93 7C 00 48 */	stw r27, 0x48(r28)
/* 8016C6BC 001695FC  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8016C6C0 00169600  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016C6C4 00169604  7C 08 03 A6 */	mtlr r0
/* 8016C6C8 00169608  38 21 00 30 */	addi r1, r1, 0x30
/* 8016C6CC 0016960C  4E 80 00 20 */	blr 
.endfn useModelMgr__Q24Game13BasePelletMgrFiUl
.else
.fn useModelMgr__Q24Game13BasePelletMgrFiUl, global
/* 8016C5EC 0016952C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016C5F0 00169530  7C 08 02 A6 */	mflr r0
/* 8016C5F4 00169534  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016C5F8 00169538  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8016C5FC 0016953C  7C 7C 1B 78 */	mr r28, r3
/* 8016C600 00169540  7C 9D 23 78 */	mr r29, r4
/* 8016C604 00169544  7C BE 2B 78 */	mr r30, r5
/* 8016C608 00169548  3B E0 00 02 */	li r31, 2
/* 8016C60C 0016954C  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8016C610 00169550  28 06 00 00 */	cmplwi r6, 0
/* 8016C614 00169554  41 82 00 18 */	beq .L_8016C62C
/* 8016C618 00169558  80 66 00 58 */	lwz r3, 0x58(r6)
/* 8016C61C 0016955C  80 03 01 14 */	lwz r0, 0x114(r3)
/* 8016C620 00169560  2C 00 00 01 */	cmpwi r0, 1
/* 8016C624 00169564  40 82 00 08 */	bne .L_8016C62C
/* 8016C628 00169568  3B E0 00 01 */	li r31, 1
.L_8016C62C:
/* 8016C62C 0016956C  38 60 00 1C */	li r3, 0x1c
/* 8016C630 00169570  4B EB 78 75 */	bl __nw__FUl
/* 8016C634 00169574  7C 7B 1B 79 */	or. r27, r3, r3
/* 8016C638 00169578  41 82 00 80 */	beq .L_8016C6B8
/* 8016C63C 0016957C  38 60 00 14 */	li r3, 0x14
/* 8016C640 00169580  4B EB 78 65 */	bl __nw__FUl
/* 8016C644 00169584  7C 69 1B 79 */	or. r9, r3, r3
/* 8016C648 00169588  41 82 00 4C */	beq .L_8016C694
/* 8016C64C 0016958C  3C 60 80 4B */	lis r3, lbl_804B1AC0@ha
/* 8016C650 00169590  3C 80 80 4B */	lis r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@ha
/* 8016C654 00169594  38 E3 1A C0 */	addi r7, r3, lbl_804B1AC0@l
/* 8016C658 00169598  3C 60 80 4B */	lis r3, "__vt__52Delegate1<Q24Game13BasePelletMgr,PQ28SysShape5Model>"@ha
/* 8016C65C 0016959C  80 C7 00 00 */	lwz r6, 0(r7)
/* 8016C660 001695A0  38 84 16 BC */	addi r4, r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@l
/* 8016C664 001695A4  80 A7 00 04 */	lwz r5, 4(r7)
/* 8016C668 001695A8  38 03 1D 74 */	addi r0, r3, "__vt__52Delegate1<Q24Game13BasePelletMgr,PQ28SysShape5Model>"@l
/* 8016C66C 001695AC  80 67 00 08 */	lwz r3, 8(r7)
/* 8016C670 001695B0  90 C1 00 08 */	stw r6, 8(r1)
/* 8016C674 001695B4  90 89 00 00 */	stw r4, 0(r9)
/* 8016C678 001695B8  90 09 00 00 */	stw r0, 0(r9)
/* 8016C67C 001695BC  93 89 00 04 */	stw r28, 4(r9)
/* 8016C680 001695C0  90 C9 00 08 */	stw r6, 8(r9)
/* 8016C684 001695C4  90 A9 00 0C */	stw r5, 0xc(r9)
/* 8016C688 001695C8  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8016C68C 001695CC  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016C690 001695D0  90 69 00 10 */	stw r3, 0x10(r9)
.L_8016C694:
/* 8016C694 001695D4  80 9C 00 08 */	lwz r4, 8(r28)
/* 8016C698 001695D8  7F 63 DB 78 */	mr r3, r27
/* 8016C69C 001695DC  80 BC 00 0C */	lwz r5, 0xc(r28)
/* 8016C6A0 001695E0  7F A6 EB 78 */	mr r6, r29
/* 8016C6A4 001695E4  80 84 00 18 */	lwz r4, 0x18(r4)
/* 8016C6A8 001695E8  7F C7 F3 78 */	mr r7, r30
/* 8016C6AC 001695EC  7F E8 FB 78 */	mr r8, r31
/* 8016C6B0 001695F0  48 2B E4 51 */	bl "__ct__Q28SysShape8ModelMgrFiPP12J3DModelDataiUlUlP30IDelegate1<PQ28SysShape5Model>"
/* 8016C6B4 001695F4  7C 7B 1B 78 */	mr r27, r3
.L_8016C6B8:
/* 8016C6B8 001695F8  93 7C 00 48 */	stw r27, 0x48(r28)
/* 8016C6BC 001695FC  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8016C6C0 00169600  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016C6C4 00169604  7C 08 03 A6 */	mtlr r0
/* 8016C6C8 00169608  38 21 00 30 */	addi r1, r1, 0x30
/* 8016C6CC 0016960C  4E 80 00 20 */	blr 
.endfn useModelMgr__Q24Game13BasePelletMgrFiUl
.endif

.fn createModelCallback__Q24Game13BasePelletMgrFPQ28SysShape5Model, weak
/* 8016C6D0 00169610  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016C6D4 00169614  7C 08 02 A6 */	mflr r0
/* 8016C6D8 00169618  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016C6DC 0016961C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016C6E0 00169620  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8016C6E4 00169624  7D 89 03 A6 */	mtctr r12
/* 8016C6E8 00169628  4E 80 04 21 */	bctrl 
/* 8016C6EC 0016962C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016C6F0 00169630  7C 08 03 A6 */	mtlr r0
/* 8016C6F4 00169634  38 21 00 10 */	addi r1, r1, 0x10
/* 8016C6F8 00169638  4E 80 00 20 */	blr 
.endfn createModelCallback__Q24Game13BasePelletMgrFPQ28SysShape5Model

.fn onCreateModel__Q24Game13BasePelletMgrFPQ28SysShape5Model, weak
/* 8016C6FC 0016963C  4E 80 00 20 */	blr 
.endfn onCreateModel__Q24Game13BasePelletMgrFPQ28SysShape5Model

.if version == 0
.fn createShape__Q24Game13BasePelletMgrFii, global
/* 8016C700 00169640  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016C704 00169644  7C 08 02 A6 */	mflr r0
/* 8016C708 00169648  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016C70C 0016964C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016C710 00169650  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016C714 00169654  3B C0 00 02 */	li r30, 2
/* 8016C718 00169658  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016C71C 0016965C  7C 7D 1B 78 */	mr r29, r3
/* 8016C720 00169660  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8016C724 00169664  28 06 00 00 */	cmplwi r6, 0
/* 8016C728 00169668  41 82 00 18 */	beq .L_8016C740
/* 8016C72C 0016966C  80 66 00 58 */	lwz r3, 0x58(r6)
/* 8016C730 00169670  80 03 01 14 */	lwz r0, 0x134(r3)
/* 8016C734 00169674  2C 00 00 01 */	cmpwi r0, 1
/* 8016C738 00169678  40 82 00 08 */	bne .L_8016C740
/* 8016C73C 0016967C  3B C0 00 01 */	li r30, 1
.L_8016C740:
/* 8016C740 00169680  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 8016C744 00169684  28 03 00 00 */	cmplwi r3, 0
/* 8016C748 00169688  41 82 00 10 */	beq .L_8016C758
/* 8016C74C 0016968C  48 2B E6 B1 */	bl createModel__Q28SysShape8ModelMgrFii
/* 8016C750 00169690  7C 7E 1B 78 */	mr r30, r3
/* 8016C754 00169694  48 00 00 70 */	b .L_8016C7C4
.L_8016C758:
/* 8016C758 00169698  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 8016C75C 0016969C  54 9F 10 3A */	slwi r31, r4, 2
/* 8016C760 001696A0  7C 03 F8 2E */	lwzx r0, r3, r31
/* 8016C764 001696A4  28 00 00 00 */	cmplwi r0, 0
/* 8016C768 001696A8  40 82 00 24 */	bne .L_8016C78C
/* 8016C76C 001696AC  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016C770 001696B0  3C A0 80 48 */	lis r5, lbl_8047E47C@ha
/* 8016C774 001696B4  7C 86 23 78 */	mr r6, r4
/* 8016C778 001696B8  38 80 13 C5 */	li r4, 0x13c5
/* 8016C77C 001696BC  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016C780 001696C0  38 A5 E4 7C */	addi r5, r5, lbl_8047E47C@l
/* 8016C784 001696C4  4C C6 31 82 */	crclr 6
/* 8016C788 001696C8  4B EB DE B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016C78C:
/* 8016C78C 001696CC  38 60 00 14 */	li r3, 0x14
/* 8016C790 001696D0  4B EB 77 15 */	bl __nw__FUl
/* 8016C794 001696D4  7C 64 1B 79 */	or. r4, r3, r3
/* 8016C798 001696D8  41 82 00 1C */	beq .L_8016C7B4
/* 8016C79C 001696DC  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 8016C7A0 001696E0  7F C6 F3 78 */	mr r6, r30
/* 8016C7A4 001696E4  38 A0 00 00 */	li r5, 0
/* 8016C7A8 001696E8  7C 84 F8 2E */	lwzx r4, r4, r31
/* 8016C7AC 001696EC  48 2D 1A 2D */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 8016C7B0 001696F0  7C 64 1B 78 */	mr r4, r3
.L_8016C7B4:
/* 8016C7B4 001696F4  80 64 00 08 */	lwz r3, 8(r4)
/* 8016C7B8 001696F8  7C 9E 23 78 */	mr r30, r4
/* 8016C7BC 001696FC  38 80 00 00 */	li r4, 0
/* 8016C7C0 00169700  4B EF 9F A9 */	bl newDifferedTexMtx__8J3DModelF14J3DTexDiffFlag
.L_8016C7C4:
/* 8016C7C4 00169704  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016C7C8 00169708  7F C3 F3 78 */	mr r3, r30
/* 8016C7CC 0016970C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016C7D0 00169710  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016C7D4 00169714  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016C7D8 00169718  7C 08 03 A6 */	mtlr r0
/* 8016C7DC 0016971C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016C7E0 00169720  4E 80 00 20 */	blr 
.endfn createShape__Q24Game13BasePelletMgrFii
.else
.fn createShape__Q24Game13BasePelletMgrFii, global
/* 8016C700 00169640  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016C704 00169644  7C 08 02 A6 */	mflr r0
/* 8016C708 00169648  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016C70C 0016964C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016C710 00169650  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016C714 00169654  3B C0 00 02 */	li r30, 2
/* 8016C718 00169658  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016C71C 0016965C  7C 7D 1B 78 */	mr r29, r3
/* 8016C720 00169660  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8016C724 00169664  28 06 00 00 */	cmplwi r6, 0
/* 8016C728 00169668  41 82 00 18 */	beq .L_8016C740
/* 8016C72C 0016966C  80 66 00 58 */	lwz r3, 0x58(r6)
/* 8016C730 00169670  80 03 01 14 */	lwz r0, 0x114(r3)
/* 8016C734 00169674  2C 00 00 01 */	cmpwi r0, 1
/* 8016C738 00169678  40 82 00 08 */	bne .L_8016C740
/* 8016C73C 0016967C  3B C0 00 01 */	li r30, 1
.L_8016C740:
/* 8016C740 00169680  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 8016C744 00169684  28 03 00 00 */	cmplwi r3, 0
/* 8016C748 00169688  41 82 00 10 */	beq .L_8016C758
/* 8016C74C 0016968C  48 2B E6 B1 */	bl createModel__Q28SysShape8ModelMgrFii
/* 8016C750 00169690  7C 7E 1B 78 */	mr r30, r3
/* 8016C754 00169694  48 00 00 70 */	b .L_8016C7C4
.L_8016C758:
/* 8016C758 00169698  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 8016C75C 0016969C  54 9F 10 3A */	slwi r31, r4, 2
/* 8016C760 001696A0  7C 03 F8 2E */	lwzx r0, r3, r31
/* 8016C764 001696A4  28 00 00 00 */	cmplwi r0, 0
/* 8016C768 001696A8  40 82 00 24 */	bne .L_8016C78C
/* 8016C76C 001696AC  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016C770 001696B0  3C A0 80 48 */	lis r5, lbl_8047E47C@ha
/* 8016C774 001696B4  7C 86 23 78 */	mr r6, r4
/* 8016C778 001696B8  38 80 13 C5 */	li r4, 0x13c5
/* 8016C77C 001696BC  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016C780 001696C0  38 A5 E4 7C */	addi r5, r5, lbl_8047E47C@l
/* 8016C784 001696C4  4C C6 31 82 */	crclr 6
/* 8016C788 001696C8  4B EB DE B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016C78C:
/* 8016C78C 001696CC  38 60 00 14 */	li r3, 0x14
/* 8016C790 001696D0  4B EB 77 15 */	bl __nw__FUl
/* 8016C794 001696D4  7C 64 1B 79 */	or. r4, r3, r3
/* 8016C798 001696D8  41 82 00 1C */	beq .L_8016C7B4
/* 8016C79C 001696DC  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 8016C7A0 001696E0  7F C6 F3 78 */	mr r6, r30
/* 8016C7A4 001696E4  38 A0 00 00 */	li r5, 0
/* 8016C7A8 001696E8  7C 84 F8 2E */	lwzx r4, r4, r31
/* 8016C7AC 001696EC  48 2D 1A 2D */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 8016C7B0 001696F0  7C 64 1B 78 */	mr r4, r3
.L_8016C7B4:
/* 8016C7B4 001696F4  80 64 00 08 */	lwz r3, 8(r4)
/* 8016C7B8 001696F8  7C 9E 23 78 */	mr r30, r4
/* 8016C7BC 001696FC  38 80 00 00 */	li r4, 0
/* 8016C7C0 00169700  4B EF 9F A9 */	bl newDifferedTexMtx__8J3DModelF14J3DTexDiffFlag
.L_8016C7C4:
/* 8016C7C4 00169704  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016C7C8 00169708  7F C3 F3 78 */	mr r3, r30
/* 8016C7CC 0016970C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016C7D0 00169710  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016C7D4 00169714  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016C7D8 00169718  7C 08 03 A6 */	mtlr r0
/* 8016C7DC 0016971C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016C7E0 00169720  4E 80 00 20 */	blr 
.endfn createShape__Q24Game13BasePelletMgrFii
.endif

.fn setCollTree__Q24Game13BasePelletMgrFPQ24Game6Pelleti, global
/* 8016C7E4 00169724  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016C7E8 00169728  7C 08 02 A6 */	mflr r0
/* 8016C7EC 0016972C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016C7F0 00169730  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8016C7F4 00169734  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8016C7F8 00169738  7C 9E 23 78 */	mr r30, r4
/* 8016C7FC 0016973C  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8016C800 00169740  7C 7D 1B 78 */	mr r29, r3
/* 8016C804 00169744  80 84 01 74 */	lwz r4, 0x174(r4)
/* 8016C808 00169748  28 04 00 00 */	cmplwi r4, 0
/* 8016C80C 0016974C  40 82 00 B4 */	bne .L_8016C8C0
/* 8016C810 00169750  80 7E 03 58 */	lwz r3, 0x358(r30)
/* 8016C814 00169754  81 83 00 00 */	lwz r12, 0(r3)
/* 8016C818 00169758  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8016C81C 0016975C  7D 89 03 A6 */	mtctr r12
/* 8016C820 00169760  4E 80 04 21 */	bctrl 
/* 8016C824 00169764  80 BE 03 5C */	lwz r5, 0x35c(r30)
/* 8016C828 00169768  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 8016C82C 0016976C  C4 44 41 E4 */	lfsu f2, "zero__10Vector3<f>"@l(r4)
/* 8016C830 00169770  7C 7F 1B 78 */	mr r31, r3
/* 8016C834 00169774  C0 65 00 B0 */	lfs f3, 0xb0(r5)
/* 8016C838 00169778  C0 24 00 04 */	lfs f1, 4(r4)
/* 8016C83C 0016977C  C0 04 00 08 */	lfs f0, 8(r4)
/* 8016C840 00169780  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8016C844 00169784  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8016C848 00169788  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8016C84C 0016978C  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8016C850 00169790  80 7E 03 58 */	lwz r3, 0x358(r30)
/* 8016C854 00169794  81 83 00 00 */	lwz r12, 0(r3)
/* 8016C858 00169798  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016C85C 0016979C  7D 89 03 A6 */	mtctr r12
/* 8016C860 001697A0  4E 80 04 21 */	bctrl 
/* 8016C864 001697A4  7C 65 1B 78 */	mr r5, r3
/* 8016C868 001697A8  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8016C86C 001697AC  7F E4 FB 78 */	mr r4, r31
/* 8016C870 001697B0  38 C1 00 24 */	addi r6, r1, 0x24
/* 8016C874 001697B4  38 FD 00 18 */	addi r7, r29, 0x18
/* 8016C878 001697B8  4B FC 78 39 */	bl createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
/* 8016C87C 001697BC  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8016C880 001697C0  83 E3 00 00 */	lwz r31, 0(r3)
/* 8016C884 001697C4  28 1F 00 00 */	cmplwi r31, 0
/* 8016C888 001697C8  41 82 00 98 */	beq .L_8016C920
/* 8016C88C 001697CC  80 9E 03 58 */	lwz r4, 0x358(r30)
/* 8016C890 001697D0  38 61 00 08 */	addi r3, r1, 8
/* 8016C894 001697D4  81 84 00 00 */	lwz r12, 0(r4)
/* 8016C898 001697D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016C89C 001697DC  7D 89 03 A6 */	mtctr r12
/* 8016C8A0 001697E0  4E 80 04 21 */	bctrl 
/* 8016C8A4 001697E4  C0 01 00 08 */	lfs f0, 8(r1)
/* 8016C8A8 001697E8  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8016C8AC 001697EC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8016C8B0 001697F0  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8016C8B4 001697F4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8016C8B8 001697F8  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8016C8BC 001697FC  48 00 00 64 */	b .L_8016C920
.L_8016C8C0:
/* 8016C8C0 00169800  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 8016C8C4 00169804  54 A0 10 3A */	slwi r0, r5, 2
/* 8016C8C8 00169808  7C A3 00 2E */	lwzx r5, r3, r0
/* 8016C8CC 0016980C  28 05 00 00 */	cmplwi r5, 0
/* 8016C8D0 00169810  41 82 00 14 */	beq .L_8016C8E4
/* 8016C8D4 00169814  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8016C8D8 00169818  38 DD 00 18 */	addi r6, r29, 0x18
/* 8016C8DC 0016981C  4B FC 77 91 */	bl createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
/* 8016C8E0 00169820  48 00 00 40 */	b .L_8016C920
.L_8016C8E4:
/* 8016C8E4 00169824  80 BE 03 5C */	lwz r5, 0x35c(r30)
/* 8016C8E8 00169828  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8016C8EC 0016982C  C4 43 41 E4 */	lfsu f2, "zero__10Vector3<f>"@l(r3)
/* 8016C8F0 00169830  38 C1 00 14 */	addi r6, r1, 0x14
/* 8016C8F4 00169834  C0 65 00 A0 */	lfs f3, 0xa0(r5)
/* 8016C8F8 00169838  38 FD 00 18 */	addi r7, r29, 0x18
/* 8016C8FC 0016983C  C0 23 00 04 */	lfs f1, 4(r3)
/* 8016C900 00169840  38 A0 00 00 */	li r5, 0
/* 8016C904 00169844  C0 03 00 08 */	lfs f0, 8(r3)
/* 8016C908 00169848  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8016C90C 0016984C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8016C910 00169850  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016C914 00169854  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8016C918 00169858  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8016C91C 0016985C  4B FC 77 95 */	bl createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
.L_8016C920:
/* 8016C920 00169860  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016C924 00169864  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8016C928 00169868  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8016C92C 0016986C  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8016C930 00169870  7C 08 03 A6 */	mtlr r0
/* 8016C934 00169874  38 21 00 50 */	addi r1, r1, 0x50
/* 8016C938 00169878  4E 80 00 20 */	blr 
.endfn setCollTree__Q24Game13BasePelletMgrFPQ24Game6Pelleti

.fn generatorNewPelletParm__Q24Game13BasePelletMgrFv, global
/* 8016C93C 0016987C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016C940 00169880  7C 08 02 A6 */	mflr r0
/* 8016C944 00169884  38 60 00 04 */	li r3, 4
/* 8016C948 00169888  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016C94C 0016988C  4B EB 75 59 */	bl __nw__FUl
/* 8016C950 00169890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016C954 00169894  7C 08 03 A6 */	mtlr r0
/* 8016C958 00169898  38 21 00 10 */	addi r1, r1, 0x10
/* 8016C95C 0016989C  4E 80 00 20 */	blr 
.endfn generatorNewPelletParm__Q24Game13BasePelletMgrFv

.fn generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm, global
/* 8016C960 001698A0  38 60 00 00 */	li r3, 0
/* 8016C964 001698A4  4E 80 00 20 */	blr 
.endfn generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm

.fn __ct__Q24Game14PelletIteratorFv, global
/* 8016C968 001698A8  38 00 00 00 */	li r0, 0
/* 8016C96C 001698AC  90 03 00 00 */	stw r0, 0(r3)
/* 8016C970 001698B0  90 03 00 08 */	stw r0, 8(r3)
/* 8016C974 001698B4  90 03 00 0C */	stw r0, 0xc(r3)
/* 8016C978 001698B8  90 03 00 04 */	stw r0, 4(r3)
/* 8016C97C 001698BC  4E 80 00 20 */	blr 
.endfn __ct__Q24Game14PelletIteratorFv

.fn first__Q24Game14PelletIteratorFv, global
/* 8016C980 001698C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016C984 001698C4  7C 08 02 A6 */	mflr r0
/* 8016C988 001698C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016C98C 001698CC  80 8D 93 20 */	lwz r4, pelletMgr__4Game@sda21(r13)
/* 8016C990 001698D0  80 04 00 30 */	lwz r0, 0x30(r4)
/* 8016C994 001698D4  90 03 00 08 */	stw r0, 8(r3)
/* 8016C998 001698D8  80 83 00 08 */	lwz r4, 8(r3)
/* 8016C99C 001698DC  28 04 00 00 */	cmplwi r4, 0
/* 8016C9A0 001698E0  41 82 00 10 */	beq .L_8016C9B0
/* 8016C9A4 001698E4  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8016C9A8 001698E8  90 03 00 04 */	stw r0, 4(r3)
/* 8016C9AC 001698EC  48 00 00 0C */	b .L_8016C9B8
.L_8016C9B0:
/* 8016C9B0 001698F0  38 00 00 00 */	li r0, 0
/* 8016C9B4 001698F4  90 03 00 04 */	stw r0, 4(r3)
.L_8016C9B8:
/* 8016C9B8 001698F8  48 00 01 4D */	bl setFirst__Q24Game14PelletIteratorFv
/* 8016C9BC 001698FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016C9C0 00169900  7C 08 03 A6 */	mtlr r0
/* 8016C9C4 00169904  38 21 00 10 */	addi r1, r1, 0x10
/* 8016C9C8 00169908  4E 80 00 20 */	blr 
.endfn first__Q24Game14PelletIteratorFv

.fn __ml__Q24Game14PelletIteratorFv, global
/* 8016C9CC 0016990C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016C9D0 00169910  7C 08 02 A6 */	mflr r0
/* 8016C9D4 00169914  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016C9D8 00169918  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016C9DC 0016991C  7C 7F 1B 78 */	mr r31, r3
/* 8016C9E0 00169920  80 03 00 04 */	lwz r0, 4(r3)
/* 8016C9E4 00169924  28 00 00 00 */	cmplwi r0, 0
/* 8016C9E8 00169928  40 82 00 20 */	bne .L_8016CA08
/* 8016C9EC 0016992C  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016C9F0 00169930  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016C9F4 00169934  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016C9F8 00169938  38 80 14 4D */	li r4, 0x144d
/* 8016C9FC 0016993C  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016CA00 00169940  4C C6 31 82 */	crclr 6
/* 8016CA04 00169944  4B EB DC 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016CA08:
/* 8016CA08 00169948  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CA0C 0016994C  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8016CA10 00169950  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CA14 00169954  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8016CA18 00169958  7D 89 03 A6 */	mtctr r12
/* 8016CA1C 0016995C  4E 80 04 21 */	bctrl 
/* 8016CA20 00169960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CA24 00169964  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016CA28 00169968  7C 08 03 A6 */	mtlr r0
/* 8016CA2C 0016996C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CA30 00169970  4E 80 00 20 */	blr 
.endfn __ml__Q24Game14PelletIteratorFv

.fn next__Q24Game14PelletIteratorFv, global
/* 8016CA34 00169974  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CA38 00169978  7C 08 02 A6 */	mflr r0
/* 8016CA3C 0016997C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CA40 00169980  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016CA44 00169984  7C 7F 1B 78 */	mr r31, r3
/* 8016CA48 00169988  80 03 00 00 */	lwz r0, 0(r3)
/* 8016CA4C 0016998C  28 00 00 00 */	cmplwi r0, 0
/* 8016CA50 00169990  40 82 00 24 */	bne .L_8016CA74
/* 8016CA54 00169994  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CA58 00169998  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8016CA5C 0016999C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CA60 001699A0  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8016CA64 001699A4  7D 89 03 A6 */	mtctr r12
/* 8016CA68 001699A8  4E 80 04 21 */	bctrl 
/* 8016CA6C 001699AC  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8016CA70 001699B0  48 00 00 1C */	b .L_8016CA8C
.L_8016CA74:
/* 8016CA74 001699B4  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016CA78 001699B8  38 80 14 56 */	li r4, 0x1456
/* 8016CA7C 001699BC  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016CA80 001699C0  38 A2 A6 90 */	addi r5, r2, lbl_805189F0@sda21
/* 8016CA84 001699C4  4C C6 31 82 */	crclr 6
/* 8016CA88 001699C8  4B EB DB B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016CA8C:
/* 8016CA8C 001699CC  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CA90 001699D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CA94 001699D4  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8016CA98 001699D8  7D 89 03 A6 */	mtctr r12
/* 8016CA9C 001699DC  4E 80 04 21 */	bctrl 
/* 8016CAA0 001699E0  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8016CAA4 001699E4  7C 00 18 40 */	cmplw r0, r3
/* 8016CAA8 001699E8  40 82 00 38 */	bne .L_8016CAE0
/* 8016CAAC 001699EC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CAB0 001699F0  80 03 00 04 */	lwz r0, 4(r3)
/* 8016CAB4 001699F4  90 1F 00 08 */	stw r0, 8(r31)
/* 8016CAB8 001699F8  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CABC 001699FC  28 03 00 00 */	cmplwi r3, 0
/* 8016CAC0 00169A00  41 82 00 18 */	beq .L_8016CAD8
/* 8016CAC4 00169A04  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016CAC8 00169A08  7F E3 FB 78 */	mr r3, r31
/* 8016CACC 00169A0C  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CAD0 00169A10  48 00 00 35 */	bl setFirst__Q24Game14PelletIteratorFv
/* 8016CAD4 00169A14  48 00 00 0C */	b .L_8016CAE0
.L_8016CAD8:
/* 8016CAD8 00169A18  38 00 00 00 */	li r0, 0
/* 8016CADC 00169A1C  90 1F 00 04 */	stw r0, 4(r31)
.L_8016CAE0:
/* 8016CAE0 00169A20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CAE4 00169A24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016CAE8 00169A28  7C 08 03 A6 */	mtlr r0
/* 8016CAEC 00169A2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CAF0 00169A30  4E 80 00 20 */	blr 
.endfn next__Q24Game14PelletIteratorFv

.fn isDone__Q24Game14PelletIteratorFv, global
/* 8016CAF4 00169A34  80 03 00 04 */	lwz r0, 4(r3)
/* 8016CAF8 00169A38  7C 00 00 34 */	cntlzw r0, r0
/* 8016CAFC 00169A3C  54 03 D9 7E */	srwi r3, r0, 5
/* 8016CB00 00169A40  4E 80 00 20 */	blr 
.endfn isDone__Q24Game14PelletIteratorFv

.fn setFirst__Q24Game14PelletIteratorFv, global
/* 8016CB04 00169A44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CB08 00169A48  7C 08 02 A6 */	mflr r0
/* 8016CB0C 00169A4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CB10 00169A50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016CB14 00169A54  7C 7F 1B 78 */	mr r31, r3
/* 8016CB18 00169A58  80 63 00 04 */	lwz r3, 4(r3)
/* 8016CB1C 00169A5C  28 03 00 00 */	cmplwi r3, 0
/* 8016CB20 00169A60  41 82 03 18 */	beq .L_8016CE38
/* 8016CB24 00169A64  80 1F 00 00 */	lwz r0, 0(r31)
/* 8016CB28 00169A68  28 00 00 00 */	cmplwi r0, 0
/* 8016CB2C 00169A6C  40 82 00 1C */	bne .L_8016CB48
/* 8016CB30 00169A70  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CB34 00169A74  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 8016CB38 00169A78  7D 89 03 A6 */	mtctr r12
/* 8016CB3C 00169A7C  4E 80 04 21 */	bctrl 
/* 8016CB40 00169A80  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8016CB44 00169A84  48 00 00 1C */	b .L_8016CB60
.L_8016CB48:
/* 8016CB48 00169A88  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016CB4C 00169A8C  38 80 14 71 */	li r4, 0x1471
/* 8016CB50 00169A90  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016CB54 00169A94  38 A2 A6 90 */	addi r5, r2, lbl_805189F0@sda21
/* 8016CB58 00169A98  4C C6 31 82 */	crclr 6
/* 8016CB5C 00169A9C  4B EB DA E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016CB60:
/* 8016CB60 00169AA0  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CB64 00169AA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CB68 00169AA8  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8016CB6C 00169AAC  7D 89 03 A6 */	mtctr r12
/* 8016CB70 00169AB0  4E 80 04 21 */	bctrl 
/* 8016CB74 00169AB4  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8016CB78 00169AB8  7C 00 18 40 */	cmplw r0, r3
/* 8016CB7C 00169ABC  40 82 02 C4 */	bne .L_8016CE40
/* 8016CB80 00169AC0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CB84 00169AC4  80 03 00 04 */	lwz r0, 4(r3)
/* 8016CB88 00169AC8  90 1F 00 08 */	stw r0, 8(r31)
/* 8016CB8C 00169ACC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CB90 00169AD0  28 03 00 00 */	cmplwi r3, 0
/* 8016CB94 00169AD4  41 82 02 98 */	beq .L_8016CE2C
/* 8016CB98 00169AD8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016CB9C 00169ADC  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CBA0 00169AE0  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CBA4 00169AE4  28 03 00 00 */	cmplwi r3, 0
/* 8016CBA8 00169AE8  41 82 02 78 */	beq .L_8016CE20
/* 8016CBAC 00169AEC  80 1F 00 00 */	lwz r0, 0(r31)
/* 8016CBB0 00169AF0  28 00 00 00 */	cmplwi r0, 0
/* 8016CBB4 00169AF4  40 82 00 1C */	bne .L_8016CBD0
/* 8016CBB8 00169AF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CBBC 00169AFC  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 8016CBC0 00169B00  7D 89 03 A6 */	mtctr r12
/* 8016CBC4 00169B04  4E 80 04 21 */	bctrl 
/* 8016CBC8 00169B08  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8016CBCC 00169B0C  48 00 00 1C */	b .L_8016CBE8
.L_8016CBD0:
/* 8016CBD0 00169B10  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016CBD4 00169B14  38 80 14 71 */	li r4, 0x1471
/* 8016CBD8 00169B18  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016CBDC 00169B1C  38 A2 A6 90 */	addi r5, r2, lbl_805189F0@sda21
/* 8016CBE0 00169B20  4C C6 31 82 */	crclr 6
/* 8016CBE4 00169B24  4B EB DA 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016CBE8:
/* 8016CBE8 00169B28  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CBEC 00169B2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CBF0 00169B30  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8016CBF4 00169B34  7D 89 03 A6 */	mtctr r12
/* 8016CBF8 00169B38  4E 80 04 21 */	bctrl 
/* 8016CBFC 00169B3C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8016CC00 00169B40  7C 00 18 40 */	cmplw r0, r3
/* 8016CC04 00169B44  40 82 02 3C */	bne .L_8016CE40
/* 8016CC08 00169B48  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CC0C 00169B4C  80 03 00 04 */	lwz r0, 4(r3)
/* 8016CC10 00169B50  90 1F 00 08 */	stw r0, 8(r31)
/* 8016CC14 00169B54  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CC18 00169B58  28 03 00 00 */	cmplwi r3, 0
/* 8016CC1C 00169B5C  41 82 01 F8 */	beq .L_8016CE14
/* 8016CC20 00169B60  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016CC24 00169B64  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CC28 00169B68  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CC2C 00169B6C  28 03 00 00 */	cmplwi r3, 0
/* 8016CC30 00169B70  41 82 01 D8 */	beq .L_8016CE08
/* 8016CC34 00169B74  80 1F 00 00 */	lwz r0, 0(r31)
/* 8016CC38 00169B78  28 00 00 00 */	cmplwi r0, 0
/* 8016CC3C 00169B7C  40 82 00 1C */	bne .L_8016CC58
/* 8016CC40 00169B80  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CC44 00169B84  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 8016CC48 00169B88  7D 89 03 A6 */	mtctr r12
/* 8016CC4C 00169B8C  4E 80 04 21 */	bctrl 
/* 8016CC50 00169B90  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8016CC54 00169B94  48 00 00 1C */	b .L_8016CC70
.L_8016CC58:
/* 8016CC58 00169B98  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016CC5C 00169B9C  38 80 14 71 */	li r4, 0x1471
/* 8016CC60 00169BA0  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016CC64 00169BA4  38 A2 A6 90 */	addi r5, r2, lbl_805189F0@sda21
/* 8016CC68 00169BA8  4C C6 31 82 */	crclr 6
/* 8016CC6C 00169BAC  4B EB D9 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016CC70:
/* 8016CC70 00169BB0  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CC74 00169BB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CC78 00169BB8  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8016CC7C 00169BBC  7D 89 03 A6 */	mtctr r12
/* 8016CC80 00169BC0  4E 80 04 21 */	bctrl 
/* 8016CC84 00169BC4  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8016CC88 00169BC8  7C 00 18 40 */	cmplw r0, r3
/* 8016CC8C 00169BCC  40 82 01 B4 */	bne .L_8016CE40
/* 8016CC90 00169BD0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CC94 00169BD4  80 03 00 04 */	lwz r0, 4(r3)
/* 8016CC98 00169BD8  90 1F 00 08 */	stw r0, 8(r31)
/* 8016CC9C 00169BDC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CCA0 00169BE0  28 03 00 00 */	cmplwi r3, 0
/* 8016CCA4 00169BE4  41 82 01 58 */	beq .L_8016CDFC
/* 8016CCA8 00169BE8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016CCAC 00169BEC  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CCB0 00169BF0  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CCB4 00169BF4  28 03 00 00 */	cmplwi r3, 0
/* 8016CCB8 00169BF8  41 82 01 38 */	beq .L_8016CDF0
/* 8016CCBC 00169BFC  80 1F 00 00 */	lwz r0, 0(r31)
/* 8016CCC0 00169C00  28 00 00 00 */	cmplwi r0, 0
/* 8016CCC4 00169C04  40 82 00 1C */	bne .L_8016CCE0
/* 8016CCC8 00169C08  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CCCC 00169C0C  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 8016CCD0 00169C10  7D 89 03 A6 */	mtctr r12
/* 8016CCD4 00169C14  4E 80 04 21 */	bctrl 
/* 8016CCD8 00169C18  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8016CCDC 00169C1C  48 00 00 1C */	b .L_8016CCF8
.L_8016CCE0:
/* 8016CCE0 00169C20  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016CCE4 00169C24  38 80 14 71 */	li r4, 0x1471
/* 8016CCE8 00169C28  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016CCEC 00169C2C  38 A2 A6 90 */	addi r5, r2, lbl_805189F0@sda21
/* 8016CCF0 00169C30  4C C6 31 82 */	crclr 6
/* 8016CCF4 00169C34  4B EB D9 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016CCF8:
/* 8016CCF8 00169C38  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CCFC 00169C3C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CD00 00169C40  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8016CD04 00169C44  7D 89 03 A6 */	mtctr r12
/* 8016CD08 00169C48  4E 80 04 21 */	bctrl 
/* 8016CD0C 00169C4C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8016CD10 00169C50  7C 00 18 40 */	cmplw r0, r3
/* 8016CD14 00169C54  40 82 01 2C */	bne .L_8016CE40
/* 8016CD18 00169C58  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CD1C 00169C5C  80 03 00 04 */	lwz r0, 4(r3)
/* 8016CD20 00169C60  90 1F 00 08 */	stw r0, 8(r31)
/* 8016CD24 00169C64  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CD28 00169C68  28 03 00 00 */	cmplwi r3, 0
/* 8016CD2C 00169C6C  41 82 00 B8 */	beq .L_8016CDE4
/* 8016CD30 00169C70  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016CD34 00169C74  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CD38 00169C78  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CD3C 00169C7C  28 03 00 00 */	cmplwi r3, 0
/* 8016CD40 00169C80  41 82 00 98 */	beq .L_8016CDD8
/* 8016CD44 00169C84  80 1F 00 00 */	lwz r0, 0(r31)
/* 8016CD48 00169C88  28 00 00 00 */	cmplwi r0, 0
/* 8016CD4C 00169C8C  40 82 00 1C */	bne .L_8016CD68
/* 8016CD50 00169C90  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CD54 00169C94  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 8016CD58 00169C98  7D 89 03 A6 */	mtctr r12
/* 8016CD5C 00169C9C  4E 80 04 21 */	bctrl 
/* 8016CD60 00169CA0  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8016CD64 00169CA4  48 00 00 1C */	b .L_8016CD80
.L_8016CD68:
/* 8016CD68 00169CA8  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016CD6C 00169CAC  38 80 14 71 */	li r4, 0x1471
/* 8016CD70 00169CB0  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016CD74 00169CB4  38 A2 A6 90 */	addi r5, r2, lbl_805189F0@sda21
/* 8016CD78 00169CB8  4C C6 31 82 */	crclr 6
/* 8016CD7C 00169CBC  4B EB D8 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016CD80:
/* 8016CD80 00169CC0  80 7F 00 04 */	lwz r3, 4(r31)
/* 8016CD84 00169CC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016CD88 00169CC8  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8016CD8C 00169CCC  7D 89 03 A6 */	mtctr r12
/* 8016CD90 00169CD0  4E 80 04 21 */	bctrl 
/* 8016CD94 00169CD4  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8016CD98 00169CD8  7C 00 18 40 */	cmplw r0, r3
/* 8016CD9C 00169CDC  40 82 00 A4 */	bne .L_8016CE40
/* 8016CDA0 00169CE0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CDA4 00169CE4  48 00 00 B1 */	bl "getNext__31TObjectNode<16GenericObjectMgr>Fv"
/* 8016CDA8 00169CE8  90 7F 00 08 */	stw r3, 8(r31)
/* 8016CDAC 00169CEC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016CDB0 00169CF0  28 03 00 00 */	cmplwi r3, 0
/* 8016CDB4 00169CF4  41 82 00 18 */	beq .L_8016CDCC
/* 8016CDB8 00169CF8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016CDBC 00169CFC  7F E3 FB 78 */	mr r3, r31
/* 8016CDC0 00169D00  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CDC4 00169D04  4B FF FD 41 */	bl setFirst__Q24Game14PelletIteratorFv
/* 8016CDC8 00169D08  48 00 00 78 */	b .L_8016CE40
.L_8016CDCC:
/* 8016CDCC 00169D0C  38 00 00 00 */	li r0, 0
/* 8016CDD0 00169D10  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CDD4 00169D14  48 00 00 6C */	b .L_8016CE40
.L_8016CDD8:
/* 8016CDD8 00169D18  38 00 00 00 */	li r0, 0
/* 8016CDDC 00169D1C  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8016CDE0 00169D20  48 00 00 60 */	b .L_8016CE40
.L_8016CDE4:
/* 8016CDE4 00169D24  38 00 00 00 */	li r0, 0
/* 8016CDE8 00169D28  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CDEC 00169D2C  48 00 00 54 */	b .L_8016CE40
.L_8016CDF0:
/* 8016CDF0 00169D30  38 00 00 00 */	li r0, 0
/* 8016CDF4 00169D34  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8016CDF8 00169D38  48 00 00 48 */	b .L_8016CE40
.L_8016CDFC:
/* 8016CDFC 00169D3C  38 00 00 00 */	li r0, 0
/* 8016CE00 00169D40  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CE04 00169D44  48 00 00 3C */	b .L_8016CE40
.L_8016CE08:
/* 8016CE08 00169D48  38 00 00 00 */	li r0, 0
/* 8016CE0C 00169D4C  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8016CE10 00169D50  48 00 00 30 */	b .L_8016CE40
.L_8016CE14:
/* 8016CE14 00169D54  38 00 00 00 */	li r0, 0
/* 8016CE18 00169D58  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CE1C 00169D5C  48 00 00 24 */	b .L_8016CE40
.L_8016CE20:
/* 8016CE20 00169D60  38 00 00 00 */	li r0, 0
/* 8016CE24 00169D64  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8016CE28 00169D68  48 00 00 18 */	b .L_8016CE40
.L_8016CE2C:
/* 8016CE2C 00169D6C  38 00 00 00 */	li r0, 0
/* 8016CE30 00169D70  90 1F 00 04 */	stw r0, 4(r31)
/* 8016CE34 00169D74  48 00 00 0C */	b .L_8016CE40
.L_8016CE38:
/* 8016CE38 00169D78  38 00 00 00 */	li r0, 0
/* 8016CE3C 00169D7C  90 1F 00 0C */	stw r0, 0xc(r31)
.L_8016CE40:
/* 8016CE40 00169D80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CE44 00169D84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016CE48 00169D88  7C 08 03 A6 */	mtlr r0
/* 8016CE4C 00169D8C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CE50 00169D90  4E 80 00 20 */	blr 
.endfn setFirst__Q24Game14PelletIteratorFv

.fn "getNext__31TObjectNode<16GenericObjectMgr>Fv", weak
/* 8016CE54 00169D94  80 63 00 04 */	lwz r3, 4(r3)
/* 8016CE58 00169D98  4E 80 00 20 */	blr 
.endfn "getNext__31TObjectNode<16GenericObjectMgr>Fv"

.fn __ct__Q24Game9PelletMgrFv, global
/* 8016CE5C 00169D9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CE60 00169DA0  7C 08 02 A6 */	mflr r0
/* 8016CE64 00169DA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CE68 00169DA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016CE6C 00169DAC  7C 7F 1B 78 */	mr r31, r3
/* 8016CE70 00169DB0  93 C1 00 08 */	stw r30, 8(r1)
/* 8016CE74 00169DB4  48 2A 45 1D */	bl __ct__5CNodeFv
/* 8016CE78 00169DB8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8016CE7C 00169DBC  3C 60 80 4B */	lis r3, "__vt__29Container<16GenericObjectMgr>"@ha
/* 8016CE80 00169DC0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8016CE84 00169DC4  3C A0 80 4B */	lis r5, __vt__16GenericObjectMgr@ha
/* 8016CE88 00169DC8  90 1F 00 00 */	stw r0, 0(r31)
/* 8016CE8C 00169DCC  38 03 1C B0 */	addi r0, r3, "__vt__29Container<16GenericObjectMgr>"@l
/* 8016CE90 00169DD0  3C 80 80 4B */	lis r4, "__vt__29ObjectMgr<16GenericObjectMgr>"@ha
/* 8016CE94 00169DD4  3C 60 80 4B */	lis r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@ha
/* 8016CE98 00169DD8  90 1F 00 00 */	stw r0, 0(r31)
/* 8016CE9C 00169DDC  38 00 00 00 */	li r0, 0
/* 8016CEA0 00169DE0  38 C4 1C 34 */	addi r6, r4, "__vt__29ObjectMgr<16GenericObjectMgr>"@l
/* 8016CEA4 00169DE4  38 83 1B B4 */	addi r4, r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@l
/* 8016CEA8 00169DE8  98 1F 00 18 */	stb r0, 0x18(r31)
/* 8016CEAC 00169DEC  38 05 B5 F0 */	addi r0, r5, __vt__16GenericObjectMgr@l
/* 8016CEB0 00169DF0  3B DF 00 20 */	addi r30, r31, 0x20
/* 8016CEB4 00169DF4  38 A6 00 2C */	addi r5, r6, 0x2c
/* 8016CEB8 00169DF8  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8016CEBC 00169DFC  38 04 00 2C */	addi r0, r4, 0x2c
/* 8016CEC0 00169E00  7F C3 F3 78 */	mr r3, r30
/* 8016CEC4 00169E04  90 DF 00 00 */	stw r6, 0(r31)
/* 8016CEC8 00169E08  90 BF 00 1C */	stw r5, 0x1c(r31)
/* 8016CECC 00169E0C  90 9F 00 00 */	stw r4, 0(r31)
/* 8016CED0 00169E10  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8016CED4 00169E14  48 2A 44 BD */	bl __ct__5CNodeFv
/* 8016CED8 00169E18  3C 60 80 4B */	lis r3, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
/* 8016CEDC 00169E1C  3C 80 80 4B */	lis r4, __vt__Q24Game9PelletMgr@ha
/* 8016CEE0 00169E20  38 03 1B A4 */	addi r0, r3, "__vt__31TObjectNode<16GenericObjectMgr>"@l
/* 8016CEE4 00169E24  3C 60 80 48 */	lis r3, lbl_8047E494@ha
/* 8016CEE8 00169E28  90 1E 00 00 */	stw r0, 0(r30)
/* 8016CEEC 00169E2C  38 C4 1A CC */	addi r6, r4, __vt__Q24Game9PelletMgr@l
/* 8016CEF0 00169E30  38 A6 00 2C */	addi r5, r6, 0x2c
/* 8016CEF4 00169E34  38 83 E4 94 */	addi r4, r3, lbl_8047E494@l
/* 8016CEF8 00169E38  90 DF 00 00 */	stw r6, 0(r31)
/* 8016CEFC 00169E3C  38 00 00 00 */	li r0, 0
/* 8016CF00 00169E40  7F E3 FB 78 */	mr r3, r31
/* 8016CF04 00169E44  90 BF 00 1C */	stw r5, 0x1c(r31)
/* 8016CF08 00169E48  90 9F 00 14 */	stw r4, 0x14(r31)
/* 8016CF0C 00169E4C  98 1F 00 3C */	stb r0, 0x3c(r31)
/* 8016CF10 00169E50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016CF14 00169E54  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016CF18 00169E58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CF1C 00169E5C  7C 08 03 A6 */	mtlr r0
/* 8016CF20 00169E60  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CF24 00169E64  4E 80 00 20 */	blr 
.endfn __ct__Q24Game9PelletMgrFv

.fn "__dt__33NodeObjectMgr<16GenericObjectMgr>Fv", weak
/* 8016CF28 00169E68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CF2C 00169E6C  7C 08 02 A6 */	mflr r0
/* 8016CF30 00169E70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CF34 00169E74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016CF38 00169E78  7C 9F 23 78 */	mr r31, r4
/* 8016CF3C 00169E7C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016CF40 00169E80  7C 7E 1B 79 */	or. r30, r3, r3
/* 8016CF44 00169E84  41 82 00 90 */	beq .L_8016CFD4
/* 8016CF48 00169E88  3C 60 80 4B */	lis r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@ha
/* 8016CF4C 00169E8C  34 1E 00 20 */	addic. r0, r30, 0x20
/* 8016CF50 00169E90  38 63 1B B4 */	addi r3, r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@l
/* 8016CF54 00169E94  90 7E 00 00 */	stw r3, 0(r30)
/* 8016CF58 00169E98  38 03 00 2C */	addi r0, r3, 0x2c
/* 8016CF5C 00169E9C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8016CF60 00169EA0  41 82 00 1C */	beq .L_8016CF7C
/* 8016CF64 00169EA4  3C 80 80 4B */	lis r4, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
/* 8016CF68 00169EA8  38 7E 00 20 */	addi r3, r30, 0x20
/* 8016CF6C 00169EAC  38 04 1B A4 */	addi r0, r4, "__vt__31TObjectNode<16GenericObjectMgr>"@l
/* 8016CF70 00169EB0  38 80 00 00 */	li r4, 0
/* 8016CF74 00169EB4  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8016CF78 00169EB8  48 2A 46 11 */	bl __dt__5CNodeFv
.L_8016CF7C:
/* 8016CF7C 00169EBC  28 1E 00 00 */	cmplwi r30, 0
/* 8016CF80 00169EC0  41 82 00 44 */	beq .L_8016CFC4
/* 8016CF84 00169EC4  3C 60 80 4B */	lis r3, "__vt__29ObjectMgr<16GenericObjectMgr>"@ha
/* 8016CF88 00169EC8  38 63 1C 34 */	addi r3, r3, "__vt__29ObjectMgr<16GenericObjectMgr>"@l
/* 8016CF8C 00169ECC  90 7E 00 00 */	stw r3, 0(r30)
/* 8016CF90 00169ED0  38 03 00 2C */	addi r0, r3, 0x2c
/* 8016CF94 00169ED4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8016CF98 00169ED8  41 82 00 2C */	beq .L_8016CFC4
/* 8016CF9C 00169EDC  3C 60 80 4B */	lis r3, "__vt__29Container<16GenericObjectMgr>"@ha
/* 8016CFA0 00169EE0  38 03 1C B0 */	addi r0, r3, "__vt__29Container<16GenericObjectMgr>"@l
/* 8016CFA4 00169EE4  90 1E 00 00 */	stw r0, 0(r30)
/* 8016CFA8 00169EE8  41 82 00 1C */	beq .L_8016CFC4
/* 8016CFAC 00169EEC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8016CFB0 00169EF0  7F C3 F3 78 */	mr r3, r30
/* 8016CFB4 00169EF4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8016CFB8 00169EF8  38 80 00 00 */	li r4, 0
/* 8016CFBC 00169EFC  90 1E 00 00 */	stw r0, 0(r30)
/* 8016CFC0 00169F00  48 2A 45 C9 */	bl __dt__5CNodeFv
.L_8016CFC4:
/* 8016CFC4 00169F04  7F E0 07 35 */	extsh. r0, r31
/* 8016CFC8 00169F08  40 81 00 0C */	ble .L_8016CFD4
/* 8016CFCC 00169F0C  7F C3 F3 78 */	mr r3, r30
/* 8016CFD0 00169F10  4B EB 70 E5 */	bl __dl__FPv
.L_8016CFD4:
/* 8016CFD4 00169F14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CFD8 00169F18  7F C3 F3 78 */	mr r3, r30
/* 8016CFDC 00169F1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016CFE0 00169F20  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016CFE4 00169F24  7C 08 03 A6 */	mtlr r0
/* 8016CFE8 00169F28  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CFEC 00169F2C  4E 80 00 20 */	blr 
.endfn "__dt__33NodeObjectMgr<16GenericObjectMgr>Fv"

.fn "__dt__31TObjectNode<16GenericObjectMgr>Fv", weak
/* 8016CFF0 00169F30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CFF4 00169F34  7C 08 02 A6 */	mflr r0
/* 8016CFF8 00169F38  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CFFC 00169F3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D000 00169F40  7C 9F 23 78 */	mr r31, r4
/* 8016D004 00169F44  93 C1 00 08 */	stw r30, 8(r1)
/* 8016D008 00169F48  7C 7E 1B 79 */	or. r30, r3, r3
/* 8016D00C 00169F4C  41 82 00 28 */	beq .L_8016D034
/* 8016D010 00169F50  3C A0 80 4B */	lis r5, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
/* 8016D014 00169F54  38 80 00 00 */	li r4, 0
/* 8016D018 00169F58  38 05 1B A4 */	addi r0, r5, "__vt__31TObjectNode<16GenericObjectMgr>"@l
/* 8016D01C 00169F5C  90 1E 00 00 */	stw r0, 0(r30)
/* 8016D020 00169F60  48 2A 45 69 */	bl __dt__5CNodeFv
/* 8016D024 00169F64  7F E0 07 35 */	extsh. r0, r31
/* 8016D028 00169F68  40 81 00 0C */	ble .L_8016D034
/* 8016D02C 00169F6C  7F C3 F3 78 */	mr r3, r30
/* 8016D030 00169F70  4B EB 70 85 */	bl __dl__FPv
.L_8016D034:
/* 8016D034 00169F74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D038 00169F78  7F C3 F3 78 */	mr r3, r30
/* 8016D03C 00169F7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D040 00169F80  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016D044 00169F84  7C 08 03 A6 */	mtlr r0
/* 8016D048 00169F88  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D04C 00169F8C  4E 80 00 20 */	blr 
.endfn "__dt__31TObjectNode<16GenericObjectMgr>Fv"

.fn "__dt__29ObjectMgr<16GenericObjectMgr>Fv", weak
/* 8016D050 00169F90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D054 00169F94  7C 08 02 A6 */	mflr r0
/* 8016D058 00169F98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D05C 00169F9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D060 00169FA0  7C 9F 23 78 */	mr r31, r4
/* 8016D064 00169FA4  93 C1 00 08 */	stw r30, 8(r1)
/* 8016D068 00169FA8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8016D06C 00169FAC  41 82 00 50 */	beq .L_8016D0BC
/* 8016D070 00169FB0  3C 80 80 4B */	lis r4, "__vt__29ObjectMgr<16GenericObjectMgr>"@ha
/* 8016D074 00169FB4  38 84 1C 34 */	addi r4, r4, "__vt__29ObjectMgr<16GenericObjectMgr>"@l
/* 8016D078 00169FB8  90 9E 00 00 */	stw r4, 0(r30)
/* 8016D07C 00169FBC  38 04 00 2C */	addi r0, r4, 0x2c
/* 8016D080 00169FC0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8016D084 00169FC4  41 82 00 28 */	beq .L_8016D0AC
/* 8016D088 00169FC8  3C 80 80 4B */	lis r4, "__vt__29Container<16GenericObjectMgr>"@ha
/* 8016D08C 00169FCC  38 04 1C B0 */	addi r0, r4, "__vt__29Container<16GenericObjectMgr>"@l
/* 8016D090 00169FD0  90 1E 00 00 */	stw r0, 0(r30)
/* 8016D094 00169FD4  41 82 00 18 */	beq .L_8016D0AC
/* 8016D098 00169FD8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8016D09C 00169FDC  38 80 00 00 */	li r4, 0
/* 8016D0A0 00169FE0  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8016D0A4 00169FE4  90 1E 00 00 */	stw r0, 0(r30)
/* 8016D0A8 00169FE8  48 2A 44 E1 */	bl __dt__5CNodeFv
.L_8016D0AC:
/* 8016D0AC 00169FEC  7F E0 07 35 */	extsh. r0, r31
/* 8016D0B0 00169FF0  40 81 00 0C */	ble .L_8016D0BC
/* 8016D0B4 00169FF4  7F C3 F3 78 */	mr r3, r30
/* 8016D0B8 00169FF8  4B EB 6F FD */	bl __dl__FPv
.L_8016D0BC:
/* 8016D0BC 00169FFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D0C0 0016A000  7F C3 F3 78 */	mr r3, r30
/* 8016D0C4 0016A004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D0C8 0016A008  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016D0CC 0016A00C  7C 08 03 A6 */	mtlr r0
/* 8016D0D0 0016A010  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D0D4 0016A014  4E 80 00 20 */	blr 
.endfn "__dt__29ObjectMgr<16GenericObjectMgr>Fv"

.fn "__dt__29Container<16GenericObjectMgr>Fv", weak
/* 8016D0D8 0016A018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D0DC 0016A01C  7C 08 02 A6 */	mflr r0
/* 8016D0E0 0016A020  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D0E4 0016A024  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D0E8 0016A028  7C 9F 23 78 */	mr r31, r4
/* 8016D0EC 0016A02C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016D0F0 0016A030  7C 7E 1B 79 */	or. r30, r3, r3
/* 8016D0F4 0016A034  41 82 00 38 */	beq .L_8016D12C
/* 8016D0F8 0016A038  3C 80 80 4B */	lis r4, "__vt__29Container<16GenericObjectMgr>"@ha
/* 8016D0FC 0016A03C  38 04 1C B0 */	addi r0, r4, "__vt__29Container<16GenericObjectMgr>"@l
/* 8016D100 0016A040  90 1E 00 00 */	stw r0, 0(r30)
/* 8016D104 0016A044  41 82 00 18 */	beq .L_8016D11C
/* 8016D108 0016A048  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8016D10C 0016A04C  38 80 00 00 */	li r4, 0
/* 8016D110 0016A050  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8016D114 0016A054  90 1E 00 00 */	stw r0, 0(r30)
/* 8016D118 0016A058  48 2A 44 71 */	bl __dt__5CNodeFv
.L_8016D11C:
/* 8016D11C 0016A05C  7F E0 07 35 */	extsh. r0, r31
/* 8016D120 0016A060  40 81 00 0C */	ble .L_8016D12C
/* 8016D124 0016A064  7F C3 F3 78 */	mr r3, r30
/* 8016D128 0016A068  4B EB 6F 8D */	bl __dl__FPv
.L_8016D12C:
/* 8016D12C 0016A06C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D130 0016A070  7F C3 F3 78 */	mr r3, r30
/* 8016D134 0016A074  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D138 0016A078  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016D13C 0016A07C  7C 08 03 A6 */	mtlr r0
/* 8016D140 0016A080  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D144 0016A084  4E 80 00 20 */	blr 
.endfn "__dt__29Container<16GenericObjectMgr>Fv"

.fn createManagers__Q24Game9PelletMgrFUl, global
/* 8016D148 0016A088  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D14C 0016A08C  7C 08 02 A6 */	mflr r0
/* 8016D150 0016A090  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D154 0016A094  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D158 0016A098  7C 7F 1B 78 */	mr r31, r3
/* 8016D15C 0016A09C  38 60 00 A4 */	li r3, 0xa4
/* 8016D160 0016A0A0  4B EB 6D 45 */	bl __nw__FUl
/* 8016D164 0016A0A4  7C 64 1B 79 */	or. r4, r3, r3
/* 8016D168 0016A0A8  41 82 00 10 */	beq .L_8016D178
/* 8016D16C 0016A0AC  38 80 00 01 */	li r4, 1
/* 8016D170 0016A0B0  48 08 C1 9D */	bl __ct__Q34Game12PelletNumber3MgrFv
/* 8016D174 0016A0B4  7C 64 1B 78 */	mr r4, r3
.L_8016D178:
/* 8016D178 0016A0B8  90 8D 94 F8 */	stw r4, mgr__Q24Game12PelletNumber@sda21(r13)
/* 8016D17C 0016A0BC  7F E3 FB 78 */	mr r3, r31
/* 8016D180 0016A0C0  48 00 0D F1 */	bl addMgr__Q24Game9PelletMgrFPQ24Game13BasePelletMgr
/* 8016D184 0016A0C4  38 60 00 A4 */	li r3, 0xa4
/* 8016D188 0016A0C8  4B EB 6D 1D */	bl __nw__FUl
/* 8016D18C 0016A0CC  7C 64 1B 79 */	or. r4, r3, r3
/* 8016D190 0016A0D0  41 82 00 10 */	beq .L_8016D1A0
/* 8016D194 0016A0D4  38 80 00 01 */	li r4, 1
/* 8016D198 0016A0D8  48 08 E7 35 */	bl __ct__Q34Game13PelletCarcass3MgrFv
/* 8016D19C 0016A0DC  7C 64 1B 78 */	mr r4, r3
.L_8016D1A0:
/* 8016D1A0 0016A0E0  90 8D 95 00 */	stw r4, mgr__Q24Game13PelletCarcass@sda21(r13)
/* 8016D1A4 0016A0E4  7F E3 FB 78 */	mr r3, r31
/* 8016D1A8 0016A0E8  48 00 0D C9 */	bl addMgr__Q24Game9PelletMgrFPQ24Game13BasePelletMgr
/* 8016D1AC 0016A0EC  38 60 00 A4 */	li r3, 0xa4
/* 8016D1B0 0016A0F0  4B EB 6C F5 */	bl __nw__FUl
/* 8016D1B4 0016A0F4  7C 64 1B 79 */	or. r4, r3, r3
/* 8016D1B8 0016A0F8  41 82 00 10 */	beq .L_8016D1C8
/* 8016D1BC 0016A0FC  38 80 00 01 */	li r4, 1
/* 8016D1C0 0016A100  48 09 0B 05 */	bl __ct__Q34Game11PelletFruit3MgrFv
/* 8016D1C4 0016A104  7C 64 1B 78 */	mr r4, r3
.L_8016D1C8:
/* 8016D1C8 0016A108  90 8D 95 10 */	stw r4, mgr__Q24Game11PelletFruit@sda21(r13)
/* 8016D1CC 0016A10C  7F E3 FB 78 */	mr r3, r31
/* 8016D1D0 0016A110  48 00 0D A1 */	bl addMgr__Q24Game9PelletMgrFPQ24Game13BasePelletMgr
/* 8016D1D4 0016A114  38 60 00 A4 */	li r3, 0xa4
/* 8016D1D8 0016A118  4B EB 6C CD */	bl __nw__FUl
/* 8016D1DC 0016A11C  7C 64 1B 79 */	or. r4, r3, r3
/* 8016D1E0 0016A120  41 82 00 10 */	beq .L_8016D1F0
/* 8016D1E4 0016A124  38 80 00 01 */	li r4, 1
/* 8016D1E8 0016A128  48 09 35 95 */	bl __ct__Q34Game13PelletOtakara3MgrFv
/* 8016D1EC 0016A12C  7C 64 1B 78 */	mr r4, r3
.L_8016D1F0:
/* 8016D1F0 0016A130  90 8D 95 20 */	stw r4, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 8016D1F4 0016A134  7F E3 FB 78 */	mr r3, r31
/* 8016D1F8 0016A138  48 00 0D 79 */	bl addMgr__Q24Game9PelletMgrFPQ24Game13BasePelletMgr
/* 8016D1FC 0016A13C  38 60 00 A4 */	li r3, 0xa4
/* 8016D200 0016A140  4B EB 6C A5 */	bl __nw__FUl
/* 8016D204 0016A144  7C 64 1B 79 */	or. r4, r3, r3
/* 8016D208 0016A148  41 82 00 10 */	beq .L_8016D218
/* 8016D20C 0016A14C  38 80 00 01 */	li r4, 1
/* 8016D210 0016A150  48 09 5E 89 */	bl __ct__Q34Game10PelletItem3MgrFv
/* 8016D214 0016A154  7C 64 1B 78 */	mr r4, r3
.L_8016D218:
/* 8016D218 0016A158  90 8D 95 28 */	stw r4, mgr__Q24Game10PelletItem@sda21(r13)
/* 8016D21C 0016A15C  7F E3 FB 78 */	mr r3, r31
/* 8016D220 0016A160  48 00 0D 51 */	bl addMgr__Q24Game9PelletMgrFPQ24Game13BasePelletMgr
/* 8016D224 0016A164  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D228 0016A168  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D22C 0016A16C  7C 08 03 A6 */	mtlr r0
/* 8016D230 0016A170  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D234 0016A174  4E 80 00 20 */	blr 
.endfn createManagers__Q24Game9PelletMgrFUl

.fn resetMgrs__Q24Game9PelletMgrFv, global
/* 8016D238 0016A178  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D23C 0016A17C  7C 08 02 A6 */	mflr r0
/* 8016D240 0016A180  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D244 0016A184  80 6D 94 F8 */	lwz r3, mgr__Q24Game12PelletNumber@sda21(r13)
/* 8016D248 0016A188  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D24C 0016A18C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8016D250 0016A190  7D 89 03 A6 */	mtctr r12
/* 8016D254 0016A194  4E 80 04 21 */	bctrl 
/* 8016D258 0016A198  80 6D 95 00 */	lwz r3, mgr__Q24Game13PelletCarcass@sda21(r13)
/* 8016D25C 0016A19C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D260 0016A1A0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8016D264 0016A1A4  7D 89 03 A6 */	mtctr r12
/* 8016D268 0016A1A8  4E 80 04 21 */	bctrl 
/* 8016D26C 0016A1AC  80 6D 95 10 */	lwz r3, mgr__Q24Game11PelletFruit@sda21(r13)
/* 8016D270 0016A1B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D274 0016A1B4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8016D278 0016A1B8  7D 89 03 A6 */	mtctr r12
/* 8016D27C 0016A1BC  4E 80 04 21 */	bctrl 
/* 8016D280 0016A1C0  80 6D 95 28 */	lwz r3, mgr__Q24Game10PelletItem@sda21(r13)
/* 8016D284 0016A1C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D288 0016A1C8  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8016D28C 0016A1CC  7D 89 03 A6 */	mtctr r12
/* 8016D290 0016A1D0  4E 80 04 21 */	bctrl 
/* 8016D294 0016A1D4  80 6D 95 20 */	lwz r3, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 8016D298 0016A1D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D29C 0016A1DC  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8016D2A0 0016A1E0  7D 89 03 A6 */	mtctr r12
/* 8016D2A4 0016A1E4  4E 80 04 21 */	bctrl 
/* 8016D2A8 0016A1E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D2AC 0016A1EC  7C 08 03 A6 */	mtlr r0
/* 8016D2B0 0016A1F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D2B4 0016A1F4  4E 80 00 20 */	blr 
.endfn resetMgrs__Q24Game9PelletMgrFv

.fn "resetMgr__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv", weak
/* 8016D2B8 0016A1F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D2BC 0016A1FC  7C 08 02 A6 */	mflr r0
/* 8016D2C0 0016A200  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D2C4 0016A204  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D2C8 0016A208  7C 7F 1B 78 */	mr r31, r3
/* 8016D2CC 0016A20C  38 7F 00 70 */	addi r3, r31, 0x70
/* 8016D2D0 0016A210  81 9F 00 70 */	lwz r12, 0x70(r31)
/* 8016D2D4 0016A214  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8016D2D8 0016A218  7D 89 03 A6 */	mtctr r12
/* 8016D2DC 0016A21C  4E 80 04 21 */	bctrl 
/* 8016D2E0 0016A220  38 7F 00 18 */	addi r3, r31, 0x18
/* 8016D2E4 0016A224  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 8016D2E8 0016A228  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8016D2EC 0016A22C  7D 89 03 A6 */	mtctr r12
/* 8016D2F0 0016A230  4E 80 04 21 */	bctrl 
/* 8016D2F4 0016A234  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D2F8 0016A238  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D2FC 0016A23C  7C 08 03 A6 */	mtlr r0
/* 8016D300 0016A240  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D304 0016A244  4E 80 00 20 */	blr 
.endfn "resetMgr__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"

.fn "resetMgr__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv", weak
/* 8016D308 0016A248  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D30C 0016A24C  7C 08 02 A6 */	mflr r0
/* 8016D310 0016A250  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D314 0016A254  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D318 0016A258  7C 7F 1B 78 */	mr r31, r3
/* 8016D31C 0016A25C  38 7F 00 70 */	addi r3, r31, 0x70
/* 8016D320 0016A260  81 9F 00 70 */	lwz r12, 0x70(r31)
/* 8016D324 0016A264  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8016D328 0016A268  7D 89 03 A6 */	mtctr r12
/* 8016D32C 0016A26C  4E 80 04 21 */	bctrl 
/* 8016D330 0016A270  38 7F 00 18 */	addi r3, r31, 0x18
/* 8016D334 0016A274  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 8016D338 0016A278  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8016D33C 0016A27C  7D 89 03 A6 */	mtctr r12
/* 8016D340 0016A280  4E 80 04 21 */	bctrl 
/* 8016D344 0016A284  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D348 0016A288  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D34C 0016A28C  7C 08 03 A6 */	mtlr r0
/* 8016D350 0016A290  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D354 0016A294  4E 80 00 20 */	blr 
.endfn "resetMgr__Q24Game49FixedSizePelletMgr<Q34Game13PelletCarcass6Object>Fv"

.fn "resetMgr__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv", weak
/* 8016D358 0016A298  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D35C 0016A29C  7C 08 02 A6 */	mflr r0
/* 8016D360 0016A2A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D364 0016A2A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D368 0016A2A8  7C 7F 1B 78 */	mr r31, r3
/* 8016D36C 0016A2AC  38 7F 00 70 */	addi r3, r31, 0x70
/* 8016D370 0016A2B0  81 9F 00 70 */	lwz r12, 0x70(r31)
/* 8016D374 0016A2B4  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8016D378 0016A2B8  7D 89 03 A6 */	mtctr r12
/* 8016D37C 0016A2BC  4E 80 04 21 */	bctrl 
/* 8016D380 0016A2C0  38 7F 00 18 */	addi r3, r31, 0x18
/* 8016D384 0016A2C4  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 8016D388 0016A2C8  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8016D38C 0016A2CC  7D 89 03 A6 */	mtctr r12
/* 8016D390 0016A2D0  4E 80 04 21 */	bctrl 
/* 8016D394 0016A2D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D398 0016A2D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D39C 0016A2DC  7C 08 03 A6 */	mtlr r0
/* 8016D3A0 0016A2E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D3A4 0016A2E4  4E 80 00 20 */	blr 
.endfn "resetMgr__Q24Game48FixedSizePelletMgr<Q34Game12PelletNumber6Object>Fv"

.fn setupResources__Q24Game9PelletMgrFv, global
/* 8016D3A8 0016A2E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D3AC 0016A2EC  7C 08 02 A6 */	mflr r0
/* 8016D3B0 0016A2F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D3B4 0016A2F4  80 6D 94 F8 */	lwz r3, mgr__Q24Game12PelletNumber@sda21(r13)
/* 8016D3B8 0016A2F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D3BC 0016A2FC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8016D3C0 0016A300  7D 89 03 A6 */	mtctr r12
/* 8016D3C4 0016A304  4E 80 04 21 */	bctrl 
/* 8016D3C8 0016A308  80 6D 95 00 */	lwz r3, mgr__Q24Game13PelletCarcass@sda21(r13)
/* 8016D3CC 0016A30C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D3D0 0016A310  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8016D3D4 0016A314  7D 89 03 A6 */	mtctr r12
/* 8016D3D8 0016A318  4E 80 04 21 */	bctrl 
/* 8016D3DC 0016A31C  80 6D 95 10 */	lwz r3, mgr__Q24Game11PelletFruit@sda21(r13)
/* 8016D3E0 0016A320  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D3E4 0016A324  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8016D3E8 0016A328  7D 89 03 A6 */	mtctr r12
/* 8016D3EC 0016A32C  4E 80 04 21 */	bctrl 
/* 8016D3F0 0016A330  80 6D 95 20 */	lwz r3, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 8016D3F4 0016A334  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D3F8 0016A338  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8016D3FC 0016A33C  7D 89 03 A6 */	mtctr r12
/* 8016D400 0016A340  4E 80 04 21 */	bctrl 
/* 8016D404 0016A344  80 6D 95 28 */	lwz r3, mgr__Q24Game10PelletItem@sda21(r13)
/* 8016D408 0016A348  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D40C 0016A34C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8016D410 0016A350  7D 89 03 A6 */	mtctr r12
/* 8016D414 0016A354  4E 80 04 21 */	bctrl 
/* 8016D418 0016A358  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D41C 0016A35C  7C 08 03 A6 */	mtlr r0
/* 8016D420 0016A360  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D424 0016A364  4E 80 00 20 */	blr 
.endfn setupResources__Q24Game9PelletMgrFv

.fn "isDone__36Iterator<Q34Game10PelletItem6Object>Fv", weak
/* 8016D428 0016A368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D42C 0016A36C  7C 08 02 A6 */	mflr r0
/* 8016D430 0016A370  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D434 0016A374  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D438 0016A378  7C 7F 1B 78 */	mr r31, r3
/* 8016D43C 0016A37C  80 63 00 08 */	lwz r3, 8(r3)
/* 8016D440 0016A380  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D444 0016A384  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016D448 0016A388  7D 89 03 A6 */	mtctr r12
/* 8016D44C 0016A38C  4E 80 04 21 */	bctrl 
/* 8016D450 0016A390  80 1F 00 04 */	lwz r0, 4(r31)
/* 8016D454 0016A394  7C 00 18 50 */	subf r0, r0, r3
/* 8016D458 0016A398  7C 00 00 34 */	cntlzw r0, r0
/* 8016D45C 0016A39C  54 03 D9 7E */	srwi r3, r0, 5
/* 8016D460 0016A3A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D464 0016A3A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D468 0016A3A8  7C 08 03 A6 */	mtlr r0
/* 8016D46C 0016A3AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D470 0016A3B0  4E 80 00 20 */	blr 
.endfn "isDone__36Iterator<Q34Game10PelletItem6Object>Fv"

.fn "isDone__39Iterator<Q34Game13PelletOtakara6Object>Fv", weak
/* 8016D474 0016A3B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D478 0016A3B8  7C 08 02 A6 */	mflr r0
/* 8016D47C 0016A3BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D480 0016A3C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D484 0016A3C4  7C 7F 1B 78 */	mr r31, r3
/* 8016D488 0016A3C8  80 63 00 08 */	lwz r3, 8(r3)
/* 8016D48C 0016A3CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016D490 0016A3D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016D494 0016A3D4  7D 89 03 A6 */	mtctr r12
/* 8016D498 0016A3D8  4E 80 04 21 */	bctrl 
/* 8016D49C 0016A3DC  80 1F 00 04 */	lwz r0, 4(r31)
/* 8016D4A0 0016A3E0  7C 00 18 50 */	subf r0, r0, r3
/* 8016D4A4 0016A3E4  7C 00 00 34 */	cntlzw r0, r0
/* 8016D4A8 0016A3E8  54 03 D9 7E */	srwi r3, r0, 5
/* 8016D4AC 0016A3EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D4B0 0016A3F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D4B4 0016A3F4  7C 08 03 A6 */	mtlr r0
/* 8016D4B8 0016A3F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D4BC 0016A3FC  4E 80 00 20 */	blr 
.endfn "isDone__39Iterator<Q34Game13PelletOtakara6Object>Fv"

.fn birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg, global
/* 8016D4C0 0016A400  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016D4C4 0016A404  7C 08 02 A6 */	mflr r0
/* 8016D4C8 0016A408  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016D4CC 0016A40C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016D4D0 0016A410  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016D4D4 0016A414  7C 9E 23 79 */	or. r30, r4, r4
/* 8016D4D8 0016A418  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016D4DC 0016A41C  7C 7D 1B 78 */	mr r29, r3
/* 8016D4E0 0016A420  38 60 00 00 */	li r3, 0
/* 8016D4E4 0016A424  41 82 00 14 */	beq .L_8016D4F8
/* 8016D4E8 0016A428  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 8016D4EC 0016A42C  28 00 00 FF */	cmplwi r0, 0xff
/* 8016D4F0 0016A430  41 82 00 08 */	beq .L_8016D4F8
/* 8016D4F4 0016A434  38 60 00 01 */	li r3, 1
.L_8016D4F8:
/* 8016D4F8 0016A438  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016D4FC 0016A43C  40 82 00 20 */	bne .L_8016D51C
/* 8016D500 0016A440  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016D504 0016A444  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016D508 0016A448  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016D50C 0016A44C  38 80 15 12 */	li r4, 0x1512
/* 8016D510 0016A450  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016D514 0016A454  4C C6 31 82 */	crclr 6
/* 8016D518 0016A458  4B EB D1 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016D51C:
/* 8016D51C 0016A45C  88 9E 00 16 */	lbz r4, 0x16(r30)
/* 8016D520 0016A460  7F A3 EB 78 */	mr r3, r29
/* 8016D524 0016A464  48 00 1B A9 */	bl getMgrByID__Q24Game9PelletMgrFUc
/* 8016D528 0016A468  7C 7F 1B 79 */	or. r31, r3, r3
/* 8016D52C 0016A46C  40 82 00 20 */	bne .L_8016D54C
/* 8016D530 0016A470  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016D534 0016A474  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016D538 0016A478  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016D53C 0016A47C  38 80 15 14 */	li r4, 0x1514
/* 8016D540 0016A480  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016D544 0016A484  4C C6 31 82 */	crclr 6
/* 8016D548 0016A488  4B EB D0 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016D54C:
/* 8016D54C 0016A48C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8016D550 0016A490  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8016D554 0016A494  2C 00 00 04 */	cmpwi r0, 4
/* 8016D558 0016A498  41 82 00 C0 */	beq .L_8016D618
/* 8016D55C 0016A49C  2C 00 00 01 */	cmpwi r0, 1
/* 8016D560 0016A4A0  41 82 00 B8 */	beq .L_8016D618
/* 8016D564 0016A4A4  88 0D 93 24 */	lbz r0, mDebug__Q24Game9PelletMgr@sda21(r13)
/* 8016D568 0016A4A8  28 00 00 00 */	cmplwi r0, 0
/* 8016D56C 0016A4AC  40 82 00 AC */	bne .L_8016D618
/* 8016D570 0016A4B0  88 1E 00 17 */	lbz r0, 0x17(r30)
/* 8016D574 0016A4B4  28 00 00 00 */	cmplwi r0, 0
/* 8016D578 0016A4B8  40 82 00 A0 */	bne .L_8016D618
/* 8016D57C 0016A4BC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016D580 0016A4C0  80 9E 00 08 */	lwz r4, 8(r30)
/* 8016D584 0016A4C4  48 04 6E A1 */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 8016D588 0016A4C8  7C 64 1B 78 */	mr r4, r3
/* 8016D58C 0016A4CC  38 62 A6 98 */	addi r3, r2, lbl_805189F8@sda21
/* 8016D590 0016A4D0  80 84 01 80 */	lwz r4, 0x180(r4)
/* 8016D594 0016A4D4  4B F5 D1 2D */	bl strcmp
/* 8016D598 0016A4D8  2C 03 00 00 */	cmpwi r3, 0
/* 8016D59C 0016A4DC  40 82 00 7C */	bne .L_8016D618
/* 8016D5A0 0016A4E0  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 8016D5A4 0016A4E4  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 8016D5A8 0016A4E8  28 00 00 03 */	cmplwi r0, 3
/* 8016D5AC 0016A4EC  40 82 00 34 */	bne .L_8016D5E0
/* 8016D5B0 0016A4F0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8016D5B4 0016A4F4  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8016D5B8 0016A4F8  38 63 00 04 */	addi r3, r3, 4
/* 8016D5BC 0016A4FC  48 07 7E 45 */	bl __cl__Q24Game11KindCounterFi
/* 8016D5C0 0016A500  88 03 00 00 */	lbz r0, 0(r3)
/* 8016D5C4 0016A504  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016D5C8 0016A508  41 82 00 50 */	beq .L_8016D618
/* 8016D5CC 0016A50C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016D5D0 0016A510  80 9E 00 08 */	lwz r4, 8(r30)
/* 8016D5D4 0016A514  48 04 6E 51 */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 8016D5D8 0016A518  38 60 00 00 */	li r3, 0
/* 8016D5DC 0016A51C  48 00 00 E4 */	b .L_8016D6C0
.L_8016D5E0:
/* 8016D5E0 0016A520  28 00 00 04 */	cmplwi r0, 4
/* 8016D5E4 0016A524  40 82 00 34 */	bne .L_8016D618
/* 8016D5E8 0016A528  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8016D5EC 0016A52C  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8016D5F0 0016A530  38 63 00 0C */	addi r3, r3, 0xc
/* 8016D5F4 0016A534  48 07 7E 0D */	bl __cl__Q24Game11KindCounterFi
/* 8016D5F8 0016A538  88 03 00 00 */	lbz r0, 0(r3)
/* 8016D5FC 0016A53C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016D600 0016A540  41 82 00 18 */	beq .L_8016D618
/* 8016D604 0016A544  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016D608 0016A548  80 9E 00 08 */	lwz r4, 8(r30)
/* 8016D60C 0016A54C  48 04 6E 19 */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 8016D610 0016A550  38 60 00 00 */	li r3, 0
/* 8016D614 0016A554  48 00 00 AC */	b .L_8016D6C0
.L_8016D618:
/* 8016D618 0016A558  88 1E 00 1F */	lbz r0, 0x1f(r30)
/* 8016D61C 0016A55C  28 00 00 00 */	cmplwi r0, 0
/* 8016D620 0016A560  41 82 00 6C */	beq .L_8016D68C
/* 8016D624 0016A564  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016D628 0016A568  80 9E 00 08 */	lwz r4, 8(r30)
/* 8016D62C 0016A56C  48 04 6D F9 */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 8016D630 0016A570  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016D634 0016A574  7C 64 1B 78 */	mr r4, r3
/* 8016D638 0016A578  7F E3 FB 78 */	mr r3, r31
/* 8016D63C 0016A57C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8016D640 0016A580  7D 89 03 A6 */	mtctr r12
/* 8016D644 0016A584  4E 80 04 21 */	bctrl 
/* 8016D648 0016A588  7C 7D 1B 79 */	or. r29, r3, r3
/* 8016D64C 0016A58C  41 82 00 38 */	beq .L_8016D684
/* 8016D650 0016A590  7F E3 FB 78 */	mr r3, r31
/* 8016D654 0016A594  80 9D 04 40 */	lwz r4, 0x440(r29)
/* 8016D658 0016A598  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016D65C 0016A59C  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8016D660 0016A5A0  7D 89 03 A6 */	mtctr r12
/* 8016D664 0016A5A4  4E 80 04 21 */	bctrl 
/* 8016D668 0016A5A8  38 00 00 01 */	li r0, 1
/* 8016D66C 0016A5AC  7F A3 EB 78 */	mr r3, r29
/* 8016D670 0016A5B0  98 1E 00 1C */	stb r0, 0x1c(r30)
/* 8016D674 0016A5B4  7F C4 F3 78 */	mr r4, r30
/* 8016D678 0016A5B8  4B FC D9 51 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8016D67C 0016A5BC  7F A3 EB 78 */	mr r3, r29
/* 8016D680 0016A5C0  48 00 00 40 */	b .L_8016D6C0
.L_8016D684:
/* 8016D684 0016A5C4  38 60 00 00 */	li r3, 0
/* 8016D688 0016A5C8  48 00 00 38 */	b .L_8016D6C0
.L_8016D68C:
/* 8016D68C 0016A5CC  7F E3 FB 78 */	mr r3, r31
/* 8016D690 0016A5D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016D694 0016A5D4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8016D698 0016A5D8  7D 89 03 A6 */	mtctr r12
/* 8016D69C 0016A5DC  4E 80 04 21 */	bctrl 
/* 8016D6A0 0016A5E0  7C 7D 1B 79 */	or. r29, r3, r3
/* 8016D6A4 0016A5E4  41 82 00 18 */	beq .L_8016D6BC
/* 8016D6A8 0016A5E8  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8016D6AC 0016A5EC  7F C4 F3 78 */	mr r4, r30
/* 8016D6B0 0016A5F0  90 1D 03 58 */	stw r0, 0x358(r29)
/* 8016D6B4 0016A5F4  93 FD 04 54 */	stw r31, 0x454(r29)
/* 8016D6B8 0016A5F8  4B FC D9 11 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
.L_8016D6BC:
/* 8016D6BC 0016A5FC  7F A3 EB 78 */	mr r3, r29
.L_8016D6C0:
/* 8016D6C0 0016A600  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016D6C4 0016A604  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016D6C8 0016A608  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016D6CC 0016A60C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016D6D0 0016A610  7C 08 03 A6 */	mtlr r0
/* 8016D6D4 0016A614  38 21 00 20 */	addi r1, r1, 0x20
/* 8016D6D8 0016A618  4E 80 00 20 */	blr 
.endfn birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg

.fn setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg, global
/* 8016D6DC 0016A61C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D6E0 0016A620  7C 08 02 A6 */	mflr r0
/* 8016D6E4 0016A624  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D6E8 0016A628  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D6EC 0016A62C  7C 7F 1B 78 */	mr r31, r3
/* 8016D6F0 0016A630  38 60 00 00 */	li r3, 0
/* 8016D6F4 0016A634  93 C1 00 08 */	stw r30, 8(r1)
/* 8016D6F8 0016A638  7C 9E 23 79 */	or. r30, r4, r4
/* 8016D6FC 0016A63C  41 82 00 14 */	beq .L_8016D710
/* 8016D700 0016A640  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 8016D704 0016A644  28 00 00 FF */	cmplwi r0, 0xff
/* 8016D708 0016A648  41 82 00 08 */	beq .L_8016D710
/* 8016D70C 0016A64C  38 60 00 01 */	li r3, 1
.L_8016D710:
/* 8016D710 0016A650  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016D714 0016A654  40 82 00 20 */	bne .L_8016D734
/* 8016D718 0016A658  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016D71C 0016A65C  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016D720 0016A660  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016D724 0016A664  38 80 15 9B */	li r4, 0x159b
/* 8016D728 0016A668  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016D72C 0016A66C  4C C6 31 82 */	crclr 6
/* 8016D730 0016A670  4B EB CF 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016D734:
/* 8016D734 0016A674  88 9E 00 16 */	lbz r4, 0x16(r30)
/* 8016D738 0016A678  7F E3 FB 78 */	mr r3, r31
/* 8016D73C 0016A67C  48 00 19 91 */	bl getMgrByID__Q24Game9PelletMgrFUc
/* 8016D740 0016A680  7C 7F 1B 79 */	or. r31, r3, r3
/* 8016D744 0016A684  40 82 00 20 */	bne .L_8016D764
/* 8016D748 0016A688  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016D74C 0016A68C  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016D750 0016A690  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016D754 0016A694  38 80 15 9D */	li r4, 0x159d
/* 8016D758 0016A698  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016D75C 0016A69C  4C C6 31 82 */	crclr 6
/* 8016D760 0016A6A0  4B EB CE E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016D764:
/* 8016D764 0016A6A4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8016D768 0016A6A8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8016D76C 0016A6AC  2C 00 00 04 */	cmpwi r0, 4
/* 8016D770 0016A6B0  41 82 00 AC */	beq .L_8016D81C
/* 8016D774 0016A6B4  88 1E 00 17 */	lbz r0, 0x17(r30)
/* 8016D778 0016A6B8  28 00 00 00 */	cmplwi r0, 0
/* 8016D77C 0016A6BC  40 82 00 A0 */	bne .L_8016D81C
/* 8016D780 0016A6C0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016D784 0016A6C4  80 9E 00 08 */	lwz r4, 8(r30)
/* 8016D788 0016A6C8  48 04 6C 9D */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 8016D78C 0016A6CC  7C 64 1B 78 */	mr r4, r3
/* 8016D790 0016A6D0  38 62 A6 98 */	addi r3, r2, lbl_805189F8@sda21
/* 8016D794 0016A6D4  80 84 01 80 */	lwz r4, 0x180(r4)
/* 8016D798 0016A6D8  4B F5 CF 29 */	bl strcmp
/* 8016D79C 0016A6DC  2C 03 00 00 */	cmpwi r3, 0
/* 8016D7A0 0016A6E0  40 82 00 7C */	bne .L_8016D81C
/* 8016D7A4 0016A6E4  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 8016D7A8 0016A6E8  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 8016D7AC 0016A6EC  28 00 00 03 */	cmplwi r0, 3
/* 8016D7B0 0016A6F0  40 82 00 34 */	bne .L_8016D7E4
/* 8016D7B4 0016A6F4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8016D7B8 0016A6F8  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8016D7BC 0016A6FC  38 63 00 04 */	addi r3, r3, 4
/* 8016D7C0 0016A700  48 07 7C 41 */	bl __cl__Q24Game11KindCounterFi
/* 8016D7C4 0016A704  88 03 00 00 */	lbz r0, 0(r3)
/* 8016D7C8 0016A708  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016D7CC 0016A70C  41 82 00 50 */	beq .L_8016D81C
/* 8016D7D0 0016A710  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016D7D4 0016A714  80 9E 00 08 */	lwz r4, 8(r30)
/* 8016D7D8 0016A718  48 04 6C 4D */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 8016D7DC 0016A71C  38 60 00 00 */	li r3, 0
/* 8016D7E0 0016A720  48 00 00 90 */	b .L_8016D870
.L_8016D7E4:
/* 8016D7E4 0016A724  28 00 00 04 */	cmplwi r0, 4
/* 8016D7E8 0016A728  40 82 00 34 */	bne .L_8016D81C
/* 8016D7EC 0016A72C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8016D7F0 0016A730  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8016D7F4 0016A734  38 63 00 0C */	addi r3, r3, 0xc
/* 8016D7F8 0016A738  48 07 7C 09 */	bl __cl__Q24Game11KindCounterFi
/* 8016D7FC 0016A73C  88 03 00 00 */	lbz r0, 0(r3)
/* 8016D800 0016A740  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016D804 0016A744  41 82 00 18 */	beq .L_8016D81C
/* 8016D808 0016A748  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016D80C 0016A74C  80 9E 00 08 */	lwz r4, 8(r30)
/* 8016D810 0016A750  48 04 6C 15 */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 8016D814 0016A754  38 60 00 00 */	li r3, 0
/* 8016D818 0016A758  48 00 00 58 */	b .L_8016D870
.L_8016D81C:
/* 8016D81C 0016A75C  83 DE 00 10 */	lwz r30, 0x10(r30)
/* 8016D820 0016A760  38 60 00 00 */	li r3, 0
/* 8016D824 0016A764  2C 1E 00 00 */	cmpwi r30, 0
/* 8016D828 0016A768  41 80 00 14 */	blt .L_8016D83C
/* 8016D82C 0016A76C  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 8016D830 0016A770  7C 1E 00 00 */	cmpw r30, r0
/* 8016D834 0016A774  40 80 00 08 */	bge .L_8016D83C
/* 8016D838 0016A778  38 60 00 01 */	li r3, 1
.L_8016D83C:
/* 8016D83C 0016A77C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016D840 0016A780  40 82 00 20 */	bne .L_8016D860
/* 8016D844 0016A784  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016D848 0016A788  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016D84C 0016A78C  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016D850 0016A790  38 80 11 43 */	li r4, 0x1143
/* 8016D854 0016A794  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016D858 0016A798  4C C6 31 82 */	crclr 6
/* 8016D85C 0016A79C  4B EB CD E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016D860:
/* 8016D860 0016A7A0  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 8016D864 0016A7A4  38 00 00 01 */	li r0, 1
/* 8016D868 0016A7A8  38 60 00 01 */	li r3, 1
/* 8016D86C 0016A7AC  7C 04 F1 AE */	stbx r0, r4, r30
.L_8016D870:
/* 8016D870 0016A7B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D874 0016A7B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D878 0016A7B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016D87C 0016A7BC  7C 08 03 A6 */	mtlr r0
/* 8016D880 0016A7C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D884 0016A7C4  4E 80 00 20 */	blr 
.endfn setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg

.fn isNull__Q34Game9PelletMgr15OtakaraItemCodeFv, global
/* 8016D888 0016A7C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016D88C 0016A7CC  7C 08 02 A6 */	mflr r0
/* 8016D890 0016A7D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016D894 0016A7D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016D898 0016A7D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016D89C 0016A7DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016D8A0 0016A7E0  7C 7D 1B 78 */	mr r29, r3
/* 8016D8A4 0016A7E4  3C 60 80 48 */	lis r3, lbl_8047E318@ha
/* 8016D8A8 0016A7E8  A8 DD 00 00 */	lha r6, 0(r29)
/* 8016D8AC 0016A7EC  3B E3 E3 18 */	addi r31, r3, lbl_8047E318@l
/* 8016D8B0 0016A7F0  7C C0 07 35 */	extsh. r0, r6
/* 8016D8B4 0016A7F4  40 82 00 0C */	bne .L_8016D8C0
/* 8016D8B8 0016A7F8  38 60 00 01 */	li r3, 1
/* 8016D8BC 0016A7FC  48 00 01 0C */	b .L_8016D9C8
.L_8016D8C0:
/* 8016D8C0 0016A800  7C C0 46 70 */	srawi r0, r6, 8
/* 8016D8C4 0016A804  3B C0 00 00 */	li r30, 0
/* 8016D8C8 0016A808  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8016D8CC 0016A80C  28 00 00 03 */	cmplwi r0, 3
/* 8016D8D0 0016A810  40 82 00 0C */	bne .L_8016D8DC
/* 8016D8D4 0016A814  83 CD 95 20 */	lwz r30, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 8016D8D8 0016A818  48 00 00 10 */	b .L_8016D8E8
.L_8016D8DC:
/* 8016D8DC 0016A81C  28 00 00 04 */	cmplwi r0, 4
/* 8016D8E0 0016A820  40 82 00 08 */	bne .L_8016D8E8
/* 8016D8E4 0016A824  83 CD 95 28 */	lwz r30, mgr__Q24Game10PelletItem@sda21(r13)
.L_8016D8E8:
/* 8016D8E8 0016A828  28 1E 00 00 */	cmplwi r30, 0
/* 8016D8EC 0016A82C  40 82 00 18 */	bne .L_8016D904
/* 8016D8F0 0016A830  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8016D8F4 0016A834  38 BF 01 90 */	addi r5, r31, 0x190
/* 8016D8F8 0016A838  38 80 15 C6 */	li r4, 0x15c6
/* 8016D8FC 0016A83C  4C C6 31 82 */	crclr 6
/* 8016D900 0016A840  4B EB CD 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016D904:
/* 8016D904 0016A844  A8 DD 00 00 */	lha r6, 0(r29)
/* 8016D908 0016A848  54 C7 06 3F */	clrlwi. r7, r6, 0x18
/* 8016D90C 0016A84C  41 80 00 14 */	blt .L_8016D920
/* 8016D910 0016A850  80 7E 00 08 */	lwz r3, 8(r30)
/* 8016D914 0016A854  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016D918 0016A858  7C 07 00 00 */	cmpw r7, r0
/* 8016D91C 0016A85C  41 80 00 0C */	blt .L_8016D928
.L_8016D920:
/* 8016D920 0016A860  3B C0 00 00 */	li r30, 0
/* 8016D924 0016A864  48 00 00 10 */	b .L_8016D934
.L_8016D928:
/* 8016D928 0016A868  1C 07 02 60 */	mulli r0, r7, 0x260
/* 8016D92C 0016A86C  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8016D930 0016A870  7F C3 02 14 */	add r30, r3, r0
.L_8016D934:
/* 8016D934 0016A874  28 1E 00 00 */	cmplwi r30, 0
/* 8016D938 0016A878  40 82 00 18 */	bne .L_8016D950
/* 8016D93C 0016A87C  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8016D940 0016A880  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 8016D944 0016A884  38 80 15 CA */	li r4, 0x15ca
/* 8016D948 0016A888  4C C6 31 82 */	crclr 6
/* 8016D94C 0016A88C  4B EB CC F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016D950:
/* 8016D950 0016A890  80 9E 01 80 */	lwz r4, 0x180(r30)
/* 8016D954 0016A894  38 62 A6 98 */	addi r3, r2, lbl_805189F8@sda21
/* 8016D958 0016A898  4B F5 CD 69 */	bl strcmp
/* 8016D95C 0016A89C  2C 03 00 00 */	cmpwi r3, 0
/* 8016D960 0016A8A0  40 82 00 64 */	bne .L_8016D9C4
/* 8016D964 0016A8A4  A8 7D 00 00 */	lha r3, 0(r29)
/* 8016D968 0016A8A8  7C 60 46 70 */	srawi r0, r3, 8
/* 8016D96C 0016A8AC  54 64 06 3E */	clrlwi r4, r3, 0x18
/* 8016D970 0016A8B0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8016D974 0016A8B4  28 00 00 03 */	cmplwi r0, 3
/* 8016D978 0016A8B8  40 82 00 28 */	bne .L_8016D9A0
/* 8016D97C 0016A8BC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8016D980 0016A8C0  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8016D984 0016A8C4  38 63 00 04 */	addi r3, r3, 4
/* 8016D988 0016A8C8  48 07 7A 79 */	bl __cl__Q24Game11KindCounterFi
/* 8016D98C 0016A8CC  88 03 00 00 */	lbz r0, 0(r3)
/* 8016D990 0016A8D0  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016D994 0016A8D4  41 82 00 30 */	beq .L_8016D9C4
/* 8016D998 0016A8D8  38 60 00 01 */	li r3, 1
/* 8016D99C 0016A8DC  48 00 00 2C */	b .L_8016D9C8
.L_8016D9A0:
/* 8016D9A0 0016A8E0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8016D9A4 0016A8E4  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8016D9A8 0016A8E8  38 63 00 0C */	addi r3, r3, 0xc
/* 8016D9AC 0016A8EC  48 07 7A 55 */	bl __cl__Q24Game11KindCounterFi
/* 8016D9B0 0016A8F0  88 03 00 00 */	lbz r0, 0(r3)
/* 8016D9B4 0016A8F4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016D9B8 0016A8F8  41 82 00 0C */	beq .L_8016D9C4
/* 8016D9BC 0016A8FC  38 60 00 01 */	li r3, 1
/* 8016D9C0 0016A900  48 00 00 08 */	b .L_8016D9C8
.L_8016D9C4:
/* 8016D9C4 0016A904  38 60 00 00 */	li r3, 0
.L_8016D9C8:
/* 8016D9C8 0016A908  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016D9CC 0016A90C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016D9D0 0016A910  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016D9D4 0016A914  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016D9D8 0016A918  7C 08 03 A6 */	mtlr r0
/* 8016D9DC 0016A91C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016D9E0 0016A920  4E 80 00 20 */	blr 
.endfn isNull__Q34Game9PelletMgr15OtakaraItemCodeFv

.fn makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc, global
/* 8016D9E4 0016A924  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016D9E8 0016A928  7C 08 02 A6 */	mflr r0
/* 8016D9EC 0016A92C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016D9F0 0016A930  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8016D9F4 0016A934  7C 7B 1B 78 */	mr r27, r3
/* 8016D9F8 0016A938  7C BD 2B 78 */	mr r29, r5
/* 8016D9FC 0016A93C  7C 9C 23 78 */	mr r28, r4
/* 8016DA00 0016A940  7F A4 EB 78 */	mr r4, r29
/* 8016DA04 0016A944  83 ED 95 20 */	lwz r31, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 8016DA08 0016A948  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016DA0C 0016A94C  48 04 6A 19 */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 8016DA10 0016A950  28 03 00 00 */	cmplwi r3, 0
/* 8016DA14 0016A954  7C 7E 1B 78 */	mr r30, r3
/* 8016DA18 0016A958  40 82 00 18 */	bne .L_8016DA30
/* 8016DA1C 0016A95C  83 ED 95 28 */	lwz r31, mgr__Q24Game10PelletItem@sda21(r13)
/* 8016DA20 0016A960  7F A4 EB 78 */	mr r4, r29
/* 8016DA24 0016A964  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016DA28 0016A968  48 04 69 FD */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 8016DA2C 0016A96C  7C 7E 1B 78 */	mr r30, r3
.L_8016DA30:
/* 8016DA30 0016A970  28 1E 00 00 */	cmplwi r30, 0
/* 8016DA34 0016A974  40 82 00 24 */	bne .L_8016DA58
/* 8016DA38 0016A978  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016DA3C 0016A97C  3C 80 80 48 */	lis r4, lbl_8047E4E8@ha
/* 8016DA40 0016A980  38 A4 E4 E8 */	addi r5, r4, lbl_8047E4E8@l
/* 8016DA44 0016A984  7F A6 EB 78 */	mr r6, r29
/* 8016DA48 0016A988  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016DA4C 0016A98C  38 80 15 EE */	li r4, 0x15ee
/* 8016DA50 0016A990  4C C6 31 82 */	crclr 6
/* 8016DA54 0016A994  4B EB CB ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016DA58:
/* 8016DA58 0016A998  93 BC 00 08 */	stw r29, 8(r28)
/* 8016DA5C 0016A99C  7F E3 FB 78 */	mr r3, r31
/* 8016DA60 0016A9A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016DA64 0016A9A4  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8016DA68 0016A9A8  7D 89 03 A6 */	mtctr r12
/* 8016DA6C 0016A9AC  4E 80 04 21 */	bctrl 
/* 8016DA70 0016A9B0  98 7C 00 16 */	stb r3, 0x16(r28)
/* 8016DA74 0016A9B4  38 00 00 00 */	li r0, 0
/* 8016DA78 0016A9B8  7F 63 DB 78 */	mr r3, r27
/* 8016DA7C 0016A9BC  7F 84 E3 78 */	mr r4, r28
/* 8016DA80 0016A9C0  A8 DE 02 58 */	lha r6, 0x258(r30)
/* 8016DA84 0016A9C4  7F A5 EB 78 */	mr r5, r29
/* 8016DA88 0016A9C8  90 DC 00 10 */	stw r6, 0x10(r28)
/* 8016DA8C 0016A9CC  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8016DA90 0016A9D0  48 00 00 1D */	bl makeVsCarryMinMax__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc
/* 8016DA94 0016A9D4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8016DA98 0016A9D8  38 60 00 01 */	li r3, 1
/* 8016DA9C 0016A9DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016DAA0 0016A9E0  7C 08 03 A6 */	mtlr r0
/* 8016DAA4 0016A9E4  38 21 00 20 */	addi r1, r1, 0x20
/* 8016DAA8 0016A9E8  4E 80 00 20 */	blr 
.endfn makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc

.fn makeVsCarryMinMax__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc, global
/* 8016DAAC 0016A9EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016DAB0 0016A9F0  7C 08 02 A6 */	mflr r0
/* 8016DAB4 0016A9F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016DAB8 0016A9F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DABC 0016A9FC  7C BF 2B 78 */	mr r31, r5
/* 8016DAC0 0016AA00  93 C1 00 08 */	stw r30, 8(r1)
/* 8016DAC4 0016AA04  7C 9E 23 78 */	mr r30, r4
/* 8016DAC8 0016AA08  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8016DACC 0016AA0C  28 03 00 00 */	cmplwi r3, 0
/* 8016DAD0 0016AA10  41 82 00 A8 */	beq .L_8016DB78
/* 8016DAD4 0016AA14  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8016DAD8 0016AA18  2C 00 00 01 */	cmpwi r0, 1
/* 8016DADC 0016AA1C  40 82 00 9C */	bne .L_8016DB78
/* 8016DAE0 0016AA20  80 6D 84 84 */	lwz r3, cBedamaYellow__13VsOtakaraName@sda21(r13)
/* 8016DAE4 0016AA24  7F E4 FB 78 */	mr r4, r31
/* 8016DAE8 0016AA28  4B F5 CB D9 */	bl strcmp
/* 8016DAEC 0016AA2C  2C 03 00 00 */	cmpwi r3, 0
/* 8016DAF0 0016AA30  40 82 00 18 */	bne .L_8016DB08
/* 8016DAF4 0016AA34  38 60 00 01 */	li r3, 1
/* 8016DAF8 0016AA38  38 00 00 08 */	li r0, 8
/* 8016DAFC 0016AA3C  90 7E 00 20 */	stw r3, 0x20(r30)
/* 8016DB00 0016AA40  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8016DB04 0016AA44  48 00 00 74 */	b .L_8016DB78
.L_8016DB08:
/* 8016DB08 0016AA48  80 6D 84 80 */	lwz r3, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 8016DB0C 0016AA4C  7F E4 FB 78 */	mr r4, r31
/* 8016DB10 0016AA50  4B F5 CB B1 */	bl strcmp
/* 8016DB14 0016AA54  2C 03 00 00 */	cmpwi r3, 0
/* 8016DB18 0016AA58  40 82 00 18 */	bne .L_8016DB30
/* 8016DB1C 0016AA5C  38 60 00 01 */	li r3, 1
/* 8016DB20 0016AA60  38 00 00 08 */	li r0, 8
/* 8016DB24 0016AA64  90 7E 00 20 */	stw r3, 0x20(r30)
/* 8016DB28 0016AA68  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8016DB2C 0016AA6C  48 00 00 4C */	b .L_8016DB78
.L_8016DB30:
/* 8016DB30 0016AA70  80 6D 84 7C */	lwz r3, cBedamaBlue__13VsOtakaraName@sda21(r13)
/* 8016DB34 0016AA74  7F E4 FB 78 */	mr r4, r31
/* 8016DB38 0016AA78  4B F5 CB 89 */	bl strcmp
/* 8016DB3C 0016AA7C  2C 03 00 00 */	cmpwi r3, 0
/* 8016DB40 0016AA80  40 82 00 18 */	bne .L_8016DB58
/* 8016DB44 0016AA84  38 60 00 01 */	li r3, 1
/* 8016DB48 0016AA88  38 00 00 08 */	li r0, 8
/* 8016DB4C 0016AA8C  90 7E 00 20 */	stw r3, 0x20(r30)
/* 8016DB50 0016AA90  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8016DB54 0016AA94  48 00 00 24 */	b .L_8016DB78
.L_8016DB58:
/* 8016DB58 0016AA98  80 6D 84 78 */	lwz r3, cCoin__13VsOtakaraName@sda21(r13)
/* 8016DB5C 0016AA9C  7F E4 FB 78 */	mr r4, r31
/* 8016DB60 0016AAA0  4B F5 CB 61 */	bl strcmp
/* 8016DB64 0016AAA4  2C 03 00 00 */	cmpwi r3, 0
/* 8016DB68 0016AAA8  40 82 00 10 */	bne .L_8016DB78
/* 8016DB6C 0016AAAC  38 00 00 01 */	li r0, 1
/* 8016DB70 0016AAB0  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8016DB74 0016AAB4  90 1E 00 24 */	stw r0, 0x24(r30)
.L_8016DB78:
/* 8016DB78 0016AAB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016DB7C 0016AABC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016DB80 0016AAC0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016DB84 0016AAC4  7C 08 03 A6 */	mtlr r0
/* 8016DB88 0016AAC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016DB8C 0016AACC  4E 80 00 20 */	blr 
.endfn makeVsCarryMinMax__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc

.fn makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode, global
/* 8016DB90 0016AAD0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016DB94 0016AAD4  7C 08 02 A6 */	mflr r0
/* 8016DB98 0016AAD8  3C 60 80 48 */	lis r3, lbl_8047E318@ha
/* 8016DB9C 0016AADC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016DBA0 0016AAE0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DBA4 0016AAE4  3B E3 E3 18 */	addi r31, r3, lbl_8047E318@l
/* 8016DBA8 0016AAE8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016DBAC 0016AAEC  7C BE 2B 78 */	mr r30, r5
/* 8016DBB0 0016AAF0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016DBB4 0016AAF4  7C 9D 23 78 */	mr r29, r4
/* 8016DBB8 0016AAF8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016DBBC 0016AAFC  A8 C5 00 00 */	lha r6, 0(r5)
/* 8016DBC0 0016AB00  7C C0 07 35 */	extsh. r0, r6
/* 8016DBC4 0016AB04  40 82 00 0C */	bne .L_8016DBD0
/* 8016DBC8 0016AB08  38 00 00 01 */	li r0, 1
/* 8016DBCC 0016AB0C  48 00 01 0C */	b .L_8016DCD8
.L_8016DBD0:
/* 8016DBD0 0016AB10  7C C0 46 70 */	srawi r0, r6, 8
/* 8016DBD4 0016AB14  3B 80 00 00 */	li r28, 0
/* 8016DBD8 0016AB18  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8016DBDC 0016AB1C  28 00 00 03 */	cmplwi r0, 3
/* 8016DBE0 0016AB20  40 82 00 0C */	bne .L_8016DBEC
/* 8016DBE4 0016AB24  83 8D 95 20 */	lwz r28, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 8016DBE8 0016AB28  48 00 00 10 */	b .L_8016DBF8
.L_8016DBEC:
/* 8016DBEC 0016AB2C  28 00 00 04 */	cmplwi r0, 4
/* 8016DBF0 0016AB30  40 82 00 08 */	bne .L_8016DBF8
/* 8016DBF4 0016AB34  83 8D 95 28 */	lwz r28, mgr__Q24Game10PelletItem@sda21(r13)
.L_8016DBF8:
/* 8016DBF8 0016AB38  28 1C 00 00 */	cmplwi r28, 0
/* 8016DBFC 0016AB3C  40 82 00 18 */	bne .L_8016DC14
/* 8016DC00 0016AB40  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8016DC04 0016AB44  38 BF 01 90 */	addi r5, r31, 0x190
/* 8016DC08 0016AB48  38 80 15 C6 */	li r4, 0x15c6
/* 8016DC0C 0016AB4C  4C C6 31 82 */	crclr 6
/* 8016DC10 0016AB50  4B EB CA 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016DC14:
/* 8016DC14 0016AB54  A8 DE 00 00 */	lha r6, 0(r30)
/* 8016DC18 0016AB58  54 C7 06 3F */	clrlwi. r7, r6, 0x18
/* 8016DC1C 0016AB5C  41 80 00 14 */	blt .L_8016DC30
/* 8016DC20 0016AB60  80 7C 00 08 */	lwz r3, 8(r28)
/* 8016DC24 0016AB64  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016DC28 0016AB68  7C 07 00 00 */	cmpw r7, r0
/* 8016DC2C 0016AB6C  41 80 00 0C */	blt .L_8016DC38
.L_8016DC30:
/* 8016DC30 0016AB70  3B 80 00 00 */	li r28, 0
/* 8016DC34 0016AB74  48 00 00 10 */	b .L_8016DC44
.L_8016DC38:
/* 8016DC38 0016AB78  1C 07 02 60 */	mulli r0, r7, 0x260
/* 8016DC3C 0016AB7C  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8016DC40 0016AB80  7F 83 02 14 */	add r28, r3, r0
.L_8016DC44:
/* 8016DC44 0016AB84  28 1C 00 00 */	cmplwi r28, 0
/* 8016DC48 0016AB88  40 82 00 18 */	bne .L_8016DC60
/* 8016DC4C 0016AB8C  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8016DC50 0016AB90  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 8016DC54 0016AB94  38 80 15 CA */	li r4, 0x15ca
/* 8016DC58 0016AB98  4C C6 31 82 */	crclr 6
/* 8016DC5C 0016AB9C  4B EB C9 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016DC60:
/* 8016DC60 0016ABA0  80 9C 01 80 */	lwz r4, 0x180(r28)
/* 8016DC64 0016ABA4  38 62 A6 98 */	addi r3, r2, lbl_805189F8@sda21
/* 8016DC68 0016ABA8  4B F5 CA 59 */	bl strcmp
/* 8016DC6C 0016ABAC  2C 03 00 00 */	cmpwi r3, 0
/* 8016DC70 0016ABB0  40 82 00 64 */	bne .L_8016DCD4
/* 8016DC74 0016ABB4  A8 7E 00 00 */	lha r3, 0(r30)
/* 8016DC78 0016ABB8  7C 60 46 70 */	srawi r0, r3, 8
/* 8016DC7C 0016ABBC  54 64 06 3E */	clrlwi r4, r3, 0x18
/* 8016DC80 0016ABC0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8016DC84 0016ABC4  28 00 00 03 */	cmplwi r0, 3
/* 8016DC88 0016ABC8  40 82 00 28 */	bne .L_8016DCB0
/* 8016DC8C 0016ABCC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8016DC90 0016ABD0  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8016DC94 0016ABD4  38 63 00 04 */	addi r3, r3, 4
/* 8016DC98 0016ABD8  48 07 77 69 */	bl __cl__Q24Game11KindCounterFi
/* 8016DC9C 0016ABDC  88 03 00 00 */	lbz r0, 0(r3)
/* 8016DCA0 0016ABE0  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016DCA4 0016ABE4  41 82 00 30 */	beq .L_8016DCD4
/* 8016DCA8 0016ABE8  38 00 00 01 */	li r0, 1
/* 8016DCAC 0016ABEC  48 00 00 2C */	b .L_8016DCD8
.L_8016DCB0:
/* 8016DCB0 0016ABF0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8016DCB4 0016ABF4  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8016DCB8 0016ABF8  38 63 00 0C */	addi r3, r3, 0xc
/* 8016DCBC 0016ABFC  48 07 77 45 */	bl __cl__Q24Game11KindCounterFi
/* 8016DCC0 0016AC00  88 03 00 00 */	lbz r0, 0(r3)
/* 8016DCC4 0016AC04  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8016DCC8 0016AC08  41 82 00 0C */	beq .L_8016DCD4
/* 8016DCCC 0016AC0C  38 00 00 01 */	li r0, 1
/* 8016DCD0 0016AC10  48 00 00 08 */	b .L_8016DCD8
.L_8016DCD4:
/* 8016DCD4 0016AC14  38 00 00 00 */	li r0, 0
.L_8016DCD8:
/* 8016DCD8 0016AC18  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8016DCDC 0016AC1C  41 82 00 0C */	beq .L_8016DCE8
/* 8016DCE0 0016AC20  38 60 00 00 */	li r3, 0
/* 8016DCE4 0016AC24  48 00 01 78 */	b .L_8016DE5C
.L_8016DCE8:
/* 8016DCE8 0016AC28  A8 DE 00 00 */	lha r6, 0(r30)
/* 8016DCEC 0016AC2C  3B 80 00 00 */	li r28, 0
/* 8016DCF0 0016AC30  7C C0 46 70 */	srawi r0, r6, 8
/* 8016DCF4 0016AC34  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8016DCF8 0016AC38  28 00 00 03 */	cmplwi r0, 3
/* 8016DCFC 0016AC3C  40 82 00 0C */	bne .L_8016DD08
/* 8016DD00 0016AC40  83 8D 95 20 */	lwz r28, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 8016DD04 0016AC44  48 00 00 10 */	b .L_8016DD14
.L_8016DD08:
/* 8016DD08 0016AC48  28 00 00 04 */	cmplwi r0, 4
/* 8016DD0C 0016AC4C  40 82 00 08 */	bne .L_8016DD14
/* 8016DD10 0016AC50  83 8D 95 28 */	lwz r28, mgr__Q24Game10PelletItem@sda21(r13)
.L_8016DD14:
/* 8016DD14 0016AC54  28 1C 00 00 */	cmplwi r28, 0
/* 8016DD18 0016AC58  40 82 00 18 */	bne .L_8016DD30
/* 8016DD1C 0016AC5C  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8016DD20 0016AC60  38 BF 01 90 */	addi r5, r31, 0x190
/* 8016DD24 0016AC64  38 80 16 28 */	li r4, 0x1628
/* 8016DD28 0016AC68  4C C6 31 82 */	crclr 6
/* 8016DD2C 0016AC6C  4B EB C9 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016DD30:
/* 8016DD30 0016AC70  A8 DE 00 00 */	lha r6, 0(r30)
/* 8016DD34 0016AC74  54 C7 06 3F */	clrlwi. r7, r6, 0x18
/* 8016DD38 0016AC78  41 80 00 14 */	blt .L_8016DD4C
/* 8016DD3C 0016AC7C  80 7C 00 08 */	lwz r3, 8(r28)
/* 8016DD40 0016AC80  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016DD44 0016AC84  7C 07 00 00 */	cmpw r7, r0
/* 8016DD48 0016AC88  41 80 00 0C */	blt .L_8016DD54
.L_8016DD4C:
/* 8016DD4C 0016AC8C  3B 80 00 00 */	li r28, 0
/* 8016DD50 0016AC90  48 00 00 10 */	b .L_8016DD60
.L_8016DD54:
/* 8016DD54 0016AC94  1C 07 02 60 */	mulli r0, r7, 0x260
/* 8016DD58 0016AC98  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8016DD5C 0016AC9C  7F 83 02 14 */	add r28, r3, r0
.L_8016DD60:
/* 8016DD60 0016ACA0  28 1C 00 00 */	cmplwi r28, 0
/* 8016DD64 0016ACA4  40 82 00 18 */	bne .L_8016DD7C
/* 8016DD68 0016ACA8  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8016DD6C 0016ACAC  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 8016DD70 0016ACB0  38 80 16 2C */	li r4, 0x162c
/* 8016DD74 0016ACB4  4C C6 31 82 */	crclr 6
/* 8016DD78 0016ACB8  4B EB C8 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016DD7C:
/* 8016DD7C 0016ACBC  80 7C 00 40 */	lwz r3, 0x40(r28)
/* 8016DD80 0016ACC0  38 00 00 00 */	li r0, 0
/* 8016DD84 0016ACC4  90 7D 00 08 */	stw r3, 8(r29)
/* 8016DD88 0016ACC8  A8 7E 00 00 */	lha r3, 0(r30)
/* 8016DD8C 0016ACCC  7C 63 46 70 */	srawi r3, r3, 8
/* 8016DD90 0016ACD0  98 7D 00 16 */	stb r3, 0x16(r29)
/* 8016DD94 0016ACD4  A8 7E 00 00 */	lha r3, 0(r30)
/* 8016DD98 0016ACD8  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8016DD9C 0016ACDC  90 7D 00 10 */	stw r3, 0x10(r29)
/* 8016DDA0 0016ACE0  90 1D 00 18 */	stw r0, 0x18(r29)
/* 8016DDA4 0016ACE4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8016DDA8 0016ACE8  83 9D 00 08 */	lwz r28, 8(r29)
/* 8016DDAC 0016ACEC  28 03 00 00 */	cmplwi r3, 0
/* 8016DDB0 0016ACF0  41 82 00 A8 */	beq .L_8016DE58
/* 8016DDB4 0016ACF4  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8016DDB8 0016ACF8  2C 00 00 01 */	cmpwi r0, 1
/* 8016DDBC 0016ACFC  40 82 00 9C */	bne .L_8016DE58
/* 8016DDC0 0016AD00  80 6D 84 84 */	lwz r3, cBedamaYellow__13VsOtakaraName@sda21(r13)
/* 8016DDC4 0016AD04  7F 84 E3 78 */	mr r4, r28
/* 8016DDC8 0016AD08  4B F5 C8 F9 */	bl strcmp
/* 8016DDCC 0016AD0C  2C 03 00 00 */	cmpwi r3, 0
/* 8016DDD0 0016AD10  40 82 00 18 */	bne .L_8016DDE8
/* 8016DDD4 0016AD14  38 60 00 01 */	li r3, 1
/* 8016DDD8 0016AD18  38 00 00 08 */	li r0, 8
/* 8016DDDC 0016AD1C  90 7D 00 20 */	stw r3, 0x20(r29)
/* 8016DDE0 0016AD20  90 1D 00 24 */	stw r0, 0x24(r29)
/* 8016DDE4 0016AD24  48 00 00 74 */	b .L_8016DE58
.L_8016DDE8:
/* 8016DDE8 0016AD28  80 6D 84 80 */	lwz r3, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 8016DDEC 0016AD2C  7F 84 E3 78 */	mr r4, r28
/* 8016DDF0 0016AD30  4B F5 C8 D1 */	bl strcmp
/* 8016DDF4 0016AD34  2C 03 00 00 */	cmpwi r3, 0
/* 8016DDF8 0016AD38  40 82 00 18 */	bne .L_8016DE10
/* 8016DDFC 0016AD3C  38 60 00 01 */	li r3, 1
/* 8016DE00 0016AD40  38 00 00 08 */	li r0, 8
/* 8016DE04 0016AD44  90 7D 00 20 */	stw r3, 0x20(r29)
/* 8016DE08 0016AD48  90 1D 00 24 */	stw r0, 0x24(r29)
/* 8016DE0C 0016AD4C  48 00 00 4C */	b .L_8016DE58
.L_8016DE10:
/* 8016DE10 0016AD50  80 6D 84 7C */	lwz r3, cBedamaBlue__13VsOtakaraName@sda21(r13)
/* 8016DE14 0016AD54  7F 84 E3 78 */	mr r4, r28
/* 8016DE18 0016AD58  4B F5 C8 A9 */	bl strcmp
/* 8016DE1C 0016AD5C  2C 03 00 00 */	cmpwi r3, 0
/* 8016DE20 0016AD60  40 82 00 18 */	bne .L_8016DE38
/* 8016DE24 0016AD64  38 60 00 01 */	li r3, 1
/* 8016DE28 0016AD68  38 00 00 08 */	li r0, 8
/* 8016DE2C 0016AD6C  90 7D 00 20 */	stw r3, 0x20(r29)
/* 8016DE30 0016AD70  90 1D 00 24 */	stw r0, 0x24(r29)
/* 8016DE34 0016AD74  48 00 00 24 */	b .L_8016DE58
.L_8016DE38:
/* 8016DE38 0016AD78  80 6D 84 78 */	lwz r3, cCoin__13VsOtakaraName@sda21(r13)
/* 8016DE3C 0016AD7C  7F 84 E3 78 */	mr r4, r28
/* 8016DE40 0016AD80  4B F5 C8 81 */	bl strcmp
/* 8016DE44 0016AD84  2C 03 00 00 */	cmpwi r3, 0
/* 8016DE48 0016AD88  40 82 00 10 */	bne .L_8016DE58
/* 8016DE4C 0016AD8C  38 00 00 01 */	li r0, 1
/* 8016DE50 0016AD90  90 1D 00 20 */	stw r0, 0x20(r29)
/* 8016DE54 0016AD94  90 1D 00 24 */	stw r0, 0x24(r29)
.L_8016DE58:
/* 8016DE58 0016AD98  38 60 00 01 */	li r3, 1
.L_8016DE5C:
/* 8016DE5C 0016AD9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016DE60 0016ADA0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DE64 0016ADA4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016DE68 0016ADA8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016DE6C 0016ADAC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8016DE70 0016ADB0  7C 08 03 A6 */	mtlr r0
/* 8016DE74 0016ADB4  38 21 00 20 */	addi r1, r1, 0x20
/* 8016DE78 0016ADB8  4E 80 00 20 */	blr 
.endfn makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode

.fn makeOtakaraItemCode__Q24Game9PelletMgrFPcRQ34Game9PelletMgr15OtakaraItemCode, global
/* 8016DE7C 0016ADBC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016DE80 0016ADC0  7C 08 02 A6 */	mflr r0
/* 8016DE84 0016ADC4  7C 83 23 78 */	mr r3, r4
/* 8016DE88 0016ADC8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016DE8C 0016ADCC  38 81 00 08 */	addi r4, r1, 8
/* 8016DE90 0016ADD0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DE94 0016ADD4  7C BF 2B 78 */	mr r31, r5
/* 8016DE98 0016ADD8  48 0B 9F A9 */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 8016DE9C 0016ADDC  28 03 00 00 */	cmplwi r3, 0
/* 8016DEA0 0016ADE0  41 82 00 20 */	beq .L_8016DEC0
/* 8016DEA4 0016ADE4  A8 03 02 58 */	lha r0, 0x258(r3)
/* 8016DEA8 0016ADE8  80 81 00 08 */	lwz r4, 8(r1)
/* 8016DEAC 0016ADEC  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8016DEB0 0016ADF0  54 83 44 2E */	rlwinm r3, r4, 8, 0x10, 0x17
/* 8016DEB4 0016ADF4  7C 03 02 14 */	add r0, r3, r0
/* 8016DEB8 0016ADF8  B0 1F 00 00 */	sth r0, 0(r31)
/* 8016DEBC 0016ADFC  48 00 00 0C */	b .L_8016DEC8
.L_8016DEC0:
/* 8016DEC0 0016AE00  38 00 00 00 */	li r0, 0
/* 8016DEC4 0016AE04  B0 1F 00 00 */	sth r0, 0(r31)
.L_8016DEC8:
/* 8016DEC8 0016AE08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016DECC 0016AE0C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DED0 0016AE10  7C 08 03 A6 */	mtlr r0
/* 8016DED4 0016AE14  38 21 00 20 */	addi r1, r1, 0x20
/* 8016DED8 0016AE18  4E 80 00 20 */	blr 
.endfn makeOtakaraItemCode__Q24Game9PelletMgrFPcRQ34Game9PelletMgr15OtakaraItemCode

.fn read__Q34Game9PelletMgr15OtakaraItemCodeFR6Stream, global
/* 8016DEDC 0016AE1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016DEE0 0016AE20  7C 08 02 A6 */	mflr r0
/* 8016DEE4 0016AE24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016DEE8 0016AE28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DEEC 0016AE2C  7C 7F 1B 78 */	mr r31, r3
/* 8016DEF0 0016AE30  7C 83 23 78 */	mr r3, r4
/* 8016DEF4 0016AE34  48 2A 68 71 */	bl readShort__6StreamFv
/* 8016DEF8 0016AE38  B0 7F 00 00 */	sth r3, 0(r31)
/* 8016DEFC 0016AE3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016DF00 0016AE40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016DF04 0016AE44  7C 08 03 A6 */	mtlr r0
/* 8016DF08 0016AE48  38 21 00 10 */	addi r1, r1, 0x10
/* 8016DF0C 0016AE4C  4E 80 00 20 */	blr 
.endfn read__Q34Game9PelletMgr15OtakaraItemCodeFR6Stream

.fn write__Q34Game9PelletMgr15OtakaraItemCodeFR6Stream, global
/* 8016DF10 0016AE50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016DF14 0016AE54  7C 08 02 A6 */	mflr r0
/* 8016DF18 0016AE58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016DF1C 0016AE5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DF20 0016AE60  7C 9F 23 78 */	mr r31, r4
/* 8016DF24 0016AE64  93 C1 00 08 */	stw r30, 8(r1)
/* 8016DF28 0016AE68  7C 7E 1B 78 */	mr r30, r3
/* 8016DF2C 0016AE6C  7F E3 FB 78 */	mr r3, r31
/* 8016DF30 0016AE70  80 84 04 14 */	lwz r4, 0x414(r4)
/* 8016DF34 0016AE74  48 2A 65 01 */	bl textWriteTab__6StreamFi
/* 8016DF38 0016AE78  A8 9E 00 00 */	lha r4, 0(r30)
/* 8016DF3C 0016AE7C  7F E3 FB 78 */	mr r3, r31
/* 8016DF40 0016AE80  48 2A 77 F1 */	bl writeShort__6StreamFs
/* 8016DF44 0016AE84  3C 80 80 48 */	lis r4, lbl_8047E500@ha
/* 8016DF48 0016AE88  7F E3 FB 78 */	mr r3, r31
/* 8016DF4C 0016AE8C  38 84 E5 00 */	addi r4, r4, lbl_8047E500@l
/* 8016DF50 0016AE90  4C C6 31 82 */	crclr 6
/* 8016DF54 0016AE94  48 2A 62 89 */	bl textWriteText__6StreamFPce
/* 8016DF58 0016AE98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016DF5C 0016AE9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016DF60 0016AEA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016DF64 0016AEA4  7C 08 03 A6 */	mtlr r0
/* 8016DF68 0016AEA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016DF6C 0016AEAC  4E 80 00 20 */	blr 
.endfn write__Q34Game9PelletMgr15OtakaraItemCodeFR6Stream

.fn addMgr__Q24Game9PelletMgrFPQ24Game13BasePelletMgr, global
/* 8016DF70 0016AEB0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016DF74 0016AEB4  7C 08 02 A6 */	mflr r0
/* 8016DF78 0016AEB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016DF7C 0016AEBC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DF80 0016AEC0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016DF84 0016AEC4  7C 9E 23 78 */	mr r30, r4
/* 8016DF88 0016AEC8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016DF8C 0016AECC  7C 7D 1B 78 */	mr r29, r3
/* 8016DF90 0016AED0  38 60 00 1C */	li r3, 0x1c
/* 8016DF94 0016AED4  4B EB 5F 11 */	bl __nw__FUl
/* 8016DF98 0016AED8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8016DF9C 0016AEDC  41 82 00 14 */	beq .L_8016DFB0
/* 8016DFA0 0016AEE0  48 2A 33 F1 */	bl __ct__5CNodeFv
/* 8016DFA4 0016AEE4  3C 60 80 4B */	lis r3, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
/* 8016DFA8 0016AEE8  38 03 1B A4 */	addi r0, r3, "__vt__31TObjectNode<16GenericObjectMgr>"@l
/* 8016DFAC 0016AEEC  90 1F 00 00 */	stw r0, 0(r31)
.L_8016DFB0:
/* 8016DFB0 0016AEF0  93 DF 00 18 */	stw r30, 0x18(r31)
/* 8016DFB4 0016AEF4  7F E4 FB 78 */	mr r4, r31
/* 8016DFB8 0016AEF8  38 7D 00 20 */	addi r3, r29, 0x20
/* 8016DFBC 0016AEFC  48 2A 34 4D */	bl add__5CNodeFP5CNode
/* 8016DFC0 0016AF00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016DFC4 0016AF04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DFC8 0016AF08  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016DFCC 0016AF0C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016DFD0 0016AF10  7C 08 03 A6 */	mtlr r0
/* 8016DFD4 0016AF14  38 21 00 20 */	addi r1, r1, 0x20
/* 8016DFD8 0016AF18  4E 80 00 20 */	blr 
.endfn addMgr__Q24Game9PelletMgrFPQ24Game13BasePelletMgr

.fn doAnimation__Q24Game9PelletMgrFv, global
/* 8016DFDC 0016AF1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016DFE0 0016AF20  7C 08 02 A6 */	mflr r0
/* 8016DFE4 0016AF24  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 8016DFE8 0016AF28  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016DFEC 0016AF2C  38 00 00 00 */	li r0, 0
/* 8016DFF0 0016AF30  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 8016DFF4 0016AF34  28 00 00 00 */	cmplwi r0, 0
/* 8016DFF8 0016AF38  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016DFFC 0016AF3C  90 81 00 08 */	stw r4, 8(r1)
/* 8016E000 0016AF40  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016E004 0016AF44  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016E008 0016AF48  40 82 00 1C */	bne .L_8016E024
/* 8016E00C 0016AF4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E010 0016AF50  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E014 0016AF54  7D 89 03 A6 */	mtctr r12
/* 8016E018 0016AF58  4E 80 04 21 */	bctrl 
/* 8016E01C 0016AF5C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E020 0016AF60  48 00 01 70 */	b .L_8016E190
.L_8016E024:
/* 8016E024 0016AF64  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E028 0016AF68  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E02C 0016AF6C  7D 89 03 A6 */	mtctr r12
/* 8016E030 0016AF70  4E 80 04 21 */	bctrl 
/* 8016E034 0016AF74  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E038 0016AF78  48 00 00 58 */	b .L_8016E090
.L_8016E03C:
/* 8016E03C 0016AF7C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E040 0016AF80  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E044 0016AF84  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E048 0016AF88  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E04C 0016AF8C  7D 89 03 A6 */	mtctr r12
/* 8016E050 0016AF90  4E 80 04 21 */	bctrl 
/* 8016E054 0016AF94  7C 64 1B 78 */	mr r4, r3
/* 8016E058 0016AF98  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016E05C 0016AF9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E060 0016AFA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E064 0016AFA4  7D 89 03 A6 */	mtctr r12
/* 8016E068 0016AFA8  4E 80 04 21 */	bctrl 
/* 8016E06C 0016AFAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E070 0016AFB0  40 82 01 20 */	bne .L_8016E190
/* 8016E074 0016AFB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E078 0016AFB8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E07C 0016AFBC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E080 0016AFC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E084 0016AFC4  7D 89 03 A6 */	mtctr r12
/* 8016E088 0016AFC8  4E 80 04 21 */	bctrl 
/* 8016E08C 0016AFCC  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016E090:
/* 8016E090 0016AFD0  81 81 00 08 */	lwz r12, 8(r1)
/* 8016E094 0016AFD4  38 61 00 08 */	addi r3, r1, 8
/* 8016E098 0016AFD8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E09C 0016AFDC  7D 89 03 A6 */	mtctr r12
/* 8016E0A0 0016AFE0  4E 80 04 21 */	bctrl 
/* 8016E0A4 0016AFE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E0A8 0016AFE8  41 82 FF 94 */	beq .L_8016E03C
/* 8016E0AC 0016AFEC  48 00 00 E4 */	b .L_8016E190
.L_8016E0B0:
/* 8016E0B0 0016AFF0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E0B4 0016AFF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E0B8 0016AFF8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E0BC 0016AFFC  7D 89 03 A6 */	mtctr r12
/* 8016E0C0 0016B000  4E 80 04 21 */	bctrl 
/* 8016E0C4 0016B004  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E0C8 0016B008  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E0CC 0016B00C  7D 89 03 A6 */	mtctr r12
/* 8016E0D0 0016B010  4E 80 04 21 */	bctrl 
/* 8016E0D4 0016B014  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E0D8 0016B018  28 00 00 00 */	cmplwi r0, 0
/* 8016E0DC 0016B01C  40 82 00 24 */	bne .L_8016E100
/* 8016E0E0 0016B020  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E0E4 0016B024  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E0E8 0016B028  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E0EC 0016B02C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E0F0 0016B030  7D 89 03 A6 */	mtctr r12
/* 8016E0F4 0016B034  4E 80 04 21 */	bctrl 
/* 8016E0F8 0016B038  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E0FC 0016B03C  48 00 00 94 */	b .L_8016E190
.L_8016E100:
/* 8016E100 0016B040  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E104 0016B044  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E108 0016B048  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E10C 0016B04C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E110 0016B050  7D 89 03 A6 */	mtctr r12
/* 8016E114 0016B054  4E 80 04 21 */	bctrl 
/* 8016E118 0016B058  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E11C 0016B05C  48 00 00 58 */	b .L_8016E174
.L_8016E120:
/* 8016E120 0016B060  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E124 0016B064  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E128 0016B068  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E12C 0016B06C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E130 0016B070  7D 89 03 A6 */	mtctr r12
/* 8016E134 0016B074  4E 80 04 21 */	bctrl 
/* 8016E138 0016B078  7C 64 1B 78 */	mr r4, r3
/* 8016E13C 0016B07C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016E140 0016B080  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E144 0016B084  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E148 0016B088  7D 89 03 A6 */	mtctr r12
/* 8016E14C 0016B08C  4E 80 04 21 */	bctrl 
/* 8016E150 0016B090  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E154 0016B094  40 82 00 3C */	bne .L_8016E190
/* 8016E158 0016B098  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E15C 0016B09C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E160 0016B0A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E164 0016B0A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E168 0016B0A8  7D 89 03 A6 */	mtctr r12
/* 8016E16C 0016B0AC  4E 80 04 21 */	bctrl 
/* 8016E170 0016B0B0  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016E174:
/* 8016E174 0016B0B4  81 81 00 08 */	lwz r12, 8(r1)
/* 8016E178 0016B0B8  38 61 00 08 */	addi r3, r1, 8
/* 8016E17C 0016B0BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E180 0016B0C0  7D 89 03 A6 */	mtctr r12
/* 8016E184 0016B0C4  4E 80 04 21 */	bctrl 
/* 8016E188 0016B0C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E18C 0016B0CC  41 82 FF 94 */	beq .L_8016E120
.L_8016E190:
/* 8016E190 0016B0D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E194 0016B0D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E198 0016B0D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016E19C 0016B0DC  7D 89 03 A6 */	mtctr r12
/* 8016E1A0 0016B0E0  4E 80 04 21 */	bctrl 
/* 8016E1A4 0016B0E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E1A8 0016B0E8  7C 04 18 40 */	cmplw r4, r3
/* 8016E1AC 0016B0EC  40 82 FF 04 */	bne .L_8016E0B0
/* 8016E1B0 0016B0F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E1B4 0016B0F4  7C 08 03 A6 */	mtlr r0
/* 8016E1B8 0016B0F8  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E1BC 0016B0FC  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game9PelletMgrFv

.fn "isDone__28Iterator<16GenericObjectMgr>Fv", weak
/* 8016E1C0 0016B100  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E1C4 0016B104  7C 08 02 A6 */	mflr r0
/* 8016E1C8 0016B108  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E1CC 0016B10C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E1D0 0016B110  7C 7F 1B 78 */	mr r31, r3
/* 8016E1D4 0016B114  80 63 00 08 */	lwz r3, 8(r3)
/* 8016E1D8 0016B118  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E1DC 0016B11C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016E1E0 0016B120  7D 89 03 A6 */	mtctr r12
/* 8016E1E4 0016B124  4E 80 04 21 */	bctrl 
/* 8016E1E8 0016B128  80 1F 00 04 */	lwz r0, 4(r31)
/* 8016E1EC 0016B12C  7C 00 18 50 */	subf r0, r0, r3
/* 8016E1F0 0016B130  7C 00 00 34 */	cntlzw r0, r0
/* 8016E1F4 0016B134  54 03 D9 7E */	srwi r3, r0, 5
/* 8016E1F8 0016B138  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E1FC 0016B13C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E200 0016B140  7C 08 03 A6 */	mtlr r0
/* 8016E204 0016B144  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E208 0016B148  4E 80 00 20 */	blr 
.endfn "isDone__28Iterator<16GenericObjectMgr>Fv"

.fn doEntry__Q24Game9PelletMgrFv, global
/* 8016E20C 0016B14C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016E210 0016B150  7C 08 02 A6 */	mflr r0
/* 8016E214 0016B154  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 8016E218 0016B158  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016E21C 0016B15C  38 00 00 00 */	li r0, 0
/* 8016E220 0016B160  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 8016E224 0016B164  28 00 00 00 */	cmplwi r0, 0
/* 8016E228 0016B168  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E22C 0016B16C  90 81 00 08 */	stw r4, 8(r1)
/* 8016E230 0016B170  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016E234 0016B174  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016E238 0016B178  40 82 00 1C */	bne .L_8016E254
/* 8016E23C 0016B17C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E240 0016B180  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E244 0016B184  7D 89 03 A6 */	mtctr r12
/* 8016E248 0016B188  4E 80 04 21 */	bctrl 
/* 8016E24C 0016B18C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E250 0016B190  48 00 01 70 */	b .L_8016E3C0
.L_8016E254:
/* 8016E254 0016B194  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E258 0016B198  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E25C 0016B19C  7D 89 03 A6 */	mtctr r12
/* 8016E260 0016B1A0  4E 80 04 21 */	bctrl 
/* 8016E264 0016B1A4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E268 0016B1A8  48 00 00 58 */	b .L_8016E2C0
.L_8016E26C:
/* 8016E26C 0016B1AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E270 0016B1B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E274 0016B1B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E278 0016B1B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E27C 0016B1BC  7D 89 03 A6 */	mtctr r12
/* 8016E280 0016B1C0  4E 80 04 21 */	bctrl 
/* 8016E284 0016B1C4  7C 64 1B 78 */	mr r4, r3
/* 8016E288 0016B1C8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016E28C 0016B1CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E290 0016B1D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E294 0016B1D4  7D 89 03 A6 */	mtctr r12
/* 8016E298 0016B1D8  4E 80 04 21 */	bctrl 
/* 8016E29C 0016B1DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E2A0 0016B1E0  40 82 01 20 */	bne .L_8016E3C0
/* 8016E2A4 0016B1E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E2A8 0016B1E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E2AC 0016B1EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E2B0 0016B1F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E2B4 0016B1F4  7D 89 03 A6 */	mtctr r12
/* 8016E2B8 0016B1F8  4E 80 04 21 */	bctrl 
/* 8016E2BC 0016B1FC  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016E2C0:
/* 8016E2C0 0016B200  81 81 00 08 */	lwz r12, 8(r1)
/* 8016E2C4 0016B204  38 61 00 08 */	addi r3, r1, 8
/* 8016E2C8 0016B208  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E2CC 0016B20C  7D 89 03 A6 */	mtctr r12
/* 8016E2D0 0016B210  4E 80 04 21 */	bctrl 
/* 8016E2D4 0016B214  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E2D8 0016B218  41 82 FF 94 */	beq .L_8016E26C
/* 8016E2DC 0016B21C  48 00 00 E4 */	b .L_8016E3C0
.L_8016E2E0:
/* 8016E2E0 0016B220  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E2E4 0016B224  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E2E8 0016B228  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E2EC 0016B22C  7D 89 03 A6 */	mtctr r12
/* 8016E2F0 0016B230  4E 80 04 21 */	bctrl 
/* 8016E2F4 0016B234  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E2F8 0016B238  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8016E2FC 0016B23C  7D 89 03 A6 */	mtctr r12
/* 8016E300 0016B240  4E 80 04 21 */	bctrl 
/* 8016E304 0016B244  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E308 0016B248  28 00 00 00 */	cmplwi r0, 0
/* 8016E30C 0016B24C  40 82 00 24 */	bne .L_8016E330
/* 8016E310 0016B250  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E314 0016B254  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E318 0016B258  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E31C 0016B25C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E320 0016B260  7D 89 03 A6 */	mtctr r12
/* 8016E324 0016B264  4E 80 04 21 */	bctrl 
/* 8016E328 0016B268  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E32C 0016B26C  48 00 00 94 */	b .L_8016E3C0
.L_8016E330:
/* 8016E330 0016B270  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E334 0016B274  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E338 0016B278  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E33C 0016B27C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E340 0016B280  7D 89 03 A6 */	mtctr r12
/* 8016E344 0016B284  4E 80 04 21 */	bctrl 
/* 8016E348 0016B288  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E34C 0016B28C  48 00 00 58 */	b .L_8016E3A4
.L_8016E350:
/* 8016E350 0016B290  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E354 0016B294  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E358 0016B298  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E35C 0016B29C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E360 0016B2A0  7D 89 03 A6 */	mtctr r12
/* 8016E364 0016B2A4  4E 80 04 21 */	bctrl 
/* 8016E368 0016B2A8  7C 64 1B 78 */	mr r4, r3
/* 8016E36C 0016B2AC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016E370 0016B2B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E374 0016B2B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E378 0016B2B8  7D 89 03 A6 */	mtctr r12
/* 8016E37C 0016B2BC  4E 80 04 21 */	bctrl 
/* 8016E380 0016B2C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E384 0016B2C4  40 82 00 3C */	bne .L_8016E3C0
/* 8016E388 0016B2C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E38C 0016B2CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E390 0016B2D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E394 0016B2D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E398 0016B2D8  7D 89 03 A6 */	mtctr r12
/* 8016E39C 0016B2DC  4E 80 04 21 */	bctrl 
/* 8016E3A0 0016B2E0  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016E3A4:
/* 8016E3A4 0016B2E4  81 81 00 08 */	lwz r12, 8(r1)
/* 8016E3A8 0016B2E8  38 61 00 08 */	addi r3, r1, 8
/* 8016E3AC 0016B2EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E3B0 0016B2F0  7D 89 03 A6 */	mtctr r12
/* 8016E3B4 0016B2F4  4E 80 04 21 */	bctrl 
/* 8016E3B8 0016B2F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E3BC 0016B2FC  41 82 FF 94 */	beq .L_8016E350
.L_8016E3C0:
/* 8016E3C0 0016B300  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E3C4 0016B304  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E3C8 0016B308  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016E3CC 0016B30C  7D 89 03 A6 */	mtctr r12
/* 8016E3D0 0016B310  4E 80 04 21 */	bctrl 
/* 8016E3D4 0016B314  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E3D8 0016B318  7C 04 18 40 */	cmplw r4, r3
/* 8016E3DC 0016B31C  40 82 FF 04 */	bne .L_8016E2E0
/* 8016E3E0 0016B320  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E3E4 0016B324  7C 08 03 A6 */	mtlr r0
/* 8016E3E8 0016B328  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E3EC 0016B32C  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game9PelletMgrFv

.fn doSetView__Q24Game9PelletMgrFi, global
/* 8016E3F0 0016B330  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016E3F4 0016B334  7C 08 02 A6 */	mflr r0
/* 8016E3F8 0016B338  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 8016E3FC 0016B33C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016E400 0016B340  38 00 00 00 */	li r0, 0
/* 8016E404 0016B344  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 8016E408 0016B348  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016E40C 0016B34C  28 00 00 00 */	cmplwi r0, 0
/* 8016E410 0016B350  7C 9F 23 78 */	mr r31, r4
/* 8016E414 0016B354  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E418 0016B358  90 A1 00 08 */	stw r5, 8(r1)
/* 8016E41C 0016B35C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016E420 0016B360  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016E424 0016B364  40 82 00 1C */	bne .L_8016E440
/* 8016E428 0016B368  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E42C 0016B36C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E430 0016B370  7D 89 03 A6 */	mtctr r12
/* 8016E434 0016B374  4E 80 04 21 */	bctrl 
/* 8016E438 0016B378  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E43C 0016B37C  48 00 01 74 */	b .L_8016E5B0
.L_8016E440:
/* 8016E440 0016B380  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E444 0016B384  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E448 0016B388  7D 89 03 A6 */	mtctr r12
/* 8016E44C 0016B38C  4E 80 04 21 */	bctrl 
/* 8016E450 0016B390  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E454 0016B394  48 00 00 58 */	b .L_8016E4AC
.L_8016E458:
/* 8016E458 0016B398  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E45C 0016B39C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E460 0016B3A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E464 0016B3A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E468 0016B3A8  7D 89 03 A6 */	mtctr r12
/* 8016E46C 0016B3AC  4E 80 04 21 */	bctrl 
/* 8016E470 0016B3B0  7C 64 1B 78 */	mr r4, r3
/* 8016E474 0016B3B4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016E478 0016B3B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E47C 0016B3BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E480 0016B3C0  7D 89 03 A6 */	mtctr r12
/* 8016E484 0016B3C4  4E 80 04 21 */	bctrl 
/* 8016E488 0016B3C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E48C 0016B3CC  40 82 01 24 */	bne .L_8016E5B0
/* 8016E490 0016B3D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E494 0016B3D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E498 0016B3D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E49C 0016B3DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E4A0 0016B3E0  7D 89 03 A6 */	mtctr r12
/* 8016E4A4 0016B3E4  4E 80 04 21 */	bctrl 
/* 8016E4A8 0016B3E8  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016E4AC:
/* 8016E4AC 0016B3EC  81 81 00 08 */	lwz r12, 8(r1)
/* 8016E4B0 0016B3F0  38 61 00 08 */	addi r3, r1, 8
/* 8016E4B4 0016B3F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E4B8 0016B3F8  7D 89 03 A6 */	mtctr r12
/* 8016E4BC 0016B3FC  4E 80 04 21 */	bctrl 
/* 8016E4C0 0016B400  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E4C4 0016B404  41 82 FF 94 */	beq .L_8016E458
/* 8016E4C8 0016B408  48 00 00 E8 */	b .L_8016E5B0
.L_8016E4CC:
/* 8016E4CC 0016B40C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E4D0 0016B410  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E4D4 0016B414  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E4D8 0016B418  7D 89 03 A6 */	mtctr r12
/* 8016E4DC 0016B41C  4E 80 04 21 */	bctrl 
/* 8016E4E0 0016B420  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E4E4 0016B424  7F E4 FB 78 */	mr r4, r31
/* 8016E4E8 0016B428  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E4EC 0016B42C  7D 89 03 A6 */	mtctr r12
/* 8016E4F0 0016B430  4E 80 04 21 */	bctrl 
/* 8016E4F4 0016B434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E4F8 0016B438  28 00 00 00 */	cmplwi r0, 0
/* 8016E4FC 0016B43C  40 82 00 24 */	bne .L_8016E520
/* 8016E500 0016B440  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E504 0016B444  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E508 0016B448  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E50C 0016B44C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E510 0016B450  7D 89 03 A6 */	mtctr r12
/* 8016E514 0016B454  4E 80 04 21 */	bctrl 
/* 8016E518 0016B458  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E51C 0016B45C  48 00 00 94 */	b .L_8016E5B0
.L_8016E520:
/* 8016E520 0016B460  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E524 0016B464  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E528 0016B468  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E52C 0016B46C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E530 0016B470  7D 89 03 A6 */	mtctr r12
/* 8016E534 0016B474  4E 80 04 21 */	bctrl 
/* 8016E538 0016B478  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E53C 0016B47C  48 00 00 58 */	b .L_8016E594
.L_8016E540:
/* 8016E540 0016B480  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E544 0016B484  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E548 0016B488  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E54C 0016B48C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E550 0016B490  7D 89 03 A6 */	mtctr r12
/* 8016E554 0016B494  4E 80 04 21 */	bctrl 
/* 8016E558 0016B498  7C 64 1B 78 */	mr r4, r3
/* 8016E55C 0016B49C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016E560 0016B4A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E564 0016B4A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E568 0016B4A8  7D 89 03 A6 */	mtctr r12
/* 8016E56C 0016B4AC  4E 80 04 21 */	bctrl 
/* 8016E570 0016B4B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E574 0016B4B4  40 82 00 3C */	bne .L_8016E5B0
/* 8016E578 0016B4B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E57C 0016B4BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E580 0016B4C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E584 0016B4C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E588 0016B4C8  7D 89 03 A6 */	mtctr r12
/* 8016E58C 0016B4CC  4E 80 04 21 */	bctrl 
/* 8016E590 0016B4D0  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016E594:
/* 8016E594 0016B4D4  81 81 00 08 */	lwz r12, 8(r1)
/* 8016E598 0016B4D8  38 61 00 08 */	addi r3, r1, 8
/* 8016E59C 0016B4DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E5A0 0016B4E0  7D 89 03 A6 */	mtctr r12
/* 8016E5A4 0016B4E4  4E 80 04 21 */	bctrl 
/* 8016E5A8 0016B4E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E5AC 0016B4EC  41 82 FF 94 */	beq .L_8016E540
.L_8016E5B0:
/* 8016E5B0 0016B4F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E5B4 0016B4F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E5B8 0016B4F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016E5BC 0016B4FC  7D 89 03 A6 */	mtctr r12
/* 8016E5C0 0016B500  4E 80 04 21 */	bctrl 
/* 8016E5C4 0016B504  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E5C8 0016B508  7C 04 18 40 */	cmplw r4, r3
/* 8016E5CC 0016B50C  40 82 FF 00 */	bne .L_8016E4CC
/* 8016E5D0 0016B510  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E5D4 0016B514  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016E5D8 0016B518  7C 08 03 A6 */	mtlr r0
/* 8016E5DC 0016B51C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E5E0 0016B520  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game9PelletMgrFi

.fn doViewCalc__Q24Game9PelletMgrFv, global
/* 8016E5E4 0016B524  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016E5E8 0016B528  7C 08 02 A6 */	mflr r0
/* 8016E5EC 0016B52C  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 8016E5F0 0016B530  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016E5F4 0016B534  38 00 00 00 */	li r0, 0
/* 8016E5F8 0016B538  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 8016E5FC 0016B53C  28 00 00 00 */	cmplwi r0, 0
/* 8016E600 0016B540  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E604 0016B544  90 81 00 08 */	stw r4, 8(r1)
/* 8016E608 0016B548  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016E60C 0016B54C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016E610 0016B550  40 82 00 1C */	bne .L_8016E62C
/* 8016E614 0016B554  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E618 0016B558  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E61C 0016B55C  7D 89 03 A6 */	mtctr r12
/* 8016E620 0016B560  4E 80 04 21 */	bctrl 
/* 8016E624 0016B564  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E628 0016B568  48 00 01 70 */	b .L_8016E798
.L_8016E62C:
/* 8016E62C 0016B56C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E630 0016B570  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E634 0016B574  7D 89 03 A6 */	mtctr r12
/* 8016E638 0016B578  4E 80 04 21 */	bctrl 
/* 8016E63C 0016B57C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E640 0016B580  48 00 00 58 */	b .L_8016E698
.L_8016E644:
/* 8016E644 0016B584  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E648 0016B588  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E64C 0016B58C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E650 0016B590  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E654 0016B594  7D 89 03 A6 */	mtctr r12
/* 8016E658 0016B598  4E 80 04 21 */	bctrl 
/* 8016E65C 0016B59C  7C 64 1B 78 */	mr r4, r3
/* 8016E660 0016B5A0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016E664 0016B5A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E668 0016B5A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E66C 0016B5AC  7D 89 03 A6 */	mtctr r12
/* 8016E670 0016B5B0  4E 80 04 21 */	bctrl 
/* 8016E674 0016B5B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E678 0016B5B8  40 82 01 20 */	bne .L_8016E798
/* 8016E67C 0016B5BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E680 0016B5C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E684 0016B5C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E688 0016B5C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E68C 0016B5CC  7D 89 03 A6 */	mtctr r12
/* 8016E690 0016B5D0  4E 80 04 21 */	bctrl 
/* 8016E694 0016B5D4  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016E698:
/* 8016E698 0016B5D8  81 81 00 08 */	lwz r12, 8(r1)
/* 8016E69C 0016B5DC  38 61 00 08 */	addi r3, r1, 8
/* 8016E6A0 0016B5E0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E6A4 0016B5E4  7D 89 03 A6 */	mtctr r12
/* 8016E6A8 0016B5E8  4E 80 04 21 */	bctrl 
/* 8016E6AC 0016B5EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E6B0 0016B5F0  41 82 FF 94 */	beq .L_8016E644
/* 8016E6B4 0016B5F4  48 00 00 E4 */	b .L_8016E798
.L_8016E6B8:
/* 8016E6B8 0016B5F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E6BC 0016B5FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E6C0 0016B600  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E6C4 0016B604  7D 89 03 A6 */	mtctr r12
/* 8016E6C8 0016B608  4E 80 04 21 */	bctrl 
/* 8016E6CC 0016B60C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E6D0 0016B610  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E6D4 0016B614  7D 89 03 A6 */	mtctr r12
/* 8016E6D8 0016B618  4E 80 04 21 */	bctrl 
/* 8016E6DC 0016B61C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E6E0 0016B620  28 00 00 00 */	cmplwi r0, 0
/* 8016E6E4 0016B624  40 82 00 24 */	bne .L_8016E708
/* 8016E6E8 0016B628  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E6EC 0016B62C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E6F0 0016B630  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E6F4 0016B634  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E6F8 0016B638  7D 89 03 A6 */	mtctr r12
/* 8016E6FC 0016B63C  4E 80 04 21 */	bctrl 
/* 8016E700 0016B640  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E704 0016B644  48 00 00 94 */	b .L_8016E798
.L_8016E708:
/* 8016E708 0016B648  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E70C 0016B64C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E710 0016B650  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E714 0016B654  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E718 0016B658  7D 89 03 A6 */	mtctr r12
/* 8016E71C 0016B65C  4E 80 04 21 */	bctrl 
/* 8016E720 0016B660  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E724 0016B664  48 00 00 58 */	b .L_8016E77C
.L_8016E728:
/* 8016E728 0016B668  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E72C 0016B66C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E730 0016B670  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E734 0016B674  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E738 0016B678  7D 89 03 A6 */	mtctr r12
/* 8016E73C 0016B67C  4E 80 04 21 */	bctrl 
/* 8016E740 0016B680  7C 64 1B 78 */	mr r4, r3
/* 8016E744 0016B684  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016E748 0016B688  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E74C 0016B68C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E750 0016B690  7D 89 03 A6 */	mtctr r12
/* 8016E754 0016B694  4E 80 04 21 */	bctrl 
/* 8016E758 0016B698  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E75C 0016B69C  40 82 00 3C */	bne .L_8016E798
/* 8016E760 0016B6A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E764 0016B6A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E768 0016B6A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E76C 0016B6AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E770 0016B6B0  7D 89 03 A6 */	mtctr r12
/* 8016E774 0016B6B4  4E 80 04 21 */	bctrl 
/* 8016E778 0016B6B8  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016E77C:
/* 8016E77C 0016B6BC  81 81 00 08 */	lwz r12, 8(r1)
/* 8016E780 0016B6C0  38 61 00 08 */	addi r3, r1, 8
/* 8016E784 0016B6C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E788 0016B6C8  7D 89 03 A6 */	mtctr r12
/* 8016E78C 0016B6CC  4E 80 04 21 */	bctrl 
/* 8016E790 0016B6D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E794 0016B6D4  41 82 FF 94 */	beq .L_8016E728
.L_8016E798:
/* 8016E798 0016B6D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E79C 0016B6DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E7A0 0016B6E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016E7A4 0016B6E4  7D 89 03 A6 */	mtctr r12
/* 8016E7A8 0016B6E8  4E 80 04 21 */	bctrl 
/* 8016E7AC 0016B6EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E7B0 0016B6F0  7C 04 18 40 */	cmplw r4, r3
/* 8016E7B4 0016B6F4  40 82 FF 04 */	bne .L_8016E6B8
/* 8016E7B8 0016B6F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E7BC 0016B6FC  7C 08 03 A6 */	mtlr r0
/* 8016E7C0 0016B700  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E7C4 0016B704  4E 80 00 20 */	blr 
.endfn doViewCalc__Q24Game9PelletMgrFv

.fn doSimulation__Q24Game9PelletMgrFf, global
/* 8016E7C8 0016B708  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016E7CC 0016B70C  7C 08 02 A6 */	mflr r0
/* 8016E7D0 0016B710  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 8016E7D4 0016B714  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016E7D8 0016B718  38 00 00 00 */	li r0, 0
/* 8016E7DC 0016B71C  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 8016E7E0 0016B720  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016E7E4 0016B724  FF E0 08 90 */	fmr f31, f1
/* 8016E7E8 0016B728  28 00 00 00 */	cmplwi r0, 0
/* 8016E7EC 0016B72C  90 81 00 08 */	stw r4, 8(r1)
/* 8016E7F0 0016B730  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E7F4 0016B734  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016E7F8 0016B738  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016E7FC 0016B73C  40 82 00 1C */	bne .L_8016E818
/* 8016E800 0016B740  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E804 0016B744  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E808 0016B748  7D 89 03 A6 */	mtctr r12
/* 8016E80C 0016B74C  4E 80 04 21 */	bctrl 
/* 8016E810 0016B750  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E814 0016B754  48 00 01 74 */	b .L_8016E988
.L_8016E818:
/* 8016E818 0016B758  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E81C 0016B75C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E820 0016B760  7D 89 03 A6 */	mtctr r12
/* 8016E824 0016B764  4E 80 04 21 */	bctrl 
/* 8016E828 0016B768  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E82C 0016B76C  48 00 00 58 */	b .L_8016E884
.L_8016E830:
/* 8016E830 0016B770  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E834 0016B774  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E838 0016B778  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E83C 0016B77C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E840 0016B780  7D 89 03 A6 */	mtctr r12
/* 8016E844 0016B784  4E 80 04 21 */	bctrl 
/* 8016E848 0016B788  7C 64 1B 78 */	mr r4, r3
/* 8016E84C 0016B78C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016E850 0016B790  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E854 0016B794  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E858 0016B798  7D 89 03 A6 */	mtctr r12
/* 8016E85C 0016B79C  4E 80 04 21 */	bctrl 
/* 8016E860 0016B7A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E864 0016B7A4  40 82 01 24 */	bne .L_8016E988
/* 8016E868 0016B7A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E86C 0016B7AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E870 0016B7B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E874 0016B7B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E878 0016B7B8  7D 89 03 A6 */	mtctr r12
/* 8016E87C 0016B7BC  4E 80 04 21 */	bctrl 
/* 8016E880 0016B7C0  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016E884:
/* 8016E884 0016B7C4  81 81 00 08 */	lwz r12, 8(r1)
/* 8016E888 0016B7C8  38 61 00 08 */	addi r3, r1, 8
/* 8016E88C 0016B7CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E890 0016B7D0  7D 89 03 A6 */	mtctr r12
/* 8016E894 0016B7D4  4E 80 04 21 */	bctrl 
/* 8016E898 0016B7D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E89C 0016B7DC  41 82 FF 94 */	beq .L_8016E830
/* 8016E8A0 0016B7E0  48 00 00 E8 */	b .L_8016E988
.L_8016E8A4:
/* 8016E8A4 0016B7E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E8A8 0016B7E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E8AC 0016B7EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E8B0 0016B7F0  7D 89 03 A6 */	mtctr r12
/* 8016E8B4 0016B7F4  4E 80 04 21 */	bctrl 
/* 8016E8B8 0016B7F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E8BC 0016B7FC  FC 20 F8 90 */	fmr f1, f31
/* 8016E8C0 0016B800  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016E8C4 0016B804  7D 89 03 A6 */	mtctr r12
/* 8016E8C8 0016B808  4E 80 04 21 */	bctrl 
/* 8016E8CC 0016B80C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E8D0 0016B810  28 00 00 00 */	cmplwi r0, 0
/* 8016E8D4 0016B814  40 82 00 24 */	bne .L_8016E8F8
/* 8016E8D8 0016B818  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E8DC 0016B81C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E8E0 0016B820  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E8E4 0016B824  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E8E8 0016B828  7D 89 03 A6 */	mtctr r12
/* 8016E8EC 0016B82C  4E 80 04 21 */	bctrl 
/* 8016E8F0 0016B830  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E8F4 0016B834  48 00 00 94 */	b .L_8016E988
.L_8016E8F8:
/* 8016E8F8 0016B838  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E8FC 0016B83C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E900 0016B840  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E904 0016B844  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E908 0016B848  7D 89 03 A6 */	mtctr r12
/* 8016E90C 0016B84C  4E 80 04 21 */	bctrl 
/* 8016E910 0016B850  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016E914 0016B854  48 00 00 58 */	b .L_8016E96C
.L_8016E918:
/* 8016E918 0016B858  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E91C 0016B85C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E920 0016B860  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E924 0016B864  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016E928 0016B868  7D 89 03 A6 */	mtctr r12
/* 8016E92C 0016B86C  4E 80 04 21 */	bctrl 
/* 8016E930 0016B870  7C 64 1B 78 */	mr r4, r3
/* 8016E934 0016B874  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016E938 0016B878  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E93C 0016B87C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016E940 0016B880  7D 89 03 A6 */	mtctr r12
/* 8016E944 0016B884  4E 80 04 21 */	bctrl 
/* 8016E948 0016B888  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E94C 0016B88C  40 82 00 3C */	bne .L_8016E988
/* 8016E950 0016B890  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E954 0016B894  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E958 0016B898  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E95C 0016B89C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016E960 0016B8A0  7D 89 03 A6 */	mtctr r12
/* 8016E964 0016B8A4  4E 80 04 21 */	bctrl 
/* 8016E968 0016B8A8  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016E96C:
/* 8016E96C 0016B8AC  81 81 00 08 */	lwz r12, 8(r1)
/* 8016E970 0016B8B0  38 61 00 08 */	addi r3, r1, 8
/* 8016E974 0016B8B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016E978 0016B8B8  7D 89 03 A6 */	mtctr r12
/* 8016E97C 0016B8BC  4E 80 04 21 */	bctrl 
/* 8016E980 0016B8C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E984 0016B8C4  41 82 FF 94 */	beq .L_8016E918
.L_8016E988:
/* 8016E988 0016B8C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016E98C 0016B8CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E990 0016B8D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016E994 0016B8D4  7D 89 03 A6 */	mtctr r12
/* 8016E998 0016B8D8  4E 80 04 21 */	bctrl 
/* 8016E99C 0016B8DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016E9A0 0016B8E0  7C 04 18 40 */	cmplw r4, r3
/* 8016E9A4 0016B8E4  40 82 FF 00 */	bne .L_8016E8A4
/* 8016E9A8 0016B8E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E9AC 0016B8EC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016E9B0 0016B8F0  7C 08 03 A6 */	mtlr r0
/* 8016E9B4 0016B8F4  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E9B8 0016B8F8  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game9PelletMgrFf

.fn doDirectDraw__Q24Game9PelletMgrFR8Graphics, global
/* 8016E9BC 0016B8FC  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game9PelletMgrFR8Graphics

.fn doSimpleDraw__Q24Game9PelletMgrFP8Viewport, global
/* 8016E9C0 0016B900  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016E9C4 0016B904  7C 08 02 A6 */	mflr r0
/* 8016E9C8 0016B908  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 8016E9CC 0016B90C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016E9D0 0016B910  38 00 00 00 */	li r0, 0
/* 8016E9D4 0016B914  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 8016E9D8 0016B918  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016E9DC 0016B91C  28 00 00 00 */	cmplwi r0, 0
/* 8016E9E0 0016B920  7C 9F 23 78 */	mr r31, r4
/* 8016E9E4 0016B924  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E9E8 0016B928  90 A1 00 08 */	stw r5, 8(r1)
/* 8016E9EC 0016B92C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016E9F0 0016B930  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016E9F4 0016B934  40 82 00 1C */	bne .L_8016EA10
/* 8016E9F8 0016B938  81 83 00 00 */	lwz r12, 0(r3)
/* 8016E9FC 0016B93C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016EA00 0016B940  7D 89 03 A6 */	mtctr r12
/* 8016EA04 0016B944  4E 80 04 21 */	bctrl 
/* 8016EA08 0016B948  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016EA0C 0016B94C  48 00 01 74 */	b .L_8016EB80
.L_8016EA10:
/* 8016EA10 0016B950  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EA14 0016B954  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016EA18 0016B958  7D 89 03 A6 */	mtctr r12
/* 8016EA1C 0016B95C  4E 80 04 21 */	bctrl 
/* 8016EA20 0016B960  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016EA24 0016B964  48 00 00 58 */	b .L_8016EA7C
.L_8016EA28:
/* 8016EA28 0016B968  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EA2C 0016B96C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EA30 0016B970  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EA34 0016B974  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016EA38 0016B978  7D 89 03 A6 */	mtctr r12
/* 8016EA3C 0016B97C  4E 80 04 21 */	bctrl 
/* 8016EA40 0016B980  7C 64 1B 78 */	mr r4, r3
/* 8016EA44 0016B984  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016EA48 0016B988  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EA4C 0016B98C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016EA50 0016B990  7D 89 03 A6 */	mtctr r12
/* 8016EA54 0016B994  4E 80 04 21 */	bctrl 
/* 8016EA58 0016B998  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016EA5C 0016B99C  40 82 01 24 */	bne .L_8016EB80
/* 8016EA60 0016B9A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EA64 0016B9A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EA68 0016B9A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EA6C 0016B9AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016EA70 0016B9B0  7D 89 03 A6 */	mtctr r12
/* 8016EA74 0016B9B4  4E 80 04 21 */	bctrl 
/* 8016EA78 0016B9B8  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016EA7C:
/* 8016EA7C 0016B9BC  81 81 00 08 */	lwz r12, 8(r1)
/* 8016EA80 0016B9C0  38 61 00 08 */	addi r3, r1, 8
/* 8016EA84 0016B9C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016EA88 0016B9C8  7D 89 03 A6 */	mtctr r12
/* 8016EA8C 0016B9CC  4E 80 04 21 */	bctrl 
/* 8016EA90 0016B9D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016EA94 0016B9D4  41 82 FF 94 */	beq .L_8016EA28
/* 8016EA98 0016B9D8  48 00 00 E8 */	b .L_8016EB80
.L_8016EA9C:
/* 8016EA9C 0016B9DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EAA0 0016B9E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EAA4 0016B9E4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016EAA8 0016B9E8  7D 89 03 A6 */	mtctr r12
/* 8016EAAC 0016B9EC  4E 80 04 21 */	bctrl 
/* 8016EAB0 0016B9F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EAB4 0016B9F4  7F E4 FB 78 */	mr r4, r31
/* 8016EAB8 0016B9F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016EABC 0016B9FC  7D 89 03 A6 */	mtctr r12
/* 8016EAC0 0016BA00  4E 80 04 21 */	bctrl 
/* 8016EAC4 0016BA04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EAC8 0016BA08  28 00 00 00 */	cmplwi r0, 0
/* 8016EACC 0016BA0C  40 82 00 24 */	bne .L_8016EAF0
/* 8016EAD0 0016BA10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EAD4 0016BA14  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EAD8 0016BA18  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EADC 0016BA1C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016EAE0 0016BA20  7D 89 03 A6 */	mtctr r12
/* 8016EAE4 0016BA24  4E 80 04 21 */	bctrl 
/* 8016EAE8 0016BA28  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016EAEC 0016BA2C  48 00 00 94 */	b .L_8016EB80
.L_8016EAF0:
/* 8016EAF0 0016BA30  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EAF4 0016BA34  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EAF8 0016BA38  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EAFC 0016BA3C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016EB00 0016BA40  7D 89 03 A6 */	mtctr r12
/* 8016EB04 0016BA44  4E 80 04 21 */	bctrl 
/* 8016EB08 0016BA48  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016EB0C 0016BA4C  48 00 00 58 */	b .L_8016EB64
.L_8016EB10:
/* 8016EB10 0016BA50  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EB14 0016BA54  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EB18 0016BA58  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EB1C 0016BA5C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016EB20 0016BA60  7D 89 03 A6 */	mtctr r12
/* 8016EB24 0016BA64  4E 80 04 21 */	bctrl 
/* 8016EB28 0016BA68  7C 64 1B 78 */	mr r4, r3
/* 8016EB2C 0016BA6C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016EB30 0016BA70  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EB34 0016BA74  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016EB38 0016BA78  7D 89 03 A6 */	mtctr r12
/* 8016EB3C 0016BA7C  4E 80 04 21 */	bctrl 
/* 8016EB40 0016BA80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016EB44 0016BA84  40 82 00 3C */	bne .L_8016EB80
/* 8016EB48 0016BA88  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EB4C 0016BA8C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EB50 0016BA90  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EB54 0016BA94  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016EB58 0016BA98  7D 89 03 A6 */	mtctr r12
/* 8016EB5C 0016BA9C  4E 80 04 21 */	bctrl 
/* 8016EB60 0016BAA0  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016EB64:
/* 8016EB64 0016BAA4  81 81 00 08 */	lwz r12, 8(r1)
/* 8016EB68 0016BAA8  38 61 00 08 */	addi r3, r1, 8
/* 8016EB6C 0016BAAC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016EB70 0016BAB0  7D 89 03 A6 */	mtctr r12
/* 8016EB74 0016BAB4  4E 80 04 21 */	bctrl 
/* 8016EB78 0016BAB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016EB7C 0016BABC  41 82 FF 94 */	beq .L_8016EB10
.L_8016EB80:
/* 8016EB80 0016BAC0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EB84 0016BAC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EB88 0016BAC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016EB8C 0016BACC  7D 89 03 A6 */	mtctr r12
/* 8016EB90 0016BAD0  4E 80 04 21 */	bctrl 
/* 8016EB94 0016BAD4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EB98 0016BAD8  7C 04 18 40 */	cmplw r4, r3
/* 8016EB9C 0016BADC  40 82 FF 00 */	bne .L_8016EA9C
/* 8016EBA0 0016BAE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016EBA4 0016BAE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016EBA8 0016BAE8  7C 08 03 A6 */	mtlr r0
/* 8016EBAC 0016BAEC  38 21 00 20 */	addi r1, r1, 0x20
/* 8016EBB0 0016BAF0  4E 80 00 20 */	blr 
.endfn doSimpleDraw__Q24Game9PelletMgrFP8Viewport

.fn setupSoundViewerAndBas__Q24Game9PelletMgrFv, global
/* 8016EBB4 0016BAF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016EBB8 0016BAF8  7C 08 02 A6 */	mflr r0
/* 8016EBBC 0016BAFC  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 8016EBC0 0016BB00  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016EBC4 0016BB04  38 00 00 00 */	li r0, 0
/* 8016EBC8 0016BB08  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 8016EBCC 0016BB0C  28 00 00 00 */	cmplwi r0, 0
/* 8016EBD0 0016BB10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EBD4 0016BB14  90 81 00 08 */	stw r4, 8(r1)
/* 8016EBD8 0016BB18  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016EBDC 0016BB1C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016EBE0 0016BB20  40 82 00 1C */	bne .L_8016EBFC
/* 8016EBE4 0016BB24  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EBE8 0016BB28  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016EBEC 0016BB2C  7D 89 03 A6 */	mtctr r12
/* 8016EBF0 0016BB30  4E 80 04 21 */	bctrl 
/* 8016EBF4 0016BB34  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016EBF8 0016BB38  48 00 01 60 */	b .L_8016ED58
.L_8016EBFC:
/* 8016EBFC 0016BB3C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EC00 0016BB40  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016EC04 0016BB44  7D 89 03 A6 */	mtctr r12
/* 8016EC08 0016BB48  4E 80 04 21 */	bctrl 
/* 8016EC0C 0016BB4C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016EC10 0016BB50  48 00 00 58 */	b .L_8016EC68
.L_8016EC14:
/* 8016EC14 0016BB54  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EC18 0016BB58  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EC1C 0016BB5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EC20 0016BB60  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016EC24 0016BB64  7D 89 03 A6 */	mtctr r12
/* 8016EC28 0016BB68  4E 80 04 21 */	bctrl 
/* 8016EC2C 0016BB6C  7C 64 1B 78 */	mr r4, r3
/* 8016EC30 0016BB70  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016EC34 0016BB74  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EC38 0016BB78  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016EC3C 0016BB7C  7D 89 03 A6 */	mtctr r12
/* 8016EC40 0016BB80  4E 80 04 21 */	bctrl 
/* 8016EC44 0016BB84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016EC48 0016BB88  40 82 01 10 */	bne .L_8016ED58
/* 8016EC4C 0016BB8C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EC50 0016BB90  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EC54 0016BB94  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EC58 0016BB98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016EC5C 0016BB9C  7D 89 03 A6 */	mtctr r12
/* 8016EC60 0016BBA0  4E 80 04 21 */	bctrl 
/* 8016EC64 0016BBA4  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016EC68:
/* 8016EC68 0016BBA8  81 81 00 08 */	lwz r12, 8(r1)
/* 8016EC6C 0016BBAC  38 61 00 08 */	addi r3, r1, 8
/* 8016EC70 0016BBB0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016EC74 0016BBB4  7D 89 03 A6 */	mtctr r12
/* 8016EC78 0016BBB8  4E 80 04 21 */	bctrl 
/* 8016EC7C 0016BBBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016EC80 0016BBC0  41 82 FF 94 */	beq .L_8016EC14
/* 8016EC84 0016BBC4  48 00 00 D4 */	b .L_8016ED58
.L_8016EC88:
/* 8016EC88 0016BBC8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EC8C 0016BBCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EC90 0016BBD0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016EC94 0016BBD4  7D 89 03 A6 */	mtctr r12
/* 8016EC98 0016BBD8  4E 80 04 21 */	bctrl 
/* 8016EC9C 0016BBDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016ECA0 0016BBE0  28 00 00 00 */	cmplwi r0, 0
/* 8016ECA4 0016BBE4  40 82 00 24 */	bne .L_8016ECC8
/* 8016ECA8 0016BBE8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016ECAC 0016BBEC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016ECB0 0016BBF0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016ECB4 0016BBF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016ECB8 0016BBF8  7D 89 03 A6 */	mtctr r12
/* 8016ECBC 0016BBFC  4E 80 04 21 */	bctrl 
/* 8016ECC0 0016BC00  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016ECC4 0016BC04  48 00 00 94 */	b .L_8016ED58
.L_8016ECC8:
/* 8016ECC8 0016BC08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016ECCC 0016BC0C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016ECD0 0016BC10  81 83 00 00 */	lwz r12, 0(r3)
/* 8016ECD4 0016BC14  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016ECD8 0016BC18  7D 89 03 A6 */	mtctr r12
/* 8016ECDC 0016BC1C  4E 80 04 21 */	bctrl 
/* 8016ECE0 0016BC20  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016ECE4 0016BC24  48 00 00 58 */	b .L_8016ED3C
.L_8016ECE8:
/* 8016ECE8 0016BC28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016ECEC 0016BC2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016ECF0 0016BC30  81 83 00 00 */	lwz r12, 0(r3)
/* 8016ECF4 0016BC34  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016ECF8 0016BC38  7D 89 03 A6 */	mtctr r12
/* 8016ECFC 0016BC3C  4E 80 04 21 */	bctrl 
/* 8016ED00 0016BC40  7C 64 1B 78 */	mr r4, r3
/* 8016ED04 0016BC44  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016ED08 0016BC48  81 83 00 00 */	lwz r12, 0(r3)
/* 8016ED0C 0016BC4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016ED10 0016BC50  7D 89 03 A6 */	mtctr r12
/* 8016ED14 0016BC54  4E 80 04 21 */	bctrl 
/* 8016ED18 0016BC58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016ED1C 0016BC5C  40 82 00 3C */	bne .L_8016ED58
/* 8016ED20 0016BC60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016ED24 0016BC64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016ED28 0016BC68  81 83 00 00 */	lwz r12, 0(r3)
/* 8016ED2C 0016BC6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016ED30 0016BC70  7D 89 03 A6 */	mtctr r12
/* 8016ED34 0016BC74  4E 80 04 21 */	bctrl 
/* 8016ED38 0016BC78  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016ED3C:
/* 8016ED3C 0016BC7C  81 81 00 08 */	lwz r12, 8(r1)
/* 8016ED40 0016BC80  38 61 00 08 */	addi r3, r1, 8
/* 8016ED44 0016BC84  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016ED48 0016BC88  7D 89 03 A6 */	mtctr r12
/* 8016ED4C 0016BC8C  4E 80 04 21 */	bctrl 
/* 8016ED50 0016BC90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016ED54 0016BC94  41 82 FF 94 */	beq .L_8016ECE8
.L_8016ED58:
/* 8016ED58 0016BC98  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016ED5C 0016BC9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016ED60 0016BCA0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016ED64 0016BCA4  7D 89 03 A6 */	mtctr r12
/* 8016ED68 0016BCA8  4E 80 04 21 */	bctrl 
/* 8016ED6C 0016BCAC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016ED70 0016BCB0  7C 04 18 40 */	cmplw r4, r3
/* 8016ED74 0016BCB4  40 82 FF 14 */	bne .L_8016EC88
/* 8016ED78 0016BCB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016ED7C 0016BCBC  7C 08 03 A6 */	mtlr r0
/* 8016ED80 0016BCC0  38 21 00 20 */	addi r1, r1, 0x20
/* 8016ED84 0016BCC4  4E 80 00 20 */	blr 
.endfn setupSoundViewerAndBas__Q24Game9PelletMgrFv

.fn decode__Q24Game9PelletMgrFlRUcRi, global
/* 8016ED88 0016BCC8  54 83 46 3E */	srwi r3, r4, 0x18
/* 8016ED8C 0016BCCC  54 80 02 3E */	clrlwi r0, r4, 8
/* 8016ED90 0016BCD0  98 65 00 00 */	stb r3, 0(r5)
/* 8016ED94 0016BCD4  90 06 00 00 */	stw r0, 0(r6)
/* 8016ED98 0016BCD8  4E 80 00 20 */	blr 
.endfn decode__Q24Game9PelletMgrFlRUcRi

.fn encode__Q24Game9PelletMgrFUci, global
/* 8016ED9C 0016BCDC  54 80 C0 0E */	slwi r0, r4, 0x18
/* 8016EDA0 0016BCE0  7C 03 2B 78 */	or r3, r0, r5
/* 8016EDA4 0016BCE4  4E 80 00 20 */	blr 
.endfn encode__Q24Game9PelletMgrFUci

.fn getCaveName__Q24Game9PelletMgrFi, global
/* 8016EDA8 0016BCE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EDAC 0016BCEC  7C 08 02 A6 */	mflr r0
/* 8016EDB0 0016BCF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EDB4 0016BCF4  54 80 46 3E */	srwi r0, r4, 0x18
/* 8016EDB8 0016BCF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EDBC 0016BCFC  93 C1 00 08 */	stw r30, 8(r1)
/* 8016EDC0 0016BD00  54 9E 02 3E */	clrlwi r30, r4, 8
/* 8016EDC4 0016BD04  7C 04 03 78 */	mr r4, r0
/* 8016EDC8 0016BD08  48 00 03 05 */	bl getMgrByID__Q24Game9PelletMgrFUc
/* 8016EDCC 0016BD0C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8016EDD0 0016BD10  40 82 00 20 */	bne .L_8016EDF0
/* 8016EDD4 0016BD14  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016EDD8 0016BD18  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016EDDC 0016BD1C  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016EDE0 0016BD20  38 80 16 F9 */	li r4, 0x16f9
/* 8016EDE4 0016BD24  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016EDE8 0016BD28  4C C6 31 82 */	crclr 6
/* 8016EDEC 0016BD2C  4B EB B8 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016EDF0:
/* 8016EDF0 0016BD30  2C 1E 00 00 */	cmpwi r30, 0
/* 8016EDF4 0016BD34  41 80 00 14 */	blt .L_8016EE08
/* 8016EDF8 0016BD38  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016EDFC 0016BD3C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016EE00 0016BD40  7C 1E 00 00 */	cmpw r30, r0
/* 8016EE04 0016BD44  41 80 00 0C */	blt .L_8016EE10
.L_8016EE08:
/* 8016EE08 0016BD48  3B E0 00 00 */	li r31, 0
/* 8016EE0C 0016BD4C  48 00 00 10 */	b .L_8016EE1C
.L_8016EE10:
/* 8016EE10 0016BD50  1C 1E 02 60 */	mulli r0, r30, 0x260
/* 8016EE14 0016BD54  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8016EE18 0016BD58  7F E3 02 14 */	add r31, r3, r0
.L_8016EE1C:
/* 8016EE1C 0016BD5C  28 1F 00 00 */	cmplwi r31, 0
/* 8016EE20 0016BD60  40 82 00 20 */	bne .L_8016EE40
/* 8016EE24 0016BD64  3C 60 80 48 */	lis r3, lbl_8047E344@ha
/* 8016EE28 0016BD68  3C A0 80 48 */	lis r5, lbl_8047E354@ha
/* 8016EE2C 0016BD6C  38 63 E3 44 */	addi r3, r3, lbl_8047E344@l
/* 8016EE30 0016BD70  38 80 16 FB */	li r4, 0x16fb
/* 8016EE34 0016BD74  38 A5 E3 54 */	addi r5, r5, lbl_8047E354@l
/* 8016EE38 0016BD78  4C C6 31 82 */	crclr 6
/* 8016EE3C 0016BD7C  4B EB B8 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8016EE40:
/* 8016EE40 0016BD80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EE44 0016BD84  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 8016EE48 0016BD88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EE4C 0016BD8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016EE50 0016BD90  7C 08 03 A6 */	mtlr r0
/* 8016EE54 0016BD94  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EE58 0016BD98  4E 80 00 20 */	blr 
.endfn getCaveName__Q24Game9PelletMgrFi

.fn getCaveID__Q24Game9PelletMgrFPc, global
/* 8016EE5C 0016BD9C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016EE60 0016BDA0  7C 08 02 A6 */	mflr r0
/* 8016EE64 0016BDA4  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 8016EE68 0016BDA8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016EE6C 0016BDAC  38 00 00 00 */	li r0, 0
/* 8016EE70 0016BDB0  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 8016EE74 0016BDB4  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8016EE78 0016BDB8  28 00 00 00 */	cmplwi r0, 0
/* 8016EE7C 0016BDBC  7C 9F 23 78 */	mr r31, r4
/* 8016EE80 0016BDC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EE84 0016BDC4  90 A1 00 08 */	stw r5, 8(r1)
/* 8016EE88 0016BDC8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016EE8C 0016BDCC  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016EE90 0016BDD0  40 82 00 1C */	bne .L_8016EEAC
/* 8016EE94 0016BDD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EE98 0016BDD8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016EE9C 0016BDDC  7D 89 03 A6 */	mtctr r12
/* 8016EEA0 0016BDE0  4E 80 04 21 */	bctrl 
/* 8016EEA4 0016BDE4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016EEA8 0016BDE8  48 00 01 EC */	b .L_8016F094
.L_8016EEAC:
/* 8016EEAC 0016BDEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EEB0 0016BDF0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016EEB4 0016BDF4  7D 89 03 A6 */	mtctr r12
/* 8016EEB8 0016BDF8  4E 80 04 21 */	bctrl 
/* 8016EEBC 0016BDFC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016EEC0 0016BE00  48 00 00 58 */	b .L_8016EF18
.L_8016EEC4:
/* 8016EEC4 0016BE04  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EEC8 0016BE08  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EECC 0016BE0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EED0 0016BE10  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016EED4 0016BE14  7D 89 03 A6 */	mtctr r12
/* 8016EED8 0016BE18  4E 80 04 21 */	bctrl 
/* 8016EEDC 0016BE1C  7C 64 1B 78 */	mr r4, r3
/* 8016EEE0 0016BE20  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016EEE4 0016BE24  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EEE8 0016BE28  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016EEEC 0016BE2C  7D 89 03 A6 */	mtctr r12
/* 8016EEF0 0016BE30  4E 80 04 21 */	bctrl 
/* 8016EEF4 0016BE34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016EEF8 0016BE38  40 82 01 9C */	bne .L_8016F094
/* 8016EEFC 0016BE3C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EF00 0016BE40  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EF04 0016BE44  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EF08 0016BE48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016EF0C 0016BE4C  7D 89 03 A6 */	mtctr r12
/* 8016EF10 0016BE50  4E 80 04 21 */	bctrl 
/* 8016EF14 0016BE54  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016EF18:
/* 8016EF18 0016BE58  81 81 00 08 */	lwz r12, 8(r1)
/* 8016EF1C 0016BE5C  38 61 00 08 */	addi r3, r1, 8
/* 8016EF20 0016BE60  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016EF24 0016BE64  7D 89 03 A6 */	mtctr r12
/* 8016EF28 0016BE68  4E 80 04 21 */	bctrl 
/* 8016EF2C 0016BE6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016EF30 0016BE70  41 82 FF 94 */	beq .L_8016EEC4
/* 8016EF34 0016BE74  48 00 01 60 */	b .L_8016F094
.L_8016EF38:
/* 8016EF38 0016BE78  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EF3C 0016BE7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EF40 0016BE80  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016EF44 0016BE84  7D 89 03 A6 */	mtctr r12
/* 8016EF48 0016BE88  4E 80 04 21 */	bctrl 
/* 8016EF4C 0016BE8C  3B 60 00 00 */	li r27, 0
/* 8016EF50 0016BE90  3B A0 00 00 */	li r29, 0
/* 8016EF54 0016BE94  7C 7C 1B 78 */	mr r28, r3
/* 8016EF58 0016BE98  48 00 00 70 */	b .L_8016EFC8
.L_8016EF5C:
/* 8016EF5C 0016BE9C  2C 1B 00 00 */	cmpwi r27, 0
/* 8016EF60 0016BEA0  41 80 00 0C */	blt .L_8016EF6C
/* 8016EF64 0016BEA4  7C 1B 00 00 */	cmpw r27, r0
/* 8016EF68 0016BEA8  41 80 00 0C */	blt .L_8016EF74
.L_8016EF6C:
/* 8016EF6C 0016BEAC  38 60 00 00 */	li r3, 0
/* 8016EF70 0016BEB0  48 00 00 0C */	b .L_8016EF7C
.L_8016EF74:
/* 8016EF74 0016BEB4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8016EF78 0016BEB8  7C 60 EA 14 */	add r3, r0, r29
.L_8016EF7C:
/* 8016EF7C 0016BEBC  83 C3 00 40 */	lwz r30, 0x40(r3)
/* 8016EF80 0016BEC0  7F E3 FB 78 */	mr r3, r31
/* 8016EF84 0016BEC4  4B F5 B9 8D */	bl strlen
/* 8016EF88 0016BEC8  7C 65 1B 78 */	mr r5, r3
/* 8016EF8C 0016BECC  7F C3 F3 78 */	mr r3, r30
/* 8016EF90 0016BED0  7F E4 FB 78 */	mr r4, r31
/* 8016EF94 0016BED4  4B F5 B6 ED */	bl strncmp
/* 8016EF98 0016BED8  2C 03 00 00 */	cmpwi r3, 0
/* 8016EF9C 0016BEDC  40 82 00 24 */	bne .L_8016EFC0
/* 8016EFA0 0016BEE0  7F 83 E3 78 */	mr r3, r28
/* 8016EFA4 0016BEE4  81 9C 00 00 */	lwz r12, 0(r28)
/* 8016EFA8 0016BEE8  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8016EFAC 0016BEEC  7D 89 03 A6 */	mtctr r12
/* 8016EFB0 0016BEF0  4E 80 04 21 */	bctrl 
/* 8016EFB4 0016BEF4  54 60 C0 0E */	slwi r0, r3, 0x18
/* 8016EFB8 0016BEF8  7C 03 DB 78 */	or r3, r0, r27
/* 8016EFBC 0016BEFC  48 00 00 FC */	b .L_8016F0B8
.L_8016EFC0:
/* 8016EFC0 0016BF00  3B BD 02 60 */	addi r29, r29, 0x260
/* 8016EFC4 0016BF04  3B 7B 00 01 */	addi r27, r27, 1
.L_8016EFC8:
/* 8016EFC8 0016BF08  80 7C 00 08 */	lwz r3, 8(r28)
/* 8016EFCC 0016BF0C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8016EFD0 0016BF10  7C 1B 00 00 */	cmpw r27, r0
/* 8016EFD4 0016BF14  41 80 FF 88 */	blt .L_8016EF5C
/* 8016EFD8 0016BF18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EFDC 0016BF1C  28 00 00 00 */	cmplwi r0, 0
/* 8016EFE0 0016BF20  40 82 00 24 */	bne .L_8016F004
/* 8016EFE4 0016BF24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016EFE8 0016BF28  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016EFEC 0016BF2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016EFF0 0016BF30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016EFF4 0016BF34  7D 89 03 A6 */	mtctr r12
/* 8016EFF8 0016BF38  4E 80 04 21 */	bctrl 
/* 8016EFFC 0016BF3C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016F000 0016BF40  48 00 00 94 */	b .L_8016F094
.L_8016F004:
/* 8016F004 0016BF44  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F008 0016BF48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F00C 0016BF4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F010 0016BF50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F014 0016BF54  7D 89 03 A6 */	mtctr r12
/* 8016F018 0016BF58  4E 80 04 21 */	bctrl 
/* 8016F01C 0016BF5C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016F020 0016BF60  48 00 00 58 */	b .L_8016F078
.L_8016F024:
/* 8016F024 0016BF64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F028 0016BF68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F02C 0016BF6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F030 0016BF70  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F034 0016BF74  7D 89 03 A6 */	mtctr r12
/* 8016F038 0016BF78  4E 80 04 21 */	bctrl 
/* 8016F03C 0016BF7C  7C 64 1B 78 */	mr r4, r3
/* 8016F040 0016BF80  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016F044 0016BF84  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F048 0016BF88  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016F04C 0016BF8C  7D 89 03 A6 */	mtctr r12
/* 8016F050 0016BF90  4E 80 04 21 */	bctrl 
/* 8016F054 0016BF94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F058 0016BF98  40 82 00 3C */	bne .L_8016F094
/* 8016F05C 0016BF9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F060 0016BFA0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F064 0016BFA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F068 0016BFA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F06C 0016BFAC  7D 89 03 A6 */	mtctr r12
/* 8016F070 0016BFB0  4E 80 04 21 */	bctrl 
/* 8016F074 0016BFB4  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016F078:
/* 8016F078 0016BFB8  81 81 00 08 */	lwz r12, 8(r1)
/* 8016F07C 0016BFBC  38 61 00 08 */	addi r3, r1, 8
/* 8016F080 0016BFC0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016F084 0016BFC4  7D 89 03 A6 */	mtctr r12
/* 8016F088 0016BFC8  4E 80 04 21 */	bctrl 
/* 8016F08C 0016BFCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F090 0016BFD0  41 82 FF 94 */	beq .L_8016F024
.L_8016F094:
/* 8016F094 0016BFD4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F098 0016BFD8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F09C 0016BFDC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016F0A0 0016BFE0  7D 89 03 A6 */	mtctr r12
/* 8016F0A4 0016BFE4  4E 80 04 21 */	bctrl 
/* 8016F0A8 0016BFE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F0AC 0016BFEC  7C 04 18 40 */	cmplw r4, r3
/* 8016F0B0 0016BFF0  40 82 FE 88 */	bne .L_8016EF38
/* 8016F0B4 0016BFF4  38 60 FF FF */	li r3, -1
.L_8016F0B8:
/* 8016F0B8 0016BFF8  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8016F0BC 0016BFFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016F0C0 0016C000  7C 08 03 A6 */	mtlr r0
/* 8016F0C4 0016C004  38 21 00 30 */	addi r1, r1, 0x30
/* 8016F0C8 0016C008  4E 80 00 20 */	blr 
.endfn getCaveID__Q24Game9PelletMgrFPc

.fn getMgrByID__Q24Game9PelletMgrFUc, global
/* 8016F0CC 0016C00C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F0D0 0016C010  7C 08 02 A6 */	mflr r0
/* 8016F0D4 0016C014  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 8016F0D8 0016C018  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F0DC 0016C01C  38 00 00 00 */	li r0, 0
/* 8016F0E0 0016C020  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 8016F0E4 0016C024  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016F0E8 0016C028  28 00 00 00 */	cmplwi r0, 0
/* 8016F0EC 0016C02C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016F0F0 0016C030  7C 9E 23 78 */	mr r30, r4
/* 8016F0F4 0016C034  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F0F8 0016C038  90 A1 00 08 */	stw r5, 8(r1)
/* 8016F0FC 0016C03C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016F100 0016C040  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016F104 0016C044  40 82 00 1C */	bne .L_8016F120
/* 8016F108 0016C048  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F10C 0016C04C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016F110 0016C050  7D 89 03 A6 */	mtctr r12
/* 8016F114 0016C054  4E 80 04 21 */	bctrl 
/* 8016F118 0016C058  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016F11C 0016C05C  48 00 00 8C */	b .L_8016F1A8
.L_8016F120:
/* 8016F120 0016C060  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F124 0016C064  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016F128 0016C068  7D 89 03 A6 */	mtctr r12
/* 8016F12C 0016C06C  4E 80 04 21 */	bctrl 
/* 8016F130 0016C070  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016F134 0016C074  48 00 00 58 */	b .L_8016F18C
.L_8016F138:
/* 8016F138 0016C078  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F13C 0016C07C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F140 0016C080  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F144 0016C084  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F148 0016C088  7D 89 03 A6 */	mtctr r12
/* 8016F14C 0016C08C  4E 80 04 21 */	bctrl 
/* 8016F150 0016C090  7C 64 1B 78 */	mr r4, r3
/* 8016F154 0016C094  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016F158 0016C098  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F15C 0016C09C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016F160 0016C0A0  7D 89 03 A6 */	mtctr r12
/* 8016F164 0016C0A4  4E 80 04 21 */	bctrl 
/* 8016F168 0016C0A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F16C 0016C0AC  40 82 00 3C */	bne .L_8016F1A8
/* 8016F170 0016C0B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F174 0016C0B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F178 0016C0B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F17C 0016C0BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F180 0016C0C0  7D 89 03 A6 */	mtctr r12
/* 8016F184 0016C0C4  4E 80 04 21 */	bctrl 
/* 8016F188 0016C0C8  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016F18C:
/* 8016F18C 0016C0CC  81 81 00 08 */	lwz r12, 8(r1)
/* 8016F190 0016C0D0  38 61 00 08 */	addi r3, r1, 8
/* 8016F194 0016C0D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016F198 0016C0D8  7D 89 03 A6 */	mtctr r12
/* 8016F19C 0016C0DC  4E 80 04 21 */	bctrl 
/* 8016F1A0 0016C0E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F1A4 0016C0E4  41 82 FF 94 */	beq .L_8016F138
.L_8016F1A8:
/* 8016F1A8 0016C0E8  57 DF 06 3E */	clrlwi r31, r30, 0x18
/* 8016F1AC 0016C0EC  48 00 01 00 */	b .L_8016F2AC
.L_8016F1B0:
/* 8016F1B0 0016C0F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F1B4 0016C0F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F1B8 0016C0F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F1BC 0016C0FC  7D 89 03 A6 */	mtctr r12
/* 8016F1C0 0016C100  4E 80 04 21 */	bctrl 
/* 8016F1C4 0016C104  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F1C8 0016C108  7C 60 1B 78 */	mr r0, r3
/* 8016F1CC 0016C10C  7C 1E 03 78 */	mr r30, r0
/* 8016F1D0 0016C110  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8016F1D4 0016C114  7D 89 03 A6 */	mtctr r12
/* 8016F1D8 0016C118  4E 80 04 21 */	bctrl 
/* 8016F1DC 0016C11C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8016F1E0 0016C120  7C 1F 00 40 */	cmplw r31, r0
/* 8016F1E4 0016C124  40 82 00 0C */	bne .L_8016F1F0
/* 8016F1E8 0016C128  7F C3 F3 78 */	mr r3, r30
/* 8016F1EC 0016C12C  48 00 00 E4 */	b .L_8016F2D0
.L_8016F1F0:
/* 8016F1F0 0016C130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F1F4 0016C134  28 00 00 00 */	cmplwi r0, 0
/* 8016F1F8 0016C138  40 82 00 24 */	bne .L_8016F21C
/* 8016F1FC 0016C13C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F200 0016C140  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F204 0016C144  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F208 0016C148  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F20C 0016C14C  7D 89 03 A6 */	mtctr r12
/* 8016F210 0016C150  4E 80 04 21 */	bctrl 
/* 8016F214 0016C154  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016F218 0016C158  48 00 00 94 */	b .L_8016F2AC
.L_8016F21C:
/* 8016F21C 0016C15C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F220 0016C160  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F224 0016C164  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F228 0016C168  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F22C 0016C16C  7D 89 03 A6 */	mtctr r12
/* 8016F230 0016C170  4E 80 04 21 */	bctrl 
/* 8016F234 0016C174  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016F238 0016C178  48 00 00 58 */	b .L_8016F290
.L_8016F23C:
/* 8016F23C 0016C17C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F240 0016C180  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F244 0016C184  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F248 0016C188  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F24C 0016C18C  7D 89 03 A6 */	mtctr r12
/* 8016F250 0016C190  4E 80 04 21 */	bctrl 
/* 8016F254 0016C194  7C 64 1B 78 */	mr r4, r3
/* 8016F258 0016C198  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016F25C 0016C19C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F260 0016C1A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016F264 0016C1A4  7D 89 03 A6 */	mtctr r12
/* 8016F268 0016C1A8  4E 80 04 21 */	bctrl 
/* 8016F26C 0016C1AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F270 0016C1B0  40 82 00 3C */	bne .L_8016F2AC
/* 8016F274 0016C1B4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F278 0016C1B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F27C 0016C1BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F280 0016C1C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F284 0016C1C4  7D 89 03 A6 */	mtctr r12
/* 8016F288 0016C1C8  4E 80 04 21 */	bctrl 
/* 8016F28C 0016C1CC  90 61 00 0C */	stw r3, 0xc(r1)
.L_8016F290:
/* 8016F290 0016C1D0  81 81 00 08 */	lwz r12, 8(r1)
/* 8016F294 0016C1D4  38 61 00 08 */	addi r3, r1, 8
/* 8016F298 0016C1D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016F29C 0016C1DC  7D 89 03 A6 */	mtctr r12
/* 8016F2A0 0016C1E0  4E 80 04 21 */	bctrl 
/* 8016F2A4 0016C1E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F2A8 0016C1E8  41 82 FF 94 */	beq .L_8016F23C
.L_8016F2AC:
/* 8016F2AC 0016C1EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016F2B0 0016C1F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F2B4 0016C1F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016F2B8 0016C1F8  7D 89 03 A6 */	mtctr r12
/* 8016F2BC 0016C1FC  4E 80 04 21 */	bctrl 
/* 8016F2C0 0016C200  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016F2C4 0016C204  7C 04 18 40 */	cmplw r4, r3
/* 8016F2C8 0016C208  40 82 FE E8 */	bne .L_8016F1B0
/* 8016F2CC 0016C20C  38 60 00 00 */	li r3, 0
.L_8016F2D0:
/* 8016F2D0 0016C210  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F2D4 0016C214  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016F2D8 0016C218  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016F2DC 0016C21C  7C 08 03 A6 */	mtlr r0
/* 8016F2E0 0016C220  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F2E4 0016C224  4E 80 00 20 */	blr 
.endfn getMgrByID__Q24Game9PelletMgrFUc

.fn __dt__Q24Game9PelletMgrFv, weak
/* 8016F2E8 0016C228  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F2EC 0016C22C  7C 08 02 A6 */	mflr r0
/* 8016F2F0 0016C230  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F2F4 0016C234  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F2F8 0016C238  7C 7F 1B 79 */	or. r31, r3, r3
/* 8016F2FC 0016C23C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F300 0016C240  7C 9E 23 78 */	mr r30, r4
/* 8016F304 0016C244  41 82 00 A8 */	beq .L_8016F3AC
/* 8016F308 0016C248  3C 60 80 4B */	lis r3, __vt__Q24Game9PelletMgr@ha
/* 8016F30C 0016C24C  38 63 1A CC */	addi r3, r3, __vt__Q24Game9PelletMgr@l
/* 8016F310 0016C250  90 7F 00 00 */	stw r3, 0(r31)
/* 8016F314 0016C254  38 03 00 2C */	addi r0, r3, 0x2c
/* 8016F318 0016C258  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8016F31C 0016C25C  41 82 00 80 */	beq .L_8016F39C
/* 8016F320 0016C260  3C 60 80 4B */	lis r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@ha
/* 8016F324 0016C264  34 1F 00 20 */	addic. r0, r31, 0x20
/* 8016F328 0016C268  38 63 1B B4 */	addi r3, r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@l
/* 8016F32C 0016C26C  90 7F 00 00 */	stw r3, 0(r31)
/* 8016F330 0016C270  38 03 00 2C */	addi r0, r3, 0x2c
/* 8016F334 0016C274  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8016F338 0016C278  41 82 00 1C */	beq .L_8016F354
/* 8016F33C 0016C27C  3C 80 80 4B */	lis r4, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
/* 8016F340 0016C280  38 7F 00 20 */	addi r3, r31, 0x20
/* 8016F344 0016C284  38 04 1B A4 */	addi r0, r4, "__vt__31TObjectNode<16GenericObjectMgr>"@l
/* 8016F348 0016C288  38 80 00 00 */	li r4, 0
/* 8016F34C 0016C28C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8016F350 0016C290  48 2A 22 39 */	bl __dt__5CNodeFv
.L_8016F354:
/* 8016F354 0016C294  28 1F 00 00 */	cmplwi r31, 0
/* 8016F358 0016C298  41 82 00 44 */	beq .L_8016F39C
/* 8016F35C 0016C29C  3C 60 80 4B */	lis r3, "__vt__29ObjectMgr<16GenericObjectMgr>"@ha
/* 8016F360 0016C2A0  38 63 1C 34 */	addi r3, r3, "__vt__29ObjectMgr<16GenericObjectMgr>"@l
/* 8016F364 0016C2A4  90 7F 00 00 */	stw r3, 0(r31)
/* 8016F368 0016C2A8  38 03 00 2C */	addi r0, r3, 0x2c
/* 8016F36C 0016C2AC  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8016F370 0016C2B0  41 82 00 2C */	beq .L_8016F39C
/* 8016F374 0016C2B4  3C 60 80 4B */	lis r3, "__vt__29Container<16GenericObjectMgr>"@ha
/* 8016F378 0016C2B8  38 03 1C B0 */	addi r0, r3, "__vt__29Container<16GenericObjectMgr>"@l
/* 8016F37C 0016C2BC  90 1F 00 00 */	stw r0, 0(r31)
/* 8016F380 0016C2C0  41 82 00 1C */	beq .L_8016F39C
/* 8016F384 0016C2C4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8016F388 0016C2C8  7F E3 FB 78 */	mr r3, r31
/* 8016F38C 0016C2CC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8016F390 0016C2D0  38 80 00 00 */	li r4, 0
/* 8016F394 0016C2D4  90 1F 00 00 */	stw r0, 0(r31)
/* 8016F398 0016C2D8  48 2A 21 F1 */	bl __dt__5CNodeFv
.L_8016F39C:
/* 8016F39C 0016C2DC  7F C0 07 35 */	extsh. r0, r30
/* 8016F3A0 0016C2E0  40 81 00 0C */	ble .L_8016F3AC
/* 8016F3A4 0016C2E4  7F E3 FB 78 */	mr r3, r31
/* 8016F3A8 0016C2E8  4B EB 4D 0D */	bl __dl__FPv
.L_8016F3AC:
/* 8016F3AC 0016C2EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F3B0 0016C2F0  7F E3 FB 78 */	mr r3, r31
/* 8016F3B4 0016C2F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F3B8 0016C2F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F3BC 0016C2FC  7C 08 03 A6 */	mtlr r0
/* 8016F3C0 0016C300  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F3C4 0016C304  4E 80 00 20 */	blr 
.endfn __dt__Q24Game9PelletMgrFv

.fn getMgrName__Q24Game9PelletMgrFv, weak
/* 8016F3C8 0016C308  3C 60 80 48 */	lis r3, lbl_8047E494@ha
/* 8016F3CC 0016C30C  38 63 E4 94 */	addi r3, r3, lbl_8047E494@l
/* 8016F3D0 0016C310  4E 80 00 20 */	blr 
.endfn getMgrName__Q24Game9PelletMgrFv

.fn "__ml__28Iterator<16GenericObjectMgr>Fv", weak
/* 8016F3D4 0016C314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F3D8 0016C318  7C 08 02 A6 */	mflr r0
/* 8016F3DC 0016C31C  7C 64 1B 78 */	mr r4, r3
/* 8016F3E0 0016C320  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F3E4 0016C324  80 63 00 08 */	lwz r3, 8(r3)
/* 8016F3E8 0016C328  80 84 00 04 */	lwz r4, 4(r4)
/* 8016F3EC 0016C32C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F3F0 0016C330  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F3F4 0016C334  7D 89 03 A6 */	mtctr r12
/* 8016F3F8 0016C338  4E 80 04 21 */	bctrl 
/* 8016F3FC 0016C33C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F400 0016C340  7C 08 03 A6 */	mtlr r0
/* 8016F404 0016C344  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F408 0016C348  4E 80 00 20 */	blr 
.endfn "__ml__28Iterator<16GenericObjectMgr>Fv"

.fn "next__28Iterator<16GenericObjectMgr>Fv", weak
/* 8016F40C 0016C34C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F410 0016C350  7C 08 02 A6 */	mflr r0
/* 8016F414 0016C354  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F418 0016C358  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F41C 0016C35C  7C 7F 1B 78 */	mr r31, r3
/* 8016F420 0016C360  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8016F424 0016C364  28 00 00 00 */	cmplwi r0, 0
/* 8016F428 0016C368  40 82 00 24 */	bne .L_8016F44C
/* 8016F42C 0016C36C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F430 0016C370  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F434 0016C374  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F438 0016C378  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F43C 0016C37C  7D 89 03 A6 */	mtctr r12
/* 8016F440 0016C380  4E 80 04 21 */	bctrl 
/* 8016F444 0016C384  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F448 0016C388  48 00 00 94 */	b .L_8016F4DC
.L_8016F44C:
/* 8016F44C 0016C38C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F450 0016C390  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F454 0016C394  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F458 0016C398  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F45C 0016C39C  7D 89 03 A6 */	mtctr r12
/* 8016F460 0016C3A0  4E 80 04 21 */	bctrl 
/* 8016F464 0016C3A4  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F468 0016C3A8  48 00 00 58 */	b .L_8016F4C0
.L_8016F46C:
/* 8016F46C 0016C3AC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F470 0016C3B0  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F474 0016C3B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F478 0016C3B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F47C 0016C3BC  7D 89 03 A6 */	mtctr r12
/* 8016F480 0016C3C0  4E 80 04 21 */	bctrl 
/* 8016F484 0016C3C4  7C 64 1B 78 */	mr r4, r3
/* 8016F488 0016C3C8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8016F48C 0016C3CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F490 0016C3D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016F494 0016C3D4  7D 89 03 A6 */	mtctr r12
/* 8016F498 0016C3D8  4E 80 04 21 */	bctrl 
/* 8016F49C 0016C3DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F4A0 0016C3E0  40 82 00 3C */	bne .L_8016F4DC
/* 8016F4A4 0016C3E4  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F4A8 0016C3E8  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F4AC 0016C3EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F4B0 0016C3F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F4B4 0016C3F4  7D 89 03 A6 */	mtctr r12
/* 8016F4B8 0016C3F8  4E 80 04 21 */	bctrl 
/* 8016F4BC 0016C3FC  90 7F 00 04 */	stw r3, 4(r31)
.L_8016F4C0:
/* 8016F4C0 0016C400  7F E3 FB 78 */	mr r3, r31
/* 8016F4C4 0016C404  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016F4C8 0016C408  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016F4CC 0016C40C  7D 89 03 A6 */	mtctr r12
/* 8016F4D0 0016C410  4E 80 04 21 */	bctrl 
/* 8016F4D4 0016C414  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F4D8 0016C418  41 82 FF 94 */	beq .L_8016F46C
.L_8016F4DC:
/* 8016F4DC 0016C41C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F4E0 0016C420  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F4E4 0016C424  7C 08 03 A6 */	mtlr r0
/* 8016F4E8 0016C428  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F4EC 0016C42C  4E 80 00 20 */	blr 
.endfn "next__28Iterator<16GenericObjectMgr>Fv"

.fn "first__28Iterator<16GenericObjectMgr>Fv", weak
/* 8016F4F0 0016C430  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F4F4 0016C434  7C 08 02 A6 */	mflr r0
/* 8016F4F8 0016C438  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F4FC 0016C43C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F500 0016C440  7C 7F 1B 78 */	mr r31, r3
/* 8016F504 0016C444  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8016F508 0016C448  28 00 00 00 */	cmplwi r0, 0
/* 8016F50C 0016C44C  40 82 00 20 */	bne .L_8016F52C
/* 8016F510 0016C450  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F514 0016C454  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F518 0016C458  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016F51C 0016C45C  7D 89 03 A6 */	mtctr r12
/* 8016F520 0016C460  4E 80 04 21 */	bctrl 
/* 8016F524 0016C464  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F528 0016C468  48 00 00 90 */	b .L_8016F5B8
.L_8016F52C:
/* 8016F52C 0016C46C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F530 0016C470  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F534 0016C474  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016F538 0016C478  7D 89 03 A6 */	mtctr r12
/* 8016F53C 0016C47C  4E 80 04 21 */	bctrl 
/* 8016F540 0016C480  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F544 0016C484  48 00 00 58 */	b .L_8016F59C
.L_8016F548:
/* 8016F548 0016C488  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F54C 0016C48C  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F550 0016C490  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F554 0016C494  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F558 0016C498  7D 89 03 A6 */	mtctr r12
/* 8016F55C 0016C49C  4E 80 04 21 */	bctrl 
/* 8016F560 0016C4A0  7C 64 1B 78 */	mr r4, r3
/* 8016F564 0016C4A4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8016F568 0016C4A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F56C 0016C4AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016F570 0016C4B0  7D 89 03 A6 */	mtctr r12
/* 8016F574 0016C4B4  4E 80 04 21 */	bctrl 
/* 8016F578 0016C4B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F57C 0016C4BC  40 82 00 3C */	bne .L_8016F5B8
/* 8016F580 0016C4C0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F584 0016C4C4  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F588 0016C4C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F58C 0016C4CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F590 0016C4D0  7D 89 03 A6 */	mtctr r12
/* 8016F594 0016C4D4  4E 80 04 21 */	bctrl 
/* 8016F598 0016C4D8  90 7F 00 04 */	stw r3, 4(r31)
.L_8016F59C:
/* 8016F59C 0016C4DC  7F E3 FB 78 */	mr r3, r31
/* 8016F5A0 0016C4E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016F5A4 0016C4E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016F5A8 0016C4E8  7D 89 03 A6 */	mtctr r12
/* 8016F5AC 0016C4EC  4E 80 04 21 */	bctrl 
/* 8016F5B0 0016C4F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F5B4 0016C4F4  41 82 FF 94 */	beq .L_8016F548
.L_8016F5B8:
/* 8016F5B8 0016C4F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F5BC 0016C4FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F5C0 0016C500  7C 08 03 A6 */	mtlr r0
/* 8016F5C4 0016C504  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F5C8 0016C508  4E 80 00 20 */	blr 
.endfn "first__28Iterator<16GenericObjectMgr>Fv"

.fn "__ml__36Iterator<Q34Game10PelletItem6Object>Fv", weak
/* 8016F5CC 0016C50C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F5D0 0016C510  7C 08 02 A6 */	mflr r0
/* 8016F5D4 0016C514  7C 64 1B 78 */	mr r4, r3
/* 8016F5D8 0016C518  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F5DC 0016C51C  80 63 00 08 */	lwz r3, 8(r3)
/* 8016F5E0 0016C520  80 84 00 04 */	lwz r4, 4(r4)
/* 8016F5E4 0016C524  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F5E8 0016C528  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F5EC 0016C52C  7D 89 03 A6 */	mtctr r12
/* 8016F5F0 0016C530  4E 80 04 21 */	bctrl 
/* 8016F5F4 0016C534  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F5F8 0016C538  7C 08 03 A6 */	mtlr r0
/* 8016F5FC 0016C53C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F600 0016C540  4E 80 00 20 */	blr 
.endfn "__ml__36Iterator<Q34Game10PelletItem6Object>Fv"

.fn "next__36Iterator<Q34Game10PelletItem6Object>Fv", weak
/* 8016F604 0016C544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F608 0016C548  7C 08 02 A6 */	mflr r0
/* 8016F60C 0016C54C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F610 0016C550  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F614 0016C554  7C 7F 1B 78 */	mr r31, r3
/* 8016F618 0016C558  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8016F61C 0016C55C  28 00 00 00 */	cmplwi r0, 0
/* 8016F620 0016C560  40 82 00 24 */	bne .L_8016F644
/* 8016F624 0016C564  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F628 0016C568  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F62C 0016C56C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F630 0016C570  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F634 0016C574  7D 89 03 A6 */	mtctr r12
/* 8016F638 0016C578  4E 80 04 21 */	bctrl 
/* 8016F63C 0016C57C  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F640 0016C580  48 00 00 94 */	b .L_8016F6D4
.L_8016F644:
/* 8016F644 0016C584  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F648 0016C588  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F64C 0016C58C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F650 0016C590  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F654 0016C594  7D 89 03 A6 */	mtctr r12
/* 8016F658 0016C598  4E 80 04 21 */	bctrl 
/* 8016F65C 0016C59C  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F660 0016C5A0  48 00 00 58 */	b .L_8016F6B8
.L_8016F664:
/* 8016F664 0016C5A4  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F668 0016C5A8  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F66C 0016C5AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F670 0016C5B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F674 0016C5B4  7D 89 03 A6 */	mtctr r12
/* 8016F678 0016C5B8  4E 80 04 21 */	bctrl 
/* 8016F67C 0016C5BC  7C 64 1B 78 */	mr r4, r3
/* 8016F680 0016C5C0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8016F684 0016C5C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F688 0016C5C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016F68C 0016C5CC  7D 89 03 A6 */	mtctr r12
/* 8016F690 0016C5D0  4E 80 04 21 */	bctrl 
/* 8016F694 0016C5D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F698 0016C5D8  40 82 00 3C */	bne .L_8016F6D4
/* 8016F69C 0016C5DC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F6A0 0016C5E0  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F6A4 0016C5E4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F6A8 0016C5E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F6AC 0016C5EC  7D 89 03 A6 */	mtctr r12
/* 8016F6B0 0016C5F0  4E 80 04 21 */	bctrl 
/* 8016F6B4 0016C5F4  90 7F 00 04 */	stw r3, 4(r31)
.L_8016F6B8:
/* 8016F6B8 0016C5F8  7F E3 FB 78 */	mr r3, r31
/* 8016F6BC 0016C5FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016F6C0 0016C600  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016F6C4 0016C604  7D 89 03 A6 */	mtctr r12
/* 8016F6C8 0016C608  4E 80 04 21 */	bctrl 
/* 8016F6CC 0016C60C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F6D0 0016C610  41 82 FF 94 */	beq .L_8016F664
.L_8016F6D4:
/* 8016F6D4 0016C614  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F6D8 0016C618  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F6DC 0016C61C  7C 08 03 A6 */	mtlr r0
/* 8016F6E0 0016C620  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F6E4 0016C624  4E 80 00 20 */	blr 
.endfn "next__36Iterator<Q34Game10PelletItem6Object>Fv"

.fn "first__36Iterator<Q34Game10PelletItem6Object>Fv", weak
/* 8016F6E8 0016C628  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F6EC 0016C62C  7C 08 02 A6 */	mflr r0
/* 8016F6F0 0016C630  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F6F4 0016C634  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F6F8 0016C638  7C 7F 1B 78 */	mr r31, r3
/* 8016F6FC 0016C63C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8016F700 0016C640  28 00 00 00 */	cmplwi r0, 0
/* 8016F704 0016C644  40 82 00 20 */	bne .L_8016F724
/* 8016F708 0016C648  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F70C 0016C64C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F710 0016C650  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016F714 0016C654  7D 89 03 A6 */	mtctr r12
/* 8016F718 0016C658  4E 80 04 21 */	bctrl 
/* 8016F71C 0016C65C  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F720 0016C660  48 00 00 90 */	b .L_8016F7B0
.L_8016F724:
/* 8016F724 0016C664  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F728 0016C668  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F72C 0016C66C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016F730 0016C670  7D 89 03 A6 */	mtctr r12
/* 8016F734 0016C674  4E 80 04 21 */	bctrl 
/* 8016F738 0016C678  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F73C 0016C67C  48 00 00 58 */	b .L_8016F794
.L_8016F740:
/* 8016F740 0016C680  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F744 0016C684  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F748 0016C688  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F74C 0016C68C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F750 0016C690  7D 89 03 A6 */	mtctr r12
/* 8016F754 0016C694  4E 80 04 21 */	bctrl 
/* 8016F758 0016C698  7C 64 1B 78 */	mr r4, r3
/* 8016F75C 0016C69C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8016F760 0016C6A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F764 0016C6A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016F768 0016C6A8  7D 89 03 A6 */	mtctr r12
/* 8016F76C 0016C6AC  4E 80 04 21 */	bctrl 
/* 8016F770 0016C6B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F774 0016C6B4  40 82 00 3C */	bne .L_8016F7B0
/* 8016F778 0016C6B8  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F77C 0016C6BC  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F780 0016C6C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F784 0016C6C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F788 0016C6C8  7D 89 03 A6 */	mtctr r12
/* 8016F78C 0016C6CC  4E 80 04 21 */	bctrl 
/* 8016F790 0016C6D0  90 7F 00 04 */	stw r3, 4(r31)
.L_8016F794:
/* 8016F794 0016C6D4  7F E3 FB 78 */	mr r3, r31
/* 8016F798 0016C6D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016F79C 0016C6DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016F7A0 0016C6E0  7D 89 03 A6 */	mtctr r12
/* 8016F7A4 0016C6E4  4E 80 04 21 */	bctrl 
/* 8016F7A8 0016C6E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F7AC 0016C6EC  41 82 FF 94 */	beq .L_8016F740
.L_8016F7B0:
/* 8016F7B0 0016C6F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F7B4 0016C6F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F7B8 0016C6F8  7C 08 03 A6 */	mtlr r0
/* 8016F7BC 0016C6FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F7C0 0016C700  4E 80 00 20 */	blr 
.endfn "first__36Iterator<Q34Game10PelletItem6Object>Fv"

.fn "__ml__39Iterator<Q34Game13PelletOtakara6Object>Fv", weak
/* 8016F7C4 0016C704  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F7C8 0016C708  7C 08 02 A6 */	mflr r0
/* 8016F7CC 0016C70C  7C 64 1B 78 */	mr r4, r3
/* 8016F7D0 0016C710  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F7D4 0016C714  80 63 00 08 */	lwz r3, 8(r3)
/* 8016F7D8 0016C718  80 84 00 04 */	lwz r4, 4(r4)
/* 8016F7DC 0016C71C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F7E0 0016C720  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F7E4 0016C724  7D 89 03 A6 */	mtctr r12
/* 8016F7E8 0016C728  4E 80 04 21 */	bctrl 
/* 8016F7EC 0016C72C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F7F0 0016C730  7C 08 03 A6 */	mtlr r0
/* 8016F7F4 0016C734  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F7F8 0016C738  4E 80 00 20 */	blr 
.endfn "__ml__39Iterator<Q34Game13PelletOtakara6Object>Fv"

.fn "next__39Iterator<Q34Game13PelletOtakara6Object>Fv", weak
/* 8016F7FC 0016C73C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F800 0016C740  7C 08 02 A6 */	mflr r0
/* 8016F804 0016C744  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F808 0016C748  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F80C 0016C74C  7C 7F 1B 78 */	mr r31, r3
/* 8016F810 0016C750  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8016F814 0016C754  28 00 00 00 */	cmplwi r0, 0
/* 8016F818 0016C758  40 82 00 24 */	bne .L_8016F83C
/* 8016F81C 0016C75C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F820 0016C760  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F824 0016C764  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F828 0016C768  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F82C 0016C76C  7D 89 03 A6 */	mtctr r12
/* 8016F830 0016C770  4E 80 04 21 */	bctrl 
/* 8016F834 0016C774  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F838 0016C778  48 00 00 94 */	b .L_8016F8CC
.L_8016F83C:
/* 8016F83C 0016C77C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F840 0016C780  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F844 0016C784  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F848 0016C788  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F84C 0016C78C  7D 89 03 A6 */	mtctr r12
/* 8016F850 0016C790  4E 80 04 21 */	bctrl 
/* 8016F854 0016C794  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F858 0016C798  48 00 00 58 */	b .L_8016F8B0
.L_8016F85C:
/* 8016F85C 0016C79C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F860 0016C7A0  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F864 0016C7A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F868 0016C7A8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F86C 0016C7AC  7D 89 03 A6 */	mtctr r12
/* 8016F870 0016C7B0  4E 80 04 21 */	bctrl 
/* 8016F874 0016C7B4  7C 64 1B 78 */	mr r4, r3
/* 8016F878 0016C7B8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8016F87C 0016C7BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F880 0016C7C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016F884 0016C7C4  7D 89 03 A6 */	mtctr r12
/* 8016F888 0016C7C8  4E 80 04 21 */	bctrl 
/* 8016F88C 0016C7CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F890 0016C7D0  40 82 00 3C */	bne .L_8016F8CC
/* 8016F894 0016C7D4  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F898 0016C7D8  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F89C 0016C7DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F8A0 0016C7E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F8A4 0016C7E4  7D 89 03 A6 */	mtctr r12
/* 8016F8A8 0016C7E8  4E 80 04 21 */	bctrl 
/* 8016F8AC 0016C7EC  90 7F 00 04 */	stw r3, 4(r31)
.L_8016F8B0:
/* 8016F8B0 0016C7F0  7F E3 FB 78 */	mr r3, r31
/* 8016F8B4 0016C7F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016F8B8 0016C7F8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016F8BC 0016C7FC  7D 89 03 A6 */	mtctr r12
/* 8016F8C0 0016C800  4E 80 04 21 */	bctrl 
/* 8016F8C4 0016C804  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F8C8 0016C808  41 82 FF 94 */	beq .L_8016F85C
.L_8016F8CC:
/* 8016F8CC 0016C80C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F8D0 0016C810  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F8D4 0016C814  7C 08 03 A6 */	mtlr r0
/* 8016F8D8 0016C818  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F8DC 0016C81C  4E 80 00 20 */	blr 
.endfn "next__39Iterator<Q34Game13PelletOtakara6Object>Fv"

.fn "first__39Iterator<Q34Game13PelletOtakara6Object>Fv", weak
/* 8016F8E0 0016C820  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F8E4 0016C824  7C 08 02 A6 */	mflr r0
/* 8016F8E8 0016C828  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F8EC 0016C82C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F8F0 0016C830  7C 7F 1B 78 */	mr r31, r3
/* 8016F8F4 0016C834  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8016F8F8 0016C838  28 00 00 00 */	cmplwi r0, 0
/* 8016F8FC 0016C83C  40 82 00 20 */	bne .L_8016F91C
/* 8016F900 0016C840  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F904 0016C844  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F908 0016C848  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016F90C 0016C84C  7D 89 03 A6 */	mtctr r12
/* 8016F910 0016C850  4E 80 04 21 */	bctrl 
/* 8016F914 0016C854  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F918 0016C858  48 00 00 90 */	b .L_8016F9A8
.L_8016F91C:
/* 8016F91C 0016C85C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F920 0016C860  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F924 0016C864  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016F928 0016C868  7D 89 03 A6 */	mtctr r12
/* 8016F92C 0016C86C  4E 80 04 21 */	bctrl 
/* 8016F930 0016C870  90 7F 00 04 */	stw r3, 4(r31)
/* 8016F934 0016C874  48 00 00 58 */	b .L_8016F98C
.L_8016F938:
/* 8016F938 0016C878  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F93C 0016C87C  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F940 0016C880  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F944 0016C884  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016F948 0016C888  7D 89 03 A6 */	mtctr r12
/* 8016F94C 0016C88C  4E 80 04 21 */	bctrl 
/* 8016F950 0016C890  7C 64 1B 78 */	mr r4, r3
/* 8016F954 0016C894  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8016F958 0016C898  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F95C 0016C89C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016F960 0016C8A0  7D 89 03 A6 */	mtctr r12
/* 8016F964 0016C8A4  4E 80 04 21 */	bctrl 
/* 8016F968 0016C8A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F96C 0016C8AC  40 82 00 3C */	bne .L_8016F9A8
/* 8016F970 0016C8B0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8016F974 0016C8B4  80 9F 00 04 */	lwz r4, 4(r31)
/* 8016F978 0016C8B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016F97C 0016C8BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016F980 0016C8C0  7D 89 03 A6 */	mtctr r12
/* 8016F984 0016C8C4  4E 80 04 21 */	bctrl 
/* 8016F988 0016C8C8  90 7F 00 04 */	stw r3, 4(r31)
.L_8016F98C:
/* 8016F98C 0016C8CC  7F E3 FB 78 */	mr r3, r31
/* 8016F990 0016C8D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8016F994 0016C8D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016F998 0016C8D8  7D 89 03 A6 */	mtctr r12
/* 8016F99C 0016C8DC  4E 80 04 21 */	bctrl 
/* 8016F9A0 0016C8E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F9A4 0016C8E4  41 82 FF 94 */	beq .L_8016F938
.L_8016F9A8:
/* 8016F9A8 0016C8E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F9AC 0016C8EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F9B0 0016C8F0  7C 08 03 A6 */	mtlr r0
/* 8016F9B4 0016C8F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F9B8 0016C8F8  4E 80 00 20 */	blr 
.endfn "first__39Iterator<Q34Game13PelletOtakara6Object>Fv"

.fn "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm", weak
/* 8016F9BC 0016C8FC  38 60 00 00 */	li r3, 0
/* 8016F9C0 0016C900  4E 80 00 20 */	blr 
.endfn "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"

.fn generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm, weak
/* 8016F9C4 0016C904  4E 80 00 20 */	blr 
.endfn generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm

.fn generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl, weak
/* 8016F9C8 0016C908  4E 80 00 20 */	blr 
.endfn generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl

.fn generatorLocalVersion__Q24Game13BasePelletMgrFv, weak
/* 8016F9CC 0016C90C  3C 60 30 30 */	lis r3, 0x30303030@ha
/* 8016F9D0 0016C910  38 63 30 30 */	addi r3, r3, 0x30303030@l
/* 8016F9D4 0016C914  4E 80 00 20 */	blr 
.endfn generatorLocalVersion__Q24Game13BasePelletMgrFv

.fn doAnimation__Q24Game13BasePelletMgrFv, weak
/* 8016F9D8 0016C918  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game13BasePelletMgrFv

.fn doEntry__Q24Game13BasePelletMgrFv, weak
/* 8016F9DC 0016C91C  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game13BasePelletMgrFv

.fn doSetView__Q24Game13BasePelletMgrFi, weak
/* 8016F9E0 0016C920  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game13BasePelletMgrFi

.fn doViewCalc__Q24Game13BasePelletMgrFv, weak
/* 8016F9E4 0016C924  4E 80 00 20 */	blr 
.endfn doViewCalc__Q24Game13BasePelletMgrFv

.fn doSimulation__Q24Game13BasePelletMgrFf, weak
/* 8016F9E8 0016C928  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game13BasePelletMgrFf

.fn doDirectDraw__Q24Game13BasePelletMgrFR8Graphics, weak
/* 8016F9EC 0016C92C  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game13BasePelletMgrFR8Graphics

.fn "__dt__20Container<8CollPart>Fv", weak
/* 8016F9F0 0016C930  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F9F4 0016C934  7C 08 02 A6 */	mflr r0
/* 8016F9F8 0016C938  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F9FC 0016C93C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FA00 0016C940  7C 9F 23 78 */	mr r31, r4
/* 8016FA04 0016C944  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FA08 0016C948  7C 7E 1B 79 */	or. r30, r3, r3
/* 8016FA0C 0016C94C  41 82 00 38 */	beq .L_8016FA44
/* 8016FA10 0016C950  3C 80 80 4B */	lis r4, "__vt__20Container<8CollPart>"@ha
/* 8016FA14 0016C954  38 04 1D 80 */	addi r0, r4, "__vt__20Container<8CollPart>"@l
/* 8016FA18 0016C958  90 1E 00 00 */	stw r0, 0(r30)
/* 8016FA1C 0016C95C  41 82 00 18 */	beq .L_8016FA34
/* 8016FA20 0016C960  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8016FA24 0016C964  38 80 00 00 */	li r4, 0
/* 8016FA28 0016C968  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8016FA2C 0016C96C  90 1E 00 00 */	stw r0, 0(r30)
/* 8016FA30 0016C970  48 2A 1B 59 */	bl __dt__5CNodeFv
.L_8016FA34:
/* 8016FA34 0016C974  7F E0 07 35 */	extsh. r0, r31
/* 8016FA38 0016C978  40 81 00 0C */	ble .L_8016FA44
/* 8016FA3C 0016C97C  7F C3 F3 78 */	mr r3, r30
/* 8016FA40 0016C980  4B EB 46 75 */	bl __dl__FPv
.L_8016FA44:
/* 8016FA44 0016C984  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FA48 0016C988  7F C3 F3 78 */	mr r3, r30
/* 8016FA4C 0016C98C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FA50 0016C990  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FA54 0016C994  7C 08 03 A6 */	mtlr r0
/* 8016FA58 0016C998  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FA5C 0016C99C  4E 80 00 20 */	blr 
.endfn "__dt__20Container<8CollPart>Fv"

.fn "__dt__20ObjectMgr<8CollPart>Fv", weak
/* 8016FA60 0016C9A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FA64 0016C9A4  7C 08 02 A6 */	mflr r0
/* 8016FA68 0016C9A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FA6C 0016C9AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FA70 0016C9B0  7C 9F 23 78 */	mr r31, r4
/* 8016FA74 0016C9B4  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FA78 0016C9B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8016FA7C 0016C9BC  41 82 00 50 */	beq .L_8016FACC
/* 8016FA80 0016C9C0  3C 80 80 4B */	lis r4, "__vt__20ObjectMgr<8CollPart>"@ha
/* 8016FA84 0016C9C4  38 84 1D AC */	addi r4, r4, "__vt__20ObjectMgr<8CollPart>"@l
/* 8016FA88 0016C9C8  90 9E 00 00 */	stw r4, 0(r30)
/* 8016FA8C 0016C9CC  38 04 00 2C */	addi r0, r4, 0x2c
/* 8016FA90 0016C9D0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8016FA94 0016C9D4  41 82 00 28 */	beq .L_8016FABC
/* 8016FA98 0016C9D8  3C 80 80 4B */	lis r4, "__vt__20Container<8CollPart>"@ha
/* 8016FA9C 0016C9DC  38 04 1D 80 */	addi r0, r4, "__vt__20Container<8CollPart>"@l
/* 8016FAA0 0016C9E0  90 1E 00 00 */	stw r0, 0(r30)
/* 8016FAA4 0016C9E4  41 82 00 18 */	beq .L_8016FABC
/* 8016FAA8 0016C9E8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8016FAAC 0016C9EC  38 80 00 00 */	li r4, 0
/* 8016FAB0 0016C9F0  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8016FAB4 0016C9F4  90 1E 00 00 */	stw r0, 0(r30)
/* 8016FAB8 0016C9F8  48 2A 1A D1 */	bl __dt__5CNodeFv
.L_8016FABC:
/* 8016FABC 0016C9FC  7F E0 07 35 */	extsh. r0, r31
/* 8016FAC0 0016CA00  40 81 00 0C */	ble .L_8016FACC
/* 8016FAC4 0016CA04  7F C3 F3 78 */	mr r3, r30
/* 8016FAC8 0016CA08  4B EB 45 ED */	bl __dl__FPv
.L_8016FACC:
/* 8016FACC 0016CA0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FAD0 0016CA10  7F C3 F3 78 */	mr r3, r30
/* 8016FAD4 0016CA14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FAD8 0016CA18  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FADC 0016CA1C  7C 08 03 A6 */	mtlr r0
/* 8016FAE0 0016CA20  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FAE4 0016CA24  4E 80 00 20 */	blr 
.endfn "__dt__20ObjectMgr<8CollPart>Fv"

.fn satisfy__13WPExcludeSpotFPQ24Game8WayPoint, weak
/* 8016FAE8 0016CA28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FAEC 0016CA2C  7C 08 02 A6 */	mflr r0
/* 8016FAF0 0016CA30  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FAF4 0016CA34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FAF8 0016CA38  3B E0 00 00 */	li r31, 0
/* 8016FAFC 0016CA3C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FB00 0016CA40  7C 9E 23 78 */	mr r30, r4
.L_8016FB04:
/* 8016FB04 0016CA44  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8016FB08 0016CA48  7F E4 FB 78 */	mr r4, r31
/* 8016FB0C 0016CA4C  48 00 BF 91 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8016FB10 0016CA50  28 03 00 00 */	cmplwi r3, 0
/* 8016FB14 0016CA54  41 82 00 18 */	beq .L_8016FB2C
/* 8016FB18 0016CA58  80 03 02 3C */	lwz r0, 0x23c(r3)
/* 8016FB1C 0016CA5C  7C 1E 00 40 */	cmplw r30, r0
/* 8016FB20 0016CA60  40 82 00 0C */	bne .L_8016FB2C
/* 8016FB24 0016CA64  38 60 00 00 */	li r3, 0
/* 8016FB28 0016CA68  48 00 00 2C */	b .L_8016FB54
.L_8016FB2C:
/* 8016FB2C 0016CA6C  3B FF 00 01 */	addi r31, r31, 1
/* 8016FB30 0016CA70  2C 1F 00 03 */	cmpwi r31, 3
/* 8016FB34 0016CA74  41 80 FF D0 */	blt .L_8016FB04
/* 8016FB38 0016CA78  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8016FB3C 0016CA7C  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8016FB40 0016CA80  80 03 02 3C */	lwz r0, 0x23c(r3)
/* 8016FB44 0016CA84  7C 60 F0 50 */	subf r3, r0, r30
/* 8016FB48 0016CA88  7C 1E 00 50 */	subf r0, r30, r0
/* 8016FB4C 0016CA8C  7C 60 03 78 */	or r0, r3, r0
/* 8016FB50 0016CA90  54 03 0F FE */	srwi r3, r0, 0x1f
.L_8016FB54:
/* 8016FB54 0016CA94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FB58 0016CA98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FB5C 0016CA9C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FB60 0016CAA0  7C 08 03 A6 */	mtlr r0
/* 8016FB64 0016CAA4  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FB68 0016CAA8  4E 80 00 20 */	blr 
.endfn satisfy__13WPExcludeSpotFPQ24Game8WayPoint

.fn "satisfy__Q223@unnamed@pelletMgr_cpp@6NotOffFPQ24Game8WayPoint", local
/* 8016FB6C 0016CAAC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8016FB70 0016CAB0  7C 08 02 A6 */	mflr r0
/* 8016FB74 0016CAB4  90 01 00 84 */	stw r0, 0x84(r1)
/* 8016FB78 0016CAB8  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8016FB7C 0016CABC  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8016FB80 0016CAC0  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8016FB84 0016CAC4  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 8016FB88 0016CAC8  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 8016FB8C 0016CACC  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 8016FB90 0016CAD0  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 8016FB94 0016CAD4  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 8016FB98 0016CAD8  88 04 00 34 */	lbz r0, 0x34(r4)
/* 8016FB9C 0016CADC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016FBA0 0016CAE0  41 82 00 0C */	beq .L_8016FBAC
/* 8016FBA4 0016CAE4  38 60 00 00 */	li r3, 0
/* 8016FBA8 0016CAE8  48 00 04 70 */	b .L_80170018
.L_8016FBAC:
/* 8016FBAC 0016CAEC  80 6D 94 48 */	lwz r3, mgr__Q24Game8ItemHole@sda21(r13)
/* 8016FBB0 0016CAF0  C3 A4 00 4C */	lfs f29, 0x4c(r4)
/* 8016FBB4 0016CAF4  28 03 00 00 */	cmplwi r3, 0
/* 8016FBB8 0016CAF8  C3 84 00 54 */	lfs f28, 0x54(r4)
/* 8016FBBC 0016CAFC  41 82 02 28 */	beq .L_8016FDE4
/* 8016FBC0 0016CB00  41 82 00 08 */	beq .L_8016FBC8
/* 8016FBC4 0016CB04  38 63 00 30 */	addi r3, r3, 0x30
.L_8016FBC8:
/* 8016FBC8 0016CB08  38 00 00 00 */	li r0, 0
/* 8016FBCC 0016CB0C  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 8016FBD0 0016CB10  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 8016FBD4 0016CB14  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8016FBD8 0016CB18  28 00 00 00 */	cmplwi r0, 0
/* 8016FBDC 0016CB1C  90 81 00 30 */	stw r4, 0x30(r1)
/* 8016FBE0 0016CB20  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016FBE4 0016CB24  90 61 00 38 */	stw r3, 0x38(r1)
/* 8016FBE8 0016CB28  40 82 00 1C */	bne .L_8016FC04
/* 8016FBEC 0016CB2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FBF0 0016CB30  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016FBF4 0016CB34  7D 89 03 A6 */	mtctr r12
/* 8016FBF8 0016CB38  4E 80 04 21 */	bctrl 
/* 8016FBFC 0016CB3C  90 61 00 34 */	stw r3, 0x34(r1)
/* 8016FC00 0016CB40  48 00 00 8C */	b .L_8016FC8C
.L_8016FC04:
/* 8016FC04 0016CB44  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FC08 0016CB48  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016FC0C 0016CB4C  7D 89 03 A6 */	mtctr r12
/* 8016FC10 0016CB50  4E 80 04 21 */	bctrl 
/* 8016FC14 0016CB54  90 61 00 34 */	stw r3, 0x34(r1)
/* 8016FC18 0016CB58  48 00 00 58 */	b .L_8016FC70
.L_8016FC1C:
/* 8016FC1C 0016CB5C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8016FC20 0016CB60  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8016FC24 0016CB64  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FC28 0016CB68  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016FC2C 0016CB6C  7D 89 03 A6 */	mtctr r12
/* 8016FC30 0016CB70  4E 80 04 21 */	bctrl 
/* 8016FC34 0016CB74  7C 64 1B 78 */	mr r4, r3
/* 8016FC38 0016CB78  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8016FC3C 0016CB7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FC40 0016CB80  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016FC44 0016CB84  7D 89 03 A6 */	mtctr r12
/* 8016FC48 0016CB88  4E 80 04 21 */	bctrl 
/* 8016FC4C 0016CB8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016FC50 0016CB90  40 82 00 3C */	bne .L_8016FC8C
/* 8016FC54 0016CB94  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8016FC58 0016CB98  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8016FC5C 0016CB9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FC60 0016CBA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016FC64 0016CBA4  7D 89 03 A6 */	mtctr r12
/* 8016FC68 0016CBA8  4E 80 04 21 */	bctrl 
/* 8016FC6C 0016CBAC  90 61 00 34 */	stw r3, 0x34(r1)
.L_8016FC70:
/* 8016FC70 0016CBB0  81 81 00 30 */	lwz r12, 0x30(r1)
/* 8016FC74 0016CBB4  38 61 00 30 */	addi r3, r1, 0x30
/* 8016FC78 0016CBB8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016FC7C 0016CBBC  7D 89 03 A6 */	mtctr r12
/* 8016FC80 0016CBC0  4E 80 04 21 */	bctrl 
/* 8016FC84 0016CBC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016FC88 0016CBC8  41 82 FF 94 */	beq .L_8016FC1C
.L_8016FC8C:
/* 8016FC8C 0016CBCC  C3 E2 A5 B4 */	lfs f31, lbl_80518914@sda21(r2)
/* 8016FC90 0016CBD0  C3 C2 A6 9C */	lfs f30, lbl_805189FC@sda21(r2)
/* 8016FC94 0016CBD4  48 00 01 30 */	b .L_8016FDC4
.L_8016FC98:
/* 8016FC98 0016CBD8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8016FC9C 0016CBDC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FCA0 0016CBE0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016FCA4 0016CBE4  7D 89 03 A6 */	mtctr r12
/* 8016FCA8 0016CBE8  4E 80 04 21 */	bctrl 
/* 8016FCAC 0016CBEC  7C 64 1B 78 */	mr r4, r3
/* 8016FCB0 0016CBF0  38 61 00 14 */	addi r3, r1, 0x14
/* 8016FCB4 0016CBF4  81 84 00 00 */	lwz r12, 0(r4)
/* 8016FCB8 0016CBF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016FCBC 0016CBFC  7D 89 03 A6 */	mtctr r12
/* 8016FCC0 0016CC00  4E 80 04 21 */	bctrl 
/* 8016FCC4 0016CC04  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8016FCC8 0016CC08  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8016FCCC 0016CC0C  EC 00 E0 28 */	fsubs f0, f0, f28
/* 8016FCD0 0016CC10  EC 21 E8 28 */	fsubs f1, f1, f29
/* 8016FCD4 0016CC14  EC 00 00 32 */	fmuls f0, f0, f0
/* 8016FCD8 0016CC18  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 8016FCDC 0016CC1C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8016FCE0 0016CC20  40 81 00 14 */	ble .L_8016FCF4
/* 8016FCE4 0016CC24  40 81 00 14 */	ble .L_8016FCF8
/* 8016FCE8 0016CC28  FC 20 00 34 */	frsqrte f1, f0
/* 8016FCEC 0016CC2C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8016FCF0 0016CC30  48 00 00 08 */	b .L_8016FCF8
.L_8016FCF4:
/* 8016FCF4 0016CC34  FC 00 F8 90 */	fmr f0, f31
.L_8016FCF8:
/* 8016FCF8 0016CC38  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8016FCFC 0016CC3C  40 80 00 0C */	bge .L_8016FD08
/* 8016FD00 0016CC40  38 60 00 00 */	li r3, 0
/* 8016FD04 0016CC44  48 00 03 14 */	b .L_80170018
.L_8016FD08:
/* 8016FD08 0016CC48  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8016FD0C 0016CC4C  28 00 00 00 */	cmplwi r0, 0
/* 8016FD10 0016CC50  40 82 00 24 */	bne .L_8016FD34
/* 8016FD14 0016CC54  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8016FD18 0016CC58  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8016FD1C 0016CC5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FD20 0016CC60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016FD24 0016CC64  7D 89 03 A6 */	mtctr r12
/* 8016FD28 0016CC68  4E 80 04 21 */	bctrl 
/* 8016FD2C 0016CC6C  90 61 00 34 */	stw r3, 0x34(r1)
/* 8016FD30 0016CC70  48 00 00 94 */	b .L_8016FDC4
.L_8016FD34:
/* 8016FD34 0016CC74  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8016FD38 0016CC78  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8016FD3C 0016CC7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FD40 0016CC80  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016FD44 0016CC84  7D 89 03 A6 */	mtctr r12
/* 8016FD48 0016CC88  4E 80 04 21 */	bctrl 
/* 8016FD4C 0016CC8C  90 61 00 34 */	stw r3, 0x34(r1)
/* 8016FD50 0016CC90  48 00 00 58 */	b .L_8016FDA8
.L_8016FD54:
/* 8016FD54 0016CC94  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8016FD58 0016CC98  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8016FD5C 0016CC9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FD60 0016CCA0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016FD64 0016CCA4  7D 89 03 A6 */	mtctr r12
/* 8016FD68 0016CCA8  4E 80 04 21 */	bctrl 
/* 8016FD6C 0016CCAC  7C 64 1B 78 */	mr r4, r3
/* 8016FD70 0016CCB0  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8016FD74 0016CCB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FD78 0016CCB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016FD7C 0016CCBC  7D 89 03 A6 */	mtctr r12
/* 8016FD80 0016CCC0  4E 80 04 21 */	bctrl 
/* 8016FD84 0016CCC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016FD88 0016CCC8  40 82 00 3C */	bne .L_8016FDC4
/* 8016FD8C 0016CCCC  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8016FD90 0016CCD0  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8016FD94 0016CCD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FD98 0016CCD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016FD9C 0016CCDC  7D 89 03 A6 */	mtctr r12
/* 8016FDA0 0016CCE0  4E 80 04 21 */	bctrl 
/* 8016FDA4 0016CCE4  90 61 00 34 */	stw r3, 0x34(r1)
.L_8016FDA8:
/* 8016FDA8 0016CCE8  81 81 00 30 */	lwz r12, 0x30(r1)
/* 8016FDAC 0016CCEC  38 61 00 30 */	addi r3, r1, 0x30
/* 8016FDB0 0016CCF0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016FDB4 0016CCF4  7D 89 03 A6 */	mtctr r12
/* 8016FDB8 0016CCF8  4E 80 04 21 */	bctrl 
/* 8016FDBC 0016CCFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016FDC0 0016CD00  41 82 FF 94 */	beq .L_8016FD54
.L_8016FDC4:
/* 8016FDC4 0016CD04  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8016FDC8 0016CD08  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FDCC 0016CD0C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016FDD0 0016CD10  7D 89 03 A6 */	mtctr r12
/* 8016FDD4 0016CD14  4E 80 04 21 */	bctrl 
/* 8016FDD8 0016CD18  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8016FDDC 0016CD1C  7C 04 18 40 */	cmplw r4, r3
/* 8016FDE0 0016CD20  40 82 FE B8 */	bne .L_8016FC98
.L_8016FDE4:
/* 8016FDE4 0016CD24  80 6D 94 B0 */	lwz r3, mgr__Q24Game15ItemBigFountain@sda21(r13)
/* 8016FDE8 0016CD28  28 03 00 00 */	cmplwi r3, 0
/* 8016FDEC 0016CD2C  41 82 02 28 */	beq .L_80170014
/* 8016FDF0 0016CD30  41 82 00 08 */	beq .L_8016FDF8
/* 8016FDF4 0016CD34  38 63 00 30 */	addi r3, r3, 0x30
.L_8016FDF8:
/* 8016FDF8 0016CD38  38 00 00 00 */	li r0, 0
/* 8016FDFC 0016CD3C  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 8016FE00 0016CD40  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 8016FE04 0016CD44  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8016FE08 0016CD48  28 00 00 00 */	cmplwi r0, 0
/* 8016FE0C 0016CD4C  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016FE10 0016CD50  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016FE14 0016CD54  90 61 00 28 */	stw r3, 0x28(r1)
/* 8016FE18 0016CD58  40 82 00 1C */	bne .L_8016FE34
/* 8016FE1C 0016CD5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FE20 0016CD60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016FE24 0016CD64  7D 89 03 A6 */	mtctr r12
/* 8016FE28 0016CD68  4E 80 04 21 */	bctrl 
/* 8016FE2C 0016CD6C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8016FE30 0016CD70  48 00 00 8C */	b .L_8016FEBC
.L_8016FE34:
/* 8016FE34 0016CD74  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FE38 0016CD78  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016FE3C 0016CD7C  7D 89 03 A6 */	mtctr r12
/* 8016FE40 0016CD80  4E 80 04 21 */	bctrl 
/* 8016FE44 0016CD84  90 61 00 24 */	stw r3, 0x24(r1)
/* 8016FE48 0016CD88  48 00 00 58 */	b .L_8016FEA0
.L_8016FE4C:
/* 8016FE4C 0016CD8C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8016FE50 0016CD90  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8016FE54 0016CD94  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FE58 0016CD98  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016FE5C 0016CD9C  7D 89 03 A6 */	mtctr r12
/* 8016FE60 0016CDA0  4E 80 04 21 */	bctrl 
/* 8016FE64 0016CDA4  7C 64 1B 78 */	mr r4, r3
/* 8016FE68 0016CDA8  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8016FE6C 0016CDAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FE70 0016CDB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016FE74 0016CDB4  7D 89 03 A6 */	mtctr r12
/* 8016FE78 0016CDB8  4E 80 04 21 */	bctrl 
/* 8016FE7C 0016CDBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016FE80 0016CDC0  40 82 00 3C */	bne .L_8016FEBC
/* 8016FE84 0016CDC4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8016FE88 0016CDC8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8016FE8C 0016CDCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FE90 0016CDD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016FE94 0016CDD4  7D 89 03 A6 */	mtctr r12
/* 8016FE98 0016CDD8  4E 80 04 21 */	bctrl 
/* 8016FE9C 0016CDDC  90 61 00 24 */	stw r3, 0x24(r1)
.L_8016FEA0:
/* 8016FEA0 0016CDE0  81 81 00 20 */	lwz r12, 0x20(r1)
/* 8016FEA4 0016CDE4  38 61 00 20 */	addi r3, r1, 0x20
/* 8016FEA8 0016CDE8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016FEAC 0016CDEC  7D 89 03 A6 */	mtctr r12
/* 8016FEB0 0016CDF0  4E 80 04 21 */	bctrl 
/* 8016FEB4 0016CDF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016FEB8 0016CDF8  41 82 FF 94 */	beq .L_8016FE4C
.L_8016FEBC:
/* 8016FEBC 0016CDFC  C3 C2 A5 B4 */	lfs f30, lbl_80518914@sda21(r2)
/* 8016FEC0 0016CE00  C3 E2 A6 9C */	lfs f31, lbl_805189FC@sda21(r2)
/* 8016FEC4 0016CE04  48 00 01 30 */	b .L_8016FFF4
.L_8016FEC8:
/* 8016FEC8 0016CE08  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8016FECC 0016CE0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FED0 0016CE10  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016FED4 0016CE14  7D 89 03 A6 */	mtctr r12
/* 8016FED8 0016CE18  4E 80 04 21 */	bctrl 
/* 8016FEDC 0016CE1C  7C 64 1B 78 */	mr r4, r3
/* 8016FEE0 0016CE20  38 61 00 08 */	addi r3, r1, 8
/* 8016FEE4 0016CE24  81 84 00 00 */	lwz r12, 0(r4)
/* 8016FEE8 0016CE28  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016FEEC 0016CE2C  7D 89 03 A6 */	mtctr r12
/* 8016FEF0 0016CE30  4E 80 04 21 */	bctrl 
/* 8016FEF4 0016CE34  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8016FEF8 0016CE38  C0 21 00 08 */	lfs f1, 8(r1)
/* 8016FEFC 0016CE3C  EC 00 E0 28 */	fsubs f0, f0, f28
/* 8016FF00 0016CE40  EC 21 E8 28 */	fsubs f1, f1, f29
/* 8016FF04 0016CE44  EC 00 00 32 */	fmuls f0, f0, f0
/* 8016FF08 0016CE48  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 8016FF0C 0016CE4C  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8016FF10 0016CE50  40 81 00 14 */	ble .L_8016FF24
/* 8016FF14 0016CE54  40 81 00 14 */	ble .L_8016FF28
/* 8016FF18 0016CE58  FC 20 00 34 */	frsqrte f1, f0
/* 8016FF1C 0016CE5C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8016FF20 0016CE60  48 00 00 08 */	b .L_8016FF28
.L_8016FF24:
/* 8016FF24 0016CE64  FC 00 F0 90 */	fmr f0, f30
.L_8016FF28:
/* 8016FF28 0016CE68  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8016FF2C 0016CE6C  40 80 00 0C */	bge .L_8016FF38
/* 8016FF30 0016CE70  38 60 00 00 */	li r3, 0
/* 8016FF34 0016CE74  48 00 00 E4 */	b .L_80170018
.L_8016FF38:
/* 8016FF38 0016CE78  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8016FF3C 0016CE7C  28 00 00 00 */	cmplwi r0, 0
/* 8016FF40 0016CE80  40 82 00 24 */	bne .L_8016FF64
/* 8016FF44 0016CE84  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8016FF48 0016CE88  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8016FF4C 0016CE8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FF50 0016CE90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016FF54 0016CE94  7D 89 03 A6 */	mtctr r12
/* 8016FF58 0016CE98  4E 80 04 21 */	bctrl 
/* 8016FF5C 0016CE9C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8016FF60 0016CEA0  48 00 00 94 */	b .L_8016FFF4
.L_8016FF64:
/* 8016FF64 0016CEA4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8016FF68 0016CEA8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8016FF6C 0016CEAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FF70 0016CEB0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016FF74 0016CEB4  7D 89 03 A6 */	mtctr r12
/* 8016FF78 0016CEB8  4E 80 04 21 */	bctrl 
/* 8016FF7C 0016CEBC  90 61 00 24 */	stw r3, 0x24(r1)
/* 8016FF80 0016CEC0  48 00 00 58 */	b .L_8016FFD8
.L_8016FF84:
/* 8016FF84 0016CEC4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8016FF88 0016CEC8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8016FF8C 0016CECC  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FF90 0016CED0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016FF94 0016CED4  7D 89 03 A6 */	mtctr r12
/* 8016FF98 0016CED8  4E 80 04 21 */	bctrl 
/* 8016FF9C 0016CEDC  7C 64 1B 78 */	mr r4, r3
/* 8016FFA0 0016CEE0  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8016FFA4 0016CEE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FFA8 0016CEE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016FFAC 0016CEEC  7D 89 03 A6 */	mtctr r12
/* 8016FFB0 0016CEF0  4E 80 04 21 */	bctrl 
/* 8016FFB4 0016CEF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016FFB8 0016CEF8  40 82 00 3C */	bne .L_8016FFF4
/* 8016FFBC 0016CEFC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8016FFC0 0016CF00  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8016FFC4 0016CF04  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FFC8 0016CF08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016FFCC 0016CF0C  7D 89 03 A6 */	mtctr r12
/* 8016FFD0 0016CF10  4E 80 04 21 */	bctrl 
/* 8016FFD4 0016CF14  90 61 00 24 */	stw r3, 0x24(r1)
.L_8016FFD8:
/* 8016FFD8 0016CF18  81 81 00 20 */	lwz r12, 0x20(r1)
/* 8016FFDC 0016CF1C  38 61 00 20 */	addi r3, r1, 0x20
/* 8016FFE0 0016CF20  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016FFE4 0016CF24  7D 89 03 A6 */	mtctr r12
/* 8016FFE8 0016CF28  4E 80 04 21 */	bctrl 
/* 8016FFEC 0016CF2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016FFF0 0016CF30  41 82 FF 94 */	beq .L_8016FF84
.L_8016FFF4:
/* 8016FFF4 0016CF34  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8016FFF8 0016CF38  81 83 00 00 */	lwz r12, 0(r3)
/* 8016FFFC 0016CF3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80170000 0016CF40  7D 89 03 A6 */	mtctr r12
/* 80170004 0016CF44  4E 80 04 21 */	bctrl 
/* 80170008 0016CF48  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8017000C 0016CF4C  7C 04 18 40 */	cmplw r4, r3
/* 80170010 0016CF50  40 82 FE B8 */	bne .L_8016FEC8
.L_80170014:
/* 80170014 0016CF54  38 60 00 01 */	li r3, 1
.L_80170018:
/* 80170018 0016CF58  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8017001C 0016CF5C  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80170020 0016CF60  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80170024 0016CF64  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80170028 0016CF68  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 8017002C 0016CF6C  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 80170030 0016CF70  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 80170034 0016CF74  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80170038 0016CF78  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 8017003C 0016CF7C  7C 08 03 A6 */	mtlr r0
/* 80170040 0016CF80  38 21 00 80 */	addi r1, r1, 0x80
/* 80170044 0016CF84  4E 80 00 20 */	blr 
.endfn "satisfy__Q223@unnamed@pelletMgr_cpp@6NotOffFPQ24Game8WayPoint"

.fn "onSetPosition__Q24Game6PelletFR10Vector3<f>", weak
/* 80170048 0016CF88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017004C 0016CF8C  7C 08 02 A6 */	mflr r0
/* 80170050 0016CF90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170054 0016CF94  C0 04 00 00 */	lfs f0, 0(r4)
/* 80170058 0016CF98  D0 03 03 AC */	stfs f0, 0x3ac(r3)
/* 8017005C 0016CF9C  C0 04 00 04 */	lfs f0, 4(r4)
/* 80170060 0016CFA0  D0 03 03 B0 */	stfs f0, 0x3b0(r3)
/* 80170064 0016CFA4  C0 04 00 08 */	lfs f0, 8(r4)
/* 80170068 0016CFA8  D0 03 03 B4 */	stfs f0, 0x3b4(r3)
/* 8017006C 0016CFAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80170070 0016CFB0  81 8C 01 B0 */	lwz r12, 0x1b0(r12)
/* 80170074 0016CFB4  7D 89 03 A6 */	mtctr r12
/* 80170078 0016CFB8  4E 80 04 21 */	bctrl 
/* 8017007C 0016CFBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170080 0016CFC0  7C 08 03 A6 */	mtlr r0
/* 80170084 0016CFC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80170088 0016CFC8  4E 80 00 20 */	blr 
.endfn "onSetPosition__Q24Game6PelletFR10Vector3<f>"

.fn inWater__Q24Game6PelletFv, weak
/* 8017008C 0016CFCC  88 63 03 25 */	lbz r3, 0x325(r3)
/* 80170090 0016CFD0  4E 80 00 20 */	blr 
.endfn inWater__Q24Game6PelletFv

.fn getBedamaColor__Q24Game6PelletFv, weak
/* 80170094 0016CFD4  38 60 FF FF */	li r3, -1
/* 80170098 0016CFD8  4E 80 00 20 */	blr 
.endfn getBedamaColor__Q24Game6PelletFv

.fn getSound_PosPtr__Q24Game6PelletFv, weak
/* 8017009C 0016CFDC  38 63 03 AC */	addi r3, r3, 0x3ac
/* 801700A0 0016CFE0  4E 80 00 20 */	blr 
.endfn getSound_PosPtr__Q24Game6PelletFv

.fn getFaceDir__Q24Game6PelletFv, weak
/* 801700A4 0016CFE4  C0 23 03 B8 */	lfs f1, 0x3b8(r3)
/* 801700A8 0016CFE8  4E 80 00 20 */	blr 
.endfn getFaceDir__Q24Game6PelletFv

.fn deferPikiCollision__Q24Game6PelletFv, weak
/* 801700AC 0016CFEC  38 60 00 01 */	li r3, 1
/* 801700B0 0016CFF0  4E 80 00 20 */	blr 
.endfn deferPikiCollision__Q24Game6PelletFv

.fn sound_otakaraEventFinish__Q24Game6PelletFv, weak
/* 801700B4 0016CFF4  4E 80 00 20 */	blr 
.endfn sound_otakaraEventFinish__Q24Game6PelletFv

.fn __dt__Q23PSM9EventBaseFv, weak
/* 801700B8 0016CFF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801700BC 0016CFFC  7C 08 02 A6 */	mflr r0
/* 801700C0 0016D000  90 01 00 14 */	stw r0, 0x14(r1)
/* 801700C4 0016D004  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801700C8 0016D008  7C 9F 23 78 */	mr r31, r4
/* 801700CC 0016D00C  93 C1 00 08 */	stw r30, 8(r1)
/* 801700D0 0016D010  7C 7E 1B 79 */	or. r30, r3, r3
/* 801700D4 0016D014  41 82 00 84 */	beq .L_80170158
/* 801700D8 0016D018  3C 60 80 4B */	lis r3, __vt__Q23PSM9EventBase@ha
/* 801700DC 0016D01C  38 83 21 A4 */	addi r4, r3, __vt__Q23PSM9EventBase@l
/* 801700E0 0016D020  90 9E 00 28 */	stw r4, 0x28(r30)
/* 801700E4 0016D024  38 64 00 08 */	addi r3, r4, 8
/* 801700E8 0016D028  38 04 00 40 */	addi r0, r4, 0x40
/* 801700EC 0016D02C  90 7E 00 10 */	stw r3, 0x10(r30)
/* 801700F0 0016D030  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801700F4 0016D034  41 82 00 54 */	beq .L_80170148
/* 801700F8 0016D038  3C 80 80 4F */	lis r4, __vt__Q23PSM11CreatureObj@ha
/* 801700FC 0016D03C  38 7E 00 30 */	addi r3, r30, 0x30
/* 80170100 0016D040  38 C4 F1 44 */	addi r6, r4, __vt__Q23PSM11CreatureObj@l
/* 80170104 0016D044  38 80 00 00 */	li r4, 0
/* 80170108 0016D048  90 DE 00 28 */	stw r6, 0x28(r30)
/* 8017010C 0016D04C  38 A6 00 08 */	addi r5, r6, 8
/* 80170110 0016D050  38 06 00 40 */	addi r0, r6, 0x40
/* 80170114 0016D054  90 BE 00 10 */	stw r5, 0x10(r30)
/* 80170118 0016D058  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8017011C 0016D05C  4B F4 9A C5 */	bl __dt__Q27JAInter6ObjectFv
/* 80170120 0016D060  28 1E 00 00 */	cmplwi r30, 0
/* 80170124 0016D064  41 82 00 24 */	beq .L_80170148
/* 80170128 0016D068  3C 80 80 4F */	lis r4, __vt__Q23PSM8Creature@ha
/* 8017012C 0016D06C  7F C3 F3 78 */	mr r3, r30
/* 80170130 0016D070  38 A4 F1 CC */	addi r5, r4, __vt__Q23PSM8Creature@l
/* 80170134 0016D074  38 80 00 00 */	li r4, 0
/* 80170138 0016D078  90 BE 00 28 */	stw r5, 0x28(r30)
/* 8017013C 0016D07C  38 05 00 08 */	addi r0, r5, 8
/* 80170140 0016D080  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80170144 0016D084  48 2E CD 21 */	bl __dt__Q23PSM7ObjBaseFv
.L_80170148:
/* 80170148 0016D088  7F E0 07 35 */	extsh. r0, r31
/* 8017014C 0016D08C  40 81 00 0C */	ble .L_80170158
/* 80170150 0016D090  7F C3 F3 78 */	mr r3, r30
/* 80170154 0016D094  4B EB 3F 61 */	bl __dl__FPv
.L_80170158:
/* 80170158 0016D098  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017015C 0016D09C  7F C3 F3 78 */	mr r3, r30
/* 80170160 0016D0A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170164 0016D0A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80170168 0016D0A8  7C 08 03 A6 */	mtlr r0
/* 8017016C 0016D0AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80170170 0016D0B0  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM9EventBaseFv

.fn getCastType__Q23PSM11CreatureObjFv, weak
/* 80170174 0016D0B4  38 60 00 00 */	li r3, 0
/* 80170178 0016D0B8  4E 80 00 20 */	blr 
.endfn getCastType__Q23PSM11CreatureObjFv

.fn getJAIObject__Q23PSM11CreatureObjFv, weak
/* 8017017C 0016D0BC  28 03 00 00 */	cmplwi r3, 0
/* 80170180 0016D0C0  4D 82 00 20 */	beqlr 
/* 80170184 0016D0C4  38 63 00 30 */	addi r3, r3, 0x30
/* 80170188 0016D0C8  4E 80 00 20 */	blr 
.endfn getJAIObject__Q23PSM11CreatureObjFv

.fn getHandleArea__Q23PSM11CreatureObjFUc, weak
/* 8017018C 0016D0CC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80170190 0016D0D0  54 80 15 BA */	rlwinm r0, r4, 2, 0x16, 0x1d
/* 80170194 0016D0D4  7C 63 02 14 */	add r3, r3, r0
/* 80170198 0016D0D8  4E 80 00 20 */	blr 
.endfn getHandleArea__Q23PSM11CreatureObjFUc

.fn onCalcOn__Q23PSM11CreatureObjFv, weak
/* 8017019C 0016D0DC  4E 80 00 20 */	blr 
.endfn onCalcOn__Q23PSM11CreatureObjFv

.fn getName__Q24Game18PelletGoalStateArgFv, weak
/* 801701A0 0016D0E0  3C 60 80 48 */	lis r3, lbl_8047E534@ha
/* 801701A4 0016D0E4  38 63 E5 34 */	addi r3, r3, lbl_8047E534@l
/* 801701A8 0016D0E8  4E 80 00 20 */	blr 
.endfn getName__Q24Game18PelletGoalStateArgFv

.fn "init__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet", weak
/* 801701AC 0016D0EC  4E 80 00 20 */	blr 
.endfn "init__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"

.fn "get__33NodeObjectMgr<16GenericObjectMgr>FPv", weak
/* 801701B0 0016D0F0  80 64 00 18 */	lwz r3, 0x18(r4)
/* 801701B4 0016D0F4  4E 80 00 20 */	blr 
.endfn "get__33NodeObjectMgr<16GenericObjectMgr>FPv"

.fn "getNext__33NodeObjectMgr<16GenericObjectMgr>FPv", weak
/* 801701B8 0016D0F8  80 64 00 04 */	lwz r3, 4(r4)
/* 801701BC 0016D0FC  4E 80 00 20 */	blr 
.endfn "getNext__33NodeObjectMgr<16GenericObjectMgr>FPv"

.fn "getStart__33NodeObjectMgr<16GenericObjectMgr>Fv", weak
/* 801701C0 0016D100  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801701C4 0016D104  4E 80 00 20 */	blr 
.endfn "getStart__33NodeObjectMgr<16GenericObjectMgr>Fv"

.fn "getEnd__33NodeObjectMgr<16GenericObjectMgr>Fv", weak
/* 801701C8 0016D108  38 60 00 00 */	li r3, 0
/* 801701CC 0016D10C  4E 80 00 20 */	blr 
.endfn "getEnd__33NodeObjectMgr<16GenericObjectMgr>Fv"

.fn "resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv", weak
/* 801701D0 0016D110  38 00 00 00 */	li r0, 0
/* 801701D4 0016D114  90 03 00 30 */	stw r0, 0x30(r3)
/* 801701D8 0016D118  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801701DC 0016D11C  90 03 00 28 */	stw r0, 0x28(r3)
/* 801701E0 0016D120  90 03 00 24 */	stw r0, 0x24(r3)
/* 801701E4 0016D124  4E 80 00 20 */	blr 
.endfn "resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"

.fn "resetMgr__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv", weak
/* 801701E8 0016D128  38 00 00 00 */	li r0, 0
/* 801701EC 0016D12C  90 03 00 28 */	stw r0, 0x28(r3)
/* 801701F0 0016D130  90 03 00 24 */	stw r0, 0x24(r3)
/* 801701F4 0016D134  90 03 00 20 */	stw r0, 0x20(r3)
/* 801701F8 0016D138  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801701FC 0016D13C  4E 80 00 20 */	blr 
.endfn "resetMgr__42MonoObjectMgr<Q34Game11PelletFruit6Object>Fv"

.fn "resetMgr__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv", weak
/* 80170200 0016D140  38 00 00 00 */	li r0, 0
/* 80170204 0016D144  90 03 00 28 */	stw r0, 0x28(r3)
/* 80170208 0016D148  90 03 00 24 */	stw r0, 0x24(r3)
/* 8017020C 0016D14C  90 03 00 20 */	stw r0, 0x20(r3)
/* 80170210 0016D150  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80170214 0016D154  4E 80 00 20 */	blr 
.endfn "resetMgr__44MonoObjectMgr<Q34Game13PelletCarcass6Object>Fv"

.fn "resetMgr__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv", weak
/* 80170218 0016D158  38 00 00 00 */	li r0, 0
/* 8017021C 0016D15C  90 03 00 28 */	stw r0, 0x28(r3)
/* 80170220 0016D160  90 03 00 24 */	stw r0, 0x24(r3)
/* 80170224 0016D164  90 03 00 20 */	stw r0, 0x20(r3)
/* 80170228 0016D168  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8017022C 0016D16C  4E 80 00 20 */	blr 
.endfn "resetMgr__43MonoObjectMgr<Q34Game12PelletNumber6Object>Fv"

.fn "getNext__24MonoObjectMgr<8CollPart>FPv", weak
/* 80170230 0016D170  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 80170234 0016D174  38 C4 00 01 */	addi r6, r4, 1
/* 80170238 0016D178  7C 06 28 50 */	subf r0, r6, r5
/* 8017023C 0016D17C  7C 09 03 A6 */	mtctr r0
/* 80170240 0016D180  7C 06 28 00 */	cmpw r6, r5
/* 80170244 0016D184  40 80 00 24 */	bge .L_80170268
.L_80170248:
/* 80170248 0016D188  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 8017024C 0016D18C  7C 04 30 AE */	lbzx r0, r4, r6
/* 80170250 0016D190  28 00 00 00 */	cmplwi r0, 0
/* 80170254 0016D194  40 82 00 0C */	bne .L_80170260
/* 80170258 0016D198  7C C3 33 78 */	mr r3, r6
/* 8017025C 0016D19C  4E 80 00 20 */	blr 
.L_80170260:
/* 80170260 0016D1A0  38 C6 00 01 */	addi r6, r6, 1
/* 80170264 0016D1A4  42 00 FF E4 */	bdnz .L_80170248
.L_80170268:
/* 80170268 0016D1A8  7C A3 2B 78 */	mr r3, r5
/* 8017026C 0016D1AC  4E 80 00 20 */	blr 
.endfn "getNext__24MonoObjectMgr<8CollPart>FPv"

.fn "getStart__24MonoObjectMgr<8CollPart>Fv", weak
/* 80170270 0016D1B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170274 0016D1B4  7C 08 02 A6 */	mflr r0
/* 80170278 0016D1B8  38 80 FF FF */	li r4, -1
/* 8017027C 0016D1BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170280 0016D1C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80170284 0016D1C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170288 0016D1C8  7D 89 03 A6 */	mtctr r12
/* 8017028C 0016D1CC  4E 80 04 21 */	bctrl 
/* 80170290 0016D1D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170294 0016D1D4  7C 08 03 A6 */	mtlr r0
/* 80170298 0016D1D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017029C 0016D1DC  4E 80 00 20 */	blr 
.endfn "getStart__24MonoObjectMgr<8CollPart>Fv"

.fn "getEnd__24MonoObjectMgr<8CollPart>Fv", weak
/* 801702A0 0016D1E0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801702A4 0016D1E4  4E 80 00 20 */	blr 
.endfn "getEnd__24MonoObjectMgr<8CollPart>Fv"

.fn "getAt__24MonoObjectMgr<8CollPart>Fi", weak
/* 801702A8 0016D1E8  1C 04 00 64 */	mulli r0, r4, 0x64
/* 801702AC 0016D1EC  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801702B0 0016D1F0  7C 63 02 14 */	add r3, r3, r0
/* 801702B4 0016D1F4  4E 80 00 20 */	blr 
.endfn "getAt__24MonoObjectMgr<8CollPart>Fi"

.fn "getTo__24MonoObjectMgr<8CollPart>Fv", weak
/* 801702B8 0016D1F8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801702BC 0016D1FC  4E 80 00 20 */	blr 
.endfn "getTo__24MonoObjectMgr<8CollPart>Fv"

.fn "doAnimation__24MonoObjectMgr<8CollPart>Fv", weak
/* 801702C0 0016D200  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801702C4 0016D204  7C 08 02 A6 */	mflr r0
/* 801702C8 0016D208  90 01 00 24 */	stw r0, 0x24(r1)
/* 801702CC 0016D20C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801702D0 0016D210  3B E0 00 00 */	li r31, 0
/* 801702D4 0016D214  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801702D8 0016D218  3B C0 00 00 */	li r30, 0
/* 801702DC 0016D21C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801702E0 0016D220  7C 7D 1B 78 */	mr r29, r3
/* 801702E4 0016D224  48 00 00 34 */	b .L_80170318
.L_801702E8:
/* 801702E8 0016D228  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801702EC 0016D22C  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801702F0 0016D230  28 00 00 00 */	cmplwi r0, 0
/* 801702F4 0016D234  40 82 00 1C */	bne .L_80170310
/* 801702F8 0016D238  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801702FC 0016D23C  7C 60 FA 14 */	add r3, r0, r31
/* 80170300 0016D240  81 83 00 00 */	lwz r12, 0(r3)
/* 80170304 0016D244  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80170308 0016D248  7D 89 03 A6 */	mtctr r12
/* 8017030C 0016D24C  4E 80 04 21 */	bctrl 
.L_80170310:
/* 80170310 0016D250  3B FF 00 64 */	addi r31, r31, 0x64
/* 80170314 0016D254  3B DE 00 01 */	addi r30, r30, 1
.L_80170318:
/* 80170318 0016D258  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 8017031C 0016D25C  7C 1E 00 00 */	cmpw r30, r0
/* 80170320 0016D260  41 80 FF C8 */	blt .L_801702E8
/* 80170324 0016D264  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80170328 0016D268  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017032C 0016D26C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80170330 0016D270  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80170334 0016D274  7C 08 03 A6 */	mtlr r0
/* 80170338 0016D278  38 21 00 20 */	addi r1, r1, 0x20
/* 8017033C 0016D27C  4E 80 00 20 */	blr 
.endfn "doAnimation__24MonoObjectMgr<8CollPart>Fv"

.fn "doEntry__24MonoObjectMgr<8CollPart>Fv", weak
/* 80170340 0016D280  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170344 0016D284  7C 08 02 A6 */	mflr r0
/* 80170348 0016D288  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017034C 0016D28C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80170350 0016D290  3B E0 00 00 */	li r31, 0
/* 80170354 0016D294  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80170358 0016D298  3B C0 00 00 */	li r30, 0
/* 8017035C 0016D29C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80170360 0016D2A0  7C 7D 1B 78 */	mr r29, r3
/* 80170364 0016D2A4  48 00 00 34 */	b .L_80170398
.L_80170368:
/* 80170368 0016D2A8  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8017036C 0016D2AC  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80170370 0016D2B0  28 00 00 00 */	cmplwi r0, 0
/* 80170374 0016D2B4  40 82 00 1C */	bne .L_80170390
/* 80170378 0016D2B8  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 8017037C 0016D2BC  7C 60 FA 14 */	add r3, r0, r31
/* 80170380 0016D2C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80170384 0016D2C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170388 0016D2C8  7D 89 03 A6 */	mtctr r12
/* 8017038C 0016D2CC  4E 80 04 21 */	bctrl 
.L_80170390:
/* 80170390 0016D2D0  3B FF 00 64 */	addi r31, r31, 0x64
/* 80170394 0016D2D4  3B DE 00 01 */	addi r30, r30, 1
.L_80170398:
/* 80170398 0016D2D8  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 8017039C 0016D2DC  7C 1E 00 00 */	cmpw r30, r0
/* 801703A0 0016D2E0  41 80 FF C8 */	blt .L_80170368
/* 801703A4 0016D2E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801703A8 0016D2E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801703AC 0016D2EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801703B0 0016D2F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801703B4 0016D2F4  7C 08 03 A6 */	mtlr r0
/* 801703B8 0016D2F8  38 21 00 20 */	addi r1, r1, 0x20
/* 801703BC 0016D2FC  4E 80 00 20 */	blr 
.endfn "doEntry__24MonoObjectMgr<8CollPart>Fv"

.fn "doSetView__24MonoObjectMgr<8CollPart>Fi", weak
/* 801703C0 0016D300  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801703C4 0016D304  7C 08 02 A6 */	mflr r0
/* 801703C8 0016D308  90 01 00 24 */	stw r0, 0x24(r1)
/* 801703CC 0016D30C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801703D0 0016D310  3B E0 00 00 */	li r31, 0
/* 801703D4 0016D314  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801703D8 0016D318  7C 9E 23 78 */	mr r30, r4
/* 801703DC 0016D31C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801703E0 0016D320  3B A0 00 00 */	li r29, 0
/* 801703E4 0016D324  93 81 00 10 */	stw r28, 0x10(r1)
/* 801703E8 0016D328  7C 7C 1B 78 */	mr r28, r3
/* 801703EC 0016D32C  48 00 00 38 */	b .L_80170424
.L_801703F0:
/* 801703F0 0016D330  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801703F4 0016D334  7C 03 E8 AE */	lbzx r0, r3, r29
/* 801703F8 0016D338  28 00 00 00 */	cmplwi r0, 0
/* 801703FC 0016D33C  40 82 00 20 */	bne .L_8017041C
/* 80170400 0016D340  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 80170404 0016D344  7F C4 F3 78 */	mr r4, r30
/* 80170408 0016D348  7C 60 FA 14 */	add r3, r0, r31
/* 8017040C 0016D34C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170410 0016D350  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80170414 0016D354  7D 89 03 A6 */	mtctr r12
/* 80170418 0016D358  4E 80 04 21 */	bctrl 
.L_8017041C:
/* 8017041C 0016D35C  3B FF 00 64 */	addi r31, r31, 0x64
/* 80170420 0016D360  3B BD 00 01 */	addi r29, r29, 1
.L_80170424:
/* 80170424 0016D364  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 80170428 0016D368  7C 1D 00 00 */	cmpw r29, r0
/* 8017042C 0016D36C  41 80 FF C4 */	blt .L_801703F0
/* 80170430 0016D370  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80170434 0016D374  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80170438 0016D378  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017043C 0016D37C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80170440 0016D380  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80170444 0016D384  7C 08 03 A6 */	mtlr r0
/* 80170448 0016D388  38 21 00 20 */	addi r1, r1, 0x20
/* 8017044C 0016D38C  4E 80 00 20 */	blr 
.endfn "doSetView__24MonoObjectMgr<8CollPart>Fi"

.fn "doViewCalc__24MonoObjectMgr<8CollPart>Fv", weak
/* 80170450 0016D390  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170454 0016D394  7C 08 02 A6 */	mflr r0
/* 80170458 0016D398  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017045C 0016D39C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80170460 0016D3A0  3B E0 00 00 */	li r31, 0
/* 80170464 0016D3A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80170468 0016D3A8  3B C0 00 00 */	li r30, 0
/* 8017046C 0016D3AC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80170470 0016D3B0  7C 7D 1B 78 */	mr r29, r3
/* 80170474 0016D3B4  48 00 00 34 */	b .L_801704A8
.L_80170478:
/* 80170478 0016D3B8  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8017047C 0016D3BC  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80170480 0016D3C0  28 00 00 00 */	cmplwi r0, 0
/* 80170484 0016D3C4  40 82 00 1C */	bne .L_801704A0
/* 80170488 0016D3C8  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 8017048C 0016D3CC  7C 60 FA 14 */	add r3, r0, r31
/* 80170490 0016D3D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80170494 0016D3D4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80170498 0016D3D8  7D 89 03 A6 */	mtctr r12
/* 8017049C 0016D3DC  4E 80 04 21 */	bctrl 
.L_801704A0:
/* 801704A0 0016D3E0  3B FF 00 64 */	addi r31, r31, 0x64
/* 801704A4 0016D3E4  3B DE 00 01 */	addi r30, r30, 1
.L_801704A8:
/* 801704A8 0016D3E8  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801704AC 0016D3EC  7C 1E 00 00 */	cmpw r30, r0
/* 801704B0 0016D3F0  41 80 FF C8 */	blt .L_80170478
/* 801704B4 0016D3F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801704B8 0016D3F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801704BC 0016D3FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801704C0 0016D400  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801704C4 0016D404  7C 08 03 A6 */	mtlr r0
/* 801704C8 0016D408  38 21 00 20 */	addi r1, r1, 0x20
/* 801704CC 0016D40C  4E 80 00 20 */	blr 
.endfn "doViewCalc__24MonoObjectMgr<8CollPart>Fv"

.fn "doSimulation__24MonoObjectMgr<8CollPart>Ff", weak
/* 801704D0 0016D410  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801704D4 0016D414  7C 08 02 A6 */	mflr r0
/* 801704D8 0016D418  90 01 00 24 */	stw r0, 0x24(r1)
/* 801704DC 0016D41C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801704E0 0016D420  FF E0 08 90 */	fmr f31, f1
/* 801704E4 0016D424  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801704E8 0016D428  3B E0 00 00 */	li r31, 0
/* 801704EC 0016D42C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801704F0 0016D430  3B C0 00 00 */	li r30, 0
/* 801704F4 0016D434  93 A1 00 0C */	stw r29, 0xc(r1)
/* 801704F8 0016D438  7C 7D 1B 78 */	mr r29, r3
/* 801704FC 0016D43C  48 00 00 38 */	b .L_80170534
.L_80170500:
/* 80170500 0016D440  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80170504 0016D444  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80170508 0016D448  28 00 00 00 */	cmplwi r0, 0
/* 8017050C 0016D44C  40 82 00 20 */	bne .L_8017052C
/* 80170510 0016D450  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 80170514 0016D454  FC 20 F8 90 */	fmr f1, f31
/* 80170518 0016D458  7C 60 FA 14 */	add r3, r0, r31
/* 8017051C 0016D45C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170520 0016D460  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80170524 0016D464  7D 89 03 A6 */	mtctr r12
/* 80170528 0016D468  4E 80 04 21 */	bctrl 
.L_8017052C:
/* 8017052C 0016D46C  3B FF 00 64 */	addi r31, r31, 0x64
/* 80170530 0016D470  3B DE 00 01 */	addi r30, r30, 1
.L_80170534:
/* 80170534 0016D474  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 80170538 0016D478  7C 1E 00 00 */	cmpw r30, r0
/* 8017053C 0016D47C  41 80 FF C4 */	blt .L_80170500
/* 80170540 0016D480  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80170544 0016D484  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80170548 0016D488  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8017054C 0016D48C  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80170550 0016D490  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 80170554 0016D494  7C 08 03 A6 */	mtlr r0
/* 80170558 0016D498  38 21 00 20 */	addi r1, r1, 0x20
/* 8017055C 0016D49C  4E 80 00 20 */	blr 
.endfn "doSimulation__24MonoObjectMgr<8CollPart>Ff"

.fn "doDirectDraw__24MonoObjectMgr<8CollPart>FR8Graphics", weak
/* 80170560 0016D4A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170564 0016D4A4  7C 08 02 A6 */	mflr r0
/* 80170568 0016D4A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017056C 0016D4AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80170570 0016D4B0  3B E0 00 00 */	li r31, 0
/* 80170574 0016D4B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80170578 0016D4B8  3B C0 00 00 */	li r30, 0
/* 8017057C 0016D4BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80170580 0016D4C0  7C 9D 23 78 */	mr r29, r4
/* 80170584 0016D4C4  93 81 00 10 */	stw r28, 0x10(r1)
/* 80170588 0016D4C8  7C 7C 1B 78 */	mr r28, r3
/* 8017058C 0016D4CC  48 00 00 38 */	b .L_801705C4
.L_80170590:
/* 80170590 0016D4D0  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 80170594 0016D4D4  7C 03 F0 AE */	lbzx r0, r3, r30
/* 80170598 0016D4D8  28 00 00 00 */	cmplwi r0, 0
/* 8017059C 0016D4DC  40 82 00 20 */	bne .L_801705BC
/* 801705A0 0016D4E0  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801705A4 0016D4E4  7F A4 EB 78 */	mr r4, r29
/* 801705A8 0016D4E8  7C 60 FA 14 */	add r3, r0, r31
/* 801705AC 0016D4EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801705B0 0016D4F0  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801705B4 0016D4F4  7D 89 03 A6 */	mtctr r12
/* 801705B8 0016D4F8  4E 80 04 21 */	bctrl 
.L_801705BC:
/* 801705BC 0016D4FC  3B FF 00 64 */	addi r31, r31, 0x64
/* 801705C0 0016D500  3B DE 00 01 */	addi r30, r30, 1
.L_801705C4:
/* 801705C4 0016D504  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801705C8 0016D508  7C 1E 00 00 */	cmpw r30, r0
/* 801705CC 0016D50C  41 80 FF C4 */	blt .L_80170590
/* 801705D0 0016D510  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801705D4 0016D514  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801705D8 0016D518  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801705DC 0016D51C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801705E0 0016D520  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801705E4 0016D524  7C 08 03 A6 */	mtlr r0
/* 801705E8 0016D528  38 21 00 20 */	addi r1, r1, 0x20
/* 801705EC 0016D52C  4E 80 00 20 */	blr 
.endfn "doDirectDraw__24MonoObjectMgr<8CollPart>FR8Graphics"

.fn "resetMgr__24MonoObjectMgr<8CollPart>Fv", weak
/* 801705F0 0016D530  38 00 00 00 */	li r0, 0
/* 801705F4 0016D534  90 03 00 28 */	stw r0, 0x28(r3)
/* 801705F8 0016D538  90 03 00 24 */	stw r0, 0x24(r3)
/* 801705FC 0016D53C  90 03 00 20 */	stw r0, 0x20(r3)
/* 80170600 0016D540  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80170604 0016D544  4E 80 00 20 */	blr 
.endfn "resetMgr__24MonoObjectMgr<8CollPart>Fv"

.fn "clearMgr__24MonoObjectMgr<8CollPart>Fv", weak
/* 80170608 0016D548  38 00 00 00 */	li r0, 0
/* 8017060C 0016D54C  38 C0 00 00 */	li r6, 0
/* 80170610 0016D550  90 03 00 20 */	stw r0, 0x20(r3)
/* 80170614 0016D554  38 A0 00 01 */	li r5, 1
/* 80170618 0016D558  48 00 00 10 */	b .L_80170628
.L_8017061C:
/* 8017061C 0016D55C  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80170620 0016D560  7C A4 31 AE */	stbx r5, r4, r6
/* 80170624 0016D564  38 C6 00 01 */	addi r6, r6, 1
.L_80170628:
/* 80170628 0016D568  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8017062C 0016D56C  7C 06 00 00 */	cmpw r6, r0
/* 80170630 0016D570  41 80 FF EC */	blt .L_8017061C
/* 80170634 0016D574  4E 80 00 20 */	blr 
.endfn "clearMgr__24MonoObjectMgr<8CollPart>Fv"

.fn "onAlloc__24MonoObjectMgr<8CollPart>Fv", weak
/* 80170638 0016D578  4E 80 00 20 */	blr 
.endfn "onAlloc__24MonoObjectMgr<8CollPart>Fv"

.fn "get__24MonoObjectMgr<8CollPart>FPv", weak
/* 8017063C 0016D57C  1C 04 00 64 */	mulli r0, r4, 0x64
/* 80170640 0016D580  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80170644 0016D584  7C 63 02 14 */	add r3, r3, r0
/* 80170648 0016D588  4E 80 00 20 */	blr 
.endfn "get__24MonoObjectMgr<8CollPart>FPv"

.fn "doAnimation__29ObjectMgr<16GenericObjectMgr>Fv", weak
/* 8017064C 0016D58C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170650 0016D590  7C 08 02 A6 */	mflr r0
/* 80170654 0016D594  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 80170658 0016D598  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017065C 0016D59C  38 00 00 00 */	li r0, 0
/* 80170660 0016D5A0  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 80170664 0016D5A4  28 00 00 00 */	cmplwi r0, 0
/* 80170668 0016D5A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017066C 0016D5AC  90 81 00 08 */	stw r4, 8(r1)
/* 80170670 0016D5B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80170674 0016D5B4  90 61 00 10 */	stw r3, 0x10(r1)
/* 80170678 0016D5B8  40 82 00 1C */	bne .L_80170694
/* 8017067C 0016D5BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80170680 0016D5C0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80170684 0016D5C4  7D 89 03 A6 */	mtctr r12
/* 80170688 0016D5C8  4E 80 04 21 */	bctrl 
/* 8017068C 0016D5CC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170690 0016D5D0  48 00 01 70 */	b .L_80170800
.L_80170694:
/* 80170694 0016D5D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80170698 0016D5D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8017069C 0016D5DC  7D 89 03 A6 */	mtctr r12
/* 801706A0 0016D5E0  4E 80 04 21 */	bctrl 
/* 801706A4 0016D5E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801706A8 0016D5E8  48 00 00 58 */	b .L_80170700
.L_801706AC:
/* 801706AC 0016D5EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801706B0 0016D5F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801706B4 0016D5F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801706B8 0016D5F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801706BC 0016D5FC  7D 89 03 A6 */	mtctr r12
/* 801706C0 0016D600  4E 80 04 21 */	bctrl 
/* 801706C4 0016D604  7C 64 1B 78 */	mr r4, r3
/* 801706C8 0016D608  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801706CC 0016D60C  81 83 00 00 */	lwz r12, 0(r3)
/* 801706D0 0016D610  81 8C 00 08 */	lwz r12, 8(r12)
/* 801706D4 0016D614  7D 89 03 A6 */	mtctr r12
/* 801706D8 0016D618  4E 80 04 21 */	bctrl 
/* 801706DC 0016D61C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801706E0 0016D620  40 82 01 20 */	bne .L_80170800
/* 801706E4 0016D624  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801706E8 0016D628  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801706EC 0016D62C  81 83 00 00 */	lwz r12, 0(r3)
/* 801706F0 0016D630  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801706F4 0016D634  7D 89 03 A6 */	mtctr r12
/* 801706F8 0016D638  4E 80 04 21 */	bctrl 
/* 801706FC 0016D63C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80170700:
/* 80170700 0016D640  81 81 00 08 */	lwz r12, 8(r1)
/* 80170704 0016D644  38 61 00 08 */	addi r3, r1, 8
/* 80170708 0016D648  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8017070C 0016D64C  7D 89 03 A6 */	mtctr r12
/* 80170710 0016D650  4E 80 04 21 */	bctrl 
/* 80170714 0016D654  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170718 0016D658  41 82 FF 94 */	beq .L_801706AC
/* 8017071C 0016D65C  48 00 00 E4 */	b .L_80170800
.L_80170720:
/* 80170720 0016D660  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170724 0016D664  81 83 00 00 */	lwz r12, 0(r3)
/* 80170728 0016D668  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8017072C 0016D66C  7D 89 03 A6 */	mtctr r12
/* 80170730 0016D670  4E 80 04 21 */	bctrl 
/* 80170734 0016D674  81 83 00 00 */	lwz r12, 0(r3)
/* 80170738 0016D678  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017073C 0016D67C  7D 89 03 A6 */	mtctr r12
/* 80170740 0016D680  4E 80 04 21 */	bctrl 
/* 80170744 0016D684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170748 0016D688  28 00 00 00 */	cmplwi r0, 0
/* 8017074C 0016D68C  40 82 00 24 */	bne .L_80170770
/* 80170750 0016D690  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170754 0016D694  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170758 0016D698  81 83 00 00 */	lwz r12, 0(r3)
/* 8017075C 0016D69C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170760 0016D6A0  7D 89 03 A6 */	mtctr r12
/* 80170764 0016D6A4  4E 80 04 21 */	bctrl 
/* 80170768 0016D6A8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017076C 0016D6AC  48 00 00 94 */	b .L_80170800
.L_80170770:
/* 80170770 0016D6B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170774 0016D6B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170778 0016D6B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017077C 0016D6BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170780 0016D6C0  7D 89 03 A6 */	mtctr r12
/* 80170784 0016D6C4  4E 80 04 21 */	bctrl 
/* 80170788 0016D6C8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017078C 0016D6CC  48 00 00 58 */	b .L_801707E4
.L_80170790:
/* 80170790 0016D6D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170794 0016D6D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170798 0016D6D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017079C 0016D6DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801707A0 0016D6E0  7D 89 03 A6 */	mtctr r12
/* 801707A4 0016D6E4  4E 80 04 21 */	bctrl 
/* 801707A8 0016D6E8  7C 64 1B 78 */	mr r4, r3
/* 801707AC 0016D6EC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801707B0 0016D6F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801707B4 0016D6F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801707B8 0016D6F8  7D 89 03 A6 */	mtctr r12
/* 801707BC 0016D6FC  4E 80 04 21 */	bctrl 
/* 801707C0 0016D700  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801707C4 0016D704  40 82 00 3C */	bne .L_80170800
/* 801707C8 0016D708  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801707CC 0016D70C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801707D0 0016D710  81 83 00 00 */	lwz r12, 0(r3)
/* 801707D4 0016D714  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801707D8 0016D718  7D 89 03 A6 */	mtctr r12
/* 801707DC 0016D71C  4E 80 04 21 */	bctrl 
/* 801707E0 0016D720  90 61 00 0C */	stw r3, 0xc(r1)
.L_801707E4:
/* 801707E4 0016D724  81 81 00 08 */	lwz r12, 8(r1)
/* 801707E8 0016D728  38 61 00 08 */	addi r3, r1, 8
/* 801707EC 0016D72C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801707F0 0016D730  7D 89 03 A6 */	mtctr r12
/* 801707F4 0016D734  4E 80 04 21 */	bctrl 
/* 801707F8 0016D738  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801707FC 0016D73C  41 82 FF 94 */	beq .L_80170790
.L_80170800:
/* 80170800 0016D740  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170804 0016D744  81 83 00 00 */	lwz r12, 0(r3)
/* 80170808 0016D748  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017080C 0016D74C  7D 89 03 A6 */	mtctr r12
/* 80170810 0016D750  4E 80 04 21 */	bctrl 
/* 80170814 0016D754  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170818 0016D758  7C 04 18 40 */	cmplw r4, r3
/* 8017081C 0016D75C  40 82 FF 04 */	bne .L_80170720
/* 80170820 0016D760  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80170824 0016D764  7C 08 03 A6 */	mtlr r0
/* 80170828 0016D768  38 21 00 20 */	addi r1, r1, 0x20
/* 8017082C 0016D76C  4E 80 00 20 */	blr 
.endfn "doAnimation__29ObjectMgr<16GenericObjectMgr>Fv"

.fn "doEntry__29ObjectMgr<16GenericObjectMgr>Fv", weak
/* 80170830 0016D770  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170834 0016D774  7C 08 02 A6 */	mflr r0
/* 80170838 0016D778  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 8017083C 0016D77C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80170840 0016D780  38 00 00 00 */	li r0, 0
/* 80170844 0016D784  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 80170848 0016D788  28 00 00 00 */	cmplwi r0, 0
/* 8017084C 0016D78C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170850 0016D790  90 81 00 08 */	stw r4, 8(r1)
/* 80170854 0016D794  90 01 00 0C */	stw r0, 0xc(r1)
/* 80170858 0016D798  90 61 00 10 */	stw r3, 0x10(r1)
/* 8017085C 0016D79C  40 82 00 1C */	bne .L_80170878
/* 80170860 0016D7A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80170864 0016D7A4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80170868 0016D7A8  7D 89 03 A6 */	mtctr r12
/* 8017086C 0016D7AC  4E 80 04 21 */	bctrl 
/* 80170870 0016D7B0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170874 0016D7B4  48 00 01 70 */	b .L_801709E4
.L_80170878:
/* 80170878 0016D7B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017087C 0016D7BC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80170880 0016D7C0  7D 89 03 A6 */	mtctr r12
/* 80170884 0016D7C4  4E 80 04 21 */	bctrl 
/* 80170888 0016D7C8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017088C 0016D7CC  48 00 00 58 */	b .L_801708E4
.L_80170890:
/* 80170890 0016D7D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170894 0016D7D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170898 0016D7D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017089C 0016D7DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801708A0 0016D7E0  7D 89 03 A6 */	mtctr r12
/* 801708A4 0016D7E4  4E 80 04 21 */	bctrl 
/* 801708A8 0016D7E8  7C 64 1B 78 */	mr r4, r3
/* 801708AC 0016D7EC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801708B0 0016D7F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801708B4 0016D7F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801708B8 0016D7F8  7D 89 03 A6 */	mtctr r12
/* 801708BC 0016D7FC  4E 80 04 21 */	bctrl 
/* 801708C0 0016D800  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801708C4 0016D804  40 82 01 20 */	bne .L_801709E4
/* 801708C8 0016D808  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801708CC 0016D80C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801708D0 0016D810  81 83 00 00 */	lwz r12, 0(r3)
/* 801708D4 0016D814  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801708D8 0016D818  7D 89 03 A6 */	mtctr r12
/* 801708DC 0016D81C  4E 80 04 21 */	bctrl 
/* 801708E0 0016D820  90 61 00 0C */	stw r3, 0xc(r1)
.L_801708E4:
/* 801708E4 0016D824  81 81 00 08 */	lwz r12, 8(r1)
/* 801708E8 0016D828  38 61 00 08 */	addi r3, r1, 8
/* 801708EC 0016D82C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801708F0 0016D830  7D 89 03 A6 */	mtctr r12
/* 801708F4 0016D834  4E 80 04 21 */	bctrl 
/* 801708F8 0016D838  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801708FC 0016D83C  41 82 FF 94 */	beq .L_80170890
/* 80170900 0016D840  48 00 00 E4 */	b .L_801709E4
.L_80170904:
/* 80170904 0016D844  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170908 0016D848  81 83 00 00 */	lwz r12, 0(r3)
/* 8017090C 0016D84C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170910 0016D850  7D 89 03 A6 */	mtctr r12
/* 80170914 0016D854  4E 80 04 21 */	bctrl 
/* 80170918 0016D858  81 83 00 00 */	lwz r12, 0(r3)
/* 8017091C 0016D85C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80170920 0016D860  7D 89 03 A6 */	mtctr r12
/* 80170924 0016D864  4E 80 04 21 */	bctrl 
/* 80170928 0016D868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017092C 0016D86C  28 00 00 00 */	cmplwi r0, 0
/* 80170930 0016D870  40 82 00 24 */	bne .L_80170954
/* 80170934 0016D874  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170938 0016D878  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017093C 0016D87C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170940 0016D880  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170944 0016D884  7D 89 03 A6 */	mtctr r12
/* 80170948 0016D888  4E 80 04 21 */	bctrl 
/* 8017094C 0016D88C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170950 0016D890  48 00 00 94 */	b .L_801709E4
.L_80170954:
/* 80170954 0016D894  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170958 0016D898  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017095C 0016D89C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170960 0016D8A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170964 0016D8A4  7D 89 03 A6 */	mtctr r12
/* 80170968 0016D8A8  4E 80 04 21 */	bctrl 
/* 8017096C 0016D8AC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170970 0016D8B0  48 00 00 58 */	b .L_801709C8
.L_80170974:
/* 80170974 0016D8B4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170978 0016D8B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017097C 0016D8BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80170980 0016D8C0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170984 0016D8C4  7D 89 03 A6 */	mtctr r12
/* 80170988 0016D8C8  4E 80 04 21 */	bctrl 
/* 8017098C 0016D8CC  7C 64 1B 78 */	mr r4, r3
/* 80170990 0016D8D0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80170994 0016D8D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80170998 0016D8D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017099C 0016D8DC  7D 89 03 A6 */	mtctr r12
/* 801709A0 0016D8E0  4E 80 04 21 */	bctrl 
/* 801709A4 0016D8E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801709A8 0016D8E8  40 82 00 3C */	bne .L_801709E4
/* 801709AC 0016D8EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801709B0 0016D8F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801709B4 0016D8F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801709B8 0016D8F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801709BC 0016D8FC  7D 89 03 A6 */	mtctr r12
/* 801709C0 0016D900  4E 80 04 21 */	bctrl 
/* 801709C4 0016D904  90 61 00 0C */	stw r3, 0xc(r1)
.L_801709C8:
/* 801709C8 0016D908  81 81 00 08 */	lwz r12, 8(r1)
/* 801709CC 0016D90C  38 61 00 08 */	addi r3, r1, 8
/* 801709D0 0016D910  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801709D4 0016D914  7D 89 03 A6 */	mtctr r12
/* 801709D8 0016D918  4E 80 04 21 */	bctrl 
/* 801709DC 0016D91C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801709E0 0016D920  41 82 FF 94 */	beq .L_80170974
.L_801709E4:
/* 801709E4 0016D924  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801709E8 0016D928  81 83 00 00 */	lwz r12, 0(r3)
/* 801709EC 0016D92C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801709F0 0016D930  7D 89 03 A6 */	mtctr r12
/* 801709F4 0016D934  4E 80 04 21 */	bctrl 
/* 801709F8 0016D938  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801709FC 0016D93C  7C 04 18 40 */	cmplw r4, r3
/* 80170A00 0016D940  40 82 FF 04 */	bne .L_80170904
/* 80170A04 0016D944  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80170A08 0016D948  7C 08 03 A6 */	mtlr r0
/* 80170A0C 0016D94C  38 21 00 20 */	addi r1, r1, 0x20
/* 80170A10 0016D950  4E 80 00 20 */	blr 
.endfn "doEntry__29ObjectMgr<16GenericObjectMgr>Fv"

.fn "doSetView__29ObjectMgr<16GenericObjectMgr>Fi", weak
/* 80170A14 0016D954  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170A18 0016D958  7C 08 02 A6 */	mflr r0
/* 80170A1C 0016D95C  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 80170A20 0016D960  90 01 00 24 */	stw r0, 0x24(r1)
/* 80170A24 0016D964  38 00 00 00 */	li r0, 0
/* 80170A28 0016D968  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 80170A2C 0016D96C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80170A30 0016D970  28 00 00 00 */	cmplwi r0, 0
/* 80170A34 0016D974  7C 9F 23 78 */	mr r31, r4
/* 80170A38 0016D978  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170A3C 0016D97C  90 A1 00 08 */	stw r5, 8(r1)
/* 80170A40 0016D980  90 01 00 0C */	stw r0, 0xc(r1)
/* 80170A44 0016D984  90 61 00 10 */	stw r3, 0x10(r1)
/* 80170A48 0016D988  40 82 00 1C */	bne .L_80170A64
/* 80170A4C 0016D98C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170A50 0016D990  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80170A54 0016D994  7D 89 03 A6 */	mtctr r12
/* 80170A58 0016D998  4E 80 04 21 */	bctrl 
/* 80170A5C 0016D99C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170A60 0016D9A0  48 00 01 74 */	b .L_80170BD4
.L_80170A64:
/* 80170A64 0016D9A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80170A68 0016D9A8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80170A6C 0016D9AC  7D 89 03 A6 */	mtctr r12
/* 80170A70 0016D9B0  4E 80 04 21 */	bctrl 
/* 80170A74 0016D9B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170A78 0016D9B8  48 00 00 58 */	b .L_80170AD0
.L_80170A7C:
/* 80170A7C 0016D9BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170A80 0016D9C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170A84 0016D9C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80170A88 0016D9C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170A8C 0016D9CC  7D 89 03 A6 */	mtctr r12
/* 80170A90 0016D9D0  4E 80 04 21 */	bctrl 
/* 80170A94 0016D9D4  7C 64 1B 78 */	mr r4, r3
/* 80170A98 0016D9D8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80170A9C 0016D9DC  81 83 00 00 */	lwz r12, 0(r3)
/* 80170AA0 0016D9E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80170AA4 0016D9E4  7D 89 03 A6 */	mtctr r12
/* 80170AA8 0016D9E8  4E 80 04 21 */	bctrl 
/* 80170AAC 0016D9EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170AB0 0016D9F0  40 82 01 24 */	bne .L_80170BD4
/* 80170AB4 0016D9F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170AB8 0016D9F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170ABC 0016D9FC  81 83 00 00 */	lwz r12, 0(r3)
/* 80170AC0 0016DA00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170AC4 0016DA04  7D 89 03 A6 */	mtctr r12
/* 80170AC8 0016DA08  4E 80 04 21 */	bctrl 
/* 80170ACC 0016DA0C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80170AD0:
/* 80170AD0 0016DA10  81 81 00 08 */	lwz r12, 8(r1)
/* 80170AD4 0016DA14  38 61 00 08 */	addi r3, r1, 8
/* 80170AD8 0016DA18  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80170ADC 0016DA1C  7D 89 03 A6 */	mtctr r12
/* 80170AE0 0016DA20  4E 80 04 21 */	bctrl 
/* 80170AE4 0016DA24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170AE8 0016DA28  41 82 FF 94 */	beq .L_80170A7C
/* 80170AEC 0016DA2C  48 00 00 E8 */	b .L_80170BD4
.L_80170AF0:
/* 80170AF0 0016DA30  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170AF4 0016DA34  81 83 00 00 */	lwz r12, 0(r3)
/* 80170AF8 0016DA38  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170AFC 0016DA3C  7D 89 03 A6 */	mtctr r12
/* 80170B00 0016DA40  4E 80 04 21 */	bctrl 
/* 80170B04 0016DA44  81 83 00 00 */	lwz r12, 0(r3)
/* 80170B08 0016DA48  7F E4 FB 78 */	mr r4, r31
/* 80170B0C 0016DA4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80170B10 0016DA50  7D 89 03 A6 */	mtctr r12
/* 80170B14 0016DA54  4E 80 04 21 */	bctrl 
/* 80170B18 0016DA58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170B1C 0016DA5C  28 00 00 00 */	cmplwi r0, 0
/* 80170B20 0016DA60  40 82 00 24 */	bne .L_80170B44
/* 80170B24 0016DA64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170B28 0016DA68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170B2C 0016DA6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170B30 0016DA70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170B34 0016DA74  7D 89 03 A6 */	mtctr r12
/* 80170B38 0016DA78  4E 80 04 21 */	bctrl 
/* 80170B3C 0016DA7C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170B40 0016DA80  48 00 00 94 */	b .L_80170BD4
.L_80170B44:
/* 80170B44 0016DA84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170B48 0016DA88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170B4C 0016DA8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170B50 0016DA90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170B54 0016DA94  7D 89 03 A6 */	mtctr r12
/* 80170B58 0016DA98  4E 80 04 21 */	bctrl 
/* 80170B5C 0016DA9C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170B60 0016DAA0  48 00 00 58 */	b .L_80170BB8
.L_80170B64:
/* 80170B64 0016DAA4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170B68 0016DAA8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170B6C 0016DAAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80170B70 0016DAB0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170B74 0016DAB4  7D 89 03 A6 */	mtctr r12
/* 80170B78 0016DAB8  4E 80 04 21 */	bctrl 
/* 80170B7C 0016DABC  7C 64 1B 78 */	mr r4, r3
/* 80170B80 0016DAC0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80170B84 0016DAC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80170B88 0016DAC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80170B8C 0016DACC  7D 89 03 A6 */	mtctr r12
/* 80170B90 0016DAD0  4E 80 04 21 */	bctrl 
/* 80170B94 0016DAD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170B98 0016DAD8  40 82 00 3C */	bne .L_80170BD4
/* 80170B9C 0016DADC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170BA0 0016DAE0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170BA4 0016DAE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80170BA8 0016DAE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170BAC 0016DAEC  7D 89 03 A6 */	mtctr r12
/* 80170BB0 0016DAF0  4E 80 04 21 */	bctrl 
/* 80170BB4 0016DAF4  90 61 00 0C */	stw r3, 0xc(r1)
.L_80170BB8:
/* 80170BB8 0016DAF8  81 81 00 08 */	lwz r12, 8(r1)
/* 80170BBC 0016DAFC  38 61 00 08 */	addi r3, r1, 8
/* 80170BC0 0016DB00  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80170BC4 0016DB04  7D 89 03 A6 */	mtctr r12
/* 80170BC8 0016DB08  4E 80 04 21 */	bctrl 
/* 80170BCC 0016DB0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170BD0 0016DB10  41 82 FF 94 */	beq .L_80170B64
.L_80170BD4:
/* 80170BD4 0016DB14  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170BD8 0016DB18  81 83 00 00 */	lwz r12, 0(r3)
/* 80170BDC 0016DB1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80170BE0 0016DB20  7D 89 03 A6 */	mtctr r12
/* 80170BE4 0016DB24  4E 80 04 21 */	bctrl 
/* 80170BE8 0016DB28  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170BEC 0016DB2C  7C 04 18 40 */	cmplw r4, r3
/* 80170BF0 0016DB30  40 82 FF 00 */	bne .L_80170AF0
/* 80170BF4 0016DB34  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80170BF8 0016DB38  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80170BFC 0016DB3C  7C 08 03 A6 */	mtlr r0
/* 80170C00 0016DB40  38 21 00 20 */	addi r1, r1, 0x20
/* 80170C04 0016DB44  4E 80 00 20 */	blr 
.endfn "doSetView__29ObjectMgr<16GenericObjectMgr>Fi"

.fn "doViewCalc__29ObjectMgr<16GenericObjectMgr>Fv", weak
/* 80170C08 0016DB48  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170C0C 0016DB4C  7C 08 02 A6 */	mflr r0
/* 80170C10 0016DB50  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 80170C14 0016DB54  90 01 00 24 */	stw r0, 0x24(r1)
/* 80170C18 0016DB58  38 00 00 00 */	li r0, 0
/* 80170C1C 0016DB5C  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 80170C20 0016DB60  28 00 00 00 */	cmplwi r0, 0
/* 80170C24 0016DB64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170C28 0016DB68  90 81 00 08 */	stw r4, 8(r1)
/* 80170C2C 0016DB6C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80170C30 0016DB70  90 61 00 10 */	stw r3, 0x10(r1)
/* 80170C34 0016DB74  40 82 00 1C */	bne .L_80170C50
/* 80170C38 0016DB78  81 83 00 00 */	lwz r12, 0(r3)
/* 80170C3C 0016DB7C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80170C40 0016DB80  7D 89 03 A6 */	mtctr r12
/* 80170C44 0016DB84  4E 80 04 21 */	bctrl 
/* 80170C48 0016DB88  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170C4C 0016DB8C  48 00 01 70 */	b .L_80170DBC
.L_80170C50:
/* 80170C50 0016DB90  81 83 00 00 */	lwz r12, 0(r3)
/* 80170C54 0016DB94  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80170C58 0016DB98  7D 89 03 A6 */	mtctr r12
/* 80170C5C 0016DB9C  4E 80 04 21 */	bctrl 
/* 80170C60 0016DBA0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170C64 0016DBA4  48 00 00 58 */	b .L_80170CBC
.L_80170C68:
/* 80170C68 0016DBA8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170C6C 0016DBAC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170C70 0016DBB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80170C74 0016DBB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170C78 0016DBB8  7D 89 03 A6 */	mtctr r12
/* 80170C7C 0016DBBC  4E 80 04 21 */	bctrl 
/* 80170C80 0016DBC0  7C 64 1B 78 */	mr r4, r3
/* 80170C84 0016DBC4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80170C88 0016DBC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80170C8C 0016DBCC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80170C90 0016DBD0  7D 89 03 A6 */	mtctr r12
/* 80170C94 0016DBD4  4E 80 04 21 */	bctrl 
/* 80170C98 0016DBD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170C9C 0016DBDC  40 82 01 20 */	bne .L_80170DBC
/* 80170CA0 0016DBE0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170CA4 0016DBE4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170CA8 0016DBE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80170CAC 0016DBEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170CB0 0016DBF0  7D 89 03 A6 */	mtctr r12
/* 80170CB4 0016DBF4  4E 80 04 21 */	bctrl 
/* 80170CB8 0016DBF8  90 61 00 0C */	stw r3, 0xc(r1)
.L_80170CBC:
/* 80170CBC 0016DBFC  81 81 00 08 */	lwz r12, 8(r1)
/* 80170CC0 0016DC00  38 61 00 08 */	addi r3, r1, 8
/* 80170CC4 0016DC04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80170CC8 0016DC08  7D 89 03 A6 */	mtctr r12
/* 80170CCC 0016DC0C  4E 80 04 21 */	bctrl 
/* 80170CD0 0016DC10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170CD4 0016DC14  41 82 FF 94 */	beq .L_80170C68
/* 80170CD8 0016DC18  48 00 00 E4 */	b .L_80170DBC
.L_80170CDC:
/* 80170CDC 0016DC1C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170CE0 0016DC20  81 83 00 00 */	lwz r12, 0(r3)
/* 80170CE4 0016DC24  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170CE8 0016DC28  7D 89 03 A6 */	mtctr r12
/* 80170CEC 0016DC2C  4E 80 04 21 */	bctrl 
/* 80170CF0 0016DC30  81 83 00 00 */	lwz r12, 0(r3)
/* 80170CF4 0016DC34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170CF8 0016DC38  7D 89 03 A6 */	mtctr r12
/* 80170CFC 0016DC3C  4E 80 04 21 */	bctrl 
/* 80170D00 0016DC40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170D04 0016DC44  28 00 00 00 */	cmplwi r0, 0
/* 80170D08 0016DC48  40 82 00 24 */	bne .L_80170D2C
/* 80170D0C 0016DC4C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170D10 0016DC50  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170D14 0016DC54  81 83 00 00 */	lwz r12, 0(r3)
/* 80170D18 0016DC58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170D1C 0016DC5C  7D 89 03 A6 */	mtctr r12
/* 80170D20 0016DC60  4E 80 04 21 */	bctrl 
/* 80170D24 0016DC64  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170D28 0016DC68  48 00 00 94 */	b .L_80170DBC
.L_80170D2C:
/* 80170D2C 0016DC6C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170D30 0016DC70  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170D34 0016DC74  81 83 00 00 */	lwz r12, 0(r3)
/* 80170D38 0016DC78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170D3C 0016DC7C  7D 89 03 A6 */	mtctr r12
/* 80170D40 0016DC80  4E 80 04 21 */	bctrl 
/* 80170D44 0016DC84  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170D48 0016DC88  48 00 00 58 */	b .L_80170DA0
.L_80170D4C:
/* 80170D4C 0016DC8C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170D50 0016DC90  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170D54 0016DC94  81 83 00 00 */	lwz r12, 0(r3)
/* 80170D58 0016DC98  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170D5C 0016DC9C  7D 89 03 A6 */	mtctr r12
/* 80170D60 0016DCA0  4E 80 04 21 */	bctrl 
/* 80170D64 0016DCA4  7C 64 1B 78 */	mr r4, r3
/* 80170D68 0016DCA8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80170D6C 0016DCAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80170D70 0016DCB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80170D74 0016DCB4  7D 89 03 A6 */	mtctr r12
/* 80170D78 0016DCB8  4E 80 04 21 */	bctrl 
/* 80170D7C 0016DCBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170D80 0016DCC0  40 82 00 3C */	bne .L_80170DBC
/* 80170D84 0016DCC4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170D88 0016DCC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170D8C 0016DCCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80170D90 0016DCD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170D94 0016DCD4  7D 89 03 A6 */	mtctr r12
/* 80170D98 0016DCD8  4E 80 04 21 */	bctrl 
/* 80170D9C 0016DCDC  90 61 00 0C */	stw r3, 0xc(r1)
.L_80170DA0:
/* 80170DA0 0016DCE0  81 81 00 08 */	lwz r12, 8(r1)
/* 80170DA4 0016DCE4  38 61 00 08 */	addi r3, r1, 8
/* 80170DA8 0016DCE8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80170DAC 0016DCEC  7D 89 03 A6 */	mtctr r12
/* 80170DB0 0016DCF0  4E 80 04 21 */	bctrl 
/* 80170DB4 0016DCF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170DB8 0016DCF8  41 82 FF 94 */	beq .L_80170D4C
.L_80170DBC:
/* 80170DBC 0016DCFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170DC0 0016DD00  81 83 00 00 */	lwz r12, 0(r3)
/* 80170DC4 0016DD04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80170DC8 0016DD08  7D 89 03 A6 */	mtctr r12
/* 80170DCC 0016DD0C  4E 80 04 21 */	bctrl 
/* 80170DD0 0016DD10  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170DD4 0016DD14  7C 04 18 40 */	cmplw r4, r3
/* 80170DD8 0016DD18  40 82 FF 04 */	bne .L_80170CDC
/* 80170DDC 0016DD1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80170DE0 0016DD20  7C 08 03 A6 */	mtlr r0
/* 80170DE4 0016DD24  38 21 00 20 */	addi r1, r1, 0x20
/* 80170DE8 0016DD28  4E 80 00 20 */	blr 
.endfn "doViewCalc__29ObjectMgr<16GenericObjectMgr>Fv"

.fn "doSimulation__29ObjectMgr<16GenericObjectMgr>Ff", weak
/* 80170DEC 0016DD2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170DF0 0016DD30  7C 08 02 A6 */	mflr r0
/* 80170DF4 0016DD34  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 80170DF8 0016DD38  90 01 00 24 */	stw r0, 0x24(r1)
/* 80170DFC 0016DD3C  38 00 00 00 */	li r0, 0
/* 80170E00 0016DD40  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 80170E04 0016DD44  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80170E08 0016DD48  FF E0 08 90 */	fmr f31, f1
/* 80170E0C 0016DD4C  28 00 00 00 */	cmplwi r0, 0
/* 80170E10 0016DD50  90 81 00 08 */	stw r4, 8(r1)
/* 80170E14 0016DD54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170E18 0016DD58  90 01 00 0C */	stw r0, 0xc(r1)
/* 80170E1C 0016DD5C  90 61 00 10 */	stw r3, 0x10(r1)
/* 80170E20 0016DD60  40 82 00 1C */	bne .L_80170E3C
/* 80170E24 0016DD64  81 83 00 00 */	lwz r12, 0(r3)
/* 80170E28 0016DD68  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80170E2C 0016DD6C  7D 89 03 A6 */	mtctr r12
/* 80170E30 0016DD70  4E 80 04 21 */	bctrl 
/* 80170E34 0016DD74  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170E38 0016DD78  48 00 01 74 */	b .L_80170FAC
.L_80170E3C:
/* 80170E3C 0016DD7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170E40 0016DD80  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80170E44 0016DD84  7D 89 03 A6 */	mtctr r12
/* 80170E48 0016DD88  4E 80 04 21 */	bctrl 
/* 80170E4C 0016DD8C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170E50 0016DD90  48 00 00 58 */	b .L_80170EA8
.L_80170E54:
/* 80170E54 0016DD94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170E58 0016DD98  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170E5C 0016DD9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170E60 0016DDA0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170E64 0016DDA4  7D 89 03 A6 */	mtctr r12
/* 80170E68 0016DDA8  4E 80 04 21 */	bctrl 
/* 80170E6C 0016DDAC  7C 64 1B 78 */	mr r4, r3
/* 80170E70 0016DDB0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80170E74 0016DDB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80170E78 0016DDB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80170E7C 0016DDBC  7D 89 03 A6 */	mtctr r12
/* 80170E80 0016DDC0  4E 80 04 21 */	bctrl 
/* 80170E84 0016DDC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170E88 0016DDC8  40 82 01 24 */	bne .L_80170FAC
/* 80170E8C 0016DDCC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170E90 0016DDD0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170E94 0016DDD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80170E98 0016DDD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170E9C 0016DDDC  7D 89 03 A6 */	mtctr r12
/* 80170EA0 0016DDE0  4E 80 04 21 */	bctrl 
/* 80170EA4 0016DDE4  90 61 00 0C */	stw r3, 0xc(r1)
.L_80170EA8:
/* 80170EA8 0016DDE8  81 81 00 08 */	lwz r12, 8(r1)
/* 80170EAC 0016DDEC  38 61 00 08 */	addi r3, r1, 8
/* 80170EB0 0016DDF0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80170EB4 0016DDF4  7D 89 03 A6 */	mtctr r12
/* 80170EB8 0016DDF8  4E 80 04 21 */	bctrl 
/* 80170EBC 0016DDFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170EC0 0016DE00  41 82 FF 94 */	beq .L_80170E54
/* 80170EC4 0016DE04  48 00 00 E8 */	b .L_80170FAC
.L_80170EC8:
/* 80170EC8 0016DE08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170ECC 0016DE0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170ED0 0016DE10  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170ED4 0016DE14  7D 89 03 A6 */	mtctr r12
/* 80170ED8 0016DE18  4E 80 04 21 */	bctrl 
/* 80170EDC 0016DE1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170EE0 0016DE20  FC 20 F8 90 */	fmr f1, f31
/* 80170EE4 0016DE24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80170EE8 0016DE28  7D 89 03 A6 */	mtctr r12
/* 80170EEC 0016DE2C  4E 80 04 21 */	bctrl 
/* 80170EF0 0016DE30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170EF4 0016DE34  28 00 00 00 */	cmplwi r0, 0
/* 80170EF8 0016DE38  40 82 00 24 */	bne .L_80170F1C
/* 80170EFC 0016DE3C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170F00 0016DE40  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170F04 0016DE44  81 83 00 00 */	lwz r12, 0(r3)
/* 80170F08 0016DE48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170F0C 0016DE4C  7D 89 03 A6 */	mtctr r12
/* 80170F10 0016DE50  4E 80 04 21 */	bctrl 
/* 80170F14 0016DE54  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170F18 0016DE58  48 00 00 94 */	b .L_80170FAC
.L_80170F1C:
/* 80170F1C 0016DE5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170F20 0016DE60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170F24 0016DE64  81 83 00 00 */	lwz r12, 0(r3)
/* 80170F28 0016DE68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170F2C 0016DE6C  7D 89 03 A6 */	mtctr r12
/* 80170F30 0016DE70  4E 80 04 21 */	bctrl 
/* 80170F34 0016DE74  90 61 00 0C */	stw r3, 0xc(r1)
/* 80170F38 0016DE78  48 00 00 58 */	b .L_80170F90
.L_80170F3C:
/* 80170F3C 0016DE7C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170F40 0016DE80  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170F44 0016DE84  81 83 00 00 */	lwz r12, 0(r3)
/* 80170F48 0016DE88  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80170F4C 0016DE8C  7D 89 03 A6 */	mtctr r12
/* 80170F50 0016DE90  4E 80 04 21 */	bctrl 
/* 80170F54 0016DE94  7C 64 1B 78 */	mr r4, r3
/* 80170F58 0016DE98  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80170F5C 0016DE9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80170F60 0016DEA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80170F64 0016DEA4  7D 89 03 A6 */	mtctr r12
/* 80170F68 0016DEA8  4E 80 04 21 */	bctrl 
/* 80170F6C 0016DEAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170F70 0016DEB0  40 82 00 3C */	bne .L_80170FAC
/* 80170F74 0016DEB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170F78 0016DEB8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170F7C 0016DEBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80170F80 0016DEC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80170F84 0016DEC4  7D 89 03 A6 */	mtctr r12
/* 80170F88 0016DEC8  4E 80 04 21 */	bctrl 
/* 80170F8C 0016DECC  90 61 00 0C */	stw r3, 0xc(r1)
.L_80170F90:
/* 80170F90 0016DED0  81 81 00 08 */	lwz r12, 8(r1)
/* 80170F94 0016DED4  38 61 00 08 */	addi r3, r1, 8
/* 80170F98 0016DED8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80170F9C 0016DEDC  7D 89 03 A6 */	mtctr r12
/* 80170FA0 0016DEE0  4E 80 04 21 */	bctrl 
/* 80170FA4 0016DEE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80170FA8 0016DEE8  41 82 FF 94 */	beq .L_80170F3C
.L_80170FAC:
/* 80170FAC 0016DEEC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80170FB0 0016DEF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80170FB4 0016DEF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80170FB8 0016DEF8  7D 89 03 A6 */	mtctr r12
/* 80170FBC 0016DEFC  4E 80 04 21 */	bctrl 
/* 80170FC0 0016DF00  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80170FC4 0016DF04  7C 04 18 40 */	cmplw r4, r3
/* 80170FC8 0016DF08  40 82 FF 00 */	bne .L_80170EC8
/* 80170FCC 0016DF0C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80170FD0 0016DF10  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80170FD4 0016DF14  7C 08 03 A6 */	mtlr r0
/* 80170FD8 0016DF18  38 21 00 20 */	addi r1, r1, 0x20
/* 80170FDC 0016DF1C  4E 80 00 20 */	blr 
.endfn "doSimulation__29ObjectMgr<16GenericObjectMgr>Ff"

.fn "doDirectDraw__29ObjectMgr<16GenericObjectMgr>FR8Graphics", weak
/* 80170FE0 0016DF20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170FE4 0016DF24  7C 08 02 A6 */	mflr r0
/* 80170FE8 0016DF28  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 80170FEC 0016DF2C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80170FF0 0016DF30  38 00 00 00 */	li r0, 0
/* 80170FF4 0016DF34  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 80170FF8 0016DF38  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80170FFC 0016DF3C  28 00 00 00 */	cmplwi r0, 0
/* 80171000 0016DF40  7C 9F 23 78 */	mr r31, r4
/* 80171004 0016DF44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80171008 0016DF48  90 A1 00 08 */	stw r5, 8(r1)
/* 8017100C 0016DF4C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80171010 0016DF50  90 61 00 10 */	stw r3, 0x10(r1)
/* 80171014 0016DF54  40 82 00 1C */	bne .L_80171030
/* 80171018 0016DF58  81 83 00 00 */	lwz r12, 0(r3)
/* 8017101C 0016DF5C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80171020 0016DF60  7D 89 03 A6 */	mtctr r12
/* 80171024 0016DF64  4E 80 04 21 */	bctrl 
/* 80171028 0016DF68  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017102C 0016DF6C  48 00 01 74 */	b .L_801711A0
.L_80171030:
/* 80171030 0016DF70  81 83 00 00 */	lwz r12, 0(r3)
/* 80171034 0016DF74  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80171038 0016DF78  7D 89 03 A6 */	mtctr r12
/* 8017103C 0016DF7C  4E 80 04 21 */	bctrl 
/* 80171040 0016DF80  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171044 0016DF84  48 00 00 58 */	b .L_8017109C
.L_80171048:
/* 80171048 0016DF88  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017104C 0016DF8C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171050 0016DF90  81 83 00 00 */	lwz r12, 0(r3)
/* 80171054 0016DF94  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171058 0016DF98  7D 89 03 A6 */	mtctr r12
/* 8017105C 0016DF9C  4E 80 04 21 */	bctrl 
/* 80171060 0016DFA0  7C 64 1B 78 */	mr r4, r3
/* 80171064 0016DFA4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171068 0016DFA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017106C 0016DFAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171070 0016DFB0  7D 89 03 A6 */	mtctr r12
/* 80171074 0016DFB4  4E 80 04 21 */	bctrl 
/* 80171078 0016DFB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017107C 0016DFBC  40 82 01 24 */	bne .L_801711A0
/* 80171080 0016DFC0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171084 0016DFC4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171088 0016DFC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017108C 0016DFCC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171090 0016DFD0  7D 89 03 A6 */	mtctr r12
/* 80171094 0016DFD4  4E 80 04 21 */	bctrl 
/* 80171098 0016DFD8  90 61 00 0C */	stw r3, 0xc(r1)
.L_8017109C:
/* 8017109C 0016DFDC  81 81 00 08 */	lwz r12, 8(r1)
/* 801710A0 0016DFE0  38 61 00 08 */	addi r3, r1, 8
/* 801710A4 0016DFE4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801710A8 0016DFE8  7D 89 03 A6 */	mtctr r12
/* 801710AC 0016DFEC  4E 80 04 21 */	bctrl 
/* 801710B0 0016DFF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801710B4 0016DFF4  41 82 FF 94 */	beq .L_80171048
/* 801710B8 0016DFF8  48 00 00 E8 */	b .L_801711A0
.L_801710BC:
/* 801710BC 0016DFFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801710C0 0016E000  81 83 00 00 */	lwz r12, 0(r3)
/* 801710C4 0016E004  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801710C8 0016E008  7D 89 03 A6 */	mtctr r12
/* 801710CC 0016E00C  4E 80 04 21 */	bctrl 
/* 801710D0 0016E010  81 83 00 00 */	lwz r12, 0(r3)
/* 801710D4 0016E014  7F E4 FB 78 */	mr r4, r31
/* 801710D8 0016E018  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801710DC 0016E01C  7D 89 03 A6 */	mtctr r12
/* 801710E0 0016E020  4E 80 04 21 */	bctrl 
/* 801710E4 0016E024  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801710E8 0016E028  28 00 00 00 */	cmplwi r0, 0
/* 801710EC 0016E02C  40 82 00 24 */	bne .L_80171110
/* 801710F0 0016E030  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801710F4 0016E034  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801710F8 0016E038  81 83 00 00 */	lwz r12, 0(r3)
/* 801710FC 0016E03C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171100 0016E040  7D 89 03 A6 */	mtctr r12
/* 80171104 0016E044  4E 80 04 21 */	bctrl 
/* 80171108 0016E048  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017110C 0016E04C  48 00 00 94 */	b .L_801711A0
.L_80171110:
/* 80171110 0016E050  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171114 0016E054  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171118 0016E058  81 83 00 00 */	lwz r12, 0(r3)
/* 8017111C 0016E05C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171120 0016E060  7D 89 03 A6 */	mtctr r12
/* 80171124 0016E064  4E 80 04 21 */	bctrl 
/* 80171128 0016E068  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017112C 0016E06C  48 00 00 58 */	b .L_80171184
.L_80171130:
/* 80171130 0016E070  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171134 0016E074  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171138 0016E078  81 83 00 00 */	lwz r12, 0(r3)
/* 8017113C 0016E07C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171140 0016E080  7D 89 03 A6 */	mtctr r12
/* 80171144 0016E084  4E 80 04 21 */	bctrl 
/* 80171148 0016E088  7C 64 1B 78 */	mr r4, r3
/* 8017114C 0016E08C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171150 0016E090  81 83 00 00 */	lwz r12, 0(r3)
/* 80171154 0016E094  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171158 0016E098  7D 89 03 A6 */	mtctr r12
/* 8017115C 0016E09C  4E 80 04 21 */	bctrl 
/* 80171160 0016E0A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171164 0016E0A4  40 82 00 3C */	bne .L_801711A0
/* 80171168 0016E0A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017116C 0016E0AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171170 0016E0B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80171174 0016E0B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171178 0016E0B8  7D 89 03 A6 */	mtctr r12
/* 8017117C 0016E0BC  4E 80 04 21 */	bctrl 
/* 80171180 0016E0C0  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171184:
/* 80171184 0016E0C4  81 81 00 08 */	lwz r12, 8(r1)
/* 80171188 0016E0C8  38 61 00 08 */	addi r3, r1, 8
/* 8017118C 0016E0CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171190 0016E0D0  7D 89 03 A6 */	mtctr r12
/* 80171194 0016E0D4  4E 80 04 21 */	bctrl 
/* 80171198 0016E0D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017119C 0016E0DC  41 82 FF 94 */	beq .L_80171130
.L_801711A0:
/* 801711A0 0016E0E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801711A4 0016E0E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801711A8 0016E0E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801711AC 0016E0EC  7D 89 03 A6 */	mtctr r12
/* 801711B0 0016E0F0  4E 80 04 21 */	bctrl 
/* 801711B4 0016E0F4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801711B8 0016E0F8  7C 04 18 40 */	cmplw r4, r3
/* 801711BC 0016E0FC  40 82 FF 00 */	bne .L_801710BC
/* 801711C0 0016E100  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801711C4 0016E104  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801711C8 0016E108  7C 08 03 A6 */	mtlr r0
/* 801711CC 0016E10C  38 21 00 20 */	addi r1, r1, 0x20
/* 801711D0 0016E110  4E 80 00 20 */	blr 
.endfn "doDirectDraw__29ObjectMgr<16GenericObjectMgr>FR8Graphics"

.fn "getObject__29Container<16GenericObjectMgr>FPv", weak
/* 801711D4 0016E114  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801711D8 0016E118  7C 08 02 A6 */	mflr r0
/* 801711DC 0016E11C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801711E0 0016E120  81 83 00 00 */	lwz r12, 0(r3)
/* 801711E4 0016E124  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801711E8 0016E128  7D 89 03 A6 */	mtctr r12
/* 801711EC 0016E12C  4E 80 04 21 */	bctrl 
/* 801711F0 0016E130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801711F4 0016E134  7C 08 03 A6 */	mtlr r0
/* 801711F8 0016E138  38 21 00 10 */	addi r1, r1, 0x10
/* 801711FC 0016E13C  4E 80 00 20 */	blr 
.endfn "getObject__29Container<16GenericObjectMgr>FPv"

.fn "getAt__29Container<16GenericObjectMgr>Fi", weak
/* 80171200 0016E140  38 60 00 00 */	li r3, 0
/* 80171204 0016E144  4E 80 00 20 */	blr 
.endfn "getAt__29Container<16GenericObjectMgr>Fi"

.fn "getTo__29Container<16GenericObjectMgr>Fv", weak
/* 80171208 0016E148  38 60 00 00 */	li r3, 0
/* 8017120C 0016E14C  4E 80 00 20 */	blr 
.endfn "getTo__29Container<16GenericObjectMgr>Fv"

.fn "getObject__20Container<8CollPart>FPv", weak
/* 80171210 0016E150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80171214 0016E154  7C 08 02 A6 */	mflr r0
/* 80171218 0016E158  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017121C 0016E15C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171220 0016E160  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171224 0016E164  7D 89 03 A6 */	mtctr r12
/* 80171228 0016E168  4E 80 04 21 */	bctrl 
/* 8017122C 0016E16C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80171230 0016E170  7C 08 03 A6 */	mtlr r0
/* 80171234 0016E174  38 21 00 10 */	addi r1, r1, 0x10
/* 80171238 0016E178  4E 80 00 20 */	blr 
.endfn "getObject__20Container<8CollPart>FPv"

.fn "getAt__20Container<8CollPart>Fi", weak
/* 8017123C 0016E17C  38 60 00 00 */	li r3, 0
/* 80171240 0016E180  4E 80 00 20 */	blr 
.endfn "getAt__20Container<8CollPart>Fi"

.fn "getTo__20Container<8CollPart>Fv", weak
/* 80171244 0016E184  38 60 00 00 */	li r3, 0
/* 80171248 0016E188  4E 80 00 20 */	blr 
.endfn "getTo__20Container<8CollPart>Fv"

.fn "invoke__52Delegate1<Q24Game13BasePelletMgr,PQ28SysShape5Model>FPQ28SysShape5Model", weak
/* 8017124C 0016E18C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80171250 0016E190  7C 08 02 A6 */	mflr r0
/* 80171254 0016E194  7C 65 1B 78 */	mr r5, r3
/* 80171258 0016E198  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017125C 0016E19C  39 85 00 08 */	addi r12, r5, 8
/* 80171260 0016E1A0  80 63 00 04 */	lwz r3, 4(r3)
/* 80171264 0016E1A4  4B F5 08 C1 */	bl __ptmf_scall
/* 80171268 0016E1A8  60 00 00 00 */	nop 
/* 8017126C 0016E1AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80171270 0016E1B0  7C 08 03 A6 */	mtlr r0
/* 80171274 0016E1B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80171278 0016E1B8  4E 80 00 20 */	blr 
.endfn "invoke__52Delegate1<Q24Game13BasePelletMgr,PQ28SysShape5Model>FPQ28SysShape5Model"

.fn "doDirectDraw__20ObjectMgr<8CollPart>FR8Graphics", weak
/* 8017127C 0016E1BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80171280 0016E1C0  7C 08 02 A6 */	mflr r0
/* 80171284 0016E1C4  3C A0 80 4B */	lis r5, "__vt__19Iterator<8CollPart>"@ha
/* 80171288 0016E1C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017128C 0016E1CC  38 00 00 00 */	li r0, 0
/* 80171290 0016E1D0  38 A5 22 E4 */	addi r5, r5, "__vt__19Iterator<8CollPart>"@l
/* 80171294 0016E1D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80171298 0016E1D8  28 00 00 00 */	cmplwi r0, 0
/* 8017129C 0016E1DC  7C 9F 23 78 */	mr r31, r4
/* 801712A0 0016E1E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801712A4 0016E1E4  90 A1 00 08 */	stw r5, 8(r1)
/* 801712A8 0016E1E8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801712AC 0016E1EC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801712B0 0016E1F0  40 82 00 1C */	bne .L_801712CC
/* 801712B4 0016E1F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801712B8 0016E1F8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801712BC 0016E1FC  7D 89 03 A6 */	mtctr r12
/* 801712C0 0016E200  4E 80 04 21 */	bctrl 
/* 801712C4 0016E204  90 61 00 0C */	stw r3, 0xc(r1)
/* 801712C8 0016E208  48 00 01 74 */	b .L_8017143C
.L_801712CC:
/* 801712CC 0016E20C  81 83 00 00 */	lwz r12, 0(r3)
/* 801712D0 0016E210  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801712D4 0016E214  7D 89 03 A6 */	mtctr r12
/* 801712D8 0016E218  4E 80 04 21 */	bctrl 
/* 801712DC 0016E21C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801712E0 0016E220  48 00 00 58 */	b .L_80171338
.L_801712E4:
/* 801712E4 0016E224  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801712E8 0016E228  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801712EC 0016E22C  81 83 00 00 */	lwz r12, 0(r3)
/* 801712F0 0016E230  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801712F4 0016E234  7D 89 03 A6 */	mtctr r12
/* 801712F8 0016E238  4E 80 04 21 */	bctrl 
/* 801712FC 0016E23C  7C 64 1B 78 */	mr r4, r3
/* 80171300 0016E240  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171304 0016E244  81 83 00 00 */	lwz r12, 0(r3)
/* 80171308 0016E248  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017130C 0016E24C  7D 89 03 A6 */	mtctr r12
/* 80171310 0016E250  4E 80 04 21 */	bctrl 
/* 80171314 0016E254  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171318 0016E258  40 82 01 24 */	bne .L_8017143C
/* 8017131C 0016E25C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171320 0016E260  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171324 0016E264  81 83 00 00 */	lwz r12, 0(r3)
/* 80171328 0016E268  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017132C 0016E26C  7D 89 03 A6 */	mtctr r12
/* 80171330 0016E270  4E 80 04 21 */	bctrl 
/* 80171334 0016E274  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171338:
/* 80171338 0016E278  81 81 00 08 */	lwz r12, 8(r1)
/* 8017133C 0016E27C  38 61 00 08 */	addi r3, r1, 8
/* 80171340 0016E280  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171344 0016E284  7D 89 03 A6 */	mtctr r12
/* 80171348 0016E288  4E 80 04 21 */	bctrl 
/* 8017134C 0016E28C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171350 0016E290  41 82 FF 94 */	beq .L_801712E4
/* 80171354 0016E294  48 00 00 E8 */	b .L_8017143C
.L_80171358:
/* 80171358 0016E298  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017135C 0016E29C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171360 0016E2A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171364 0016E2A4  7D 89 03 A6 */	mtctr r12
/* 80171368 0016E2A8  4E 80 04 21 */	bctrl 
/* 8017136C 0016E2AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80171370 0016E2B0  7F E4 FB 78 */	mr r4, r31
/* 80171374 0016E2B4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80171378 0016E2B8  7D 89 03 A6 */	mtctr r12
/* 8017137C 0016E2BC  4E 80 04 21 */	bctrl 
/* 80171380 0016E2C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80171384 0016E2C4  28 00 00 00 */	cmplwi r0, 0
/* 80171388 0016E2C8  40 82 00 24 */	bne .L_801713AC
/* 8017138C 0016E2CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171390 0016E2D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171394 0016E2D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80171398 0016E2D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017139C 0016E2DC  7D 89 03 A6 */	mtctr r12
/* 801713A0 0016E2E0  4E 80 04 21 */	bctrl 
/* 801713A4 0016E2E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801713A8 0016E2E8  48 00 00 94 */	b .L_8017143C
.L_801713AC:
/* 801713AC 0016E2EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801713B0 0016E2F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801713B4 0016E2F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801713B8 0016E2F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801713BC 0016E2FC  7D 89 03 A6 */	mtctr r12
/* 801713C0 0016E300  4E 80 04 21 */	bctrl 
/* 801713C4 0016E304  90 61 00 0C */	stw r3, 0xc(r1)
/* 801713C8 0016E308  48 00 00 58 */	b .L_80171420
.L_801713CC:
/* 801713CC 0016E30C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801713D0 0016E310  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801713D4 0016E314  81 83 00 00 */	lwz r12, 0(r3)
/* 801713D8 0016E318  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801713DC 0016E31C  7D 89 03 A6 */	mtctr r12
/* 801713E0 0016E320  4E 80 04 21 */	bctrl 
/* 801713E4 0016E324  7C 64 1B 78 */	mr r4, r3
/* 801713E8 0016E328  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801713EC 0016E32C  81 83 00 00 */	lwz r12, 0(r3)
/* 801713F0 0016E330  81 8C 00 08 */	lwz r12, 8(r12)
/* 801713F4 0016E334  7D 89 03 A6 */	mtctr r12
/* 801713F8 0016E338  4E 80 04 21 */	bctrl 
/* 801713FC 0016E33C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171400 0016E340  40 82 00 3C */	bne .L_8017143C
/* 80171404 0016E344  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171408 0016E348  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017140C 0016E34C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171410 0016E350  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171414 0016E354  7D 89 03 A6 */	mtctr r12
/* 80171418 0016E358  4E 80 04 21 */	bctrl 
/* 8017141C 0016E35C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171420:
/* 80171420 0016E360  81 81 00 08 */	lwz r12, 8(r1)
/* 80171424 0016E364  38 61 00 08 */	addi r3, r1, 8
/* 80171428 0016E368  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8017142C 0016E36C  7D 89 03 A6 */	mtctr r12
/* 80171430 0016E370  4E 80 04 21 */	bctrl 
/* 80171434 0016E374  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171438 0016E378  41 82 FF 94 */	beq .L_801713CC
.L_8017143C:
/* 8017143C 0016E37C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171440 0016E380  81 83 00 00 */	lwz r12, 0(r3)
/* 80171444 0016E384  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80171448 0016E388  7D 89 03 A6 */	mtctr r12
/* 8017144C 0016E38C  4E 80 04 21 */	bctrl 
/* 80171450 0016E390  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171454 0016E394  7C 04 18 40 */	cmplw r4, r3
/* 80171458 0016E398  40 82 FF 00 */	bne .L_80171358
/* 8017145C 0016E39C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80171460 0016E3A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80171464 0016E3A4  7C 08 03 A6 */	mtlr r0
/* 80171468 0016E3A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8017146C 0016E3AC  4E 80 00 20 */	blr 
.endfn "doDirectDraw__20ObjectMgr<8CollPart>FR8Graphics"

.fn "isDone__19Iterator<8CollPart>Fv", weak
/* 80171470 0016E3B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80171474 0016E3B4  7C 08 02 A6 */	mflr r0
/* 80171478 0016E3B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017147C 0016E3BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80171480 0016E3C0  7C 7F 1B 78 */	mr r31, r3
/* 80171484 0016E3C4  80 63 00 08 */	lwz r3, 8(r3)
/* 80171488 0016E3C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017148C 0016E3CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80171490 0016E3D0  7D 89 03 A6 */	mtctr r12
/* 80171494 0016E3D4  4E 80 04 21 */	bctrl 
/* 80171498 0016E3D8  80 1F 00 04 */	lwz r0, 4(r31)
/* 8017149C 0016E3DC  7C 00 18 50 */	subf r0, r0, r3
/* 801714A0 0016E3E0  7C 00 00 34 */	cntlzw r0, r0
/* 801714A4 0016E3E4  54 03 D9 7E */	srwi r3, r0, 5
/* 801714A8 0016E3E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801714AC 0016E3EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801714B0 0016E3F0  7C 08 03 A6 */	mtlr r0
/* 801714B4 0016E3F4  38 21 00 10 */	addi r1, r1, 0x10
/* 801714B8 0016E3F8  4E 80 00 20 */	blr 
.endfn "isDone__19Iterator<8CollPart>Fv"

.fn "doSimulation__20ObjectMgr<8CollPart>Ff", weak
/* 801714BC 0016E3FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801714C0 0016E400  7C 08 02 A6 */	mflr r0
/* 801714C4 0016E404  3C 80 80 4B */	lis r4, "__vt__19Iterator<8CollPart>"@ha
/* 801714C8 0016E408  90 01 00 24 */	stw r0, 0x24(r1)
/* 801714CC 0016E40C  38 00 00 00 */	li r0, 0
/* 801714D0 0016E410  38 84 22 E4 */	addi r4, r4, "__vt__19Iterator<8CollPart>"@l
/* 801714D4 0016E414  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801714D8 0016E418  FF E0 08 90 */	fmr f31, f1
/* 801714DC 0016E41C  28 00 00 00 */	cmplwi r0, 0
/* 801714E0 0016E420  90 81 00 08 */	stw r4, 8(r1)
/* 801714E4 0016E424  90 01 00 14 */	stw r0, 0x14(r1)
/* 801714E8 0016E428  90 01 00 0C */	stw r0, 0xc(r1)
/* 801714EC 0016E42C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801714F0 0016E430  40 82 00 1C */	bne .L_8017150C
/* 801714F4 0016E434  81 83 00 00 */	lwz r12, 0(r3)
/* 801714F8 0016E438  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801714FC 0016E43C  7D 89 03 A6 */	mtctr r12
/* 80171500 0016E440  4E 80 04 21 */	bctrl 
/* 80171504 0016E444  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171508 0016E448  48 00 01 74 */	b .L_8017167C
.L_8017150C:
/* 8017150C 0016E44C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171510 0016E450  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80171514 0016E454  7D 89 03 A6 */	mtctr r12
/* 80171518 0016E458  4E 80 04 21 */	bctrl 
/* 8017151C 0016E45C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171520 0016E460  48 00 00 58 */	b .L_80171578
.L_80171524:
/* 80171524 0016E464  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171528 0016E468  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017152C 0016E46C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171530 0016E470  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171534 0016E474  7D 89 03 A6 */	mtctr r12
/* 80171538 0016E478  4E 80 04 21 */	bctrl 
/* 8017153C 0016E47C  7C 64 1B 78 */	mr r4, r3
/* 80171540 0016E480  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171544 0016E484  81 83 00 00 */	lwz r12, 0(r3)
/* 80171548 0016E488  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017154C 0016E48C  7D 89 03 A6 */	mtctr r12
/* 80171550 0016E490  4E 80 04 21 */	bctrl 
/* 80171554 0016E494  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171558 0016E498  40 82 01 24 */	bne .L_8017167C
/* 8017155C 0016E49C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171560 0016E4A0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171564 0016E4A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80171568 0016E4A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017156C 0016E4AC  7D 89 03 A6 */	mtctr r12
/* 80171570 0016E4B0  4E 80 04 21 */	bctrl 
/* 80171574 0016E4B4  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171578:
/* 80171578 0016E4B8  81 81 00 08 */	lwz r12, 8(r1)
/* 8017157C 0016E4BC  38 61 00 08 */	addi r3, r1, 8
/* 80171580 0016E4C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171584 0016E4C4  7D 89 03 A6 */	mtctr r12
/* 80171588 0016E4C8  4E 80 04 21 */	bctrl 
/* 8017158C 0016E4CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171590 0016E4D0  41 82 FF 94 */	beq .L_80171524
/* 80171594 0016E4D4  48 00 00 E8 */	b .L_8017167C
.L_80171598:
/* 80171598 0016E4D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017159C 0016E4DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801715A0 0016E4E0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801715A4 0016E4E4  7D 89 03 A6 */	mtctr r12
/* 801715A8 0016E4E8  4E 80 04 21 */	bctrl 
/* 801715AC 0016E4EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801715B0 0016E4F0  FC 20 F8 90 */	fmr f1, f31
/* 801715B4 0016E4F4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801715B8 0016E4F8  7D 89 03 A6 */	mtctr r12
/* 801715BC 0016E4FC  4E 80 04 21 */	bctrl 
/* 801715C0 0016E500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801715C4 0016E504  28 00 00 00 */	cmplwi r0, 0
/* 801715C8 0016E508  40 82 00 24 */	bne .L_801715EC
/* 801715CC 0016E50C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801715D0 0016E510  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801715D4 0016E514  81 83 00 00 */	lwz r12, 0(r3)
/* 801715D8 0016E518  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801715DC 0016E51C  7D 89 03 A6 */	mtctr r12
/* 801715E0 0016E520  4E 80 04 21 */	bctrl 
/* 801715E4 0016E524  90 61 00 0C */	stw r3, 0xc(r1)
/* 801715E8 0016E528  48 00 00 94 */	b .L_8017167C
.L_801715EC:
/* 801715EC 0016E52C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801715F0 0016E530  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801715F4 0016E534  81 83 00 00 */	lwz r12, 0(r3)
/* 801715F8 0016E538  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801715FC 0016E53C  7D 89 03 A6 */	mtctr r12
/* 80171600 0016E540  4E 80 04 21 */	bctrl 
/* 80171604 0016E544  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171608 0016E548  48 00 00 58 */	b .L_80171660
.L_8017160C:
/* 8017160C 0016E54C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171610 0016E550  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171614 0016E554  81 83 00 00 */	lwz r12, 0(r3)
/* 80171618 0016E558  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8017161C 0016E55C  7D 89 03 A6 */	mtctr r12
/* 80171620 0016E560  4E 80 04 21 */	bctrl 
/* 80171624 0016E564  7C 64 1B 78 */	mr r4, r3
/* 80171628 0016E568  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8017162C 0016E56C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171630 0016E570  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171634 0016E574  7D 89 03 A6 */	mtctr r12
/* 80171638 0016E578  4E 80 04 21 */	bctrl 
/* 8017163C 0016E57C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171640 0016E580  40 82 00 3C */	bne .L_8017167C
/* 80171644 0016E584  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171648 0016E588  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017164C 0016E58C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171650 0016E590  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171654 0016E594  7D 89 03 A6 */	mtctr r12
/* 80171658 0016E598  4E 80 04 21 */	bctrl 
/* 8017165C 0016E59C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171660:
/* 80171660 0016E5A0  81 81 00 08 */	lwz r12, 8(r1)
/* 80171664 0016E5A4  38 61 00 08 */	addi r3, r1, 8
/* 80171668 0016E5A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8017166C 0016E5AC  7D 89 03 A6 */	mtctr r12
/* 80171670 0016E5B0  4E 80 04 21 */	bctrl 
/* 80171674 0016E5B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171678 0016E5B8  41 82 FF 94 */	beq .L_8017160C
.L_8017167C:
/* 8017167C 0016E5BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171680 0016E5C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80171684 0016E5C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80171688 0016E5C8  7D 89 03 A6 */	mtctr r12
/* 8017168C 0016E5CC  4E 80 04 21 */	bctrl 
/* 80171690 0016E5D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171694 0016E5D4  7C 04 18 40 */	cmplw r4, r3
/* 80171698 0016E5D8  40 82 FF 00 */	bne .L_80171598
/* 8017169C 0016E5DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801716A0 0016E5E0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801716A4 0016E5E4  7C 08 03 A6 */	mtlr r0
/* 801716A8 0016E5E8  38 21 00 20 */	addi r1, r1, 0x20
/* 801716AC 0016E5EC  4E 80 00 20 */	blr 
.endfn "doSimulation__20ObjectMgr<8CollPart>Ff"

.fn "doViewCalc__20ObjectMgr<8CollPart>Fv", weak
/* 801716B0 0016E5F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801716B4 0016E5F4  7C 08 02 A6 */	mflr r0
/* 801716B8 0016E5F8  3C 80 80 4B */	lis r4, "__vt__19Iterator<8CollPart>"@ha
/* 801716BC 0016E5FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801716C0 0016E600  38 00 00 00 */	li r0, 0
/* 801716C4 0016E604  38 84 22 E4 */	addi r4, r4, "__vt__19Iterator<8CollPart>"@l
/* 801716C8 0016E608  28 00 00 00 */	cmplwi r0, 0
/* 801716CC 0016E60C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801716D0 0016E610  90 81 00 08 */	stw r4, 8(r1)
/* 801716D4 0016E614  90 01 00 0C */	stw r0, 0xc(r1)
/* 801716D8 0016E618  90 61 00 10 */	stw r3, 0x10(r1)
/* 801716DC 0016E61C  40 82 00 1C */	bne .L_801716F8
/* 801716E0 0016E620  81 83 00 00 */	lwz r12, 0(r3)
/* 801716E4 0016E624  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801716E8 0016E628  7D 89 03 A6 */	mtctr r12
/* 801716EC 0016E62C  4E 80 04 21 */	bctrl 
/* 801716F0 0016E630  90 61 00 0C */	stw r3, 0xc(r1)
/* 801716F4 0016E634  48 00 01 70 */	b .L_80171864
.L_801716F8:
/* 801716F8 0016E638  81 83 00 00 */	lwz r12, 0(r3)
/* 801716FC 0016E63C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80171700 0016E640  7D 89 03 A6 */	mtctr r12
/* 80171704 0016E644  4E 80 04 21 */	bctrl 
/* 80171708 0016E648  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017170C 0016E64C  48 00 00 58 */	b .L_80171764
.L_80171710:
/* 80171710 0016E650  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171714 0016E654  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171718 0016E658  81 83 00 00 */	lwz r12, 0(r3)
/* 8017171C 0016E65C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171720 0016E660  7D 89 03 A6 */	mtctr r12
/* 80171724 0016E664  4E 80 04 21 */	bctrl 
/* 80171728 0016E668  7C 64 1B 78 */	mr r4, r3
/* 8017172C 0016E66C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171730 0016E670  81 83 00 00 */	lwz r12, 0(r3)
/* 80171734 0016E674  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171738 0016E678  7D 89 03 A6 */	mtctr r12
/* 8017173C 0016E67C  4E 80 04 21 */	bctrl 
/* 80171740 0016E680  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171744 0016E684  40 82 01 20 */	bne .L_80171864
/* 80171748 0016E688  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017174C 0016E68C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171750 0016E690  81 83 00 00 */	lwz r12, 0(r3)
/* 80171754 0016E694  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171758 0016E698  7D 89 03 A6 */	mtctr r12
/* 8017175C 0016E69C  4E 80 04 21 */	bctrl 
/* 80171760 0016E6A0  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171764:
/* 80171764 0016E6A4  81 81 00 08 */	lwz r12, 8(r1)
/* 80171768 0016E6A8  38 61 00 08 */	addi r3, r1, 8
/* 8017176C 0016E6AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171770 0016E6B0  7D 89 03 A6 */	mtctr r12
/* 80171774 0016E6B4  4E 80 04 21 */	bctrl 
/* 80171778 0016E6B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017177C 0016E6BC  41 82 FF 94 */	beq .L_80171710
/* 80171780 0016E6C0  48 00 00 E4 */	b .L_80171864
.L_80171784:
/* 80171784 0016E6C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171788 0016E6C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017178C 0016E6CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171790 0016E6D0  7D 89 03 A6 */	mtctr r12
/* 80171794 0016E6D4  4E 80 04 21 */	bctrl 
/* 80171798 0016E6D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017179C 0016E6DC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801717A0 0016E6E0  7D 89 03 A6 */	mtctr r12
/* 801717A4 0016E6E4  4E 80 04 21 */	bctrl 
/* 801717A8 0016E6E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801717AC 0016E6EC  28 00 00 00 */	cmplwi r0, 0
/* 801717B0 0016E6F0  40 82 00 24 */	bne .L_801717D4
/* 801717B4 0016E6F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801717B8 0016E6F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801717BC 0016E6FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801717C0 0016E700  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801717C4 0016E704  7D 89 03 A6 */	mtctr r12
/* 801717C8 0016E708  4E 80 04 21 */	bctrl 
/* 801717CC 0016E70C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801717D0 0016E710  48 00 00 94 */	b .L_80171864
.L_801717D4:
/* 801717D4 0016E714  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801717D8 0016E718  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801717DC 0016E71C  81 83 00 00 */	lwz r12, 0(r3)
/* 801717E0 0016E720  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801717E4 0016E724  7D 89 03 A6 */	mtctr r12
/* 801717E8 0016E728  4E 80 04 21 */	bctrl 
/* 801717EC 0016E72C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801717F0 0016E730  48 00 00 58 */	b .L_80171848
.L_801717F4:
/* 801717F4 0016E734  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801717F8 0016E738  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801717FC 0016E73C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171800 0016E740  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171804 0016E744  7D 89 03 A6 */	mtctr r12
/* 80171808 0016E748  4E 80 04 21 */	bctrl 
/* 8017180C 0016E74C  7C 64 1B 78 */	mr r4, r3
/* 80171810 0016E750  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171814 0016E754  81 83 00 00 */	lwz r12, 0(r3)
/* 80171818 0016E758  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017181C 0016E75C  7D 89 03 A6 */	mtctr r12
/* 80171820 0016E760  4E 80 04 21 */	bctrl 
/* 80171824 0016E764  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171828 0016E768  40 82 00 3C */	bne .L_80171864
/* 8017182C 0016E76C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171830 0016E770  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171834 0016E774  81 83 00 00 */	lwz r12, 0(r3)
/* 80171838 0016E778  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017183C 0016E77C  7D 89 03 A6 */	mtctr r12
/* 80171840 0016E780  4E 80 04 21 */	bctrl 
/* 80171844 0016E784  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171848:
/* 80171848 0016E788  81 81 00 08 */	lwz r12, 8(r1)
/* 8017184C 0016E78C  38 61 00 08 */	addi r3, r1, 8
/* 80171850 0016E790  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171854 0016E794  7D 89 03 A6 */	mtctr r12
/* 80171858 0016E798  4E 80 04 21 */	bctrl 
/* 8017185C 0016E79C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171860 0016E7A0  41 82 FF 94 */	beq .L_801717F4
.L_80171864:
/* 80171864 0016E7A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171868 0016E7A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017186C 0016E7AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80171870 0016E7B0  7D 89 03 A6 */	mtctr r12
/* 80171874 0016E7B4  4E 80 04 21 */	bctrl 
/* 80171878 0016E7B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017187C 0016E7BC  7C 04 18 40 */	cmplw r4, r3
/* 80171880 0016E7C0  40 82 FF 04 */	bne .L_80171784
/* 80171884 0016E7C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80171888 0016E7C8  7C 08 03 A6 */	mtlr r0
/* 8017188C 0016E7CC  38 21 00 20 */	addi r1, r1, 0x20
/* 80171890 0016E7D0  4E 80 00 20 */	blr 
.endfn "doViewCalc__20ObjectMgr<8CollPart>Fv"

.fn "doSetView__20ObjectMgr<8CollPart>Fi", weak
/* 80171894 0016E7D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80171898 0016E7D8  7C 08 02 A6 */	mflr r0
/* 8017189C 0016E7DC  3C A0 80 4B */	lis r5, "__vt__19Iterator<8CollPart>"@ha
/* 801718A0 0016E7E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801718A4 0016E7E4  38 00 00 00 */	li r0, 0
/* 801718A8 0016E7E8  38 A5 22 E4 */	addi r5, r5, "__vt__19Iterator<8CollPart>"@l
/* 801718AC 0016E7EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801718B0 0016E7F0  28 00 00 00 */	cmplwi r0, 0
/* 801718B4 0016E7F4  7C 9F 23 78 */	mr r31, r4
/* 801718B8 0016E7F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801718BC 0016E7FC  90 A1 00 08 */	stw r5, 8(r1)
/* 801718C0 0016E800  90 01 00 0C */	stw r0, 0xc(r1)
/* 801718C4 0016E804  90 61 00 10 */	stw r3, 0x10(r1)
/* 801718C8 0016E808  40 82 00 1C */	bne .L_801718E4
/* 801718CC 0016E80C  81 83 00 00 */	lwz r12, 0(r3)
/* 801718D0 0016E810  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801718D4 0016E814  7D 89 03 A6 */	mtctr r12
/* 801718D8 0016E818  4E 80 04 21 */	bctrl 
/* 801718DC 0016E81C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801718E0 0016E820  48 00 01 74 */	b .L_80171A54
.L_801718E4:
/* 801718E4 0016E824  81 83 00 00 */	lwz r12, 0(r3)
/* 801718E8 0016E828  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801718EC 0016E82C  7D 89 03 A6 */	mtctr r12
/* 801718F0 0016E830  4E 80 04 21 */	bctrl 
/* 801718F4 0016E834  90 61 00 0C */	stw r3, 0xc(r1)
/* 801718F8 0016E838  48 00 00 58 */	b .L_80171950
.L_801718FC:
/* 801718FC 0016E83C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171900 0016E840  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171904 0016E844  81 83 00 00 */	lwz r12, 0(r3)
/* 80171908 0016E848  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8017190C 0016E84C  7D 89 03 A6 */	mtctr r12
/* 80171910 0016E850  4E 80 04 21 */	bctrl 
/* 80171914 0016E854  7C 64 1B 78 */	mr r4, r3
/* 80171918 0016E858  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8017191C 0016E85C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171920 0016E860  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171924 0016E864  7D 89 03 A6 */	mtctr r12
/* 80171928 0016E868  4E 80 04 21 */	bctrl 
/* 8017192C 0016E86C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171930 0016E870  40 82 01 24 */	bne .L_80171A54
/* 80171934 0016E874  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171938 0016E878  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017193C 0016E87C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171940 0016E880  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171944 0016E884  7D 89 03 A6 */	mtctr r12
/* 80171948 0016E888  4E 80 04 21 */	bctrl 
/* 8017194C 0016E88C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171950:
/* 80171950 0016E890  81 81 00 08 */	lwz r12, 8(r1)
/* 80171954 0016E894  38 61 00 08 */	addi r3, r1, 8
/* 80171958 0016E898  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8017195C 0016E89C  7D 89 03 A6 */	mtctr r12
/* 80171960 0016E8A0  4E 80 04 21 */	bctrl 
/* 80171964 0016E8A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171968 0016E8A8  41 82 FF 94 */	beq .L_801718FC
/* 8017196C 0016E8AC  48 00 00 E8 */	b .L_80171A54
.L_80171970:
/* 80171970 0016E8B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171974 0016E8B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80171978 0016E8B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8017197C 0016E8BC  7D 89 03 A6 */	mtctr r12
/* 80171980 0016E8C0  4E 80 04 21 */	bctrl 
/* 80171984 0016E8C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80171988 0016E8C8  7F E4 FB 78 */	mr r4, r31
/* 8017198C 0016E8CC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80171990 0016E8D0  7D 89 03 A6 */	mtctr r12
/* 80171994 0016E8D4  4E 80 04 21 */	bctrl 
/* 80171998 0016E8D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017199C 0016E8DC  28 00 00 00 */	cmplwi r0, 0
/* 801719A0 0016E8E0  40 82 00 24 */	bne .L_801719C4
/* 801719A4 0016E8E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801719A8 0016E8E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801719AC 0016E8EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801719B0 0016E8F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801719B4 0016E8F4  7D 89 03 A6 */	mtctr r12
/* 801719B8 0016E8F8  4E 80 04 21 */	bctrl 
/* 801719BC 0016E8FC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801719C0 0016E900  48 00 00 94 */	b .L_80171A54
.L_801719C4:
/* 801719C4 0016E904  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801719C8 0016E908  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801719CC 0016E90C  81 83 00 00 */	lwz r12, 0(r3)
/* 801719D0 0016E910  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801719D4 0016E914  7D 89 03 A6 */	mtctr r12
/* 801719D8 0016E918  4E 80 04 21 */	bctrl 
/* 801719DC 0016E91C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801719E0 0016E920  48 00 00 58 */	b .L_80171A38
.L_801719E4:
/* 801719E4 0016E924  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801719E8 0016E928  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801719EC 0016E92C  81 83 00 00 */	lwz r12, 0(r3)
/* 801719F0 0016E930  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801719F4 0016E934  7D 89 03 A6 */	mtctr r12
/* 801719F8 0016E938  4E 80 04 21 */	bctrl 
/* 801719FC 0016E93C  7C 64 1B 78 */	mr r4, r3
/* 80171A00 0016E940  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171A04 0016E944  81 83 00 00 */	lwz r12, 0(r3)
/* 80171A08 0016E948  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171A0C 0016E94C  7D 89 03 A6 */	mtctr r12
/* 80171A10 0016E950  4E 80 04 21 */	bctrl 
/* 80171A14 0016E954  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171A18 0016E958  40 82 00 3C */	bne .L_80171A54
/* 80171A1C 0016E95C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171A20 0016E960  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171A24 0016E964  81 83 00 00 */	lwz r12, 0(r3)
/* 80171A28 0016E968  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171A2C 0016E96C  7D 89 03 A6 */	mtctr r12
/* 80171A30 0016E970  4E 80 04 21 */	bctrl 
/* 80171A34 0016E974  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171A38:
/* 80171A38 0016E978  81 81 00 08 */	lwz r12, 8(r1)
/* 80171A3C 0016E97C  38 61 00 08 */	addi r3, r1, 8
/* 80171A40 0016E980  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171A44 0016E984  7D 89 03 A6 */	mtctr r12
/* 80171A48 0016E988  4E 80 04 21 */	bctrl 
/* 80171A4C 0016E98C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171A50 0016E990  41 82 FF 94 */	beq .L_801719E4
.L_80171A54:
/* 80171A54 0016E994  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171A58 0016E998  81 83 00 00 */	lwz r12, 0(r3)
/* 80171A5C 0016E99C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80171A60 0016E9A0  7D 89 03 A6 */	mtctr r12
/* 80171A64 0016E9A4  4E 80 04 21 */	bctrl 
/* 80171A68 0016E9A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171A6C 0016E9AC  7C 04 18 40 */	cmplw r4, r3
/* 80171A70 0016E9B0  40 82 FF 00 */	bne .L_80171970
/* 80171A74 0016E9B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80171A78 0016E9B8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80171A7C 0016E9BC  7C 08 03 A6 */	mtlr r0
/* 80171A80 0016E9C0  38 21 00 20 */	addi r1, r1, 0x20
/* 80171A84 0016E9C4  4E 80 00 20 */	blr 
.endfn "doSetView__20ObjectMgr<8CollPart>Fi"

.fn "doEntry__20ObjectMgr<8CollPart>Fv", weak
/* 80171A88 0016E9C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80171A8C 0016E9CC  7C 08 02 A6 */	mflr r0
/* 80171A90 0016E9D0  3C 80 80 4B */	lis r4, "__vt__19Iterator<8CollPart>"@ha
/* 80171A94 0016E9D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80171A98 0016E9D8  38 00 00 00 */	li r0, 0
/* 80171A9C 0016E9DC  38 84 22 E4 */	addi r4, r4, "__vt__19Iterator<8CollPart>"@l
/* 80171AA0 0016E9E0  28 00 00 00 */	cmplwi r0, 0
/* 80171AA4 0016E9E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80171AA8 0016E9E8  90 81 00 08 */	stw r4, 8(r1)
/* 80171AAC 0016E9EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80171AB0 0016E9F0  90 61 00 10 */	stw r3, 0x10(r1)
/* 80171AB4 0016E9F4  40 82 00 1C */	bne .L_80171AD0
/* 80171AB8 0016E9F8  81 83 00 00 */	lwz r12, 0(r3)
/* 80171ABC 0016E9FC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80171AC0 0016EA00  7D 89 03 A6 */	mtctr r12
/* 80171AC4 0016EA04  4E 80 04 21 */	bctrl 
/* 80171AC8 0016EA08  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171ACC 0016EA0C  48 00 01 70 */	b .L_80171C3C
.L_80171AD0:
/* 80171AD0 0016EA10  81 83 00 00 */	lwz r12, 0(r3)
/* 80171AD4 0016EA14  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80171AD8 0016EA18  7D 89 03 A6 */	mtctr r12
/* 80171ADC 0016EA1C  4E 80 04 21 */	bctrl 
/* 80171AE0 0016EA20  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171AE4 0016EA24  48 00 00 58 */	b .L_80171B3C
.L_80171AE8:
/* 80171AE8 0016EA28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171AEC 0016EA2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171AF0 0016EA30  81 83 00 00 */	lwz r12, 0(r3)
/* 80171AF4 0016EA34  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171AF8 0016EA38  7D 89 03 A6 */	mtctr r12
/* 80171AFC 0016EA3C  4E 80 04 21 */	bctrl 
/* 80171B00 0016EA40  7C 64 1B 78 */	mr r4, r3
/* 80171B04 0016EA44  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171B08 0016EA48  81 83 00 00 */	lwz r12, 0(r3)
/* 80171B0C 0016EA4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171B10 0016EA50  7D 89 03 A6 */	mtctr r12
/* 80171B14 0016EA54  4E 80 04 21 */	bctrl 
/* 80171B18 0016EA58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171B1C 0016EA5C  40 82 01 20 */	bne .L_80171C3C
/* 80171B20 0016EA60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171B24 0016EA64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171B28 0016EA68  81 83 00 00 */	lwz r12, 0(r3)
/* 80171B2C 0016EA6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171B30 0016EA70  7D 89 03 A6 */	mtctr r12
/* 80171B34 0016EA74  4E 80 04 21 */	bctrl 
/* 80171B38 0016EA78  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171B3C:
/* 80171B3C 0016EA7C  81 81 00 08 */	lwz r12, 8(r1)
/* 80171B40 0016EA80  38 61 00 08 */	addi r3, r1, 8
/* 80171B44 0016EA84  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171B48 0016EA88  7D 89 03 A6 */	mtctr r12
/* 80171B4C 0016EA8C  4E 80 04 21 */	bctrl 
/* 80171B50 0016EA90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171B54 0016EA94  41 82 FF 94 */	beq .L_80171AE8
/* 80171B58 0016EA98  48 00 00 E4 */	b .L_80171C3C
.L_80171B5C:
/* 80171B5C 0016EA9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171B60 0016EAA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80171B64 0016EAA4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171B68 0016EAA8  7D 89 03 A6 */	mtctr r12
/* 80171B6C 0016EAAC  4E 80 04 21 */	bctrl 
/* 80171B70 0016EAB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80171B74 0016EAB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171B78 0016EAB8  7D 89 03 A6 */	mtctr r12
/* 80171B7C 0016EABC  4E 80 04 21 */	bctrl 
/* 80171B80 0016EAC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80171B84 0016EAC4  28 00 00 00 */	cmplwi r0, 0
/* 80171B88 0016EAC8  40 82 00 24 */	bne .L_80171BAC
/* 80171B8C 0016EACC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171B90 0016EAD0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171B94 0016EAD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80171B98 0016EAD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171B9C 0016EADC  7D 89 03 A6 */	mtctr r12
/* 80171BA0 0016EAE0  4E 80 04 21 */	bctrl 
/* 80171BA4 0016EAE4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171BA8 0016EAE8  48 00 00 94 */	b .L_80171C3C
.L_80171BAC:
/* 80171BAC 0016EAEC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171BB0 0016EAF0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171BB4 0016EAF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80171BB8 0016EAF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171BBC 0016EAFC  7D 89 03 A6 */	mtctr r12
/* 80171BC0 0016EB00  4E 80 04 21 */	bctrl 
/* 80171BC4 0016EB04  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171BC8 0016EB08  48 00 00 58 */	b .L_80171C20
.L_80171BCC:
/* 80171BCC 0016EB0C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171BD0 0016EB10  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171BD4 0016EB14  81 83 00 00 */	lwz r12, 0(r3)
/* 80171BD8 0016EB18  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171BDC 0016EB1C  7D 89 03 A6 */	mtctr r12
/* 80171BE0 0016EB20  4E 80 04 21 */	bctrl 
/* 80171BE4 0016EB24  7C 64 1B 78 */	mr r4, r3
/* 80171BE8 0016EB28  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171BEC 0016EB2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171BF0 0016EB30  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171BF4 0016EB34  7D 89 03 A6 */	mtctr r12
/* 80171BF8 0016EB38  4E 80 04 21 */	bctrl 
/* 80171BFC 0016EB3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171C00 0016EB40  40 82 00 3C */	bne .L_80171C3C
/* 80171C04 0016EB44  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171C08 0016EB48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171C0C 0016EB4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171C10 0016EB50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171C14 0016EB54  7D 89 03 A6 */	mtctr r12
/* 80171C18 0016EB58  4E 80 04 21 */	bctrl 
/* 80171C1C 0016EB5C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171C20:
/* 80171C20 0016EB60  81 81 00 08 */	lwz r12, 8(r1)
/* 80171C24 0016EB64  38 61 00 08 */	addi r3, r1, 8
/* 80171C28 0016EB68  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171C2C 0016EB6C  7D 89 03 A6 */	mtctr r12
/* 80171C30 0016EB70  4E 80 04 21 */	bctrl 
/* 80171C34 0016EB74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171C38 0016EB78  41 82 FF 94 */	beq .L_80171BCC
.L_80171C3C:
/* 80171C3C 0016EB7C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171C40 0016EB80  81 83 00 00 */	lwz r12, 0(r3)
/* 80171C44 0016EB84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80171C48 0016EB88  7D 89 03 A6 */	mtctr r12
/* 80171C4C 0016EB8C  4E 80 04 21 */	bctrl 
/* 80171C50 0016EB90  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171C54 0016EB94  7C 04 18 40 */	cmplw r4, r3
/* 80171C58 0016EB98  40 82 FF 04 */	bne .L_80171B5C
/* 80171C5C 0016EB9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80171C60 0016EBA0  7C 08 03 A6 */	mtlr r0
/* 80171C64 0016EBA4  38 21 00 20 */	addi r1, r1, 0x20
/* 80171C68 0016EBA8  4E 80 00 20 */	blr 
.endfn "doEntry__20ObjectMgr<8CollPart>Fv"

.fn "doAnimation__20ObjectMgr<8CollPart>Fv", weak
/* 80171C6C 0016EBAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80171C70 0016EBB0  7C 08 02 A6 */	mflr r0
/* 80171C74 0016EBB4  3C 80 80 4B */	lis r4, "__vt__19Iterator<8CollPart>"@ha
/* 80171C78 0016EBB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80171C7C 0016EBBC  38 00 00 00 */	li r0, 0
/* 80171C80 0016EBC0  38 84 22 E4 */	addi r4, r4, "__vt__19Iterator<8CollPart>"@l
/* 80171C84 0016EBC4  28 00 00 00 */	cmplwi r0, 0
/* 80171C88 0016EBC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80171C8C 0016EBCC  90 81 00 08 */	stw r4, 8(r1)
/* 80171C90 0016EBD0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80171C94 0016EBD4  90 61 00 10 */	stw r3, 0x10(r1)
/* 80171C98 0016EBD8  40 82 00 1C */	bne .L_80171CB4
/* 80171C9C 0016EBDC  81 83 00 00 */	lwz r12, 0(r3)
/* 80171CA0 0016EBE0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80171CA4 0016EBE4  7D 89 03 A6 */	mtctr r12
/* 80171CA8 0016EBE8  4E 80 04 21 */	bctrl 
/* 80171CAC 0016EBEC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171CB0 0016EBF0  48 00 01 70 */	b .L_80171E20
.L_80171CB4:
/* 80171CB4 0016EBF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80171CB8 0016EBF8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80171CBC 0016EBFC  7D 89 03 A6 */	mtctr r12
/* 80171CC0 0016EC00  4E 80 04 21 */	bctrl 
/* 80171CC4 0016EC04  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171CC8 0016EC08  48 00 00 58 */	b .L_80171D20
.L_80171CCC:
/* 80171CCC 0016EC0C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171CD0 0016EC10  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171CD4 0016EC14  81 83 00 00 */	lwz r12, 0(r3)
/* 80171CD8 0016EC18  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171CDC 0016EC1C  7D 89 03 A6 */	mtctr r12
/* 80171CE0 0016EC20  4E 80 04 21 */	bctrl 
/* 80171CE4 0016EC24  7C 64 1B 78 */	mr r4, r3
/* 80171CE8 0016EC28  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171CEC 0016EC2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171CF0 0016EC30  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171CF4 0016EC34  7D 89 03 A6 */	mtctr r12
/* 80171CF8 0016EC38  4E 80 04 21 */	bctrl 
/* 80171CFC 0016EC3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171D00 0016EC40  40 82 01 20 */	bne .L_80171E20
/* 80171D04 0016EC44  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171D08 0016EC48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171D0C 0016EC4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80171D10 0016EC50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171D14 0016EC54  7D 89 03 A6 */	mtctr r12
/* 80171D18 0016EC58  4E 80 04 21 */	bctrl 
/* 80171D1C 0016EC5C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171D20:
/* 80171D20 0016EC60  81 81 00 08 */	lwz r12, 8(r1)
/* 80171D24 0016EC64  38 61 00 08 */	addi r3, r1, 8
/* 80171D28 0016EC68  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171D2C 0016EC6C  7D 89 03 A6 */	mtctr r12
/* 80171D30 0016EC70  4E 80 04 21 */	bctrl 
/* 80171D34 0016EC74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171D38 0016EC78  41 82 FF 94 */	beq .L_80171CCC
/* 80171D3C 0016EC7C  48 00 00 E4 */	b .L_80171E20
.L_80171D40:
/* 80171D40 0016EC80  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171D44 0016EC84  81 83 00 00 */	lwz r12, 0(r3)
/* 80171D48 0016EC88  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171D4C 0016EC8C  7D 89 03 A6 */	mtctr r12
/* 80171D50 0016EC90  4E 80 04 21 */	bctrl 
/* 80171D54 0016EC94  81 83 00 00 */	lwz r12, 0(r3)
/* 80171D58 0016EC98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80171D5C 0016EC9C  7D 89 03 A6 */	mtctr r12
/* 80171D60 0016ECA0  4E 80 04 21 */	bctrl 
/* 80171D64 0016ECA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80171D68 0016ECA8  28 00 00 00 */	cmplwi r0, 0
/* 80171D6C 0016ECAC  40 82 00 24 */	bne .L_80171D90
/* 80171D70 0016ECB0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171D74 0016ECB4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171D78 0016ECB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80171D7C 0016ECBC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171D80 0016ECC0  7D 89 03 A6 */	mtctr r12
/* 80171D84 0016ECC4  4E 80 04 21 */	bctrl 
/* 80171D88 0016ECC8  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171D8C 0016ECCC  48 00 00 94 */	b .L_80171E20
.L_80171D90:
/* 80171D90 0016ECD0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171D94 0016ECD4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171D98 0016ECD8  81 83 00 00 */	lwz r12, 0(r3)
/* 80171D9C 0016ECDC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171DA0 0016ECE0  7D 89 03 A6 */	mtctr r12
/* 80171DA4 0016ECE4  4E 80 04 21 */	bctrl 
/* 80171DA8 0016ECE8  90 61 00 0C */	stw r3, 0xc(r1)
/* 80171DAC 0016ECEC  48 00 00 58 */	b .L_80171E04
.L_80171DB0:
/* 80171DB0 0016ECF0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171DB4 0016ECF4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171DB8 0016ECF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80171DBC 0016ECFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80171DC0 0016ED00  7D 89 03 A6 */	mtctr r12
/* 80171DC4 0016ED04  4E 80 04 21 */	bctrl 
/* 80171DC8 0016ED08  7C 64 1B 78 */	mr r4, r3
/* 80171DCC 0016ED0C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80171DD0 0016ED10  81 83 00 00 */	lwz r12, 0(r3)
/* 80171DD4 0016ED14  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171DD8 0016ED18  7D 89 03 A6 */	mtctr r12
/* 80171DDC 0016ED1C  4E 80 04 21 */	bctrl 
/* 80171DE0 0016ED20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171DE4 0016ED24  40 82 00 3C */	bne .L_80171E20
/* 80171DE8 0016ED28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171DEC 0016ED2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171DF0 0016ED30  81 83 00 00 */	lwz r12, 0(r3)
/* 80171DF4 0016ED34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80171DF8 0016ED38  7D 89 03 A6 */	mtctr r12
/* 80171DFC 0016ED3C  4E 80 04 21 */	bctrl 
/* 80171E00 0016ED40  90 61 00 0C */	stw r3, 0xc(r1)
.L_80171E04:
/* 80171E04 0016ED44  81 81 00 08 */	lwz r12, 8(r1)
/* 80171E08 0016ED48  38 61 00 08 */	addi r3, r1, 8
/* 80171E0C 0016ED4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171E10 0016ED50  7D 89 03 A6 */	mtctr r12
/* 80171E14 0016ED54  4E 80 04 21 */	bctrl 
/* 80171E18 0016ED58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80171E1C 0016ED5C  41 82 FF 94 */	beq .L_80171DB0
.L_80171E20:
/* 80171E20 0016ED60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80171E24 0016ED64  81 83 00 00 */	lwz r12, 0(r3)
/* 80171E28 0016ED68  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80171E2C 0016ED6C  7D 89 03 A6 */	mtctr r12
/* 80171E30 0016ED70  4E 80 04 21 */	bctrl 
/* 80171E34 0016ED74  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80171E38 0016ED78  7C 04 18 40 */	cmplw r4, r3
/* 80171E3C 0016ED7C  40 82 FF 04 */	bne .L_80171D40
/* 80171E40 0016ED80  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80171E44 0016ED84  7C 08 03 A6 */	mtlr r0
/* 80171E48 0016ED88  38 21 00 20 */	addi r1, r1, 0x20
/* 80171E4C 0016ED8C  4E 80 00 20 */	blr 
.endfn "doAnimation__20ObjectMgr<8CollPart>Fv"

.fn "__ct__24MonoObjectMgr<8CollPart>Fv", weak
/* 80171E50 0016ED90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80171E54 0016ED94  7C 08 02 A6 */	mflr r0
/* 80171E58 0016ED98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80171E5C 0016ED9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80171E60 0016EDA0  7C 7F 1B 78 */	mr r31, r3
/* 80171E64 0016EDA4  48 29 F5 2D */	bl __ct__5CNodeFv
/* 80171E68 0016EDA8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80171E6C 0016EDAC  3C 60 80 4B */	lis r3, "__vt__20Container<8CollPart>"@ha
/* 80171E70 0016EDB0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80171E74 0016EDB4  3C C0 80 4B */	lis r6, __vt__16GenericObjectMgr@ha
/* 80171E78 0016EDB8  90 1F 00 00 */	stw r0, 0(r31)
/* 80171E7C 0016EDBC  38 03 1D 80 */	addi r0, r3, "__vt__20Container<8CollPart>"@l
/* 80171E80 0016EDC0  3C 80 80 4B */	lis r4, "__vt__20ObjectMgr<8CollPart>"@ha
/* 80171E84 0016EDC4  3C 60 80 4B */	lis r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
/* 80171E88 0016EDC8  90 1F 00 00 */	stw r0, 0(r31)
/* 80171E8C 0016EDCC  39 00 00 00 */	li r8, 0
/* 80171E90 0016EDD0  38 E4 1D AC */	addi r7, r4, "__vt__20ObjectMgr<8CollPart>"@l
/* 80171E94 0016EDD4  38 A3 1E 28 */	addi r5, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
/* 80171E98 0016EDD8  99 1F 00 18 */	stb r8, 0x18(r31)
/* 80171E9C 0016EDDC  38 06 B5 F0 */	addi r0, r6, __vt__16GenericObjectMgr@l
/* 80171EA0 0016EDE0  38 C7 00 2C */	addi r6, r7, 0x2c
/* 80171EA4 0016EDE4  38 85 00 2C */	addi r4, r5, 0x2c
/* 80171EA8 0016EDE8  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80171EAC 0016EDEC  38 00 00 01 */	li r0, 1
/* 80171EB0 0016EDF0  7F E3 FB 78 */	mr r3, r31
/* 80171EB4 0016EDF4  90 FF 00 00 */	stw r7, 0(r31)
/* 80171EB8 0016EDF8  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 80171EBC 0016EDFC  90 BF 00 00 */	stw r5, 0(r31)
/* 80171EC0 0016EE00  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 80171EC4 0016EE04  98 1F 00 18 */	stb r0, 0x18(r31)
/* 80171EC8 0016EE08  91 1F 00 24 */	stw r8, 0x24(r31)
/* 80171ECC 0016EE0C  91 1F 00 20 */	stw r8, 0x20(r31)
/* 80171ED0 0016EE10  91 1F 00 28 */	stw r8, 0x28(r31)
/* 80171ED4 0016EE14  91 1F 00 2C */	stw r8, 0x2c(r31)
/* 80171ED8 0016EE18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80171EDC 0016EE1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80171EE0 0016EE20  7C 08 03 A6 */	mtlr r0
/* 80171EE4 0016EE24  38 21 00 10 */	addi r1, r1, 0x10
/* 80171EE8 0016EE28  4E 80 00 20 */	blr 
.endfn "__ct__24MonoObjectMgr<8CollPart>Fv"

.fn "transit__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg", weak
/* 80171EEC 0016EE2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80171EF0 0016EE30  7C 08 02 A6 */	mflr r0
/* 80171EF4 0016EE34  90 01 00 24 */	stw r0, 0x24(r1)
/* 80171EF8 0016EE38  54 A0 10 3A */	slwi r0, r5, 2
/* 80171EFC 0016EE3C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80171F00 0016EE40  7C 7B 1B 78 */	mr r27, r3
/* 80171F04 0016EE44  7C 9C 23 78 */	mr r28, r4
/* 80171F08 0016EE48  7C DD 33 78 */	mr r29, r6
/* 80171F0C 0016EE4C  83 C4 03 CC */	lwz r30, 0x3cc(r4)
/* 80171F10 0016EE50  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80171F14 0016EE54  28 1E 00 00 */	cmplwi r30, 0
/* 80171F18 0016EE58  7F E3 00 2E */	lwzx r31, r3, r0
/* 80171F1C 0016EE5C  41 82 00 20 */	beq .L_80171F3C
/* 80171F20 0016EE60  7F C3 F3 78 */	mr r3, r30
/* 80171F24 0016EE64  81 9E 00 00 */	lwz r12, 0(r30)
/* 80171F28 0016EE68  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80171F2C 0016EE6C  7D 89 03 A6 */	mtctr r12
/* 80171F30 0016EE70  4E 80 04 21 */	bctrl 
/* 80171F34 0016EE74  80 1E 00 04 */	lwz r0, 4(r30)
/* 80171F38 0016EE78  90 1B 00 18 */	stw r0, 0x18(r27)
.L_80171F3C:
/* 80171F3C 0016EE7C  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 80171F40 0016EE80  7C 1F 00 00 */	cmpw r31, r0
/* 80171F44 0016EE84  41 80 00 08 */	blt .L_80171F4C
.L_80171F48:
/* 80171F48 0016EE88  48 00 00 00 */	b .L_80171F48
.L_80171F4C:
/* 80171F4C 0016EE8C  80 7B 00 04 */	lwz r3, 4(r27)
/* 80171F50 0016EE90  57 E0 10 3A */	slwi r0, r31, 2
/* 80171F54 0016EE94  7F 84 E3 78 */	mr r4, r28
/* 80171F58 0016EE98  7F A5 EB 78 */	mr r5, r29
/* 80171F5C 0016EE9C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80171F60 0016EEA0  90 7C 03 CC */	stw r3, 0x3cc(r28)
/* 80171F64 0016EEA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80171F68 0016EEA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80171F6C 0016EEAC  7D 89 03 A6 */	mtctr r12
/* 80171F70 0016EEB0  4E 80 04 21 */	bctrl 
/* 80171F74 0016EEB4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80171F78 0016EEB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80171F7C 0016EEBC  7C 08 03 A6 */	mtlr r0
/* 80171F80 0016EEC0  38 21 00 20 */	addi r1, r1, 0x20
/* 80171F84 0016EEC4  4E 80 00 20 */	blr 
.endfn "transit__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"

.fn "init__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletPQ24Game8StateArg", weak
/* 80171F88 0016EEC8  4E 80 00 20 */	blr 
.endfn "init__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletPQ24Game8StateArg"

.fn "cleanup__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet", weak
/* 80171F8C 0016EECC  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"

.fn "getCurrID__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet", weak
/* 80171F90 0016EED0  80 64 03 CC */	lwz r3, 0x3cc(r4)
/* 80171F94 0016EED4  28 03 00 00 */	cmplwi r3, 0
/* 80171F98 0016EED8  41 82 00 0C */	beq .L_80171FA4
/* 80171F9C 0016EEDC  80 63 00 04 */	lwz r3, 4(r3)
/* 80171FA0 0016EEE0  4E 80 00 20 */	blr 
.L_80171FA4:
/* 80171FA4 0016EEE4  38 60 FF FF */	li r3, -1
/* 80171FA8 0016EEE8  4E 80 00 20 */	blr 
.endfn "getCurrID__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"

.fn "exec__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet", weak
/* 80171FAC 0016EEEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80171FB0 0016EEF0  7C 08 02 A6 */	mflr r0
/* 80171FB4 0016EEF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80171FB8 0016EEF8  80 64 03 CC */	lwz r3, 0x3cc(r4)
/* 80171FBC 0016EEFC  28 03 00 00 */	cmplwi r3, 0
/* 80171FC0 0016EF00  41 82 00 14 */	beq .L_80171FD4
/* 80171FC4 0016EF04  81 83 00 00 */	lwz r12, 0(r3)
/* 80171FC8 0016EF08  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80171FCC 0016EF0C  7D 89 03 A6 */	mtctr r12
/* 80171FD0 0016EF10  4E 80 04 21 */	bctrl 
.L_80171FD4:
/* 80171FD4 0016EF14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80171FD8 0016EF18  7C 08 03 A6 */	mtlr r0
/* 80171FDC 0016EF1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80171FE0 0016EF20  4E 80 00 20 */	blr 
.endfn "exec__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"

.fn "exec__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet", weak
/* 80171FE4 0016EF24  4E 80 00 20 */	blr 
.endfn "exec__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"

.fn "resetMgrAndResources__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv", weak
/* 80171FE8 0016EF28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80171FEC 0016EF2C  7C 08 02 A6 */	mflr r0
/* 80171FF0 0016EF30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80171FF4 0016EF34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80171FF8 0016EF38  7C 7F 1B 78 */	mr r31, r3
/* 80171FFC 0016EF3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80172000 0016EF40  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80172004 0016EF44  7D 89 03 A6 */	mtctr r12
/* 80172008 0016EF48  4E 80 04 21 */	bctrl 
/* 8017200C 0016EF4C  39 00 00 00 */	li r8, 0
/* 80172010 0016EF50  39 20 00 00 */	li r9, 0
/* 80172014 0016EF54  7D 07 43 78 */	mr r7, r8
/* 80172018 0016EF58  7D 06 43 78 */	mr r6, r8
/* 8017201C 0016EF5C  7D 05 43 78 */	mr r5, r8
/* 80172020 0016EF60  7D 04 43 78 */	mr r4, r8
/* 80172024 0016EF64  48 00 00 2C */	b .L_80172050
.L_80172028:
/* 80172028 0016EF68  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8017202C 0016EF6C  7C E3 41 2E */	stwx r7, r3, r8
/* 80172030 0016EF70  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80172034 0016EF74  7C C3 41 2E */	stwx r6, r3, r8
/* 80172038 0016EF78  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8017203C 0016EF7C  7C A3 41 2E */	stwx r5, r3, r8
/* 80172040 0016EF80  39 08 00 04 */	addi r8, r8, 4
/* 80172044 0016EF84  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 80172048 0016EF88  7C 83 49 AE */	stbx r4, r3, r9
/* 8017204C 0016EF8C  39 29 00 01 */	addi r9, r9, 1
.L_80172050:
/* 80172050 0016EF90  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 80172054 0016EF94  7C 09 00 00 */	cmpw r9, r0
/* 80172058 0016EF98  41 80 FF D0 */	blt .L_80172028
/* 8017205C 0016EF9C  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 80172060 0016EFA0  28 00 00 00 */	cmplwi r0, 0
/* 80172064 0016EFA4  41 82 00 0C */	beq .L_80172070
/* 80172068 0016EFA8  38 00 00 00 */	li r0, 0
/* 8017206C 0016EFAC  90 1F 00 48 */	stw r0, 0x48(r31)
.L_80172070:
/* 80172070 0016EFB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80172074 0016EFB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80172078 0016EFB8  7C 08 03 A6 */	mtlr r0
/* 8017207C 0016EFBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80172080 0016EFC0  4E 80 00 20 */	blr 
.endfn "resetMgrAndResources__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"

.fn "resetMgr__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv", weak
/* 80172084 0016EFC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80172088 0016EFC8  7C 08 02 A6 */	mflr r0
/* 8017208C 0016EFCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172090 0016EFD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80172094 0016EFD4  7C 7F 1B 78 */	mr r31, r3
/* 80172098 0016EFD8  38 7F 00 70 */	addi r3, r31, 0x70
/* 8017209C 0016EFDC  81 9F 00 70 */	lwz r12, 0x70(r31)
/* 801720A0 0016EFE0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 801720A4 0016EFE4  7D 89 03 A6 */	mtctr r12
/* 801720A8 0016EFE8  4E 80 04 21 */	bctrl 
/* 801720AC 0016EFEC  38 7F 00 18 */	addi r3, r31, 0x18
/* 801720B0 0016EFF0  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 801720B4 0016EFF4  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 801720B8 0016EFF8  7D 89 03 A6 */	mtctr r12
/* 801720BC 0016EFFC  4E 80 04 21 */	bctrl 
/* 801720C0 0016F000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801720C4 0016F004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801720C8 0016F008  7C 08 03 A6 */	mtlr r0
/* 801720CC 0016F00C  38 21 00 10 */	addi r1, r1, 0x10
/* 801720D0 0016F010  4E 80 00 20 */	blr 
.endfn "resetMgr__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fv"

.fn "resetMgrAndResources__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv", weak
/* 801720D4 0016F014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801720D8 0016F018  7C 08 02 A6 */	mflr r0
/* 801720DC 0016F01C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801720E0 0016F020  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801720E4 0016F024  7C 7F 1B 78 */	mr r31, r3
/* 801720E8 0016F028  81 83 00 00 */	lwz r12, 0(r3)
/* 801720EC 0016F02C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801720F0 0016F030  7D 89 03 A6 */	mtctr r12
/* 801720F4 0016F034  4E 80 04 21 */	bctrl 
/* 801720F8 0016F038  39 00 00 00 */	li r8, 0
/* 801720FC 0016F03C  39 20 00 00 */	li r9, 0
/* 80172100 0016F040  7D 07 43 78 */	mr r7, r8
/* 80172104 0016F044  7D 06 43 78 */	mr r6, r8
/* 80172108 0016F048  7D 05 43 78 */	mr r5, r8
/* 8017210C 0016F04C  7D 04 43 78 */	mr r4, r8
/* 80172110 0016F050  48 00 00 2C */	b .L_8017213C
.L_80172114:
/* 80172114 0016F054  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80172118 0016F058  7C E3 41 2E */	stwx r7, r3, r8
/* 8017211C 0016F05C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80172120 0016F060  7C C3 41 2E */	stwx r6, r3, r8
/* 80172124 0016F064  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80172128 0016F068  7C A3 41 2E */	stwx r5, r3, r8
/* 8017212C 0016F06C  39 08 00 04 */	addi r8, r8, 4
/* 80172130 0016F070  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 80172134 0016F074  7C 83 49 AE */	stbx r4, r3, r9
/* 80172138 0016F078  39 29 00 01 */	addi r9, r9, 1
.L_8017213C:
/* 8017213C 0016F07C  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 80172140 0016F080  7C 09 00 00 */	cmpw r9, r0
/* 80172144 0016F084  41 80 FF D0 */	blt .L_80172114
/* 80172148 0016F088  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 8017214C 0016F08C  28 00 00 00 */	cmplwi r0, 0
/* 80172150 0016F090  41 82 00 0C */	beq .L_8017215C
/* 80172154 0016F094  38 00 00 00 */	li r0, 0
/* 80172158 0016F098  90 1F 00 48 */	stw r0, 0x48(r31)
.L_8017215C:
/* 8017215C 0016F09C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80172160 0016F0A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80172164 0016F0A4  7C 08 03 A6 */	mtlr r0
/* 80172168 0016F0A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017216C 0016F0AC  4E 80 00 20 */	blr 
.endfn "resetMgrAndResources__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"

.fn "resetMgr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv", weak
/* 80172170 0016F0B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80172174 0016F0B4  7C 08 02 A6 */	mflr r0
/* 80172178 0016F0B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017217C 0016F0BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80172180 0016F0C0  7C 7F 1B 78 */	mr r31, r3
/* 80172184 0016F0C4  38 7F 00 70 */	addi r3, r31, 0x70
/* 80172188 0016F0C8  81 9F 00 70 */	lwz r12, 0x70(r31)
/* 8017218C 0016F0CC  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80172190 0016F0D0  7D 89 03 A6 */	mtctr r12
/* 80172194 0016F0D4  4E 80 04 21 */	bctrl 
/* 80172198 0016F0D8  38 7F 00 18 */	addi r3, r31, 0x18
/* 8017219C 0016F0DC  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 801721A0 0016F0E0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 801721A4 0016F0E4  7D 89 03 A6 */	mtctr r12
/* 801721A8 0016F0E8  4E 80 04 21 */	bctrl 
/* 801721AC 0016F0EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801721B0 0016F0F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801721B4 0016F0F4  7C 08 03 A6 */	mtlr r0
/* 801721B8 0016F0F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801721BC 0016F0FC  4E 80 00 20 */	blr 
.endfn "resetMgr__Q24Game46FixedSizePelletMgr<Q34Game10PelletItem6Object>Fv"

.fn "__ml__19Iterator<8CollPart>Fv", weak
/* 801721C0 0016F100  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801721C4 0016F104  7C 08 02 A6 */	mflr r0
/* 801721C8 0016F108  7C 64 1B 78 */	mr r4, r3
/* 801721CC 0016F10C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801721D0 0016F110  80 63 00 08 */	lwz r3, 8(r3)
/* 801721D4 0016F114  80 84 00 04 */	lwz r4, 4(r4)
/* 801721D8 0016F118  81 83 00 00 */	lwz r12, 0(r3)
/* 801721DC 0016F11C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801721E0 0016F120  7D 89 03 A6 */	mtctr r12
/* 801721E4 0016F124  4E 80 04 21 */	bctrl 
/* 801721E8 0016F128  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801721EC 0016F12C  7C 08 03 A6 */	mtlr r0
/* 801721F0 0016F130  38 21 00 10 */	addi r1, r1, 0x10
/* 801721F4 0016F134  4E 80 00 20 */	blr 
.endfn "__ml__19Iterator<8CollPart>Fv"

.fn "next__19Iterator<8CollPart>Fv", weak
/* 801721F8 0016F138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801721FC 0016F13C  7C 08 02 A6 */	mflr r0
/* 80172200 0016F140  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172204 0016F144  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80172208 0016F148  7C 7F 1B 78 */	mr r31, r3
/* 8017220C 0016F14C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80172210 0016F150  28 00 00 00 */	cmplwi r0, 0
/* 80172214 0016F154  40 82 00 24 */	bne .L_80172238
/* 80172218 0016F158  80 7F 00 08 */	lwz r3, 8(r31)
/* 8017221C 0016F15C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80172220 0016F160  81 83 00 00 */	lwz r12, 0(r3)
/* 80172224 0016F164  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80172228 0016F168  7D 89 03 A6 */	mtctr r12
/* 8017222C 0016F16C  4E 80 04 21 */	bctrl 
/* 80172230 0016F170  90 7F 00 04 */	stw r3, 4(r31)
/* 80172234 0016F174  48 00 00 94 */	b .L_801722C8
.L_80172238:
/* 80172238 0016F178  80 7F 00 08 */	lwz r3, 8(r31)
/* 8017223C 0016F17C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80172240 0016F180  81 83 00 00 */	lwz r12, 0(r3)
/* 80172244 0016F184  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80172248 0016F188  7D 89 03 A6 */	mtctr r12
/* 8017224C 0016F18C  4E 80 04 21 */	bctrl 
/* 80172250 0016F190  90 7F 00 04 */	stw r3, 4(r31)
/* 80172254 0016F194  48 00 00 58 */	b .L_801722AC
.L_80172258:
/* 80172258 0016F198  80 7F 00 08 */	lwz r3, 8(r31)
/* 8017225C 0016F19C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80172260 0016F1A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80172264 0016F1A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80172268 0016F1A8  7D 89 03 A6 */	mtctr r12
/* 8017226C 0016F1AC  4E 80 04 21 */	bctrl 
/* 80172270 0016F1B0  7C 64 1B 78 */	mr r4, r3
/* 80172274 0016F1B4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80172278 0016F1B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017227C 0016F1BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80172280 0016F1C0  7D 89 03 A6 */	mtctr r12
/* 80172284 0016F1C4  4E 80 04 21 */	bctrl 
/* 80172288 0016F1C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017228C 0016F1CC  40 82 00 3C */	bne .L_801722C8
/* 80172290 0016F1D0  80 7F 00 08 */	lwz r3, 8(r31)
/* 80172294 0016F1D4  80 9F 00 04 */	lwz r4, 4(r31)
/* 80172298 0016F1D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017229C 0016F1DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801722A0 0016F1E0  7D 89 03 A6 */	mtctr r12
/* 801722A4 0016F1E4  4E 80 04 21 */	bctrl 
/* 801722A8 0016F1E8  90 7F 00 04 */	stw r3, 4(r31)
.L_801722AC:
/* 801722AC 0016F1EC  7F E3 FB 78 */	mr r3, r31
/* 801722B0 0016F1F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801722B4 0016F1F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801722B8 0016F1F8  7D 89 03 A6 */	mtctr r12
/* 801722BC 0016F1FC  4E 80 04 21 */	bctrl 
/* 801722C0 0016F200  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801722C4 0016F204  41 82 FF 94 */	beq .L_80172258
.L_801722C8:
/* 801722C8 0016F208  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801722CC 0016F20C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801722D0 0016F210  7C 08 03 A6 */	mtlr r0
/* 801722D4 0016F214  38 21 00 10 */	addi r1, r1, 0x10
/* 801722D8 0016F218  4E 80 00 20 */	blr 
.endfn "next__19Iterator<8CollPart>Fv"

.fn "first__19Iterator<8CollPart>Fv", weak
/* 801722DC 0016F21C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801722E0 0016F220  7C 08 02 A6 */	mflr r0
/* 801722E4 0016F224  90 01 00 14 */	stw r0, 0x14(r1)
/* 801722E8 0016F228  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801722EC 0016F22C  7C 7F 1B 78 */	mr r31, r3
/* 801722F0 0016F230  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801722F4 0016F234  28 00 00 00 */	cmplwi r0, 0
/* 801722F8 0016F238  40 82 00 20 */	bne .L_80172318
/* 801722FC 0016F23C  80 7F 00 08 */	lwz r3, 8(r31)
/* 80172300 0016F240  81 83 00 00 */	lwz r12, 0(r3)
/* 80172304 0016F244  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80172308 0016F248  7D 89 03 A6 */	mtctr r12
/* 8017230C 0016F24C  4E 80 04 21 */	bctrl 
/* 80172310 0016F250  90 7F 00 04 */	stw r3, 4(r31)
/* 80172314 0016F254  48 00 00 90 */	b .L_801723A4
.L_80172318:
/* 80172318 0016F258  80 7F 00 08 */	lwz r3, 8(r31)
/* 8017231C 0016F25C  81 83 00 00 */	lwz r12, 0(r3)
/* 80172320 0016F260  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80172324 0016F264  7D 89 03 A6 */	mtctr r12
/* 80172328 0016F268  4E 80 04 21 */	bctrl 
/* 8017232C 0016F26C  90 7F 00 04 */	stw r3, 4(r31)
/* 80172330 0016F270  48 00 00 58 */	b .L_80172388
.L_80172334:
/* 80172334 0016F274  80 7F 00 08 */	lwz r3, 8(r31)
/* 80172338 0016F278  80 9F 00 04 */	lwz r4, 4(r31)
/* 8017233C 0016F27C  81 83 00 00 */	lwz r12, 0(r3)
/* 80172340 0016F280  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80172344 0016F284  7D 89 03 A6 */	mtctr r12
/* 80172348 0016F288  4E 80 04 21 */	bctrl 
/* 8017234C 0016F28C  7C 64 1B 78 */	mr r4, r3
/* 80172350 0016F290  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80172354 0016F294  81 83 00 00 */	lwz r12, 0(r3)
/* 80172358 0016F298  81 8C 00 08 */	lwz r12, 8(r12)
/* 8017235C 0016F29C  7D 89 03 A6 */	mtctr r12
/* 80172360 0016F2A0  4E 80 04 21 */	bctrl 
/* 80172364 0016F2A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80172368 0016F2A8  40 82 00 3C */	bne .L_801723A4
/* 8017236C 0016F2AC  80 7F 00 08 */	lwz r3, 8(r31)
/* 80172370 0016F2B0  80 9F 00 04 */	lwz r4, 4(r31)
/* 80172374 0016F2B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80172378 0016F2B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017237C 0016F2BC  7D 89 03 A6 */	mtctr r12
/* 80172380 0016F2C0  4E 80 04 21 */	bctrl 
/* 80172384 0016F2C4  90 7F 00 04 */	stw r3, 4(r31)
.L_80172388:
/* 80172388 0016F2C8  7F E3 FB 78 */	mr r3, r31
/* 8017238C 0016F2CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80172390 0016F2D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80172394 0016F2D4  7D 89 03 A6 */	mtctr r12
/* 80172398 0016F2D8  4E 80 04 21 */	bctrl 
/* 8017239C 0016F2DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801723A0 0016F2E0  41 82 FF 94 */	beq .L_80172334
.L_801723A4:
/* 801723A4 0016F2E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801723A8 0016F2E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801723AC 0016F2EC  7C 08 03 A6 */	mtlr r0
/* 801723B0 0016F2F0  38 21 00 10 */	addi r1, r1, 0x10
/* 801723B4 0016F2F4  4E 80 00 20 */	blr 
.endfn "first__19Iterator<8CollPart>Fv"

.fn "resetMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv", weak
/* 801723B8 0016F2F8  38 00 00 00 */	li r0, 0
/* 801723BC 0016F2FC  90 03 00 28 */	stw r0, 0x28(r3)
/* 801723C0 0016F300  90 03 00 24 */	stw r0, 0x24(r3)
/* 801723C4 0016F304  90 03 00 20 */	stw r0, 0x20(r3)
/* 801723C8 0016F308  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801723CC 0016F30C  4E 80 00 20 */	blr 
.endfn "resetMgr__41MonoObjectMgr<Q34Game10PelletItem6Object>Fv"

.fn "resetMgr__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv", weak
/* 801723D0 0016F310  38 00 00 00 */	li r0, 0
/* 801723D4 0016F314  90 03 00 28 */	stw r0, 0x28(r3)
/* 801723D8 0016F318  90 03 00 24 */	stw r0, 0x24(r3)
/* 801723DC 0016F31C  90 03 00 20 */	stw r0, 0x20(r3)
/* 801723E0 0016F320  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801723E4 0016F324  4E 80 00 20 */	blr 
.endfn "resetMgr__44MonoObjectMgr<Q34Game13PelletOtakara6Object>Fv"

.fn __sinit_pelletMgr_cpp, local
/* 801723E8 0016F328  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801723EC 0016F32C  38 00 FF FF */	li r0, -1
/* 801723F0 0016F330  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801723F4 0016F334  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 801723F8 0016F338  90 0D 93 18 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 801723FC 0016F33C  D4 03 1A 60 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80172400 0016F340  D0 0D 93 1C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80172404 0016F344  D0 03 00 04 */	stfs f0, 4(r3)
/* 80172408 0016F348  D0 03 00 08 */	stfs f0, 8(r3)
/* 8017240C 0016F34C  4E 80 00 20 */	blr 
.endfn __sinit_pelletMgr_cpp

.fn "@16@__dt__Q23PSM9EventBaseFv", weak
/* 80172410 0016F350  38 63 FF F0 */	addi r3, r3, -16
/* 80172414 0016F354  4B FF DC A4 */	b __dt__Q23PSM9EventBaseFv
.endfn "@16@__dt__Q23PSM9EventBaseFv"

.fn "@48@startSound__Q23PSM11CreatureObjFUcUlUl", weak
/* 80172418 0016F358  38 63 FF D0 */	addi r3, r3, -48
/* 8017241C 0016F35C  48 2E B5 68 */	b startSound__Q23PSM11CreatureObjFUcUlUl
.endfn "@48@startSound__Q23PSM11CreatureObjFUcUlUl"

.fn "@48@startSound__Q23PSM11CreatureObjFPP8JAISoundUlUl", weak
/* 80172420 0016F360  38 63 FF D0 */	addi r3, r3, -48
/* 80172424 0016F364  48 2E B5 EC */	b startSound__Q23PSM11CreatureObjFPP8JAISoundUlUl
.endfn "@48@startSound__Q23PSM11CreatureObjFPP8JAISoundUlUl"

.fn "@48@startSound__Q23PSM11CreatureObjFUlUl", weak
/* 80172428 0016F368  38 63 FF D0 */	addi r3, r3, -48
/* 8017242C 0016F36C  48 2E B5 1C */	b startSound__Q23PSM11CreatureObjFUlUl
.endfn "@48@startSound__Q23PSM11CreatureObjFUlUl"

.fn "@48@__dt__Q23PSM9EventBaseFv", weak
/* 80172430 0016F370  38 63 FF D0 */	addi r3, r3, -48
/* 80172434 0016F374  4B FF DC 84 */	b __dt__Q23PSM9EventBaseFv
.endfn "@48@__dt__Q23PSM9EventBaseFv"

.fn "@788@onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent", weak
/* 80172438 0016F378  38 63 FC EC */	addi r3, r3, -788
/* 8017243C 0016F37C  4B FF 7F 24 */	b onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent
.endfn "@788@onKeyEvent__Q24Game6PelletFRCQ28SysShape8KeyEvent"

.fn "@792@getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam", weak
/* 80172440 0016F380  38 63 FC E8 */	addi r3, r3, -792
/* 80172444 0016F384  4B FF 59 E4 */	b getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam
.endfn "@792@getCarryInfoParam__Q24Game6PelletFR14CarryInfoParam"

.fn "@28@resetMgr__24MonoObjectMgr<8CollPart>Fv", weak
/* 80172448 0016F388  38 63 FF E4 */	addi r3, r3, -28
/* 8017244C 0016F38C  4B FF E1 A4 */	b "resetMgr__24MonoObjectMgr<8CollPart>Fv"
.endfn "@28@resetMgr__24MonoObjectMgr<8CollPart>Fv"

.fn "@28@doDirectDraw__24MonoObjectMgr<8CollPart>FR8Graphics", weak
/* 80172450 0016F390  38 63 FF E4 */	addi r3, r3, -28
/* 80172454 0016F394  4B FF E1 0C */	b "doDirectDraw__24MonoObjectMgr<8CollPart>FR8Graphics"
.endfn "@28@doDirectDraw__24MonoObjectMgr<8CollPart>FR8Graphics"

.fn "@28@doSimulation__24MonoObjectMgr<8CollPart>Ff", weak
/* 80172458 0016F398  38 63 FF E4 */	addi r3, r3, -28
/* 8017245C 0016F39C  4B FF E0 74 */	b "doSimulation__24MonoObjectMgr<8CollPart>Ff"
.endfn "@28@doSimulation__24MonoObjectMgr<8CollPart>Ff"

.fn "@28@doViewCalc__24MonoObjectMgr<8CollPart>Fv", weak
/* 80172460 0016F3A0  38 63 FF E4 */	addi r3, r3, -28
/* 80172464 0016F3A4  4B FF DF EC */	b "doViewCalc__24MonoObjectMgr<8CollPart>Fv"
.endfn "@28@doViewCalc__24MonoObjectMgr<8CollPart>Fv"

.fn "@28@doSetView__24MonoObjectMgr<8CollPart>Fi", weak
/* 80172468 0016F3A8  38 63 FF E4 */	addi r3, r3, -28
/* 8017246C 0016F3AC  4B FF DF 54 */	b "doSetView__24MonoObjectMgr<8CollPart>Fi"
.endfn "@28@doSetView__24MonoObjectMgr<8CollPart>Fi"

.fn "@28@doEntry__24MonoObjectMgr<8CollPart>Fv", weak
/* 80172470 0016F3B0  38 63 FF E4 */	addi r3, r3, -28
/* 80172474 0016F3B4  4B FF DE CC */	b "doEntry__24MonoObjectMgr<8CollPart>Fv"
.endfn "@28@doEntry__24MonoObjectMgr<8CollPart>Fv"

.fn "@28@doAnimation__24MonoObjectMgr<8CollPart>Fv", weak
/* 80172478 0016F3B8  38 63 FF E4 */	addi r3, r3, -28
/* 8017247C 0016F3BC  4B FF DE 44 */	b "doAnimation__24MonoObjectMgr<8CollPart>Fv"
.endfn "@28@doAnimation__24MonoObjectMgr<8CollPart>Fv"

.fn "@28@doDirectDraw__20ObjectMgr<8CollPart>FR8Graphics", weak
/* 80172480 0016F3C0  38 63 FF E4 */	addi r3, r3, -28
/* 80172484 0016F3C4  4B FF ED F8 */	b "doDirectDraw__20ObjectMgr<8CollPart>FR8Graphics"
.endfn "@28@doDirectDraw__20ObjectMgr<8CollPart>FR8Graphics"

.fn "@28@doSimulation__20ObjectMgr<8CollPart>Ff", weak
/* 80172488 0016F3C8  38 63 FF E4 */	addi r3, r3, -28
/* 8017248C 0016F3CC  4B FF F0 30 */	b "doSimulation__20ObjectMgr<8CollPart>Ff"
.endfn "@28@doSimulation__20ObjectMgr<8CollPart>Ff"

.fn "@28@doViewCalc__20ObjectMgr<8CollPart>Fv", weak
/* 80172490 0016F3D0  38 63 FF E4 */	addi r3, r3, -28
/* 80172494 0016F3D4  4B FF F2 1C */	b "doViewCalc__20ObjectMgr<8CollPart>Fv"
.endfn "@28@doViewCalc__20ObjectMgr<8CollPart>Fv"

.fn "@28@doSetView__20ObjectMgr<8CollPart>Fi", weak
/* 80172498 0016F3D8  38 63 FF E4 */	addi r3, r3, -28
/* 8017249C 0016F3DC  4B FF F3 F8 */	b "doSetView__20ObjectMgr<8CollPart>Fi"
.endfn "@28@doSetView__20ObjectMgr<8CollPart>Fi"

.fn "@28@doEntry__20ObjectMgr<8CollPart>Fv", weak
/* 801724A0 0016F3E0  38 63 FF E4 */	addi r3, r3, -28
/* 801724A4 0016F3E4  4B FF F5 E4 */	b "doEntry__20ObjectMgr<8CollPart>Fv"
.endfn "@28@doEntry__20ObjectMgr<8CollPart>Fv"

.fn "@28@doAnimation__20ObjectMgr<8CollPart>Fv", weak
/* 801724A8 0016F3E8  38 63 FF E4 */	addi r3, r3, -28
/* 801724AC 0016F3EC  4B FF F7 C0 */	b "doAnimation__20ObjectMgr<8CollPart>Fv"
.endfn "@28@doAnimation__20ObjectMgr<8CollPart>Fv"

.fn "@28@doDirectDraw__29ObjectMgr<16GenericObjectMgr>FR8Graphics", weak
/* 801724B0 0016F3F0  38 63 FF E4 */	addi r3, r3, -28
/* 801724B4 0016F3F4  4B FF EB 2C */	b "doDirectDraw__29ObjectMgr<16GenericObjectMgr>FR8Graphics"
.endfn "@28@doDirectDraw__29ObjectMgr<16GenericObjectMgr>FR8Graphics"

.fn "@28@doSimulation__29ObjectMgr<16GenericObjectMgr>Ff", weak
/* 801724B8 0016F3F8  38 63 FF E4 */	addi r3, r3, -28
/* 801724BC 0016F3FC  4B FF E9 30 */	b "doSimulation__29ObjectMgr<16GenericObjectMgr>Ff"
.endfn "@28@doSimulation__29ObjectMgr<16GenericObjectMgr>Ff"

.fn "@28@doViewCalc__29ObjectMgr<16GenericObjectMgr>Fv", weak
/* 801724C0 0016F400  38 63 FF E4 */	addi r3, r3, -28
/* 801724C4 0016F404  4B FF E7 44 */	b "doViewCalc__29ObjectMgr<16GenericObjectMgr>Fv"
.endfn "@28@doViewCalc__29ObjectMgr<16GenericObjectMgr>Fv"

.fn "@28@doSetView__29ObjectMgr<16GenericObjectMgr>Fi", weak
/* 801724C8 0016F408  38 63 FF E4 */	addi r3, r3, -28
/* 801724CC 0016F40C  4B FF E5 48 */	b "doSetView__29ObjectMgr<16GenericObjectMgr>Fi"
.endfn "@28@doSetView__29ObjectMgr<16GenericObjectMgr>Fi"

.fn "@28@doEntry__29ObjectMgr<16GenericObjectMgr>Fv", weak
/* 801724D0 0016F410  38 63 FF E4 */	addi r3, r3, -28
/* 801724D4 0016F414  4B FF E3 5C */	b "doEntry__29ObjectMgr<16GenericObjectMgr>Fv"
.endfn "@28@doEntry__29ObjectMgr<16GenericObjectMgr>Fv"

.fn "@28@doAnimation__29ObjectMgr<16GenericObjectMgr>Fv", weak
/* 801724D8 0016F418  38 63 FF E4 */	addi r3, r3, -28
/* 801724DC 0016F41C  4B FF E1 70 */	b "doAnimation__29ObjectMgr<16GenericObjectMgr>Fv"
.endfn "@28@doAnimation__29ObjectMgr<16GenericObjectMgr>Fv"

.fn "@28@resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv", weak
/* 801724E0 0016F420  38 63 FF E4 */	addi r3, r3, -28
/* 801724E4 0016F424  4B FF DC EC */	b "resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
.endfn "@28@resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"

.fn "@28@doSimpleDraw__Q24Game9PelletMgrFP8Viewport", weak
/* 801724E8 0016F428  38 63 FF E4 */	addi r3, r3, -28
/* 801724EC 0016F42C  4B FF C4 D4 */	b doSimpleDraw__Q24Game9PelletMgrFP8Viewport
.endfn "@28@doSimpleDraw__Q24Game9PelletMgrFP8Viewport"

.fn "@28@doDirectDraw__Q24Game9PelletMgrFR8Graphics", weak
/* 801724F0 0016F430  38 63 FF E4 */	addi r3, r3, -28
/* 801724F4 0016F434  4B FF C4 C8 */	b doDirectDraw__Q24Game9PelletMgrFR8Graphics
.endfn "@28@doDirectDraw__Q24Game9PelletMgrFR8Graphics"

.fn "@28@doSimulation__Q24Game9PelletMgrFf", weak
/* 801724F8 0016F438  38 63 FF E4 */	addi r3, r3, -28
/* 801724FC 0016F43C  4B FF C2 CC */	b doSimulation__Q24Game9PelletMgrFf
.endfn "@28@doSimulation__Q24Game9PelletMgrFf"

.fn "@28@doViewCalc__Q24Game9PelletMgrFv", weak
/* 80172500 0016F440  38 63 FF E4 */	addi r3, r3, -28
/* 80172504 0016F444  4B FF C0 E0 */	b doViewCalc__Q24Game9PelletMgrFv
.endfn "@28@doViewCalc__Q24Game9PelletMgrFv"

.fn "@28@doSetView__Q24Game9PelletMgrFi", weak
/* 80172508 0016F448  38 63 FF E4 */	addi r3, r3, -28
/* 8017250C 0016F44C  4B FF BE E4 */	b doSetView__Q24Game9PelletMgrFi
.endfn "@28@doSetView__Q24Game9PelletMgrFi"

.fn "@28@doEntry__Q24Game9PelletMgrFv", weak
/* 80172510 0016F450  38 63 FF E4 */	addi r3, r3, -28
/* 80172514 0016F454  4B FF BC F8 */	b doEntry__Q24Game9PelletMgrFv
.endfn "@28@doEntry__Q24Game9PelletMgrFv"

.fn "@28@doAnimation__Q24Game9PelletMgrFv", weak
/* 80172518 0016F458  38 63 FF E4 */	addi r3, r3, -28
/* 8017251C 0016F45C  4B FF BA C0 */	b doAnimation__Q24Game9PelletMgrFv
.endfn "@28@doAnimation__Q24Game9PelletMgrFv"
