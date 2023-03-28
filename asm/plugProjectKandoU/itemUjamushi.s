.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_itemUjamushi_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80481D40, local
	.skip 0xC
.endobj lbl_80481D40
.balign 4
.obj lbl_80481D4C, local
	.asciz "itemUjamushi"
.endobj lbl_80481D4C
.balign 4
.obj lbl_80481D5C, local
	.asciz "BoidParms"
.endobj lbl_80481D5C
.balign 4
.obj lbl_80481D68, local
	.asciz "Cohension"
.endobj lbl_80481D68
.balign 4
.obj lbl_80481D74, local
	.asciz "Alignment"
.endobj lbl_80481D74
.balign 4
.obj lbl_80481D80, local
	.asciz "Separation"
.endobj lbl_80481D80
.balign 4
.obj lbl_80481D8C, local
	.asciz "Collision"
.endobj lbl_80481D8C
.balign 4
.obj lbl_80481D98, local
	.asciz "MaxSpeed"
.endobj lbl_80481D98
.balign 4
.obj lbl_80481DA4, local
	.asciz "Distance"
.endobj lbl_80481DA4
.balign 4
.obj lbl_80481DB0, local
	.asciz "Rotation/s"
.endobj lbl_80481DB0
.balign 4
.obj lbl_80481DBC, local
	.asciz "RandomAngle"
.endobj lbl_80481DBC
.balign 4
.obj lbl_80481DC8, local
	.asciz "itemUjamushi.cpp"
.endobj lbl_80481DC8
.balign 4
.obj lbl_80481DDC, local
	.asciz "P2Assert"
.endobj lbl_80481DDC
.balign 4
.obj lbl_80481DE8, local
	.asciz "\t# num parms\r\n"
.endobj lbl_80481DE8
.balign 4
.obj lbl_80481DF8, local
	.asciz "UjaParms"
.endobj lbl_80481DF8
.balign 4
.obj lbl_80481E04, local # Shift-JIS
	.4byte 0x955C8EA6
	.4byte 0x83588350
	.4byte 0x815B838B
	.byte 0x00
.endobj lbl_80481E04
.balign 4
.obj lbl_80481E14, local # Shift-JIS
	.4byte 0x93E4204D
	.4byte 0x756C7469
	.4byte 0x706C7900
.endobj lbl_80481E14
.balign 4
.obj lbl_80481E20, local # Shift-JIS
	.4byte 0x8382815B
	.4byte 0x83568387
	.4byte 0x839391AC
	.byte 0x93,0x78,0x00
.endobj lbl_80481E20
.balign 4
.obj lbl_80481E30, local # Shift-JIS
	.4byte 0x835F8381
	.4byte 0x8362834E
	.2byte 0x0A00
.endobj lbl_80481E30
.balign 4
.obj lbl_80481E3C, local
	.asciz "flockMgr.h"
.endobj lbl_80481E3C
.balign 4
.obj lbl_80481E48, local
	.asciz "Ujamushi"
.endobj lbl_80481E48
.balign 4
.obj lbl_80481E54, local
	.asciz "user/Kando/objects/ujamushi"
.endobj lbl_80481E54
.balign 4
.obj lbl_80481E70, local
	.asciz "ujamushi_poly.bmd"
.endobj lbl_80481E70
.balign 4
.obj lbl_80481E84, local
	.asciz "ujamushi_bill.bmd"
.endobj lbl_80481E84
.balign 4
.obj lbl_80481E98, local
	.asciz "texts.szs"
.endobj lbl_80481E98
.balign 4
.obj lbl_80481EA4, local
	.asciz "parms.txt"
.endobj lbl_80481EA4
.balign 4
.obj lbl_80481EB0, local
	.asciz "ujamushi"
.endobj lbl_80481EB0
.balign 4
.obj lbl_80481EBC, local # Shift-JIS
	.4byte 0x092382A4
	.4byte 0x82B682E1
	.4byte 0x89A49094
	.4byte 0x0D0A0000
.endobj lbl_80481EBC
.balign 4
.obj lbl_80481ECC, local
	.asciz "ItemUjamushi::InitArg"
.endobj lbl_80481ECC
.balign 4
.obj lbl_80481EE4, local
	.asciz "CreatureKillArg"
.endobj lbl_80481EE4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game12ItemUjamushi7InitArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q34Game12ItemUjamushi7InitArgFv
.endobj __vt__Q34Game12ItemUjamushi7InitArg
.obj __vt__15GenUjamushiParm, weak
	.4byte 0
	.4byte 0
	.4byte getShapeID__Q24Game11GenItemParmFv
.endobj __vt__15GenUjamushiParm
.obj __vt__Q34Game12ItemUjamushi8DigState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg
	.4byte exec__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4Item
	.4byte cleanup__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4Item
	.4byte "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
	.4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game12ItemUjamushi8DigState
.obj __vt__Q34Game12ItemUjamushi11ActiveState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg
	.4byte exec__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4Item
	.4byte cleanup__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4Item
	.4byte "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
	.4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game12ItemUjamushi11ActiveState
.obj __vt__Q34Game12ItemUjamushi9WaitState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg
	.4byte exec__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4Item
	.4byte cleanup__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4Item
	.4byte "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
	.4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game12ItemUjamushi9WaitState
.obj __vt__Q34Game12ItemUjamushi3Mgr, global
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doEntry__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doSetView__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "doViewCalc__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doSimulation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Ff"
	.4byte "doDirectDraw__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"
	.4byte doSimpleDraw__Q34Game12ItemUjamushi3MgrFP8Viewport
	.4byte loadResources__Q24Game11BaseItemMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "initDependency__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "killAll__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
	.4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
	.4byte onLoadResources__Q34Game12ItemUjamushi3MgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte generatorGetID__Q34Game12ItemUjamushi3MgrFv
	.4byte "generatorBirth__Q34Game12ItemUjamushi3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q34Game12ItemUjamushi3MgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q34Game12ItemUjamushi3MgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q34Game12ItemUjamushi3MgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q34Game12ItemUjamushi3MgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game12ItemUjamushi3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__37Container<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "@48@getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "@48@getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "@48@getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "@48@get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "getAt__37Container<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "getTo__37Container<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "kill__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte __dt__Q34Game12ItemUjamushi3MgrFv
	.4byte getCaveName__Q34Game12ItemUjamushi3MgrFi
	.4byte getCaveID__Q34Game12ItemUjamushi3MgrFPc
.endobj __vt__Q34Game12ItemUjamushi3Mgr
.obj "__vt__36Iterator<Q34Game12ItemUjamushi4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "first__36Iterator<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "next__36Iterator<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "isDone__36Iterator<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "__ml__36Iterator<Q34Game12ItemUjamushi4Item>Fv"
.endobj "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"
.obj "__vt__37Container<Q34Game12ItemUjamushi4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__37Container<Q34Game12ItemUjamushi4Item>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__37Container<Q34Game12ItemUjamushi4Item>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__37Container<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "getTo__37Container<Q34Game12ItemUjamushi4Item>Fv"
.endobj "__vt__37Container<Q34Game12ItemUjamushi4Item>"
.obj "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__37Container<Q34Game12ItemUjamushi4Item>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__37Container<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "getTo__37Container<Q34Game12ItemUjamushi4Item>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "@28@doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "@28@doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "@28@doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "@28@doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff"
	.4byte "@28@doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff"
	.4byte "doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"
.endobj "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"
.obj "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__39TObjectNode<Q34Game12ItemUjamushi4Item>Fv"
	.4byte getChildCount__5CNodeFv
.endobj "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"
.obj "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__37Container<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "getNext__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "getStart__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "getEnd__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "get__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "getAt__37Container<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "getTo__37Container<Q34Game12ItemUjamushi4Item>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "@28@doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "@28@doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "@28@doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "@28@doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff"
	.4byte "@28@doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff"
	.4byte "doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"
	.4byte "resetMgr__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
.endobj "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"
.obj "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doEntry__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doSetView__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "doViewCalc__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "doSimulation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Ff"
	.4byte "doDirectDraw__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__Q24Game11BaseItemMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "initDependency__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "killAll__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
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
	.4byte "@48@__dt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__37Container<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "@48@getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "@48@getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "@48@getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "@48@get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "getAt__37Container<Q34Game12ItemUjamushi4Item>Fi"
	.4byte "getTo__37Container<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "kill__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
	.4byte "getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	.4byte "__dt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
.endobj "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"
.obj __vt__Q34Game12ItemUjamushi4Item, global
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
	.4byte onInit__Q34Game12ItemUjamushi4ItemFPQ24Game15CreatureInitArg
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
	.4byte getFlockMgr__Q34Game12ItemUjamushi4ItemFv
	.4byte onStartCapture__Q24Game8CreatureFv
	.4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
	.4byte onEndCapture__Q24Game8CreatureFv
	.4byte isAtari__Q24Game8CreatureFv
	.4byte setAtari__Q24Game8CreatureFb
	.4byte isAlive__Q24Game8CreatureFv
	.4byte setAlive__Q24Game8CreatureFb
	.4byte isCollisionFlick__Q34Game12ItemUjamushi4ItemFv
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
	.4byte "bounceCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9PlatEvent"
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
	.4byte ignoreAtari__Q34Game12ItemUjamushi4ItemFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game8BaseItemFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game8BaseItemFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q34Game12ItemUjamushi4ItemFv
	.4byte doAI__Q34Game12ItemUjamushi4ItemFv
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q24Game8BaseItemFv
	.4byte do_updateLOD__Q24Game8BaseItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q24Game8BaseItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q34Game12ItemUjamushi4ItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q34Game12ItemUjamushi4ItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q34Game12ItemUjamushi4ItemFv
	.4byte "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"
	.4byte doSimpleDraw__Q34Game12ItemUjamushi4ItemFP8Viewport
.endobj __vt__Q34Game12ItemUjamushi4Item
.obj __vt__Q44Game12ItemUjamushi4Item10DummyShape, weak
	.4byte 0
	.4byte 0
	.4byte getMatrix__Q44Game12ItemUjamushi4Item10DummyShapeFi
	.4byte isModel__Q28SysShape9MtxObjectFv
.endobj __vt__Q44Game12ItemUjamushi4Item10DummyShape
.obj "__vt__Q24Game35ItemFSM<Q34Game12ItemUjamushi4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "start__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "transit__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game35ItemFSM<Q34Game12ItemUjamushi4Item>"
.obj "__vt__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "start__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "transit__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>"
.obj "__vt__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>", weak
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
	.4byte "bounceCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>Fv"
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
	.4byte "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"
.endobj "__vt__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>"
.obj __vt__Q34Game12ItemUjamushi5State, weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "cleanup__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
	.4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game12ItemUjamushi5State
.obj "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "cleanup__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
	.4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
.endobj "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"
.obj "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "cleanup__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"
.obj __vt__Q34Game12ItemUjamushi3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12ItemUjamushi3FSMFPQ34Game12ItemUjamushi4Item
	.4byte "start__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
	.4byte "transit__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
.endobj __vt__Q34Game12ItemUjamushi3FSM
.obj __vt__Q34Game12ItemUjamushi6UjaMgr, global
	.4byte 0
	.4byte 0
	.4byte "getMaxObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "getNumObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "isFlagAlive__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "getFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "killFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPQ24Game6TFlock"
	.4byte do_update__Q34Game12ItemUjamushi6UjaMgrFv
	.4byte do_update_boundSphere__Q34Game12ItemUjamushi6UjaMgrFv
	.4byte doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai
	.4byte isWeed__Q24Game12BaseFlockMgrFi
	.4byte fear__Q24Game12BaseFlockMgrFi
	.4byte 0
	.4byte 0
	.4byte "@32@__dt__Q34Game12ItemUjamushi6UjaMgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__36Container<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "@32@getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "@32@getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "@32@getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "@32@get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "getAt__36Container<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "getTo__36Container<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte __dt__Q34Game12ItemUjamushi6UjaMgrFv
.endobj __vt__Q34Game12ItemUjamushi6UjaMgr
.obj "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__36Container<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__36Container<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "getTo__36Container<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "@28@doEntry__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "@28@doSetView__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "@28@doViewCalc__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "@28@doSimulation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"
	.4byte "@28@doDirectDraw__36ObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "doEntry__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "doSetView__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "doViewCalc__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "doSimulation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"
	.4byte "doDirectDraw__36ObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"
.endobj "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"
.obj "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__36Container<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "getNext__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "getStart__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "getEnd__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "get__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "getAt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "getTo__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "@28@doEntry__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "@28@doSetView__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "@28@doViewCalc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "@28@doSimulation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"
	.4byte "@28@doDirectDraw__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "doEntry__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "doSetView__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "doViewCalc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "doSimulation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"
	.4byte "doDirectDraw__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"
	.4byte "birth__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "resetMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "clearMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "onAlloc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endobj "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"
.obj "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>", weak
	.4byte 0
	.4byte 0
	.4byte "getMaxObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "getNumObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "isFlagAlive__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "getFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "killFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPQ24Game6TFlock"
	.4byte do_update__Q24Game12BaseFlockMgrFv
	.4byte 0
	.4byte doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai
	.4byte isWeed__Q24Game12BaseFlockMgrFi
	.4byte fear__Q24Game12BaseFlockMgrFi
	.4byte 0
	.4byte 0
	.4byte "@32@__dt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__36Container<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "@32@getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "@32@getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "@32@getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "@32@get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "getAt__36Container<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "getTo__36Container<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte "getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "__dt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endobj "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"
.obj "__vt__36Container<Q34Game12ItemUjamushi3Uja>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__36Container<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__36Container<Q34Game12ItemUjamushi3Uja>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__36Container<Q34Game12ItemUjamushi3Uja>Fi"
	.4byte "getTo__36Container<Q34Game12ItemUjamushi3Uja>Fv"
.endobj "__vt__36Container<Q34Game12ItemUjamushi3Uja>"
.obj "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>", weak
	.4byte 0
	.4byte 0
	.4byte "first__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "next__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "isDone__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
	.4byte "__ml__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
.endobj "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"
.obj __vt__Q34Game12ItemUjamushi3Uja, global
	.4byte 0
	.4byte 0
	.4byte makeMatrix__Q34Game12ItemUjamushi3UjaFv
	.4byte isVisible__Q34Game12ItemUjamushi3UjaFv
	.4byte isWeed__Q24Game6TFlockFv
	.4byte fear__Q24Game6TFlockFv
	.4byte getRadius__Q24Game6TFlockFv
	.4byte damaged__Q34Game12ItemUjamushi3UjaFf
	.4byte constructor__Q24Game6TFlockFv
.endobj __vt__Q34Game12ItemUjamushi3Uja
.obj __vt__Q24Game6TFlock, weak
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte isVisible__Q24Game6TFlockFv
	.4byte isWeed__Q24Game6TFlockFv
	.4byte fear__Q24Game6TFlockFv
	.4byte getRadius__Q24Game6TFlockFv
	.4byte damaged__Q24Game6TFlockFf
	.4byte constructor__Q24Game6TFlockFv
.endobj __vt__Q24Game6TFlock
.obj __vt__Q44Game12ItemUjamushi13BoidParameter5TNode, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q44Game12ItemUjamushi13BoidParameter5TNodeFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q44Game12ItemUjamushi13BoidParameter5TNode
.obj __vt__Q34Game12ItemUjamushi13BoidParameter, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game12ItemUjamushi13BoidParameterFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q34Game12ItemUjamushi13BoidParameter

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj mgr__Q24Game12ItemUjamushi, global
	.skip 0x4
.endobj mgr__Q24Game12ItemUjamushi

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80519D90, local
	.float 0.27
.endobj lbl_80519D90
.obj lbl_80519D94, local
	.float 0.0
.endobj lbl_80519D94
.obj lbl_80519D98, local
	.float 10.0
.endobj lbl_80519D98
.obj lbl_80519D9C, local
	.float 0.15
.endobj lbl_80519D9C
.obj lbl_80519DA0, local
	.float 1.0
.endobj lbl_80519DA0
.balign 4
.obj lbl_80519DA4, local
	.asciz "Bounds"
.endobj lbl_80519DA4
.balign 4
.obj lbl_80519DAC, local
	.asciz "Target"
.endobj lbl_80519DAC
.balign 4
.obj lbl_80519DB4, local
	.asciz "Random"
.endobj lbl_80519DB4
.balign 4
.obj lbl_80519DBC, local
	.float 1.5
.endobj lbl_80519DBC
.balign 4
.obj lbl_80519DC0, local
	.asciz "Gohome"
.endobj lbl_80519DC0
.balign 4
.obj lbl_80519DC8, local
	.asciz "Piki"
.endobj lbl_80519DC8
.balign 4
.obj lbl_80519DD0, local
	.float 0.2
.endobj lbl_80519DD0
.balign 4
.obj lbl_80519DD4, local
	.asciz "Navi"
.endobj lbl_80519DD4
.balign 4
.obj lbl_80519DDC, local
	.float 0.1
.endobj lbl_80519DDC
.obj lbl_80519DE0, local
	.float 30.0
.endobj lbl_80519DE0
.obj lbl_80519DE4, local
	.float 200.0
.endobj lbl_80519DE4
.balign 4
.obj lbl_80519DE8, local
	.asciz "Fov"
.endobj lbl_80519DE8
.balign 4
.obj lbl_80519DEC, local
	.float 180.0
.endobj lbl_80519DEC
.obj lbl_80519DF0, local
	.float 50.0
.endobj lbl_80519DF0
.obj lbl_80519DF4, local
	.float 1000.0
.endobj lbl_80519DF4
.obj lbl_80519DF8, local
	.float 1080.0
.endobj lbl_80519DF8
.obj lbl_80519DFC, local
	.float 16.0
.endobj lbl_80519DFC
.obj lbl_80519E00, local
	.float 0.3
.endobj lbl_80519E00
.balign 4
.obj lbl_80519E04, local # Shift-JIS
	.4byte 0x83898343
	.4byte 0x83740000
.endobj lbl_80519E04
.balign 4
.obj lbl_80519E0C, local
	.float 600.0
.endobj lbl_80519E0C
.obj lbl_80519E10, local
	.float 0.5
.endobj lbl_80519E10
.obj lbl_80519E14, local
	.float 32768.0
.endobj lbl_80519E14
.obj lbl_80519E18, local # tau
	.float 6.2831855
.endobj lbl_80519E18
.obj lbl_80519E1C, local
	.float 100.0
.endobj lbl_80519E1C
.balign 8
.obj lbl_80519E20, local
	.8byte 0x4330000080000000
.endobj lbl_80519E20
.obj lbl_80519E28, local
	.float 12800.0
.endobj lbl_80519E28
.obj lbl_80519E2C, local
	.float 60.0
.endobj lbl_80519E2C
.obj lbl_80519E30, local
	.float 4.0
.endobj lbl_80519E30
.obj lbl_80519E34, local # pi
	.float 3.1415927
.endobj lbl_80519E34
.obj lbl_80519E38, local
	.float 20.0
.endobj lbl_80519E38
.obj lbl_80519E3C, local
	.float 0.14
.endobj lbl_80519E3C
.obj lbl_80519E40, local
	.float -325.9493
.endobj lbl_80519E40
.obj lbl_80519E44, local
	.float 325.9493
.endobj lbl_80519E44
.obj lbl_80519E48, local # half-pi
	.float 1.5707964
.endobj lbl_80519E48
.obj lbl_80519E4C, local
	.float -15.0
.endobj lbl_80519E4C
.balign 4
.obj lbl_80519E50, local
	.asciz "AI PIKI"
.endobj lbl_80519E50
.balign 4
.obj lbl_80519E58, local
	.float 1280.0
.endobj lbl_80519E58
.balign 4
.obj lbl_80519E5C, local
	.asciz "AI ALN"
.endobj lbl_80519E5C
.balign 4
.obj lbl_80519E64, local
	.float 2.0
.endobj lbl_80519E64
.obj lbl_80519E68, local
	.float 0.0055555557
.endobj lbl_80519E68
.obj lbl_80519E6C, local
	.float 8.0
.endobj lbl_80519E6C
.obj lbl_80519E70, local
	.float 0.8
.endobj lbl_80519E70
.obj lbl_80519E74, local
	.float 6.0
.endobj lbl_80519E74
.obj lbl_80519E78, local
	.float -1.0
.endobj lbl_80519E78
.obj lbl_80519E7C, local
	.float 40.0
.endobj lbl_80519E7C
.obj lbl_80519E80, local
	.float 72.0
.endobj lbl_80519E80
.obj lbl_80519E84, local
	.float 0.99
.endobj lbl_80519E84
.obj lbl_80519E88, local
	.float 560.0
.endobj lbl_80519E88
.obj lbl_80519E8C, local
	.float 120.0
.endobj lbl_80519E8C
.balign 4
.obj lbl_80519E90, local
	.asciz "ujaAI"
.endobj lbl_80519E90
.balign 4
.obj lbl_80519E98, local
	.float 500.0
.endobj lbl_80519E98
.obj lbl_80519E9C, local
	.float 90.0
.endobj lbl_80519E9C
.obj lbl_80519EA0, local
	.float 0.4
.endobj lbl_80519EA0
.obj lbl_80519EA4, local
	.float 3.0
.endobj lbl_80519EA4
.balign 4
.obj lbl_80519EA8, local
	.asciz "arc.szs"
.endobj lbl_80519EA8
.balign 4
.obj lbl_80519EB0, local
	.float 0.35
.endobj lbl_80519EB0

.section .sbss2, "", @nobits # 0x80520E40 - 0x80520ED8
.balign 8
.obj lbl_80520E80, local
	.skip 0x4
.endobj lbl_80520E80

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game12ItemUjamushi9BoidParmsFv, global
/* 80205A28 00202968  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80205A2C 0020296C  7C 08 02 A6 */	mflr r0
/* 80205A30 00202970  90 01 00 14 */	stw r0, 0x14(r1)
/* 80205A34 00202974  7C 80 07 35 */	extsh. r0, r4
/* 80205A38 00202978  3C 80 80 48 */	lis r4, lbl_80481D40@ha
/* 80205A3C 0020297C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80205A40 00202980  3B E4 1D 40 */	addi r31, r4, lbl_80481D40@l
/* 80205A44 00202984  93 C1 00 08 */	stw r30, 8(r1)
/* 80205A48 00202988  7C 7E 1B 78 */	mr r30, r3
/* 80205A4C 0020298C  41 82 00 0C */	beq .L_80205A58
/* 80205A50 00202990  38 1E 02 64 */	addi r0, r30, 0x264
/* 80205A54 00202994  90 1E 00 00 */	stw r0, 0(r30)
.L_80205A58:
/* 80205A58 00202998  38 00 00 00 */	li r0, 0
/* 80205A5C 0020299C  3C A0 70 30 */	lis r5, 0x70303030@ha
/* 80205A60 002029A0  90 1E 00 04 */	stw r0, 4(r30)
/* 80205A64 002029A4  38 1F 00 1C */	addi r0, r31, 0x1c
/* 80205A68 002029A8  7F C4 F3 78 */	mr r4, r30
/* 80205A6C 002029AC  38 7E 00 0C */	addi r3, r30, 0xc
/* 80205A70 002029B0  90 1E 00 08 */	stw r0, 8(r30)
/* 80205A74 002029B4  38 A5 30 30 */	addi r5, r5, 0x70303030@l
/* 80205A78 002029B8  38 DF 00 28 */	addi r6, r31, 0x28
/* 80205A7C 002029BC  48 20 DB DD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205A80 002029C0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205A84 002029C4  3C A0 70 30 */	lis r5, 0x70303031@ha
/* 80205A88 002029C8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205A8C 002029CC  C0 02 BA 30 */	lfs f0, lbl_80519D90@sda21(r2)
/* 80205A90 002029D0  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80205A94 002029D4  7F C4 F3 78 */	mr r4, r30
/* 80205A98 002029D8  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205A9C 002029DC  38 7E 00 34 */	addi r3, r30, 0x34
/* 80205AA0 002029E0  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 80205AA4 002029E4  38 A5 30 31 */	addi r5, r5, 0x70303031@l
/* 80205AA8 002029E8  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80205AAC 002029EC  38 DF 00 34 */	addi r6, r31, 0x34
/* 80205AB0 002029F0  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 80205AB4 002029F4  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 80205AB8 002029F8  48 20 DB A1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205ABC 002029FC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205AC0 00202A00  3C A0 70 30 */	lis r5, 0x70303032@ha
/* 80205AC4 00202A04  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205AC8 00202A08  C0 02 BA 3C */	lfs f0, lbl_80519D9C@sda21(r2)
/* 80205ACC 00202A0C  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80205AD0 00202A10  7F C4 F3 78 */	mr r4, r30
/* 80205AD4 00202A14  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205AD8 00202A18  38 7E 00 5C */	addi r3, r30, 0x5c
/* 80205ADC 00202A1C  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80205AE0 00202A20  38 A5 30 32 */	addi r5, r5, 0x70303032@l
/* 80205AE4 00202A24  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80205AE8 00202A28  38 DF 00 40 */	addi r6, r31, 0x40
/* 80205AEC 00202A2C  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 80205AF0 00202A30  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 80205AF4 00202A34  48 20 DB 65 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205AF8 00202A38  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205AFC 00202A3C  3C A0 70 30 */	lis r5, 0x70303033@ha
/* 80205B00 00202A40  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205B04 00202A44  C0 02 BA 40 */	lfs f0, lbl_80519DA0@sda21(r2)
/* 80205B08 00202A48  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 80205B0C 00202A4C  7F C4 F3 78 */	mr r4, r30
/* 80205B10 00202A50  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205B14 00202A54  38 7E 00 84 */	addi r3, r30, 0x84
/* 80205B18 00202A58  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 80205B1C 00202A5C  38 A5 30 33 */	addi r5, r5, 0x70303033@l
/* 80205B20 00202A60  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80205B24 00202A64  38 C2 BA 44 */	addi r6, r2, lbl_80519DA4@sda21
/* 80205B28 00202A68  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 80205B2C 00202A6C  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 80205B30 00202A70  48 20 DB 29 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205B34 00202A74  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205B38 00202A78  3C A0 70 30 */	lis r5, 0x70303034@ha
/* 80205B3C 00202A7C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205B40 00202A80  C0 02 BA 40 */	lfs f0, lbl_80519DA0@sda21(r2)
/* 80205B44 00202A84  90 1E 00 84 */	stw r0, 0x84(r30)
/* 80205B48 00202A88  7F C4 F3 78 */	mr r4, r30
/* 80205B4C 00202A8C  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205B50 00202A90  38 7E 00 AC */	addi r3, r30, 0xac
/* 80205B54 00202A94  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 80205B58 00202A98  38 A5 30 34 */	addi r5, r5, 0x70303034@l
/* 80205B5C 00202A9C  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80205B60 00202AA0  38 C2 BA 4C */	addi r6, r2, lbl_80519DAC@sda21
/* 80205B64 00202AA4  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 80205B68 00202AA8  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 80205B6C 00202AAC  48 20 DA ED */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205B70 00202AB0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205B74 00202AB4  3C A0 70 30 */	lis r5, 0x70303035@ha
/* 80205B78 00202AB8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205B7C 00202ABC  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205B80 00202AC0  90 1E 00 AC */	stw r0, 0xac(r30)
/* 80205B84 00202AC4  7F C4 F3 78 */	mr r4, r30
/* 80205B88 00202AC8  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80205B8C 00202ACC  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 80205B90 00202AD0  D0 3E 00 C4 */	stfs f1, 0xc4(r30)
/* 80205B94 00202AD4  38 A5 30 35 */	addi r5, r5, 0x70303035@l
/* 80205B98 00202AD8  38 C2 BA 54 */	addi r6, r2, lbl_80519DB4@sda21
/* 80205B9C 00202ADC  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 80205BA0 00202AE0  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 80205BA4 00202AE4  48 20 DA B5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205BA8 00202AE8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205BAC 00202AEC  3C A0 70 30 */	lis r5, 0x70303036@ha
/* 80205BB0 00202AF0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205BB4 00202AF4  C0 02 BA 5C */	lfs f0, lbl_80519DBC@sda21(r2)
/* 80205BB8 00202AF8  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 80205BBC 00202AFC  7F C4 F3 78 */	mr r4, r30
/* 80205BC0 00202B00  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205BC4 00202B04  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80205BC8 00202B08  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 80205BCC 00202B0C  38 A5 30 36 */	addi r5, r5, 0x70303036@l
/* 80205BD0 00202B10  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80205BD4 00202B14  38 C2 BA 60 */	addi r6, r2, lbl_80519DC0@sda21
/* 80205BD8 00202B18  D0 3E 00 F4 */	stfs f1, 0xf4(r30)
/* 80205BDC 00202B1C  D0 1E 00 F8 */	stfs f0, 0xf8(r30)
/* 80205BE0 00202B20  48 20 DA 79 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205BE4 00202B24  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205BE8 00202B28  3C A0 70 30 */	lis r5, 0x70303038@ha
/* 80205BEC 00202B2C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205BF0 00202B30  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205BF4 00202B34  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 80205BF8 00202B38  7F C4 F3 78 */	mr r4, r30
/* 80205BFC 00202B3C  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80205C00 00202B40  38 7E 01 24 */	addi r3, r30, 0x124
/* 80205C04 00202B44  D0 3E 01 14 */	stfs f1, 0x114(r30)
/* 80205C08 00202B48  38 A5 30 38 */	addi r5, r5, 0x70303038@l
/* 80205C0C 00202B4C  38 C2 BA 68 */	addi r6, r2, lbl_80519DC8@sda21
/* 80205C10 00202B50  D0 3E 01 1C */	stfs f1, 0x11c(r30)
/* 80205C14 00202B54  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 80205C18 00202B58  48 20 DA 41 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205C1C 00202B5C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205C20 00202B60  3C A0 70 30 */	lis r5, 0x70303039@ha
/* 80205C24 00202B64  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205C28 00202B68  C0 02 BA 70 */	lfs f0, lbl_80519DD0@sda21(r2)
/* 80205C2C 00202B6C  90 1E 01 24 */	stw r0, 0x124(r30)
/* 80205C30 00202B70  7F C4 F3 78 */	mr r4, r30
/* 80205C34 00202B74  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205C38 00202B78  38 7E 01 4C */	addi r3, r30, 0x14c
/* 80205C3C 00202B7C  D0 1E 01 3C */	stfs f0, 0x13c(r30)
/* 80205C40 00202B80  38 A5 30 39 */	addi r5, r5, 0x70303039@l
/* 80205C44 00202B84  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80205C48 00202B88  38 C2 BA 74 */	addi r6, r2, lbl_80519DD4@sda21
/* 80205C4C 00202B8C  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 80205C50 00202B90  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 80205C54 00202B94  48 20 DA 05 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205C58 00202B98  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205C5C 00202B9C  3C A0 70 30 */	lis r5, 0x70303130@ha
/* 80205C60 00202BA0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205C64 00202BA4  C0 02 BA 7C */	lfs f0, lbl_80519DDC@sda21(r2)
/* 80205C68 00202BA8  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 80205C6C 00202BAC  7F C4 F3 78 */	mr r4, r30
/* 80205C70 00202BB0  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205C74 00202BB4  38 7E 01 74 */	addi r3, r30, 0x174
/* 80205C78 00202BB8  D0 1E 01 64 */	stfs f0, 0x164(r30)
/* 80205C7C 00202BBC  38 A5 31 30 */	addi r5, r5, 0x70303130@l
/* 80205C80 00202BC0  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80205C84 00202BC4  38 DF 00 4C */	addi r6, r31, 0x4c
/* 80205C88 00202BC8  D0 3E 01 6C */	stfs f1, 0x16c(r30)
/* 80205C8C 00202BCC  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 80205C90 00202BD0  48 20 D9 C9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205C94 00202BD4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205C98 00202BD8  3C A0 70 30 */	lis r5, 0x70303131@ha
/* 80205C9C 00202BDC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205CA0 00202BE0  C0 22 BA 38 */	lfs f1, lbl_80519D98@sda21(r2)
/* 80205CA4 00202BE4  90 1E 01 74 */	stw r0, 0x174(r30)
/* 80205CA8 00202BE8  7F C4 F3 78 */	mr r4, r30
/* 80205CAC 00202BEC  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80205CB0 00202BF0  38 7E 01 9C */	addi r3, r30, 0x19c
/* 80205CB4 00202BF4  D0 3E 01 8C */	stfs f1, 0x18c(r30)
/* 80205CB8 00202BF8  38 A5 31 31 */	addi r5, r5, 0x70303131@l
/* 80205CBC 00202BFC  38 DF 00 58 */	addi r6, r31, 0x58
/* 80205CC0 00202C00  D0 1E 01 94 */	stfs f0, 0x194(r30)
/* 80205CC4 00202C04  D0 3E 01 98 */	stfs f1, 0x198(r30)
/* 80205CC8 00202C08  48 20 D9 91 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205CCC 00202C0C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205CD0 00202C10  3C A0 70 30 */	lis r5, 0x70303132@ha
/* 80205CD4 00202C14  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205CD8 00202C18  C0 02 BA 80 */	lfs f0, lbl_80519DE0@sda21(r2)
/* 80205CDC 00202C1C  90 1E 01 9C */	stw r0, 0x19c(r30)
/* 80205CE0 00202C20  7F C4 F3 78 */	mr r4, r30
/* 80205CE4 00202C24  C0 22 BA 40 */	lfs f1, lbl_80519DA0@sda21(r2)
/* 80205CE8 00202C28  38 7E 01 C4 */	addi r3, r30, 0x1c4
/* 80205CEC 00202C2C  D0 1E 01 B4 */	stfs f0, 0x1b4(r30)
/* 80205CF0 00202C30  38 A5 31 32 */	addi r5, r5, 0x70303132@l
/* 80205CF4 00202C34  C0 02 BA 84 */	lfs f0, lbl_80519DE4@sda21(r2)
/* 80205CF8 00202C38  38 C2 BA 88 */	addi r6, r2, lbl_80519DE8@sda21
/* 80205CFC 00202C3C  D0 3E 01 BC */	stfs f1, 0x1bc(r30)
/* 80205D00 00202C40  D0 1E 01 C0 */	stfs f0, 0x1c0(r30)
/* 80205D04 00202C44  48 20 D9 55 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205D08 00202C48  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205D0C 00202C4C  3C A0 70 30 */	lis r5, 0x70303133@ha
/* 80205D10 00202C50  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205D14 00202C54  C0 02 BA 80 */	lfs f0, lbl_80519DE0@sda21(r2)
/* 80205D18 00202C58  90 1E 01 C4 */	stw r0, 0x1c4(r30)
/* 80205D1C 00202C5C  7F C4 F3 78 */	mr r4, r30
/* 80205D20 00202C60  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205D24 00202C64  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 80205D28 00202C68  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 80205D2C 00202C6C  38 A5 31 33 */	addi r5, r5, 0x70303133@l
/* 80205D30 00202C70  C0 02 BA 8C */	lfs f0, lbl_80519DEC@sda21(r2)
/* 80205D34 00202C74  38 DF 00 64 */	addi r6, r31, 0x64
/* 80205D38 00202C78  D0 3E 01 E4 */	stfs f1, 0x1e4(r30)
/* 80205D3C 00202C7C  D0 1E 01 E8 */	stfs f0, 0x1e8(r30)
/* 80205D40 00202C80  48 20 D9 19 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205D44 00202C84  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205D48 00202C88  3C A0 70 30 */	lis r5, 0x70303134@ha
/* 80205D4C 00202C8C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205D50 00202C90  C0 02 BA 90 */	lfs f0, lbl_80519DF0@sda21(r2)
/* 80205D54 00202C94  90 1E 01 EC */	stw r0, 0x1ec(r30)
/* 80205D58 00202C98  7F C4 F3 78 */	mr r4, r30
/* 80205D5C 00202C9C  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205D60 00202CA0  38 7E 02 14 */	addi r3, r30, 0x214
/* 80205D64 00202CA4  D0 1E 02 04 */	stfs f0, 0x204(r30)
/* 80205D68 00202CA8  38 A5 31 34 */	addi r5, r5, 0x70303134@l
/* 80205D6C 00202CAC  C0 02 BA 94 */	lfs f0, lbl_80519DF4@sda21(r2)
/* 80205D70 00202CB0  38 DF 00 70 */	addi r6, r31, 0x70
/* 80205D74 00202CB4  D0 3E 02 0C */	stfs f1, 0x20c(r30)
/* 80205D78 00202CB8  D0 1E 02 10 */	stfs f0, 0x210(r30)
/* 80205D7C 00202CBC  48 20 D8 DD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205D80 00202CC0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205D84 00202CC4  3C A0 70 30 */	lis r5, 0x70303037@ha
/* 80205D88 00202CC8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205D8C 00202CCC  C0 02 BA 8C */	lfs f0, lbl_80519DEC@sda21(r2)
/* 80205D90 00202CD0  90 1E 02 14 */	stw r0, 0x214(r30)
/* 80205D94 00202CD4  7F C4 F3 78 */	mr r4, r30
/* 80205D98 00202CD8  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205D9C 00202CDC  38 7E 02 3C */	addi r3, r30, 0x23c
/* 80205DA0 00202CE0  D0 1E 02 2C */	stfs f0, 0x22c(r30)
/* 80205DA4 00202CE4  38 A5 30 37 */	addi r5, r5, 0x70303037@l
/* 80205DA8 00202CE8  C0 02 BA 98 */	lfs f0, lbl_80519DF8@sda21(r2)
/* 80205DAC 00202CEC  38 DF 00 7C */	addi r6, r31, 0x7c
/* 80205DB0 00202CF0  D0 3E 02 34 */	stfs f1, 0x234(r30)
/* 80205DB4 00202CF4  D0 1E 02 38 */	stfs f0, 0x238(r30)
/* 80205DB8 00202CF8  48 20 D8 A1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80205DBC 00202CFC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80205DC0 00202D00  C0 42 BA 9C */	lfs f2, lbl_80519DFC@sda21(r2)
/* 80205DC4 00202D04  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80205DC8 00202D08  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80205DCC 00202D0C  90 1E 02 3C */	stw r0, 0x23c(r30)
/* 80205DD0 00202D10  7F C3 F3 78 */	mr r3, r30
/* 80205DD4 00202D14  C0 02 BA 8C */	lfs f0, lbl_80519DEC@sda21(r2)
/* 80205DD8 00202D18  D0 5E 02 54 */	stfs f2, 0x254(r30)
/* 80205DDC 00202D1C  D0 3E 02 5C */	stfs f1, 0x25c(r30)
/* 80205DE0 00202D20  D0 1E 02 60 */	stfs f0, 0x260(r30)
/* 80205DE4 00202D24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80205DE8 00202D28  83 C1 00 08 */	lwz r30, 8(r1)
/* 80205DEC 00202D2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80205DF0 00202D30  7C 08 03 A6 */	mtlr r0
/* 80205DF4 00202D34  38 21 00 10 */	addi r1, r1, 0x10
/* 80205DF8 00202D38  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12ItemUjamushi9BoidParmsFv

.fn blendTo__Q34Game12ItemUjamushi9BoidParmsFRQ34Game12ItemUjamushi9BoidParmsRQ34Game12ItemUjamushi9BoidParmsf, global
/* 80205DFC 00202D3C  C0 02 BA 40 */	lfs f0, lbl_80519DA0@sda21(r2)
/* 80205E00 00202D40  C0 44 00 24 */	lfs f2, 0x24(r4)
/* 80205E04 00202D44  EC 00 08 28 */	fsubs f0, f0, f1
/* 80205E08 00202D48  C0 63 00 24 */	lfs f3, 0x24(r3)
/* 80205E0C 00202D4C  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205E10 00202D50  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205E14 00202D54  D0 45 00 24 */	stfs f2, 0x24(r5)
/* 80205E18 00202D58  C0 44 00 4C */	lfs f2, 0x4c(r4)
/* 80205E1C 00202D5C  C0 63 00 4C */	lfs f3, 0x4c(r3)
/* 80205E20 00202D60  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205E24 00202D64  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205E28 00202D68  D0 45 00 4C */	stfs f2, 0x4c(r5)
/* 80205E2C 00202D6C  C0 44 00 74 */	lfs f2, 0x74(r4)
/* 80205E30 00202D70  C0 63 00 74 */	lfs f3, 0x74(r3)
/* 80205E34 00202D74  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205E38 00202D78  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205E3C 00202D7C  D0 45 00 74 */	stfs f2, 0x74(r5)
/* 80205E40 00202D80  C0 44 00 9C */	lfs f2, 0x9c(r4)
/* 80205E44 00202D84  C0 63 00 9C */	lfs f3, 0x9c(r3)
/* 80205E48 00202D88  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205E4C 00202D8C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205E50 00202D90  D0 45 00 9C */	stfs f2, 0x9c(r5)
/* 80205E54 00202D94  C0 44 00 C4 */	lfs f2, 0xc4(r4)
/* 80205E58 00202D98  C0 63 00 C4 */	lfs f3, 0xc4(r3)
/* 80205E5C 00202D9C  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205E60 00202DA0  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205E64 00202DA4  D0 45 00 C4 */	stfs f2, 0xc4(r5)
/* 80205E68 00202DA8  C0 44 00 EC */	lfs f2, 0xec(r4)
/* 80205E6C 00202DAC  C0 63 00 EC */	lfs f3, 0xec(r3)
/* 80205E70 00202DB0  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205E74 00202DB4  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205E78 00202DB8  D0 45 00 EC */	stfs f2, 0xec(r5)
/* 80205E7C 00202DBC  C0 44 01 14 */	lfs f2, 0x114(r4)
/* 80205E80 00202DC0  C0 63 01 14 */	lfs f3, 0x114(r3)
/* 80205E84 00202DC4  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205E88 00202DC8  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205E8C 00202DCC  D0 45 01 14 */	stfs f2, 0x114(r5)
/* 80205E90 00202DD0  C0 44 01 3C */	lfs f2, 0x13c(r4)
/* 80205E94 00202DD4  C0 63 01 3C */	lfs f3, 0x13c(r3)
/* 80205E98 00202DD8  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205E9C 00202DDC  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205EA0 00202DE0  D0 45 01 3C */	stfs f2, 0x13c(r5)
/* 80205EA4 00202DE4  C0 44 01 64 */	lfs f2, 0x164(r4)
/* 80205EA8 00202DE8  C0 63 01 64 */	lfs f3, 0x164(r3)
/* 80205EAC 00202DEC  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205EB0 00202DF0  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205EB4 00202DF4  D0 45 01 64 */	stfs f2, 0x164(r5)
/* 80205EB8 00202DF8  C0 44 01 8C */	lfs f2, 0x18c(r4)
/* 80205EBC 00202DFC  C0 63 01 8C */	lfs f3, 0x18c(r3)
/* 80205EC0 00202E00  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205EC4 00202E04  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205EC8 00202E08  D0 45 01 8C */	stfs f2, 0x18c(r5)
/* 80205ECC 00202E0C  C0 44 01 B4 */	lfs f2, 0x1b4(r4)
/* 80205ED0 00202E10  C0 63 01 B4 */	lfs f3, 0x1b4(r3)
/* 80205ED4 00202E14  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205ED8 00202E18  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205EDC 00202E1C  D0 45 01 B4 */	stfs f2, 0x1b4(r5)
/* 80205EE0 00202E20  C0 44 01 DC */	lfs f2, 0x1dc(r4)
/* 80205EE4 00202E24  C0 63 01 DC */	lfs f3, 0x1dc(r3)
/* 80205EE8 00202E28  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205EEC 00202E2C  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205EF0 00202E30  D0 45 01 DC */	stfs f2, 0x1dc(r5)
/* 80205EF4 00202E34  C0 44 02 04 */	lfs f2, 0x204(r4)
/* 80205EF8 00202E38  C0 63 02 04 */	lfs f3, 0x204(r3)
/* 80205EFC 00202E3C  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205F00 00202E40  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205F04 00202E44  D0 45 02 04 */	stfs f2, 0x204(r5)
/* 80205F08 00202E48  C0 44 02 2C */	lfs f2, 0x22c(r4)
/* 80205F0C 00202E4C  C0 63 02 2C */	lfs f3, 0x22c(r3)
/* 80205F10 00202E50  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80205F14 00202E54  EC 40 10 FA */	fmadds f2, f0, f3, f2
/* 80205F18 00202E58  D0 45 02 2C */	stfs f2, 0x22c(r5)
/* 80205F1C 00202E5C  C0 44 02 54 */	lfs f2, 0x254(r4)
/* 80205F20 00202E60  C0 63 02 54 */	lfs f3, 0x254(r3)
/* 80205F24 00202E64  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80205F28 00202E68  EC 00 08 FA */	fmadds f0, f0, f3, f1
/* 80205F2C 00202E6C  D0 05 02 54 */	stfs f0, 0x254(r5)
/* 80205F30 00202E70  4E 80 00 20 */	blr 
.endfn blendTo__Q34Game12ItemUjamushi9BoidParmsFRQ34Game12ItemUjamushi9BoidParmsRQ34Game12ItemUjamushi9BoidParmsf

.fn __ct__Q34Game12ItemUjamushi13BoidParameterFv, global
/* 80205F34 00202E74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80205F38 00202E78  7C 08 02 A6 */	mflr r0
/* 80205F3C 00202E7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80205F40 00202E80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80205F44 00202E84  7C 7F 1B 78 */	mr r31, r3
/* 80205F48 00202E88  48 20 B4 49 */	bl __ct__5CNodeFv
/* 80205F4C 00202E8C  3C 80 80 4C */	lis r4, __vt__Q34Game12ItemUjamushi13BoidParameter@ha
/* 80205F50 00202E90  38 7F 00 18 */	addi r3, r31, 0x18
/* 80205F54 00202E94  38 04 FA 98 */	addi r0, r4, __vt__Q34Game12ItemUjamushi13BoidParameter@l
/* 80205F58 00202E98  90 1F 00 00 */	stw r0, 0(r31)
/* 80205F5C 00202E9C  48 00 00 85 */	bl __ct__Q44Game12ItemUjamushi13BoidParameter5TNodeFv
/* 80205F60 00202EA0  7F E3 FB 78 */	mr r3, r31
/* 80205F64 00202EA4  48 00 01 85 */	bl newParms__Q34Game12ItemUjamushi13BoidParameterFv
/* 80205F68 00202EA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80205F6C 00202EAC  7F E3 FB 78 */	mr r3, r31
/* 80205F70 00202EB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80205F74 00202EB4  7C 08 03 A6 */	mtlr r0
/* 80205F78 00202EB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80205F7C 00202EBC  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12ItemUjamushi13BoidParameterFv

.fn __dt__Q44Game12ItemUjamushi13BoidParameter5TNodeFv, weak
/* 80205F80 00202EC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80205F84 00202EC4  7C 08 02 A6 */	mflr r0
/* 80205F88 00202EC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80205F8C 00202ECC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80205F90 00202ED0  7C 9F 23 78 */	mr r31, r4
/* 80205F94 00202ED4  93 C1 00 08 */	stw r30, 8(r1)
/* 80205F98 00202ED8  7C 7E 1B 79 */	or. r30, r3, r3
/* 80205F9C 00202EDC  41 82 00 28 */	beq .L_80205FC4
/* 80205FA0 00202EE0  3C A0 80 4C */	lis r5, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@ha
/* 80205FA4 00202EE4  38 80 00 00 */	li r4, 0
/* 80205FA8 00202EE8  38 05 FA 88 */	addi r0, r5, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@l
/* 80205FAC 00202EEC  90 1E 00 00 */	stw r0, 0(r30)
/* 80205FB0 00202EF0  48 20 B5 D9 */	bl __dt__5CNodeFv
/* 80205FB4 00202EF4  7F E0 07 35 */	extsh. r0, r31
/* 80205FB8 00202EF8  40 81 00 0C */	ble .L_80205FC4
/* 80205FBC 00202EFC  7F C3 F3 78 */	mr r3, r30
/* 80205FC0 00202F00  4B E1 E0 F5 */	bl __dl__FPv
.L_80205FC4:
/* 80205FC4 00202F04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80205FC8 00202F08  7F C3 F3 78 */	mr r3, r30
/* 80205FCC 00202F0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80205FD0 00202F10  83 C1 00 08 */	lwz r30, 8(r1)
/* 80205FD4 00202F14  7C 08 03 A6 */	mtlr r0
/* 80205FD8 00202F18  38 21 00 10 */	addi r1, r1, 0x10
/* 80205FDC 00202F1C  4E 80 00 20 */	blr 
.endfn __dt__Q44Game12ItemUjamushi13BoidParameter5TNodeFv

.fn __ct__Q44Game12ItemUjamushi13BoidParameter5TNodeFv, weak
/* 80205FE0 00202F20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80205FE4 00202F24  7C 08 02 A6 */	mflr r0
/* 80205FE8 00202F28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80205FEC 00202F2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80205FF0 00202F30  7C 7F 1B 78 */	mr r31, r3
/* 80205FF4 00202F34  48 20 B3 9D */	bl __ct__5CNodeFv
/* 80205FF8 00202F38  3C 80 80 4C */	lis r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@ha
/* 80205FFC 00202F3C  38 7F 00 18 */	addi r3, r31, 0x18
/* 80206000 00202F40  38 04 FA 88 */	addi r0, r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@l
/* 80206004 00202F44  38 80 00 01 */	li r4, 1
/* 80206008 00202F48  90 1F 00 00 */	stw r0, 0(r31)
/* 8020600C 00202F4C  4B FF FA 1D */	bl __ct__Q34Game12ItemUjamushi9BoidParmsFv
/* 80206010 00202F50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80206014 00202F54  7F E3 FB 78 */	mr r3, r31
/* 80206018 00202F58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020601C 00202F5C  7C 08 03 A6 */	mtlr r0
/* 80206020 00202F60  38 21 00 10 */	addi r1, r1, 0x10
/* 80206024 00202F64  4E 80 00 20 */	blr 
.endfn __ct__Q44Game12ItemUjamushi13BoidParameter5TNodeFv

.fn getParms__Q34Game12ItemUjamushi13BoidParameterFiifRQ34Game12ItemUjamushi9BoidParms, global
/* 80206028 00202F68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020602C 00202F6C  7C 08 02 A6 */	mflr r0
/* 80206030 00202F70  90 01 00 24 */	stw r0, 0x24(r1)
/* 80206034 00202F74  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80206038 00202F78  FF E0 08 90 */	fmr f31, f1
/* 8020603C 00202F7C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80206040 00202F80  7C BF 2B 78 */	mr r31, r5
/* 80206044 00202F84  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80206048 00202F88  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8020604C 00202F8C  7C DD 33 78 */	mr r29, r6
/* 80206050 00202F90  93 81 00 08 */	stw r28, 8(r1)
/* 80206054 00202F94  7C 7C 1B 78 */	mr r28, r3
/* 80206058 00202F98  38 7C 00 18 */	addi r3, r28, 0x18
/* 8020605C 00202F9C  48 20 B6 41 */	bl getChildAt__5CNodeFi
/* 80206060 00202FA0  7C 7E 1B 78 */	mr r30, r3
/* 80206064 00202FA4  7F E4 FB 78 */	mr r4, r31
/* 80206068 00202FA8  38 7C 00 18 */	addi r3, r28, 0x18
/* 8020606C 00202FAC  48 20 B6 31 */	bl getChildAt__5CNodeFi
/* 80206070 00202FB0  28 1E 00 00 */	cmplwi r30, 0
/* 80206074 00202FB4  7C 7F 1B 78 */	mr r31, r3
/* 80206078 00202FB8  38 00 00 00 */	li r0, 0
/* 8020607C 00202FBC  41 82 00 10 */	beq .L_8020608C
/* 80206080 00202FC0  28 1F 00 00 */	cmplwi r31, 0
/* 80206084 00202FC4  41 82 00 08 */	beq .L_8020608C
/* 80206088 00202FC8  38 00 00 01 */	li r0, 1
.L_8020608C:
/* 8020608C 00202FCC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80206090 00202FD0  40 82 00 20 */	bne .L_802060B0
/* 80206094 00202FD4  3C 60 80 48 */	lis r3, lbl_80481DC8@ha
/* 80206098 00202FD8  3C A0 80 48 */	lis r5, lbl_80481DDC@ha
/* 8020609C 00202FDC  38 63 1D C8 */	addi r3, r3, lbl_80481DC8@l
/* 802060A0 00202FE0  38 80 00 8F */	li r4, 0x8f
/* 802060A4 00202FE4  38 A5 1D DC */	addi r5, r5, lbl_80481DDC@l
/* 802060A8 00202FE8  4C C6 31 82 */	crclr 6
/* 802060AC 00202FEC  4B E2 45 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802060B0:
/* 802060B0 00202FF0  FC 20 F8 90 */	fmr f1, f31
/* 802060B4 00202FF4  7F A5 EB 78 */	mr r5, r29
/* 802060B8 00202FF8  38 7E 00 18 */	addi r3, r30, 0x18
/* 802060BC 00202FFC  38 9F 00 18 */	addi r4, r31, 0x18
/* 802060C0 00203000  4B FF FD 3D */	bl blendTo__Q34Game12ItemUjamushi9BoidParmsFRQ34Game12ItemUjamushi9BoidParmsRQ34Game12ItemUjamushi9BoidParmsf
/* 802060C4 00203004  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802060C8 00203008  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 802060CC 0020300C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 802060D0 00203010  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 802060D4 00203014  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 802060D8 00203018  83 81 00 08 */	lwz r28, 8(r1)
/* 802060DC 0020301C  7C 08 03 A6 */	mtlr r0
/* 802060E0 00203020  38 21 00 20 */	addi r1, r1, 0x20
/* 802060E4 00203024  4E 80 00 20 */	blr 
.endfn getParms__Q34Game12ItemUjamushi13BoidParameterFiifRQ34Game12ItemUjamushi9BoidParms

.fn newParms__Q34Game12ItemUjamushi13BoidParameterFv, global
/* 802060E8 00203028  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802060EC 0020302C  7C 08 02 A6 */	mflr r0
/* 802060F0 00203030  90 01 00 14 */	stw r0, 0x14(r1)
/* 802060F4 00203034  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802060F8 00203038  7C 7F 1B 78 */	mr r31, r3
/* 802060FC 0020303C  38 60 02 80 */	li r3, 0x280
/* 80206100 00203040  4B E1 DD A5 */	bl __nw__FUl
/* 80206104 00203044  7C 64 1B 79 */	or. r4, r3, r3
/* 80206108 00203048  41 82 00 0C */	beq .L_80206114
/* 8020610C 0020304C  4B FF FE D5 */	bl __ct__Q44Game12ItemUjamushi13BoidParameter5TNodeFv
/* 80206110 00203050  7C 64 1B 78 */	mr r4, r3
.L_80206114:
/* 80206114 00203054  38 7F 00 18 */	addi r3, r31, 0x18
/* 80206118 00203058  48 20 B2 F1 */	bl add__5CNodeFP5CNode
/* 8020611C 0020305C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80206120 00203060  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80206124 00203064  7C 08 03 A6 */	mtlr r0
/* 80206128 00203068  38 21 00 10 */	addi r1, r1, 0x10
/* 8020612C 0020306C  4E 80 00 20 */	blr 
.endfn newParms__Q34Game12ItemUjamushi13BoidParameterFv

.fn read__Q34Game12ItemUjamushi13BoidParameterFR6Stream, global
/* 80206130 00203070  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80206134 00203074  7C 08 02 A6 */	mflr r0
/* 80206138 00203078  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020613C 0020307C  38 00 00 00 */	li r0, 0
/* 80206140 00203080  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80206144 00203084  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80206148 00203088  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020614C 0020308C  7C 7D 1B 78 */	mr r29, r3
/* 80206150 00203090  93 81 00 10 */	stw r28, 0x10(r1)
/* 80206154 00203094  7C 9C 23 78 */	mr r28, r4
/* 80206158 00203098  90 03 00 28 */	stw r0, 0x28(r3)
/* 8020615C 0020309C  7F 83 E3 78 */	mr r3, r28
/* 80206160 002030A0  90 1D 00 24 */	stw r0, 0x24(r29)
/* 80206164 002030A4  90 1D 00 20 */	stw r0, 0x20(r29)
/* 80206168 002030A8  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 8020616C 002030AC  48 20 E9 25 */	bl readInt__6StreamFv
/* 80206170 002030B0  7C 7F 1B 78 */	mr r31, r3
/* 80206174 002030B4  3B C0 00 00 */	li r30, 0
/* 80206178 002030B8  48 00 00 10 */	b .L_80206188
.L_8020617C:
/* 8020617C 002030BC  7F A3 EB 78 */	mr r3, r29
/* 80206180 002030C0  4B FF FF 69 */	bl newParms__Q34Game12ItemUjamushi13BoidParameterFv
/* 80206184 002030C4  3B DE 00 01 */	addi r30, r30, 1
.L_80206188:
/* 80206188 002030C8  7C 1E F8 00 */	cmpw r30, r31
/* 8020618C 002030CC  41 80 FF F0 */	blt .L_8020617C
/* 80206190 002030D0  83 DD 00 28 */	lwz r30, 0x28(r29)
/* 80206194 002030D4  3B A0 00 00 */	li r29, 0
/* 80206198 002030D8  48 00 00 18 */	b .L_802061B0
.L_8020619C:
/* 8020619C 002030DC  7F 84 E3 78 */	mr r4, r28
/* 802061A0 002030E0  38 7E 00 18 */	addi r3, r30, 0x18
/* 802061A4 002030E4  48 20 D6 51 */	bl read__10ParametersFR6Stream
/* 802061A8 002030E8  83 DE 00 04 */	lwz r30, 4(r30)
/* 802061AC 002030EC  3B BD 00 01 */	addi r29, r29, 1
.L_802061B0:
/* 802061B0 002030F0  7C 1D F8 00 */	cmpw r29, r31
/* 802061B4 002030F4  41 80 FF E8 */	blt .L_8020619C
/* 802061B8 002030F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802061BC 002030FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802061C0 00203100  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802061C4 00203104  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802061C8 00203108  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802061CC 0020310C  7C 08 03 A6 */	mtlr r0
/* 802061D0 00203110  38 21 00 20 */	addi r1, r1, 0x20
/* 802061D4 00203114  4E 80 00 20 */	blr 
.endfn read__Q34Game12ItemUjamushi13BoidParameterFR6Stream

.fn __ct__Q34Game12ItemUjamushi3UjaFv, global
/* 802061D8 00203118  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802061DC 0020311C  7C 08 02 A6 */	mflr r0
/* 802061E0 00203120  3C 80 80 4C */	lis r4, __vt__Q24Game6TFlock@ha
/* 802061E4 00203124  90 01 00 14 */	stw r0, 0x14(r1)
/* 802061E8 00203128  38 04 FA 64 */	addi r0, r4, __vt__Q24Game6TFlock@l
/* 802061EC 0020312C  38 80 00 00 */	li r4, 0
/* 802061F0 00203130  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802061F4 00203134  7C 7F 1B 78 */	mr r31, r3
/* 802061F8 00203138  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemUjamushi3Uja@ha
/* 802061FC 0020313C  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80206200 00203140  38 03 FA 40 */	addi r0, r3, __vt__Q34Game12ItemUjamushi3Uja@l
/* 80206204 00203144  38 7F 00 78 */	addi r3, r31, 0x78
/* 80206208 00203148  98 9F 00 40 */	stb r4, 0x40(r31)
/* 8020620C 0020314C  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80206210 00203150  4B F9 04 61 */	bl __ct__Q24Game13UpdateContextFv
/* 80206214 00203154  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80206218 00203158  38 60 00 00 */	li r3, 0
/* 8020621C 0020315C  38 00 00 04 */	li r0, 4
/* 80206220 00203160  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80206224 00203164  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80206228 00203168  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8020622C 0020316C  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80206230 00203170  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 80206234 00203174  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 80206238 00203178  90 7F 00 74 */	stw r3, 0x74(r31)
/* 8020623C 0020317C  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 80206240 00203180  80 1F 00 BC */	lwz r0, 0xbc(r31)
/* 80206244 00203184  54 03 10 3A */	slwi r3, r0, 2
/* 80206248 00203188  4B E1 DD 65 */	bl __nwa__FUl
/* 8020624C 0020318C  90 7F 00 C0 */	stw r3, 0xc0(r31)
/* 80206250 00203190  80 1F 00 BC */	lwz r0, 0xbc(r31)
/* 80206254 00203194  54 03 10 3A */	slwi r3, r0, 2
/* 80206258 00203198  4B E1 DD 55 */	bl __nwa__FUl
/* 8020625C 0020319C  90 7F 00 C4 */	stw r3, 0xc4(r31)
/* 80206260 002031A0  7F E3 FB 78 */	mr r3, r31
/* 80206264 002031A4  48 00 00 45 */	bl clearBuffer__Q34Game12ItemUjamushi3UjaFv
/* 80206268 002031A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020626C 002031AC  7F E3 FB 78 */	mr r3, r31
/* 80206270 002031B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80206274 002031B4  7C 08 03 A6 */	mtlr r0
/* 80206278 002031B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8020627C 002031BC  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12ItemUjamushi3UjaFv

.fn damaged__Q34Game12ItemUjamushi3UjaFf, global
/* 80206280 002031C0  C0 43 00 A8 */	lfs f2, 0xa8(r3)
/* 80206284 002031C4  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80206288 002031C8  EC 22 08 28 */	fsubs f1, f2, f1
/* 8020628C 002031CC  D0 23 00 A8 */	stfs f1, 0xa8(r3)
/* 80206290 002031D0  C0 23 00 A8 */	lfs f1, 0xa8(r3)
/* 80206294 002031D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80206298 002031D8  4C 40 13 82 */	cror 2, 0, 2
/* 8020629C 002031DC  7C 00 00 26 */	mfcr r0
/* 802062A0 002031E0  54 03 1F FE */	rlwinm r3, r0, 3, 0x1f, 0x1f
/* 802062A4 002031E4  4E 80 00 20 */	blr 
.endfn damaged__Q34Game12ItemUjamushi3UjaFf

.fn clearBuffer__Q34Game12ItemUjamushi3UjaFv, global
/* 802062A8 002031E8  38 C0 00 00 */	li r6, 0
/* 802062AC 002031EC  C0 02 BA C8 */	lfs f0, lbl_80519E28@sda21(r2)
/* 802062B0 002031F0  7C C5 33 78 */	mr r5, r6
/* 802062B4 002031F4  38 E0 00 00 */	li r7, 0
/* 802062B8 002031F8  48 00 00 1C */	b .L_802062D4
.L_802062BC:
/* 802062BC 002031FC  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802062C0 00203200  38 E7 00 01 */	addi r7, r7, 1
/* 802062C4 00203204  7C A4 31 2E */	stwx r5, r4, r6
/* 802062C8 00203208  80 83 00 C4 */	lwz r4, 0xc4(r3)
/* 802062CC 0020320C  7C 04 35 2E */	stfsx f0, r4, r6
/* 802062D0 00203210  38 C6 00 04 */	addi r6, r6, 4
.L_802062D4:
/* 802062D4 00203214  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 802062D8 00203218  7C 07 00 00 */	cmpw r7, r0
/* 802062DC 0020321C  41 80 FF E0 */	blt .L_802062BC
/* 802062E0 00203220  4E 80 00 20 */	blr 
.endfn clearBuffer__Q34Game12ItemUjamushi3UjaFv

.fn updateBuffer__Q34Game12ItemUjamushi3UjaFv, global
/* 802062E4 00203224  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802062E8 00203228  7C 08 02 A6 */	mflr r0
/* 802062EC 0020322C  90 01 00 54 */	stw r0, 0x54(r1)
/* 802062F0 00203230  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802062F4 00203234  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802062F8 00203238  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802062FC 0020323C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80206300 00203240  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80206304 00203244  93 81 00 30 */	stw r28, 0x30(r1)
/* 80206308 00203248  7C 7F 1B 78 */	mr r31, r3
/* 8020630C 0020324C  38 7F 00 78 */	addi r3, r31, 0x78
/* 80206310 00203250  4B F9 03 79 */	bl updatable__Q24Game13UpdateContextFv
/* 80206314 00203254  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80206318 00203258  41 82 02 BC */	beq .L_802065D4
/* 8020631C 0020325C  38 00 00 00 */	li r0, 0
/* 80206320 00203260  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80206324 00203264  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80206328 00203268  90 01 00 20 */	stw r0, 0x20(r1)
/* 8020632C 0020326C  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80206330 00203270  28 00 00 00 */	cmplwi r0, 0
/* 80206334 00203274  90 81 00 14 */	stw r4, 0x14(r1)
/* 80206338 00203278  90 01 00 18 */	stw r0, 0x18(r1)
/* 8020633C 0020327C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80206340 00203280  40 82 00 1C */	bne .L_8020635C
/* 80206344 00203284  81 83 00 00 */	lwz r12, 0(r3)
/* 80206348 00203288  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020634C 0020328C  7D 89 03 A6 */	mtctr r12
/* 80206350 00203290  4E 80 04 21 */	bctrl 
/* 80206354 00203294  90 61 00 18 */	stw r3, 0x18(r1)
/* 80206358 00203298  48 00 02 5C */	b .L_802065B4
.L_8020635C:
/* 8020635C 0020329C  81 83 00 00 */	lwz r12, 0(r3)
/* 80206360 002032A0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80206364 002032A4  7D 89 03 A6 */	mtctr r12
/* 80206368 002032A8  4E 80 04 21 */	bctrl 
/* 8020636C 002032AC  90 61 00 18 */	stw r3, 0x18(r1)
/* 80206370 002032B0  48 00 00 58 */	b .L_802063C8
.L_80206374:
/* 80206374 002032B4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80206378 002032B8  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8020637C 002032BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80206380 002032C0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80206384 002032C4  7D 89 03 A6 */	mtctr r12
/* 80206388 002032C8  4E 80 04 21 */	bctrl 
/* 8020638C 002032CC  7C 64 1B 78 */	mr r4, r3
/* 80206390 002032D0  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80206394 002032D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80206398 002032D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020639C 002032DC  7D 89 03 A6 */	mtctr r12
/* 802063A0 002032E0  4E 80 04 21 */	bctrl 
/* 802063A4 002032E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802063A8 002032E8  40 82 02 0C */	bne .L_802065B4
/* 802063AC 002032EC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802063B0 002032F0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802063B4 002032F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802063B8 002032F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802063BC 002032FC  7D 89 03 A6 */	mtctr r12
/* 802063C0 00203300  4E 80 04 21 */	bctrl 
/* 802063C4 00203304  90 61 00 18 */	stw r3, 0x18(r1)
.L_802063C8:
/* 802063C8 00203308  81 81 00 14 */	lwz r12, 0x14(r1)
/* 802063CC 0020330C  38 61 00 14 */	addi r3, r1, 0x14
/* 802063D0 00203310  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802063D4 00203314  7D 89 03 A6 */	mtctr r12
/* 802063D8 00203318  4E 80 04 21 */	bctrl 
/* 802063DC 0020331C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802063E0 00203320  41 82 FF 94 */	beq .L_80206374
/* 802063E4 00203324  48 00 01 D0 */	b .L_802065B4
.L_802063E8:
/* 802063E8 00203328  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802063EC 0020332C  81 83 00 00 */	lwz r12, 0(r3)
/* 802063F0 00203330  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802063F4 00203334  7D 89 03 A6 */	mtctr r12
/* 802063F8 00203338  4E 80 04 21 */	bctrl 
/* 802063FC 0020333C  81 83 00 00 */	lwz r12, 0(r3)
/* 80206400 00203340  7C 7E 1B 78 */	mr r30, r3
/* 80206404 00203344  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80206408 00203348  7D 89 03 A6 */	mtctr r12
/* 8020640C 0020334C  4E 80 04 21 */	bctrl 
/* 80206410 00203350  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80206414 00203354  41 82 00 E4 */	beq .L_802064F8
/* 80206418 00203358  7F C4 F3 78 */	mr r4, r30
/* 8020641C 0020335C  38 61 00 08 */	addi r3, r1, 8
/* 80206420 00203360  81 9E 00 00 */	lwz r12, 0(r30)
/* 80206424 00203364  81 8C 00 08 */	lwz r12, 8(r12)
/* 80206428 00203368  7D 89 03 A6 */	mtctr r12
/* 8020642C 0020336C  4E 80 04 21 */	bctrl 
/* 80206430 00203370  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80206434 00203374  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80206438 00203378  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8020643C 0020337C  EC 81 00 28 */	fsubs f4, f1, f0
/* 80206440 00203380  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80206444 00203384  C0 21 00 08 */	lfs f1, 8(r1)
/* 80206448 00203388  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8020644C 0020338C  EC 43 10 28 */	fsubs f2, f3, f2
/* 80206450 00203390  EC 64 01 32 */	fmuls f3, f4, f4
/* 80206454 00203394  EC 21 00 28 */	fsubs f1, f1, f0
/* 80206458 00203398  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 8020645C 0020339C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80206460 002033A0  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 80206464 002033A4  EF E2 08 2A */	fadds f31, f2, f1
/* 80206468 002033A8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8020646C 002033AC  40 81 00 14 */	ble .L_80206480
/* 80206470 002033B0  40 81 00 14 */	ble .L_80206484
/* 80206474 002033B4  FC 00 F8 34 */	frsqrte f0, f31
/* 80206478 002033B8  EF E0 07 F2 */	fmuls f31, f0, f31
/* 8020647C 002033BC  48 00 00 08 */	b .L_80206484
.L_80206480:
/* 80206480 002033C0  FF E0 00 90 */	fmr f31, f0
.L_80206484:
/* 80206484 002033C4  C0 02 BA CC */	lfs f0, lbl_80519E2C@sda21(r2)
/* 80206488 002033C8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8020648C 002033CC  40 80 00 6C */	bge .L_802064F8
/* 80206490 002033D0  3B 80 00 00 */	li r28, 0
/* 80206494 002033D4  3B A0 00 00 */	li r29, 0
/* 80206498 002033D8  48 00 00 54 */	b .L_802064EC
.L_8020649C:
/* 8020649C 002033DC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802064A0 002033E0  7C 63 E8 2E */	lwzx r3, r3, r29
/* 802064A4 002033E4  28 03 00 00 */	cmplwi r3, 0
/* 802064A8 002033E8  41 82 00 2C */	beq .L_802064D4
/* 802064AC 002033EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802064B0 002033F0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802064B4 002033F4  7D 89 03 A6 */	mtctr r12
/* 802064B8 002033F8  4E 80 04 21 */	bctrl 
/* 802064BC 002033FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802064C0 00203400  41 82 00 14 */	beq .L_802064D4
/* 802064C4 00203404  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 802064C8 00203408  7C 03 EC 2E */	lfsx f0, r3, r29
/* 802064CC 0020340C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802064D0 00203410  40 81 00 14 */	ble .L_802064E4
.L_802064D4:
/* 802064D4 00203414  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802064D8 00203418  7F C3 E9 2E */	stwx r30, r3, r29
/* 802064DC 0020341C  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 802064E0 00203420  7F E3 ED 2E */	stfsx f31, r3, r29
.L_802064E4:
/* 802064E4 00203424  3B BD 00 04 */	addi r29, r29, 4
/* 802064E8 00203428  3B 9C 00 01 */	addi r28, r28, 1
.L_802064EC:
/* 802064EC 0020342C  80 1F 00 BC */	lwz r0, 0xbc(r31)
/* 802064F0 00203430  7C 1C 00 00 */	cmpw r28, r0
/* 802064F4 00203434  41 80 FF A8 */	blt .L_8020649C
.L_802064F8:
/* 802064F8 00203438  80 01 00 20 */	lwz r0, 0x20(r1)
/* 802064FC 0020343C  28 00 00 00 */	cmplwi r0, 0
/* 80206500 00203440  40 82 00 24 */	bne .L_80206524
/* 80206504 00203444  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80206508 00203448  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8020650C 0020344C  81 83 00 00 */	lwz r12, 0(r3)
/* 80206510 00203450  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80206514 00203454  7D 89 03 A6 */	mtctr r12
/* 80206518 00203458  4E 80 04 21 */	bctrl 
/* 8020651C 0020345C  90 61 00 18 */	stw r3, 0x18(r1)
/* 80206520 00203460  48 00 00 94 */	b .L_802065B4
.L_80206524:
/* 80206524 00203464  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80206528 00203468  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8020652C 0020346C  81 83 00 00 */	lwz r12, 0(r3)
/* 80206530 00203470  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80206534 00203474  7D 89 03 A6 */	mtctr r12
/* 80206538 00203478  4E 80 04 21 */	bctrl 
/* 8020653C 0020347C  90 61 00 18 */	stw r3, 0x18(r1)
/* 80206540 00203480  48 00 00 58 */	b .L_80206598
.L_80206544:
/* 80206544 00203484  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80206548 00203488  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8020654C 0020348C  81 83 00 00 */	lwz r12, 0(r3)
/* 80206550 00203490  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80206554 00203494  7D 89 03 A6 */	mtctr r12
/* 80206558 00203498  4E 80 04 21 */	bctrl 
/* 8020655C 0020349C  7C 64 1B 78 */	mr r4, r3
/* 80206560 002034A0  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80206564 002034A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80206568 002034A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020656C 002034AC  7D 89 03 A6 */	mtctr r12
/* 80206570 002034B0  4E 80 04 21 */	bctrl 
/* 80206574 002034B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80206578 002034B8  40 82 00 3C */	bne .L_802065B4
/* 8020657C 002034BC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80206580 002034C0  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80206584 002034C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80206588 002034C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020658C 002034CC  7D 89 03 A6 */	mtctr r12
/* 80206590 002034D0  4E 80 04 21 */	bctrl 
/* 80206594 002034D4  90 61 00 18 */	stw r3, 0x18(r1)
.L_80206598:
/* 80206598 002034D8  81 81 00 14 */	lwz r12, 0x14(r1)
/* 8020659C 002034DC  38 61 00 14 */	addi r3, r1, 0x14
/* 802065A0 002034E0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802065A4 002034E4  7D 89 03 A6 */	mtctr r12
/* 802065A8 002034E8  4E 80 04 21 */	bctrl 
/* 802065AC 002034EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802065B0 002034F0  41 82 FF 94 */	beq .L_80206544
.L_802065B4:
/* 802065B4 002034F4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802065B8 002034F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802065BC 002034FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802065C0 00203500  7D 89 03 A6 */	mtctr r12
/* 802065C4 00203504  4E 80 04 21 */	bctrl 
/* 802065C8 00203508  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802065CC 0020350C  7C 04 18 40 */	cmplw r4, r3
/* 802065D0 00203510  40 82 FE 18 */	bne .L_802063E8
.L_802065D4:
/* 802065D4 00203514  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802065D8 00203518  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802065DC 0020351C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802065E0 00203520  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802065E4 00203524  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802065E8 00203528  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 802065EC 0020352C  83 81 00 30 */	lwz r28, 0x30(r1)
/* 802065F0 00203530  7C 08 03 A6 */	mtlr r0
/* 802065F4 00203534  38 21 00 50 */	addi r1, r1, 0x50
/* 802065F8 00203538  4E 80 00 20 */	blr 
.endfn updateBuffer__Q34Game12ItemUjamushi3UjaFv

.fn makeMatrix__Q34Game12ItemUjamushi3UjaFv, global
/* 802065FC 0020353C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80206600 00203540  7C 08 02 A6 */	mflr r0
/* 80206604 00203544  7C 68 1B 78 */	mr r8, r3
/* 80206608 00203548  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 8020660C 0020354C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80206610 00203550  38 81 00 14 */	addi r4, r1, 0x14
/* 80206614 00203554  38 A1 00 20 */	addi r5, r1, 0x20
/* 80206618 00203558  38 C1 00 08 */	addi r6, r1, 8
/* 8020661C 0020355C  C0 43 00 5C */	lfs f2, 0x5c(r3)
/* 80206620 00203560  38 68 00 10 */	addi r3, r8, 0x10
/* 80206624 00203564  C0 28 00 B8 */	lfs f1, 0xb8(r8)
/* 80206628 00203568  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8020662C 0020356C  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80206630 00203570  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80206634 00203574  C0 48 00 64 */	lfs f2, 0x64(r8)
/* 80206638 00203578  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8020663C 0020357C  C0 28 00 68 */	lfs f1, 0x68(r8)
/* 80206640 00203580  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80206644 00203584  C0 08 00 6C */	lfs f0, 0x6c(r8)
/* 80206648 00203588  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8020664C 0020358C  80 E8 00 74 */	lwz r7, 0x74(r8)
/* 80206650 00203590  80 E7 03 10 */	lwz r7, 0x310(r7)
/* 80206654 00203594  C0 67 00 24 */	lfs f3, 0x24(r7)
/* 80206658 00203598  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8020665C 0020359C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80206660 002035A0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80206664 002035A4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80206668 002035A8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8020666C 002035AC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80206670 002035B0  C0 08 00 00 */	lfs f0, 0(r8)
/* 80206674 002035B4  D0 01 00 08 */	stfs f0, 8(r1)
/* 80206678 002035B8  C0 28 00 04 */	lfs f1, 4(r8)
/* 8020667C 002035BC  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80206680 002035C0  C0 08 00 08 */	lfs f0, 8(r8)
/* 80206684 002035C4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80206688 002035C8  C0 08 00 B4 */	lfs f0, 0xb4(r8)
/* 8020668C 002035CC  EC 01 00 2A */	fadds f0, f1, f0
/* 80206690 002035D0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80206694 002035D4  48 22 1C 45 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 80206698 002035D8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8020669C 002035DC  7C 08 03 A6 */	mtlr r0
/* 802066A0 002035E0  38 21 00 30 */	addi r1, r1, 0x30
/* 802066A4 002035E4  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game12ItemUjamushi3UjaFv

.fn updateScale__Q34Game12ItemUjamushi3UjaFf, global
/* 802066A8 002035E8  C0 02 BA D8 */	lfs f0, lbl_80519E38@sda21(r2)
/* 802066AC 002035EC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802066B0 002035F0  EC 01 00 24 */	fdivs f0, f1, f0
/* 802066B4 002035F4  C0 22 BA D4 */	lfs f1, lbl_80519E34@sda21(r2)
/* 802066B8 002035F8  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802066BC 002035FC  80 83 00 74 */	lwz r4, 0x74(r3)
/* 802066C0 00203600  C0 82 BA D0 */	lfs f4, lbl_80519E30@sda21(r2)
/* 802066C4 00203604  80 84 03 10 */	lwz r4, 0x310(r4)
/* 802066C8 00203608  EC 61 00 32 */	fmuls f3, f1, f0
/* 802066CC 0020360C  C0 A5 00 54 */	lfs f5, 0x54(r5)
/* 802066D0 00203610  C0 44 00 9C */	lfs f2, 0x9c(r4)
/* 802066D4 00203614  C0 23 00 70 */	lfs f1, 0x70(r3)
/* 802066D8 00203618  EC 64 00 F2 */	fmuls f3, f4, f3
/* 802066DC 0020361C  C0 02 BA B8 */	lfs f0, lbl_80519E18@sda21(r2)
/* 802066E0 00203620  EC 65 00 F2 */	fmuls f3, f5, f3
/* 802066E4 00203624  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802066E8 00203628  D0 23 00 70 */	stfs f1, 0x70(r3)
/* 802066EC 0020362C  C0 23 00 70 */	lfs f1, 0x70(r3)
/* 802066F0 00203630  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802066F4 00203634  40 81 00 0C */	ble .L_80206700
/* 802066F8 00203638  EC 01 00 28 */	fsubs f0, f1, f0
/* 802066FC 0020363C  D0 03 00 70 */	stfs f0, 0x70(r3)
.L_80206700:
/* 80206700 00203640  C0 23 00 70 */	lfs f1, 0x70(r3)
/* 80206704 00203644  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80206708 00203648  C0 62 BA DC */	lfs f3, lbl_80519E3C@sda21(r2)
/* 8020670C 0020364C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80206710 00203650  40 80 00 30 */	bge .L_80206740
/* 80206714 00203654  C0 02 BA E0 */	lfs f0, lbl_80519E40@sda21(r2)
/* 80206718 00203658  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8020671C 0020365C  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 80206720 00203660  EC 01 00 32 */	fmuls f0, f1, f0
/* 80206724 00203664  FC 00 00 1E */	fctiwz f0, f0
/* 80206728 00203668  D8 01 00 08 */	stfd f0, 8(r1)
/* 8020672C 0020366C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80206730 00203670  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80206734 00203674  7C 04 04 2E */	lfsx f0, r4, r0
/* 80206738 00203678  FC 40 00 50 */	fneg f2, f0
/* 8020673C 0020367C  48 00 00 28 */	b .L_80206764
.L_80206740:
/* 80206740 00203680  C0 02 BA E4 */	lfs f0, lbl_80519E44@sda21(r2)
/* 80206744 00203684  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 80206748 00203688  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 8020674C 0020368C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80206750 00203690  FC 00 00 1E */	fctiwz f0, f0
/* 80206754 00203694  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80206758 00203698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020675C 0020369C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80206760 002036A0  7C 44 04 2E */	lfsx f2, r4, r0
.L_80206764:
/* 80206764 002036A4  C0 22 BA 40 */	lfs f1, lbl_80519DA0@sda21(r2)
/* 80206768 002036A8  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 8020676C 002036AC  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80206770 002036B0  D0 23 00 64 */	stfs f1, 0x64(r3)
/* 80206774 002036B4  C0 23 00 70 */	lfs f1, 0x70(r3)
/* 80206778 002036B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8020677C 002036BC  40 80 00 08 */	bge .L_80206784
/* 80206780 002036C0  FC 20 08 50 */	fneg f1, f1
.L_80206784:
/* 80206784 002036C4  C0 02 BA E4 */	lfs f0, lbl_80519E44@sda21(r2)
/* 80206788 002036C8  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8020678C 002036CC  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 80206790 002036D0  C0 42 BA DC */	lfs f2, lbl_80519E3C@sda21(r2)
/* 80206794 002036D4  EC 61 00 32 */	fmuls f3, f1, f0
/* 80206798 002036D8  38 84 00 04 */	addi r4, r4, 4
/* 8020679C 002036DC  C0 22 BA 40 */	lfs f1, lbl_80519DA0@sda21(r2)
/* 802067A0 002036E0  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 802067A4 002036E4  FC 60 18 1E */	fctiwz f3, f3
/* 802067A8 002036E8  D8 61 00 18 */	stfd f3, 0x18(r1)
/* 802067AC 002036EC  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802067B0 002036F0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802067B4 002036F4  7C 64 04 2E */	lfsx f3, r4, r0
/* 802067B8 002036F8  EC 22 08 FA */	fmadds f1, f2, f3, f1
/* 802067BC 002036FC  D0 23 00 6C */	stfs f1, 0x6c(r3)
/* 802067C0 00203700  C0 23 00 70 */	lfs f1, 0x70(r3)
/* 802067C4 00203704  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802067C8 00203708  40 80 00 08 */	bge .L_802067D0
/* 802067CC 0020370C  FC 20 08 50 */	fneg f1, f1
.L_802067D0:
/* 802067D0 00203710  C0 02 BA E4 */	lfs f0, lbl_80519E44@sda21(r2)
/* 802067D4 00203714  C0 42 BA DC */	lfs f2, lbl_80519E3C@sda21(r2)
/* 802067D8 00203718  EC 21 00 32 */	fmuls f1, f1, f0
/* 802067DC 0020371C  C0 02 BA 40 */	lfs f0, lbl_80519DA0@sda21(r2)
/* 802067E0 00203720  FC 20 08 1E */	fctiwz f1, f1
/* 802067E4 00203724  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 802067E8 00203728  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802067EC 0020372C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802067F0 00203730  7C 24 04 2E */	lfsx f1, r4, r0
/* 802067F4 00203734  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 802067F8 00203738  D0 03 00 68 */	stfs f0, 0x68(r3)
/* 802067FC 0020373C  38 21 00 30 */	addi r1, r1, 0x30
/* 80206800 00203740  4E 80 00 20 */	blr 
.endfn updateScale__Q34Game12ItemUjamushi3UjaFf

.fn update__Q34Game12ItemUjamushi3UjaFRQ34Game12ItemUjamushi9BoidParms, global
/* 80206804 00203744  94 21 FB D0 */	stwu r1, -0x430(r1)
/* 80206808 00203748  7C 08 02 A6 */	mflr r0
/* 8020680C 0020374C  90 01 04 34 */	stw r0, 0x434(r1)
/* 80206810 00203750  DB E1 04 20 */	stfd f31, 0x420(r1)
/* 80206814 00203754  F3 E1 04 28 */	psq_st f31, 1064(r1), 0, qr0
/* 80206818 00203758  DB C1 04 10 */	stfd f30, 0x410(r1)
/* 8020681C 0020375C  F3 C1 04 18 */	psq_st f30, 1048(r1), 0, qr0
/* 80206820 00203760  DB A1 04 00 */	stfd f29, 0x400(r1)
/* 80206824 00203764  F3 A1 04 08 */	psq_st f29, 1032(r1), 0, qr0
/* 80206828 00203768  DB 81 03 F0 */	stfd f28, 0x3f0(r1)
/* 8020682C 0020376C  F3 81 03 F8 */	psq_st f28, 1016(r1), 0, qr0
/* 80206830 00203770  DB 61 03 E0 */	stfd f27, 0x3e0(r1)
/* 80206834 00203774  F3 61 03 E8 */	psq_st f27, 1000(r1), 0, qr0
/* 80206838 00203778  DB 41 03 D0 */	stfd f26, 0x3d0(r1)
/* 8020683C 0020377C  F3 41 03 D8 */	psq_st f26, 984(r1), 0, qr0
/* 80206840 00203780  DB 21 03 C0 */	stfd f25, 0x3c0(r1)
/* 80206844 00203784  F3 21 03 C8 */	psq_st f25, 968(r1), 0, qr0
/* 80206848 00203788  DB 01 03 B0 */	stfd f24, 0x3b0(r1)
/* 8020684C 0020378C  F3 01 03 B8 */	psq_st f24, 952(r1), 0, qr0
/* 80206850 00203790  DA E1 03 A0 */	stfd f23, 0x3a0(r1)
/* 80206854 00203794  F2 E1 03 A8 */	psq_st f23, 936(r1), 0, qr0
/* 80206858 00203798  DA C1 03 90 */	stfd f22, 0x390(r1)
/* 8020685C 0020379C  F2 C1 03 98 */	psq_st f22, 920(r1), 0, qr0
/* 80206860 002037A0  DA A1 03 80 */	stfd f21, 0x380(r1)
/* 80206864 002037A4  F2 A1 03 88 */	psq_st f21, 904(r1), 0, qr0
/* 80206868 002037A8  DA 81 03 70 */	stfd f20, 0x370(r1)
/* 8020686C 002037AC  F2 81 03 78 */	psq_st f20, 888(r1), 0, qr0
/* 80206870 002037B0  DA 61 03 60 */	stfd f19, 0x360(r1)
/* 80206874 002037B4  F2 61 03 68 */	psq_st f19, 872(r1), 0, qr0
/* 80206878 002037B8  DA 41 03 50 */	stfd f18, 0x350(r1)
/* 8020687C 002037BC  F2 41 03 58 */	psq_st f18, 856(r1), 0, qr0
/* 80206880 002037C0  DA 21 03 40 */	stfd f17, 0x340(r1)
/* 80206884 002037C4  F2 21 03 48 */	psq_st f17, 840(r1), 0, qr0
/* 80206888 002037C8  DA 01 03 30 */	stfd f16, 0x330(r1)
/* 8020688C 002037CC  F2 01 03 38 */	psq_st f16, 824(r1), 0, qr0
/* 80206890 002037D0  D9 E1 03 20 */	stfd f15, 0x320(r1)
/* 80206894 002037D4  F1 E1 03 28 */	psq_st f15, 808(r1), 0, qr0
/* 80206898 002037D8  D9 C1 03 10 */	stfd f14, 0x310(r1)
/* 8020689C 002037DC  F1 C1 03 18 */	psq_st f14, 792(r1), 0, qr0
/* 802068A0 002037E0  93 E1 03 0C */	stw r31, 0x30c(r1)
/* 802068A4 002037E4  93 C1 03 08 */	stw r30, 0x308(r1)
/* 802068A8 002037E8  93 A1 03 04 */	stw r29, 0x304(r1)
/* 802068AC 002037EC  93 81 03 00 */	stw r28, 0x300(r1)
/* 802068B0 002037F0  7C 7D 1B 78 */	mr r29, r3
/* 802068B4 002037F4  7C 9E 23 78 */	mr r30, r4
/* 802068B8 002037F8  88 03 00 AC */	lbz r0, 0xac(r3)
/* 802068BC 002037FC  28 00 00 06 */	cmplwi r0, 6
/* 802068C0 00203800  41 82 11 E0 */	beq .L_80207AA0
/* 802068C4 00203804  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 802068C8 00203808  28 00 00 04 */	cmplwi r0, 4
/* 802068CC 0020380C  C3 46 00 54 */	lfs f26, 0x54(r6)
/* 802068D0 00203810  40 82 00 7C */	bne .L_8020694C
/* 802068D4 00203814  C0 5D 00 B8 */	lfs f2, 0xb8(r29)
/* 802068D8 00203818  C0 02 BA E8 */	lfs f0, lbl_80519E48@sda21(r2)
/* 802068DC 0020381C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802068E0 00203820  40 80 00 18 */	bge .L_802068F8
/* 802068E4 00203824  EC 00 06 B2 */	fmuls f0, f0, f26
/* 802068E8 00203828  C0 22 BA D0 */	lfs f1, lbl_80519E30@sda21(r2)
/* 802068EC 0020382C  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 802068F0 00203830  D0 1D 00 B8 */	stfs f0, 0xb8(r29)
/* 802068F4 00203834  48 00 00 14 */	b .L_80206908
.L_802068F8:
/* 802068F8 00203838  C0 22 BA 38 */	lfs f1, lbl_80519D98@sda21(r2)
/* 802068FC 0020383C  C0 1D 00 B4 */	lfs f0, 0xb4(r29)
/* 80206900 00203840  EC 01 06 BC */	fnmsubs f0, f1, f26, f0
/* 80206904 00203844  D0 1D 00 B4 */	stfs f0, 0xb4(r29)
.L_80206908:
/* 80206908 00203848  7F A3 EB 78 */	mr r3, r29
/* 8020690C 0020384C  81 9D 00 0C */	lwz r12, 0xc(r29)
/* 80206910 00203850  81 8C 00 08 */	lwz r12, 8(r12)
/* 80206914 00203854  7D 89 03 A6 */	mtctr r12
/* 80206918 00203858  4E 80 04 21 */	bctrl 
/* 8020691C 0020385C  C0 22 BA BC */	lfs f1, lbl_80519E1C@sda21(r2)
/* 80206920 00203860  7F A3 EB 78 */	mr r3, r29
/* 80206924 00203864  4B FF FD 85 */	bl updateScale__Q34Game12ItemUjamushi3UjaFf
/* 80206928 00203868  C0 3D 00 B4 */	lfs f1, 0xb4(r29)
/* 8020692C 0020386C  C0 02 BA EC */	lfs f0, lbl_80519E4C@sda21(r2)
/* 80206930 00203870  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80206934 00203874  40 80 11 6C */	bge .L_80207AA0
/* 80206938 00203878  D0 1D 00 B4 */	stfs f0, 0xb4(r29)
/* 8020693C 0020387C  38 00 00 06 */	li r0, 6
/* 80206940 00203880  98 1D 00 AC */	stb r0, 0xac(r29)
/* 80206944 00203884  48 00 11 5C */	b .L_80207AA0
/* 80206948 00203888  48 00 11 58 */	b .L_80207AA0
.L_8020694C:
/* 8020694C 0020388C  80 7D 00 74 */	lwz r3, 0x74(r29)
/* 80206950 00203890  38 82 BA F0 */	addi r4, r2, lbl_80519E50@sda21
/* 80206954 00203894  C3 22 BA 34 */	lfs f25, lbl_80519D94@sda21(r2)
/* 80206958 00203898  38 A0 00 01 */	li r5, 1
/* 8020695C 0020389C  80 63 03 10 */	lwz r3, 0x310(r3)
/* 80206960 002038A0  C0 22 BA 38 */	lfs f1, lbl_80519D98@sda21(r2)
/* 80206964 002038A4  FF 00 C8 90 */	fmr f24, f25
/* 80206968 002038A8  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8020696C 002038AC  FE E0 C8 90 */	fmr f23, f25
/* 80206970 002038B0  D3 21 02 F4 */	stfs f25, 0x2f4(r1)
/* 80206974 002038B4  EF A1 00 32 */	fmuls f29, f1, f0
/* 80206978 002038B8  C3 DE 01 B4 */	lfs f30, 0x1b4(r30)
/* 8020697C 002038BC  D3 21 02 F0 */	stfs f25, 0x2f0(r1)
/* 80206980 002038C0  80 66 00 28 */	lwz r3, 0x28(r6)
/* 80206984 002038C4  48 22 41 75 */	bl _start__9SysTimersFPcb
/* 80206988 002038C8  7F A3 EB 78 */	mr r3, r29
/* 8020698C 002038CC  4B FF F9 59 */	bl updateBuffer__Q34Game12ItemUjamushi3UjaFv
/* 80206990 002038D0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80206994 002038D4  38 82 BA F0 */	addi r4, r2, lbl_80519E50@sda21
/* 80206998 002038D8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8020699C 002038DC  48 22 41 61 */	bl _stop__9SysTimersFPc
/* 802069A0 002038E0  80 9D 00 74 */	lwz r4, 0x74(r29)
/* 802069A4 002038E4  7F A5 EB 78 */	mr r5, r29
/* 802069A8 002038E8  38 61 01 DC */	addi r3, r1, 0x1dc
/* 802069AC 002038EC  38 84 00 7C */	addi r4, r4, 0x7c
/* 802069B0 002038F0  48 00 14 C1 */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 802069B4 002038F4  C0 41 01 DC */	lfs f2, 0x1dc(r1)
/* 802069B8 002038F8  38 61 02 B4 */	addi r3, r1, 0x2b4
/* 802069BC 002038FC  C0 21 01 E0 */	lfs f1, 0x1e0(r1)
/* 802069C0 00203900  C0 01 01 E4 */	lfs f0, 0x1e4(r1)
/* 802069C4 00203904  D0 41 02 B4 */	stfs f2, 0x2b4(r1)
/* 802069C8 00203908  D0 21 02 B8 */	stfs f1, 0x2b8(r1)
/* 802069CC 0020390C  D0 01 02 BC */	stfs f0, 0x2bc(r1)
/* 802069D0 00203910  48 00 14 11 */	bl "normalise__10Vector3<f>Fv"
/* 802069D4 00203914  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802069D8 00203918  38 82 BA FC */	addi r4, r2, lbl_80519E5C@sda21
/* 802069DC 0020391C  C3 82 BA F8 */	lfs f28, lbl_80519E58@sda21(r2)
/* 802069E0 00203920  38 A0 00 01 */	li r5, 1
/* 802069E4 00203924  80 63 00 28 */	lwz r3, 0x28(r3)
/* 802069E8 00203928  48 22 41 11 */	bl _start__9SysTimersFPcb
/* 802069EC 0020392C  38 7D 00 78 */	addi r3, r29, 0x78
/* 802069F0 00203930  4B F8 FC 99 */	bl updatable__Q24Game13UpdateContextFv
/* 802069F4 00203934  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802069F8 00203938  40 82 00 2C */	bne .L_80206A24
/* 802069FC 0020393C  C2 DD 00 84 */	lfs f22, 0x84(r29)
/* 80206A00 00203940  C2 BD 00 88 */	lfs f21, 0x88(r29)
/* 80206A04 00203944  C2 9D 00 8C */	lfs f20, 0x8c(r29)
/* 80206A08 00203948  C0 1D 00 90 */	lfs f0, 0x90(r29)
/* 80206A0C 0020394C  D0 01 02 B4 */	stfs f0, 0x2b4(r1)
/* 80206A10 00203950  C0 1D 00 94 */	lfs f0, 0x94(r29)
/* 80206A14 00203954  D0 01 02 B8 */	stfs f0, 0x2b8(r1)
/* 80206A18 00203958  C0 1D 00 98 */	lfs f0, 0x98(r29)
/* 80206A1C 0020395C  D0 01 02 BC */	stfs f0, 0x2bc(r1)
/* 80206A20 00203960  48 00 02 88 */	b .L_80206CA8
.L_80206A24:
/* 80206A24 00203964  C2 C2 BA 34 */	lfs f22, lbl_80519D94@sda21(r2)
/* 80206A28 00203968  EF 9D E8 2A */	fadds f28, f29, f29
/* 80206A2C 0020396C  3B 80 00 00 */	li r28, 0
/* 80206A30 00203970  D2 C1 02 B4 */	stfs f22, 0x2b4(r1)
/* 80206A34 00203974  FE A0 B0 90 */	fmr f21, f22
/* 80206A38 00203978  FE 80 B0 90 */	fmr f20, f22
/* 80206A3C 0020397C  D2 C1 02 B8 */	stfs f22, 0x2b8(r1)
/* 80206A40 00203980  D2 C1 02 BC */	stfs f22, 0x2bc(r1)
/* 80206A44 00203984  C0 1E 02 04 */	lfs f0, 0x204(r30)
/* 80206A48 00203988  80 BD 00 74 */	lwz r5, 0x74(r29)
/* 80206A4C 0020398C  ED DD 00 2A */	fadds f14, f29, f0
/* 80206A50 00203990  28 05 00 00 */	cmplwi r5, 0
/* 80206A54 00203994  41 82 00 08 */	beq .L_80206A5C
/* 80206A58 00203998  38 A5 00 20 */	addi r5, r5, 0x20
.L_80206A5C:
/* 80206A5C 0020399C  3C 60 80 4C */	lis r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
/* 80206A60 002039A0  38 00 00 00 */	li r0, 0
/* 80206A64 002039A4  38 83 FA 28 */	addi r4, r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
/* 80206A68 002039A8  90 01 02 B0 */	stw r0, 0x2b0(r1)
/* 80206A6C 002039AC  38 61 02 A4 */	addi r3, r1, 0x2a4
/* 80206A70 002039B0  90 81 02 A4 */	stw r4, 0x2a4(r1)
/* 80206A74 002039B4  90 01 02 A8 */	stw r0, 0x2a8(r1)
/* 80206A78 002039B8  90 A1 02 AC */	stw r5, 0x2ac(r1)
/* 80206A7C 002039BC  48 00 12 89 */	bl "first__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
/* 80206A80 002039C0  C0 02 BB 04 */	lfs f0, lbl_80519E64@sda21(r2)
/* 80206A84 002039C4  ED E0 07 72 */	fmuls f15, f0, f29
/* 80206A88 002039C8  48 00 01 50 */	b .L_80206BD8
.L_80206A8C:
/* 80206A8C 002039CC  80 61 02 AC */	lwz r3, 0x2ac(r1)
/* 80206A90 002039D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80206A94 002039D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80206A98 002039D8  7D 89 03 A6 */	mtctr r12
/* 80206A9C 002039DC  4E 80 04 21 */	bctrl 
/* 80206AA0 002039E0  7C 7F 1B 78 */	mr r31, r3
/* 80206AA4 002039E4  7C 1F E8 40 */	cmplw r31, r29
/* 80206AA8 002039E8  41 82 01 28 */	beq .L_80206BD0
/* 80206AAC 002039EC  88 1F 00 AC */	lbz r0, 0xac(r31)
/* 80206AB0 002039F0  28 00 00 02 */	cmplwi r0, 2
/* 80206AB4 002039F4  41 82 01 1C */	beq .L_80206BD0
/* 80206AB8 002039F8  7F A4 EB 78 */	mr r4, r29
/* 80206ABC 002039FC  7F E5 FB 78 */	mr r5, r31
/* 80206AC0 00203A00  38 61 01 D0 */	addi r3, r1, 0x1d0
/* 80206AC4 00203A04  48 00 13 AD */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 80206AC8 00203A08  C0 41 01 D0 */	lfs f2, 0x1d0(r1)
/* 80206ACC 00203A0C  38 61 02 98 */	addi r3, r1, 0x298
/* 80206AD0 00203A10  C0 21 01 D4 */	lfs f1, 0x1d4(r1)
/* 80206AD4 00203A14  C0 01 01 D8 */	lfs f0, 0x1d8(r1)
/* 80206AD8 00203A18  D0 41 02 98 */	stfs f2, 0x298(r1)
/* 80206ADC 00203A1C  D0 21 02 9C */	stfs f1, 0x29c(r1)
/* 80206AE0 00203A20  D0 01 02 A0 */	stfs f0, 0x2a0(r1)
/* 80206AE4 00203A24  48 00 12 FD */	bl "normalise__10Vector3<f>Fv"
/* 80206AE8 00203A28  FE 00 08 90 */	fmr f16, f1
/* 80206AEC 00203A2C  C2 3E 01 DC */	lfs f17, 0x1dc(r30)
/* 80206AF0 00203A30  FC 10 70 40 */	fcmpo cr0, f16, f14
/* 80206AF4 00203A34  40 80 00 BC */	bge .L_80206BB0
/* 80206AF8 00203A38  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80206AFC 00203A3C  FC 10 00 40 */	fcmpo cr0, f16, f0
/* 80206B00 00203A40  40 81 00 44 */	ble .L_80206B44
/* 80206B04 00203A44  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80206B08 00203A48  C0 21 02 98 */	lfs f1, 0x298(r1)
/* 80206B0C 00203A4C  C0 41 02 A0 */	lfs f2, 0x2a0(r1)
/* 80206B10 00203A50  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80206B14 00203A54  4B E2 E5 F5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80206B18 00203A58  48 20 B0 B9 */	bl roundAng__Ff
/* 80206B1C 00203A5C  C0 5D 00 5C */	lfs f2, 0x5c(r29)
/* 80206B20 00203A60  48 20 B0 DD */	bl angDist__Fff
/* 80206B24 00203A64  C0 02 BB 08 */	lfs f0, lbl_80519E68@sda21(r2)
/* 80206B28 00203A68  FC 40 0A 10 */	fabs f2, f1
/* 80206B2C 00203A6C  C0 22 BA D4 */	lfs f1, lbl_80519E34@sda21(r2)
/* 80206B30 00203A70  EC 00 04 72 */	fmuls f0, f0, f17
/* 80206B34 00203A74  FC 40 10 18 */	frsp f2, f2
/* 80206B38 00203A78  EC 01 00 32 */	fmuls f0, f1, f0
/* 80206B3C 00203A7C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80206B40 00203A80  41 81 00 90 */	bgt .L_80206BD0
.L_80206B44:
/* 80206B44 00203A84  C0 21 02 B4 */	lfs f1, 0x2b4(r1)
/* 80206B48 00203A88  38 61 02 8C */	addi r3, r1, 0x28c
/* 80206B4C 00203A8C  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80206B50 00203A90  C0 41 02 B8 */	lfs f2, 0x2b8(r1)
/* 80206B54 00203A94  EC 01 00 2A */	fadds f0, f1, f0
/* 80206B58 00203A98  C0 21 02 BC */	lfs f1, 0x2bc(r1)
/* 80206B5C 00203A9C  D0 01 02 B4 */	stfs f0, 0x2b4(r1)
/* 80206B60 00203AA0  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80206B64 00203AA4  EC 02 00 2A */	fadds f0, f2, f0
/* 80206B68 00203AA8  D0 01 02 B8 */	stfs f0, 0x2b8(r1)
/* 80206B6C 00203AAC  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80206B70 00203AB0  EC 01 00 2A */	fadds f0, f1, f0
/* 80206B74 00203AB4  D0 01 02 BC */	stfs f0, 0x2bc(r1)
/* 80206B78 00203AB8  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 80206B7C 00203ABC  D0 01 02 8C */	stfs f0, 0x28c(r1)
/* 80206B80 00203AC0  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 80206B84 00203AC4  D0 01 02 90 */	stfs f0, 0x290(r1)
/* 80206B88 00203AC8  C0 1F 00 58 */	lfs f0, 0x58(r31)
/* 80206B8C 00203ACC  D0 01 02 94 */	stfs f0, 0x294(r1)
/* 80206B90 00203AD0  48 00 12 51 */	bl "normalise__10Vector3<f>Fv"
/* 80206B94 00203AD4  C0 5F 00 50 */	lfs f2, 0x50(r31)
/* 80206B98 00203AD8  3B 9C 00 01 */	addi r28, r28, 1
/* 80206B9C 00203ADC  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 80206BA0 00203AE0  C0 1F 00 58 */	lfs f0, 0x58(r31)
/* 80206BA4 00203AE4  EE D6 10 2A */	fadds f22, f22, f2
/* 80206BA8 00203AE8  EE B5 08 2A */	fadds f21, f21, f1
/* 80206BAC 00203AEC  EE 94 00 2A */	fadds f20, f20, f0
.L_80206BB0:
/* 80206BB0 00203AF0  FC 10 E0 40 */	fcmpo cr0, f16, f28
/* 80206BB4 00203AF4  40 80 00 1C */	bge .L_80206BD0
/* 80206BB8 00203AF8  EC 4F 80 28 */	fsubs f2, f15, f16
/* 80206BBC 00203AFC  C0 21 02 A0 */	lfs f1, 0x2a0(r1)
/* 80206BC0 00203B00  C0 01 02 98 */	lfs f0, 0x298(r1)
/* 80206BC4 00203B04  FF 80 80 90 */	fmr f28, f16
/* 80206BC8 00203B08  EF 01 00 B2 */	fmuls f24, f1, f2
/* 80206BCC 00203B0C  EF 20 00 B2 */	fmuls f25, f0, f2
.L_80206BD0:
/* 80206BD0 00203B10  38 61 02 A4 */	addi r3, r1, 0x2a4
/* 80206BD4 00203B14  48 00 10 01 */	bl "next__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
.L_80206BD8:
/* 80206BD8 00203B18  80 61 02 AC */	lwz r3, 0x2ac(r1)
/* 80206BDC 00203B1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80206BE0 00203B20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80206BE4 00203B24  7D 89 03 A6 */	mtctr r12
/* 80206BE8 00203B28  4E 80 04 21 */	bctrl 
/* 80206BEC 00203B2C  80 81 02 A8 */	lwz r4, 0x2a8(r1)
/* 80206BF0 00203B30  7C 04 18 40 */	cmplw r4, r3
/* 80206BF4 00203B34  40 82 FE 98 */	bne .L_80206A8C
/* 80206BF8 00203B38  2C 1C 00 00 */	cmpwi r28, 0
/* 80206BFC 00203B3C  40 81 00 AC */	ble .L_80206CA8
/* 80206C00 00203B40  6F 83 80 00 */	xoris r3, r28, 0x8000
/* 80206C04 00203B44  3C 00 43 30 */	lis r0, 0x4330
/* 80206C08 00203B48  90 61 02 C4 */	stw r3, 0x2c4(r1)
/* 80206C0C 00203B4C  7F A5 EB 78 */	mr r5, r29
/* 80206C10 00203B50  C8 22 BA C0 */	lfd f1, lbl_80519E20@sda21(r2)
/* 80206C14 00203B54  38 61 01 C4 */	addi r3, r1, 0x1c4
/* 80206C18 00203B58  90 01 02 C0 */	stw r0, 0x2c0(r1)
/* 80206C1C 00203B5C  38 81 02 B4 */	addi r4, r1, 0x2b4
/* 80206C20 00203B60  C0 42 BA 40 */	lfs f2, lbl_80519DA0@sda21(r2)
/* 80206C24 00203B64  C8 01 02 C0 */	lfd f0, 0x2c0(r1)
/* 80206C28 00203B68  EC 00 08 28 */	fsubs f0, f0, f1
/* 80206C2C 00203B6C  EC 62 00 24 */	fdivs f3, f2, f0
/* 80206C30 00203B70  EE D6 00 F2 */	fmuls f22, f22, f3
/* 80206C34 00203B74  EE B5 00 F2 */	fmuls f21, f21, f3
/* 80206C38 00203B78  EE 94 00 F2 */	fmuls f20, f20, f3
/* 80206C3C 00203B7C  D2 DD 00 84 */	stfs f22, 0x84(r29)
/* 80206C40 00203B80  D2 BD 00 88 */	stfs f21, 0x88(r29)
/* 80206C44 00203B84  D2 9D 00 8C */	stfs f20, 0x8c(r29)
/* 80206C48 00203B88  C0 41 02 B4 */	lfs f2, 0x2b4(r1)
/* 80206C4C 00203B8C  C0 21 02 B8 */	lfs f1, 0x2b8(r1)
/* 80206C50 00203B90  C0 01 02 BC */	lfs f0, 0x2bc(r1)
/* 80206C54 00203B94  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80206C58 00203B98  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80206C5C 00203B9C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80206C60 00203BA0  D0 41 02 B4 */	stfs f2, 0x2b4(r1)
/* 80206C64 00203BA4  D0 21 02 B8 */	stfs f1, 0x2b8(r1)
/* 80206C68 00203BA8  D0 01 02 BC */	stfs f0, 0x2bc(r1)
/* 80206C6C 00203BAC  48 00 12 05 */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 80206C70 00203BB0  C0 41 01 C4 */	lfs f2, 0x1c4(r1)
/* 80206C74 00203BB4  38 61 02 B4 */	addi r3, r1, 0x2b4
/* 80206C78 00203BB8  C0 21 01 C8 */	lfs f1, 0x1c8(r1)
/* 80206C7C 00203BBC  C0 01 01 CC */	lfs f0, 0x1cc(r1)
/* 80206C80 00203BC0  D0 41 02 B4 */	stfs f2, 0x2b4(r1)
/* 80206C84 00203BC4  D0 21 02 B8 */	stfs f1, 0x2b8(r1)
/* 80206C88 00203BC8  D0 01 02 BC */	stfs f0, 0x2bc(r1)
/* 80206C8C 00203BCC  48 00 11 55 */	bl "normalise__10Vector3<f>Fv"
/* 80206C90 00203BD0  C0 01 02 B4 */	lfs f0, 0x2b4(r1)
/* 80206C94 00203BD4  D0 1D 00 90 */	stfs f0, 0x90(r29)
/* 80206C98 00203BD8  C0 01 02 B8 */	lfs f0, 0x2b8(r1)
/* 80206C9C 00203BDC  D0 1D 00 94 */	stfs f0, 0x94(r29)
/* 80206CA0 00203BE0  C0 01 02 BC */	lfs f0, 0x2bc(r1)
/* 80206CA4 00203BE4  D0 1D 00 98 */	stfs f0, 0x98(r29)
.L_80206CA8:
/* 80206CA8 00203BE8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80206CAC 00203BEC  38 82 BA FC */	addi r4, r2, lbl_80519E5C@sda21
/* 80206CB0 00203BF0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80206CB4 00203BF4  48 22 3E 49 */	bl _stop__9SysTimersFPc
/* 80206CB8 00203BF8  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80206CBC 00203BFC  7F A5 EB 78 */	mr r5, r29
/* 80206CC0 00203C00  38 61 01 B8 */	addi r3, r1, 0x1b8
/* 80206CC4 00203C04  38 9D 00 44 */	addi r4, r29, 0x44
/* 80206CC8 00203C08  D0 01 02 80 */	stfs f0, 0x280(r1)
/* 80206CCC 00203C0C  D0 01 02 84 */	stfs f0, 0x284(r1)
/* 80206CD0 00203C10  D0 01 02 88 */	stfs f0, 0x288(r1)
/* 80206CD4 00203C14  48 00 11 9D */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 80206CD8 00203C18  C0 41 01 B8 */	lfs f2, 0x1b8(r1)
/* 80206CDC 00203C1C  38 61 02 80 */	addi r3, r1, 0x280
/* 80206CE0 00203C20  C0 21 01 BC */	lfs f1, 0x1bc(r1)
/* 80206CE4 00203C24  C0 01 01 C0 */	lfs f0, 0x1c0(r1)
/* 80206CE8 00203C28  D0 41 02 80 */	stfs f2, 0x280(r1)
/* 80206CEC 00203C2C  D0 21 02 84 */	stfs f1, 0x284(r1)
/* 80206CF0 00203C30  D0 01 02 88 */	stfs f0, 0x288(r1)
/* 80206CF4 00203C34  48 00 10 ED */	bl "normalise__10Vector3<f>Fv"
/* 80206CF8 00203C38  C3 E2 BA 34 */	lfs f31, lbl_80519D94@sda21(r2)
/* 80206CFC 00203C3C  38 7D 00 78 */	addi r3, r29, 0x78
/* 80206D00 00203C40  FE 60 F8 90 */	fmr f19, f31
/* 80206D04 00203C44  FE 40 F8 90 */	fmr f18, f31
/* 80206D08 00203C48  4B F8 F9 81 */	bl updatable__Q24Game13UpdateContextFv
/* 80206D0C 00203C4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80206D10 00203C50  41 82 00 E8 */	beq .L_80206DF8
/* 80206D14 00203C54  C0 02 BB 04 */	lfs f0, lbl_80519E64@sda21(r2)
/* 80206D18 00203C58  80 BD 00 74 */	lwz r5, 0x74(r29)
/* 80206D1C 00203C5C  ED C0 07 72 */	fmuls f14, f0, f29
/* 80206D20 00203C60  28 05 00 00 */	cmplwi r5, 0
/* 80206D24 00203C64  41 82 00 08 */	beq .L_80206D2C
/* 80206D28 00203C68  38 A5 00 20 */	addi r5, r5, 0x20
.L_80206D2C:
/* 80206D2C 00203C6C  3C 60 80 4C */	lis r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
/* 80206D30 00203C70  38 00 00 00 */	li r0, 0
/* 80206D34 00203C74  38 83 FA 28 */	addi r4, r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
/* 80206D38 00203C78  90 01 02 7C */	stw r0, 0x27c(r1)
/* 80206D3C 00203C7C  38 61 02 70 */	addi r3, r1, 0x270
/* 80206D40 00203C80  90 81 02 70 */	stw r4, 0x270(r1)
/* 80206D44 00203C84  90 01 02 74 */	stw r0, 0x274(r1)
/* 80206D48 00203C88  90 A1 02 78 */	stw r5, 0x278(r1)
/* 80206D4C 00203C8C  48 00 0F B9 */	bl "first__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
/* 80206D50 00203C90  48 00 00 84 */	b .L_80206DD4
.L_80206D54:
/* 80206D54 00203C94  80 61 02 78 */	lwz r3, 0x278(r1)
/* 80206D58 00203C98  81 83 00 00 */	lwz r12, 0(r3)
/* 80206D5C 00203C9C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80206D60 00203CA0  7D 89 03 A6 */	mtctr r12
/* 80206D64 00203CA4  4E 80 04 21 */	bctrl 
/* 80206D68 00203CA8  7C 03 E8 40 */	cmplw r3, r29
/* 80206D6C 00203CAC  41 82 00 60 */	beq .L_80206DCC
/* 80206D70 00203CB0  7F A4 EB 78 */	mr r4, r29
/* 80206D74 00203CB4  7C 65 1B 78 */	mr r5, r3
/* 80206D78 00203CB8  38 61 01 AC */	addi r3, r1, 0x1ac
/* 80206D7C 00203CBC  48 00 10 F5 */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 80206D80 00203CC0  C0 41 01 AC */	lfs f2, 0x1ac(r1)
/* 80206D84 00203CC4  38 61 02 64 */	addi r3, r1, 0x264
/* 80206D88 00203CC8  C0 21 01 B0 */	lfs f1, 0x1b0(r1)
/* 80206D8C 00203CCC  C0 01 01 B4 */	lfs f0, 0x1b4(r1)
/* 80206D90 00203CD0  D0 41 02 64 */	stfs f2, 0x264(r1)
/* 80206D94 00203CD4  D0 21 02 68 */	stfs f1, 0x268(r1)
/* 80206D98 00203CD8  D0 01 02 6C */	stfs f0, 0x26c(r1)
/* 80206D9C 00203CDC  48 00 10 45 */	bl "normalise__10Vector3<f>Fv"
/* 80206DA0 00203CE0  FC 01 70 40 */	fcmpo cr0, f1, f14
/* 80206DA4 00203CE4  40 80 00 28 */	bge .L_80206DCC
/* 80206DA8 00203CE8  C3 E1 02 64 */	lfs f31, 0x264(r1)
/* 80206DAC 00203CEC  FD C0 08 90 */	fmr f14, f1
/* 80206DB0 00203CF0  C2 61 02 68 */	lfs f19, 0x268(r1)
/* 80206DB4 00203CF4  C2 41 02 6C */	lfs f18, 0x26c(r1)
/* 80206DB8 00203CF8  D3 FD 00 9C */	stfs f31, 0x9c(r29)
/* 80206DBC 00203CFC  C0 01 02 68 */	lfs f0, 0x268(r1)
/* 80206DC0 00203D00  D0 1D 00 A0 */	stfs f0, 0xa0(r29)
/* 80206DC4 00203D04  C0 01 02 6C */	lfs f0, 0x26c(r1)
/* 80206DC8 00203D08  D0 1D 00 A4 */	stfs f0, 0xa4(r29)
.L_80206DCC:
/* 80206DCC 00203D0C  38 61 02 70 */	addi r3, r1, 0x270
/* 80206DD0 00203D10  48 00 0E 05 */	bl "next__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
.L_80206DD4:
/* 80206DD4 00203D14  80 61 02 78 */	lwz r3, 0x278(r1)
/* 80206DD8 00203D18  81 83 00 00 */	lwz r12, 0(r3)
/* 80206DDC 00203D1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80206DE0 00203D20  7D 89 03 A6 */	mtctr r12
/* 80206DE4 00203D24  4E 80 04 21 */	bctrl 
/* 80206DE8 00203D28  80 81 02 74 */	lwz r4, 0x274(r1)
/* 80206DEC 00203D2C  7C 04 18 40 */	cmplw r4, r3
/* 80206DF0 00203D30  40 82 FF 64 */	bne .L_80206D54
/* 80206DF4 00203D34  48 00 00 10 */	b .L_80206E04
.L_80206DF8:
/* 80206DF8 00203D38  C3 FD 00 9C */	lfs f31, 0x9c(r29)
/* 80206DFC 00203D3C  C2 7D 00 A0 */	lfs f19, 0xa0(r29)
/* 80206E00 00203D40  C2 5D 00 A4 */	lfs f18, 0xa4(r29)
.L_80206E04:
/* 80206E04 00203D44  80 DD 00 74 */	lwz r6, 0x74(r29)
/* 80206E08 00203D48  7F A5 EB 78 */	mr r5, r29
/* 80206E0C 00203D4C  C2 22 BA 34 */	lfs f17, lbl_80519D94@sda21(r2)
/* 80206E10 00203D50  38 61 01 A0 */	addi r3, r1, 0x1a0
/* 80206E14 00203D54  C0 06 00 6C */	lfs f0, 0x6c(r6)
/* 80206E18 00203D58  38 81 02 58 */	addi r4, r1, 0x258
/* 80206E1C 00203D5C  D2 21 02 EC */	stfs f17, 0x2ec(r1)
/* 80206E20 00203D60  D0 01 02 58 */	stfs f0, 0x258(r1)
/* 80206E24 00203D64  C0 06 00 70 */	lfs f0, 0x70(r6)
/* 80206E28 00203D68  D2 21 02 E8 */	stfs f17, 0x2e8(r1)
/* 80206E2C 00203D6C  D0 01 02 5C */	stfs f0, 0x25c(r1)
/* 80206E30 00203D70  C0 06 00 74 */	lfs f0, 0x74(r6)
/* 80206E34 00203D74  D0 01 02 60 */	stfs f0, 0x260(r1)
/* 80206E38 00203D78  C1 C6 00 78 */	lfs f14, 0x78(r6)
/* 80206E3C 00203D7C  48 00 10 35 */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 80206E40 00203D80  C0 41 01 A0 */	lfs f2, 0x1a0(r1)
/* 80206E44 00203D84  38 61 02 4C */	addi r3, r1, 0x24c
/* 80206E48 00203D88  C0 21 01 A4 */	lfs f1, 0x1a4(r1)
/* 80206E4C 00203D8C  C0 01 01 A8 */	lfs f0, 0x1a8(r1)
/* 80206E50 00203D90  D0 41 02 4C */	stfs f2, 0x24c(r1)
/* 80206E54 00203D94  D0 21 02 50 */	stfs f1, 0x250(r1)
/* 80206E58 00203D98  D0 01 02 54 */	stfs f0, 0x254(r1)
/* 80206E5C 00203D9C  48 00 0F 85 */	bl "normalise__10Vector3<f>Fv"
/* 80206E60 00203DA0  FF 60 08 90 */	fmr f27, f1
/* 80206E64 00203DA4  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80206E68 00203DA8  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 80206E6C 00203DAC  40 81 00 A8 */	ble .L_80206F14
/* 80206E70 00203DB0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80206E74 00203DB4  C0 21 02 4C */	lfs f1, 0x24c(r1)
/* 80206E78 00203DB8  C0 41 02 54 */	lfs f2, 0x254(r1)
/* 80206E7C 00203DBC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80206E80 00203DC0  4B E2 E2 89 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80206E84 00203DC4  C0 42 BB 0C */	lfs f2, lbl_80519E6C@sda21(r2)
/* 80206E88 00203DC8  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80206E8C 00203DCC  EC 22 00 72 */	fmuls f1, f2, f1
/* 80206E90 00203DD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80206E94 00203DD4  40 80 00 30 */	bge .L_80206EC4
/* 80206E98 00203DD8  C0 02 BA E0 */	lfs f0, lbl_80519E40@sda21(r2)
/* 80206E9C 00203DDC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80206EA0 00203DE0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80206EA4 00203DE4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80206EA8 00203DE8  FC 00 00 1E */	fctiwz f0, f0
/* 80206EAC 00203DEC  D8 01 02 C0 */	stfd f0, 0x2c0(r1)
/* 80206EB0 00203DF0  80 01 02 C4 */	lwz r0, 0x2c4(r1)
/* 80206EB4 00203DF4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80206EB8 00203DF8  7C 03 04 2E */	lfsx f0, r3, r0
/* 80206EBC 00203DFC  FC 40 00 50 */	fneg f2, f0
/* 80206EC0 00203E00  48 00 00 28 */	b .L_80206EE8
.L_80206EC4:
/* 80206EC4 00203E04  C0 02 BA E4 */	lfs f0, lbl_80519E44@sda21(r2)
/* 80206EC8 00203E08  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80206ECC 00203E0C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80206ED0 00203E10  EC 01 00 32 */	fmuls f0, f1, f0
/* 80206ED4 00203E14  FC 00 00 1E */	fctiwz f0, f0
/* 80206ED8 00203E18  D8 01 02 C8 */	stfd f0, 0x2c8(r1)
/* 80206EDC 00203E1C  80 01 02 CC */	lwz r0, 0x2cc(r1)
/* 80206EE0 00203E20  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80206EE4 00203E24  7C 43 04 2E */	lfsx f2, r3, r0
.L_80206EE8:
/* 80206EE8 00203E28  C0 22 BA 70 */	lfs f1, lbl_80519DD0@sda21(r2)
/* 80206EEC 00203E2C  C0 02 BB 10 */	lfs f0, lbl_80519E70@sda21(r2)
/* 80206EF0 00203E30  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 80206EF4 00203E34  EC 0E 00 32 */	fmuls f0, f14, f0
/* 80206EF8 00203E38  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 80206EFC 00203E3C  40 81 00 18 */	ble .L_80206F14
/* 80206F00 00203E40  C0 01 02 50 */	lfs f0, 0x250(r1)
/* 80206F04 00203E44  C2 21 02 4C */	lfs f17, 0x24c(r1)
/* 80206F08 00203E48  D0 01 02 EC */	stfs f0, 0x2ec(r1)
/* 80206F0C 00203E4C  C0 01 02 54 */	lfs f0, 0x254(r1)
/* 80206F10 00203E50  D0 01 02 E8 */	stfs f0, 0x2e8(r1)
.L_80206F14:
/* 80206F14 00203E54  C0 22 BB 08 */	lfs f1, lbl_80519E68@sda21(r2)
/* 80206F18 00203E58  C0 1E 02 54 */	lfs f0, 0x254(r30)
/* 80206F1C 00203E5C  C0 42 BA D4 */	lfs f2, lbl_80519E34@sda21(r2)
/* 80206F20 00203E60  EC 01 00 32 */	fmuls f0, f1, f0
/* 80206F24 00203E64  ED C2 00 32 */	fmuls f14, f2, f0
/* 80206F28 00203E68  4B EC 26 79 */	bl rand
/* 80206F2C 00203E6C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80206F30 00203E70  3C 00 43 30 */	lis r0, 0x4330
/* 80206F34 00203E74  90 61 02 CC */	stw r3, 0x2cc(r1)
/* 80206F38 00203E78  C8 22 BA C0 */	lfd f1, lbl_80519E20@sda21(r2)
/* 80206F3C 00203E7C  90 01 02 C8 */	stw r0, 0x2c8(r1)
/* 80206F40 00203E80  C0 62 BA B4 */	lfs f3, lbl_80519E14@sda21(r2)
/* 80206F44 00203E84  C8 01 02 C8 */	lfd f0, 0x2c8(r1)
/* 80206F48 00203E88  C0 42 BA B0 */	lfs f2, lbl_80519E10@sda21(r2)
/* 80206F4C 00203E8C  EC 80 08 28 */	fsubs f4, f0, f1
/* 80206F50 00203E90  C0 3D 00 5C */	lfs f1, 0x5c(r29)
/* 80206F54 00203E94  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80206F58 00203E98  EC 64 18 24 */	fdivs f3, f4, f3
/* 80206F5C 00203E9C  EC 43 10 28 */	fsubs f2, f3, f2
/* 80206F60 00203EA0  EC 6E 08 BA */	fmadds f3, f14, f2, f1
/* 80206F64 00203EA4  FC 20 18 90 */	fmr f1, f3
/* 80206F68 00203EA8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80206F6C 00203EAC  40 80 00 08 */	bge .L_80206F74
/* 80206F70 00203EB0  FC 20 18 50 */	fneg f1, f3
.L_80206F74:
/* 80206F74 00203EB4  C0 42 BA E4 */	lfs f2, lbl_80519E44@sda21(r2)
/* 80206F78 00203EB8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80206F7C 00203EBC  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80206F80 00203EC0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80206F84 00203EC4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80206F88 00203EC8  3B E3 00 04 */	addi r31, r3, 4
/* 80206F8C 00203ECC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80206F90 00203ED0  FC 00 08 1E */	fctiwz f0, f1
/* 80206F94 00203ED4  D8 01 02 C0 */	stfd f0, 0x2c0(r1)
/* 80206F98 00203ED8  80 01 02 C4 */	lwz r0, 0x2c4(r1)
/* 80206F9C 00203EDC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80206FA0 00203EE0  7C 1F 04 2E */	lfsx f0, r31, r0
/* 80206FA4 00203EE4  D0 01 02 FC */	stfs f0, 0x2fc(r1)
/* 80206FA8 00203EE8  40 80 00 2C */	bge .L_80206FD4
/* 80206FAC 00203EEC  C0 02 BA E0 */	lfs f0, lbl_80519E40@sda21(r2)
/* 80206FB0 00203EF0  EC 03 00 32 */	fmuls f0, f3, f0
/* 80206FB4 00203EF4  FC 00 00 1E */	fctiwz f0, f0
/* 80206FB8 00203EF8  D8 01 02 D0 */	stfd f0, 0x2d0(r1)
/* 80206FBC 00203EFC  80 01 02 D4 */	lwz r0, 0x2d4(r1)
/* 80206FC0 00203F00  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80206FC4 00203F04  7C 03 04 2E */	lfsx f0, r3, r0
/* 80206FC8 00203F08  FC 00 00 50 */	fneg f0, f0
/* 80206FCC 00203F0C  D0 01 02 F8 */	stfs f0, 0x2f8(r1)
/* 80206FD0 00203F10  48 00 00 20 */	b .L_80206FF0
.L_80206FD4:
/* 80206FD4 00203F14  EC 03 00 B2 */	fmuls f0, f3, f2
/* 80206FD8 00203F18  FC 00 00 1E */	fctiwz f0, f0
/* 80206FDC 00203F1C  D8 01 02 D8 */	stfd f0, 0x2d8(r1)
/* 80206FE0 00203F20  80 01 02 DC */	lwz r0, 0x2dc(r1)
/* 80206FE4 00203F24  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80206FE8 00203F28  7C 03 04 2E */	lfsx f0, r3, r0
/* 80206FEC 00203F2C  D0 01 02 F8 */	stfs f0, 0x2f8(r1)
.L_80206FF0:
/* 80206FF0 00203F30  C3 62 BA 34 */	lfs f27, lbl_80519D94@sda21(r2)
/* 80206FF4 00203F34  38 80 00 00 */	li r4, 0
/* 80206FF8 00203F38  80 0D 92 E0 */	lwz r0, naviMgr__4Game@sda21(r13)
/* 80206FFC 00203F3C  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 80207000 00203F40  38 63 BC B4 */	addi r3, r3, "__vt__22Iterator<Q24Game4Navi>"@l
/* 80207004 00203F44  FE 00 D8 90 */	fmr f16, f27
/* 80207008 00203F48  FD E0 D8 90 */	fmr f15, f27
/* 8020700C 00203F4C  90 61 02 3C */	stw r3, 0x23c(r1)
/* 80207010 00203F50  38 61 02 3C */	addi r3, r1, 0x23c
/* 80207014 00203F54  90 81 02 48 */	stw r4, 0x248(r1)
/* 80207018 00203F58  90 81 02 40 */	stw r4, 0x240(r1)
/* 8020701C 00203F5C  90 01 02 44 */	stw r0, 0x244(r1)
/* 80207020 00203F60  4B F0 EE 6D */	bl "first__22Iterator<Q24Game4Navi>Fv"
/* 80207024 00203F64  C0 22 BB 14 */	lfs f1, lbl_80519E74@sda21(r2)
/* 80207028 00203F68  EC 01 E8 2A */	fadds f0, f1, f29
/* 8020702C 00203F6C  ED C1 00 2A */	fadds f14, f1, f0
/* 80207030 00203F70  48 00 00 D0 */	b .L_80207100
.L_80207034:
/* 80207034 00203F74  80 61 02 44 */	lwz r3, 0x244(r1)
/* 80207038 00203F78  81 83 00 00 */	lwz r12, 0(r3)
/* 8020703C 00203F7C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80207040 00203F80  7D 89 03 A6 */	mtctr r12
/* 80207044 00203F84  4E 80 04 21 */	bctrl 
/* 80207048 00203F88  81 83 00 00 */	lwz r12, 0(r3)
/* 8020704C 00203F8C  7C 7C 1B 78 */	mr r28, r3
/* 80207050 00203F90  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80207054 00203F94  7D 89 03 A6 */	mtctr r12
/* 80207058 00203F98  4E 80 04 21 */	bctrl 
/* 8020705C 00203F9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80207060 00203FA0  41 82 00 98 */	beq .L_802070F8
/* 80207064 00203FA4  7F 84 E3 78 */	mr r4, r28
/* 80207068 00203FA8  38 61 01 88 */	addi r3, r1, 0x188
/* 8020706C 00203FAC  81 9C 00 00 */	lwz r12, 0(r28)
/* 80207070 00203FB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80207074 00203FB4  7D 89 03 A6 */	mtctr r12
/* 80207078 00203FB8  4E 80 04 21 */	bctrl 
/* 8020707C 00203FBC  7F A5 EB 78 */	mr r5, r29
/* 80207080 00203FC0  38 61 01 94 */	addi r3, r1, 0x194
/* 80207084 00203FC4  38 81 01 88 */	addi r4, r1, 0x188
/* 80207088 00203FC8  48 00 0D E9 */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 8020708C 00203FCC  C0 41 01 94 */	lfs f2, 0x194(r1)
/* 80207090 00203FD0  38 61 02 30 */	addi r3, r1, 0x230
/* 80207094 00203FD4  C0 21 01 98 */	lfs f1, 0x198(r1)
/* 80207098 00203FD8  C0 01 01 9C */	lfs f0, 0x19c(r1)
/* 8020709C 00203FDC  D0 41 02 30 */	stfs f2, 0x230(r1)
/* 802070A0 00203FE0  D0 21 02 34 */	stfs f1, 0x234(r1)
/* 802070A4 00203FE4  D0 01 02 38 */	stfs f0, 0x238(r1)
/* 802070A8 00203FE8  48 00 0D 39 */	bl "normalise__10Vector3<f>Fv"
/* 802070AC 00203FEC  FC 01 70 40 */	fcmpo cr0, f1, f14
/* 802070B0 00203FF0  40 80 00 30 */	bge .L_802070E0
/* 802070B4 00203FF4  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 802070B8 00203FF8  40 80 00 40 */	bge .L_802070F8
/* 802070BC 00203FFC  EC 4E 08 28 */	fsubs f2, f14, f1
/* 802070C0 00204000  C0 62 BB 18 */	lfs f3, lbl_80519E78@sda21(r2)
/* 802070C4 00204004  FF 80 08 90 */	fmr f28, f1
/* 802070C8 00204008  C0 81 02 38 */	lfs f4, 0x238(r1)
/* 802070CC 0020400C  C0 01 02 30 */	lfs f0, 0x230(r1)
/* 802070D0 00204010  EC 23 00 B2 */	fmuls f1, f3, f2
/* 802070D4 00204014  EF 04 00 72 */	fmuls f24, f4, f1
/* 802070D8 00204018  EF 20 00 72 */	fmuls f25, f0, f1
/* 802070DC 0020401C  48 00 00 1C */	b .L_802070F8
.L_802070E0:
/* 802070E0 00204020  C0 02 BB 1C */	lfs f0, lbl_80519E7C@sda21(r2)
/* 802070E4 00204024  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802070E8 00204028  41 81 00 10 */	bgt .L_802070F8
/* 802070EC 0020402C  C3 61 02 30 */	lfs f27, 0x230(r1)
/* 802070F0 00204030  C2 01 02 34 */	lfs f16, 0x234(r1)
/* 802070F4 00204034  C1 E1 02 38 */	lfs f15, 0x238(r1)
.L_802070F8:
/* 802070F8 00204038  38 61 02 3C */	addi r3, r1, 0x23c
/* 802070FC 0020403C  4B F0 EC AD */	bl "next__22Iterator<Q24Game4Navi>Fv"
.L_80207100:
/* 80207100 00204040  80 61 02 44 */	lwz r3, 0x244(r1)
/* 80207104 00204044  81 83 00 00 */	lwz r12, 0(r3)
/* 80207108 00204048  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020710C 0020404C  7D 89 03 A6 */	mtctr r12
/* 80207110 00204050  4E 80 04 21 */	bctrl 
/* 80207114 00204054  80 81 02 40 */	lwz r4, 0x240(r1)
/* 80207118 00204058  7C 04 18 40 */	cmplw r4, r3
/* 8020711C 0020405C  40 82 FF 18 */	bne .L_80207034
/* 80207120 00204060  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80207124 00204064  7F A5 EB 78 */	mr r5, r29
/* 80207128 00204068  38 61 01 7C */	addi r3, r1, 0x17c
/* 8020712C 0020406C  D0 01 02 24 */	stfs f0, 0x224(r1)
/* 80207130 00204070  D0 01 02 28 */	stfs f0, 0x228(r1)
/* 80207134 00204074  D0 01 02 2C */	stfs f0, 0x22c(r1)
/* 80207138 00204078  80 9D 00 74 */	lwz r4, 0x74(r29)
/* 8020713C 0020407C  38 84 00 7C */	addi r4, r4, 0x7c
/* 80207140 00204080  48 00 0D 31 */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 80207144 00204084  C0 41 01 7C */	lfs f2, 0x17c(r1)
/* 80207148 00204088  38 61 02 24 */	addi r3, r1, 0x224
/* 8020714C 0020408C  C0 21 01 80 */	lfs f1, 0x180(r1)
/* 80207150 00204090  C0 01 01 84 */	lfs f0, 0x184(r1)
/* 80207154 00204094  D0 41 02 24 */	stfs f2, 0x224(r1)
/* 80207158 00204098  D0 21 02 28 */	stfs f1, 0x228(r1)
/* 8020715C 0020409C  D0 01 02 2C */	stfs f0, 0x22c(r1)
/* 80207160 002040A0  48 00 0C 81 */	bl "normalise__10Vector3<f>Fv"
/* 80207164 002040A4  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80207168 002040A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8020716C 002040AC  40 80 00 18 */	bge .L_80207184
/* 80207170 002040B0  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80207174 002040B4  28 00 00 03 */	cmplwi r0, 3
/* 80207178 002040B8  40 82 00 0C */	bne .L_80207184
/* 8020717C 002040BC  38 00 00 06 */	li r0, 6
/* 80207180 002040C0  98 1D 00 AC */	stb r0, 0xac(r29)
.L_80207184:
/* 80207184 002040C4  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 80207188 002040C8  C3 A2 BA 34 */	lfs f29, lbl_80519D94@sda21(r2)
/* 8020718C 002040CC  80 63 00 00 */	lwz r3, 0(r3)
/* 80207190 002040D0  D3 A1 02 E4 */	stfs f29, 0x2e4(r1)
/* 80207194 002040D4  28 03 00 00 */	cmplwi r3, 0
/* 80207198 002040D8  D3 A1 02 E0 */	stfs f29, 0x2e0(r1)
/* 8020719C 002040DC  41 82 01 F8 */	beq .L_80207394
/* 802071A0 002040E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802071A4 002040E4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802071A8 002040E8  7D 89 03 A6 */	mtctr r12
/* 802071AC 002040EC  4E 80 04 21 */	bctrl 
/* 802071B0 002040F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802071B4 002040F4  41 82 01 E0 */	beq .L_80207394
/* 802071B8 002040F8  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 802071BC 002040FC  38 61 01 64 */	addi r3, r1, 0x164
/* 802071C0 00204100  80 84 00 00 */	lwz r4, 0(r4)
/* 802071C4 00204104  81 84 00 00 */	lwz r12, 0(r4)
/* 802071C8 00204108  81 8C 00 08 */	lwz r12, 8(r12)
/* 802071CC 0020410C  7D 89 03 A6 */	mtctr r12
/* 802071D0 00204110  4E 80 04 21 */	bctrl 
/* 802071D4 00204114  7F A5 EB 78 */	mr r5, r29
/* 802071D8 00204118  38 61 01 70 */	addi r3, r1, 0x170
/* 802071DC 0020411C  38 81 01 64 */	addi r4, r1, 0x164
/* 802071E0 00204120  48 00 0C 91 */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 802071E4 00204124  C0 41 01 70 */	lfs f2, 0x170(r1)
/* 802071E8 00204128  38 61 02 18 */	addi r3, r1, 0x218
/* 802071EC 0020412C  C0 21 01 74 */	lfs f1, 0x174(r1)
/* 802071F0 00204130  C0 01 01 78 */	lfs f0, 0x178(r1)
/* 802071F4 00204134  D0 41 02 18 */	stfs f2, 0x218(r1)
/* 802071F8 00204138  D0 21 02 1C */	stfs f1, 0x21c(r1)
/* 802071FC 0020413C  D0 01 02 20 */	stfs f0, 0x220(r1)
/* 80207200 00204140  48 00 0B E1 */	bl "normalise__10Vector3<f>Fv"
/* 80207204 00204144  FC 01 70 40 */	fcmpo cr0, f1, f14
/* 80207208 00204148  40 80 00 2C */	bge .L_80207234
/* 8020720C 0020414C  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 80207210 00204150  40 80 01 84 */	bge .L_80207394
/* 80207214 00204154  EC 2E 08 28 */	fsubs f1, f14, f1
/* 80207218 00204158  C0 42 BB 18 */	lfs f2, lbl_80519E78@sda21(r2)
/* 8020721C 0020415C  C0 61 02 20 */	lfs f3, 0x220(r1)
/* 80207220 00204160  C0 01 02 18 */	lfs f0, 0x218(r1)
/* 80207224 00204164  EC 22 00 72 */	fmuls f1, f2, f1
/* 80207228 00204168  EF 03 00 72 */	fmuls f24, f3, f1
/* 8020722C 0020416C  EF 20 00 72 */	fmuls f25, f0, f1
/* 80207230 00204170  48 00 01 64 */	b .L_80207394
.L_80207234:
/* 80207234 00204174  C0 02 BB 1C */	lfs f0, lbl_80519E7C@sda21(r2)
/* 80207238 00204178  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8020723C 0020417C  41 81 01 58 */	bgt .L_80207394
/* 80207240 00204180  C0 01 02 1C */	lfs f0, 0x21c(r1)
/* 80207244 00204184  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80207248 00204188  D0 01 02 E4 */	stfs f0, 0x2e4(r1)
/* 8020724C 0020418C  C0 01 02 20 */	lfs f0, 0x220(r1)
/* 80207250 00204190  28 00 00 00 */	cmplwi r0, 0
/* 80207254 00204194  C3 A1 02 18 */	lfs f29, 0x218(r1)
/* 80207258 00204198  D0 01 02 E0 */	stfs f0, 0x2e0(r1)
/* 8020725C 0020419C  40 82 01 38 */	bne .L_80207394
/* 80207260 002041A0  C0 02 BA 80 */	lfs f0, lbl_80519DE0@sda21(r2)
/* 80207264 002041A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80207268 002041A8  40 80 01 2C */	bge .L_80207394
/* 8020726C 002041AC  38 00 00 02 */	li r0, 2
/* 80207270 002041B0  98 1D 00 AC */	stb r0, 0xac(r29)
/* 80207274 002041B4  4B EC 23 2D */	bl rand
/* 80207278 002041B8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8020727C 002041BC  3C 00 43 30 */	lis r0, 0x4330
/* 80207280 002041C0  90 61 02 DC */	stw r3, 0x2dc(r1)
/* 80207284 002041C4  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 80207288 002041C8  90 01 02 D8 */	stw r0, 0x2d8(r1)
/* 8020728C 002041CC  C0 42 BA B4 */	lfs f2, lbl_80519E14@sda21(r2)
/* 80207290 002041D0  C8 01 02 D8 */	lfd f0, 0x2d8(r1)
/* 80207294 002041D4  C0 22 BA 38 */	lfs f1, lbl_80519D98@sda21(r2)
/* 80207298 002041D8  EC 60 18 28 */	fsubs f3, f0, f3
/* 8020729C 002041DC  C0 02 BA CC */	lfs f0, lbl_80519E2C@sda21(r2)
/* 802072A0 002041E0  EC 43 10 24 */	fdivs f2, f3, f2
/* 802072A4 002041E4  ED C1 00 BA */	fmadds f14, f1, f2, f0
/* 802072A8 002041E8  4B EC 22 F9 */	bl rand
/* 802072AC 002041EC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802072B0 002041F0  3C 00 43 30 */	lis r0, 0x4330
/* 802072B4 002041F4  90 61 02 D4 */	stw r3, 0x2d4(r1)
/* 802072B8 002041F8  EC 7D 03 B2 */	fmuls f3, f29, f14
/* 802072BC 002041FC  C0 01 02 E0 */	lfs f0, 0x2e0(r1)
/* 802072C0 00204200  38 61 01 58 */	addi r3, r1, 0x158
/* 802072C4 00204204  90 01 02 D0 */	stw r0, 0x2d0(r1)
/* 802072C8 00204208  38 9D 00 50 */	addi r4, r29, 0x50
/* 802072CC 0020420C  C8 A2 BA C0 */	lfd f5, lbl_80519E20@sda21(r2)
/* 802072D0 00204210  C8 21 02 D0 */	lfd f1, 0x2d0(r1)
/* 802072D4 00204214  EC 00 03 B2 */	fmuls f0, f0, f14
/* 802072D8 00204218  C0 82 BA B4 */	lfs f4, lbl_80519E14@sda21(r2)
/* 802072DC 0020421C  38 A1 02 0C */	addi r5, r1, 0x20c
/* 802072E0 00204220  EC A1 28 28 */	fsubs f5, f1, f5
/* 802072E4 00204224  D0 61 02 0C */	stfs f3, 0x20c(r1)
/* 802072E8 00204228  C0 42 BA 38 */	lfs f2, lbl_80519D98@sda21(r2)
/* 802072EC 0020422C  C0 22 BB 20 */	lfs f1, lbl_80519E80@sda21(r2)
/* 802072F0 00204230  EC 65 20 24 */	fdivs f3, f5, f4
/* 802072F4 00204234  D0 01 02 14 */	stfs f0, 0x214(r1)
/* 802072F8 00204238  EC 02 08 FA */	fmadds f0, f2, f3, f1
/* 802072FC 0020423C  D0 01 02 10 */	stfs f0, 0x210(r1)
/* 80207300 00204240  48 00 08 A1 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 80207304 00204244  C0 01 01 58 */	lfs f0, 0x158(r1)
/* 80207308 00204248  D0 1D 00 50 */	stfs f0, 0x50(r29)
/* 8020730C 0020424C  C0 01 01 5C */	lfs f0, 0x15c(r1)
/* 80207310 00204250  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 80207314 00204254  C0 01 01 60 */	lfs f0, 0x160(r1)
/* 80207318 00204258  D0 1D 00 58 */	stfs f0, 0x58(r29)
/* 8020731C 0020425C  4B EC 22 85 */	bl rand
/* 80207320 00204260  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80207324 00204264  3C 00 43 30 */	lis r0, 0x4330
/* 80207328 00204268  90 61 02 CC */	stw r3, 0x2cc(r1)
/* 8020732C 0020426C  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 80207330 00204270  90 01 02 C8 */	stw r0, 0x2c8(r1)
/* 80207334 00204274  C0 22 BA B4 */	lfs f1, lbl_80519E14@sda21(r2)
/* 80207338 00204278  C8 41 02 C8 */	lfd f2, 0x2c8(r1)
/* 8020733C 0020427C  C0 02 BB 24 */	lfs f0, lbl_80519E84@sda21(r2)
/* 80207340 00204280  EC 42 18 28 */	fsubs f2, f2, f3
/* 80207344 00204284  EC 22 08 24 */	fdivs f1, f2, f1
/* 80207348 00204288  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8020734C 0020428C  40 81 00 48 */	ble .L_80207394
/* 80207350 00204290  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 80207354 00204294  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80207358 00204298  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 8020735C 0020429C  3C 60 80 4B */	lis r3, __vt__Q24Game11InteractGas@ha
/* 80207360 002042A0  90 01 02 00 */	stw r0, 0x200(r1)
/* 80207364 002042A4  38 03 48 0C */	addi r0, r3, __vt__Q24Game11InteractGas@l
/* 80207368 002042A8  38 60 00 00 */	li r3, 0
/* 8020736C 002042AC  38 81 02 00 */	addi r4, r1, 0x200
/* 80207370 002042B0  90 61 02 04 */	stw r3, 0x204(r1)
/* 80207374 002042B4  90 01 02 00 */	stw r0, 0x200(r1)
/* 80207378 002042B8  D0 01 02 08 */	stfs f0, 0x208(r1)
/* 8020737C 002042BC  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 80207380 002042C0  80 63 00 00 */	lwz r3, 0(r3)
/* 80207384 002042C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80207388 002042C8  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8020738C 002042CC  7D 89 03 A6 */	mtctr r12
/* 80207390 002042D0  4E 80 04 21 */	bctrl 
.L_80207394:
/* 80207394 002042D4  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80207398 002042D8  28 00 00 02 */	cmplwi r0, 2
/* 8020739C 002042DC  41 82 01 F4 */	beq .L_80207590
/* 802073A0 002042E0  C0 1E 00 C4 */	lfs f0, 0xc4(r30)
/* 802073A4 002042E4  38 61 00 F8 */	addi r3, r1, 0xf8
/* 802073A8 002042E8  C0 41 02 80 */	lfs f2, 0x280(r1)
/* 802073AC 002042EC  38 81 00 EC */	addi r4, r1, 0xec
/* 802073B0 002042F0  EC 7E 00 32 */	fmuls f3, f30, f0
/* 802073B4 002042F4  C0 21 02 84 */	lfs f1, 0x284(r1)
/* 802073B8 002042F8  C0 01 02 88 */	lfs f0, 0x288(r1)
/* 802073BC 002042FC  38 A1 00 E0 */	addi r5, r1, 0xe0
/* 802073C0 00204300  C0 E2 BA 34 */	lfs f7, lbl_80519D94@sda21(r2)
/* 802073C4 00204304  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802073C8 00204308  EC 21 00 F2 */	fmuls f1, f1, f3
/* 802073CC 0020430C  C0 C1 02 24 */	lfs f6, 0x224(r1)
/* 802073D0 00204310  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802073D4 00204314  C0 A1 02 28 */	lfs f5, 0x228(r1)
/* 802073D8 00204318  D0 41 00 8C */	stfs f2, 0x8c(r1)
/* 802073DC 0020431C  C0 81 02 2C */	lfs f4, 0x22c(r1)
/* 802073E0 00204320  D0 21 00 90 */	stfs f1, 0x90(r1)
/* 802073E4 00204324  C0 61 02 B4 */	lfs f3, 0x2b4(r1)
/* 802073E8 00204328  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 802073EC 0020432C  C0 41 02 B8 */	lfs f2, 0x2b8(r1)
/* 802073F0 00204330  C0 1E 00 EC */	lfs f0, 0xec(r30)
/* 802073F4 00204334  C0 21 02 BC */	lfs f1, 0x2bc(r1)
/* 802073F8 00204338  ED 3E 00 32 */	fmuls f9, f30, f0
/* 802073FC 0020433C  C0 01 02 F8 */	lfs f0, 0x2f8(r1)
/* 80207400 00204340  ED 00 02 72 */	fmuls f8, f0, f9
/* 80207404 00204344  C0 01 02 FC */	lfs f0, 0x2fc(r1)
/* 80207408 00204348  EC E7 02 72 */	fmuls f7, f7, f9
/* 8020740C 0020434C  EC 00 02 72 */	fmuls f0, f0, f9
/* 80207410 00204350  D1 01 00 98 */	stfs f8, 0x98(r1)
/* 80207414 00204354  D0 E1 00 9C */	stfs f7, 0x9c(r1)
/* 80207418 00204358  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 8020741C 0020435C  C0 1E 01 64 */	lfs f0, 0x164(r30)
/* 80207420 00204360  EC 1E 00 32 */	fmuls f0, f30, f0
/* 80207424 00204364  ED 1B 00 32 */	fmuls f8, f27, f0
/* 80207428 00204368  EC F0 00 32 */	fmuls f7, f16, f0
/* 8020742C 0020436C  EC 0F 00 32 */	fmuls f0, f15, f0
/* 80207430 00204370  D1 01 00 A4 */	stfs f8, 0xa4(r1)
/* 80207434 00204374  D0 E1 00 A8 */	stfs f7, 0xa8(r1)
/* 80207438 00204378  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 8020743C 0020437C  C0 1E 01 14 */	lfs f0, 0x114(r30)
/* 80207440 00204380  EC 1E 00 32 */	fmuls f0, f30, f0
/* 80207444 00204384  EC C6 00 32 */	fmuls f6, f6, f0
/* 80207448 00204388  EC A5 00 32 */	fmuls f5, f5, f0
/* 8020744C 0020438C  EC 04 00 32 */	fmuls f0, f4, f0
/* 80207450 00204390  D0 C1 00 B0 */	stfs f6, 0xb0(r1)
/* 80207454 00204394  D0 A1 00 B4 */	stfs f5, 0xb4(r1)
/* 80207458 00204398  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 8020745C 0020439C  C0 1E 01 3C */	lfs f0, 0x13c(r30)
/* 80207460 002043A0  EC DE 00 32 */	fmuls f6, f30, f0
/* 80207464 002043A4  C0 01 02 E4 */	lfs f0, 0x2e4(r1)
/* 80207468 002043A8  EC 80 01 B2 */	fmuls f4, f0, f6
/* 8020746C 002043AC  C0 01 02 E0 */	lfs f0, 0x2e0(r1)
/* 80207470 002043B0  EC BD 01 B2 */	fmuls f5, f29, f6
/* 80207474 002043B4  EC 00 01 B2 */	fmuls f0, f0, f6
/* 80207478 002043B8  D0 81 00 C0 */	stfs f4, 0xc0(r1)
/* 8020747C 002043BC  D0 A1 00 BC */	stfs f5, 0xbc(r1)
/* 80207480 002043C0  D0 01 00 C4 */	stfs f0, 0xc4(r1)
/* 80207484 002043C4  C0 1E 00 9C */	lfs f0, 0x9c(r30)
/* 80207488 002043C8  EC DE 00 32 */	fmuls f6, f30, f0
/* 8020748C 002043CC  C0 01 02 EC */	lfs f0, 0x2ec(r1)
/* 80207490 002043D0  EC 80 01 B2 */	fmuls f4, f0, f6
/* 80207494 002043D4  C0 01 02 E8 */	lfs f0, 0x2e8(r1)
/* 80207498 002043D8  EC B1 01 B2 */	fmuls f5, f17, f6
/* 8020749C 002043DC  EC 00 01 B2 */	fmuls f0, f0, f6
/* 802074A0 002043E0  D0 81 00 CC */	stfs f4, 0xcc(r1)
/* 802074A4 002043E4  D0 A1 00 C8 */	stfs f5, 0xc8(r1)
/* 802074A8 002043E8  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 802074AC 002043EC  C0 1E 00 74 */	lfs f0, 0x74(r30)
/* 802074B0 002043F0  EC 1E 00 32 */	fmuls f0, f30, f0
/* 802074B4 002043F4  EC BF 00 32 */	fmuls f5, f31, f0
/* 802074B8 002043F8  EC 93 00 32 */	fmuls f4, f19, f0
/* 802074BC 002043FC  EC 12 00 32 */	fmuls f0, f18, f0
/* 802074C0 00204400  D0 A1 00 D4 */	stfs f5, 0xd4(r1)
/* 802074C4 00204404  D0 81 00 D8 */	stfs f4, 0xd8(r1)
/* 802074C8 00204408  D0 01 00 DC */	stfs f0, 0xdc(r1)
/* 802074CC 0020440C  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 802074D0 00204410  EC B6 00 32 */	fmuls f5, f22, f0
/* 802074D4 00204414  EC 95 00 32 */	fmuls f4, f21, f0
/* 802074D8 00204418  EC 14 00 32 */	fmuls f0, f20, f0
/* 802074DC 0020441C  D0 A1 00 E0 */	stfs f5, 0xe0(r1)
/* 802074E0 00204420  D0 81 00 E4 */	stfs f4, 0xe4(r1)
/* 802074E4 00204424  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 802074E8 00204428  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 802074EC 0020442C  EC 1E 00 32 */	fmuls f0, f30, f0
/* 802074F0 00204430  EC 63 00 32 */	fmuls f3, f3, f0
/* 802074F4 00204434  EC 42 00 32 */	fmuls f2, f2, f0
/* 802074F8 00204438  EC 01 00 32 */	fmuls f0, f1, f0
/* 802074FC 0020443C  D0 61 00 EC */	stfs f3, 0xec(r1)
/* 80207500 00204440  D0 41 00 F0 */	stfs f2, 0xf0(r1)
/* 80207504 00204444  D0 01 00 F4 */	stfs f0, 0xf4(r1)
/* 80207508 00204448  48 00 06 99 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 8020750C 0020444C  38 61 01 04 */	addi r3, r1, 0x104
/* 80207510 00204450  38 81 00 F8 */	addi r4, r1, 0xf8
/* 80207514 00204454  38 A1 00 D4 */	addi r5, r1, 0xd4
/* 80207518 00204458  48 00 06 89 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 8020751C 0020445C  38 61 01 10 */	addi r3, r1, 0x110
/* 80207520 00204460  38 81 01 04 */	addi r4, r1, 0x104
/* 80207524 00204464  38 A1 00 C8 */	addi r5, r1, 0xc8
/* 80207528 00204468  48 00 06 79 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 8020752C 0020446C  38 61 01 1C */	addi r3, r1, 0x11c
/* 80207530 00204470  38 81 01 10 */	addi r4, r1, 0x110
/* 80207534 00204474  38 A1 00 BC */	addi r5, r1, 0xbc
/* 80207538 00204478  48 00 06 69 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 8020753C 0020447C  38 61 01 28 */	addi r3, r1, 0x128
/* 80207540 00204480  38 81 01 1C */	addi r4, r1, 0x11c
/* 80207544 00204484  38 A1 00 B0 */	addi r5, r1, 0xb0
/* 80207548 00204488  48 00 06 59 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 8020754C 0020448C  38 61 01 34 */	addi r3, r1, 0x134
/* 80207550 00204490  38 81 01 28 */	addi r4, r1, 0x128
/* 80207554 00204494  38 A1 00 A4 */	addi r5, r1, 0xa4
/* 80207558 00204498  48 00 06 49 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 8020755C 0020449C  38 61 01 40 */	addi r3, r1, 0x140
/* 80207560 002044A0  38 81 01 34 */	addi r4, r1, 0x134
/* 80207564 002044A4  38 A1 00 98 */	addi r5, r1, 0x98
/* 80207568 002044A8  48 00 06 39 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 8020756C 002044AC  38 61 01 4C */	addi r3, r1, 0x14c
/* 80207570 002044B0  38 81 01 40 */	addi r4, r1, 0x140
/* 80207574 002044B4  38 A1 00 8C */	addi r5, r1, 0x8c
/* 80207578 002044B8  48 00 06 29 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 8020757C 002044BC  C0 01 01 4C */	lfs f0, 0x14c(r1)
/* 80207580 002044C0  C2 E1 01 54 */	lfs f23, 0x154(r1)
/* 80207584 002044C4  D0 01 02 F4 */	stfs f0, 0x2f4(r1)
/* 80207588 002044C8  C0 01 01 50 */	lfs f0, 0x150(r1)
/* 8020758C 002044CC  D0 01 02 F0 */	stfs f0, 0x2f0(r1)
.L_80207590:
/* 80207590 002044D0  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80207594 002044D4  FC 00 B8 00 */	fcmpu cr0, f0, f23
/* 80207598 002044D8  41 82 00 44 */	beq .L_802075DC
/* 8020759C 002044DC  FC 40 B8 90 */	fmr f2, f23
/* 802075A0 002044E0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802075A4 002044E4  C0 21 02 F4 */	lfs f1, 0x2f4(r1)
/* 802075A8 002044E8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802075AC 002044EC  4B E2 DB 5D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802075B0 002044F0  48 20 A6 21 */	bl roundAng__Ff
/* 802075B4 002044F4  C0 5D 00 5C */	lfs f2, 0x5c(r29)
/* 802075B8 002044F8  48 20 A6 45 */	bl angDist__Fff
/* 802075BC 002044FC  C0 42 BB 0C */	lfs f2, lbl_80519E6C@sda21(r2)
/* 802075C0 00204500  C0 1D 00 5C */	lfs f0, 0x5c(r29)
/* 802075C4 00204504  EC 22 00 72 */	fmuls f1, f2, f1
/* 802075C8 00204508  EC 01 06 BA */	fmadds f0, f1, f26, f0
/* 802075CC 0020450C  D0 1D 00 5C */	stfs f0, 0x5c(r29)
/* 802075D0 00204510  C0 3D 00 5C */	lfs f1, 0x5c(r29)
/* 802075D4 00204514  48 20 A5 FD */	bl roundAng__Ff
/* 802075D8 00204518  D0 3D 00 5C */	stfs f1, 0x5c(r29)
.L_802075DC:
/* 802075DC 0020451C  C0 7D 00 5C */	lfs f3, 0x5c(r29)
/* 802075E0 00204520  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 802075E4 00204524  FC 20 18 90 */	fmr f1, f3
/* 802075E8 00204528  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802075EC 0020452C  40 80 00 08 */	bge .L_802075F4
/* 802075F0 00204530  FC 20 18 50 */	fneg f1, f3
.L_802075F4:
/* 802075F4 00204534  C0 42 BA E4 */	lfs f2, lbl_80519E44@sda21(r2)
/* 802075F8 00204538  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 802075FC 0020453C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80207600 00204540  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80207604 00204544  FC 00 08 1E */	fctiwz f0, f1
/* 80207608 00204548  D8 01 02 D8 */	stfd f0, 0x2d8(r1)
/* 8020760C 0020454C  80 01 02 DC */	lwz r0, 0x2dc(r1)
/* 80207610 00204550  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80207614 00204554  7C BF 04 2E */	lfsx f5, r31, r0
/* 80207618 00204558  40 80 00 30 */	bge .L_80207648
/* 8020761C 0020455C  C0 02 BA E0 */	lfs f0, lbl_80519E40@sda21(r2)
/* 80207620 00204560  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80207624 00204564  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80207628 00204568  EC 03 00 32 */	fmuls f0, f3, f0
/* 8020762C 0020456C  FC 00 00 1E */	fctiwz f0, f0
/* 80207630 00204570  D8 01 02 D0 */	stfd f0, 0x2d0(r1)
/* 80207634 00204574  80 01 02 D4 */	lwz r0, 0x2d4(r1)
/* 80207638 00204578  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8020763C 0020457C  7C 03 04 2E */	lfsx f0, r3, r0
/* 80207640 00204580  FC 40 00 50 */	fneg f2, f0
/* 80207644 00204584  48 00 00 24 */	b .L_80207668
.L_80207648:
/* 80207648 00204588  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8020764C 0020458C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80207650 00204590  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80207654 00204594  FC 00 00 1E */	fctiwz f0, f0
/* 80207658 00204598  D8 01 02 C8 */	stfd f0, 0x2c8(r1)
/* 8020765C 0020459C  80 01 02 CC */	lwz r0, 0x2cc(r1)
/* 80207660 002045A0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80207664 002045A4  7C 43 04 2E */	lfsx f2, r3, r0
.L_80207668:
/* 80207668 002045A8  C0 62 BA 34 */	lfs f3, lbl_80519D94@sda21(r2)
/* 8020766C 002045AC  38 61 00 80 */	addi r3, r1, 0x80
/* 80207670 002045B0  C0 01 02 F0 */	lfs f0, 0x2f0(r1)
/* 80207674 002045B4  38 9D 00 50 */	addi r4, r29, 0x50
/* 80207678 002045B8  80 DD 00 74 */	lwz r6, 0x74(r29)
/* 8020767C 002045BC  38 A1 00 74 */	addi r5, r1, 0x74
/* 80207680 002045C0  EC 23 00 32 */	fmuls f1, f3, f0
/* 80207684 002045C4  C0 01 02 F4 */	lfs f0, 0x2f4(r1)
/* 80207688 002045C8  80 C6 03 10 */	lwz r6, 0x310(r6)
/* 8020768C 002045CC  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 80207690 002045D0  C0 86 00 4C */	lfs f4, 0x4c(r6)
/* 80207694 002045D4  EC 05 05 FA */	fmadds f0, f5, f23, f0
/* 80207698 002045D8  EC 42 00 32 */	fmuls f2, f2, f0
/* 8020769C 002045DC  EC 23 00 32 */	fmuls f1, f3, f0
/* 802076A0 002045E0  EC 05 00 32 */	fmuls f0, f5, f0
/* 802076A4 002045E4  EC 42 01 32 */	fmuls f2, f2, f4
/* 802076A8 002045E8  EC 21 01 32 */	fmuls f1, f1, f4
/* 802076AC 002045EC  EC 00 01 32 */	fmuls f0, f0, f4
/* 802076B0 002045F0  D0 41 00 74 */	stfs f2, 0x74(r1)
/* 802076B4 002045F4  D0 21 00 78 */	stfs f1, 0x78(r1)
/* 802076B8 002045F8  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 802076BC 002045FC  48 00 04 E5 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 802076C0 00204600  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 802076C4 00204604  D0 1D 00 50 */	stfs f0, 0x50(r29)
/* 802076C8 00204608  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 802076CC 0020460C  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 802076D0 00204610  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 802076D4 00204614  D0 1D 00 58 */	stfs f0, 0x58(r29)
/* 802076D8 00204618  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 802076DC 0020461C  28 00 00 02 */	cmplwi r0, 2
/* 802076E0 00204620  41 82 00 0C */	beq .L_802076EC
/* 802076E4 00204624  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 802076E8 00204628  D0 1D 00 54 */	stfs f0, 0x54(r29)
.L_802076EC:
/* 802076EC 0020462C  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 802076F0 00204630  28 00 00 02 */	cmplwi r0, 2
/* 802076F4 00204634  40 82 00 40 */	bne .L_80207734
/* 802076F8 00204638  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802076FC 0020463C  C0 42 BB 28 */	lfs f2, lbl_80519E88@sda21(r2)
/* 80207700 00204640  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80207704 00204644  C0 1D 00 54 */	lfs f0, 0x54(r29)
/* 80207708 00204648  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 8020770C 0020464C  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 80207710 00204650  80 7D 00 74 */	lwz r3, 0x74(r29)
/* 80207714 00204654  C0 1D 00 04 */	lfs f0, 4(r29)
/* 80207718 00204658  C0 23 00 70 */	lfs f1, 0x70(r3)
/* 8020771C 0020465C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80207720 00204660  4C 40 13 82 */	cror 2, 0, 2
/* 80207724 00204664  40 82 00 10 */	bne .L_80207734
/* 80207728 00204668  D0 3D 00 04 */	stfs f1, 4(r29)
/* 8020772C 0020466C  38 00 00 00 */	li r0, 0
/* 80207730 00204670  98 1D 00 AC */	stb r0, 0xac(r29)
.L_80207734:
/* 80207734 00204674  38 7D 00 50 */	addi r3, r29, 0x50
/* 80207738 00204678  48 00 04 19 */	bl "length__10Vector3<f>CFv"
/* 8020773C 0020467C  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80207740 00204680  FD C0 08 90 */	fmr f14, f1
/* 80207744 00204684  28 00 00 02 */	cmplwi r0, 2
/* 80207748 00204688  41 82 00 40 */	beq .L_80207788
/* 8020774C 0020468C  FC 0E F0 40 */	fcmpo cr0, f14, f30
/* 80207750 00204690  40 81 00 38 */	ble .L_80207788
/* 80207754 00204694  C0 02 BA 40 */	lfs f0, lbl_80519DA0@sda21(r2)
/* 80207758 00204698  C0 3D 00 50 */	lfs f1, 0x50(r29)
/* 8020775C 0020469C  EC 00 70 24 */	fdivs f0, f0, f14
/* 80207760 002046A0  EC 40 07 B2 */	fmuls f2, f0, f30
/* 80207764 002046A4  FD C0 F0 90 */	fmr f14, f30
/* 80207768 002046A8  EC 01 00 B2 */	fmuls f0, f1, f2
/* 8020776C 002046AC  D0 1D 00 50 */	stfs f0, 0x50(r29)
/* 80207770 002046B0  C0 1D 00 54 */	lfs f0, 0x54(r29)
/* 80207774 002046B4  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80207778 002046B8  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 8020777C 002046BC  C0 1D 00 58 */	lfs f0, 0x58(r29)
/* 80207780 002046C0  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80207784 002046C4  D0 1D 00 58 */	stfs f0, 0x58(r29)
.L_80207788:
/* 80207788 002046C8  88 1D 00 AE */	lbz r0, 0xae(r29)
/* 8020778C 002046CC  28 00 00 00 */	cmplwi r0, 0
/* 80207790 002046D0  41 82 00 6C */	beq .L_802077FC
/* 80207794 002046D4  88 1D 00 AD */	lbz r0, 0xad(r29)
/* 80207798 002046D8  28 00 00 00 */	cmplwi r0, 0
/* 8020779C 002046DC  40 82 00 50 */	bne .L_802077EC
/* 802077A0 002046E0  38 00 00 00 */	li r0, 0
/* 802077A4 002046E4  98 1D 00 AE */	stb r0, 0xae(r29)
/* 802077A8 002046E8  4B EC 1D F9 */	bl rand
/* 802077AC 002046EC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802077B0 002046F0  3C 00 43 30 */	lis r0, 0x4330
/* 802077B4 002046F4  90 61 02 DC */	stw r3, 0x2dc(r1)
/* 802077B8 002046F8  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 802077BC 002046FC  90 01 02 D8 */	stw r0, 0x2d8(r1)
/* 802077C0 00204700  C0 22 BA B4 */	lfs f1, lbl_80519E14@sda21(r2)
/* 802077C4 00204704  C8 41 02 D8 */	lfd f2, 0x2d8(r1)
/* 802077C8 00204708  C0 02 BA BC */	lfs f0, lbl_80519E1C@sda21(r2)
/* 802077CC 0020470C  EC 42 18 28 */	fsubs f2, f2, f3
/* 802077D0 00204710  EC 22 08 24 */	fdivs f1, f2, f1
/* 802077D4 00204714  EC 00 00 72 */	fmuls f0, f0, f1
/* 802077D8 00204718  FC 00 00 1E */	fctiwz f0, f0
/* 802077DC 0020471C  D8 01 02 D0 */	stfd f0, 0x2d0(r1)
/* 802077E0 00204720  80 61 02 D4 */	lwz r3, 0x2d4(r1)
/* 802077E4 00204724  38 03 00 32 */	addi r0, r3, 0x32
/* 802077E8 00204728  98 1D 00 AD */	stb r0, 0xad(r29)
.L_802077EC:
/* 802077EC 0020472C  88 7D 00 AD */	lbz r3, 0xad(r29)
/* 802077F0 00204730  38 03 FF FF */	addi r0, r3, -1
/* 802077F4 00204734  98 1D 00 AD */	stb r0, 0xad(r29)
/* 802077F8 00204738  48 00 01 10 */	b .L_80207908
.L_802077FC:
/* 802077FC 0020473C  88 7D 00 AD */	lbz r3, 0xad(r29)
/* 80207800 00204740  28 03 00 00 */	cmplwi r3, 0
/* 80207804 00204744  41 82 00 64 */	beq .L_80207868
/* 80207808 00204748  38 03 FF FF */	addi r0, r3, -1
/* 8020780C 0020474C  98 1D 00 AD */	stb r0, 0xad(r29)
/* 80207810 00204750  88 1D 00 AD */	lbz r0, 0xad(r29)
/* 80207814 00204754  28 00 00 00 */	cmplwi r0, 0
/* 80207818 00204758  40 82 00 50 */	bne .L_80207868
/* 8020781C 0020475C  38 00 00 01 */	li r0, 1
/* 80207820 00204760  98 1D 00 AE */	stb r0, 0xae(r29)
/* 80207824 00204764  4B EC 1D 7D */	bl rand
/* 80207828 00204768  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8020782C 0020476C  3C 00 43 30 */	lis r0, 0x4330
/* 80207830 00204770  90 61 02 DC */	stw r3, 0x2dc(r1)
/* 80207834 00204774  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 80207838 00204778  90 01 02 D8 */	stw r0, 0x2d8(r1)
/* 8020783C 0020477C  C0 22 BA B4 */	lfs f1, lbl_80519E14@sda21(r2)
/* 80207840 00204780  C8 41 02 D8 */	lfd f2, 0x2d8(r1)
/* 80207844 00204784  C0 02 BA 80 */	lfs f0, lbl_80519DE0@sda21(r2)
/* 80207848 00204788  EC 42 18 28 */	fsubs f2, f2, f3
/* 8020784C 0020478C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80207850 00204790  EC 00 00 72 */	fmuls f0, f0, f1
/* 80207854 00204794  FC 00 00 1E */	fctiwz f0, f0
/* 80207858 00204798  D8 01 02 D0 */	stfd f0, 0x2d0(r1)
/* 8020785C 0020479C  80 61 02 D4 */	lwz r3, 0x2d4(r1)
/* 80207860 002047A0  38 03 00 0A */	addi r0, r3, 0xa
/* 80207864 002047A4  98 1D 00 AD */	stb r0, 0xad(r29)
.L_80207868:
/* 80207868 002047A8  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 8020786C 002047AC  EC 59 06 B2 */	fmuls f2, f25, f26
/* 80207870 002047B0  C0 62 BA 38 */	lfs f3, lbl_80519D98@sda21(r2)
/* 80207874 002047B4  EC 18 06 B2 */	fmuls f0, f24, f26
/* 80207878 002047B8  EC 21 06 B2 */	fmuls f1, f1, f26
/* 8020787C 002047BC  7F A4 EB 78 */	mr r4, r29
/* 80207880 002047C0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80207884 002047C4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80207888 002047C8  38 61 00 68 */	addi r3, r1, 0x68
/* 8020788C 002047CC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80207890 002047D0  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 80207894 002047D4  38 A1 00 5C */	addi r5, r1, 0x5c
/* 80207898 002047D8  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 8020789C 002047DC  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 802078A0 002047E0  48 00 03 01 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 802078A4 002047E4  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 802078A8 002047E8  7F A4 EB 78 */	mr r4, r29
/* 802078AC 002047EC  38 61 00 50 */	addi r3, r1, 0x50
/* 802078B0 002047F0  38 A1 00 44 */	addi r5, r1, 0x44
/* 802078B4 002047F4  D0 1D 00 00 */	stfs f0, 0(r29)
/* 802078B8 002047F8  C0 01 00 6C */	lfs f0, 0x6c(r1)
/* 802078BC 002047FC  D0 1D 00 04 */	stfs f0, 4(r29)
/* 802078C0 00204800  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 802078C4 00204804  D0 1D 00 08 */	stfs f0, 8(r29)
/* 802078C8 00204808  C0 5D 00 58 */	lfs f2, 0x58(r29)
/* 802078CC 0020480C  C0 3D 00 54 */	lfs f1, 0x54(r29)
/* 802078D0 00204810  C0 1D 00 50 */	lfs f0, 0x50(r29)
/* 802078D4 00204814  EC 42 06 B2 */	fmuls f2, f2, f26
/* 802078D8 00204818  EC 21 06 B2 */	fmuls f1, f1, f26
/* 802078DC 0020481C  EC 00 06 B2 */	fmuls f0, f0, f26
/* 802078E0 00204820  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 802078E4 00204824  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 802078E8 00204828  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802078EC 0020482C  48 00 02 B5 */	bl "__pl__FRC10Vector3<f>RC10Vector3<f>"
/* 802078F0 00204830  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 802078F4 00204834  D0 1D 00 00 */	stfs f0, 0(r29)
/* 802078F8 00204838  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 802078FC 0020483C  D0 1D 00 04 */	stfs f0, 4(r29)
/* 80207900 00204840  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80207904 00204844  D0 1D 00 08 */	stfs f0, 8(r29)
.L_80207908:
/* 80207908 00204848  80 DD 00 74 */	lwz r6, 0x74(r29)
/* 8020790C 0020484C  7F A5 EB 78 */	mr r5, r29
/* 80207910 00204850  38 61 00 38 */	addi r3, r1, 0x38
/* 80207914 00204854  38 81 01 F4 */	addi r4, r1, 0x1f4
/* 80207918 00204858  C0 06 00 6C */	lfs f0, 0x6c(r6)
/* 8020791C 0020485C  D0 01 01 F4 */	stfs f0, 0x1f4(r1)
/* 80207920 00204860  C0 06 00 70 */	lfs f0, 0x70(r6)
/* 80207924 00204864  D0 01 01 F8 */	stfs f0, 0x1f8(r1)
/* 80207928 00204868  C0 06 00 74 */	lfs f0, 0x74(r6)
/* 8020792C 0020486C  D0 01 01 FC */	stfs f0, 0x1fc(r1)
/* 80207930 00204870  C1 E6 00 78 */	lfs f15, 0x78(r6)
/* 80207934 00204874  48 00 05 3D */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 80207938 00204878  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 8020793C 0020487C  38 61 01 E8 */	addi r3, r1, 0x1e8
/* 80207940 00204880  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 80207944 00204884  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80207948 00204888  D0 41 01 E8 */	stfs f2, 0x1e8(r1)
/* 8020794C 0020488C  D0 21 01 EC */	stfs f1, 0x1ec(r1)
/* 80207950 00204890  D0 01 01 F0 */	stfs f0, 0x1f0(r1)
/* 80207954 00204894  48 00 04 8D */	bl "normalise__10Vector3<f>Fv"
/* 80207958 00204898  FE 20 08 90 */	fmr f17, f1
/* 8020795C 0020489C  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80207960 002048A0  FC 11 00 40 */	fcmpo cr0, f17, f0
/* 80207964 002048A4  40 81 00 D8 */	ble .L_80207A3C
/* 80207968 002048A8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8020796C 002048AC  C0 21 01 E8 */	lfs f1, 0x1e8(r1)
/* 80207970 002048B0  C0 41 01 F0 */	lfs f2, 0x1f0(r1)
/* 80207974 002048B4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80207978 002048B8  4B E2 D7 91 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8020797C 002048BC  C0 02 BA 40 */	lfs f0, lbl_80519DA0@sda21(r2)
/* 80207980 002048C0  EE 0F 00 32 */	fmuls f16, f15, f0
/* 80207984 002048C4  FC 11 80 40 */	fcmpo cr0, f17, f16
/* 80207988 002048C8  40 81 00 B4 */	ble .L_80207A3C
/* 8020798C 002048CC  C0 81 01 EC */	lfs f4, 0x1ec(r1)
/* 80207990 002048D0  38 61 00 2C */	addi r3, r1, 0x2c
/* 80207994 002048D4  C0 1D 00 54 */	lfs f0, 0x54(r29)
/* 80207998 002048D8  38 9D 00 50 */	addi r4, r29, 0x50
/* 8020799C 002048DC  C0 61 01 E8 */	lfs f3, 0x1e8(r1)
/* 802079A0 002048E0  38 A1 00 20 */	addi r5, r1, 0x20
/* 802079A4 002048E4  EC 04 00 32 */	fmuls f0, f4, f0
/* 802079A8 002048E8  C0 3D 00 50 */	lfs f1, 0x50(r29)
/* 802079AC 002048EC  C0 A1 01 F0 */	lfs f5, 0x1f0(r1)
/* 802079B0 002048F0  C0 5D 00 58 */	lfs f2, 0x58(r29)
/* 802079B4 002048F4  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 802079B8 002048F8  EC 05 00 BA */	fmadds f0, f5, f2, f0
/* 802079BC 002048FC  EC 43 00 32 */	fmuls f2, f3, f0
/* 802079C0 00204900  EC 24 00 32 */	fmuls f1, f4, f0
/* 802079C4 00204904  EC 05 00 32 */	fmuls f0, f5, f0
/* 802079C8 00204908  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802079CC 0020490C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802079D0 00204910  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802079D4 00204914  48 00 04 9D */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 802079D8 00204918  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 802079DC 0020491C  38 61 00 14 */	addi r3, r1, 0x14
/* 802079E0 00204920  38 81 01 F4 */	addi r4, r1, 0x1f4
/* 802079E4 00204924  38 A1 00 08 */	addi r5, r1, 8
/* 802079E8 00204928  D0 1D 00 50 */	stfs f0, 0x50(r29)
/* 802079EC 0020492C  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 802079F0 00204930  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 802079F4 00204934  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802079F8 00204938  D0 1D 00 58 */	stfs f0, 0x58(r29)
/* 802079FC 0020493C  C0 41 01 E8 */	lfs f2, 0x1e8(r1)
/* 80207A00 00204940  C0 21 01 EC */	lfs f1, 0x1ec(r1)
/* 80207A04 00204944  C0 01 01 F0 */	lfs f0, 0x1f0(r1)
/* 80207A08 00204948  EC 42 04 32 */	fmuls f2, f2, f16
/* 80207A0C 0020494C  EC 21 04 32 */	fmuls f1, f1, f16
/* 80207A10 00204950  EC 00 04 32 */	fmuls f0, f0, f16
/* 80207A14 00204954  D0 41 00 08 */	stfs f2, 8(r1)
/* 80207A18 00204958  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80207A1C 0020495C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80207A20 00204960  48 00 04 51 */	bl "__mi__FRC10Vector3<f>RC10Vector3<f>"
/* 80207A24 00204964  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80207A28 00204968  D0 1D 00 00 */	stfs f0, 0(r29)
/* 80207A2C 0020496C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80207A30 00204970  D0 1D 00 04 */	stfs f0, 4(r29)
/* 80207A34 00204974  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80207A38 00204978  D0 1D 00 08 */	stfs f0, 8(r29)
.L_80207A3C:
/* 80207A3C 0020497C  80 7D 00 74 */	lwz r3, 0x74(r29)
/* 80207A40 00204980  C0 3D 00 04 */	lfs f1, 4(r29)
/* 80207A44 00204984  C0 43 00 70 */	lfs f2, 0x70(r3)
/* 80207A48 00204988  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80207A4C 0020498C  40 80 00 20 */	bge .L_80207A6C
/* 80207A50 00204990  D0 5D 00 04 */	stfs f2, 4(r29)
/* 80207A54 00204994  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80207A58 00204998  28 00 00 02 */	cmplwi r0, 2
/* 80207A5C 0020499C  40 82 00 24 */	bne .L_80207A80
/* 80207A60 002049A0  38 00 00 00 */	li r0, 0
/* 80207A64 002049A4  98 1D 00 AC */	stb r0, 0xac(r29)
/* 80207A68 002049A8  48 00 00 18 */	b .L_80207A80
.L_80207A6C:
/* 80207A6C 002049AC  C0 02 BB 04 */	lfs f0, lbl_80519E64@sda21(r2)
/* 80207A70 002049B0  EC 00 13 FA */	fmadds f0, f0, f15, f2
/* 80207A74 002049B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80207A78 002049B8  40 81 00 08 */	ble .L_80207A80
/* 80207A7C 002049BC  D0 1D 00 04 */	stfs f0, 4(r29)
.L_80207A80:
/* 80207A80 002049C0  FC 20 70 90 */	fmr f1, f14
/* 80207A84 002049C4  7F A3 EB 78 */	mr r3, r29
/* 80207A88 002049C8  4B FF EC 21 */	bl updateScale__Q34Game12ItemUjamushi3UjaFf
/* 80207A8C 002049CC  7F A3 EB 78 */	mr r3, r29
/* 80207A90 002049D0  81 9D 00 0C */	lwz r12, 0xc(r29)
/* 80207A94 002049D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80207A98 002049D8  7D 89 03 A6 */	mtctr r12
/* 80207A9C 002049DC  4E 80 04 21 */	bctrl 
.L_80207AA0:
/* 80207AA0 002049E0  E3 E1 04 28 */	psq_l f31, 1064(r1), 0, qr0
/* 80207AA4 002049E4  CB E1 04 20 */	lfd f31, 0x420(r1)
/* 80207AA8 002049E8  E3 C1 04 18 */	psq_l f30, 1048(r1), 0, qr0
/* 80207AAC 002049EC  CB C1 04 10 */	lfd f30, 0x410(r1)
/* 80207AB0 002049F0  E3 A1 04 08 */	psq_l f29, 1032(r1), 0, qr0
/* 80207AB4 002049F4  CB A1 04 00 */	lfd f29, 0x400(r1)
/* 80207AB8 002049F8  E3 81 03 F8 */	psq_l f28, 1016(r1), 0, qr0
/* 80207ABC 002049FC  CB 81 03 F0 */	lfd f28, 0x3f0(r1)
/* 80207AC0 00204A00  E3 61 03 E8 */	psq_l f27, 1000(r1), 0, qr0
/* 80207AC4 00204A04  CB 61 03 E0 */	lfd f27, 0x3e0(r1)
/* 80207AC8 00204A08  E3 41 03 D8 */	psq_l f26, 984(r1), 0, qr0
/* 80207ACC 00204A0C  CB 41 03 D0 */	lfd f26, 0x3d0(r1)
/* 80207AD0 00204A10  E3 21 03 C8 */	psq_l f25, 968(r1), 0, qr0
/* 80207AD4 00204A14  CB 21 03 C0 */	lfd f25, 0x3c0(r1)
/* 80207AD8 00204A18  E3 01 03 B8 */	psq_l f24, 952(r1), 0, qr0
/* 80207ADC 00204A1C  CB 01 03 B0 */	lfd f24, 0x3b0(r1)
/* 80207AE0 00204A20  E2 E1 03 A8 */	psq_l f23, 936(r1), 0, qr0
/* 80207AE4 00204A24  CA E1 03 A0 */	lfd f23, 0x3a0(r1)
/* 80207AE8 00204A28  E2 C1 03 98 */	psq_l f22, 920(r1), 0, qr0
/* 80207AEC 00204A2C  CA C1 03 90 */	lfd f22, 0x390(r1)
/* 80207AF0 00204A30  E2 A1 03 88 */	psq_l f21, 904(r1), 0, qr0
/* 80207AF4 00204A34  CA A1 03 80 */	lfd f21, 0x380(r1)
/* 80207AF8 00204A38  E2 81 03 78 */	psq_l f20, 888(r1), 0, qr0
/* 80207AFC 00204A3C  CA 81 03 70 */	lfd f20, 0x370(r1)
/* 80207B00 00204A40  E2 61 03 68 */	psq_l f19, 872(r1), 0, qr0
/* 80207B04 00204A44  CA 61 03 60 */	lfd f19, 0x360(r1)
/* 80207B08 00204A48  E2 41 03 58 */	psq_l f18, 856(r1), 0, qr0
/* 80207B0C 00204A4C  CA 41 03 50 */	lfd f18, 0x350(r1)
/* 80207B10 00204A50  E2 21 03 48 */	psq_l f17, 840(r1), 0, qr0
/* 80207B14 00204A54  CA 21 03 40 */	lfd f17, 0x340(r1)
/* 80207B18 00204A58  E2 01 03 38 */	psq_l f16, 824(r1), 0, qr0
/* 80207B1C 00204A5C  CA 01 03 30 */	lfd f16, 0x330(r1)
/* 80207B20 00204A60  E1 E1 03 28 */	psq_l f15, 808(r1), 0, qr0
/* 80207B24 00204A64  C9 E1 03 20 */	lfd f15, 0x320(r1)
/* 80207B28 00204A68  E1 C1 03 18 */	psq_l f14, 792(r1), 0, qr0
/* 80207B2C 00204A6C  C9 C1 03 10 */	lfd f14, 0x310(r1)
/* 80207B30 00204A70  83 E1 03 0C */	lwz r31, 0x30c(r1)
/* 80207B34 00204A74  83 C1 03 08 */	lwz r30, 0x308(r1)
/* 80207B38 00204A78  83 A1 03 04 */	lwz r29, 0x304(r1)
/* 80207B3C 00204A7C  80 01 04 34 */	lwz r0, 0x434(r1)
/* 80207B40 00204A80  83 81 03 00 */	lwz r28, 0x300(r1)
/* 80207B44 00204A84  7C 08 03 A6 */	mtlr r0
/* 80207B48 00204A88  38 21 04 30 */	addi r1, r1, 0x430
/* 80207B4C 00204A8C  4E 80 00 20 */	blr 
.endfn update__Q34Game12ItemUjamushi3UjaFRQ34Game12ItemUjamushi9BoidParms

.fn "length__10Vector3<f>CFv", weak
/* 80207B50 00204A90  C0 63 00 00 */	lfs f3, 0(r3)
/* 80207B54 00204A94  C0 23 00 04 */	lfs f1, 4(r3)
/* 80207B58 00204A98  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80207B5C 00204A9C  C0 83 00 08 */	lfs f4, 8(r3)
/* 80207B60 00204AA0  EC 21 00 72 */	fmuls f1, f1, f1
/* 80207B64 00204AA4  C0 42 BA 34 */	lfs f2, lbl_80519D94@sda21(r2)
/* 80207B68 00204AA8  EC 84 01 32 */	fmuls f4, f4, f4
/* 80207B6C 00204AAC  EC 00 08 2A */	fadds f0, f0, f1
/* 80207B70 00204AB0  EC 04 00 2A */	fadds f0, f4, f0
/* 80207B74 00204AB4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80207B78 00204AB8  40 81 00 20 */	ble .L_80207B98
/* 80207B7C 00204ABC  EC 03 08 FA */	fmadds f0, f3, f3, f1
/* 80207B80 00204AC0  EC 24 00 2A */	fadds f1, f4, f0
/* 80207B84 00204AC4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80207B88 00204AC8  4C 81 00 20 */	blelr 
/* 80207B8C 00204ACC  FC 00 08 34 */	frsqrte f0, f1
/* 80207B90 00204AD0  EC 20 00 72 */	fmuls f1, f0, f1
/* 80207B94 00204AD4  4E 80 00 20 */	blr 
.L_80207B98:
/* 80207B98 00204AD8  FC 20 10 90 */	fmr f1, f2
/* 80207B9C 00204ADC  4E 80 00 20 */	blr 
.endfn "length__10Vector3<f>CFv"

.fn "__pl__FRC10Vector3<f>RC10Vector3<f>", weak
/* 80207BA0 00204AE0  C0 24 00 00 */	lfs f1, 0(r4)
/* 80207BA4 00204AE4  C0 05 00 00 */	lfs f0, 0(r5)
/* 80207BA8 00204AE8  C0 44 00 04 */	lfs f2, 4(r4)
/* 80207BAC 00204AEC  EC 01 00 2A */	fadds f0, f1, f0
/* 80207BB0 00204AF0  C0 25 00 04 */	lfs f1, 4(r5)
/* 80207BB4 00204AF4  C0 84 00 08 */	lfs f4, 8(r4)
/* 80207BB8 00204AF8  C0 65 00 08 */	lfs f3, 8(r5)
/* 80207BBC 00204AFC  EC 22 08 2A */	fadds f1, f2, f1
/* 80207BC0 00204B00  D0 03 00 00 */	stfs f0, 0(r3)
/* 80207BC4 00204B04  EC 04 18 2A */	fadds f0, f4, f3
/* 80207BC8 00204B08  D0 23 00 04 */	stfs f1, 4(r3)
/* 80207BCC 00204B0C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80207BD0 00204B10  4E 80 00 20 */	blr 
.endfn "__pl__FRC10Vector3<f>RC10Vector3<f>"

.fn "next__35Iterator<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 80207BD4 00204B14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80207BD8 00204B18  7C 08 02 A6 */	mflr r0
/* 80207BDC 00204B1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80207BE0 00204B20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80207BE4 00204B24  7C 7F 1B 78 */	mr r31, r3
/* 80207BE8 00204B28  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80207BEC 00204B2C  28 00 00 00 */	cmplwi r0, 0
/* 80207BF0 00204B30  40 82 00 24 */	bne .L_80207C14
/* 80207BF4 00204B34  80 7F 00 08 */	lwz r3, 8(r31)
/* 80207BF8 00204B38  80 9F 00 04 */	lwz r4, 4(r31)
/* 80207BFC 00204B3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80207C00 00204B40  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80207C04 00204B44  7D 89 03 A6 */	mtctr r12
/* 80207C08 00204B48  4E 80 04 21 */	bctrl 
/* 80207C0C 00204B4C  90 7F 00 04 */	stw r3, 4(r31)
/* 80207C10 00204B50  48 00 00 94 */	b .L_80207CA4
.L_80207C14:
/* 80207C14 00204B54  80 7F 00 08 */	lwz r3, 8(r31)
/* 80207C18 00204B58  80 9F 00 04 */	lwz r4, 4(r31)
/* 80207C1C 00204B5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80207C20 00204B60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80207C24 00204B64  7D 89 03 A6 */	mtctr r12
/* 80207C28 00204B68  4E 80 04 21 */	bctrl 
/* 80207C2C 00204B6C  90 7F 00 04 */	stw r3, 4(r31)
/* 80207C30 00204B70  48 00 00 58 */	b .L_80207C88
.L_80207C34:
/* 80207C34 00204B74  80 7F 00 08 */	lwz r3, 8(r31)
/* 80207C38 00204B78  80 9F 00 04 */	lwz r4, 4(r31)
/* 80207C3C 00204B7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80207C40 00204B80  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80207C44 00204B84  7D 89 03 A6 */	mtctr r12
/* 80207C48 00204B88  4E 80 04 21 */	bctrl 
/* 80207C4C 00204B8C  7C 64 1B 78 */	mr r4, r3
/* 80207C50 00204B90  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80207C54 00204B94  81 83 00 00 */	lwz r12, 0(r3)
/* 80207C58 00204B98  81 8C 00 08 */	lwz r12, 8(r12)
/* 80207C5C 00204B9C  7D 89 03 A6 */	mtctr r12
/* 80207C60 00204BA0  4E 80 04 21 */	bctrl 
/* 80207C64 00204BA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80207C68 00204BA8  40 82 00 3C */	bne .L_80207CA4
/* 80207C6C 00204BAC  80 7F 00 08 */	lwz r3, 8(r31)
/* 80207C70 00204BB0  80 9F 00 04 */	lwz r4, 4(r31)
/* 80207C74 00204BB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80207C78 00204BB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80207C7C 00204BBC  7D 89 03 A6 */	mtctr r12
/* 80207C80 00204BC0  4E 80 04 21 */	bctrl 
/* 80207C84 00204BC4  90 7F 00 04 */	stw r3, 4(r31)
.L_80207C88:
/* 80207C88 00204BC8  7F E3 FB 78 */	mr r3, r31
/* 80207C8C 00204BCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80207C90 00204BD0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80207C94 00204BD4  7D 89 03 A6 */	mtctr r12
/* 80207C98 00204BD8  4E 80 04 21 */	bctrl 
/* 80207C9C 00204BDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80207CA0 00204BE0  41 82 FF 94 */	beq .L_80207C34
.L_80207CA4:
/* 80207CA4 00204BE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80207CA8 00204BE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80207CAC 00204BEC  7C 08 03 A6 */	mtlr r0
/* 80207CB0 00204BF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80207CB4 00204BF4  4E 80 00 20 */	blr 
.endfn "next__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"

.fn "isDone__35Iterator<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 80207CB8 00204BF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80207CBC 00204BFC  7C 08 02 A6 */	mflr r0
/* 80207CC0 00204C00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80207CC4 00204C04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80207CC8 00204C08  7C 7F 1B 78 */	mr r31, r3
/* 80207CCC 00204C0C  80 63 00 08 */	lwz r3, 8(r3)
/* 80207CD0 00204C10  81 83 00 00 */	lwz r12, 0(r3)
/* 80207CD4 00204C14  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80207CD8 00204C18  7D 89 03 A6 */	mtctr r12
/* 80207CDC 00204C1C  4E 80 04 21 */	bctrl 
/* 80207CE0 00204C20  80 1F 00 04 */	lwz r0, 4(r31)
/* 80207CE4 00204C24  7C 00 18 50 */	subf r0, r0, r3
/* 80207CE8 00204C28  7C 00 00 34 */	cntlzw r0, r0
/* 80207CEC 00204C2C  54 03 D9 7E */	srwi r3, r0, 5
/* 80207CF0 00204C30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80207CF4 00204C34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80207CF8 00204C38  7C 08 03 A6 */	mtlr r0
/* 80207CFC 00204C3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80207D00 00204C40  4E 80 00 20 */	blr 
.endfn "isDone__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"

.fn "first__35Iterator<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 80207D04 00204C44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80207D08 00204C48  7C 08 02 A6 */	mflr r0
/* 80207D0C 00204C4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80207D10 00204C50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80207D14 00204C54  7C 7F 1B 78 */	mr r31, r3
/* 80207D18 00204C58  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80207D1C 00204C5C  28 00 00 00 */	cmplwi r0, 0
/* 80207D20 00204C60  40 82 00 20 */	bne .L_80207D40
/* 80207D24 00204C64  80 7F 00 08 */	lwz r3, 8(r31)
/* 80207D28 00204C68  81 83 00 00 */	lwz r12, 0(r3)
/* 80207D2C 00204C6C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80207D30 00204C70  7D 89 03 A6 */	mtctr r12
/* 80207D34 00204C74  4E 80 04 21 */	bctrl 
/* 80207D38 00204C78  90 7F 00 04 */	stw r3, 4(r31)
/* 80207D3C 00204C7C  48 00 00 90 */	b .L_80207DCC
.L_80207D40:
/* 80207D40 00204C80  80 7F 00 08 */	lwz r3, 8(r31)
/* 80207D44 00204C84  81 83 00 00 */	lwz r12, 0(r3)
/* 80207D48 00204C88  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80207D4C 00204C8C  7D 89 03 A6 */	mtctr r12
/* 80207D50 00204C90  4E 80 04 21 */	bctrl 
/* 80207D54 00204C94  90 7F 00 04 */	stw r3, 4(r31)
/* 80207D58 00204C98  48 00 00 58 */	b .L_80207DB0
.L_80207D5C:
/* 80207D5C 00204C9C  80 7F 00 08 */	lwz r3, 8(r31)
/* 80207D60 00204CA0  80 9F 00 04 */	lwz r4, 4(r31)
/* 80207D64 00204CA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80207D68 00204CA8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80207D6C 00204CAC  7D 89 03 A6 */	mtctr r12
/* 80207D70 00204CB0  4E 80 04 21 */	bctrl 
/* 80207D74 00204CB4  7C 64 1B 78 */	mr r4, r3
/* 80207D78 00204CB8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80207D7C 00204CBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80207D80 00204CC0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80207D84 00204CC4  7D 89 03 A6 */	mtctr r12
/* 80207D88 00204CC8  4E 80 04 21 */	bctrl 
/* 80207D8C 00204CCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80207D90 00204CD0  40 82 00 3C */	bne .L_80207DCC
/* 80207D94 00204CD4  80 7F 00 08 */	lwz r3, 8(r31)
/* 80207D98 00204CD8  80 9F 00 04 */	lwz r4, 4(r31)
/* 80207D9C 00204CDC  81 83 00 00 */	lwz r12, 0(r3)
/* 80207DA0 00204CE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80207DA4 00204CE4  7D 89 03 A6 */	mtctr r12
/* 80207DA8 00204CE8  4E 80 04 21 */	bctrl 
/* 80207DAC 00204CEC  90 7F 00 04 */	stw r3, 4(r31)
.L_80207DB0:
/* 80207DB0 00204CF0  7F E3 FB 78 */	mr r3, r31
/* 80207DB4 00204CF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80207DB8 00204CF8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80207DBC 00204CFC  7D 89 03 A6 */	mtctr r12
/* 80207DC0 00204D00  4E 80 04 21 */	bctrl 
/* 80207DC4 00204D04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80207DC8 00204D08  41 82 FF 94 */	beq .L_80207D5C
.L_80207DCC:
/* 80207DCC 00204D0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80207DD0 00204D10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80207DD4 00204D14  7C 08 03 A6 */	mtlr r0
/* 80207DD8 00204D18  38 21 00 10 */	addi r1, r1, 0x10
/* 80207DDC 00204D1C  4E 80 00 20 */	blr 
.endfn "first__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"

.fn "normalise__10Vector3<f>Fv", weak
/* 80207DE0 00204D20  C0 63 00 00 */	lfs f3, 0(r3)
/* 80207DE4 00204D24  C0 23 00 04 */	lfs f1, 4(r3)
/* 80207DE8 00204D28  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80207DEC 00204D2C  C0 83 00 08 */	lfs f4, 8(r3)
/* 80207DF0 00204D30  EC 21 00 72 */	fmuls f1, f1, f1
/* 80207DF4 00204D34  C0 42 BA 34 */	lfs f2, lbl_80519D94@sda21(r2)
/* 80207DF8 00204D38  EC 84 01 32 */	fmuls f4, f4, f4
/* 80207DFC 00204D3C  EC 00 08 2A */	fadds f0, f0, f1
/* 80207E00 00204D40  EC 04 00 2A */	fadds f0, f4, f0
/* 80207E04 00204D44  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80207E08 00204D48  40 81 00 20 */	ble .L_80207E28
/* 80207E0C 00204D4C  EC 03 08 FA */	fmadds f0, f3, f3, f1
/* 80207E10 00204D50  EC 24 00 2A */	fadds f1, f4, f0
/* 80207E14 00204D54  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80207E18 00204D58  40 81 00 14 */	ble .L_80207E2C
/* 80207E1C 00204D5C  FC 00 08 34 */	frsqrte f0, f1
/* 80207E20 00204D60  EC 20 00 72 */	fmuls f1, f0, f1
/* 80207E24 00204D64  48 00 00 08 */	b .L_80207E2C
.L_80207E28:
/* 80207E28 00204D68  FC 20 10 90 */	fmr f1, f2
.L_80207E2C:
/* 80207E2C 00204D6C  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80207E30 00204D70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80207E34 00204D74  40 81 00 34 */	ble .L_80207E68
/* 80207E38 00204D78  C0 42 BA 40 */	lfs f2, lbl_80519DA0@sda21(r2)
/* 80207E3C 00204D7C  C0 03 00 00 */	lfs f0, 0(r3)
/* 80207E40 00204D80  EC 42 08 24 */	fdivs f2, f2, f1
/* 80207E44 00204D84  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80207E48 00204D88  D0 03 00 00 */	stfs f0, 0(r3)
/* 80207E4C 00204D8C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80207E50 00204D90  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80207E54 00204D94  D0 03 00 04 */	stfs f0, 4(r3)
/* 80207E58 00204D98  C0 03 00 08 */	lfs f0, 8(r3)
/* 80207E5C 00204D9C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80207E60 00204DA0  D0 03 00 08 */	stfs f0, 8(r3)
/* 80207E64 00204DA4  4E 80 00 20 */	blr 
.L_80207E68:
/* 80207E68 00204DA8  FC 20 00 90 */	fmr f1, f0
/* 80207E6C 00204DAC  4E 80 00 20 */	blr 
.endfn "normalise__10Vector3<f>Fv"

.fn "__mi__FRC10Vector3<f>RC10Vector3<f>", weak
/* 80207E70 00204DB0  C0 24 00 00 */	lfs f1, 0(r4)
/* 80207E74 00204DB4  C0 05 00 00 */	lfs f0, 0(r5)
/* 80207E78 00204DB8  C0 44 00 04 */	lfs f2, 4(r4)
/* 80207E7C 00204DBC  EC 01 00 28 */	fsubs f0, f1, f0
/* 80207E80 00204DC0  C0 25 00 04 */	lfs f1, 4(r5)
/* 80207E84 00204DC4  C0 84 00 08 */	lfs f4, 8(r4)
/* 80207E88 00204DC8  C0 65 00 08 */	lfs f3, 8(r5)
/* 80207E8C 00204DCC  EC 22 08 28 */	fsubs f1, f2, f1
/* 80207E90 00204DD0  D0 03 00 00 */	stfs f0, 0(r3)
/* 80207E94 00204DD4  EC 04 18 28 */	fsubs f0, f4, f3
/* 80207E98 00204DD8  D0 23 00 04 */	stfs f1, 4(r3)
/* 80207E9C 00204DDC  D0 03 00 08 */	stfs f0, 8(r3)
/* 80207EA0 00204DE0  4E 80 00 20 */	blr 
.endfn "__mi__FRC10Vector3<f>RC10Vector3<f>"

.fn __ct__Q34Game12ItemUjamushi6UjaMgrFi, global
/* 80207EA4 00204DE4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80207EA8 00204DE8  7C 08 02 A6 */	mflr r0
/* 80207EAC 00204DEC  38 C0 00 01 */	li r6, 1
/* 80207EB0 00204DF0  38 A0 FF FF */	li r5, -1
/* 80207EB4 00204DF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80207EB8 00204DF8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80207EBC 00204DFC  7C 7F 1B 78 */	mr r31, r3
/* 80207EC0 00204E00  3C 60 80 4C */	lis r3, __vt__Q24Game12BaseFlockMgr@ha
/* 80207EC4 00204E04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80207EC8 00204E08  38 03 FB 6C */	addi r0, r3, __vt__Q24Game12BaseFlockMgr@l
/* 80207ECC 00204E0C  7F E7 FB 78 */	mr r7, r31
/* 80207ED0 00204E10  7C 9E 23 78 */	mr r30, r4
/* 80207ED4 00204E14  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80207ED8 00204E18  93 81 00 10 */	stw r28, 0x10(r1)
/* 80207EDC 00204E1C  7C FC 3B 78 */	mr r28, r7
/* 80207EE0 00204E20  3B BC 00 20 */	addi r29, r28, 0x20
/* 80207EE4 00204E24  90 1F 00 00 */	stw r0, 0(r31)
/* 80207EE8 00204E28  38 00 00 00 */	li r0, 0
/* 80207EEC 00204E2C  7F A3 EB 78 */	mr r3, r29
/* 80207EF0 00204E30  98 C7 00 1D */	stb r6, 0x1d(r7)
/* 80207EF4 00204E34  98 C7 00 1C */	stb r6, 0x1c(r7)
/* 80207EF8 00204E38  90 A7 00 04 */	stw r5, 4(r7)
/* 80207EFC 00204E3C  90 07 00 08 */	stw r0, 8(r7)
/* 80207F00 00204E40  48 20 94 91 */	bl __ct__5CNodeFv
/* 80207F04 00204E44  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 80207F08 00204E48  3C 80 80 4C */	lis r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
/* 80207F0C 00204E4C  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 80207F10 00204E50  3C 60 80 4C */	lis r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 80207F14 00204E54  90 1D 00 00 */	stw r0, 0(r29)
/* 80207F18 00204E58  38 04 F9 FC */	addi r0, r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
/* 80207F1C 00204E5C  38 83 F9 8C */	addi r4, r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 80207F20 00204E60  38 A0 00 00 */	li r5, 0
/* 80207F24 00204E64  90 1D 00 00 */	stw r0, 0(r29)
/* 80207F28 00204E68  38 04 00 30 */	addi r0, r4, 0x30
/* 80207F2C 00204E6C  38 7C 00 3C */	addi r3, r28, 0x3c
/* 80207F30 00204E70  98 BD 00 18 */	stb r5, 0x18(r29)
/* 80207F34 00204E74  90 9C 00 00 */	stw r4, 0(r28)
/* 80207F38 00204E78  90 1C 00 20 */	stw r0, 0x20(r28)
/* 80207F3C 00204E7C  48 00 4F 35 */	bl "__ct__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
/* 80207F40 00204E80  3C 80 80 4C */	lis r4, __vt__Q34Game12ItemUjamushi6UjaMgr@ha
/* 80207F44 00204E84  38 7F 00 A8 */	addi r3, r31, 0xa8
/* 80207F48 00204E88  38 A4 F8 14 */	addi r5, r4, __vt__Q34Game12ItemUjamushi6UjaMgr@l
/* 80207F4C 00204E8C  38 80 00 01 */	li r4, 1
/* 80207F50 00204E90  90 BF 00 00 */	stw r5, 0(r31)
/* 80207F54 00204E94  38 05 00 30 */	addi r0, r5, 0x30
/* 80207F58 00204E98  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80207F5C 00204E9C  4B FF DA CD */	bl __ct__Q34Game12ItemUjamushi9BoidParmsFv
/* 80207F60 00204EA0  7F C4 F3 78 */	mr r4, r30
/* 80207F64 00204EA4  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80207F68 00204EA8  48 00 4D 81 */	bl "alloc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
/* 80207F6C 00204EAC  38 60 00 18 */	li r3, 0x18
/* 80207F70 00204EB0  4B E1 BF 35 */	bl __nw__FUl
/* 80207F74 00204EB4  7C 60 1B 79 */	or. r0, r3, r3
/* 80207F78 00204EB8  41 82 00 0C */	beq .L_80207F84
/* 80207F7C 00204EBC  4B F8 E7 FD */	bl __ct__Q24Game9UpdateMgrFv
/* 80207F80 00204EC0  7C 60 1B 78 */	mr r0, r3
.L_80207F84:
/* 80207F84 00204EC4  90 1F 00 94 */	stw r0, 0x94(r31)
/* 80207F88 00204EC8  38 80 00 1E */	li r4, 0x1e
/* 80207F8C 00204ECC  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80207F90 00204ED0  4B F8 E8 51 */	bl create__Q24Game9UpdateMgrFi
/* 80207F94 00204ED4  38 00 00 00 */	li r0, 0
/* 80207F98 00204ED8  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80207F9C 00204EDC  90 1F 00 9C */	stw r0, 0x9c(r31)
/* 80207FA0 00204EE0  7F E3 FB 78 */	mr r3, r31
/* 80207FA4 00204EE4  90 1F 00 98 */	stw r0, 0x98(r31)
/* 80207FA8 00204EE8  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 80207FAC 00204EEC  90 1F 00 A4 */	stw r0, 0xa4(r31)
/* 80207FB0 00204EF0  90 1F 03 10 */	stw r0, 0x310(r31)
/* 80207FB4 00204EF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80207FB8 00204EF8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80207FBC 00204EFC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80207FC0 00204F00  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80207FC4 00204F04  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80207FC8 00204F08  7C 08 03 A6 */	mtlr r0
/* 80207FCC 00204F0C  38 21 00 20 */	addi r1, r1, 0x20
/* 80207FD0 00204F10  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12ItemUjamushi6UjaMgrFi

.fn "__dt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 80207FD4 00204F14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80207FD8 00204F18  7C 08 02 A6 */	mflr r0
/* 80207FDC 00204F1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80207FE0 00204F20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80207FE4 00204F24  7C 9F 23 78 */	mr r31, r4
/* 80207FE8 00204F28  93 C1 00 08 */	stw r30, 8(r1)
/* 80207FEC 00204F2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80207FF0 00204F30  41 82 00 C8 */	beq .L_802080B8
/* 80207FF4 00204F34  3C 60 80 4C */	lis r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 80207FF8 00204F38  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 80207FFC 00204F3C  38 63 F9 8C */	addi r3, r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 80208000 00204F40  90 7E 00 00 */	stw r3, 0(r30)
/* 80208004 00204F44  38 03 00 30 */	addi r0, r3, 0x30
/* 80208008 00204F48  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020800C 00204F4C  41 82 00 68 */	beq .L_80208074
/* 80208010 00204F50  3C 60 80 4C */	lis r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 80208014 00204F54  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 80208018 00204F58  38 63 F9 00 */	addi r3, r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 8020801C 00204F5C  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 80208020 00204F60  38 03 00 2C */	addi r0, r3, 0x2c
/* 80208024 00204F64  90 1E 00 58 */	stw r0, 0x58(r30)
/* 80208028 00204F68  41 82 00 4C */	beq .L_80208074
/* 8020802C 00204F6C  3C 60 80 4C */	lis r3, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 80208030 00204F70  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 80208034 00204F74  38 63 F8 84 */	addi r3, r3, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 80208038 00204F78  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 8020803C 00204F7C  38 03 00 2C */	addi r0, r3, 0x2c
/* 80208040 00204F80  90 1E 00 58 */	stw r0, 0x58(r30)
/* 80208044 00204F84  41 82 00 30 */	beq .L_80208074
/* 80208048 00204F88  3C 60 80 4C */	lis r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020804C 00204F8C  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 80208050 00204F90  38 03 F9 FC */	addi r0, r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
/* 80208054 00204F94  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80208058 00204F98  41 82 00 1C */	beq .L_80208074
/* 8020805C 00204F9C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80208060 00204FA0  38 7E 00 3C */	addi r3, r30, 0x3c
/* 80208064 00204FA4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80208068 00204FA8  38 80 00 00 */	li r4, 0
/* 8020806C 00204FAC  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80208070 00204FB0  48 20 95 19 */	bl __dt__5CNodeFv
.L_80208074:
/* 80208074 00204FB4  34 1E 00 20 */	addic. r0, r30, 0x20
/* 80208078 00204FB8  41 82 00 30 */	beq .L_802080A8
/* 8020807C 00204FBC  3C 60 80 4C */	lis r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
/* 80208080 00204FC0  34 1E 00 20 */	addic. r0, r30, 0x20
/* 80208084 00204FC4  38 03 F9 FC */	addi r0, r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
/* 80208088 00204FC8  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020808C 00204FCC  41 82 00 1C */	beq .L_802080A8
/* 80208090 00204FD0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80208094 00204FD4  38 7E 00 20 */	addi r3, r30, 0x20
/* 80208098 00204FD8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020809C 00204FDC  38 80 00 00 */	li r4, 0
/* 802080A0 00204FE0  90 1E 00 20 */	stw r0, 0x20(r30)
/* 802080A4 00204FE4  48 20 94 E5 */	bl __dt__5CNodeFv
.L_802080A8:
/* 802080A8 00204FE8  7F E0 07 35 */	extsh. r0, r31
/* 802080AC 00204FEC  40 81 00 0C */	ble .L_802080B8
/* 802080B0 00204FF0  7F C3 F3 78 */	mr r3, r30
/* 802080B4 00204FF4  4B E1 C0 01 */	bl __dl__FPv
.L_802080B8:
/* 802080B8 00204FF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802080BC 00204FFC  7F C3 F3 78 */	mr r3, r30
/* 802080C0 00205000  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802080C4 00205004  83 C1 00 08 */	lwz r30, 8(r1)
/* 802080C8 00205008  7C 08 03 A6 */	mtlr r0
/* 802080CC 0020500C  38 21 00 10 */	addi r1, r1, 0x10
/* 802080D0 00205010  4E 80 00 20 */	blr 
.endfn "__dt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "__dt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 802080D4 00205014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802080D8 00205018  7C 08 02 A6 */	mflr r0
/* 802080DC 0020501C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802080E0 00205020  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802080E4 00205024  7C 9F 23 78 */	mr r31, r4
/* 802080E8 00205028  93 C1 00 08 */	stw r30, 8(r1)
/* 802080EC 0020502C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802080F0 00205030  41 82 00 68 */	beq .L_80208158
/* 802080F4 00205034  3C 80 80 4C */	lis r4, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 802080F8 00205038  38 84 F9 00 */	addi r4, r4, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 802080FC 0020503C  90 9E 00 00 */	stw r4, 0(r30)
/* 80208100 00205040  38 04 00 2C */	addi r0, r4, 0x2c
/* 80208104 00205044  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80208108 00205048  41 82 00 40 */	beq .L_80208148
/* 8020810C 0020504C  3C 80 80 4C */	lis r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 80208110 00205050  38 84 F8 84 */	addi r4, r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 80208114 00205054  90 9E 00 00 */	stw r4, 0(r30)
/* 80208118 00205058  38 04 00 2C */	addi r0, r4, 0x2c
/* 8020811C 0020505C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80208120 00205060  41 82 00 28 */	beq .L_80208148
/* 80208124 00205064  3C 80 80 4C */	lis r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
/* 80208128 00205068  38 04 F9 FC */	addi r0, r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
/* 8020812C 0020506C  90 1E 00 00 */	stw r0, 0(r30)
/* 80208130 00205070  41 82 00 18 */	beq .L_80208148
/* 80208134 00205074  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80208138 00205078  38 80 00 00 */	li r4, 0
/* 8020813C 0020507C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80208140 00205080  90 1E 00 00 */	stw r0, 0(r30)
/* 80208144 00205084  48 20 94 45 */	bl __dt__5CNodeFv
.L_80208148:
/* 80208148 00205088  7F E0 07 35 */	extsh. r0, r31
/* 8020814C 0020508C  40 81 00 0C */	ble .L_80208158
/* 80208150 00205090  7F C3 F3 78 */	mr r3, r30
/* 80208154 00205094  4B E1 BF 61 */	bl __dl__FPv
.L_80208158:
/* 80208158 00205098  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020815C 0020509C  7F C3 F3 78 */	mr r3, r30
/* 80208160 002050A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80208164 002050A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80208168 002050A8  7C 08 03 A6 */	mtlr r0
/* 8020816C 002050AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80208170 002050B0  4E 80 00 20 */	blr 
.endfn "__dt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "__dt__36Container<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 80208174 002050B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80208178 002050B8  7C 08 02 A6 */	mflr r0
/* 8020817C 002050BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80208180 002050C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80208184 002050C4  7C 9F 23 78 */	mr r31, r4
/* 80208188 002050C8  93 C1 00 08 */	stw r30, 8(r1)
/* 8020818C 002050CC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80208190 002050D0  41 82 00 38 */	beq .L_802081C8
/* 80208194 002050D4  3C 80 80 4C */	lis r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
/* 80208198 002050D8  38 04 F9 FC */	addi r0, r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
/* 8020819C 002050DC  90 1E 00 00 */	stw r0, 0(r30)
/* 802081A0 002050E0  41 82 00 18 */	beq .L_802081B8
/* 802081A4 002050E4  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 802081A8 002050E8  38 80 00 00 */	li r4, 0
/* 802081AC 002050EC  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 802081B0 002050F0  90 1E 00 00 */	stw r0, 0(r30)
/* 802081B4 002050F4  48 20 93 D5 */	bl __dt__5CNodeFv
.L_802081B8:
/* 802081B8 002050F8  7F E0 07 35 */	extsh. r0, r31
/* 802081BC 002050FC  40 81 00 0C */	ble .L_802081C8
/* 802081C0 00205100  7F C3 F3 78 */	mr r3, r30
/* 802081C4 00205104  4B E1 BE F1 */	bl __dl__FPv
.L_802081C8:
/* 802081C8 00205108  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802081CC 0020510C  7F C3 F3 78 */	mr r3, r30
/* 802081D0 00205110  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802081D4 00205114  83 C1 00 08 */	lwz r30, 8(r1)
/* 802081D8 00205118  7C 08 03 A6 */	mtlr r0
/* 802081DC 0020511C  38 21 00 10 */	addi r1, r1, 0x10
/* 802081E0 00205120  4E 80 00 20 */	blr 
.endfn "__dt__36Container<Q34Game12ItemUjamushi3Uja>Fv"

.fn init__Q34Game12ItemUjamushi6UjaMgrFRQ34Game12ItemUjamushi13UjaMgrInitArg, global
/* 802081E4 00205124  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802081E8 00205128  7C 08 02 A6 */	mflr r0
/* 802081EC 0020512C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802081F0 00205130  C0 04 00 00 */	lfs f0, 0(r4)
/* 802081F4 00205134  D0 03 00 6C */	stfs f0, 0x6c(r3)
/* 802081F8 00205138  C0 04 00 04 */	lfs f0, 4(r4)
/* 802081FC 0020513C  D0 03 00 70 */	stfs f0, 0x70(r3)
/* 80208200 00205140  C0 04 00 08 */	lfs f0, 8(r4)
/* 80208204 00205144  D0 03 00 74 */	stfs f0, 0x74(r3)
/* 80208208 00205148  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8020820C 0020514C  D0 03 00 78 */	stfs f0, 0x78(r3)
/* 80208210 00205150  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80208214 00205154  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 80208218 00205158  80 04 00 14 */	lwz r0, 0x14(r4)
/* 8020821C 0020515C  90 03 03 10 */	stw r0, 0x310(r3)
/* 80208220 00205160  48 00 00 59 */	bl test_createUjas__Q34Game12ItemUjamushi6UjaMgrFv
/* 80208224 00205164  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80208228 00205168  7C 08 03 A6 */	mtlr r0
/* 8020822C 0020516C  38 21 00 10 */	addi r1, r1, 0x10
/* 80208230 00205170  4E 80 00 20 */	blr 
.endfn init__Q34Game12ItemUjamushi6UjaMgrFRQ34Game12ItemUjamushi13UjaMgrInitArg

.fn "getMaxObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 80208234 00205174  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80208238 00205178  4E 80 00 20 */	blr 
.endfn "getMaxObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "getFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi", weak
/* 8020823C 0020517C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80208240 00205180  7C 08 02 A6 */	mflr r0
/* 80208244 00205184  90 01 00 14 */	stw r0, 0x14(r1)
/* 80208248 00205188  85 83 00 3C */	lwzu r12, 0x3c(r3)
/* 8020824C 0020518C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80208250 00205190  7D 89 03 A6 */	mtctr r12
/* 80208254 00205194  4E 80 04 21 */	bctrl 
/* 80208258 00205198  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020825C 0020519C  7C 08 03 A6 */	mtlr r0
/* 80208260 002051A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80208264 002051A4  4E 80 00 20 */	blr 
.endfn "getFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"

.fn "getAt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi", weak
/* 80208268 002051A8  1C 04 00 C8 */	mulli r0, r4, 0xc8
/* 8020826C 002051AC  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80208270 002051B0  7C 63 02 14 */	add r3, r3, r0
/* 80208274 002051B4  4E 80 00 20 */	blr 
.endfn "getAt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"

.fn test_createUjas__Q34Game12ItemUjamushi6UjaMgrFv, global
/* 80208278 002051B8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8020827C 002051BC  7C 08 02 A6 */	mflr r0
/* 80208280 002051C0  90 01 00 94 */	stw r0, 0x94(r1)
/* 80208284 002051C4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80208288 002051C8  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8020828C 002051CC  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80208290 002051D0  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80208294 002051D4  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80208298 002051D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020829C 002051DC  7C 7D 1B 78 */	mr r29, r3
/* 802082A0 002051E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802082A4 002051E4  7D 89 03 A6 */	mtctr r12
/* 802082A8 002051E8  4E 80 04 21 */	bctrl 
/* 802082AC 002051EC  2C 03 00 00 */	cmpwi r3, 0
/* 802082B0 002051F0  41 82 03 BC */	beq .L_8020866C
/* 802082B4 002051F4  7F A3 EB 78 */	mr r3, r29
/* 802082B8 002051F8  81 9D 00 00 */	lwz r12, 0(r29)
/* 802082BC 002051FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802082C0 00205200  7D 89 03 A6 */	mtctr r12
/* 802082C4 00205204  4E 80 04 21 */	bctrl 
/* 802082C8 00205208  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802082CC 0020520C  3C 00 43 30 */	lis r0, 0x4330
/* 802082D0 00205210  90 61 00 0C */	stw r3, 0xc(r1)
/* 802082D4 00205214  3B C0 00 00 */	li r30, 0
/* 802082D8 00205218  C8 42 BA C0 */	lfd f2, lbl_80519E20@sda21(r2)
/* 802082DC 0020521C  90 01 00 08 */	stw r0, 8(r1)
/* 802082E0 00205220  C0 02 BA B8 */	lfs f0, lbl_80519E18@sda21(r2)
/* 802082E4 00205224  C8 21 00 08 */	lfd f1, 8(r1)
/* 802082E8 00205228  EC 21 10 28 */	fsubs f1, f1, f2
/* 802082EC 0020522C  EF E0 08 24 */	fdivs f31, f0, f1
/* 802082F0 00205230  48 00 03 60 */	b .L_80208650
.L_802082F4:
/* 802082F4 00205234  38 7D 00 3C */	addi r3, r29, 0x3c
/* 802082F8 00205238  81 9D 00 3C */	lwz r12, 0x3c(r29)
/* 802082FC 0020523C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80208300 00205240  7D 89 03 A6 */	mtctr r12
/* 80208304 00205244  4E 80 04 21 */	bctrl 
/* 80208308 00205248  7C 7F 1B 79 */	or. r31, r3, r3
/* 8020830C 0020524C  41 82 03 40 */	beq .L_8020864C
/* 80208310 00205250  4B EC 12 91 */	bl rand
/* 80208314 00205254  4B EC 12 8D */	bl rand
/* 80208318 00205258  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8020831C 0020525C  3C 00 43 30 */	lis r0, 0x4330
/* 80208320 00205260  90 61 00 0C */	stw r3, 0xc(r1)
/* 80208324 00205264  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 80208328 00205268  90 01 00 08 */	stw r0, 8(r1)
/* 8020832C 0020526C  C0 42 BA B4 */	lfs f2, lbl_80519E14@sda21(r2)
/* 80208330 00205270  C8 01 00 08 */	lfd f0, 8(r1)
/* 80208334 00205274  C0 22 BA B8 */	lfs f1, lbl_80519E18@sda21(r2)
/* 80208338 00205278  EC 60 18 28 */	fsubs f3, f0, f3
/* 8020833C 0020527C  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80208340 00205280  EC 43 10 24 */	fdivs f2, f3, f2
/* 80208344 00205284  EC 81 00 B2 */	fmuls f4, f1, f2
/* 80208348 00205288  FC 60 20 90 */	fmr f3, f4
/* 8020834C 0020528C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80208350 00205290  40 80 00 08 */	bge .L_80208358
/* 80208354 00205294  FC 60 20 50 */	fneg f3, f4
.L_80208358:
/* 80208358 00205298  C0 22 BA E4 */	lfs f1, lbl_80519E44@sda21(r2)
/* 8020835C 0020529C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80208360 002052A0  C0 42 BA 34 */	lfs f2, lbl_80519D94@sda21(r2)
/* 80208364 002052A4  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80208368 002052A8  EC 03 00 72 */	fmuls f0, f3, f1
/* 8020836C 002052AC  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 80208370 002052B0  FC 00 00 1E */	fctiwz f0, f0
/* 80208374 002052B4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80208378 002052B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020837C 002052BC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80208380 002052C0  7C 64 02 14 */	add r3, r4, r0
/* 80208384 002052C4  C0 03 00 04 */	lfs f0, 4(r3)
/* 80208388 002052C8  EC 62 00 32 */	fmuls f3, f2, f0
/* 8020838C 002052CC  40 80 00 28 */	bge .L_802083B4
/* 80208390 002052D0  C0 02 BA E0 */	lfs f0, lbl_80519E40@sda21(r2)
/* 80208394 002052D4  EC 04 00 32 */	fmuls f0, f4, f0
/* 80208398 002052D8  FC 00 00 1E */	fctiwz f0, f0
/* 8020839C 002052DC  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802083A0 002052E0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802083A4 002052E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802083A8 002052E8  7C 04 04 2E */	lfsx f0, r4, r0
/* 802083AC 002052EC  FC 00 00 50 */	fneg f0, f0
/* 802083B0 002052F0  48 00 00 1C */	b .L_802083CC
.L_802083B4:
/* 802083B4 002052F4  EC 04 00 72 */	fmuls f0, f4, f1
/* 802083B8 002052F8  FC 00 00 1E */	fctiwz f0, f0
/* 802083BC 002052FC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802083C0 00205300  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802083C4 00205304  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802083C8 00205308  7C 04 04 2E */	lfsx f0, r4, r0
.L_802083CC:
/* 802083CC 0020530C  EC 82 00 32 */	fmuls f4, f2, f0
/* 802083D0 00205310  C0 5D 00 6C */	lfs f2, 0x6c(r29)
/* 802083D4 00205314  C0 1D 00 74 */	lfs f0, 0x74(r29)
/* 802083D8 00205318  C0 3D 00 70 */	lfs f1, 0x70(r29)
/* 802083DC 0020531C  C0 A2 BA 34 */	lfs f5, lbl_80519D94@sda21(r2)
/* 802083E0 00205320  EC 84 10 2A */	fadds f4, f4, f2
/* 802083E4 00205324  93 BF 00 74 */	stw r29, 0x74(r31)
/* 802083E8 00205328  EC 43 00 2A */	fadds f2, f3, f0
/* 802083EC 0020532C  EC A5 08 2A */	fadds f5, f5, f1
/* 802083F0 00205330  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 802083F4 00205334  D0 9F 00 00 */	stfs f4, 0(r31)
/* 802083F8 00205338  D0 BF 00 04 */	stfs f5, 4(r31)
/* 802083FC 0020533C  D0 5F 00 08 */	stfs f2, 8(r31)
/* 80208400 00205340  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80208404 00205344  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 80208408 00205348  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 8020840C 0020534C  4B EC 11 95 */	bl rand
/* 80208410 00205350  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80208414 00205354  3C 00 43 30 */	lis r0, 0x4330
/* 80208418 00205358  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8020841C 0020535C  7F E3 FB 78 */	mr r3, r31
/* 80208420 00205360  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 80208424 00205364  90 01 00 28 */	stw r0, 0x28(r1)
/* 80208428 00205368  C0 42 BA B4 */	lfs f2, lbl_80519E14@sda21(r2)
/* 8020842C 0020536C  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80208430 00205370  C0 22 BA B8 */	lfs f1, lbl_80519E18@sda21(r2)
/* 80208434 00205374  EC 60 18 28 */	fsubs f3, f0, f3
/* 80208438 00205378  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 8020843C 0020537C  EC 43 10 24 */	fdivs f2, f3, f2
/* 80208440 00205380  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80208444 00205384  D0 3F 00 5C */	stfs f1, 0x5c(r31)
/* 80208448 00205388  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 8020844C 0020538C  D0 1F 00 60 */	stfs f0, 0x60(r31)
/* 80208450 00205390  81 9F 00 0C */	lwz r12, 0xc(r31)
/* 80208454 00205394  81 8C 00 08 */	lwz r12, 8(r12)
/* 80208458 00205398  7D 89 03 A6 */	mtctr r12
/* 8020845C 0020539C  4E 80 04 21 */	bctrl 
/* 80208460 002053A0  C0 02 BA 40 */	lfs f0, lbl_80519DA0@sda21(r2)
/* 80208464 002053A4  D0 1F 00 64 */	stfs f0, 0x64(r31)
/* 80208468 002053A8  D0 1F 00 68 */	stfs f0, 0x68(r31)
/* 8020846C 002053AC  D0 1F 00 6C */	stfs f0, 0x6c(r31)
/* 80208470 002053B0  4B EC 11 31 */	bl rand
/* 80208474 002053B4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80208478 002053B8  3C 00 43 30 */	lis r0, 0x4330
/* 8020847C 002053BC  90 61 00 34 */	stw r3, 0x34(r1)
/* 80208480 002053C0  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 80208484 002053C4  90 01 00 30 */	stw r0, 0x30(r1)
/* 80208488 002053C8  C0 42 BA B4 */	lfs f2, lbl_80519E14@sda21(r2)
/* 8020848C 002053CC  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80208490 002053D0  C0 22 BA B8 */	lfs f1, lbl_80519E18@sda21(r2)
/* 80208494 002053D4  EC 60 18 28 */	fsubs f3, f0, f3
/* 80208498 002053D8  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 8020849C 002053DC  EC 43 10 24 */	fdivs f2, f3, f2
/* 802084A0 002053E0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802084A4 002053E4  D0 3F 00 70 */	stfs f1, 0x70(r31)
/* 802084A8 002053E8  D0 1F 00 84 */	stfs f0, 0x84(r31)
/* 802084AC 002053EC  D0 1F 00 88 */	stfs f0, 0x88(r31)
/* 802084B0 002053F0  D0 1F 00 8C */	stfs f0, 0x8c(r31)
/* 802084B4 002053F4  D0 1F 00 90 */	stfs f0, 0x90(r31)
/* 802084B8 002053F8  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 802084BC 002053FC  D0 1F 00 98 */	stfs f0, 0x98(r31)
/* 802084C0 00205400  D0 1F 00 9C */	stfs f0, 0x9c(r31)
/* 802084C4 00205404  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 802084C8 00205408  D0 1F 00 A4 */	stfs f0, 0xa4(r31)
/* 802084CC 0020540C  80 7D 03 10 */	lwz r3, 0x310(r29)
/* 802084D0 00205410  C0 03 00 74 */	lfs f0, 0x74(r3)
/* 802084D4 00205414  D0 1F 00 A8 */	stfs f0, 0xa8(r31)
/* 802084D8 00205418  4B EC 10 C9 */	bl rand
/* 802084DC 0020541C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802084E0 00205420  3C 00 43 30 */	lis r0, 0x4330
/* 802084E4 00205424  90 61 00 3C */	stw r3, 0x3c(r1)
/* 802084E8 00205428  38 7F 00 78 */	addi r3, r31, 0x78
/* 802084EC 0020542C  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 802084F0 00205430  90 01 00 38 */	stw r0, 0x38(r1)
/* 802084F4 00205434  C0 42 BA B4 */	lfs f2, lbl_80519E14@sda21(r2)
/* 802084F8 00205438  C8 21 00 38 */	lfd f1, 0x38(r1)
/* 802084FC 0020543C  C0 02 BA 7C */	lfs f0, lbl_80519DDC@sda21(r2)
/* 80208500 00205440  EC 61 18 28 */	fsubs f3, f1, f3
/* 80208504 00205444  C0 3F 00 A8 */	lfs f1, 0xa8(r31)
/* 80208508 00205448  EC 00 00 72 */	fmuls f0, f0, f1
/* 8020850C 0020544C  EC 43 10 24 */	fdivs f2, f3, f2
/* 80208510 00205450  EC 00 08 BA */	fmadds f0, f0, f2, f1
/* 80208514 00205454  D0 1F 00 A8 */	stfs f0, 0xa8(r31)
/* 80208518 00205458  80 9D 00 94 */	lwz r4, 0x94(r29)
/* 8020851C 0020545C  4B F8 E1 C9 */	bl init__Q24Game13UpdateContextFPQ24Game9UpdateMgr
/* 80208520 00205460  38 00 00 00 */	li r0, 0
/* 80208524 00205464  98 1F 00 AC */	stb r0, 0xac(r31)
/* 80208528 00205468  4B EC 10 79 */	bl rand
/* 8020852C 0020546C  3C 80 43 30 */	lis r4, 0x4330
/* 80208530 00205470  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80208534 00205474  90 01 00 44 */	stw r0, 0x44(r1)
/* 80208538 00205478  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 8020853C 0020547C  C8 82 BA C0 */	lfd f4, lbl_80519E20@sda21(r2)
/* 80208540 00205480  38 60 00 00 */	li r3, 0
/* 80208544 00205484  90 81 00 40 */	stw r4, 0x40(r1)
/* 80208548 00205488  C0 02 BA B4 */	lfs f0, lbl_80519E14@sda21(r2)
/* 8020854C 0020548C  C8 21 00 40 */	lfd f1, 0x40(r1)
/* 80208550 00205490  C0 42 BA BC */	lfs f2, lbl_80519E1C@sda21(r2)
/* 80208554 00205494  EC 61 20 28 */	fsubs f3, f1, f4
/* 80208558 00205498  90 01 00 54 */	stw r0, 0x54(r1)
/* 8020855C 0020549C  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80208560 002054A0  90 81 00 50 */	stw r4, 0x50(r1)
/* 80208564 002054A4  EC 63 00 24 */	fdivs f3, f3, f0
/* 80208568 002054A8  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 8020856C 002054AC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80208570 002054B0  EC 00 20 28 */	fsubs f0, f0, f4
/* 80208574 002054B4  FC 40 10 1E */	fctiwz f2, f2
/* 80208578 002054B8  EC BF 00 32 */	fmuls f5, f31, f0
/* 8020857C 002054BC  D8 41 00 48 */	stfd f2, 0x48(r1)
/* 80208580 002054C0  FC 60 28 90 */	fmr f3, f5
/* 80208584 002054C4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 80208588 002054C8  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8020858C 002054CC  38 04 00 14 */	addi r0, r4, 0x14
/* 80208590 002054D0  98 1F 00 AD */	stb r0, 0xad(r31)
/* 80208594 002054D4  90 7F 00 B0 */	stw r3, 0xb0(r31)
/* 80208598 002054D8  98 7F 00 AE */	stb r3, 0xae(r31)
/* 8020859C 002054DC  D0 3F 00 B4 */	stfs f1, 0xb4(r31)
/* 802085A0 002054E0  40 80 00 08 */	bge .L_802085A8
/* 802085A4 002054E4  FC 60 28 50 */	fneg f3, f5
.L_802085A8:
/* 802085A8 002054E8  C0 42 BA E4 */	lfs f2, lbl_80519E44@sda21(r2)
/* 802085AC 002054EC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802085B0 002054F0  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 802085B4 002054F4  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802085B8 002054F8  EC 23 00 B2 */	fmuls f1, f3, f2
/* 802085BC 002054FC  C0 62 BB 2C */	lfs f3, lbl_80519E8C@sda21(r2)
/* 802085C0 00205500  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802085C4 00205504  FC 00 08 1E */	fctiwz f0, f1
/* 802085C8 00205508  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 802085CC 0020550C  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 802085D0 00205510  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802085D4 00205514  7C 64 02 14 */	add r3, r4, r0
/* 802085D8 00205518  C0 03 00 04 */	lfs f0, 4(r3)
/* 802085DC 0020551C  EC 83 00 32 */	fmuls f4, f3, f0
/* 802085E0 00205520  40 80 00 28 */	bge .L_80208608
/* 802085E4 00205524  C0 02 BA E0 */	lfs f0, lbl_80519E40@sda21(r2)
/* 802085E8 00205528  EC 05 00 32 */	fmuls f0, f5, f0
/* 802085EC 0020552C  FC 00 00 1E */	fctiwz f0, f0
/* 802085F0 00205530  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 802085F4 00205534  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802085F8 00205538  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802085FC 0020553C  7C 04 04 2E */	lfsx f0, r4, r0
/* 80208600 00205540  FC 00 00 50 */	fneg f0, f0
/* 80208604 00205544  48 00 00 1C */	b .L_80208620
.L_80208608:
/* 80208608 00205548  EC 05 00 B2 */	fmuls f0, f5, f2
/* 8020860C 0020554C  FC 00 00 1E */	fctiwz f0, f0
/* 80208610 00205550  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 80208614 00205554  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80208618 00205558  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8020861C 0020555C  7C 04 04 2E */	lfsx f0, r4, r0
.L_80208620:
/* 80208620 00205560  EC 63 00 32 */	fmuls f3, f3, f0
/* 80208624 00205564  C0 5D 00 6C */	lfs f2, 0x6c(r29)
/* 80208628 00205568  C0 1D 00 74 */	lfs f0, 0x74(r29)
/* 8020862C 0020556C  C0 A2 BA 34 */	lfs f5, lbl_80519D94@sda21(r2)
/* 80208630 00205570  C0 3D 00 70 */	lfs f1, 0x70(r29)
/* 80208634 00205574  EC 63 10 2A */	fadds f3, f3, f2
/* 80208638 00205578  EC 04 00 2A */	fadds f0, f4, f0
/* 8020863C 0020557C  EC A5 08 2A */	fadds f5, f5, f1
/* 80208640 00205580  D0 7F 00 44 */	stfs f3, 0x44(r31)
/* 80208644 00205584  D0 BF 00 48 */	stfs f5, 0x48(r31)
/* 80208648 00205588  D0 1F 00 4C */	stfs f0, 0x4c(r31)
.L_8020864C:
/* 8020864C 0020558C  3B DE 00 01 */	addi r30, r30, 1
.L_80208650:
/* 80208650 00205590  7F A3 EB 78 */	mr r3, r29
/* 80208654 00205594  81 9D 00 00 */	lwz r12, 0(r29)
/* 80208658 00205598  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020865C 0020559C  7D 89 03 A6 */	mtctr r12
/* 80208660 002055A0  4E 80 04 21 */	bctrl 
/* 80208664 002055A4  7C 1E 18 00 */	cmpw r30, r3
/* 80208668 002055A8  41 80 FC 8C */	blt .L_802082F4
.L_8020866C:
/* 8020866C 002055AC  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80208670 002055B0  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80208674 002055B4  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80208678 002055B8  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8020867C 002055BC  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80208680 002055C0  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80208684 002055C4  7C 08 03 A6 */	mtlr r0
/* 80208688 002055C8  38 21 00 90 */	addi r1, r1, 0x90
/* 8020868C 002055CC  4E 80 00 20 */	blr 
.endfn test_createUjas__Q34Game12ItemUjamushi6UjaMgrFv

.fn do_update_boundSphere__Q34Game12ItemUjamushi6UjaMgrFv, global
/* 80208690 002055D0  C0 03 00 6C */	lfs f0, 0x6c(r3)
/* 80208694 002055D4  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80208698 002055D8  C0 03 00 70 */	lfs f0, 0x70(r3)
/* 8020869C 002055DC  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802086A0 002055E0  C0 03 00 74 */	lfs f0, 0x74(r3)
/* 802086A4 002055E4  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 802086A8 002055E8  C0 03 00 78 */	lfs f0, 0x78(r3)
/* 802086AC 002055EC  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802086B0 002055F0  4E 80 00 20 */	blr 
.endfn do_update_boundSphere__Q34Game12ItemUjamushi6UjaMgrFv

.fn do_update__Q34Game12ItemUjamushi6UjaMgrFv, global
/* 802086B4 002055F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802086B8 002055F8  7C 08 02 A6 */	mflr r0
/* 802086BC 002055FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802086C0 00205600  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802086C4 00205604  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802086C8 00205608  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802086CC 0020560C  93 81 00 10 */	stw r28, 0x10(r1)
/* 802086D0 00205610  7C 7C 1B 78 */	mr r28, r3
/* 802086D4 00205614  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 802086D8 00205618  28 00 00 00 */	cmplwi r0, 0
/* 802086DC 0020561C  40 82 00 10 */	bne .L_802086EC
/* 802086E0 00205620  88 1C 00 1D */	lbz r0, 0x1d(r28)
/* 802086E4 00205624  28 00 00 00 */	cmplwi r0, 0
/* 802086E8 00205628  41 82 02 48 */	beq .L_80208930
.L_802086EC:
/* 802086EC 0020562C  80 7C 00 A4 */	lwz r3, 0xa4(r28)
/* 802086F0 00205630  38 DC 00 A8 */	addi r6, r28, 0xa8
/* 802086F4 00205634  80 9C 00 98 */	lwz r4, 0x98(r28)
/* 802086F8 00205638  80 BC 00 9C */	lwz r5, 0x9c(r28)
/* 802086FC 0020563C  C0 3C 00 A0 */	lfs f1, 0xa0(r28)
/* 80208700 00205640  4B FF D9 29 */	bl getParms__Q34Game12ItemUjamushi13BoidParameterFiifRQ34Game12ItemUjamushi9BoidParms
/* 80208704 00205644  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80208708 00205648  38 82 BB 30 */	addi r4, r2, lbl_80519E90@sda21
/* 8020870C 0020564C  38 A0 00 01 */	li r5, 1
/* 80208710 00205650  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80208714 00205654  48 22 23 E5 */	bl _start__9SysTimersFPcb
/* 80208718 00205658  80 7C 00 94 */	lwz r3, 0x94(r28)
/* 8020871C 0020565C  4B F8 E0 79 */	bl update__Q24Game9UpdateMgrFv
/* 80208720 00205660  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80208724 00205664  3B E0 00 00 */	li r31, 0
/* 80208728 00205668  3B C0 00 00 */	li r30, 0
/* 8020872C 0020566C  3B A0 00 00 */	li r29, 0
/* 80208730 00205670  D0 1C 00 7C */	stfs f0, 0x7c(r28)
/* 80208734 00205674  D0 1C 00 80 */	stfs f0, 0x80(r28)
/* 80208738 00205678  D0 1C 00 84 */	stfs f0, 0x84(r28)
/* 8020873C 0020567C  D0 1C 00 88 */	stfs f0, 0x88(r28)
/* 80208740 00205680  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 80208744 00205684  D0 1C 00 90 */	stfs f0, 0x90(r28)
/* 80208748 00205688  48 00 00 B4 */	b .L_802087FC
.L_8020874C:
/* 8020874C 0020568C  7F 83 E3 78 */	mr r3, r28
/* 80208750 00205690  7F A4 EB 78 */	mr r4, r29
/* 80208754 00205694  81 9C 00 00 */	lwz r12, 0(r28)
/* 80208758 00205698  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020875C 0020569C  7D 89 03 A6 */	mtctr r12
/* 80208760 002056A0  4E 80 04 21 */	bctrl 
/* 80208764 002056A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80208768 002056A8  41 82 00 90 */	beq .L_802087F8
/* 8020876C 002056AC  7F 83 E3 78 */	mr r3, r28
/* 80208770 002056B0  7F A4 EB 78 */	mr r4, r29
/* 80208774 002056B4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80208778 002056B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020877C 002056BC  7D 89 03 A6 */	mtctr r12
/* 80208780 002056C0  4E 80 04 21 */	bctrl 
/* 80208784 002056C4  C0 3C 00 7C */	lfs f1, 0x7c(r28)
/* 80208788 002056C8  3B FF 00 01 */	addi r31, r31, 1
/* 8020878C 002056CC  C0 03 00 00 */	lfs f0, 0(r3)
/* 80208790 002056D0  EC 01 00 2A */	fadds f0, f1, f0
/* 80208794 002056D4  D0 1C 00 7C */	stfs f0, 0x7c(r28)
/* 80208798 002056D8  C0 3C 00 80 */	lfs f1, 0x80(r28)
/* 8020879C 002056DC  C0 03 00 04 */	lfs f0, 4(r3)
/* 802087A0 002056E0  EC 01 00 2A */	fadds f0, f1, f0
/* 802087A4 002056E4  D0 1C 00 80 */	stfs f0, 0x80(r28)
/* 802087A8 002056E8  C0 3C 00 84 */	lfs f1, 0x84(r28)
/* 802087AC 002056EC  C0 03 00 08 */	lfs f0, 8(r3)
/* 802087B0 002056F0  EC 01 00 2A */	fadds f0, f1, f0
/* 802087B4 002056F4  D0 1C 00 84 */	stfs f0, 0x84(r28)
/* 802087B8 002056F8  88 03 00 AC */	lbz r0, 0xac(r3)
/* 802087BC 002056FC  28 00 00 02 */	cmplwi r0, 2
/* 802087C0 00205700  41 82 00 38 */	beq .L_802087F8
/* 802087C4 00205704  C0 3C 00 88 */	lfs f1, 0x88(r28)
/* 802087C8 00205708  3B DE 00 01 */	addi r30, r30, 1
/* 802087CC 0020570C  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 802087D0 00205710  EC 01 00 2A */	fadds f0, f1, f0
/* 802087D4 00205714  D0 1C 00 88 */	stfs f0, 0x88(r28)
/* 802087D8 00205718  C0 3C 00 8C */	lfs f1, 0x8c(r28)
/* 802087DC 0020571C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802087E0 00205720  EC 01 00 2A */	fadds f0, f1, f0
/* 802087E4 00205724  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 802087E8 00205728  C0 3C 00 90 */	lfs f1, 0x90(r28)
/* 802087EC 0020572C  C0 03 00 58 */	lfs f0, 0x58(r3)
/* 802087F0 00205730  EC 01 00 2A */	fadds f0, f1, f0
/* 802087F4 00205734  D0 1C 00 90 */	stfs f0, 0x90(r28)
.L_802087F8:
/* 802087F8 00205738  3B BD 00 01 */	addi r29, r29, 1
.L_802087FC:
/* 802087FC 0020573C  7F 83 E3 78 */	mr r3, r28
/* 80208800 00205740  81 9C 00 00 */	lwz r12, 0(r28)
/* 80208804 00205744  81 8C 00 08 */	lwz r12, 8(r12)
/* 80208808 00205748  7D 89 03 A6 */	mtctr r12
/* 8020880C 0020574C  4E 80 04 21 */	bctrl 
/* 80208810 00205750  7C 1D 18 00 */	cmpw r29, r3
/* 80208814 00205754  41 80 FF 38 */	blt .L_8020874C
/* 80208818 00205758  2C 1F 00 00 */	cmpwi r31, 0
/* 8020881C 0020575C  40 81 00 4C */	ble .L_80208868
/* 80208820 00205760  6F E3 80 00 */	xoris r3, r31, 0x8000
/* 80208824 00205764  3C 00 43 30 */	lis r0, 0x4330
/* 80208828 00205768  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020882C 0020576C  C8 22 BA C0 */	lfd f1, lbl_80519E20@sda21(r2)
/* 80208830 00205770  90 01 00 08 */	stw r0, 8(r1)
/* 80208834 00205774  C0 42 BA 40 */	lfs f2, lbl_80519DA0@sda21(r2)
/* 80208838 00205778  C8 01 00 08 */	lfd f0, 8(r1)
/* 8020883C 0020577C  C0 7C 00 7C */	lfs f3, 0x7c(r28)
/* 80208840 00205780  EC 00 08 28 */	fsubs f0, f0, f1
/* 80208844 00205784  EC 22 00 24 */	fdivs f1, f2, f0
/* 80208848 00205788  EC 03 00 72 */	fmuls f0, f3, f1
/* 8020884C 0020578C  D0 1C 00 7C */	stfs f0, 0x7c(r28)
/* 80208850 00205790  C0 1C 00 80 */	lfs f0, 0x80(r28)
/* 80208854 00205794  EC 00 00 72 */	fmuls f0, f0, f1
/* 80208858 00205798  D0 1C 00 80 */	stfs f0, 0x80(r28)
/* 8020885C 0020579C  C0 1C 00 84 */	lfs f0, 0x84(r28)
/* 80208860 002057A0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80208864 002057A4  D0 1C 00 84 */	stfs f0, 0x84(r28)
.L_80208868:
/* 80208868 002057A8  2C 1E 00 00 */	cmpwi r30, 0
/* 8020886C 002057AC  40 81 00 4C */	ble .L_802088B8
/* 80208870 002057B0  6F C3 80 00 */	xoris r3, r30, 0x8000
/* 80208874 002057B4  3C 00 43 30 */	lis r0, 0x4330
/* 80208878 002057B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020887C 002057BC  C8 22 BA C0 */	lfd f1, lbl_80519E20@sda21(r2)
/* 80208880 002057C0  90 01 00 08 */	stw r0, 8(r1)
/* 80208884 002057C4  C0 42 BA 40 */	lfs f2, lbl_80519DA0@sda21(r2)
/* 80208888 002057C8  C8 01 00 08 */	lfd f0, 8(r1)
/* 8020888C 002057CC  C0 7C 00 88 */	lfs f3, 0x88(r28)
/* 80208890 002057D0  EC 00 08 28 */	fsubs f0, f0, f1
/* 80208894 002057D4  EC 22 00 24 */	fdivs f1, f2, f0
/* 80208898 002057D8  EC 03 00 72 */	fmuls f0, f3, f1
/* 8020889C 002057DC  D0 1C 00 88 */	stfs f0, 0x88(r28)
/* 802088A0 002057E0  C0 1C 00 8C */	lfs f0, 0x8c(r28)
/* 802088A4 002057E4  EC 00 00 72 */	fmuls f0, f0, f1
/* 802088A8 002057E8  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 802088AC 002057EC  C0 1C 00 90 */	lfs f0, 0x90(r28)
/* 802088B0 002057F0  EC 00 00 72 */	fmuls f0, f0, f1
/* 802088B4 002057F4  D0 1C 00 90 */	stfs f0, 0x90(r28)
.L_802088B8:
/* 802088B8 002057F8  3B A0 00 00 */	li r29, 0
/* 802088BC 002057FC  48 00 00 48 */	b .L_80208904
.L_802088C0:
/* 802088C0 00205800  7F 83 E3 78 */	mr r3, r28
/* 802088C4 00205804  7F A4 EB 78 */	mr r4, r29
/* 802088C8 00205808  81 9C 00 00 */	lwz r12, 0(r28)
/* 802088CC 0020580C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802088D0 00205810  7D 89 03 A6 */	mtctr r12
/* 802088D4 00205814  4E 80 04 21 */	bctrl 
/* 802088D8 00205818  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802088DC 0020581C  41 82 00 24 */	beq .L_80208900
/* 802088E0 00205820  7F 83 E3 78 */	mr r3, r28
/* 802088E4 00205824  7F A4 EB 78 */	mr r4, r29
/* 802088E8 00205828  81 9C 00 00 */	lwz r12, 0(r28)
/* 802088EC 0020582C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802088F0 00205830  7D 89 03 A6 */	mtctr r12
/* 802088F4 00205834  4E 80 04 21 */	bctrl 
/* 802088F8 00205838  38 9C 00 A8 */	addi r4, r28, 0xa8
/* 802088FC 0020583C  4B FF DF 09 */	bl update__Q34Game12ItemUjamushi3UjaFRQ34Game12ItemUjamushi9BoidParms
.L_80208900:
/* 80208900 00205840  3B BD 00 01 */	addi r29, r29, 1
.L_80208904:
/* 80208904 00205844  7F 83 E3 78 */	mr r3, r28
/* 80208908 00205848  81 9C 00 00 */	lwz r12, 0(r28)
/* 8020890C 0020584C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80208910 00205850  7D 89 03 A6 */	mtctr r12
/* 80208914 00205854  4E 80 04 21 */	bctrl 
/* 80208918 00205858  7C 1D 18 00 */	cmpw r29, r3
/* 8020891C 0020585C  41 80 FF A4 */	blt .L_802088C0
/* 80208920 00205860  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80208924 00205864  38 82 BB 30 */	addi r4, r2, lbl_80519E90@sda21
/* 80208928 00205868  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8020892C 0020586C  48 22 21 D1 */	bl _stop__9SysTimersFPc
.L_80208930:
/* 80208930 00205870  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80208934 00205874  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80208938 00205878  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020893C 0020587C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80208940 00205880  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80208944 00205884  7C 08 03 A6 */	mtlr r0
/* 80208948 00205888  38 21 00 20 */	addi r1, r1, 0x20
/* 8020894C 0020588C  4E 80 00 20 */	blr 
.endfn do_update__Q34Game12ItemUjamushi6UjaMgrFv

.fn "isFlagAlive__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi", weak
/* 80208950 00205890  80 63 00 68 */	lwz r3, 0x68(r3)
/* 80208954 00205894  7C 03 20 AE */	lbzx r0, r3, r4
/* 80208958 00205898  7C 00 00 34 */	cntlzw r0, r0
/* 8020895C 0020589C  54 03 D9 7E */	srwi r3, r0, 5
/* 80208960 002058A0  4E 80 00 20 */	blr 
.endfn "isFlagAlive__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"

.fn astonishPikmins__Q34Game12ItemUjamushi6UjaMgrFv, global
/* 80208964 002058A4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80208968 002058A8  7C 08 02 A6 */	mflr r0
/* 8020896C 002058AC  90 01 00 74 */	stw r0, 0x74(r1)
/* 80208970 002058B0  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80208974 002058B4  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80208978 002058B8  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8020897C 002058BC  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80208980 002058C0  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 80208984 002058C4  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 80208988 002058C8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8020898C 002058CC  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80208990 002058D0  C3 E3 00 0C */	lfs f31, 0xc(r3)
/* 80208994 002058D4  C3 C3 00 10 */	lfs f30, 0x10(r3)
/* 80208998 002058D8  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 8020899C 002058DC  C3 A3 00 14 */	lfs f29, 0x14(r3)
/* 802089A0 002058E0  38 A0 00 00 */	li r5, 0
/* 802089A4 002058E4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802089A8 002058E8  3C C0 80 4B */	lis r6, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802089AC 002058EC  C0 02 BB 38 */	lfs f0, lbl_80519E98@sda21(r2)
/* 802089B0 002058F0  3C 80 80 4B */	lis r4, __vt__Q24Game16InteractAstonish@ha
/* 802089B4 002058F4  38 C6 BC 9C */	addi r6, r6, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802089B8 002058F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802089BC 002058FC  38 04 48 54 */	addi r0, r4, __vt__Q24Game16InteractAstonish@l
/* 802089C0 00205900  28 05 00 00 */	cmplwi r5, 0
/* 802089C4 00205904  90 C1 00 20 */	stw r6, 0x20(r1)
/* 802089C8 00205908  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 802089CC 0020590C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 802089D0 00205910  90 61 00 28 */	stw r3, 0x28(r1)
/* 802089D4 00205914  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802089D8 00205918  90 01 00 14 */	stw r0, 0x14(r1)
/* 802089DC 0020591C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802089E0 00205920  40 82 00 1C */	bne .L_802089FC
/* 802089E4 00205924  81 83 00 00 */	lwz r12, 0(r3)
/* 802089E8 00205928  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802089EC 0020592C  7D 89 03 A6 */	mtctr r12
/* 802089F0 00205930  4E 80 04 21 */	bctrl 
/* 802089F4 00205934  90 61 00 24 */	stw r3, 0x24(r1)
/* 802089F8 00205938  48 00 02 04 */	b .L_80208BFC
.L_802089FC:
/* 802089FC 0020593C  81 83 00 00 */	lwz r12, 0(r3)
/* 80208A00 00205940  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80208A04 00205944  7D 89 03 A6 */	mtctr r12
/* 80208A08 00205948  4E 80 04 21 */	bctrl 
/* 80208A0C 0020594C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80208A10 00205950  48 00 00 58 */	b .L_80208A68
.L_80208A14:
/* 80208A14 00205954  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80208A18 00205958  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80208A1C 0020595C  81 83 00 00 */	lwz r12, 0(r3)
/* 80208A20 00205960  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80208A24 00205964  7D 89 03 A6 */	mtctr r12
/* 80208A28 00205968  4E 80 04 21 */	bctrl 
/* 80208A2C 0020596C  7C 64 1B 78 */	mr r4, r3
/* 80208A30 00205970  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80208A34 00205974  81 83 00 00 */	lwz r12, 0(r3)
/* 80208A38 00205978  81 8C 00 08 */	lwz r12, 8(r12)
/* 80208A3C 0020597C  7D 89 03 A6 */	mtctr r12
/* 80208A40 00205980  4E 80 04 21 */	bctrl 
/* 80208A44 00205984  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80208A48 00205988  40 82 01 B4 */	bne .L_80208BFC
/* 80208A4C 0020598C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80208A50 00205990  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80208A54 00205994  81 83 00 00 */	lwz r12, 0(r3)
/* 80208A58 00205998  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80208A5C 0020599C  7D 89 03 A6 */	mtctr r12
/* 80208A60 002059A0  4E 80 04 21 */	bctrl 
/* 80208A64 002059A4  90 61 00 24 */	stw r3, 0x24(r1)
.L_80208A68:
/* 80208A68 002059A8  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80208A6C 002059AC  38 61 00 20 */	addi r3, r1, 0x20
/* 80208A70 002059B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80208A74 002059B4  7D 89 03 A6 */	mtctr r12
/* 80208A78 002059B8  4E 80 04 21 */	bctrl 
/* 80208A7C 002059BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80208A80 002059C0  41 82 FF 94 */	beq .L_80208A14
/* 80208A84 002059C4  48 00 01 78 */	b .L_80208BFC
.L_80208A88:
/* 80208A88 002059C8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80208A8C 002059CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80208A90 002059D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80208A94 002059D4  7D 89 03 A6 */	mtctr r12
/* 80208A98 002059D8  4E 80 04 21 */	bctrl 
/* 80208A9C 002059DC  81 83 00 00 */	lwz r12, 0(r3)
/* 80208AA0 002059E0  7C 7F 1B 78 */	mr r31, r3
/* 80208AA4 002059E4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80208AA8 002059E8  7D 89 03 A6 */	mtctr r12
/* 80208AAC 002059EC  4E 80 04 21 */	bctrl 
/* 80208AB0 002059F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80208AB4 002059F4  41 82 00 8C */	beq .L_80208B40
/* 80208AB8 002059F8  7F E4 FB 78 */	mr r4, r31
/* 80208ABC 002059FC  38 61 00 08 */	addi r3, r1, 8
/* 80208AC0 00205A00  81 9F 00 00 */	lwz r12, 0(r31)
/* 80208AC4 00205A04  81 8C 00 08 */	lwz r12, 8(r12)
/* 80208AC8 00205A08  7D 89 03 A6 */	mtctr r12
/* 80208ACC 00205A0C  4E 80 04 21 */	bctrl 
/* 80208AD0 00205A10  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80208AD4 00205A14  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80208AD8 00205A18  EC 60 F0 28 */	fsubs f3, f0, f30
/* 80208ADC 00205A1C  C0 21 00 08 */	lfs f1, 8(r1)
/* 80208AE0 00205A20  EC 42 E8 28 */	fsubs f2, f2, f29
/* 80208AE4 00205A24  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80208AE8 00205A28  EC 21 F8 28 */	fsubs f1, f1, f31
/* 80208AEC 00205A2C  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80208AF0 00205A30  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80208AF4 00205A34  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 80208AF8 00205A38  EC 22 08 2A */	fadds f1, f2, f1
/* 80208AFC 00205A3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80208B00 00205A40  40 81 00 14 */	ble .L_80208B14
/* 80208B04 00205A44  40 81 00 14 */	ble .L_80208B18
/* 80208B08 00205A48  FC 00 08 34 */	frsqrte f0, f1
/* 80208B0C 00205A4C  EC 20 00 72 */	fmuls f1, f0, f1
/* 80208B10 00205A50  48 00 00 08 */	b .L_80208B18
.L_80208B14:
/* 80208B14 00205A54  FC 20 00 90 */	fmr f1, f0
.L_80208B18:
/* 80208B18 00205A58  C0 02 BB 38 */	lfs f0, lbl_80519E98@sda21(r2)
/* 80208B1C 00205A5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80208B20 00205A60  4C 40 13 82 */	cror 2, 0, 2
/* 80208B24 00205A64  40 82 00 1C */	bne .L_80208B40
/* 80208B28 00205A68  7F E3 FB 78 */	mr r3, r31
/* 80208B2C 00205A6C  38 81 00 14 */	addi r4, r1, 0x14
/* 80208B30 00205A70  81 9F 00 00 */	lwz r12, 0(r31)
/* 80208B34 00205A74  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80208B38 00205A78  7D 89 03 A6 */	mtctr r12
/* 80208B3C 00205A7C  4E 80 04 21 */	bctrl 
.L_80208B40:
/* 80208B40 00205A80  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80208B44 00205A84  28 00 00 00 */	cmplwi r0, 0
/* 80208B48 00205A88  40 82 00 24 */	bne .L_80208B6C
/* 80208B4C 00205A8C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80208B50 00205A90  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80208B54 00205A94  81 83 00 00 */	lwz r12, 0(r3)
/* 80208B58 00205A98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80208B5C 00205A9C  7D 89 03 A6 */	mtctr r12
/* 80208B60 00205AA0  4E 80 04 21 */	bctrl 
/* 80208B64 00205AA4  90 61 00 24 */	stw r3, 0x24(r1)
/* 80208B68 00205AA8  48 00 00 94 */	b .L_80208BFC
.L_80208B6C:
/* 80208B6C 00205AAC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80208B70 00205AB0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80208B74 00205AB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80208B78 00205AB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80208B7C 00205ABC  7D 89 03 A6 */	mtctr r12
/* 80208B80 00205AC0  4E 80 04 21 */	bctrl 
/* 80208B84 00205AC4  90 61 00 24 */	stw r3, 0x24(r1)
/* 80208B88 00205AC8  48 00 00 58 */	b .L_80208BE0
.L_80208B8C:
/* 80208B8C 00205ACC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80208B90 00205AD0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80208B94 00205AD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80208B98 00205AD8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80208B9C 00205ADC  7D 89 03 A6 */	mtctr r12
/* 80208BA0 00205AE0  4E 80 04 21 */	bctrl 
/* 80208BA4 00205AE4  7C 64 1B 78 */	mr r4, r3
/* 80208BA8 00205AE8  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80208BAC 00205AEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80208BB0 00205AF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80208BB4 00205AF4  7D 89 03 A6 */	mtctr r12
/* 80208BB8 00205AF8  4E 80 04 21 */	bctrl 
/* 80208BBC 00205AFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80208BC0 00205B00  40 82 00 3C */	bne .L_80208BFC
/* 80208BC4 00205B04  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80208BC8 00205B08  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80208BCC 00205B0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80208BD0 00205B10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80208BD4 00205B14  7D 89 03 A6 */	mtctr r12
/* 80208BD8 00205B18  4E 80 04 21 */	bctrl 
/* 80208BDC 00205B1C  90 61 00 24 */	stw r3, 0x24(r1)
.L_80208BE0:
/* 80208BE0 00205B20  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80208BE4 00205B24  38 61 00 20 */	addi r3, r1, 0x20
/* 80208BE8 00205B28  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80208BEC 00205B2C  7D 89 03 A6 */	mtctr r12
/* 80208BF0 00205B30  4E 80 04 21 */	bctrl 
/* 80208BF4 00205B34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80208BF8 00205B38  41 82 FF 94 */	beq .L_80208B8C
.L_80208BFC:
/* 80208BFC 00205B3C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80208C00 00205B40  81 83 00 00 */	lwz r12, 0(r3)
/* 80208C04 00205B44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80208C08 00205B48  7D 89 03 A6 */	mtctr r12
/* 80208C0C 00205B4C  4E 80 04 21 */	bctrl 
/* 80208C10 00205B50  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80208C14 00205B54  7C 04 18 40 */	cmplw r4, r3
/* 80208C18 00205B58  40 82 FE 70 */	bne .L_80208A88
/* 80208C1C 00205B5C  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80208C20 00205B60  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80208C24 00205B64  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 80208C28 00205B68  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80208C2C 00205B6C  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 80208C30 00205B70  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 80208C34 00205B74  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80208C38 00205B78  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80208C3C 00205B7C  7C 08 03 A6 */	mtlr r0
/* 80208C40 00205B80  38 21 00 70 */	addi r1, r1, 0x70
/* 80208C44 00205B84  4E 80 00 20 */	blr 
.endfn astonishPikmins__Q34Game12ItemUjamushi6UjaMgrFv

.fn init__Q34Game12ItemUjamushi3FSMFPQ34Game12ItemUjamushi4Item, global
/* 80208C48 00205B88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80208C4C 00205B8C  7C 08 02 A6 */	mflr r0
/* 80208C50 00205B90  38 80 00 03 */	li r4, 3
/* 80208C54 00205B94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80208C58 00205B98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80208C5C 00205B9C  7C 7F 1B 78 */	mr r31, r3
/* 80208C60 00205BA0  48 00 25 05 */	bl "create__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>Fi"
/* 80208C64 00205BA4  38 60 00 14 */	li r3, 0x14
/* 80208C68 00205BA8  4B E1 B2 3D */	bl __nw__FUl
/* 80208C6C 00205BAC  7C 64 1B 79 */	or. r4, r3, r3
/* 80208C70 00205BB0  41 82 00 40 */	beq .L_80208CB0
/* 80208C74 00205BB4  3C 60 80 4C */	lis r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@ha
/* 80208C78 00205BB8  3C C0 80 4C */	lis r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@ha
/* 80208C7C 00205BBC  38 03 F7 DC */	addi r0, r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@l
/* 80208C80 00205BC0  3C A0 80 4C */	lis r5, __vt__Q34Game12ItemUjamushi5State@ha
/* 80208C84 00205BC4  90 04 00 00 */	stw r0, 0(r4)
/* 80208C88 00205BC8  38 E0 00 00 */	li r7, 0
/* 80208C8C 00205BCC  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemUjamushi9WaitState@ha
/* 80208C90 00205BD0  38 C6 F7 A8 */	addi r6, r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@l
/* 80208C94 00205BD4  90 E4 00 04 */	stw r7, 4(r4)
/* 80208C98 00205BD8  38 A5 F7 74 */	addi r5, r5, __vt__Q34Game12ItemUjamushi5State@l
/* 80208C9C 00205BDC  38 03 EF EC */	addi r0, r3, __vt__Q34Game12ItemUjamushi9WaitState@l
/* 80208CA0 00205BE0  90 E4 00 08 */	stw r7, 8(r4)
/* 80208CA4 00205BE4  90 C4 00 00 */	stw r6, 0(r4)
/* 80208CA8 00205BE8  90 A4 00 00 */	stw r5, 0(r4)
/* 80208CAC 00205BEC  90 04 00 00 */	stw r0, 0(r4)
.L_80208CB0:
/* 80208CB0 00205BF0  7F E3 FB 78 */	mr r3, r31
/* 80208CB4 00205BF4  48 00 42 F5 */	bl "registerState__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ24Game36FSMState<Q34Game12ItemUjamushi4Item>"
/* 80208CB8 00205BF8  38 60 00 14 */	li r3, 0x14
/* 80208CBC 00205BFC  4B E1 B1 E9 */	bl __nw__FUl
/* 80208CC0 00205C00  7C 64 1B 79 */	or. r4, r3, r3
/* 80208CC4 00205C04  41 82 00 44 */	beq .L_80208D08
/* 80208CC8 00205C08  3C 60 80 4C */	lis r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@ha
/* 80208CCC 00205C0C  3C C0 80 4C */	lis r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@ha
/* 80208CD0 00205C10  38 03 F7 DC */	addi r0, r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@l
/* 80208CD4 00205C14  3C A0 80 4C */	lis r5, __vt__Q34Game12ItemUjamushi5State@ha
/* 80208CD8 00205C18  90 04 00 00 */	stw r0, 0(r4)
/* 80208CDC 00205C1C  38 00 00 01 */	li r0, 1
/* 80208CE0 00205C20  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemUjamushi11ActiveState@ha
/* 80208CE4 00205C24  38 E0 00 00 */	li r7, 0
/* 80208CE8 00205C28  90 04 00 04 */	stw r0, 4(r4)
/* 80208CEC 00205C2C  38 C6 F7 A8 */	addi r6, r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@l
/* 80208CF0 00205C30  38 A5 F7 74 */	addi r5, r5, __vt__Q34Game12ItemUjamushi5State@l
/* 80208CF4 00205C34  38 03 EF B8 */	addi r0, r3, __vt__Q34Game12ItemUjamushi11ActiveState@l
/* 80208CF8 00205C38  90 E4 00 08 */	stw r7, 8(r4)
/* 80208CFC 00205C3C  90 C4 00 00 */	stw r6, 0(r4)
/* 80208D00 00205C40  90 A4 00 00 */	stw r5, 0(r4)
/* 80208D04 00205C44  90 04 00 00 */	stw r0, 0(r4)
.L_80208D08:
/* 80208D08 00205C48  7F E3 FB 78 */	mr r3, r31
/* 80208D0C 00205C4C  48 00 42 9D */	bl "registerState__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ24Game36FSMState<Q34Game12ItemUjamushi4Item>"
/* 80208D10 00205C50  38 60 00 14 */	li r3, 0x14
/* 80208D14 00205C54  4B E1 B1 91 */	bl __nw__FUl
/* 80208D18 00205C58  7C 64 1B 79 */	or. r4, r3, r3
/* 80208D1C 00205C5C  41 82 00 44 */	beq .L_80208D60
/* 80208D20 00205C60  3C 60 80 4C */	lis r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@ha
/* 80208D24 00205C64  3C C0 80 4C */	lis r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@ha
/* 80208D28 00205C68  38 03 F7 DC */	addi r0, r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@l
/* 80208D2C 00205C6C  3C A0 80 4C */	lis r5, __vt__Q34Game12ItemUjamushi5State@ha
/* 80208D30 00205C70  90 04 00 00 */	stw r0, 0(r4)
/* 80208D34 00205C74  38 00 00 02 */	li r0, 2
/* 80208D38 00205C78  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemUjamushi8DigState@ha
/* 80208D3C 00205C7C  38 E0 00 00 */	li r7, 0
/* 80208D40 00205C80  90 04 00 04 */	stw r0, 4(r4)
/* 80208D44 00205C84  38 C6 F7 A8 */	addi r6, r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@l
/* 80208D48 00205C88  38 A5 F7 74 */	addi r5, r5, __vt__Q34Game12ItemUjamushi5State@l
/* 80208D4C 00205C8C  38 03 EF 84 */	addi r0, r3, __vt__Q34Game12ItemUjamushi8DigState@l
/* 80208D50 00205C90  90 E4 00 08 */	stw r7, 8(r4)
/* 80208D54 00205C94  90 C4 00 00 */	stw r6, 0(r4)
/* 80208D58 00205C98  90 A4 00 00 */	stw r5, 0(r4)
/* 80208D5C 00205C9C  90 04 00 00 */	stw r0, 0(r4)
.L_80208D60:
/* 80208D60 00205CA0  7F E3 FB 78 */	mr r3, r31
/* 80208D64 00205CA4  48 00 42 45 */	bl "registerState__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ24Game36FSMState<Q34Game12ItemUjamushi4Item>"
/* 80208D68 00205CA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80208D6C 00205CAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80208D70 00205CB0  7C 08 03 A6 */	mtlr r0
/* 80208D74 00205CB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80208D78 00205CB8  4E 80 00 20 */	blr 
.endfn init__Q34Game12ItemUjamushi3FSMFPQ34Game12ItemUjamushi4Item

.fn onInit__Q34Game12ItemUjamushi4ItemFPQ24Game15CreatureInitArg, global
/* 80208D7C 00205CBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80208D80 00205CC0  7C 08 02 A6 */	mflr r0
/* 80208D84 00205CC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80208D88 00205CC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80208D8C 00205CCC  7C 9F 23 79 */	or. r31, r4, r4
/* 80208D90 00205CD0  93 C1 00 08 */	stw r30, 8(r1)
/* 80208D94 00205CD4  7C 7E 1B 78 */	mr r30, r3
/* 80208D98 00205CD8  40 82 00 20 */	bne .L_80208DB8
/* 80208D9C 00205CDC  3C 60 80 48 */	lis r3, lbl_80481DC8@ha
/* 80208DA0 00205CE0  3C A0 80 48 */	lis r5, lbl_80481DDC@ha
/* 80208DA4 00205CE4  38 63 1D C8 */	addi r3, r3, lbl_80481DC8@l
/* 80208DA8 00205CE8  38 80 04 2F */	li r4, 0x42f
/* 80208DAC 00205CEC  38 A5 1D DC */	addi r5, r5, lbl_80481DDC@l
/* 80208DB0 00205CF0  4C C6 31 82 */	crclr 6
/* 80208DB4 00205CF4  4B E2 18 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80208DB8:
/* 80208DB8 00205CF8  83 FF 00 04 */	lwz r31, 4(r31)
/* 80208DBC 00205CFC  38 60 03 14 */	li r3, 0x314
/* 80208DC0 00205D00  4B E1 B0 E5 */	bl __nw__FUl
/* 80208DC4 00205D04  7C 60 1B 79 */	or. r0, r3, r3
/* 80208DC8 00205D08  41 82 00 10 */	beq .L_80208DD8
/* 80208DCC 00205D0C  7F E4 FB 78 */	mr r4, r31
/* 80208DD0 00205D10  4B FF F0 D5 */	bl __ct__Q34Game12ItemUjamushi6UjaMgrFi
/* 80208DD4 00205D14  7C 60 1B 78 */	mr r0, r3
.L_80208DD8:
/* 80208DD8 00205D18  90 1E 02 00 */	stw r0, 0x200(r30)
/* 80208DDC 00205D1C  7F C3 F3 78 */	mr r3, r30
/* 80208DE0 00205D20  38 80 00 00 */	li r4, 0
/* 80208DE4 00205D24  81 9E 00 00 */	lwz r12, 0(r30)
/* 80208DE8 00205D28  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 80208DEC 00205D2C  7D 89 03 A6 */	mtctr r12
/* 80208DF0 00205D30  4E 80 04 21 */	bctrl 
/* 80208DF4 00205D34  80 7E 01 D8 */	lwz r3, 0x1d8(r30)
/* 80208DF8 00205D38  7F C4 F3 78 */	mr r4, r30
/* 80208DFC 00205D3C  38 A0 00 00 */	li r5, 0
/* 80208E00 00205D40  38 C0 00 00 */	li r6, 0
/* 80208E04 00205D44  81 83 00 00 */	lwz r12, 0(r3)
/* 80208E08 00205D48  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80208E0C 00205D4C  7D 89 03 A6 */	mtctr r12
/* 80208E10 00205D50  4E 80 04 21 */	bctrl 
/* 80208E14 00205D54  7F C3 F3 78 */	mr r3, r30
/* 80208E18 00205D58  38 80 00 01 */	li r4, 1
/* 80208E1C 00205D5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80208E20 00205D60  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80208E24 00205D64  7D 89 03 A6 */	mtctr r12
/* 80208E28 00205D68  4E 80 04 21 */	bctrl 
/* 80208E2C 00205D6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80208E30 00205D70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80208E34 00205D74  83 C1 00 08 */	lwz r30, 8(r1)
/* 80208E38 00205D78  7C 08 03 A6 */	mtlr r0
/* 80208E3C 00205D7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80208E40 00205D80  4E 80 00 20 */	blr 
.endfn onInit__Q34Game12ItemUjamushi4ItemFPQ24Game15CreatureInitArg

.fn "start__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg", weak
/* 80208E44 00205D84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80208E48 00205D88  7C 08 02 A6 */	mflr r0
/* 80208E4C 00205D8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80208E50 00205D90  38 00 00 00 */	li r0, 0
/* 80208E54 00205D94  90 04 01 DC */	stw r0, 0x1dc(r4)
/* 80208E58 00205D98  81 83 00 00 */	lwz r12, 0(r3)
/* 80208E5C 00205D9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80208E60 00205DA0  7D 89 03 A6 */	mtctr r12
/* 80208E64 00205DA4  4E 80 04 21 */	bctrl 
/* 80208E68 00205DA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80208E6C 00205DAC  7C 08 03 A6 */	mtlr r0
/* 80208E70 00205DB0  38 21 00 10 */	addi r1, r1, 0x10
/* 80208E74 00205DB4  4E 80 00 20 */	blr 
.endfn "start__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"

.fn onSetPosition__Q34Game12ItemUjamushi4ItemFv, global
/* 80208E78 00205DB8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80208E7C 00205DBC  7C 08 02 A6 */	mflr r0
/* 80208E80 00205DC0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80208E84 00205DC4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80208E88 00205DC8  7C 7F 1B 78 */	mr r31, r3
/* 80208E8C 00205DCC  38 7F 01 38 */	addi r3, r31, 0x138
/* 80208E90 00205DD0  38 9F 01 9C */	addi r4, r31, 0x19c
/* 80208E94 00205DD4  48 21 F9 AD */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 80208E98 00205DD8  80 8D 95 40 */	lwz r4, mgr__Q24Game12ItemUjamushi@sda21(r13)
/* 80208E9C 00205DDC  C0 7F 01 D0 */	lfs f3, 0x1d0(r31)
/* 80208EA0 00205DE0  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 80208EA4 00205DE4  38 64 03 10 */	addi r3, r4, 0x310
/* 80208EA8 00205DE8  C0 5F 01 A4 */	lfs f2, 0x1a4(r31)
/* 80208EAC 00205DEC  38 04 05 A8 */	addi r0, r4, 0x5a8
/* 80208EB0 00205DF0  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 80208EB4 00205DF4  D0 01 00 08 */	stfs f0, 8(r1)
/* 80208EB8 00205DF8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80208EBC 00205DFC  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 80208EC0 00205E00  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 80208EC4 00205E04  90 61 00 18 */	stw r3, 0x18(r1)
/* 80208EC8 00205E08  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80208ECC 00205E0C  81 84 03 10 */	lwz r12, 0x310(r4)
/* 80208ED0 00205E10  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80208ED4 00205E14  7D 89 03 A6 */	mtctr r12
/* 80208ED8 00205E18  4E 80 04 21 */	bctrl 
/* 80208EDC 00205E1C  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 80208EE0 00205E20  38 81 00 08 */	addi r4, r1, 8
/* 80208EE4 00205E24  4B FF F3 01 */	bl init__Q34Game12ItemUjamushi6UjaMgrFRQ34Game12ItemUjamushi13UjaMgrInitArg
/* 80208EE8 00205E28  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 80208EEC 00205E2C  4B FF FA 79 */	bl astonishPikmins__Q34Game12ItemUjamushi6UjaMgrFv
/* 80208EF0 00205E30  38 00 00 00 */	li r0, 0
/* 80208EF4 00205E34  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80208EF8 00205E38  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 80208EFC 00205E3C  80 6D 95 40 */	lwz r3, mgr__Q24Game12ItemUjamushi@sda21(r13)
/* 80208F00 00205E40  85 83 03 28 */	lwzu r12, 0x328(r3)
/* 80208F04 00205E44  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80208F08 00205E48  7D 89 03 A6 */	mtctr r12
/* 80208F0C 00205E4C  4E 80 04 21 */	bctrl 
/* 80208F10 00205E50  90 7F 01 EC */	stw r3, 0x1ec(r31)
/* 80208F14 00205E54  7F E3 FB 78 */	mr r3, r31
/* 80208F18 00205E58  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80208F1C 00205E5C  D0 1F 01 E8 */	stfs f0, 0x1e8(r31)
/* 80208F20 00205E60  48 00 00 19 */	bl setBoidTimer__Q34Game12ItemUjamushi4ItemFv
/* 80208F24 00205E64  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80208F28 00205E68  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80208F2C 00205E6C  7C 08 03 A6 */	mtlr r0
/* 80208F30 00205E70  38 21 00 30 */	addi r1, r1, 0x30
/* 80208F34 00205E74  4E 80 00 20 */	blr 
.endfn onSetPosition__Q34Game12ItemUjamushi4ItemFv

.fn setBoidTimer__Q34Game12ItemUjamushi4ItemFv, global
/* 80208F38 00205E78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80208F3C 00205E7C  7C 08 02 A6 */	mflr r0
/* 80208F40 00205E80  90 01 00 24 */	stw r0, 0x24(r1)
/* 80208F44 00205E84  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80208F48 00205E88  7C 7F 1B 78 */	mr r31, r3
/* 80208F4C 00205E8C  4B EC 06 55 */	bl rand
/* 80208F50 00205E90  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80208F54 00205E94  3C 00 43 30 */	lis r0, 0x4330
/* 80208F58 00205E98  90 61 00 0C */	stw r3, 0xc(r1)
/* 80208F5C 00205E9C  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 80208F60 00205EA0  90 01 00 08 */	stw r0, 8(r1)
/* 80208F64 00205EA4  C0 42 BA B4 */	lfs f2, lbl_80519E14@sda21(r2)
/* 80208F68 00205EA8  C8 01 00 08 */	lfd f0, 8(r1)
/* 80208F6C 00205EAC  C0 22 BA 70 */	lfs f1, lbl_80519DD0@sda21(r2)
/* 80208F70 00205EB0  EC 60 18 28 */	fsubs f3, f0, f3
/* 80208F74 00205EB4  C0 02 BA B0 */	lfs f0, lbl_80519E10@sda21(r2)
/* 80208F78 00205EB8  EC 43 10 24 */	fdivs f2, f3, f2
/* 80208F7C 00205EBC  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 80208F80 00205EC0  D0 1F 01 F0 */	stfs f0, 0x1f0(r31)
/* 80208F84 00205EC4  D0 1F 01 F4 */	stfs f0, 0x1f4(r31)
/* 80208F88 00205EC8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80208F8C 00205ECC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80208F90 00205ED0  7C 08 03 A6 */	mtlr r0
/* 80208F94 00205ED4  38 21 00 20 */	addi r1, r1, 0x20
/* 80208F98 00205ED8  4E 80 00 20 */	blr 
.endfn setBoidTimer__Q34Game12ItemUjamushi4ItemFv

.fn ignoreAtari__Q34Game12ItemUjamushi4ItemFPQ24Game8Creature, global
/* 80208F9C 00205EDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80208FA0 00205EE0  7C 08 02 A6 */	mflr r0
/* 80208FA4 00205EE4  7C 83 23 78 */	mr r3, r4
/* 80208FA8 00205EE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80208FAC 00205EEC  81 84 00 00 */	lwz r12, 0(r4)
/* 80208FB0 00205EF0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80208FB4 00205EF4  7D 89 03 A6 */	mtctr r12
/* 80208FB8 00205EF8  4E 80 04 21 */	bctrl 
/* 80208FBC 00205EFC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80208FC0 00205F00  7C 00 00 34 */	cntlzw r0, r0
/* 80208FC4 00205F04  54 03 D9 7E */	srwi r3, r0, 5
/* 80208FC8 00205F08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80208FCC 00205F0C  7C 08 03 A6 */	mtlr r0
/* 80208FD0 00205F10  38 21 00 10 */	addi r1, r1, 0x10
/* 80208FD4 00205F14  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q34Game12ItemUjamushi4ItemFPQ24Game8Creature

.fn updateBoundSphere__Q34Game12ItemUjamushi4ItemFv, global
/* 80208FD8 00205F18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80208FDC 00205F1C  7C 08 02 A6 */	mflr r0
/* 80208FE0 00205F20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80208FE4 00205F24  80 83 01 14 */	lwz r4, 0x114(r3)
/* 80208FE8 00205F28  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 80208FEC 00205F2C  80 84 00 00 */	lwz r4, 0(r4)
/* 80208FF0 00205F30  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 80208FF4 00205F34  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 80208FF8 00205F38  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
/* 80208FFC 00205F3C  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 80209000 00205F40  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 80209004 00205F44  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 80209008 00205F48  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 8020900C 00205F4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80209010 00205F50  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 80209014 00205F54  7D 89 03 A6 */	mtctr r12
/* 80209018 00205F58  4E 80 04 21 */	bctrl 
/* 8020901C 00205F5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80209020 00205F60  41 82 00 20 */	beq .L_80209040
/* 80209024 00205F64  3C 60 80 48 */	lis r3, lbl_80481DC8@ha
/* 80209028 00205F68  3C A0 80 48 */	lis r5, lbl_80481E30@ha
/* 8020902C 00205F6C  38 63 1D C8 */	addi r3, r3, lbl_80481DC8@l
/* 80209030 00205F70  38 80 04 71 */	li r4, 0x471
/* 80209034 00205F74  38 A5 1E 30 */	addi r5, r5, lbl_80481E30@l
/* 80209038 00205F78  4C C6 31 82 */	crclr 6
/* 8020903C 00205F7C  4B E2 16 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80209040:
/* 80209040 00205F80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80209044 00205F84  7C 08 03 A6 */	mtlr r0
/* 80209048 00205F88  38 21 00 10 */	addi r1, r1, 0x10
/* 8020904C 00205F8C  4E 80 00 20 */	blr 
.endfn updateBoundSphere__Q34Game12ItemUjamushi4ItemFv

.fn isCollisionFlick__Q34Game12ItemUjamushi4ItemFv, weak
/* 80209050 00205F90  38 60 00 00 */	li r3, 0
/* 80209054 00205F94  4E 80 00 20 */	blr 
.endfn isCollisionFlick__Q34Game12ItemUjamushi4ItemFv

.fn interactFlockAttack__Q34Game12ItemUjamushi4ItemFRQ24Game19InteractFlockAttack, global
/* 80209058 00205F98  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8020905C 00205F9C  7C 08 02 A6 */	mflr r0
/* 80209060 00205FA0  90 01 00 94 */	stw r0, 0x94(r1)
/* 80209064 00205FA4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80209068 00205FA8  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8020906C 00205FAC  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80209070 00205FB0  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 80209074 00205FB4  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80209078 00205FB8  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8020907C 00205FBC  93 A1 00 64 */	stw r29, 0x64(r1)
/* 80209080 00205FC0  93 81 00 60 */	stw r28, 0x60(r1)
/* 80209084 00205FC4  7C 9E 23 78 */	mr r30, r4
/* 80209088 00205FC8  7C 7D 1B 78 */	mr r29, r3
/* 8020908C 00205FCC  80 63 02 00 */	lwz r3, 0x200(r3)
/* 80209090 00205FD0  80 84 00 08 */	lwz r4, 8(r4)
/* 80209094 00205FD4  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80209098 00205FD8  48 00 5C 79 */	bl attackFlock__Q24Game12BaseFlockMgrFif
/* 8020909C 00205FDC  7C 03 00 D0 */	neg r0, r3
/* 802090A0 00205FE0  3B E0 00 00 */	li r31, 0
/* 802090A4 00205FE4  7C 00 1B 78 */	or r0, r0, r3
/* 802090A8 00205FE8  54 00 0F FE */	srwi r0, r0, 0x1f
/* 802090AC 00205FEC  98 1E 00 10 */	stb r0, 0x10(r30)
/* 802090B0 00205FF0  83 9E 00 08 */	lwz r28, 8(r30)
/* 802090B4 00205FF4  83 BD 02 00 */	lwz r29, 0x200(r29)
/* 802090B8 00205FF8  2C 1C 00 00 */	cmpwi r28, 0
/* 802090BC 00205FFC  41 80 00 24 */	blt .L_802090E0
/* 802090C0 00206000  7F A3 EB 78 */	mr r3, r29
/* 802090C4 00206004  81 9D 00 00 */	lwz r12, 0(r29)
/* 802090C8 00206008  81 8C 00 08 */	lwz r12, 8(r12)
/* 802090CC 0020600C  7D 89 03 A6 */	mtctr r12
/* 802090D0 00206010  4E 80 04 21 */	bctrl 
/* 802090D4 00206014  7C 1C 18 00 */	cmpw r28, r3
/* 802090D8 00206018  40 80 00 08 */	bge .L_802090E0
/* 802090DC 0020601C  3B E0 00 01 */	li r31, 1
.L_802090E0:
/* 802090E0 00206020  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802090E4 00206024  40 82 00 20 */	bne .L_80209104
/* 802090E8 00206028  3C 60 80 48 */	lis r3, lbl_80481E3C@ha
/* 802090EC 0020602C  3C A0 80 48 */	lis r5, lbl_80481DDC@ha
/* 802090F0 00206030  38 63 1E 3C */	addi r3, r3, lbl_80481E3C@l
/* 802090F4 00206034  38 80 00 AB */	li r4, 0xab
/* 802090F8 00206038  38 A5 1D DC */	addi r5, r5, lbl_80481DDC@l
/* 802090FC 0020603C  4C C6 31 82 */	crclr 6
/* 80209100 00206040  4B E2 15 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80209104:
/* 80209104 00206044  7F A3 EB 78 */	mr r3, r29
/* 80209108 00206048  7F 84 E3 78 */	mr r4, r28
/* 8020910C 0020604C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80209110 00206050  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80209114 00206054  7D 89 03 A6 */	mtctr r12
/* 80209118 00206058  4E 80 04 21 */	bctrl 
/* 8020911C 0020605C  C0 23 00 04 */	lfs f1, 4(r3)
/* 80209120 00206060  C0 43 00 08 */	lfs f2, 8(r3)
/* 80209124 00206064  C0 03 00 00 */	lfs f0, 0(r3)
/* 80209128 00206068  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8020912C 0020606C  D0 3E 00 18 */	stfs f1, 0x18(r30)
/* 80209130 00206070  D0 5E 00 1C */	stfs f2, 0x1c(r30)
/* 80209134 00206074  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 80209138 00206078  28 00 00 00 */	cmplwi r0, 0
/* 8020913C 0020607C  41 82 02 5C */	beq .L_80209398
/* 80209140 00206080  4B EC 04 61 */	bl rand
/* 80209144 00206084  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80209148 00206088  3C 00 43 30 */	lis r0, 0x4330
/* 8020914C 0020608C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80209150 00206090  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 80209154 00206094  90 01 00 20 */	stw r0, 0x20(r1)
/* 80209158 00206098  C0 22 BA B4 */	lfs f1, lbl_80519E14@sda21(r2)
/* 8020915C 0020609C  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 80209160 002060A0  C0 02 BB 40 */	lfs f0, lbl_80519EA0@sda21(r2)
/* 80209164 002060A4  EC 42 18 28 */	fsubs f2, f2, f3
/* 80209168 002060A8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8020916C 002060AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80209170 002060B0  40 81 02 28 */	ble .L_80209398
/* 80209174 002060B4  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 80209178 002060B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020917C 002060BC  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80209180 002060C0  7D 89 03 A6 */	mtctr r12
/* 80209184 002060C4  4E 80 04 21 */	bctrl 
/* 80209188 002060C8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8020918C 002060CC  41 82 02 0C */	beq .L_80209398
/* 80209190 002060D0  4B EC 04 11 */	bl rand
/* 80209194 002060D4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80209198 002060D8  3C 00 43 30 */	lis r0, 0x4330
/* 8020919C 002060DC  90 61 00 24 */	stw r3, 0x24(r1)
/* 802091A0 002060E0  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 802091A4 002060E4  90 01 00 20 */	stw r0, 0x20(r1)
/* 802091A8 002060E8  C0 22 BA B4 */	lfs f1, lbl_80519E14@sda21(r2)
/* 802091AC 002060EC  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 802091B0 002060F0  C0 02 BA B8 */	lfs f0, lbl_80519E18@sda21(r2)
/* 802091B4 002060F4  EC 42 18 28 */	fsubs f2, f2, f3
/* 802091B8 002060F8  EC 22 08 24 */	fdivs f1, f2, f1
/* 802091BC 002060FC  EF E0 00 72 */	fmuls f31, f0, f1
/* 802091C0 00206100  4B EC 03 E1 */	bl rand
/* 802091C4 00206104  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802091C8 00206108  3C 00 43 30 */	lis r0, 0x4330
/* 802091CC 0020610C  90 61 00 2C */	stw r3, 0x2c(r1)
/* 802091D0 00206110  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 802091D4 00206114  90 01 00 28 */	stw r0, 0x28(r1)
/* 802091D8 00206118  C0 42 BA B4 */	lfs f2, lbl_80519E14@sda21(r2)
/* 802091DC 0020611C  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 802091E0 00206120  C0 22 BA 80 */	lfs f1, lbl_80519DE0@sda21(r2)
/* 802091E4 00206124  EC 60 18 28 */	fsubs f3, f0, f3
/* 802091E8 00206128  C0 02 BA 90 */	lfs f0, lbl_80519DF0@sda21(r2)
/* 802091EC 0020612C  EC 43 10 24 */	fdivs f2, f3, f2
/* 802091F0 00206130  EF C1 00 BA */	fmadds f30, f1, f2, f0
/* 802091F4 00206134  4B EC 03 AD */	bl rand
/* 802091F8 00206138  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802091FC 0020613C  3C 00 43 30 */	lis r0, 0x4330
/* 80209200 00206140  90 61 00 34 */	stw r3, 0x34(r1)
/* 80209204 00206144  FC 80 F8 90 */	fmr f4, f31
/* 80209208 00206148  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 8020920C 0020614C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80209210 00206150  C8 22 BA C0 */	lfd f1, lbl_80519E20@sda21(r2)
/* 80209214 00206154  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80209218 00206158  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8020921C 0020615C  C0 42 BA B4 */	lfs f2, lbl_80519E14@sda21(r2)
/* 80209220 00206160  EC 60 08 28 */	fsubs f3, f0, f1
/* 80209224 00206164  C0 22 BA 38 */	lfs f1, lbl_80519D98@sda21(r2)
/* 80209228 00206168  C0 02 BA 84 */	lfs f0, lbl_80519DE4@sda21(r2)
/* 8020922C 0020616C  EC 43 10 24 */	fdivs f2, f3, f2
/* 80209230 00206170  EC 61 00 BA */	fmadds f3, f1, f2, f0
/* 80209234 00206174  40 80 00 08 */	bge .L_8020923C
/* 80209238 00206178  FC 80 F8 50 */	fneg f4, f31
.L_8020923C:
/* 8020923C 0020617C  C0 42 BA E4 */	lfs f2, lbl_80519E44@sda21(r2)
/* 80209240 00206180  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80209244 00206184  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80209248 00206188  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8020924C 0020618C  EC 24 00 B2 */	fmuls f1, f4, f2
/* 80209250 00206190  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80209254 00206194  FC 00 08 1E */	fctiwz f0, f1
/* 80209258 00206198  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8020925C 0020619C  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80209260 002061A0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80209264 002061A4  7C 64 02 14 */	add r3, r4, r0
/* 80209268 002061A8  C0 03 00 04 */	lfs f0, 4(r3)
/* 8020926C 002061AC  EC 3E 00 32 */	fmuls f1, f30, f0
/* 80209270 002061B0  40 80 00 28 */	bge .L_80209298
/* 80209274 002061B4  C0 02 BA E0 */	lfs f0, lbl_80519E40@sda21(r2)
/* 80209278 002061B8  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8020927C 002061BC  FC 00 00 1E */	fctiwz f0, f0
/* 80209280 002061C0  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80209284 002061C4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80209288 002061C8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8020928C 002061CC  7C 04 04 2E */	lfsx f0, r4, r0
/* 80209290 002061D0  FC 00 00 50 */	fneg f0, f0
/* 80209294 002061D4  48 00 00 1C */	b .L_802092B0
.L_80209298:
/* 80209298 002061D8  EC 1F 00 B2 */	fmuls f0, f31, f2
/* 8020929C 002061DC  FC 00 00 1E */	fctiwz f0, f0
/* 802092A0 002061E0  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 802092A4 002061E4  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 802092A8 002061E8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802092AC 002061EC  7C 04 04 2E */	lfsx f0, r4, r0
.L_802092B0:
/* 802092B0 002061F0  EC 1E 00 32 */	fmuls f0, f30, f0
/* 802092B4 002061F4  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 802092B8 002061F8  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802092BC 002061FC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802092C0 00206200  4B EC 02 E1 */	bl rand
/* 802092C4 00206204  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802092C8 00206208  3C 00 43 30 */	lis r0, 0x4330
/* 802092CC 0020620C  90 61 00 54 */	stw r3, 0x54(r1)
/* 802092D0 00206210  C8 62 BA C0 */	lfd f3, lbl_80519E20@sda21(r2)
/* 802092D4 00206214  90 01 00 50 */	stw r0, 0x50(r1)
/* 802092D8 00206218  C0 22 BA B4 */	lfs f1, lbl_80519E14@sda21(r2)
/* 802092DC 0020621C  C8 41 00 50 */	lfd f2, 0x50(r1)
/* 802092E0 00206220  C0 02 BB 44 */	lfs f0, lbl_80519EA4@sda21(r2)
/* 802092E4 00206224  EC 42 18 28 */	fsubs f2, f2, f3
/* 802092E8 00206228  EC 22 08 24 */	fdivs f1, f2, f1
/* 802092EC 0020622C  EC 00 00 72 */	fmuls f0, f0, f1
/* 802092F0 00206230  FC 00 00 1E */	fctiwz f0, f0
/* 802092F4 00206234  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 802092F8 00206238  83 81 00 5C */	lwz r28, 0x5c(r1)
/* 802092FC 0020623C  2C 1C 00 01 */	cmpwi r28, 1
/* 80209300 00206240  40 82 00 1C */	bne .L_8020931C
/* 80209304 00206244  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80209308 00206248  38 80 00 1D */	li r4, 0x1d
/* 8020930C 0020624C  4B FD E0 D5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80209310 00206250  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80209314 00206254  40 82 00 08 */	bne .L_8020931C
/* 80209318 00206258  3B 80 00 00 */	li r28, 0
.L_8020931C:
/* 8020931C 0020625C  2C 1C 00 02 */	cmpwi r28, 2
/* 80209320 00206260  40 82 00 1C */	bne .L_8020933C
/* 80209324 00206264  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80209328 00206268  38 80 00 1E */	li r4, 0x1e
/* 8020932C 0020626C  4B FD E0 B5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80209330 00206270  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80209334 00206274  40 82 00 08 */	bne .L_8020933C
/* 80209338 00206278  3B 80 00 00 */	li r28, 0
.L_8020933C:
/* 8020933C 0020627C  7F E3 FB 78 */	mr r3, r31
/* 80209340 00206280  38 80 00 00 */	li r4, 0
/* 80209344 00206284  4B F3 1C 85 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 80209348 00206288  9B 9F 01 E0 */	stb r28, 0x1e0(r31)
/* 8020934C 0020628C  7F E3 FB 78 */	mr r3, r31
/* 80209350 00206290  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80209354 00206294  38 81 00 08 */	addi r4, r1, 8
/* 80209358 00206298  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8020935C 0020629C  38 A0 00 00 */	li r5, 0
/* 80209360 002062A0  D0 21 00 08 */	stfs f1, 8(r1)
/* 80209364 002062A4  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 80209368 002062A8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8020936C 002062AC  EC 01 00 2A */	fadds f0, f1, f0
/* 80209370 002062B0  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 80209374 002062B4  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80209378 002062B8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8020937C 002062BC  4B F3 1E 2D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80209380 002062C0  7F E3 FB 78 */	mr r3, r31
/* 80209384 002062C4  38 81 00 14 */	addi r4, r1, 0x14
/* 80209388 002062C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8020938C 002062CC  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80209390 002062D0  7D 89 03 A6 */	mtctr r12
/* 80209394 002062D4  4E 80 04 21 */	bctrl 
.L_80209398:
/* 80209398 002062D8  38 60 00 01 */	li r3, 1
/* 8020939C 002062DC  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 802093A0 002062E0  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 802093A4 002062E4  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 802093A8 002062E8  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 802093AC 002062EC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802093B0 002062F0  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802093B4 002062F4  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 802093B8 002062F8  80 01 00 94 */	lwz r0, 0x94(r1)
/* 802093BC 002062FC  83 81 00 60 */	lwz r28, 0x60(r1)
/* 802093C0 00206300  7C 08 03 A6 */	mtlr r0
/* 802093C4 00206304  38 21 00 90 */	addi r1, r1, 0x90
/* 802093C8 00206308  4E 80 00 20 */	blr 
.endfn interactFlockAttack__Q34Game12ItemUjamushi4ItemFRQ24Game19InteractFlockAttack

.fn doAI__Q34Game12ItemUjamushi4ItemFv, global
/* 802093CC 0020630C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802093D0 00206310  7C 08 02 A6 */	mflr r0
/* 802093D4 00206314  90 01 00 54 */	stw r0, 0x54(r1)
/* 802093D8 00206318  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802093DC 0020631C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802093E0 00206320  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802093E4 00206324  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802093E8 00206328  93 A1 00 34 */	stw r29, 0x34(r1)
/* 802093EC 0020632C  93 81 00 30 */	stw r28, 0x30(r1)
/* 802093F0 00206330  7C 7C 1B 78 */	mr r28, r3
/* 802093F4 00206334  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 802093F8 00206338  7F 84 E3 78 */	mr r4, r28
/* 802093FC 0020633C  81 83 00 00 */	lwz r12, 0(r3)
/* 80209400 00206340  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80209404 00206344  7D 89 03 A6 */	mtctr r12
/* 80209408 00206348  4E 80 04 21 */	bctrl 
/* 8020940C 0020634C  7F 83 E3 78 */	mr r3, r28
/* 80209410 00206350  4B FC 31 FD */	bl updateCollTree__Q24Game8BaseItemFv
/* 80209414 00206354  C0 1C 01 E8 */	lfs f0, 0x1e8(r28)
/* 80209418 00206358  C0 62 BA 40 */	lfs f3, lbl_80519DA0@sda21(r2)
/* 8020941C 0020635C  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 80209420 00206360  40 80 00 90 */	bge .L_802094B0
/* 80209424 00206364  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80209428 00206368  C0 5C 01 F0 */	lfs f2, 0x1f0(r28)
/* 8020942C 0020636C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80209430 00206370  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80209434 00206374  EC 22 08 28 */	fsubs f1, f2, f1
/* 80209438 00206378  D0 3C 01 F0 */	stfs f1, 0x1f0(r28)
/* 8020943C 0020637C  C0 3C 01 F0 */	lfs f1, 0x1f0(r28)
/* 80209440 00206380  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80209444 00206384  4C 40 13 82 */	cror 2, 0, 2
/* 80209448 00206388  40 82 00 54 */	bne .L_8020949C
/* 8020944C 0020638C  80 1C 01 E4 */	lwz r0, 0x1e4(r28)
/* 80209450 00206390  90 1C 01 E0 */	stw r0, 0x1e0(r28)
/* 80209454 00206394  4B EC 01 4D */	bl rand
/* 80209458 00206398  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8020945C 0020639C  3C 00 43 30 */	lis r0, 0x4330
/* 80209460 002063A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80209464 002063A4  C8 22 BA C0 */	lfd f1, lbl_80519E20@sda21(r2)
/* 80209468 002063A8  90 01 00 08 */	stw r0, 8(r1)
/* 8020946C 002063AC  C0 62 BA B4 */	lfs f3, lbl_80519E14@sda21(r2)
/* 80209470 002063B0  C8 01 00 08 */	lfd f0, 8(r1)
/* 80209474 002063B4  C0 42 BA 70 */	lfs f2, lbl_80519DD0@sda21(r2)
/* 80209478 002063B8  EC 80 08 28 */	fsubs f4, f0, f1
/* 8020947C 002063BC  C0 22 BA B0 */	lfs f1, lbl_80519E10@sda21(r2)
/* 80209480 002063C0  C0 02 BA 40 */	lfs f0, lbl_80519DA0@sda21(r2)
/* 80209484 002063C4  EC 64 18 24 */	fdivs f3, f4, f3
/* 80209488 002063C8  EC 22 08 FA */	fmadds f1, f2, f3, f1
/* 8020948C 002063CC  D0 3C 01 F0 */	stfs f1, 0x1f0(r28)
/* 80209490 002063D0  D0 3C 01 F4 */	stfs f1, 0x1f4(r28)
/* 80209494 002063D4  D0 1C 01 E8 */	stfs f0, 0x1e8(r28)
/* 80209498 002063D8  48 00 00 D8 */	b .L_80209570
.L_8020949C:
/* 8020949C 002063DC  C0 1C 01 F4 */	lfs f0, 0x1f4(r28)
/* 802094A0 002063E0  EC 01 00 24 */	fdivs f0, f1, f0
/* 802094A4 002063E4  EC 03 00 28 */	fsubs f0, f3, f0
/* 802094A8 002063E8  D0 1C 01 E8 */	stfs f0, 0x1e8(r28)
/* 802094AC 002063EC  48 00 00 C4 */	b .L_80209570
.L_802094B0:
/* 802094B0 002063F0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802094B4 002063F4  C0 5C 01 F0 */	lfs f2, 0x1f0(r28)
/* 802094B8 002063F8  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802094BC 002063FC  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 802094C0 00206400  EC 22 08 28 */	fsubs f1, f2, f1
/* 802094C4 00206404  D0 3C 01 F0 */	stfs f1, 0x1f0(r28)
/* 802094C8 00206408  C0 3C 01 F0 */	lfs f1, 0x1f0(r28)
/* 802094CC 0020640C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802094D0 00206410  4C 40 13 82 */	cror 2, 0, 2
/* 802094D4 00206414  40 82 00 9C */	bne .L_80209570
/* 802094D8 00206418  4B EC 00 C9 */	bl rand
/* 802094DC 0020641C  3C 80 43 30 */	lis r4, 0x4330
/* 802094E0 00206420  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802094E4 00206424  90 01 00 0C */	stw r0, 0xc(r1)
/* 802094E8 00206428  80 1C 01 EC */	lwz r0, 0x1ec(r28)
/* 802094EC 0020642C  90 81 00 08 */	stw r4, 8(r1)
/* 802094F0 00206430  C8 42 BA C0 */	lfd f2, lbl_80519E20@sda21(r2)
/* 802094F4 00206434  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802094F8 00206438  C8 21 00 08 */	lfd f1, 8(r1)
/* 802094FC 0020643C  C0 02 BA B4 */	lfs f0, lbl_80519E14@sda21(r2)
/* 80209500 00206440  EC 21 10 28 */	fsubs f1, f1, f2
/* 80209504 00206444  90 01 00 14 */	stw r0, 0x14(r1)
/* 80209508 00206448  90 81 00 10 */	stw r4, 0x10(r1)
/* 8020950C 0020644C  EC 21 00 24 */	fdivs f1, f1, f0
/* 80209510 00206450  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80209514 00206454  EC 00 10 28 */	fsubs f0, f0, f2
/* 80209518 00206458  EC 00 00 72 */	fmuls f0, f0, f1
/* 8020951C 0020645C  FC 00 00 1E */	fctiwz f0, f0
/* 80209520 00206460  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80209524 00206464  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80209528 00206468  90 1C 01 E4 */	stw r0, 0x1e4(r28)
/* 8020952C 0020646C  4B EC 00 75 */	bl rand
/* 80209530 00206470  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80209534 00206474  3C 00 43 30 */	lis r0, 0x4330
/* 80209538 00206478  90 61 00 24 */	stw r3, 0x24(r1)
/* 8020953C 0020647C  C8 22 BA C0 */	lfd f1, lbl_80519E20@sda21(r2)
/* 80209540 00206480  90 01 00 20 */	stw r0, 0x20(r1)
/* 80209544 00206484  C0 62 BA B4 */	lfs f3, lbl_80519E14@sda21(r2)
/* 80209548 00206488  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8020954C 0020648C  C0 42 BA 70 */	lfs f2, lbl_80519DD0@sda21(r2)
/* 80209550 00206490  EC 80 08 28 */	fsubs f4, f0, f1
/* 80209554 00206494  C0 22 BA B0 */	lfs f1, lbl_80519E10@sda21(r2)
/* 80209558 00206498  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 8020955C 0020649C  EC 64 18 24 */	fdivs f3, f4, f3
/* 80209560 002064A0  EC 22 08 FA */	fmadds f1, f2, f3, f1
/* 80209564 002064A4  D0 3C 01 F0 */	stfs f1, 0x1f0(r28)
/* 80209568 002064A8  D0 3C 01 F4 */	stfs f1, 0x1f4(r28)
/* 8020956C 002064AC  D0 1C 01 E8 */	stfs f0, 0x1e8(r28)
.L_80209570:
/* 80209570 002064B0  83 FC 02 00 */	lwz r31, 0x200(r28)
/* 80209574 002064B4  C3 FC 01 E8 */	lfs f31, 0x1e8(r28)
/* 80209578 002064B8  80 7F 00 A4 */	lwz r3, 0xa4(r31)
/* 8020957C 002064BC  85 83 00 18 */	lwzu r12, 0x18(r3)
/* 80209580 002064C0  83 BC 01 E4 */	lwz r29, 0x1e4(r28)
/* 80209584 002064C4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80209588 002064C8  83 DC 01 E0 */	lwz r30, 0x1e0(r28)
/* 8020958C 002064CC  7D 89 03 A6 */	mtctr r12
/* 80209590 002064D0  4E 80 04 21 */	bctrl 
/* 80209594 002064D4  57 C0 0F FE */	srwi r0, r30, 0x1f
/* 80209598 002064D8  68 00 00 01 */	xori r0, r0, 1
/* 8020959C 002064DC  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 802095A0 002064E0  7C 00 18 00 */	cmpw r0, r3
/* 802095A4 002064E4  40 81 00 20 */	ble .L_802095C4
/* 802095A8 002064E8  3C 60 80 48 */	lis r3, lbl_80481DC8@ha
/* 802095AC 002064EC  3C A0 80 48 */	lis r5, lbl_80481DDC@ha
/* 802095B0 002064F0  38 63 1D C8 */	addi r3, r3, lbl_80481DC8@l
/* 802095B4 002064F4  38 80 03 85 */	li r4, 0x385
/* 802095B8 002064F8  38 A5 1D DC */	addi r5, r5, lbl_80481DDC@l
/* 802095BC 002064FC  4C C6 31 82 */	crclr 6
/* 802095C0 00206500  4B E2 10 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802095C4:
/* 802095C4 00206504  80 7F 00 A4 */	lwz r3, 0xa4(r31)
/* 802095C8 00206508  85 83 00 18 */	lwzu r12, 0x18(r3)
/* 802095CC 0020650C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802095D0 00206510  7D 89 03 A6 */	mtctr r12
/* 802095D4 00206514  4E 80 04 21 */	bctrl 
/* 802095D8 00206518  57 A0 0F FE */	srwi r0, r29, 0x1f
/* 802095DC 0020651C  68 00 00 01 */	xori r0, r0, 1
/* 802095E0 00206520  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 802095E4 00206524  7C 00 18 00 */	cmpw r0, r3
/* 802095E8 00206528  40 81 00 20 */	ble .L_80209608
/* 802095EC 0020652C  3C 60 80 48 */	lis r3, lbl_80481DC8@ha
/* 802095F0 00206530  3C A0 80 48 */	lis r5, lbl_80481DDC@ha
/* 802095F4 00206534  38 63 1D C8 */	addi r3, r3, lbl_80481DC8@l
/* 802095F8 00206538  38 80 03 86 */	li r4, 0x386
/* 802095FC 0020653C  38 A5 1D DC */	addi r5, r5, lbl_80481DDC@l
/* 80209600 00206540  4C C6 31 82 */	crclr 6
/* 80209604 00206544  4B E2 10 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80209608:
/* 80209608 00206548  93 DF 00 98 */	stw r30, 0x98(r31)
/* 8020960C 0020654C  93 BF 00 9C */	stw r29, 0x9c(r31)
/* 80209610 00206550  D3 FF 00 A0 */	stfs f31, 0xa0(r31)
/* 80209614 00206554  80 7C 02 00 */	lwz r3, 0x200(r28)
/* 80209618 00206558  48 00 54 C5 */	bl update__Q24Game12BaseFlockMgrFv
/* 8020961C 0020655C  80 7C 02 00 */	lwz r3, 0x200(r28)
/* 80209620 00206560  81 83 00 00 */	lwz r12, 0(r3)
/* 80209624 00206564  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80209628 00206568  7D 89 03 A6 */	mtctr r12
/* 8020962C 0020656C  4E 80 04 21 */	bctrl 
/* 80209630 00206570  2C 03 00 00 */	cmpwi r3, 0
/* 80209634 00206574  40 82 00 1C */	bne .L_80209650
/* 80209638 00206578  7F 83 E3 78 */	mr r3, r28
/* 8020963C 0020657C  38 80 00 00 */	li r4, 0
/* 80209640 00206580  81 9C 00 00 */	lwz r12, 0(r28)
/* 80209644 00206584  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80209648 00206588  7D 89 03 A6 */	mtctr r12
/* 8020964C 0020658C  4E 80 04 21 */	bctrl 
.L_80209650:
/* 80209650 00206590  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80209654 00206594  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80209658 00206598  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8020965C 0020659C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80209660 002065A0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80209664 002065A4  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80209668 002065A8  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8020966C 002065AC  7C 08 03 A6 */	mtlr r0
/* 80209670 002065B0  38 21 00 50 */	addi r1, r1, 0x50
/* 80209674 002065B4  4E 80 00 20 */	blr 
.endfn doAI__Q34Game12ItemUjamushi4ItemFv

.fn "getNumObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 80209678 002065B8  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8020967C 002065BC  4E 80 00 20 */	blr 
.endfn "getNumObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn doSimpleDraw__Q34Game12ItemUjamushi4ItemFP8Viewport, global
/* 80209680 002065C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80209684 002065C4  7C 08 02 A6 */	mflr r0
/* 80209688 002065C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020968C 002065CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80209690 002065D0  7C 9F 23 78 */	mr r31, r4
/* 80209694 002065D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80209698 002065D8  7C 7E 1B 78 */	mr r30, r3
/* 8020969C 002065DC  80 AD 95 40 */	lwz r5, mgr__Q24Game12ItemUjamushi@sda21(r13)
/* 802096A0 002065E0  88 05 00 8E */	lbz r0, 0x8e(r5)
/* 802096A4 002065E4  7C A3 2B 78 */	mr r3, r5
/* 802096A8 002065E8  7C 00 00 34 */	cntlzw r0, r0
/* 802096AC 002065EC  54 04 D9 7E */	srwi r4, r0, 5
/* 802096B0 002065F0  4B FC 3A A1 */	bl getModelData__Q24Game11BaseItemMgrFi
/* 802096B4 002065F4  80 02 2B 20 */	lwz r0, lbl_80520E80@sda21(r2)
/* 802096B8 002065F8  7F E4 FB 78 */	mr r4, r31
/* 802096BC 002065FC  38 A1 00 08 */	addi r5, r1, 8
/* 802096C0 00206600  38 C0 00 01 */	li r6, 1
/* 802096C4 00206604  90 01 00 08 */	stw r0, 8(r1)
/* 802096C8 00206608  90 61 00 08 */	stw r3, 8(r1)
/* 802096CC 0020660C  80 7E 02 00 */	lwz r3, 0x200(r30)
/* 802096D0 00206610  81 83 00 00 */	lwz r12, 0(r3)
/* 802096D4 00206614  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802096D8 00206618  7D 89 03 A6 */	mtctr r12
/* 802096DC 0020661C  4E 80 04 21 */	bctrl 
/* 802096E0 00206620  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802096E4 00206624  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802096E8 00206628  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802096EC 0020662C  7C 08 03 A6 */	mtlr r0
/* 802096F0 00206630  38 21 00 20 */	addi r1, r1, 0x20
/* 802096F4 00206634  4E 80 00 20 */	blr 
.endfn doSimpleDraw__Q34Game12ItemUjamushi4ItemFP8Viewport

.fn __ct__Q34Game12ItemUjamushi3MgrFv, global
/* 802096F8 00206638  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 802096FC 0020663C  7C 08 02 A6 */	mflr r0
/* 80209700 00206640  90 01 04 44 */	stw r0, 0x444(r1)
/* 80209704 00206644  7C 80 07 35 */	extsh. r0, r4
/* 80209708 00206648  3C 80 80 48 */	lis r4, lbl_80481D40@ha
/* 8020970C 0020664C  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 80209710 00206650  3B E4 1D 40 */	addi r31, r4, lbl_80481D40@l
/* 80209714 00206654  93 C1 04 38 */	stw r30, 0x438(r1)
/* 80209718 00206658  7C 7E 1B 78 */	mr r30, r3
/* 8020971C 0020665C  93 A1 04 34 */	stw r29, 0x434(r1)
/* 80209720 00206660  93 81 04 30 */	stw r28, 0x430(r1)
/* 80209724 00206664  41 82 00 0C */	beq .L_80209730
/* 80209728 00206668  38 1E 06 58 */	addi r0, r30, 0x658
/* 8020972C 0020666C  90 1E 00 04 */	stw r0, 4(r30)
.L_80209730:
/* 80209730 00206670  7F C3 F3 78 */	mr r3, r30
/* 80209734 00206674  38 80 00 00 */	li r4, 0
/* 80209738 00206678  48 00 3D B1 */	bl "__ct__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
/* 8020973C 0020667C  3C 80 80 4C */	lis r4, __vt__Q34Game12ItemUjamushi3Mgr@ha
/* 80209740 00206680  38 7E 00 9C */	addi r3, r30, 0x9c
/* 80209744 00206684  38 A4 F0 20 */	addi r5, r4, __vt__Q34Game12ItemUjamushi3Mgr@l
/* 80209748 00206688  38 80 00 01 */	li r4, 1
/* 8020974C 0020668C  90 BE 00 00 */	stw r5, 0(r30)
/* 80209750 00206690  38 05 00 74 */	addi r0, r5, 0x74
/* 80209754 00206694  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80209758 00206698  4B FF C2 D1 */	bl __ct__Q34Game12ItemUjamushi9BoidParmsFv
/* 8020975C 0020669C  38 7E 03 10 */	addi r3, r30, 0x310
/* 80209760 002066A0  4B FF C7 D5 */	bl __ct__Q34Game12ItemUjamushi13BoidParameterFv
/* 80209764 002066A4  38 1E 06 54 */	addi r0, r30, 0x654
/* 80209768 002066A8  3C A0 75 30 */	lis r5, 0x75303031@ha
/* 8020976C 002066AC  90 1E 05 A8 */	stw r0, 0x5a8(r30)
/* 80209770 002066B0  38 60 00 00 */	li r3, 0
/* 80209774 002066B4  38 1F 00 B8 */	addi r0, r31, 0xb8
/* 80209778 002066B8  38 9E 05 A8 */	addi r4, r30, 0x5a8
/* 8020977C 002066BC  90 7E 05 AC */	stw r3, 0x5ac(r30)
/* 80209780 002066C0  38 64 00 0C */	addi r3, r4, 0xc
/* 80209784 002066C4  38 A5 30 31 */	addi r5, r5, 0x75303031@l
/* 80209788 002066C8  38 DF 00 C4 */	addi r6, r31, 0xc4
/* 8020978C 002066CC  90 1E 05 B0 */	stw r0, 0x5b0(r30)
/* 80209790 002066D0  48 20 9E C9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80209794 002066D4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80209798 002066D8  3C A0 75 30 */	lis r5, 0x75303032@ha
/* 8020979C 002066DC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 802097A0 002066E0  38 9E 05 A8 */	addi r4, r30, 0x5a8
/* 802097A4 002066E4  90 1E 05 B4 */	stw r0, 0x5b4(r30)
/* 802097A8 002066E8  38 64 00 34 */	addi r3, r4, 0x34
/* 802097AC 002066EC  C0 02 BA A0 */	lfs f0, lbl_80519E00@sda21(r2)
/* 802097B0 002066F0  38 A5 30 32 */	addi r5, r5, 0x75303032@l
/* 802097B4 002066F4  C0 22 BA 7C */	lfs f1, lbl_80519DDC@sda21(r2)
/* 802097B8 002066F8  38 DF 00 D4 */	addi r6, r31, 0xd4
/* 802097BC 002066FC  D0 1E 05 CC */	stfs f0, 0x5cc(r30)
/* 802097C0 00206700  C0 02 BA 40 */	lfs f0, lbl_80519DA0@sda21(r2)
/* 802097C4 00206704  D0 3E 05 D4 */	stfs f1, 0x5d4(r30)
/* 802097C8 00206708  D0 1E 05 D8 */	stfs f0, 0x5d8(r30)
/* 802097CC 0020670C  48 20 9E 8D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 802097D0 00206710  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 802097D4 00206714  3C A0 75 30 */	lis r5, 0x75303033@ha
/* 802097D8 00206718  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 802097DC 0020671C  38 9E 05 A8 */	addi r4, r30, 0x5a8
/* 802097E0 00206720  90 1E 05 DC */	stw r0, 0x5dc(r30)
/* 802097E4 00206724  38 64 00 5C */	addi r3, r4, 0x5c
/* 802097E8 00206728  C0 02 BA 40 */	lfs f0, lbl_80519DA0@sda21(r2)
/* 802097EC 0020672C  38 A5 30 33 */	addi r5, r5, 0x75303033@l
/* 802097F0 00206730  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 802097F4 00206734  38 C2 BA A4 */	addi r6, r2, lbl_80519E04@sda21
/* 802097F8 00206738  D0 1E 05 F4 */	stfs f0, 0x5f4(r30)
/* 802097FC 0020673C  C0 02 BA 84 */	lfs f0, lbl_80519DE4@sda21(r2)
/* 80209800 00206740  D0 3E 05 FC */	stfs f1, 0x5fc(r30)
/* 80209804 00206744  D0 1E 06 00 */	stfs f0, 0x600(r30)
/* 80209808 00206748  48 20 9E 51 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8020980C 0020674C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80209810 00206750  3C A0 75 30 */	lis r5, 0x75303034@ha
/* 80209814 00206754  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80209818 00206758  38 9E 05 A8 */	addi r4, r30, 0x5a8
/* 8020981C 0020675C  90 1E 06 04 */	stw r0, 0x604(r30)
/* 80209820 00206760  38 64 00 84 */	addi r3, r4, 0x84
/* 80209824 00206764  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80209828 00206768  38 A5 30 34 */	addi r5, r5, 0x75303034@l
/* 8020982C 0020676C  C0 02 BA AC */	lfs f0, lbl_80519E0C@sda21(r2)
/* 80209830 00206770  38 DF 00 E0 */	addi r6, r31, 0xe0
/* 80209834 00206774  D0 3E 06 1C */	stfs f1, 0x61c(r30)
/* 80209838 00206778  D0 3E 06 24 */	stfs f1, 0x624(r30)
/* 8020983C 0020677C  D0 1E 06 28 */	stfs f0, 0x628(r30)
/* 80209840 00206780  48 20 9E 19 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80209844 00206784  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80209848 00206788  C0 42 BA B0 */	lfs f2, lbl_80519E10@sda21(r2)
/* 8020984C 0020678C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80209850 00206790  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80209854 00206794  90 1E 06 2C */	stw r0, 0x62c(r30)
/* 80209858 00206798  38 BF 01 08 */	addi r5, r31, 0x108
/* 8020985C 0020679C  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80209860 002067A0  38 1F 01 14 */	addi r0, r31, 0x114
/* 80209864 002067A4  D0 5E 06 44 */	stfs f2, 0x644(r30)
/* 80209868 002067A8  7F C3 F3 78 */	mr r3, r30
/* 8020986C 002067AC  38 80 00 02 */	li r4, 2
/* 80209870 002067B0  D0 3E 06 4C */	stfs f1, 0x64c(r30)
/* 80209874 002067B4  D0 1E 06 50 */	stfs f0, 0x650(r30)
/* 80209878 002067B8  90 BE 00 08 */	stw r5, 8(r30)
/* 8020987C 002067BC  90 1E 00 28 */	stw r0, 0x28(r30)
/* 80209880 002067C0  4B FC 35 4D */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 80209884 002067C4  7F C3 F3 78 */	mr r3, r30
/* 80209888 002067C8  38 82 BB 48 */	addi r4, r2, lbl_80519EA8@sda21
/* 8020988C 002067CC  4B FC 36 49 */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 80209890 002067D0  7F C3 F3 78 */	mr r3, r30
/* 80209894 002067D4  38 9F 01 30 */	addi r4, r31, 0x130
/* 80209898 002067D8  38 A0 00 00 */	li r5, 0
/* 8020989C 002067DC  3C C0 00 02 */	lis r6, 2
/* 802098A0 002067E0  4B FC 36 B1 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 802098A4 002067E4  7F C3 F3 78 */	mr r3, r30
/* 802098A8 002067E8  38 9F 01 44 */	addi r4, r31, 0x144
/* 802098AC 002067EC  38 A0 00 01 */	li r5, 1
/* 802098B0 002067F0  3C C0 20 02 */	lis r6, 0x2002
/* 802098B4 002067F4  4B FC 36 9D */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 802098B8 002067F8  38 00 00 00 */	li r0, 0
/* 802098BC 002067FC  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 802098C0 00206800  90 1E 03 08 */	stw r0, 0x308(r30)
/* 802098C4 00206804  7F C3 F3 78 */	mr r3, r30
/* 802098C8 00206808  38 80 00 00 */	li r4, 0
/* 802098CC 0020680C  90 1E 03 04 */	stw r0, 0x304(r30)
/* 802098D0 00206810  D0 1E 03 0C */	stfs f0, 0x30c(r30)
/* 802098D4 00206814  4B FC 38 7D */	bl getModelData__Q24Game11BaseItemMgrFi
/* 802098D8 00206818  3C 80 00 04 */	lis r4, 4
/* 802098DC 0020681C  7C 7D 1B 78 */	mr r29, r3
/* 802098E0 00206820  4B E7 9F F9 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 802098E4 00206824  3C 80 80 48 */	lis r4, j3dDefaultMtx@ha
/* 802098E8 00206828  7F A3 EB 78 */	mr r3, r29
/* 802098EC 0020682C  38 A4 88 6C */	addi r5, r4, j3dDefaultMtx@l
/* 802098F0 00206830  38 80 00 00 */	li r4, 0
/* 802098F4 00206834  4B E7 A1 BD */	bl simpleCalcMaterial__12J3DModelDataFUsPA4_f
/* 802098F8 00206838  7F A3 EB 78 */	mr r3, r29
/* 802098FC 0020683C  4B E7 A1 35 */	bl makeSharedDL__12J3DModelDataFv
/* 80209900 00206840  7F C3 F3 78 */	mr r3, r30
/* 80209904 00206844  38 80 00 01 */	li r4, 1
/* 80209908 00206848  4B FC 38 49 */	bl getModelData__Q24Game11BaseItemMgrFi
/* 8020990C 0020684C  3C 80 00 04 */	lis r4, 4
/* 80209910 00206850  7C 7D 1B 78 */	mr r29, r3
/* 80209914 00206854  4B E7 9F C5 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 80209918 00206858  3C 80 80 48 */	lis r4, j3dDefaultMtx@ha
/* 8020991C 0020685C  7F A3 EB 78 */	mr r3, r29
/* 80209920 00206860  38 A4 88 6C */	addi r5, r4, j3dDefaultMtx@l
/* 80209924 00206864  38 80 00 00 */	li r4, 0
/* 80209928 00206868  4B E7 A1 89 */	bl simpleCalcMaterial__12J3DModelDataFUsPA4_f
/* 8020992C 0020686C  7F A3 EB 78 */	mr r3, r29
/* 80209930 00206870  4B E7 A1 01 */	bl makeSharedDL__12J3DModelDataFv
/* 80209934 00206874  C0 02 BB 50 */	lfs f0, lbl_80519EB0@sda21(r2)
/* 80209938 00206878  38 00 00 01 */	li r0, 1
/* 8020993C 0020687C  C0 42 BA 40 */	lfs f2, lbl_80519DA0@sda21(r2)
/* 80209940 00206880  7F C3 F3 78 */	mr r3, r30
/* 80209944 00206884  D0 1E 00 88 */	stfs f0, 0x88(r30)
/* 80209948 00206888  38 9F 01 58 */	addi r4, r31, 0x158
/* 8020994C 0020688C  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 80209950 00206890  98 1E 00 8C */	stb r0, 0x8c(r30)
/* 80209954 00206894  C0 02 BA B0 */	lfs f0, lbl_80519E10@sda21(r2)
/* 80209958 00206898  98 1E 00 8D */	stb r0, 0x8d(r30)
/* 8020995C 0020689C  98 1E 00 8E */	stb r0, 0x8e(r30)
/* 80209960 002068A0  D0 5E 00 90 */	stfs f2, 0x90(r30)
/* 80209964 002068A4  D0 3E 00 94 */	stfs f1, 0x94(r30)
/* 80209968 002068A8  D0 1E 00 98 */	stfs f0, 0x98(r30)
/* 8020996C 002068AC  4B FC 38 61 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 80209970 002068B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80209974 002068B4  7C 7D 1B 78 */	mr r29, r3
/* 80209978 002068B8  38 9F 01 64 */	addi r4, r31, 0x164
/* 8020997C 002068BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80209980 002068C0  7D 89 03 A6 */	mtctr r12
/* 80209984 002068C4  4E 80 04 21 */	bctrl 
/* 80209988 002068C8  7C 7C 1B 79 */	or. r28, r3, r3
/* 8020998C 002068CC  40 82 00 18 */	bne .L_802099A4
/* 80209990 002068D0  38 7F 00 88 */	addi r3, r31, 0x88
/* 80209994 002068D4  38 BF 00 9C */	addi r5, r31, 0x9c
/* 80209998 002068D8  38 80 04 F7 */	li r4, 0x4f7
/* 8020999C 002068DC  4C C6 31 82 */	crclr 6
/* 802099A0 002068E0  4B E2 0C A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802099A4:
/* 802099A4 002068E4  7F 84 E3 78 */	mr r4, r28
/* 802099A8 002068E8  38 61 00 08 */	addi r3, r1, 8
/* 802099AC 002068EC  38 A0 FF FF */	li r5, -1
/* 802099B0 002068F0  48 20 BF 49 */	bl __ct__9RamStreamFPvi
/* 802099B4 002068F4  38 00 00 01 */	li r0, 1
/* 802099B8 002068F8  2C 00 00 01 */	cmpwi r0, 1
/* 802099BC 002068FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802099C0 00206900  40 82 00 0C */	bne .L_802099CC
/* 802099C4 00206904  38 00 00 00 */	li r0, 0
/* 802099C8 00206908  90 01 04 1C */	stw r0, 0x41c(r1)
.L_802099CC:
/* 802099CC 0020690C  38 7E 03 10 */	addi r3, r30, 0x310
/* 802099D0 00206910  38 81 00 08 */	addi r4, r1, 8
/* 802099D4 00206914  4B FF C7 5D */	bl read__Q34Game12ItemUjamushi13BoidParameterFR6Stream
/* 802099D8 00206918  7F C3 F3 78 */	mr r3, r30
/* 802099DC 0020691C  7F A4 EB 78 */	mr r4, r29
/* 802099E0 00206920  4B FC 38 71 */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 802099E4 00206924  80 01 04 44 */	lwz r0, 0x444(r1)
/* 802099E8 00206928  7F C3 F3 78 */	mr r3, r30
/* 802099EC 0020692C  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 802099F0 00206930  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 802099F4 00206934  83 A1 04 34 */	lwz r29, 0x434(r1)
/* 802099F8 00206938  83 81 04 30 */	lwz r28, 0x430(r1)
/* 802099FC 0020693C  7C 08 03 A6 */	mtlr r0
/* 80209A00 00206940  38 21 04 40 */	addi r1, r1, 0x440
/* 80209A04 00206944  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12ItemUjamushi3MgrFv

.fn __dt__Q34Game12ItemUjamushi13BoidParameterFv, weak
/* 80209A08 00206948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80209A0C 0020694C  7C 08 02 A6 */	mflr r0
/* 80209A10 00206950  90 01 00 14 */	stw r0, 0x14(r1)
/* 80209A14 00206954  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80209A18 00206958  7C 9F 23 78 */	mr r31, r4
/* 80209A1C 0020695C  93 C1 00 08 */	stw r30, 8(r1)
/* 80209A20 00206960  7C 7E 1B 79 */	or. r30, r3, r3
/* 80209A24 00206964  41 82 00 4C */	beq .L_80209A70
/* 80209A28 00206968  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemUjamushi13BoidParameter@ha
/* 80209A2C 0020696C  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80209A30 00206970  38 03 FA 98 */	addi r0, r3, __vt__Q34Game12ItemUjamushi13BoidParameter@l
/* 80209A34 00206974  90 1E 00 00 */	stw r0, 0(r30)
/* 80209A38 00206978  41 82 00 1C */	beq .L_80209A54
/* 80209A3C 0020697C  3C 80 80 4C */	lis r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@ha
/* 80209A40 00206980  38 7E 00 18 */	addi r3, r30, 0x18
/* 80209A44 00206984  38 04 FA 88 */	addi r0, r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@l
/* 80209A48 00206988  38 80 00 00 */	li r4, 0
/* 80209A4C 0020698C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80209A50 00206990  48 20 7B 39 */	bl __dt__5CNodeFv
.L_80209A54:
/* 80209A54 00206994  7F C3 F3 78 */	mr r3, r30
/* 80209A58 00206998  38 80 00 00 */	li r4, 0
/* 80209A5C 0020699C  48 20 7B 2D */	bl __dt__5CNodeFv
/* 80209A60 002069A0  7F E0 07 35 */	extsh. r0, r31
/* 80209A64 002069A4  40 81 00 0C */	ble .L_80209A70
/* 80209A68 002069A8  7F C3 F3 78 */	mr r3, r30
/* 80209A6C 002069AC  4B E1 A6 49 */	bl __dl__FPv
.L_80209A70:
/* 80209A70 002069B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80209A74 002069B4  7F C3 F3 78 */	mr r3, r30
/* 80209A78 002069B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80209A7C 002069BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80209A80 002069C0  7C 08 03 A6 */	mtlr r0
/* 80209A84 002069C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80209A88 002069C8  4E 80 00 20 */	blr 
.endfn __dt__Q34Game12ItemUjamushi13BoidParameterFv

.fn "__dt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 80209A8C 002069CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80209A90 002069D0  7C 08 02 A6 */	mflr r0
/* 80209A94 002069D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80209A98 002069D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80209A9C 002069DC  7C 9F 23 78 */	mr r31, r4
/* 80209AA0 002069E0  93 C1 00 08 */	stw r30, 8(r1)
/* 80209AA4 002069E4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80209AA8 002069E8  41 82 00 E4 */	beq .L_80209B8C
/* 80209AAC 002069EC  3C 60 80 4C */	lis r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 80209AB0 002069F0  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 80209AB4 002069F4  38 63 F2 30 */	addi r3, r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@l
/* 80209AB8 002069F8  90 7E 00 00 */	stw r3, 0(r30)
/* 80209ABC 002069FC  38 03 00 74 */	addi r0, r3, 0x74
/* 80209AC0 00206A00  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80209AC4 00206A04  41 82 00 84 */	beq .L_80209B48
/* 80209AC8 00206A08  3C 80 80 4C */	lis r4, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 80209ACC 00206A0C  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 80209AD0 00206A10  38 84 F1 B0 */	addi r4, r4, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@l
/* 80209AD4 00206A14  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 80209AD8 00206A18  38 04 00 2C */	addi r0, r4, 0x2c
/* 80209ADC 00206A1C  90 1E 00 68 */	stw r0, 0x68(r30)
/* 80209AE0 00206A20  41 82 00 18 */	beq .L_80209AF8
/* 80209AE4 00206A24  3C 80 80 4C */	lis r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
/* 80209AE8 00206A28  38 04 F1 A0 */	addi r0, r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
/* 80209AEC 00206A2C  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 80209AF0 00206A30  38 80 00 00 */	li r4, 0
/* 80209AF4 00206A34  48 20 7A 95 */	bl __dt__5CNodeFv
.L_80209AF8:
/* 80209AF8 00206A38  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 80209AFC 00206A3C  41 82 00 4C */	beq .L_80209B48
/* 80209B00 00206A40  3C 60 80 4C */	lis r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 80209B04 00206A44  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 80209B08 00206A48  38 63 F1 24 */	addi r3, r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@l
/* 80209B0C 00206A4C  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 80209B10 00206A50  38 03 00 2C */	addi r0, r3, 0x2c
/* 80209B14 00206A54  90 1E 00 68 */	stw r0, 0x68(r30)
/* 80209B18 00206A58  41 82 00 30 */	beq .L_80209B48
/* 80209B1C 00206A5C  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
/* 80209B20 00206A60  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 80209B24 00206A64  38 03 F0 F8 */	addi r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
/* 80209B28 00206A68  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80209B2C 00206A6C  41 82 00 1C */	beq .L_80209B48
/* 80209B30 00206A70  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80209B34 00206A74  38 7E 00 4C */	addi r3, r30, 0x4c
/* 80209B38 00206A78  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80209B3C 00206A7C  38 80 00 00 */	li r4, 0
/* 80209B40 00206A80  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80209B44 00206A84  48 20 7A 45 */	bl __dt__5CNodeFv
.L_80209B48:
/* 80209B48 00206A88  34 1E 00 30 */	addic. r0, r30, 0x30
/* 80209B4C 00206A8C  41 82 00 30 */	beq .L_80209B7C
/* 80209B50 00206A90  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
/* 80209B54 00206A94  34 1E 00 30 */	addic. r0, r30, 0x30
/* 80209B58 00206A98  38 03 F0 F8 */	addi r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
/* 80209B5C 00206A9C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80209B60 00206AA0  41 82 00 1C */	beq .L_80209B7C
/* 80209B64 00206AA4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80209B68 00206AA8  38 7E 00 30 */	addi r3, r30, 0x30
/* 80209B6C 00206AAC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80209B70 00206AB0  38 80 00 00 */	li r4, 0
/* 80209B74 00206AB4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80209B78 00206AB8  48 20 7A 11 */	bl __dt__5CNodeFv
.L_80209B7C:
/* 80209B7C 00206ABC  7F E0 07 35 */	extsh. r0, r31
/* 80209B80 00206AC0  40 81 00 0C */	ble .L_80209B8C
/* 80209B84 00206AC4  7F C3 F3 78 */	mr r3, r30
/* 80209B88 00206AC8  4B E1 A5 2D */	bl __dl__FPv
.L_80209B8C:
/* 80209B8C 00206ACC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80209B90 00206AD0  7F C3 F3 78 */	mr r3, r30
/* 80209B94 00206AD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80209B98 00206AD8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80209B9C 00206ADC  7C 08 03 A6 */	mtlr r0
/* 80209BA0 00206AE0  38 21 00 10 */	addi r1, r1, 0x10
/* 80209BA4 00206AE4  4E 80 00 20 */	blr 
.endfn "__dt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn doSimpleDraw__Q34Game12ItemUjamushi3MgrFP8Viewport, global
/* 80209BA8 00206AE8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80209BAC 00206AEC  7C 08 02 A6 */	mflr r0
/* 80209BB0 00206AF0  28 03 00 00 */	cmplwi r3, 0
/* 80209BB4 00206AF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80209BB8 00206AF8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80209BBC 00206AFC  7C 9F 23 78 */	mr r31, r4
/* 80209BC0 00206B00  41 82 00 08 */	beq .L_80209BC8
/* 80209BC4 00206B04  38 63 00 30 */	addi r3, r3, 0x30
.L_80209BC8:
/* 80209BC8 00206B08  38 00 00 00 */	li r0, 0
/* 80209BCC 00206B0C  3C 80 80 4C */	lis r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
/* 80209BD0 00206B10  38 84 F0 E0 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
/* 80209BD4 00206B14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80209BD8 00206B18  28 00 00 00 */	cmplwi r0, 0
/* 80209BDC 00206B1C  90 81 00 08 */	stw r4, 8(r1)
/* 80209BE0 00206B20  90 01 00 0C */	stw r0, 0xc(r1)
/* 80209BE4 00206B24  90 61 00 10 */	stw r3, 0x10(r1)
/* 80209BE8 00206B28  40 82 00 1C */	bne .L_80209C04
/* 80209BEC 00206B2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80209BF0 00206B30  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80209BF4 00206B34  7D 89 03 A6 */	mtctr r12
/* 80209BF8 00206B38  4E 80 04 21 */	bctrl 
/* 80209BFC 00206B3C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80209C00 00206B40  48 00 01 74 */	b .L_80209D74
.L_80209C04:
/* 80209C04 00206B44  81 83 00 00 */	lwz r12, 0(r3)
/* 80209C08 00206B48  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80209C0C 00206B4C  7D 89 03 A6 */	mtctr r12
/* 80209C10 00206B50  4E 80 04 21 */	bctrl 
/* 80209C14 00206B54  90 61 00 0C */	stw r3, 0xc(r1)
/* 80209C18 00206B58  48 00 00 58 */	b .L_80209C70
.L_80209C1C:
/* 80209C1C 00206B5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80209C20 00206B60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80209C24 00206B64  81 83 00 00 */	lwz r12, 0(r3)
/* 80209C28 00206B68  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80209C2C 00206B6C  7D 89 03 A6 */	mtctr r12
/* 80209C30 00206B70  4E 80 04 21 */	bctrl 
/* 80209C34 00206B74  7C 64 1B 78 */	mr r4, r3
/* 80209C38 00206B78  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80209C3C 00206B7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80209C40 00206B80  81 8C 00 08 */	lwz r12, 8(r12)
/* 80209C44 00206B84  7D 89 03 A6 */	mtctr r12
/* 80209C48 00206B88  4E 80 04 21 */	bctrl 
/* 80209C4C 00206B8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80209C50 00206B90  40 82 01 24 */	bne .L_80209D74
/* 80209C54 00206B94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80209C58 00206B98  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80209C5C 00206B9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80209C60 00206BA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80209C64 00206BA4  7D 89 03 A6 */	mtctr r12
/* 80209C68 00206BA8  4E 80 04 21 */	bctrl 
/* 80209C6C 00206BAC  90 61 00 0C */	stw r3, 0xc(r1)
.L_80209C70:
/* 80209C70 00206BB0  81 81 00 08 */	lwz r12, 8(r1)
/* 80209C74 00206BB4  38 61 00 08 */	addi r3, r1, 8
/* 80209C78 00206BB8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80209C7C 00206BBC  7D 89 03 A6 */	mtctr r12
/* 80209C80 00206BC0  4E 80 04 21 */	bctrl 
/* 80209C84 00206BC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80209C88 00206BC8  41 82 FF 94 */	beq .L_80209C1C
/* 80209C8C 00206BCC  48 00 00 E8 */	b .L_80209D74
.L_80209C90:
/* 80209C90 00206BD0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80209C94 00206BD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80209C98 00206BD8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80209C9C 00206BDC  7D 89 03 A6 */	mtctr r12
/* 80209CA0 00206BE0  4E 80 04 21 */	bctrl 
/* 80209CA4 00206BE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80209CA8 00206BE8  7F E4 FB 78 */	mr r4, r31
/* 80209CAC 00206BEC  81 8C 02 24 */	lwz r12, 0x224(r12)
/* 80209CB0 00206BF0  7D 89 03 A6 */	mtctr r12
/* 80209CB4 00206BF4  4E 80 04 21 */	bctrl 
/* 80209CB8 00206BF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80209CBC 00206BFC  28 00 00 00 */	cmplwi r0, 0
/* 80209CC0 00206C00  40 82 00 24 */	bne .L_80209CE4
/* 80209CC4 00206C04  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80209CC8 00206C08  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80209CCC 00206C0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80209CD0 00206C10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80209CD4 00206C14  7D 89 03 A6 */	mtctr r12
/* 80209CD8 00206C18  4E 80 04 21 */	bctrl 
/* 80209CDC 00206C1C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80209CE0 00206C20  48 00 00 94 */	b .L_80209D74
.L_80209CE4:
/* 80209CE4 00206C24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80209CE8 00206C28  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80209CEC 00206C2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80209CF0 00206C30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80209CF4 00206C34  7D 89 03 A6 */	mtctr r12
/* 80209CF8 00206C38  4E 80 04 21 */	bctrl 
/* 80209CFC 00206C3C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80209D00 00206C40  48 00 00 58 */	b .L_80209D58
.L_80209D04:
/* 80209D04 00206C44  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80209D08 00206C48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80209D0C 00206C4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80209D10 00206C50  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80209D14 00206C54  7D 89 03 A6 */	mtctr r12
/* 80209D18 00206C58  4E 80 04 21 */	bctrl 
/* 80209D1C 00206C5C  7C 64 1B 78 */	mr r4, r3
/* 80209D20 00206C60  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80209D24 00206C64  81 83 00 00 */	lwz r12, 0(r3)
/* 80209D28 00206C68  81 8C 00 08 */	lwz r12, 8(r12)
/* 80209D2C 00206C6C  7D 89 03 A6 */	mtctr r12
/* 80209D30 00206C70  4E 80 04 21 */	bctrl 
/* 80209D34 00206C74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80209D38 00206C78  40 82 00 3C */	bne .L_80209D74
/* 80209D3C 00206C7C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80209D40 00206C80  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80209D44 00206C84  81 83 00 00 */	lwz r12, 0(r3)
/* 80209D48 00206C88  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80209D4C 00206C8C  7D 89 03 A6 */	mtctr r12
/* 80209D50 00206C90  4E 80 04 21 */	bctrl 
/* 80209D54 00206C94  90 61 00 0C */	stw r3, 0xc(r1)
.L_80209D58:
/* 80209D58 00206C98  81 81 00 08 */	lwz r12, 8(r1)
/* 80209D5C 00206C9C  38 61 00 08 */	addi r3, r1, 8
/* 80209D60 00206CA0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80209D64 00206CA4  7D 89 03 A6 */	mtctr r12
/* 80209D68 00206CA8  4E 80 04 21 */	bctrl 
/* 80209D6C 00206CAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80209D70 00206CB0  41 82 FF 94 */	beq .L_80209D04
.L_80209D74:
/* 80209D74 00206CB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80209D78 00206CB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80209D7C 00206CBC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80209D80 00206CC0  7D 89 03 A6 */	mtctr r12
/* 80209D84 00206CC4  4E 80 04 21 */	bctrl 
/* 80209D88 00206CC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80209D8C 00206CCC  7C 04 18 40 */	cmplw r4, r3
/* 80209D90 00206CD0  40 82 FF 00 */	bne .L_80209C90
/* 80209D94 00206CD4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80209D98 00206CD8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80209D9C 00206CDC  7C 08 03 A6 */	mtlr r0
/* 80209DA0 00206CE0  38 21 00 20 */	addi r1, r1, 0x20
/* 80209DA4 00206CE4  4E 80 00 20 */	blr 
.endfn doSimpleDraw__Q34Game12ItemUjamushi3MgrFP8Viewport

.fn "isDone__36Iterator<Q34Game12ItemUjamushi4Item>Fv", weak
/* 80209DA8 00206CE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80209DAC 00206CEC  7C 08 02 A6 */	mflr r0
/* 80209DB0 00206CF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80209DB4 00206CF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80209DB8 00206CF8  7C 7F 1B 78 */	mr r31, r3
/* 80209DBC 00206CFC  80 63 00 08 */	lwz r3, 8(r3)
/* 80209DC0 00206D00  81 83 00 00 */	lwz r12, 0(r3)
/* 80209DC4 00206D04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80209DC8 00206D08  7D 89 03 A6 */	mtctr r12
/* 80209DCC 00206D0C  4E 80 04 21 */	bctrl 
/* 80209DD0 00206D10  80 1F 00 04 */	lwz r0, 4(r31)
/* 80209DD4 00206D14  7C 00 18 50 */	subf r0, r0, r3
/* 80209DD8 00206D18  7C 00 00 34 */	cntlzw r0, r0
/* 80209DDC 00206D1C  54 03 D9 7E */	srwi r3, r0, 5
/* 80209DE0 00206D20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80209DE4 00206D24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80209DE8 00206D28  7C 08 03 A6 */	mtlr r0
/* 80209DEC 00206D2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80209DF0 00206D30  4E 80 00 20 */	blr 
.endfn "isDone__36Iterator<Q34Game12ItemUjamushi4Item>Fv"

.fn onLoadResources__Q34Game12ItemUjamushi3MgrFv, global
/* 80209DF4 00206D34  4E 80 00 20 */	blr 
.endfn onLoadResources__Q34Game12ItemUjamushi3MgrFv

.fn getCaveName__Q34Game12ItemUjamushi3MgrFi, global
/* 80209DF8 00206D38  3C 60 80 48 */	lis r3, lbl_80481EB0@ha
/* 80209DFC 00206D3C  38 63 1E B0 */	addi r3, r3, lbl_80481EB0@l
/* 80209E00 00206D40  4E 80 00 20 */	blr 
.endfn getCaveName__Q34Game12ItemUjamushi3MgrFi

.fn getCaveID__Q34Game12ItemUjamushi3MgrFPc, global
/* 80209E04 00206D44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80209E08 00206D48  7C 08 02 A6 */	mflr r0
/* 80209E0C 00206D4C  3C 60 80 48 */	lis r3, lbl_80481EB0@ha
/* 80209E10 00206D50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80209E14 00206D54  38 63 1E B0 */	addi r3, r3, lbl_80481EB0@l
/* 80209E18 00206D58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80209E1C 00206D5C  7C 9F 23 78 */	mr r31, r4
/* 80209E20 00206D60  4B EC 0A F1 */	bl strlen
/* 80209E24 00206D64  3C 80 80 48 */	lis r4, lbl_80481EB0@ha
/* 80209E28 00206D68  7C 65 1B 78 */	mr r5, r3
/* 80209E2C 00206D6C  38 64 1E B0 */	addi r3, r4, lbl_80481EB0@l
/* 80209E30 00206D70  7F E4 FB 78 */	mr r4, r31
/* 80209E34 00206D74  4B EC 08 4D */	bl strncmp
/* 80209E38 00206D78  7C 03 00 D0 */	neg r0, r3
/* 80209E3C 00206D7C  7C 00 1B 78 */	or r0, r0, r3
/* 80209E40 00206D80  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 80209E44 00206D84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80209E48 00206D88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80209E4C 00206D8C  7C 08 03 A6 */	mtlr r0
/* 80209E50 00206D90  38 21 00 10 */	addi r1, r1, 0x10
/* 80209E54 00206D94  4E 80 00 20 */	blr 
.endfn getCaveID__Q34Game12ItemUjamushi3MgrFPc

.fn init__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg, global
/* 80209E58 00206D98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80209E5C 00206D9C  7C 08 02 A6 */	mflr r0
/* 80209E60 00206DA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80209E64 00206DA4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80209E68 00206DA8  3B E0 00 03 */	li r31, 3
/* 80209E6C 00206DAC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80209E70 00206DB0  3B C0 00 00 */	li r30, 0
/* 80209E74 00206DB4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80209E78 00206DB8  93 81 00 10 */	stw r28, 0x10(r1)
/* 80209E7C 00206DBC  7C 7C 1B 78 */	mr r28, r3
/* 80209E80 00206DC0  83 A4 02 00 */	lwz r29, 0x200(r4)
/* 80209E84 00206DC4  48 00 00 24 */	b .L_80209EA8
.L_80209E88:
/* 80209E88 00206DC8  7F A3 EB 78 */	mr r3, r29
/* 80209E8C 00206DCC  7F C4 F3 78 */	mr r4, r30
/* 80209E90 00206DD0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80209E94 00206DD4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80209E98 00206DD8  7D 89 03 A6 */	mtctr r12
/* 80209E9C 00206DDC  4E 80 04 21 */	bctrl 
/* 80209EA0 00206DE0  9B E3 00 AC */	stb r31, 0xac(r3)
/* 80209EA4 00206DE4  3B DE 00 01 */	addi r30, r30, 1
.L_80209EA8:
/* 80209EA8 00206DE8  7F A3 EB 78 */	mr r3, r29
/* 80209EAC 00206DEC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80209EB0 00206DF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80209EB4 00206DF4  7D 89 03 A6 */	mtctr r12
/* 80209EB8 00206DF8  4E 80 04 21 */	bctrl 
/* 80209EBC 00206DFC  7C 1E 18 00 */	cmpw r30, r3
/* 80209EC0 00206E00  41 80 FF C8 */	blt .L_80209E88
/* 80209EC4 00206E04  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 80209EC8 00206E08  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 80209ECC 00206E0C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80209ED0 00206E10  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80209ED4 00206E14  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80209ED8 00206E18  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80209EDC 00206E1C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80209EE0 00206E20  7C 08 03 A6 */	mtlr r0
/* 80209EE4 00206E24  38 21 00 20 */	addi r1, r1, 0x20
/* 80209EE8 00206E28  4E 80 00 20 */	blr 
.endfn init__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg

.fn exec__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4Item, global
/* 80209EEC 00206E2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80209EF0 00206E30  7C 08 02 A6 */	mflr r0
/* 80209EF4 00206E34  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 80209EF8 00206E38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80209EFC 00206E3C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 80209F00 00206E40  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 80209F04 00206E44  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 80209F08 00206E48  EC 22 08 28 */	fsubs f1, f2, f1
/* 80209F0C 00206E4C  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 80209F10 00206E50  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 80209F14 00206E54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80209F18 00206E58  40 80 00 1C */	bge .L_80209F34
/* 80209F1C 00206E5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80209F20 00206E60  38 A0 00 01 */	li r5, 1
/* 80209F24 00206E64  38 C0 00 00 */	li r6, 0
/* 80209F28 00206E68  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80209F2C 00206E6C  7D 89 03 A6 */	mtctr r12
/* 80209F30 00206E70  4E 80 04 21 */	bctrl 
.L_80209F34:
/* 80209F34 00206E74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80209F38 00206E78  7C 08 03 A6 */	mtlr r0
/* 80209F3C 00206E7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80209F40 00206E80  4E 80 00 20 */	blr 
.endfn exec__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4Item

.fn "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg", weak
/* 80209F44 00206E84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80209F48 00206E88  7C 08 02 A6 */	mflr r0
/* 80209F4C 00206E8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80209F50 00206E90  80 63 00 08 */	lwz r3, 8(r3)
/* 80209F54 00206E94  81 83 00 00 */	lwz r12, 0(r3)
/* 80209F58 00206E98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80209F5C 00206E9C  7D 89 03 A6 */	mtctr r12
/* 80209F60 00206EA0  4E 80 04 21 */	bctrl 
/* 80209F64 00206EA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80209F68 00206EA8  7C 08 03 A6 */	mtlr r0
/* 80209F6C 00206EAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80209F70 00206EB0  4E 80 00 20 */	blr 
.endfn "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"

.fn cleanup__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4Item, global
/* 80209F74 00206EB4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4Item

.fn init__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg, global
/* 80209F78 00206EB8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80209F7C 00206EBC  7C 08 02 A6 */	mflr r0
/* 80209F80 00206EC0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80209F84 00206EC4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80209F88 00206EC8  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80209F8C 00206ECC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80209F90 00206ED0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80209F94 00206ED4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80209F98 00206ED8  93 81 00 10 */	stw r28, 0x10(r1)
/* 80209F9C 00206EDC  3B C0 00 00 */	li r30, 0
/* 80209FA0 00206EE0  83 A4 02 00 */	lwz r29, 0x200(r4)
/* 80209FA4 00206EE4  C3 E2 BA 34 */	lfs f31, lbl_80519D94@sda21(r2)
/* 80209FA8 00206EE8  7C 7C 1B 78 */	mr r28, r3
/* 80209FAC 00206EEC  7F DF F3 78 */	mr r31, r30
/* 80209FB0 00206EF0  48 00 00 40 */	b .L_80209FF0
.L_80209FB4:
/* 80209FB4 00206EF4  7F A3 EB 78 */	mr r3, r29
/* 80209FB8 00206EF8  7F C4 F3 78 */	mr r4, r30
/* 80209FBC 00206EFC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80209FC0 00206F00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80209FC4 00206F04  7D 89 03 A6 */	mtctr r12
/* 80209FC8 00206F08  4E 80 04 21 */	bctrl 
/* 80209FCC 00206F0C  88 03 00 AC */	lbz r0, 0xac(r3)
/* 80209FD0 00206F10  28 00 00 06 */	cmplwi r0, 6
/* 80209FD4 00206F14  41 82 00 0C */	beq .L_80209FE0
/* 80209FD8 00206F18  28 00 00 03 */	cmplwi r0, 3
/* 80209FDC 00206F1C  40 82 00 10 */	bne .L_80209FEC
.L_80209FE0:
/* 80209FE0 00206F20  9B E3 00 AC */	stb r31, 0xac(r3)
/* 80209FE4 00206F24  D3 E3 00 B4 */	stfs f31, 0xb4(r3)
/* 80209FE8 00206F28  D3 E3 00 B8 */	stfs f31, 0xb8(r3)
.L_80209FEC:
/* 80209FEC 00206F2C  3B DE 00 01 */	addi r30, r30, 1
.L_80209FF0:
/* 80209FF0 00206F30  7F A3 EB 78 */	mr r3, r29
/* 80209FF4 00206F34  81 9D 00 00 */	lwz r12, 0(r29)
/* 80209FF8 00206F38  81 8C 00 08 */	lwz r12, 8(r12)
/* 80209FFC 00206F3C  7D 89 03 A6 */	mtctr r12
/* 8020A000 00206F40  4E 80 04 21 */	bctrl 
/* 8020A004 00206F44  7C 1E 18 00 */	cmpw r30, r3
/* 8020A008 00206F48  41 80 FF AC */	blt .L_80209FB4
/* 8020A00C 00206F4C  C0 02 BA D8 */	lfs f0, lbl_80519E38@sda21(r2)
/* 8020A010 00206F50  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8020A014 00206F54  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8020A018 00206F58  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8020A01C 00206F5C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8020A020 00206F60  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020A024 00206F64  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020A028 00206F68  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020A02C 00206F6C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8020A030 00206F70  7C 08 03 A6 */	mtlr r0
/* 8020A034 00206F74  38 21 00 30 */	addi r1, r1, 0x30
/* 8020A038 00206F78  4E 80 00 20 */	blr 
.endfn init__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg

.fn exec__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4Item, global
/* 8020A03C 00206F7C  4E 80 00 20 */	blr 
.endfn exec__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4Item

.fn cleanup__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4Item, global
/* 8020A040 00206F80  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4Item

.fn init__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg, global
/* 8020A044 00206F84  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020A048 00206F88  7C 08 02 A6 */	mflr r0
/* 8020A04C 00206F8C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020A050 00206F90  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020A054 00206F94  3B E0 00 04 */	li r31, 4
/* 8020A058 00206F98  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020A05C 00206F9C  3B C0 00 00 */	li r30, 0
/* 8020A060 00206FA0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020A064 00206FA4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8020A068 00206FA8  7C 7C 1B 78 */	mr r28, r3
/* 8020A06C 00206FAC  83 A4 02 00 */	lwz r29, 0x200(r4)
/* 8020A070 00206FB0  48 00 00 24 */	b .L_8020A094
.L_8020A074:
/* 8020A074 00206FB4  7F A3 EB 78 */	mr r3, r29
/* 8020A078 00206FB8  7F C4 F3 78 */	mr r4, r30
/* 8020A07C 00206FBC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8020A080 00206FC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020A084 00206FC4  7D 89 03 A6 */	mtctr r12
/* 8020A088 00206FC8  4E 80 04 21 */	bctrl 
/* 8020A08C 00206FCC  9B E3 00 AC */	stb r31, 0xac(r3)
/* 8020A090 00206FD0  3B DE 00 01 */	addi r30, r30, 1
.L_8020A094:
/* 8020A094 00206FD4  7F A3 EB 78 */	mr r3, r29
/* 8020A098 00206FD8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8020A09C 00206FDC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020A0A0 00206FE0  7D 89 03 A6 */	mtctr r12
/* 8020A0A4 00206FE4  4E 80 04 21 */	bctrl 
/* 8020A0A8 00206FE8  7C 1E 18 00 */	cmpw r30, r3
/* 8020A0AC 00206FEC  41 80 FF C8 */	blt .L_8020A074
/* 8020A0B0 00206FF0  C0 02 BA 38 */	lfs f0, lbl_80519D98@sda21(r2)
/* 8020A0B4 00206FF4  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8020A0B8 00206FF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020A0BC 00206FFC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020A0C0 00207000  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020A0C4 00207004  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020A0C8 00207008  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8020A0CC 0020700C  7C 08 03 A6 */	mtlr r0
/* 8020A0D0 00207010  38 21 00 20 */	addi r1, r1, 0x20
/* 8020A0D4 00207014  4E 80 00 20 */	blr 
.endfn init__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg

.fn exec__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4Item, global
/* 8020A0D8 00207018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A0DC 0020701C  7C 08 02 A6 */	mflr r0
/* 8020A0E0 00207020  C0 02 BA 34 */	lfs f0, lbl_80519D94@sda21(r2)
/* 8020A0E4 00207024  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A0E8 00207028  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8020A0EC 0020702C  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 8020A0F0 00207030  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 8020A0F4 00207034  EC 22 08 28 */	fsubs f1, f2, f1
/* 8020A0F8 00207038  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 8020A0FC 0020703C  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 8020A100 00207040  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8020A104 00207044  40 80 00 1C */	bge .L_8020A120
/* 8020A108 00207048  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A10C 0020704C  38 A0 00 00 */	li r5, 0
/* 8020A110 00207050  38 C0 00 00 */	li r6, 0
/* 8020A114 00207054  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020A118 00207058  7D 89 03 A6 */	mtctr r12
/* 8020A11C 0020705C  4E 80 04 21 */	bctrl 
.L_8020A120:
/* 8020A120 00207060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A124 00207064  7C 08 03 A6 */	mtlr r0
/* 8020A128 00207068  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A12C 0020706C  4E 80 00 20 */	blr 
.endfn exec__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4Item

.fn cleanup__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4Item, global
/* 8020A130 00207070  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4Item

.fn generatorNewItemParm__Q34Game12ItemUjamushi3MgrFv, global
/* 8020A134 00207074  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A138 00207078  7C 08 02 A6 */	mflr r0
/* 8020A13C 0020707C  38 60 00 08 */	li r3, 8
/* 8020A140 00207080  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A144 00207084  4B E1 9D 61 */	bl __nw__FUl
/* 8020A148 00207088  28 03 00 00 */	cmplwi r3, 0
/* 8020A14C 0020708C  41 82 00 24 */	beq .L_8020A170
/* 8020A150 00207090  3C A0 80 4B */	lis r5, __vt__Q24Game11GenItemParm@ha
/* 8020A154 00207094  3C 80 80 4C */	lis r4, __vt__15GenUjamushiParm@ha
/* 8020A158 00207098  38 A5 26 24 */	addi r5, r5, __vt__Q24Game11GenItemParm@l
/* 8020A15C 0020709C  38 00 00 64 */	li r0, 0x64
/* 8020A160 002070A0  90 A3 00 00 */	stw r5, 0(r3)
/* 8020A164 002070A4  38 84 EF 78 */	addi r4, r4, __vt__15GenUjamushiParm@l
/* 8020A168 002070A8  90 83 00 00 */	stw r4, 0(r3)
/* 8020A16C 002070AC  90 03 00 04 */	stw r0, 4(r3)
.L_8020A170:
/* 8020A170 002070B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A174 002070B4  7C 08 03 A6 */	mtlr r0
/* 8020A178 002070B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A17C 002070BC  4E 80 00 20 */	blr 
.endfn generatorNewItemParm__Q34Game12ItemUjamushi3MgrFv

.fn generatorWrite__Q34Game12ItemUjamushi3MgrFR6StreamPQ24Game11GenItemParm, global
/* 8020A180 002070C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020A184 002070C4  7C 08 02 A6 */	mflr r0
/* 8020A188 002070C8  3C 60 80 48 */	lis r3, lbl_80481D40@ha
/* 8020A18C 002070CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020A190 002070D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020A194 002070D4  3B E3 1D 40 */	addi r31, r3, lbl_80481D40@l
/* 8020A198 002070D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020A19C 002070DC  7C BE 2B 79 */	or. r30, r5, r5
/* 8020A1A0 002070E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020A1A4 002070E4  7C 9D 23 78 */	mr r29, r4
/* 8020A1A8 002070E8  40 82 00 18 */	bne .L_8020A1C0
/* 8020A1AC 002070EC  38 7F 00 88 */	addi r3, r31, 0x88
/* 8020A1B0 002070F0  38 BF 00 9C */	addi r5, r31, 0x9c
/* 8020A1B4 002070F4  38 80 05 EA */	li r4, 0x5ea
/* 8020A1B8 002070F8  4C C6 31 82 */	crclr 6
/* 8020A1BC 002070FC  4B E2 04 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8020A1C0:
/* 8020A1C0 00207100  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 8020A1C4 00207104  7F A3 EB 78 */	mr r3, r29
/* 8020A1C8 00207108  48 20 A2 6D */	bl textWriteTab__6StreamFi
/* 8020A1CC 0020710C  80 1E 00 04 */	lwz r0, 4(r30)
/* 8020A1D0 00207110  7F A3 EB 78 */	mr r3, r29
/* 8020A1D4 00207114  7C 04 07 34 */	extsh r4, r0
/* 8020A1D8 00207118  48 20 B5 59 */	bl writeShort__6StreamFs
/* 8020A1DC 0020711C  7F A3 EB 78 */	mr r3, r29
/* 8020A1E0 00207120  38 9F 01 7C */	addi r4, r31, 0x17c
/* 8020A1E4 00207124  4C C6 31 82 */	crclr 6
/* 8020A1E8 00207128  48 20 9F F5 */	bl textWriteText__6StreamFPce
/* 8020A1EC 0020712C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020A1F0 00207130  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020A1F4 00207134  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020A1F8 00207138  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020A1FC 0020713C  7C 08 03 A6 */	mtlr r0
/* 8020A200 00207140  38 21 00 20 */	addi r1, r1, 0x20
/* 8020A204 00207144  4E 80 00 20 */	blr 
.endfn generatorWrite__Q34Game12ItemUjamushi3MgrFR6StreamPQ24Game11GenItemParm

.fn generatorRead__Q34Game12ItemUjamushi3MgrFR6StreamPQ24Game11GenItemParmUl, global
/* 8020A208 00207148  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A20C 0020714C  7C 08 02 A6 */	mflr r0
/* 8020A210 00207150  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A214 00207154  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020A218 00207158  7C BF 2B 79 */	or. r31, r5, r5
/* 8020A21C 0020715C  93 C1 00 08 */	stw r30, 8(r1)
/* 8020A220 00207160  7C 9E 23 78 */	mr r30, r4
/* 8020A224 00207164  40 82 00 20 */	bne .L_8020A244
/* 8020A228 00207168  3C 60 80 48 */	lis r3, lbl_80481DC8@ha
/* 8020A22C 0020716C  3C A0 80 48 */	lis r5, lbl_80481DDC@ha
/* 8020A230 00207170  38 63 1D C8 */	addi r3, r3, lbl_80481DC8@l
/* 8020A234 00207174  38 80 05 F4 */	li r4, 0x5f4
/* 8020A238 00207178  38 A5 1D DC */	addi r5, r5, lbl_80481DDC@l
/* 8020A23C 0020717C  4C C6 31 82 */	crclr 6
/* 8020A240 00207180  4B E2 04 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8020A244:
/* 8020A244 00207184  7F C3 F3 78 */	mr r3, r30
/* 8020A248 00207188  48 20 A5 1D */	bl readShort__6StreamFv
/* 8020A24C 0020718C  7C 60 07 34 */	extsh r0, r3
/* 8020A250 00207190  90 1F 00 04 */	stw r0, 4(r31)
/* 8020A254 00207194  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A258 00207198  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020A25C 0020719C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020A260 002071A0  7C 08 03 A6 */	mtlr r0
/* 8020A264 002071A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A268 002071A8  4E 80 00 20 */	blr 
.endfn generatorRead__Q34Game12ItemUjamushi3MgrFR6StreamPQ24Game11GenItemParmUl

.fn "generatorBirth__Q34Game12ItemUjamushi3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm", global
/* 8020A26C 002071AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020A270 002071B0  7C 08 02 A6 */	mflr r0
/* 8020A274 002071B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020A278 002071B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020A27C 002071BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020A280 002071C0  7C DE 33 79 */	or. r30, r6, r6
/* 8020A284 002071C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020A288 002071C8  7C 9D 23 78 */	mr r29, r4
/* 8020A28C 002071CC  93 81 00 10 */	stw r28, 0x10(r1)
/* 8020A290 002071D0  7C 7C 1B 78 */	mr r28, r3
/* 8020A294 002071D4  40 82 00 20 */	bne .L_8020A2B4
/* 8020A298 002071D8  3C 60 80 48 */	lis r3, lbl_80481DC8@ha
/* 8020A29C 002071DC  3C A0 80 48 */	lis r5, lbl_80481DDC@ha
/* 8020A2A0 002071E0  38 63 1D C8 */	addi r3, r3, lbl_80481DC8@l
/* 8020A2A4 002071E4  38 80 05 FB */	li r4, 0x5fb
/* 8020A2A8 002071E8  38 A5 1D DC */	addi r5, r5, lbl_80481DDC@l
/* 8020A2AC 002071EC  4C C6 31 82 */	crclr 6
/* 8020A2B0 002071F0  4B E2 03 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8020A2B4:
/* 8020A2B4 002071F4  38 60 02 04 */	li r3, 0x204
/* 8020A2B8 002071F8  4B E1 9B ED */	bl __nw__FUl
/* 8020A2BC 002071FC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8020A2C0 00207200  41 82 01 0C */	beq .L_8020A3CC
/* 8020A2C4 00207204  38 80 04 11 */	li r4, 0x411
/* 8020A2C8 00207208  4B FC 1D 21 */	bl __ct__Q24Game8BaseItemFi
/* 8020A2CC 0020720C  3C 60 80 4C */	lis r3, "__vt__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>"@ha
/* 8020A2D0 00207210  38 00 00 00 */	li r0, 0
/* 8020A2D4 00207214  38 83 F5 50 */	addi r4, r3, "__vt__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>"@l
/* 8020A2D8 00207218  38 60 00 1C */	li r3, 0x1c
/* 8020A2DC 0020721C  90 9F 00 00 */	stw r4, 0(r31)
/* 8020A2E0 00207220  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 8020A2E4 00207224  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8020A2E8 00207228  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 8020A2EC 0020722C  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 8020A2F0 00207230  4B E1 9B B5 */	bl __nw__FUl
/* 8020A2F4 00207234  28 03 00 00 */	cmplwi r3, 0
/* 8020A2F8 00207238  41 82 00 30 */	beq .L_8020A328
/* 8020A2FC 0020723C  3C 80 80 4C */	lis r4, "__vt__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A300 00207240  3C A0 80 4C */	lis r5, "__vt__Q24Game35ItemFSM<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A304 00207244  38 04 F5 38 */	addi r0, r4, "__vt__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>"@l
/* 8020A308 00207248  3C 80 80 4C */	lis r4, __vt__Q34Game12ItemUjamushi3FSM@ha
/* 8020A30C 0020724C  90 03 00 00 */	stw r0, 0(r3)
/* 8020A310 00207250  38 C0 FF FF */	li r6, -1
/* 8020A314 00207254  38 A5 F5 20 */	addi r5, r5, "__vt__Q24Game35ItemFSM<Q34Game12ItemUjamushi4Item>"@l
/* 8020A318 00207258  38 04 F7 FC */	addi r0, r4, __vt__Q34Game12ItemUjamushi3FSM@l
/* 8020A31C 0020725C  90 C3 00 18 */	stw r6, 0x18(r3)
/* 8020A320 00207260  90 A3 00 00 */	stw r5, 0(r3)
/* 8020A324 00207264  90 03 00 00 */	stw r0, 0(r3)
.L_8020A328:
/* 8020A328 00207268  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 8020A32C 0020726C  7F E4 FB 78 */	mr r4, r31
/* 8020A330 00207270  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 8020A334 00207274  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A338 00207278  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020A33C 0020727C  7D 89 03 A6 */	mtctr r12
/* 8020A340 00207280  4E 80 04 21 */	bctrl 
/* 8020A344 00207284  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemUjamushi4Item@ha
/* 8020A348 00207288  3C 80 80 4C */	lis r4, __vt__Q28SysShape9MtxObject@ha
/* 8020A34C 0020728C  38 A3 F2 E8 */	addi r5, r3, __vt__Q34Game12ItemUjamushi4Item@l
/* 8020A350 00207290  3C 60 80 4C */	lis r3, __vt__Q44Game12ItemUjamushi4Item10DummyShape@ha
/* 8020A354 00207294  90 BF 00 00 */	stw r5, 0(r31)
/* 8020A358 00207298  38 A5 01 B0 */	addi r5, r5, 0x1b0
/* 8020A35C 0020729C  38 84 BF 24 */	addi r4, r4, __vt__Q28SysShape9MtxObject@l
/* 8020A360 002072A0  38 03 F5 10 */	addi r0, r3, __vt__Q44Game12ItemUjamushi4Item10DummyShape@l
/* 8020A364 002072A4  90 BF 01 78 */	stw r5, 0x178(r31)
/* 8020A368 002072A8  38 60 00 08 */	li r3, 8
/* 8020A36C 002072AC  90 9F 01 F8 */	stw r4, 0x1f8(r31)
/* 8020A370 002072B0  90 1F 01 F8 */	stw r0, 0x1f8(r31)
/* 8020A374 002072B4  4B E1 9B 31 */	bl __nw__FUl
/* 8020A378 002072B8  7C 60 1B 79 */	or. r0, r3, r3
/* 8020A37C 002072BC  41 82 00 0C */	beq .L_8020A388
/* 8020A380 002072C0  4B F2 9C DD */	bl __ct__8CollTreeFv
/* 8020A384 002072C4  7C 60 1B 78 */	mr r0, r3
.L_8020A388:
/* 8020A388 002072C8  90 1F 01 14 */	stw r0, 0x114(r31)
/* 8020A38C 002072CC  38 1F 01 38 */	addi r0, r31, 0x138
/* 8020A390 002072D0  C0 02 BB 3C */	lfs f0, lbl_80519E9C@sda21(r2)
/* 8020A394 002072D4  38 9F 01 F8 */	addi r4, r31, 0x1f8
/* 8020A398 002072D8  38 DF 01 C4 */	addi r6, r31, 0x1c4
/* 8020A39C 002072DC  38 A0 00 00 */	li r5, 0
/* 8020A3A0 002072E0  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 8020A3A4 002072E4  38 E0 00 00 */	li r7, 0
/* 8020A3A8 002072E8  90 1F 01 FC */	stw r0, 0x1fc(r31)
/* 8020A3AC 002072EC  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8020A3B0 002072F0  4B F2 9D 01 */	bl createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
/* 8020A3B4 002072F4  7F E3 FB 78 */	mr r3, r31
/* 8020A3B8 002072F8  38 80 00 00 */	li r4, 0
/* 8020A3BC 002072FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8020A3C0 00207300  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8020A3C4 00207304  7D 89 03 A6 */	mtctr r12
/* 8020A3C8 00207308  4E 80 04 21 */	bctrl 
.L_8020A3CC:
/* 8020A3CC 0020730C  7F 83 E3 78 */	mr r3, r28
/* 8020A3D0 00207310  7F E4 FB 78 */	mr r4, r31
/* 8020A3D4 00207314  48 00 30 91 */	bl "entry__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
/* 8020A3D8 00207318  80 BE 00 04 */	lwz r5, 4(r30)
/* 8020A3DC 0020731C  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 8020A3E0 00207320  38 03 A2 F4 */	addi r0, r3, __vt__Q24Game15CreatureInitArg@l
/* 8020A3E4 00207324  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemUjamushi7InitArg@ha
/* 8020A3E8 00207328  90 01 00 08 */	stw r0, 8(r1)
/* 8020A3EC 0020732C  38 03 EF 6C */	addi r0, r3, __vt__Q34Game12ItemUjamushi7InitArg@l
/* 8020A3F0 00207330  7F E3 FB 78 */	mr r3, r31
/* 8020A3F4 00207334  38 81 00 08 */	addi r4, r1, 8
/* 8020A3F8 00207338  90 01 00 08 */	stw r0, 8(r1)
/* 8020A3FC 0020733C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8020A400 00207340  4B F3 0B C9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8020A404 00207344  7F E3 FB 78 */	mr r3, r31
/* 8020A408 00207348  7F A4 EB 78 */	mr r4, r29
/* 8020A40C 0020734C  38 A0 00 00 */	li r5, 0
/* 8020A410 00207350  4B F3 0D 99 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8020A414 00207354  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020A418 00207358  7F E3 FB 78 */	mr r3, r31
/* 8020A41C 0020735C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020A420 00207360  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020A424 00207364  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020A428 00207368  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8020A42C 0020736C  7C 08 03 A6 */	mtlr r0
/* 8020A430 00207370  38 21 00 20 */	addi r1, r1, 0x20
/* 8020A434 00207374  4E 80 00 20 */	blr 
.endfn "generatorBirth__Q34Game12ItemUjamushi3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"

.fn getName__Q34Game12ItemUjamushi7InitArgFv, weak
/* 8020A438 00207378  3C 60 80 48 */	lis r3, lbl_80481ECC@ha
/* 8020A43C 0020737C  38 63 1E CC */	addi r3, r3, lbl_80481ECC@l
/* 8020A440 00207380  4E 80 00 20 */	blr 
.endfn getName__Q34Game12ItemUjamushi7InitArgFv

.fn __dt__Q34Game12ItemUjamushi3MgrFv, weak
/* 8020A444 00207384  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A448 00207388  7C 08 02 A6 */	mflr r0
/* 8020A44C 0020738C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A450 00207390  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020A454 00207394  7C 9F 23 78 */	mr r31, r4
/* 8020A458 00207398  93 C1 00 08 */	stw r30, 8(r1)
/* 8020A45C 0020739C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020A460 002073A0  41 82 01 3C */	beq .L_8020A59C
/* 8020A464 002073A4  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemUjamushi3Mgr@ha
/* 8020A468 002073A8  34 1E 03 10 */	addic. r0, r30, 0x310
/* 8020A46C 002073AC  38 63 F0 20 */	addi r3, r3, __vt__Q34Game12ItemUjamushi3Mgr@l
/* 8020A470 002073B0  90 7E 00 00 */	stw r3, 0(r30)
/* 8020A474 002073B4  38 03 00 74 */	addi r0, r3, 0x74
/* 8020A478 002073B8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8020A47C 002073BC  41 82 00 38 */	beq .L_8020A4B4
/* 8020A480 002073C0  3C 80 80 4C */	lis r4, __vt__Q34Game12ItemUjamushi13BoidParameter@ha
/* 8020A484 002073C4  34 7E 03 28 */	addic. r3, r30, 0x328
/* 8020A488 002073C8  38 04 FA 98 */	addi r0, r4, __vt__Q34Game12ItemUjamushi13BoidParameter@l
/* 8020A48C 002073CC  90 1E 03 10 */	stw r0, 0x310(r30)
/* 8020A490 002073D0  41 82 00 18 */	beq .L_8020A4A8
/* 8020A494 002073D4  3C 80 80 4C */	lis r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@ha
/* 8020A498 002073D8  38 04 FA 88 */	addi r0, r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@l
/* 8020A49C 002073DC  90 1E 03 28 */	stw r0, 0x328(r30)
/* 8020A4A0 002073E0  38 80 00 00 */	li r4, 0
/* 8020A4A4 002073E4  48 20 70 E5 */	bl __dt__5CNodeFv
.L_8020A4A8:
/* 8020A4A8 002073E8  38 7E 03 10 */	addi r3, r30, 0x310
/* 8020A4AC 002073EC  38 80 00 00 */	li r4, 0
/* 8020A4B0 002073F0  48 20 70 D9 */	bl __dt__5CNodeFv
.L_8020A4B4:
/* 8020A4B4 002073F4  28 1E 00 00 */	cmplwi r30, 0
/* 8020A4B8 002073F8  41 82 00 D4 */	beq .L_8020A58C
/* 8020A4BC 002073FC  3C 60 80 4C */	lis r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A4C0 00207400  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 8020A4C4 00207404  38 63 F2 30 */	addi r3, r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@l
/* 8020A4C8 00207408  90 7E 00 00 */	stw r3, 0(r30)
/* 8020A4CC 0020740C  38 03 00 74 */	addi r0, r3, 0x74
/* 8020A4D0 00207410  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8020A4D4 00207414  41 82 00 84 */	beq .L_8020A558
/* 8020A4D8 00207418  3C 80 80 4C */	lis r4, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A4DC 0020741C  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 8020A4E0 00207420  38 84 F1 B0 */	addi r4, r4, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@l
/* 8020A4E4 00207424  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 8020A4E8 00207428  38 04 00 2C */	addi r0, r4, 0x2c
/* 8020A4EC 0020742C  90 1E 00 68 */	stw r0, 0x68(r30)
/* 8020A4F0 00207430  41 82 00 18 */	beq .L_8020A508
/* 8020A4F4 00207434  3C 80 80 4C */	lis r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A4F8 00207438  38 04 F1 A0 */	addi r0, r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
/* 8020A4FC 0020743C  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 8020A500 00207440  38 80 00 00 */	li r4, 0
/* 8020A504 00207444  48 20 70 85 */	bl __dt__5CNodeFv
.L_8020A508:
/* 8020A508 00207448  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 8020A50C 0020744C  41 82 00 4C */	beq .L_8020A558
/* 8020A510 00207450  3C 60 80 4C */	lis r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A514 00207454  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 8020A518 00207458  38 63 F1 24 */	addi r3, r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@l
/* 8020A51C 0020745C  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 8020A520 00207460  38 03 00 2C */	addi r0, r3, 0x2c
/* 8020A524 00207464  90 1E 00 68 */	stw r0, 0x68(r30)
/* 8020A528 00207468  41 82 00 30 */	beq .L_8020A558
/* 8020A52C 0020746C  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A530 00207470  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 8020A534 00207474  38 03 F0 F8 */	addi r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
/* 8020A538 00207478  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8020A53C 0020747C  41 82 00 1C */	beq .L_8020A558
/* 8020A540 00207480  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8020A544 00207484  38 7E 00 4C */	addi r3, r30, 0x4c
/* 8020A548 00207488  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020A54C 0020748C  38 80 00 00 */	li r4, 0
/* 8020A550 00207490  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8020A554 00207494  48 20 70 35 */	bl __dt__5CNodeFv
.L_8020A558:
/* 8020A558 00207498  34 1E 00 30 */	addic. r0, r30, 0x30
/* 8020A55C 0020749C  41 82 00 30 */	beq .L_8020A58C
/* 8020A560 002074A0  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A564 002074A4  34 1E 00 30 */	addic. r0, r30, 0x30
/* 8020A568 002074A8  38 03 F0 F8 */	addi r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
/* 8020A56C 002074AC  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8020A570 002074B0  41 82 00 1C */	beq .L_8020A58C
/* 8020A574 002074B4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8020A578 002074B8  38 7E 00 30 */	addi r3, r30, 0x30
/* 8020A57C 002074BC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020A580 002074C0  38 80 00 00 */	li r4, 0
/* 8020A584 002074C4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8020A588 002074C8  48 20 70 01 */	bl __dt__5CNodeFv
.L_8020A58C:
/* 8020A58C 002074CC  7F E0 07 35 */	extsh. r0, r31
/* 8020A590 002074D0  40 81 00 0C */	ble .L_8020A59C
/* 8020A594 002074D4  7F C3 F3 78 */	mr r3, r30
/* 8020A598 002074D8  4B E1 9B 1D */	bl __dl__FPv
.L_8020A59C:
/* 8020A59C 002074DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A5A0 002074E0  7F C3 F3 78 */	mr r3, r30
/* 8020A5A4 002074E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020A5A8 002074E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020A5AC 002074EC  7C 08 03 A6 */	mtlr r0
/* 8020A5B0 002074F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A5B4 002074F4  4E 80 00 20 */	blr 
.endfn __dt__Q34Game12ItemUjamushi3MgrFv

.fn generatorGetID__Q34Game12ItemUjamushi3MgrFv, weak
/* 8020A5B8 002074F8  3C 60 75 6A */	lis r3, 0x756A6D73@ha
/* 8020A5BC 002074FC  38 63 6D 73 */	addi r3, r3, 0x756A6D73@l
/* 8020A5C0 00207500  4E 80 00 20 */	blr 
.endfn generatorGetID__Q34Game12ItemUjamushi3MgrFv

.fn generatorLocalVersion__Q34Game12ItemUjamushi3MgrFv, weak
/* 8020A5C4 00207504  3C 60 30 30 */	lis r3, 0x30303030@ha
/* 8020A5C8 00207508  38 63 30 30 */	addi r3, r3, 0x30303030@l
/* 8020A5CC 0020750C  4E 80 00 20 */	blr 
.endfn generatorLocalVersion__Q34Game12ItemUjamushi3MgrFv

.fn "__ml__36Iterator<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020A5D0 00207510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A5D4 00207514  7C 08 02 A6 */	mflr r0
/* 8020A5D8 00207518  7C 64 1B 78 */	mr r4, r3
/* 8020A5DC 0020751C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A5E0 00207520  80 63 00 08 */	lwz r3, 8(r3)
/* 8020A5E4 00207524  80 84 00 04 */	lwz r4, 4(r4)
/* 8020A5E8 00207528  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A5EC 0020752C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020A5F0 00207530  7D 89 03 A6 */	mtctr r12
/* 8020A5F4 00207534  4E 80 04 21 */	bctrl 
/* 8020A5F8 00207538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A5FC 0020753C  7C 08 03 A6 */	mtlr r0
/* 8020A600 00207540  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A604 00207544  4E 80 00 20 */	blr 
.endfn "__ml__36Iterator<Q34Game12ItemUjamushi4Item>Fv"

.fn "next__36Iterator<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020A608 00207548  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A60C 0020754C  7C 08 02 A6 */	mflr r0
/* 8020A610 00207550  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A614 00207554  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020A618 00207558  7C 7F 1B 78 */	mr r31, r3
/* 8020A61C 0020755C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8020A620 00207560  28 00 00 00 */	cmplwi r0, 0
/* 8020A624 00207564  40 82 00 24 */	bne .L_8020A648
/* 8020A628 00207568  80 7F 00 08 */	lwz r3, 8(r31)
/* 8020A62C 0020756C  80 9F 00 04 */	lwz r4, 4(r31)
/* 8020A630 00207570  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A634 00207574  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020A638 00207578  7D 89 03 A6 */	mtctr r12
/* 8020A63C 0020757C  4E 80 04 21 */	bctrl 
/* 8020A640 00207580  90 7F 00 04 */	stw r3, 4(r31)
/* 8020A644 00207584  48 00 00 94 */	b .L_8020A6D8
.L_8020A648:
/* 8020A648 00207588  80 7F 00 08 */	lwz r3, 8(r31)
/* 8020A64C 0020758C  80 9F 00 04 */	lwz r4, 4(r31)
/* 8020A650 00207590  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A654 00207594  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020A658 00207598  7D 89 03 A6 */	mtctr r12
/* 8020A65C 0020759C  4E 80 04 21 */	bctrl 
/* 8020A660 002075A0  90 7F 00 04 */	stw r3, 4(r31)
/* 8020A664 002075A4  48 00 00 58 */	b .L_8020A6BC
.L_8020A668:
/* 8020A668 002075A8  80 7F 00 08 */	lwz r3, 8(r31)
/* 8020A66C 002075AC  80 9F 00 04 */	lwz r4, 4(r31)
/* 8020A670 002075B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A674 002075B4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020A678 002075B8  7D 89 03 A6 */	mtctr r12
/* 8020A67C 002075BC  4E 80 04 21 */	bctrl 
/* 8020A680 002075C0  7C 64 1B 78 */	mr r4, r3
/* 8020A684 002075C4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8020A688 002075C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A68C 002075CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020A690 002075D0  7D 89 03 A6 */	mtctr r12
/* 8020A694 002075D4  4E 80 04 21 */	bctrl 
/* 8020A698 002075D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020A69C 002075DC  40 82 00 3C */	bne .L_8020A6D8
/* 8020A6A0 002075E0  80 7F 00 08 */	lwz r3, 8(r31)
/* 8020A6A4 002075E4  80 9F 00 04 */	lwz r4, 4(r31)
/* 8020A6A8 002075E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A6AC 002075EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020A6B0 002075F0  7D 89 03 A6 */	mtctr r12
/* 8020A6B4 002075F4  4E 80 04 21 */	bctrl 
/* 8020A6B8 002075F8  90 7F 00 04 */	stw r3, 4(r31)
.L_8020A6BC:
/* 8020A6BC 002075FC  7F E3 FB 78 */	mr r3, r31
/* 8020A6C0 00207600  81 9F 00 00 */	lwz r12, 0(r31)
/* 8020A6C4 00207604  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020A6C8 00207608  7D 89 03 A6 */	mtctr r12
/* 8020A6CC 0020760C  4E 80 04 21 */	bctrl 
/* 8020A6D0 00207610  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020A6D4 00207614  41 82 FF 94 */	beq .L_8020A668
.L_8020A6D8:
/* 8020A6D8 00207618  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A6DC 0020761C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020A6E0 00207620  7C 08 03 A6 */	mtlr r0
/* 8020A6E4 00207624  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A6E8 00207628  4E 80 00 20 */	blr 
.endfn "next__36Iterator<Q34Game12ItemUjamushi4Item>Fv"

.fn "first__36Iterator<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020A6EC 0020762C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A6F0 00207630  7C 08 02 A6 */	mflr r0
/* 8020A6F4 00207634  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A6F8 00207638  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020A6FC 0020763C  7C 7F 1B 78 */	mr r31, r3
/* 8020A700 00207640  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8020A704 00207644  28 00 00 00 */	cmplwi r0, 0
/* 8020A708 00207648  40 82 00 20 */	bne .L_8020A728
/* 8020A70C 0020764C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8020A710 00207650  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A714 00207654  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020A718 00207658  7D 89 03 A6 */	mtctr r12
/* 8020A71C 0020765C  4E 80 04 21 */	bctrl 
/* 8020A720 00207660  90 7F 00 04 */	stw r3, 4(r31)
/* 8020A724 00207664  48 00 00 90 */	b .L_8020A7B4
.L_8020A728:
/* 8020A728 00207668  80 7F 00 08 */	lwz r3, 8(r31)
/* 8020A72C 0020766C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A730 00207670  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020A734 00207674  7D 89 03 A6 */	mtctr r12
/* 8020A738 00207678  4E 80 04 21 */	bctrl 
/* 8020A73C 0020767C  90 7F 00 04 */	stw r3, 4(r31)
/* 8020A740 00207680  48 00 00 58 */	b .L_8020A798
.L_8020A744:
/* 8020A744 00207684  80 7F 00 08 */	lwz r3, 8(r31)
/* 8020A748 00207688  80 9F 00 04 */	lwz r4, 4(r31)
/* 8020A74C 0020768C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A750 00207690  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020A754 00207694  7D 89 03 A6 */	mtctr r12
/* 8020A758 00207698  4E 80 04 21 */	bctrl 
/* 8020A75C 0020769C  7C 64 1B 78 */	mr r4, r3
/* 8020A760 002076A0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8020A764 002076A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A768 002076A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020A76C 002076AC  7D 89 03 A6 */	mtctr r12
/* 8020A770 002076B0  4E 80 04 21 */	bctrl 
/* 8020A774 002076B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020A778 002076B8  40 82 00 3C */	bne .L_8020A7B4
/* 8020A77C 002076BC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8020A780 002076C0  80 9F 00 04 */	lwz r4, 4(r31)
/* 8020A784 002076C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020A788 002076C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020A78C 002076CC  7D 89 03 A6 */	mtctr r12
/* 8020A790 002076D0  4E 80 04 21 */	bctrl 
/* 8020A794 002076D4  90 7F 00 04 */	stw r3, 4(r31)
.L_8020A798:
/* 8020A798 002076D8  7F E3 FB 78 */	mr r3, r31
/* 8020A79C 002076DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8020A7A0 002076E0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020A7A4 002076E4  7D 89 03 A6 */	mtctr r12
/* 8020A7A8 002076E8  4E 80 04 21 */	bctrl 
/* 8020A7AC 002076EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020A7B0 002076F0  41 82 FF 94 */	beq .L_8020A744
.L_8020A7B4:
/* 8020A7B4 002076F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A7B8 002076F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020A7BC 002076FC  7C 08 03 A6 */	mtlr r0
/* 8020A7C0 00207700  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A7C4 00207704  4E 80 00 20 */	blr 
.endfn "first__36Iterator<Q34Game12ItemUjamushi4Item>Fv"

.fn "__dt__37Container<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020A7C8 00207708  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A7CC 0020770C  7C 08 02 A6 */	mflr r0
/* 8020A7D0 00207710  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A7D4 00207714  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020A7D8 00207718  7C 9F 23 78 */	mr r31, r4
/* 8020A7DC 0020771C  93 C1 00 08 */	stw r30, 8(r1)
/* 8020A7E0 00207720  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020A7E4 00207724  41 82 00 38 */	beq .L_8020A81C
/* 8020A7E8 00207728  3C 80 80 4C */	lis r4, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A7EC 0020772C  38 04 F0 F8 */	addi r0, r4, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
/* 8020A7F0 00207730  90 1E 00 00 */	stw r0, 0(r30)
/* 8020A7F4 00207734  41 82 00 18 */	beq .L_8020A80C
/* 8020A7F8 00207738  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8020A7FC 0020773C  38 80 00 00 */	li r4, 0
/* 8020A800 00207740  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8020A804 00207744  90 1E 00 00 */	stw r0, 0(r30)
/* 8020A808 00207748  48 20 6D 81 */	bl __dt__5CNodeFv
.L_8020A80C:
/* 8020A80C 0020774C  7F E0 07 35 */	extsh. r0, r31
/* 8020A810 00207750  40 81 00 0C */	ble .L_8020A81C
/* 8020A814 00207754  7F C3 F3 78 */	mr r3, r30
/* 8020A818 00207758  4B E1 98 9D */	bl __dl__FPv
.L_8020A81C:
/* 8020A81C 0020775C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A820 00207760  7F C3 F3 78 */	mr r3, r30
/* 8020A824 00207764  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020A828 00207768  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020A82C 0020776C  7C 08 03 A6 */	mtlr r0
/* 8020A830 00207770  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A834 00207774  4E 80 00 20 */	blr 
.endfn "__dt__37Container<Q34Game12ItemUjamushi4Item>Fv"

.fn "__dt__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020A838 00207778  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A83C 0020777C  7C 08 02 A6 */	mflr r0
/* 8020A840 00207780  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A844 00207784  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020A848 00207788  7C 9F 23 78 */	mr r31, r4
/* 8020A84C 0020778C  93 C1 00 08 */	stw r30, 8(r1)
/* 8020A850 00207790  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020A854 00207794  41 82 00 50 */	beq .L_8020A8A4
/* 8020A858 00207798  3C 80 80 4C */	lis r4, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A85C 0020779C  38 84 F1 24 */	addi r4, r4, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@l
/* 8020A860 002077A0  90 9E 00 00 */	stw r4, 0(r30)
/* 8020A864 002077A4  38 04 00 2C */	addi r0, r4, 0x2c
/* 8020A868 002077A8  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8020A86C 002077AC  41 82 00 28 */	beq .L_8020A894
/* 8020A870 002077B0  3C 80 80 4C */	lis r4, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A874 002077B4  38 04 F0 F8 */	addi r0, r4, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
/* 8020A878 002077B8  90 1E 00 00 */	stw r0, 0(r30)
/* 8020A87C 002077BC  41 82 00 18 */	beq .L_8020A894
/* 8020A880 002077C0  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8020A884 002077C4  38 80 00 00 */	li r4, 0
/* 8020A888 002077C8  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8020A88C 002077CC  90 1E 00 00 */	stw r0, 0(r30)
/* 8020A890 002077D0  48 20 6C F9 */	bl __dt__5CNodeFv
.L_8020A894:
/* 8020A894 002077D4  7F E0 07 35 */	extsh. r0, r31
/* 8020A898 002077D8  40 81 00 0C */	ble .L_8020A8A4
/* 8020A89C 002077DC  7F C3 F3 78 */	mr r3, r30
/* 8020A8A0 002077E0  4B E1 98 15 */	bl __dl__FPv
.L_8020A8A4:
/* 8020A8A4 002077E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A8A8 002077E8  7F C3 F3 78 */	mr r3, r30
/* 8020A8AC 002077EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020A8B0 002077F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020A8B4 002077F4  7C 08 03 A6 */	mtlr r0
/* 8020A8B8 002077F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A8BC 002077FC  4E 80 00 20 */	blr 
.endfn "__dt__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "__dt__39TObjectNode<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020A8C0 00207800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A8C4 00207804  7C 08 02 A6 */	mflr r0
/* 8020A8C8 00207808  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A8CC 0020780C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020A8D0 00207810  7C 9F 23 78 */	mr r31, r4
/* 8020A8D4 00207814  93 C1 00 08 */	stw r30, 8(r1)
/* 8020A8D8 00207818  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020A8DC 0020781C  41 82 00 28 */	beq .L_8020A904
/* 8020A8E0 00207820  3C A0 80 4C */	lis r5, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A8E4 00207824  38 80 00 00 */	li r4, 0
/* 8020A8E8 00207828  38 05 F1 A0 */	addi r0, r5, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
/* 8020A8EC 0020782C  90 1E 00 00 */	stw r0, 0(r30)
/* 8020A8F0 00207830  48 20 6C 99 */	bl __dt__5CNodeFv
/* 8020A8F4 00207834  7F E0 07 35 */	extsh. r0, r31
/* 8020A8F8 00207838  40 81 00 0C */	ble .L_8020A904
/* 8020A8FC 0020783C  7F C3 F3 78 */	mr r3, r30
/* 8020A900 00207840  4B E1 97 B5 */	bl __dl__FPv
.L_8020A904:
/* 8020A904 00207844  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A908 00207848  7F C3 F3 78 */	mr r3, r30
/* 8020A90C 0020784C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020A910 00207850  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020A914 00207854  7C 08 03 A6 */	mtlr r0
/* 8020A918 00207858  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A91C 0020785C  4E 80 00 20 */	blr 
.endfn "__dt__39TObjectNode<Q34Game12ItemUjamushi4Item>Fv"

.fn "__dt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020A920 00207860  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020A924 00207864  7C 08 02 A6 */	mflr r0
/* 8020A928 00207868  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020A92C 0020786C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020A930 00207870  7C 9F 23 78 */	mr r31, r4
/* 8020A934 00207874  93 C1 00 08 */	stw r30, 8(r1)
/* 8020A938 00207878  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020A93C 0020787C  41 82 00 90 */	beq .L_8020A9CC
/* 8020A940 00207880  3C 60 80 4C */	lis r3, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A944 00207884  34 1E 00 20 */	addic. r0, r30, 0x20
/* 8020A948 00207888  38 63 F1 B0 */	addi r3, r3, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@l
/* 8020A94C 0020788C  90 7E 00 00 */	stw r3, 0(r30)
/* 8020A950 00207890  38 03 00 2C */	addi r0, r3, 0x2c
/* 8020A954 00207894  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8020A958 00207898  41 82 00 1C */	beq .L_8020A974
/* 8020A95C 0020789C  3C 80 80 4C */	lis r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A960 002078A0  38 7E 00 20 */	addi r3, r30, 0x20
/* 8020A964 002078A4  38 04 F1 A0 */	addi r0, r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
/* 8020A968 002078A8  38 80 00 00 */	li r4, 0
/* 8020A96C 002078AC  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020A970 002078B0  48 20 6C 19 */	bl __dt__5CNodeFv
.L_8020A974:
/* 8020A974 002078B4  28 1E 00 00 */	cmplwi r30, 0
/* 8020A978 002078B8  41 82 00 44 */	beq .L_8020A9BC
/* 8020A97C 002078BC  3C 60 80 4C */	lis r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A980 002078C0  38 63 F1 24 */	addi r3, r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@l
/* 8020A984 002078C4  90 7E 00 00 */	stw r3, 0(r30)
/* 8020A988 002078C8  38 03 00 2C */	addi r0, r3, 0x2c
/* 8020A98C 002078CC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8020A990 002078D0  41 82 00 2C */	beq .L_8020A9BC
/* 8020A994 002078D4  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
/* 8020A998 002078D8  38 03 F0 F8 */	addi r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
/* 8020A99C 002078DC  90 1E 00 00 */	stw r0, 0(r30)
/* 8020A9A0 002078E0  41 82 00 1C */	beq .L_8020A9BC
/* 8020A9A4 002078E4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8020A9A8 002078E8  7F C3 F3 78 */	mr r3, r30
/* 8020A9AC 002078EC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020A9B0 002078F0  38 80 00 00 */	li r4, 0
/* 8020A9B4 002078F4  90 1E 00 00 */	stw r0, 0(r30)
/* 8020A9B8 002078F8  48 20 6B D1 */	bl __dt__5CNodeFv
.L_8020A9BC:
/* 8020A9BC 002078FC  7F E0 07 35 */	extsh. r0, r31
/* 8020A9C0 00207900  40 81 00 0C */	ble .L_8020A9CC
/* 8020A9C4 00207904  7F C3 F3 78 */	mr r3, r30
/* 8020A9C8 00207908  4B E1 96 ED */	bl __dl__FPv
.L_8020A9CC:
/* 8020A9CC 0020790C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020A9D0 00207910  7F C3 F3 78 */	mr r3, r30
/* 8020A9D4 00207914  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020A9D8 00207918  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020A9DC 0020791C  7C 08 03 A6 */	mtlr r0
/* 8020A9E0 00207920  38 21 00 10 */	addi r1, r1, 0x10
/* 8020A9E4 00207924  4E 80 00 20 */	blr 
.endfn "__dt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn getFlockMgr__Q34Game12ItemUjamushi4ItemFv, weak
/* 8020A9E8 00207928  80 63 02 00 */	lwz r3, 0x200(r3)
/* 8020A9EC 0020792C  4E 80 00 20 */	blr 
.endfn getFlockMgr__Q34Game12ItemUjamushi4ItemFv

.fn makeTrMatrix__Q34Game12ItemUjamushi4ItemFv, weak
/* 8020A9F0 00207930  4E 80 00 20 */	blr 
.endfn makeTrMatrix__Q34Game12ItemUjamushi4ItemFv

.fn getMatrix__Q44Game12ItemUjamushi4Item10DummyShapeFi, weak
/* 8020A9F4 00207934  80 63 00 04 */	lwz r3, 4(r3)
/* 8020A9F8 00207938  4E 80 00 20 */	blr 
.endfn getMatrix__Q44Game12ItemUjamushi4Item10DummyShapeFi

.fn "doAI__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>Fv", weak
/* 8020A9FC 0020793C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020AA00 00207940  7C 08 02 A6 */	mflr r0
/* 8020AA04 00207944  7C 64 1B 78 */	mr r4, r3
/* 8020AA08 00207948  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020AA0C 0020794C  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 8020AA10 00207950  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AA14 00207954  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020AA18 00207958  7D 89 03 A6 */	mtctr r12
/* 8020AA1C 0020795C  4E 80 04 21 */	bctrl 
/* 8020AA20 00207960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020AA24 00207964  7C 08 03 A6 */	mtlr r0
/* 8020AA28 00207968  38 21 00 10 */	addi r1, r1, 0x10
/* 8020AA2C 0020796C  4E 80 00 20 */	blr 
.endfn "doAI__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>Fv"

.fn __dt__Q34Game12ItemUjamushi6UjaMgrFv, weak
/* 8020AA30 00207970  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020AA34 00207974  7C 08 02 A6 */	mflr r0
/* 8020AA38 00207978  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020AA3C 0020797C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020AA40 00207980  7C 9F 23 78 */	mr r31, r4
/* 8020AA44 00207984  93 C1 00 08 */	stw r30, 8(r1)
/* 8020AA48 00207988  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020AA4C 0020798C  41 82 00 E0 */	beq .L_8020AB2C
/* 8020AA50 00207990  3C 60 80 4C */	lis r3, __vt__Q34Game12ItemUjamushi6UjaMgr@ha
/* 8020AA54 00207994  38 63 F8 14 */	addi r3, r3, __vt__Q34Game12ItemUjamushi6UjaMgr@l
/* 8020AA58 00207998  90 7E 00 00 */	stw r3, 0(r30)
/* 8020AA5C 0020799C  38 03 00 30 */	addi r0, r3, 0x30
/* 8020AA60 002079A0  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020AA64 002079A4  41 82 00 B8 */	beq .L_8020AB1C
/* 8020AA68 002079A8  3C 60 80 4C */	lis r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020AA6C 002079AC  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 8020AA70 002079B0  38 63 F9 8C */	addi r3, r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 8020AA74 002079B4  90 7E 00 00 */	stw r3, 0(r30)
/* 8020AA78 002079B8  38 03 00 30 */	addi r0, r3, 0x30
/* 8020AA7C 002079BC  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020AA80 002079C0  41 82 00 68 */	beq .L_8020AAE8
/* 8020AA84 002079C4  3C 60 80 4C */	lis r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020AA88 002079C8  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 8020AA8C 002079CC  38 63 F9 00 */	addi r3, r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 8020AA90 002079D0  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 8020AA94 002079D4  38 03 00 2C */	addi r0, r3, 0x2c
/* 8020AA98 002079D8  90 1E 00 58 */	stw r0, 0x58(r30)
/* 8020AA9C 002079DC  41 82 00 4C */	beq .L_8020AAE8
/* 8020AAA0 002079E0  3C 60 80 4C */	lis r3, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020AAA4 002079E4  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 8020AAA8 002079E8  38 63 F8 84 */	addi r3, r3, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 8020AAAC 002079EC  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 8020AAB0 002079F0  38 03 00 2C */	addi r0, r3, 0x2c
/* 8020AAB4 002079F4  90 1E 00 58 */	stw r0, 0x58(r30)
/* 8020AAB8 002079F8  41 82 00 30 */	beq .L_8020AAE8
/* 8020AABC 002079FC  3C 60 80 4C */	lis r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020AAC0 00207A00  34 1E 00 3C */	addic. r0, r30, 0x3c
/* 8020AAC4 00207A04  38 03 F9 FC */	addi r0, r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
/* 8020AAC8 00207A08  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 8020AACC 00207A0C  41 82 00 1C */	beq .L_8020AAE8
/* 8020AAD0 00207A10  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8020AAD4 00207A14  38 7E 00 3C */	addi r3, r30, 0x3c
/* 8020AAD8 00207A18  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020AADC 00207A1C  38 80 00 00 */	li r4, 0
/* 8020AAE0 00207A20  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 8020AAE4 00207A24  48 20 6A A5 */	bl __dt__5CNodeFv
.L_8020AAE8:
/* 8020AAE8 00207A28  34 1E 00 20 */	addic. r0, r30, 0x20
/* 8020AAEC 00207A2C  41 82 00 30 */	beq .L_8020AB1C
/* 8020AAF0 00207A30  3C 60 80 4C */	lis r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020AAF4 00207A34  34 1E 00 20 */	addic. r0, r30, 0x20
/* 8020AAF8 00207A38  38 03 F9 FC */	addi r0, r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
/* 8020AAFC 00207A3C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020AB00 00207A40  41 82 00 1C */	beq .L_8020AB1C
/* 8020AB04 00207A44  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8020AB08 00207A48  38 7E 00 20 */	addi r3, r30, 0x20
/* 8020AB0C 00207A4C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020AB10 00207A50  38 80 00 00 */	li r4, 0
/* 8020AB14 00207A54  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020AB18 00207A58  48 20 6A 71 */	bl __dt__5CNodeFv
.L_8020AB1C:
/* 8020AB1C 00207A5C  7F E0 07 35 */	extsh. r0, r31
/* 8020AB20 00207A60  40 81 00 0C */	ble .L_8020AB2C
/* 8020AB24 00207A64  7F C3 F3 78 */	mr r3, r30
/* 8020AB28 00207A68  4B E1 95 8D */	bl __dl__FPv
.L_8020AB2C:
/* 8020AB2C 00207A6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020AB30 00207A70  7F C3 F3 78 */	mr r3, r30
/* 8020AB34 00207A74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020AB38 00207A78  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020AB3C 00207A7C  7C 08 03 A6 */	mtlr r0
/* 8020AB40 00207A80  38 21 00 10 */	addi r1, r1, 0x10
/* 8020AB44 00207A84  4E 80 00 20 */	blr 
.endfn __dt__Q34Game12ItemUjamushi6UjaMgrFv

.fn isWeed__Q24Game12BaseFlockMgrFi, weak
/* 8020AB48 00207A88  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020AB4C 00207A8C  7C 08 02 A6 */	mflr r0
/* 8020AB50 00207A90  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020AB54 00207A94  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020AB58 00207A98  3B E0 00 00 */	li r31, 0
/* 8020AB5C 00207A9C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020AB60 00207AA0  7C 9E 23 79 */	or. r30, r4, r4
/* 8020AB64 00207AA4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020AB68 00207AA8  7C 7D 1B 78 */	mr r29, r3
/* 8020AB6C 00207AAC  41 80 00 20 */	blt .L_8020AB8C
/* 8020AB70 00207AB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AB74 00207AB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020AB78 00207AB8  7D 89 03 A6 */	mtctr r12
/* 8020AB7C 00207ABC  4E 80 04 21 */	bctrl 
/* 8020AB80 00207AC0  7C 1E 18 00 */	cmpw r30, r3
/* 8020AB84 00207AC4  40 80 00 08 */	bge .L_8020AB8C
/* 8020AB88 00207AC8  3B E0 00 01 */	li r31, 1
.L_8020AB8C:
/* 8020AB8C 00207ACC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8020AB90 00207AD0  40 82 00 20 */	bne .L_8020ABB0
/* 8020AB94 00207AD4  3C 60 80 48 */	lis r3, lbl_80481E3C@ha
/* 8020AB98 00207AD8  3C A0 80 48 */	lis r5, lbl_80481DDC@ha
/* 8020AB9C 00207ADC  38 63 1E 3C */	addi r3, r3, lbl_80481E3C@l
/* 8020ABA0 00207AE0  38 80 00 91 */	li r4, 0x91
/* 8020ABA4 00207AE4  38 A5 1D DC */	addi r5, r5, lbl_80481DDC@l
/* 8020ABA8 00207AE8  4C C6 31 82 */	crclr 6
/* 8020ABAC 00207AEC  4B E1 FA 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8020ABB0:
/* 8020ABB0 00207AF0  7F A3 EB 78 */	mr r3, r29
/* 8020ABB4 00207AF4  7F C4 F3 78 */	mr r4, r30
/* 8020ABB8 00207AF8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8020ABBC 00207AFC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020ABC0 00207B00  7D 89 03 A6 */	mtctr r12
/* 8020ABC4 00207B04  4E 80 04 21 */	bctrl 
/* 8020ABC8 00207B08  81 83 00 0C */	lwz r12, 0xc(r3)
/* 8020ABCC 00207B0C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020ABD0 00207B10  7D 89 03 A6 */	mtctr r12
/* 8020ABD4 00207B14  4E 80 04 21 */	bctrl 
/* 8020ABD8 00207B18  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020ABDC 00207B1C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020ABE0 00207B20  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020ABE4 00207B24  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020ABE8 00207B28  7C 08 03 A6 */	mtlr r0
/* 8020ABEC 00207B2C  38 21 00 20 */	addi r1, r1, 0x20
/* 8020ABF0 00207B30  4E 80 00 20 */	blr 
.endfn isWeed__Q24Game12BaseFlockMgrFi

.fn isWeed__Q24Game6TFlockFv, weak
/* 8020ABF4 00207B34  38 60 00 00 */	li r3, 0
/* 8020ABF8 00207B38  4E 80 00 20 */	blr 
.endfn isWeed__Q24Game6TFlockFv

.fn fear__Q24Game12BaseFlockMgrFi, weak
/* 8020ABFC 00207B3C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020AC00 00207B40  7C 08 02 A6 */	mflr r0
/* 8020AC04 00207B44  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020AC08 00207B48  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020AC0C 00207B4C  3B E0 00 00 */	li r31, 0
/* 8020AC10 00207B50  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020AC14 00207B54  7C 9E 23 79 */	or. r30, r4, r4
/* 8020AC18 00207B58  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020AC1C 00207B5C  7C 7D 1B 78 */	mr r29, r3
/* 8020AC20 00207B60  41 80 00 20 */	blt .L_8020AC40
/* 8020AC24 00207B64  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AC28 00207B68  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020AC2C 00207B6C  7D 89 03 A6 */	mtctr r12
/* 8020AC30 00207B70  4E 80 04 21 */	bctrl 
/* 8020AC34 00207B74  7C 1E 18 00 */	cmpw r30, r3
/* 8020AC38 00207B78  40 80 00 08 */	bge .L_8020AC40
/* 8020AC3C 00207B7C  3B E0 00 01 */	li r31, 1
.L_8020AC40:
/* 8020AC40 00207B80  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8020AC44 00207B84  40 82 00 20 */	bne .L_8020AC64
/* 8020AC48 00207B88  3C 60 80 48 */	lis r3, lbl_80481E3C@ha
/* 8020AC4C 00207B8C  3C A0 80 48 */	lis r5, lbl_80481DDC@ha
/* 8020AC50 00207B90  38 63 1E 3C */	addi r3, r3, lbl_80481E3C@l
/* 8020AC54 00207B94  38 80 00 98 */	li r4, 0x98
/* 8020AC58 00207B98  38 A5 1D DC */	addi r5, r5, lbl_80481DDC@l
/* 8020AC5C 00207B9C  4C C6 31 82 */	crclr 6
/* 8020AC60 00207BA0  4B E1 F9 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8020AC64:
/* 8020AC64 00207BA4  7F A3 EB 78 */	mr r3, r29
/* 8020AC68 00207BA8  7F C4 F3 78 */	mr r4, r30
/* 8020AC6C 00207BAC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8020AC70 00207BB0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020AC74 00207BB4  7D 89 03 A6 */	mtctr r12
/* 8020AC78 00207BB8  4E 80 04 21 */	bctrl 
/* 8020AC7C 00207BBC  81 83 00 0C */	lwz r12, 0xc(r3)
/* 8020AC80 00207BC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020AC84 00207BC4  7D 89 03 A6 */	mtctr r12
/* 8020AC88 00207BC8  4E 80 04 21 */	bctrl 
/* 8020AC8C 00207BCC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020AC90 00207BD0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020AC94 00207BD4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020AC98 00207BD8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020AC9C 00207BDC  7C 08 03 A6 */	mtlr r0
/* 8020ACA0 00207BE0  38 21 00 20 */	addi r1, r1, 0x20
/* 8020ACA4 00207BE4  4E 80 00 20 */	blr 
.endfn fear__Q24Game12BaseFlockMgrFi

.fn fear__Q24Game6TFlockFv, weak
/* 8020ACA8 00207BE8  38 60 00 00 */	li r3, 0
/* 8020ACAC 00207BEC  4E 80 00 20 */	blr 
.endfn fear__Q24Game6TFlockFv

.fn "__dt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020ACB0 00207BF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020ACB4 00207BF4  7C 08 02 A6 */	mflr r0
/* 8020ACB8 00207BF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020ACBC 00207BFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020ACC0 00207C00  7C 9F 23 78 */	mr r31, r4
/* 8020ACC4 00207C04  93 C1 00 08 */	stw r30, 8(r1)
/* 8020ACC8 00207C08  7C 7E 1B 79 */	or. r30, r3, r3
/* 8020ACCC 00207C0C  41 82 00 50 */	beq .L_8020AD1C
/* 8020ACD0 00207C10  3C 80 80 4C */	lis r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020ACD4 00207C14  38 84 F8 84 */	addi r4, r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 8020ACD8 00207C18  90 9E 00 00 */	stw r4, 0(r30)
/* 8020ACDC 00207C1C  38 04 00 2C */	addi r0, r4, 0x2c
/* 8020ACE0 00207C20  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8020ACE4 00207C24  41 82 00 28 */	beq .L_8020AD0C
/* 8020ACE8 00207C28  3C 80 80 4C */	lis r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020ACEC 00207C2C  38 04 F9 FC */	addi r0, r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
/* 8020ACF0 00207C30  90 1E 00 00 */	stw r0, 0(r30)
/* 8020ACF4 00207C34  41 82 00 18 */	beq .L_8020AD0C
/* 8020ACF8 00207C38  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8020ACFC 00207C3C  38 80 00 00 */	li r4, 0
/* 8020AD00 00207C40  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8020AD04 00207C44  90 1E 00 00 */	stw r0, 0(r30)
/* 8020AD08 00207C48  48 20 68 81 */	bl __dt__5CNodeFv
.L_8020AD0C:
/* 8020AD0C 00207C4C  7F E0 07 35 */	extsh. r0, r31
/* 8020AD10 00207C50  40 81 00 0C */	ble .L_8020AD1C
/* 8020AD14 00207C54  7F C3 F3 78 */	mr r3, r30
/* 8020AD18 00207C58  4B E1 93 9D */	bl __dl__FPv
.L_8020AD1C:
/* 8020AD1C 00207C5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020AD20 00207C60  7F C3 F3 78 */	mr r3, r30
/* 8020AD24 00207C64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020AD28 00207C68  83 C1 00 08 */	lwz r30, 8(r1)
/* 8020AD2C 00207C6C  7C 08 03 A6 */	mtlr r0
/* 8020AD30 00207C70  38 21 00 10 */	addi r1, r1, 0x10
/* 8020AD34 00207C74  4E 80 00 20 */	blr 
.endfn "__dt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn do_update__Q24Game12BaseFlockMgrFv, weak
/* 8020AD38 00207C78  4E 80 00 20 */	blr 
.endfn do_update__Q24Game12BaseFlockMgrFv

.fn "__ml__35Iterator<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020AD3C 00207C7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020AD40 00207C80  7C 08 02 A6 */	mflr r0
/* 8020AD44 00207C84  7C 64 1B 78 */	mr r4, r3
/* 8020AD48 00207C88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020AD4C 00207C8C  80 63 00 08 */	lwz r3, 8(r3)
/* 8020AD50 00207C90  80 84 00 04 */	lwz r4, 4(r4)
/* 8020AD54 00207C94  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AD58 00207C98  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020AD5C 00207C9C  7D 89 03 A6 */	mtctr r12
/* 8020AD60 00207CA0  4E 80 04 21 */	bctrl 
/* 8020AD64 00207CA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020AD68 00207CA8  7C 08 03 A6 */	mtlr r0
/* 8020AD6C 00207CAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8020AD70 00207CB0  4E 80 00 20 */	blr 
.endfn "__ml__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"

.fn isVisible__Q34Game12ItemUjamushi3UjaFv, weak
/* 8020AD74 00207CB4  88 83 00 AC */	lbz r4, 0xac(r3)
/* 8020AD78 00207CB8  20 64 00 06 */	subfic r3, r4, 6
/* 8020AD7C 00207CBC  38 04 FF FA */	addi r0, r4, -6
/* 8020AD80 00207CC0  7C 60 03 78 */	or r0, r3, r0
/* 8020AD84 00207CC4  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8020AD88 00207CC8  4E 80 00 20 */	blr 
.endfn isVisible__Q34Game12ItemUjamushi3UjaFv

.fn getRadius__Q24Game6TFlockFv, weak
/* 8020AD8C 00207CCC  C0 22 BA 34 */	lfs f1, lbl_80519D94@sda21(r2)
/* 8020AD90 00207CD0  4E 80 00 20 */	blr 
.endfn getRadius__Q24Game6TFlockFv

.fn constructor__Q24Game6TFlockFv, weak
/* 8020AD94 00207CD4  4E 80 00 20 */	blr 
.endfn constructor__Q24Game6TFlockFv

.fn isVisible__Q24Game6TFlockFv, weak
/* 8020AD98 00207CD8  38 60 00 01 */	li r3, 1
/* 8020AD9C 00207CDC  4E 80 00 20 */	blr 
.endfn isVisible__Q24Game6TFlockFv

.fn damaged__Q24Game6TFlockFf, weak
/* 8020ADA0 00207CE0  38 60 00 01 */	li r3, 1
/* 8020ADA4 00207CE4  4E 80 00 20 */	blr 
.endfn damaged__Q24Game6TFlockFf

.fn "getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv", weak
/* 8020ADA8 00207CE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020ADAC 00207CEC  7C 08 02 A6 */	mflr r0
/* 8020ADB0 00207CF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020ADB4 00207CF4  85 83 00 3C */	lwzu r12, 0x3c(r3)
/* 8020ADB8 00207CF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020ADBC 00207CFC  7D 89 03 A6 */	mtctr r12
/* 8020ADC0 00207D00  4E 80 04 21 */	bctrl 
/* 8020ADC4 00207D04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020ADC8 00207D08  7C 08 03 A6 */	mtlr r0
/* 8020ADCC 00207D0C  38 21 00 10 */	addi r1, r1, 0x10
/* 8020ADD0 00207D10  4E 80 00 20 */	blr 
.endfn "getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"

.fn "getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020ADD4 00207D14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020ADD8 00207D18  7C 08 02 A6 */	mflr r0
/* 8020ADDC 00207D1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020ADE0 00207D20  85 83 00 3C */	lwzu r12, 0x3c(r3)
/* 8020ADE4 00207D24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020ADE8 00207D28  7D 89 03 A6 */	mtctr r12
/* 8020ADEC 00207D2C  4E 80 04 21 */	bctrl 
/* 8020ADF0 00207D30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020ADF4 00207D34  7C 08 03 A6 */	mtlr r0
/* 8020ADF8 00207D38  38 21 00 10 */	addi r1, r1, 0x10
/* 8020ADFC 00207D3C  4E 80 00 20 */	blr 
.endfn "getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "killFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPQ24Game6TFlock", weak
/* 8020AE00 00207D40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020AE04 00207D44  7C 08 02 A6 */	mflr r0
/* 8020AE08 00207D48  38 63 00 3C */	addi r3, r3, 0x3c
/* 8020AE0C 00207D4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020AE10 00207D50  48 00 04 95 */	bl "kill__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FPQ34Game12ItemUjamushi3Uja"
/* 8020AE14 00207D54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020AE18 00207D58  7C 08 03 A6 */	mtlr r0
/* 8020AE1C 00207D5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8020AE20 00207D60  4E 80 00 20 */	blr 
.endfn "killFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPQ24Game6TFlock"

.fn "initDependency__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020AE24 00207D64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020AE28 00207D68  7C 08 02 A6 */	mflr r0
/* 8020AE2C 00207D6C  3C 80 80 4C */	lis r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
/* 8020AE30 00207D70  38 63 00 4C */	addi r3, r3, 0x4c
/* 8020AE34 00207D74  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020AE38 00207D78  38 00 00 00 */	li r0, 0
/* 8020AE3C 00207D7C  38 84 F0 E0 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
/* 8020AE40 00207D80  28 00 00 00 */	cmplwi r0, 0
/* 8020AE44 00207D84  90 81 00 08 */	stw r4, 8(r1)
/* 8020AE48 00207D88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020AE4C 00207D8C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020AE50 00207D90  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020AE54 00207D94  40 82 00 1C */	bne .L_8020AE70
/* 8020AE58 00207D98  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AE5C 00207D9C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020AE60 00207DA0  7D 89 03 A6 */	mtctr r12
/* 8020AE64 00207DA4  4E 80 04 21 */	bctrl 
/* 8020AE68 00207DA8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020AE6C 00207DAC  48 00 01 70 */	b .L_8020AFDC
.L_8020AE70:
/* 8020AE70 00207DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AE74 00207DB4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020AE78 00207DB8  7D 89 03 A6 */	mtctr r12
/* 8020AE7C 00207DBC  4E 80 04 21 */	bctrl 
/* 8020AE80 00207DC0  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020AE84 00207DC4  48 00 00 58 */	b .L_8020AEDC
.L_8020AE88:
/* 8020AE88 00207DC8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020AE8C 00207DCC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020AE90 00207DD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AE94 00207DD4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020AE98 00207DD8  7D 89 03 A6 */	mtctr r12
/* 8020AE9C 00207DDC  4E 80 04 21 */	bctrl 
/* 8020AEA0 00207DE0  7C 64 1B 78 */	mr r4, r3
/* 8020AEA4 00207DE4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020AEA8 00207DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AEAC 00207DEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020AEB0 00207DF0  7D 89 03 A6 */	mtctr r12
/* 8020AEB4 00207DF4  4E 80 04 21 */	bctrl 
/* 8020AEB8 00207DF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020AEBC 00207DFC  40 82 01 20 */	bne .L_8020AFDC
/* 8020AEC0 00207E00  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020AEC4 00207E04  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020AEC8 00207E08  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AECC 00207E0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020AED0 00207E10  7D 89 03 A6 */	mtctr r12
/* 8020AED4 00207E14  4E 80 04 21 */	bctrl 
/* 8020AED8 00207E18  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020AEDC:
/* 8020AEDC 00207E1C  81 81 00 08 */	lwz r12, 8(r1)
/* 8020AEE0 00207E20  38 61 00 08 */	addi r3, r1, 8
/* 8020AEE4 00207E24  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020AEE8 00207E28  7D 89 03 A6 */	mtctr r12
/* 8020AEEC 00207E2C  4E 80 04 21 */	bctrl 
/* 8020AEF0 00207E30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020AEF4 00207E34  41 82 FF 94 */	beq .L_8020AE88
/* 8020AEF8 00207E38  48 00 00 E4 */	b .L_8020AFDC
.L_8020AEFC:
/* 8020AEFC 00207E3C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020AF00 00207E40  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AF04 00207E44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020AF08 00207E48  7D 89 03 A6 */	mtctr r12
/* 8020AF0C 00207E4C  4E 80 04 21 */	bctrl 
/* 8020AF10 00207E50  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AF14 00207E54  81 8C 01 BC */	lwz r12, 0x1bc(r12)
/* 8020AF18 00207E58  7D 89 03 A6 */	mtctr r12
/* 8020AF1C 00207E5C  4E 80 04 21 */	bctrl 
/* 8020AF20 00207E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020AF24 00207E64  28 00 00 00 */	cmplwi r0, 0
/* 8020AF28 00207E68  40 82 00 24 */	bne .L_8020AF4C
/* 8020AF2C 00207E6C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020AF30 00207E70  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020AF34 00207E74  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AF38 00207E78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020AF3C 00207E7C  7D 89 03 A6 */	mtctr r12
/* 8020AF40 00207E80  4E 80 04 21 */	bctrl 
/* 8020AF44 00207E84  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020AF48 00207E88  48 00 00 94 */	b .L_8020AFDC
.L_8020AF4C:
/* 8020AF4C 00207E8C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020AF50 00207E90  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020AF54 00207E94  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AF58 00207E98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020AF5C 00207E9C  7D 89 03 A6 */	mtctr r12
/* 8020AF60 00207EA0  4E 80 04 21 */	bctrl 
/* 8020AF64 00207EA4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020AF68 00207EA8  48 00 00 58 */	b .L_8020AFC0
.L_8020AF6C:
/* 8020AF6C 00207EAC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020AF70 00207EB0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020AF74 00207EB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AF78 00207EB8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020AF7C 00207EBC  7D 89 03 A6 */	mtctr r12
/* 8020AF80 00207EC0  4E 80 04 21 */	bctrl 
/* 8020AF84 00207EC4  7C 64 1B 78 */	mr r4, r3
/* 8020AF88 00207EC8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020AF8C 00207ECC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AF90 00207ED0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020AF94 00207ED4  7D 89 03 A6 */	mtctr r12
/* 8020AF98 00207ED8  4E 80 04 21 */	bctrl 
/* 8020AF9C 00207EDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020AFA0 00207EE0  40 82 00 3C */	bne .L_8020AFDC
/* 8020AFA4 00207EE4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020AFA8 00207EE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020AFAC 00207EEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AFB0 00207EF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020AFB4 00207EF4  7D 89 03 A6 */	mtctr r12
/* 8020AFB8 00207EF8  4E 80 04 21 */	bctrl 
/* 8020AFBC 00207EFC  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020AFC0:
/* 8020AFC0 00207F00  81 81 00 08 */	lwz r12, 8(r1)
/* 8020AFC4 00207F04  38 61 00 08 */	addi r3, r1, 8
/* 8020AFC8 00207F08  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020AFCC 00207F0C  7D 89 03 A6 */	mtctr r12
/* 8020AFD0 00207F10  4E 80 04 21 */	bctrl 
/* 8020AFD4 00207F14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020AFD8 00207F18  41 82 FF 94 */	beq .L_8020AF6C
.L_8020AFDC:
/* 8020AFDC 00207F1C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020AFE0 00207F20  81 83 00 00 */	lwz r12, 0(r3)
/* 8020AFE4 00207F24  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020AFE8 00207F28  7D 89 03 A6 */	mtctr r12
/* 8020AFEC 00207F2C  4E 80 04 21 */	bctrl 
/* 8020AFF0 00207F30  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020AFF4 00207F34  7C 04 18 40 */	cmplw r4, r3
/* 8020AFF8 00207F38  40 82 FF 04 */	bne .L_8020AEFC
/* 8020AFFC 00207F3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020B000 00207F40  7C 08 03 A6 */	mtlr r0
/* 8020B004 00207F44  38 21 00 20 */	addi r1, r1, 0x20
/* 8020B008 00207F48  4E 80 00 20 */	blr 
.endfn "initDependency__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "kill__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item", weak
/* 8020B00C 00207F4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B010 00207F50  7C 08 02 A6 */	mflr r0
/* 8020B014 00207F54  38 63 00 4C */	addi r3, r3, 0x4c
/* 8020B018 00207F58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B01C 00207F5C  48 00 01 CD */	bl "delNode__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
/* 8020B020 00207F60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B024 00207F64  7C 08 03 A6 */	mtlr r0
/* 8020B028 00207F68  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B02C 00207F6C  4E 80 00 20 */	blr 
.endfn "kill__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"

.fn "doAnimation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020B030 00207F70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B034 00207F74  7C 08 02 A6 */	mflr r0
/* 8020B038 00207F78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B03C 00207F7C  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 8020B040 00207F80  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8020B044 00207F84  7D 89 03 A6 */	mtctr r12
/* 8020B048 00207F88  4E 80 04 21 */	bctrl 
/* 8020B04C 00207F8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B050 00207F90  7C 08 03 A6 */	mtlr r0
/* 8020B054 00207F94  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B058 00207F98  4E 80 00 20 */	blr 
.endfn "doAnimation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "doEntry__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020B05C 00207F9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B060 00207FA0  7C 08 02 A6 */	mflr r0
/* 8020B064 00207FA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B068 00207FA8  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 8020B06C 00207FAC  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8020B070 00207FB0  7D 89 03 A6 */	mtctr r12
/* 8020B074 00207FB4  4E 80 04 21 */	bctrl 
/* 8020B078 00207FB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B07C 00207FBC  7C 08 03 A6 */	mtlr r0
/* 8020B080 00207FC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B084 00207FC4  4E 80 00 20 */	blr 
.endfn "doEntry__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "doSetView__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fi", weak
/* 8020B088 00207FC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B08C 00207FCC  7C 08 02 A6 */	mflr r0
/* 8020B090 00207FD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B094 00207FD4  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 8020B098 00207FD8  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8020B09C 00207FDC  7D 89 03 A6 */	mtctr r12
/* 8020B0A0 00207FE0  4E 80 04 21 */	bctrl 
/* 8020B0A4 00207FE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B0A8 00207FE8  7C 08 03 A6 */	mtlr r0
/* 8020B0AC 00207FEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B0B0 00207FF0  4E 80 00 20 */	blr 
.endfn "doSetView__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fi"

.fn "doViewCalc__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020B0B4 00207FF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B0B8 00207FF8  7C 08 02 A6 */	mflr r0
/* 8020B0BC 00207FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B0C0 00208000  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 8020B0C4 00208004  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8020B0C8 00208008  7D 89 03 A6 */	mtctr r12
/* 8020B0CC 0020800C  4E 80 04 21 */	bctrl 
/* 8020B0D0 00208010  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B0D4 00208014  7C 08 03 A6 */	mtlr r0
/* 8020B0D8 00208018  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B0DC 0020801C  4E 80 00 20 */	blr 
.endfn "doViewCalc__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "doSimulation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Ff", weak
/* 8020B0E0 00208020  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B0E4 00208024  7C 08 02 A6 */	mflr r0
/* 8020B0E8 00208028  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B0EC 0020802C  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 8020B0F0 00208030  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8020B0F4 00208034  7D 89 03 A6 */	mtctr r12
/* 8020B0F8 00208038  4E 80 04 21 */	bctrl 
/* 8020B0FC 0020803C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B100 00208040  7C 08 03 A6 */	mtlr r0
/* 8020B104 00208044  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B108 00208048  4E 80 00 20 */	blr 
.endfn "doSimulation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Ff"

.fn "doDirectDraw__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FR8Graphics", weak
/* 8020B10C 0020804C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B110 00208050  7C 08 02 A6 */	mflr r0
/* 8020B114 00208054  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B118 00208058  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 8020B11C 0020805C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8020B120 00208060  7D 89 03 A6 */	mtctr r12
/* 8020B124 00208064  4E 80 04 21 */	bctrl 
/* 8020B128 00208068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B12C 0020806C  7C 08 03 A6 */	mtlr r0
/* 8020B130 00208070  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B134 00208074  4E 80 00 20 */	blr 
.endfn "doDirectDraw__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"

.fn "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf", weak
/* 8020B138 00208078  4E 80 00 20 */	blr 
.endfn "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"

.fn "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent", weak
/* 8020B13C 0020807C  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"

.fn "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle", weak
/* 8020B140 00208080  4E 80 00 20 */	blr 
.endfn "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"

.fn "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent", weak
/* 8020B144 00208084  4E 80 00 20 */	blr 
.endfn "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"

.fn "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent", weak
/* 8020B148 00208088  4E 80 00 20 */	blr 
.endfn "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"

.fn "init__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg", weak
/* 8020B14C 0020808C  4E 80 00 20 */	blr 
.endfn "init__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg"

.fn "exec__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item", weak
/* 8020B150 00208090  4E 80 00 20 */	blr 
.endfn "exec__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"

.fn "cleanup__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item", weak
/* 8020B154 00208094  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"

.fn "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item", weak
/* 8020B158 00208098  4E 80 00 20 */	blr 
.endfn "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"

.fn "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item", weak
/* 8020B15C 0020809C  4E 80 00 20 */	blr 
.endfn "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"

.fn "init__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item", weak
/* 8020B160 002080A0  4E 80 00 20 */	blr 
.endfn "init__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"

.fn "create__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>Fi", weak
/* 8020B164 002080A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B168 002080A8  7C 08 02 A6 */	mflr r0
/* 8020B16C 002080AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B170 002080B0  38 00 00 00 */	li r0, 0
/* 8020B174 002080B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020B178 002080B8  7C 7F 1B 78 */	mr r31, r3
/* 8020B17C 002080BC  90 83 00 0C */	stw r4, 0xc(r3)
/* 8020B180 002080C0  90 03 00 08 */	stw r0, 8(r3)
/* 8020B184 002080C4  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8020B188 002080C8  54 03 10 3A */	slwi r3, r0, 2
/* 8020B18C 002080CC  4B E1 8E 21 */	bl __nwa__FUl
/* 8020B190 002080D0  90 7F 00 04 */	stw r3, 4(r31)
/* 8020B194 002080D4  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8020B198 002080D8  54 03 10 3A */	slwi r3, r0, 2
/* 8020B19C 002080DC  4B E1 8E 11 */	bl __nwa__FUl
/* 8020B1A0 002080E0  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8020B1A4 002080E4  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8020B1A8 002080E8  54 03 10 3A */	slwi r3, r0, 2
/* 8020B1AC 002080EC  4B E1 8E 01 */	bl __nwa__FUl
/* 8020B1B0 002080F0  90 7F 00 14 */	stw r3, 0x14(r31)
/* 8020B1B4 002080F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B1B8 002080F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020B1BC 002080FC  7C 08 03 A6 */	mtlr r0
/* 8020B1C0 00208100  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B1C4 00208104  4E 80 00 20 */	blr 
.endfn "create__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>Fi"

.fn "get__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>FPv", weak
/* 8020B1C8 00208108  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8020B1CC 0020810C  4E 80 00 20 */	blr 
.endfn "get__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>FPv"

.fn "getNext__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>FPv", weak
/* 8020B1D0 00208110  80 64 00 04 */	lwz r3, 4(r4)
/* 8020B1D4 00208114  4E 80 00 20 */	blr 
.endfn "getNext__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>FPv"

.fn "getStart__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020B1D8 00208118  80 63 00 30 */	lwz r3, 0x30(r3)
/* 8020B1DC 0020811C  4E 80 00 20 */	blr 
.endfn "getStart__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "getEnd__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020B1E0 00208120  38 60 00 00 */	li r3, 0
/* 8020B1E4 00208124  4E 80 00 20 */	blr 
.endfn "getEnd__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "delNode__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item", weak
/* 8020B1E8 00208128  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B1EC 0020812C  7C 08 02 A6 */	mflr r0
/* 8020B1F0 00208130  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B1F4 00208134  80 63 00 30 */	lwz r3, 0x30(r3)
/* 8020B1F8 00208138  48 00 00 1C */	b .L_8020B214
.L_8020B1FC:
/* 8020B1FC 0020813C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8020B200 00208140  7C 00 20 40 */	cmplw r0, r4
/* 8020B204 00208144  40 82 00 0C */	bne .L_8020B210
/* 8020B208 00208148  48 20 63 C9 */	bl del__5CNodeFv
/* 8020B20C 0020814C  48 00 00 10 */	b .L_8020B21C
.L_8020B210:
/* 8020B210 00208150  80 63 00 04 */	lwz r3, 4(r3)
.L_8020B214:
/* 8020B214 00208154  28 03 00 00 */	cmplwi r3, 0
/* 8020B218 00208158  40 82 FF E4 */	bne .L_8020B1FC
.L_8020B21C:
/* 8020B21C 0020815C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B220 00208160  7C 08 03 A6 */	mtlr r0
/* 8020B224 00208164  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B228 00208168  4E 80 00 20 */	blr 
.endfn "delNode__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"

.fn "resetMgr__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020B22C 0020816C  38 00 00 00 */	li r0, 0
/* 8020B230 00208170  90 03 00 30 */	stw r0, 0x30(r3)
/* 8020B234 00208174  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8020B238 00208178  90 03 00 28 */	stw r0, 0x28(r3)
/* 8020B23C 0020817C  90 03 00 24 */	stw r0, 0x24(r3)
/* 8020B240 00208180  4E 80 00 20 */	blr 
.endfn "resetMgr__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "birth__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B244 00208184  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B248 00208188  7C 08 02 A6 */	mflr r0
/* 8020B24C 0020818C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B250 00208190  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020B254 00208194  7C 7F 1B 78 */	mr r31, r3
/* 8020B258 00208198  48 00 03 4D */	bl "getEmptyIndex__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
/* 8020B25C 0020819C  2C 03 FF FF */	cmpwi r3, -1
/* 8020B260 002081A0  41 82 00 2C */	beq .L_8020B28C
/* 8020B264 002081A4  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 8020B268 002081A8  38 00 00 00 */	li r0, 0
/* 8020B26C 002081AC  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 8020B270 002081B0  1C A3 00 C8 */	mulli r5, r3, 0xc8
/* 8020B274 002081B4  7C 04 19 AE */	stbx r0, r4, r3
/* 8020B278 002081B8  7C 66 2A 14 */	add r3, r6, r5
/* 8020B27C 002081BC  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 8020B280 002081C0  38 04 00 01 */	addi r0, r4, 1
/* 8020B284 002081C4  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8020B288 002081C8  48 00 00 08 */	b .L_8020B290
.L_8020B28C:
/* 8020B28C 002081CC  38 60 00 00 */	li r3, 0
.L_8020B290:
/* 8020B290 002081D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B294 002081D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020B298 002081D8  7C 08 03 A6 */	mtlr r0
/* 8020B29C 002081DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B2A0 002081E0  4E 80 00 20 */	blr 
.endfn "birth__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "kill__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FPQ34Game12ItemUjamushi3Uja", weak
/* 8020B2A4 002081E4  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8020B2A8 002081E8  38 C0 00 00 */	li r6, 0
/* 8020B2AC 002081EC  38 A0 00 00 */	li r5, 0
/* 8020B2B0 002081F0  7C 09 03 A6 */	mtctr r0
/* 8020B2B4 002081F4  2C 00 00 00 */	cmpwi r0, 0
/* 8020B2B8 002081F8  4C 81 00 20 */	blelr 
.L_8020B2BC:
/* 8020B2BC 002081FC  80 03 00 28 */	lwz r0, 0x28(r3)
/* 8020B2C0 00208200  7C 00 2A 14 */	add r0, r0, r5
/* 8020B2C4 00208204  7C 00 20 40 */	cmplw r0, r4
/* 8020B2C8 00208208  40 82 00 20 */	bne .L_8020B2E8
/* 8020B2CC 0020820C  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 8020B2D0 00208210  38 00 00 01 */	li r0, 1
/* 8020B2D4 00208214  7C 04 31 AE */	stbx r0, r4, r6
/* 8020B2D8 00208218  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8020B2DC 0020821C  38 04 FF FF */	addi r0, r4, -1
/* 8020B2E0 00208220  90 03 00 20 */	stw r0, 0x20(r3)
/* 8020B2E4 00208224  4E 80 00 20 */	blr 
.L_8020B2E8:
/* 8020B2E8 00208228  38 A5 00 C8 */	addi r5, r5, 0xc8
/* 8020B2EC 0020822C  38 C6 00 01 */	addi r6, r6, 1
/* 8020B2F0 00208230  42 00 FF CC */	bdnz .L_8020B2BC
/* 8020B2F4 00208234  4E 80 00 20 */	blr 
.endfn "kill__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FPQ34Game12ItemUjamushi3Uja"

.fn "getNext__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FPv", weak
/* 8020B2F8 00208238  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 8020B2FC 0020823C  38 C4 00 01 */	addi r6, r4, 1
/* 8020B300 00208240  7C 06 28 50 */	subf r0, r6, r5
/* 8020B304 00208244  7C 09 03 A6 */	mtctr r0
/* 8020B308 00208248  7C 06 28 00 */	cmpw r6, r5
/* 8020B30C 0020824C  40 80 00 24 */	bge .L_8020B330
.L_8020B310:
/* 8020B310 00208250  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 8020B314 00208254  7C 04 30 AE */	lbzx r0, r4, r6
/* 8020B318 00208258  28 00 00 00 */	cmplwi r0, 0
/* 8020B31C 0020825C  40 82 00 0C */	bne .L_8020B328
/* 8020B320 00208260  7C C3 33 78 */	mr r3, r6
/* 8020B324 00208264  4E 80 00 20 */	blr 
.L_8020B328:
/* 8020B328 00208268  38 C6 00 01 */	addi r6, r6, 1
/* 8020B32C 0020826C  42 00 FF E4 */	bdnz .L_8020B310
.L_8020B330:
/* 8020B330 00208270  7C A3 2B 78 */	mr r3, r5
/* 8020B334 00208274  4E 80 00 20 */	blr 
.endfn "getNext__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FPv"

.fn "getStart__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B338 00208278  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020B33C 0020827C  7C 08 02 A6 */	mflr r0
/* 8020B340 00208280  38 80 FF FF */	li r4, -1
/* 8020B344 00208284  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B348 00208288  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B34C 0020828C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020B350 00208290  7D 89 03 A6 */	mtctr r12
/* 8020B354 00208294  4E 80 04 21 */	bctrl 
/* 8020B358 00208298  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B35C 0020829C  7C 08 03 A6 */	mtlr r0
/* 8020B360 002082A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8020B364 002082A4  4E 80 00 20 */	blr 
.endfn "getStart__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "getEnd__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B368 002082A8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8020B36C 002082AC  4E 80 00 20 */	blr 
.endfn "getEnd__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "getTo__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B370 002082B0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8020B374 002082B4  4E 80 00 20 */	blr 
.endfn "getTo__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "doAnimation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B378 002082B8  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8020B37C 002082BC  38 A0 00 00 */	li r5, 0
/* 8020B380 002082C0  2C 04 00 00 */	cmpwi r4, 0
/* 8020B384 002082C4  4C 81 00 20 */	blelr 
/* 8020B388 002082C8  2C 04 00 08 */	cmpwi r4, 8
/* 8020B38C 002082CC  38 64 FF F8 */	addi r3, r4, -8
/* 8020B390 002082D0  40 81 00 20 */	ble .L_8020B3B0
/* 8020B394 002082D4  38 03 00 07 */	addi r0, r3, 7
/* 8020B398 002082D8  54 00 E8 FE */	srwi r0, r0, 3
/* 8020B39C 002082DC  7C 09 03 A6 */	mtctr r0
/* 8020B3A0 002082E0  2C 03 00 00 */	cmpwi r3, 0
/* 8020B3A4 002082E4  40 81 00 0C */	ble .L_8020B3B0
.L_8020B3A8:
/* 8020B3A8 002082E8  38 A5 00 08 */	addi r5, r5, 8
/* 8020B3AC 002082EC  42 00 FF FC */	bdnz .L_8020B3A8
.L_8020B3B0:
/* 8020B3B0 002082F0  7C 05 20 50 */	subf r0, r5, r4
/* 8020B3B4 002082F4  7C 09 03 A6 */	mtctr r0
/* 8020B3B8 002082F8  7C 05 20 00 */	cmpw r5, r4
/* 8020B3BC 002082FC  4C 80 00 20 */	bgelr 
.L_8020B3C0:
/* 8020B3C0 00208300  42 00 00 00 */	bdnz .L_8020B3C0
/* 8020B3C4 00208304  4E 80 00 20 */	blr 
.endfn "doAnimation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "doEntry__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B3C8 00208308  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8020B3CC 0020830C  38 A0 00 00 */	li r5, 0
/* 8020B3D0 00208310  2C 04 00 00 */	cmpwi r4, 0
/* 8020B3D4 00208314  4C 81 00 20 */	blelr 
/* 8020B3D8 00208318  2C 04 00 08 */	cmpwi r4, 8
/* 8020B3DC 0020831C  38 64 FF F8 */	addi r3, r4, -8
/* 8020B3E0 00208320  40 81 00 20 */	ble .L_8020B400
/* 8020B3E4 00208324  38 03 00 07 */	addi r0, r3, 7
/* 8020B3E8 00208328  54 00 E8 FE */	srwi r0, r0, 3
/* 8020B3EC 0020832C  7C 09 03 A6 */	mtctr r0
/* 8020B3F0 00208330  2C 03 00 00 */	cmpwi r3, 0
/* 8020B3F4 00208334  40 81 00 0C */	ble .L_8020B400
.L_8020B3F8:
/* 8020B3F8 00208338  38 A5 00 08 */	addi r5, r5, 8
/* 8020B3FC 0020833C  42 00 FF FC */	bdnz .L_8020B3F8
.L_8020B400:
/* 8020B400 00208340  7C 05 20 50 */	subf r0, r5, r4
/* 8020B404 00208344  7C 09 03 A6 */	mtctr r0
/* 8020B408 00208348  7C 05 20 00 */	cmpw r5, r4
/* 8020B40C 0020834C  4C 80 00 20 */	bgelr 
.L_8020B410:
/* 8020B410 00208350  42 00 00 00 */	bdnz .L_8020B410
/* 8020B414 00208354  4E 80 00 20 */	blr 
.endfn "doEntry__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "doSetView__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi", weak
/* 8020B418 00208358  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8020B41C 0020835C  38 A0 00 00 */	li r5, 0
/* 8020B420 00208360  2C 04 00 00 */	cmpwi r4, 0
/* 8020B424 00208364  4C 81 00 20 */	blelr 
/* 8020B428 00208368  2C 04 00 08 */	cmpwi r4, 8
/* 8020B42C 0020836C  38 64 FF F8 */	addi r3, r4, -8
/* 8020B430 00208370  40 81 00 20 */	ble .L_8020B450
/* 8020B434 00208374  38 03 00 07 */	addi r0, r3, 7
/* 8020B438 00208378  54 00 E8 FE */	srwi r0, r0, 3
/* 8020B43C 0020837C  7C 09 03 A6 */	mtctr r0
/* 8020B440 00208380  2C 03 00 00 */	cmpwi r3, 0
/* 8020B444 00208384  40 81 00 0C */	ble .L_8020B450
.L_8020B448:
/* 8020B448 00208388  38 A5 00 08 */	addi r5, r5, 8
/* 8020B44C 0020838C  42 00 FF FC */	bdnz .L_8020B448
.L_8020B450:
/* 8020B450 00208390  7C 05 20 50 */	subf r0, r5, r4
/* 8020B454 00208394  7C 09 03 A6 */	mtctr r0
/* 8020B458 00208398  7C 05 20 00 */	cmpw r5, r4
/* 8020B45C 0020839C  4C 80 00 20 */	bgelr 
.L_8020B460:
/* 8020B460 002083A0  42 00 00 00 */	bdnz .L_8020B460
/* 8020B464 002083A4  4E 80 00 20 */	blr 
.endfn "doSetView__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"

.fn "doViewCalc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B468 002083A8  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8020B46C 002083AC  38 A0 00 00 */	li r5, 0
/* 8020B470 002083B0  2C 04 00 00 */	cmpwi r4, 0
/* 8020B474 002083B4  4C 81 00 20 */	blelr 
/* 8020B478 002083B8  2C 04 00 08 */	cmpwi r4, 8
/* 8020B47C 002083BC  38 64 FF F8 */	addi r3, r4, -8
/* 8020B480 002083C0  40 81 00 20 */	ble .L_8020B4A0
/* 8020B484 002083C4  38 03 00 07 */	addi r0, r3, 7
/* 8020B488 002083C8  54 00 E8 FE */	srwi r0, r0, 3
/* 8020B48C 002083CC  7C 09 03 A6 */	mtctr r0
/* 8020B490 002083D0  2C 03 00 00 */	cmpwi r3, 0
/* 8020B494 002083D4  40 81 00 0C */	ble .L_8020B4A0
.L_8020B498:
/* 8020B498 002083D8  38 A5 00 08 */	addi r5, r5, 8
/* 8020B49C 002083DC  42 00 FF FC */	bdnz .L_8020B498
.L_8020B4A0:
/* 8020B4A0 002083E0  7C 05 20 50 */	subf r0, r5, r4
/* 8020B4A4 002083E4  7C 09 03 A6 */	mtctr r0
/* 8020B4A8 002083E8  7C 05 20 00 */	cmpw r5, r4
/* 8020B4AC 002083EC  4C 80 00 20 */	bgelr 
.L_8020B4B0:
/* 8020B4B0 002083F0  42 00 00 00 */	bdnz .L_8020B4B0
/* 8020B4B4 002083F4  4E 80 00 20 */	blr 
.endfn "doViewCalc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "doSimulation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Ff", weak
/* 8020B4B8 002083F8  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8020B4BC 002083FC  38 A0 00 00 */	li r5, 0
/* 8020B4C0 00208400  2C 04 00 00 */	cmpwi r4, 0
/* 8020B4C4 00208404  4C 81 00 20 */	blelr 
/* 8020B4C8 00208408  2C 04 00 08 */	cmpwi r4, 8
/* 8020B4CC 0020840C  38 64 FF F8 */	addi r3, r4, -8
/* 8020B4D0 00208410  40 81 00 20 */	ble .L_8020B4F0
/* 8020B4D4 00208414  38 03 00 07 */	addi r0, r3, 7
/* 8020B4D8 00208418  54 00 E8 FE */	srwi r0, r0, 3
/* 8020B4DC 0020841C  7C 09 03 A6 */	mtctr r0
/* 8020B4E0 00208420  2C 03 00 00 */	cmpwi r3, 0
/* 8020B4E4 00208424  40 81 00 0C */	ble .L_8020B4F0
.L_8020B4E8:
/* 8020B4E8 00208428  38 A5 00 08 */	addi r5, r5, 8
/* 8020B4EC 0020842C  42 00 FF FC */	bdnz .L_8020B4E8
.L_8020B4F0:
/* 8020B4F0 00208430  7C 05 20 50 */	subf r0, r5, r4
/* 8020B4F4 00208434  7C 09 03 A6 */	mtctr r0
/* 8020B4F8 00208438  7C 05 20 00 */	cmpw r5, r4
/* 8020B4FC 0020843C  4C 80 00 20 */	bgelr 
.L_8020B500:
/* 8020B500 00208440  42 00 00 00 */	bdnz .L_8020B500
/* 8020B504 00208444  4E 80 00 20 */	blr 
.endfn "doSimulation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"

.fn "doDirectDraw__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics", weak
/* 8020B508 00208448  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8020B50C 0020844C  38 A0 00 00 */	li r5, 0
/* 8020B510 00208450  2C 04 00 00 */	cmpwi r4, 0
/* 8020B514 00208454  4C 81 00 20 */	blelr 
/* 8020B518 00208458  2C 04 00 08 */	cmpwi r4, 8
/* 8020B51C 0020845C  38 64 FF F8 */	addi r3, r4, -8
/* 8020B520 00208460  40 81 00 20 */	ble .L_8020B540
/* 8020B524 00208464  38 03 00 07 */	addi r0, r3, 7
/* 8020B528 00208468  54 00 E8 FE */	srwi r0, r0, 3
/* 8020B52C 0020846C  7C 09 03 A6 */	mtctr r0
/* 8020B530 00208470  2C 03 00 00 */	cmpwi r3, 0
/* 8020B534 00208474  40 81 00 0C */	ble .L_8020B540
.L_8020B538:
/* 8020B538 00208478  38 A5 00 08 */	addi r5, r5, 8
/* 8020B53C 0020847C  42 00 FF FC */	bdnz .L_8020B538
.L_8020B540:
/* 8020B540 00208480  7C 05 20 50 */	subf r0, r5, r4
/* 8020B544 00208484  7C 09 03 A6 */	mtctr r0
/* 8020B548 00208488  7C 05 20 00 */	cmpw r5, r4
/* 8020B54C 0020848C  4C 80 00 20 */	bgelr 
.L_8020B550:
/* 8020B550 00208490  42 00 00 00 */	bdnz .L_8020B550
/* 8020B554 00208494  4E 80 00 20 */	blr 
.endfn "doDirectDraw__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"

.fn "resetMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B558 00208498  38 00 00 00 */	li r0, 0
/* 8020B55C 0020849C  90 03 00 28 */	stw r0, 0x28(r3)
/* 8020B560 002084A0  90 03 00 24 */	stw r0, 0x24(r3)
/* 8020B564 002084A4  90 03 00 20 */	stw r0, 0x20(r3)
/* 8020B568 002084A8  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8020B56C 002084AC  4E 80 00 20 */	blr 
.endfn "resetMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "clearMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B570 002084B0  38 00 00 00 */	li r0, 0
/* 8020B574 002084B4  38 C0 00 00 */	li r6, 0
/* 8020B578 002084B8  90 03 00 20 */	stw r0, 0x20(r3)
/* 8020B57C 002084BC  38 A0 00 01 */	li r5, 1
/* 8020B580 002084C0  48 00 00 10 */	b .L_8020B590
.L_8020B584:
/* 8020B584 002084C4  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 8020B588 002084C8  7C A4 31 AE */	stbx r5, r4, r6
/* 8020B58C 002084CC  38 C6 00 01 */	addi r6, r6, 1
.L_8020B590:
/* 8020B590 002084D0  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8020B594 002084D4  7C 06 00 00 */	cmpw r6, r0
/* 8020B598 002084D8  41 80 FF EC */	blt .L_8020B584
/* 8020B59C 002084DC  4E 80 00 20 */	blr 
.endfn "clearMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "onAlloc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B5A0 002084E0  4E 80 00 20 */	blr 
.endfn "onAlloc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "getEmptyIndex__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020B5A4 002084E4  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8020B5A8 002084E8  38 A0 00 00 */	li r5, 0
/* 8020B5AC 002084EC  7C 09 03 A6 */	mtctr r0
/* 8020B5B0 002084F0  2C 00 00 00 */	cmpwi r0, 0
/* 8020B5B4 002084F4  40 81 00 24 */	ble .L_8020B5D8
.L_8020B5B8:
/* 8020B5B8 002084F8  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 8020B5BC 002084FC  7C 04 28 AE */	lbzx r0, r4, r5
/* 8020B5C0 00208500  28 00 00 01 */	cmplwi r0, 1
/* 8020B5C4 00208504  40 82 00 0C */	bne .L_8020B5D0
/* 8020B5C8 00208508  7C A3 2B 78 */	mr r3, r5
/* 8020B5CC 0020850C  4E 80 00 20 */	blr 
.L_8020B5D0:
/* 8020B5D0 00208510  38 A5 00 01 */	addi r5, r5, 1
/* 8020B5D4 00208514  42 00 FF E4 */	bdnz .L_8020B5B8
.L_8020B5D8:
/* 8020B5D8 00208518  38 60 FF FF */	li r3, -1
/* 8020B5DC 0020851C  4E 80 00 20 */	blr 
.endfn "getEmptyIndex__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "get__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FPv", weak
/* 8020B5E0 00208520  1C 04 00 C8 */	mulli r0, r4, 0xc8
/* 8020B5E4 00208524  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8020B5E8 00208528  7C 63 02 14 */	add r3, r3, r0
/* 8020B5EC 0020852C  4E 80 00 20 */	blr 
.endfn "get__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FPv"

.fn "doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020B5F0 00208530  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020B5F4 00208534  7C 08 02 A6 */	mflr r0
/* 8020B5F8 00208538  3C 80 80 4C */	lis r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
/* 8020B5FC 0020853C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020B600 00208540  38 00 00 00 */	li r0, 0
/* 8020B604 00208544  38 84 F0 E0 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
/* 8020B608 00208548  28 00 00 00 */	cmplwi r0, 0
/* 8020B60C 0020854C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B610 00208550  90 81 00 08 */	stw r4, 8(r1)
/* 8020B614 00208554  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020B618 00208558  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020B61C 0020855C  40 82 00 1C */	bne .L_8020B638
/* 8020B620 00208560  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B624 00208564  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020B628 00208568  7D 89 03 A6 */	mtctr r12
/* 8020B62C 0020856C  4E 80 04 21 */	bctrl 
/* 8020B630 00208570  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020B634 00208574  48 00 01 70 */	b .L_8020B7A4
.L_8020B638:
/* 8020B638 00208578  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B63C 0020857C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020B640 00208580  7D 89 03 A6 */	mtctr r12
/* 8020B644 00208584  4E 80 04 21 */	bctrl 
/* 8020B648 00208588  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020B64C 0020858C  48 00 00 58 */	b .L_8020B6A4
.L_8020B650:
/* 8020B650 00208590  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B654 00208594  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B658 00208598  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B65C 0020859C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020B660 002085A0  7D 89 03 A6 */	mtctr r12
/* 8020B664 002085A4  4E 80 04 21 */	bctrl 
/* 8020B668 002085A8  7C 64 1B 78 */	mr r4, r3
/* 8020B66C 002085AC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020B670 002085B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B674 002085B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020B678 002085B8  7D 89 03 A6 */	mtctr r12
/* 8020B67C 002085BC  4E 80 04 21 */	bctrl 
/* 8020B680 002085C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020B684 002085C4  40 82 01 20 */	bne .L_8020B7A4
/* 8020B688 002085C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B68C 002085CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B690 002085D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B694 002085D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020B698 002085D8  7D 89 03 A6 */	mtctr r12
/* 8020B69C 002085DC  4E 80 04 21 */	bctrl 
/* 8020B6A0 002085E0  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020B6A4:
/* 8020B6A4 002085E4  81 81 00 08 */	lwz r12, 8(r1)
/* 8020B6A8 002085E8  38 61 00 08 */	addi r3, r1, 8
/* 8020B6AC 002085EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020B6B0 002085F0  7D 89 03 A6 */	mtctr r12
/* 8020B6B4 002085F4  4E 80 04 21 */	bctrl 
/* 8020B6B8 002085F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020B6BC 002085FC  41 82 FF 94 */	beq .L_8020B650
/* 8020B6C0 00208600  48 00 00 E4 */	b .L_8020B7A4
.L_8020B6C4:
/* 8020B6C4 00208604  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B6C8 00208608  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B6CC 0020860C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020B6D0 00208610  7D 89 03 A6 */	mtctr r12
/* 8020B6D4 00208614  4E 80 04 21 */	bctrl 
/* 8020B6D8 00208618  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B6DC 0020861C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8020B6E0 00208620  7D 89 03 A6 */	mtctr r12
/* 8020B6E4 00208624  4E 80 04 21 */	bctrl 
/* 8020B6E8 00208628  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B6EC 0020862C  28 00 00 00 */	cmplwi r0, 0
/* 8020B6F0 00208630  40 82 00 24 */	bne .L_8020B714
/* 8020B6F4 00208634  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B6F8 00208638  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B6FC 0020863C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B700 00208640  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020B704 00208644  7D 89 03 A6 */	mtctr r12
/* 8020B708 00208648  4E 80 04 21 */	bctrl 
/* 8020B70C 0020864C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020B710 00208650  48 00 00 94 */	b .L_8020B7A4
.L_8020B714:
/* 8020B714 00208654  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B718 00208658  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B71C 0020865C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B720 00208660  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020B724 00208664  7D 89 03 A6 */	mtctr r12
/* 8020B728 00208668  4E 80 04 21 */	bctrl 
/* 8020B72C 0020866C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020B730 00208670  48 00 00 58 */	b .L_8020B788
.L_8020B734:
/* 8020B734 00208674  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B738 00208678  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B73C 0020867C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B740 00208680  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020B744 00208684  7D 89 03 A6 */	mtctr r12
/* 8020B748 00208688  4E 80 04 21 */	bctrl 
/* 8020B74C 0020868C  7C 64 1B 78 */	mr r4, r3
/* 8020B750 00208690  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020B754 00208694  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B758 00208698  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020B75C 0020869C  7D 89 03 A6 */	mtctr r12
/* 8020B760 002086A0  4E 80 04 21 */	bctrl 
/* 8020B764 002086A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020B768 002086A8  40 82 00 3C */	bne .L_8020B7A4
/* 8020B76C 002086AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B770 002086B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B774 002086B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B778 002086B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020B77C 002086BC  7D 89 03 A6 */	mtctr r12
/* 8020B780 002086C0  4E 80 04 21 */	bctrl 
/* 8020B784 002086C4  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020B788:
/* 8020B788 002086C8  81 81 00 08 */	lwz r12, 8(r1)
/* 8020B78C 002086CC  38 61 00 08 */	addi r3, r1, 8
/* 8020B790 002086D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020B794 002086D4  7D 89 03 A6 */	mtctr r12
/* 8020B798 002086D8  4E 80 04 21 */	bctrl 
/* 8020B79C 002086DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020B7A0 002086E0  41 82 FF 94 */	beq .L_8020B734
.L_8020B7A4:
/* 8020B7A4 002086E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B7A8 002086E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B7AC 002086EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020B7B0 002086F0  7D 89 03 A6 */	mtctr r12
/* 8020B7B4 002086F4  4E 80 04 21 */	bctrl 
/* 8020B7B8 002086F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B7BC 002086FC  7C 04 18 40 */	cmplw r4, r3
/* 8020B7C0 00208700  40 82 FF 04 */	bne .L_8020B6C4
/* 8020B7C4 00208704  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020B7C8 00208708  7C 08 03 A6 */	mtlr r0
/* 8020B7CC 0020870C  38 21 00 20 */	addi r1, r1, 0x20
/* 8020B7D0 00208710  4E 80 00 20 */	blr 
.endfn "doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020B7D4 00208714  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020B7D8 00208718  7C 08 02 A6 */	mflr r0
/* 8020B7DC 0020871C  3C 80 80 4C */	lis r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
/* 8020B7E0 00208720  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020B7E4 00208724  38 00 00 00 */	li r0, 0
/* 8020B7E8 00208728  38 84 F0 E0 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
/* 8020B7EC 0020872C  28 00 00 00 */	cmplwi r0, 0
/* 8020B7F0 00208730  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B7F4 00208734  90 81 00 08 */	stw r4, 8(r1)
/* 8020B7F8 00208738  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020B7FC 0020873C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020B800 00208740  40 82 00 1C */	bne .L_8020B81C
/* 8020B804 00208744  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B808 00208748  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020B80C 0020874C  7D 89 03 A6 */	mtctr r12
/* 8020B810 00208750  4E 80 04 21 */	bctrl 
/* 8020B814 00208754  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020B818 00208758  48 00 01 70 */	b .L_8020B988
.L_8020B81C:
/* 8020B81C 0020875C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B820 00208760  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020B824 00208764  7D 89 03 A6 */	mtctr r12
/* 8020B828 00208768  4E 80 04 21 */	bctrl 
/* 8020B82C 0020876C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020B830 00208770  48 00 00 58 */	b .L_8020B888
.L_8020B834:
/* 8020B834 00208774  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B838 00208778  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B83C 0020877C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B840 00208780  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020B844 00208784  7D 89 03 A6 */	mtctr r12
/* 8020B848 00208788  4E 80 04 21 */	bctrl 
/* 8020B84C 0020878C  7C 64 1B 78 */	mr r4, r3
/* 8020B850 00208790  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020B854 00208794  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B858 00208798  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020B85C 0020879C  7D 89 03 A6 */	mtctr r12
/* 8020B860 002087A0  4E 80 04 21 */	bctrl 
/* 8020B864 002087A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020B868 002087A8  40 82 01 20 */	bne .L_8020B988
/* 8020B86C 002087AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B870 002087B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B874 002087B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B878 002087B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020B87C 002087BC  7D 89 03 A6 */	mtctr r12
/* 8020B880 002087C0  4E 80 04 21 */	bctrl 
/* 8020B884 002087C4  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020B888:
/* 8020B888 002087C8  81 81 00 08 */	lwz r12, 8(r1)
/* 8020B88C 002087CC  38 61 00 08 */	addi r3, r1, 8
/* 8020B890 002087D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020B894 002087D4  7D 89 03 A6 */	mtctr r12
/* 8020B898 002087D8  4E 80 04 21 */	bctrl 
/* 8020B89C 002087DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020B8A0 002087E0  41 82 FF 94 */	beq .L_8020B834
/* 8020B8A4 002087E4  48 00 00 E4 */	b .L_8020B988
.L_8020B8A8:
/* 8020B8A8 002087E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B8AC 002087EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B8B0 002087F0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020B8B4 002087F4  7D 89 03 A6 */	mtctr r12
/* 8020B8B8 002087F8  4E 80 04 21 */	bctrl 
/* 8020B8BC 002087FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B8C0 00208800  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8020B8C4 00208804  7D 89 03 A6 */	mtctr r12
/* 8020B8C8 00208808  4E 80 04 21 */	bctrl 
/* 8020B8CC 0020880C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020B8D0 00208810  28 00 00 00 */	cmplwi r0, 0
/* 8020B8D4 00208814  40 82 00 24 */	bne .L_8020B8F8
/* 8020B8D8 00208818  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B8DC 0020881C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B8E0 00208820  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B8E4 00208824  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020B8E8 00208828  7D 89 03 A6 */	mtctr r12
/* 8020B8EC 0020882C  4E 80 04 21 */	bctrl 
/* 8020B8F0 00208830  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020B8F4 00208834  48 00 00 94 */	b .L_8020B988
.L_8020B8F8:
/* 8020B8F8 00208838  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B8FC 0020883C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B900 00208840  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B904 00208844  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020B908 00208848  7D 89 03 A6 */	mtctr r12
/* 8020B90C 0020884C  4E 80 04 21 */	bctrl 
/* 8020B910 00208850  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020B914 00208854  48 00 00 58 */	b .L_8020B96C
.L_8020B918:
/* 8020B918 00208858  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B91C 0020885C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B920 00208860  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B924 00208864  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020B928 00208868  7D 89 03 A6 */	mtctr r12
/* 8020B92C 0020886C  4E 80 04 21 */	bctrl 
/* 8020B930 00208870  7C 64 1B 78 */	mr r4, r3
/* 8020B934 00208874  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020B938 00208878  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B93C 0020887C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020B940 00208880  7D 89 03 A6 */	mtctr r12
/* 8020B944 00208884  4E 80 04 21 */	bctrl 
/* 8020B948 00208888  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020B94C 0020888C  40 82 00 3C */	bne .L_8020B988
/* 8020B950 00208890  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B954 00208894  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B958 00208898  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B95C 0020889C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020B960 002088A0  7D 89 03 A6 */	mtctr r12
/* 8020B964 002088A4  4E 80 04 21 */	bctrl 
/* 8020B968 002088A8  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020B96C:
/* 8020B96C 002088AC  81 81 00 08 */	lwz r12, 8(r1)
/* 8020B970 002088B0  38 61 00 08 */	addi r3, r1, 8
/* 8020B974 002088B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020B978 002088B8  7D 89 03 A6 */	mtctr r12
/* 8020B97C 002088BC  4E 80 04 21 */	bctrl 
/* 8020B980 002088C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020B984 002088C4  41 82 FF 94 */	beq .L_8020B918
.L_8020B988:
/* 8020B988 002088C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020B98C 002088CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B990 002088D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020B994 002088D4  7D 89 03 A6 */	mtctr r12
/* 8020B998 002088D8  4E 80 04 21 */	bctrl 
/* 8020B99C 002088DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020B9A0 002088E0  7C 04 18 40 */	cmplw r4, r3
/* 8020B9A4 002088E4  40 82 FF 04 */	bne .L_8020B8A8
/* 8020B9A8 002088E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020B9AC 002088EC  7C 08 03 A6 */	mtlr r0
/* 8020B9B0 002088F0  38 21 00 20 */	addi r1, r1, 0x20
/* 8020B9B4 002088F4  4E 80 00 20 */	blr 
.endfn "doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi", weak
/* 8020B9B8 002088F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020B9BC 002088FC  7C 08 02 A6 */	mflr r0
/* 8020B9C0 00208900  3C A0 80 4C */	lis r5, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
/* 8020B9C4 00208904  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020B9C8 00208908  38 00 00 00 */	li r0, 0
/* 8020B9CC 0020890C  38 A5 F0 E0 */	addi r5, r5, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
/* 8020B9D0 00208910  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020B9D4 00208914  28 00 00 00 */	cmplwi r0, 0
/* 8020B9D8 00208918  7C 9F 23 78 */	mr r31, r4
/* 8020B9DC 0020891C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020B9E0 00208920  90 A1 00 08 */	stw r5, 8(r1)
/* 8020B9E4 00208924  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020B9E8 00208928  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020B9EC 0020892C  40 82 00 1C */	bne .L_8020BA08
/* 8020B9F0 00208930  81 83 00 00 */	lwz r12, 0(r3)
/* 8020B9F4 00208934  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020B9F8 00208938  7D 89 03 A6 */	mtctr r12
/* 8020B9FC 0020893C  4E 80 04 21 */	bctrl 
/* 8020BA00 00208940  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BA04 00208944  48 00 01 74 */	b .L_8020BB78
.L_8020BA08:
/* 8020BA08 00208948  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BA0C 0020894C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020BA10 00208950  7D 89 03 A6 */	mtctr r12
/* 8020BA14 00208954  4E 80 04 21 */	bctrl 
/* 8020BA18 00208958  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BA1C 0020895C  48 00 00 58 */	b .L_8020BA74
.L_8020BA20:
/* 8020BA20 00208960  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BA24 00208964  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BA28 00208968  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BA2C 0020896C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020BA30 00208970  7D 89 03 A6 */	mtctr r12
/* 8020BA34 00208974  4E 80 04 21 */	bctrl 
/* 8020BA38 00208978  7C 64 1B 78 */	mr r4, r3
/* 8020BA3C 0020897C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020BA40 00208980  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BA44 00208984  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BA48 00208988  7D 89 03 A6 */	mtctr r12
/* 8020BA4C 0020898C  4E 80 04 21 */	bctrl 
/* 8020BA50 00208990  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BA54 00208994  40 82 01 24 */	bne .L_8020BB78
/* 8020BA58 00208998  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BA5C 0020899C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BA60 002089A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BA64 002089A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BA68 002089A8  7D 89 03 A6 */	mtctr r12
/* 8020BA6C 002089AC  4E 80 04 21 */	bctrl 
/* 8020BA70 002089B0  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020BA74:
/* 8020BA74 002089B4  81 81 00 08 */	lwz r12, 8(r1)
/* 8020BA78 002089B8  38 61 00 08 */	addi r3, r1, 8
/* 8020BA7C 002089BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020BA80 002089C0  7D 89 03 A6 */	mtctr r12
/* 8020BA84 002089C4  4E 80 04 21 */	bctrl 
/* 8020BA88 002089C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BA8C 002089CC  41 82 FF 94 */	beq .L_8020BA20
/* 8020BA90 002089D0  48 00 00 E8 */	b .L_8020BB78
.L_8020BA94:
/* 8020BA94 002089D4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BA98 002089D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BA9C 002089DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020BAA0 002089E0  7D 89 03 A6 */	mtctr r12
/* 8020BAA4 002089E4  4E 80 04 21 */	bctrl 
/* 8020BAA8 002089E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BAAC 002089EC  7F E4 FB 78 */	mr r4, r31
/* 8020BAB0 002089F0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8020BAB4 002089F4  7D 89 03 A6 */	mtctr r12
/* 8020BAB8 002089F8  4E 80 04 21 */	bctrl 
/* 8020BABC 002089FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020BAC0 00208A00  28 00 00 00 */	cmplwi r0, 0
/* 8020BAC4 00208A04  40 82 00 24 */	bne .L_8020BAE8
/* 8020BAC8 00208A08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BACC 00208A0C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BAD0 00208A10  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BAD4 00208A14  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BAD8 00208A18  7D 89 03 A6 */	mtctr r12
/* 8020BADC 00208A1C  4E 80 04 21 */	bctrl 
/* 8020BAE0 00208A20  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BAE4 00208A24  48 00 00 94 */	b .L_8020BB78
.L_8020BAE8:
/* 8020BAE8 00208A28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BAEC 00208A2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BAF0 00208A30  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BAF4 00208A34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BAF8 00208A38  7D 89 03 A6 */	mtctr r12
/* 8020BAFC 00208A3C  4E 80 04 21 */	bctrl 
/* 8020BB00 00208A40  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BB04 00208A44  48 00 00 58 */	b .L_8020BB5C
.L_8020BB08:
/* 8020BB08 00208A48  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BB0C 00208A4C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BB10 00208A50  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BB14 00208A54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020BB18 00208A58  7D 89 03 A6 */	mtctr r12
/* 8020BB1C 00208A5C  4E 80 04 21 */	bctrl 
/* 8020BB20 00208A60  7C 64 1B 78 */	mr r4, r3
/* 8020BB24 00208A64  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020BB28 00208A68  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BB2C 00208A6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BB30 00208A70  7D 89 03 A6 */	mtctr r12
/* 8020BB34 00208A74  4E 80 04 21 */	bctrl 
/* 8020BB38 00208A78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BB3C 00208A7C  40 82 00 3C */	bne .L_8020BB78
/* 8020BB40 00208A80  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BB44 00208A84  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BB48 00208A88  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BB4C 00208A8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BB50 00208A90  7D 89 03 A6 */	mtctr r12
/* 8020BB54 00208A94  4E 80 04 21 */	bctrl 
/* 8020BB58 00208A98  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020BB5C:
/* 8020BB5C 00208A9C  81 81 00 08 */	lwz r12, 8(r1)
/* 8020BB60 00208AA0  38 61 00 08 */	addi r3, r1, 8
/* 8020BB64 00208AA4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020BB68 00208AA8  7D 89 03 A6 */	mtctr r12
/* 8020BB6C 00208AAC  4E 80 04 21 */	bctrl 
/* 8020BB70 00208AB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BB74 00208AB4  41 82 FF 94 */	beq .L_8020BB08
.L_8020BB78:
/* 8020BB78 00208AB8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BB7C 00208ABC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BB80 00208AC0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020BB84 00208AC4  7D 89 03 A6 */	mtctr r12
/* 8020BB88 00208AC8  4E 80 04 21 */	bctrl 
/* 8020BB8C 00208ACC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BB90 00208AD0  7C 04 18 40 */	cmplw r4, r3
/* 8020BB94 00208AD4  40 82 FF 00 */	bne .L_8020BA94
/* 8020BB98 00208AD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020BB9C 00208ADC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020BBA0 00208AE0  7C 08 03 A6 */	mtlr r0
/* 8020BBA4 00208AE4  38 21 00 20 */	addi r1, r1, 0x20
/* 8020BBA8 00208AE8  4E 80 00 20 */	blr 
.endfn "doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi"

.fn "doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020BBAC 00208AEC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020BBB0 00208AF0  7C 08 02 A6 */	mflr r0
/* 8020BBB4 00208AF4  3C 80 80 4C */	lis r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
/* 8020BBB8 00208AF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020BBBC 00208AFC  38 00 00 00 */	li r0, 0
/* 8020BBC0 00208B00  38 84 F0 E0 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
/* 8020BBC4 00208B04  28 00 00 00 */	cmplwi r0, 0
/* 8020BBC8 00208B08  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020BBCC 00208B0C  90 81 00 08 */	stw r4, 8(r1)
/* 8020BBD0 00208B10  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020BBD4 00208B14  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020BBD8 00208B18  40 82 00 1C */	bne .L_8020BBF4
/* 8020BBDC 00208B1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BBE0 00208B20  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020BBE4 00208B24  7D 89 03 A6 */	mtctr r12
/* 8020BBE8 00208B28  4E 80 04 21 */	bctrl 
/* 8020BBEC 00208B2C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BBF0 00208B30  48 00 01 70 */	b .L_8020BD60
.L_8020BBF4:
/* 8020BBF4 00208B34  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BBF8 00208B38  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020BBFC 00208B3C  7D 89 03 A6 */	mtctr r12
/* 8020BC00 00208B40  4E 80 04 21 */	bctrl 
/* 8020BC04 00208B44  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BC08 00208B48  48 00 00 58 */	b .L_8020BC60
.L_8020BC0C:
/* 8020BC0C 00208B4C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BC10 00208B50  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BC14 00208B54  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BC18 00208B58  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020BC1C 00208B5C  7D 89 03 A6 */	mtctr r12
/* 8020BC20 00208B60  4E 80 04 21 */	bctrl 
/* 8020BC24 00208B64  7C 64 1B 78 */	mr r4, r3
/* 8020BC28 00208B68  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020BC2C 00208B6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BC30 00208B70  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BC34 00208B74  7D 89 03 A6 */	mtctr r12
/* 8020BC38 00208B78  4E 80 04 21 */	bctrl 
/* 8020BC3C 00208B7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BC40 00208B80  40 82 01 20 */	bne .L_8020BD60
/* 8020BC44 00208B84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BC48 00208B88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BC4C 00208B8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BC50 00208B90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BC54 00208B94  7D 89 03 A6 */	mtctr r12
/* 8020BC58 00208B98  4E 80 04 21 */	bctrl 
/* 8020BC5C 00208B9C  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020BC60:
/* 8020BC60 00208BA0  81 81 00 08 */	lwz r12, 8(r1)
/* 8020BC64 00208BA4  38 61 00 08 */	addi r3, r1, 8
/* 8020BC68 00208BA8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020BC6C 00208BAC  7D 89 03 A6 */	mtctr r12
/* 8020BC70 00208BB0  4E 80 04 21 */	bctrl 
/* 8020BC74 00208BB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BC78 00208BB8  41 82 FF 94 */	beq .L_8020BC0C
/* 8020BC7C 00208BBC  48 00 00 E4 */	b .L_8020BD60
.L_8020BC80:
/* 8020BC80 00208BC0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BC84 00208BC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BC88 00208BC8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020BC8C 00208BCC  7D 89 03 A6 */	mtctr r12
/* 8020BC90 00208BD0  4E 80 04 21 */	bctrl 
/* 8020BC94 00208BD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BC98 00208BD8  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8020BC9C 00208BDC  7D 89 03 A6 */	mtctr r12
/* 8020BCA0 00208BE0  4E 80 04 21 */	bctrl 
/* 8020BCA4 00208BE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020BCA8 00208BE8  28 00 00 00 */	cmplwi r0, 0
/* 8020BCAC 00208BEC  40 82 00 24 */	bne .L_8020BCD0
/* 8020BCB0 00208BF0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BCB4 00208BF4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BCB8 00208BF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BCBC 00208BFC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BCC0 00208C00  7D 89 03 A6 */	mtctr r12
/* 8020BCC4 00208C04  4E 80 04 21 */	bctrl 
/* 8020BCC8 00208C08  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BCCC 00208C0C  48 00 00 94 */	b .L_8020BD60
.L_8020BCD0:
/* 8020BCD0 00208C10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BCD4 00208C14  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BCD8 00208C18  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BCDC 00208C1C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BCE0 00208C20  7D 89 03 A6 */	mtctr r12
/* 8020BCE4 00208C24  4E 80 04 21 */	bctrl 
/* 8020BCE8 00208C28  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BCEC 00208C2C  48 00 00 58 */	b .L_8020BD44
.L_8020BCF0:
/* 8020BCF0 00208C30  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BCF4 00208C34  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BCF8 00208C38  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BCFC 00208C3C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020BD00 00208C40  7D 89 03 A6 */	mtctr r12
/* 8020BD04 00208C44  4E 80 04 21 */	bctrl 
/* 8020BD08 00208C48  7C 64 1B 78 */	mr r4, r3
/* 8020BD0C 00208C4C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020BD10 00208C50  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BD14 00208C54  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BD18 00208C58  7D 89 03 A6 */	mtctr r12
/* 8020BD1C 00208C5C  4E 80 04 21 */	bctrl 
/* 8020BD20 00208C60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BD24 00208C64  40 82 00 3C */	bne .L_8020BD60
/* 8020BD28 00208C68  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BD2C 00208C6C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BD30 00208C70  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BD34 00208C74  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BD38 00208C78  7D 89 03 A6 */	mtctr r12
/* 8020BD3C 00208C7C  4E 80 04 21 */	bctrl 
/* 8020BD40 00208C80  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020BD44:
/* 8020BD44 00208C84  81 81 00 08 */	lwz r12, 8(r1)
/* 8020BD48 00208C88  38 61 00 08 */	addi r3, r1, 8
/* 8020BD4C 00208C8C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020BD50 00208C90  7D 89 03 A6 */	mtctr r12
/* 8020BD54 00208C94  4E 80 04 21 */	bctrl 
/* 8020BD58 00208C98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BD5C 00208C9C  41 82 FF 94 */	beq .L_8020BCF0
.L_8020BD60:
/* 8020BD60 00208CA0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BD64 00208CA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BD68 00208CA8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020BD6C 00208CAC  7D 89 03 A6 */	mtctr r12
/* 8020BD70 00208CB0  4E 80 04 21 */	bctrl 
/* 8020BD74 00208CB4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BD78 00208CB8  7C 04 18 40 */	cmplw r4, r3
/* 8020BD7C 00208CBC  40 82 FF 04 */	bne .L_8020BC80
/* 8020BD80 00208CC0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020BD84 00208CC4  7C 08 03 A6 */	mtlr r0
/* 8020BD88 00208CC8  38 21 00 20 */	addi r1, r1, 0x20
/* 8020BD8C 00208CCC  4E 80 00 20 */	blr 
.endfn "doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff", weak
/* 8020BD90 00208CD0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020BD94 00208CD4  7C 08 02 A6 */	mflr r0
/* 8020BD98 00208CD8  3C 80 80 4C */	lis r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
/* 8020BD9C 00208CDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020BDA0 00208CE0  38 00 00 00 */	li r0, 0
/* 8020BDA4 00208CE4  38 84 F0 E0 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
/* 8020BDA8 00208CE8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8020BDAC 00208CEC  FF E0 08 90 */	fmr f31, f1
/* 8020BDB0 00208CF0  28 00 00 00 */	cmplwi r0, 0
/* 8020BDB4 00208CF4  90 81 00 08 */	stw r4, 8(r1)
/* 8020BDB8 00208CF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020BDBC 00208CFC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020BDC0 00208D00  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020BDC4 00208D04  40 82 00 1C */	bne .L_8020BDE0
/* 8020BDC8 00208D08  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BDCC 00208D0C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020BDD0 00208D10  7D 89 03 A6 */	mtctr r12
/* 8020BDD4 00208D14  4E 80 04 21 */	bctrl 
/* 8020BDD8 00208D18  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BDDC 00208D1C  48 00 01 74 */	b .L_8020BF50
.L_8020BDE0:
/* 8020BDE0 00208D20  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BDE4 00208D24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020BDE8 00208D28  7D 89 03 A6 */	mtctr r12
/* 8020BDEC 00208D2C  4E 80 04 21 */	bctrl 
/* 8020BDF0 00208D30  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BDF4 00208D34  48 00 00 58 */	b .L_8020BE4C
.L_8020BDF8:
/* 8020BDF8 00208D38  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BDFC 00208D3C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BE00 00208D40  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BE04 00208D44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020BE08 00208D48  7D 89 03 A6 */	mtctr r12
/* 8020BE0C 00208D4C  4E 80 04 21 */	bctrl 
/* 8020BE10 00208D50  7C 64 1B 78 */	mr r4, r3
/* 8020BE14 00208D54  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020BE18 00208D58  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BE1C 00208D5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BE20 00208D60  7D 89 03 A6 */	mtctr r12
/* 8020BE24 00208D64  4E 80 04 21 */	bctrl 
/* 8020BE28 00208D68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BE2C 00208D6C  40 82 01 24 */	bne .L_8020BF50
/* 8020BE30 00208D70  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BE34 00208D74  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BE38 00208D78  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BE3C 00208D7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BE40 00208D80  7D 89 03 A6 */	mtctr r12
/* 8020BE44 00208D84  4E 80 04 21 */	bctrl 
/* 8020BE48 00208D88  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020BE4C:
/* 8020BE4C 00208D8C  81 81 00 08 */	lwz r12, 8(r1)
/* 8020BE50 00208D90  38 61 00 08 */	addi r3, r1, 8
/* 8020BE54 00208D94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020BE58 00208D98  7D 89 03 A6 */	mtctr r12
/* 8020BE5C 00208D9C  4E 80 04 21 */	bctrl 
/* 8020BE60 00208DA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BE64 00208DA4  41 82 FF 94 */	beq .L_8020BDF8
/* 8020BE68 00208DA8  48 00 00 E8 */	b .L_8020BF50
.L_8020BE6C:
/* 8020BE6C 00208DAC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BE70 00208DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BE74 00208DB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020BE78 00208DB8  7D 89 03 A6 */	mtctr r12
/* 8020BE7C 00208DBC  4E 80 04 21 */	bctrl 
/* 8020BE80 00208DC0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BE84 00208DC4  FC 20 F8 90 */	fmr f1, f31
/* 8020BE88 00208DC8  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8020BE8C 00208DCC  7D 89 03 A6 */	mtctr r12
/* 8020BE90 00208DD0  4E 80 04 21 */	bctrl 
/* 8020BE94 00208DD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020BE98 00208DD8  28 00 00 00 */	cmplwi r0, 0
/* 8020BE9C 00208DDC  40 82 00 24 */	bne .L_8020BEC0
/* 8020BEA0 00208DE0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BEA4 00208DE4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BEA8 00208DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BEAC 00208DEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BEB0 00208DF0  7D 89 03 A6 */	mtctr r12
/* 8020BEB4 00208DF4  4E 80 04 21 */	bctrl 
/* 8020BEB8 00208DF8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BEBC 00208DFC  48 00 00 94 */	b .L_8020BF50
.L_8020BEC0:
/* 8020BEC0 00208E00  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BEC4 00208E04  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BEC8 00208E08  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BECC 00208E0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BED0 00208E10  7D 89 03 A6 */	mtctr r12
/* 8020BED4 00208E14  4E 80 04 21 */	bctrl 
/* 8020BED8 00208E18  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BEDC 00208E1C  48 00 00 58 */	b .L_8020BF34
.L_8020BEE0:
/* 8020BEE0 00208E20  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BEE4 00208E24  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BEE8 00208E28  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BEEC 00208E2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020BEF0 00208E30  7D 89 03 A6 */	mtctr r12
/* 8020BEF4 00208E34  4E 80 04 21 */	bctrl 
/* 8020BEF8 00208E38  7C 64 1B 78 */	mr r4, r3
/* 8020BEFC 00208E3C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020BF00 00208E40  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BF04 00208E44  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BF08 00208E48  7D 89 03 A6 */	mtctr r12
/* 8020BF0C 00208E4C  4E 80 04 21 */	bctrl 
/* 8020BF10 00208E50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BF14 00208E54  40 82 00 3C */	bne .L_8020BF50
/* 8020BF18 00208E58  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BF1C 00208E5C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BF20 00208E60  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BF24 00208E64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020BF28 00208E68  7D 89 03 A6 */	mtctr r12
/* 8020BF2C 00208E6C  4E 80 04 21 */	bctrl 
/* 8020BF30 00208E70  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020BF34:
/* 8020BF34 00208E74  81 81 00 08 */	lwz r12, 8(r1)
/* 8020BF38 00208E78  38 61 00 08 */	addi r3, r1, 8
/* 8020BF3C 00208E7C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020BF40 00208E80  7D 89 03 A6 */	mtctr r12
/* 8020BF44 00208E84  4E 80 04 21 */	bctrl 
/* 8020BF48 00208E88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020BF4C 00208E8C  41 82 FF 94 */	beq .L_8020BEE0
.L_8020BF50:
/* 8020BF50 00208E90  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BF54 00208E94  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BF58 00208E98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020BF5C 00208E9C  7D 89 03 A6 */	mtctr r12
/* 8020BF60 00208EA0  4E 80 04 21 */	bctrl 
/* 8020BF64 00208EA4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BF68 00208EA8  7C 04 18 40 */	cmplw r4, r3
/* 8020BF6C 00208EAC  40 82 FF 00 */	bne .L_8020BE6C
/* 8020BF70 00208EB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020BF74 00208EB4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8020BF78 00208EB8  7C 08 03 A6 */	mtlr r0
/* 8020BF7C 00208EBC  38 21 00 20 */	addi r1, r1, 0x20
/* 8020BF80 00208EC0  4E 80 00 20 */	blr 
.endfn "doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff"

.fn "doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics", weak
/* 8020BF84 00208EC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020BF88 00208EC8  7C 08 02 A6 */	mflr r0
/* 8020BF8C 00208ECC  3C A0 80 4C */	lis r5, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
/* 8020BF90 00208ED0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020BF94 00208ED4  38 00 00 00 */	li r0, 0
/* 8020BF98 00208ED8  38 A5 F0 E0 */	addi r5, r5, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
/* 8020BF9C 00208EDC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020BFA0 00208EE0  28 00 00 00 */	cmplwi r0, 0
/* 8020BFA4 00208EE4  7C 9F 23 78 */	mr r31, r4
/* 8020BFA8 00208EE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020BFAC 00208EEC  90 A1 00 08 */	stw r5, 8(r1)
/* 8020BFB0 00208EF0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020BFB4 00208EF4  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020BFB8 00208EF8  40 82 00 1C */	bne .L_8020BFD4
/* 8020BFBC 00208EFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BFC0 00208F00  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020BFC4 00208F04  7D 89 03 A6 */	mtctr r12
/* 8020BFC8 00208F08  4E 80 04 21 */	bctrl 
/* 8020BFCC 00208F0C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BFD0 00208F10  48 00 01 74 */	b .L_8020C144
.L_8020BFD4:
/* 8020BFD4 00208F14  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BFD8 00208F18  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020BFDC 00208F1C  7D 89 03 A6 */	mtctr r12
/* 8020BFE0 00208F20  4E 80 04 21 */	bctrl 
/* 8020BFE4 00208F24  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020BFE8 00208F28  48 00 00 58 */	b .L_8020C040
.L_8020BFEC:
/* 8020BFEC 00208F2C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020BFF0 00208F30  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020BFF4 00208F34  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BFF8 00208F38  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020BFFC 00208F3C  7D 89 03 A6 */	mtctr r12
/* 8020C000 00208F40  4E 80 04 21 */	bctrl 
/* 8020C004 00208F44  7C 64 1B 78 */	mr r4, r3
/* 8020C008 00208F48  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C00C 00208F4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C010 00208F50  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C014 00208F54  7D 89 03 A6 */	mtctr r12
/* 8020C018 00208F58  4E 80 04 21 */	bctrl 
/* 8020C01C 00208F5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C020 00208F60  40 82 01 24 */	bne .L_8020C144
/* 8020C024 00208F64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C028 00208F68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C02C 00208F6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C030 00208F70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C034 00208F74  7D 89 03 A6 */	mtctr r12
/* 8020C038 00208F78  4E 80 04 21 */	bctrl 
/* 8020C03C 00208F7C  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C040:
/* 8020C040 00208F80  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C044 00208F84  38 61 00 08 */	addi r3, r1, 8
/* 8020C048 00208F88  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C04C 00208F8C  7D 89 03 A6 */	mtctr r12
/* 8020C050 00208F90  4E 80 04 21 */	bctrl 
/* 8020C054 00208F94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C058 00208F98  41 82 FF 94 */	beq .L_8020BFEC
/* 8020C05C 00208F9C  48 00 00 E8 */	b .L_8020C144
.L_8020C060:
/* 8020C060 00208FA0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C064 00208FA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C068 00208FA8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C06C 00208FAC  7D 89 03 A6 */	mtctr r12
/* 8020C070 00208FB0  4E 80 04 21 */	bctrl 
/* 8020C074 00208FB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C078 00208FB8  7F E4 FB 78 */	mr r4, r31
/* 8020C07C 00208FBC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8020C080 00208FC0  7D 89 03 A6 */	mtctr r12
/* 8020C084 00208FC4  4E 80 04 21 */	bctrl 
/* 8020C088 00208FC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020C08C 00208FCC  28 00 00 00 */	cmplwi r0, 0
/* 8020C090 00208FD0  40 82 00 24 */	bne .L_8020C0B4
/* 8020C094 00208FD4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C098 00208FD8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C09C 00208FDC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C0A0 00208FE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C0A4 00208FE4  7D 89 03 A6 */	mtctr r12
/* 8020C0A8 00208FE8  4E 80 04 21 */	bctrl 
/* 8020C0AC 00208FEC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C0B0 00208FF0  48 00 00 94 */	b .L_8020C144
.L_8020C0B4:
/* 8020C0B4 00208FF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C0B8 00208FF8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C0BC 00208FFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C0C0 00209000  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C0C4 00209004  7D 89 03 A6 */	mtctr r12
/* 8020C0C8 00209008  4E 80 04 21 */	bctrl 
/* 8020C0CC 0020900C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C0D0 00209010  48 00 00 58 */	b .L_8020C128
.L_8020C0D4:
/* 8020C0D4 00209014  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C0D8 00209018  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C0DC 0020901C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C0E0 00209020  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C0E4 00209024  7D 89 03 A6 */	mtctr r12
/* 8020C0E8 00209028  4E 80 04 21 */	bctrl 
/* 8020C0EC 0020902C  7C 64 1B 78 */	mr r4, r3
/* 8020C0F0 00209030  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C0F4 00209034  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C0F8 00209038  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C0FC 0020903C  7D 89 03 A6 */	mtctr r12
/* 8020C100 00209040  4E 80 04 21 */	bctrl 
/* 8020C104 00209044  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C108 00209048  40 82 00 3C */	bne .L_8020C144
/* 8020C10C 0020904C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C110 00209050  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C114 00209054  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C118 00209058  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C11C 0020905C  7D 89 03 A6 */	mtctr r12
/* 8020C120 00209060  4E 80 04 21 */	bctrl 
/* 8020C124 00209064  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C128:
/* 8020C128 00209068  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C12C 0020906C  38 61 00 08 */	addi r3, r1, 8
/* 8020C130 00209070  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C134 00209074  7D 89 03 A6 */	mtctr r12
/* 8020C138 00209078  4E 80 04 21 */	bctrl 
/* 8020C13C 0020907C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C140 00209080  41 82 FF 94 */	beq .L_8020C0D4
.L_8020C144:
/* 8020C144 00209084  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C148 00209088  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C14C 0020908C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020C150 00209090  7D 89 03 A6 */	mtctr r12
/* 8020C154 00209094  4E 80 04 21 */	bctrl 
/* 8020C158 00209098  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C15C 0020909C  7C 04 18 40 */	cmplw r4, r3
/* 8020C160 002090A0  40 82 FF 00 */	bne .L_8020C060
/* 8020C164 002090A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020C168 002090A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020C16C 002090AC  7C 08 03 A6 */	mtlr r0
/* 8020C170 002090B0  38 21 00 20 */	addi r1, r1, 0x20
/* 8020C174 002090B4  4E 80 00 20 */	blr 
.endfn "doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"

.fn "doAnimation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020C178 002090B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020C17C 002090BC  7C 08 02 A6 */	mflr r0
/* 8020C180 002090C0  3C 80 80 4C */	lis r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020C184 002090C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020C188 002090C8  38 00 00 00 */	li r0, 0
/* 8020C18C 002090CC  38 84 FA 28 */	addi r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
/* 8020C190 002090D0  28 00 00 00 */	cmplwi r0, 0
/* 8020C194 002090D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020C198 002090D8  90 81 00 08 */	stw r4, 8(r1)
/* 8020C19C 002090DC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020C1A0 002090E0  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020C1A4 002090E4  40 82 00 1C */	bne .L_8020C1C0
/* 8020C1A8 002090E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C1AC 002090EC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020C1B0 002090F0  7D 89 03 A6 */	mtctr r12
/* 8020C1B4 002090F4  4E 80 04 21 */	bctrl 
/* 8020C1B8 002090F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C1BC 002090FC  48 00 01 60 */	b .L_8020C31C
.L_8020C1C0:
/* 8020C1C0 00209100  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C1C4 00209104  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020C1C8 00209108  7D 89 03 A6 */	mtctr r12
/* 8020C1CC 0020910C  4E 80 04 21 */	bctrl 
/* 8020C1D0 00209110  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C1D4 00209114  48 00 00 58 */	b .L_8020C22C
.L_8020C1D8:
/* 8020C1D8 00209118  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C1DC 0020911C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C1E0 00209120  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C1E4 00209124  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C1E8 00209128  7D 89 03 A6 */	mtctr r12
/* 8020C1EC 0020912C  4E 80 04 21 */	bctrl 
/* 8020C1F0 00209130  7C 64 1B 78 */	mr r4, r3
/* 8020C1F4 00209134  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C1F8 00209138  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C1FC 0020913C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C200 00209140  7D 89 03 A6 */	mtctr r12
/* 8020C204 00209144  4E 80 04 21 */	bctrl 
/* 8020C208 00209148  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C20C 0020914C  40 82 01 10 */	bne .L_8020C31C
/* 8020C210 00209150  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C214 00209154  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C218 00209158  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C21C 0020915C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C220 00209160  7D 89 03 A6 */	mtctr r12
/* 8020C224 00209164  4E 80 04 21 */	bctrl 
/* 8020C228 00209168  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C22C:
/* 8020C22C 0020916C  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C230 00209170  38 61 00 08 */	addi r3, r1, 8
/* 8020C234 00209174  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C238 00209178  7D 89 03 A6 */	mtctr r12
/* 8020C23C 0020917C  4E 80 04 21 */	bctrl 
/* 8020C240 00209180  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C244 00209184  41 82 FF 94 */	beq .L_8020C1D8
/* 8020C248 00209188  48 00 00 D4 */	b .L_8020C31C
.L_8020C24C:
/* 8020C24C 0020918C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C250 00209190  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C254 00209194  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C258 00209198  7D 89 03 A6 */	mtctr r12
/* 8020C25C 0020919C  4E 80 04 21 */	bctrl 
/* 8020C260 002091A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020C264 002091A4  28 00 00 00 */	cmplwi r0, 0
/* 8020C268 002091A8  40 82 00 24 */	bne .L_8020C28C
/* 8020C26C 002091AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C270 002091B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C274 002091B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C278 002091B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C27C 002091BC  7D 89 03 A6 */	mtctr r12
/* 8020C280 002091C0  4E 80 04 21 */	bctrl 
/* 8020C284 002091C4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C288 002091C8  48 00 00 94 */	b .L_8020C31C
.L_8020C28C:
/* 8020C28C 002091CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C290 002091D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C294 002091D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C298 002091D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C29C 002091DC  7D 89 03 A6 */	mtctr r12
/* 8020C2A0 002091E0  4E 80 04 21 */	bctrl 
/* 8020C2A4 002091E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C2A8 002091E8  48 00 00 58 */	b .L_8020C300
.L_8020C2AC:
/* 8020C2AC 002091EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C2B0 002091F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C2B4 002091F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C2B8 002091F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C2BC 002091FC  7D 89 03 A6 */	mtctr r12
/* 8020C2C0 00209200  4E 80 04 21 */	bctrl 
/* 8020C2C4 00209204  7C 64 1B 78 */	mr r4, r3
/* 8020C2C8 00209208  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C2CC 0020920C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C2D0 00209210  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C2D4 00209214  7D 89 03 A6 */	mtctr r12
/* 8020C2D8 00209218  4E 80 04 21 */	bctrl 
/* 8020C2DC 0020921C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C2E0 00209220  40 82 00 3C */	bne .L_8020C31C
/* 8020C2E4 00209224  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C2E8 00209228  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C2EC 0020922C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C2F0 00209230  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C2F4 00209234  7D 89 03 A6 */	mtctr r12
/* 8020C2F8 00209238  4E 80 04 21 */	bctrl 
/* 8020C2FC 0020923C  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C300:
/* 8020C300 00209240  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C304 00209244  38 61 00 08 */	addi r3, r1, 8
/* 8020C308 00209248  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C30C 0020924C  7D 89 03 A6 */	mtctr r12
/* 8020C310 00209250  4E 80 04 21 */	bctrl 
/* 8020C314 00209254  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C318 00209258  41 82 FF 94 */	beq .L_8020C2AC
.L_8020C31C:
/* 8020C31C 0020925C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C320 00209260  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C324 00209264  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020C328 00209268  7D 89 03 A6 */	mtctr r12
/* 8020C32C 0020926C  4E 80 04 21 */	bctrl 
/* 8020C330 00209270  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C334 00209274  7C 04 18 40 */	cmplw r4, r3
/* 8020C338 00209278  40 82 FF 14 */	bne .L_8020C24C
/* 8020C33C 0020927C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020C340 00209280  7C 08 03 A6 */	mtlr r0
/* 8020C344 00209284  38 21 00 20 */	addi r1, r1, 0x20
/* 8020C348 00209288  4E 80 00 20 */	blr 
.endfn "doAnimation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "doEntry__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020C34C 0020928C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020C350 00209290  7C 08 02 A6 */	mflr r0
/* 8020C354 00209294  3C 80 80 4C */	lis r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020C358 00209298  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020C35C 0020929C  38 00 00 00 */	li r0, 0
/* 8020C360 002092A0  38 84 FA 28 */	addi r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
/* 8020C364 002092A4  28 00 00 00 */	cmplwi r0, 0
/* 8020C368 002092A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020C36C 002092AC  90 81 00 08 */	stw r4, 8(r1)
/* 8020C370 002092B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020C374 002092B4  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020C378 002092B8  40 82 00 1C */	bne .L_8020C394
/* 8020C37C 002092BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C380 002092C0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020C384 002092C4  7D 89 03 A6 */	mtctr r12
/* 8020C388 002092C8  4E 80 04 21 */	bctrl 
/* 8020C38C 002092CC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C390 002092D0  48 00 01 60 */	b .L_8020C4F0
.L_8020C394:
/* 8020C394 002092D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C398 002092D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020C39C 002092DC  7D 89 03 A6 */	mtctr r12
/* 8020C3A0 002092E0  4E 80 04 21 */	bctrl 
/* 8020C3A4 002092E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C3A8 002092E8  48 00 00 58 */	b .L_8020C400
.L_8020C3AC:
/* 8020C3AC 002092EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C3B0 002092F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C3B4 002092F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C3B8 002092F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C3BC 002092FC  7D 89 03 A6 */	mtctr r12
/* 8020C3C0 00209300  4E 80 04 21 */	bctrl 
/* 8020C3C4 00209304  7C 64 1B 78 */	mr r4, r3
/* 8020C3C8 00209308  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C3CC 0020930C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C3D0 00209310  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C3D4 00209314  7D 89 03 A6 */	mtctr r12
/* 8020C3D8 00209318  4E 80 04 21 */	bctrl 
/* 8020C3DC 0020931C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C3E0 00209320  40 82 01 10 */	bne .L_8020C4F0
/* 8020C3E4 00209324  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C3E8 00209328  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C3EC 0020932C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C3F0 00209330  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C3F4 00209334  7D 89 03 A6 */	mtctr r12
/* 8020C3F8 00209338  4E 80 04 21 */	bctrl 
/* 8020C3FC 0020933C  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C400:
/* 8020C400 00209340  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C404 00209344  38 61 00 08 */	addi r3, r1, 8
/* 8020C408 00209348  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C40C 0020934C  7D 89 03 A6 */	mtctr r12
/* 8020C410 00209350  4E 80 04 21 */	bctrl 
/* 8020C414 00209354  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C418 00209358  41 82 FF 94 */	beq .L_8020C3AC
/* 8020C41C 0020935C  48 00 00 D4 */	b .L_8020C4F0
.L_8020C420:
/* 8020C420 00209360  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C424 00209364  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C428 00209368  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C42C 0020936C  7D 89 03 A6 */	mtctr r12
/* 8020C430 00209370  4E 80 04 21 */	bctrl 
/* 8020C434 00209374  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020C438 00209378  28 00 00 00 */	cmplwi r0, 0
/* 8020C43C 0020937C  40 82 00 24 */	bne .L_8020C460
/* 8020C440 00209380  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C444 00209384  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C448 00209388  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C44C 0020938C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C450 00209390  7D 89 03 A6 */	mtctr r12
/* 8020C454 00209394  4E 80 04 21 */	bctrl 
/* 8020C458 00209398  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C45C 0020939C  48 00 00 94 */	b .L_8020C4F0
.L_8020C460:
/* 8020C460 002093A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C464 002093A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C468 002093A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C46C 002093AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C470 002093B0  7D 89 03 A6 */	mtctr r12
/* 8020C474 002093B4  4E 80 04 21 */	bctrl 
/* 8020C478 002093B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C47C 002093BC  48 00 00 58 */	b .L_8020C4D4
.L_8020C480:
/* 8020C480 002093C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C484 002093C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C488 002093C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C48C 002093CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C490 002093D0  7D 89 03 A6 */	mtctr r12
/* 8020C494 002093D4  4E 80 04 21 */	bctrl 
/* 8020C498 002093D8  7C 64 1B 78 */	mr r4, r3
/* 8020C49C 002093DC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C4A0 002093E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C4A4 002093E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C4A8 002093E8  7D 89 03 A6 */	mtctr r12
/* 8020C4AC 002093EC  4E 80 04 21 */	bctrl 
/* 8020C4B0 002093F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C4B4 002093F4  40 82 00 3C */	bne .L_8020C4F0
/* 8020C4B8 002093F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C4BC 002093FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C4C0 00209400  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C4C4 00209404  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C4C8 00209408  7D 89 03 A6 */	mtctr r12
/* 8020C4CC 0020940C  4E 80 04 21 */	bctrl 
/* 8020C4D0 00209410  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C4D4:
/* 8020C4D4 00209414  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C4D8 00209418  38 61 00 08 */	addi r3, r1, 8
/* 8020C4DC 0020941C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C4E0 00209420  7D 89 03 A6 */	mtctr r12
/* 8020C4E4 00209424  4E 80 04 21 */	bctrl 
/* 8020C4E8 00209428  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C4EC 0020942C  41 82 FF 94 */	beq .L_8020C480
.L_8020C4F0:
/* 8020C4F0 00209430  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C4F4 00209434  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C4F8 00209438  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020C4FC 0020943C  7D 89 03 A6 */	mtctr r12
/* 8020C500 00209440  4E 80 04 21 */	bctrl 
/* 8020C504 00209444  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C508 00209448  7C 04 18 40 */	cmplw r4, r3
/* 8020C50C 0020944C  40 82 FF 14 */	bne .L_8020C420
/* 8020C510 00209450  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020C514 00209454  7C 08 03 A6 */	mtlr r0
/* 8020C518 00209458  38 21 00 20 */	addi r1, r1, 0x20
/* 8020C51C 0020945C  4E 80 00 20 */	blr 
.endfn "doEntry__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "doSetView__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fi", weak
/* 8020C520 00209460  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020C524 00209464  7C 08 02 A6 */	mflr r0
/* 8020C528 00209468  3C 80 80 4C */	lis r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020C52C 0020946C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020C530 00209470  38 00 00 00 */	li r0, 0
/* 8020C534 00209474  38 84 FA 28 */	addi r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
/* 8020C538 00209478  28 00 00 00 */	cmplwi r0, 0
/* 8020C53C 0020947C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020C540 00209480  90 81 00 08 */	stw r4, 8(r1)
/* 8020C544 00209484  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020C548 00209488  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020C54C 0020948C  40 82 00 1C */	bne .L_8020C568
/* 8020C550 00209490  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C554 00209494  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020C558 00209498  7D 89 03 A6 */	mtctr r12
/* 8020C55C 0020949C  4E 80 04 21 */	bctrl 
/* 8020C560 002094A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C564 002094A4  48 00 01 60 */	b .L_8020C6C4
.L_8020C568:
/* 8020C568 002094A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C56C 002094AC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020C570 002094B0  7D 89 03 A6 */	mtctr r12
/* 8020C574 002094B4  4E 80 04 21 */	bctrl 
/* 8020C578 002094B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C57C 002094BC  48 00 00 58 */	b .L_8020C5D4
.L_8020C580:
/* 8020C580 002094C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C584 002094C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C588 002094C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C58C 002094CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C590 002094D0  7D 89 03 A6 */	mtctr r12
/* 8020C594 002094D4  4E 80 04 21 */	bctrl 
/* 8020C598 002094D8  7C 64 1B 78 */	mr r4, r3
/* 8020C59C 002094DC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C5A0 002094E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C5A4 002094E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C5A8 002094E8  7D 89 03 A6 */	mtctr r12
/* 8020C5AC 002094EC  4E 80 04 21 */	bctrl 
/* 8020C5B0 002094F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C5B4 002094F4  40 82 01 10 */	bne .L_8020C6C4
/* 8020C5B8 002094F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C5BC 002094FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C5C0 00209500  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C5C4 00209504  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C5C8 00209508  7D 89 03 A6 */	mtctr r12
/* 8020C5CC 0020950C  4E 80 04 21 */	bctrl 
/* 8020C5D0 00209510  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C5D4:
/* 8020C5D4 00209514  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C5D8 00209518  38 61 00 08 */	addi r3, r1, 8
/* 8020C5DC 0020951C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C5E0 00209520  7D 89 03 A6 */	mtctr r12
/* 8020C5E4 00209524  4E 80 04 21 */	bctrl 
/* 8020C5E8 00209528  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C5EC 0020952C  41 82 FF 94 */	beq .L_8020C580
/* 8020C5F0 00209530  48 00 00 D4 */	b .L_8020C6C4
.L_8020C5F4:
/* 8020C5F4 00209534  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C5F8 00209538  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C5FC 0020953C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C600 00209540  7D 89 03 A6 */	mtctr r12
/* 8020C604 00209544  4E 80 04 21 */	bctrl 
/* 8020C608 00209548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020C60C 0020954C  28 00 00 00 */	cmplwi r0, 0
/* 8020C610 00209550  40 82 00 24 */	bne .L_8020C634
/* 8020C614 00209554  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C618 00209558  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C61C 0020955C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C620 00209560  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C624 00209564  7D 89 03 A6 */	mtctr r12
/* 8020C628 00209568  4E 80 04 21 */	bctrl 
/* 8020C62C 0020956C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C630 00209570  48 00 00 94 */	b .L_8020C6C4
.L_8020C634:
/* 8020C634 00209574  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C638 00209578  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C63C 0020957C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C640 00209580  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C644 00209584  7D 89 03 A6 */	mtctr r12
/* 8020C648 00209588  4E 80 04 21 */	bctrl 
/* 8020C64C 0020958C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C650 00209590  48 00 00 58 */	b .L_8020C6A8
.L_8020C654:
/* 8020C654 00209594  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C658 00209598  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C65C 0020959C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C660 002095A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C664 002095A4  7D 89 03 A6 */	mtctr r12
/* 8020C668 002095A8  4E 80 04 21 */	bctrl 
/* 8020C66C 002095AC  7C 64 1B 78 */	mr r4, r3
/* 8020C670 002095B0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C674 002095B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C678 002095B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C67C 002095BC  7D 89 03 A6 */	mtctr r12
/* 8020C680 002095C0  4E 80 04 21 */	bctrl 
/* 8020C684 002095C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C688 002095C8  40 82 00 3C */	bne .L_8020C6C4
/* 8020C68C 002095CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C690 002095D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C694 002095D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C698 002095D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C69C 002095DC  7D 89 03 A6 */	mtctr r12
/* 8020C6A0 002095E0  4E 80 04 21 */	bctrl 
/* 8020C6A4 002095E4  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C6A8:
/* 8020C6A8 002095E8  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C6AC 002095EC  38 61 00 08 */	addi r3, r1, 8
/* 8020C6B0 002095F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C6B4 002095F4  7D 89 03 A6 */	mtctr r12
/* 8020C6B8 002095F8  4E 80 04 21 */	bctrl 
/* 8020C6BC 002095FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C6C0 00209600  41 82 FF 94 */	beq .L_8020C654
.L_8020C6C4:
/* 8020C6C4 00209604  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C6C8 00209608  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C6CC 0020960C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020C6D0 00209610  7D 89 03 A6 */	mtctr r12
/* 8020C6D4 00209614  4E 80 04 21 */	bctrl 
/* 8020C6D8 00209618  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C6DC 0020961C  7C 04 18 40 */	cmplw r4, r3
/* 8020C6E0 00209620  40 82 FF 14 */	bne .L_8020C5F4
/* 8020C6E4 00209624  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020C6E8 00209628  7C 08 03 A6 */	mtlr r0
/* 8020C6EC 0020962C  38 21 00 20 */	addi r1, r1, 0x20
/* 8020C6F0 00209630  4E 80 00 20 */	blr 
.endfn "doSetView__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"

.fn "doViewCalc__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020C6F4 00209634  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020C6F8 00209638  7C 08 02 A6 */	mflr r0
/* 8020C6FC 0020963C  3C 80 80 4C */	lis r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020C700 00209640  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020C704 00209644  38 00 00 00 */	li r0, 0
/* 8020C708 00209648  38 84 FA 28 */	addi r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
/* 8020C70C 0020964C  28 00 00 00 */	cmplwi r0, 0
/* 8020C710 00209650  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020C714 00209654  90 81 00 08 */	stw r4, 8(r1)
/* 8020C718 00209658  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020C71C 0020965C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020C720 00209660  40 82 00 1C */	bne .L_8020C73C
/* 8020C724 00209664  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C728 00209668  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020C72C 0020966C  7D 89 03 A6 */	mtctr r12
/* 8020C730 00209670  4E 80 04 21 */	bctrl 
/* 8020C734 00209674  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C738 00209678  48 00 01 60 */	b .L_8020C898
.L_8020C73C:
/* 8020C73C 0020967C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C740 00209680  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020C744 00209684  7D 89 03 A6 */	mtctr r12
/* 8020C748 00209688  4E 80 04 21 */	bctrl 
/* 8020C74C 0020968C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C750 00209690  48 00 00 58 */	b .L_8020C7A8
.L_8020C754:
/* 8020C754 00209694  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C758 00209698  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C75C 0020969C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C760 002096A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C764 002096A4  7D 89 03 A6 */	mtctr r12
/* 8020C768 002096A8  4E 80 04 21 */	bctrl 
/* 8020C76C 002096AC  7C 64 1B 78 */	mr r4, r3
/* 8020C770 002096B0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C774 002096B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C778 002096B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C77C 002096BC  7D 89 03 A6 */	mtctr r12
/* 8020C780 002096C0  4E 80 04 21 */	bctrl 
/* 8020C784 002096C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C788 002096C8  40 82 01 10 */	bne .L_8020C898
/* 8020C78C 002096CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C790 002096D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C794 002096D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C798 002096D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C79C 002096DC  7D 89 03 A6 */	mtctr r12
/* 8020C7A0 002096E0  4E 80 04 21 */	bctrl 
/* 8020C7A4 002096E4  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C7A8:
/* 8020C7A8 002096E8  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C7AC 002096EC  38 61 00 08 */	addi r3, r1, 8
/* 8020C7B0 002096F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C7B4 002096F4  7D 89 03 A6 */	mtctr r12
/* 8020C7B8 002096F8  4E 80 04 21 */	bctrl 
/* 8020C7BC 002096FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C7C0 00209700  41 82 FF 94 */	beq .L_8020C754
/* 8020C7C4 00209704  48 00 00 D4 */	b .L_8020C898
.L_8020C7C8:
/* 8020C7C8 00209708  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C7CC 0020970C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C7D0 00209710  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C7D4 00209714  7D 89 03 A6 */	mtctr r12
/* 8020C7D8 00209718  4E 80 04 21 */	bctrl 
/* 8020C7DC 0020971C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020C7E0 00209720  28 00 00 00 */	cmplwi r0, 0
/* 8020C7E4 00209724  40 82 00 24 */	bne .L_8020C808
/* 8020C7E8 00209728  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C7EC 0020972C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C7F0 00209730  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C7F4 00209734  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C7F8 00209738  7D 89 03 A6 */	mtctr r12
/* 8020C7FC 0020973C  4E 80 04 21 */	bctrl 
/* 8020C800 00209740  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C804 00209744  48 00 00 94 */	b .L_8020C898
.L_8020C808:
/* 8020C808 00209748  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C80C 0020974C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C810 00209750  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C814 00209754  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C818 00209758  7D 89 03 A6 */	mtctr r12
/* 8020C81C 0020975C  4E 80 04 21 */	bctrl 
/* 8020C820 00209760  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C824 00209764  48 00 00 58 */	b .L_8020C87C
.L_8020C828:
/* 8020C828 00209768  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C82C 0020976C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C830 00209770  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C834 00209774  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C838 00209778  7D 89 03 A6 */	mtctr r12
/* 8020C83C 0020977C  4E 80 04 21 */	bctrl 
/* 8020C840 00209780  7C 64 1B 78 */	mr r4, r3
/* 8020C844 00209784  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C848 00209788  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C84C 0020978C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C850 00209790  7D 89 03 A6 */	mtctr r12
/* 8020C854 00209794  4E 80 04 21 */	bctrl 
/* 8020C858 00209798  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C85C 0020979C  40 82 00 3C */	bne .L_8020C898
/* 8020C860 002097A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C864 002097A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C868 002097A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C86C 002097AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C870 002097B0  7D 89 03 A6 */	mtctr r12
/* 8020C874 002097B4  4E 80 04 21 */	bctrl 
/* 8020C878 002097B8  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C87C:
/* 8020C87C 002097BC  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C880 002097C0  38 61 00 08 */	addi r3, r1, 8
/* 8020C884 002097C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C888 002097C8  7D 89 03 A6 */	mtctr r12
/* 8020C88C 002097CC  4E 80 04 21 */	bctrl 
/* 8020C890 002097D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C894 002097D4  41 82 FF 94 */	beq .L_8020C828
.L_8020C898:
/* 8020C898 002097D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C89C 002097DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C8A0 002097E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020C8A4 002097E4  7D 89 03 A6 */	mtctr r12
/* 8020C8A8 002097E8  4E 80 04 21 */	bctrl 
/* 8020C8AC 002097EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C8B0 002097F0  7C 04 18 40 */	cmplw r4, r3
/* 8020C8B4 002097F4  40 82 FF 14 */	bne .L_8020C7C8
/* 8020C8B8 002097F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020C8BC 002097FC  7C 08 03 A6 */	mtlr r0
/* 8020C8C0 00209800  38 21 00 20 */	addi r1, r1, 0x20
/* 8020C8C4 00209804  4E 80 00 20 */	blr 
.endfn "doViewCalc__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "doSimulation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Ff", weak
/* 8020C8C8 00209808  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020C8CC 0020980C  7C 08 02 A6 */	mflr r0
/* 8020C8D0 00209810  3C 80 80 4C */	lis r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020C8D4 00209814  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020C8D8 00209818  38 00 00 00 */	li r0, 0
/* 8020C8DC 0020981C  38 84 FA 28 */	addi r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
/* 8020C8E0 00209820  28 00 00 00 */	cmplwi r0, 0
/* 8020C8E4 00209824  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020C8E8 00209828  90 81 00 08 */	stw r4, 8(r1)
/* 8020C8EC 0020982C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020C8F0 00209830  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020C8F4 00209834  40 82 00 1C */	bne .L_8020C910
/* 8020C8F8 00209838  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C8FC 0020983C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020C900 00209840  7D 89 03 A6 */	mtctr r12
/* 8020C904 00209844  4E 80 04 21 */	bctrl 
/* 8020C908 00209848  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C90C 0020984C  48 00 01 60 */	b .L_8020CA6C
.L_8020C910:
/* 8020C910 00209850  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C914 00209854  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020C918 00209858  7D 89 03 A6 */	mtctr r12
/* 8020C91C 0020985C  4E 80 04 21 */	bctrl 
/* 8020C920 00209860  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C924 00209864  48 00 00 58 */	b .L_8020C97C
.L_8020C928:
/* 8020C928 00209868  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C92C 0020986C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C930 00209870  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C934 00209874  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C938 00209878  7D 89 03 A6 */	mtctr r12
/* 8020C93C 0020987C  4E 80 04 21 */	bctrl 
/* 8020C940 00209880  7C 64 1B 78 */	mr r4, r3
/* 8020C944 00209884  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020C948 00209888  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C94C 0020988C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020C950 00209890  7D 89 03 A6 */	mtctr r12
/* 8020C954 00209894  4E 80 04 21 */	bctrl 
/* 8020C958 00209898  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C95C 0020989C  40 82 01 10 */	bne .L_8020CA6C
/* 8020C960 002098A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C964 002098A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C968 002098A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C96C 002098AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C970 002098B0  7D 89 03 A6 */	mtctr r12
/* 8020C974 002098B4  4E 80 04 21 */	bctrl 
/* 8020C978 002098B8  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020C97C:
/* 8020C97C 002098BC  81 81 00 08 */	lwz r12, 8(r1)
/* 8020C980 002098C0  38 61 00 08 */	addi r3, r1, 8
/* 8020C984 002098C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020C988 002098C8  7D 89 03 A6 */	mtctr r12
/* 8020C98C 002098CC  4E 80 04 21 */	bctrl 
/* 8020C990 002098D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020C994 002098D4  41 82 FF 94 */	beq .L_8020C928
/* 8020C998 002098D8  48 00 00 D4 */	b .L_8020CA6C
.L_8020C99C:
/* 8020C99C 002098DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C9A0 002098E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C9A4 002098E4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020C9A8 002098E8  7D 89 03 A6 */	mtctr r12
/* 8020C9AC 002098EC  4E 80 04 21 */	bctrl 
/* 8020C9B0 002098F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020C9B4 002098F4  28 00 00 00 */	cmplwi r0, 0
/* 8020C9B8 002098F8  40 82 00 24 */	bne .L_8020C9DC
/* 8020C9BC 002098FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C9C0 00209900  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C9C4 00209904  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C9C8 00209908  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C9CC 0020990C  7D 89 03 A6 */	mtctr r12
/* 8020C9D0 00209910  4E 80 04 21 */	bctrl 
/* 8020C9D4 00209914  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C9D8 00209918  48 00 00 94 */	b .L_8020CA6C
.L_8020C9DC:
/* 8020C9DC 0020991C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020C9E0 00209920  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020C9E4 00209924  81 83 00 00 */	lwz r12, 0(r3)
/* 8020C9E8 00209928  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020C9EC 0020992C  7D 89 03 A6 */	mtctr r12
/* 8020C9F0 00209930  4E 80 04 21 */	bctrl 
/* 8020C9F4 00209934  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020C9F8 00209938  48 00 00 58 */	b .L_8020CA50
.L_8020C9FC:
/* 8020C9FC 0020993C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CA00 00209940  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020CA04 00209944  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CA08 00209948  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020CA0C 0020994C  7D 89 03 A6 */	mtctr r12
/* 8020CA10 00209950  4E 80 04 21 */	bctrl 
/* 8020CA14 00209954  7C 64 1B 78 */	mr r4, r3
/* 8020CA18 00209958  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020CA1C 0020995C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CA20 00209960  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020CA24 00209964  7D 89 03 A6 */	mtctr r12
/* 8020CA28 00209968  4E 80 04 21 */	bctrl 
/* 8020CA2C 0020996C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020CA30 00209970  40 82 00 3C */	bne .L_8020CA6C
/* 8020CA34 00209974  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CA38 00209978  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020CA3C 0020997C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CA40 00209980  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020CA44 00209984  7D 89 03 A6 */	mtctr r12
/* 8020CA48 00209988  4E 80 04 21 */	bctrl 
/* 8020CA4C 0020998C  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020CA50:
/* 8020CA50 00209990  81 81 00 08 */	lwz r12, 8(r1)
/* 8020CA54 00209994  38 61 00 08 */	addi r3, r1, 8
/* 8020CA58 00209998  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020CA5C 0020999C  7D 89 03 A6 */	mtctr r12
/* 8020CA60 002099A0  4E 80 04 21 */	bctrl 
/* 8020CA64 002099A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020CA68 002099A8  41 82 FF 94 */	beq .L_8020C9FC
.L_8020CA6C:
/* 8020CA6C 002099AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CA70 002099B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CA74 002099B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020CA78 002099B8  7D 89 03 A6 */	mtctr r12
/* 8020CA7C 002099BC  4E 80 04 21 */	bctrl 
/* 8020CA80 002099C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020CA84 002099C4  7C 04 18 40 */	cmplw r4, r3
/* 8020CA88 002099C8  40 82 FF 14 */	bne .L_8020C99C
/* 8020CA8C 002099CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020CA90 002099D0  7C 08 03 A6 */	mtlr r0
/* 8020CA94 002099D4  38 21 00 20 */	addi r1, r1, 0x20
/* 8020CA98 002099D8  4E 80 00 20 */	blr 
.endfn "doSimulation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"

.fn "doDirectDraw__36ObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics", weak
/* 8020CA9C 002099DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020CAA0 002099E0  7C 08 02 A6 */	mflr r0
/* 8020CAA4 002099E4  3C 80 80 4C */	lis r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020CAA8 002099E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020CAAC 002099EC  38 00 00 00 */	li r0, 0
/* 8020CAB0 002099F0  38 84 FA 28 */	addi r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
/* 8020CAB4 002099F4  28 00 00 00 */	cmplwi r0, 0
/* 8020CAB8 002099F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020CABC 002099FC  90 81 00 08 */	stw r4, 8(r1)
/* 8020CAC0 00209A00  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020CAC4 00209A04  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020CAC8 00209A08  40 82 00 1C */	bne .L_8020CAE4
/* 8020CACC 00209A0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CAD0 00209A10  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020CAD4 00209A14  7D 89 03 A6 */	mtctr r12
/* 8020CAD8 00209A18  4E 80 04 21 */	bctrl 
/* 8020CADC 00209A1C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020CAE0 00209A20  48 00 01 60 */	b .L_8020CC40
.L_8020CAE4:
/* 8020CAE4 00209A24  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CAE8 00209A28  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020CAEC 00209A2C  7D 89 03 A6 */	mtctr r12
/* 8020CAF0 00209A30  4E 80 04 21 */	bctrl 
/* 8020CAF4 00209A34  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020CAF8 00209A38  48 00 00 58 */	b .L_8020CB50
.L_8020CAFC:
/* 8020CAFC 00209A3C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CB00 00209A40  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020CB04 00209A44  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CB08 00209A48  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020CB0C 00209A4C  7D 89 03 A6 */	mtctr r12
/* 8020CB10 00209A50  4E 80 04 21 */	bctrl 
/* 8020CB14 00209A54  7C 64 1B 78 */	mr r4, r3
/* 8020CB18 00209A58  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020CB1C 00209A5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CB20 00209A60  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020CB24 00209A64  7D 89 03 A6 */	mtctr r12
/* 8020CB28 00209A68  4E 80 04 21 */	bctrl 
/* 8020CB2C 00209A6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020CB30 00209A70  40 82 01 10 */	bne .L_8020CC40
/* 8020CB34 00209A74  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CB38 00209A78  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020CB3C 00209A7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CB40 00209A80  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020CB44 00209A84  7D 89 03 A6 */	mtctr r12
/* 8020CB48 00209A88  4E 80 04 21 */	bctrl 
/* 8020CB4C 00209A8C  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020CB50:
/* 8020CB50 00209A90  81 81 00 08 */	lwz r12, 8(r1)
/* 8020CB54 00209A94  38 61 00 08 */	addi r3, r1, 8
/* 8020CB58 00209A98  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020CB5C 00209A9C  7D 89 03 A6 */	mtctr r12
/* 8020CB60 00209AA0  4E 80 04 21 */	bctrl 
/* 8020CB64 00209AA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020CB68 00209AA8  41 82 FF 94 */	beq .L_8020CAFC
/* 8020CB6C 00209AAC  48 00 00 D4 */	b .L_8020CC40
.L_8020CB70:
/* 8020CB70 00209AB0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CB74 00209AB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CB78 00209AB8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020CB7C 00209ABC  7D 89 03 A6 */	mtctr r12
/* 8020CB80 00209AC0  4E 80 04 21 */	bctrl 
/* 8020CB84 00209AC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020CB88 00209AC8  28 00 00 00 */	cmplwi r0, 0
/* 8020CB8C 00209ACC  40 82 00 24 */	bne .L_8020CBB0
/* 8020CB90 00209AD0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CB94 00209AD4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020CB98 00209AD8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CB9C 00209ADC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020CBA0 00209AE0  7D 89 03 A6 */	mtctr r12
/* 8020CBA4 00209AE4  4E 80 04 21 */	bctrl 
/* 8020CBA8 00209AE8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020CBAC 00209AEC  48 00 00 94 */	b .L_8020CC40
.L_8020CBB0:
/* 8020CBB0 00209AF0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CBB4 00209AF4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020CBB8 00209AF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CBBC 00209AFC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020CBC0 00209B00  7D 89 03 A6 */	mtctr r12
/* 8020CBC4 00209B04  4E 80 04 21 */	bctrl 
/* 8020CBC8 00209B08  90 61 00 0C */	stw r3, 0xc(r1)
/* 8020CBCC 00209B0C  48 00 00 58 */	b .L_8020CC24
.L_8020CBD0:
/* 8020CBD0 00209B10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CBD4 00209B14  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020CBD8 00209B18  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CBDC 00209B1C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020CBE0 00209B20  7D 89 03 A6 */	mtctr r12
/* 8020CBE4 00209B24  4E 80 04 21 */	bctrl 
/* 8020CBE8 00209B28  7C 64 1B 78 */	mr r4, r3
/* 8020CBEC 00209B2C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8020CBF0 00209B30  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CBF4 00209B34  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020CBF8 00209B38  7D 89 03 A6 */	mtctr r12
/* 8020CBFC 00209B3C  4E 80 04 21 */	bctrl 
/* 8020CC00 00209B40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020CC04 00209B44  40 82 00 3C */	bne .L_8020CC40
/* 8020CC08 00209B48  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CC0C 00209B4C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020CC10 00209B50  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CC14 00209B54  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020CC18 00209B58  7D 89 03 A6 */	mtctr r12
/* 8020CC1C 00209B5C  4E 80 04 21 */	bctrl 
/* 8020CC20 00209B60  90 61 00 0C */	stw r3, 0xc(r1)
.L_8020CC24:
/* 8020CC24 00209B64  81 81 00 08 */	lwz r12, 8(r1)
/* 8020CC28 00209B68  38 61 00 08 */	addi r3, r1, 8
/* 8020CC2C 00209B6C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020CC30 00209B70  7D 89 03 A6 */	mtctr r12
/* 8020CC34 00209B74  4E 80 04 21 */	bctrl 
/* 8020CC38 00209B78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020CC3C 00209B7C  41 82 FF 94 */	beq .L_8020CBD0
.L_8020CC40:
/* 8020CC40 00209B80  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CC44 00209B84  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CC48 00209B88  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020CC4C 00209B8C  7D 89 03 A6 */	mtctr r12
/* 8020CC50 00209B90  4E 80 04 21 */	bctrl 
/* 8020CC54 00209B94  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8020CC58 00209B98  7C 04 18 40 */	cmplw r4, r3
/* 8020CC5C 00209B9C  40 82 FF 14 */	bne .L_8020CB70
/* 8020CC60 00209BA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020CC64 00209BA4  7C 08 03 A6 */	mtlr r0
/* 8020CC68 00209BA8  38 21 00 20 */	addi r1, r1, 0x20
/* 8020CC6C 00209BAC  4E 80 00 20 */	blr 
.endfn "doDirectDraw__36ObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"

.fn "getObject__37Container<Q34Game12ItemUjamushi4Item>FPv", weak
/* 8020CC70 00209BB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020CC74 00209BB4  7C 08 02 A6 */	mflr r0
/* 8020CC78 00209BB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020CC7C 00209BBC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CC80 00209BC0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020CC84 00209BC4  7D 89 03 A6 */	mtctr r12
/* 8020CC88 00209BC8  4E 80 04 21 */	bctrl 
/* 8020CC8C 00209BCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020CC90 00209BD0  7C 08 03 A6 */	mtlr r0
/* 8020CC94 00209BD4  38 21 00 10 */	addi r1, r1, 0x10
/* 8020CC98 00209BD8  4E 80 00 20 */	blr 
.endfn "getObject__37Container<Q34Game12ItemUjamushi4Item>FPv"

.fn "getAt__37Container<Q34Game12ItemUjamushi4Item>Fi", weak
/* 8020CC9C 00209BDC  38 60 00 00 */	li r3, 0
/* 8020CCA0 00209BE0  4E 80 00 20 */	blr 
.endfn "getAt__37Container<Q34Game12ItemUjamushi4Item>Fi"

.fn "getTo__37Container<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020CCA4 00209BE4  38 60 00 00 */	li r3, 0
/* 8020CCA8 00209BE8  4E 80 00 20 */	blr 
.endfn "getTo__37Container<Q34Game12ItemUjamushi4Item>Fv"

.fn "getObject__36Container<Q34Game12ItemUjamushi3Uja>FPv", weak
/* 8020CCAC 00209BEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020CCB0 00209BF0  7C 08 02 A6 */	mflr r0
/* 8020CCB4 00209BF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020CCB8 00209BF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CCBC 00209BFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020CCC0 00209C00  7D 89 03 A6 */	mtctr r12
/* 8020CCC4 00209C04  4E 80 04 21 */	bctrl 
/* 8020CCC8 00209C08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020CCCC 00209C0C  7C 08 03 A6 */	mtlr r0
/* 8020CCD0 00209C10  38 21 00 10 */	addi r1, r1, 0x10
/* 8020CCD4 00209C14  4E 80 00 20 */	blr 
.endfn "getObject__36Container<Q34Game12ItemUjamushi3Uja>FPv"

.fn "getAt__36Container<Q34Game12ItemUjamushi3Uja>Fi", weak
/* 8020CCD8 00209C18  38 60 00 00 */	li r3, 0
/* 8020CCDC 00209C1C  4E 80 00 20 */	blr 
.endfn "getAt__36Container<Q34Game12ItemUjamushi3Uja>Fi"

.fn "getTo__36Container<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020CCE0 00209C20  38 60 00 00 */	li r3, 0
/* 8020CCE4 00209C24  4E 80 00 20 */	blr 
.endfn "getTo__36Container<Q34Game12ItemUjamushi3Uja>Fv"

.fn "alloc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi", weak
/* 8020CCE8 00209C28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020CCEC 00209C2C  7C 08 02 A6 */	mflr r0
/* 8020CCF0 00209C30  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020CCF4 00209C34  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020CCF8 00209C38  7C 9F 23 78 */	mr r31, r4
/* 8020CCFC 00209C3C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020CD00 00209C40  7C 7E 1B 78 */	mr r30, r3
/* 8020CD04 00209C44  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020CD08 00209C48  7F FD FB 78 */	mr r29, r31
/* 8020CD0C 00209C4C  1C 7D 00 C8 */	mulli r3, r29, 0xc8
/* 8020CD10 00209C50  93 81 00 10 */	stw r28, 0x10(r1)
/* 8020CD14 00209C54  38 63 00 10 */	addi r3, r3, 0x10
/* 8020CD18 00209C58  4B E1 72 95 */	bl __nwa__FUl
/* 8020CD1C 00209C5C  3C 80 80 20 */	lis r4, __ct__Q34Game12ItemUjamushi3UjaFv@ha
/* 8020CD20 00209C60  7F A7 EB 78 */	mr r7, r29
/* 8020CD24 00209C64  38 84 61 D8 */	addi r4, r4, __ct__Q34Game12ItemUjamushi3UjaFv@l
/* 8020CD28 00209C68  38 A0 00 00 */	li r5, 0
/* 8020CD2C 00209C6C  38 C0 00 C8 */	li r6, 0xc8
/* 8020CD30 00209C70  4B EB 4C C1 */	bl __construct_new_array
/* 8020CD34 00209C74  90 7E 00 28 */	stw r3, 0x28(r30)
/* 8020CD38 00209C78  38 00 00 00 */	li r0, 0
/* 8020CD3C 00209C7C  7F A3 EB 78 */	mr r3, r29
/* 8020CD40 00209C80  93 FE 00 24 */	stw r31, 0x24(r30)
/* 8020CD44 00209C84  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8020CD48 00209C88  4B E1 72 65 */	bl __nwa__FUl
/* 8020CD4C 00209C8C  2C 1F 00 00 */	cmpwi r31, 0
/* 8020CD50 00209C90  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 8020CD54 00209C94  39 60 00 00 */	li r11, 0
/* 8020CD58 00209C98  40 81 00 B0 */	ble .L_8020CE08
/* 8020CD5C 00209C9C  2C 1F 00 08 */	cmpwi r31, 8
/* 8020CD60 00209CA0  38 7F FF F8 */	addi r3, r31, -8
/* 8020CD64 00209CA4  40 81 00 80 */	ble .L_8020CDE4
/* 8020CD68 00209CA8  38 03 00 07 */	addi r0, r3, 7
/* 8020CD6C 00209CAC  54 00 E8 FE */	srwi r0, r0, 3
/* 8020CD70 00209CB0  7C 09 03 A6 */	mtctr r0
/* 8020CD74 00209CB4  2C 03 00 00 */	cmpwi r3, 0
/* 8020CD78 00209CB8  40 81 00 6C */	ble .L_8020CDE4
.L_8020CD7C:
/* 8020CD7C 00209CBC  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 8020CD80 00209CC0  39 40 00 01 */	li r10, 1
/* 8020CD84 00209CC4  39 0B 00 01 */	addi r8, r11, 1
/* 8020CD88 00209CC8  38 EB 00 02 */	addi r7, r11, 2
/* 8020CD8C 00209CCC  7D 43 59 AE */	stbx r10, r3, r11
/* 8020CD90 00209CD0  38 CB 00 03 */	addi r6, r11, 3
/* 8020CD94 00209CD4  38 AB 00 04 */	addi r5, r11, 4
/* 8020CD98 00209CD8  38 8B 00 05 */	addi r4, r11, 5
/* 8020CD9C 00209CDC  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 8020CDA0 00209CE0  38 6B 00 06 */	addi r3, r11, 6
/* 8020CDA4 00209CE4  38 0B 00 07 */	addi r0, r11, 7
/* 8020CDA8 00209CE8  39 6B 00 08 */	addi r11, r11, 8
/* 8020CDAC 00209CEC  7D 49 41 AE */	stbx r10, r9, r8
/* 8020CDB0 00209CF0  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 8020CDB4 00209CF4  7D 48 39 AE */	stbx r10, r8, r7
/* 8020CDB8 00209CF8  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 8020CDBC 00209CFC  7D 47 31 AE */	stbx r10, r7, r6
/* 8020CDC0 00209D00  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 8020CDC4 00209D04  7D 46 29 AE */	stbx r10, r6, r5
/* 8020CDC8 00209D08  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 8020CDCC 00209D0C  7D 45 21 AE */	stbx r10, r5, r4
/* 8020CDD0 00209D10  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 8020CDD4 00209D14  7D 44 19 AE */	stbx r10, r4, r3
/* 8020CDD8 00209D18  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 8020CDDC 00209D1C  7D 43 01 AE */	stbx r10, r3, r0
/* 8020CDE0 00209D20  42 00 FF 9C */	bdnz .L_8020CD7C
.L_8020CDE4:
/* 8020CDE4 00209D24  7C 0B F8 50 */	subf r0, r11, r31
/* 8020CDE8 00209D28  38 80 00 01 */	li r4, 1
/* 8020CDEC 00209D2C  7C 09 03 A6 */	mtctr r0
/* 8020CDF0 00209D30  7C 0B F8 00 */	cmpw r11, r31
/* 8020CDF4 00209D34  40 80 00 14 */	bge .L_8020CE08
.L_8020CDF8:
/* 8020CDF8 00209D38  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 8020CDFC 00209D3C  7C 83 59 AE */	stbx r4, r3, r11
/* 8020CE00 00209D40  39 6B 00 01 */	addi r11, r11, 1
/* 8020CE04 00209D44  42 00 FF F4 */	bdnz .L_8020CDF8
.L_8020CE08:
/* 8020CE08 00209D48  7F C3 F3 78 */	mr r3, r30
/* 8020CE0C 00209D4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8020CE10 00209D50  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8020CE14 00209D54  7D 89 03 A6 */	mtctr r12
/* 8020CE18 00209D58  4E 80 04 21 */	bctrl 
/* 8020CE1C 00209D5C  3B 80 00 00 */	li r28, 0
/* 8020CE20 00209D60  3B A0 00 00 */	li r29, 0
/* 8020CE24 00209D64  48 00 00 24 */	b .L_8020CE48
.L_8020CE28:
/* 8020CE28 00209D68  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 8020CE2C 00209D6C  7C 60 EA 14 */	add r3, r0, r29
/* 8020CE30 00209D70  81 83 00 0C */	lwz r12, 0xc(r3)
/* 8020CE34 00209D74  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020CE38 00209D78  7D 89 03 A6 */	mtctr r12
/* 8020CE3C 00209D7C  4E 80 04 21 */	bctrl 
/* 8020CE40 00209D80  3B BD 00 C8 */	addi r29, r29, 0xc8
/* 8020CE44 00209D84  3B 9C 00 01 */	addi r28, r28, 1
.L_8020CE48:
/* 8020CE48 00209D88  7C 1C F8 00 */	cmpw r28, r31
/* 8020CE4C 00209D8C  41 80 FF DC */	blt .L_8020CE28
/* 8020CE50 00209D90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020CE54 00209D94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020CE58 00209D98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020CE5C 00209D9C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020CE60 00209DA0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8020CE64 00209DA4  7C 08 03 A6 */	mtlr r0
/* 8020CE68 00209DA8  38 21 00 20 */	addi r1, r1, 0x20
/* 8020CE6C 00209DAC  4E 80 00 20 */	blr 
.endfn "alloc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"

.fn "__ct__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020CE70 00209DB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020CE74 00209DB4  7C 08 02 A6 */	mflr r0
/* 8020CE78 00209DB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020CE7C 00209DBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020CE80 00209DC0  7C 7F 1B 78 */	mr r31, r3
/* 8020CE84 00209DC4  48 20 45 0D */	bl __ct__5CNodeFv
/* 8020CE88 00209DC8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8020CE8C 00209DCC  3C 60 80 4C */	lis r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020CE90 00209DD0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020CE94 00209DD4  3C C0 80 4B */	lis r6, __vt__16GenericObjectMgr@ha
/* 8020CE98 00209DD8  90 1F 00 00 */	stw r0, 0(r31)
/* 8020CE9C 00209DDC  38 03 F9 FC */	addi r0, r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
/* 8020CEA0 00209DE0  3C 80 80 4C */	lis r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020CEA4 00209DE4  3C 60 80 4C */	lis r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
/* 8020CEA8 00209DE8  90 1F 00 00 */	stw r0, 0(r31)
/* 8020CEAC 00209DEC  39 00 00 00 */	li r8, 0
/* 8020CEB0 00209DF0  38 E4 F8 84 */	addi r7, r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 8020CEB4 00209DF4  38 A3 F9 00 */	addi r5, r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
/* 8020CEB8 00209DF8  99 1F 00 18 */	stb r8, 0x18(r31)
/* 8020CEBC 00209DFC  38 06 B5 F0 */	addi r0, r6, __vt__16GenericObjectMgr@l
/* 8020CEC0 00209E00  38 C7 00 2C */	addi r6, r7, 0x2c
/* 8020CEC4 00209E04  38 85 00 2C */	addi r4, r5, 0x2c
/* 8020CEC8 00209E08  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8020CECC 00209E0C  38 00 00 01 */	li r0, 1
/* 8020CED0 00209E10  7F E3 FB 78 */	mr r3, r31
/* 8020CED4 00209E14  90 FF 00 00 */	stw r7, 0(r31)
/* 8020CED8 00209E18  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 8020CEDC 00209E1C  90 BF 00 00 */	stw r5, 0(r31)
/* 8020CEE0 00209E20  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 8020CEE4 00209E24  98 1F 00 18 */	stb r0, 0x18(r31)
/* 8020CEE8 00209E28  91 1F 00 24 */	stw r8, 0x24(r31)
/* 8020CEEC 00209E2C  91 1F 00 20 */	stw r8, 0x20(r31)
/* 8020CEF0 00209E30  91 1F 00 28 */	stw r8, 0x28(r31)
/* 8020CEF4 00209E34  91 1F 00 2C */	stw r8, 0x2c(r31)
/* 8020CEF8 00209E38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020CEFC 00209E3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020CF00 00209E40  7C 08 03 A6 */	mtlr r0
/* 8020CF04 00209E44  38 21 00 10 */	addi r1, r1, 0x10
/* 8020CF08 00209E48  4E 80 00 20 */	blr 
.endfn "__ct__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "transit__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg", weak
/* 8020CF0C 00209E4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020CF10 00209E50  7C 08 02 A6 */	mflr r0
/* 8020CF14 00209E54  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020CF18 00209E58  54 A0 10 3A */	slwi r0, r5, 2
/* 8020CF1C 00209E5C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8020CF20 00209E60  7C 7B 1B 78 */	mr r27, r3
/* 8020CF24 00209E64  7C 9C 23 78 */	mr r28, r4
/* 8020CF28 00209E68  7C DD 33 78 */	mr r29, r6
/* 8020CF2C 00209E6C  83 C4 01 DC */	lwz r30, 0x1dc(r4)
/* 8020CF30 00209E70  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8020CF34 00209E74  28 1E 00 00 */	cmplwi r30, 0
/* 8020CF38 00209E78  7F E3 00 2E */	lwzx r31, r3, r0
/* 8020CF3C 00209E7C  41 82 00 20 */	beq .L_8020CF5C
/* 8020CF40 00209E80  7F C3 F3 78 */	mr r3, r30
/* 8020CF44 00209E84  81 9E 00 00 */	lwz r12, 0(r30)
/* 8020CF48 00209E88  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020CF4C 00209E8C  7D 89 03 A6 */	mtctr r12
/* 8020CF50 00209E90  4E 80 04 21 */	bctrl 
/* 8020CF54 00209E94  80 1E 00 04 */	lwz r0, 4(r30)
/* 8020CF58 00209E98  90 1B 00 18 */	stw r0, 0x18(r27)
.L_8020CF5C:
/* 8020CF5C 00209E9C  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 8020CF60 00209EA0  7C 1F 00 00 */	cmpw r31, r0
/* 8020CF64 00209EA4  41 80 00 08 */	blt .L_8020CF6C
.L_8020CF68:
/* 8020CF68 00209EA8  48 00 00 00 */	b .L_8020CF68
.L_8020CF6C:
/* 8020CF6C 00209EAC  80 7B 00 04 */	lwz r3, 4(r27)
/* 8020CF70 00209EB0  57 E0 10 3A */	slwi r0, r31, 2
/* 8020CF74 00209EB4  7F 84 E3 78 */	mr r4, r28
/* 8020CF78 00209EB8  7F A5 EB 78 */	mr r5, r29
/* 8020CF7C 00209EBC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8020CF80 00209EC0  90 7C 01 DC */	stw r3, 0x1dc(r28)
/* 8020CF84 00209EC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020CF88 00209EC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020CF8C 00209ECC  7D 89 03 A6 */	mtctr r12
/* 8020CF90 00209ED0  4E 80 04 21 */	bctrl 
/* 8020CF94 00209ED4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8020CF98 00209ED8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020CF9C 00209EDC  7C 08 03 A6 */	mtlr r0
/* 8020CFA0 00209EE0  38 21 00 20 */	addi r1, r1, 0x20
/* 8020CFA4 00209EE4  4E 80 00 20 */	blr 
.endfn "transit__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"

.fn "registerState__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ24Game36FSMState<Q34Game12ItemUjamushi4Item>", weak
/* 8020CFA8 00209EE8  80 C3 00 08 */	lwz r6, 8(r3)
/* 8020CFAC 00209EEC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8020CFB0 00209EF0  7C 06 00 00 */	cmpw r6, r0
/* 8020CFB4 00209EF4  4C 80 00 20 */	bgelr 
/* 8020CFB8 00209EF8  80 A3 00 04 */	lwz r5, 4(r3)
/* 8020CFBC 00209EFC  54 C0 10 3A */	slwi r0, r6, 2
/* 8020CFC0 00209F00  7C 85 01 2E */	stwx r4, r5, r0
/* 8020CFC4 00209F04  80 A4 00 04 */	lwz r5, 4(r4)
/* 8020CFC8 00209F08  2C 05 00 00 */	cmpwi r5, 0
/* 8020CFCC 00209F0C  41 80 00 10 */	blt .L_8020CFDC
/* 8020CFD0 00209F10  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8020CFD4 00209F14  7C 05 00 00 */	cmpw r5, r0
/* 8020CFD8 00209F18  41 80 00 0C */	blt .L_8020CFE4
.L_8020CFDC:
/* 8020CFDC 00209F1C  38 00 00 00 */	li r0, 0
/* 8020CFE0 00209F20  48 00 00 08 */	b .L_8020CFE8
.L_8020CFE4:
/* 8020CFE4 00209F24  38 00 00 01 */	li r0, 1
.L_8020CFE8:
/* 8020CFE8 00209F28  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8020CFEC 00209F2C  4D 82 00 20 */	beqlr 
/* 8020CFF0 00209F30  90 64 00 08 */	stw r3, 8(r4)
/* 8020CFF4 00209F34  80 03 00 08 */	lwz r0, 8(r3)
/* 8020CFF8 00209F38  80 C4 00 04 */	lwz r6, 4(r4)
/* 8020CFFC 00209F3C  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 8020D000 00209F40  54 00 10 3A */	slwi r0, r0, 2
/* 8020D004 00209F44  7C C5 01 2E */	stwx r6, r5, r0
/* 8020D008 00209F48  80 04 00 04 */	lwz r0, 4(r4)
/* 8020D00C 00209F4C  80 A3 00 08 */	lwz r5, 8(r3)
/* 8020D010 00209F50  80 83 00 14 */	lwz r4, 0x14(r3)
/* 8020D014 00209F54  54 00 10 3A */	slwi r0, r0, 2
/* 8020D018 00209F58  7C A4 01 2E */	stwx r5, r4, r0
/* 8020D01C 00209F5C  80 83 00 08 */	lwz r4, 8(r3)
/* 8020D020 00209F60  38 04 00 01 */	addi r0, r4, 1
/* 8020D024 00209F64  90 03 00 08 */	stw r0, 8(r3)
/* 8020D028 00209F68  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ24Game36FSMState<Q34Game12ItemUjamushi4Item>"

.fn "exec__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item", weak
/* 8020D02C 00209F6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D030 00209F70  7C 08 02 A6 */	mflr r0
/* 8020D034 00209F74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D038 00209F78  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 8020D03C 00209F7C  28 03 00 00 */	cmplwi r3, 0
/* 8020D040 00209F80  41 82 00 14 */	beq .L_8020D054
/* 8020D044 00209F84  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D048 00209F88  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8020D04C 00209F8C  7D 89 03 A6 */	mtctr r12
/* 8020D050 00209F90  4E 80 04 21 */	bctrl 
.L_8020D054:
/* 8020D054 00209F94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D058 00209F98  7C 08 03 A6 */	mtlr r0
/* 8020D05C 00209F9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D060 00209FA0  4E 80 00 20 */	blr 
.endfn "exec__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"

.fn "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent", weak
/* 8020D064 00209FA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D068 00209FA8  7C 08 02 A6 */	mflr r0
/* 8020D06C 00209FAC  7C 66 1B 78 */	mr r6, r3
/* 8020D070 00209FB0  7C 85 23 78 */	mr r5, r4
/* 8020D074 00209FB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D078 00209FB8  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 8020D07C 00209FBC  28 03 00 00 */	cmplwi r3, 0
/* 8020D080 00209FC0  41 82 00 18 */	beq .L_8020D098
/* 8020D084 00209FC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D088 00209FC8  7C C4 33 78 */	mr r4, r6
/* 8020D08C 00209FCC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8020D090 00209FD0  7D 89 03 A6 */	mtctr r12
/* 8020D094 00209FD4  4E 80 04 21 */	bctrl 
.L_8020D098:
/* 8020D098 00209FD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D09C 00209FDC  7C 08 03 A6 */	mtlr r0
/* 8020D0A0 00209FE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D0A4 00209FE4  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"

.fn "platCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9PlatEvent", weak
/* 8020D0A8 00209FE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D0AC 00209FEC  7C 08 02 A6 */	mflr r0
/* 8020D0B0 00209FF0  7C 66 1B 78 */	mr r6, r3
/* 8020D0B4 00209FF4  7C 85 23 78 */	mr r5, r4
/* 8020D0B8 00209FF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D0BC 00209FFC  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 8020D0C0 0020A000  28 03 00 00 */	cmplwi r3, 0
/* 8020D0C4 0020A004  41 82 00 18 */	beq .L_8020D0DC
/* 8020D0C8 0020A008  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D0CC 0020A00C  7C C4 33 78 */	mr r4, r6
/* 8020D0D0 0020A010  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8020D0D4 0020A014  7D 89 03 A6 */	mtctr r12
/* 8020D0D8 0020A018  4E 80 04 21 */	bctrl 
.L_8020D0DC:
/* 8020D0DC 0020A01C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D0E0 0020A020  7C 08 03 A6 */	mtlr r0
/* 8020D0E4 0020A024  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D0E8 0020A028  4E 80 00 20 */	blr 
.endfn "platCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9PlatEvent"

.fn "collisionCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9CollEvent", weak
/* 8020D0EC 0020A02C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D0F0 0020A030  7C 08 02 A6 */	mflr r0
/* 8020D0F4 0020A034  7C 66 1B 78 */	mr r6, r3
/* 8020D0F8 0020A038  7C 85 23 78 */	mr r5, r4
/* 8020D0FC 0020A03C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D100 0020A040  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 8020D104 0020A044  28 03 00 00 */	cmplwi r3, 0
/* 8020D108 0020A048  41 82 00 18 */	beq .L_8020D120
/* 8020D10C 0020A04C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D110 0020A050  7C C4 33 78 */	mr r4, r6
/* 8020D114 0020A054  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8020D118 0020A058  7D 89 03 A6 */	mtctr r12
/* 8020D11C 0020A05C  4E 80 04 21 */	bctrl 
.L_8020D120:
/* 8020D120 0020A060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D124 0020A064  7C 08 03 A6 */	mtlr r0
/* 8020D128 0020A068  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D12C 0020A06C  4E 80 00 20 */	blr 
.endfn "collisionCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9CollEvent"

.fn "bounceCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FPQ23Sys8Triangle", weak
/* 8020D130 0020A070  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D134 0020A074  7C 08 02 A6 */	mflr r0
/* 8020D138 0020A078  7C 66 1B 78 */	mr r6, r3
/* 8020D13C 0020A07C  7C 85 23 78 */	mr r5, r4
/* 8020D140 0020A080  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D144 0020A084  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 8020D148 0020A088  28 03 00 00 */	cmplwi r3, 0
/* 8020D14C 0020A08C  41 82 00 18 */	beq .L_8020D164
/* 8020D150 0020A090  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D154 0020A094  7C C4 33 78 */	mr r4, r6
/* 8020D158 0020A098  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8020D15C 0020A09C  7D 89 03 A6 */	mtctr r12
/* 8020D160 0020A0A0  4E 80 04 21 */	bctrl 
.L_8020D164:
/* 8020D164 0020A0A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D168 0020A0A8  7C 08 03 A6 */	mtlr r0
/* 8020D16C 0020A0AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D170 0020A0B0  4E 80 00 20 */	blr 
.endfn "bounceCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FPQ23Sys8Triangle"

.fn "getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D174 0020A0B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D178 0020A0B8  7C 08 02 A6 */	mflr r0
/* 8020D17C 0020A0BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D180 0020A0C0  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 8020D184 0020A0C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020D188 0020A0C8  7D 89 03 A6 */	mtctr r12
/* 8020D18C 0020A0CC  4E 80 04 21 */	bctrl 
/* 8020D190 0020A0D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D194 0020A0D4  7C 08 03 A6 */	mtlr r0
/* 8020D198 0020A0D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D19C 0020A0DC  4E 80 00 20 */	blr 
.endfn "getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D1A0 0020A0E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D1A4 0020A0E4  7C 08 02 A6 */	mflr r0
/* 8020D1A8 0020A0E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D1AC 0020A0EC  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 8020D1B0 0020A0F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020D1B4 0020A0F4  7D 89 03 A6 */	mtctr r12
/* 8020D1B8 0020A0F8  4E 80 04 21 */	bctrl 
/* 8020D1BC 0020A0FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D1C0 0020A100  7C 08 03 A6 */	mtlr r0
/* 8020D1C4 0020A104  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D1C8 0020A108  4E 80 00 20 */	blr 
.endfn "getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv", weak
/* 8020D1CC 0020A10C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D1D0 0020A110  7C 08 02 A6 */	mflr r0
/* 8020D1D4 0020A114  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D1D8 0020A118  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 8020D1DC 0020A11C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020D1E0 0020A120  7D 89 03 A6 */	mtctr r12
/* 8020D1E4 0020A124  4E 80 04 21 */	bctrl 
/* 8020D1E8 0020A128  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D1EC 0020A12C  7C 08 03 A6 */	mtlr r0
/* 8020D1F0 0020A130  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D1F4 0020A134  4E 80 00 20 */	blr 
.endfn "getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"

.fn "get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv", weak
/* 8020D1F8 0020A138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D1FC 0020A13C  7C 08 02 A6 */	mflr r0
/* 8020D200 0020A140  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D204 0020A144  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 8020D208 0020A148  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020D20C 0020A14C  7D 89 03 A6 */	mtctr r12
/* 8020D210 0020A150  4E 80 04 21 */	bctrl 
/* 8020D214 0020A154  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D218 0020A158  7C 08 03 A6 */	mtlr r0
/* 8020D21C 0020A15C  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D220 0020A160  4E 80 00 20 */	blr 
.endfn "get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"

.fn "killAll__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D224 0020A164  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8020D228 0020A168  7C 08 02 A6 */	mflr r0
/* 8020D22C 0020A16C  3C 80 80 4C */	lis r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
/* 8020D230 0020A170  38 63 00 4C */	addi r3, r3, 0x4c
/* 8020D234 0020A174  90 01 00 34 */	stw r0, 0x34(r1)
/* 8020D238 0020A178  38 00 00 00 */	li r0, 0
/* 8020D23C 0020A17C  38 84 F0 E0 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
/* 8020D240 0020A180  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8020D244 0020A184  28 00 00 00 */	cmplwi r0, 0
/* 8020D248 0020A188  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8020D24C 0020A18C  90 81 00 10 */	stw r4, 0x10(r1)
/* 8020D250 0020A190  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8020D254 0020A194  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D258 0020A198  90 61 00 18 */	stw r3, 0x18(r1)
/* 8020D25C 0020A19C  40 82 00 1C */	bne .L_8020D278
/* 8020D260 0020A1A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D264 0020A1A4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020D268 0020A1A8  7D 89 03 A6 */	mtctr r12
/* 8020D26C 0020A1AC  4E 80 04 21 */	bctrl 
/* 8020D270 0020A1B0  90 61 00 14 */	stw r3, 0x14(r1)
/* 8020D274 0020A1B4  48 00 00 8C */	b .L_8020D300
.L_8020D278:
/* 8020D278 0020A1B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D27C 0020A1BC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8020D280 0020A1C0  7D 89 03 A6 */	mtctr r12
/* 8020D284 0020A1C4  4E 80 04 21 */	bctrl 
/* 8020D288 0020A1C8  90 61 00 14 */	stw r3, 0x14(r1)
/* 8020D28C 0020A1CC  48 00 00 58 */	b .L_8020D2E4
.L_8020D290:
/* 8020D290 0020A1D0  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8020D294 0020A1D4  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8020D298 0020A1D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D29C 0020A1DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020D2A0 0020A1E0  7D 89 03 A6 */	mtctr r12
/* 8020D2A4 0020A1E4  4E 80 04 21 */	bctrl 
/* 8020D2A8 0020A1E8  7C 64 1B 78 */	mr r4, r3
/* 8020D2AC 0020A1EC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8020D2B0 0020A1F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D2B4 0020A1F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020D2B8 0020A1F8  7D 89 03 A6 */	mtctr r12
/* 8020D2BC 0020A1FC  4E 80 04 21 */	bctrl 
/* 8020D2C0 0020A200  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020D2C4 0020A204  40 82 00 3C */	bne .L_8020D300
/* 8020D2C8 0020A208  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8020D2CC 0020A20C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8020D2D0 0020A210  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D2D4 0020A214  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020D2D8 0020A218  7D 89 03 A6 */	mtctr r12
/* 8020D2DC 0020A21C  4E 80 04 21 */	bctrl 
/* 8020D2E0 0020A220  90 61 00 14 */	stw r3, 0x14(r1)
.L_8020D2E4:
/* 8020D2E4 0020A224  81 81 00 10 */	lwz r12, 0x10(r1)
/* 8020D2E8 0020A228  38 61 00 10 */	addi r3, r1, 0x10
/* 8020D2EC 0020A22C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020D2F0 0020A230  7D 89 03 A6 */	mtctr r12
/* 8020D2F4 0020A234  4E 80 04 21 */	bctrl 
/* 8020D2F8 0020A238  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020D2FC 0020A23C  41 82 FF 94 */	beq .L_8020D290
.L_8020D300:
/* 8020D300 0020A240  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureKillArg@ha
/* 8020D304 0020A244  3B E3 A2 D0 */	addi r31, r3, __vt__Q24Game15CreatureKillArg@l
/* 8020D308 0020A248  48 00 01 24 */	b .L_8020D42C
.L_8020D30C:
/* 8020D30C 0020A24C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8020D310 0020A250  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D314 0020A254  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020D318 0020A258  7D 89 03 A6 */	mtctr r12
/* 8020D31C 0020A25C  4E 80 04 21 */	bctrl 
/* 8020D320 0020A260  38 00 00 01 */	li r0, 1
/* 8020D324 0020A264  93 E1 00 08 */	stw r31, 8(r1)
/* 8020D328 0020A268  7C 7E 1B 78 */	mr r30, r3
/* 8020D32C 0020A26C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8020D330 0020A270  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D334 0020A274  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8020D338 0020A278  7D 89 03 A6 */	mtctr r12
/* 8020D33C 0020A27C  4E 80 04 21 */	bctrl 
/* 8020D340 0020A280  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020D344 0020A284  41 82 00 10 */	beq .L_8020D354
/* 8020D348 0020A288  7F C3 F3 78 */	mr r3, r30
/* 8020D34C 0020A28C  38 81 00 08 */	addi r4, r1, 8
/* 8020D350 0020A290  4B F2 DD A1 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8020D354:
/* 8020D354 0020A294  80 9E 01 7C */	lwz r4, 0x17c(r30)
/* 8020D358 0020A298  28 04 00 00 */	cmplwi r4, 0
/* 8020D35C 0020A29C  41 82 00 14 */	beq .L_8020D370
/* 8020D360 0020A2A0  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8020D364 0020A2A4  28 03 00 00 */	cmplwi r3, 0
/* 8020D368 0020A2A8  41 82 00 08 */	beq .L_8020D370
/* 8020D36C 0020A2AC  4B E1 98 B9 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_8020D370:
/* 8020D370 0020A2B0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8020D374 0020A2B4  28 00 00 00 */	cmplwi r0, 0
/* 8020D378 0020A2B8  40 82 00 24 */	bne .L_8020D39C
/* 8020D37C 0020A2BC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8020D380 0020A2C0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8020D384 0020A2C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D388 0020A2C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020D38C 0020A2CC  7D 89 03 A6 */	mtctr r12
/* 8020D390 0020A2D0  4E 80 04 21 */	bctrl 
/* 8020D394 0020A2D4  90 61 00 14 */	stw r3, 0x14(r1)
/* 8020D398 0020A2D8  48 00 00 94 */	b .L_8020D42C
.L_8020D39C:
/* 8020D39C 0020A2DC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8020D3A0 0020A2E0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8020D3A4 0020A2E4  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D3A8 0020A2E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020D3AC 0020A2EC  7D 89 03 A6 */	mtctr r12
/* 8020D3B0 0020A2F0  4E 80 04 21 */	bctrl 
/* 8020D3B4 0020A2F4  90 61 00 14 */	stw r3, 0x14(r1)
/* 8020D3B8 0020A2F8  48 00 00 58 */	b .L_8020D410
.L_8020D3BC:
/* 8020D3BC 0020A2FC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8020D3C0 0020A300  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8020D3C4 0020A304  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D3C8 0020A308  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020D3CC 0020A30C  7D 89 03 A6 */	mtctr r12
/* 8020D3D0 0020A310  4E 80 04 21 */	bctrl 
/* 8020D3D4 0020A314  7C 64 1B 78 */	mr r4, r3
/* 8020D3D8 0020A318  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8020D3DC 0020A31C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D3E0 0020A320  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020D3E4 0020A324  7D 89 03 A6 */	mtctr r12
/* 8020D3E8 0020A328  4E 80 04 21 */	bctrl 
/* 8020D3EC 0020A32C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020D3F0 0020A330  40 82 00 3C */	bne .L_8020D42C
/* 8020D3F4 0020A334  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8020D3F8 0020A338  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8020D3FC 0020A33C  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D400 0020A340  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8020D404 0020A344  7D 89 03 A6 */	mtctr r12
/* 8020D408 0020A348  4E 80 04 21 */	bctrl 
/* 8020D40C 0020A34C  90 61 00 14 */	stw r3, 0x14(r1)
.L_8020D410:
/* 8020D410 0020A350  81 81 00 10 */	lwz r12, 0x10(r1)
/* 8020D414 0020A354  38 61 00 10 */	addi r3, r1, 0x10
/* 8020D418 0020A358  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8020D41C 0020A35C  7D 89 03 A6 */	mtctr r12
/* 8020D420 0020A360  4E 80 04 21 */	bctrl 
/* 8020D424 0020A364  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8020D428 0020A368  41 82 FF 94 */	beq .L_8020D3BC
.L_8020D42C:
/* 8020D42C 0020A36C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8020D430 0020A370  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D434 0020A374  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020D438 0020A378  7D 89 03 A6 */	mtctr r12
/* 8020D43C 0020A37C  4E 80 04 21 */	bctrl 
/* 8020D440 0020A380  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8020D444 0020A384  7C 04 18 40 */	cmplw r4, r3
/* 8020D448 0020A388  40 82 FE C4 */	bne .L_8020D30C
/* 8020D44C 0020A38C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8020D450 0020A390  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8020D454 0020A394  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8020D458 0020A398  7C 08 03 A6 */	mtlr r0
/* 8020D45C 0020A39C  38 21 00 30 */	addi r1, r1, 0x30
/* 8020D460 0020A3A0  4E 80 00 20 */	blr 
.endfn "killAll__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "entry__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item", weak
/* 8020D464 0020A3A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020D468 0020A3A8  7C 08 02 A6 */	mflr r0
/* 8020D46C 0020A3AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020D470 0020A3B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020D474 0020A3B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020D478 0020A3B8  7C 9E 23 78 */	mr r30, r4
/* 8020D47C 0020A3BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020D480 0020A3C0  7C 7D 1B 78 */	mr r29, r3
/* 8020D484 0020A3C4  38 60 00 1C */	li r3, 0x1c
/* 8020D488 0020A3C8  93 A4 01 80 */	stw r29, 0x180(r4)
/* 8020D48C 0020A3CC  4B E1 6A 19 */	bl __nw__FUl
/* 8020D490 0020A3D0  7C 7F 1B 79 */	or. r31, r3, r3
/* 8020D494 0020A3D4  41 82 00 14 */	beq .L_8020D4A8
/* 8020D498 0020A3D8  48 20 3E F9 */	bl __ct__5CNodeFv
/* 8020D49C 0020A3DC  3C 60 80 4C */	lis r3, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
/* 8020D4A0 0020A3E0  38 03 F1 A0 */	addi r0, r3, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
/* 8020D4A4 0020A3E4  90 1F 00 00 */	stw r0, 0(r31)
.L_8020D4A8:
/* 8020D4A8 0020A3E8  93 DF 00 18 */	stw r30, 0x18(r31)
/* 8020D4AC 0020A3EC  7F E4 FB 78 */	mr r4, r31
/* 8020D4B0 0020A3F0  38 7D 00 6C */	addi r3, r29, 0x6c
/* 8020D4B4 0020A3F4  48 20 3F 55 */	bl add__5CNodeFP5CNode
/* 8020D4B8 0020A3F8  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8020D4BC 0020A3FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8020D4C0 0020A400  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8020D4C4 0020A404  7D 89 03 A6 */	mtctr r12
/* 8020D4C8 0020A408  4E 80 04 21 */	bctrl 
/* 8020D4CC 0020A40C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020D4D0 0020A410  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020D4D4 0020A414  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020D4D8 0020A418  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020D4DC 0020A41C  7C 08 03 A6 */	mtlr r0
/* 8020D4E0 0020A420  38 21 00 20 */	addi r1, r1, 0x20
/* 8020D4E4 0020A424  4E 80 00 20 */	blr 
.endfn "entry__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"

.fn "__ct__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D4E8 0020A428  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020D4EC 0020A42C  7C 08 02 A6 */	mflr r0
/* 8020D4F0 0020A430  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020D4F4 0020A434  7C 80 07 35 */	extsh. r0, r4
/* 8020D4F8 0020A438  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020D4FC 0020A43C  7C 7F 1B 78 */	mr r31, r3
/* 8020D500 0020A440  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020D504 0020A444  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020D508 0020A448  41 82 00 0C */	beq .L_8020D514
/* 8020D50C 0020A44C  38 1F 00 88 */	addi r0, r31, 0x88
/* 8020D510 0020A450  90 1F 00 04 */	stw r0, 4(r31)
.L_8020D514:
/* 8020D514 0020A454  7F E3 FB 78 */	mr r3, r31
/* 8020D518 0020A458  38 80 00 00 */	li r4, 0
/* 8020D51C 0020A45C  38 A0 00 01 */	li r5, 1
/* 8020D520 0020A460  4B FB F8 51 */	bl __ct__Q24Game11BaseItemMgrFi
/* 8020D524 0020A464  3B BF 00 30 */	addi r29, r31, 0x30
/* 8020D528 0020A468  7F A3 EB 78 */	mr r3, r29
/* 8020D52C 0020A46C  48 20 3E 65 */	bl __ct__5CNodeFv
/* 8020D530 0020A470  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 8020D534 0020A474  38 A0 00 00 */	li r5, 0
/* 8020D538 0020A478  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 8020D53C 0020A47C  3B DF 00 4C */	addi r30, r31, 0x4c
/* 8020D540 0020A480  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
/* 8020D544 0020A484  90 1D 00 00 */	stw r0, 0(r29)
/* 8020D548 0020A488  38 03 F0 F8 */	addi r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
/* 8020D54C 0020A48C  90 1D 00 00 */	stw r0, 0(r29)
/* 8020D550 0020A490  3C 60 80 4C */	lis r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 8020D554 0020A494  38 83 F2 30 */	addi r4, r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@l
/* 8020D558 0020A498  98 BD 00 18 */	stb r5, 0x18(r29)
/* 8020D55C 0020A49C  38 04 00 74 */	addi r0, r4, 0x74
/* 8020D560 0020A4A0  7F C3 F3 78 */	mr r3, r30
/* 8020D564 0020A4A4  90 9F 00 00 */	stw r4, 0(r31)
/* 8020D568 0020A4A8  90 1F 00 30 */	stw r0, 0x30(r31)
/* 8020D56C 0020A4AC  48 20 3E 25 */	bl __ct__5CNodeFv
/* 8020D570 0020A4B0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8020D574 0020A4B4  3C 60 80 4C */	lis r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
/* 8020D578 0020A4B8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8020D57C 0020A4BC  3C A0 80 4B */	lis r5, __vt__16GenericObjectMgr@ha
/* 8020D580 0020A4C0  90 1E 00 00 */	stw r0, 0(r30)
/* 8020D584 0020A4C4  38 03 F0 F8 */	addi r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
/* 8020D588 0020A4C8  3C 80 80 4C */	lis r4, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 8020D58C 0020A4CC  3C 60 80 4C */	lis r3, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
/* 8020D590 0020A4D0  90 1E 00 00 */	stw r0, 0(r30)
/* 8020D594 0020A4D4  38 00 00 00 */	li r0, 0
/* 8020D598 0020A4D8  38 C4 F1 24 */	addi r6, r4, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@l
/* 8020D59C 0020A4DC  38 83 F1 B0 */	addi r4, r3, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@l
/* 8020D5A0 0020A4E0  98 1E 00 18 */	stb r0, 0x18(r30)
/* 8020D5A4 0020A4E4  38 05 B5 F0 */	addi r0, r5, __vt__16GenericObjectMgr@l
/* 8020D5A8 0020A4E8  3B BE 00 20 */	addi r29, r30, 0x20
/* 8020D5AC 0020A4EC  38 A6 00 2C */	addi r5, r6, 0x2c
/* 8020D5B0 0020A4F0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8020D5B4 0020A4F4  38 04 00 2C */	addi r0, r4, 0x2c
/* 8020D5B8 0020A4F8  7F A3 EB 78 */	mr r3, r29
/* 8020D5BC 0020A4FC  90 DE 00 00 */	stw r6, 0(r30)
/* 8020D5C0 0020A500  90 BE 00 1C */	stw r5, 0x1c(r30)
/* 8020D5C4 0020A504  90 9E 00 00 */	stw r4, 0(r30)
/* 8020D5C8 0020A508  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8020D5CC 0020A50C  48 20 3D C5 */	bl __ct__5CNodeFv
/* 8020D5D0 0020A510  3C 80 80 4C */	lis r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
/* 8020D5D4 0020A514  7F E3 FB 78 */	mr r3, r31
/* 8020D5D8 0020A518  38 04 F1 A0 */	addi r0, r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
/* 8020D5DC 0020A51C  90 1D 00 00 */	stw r0, 0(r29)
/* 8020D5E0 0020A520  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020D5E4 0020A524  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020D5E8 0020A528  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020D5EC 0020A52C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020D5F0 0020A530  7C 08 03 A6 */	mtlr r0
/* 8020D5F4 0020A534  38 21 00 20 */	addi r1, r1, 0x20
/* 8020D5F8 0020A538  4E 80 00 20 */	blr 
.endfn "__ct__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D5FC 0020A53C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D600 0020A540  7C 08 02 A6 */	mflr r0
/* 8020D604 0020A544  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D608 0020A548  85 83 00 3C */	lwzu r12, 0x3c(r3)
/* 8020D60C 0020A54C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8020D610 0020A550  7D 89 03 A6 */	mtctr r12
/* 8020D614 0020A554  4E 80 04 21 */	bctrl 
/* 8020D618 0020A558  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D61C 0020A55C  7C 08 03 A6 */	mtlr r0
/* 8020D620 0020A560  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D624 0020A564  4E 80 00 20 */	blr 
.endfn "getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv", weak
/* 8020D628 0020A568  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020D62C 0020A56C  7C 08 02 A6 */	mflr r0
/* 8020D630 0020A570  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020D634 0020A574  85 83 00 3C */	lwzu r12, 0x3c(r3)
/* 8020D638 0020A578  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8020D63C 0020A57C  7D 89 03 A6 */	mtctr r12
/* 8020D640 0020A580  4E 80 04 21 */	bctrl 
/* 8020D644 0020A584  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020D648 0020A588  7C 08 03 A6 */	mtlr r0
/* 8020D64C 0020A58C  38 21 00 10 */	addi r1, r1, 0x10
/* 8020D650 0020A590  4E 80 00 20 */	blr 
.endfn "get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"

.fn __sinit_itemUjamushi_cpp, local
/* 8020D654 0020A594  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8020D658 0020A598  38 00 FF FF */	li r0, -1
/* 8020D65C 0020A59C  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8020D660 0020A5A0  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8020D664 0020A5A4  90 0D 95 38 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8020D668 0020A5A8  D4 03 EF 60 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8020D66C 0020A5AC  D0 0D 95 3C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8020D670 0020A5B0  D0 03 00 04 */	stfs f0, 4(r3)
/* 8020D674 0020A5B4  D0 03 00 08 */	stfs f0, 8(r3)
/* 8020D678 0020A5B8  4E 80 00 20 */	blr 
.endfn __sinit_itemUjamushi_cpp

.fn "@32@__dt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D67C 0020A5BC  38 63 FF E0 */	addi r3, r3, -32
/* 8020D680 0020A5C0  4B FF A9 54 */	b "__dt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endfn "@32@__dt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "@28@resetMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D684 0020A5C4  38 63 FF E4 */	addi r3, r3, -28
/* 8020D688 0020A5C8  4B FF DE D0 */	b "resetMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endfn "@28@resetMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "@28@doDirectDraw__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics", weak
/* 8020D68C 0020A5CC  38 63 FF E4 */	addi r3, r3, -28
/* 8020D690 0020A5D0  4B FF DE 78 */	b "doDirectDraw__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"
.endfn "@28@doDirectDraw__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"

.fn "@28@doSimulation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Ff", weak
/* 8020D694 0020A5D4  38 63 FF E4 */	addi r3, r3, -28
/* 8020D698 0020A5D8  4B FF DE 20 */	b "doSimulation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"
.endfn "@28@doSimulation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"

.fn "@28@doViewCalc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D69C 0020A5DC  38 63 FF E4 */	addi r3, r3, -28
/* 8020D6A0 0020A5E0  4B FF DD C8 */	b "doViewCalc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endfn "@28@doViewCalc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "@28@doSetView__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi", weak
/* 8020D6A4 0020A5E4  38 63 FF E4 */	addi r3, r3, -28
/* 8020D6A8 0020A5E8  4B FF DD 70 */	b "doSetView__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
.endfn "@28@doSetView__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"

.fn "@28@doEntry__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D6AC 0020A5EC  38 63 FF E4 */	addi r3, r3, -28
/* 8020D6B0 0020A5F0  4B FF DD 18 */	b "doEntry__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endfn "@28@doEntry__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "@28@doAnimation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D6B4 0020A5F4  38 63 FF E4 */	addi r3, r3, -28
/* 8020D6B8 0020A5F8  4B FF DC C0 */	b "doAnimation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endfn "@28@doAnimation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "@28@doDirectDraw__36ObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics", weak
/* 8020D6BC 0020A5FC  38 63 FF E4 */	addi r3, r3, -28
/* 8020D6C0 0020A600  4B FF F3 DC */	b "doDirectDraw__36ObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"
.endfn "@28@doDirectDraw__36ObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"

.fn "@28@doSimulation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Ff", weak
/* 8020D6C4 0020A604  38 63 FF E4 */	addi r3, r3, -28
/* 8020D6C8 0020A608  4B FF F2 00 */	b "doSimulation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"
.endfn "@28@doSimulation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"

.fn "@28@doViewCalc__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D6CC 0020A60C  38 63 FF E4 */	addi r3, r3, -28
/* 8020D6D0 0020A610  4B FF F0 24 */	b "doViewCalc__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endfn "@28@doViewCalc__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "@28@doSetView__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fi", weak
/* 8020D6D4 0020A614  38 63 FF E4 */	addi r3, r3, -28
/* 8020D6D8 0020A618  4B FF EE 48 */	b "doSetView__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
.endfn "@28@doSetView__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"

.fn "@28@doEntry__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D6DC 0020A61C  38 63 FF E4 */	addi r3, r3, -28
/* 8020D6E0 0020A620  4B FF EC 6C */	b "doEntry__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endfn "@28@doEntry__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "@28@doAnimation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D6E4 0020A624  38 63 FF E4 */	addi r3, r3, -28
/* 8020D6E8 0020A628  4B FF EA 90 */	b "doAnimation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endfn "@28@doAnimation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "@32@getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D6EC 0020A62C  38 63 FF E0 */	addi r3, r3, -32
/* 8020D6F0 0020A630  4B FF FF 0C */	b "getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endfn "@32@getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "@32@getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv", weak
/* 8020D6F4 0020A634  38 63 FF E0 */	addi r3, r3, -32
/* 8020D6F8 0020A638  4B FF D6 DC */	b "getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
.endfn "@32@getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"

.fn "@32@getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv", weak
/* 8020D6FC 0020A63C  38 63 FF E0 */	addi r3, r3, -32
/* 8020D700 0020A640  4B FF D6 A8 */	b "getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
.endfn "@32@getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"

.fn "@32@get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv", weak
/* 8020D704 0020A644  38 63 FF E0 */	addi r3, r3, -32
/* 8020D708 0020A648  4B FF FF 20 */	b "get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
.endfn "@32@get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"

.fn "@32@__dt__Q34Game12ItemUjamushi6UjaMgrFv", weak
/* 8020D70C 0020A64C  38 63 FF E0 */	addi r3, r3, -32
/* 8020D710 0020A650  4B FF D3 20 */	b __dt__Q34Game12ItemUjamushi6UjaMgrFv
.endfn "@32@__dt__Q34Game12ItemUjamushi6UjaMgrFv"

.fn "@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent", weak
/* 8020D714 0020A654  38 63 FE 88 */	addi r3, r3, -376
/* 8020D718 0020A658  4B FF F9 4C */	b "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"
.endfn "@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"

.fn "@48@__dt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D71C 0020A65C  38 63 FF D0 */	addi r3, r3, -48
/* 8020D720 0020A660  4B FF C3 6C */	b "__dt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
.endfn "@48@__dt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "@28@resetMgr__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D724 0020A664  38 63 FF E4 */	addi r3, r3, -28
/* 8020D728 0020A668  4B FF DB 04 */	b "resetMgr__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
.endfn "@28@resetMgr__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "@28@doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics", weak
/* 8020D72C 0020A66C  38 63 FF E4 */	addi r3, r3, -28
/* 8020D730 0020A670  4B FF E8 54 */	b "doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"
.endfn "@28@doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"

.fn "@28@doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff", weak
/* 8020D734 0020A674  38 63 FF E4 */	addi r3, r3, -28
/* 8020D738 0020A678  4B FF E6 58 */	b "doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff"
.endfn "@28@doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff"

.fn "@28@doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D73C 0020A67C  38 63 FF E4 */	addi r3, r3, -28
/* 8020D740 0020A680  4B FF E4 6C */	b "doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
.endfn "@28@doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "@28@doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi", weak
/* 8020D744 0020A684  38 63 FF E4 */	addi r3, r3, -28
/* 8020D748 0020A688  4B FF E2 70 */	b "doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi"
.endfn "@28@doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi"

.fn "@28@doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D74C 0020A68C  38 63 FF E4 */	addi r3, r3, -28
/* 8020D750 0020A690  4B FF E0 84 */	b "doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
.endfn "@28@doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "@28@doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D754 0020A694  38 63 FF E4 */	addi r3, r3, -28
/* 8020D758 0020A698  4B FF DE 98 */	b "doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
.endfn "@28@doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "@48@getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D75C 0020A69C  38 63 FF D0 */	addi r3, r3, -48
/* 8020D760 0020A6A0  4B FF FA 14 */	b "getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
.endfn "@48@getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "@48@getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv", weak
/* 8020D764 0020A6A4  38 63 FF D0 */	addi r3, r3, -48
/* 8020D768 0020A6A8  4B FF FA 38 */	b "getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
.endfn "@48@getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"

.fn "@48@getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv", weak
/* 8020D76C 0020A6AC  38 63 FF D0 */	addi r3, r3, -48
/* 8020D770 0020A6B0  4B FF FA 5C */	b "getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
.endfn "@48@getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"

.fn "@48@get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv", weak
/* 8020D774 0020A6B4  38 63 FF D0 */	addi r3, r3, -48
/* 8020D778 0020A6B8  4B FF FA 80 */	b "get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
.endfn "@48@get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"

.fn "@48@__dt__Q34Game12ItemUjamushi3MgrFv", weak
/* 8020D77C 0020A6BC  38 63 FF D0 */	addi r3, r3, -48
/* 8020D780 0020A6C0  4B FF CC C4 */	b __dt__Q34Game12ItemUjamushi3MgrFv
.endfn "@48@__dt__Q34Game12ItemUjamushi3MgrFv"
