.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_itemGate_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80480188, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80480188
.balign 4
.obj lbl_80480194, local
	.asciz "itemGate"
.endobj lbl_80480194
.balign 4
.obj lbl_804801A0, local
	.asciz "itemGate.cpp"
.endobj lbl_804801A0
.balign 4
.obj lbl_804801B0, local
	.asciz "no shape !\n"
.endobj lbl_804801B0
.balign 4
.obj lbl_804801BC, local
	.asciz "P2Assert"
.endobj lbl_804801BC
.balign 4
.obj lbl_804801C8, local
	.asciz "ItemGate"
.endobj lbl_804801C8
.balign 4
.obj lbl_804801D4, local
	.asciz "user/Kando/objects/gates"
.endobj lbl_804801D4
.balign 4
.obj lbl_804801F0, local
	.asciz "gate-arc.szs"
.endobj lbl_804801F0
.balign 4
.obj lbl_80480200, local
	.asciz "gate_soft.bmd"
.endobj lbl_80480200
.balign 4
.obj lbl_80480210, local
	.asciz "gate-texts.szs"
.endobj lbl_80480210
.balign 4
.obj lbl_80480220, local
	.asciz "gateAnimMgr.txt"
.endobj lbl_80480220
.balign 4
.obj lbl_80480230, local
	.asciz "gateColl.txt"
.endobj lbl_80480230
.balign 4
.obj lbl_80480240, local
	.asciz "cent.pla"
.endobj lbl_80480240
.balign 4
.obj lbl_8048024C, local
	.asciz "side.pla"
.endobj lbl_8048024C
.balign 4
.obj lbl_80480258, local
	.asciz "user/Kando/gates/gate-arc.szs"
.endobj lbl_80480258
.balign 4
.obj lbl_80480278, local
	.asciz "gate_soft.brk"
.endobj lbl_80480278
.balign 4
.obj lbl_80480288, local
	.asciz "new Model"
.endobj lbl_80480288
.balign 4
.obj lbl_80480294, local
	.asciz "Platform"
.endobj lbl_80480294
.balign 4
.obj lbl_804802A0, local
	.asciz "Clone-Plat"
.endobj lbl_804802A0
.balign 4
.obj lbl_804802AC, local # Shift-JIS
	.4byte 0x09238389
	.4byte 0x83438374
	.4byte 0x0D0A0000
.endobj lbl_804802AC
.balign 4
.obj lbl_804802B8, local
	.asciz "\t#Color\r\n"
.endobj lbl_804802B8
.balign 4
.obj lbl_804802C4, local
	.asciz "g18_find_gate"
.endobj lbl_804802C4
.balign 4
.obj lbl_804802D4, local # Shift-JIS
	.4byte 0x93648C82
	.4byte 0x8351815B
	.4byte 0x83670000
.endobj lbl_804802D4
.balign 4
.obj lbl_804802E0, local
	.asciz "ItemDengekiGate"
.endobj lbl_804802E0
.balign 4
.obj lbl_804802F0, local
	.asciz "e-gate-arc.szs"
.endobj lbl_804802F0
.balign 4
.obj lbl_80480300, local
	.asciz "e-gate.bmd"
.endobj lbl_80480300
.balign 4
.obj lbl_8048030C, local
	.asciz "e-gate-texts.szs"
.endobj lbl_8048030C
.balign 4
.obj lbl_80480320, local
	.asciz "e-animmgr.txt"
.endobj lbl_80480320
.balign 4
.obj lbl_80480330, local
	.asciz "e-coll.txt"
.endobj lbl_80480330
.balign 4
.obj lbl_8048033C, local
	.asciz "e-cent.pla"
.endobj lbl_8048033C
.balign 4
.obj lbl_80480348, local
	.asciz "e-side.pla"
.endobj lbl_80480348
.balign 4
.obj lbl_80480354, local
	.asciz "user/Kando/gates/e-gate-arc.szs"
.endobj lbl_80480354
.balign 4
.obj lbl_80480374, local
	.asciz "e-gate.btk"
.endobj lbl_80480374
.balign 4
.obj lbl_80480380, local
	.asciz "CreatureKillArg"
.endobj lbl_80480380

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.balign 4
.obj __vt__Q34Game15ItemDengekiGate3Mgr, global
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "doEntry__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "doSetView__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fi"
	.4byte "doViewCalc__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "doSimulation__Q24Game29NodeItemMgr<Q24Game8ItemGate>Ff"
	.4byte "doDirectDraw__Q24Game29NodeItemMgr<Q24Game8ItemGate>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__Q24Game11BaseItemMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "initDependency__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "killAll__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
	.4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
	.4byte onLoadResources__Q24Game11BaseItemMgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte generatorGetID__Q34Game15ItemDengekiGate3MgrFv
	.4byte "generatorBirth__Q34Game15ItemDengekiGate3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q34Game15ItemDengekiGate3MgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q34Game15ItemDengekiGate3MgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q34Game15ItemDengekiGate3MgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q34Game15ItemDengekiGate3MgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game15ItemDengekiGate3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8ItemGate>FPv"
	.4byte "@48@getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
	.4byte "@48@getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "@48@getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "@48@get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
	.4byte "getAt__27Container<Q24Game8ItemGate>Fi"
	.4byte "getTo__27Container<Q24Game8ItemGate>Fv"
	.4byte "kill__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
	.4byte "getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
	.4byte "getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte __dt__Q34Game15ItemDengekiGate3MgrFv
	.4byte getCaveName__Q34Game15ItemDengekiGate3MgrFi
	.4byte getCaveID__Q34Game15ItemDengekiGate3MgrFPc
.endobj __vt__Q34Game15ItemDengekiGate3Mgr
.obj "__vt__Q24Game29NodeItemMgr<Q24Game8ItemGate>", weak
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "doEntry__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "doSetView__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fi"
	.4byte "doViewCalc__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "doSimulation__Q24Game29NodeItemMgr<Q24Game8ItemGate>Ff"
	.4byte "doDirectDraw__Q24Game29NodeItemMgr<Q24Game8ItemGate>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__Q24Game11BaseItemMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "initDependency__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "killAll__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
	.4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
	.4byte onLoadResources__Q24Game11BaseItemMgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte 0
	.4byte 0
	.4byte generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q24Game11BaseItemMgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q24Game11BaseItemMgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8ItemGate>FPv"
	.4byte "@48@getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
	.4byte "@48@getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "@48@getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "@48@get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
	.4byte "getAt__27Container<Q24Game8ItemGate>Fi"
	.4byte "getTo__27Container<Q24Game8ItemGate>Fv"
	.4byte "kill__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
	.4byte "getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
	.4byte "getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
	.4byte "__dt__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
.endobj "__vt__Q24Game29NodeItemMgr<Q24Game8ItemGate>"
.obj __vt__Q24Game13GateDownState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13GateDownStateFPQ24Game8ItemGatePQ24Game8StateArg
	.4byte exec__Q24Game13GateDownStateFPQ24Game8ItemGate
	.4byte cleanup__Q24Game13GateDownStateFPQ24Game8ItemGate
	.4byte "resume__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "restart__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "transit__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
	.4byte onDamage__Q24Game13GateDownStateFPQ24Game8ItemGatef
	.4byte onKeyEvent__Q24Game13GateDownStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9CollEvent"
.endobj __vt__Q24Game13GateDownState
.obj __vt__Q24Game16GateDamagedState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game16GateDamagedStateFPQ24Game8ItemGatePQ24Game8StateArg
	.4byte exec__Q24Game16GateDamagedStateFPQ24Game8ItemGate
	.4byte cleanup__Q24Game16GateDamagedStateFPQ24Game8ItemGate
	.4byte "resume__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "restart__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "transit__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
	.4byte onDamage__Q24Game16GateDamagedStateFPQ24Game8ItemGatef
	.4byte onKeyEvent__Q24Game16GateDamagedStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9CollEvent"
.endobj __vt__Q24Game16GateDamagedState
.obj __vt__Q24Game13GateWaitState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13GateWaitStateFPQ24Game8ItemGatePQ24Game8StateArg
	.4byte exec__Q24Game13GateWaitStateFPQ24Game8ItemGate
	.4byte cleanup__Q24Game13GateWaitStateFPQ24Game8ItemGate
	.4byte "resume__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "restart__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "transit__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
	.4byte onDamage__Q24Game13GateWaitStateFPQ24Game8ItemGatef
	.4byte onKeyEvent__Q24Game13GateWaitStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9CollEvent"
.endobj __vt__Q24Game13GateWaitState
.obj __vt__11GenGateParm, weak
	.4byte 0
	.4byte 0
	.4byte getShapeID__Q24Game11GenItemParmFv
.endobj __vt__11GenGateParm
.obj __vt__Q24Game11ItemGateMgr, global
	.4byte 0
	.4byte 0
	.4byte doAnimation__Q24Game11ItemGateMgrFv
	.4byte doEntry__Q24Game11ItemGateMgrFv
	.4byte doSetView__Q24Game11ItemGateMgrFi
	.4byte doViewCalc__Q24Game11ItemGateMgrFv
	.4byte doSimulation__Q24Game11ItemGateMgrFf
	.4byte doDirectDraw__Q24Game11ItemGateMgrFR8Graphics
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__Q24Game11BaseItemMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte initDependency__Q24Game11ItemGateMgrFv
	.4byte killAll__Q24Game11BaseItemMgrFv
	.4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
	.4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
	.4byte onLoadResources__Q24Game11BaseItemMgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte generatorGetID__Q24Game11ItemGateMgrFv
	.4byte "generatorBirth__Q24Game11ItemGateMgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q24Game11ItemGateMgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q24Game11ItemGateMgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q24Game11ItemGateMgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q24Game11ItemGateMgrFv
	.4byte getCaveName__Q24Game11ItemGateMgrFi
	.4byte getCaveID__Q24Game11ItemGateMgrFPc
.endobj __vt__Q24Game11ItemGateMgr
.obj "__vt__29TObjectNode<Q24Game8ItemGate>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__29TObjectNode<Q24Game8ItemGate>Fv"
	.4byte getChildCount__5CNodeFv
.endobj "__vt__29TObjectNode<Q24Game8ItemGate>"
.obj "__vt__31NodeObjectMgr<Q24Game8ItemGate>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__31NodeObjectMgr<Q24Game8ItemGate>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8ItemGate>FPv"
	.4byte "getNext__31NodeObjectMgr<Q24Game8ItemGate>FPv"
	.4byte "getStart__31NodeObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "getEnd__31NodeObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "get__31NodeObjectMgr<Q24Game8ItemGate>FPv"
	.4byte "getAt__27Container<Q24Game8ItemGate>Fi"
	.4byte "getTo__27Container<Q24Game8ItemGate>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "@28@doEntry__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "@28@doSetView__27ObjectMgr<Q24Game8ItemGate>Fi"
	.4byte "@28@doViewCalc__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "@28@doSimulation__27ObjectMgr<Q24Game8ItemGate>Ff"
	.4byte "@28@doDirectDraw__27ObjectMgr<Q24Game8ItemGate>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__31NodeObjectMgr<Q24Game8ItemGate>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "doEntry__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "doSetView__27ObjectMgr<Q24Game8ItemGate>Fi"
	.4byte "doViewCalc__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "doSimulation__27ObjectMgr<Q24Game8ItemGate>Ff"
	.4byte "doDirectDraw__27ObjectMgr<Q24Game8ItemGate>FR8Graphics"
	.4byte "resetMgr__31NodeObjectMgr<Q24Game8ItemGate>Fv"
.endobj "__vt__31NodeObjectMgr<Q24Game8ItemGate>"
.obj "__vt__27ObjectMgr<Q24Game8ItemGate>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8ItemGate>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__27Container<Q24Game8ItemGate>Fi"
	.4byte "getTo__27Container<Q24Game8ItemGate>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "@28@doEntry__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "@28@doSetView__27ObjectMgr<Q24Game8ItemGate>Fi"
	.4byte "@28@doViewCalc__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "@28@doSimulation__27ObjectMgr<Q24Game8ItemGate>Ff"
	.4byte "@28@doDirectDraw__27ObjectMgr<Q24Game8ItemGate>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "doEntry__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "doSetView__27ObjectMgr<Q24Game8ItemGate>Fi"
	.4byte "doViewCalc__27ObjectMgr<Q24Game8ItemGate>Fv"
	.4byte "doSimulation__27ObjectMgr<Q24Game8ItemGate>Ff"
	.4byte "doDirectDraw__27ObjectMgr<Q24Game8ItemGate>FR8Graphics"
.endobj "__vt__27ObjectMgr<Q24Game8ItemGate>"
.obj "__vt__27Container<Q24Game8ItemGate>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__27Container<Q24Game8ItemGate>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8ItemGate>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__27Container<Q24Game8ItemGate>Fi"
	.4byte "getTo__27Container<Q24Game8ItemGate>Fv"
.endobj "__vt__27Container<Q24Game8ItemGate>"
.obj __vt__Q23efx10TGate2Down, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx10TGate2Down
.obj __vt__Q23efx10TGate1Down, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx10TGate1Down
.obj __vt__Q23efx7ArgRotY, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q23efx7ArgRotYFv
.endobj __vt__Q23efx7ArgRotY
.obj __vt__Q23efx7TEgateA, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx7TEgateAFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx7TEgateAFv
.endobj __vt__Q23efx7TEgateA
.obj __vt__Q24Game8ItemGate, global
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game8BaseItemFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game10CellObjectFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte constructor__Q24Game8ItemGateFv
	.4byte onInit__Q24Game8ItemGateFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game8BaseItemFv
	.4byte doEntry__Q24Game8BaseItemFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8BaseItemFf
	.4byte doDirectDraw__Q24Game8CreatureFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game8ItemGateFv
	.4byte "setVelocity__Q24Game8BaseItemFR10Vector3<f>"
	.4byte getVelocity__Q24Game8BaseItemFv
	.4byte "onSetPosition__Q24Game8BaseItemFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q24Game8BaseItemFv
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game8CreatureFv
	.4byte inWater__Q24Game8CreatureFv
	.4byte getFlockMgr__Q24Game8CreatureFv
	.4byte onStartCapture__Q24Game8CreatureFv
	.4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
	.4byte onEndCapture__Q24Game8CreatureFv
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
	.4byte doSave__Q24Game8ItemGateFR6Stream
	.4byte doLoad__Q24Game8ItemGateFR6Stream
	.4byte "bounceCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRQ24Game9PlatEvent"
	.4byte getJAIObject__Q24Game8BaseItemFv
	.4byte getPSCreature__Q24Game8BaseItemFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8BaseItemFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q24Game8CreatureFb
	.4byte movieStartAnimation__Q24Game8BaseItemFUl
	.4byte movieStartDemoAnimation__Q24Game8BaseItemFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8BaseItemFv
	.4byte "movieSetTranslation__Q24Game8BaseItemFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8CreatureFf
	.4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game8CreatureFv
	.4byte getLifeGaugeParam__Q24Game8ItemGateFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q24Game8ItemGateFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte isSlotFree__Q24Game8CreatureFs
	.4byte getFreeStickSlot__Q24Game8CreatureFv
	.4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
	.4byte getRandomFreeStickSlot__Q24Game8CreatureFv
	.4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
	.4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
	.4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
	.4byte "getVelocityAt__Q24Game8BaseItemFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game8BaseItemFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game8ItemGateFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game8ItemGateFRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8ItemGateFv
	.4byte doAI__Q24Game8ItemGateFv
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q24Game8ItemGateFv
	.4byte do_updateLOD__Q24Game8BaseItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q24Game8ItemGateFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q24Game8ItemGateFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q24Game8ItemGateFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q24Game8ItemGateFv
	.4byte update__Q24Game8ItemGateFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q24Game8ItemGateFv
	.4byte onKeyEvent__Q24Game8ItemGateFRCQ28SysShape8KeyEvent
.endobj __vt__Q24Game8ItemGate
.obj "__vt__Q24Game60WorkItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>", weak
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game8BaseItemFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game10CellObjectFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte 0
	.4byte onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game8BaseItemFv
	.4byte doEntry__Q24Game8BaseItemFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8BaseItemFf
	.4byte doDirectDraw__Q24Game8CreatureFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game8BaseItemFv
	.4byte "setVelocity__Q24Game8BaseItemFR10Vector3<f>"
	.4byte getVelocity__Q24Game8BaseItemFv
	.4byte "onSetPosition__Q24Game8BaseItemFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q24Game8BaseItemFv
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game8CreatureFv
	.4byte inWater__Q24Game8CreatureFv
	.4byte getFlockMgr__Q24Game8CreatureFv
	.4byte onStartCapture__Q24Game8CreatureFv
	.4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
	.4byte onEndCapture__Q24Game8CreatureFv
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
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte "bounceCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRQ24Game9PlatEvent"
	.4byte getJAIObject__Q24Game8BaseItemFv
	.4byte getPSCreature__Q24Game8BaseItemFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8BaseItemFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q24Game8CreatureFb
	.4byte movieStartAnimation__Q24Game8BaseItemFUl
	.4byte movieStartDemoAnimation__Q24Game8BaseItemFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8BaseItemFv
	.4byte "movieSetTranslation__Q24Game8BaseItemFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8CreatureFf
	.4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game8CreatureFv
	.4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte isSlotFree__Q24Game8CreatureFs
	.4byte getFreeStickSlot__Q24Game8CreatureFv
	.4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
	.4byte getRandomFreeStickSlot__Q24Game8CreatureFv
	.4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
	.4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
	.4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
	.4byte "getVelocityAt__Q24Game8BaseItemFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game8BaseItemFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game8BaseItemFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>Fv"
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q24Game8BaseItemFv
	.4byte do_updateLOD__Q24Game8BaseItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q24Game8BaseItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte 0
	.4byte 0
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q24Game8BaseItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q24Game8BaseItemFv
	.4byte "onKeyEvent__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRCQ28SysShape8KeyEvent"
.endobj "__vt__Q24Game60WorkItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"
.obj "__vt__Q24Game25ItemFSM<Q24Game8ItemGate>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "start__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
	.4byte "exec__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "transit__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
.endobj "__vt__Q24Game25ItemFSM<Q24Game8ItemGate>"
.obj "__vt__Q24Game30StateMachine<Q24Game8ItemGate>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "start__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
	.4byte "exec__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "transit__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
.endobj "__vt__Q24Game30StateMachine<Q24Game8ItemGate>"
.obj "__vt__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>", weak
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game8BaseItemFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game10CellObjectFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte constructor__Q24Game8BaseItemFv
	.4byte onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game8BaseItemFv
	.4byte doEntry__Q24Game8BaseItemFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8BaseItemFf
	.4byte doDirectDraw__Q24Game8CreatureFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game8BaseItemFv
	.4byte "setVelocity__Q24Game8BaseItemFR10Vector3<f>"
	.4byte getVelocity__Q24Game8BaseItemFv
	.4byte "onSetPosition__Q24Game8BaseItemFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q24Game8BaseItemFv
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game8CreatureFv
	.4byte inWater__Q24Game8CreatureFv
	.4byte getFlockMgr__Q24Game8CreatureFv
	.4byte onStartCapture__Q24Game8CreatureFv
	.4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
	.4byte onEndCapture__Q24Game8CreatureFv
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
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte "bounceCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRQ24Game9PlatEvent"
	.4byte getJAIObject__Q24Game8BaseItemFv
	.4byte getPSCreature__Q24Game8BaseItemFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8BaseItemFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q24Game8CreatureFb
	.4byte movieStartAnimation__Q24Game8BaseItemFUl
	.4byte movieStartDemoAnimation__Q24Game8BaseItemFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8BaseItemFv
	.4byte "movieSetTranslation__Q24Game8BaseItemFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8CreatureFf
	.4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game8CreatureFv
	.4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte isSlotFree__Q24Game8CreatureFs
	.4byte getFreeStickSlot__Q24Game8CreatureFv
	.4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
	.4byte getRandomFreeStickSlot__Q24Game8CreatureFv
	.4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
	.4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
	.4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
	.4byte "getVelocityAt__Q24Game8BaseItemFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game8BaseItemFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game8BaseItemFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>Fv"
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q24Game8BaseItemFv
	.4byte do_updateLOD__Q24Game8BaseItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q24Game8BaseItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q24Game8BaseItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q24Game8BaseItemFv
	.4byte "onKeyEvent__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRCQ28SysShape8KeyEvent"
.endobj "__vt__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"
.obj __vt__Q24Game9GateState, weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ24Game8StateArg"
	.4byte "exec__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "cleanup__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "resume__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "restart__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "transit__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
	.4byte onDamage__Q24Game9GateStateFPQ24Game8ItemGatef
	.4byte onKeyEvent__Q24Game9GateStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9CollEvent"
.endobj __vt__Q24Game9GateState
.obj "__vt__Q24Game27ItemState<Q24Game8ItemGate>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ24Game8StateArg"
	.4byte "exec__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "cleanup__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "resume__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "restart__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "transit__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatef"
	.4byte "onKeyEvent__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9CollEvent"
.endobj "__vt__Q24Game27ItemState<Q24Game8ItemGate>"
.obj "__vt__Q24Game26FSMState<Q24Game8ItemGate>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ24Game8StateArg"
	.4byte "exec__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "cleanup__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "resume__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "restart__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "transit__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
.endobj "__vt__Q24Game26FSMState<Q24Game8ItemGate>"
.obj __vt__Q24Game7GateFSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game7GateFSMFPQ24Game8ItemGate
	.4byte "start__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
	.4byte "exec__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGate"
	.4byte "transit__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
.endobj __vt__Q24Game7GateFSM

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj itemGateMgr__4Game, global
	.skip 0x4
.endobj itemGateMgr__4Game
.obj mgr__Q24Game15ItemDengekiGate, global
	.skip 0x4
.endobj mgr__Q24Game15ItemDengekiGate

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80519590, local
	.float 170.0
.endobj lbl_80519590
.obj lbl_80519594, local
	.float 100.0
.endobj lbl_80519594
.obj lbl_80519598, local
	.float 0.0
.endobj lbl_80519598
.obj lbl_8051959C, local
	.float 32768.0
.endobj lbl_8051959C
.obj lbl_805195A0, local # tau
	.float 6.2831855
.endobj lbl_805195A0
.balign 8
.obj lbl_805195A8, local
	.8byte 0x4330000080000000
.endobj lbl_805195A8
.obj lbl_805195B0, local
	.float 10.0
.endobj lbl_805195B0
.balign 4
.obj lbl_805195B4, local
	.asciz "gate"
.endobj lbl_805195B4
.balign 4
.obj lbl_805195BC, local
	.float 30.0
.endobj lbl_805195BC
.obj lbl_805195C0, local
	.float 12800.0
.endobj lbl_805195C0
.obj lbl_805195C4, local
	.float 50.0
.endobj lbl_805195C4
.obj lbl_805195C8, local
	.float 325.9493
.endobj lbl_805195C8
.obj lbl_805195CC, local
	.float -325.9493
.endobj lbl_805195CC
.obj lbl_805195D0, local
	.float 20.0
.endobj lbl_805195D0
.obj lbl_805195D4, local
	.float 76.5
.endobj lbl_805195D4
.balign 4
.obj lbl_805195D8, local
	.asciz "move"
.endobj lbl_805195D8
.balign 8
.obj lbl_805195E0, local
	.8byte 0x4330000000000000
.endobj lbl_805195E0
.obj lbl_805195E8, local
	.float 120.0
.endobj lbl_805195E8
.balign 4
.obj lbl_805195EC, local
	.asciz "Gate"
.endobj lbl_805195EC
.balign 4
.obj lbl_805195F4, local
	.asciz "fix"
.endobj lbl_805195F4
.balign 4
.obj lbl_805195F8, local
	.asciz "pole"
.endobj lbl_805195F8
.balign 4
.obj lbl_80519600, local
	.asciz "e-gate"
.endobj lbl_80519600
.balign 4
.obj lbl_80519608, local
	.asciz "ArgRotY"
.endobj lbl_80519608
.balign 4
.obj lbl_80519610, local
	.asciz "item"
.endobj lbl_80519610

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q24Game7GateFSMFPQ24Game8ItemGate, global
/* 801C7604 001C4544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C7608 001C4548  7C 08 02 A6 */	mflr r0
/* 801C760C 001C454C  38 80 00 03 */	li r4, 3
/* 801C7610 001C4550  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C7614 001C4554  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C7618 001C4558  7C 7F 1B 78 */	mr r31, r3
/* 801C761C 001C455C  48 00 37 A5 */	bl "create__Q24Game30StateMachine<Q24Game8ItemGate>Fi"
/* 801C7620 001C4560  38 60 00 10 */	li r3, 0x10
/* 801C7624 001C4564  4B E5 C8 81 */	bl __nw__FUl
/* 801C7628 001C4568  7C 64 1B 79 */	or. r4, r3, r3
/* 801C762C 001C456C  41 82 00 40 */	beq .L_801C766C
/* 801C7630 001C4570  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8ItemGate>"@ha
/* 801C7634 001C4574  3C C0 80 4B */	lis r6, "__vt__Q24Game27ItemState<Q24Game8ItemGate>"@ha
/* 801C7638 001C4578  38 03 70 BC */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8ItemGate>"@l
/* 801C763C 001C457C  3C A0 80 4B */	lis r5, __vt__Q24Game9GateState@ha
/* 801C7640 001C4580  90 04 00 00 */	stw r0, 0(r4)
/* 801C7644 001C4584  38 E0 00 00 */	li r7, 0
/* 801C7648 001C4588  3C 60 80 4B */	lis r3, __vt__Q24Game13GateWaitState@ha
/* 801C764C 001C458C  38 C6 70 88 */	addi r6, r6, "__vt__Q24Game27ItemState<Q24Game8ItemGate>"@l
/* 801C7650 001C4590  90 E4 00 04 */	stw r7, 4(r4)
/* 801C7654 001C4594  38 A5 70 54 */	addi r5, r5, __vt__Q24Game9GateState@l
/* 801C7658 001C4598  38 03 67 44 */	addi r0, r3, __vt__Q24Game13GateWaitState@l
/* 801C765C 001C459C  90 E4 00 08 */	stw r7, 8(r4)
/* 801C7660 001C45A0  90 C4 00 00 */	stw r6, 0(r4)
/* 801C7664 001C45A4  90 A4 00 00 */	stw r5, 0(r4)
/* 801C7668 001C45A8  90 04 00 00 */	stw r0, 0(r4)
.L_801C766C:
/* 801C766C 001C45AC  7F E3 FB 78 */	mr r3, r31
/* 801C7670 001C45B0  48 00 44 91 */	bl "registerState__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game26FSMState<Q24Game8ItemGate>"
/* 801C7674 001C45B4  38 60 00 14 */	li r3, 0x14
/* 801C7678 001C45B8  4B E5 C8 2D */	bl __nw__FUl
/* 801C767C 001C45BC  7C 64 1B 79 */	or. r4, r3, r3
/* 801C7680 001C45C0  41 82 00 44 */	beq .L_801C76C4
/* 801C7684 001C45C4  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8ItemGate>"@ha
/* 801C7688 001C45C8  3C C0 80 4B */	lis r6, "__vt__Q24Game27ItemState<Q24Game8ItemGate>"@ha
/* 801C768C 001C45CC  38 03 70 BC */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8ItemGate>"@l
/* 801C7690 001C45D0  3C A0 80 4B */	lis r5, __vt__Q24Game9GateState@ha
/* 801C7694 001C45D4  90 04 00 00 */	stw r0, 0(r4)
/* 801C7698 001C45D8  38 00 00 01 */	li r0, 1
/* 801C769C 001C45DC  3C 60 80 4B */	lis r3, __vt__Q24Game16GateDamagedState@ha
/* 801C76A0 001C45E0  38 E0 00 00 */	li r7, 0
/* 801C76A4 001C45E4  90 04 00 04 */	stw r0, 4(r4)
/* 801C76A8 001C45E8  38 C6 70 88 */	addi r6, r6, "__vt__Q24Game27ItemState<Q24Game8ItemGate>"@l
/* 801C76AC 001C45EC  38 A5 70 54 */	addi r5, r5, __vt__Q24Game9GateState@l
/* 801C76B0 001C45F0  38 03 67 10 */	addi r0, r3, __vt__Q24Game16GateDamagedState@l
/* 801C76B4 001C45F4  90 E4 00 08 */	stw r7, 8(r4)
/* 801C76B8 001C45F8  90 C4 00 00 */	stw r6, 0(r4)
/* 801C76BC 001C45FC  90 A4 00 00 */	stw r5, 0(r4)
/* 801C76C0 001C4600  90 04 00 00 */	stw r0, 0(r4)
.L_801C76C4:
/* 801C76C4 001C4604  7F E3 FB 78 */	mr r3, r31
/* 801C76C8 001C4608  48 00 44 39 */	bl "registerState__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game26FSMState<Q24Game8ItemGate>"
/* 801C76CC 001C460C  38 60 00 10 */	li r3, 0x10
/* 801C76D0 001C4610  4B E5 C7 D5 */	bl __nw__FUl
/* 801C76D4 001C4614  7C 64 1B 79 */	or. r4, r3, r3
/* 801C76D8 001C4618  41 82 00 44 */	beq .L_801C771C
/* 801C76DC 001C461C  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8ItemGate>"@ha
/* 801C76E0 001C4620  3C C0 80 4B */	lis r6, "__vt__Q24Game27ItemState<Q24Game8ItemGate>"@ha
/* 801C76E4 001C4624  38 03 70 BC */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8ItemGate>"@l
/* 801C76E8 001C4628  3C A0 80 4B */	lis r5, __vt__Q24Game9GateState@ha
/* 801C76EC 001C462C  90 04 00 00 */	stw r0, 0(r4)
/* 801C76F0 001C4630  38 00 00 02 */	li r0, 2
/* 801C76F4 001C4634  3C 60 80 4B */	lis r3, __vt__Q24Game13GateDownState@ha
/* 801C76F8 001C4638  38 E0 00 00 */	li r7, 0
/* 801C76FC 001C463C  90 04 00 04 */	stw r0, 4(r4)
/* 801C7700 001C4640  38 C6 70 88 */	addi r6, r6, "__vt__Q24Game27ItemState<Q24Game8ItemGate>"@l
/* 801C7704 001C4644  38 A5 70 54 */	addi r5, r5, __vt__Q24Game9GateState@l
/* 801C7708 001C4648  38 03 66 DC */	addi r0, r3, __vt__Q24Game13GateDownState@l
/* 801C770C 001C464C  90 E4 00 08 */	stw r7, 8(r4)
/* 801C7710 001C4650  90 C4 00 00 */	stw r6, 0(r4)
/* 801C7714 001C4654  90 A4 00 00 */	stw r5, 0(r4)
/* 801C7718 001C4658  90 04 00 00 */	stw r0, 0(r4)
.L_801C771C:
/* 801C771C 001C465C  7F E3 FB 78 */	mr r3, r31
/* 801C7720 001C4660  48 00 43 E1 */	bl "registerState__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game26FSMState<Q24Game8ItemGate>"
/* 801C7724 001C4664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C7728 001C4668  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C772C 001C466C  7C 08 03 A6 */	mtlr r0
/* 801C7730 001C4670  38 21 00 10 */	addi r1, r1, 0x10
/* 801C7734 001C4674  4E 80 00 20 */	blr 
.endfn init__Q24Game7GateFSMFPQ24Game8ItemGate

.fn constructor__Q24Game8ItemGateFv, global
/* 801C7738 001C4678  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C773C 001C467C  7C 08 02 A6 */	mflr r0
/* 801C7740 001C4680  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C7744 001C4684  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C7748 001C4688  7C 7F 1B 78 */	mr r31, r3
/* 801C774C 001C468C  38 60 00 84 */	li r3, 0x84
/* 801C7750 001C4690  4B E5 C7 55 */	bl __nw__FUl
/* 801C7754 001C4694  7C 60 1B 79 */	or. r0, r3, r3
/* 801C7758 001C4698  41 82 00 10 */	beq .L_801C7768
/* 801C775C 001C469C  7F E4 FB 78 */	mr r4, r31
/* 801C7760 001C46A0  48 29 9E C1 */	bl __ct__Q23PSM8WorkItemFPQ24Game8BaseItem
/* 801C7764 001C46A4  7C 60 1B 78 */	mr r0, r3
.L_801C7768:
/* 801C7768 001C46A8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801C776C 001C46AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C7770 001C46B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C7774 001C46B4  7C 08 03 A6 */	mtlr r0
/* 801C7778 001C46B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801C777C 001C46BC  4E 80 00 20 */	blr 
.endfn constructor__Q24Game8ItemGateFv

.fn onInit__Q24Game8ItemGateFPQ24Game15CreatureInitArg, global
/* 801C7780 001C46C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C7784 001C46C4  7C 08 02 A6 */	mflr r0
/* 801C7788 001C46C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C778C 001C46CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C7790 001C46D0  7C 7F 1B 78 */	mr r31, r3
/* 801C7794 001C46D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C7798 001C46D8  7C 9E 23 78 */	mr r30, r4
/* 801C779C 001C46DC  88 03 02 18 */	lbz r0, 0x218(r3)
/* 801C77A0 001C46E0  28 00 00 00 */	cmplwi r0, 0
/* 801C77A4 001C46E4  41 82 00 14 */	beq .L_801C77B8
/* 801C77A8 001C46E8  80 6D 94 34 */	lwz r3, mgr__Q24Game15ItemDengekiGate@sda21(r13)
/* 801C77AC 001C46EC  7F E4 FB 78 */	mr r4, r31
/* 801C77B0 001C46F0  48 00 27 D1 */	bl setupGate__Q34Game15ItemDengekiGate3MgrFPQ24Game8ItemGate
/* 801C77B4 001C46F4  48 00 00 10 */	b .L_801C77C4
.L_801C77B8:
/* 801C77B8 001C46F8  80 6D 94 30 */	lwz r3, itemGateMgr__4Game@sda21(r13)
/* 801C77BC 001C46FC  7F E4 FB 78 */	mr r4, r31
/* 801C77C0 001C4700  48 00 15 D5 */	bl setupGate__Q24Game11ItemGateMgrFPQ24Game8ItemGate
.L_801C77C4:
/* 801C77C4 001C4704  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 801C77C8 001C4708  28 00 00 00 */	cmplwi r0, 0
/* 801C77CC 001C470C  40 82 00 20 */	bne .L_801C77EC
/* 801C77D0 001C4710  3C 60 80 48 */	lis r3, lbl_804801A0@ha
/* 801C77D4 001C4714  3C A0 80 48 */	lis r5, lbl_804801B0@ha
/* 801C77D8 001C4718  38 63 01 A0 */	addi r3, r3, lbl_804801A0@l
/* 801C77DC 001C471C  38 80 00 E8 */	li r4, 0xe8
/* 801C77E0 001C4720  38 A5 01 B0 */	addi r5, r5, lbl_804801B0@l
/* 801C77E4 001C4724  4C C6 31 82 */	crclr 6
/* 801C77E8 001C4728  4B E6 2E 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801C77EC:
/* 801C77EC 001C472C  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801C77F0 001C4730  7F E4 FB 78 */	mr r4, r31
/* 801C77F4 001C4734  38 A0 00 00 */	li r5, 0
/* 801C77F8 001C4738  38 C0 00 00 */	li r6, 0
/* 801C77FC 001C473C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7800 001C4740  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801C7804 001C4744  7D 89 03 A6 */	mtctr r12
/* 801C7808 001C4748  4E 80 04 21 */	bctrl 
/* 801C780C 001C474C  7F E3 FB 78 */	mr r3, r31
/* 801C7810 001C4750  38 80 00 01 */	li r4, 1
/* 801C7814 001C4754  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C7818 001C4758  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801C781C 001C475C  7D 89 03 A6 */	mtctr r12
/* 801C7820 001C4760  4E 80 04 21 */	bctrl 
/* 801C7824 001C4764  28 1E 00 00 */	cmplwi r30, 0
/* 801C7828 001C4768  41 82 00 10 */	beq .L_801C7838
/* 801C782C 001C476C  C0 1E 00 04 */	lfs f0, 4(r30)
/* 801C7830 001C4770  D0 1F 02 14 */	stfs f0, 0x214(r31)
/* 801C7834 001C4774  48 00 00 38 */	b .L_801C786C
.L_801C7838:
/* 801C7838 001C4778  4B F0 1D 69 */	bl rand
/* 801C783C 001C477C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C7840 001C4780  3C 00 43 30 */	lis r0, 0x4330
/* 801C7844 001C4784  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C7848 001C4788  C8 62 B2 48 */	lfd f3, lbl_805195A8@sda21(r2)
/* 801C784C 001C478C  90 01 00 08 */	stw r0, 8(r1)
/* 801C7850 001C4790  C0 22 B2 3C */	lfs f1, lbl_8051959C@sda21(r2)
/* 801C7854 001C4794  C8 41 00 08 */	lfd f2, 8(r1)
/* 801C7858 001C4798  C0 02 B2 40 */	lfs f0, lbl_805195A0@sda21(r2)
/* 801C785C 001C479C  EC 42 18 28 */	fsubs f2, f2, f3
/* 801C7860 001C47A0  EC 22 08 24 */	fdivs f1, f2, f1
/* 801C7864 001C47A4  EC 00 00 72 */	fmuls f0, f0, f1
/* 801C7868 001C47A8  D0 1F 02 14 */	stfs f0, 0x214(r31)
.L_801C786C:
/* 801C786C 001C47AC  88 1F 02 18 */	lbz r0, 0x218(r31)
/* 801C7870 001C47B0  28 00 00 00 */	cmplwi r0, 0
/* 801C7874 001C47B4  41 82 00 FC */	beq .L_801C7970
/* 801C7878 001C47B8  38 60 00 0C */	li r3, 0xc
/* 801C787C 001C47BC  4B E5 C6 29 */	bl __nw__FUl
/* 801C7880 001C47C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C7884 001C47C4  41 82 00 14 */	beq .L_801C7898
/* 801C7888 001C47C8  48 26 CA CD */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 801C788C 001C47CC  3C 60 80 4F */	lis r3, __vt__Q23Sys15MatLoopAnimator@ha
/* 801C7890 001C47D0  38 03 C4 8C */	addi r0, r3, __vt__Q23Sys15MatLoopAnimator@l
/* 801C7894 001C47D4  90 1E 00 00 */	stw r0, 0(r30)
.L_801C7898:
/* 801C7898 001C47D8  93 DF 02 80 */	stw r30, 0x280(r31)
/* 801C789C 001C47DC  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 801C78A0 001C47E0  80 8D 94 34 */	lwz r4, mgr__Q24Game15ItemDengekiGate@sda21(r13)
/* 801C78A4 001C47E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C78A8 001C47E8  38 84 00 90 */	addi r4, r4, 0x90
/* 801C78AC 001C47EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C78B0 001C47F0  7D 89 03 A6 */	mtctr r12
/* 801C78B4 001C47F4  4E 80 04 21 */	bctrl 
/* 801C78B8 001C47F8  38 60 00 14 */	li r3, 0x14
/* 801C78BC 001C47FC  4B E5 C5 E9 */	bl __nw__FUl
/* 801C78C0 001C4800  28 03 00 00 */	cmplwi r3, 0
/* 801C78C4 001C4804  41 82 00 78 */	beq .L_801C793C
/* 801C78C8 001C4808  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801C78CC 001C480C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 801C78D0 001C4810  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801C78D4 001C4814  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801C78D8 001C4818  90 03 00 00 */	stw r0, 0(r3)
/* 801C78DC 001C481C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 801C78E0 001C4820  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801C78E4 001C4824  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 801C78E8 001C4828  90 03 00 04 */	stw r0, 4(r3)
/* 801C78EC 001C482C  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 801C78F0 001C4830  3C 80 80 4B */	lis r4, __vt__Q23efx7TEgateA@ha
/* 801C78F4 001C4834  38 05 00 14 */	addi r0, r5, 0x14
/* 801C78F8 001C4838  90 A3 00 00 */	stw r5, 0(r3)
/* 801C78FC 001C483C  38 84 69 6C */	addi r4, r4, __vt__Q23efx7TEgateA@l
/* 801C7900 001C4840  39 20 00 00 */	li r9, 0
/* 801C7904 001C4844  39 00 02 B2 */	li r8, 0x2b2
/* 801C7908 001C4848  90 03 00 04 */	stw r0, 4(r3)
/* 801C790C 001C484C  38 C7 00 14 */	addi r6, r7, 0x14
/* 801C7910 001C4850  38 A0 00 46 */	li r5, 0x46
/* 801C7914 001C4854  38 04 00 14 */	addi r0, r4, 0x14
/* 801C7918 001C4858  91 23 00 08 */	stw r9, 8(r3)
/* 801C791C 001C485C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 801C7920 001C4860  99 23 00 0E */	stb r9, 0xe(r3)
/* 801C7924 001C4864  90 E3 00 00 */	stw r7, 0(r3)
/* 801C7928 001C4868  90 C3 00 04 */	stw r6, 4(r3)
/* 801C792C 001C486C  91 23 00 10 */	stw r9, 0x10(r3)
/* 801C7930 001C4870  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 801C7934 001C4874  90 83 00 00 */	stw r4, 0(r3)
/* 801C7938 001C4878  90 03 00 04 */	stw r0, 4(r3)
.L_801C793C:
/* 801C793C 001C487C  90 7F 02 1C */	stw r3, 0x21c(r31)
/* 801C7940 001C4880  38 60 00 24 */	li r3, 0x24
/* 801C7944 001C4884  4B E5 C5 61 */	bl __nw__FUl
/* 801C7948 001C4888  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C794C 001C488C  41 82 00 1C */	beq .L_801C7968
/* 801C7950 001C4890  38 80 00 47 */	li r4, 0x47
/* 801C7954 001C4894  38 A0 00 48 */	li r5, 0x48
/* 801C7958 001C4898  48 1E 86 B9 */	bl __ct__Q23efx9TForever2FUsUs
/* 801C795C 001C489C  3C 60 80 4E */	lis r3, __vt__Q23efx8TEgateBC@ha
/* 801C7960 001C48A0  38 03 71 20 */	addi r0, r3, __vt__Q23efx8TEgateBC@l
/* 801C7964 001C48A4  90 1E 00 00 */	stw r0, 0(r30)
.L_801C7968:
/* 801C7968 001C48A8  93 DF 02 20 */	stw r30, 0x220(r31)
/* 801C796C 001C48AC  48 00 00 44 */	b .L_801C79B0
.L_801C7970:
/* 801C7970 001C48B0  38 60 00 0C */	li r3, 0xc
/* 801C7974 001C48B4  4B E5 C5 31 */	bl __nw__FUl
/* 801C7978 001C48B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C797C 001C48BC  41 82 00 14 */	beq .L_801C7990
/* 801C7980 001C48C0  48 26 C9 D5 */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 801C7984 001C48C4  3C 60 80 4F */	lis r3, __vt__Q23Sys15MatLoopAnimator@ha
/* 801C7988 001C48C8  38 03 C4 8C */	addi r0, r3, __vt__Q23Sys15MatLoopAnimator@l
/* 801C798C 001C48CC  90 1E 00 00 */	stw r0, 0(r30)
.L_801C7990:
/* 801C7990 001C48D0  93 DF 02 80 */	stw r30, 0x280(r31)
/* 801C7994 001C48D4  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 801C7998 001C48D8  80 8D 94 30 */	lwz r4, itemGateMgr__4Game@sda21(r13)
/* 801C799C 001C48DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C79A0 001C48E0  38 84 00 74 */	addi r4, r4, 0x74
/* 801C79A4 001C48E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C79A8 001C48E8  7D 89 03 A6 */	mtctr r12
/* 801C79AC 001C48EC  4E 80 04 21 */	bctrl 
.L_801C79B0:
/* 801C79B0 001C48F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C79B4 001C48F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C79B8 001C48F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C79BC 001C48FC  7C 08 03 A6 */	mtlr r0
/* 801C79C0 001C4900  38 21 00 20 */	addi r1, r1, 0x20
/* 801C79C4 001C4904  4E 80 00 20 */	blr 
.endfn onInit__Q24Game8ItemGateFPQ24Game15CreatureInitArg

.fn "start__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg", weak
/* 801C79C8 001C4908  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C79CC 001C490C  7C 08 02 A6 */	mflr r0
/* 801C79D0 001C4910  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C79D4 001C4914  38 00 00 00 */	li r0, 0
/* 801C79D8 001C4918  90 04 01 DC */	stw r0, 0x1dc(r4)
/* 801C79DC 001C491C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C79E0 001C4920  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C79E4 001C4924  7D 89 03 A6 */	mtctr r12
/* 801C79E8 001C4928  4E 80 04 21 */	bctrl 
/* 801C79EC 001C492C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C79F0 001C4930  7C 08 03 A6 */	mtlr r0
/* 801C79F4 001C4934  38 21 00 10 */	addi r1, r1, 0x10
/* 801C79F8 001C4938  4E 80 00 20 */	blr 
.endfn "start__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"

.fn onSetPosition__Q24Game8ItemGateFv, global
/* 801C79FC 001C493C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801C7A00 001C4940  7C 08 02 A6 */	mflr r0
/* 801C7A04 001C4944  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C7A08 001C4948  90 01 00 64 */	stw r0, 0x64(r1)
/* 801C7A0C 001C494C  38 A1 00 18 */	addi r5, r1, 0x18
/* 801C7A10 001C4950  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801C7A14 001C4954  7C 7F 1B 78 */	mr r31, r3
/* 801C7A18 001C4958  38 9F 01 9C */	addi r4, r31, 0x19c
/* 801C7A1C 001C495C  C0 23 02 14 */	lfs f1, 0x214(r3)
/* 801C7A20 001C4960  38 7F 01 38 */	addi r3, r31, 0x138
/* 801C7A24 001C4964  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801C7A28 001C4968  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801C7A2C 001C496C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801C7A30 001C4970  48 26 0E 59 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801C7A34 001C4974  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801C7A38 001C4978  38 7F 01 38 */	addi r3, r31, 0x138
/* 801C7A3C 001C497C  80 84 00 08 */	lwz r4, 8(r4)
/* 801C7A40 001C4980  38 84 00 24 */	addi r4, r4, 0x24
/* 801C7A44 001C4984  4B F2 28 89 */	bl PSMTXCopy
/* 801C7A48 001C4988  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801C7A4C 001C498C  80 63 00 08 */	lwz r3, 8(r3)
/* 801C7A50 001C4990  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7A54 001C4994  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C7A58 001C4998  7D 89 03 A6 */	mtctr r12
/* 801C7A5C 001C499C  4E 80 04 21 */	bctrl 
/* 801C7A60 001C49A0  88 1F 02 18 */	lbz r0, 0x218(r31)
/* 801C7A64 001C49A4  28 00 00 00 */	cmplwi r0, 0
/* 801C7A68 001C49A8  41 82 00 14 */	beq .L_801C7A7C
/* 801C7A6C 001C49AC  80 6D 94 34 */	lwz r3, mgr__Q24Game15ItemDengekiGate@sda21(r13)
/* 801C7A70 001C49B0  7F E4 FB 78 */	mr r4, r31
/* 801C7A74 001C49B4  48 00 25 B1 */	bl setupPlatform__Q34Game15ItemDengekiGate3MgrFPQ24Game8ItemGate
/* 801C7A78 001C49B8  48 00 00 10 */	b .L_801C7A88
.L_801C7A7C:
/* 801C7A7C 001C49BC  80 6D 94 30 */	lwz r3, itemGateMgr__4Game@sda21(r13)
/* 801C7A80 001C49C0  7F E4 FB 78 */	mr r4, r31
/* 801C7A84 001C49C4  48 00 13 B1 */	bl setupPlatform__Q24Game11ItemGateMgrFPQ24Game8ItemGate
.L_801C7A88:
/* 801C7A88 001C49C8  7F E3 FB 78 */	mr r3, r31
/* 801C7A8C 001C49CC  48 00 09 D1 */	bl initPlanes__Q24Game8ItemGateFv
/* 801C7A90 001C49D0  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801C7A94 001C49D4  38 00 00 00 */	li r0, 0
/* 801C7A98 001C49D8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801C7A9C 001C49DC  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801C7AA0 001C49E0  C0 02 B2 50 */	lfs f0, lbl_805195B0@sda21(r2)
/* 801C7AA4 001C49E4  28 03 00 00 */	cmplwi r3, 0
/* 801C7AA8 001C49E8  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 801C7AAC 001C49EC  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801C7AB0 001C49F0  C0 3F 01 A4 */	lfs f1, 0x1a4(r31)
/* 801C7AB4 001C49F4  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 801C7AB8 001C49F8  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C7ABC 001C49FC  98 01 00 48 */	stb r0, 0x48(r1)
/* 801C7AC0 001C4A00  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801C7AC4 001C4A04  41 82 00 48 */	beq .L_801C7B0C
/* 801C7AC8 001C4A08  80 63 00 08 */	lwz r3, 8(r3)
/* 801C7ACC 001C4A0C  28 03 00 00 */	cmplwi r3, 0
/* 801C7AD0 001C4A10  41 82 00 3C */	beq .L_801C7B0C
/* 801C7AD4 001C4A14  38 81 00 38 */	addi r4, r1, 0x38
/* 801C7AD8 001C4A18  4B FA B4 ED */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 801C7ADC 001C4A1C  90 7F 01 FC */	stw r3, 0x1fc(r31)
/* 801C7AE0 001C4A20  38 80 00 00 */	li r4, 0
/* 801C7AE4 001C4A24  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801C7AE8 001C4A28  4B FA AD 8D */	bl setOpen__Q24Game8WayPointFb
/* 801C7AEC 001C4A2C  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801C7AF0 001C4A30  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801C7AF4 001C4A34  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 801C7AF8 001C4A38  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801C7AFC 001C4A3C  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 801C7B00 001C4A40  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801C7B04 001C4A44  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 801C7B08 001C4A48  48 00 00 0C */	b .L_801C7B14
.L_801C7B0C:
/* 801C7B0C 001C4A4C  38 00 00 00 */	li r0, 0
/* 801C7B10 001C4A50  90 1F 01 FC */	stw r0, 0x1fc(r31)
.L_801C7B14:
/* 801C7B14 001C4A54  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801C7B18 001C4A58  28 00 00 00 */	cmplwi r0, 0
/* 801C7B1C 001C4A5C  41 82 00 58 */	beq .L_801C7B74
/* 801C7B20 001C4A60  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801C7B24 001C4A64  38 82 B2 54 */	addi r4, r2, lbl_805195B4@sda21
/* 801C7B28 001C4A68  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801C7B2C 001C4A6C  90 01 00 08 */	stw r0, 8(r1)
/* 801C7B30 001C4A70  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801C7B34 001C4A74  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801C7B38 001C4A78  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801C7B3C 001C4A7C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801C7B40 001C4A80  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801C7B44 001C4A84  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801C7B48 001C4A88  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801C7B4C 001C4A8C  48 27 74 99 */	bl getJoint__Q28SysShape5ModelFPc
/* 801C7B50 001C4A90  48 26 1D 51 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801C7B54 001C4A94  80 BF 02 1C */	lwz r5, 0x21c(r31)
/* 801C7B58 001C4A98  38 81 00 08 */	addi r4, r1, 8
/* 801C7B5C 001C4A9C  90 65 00 10 */	stw r3, 0x10(r5)
/* 801C7B60 001C4AA0  80 7F 02 1C */	lwz r3, 0x21c(r31)
/* 801C7B64 001C4AA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7B68 001C4AA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C7B6C 001C4AAC  7D 89 03 A6 */	mtctr r12
/* 801C7B70 001C4AB0  4E 80 04 21 */	bctrl 
.L_801C7B74:
/* 801C7B74 001C4AB4  80 7F 02 20 */	lwz r3, 0x220(r31)
/* 801C7B78 001C4AB8  28 03 00 00 */	cmplwi r3, 0
/* 801C7B7C 001C4ABC  41 82 00 50 */	beq .L_801C7BCC
/* 801C7B80 001C4AC0  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 801C7B84 001C4AC4  C0 3F 02 14 */	lfs f1, 0x214(r31)
/* 801C7B88 001C4AC8  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 801C7B8C 001C4ACC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C7B90 001C4AD0  3C 80 80 4B */	lis r4, __vt__Q23efx7ArgRotY@ha
/* 801C7B94 001C4AD4  38 04 69 60 */	addi r0, r4, __vt__Q23efx7ArgRotY@l
/* 801C7B98 001C4AD8  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801C7B9C 001C4ADC  38 81 00 24 */	addi r4, r1, 0x24
/* 801C7BA0 001C4AE0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801C7BA4 001C4AE4  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801C7BA8 001C4AE8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801C7BAC 001C4AEC  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801C7BB0 001C4AF0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801C7BB4 001C4AF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C7BB8 001C4AF8  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 801C7BBC 001C4AFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7BC0 001C4B00  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C7BC4 001C4B04  7D 89 03 A6 */	mtctr r12
/* 801C7BC8 001C4B08  4E 80 04 21 */	bctrl 
.L_801C7BCC:
/* 801C7BCC 001C4B0C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C7BD0 001C4B10  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801C7BD4 001C4B14  7C 08 03 A6 */	mtlr r0
/* 801C7BD8 001C4B18  38 21 00 60 */	addi r1, r1, 0x60
/* 801C7BDC 001C4B1C  4E 80 00 20 */	blr 
.endfn onSetPosition__Q24Game8ItemGateFv

.fn doLoad__Q24Game8ItemGateFR6Stream, global
/* 801C7BE0 001C4B20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C7BE4 001C4B24  7C 08 02 A6 */	mflr r0
/* 801C7BE8 001C4B28  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C7BEC 001C4B2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C7BF0 001C4B30  7C 9F 23 78 */	mr r31, r4
/* 801C7BF4 001C4B34  93 C1 00 08 */	stw r30, 8(r1)
/* 801C7BF8 001C4B38  7C 7E 1B 78 */	mr r30, r3
/* 801C7BFC 001C4B3C  7F E3 FB 78 */	mr r3, r31
/* 801C7C00 001C4B40  48 24 D1 AD */	bl readFloat__6StreamFv
/* 801C7C04 001C4B44  D0 3E 02 00 */	stfs f1, 0x200(r30)
/* 801C7C08 001C4B48  7F E3 FB 78 */	mr r3, r31
/* 801C7C0C 001C4B4C  48 24 CE 85 */	bl readInt__6StreamFv
/* 801C7C10 001C4B50  90 7E 02 0C */	stw r3, 0x20c(r30)
/* 801C7C14 001C4B54  7F C3 F3 78 */	mr r3, r30
/* 801C7C18 001C4B58  48 00 04 2D */	bl initMotion__Q24Game8ItemGateFv
/* 801C7C1C 001C4B5C  80 7E 02 0C */	lwz r3, 0x20c(r30)
/* 801C7C20 001C4B60  80 1E 02 10 */	lwz r0, 0x210(r30)
/* 801C7C24 001C4B64  7C 03 00 00 */	cmpw r3, r0
/* 801C7C28 001C4B68  41 80 00 74 */	blt .L_801C7C9C
/* 801C7C2C 001C4B6C  80 7E 01 F4 */	lwz r3, 0x1f4(r30)
/* 801C7C30 001C4B70  38 80 00 00 */	li r4, 0
/* 801C7C34 001C4B74  4B FF CF A1 */	bl setCollision__Q24Game12PlatInstanceFb
/* 801C7C38 001C4B78  7F C3 F3 78 */	mr r3, r30
/* 801C7C3C 001C4B7C  38 80 00 00 */	li r4, 0
/* 801C7C40 001C4B80  81 9E 00 00 */	lwz r12, 0(r30)
/* 801C7C44 001C4B84  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801C7C48 001C4B88  7D 89 03 A6 */	mtctr r12
/* 801C7C4C 001C4B8C  4E 80 04 21 */	bctrl 
/* 801C7C50 001C4B90  88 1E 02 18 */	lbz r0, 0x218(r30)
/* 801C7C54 001C4B94  28 00 00 00 */	cmplwi r0, 0
/* 801C7C58 001C4B98  41 82 00 2C */	beq .L_801C7C84
/* 801C7C5C 001C4B9C  80 7E 02 1C */	lwz r3, 0x21c(r30)
/* 801C7C60 001C4BA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7C64 001C4BA4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801C7C68 001C4BA8  7D 89 03 A6 */	mtctr r12
/* 801C7C6C 001C4BAC  4E 80 04 21 */	bctrl 
/* 801C7C70 001C4BB0  80 7E 02 20 */	lwz r3, 0x220(r30)
/* 801C7C74 001C4BB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7C78 001C4BB8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801C7C7C 001C4BBC  7D 89 03 A6 */	mtctr r12
/* 801C7C80 001C4BC0  4E 80 04 21 */	bctrl 
.L_801C7C84:
/* 801C7C84 001C4BC4  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801C7C88 001C4BC8  28 03 00 00 */	cmplwi r3, 0
/* 801C7C8C 001C4BCC  41 82 00 24 */	beq .L_801C7CB0
/* 801C7C90 001C4BD0  38 80 00 01 */	li r4, 1
/* 801C7C94 001C4BD4  4B FA AB E1 */	bl setOpen__Q24Game8WayPointFb
/* 801C7C98 001C4BD8  48 00 00 18 */	b .L_801C7CB0
.L_801C7C9C:
/* 801C7C9C 001C4BDC  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801C7CA0 001C4BE0  28 03 00 00 */	cmplwi r3, 0
/* 801C7CA4 001C4BE4  41 82 00 0C */	beq .L_801C7CB0
/* 801C7CA8 001C4BE8  38 80 00 00 */	li r4, 0
/* 801C7CAC 001C4BEC  4B FA AB C9 */	bl setOpen__Q24Game8WayPointFb
.L_801C7CB0:
/* 801C7CB0 001C4BF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C7CB4 001C4BF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C7CB8 001C4BF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C7CBC 001C4BFC  7C 08 03 A6 */	mtlr r0
/* 801C7CC0 001C4C00  38 21 00 10 */	addi r1, r1, 0x10
/* 801C7CC4 001C4C04  4E 80 00 20 */	blr 
.endfn doLoad__Q24Game8ItemGateFR6Stream

.fn doSave__Q24Game8ItemGateFR6Stream, global
/* 801C7CC8 001C4C08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C7CCC 001C4C0C  7C 08 02 A6 */	mflr r0
/* 801C7CD0 001C4C10  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C7CD4 001C4C14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C7CD8 001C4C18  7C 9F 23 78 */	mr r31, r4
/* 801C7CDC 001C4C1C  93 C1 00 08 */	stw r30, 8(r1)
/* 801C7CE0 001C4C20  7C 7E 1B 78 */	mr r30, r3
/* 801C7CE4 001C4C24  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 801C7CE8 001C4C28  7F E3 FB 78 */	mr r3, r31
/* 801C7CEC 001C4C2C  48 24 DB 5D */	bl writeFloat__6StreamFf
/* 801C7CF0 001C4C30  80 9E 02 0C */	lwz r4, 0x20c(r30)
/* 801C7CF4 001C4C34  7F E3 FB 78 */	mr r3, r31
/* 801C7CF8 001C4C38  48 24 DA C9 */	bl writeInt__6StreamFi
/* 801C7CFC 001C4C3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C7D00 001C4C40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C7D04 001C4C44  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C7D08 001C4C48  7C 08 03 A6 */	mtlr r0
/* 801C7D0C 001C4C4C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C7D10 001C4C50  4E 80 00 20 */	blr 
.endfn doSave__Q24Game8ItemGateFR6Stream

.fn updateBoundSphere__Q24Game8ItemGateFv, global
/* 801C7D14 001C4C54  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 801C7D18 001C4C58  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
/* 801C7D1C 001C4C5C  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 801C7D20 001C4C60  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 801C7D24 001C4C64  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 801C7D28 001C4C68  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 801C7D2C 001C4C6C  4E 80 00 20 */	blr 
.endfn updateBoundSphere__Q24Game8ItemGateFv

.fn update__Q24Game8ItemGateFv, global
/* 801C7D30 001C4C70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C7D34 001C4C74  7C 08 02 A6 */	mflr r0
/* 801C7D38 001C4C78  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C7D3C 001C4C7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C7D40 001C4C80  7C 7F 1B 78 */	mr r31, r3
/* 801C7D44 001C4C84  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7D48 001C4C88  81 8C 01 C8 */	lwz r12, 0x1c8(r12)
/* 801C7D4C 001C4C8C  7D 89 03 A6 */	mtctr r12
/* 801C7D50 001C4C90  4E 80 04 21 */	bctrl 
/* 801C7D54 001C4C94  7F E3 FB 78 */	mr r3, r31
/* 801C7D58 001C4C98  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C7D5C 001C4C9C  81 8C 02 10 */	lwz r12, 0x210(r12)
/* 801C7D60 001C4CA0  7D 89 03 A6 */	mtctr r12
/* 801C7D64 001C4CA4  4E 80 04 21 */	bctrl 
/* 801C7D68 001C4CA8  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C7D6C 001C4CAC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801C7D70 001C4CB0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C7D74 001C4CB4  7D 89 03 A6 */	mtctr r12
/* 801C7D78 001C4CB8  4E 80 04 21 */	bctrl 
/* 801C7D7C 001C4CBC  7F E3 FB 78 */	mr r3, r31
/* 801C7D80 001C4CC0  4B F7 3F E9 */	bl updateCell__Q24Game8CreatureFv
/* 801C7D84 001C4CC4  7F E3 FB 78 */	mr r3, r31
/* 801C7D88 001C4CC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C7D8C 001C4CCC  81 8C 01 D4 */	lwz r12, 0x1d4(r12)
/* 801C7D90 001C4CD0  7D 89 03 A6 */	mtctr r12
/* 801C7D94 001C4CD4  4E 80 04 21 */	bctrl 
/* 801C7D98 001C4CD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C7D9C 001C4CDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C7DA0 001C4CE0  7C 08 03 A6 */	mtlr r0
/* 801C7DA4 001C4CE4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C7DA8 001C4CE8  4E 80 00 20 */	blr 
.endfn update__Q24Game8ItemGateFv

.fn doAI__Q24Game8ItemGateFv, global
/* 801C7DAC 001C4CEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C7DB0 001C4CF0  7C 08 02 A6 */	mflr r0
/* 801C7DB4 001C4CF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C7DB8 001C4CF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C7DBC 001C4CFC  7C 7F 1B 78 */	mr r31, r3
/* 801C7DC0 001C4D00  80 63 01 F0 */	lwz r3, 0x1f0(r3)
/* 801C7DC4 001C4D04  2C 03 00 00 */	cmpwi r3, 0
/* 801C7DC8 001C4D08  40 81 00 14 */	ble .L_801C7DDC
/* 801C7DCC 001C4D0C  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 801C7DD0 001C4D10  7C 00 1A 14 */	add r0, r0, r3
/* 801C7DD4 001C4D14  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 801C7DD8 001C4D18  48 00 00 2C */	b .L_801C7E04
.L_801C7DDC:
/* 801C7DDC 001C4D1C  80 7F 01 EC */	lwz r3, 0x1ec(r31)
/* 801C7DE0 001C4D20  2C 03 00 00 */	cmpwi r3, 0
/* 801C7DE4 001C4D24  40 81 00 20 */	ble .L_801C7E04
/* 801C7DE8 001C4D28  38 03 FF FC */	addi r0, r3, -4
/* 801C7DEC 001C4D2C  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 801C7DF0 001C4D30  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 801C7DF4 001C4D34  2C 00 00 00 */	cmpwi r0, 0
/* 801C7DF8 001C4D38  40 80 00 0C */	bge .L_801C7E04
/* 801C7DFC 001C4D3C  38 00 00 00 */	li r0, 0
/* 801C7E00 001C4D40  90 1F 01 EC */	stw r0, 0x1ec(r31)
.L_801C7E04:
/* 801C7E04 001C4D44  38 00 00 00 */	li r0, 0
/* 801C7E08 001C4D48  7F E4 FB 78 */	mr r4, r31
/* 801C7E0C 001C4D4C  90 1F 01 F0 */	stw r0, 0x1f0(r31)
/* 801C7E10 001C4D50  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801C7E14 001C4D54  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7E18 001C4D58  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C7E1C 001C4D5C  7D 89 03 A6 */	mtctr r12
/* 801C7E20 001C4D60  4E 80 04 21 */	bctrl 
/* 801C7E24 001C4D64  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801C7E28 001C4D68  48 06 6E 19 */	bl update__Q24Game11TSoundEventFv
/* 801C7E2C 001C4D6C  2C 03 00 02 */	cmpwi r3, 2
/* 801C7E30 001C4D70  41 82 00 08 */	beq .L_801C7E38
/* 801C7E34 001C4D74  48 00 00 50 */	b .L_801C7E84
.L_801C7E38:
/* 801C7E38 001C4D78  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C7E3C 001C4D7C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801C7E40 001C4D80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C7E44 001C4D84  7D 89 03 A6 */	mtctr r12
/* 801C7E48 001C4D88  4E 80 04 21 */	bctrl 
/* 801C7E4C 001C4D8C  2C 03 00 0A */	cmpwi r3, 0xa
/* 801C7E50 001C4D90  41 82 00 20 */	beq .L_801C7E70
/* 801C7E54 001C4D94  3C 60 80 48 */	lis r3, lbl_804801A0@ha
/* 801C7E58 001C4D98  3C A0 80 48 */	lis r5, lbl_804801BC@ha
/* 801C7E5C 001C4D9C  38 63 01 A0 */	addi r3, r3, lbl_804801A0@l
/* 801C7E60 001C4DA0  38 80 01 62 */	li r4, 0x162
/* 801C7E64 001C4DA4  38 A5 01 BC */	addi r5, r5, lbl_804801BC@l
/* 801C7E68 001C4DA8  4C C6 31 82 */	crclr 6
/* 801C7E6C 001C4DAC  4B E6 27 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801C7E70:
/* 801C7E70 001C4DB0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C7E74 001C4DB4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801C7E78 001C4DB8  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 801C7E7C 001C4DBC  7D 89 03 A6 */	mtctr r12
/* 801C7E80 001C4DC0  4E 80 04 21 */	bctrl 
.L_801C7E84:
/* 801C7E84 001C4DC4  88 1F 02 18 */	lbz r0, 0x218(r31)
/* 801C7E88 001C4DC8  28 00 00 00 */	cmplwi r0, 0
/* 801C7E8C 001C4DCC  41 82 00 3C */	beq .L_801C7EC8
/* 801C7E90 001C4DD0  7F E3 FB 78 */	mr r3, r31
/* 801C7E94 001C4DD4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C7E98 001C4DD8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C7E9C 001C4DDC  7D 89 03 A6 */	mtctr r12
/* 801C7EA0 001C4DE0  4E 80 04 21 */	bctrl 
/* 801C7EA4 001C4DE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C7EA8 001C4DE8  41 82 00 20 */	beq .L_801C7EC8
/* 801C7EAC 001C4DEC  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C7EB0 001C4DF0  38 80 30 38 */	li r4, 0x3038
/* 801C7EB4 001C4DF4  38 A0 00 00 */	li r5, 0
/* 801C7EB8 001C4DF8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801C7EBC 001C4DFC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801C7EC0 001C4E00  7D 89 03 A6 */	mtctr r12
/* 801C7EC4 001C4E04  4E 80 04 21 */	bctrl 
.L_801C7EC8:
/* 801C7EC8 001C4E08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C7ECC 001C4E0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C7ED0 001C4E10  7C 08 03 A6 */	mtlr r0
/* 801C7ED4 001C4E14  38 21 00 10 */	addi r1, r1, 0x10
/* 801C7ED8 001C4E18  4E 80 00 20 */	blr 
.endfn doAI__Q24Game8ItemGateFv

.fn onKeyEvent__Q24Game8ItemGateFRCQ28SysShape8KeyEvent, global
/* 801C7EDC 001C4E1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C7EE0 001C4E20  7C 08 02 A6 */	mflr r0
/* 801C7EE4 001C4E24  7C 66 1B 78 */	mr r6, r3
/* 801C7EE8 001C4E28  7C 85 23 78 */	mr r5, r4
/* 801C7EEC 001C4E2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C7EF0 001C4E30  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801C7EF4 001C4E34  28 03 00 00 */	cmplwi r3, 0
/* 801C7EF8 001C4E38  41 82 00 18 */	beq .L_801C7F10
/* 801C7EFC 001C4E3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7F00 001C4E40  7C C4 33 78 */	mr r4, r6
/* 801C7F04 001C4E44  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C7F08 001C4E48  7D 89 03 A6 */	mtctr r12
/* 801C7F0C 001C4E4C  4E 80 04 21 */	bctrl 
.L_801C7F10:
/* 801C7F10 001C4E50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C7F14 001C4E54  7C 08 03 A6 */	mtlr r0
/* 801C7F18 001C4E58  38 21 00 10 */	addi r1, r1, 0x10
/* 801C7F1C 001C4E5C  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game8ItemGateFRCQ28SysShape8KeyEvent

.fn onKeyEvent__Q24Game9GateStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent, weak
/* 801C7F20 001C4E60  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game9GateStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent

.fn interactAttack__Q24Game8ItemGateFRQ24Game14InteractAttack, global
/* 801C7F24 001C4E64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C7F28 001C4E68  7C 08 02 A6 */	mflr r0
/* 801C7F2C 001C4E6C  7C 85 23 78 */	mr r5, r4
/* 801C7F30 001C4E70  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C7F34 001C4E74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C7F38 001C4E78  7C 7F 1B 78 */	mr r31, r3
/* 801C7F3C 001C4E7C  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801C7F40 001C4E80  28 03 00 00 */	cmplwi r3, 0
/* 801C7F44 001C4E84  41 82 00 E4 */	beq .L_801C8028
/* 801C7F48 001C4E88  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7F4C 001C4E8C  7F E4 FB 78 */	mr r4, r31
/* 801C7F50 001C4E90  C0 25 00 08 */	lfs f1, 8(r5)
/* 801C7F54 001C4E94  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C7F58 001C4E98  7D 89 03 A6 */	mtctr r12
/* 801C7F5C 001C4E9C  4E 80 04 21 */	bctrl 
/* 801C7F60 001C4EA0  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801C7F64 001C4EA4  48 06 6C 85 */	bl event__Q24Game11TSoundEventFv
/* 801C7F68 001C4EA8  2C 03 00 02 */	cmpwi r3, 2
/* 801C7F6C 001C4EAC  41 82 00 BC */	beq .L_801C8028
/* 801C7F70 001C4EB0  40 80 00 10 */	bge .L_801C7F80
/* 801C7F74 001C4EB4  2C 03 00 01 */	cmpwi r3, 1
/* 801C7F78 001C4EB8  40 80 00 14 */	bge .L_801C7F8C
/* 801C7F7C 001C4EBC  48 00 00 AC */	b .L_801C8028
.L_801C7F80:
/* 801C7F80 001C4EC0  2C 03 00 04 */	cmpwi r3, 4
/* 801C7F84 001C4EC4  40 80 00 A4 */	bge .L_801C8028
/* 801C7F88 001C4EC8  48 00 00 54 */	b .L_801C7FDC
.L_801C7F8C:
/* 801C7F8C 001C4ECC  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C7F90 001C4ED0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801C7F94 001C4ED4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C7F98 001C4ED8  7D 89 03 A6 */	mtctr r12
/* 801C7F9C 001C4EDC  4E 80 04 21 */	bctrl 
/* 801C7FA0 001C4EE0  2C 03 00 0A */	cmpwi r3, 0xa
/* 801C7FA4 001C4EE4  41 82 00 20 */	beq .L_801C7FC4
/* 801C7FA8 001C4EE8  3C 60 80 48 */	lis r3, lbl_804801A0@ha
/* 801C7FAC 001C4EEC  3C A0 80 48 */	lis r5, lbl_804801BC@ha
/* 801C7FB0 001C4EF0  38 63 01 A0 */	addi r3, r3, lbl_804801A0@l
/* 801C7FB4 001C4EF4  38 80 01 7C */	li r4, 0x17c
/* 801C7FB8 001C4EF8  38 A5 01 BC */	addi r5, r5, lbl_804801BC@l
/* 801C7FBC 001C4EFC  4C C6 31 82 */	crclr 6
/* 801C7FC0 001C4F00  4B E6 26 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801C7FC4:
/* 801C7FC4 001C4F04  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C7FC8 001C4F08  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801C7FCC 001C4F0C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801C7FD0 001C4F10  7D 89 03 A6 */	mtctr r12
/* 801C7FD4 001C4F14  4E 80 04 21 */	bctrl 
/* 801C7FD8 001C4F18  48 00 00 50 */	b .L_801C8028
.L_801C7FDC:
/* 801C7FDC 001C4F1C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C7FE0 001C4F20  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801C7FE4 001C4F24  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C7FE8 001C4F28  7D 89 03 A6 */	mtctr r12
/* 801C7FEC 001C4F2C  4E 80 04 21 */	bctrl 
/* 801C7FF0 001C4F30  2C 03 00 0A */	cmpwi r3, 0xa
/* 801C7FF4 001C4F34  41 82 00 20 */	beq .L_801C8014
/* 801C7FF8 001C4F38  3C 60 80 48 */	lis r3, lbl_804801A0@ha
/* 801C7FFC 001C4F3C  3C A0 80 48 */	lis r5, lbl_804801BC@ha
/* 801C8000 001C4F40  38 63 01 A0 */	addi r3, r3, lbl_804801A0@l
/* 801C8004 001C4F44  38 80 01 82 */	li r4, 0x182
/* 801C8008 001C4F48  38 A5 01 BC */	addi r5, r5, lbl_804801BC@l
/* 801C800C 001C4F4C  4C C6 31 82 */	crclr 6
/* 801C8010 001C4F50  4B E6 26 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801C8014:
/* 801C8014 001C4F54  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C8018 001C4F58  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801C801C 001C4F5C  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 801C8020 001C4F60  7D 89 03 A6 */	mtctr r12
/* 801C8024 001C4F64  4E 80 04 21 */	bctrl 
.L_801C8028:
/* 801C8028 001C4F68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C802C 001C4F6C  38 60 00 01 */	li r3, 1
/* 801C8030 001C4F70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C8034 001C4F74  7C 08 03 A6 */	mtlr r0
/* 801C8038 001C4F78  38 21 00 10 */	addi r1, r1, 0x10
/* 801C803C 001C4F7C  4E 80 00 20 */	blr 
.endfn interactAttack__Q24Game8ItemGateFRQ24Game14InteractAttack

.fn onDamage__Q24Game9GateStateFPQ24Game8ItemGatef, weak
/* 801C8040 001C4F80  4E 80 00 20 */	blr 
.endfn onDamage__Q24Game9GateStateFPQ24Game8ItemGatef

.fn initMotion__Q24Game8ItemGateFv, global
/* 801C8044 001C4F84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C8048 001C4F88  7C 08 02 A6 */	mflr r0
/* 801C804C 001C4F8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C8050 001C4F90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C8054 001C4F94  7C 7F 1B 78 */	mr r31, r3
/* 801C8058 001C4F98  80 83 02 0C */	lwz r4, 0x20c(r3)
/* 801C805C 001C4F9C  80 03 02 10 */	lwz r0, 0x210(r3)
/* 801C8060 001C4FA0  7C 04 00 00 */	cmpw r4, r0
/* 801C8064 001C4FA4  40 80 00 18 */	bge .L_801C807C
/* 801C8068 001C4FA8  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801C806C 001C4FAC  38 84 00 03 */	addi r4, r4, 3
/* 801C8070 001C4FB0  38 A0 00 00 */	li r5, 0
/* 801C8074 001C4FB4  48 26 0C 15 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801C8078 001C4FB8  48 00 00 1C */	b .L_801C8094
.L_801C807C:
/* 801C807C 001C4FBC  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801C8080 001C4FC0  38 80 00 05 */	li r4, 5
/* 801C8084 001C4FC4  38 A0 00 00 */	li r5, 0
/* 801C8088 001C4FC8  48 26 0C 01 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801C808C 001C4FCC  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801C8090 001C4FD0  48 26 0E 71 */	bl setLastFrame__Q28SysShape8AnimatorFv
.L_801C8094:
/* 801C8094 001C4FD4  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C8098 001C4FD8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801C809C 001C4FDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C80A0 001C4FE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C80A4 001C4FE4  7C 08 03 A6 */	mtlr r0
/* 801C80A8 001C4FE8  38 21 00 10 */	addi r1, r1, 0x10
/* 801C80AC 001C4FEC  4E 80 00 20 */	blr 
.endfn initMotion__Q24Game8ItemGateFv

.fn "getVectorField__Q24Game8ItemGateFRQ23Sys6SphereR10Vector3<f>", global
/* 801C80B0 001C4FF0  C0 04 00 04 */	lfs f0, 4(r4)
/* 801C80B4 001C4FF4  C0 23 02 28 */	lfs f1, 0x228(r3)
/* 801C80B8 001C4FF8  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 801C80BC 001C4FFC  EC 80 00 72 */	fmuls f4, f0, f1
/* 801C80C0 001C5000  C0 24 00 00 */	lfs f1, 0(r4)
/* 801C80C4 001C5004  C0 A3 02 24 */	lfs f5, 0x224(r3)
/* 801C80C8 001C5008  FC 60 10 50 */	fneg f3, f2
/* 801C80CC 001C500C  C0 44 00 08 */	lfs f2, 8(r4)
/* 801C80D0 001C5010  EC A1 21 7A */	fmadds f5, f1, f5, f4
/* 801C80D4 001C5014  C0 C3 02 2C */	lfs f6, 0x22c(r3)
/* 801C80D8 001C5018  C0 83 02 30 */	lfs f4, 0x230(r3)
/* 801C80DC 001C501C  EC A2 29 BA */	fmadds f5, f2, f6, f5
/* 801C80E0 001C5020  EC 85 20 28 */	fsubs f4, f5, f4
/* 801C80E4 001C5024  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 801C80E8 001C5028  4C 41 13 82 */	cror 2, 1, 2
/* 801C80EC 001C502C  40 82 00 C8 */	bne .L_801C81B4
/* 801C80F0 001C5030  C0 83 02 48 */	lfs f4, 0x248(r3)
/* 801C80F4 001C5034  C0 C3 02 44 */	lfs f6, 0x244(r3)
/* 801C80F8 001C5038  EC A0 01 32 */	fmuls f5, f0, f4
/* 801C80FC 001C503C  C0 E3 02 4C */	lfs f7, 0x24c(r3)
/* 801C8100 001C5040  C0 83 02 50 */	lfs f4, 0x250(r3)
/* 801C8104 001C5044  EC A1 29 BA */	fmadds f5, f1, f6, f5
/* 801C8108 001C5048  EC A2 29 FA */	fmadds f5, f2, f7, f5
/* 801C810C 001C504C  EC 85 20 28 */	fsubs f4, f5, f4
/* 801C8110 001C5050  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 801C8114 001C5054  4C 41 13 82 */	cror 2, 1, 2
/* 801C8118 001C5058  40 82 00 2C */	bne .L_801C8144
/* 801C811C 001C505C  C0 03 02 64 */	lfs f0, 0x264(r3)
/* 801C8120 001C5060  C0 23 02 68 */	lfs f1, 0x268(r3)
/* 801C8124 001C5064  FC 00 00 50 */	fneg f0, f0
/* 801C8128 001C5068  C0 43 02 6C */	lfs f2, 0x26c(r3)
/* 801C812C 001C506C  FC 20 08 50 */	fneg f1, f1
/* 801C8130 001C5070  FC 40 10 50 */	fneg f2, f2
/* 801C8134 001C5074  D0 05 00 00 */	stfs f0, 0(r5)
/* 801C8138 001C5078  D0 25 00 04 */	stfs f1, 4(r5)
/* 801C813C 001C507C  D0 45 00 08 */	stfs f2, 8(r5)
/* 801C8140 001C5080  48 00 01 F8 */	b .L_801C8338
.L_801C8144:
/* 801C8144 001C5084  C0 83 02 58 */	lfs f4, 0x258(r3)
/* 801C8148 001C5088  C0 A3 02 54 */	lfs f5, 0x254(r3)
/* 801C814C 001C508C  EC 80 01 32 */	fmuls f4, f0, f4
/* 801C8150 001C5090  C0 C3 02 5C */	lfs f6, 0x25c(r3)
/* 801C8154 001C5094  C0 03 02 60 */	lfs f0, 0x260(r3)
/* 801C8158 001C5098  EC 21 21 7A */	fmadds f1, f1, f5, f4
/* 801C815C 001C509C  EC 22 09 BA */	fmadds f1, f2, f6, f1
/* 801C8160 001C50A0  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C8164 001C50A4  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801C8168 001C50A8  4C 41 13 82 */	cror 2, 1, 2
/* 801C816C 001C50AC  40 82 00 20 */	bne .L_801C818C
/* 801C8170 001C50B0  C0 03 02 64 */	lfs f0, 0x264(r3)
/* 801C8174 001C50B4  D0 05 00 00 */	stfs f0, 0(r5)
/* 801C8178 001C50B8  C0 03 02 68 */	lfs f0, 0x268(r3)
/* 801C817C 001C50BC  D0 05 00 04 */	stfs f0, 4(r5)
/* 801C8180 001C50C0  C0 03 02 6C */	lfs f0, 0x26c(r3)
/* 801C8184 001C50C4  D0 05 00 08 */	stfs f0, 8(r5)
/* 801C8188 001C50C8  48 00 01 B0 */	b .L_801C8338
.L_801C818C:
/* 801C818C 001C50CC  C0 03 02 70 */	lfs f0, 0x270(r3)
/* 801C8190 001C50D0  C0 23 02 74 */	lfs f1, 0x274(r3)
/* 801C8194 001C50D4  FC 00 00 50 */	fneg f0, f0
/* 801C8198 001C50D8  C0 43 02 78 */	lfs f2, 0x278(r3)
/* 801C819C 001C50DC  FC 20 08 50 */	fneg f1, f1
/* 801C81A0 001C50E0  FC 40 10 50 */	fneg f2, f2
/* 801C81A4 001C50E4  D0 05 00 00 */	stfs f0, 0(r5)
/* 801C81A8 001C50E8  D0 25 00 04 */	stfs f1, 4(r5)
/* 801C81AC 001C50EC  D0 45 00 08 */	stfs f2, 8(r5)
/* 801C81B0 001C50F0  48 00 01 88 */	b .L_801C8338
.L_801C81B4:
/* 801C81B4 001C50F4  C0 83 02 38 */	lfs f4, 0x238(r3)
/* 801C81B8 001C50F8  C0 C3 02 34 */	lfs f6, 0x234(r3)
/* 801C81BC 001C50FC  EC A0 01 32 */	fmuls f5, f0, f4
/* 801C81C0 001C5100  C0 E3 02 3C */	lfs f7, 0x23c(r3)
/* 801C81C4 001C5104  C0 83 02 40 */	lfs f4, 0x240(r3)
/* 801C81C8 001C5108  EC A1 29 BA */	fmadds f5, f1, f6, f5
/* 801C81CC 001C510C  EC A2 29 FA */	fmadds f5, f2, f7, f5
/* 801C81D0 001C5110  EC 85 20 28 */	fsubs f4, f5, f4
/* 801C81D4 001C5114  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 801C81D8 001C5118  4C 41 13 82 */	cror 2, 1, 2
/* 801C81DC 001C511C  40 82 00 BC */	bne .L_801C8298
/* 801C81E0 001C5120  C0 83 02 48 */	lfs f4, 0x248(r3)
/* 801C81E4 001C5124  C0 C3 02 44 */	lfs f6, 0x244(r3)
/* 801C81E8 001C5128  EC A0 01 32 */	fmuls f5, f0, f4
/* 801C81EC 001C512C  C0 E3 02 4C */	lfs f7, 0x24c(r3)
/* 801C81F0 001C5130  C0 83 02 50 */	lfs f4, 0x250(r3)
/* 801C81F4 001C5134  EC A1 29 BA */	fmadds f5, f1, f6, f5
/* 801C81F8 001C5138  EC A2 29 FA */	fmadds f5, f2, f7, f5
/* 801C81FC 001C513C  EC 85 20 28 */	fsubs f4, f5, f4
/* 801C8200 001C5140  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 801C8204 001C5144  4C 41 13 82 */	cror 2, 1, 2
/* 801C8208 001C5148  40 82 00 2C */	bne .L_801C8234
/* 801C820C 001C514C  C0 03 02 64 */	lfs f0, 0x264(r3)
/* 801C8210 001C5150  C0 23 02 68 */	lfs f1, 0x268(r3)
/* 801C8214 001C5154  FC 00 00 50 */	fneg f0, f0
/* 801C8218 001C5158  C0 43 02 6C */	lfs f2, 0x26c(r3)
/* 801C821C 001C515C  FC 20 08 50 */	fneg f1, f1
/* 801C8220 001C5160  FC 40 10 50 */	fneg f2, f2
/* 801C8224 001C5164  D0 05 00 00 */	stfs f0, 0(r5)
/* 801C8228 001C5168  D0 25 00 04 */	stfs f1, 4(r5)
/* 801C822C 001C516C  D0 45 00 08 */	stfs f2, 8(r5)
/* 801C8230 001C5170  48 00 01 08 */	b .L_801C8338
.L_801C8234:
/* 801C8234 001C5174  C0 83 02 58 */	lfs f4, 0x258(r3)
/* 801C8238 001C5178  C0 A3 02 54 */	lfs f5, 0x254(r3)
/* 801C823C 001C517C  EC 80 01 32 */	fmuls f4, f0, f4
/* 801C8240 001C5180  C0 C3 02 5C */	lfs f6, 0x25c(r3)
/* 801C8244 001C5184  C0 03 02 60 */	lfs f0, 0x260(r3)
/* 801C8248 001C5188  EC 21 21 7A */	fmadds f1, f1, f5, f4
/* 801C824C 001C518C  EC 22 09 BA */	fmadds f1, f2, f6, f1
/* 801C8250 001C5190  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C8254 001C5194  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801C8258 001C5198  4C 41 13 82 */	cror 2, 1, 2
/* 801C825C 001C519C  40 82 00 20 */	bne .L_801C827C
/* 801C8260 001C51A0  C0 03 02 64 */	lfs f0, 0x264(r3)
/* 801C8264 001C51A4  D0 05 00 00 */	stfs f0, 0(r5)
/* 801C8268 001C51A8  C0 03 02 68 */	lfs f0, 0x268(r3)
/* 801C826C 001C51AC  D0 05 00 04 */	stfs f0, 4(r5)
/* 801C8270 001C51B0  C0 03 02 6C */	lfs f0, 0x26c(r3)
/* 801C8274 001C51B4  D0 05 00 08 */	stfs f0, 8(r5)
/* 801C8278 001C51B8  48 00 00 C0 */	b .L_801C8338
.L_801C827C:
/* 801C827C 001C51BC  C0 03 02 70 */	lfs f0, 0x270(r3)
/* 801C8280 001C51C0  D0 05 00 00 */	stfs f0, 0(r5)
/* 801C8284 001C51C4  C0 03 02 74 */	lfs f0, 0x274(r3)
/* 801C8288 001C51C8  D0 05 00 04 */	stfs f0, 4(r5)
/* 801C828C 001C51CC  C0 03 02 78 */	lfs f0, 0x278(r3)
/* 801C8290 001C51D0  D0 05 00 08 */	stfs f0, 8(r5)
/* 801C8294 001C51D4  48 00 00 A4 */	b .L_801C8338
.L_801C8298:
/* 801C8298 001C51D8  C0 83 02 48 */	lfs f4, 0x248(r3)
/* 801C829C 001C51DC  C0 C3 02 44 */	lfs f6, 0x244(r3)
/* 801C82A0 001C51E0  EC A0 01 32 */	fmuls f5, f0, f4
/* 801C82A4 001C51E4  C0 E3 02 4C */	lfs f7, 0x24c(r3)
/* 801C82A8 001C51E8  C0 83 02 50 */	lfs f4, 0x250(r3)
/* 801C82AC 001C51EC  EC A1 29 BA */	fmadds f5, f1, f6, f5
/* 801C82B0 001C51F0  EC A2 29 FA */	fmadds f5, f2, f7, f5
/* 801C82B4 001C51F4  EC 85 20 28 */	fsubs f4, f5, f4
/* 801C82B8 001C51F8  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 801C82BC 001C51FC  4C 41 13 82 */	cror 2, 1, 2
/* 801C82C0 001C5200  40 82 00 20 */	bne .L_801C82E0
/* 801C82C4 001C5204  C0 03 02 70 */	lfs f0, 0x270(r3)
/* 801C82C8 001C5208  D0 05 00 00 */	stfs f0, 0(r5)
/* 801C82CC 001C520C  C0 03 02 74 */	lfs f0, 0x274(r3)
/* 801C82D0 001C5210  D0 05 00 04 */	stfs f0, 4(r5)
/* 801C82D4 001C5214  C0 03 02 78 */	lfs f0, 0x278(r3)
/* 801C82D8 001C5218  D0 05 00 08 */	stfs f0, 8(r5)
/* 801C82DC 001C521C  48 00 00 5C */	b .L_801C8338
.L_801C82E0:
/* 801C82E0 001C5220  C0 83 02 58 */	lfs f4, 0x258(r3)
/* 801C82E4 001C5224  C0 A3 02 54 */	lfs f5, 0x254(r3)
/* 801C82E8 001C5228  EC 80 01 32 */	fmuls f4, f0, f4
/* 801C82EC 001C522C  C0 C3 02 5C */	lfs f6, 0x25c(r3)
/* 801C82F0 001C5230  C0 03 02 60 */	lfs f0, 0x260(r3)
/* 801C82F4 001C5234  EC 21 21 7A */	fmadds f1, f1, f5, f4
/* 801C82F8 001C5238  EC 22 09 BA */	fmadds f1, f2, f6, f1
/* 801C82FC 001C523C  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C8300 001C5240  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801C8304 001C5244  4C 41 13 82 */	cror 2, 1, 2
/* 801C8308 001C5248  40 82 00 20 */	bne .L_801C8328
/* 801C830C 001C524C  C0 03 02 70 */	lfs f0, 0x270(r3)
/* 801C8310 001C5250  D0 05 00 00 */	stfs f0, 0(r5)
/* 801C8314 001C5254  C0 03 02 74 */	lfs f0, 0x274(r3)
/* 801C8318 001C5258  D0 05 00 04 */	stfs f0, 4(r5)
/* 801C831C 001C525C  C0 03 02 78 */	lfs f0, 0x278(r3)
/* 801C8320 001C5260  D0 05 00 08 */	stfs f0, 8(r5)
/* 801C8324 001C5264  48 00 00 14 */	b .L_801C8338
.L_801C8328:
/* 801C8328 001C5268  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C832C 001C526C  D0 05 00 00 */	stfs f0, 0(r5)
/* 801C8330 001C5270  D0 05 00 04 */	stfs f0, 4(r5)
/* 801C8334 001C5274  D0 05 00 08 */	stfs f0, 8(r5)
.L_801C8338:
/* 801C8338 001C5278  38 60 00 01 */	li r3, 1
/* 801C833C 001C527C  4E 80 00 20 */	blr 
.endfn "getVectorField__Q24Game8ItemGateFRQ23Sys6SphereR10Vector3<f>"

.fn getWorkDistance__Q24Game8ItemGateFRQ23Sys6Sphere, global
/* 801C8340 001C5280  C0 A4 00 04 */	lfs f5, 4(r4)
/* 801C8344 001C5284  C0 03 02 48 */	lfs f0, 0x248(r3)
/* 801C8348 001C5288  C0 63 02 28 */	lfs f3, 0x228(r3)
/* 801C834C 001C528C  C0 43 02 38 */	lfs f2, 0x238(r3)
/* 801C8350 001C5290  EC 25 00 32 */	fmuls f1, f5, f0
/* 801C8354 001C5294  C0 03 02 58 */	lfs f0, 0x258(r3)
/* 801C8358 001C5298  EC 65 00 F2 */	fmuls f3, f5, f3
/* 801C835C 001C529C  C1 04 00 00 */	lfs f8, 0(r4)
/* 801C8360 001C52A0  EC 85 00 B2 */	fmuls f4, f5, f2
/* 801C8364 001C52A4  C0 43 02 44 */	lfs f2, 0x244(r3)
/* 801C8368 001C52A8  C0 C3 02 24 */	lfs f6, 0x224(r3)
/* 801C836C 001C52AC  EC 05 00 32 */	fmuls f0, f5, f0
/* 801C8370 001C52B0  C0 A3 02 34 */	lfs f5, 0x234(r3)
/* 801C8374 001C52B4  EC 48 08 BA */	fmadds f2, f8, f2, f1
/* 801C8378 001C52B8  C0 23 02 54 */	lfs f1, 0x254(r3)
/* 801C837C 001C52BC  EC C8 19 BA */	fmadds f6, f8, f6, f3
/* 801C8380 001C52C0  C1 24 00 08 */	lfs f9, 8(r4)
/* 801C8384 001C52C4  C0 63 02 4C */	lfs f3, 0x24c(r3)
/* 801C8388 001C52C8  EC 88 21 7A */	fmadds f4, f8, f5, f4
/* 801C838C 001C52CC  C0 E3 02 2C */	lfs f7, 0x22c(r3)
/* 801C8390 001C52D0  EC 28 00 7A */	fmadds f1, f8, f1, f0
/* 801C8394 001C52D4  C0 A3 02 3C */	lfs f5, 0x23c(r3)
/* 801C8398 001C52D8  EC 69 10 FA */	fmadds f3, f9, f3, f2
/* 801C839C 001C52DC  C0 03 02 50 */	lfs f0, 0x250(r3)
/* 801C83A0 001C52E0  C0 43 02 5C */	lfs f2, 0x25c(r3)
/* 801C83A4 001C52E4  EC E9 31 FA */	fmadds f7, f9, f7, f6
/* 801C83A8 001C52E8  C0 C3 02 30 */	lfs f6, 0x230(r3)
/* 801C83AC 001C52EC  EC A9 21 7A */	fmadds f5, f9, f5, f4
/* 801C83B0 001C52F0  C0 83 02 40 */	lfs f4, 0x240(r3)
/* 801C83B4 001C52F4  EC 63 00 28 */	fsubs f3, f3, f0
/* 801C83B8 001C52F8  C1 04 00 0C */	lfs f8, 0xc(r4)
/* 801C83BC 001C52FC  EC C7 30 28 */	fsubs f6, f7, f6
/* 801C83C0 001C5300  C0 03 02 60 */	lfs f0, 0x260(r3)
/* 801C83C4 001C5304  EC 29 08 BA */	fmadds f1, f9, f2, f1
/* 801C83C8 001C5308  C0 E2 B2 38 */	lfs f7, lbl_80519598@sda21(r2)
/* 801C83CC 001C530C  EC 45 20 28 */	fsubs f2, f5, f4
/* 801C83D0 001C5310  EC 83 40 28 */	fsubs f4, f3, f8
/* 801C83D4 001C5314  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C83D8 001C5318  EC 66 40 28 */	fsubs f3, f6, f8
/* 801C83DC 001C531C  FC 04 38 40 */	fcmpo cr0, f4, f7
/* 801C83E0 001C5320  EC 42 40 28 */	fsubs f2, f2, f8
/* 801C83E4 001C5324  EC 00 40 28 */	fsubs f0, f0, f8
/* 801C83E8 001C5328  40 81 00 0C */	ble .L_801C83F4
/* 801C83EC 001C532C  FC E0 20 90 */	fmr f7, f4
/* 801C83F0 001C5330  48 00 00 10 */	b .L_801C8400
.L_801C83F4:
/* 801C83F4 001C5334  FC 00 38 40 */	fcmpo cr0, f0, f7
/* 801C83F8 001C5338  40 81 00 08 */	ble .L_801C8400
/* 801C83FC 001C533C  FC E0 00 90 */	fmr f7, f0
.L_801C8400:
/* 801C8400 001C5340  C0 22 B2 38 */	lfs f1, lbl_80519598@sda21(r2)
/* 801C8404 001C5344  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 801C8408 001C5348  40 81 00 0C */	ble .L_801C8414
/* 801C840C 001C534C  FC 20 18 90 */	fmr f1, f3
/* 801C8410 001C5350  48 00 00 24 */	b .L_801C8434
.L_801C8414:
/* 801C8414 001C5354  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801C8418 001C5358  40 81 00 0C */	ble .L_801C8424
/* 801C841C 001C535C  FC 20 10 90 */	fmr f1, f2
/* 801C8420 001C5360  48 00 00 14 */	b .L_801C8434
.L_801C8424:
/* 801C8424 001C5364  FC 01 38 00 */	fcmpu cr0, f1, f7
/* 801C8428 001C5368  4D 82 00 20 */	beqlr 
/* 801C842C 001C536C  C0 22 B2 60 */	lfs f1, lbl_805195C0@sda21(r2)
/* 801C8430 001C5370  4E 80 00 20 */	blr 
.L_801C8434:
/* 801C8434 001C5374  C0 02 B2 64 */	lfs f0, lbl_805195C4@sda21(r2)
/* 801C8438 001C5378  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C843C 001C537C  40 80 00 18 */	bge .L_801C8454
/* 801C8440 001C5380  C0 02 B2 5C */	lfs f0, lbl_805195BC@sda21(r2)
/* 801C8444 001C5384  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 801C8448 001C5388  40 80 00 0C */	bge .L_801C8454
/* 801C844C 001C538C  EC 21 38 2A */	fadds f1, f1, f7
/* 801C8450 001C5390  4E 80 00 20 */	blr 
.L_801C8454:
/* 801C8454 001C5394  C0 22 B2 60 */	lfs f1, lbl_805195C0@sda21(r2)
/* 801C8458 001C5398  4E 80 00 20 */	blr 
.endfn getWorkDistance__Q24Game8ItemGateFRQ23Sys6Sphere

.fn initPlanes__Q24Game8ItemGateFv, global
/* 801C845C 001C539C  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 801C8460 001C53A0  7C 08 02 A6 */	mflr r0
/* 801C8464 001C53A4  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C8468 001C53A8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 801C846C 001C53AC  93 E1 00 AC */	stw r31, 0xac(r1)
/* 801C8470 001C53B0  7C 7F 1B 78 */	mr r31, r3
/* 801C8474 001C53B4  C0 63 02 14 */	lfs f3, 0x214(r3)
/* 801C8478 001C53B8  FC 20 18 90 */	fmr f1, f3
/* 801C847C 001C53BC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C8480 001C53C0  40 80 00 08 */	bge .L_801C8488
/* 801C8484 001C53C4  FC 20 18 50 */	fneg f1, f3
.L_801C8488:
/* 801C8488 001C53C8  C0 42 B2 68 */	lfs f2, lbl_805195C8@sda21(r2)
/* 801C848C 001C53CC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C8490 001C53D0  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C8494 001C53D4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801C8498 001C53D8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801C849C 001C53DC  38 A3 00 04 */	addi r5, r3, 4
/* 801C84A0 001C53E0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C84A4 001C53E4  FC 00 08 1E */	fctiwz f0, f1
/* 801C84A8 001C53E8  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 801C84AC 001C53EC  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 801C84B0 001C53F0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C84B4 001C53F4  7C 25 04 2E */	lfsx f1, r5, r0
/* 801C84B8 001C53F8  40 80 00 28 */	bge .L_801C84E0
/* 801C84BC 001C53FC  C0 02 B2 6C */	lfs f0, lbl_805195CC@sda21(r2)
/* 801C84C0 001C5400  EC 03 00 32 */	fmuls f0, f3, f0
/* 801C84C4 001C5404  FC 00 00 1E */	fctiwz f0, f0
/* 801C84C8 001C5408  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 801C84CC 001C540C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801C84D0 001C5410  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C84D4 001C5414  7C 03 04 2E */	lfsx f0, r3, r0
/* 801C84D8 001C5418  FC 00 00 50 */	fneg f0, f0
/* 801C84DC 001C541C  48 00 00 1C */	b .L_801C84F8
.L_801C84E0:
/* 801C84E0 001C5420  EC 03 00 B2 */	fmuls f0, f3, f2
/* 801C84E4 001C5424  FC 00 00 1E */	fctiwz f0, f0
/* 801C84E8 001C5428  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 801C84EC 001C542C  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 801C84F0 001C5430  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C84F4 001C5434  7C 03 04 2E */	lfsx f0, r3, r0
.L_801C84F8:
/* 801C84F8 001C5438  D0 1F 02 70 */	stfs f0, 0x270(r31)
/* 801C84FC 001C543C  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C8500 001C5440  D0 1F 02 74 */	stfs f0, 0x274(r31)
/* 801C8504 001C5444  D0 3F 02 78 */	stfs f1, 0x278(r31)
/* 801C8508 001C5448  C0 7F 02 14 */	lfs f3, 0x214(r31)
/* 801C850C 001C544C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C8510 001C5450  40 80 00 30 */	bge .L_801C8540
/* 801C8514 001C5454  C0 02 B2 6C */	lfs f0, lbl_805195CC@sda21(r2)
/* 801C8518 001C5458  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C851C 001C545C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801C8520 001C5460  EC 03 00 32 */	fmuls f0, f3, f0
/* 801C8524 001C5464  FC 00 00 1E */	fctiwz f0, f0
/* 801C8528 001C5468  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 801C852C 001C546C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 801C8530 001C5470  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C8534 001C5474  7C 03 04 2E */	lfsx f0, r3, r0
/* 801C8538 001C5478  FC 20 00 50 */	fneg f1, f0
/* 801C853C 001C547C  48 00 00 28 */	b .L_801C8564
.L_801C8540:
/* 801C8540 001C5480  C0 02 B2 68 */	lfs f0, lbl_805195C8@sda21(r2)
/* 801C8544 001C5484  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C8548 001C5488  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801C854C 001C548C  EC 03 00 32 */	fmuls f0, f3, f0
/* 801C8550 001C5490  FC 00 00 1E */	fctiwz f0, f0
/* 801C8554 001C5494  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 801C8558 001C5498  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 801C855C 001C549C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C8560 001C54A0  7C 23 04 2E */	lfsx f1, r3, r0
.L_801C8564:
/* 801C8564 001C54A4  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C8568 001C54A8  FC 40 08 50 */	fneg f2, f1
/* 801C856C 001C54AC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C8570 001C54B0  40 80 00 08 */	bge .L_801C8578
/* 801C8574 001C54B4  FC 60 18 50 */	fneg f3, f3
.L_801C8578:
/* 801C8578 001C54B8  C0 22 B2 68 */	lfs f1, lbl_805195C8@sda21(r2)
/* 801C857C 001C54BC  7F E4 FB 78 */	mr r4, r31
/* 801C8580 001C54C0  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C8584 001C54C4  38 61 00 38 */	addi r3, r1, 0x38
/* 801C8588 001C54C8  EC 23 00 72 */	fmuls f1, f3, f1
/* 801C858C 001C54CC  FC 20 08 1E */	fctiwz f1, f1
/* 801C8590 001C54D0  D8 21 00 A0 */	stfd f1, 0xa0(r1)
/* 801C8594 001C54D4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 801C8598 001C54D8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C859C 001C54DC  7C 25 04 2E */	lfsx f1, r5, r0
/* 801C85A0 001C54E0  D0 3F 02 64 */	stfs f1, 0x264(r31)
/* 801C85A4 001C54E4  D0 1F 02 68 */	stfs f0, 0x268(r31)
/* 801C85A8 001C54E8  D0 5F 02 6C */	stfs f2, 0x26c(r31)
/* 801C85AC 001C54EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C85B0 001C54F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C85B4 001C54F4  7D 89 03 A6 */	mtctr r12
/* 801C85B8 001C54F8  4E 80 04 21 */	bctrl 
/* 801C85BC 001C54FC  C0 5F 02 70 */	lfs f2, 0x270(r31)
/* 801C85C0 001C5500  C0 3F 02 74 */	lfs f1, 0x274(r31)
/* 801C85C4 001C5504  D0 41 00 68 */	stfs f2, 0x68(r1)
/* 801C85C8 001C5508  C0 E2 B2 70 */	lfs f7, lbl_805195D0@sda21(r2)
/* 801C85CC 001C550C  C0 1F 02 78 */	lfs f0, 0x278(r31)
/* 801C85D0 001C5510  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 801C85D4 001C5514  EC 61 01 F2 */	fmuls f3, f1, f7
/* 801C85D8 001C5518  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801C85DC 001C551C  EC 22 01 F2 */	fmuls f1, f2, f7
/* 801C85E0 001C5520  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 801C85E4 001C5524  EC 80 01 F2 */	fmuls f4, f0, f7
/* 801C85E8 001C5528  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 801C85EC 001C552C  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801C85F0 001C5530  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 801C85F4 001C5534  90 01 00 30 */	stw r0, 0x30(r1)
/* 801C85F8 001C5538  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 801C85FC 001C553C  ED 02 08 2A */	fadds f8, f2, f1
/* 801C8600 001C5540  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 801C8604 001C5544  80 01 00 70 */	lwz r0, 0x70(r1)
/* 801C8608 001C5548  EC A0 18 2A */	fadds f5, f0, f3
/* 801C860C 001C554C  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 801C8610 001C5550  ED 21 20 2A */	fadds f9, f1, f4
/* 801C8614 001C5554  90 01 00 34 */	stw r0, 0x34(r1)
/* 801C8618 001C5558  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 801C861C 001C555C  D0 7F 02 24 */	stfs f3, 0x224(r31)
/* 801C8620 001C5560  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 801C8624 001C5564  D0 9F 02 28 */	stfs f4, 0x228(r31)
/* 801C8628 001C5568  C0 C2 B2 74 */	lfs f6, lbl_805195D4@sda21(r2)
/* 801C862C 001C556C  D0 7F 02 2C */	stfs f3, 0x22c(r31)
/* 801C8630 001C5570  C0 7F 02 28 */	lfs f3, 0x228(r31)
/* 801C8634 001C5574  C0 9F 02 24 */	lfs f4, 0x224(r31)
/* 801C8638 001C5578  EC 63 01 72 */	fmuls f3, f3, f5
/* 801C863C 001C557C  C0 BF 02 2C */	lfs f5, 0x22c(r31)
/* 801C8640 001C5580  EC 64 1A 3A */	fmadds f3, f4, f8, f3
/* 801C8644 001C5584  EC 65 1A 7A */	fmadds f3, f5, f9, f3
/* 801C8648 001C5588  D0 7F 02 30 */	stfs f3, 0x230(r31)
/* 801C864C 001C558C  C0 7F 02 70 */	lfs f3, 0x270(r31)
/* 801C8650 001C5590  C0 9F 02 74 */	lfs f4, 0x274(r31)
/* 801C8654 001C5594  FC 60 18 50 */	fneg f3, f3
/* 801C8658 001C5598  C0 BF 02 78 */	lfs f5, 0x278(r31)
/* 801C865C 001C559C  FD 00 20 50 */	fneg f8, f4
/* 801C8660 001C55A0  FD 20 28 50 */	fneg f9, f5
/* 801C8664 001C55A4  D0 61 00 5C */	stfs f3, 0x5c(r1)
/* 801C8668 001C55A8  FC 60 18 18 */	frsp f3, f3
/* 801C866C 001C55AC  FC 80 40 18 */	frsp f4, f8
/* 801C8670 001C55B0  D1 01 00 60 */	stfs f8, 0x60(r1)
/* 801C8674 001C55B4  FC A0 48 18 */	frsp f5, f9
/* 801C8678 001C55B8  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 801C867C 001C55BC  EC 63 01 F2 */	fmuls f3, f3, f7
/* 801C8680 001C55C0  D1 21 00 64 */	stfs f9, 0x64(r1)
/* 801C8684 001C55C4  80 61 00 60 */	lwz r3, 0x60(r1)
/* 801C8688 001C55C8  EC 84 01 F2 */	fmuls f4, f4, f7
/* 801C868C 001C55CC  90 01 00 20 */	stw r0, 0x20(r1)
/* 801C8690 001C55D0  EC A5 01 F2 */	fmuls f5, f5, f7
/* 801C8694 001C55D4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C8698 001C55D8  EC E2 18 2A */	fadds f7, f2, f3
/* 801C869C 001C55DC  90 61 00 24 */	stw r3, 0x24(r1)
/* 801C86A0 001C55E0  C0 61 00 20 */	lfs f3, 0x20(r1)
/* 801C86A4 001C55E4  ED 00 20 2A */	fadds f8, f0, f4
/* 801C86A8 001C55E8  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C86AC 001C55EC  ED 21 28 2A */	fadds f9, f1, f5
/* 801C86B0 001C55F0  C0 81 00 24 */	lfs f4, 0x24(r1)
/* 801C86B4 001C55F4  D0 7F 02 34 */	stfs f3, 0x234(r31)
/* 801C86B8 001C55F8  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 801C86BC 001C55FC  D0 9F 02 38 */	stfs f4, 0x238(r31)
/* 801C86C0 001C5600  D0 7F 02 3C */	stfs f3, 0x23c(r31)
/* 801C86C4 001C5604  C0 7F 02 38 */	lfs f3, 0x238(r31)
/* 801C86C8 001C5608  C0 9F 02 34 */	lfs f4, 0x234(r31)
/* 801C86CC 001C560C  EC 63 02 32 */	fmuls f3, f3, f8
/* 801C86D0 001C5610  C0 BF 02 3C */	lfs f5, 0x23c(r31)
/* 801C86D4 001C5614  EC 64 19 FA */	fmadds f3, f4, f7, f3
/* 801C86D8 001C5618  EC 65 1A 7A */	fmadds f3, f5, f9, f3
/* 801C86DC 001C561C  D0 7F 02 40 */	stfs f3, 0x240(r31)
/* 801C86E0 001C5620  C0 FF 02 68 */	lfs f7, 0x268(r31)
/* 801C86E4 001C5624  C0 BF 02 6C */	lfs f5, 0x26c(r31)
/* 801C86E8 001C5628  EC 67 01 B2 */	fmuls f3, f7, f6
/* 801C86EC 001C562C  C1 1F 02 64 */	lfs f8, 0x264(r31)
/* 801C86F0 001C5630  EC 85 01 B2 */	fmuls f4, f5, f6
/* 801C86F4 001C5634  D0 E1 00 54 */	stfs f7, 0x54(r1)
/* 801C86F8 001C5638  ED 20 18 2A */	fadds f9, f0, f3
/* 801C86FC 001C563C  D1 01 00 50 */	stfs f8, 0x50(r1)
/* 801C8700 001C5640  ED 41 20 2A */	fadds f10, f1, f4
/* 801C8704 001C5644  D0 A1 00 58 */	stfs f5, 0x58(r1)
/* 801C8708 001C5648  80 01 00 50 */	lwz r0, 0x50(r1)
/* 801C870C 001C564C  EC 68 01 B2 */	fmuls f3, f8, f6
/* 801C8710 001C5650  80 61 00 54 */	lwz r3, 0x54(r1)
/* 801C8714 001C5654  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C8718 001C5658  80 01 00 58 */	lwz r0, 0x58(r1)
/* 801C871C 001C565C  EC E2 18 2A */	fadds f7, f2, f3
/* 801C8720 001C5660  90 61 00 18 */	stw r3, 0x18(r1)
/* 801C8724 001C5664  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 801C8728 001C5668  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801C872C 001C566C  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 801C8730 001C5670  D0 7F 02 44 */	stfs f3, 0x244(r31)
/* 801C8734 001C5674  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 801C8738 001C5678  D0 9F 02 48 */	stfs f4, 0x248(r31)
/* 801C873C 001C567C  D0 7F 02 4C */	stfs f3, 0x24c(r31)
/* 801C8740 001C5680  C0 7F 02 48 */	lfs f3, 0x248(r31)
/* 801C8744 001C5684  C0 9F 02 44 */	lfs f4, 0x244(r31)
/* 801C8748 001C5688  EC 63 02 72 */	fmuls f3, f3, f9
/* 801C874C 001C568C  C0 BF 02 4C */	lfs f5, 0x24c(r31)
/* 801C8750 001C5690  EC 64 19 FA */	fmadds f3, f4, f7, f3
/* 801C8754 001C5694  EC 65 1A BA */	fmadds f3, f5, f10, f3
/* 801C8758 001C5698  D0 7F 02 50 */	stfs f3, 0x250(r31)
/* 801C875C 001C569C  C0 7F 02 64 */	lfs f3, 0x264(r31)
/* 801C8760 001C56A0  C0 9F 02 68 */	lfs f4, 0x268(r31)
/* 801C8764 001C56A4  FC 60 18 50 */	fneg f3, f3
/* 801C8768 001C56A8  C0 BF 02 6C */	lfs f5, 0x26c(r31)
/* 801C876C 001C56AC  FC E0 20 50 */	fneg f7, f4
/* 801C8770 001C56B0  FD 00 28 50 */	fneg f8, f5
/* 801C8774 001C56B4  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 801C8778 001C56B8  FC 60 18 18 */	frsp f3, f3
/* 801C877C 001C56BC  FC 80 38 18 */	frsp f4, f7
/* 801C8780 001C56C0  D0 E1 00 48 */	stfs f7, 0x48(r1)
/* 801C8784 001C56C4  FC A0 40 18 */	frsp f5, f8
/* 801C8788 001C56C8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801C878C 001C56CC  EC 63 01 B2 */	fmuls f3, f3, f6
/* 801C8790 001C56D0  D1 01 00 4C */	stfs f8, 0x4c(r1)
/* 801C8794 001C56D4  80 61 00 48 */	lwz r3, 0x48(r1)
/* 801C8798 001C56D8  EC 84 01 B2 */	fmuls f4, f4, f6
/* 801C879C 001C56DC  90 01 00 08 */	stw r0, 8(r1)
/* 801C87A0 001C56E0  EC A5 01 B2 */	fmuls f5, f5, f6
/* 801C87A4 001C56E4  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 801C87A8 001C56E8  EC 62 18 2A */	fadds f3, f2, f3
/* 801C87AC 001C56EC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C87B0 001C56F0  C0 41 00 08 */	lfs f2, 8(r1)
/* 801C87B4 001C56F4  EC 80 20 2A */	fadds f4, f0, f4
/* 801C87B8 001C56F8  90 01 00 10 */	stw r0, 0x10(r1)
/* 801C87BC 001C56FC  EC A1 28 2A */	fadds f5, f1, f5
/* 801C87C0 001C5700  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801C87C4 001C5704  D0 5F 02 54 */	stfs f2, 0x254(r31)
/* 801C87C8 001C5708  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801C87CC 001C570C  D0 3F 02 58 */	stfs f1, 0x258(r31)
/* 801C87D0 001C5710  D0 1F 02 5C */	stfs f0, 0x25c(r31)
/* 801C87D4 001C5714  C0 1F 02 58 */	lfs f0, 0x258(r31)
/* 801C87D8 001C5718  C0 3F 02 54 */	lfs f1, 0x254(r31)
/* 801C87DC 001C571C  EC 00 01 32 */	fmuls f0, f0, f4
/* 801C87E0 001C5720  C0 5F 02 5C */	lfs f2, 0x25c(r31)
/* 801C87E4 001C5724  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 801C87E8 001C5728  EC 02 01 7A */	fmadds f0, f2, f5, f0
/* 801C87EC 001C572C  D0 1F 02 60 */	stfs f0, 0x260(r31)
/* 801C87F0 001C5730  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 801C87F4 001C5734  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 801C87F8 001C5738  7C 08 03 A6 */	mtlr r0
/* 801C87FC 001C573C  38 21 00 B0 */	addi r1, r1, 0xb0
/* 801C8800 001C5740  4E 80 00 20 */	blr 
.endfn initPlanes__Q24Game8ItemGateFv

.fn changeMaterial__Q24Game8ItemGateFv, global
/* 801C8804 001C5744  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C8808 001C5748  7C 08 02 A6 */	mflr r0
/* 801C880C 001C574C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C8810 001C5750  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C8814 001C5754  7C 7F 1B 78 */	mr r31, r3
/* 801C8818 001C5758  88 03 02 18 */	lbz r0, 0x218(r3)
/* 801C881C 001C575C  28 00 00 00 */	cmplwi r0, 0
/* 801C8820 001C5760  41 82 00 0C */	beq .L_801C882C
/* 801C8824 001C5764  38 C0 00 00 */	li r6, 0
/* 801C8828 001C5768  48 00 00 14 */	b .L_801C883C
.L_801C882C:
/* 801C882C 001C576C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801C8830 001C5770  38 82 B2 78 */	addi r4, r2, lbl_805195D8@sda21
/* 801C8834 001C5774  48 27 67 B1 */	bl getJoint__Q28SysShape5ModelFPc
/* 801C8838 001C5778  A0 C3 00 38 */	lhz r6, 0x38(r3)
.L_801C883C:
/* 801C883C 001C577C  80 BF 01 F4 */	lwz r5, 0x1f4(r31)
/* 801C8840 001C5780  38 80 00 00 */	li r4, 0
/* 801C8844 001C5784  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801C8848 001C5788  88 05 01 08 */	lbz r0, 0x108(r5)
/* 801C884C 001C578C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801C8850 001C5790  41 82 00 14 */	beq .L_801C8864
/* 801C8854 001C5794  88 1F 00 D8 */	lbz r0, 0xd8(r31)
/* 801C8858 001C5798  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 801C885C 001C579C  41 82 00 08 */	beq .L_801C8864
/* 801C8860 001C57A0  38 80 00 01 */	li r4, 1
.L_801C8864:
/* 801C8864 001C57A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C8868 001C57A8  54 C5 04 3E */	clrlwi r5, r6, 0x10
/* 801C886C 001C57AC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801C8870 001C57B0  7D 89 03 A6 */	mtctr r12
/* 801C8874 001C57B4  4E 80 04 21 */	bctrl 
/* 801C8878 001C57B8  88 1F 02 18 */	lbz r0, 0x218(r31)
/* 801C887C 001C57BC  28 00 00 00 */	cmplwi r0, 0
/* 801C8880 001C57C0  41 82 00 14 */	beq .L_801C8894
/* 801C8884 001C57C4  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 801C8888 001C57C8  C0 22 B2 5C */	lfs f1, lbl_805195BC@sda21(r2)
/* 801C888C 001C57CC  48 26 BC C1 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 801C8890 001C57D0  48 00 00 34 */	b .L_801C88C4
.L_801C8894:
/* 801C8894 001C57D4  88 7F 02 7C */	lbz r3, 0x27c(r31)
/* 801C8898 001C57D8  3C 00 43 30 */	lis r0, 0x4330
/* 801C889C 001C57DC  90 01 00 08 */	stw r0, 8(r1)
/* 801C88A0 001C57E0  C8 22 B2 80 */	lfd f1, lbl_805195E0@sda21(r2)
/* 801C88A4 001C57E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C88A8 001C57E8  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 801C88AC 001C57EC  C8 01 00 08 */	lfd f0, 8(r1)
/* 801C88B0 001C57F0  EC 20 08 28 */	fsubs f1, f0, f1
/* 801C88B4 001C57F4  48 26 BB 29 */	bl setCurrentFrame__Q23Sys15MatBaseAnimatorFf
/* 801C88B8 001C57F8  80 7F 02 80 */	lwz r3, 0x280(r31)
/* 801C88BC 001C57FC  C0 22 B2 38 */	lfs f1, lbl_80519598@sda21(r2)
/* 801C88C0 001C5800  48 26 BC 8D */	bl animate__Q23Sys15MatBaseAnimatorFf
.L_801C88C4:
/* 801C88C4 001C5804  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C88C8 001C5808  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C88CC 001C580C  7C 08 03 A6 */	mtlr r0
/* 801C88D0 001C5810  38 21 00 20 */	addi r1, r1, 0x20
/* 801C88D4 001C5814  4E 80 00 20 */	blr 
.endfn changeMaterial__Q24Game8ItemGateFv

.fn getLifeGaugeParam__Q24Game8ItemGateFRQ24Game14LifeGaugeParam, global
/* 801C88D8 001C5818  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C88DC 001C581C  3C 00 43 30 */	lis r0, 0x4330
/* 801C88E0 001C5820  C0 22 B2 88 */	lfs f1, lbl_805195E8@sda21(r2)
/* 801C88E4 001C5824  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 801C88E8 001C5828  90 01 00 08 */	stw r0, 8(r1)
/* 801C88EC 001C582C  C8 62 B2 48 */	lfd f3, lbl_805195A8@sda21(r2)
/* 801C88F0 001C5830  D0 04 00 00 */	stfs f0, 0(r4)
/* 801C88F4 001C5834  C0 02 B2 50 */	lfs f0, lbl_805195B0@sda21(r2)
/* 801C88F8 001C5838  C0 43 01 A0 */	lfs f2, 0x1a0(r3)
/* 801C88FC 001C583C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801C8900 001C5840  D0 44 00 04 */	stfs f2, 4(r4)
/* 801C8904 001C5844  C0 43 01 A4 */	lfs f2, 0x1a4(r3)
/* 801C8908 001C5848  D0 44 00 08 */	stfs f2, 8(r4)
/* 801C890C 001C584C  C0 44 00 04 */	lfs f2, 4(r4)
/* 801C8910 001C5850  EC 22 08 2A */	fadds f1, f2, f1
/* 801C8914 001C5854  D0 24 00 04 */	stfs f1, 4(r4)
/* 801C8918 001C5858  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 801C891C 001C585C  80 C3 02 10 */	lwz r6, 0x210(r3)
/* 801C8920 001C5860  80 A3 02 0C */	lwz r5, 0x20c(r3)
/* 801C8924 001C5864  6C C0 80 00 */	xoris r0, r6, 0x8000
/* 801C8928 001C5868  C0 83 02 04 */	lfs f4, 0x204(r3)
/* 801C892C 001C586C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C8930 001C5870  7C A5 30 50 */	subf r5, r5, r6
/* 801C8934 001C5874  38 05 FF FF */	addi r0, r5, -1
/* 801C8938 001C5878  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 801C893C 001C587C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801C8940 001C5880  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801C8944 001C5884  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C8948 001C5888  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C894C 001C588C  C8 41 00 08 */	lfd f2, 8(r1)
/* 801C8950 001C5890  EC 42 18 28 */	fsubs f2, f2, f3
/* 801C8954 001C5894  EC 04 00 32 */	fmuls f0, f4, f0
/* 801C8958 001C5898  EC 24 08 BA */	fmadds f1, f4, f2, f1
/* 801C895C 001C589C  EC 01 00 24 */	fdivs f0, f1, f0
/* 801C8960 001C58A0  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 801C8964 001C58A4  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 801C8968 001C58A8  54 00 F7 FE */	rlwinm r0, r0, 0x1e, 0x1f, 0x1f
/* 801C896C 001C58AC  98 04 00 14 */	stb r0, 0x14(r4)
/* 801C8970 001C58B0  38 21 00 20 */	addi r1, r1, 0x20
/* 801C8974 001C58B4  4E 80 00 20 */	blr 
.endfn getLifeGaugeParam__Q24Game8ItemGateFRQ24Game14LifeGaugeParam

.fn __ct__Q24Game11ItemGateMgrFv, global
/* 801C8978 001C58B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C897C 001C58BC  7C 08 02 A6 */	mflr r0
/* 801C8980 001C58C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C8984 001C58C4  7C 80 07 35 */	extsh. r0, r4
/* 801C8988 001C58C8  3C 80 80 48 */	lis r4, lbl_80480188@ha
/* 801C898C 001C58CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C8990 001C58D0  3B E4 01 88 */	addi r31, r4, lbl_80480188@l
/* 801C8994 001C58D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C8998 001C58D8  7C 7E 1B 78 */	mr r30, r3
/* 801C899C 001C58DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C89A0 001C58E0  93 81 00 10 */	stw r28, 0x10(r1)
/* 801C89A4 001C58E4  41 82 00 0C */	beq .L_801C89B0
/* 801C89A8 001C58E8  38 1E 00 88 */	addi r0, r30, 0x88
/* 801C89AC 001C58EC  90 1E 00 04 */	stw r0, 4(r30)
.L_801C89B0:
/* 801C89B0 001C58F0  7F C3 F3 78 */	mr r3, r30
/* 801C89B4 001C58F4  38 80 00 00 */	li r4, 0
/* 801C89B8 001C58F8  38 A0 00 01 */	li r5, 1
/* 801C89BC 001C58FC  48 00 43 B5 */	bl __ct__Q24Game11BaseItemMgrFi
/* 801C89C0 001C5900  3C 60 80 4B */	lis r3, __vt__Q24Game11ItemGateMgr@ha
/* 801C89C4 001C5904  3B BE 00 30 */	addi r29, r30, 0x30
/* 801C89C8 001C5908  38 03 67 84 */	addi r0, r3, __vt__Q24Game11ItemGateMgr@l
/* 801C89CC 001C590C  90 1E 00 00 */	stw r0, 0(r30)
/* 801C89D0 001C5910  7F A3 EB 78 */	mr r3, r29
/* 801C89D4 001C5914  48 24 89 BD */	bl __ct__5CNodeFv
/* 801C89D8 001C5918  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801C89DC 001C591C  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8ItemGate>"@ha
/* 801C89E0 001C5920  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801C89E4 001C5924  3C A0 80 4B */	lis r5, __vt__16GenericObjectMgr@ha
/* 801C89E8 001C5928  90 1D 00 00 */	stw r0, 0(r29)
/* 801C89EC 001C592C  38 03 69 0C */	addi r0, r3, "__vt__27Container<Q24Game8ItemGate>"@l
/* 801C89F0 001C5930  3C 80 80 4B */	lis r4, "__vt__27ObjectMgr<Q24Game8ItemGate>"@ha
/* 801C89F4 001C5934  3C 60 80 4B */	lis r3, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@ha
/* 801C89F8 001C5938  90 1D 00 00 */	stw r0, 0(r29)
/* 801C89FC 001C593C  38 00 00 00 */	li r0, 0
/* 801C8A00 001C5940  38 C4 68 90 */	addi r6, r4, "__vt__27ObjectMgr<Q24Game8ItemGate>"@l
/* 801C8A04 001C5944  38 83 68 10 */	addi r4, r3, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@l
/* 801C8A08 001C5948  98 1D 00 18 */	stb r0, 0x18(r29)
/* 801C8A0C 001C594C  38 05 B5 F0 */	addi r0, r5, __vt__16GenericObjectMgr@l
/* 801C8A10 001C5950  3B 9D 00 20 */	addi r28, r29, 0x20
/* 801C8A14 001C5954  38 A6 00 2C */	addi r5, r6, 0x2c
/* 801C8A18 001C5958  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 801C8A1C 001C595C  38 04 00 2C */	addi r0, r4, 0x2c
/* 801C8A20 001C5960  7F 83 E3 78 */	mr r3, r28
/* 801C8A24 001C5964  90 DD 00 00 */	stw r6, 0(r29)
/* 801C8A28 001C5968  90 BD 00 1C */	stw r5, 0x1c(r29)
/* 801C8A2C 001C596C  90 9D 00 00 */	stw r4, 0(r29)
/* 801C8A30 001C5970  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 801C8A34 001C5974  48 24 89 5D */	bl __ct__5CNodeFv
/* 801C8A38 001C5978  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
/* 801C8A3C 001C597C  38 7E 00 74 */	addi r3, r30, 0x74
/* 801C8A40 001C5980  38 04 68 00 */	addi r0, r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
/* 801C8A44 001C5984  90 1C 00 00 */	stw r0, 0(r28)
/* 801C8A48 001C5988  48 26 B7 F9 */	bl __ct__Q23Sys18MatTevRegAnimationFv
/* 801C8A4C 001C598C  38 02 B2 8C */	addi r0, r2, lbl_805195EC@sda21
/* 801C8A50 001C5990  38 9F 00 40 */	addi r4, r31, 0x40
/* 801C8A54 001C5994  90 1E 00 08 */	stw r0, 8(r30)
/* 801C8A58 001C5998  38 A0 00 00 */	li r5, 0
/* 801C8A5C 001C599C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C8A60 001C59A0  48 25 A8 FD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801C8A64 001C59A4  38 1F 00 4C */	addi r0, r31, 0x4c
/* 801C8A68 001C59A8  7F C3 F3 78 */	mr r3, r30
/* 801C8A6C 001C59AC  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801C8A70 001C59B0  38 80 00 01 */	li r4, 1
/* 801C8A74 001C59B4  48 00 43 59 */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 801C8A78 001C59B8  7F C3 F3 78 */	mr r3, r30
/* 801C8A7C 001C59BC  38 9F 00 68 */	addi r4, r31, 0x68
/* 801C8A80 001C59C0  48 00 44 55 */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801C8A84 001C59C4  7F C3 F3 78 */	mr r3, r30
/* 801C8A88 001C59C8  38 9F 00 78 */	addi r4, r31, 0x78
/* 801C8A8C 001C59CC  38 A0 00 00 */	li r5, 0
/* 801C8A90 001C59D0  3C C0 20 00 */	lis r6, 0x2000
/* 801C8A94 001C59D4  48 00 44 BD */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801C8A98 001C59D8  7F C3 F3 78 */	mr r3, r30
/* 801C8A9C 001C59DC  38 9F 00 88 */	addi r4, r31, 0x88
/* 801C8AA0 001C59E0  48 00 47 2D */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801C8AA4 001C59E4  7C 60 1B 78 */	mr r0, r3
/* 801C8AA8 001C59E8  7F C3 F3 78 */	mr r3, r30
/* 801C8AAC 001C59EC  7C 1D 03 78 */	mr r29, r0
/* 801C8AB0 001C59F0  38 BF 00 98 */	addi r5, r31, 0x98
/* 801C8AB4 001C59F4  7F A4 EB 78 */	mr r4, r29
/* 801C8AB8 001C59F8  48 00 45 45 */	bl loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801C8ABC 001C59FC  7F C3 F3 78 */	mr r3, r30
/* 801C8AC0 001C5A00  7F A4 EB 78 */	mr r4, r29
/* 801C8AC4 001C5A04  38 BF 00 A8 */	addi r5, r31, 0xa8
/* 801C8AC8 001C5A08  48 00 45 B5 */	bl loadCollision__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801C8ACC 001C5A0C  7F C3 F3 78 */	mr r3, r30
/* 801C8AD0 001C5A10  7F A4 EB 78 */	mr r4, r29
/* 801C8AD4 001C5A14  38 BF 00 B8 */	addi r5, r31, 0xb8
/* 801C8AD8 001C5A18  48 00 47 C9 */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801C8ADC 001C5A1C  90 7E 00 6C */	stw r3, 0x6c(r30)
/* 801C8AE0 001C5A20  7F C3 F3 78 */	mr r3, r30
/* 801C8AE4 001C5A24  7F A4 EB 78 */	mr r4, r29
/* 801C8AE8 001C5A28  38 BF 00 C4 */	addi r5, r31, 0xc4
/* 801C8AEC 001C5A2C  48 00 47 B5 */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801C8AF0 001C5A30  90 7E 00 70 */	stw r3, 0x70(r30)
/* 801C8AF4 001C5A34  7F C3 F3 78 */	mr r3, r30
/* 801C8AF8 001C5A38  7F A4 EB 78 */	mr r4, r29
/* 801C8AFC 001C5A3C  48 00 47 55 */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801C8B00 001C5A40  38 7F 00 D0 */	addi r3, r31, 0xd0
/* 801C8B04 001C5A44  38 80 00 01 */	li r4, 1
/* 801C8B08 001C5A48  38 A0 00 00 */	li r5, 0
/* 801C8B0C 001C5A4C  38 C0 00 01 */	li r6, 1
/* 801C8B10 001C5A50  4B E5 26 21 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 801C8B14 001C5A54  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 801C8B18 001C5A58  38 80 00 00 */	li r4, 0
/* 801C8B1C 001C5A5C  80 63 00 00 */	lwz r3, 0(r3)
/* 801C8B20 001C5A60  48 27 57 7D */	bl enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
/* 801C8B24 001C5A64  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 801C8B28 001C5A68  38 80 00 00 */	li r4, 0
/* 801C8B2C 001C5A6C  4B E5 A4 ED */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 801C8B30 001C5A70  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 801C8B34 001C5A74  7C 64 1B 78 */	mr r4, r3
/* 801C8B38 001C5A78  38 7E 00 74 */	addi r3, r30, 0x74
/* 801C8B3C 001C5A7C  80 A5 00 00 */	lwz r5, 0(r5)
/* 801C8B40 001C5A80  48 26 B4 E1 */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 801C8B44 001C5A84  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C8B48 001C5A88  38 9F 00 40 */	addi r4, r31, 0x40
/* 801C8B4C 001C5A8C  48 25 A8 19 */	bl heapStatusEnd__6SystemFPc
/* 801C8B50 001C5A90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C8B54 001C5A94  7F C3 F3 78 */	mr r3, r30
/* 801C8B58 001C5A98  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C8B5C 001C5A9C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C8B60 001C5AA0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C8B64 001C5AA4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801C8B68 001C5AA8  7C 08 03 A6 */	mtlr r0
/* 801C8B6C 001C5AAC  38 21 00 20 */	addi r1, r1, 0x20
/* 801C8B70 001C5AB0  4E 80 00 20 */	blr 
.endfn __ct__Q24Game11ItemGateMgrFv

.fn "__dt__31NodeObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801C8B74 001C5AB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C8B78 001C5AB8  7C 08 02 A6 */	mflr r0
/* 801C8B7C 001C5ABC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C8B80 001C5AC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C8B84 001C5AC4  7C 9F 23 78 */	mr r31, r4
/* 801C8B88 001C5AC8  93 C1 00 08 */	stw r30, 8(r1)
/* 801C8B8C 001C5ACC  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C8B90 001C5AD0  41 82 00 90 */	beq .L_801C8C20
/* 801C8B94 001C5AD4  3C 60 80 4B */	lis r3, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@ha
/* 801C8B98 001C5AD8  34 1E 00 20 */	addic. r0, r30, 0x20
/* 801C8B9C 001C5ADC  38 63 68 10 */	addi r3, r3, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@l
/* 801C8BA0 001C5AE0  90 7E 00 00 */	stw r3, 0(r30)
/* 801C8BA4 001C5AE4  38 03 00 2C */	addi r0, r3, 0x2c
/* 801C8BA8 001C5AE8  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801C8BAC 001C5AEC  41 82 00 1C */	beq .L_801C8BC8
/* 801C8BB0 001C5AF0  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
/* 801C8BB4 001C5AF4  38 7E 00 20 */	addi r3, r30, 0x20
/* 801C8BB8 001C5AF8  38 04 68 00 */	addi r0, r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
/* 801C8BBC 001C5AFC  38 80 00 00 */	li r4, 0
/* 801C8BC0 001C5B00  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801C8BC4 001C5B04  48 24 89 C5 */	bl __dt__5CNodeFv
.L_801C8BC8:
/* 801C8BC8 001C5B08  28 1E 00 00 */	cmplwi r30, 0
/* 801C8BCC 001C5B0C  41 82 00 44 */	beq .L_801C8C10
/* 801C8BD0 001C5B10  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8ItemGate>"@ha
/* 801C8BD4 001C5B14  38 63 68 90 */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8ItemGate>"@l
/* 801C8BD8 001C5B18  90 7E 00 00 */	stw r3, 0(r30)
/* 801C8BDC 001C5B1C  38 03 00 2C */	addi r0, r3, 0x2c
/* 801C8BE0 001C5B20  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801C8BE4 001C5B24  41 82 00 2C */	beq .L_801C8C10
/* 801C8BE8 001C5B28  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8ItemGate>"@ha
/* 801C8BEC 001C5B2C  38 03 69 0C */	addi r0, r3, "__vt__27Container<Q24Game8ItemGate>"@l
/* 801C8BF0 001C5B30  90 1E 00 00 */	stw r0, 0(r30)
/* 801C8BF4 001C5B34  41 82 00 1C */	beq .L_801C8C10
/* 801C8BF8 001C5B38  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801C8BFC 001C5B3C  7F C3 F3 78 */	mr r3, r30
/* 801C8C00 001C5B40  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801C8C04 001C5B44  38 80 00 00 */	li r4, 0
/* 801C8C08 001C5B48  90 1E 00 00 */	stw r0, 0(r30)
/* 801C8C0C 001C5B4C  48 24 89 7D */	bl __dt__5CNodeFv
.L_801C8C10:
/* 801C8C10 001C5B50  7F E0 07 35 */	extsh. r0, r31
/* 801C8C14 001C5B54  40 81 00 0C */	ble .L_801C8C20
/* 801C8C18 001C5B58  7F C3 F3 78 */	mr r3, r30
/* 801C8C1C 001C5B5C  4B E5 B4 99 */	bl __dl__FPv
.L_801C8C20:
/* 801C8C20 001C5B60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C8C24 001C5B64  7F C3 F3 78 */	mr r3, r30
/* 801C8C28 001C5B68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C8C2C 001C5B6C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C8C30 001C5B70  7C 08 03 A6 */	mtlr r0
/* 801C8C34 001C5B74  38 21 00 10 */	addi r1, r1, 0x10
/* 801C8C38 001C5B78  4E 80 00 20 */	blr 
.endfn "__dt__31NodeObjectMgr<Q24Game8ItemGate>Fv"

.fn "__dt__29TObjectNode<Q24Game8ItemGate>Fv", weak
/* 801C8C3C 001C5B7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C8C40 001C5B80  7C 08 02 A6 */	mflr r0
/* 801C8C44 001C5B84  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C8C48 001C5B88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C8C4C 001C5B8C  7C 9F 23 78 */	mr r31, r4
/* 801C8C50 001C5B90  93 C1 00 08 */	stw r30, 8(r1)
/* 801C8C54 001C5B94  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C8C58 001C5B98  41 82 00 28 */	beq .L_801C8C80
/* 801C8C5C 001C5B9C  3C A0 80 4B */	lis r5, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
/* 801C8C60 001C5BA0  38 80 00 00 */	li r4, 0
/* 801C8C64 001C5BA4  38 05 68 00 */	addi r0, r5, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
/* 801C8C68 001C5BA8  90 1E 00 00 */	stw r0, 0(r30)
/* 801C8C6C 001C5BAC  48 24 89 1D */	bl __dt__5CNodeFv
/* 801C8C70 001C5BB0  7F E0 07 35 */	extsh. r0, r31
/* 801C8C74 001C5BB4  40 81 00 0C */	ble .L_801C8C80
/* 801C8C78 001C5BB8  7F C3 F3 78 */	mr r3, r30
/* 801C8C7C 001C5BBC  4B E5 B4 39 */	bl __dl__FPv
.L_801C8C80:
/* 801C8C80 001C5BC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C8C84 001C5BC4  7F C3 F3 78 */	mr r3, r30
/* 801C8C88 001C5BC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C8C8C 001C5BCC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C8C90 001C5BD0  7C 08 03 A6 */	mtlr r0
/* 801C8C94 001C5BD4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C8C98 001C5BD8  4E 80 00 20 */	blr 
.endfn "__dt__29TObjectNode<Q24Game8ItemGate>Fv"

.fn "__dt__27ObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801C8C9C 001C5BDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C8CA0 001C5BE0  7C 08 02 A6 */	mflr r0
/* 801C8CA4 001C5BE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C8CA8 001C5BE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C8CAC 001C5BEC  7C 9F 23 78 */	mr r31, r4
/* 801C8CB0 001C5BF0  93 C1 00 08 */	stw r30, 8(r1)
/* 801C8CB4 001C5BF4  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C8CB8 001C5BF8  41 82 00 50 */	beq .L_801C8D08
/* 801C8CBC 001C5BFC  3C 80 80 4B */	lis r4, "__vt__27ObjectMgr<Q24Game8ItemGate>"@ha
/* 801C8CC0 001C5C00  38 84 68 90 */	addi r4, r4, "__vt__27ObjectMgr<Q24Game8ItemGate>"@l
/* 801C8CC4 001C5C04  90 9E 00 00 */	stw r4, 0(r30)
/* 801C8CC8 001C5C08  38 04 00 2C */	addi r0, r4, 0x2c
/* 801C8CCC 001C5C0C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801C8CD0 001C5C10  41 82 00 28 */	beq .L_801C8CF8
/* 801C8CD4 001C5C14  3C 80 80 4B */	lis r4, "__vt__27Container<Q24Game8ItemGate>"@ha
/* 801C8CD8 001C5C18  38 04 69 0C */	addi r0, r4, "__vt__27Container<Q24Game8ItemGate>"@l
/* 801C8CDC 001C5C1C  90 1E 00 00 */	stw r0, 0(r30)
/* 801C8CE0 001C5C20  41 82 00 18 */	beq .L_801C8CF8
/* 801C8CE4 001C5C24  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801C8CE8 001C5C28  38 80 00 00 */	li r4, 0
/* 801C8CEC 001C5C2C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801C8CF0 001C5C30  90 1E 00 00 */	stw r0, 0(r30)
/* 801C8CF4 001C5C34  48 24 88 95 */	bl __dt__5CNodeFv
.L_801C8CF8:
/* 801C8CF8 001C5C38  7F E0 07 35 */	extsh. r0, r31
/* 801C8CFC 001C5C3C  40 81 00 0C */	ble .L_801C8D08
/* 801C8D00 001C5C40  7F C3 F3 78 */	mr r3, r30
/* 801C8D04 001C5C44  4B E5 B3 B1 */	bl __dl__FPv
.L_801C8D08:
/* 801C8D08 001C5C48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C8D0C 001C5C4C  7F C3 F3 78 */	mr r3, r30
/* 801C8D10 001C5C50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C8D14 001C5C54  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C8D18 001C5C58  7C 08 03 A6 */	mtlr r0
/* 801C8D1C 001C5C5C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C8D20 001C5C60  4E 80 00 20 */	blr 
.endfn "__dt__27ObjectMgr<Q24Game8ItemGate>Fv"

.fn "__dt__27Container<Q24Game8ItemGate>Fv", weak
/* 801C8D24 001C5C64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C8D28 001C5C68  7C 08 02 A6 */	mflr r0
/* 801C8D2C 001C5C6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C8D30 001C5C70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C8D34 001C5C74  7C 9F 23 78 */	mr r31, r4
/* 801C8D38 001C5C78  93 C1 00 08 */	stw r30, 8(r1)
/* 801C8D3C 001C5C7C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C8D40 001C5C80  41 82 00 38 */	beq .L_801C8D78
/* 801C8D44 001C5C84  3C 80 80 4B */	lis r4, "__vt__27Container<Q24Game8ItemGate>"@ha
/* 801C8D48 001C5C88  38 04 69 0C */	addi r0, r4, "__vt__27Container<Q24Game8ItemGate>"@l
/* 801C8D4C 001C5C8C  90 1E 00 00 */	stw r0, 0(r30)
/* 801C8D50 001C5C90  41 82 00 18 */	beq .L_801C8D68
/* 801C8D54 001C5C94  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801C8D58 001C5C98  38 80 00 00 */	li r4, 0
/* 801C8D5C 001C5C9C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801C8D60 001C5CA0  90 1E 00 00 */	stw r0, 0(r30)
/* 801C8D64 001C5CA4  48 24 88 25 */	bl __dt__5CNodeFv
.L_801C8D68:
/* 801C8D68 001C5CA8  7F E0 07 35 */	extsh. r0, r31
/* 801C8D6C 001C5CAC  40 81 00 0C */	ble .L_801C8D78
/* 801C8D70 001C5CB0  7F C3 F3 78 */	mr r3, r30
/* 801C8D74 001C5CB4  4B E5 B3 41 */	bl __dl__FPv
.L_801C8D78:
/* 801C8D78 001C5CB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C8D7C 001C5CBC  7F C3 F3 78 */	mr r3, r30
/* 801C8D80 001C5CC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C8D84 001C5CC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C8D88 001C5CC8  7C 08 03 A6 */	mtlr r0
/* 801C8D8C 001C5CCC  38 21 00 10 */	addi r1, r1, 0x10
/* 801C8D90 001C5CD0  4E 80 00 20 */	blr 
.endfn "__dt__27Container<Q24Game8ItemGate>Fv"

.fn setupGate__Q24Game11ItemGateMgrFPQ24Game8ItemGate, global
/* 801C8D94 001C5CD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C8D98 001C5CD8  7C 08 02 A6 */	mflr r0
/* 801C8D9C 001C5CDC  3C A0 80 48 */	lis r5, lbl_80480288@ha
/* 801C8DA0 001C5CE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C8DA4 001C5CE4  38 05 02 88 */	addi r0, r5, lbl_80480288@l
/* 801C8DA8 001C5CE8  38 A0 00 00 */	li r5, 0
/* 801C8DAC 001C5CEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C8DB0 001C5CF0  7C 9F 23 78 */	mr r31, r4
/* 801C8DB4 001C5CF4  7C 04 03 78 */	mr r4, r0
/* 801C8DB8 001C5CF8  93 C1 00 08 */	stw r30, 8(r1)
/* 801C8DBC 001C5CFC  7C 7E 1B 78 */	mr r30, r3
/* 801C8DC0 001C5D00  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C8DC4 001C5D04  48 25 A5 99 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801C8DC8 001C5D08  38 60 00 14 */	li r3, 0x14
/* 801C8DCC 001C5D0C  4B E5 B0 D9 */	bl __nw__FUl
/* 801C8DD0 001C5D10  7C 60 1B 79 */	or. r0, r3, r3
/* 801C8DD4 001C5D14  41 82 00 1C */	beq .L_801C8DF0
/* 801C8DD8 001C5D18  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 801C8DDC 001C5D1C  38 A0 00 00 */	li r5, 0
/* 801C8DE0 001C5D20  38 C0 00 02 */	li r6, 2
/* 801C8DE4 001C5D24  80 84 00 00 */	lwz r4, 0(r4)
/* 801C8DE8 001C5D28  48 27 53 F1 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801C8DEC 001C5D2C  7C 60 1B 78 */	mr r0, r3
.L_801C8DF0:
/* 801C8DF0 001C5D30  90 1F 01 74 */	stw r0, 0x174(r31)
/* 801C8DF4 001C5D34  3C 60 80 48 */	lis r3, lbl_80480288@ha
/* 801C8DF8 001C5D38  38 83 02 88 */	addi r4, r3, lbl_80480288@l
/* 801C8DFC 001C5D3C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C8E00 001C5D40  48 25 A5 65 */	bl heapStatusEnd__6SystemFPc
/* 801C8E04 001C5D44  80 1E 00 20 */	lwz r0, 0x20(r30)
/* 801C8E08 001C5D48  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801C8E0C 001C5D4C  38 80 00 00 */	li r4, 0
/* 801C8E10 001C5D50  38 A0 00 00 */	li r5, 0
/* 801C8E14 001C5D54  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 801C8E18 001C5D58  48 25 FE 71 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801C8E1C 001C5D5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C8E20 001C5D60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C8E24 001C5D64  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C8E28 001C5D68  7C 08 03 A6 */	mtlr r0
/* 801C8E2C 001C5D6C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C8E30 001C5D70  4E 80 00 20 */	blr 
.endfn setupGate__Q24Game11ItemGateMgrFPQ24Game8ItemGate

.fn setupPlatform__Q24Game11ItemGateMgrFPQ24Game8ItemGate, global
/* 801C8E34 001C5D74  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801C8E38 001C5D78  7C 08 02 A6 */	mflr r0
/* 801C8E3C 001C5D7C  3C A0 80 48 */	lis r5, lbl_80480294@ha
/* 801C8E40 001C5D80  90 01 00 74 */	stw r0, 0x74(r1)
/* 801C8E44 001C5D84  38 05 02 94 */	addi r0, r5, lbl_80480294@l
/* 801C8E48 001C5D88  38 A0 00 00 */	li r5, 0
/* 801C8E4C 001C5D8C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801C8E50 001C5D90  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801C8E54 001C5D94  7C 9E 23 78 */	mr r30, r4
/* 801C8E58 001C5D98  7C 04 03 78 */	mr r4, r0
/* 801C8E5C 001C5D9C  93 A1 00 64 */	stw r29, 0x64(r1)
/* 801C8E60 001C5DA0  7C 7D 1B 78 */	mr r29, r3
/* 801C8E64 001C5DA4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C8E68 001C5DA8  48 25 A4 F5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801C8E6C 001C5DAC  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801C8E70 001C5DB0  38 82 B2 78 */	addi r4, r2, lbl_805195D8@sda21
/* 801C8E74 001C5DB4  48 27 61 71 */	bl getJoint__Q28SysShape5ModelFPc
/* 801C8E78 001C5DB8  48 26 0A 29 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801C8E7C 001C5DBC  3C 80 67 61 */	lis r4, 0x67617465@ha
/* 801C8E80 001C5DC0  7C 7F 1B 78 */	mr r31, r3
/* 801C8E84 001C5DC4  38 61 00 14 */	addi r3, r1, 0x14
/* 801C8E88 001C5DC8  38 84 74 65 */	addi r4, r4, 0x67617465@l
/* 801C8E8C 001C5DCC  48 24 A4 1D */	bl __ct__4ID32FUl
/* 801C8E90 001C5DD0  38 61 00 40 */	addi r3, r1, 0x40
/* 801C8E94 001C5DD4  4B FF CA 2D */	bl __ct__Q24Game18PlatAddInstanceArgFv
/* 801C8E98 001C5DD8  93 C1 00 40 */	stw r30, 0x40(r1)
/* 801C8E9C 001C5DDC  38 61 00 44 */	addi r3, r1, 0x44
/* 801C8EA0 001C5DE0  38 81 00 14 */	addi r4, r1, 0x14
/* 801C8EA4 001C5DE4  38 A0 00 05 */	li r5, 5
/* 801C8EA8 001C5DE8  4B EF 88 71 */	bl __copy
/* 801C8EAC 001C5DEC  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801C8EB0 001C5DF0  38 81 00 40 */	addi r4, r1, 0x40
/* 801C8EB4 001C5DF4  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801C8EB8 001C5DF8  90 01 00 4C */	stw r0, 0x4c(r1)
/* 801C8EBC 001C5DFC  80 1D 00 6C */	lwz r0, 0x6c(r29)
/* 801C8EC0 001C5E00  90 01 00 50 */	stw r0, 0x50(r1)
/* 801C8EC4 001C5E04  93 E1 00 54 */	stw r31, 0x54(r1)
/* 801C8EC8 001C5E08  4B FF CA 5D */	bl addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
/* 801C8ECC 001C5E0C  90 7E 01 F4 */	stw r3, 0x1f4(r30)
/* 801C8ED0 001C5E10  3C 60 80 48 */	lis r3, lbl_804802A0@ha
/* 801C8ED4 001C5E14  38 83 02 A0 */	addi r4, r3, lbl_804802A0@l
/* 801C8ED8 001C5E18  38 A0 00 00 */	li r5, 0
/* 801C8EDC 001C5E1C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C8EE0 001C5E20  48 25 A4 7D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801C8EE4 001C5E24  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801C8EE8 001C5E28  38 82 B2 94 */	addi r4, r2, lbl_805195F4@sda21
/* 801C8EEC 001C5E2C  48 27 60 F9 */	bl getJoint__Q28SysShape5ModelFPc
/* 801C8EF0 001C5E30  48 26 09 B1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801C8EF4 001C5E34  3C 80 6E 6F */	lis r4, 0x6E6F6E65@ha
/* 801C8EF8 001C5E38  7C 7F 1B 78 */	mr r31, r3
/* 801C8EFC 001C5E3C  38 61 00 08 */	addi r3, r1, 8
/* 801C8F00 001C5E40  38 84 6E 65 */	addi r4, r4, 0x6E6F6E65@l
/* 801C8F04 001C5E44  48 24 A3 A5 */	bl __ct__4ID32FUl
/* 801C8F08 001C5E48  38 61 00 20 */	addi r3, r1, 0x20
/* 801C8F0C 001C5E4C  4B FF C9 B5 */	bl __ct__Q24Game18PlatAddInstanceArgFv
/* 801C8F10 001C5E50  93 C1 00 20 */	stw r30, 0x20(r1)
/* 801C8F14 001C5E54  38 61 00 24 */	addi r3, r1, 0x24
/* 801C8F18 001C5E58  38 81 00 08 */	addi r4, r1, 8
/* 801C8F1C 001C5E5C  38 A0 00 05 */	li r5, 5
/* 801C8F20 001C5E60  4B EF 87 F9 */	bl __copy
/* 801C8F24 001C5E64  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 801C8F28 001C5E68  38 00 00 01 */	li r0, 1
/* 801C8F2C 001C5E6C  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801C8F30 001C5E70  38 81 00 20 */	addi r4, r1, 0x20
/* 801C8F34 001C5E74  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801C8F38 001C5E78  80 BD 00 70 */	lwz r5, 0x70(r29)
/* 801C8F3C 001C5E7C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 801C8F40 001C5E80  93 E1 00 34 */	stw r31, 0x34(r1)
/* 801C8F44 001C5E84  98 01 00 38 */	stb r0, 0x38(r1)
/* 801C8F48 001C5E88  4B FF C9 DD */	bl addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
/* 801C8F4C 001C5E8C  90 7E 01 F8 */	stw r3, 0x1f8(r30)
/* 801C8F50 001C5E90  3C 60 80 48 */	lis r3, lbl_804802A0@ha
/* 801C8F54 001C5E94  38 83 02 A0 */	addi r4, r3, lbl_804802A0@l
/* 801C8F58 001C5E98  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C8F5C 001C5E9C  48 25 A4 09 */	bl heapStatusEnd__6SystemFPc
/* 801C8F60 001C5EA0  3C 80 80 48 */	lis r4, lbl_80480294@ha
/* 801C8F64 001C5EA4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C8F68 001C5EA8  38 84 02 94 */	addi r4, r4, lbl_80480294@l
/* 801C8F6C 001C5EAC  48 25 A3 F9 */	bl heapStatusEnd__6SystemFPc
/* 801C8F70 001C5EB0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801C8F74 001C5EB4  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801C8F78 001C5EB8  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 801C8F7C 001C5EBC  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 801C8F80 001C5EC0  7C 08 03 A6 */	mtlr r0
/* 801C8F84 001C5EC4  38 21 00 70 */	addi r1, r1, 0x70
/* 801C8F88 001C5EC8  4E 80 00 20 */	blr 
.endfn setupPlatform__Q24Game11ItemGateMgrFPQ24Game8ItemGate

.fn birth__Q24Game11ItemGateMgrFv, global
/* 801C8F8C 001C5ECC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C8F90 001C5ED0  7C 08 02 A6 */	mflr r0
/* 801C8F94 001C5ED4  3C 80 80 48 */	lis r4, lbl_804801C8@ha
/* 801C8F98 001C5ED8  38 A0 00 00 */	li r5, 0
/* 801C8F9C 001C5EDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C8FA0 001C5EE0  38 84 01 C8 */	addi r4, r4, lbl_804801C8@l
/* 801C8FA4 001C5EE4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C8FA8 001C5EE8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C8FAC 001C5EEC  7C 7E 1B 78 */	mr r30, r3
/* 801C8FB0 001C5EF0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C8FB4 001C5EF4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C8FB8 001C5EF8  48 25 A3 A5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801C8FBC 001C5EFC  38 60 02 84 */	li r3, 0x284
/* 801C8FC0 001C5F00  4B E5 AE E5 */	bl __nw__FUl
/* 801C8FC4 001C5F04  7C 7F 1B 79 */	or. r31, r3, r3
/* 801C8FC8 001C5F08  41 82 01 24 */	beq .L_801C90EC
/* 801C8FCC 001C5F0C  38 80 04 04 */	li r4, 0x404
/* 801C8FD0 001C5F10  48 00 30 19 */	bl __ct__Q24Game8BaseItemFi
/* 801C8FD4 001C5F14  3C 60 80 4B */	lis r3, "__vt__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@ha
/* 801C8FD8 001C5F18  38 00 00 00 */	li r0, 0
/* 801C8FDC 001C5F1C  38 83 6E 30 */	addi r4, r3, "__vt__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@l
/* 801C8FE0 001C5F20  38 60 00 1C */	li r3, 0x1c
/* 801C8FE4 001C5F24  90 9F 00 00 */	stw r4, 0(r31)
/* 801C8FE8 001C5F28  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801C8FEC 001C5F2C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801C8FF0 001C5F30  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801C8FF4 001C5F34  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801C8FF8 001C5F38  4B E5 AE AD */	bl __nw__FUl
/* 801C8FFC 001C5F3C  28 03 00 00 */	cmplwi r3, 0
/* 801C9000 001C5F40  41 82 00 30 */	beq .L_801C9030
/* 801C9004 001C5F44  3C 80 80 4B */	lis r4, "__vt__Q24Game30StateMachine<Q24Game8ItemGate>"@ha
/* 801C9008 001C5F48  3C A0 80 4B */	lis r5, "__vt__Q24Game25ItemFSM<Q24Game8ItemGate>"@ha
/* 801C900C 001C5F4C  38 04 6E 18 */	addi r0, r4, "__vt__Q24Game30StateMachine<Q24Game8ItemGate>"@l
/* 801C9010 001C5F50  3C 80 80 4B */	lis r4, __vt__Q24Game7GateFSM@ha
/* 801C9014 001C5F54  90 03 00 00 */	stw r0, 0(r3)
/* 801C9018 001C5F58  38 C0 FF FF */	li r6, -1
/* 801C901C 001C5F5C  38 A5 6E 00 */	addi r5, r5, "__vt__Q24Game25ItemFSM<Q24Game8ItemGate>"@l
/* 801C9020 001C5F60  38 04 70 DC */	addi r0, r4, __vt__Q24Game7GateFSM@l
/* 801C9024 001C5F64  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801C9028 001C5F68  90 A3 00 00 */	stw r5, 0(r3)
/* 801C902C 001C5F6C  90 03 00 00 */	stw r0, 0(r3)
.L_801C9030:
/* 801C9030 001C5F70  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801C9034 001C5F74  7F E4 FB 78 */	mr r4, r31
/* 801C9038 001C5F78  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801C903C 001C5F7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9040 001C5F80  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C9044 001C5F84  7D 89 03 A6 */	mtctr r12
/* 801C9048 001C5F88  4E 80 04 21 */	bctrl 
/* 801C904C 001C5F8C  3C 80 80 4B */	lis r4, "__vt__Q24Game60WorkItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@ha
/* 801C9050 001C5F90  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801C9054 001C5F94  38 84 6B DC */	addi r4, r4, "__vt__Q24Game60WorkItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@l
/* 801C9058 001C5F98  90 9F 00 00 */	stw r4, 0(r31)
/* 801C905C 001C5F9C  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801C9060 001C5FA0  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801C9064 001C5FA4  48 06 5B 69 */	bl __ct__Q24Game11TSoundEventFv
/* 801C9068 001C5FA8  3C 60 80 4B */	lis r3, __vt__Q24Game8ItemGate@ha
/* 801C906C 001C5FAC  3C 80 80 15 */	lis r4, __ct__5PlaneFv@ha
/* 801C9070 001C5FB0  38 A3 69 B8 */	addi r5, r3, __vt__Q24Game8ItemGate@l
/* 801C9074 001C5FB4  38 C0 00 10 */	li r6, 0x10
/* 801C9078 001C5FB8  90 BF 00 00 */	stw r5, 0(r31)
/* 801C907C 001C5FBC  38 05 01 B0 */	addi r0, r5, 0x1b0
/* 801C9080 001C5FC0  38 7F 02 24 */	addi r3, r31, 0x224
/* 801C9084 001C5FC4  38 84 1C 68 */	addi r4, r4, __ct__5PlaneFv@l
/* 801C9088 001C5FC8  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801C908C 001C5FCC  38 A0 00 00 */	li r5, 0
/* 801C9090 001C5FD0  38 E0 00 04 */	li r7, 4
/* 801C9094 001C5FD4  4B EF 87 A9 */	bl __construct_array
/* 801C9098 001C5FD8  38 60 00 08 */	li r3, 8
/* 801C909C 001C5FDC  4B E5 AE 09 */	bl __nw__FUl
/* 801C90A0 001C5FE0  7C 60 1B 79 */	or. r0, r3, r3
/* 801C90A4 001C5FE4  41 82 00 0C */	beq .L_801C90B0
/* 801C90A8 001C5FE8  4B F6 AF B5 */	bl __ct__8CollTreeFv
/* 801C90AC 001C5FEC  7C 60 1B 78 */	mr r0, r3
.L_801C90B0:
/* 801C90B0 001C5FF0  90 1F 01 14 */	stw r0, 0x114(r31)
/* 801C90B4 001C5FF4  38 60 00 00 */	li r3, 0
/* 801C90B8 001C5FF8  C0 02 B2 30 */	lfs f0, lbl_80519590@sda21(r2)
/* 801C90BC 001C5FFC  38 00 00 03 */	li r0, 3
/* 801C90C0 001C6000  C0 22 B2 34 */	lfs f1, lbl_80519594@sda21(r2)
/* 801C90C4 001C6004  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 801C90C8 001C6008  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C90CC 001C600C  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 801C90D0 001C6010  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 801C90D4 001C6014  90 7F 02 0C */	stw r3, 0x20c(r31)
/* 801C90D8 001C6018  90 1F 02 10 */	stw r0, 0x210(r31)
/* 801C90DC 001C601C  D0 3F 02 04 */	stfs f1, 0x204(r31)
/* 801C90E0 001C6020  98 7F 02 18 */	stb r3, 0x218(r31)
/* 801C90E4 001C6024  90 7F 02 1C */	stw r3, 0x21c(r31)
/* 801C90E8 001C6028  90 7F 02 20 */	stw r3, 0x220(r31)
.L_801C90EC:
/* 801C90EC 001C602C  38 60 00 1C */	li r3, 0x1c
/* 801C90F0 001C6030  4B E5 AD B5 */	bl __nw__FUl
/* 801C90F4 001C6034  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C90F8 001C6038  41 82 00 14 */	beq .L_801C910C
/* 801C90FC 001C603C  48 24 82 95 */	bl __ct__5CNodeFv
/* 801C9100 001C6040  3C 60 80 4B */	lis r3, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
/* 801C9104 001C6044  38 03 68 00 */	addi r0, r3, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
/* 801C9108 001C6048  90 1D 00 00 */	stw r0, 0(r29)
.L_801C910C:
/* 801C910C 001C604C  93 FD 00 18 */	stw r31, 0x18(r29)
/* 801C9110 001C6050  7F A4 EB 78 */	mr r4, r29
/* 801C9114 001C6054  38 7E 00 50 */	addi r3, r30, 0x50
/* 801C9118 001C6058  48 24 82 F1 */	bl add__5CNodeFP5CNode
/* 801C911C 001C605C  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 801C9120 001C6060  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9124 001C6064  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801C9128 001C6068  7D 89 03 A6 */	mtctr r12
/* 801C912C 001C606C  4E 80 04 21 */	bctrl 
/* 801C9130 001C6070  3C 80 80 48 */	lis r4, lbl_804801C8@ha
/* 801C9134 001C6074  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C9138 001C6078  38 84 01 C8 */	addi r4, r4, lbl_804801C8@l
/* 801C913C 001C607C  48 25 A2 29 */	bl heapStatusEnd__6SystemFPc
/* 801C9140 001C6080  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C9144 001C6084  7F E3 FB 78 */	mr r3, r31
/* 801C9148 001C6088  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C914C 001C608C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C9150 001C6090  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C9154 001C6094  7C 08 03 A6 */	mtlr r0
/* 801C9158 001C6098  38 21 00 20 */	addi r1, r1, 0x20
/* 801C915C 001C609C  4E 80 00 20 */	blr 
.endfn birth__Q24Game11ItemGateMgrFv

.fn initDependency__Q24Game11ItemGateMgrFv, global
/* 801C9160 001C60A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C9164 001C60A4  7C 08 02 A6 */	mflr r0
/* 801C9168 001C60A8  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
/* 801C916C 001C60AC  38 63 00 30 */	addi r3, r3, 0x30
/* 801C9170 001C60B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C9174 001C60B4  38 00 00 00 */	li r0, 0
/* 801C9178 001C60B8  38 84 5A 7C */	addi r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
/* 801C917C 001C60BC  28 00 00 00 */	cmplwi r0, 0
/* 801C9180 001C60C0  90 81 00 08 */	stw r4, 8(r1)
/* 801C9184 001C60C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C9188 001C60C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C918C 001C60CC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C9190 001C60D0  40 82 00 1C */	bne .L_801C91AC
/* 801C9194 001C60D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9198 001C60D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C919C 001C60DC  7D 89 03 A6 */	mtctr r12
/* 801C91A0 001C60E0  4E 80 04 21 */	bctrl 
/* 801C91A4 001C60E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C91A8 001C60E8  48 00 01 70 */	b .L_801C9318
.L_801C91AC:
/* 801C91AC 001C60EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C91B0 001C60F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C91B4 001C60F4  7D 89 03 A6 */	mtctr r12
/* 801C91B8 001C60F8  4E 80 04 21 */	bctrl 
/* 801C91BC 001C60FC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C91C0 001C6100  48 00 00 58 */	b .L_801C9218
.L_801C91C4:
/* 801C91C4 001C6104  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C91C8 001C6108  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C91CC 001C610C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C91D0 001C6110  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C91D4 001C6114  7D 89 03 A6 */	mtctr r12
/* 801C91D8 001C6118  4E 80 04 21 */	bctrl 
/* 801C91DC 001C611C  7C 64 1B 78 */	mr r4, r3
/* 801C91E0 001C6120  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C91E4 001C6124  81 83 00 00 */	lwz r12, 0(r3)
/* 801C91E8 001C6128  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C91EC 001C612C  7D 89 03 A6 */	mtctr r12
/* 801C91F0 001C6130  4E 80 04 21 */	bctrl 
/* 801C91F4 001C6134  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C91F8 001C6138  40 82 01 20 */	bne .L_801C9318
/* 801C91FC 001C613C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C9200 001C6140  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C9204 001C6144  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9208 001C6148  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C920C 001C614C  7D 89 03 A6 */	mtctr r12
/* 801C9210 001C6150  4E 80 04 21 */	bctrl 
/* 801C9214 001C6154  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C9218:
/* 801C9218 001C6158  81 81 00 08 */	lwz r12, 8(r1)
/* 801C921C 001C615C  38 61 00 08 */	addi r3, r1, 8
/* 801C9220 001C6160  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C9224 001C6164  7D 89 03 A6 */	mtctr r12
/* 801C9228 001C6168  4E 80 04 21 */	bctrl 
/* 801C922C 001C616C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C9230 001C6170  41 82 FF 94 */	beq .L_801C91C4
/* 801C9234 001C6174  48 00 00 E4 */	b .L_801C9318
.L_801C9238:
/* 801C9238 001C6178  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C923C 001C617C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9240 001C6180  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C9244 001C6184  7D 89 03 A6 */	mtctr r12
/* 801C9248 001C6188  4E 80 04 21 */	bctrl 
/* 801C924C 001C618C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9250 001C6190  81 8C 01 BC */	lwz r12, 0x1bc(r12)
/* 801C9254 001C6194  7D 89 03 A6 */	mtctr r12
/* 801C9258 001C6198  4E 80 04 21 */	bctrl 
/* 801C925C 001C619C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C9260 001C61A0  28 00 00 00 */	cmplwi r0, 0
/* 801C9264 001C61A4  40 82 00 24 */	bne .L_801C9288
/* 801C9268 001C61A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C926C 001C61AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C9270 001C61B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9274 001C61B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C9278 001C61B8  7D 89 03 A6 */	mtctr r12
/* 801C927C 001C61BC  4E 80 04 21 */	bctrl 
/* 801C9280 001C61C0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C9284 001C61C4  48 00 00 94 */	b .L_801C9318
.L_801C9288:
/* 801C9288 001C61C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C928C 001C61CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C9290 001C61D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9294 001C61D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C9298 001C61D8  7D 89 03 A6 */	mtctr r12
/* 801C929C 001C61DC  4E 80 04 21 */	bctrl 
/* 801C92A0 001C61E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C92A4 001C61E4  48 00 00 58 */	b .L_801C92FC
.L_801C92A8:
/* 801C92A8 001C61E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C92AC 001C61EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C92B0 001C61F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C92B4 001C61F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C92B8 001C61F8  7D 89 03 A6 */	mtctr r12
/* 801C92BC 001C61FC  4E 80 04 21 */	bctrl 
/* 801C92C0 001C6200  7C 64 1B 78 */	mr r4, r3
/* 801C92C4 001C6204  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C92C8 001C6208  81 83 00 00 */	lwz r12, 0(r3)
/* 801C92CC 001C620C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C92D0 001C6210  7D 89 03 A6 */	mtctr r12
/* 801C92D4 001C6214  4E 80 04 21 */	bctrl 
/* 801C92D8 001C6218  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C92DC 001C621C  40 82 00 3C */	bne .L_801C9318
/* 801C92E0 001C6220  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C92E4 001C6224  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C92E8 001C6228  81 83 00 00 */	lwz r12, 0(r3)
/* 801C92EC 001C622C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C92F0 001C6230  7D 89 03 A6 */	mtctr r12
/* 801C92F4 001C6234  4E 80 04 21 */	bctrl 
/* 801C92F8 001C6238  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C92FC:
/* 801C92FC 001C623C  81 81 00 08 */	lwz r12, 8(r1)
/* 801C9300 001C6240  38 61 00 08 */	addi r3, r1, 8
/* 801C9304 001C6244  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C9308 001C6248  7D 89 03 A6 */	mtctr r12
/* 801C930C 001C624C  4E 80 04 21 */	bctrl 
/* 801C9310 001C6250  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C9314 001C6254  41 82 FF 94 */	beq .L_801C92A8
.L_801C9318:
/* 801C9318 001C6258  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C931C 001C625C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9320 001C6260  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C9324 001C6264  7D 89 03 A6 */	mtctr r12
/* 801C9328 001C6268  4E 80 04 21 */	bctrl 
/* 801C932C 001C626C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C9330 001C6270  7C 04 18 40 */	cmplw r4, r3
/* 801C9334 001C6274  40 82 FF 04 */	bne .L_801C9238
/* 801C9338 001C6278  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C933C 001C627C  7C 08 03 A6 */	mtlr r0
/* 801C9340 001C6280  38 21 00 20 */	addi r1, r1, 0x20
/* 801C9344 001C6284  4E 80 00 20 */	blr 
.endfn initDependency__Q24Game11ItemGateMgrFv

.fn generatorNewItemParm__Q24Game11ItemGateMgrFv, global
/* 801C9348 001C6288  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C934C 001C628C  7C 08 02 A6 */	mflr r0
/* 801C9350 001C6290  38 60 00 0C */	li r3, 0xc
/* 801C9354 001C6294  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C9358 001C6298  4B E5 AB 4D */	bl __nw__FUl
/* 801C935C 001C629C  28 03 00 00 */	cmplwi r3, 0
/* 801C9360 001C62A0  41 82 00 2C */	beq .L_801C938C
/* 801C9364 001C62A4  3C A0 80 4B */	lis r5, __vt__Q24Game11GenItemParm@ha
/* 801C9368 001C62A8  3C 80 80 4B */	lis r4, __vt__11GenGateParm@ha
/* 801C936C 001C62AC  38 05 26 24 */	addi r0, r5, __vt__Q24Game11GenItemParm@l
/* 801C9370 001C62B0  C0 02 B2 34 */	lfs f0, lbl_80519594@sda21(r2)
/* 801C9374 001C62B4  90 03 00 00 */	stw r0, 0(r3)
/* 801C9378 001C62B8  38 84 67 78 */	addi r4, r4, __vt__11GenGateParm@l
/* 801C937C 001C62BC  38 00 00 00 */	li r0, 0
/* 801C9380 001C62C0  90 83 00 00 */	stw r4, 0(r3)
/* 801C9384 001C62C4  D0 03 00 04 */	stfs f0, 4(r3)
/* 801C9388 001C62C8  B0 03 00 08 */	sth r0, 8(r3)
.L_801C938C:
/* 801C938C 001C62CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C9390 001C62D0  7C 08 03 A6 */	mtlr r0
/* 801C9394 001C62D4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C9398 001C62D8  4E 80 00 20 */	blr 
.endfn generatorNewItemParm__Q24Game11ItemGateMgrFv

.fn generatorWrite__Q24Game11ItemGateMgrFR6StreamPQ24Game11GenItemParm, global
/* 801C939C 001C62DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C93A0 001C62E0  7C 08 02 A6 */	mflr r0
/* 801C93A4 001C62E4  3C 60 80 48 */	lis r3, lbl_80480188@ha
/* 801C93A8 001C62E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C93AC 001C62EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C93B0 001C62F0  3B E3 01 88 */	addi r31, r3, lbl_80480188@l
/* 801C93B4 001C62F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C93B8 001C62F8  7C BE 2B 79 */	or. r30, r5, r5
/* 801C93BC 001C62FC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C93C0 001C6300  7C 9D 23 78 */	mr r29, r4
/* 801C93C4 001C6304  40 82 00 18 */	bne .L_801C93DC
/* 801C93C8 001C6308  38 7F 00 18 */	addi r3, r31, 0x18
/* 801C93CC 001C630C  38 BF 00 34 */	addi r5, r31, 0x34
/* 801C93D0 001C6310  38 80 03 1A */	li r4, 0x31a
/* 801C93D4 001C6314  4C C6 31 82 */	crclr 6
/* 801C93D8 001C6318  4B E6 12 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801C93DC:
/* 801C93DC 001C631C  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801C93E0 001C6320  7F A3 EB 78 */	mr r3, r29
/* 801C93E4 001C6324  48 24 B0 51 */	bl textWriteTab__6StreamFi
/* 801C93E8 001C6328  C0 3E 00 04 */	lfs f1, 4(r30)
/* 801C93EC 001C632C  7F A3 EB 78 */	mr r3, r29
/* 801C93F0 001C6330  48 24 C4 59 */	bl writeFloat__6StreamFf
/* 801C93F4 001C6334  7F A3 EB 78 */	mr r3, r29
/* 801C93F8 001C6338  38 9F 01 24 */	addi r4, r31, 0x124
/* 801C93FC 001C633C  4C C6 31 82 */	crclr 6
/* 801C9400 001C6340  48 24 AD DD */	bl textWriteText__6StreamFPce
/* 801C9404 001C6344  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801C9408 001C6348  7F A3 EB 78 */	mr r3, r29
/* 801C940C 001C634C  48 24 B0 29 */	bl textWriteTab__6StreamFi
/* 801C9410 001C6350  A8 1E 00 08 */	lha r0, 8(r30)
/* 801C9414 001C6354  7F A3 EB 78 */	mr r3, r29
/* 801C9418 001C6358  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 801C941C 001C635C  48 24 C2 55 */	bl writeByte__6StreamFUc
/* 801C9420 001C6360  7F A3 EB 78 */	mr r3, r29
/* 801C9424 001C6364  38 9F 01 30 */	addi r4, r31, 0x130
/* 801C9428 001C6368  4C C6 31 82 */	crclr 6
/* 801C942C 001C636C  48 24 AD B1 */	bl textWriteText__6StreamFPce
/* 801C9430 001C6370  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C9434 001C6374  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C9438 001C6378  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C943C 001C637C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C9440 001C6380  7C 08 03 A6 */	mtlr r0
/* 801C9444 001C6384  38 21 00 20 */	addi r1, r1, 0x20
/* 801C9448 001C6388  4E 80 00 20 */	blr 
.endfn generatorWrite__Q24Game11ItemGateMgrFR6StreamPQ24Game11GenItemParm

.fn generatorRead__Q24Game11ItemGateMgrFR6StreamPQ24Game11GenItemParmUl, global
/* 801C944C 001C638C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C9450 001C6390  7C 08 02 A6 */	mflr r0
/* 801C9454 001C6394  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C9458 001C6398  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C945C 001C639C  7C DF 33 78 */	mr r31, r6
/* 801C9460 001C63A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C9464 001C63A4  7C BE 2B 79 */	or. r30, r5, r5
/* 801C9468 001C63A8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C946C 001C63AC  7C 9D 23 78 */	mr r29, r4
/* 801C9470 001C63B0  40 82 00 20 */	bne .L_801C9490
/* 801C9474 001C63B4  3C 60 80 48 */	lis r3, lbl_804801A0@ha
/* 801C9478 001C63B8  3C A0 80 48 */	lis r5, lbl_804801BC@ha
/* 801C947C 001C63BC  38 63 01 A0 */	addi r3, r3, lbl_804801A0@l
/* 801C9480 001C63C0  38 80 03 28 */	li r4, 0x328
/* 801C9484 001C63C4  38 A5 01 BC */	addi r5, r5, lbl_804801BC@l
/* 801C9488 001C63C8  4C C6 31 82 */	crclr 6
/* 801C948C 001C63CC  4B E6 11 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801C9490:
/* 801C9490 001C63D0  3C 60 30 30 */	lis r3, 0x30303031@ha
/* 801C9494 001C63D4  38 03 30 31 */	addi r0, r3, 0x30303031@l
/* 801C9498 001C63D8  7C 1F 00 40 */	cmplw r31, r0
/* 801C949C 001C63DC  41 80 00 10 */	blt .L_801C94AC
/* 801C94A0 001C63E0  7F A3 EB 78 */	mr r3, r29
/* 801C94A4 001C63E4  48 24 B9 09 */	bl readFloat__6StreamFv
/* 801C94A8 001C63E8  D0 3E 00 04 */	stfs f1, 4(r30)
.L_801C94AC:
/* 801C94AC 001C63EC  3C 60 30 30 */	lis r3, 0x30303032@ha
/* 801C94B0 001C63F0  38 03 30 32 */	addi r0, r3, 0x30303032@l
/* 801C94B4 001C63F4  7C 1F 00 40 */	cmplw r31, r0
/* 801C94B8 001C63F8  41 80 00 18 */	blt .L_801C94D0
/* 801C94BC 001C63FC  7F A3 EB 78 */	mr r3, r29
/* 801C94C0 001C6400  48 24 AF DD */	bl readByte__6StreamFv
/* 801C94C4 001C6404  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801C94C8 001C6408  B0 1E 00 08 */	sth r0, 8(r30)
/* 801C94CC 001C640C  48 00 00 0C */	b .L_801C94D8
.L_801C94D0:
/* 801C94D0 001C6410  38 00 00 00 */	li r0, 0
/* 801C94D4 001C6414  B0 1E 00 08 */	sth r0, 8(r30)
.L_801C94D8:
/* 801C94D8 001C6418  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C94DC 001C641C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C94E0 001C6420  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C94E4 001C6424  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C94E8 001C6428  7C 08 03 A6 */	mtlr r0
/* 801C94EC 001C642C  38 21 00 20 */	addi r1, r1, 0x20
/* 801C94F0 001C6430  4E 80 00 20 */	blr 
.endfn generatorRead__Q24Game11ItemGateMgrFR6StreamPQ24Game11GenItemParmUl

.fn "generatorBirth__Q24Game11ItemGateMgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm", global
/* 801C94F4 001C6434  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801C94F8 001C6438  7C 08 02 A6 */	mflr r0
/* 801C94FC 001C643C  90 01 00 34 */	stw r0, 0x34(r1)
/* 801C9500 001C6440  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 801C9504 001C6444  7C DD 33 79 */	or. r29, r6, r6
/* 801C9508 001C6448  3C C0 80 48 */	lis r6, lbl_80480188@ha
/* 801C950C 001C644C  7C 7A 1B 78 */	mr r26, r3
/* 801C9510 001C6450  7C 9B 23 78 */	mr r27, r4
/* 801C9514 001C6454  7C BC 2B 78 */	mr r28, r5
/* 801C9518 001C6458  3B E6 01 88 */	addi r31, r6, lbl_80480188@l
/* 801C951C 001C645C  40 82 00 18 */	bne .L_801C9534
/* 801C9520 001C6460  38 7F 00 18 */	addi r3, r31, 0x18
/* 801C9524 001C6464  38 BF 00 34 */	addi r5, r31, 0x34
/* 801C9528 001C6468  38 80 03 37 */	li r4, 0x337
/* 801C952C 001C646C  4C C6 31 82 */	crclr 6
/* 801C9530 001C6470  4B E6 11 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801C9534:
/* 801C9534 001C6474  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C9538 001C6478  38 9F 00 40 */	addi r4, r31, 0x40
/* 801C953C 001C647C  38 A0 00 00 */	li r5, 0
/* 801C9540 001C6480  48 25 9E 1D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801C9544 001C6484  38 60 02 84 */	li r3, 0x284
/* 801C9548 001C6488  4B E5 A9 5D */	bl __nw__FUl
/* 801C954C 001C648C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C9550 001C6490  41 82 01 24 */	beq .L_801C9674
/* 801C9554 001C6494  38 80 04 04 */	li r4, 0x404
/* 801C9558 001C6498  48 00 2A 91 */	bl __ct__Q24Game8BaseItemFi
/* 801C955C 001C649C  3C 60 80 4B */	lis r3, "__vt__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@ha
/* 801C9560 001C64A0  38 00 00 00 */	li r0, 0
/* 801C9564 001C64A4  38 83 6E 30 */	addi r4, r3, "__vt__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@l
/* 801C9568 001C64A8  38 60 00 1C */	li r3, 0x1c
/* 801C956C 001C64AC  90 9E 00 00 */	stw r4, 0(r30)
/* 801C9570 001C64B0  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801C9574 001C64B4  90 9E 01 78 */	stw r4, 0x178(r30)
/* 801C9578 001C64B8  90 1E 01 D8 */	stw r0, 0x1d8(r30)
/* 801C957C 001C64BC  90 1E 01 DC */	stw r0, 0x1dc(r30)
/* 801C9580 001C64C0  4B E5 A9 25 */	bl __nw__FUl
/* 801C9584 001C64C4  28 03 00 00 */	cmplwi r3, 0
/* 801C9588 001C64C8  41 82 00 30 */	beq .L_801C95B8
/* 801C958C 001C64CC  3C 80 80 4B */	lis r4, "__vt__Q24Game30StateMachine<Q24Game8ItemGate>"@ha
/* 801C9590 001C64D0  3C A0 80 4B */	lis r5, "__vt__Q24Game25ItemFSM<Q24Game8ItemGate>"@ha
/* 801C9594 001C64D4  38 04 6E 18 */	addi r0, r4, "__vt__Q24Game30StateMachine<Q24Game8ItemGate>"@l
/* 801C9598 001C64D8  3C 80 80 4B */	lis r4, __vt__Q24Game7GateFSM@ha
/* 801C959C 001C64DC  90 03 00 00 */	stw r0, 0(r3)
/* 801C95A0 001C64E0  38 C0 FF FF */	li r6, -1
/* 801C95A4 001C64E4  38 A5 6E 00 */	addi r5, r5, "__vt__Q24Game25ItemFSM<Q24Game8ItemGate>"@l
/* 801C95A8 001C64E8  38 04 70 DC */	addi r0, r4, __vt__Q24Game7GateFSM@l
/* 801C95AC 001C64EC  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801C95B0 001C64F0  90 A3 00 00 */	stw r5, 0(r3)
/* 801C95B4 001C64F4  90 03 00 00 */	stw r0, 0(r3)
.L_801C95B8:
/* 801C95B8 001C64F8  90 7E 01 D8 */	stw r3, 0x1d8(r30)
/* 801C95BC 001C64FC  7F C4 F3 78 */	mr r4, r30
/* 801C95C0 001C6500  80 7E 01 D8 */	lwz r3, 0x1d8(r30)
/* 801C95C4 001C6504  81 83 00 00 */	lwz r12, 0(r3)
/* 801C95C8 001C6508  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C95CC 001C650C  7D 89 03 A6 */	mtctr r12
/* 801C95D0 001C6510  4E 80 04 21 */	bctrl 
/* 801C95D4 001C6514  3C 80 80 4B */	lis r4, "__vt__Q24Game60WorkItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@ha
/* 801C95D8 001C6518  38 7E 01 E0 */	addi r3, r30, 0x1e0
/* 801C95DC 001C651C  38 84 6B DC */	addi r4, r4, "__vt__Q24Game60WorkItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@l
/* 801C95E0 001C6520  90 9E 00 00 */	stw r4, 0(r30)
/* 801C95E4 001C6524  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801C95E8 001C6528  90 1E 01 78 */	stw r0, 0x178(r30)
/* 801C95EC 001C652C  48 06 55 E1 */	bl __ct__Q24Game11TSoundEventFv
/* 801C95F0 001C6530  3C 60 80 4B */	lis r3, __vt__Q24Game8ItemGate@ha
/* 801C95F4 001C6534  3C 80 80 15 */	lis r4, __ct__5PlaneFv@ha
/* 801C95F8 001C6538  38 A3 69 B8 */	addi r5, r3, __vt__Q24Game8ItemGate@l
/* 801C95FC 001C653C  38 C0 00 10 */	li r6, 0x10
/* 801C9600 001C6540  90 BE 00 00 */	stw r5, 0(r30)
/* 801C9604 001C6544  38 05 01 B0 */	addi r0, r5, 0x1b0
/* 801C9608 001C6548  38 7E 02 24 */	addi r3, r30, 0x224
/* 801C960C 001C654C  38 84 1C 68 */	addi r4, r4, __ct__5PlaneFv@l
/* 801C9610 001C6550  90 1E 01 78 */	stw r0, 0x178(r30)
/* 801C9614 001C6554  38 A0 00 00 */	li r5, 0
/* 801C9618 001C6558  38 E0 00 04 */	li r7, 4
/* 801C961C 001C655C  4B EF 82 21 */	bl __construct_array
/* 801C9620 001C6560  38 60 00 08 */	li r3, 8
/* 801C9624 001C6564  4B E5 A8 81 */	bl __nw__FUl
/* 801C9628 001C6568  7C 60 1B 79 */	or. r0, r3, r3
/* 801C962C 001C656C  41 82 00 0C */	beq .L_801C9638
/* 801C9630 001C6570  4B F6 AA 2D */	bl __ct__8CollTreeFv
/* 801C9634 001C6574  7C 60 1B 78 */	mr r0, r3
.L_801C9638:
/* 801C9638 001C6578  90 1E 01 14 */	stw r0, 0x114(r30)
/* 801C963C 001C657C  38 60 00 00 */	li r3, 0
/* 801C9640 001C6580  C0 02 B2 30 */	lfs f0, lbl_80519590@sda21(r2)
/* 801C9644 001C6584  38 00 00 03 */	li r0, 3
/* 801C9648 001C6588  C0 22 B2 34 */	lfs f1, lbl_80519594@sda21(r2)
/* 801C964C 001C658C  D0 1E 01 D0 */	stfs f0, 0x1d0(r30)
/* 801C9650 001C6590  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C9654 001C6594  D0 3E 02 00 */	stfs f1, 0x200(r30)
/* 801C9658 001C6598  D0 1E 02 08 */	stfs f0, 0x208(r30)
/* 801C965C 001C659C  90 7E 02 0C */	stw r3, 0x20c(r30)
/* 801C9660 001C65A0  90 1E 02 10 */	stw r0, 0x210(r30)
/* 801C9664 001C65A4  D0 3E 02 04 */	stfs f1, 0x204(r30)
/* 801C9668 001C65A8  98 7E 02 18 */	stb r3, 0x218(r30)
/* 801C966C 001C65AC  90 7E 02 1C */	stw r3, 0x21c(r30)
/* 801C9670 001C65B0  90 7E 02 20 */	stw r3, 0x220(r30)
.L_801C9674:
/* 801C9674 001C65B4  38 60 00 1C */	li r3, 0x1c
/* 801C9678 001C65B8  4B E5 A8 2D */	bl __nw__FUl
/* 801C967C 001C65BC  7C 79 1B 79 */	or. r25, r3, r3
/* 801C9680 001C65C0  41 82 00 14 */	beq .L_801C9694
/* 801C9684 001C65C4  48 24 7D 0D */	bl __ct__5CNodeFv
/* 801C9688 001C65C8  3C 60 80 4B */	lis r3, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
/* 801C968C 001C65CC  38 03 68 00 */	addi r0, r3, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
/* 801C9690 001C65D0  90 19 00 00 */	stw r0, 0(r25)
.L_801C9694:
/* 801C9694 001C65D4  93 D9 00 18 */	stw r30, 0x18(r25)
/* 801C9698 001C65D8  7F 24 CB 78 */	mr r4, r25
/* 801C969C 001C65DC  38 7A 00 50 */	addi r3, r26, 0x50
/* 801C96A0 001C65E0  48 24 7D 69 */	bl add__5CNodeFP5CNode
/* 801C96A4 001C65E4  80 79 00 18 */	lwz r3, 0x18(r25)
/* 801C96A8 001C65E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C96AC 001C65EC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801C96B0 001C65F0  7D 89 03 A6 */	mtctr r12
/* 801C96B4 001C65F4  4E 80 04 21 */	bctrl 
/* 801C96B8 001C65F8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C96BC 001C65FC  38 9F 00 40 */	addi r4, r31, 0x40
/* 801C96C0 001C6600  48 25 9C A5 */	bl heapStatusEnd__6SystemFPc
/* 801C96C4 001C6604  C0 1D 00 04 */	lfs f0, 4(r29)
/* 801C96C8 001C6608  7F C3 F3 78 */	mr r3, r30
/* 801C96CC 001C660C  38 80 00 00 */	li r4, 0
/* 801C96D0 001C6610  D0 1E 02 04 */	stfs f0, 0x204(r30)
/* 801C96D4 001C6614  C0 1E 02 04 */	lfs f0, 0x204(r30)
/* 801C96D8 001C6618  D0 1E 02 00 */	stfs f0, 0x200(r30)
/* 801C96DC 001C661C  A8 1D 00 08 */	lha r0, 8(r29)
/* 801C96E0 001C6620  98 1E 02 7C */	stb r0, 0x27c(r30)
/* 801C96E4 001C6624  4B F7 18 E5 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801C96E8 001C6628  C0 3C 00 04 */	lfs f1, 4(r28)
/* 801C96EC 001C662C  48 24 84 E5 */	bl roundAng__Ff
/* 801C96F0 001C6630  D0 3E 02 14 */	stfs f1, 0x214(r30)
/* 801C96F4 001C6634  7F C3 F3 78 */	mr r3, r30
/* 801C96F8 001C6638  7F 64 DB 78 */	mr r4, r27
/* 801C96FC 001C663C  38 A0 00 00 */	li r5, 0
/* 801C9700 001C6640  4B F7 1A A9 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C9704 001C6644  7F C3 F3 78 */	mr r3, r30
/* 801C9708 001C6648  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 801C970C 001C664C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801C9710 001C6650  7C 08 03 A6 */	mtlr r0
/* 801C9714 001C6654  38 21 00 30 */	addi r1, r1, 0x30
/* 801C9718 001C6658  4E 80 00 20 */	blr 
.endfn "generatorBirth__Q24Game11ItemGateMgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"

.fn getCaveName__Q24Game11ItemGateMgrFi, global
/* 801C971C 001C665C  2C 04 00 00 */	cmpwi r4, 0
/* 801C9720 001C6660  38 60 00 00 */	li r3, 0
/* 801C9724 001C6664  4C 82 00 20 */	bnelr 
/* 801C9728 001C6668  38 62 B2 54 */	addi r3, r2, lbl_805195B4@sda21
/* 801C972C 001C666C  4E 80 00 20 */	blr 
.endfn getCaveName__Q24Game11ItemGateMgrFi

.fn getCaveID__Q24Game11ItemGateMgrFPc, global
/* 801C9730 001C6670  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C9734 001C6674  7C 08 02 A6 */	mflr r0
/* 801C9738 001C6678  38 62 B2 54 */	addi r3, r2, lbl_805195B4@sda21
/* 801C973C 001C667C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C9740 001C6680  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C9744 001C6684  7C 9F 23 78 */	mr r31, r4
/* 801C9748 001C6688  4B F0 11 C9 */	bl strlen
/* 801C974C 001C668C  7C 65 1B 78 */	mr r5, r3
/* 801C9750 001C6690  7F E4 FB 78 */	mr r4, r31
/* 801C9754 001C6694  38 62 B2 54 */	addi r3, r2, lbl_805195B4@sda21
/* 801C9758 001C6698  4B F0 0F 29 */	bl strncmp
/* 801C975C 001C669C  7C 03 00 D0 */	neg r0, r3
/* 801C9760 001C66A0  7C 00 1B 78 */	or r0, r0, r3
/* 801C9764 001C66A4  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 801C9768 001C66A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C976C 001C66AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C9770 001C66B0  7C 08 03 A6 */	mtlr r0
/* 801C9774 001C66B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C9778 001C66B8  4E 80 00 20 */	blr 
.endfn getCaveID__Q24Game11ItemGateMgrFPc

.fn init__Q24Game13GateWaitStateFPQ24Game8ItemGatePQ24Game8StateArg, global
/* 801C977C 001C66BC  4E 80 00 20 */	blr 
.endfn init__Q24Game13GateWaitStateFPQ24Game8ItemGatePQ24Game8StateArg

.fn exec__Q24Game13GateWaitStateFPQ24Game8ItemGate, global
/* 801C9780 001C66C0  4E 80 00 20 */	blr 
.endfn exec__Q24Game13GateWaitStateFPQ24Game8ItemGate

.fn cleanup__Q24Game13GateWaitStateFPQ24Game8ItemGate, global
/* 801C9784 001C66C4  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13GateWaitStateFPQ24Game8ItemGate

.fn onDamage__Q24Game13GateWaitStateFPQ24Game8ItemGatef, global
/* 801C9788 001C66C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C978C 001C66CC  7C 08 02 A6 */	mflr r0
/* 801C9790 001C66D0  38 A0 00 01 */	li r5, 1
/* 801C9794 001C66D4  38 C0 00 00 */	li r6, 0
/* 801C9798 001C66D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C979C 001C66DC  C0 04 02 08 */	lfs f0, 0x208(r4)
/* 801C97A0 001C66E0  EC 00 08 2A */	fadds f0, f0, f1
/* 801C97A4 001C66E4  D0 04 02 08 */	stfs f0, 0x208(r4)
/* 801C97A8 001C66E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C97AC 001C66EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C97B0 001C66F0  7D 89 03 A6 */	mtctr r12
/* 801C97B4 001C66F4  4E 80 04 21 */	bctrl 
/* 801C97B8 001C66F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C97BC 001C66FC  7C 08 03 A6 */	mtlr r0
/* 801C97C0 001C6700  38 21 00 10 */	addi r1, r1, 0x10
/* 801C97C4 001C6704  4E 80 00 20 */	blr 
.endfn onDamage__Q24Game13GateWaitStateFPQ24Game8ItemGatef

.fn "transit__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg", weak
/* 801C97C8 001C6708  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C97CC 001C670C  7C 08 02 A6 */	mflr r0
/* 801C97D0 001C6710  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C97D4 001C6714  80 63 00 08 */	lwz r3, 8(r3)
/* 801C97D8 001C6718  81 83 00 00 */	lwz r12, 0(r3)
/* 801C97DC 001C671C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C97E0 001C6720  7D 89 03 A6 */	mtctr r12
/* 801C97E4 001C6724  4E 80 04 21 */	bctrl 
/* 801C97E8 001C6728  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C97EC 001C672C  7C 08 03 A6 */	mtlr r0
/* 801C97F0 001C6730  38 21 00 10 */	addi r1, r1, 0x10
/* 801C97F4 001C6734  4E 80 00 20 */	blr 
.endfn "transit__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"

.fn onKeyEvent__Q24Game13GateWaitStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent, global
/* 801C97F8 001C6738  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game13GateWaitStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent

.fn init__Q24Game16GateDamagedStateFPQ24Game8ItemGatePQ24Game8StateArg, global
/* 801C97FC 001C673C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C9800 001C6740  7C 08 02 A6 */	mflr r0
/* 801C9804 001C6744  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C9808 001C6748  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C980C 001C674C  7C 9F 23 79 */	or. r31, r4, r4
/* 801C9810 001C6750  93 C1 00 08 */	stw r30, 8(r1)
/* 801C9814 001C6754  7C 7E 1B 78 */	mr r30, r3
/* 801C9818 001C6758  7F E5 FB 78 */	mr r5, r31
/* 801C981C 001C675C  41 82 00 08 */	beq .L_801C9824
/* 801C9820 001C6760  38 A5 01 78 */	addi r5, r5, 0x178
.L_801C9824:
/* 801C9824 001C6764  80 9F 02 0C */	lwz r4, 0x20c(r31)
/* 801C9828 001C6768  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801C982C 001C676C  48 25 F4 5D */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801C9830 001C6770  C0 02 B2 5C */	lfs f0, lbl_805195BC@sda21(r2)
/* 801C9834 001C6774  38 00 00 00 */	li r0, 0
/* 801C9838 001C6778  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801C983C 001C677C  98 1E 00 10 */	stb r0, 0x10(r30)
/* 801C9840 001C6780  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C9844 001C6784  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C9848 001C6788  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C984C 001C678C  7C 08 03 A6 */	mtlr r0
/* 801C9850 001C6790  38 21 00 10 */	addi r1, r1, 0x10
/* 801C9854 001C6794  4E 80 00 20 */	blr 
.endfn init__Q24Game16GateDamagedStateFPQ24Game8ItemGatePQ24Game8StateArg

.fn exec__Q24Game16GateDamagedStateFPQ24Game8ItemGate, global
/* 801C9858 001C6798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C985C 001C679C  7C 08 02 A6 */	mflr r0
/* 801C9860 001C67A0  C0 22 B2 38 */	lfs f1, lbl_80519598@sda21(r2)
/* 801C9864 001C67A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C9868 001C67A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C986C 001C67AC  7C 9F 23 78 */	mr r31, r4
/* 801C9870 001C67B0  C0 44 02 00 */	lfs f2, 0x200(r4)
/* 801C9874 001C67B4  C0 04 02 08 */	lfs f0, 0x208(r4)
/* 801C9878 001C67B8  EC 02 00 28 */	fsubs f0, f2, f0
/* 801C987C 001C67BC  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 801C9880 001C67C0  D0 24 02 08 */	stfs f1, 0x208(r4)
/* 801C9884 001C67C4  C0 04 02 00 */	lfs f0, 0x200(r4)
/* 801C9888 001C67C8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801C988C 001C67CC  40 80 00 20 */	bge .L_801C98AC
/* 801C9890 001C67D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9894 001C67D4  38 A0 00 02 */	li r5, 2
/* 801C9898 001C67D8  38 C0 00 00 */	li r6, 0
/* 801C989C 001C67DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C98A0 001C67E0  7D 89 03 A6 */	mtctr r12
/* 801C98A4 001C67E4  4E 80 04 21 */	bctrl 
/* 801C98A8 001C67E8  48 00 00 5C */	b .L_801C9904
.L_801C98AC:
/* 801C98AC 001C67EC  88 03 00 10 */	lbz r0, 0x10(r3)
/* 801C98B0 001C67F0  28 00 00 00 */	cmplwi r0, 0
/* 801C98B4 001C67F4  41 82 00 50 */	beq .L_801C9904
/* 801C98B8 001C67F8  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 801C98BC 001C67FC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801C98C0 001C6800  40 81 00 2C */	ble .L_801C98EC
/* 801C98C4 001C6804  28 1F 00 00 */	cmplwi r31, 0
/* 801C98C8 001C6808  7F E5 FB 78 */	mr r5, r31
/* 801C98CC 001C680C  41 82 00 08 */	beq .L_801C98D4
/* 801C98D0 001C6810  38 A5 01 78 */	addi r5, r5, 0x178
.L_801C98D4:
/* 801C98D4 001C6814  80 9F 02 0C */	lwz r4, 0x20c(r31)
/* 801C98D8 001C6818  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801C98DC 001C681C  48 25 F3 AD */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801C98E0 001C6820  C0 02 B2 5C */	lfs f0, lbl_805195BC@sda21(r2)
/* 801C98E4 001C6824  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801C98E8 001C6828  48 00 00 1C */	b .L_801C9904
.L_801C98EC:
/* 801C98EC 001C682C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C98F0 001C6830  38 A0 00 00 */	li r5, 0
/* 801C98F4 001C6834  38 C0 00 00 */	li r6, 0
/* 801C98F8 001C6838  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C98FC 001C683C  7D 89 03 A6 */	mtctr r12
/* 801C9900 001C6840  4E 80 04 21 */	bctrl 
.L_801C9904:
/* 801C9904 001C6844  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C9908 001C6848  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C990C 001C684C  7C 08 03 A6 */	mtlr r0
/* 801C9910 001C6850  38 21 00 10 */	addi r1, r1, 0x10
/* 801C9914 001C6854  4E 80 00 20 */	blr 
.endfn exec__Q24Game16GateDamagedStateFPQ24Game8ItemGate

.fn cleanup__Q24Game16GateDamagedStateFPQ24Game8ItemGate, global
/* 801C9918 001C6858  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game16GateDamagedStateFPQ24Game8ItemGate

.fn onDamage__Q24Game16GateDamagedStateFPQ24Game8ItemGatef, global
/* 801C991C 001C685C  C0 04 02 08 */	lfs f0, 0x208(r4)
/* 801C9920 001C6860  EC 00 08 2A */	fadds f0, f0, f1
/* 801C9924 001C6864  D0 04 02 08 */	stfs f0, 0x208(r4)
/* 801C9928 001C6868  4E 80 00 20 */	blr 
.endfn onDamage__Q24Game16GateDamagedStateFPQ24Game8ItemGatef

.fn onKeyEvent__Q24Game16GateDamagedStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent, global
/* 801C992C 001C686C  38 00 00 01 */	li r0, 1
/* 801C9930 001C6870  98 03 00 10 */	stb r0, 0x10(r3)
/* 801C9934 001C6874  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game16GateDamagedStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent

.fn init__Q24Game13GateDownStateFPQ24Game8ItemGatePQ24Game8StateArg, global
/* 801C9938 001C6878  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801C993C 001C687C  7C 08 02 A6 */	mflr r0
/* 801C9940 001C6880  90 01 00 84 */	stw r0, 0x84(r1)
/* 801C9944 001C6884  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 801C9948 001C6888  7C 9F 23 79 */	or. r31, r4, r4
/* 801C994C 001C688C  7F E5 FB 78 */	mr r5, r31
/* 801C9950 001C6890  41 82 00 08 */	beq .L_801C9958
/* 801C9954 001C6894  38 A5 01 78 */	addi r5, r5, 0x178
.L_801C9958:
/* 801C9958 001C6898  80 9F 02 0C */	lwz r4, 0x20c(r31)
/* 801C995C 001C689C  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801C9960 001C68A0  38 84 00 03 */	addi r4, r4, 3
/* 801C9964 001C68A4  48 25 F3 25 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801C9968 001C68A8  C0 02 B2 5C */	lfs f0, lbl_805195BC@sda21(r2)
/* 801C996C 001C68AC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801C9970 001C68B0  88 1F 02 7C */	lbz r0, 0x27c(r31)
/* 801C9974 001C68B4  28 00 00 00 */	cmplwi r0, 0
/* 801C9978 001C68B8  40 82 00 68 */	bne .L_801C99E0
/* 801C997C 001C68BC  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801C9980 001C68C0  38 C0 00 00 */	li r6, 0
/* 801C9984 001C68C4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801C9988 001C68C8  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801C998C 001C68CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C9990 001C68D0  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 801C9994 001C68D4  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx2@ha
/* 801C9998 001C68D8  3C 60 80 4B */	lis r3, __vt__Q23efx10TGate1Down@ha
/* 801C999C 001C68DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C99A0 001C68E0  38 04 6A 00 */	addi r0, r4, __vt__Q23efx11TSimpleMtx2@l
/* 801C99A4 001C68E4  38 BF 01 38 */	addi r5, r31, 0x138
/* 801C99A8 001C68E8  38 80 00 78 */	li r4, 0x78
/* 801C99AC 001C68EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C99B0 001C68F0  38 03 69 4C */	addi r0, r3, __vt__Q23efx10TGate1Down@l
/* 801C99B4 001C68F4  38 E0 00 79 */	li r7, 0x79
/* 801C99B8 001C68F8  38 61 00 14 */	addi r3, r1, 0x14
/* 801C99BC 001C68FC  B0 81 00 18 */	sth r4, 0x18(r1)
/* 801C99C0 001C6900  38 80 00 00 */	li r4, 0
/* 801C99C4 001C6904  B0 E1 00 1A */	sth r7, 0x1a(r1)
/* 801C99C8 001C6908  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 801C99CC 001C690C  90 C1 00 20 */	stw r6, 0x20(r1)
/* 801C99D0 001C6910  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801C99D4 001C6914  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C99D8 001C6918  48 1E 59 C1 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 801C99DC 001C691C  48 00 00 64 */	b .L_801C9A40
.L_801C99E0:
/* 801C99E0 001C6920  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801C99E4 001C6924  38 C0 00 00 */	li r6, 0
/* 801C99E8 001C6928  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801C99EC 001C692C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801C99F0 001C6930  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C99F4 001C6934  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 801C99F8 001C6938  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx2@ha
/* 801C99FC 001C693C  3C 60 80 4B */	lis r3, __vt__Q23efx10TGate2Down@ha
/* 801C9A00 001C6940  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C9A04 001C6944  38 04 6A 00 */	addi r0, r4, __vt__Q23efx11TSimpleMtx2@l
/* 801C9A08 001C6948  38 BF 01 38 */	addi r5, r31, 0x138
/* 801C9A0C 001C694C  38 80 00 7C */	li r4, 0x7c
/* 801C9A10 001C6950  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C9A14 001C6954  38 03 69 38 */	addi r0, r3, __vt__Q23efx10TGate2Down@l
/* 801C9A18 001C6958  38 E0 00 7D */	li r7, 0x7d
/* 801C9A1C 001C695C  38 61 00 28 */	addi r3, r1, 0x28
/* 801C9A20 001C6960  B0 81 00 2C */	sth r4, 0x2c(r1)
/* 801C9A24 001C6964  38 80 00 00 */	li r4, 0
/* 801C9A28 001C6968  B0 E1 00 2E */	sth r7, 0x2e(r1)
/* 801C9A2C 001C696C  90 C1 00 30 */	stw r6, 0x30(r1)
/* 801C9A30 001C6970  90 C1 00 34 */	stw r6, 0x34(r1)
/* 801C9A34 001C6974  90 A1 00 38 */	stw r5, 0x38(r1)
/* 801C9A38 001C6978  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C9A3C 001C697C  48 1E 59 5D */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
.L_801C9A40:
/* 801C9A40 001C6980  80 BF 01 F0 */	lwz r5, 0x1f0(r31)
/* 801C9A44 001C6984  7F E3 FB 78 */	mr r3, r31
/* 801C9A48 001C6988  38 80 38 03 */	li r4, 0x3803
/* 801C9A4C 001C698C  38 05 00 C8 */	addi r0, r5, 0xc8
/* 801C9A50 001C6990  90 1F 01 F0 */	stw r0, 0x1f0(r31)
/* 801C9A54 001C6994  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C9A58 001C6998  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801C9A5C 001C699C  7D 89 03 A6 */	mtctr r12
/* 801C9A60 001C69A0  4E 80 04 21 */	bctrl 
/* 801C9A64 001C69A4  80 7F 02 0C */	lwz r3, 0x20c(r31)
/* 801C9A68 001C69A8  80 1F 02 10 */	lwz r0, 0x210(r31)
/* 801C9A6C 001C69AC  38 63 00 01 */	addi r3, r3, 1
/* 801C9A70 001C69B0  7C 03 00 00 */	cmpw r3, r0
/* 801C9A74 001C69B4  40 82 00 D4 */	bne .L_801C9B48
/* 801C9A78 001C69B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C9A7C 001C69BC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 801C9A80 001C69C0  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 801C9A84 001C69C4  41 82 00 C4 */	beq .L_801C9B48
/* 801C9A88 001C69C8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801C9A8C 001C69CC  38 80 00 08 */	li r4, 8
/* 801C9A90 001C69D0  48 01 D9 51 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801C9A94 001C69D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C9A98 001C69D8  40 82 00 B0 */	bne .L_801C9B48
/* 801C9A9C 001C69DC  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C9AA0 001C69E0  3C 60 80 48 */	lis r3, lbl_804802C4@ha
/* 801C9AA4 001C69E4  38 00 00 00 */	li r0, 0
/* 801C9AA8 001C69E8  7F E4 FB 78 */	mr r4, r31
/* 801C9AAC 001C69EC  38 A3 02 C4 */	addi r5, r3, lbl_804802C4@l
/* 801C9AB0 001C69F0  90 01 00 40 */	stw r0, 0x40(r1)
/* 801C9AB4 001C69F4  38 61 00 08 */	addi r3, r1, 8
/* 801C9AB8 001C69F8  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 801C9ABC 001C69FC  90 01 00 48 */	stw r0, 0x48(r1)
/* 801C9AC0 001C6A00  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 801C9AC4 001C6A04  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801C9AC8 001C6A08  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801C9ACC 001C6A0C  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 801C9AD0 001C6A10  90 01 00 64 */	stw r0, 0x64(r1)
/* 801C9AD4 001C6A14  90 01 00 4C */	stw r0, 0x4c(r1)
/* 801C9AD8 001C6A18  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C9ADC 001C6A1C  90 01 00 68 */	stw r0, 0x68(r1)
/* 801C9AE0 001C6A20  90 01 00 50 */	stw r0, 0x50(r1)
/* 801C9AE4 001C6A24  90 01 00 6C */	stw r0, 0x6c(r1)
/* 801C9AE8 001C6A28  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C9AEC 001C6A2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C9AF0 001C6A30  7D 89 03 A6 */	mtctr r12
/* 801C9AF4 001C6A34  4E 80 04 21 */	bctrl 
/* 801C9AF8 001C6A38  C0 41 00 08 */	lfs f2, 8(r1)
/* 801C9AFC 001C6A3C  7F E3 FB 78 */	mr r3, r31
/* 801C9B00 001C6A40  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801C9B04 001C6A44  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801C9B08 001C6A48  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 801C9B0C 001C6A4C  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 801C9B10 001C6A50  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801C9B14 001C6A54  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C9B18 001C6A58  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801C9B1C 001C6A5C  7D 89 03 A6 */	mtctr r12
/* 801C9B20 001C6A60  4E 80 04 21 */	bctrl 
/* 801C9B24 001C6A64  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 801C9B28 001C6A68  38 81 00 3C */	addi r4, r1, 0x3c
/* 801C9B2C 001C6A6C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801C9B30 001C6A70  93 E3 01 94 */	stw r31, 0x194(r3)
/* 801C9B34 001C6A74  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801C9B38 001C6A78  48 26 2E 99 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801C9B3C 001C6A7C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801C9B40 001C6A80  38 80 00 08 */	li r4, 8
/* 801C9B44 001C6A84  48 01 D8 61 */	bl setDemoFlag__Q24Game8PlayDataFi
.L_801C9B48:
/* 801C9B48 001C6A88  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801C9B4C 001C6A8C  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 801C9B50 001C6A90  7C 08 03 A6 */	mtlr r0
/* 801C9B54 001C6A94  38 21 00 80 */	addi r1, r1, 0x80
/* 801C9B58 001C6A98  4E 80 00 20 */	blr 
.endfn init__Q24Game13GateDownStateFPQ24Game8ItemGatePQ24Game8StateArg

.fn getFaceDir__Q24Game8ItemGateFv, weak
/* 801C9B5C 001C6A9C  C0 23 02 14 */	lfs f1, 0x214(r3)
/* 801C9B60 001C6AA0  4E 80 00 20 */	blr 
.endfn getFaceDir__Q24Game8ItemGateFv

.fn exec__Q24Game13GateDownStateFPQ24Game8ItemGate, global
/* 801C9B64 001C6AA4  4E 80 00 20 */	blr 
.endfn exec__Q24Game13GateDownStateFPQ24Game8ItemGate

.fn cleanup__Q24Game13GateDownStateFPQ24Game8ItemGate, global
/* 801C9B68 001C6AA8  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13GateDownStateFPQ24Game8ItemGate

.fn onDamage__Q24Game13GateDownStateFPQ24Game8ItemGatef, global
/* 801C9B6C 001C6AAC  C0 04 02 08 */	lfs f0, 0x208(r4)
/* 801C9B70 001C6AB0  EC 00 08 2A */	fadds f0, f0, f1
/* 801C9B74 001C6AB4  D0 04 02 08 */	stfs f0, 0x208(r4)
/* 801C9B78 001C6AB8  4E 80 00 20 */	blr 
.endfn onDamage__Q24Game13GateDownStateFPQ24Game8ItemGatef

.fn onKeyEvent__Q24Game13GateDownStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent, global
/* 801C9B7C 001C6ABC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C9B80 001C6AC0  7C 08 02 A6 */	mflr r0
/* 801C9B84 001C6AC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C9B88 001C6AC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C9B8C 001C6ACC  7C 9F 23 78 */	mr r31, r4
/* 801C9B90 001C6AD0  80 A4 02 0C */	lwz r5, 0x20c(r4)
/* 801C9B94 001C6AD4  38 05 00 01 */	addi r0, r5, 1
/* 801C9B98 001C6AD8  90 04 02 0C */	stw r0, 0x20c(r4)
/* 801C9B9C 001C6ADC  C0 04 02 04 */	lfs f0, 0x204(r4)
/* 801C9BA0 001C6AE0  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 801C9BA4 001C6AE4  80 A4 02 0C */	lwz r5, 0x20c(r4)
/* 801C9BA8 001C6AE8  80 04 02 10 */	lwz r0, 0x210(r4)
/* 801C9BAC 001C6AEC  7C 05 00 00 */	cmpw r5, r0
/* 801C9BB0 001C6AF0  40 82 00 DC */	bne .L_801C9C8C
/* 801C9BB4 001C6AF4  80 7F 01 F4 */	lwz r3, 0x1f4(r31)
/* 801C9BB8 001C6AF8  38 80 00 00 */	li r4, 0
/* 801C9BBC 001C6AFC  4B FF B0 19 */	bl setCollision__Q24Game12PlatInstanceFb
/* 801C9BC0 001C6B00  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801C9BC4 001C6B04  80 9F 01 F4 */	lwz r4, 0x1f4(r31)
/* 801C9BC8 001C6B08  4B FF BF D1 */	bl delInstance__Q24Game7PlatMgrFPQ24Game12PlatInstance
/* 801C9BCC 001C6B0C  7F E3 FB 78 */	mr r3, r31
/* 801C9BD0 001C6B10  38 80 00 00 */	li r4, 0
/* 801C9BD4 001C6B14  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C9BD8 001C6B18  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801C9BDC 001C6B1C  7D 89 03 A6 */	mtctr r12
/* 801C9BE0 001C6B20  4E 80 04 21 */	bctrl 
/* 801C9BE4 001C6B24  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801C9BE8 001C6B28  38 80 00 01 */	li r4, 1
/* 801C9BEC 001C6B2C  4B FA 8C 89 */	bl setOpen__Q24Game8WayPointFb
/* 801C9BF0 001C6B30  88 1F 02 18 */	lbz r0, 0x218(r31)
/* 801C9BF4 001C6B34  28 00 00 00 */	cmplwi r0, 0
/* 801C9BF8 001C6B38  41 82 00 2C */	beq .L_801C9C24
/* 801C9BFC 001C6B3C  80 7F 02 1C */	lwz r3, 0x21c(r31)
/* 801C9C00 001C6B40  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9C04 001C6B44  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C9C08 001C6B48  7D 89 03 A6 */	mtctr r12
/* 801C9C0C 001C6B4C  4E 80 04 21 */	bctrl 
/* 801C9C10 001C6B50  80 7F 02 20 */	lwz r3, 0x220(r31)
/* 801C9C14 001C6B54  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9C18 001C6B58  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C9C1C 001C6B5C  7D 89 03 A6 */	mtctr r12
/* 801C9C20 001C6B60  4E 80 04 21 */	bctrl 
.L_801C9C24:
/* 801C9C24 001C6B64  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801C9C28 001C6B68  48 06 50 09 */	bl finish__Q24Game11TSoundEventFv
/* 801C9C2C 001C6B6C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C9C30 001C6B70  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801C9C34 001C6B74  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C9C38 001C6B78  7D 89 03 A6 */	mtctr r12
/* 801C9C3C 001C6B7C  4E 80 04 21 */	bctrl 
/* 801C9C40 001C6B80  2C 03 00 0A */	cmpwi r3, 0xa
/* 801C9C44 001C6B84  41 82 00 20 */	beq .L_801C9C64
/* 801C9C48 001C6B88  3C 60 80 48 */	lis r3, lbl_804801A0@ha
/* 801C9C4C 001C6B8C  3C A0 80 48 */	lis r5, lbl_804801BC@ha
/* 801C9C50 001C6B90  38 63 01 A0 */	addi r3, r3, lbl_804801A0@l
/* 801C9C54 001C6B94  38 80 03 E5 */	li r4, 0x3e5
/* 801C9C58 001C6B98  38 A5 01 BC */	addi r5, r5, lbl_804801BC@l
/* 801C9C5C 001C6B9C  4C C6 31 82 */	crclr 6
/* 801C9C60 001C6BA0  4B E6 09 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801C9C64:
/* 801C9C64 001C6BA4  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C9C68 001C6BA8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801C9C6C 001C6BAC  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 801C9C70 001C6BB0  7D 89 03 A6 */	mtctr r12
/* 801C9C74 001C6BB4  4E 80 04 21 */	bctrl 
/* 801C9C78 001C6BB8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 801C9C7C 001C6BBC  38 80 18 1C */	li r4, 0x181c
/* 801C9C80 001C6BC0  38 A0 00 00 */	li r5, 0
/* 801C9C84 001C6BC4  48 16 E9 AD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 801C9C88 001C6BC8  48 00 00 48 */	b .L_801C9CD0
.L_801C9C8C:
/* 801C9C8C 001C6BCC  C0 3F 02 08 */	lfs f1, 0x208(r31)
/* 801C9C90 001C6BD0  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801C9C94 001C6BD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C9C98 001C6BD8  40 81 00 20 */	ble .L_801C9CB8
/* 801C9C9C 001C6BDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9CA0 001C6BE0  38 A0 00 01 */	li r5, 1
/* 801C9CA4 001C6BE4  38 C0 00 00 */	li r6, 0
/* 801C9CA8 001C6BE8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C9CAC 001C6BEC  7D 89 03 A6 */	mtctr r12
/* 801C9CB0 001C6BF0  4E 80 04 21 */	bctrl 
/* 801C9CB4 001C6BF4  48 00 00 1C */	b .L_801C9CD0
.L_801C9CB8:
/* 801C9CB8 001C6BF8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C9CBC 001C6BFC  38 A0 00 00 */	li r5, 0
/* 801C9CC0 001C6C00  38 C0 00 00 */	li r6, 0
/* 801C9CC4 001C6C04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C9CC8 001C6C08  7D 89 03 A6 */	mtctr r12
/* 801C9CCC 001C6C0C  4E 80 04 21 */	bctrl 
.L_801C9CD0:
/* 801C9CD0 001C6C10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C9CD4 001C6C14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C9CD8 001C6C18  7C 08 03 A6 */	mtlr r0
/* 801C9CDC 001C6C1C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C9CE0 001C6C20  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game13GateDownStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent

.fn __ct__Q34Game15ItemDengekiGate3MgrFv, global
/* 801C9CE4 001C6C24  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C9CE8 001C6C28  7C 08 02 A6 */	mflr r0
/* 801C9CEC 001C6C2C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C9CF0 001C6C30  7C 80 07 35 */	extsh. r0, r4
/* 801C9CF4 001C6C34  3C 80 80 48 */	lis r4, lbl_80480188@ha
/* 801C9CF8 001C6C38  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C9CFC 001C6C3C  3B E4 01 88 */	addi r31, r4, lbl_80480188@l
/* 801C9D00 001C6C40  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C9D04 001C6C44  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C9D08 001C6C48  7C 7D 1B 78 */	mr r29, r3
/* 801C9D0C 001C6C4C  41 82 00 0C */	beq .L_801C9D18
/* 801C9D10 001C6C50  38 1D 00 A0 */	addi r0, r29, 0xa0
/* 801C9D14 001C6C54  90 1D 00 04 */	stw r0, 4(r29)
.L_801C9D18:
/* 801C9D18 001C6C58  7F A3 EB 78 */	mr r3, r29
/* 801C9D1C 001C6C5C  38 80 00 00 */	li r4, 0
/* 801C9D20 001C6C60  48 00 0A 1D */	bl "__ct__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
/* 801C9D24 001C6C64  3C 80 80 4B */	lis r4, __vt__Q34Game15ItemDengekiGate3Mgr@ha
/* 801C9D28 001C6C68  38 7D 00 90 */	addi r3, r29, 0x90
/* 801C9D2C 001C6C6C  38 84 65 64 */	addi r4, r4, __vt__Q34Game15ItemDengekiGate3Mgr@l
/* 801C9D30 001C6C70  90 9D 00 00 */	stw r4, 0(r29)
/* 801C9D34 001C6C74  38 04 00 74 */	addi r0, r4, 0x74
/* 801C9D38 001C6C78  90 1D 00 30 */	stw r0, 0x30(r29)
/* 801C9D3C 001C6C7C  48 26 A3 F9 */	bl __ct__Q23Sys15MatTexAnimationFv
/* 801C9D40 001C6C80  38 1F 01 4C */	addi r0, r31, 0x14c
/* 801C9D44 001C6C84  38 9F 01 58 */	addi r4, r31, 0x158
/* 801C9D48 001C6C88  90 1D 00 08 */	stw r0, 8(r29)
/* 801C9D4C 001C6C8C  38 A0 00 00 */	li r5, 0
/* 801C9D50 001C6C90  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C9D54 001C6C94  48 25 96 09 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801C9D58 001C6C98  38 1F 00 4C */	addi r0, r31, 0x4c
/* 801C9D5C 001C6C9C  7F A3 EB 78 */	mr r3, r29
/* 801C9D60 001C6CA0  90 1D 00 28 */	stw r0, 0x28(r29)
/* 801C9D64 001C6CA4  38 80 00 01 */	li r4, 1
/* 801C9D68 001C6CA8  48 00 30 65 */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 801C9D6C 001C6CAC  7F A3 EB 78 */	mr r3, r29
/* 801C9D70 001C6CB0  38 9F 01 68 */	addi r4, r31, 0x168
/* 801C9D74 001C6CB4  48 00 31 61 */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801C9D78 001C6CB8  7F A3 EB 78 */	mr r3, r29
/* 801C9D7C 001C6CBC  38 9F 01 78 */	addi r4, r31, 0x178
/* 801C9D80 001C6CC0  38 A0 00 00 */	li r5, 0
/* 801C9D84 001C6CC4  3C C0 21 00 */	lis r6, 0x2100
/* 801C9D88 001C6CC8  48 00 31 C9 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801C9D8C 001C6CCC  7F A3 EB 78 */	mr r3, r29
/* 801C9D90 001C6CD0  38 9F 01 84 */	addi r4, r31, 0x184
/* 801C9D94 001C6CD4  48 00 34 39 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801C9D98 001C6CD8  7C 60 1B 78 */	mr r0, r3
/* 801C9D9C 001C6CDC  7F A3 EB 78 */	mr r3, r29
/* 801C9DA0 001C6CE0  7C 1E 03 78 */	mr r30, r0
/* 801C9DA4 001C6CE4  38 BF 01 98 */	addi r5, r31, 0x198
/* 801C9DA8 001C6CE8  7F C4 F3 78 */	mr r4, r30
/* 801C9DAC 001C6CEC  48 00 32 51 */	bl loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801C9DB0 001C6CF0  7F A3 EB 78 */	mr r3, r29
/* 801C9DB4 001C6CF4  7F C4 F3 78 */	mr r4, r30
/* 801C9DB8 001C6CF8  38 BF 01 A8 */	addi r5, r31, 0x1a8
/* 801C9DBC 001C6CFC  48 00 32 C1 */	bl loadCollision__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801C9DC0 001C6D00  7F A3 EB 78 */	mr r3, r29
/* 801C9DC4 001C6D04  7F C4 F3 78 */	mr r4, r30
/* 801C9DC8 001C6D08  38 BF 01 B4 */	addi r5, r31, 0x1b4
/* 801C9DCC 001C6D0C  48 00 34 D5 */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801C9DD0 001C6D10  90 7D 00 88 */	stw r3, 0x88(r29)
/* 801C9DD4 001C6D14  7F A3 EB 78 */	mr r3, r29
/* 801C9DD8 001C6D18  7F C4 F3 78 */	mr r4, r30
/* 801C9DDC 001C6D1C  38 BF 01 C0 */	addi r5, r31, 0x1c0
/* 801C9DE0 001C6D20  48 00 34 C1 */	bl loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801C9DE4 001C6D24  90 7D 00 8C */	stw r3, 0x8c(r29)
/* 801C9DE8 001C6D28  7F A3 EB 78 */	mr r3, r29
/* 801C9DEC 001C6D2C  7F C4 F3 78 */	mr r4, r30
/* 801C9DF0 001C6D30  48 00 34 61 */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801C9DF4 001C6D34  38 7F 01 CC */	addi r3, r31, 0x1cc
/* 801C9DF8 001C6D38  38 80 00 01 */	li r4, 1
/* 801C9DFC 001C6D3C  38 A0 00 00 */	li r5, 0
/* 801C9E00 001C6D40  38 C0 00 01 */	li r6, 1
/* 801C9E04 001C6D44  4B E5 13 2D */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 801C9E08 001C6D48  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 801C9E0C 001C6D4C  38 80 00 00 */	li r4, 0
/* 801C9E10 001C6D50  80 63 00 00 */	lwz r3, 0(r3)
/* 801C9E14 001C6D54  48 27 44 89 */	bl enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
/* 801C9E18 001C6D58  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 801C9E1C 001C6D5C  38 80 00 00 */	li r4, 0
/* 801C9E20 001C6D60  4B E5 91 F9 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 801C9E24 001C6D64  80 BD 00 1C */	lwz r5, 0x1c(r29)
/* 801C9E28 001C6D68  7C 64 1B 78 */	mr r4, r3
/* 801C9E2C 001C6D6C  38 7D 00 90 */	addi r3, r29, 0x90
/* 801C9E30 001C6D70  80 A5 00 00 */	lwz r5, 0(r5)
/* 801C9E34 001C6D74  48 26 A1 ED */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 801C9E38 001C6D78  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C9E3C 001C6D7C  38 9F 01 58 */	addi r4, r31, 0x158
/* 801C9E40 001C6D80  48 25 95 25 */	bl heapStatusEnd__6SystemFPc
/* 801C9E44 001C6D84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C9E48 001C6D88  7F A3 EB 78 */	mr r3, r29
/* 801C9E4C 001C6D8C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C9E50 001C6D90  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C9E54 001C6D94  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C9E58 001C6D98  7C 08 03 A6 */	mtlr r0
/* 801C9E5C 001C6D9C  38 21 00 20 */	addi r1, r1, 0x20
/* 801C9E60 001C6DA0  4E 80 00 20 */	blr 
.endfn __ct__Q34Game15ItemDengekiGate3MgrFv

.fn "__dt__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801C9E64 001C6DA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C9E68 001C6DA8  7C 08 02 A6 */	mflr r0
/* 801C9E6C 001C6DAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C9E70 001C6DB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C9E74 001C6DB4  7C 9F 23 78 */	mr r31, r4
/* 801C9E78 001C6DB8  93 C1 00 08 */	stw r30, 8(r1)
/* 801C9E7C 001C6DBC  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C9E80 001C6DC0  41 82 00 E4 */	beq .L_801C9F64
/* 801C9E84 001C6DC4  3C 60 80 4B */	lis r3, "__vt__Q24Game29NodeItemMgr<Q24Game8ItemGate>"@ha
/* 801C9E88 001C6DC8  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801C9E8C 001C6DCC  38 63 66 24 */	addi r3, r3, "__vt__Q24Game29NodeItemMgr<Q24Game8ItemGate>"@l
/* 801C9E90 001C6DD0  90 7E 00 00 */	stw r3, 0(r30)
/* 801C9E94 001C6DD4  38 03 00 74 */	addi r0, r3, 0x74
/* 801C9E98 001C6DD8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801C9E9C 001C6DDC  41 82 00 84 */	beq .L_801C9F20
/* 801C9EA0 001C6DE0  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@ha
/* 801C9EA4 001C6DE4  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801C9EA8 001C6DE8  38 84 68 10 */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@l
/* 801C9EAC 001C6DEC  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801C9EB0 001C6DF0  38 04 00 2C */	addi r0, r4, 0x2c
/* 801C9EB4 001C6DF4  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801C9EB8 001C6DF8  41 82 00 18 */	beq .L_801C9ED0
/* 801C9EBC 001C6DFC  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
/* 801C9EC0 001C6E00  38 04 68 00 */	addi r0, r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
/* 801C9EC4 001C6E04  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801C9EC8 001C6E08  38 80 00 00 */	li r4, 0
/* 801C9ECC 001C6E0C  48 24 76 BD */	bl __dt__5CNodeFv
.L_801C9ED0:
/* 801C9ED0 001C6E10  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801C9ED4 001C6E14  41 82 00 4C */	beq .L_801C9F20
/* 801C9ED8 001C6E18  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8ItemGate>"@ha
/* 801C9EDC 001C6E1C  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801C9EE0 001C6E20  38 63 68 90 */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8ItemGate>"@l
/* 801C9EE4 001C6E24  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801C9EE8 001C6E28  38 03 00 2C */	addi r0, r3, 0x2c
/* 801C9EEC 001C6E2C  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801C9EF0 001C6E30  41 82 00 30 */	beq .L_801C9F20
/* 801C9EF4 001C6E34  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8ItemGate>"@ha
/* 801C9EF8 001C6E38  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801C9EFC 001C6E3C  38 03 69 0C */	addi r0, r3, "__vt__27Container<Q24Game8ItemGate>"@l
/* 801C9F00 001C6E40  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801C9F04 001C6E44  41 82 00 1C */	beq .L_801C9F20
/* 801C9F08 001C6E48  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801C9F0C 001C6E4C  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801C9F10 001C6E50  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801C9F14 001C6E54  38 80 00 00 */	li r4, 0
/* 801C9F18 001C6E58  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801C9F1C 001C6E5C  48 24 76 6D */	bl __dt__5CNodeFv
.L_801C9F20:
/* 801C9F20 001C6E60  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801C9F24 001C6E64  41 82 00 30 */	beq .L_801C9F54
/* 801C9F28 001C6E68  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8ItemGate>"@ha
/* 801C9F2C 001C6E6C  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801C9F30 001C6E70  38 03 69 0C */	addi r0, r3, "__vt__27Container<Q24Game8ItemGate>"@l
/* 801C9F34 001C6E74  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801C9F38 001C6E78  41 82 00 1C */	beq .L_801C9F54
/* 801C9F3C 001C6E7C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801C9F40 001C6E80  38 7E 00 30 */	addi r3, r30, 0x30
/* 801C9F44 001C6E84  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801C9F48 001C6E88  38 80 00 00 */	li r4, 0
/* 801C9F4C 001C6E8C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801C9F50 001C6E90  48 24 76 39 */	bl __dt__5CNodeFv
.L_801C9F54:
/* 801C9F54 001C6E94  7F E0 07 35 */	extsh. r0, r31
/* 801C9F58 001C6E98  40 81 00 0C */	ble .L_801C9F64
/* 801C9F5C 001C6E9C  7F C3 F3 78 */	mr r3, r30
/* 801C9F60 001C6EA0  4B E5 A1 55 */	bl __dl__FPv
.L_801C9F64:
/* 801C9F64 001C6EA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C9F68 001C6EA8  7F C3 F3 78 */	mr r3, r30
/* 801C9F6C 001C6EAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C9F70 001C6EB0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C9F74 001C6EB4  7C 08 03 A6 */	mtlr r0
/* 801C9F78 001C6EB8  38 21 00 10 */	addi r1, r1, 0x10
/* 801C9F7C 001C6EBC  4E 80 00 20 */	blr 
.endfn "__dt__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn setupGate__Q34Game15ItemDengekiGate3MgrFPQ24Game8ItemGate, global
/* 801C9F80 001C6EC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C9F84 001C6EC4  7C 08 02 A6 */	mflr r0
/* 801C9F88 001C6EC8  38 A0 00 00 */	li r5, 0
/* 801C9F8C 001C6ECC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C9F90 001C6ED0  38 00 00 01 */	li r0, 1
/* 801C9F94 001C6ED4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C9F98 001C6ED8  7C 9F 23 78 */	mr r31, r4
/* 801C9F9C 001C6EDC  93 C1 00 08 */	stw r30, 8(r1)
/* 801C9FA0 001C6EE0  7C 7E 1B 78 */	mr r30, r3
/* 801C9FA4 001C6EE4  98 04 02 18 */	stb r0, 0x218(r4)
/* 801C9FA8 001C6EE8  3C 80 80 48 */	lis r4, lbl_80480288@ha
/* 801C9FAC 001C6EEC  38 84 02 88 */	addi r4, r4, lbl_80480288@l
/* 801C9FB0 001C6EF0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C9FB4 001C6EF4  48 25 93 A9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801C9FB8 001C6EF8  38 60 00 14 */	li r3, 0x14
/* 801C9FBC 001C6EFC  4B E5 9E E9 */	bl __nw__FUl
/* 801C9FC0 001C6F00  7C 60 1B 79 */	or. r0, r3, r3
/* 801C9FC4 001C6F04  41 82 00 1C */	beq .L_801C9FE0
/* 801C9FC8 001C6F08  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 801C9FCC 001C6F0C  38 A0 00 00 */	li r5, 0
/* 801C9FD0 001C6F10  38 C0 00 02 */	li r6, 2
/* 801C9FD4 001C6F14  80 84 00 00 */	lwz r4, 0(r4)
/* 801C9FD8 001C6F18  48 27 42 01 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801C9FDC 001C6F1C  7C 60 1B 78 */	mr r0, r3
.L_801C9FE0:
/* 801C9FE0 001C6F20  90 1F 01 74 */	stw r0, 0x174(r31)
/* 801C9FE4 001C6F24  3C 60 80 48 */	lis r3, lbl_80480288@ha
/* 801C9FE8 001C6F28  38 83 02 88 */	addi r4, r3, lbl_80480288@l
/* 801C9FEC 001C6F2C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C9FF0 001C6F30  48 25 93 75 */	bl heapStatusEnd__6SystemFPc
/* 801C9FF4 001C6F34  80 1E 00 20 */	lwz r0, 0x20(r30)
/* 801C9FF8 001C6F38  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801C9FFC 001C6F3C  38 80 00 00 */	li r4, 0
/* 801CA000 001C6F40  38 A0 00 00 */	li r5, 0
/* 801CA004 001C6F44  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 801CA008 001C6F48  48 25 EC 81 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801CA00C 001C6F4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA010 001C6F50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CA014 001C6F54  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CA018 001C6F58  7C 08 03 A6 */	mtlr r0
/* 801CA01C 001C6F5C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA020 001C6F60  4E 80 00 20 */	blr 
.endfn setupGate__Q34Game15ItemDengekiGate3MgrFPQ24Game8ItemGate

.fn setupPlatform__Q34Game15ItemDengekiGate3MgrFPQ24Game8ItemGate, global
/* 801CA024 001C6F64  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801CA028 001C6F68  7C 08 02 A6 */	mflr r0
/* 801CA02C 001C6F6C  3C A0 80 48 */	lis r5, lbl_80480294@ha
/* 801CA030 001C6F70  90 01 00 74 */	stw r0, 0x74(r1)
/* 801CA034 001C6F74  38 05 02 94 */	addi r0, r5, lbl_80480294@l
/* 801CA038 001C6F78  38 A0 00 00 */	li r5, 0
/* 801CA03C 001C6F7C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801CA040 001C6F80  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801CA044 001C6F84  7C 9E 23 78 */	mr r30, r4
/* 801CA048 001C6F88  7C 04 03 78 */	mr r4, r0
/* 801CA04C 001C6F8C  93 A1 00 64 */	stw r29, 0x64(r1)
/* 801CA050 001C6F90  7C 7D 1B 78 */	mr r29, r3
/* 801CA054 001C6F94  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801CA058 001C6F98  48 25 93 05 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801CA05C 001C6F9C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801CA060 001C6FA0  38 82 B2 54 */	addi r4, r2, lbl_805195B4@sda21
/* 801CA064 001C6FA4  48 27 4F 81 */	bl getJoint__Q28SysShape5ModelFPc
/* 801CA068 001C6FA8  48 25 F8 39 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801CA06C 001C6FAC  3C 80 65 6C */	lis r4, 0x656C6563@ha
/* 801CA070 001C6FB0  7C 7F 1B 78 */	mr r31, r3
/* 801CA074 001C6FB4  38 61 00 14 */	addi r3, r1, 0x14
/* 801CA078 001C6FB8  38 84 65 63 */	addi r4, r4, 0x656C6563@l
/* 801CA07C 001C6FBC  48 24 92 2D */	bl __ct__4ID32FUl
/* 801CA080 001C6FC0  38 61 00 40 */	addi r3, r1, 0x40
/* 801CA084 001C6FC4  4B FF B8 3D */	bl __ct__Q24Game18PlatAddInstanceArgFv
/* 801CA088 001C6FC8  93 C1 00 40 */	stw r30, 0x40(r1)
/* 801CA08C 001C6FCC  38 61 00 44 */	addi r3, r1, 0x44
/* 801CA090 001C6FD0  38 81 00 14 */	addi r4, r1, 0x14
/* 801CA094 001C6FD4  38 A0 00 05 */	li r5, 5
/* 801CA098 001C6FD8  4B EF 76 81 */	bl __copy
/* 801CA09C 001C6FDC  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801CA0A0 001C6FE0  38 81 00 40 */	addi r4, r1, 0x40
/* 801CA0A4 001C6FE4  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801CA0A8 001C6FE8  90 01 00 4C */	stw r0, 0x4c(r1)
/* 801CA0AC 001C6FEC  80 1D 00 88 */	lwz r0, 0x88(r29)
/* 801CA0B0 001C6FF0  90 01 00 50 */	stw r0, 0x50(r1)
/* 801CA0B4 001C6FF4  93 E1 00 54 */	stw r31, 0x54(r1)
/* 801CA0B8 001C6FF8  4B FF B8 6D */	bl addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
/* 801CA0BC 001C6FFC  90 7E 01 F4 */	stw r3, 0x1f4(r30)
/* 801CA0C0 001C7000  3C 60 80 48 */	lis r3, lbl_804802A0@ha
/* 801CA0C4 001C7004  38 83 02 A0 */	addi r4, r3, lbl_804802A0@l
/* 801CA0C8 001C7008  38 A0 00 00 */	li r5, 0
/* 801CA0CC 001C700C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801CA0D0 001C7010  48 25 92 8D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801CA0D4 001C7014  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801CA0D8 001C7018  38 82 B2 98 */	addi r4, r2, lbl_805195F8@sda21
/* 801CA0DC 001C701C  48 27 4F 09 */	bl getJoint__Q28SysShape5ModelFPc
/* 801CA0E0 001C7020  48 25 F7 C1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801CA0E4 001C7024  3C 80 73 69 */	lis r4, 0x73696465@ha
/* 801CA0E8 001C7028  7C 7F 1B 78 */	mr r31, r3
/* 801CA0EC 001C702C  38 61 00 08 */	addi r3, r1, 8
/* 801CA0F0 001C7030  38 84 64 65 */	addi r4, r4, 0x73696465@l
/* 801CA0F4 001C7034  48 24 91 B5 */	bl __ct__4ID32FUl
/* 801CA0F8 001C7038  38 61 00 20 */	addi r3, r1, 0x20
/* 801CA0FC 001C703C  4B FF B7 C5 */	bl __ct__Q24Game18PlatAddInstanceArgFv
/* 801CA100 001C7040  93 C1 00 20 */	stw r30, 0x20(r1)
/* 801CA104 001C7044  38 61 00 24 */	addi r3, r1, 0x24
/* 801CA108 001C7048  38 81 00 08 */	addi r4, r1, 8
/* 801CA10C 001C704C  38 A0 00 05 */	li r5, 5
/* 801CA110 001C7050  4B EF 76 09 */	bl __copy
/* 801CA114 001C7054  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 801CA118 001C7058  38 00 00 01 */	li r0, 1
/* 801CA11C 001C705C  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801CA120 001C7060  38 81 00 20 */	addi r4, r1, 0x20
/* 801CA124 001C7064  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801CA128 001C7068  80 BD 00 8C */	lwz r5, 0x8c(r29)
/* 801CA12C 001C706C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 801CA130 001C7070  93 E1 00 34 */	stw r31, 0x34(r1)
/* 801CA134 001C7074  98 01 00 38 */	stb r0, 0x38(r1)
/* 801CA138 001C7078  4B FF B7 ED */	bl addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
/* 801CA13C 001C707C  90 7E 01 F8 */	stw r3, 0x1f8(r30)
/* 801CA140 001C7080  3C 60 80 48 */	lis r3, lbl_804802A0@ha
/* 801CA144 001C7084  38 83 02 A0 */	addi r4, r3, lbl_804802A0@l
/* 801CA148 001C7088  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801CA14C 001C708C  48 25 92 19 */	bl heapStatusEnd__6SystemFPc
/* 801CA150 001C7090  3C 80 80 48 */	lis r4, lbl_80480294@ha
/* 801CA154 001C7094  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801CA158 001C7098  38 84 02 94 */	addi r4, r4, lbl_80480294@l
/* 801CA15C 001C709C  48 25 92 09 */	bl heapStatusEnd__6SystemFPc
/* 801CA160 001C70A0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801CA164 001C70A4  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801CA168 001C70A8  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 801CA16C 001C70AC  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 801CA170 001C70B0  7C 08 03 A6 */	mtlr r0
/* 801CA174 001C70B4  38 21 00 70 */	addi r1, r1, 0x70
/* 801CA178 001C70B8  4E 80 00 20 */	blr 
.endfn setupPlatform__Q34Game15ItemDengekiGate3MgrFPQ24Game8ItemGate

.fn generatorNewItemParm__Q34Game15ItemDengekiGate3MgrFv, global
/* 801CA17C 001C70BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA180 001C70C0  7C 08 02 A6 */	mflr r0
/* 801CA184 001C70C4  38 60 00 0C */	li r3, 0xc
/* 801CA188 001C70C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA18C 001C70CC  4B E5 9D 19 */	bl __nw__FUl
/* 801CA190 001C70D0  28 03 00 00 */	cmplwi r3, 0
/* 801CA194 001C70D4  41 82 00 2C */	beq .L_801CA1C0
/* 801CA198 001C70D8  3C A0 80 4B */	lis r5, __vt__Q24Game11GenItemParm@ha
/* 801CA19C 001C70DC  3C 80 80 4B */	lis r4, __vt__11GenGateParm@ha
/* 801CA1A0 001C70E0  38 05 26 24 */	addi r0, r5, __vt__Q24Game11GenItemParm@l
/* 801CA1A4 001C70E4  C0 02 B2 34 */	lfs f0, lbl_80519594@sda21(r2)
/* 801CA1A8 001C70E8  90 03 00 00 */	stw r0, 0(r3)
/* 801CA1AC 001C70EC  38 84 67 78 */	addi r4, r4, __vt__11GenGateParm@l
/* 801CA1B0 001C70F0  38 00 00 00 */	li r0, 0
/* 801CA1B4 001C70F4  90 83 00 00 */	stw r4, 0(r3)
/* 801CA1B8 001C70F8  D0 03 00 04 */	stfs f0, 4(r3)
/* 801CA1BC 001C70FC  B0 03 00 08 */	sth r0, 8(r3)
.L_801CA1C0:
/* 801CA1C0 001C7100  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA1C4 001C7104  7C 08 03 A6 */	mtlr r0
/* 801CA1C8 001C7108  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA1CC 001C710C  4E 80 00 20 */	blr 
.endfn generatorNewItemParm__Q34Game15ItemDengekiGate3MgrFv

.fn generatorWrite__Q34Game15ItemDengekiGate3MgrFR6StreamPQ24Game11GenItemParm, global
/* 801CA1D0 001C7110  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CA1D4 001C7114  7C 08 02 A6 */	mflr r0
/* 801CA1D8 001C7118  3C 60 80 48 */	lis r3, lbl_80480188@ha
/* 801CA1DC 001C711C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CA1E0 001C7120  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CA1E4 001C7124  3B E3 01 88 */	addi r31, r3, lbl_80480188@l
/* 801CA1E8 001C7128  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CA1EC 001C712C  7C BE 2B 79 */	or. r30, r5, r5
/* 801CA1F0 001C7130  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801CA1F4 001C7134  7C 9D 23 78 */	mr r29, r4
/* 801CA1F8 001C7138  40 82 00 18 */	bne .L_801CA210
/* 801CA1FC 001C713C  38 7F 00 18 */	addi r3, r31, 0x18
/* 801CA200 001C7140  38 BF 00 34 */	addi r5, r31, 0x34
/* 801CA204 001C7144  38 80 04 99 */	li r4, 0x499
/* 801CA208 001C7148  4C C6 31 82 */	crclr 6
/* 801CA20C 001C714C  4B E6 04 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801CA210:
/* 801CA210 001C7150  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801CA214 001C7154  7F A3 EB 78 */	mr r3, r29
/* 801CA218 001C7158  48 24 A2 1D */	bl textWriteTab__6StreamFi
/* 801CA21C 001C715C  C0 3E 00 04 */	lfs f1, 4(r30)
/* 801CA220 001C7160  7F A3 EB 78 */	mr r3, r29
/* 801CA224 001C7164  48 24 B6 25 */	bl writeFloat__6StreamFf
/* 801CA228 001C7168  7F A3 EB 78 */	mr r3, r29
/* 801CA22C 001C716C  38 9F 01 24 */	addi r4, r31, 0x124
/* 801CA230 001C7170  4C C6 31 82 */	crclr 6
/* 801CA234 001C7174  48 24 9F A9 */	bl textWriteText__6StreamFPce
/* 801CA238 001C7178  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CA23C 001C717C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CA240 001C7180  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CA244 001C7184  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801CA248 001C7188  7C 08 03 A6 */	mtlr r0
/* 801CA24C 001C718C  38 21 00 20 */	addi r1, r1, 0x20
/* 801CA250 001C7190  4E 80 00 20 */	blr 
.endfn generatorWrite__Q34Game15ItemDengekiGate3MgrFR6StreamPQ24Game11GenItemParm

.fn generatorRead__Q34Game15ItemDengekiGate3MgrFR6StreamPQ24Game11GenItemParmUl, global
/* 801CA254 001C7194  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA258 001C7198  7C 08 02 A6 */	mflr r0
/* 801CA25C 001C719C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA260 001C71A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CA264 001C71A4  7C BF 2B 79 */	or. r31, r5, r5
/* 801CA268 001C71A8  93 C1 00 08 */	stw r30, 8(r1)
/* 801CA26C 001C71AC  7C 9E 23 78 */	mr r30, r4
/* 801CA270 001C71B0  40 82 00 20 */	bne .L_801CA290
/* 801CA274 001C71B4  3C 60 80 48 */	lis r3, lbl_804801A0@ha
/* 801CA278 001C71B8  3C A0 80 48 */	lis r5, lbl_804801BC@ha
/* 801CA27C 001C71BC  38 63 01 A0 */	addi r3, r3, lbl_804801A0@l
/* 801CA280 001C71C0  38 80 04 A3 */	li r4, 0x4a3
/* 801CA284 001C71C4  38 A5 01 BC */	addi r5, r5, lbl_804801BC@l
/* 801CA288 001C71C8  4C C6 31 82 */	crclr 6
/* 801CA28C 001C71CC  4B E6 03 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801CA290:
/* 801CA290 001C71D0  7F C3 F3 78 */	mr r3, r30
/* 801CA294 001C71D4  48 24 AB 19 */	bl readFloat__6StreamFv
/* 801CA298 001C71D8  D0 3F 00 04 */	stfs f1, 4(r31)
/* 801CA29C 001C71DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA2A0 001C71E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CA2A4 001C71E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CA2A8 001C71E8  7C 08 03 A6 */	mtlr r0
/* 801CA2AC 001C71EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA2B0 001C71F0  4E 80 00 20 */	blr 
.endfn generatorRead__Q34Game15ItemDengekiGate3MgrFR6StreamPQ24Game11GenItemParmUl

.fn "generatorBirth__Q34Game15ItemDengekiGate3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm", global
/* 801CA2B4 001C71F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CA2B8 001C71F8  7C 08 02 A6 */	mflr r0
/* 801CA2BC 001C71FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CA2C0 001C7200  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CA2C4 001C7204  7C DF 33 79 */	or. r31, r6, r6
/* 801CA2C8 001C7208  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CA2CC 001C720C  7C BE 2B 78 */	mr r30, r5
/* 801CA2D0 001C7210  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801CA2D4 001C7214  7C 9D 23 78 */	mr r29, r4
/* 801CA2D8 001C7218  93 81 00 10 */	stw r28, 0x10(r1)
/* 801CA2DC 001C721C  7C 7C 1B 78 */	mr r28, r3
/* 801CA2E0 001C7220  40 82 00 20 */	bne .L_801CA300
/* 801CA2E4 001C7224  3C 60 80 48 */	lis r3, lbl_804801A0@ha
/* 801CA2E8 001C7228  3C A0 80 48 */	lis r5, lbl_804801BC@ha
/* 801CA2EC 001C722C  38 63 01 A0 */	addi r3, r3, lbl_804801A0@l
/* 801CA2F0 001C7230  38 80 04 AD */	li r4, 0x4ad
/* 801CA2F4 001C7234  38 A5 01 BC */	addi r5, r5, lbl_804801BC@l
/* 801CA2F8 001C7238  4C C6 31 82 */	crclr 6
/* 801CA2FC 001C723C  4B E6 03 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801CA300:
/* 801CA300 001C7240  7F 83 E3 78 */	mr r3, r28
/* 801CA304 001C7244  48 00 05 4D */	bl "birth__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
/* 801CA308 001C7248  C0 1F 00 04 */	lfs f0, 4(r31)
/* 801CA30C 001C724C  38 00 00 01 */	li r0, 1
/* 801CA310 001C7250  7C 7F 1B 78 */	mr r31, r3
/* 801CA314 001C7254  38 80 00 00 */	li r4, 0
/* 801CA318 001C7258  D0 03 02 04 */	stfs f0, 0x204(r3)
/* 801CA31C 001C725C  C0 03 02 04 */	lfs f0, 0x204(r3)
/* 801CA320 001C7260  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 801CA324 001C7264  98 03 02 18 */	stb r0, 0x218(r3)
/* 801CA328 001C7268  4B F7 0C A1 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801CA32C 001C726C  C0 3E 00 04 */	lfs f1, 4(r30)
/* 801CA330 001C7270  48 24 78 A1 */	bl roundAng__Ff
/* 801CA334 001C7274  D0 3F 02 14 */	stfs f1, 0x214(r31)
/* 801CA338 001C7278  7F E3 FB 78 */	mr r3, r31
/* 801CA33C 001C727C  7F A4 EB 78 */	mr r4, r29
/* 801CA340 001C7280  38 A0 00 00 */	li r5, 0
/* 801CA344 001C7284  4B F7 0E 65 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801CA348 001C7288  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CA34C 001C728C  7F E3 FB 78 */	mr r3, r31
/* 801CA350 001C7290  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CA354 001C7294  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CA358 001C7298  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801CA35C 001C729C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801CA360 001C72A0  7C 08 03 A6 */	mtlr r0
/* 801CA364 001C72A4  38 21 00 20 */	addi r1, r1, 0x20
/* 801CA368 001C72A8  4E 80 00 20 */	blr 
.endfn "generatorBirth__Q34Game15ItemDengekiGate3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"

.fn getCaveName__Q34Game15ItemDengekiGate3MgrFi, global
/* 801CA36C 001C72AC  2C 04 00 00 */	cmpwi r4, 0
/* 801CA370 001C72B0  38 60 00 00 */	li r3, 0
/* 801CA374 001C72B4  4C 82 00 20 */	bnelr 
/* 801CA378 001C72B8  38 62 B2 A0 */	addi r3, r2, lbl_80519600@sda21
/* 801CA37C 001C72BC  4E 80 00 20 */	blr 
.endfn getCaveName__Q34Game15ItemDengekiGate3MgrFi

.fn getCaveID__Q34Game15ItemDengekiGate3MgrFPc, global
/* 801CA380 001C72C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA384 001C72C4  7C 08 02 A6 */	mflr r0
/* 801CA388 001C72C8  38 62 B2 A0 */	addi r3, r2, lbl_80519600@sda21
/* 801CA38C 001C72CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA390 001C72D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CA394 001C72D4  7C 9F 23 78 */	mr r31, r4
/* 801CA398 001C72D8  4B F0 05 79 */	bl strlen
/* 801CA39C 001C72DC  7C 65 1B 78 */	mr r5, r3
/* 801CA3A0 001C72E0  7F E4 FB 78 */	mr r4, r31
/* 801CA3A4 001C72E4  38 62 B2 A0 */	addi r3, r2, lbl_80519600@sda21
/* 801CA3A8 001C72E8  4B F0 02 D9 */	bl strncmp
/* 801CA3AC 001C72EC  7C 03 00 D0 */	neg r0, r3
/* 801CA3B0 001C72F0  7C 00 1B 78 */	or r0, r0, r3
/* 801CA3B4 001C72F4  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 801CA3B8 001C72F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CA3BC 001C72FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA3C0 001C7300  7C 08 03 A6 */	mtlr r0
/* 801CA3C4 001C7304  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA3C8 001C7308  4E 80 00 20 */	blr 
.endfn getCaveID__Q34Game15ItemDengekiGate3MgrFPc

.fn __dt__Q34Game15ItemDengekiGate3MgrFv, weak
/* 801CA3CC 001C730C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA3D0 001C7310  7C 08 02 A6 */	mflr r0
/* 801CA3D4 001C7314  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA3D8 001C7318  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CA3DC 001C731C  7C 9F 23 78 */	mr r31, r4
/* 801CA3E0 001C7320  93 C1 00 08 */	stw r30, 8(r1)
/* 801CA3E4 001C7324  7C 7E 1B 79 */	or. r30, r3, r3
/* 801CA3E8 001C7328  41 82 00 FC */	beq .L_801CA4E4
/* 801CA3EC 001C732C  3C 60 80 4B */	lis r3, __vt__Q34Game15ItemDengekiGate3Mgr@ha
/* 801CA3F0 001C7330  38 63 65 64 */	addi r3, r3, __vt__Q34Game15ItemDengekiGate3Mgr@l
/* 801CA3F4 001C7334  90 7E 00 00 */	stw r3, 0(r30)
/* 801CA3F8 001C7338  38 03 00 74 */	addi r0, r3, 0x74
/* 801CA3FC 001C733C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801CA400 001C7340  41 82 00 D4 */	beq .L_801CA4D4
/* 801CA404 001C7344  3C 60 80 4B */	lis r3, "__vt__Q24Game29NodeItemMgr<Q24Game8ItemGate>"@ha
/* 801CA408 001C7348  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801CA40C 001C734C  38 63 66 24 */	addi r3, r3, "__vt__Q24Game29NodeItemMgr<Q24Game8ItemGate>"@l
/* 801CA410 001C7350  90 7E 00 00 */	stw r3, 0(r30)
/* 801CA414 001C7354  38 03 00 74 */	addi r0, r3, 0x74
/* 801CA418 001C7358  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801CA41C 001C735C  41 82 00 84 */	beq .L_801CA4A0
/* 801CA420 001C7360  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@ha
/* 801CA424 001C7364  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801CA428 001C7368  38 84 68 10 */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@l
/* 801CA42C 001C736C  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801CA430 001C7370  38 04 00 2C */	addi r0, r4, 0x2c
/* 801CA434 001C7374  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801CA438 001C7378  41 82 00 18 */	beq .L_801CA450
/* 801CA43C 001C737C  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
/* 801CA440 001C7380  38 04 68 00 */	addi r0, r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
/* 801CA444 001C7384  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801CA448 001C7388  38 80 00 00 */	li r4, 0
/* 801CA44C 001C738C  48 24 71 3D */	bl __dt__5CNodeFv
.L_801CA450:
/* 801CA450 001C7390  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801CA454 001C7394  41 82 00 4C */	beq .L_801CA4A0
/* 801CA458 001C7398  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8ItemGate>"@ha
/* 801CA45C 001C739C  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801CA460 001C73A0  38 63 68 90 */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8ItemGate>"@l
/* 801CA464 001C73A4  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801CA468 001C73A8  38 03 00 2C */	addi r0, r3, 0x2c
/* 801CA46C 001C73AC  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801CA470 001C73B0  41 82 00 30 */	beq .L_801CA4A0
/* 801CA474 001C73B4  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8ItemGate>"@ha
/* 801CA478 001C73B8  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801CA47C 001C73BC  38 03 69 0C */	addi r0, r3, "__vt__27Container<Q24Game8ItemGate>"@l
/* 801CA480 001C73C0  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801CA484 001C73C4  41 82 00 1C */	beq .L_801CA4A0
/* 801CA488 001C73C8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801CA48C 001C73CC  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801CA490 001C73D0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801CA494 001C73D4  38 80 00 00 */	li r4, 0
/* 801CA498 001C73D8  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801CA49C 001C73DC  48 24 70 ED */	bl __dt__5CNodeFv
.L_801CA4A0:
/* 801CA4A0 001C73E0  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801CA4A4 001C73E4  41 82 00 30 */	beq .L_801CA4D4
/* 801CA4A8 001C73E8  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8ItemGate>"@ha
/* 801CA4AC 001C73EC  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801CA4B0 001C73F0  38 03 69 0C */	addi r0, r3, "__vt__27Container<Q24Game8ItemGate>"@l
/* 801CA4B4 001C73F4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801CA4B8 001C73F8  41 82 00 1C */	beq .L_801CA4D4
/* 801CA4BC 001C73FC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801CA4C0 001C7400  38 7E 00 30 */	addi r3, r30, 0x30
/* 801CA4C4 001C7404  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801CA4C8 001C7408  38 80 00 00 */	li r4, 0
/* 801CA4CC 001C740C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801CA4D0 001C7410  48 24 70 B9 */	bl __dt__5CNodeFv
.L_801CA4D4:
/* 801CA4D4 001C7414  7F E0 07 35 */	extsh. r0, r31
/* 801CA4D8 001C7418  40 81 00 0C */	ble .L_801CA4E4
/* 801CA4DC 001C741C  7F C3 F3 78 */	mr r3, r30
/* 801CA4E0 001C7420  4B E5 9B D5 */	bl __dl__FPv
.L_801CA4E4:
/* 801CA4E4 001C7424  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA4E8 001C7428  7F C3 F3 78 */	mr r3, r30
/* 801CA4EC 001C742C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CA4F0 001C7430  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CA4F4 001C7434  7C 08 03 A6 */	mtlr r0
/* 801CA4F8 001C7438  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA4FC 001C743C  4E 80 00 20 */	blr 
.endfn __dt__Q34Game15ItemDengekiGate3MgrFv

.fn generatorGetID__Q34Game15ItemDengekiGate3MgrFv, weak
/* 801CA500 001C7440  3C 60 64 67 */	lis r3, 0x64676174@ha
/* 801CA504 001C7444  38 63 61 74 */	addi r3, r3, 0x64676174@l
/* 801CA508 001C7448  4E 80 00 20 */	blr 
.endfn generatorGetID__Q34Game15ItemDengekiGate3MgrFv

.fn generatorLocalVersion__Q34Game15ItemDengekiGate3MgrFv, weak
/* 801CA50C 001C744C  3C 60 30 30 */	lis r3, 0x30303030@ha
/* 801CA510 001C7450  38 63 30 30 */	addi r3, r3, 0x30303030@l
/* 801CA514 001C7454  4E 80 00 20 */	blr 
.endfn generatorLocalVersion__Q34Game15ItemDengekiGate3MgrFv

.fn generatorGetID__Q24Game11ItemGateMgrFv, weak
/* 801CA518 001C7458  3C 60 67 61 */	lis r3, 0x67617465@ha
/* 801CA51C 001C745C  38 63 74 65 */	addi r3, r3, 0x67617465@l
/* 801CA520 001C7460  4E 80 00 20 */	blr 
.endfn generatorGetID__Q24Game11ItemGateMgrFv

.fn generatorLocalVersion__Q24Game11ItemGateMgrFv, weak
/* 801CA524 001C7464  3C 60 30 30 */	lis r3, 0x30303032@ha
/* 801CA528 001C7468  38 63 30 32 */	addi r3, r3, 0x30303032@l
/* 801CA52C 001C746C  4E 80 00 20 */	blr 
.endfn generatorLocalVersion__Q24Game11ItemGateMgrFv

.fn doAnimation__Q24Game11ItemGateMgrFv, weak
/* 801CA530 001C7470  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA534 001C7474  7C 08 02 A6 */	mflr r0
/* 801CA538 001C7478  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA53C 001C747C  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 801CA540 001C7480  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801CA544 001C7484  7D 89 03 A6 */	mtctr r12
/* 801CA548 001C7488  4E 80 04 21 */	bctrl 
/* 801CA54C 001C748C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA550 001C7490  7C 08 03 A6 */	mtlr r0
/* 801CA554 001C7494  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA558 001C7498  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game11ItemGateMgrFv

.fn doEntry__Q24Game11ItemGateMgrFv, weak
/* 801CA55C 001C749C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA560 001C74A0  7C 08 02 A6 */	mflr r0
/* 801CA564 001C74A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA568 001C74A8  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 801CA56C 001C74AC  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801CA570 001C74B0  7D 89 03 A6 */	mtctr r12
/* 801CA574 001C74B4  4E 80 04 21 */	bctrl 
/* 801CA578 001C74B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA57C 001C74BC  7C 08 03 A6 */	mtlr r0
/* 801CA580 001C74C0  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA584 001C74C4  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game11ItemGateMgrFv

.fn doSetView__Q24Game11ItemGateMgrFi, weak
/* 801CA588 001C74C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA58C 001C74CC  7C 08 02 A6 */	mflr r0
/* 801CA590 001C74D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA594 001C74D4  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 801CA598 001C74D8  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801CA59C 001C74DC  7D 89 03 A6 */	mtctr r12
/* 801CA5A0 001C74E0  4E 80 04 21 */	bctrl 
/* 801CA5A4 001C74E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA5A8 001C74E8  7C 08 03 A6 */	mtlr r0
/* 801CA5AC 001C74EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA5B0 001C74F0  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game11ItemGateMgrFi

.fn doViewCalc__Q24Game11ItemGateMgrFv, weak
/* 801CA5B4 001C74F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA5B8 001C74F8  7C 08 02 A6 */	mflr r0
/* 801CA5BC 001C74FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA5C0 001C7500  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 801CA5C4 001C7504  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 801CA5C8 001C7508  7D 89 03 A6 */	mtctr r12
/* 801CA5CC 001C750C  4E 80 04 21 */	bctrl 
/* 801CA5D0 001C7510  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA5D4 001C7514  7C 08 03 A6 */	mtlr r0
/* 801CA5D8 001C7518  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA5DC 001C751C  4E 80 00 20 */	blr 
.endfn doViewCalc__Q24Game11ItemGateMgrFv

.fn doSimulation__Q24Game11ItemGateMgrFf, weak
/* 801CA5E0 001C7520  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA5E4 001C7524  7C 08 02 A6 */	mflr r0
/* 801CA5E8 001C7528  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA5EC 001C752C  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 801CA5F0 001C7530  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 801CA5F4 001C7534  7D 89 03 A6 */	mtctr r12
/* 801CA5F8 001C7538  4E 80 04 21 */	bctrl 
/* 801CA5FC 001C753C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA600 001C7540  7C 08 03 A6 */	mtlr r0
/* 801CA604 001C7544  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA608 001C7548  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game11ItemGateMgrFf

.fn doDirectDraw__Q24Game11ItemGateMgrFR8Graphics, weak
/* 801CA60C 001C754C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA610 001C7550  7C 08 02 A6 */	mflr r0
/* 801CA614 001C7554  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA618 001C7558  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 801CA61C 001C755C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801CA620 001C7560  7D 89 03 A6 */	mtctr r12
/* 801CA624 001C7564  4E 80 04 21 */	bctrl 
/* 801CA628 001C7568  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA62C 001C756C  7C 08 03 A6 */	mtlr r0
/* 801CA630 001C7570  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA634 001C7574  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game11ItemGateMgrFR8Graphics

.fn getName__Q23efx7ArgRotYFv, weak
/* 801CA638 001C7578  38 62 B2 A8 */	addi r3, r2, lbl_80519608@sda21
/* 801CA63C 001C757C  4E 80 00 20 */	blr 
.endfn getName__Q23efx7ArgRotYFv

.fn __dt__Q23efx7TEgateAFv, weak
/* 801CA640 001C7580  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA644 001C7584  7C 08 02 A6 */	mflr r0
/* 801CA648 001C7588  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA64C 001C758C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CA650 001C7590  7C 9F 23 78 */	mr r31, r4
/* 801CA654 001C7594  93 C1 00 08 */	stw r30, 8(r1)
/* 801CA658 001C7598  7C 7E 1B 79 */	or. r30, r3, r3
/* 801CA65C 001C759C  41 82 00 64 */	beq .L_801CA6C0
/* 801CA660 001C75A0  3C 60 80 4B */	lis r3, __vt__Q23efx7TEgateA@ha
/* 801CA664 001C75A4  38 63 69 6C */	addi r3, r3, __vt__Q23efx7TEgateA@l
/* 801CA668 001C75A8  90 7E 00 00 */	stw r3, 0(r30)
/* 801CA66C 001C75AC  38 03 00 14 */	addi r0, r3, 0x14
/* 801CA670 001C75B0  90 1E 00 04 */	stw r0, 4(r30)
/* 801CA674 001C75B4  41 82 00 3C */	beq .L_801CA6B0
/* 801CA678 001C75B8  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 801CA67C 001C75BC  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 801CA680 001C75C0  90 7E 00 00 */	stw r3, 0(r30)
/* 801CA684 001C75C4  38 03 00 14 */	addi r0, r3, 0x14
/* 801CA688 001C75C8  90 1E 00 04 */	stw r0, 4(r30)
/* 801CA68C 001C75CC  41 82 00 24 */	beq .L_801CA6B0
/* 801CA690 001C75D0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801CA694 001C75D4  38 7E 00 04 */	addi r3, r30, 4
/* 801CA698 001C75D8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801CA69C 001C75DC  38 80 00 00 */	li r4, 0
/* 801CA6A0 001C75E0  90 BE 00 00 */	stw r5, 0(r30)
/* 801CA6A4 001C75E4  38 05 00 14 */	addi r0, r5, 0x14
/* 801CA6A8 001C75E8  90 1E 00 04 */	stw r0, 4(r30)
/* 801CA6AC 001C75EC  4B EC 55 F1 */	bl __dt__18JPAEmitterCallBackFv
.L_801CA6B0:
/* 801CA6B0 001C75F0  7F E0 07 35 */	extsh. r0, r31
/* 801CA6B4 001C75F4  40 81 00 0C */	ble .L_801CA6C0
/* 801CA6B8 001C75F8  7F C3 F3 78 */	mr r3, r30
/* 801CA6BC 001C75FC  4B E5 99 F9 */	bl __dl__FPv
.L_801CA6C0:
/* 801CA6C0 001C7600  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA6C4 001C7604  7F C3 F3 78 */	mr r3, r30
/* 801CA6C8 001C7608  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CA6CC 001C760C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CA6D0 001C7610  7C 08 03 A6 */	mtlr r0
/* 801CA6D4 001C7614  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA6D8 001C7618  4E 80 00 20 */	blr 
.endfn __dt__Q23efx7TEgateAFv

.fn getCreatureName__Q24Game8ItemGateFv, weak
/* 801CA6DC 001C761C  38 62 B2 8C */	addi r3, r2, lbl_805195EC@sda21
/* 801CA6E0 001C7620  4E 80 00 20 */	blr 
.endfn getCreatureName__Q24Game8ItemGateFv

.fn getMabiki__Q24Game8ItemGateFv, weak
/* 801CA6E4 001C7624  38 63 01 EC */	addi r3, r3, 0x1ec
/* 801CA6E8 001C7628  4E 80 00 20 */	blr 
.endfn getMabiki__Q24Game8ItemGateFv

.fn makeTrMatrix__Q24Game8ItemGateFv, weak
/* 801CA6EC 001C762C  4E 80 00 20 */	blr 
.endfn makeTrMatrix__Q24Game8ItemGateFv

.fn do_doAnimation__Q24Game8BaseItemFv, weak
/* 801CA6F0 001C7630  4E 80 00 20 */	blr 
.endfn do_doAnimation__Q24Game8BaseItemFv

.fn "doAI__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>Fv", weak
/* 801CA6F4 001C7634  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CA6F8 001C7638  7C 08 02 A6 */	mflr r0
/* 801CA6FC 001C763C  7C 64 1B 78 */	mr r4, r3
/* 801CA700 001C7640  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CA704 001C7644  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801CA708 001C7648  81 83 00 00 */	lwz r12, 0(r3)
/* 801CA70C 001C764C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CA710 001C7650  7D 89 03 A6 */	mtctr r12
/* 801CA714 001C7654  4E 80 04 21 */	bctrl 
/* 801CA718 001C7658  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CA71C 001C765C  7C 08 03 A6 */	mtlr r0
/* 801CA720 001C7660  38 21 00 10 */	addi r1, r1, 0x10
/* 801CA724 001C7664  4E 80 00 20 */	blr 
.endfn "doAI__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>Fv"

.fn getCreatureName__Q24Game8BaseItemFv, weak
/* 801CA728 001C7668  38 62 B2 B0 */	addi r3, r2, lbl_80519610@sda21
/* 801CA72C 001C766C  4E 80 00 20 */	blr 
.endfn getCreatureName__Q24Game8BaseItemFv

.fn changeMaterial__Q24Game8BaseItemFv, weak
/* 801CA730 001C7670  4E 80 00 20 */	blr 
.endfn changeMaterial__Q24Game8BaseItemFv

.fn getFaceDir__Q24Game8BaseItemFv, weak
/* 801CA734 001C7674  C0 22 B2 38 */	lfs f1, lbl_80519598@sda21(r2)
/* 801CA738 001C7678  4E 80 00 20 */	blr 
.endfn getFaceDir__Q24Game8BaseItemFv

.fn "__ct__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CA73C 001C767C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CA740 001C7680  7C 08 02 A6 */	mflr r0
/* 801CA744 001C7684  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CA748 001C7688  7C 80 07 35 */	extsh. r0, r4
/* 801CA74C 001C768C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CA750 001C7690  7C 7F 1B 78 */	mr r31, r3
/* 801CA754 001C7694  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CA758 001C7698  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801CA75C 001C769C  41 82 00 0C */	beq .L_801CA768
/* 801CA760 001C76A0  38 1F 00 88 */	addi r0, r31, 0x88
/* 801CA764 001C76A4  90 1F 00 04 */	stw r0, 4(r31)
.L_801CA768:
/* 801CA768 001C76A8  7F E3 FB 78 */	mr r3, r31
/* 801CA76C 001C76AC  38 80 00 00 */	li r4, 0
/* 801CA770 001C76B0  38 A0 00 01 */	li r5, 1
/* 801CA774 001C76B4  48 00 25 FD */	bl __ct__Q24Game11BaseItemMgrFi
/* 801CA778 001C76B8  3B BF 00 30 */	addi r29, r31, 0x30
/* 801CA77C 001C76BC  7F A3 EB 78 */	mr r3, r29
/* 801CA780 001C76C0  48 24 6C 11 */	bl __ct__5CNodeFv
/* 801CA784 001C76C4  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 801CA788 001C76C8  38 A0 00 00 */	li r5, 0
/* 801CA78C 001C76CC  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 801CA790 001C76D0  3B DF 00 4C */	addi r30, r31, 0x4c
/* 801CA794 001C76D4  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8ItemGate>"@ha
/* 801CA798 001C76D8  90 1D 00 00 */	stw r0, 0(r29)
/* 801CA79C 001C76DC  38 03 69 0C */	addi r0, r3, "__vt__27Container<Q24Game8ItemGate>"@l
/* 801CA7A0 001C76E0  90 1D 00 00 */	stw r0, 0(r29)
/* 801CA7A4 001C76E4  3C 60 80 4B */	lis r3, "__vt__Q24Game29NodeItemMgr<Q24Game8ItemGate>"@ha
/* 801CA7A8 001C76E8  38 83 66 24 */	addi r4, r3, "__vt__Q24Game29NodeItemMgr<Q24Game8ItemGate>"@l
/* 801CA7AC 001C76EC  98 BD 00 18 */	stb r5, 0x18(r29)
/* 801CA7B0 001C76F0  38 04 00 74 */	addi r0, r4, 0x74
/* 801CA7B4 001C76F4  7F C3 F3 78 */	mr r3, r30
/* 801CA7B8 001C76F8  90 9F 00 00 */	stw r4, 0(r31)
/* 801CA7BC 001C76FC  90 1F 00 30 */	stw r0, 0x30(r31)
/* 801CA7C0 001C7700  48 24 6B D1 */	bl __ct__5CNodeFv
/* 801CA7C4 001C7704  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801CA7C8 001C7708  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8ItemGate>"@ha
/* 801CA7CC 001C770C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801CA7D0 001C7710  3C A0 80 4B */	lis r5, __vt__16GenericObjectMgr@ha
/* 801CA7D4 001C7714  90 1E 00 00 */	stw r0, 0(r30)
/* 801CA7D8 001C7718  38 03 69 0C */	addi r0, r3, "__vt__27Container<Q24Game8ItemGate>"@l
/* 801CA7DC 001C771C  3C 80 80 4B */	lis r4, "__vt__27ObjectMgr<Q24Game8ItemGate>"@ha
/* 801CA7E0 001C7720  3C 60 80 4B */	lis r3, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@ha
/* 801CA7E4 001C7724  90 1E 00 00 */	stw r0, 0(r30)
/* 801CA7E8 001C7728  38 00 00 00 */	li r0, 0
/* 801CA7EC 001C772C  38 C4 68 90 */	addi r6, r4, "__vt__27ObjectMgr<Q24Game8ItemGate>"@l
/* 801CA7F0 001C7730  38 83 68 10 */	addi r4, r3, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@l
/* 801CA7F4 001C7734  98 1E 00 18 */	stb r0, 0x18(r30)
/* 801CA7F8 001C7738  38 05 B5 F0 */	addi r0, r5, __vt__16GenericObjectMgr@l
/* 801CA7FC 001C773C  3B BE 00 20 */	addi r29, r30, 0x20
/* 801CA800 001C7740  38 A6 00 2C */	addi r5, r6, 0x2c
/* 801CA804 001C7744  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801CA808 001C7748  38 04 00 2C */	addi r0, r4, 0x2c
/* 801CA80C 001C774C  7F A3 EB 78 */	mr r3, r29
/* 801CA810 001C7750  90 DE 00 00 */	stw r6, 0(r30)
/* 801CA814 001C7754  90 BE 00 1C */	stw r5, 0x1c(r30)
/* 801CA818 001C7758  90 9E 00 00 */	stw r4, 0(r30)
/* 801CA81C 001C775C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801CA820 001C7760  48 24 6B 71 */	bl __ct__5CNodeFv
/* 801CA824 001C7764  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
/* 801CA828 001C7768  7F E3 FB 78 */	mr r3, r31
/* 801CA82C 001C776C  38 04 68 00 */	addi r0, r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
/* 801CA830 001C7770  90 1D 00 00 */	stw r0, 0(r29)
/* 801CA834 001C7774  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CA838 001C7778  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CA83C 001C777C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801CA840 001C7780  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CA844 001C7784  7C 08 03 A6 */	mtlr r0
/* 801CA848 001C7788  38 21 00 20 */	addi r1, r1, 0x20
/* 801CA84C 001C778C  4E 80 00 20 */	blr 
.endfn "__ct__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "birth__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CA850 001C7790  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CA854 001C7794  7C 08 02 A6 */	mflr r0
/* 801CA858 001C7798  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CA85C 001C779C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CA860 001C77A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CA864 001C77A4  7C 7E 1B 78 */	mr r30, r3
/* 801CA868 001C77A8  38 60 02 84 */	li r3, 0x284
/* 801CA86C 001C77AC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801CA870 001C77B0  4B E5 96 35 */	bl __nw__FUl
/* 801CA874 001C77B4  7C 7F 1B 79 */	or. r31, r3, r3
/* 801CA878 001C77B8  41 82 01 24 */	beq .L_801CA99C
/* 801CA87C 001C77BC  38 80 04 04 */	li r4, 0x404
/* 801CA880 001C77C0  48 00 17 69 */	bl __ct__Q24Game8BaseItemFi
/* 801CA884 001C77C4  3C 60 80 4B */	lis r3, "__vt__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@ha
/* 801CA888 001C77C8  38 00 00 00 */	li r0, 0
/* 801CA88C 001C77CC  38 83 6E 30 */	addi r4, r3, "__vt__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@l
/* 801CA890 001C77D0  38 60 00 1C */	li r3, 0x1c
/* 801CA894 001C77D4  90 9F 00 00 */	stw r4, 0(r31)
/* 801CA898 001C77D8  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801CA89C 001C77DC  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801CA8A0 001C77E0  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801CA8A4 001C77E4  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801CA8A8 001C77E8  4B E5 95 FD */	bl __nw__FUl
/* 801CA8AC 001C77EC  28 03 00 00 */	cmplwi r3, 0
/* 801CA8B0 001C77F0  41 82 00 30 */	beq .L_801CA8E0
/* 801CA8B4 001C77F4  3C 80 80 4B */	lis r4, "__vt__Q24Game30StateMachine<Q24Game8ItemGate>"@ha
/* 801CA8B8 001C77F8  3C A0 80 4B */	lis r5, "__vt__Q24Game25ItemFSM<Q24Game8ItemGate>"@ha
/* 801CA8BC 001C77FC  38 04 6E 18 */	addi r0, r4, "__vt__Q24Game30StateMachine<Q24Game8ItemGate>"@l
/* 801CA8C0 001C7800  3C 80 80 4B */	lis r4, __vt__Q24Game7GateFSM@ha
/* 801CA8C4 001C7804  90 03 00 00 */	stw r0, 0(r3)
/* 801CA8C8 001C7808  38 C0 FF FF */	li r6, -1
/* 801CA8CC 001C780C  38 A5 6E 00 */	addi r5, r5, "__vt__Q24Game25ItemFSM<Q24Game8ItemGate>"@l
/* 801CA8D0 001C7810  38 04 70 DC */	addi r0, r4, __vt__Q24Game7GateFSM@l
/* 801CA8D4 001C7814  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801CA8D8 001C7818  90 A3 00 00 */	stw r5, 0(r3)
/* 801CA8DC 001C781C  90 03 00 00 */	stw r0, 0(r3)
.L_801CA8E0:
/* 801CA8E0 001C7820  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801CA8E4 001C7824  7F E4 FB 78 */	mr r4, r31
/* 801CA8E8 001C7828  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801CA8EC 001C782C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CA8F0 001C7830  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CA8F4 001C7834  7D 89 03 A6 */	mtctr r12
/* 801CA8F8 001C7838  4E 80 04 21 */	bctrl 
/* 801CA8FC 001C783C  3C 80 80 4B */	lis r4, "__vt__Q24Game60WorkItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@ha
/* 801CA900 001C7840  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801CA904 001C7844  38 84 6B DC */	addi r4, r4, "__vt__Q24Game60WorkItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@l
/* 801CA908 001C7848  90 9F 00 00 */	stw r4, 0(r31)
/* 801CA90C 001C784C  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801CA910 001C7850  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801CA914 001C7854  48 06 42 B9 */	bl __ct__Q24Game11TSoundEventFv
/* 801CA918 001C7858  3C 60 80 4B */	lis r3, __vt__Q24Game8ItemGate@ha
/* 801CA91C 001C785C  3C 80 80 15 */	lis r4, __ct__5PlaneFv@ha
/* 801CA920 001C7860  38 A3 69 B8 */	addi r5, r3, __vt__Q24Game8ItemGate@l
/* 801CA924 001C7864  38 C0 00 10 */	li r6, 0x10
/* 801CA928 001C7868  90 BF 00 00 */	stw r5, 0(r31)
/* 801CA92C 001C786C  38 05 01 B0 */	addi r0, r5, 0x1b0
/* 801CA930 001C7870  38 7F 02 24 */	addi r3, r31, 0x224
/* 801CA934 001C7874  38 84 1C 68 */	addi r4, r4, __ct__5PlaneFv@l
/* 801CA938 001C7878  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801CA93C 001C787C  38 A0 00 00 */	li r5, 0
/* 801CA940 001C7880  38 E0 00 04 */	li r7, 4
/* 801CA944 001C7884  4B EF 6E F9 */	bl __construct_array
/* 801CA948 001C7888  38 60 00 08 */	li r3, 8
/* 801CA94C 001C788C  4B E5 95 59 */	bl __nw__FUl
/* 801CA950 001C7890  7C 60 1B 79 */	or. r0, r3, r3
/* 801CA954 001C7894  41 82 00 0C */	beq .L_801CA960
/* 801CA958 001C7898  4B F6 97 05 */	bl __ct__8CollTreeFv
/* 801CA95C 001C789C  7C 60 1B 78 */	mr r0, r3
.L_801CA960:
/* 801CA960 001C78A0  90 1F 01 14 */	stw r0, 0x114(r31)
/* 801CA964 001C78A4  38 60 00 00 */	li r3, 0
/* 801CA968 001C78A8  C0 02 B2 30 */	lfs f0, lbl_80519590@sda21(r2)
/* 801CA96C 001C78AC  38 00 00 03 */	li r0, 3
/* 801CA970 001C78B0  C0 22 B2 34 */	lfs f1, lbl_80519594@sda21(r2)
/* 801CA974 001C78B4  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 801CA978 001C78B8  C0 02 B2 38 */	lfs f0, lbl_80519598@sda21(r2)
/* 801CA97C 001C78BC  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 801CA980 001C78C0  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 801CA984 001C78C4  90 7F 02 0C */	stw r3, 0x20c(r31)
/* 801CA988 001C78C8  90 1F 02 10 */	stw r0, 0x210(r31)
/* 801CA98C 001C78CC  D0 3F 02 04 */	stfs f1, 0x204(r31)
/* 801CA990 001C78D0  98 7F 02 18 */	stb r3, 0x218(r31)
/* 801CA994 001C78D4  90 7F 02 1C */	stw r3, 0x21c(r31)
/* 801CA998 001C78D8  90 7F 02 20 */	stw r3, 0x220(r31)
.L_801CA99C:
/* 801CA99C 001C78DC  93 DF 01 80 */	stw r30, 0x180(r31)
/* 801CA9A0 001C78E0  38 60 00 1C */	li r3, 0x1c
/* 801CA9A4 001C78E4  4B E5 95 01 */	bl __nw__FUl
/* 801CA9A8 001C78E8  7C 7D 1B 79 */	or. r29, r3, r3
/* 801CA9AC 001C78EC  41 82 00 14 */	beq .L_801CA9C0
/* 801CA9B0 001C78F0  48 24 69 E1 */	bl __ct__5CNodeFv
/* 801CA9B4 001C78F4  3C 60 80 4B */	lis r3, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
/* 801CA9B8 001C78F8  38 03 68 00 */	addi r0, r3, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
/* 801CA9BC 001C78FC  90 1D 00 00 */	stw r0, 0(r29)
.L_801CA9C0:
/* 801CA9C0 001C7900  93 FD 00 18 */	stw r31, 0x18(r29)
/* 801CA9C4 001C7904  7F A4 EB 78 */	mr r4, r29
/* 801CA9C8 001C7908  38 7E 00 6C */	addi r3, r30, 0x6c
/* 801CA9CC 001C790C  48 24 6A 3D */	bl add__5CNodeFP5CNode
/* 801CA9D0 001C7910  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 801CA9D4 001C7914  81 83 00 00 */	lwz r12, 0(r3)
/* 801CA9D8 001C7918  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801CA9DC 001C791C  7D 89 03 A6 */	mtctr r12
/* 801CA9E0 001C7920  4E 80 04 21 */	bctrl 
/* 801CA9E4 001C7924  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CA9E8 001C7928  7F E3 FB 78 */	mr r3, r31
/* 801CA9EC 001C792C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CA9F0 001C7930  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CA9F4 001C7934  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801CA9F8 001C7938  7C 08 03 A6 */	mtlr r0
/* 801CA9FC 001C793C  38 21 00 20 */	addi r1, r1, 0x20
/* 801CAA00 001C7940  4E 80 00 20 */	blr 
.endfn "birth__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "initDependency__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CAA04 001C7944  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CAA08 001C7948  7C 08 02 A6 */	mflr r0
/* 801CAA0C 001C794C  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
/* 801CAA10 001C7950  38 63 00 4C */	addi r3, r3, 0x4c
/* 801CAA14 001C7954  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CAA18 001C7958  38 00 00 00 */	li r0, 0
/* 801CAA1C 001C795C  38 84 5A 7C */	addi r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
/* 801CAA20 001C7960  28 00 00 00 */	cmplwi r0, 0
/* 801CAA24 001C7964  90 81 00 08 */	stw r4, 8(r1)
/* 801CAA28 001C7968  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CAA2C 001C796C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CAA30 001C7970  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CAA34 001C7974  40 82 00 1C */	bne .L_801CAA50
/* 801CAA38 001C7978  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAA3C 001C797C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CAA40 001C7980  7D 89 03 A6 */	mtctr r12
/* 801CAA44 001C7984  4E 80 04 21 */	bctrl 
/* 801CAA48 001C7988  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CAA4C 001C798C  48 00 01 70 */	b .L_801CABBC
.L_801CAA50:
/* 801CAA50 001C7990  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAA54 001C7994  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CAA58 001C7998  7D 89 03 A6 */	mtctr r12
/* 801CAA5C 001C799C  4E 80 04 21 */	bctrl 
/* 801CAA60 001C79A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CAA64 001C79A4  48 00 00 58 */	b .L_801CAABC
.L_801CAA68:
/* 801CAA68 001C79A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAA6C 001C79AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAA70 001C79B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAA74 001C79B4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CAA78 001C79B8  7D 89 03 A6 */	mtctr r12
/* 801CAA7C 001C79BC  4E 80 04 21 */	bctrl 
/* 801CAA80 001C79C0  7C 64 1B 78 */	mr r4, r3
/* 801CAA84 001C79C4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CAA88 001C79C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAA8C 001C79CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CAA90 001C79D0  7D 89 03 A6 */	mtctr r12
/* 801CAA94 001C79D4  4E 80 04 21 */	bctrl 
/* 801CAA98 001C79D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CAA9C 001C79DC  40 82 01 20 */	bne .L_801CABBC
/* 801CAAA0 001C79E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAAA4 001C79E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAAA8 001C79E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAAAC 001C79EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CAAB0 001C79F0  7D 89 03 A6 */	mtctr r12
/* 801CAAB4 001C79F4  4E 80 04 21 */	bctrl 
/* 801CAAB8 001C79F8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CAABC:
/* 801CAABC 001C79FC  81 81 00 08 */	lwz r12, 8(r1)
/* 801CAAC0 001C7A00  38 61 00 08 */	addi r3, r1, 8
/* 801CAAC4 001C7A04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CAAC8 001C7A08  7D 89 03 A6 */	mtctr r12
/* 801CAACC 001C7A0C  4E 80 04 21 */	bctrl 
/* 801CAAD0 001C7A10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CAAD4 001C7A14  41 82 FF 94 */	beq .L_801CAA68
/* 801CAAD8 001C7A18  48 00 00 E4 */	b .L_801CABBC
.L_801CAADC:
/* 801CAADC 001C7A1C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAAE0 001C7A20  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAAE4 001C7A24  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CAAE8 001C7A28  7D 89 03 A6 */	mtctr r12
/* 801CAAEC 001C7A2C  4E 80 04 21 */	bctrl 
/* 801CAAF0 001C7A30  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAAF4 001C7A34  81 8C 01 BC */	lwz r12, 0x1bc(r12)
/* 801CAAF8 001C7A38  7D 89 03 A6 */	mtctr r12
/* 801CAAFC 001C7A3C  4E 80 04 21 */	bctrl 
/* 801CAB00 001C7A40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CAB04 001C7A44  28 00 00 00 */	cmplwi r0, 0
/* 801CAB08 001C7A48  40 82 00 24 */	bne .L_801CAB2C
/* 801CAB0C 001C7A4C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAB10 001C7A50  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAB14 001C7A54  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAB18 001C7A58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CAB1C 001C7A5C  7D 89 03 A6 */	mtctr r12
/* 801CAB20 001C7A60  4E 80 04 21 */	bctrl 
/* 801CAB24 001C7A64  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CAB28 001C7A68  48 00 00 94 */	b .L_801CABBC
.L_801CAB2C:
/* 801CAB2C 001C7A6C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAB30 001C7A70  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAB34 001C7A74  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAB38 001C7A78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CAB3C 001C7A7C  7D 89 03 A6 */	mtctr r12
/* 801CAB40 001C7A80  4E 80 04 21 */	bctrl 
/* 801CAB44 001C7A84  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CAB48 001C7A88  48 00 00 58 */	b .L_801CABA0
.L_801CAB4C:
/* 801CAB4C 001C7A8C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAB50 001C7A90  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAB54 001C7A94  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAB58 001C7A98  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CAB5C 001C7A9C  7D 89 03 A6 */	mtctr r12
/* 801CAB60 001C7AA0  4E 80 04 21 */	bctrl 
/* 801CAB64 001C7AA4  7C 64 1B 78 */	mr r4, r3
/* 801CAB68 001C7AA8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CAB6C 001C7AAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAB70 001C7AB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CAB74 001C7AB4  7D 89 03 A6 */	mtctr r12
/* 801CAB78 001C7AB8  4E 80 04 21 */	bctrl 
/* 801CAB7C 001C7ABC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CAB80 001C7AC0  40 82 00 3C */	bne .L_801CABBC
/* 801CAB84 001C7AC4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAB88 001C7AC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAB8C 001C7ACC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAB90 001C7AD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CAB94 001C7AD4  7D 89 03 A6 */	mtctr r12
/* 801CAB98 001C7AD8  4E 80 04 21 */	bctrl 
/* 801CAB9C 001C7ADC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CABA0:
/* 801CABA0 001C7AE0  81 81 00 08 */	lwz r12, 8(r1)
/* 801CABA4 001C7AE4  38 61 00 08 */	addi r3, r1, 8
/* 801CABA8 001C7AE8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CABAC 001C7AEC  7D 89 03 A6 */	mtctr r12
/* 801CABB0 001C7AF0  4E 80 04 21 */	bctrl 
/* 801CABB4 001C7AF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CABB8 001C7AF8  41 82 FF 94 */	beq .L_801CAB4C
.L_801CABBC:
/* 801CABBC 001C7AFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CABC0 001C7B00  81 83 00 00 */	lwz r12, 0(r3)
/* 801CABC4 001C7B04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CABC8 001C7B08  7D 89 03 A6 */	mtctr r12
/* 801CABCC 001C7B0C  4E 80 04 21 */	bctrl 
/* 801CABD0 001C7B10  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CABD4 001C7B14  7C 04 18 40 */	cmplw r4, r3
/* 801CABD8 001C7B18  40 82 FF 04 */	bne .L_801CAADC
/* 801CABDC 001C7B1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CABE0 001C7B20  7C 08 03 A6 */	mtlr r0
/* 801CABE4 001C7B24  38 21 00 20 */	addi r1, r1, 0x20
/* 801CABE8 001C7B28  4E 80 00 20 */	blr 
.endfn "initDependency__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "kill__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPQ24Game8ItemGate", weak
/* 801CABEC 001C7B2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CABF0 001C7B30  7C 08 02 A6 */	mflr r0
/* 801CABF4 001C7B34  38 63 00 4C */	addi r3, r3, 0x4c
/* 801CABF8 001C7B38  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CABFC 001C7B3C  48 00 02 49 */	bl "delNode__31NodeObjectMgr<Q24Game8ItemGate>FPQ24Game8ItemGate"
/* 801CAC00 001C7B40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CAC04 001C7B44  7C 08 03 A6 */	mtlr r0
/* 801CAC08 001C7B48  38 21 00 10 */	addi r1, r1, 0x10
/* 801CAC0C 001C7B4C  4E 80 00 20 */	blr 
.endfn "kill__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPQ24Game8ItemGate"

.fn "doAnimation__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CAC10 001C7B50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CAC14 001C7B54  7C 08 02 A6 */	mflr r0
/* 801CAC18 001C7B58  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CAC1C 001C7B5C  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CAC20 001C7B60  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801CAC24 001C7B64  7D 89 03 A6 */	mtctr r12
/* 801CAC28 001C7B68  4E 80 04 21 */	bctrl 
/* 801CAC2C 001C7B6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CAC30 001C7B70  7C 08 03 A6 */	mtlr r0
/* 801CAC34 001C7B74  38 21 00 10 */	addi r1, r1, 0x10
/* 801CAC38 001C7B78  4E 80 00 20 */	blr 
.endfn "doAnimation__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "doEntry__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CAC3C 001C7B7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CAC40 001C7B80  7C 08 02 A6 */	mflr r0
/* 801CAC44 001C7B84  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CAC48 001C7B88  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CAC4C 001C7B8C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801CAC50 001C7B90  7D 89 03 A6 */	mtctr r12
/* 801CAC54 001C7B94  4E 80 04 21 */	bctrl 
/* 801CAC58 001C7B98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CAC5C 001C7B9C  7C 08 03 A6 */	mtlr r0
/* 801CAC60 001C7BA0  38 21 00 10 */	addi r1, r1, 0x10
/* 801CAC64 001C7BA4  4E 80 00 20 */	blr 
.endfn "doEntry__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "doSetView__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fi", weak
/* 801CAC68 001C7BA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CAC6C 001C7BAC  7C 08 02 A6 */	mflr r0
/* 801CAC70 001C7BB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CAC74 001C7BB4  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CAC78 001C7BB8  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801CAC7C 001C7BBC  7D 89 03 A6 */	mtctr r12
/* 801CAC80 001C7BC0  4E 80 04 21 */	bctrl 
/* 801CAC84 001C7BC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CAC88 001C7BC8  7C 08 03 A6 */	mtlr r0
/* 801CAC8C 001C7BCC  38 21 00 10 */	addi r1, r1, 0x10
/* 801CAC90 001C7BD0  4E 80 00 20 */	blr 
.endfn "doSetView__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fi"

.fn "doViewCalc__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CAC94 001C7BD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CAC98 001C7BD8  7C 08 02 A6 */	mflr r0
/* 801CAC9C 001C7BDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CACA0 001C7BE0  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CACA4 001C7BE4  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 801CACA8 001C7BE8  7D 89 03 A6 */	mtctr r12
/* 801CACAC 001C7BEC  4E 80 04 21 */	bctrl 
/* 801CACB0 001C7BF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CACB4 001C7BF4  7C 08 03 A6 */	mtlr r0
/* 801CACB8 001C7BF8  38 21 00 10 */	addi r1, r1, 0x10
/* 801CACBC 001C7BFC  4E 80 00 20 */	blr 
.endfn "doViewCalc__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "doSimulation__Q24Game29NodeItemMgr<Q24Game8ItemGate>Ff", weak
/* 801CACC0 001C7C00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CACC4 001C7C04  7C 08 02 A6 */	mflr r0
/* 801CACC8 001C7C08  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CACCC 001C7C0C  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CACD0 001C7C10  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 801CACD4 001C7C14  7D 89 03 A6 */	mtctr r12
/* 801CACD8 001C7C18  4E 80 04 21 */	bctrl 
/* 801CACDC 001C7C1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CACE0 001C7C20  7C 08 03 A6 */	mtlr r0
/* 801CACE4 001C7C24  38 21 00 10 */	addi r1, r1, 0x10
/* 801CACE8 001C7C28  4E 80 00 20 */	blr 
.endfn "doSimulation__Q24Game29NodeItemMgr<Q24Game8ItemGate>Ff"

.fn "doDirectDraw__Q24Game29NodeItemMgr<Q24Game8ItemGate>FR8Graphics", weak
/* 801CACEC 001C7C2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CACF0 001C7C30  7C 08 02 A6 */	mflr r0
/* 801CACF4 001C7C34  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CACF8 001C7C38  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CACFC 001C7C3C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801CAD00 001C7C40  7D 89 03 A6 */	mtctr r12
/* 801CAD04 001C7C44  4E 80 04 21 */	bctrl 
/* 801CAD08 001C7C48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CAD0C 001C7C4C  7C 08 03 A6 */	mtlr r0
/* 801CAD10 001C7C50  38 21 00 10 */	addi r1, r1, 0x10
/* 801CAD14 001C7C54  4E 80 00 20 */	blr 
.endfn "doDirectDraw__Q24Game29NodeItemMgr<Q24Game8ItemGate>FR8Graphics"

.fn "onKeyEvent__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRCQ28SysShape8KeyEvent", weak
/* 801CAD18 001C7C58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CAD1C 001C7C5C  7C 08 02 A6 */	mflr r0
/* 801CAD20 001C7C60  7C 66 1B 78 */	mr r6, r3
/* 801CAD24 001C7C64  7C 85 23 78 */	mr r5, r4
/* 801CAD28 001C7C68  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CAD2C 001C7C6C  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801CAD30 001C7C70  28 03 00 00 */	cmplwi r3, 0
/* 801CAD34 001C7C74  41 82 00 18 */	beq .L_801CAD4C
/* 801CAD38 001C7C78  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAD3C 001C7C7C  7C C4 33 78 */	mr r4, r6
/* 801CAD40 001C7C80  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801CAD44 001C7C84  7D 89 03 A6 */	mtctr r12
/* 801CAD48 001C7C88  4E 80 04 21 */	bctrl 
.L_801CAD4C:
/* 801CAD4C 001C7C8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CAD50 001C7C90  7C 08 03 A6 */	mtlr r0
/* 801CAD54 001C7C94  38 21 00 10 */	addi r1, r1, 0x10
/* 801CAD58 001C7C98  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRCQ28SysShape8KeyEvent"

.fn "onDamage__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatef", weak
/* 801CAD5C 001C7C9C  4E 80 00 20 */	blr 
.endfn "onDamage__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatef"

.fn "onKeyEvent__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRCQ28SysShape8KeyEvent", weak
/* 801CAD60 001C7CA0  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRCQ28SysShape8KeyEvent"

.fn "onBounce__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ23Sys8Triangle", weak
/* 801CAD64 001C7CA4  4E 80 00 20 */	blr 
.endfn "onBounce__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ23Sys8Triangle"

.fn "onPlatCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9PlatEvent", weak
/* 801CAD68 001C7CA8  4E 80 00 20 */	blr 
.endfn "onPlatCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9PlatEvent"

.fn "onCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9CollEvent", weak
/* 801CAD6C 001C7CAC  4E 80 00 20 */	blr 
.endfn "onCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9CollEvent"

.fn "init__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ24Game8StateArg", weak
/* 801CAD70 001C7CB0  4E 80 00 20 */	blr 
.endfn "init__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ24Game8StateArg"

.fn "exec__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate", weak
/* 801CAD74 001C7CB4  4E 80 00 20 */	blr 
.endfn "exec__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"

.fn "cleanup__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate", weak
/* 801CAD78 001C7CB8  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"

.fn "resume__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate", weak
/* 801CAD7C 001C7CBC  4E 80 00 20 */	blr 
.endfn "resume__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"

.fn "restart__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate", weak
/* 801CAD80 001C7CC0  4E 80 00 20 */	blr 
.endfn "restart__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"

.fn "init__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGate", weak
/* 801CAD84 001C7CC4  4E 80 00 20 */	blr 
.endfn "init__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGate"

.fn "exec__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGate", weak
/* 801CAD88 001C7CC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CAD8C 001C7CCC  7C 08 02 A6 */	mflr r0
/* 801CAD90 001C7CD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CAD94 001C7CD4  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 801CAD98 001C7CD8  28 03 00 00 */	cmplwi r3, 0
/* 801CAD9C 001C7CDC  41 82 00 14 */	beq .L_801CADB0
/* 801CADA0 001C7CE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CADA4 001C7CE4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801CADA8 001C7CE8  7D 89 03 A6 */	mtctr r12
/* 801CADAC 001C7CEC  4E 80 04 21 */	bctrl 
.L_801CADB0:
/* 801CADB0 001C7CF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CADB4 001C7CF4  7C 08 03 A6 */	mtlr r0
/* 801CADB8 001C7CF8  38 21 00 10 */	addi r1, r1, 0x10
/* 801CADBC 001C7CFC  4E 80 00 20 */	blr 
.endfn "exec__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGate"

.fn "create__Q24Game30StateMachine<Q24Game8ItemGate>Fi", weak
/* 801CADC0 001C7D00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CADC4 001C7D04  7C 08 02 A6 */	mflr r0
/* 801CADC8 001C7D08  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CADCC 001C7D0C  38 00 00 00 */	li r0, 0
/* 801CADD0 001C7D10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CADD4 001C7D14  7C 7F 1B 78 */	mr r31, r3
/* 801CADD8 001C7D18  90 83 00 0C */	stw r4, 0xc(r3)
/* 801CADDC 001C7D1C  90 03 00 08 */	stw r0, 8(r3)
/* 801CADE0 001C7D20  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801CADE4 001C7D24  54 03 10 3A */	slwi r3, r0, 2
/* 801CADE8 001C7D28  4B E5 91 C5 */	bl __nwa__FUl
/* 801CADEC 001C7D2C  90 7F 00 04 */	stw r3, 4(r31)
/* 801CADF0 001C7D30  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801CADF4 001C7D34  54 03 10 3A */	slwi r3, r0, 2
/* 801CADF8 001C7D38  4B E5 91 B5 */	bl __nwa__FUl
/* 801CADFC 001C7D3C  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801CAE00 001C7D40  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801CAE04 001C7D44  54 03 10 3A */	slwi r3, r0, 2
/* 801CAE08 001C7D48  4B E5 91 A5 */	bl __nwa__FUl
/* 801CAE0C 001C7D4C  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801CAE10 001C7D50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CAE14 001C7D54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CAE18 001C7D58  7C 08 03 A6 */	mtlr r0
/* 801CAE1C 001C7D5C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CAE20 001C7D60  4E 80 00 20 */	blr 
.endfn "create__Q24Game30StateMachine<Q24Game8ItemGate>Fi"

.fn "get__31NodeObjectMgr<Q24Game8ItemGate>FPv", weak
/* 801CAE24 001C7D64  80 64 00 18 */	lwz r3, 0x18(r4)
/* 801CAE28 001C7D68  4E 80 00 20 */	blr 
.endfn "get__31NodeObjectMgr<Q24Game8ItemGate>FPv"

.fn "getNext__31NodeObjectMgr<Q24Game8ItemGate>FPv", weak
/* 801CAE2C 001C7D6C  80 64 00 04 */	lwz r3, 4(r4)
/* 801CAE30 001C7D70  4E 80 00 20 */	blr 
.endfn "getNext__31NodeObjectMgr<Q24Game8ItemGate>FPv"

.fn "getStart__31NodeObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801CAE34 001C7D74  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801CAE38 001C7D78  4E 80 00 20 */	blr 
.endfn "getStart__31NodeObjectMgr<Q24Game8ItemGate>Fv"

.fn "getEnd__31NodeObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801CAE3C 001C7D7C  38 60 00 00 */	li r3, 0
/* 801CAE40 001C7D80  4E 80 00 20 */	blr 
.endfn "getEnd__31NodeObjectMgr<Q24Game8ItemGate>Fv"

.fn "delNode__31NodeObjectMgr<Q24Game8ItemGate>FPQ24Game8ItemGate", weak
/* 801CAE44 001C7D84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CAE48 001C7D88  7C 08 02 A6 */	mflr r0
/* 801CAE4C 001C7D8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CAE50 001C7D90  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801CAE54 001C7D94  48 00 00 1C */	b .L_801CAE70
.L_801CAE58:
/* 801CAE58 001C7D98  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801CAE5C 001C7D9C  7C 00 20 40 */	cmplw r0, r4
/* 801CAE60 001C7DA0  40 82 00 0C */	bne .L_801CAE6C
/* 801CAE64 001C7DA4  48 24 67 6D */	bl del__5CNodeFv
/* 801CAE68 001C7DA8  48 00 00 10 */	b .L_801CAE78
.L_801CAE6C:
/* 801CAE6C 001C7DAC  80 63 00 04 */	lwz r3, 4(r3)
.L_801CAE70:
/* 801CAE70 001C7DB0  28 03 00 00 */	cmplwi r3, 0
/* 801CAE74 001C7DB4  40 82 FF E4 */	bne .L_801CAE58
.L_801CAE78:
/* 801CAE78 001C7DB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CAE7C 001C7DBC  7C 08 03 A6 */	mtlr r0
/* 801CAE80 001C7DC0  38 21 00 10 */	addi r1, r1, 0x10
/* 801CAE84 001C7DC4  4E 80 00 20 */	blr 
.endfn "delNode__31NodeObjectMgr<Q24Game8ItemGate>FPQ24Game8ItemGate"

.fn "resetMgr__31NodeObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801CAE88 001C7DC8  38 00 00 00 */	li r0, 0
/* 801CAE8C 001C7DCC  90 03 00 30 */	stw r0, 0x30(r3)
/* 801CAE90 001C7DD0  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801CAE94 001C7DD4  90 03 00 28 */	stw r0, 0x28(r3)
/* 801CAE98 001C7DD8  90 03 00 24 */	stw r0, 0x24(r3)
/* 801CAE9C 001C7DDC  4E 80 00 20 */	blr 
.endfn "resetMgr__31NodeObjectMgr<Q24Game8ItemGate>Fv"

.fn "doAnimation__27ObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801CAEA0 001C7DE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CAEA4 001C7DE4  7C 08 02 A6 */	mflr r0
/* 801CAEA8 001C7DE8  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
/* 801CAEAC 001C7DEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CAEB0 001C7DF0  38 00 00 00 */	li r0, 0
/* 801CAEB4 001C7DF4  38 84 5A 7C */	addi r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
/* 801CAEB8 001C7DF8  28 00 00 00 */	cmplwi r0, 0
/* 801CAEBC 001C7DFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CAEC0 001C7E00  90 81 00 08 */	stw r4, 8(r1)
/* 801CAEC4 001C7E04  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CAEC8 001C7E08  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CAECC 001C7E0C  40 82 00 1C */	bne .L_801CAEE8
/* 801CAED0 001C7E10  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAED4 001C7E14  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CAED8 001C7E18  7D 89 03 A6 */	mtctr r12
/* 801CAEDC 001C7E1C  4E 80 04 21 */	bctrl 
/* 801CAEE0 001C7E20  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CAEE4 001C7E24  48 00 01 70 */	b .L_801CB054
.L_801CAEE8:
/* 801CAEE8 001C7E28  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAEEC 001C7E2C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CAEF0 001C7E30  7D 89 03 A6 */	mtctr r12
/* 801CAEF4 001C7E34  4E 80 04 21 */	bctrl 
/* 801CAEF8 001C7E38  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CAEFC 001C7E3C  48 00 00 58 */	b .L_801CAF54
.L_801CAF00:
/* 801CAF00 001C7E40  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAF04 001C7E44  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAF08 001C7E48  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAF0C 001C7E4C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CAF10 001C7E50  7D 89 03 A6 */	mtctr r12
/* 801CAF14 001C7E54  4E 80 04 21 */	bctrl 
/* 801CAF18 001C7E58  7C 64 1B 78 */	mr r4, r3
/* 801CAF1C 001C7E5C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CAF20 001C7E60  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAF24 001C7E64  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CAF28 001C7E68  7D 89 03 A6 */	mtctr r12
/* 801CAF2C 001C7E6C  4E 80 04 21 */	bctrl 
/* 801CAF30 001C7E70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CAF34 001C7E74  40 82 01 20 */	bne .L_801CB054
/* 801CAF38 001C7E78  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAF3C 001C7E7C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAF40 001C7E80  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAF44 001C7E84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CAF48 001C7E88  7D 89 03 A6 */	mtctr r12
/* 801CAF4C 001C7E8C  4E 80 04 21 */	bctrl 
/* 801CAF50 001C7E90  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CAF54:
/* 801CAF54 001C7E94  81 81 00 08 */	lwz r12, 8(r1)
/* 801CAF58 001C7E98  38 61 00 08 */	addi r3, r1, 8
/* 801CAF5C 001C7E9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CAF60 001C7EA0  7D 89 03 A6 */	mtctr r12
/* 801CAF64 001C7EA4  4E 80 04 21 */	bctrl 
/* 801CAF68 001C7EA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CAF6C 001C7EAC  41 82 FF 94 */	beq .L_801CAF00
/* 801CAF70 001C7EB0  48 00 00 E4 */	b .L_801CB054
.L_801CAF74:
/* 801CAF74 001C7EB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAF78 001C7EB8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAF7C 001C7EBC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CAF80 001C7EC0  7D 89 03 A6 */	mtctr r12
/* 801CAF84 001C7EC4  4E 80 04 21 */	bctrl 
/* 801CAF88 001C7EC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAF8C 001C7ECC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801CAF90 001C7ED0  7D 89 03 A6 */	mtctr r12
/* 801CAF94 001C7ED4  4E 80 04 21 */	bctrl 
/* 801CAF98 001C7ED8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CAF9C 001C7EDC  28 00 00 00 */	cmplwi r0, 0
/* 801CAFA0 001C7EE0  40 82 00 24 */	bne .L_801CAFC4
/* 801CAFA4 001C7EE4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAFA8 001C7EE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAFAC 001C7EEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAFB0 001C7EF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CAFB4 001C7EF4  7D 89 03 A6 */	mtctr r12
/* 801CAFB8 001C7EF8  4E 80 04 21 */	bctrl 
/* 801CAFBC 001C7EFC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CAFC0 001C7F00  48 00 00 94 */	b .L_801CB054
.L_801CAFC4:
/* 801CAFC4 001C7F04  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAFC8 001C7F08  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAFCC 001C7F0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAFD0 001C7F10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CAFD4 001C7F14  7D 89 03 A6 */	mtctr r12
/* 801CAFD8 001C7F18  4E 80 04 21 */	bctrl 
/* 801CAFDC 001C7F1C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CAFE0 001C7F20  48 00 00 58 */	b .L_801CB038
.L_801CAFE4:
/* 801CAFE4 001C7F24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CAFE8 001C7F28  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CAFEC 001C7F2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CAFF0 001C7F30  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CAFF4 001C7F34  7D 89 03 A6 */	mtctr r12
/* 801CAFF8 001C7F38  4E 80 04 21 */	bctrl 
/* 801CAFFC 001C7F3C  7C 64 1B 78 */	mr r4, r3
/* 801CB000 001C7F40  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB004 001C7F44  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB008 001C7F48  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB00C 001C7F4C  7D 89 03 A6 */	mtctr r12
/* 801CB010 001C7F50  4E 80 04 21 */	bctrl 
/* 801CB014 001C7F54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB018 001C7F58  40 82 00 3C */	bne .L_801CB054
/* 801CB01C 001C7F5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB020 001C7F60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB024 001C7F64  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB028 001C7F68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB02C 001C7F6C  7D 89 03 A6 */	mtctr r12
/* 801CB030 001C7F70  4E 80 04 21 */	bctrl 
/* 801CB034 001C7F74  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB038:
/* 801CB038 001C7F78  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB03C 001C7F7C  38 61 00 08 */	addi r3, r1, 8
/* 801CB040 001C7F80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB044 001C7F84  7D 89 03 A6 */	mtctr r12
/* 801CB048 001C7F88  4E 80 04 21 */	bctrl 
/* 801CB04C 001C7F8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB050 001C7F90  41 82 FF 94 */	beq .L_801CAFE4
.L_801CB054:
/* 801CB054 001C7F94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB058 001C7F98  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB05C 001C7F9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CB060 001C7FA0  7D 89 03 A6 */	mtctr r12
/* 801CB064 001C7FA4  4E 80 04 21 */	bctrl 
/* 801CB068 001C7FA8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB06C 001C7FAC  7C 04 18 40 */	cmplw r4, r3
/* 801CB070 001C7FB0  40 82 FF 04 */	bne .L_801CAF74
/* 801CB074 001C7FB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CB078 001C7FB8  7C 08 03 A6 */	mtlr r0
/* 801CB07C 001C7FBC  38 21 00 20 */	addi r1, r1, 0x20
/* 801CB080 001C7FC0  4E 80 00 20 */	blr 
.endfn "doAnimation__27ObjectMgr<Q24Game8ItemGate>Fv"

.fn "doEntry__27ObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801CB084 001C7FC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CB088 001C7FC8  7C 08 02 A6 */	mflr r0
/* 801CB08C 001C7FCC  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
/* 801CB090 001C7FD0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CB094 001C7FD4  38 00 00 00 */	li r0, 0
/* 801CB098 001C7FD8  38 84 5A 7C */	addi r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
/* 801CB09C 001C7FDC  28 00 00 00 */	cmplwi r0, 0
/* 801CB0A0 001C7FE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CB0A4 001C7FE4  90 81 00 08 */	stw r4, 8(r1)
/* 801CB0A8 001C7FE8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CB0AC 001C7FEC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CB0B0 001C7FF0  40 82 00 1C */	bne .L_801CB0CC
/* 801CB0B4 001C7FF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB0B8 001C7FF8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CB0BC 001C7FFC  7D 89 03 A6 */	mtctr r12
/* 801CB0C0 001C8000  4E 80 04 21 */	bctrl 
/* 801CB0C4 001C8004  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB0C8 001C8008  48 00 01 70 */	b .L_801CB238
.L_801CB0CC:
/* 801CB0CC 001C800C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB0D0 001C8010  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CB0D4 001C8014  7D 89 03 A6 */	mtctr r12
/* 801CB0D8 001C8018  4E 80 04 21 */	bctrl 
/* 801CB0DC 001C801C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB0E0 001C8020  48 00 00 58 */	b .L_801CB138
.L_801CB0E4:
/* 801CB0E4 001C8024  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB0E8 001C8028  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB0EC 001C802C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB0F0 001C8030  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB0F4 001C8034  7D 89 03 A6 */	mtctr r12
/* 801CB0F8 001C8038  4E 80 04 21 */	bctrl 
/* 801CB0FC 001C803C  7C 64 1B 78 */	mr r4, r3
/* 801CB100 001C8040  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB104 001C8044  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB108 001C8048  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB10C 001C804C  7D 89 03 A6 */	mtctr r12
/* 801CB110 001C8050  4E 80 04 21 */	bctrl 
/* 801CB114 001C8054  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB118 001C8058  40 82 01 20 */	bne .L_801CB238
/* 801CB11C 001C805C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB120 001C8060  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB124 001C8064  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB128 001C8068  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB12C 001C806C  7D 89 03 A6 */	mtctr r12
/* 801CB130 001C8070  4E 80 04 21 */	bctrl 
/* 801CB134 001C8074  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB138:
/* 801CB138 001C8078  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB13C 001C807C  38 61 00 08 */	addi r3, r1, 8
/* 801CB140 001C8080  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB144 001C8084  7D 89 03 A6 */	mtctr r12
/* 801CB148 001C8088  4E 80 04 21 */	bctrl 
/* 801CB14C 001C808C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB150 001C8090  41 82 FF 94 */	beq .L_801CB0E4
/* 801CB154 001C8094  48 00 00 E4 */	b .L_801CB238
.L_801CB158:
/* 801CB158 001C8098  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB15C 001C809C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB160 001C80A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB164 001C80A4  7D 89 03 A6 */	mtctr r12
/* 801CB168 001C80A8  4E 80 04 21 */	bctrl 
/* 801CB16C 001C80AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB170 001C80B0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801CB174 001C80B4  7D 89 03 A6 */	mtctr r12
/* 801CB178 001C80B8  4E 80 04 21 */	bctrl 
/* 801CB17C 001C80BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CB180 001C80C0  28 00 00 00 */	cmplwi r0, 0
/* 801CB184 001C80C4  40 82 00 24 */	bne .L_801CB1A8
/* 801CB188 001C80C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB18C 001C80CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB190 001C80D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB194 001C80D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB198 001C80D8  7D 89 03 A6 */	mtctr r12
/* 801CB19C 001C80DC  4E 80 04 21 */	bctrl 
/* 801CB1A0 001C80E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB1A4 001C80E4  48 00 00 94 */	b .L_801CB238
.L_801CB1A8:
/* 801CB1A8 001C80E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB1AC 001C80EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB1B0 001C80F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB1B4 001C80F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB1B8 001C80F8  7D 89 03 A6 */	mtctr r12
/* 801CB1BC 001C80FC  4E 80 04 21 */	bctrl 
/* 801CB1C0 001C8100  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB1C4 001C8104  48 00 00 58 */	b .L_801CB21C
.L_801CB1C8:
/* 801CB1C8 001C8108  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB1CC 001C810C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB1D0 001C8110  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB1D4 001C8114  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB1D8 001C8118  7D 89 03 A6 */	mtctr r12
/* 801CB1DC 001C811C  4E 80 04 21 */	bctrl 
/* 801CB1E0 001C8120  7C 64 1B 78 */	mr r4, r3
/* 801CB1E4 001C8124  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB1E8 001C8128  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB1EC 001C812C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB1F0 001C8130  7D 89 03 A6 */	mtctr r12
/* 801CB1F4 001C8134  4E 80 04 21 */	bctrl 
/* 801CB1F8 001C8138  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB1FC 001C813C  40 82 00 3C */	bne .L_801CB238
/* 801CB200 001C8140  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB204 001C8144  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB208 001C8148  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB20C 001C814C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB210 001C8150  7D 89 03 A6 */	mtctr r12
/* 801CB214 001C8154  4E 80 04 21 */	bctrl 
/* 801CB218 001C8158  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB21C:
/* 801CB21C 001C815C  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB220 001C8160  38 61 00 08 */	addi r3, r1, 8
/* 801CB224 001C8164  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB228 001C8168  7D 89 03 A6 */	mtctr r12
/* 801CB22C 001C816C  4E 80 04 21 */	bctrl 
/* 801CB230 001C8170  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB234 001C8174  41 82 FF 94 */	beq .L_801CB1C8
.L_801CB238:
/* 801CB238 001C8178  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB23C 001C817C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB240 001C8180  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CB244 001C8184  7D 89 03 A6 */	mtctr r12
/* 801CB248 001C8188  4E 80 04 21 */	bctrl 
/* 801CB24C 001C818C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB250 001C8190  7C 04 18 40 */	cmplw r4, r3
/* 801CB254 001C8194  40 82 FF 04 */	bne .L_801CB158
/* 801CB258 001C8198  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CB25C 001C819C  7C 08 03 A6 */	mtlr r0
/* 801CB260 001C81A0  38 21 00 20 */	addi r1, r1, 0x20
/* 801CB264 001C81A4  4E 80 00 20 */	blr 
.endfn "doEntry__27ObjectMgr<Q24Game8ItemGate>Fv"

.fn "doSetView__27ObjectMgr<Q24Game8ItemGate>Fi", weak
/* 801CB268 001C81A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CB26C 001C81AC  7C 08 02 A6 */	mflr r0
/* 801CB270 001C81B0  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8ItemGate>"@ha
/* 801CB274 001C81B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CB278 001C81B8  38 00 00 00 */	li r0, 0
/* 801CB27C 001C81BC  38 A5 5A 7C */	addi r5, r5, "__vt__26Iterator<Q24Game8ItemGate>"@l
/* 801CB280 001C81C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CB284 001C81C4  28 00 00 00 */	cmplwi r0, 0
/* 801CB288 001C81C8  7C 9F 23 78 */	mr r31, r4
/* 801CB28C 001C81CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CB290 001C81D0  90 A1 00 08 */	stw r5, 8(r1)
/* 801CB294 001C81D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CB298 001C81D8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CB29C 001C81DC  40 82 00 1C */	bne .L_801CB2B8
/* 801CB2A0 001C81E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB2A4 001C81E4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CB2A8 001C81E8  7D 89 03 A6 */	mtctr r12
/* 801CB2AC 001C81EC  4E 80 04 21 */	bctrl 
/* 801CB2B0 001C81F0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB2B4 001C81F4  48 00 01 74 */	b .L_801CB428
.L_801CB2B8:
/* 801CB2B8 001C81F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB2BC 001C81FC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CB2C0 001C8200  7D 89 03 A6 */	mtctr r12
/* 801CB2C4 001C8204  4E 80 04 21 */	bctrl 
/* 801CB2C8 001C8208  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB2CC 001C820C  48 00 00 58 */	b .L_801CB324
.L_801CB2D0:
/* 801CB2D0 001C8210  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB2D4 001C8214  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB2D8 001C8218  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB2DC 001C821C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB2E0 001C8220  7D 89 03 A6 */	mtctr r12
/* 801CB2E4 001C8224  4E 80 04 21 */	bctrl 
/* 801CB2E8 001C8228  7C 64 1B 78 */	mr r4, r3
/* 801CB2EC 001C822C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB2F0 001C8230  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB2F4 001C8234  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB2F8 001C8238  7D 89 03 A6 */	mtctr r12
/* 801CB2FC 001C823C  4E 80 04 21 */	bctrl 
/* 801CB300 001C8240  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB304 001C8244  40 82 01 24 */	bne .L_801CB428
/* 801CB308 001C8248  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB30C 001C824C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB310 001C8250  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB314 001C8254  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB318 001C8258  7D 89 03 A6 */	mtctr r12
/* 801CB31C 001C825C  4E 80 04 21 */	bctrl 
/* 801CB320 001C8260  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB324:
/* 801CB324 001C8264  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB328 001C8268  38 61 00 08 */	addi r3, r1, 8
/* 801CB32C 001C826C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB330 001C8270  7D 89 03 A6 */	mtctr r12
/* 801CB334 001C8274  4E 80 04 21 */	bctrl 
/* 801CB338 001C8278  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB33C 001C827C  41 82 FF 94 */	beq .L_801CB2D0
/* 801CB340 001C8280  48 00 00 E8 */	b .L_801CB428
.L_801CB344:
/* 801CB344 001C8284  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB348 001C8288  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB34C 001C828C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB350 001C8290  7D 89 03 A6 */	mtctr r12
/* 801CB354 001C8294  4E 80 04 21 */	bctrl 
/* 801CB358 001C8298  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB35C 001C829C  7F E4 FB 78 */	mr r4, r31
/* 801CB360 001C82A0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801CB364 001C82A4  7D 89 03 A6 */	mtctr r12
/* 801CB368 001C82A8  4E 80 04 21 */	bctrl 
/* 801CB36C 001C82AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CB370 001C82B0  28 00 00 00 */	cmplwi r0, 0
/* 801CB374 001C82B4  40 82 00 24 */	bne .L_801CB398
/* 801CB378 001C82B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB37C 001C82BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB380 001C82C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB384 001C82C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB388 001C82C8  7D 89 03 A6 */	mtctr r12
/* 801CB38C 001C82CC  4E 80 04 21 */	bctrl 
/* 801CB390 001C82D0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB394 001C82D4  48 00 00 94 */	b .L_801CB428
.L_801CB398:
/* 801CB398 001C82D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB39C 001C82DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB3A0 001C82E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB3A4 001C82E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB3A8 001C82E8  7D 89 03 A6 */	mtctr r12
/* 801CB3AC 001C82EC  4E 80 04 21 */	bctrl 
/* 801CB3B0 001C82F0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB3B4 001C82F4  48 00 00 58 */	b .L_801CB40C
.L_801CB3B8:
/* 801CB3B8 001C82F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB3BC 001C82FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB3C0 001C8300  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB3C4 001C8304  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB3C8 001C8308  7D 89 03 A6 */	mtctr r12
/* 801CB3CC 001C830C  4E 80 04 21 */	bctrl 
/* 801CB3D0 001C8310  7C 64 1B 78 */	mr r4, r3
/* 801CB3D4 001C8314  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB3D8 001C8318  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB3DC 001C831C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB3E0 001C8320  7D 89 03 A6 */	mtctr r12
/* 801CB3E4 001C8324  4E 80 04 21 */	bctrl 
/* 801CB3E8 001C8328  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB3EC 001C832C  40 82 00 3C */	bne .L_801CB428
/* 801CB3F0 001C8330  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB3F4 001C8334  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB3F8 001C8338  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB3FC 001C833C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB400 001C8340  7D 89 03 A6 */	mtctr r12
/* 801CB404 001C8344  4E 80 04 21 */	bctrl 
/* 801CB408 001C8348  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB40C:
/* 801CB40C 001C834C  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB410 001C8350  38 61 00 08 */	addi r3, r1, 8
/* 801CB414 001C8354  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB418 001C8358  7D 89 03 A6 */	mtctr r12
/* 801CB41C 001C835C  4E 80 04 21 */	bctrl 
/* 801CB420 001C8360  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB424 001C8364  41 82 FF 94 */	beq .L_801CB3B8
.L_801CB428:
/* 801CB428 001C8368  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB42C 001C836C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB430 001C8370  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CB434 001C8374  7D 89 03 A6 */	mtctr r12
/* 801CB438 001C8378  4E 80 04 21 */	bctrl 
/* 801CB43C 001C837C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB440 001C8380  7C 04 18 40 */	cmplw r4, r3
/* 801CB444 001C8384  40 82 FF 00 */	bne .L_801CB344
/* 801CB448 001C8388  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CB44C 001C838C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CB450 001C8390  7C 08 03 A6 */	mtlr r0
/* 801CB454 001C8394  38 21 00 20 */	addi r1, r1, 0x20
/* 801CB458 001C8398  4E 80 00 20 */	blr 
.endfn "doSetView__27ObjectMgr<Q24Game8ItemGate>Fi"

.fn "doViewCalc__27ObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801CB45C 001C839C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CB460 001C83A0  7C 08 02 A6 */	mflr r0
/* 801CB464 001C83A4  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
/* 801CB468 001C83A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CB46C 001C83AC  38 00 00 00 */	li r0, 0
/* 801CB470 001C83B0  38 84 5A 7C */	addi r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
/* 801CB474 001C83B4  28 00 00 00 */	cmplwi r0, 0
/* 801CB478 001C83B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CB47C 001C83BC  90 81 00 08 */	stw r4, 8(r1)
/* 801CB480 001C83C0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CB484 001C83C4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CB488 001C83C8  40 82 00 1C */	bne .L_801CB4A4
/* 801CB48C 001C83CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB490 001C83D0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CB494 001C83D4  7D 89 03 A6 */	mtctr r12
/* 801CB498 001C83D8  4E 80 04 21 */	bctrl 
/* 801CB49C 001C83DC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB4A0 001C83E0  48 00 01 70 */	b .L_801CB610
.L_801CB4A4:
/* 801CB4A4 001C83E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB4A8 001C83E8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CB4AC 001C83EC  7D 89 03 A6 */	mtctr r12
/* 801CB4B0 001C83F0  4E 80 04 21 */	bctrl 
/* 801CB4B4 001C83F4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB4B8 001C83F8  48 00 00 58 */	b .L_801CB510
.L_801CB4BC:
/* 801CB4BC 001C83FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB4C0 001C8400  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB4C4 001C8404  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB4C8 001C8408  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB4CC 001C840C  7D 89 03 A6 */	mtctr r12
/* 801CB4D0 001C8410  4E 80 04 21 */	bctrl 
/* 801CB4D4 001C8414  7C 64 1B 78 */	mr r4, r3
/* 801CB4D8 001C8418  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB4DC 001C841C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB4E0 001C8420  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB4E4 001C8424  7D 89 03 A6 */	mtctr r12
/* 801CB4E8 001C8428  4E 80 04 21 */	bctrl 
/* 801CB4EC 001C842C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB4F0 001C8430  40 82 01 20 */	bne .L_801CB610
/* 801CB4F4 001C8434  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB4F8 001C8438  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB4FC 001C843C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB500 001C8440  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB504 001C8444  7D 89 03 A6 */	mtctr r12
/* 801CB508 001C8448  4E 80 04 21 */	bctrl 
/* 801CB50C 001C844C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB510:
/* 801CB510 001C8450  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB514 001C8454  38 61 00 08 */	addi r3, r1, 8
/* 801CB518 001C8458  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB51C 001C845C  7D 89 03 A6 */	mtctr r12
/* 801CB520 001C8460  4E 80 04 21 */	bctrl 
/* 801CB524 001C8464  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB528 001C8468  41 82 FF 94 */	beq .L_801CB4BC
/* 801CB52C 001C846C  48 00 00 E4 */	b .L_801CB610
.L_801CB530:
/* 801CB530 001C8470  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB534 001C8474  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB538 001C8478  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB53C 001C847C  7D 89 03 A6 */	mtctr r12
/* 801CB540 001C8480  4E 80 04 21 */	bctrl 
/* 801CB544 001C8484  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB548 001C8488  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801CB54C 001C848C  7D 89 03 A6 */	mtctr r12
/* 801CB550 001C8490  4E 80 04 21 */	bctrl 
/* 801CB554 001C8494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CB558 001C8498  28 00 00 00 */	cmplwi r0, 0
/* 801CB55C 001C849C  40 82 00 24 */	bne .L_801CB580
/* 801CB560 001C84A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB564 001C84A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB568 001C84A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB56C 001C84AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB570 001C84B0  7D 89 03 A6 */	mtctr r12
/* 801CB574 001C84B4  4E 80 04 21 */	bctrl 
/* 801CB578 001C84B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB57C 001C84BC  48 00 00 94 */	b .L_801CB610
.L_801CB580:
/* 801CB580 001C84C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB584 001C84C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB588 001C84C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB58C 001C84CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB590 001C84D0  7D 89 03 A6 */	mtctr r12
/* 801CB594 001C84D4  4E 80 04 21 */	bctrl 
/* 801CB598 001C84D8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB59C 001C84DC  48 00 00 58 */	b .L_801CB5F4
.L_801CB5A0:
/* 801CB5A0 001C84E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB5A4 001C84E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB5A8 001C84E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB5AC 001C84EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB5B0 001C84F0  7D 89 03 A6 */	mtctr r12
/* 801CB5B4 001C84F4  4E 80 04 21 */	bctrl 
/* 801CB5B8 001C84F8  7C 64 1B 78 */	mr r4, r3
/* 801CB5BC 001C84FC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB5C0 001C8500  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB5C4 001C8504  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB5C8 001C8508  7D 89 03 A6 */	mtctr r12
/* 801CB5CC 001C850C  4E 80 04 21 */	bctrl 
/* 801CB5D0 001C8510  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB5D4 001C8514  40 82 00 3C */	bne .L_801CB610
/* 801CB5D8 001C8518  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB5DC 001C851C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB5E0 001C8520  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB5E4 001C8524  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB5E8 001C8528  7D 89 03 A6 */	mtctr r12
/* 801CB5EC 001C852C  4E 80 04 21 */	bctrl 
/* 801CB5F0 001C8530  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB5F4:
/* 801CB5F4 001C8534  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB5F8 001C8538  38 61 00 08 */	addi r3, r1, 8
/* 801CB5FC 001C853C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB600 001C8540  7D 89 03 A6 */	mtctr r12
/* 801CB604 001C8544  4E 80 04 21 */	bctrl 
/* 801CB608 001C8548  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB60C 001C854C  41 82 FF 94 */	beq .L_801CB5A0
.L_801CB610:
/* 801CB610 001C8550  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB614 001C8554  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB618 001C8558  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CB61C 001C855C  7D 89 03 A6 */	mtctr r12
/* 801CB620 001C8560  4E 80 04 21 */	bctrl 
/* 801CB624 001C8564  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB628 001C8568  7C 04 18 40 */	cmplw r4, r3
/* 801CB62C 001C856C  40 82 FF 04 */	bne .L_801CB530
/* 801CB630 001C8570  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CB634 001C8574  7C 08 03 A6 */	mtlr r0
/* 801CB638 001C8578  38 21 00 20 */	addi r1, r1, 0x20
/* 801CB63C 001C857C  4E 80 00 20 */	blr 
.endfn "doViewCalc__27ObjectMgr<Q24Game8ItemGate>Fv"

.fn "doSimulation__27ObjectMgr<Q24Game8ItemGate>Ff", weak
/* 801CB640 001C8580  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CB644 001C8584  7C 08 02 A6 */	mflr r0
/* 801CB648 001C8588  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
/* 801CB64C 001C858C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CB650 001C8590  38 00 00 00 */	li r0, 0
/* 801CB654 001C8594  38 84 5A 7C */	addi r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
/* 801CB658 001C8598  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801CB65C 001C859C  FF E0 08 90 */	fmr f31, f1
/* 801CB660 001C85A0  28 00 00 00 */	cmplwi r0, 0
/* 801CB664 001C85A4  90 81 00 08 */	stw r4, 8(r1)
/* 801CB668 001C85A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CB66C 001C85AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CB670 001C85B0  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CB674 001C85B4  40 82 00 1C */	bne .L_801CB690
/* 801CB678 001C85B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB67C 001C85BC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CB680 001C85C0  7D 89 03 A6 */	mtctr r12
/* 801CB684 001C85C4  4E 80 04 21 */	bctrl 
/* 801CB688 001C85C8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB68C 001C85CC  48 00 01 74 */	b .L_801CB800
.L_801CB690:
/* 801CB690 001C85D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB694 001C85D4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CB698 001C85D8  7D 89 03 A6 */	mtctr r12
/* 801CB69C 001C85DC  4E 80 04 21 */	bctrl 
/* 801CB6A0 001C85E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB6A4 001C85E4  48 00 00 58 */	b .L_801CB6FC
.L_801CB6A8:
/* 801CB6A8 001C85E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB6AC 001C85EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB6B0 001C85F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB6B4 001C85F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB6B8 001C85F8  7D 89 03 A6 */	mtctr r12
/* 801CB6BC 001C85FC  4E 80 04 21 */	bctrl 
/* 801CB6C0 001C8600  7C 64 1B 78 */	mr r4, r3
/* 801CB6C4 001C8604  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB6C8 001C8608  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB6CC 001C860C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB6D0 001C8610  7D 89 03 A6 */	mtctr r12
/* 801CB6D4 001C8614  4E 80 04 21 */	bctrl 
/* 801CB6D8 001C8618  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB6DC 001C861C  40 82 01 24 */	bne .L_801CB800
/* 801CB6E0 001C8620  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB6E4 001C8624  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB6E8 001C8628  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB6EC 001C862C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB6F0 001C8630  7D 89 03 A6 */	mtctr r12
/* 801CB6F4 001C8634  4E 80 04 21 */	bctrl 
/* 801CB6F8 001C8638  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB6FC:
/* 801CB6FC 001C863C  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB700 001C8640  38 61 00 08 */	addi r3, r1, 8
/* 801CB704 001C8644  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB708 001C8648  7D 89 03 A6 */	mtctr r12
/* 801CB70C 001C864C  4E 80 04 21 */	bctrl 
/* 801CB710 001C8650  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB714 001C8654  41 82 FF 94 */	beq .L_801CB6A8
/* 801CB718 001C8658  48 00 00 E8 */	b .L_801CB800
.L_801CB71C:
/* 801CB71C 001C865C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB720 001C8660  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB724 001C8664  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB728 001C8668  7D 89 03 A6 */	mtctr r12
/* 801CB72C 001C866C  4E 80 04 21 */	bctrl 
/* 801CB730 001C8670  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB734 001C8674  FC 20 F8 90 */	fmr f1, f31
/* 801CB738 001C8678  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 801CB73C 001C867C  7D 89 03 A6 */	mtctr r12
/* 801CB740 001C8680  4E 80 04 21 */	bctrl 
/* 801CB744 001C8684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CB748 001C8688  28 00 00 00 */	cmplwi r0, 0
/* 801CB74C 001C868C  40 82 00 24 */	bne .L_801CB770
/* 801CB750 001C8690  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB754 001C8694  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB758 001C8698  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB75C 001C869C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB760 001C86A0  7D 89 03 A6 */	mtctr r12
/* 801CB764 001C86A4  4E 80 04 21 */	bctrl 
/* 801CB768 001C86A8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB76C 001C86AC  48 00 00 94 */	b .L_801CB800
.L_801CB770:
/* 801CB770 001C86B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB774 001C86B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB778 001C86B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB77C 001C86BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB780 001C86C0  7D 89 03 A6 */	mtctr r12
/* 801CB784 001C86C4  4E 80 04 21 */	bctrl 
/* 801CB788 001C86C8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB78C 001C86CC  48 00 00 58 */	b .L_801CB7E4
.L_801CB790:
/* 801CB790 001C86D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB794 001C86D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB798 001C86D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB79C 001C86DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB7A0 001C86E0  7D 89 03 A6 */	mtctr r12
/* 801CB7A4 001C86E4  4E 80 04 21 */	bctrl 
/* 801CB7A8 001C86E8  7C 64 1B 78 */	mr r4, r3
/* 801CB7AC 001C86EC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB7B0 001C86F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB7B4 001C86F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB7B8 001C86F8  7D 89 03 A6 */	mtctr r12
/* 801CB7BC 001C86FC  4E 80 04 21 */	bctrl 
/* 801CB7C0 001C8700  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB7C4 001C8704  40 82 00 3C */	bne .L_801CB800
/* 801CB7C8 001C8708  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB7CC 001C870C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB7D0 001C8710  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB7D4 001C8714  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB7D8 001C8718  7D 89 03 A6 */	mtctr r12
/* 801CB7DC 001C871C  4E 80 04 21 */	bctrl 
/* 801CB7E0 001C8720  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB7E4:
/* 801CB7E4 001C8724  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB7E8 001C8728  38 61 00 08 */	addi r3, r1, 8
/* 801CB7EC 001C872C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB7F0 001C8730  7D 89 03 A6 */	mtctr r12
/* 801CB7F4 001C8734  4E 80 04 21 */	bctrl 
/* 801CB7F8 001C8738  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB7FC 001C873C  41 82 FF 94 */	beq .L_801CB790
.L_801CB800:
/* 801CB800 001C8740  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB804 001C8744  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB808 001C8748  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CB80C 001C874C  7D 89 03 A6 */	mtctr r12
/* 801CB810 001C8750  4E 80 04 21 */	bctrl 
/* 801CB814 001C8754  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB818 001C8758  7C 04 18 40 */	cmplw r4, r3
/* 801CB81C 001C875C  40 82 FF 00 */	bne .L_801CB71C
/* 801CB820 001C8760  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CB824 001C8764  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801CB828 001C8768  7C 08 03 A6 */	mtlr r0
/* 801CB82C 001C876C  38 21 00 20 */	addi r1, r1, 0x20
/* 801CB830 001C8770  4E 80 00 20 */	blr 
.endfn "doSimulation__27ObjectMgr<Q24Game8ItemGate>Ff"

.fn "doDirectDraw__27ObjectMgr<Q24Game8ItemGate>FR8Graphics", weak
/* 801CB834 001C8774  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CB838 001C8778  7C 08 02 A6 */	mflr r0
/* 801CB83C 001C877C  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8ItemGate>"@ha
/* 801CB840 001C8780  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CB844 001C8784  38 00 00 00 */	li r0, 0
/* 801CB848 001C8788  38 A5 5A 7C */	addi r5, r5, "__vt__26Iterator<Q24Game8ItemGate>"@l
/* 801CB84C 001C878C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CB850 001C8790  28 00 00 00 */	cmplwi r0, 0
/* 801CB854 001C8794  7C 9F 23 78 */	mr r31, r4
/* 801CB858 001C8798  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CB85C 001C879C  90 A1 00 08 */	stw r5, 8(r1)
/* 801CB860 001C87A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CB864 001C87A4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CB868 001C87A8  40 82 00 1C */	bne .L_801CB884
/* 801CB86C 001C87AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB870 001C87B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CB874 001C87B4  7D 89 03 A6 */	mtctr r12
/* 801CB878 001C87B8  4E 80 04 21 */	bctrl 
/* 801CB87C 001C87BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB880 001C87C0  48 00 01 74 */	b .L_801CB9F4
.L_801CB884:
/* 801CB884 001C87C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB888 001C87C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CB88C 001C87CC  7D 89 03 A6 */	mtctr r12
/* 801CB890 001C87D0  4E 80 04 21 */	bctrl 
/* 801CB894 001C87D4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB898 001C87D8  48 00 00 58 */	b .L_801CB8F0
.L_801CB89C:
/* 801CB89C 001C87DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB8A0 001C87E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB8A4 001C87E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB8A8 001C87E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB8AC 001C87EC  7D 89 03 A6 */	mtctr r12
/* 801CB8B0 001C87F0  4E 80 04 21 */	bctrl 
/* 801CB8B4 001C87F4  7C 64 1B 78 */	mr r4, r3
/* 801CB8B8 001C87F8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB8BC 001C87FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB8C0 001C8800  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB8C4 001C8804  7D 89 03 A6 */	mtctr r12
/* 801CB8C8 001C8808  4E 80 04 21 */	bctrl 
/* 801CB8CC 001C880C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB8D0 001C8810  40 82 01 24 */	bne .L_801CB9F4
/* 801CB8D4 001C8814  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB8D8 001C8818  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB8DC 001C881C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB8E0 001C8820  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB8E4 001C8824  7D 89 03 A6 */	mtctr r12
/* 801CB8E8 001C8828  4E 80 04 21 */	bctrl 
/* 801CB8EC 001C882C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB8F0:
/* 801CB8F0 001C8830  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB8F4 001C8834  38 61 00 08 */	addi r3, r1, 8
/* 801CB8F8 001C8838  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB8FC 001C883C  7D 89 03 A6 */	mtctr r12
/* 801CB900 001C8840  4E 80 04 21 */	bctrl 
/* 801CB904 001C8844  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB908 001C8848  41 82 FF 94 */	beq .L_801CB89C
/* 801CB90C 001C884C  48 00 00 E8 */	b .L_801CB9F4
.L_801CB910:
/* 801CB910 001C8850  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB914 001C8854  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB918 001C8858  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB91C 001C885C  7D 89 03 A6 */	mtctr r12
/* 801CB920 001C8860  4E 80 04 21 */	bctrl 
/* 801CB924 001C8864  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB928 001C8868  7F E4 FB 78 */	mr r4, r31
/* 801CB92C 001C886C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801CB930 001C8870  7D 89 03 A6 */	mtctr r12
/* 801CB934 001C8874  4E 80 04 21 */	bctrl 
/* 801CB938 001C8878  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CB93C 001C887C  28 00 00 00 */	cmplwi r0, 0
/* 801CB940 001C8880  40 82 00 24 */	bne .L_801CB964
/* 801CB944 001C8884  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB948 001C8888  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB94C 001C888C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB950 001C8890  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB954 001C8894  7D 89 03 A6 */	mtctr r12
/* 801CB958 001C8898  4E 80 04 21 */	bctrl 
/* 801CB95C 001C889C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB960 001C88A0  48 00 00 94 */	b .L_801CB9F4
.L_801CB964:
/* 801CB964 001C88A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB968 001C88A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB96C 001C88AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB970 001C88B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB974 001C88B4  7D 89 03 A6 */	mtctr r12
/* 801CB978 001C88B8  4E 80 04 21 */	bctrl 
/* 801CB97C 001C88BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CB980 001C88C0  48 00 00 58 */	b .L_801CB9D8
.L_801CB984:
/* 801CB984 001C88C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB988 001C88C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB98C 001C88CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB990 001C88D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CB994 001C88D4  7D 89 03 A6 */	mtctr r12
/* 801CB998 001C88D8  4E 80 04 21 */	bctrl 
/* 801CB99C 001C88DC  7C 64 1B 78 */	mr r4, r3
/* 801CB9A0 001C88E0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CB9A4 001C88E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB9A8 001C88E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CB9AC 001C88EC  7D 89 03 A6 */	mtctr r12
/* 801CB9B0 001C88F0  4E 80 04 21 */	bctrl 
/* 801CB9B4 001C88F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB9B8 001C88F8  40 82 00 3C */	bne .L_801CB9F4
/* 801CB9BC 001C88FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB9C0 001C8900  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CB9C4 001C8904  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB9C8 001C8908  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CB9CC 001C890C  7D 89 03 A6 */	mtctr r12
/* 801CB9D0 001C8910  4E 80 04 21 */	bctrl 
/* 801CB9D4 001C8914  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CB9D8:
/* 801CB9D8 001C8918  81 81 00 08 */	lwz r12, 8(r1)
/* 801CB9DC 001C891C  38 61 00 08 */	addi r3, r1, 8
/* 801CB9E0 001C8920  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CB9E4 001C8924  7D 89 03 A6 */	mtctr r12
/* 801CB9E8 001C8928  4E 80 04 21 */	bctrl 
/* 801CB9EC 001C892C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CB9F0 001C8930  41 82 FF 94 */	beq .L_801CB984
.L_801CB9F4:
/* 801CB9F4 001C8934  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CB9F8 001C8938  81 83 00 00 */	lwz r12, 0(r3)
/* 801CB9FC 001C893C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CBA00 001C8940  7D 89 03 A6 */	mtctr r12
/* 801CBA04 001C8944  4E 80 04 21 */	bctrl 
/* 801CBA08 001C8948  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CBA0C 001C894C  7C 04 18 40 */	cmplw r4, r3
/* 801CBA10 001C8950  40 82 FF 00 */	bne .L_801CB910
/* 801CBA14 001C8954  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CBA18 001C8958  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CBA1C 001C895C  7C 08 03 A6 */	mtlr r0
/* 801CBA20 001C8960  38 21 00 20 */	addi r1, r1, 0x20
/* 801CBA24 001C8964  4E 80 00 20 */	blr 
.endfn "doDirectDraw__27ObjectMgr<Q24Game8ItemGate>FR8Graphics"

.fn "getObject__27Container<Q24Game8ItemGate>FPv", weak
/* 801CBA28 001C8968  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CBA2C 001C896C  7C 08 02 A6 */	mflr r0
/* 801CBA30 001C8970  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CBA34 001C8974  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBA38 001C8978  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CBA3C 001C897C  7D 89 03 A6 */	mtctr r12
/* 801CBA40 001C8980  4E 80 04 21 */	bctrl 
/* 801CBA44 001C8984  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CBA48 001C8988  7C 08 03 A6 */	mtlr r0
/* 801CBA4C 001C898C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CBA50 001C8990  4E 80 00 20 */	blr 
.endfn "getObject__27Container<Q24Game8ItemGate>FPv"

.fn "getAt__27Container<Q24Game8ItemGate>Fi", weak
/* 801CBA54 001C8994  38 60 00 00 */	li r3, 0
/* 801CBA58 001C8998  4E 80 00 20 */	blr 
.endfn "getAt__27Container<Q24Game8ItemGate>Fi"

.fn "getTo__27Container<Q24Game8ItemGate>Fv", weak
/* 801CBA5C 001C899C  38 60 00 00 */	li r3, 0
/* 801CBA60 001C89A0  4E 80 00 20 */	blr 
.endfn "getTo__27Container<Q24Game8ItemGate>Fv"

.fn "transit__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg", weak
/* 801CBA64 001C89A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CBA68 001C89A8  7C 08 02 A6 */	mflr r0
/* 801CBA6C 001C89AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CBA70 001C89B0  54 A0 10 3A */	slwi r0, r5, 2
/* 801CBA74 001C89B4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801CBA78 001C89B8  7C 7B 1B 78 */	mr r27, r3
/* 801CBA7C 001C89BC  7C 9C 23 78 */	mr r28, r4
/* 801CBA80 001C89C0  7C DD 33 78 */	mr r29, r6
/* 801CBA84 001C89C4  83 C4 01 DC */	lwz r30, 0x1dc(r4)
/* 801CBA88 001C89C8  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801CBA8C 001C89CC  28 1E 00 00 */	cmplwi r30, 0
/* 801CBA90 001C89D0  7F E3 00 2E */	lwzx r31, r3, r0
/* 801CBA94 001C89D4  41 82 00 20 */	beq .L_801CBAB4
/* 801CBA98 001C89D8  7F C3 F3 78 */	mr r3, r30
/* 801CBA9C 001C89DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801CBAA0 001C89E0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CBAA4 001C89E4  7D 89 03 A6 */	mtctr r12
/* 801CBAA8 001C89E8  4E 80 04 21 */	bctrl 
/* 801CBAAC 001C89EC  80 1E 00 04 */	lwz r0, 4(r30)
/* 801CBAB0 001C89F0  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801CBAB4:
/* 801CBAB4 001C89F4  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801CBAB8 001C89F8  7C 1F 00 00 */	cmpw r31, r0
/* 801CBABC 001C89FC  41 80 00 08 */	blt .L_801CBAC4
.L_801CBAC0:
/* 801CBAC0 001C8A00  48 00 00 00 */	b .L_801CBAC0
.L_801CBAC4:
/* 801CBAC4 001C8A04  80 7B 00 04 */	lwz r3, 4(r27)
/* 801CBAC8 001C8A08  57 E0 10 3A */	slwi r0, r31, 2
/* 801CBACC 001C8A0C  7F 84 E3 78 */	mr r4, r28
/* 801CBAD0 001C8A10  7F A5 EB 78 */	mr r5, r29
/* 801CBAD4 001C8A14  7C 63 00 2E */	lwzx r3, r3, r0
/* 801CBAD8 001C8A18  90 7C 01 DC */	stw r3, 0x1dc(r28)
/* 801CBADC 001C8A1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBAE0 001C8A20  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CBAE4 001C8A24  7D 89 03 A6 */	mtctr r12
/* 801CBAE8 001C8A28  4E 80 04 21 */	bctrl 
/* 801CBAEC 001C8A2C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801CBAF0 001C8A30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CBAF4 001C8A34  7C 08 03 A6 */	mtlr r0
/* 801CBAF8 001C8A38  38 21 00 20 */	addi r1, r1, 0x20
/* 801CBAFC 001C8A3C  4E 80 00 20 */	blr 
.endfn "transit__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"

.fn "registerState__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game26FSMState<Q24Game8ItemGate>", weak
/* 801CBB00 001C8A40  80 C3 00 08 */	lwz r6, 8(r3)
/* 801CBB04 001C8A44  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801CBB08 001C8A48  7C 06 00 00 */	cmpw r6, r0
/* 801CBB0C 001C8A4C  4C 80 00 20 */	bgelr 
/* 801CBB10 001C8A50  80 A3 00 04 */	lwz r5, 4(r3)
/* 801CBB14 001C8A54  54 C0 10 3A */	slwi r0, r6, 2
/* 801CBB18 001C8A58  7C 85 01 2E */	stwx r4, r5, r0
/* 801CBB1C 001C8A5C  80 A4 00 04 */	lwz r5, 4(r4)
/* 801CBB20 001C8A60  2C 05 00 00 */	cmpwi r5, 0
/* 801CBB24 001C8A64  41 80 00 10 */	blt .L_801CBB34
/* 801CBB28 001C8A68  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801CBB2C 001C8A6C  7C 05 00 00 */	cmpw r5, r0
/* 801CBB30 001C8A70  41 80 00 0C */	blt .L_801CBB3C
.L_801CBB34:
/* 801CBB34 001C8A74  38 00 00 00 */	li r0, 0
/* 801CBB38 001C8A78  48 00 00 08 */	b .L_801CBB40
.L_801CBB3C:
/* 801CBB3C 001C8A7C  38 00 00 01 */	li r0, 1
.L_801CBB40:
/* 801CBB40 001C8A80  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801CBB44 001C8A84  4D 82 00 20 */	beqlr 
/* 801CBB48 001C8A88  90 64 00 08 */	stw r3, 8(r4)
/* 801CBB4C 001C8A8C  80 03 00 08 */	lwz r0, 8(r3)
/* 801CBB50 001C8A90  80 C4 00 04 */	lwz r6, 4(r4)
/* 801CBB54 001C8A94  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801CBB58 001C8A98  54 00 10 3A */	slwi r0, r0, 2
/* 801CBB5C 001C8A9C  7C C5 01 2E */	stwx r6, r5, r0
/* 801CBB60 001C8AA0  80 04 00 04 */	lwz r0, 4(r4)
/* 801CBB64 001C8AA4  80 A3 00 08 */	lwz r5, 8(r3)
/* 801CBB68 001C8AA8  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801CBB6C 001C8AAC  54 00 10 3A */	slwi r0, r0, 2
/* 801CBB70 001C8AB0  7C A4 01 2E */	stwx r5, r4, r0
/* 801CBB74 001C8AB4  80 83 00 08 */	lwz r4, 8(r3)
/* 801CBB78 001C8AB8  38 04 00 01 */	addi r0, r4, 1
/* 801CBB7C 001C8ABC  90 03 00 08 */	stw r0, 8(r3)
/* 801CBB80 001C8AC0  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game30StateMachine<Q24Game8ItemGate>FPQ24Game26FSMState<Q24Game8ItemGate>"

.fn "platCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRQ24Game9PlatEvent", weak
/* 801CBB84 001C8AC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CBB88 001C8AC8  7C 08 02 A6 */	mflr r0
/* 801CBB8C 001C8ACC  7C 66 1B 78 */	mr r6, r3
/* 801CBB90 001C8AD0  7C 85 23 78 */	mr r5, r4
/* 801CBB94 001C8AD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CBB98 001C8AD8  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801CBB9C 001C8ADC  28 03 00 00 */	cmplwi r3, 0
/* 801CBBA0 001C8AE0  41 82 00 18 */	beq .L_801CBBB8
/* 801CBBA4 001C8AE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBBA8 001C8AE8  7C C4 33 78 */	mr r4, r6
/* 801CBBAC 001C8AEC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801CBBB0 001C8AF0  7D 89 03 A6 */	mtctr r12
/* 801CBBB4 001C8AF4  4E 80 04 21 */	bctrl 
.L_801CBBB8:
/* 801CBBB8 001C8AF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CBBBC 001C8AFC  7C 08 03 A6 */	mtlr r0
/* 801CBBC0 001C8B00  38 21 00 10 */	addi r1, r1, 0x10
/* 801CBBC4 001C8B04  4E 80 00 20 */	blr 
.endfn "platCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRQ24Game9PlatEvent"

.fn "collisionCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRQ24Game9CollEvent", weak
/* 801CBBC8 001C8B08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CBBCC 001C8B0C  7C 08 02 A6 */	mflr r0
/* 801CBBD0 001C8B10  7C 66 1B 78 */	mr r6, r3
/* 801CBBD4 001C8B14  7C 85 23 78 */	mr r5, r4
/* 801CBBD8 001C8B18  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CBBDC 001C8B1C  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801CBBE0 001C8B20  28 03 00 00 */	cmplwi r3, 0
/* 801CBBE4 001C8B24  41 82 00 18 */	beq .L_801CBBFC
/* 801CBBE8 001C8B28  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBBEC 001C8B2C  7C C4 33 78 */	mr r4, r6
/* 801CBBF0 001C8B30  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801CBBF4 001C8B34  7D 89 03 A6 */	mtctr r12
/* 801CBBF8 001C8B38  4E 80 04 21 */	bctrl 
.L_801CBBFC:
/* 801CBBFC 001C8B3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CBC00 001C8B40  7C 08 03 A6 */	mtlr r0
/* 801CBC04 001C8B44  38 21 00 10 */	addi r1, r1, 0x10
/* 801CBC08 001C8B48  4E 80 00 20 */	blr 
.endfn "collisionCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRQ24Game9CollEvent"

.fn "bounceCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FPQ23Sys8Triangle", weak
/* 801CBC0C 001C8B4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CBC10 001C8B50  7C 08 02 A6 */	mflr r0
/* 801CBC14 001C8B54  7C 66 1B 78 */	mr r6, r3
/* 801CBC18 001C8B58  7C 85 23 78 */	mr r5, r4
/* 801CBC1C 001C8B5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CBC20 001C8B60  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801CBC24 001C8B64  28 03 00 00 */	cmplwi r3, 0
/* 801CBC28 001C8B68  41 82 00 18 */	beq .L_801CBC40
/* 801CBC2C 001C8B6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBC30 001C8B70  7C C4 33 78 */	mr r4, r6
/* 801CBC34 001C8B74  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801CBC38 001C8B78  7D 89 03 A6 */	mtctr r12
/* 801CBC3C 001C8B7C  4E 80 04 21 */	bctrl 
.L_801CBC40:
/* 801CBC40 001C8B80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CBC44 001C8B84  7C 08 03 A6 */	mtlr r0
/* 801CBC48 001C8B88  38 21 00 10 */	addi r1, r1, 0x10
/* 801CBC4C 001C8B8C  4E 80 00 20 */	blr 
.endfn "bounceCallback__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FPQ23Sys8Triangle"

.fn "getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CBC50 001C8B90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CBC54 001C8B94  7C 08 02 A6 */	mflr r0
/* 801CBC58 001C8B98  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CBC5C 001C8B9C  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CBC60 001C8BA0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CBC64 001C8BA4  7D 89 03 A6 */	mtctr r12
/* 801CBC68 001C8BA8  4E 80 04 21 */	bctrl 
/* 801CBC6C 001C8BAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CBC70 001C8BB0  7C 08 03 A6 */	mtlr r0
/* 801CBC74 001C8BB4  38 21 00 10 */	addi r1, r1, 0x10
/* 801CBC78 001C8BB8  4E 80 00 20 */	blr 
.endfn "getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CBC7C 001C8BBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CBC80 001C8BC0  7C 08 02 A6 */	mflr r0
/* 801CBC84 001C8BC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CBC88 001C8BC8  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CBC8C 001C8BCC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CBC90 001C8BD0  7D 89 03 A6 */	mtctr r12
/* 801CBC94 001C8BD4  4E 80 04 21 */	bctrl 
/* 801CBC98 001C8BD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CBC9C 001C8BDC  7C 08 03 A6 */	mtlr r0
/* 801CBCA0 001C8BE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801CBCA4 001C8BE4  4E 80 00 20 */	blr 
.endfn "getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv", weak
/* 801CBCA8 001C8BE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CBCAC 001C8BEC  7C 08 02 A6 */	mflr r0
/* 801CBCB0 001C8BF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CBCB4 001C8BF4  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CBCB8 001C8BF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CBCBC 001C8BFC  7D 89 03 A6 */	mtctr r12
/* 801CBCC0 001C8C00  4E 80 04 21 */	bctrl 
/* 801CBCC4 001C8C04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CBCC8 001C8C08  7C 08 03 A6 */	mtlr r0
/* 801CBCCC 001C8C0C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CBCD0 001C8C10  4E 80 00 20 */	blr 
.endfn "getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"

.fn "get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv", weak
/* 801CBCD4 001C8C14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CBCD8 001C8C18  7C 08 02 A6 */	mflr r0
/* 801CBCDC 001C8C1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CBCE0 001C8C20  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CBCE4 001C8C24  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CBCE8 001C8C28  7D 89 03 A6 */	mtctr r12
/* 801CBCEC 001C8C2C  4E 80 04 21 */	bctrl 
/* 801CBCF0 001C8C30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CBCF4 001C8C34  7C 08 03 A6 */	mtlr r0
/* 801CBCF8 001C8C38  38 21 00 10 */	addi r1, r1, 0x10
/* 801CBCFC 001C8C3C  4E 80 00 20 */	blr 
.endfn "get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"

.fn "killAll__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CBD00 001C8C40  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801CBD04 001C8C44  7C 08 02 A6 */	mflr r0
/* 801CBD08 001C8C48  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
/* 801CBD0C 001C8C4C  38 63 00 4C */	addi r3, r3, 0x4c
/* 801CBD10 001C8C50  90 01 00 34 */	stw r0, 0x34(r1)
/* 801CBD14 001C8C54  38 00 00 00 */	li r0, 0
/* 801CBD18 001C8C58  38 84 5A 7C */	addi r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
/* 801CBD1C 001C8C5C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801CBD20 001C8C60  28 00 00 00 */	cmplwi r0, 0
/* 801CBD24 001C8C64  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801CBD28 001C8C68  90 81 00 10 */	stw r4, 0x10(r1)
/* 801CBD2C 001C8C6C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801CBD30 001C8C70  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CBD34 001C8C74  90 61 00 18 */	stw r3, 0x18(r1)
/* 801CBD38 001C8C78  40 82 00 1C */	bne .L_801CBD54
/* 801CBD3C 001C8C7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBD40 001C8C80  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CBD44 001C8C84  7D 89 03 A6 */	mtctr r12
/* 801CBD48 001C8C88  4E 80 04 21 */	bctrl 
/* 801CBD4C 001C8C8C  90 61 00 14 */	stw r3, 0x14(r1)
/* 801CBD50 001C8C90  48 00 00 8C */	b .L_801CBDDC
.L_801CBD54:
/* 801CBD54 001C8C94  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBD58 001C8C98  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CBD5C 001C8C9C  7D 89 03 A6 */	mtctr r12
/* 801CBD60 001C8CA0  4E 80 04 21 */	bctrl 
/* 801CBD64 001C8CA4  90 61 00 14 */	stw r3, 0x14(r1)
/* 801CBD68 001C8CA8  48 00 00 58 */	b .L_801CBDC0
.L_801CBD6C:
/* 801CBD6C 001C8CAC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801CBD70 001C8CB0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801CBD74 001C8CB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBD78 001C8CB8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CBD7C 001C8CBC  7D 89 03 A6 */	mtctr r12
/* 801CBD80 001C8CC0  4E 80 04 21 */	bctrl 
/* 801CBD84 001C8CC4  7C 64 1B 78 */	mr r4, r3
/* 801CBD88 001C8CC8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801CBD8C 001C8CCC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBD90 001C8CD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CBD94 001C8CD4  7D 89 03 A6 */	mtctr r12
/* 801CBD98 001C8CD8  4E 80 04 21 */	bctrl 
/* 801CBD9C 001C8CDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CBDA0 001C8CE0  40 82 00 3C */	bne .L_801CBDDC
/* 801CBDA4 001C8CE4  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801CBDA8 001C8CE8  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801CBDAC 001C8CEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBDB0 001C8CF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CBDB4 001C8CF4  7D 89 03 A6 */	mtctr r12
/* 801CBDB8 001C8CF8  4E 80 04 21 */	bctrl 
/* 801CBDBC 001C8CFC  90 61 00 14 */	stw r3, 0x14(r1)
.L_801CBDC0:
/* 801CBDC0 001C8D00  81 81 00 10 */	lwz r12, 0x10(r1)
/* 801CBDC4 001C8D04  38 61 00 10 */	addi r3, r1, 0x10
/* 801CBDC8 001C8D08  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CBDCC 001C8D0C  7D 89 03 A6 */	mtctr r12
/* 801CBDD0 001C8D10  4E 80 04 21 */	bctrl 
/* 801CBDD4 001C8D14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CBDD8 001C8D18  41 82 FF 94 */	beq .L_801CBD6C
.L_801CBDDC:
/* 801CBDDC 001C8D1C  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureKillArg@ha
/* 801CBDE0 001C8D20  3B E3 A2 D0 */	addi r31, r3, __vt__Q24Game15CreatureKillArg@l
/* 801CBDE4 001C8D24  48 00 01 24 */	b .L_801CBF08
.L_801CBDE8:
/* 801CBDE8 001C8D28  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801CBDEC 001C8D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBDF0 001C8D30  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CBDF4 001C8D34  7D 89 03 A6 */	mtctr r12
/* 801CBDF8 001C8D38  4E 80 04 21 */	bctrl 
/* 801CBDFC 001C8D3C  38 00 00 01 */	li r0, 1
/* 801CBE00 001C8D40  93 E1 00 08 */	stw r31, 8(r1)
/* 801CBE04 001C8D44  7C 7E 1B 78 */	mr r30, r3
/* 801CBE08 001C8D48  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CBE0C 001C8D4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBE10 001C8D50  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801CBE14 001C8D54  7D 89 03 A6 */	mtctr r12
/* 801CBE18 001C8D58  4E 80 04 21 */	bctrl 
/* 801CBE1C 001C8D5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CBE20 001C8D60  41 82 00 10 */	beq .L_801CBE30
/* 801CBE24 001C8D64  7F C3 F3 78 */	mr r3, r30
/* 801CBE28 001C8D68  38 81 00 08 */	addi r4, r1, 8
/* 801CBE2C 001C8D6C  4B F6 F2 C5 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_801CBE30:
/* 801CBE30 001C8D70  80 9E 01 7C */	lwz r4, 0x17c(r30)
/* 801CBE34 001C8D74  28 04 00 00 */	cmplwi r4, 0
/* 801CBE38 001C8D78  41 82 00 14 */	beq .L_801CBE4C
/* 801CBE3C 001C8D7C  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 801CBE40 001C8D80  28 03 00 00 */	cmplwi r3, 0
/* 801CBE44 001C8D84  41 82 00 08 */	beq .L_801CBE4C
/* 801CBE48 001C8D88  4B E5 AD DD */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_801CBE4C:
/* 801CBE4C 001C8D8C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801CBE50 001C8D90  28 00 00 00 */	cmplwi r0, 0
/* 801CBE54 001C8D94  40 82 00 24 */	bne .L_801CBE78
/* 801CBE58 001C8D98  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801CBE5C 001C8D9C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801CBE60 001C8DA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBE64 001C8DA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CBE68 001C8DA8  7D 89 03 A6 */	mtctr r12
/* 801CBE6C 001C8DAC  4E 80 04 21 */	bctrl 
/* 801CBE70 001C8DB0  90 61 00 14 */	stw r3, 0x14(r1)
/* 801CBE74 001C8DB4  48 00 00 94 */	b .L_801CBF08
.L_801CBE78:
/* 801CBE78 001C8DB8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801CBE7C 001C8DBC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801CBE80 001C8DC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBE84 001C8DC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CBE88 001C8DC8  7D 89 03 A6 */	mtctr r12
/* 801CBE8C 001C8DCC  4E 80 04 21 */	bctrl 
/* 801CBE90 001C8DD0  90 61 00 14 */	stw r3, 0x14(r1)
/* 801CBE94 001C8DD4  48 00 00 58 */	b .L_801CBEEC
.L_801CBE98:
/* 801CBE98 001C8DD8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801CBE9C 001C8DDC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801CBEA0 001C8DE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBEA4 001C8DE4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CBEA8 001C8DE8  7D 89 03 A6 */	mtctr r12
/* 801CBEAC 001C8DEC  4E 80 04 21 */	bctrl 
/* 801CBEB0 001C8DF0  7C 64 1B 78 */	mr r4, r3
/* 801CBEB4 001C8DF4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801CBEB8 001C8DF8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBEBC 001C8DFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CBEC0 001C8E00  7D 89 03 A6 */	mtctr r12
/* 801CBEC4 001C8E04  4E 80 04 21 */	bctrl 
/* 801CBEC8 001C8E08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CBECC 001C8E0C  40 82 00 3C */	bne .L_801CBF08
/* 801CBED0 001C8E10  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801CBED4 001C8E14  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801CBED8 001C8E18  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBEDC 001C8E1C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CBEE0 001C8E20  7D 89 03 A6 */	mtctr r12
/* 801CBEE4 001C8E24  4E 80 04 21 */	bctrl 
/* 801CBEE8 001C8E28  90 61 00 14 */	stw r3, 0x14(r1)
.L_801CBEEC:
/* 801CBEEC 001C8E2C  81 81 00 10 */	lwz r12, 0x10(r1)
/* 801CBEF0 001C8E30  38 61 00 10 */	addi r3, r1, 0x10
/* 801CBEF4 001C8E34  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CBEF8 001C8E38  7D 89 03 A6 */	mtctr r12
/* 801CBEFC 001C8E3C  4E 80 04 21 */	bctrl 
/* 801CBF00 001C8E40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CBF04 001C8E44  41 82 FF 94 */	beq .L_801CBE98
.L_801CBF08:
/* 801CBF08 001C8E48  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801CBF0C 001C8E4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CBF10 001C8E50  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CBF14 001C8E54  7D 89 03 A6 */	mtctr r12
/* 801CBF18 001C8E58  4E 80 04 21 */	bctrl 
/* 801CBF1C 001C8E5C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801CBF20 001C8E60  7C 04 18 40 */	cmplw r4, r3
/* 801CBF24 001C8E64  40 82 FE C4 */	bne .L_801CBDE8
/* 801CBF28 001C8E68  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801CBF2C 001C8E6C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801CBF30 001C8E70  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801CBF34 001C8E74  7C 08 03 A6 */	mtlr r0
/* 801CBF38 001C8E78  38 21 00 30 */	addi r1, r1, 0x30
/* 801CBF3C 001C8E7C  4E 80 00 20 */	blr 
.endfn "killAll__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn __sinit_itemGate_cpp, local
/* 801CBF40 001C8E80  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801CBF44 001C8E84  38 00 FF FF */	li r0, -1
/* 801CBF48 001C8E88  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801CBF4C 001C8E8C  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 801CBF50 001C8E90  90 0D 94 28 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 801CBF54 001C8E94  D4 03 65 58 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 801CBF58 001C8E98  D0 0D 94 2C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 801CBF5C 001C8E9C  D0 03 00 04 */	stfs f0, 4(r3)
/* 801CBF60 001C8EA0  D0 03 00 08 */	stfs f0, 8(r3)
/* 801CBF64 001C8EA4  4E 80 00 20 */	blr 
.endfn __sinit_itemGate_cpp

.fn "@376@onKeyEvent__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRCQ28SysShape8KeyEvent", weak
/* 801CBF68 001C8EA8  38 63 FE 88 */	addi r3, r3, -376
/* 801CBF6C 001C8EAC  4B FF ED AC */	b "onKeyEvent__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRCQ28SysShape8KeyEvent"
.endfn "@376@onKeyEvent__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>FRCQ28SysShape8KeyEvent"

.fn "@376@onKeyEvent__Q24Game8ItemGateFRCQ28SysShape8KeyEvent", weak
/* 801CBF70 001C8EB0  38 63 FE 88 */	addi r3, r3, -376
/* 801CBF74 001C8EB4  4B FF BF 68 */	b onKeyEvent__Q24Game8ItemGateFRCQ28SysShape8KeyEvent
.endfn "@376@onKeyEvent__Q24Game8ItemGateFRCQ28SysShape8KeyEvent"

.fn "@4@__dt__Q23efx7TEgateAFv", weak
/* 801CBF78 001C8EB8  38 63 FF FC */	addi r3, r3, -4
/* 801CBF7C 001C8EBC  4B FF E6 C4 */	b __dt__Q23efx7TEgateAFv
.endfn "@4@__dt__Q23efx7TEgateAFv"

.fn "@28@resetMgr__31NodeObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801CBF80 001C8EC0  38 63 FF E4 */	addi r3, r3, -28
/* 801CBF84 001C8EC4  4B FF EF 04 */	b "resetMgr__31NodeObjectMgr<Q24Game8ItemGate>Fv"
.endfn "@28@resetMgr__31NodeObjectMgr<Q24Game8ItemGate>Fv"

.fn "@28@doDirectDraw__27ObjectMgr<Q24Game8ItemGate>FR8Graphics", weak
/* 801CBF88 001C8EC8  38 63 FF E4 */	addi r3, r3, -28
/* 801CBF8C 001C8ECC  4B FF F8 A8 */	b "doDirectDraw__27ObjectMgr<Q24Game8ItemGate>FR8Graphics"
.endfn "@28@doDirectDraw__27ObjectMgr<Q24Game8ItemGate>FR8Graphics"

.fn "@28@doSimulation__27ObjectMgr<Q24Game8ItemGate>Ff", weak
/* 801CBF90 001C8ED0  38 63 FF E4 */	addi r3, r3, -28
/* 801CBF94 001C8ED4  4B FF F6 AC */	b "doSimulation__27ObjectMgr<Q24Game8ItemGate>Ff"
.endfn "@28@doSimulation__27ObjectMgr<Q24Game8ItemGate>Ff"

.fn "@28@doViewCalc__27ObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801CBF98 001C8ED8  38 63 FF E4 */	addi r3, r3, -28
/* 801CBF9C 001C8EDC  4B FF F4 C0 */	b "doViewCalc__27ObjectMgr<Q24Game8ItemGate>Fv"
.endfn "@28@doViewCalc__27ObjectMgr<Q24Game8ItemGate>Fv"

.fn "@28@doSetView__27ObjectMgr<Q24Game8ItemGate>Fi", weak
/* 801CBFA0 001C8EE0  38 63 FF E4 */	addi r3, r3, -28
/* 801CBFA4 001C8EE4  4B FF F2 C4 */	b "doSetView__27ObjectMgr<Q24Game8ItemGate>Fi"
.endfn "@28@doSetView__27ObjectMgr<Q24Game8ItemGate>Fi"

.fn "@28@doEntry__27ObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801CBFA8 001C8EE8  38 63 FF E4 */	addi r3, r3, -28
/* 801CBFAC 001C8EEC  4B FF F0 D8 */	b "doEntry__27ObjectMgr<Q24Game8ItemGate>Fv"
.endfn "@28@doEntry__27ObjectMgr<Q24Game8ItemGate>Fv"

.fn "@28@doAnimation__27ObjectMgr<Q24Game8ItemGate>Fv", weak
/* 801CBFB0 001C8EF0  38 63 FF E4 */	addi r3, r3, -28
/* 801CBFB4 001C8EF4  4B FF EE EC */	b "doAnimation__27ObjectMgr<Q24Game8ItemGate>Fv"
.endfn "@28@doAnimation__27ObjectMgr<Q24Game8ItemGate>Fv"

.fn "@48@__dt__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CBFB8 001C8EF8  38 63 FF D0 */	addi r3, r3, -48
/* 801CBFBC 001C8EFC  4B FF DE A8 */	b "__dt__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
.endfn "@48@__dt__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "@48@getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CBFC0 001C8F00  38 63 FF D0 */	addi r3, r3, -48
/* 801CBFC4 001C8F04  4B FF FC 8C */	b "getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
.endfn "@48@getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "@48@getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv", weak
/* 801CBFC8 001C8F08  38 63 FF D0 */	addi r3, r3, -48
/* 801CBFCC 001C8F0C  4B FF FC B0 */	b "getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
.endfn "@48@getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"

.fn "@48@getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv", weak
/* 801CBFD0 001C8F10  38 63 FF D0 */	addi r3, r3, -48
/* 801CBFD4 001C8F14  4B FF FC D4 */	b "getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
.endfn "@48@getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"

.fn "@48@get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv", weak
/* 801CBFD8 001C8F18  38 63 FF D0 */	addi r3, r3, -48
/* 801CBFDC 001C8F1C  4B FF FC F8 */	b "get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
.endfn "@48@get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"

.fn "@48@__dt__Q34Game15ItemDengekiGate3MgrFv", weak
/* 801CBFE0 001C8F20  38 63 FF D0 */	addi r3, r3, -48
/* 801CBFE4 001C8F24  4B FF E3 E8 */	b __dt__Q34Game15ItemDengekiGate3MgrFv
.endfn "@48@__dt__Q34Game15ItemDengekiGate3MgrFv"
