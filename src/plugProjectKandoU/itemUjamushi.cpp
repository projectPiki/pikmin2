#include "Dolphin/math.h"
#include "types.h"
#include "Vector3.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_itemUjamushi_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80481D40
    lbl_80481D40:
        .skip 0xC
        .asciz "itemUjamushi"
        .skip 3
        .asciz "BoidParms"
        .skip 2
        .4byte 0x436F6865
        .4byte 0x6E73696F
        .4byte 0x6E000000
        .4byte 0x416C6967
        .4byte 0x6E6D656E
        .4byte 0x74000000
        .4byte 0x53657061
        .4byte 0x72617469
        .4byte 0x6F6E0000
        .4byte 0x436F6C6C
        .4byte 0x6973696F
        .4byte 0x6E000000
        .4byte 0x4D617853
        .4byte 0x70656564
        .4byte 0x00000000
        .4byte 0x44697374
        .4byte 0x616E6365
        .4byte 0x00000000
        .4byte 0x526F7461
        .4byte 0x74696F6E
        .4byte 0x2F730000
        .4byte 0x52616E64
        .4byte 0x6F6D416E
        .4byte 0x676C6500
    .global lbl_80481DC8
    lbl_80481DC8:
        .4byte 0x6974656D
        .4byte 0x556A616D
        .4byte 0x75736869
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80481DDC
    lbl_80481DDC:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x0923206E
        .4byte 0x756D2070
        .4byte 0x61726D73
        .4byte 0x0D0A0000
        .4byte 0x556A6150
        .4byte 0x61726D73
        .4byte 0x00000000
        .4byte 0x955C8EA6
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x00000000
        .4byte 0x93E4204D
        .4byte 0x756C7469
        .4byte 0x706C7900
        .4byte 0x8382815B
        .4byte 0x83568387
        .4byte 0x839391AC
        .4byte 0x93780000
    .global lbl_80481E30
    lbl_80481E30:
        .4byte 0x835F8381
        .4byte 0x8362834E
        .4byte 0x0A000000
    .global lbl_80481E3C
    lbl_80481E3C:
        .4byte 0x666C6F63
        .4byte 0x6B4D6772
        .4byte 0x2E680000
        .4byte 0x556A616D
        .4byte 0x75736869
        .4byte 0x00000000
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F6F
        .4byte 0x626A6563
        .4byte 0x74732F75
        .4byte 0x6A616D75
        .4byte 0x73686900
        .4byte 0x756A616D
        .4byte 0x75736869
        .4byte 0x5F706F6C
        .4byte 0x792E626D
        .4byte 0x64000000
        .4byte 0x756A616D
        .4byte 0x75736869
        .4byte 0x5F62696C
        .4byte 0x6C2E626D
        .4byte 0x64000000
        .4byte 0x74657874
        .4byte 0x732E737A
        .4byte 0x73000000
        .4byte 0x7061726D
        .4byte 0x732E7478
        .4byte 0x74000000
    .global lbl_80481EB0
    lbl_80481EB0:
        .4byte 0x756A616D
        .4byte 0x75736869
        .4byte 0x00000000
        .4byte 0x092382A4
        .4byte 0x82B682E1
        .4byte 0x89A49094
        .4byte 0x0D0A0000
    .global lbl_80481ECC
    lbl_80481ECC:
        .4byte 0x4974656D
        .4byte 0x556A616D
        .4byte 0x75736869
        .4byte 0x3A3A496E
        .4byte 0x69744172
        .4byte 0x67000000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x4B696C6C
        .4byte 0x41726700
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804BEF60
    lbl_804BEF60:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game12ItemUjamushi7InitArg
    __vt__Q34Game12ItemUjamushi7InitArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q34Game12ItemUjamushi7InitArgFv
    .global __vt__15GenUjamushiParm
    __vt__15GenUjamushiParm:
        .4byte 0
        .4byte 0
        .4byte getShapeID__Q24Game11GenItemParmFv
    .global __vt__Q34Game12ItemUjamushi8DigState
    __vt__Q34Game12ItemUjamushi8DigState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg
        .4byte exec__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4Item
        .4byte
   cleanup__Q34Game12ItemUjamushi8DigStateFPQ34Game12ItemUjamushi4Item .4byte
   "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
        .4byte
   "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
    .global __vt__Q34Game12ItemUjamushi11ActiveState
    __vt__Q34Game12ItemUjamushi11ActiveState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg
        .4byte
   exec__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4Item .4byte
   cleanup__Q34Game12ItemUjamushi11ActiveStateFPQ34Game12ItemUjamushi4Item
        .4byte
   "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
        .4byte
   "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
    .global __vt__Q34Game12ItemUjamushi9WaitState
    __vt__Q34Game12ItemUjamushi9WaitState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg
        .4byte exec__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4Item
        .4byte
   cleanup__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4Item .4byte
   "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
        .4byte
   "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
    .global __vt__Q34Game12ItemUjamushi3Mgr
    __vt__Q34Game12ItemUjamushi3Mgr:
        .4byte 0
        .4byte 0
        .4byte "doAnimation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "doEntry__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "doSetView__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fi"
        .4byte "doViewCalc__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte
   "doSimulation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Ff" .4byte
   "doDirectDraw__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"
        .4byte doSimpleDraw__Q34Game12ItemUjamushi3MgrFP8Viewport
        .4byte loadResources__Q24Game11BaseItemMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte
   "initDependency__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "killAll__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem .4byte
   setupSoundViewerAndBas__Q24Game11BaseItemMgrFv .4byte
   onLoadResources__Q34Game12ItemUjamushi3MgrFv .4byte
   loadEverytime__Q24Game11BaseItemMgrFv .4byte
   updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi .4byte
   onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi .4byte
   generatorGetID__Q34Game12ItemUjamushi3MgrFv .4byte
   "generatorBirth__Q34Game12ItemUjamushi3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
        .4byte
   generatorWrite__Q34Game12ItemUjamushi3MgrFR6StreamPQ24Game11GenItemParm
        .4byte
   generatorRead__Q34Game12ItemUjamushi3MgrFR6StreamPQ24Game11GenItemParmUl
        .4byte generatorLocalVersion__Q34Game12ItemUjamushi3MgrFv
        .4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
        .4byte generatorNewItemParm__Q34Game12ItemUjamushi3MgrFv
        .4byte 0
        .4byte 0
        .4byte "@48@__dt__Q34Game12ItemUjamushi3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__37Container<Q34Game12ItemUjamushi4Item>FPv"
        .4byte
   "@48@getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv" .4byte
   "@48@getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "@48@getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "@48@get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv" .4byte
   "getAt__37Container<Q34Game12ItemUjamushi4Item>Fi" .4byte
   "getTo__37Container<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "kill__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte "get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
        .4byte "getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
        .4byte "getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte __dt__Q34Game12ItemUjamushi3MgrFv
        .4byte getCaveName__Q34Game12ItemUjamushi3MgrFi
        .4byte getCaveID__Q34Game12ItemUjamushi3MgrFPc
    .global "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"
    "__vt__36Iterator<Q34Game12ItemUjamushi4Item>":
        .4byte 0
        .4byte 0
        .4byte "first__36Iterator<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "next__36Iterator<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "isDone__36Iterator<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "__ml__36Iterator<Q34Game12ItemUjamushi4Item>Fv"
    .global "__vt__37Container<Q34Game12ItemUjamushi4Item>"
    "__vt__37Container<Q34Game12ItemUjamushi4Item>":
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
    .global "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"
    "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>":
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
        .4byte
   "@28@doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics" .4byte
   doSimpleDraw__16GenericObjectMgrFP8Viewport .4byte
   loadResources__16GenericObjectMgrFv .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi"
        .4byte "doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff"
        .4byte
   "doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics" .global
   "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"
    "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>":
        .4byte 0
        .4byte 0
        .4byte "__dt__39TObjectNode<Q34Game12ItemUjamushi4Item>Fv"
        .4byte getChildCount__5CNodeFv
    .global "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"
    "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>":
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
        .4byte
   "@28@doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics" .4byte
   doSimpleDraw__16GenericObjectMgrFP8Viewport .4byte
   loadResources__16GenericObjectMgrFv .4byte
   "@28@resetMgr__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   pausable__16GenericObjectMgrFv .4byte frozenable__16GenericObjectMgrFv .4byte
   getMatrixLoadType__16GenericObjectMgrFv .4byte
   "doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi" .4byte
   "doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff" .4byte
   "doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics" .4byte
   "resetMgr__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv" .global
   "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"
    "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>":
        .4byte 0
        .4byte 0
        .4byte "doAnimation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "doEntry__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "doSetView__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fi"
        .4byte "doViewCalc__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte
   "doSimulation__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Ff" .4byte
   "doDirectDraw__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__Q24Game11BaseItemMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte
   "initDependency__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "killAll__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem .4byte
   setupSoundViewerAndBas__Q24Game11BaseItemMgrFv .4byte
   onLoadResources__Q24Game11BaseItemMgrFv .4byte
   loadEverytime__Q24Game11BaseItemMgrFv .4byte
   updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi .4byte
   onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi .4byte 0 .4byte
   0 .4byte generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm
        .4byte
   generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl .4byte
   generatorLocalVersion__Q24Game11BaseItemMgrFv .4byte
   generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm .4byte
   generatorNewItemParm__Q24Game11BaseItemMgrFv .4byte 0 .4byte 0 .4byte
   "@48@__dt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   getChildCount__5CNodeFv .4byte
   "getObject__37Container<Q34Game12ItemUjamushi4Item>FPv" .4byte
   "@48@getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv" .4byte
   "@48@getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "@48@getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "@48@get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv" .4byte
   "getAt__37Container<Q34Game12ItemUjamushi4Item>Fi" .4byte
   "getTo__37Container<Q34Game12ItemUjamushi4Item>Fv" .4byte
   "kill__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte "get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
        .4byte "getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
        .4byte "getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
        .4byte "__dt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
    .global __vt__Q34Game12ItemUjamushi4Item
    __vt__Q34Game12ItemUjamushi4Item:
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
        .4byte
   "bounceCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FPQ23Sys8Triangle"
        .4byte
   "collisionCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9CollEvent"
        .4byte
   "platCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9PlatEvent"
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
        .4byte
   "@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"
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
        .4byte
   interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge .4byte
   interactEat__Q24Game8BaseItemFRQ24Game11InteractEat .4byte
   interactFlockAttack__Q34Game12ItemUjamushi4ItemFRQ24Game19InteractFlockAttack
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
        .4byte
   "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"
        .4byte doSimpleDraw__Q34Game12ItemUjamushi4ItemFP8Viewport
    .global __vt__Q44Game12ItemUjamushi4Item10DummyShape
    __vt__Q44Game12ItemUjamushi4Item10DummyShape:
        .4byte 0
        .4byte 0
        .4byte getMatrix__Q44Game12ItemUjamushi4Item10DummyShapeFi
        .4byte isModel__Q28SysShape9MtxObjectFv
    .global "__vt__Q24Game35ItemFSM<Q34Game12ItemUjamushi4Item>"
    "__vt__Q24Game35ItemFSM<Q34Game12ItemUjamushi4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "start__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "transit__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
    .global "__vt__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>"
    "__vt__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "start__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "transit__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
    .global
   "__vt__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>"
    "__vt__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>":
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
        .4byte
   "bounceCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FPQ23Sys8Triangle"
        .4byte
   "collisionCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9CollEvent"
        .4byte
   "platCallback__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRQ24Game9PlatEvent"
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
        .4byte
   "@376@onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"
        .4byte initDependency__Q24Game8BaseItemFv
        .4byte startSound__Q24Game8BaseItemFUl
        .4byte makeTrMatrix__Q24Game8BaseItemFv
        .4byte
   "doAI__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>Fv"
        .4byte move__Q24Game8BaseItemFf
        .4byte changeMaterial__Q24Game8BaseItemFv
        .4byte do_updateLOD__Q24Game8BaseItemFv
        .4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
        .4byte getMapCollisionRadius__Q24Game8BaseItemFv
        .4byte interactAttack__Q24Game8BaseItemFRQ24Game14InteractAttack
        .4byte
   interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge .4byte
   interactEat__Q24Game8BaseItemFRQ24Game11InteractEat .4byte
   interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack .4byte
   interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb .4byte
   interactFue__Q24Game8BaseItemFRQ24Game11InteractFue .4byte
   interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero .4byte
   interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero .4byte
   interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey .4byte
   "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>" .4byte
   getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere .4byte
   do_doAnimation__Q24Game8BaseItemFv .4byte
   updateBoundSphere__Q24Game8BaseItemFv .4byte update__Q24Game8BaseItemFv
        .4byte entryShape__Q24Game8BaseItemFv
        .4byte onSetPosition__Q24Game8BaseItemFv
        .4byte
   "onKeyEvent__Q24Game89FSMItem<Q34Game12ItemUjamushi4Item,Q34Game12ItemUjamushi3FSM,Q34Game12ItemUjamushi5State>FRCQ28SysShape8KeyEvent"
    .global __vt__Q34Game12ItemUjamushi5State
    __vt__Q34Game12ItemUjamushi5State:
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "cleanup__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
        .4byte
   "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
    .global "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"
    "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "cleanup__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
        .4byte
   "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
        .4byte
   "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
        .4byte
   "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
        .4byte
   "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
        .4byte
   "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
    .global "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"
    "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg"
        .4byte
   "exec__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "cleanup__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
    .global __vt__Q34Game12ItemUjamushi3FSM
    __vt__Q34Game12ItemUjamushi3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game12ItemUjamushi3FSMFPQ34Game12ItemUjamushi4Item
        .4byte
   "start__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
        .4byte
   "exec__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
        .4byte
   "transit__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
    .global __vt__Q34Game12ItemUjamushi6UjaMgr
    __vt__Q34Game12ItemUjamushi6UjaMgr:
        .4byte 0
        .4byte 0
        .4byte "getMaxObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "getNumObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "isFlagAlive__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
        .4byte "getFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
        .4byte
   "killFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPQ24Game6TFlock"
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
    .global "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"
    "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>":
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
        .4byte
   "@28@doDirectDraw__36ObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics" .4byte
   doSimpleDraw__16GenericObjectMgrFP8Viewport .4byte
   loadResources__16GenericObjectMgrFv .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "doEntry__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "doSetView__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
        .4byte "doViewCalc__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "doSimulation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"
        .4byte "doDirectDraw__36ObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"
    .global "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"
    "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>":
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
        .4byte
   "@28@doDirectDraw__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"
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
        .4byte
   "doDirectDraw__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics" .4byte
   "birth__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv" .4byte
   "resetMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv" .4byte
   "clearMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv" .4byte
   "onAlloc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv" .global
   "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"
    "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>":
        .4byte 0
        .4byte 0
        .4byte "getMaxObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "getNumObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "isFlagAlive__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
        .4byte "getFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
        .4byte
   "killFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPQ24Game6TFlock"
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
    .global "__vt__36Container<Q34Game12ItemUjamushi3Uja>"
    "__vt__36Container<Q34Game12ItemUjamushi3Uja>":
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
    .global "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"
    "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>":
        .4byte 0
        .4byte 0
        .4byte "first__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "next__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "isDone__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "__ml__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
    .global __vt__Q34Game12ItemUjamushi3Uja
    __vt__Q34Game12ItemUjamushi3Uja:
        .4byte 0
        .4byte 0
        .4byte makeMatrix__Q34Game12ItemUjamushi3UjaFv
        .4byte isVisible__Q34Game12ItemUjamushi3UjaFv
        .4byte isWeed__Q24Game6TFlockFv
        .4byte fear__Q24Game6TFlockFv
        .4byte getRadius__Q24Game6TFlockFv
        .4byte damaged__Q34Game12ItemUjamushi3UjaFf
        .4byte constructor__Q24Game6TFlockFv
    .global __vt__Q24Game6TFlock
    __vt__Q24Game6TFlock:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte isVisible__Q24Game6TFlockFv
        .4byte isWeed__Q24Game6TFlockFv
        .4byte fear__Q24Game6TFlockFv
        .4byte getRadius__Q24Game6TFlockFv
        .4byte damaged__Q24Game6TFlockFf
        .4byte constructor__Q24Game6TFlockFv
    .global __vt__Q44Game12ItemUjamushi13BoidParameter5TNode
    __vt__Q44Game12ItemUjamushi13BoidParameter5TNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q44Game12ItemUjamushi13BoidParameter5TNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game12ItemUjamushi13BoidParameter
    __vt__Q34Game12ItemUjamushi13BoidParameter:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game12ItemUjamushi13BoidParameterFv
        .4byte getChildCount__5CNodeFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515BB8
    lbl_80515BB8:
        .skip 0x4
    .global lbl_80515BBC
    lbl_80515BBC:
        .skip 0x4
    .global mgr__Q24Game12ItemUjamushi
    mgr__Q24Game12ItemUjamushi:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519D90
    lbl_80519D90:
        .4byte 0x3E8A3D71
    .global lbl_80519D94
    lbl_80519D94:
        .4byte 0x00000000
    .global lbl_80519D98
    lbl_80519D98:
        .4byte 0x41200000
    .global lbl_80519D9C
    lbl_80519D9C:
        .float 0.15
    .global lbl_80519DA0
    lbl_80519DA0:
        .float 1.0
    .global lbl_80519DA4
    lbl_80519DA4:
        .4byte 0x426F756E
        .4byte 0x64730000
    .global lbl_80519DAC
    lbl_80519DAC:
        .4byte 0x54617267
        .4byte 0x65740000
    .global lbl_80519DB4
    lbl_80519DB4:
        .4byte 0x52616E64
        .4byte 0x6F6D0000
    .global lbl_80519DBC
    lbl_80519DBC:
        .4byte 0x3FC00000
    .global lbl_80519DC0
    lbl_80519DC0:
        .4byte 0x476F686F
        .4byte 0x6D650000
    .global lbl_80519DC8
    lbl_80519DC8:
        .4byte 0x50696B69
        .4byte 0x00000000
    .global lbl_80519DD0
    lbl_80519DD0:
        .4byte 0x3E4CCCCD
    .global lbl_80519DD4
    lbl_80519DD4:
        .4byte 0x4E617669
        .4byte 0x00000000
    .global lbl_80519DDC
    lbl_80519DDC:
        .float 0.1
    .global lbl_80519DE0
    lbl_80519DE0:
        .4byte 0x41F00000
    .global lbl_80519DE4
    lbl_80519DE4:
        .4byte 0x43480000
    .global lbl_80519DE8
    lbl_80519DE8:
        .4byte 0x466F7600
    .global lbl_80519DEC
    lbl_80519DEC:
        .4byte 0x43340000
    .global lbl_80519DF0
    lbl_80519DF0:
        .4byte 0x42480000
    .global lbl_80519DF4
    lbl_80519DF4:
        .4byte 0x447A0000
    .global lbl_80519DF8
    lbl_80519DF8:
        .4byte 0x44870000
    .global lbl_80519DFC
    lbl_80519DFC:
        .4byte 0x41800000
    .global lbl_80519E00
    lbl_80519E00:
        .float 0.3
    .global lbl_80519E04
    lbl_80519E04:
        .4byte 0x83898343
        .4byte 0x83740000
    .global lbl_80519E0C
    lbl_80519E0C:
        .4byte 0x44160000
    .global lbl_80519E10
    lbl_80519E10:
        .float 0.5
    .global lbl_80519E14
    lbl_80519E14:
        .4byte 0x47000000
    .global lbl_80519E18
    lbl_80519E18:
        .4byte 0x40C90FDB
    .global lbl_80519E1C
    lbl_80519E1C:
        .4byte 0x42C80000
    .global lbl_80519E20
    lbl_80519E20:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519E28
    lbl_80519E28:
        .4byte 0x46480000
    .global lbl_80519E2C
    lbl_80519E2C:
        .4byte 0x42700000
    .global lbl_80519E30
    lbl_80519E30:
        .4byte 0x40800000
    .global lbl_80519E34
    lbl_80519E34:
        .4byte 0x40490FDB
    .global lbl_80519E38
    lbl_80519E38:
        .4byte 0x41A00000
    .global lbl_80519E3C
    lbl_80519E3C:
        .4byte 0x3E0F5C29
    .global lbl_80519E40
    lbl_80519E40:
        .4byte 0xC3A2F983
    .global lbl_80519E44
    lbl_80519E44:
        .4byte 0x43A2F983
    .global lbl_80519E48
    lbl_80519E48:
        .4byte 0x3FC90FDB
    .global lbl_80519E4C
    lbl_80519E4C:
        .4byte 0xC1700000
    .global lbl_80519E50
    lbl_80519E50:
        .4byte 0x41492050
        .4byte 0x494B4900
    .global lbl_80519E58
    lbl_80519E58:
        .4byte 0x44A00000
    .global lbl_80519E5C
    lbl_80519E5C:
        .4byte 0x41492041
        .4byte 0x4C4E0000
    .global lbl_80519E64
    lbl_80519E64:
        .4byte 0x40000000
    .global lbl_80519E68
    lbl_80519E68:
        .4byte 0x3BB60B61
    .global lbl_80519E6C
    lbl_80519E6C:
        .4byte 0x41000000
    .global lbl_80519E70
    lbl_80519E70:
        .4byte 0x3F4CCCCD
    .global lbl_80519E74
    lbl_80519E74:
        .4byte 0x40C00000
    .global lbl_80519E78
    lbl_80519E78:
        .4byte 0xBF800000
    .global lbl_80519E7C
    lbl_80519E7C:
        .4byte 0x42200000
    .global lbl_80519E80
    lbl_80519E80:
        .4byte 0x42900000
    .global lbl_80519E84
    lbl_80519E84:
        .4byte 0x3F7D70A4
    .global lbl_80519E88
    lbl_80519E88:
        .4byte 0x440C0000
    .global lbl_80519E8C
    lbl_80519E8C:
        .4byte 0x42F00000
    .global lbl_80519E90
    lbl_80519E90:
        .4byte 0x756A6141
        .4byte 0x49000000
    .global lbl_80519E98
    lbl_80519E98:
        .4byte 0x43FA0000
    .global lbl_80519E9C
    lbl_80519E9C:
        .4byte 0x42B40000
    .global lbl_80519EA0
    lbl_80519EA0:
        .4byte 0x3ECCCCCD
    .global lbl_80519EA4
    lbl_80519EA4:
        .4byte 0x40400000
    .global lbl_80519EA8
    lbl_80519EA8:
        .4byte 0x6172632E
        .4byte 0x737A7300
    .global lbl_80519EB0
    lbl_80519EB0:
        .float 0.35

    .section .sbss2, "", @nobits # 0x80520e40 - 0x80520ED8
    .global lbl_80520E80
    lbl_80520E80:
        .skip 0x8
*/

#if NOPE
namespace Game {

/*
 * --INFO--
 * Address:	80205A28
 * Size:	0003D4
 */
ItemUjamushi::BoidParms::BoidParms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	lis      r4, lbl_80481D40@ha
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_80481D40@l
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80205A58
	addi     r0, r30, 0x264
	stw      r0, 0(r30)

lbl_80205A58:
	li       r0, 0
	lis      r5, 0x70303030@ha
	stw      r0, 4(r30)
	addi     r0, r31, 0x1c
	mr       r4, r30
	addi     r3, r30, 0xc
	stw      r0, 8(r30)
	addi     r5, r5, 0x70303030@l
	addi     r6, r31, 0x28
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519D90@sda21(r2)
	stw      r0, 0xc(r30)
	mr       r4, r30
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0x34
	stfs     f0, 0x24(r30)
	addi     r5, r5, 0x70303031@l
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r6, r31, 0x34
	stfs     f1, 0x2c(r30)
	stfs     f0, 0x30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519D9C@sda21(r2)
	stw      r0, 0x34(r30)
	mr       r4, r30
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0x5c
	stfs     f0, 0x4c(r30)
	addi     r5, r5, 0x70303032@l
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r6, r31, 0x40
	stfs     f1, 0x54(r30)
	stfs     f0, 0x58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519DA0@sda21(r2)
	stw      r0, 0x5c(r30)
	mr       r4, r30
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0x84
	stfs     f0, 0x74(r30)
	addi     r5, r5, 0x70303033@l
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r6, r2, lbl_80519DA4@sda21
	stfs     f1, 0x7c(r30)
	stfs     f0, 0x80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519DA0@sda21(r2)
	stw      r0, 0x84(r30)
	mr       r4, r30
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0xac
	stfs     f0, 0x9c(r30)
	addi     r5, r5, 0x70303034@l
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r6, r2, lbl_80519DAC@sda21
	stfs     f1, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303035@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80519D94@sda21(r2)
	stw      r0, 0xac(r30)
	mr       r4, r30
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r3, r30, 0xd4
	stfs     f1, 0xc4(r30)
	addi     r5, r5, 0x70303035@l
	addi     r6, r2, lbl_80519DB4@sda21
	stfs     f1, 0xcc(r30)
	stfs     f0, 0xd0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303036@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519DBC@sda21(r2)
	stw      r0, 0xd4(r30)
	mr       r4, r30
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0xfc
	stfs     f0, 0xec(r30)
	addi     r5, r5, 0x70303036@l
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r6, r2, lbl_80519DC0@sda21
	stfs     f1, 0xf4(r30)
	stfs     f0, 0xf8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303038@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80519D94@sda21(r2)
	stw      r0, 0xfc(r30)
	mr       r4, r30
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r3, r30, 0x124
	stfs     f1, 0x114(r30)
	addi     r5, r5, 0x70303038@l
	addi     r6, r2, lbl_80519DC8@sda21
	stfs     f1, 0x11c(r30)
	stfs     f0, 0x120(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303039@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519DD0@sda21(r2)
	stw      r0, 0x124(r30)
	mr       r4, r30
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0x14c
	stfs     f0, 0x13c(r30)
	addi     r5, r5, 0x70303039@l
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r6, r2, lbl_80519DD4@sda21
	stfs     f1, 0x144(r30)
	stfs     f0, 0x148(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303130@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519DDC@sda21(r2)
	stw      r0, 0x14c(r30)
	mr       r4, r30
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0x174
	stfs     f0, 0x164(r30)
	addi     r5, r5, 0x70303130@l
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r6, r31, 0x4c
	stfs     f1, 0x16c(r30)
	stfs     f0, 0x170(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303131@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80519D98@sda21(r2)
	stw      r0, 0x174(r30)
	mr       r4, r30
	lfs      f0, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0x19c
	stfs     f1, 0x18c(r30)
	addi     r5, r5, 0x70303131@l
	addi     r6, r31, 0x58
	stfs     f0, 0x194(r30)
	stfs     f1, 0x198(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303132@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519DE0@sda21(r2)
	stw      r0, 0x19c(r30)
	mr       r4, r30
	lfs      f1, lbl_80519DA0@sda21(r2)
	addi     r3, r30, 0x1c4
	stfs     f0, 0x1b4(r30)
	addi     r5, r5, 0x70303132@l
	lfs      f0, lbl_80519DE4@sda21(r2)
	addi     r6, r2, lbl_80519DE8@sda21
	stfs     f1, 0x1bc(r30)
	stfs     f0, 0x1c0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303133@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519DE0@sda21(r2)
	stw      r0, 0x1c4(r30)
	mr       r4, r30
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0x1ec
	stfs     f0, 0x1dc(r30)
	addi     r5, r5, 0x70303133@l
	lfs      f0, lbl_80519DEC@sda21(r2)
	addi     r6, r31, 0x64
	stfs     f1, 0x1e4(r30)
	stfs     f0, 0x1e8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303134@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519DF0@sda21(r2)
	stw      r0, 0x1ec(r30)
	mr       r4, r30
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0x214
	stfs     f0, 0x204(r30)
	addi     r5, r5, 0x70303134@l
	lfs      f0, lbl_80519DF4@sda21(r2)
	addi     r6, r31, 0x70
	stfs     f1, 0x20c(r30)
	stfs     f0, 0x210(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303037@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519DEC@sda21(r2)
	stw      r0, 0x214(r30)
	mr       r4, r30
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r3, r30, 0x23c
	stfs     f0, 0x22c(r30)
	addi     r5, r5, 0x70303037@l
	lfs      f0, lbl_80519DF8@sda21(r2)
	addi     r6, r31, 0x7c
	stfs     f1, 0x234(r30)
	stfs     f0, 0x238(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_80519DFC@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80519D94@sda21(r2)
	stw      r0, 0x23c(r30)
	mr       r3, r30
	lfs      f0, lbl_80519DEC@sda21(r2)
	stfs     f2, 0x254(r30)
	stfs     f1, 0x25c(r30)
	stfs     f0, 0x260(r30)
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
 * Address:	80205DFC
 * Size:	000138
 */
void ItemUjamushi::BoidParms::blendTo(Game::ItemUjamushi::BoidParms&, Game::ItemUjamushi::BoidParms&, float)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x45C0(r2)
	  lfs       f2, 0x24(r4)
	  fsubs     f0, f0, f1
	  lfs       f3, 0x24(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x24(r5)
	  lfs       f2, 0x4C(r4)
	  lfs       f3, 0x4C(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x4C(r5)
	  lfs       f2, 0x74(r4)
	  lfs       f3, 0x74(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x74(r5)
	  lfs       f2, 0x9C(r4)
	  lfs       f3, 0x9C(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x9C(r5)
	  lfs       f2, 0xC4(r4)
	  lfs       f3, 0xC4(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0xC4(r5)
	  lfs       f2, 0xEC(r4)
	  lfs       f3, 0xEC(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0xEC(r5)
	  lfs       f2, 0x114(r4)
	  lfs       f3, 0x114(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x114(r5)
	  lfs       f2, 0x13C(r4)
	  lfs       f3, 0x13C(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x13C(r5)
	  lfs       f2, 0x164(r4)
	  lfs       f3, 0x164(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x164(r5)
	  lfs       f2, 0x18C(r4)
	  lfs       f3, 0x18C(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x18C(r5)
	  lfs       f2, 0x1B4(r4)
	  lfs       f3, 0x1B4(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x1B4(r5)
	  lfs       f2, 0x1DC(r4)
	  lfs       f3, 0x1DC(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x1DC(r5)
	  lfs       f2, 0x204(r4)
	  lfs       f3, 0x204(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x204(r5)
	  lfs       f2, 0x22C(r4)
	  lfs       f3, 0x22C(r3)
	  fmuls     f2, f1, f2
	  fmadds    f2, f0, f3, f2
	  stfs      f2, 0x22C(r5)
	  lfs       f2, 0x254(r4)
	  lfs       f3, 0x254(r3)
	  fmuls     f1, f1, f2
	  fmadds    f0, f0, f3, f1
	  stfs      f0, 0x254(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80205F34
 * Size:	00004C
 */
ItemUjamushi::BoidParameter::BoidParameter(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q34Game12ItemUjamushi13BoidParameter@ha
	addi     r3, r31, 0x18
	addi     r0, r4, __vt__Q34Game12ItemUjamushi13BoidParameter@l
	stw      r0, 0(r31)
	bl       __ct__Q44Game12ItemUjamushi13BoidParameter5TNodeFv
	mr       r3, r31
	bl       newParms__Q34Game12ItemUjamushi13BoidParameterFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80205F80
 * Size:	000060
 */
ItemUjamushi::BoidParameter::TNode::~TNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80205FC4
	lis      r5, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80205FC4
	mr       r3, r30
	bl       __dl__FPv

lbl_80205FC4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80205FE0
 * Size:	000048
 */
ItemUjamushi::BoidParameter::TNode::TNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@ha
	addi     r3, r31, 0x18
	addi     r0, r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@l
	li       r4, 1
	stw      r0, 0(r31)
	bl       __ct__Q34Game12ItemUjamushi9BoidParmsFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80206028
 * Size:	0000C0
 */
void ItemUjamushi::BoidParameter::getParms(int, int, float, Game::ItemUjamushi::BoidParms&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r5
	  stw       r30, 0x10(r1)
	  stw       r29, 0xC(r1)
	  mr        r29, r6
	  stw       r28, 0x8(r1)
	  mr        r28, r3
	  addi      r3, r28, 0x18
	  bl        0x20B640
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r28, 0x18
	  bl        0x20B630
	  cmplwi    r30, 0
	  mr        r31, r3
	  li        r0, 0
	  beq-      .loc_0x64
	  cmplwi    r31, 0
	  beq-      .loc_0x64
	  li        r0, 0x1

	.loc_0x64:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x88
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x8F
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DBA6C

	.loc_0x88:
	  fmr       f1, f31
	  mr        r5, r29
	  addi      r3, r30, 0x18
	  addi      r4, r31, 0x18
	  bl        -0x2C4
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  lwz       r28, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802060E8
 * Size:	000048
 */
void ItemUjamushi::BoidParameter::newParms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x280
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80206114
	bl       __ct__Q44Game12ItemUjamushi13BoidParameter5TNodeFv
	mr       r4, r3

lbl_80206114:
	addi     r3, r31, 0x18
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void ItemUjamushi::BoidParameter::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80206130
 * Size:	0000A8
 */
void ItemUjamushi::BoidParameter::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	mr       r28, r4
	stw      r0, 0x28(r3)
	mr       r3, r28
	stw      r0, 0x24(r29)
	stw      r0, 0x20(r29)
	stw      r0, 0x1c(r29)
	bl       readInt__6StreamFv
	mr       r31, r3
	li       r30, 0
	b        lbl_80206188

lbl_8020617C:
	mr       r3, r29
	bl       newParms__Q34Game12ItemUjamushi13BoidParameterFv
	addi     r30, r30, 1

lbl_80206188:
	cmpw     r30, r31
	blt      lbl_8020617C
	lwz      r30, 0x28(r29)
	li       r29, 0
	b        lbl_802061B0

lbl_8020619C:
	mr       r4, r28
	addi     r3, r30, 0x18
	bl       read__10ParametersFR6Stream
	lwz      r30, 4(r30)
	addi     r29, r29, 1

lbl_802061B0:
	cmpw     r29, r31
	blt      lbl_8020619C
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
 * Address:	........
 * Size:	000148
 */
ItemUjamushi::UjaParms::UjaParms(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802061D8
 * Size:	0000A8
 */
ItemUjamushi::Uja::Uja(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__Q24Game6TFlock@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q24Game6TFlock@l
	li       r4, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __vt__Q34Game12ItemUjamushi3Uja@ha
	stw      r0, 0xc(r31)
	addi     r0, r3, __vt__Q34Game12ItemUjamushi3Uja@l
	addi     r3, r31, 0x78
	stb      r4, 0x40(r31)
	stw      r0, 0xc(r31)
	bl       __ct__Q24Game13UpdateContextFv
	lfs      f0, lbl_80519D94@sda21(r2)
	li       r3, 0
	li       r0, 4
	stfs     f0, 0(r31)
	stfs     f0, 4(r31)
	stfs     f0, 8(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stfs     f0, 0x58(r31)
	stw      r3, 0x74(r31)
	stw      r0, 0xbc(r31)
	lwz      r0, 0xbc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0xc0(r31)
	lwz      r0, 0xbc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0xc4(r31)
	mr       r3, r31
	bl       clearBuffer__Q34Game12ItemUjamushi3UjaFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
void init__Q34Game12ItemUjamushi3UjaFPQ34Game12ItemUjamushi6UjaMgrR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80206280
 * Size:	000028
 */
void ItemUjamushi::Uja::damaged(float)
{
	/*
	lfs      f2, 0xa8(r3)
	lfs      f0, lbl_80519D94@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0xa8(r3)
	lfs      f1, 0xa8(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm   r3, r0, 3, 0x1f, 0x1f
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void setPosition__Q34Game12ItemUjamushi3UjaFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	802062A8
 * Size:	00003C
 */
void ItemUjamushi::Uja::clearBuffer(void)
{
	/*
	li       r6, 0
	lfs      f0, lbl_80519E28@sda21(r2)
	mr       r5, r6
	li       r7, 0
	b        lbl_802062D4

lbl_802062BC:
	lwz      r4, 0xc0(r3)
	addi     r7, r7, 1
	stwx     r5, r4, r6
	lwz      r4, 0xc4(r3)
	stfsx    f0, r4, r6
	addi     r6, r6, 4

lbl_802062D4:
	lwz      r0, 0xbc(r3)
	cmpw     r7, r0
	blt      lbl_802062BC
	blr
	*/
}

/*
 * --INFO--
 * Address:	802062E4
 * Size:	000318
 */
void ItemUjamushi::Uja::updateBuffer(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r31, r3
	addi     r3, r31, 0x78
	bl       updatable__Q24Game13UpdateContextFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802065D4
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x20(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_8020635C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802065B4

lbl_8020635C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802063C8

lbl_80206374:
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
	bne      lbl_802065B4
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802063C8:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80206374
	b        lbl_802065B4

lbl_802063E8:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802064F8
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 4(r31)
	lfs      f3, 0x10(r1)
	fsubs    f4, f1, f0
	lfs      f2, 8(r31)
	lfs      f1, 8(r1)
	lfs      f0, 0(r31)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80519D94@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_80206480
	ble      lbl_80206484
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_80206484

lbl_80206480:
	fmr      f31, f0

lbl_80206484:
	lfs      f0, lbl_80519E2C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_802064F8
	li       r28, 0
	li       r29, 0
	b        lbl_802064EC

lbl_8020649C:
	lwz      r3, 0xc0(r31)
	lwzx     r3, r3, r29
	cmplwi   r3, 0
	beq      lbl_802064D4
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802064D4
	lwz      r3, 0xc4(r31)
	lfsx     f0, r3, r29
	fcmpo    cr0, f0, f31
	ble      lbl_802064E4

lbl_802064D4:
	lwz      r3, 0xc0(r31)
	stwx     r30, r3, r29
	lwz      r3, 0xc4(r31)
	stfsx    f31, r3, r29

lbl_802064E4:
	addi     r29, r29, 4
	addi     r28, r28, 1

lbl_802064EC:
	lwz      r0, 0xbc(r31)
	cmpw     r28, r0
	blt      lbl_8020649C

lbl_802064F8:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_80206524
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802065B4

lbl_80206524:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_80206598

lbl_80206544:
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
	bne      lbl_802065B4
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_80206598:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80206544

lbl_802065B4:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_802063E8

lbl_802065D4:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802065FC
 * Size:	0000AC
 */
void ItemUjamushi::Uja::makeMatrix(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	mr       r8, r3
	lfs      f0, lbl_80519D94@sda21(r2)
	stw      r0, 0x34(r1)
	addi     r4, r1, 0x14
	addi     r5, r1, 0x20
	addi     r6, r1, 8
	lfs      f2, 0x5c(r3)
	addi     r3, r8, 0x10
	lfs      f1, 0xb8(r8)
	stfs     f1, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f0, 0x28(r1)
	lfs      f2, 0x64(r8)
	stfs     f2, 0x14(r1)
	lfs      f1, 0x68(r8)
	stfs     f1, 0x18(r1)
	lfs      f0, 0x6c(r8)
	stfs     f0, 0x1c(r1)
	lwz      r7, 0x74(r8)
	lwz      r7, 0x310(r7)
	lfs      f3, 0x24(r7)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0(r8)
	stfs     f0, 8(r1)
	lfs      f1, 4(r8)
	stfs     f1, 0xc(r1)
	lfs      f0, 8(r8)
	stfs     f0, 0x10(r1)
	lfs      f0, 0xb4(r8)
	fadds    f0, f1, f0
	stfs     f0, 0xc(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802066A8
 * Size:	00015C
 */
void ItemUjamushi::Uja::updateScale(float)
{
	/*
	lfs      f0, lbl_80519E38@sda21(r2)
	stwu     r1, -0x30(r1)
	fdivs    f0, f1, f0
	lfs      f1, lbl_80519E34@sda21(r2)
	lwz      r5, sys@sda21(r13)
	lwz      r4, 0x74(r3)
	lfs      f4, lbl_80519E30@sda21(r2)
	lwz      r4, 0x310(r4)
	fmuls    f3, f1, f0
	lfs      f5, 0x54(r5)
	lfs      f2, 0x9c(r4)
	lfs      f1, 0x70(r3)
	fmuls    f3, f4, f3
	lfs      f0, lbl_80519E18@sda21(r2)
	fmuls    f3, f5, f3
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x70(r3)
	lfs      f1, 0x70(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80206700
	fsubs    f0, f1, f0
	stfs     f0, 0x70(r3)

lbl_80206700:
	lfs      f1, 0x70(r3)
	lfs      f0, lbl_80519D94@sda21(r2)
	lfs      f3, lbl_80519E3C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80206740
	lfs      f0, lbl_80519E40@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_80206764

lbl_80206740:
	lfs      f0, lbl_80519E44@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_80206764:
	lfs      f1, lbl_80519DA0@sda21(r2)
	lfs      f0, lbl_80519D94@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x64(r3)
	lfs      f1, 0x70(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80206784
	fneg     f1, f1

lbl_80206784:
	lfs      f0, lbl_80519E44@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	lfs      f2, lbl_80519E3C@sda21(r2)
	fmuls    f3, f1, f0
	addi     r4, r4, 4
	lfs      f1, lbl_80519DA0@sda21(r2)
	lfs      f0, lbl_80519D94@sda21(r2)
	fctiwz   f3, f3
	stfd     f3, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r4, r0
	fmadds   f1, f2, f3, f1
	stfs     f1, 0x6c(r3)
	lfs      f1, 0x70(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802067D0
	fneg     f1, f1

lbl_802067D0:
	lfs      f0, lbl_80519E44@sda21(r2)
	lfs      f2, lbl_80519E3C@sda21(r2)
	fmuls    f1, f1, f0
	lfs      f0, lbl_80519DA0@sda21(r2)
	fctiwz   f1, f1
	stfd     f1, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x68(r3)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80206804
 * Size:	00134C
 */
void ItemUjamushi::Uja::update(Game::ItemUjamushi::BoidParms&)
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stfd     f31, 0x420(r1)
	psq_st   f31, 1064(r1), 0, qr0
	stfd     f30, 0x410(r1)
	psq_st   f30, 1048(r1), 0, qr0
	stfd     f29, 0x400(r1)
	psq_st   f29, 1032(r1), 0, qr0
	stfd     f28, 0x3f0(r1)
	psq_st   f28, 1016(r1), 0, qr0
	stfd     f27, 0x3e0(r1)
	psq_st   f27, 1000(r1), 0, qr0
	stfd     f26, 0x3d0(r1)
	psq_st   f26, 984(r1), 0, qr0
	stfd     f25, 0x3c0(r1)
	psq_st   f25, 968(r1), 0, qr0
	stfd     f24, 0x3b0(r1)
	psq_st   f24, 952(r1), 0, qr0
	stfd     f23, 0x3a0(r1)
	psq_st   f23, 936(r1), 0, qr0
	stfd     f22, 0x390(r1)
	psq_st   f22, 920(r1), 0, qr0
	stfd     f21, 0x380(r1)
	psq_st   f21, 904(r1), 0, qr0
	stfd     f20, 0x370(r1)
	psq_st   f20, 888(r1), 0, qr0
	stfd     f19, 0x360(r1)
	psq_st   f19, 872(r1), 0, qr0
	stfd     f18, 0x350(r1)
	psq_st   f18, 856(r1), 0, qr0
	stfd     f17, 0x340(r1)
	psq_st   f17, 840(r1), 0, qr0
	stfd     f16, 0x330(r1)
	psq_st   f16, 824(r1), 0, qr0
	stfd     f15, 0x320(r1)
	psq_st   f15, 808(r1), 0, qr0
	stfd     f14, 0x310(r1)
	psq_st   f14, 792(r1), 0, qr0
	stw      r31, 0x30c(r1)
	stw      r30, 0x308(r1)
	stw      r29, 0x304(r1)
	stw      r28, 0x300(r1)
	mr       r29, r3
	mr       r30, r4
	lbz      r0, 0xac(r3)
	cmplwi   r0, 6
	beq      lbl_80207AA0
	lwz      r6, sys@sda21(r13)
	cmplwi   r0, 4
	lfs      f26, 0x54(r6)
	bne      lbl_8020694C
	lfs      f2, 0xb8(r29)
	lfs      f0, lbl_80519E48@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802068F8
	fmuls    f0, f0, f26
	lfs      f1, lbl_80519E30@sda21(r2)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0xb8(r29)
	b        lbl_80206908

lbl_802068F8:
	lfs      f1, lbl_80519D98@sda21(r2)
	lfs      f0, 0xb4(r29)
	fnmsubs  f0, f1, f26, f0
	stfs     f0, 0xb4(r29)

lbl_80206908:
	mr       r3, r29
	lwz      r12, 0xc(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_80519E1C@sda21(r2)
	mr       r3, r29
	bl       updateScale__Q34Game12ItemUjamushi3UjaFf
	lfs      f1, 0xb4(r29)
	lfs      f0, lbl_80519E4C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80207AA0
	stfs     f0, 0xb4(r29)
	li       r0, 6
	stb      r0, 0xac(r29)
	b        lbl_80207AA0
	b        lbl_80207AA0

lbl_8020694C:
	lwz      r3, 0x74(r29)
	addi     r4, r2, lbl_80519E50@sda21
	lfs      f25, lbl_80519D94@sda21(r2)
	li       r5, 1
	lwz      r3, 0x310(r3)
	lfs      f1, lbl_80519D98@sda21(r2)
	fmr      f24, f25
	lfs      f0, 0x24(r3)
	fmr      f23, f25
	stfs     f25, 0x2f4(r1)
	fmuls    f29, f1, f0
	lfs      f30, 0x1b4(r30)
	stfs     f25, 0x2f0(r1)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	mr       r3, r29
	bl       updateBuffer__Q34Game12ItemUjamushi3UjaFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519E50@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r4, 0x74(r29)
	mr       r5, r29
	addi     r3, r1, 0x1dc
	addi     r4, r4, 0x7c
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1dc(r1)
	addi     r3, r1, 0x2b4
	lfs      f1, 0x1e0(r1)
	lfs      f0, 0x1e4(r1)
	stfs     f2, 0x2b4(r1)
	stfs     f1, 0x2b8(r1)
	stfs     f0, 0x2bc(r1)
	bl       "normalise__10Vector3<f>Fv"
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519E5C@sda21
	lfs      f28, lbl_80519E58@sda21(r2)
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	addi     r3, r29, 0x78
	bl       updatable__Q24Game13UpdateContextFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80206A24
	lfs      f22, 0x84(r29)
	lfs      f21, 0x88(r29)
	lfs      f20, 0x8c(r29)
	lfs      f0, 0x90(r29)
	stfs     f0, 0x2b4(r1)
	lfs      f0, 0x94(r29)
	stfs     f0, 0x2b8(r1)
	lfs      f0, 0x98(r29)
	stfs     f0, 0x2bc(r1)
	b        lbl_80206CA8

lbl_80206A24:
	lfs      f22, lbl_80519D94@sda21(r2)
	fadds    f28, f29, f29
	li       r28, 0
	stfs     f22, 0x2b4(r1)
	fmr      f21, f22
	fmr      f20, f22
	stfs     f22, 0x2b8(r1)
	stfs     f22, 0x2bc(r1)
	lfs      f0, 0x204(r30)
	lwz      r5, 0x74(r29)
	fadds    f14, f29, f0
	cmplwi   r5, 0
	beq      lbl_80206A5C
	addi     r5, r5, 0x20

lbl_80206A5C:
	lis      r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0x2b0(r1)
	addi     r3, r1, 0x2a4
	stw      r4, 0x2a4(r1)
	stw      r0, 0x2a8(r1)
	stw      r5, 0x2ac(r1)
	bl       "first__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
	lfs      f0, lbl_80519E64@sda21(r2)
	fmuls    f15, f0, f29
	b        lbl_80206BD8

lbl_80206A8C:
	lwz      r3, 0x2ac(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	cmplw    r31, r29
	beq      lbl_80206BD0
	lbz      r0, 0xac(r31)
	cmplwi   r0, 2
	beq      lbl_80206BD0
	mr       r4, r29
	mr       r5, r31
	addi     r3, r1, 0x1d0
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1d0(r1)
	addi     r3, r1, 0x298
	lfs      f1, 0x1d4(r1)
	lfs      f0, 0x1d8(r1)
	stfs     f2, 0x298(r1)
	stfs     f1, 0x29c(r1)
	stfs     f0, 0x2a0(r1)
	bl       "normalise__10Vector3<f>Fv"
	fmr      f16, f1
	lfs      f17, 0x1dc(r30)
	fcmpo    cr0, f16, f14
	bge      lbl_80206BB0
	lfs      f0, lbl_80519D94@sda21(r2)
	fcmpo    cr0, f16, f0
	ble      lbl_80206B44
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x298(r1)
	lfs      f2, 0x2a0(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x5c(r29)
	bl       angDist__Fff
	lfs      f0, lbl_80519E68@sda21(r2)
	fabs     f2, f1
	lfs      f1, lbl_80519E34@sda21(r2)
	fmuls    f0, f0, f17
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	bgt      lbl_80206BD0

lbl_80206B44:
	lfs      f1, 0x2b4(r1)
	addi     r3, r1, 0x28c
	lfs      f0, 0(r31)
	lfs      f2, 0x2b8(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x2bc(r1)
	stfs     f0, 0x2b4(r1)
	lfs      f0, 4(r31)
	fadds    f0, f2, f0
	stfs     f0, 0x2b8(r1)
	lfs      f0, 8(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x2bc(r1)
	lfs      f0, 0x50(r31)
	stfs     f0, 0x28c(r1)
	lfs      f0, 0x54(r31)
	stfs     f0, 0x290(r1)
	lfs      f0, 0x58(r31)
	stfs     f0, 0x294(r1)
	bl       "normalise__10Vector3<f>Fv"
	lfs      f2, 0x50(r31)
	addi     r28, r28, 1
	lfs      f1, 0x54(r31)
	lfs      f0, 0x58(r31)
	fadds    f22, f22, f2
	fadds    f21, f21, f1
	fadds    f20, f20, f0

lbl_80206BB0:
	fcmpo    cr0, f16, f28
	bge      lbl_80206BD0
	fsubs    f2, f15, f16
	lfs      f1, 0x2a0(r1)
	lfs      f0, 0x298(r1)
	fmr      f28, f16
	fmuls    f24, f1, f2
	fmuls    f25, f0, f2

lbl_80206BD0:
	addi     r3, r1, 0x2a4
	bl       "next__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"

lbl_80206BD8:
	lwz      r3, 0x2ac(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2a8(r1)
	cmplw    r4, r3
	bne      lbl_80206A8C
	cmpwi    r28, 0
	ble      lbl_80206CA8
	xoris    r3, r28, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c4(r1)
	mr       r5, r29
	lfd      f1, lbl_80519E20@sda21(r2)
	addi     r3, r1, 0x1c4
	stw      r0, 0x2c0(r1)
	addi     r4, r1, 0x2b4
	lfs      f2, lbl_80519DA0@sda21(r2)
	lfd      f0, 0x2c0(r1)
	fsubs    f0, f0, f1
	fdivs    f3, f2, f0
	fmuls    f22, f22, f3
	fmuls    f21, f21, f3
	fmuls    f20, f20, f3
	stfs     f22, 0x84(r29)
	stfs     f21, 0x88(r29)
	stfs     f20, 0x8c(r29)
	lfs      f2, 0x2b4(r1)
	lfs      f1, 0x2b8(r1)
	lfs      f0, 0x2bc(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x2b4(r1)
	stfs     f1, 0x2b8(r1)
	stfs     f0, 0x2bc(r1)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1c4(r1)
	addi     r3, r1, 0x2b4
	lfs      f1, 0x1c8(r1)
	lfs      f0, 0x1cc(r1)
	stfs     f2, 0x2b4(r1)
	stfs     f1, 0x2b8(r1)
	stfs     f0, 0x2bc(r1)
	bl       "normalise__10Vector3<f>Fv"
	lfs      f0, 0x2b4(r1)
	stfs     f0, 0x90(r29)
	lfs      f0, 0x2b8(r1)
	stfs     f0, 0x94(r29)
	lfs      f0, 0x2bc(r1)
	stfs     f0, 0x98(r29)

lbl_80206CA8:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519E5C@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lfs      f0, lbl_80519D94@sda21(r2)
	mr       r5, r29
	addi     r3, r1, 0x1b8
	addi     r4, r29, 0x44
	stfs     f0, 0x280(r1)
	stfs     f0, 0x284(r1)
	stfs     f0, 0x288(r1)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1b8(r1)
	addi     r3, r1, 0x280
	lfs      f1, 0x1bc(r1)
	lfs      f0, 0x1c0(r1)
	stfs     f2, 0x280(r1)
	stfs     f1, 0x284(r1)
	stfs     f0, 0x288(r1)
	bl       "normalise__10Vector3<f>Fv"
	lfs      f31, lbl_80519D94@sda21(r2)
	addi     r3, r29, 0x78
	fmr      f19, f31
	fmr      f18, f31
	bl       updatable__Q24Game13UpdateContextFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80206DF8
	lfs      f0, lbl_80519E64@sda21(r2)
	lwz      r5, 0x74(r29)
	fmuls    f14, f0, f29
	cmplwi   r5, 0
	beq      lbl_80206D2C
	addi     r5, r5, 0x20

lbl_80206D2C:
	lis      r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0x27c(r1)
	addi     r3, r1, 0x270
	stw      r4, 0x270(r1)
	stw      r0, 0x274(r1)
	stw      r5, 0x278(r1)
	bl       "first__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
	b        lbl_80206DD4

lbl_80206D54:
	lwz      r3, 0x278(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmplw    r3, r29
	beq      lbl_80206DCC
	mr       r4, r29
	mr       r5, r3
	addi     r3, r1, 0x1ac
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1ac(r1)
	addi     r3, r1, 0x264
	lfs      f1, 0x1b0(r1)
	lfs      f0, 0x1b4(r1)
	stfs     f2, 0x264(r1)
	stfs     f1, 0x268(r1)
	stfs     f0, 0x26c(r1)
	bl       "normalise__10Vector3<f>Fv"
	fcmpo    cr0, f1, f14
	bge      lbl_80206DCC
	lfs      f31, 0x264(r1)
	fmr      f14, f1
	lfs      f19, 0x268(r1)
	lfs      f18, 0x26c(r1)
	stfs     f31, 0x9c(r29)
	lfs      f0, 0x268(r1)
	stfs     f0, 0xa0(r29)
	lfs      f0, 0x26c(r1)
	stfs     f0, 0xa4(r29)

lbl_80206DCC:
	addi     r3, r1, 0x270
	bl       "next__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"

lbl_80206DD4:
	lwz      r3, 0x278(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x274(r1)
	cmplw    r4, r3
	bne      lbl_80206D54
	b        lbl_80206E04

lbl_80206DF8:
	lfs      f31, 0x9c(r29)
	lfs      f19, 0xa0(r29)
	lfs      f18, 0xa4(r29)

lbl_80206E04:
	lwz      r6, 0x74(r29)
	mr       r5, r29
	lfs      f17, lbl_80519D94@sda21(r2)
	addi     r3, r1, 0x1a0
	lfs      f0, 0x6c(r6)
	addi     r4, r1, 0x258
	stfs     f17, 0x2ec(r1)
	stfs     f0, 0x258(r1)
	lfs      f0, 0x70(r6)
	stfs     f17, 0x2e8(r1)
	stfs     f0, 0x25c(r1)
	lfs      f0, 0x74(r6)
	stfs     f0, 0x260(r1)
	lfs      f14, 0x78(r6)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1a0(r1)
	addi     r3, r1, 0x24c
	lfs      f1, 0x1a4(r1)
	lfs      f0, 0x1a8(r1)
	stfs     f2, 0x24c(r1)
	stfs     f1, 0x250(r1)
	stfs     f0, 0x254(r1)
	bl       "normalise__10Vector3<f>Fv"
	fmr      f27, f1
	lfs      f0, lbl_80519D94@sda21(r2)
	fcmpo    cr0, f27, f0
	ble      lbl_80206F14
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x24c(r1)
	lfs      f2, 0x254(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f2, lbl_80519E6C@sda21(r2)
	lfs      f0, lbl_80519D94@sda21(r2)
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80206EC4
	lfs      f0, lbl_80519E40@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x2c0(r1)
	lwz      r0, 0x2c4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80206EE8

lbl_80206EC4:
	lfs      f0, lbl_80519E44@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x2c8(r1)
	lwz      r0, 0x2cc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80206EE8:
	lfs      f1, lbl_80519DD0@sda21(r2)
	lfs      f0, lbl_80519E70@sda21(r2)
	fmadds   f0, f1, f2, f0
	fmuls    f0, f14, f0
	fcmpo    cr0, f27, f0
	ble      lbl_80206F14
	lfs      f0, 0x250(r1)
	lfs      f17, 0x24c(r1)
	stfs     f0, 0x2ec(r1)
	lfs      f0, 0x254(r1)
	stfs     f0, 0x2e8(r1)

lbl_80206F14:
	lfs      f1, lbl_80519E68@sda21(r2)
	lfs      f0, 0x254(r30)
	lfs      f2, lbl_80519E34@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f14, f2, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2cc(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	stw      r0, 0x2c8(r1)
	lfs      f3, lbl_80519E14@sda21(r2)
	lfd      f0, 0x2c8(r1)
	lfs      f2, lbl_80519E10@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, 0x5c(r29)
	lfs      f0, lbl_80519D94@sda21(r2)
	fdivs    f3, f4, f3
	fsubs    f2, f3, f2
	fmadds   f3, f14, f2, f1
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80206F74
	fneg     f1, f3

lbl_80206F74:
	lfs      f2, lbl_80519E44@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519D94@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	addi     r31, r3, 4
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x2c0(r1)
	lwz      r0, 0x2c4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r31, r0
	stfs     f0, 0x2fc(r1)
	bge      lbl_80206FD4
	lfs      f0, lbl_80519E40@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x2d0(r1)
	lwz      r0, 0x2d4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	stfs     f0, 0x2f8(r1)
	b        lbl_80206FF0

lbl_80206FD4:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x2d8(r1)
	lwz      r0, 0x2dc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	stfs     f0, 0x2f8(r1)

lbl_80206FF0:
	lfs      f27, lbl_80519D94@sda21(r2)
	li       r4, 0
	lwz      r0, naviMgr__4Game@sda21(r13)
	lis      r3, "__vt__22Iterator<Q24Game4Navi>"@ha
	addi     r3, r3, "__vt__22Iterator<Q24Game4Navi>"@l
	fmr      f16, f27
	fmr      f15, f27
	stw      r3, 0x23c(r1)
	addi     r3, r1, 0x23c
	stw      r4, 0x248(r1)
	stw      r4, 0x240(r1)
	stw      r0, 0x244(r1)
	bl       "first__22Iterator<Q24Game4Navi>Fv"
	lfs      f1, lbl_80519E74@sda21(r2)
	fadds    f0, f1, f29
	fadds    f14, f1, f0
	b        lbl_80207100

lbl_80207034:
	lwz      r3, 0x244(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802070F8
	mr       r4, r28
	addi     r3, r1, 0x188
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r5, r29
	addi     r3, r1, 0x194
	addi     r4, r1, 0x188
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x194(r1)
	addi     r3, r1, 0x230
	lfs      f1, 0x198(r1)
	lfs      f0, 0x19c(r1)
	stfs     f2, 0x230(r1)
	stfs     f1, 0x234(r1)
	stfs     f0, 0x238(r1)
	bl       "normalise__10Vector3<f>Fv"
	fcmpo    cr0, f1, f14
	bge      lbl_802070E0
	fcmpo    cr0, f1, f28
	bge      lbl_802070F8
	fsubs    f2, f14, f1
	lfs      f3, lbl_80519E78@sda21(r2)
	fmr      f28, f1
	lfs      f4, 0x238(r1)
	lfs      f0, 0x230(r1)
	fmuls    f1, f3, f2
	fmuls    f24, f4, f1
	fmuls    f25, f0, f1
	b        lbl_802070F8

lbl_802070E0:
	lfs      f0, lbl_80519E7C@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_802070F8
	lfs      f27, 0x230(r1)
	lfs      f16, 0x234(r1)
	lfs      f15, 0x238(r1)

lbl_802070F8:
	addi     r3, r1, 0x23c
	bl       "next__22Iterator<Q24Game4Navi>Fv"

lbl_80207100:
	lwz      r3, 0x244(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x240(r1)
	cmplw    r4, r3
	bne      lbl_80207034
	lfs      f0, lbl_80519D94@sda21(r2)
	mr       r5, r29
	addi     r3, r1, 0x17c
	stfs     f0, 0x224(r1)
	stfs     f0, 0x228(r1)
	stfs     f0, 0x22c(r1)
	lwz      r4, 0x74(r29)
	addi     r4, r4, 0x7c
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x17c(r1)
	addi     r3, r1, 0x224
	lfs      f1, 0x180(r1)
	lfs      f0, 0x184(r1)
	stfs     f2, 0x224(r1)
	stfs     f1, 0x228(r1)
	stfs     f0, 0x22c(r1)
	bl       "normalise__10Vector3<f>Fv"
	lfs      f0, lbl_80519D98@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80207184
	lbz      r0, 0xac(r29)
	cmplwi   r0, 3
	bne      lbl_80207184
	li       r0, 6
	stb      r0, 0xac(r29)

lbl_80207184:
	lwz      r3, 0xc0(r29)
	lfs      f29, lbl_80519D94@sda21(r2)
	lwz      r3, 0(r3)
	stfs     f29, 0x2e4(r1)
	cmplwi   r3, 0
	stfs     f29, 0x2e0(r1)
	beq      lbl_80207394
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80207394
	lwz      r4, 0xc0(r29)
	addi     r3, r1, 0x164
	lwz      r4, 0(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r5, r29
	addi     r3, r1, 0x170
	addi     r4, r1, 0x164
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x170(r1)
	addi     r3, r1, 0x218
	lfs      f1, 0x174(r1)
	lfs      f0, 0x178(r1)
	stfs     f2, 0x218(r1)
	stfs     f1, 0x21c(r1)
	stfs     f0, 0x220(r1)
	bl       "normalise__10Vector3<f>Fv"
	fcmpo    cr0, f1, f14
	bge      lbl_80207234
	fcmpo    cr0, f1, f28
	bge      lbl_80207394
	fsubs    f1, f14, f1
	lfs      f2, lbl_80519E78@sda21(r2)
	lfs      f3, 0x220(r1)
	lfs      f0, 0x218(r1)
	fmuls    f1, f2, f1
	fmuls    f24, f3, f1
	fmuls    f25, f0, f1
	b        lbl_80207394

lbl_80207234:
	lfs      f0, lbl_80519E7C@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_80207394
	lfs      f0, 0x21c(r1)
	lbz      r0, 0xac(r29)
	stfs     f0, 0x2e4(r1)
	lfs      f0, 0x220(r1)
	cmplwi   r0, 0
	lfs      f29, 0x218(r1)
	stfs     f0, 0x2e0(r1)
	bne      lbl_80207394
	lfs      f0, lbl_80519DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80207394
	li       r0, 2
	stb      r0, 0xac(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2dc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x2d8(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 0x2d8(r1)
	lfs      f1, lbl_80519D98@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519E2C@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f14, f1, f2, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2d4(r1)
	fmuls    f3, f29, f14
	lfs      f0, 0x2e0(r1)
	addi     r3, r1, 0x158
	stw      r0, 0x2d0(r1)
	addi     r4, r29, 0x50
	lfd      f5, lbl_80519E20@sda21(r2)
	lfd      f1, 0x2d0(r1)
	fmuls    f0, f0, f14
	lfs      f4, lbl_80519E14@sda21(r2)
	addi     r5, r1, 0x20c
	fsubs    f5, f1, f5
	stfs     f3, 0x20c(r1)
	lfs      f2, lbl_80519D98@sda21(r2)
	lfs      f1, lbl_80519E80@sda21(r2)
	fdivs    f3, f5, f4
	stfs     f0, 0x214(r1)
	fmadds   f0, f2, f3, f1
	stfs     f0, 0x210(r1)
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x158(r1)
	stfs     f0, 0x50(r29)
	lfs      f0, 0x15c(r1)
	stfs     f0, 0x54(r29)
	lfs      f0, 0x160(r1)
	stfs     f0, 0x58(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2cc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x2c8(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x2c8(r1)
	lfs      f0, lbl_80519E84@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80207394
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_80519D94@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game11InteractGas@ha
	stw      r0, 0x200(r1)
	addi     r0, r3, __vt__Q24Game11InteractGas@l
	li       r3, 0
	addi     r4, r1, 0x200
	stw      r3, 0x204(r1)
	stw      r0, 0x200(r1)
	stfs     f0, 0x208(r1)
	lwz      r3, 0xc0(r29)
	lwz      r3, 0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80207394:
	lbz      r0, 0xac(r29)
	cmplwi   r0, 2
	beq      lbl_80207590
	lfs      f0, 0xc4(r30)
	addi     r3, r1, 0xf8
	lfs      f2, 0x280(r1)
	addi     r4, r1, 0xec
	fmuls    f3, f30, f0
	lfs      f1, 0x284(r1)
	lfs      f0, 0x288(r1)
	addi     r5, r1, 0xe0
	lfs      f7, lbl_80519D94@sda21(r2)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	lfs      f6, 0x224(r1)
	fmuls    f0, f0, f3
	lfs      f5, 0x228(r1)
	stfs     f2, 0x8c(r1)
	lfs      f4, 0x22c(r1)
	stfs     f1, 0x90(r1)
	lfs      f3, 0x2b4(r1)
	stfs     f0, 0x94(r1)
	lfs      f2, 0x2b8(r1)
	lfs      f0, 0xec(r30)
	lfs      f1, 0x2bc(r1)
	fmuls    f9, f30, f0
	lfs      f0, 0x2f8(r1)
	fmuls    f8, f0, f9
	lfs      f0, 0x2fc(r1)
	fmuls    f7, f7, f9
	fmuls    f0, f0, f9
	stfs     f8, 0x98(r1)
	stfs     f7, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	lfs      f0, 0x164(r30)
	fmuls    f0, f30, f0
	fmuls    f8, f27, f0
	fmuls    f7, f16, f0
	fmuls    f0, f15, f0
	stfs     f8, 0xa4(r1)
	stfs     f7, 0xa8(r1)
	stfs     f0, 0xac(r1)
	lfs      f0, 0x114(r30)
	fmuls    f0, f30, f0
	fmuls    f6, f6, f0
	fmuls    f5, f5, f0
	fmuls    f0, f4, f0
	stfs     f6, 0xb0(r1)
	stfs     f5, 0xb4(r1)
	stfs     f0, 0xb8(r1)
	lfs      f0, 0x13c(r30)
	fmuls    f6, f30, f0
	lfs      f0, 0x2e4(r1)
	fmuls    f4, f0, f6
	lfs      f0, 0x2e0(r1)
	fmuls    f5, f29, f6
	fmuls    f0, f0, f6
	stfs     f4, 0xc0(r1)
	stfs     f5, 0xbc(r1)
	stfs     f0, 0xc4(r1)
	lfs      f0, 0x9c(r30)
	fmuls    f6, f30, f0
	lfs      f0, 0x2ec(r1)
	fmuls    f4, f0, f6
	lfs      f0, 0x2e8(r1)
	fmuls    f5, f17, f6
	fmuls    f0, f0, f6
	stfs     f4, 0xcc(r1)
	stfs     f5, 0xc8(r1)
	stfs     f0, 0xd0(r1)
	lfs      f0, 0x74(r30)
	fmuls    f0, f30, f0
	fmuls    f5, f31, f0
	fmuls    f4, f19, f0
	fmuls    f0, f18, f0
	stfs     f5, 0xd4(r1)
	stfs     f4, 0xd8(r1)
	stfs     f0, 0xdc(r1)
	lfs      f0, 0x4c(r30)
	fmuls    f5, f22, f0
	fmuls    f4, f21, f0
	fmuls    f0, f20, f0
	stfs     f5, 0xe0(r1)
	stfs     f4, 0xe4(r1)
	stfs     f0, 0xe8(r1)
	lfs      f0, 0x24(r30)
	fmuls    f0, f30, f0
	fmuls    f3, f3, f0
	fmuls    f2, f2, f0
	fmuls    f0, f1, f0
	stfs     f3, 0xec(r1)
	stfs     f2, 0xf0(r1)
	stfs     f0, 0xf4(r1)
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x104
	addi     r4, r1, 0xf8
	addi     r5, r1, 0xd4
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x110
	addi     r4, r1, 0x104
	addi     r5, r1, 0xc8
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x11c
	addi     r4, r1, 0x110
	addi     r5, r1, 0xbc
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x128
	addi     r4, r1, 0x11c
	addi     r5, r1, 0xb0
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x134
	addi     r4, r1, 0x128
	addi     r5, r1, 0xa4
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x140
	addi     r4, r1, 0x134
	addi     r5, r1, 0x98
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x14c
	addi     r4, r1, 0x140
	addi     r5, r1, 0x8c
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x14c(r1)
	lfs      f23, 0x154(r1)
	stfs     f0, 0x2f4(r1)
	lfs      f0, 0x150(r1)
	stfs     f0, 0x2f0(r1)

lbl_80207590:
	lfs      f0, lbl_80519D94@sda21(r2)
	fcmpu    cr0, f0, f23
	beq      lbl_802075DC
	fmr      f2, f23
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x2f4(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x5c(r29)
	bl       angDist__Fff
	lfs      f2, lbl_80519E6C@sda21(r2)
	lfs      f0, 0x5c(r29)
	fmuls    f1, f2, f1
	fmadds   f0, f1, f26, f0
	stfs     f0, 0x5c(r29)
	lfs      f1, 0x5c(r29)
	bl       roundAng__Ff
	stfs     f1, 0x5c(r29)

lbl_802075DC:
	lfs      f3, 0x5c(r29)
	lfs      f0, lbl_80519D94@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802075F4
	fneg     f1, f3

lbl_802075F4:
	lfs      f2, lbl_80519E44@sda21(r2)
	lfs      f0, lbl_80519D94@sda21(r2)
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x2d8(r1)
	lwz      r0, 0x2dc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f5, r31, r0
	bge      lbl_80207648
	lfs      f0, lbl_80519E40@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x2d0(r1)
	lwz      r0, 0x2d4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80207668

lbl_80207648:
	fmuls    f0, f3, f2
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x2c8(r1)
	lwz      r0, 0x2cc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80207668:
	lfs      f3, lbl_80519D94@sda21(r2)
	addi     r3, r1, 0x80
	lfs      f0, 0x2f0(r1)
	addi     r4, r29, 0x50
	lwz      r6, 0x74(r29)
	addi     r5, r1, 0x74
	fmuls    f1, f3, f0
	lfs      f0, 0x2f4(r1)
	lwz      r6, 0x310(r6)
	fmadds   f0, f2, f0, f1
	lfs      f4, 0x4c(r6)
	fmadds   f0, f5, f23, f0
	fmuls    f2, f2, f0
	fmuls    f1, f3, f0
	fmuls    f0, f5, f0
	fmuls    f2, f2, f4
	fmuls    f1, f1, f4
	fmuls    f0, f0, f4
	stfs     f2, 0x74(r1)
	stfs     f1, 0x78(r1)
	stfs     f0, 0x7c(r1)
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x80(r1)
	stfs     f0, 0x50(r29)
	lfs      f0, 0x84(r1)
	stfs     f0, 0x54(r29)
	lfs      f0, 0x88(r1)
	stfs     f0, 0x58(r29)
	lbz      r0, 0xac(r29)
	cmplwi   r0, 2
	beq      lbl_802076EC
	lfs      f0, lbl_80519D94@sda21(r2)
	stfs     f0, 0x54(r29)

lbl_802076EC:
	lbz      r0, 0xac(r29)
	cmplwi   r0, 2
	bne      lbl_80207734
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_80519E88@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x54(r29)
	fnmsubs  f0, f2, f1, f0
	stfs     f0, 0x54(r29)
	lwz      r3, 0x74(r29)
	lfs      f0, 4(r29)
	lfs      f1, 0x70(r3)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80207734
	stfs     f1, 4(r29)
	li       r0, 0
	stb      r0, 0xac(r29)

lbl_80207734:
	addi     r3, r29, 0x50
	bl       "length__10Vector3<f>CFv"
	lbz      r0, 0xac(r29)
	fmr      f14, f1
	cmplwi   r0, 2
	beq      lbl_80207788
	fcmpo    cr0, f14, f30
	ble      lbl_80207788
	lfs      f0, lbl_80519DA0@sda21(r2)
	lfs      f1, 0x50(r29)
	fdivs    f0, f0, f14
	fmuls    f2, f0, f30
	fmr      f14, f30
	fmuls    f0, f1, f2
	stfs     f0, 0x50(r29)
	lfs      f0, 0x54(r29)
	fmuls    f0, f0, f2
	stfs     f0, 0x54(r29)
	lfs      f0, 0x58(r29)
	fmuls    f0, f0, f2
	stfs     f0, 0x58(r29)

lbl_80207788:
	lbz      r0, 0xae(r29)
	cmplwi   r0, 0
	beq      lbl_802077FC
	lbz      r0, 0xad(r29)
	cmplwi   r0, 0
	bne      lbl_802077EC
	li       r0, 0
	stb      r0, 0xae(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2dc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x2d8(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x2d8(r1)
	lfs      f0, lbl_80519E1C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x2d0(r1)
	lwz      r3, 0x2d4(r1)
	addi     r0, r3, 0x32
	stb      r0, 0xad(r29)

lbl_802077EC:
	lbz      r3, 0xad(r29)
	addi     r0, r3, -1
	stb      r0, 0xad(r29)
	b        lbl_80207908

lbl_802077FC:
	lbz      r3, 0xad(r29)
	cmplwi   r3, 0
	beq      lbl_80207868
	addi     r0, r3, -1
	stb      r0, 0xad(r29)
	lbz      r0, 0xad(r29)
	cmplwi   r0, 0
	bne      lbl_80207868
	li       r0, 1
	stb      r0, 0xae(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2dc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x2d8(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x2d8(r1)
	lfs      f0, lbl_80519DE0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x2d0(r1)
	lwz      r3, 0x2d4(r1)
	addi     r0, r3, 0xa
	stb      r0, 0xad(r29)

lbl_80207868:
	lfs      f1, lbl_80519D94@sda21(r2)
	fmuls    f2, f25, f26
	lfs      f3, lbl_80519D98@sda21(r2)
	fmuls    f0, f24, f26
	fmuls    f1, f1, f26
	mr       r4, r29
	fmuls    f2, f2, f3
	fmuls    f0, f0, f3
	addi     r3, r1, 0x68
	fmuls    f1, f1, f3
	stfs     f2, 0x5c(r1)
	addi     r5, r1, 0x5c
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x68(r1)
	mr       r4, r29
	addi     r3, r1, 0x50
	addi     r5, r1, 0x44
	stfs     f0, 0(r29)
	lfs      f0, 0x6c(r1)
	stfs     f0, 4(r29)
	lfs      f0, 0x70(r1)
	stfs     f0, 8(r29)
	lfs      f2, 0x58(r29)
	lfs      f1, 0x54(r29)
	lfs      f0, 0x50(r29)
	fmuls    f2, f2, f26
	fmuls    f1, f1, f26
	fmuls    f0, f0, f26
	stfs     f2, 0x4c(r1)
	stfs     f0, 0x44(r1)
	stfs     f1, 0x48(r1)
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x50(r1)
	stfs     f0, 0(r29)
	lfs      f0, 0x54(r1)
	stfs     f0, 4(r29)
	lfs      f0, 0x58(r1)
	stfs     f0, 8(r29)

lbl_80207908:
	lwz      r6, 0x74(r29)
	mr       r5, r29
	addi     r3, r1, 0x38
	addi     r4, r1, 0x1f4
	lfs      f0, 0x6c(r6)
	stfs     f0, 0x1f4(r1)
	lfs      f0, 0x70(r6)
	stfs     f0, 0x1f8(r1)
	lfs      f0, 0x74(r6)
	stfs     f0, 0x1fc(r1)
	lfs      f15, 0x78(r6)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x38(r1)
	addi     r3, r1, 0x1e8
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	stfs     f2, 0x1e8(r1)
	stfs     f1, 0x1ec(r1)
	stfs     f0, 0x1f0(r1)
	bl       "normalise__10Vector3<f>Fv"
	fmr      f17, f1
	lfs      f0, lbl_80519D94@sda21(r2)
	fcmpo    cr0, f17, f0
	ble      lbl_80207A3C
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x1e8(r1)
	lfs      f2, 0x1f0(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f0, lbl_80519DA0@sda21(r2)
	fmuls    f16, f15, f0
	fcmpo    cr0, f17, f16
	ble      lbl_80207A3C
	lfs      f4, 0x1ec(r1)
	addi     r3, r1, 0x2c
	lfs      f0, 0x54(r29)
	addi     r4, r29, 0x50
	lfs      f3, 0x1e8(r1)
	addi     r5, r1, 0x20
	fmuls    f0, f4, f0
	lfs      f1, 0x50(r29)
	lfs      f5, 0x1f0(r1)
	lfs      f2, 0x58(r29)
	fmadds   f0, f3, f1, f0
	fmadds   f0, f5, f2, f0
	fmuls    f2, f3, f0
	fmuls    f1, f4, f0
	fmuls    f0, f5, f0
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x2c(r1)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x1f4
	addi     r5, r1, 8
	stfs     f0, 0x50(r29)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x54(r29)
	lfs      f0, 0x34(r1)
	stfs     f0, 0x58(r29)
	lfs      f2, 0x1e8(r1)
	lfs      f1, 0x1ec(r1)
	lfs      f0, 0x1f0(r1)
	fmuls    f2, f2, f16
	fmuls    f1, f1, f16
	fmuls    f0, f0, f16
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x14(r1)
	stfs     f0, 0(r29)
	lfs      f0, 0x18(r1)
	stfs     f0, 4(r29)
	lfs      f0, 0x1c(r1)
	stfs     f0, 8(r29)

lbl_80207A3C:
	lwz      r3, 0x74(r29)
	lfs      f1, 4(r29)
	lfs      f2, 0x70(r3)
	fcmpo    cr0, f1, f2
	bge      lbl_80207A6C
	stfs     f2, 4(r29)
	lbz      r0, 0xac(r29)
	cmplwi   r0, 2
	bne      lbl_80207A80
	li       r0, 0
	stb      r0, 0xac(r29)
	b        lbl_80207A80

lbl_80207A6C:
	lfs      f0, lbl_80519E64@sda21(r2)
	fmadds   f0, f0, f15, f2
	fcmpo    cr0, f1, f0
	ble      lbl_80207A80
	stfs     f0, 4(r29)

lbl_80207A80:
	fmr      f1, f14
	mr       r3, r29
	bl       updateScale__Q34Game12ItemUjamushi3UjaFf
	mr       r3, r29
	lwz      r12, 0xc(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80207AA0:
	psq_l    f31, 1064(r1), 0, qr0
	lfd      f31, 0x420(r1)
	psq_l    f30, 1048(r1), 0, qr0
	lfd      f30, 0x410(r1)
	psq_l    f29, 1032(r1), 0, qr0
	lfd      f29, 0x400(r1)
	psq_l    f28, 1016(r1), 0, qr0
	lfd      f28, 0x3f0(r1)
	psq_l    f27, 1000(r1), 0, qr0
	lfd      f27, 0x3e0(r1)
	psq_l    f26, 984(r1), 0, qr0
	lfd      f26, 0x3d0(r1)
	psq_l    f25, 968(r1), 0, qr0
	lfd      f25, 0x3c0(r1)
	psq_l    f24, 952(r1), 0, qr0
	lfd      f24, 0x3b0(r1)
	psq_l    f23, 936(r1), 0, qr0
	lfd      f23, 0x3a0(r1)
	psq_l    f22, 920(r1), 0, qr0
	lfd      f22, 0x390(r1)
	psq_l    f21, 904(r1), 0, qr0
	lfd      f21, 0x380(r1)
	psq_l    f20, 888(r1), 0, qr0
	lfd      f20, 0x370(r1)
	psq_l    f19, 872(r1), 0, qr0
	lfd      f19, 0x360(r1)
	psq_l    f18, 856(r1), 0, qr0
	lfd      f18, 0x350(r1)
	psq_l    f17, 840(r1), 0, qr0
	lfd      f17, 0x340(r1)
	psq_l    f16, 824(r1), 0, qr0
	lfd      f16, 0x330(r1)
	psq_l    f15, 808(r1), 0, qr0
	lfd      f15, 0x320(r1)
	psq_l    f14, 792(r1), 0, qr0
	lfd      f14, 0x310(r1)
	lwz      r31, 0x30c(r1)
	lwz      r30, 0x308(r1)
	lwz      r29, 0x304(r1)
	lwz      r0, 0x434(r1)
	lwz      r28, 0x300(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80207B50
 * Size:	000050
 */
void Vector3f::length() const
{
	/*
	lfs      f3, 0(r3)
	lfs      f1, 4(r3)
	fmuls    f0, f3, f3
	lfs      f4, 8(r3)
	fmuls    f1, f1, f1
	lfs      f2, lbl_80519D94@sda21(r2)
	fmuls    f4, f4, f4
	fadds    f0, f0, f1
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f2
	ble      lbl_80207B98
	fmadds   f0, f3, f3, f1
	fadds    f1, f4, f0
	fcmpo    cr0, f1, f2
	blelr
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	blr

lbl_80207B98:
	fmr      f1, f2
	blr
	*/
}

/*
 * --INFO--
 * Address:	80207BA0
 * Size:	000034
 */
Vector3f operator+(const Vector3f& a, const Vector3f& b) { return Vector3f(a.x + b.x, a.y + b.y, a.z + b.z); }

/*
 * --INFO--
 * Address:	80207BD4
 * Size:	0000E4
 */
void Iterator<Game::ItemUjamushi::Uja>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80207C14
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80207CA4

lbl_80207C14:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80207C88

lbl_80207C34:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80207CA4
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_80207C88:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80207C34

lbl_80207CA4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80207CB8
 * Size:	00004C
 */
void Iterator<Game::ItemUjamushi::Uja>::isDone()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	subf     r0, r0, r3
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80207D04
 * Size:	0000DC
 */
void Iterator<Game::ItemUjamushi::Uja>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80207D40
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80207DCC

lbl_80207D40:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80207DB0

lbl_80207D5C:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80207DCC
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_80207DB0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80207D5C

lbl_80207DCC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80207DE0
 * Size:	000090
 */
template <>
inline void Vector3f::normalise()
{
	/*
	lfs      f3, 0(r3)
	lfs      f1, 4(r3)
	fmuls    f0, f3, f3
	lfs      f4, 8(r3)
	fmuls    f1, f1, f1
	lfs      f2, lbl_80519D94@sda21(r2)
	fmuls    f4, f4, f4
	fadds    f0, f0, f1
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f2
	ble      lbl_80207E28
	fmadds   f0, f3, f3, f1
	fadds    f1, f4, f0
	fcmpo    cr0, f1, f2
	ble      lbl_80207E2C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80207E2C

lbl_80207E28:
	fmr      f1, f2

lbl_80207E2C:
	lfs      f0, lbl_80519D94@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80207E68
	lfs      f2, lbl_80519DA0@sda21(r2)
	lfs      f0, 0(r3)
	fdivs    f2, f2, f1
	fmuls    f0, f0, f2
	stfs     f0, 0(r3)
	lfs      f0, 4(r3)
	fmuls    f0, f0, f2
	stfs     f0, 4(r3)
	lfs      f0, 8(r3)
	fmuls    f0, f0, f2
	stfs     f0, 8(r3)
	blr

lbl_80207E68:
	fmr      f1, f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80207E70
 * Size:	000034
 */
Vector3f operator-(const Vector3f& a, const Vector3f& b) { return Vector3f(a.x - b.x, a.y - b.y, a.z - b.z); }

namespace Game {

/*
 * --INFO--
 * Address:	80207EA4
 * Size:	000130
 */
ItemUjamushi::UjaMgr::UjaMgr(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r6, 1
	li       r5, -1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lis      r3, __vt__Q24Game12BaseFlockMgr@ha
	stw      r30, 0x18(r1)
	addi     r0, r3, __vt__Q24Game12BaseFlockMgr@l
	mr       r7, r31
	mr       r30, r4
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r7
	addi     r29, r28, 0x20
	stw      r0, 0(r31)
	li       r0, 0
	mr       r3, r29
	stb      r6, 0x1d(r7)
	stb      r6, 0x1c(r7)
	stw      r5, 4(r7)
	stw      r0, 8(r7)
	bl       __ct__5CNodeFv
	lis      r3, __vt__16GenericContainer@ha
	lis      r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
	addi     r0, r3, __vt__16GenericContainer@l
	lis      r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@ha
	stw      r0, 0(r29)
	addi     r0, r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
	addi     r4, r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@l
	li       r5, 0
	stw      r0, 0(r29)
	addi     r0, r4, 0x30
	addi     r3, r28, 0x3c
	stb      r5, 0x18(r29)
	stw      r4, 0(r28)
	stw      r0, 0x20(r28)
	bl       "__ct__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	lis      r4, __vt__Q34Game12ItemUjamushi6UjaMgr@ha
	addi     r3, r31, 0xa8
	addi     r5, r4, __vt__Q34Game12ItemUjamushi6UjaMgr@l
	li       r4, 1
	stw      r5, 0(r31)
	addi     r0, r5, 0x30
	stw      r0, 0x20(r31)
	bl       __ct__Q34Game12ItemUjamushi9BoidParmsFv
	mr       r4, r30
	addi     r3, r31, 0x3c
	bl       "alloc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80207F84
	bl       __ct__Q24Game9UpdateMgrFv
	mr       r0, r3

lbl_80207F84:
	stw      r0, 0x94(r31)
	li       r4, 0x1e
	lwz      r3, 0x94(r31)
	bl       create__Q24Game9UpdateMgrFi
	li       r0, 0
	lfs      f0, lbl_80519D94@sda21(r2)
	stw      r0, 0x9c(r31)
	mr       r3, r31
	stw      r0, 0x98(r31)
	stfs     f0, 0xa0(r31)
	stw      r0, 0xa4(r31)
	stw      r0, 0x310(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80207FD4
 * Size:	000100
 */
void __dt__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802080B8
	lis      r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x30
	stw      r0, 0x20(r30)
	beq      lbl_80208074
	lis      r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
	stw      r3, 0x3c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x58(r30)
	beq      lbl_80208074
	lis      r3, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
	stw      r3, 0x3c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x58(r30)
	beq      lbl_80208074
	lis      r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
	addic.   r0, r30, 0x3c
	addi     r0, r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0x3c(r30)
	beq      lbl_80208074
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x3c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x3c(r30)
	bl       __dt__5CNodeFv

lbl_80208074:
	addic.   r0, r30, 0x20
	beq      lbl_802080A8
	lis      r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
	addic.   r0, r30, 0x20
	addi     r0, r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0x20(r30)
	beq      lbl_802080A8
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x20
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x20(r30)
	bl       __dt__5CNodeFv

lbl_802080A8:
	extsh.   r0, r31
	ble      lbl_802080B8
	mr       r3, r30
	bl       __dl__FPv

lbl_802080B8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802080D4
 * Size:	0000A0
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::~MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80208158
	lis      r4, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
	addi     r4, r4, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80208148
	lis      r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
	addi     r4, r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80208148
	lis      r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
	addi     r0, r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0(r30)
	beq      lbl_80208148
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80208148:
	extsh.   r0, r31
	ble      lbl_80208158
	mr       r3, r30
	bl       __dl__FPv

lbl_80208158:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80208174
 * Size:	000070
 */
void Container<Game::ItemUjamushi::Uja>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802081C8
	lis      r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
	addi     r0, r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0(r30)
	beq      lbl_802081B8
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802081B8:
	extsh.   r0, r31
	ble      lbl_802081C8
	mr       r3, r30
	bl       __dl__FPv

lbl_802081C8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802081E4
 * Size:	000050
 */
void ItemUjamushi::UjaMgr::init(Game::ItemUjamushi::UjaMgrInitArg&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lfs      f0, 0(r4)
	stfs     f0, 0x6c(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x70(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x74(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x78(r3)
	lwz      r0, 0x10(r4)
	stw      r0, 0xa4(r3)
	lwz      r0, 0x14(r4)
	stw      r0, 0x310(r3)
	bl       test_createUjas__Q34Game12ItemUjamushi6UjaMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void ItemUjamushi::UjaMgr::updateBlend(int, int, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void ItemUjamushi::UjaMgr::appear(void)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	80208234
 * Size:	000008
 */
void getMaxObjects__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	lwz      r3, 0x60(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020823C
 * Size:	00002C
 */
void getFlock__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fi(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x3c(r3)
	lwz      r12, 0x24(r12)
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
 * Address:	80208268
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getAt(int)
{
	/*
	mulli    r0, r4, 0xc8
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void ItemUjamushi::UjaMgr::disappear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void ItemUjamushi::UjaMgr::mogure(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80208278
 * Size:	000418
 */
void ItemUjamushi::UjaMgr::test_createUjas(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	beq      lbl_8020866C
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	li       r30, 0
	lfd      f2, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80519E18@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f31, f0, f1
	b        lbl_80208650

lbl_802082F4:
	addi     r3, r29, 0x3c
	lwz      r12, 0x3c(r29)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_8020864C
	bl       rand
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_80519E18@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519D94@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f4, f1, f2
	fmr      f3, f4
	fcmpo    cr0, f4, f0
	bge      lbl_80208358
	fneg     f3, f4

lbl_80208358:
	lfs      f1, lbl_80519E44@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f2, lbl_80519D94@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f1
	fcmpo    cr0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f3, f2, f0
	bge      lbl_802083B4
	lfs      f0, lbl_80519E40@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802083CC

lbl_802083B4:
	fmuls    f0, f4, f1
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802083CC:
	fmuls    f4, f2, f0
	lfs      f2, 0x6c(r29)
	lfs      f0, 0x74(r29)
	lfs      f1, 0x70(r29)
	lfs      f5, lbl_80519D94@sda21(r2)
	fadds    f4, f4, f2
	stw      r29, 0x74(r31)
	fadds    f2, f3, f0
	fadds    f5, f5, f1
	lfs      f0, lbl_80519D94@sda21(r2)
	stfs     f4, 0(r31)
	stfs     f5, 4(r31)
	stfs     f2, 8(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stfs     f0, 0x58(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	mr       r3, r31
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 0x28(r1)
	lfs      f1, lbl_80519E18@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519D94@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f1, f1, f2
	stfs     f1, 0x5c(r31)
	stfs     f0, 0xb8(r31)
	stfs     f0, 0x60(r31)
	lwz      r12, 0xc(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80519DA0@sda21(r2)
	stfs     f0, 0x64(r31)
	stfs     f0, 0x68(r31)
	stfs     f0, 0x6c(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 0x30(r1)
	lfs      f1, lbl_80519E18@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519D94@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f1, f1, f2
	stfs     f1, 0x70(r31)
	stfs     f0, 0x84(r31)
	stfs     f0, 0x88(r31)
	stfs     f0, 0x8c(r31)
	stfs     f0, 0x90(r31)
	stfs     f0, 0x94(r31)
	stfs     f0, 0x98(r31)
	stfs     f0, 0x9c(r31)
	stfs     f0, 0xa0(r31)
	stfs     f0, 0xa4(r31)
	lwz      r3, 0x310(r29)
	lfs      f0, 0x74(r3)
	stfs     f0, 0xa8(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	addi     r3, r31, 0x78
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f1, 0x38(r1)
	lfs      f0, lbl_80519DDC@sda21(r2)
	fsubs    f3, f1, f3
	lfs      f1, 0xa8(r31)
	fmuls    f0, f0, f1
	fdivs    f2, f3, f2
	fmadds   f0, f0, f2, f1
	stfs     f0, 0xa8(r31)
	lwz      r4, 0x94(r29)
	bl       init__Q24Game13UpdateContextFPQ24Game9UpdateMgr
	li       r0, 0
	stb      r0, 0xac(r31)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x44(r1)
	xoris    r0, r30, 0x8000
	lfd      f4, lbl_80519E20@sda21(r2)
	li       r3, 0
	stw      r4, 0x40(r1)
	lfs      f0, lbl_80519E14@sda21(r2)
	lfd      f1, 0x40(r1)
	lfs      f2, lbl_80519E1C@sda21(r2)
	fsubs    f3, f1, f4
	stw      r0, 0x54(r1)
	lfs      f1, lbl_80519D94@sda21(r2)
	stw      r4, 0x50(r1)
	fdivs    f3, f3, f0
	lfd      f0, 0x50(r1)
	fmuls    f2, f2, f3
	fsubs    f0, f0, f4
	fctiwz   f2, f2
	fmuls    f5, f31, f0
	stfd     f2, 0x48(r1)
	fmr      f3, f5
	lwz      r4, 0x4c(r1)
	fcmpo    cr0, f5, f1
	addi     r0, r4, 0x14
	stb      r0, 0xad(r31)
	stw      r3, 0xb0(r31)
	stb      r3, 0xae(r31)
	stfs     f1, 0xb4(r31)
	bge      lbl_802085A8
	fneg     f3, f5

lbl_802085A8:
	lfs      f2, lbl_80519E44@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519D94@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	lfs      f3, lbl_80519E8C@sda21(r2)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f3, f0
	bge      lbl_80208608
	lfs      f0, lbl_80519E40@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80208620

lbl_80208608:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80208620:
	fmuls    f3, f3, f0
	lfs      f2, 0x6c(r29)
	lfs      f0, 0x74(r29)
	lfs      f5, lbl_80519D94@sda21(r2)
	lfs      f1, 0x70(r29)
	fadds    f3, f3, f2
	fadds    f0, f4, f0
	fadds    f5, f5, f1
	stfs     f3, 0x44(r31)
	stfs     f5, 0x48(r31)
	stfs     f0, 0x4c(r31)

lbl_8020864C:
	addi     r30, r30, 1

lbl_80208650:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	blt      lbl_802082F4

lbl_8020866C:
	psq_l    f31, 136(r1), 0, qr0
	lwz      r0, 0x94(r1)
	lfd      f31, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80208690
 * Size:	000024
 */
void ItemUjamushi::UjaMgr::do_update_boundSphere(void)
{
	/*
	lfs      f0, 0x6c(r3)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x70(r3)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x74(r3)
	stfs     f0, 0x14(r3)
	lfs      f0, 0x78(r3)
	stfs     f0, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802086B4
 * Size:	00029C
 */
void ItemUjamushi::UjaMgr::do_update(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_802086EC
	lbz      r0, 0x1d(r28)
	cmplwi   r0, 0
	beq      lbl_80208930

lbl_802086EC:
	lwz      r3, 0xa4(r28)
	addi     r6, r28, 0xa8
	lwz      r4, 0x98(r28)
	lwz      r5, 0x9c(r28)
	lfs      f1, 0xa0(r28)
	bl
getParms__Q34Game12ItemUjamushi13BoidParameterFiifRQ34Game12ItemUjamushi9BoidParms
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519E90@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lwz      r3, 0x94(r28)
	bl       update__Q24Game9UpdateMgrFv
	lfs      f0, lbl_80519D94@sda21(r2)
	li       r31, 0
	li       r30, 0
	li       r29, 0
	stfs     f0, 0x7c(r28)
	stfs     f0, 0x80(r28)
	stfs     f0, 0x84(r28)
	stfs     f0, 0x88(r28)
	stfs     f0, 0x8c(r28)
	stfs     f0, 0x90(r28)
	b        lbl_802087FC

lbl_8020874C:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802087F8
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x7c(r28)
	addi     r31, r31, 1
	lfs      f0, 0(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x7c(r28)
	lfs      f1, 0x80(r28)
	lfs      f0, 4(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x80(r28)
	lfs      f1, 0x84(r28)
	lfs      f0, 8(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x84(r28)
	lbz      r0, 0xac(r3)
	cmplwi   r0, 2
	beq      lbl_802087F8
	lfs      f1, 0x88(r28)
	addi     r30, r30, 1
	lfs      f0, 0x50(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x88(r28)
	lfs      f1, 0x8c(r28)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x8c(r28)
	lfs      f1, 0x90(r28)
	lfs      f0, 0x58(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x90(r28)

lbl_802087F8:
	addi     r29, r29, 1

lbl_802087FC:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r3
	blt      lbl_8020874C
	cmpwi    r31, 0
	ble      lbl_80208868
	xoris    r3, r31, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80519DA0@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f3, 0x7c(r28)
	fsubs    f0, f0, f1
	fdivs    f1, f2, f0
	fmuls    f0, f3, f1
	stfs     f0, 0x7c(r28)
	lfs      f0, 0x80(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x80(r28)
	lfs      f0, 0x84(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x84(r28)

lbl_80208868:
	cmpwi    r30, 0
	ble      lbl_802088B8
	xoris    r3, r30, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80519DA0@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f3, 0x88(r28)
	fsubs    f0, f0, f1
	fdivs    f1, f2, f0
	fmuls    f0, f3, f1
	stfs     f0, 0x88(r28)
	lfs      f0, 0x8c(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x8c(r28)
	lfs      f0, 0x90(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x90(r28)

lbl_802088B8:
	li       r29, 0
	b        lbl_80208904

lbl_802088C0:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80208900
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r4, r28, 0xa8
	bl       update__Q34Game12ItemUjamushi3UjaFRQ34Game12ItemUjamushi9BoidParms

lbl_80208900:
	addi     r29, r29, 1

lbl_80208904:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r3
	blt      lbl_802088C0
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519E90@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc

lbl_80208930:
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

} // namespace Game

/*
 * --INFO--
 * Address:	80208950
 * Size:	000014
 */
void isFlagAlive__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fi(void)
{
	/*
	lwz      r3, 0x68(r3)
	lbzx     r0, r3, r4
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80208964
 * Size:	0002E4
 */
void ItemUjamushi::UjaMgr::astonishPikmins(void)
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
	lis      r4, __vt__Q24Game11Interaction@ha
	lfs      f31, 0xc(r3)
	lfs      f30, 0x10(r3)
	addi     r0, r4, __vt__Q24Game11Interaction@l
	lfs      f29, 0x14(r3)
	li       r5, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r6, "__vt__22Iterator<Q24Game4Piki>"@ha
	lfs      f0, lbl_80519E98@sda21(r2)
	lis      r4, __vt__Q24Game16InteractAstonish@ha
	addi     r6, r6, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q24Game16InteractAstonish@l
	cmplwi   r5, 0
	stw      r6, 0x20(r1)
	stw      r5, 0x2c(r1)
	stw      r5, 0x24(r1)
	stw      r3, 0x28(r1)
	stw      r5, 0x18(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	bne      lbl_802089FC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80208BFC

lbl_802089FC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80208A68

lbl_80208A14:
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
	bne      lbl_80208BFC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80208A68:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80208A14
	b        lbl_80208BFC

lbl_80208A88:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80208B40
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 0x10(r1)
	fsubs    f3, f0, f30
	lfs      f1, 8(r1)
	fsubs    f2, f2, f29
	lfs      f0, lbl_80519D94@sda21(r2)
	fsubs    f1, f1, f31
	fmuls    f3, f3, f3
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80208B14
	ble      lbl_80208B18
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80208B18

lbl_80208B14:
	fmr      f1, f0

lbl_80208B18:
	lfs      f0, lbl_80519E98@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80208B40
	mr       r3, r31
	addi     r4, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80208B40:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80208B6C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80208BFC

lbl_80208B6C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80208BE0

lbl_80208B8C:
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
	bne      lbl_80208BFC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80208BE0:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80208B8C

lbl_80208BFC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_80208A88
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80208C48
 * Size:	000134
 */
void ItemUjamushi::FSM::init(Game::ItemUjamushi::Item*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 3
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "create__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>Fi"
	li       r3, 0x14
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80208CB0
	lis      r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@ha
	lis      r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@ha
	addi     r0, r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@l
	lis      r5, __vt__Q34Game12ItemUjamushi5State@ha
	stw      r0, 0(r4)
	li       r7, 0
	lis      r3, __vt__Q34Game12ItemUjamushi9WaitState@ha
	addi     r6, r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@l
	stw      r7, 4(r4)
	addi     r5, r5, __vt__Q34Game12ItemUjamushi5State@l
	addi     r0, r3, __vt__Q34Game12ItemUjamushi9WaitState@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_80208CB0:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ24Game36FSMState<Q34Game12ItemUjamushi4Item>"
	li       r3, 0x14
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80208D08
	lis      r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@ha
	lis      r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@ha
	addi     r0, r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@l
	lis      r5, __vt__Q34Game12ItemUjamushi5State@ha
	stw      r0, 0(r4)
	li       r0, 1
	lis      r3, __vt__Q34Game12ItemUjamushi11ActiveState@ha
	li       r7, 0
	stw      r0, 4(r4)
	addi     r6, r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@l
	addi     r5, r5, __vt__Q34Game12ItemUjamushi5State@l
	addi     r0, r3, __vt__Q34Game12ItemUjamushi11ActiveState@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_80208D08:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ24Game36FSMState<Q34Game12ItemUjamushi4Item>"
	li       r3, 0x14
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80208D60
	lis      r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@ha
	lis      r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@ha
	addi     r0, r3, "__vt__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>"@l
	lis      r5, __vt__Q34Game12ItemUjamushi5State@ha
	stw      r0, 0(r4)
	li       r0, 2
	lis      r3, __vt__Q34Game12ItemUjamushi8DigState@ha
	li       r7, 0
	stw      r0, 4(r4)
	addi     r6, r6, "__vt__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>"@l
	addi     r5, r5, __vt__Q34Game12ItemUjamushi5State@l
	addi     r0, r3, __vt__Q34Game12ItemUjamushi8DigState@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_80208D60:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ24Game36FSMState<Q34Game12ItemUjamushi4Item>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
ItemUjamushi::Item::Item(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80208D7C
 * Size:	0000C8
 */
void ItemUjamushi::Item::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_80208DB8
	lis      r3, lbl_80481DC8@ha
	lis      r5, lbl_80481DDC@ha
	addi     r3, r3, lbl_80481DC8@l
	li       r4, 0x42f
	addi     r5, r5, lbl_80481DDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80208DB8:
	lwz      r31, 4(r31)
	li       r3, 0x314
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80208DD8
	mr       r4, r31
	bl       __ct__Q34Game12ItemUjamushi6UjaMgrFi
	mr       r0, r3

lbl_80208DD8:
	stw      r0, 0x200(r30)
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0(r30)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1d8(r30)
	mr       r4, r30
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
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
 * Address:	80208E44
 * Size:	000034
 */
void start__Q24Game40StateMachine<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x1DC(r4)
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
 * Address:	80208E78
 * Size:	0000C0
 */
void ItemUjamushi::Item::onSetPosition(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r31, 0x138
	addi     r4, r31, 0x19c
	bl       "makeT__7MatrixfFR10Vector3<f>"
	lwz      r4, mgr__Q24Game12ItemUjamushi@sda21(r13)
	lfs      f3, 0x1d0(r31)
	lfs      f1, 0x1a0(r31)
	addi     r3, r4, 0x310
	lfs      f2, 0x1a4(r31)
	addi     r0, r4, 0x5a8
	lfs      f0, 0x19c(r31)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	stfs     f3, 0x14(r1)
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)
	lwz      r12, 0x310(r4)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x200(r31)
	addi     r4, r1, 8
	bl init__Q34Game12ItemUjamushi6UjaMgrFRQ34Game12ItemUjamushi13UjaMgrInitArg
	lwz      r3, 0x200(r31)
	bl       astonishPikmins__Q34Game12ItemUjamushi6UjaMgrFv
	li       r0, 0
	stw      r0, 0x1e0(r31)
	stw      r0, 0x1e4(r31)
	lwz      r3, mgr__Q24Game12ItemUjamushi@sda21(r13)
	lwzu     r12, 0x328(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1ec(r31)
	mr       r3, r31
	lfs      f0, lbl_80519D94@sda21(r2)
	stfs     f0, 0x1e8(r31)
	bl       setBoidTimer__Q34Game12ItemUjamushi4ItemFv
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void ItemUjamushi::Item::changeBoid(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80208F38
 * Size:	000064
 */
void ItemUjamushi::Item::setBoidTimer(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_80519DD0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519E10@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x1f0(r31)
	stfs     f0, 0x1f4(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80208F9C
 * Size:	00003C
 */
void ItemUjamushi::Item::ignoreAtari(Game::Creature*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80208FD8
 * Size:	000078
 */
void ItemUjamushi::Item::updateBoundSphere(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x114(r3)
	lfs      f0, 0x1d0(r3)
	lwz      r4, 0(r4)
	stfs     f0, 0x1c(r4)
	lfs      f0, 0x19c(r3)
	stfs     f0, 0x1c4(r3)
	lfs      f0, 0x1a0(r3)
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0x1a4(r3)
	stfs     f0, 0x1cc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80209040
	lis      r3, lbl_80481DC8@ha
	lis      r5, lbl_80481E30@ha
	addi     r3, r3, lbl_80481DC8@l
	li       r4, 0x471
	addi     r5, r5, lbl_80481E30@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80209040:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209050
 * Size:	000008
 */
u32 ItemUjamushi::Item::isCollisionFlick(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80209058
 * Size:	000374
 */
void ItemUjamushi::Item::interactFlockAttack(Game::InteractFlockAttack&)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	mr       r30, r4
	mr       r29, r3
	lwz      r3, 0x200(r3)
	lwz      r4, 8(r4)
	lfs      f1, 0xc(r30)
	bl       attackFlock__Q24Game12BaseFlockMgrFif
	neg      r0, r3
	li       r31, 0
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0x10(r30)
	lwz      r28, 8(r30)
	lwz      r29, 0x200(r29)
	cmpwi    r28, 0
	blt      lbl_802090E0
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r28, r3
	bge      lbl_802090E0
	li       r31, 1

lbl_802090E0:
	clrlwi.  r0, r31, 0x18
	bne      lbl_80209104
	lis      r3, lbl_80481E3C@ha
	lis      r5, lbl_80481DDC@ha
	addi     r3, r3, lbl_80481E3C@l
	li       r4, 0xab
	addi     r5, r5, lbl_80481DDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80209104:
	mr       r3, r29
	mr       r4, r28
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r3)
	lfs      f2, 8(r3)
	lfs      f0, 0(r3)
	stfs     f0, 0x14(r30)
	stfs     f1, 0x18(r30)
	stfs     f2, 0x1c(r30)
	lbz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_80209398
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_80519EA0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80209398
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80209398
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_80519E18@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f31, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 0x28(r1)
	lfs      f1, lbl_80519DE0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519DF0@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f30, f1, f2, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	fmr      f4, f31
	lfs      f0, lbl_80519D94@sda21(r2)
	stw      r0, 0x30(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	fcmpo    cr0, f31, f0
	lfd      f0, 0x30(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f1, lbl_80519D98@sda21(r2)
	lfs      f0, lbl_80519DE4@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f3, f1, f2, f0
	bge      lbl_8020923C
	fneg     f4, f31

lbl_8020923C:
	lfs      f2, lbl_80519E44@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519D94@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f4, f2
	fcmpo    cr0, f31, f0
	fctiwz   f0, f1
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f1, f30, f0
	bge      lbl_80209298
	lfs      f0, lbl_80519E40@sda21(r2)
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802092B0

lbl_80209298:
	fmuls    f0, f31, f2
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802092B0:
	fmuls    f0, f30, f0
	stfs     f3, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x14(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x50(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x50(r1)
	lfs      f0, lbl_80519EA4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r28, 0x5c(r1)
	cmpwi    r28, 1
	bne      lbl_8020931C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1d
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020931C
	li       r28, 0

lbl_8020931C:
	cmpwi    r28, 2
	bne      lbl_8020933C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1e
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020933C
	li       r28, 0

lbl_8020933C:
	mr       r3, r31
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	stb      r28, 0x1e0(r31)
	mr       r3, r31
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r4, r1, 8
	lfs      f1, 0x14(r30)
	li       r5, 0
	stfs     f1, 8(r1)
	lfs      f1, 0x18(r30)
	stfs     f1, 0xc(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x1c(r30)
	stfs     f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r31
	addi     r4, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_80209398:
	li       r3, 1
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r0, 0x94(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	802093CC
 * Size:	0002AC
 */
void ItemUjamushi::Item::doAI(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r28, r3
	lwz      r3, 0x1d8(r3)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	bl       updateCollTree__Q24Game8BaseItemFv
	lfs      f0, 0x1e8(r28)
	lfs      f3, lbl_80519DA0@sda21(r2)
	fcmpo    cr0, f0, f3
	bge      lbl_802094B0
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x1f0(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80519D94@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x1f0(r28)
	lfs      f1, 0x1f0(r28)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8020949C
	lwz      r0, 0x1e4(r28)
	stw      r0, 0x1e0(r28)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f3, lbl_80519E14@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f2, lbl_80519DD0@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_80519E10@sda21(r2)
	lfs      f0, lbl_80519DA0@sda21(r2)
	fdivs    f3, f4, f3
	fmadds   f1, f2, f3, f1
	stfs     f1, 0x1f0(r28)
	stfs     f1, 0x1f4(r28)
	stfs     f0, 0x1e8(r28)
	b        lbl_80209570

lbl_8020949C:
	lfs      f0, 0x1f4(r28)
	fdivs    f0, f1, f0
	fsubs    f0, f3, f0
	stfs     f0, 0x1e8(r28)
	b        lbl_80209570

lbl_802094B0:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x1f0(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80519D94@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x1f0(r28)
	lfs      f1, 0x1f0(r28)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80209570
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	lwz      r0, 0x1ec(r28)
	stw      r4, 8(r1)
	lfd      f2, lbl_80519E20@sda21(r2)
	xoris    r0, r0, 0x8000
	lfd      f1, 8(r1)
	lfs      f0, lbl_80519E14@sda21(r2)
	fsubs    f1, f1, f2
	stw      r0, 0x14(r1)
	stw      r4, 0x10(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	stw      r0, 0x1e4(r28)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f3, lbl_80519E14@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f2, lbl_80519DD0@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_80519E10@sda21(r2)
	lfs      f0, lbl_80519D94@sda21(r2)
	fdivs    f3, f4, f3
	fmadds   f1, f2, f3, f1
	stfs     f1, 0x1f0(r28)
	stfs     f1, 0x1f4(r28)
	stfs     f0, 0x1e8(r28)

lbl_80209570:
	lwz      r31, 0x200(r28)
	lfs      f31, 0x1e8(r28)
	lwz      r3, 0xa4(r31)
	lwzu     r12, 0x18(r3)
	lwz      r29, 0x1e4(r28)
	lwz      r12, 0xc(r12)
	lwz      r30, 0x1e0(r28)
	mtctr    r12
	bctrl
	srwi     r0, r30, 0x1f
	xori     r0, r0, 1
	clrlwi   r0, r0, 0x18
	cmpw     r0, r3
	ble      lbl_802095C4
	lis      r3, lbl_80481DC8@ha
	lis      r5, lbl_80481DDC@ha
	addi     r3, r3, lbl_80481DC8@l
	li       r4, 0x385
	addi     r5, r5, lbl_80481DDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802095C4:
	lwz      r3, 0xa4(r31)
	lwzu     r12, 0x18(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	srwi     r0, r29, 0x1f
	xori     r0, r0, 1
	clrlwi   r0, r0, 0x18
	cmpw     r0, r3
	ble      lbl_80209608
	lis      r3, lbl_80481DC8@ha
	lis      r5, lbl_80481DDC@ha
	addi     r3, r3, lbl_80481DC8@l
	li       r4, 0x386
	addi     r5, r5, lbl_80481DDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80209608:
	stw      r30, 0x98(r31)
	stw      r29, 0x9c(r31)
	stfs     f31, 0xa0(r31)
	lwz      r3, 0x200(r28)
	bl       update__Q24Game12BaseFlockMgrFv
	lwz      r3, 0x200(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_80209650
	mr       r3, r28
	li       r4, 0
	lwz      r12, 0(r28)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl

lbl_80209650:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80209678
 * Size:	000008
 */
void getNumObjects__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	lwz      r3, 0x5c(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80209680
 * Size:	000078
 */
void ItemUjamushi::Item::doSimpleDraw(Viewport*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r5, mgr__Q24Game12ItemUjamushi@sda21(r13)
	lbz      r0, 0x8e(r5)
	mr       r3, r5
	cntlzw   r0, r0
	srwi     r4, r0, 5
	bl       getModelData__Q24Game11BaseItemMgrFi
	lwz      r0, lbl_80520E80@sda21(r2)
	mr       r4, r31
	addi     r5, r1, 8
	li       r6, 1
	stw      r0, 8(r1)
	stw      r3, 8(r1)
	lwz      r3, 0x200(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
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
 * Address:	802096F8
 * Size:	000310
 */
ItemUjamushi::Mgr::Mgr(void)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	stw      r0, 0x444(r1)
	extsh.   r0, r4
	lis      r4, lbl_80481D40@ha
	stw      r31, 0x43c(r1)
	addi     r31, r4, lbl_80481D40@l
	stw      r30, 0x438(r1)
	mr       r30, r3
	stw      r29, 0x434(r1)
	stw      r28, 0x430(r1)
	beq      lbl_80209730
	addi     r0, r30, 0x658
	stw      r0, 4(r30)

lbl_80209730:
	mr       r3, r30
	li       r4, 0
	bl       "__ct__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	lis      r4, __vt__Q34Game12ItemUjamushi3Mgr@ha
	addi     r3, r30, 0x9c
	addi     r5, r4, __vt__Q34Game12ItemUjamushi3Mgr@l
	li       r4, 1
	stw      r5, 0(r30)
	addi     r0, r5, 0x74
	stw      r0, 0x30(r30)
	bl       __ct__Q34Game12ItemUjamushi9BoidParmsFv
	addi     r3, r30, 0x310
	bl       __ct__Q34Game12ItemUjamushi13BoidParameterFv
	addi     r0, r30, 0x654
	lis      r5, 0x75303031@ha
	stw      r0, 0x5a8(r30)
	li       r3, 0
	addi     r0, r31, 0xb8
	addi     r4, r30, 0x5a8
	stw      r3, 0x5ac(r30)
	addi     r3, r4, 0xc
	addi     r5, r5, 0x75303031@l
	addi     r6, r31, 0xc4
	stw      r0, 0x5b0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x75303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	addi     r4, r30, 0x5a8
	stw      r0, 0x5b4(r30)
	addi     r3, r4, 0x34
	lfs      f0, lbl_80519E00@sda21(r2)
	addi     r5, r5, 0x75303032@l
	lfs      f1, lbl_80519DDC@sda21(r2)
	addi     r6, r31, 0xd4
	stfs     f0, 0x5cc(r30)
	lfs      f0, lbl_80519DA0@sda21(r2)
	stfs     f1, 0x5d4(r30)
	stfs     f0, 0x5d8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x75303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	addi     r4, r30, 0x5a8
	stw      r0, 0x5dc(r30)
	addi     r3, r4, 0x5c
	lfs      f0, lbl_80519DA0@sda21(r2)
	addi     r5, r5, 0x75303033@l
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r6, r2, lbl_80519E04@sda21
	stfs     f0, 0x5f4(r30)
	lfs      f0, lbl_80519DE4@sda21(r2)
	stfs     f1, 0x5fc(r30)
	stfs     f0, 0x600(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x75303034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	addi     r4, r30, 0x5a8
	stw      r0, 0x604(r30)
	addi     r3, r4, 0x84
	lfs      f1, lbl_80519D94@sda21(r2)
	addi     r5, r5, 0x75303034@l
	lfs      f0, lbl_80519E0C@sda21(r2)
	addi     r6, r31, 0xe0
	stfs     f1, 0x61c(r30)
	stfs     f1, 0x624(r30)
	stfs     f0, 0x628(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_80519E10@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80519D94@sda21(r2)
	stw      r0, 0x62c(r30)
	addi     r5, r31, 0x108
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r0, r31, 0x114
	stfs     f2, 0x644(r30)
	mr       r3, r30
	li       r4, 2
	stfs     f1, 0x64c(r30)
	stfs     f0, 0x650(r30)
	stw      r5, 8(r30)
	stw      r0, 0x28(r30)
	bl       setModelSize__Q24Game11BaseItemMgrFi
	mr       r3, r30
	addi     r4, r2, lbl_80519EA8@sda21
	bl       loadArchive__Q24Game11BaseItemMgrFPc
	mr       r3, r30
	addi     r4, r31, 0x130
	li       r5, 0
	lis      r6, 2
	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
	mr       r3, r30
	addi     r4, r31, 0x144
	li       r5, 1
	lis      r6, 0x2002
	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
	li       r0, 0
	lfs      f0, lbl_80519D94@sda21(r2)
	stw      r0, 0x308(r30)
	mr       r3, r30
	li       r4, 0
	stw      r0, 0x304(r30)
	stfs     f0, 0x30c(r30)
	bl       getModelData__Q24Game11BaseItemMgrFi
	lis      r4, 4
	mr       r29, r3
	bl       newSharedDisplayList__12J3DModelDataFUl
	lis      r4, j3dDefaultMtx@ha
	mr       r3, r29
	addi     r5, r4, j3dDefaultMtx@l
	li       r4, 0
	bl       simpleCalcMaterial__12J3DModelDataFUsPA4_f
	mr       r3, r29
	bl       makeSharedDL__12J3DModelDataFv
	mr       r3, r30
	li       r4, 1
	bl       getModelData__Q24Game11BaseItemMgrFi
	lis      r4, 4
	mr       r29, r3
	bl       newSharedDisplayList__12J3DModelDataFUl
	lis      r4, j3dDefaultMtx@ha
	mr       r3, r29
	addi     r5, r4, j3dDefaultMtx@l
	li       r4, 0
	bl       simpleCalcMaterial__12J3DModelDataFUsPA4_f
	mr       r3, r29
	bl       makeSharedDL__12J3DModelDataFv
	lfs      f0, lbl_80519EB0@sda21(r2)
	li       r0, 1
	lfs      f2, lbl_80519DA0@sda21(r2)
	mr       r3, r30
	stfs     f0, 0x88(r30)
	addi     r4, r31, 0x158
	lfs      f1, lbl_80519D94@sda21(r2)
	stb      r0, 0x8c(r30)
	lfs      f0, lbl_80519E10@sda21(r2)
	stb      r0, 0x8d(r30)
	stb      r0, 0x8e(r30)
	stfs     f2, 0x90(r30)
	stfs     f1, 0x94(r30)
	stfs     f0, 0x98(r30)
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	lwz      r12, 0(r3)
	mr       r29, r3
	addi     r4, r31, 0x164
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_802099A4
	addi     r3, r31, 0x88
	addi     r5, r31, 0x9c
	li       r4, 0x4f7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802099A4:
	mr       r4, r28
	addi     r3, r1, 8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x14(r1)
	bne      lbl_802099CC
	li       r0, 0
	stw      r0, 0x41c(r1)

lbl_802099CC:
	addi     r3, r30, 0x310
	addi     r4, r1, 8
	bl       read__Q34Game12ItemUjamushi13BoidParameterFR6Stream
	mr       r3, r30
	mr       r4, r29
	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
	lwz      r0, 0x444(r1)
	mr       r3, r30
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	lwz      r29, 0x434(r1)
	lwz      r28, 0x430(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209A08
 * Size:	000084
 */
ItemUjamushi::BoidParameter::~BoidParameter(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80209A70
	lis      r3, __vt__Q34Game12ItemUjamushi13BoidParameter@ha
	addic.   r0, r30, 0x18
	addi     r0, r3, __vt__Q34Game12ItemUjamushi13BoidParameter@l
	stw      r0, 0(r30)
	beq      lbl_80209A54
	lis      r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@l
	li       r4, 0
	stw      r0, 0x18(r30)
	bl       __dt__5CNodeFv

lbl_80209A54:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80209A70
	mr       r3, r30
	bl       __dl__FPv

lbl_80209A70:
	lwz      r0, 0x14(r1)
	mr       r3, r30
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
 * Address:	80209A8C
 * Size:	00011C
 */
void __dt__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80209B8C
	lis      r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_80209B48
	lis      r4, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r3, r30, 0x6c
	addi     r4, r4, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@l
	stw      r4, 0x4c(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_80209AF8
	lis      r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
	addi     r0, r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0x6c(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_80209AF8:
	addic.   r0, r30, 0x4c
	beq      lbl_80209B48
	lis      r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@l
	stw      r3, 0x4c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_80209B48
	lis      r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r0, r30, 0x4c
	addi     r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0x4c(r30)
	beq      lbl_80209B48
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x4c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x4c(r30)
	bl       __dt__5CNodeFv

lbl_80209B48:
	addic.   r0, r30, 0x30
	beq      lbl_80209B7C
	lis      r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r0, r30, 0x30
	addi     r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0x30(r30)
	beq      lbl_80209B7C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x30(r30)
	bl       __dt__5CNodeFv

lbl_80209B7C:
	extsh.   r0, r31
	ble      lbl_80209B8C
	mr       r3, r30
	bl       __dl__FPv

lbl_80209B8C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80209BA8
 * Size:	000200
 */
void ItemUjamushi::Mgr::doSimpleDraw(Viewport*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r3, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	beq      lbl_80209BC8
	addi     r3, r3, 0x30

lbl_80209BC8:
	li       r0, 0
	lis      r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0x14(r1)
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80209C04
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80209D74

lbl_80209C04:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80209C70

lbl_80209C1C:
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
	bne      lbl_80209D74
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80209C70:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80209C1C
	b        lbl_80209D74

lbl_80209C90:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x224(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80209CE4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80209D74

lbl_80209CE4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80209D58

lbl_80209D04:
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
	bne      lbl_80209D74
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80209D58:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80209D04

lbl_80209D74:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80209C90
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80209DA8
 * Size:	00004C
 */
void Iterator<Game::ItemUjamushi::Item>::isDone()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	subf     r0, r0, r3
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80209DF4
 * Size:	000004
 */
void ItemUjamushi::Mgr::onLoadResources(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void ItemUjamushi::Mgr::birth(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80209DF8
 * Size:	00000C
 */
void ItemUjamushi::Mgr::getCaveName(int)
{
	/*
	lis      r3, lbl_80481EB0@ha
	addi     r3, r3, lbl_80481EB0@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209E04
 * Size:	000054
 */
void ItemUjamushi::Mgr::getCaveID(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_80481EB0@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, lbl_80481EB0@l
	stw      r31, 0xc(r1)
	mr       r31, r4
	bl       strlen
	lis      r4, lbl_80481EB0@ha
	mr       r5, r3
	addi     r3, r4, lbl_80481EB0@l
	mr       r4, r31
	bl       strncmp
	neg      r0, r3
	or       r0, r0, r3
	srawi    r3, r0, 0x1f
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209E58
 * Size:	000094
 */
void ItemUjamushi::WaitState::init(Game::ItemUjamushi::Item*, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 3
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r29, 0x200(r4)
	b        lbl_80209EA8

lbl_80209E88:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stb      r31, 0xac(r3)
	addi     r30, r30, 1

lbl_80209EA8:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	blt      lbl_80209E88
	lfs      f0, lbl_80519D98@sda21(r2)
	stfs     f0, 0x10(r28)
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
 * Address:	80209EEC
 * Size:	000058
 */
void ItemUjamushi::WaitState::exec(Game::ItemUjamushi::Item*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80519D94@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x10(r3)
	lfs      f1, 0x54(r5)
	fsubs    f1, f2, f1
	stfs     f1, 0x10(r3)
	lfs      f1, 0x10(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80209F34
	lwz      r12, 0(r3)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80209F34:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209F44
 * Size:	000030
 */
void transit__Q24Game36FSMState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg(void)
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
 * Address:	80209F74
 * Size:	000004
 */
void ItemUjamushi::WaitState::cleanup(Game::ItemUjamushi::Item*) { }

/*
 * --INFO--
 * Address:	80209F78
 * Size:	0000C4
 */
void ItemUjamushi::ActiveState::init(Game::ItemUjamushi::Item*, Game::StateArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	li       r30, 0
	lwz      r29, 0x200(r4)
	lfs      f31, lbl_80519D94@sda21(r2)
	mr       r28, r3
	mr       r31, r30
	b        lbl_80209FF0

lbl_80209FB4:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0xac(r3)
	cmplwi   r0, 6
	beq      lbl_80209FE0
	cmplwi   r0, 3
	bne      lbl_80209FEC

lbl_80209FE0:
	stb      r31, 0xac(r3)
	stfs     f31, 0xb4(r3)
	stfs     f31, 0xb8(r3)

lbl_80209FEC:
	addi     r30, r30, 1

lbl_80209FF0:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	blt      lbl_80209FB4
	lfs      f0, lbl_80519E38@sda21(r2)
	stfs     f0, 0x10(r28)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A03C
 * Size:	000004
 */
void ItemUjamushi::ActiveState::exec(Game::ItemUjamushi::Item*) { }

/*
 * --INFO--
 * Address:	8020A040
 * Size:	000004
 */
void ItemUjamushi::ActiveState::cleanup(Game::ItemUjamushi::Item*) { }

/*
 * --INFO--
 * Address:	8020A044
 * Size:	000094
 */
void ItemUjamushi::DigState::init(Game::ItemUjamushi::Item*, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 4
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r29, 0x200(r4)
	b        lbl_8020A094

lbl_8020A074:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stb      r31, 0xac(r3)
	addi     r30, r30, 1

lbl_8020A094:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	blt      lbl_8020A074
	lfs      f0, lbl_80519D98@sda21(r2)
	stfs     f0, 0x10(r28)
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
 * Address:	8020A0D8
 * Size:	000058
 */
void ItemUjamushi::DigState::exec(Game::ItemUjamushi::Item*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80519D94@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x10(r3)
	lfs      f1, 0x54(r5)
	fsubs    f1, f2, f1
	stfs     f1, 0x10(r3)
	lfs      f1, 0x10(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8020A120
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8020A120:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A130
 * Size:	000004
 */
void ItemUjamushi::DigState::cleanup(Game::ItemUjamushi::Item*) { }

/*
 * --INFO--
 * Address:	8020A134
 * Size:	00004C
 */
void ItemUjamushi::Mgr::generatorNewItemParm(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 8
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8020A170
	lis      r5, __vt__Q24Game11GenItemParm@ha
	lis      r4, __vt__15GenUjamushiParm@ha
	addi     r5, r5, __vt__Q24Game11GenItemParm@l
	li       r0, 0x64
	stw      r5, 0(r3)
	addi     r4, r4, __vt__15GenUjamushiParm@l
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_8020A170:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A180
 * Size:	000088
 */
void ItemUjamushi::Mgr::generatorWrite(Stream&, Game::GenItemParm*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, lbl_80481D40@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r3, lbl_80481D40@l
	stw      r30, 0x18(r1)
	or.      r30, r5, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	bne      lbl_8020A1C0
	addi     r3, r31, 0x88
	addi     r5, r31, 0x9c
	li       r4, 0x5ea
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8020A1C0:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r0, 4(r30)
	mr       r3, r29
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r29
	addi     r4, r31, 0x17c
	crclr    6
	bl       textWriteText__6StreamFPce
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
 * Address:	8020A208
 * Size:	000064
 */
void ItemUjamushi::Mgr::generatorRead(Stream&, Game::GenItemParm*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  bne-      .loc_0x3C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x5F4
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DFC00

	.loc_0x3C:
	  mr        r3, r30
	  bl        0x20A51C
	  extsh     r0, r3
	  stw       r0, 0x4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A26C
 * Size:	0001CC
 */
void generatorBirth__Q34Game12ItemUjamushi3MgrFR10Vector3f R10Vector3f PQ24Game11GenItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x48
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x5FB
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DFC70

	.loc_0x48:
	  li        r3, 0x204
	  bl        -0x1E6414
	  mr.       r31, r3
	  beq-      .loc_0x160
	  li        r4, 0x411
	  bl        -0x3E2E0
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0xAB0
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1E644C
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0xAC8
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0xAE0
	  subi      r0, r4, 0x804
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xBC:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804C
	  lis       r4, 0x804C
	  subi      r5, r3, 0xD18
	  lis       r3, 0x804C
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x1B0
	  subi      r4, r4, 0x40DC
	  subi      r0, r3, 0xAF0
	  stw       r5, 0x178(r31)
	  li        r3, 0x8
	  stw       r4, 0x1F8(r31)
	  stw       r0, 0x1F8(r31)
	  bl        -0x1E64D0
	  mr.       r0, r3
	  beq-      .loc_0x11C
	  bl        -0xD6324
	  mr        r0, r3

	.loc_0x11C:
	  stw       r0, 0x114(r31)
	  addi      r0, r31, 0x138
	  lfs       f0, -0x44C4(r2)
	  addi      r4, r31, 0x1F8
	  addi      r6, r31, 0x1C4
	  li        r5, 0
	  stfs      f0, 0x1D0(r31)
	  li        r7, 0
	  stw       r0, 0x1FC(r31)
	  lwz       r3, 0x114(r31)
	  bl        -0xD6300
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
	  mr        r3, r28
	  mr        r4, r31
	  bl        0x3090
	  lwz       r5, 0x4(r30)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D0C
	  lis       r3, 0x804C
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x1094
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stw       r5, 0xC(r1)
	  bl        -0xCF438
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0
	  bl        -0xCF268
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A438
 * Size:	00000C
 */
void ItemUjamushi::InitArg::getName(void)
{
	/*
	lis      r3, lbl_80481ECC@ha
	addi     r3, r3, lbl_80481ECC@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A444
 * Size:	000174
 */
ItemUjamushi::Mgr::~Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8020A59C
	lis      r3, __vt__Q34Game12ItemUjamushi3Mgr@ha
	addic.   r0, r30, 0x310
	addi     r3, r3, __vt__Q34Game12ItemUjamushi3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_8020A4B4
	lis      r4, __vt__Q34Game12ItemUjamushi13BoidParameter@ha
	addic.   r3, r30, 0x328
	addi     r0, r4, __vt__Q34Game12ItemUjamushi13BoidParameter@l
	stw      r0, 0x310(r30)
	beq      lbl_8020A4A8
	lis      r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@ha
	addi     r0, r4, __vt__Q44Game12ItemUjamushi13BoidParameter5TNode@l
	stw      r0, 0x328(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_8020A4A8:
	addi     r3, r30, 0x310
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_8020A4B4:
	cmplwi   r30, 0
	beq      lbl_8020A58C
	lis      r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_8020A558
	lis      r4, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r3, r30, 0x6c
	addi     r4, r4, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@l
	stw      r4, 0x4c(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_8020A508
	lis      r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
	addi     r0, r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0x6c(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_8020A508:
	addic.   r0, r30, 0x4c
	beq      lbl_8020A558
	lis      r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@l
	stw      r3, 0x4c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_8020A558
	lis      r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r0, r30, 0x4c
	addi     r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0x4c(r30)
	beq      lbl_8020A558
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x4c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x4c(r30)
	bl       __dt__5CNodeFv

lbl_8020A558:
	addic.   r0, r30, 0x30
	beq      lbl_8020A58C
	lis      r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r0, r30, 0x30
	addi     r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0x30(r30)
	beq      lbl_8020A58C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x30(r30)
	bl       __dt__5CNodeFv

lbl_8020A58C:
	extsh.   r0, r31
	ble      lbl_8020A59C
	mr       r3, r30
	bl       __dl__FPv

lbl_8020A59C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A5B8
 * Size:	00000C
 */
void ItemUjamushi::Mgr::generatorGetID(void)
{
	/*
	lis      r3, 0x756A6D73@ha
	addi     r3, r3, 0x756A6D73@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A5C4
 * Size:	00000C
 */
void ItemUjamushi::Mgr::generatorLocalVersion(void)
{
	/*
	lis      r3, 0x30303030@ha
	addi     r3, r3, 0x30303030@l
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8020A5D0
 * Size:	000038
 */
void Iterator<Game::ItemUjamushi::Item>::operator*()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r4, 4(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	8020A608
 * Size:	0000E4
 */
void Iterator<Game::ItemUjamushi::Item>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_8020A648
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8020A6D8

lbl_8020A648:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8020A6BC

lbl_8020A668:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020A6D8
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_8020A6BC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020A668

lbl_8020A6D8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A6EC
 * Size:	0000DC
 */
void Iterator<Game::ItemUjamushi::Item>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_8020A728
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8020A7B4

lbl_8020A728:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8020A798

lbl_8020A744:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020A7B4
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_8020A798:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020A744

lbl_8020A7B4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A7C8
 * Size:	000070
 */
void Container<Game::ItemUjamushi::Item>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8020A81C
	lis      r4, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
	addi     r0, r4, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0(r30)
	beq      lbl_8020A80C
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8020A80C:
	extsh.   r0, r31
	ble      lbl_8020A81C
	mr       r3, r30
	bl       __dl__FPv

lbl_8020A81C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A838
 * Size:	000088
 */
void ObjectMgr<Game::ItemUjamushi::Item>::~ObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8020A8A4
	lis      r4, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
	addi     r4, r4, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8020A894
	lis      r4, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
	addi     r0, r4, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0(r30)
	beq      lbl_8020A894
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8020A894:
	extsh.   r0, r31
	ble      lbl_8020A8A4
	mr       r3, r30
	bl       __dl__FPv

lbl_8020A8A4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A8C0
 * Size:	000060
 */
void TObjectNode<Game::ItemUjamushi::Item>::~TObjectNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8020A904
	lis      r5, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
	li       r4, 0
	addi     r0, r5, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8020A904
	mr       r3, r30
	bl       __dl__FPv

lbl_8020A904:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A920
 * Size:	0000C8
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::~NodeObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8020A9CC
	lis      r3, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
	addic.   r0, r30, 0x20
	addi     r3, r3, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8020A974
	lis      r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
	addi     r3, r30, 0x20
	addi     r0, r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
	li       r4, 0
	stw      r0, 0x20(r30)
	bl       __dt__5CNodeFv

lbl_8020A974:
	cmplwi   r30, 0
	beq      lbl_8020A9BC
	lis      r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
	addi     r3, r3, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8020A9BC
	lis      r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
	addi     r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0(r30)
	beq      lbl_8020A9BC
	lis      r4, __vt__16GenericContainer@ha
	mr       r3, r30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8020A9BC:
	extsh.   r0, r31
	ble      lbl_8020A9CC
	mr       r3, r30
	bl       __dl__FPv

lbl_8020A9CC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8020A9E8
 * Size:	000008
 */
void ItemUjamushi::Item::getFlockMgr(void)
{
	/*
	lwz      r3, 0x200(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A9F0
 * Size:	000004
 */
void ItemUjamushi::Item::makeTrMatrix(void) { }

/*
 * --INFO--
 * Address:	8020A9F4
 * Size:	000008
 */
void ItemUjamushi::Item::DummyShape::getMatrix(int)
{
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A9FC
 * Size:	000034
 */
void doAI__Q24Game89FSMItem<Game::ItemUjamushi::Item, Game::ItemUjamushi::FSM, Game::ItemUjamushi::State> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	8020AA30
 * Size:	000118
 */
ItemUjamushi::UjaMgr::~UjaMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8020AB2C
	lis      r3, __vt__Q34Game12ItemUjamushi6UjaMgr@ha
	addi     r3, r3, __vt__Q34Game12ItemUjamushi6UjaMgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x30
	stw      r0, 0x20(r30)
	beq      lbl_8020AB1C
	lis      r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x30
	stw      r0, 0x20(r30)
	beq      lbl_8020AAE8
	lis      r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
	stw      r3, 0x3c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x58(r30)
	beq      lbl_8020AAE8
	lis      r3, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
	stw      r3, 0x3c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x58(r30)
	beq      lbl_8020AAE8
	lis      r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
	addic.   r0, r30, 0x3c
	addi     r0, r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0x3c(r30)
	beq      lbl_8020AAE8
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x3c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x3c(r30)
	bl       __dt__5CNodeFv

lbl_8020AAE8:
	addic.   r0, r30, 0x20
	beq      lbl_8020AB1C
	lis      r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
	addic.   r0, r30, 0x20
	addi     r0, r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0x20(r30)
	beq      lbl_8020AB1C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x20
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x20(r30)
	bl       __dt__5CNodeFv

lbl_8020AB1C:
	extsh.   r0, r31
	ble      lbl_8020AB2C
	mr       r3, r30
	bl       __dl__FPv

lbl_8020AB2C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020AB48
 * Size:	0000AC
 */
void BaseFlockMgr::isWeed(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	blt      lbl_8020AB8C
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	bge      lbl_8020AB8C
	li       r31, 1

lbl_8020AB8C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_8020ABB0
	lis      r3, lbl_80481E3C@ha
	lis      r5, lbl_80481DDC@ha
	addi     r3, r3, lbl_80481E3C@l
	li       r4, 0x91
	addi     r5, r5, lbl_80481DDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8020ABB0:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0xc(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
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
 * Address:	8020ABF4
 * Size:	000008
 */
u32 TFlock::isWeed(void) { return 0x0; }

/*
 * --INFO--
 * Address:	8020ABFC
 * Size:	0000AC
 */
void BaseFlockMgr::fear(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	blt      lbl_8020AC40
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	bge      lbl_8020AC40
	li       r31, 1

lbl_8020AC40:
	clrlwi.  r0, r31, 0x18
	bne      lbl_8020AC64
	lis      r3, lbl_80481E3C@ha
	lis      r5, lbl_80481DDC@ha
	addi     r3, r3, lbl_80481E3C@l
	li       r4, 0x98
	addi     r5, r5, lbl_80481DDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8020AC64:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0xc(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
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
 * Address:	8020ACA8
 * Size:	000008
 */
u32 TFlock::fear(void) { return 0x0; }

} // namespace Game

/*
 * --INFO--
 * Address:	8020ACB0
 * Size:	000088
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::~ObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8020AD1C
	lis      r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
	addi     r4, r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8020AD0C
	lis      r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
	addi     r0, r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0(r30)
	beq      lbl_8020AD0C
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8020AD0C:
	extsh.   r0, r31
	ble      lbl_8020AD1C
	mr       r3, r30
	bl       __dl__FPv

lbl_8020AD1C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8020AD38
 * Size:	000004
 */
void BaseFlockMgr::do_update(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	8020AD3C
 * Size:	000038
 */
void Iterator<Game::ItemUjamushi::Uja>::operator*()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r4, 4(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8020AD74
 * Size:	000018
 */
void ItemUjamushi::Uja::isVisible(void)
{
	/*
	lbz      r4, 0xac(r3)
	subfic   r3, r4, 6
	addi     r0, r4, -6
	or       r0, r3, r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020AD8C
 * Size:	000008
 */
void TFlock::getRadius(void)
{
	/*
	lfs      f1, lbl_80519D94@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020AD94
 * Size:	000004
 */
void TFlock::constructor(void) { }

/*
 * --INFO--
 * Address:	8020AD98
 * Size:	000008
 */
u32 TFlock::isVisible(void) { return 0x1; }

/*
 * --INFO--
 * Address:	8020ADA0
 * Size:	000008
 */
u32 TFlock::damaged(float) { return 0x1; }

} // namespace Game

/*
 * --INFO--
 * Address:	8020ADA8
 * Size:	00002C
 */
void getNext__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> FPv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x3c(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	8020ADD4
 * Size:	00002C
 */
void getStart__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x3c(r3)
	lwz      r12, 0x18(r12)
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
 * Address:	8020AE00
 * Size:	000024
 */
void killFlock__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> FPQ24Game6TFlock(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x3C
	  stw       r0, 0x14(r1)
	  bl        0x494
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020AE24
 * Size:	0001E8
 */
void initDependency__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
	addi     r3, r3, 0x4c
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020AE70
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020AFDC

lbl_8020AE70:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020AEDC

lbl_8020AE88:
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
	bne      lbl_8020AFDC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020AEDC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020AE88
	b        lbl_8020AFDC

lbl_8020AEFC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x1bc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020AF4C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020AFDC

lbl_8020AF4C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020AFC0

lbl_8020AF6C:
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
	bne      lbl_8020AFDC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020AFC0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020AF6C

lbl_8020AFDC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020AEFC
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B00C
 * Size:	000024
 */
void kill__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4Item(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x4C
	  stw       r0, 0x14(r1)
	  bl        0x1CC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020B030
 * Size:	00002C
 */
void doAnimation__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x64(r12)
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
 * Address:	8020B05C
 * Size:	00002C
 */
void doEntry__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x68(r12)
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
 * Address:	8020B088
 * Size:	00002C
 */
void doSetView__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fi(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x6c(r12)
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
 * Address:	8020B0B4
 * Size:	00002C
 */
void doViewCalc__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x70(r12)
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
 * Address:	8020B0E0
 * Size:	00002C
 */
void doSimulation__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Ff(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x74(r12)
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
 * Address:	8020B10C
 * Size:	00002C
 */
void doDirectDraw__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FR8Graphics(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x78(r12)
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
 * Address:	8020B138
 * Size:	000004
 */
void onDamage__Q24Game37ItemState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4Itemf(void) { }

/*
 * --INFO--
 * Address:	8020B13C
 * Size:	000004
 */
void onKeyEvent__Q24Game37ItemState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent(void) { }

/*
 * --INFO--
 * Address:	8020B140
 * Size:	000004
 */
void onBounce__Q24Game37ItemState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle(void) { }

/*
 * --INFO--
 * Address:	8020B144
 * Size:	000004
 */
void onPlatCollision__Q24Game37ItemState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent(void) { }

/*
 * --INFO--
 * Address:	8020B148
 * Size:	000004
 */
void onCollision__Q24Game37ItemState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent(void) { }

/*
 * --INFO--
 * Address:	8020B14C
 * Size:	000004
 */
void init__Q24Game36FSMState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg(void) { }

/*
 * --INFO--
 * Address:	8020B150
 * Size:	000004
 */
void exec__Q24Game36FSMState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4Item(void) { }

/*
 * --INFO--
 * Address:	8020B154
 * Size:	000004
 */
void cleanup__Q24Game36FSMState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4Item(void) { }

/*
 * --INFO--
 * Address:	8020B158
 * Size:	000004
 */
void resume__Q24Game36FSMState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4Item(void) { }

/*
 * --INFO--
 * Address:	8020B15C
 * Size:	000004
 */
void restart__Q24Game36FSMState<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4Item(void) { }

/*
 * --INFO--
 * Address:	8020B160
 * Size:	000004
 */
void init__Q24Game40StateMachine<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4Item(void) { }

/*
 * --INFO--
 * Address:	8020B164
 * Size:	000064
 */
void create__Q24Game40StateMachine<Game::ItemUjamushi::Item> Fi(void)
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
 * Address:	8020B1C8
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::get(void*)
{
	/*
	lwz      r3, 0x18(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B1D0
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::getNext(void*)
{
	/*
	lwz      r3, 4(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B1D8
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::getStart()
{
	/*
	lwz      r3, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B1E0
 * Size:	000008
 */
u32 NodeObjectMgr<Game::ItemUjamushi::Item>::getEnd() { return 0x0; }

/*
 * --INFO--
 * Address:	8020B1E8
 * Size:	000044
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::delNode(Game::ItemUjamushi::Item*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x30(r3)
	b        lbl_8020B214

lbl_8020B1FC:
	lwz      r0, 0x18(r3)
	cmplw    r0, r4
	bne      lbl_8020B210
	bl       del__5CNodeFv
	b        lbl_8020B21C

lbl_8020B210:
	lwz      r3, 4(r3)

lbl_8020B214:
	cmplwi   r3, 0
	bne      lbl_8020B1FC

lbl_8020B21C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B22C
 * Size:	000018
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x30(r3)
	stw      r0, 0x2c(r3)
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B244
 * Size:	000060
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::birth()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "getEmptyIndex__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	cmpwi    r3, -1
	beq      lbl_8020B28C
	lwz      r6, 0x28(r31)
	li       r0, 0
	lwz      r4, 0x2c(r31)
	mulli    r5, r3, 0xc8
	stbx     r0, r4, r3
	add      r3, r6, r5
	lwz      r4, 0x20(r31)
	addi     r0, r4, 1
	stw      r0, 0x20(r31)
	b        lbl_8020B290

lbl_8020B28C:
	li       r3, 0

lbl_8020B290:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B2A4
 * Size:	000054
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::kill(Game::ItemUjamushi::Uja*)
{
	/*
	lwz      r0, 0x24(r3)
	li       r6, 0
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	blelr

lbl_8020B2BC:
	lwz      r0, 0x28(r3)
	add      r0, r0, r5
	cmplw    r0, r4
	bne      lbl_8020B2E8
	lwz      r4, 0x2c(r3)
	li       r0, 1
	stbx     r0, r4, r6
	lwz      r4, 0x20(r3)
	addi     r0, r4, -1
	stw      r0, 0x20(r3)
	blr

lbl_8020B2E8:
	addi     r5, r5, 0xc8
	addi     r6, r6, 1
	bdnz     lbl_8020B2BC
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B2F8
 * Size:	000040
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getNext(void*)
{
	/*
	lwz      r5, 0x24(r3)
	addi     r6, r4, 1
	subf     r0, r6, r5
	mtctr    r0
	cmpw     r6, r5
	bge      lbl_8020B330

lbl_8020B310:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r6
	cmplwi   r0, 0
	bne      lbl_8020B328
	mr       r3, r6
	blr

lbl_8020B328:
	addi     r6, r6, 1
	bdnz     lbl_8020B310

lbl_8020B330:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B338
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, -1
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	8020B368
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getEnd()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B370
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getTo()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B378
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doAnimation()
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_8020B3B0
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_8020B3B0

lbl_8020B3A8:
	addi     r5, r5, 8
	bdnz     lbl_8020B3A8

lbl_8020B3B0:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_8020B3C0:
	bdnz     lbl_8020B3C0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B3C8
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doEntry()
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_8020B400
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_8020B400

lbl_8020B3F8:
	addi     r5, r5, 8
	bdnz     lbl_8020B3F8

lbl_8020B400:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_8020B410:
	bdnz     lbl_8020B410
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B418
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doSetView(int)
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_8020B450
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_8020B450

lbl_8020B448:
	addi     r5, r5, 8
	bdnz     lbl_8020B448

lbl_8020B450:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_8020B460:
	bdnz     lbl_8020B460
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B468
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doViewCalc()
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_8020B4A0
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_8020B4A0

lbl_8020B498:
	addi     r5, r5, 8
	bdnz     lbl_8020B498

lbl_8020B4A0:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_8020B4B0:
	bdnz     lbl_8020B4B0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B4B8
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doSimulation(float)
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_8020B4F0
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_8020B4F0

lbl_8020B4E8:
	addi     r5, r5, 8
	bdnz     lbl_8020B4E8

lbl_8020B4F0:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_8020B500:
	bdnz     lbl_8020B500
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B508
 * Size:	000050
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::doDirectDraw(Graphics&)
{
	/*
	lwz      r4, 0x24(r3)
	li       r5, 0
	cmpwi    r4, 0
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_8020B540
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_8020B540

lbl_8020B538:
	addi     r5, r5, 8
	bdnz     lbl_8020B538

lbl_8020B540:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bgelr

lbl_8020B550:
	bdnz     lbl_8020B550
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B558
 * Size:	000018
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B570
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::clearMgr()
{
	/*
	li       r0, 0
	li       r6, 0
	stw      r0, 0x20(r3)
	li       r5, 1
	b        lbl_8020B590

lbl_8020B584:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_8020B590:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_8020B584
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B5A0
 * Size:	000004
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::onAlloc() { }

/*
 * --INFO--
 * Address:	8020B5A4
 * Size:	00003C
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::getEmptyIndex()
{
	/*
	lwz      r0, 0x24(r3)
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8020B5D8

lbl_8020B5B8:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r5
	cmplwi   r0, 1
	bne      lbl_8020B5D0
	mr       r3, r5
	blr

lbl_8020B5D0:
	addi     r5, r5, 1
	bdnz     lbl_8020B5B8

lbl_8020B5D8:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B5E0
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::get(void*)
{
	/*
	mulli    r0, r4, 0xc8
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B5F0
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020B638
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020B7A4

lbl_8020B638:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020B6A4

lbl_8020B650:
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
	bne      lbl_8020B7A4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020B6A4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020B650
	b        lbl_8020B7A4

lbl_8020B6C4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020B714
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020B7A4

lbl_8020B714:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020B788

lbl_8020B734:
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
	bne      lbl_8020B7A4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020B788:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020B734

lbl_8020B7A4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020B6C4
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B7D4
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020B81C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020B988

lbl_8020B81C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020B888

lbl_8020B834:
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
	bne      lbl_8020B988
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020B888:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020B834
	b        lbl_8020B988

lbl_8020B8A8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020B8F8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020B988

lbl_8020B8F8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020B96C

lbl_8020B918:
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
	bne      lbl_8020B988
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020B96C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020B918

lbl_8020B988:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020B8A8
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020B9B8
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020BA08
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BB78

lbl_8020BA08:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BA74

lbl_8020BA20:
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
	bne      lbl_8020BB78
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020BA74:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020BA20
	b        lbl_8020BB78

lbl_8020BA94:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020BAE8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BB78

lbl_8020BAE8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BB5C

lbl_8020BB08:
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
	bne      lbl_8020BB78
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020BB5C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020BB08

lbl_8020BB78:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020BA94
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020BBAC
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020BBF4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BD60

lbl_8020BBF4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BC60

lbl_8020BC0C:
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
	bne      lbl_8020BD60
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020BC60:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020BC0C
	b        lbl_8020BD60

lbl_8020BC80:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020BCD0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BD60

lbl_8020BCD0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BD44

lbl_8020BCF0:
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
	bne      lbl_8020BD60
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020BD44:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020BCF0

lbl_8020BD60:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020BC80
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020BD90
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020BDE0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BF50

lbl_8020BDE0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BE4C

lbl_8020BDF8:
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
	bne      lbl_8020BF50
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020BE4C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020BDF8
	b        lbl_8020BF50

lbl_8020BE6C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020BEC0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BF50

lbl_8020BEC0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020BF34

lbl_8020BEE0:
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
	bne      lbl_8020BF50
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020BF34:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020BEE0

lbl_8020BF50:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020BE6C
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020BF84
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemUjamushi::Item>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020BFD4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C144

lbl_8020BFD4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C040

lbl_8020BFEC:
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
	bne      lbl_8020C144
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C040:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020BFEC
	b        lbl_8020C144

lbl_8020C060:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020C0B4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C144

lbl_8020C0B4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C128

lbl_8020C0D4:
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
	bne      lbl_8020C144
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C128:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C0D4

lbl_8020C144:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020C060
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020C178
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020C1C0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C31C

lbl_8020C1C0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C22C

lbl_8020C1D8:
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
	bne      lbl_8020C31C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C22C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C1D8
	b        lbl_8020C31C

lbl_8020C24C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020C28C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C31C

lbl_8020C28C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C300

lbl_8020C2AC:
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
	bne      lbl_8020C31C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C300:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C2AC

lbl_8020C31C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020C24C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020C34C
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020C394
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C4F0

lbl_8020C394:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C400

lbl_8020C3AC:
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
	bne      lbl_8020C4F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C400:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C3AC
	b        lbl_8020C4F0

lbl_8020C420:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020C460
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C4F0

lbl_8020C460:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C4D4

lbl_8020C480:
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
	bne      lbl_8020C4F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C4D4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C480

lbl_8020C4F0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020C420
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020C520
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020C568
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C6C4

lbl_8020C568:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C5D4

lbl_8020C580:
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
	bne      lbl_8020C6C4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C5D4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C580
	b        lbl_8020C6C4

lbl_8020C5F4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020C634
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C6C4

lbl_8020C634:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C6A8

lbl_8020C654:
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
	bne      lbl_8020C6C4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C6A8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C654

lbl_8020C6C4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020C5F4
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020C6F4
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020C73C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C898

lbl_8020C73C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C7A8

lbl_8020C754:
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
	bne      lbl_8020C898
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C7A8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C754
	b        lbl_8020C898

lbl_8020C7C8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020C808
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C898

lbl_8020C808:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C87C

lbl_8020C828:
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
	bne      lbl_8020C898
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C87C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C828

lbl_8020C898:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020C7C8
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020C8C8
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020C910
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020CA6C

lbl_8020C910:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020C97C

lbl_8020C928:
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
	bne      lbl_8020CA6C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020C97C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C928
	b        lbl_8020CA6C

lbl_8020C99C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020C9DC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020CA6C

lbl_8020C9DC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020CA50

lbl_8020C9FC:
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
	bne      lbl_8020CA6C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020CA50:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020C9FC

lbl_8020CA6C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020C99C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020CA9C
 * Size:	0001D4
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8020CAE4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020CC40

lbl_8020CAE4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020CB50

lbl_8020CAFC:
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
	bne      lbl_8020CC40
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020CB50:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020CAFC
	b        lbl_8020CC40

lbl_8020CB70:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8020CBB0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020CC40

lbl_8020CBB0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8020CC24

lbl_8020CBD0:
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
	bne      lbl_8020CC40
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8020CC24:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020CBD0

lbl_8020CC40:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8020CB70
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020CC70
 * Size:	00002C
 */
void Container<Game::ItemUjamushi::Item>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	8020CC9C
 * Size:	000008
 */
u32 Container<Game::ItemUjamushi::Item>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	8020CCA4
 * Size:	000008
 */
u32 Container<Game::ItemUjamushi::Item>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	8020CCAC
 * Size:	00002C
 */
void Container<Game::ItemUjamushi::Uja>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	8020CCD8
 * Size:	000008
 */
u32 Container<Game::ItemUjamushi::Uja>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	8020CCE0
 * Size:	000008
 */
u32 Container<Game::ItemUjamushi::Uja>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	8020CCE8
 * Size:	000188
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::alloc(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r31
	mulli    r3, r29, 0xc8
	stw      r28, 0x10(r1)
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game12ItemUjamushi3UjaFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q34Game12ItemUjamushi3UjaFv@l
	li       r5, 0
	li       r6, 0xc8
	bl       __construct_new_array
	stw      r3, 0x28(r30)
	li       r0, 0
	mr       r3, r29
	stw      r31, 0x24(r30)
	stw      r0, 0x20(r30)
	bl       __nwa__FUl
	cmpwi    r31, 0
	stw      r3, 0x2c(r30)
	li       r11, 0
	ble      lbl_8020CE08
	cmpwi    r31, 8
	addi     r3, r31, -8
	ble      lbl_8020CDE4
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_8020CDE4

lbl_8020CD7C:
	lwz      r3, 0x2c(r30)
	li       r10, 1
	addi     r8, r11, 1
	addi     r7, r11, 2
	stbx     r10, r3, r11
	addi     r6, r11, 3
	addi     r5, r11, 4
	addi     r4, r11, 5
	lwz      r9, 0x2c(r30)
	addi     r3, r11, 6
	addi     r0, r11, 7
	addi     r11, r11, 8
	stbx     r10, r9, r8
	lwz      r8, 0x2c(r30)
	stbx     r10, r8, r7
	lwz      r7, 0x2c(r30)
	stbx     r10, r7, r6
	lwz      r6, 0x2c(r30)
	stbx     r10, r6, r5
	lwz      r5, 0x2c(r30)
	stbx     r10, r5, r4
	lwz      r4, 0x2c(r30)
	stbx     r10, r4, r3
	lwz      r3, 0x2c(r30)
	stbx     r10, r3, r0
	bdnz     lbl_8020CD7C

lbl_8020CDE4:
	subf     r0, r11, r31
	li       r4, 1
	mtctr    r0
	cmpw     r11, r31
	bge      lbl_8020CE08

lbl_8020CDF8:
	lwz      r3, 0x2c(r30)
	stbx     r4, r3, r11
	addi     r11, r11, 1
	bdnz     lbl_8020CDF8

lbl_8020CE08:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	li       r29, 0
	b        lbl_8020CE48

lbl_8020CE28:
	lwz      r0, 0x28(r30)
	add      r3, r0, r29
	lwz      r12, 0xc(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 0xc8
	addi     r28, r28, 1

lbl_8020CE48:
	cmpw     r28, r31
	blt      lbl_8020CE28
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
 * Address:	8020CE70
 * Size:	00009C
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
	lis      r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
	lis      r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@ha
	stw      r0, 0(r31)
	li       r8, 0
	addi     r7, r4, "__vt__36ObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
	addi     r5, r3, "__vt__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>"@l
	stb      r8, 0x18(r31)
	addi     r0, r6, __vt__16GenericObjectMgr@l
	addi     r6, r7, 0x2c
	addi     r4, r5, 0x2c
	stw      r0, 0x1c(r31)
	li       r0, 1
	mr       r3, r31
	stw      r7, 0(r31)
	stw      r6, 0x1c(r31)
	stw      r5, 0(r31)
	stw      r4, 0x1c(r31)
	stb      r0, 0x18(r31)
	stw      r8, 0x24(r31)
	stw      r8, 0x20(r31)
	stw      r8, 0x28(r31)
	stw      r8, 0x2c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020CF0C
 * Size:	00009C
 */
void transit__Q24Game40StateMachine<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x1DC(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x1DC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020CFA8
 * Size:	000084
 */
void registerState__Q24Game40StateMachine<Game::ItemUjamushi::Item> FPQ24Game36FSMState<Game::ItemUjamushi::Item>(void)
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
 * Address:	8020D02C
 * Size:	000038
 */
void exec__Q24Game40StateMachine<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4Item(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020D064
 * Size:	000044
 */
void onKeyEvent__Q24Game89FSMItem<Game::ItemUjamushi::Item, Game::ItemUjamushi::FSM, Game::ItemUjamushi::State>
FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020D0A8
 * Size:	000044
 */
void platCallback__Q24Game89FSMItem<Game::ItemUjamushi::Item, Game::ItemUjamushi::FSM, Game::ItemUjamushi::State> FRQ24Game9PlatEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020D0EC
 * Size:	000044
 */
void collisionCallback__Q24Game89FSMItem<Game::ItemUjamushi::Item, Game::ItemUjamushi::FSM, Game::ItemUjamushi::State>
FRQ24Game9CollEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020D130
 * Size:	000044
 */
void bounceCallback__Q24Game89FSMItem<Game::ItemUjamushi::Item, Game::ItemUjamushi::FSM, Game::ItemUjamushi::State> FPQ23Sys8Triangle(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020D174
 * Size:	00002C
 */
void getEnd__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
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
 * Address:	8020D1A0
 * Size:	00002C
 */
void getStart__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x18(r12)
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
 * Address:	8020D1CC
 * Size:	00002C
 */
void getNext__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FPv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	8020D1F8
 * Size:	00002C
 */
void get__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FPv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	8020D224
 * Size:	000240
 */
void killAll__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
	addi     r3, r3, 0x4c
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
	stw      r31, 0x2c(r1)
	cmplwi   r0, 0
	stw      r30, 0x28(r1)
	stw      r4, 0x10(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_8020D278
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8020D300

lbl_8020D278:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8020D2E4

lbl_8020D290:
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
	bne      lbl_8020D300
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8020D2E4:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020D290

lbl_8020D300:
	lis      r3, __vt__Q24Game15CreatureKillArg@ha
	addi     r31, r3, __vt__Q24Game15CreatureKillArg@l
	b        lbl_8020D42C

lbl_8020D30C:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stw      r31, 8(r1)
	mr       r30, r3
	stw      r0, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020D354
	mr       r3, r30
	addi     r4, r1, 8
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8020D354:
	lwz      r4, 0x17c(r30)
	cmplwi   r4, 0
	beq      lbl_8020D370
	lwz      r3,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r3, 0
	beq      lbl_8020D370
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8020D370:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_8020D39C
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8020D42C

lbl_8020D39C:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8020D410

lbl_8020D3BC:
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
	bne      lbl_8020D42C
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8020D410:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020D3BC

lbl_8020D42C:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_8020D30C
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
 * Address:	8020D464
 * Size:	000084
 */
void entry__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FPQ34Game12ItemUjamushi4Item(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x1C
	  stw       r29, 0x180(r4)
	  bl        -0x1E95E8
	  mr.       r31, r3
	  beq-      .loc_0x44
	  bl        0x203EF8
	  lis       r3, 0x804C
	  subi      r0, r3, 0xE60
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  stw       r30, 0x18(r31)
	  mr        r4, r31
	  addi      r3, r29, 0x6C
	  bl        0x203F54
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020D4E8
 * Size:	000114
 */
void __ct__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	extsh.   r0, r4
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	beq      lbl_8020D514
	addi     r0, r31, 0x88
	stw      r0, 4(r31)

lbl_8020D514:
	mr       r3, r31
	li       r4, 0
	li       r5, 1
	bl       __ct__Q24Game11BaseItemMgrFi
	addi     r29, r31, 0x30
	mr       r3, r29
	bl       __ct__5CNodeFv
	lis      r3, __vt__16GenericContainer@ha
	li       r5, 0
	addi     r0, r3, __vt__16GenericContainer@l
	addi     r30, r31, 0x4c
	lis      r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0(r29)
	lis      r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@ha
	addi     r4, r3, "__vt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>"@l
	stb      r5, 0x18(r29)
	addi     r0, r4, 0x74
	mr       r3, r30
	stw      r4, 0(r31)
	stw      r0, 0x30(r31)
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r5, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__37Container<Q34Game12ItemUjamushi4Item>"@l
	lis      r4, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
	lis      r3, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@ha
	stw      r0, 0(r30)
	li       r0, 0
	addi     r6, r4, "__vt__37ObjectMgr<Q34Game12ItemUjamushi4Item>"@l
	addi     r4, r3, "__vt__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>"@l
	stb      r0, 0x18(r30)
	addi     r0, r5, __vt__16GenericObjectMgr@l
	addi     r29, r30, 0x20
	addi     r5, r6, 0x2c
	stw      r0, 0x1c(r30)
	addi     r0, r4, 0x2c
	mr       r3, r29
	stw      r6, 0(r30)
	stw      r5, 0x1c(r30)
	stw      r4, 0(r30)
	stw      r0, 0x1c(r30)
	bl       __ct__5CNodeFv
	lis      r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@ha
	mr       r3, r31
	addi     r0, r4, "__vt__39TObjectNode<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020D5FC
 * Size:	00002C
 */
void getEnd__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x3c(r3)
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
 * Address:	8020D628
 * Size:	00002C
 */
void get__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> FPv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x3c(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	8020D654
 * Size:	000028
 */
void __sinit_itemUjamushi_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804BEF60@ha
	stw      r0, lbl_80515BB8@sda21(r13)
	stfsu    f0, lbl_804BEF60@l(r3)
	stfs     f0, lbl_80515BBC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020D67C
 * Size:	000008
 */
void @32 @__dt__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	addi     r3, r3, -32
	b        "__dt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D684
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @resetMgr()
{
	/*
	addi     r3, r3, -28
	b        "resetMgr__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D68C
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b "doDirectDraw__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	8020D694
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"
	*/
}

/*
 * --INFO--
 * Address:	8020D69C
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D6A4
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
	*/
}

/*
 * --INFO--
 * Address:	8020D6AC
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D6B4
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemUjamushi::Uja>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D6BC
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__36ObjectMgr<Q34Game12ItemUjamushi3Uja>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	8020D6C4
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Ff"
	*/
}

/*
 * --INFO--
 * Address:	8020D6CC
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D6D4
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
	*/
}

/*
 * --INFO--
 * Address:	8020D6DC
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D6E4
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Uja>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__36ObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D6EC
 * Size:	000008
 */
void @32 @getEnd__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	addi     r3, r3, -32
	b        "getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D6F4
 * Size:	000008
 */
void @32 @getStart__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> Fv(void)
{
	/*
	addi     r3, r3, -32
	b        "getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D6FC
 * Size:	000008
 */
void @32 @getNext__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> FPv(void)
{
	/*
	addi     r3, r3, -32
	b        "getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
	*/
}

/*
 * --INFO--
 * Address:	8020D704
 * Size:	000008
 */
void @32 @get__Q24Game36TFlockMgr<Game::ItemUjamushi::Uja> FPv(void)
{
	/*
	addi     r3, r3, -32
	b        "get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
	*/
}

/*
 * --INFO--
 * Address:	8020D70C
 * Size:	000008
 */
@32 @Game::ItemUjamushi::UjaMgr::~UjaMgr(void)
{
	/*
	addi     r3, r3, -32
	b        __dt__Q34Game12ItemUjamushi6UjaMgrFv
	*/
}

/*
 * --INFO--
 * Address:	8020D714
 * Size:	000008
 */
void @376 @onKeyEvent__Q24Game89FSMItem<Game::ItemUjamushi::Item, Game::ItemUjamushi::FSM, Game::ItemUjamushi::State>
FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x6B4
	*/
}

/*
 * --INFO--
 * Address:	8020D71C
 * Size:	000008
 */
void @48 @__dt__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	addi     r3, r3, -48
	b        "__dt__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D724
 * Size:	000008
 */
void NodeObjectMgr<Game::ItemUjamushi::Item>::@28 @resetMgr()
{
	/*
	addi     r3, r3, -28
	b        "resetMgr__41NodeObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D72C
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__37ObjectMgr<Q34Game12ItemUjamushi4Item>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	8020D734
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Ff"
	*/
}

/*
 * --INFO--
 * Address:	8020D73C
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D744
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fi"
	*/
}

/*
 * --INFO--
 * Address:	8020D74C
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D754
 * Size:	000008
 */
void ObjectMgr<Game::ItemUjamushi::Item>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__37ObjectMgr<Q34Game12ItemUjamushi4Item>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D75C
 * Size:	000008
 */
void @48 @getEnd__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	addi     r3, r3, -48
	b        "getEnd__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D764
 * Size:	000008
 */
void @48 @getStart__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> Fv(void)
{
	/*
	addi     r3, r3, -48
	b        "getStart__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8020D76C
 * Size:	000008
 */
void @48 @getNext__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FPv(void)
{
	/*
	addi     r3, r3, -48
	b        "getNext__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
	*/
}

/*
 * --INFO--
 * Address:	8020D774
 * Size:	000008
 */
void @48 @get__Q24Game39NodeItemMgr<Game::ItemUjamushi::Item> FPv(void)
{
	/*
	addi     r3, r3, -48
	b        "get__Q24Game39NodeItemMgr<Q34Game12ItemUjamushi4Item>FPv"
	*/
}

/*
 * --INFO--
 * Address:	8020D77C
 * Size:	000008
 */
@48 @Game::ItemUjamushi::Mgr::~Mgr(void)
{
	/*
	addi     r3, r3, -48
	b        __dt__Q34Game12ItemUjamushi3MgrFv
	*/
}

#endif
