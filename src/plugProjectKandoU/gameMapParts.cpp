#include "Game/mapParts.h"
#include "types.h"
#include "Vector3.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_gameMapParts_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047FC70
    lbl_8047FC70:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x67616D65
        .4byte 0x4D617050
        .4byte 0x61727473
        .4byte 0x00000000
        .4byte 0x09232064
        .4byte 0x6973742F
        .4byte 0x646F6F72
        .4byte 0x2D69642F
        .4byte 0x74656B69
        .4byte 0x666C6167
        .4byte 0x0D0A0000
        .4byte 0x09232069
        .4byte 0x6E646578
        .4byte 0x0D0A0000
        .4byte 0x09232064
        .4byte 0x69722F6F
        .4byte 0x6666732F
        .4byte 0x7770696E
        .4byte 0x6465780D
        .4byte 0x0A000000
        .4byte 0x09232064
        .4byte 0x6F6F7220
        .4byte 0x6C696E6B
        .4byte 0x730D0A00
        .4byte 0x09232064
        .4byte 0x582F645A
        .4byte 0x203B2063
        .4byte 0x656C6C20
        .4byte 0x73697A65
        .4byte 0x0D0A0000
    .global lbl_8047FCF4
    lbl_8047FCF4:
        .4byte 0x67616D65
        .4byte 0x4D617050
        .4byte 0x61727473
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x82E082A4
        .4byte 0x8E6782ED
        .4byte 0x82C882A2
        .4byte 0x0A000000
        .4byte 0x2573203A
        .4byte 0x206E6F74
        .4byte 0x20666F75
        .4byte 0x6E642021
        .4byte 0x0A000000
        .4byte 0x25732F61
        .4byte 0x72632E73
        .4byte 0x7A730000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x76696577
        .4byte 0x2E626D64
        .4byte 0x00000000
        .4byte 0x74657874
        .4byte 0x7572652E
        .4byte 0x62746900
        .4byte 0x25735F25
        .4byte 0x642E6274
        .4byte 0x6B000000
        .4byte 0x25732F74
        .4byte 0x65787473
        .4byte 0x2E737A73
        .4byte 0x00000000
        .4byte 0x67726964
        .4byte 0x2E62696E
        .4byte 0x00000000
        .4byte 0x6D617063
        .4byte 0x6F64652E
        .4byte 0x62696E00
        .4byte 0x77617465
        .4byte 0x72626F78
        .4byte 0x2E747874
        .4byte 0x00000000
        .4byte 0x726F7574
        .4byte 0x652E7478
        .4byte 0x74000000
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F6D
        .4byte 0x61702F76
        .4byte 0x72626F78
        .4byte 0x2F25732E
        .4byte 0x737A7300
        .4byte 0x6D6F6465
        .4byte 0x6C2E626D
        .4byte 0x64000000
        .4byte 0x6E6F206D
        .4byte 0x6F64656C
        .4byte 0x2E626D64
        .4byte 0x20696E20
        .4byte 0x25730A00
        .4byte 0x75736572
        .4byte 0x2F4D756B
        .4byte 0x6B692F6D
        .4byte 0x6170756E
        .4byte 0x6974732F
        .4byte 0x756E6974
        .4byte 0x732F2573
        .4byte 0x00000000
        .4byte 0x2573206E
        .4byte 0x6F742066
        .4byte 0x6F756E64
        .4byte 0x20210A00
        .4byte 0x75736572
        .4byte 0x2F416265
        .4byte 0x2F636176
        .4byte 0x652F2573
        .4byte 0x00000000
        .4byte 0x6E6F206C
        .4byte 0x69676874
        .4byte 0x2066696C
        .4byte 0x65202825
        .4byte 0x73290A00
        .4byte 0x75736572
        .4byte 0x2F4D756B
        .4byte 0x6B692F6D
        .4byte 0x6170756E
        .4byte 0x6974732F
        .4byte 0x6172632F
        .4byte 0x25732F74
        .4byte 0x65787473
        .4byte 0x2E737A73
        .4byte 0x00000000
        .4byte 0x6E6F2074
        .4byte 0x65787441
        .4byte 0x52632021
        .4byte 0x0A000000
        .4byte 0x6C61796F
        .4byte 0x75742E74
        .4byte 0x78740000
        .4byte 0x3234362D
        .4byte 0x43726561
        .4byte 0x74655261
        .4byte 0x6E646F6D
        .4byte 0x4D617000
        .4byte 0x4D6F6465
        .4byte 0x6C20616E
        .4byte 0x6420436F
        .4byte 0x6C6C6973
        .4byte 0x696F6E00
        .4byte 0x3234362D
        .4byte 0x506C6163
        .4byte 0x65526F6F
        .4byte 0x6D730000
    .global lbl_8047FEBC
    lbl_8047FEBC:
        .4byte 0x75736572
        .4byte 0x2F4D756B
        .4byte 0x6B692F6D
        .4byte 0x6170756E
        .4byte 0x6974732F
        .4byte 0x6172632F
        .4byte 0x25730000
    .global lbl_8047FED8
    lbl_8047FED8:
        .4byte 0x6E6F2073
        .4byte 0x75636820
        .4byte 0x756E6974
        .4byte 0x2025730A
        .4byte 0x00000000
    .global lbl_8047FEEC
    lbl_8047FEEC:
        .4byte 0x7369626F
        .4byte 0x75646573
        .4byte 0x7520210A
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0xBF800000
        .4byte 0xBF800000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x6361705F
        .4byte 0x636F6E63
        .4byte 0x00000000
    .global lbl_8047FF38
    lbl_8047FF38:
        .4byte 0x4974656D
        .4byte 0x47617465
        .4byte 0x496E6974
        .4byte 0x41726700
    .global lbl_8047FF48
    lbl_8047FF48:
        .4byte 0x4974656D
        .4byte 0x42696746
        .4byte 0x6F756E74
        .4byte 0x61696E3A
        .4byte 0x3A496E69
        .4byte 0x74417267
        .4byte 0x00000000
    .global lbl_8047FF64
    lbl_8047FF64:
        .4byte 0x4974656D
        .4byte 0x486F6C65
        .4byte 0x3A3A496E
        .4byte 0x69744172
        .4byte 0x67000000
        .4byte 0x50656C6C
        .4byte 0x6574496E
        .4byte 0x69744172
        .4byte 0x67000000
        .4byte 0x23202564
        .4byte 0x2F25640D
        .4byte 0x0A000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B5C20
    lbl_804B5C20:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804B5C2C
    lbl_804B5C2C:
        .4byte lbl_801B7350
        .4byte lbl_801B74A8
        .4byte lbl_801B75B4
        .4byte lbl_801B6FA4
        .4byte lbl_801B7120
        .4byte lbl_801B728C
        .4byte lbl_801B71A4
        .4byte lbl_801B7218
    .global __vt__Q24Game10RoomMapMgr
    __vt__Q24Game10RoomMapMgr:
        .4byte 0
        .4byte 0
        .4byte hasHiddenCollision__Q24Game10RoomMapMgrFv
        .4byte constraintBoundBox__Q24Game10RoomMapMgrFRQ23Sys6Sphere
        .4byte "getStartPosition__Q24Game10RoomMapMgrFR10Vector3<f>i"
        .4byte getDemoMatrix__Q24Game10RoomMapMgrFv
        .4byte getBoundBox2d__Q24Game10RoomMapMgrFR10BoundBox2d
        .4byte getBoundBox__Q24Game10RoomMapMgrFR8BoundBox
        .4byte
   findRayIntersection__Q24Game10RoomMapMgrFRQ23Sys16RayIntersectInfo .4byte
   traceMove__Q24Game10RoomMapMgrFRQ24Game8MoveInfof .4byte
   "getMinY__Q24Game10RoomMapMgrFR10Vector3<f>" .4byte
   getCurrTri__Q24Game10RoomMapMgrFRQ24Game11CurrTriInfo .4byte
   createTriangles__Q24Game10RoomMapMgrFRQ23Sys17CreateTriangleArg .4byte
   setupJUTTextures__Q24Game10RoomMapMgrFv .4byte frozenable__Q24Game6MapMgrFv
        .4byte update__Q24Game6MapMgrFv
        .4byte do_update__Q24Game6MapMgrFv
        .4byte drawCollision__Q24Game10RoomMapMgrFR8GraphicsRQ23Sys6Sphere
        .4byte doSimulation__Q24Game10RoomMapMgrFf
        .4byte doDirectDraw__Q24Game10RoomMapMgrFR8Graphics
        .4byte doAnimation__Q24Game10RoomMapMgrFv
        .4byte doEntry__Q24Game10RoomMapMgrFv
        .4byte doSetView__Q24Game10RoomMapMgrFi
        .4byte doViewCalc__Q24Game10RoomMapMgrFv
        .4byte traceMove_new__Q24Game10RoomMapMgrFRQ24Game8MoveInfof
        .4byte traceMove_original__Q24Game10RoomMapMgrFRQ24Game8MoveInfof
        .4byte 0
        .4byte 0
        .4byte "@280@4@doAnimation__Q24Game10RoomMapMgrFv"
        .4byte "@280@4@doEntry__Q24Game10RoomMapMgrFv"
        .4byte "@280@4@doSetView__Q24Game10RoomMapMgrFi"
        .4byte "@280@4@doViewCalc__Q24Game10RoomMapMgrFv"
        .4byte "@280@4@doSimulation__Q24Game10RoomMapMgrFf"
        .4byte "@280@4@doDirectDraw__Q24Game10RoomMapMgrFR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte "@280@4@frozenable__Q24Game6MapMgrFv"
        .4byte getMatrixLoadType__16GenericObjectMgrFv
    .global __vt__Q24Game4Door
    __vt__Q24Game4Door:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game4DoorFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game16MapUnitInterface
    __vt__Q24Game16MapUnitInterface:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game16MapUnitInterfaceFv
        .4byte getChildCount__5CNodeFv
        .4byte constructor__Q24Game9PartsViewFv
        .4byte doAnimation__Q24Game9PartsViewFv
        .4byte doEntry__Q24Game9PartsViewFv
        .4byte doSetView__Q24Game9PartsViewFi
        .4byte doViewCalc__Q24Game9PartsViewFv
        .4byte doSimulation__Q24Game9PartsViewFf
        .4byte doDirectDraw__Q24Game9PartsViewFR8Graphics
    .global "__vt__25Iterator<Q24Game7MapRoom>"
    "__vt__25Iterator<Q24Game7MapRoom>":
        .4byte 0
        .4byte 0
        .4byte "first__25Iterator<Q24Game7MapRoom>Fv"
        .4byte "next__25Iterator<Q24Game7MapRoom>Fv"
        .4byte "isDone__25Iterator<Q24Game7MapRoom>Fv"
        .4byte "__ml__25Iterator<Q24Game7MapRoom>Fv"
    .global "__vt__26Container<Q24Game7MapRoom>"
    "__vt__26Container<Q24Game7MapRoom>":
        .4byte 0
        .4byte 0
        .4byte "__dt__26Container<Q24Game7MapRoom>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q24Game7MapRoom>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__26Container<Q24Game7MapRoom>Fi"
        .4byte "getTo__26Container<Q24Game7MapRoom>Fv"
    .global "__vt__26ObjectMgr<Q24Game7MapRoom>"
    "__vt__26ObjectMgr<Q24Game7MapRoom>":
        .4byte 0
        .4byte 0
        .4byte "__dt__26ObjectMgr<Q24Game7MapRoom>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q24Game7MapRoom>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__26Container<Q24Game7MapRoom>Fi"
        .4byte "getTo__26Container<Q24Game7MapRoom>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__26ObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "@28@doEntry__26ObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "@28@doSetView__26ObjectMgr<Q24Game7MapRoom>Fi"
        .4byte "@28@doViewCalc__26ObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "@28@doSimulation__26ObjectMgr<Q24Game7MapRoom>Ff"
        .4byte "@28@doDirectDraw__26ObjectMgr<Q24Game7MapRoom>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__26ObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "doEntry__26ObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "doSetView__26ObjectMgr<Q24Game7MapRoom>Fi"
        .4byte "doViewCalc__26ObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "doSimulation__26ObjectMgr<Q24Game7MapRoom>Ff"
        .4byte "doDirectDraw__26ObjectMgr<Q24Game7MapRoom>FR8Graphics"
    .global "__vt__30MonoObjectMgr<Q24Game7MapRoom>"
    "__vt__30MonoObjectMgr<Q24Game7MapRoom>":
        .4byte 0
        .4byte 0
        .4byte "__dt__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q24Game7MapRoom>FPv"
        .4byte "getNext__30MonoObjectMgr<Q24Game7MapRoom>FPv"
        .4byte "getStart__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "getEnd__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "get__30MonoObjectMgr<Q24Game7MapRoom>FPv"
        .4byte "getAt__30MonoObjectMgr<Q24Game7MapRoom>Fi"
        .4byte "getTo__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "@28@doEntry__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "@28@doSetView__30MonoObjectMgr<Q24Game7MapRoom>Fi"
        .4byte "@28@doViewCalc__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "@28@doSimulation__30MonoObjectMgr<Q24Game7MapRoom>Ff"
        .4byte "@28@doDirectDraw__30MonoObjectMgr<Q24Game7MapRoom>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "doEntry__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "doSetView__30MonoObjectMgr<Q24Game7MapRoom>Fi"
        .4byte "doViewCalc__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "doSimulation__30MonoObjectMgr<Q24Game7MapRoom>Ff"
        .4byte "doDirectDraw__30MonoObjectMgr<Q24Game7MapRoom>FR8Graphics"
        .4byte "birth__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "resetMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "clearMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv"
        .4byte "onAlloc__30MonoObjectMgr<Q24Game7MapRoom>Fv"
    .global __vt__Q24Game7MapRoom
    __vt__Q24Game7MapRoom:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game7MapRoomFv
        .4byte checkCollision__Q24Game10CellObjectFPQ24Game10CellObject
        .4byte getBoundingSphere__Q24Game7MapRoomFRQ23Sys6Sphere
        .4byte collisionUpdatable__Q24Game7MapRoomFv
        .4byte isPiki__Q24Game10CellObjectFv
        .4byte isNavi__Q24Game10CellObjectFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte getTypeName__Q24Game7MapRoomFv
        .4byte getObjType__Q24Game7MapRoomFv
        .4byte constructor__Q24Game7MapRoomFv
        .4byte doAnimation__Q24Game7MapRoomFv
        .4byte doEntry__Q24Game7MapRoomFv
        .4byte doSetView__Q24Game7MapRoomFi
        .4byte doViewCalc__Q24Game7MapRoomFv
        .4byte doSimulation__Q24Game7MapRoomFf
        .4byte doDirectDraw__Q24Game7MapRoomFR8Graphics
    .global __vt__Q24Game15ItemGateInitArg
    __vt__Q24Game15ItemGateInitArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q24Game15ItemGateInitArgFv
    .global __vt__Q34Game15ItemBigFountain7InitArg
    __vt__Q34Game15ItemBigFountain7InitArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q34Game15ItemBigFountain7InitArgFv
    .global __vt__Q34Game8ItemHole7InitArg
    __vt__Q34Game8ItemHole7InitArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q34Game8ItemHole7InitArgFv
    .global "__vt__25Iterator<Q24Game7MapUnit>"
    "__vt__25Iterator<Q24Game7MapUnit>":
        .4byte 0
        .4byte 0
        .4byte "first__25Iterator<Q24Game7MapUnit>Fv"
        .4byte "next__25Iterator<Q24Game7MapUnit>Fv"
        .4byte "isDone__25Iterator<Q24Game7MapUnit>Fv"
        .4byte "__ml__25Iterator<Q24Game7MapUnit>Fv"
    .global __vt__Q24Game10MapUnitMgr
    __vt__Q24Game10MapUnitMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game10MapUnitMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q24Game7MapUnit>FPv"
        .4byte "getNext__30NodeObjectMgr<Q24Game7MapUnit>FPv"
        .4byte "getStart__30NodeObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "getEnd__30NodeObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "get__30NodeObjectMgr<Q24Game7MapUnit>FPv"
        .4byte getAt__Q24Game10MapUnitMgrFi
        .4byte "getTo__26Container<Q24Game7MapUnit>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "@28@doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "@28@doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"
        .4byte "@28@doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "@28@doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"
        .4byte "@28@doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"
        .4byte "doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"
        .4byte "doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"
        .4byte "resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv"
    .global "__vt__28TObjectNode<Q24Game7MapUnit>"
    "__vt__28TObjectNode<Q24Game7MapUnit>":
        .4byte 0
        .4byte 0
        .4byte "__dt__28TObjectNode<Q24Game7MapUnit>Fv"
        .4byte getChildCount__5CNodeFv
    .global "__vt__30NodeObjectMgr<Q24Game7MapUnit>"
    "__vt__30NodeObjectMgr<Q24Game7MapUnit>":
        .4byte 0
        .4byte 0
        .4byte "__dt__30NodeObjectMgr<Q24Game7MapUnit>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q24Game7MapUnit>FPv"
        .4byte "getNext__30NodeObjectMgr<Q24Game7MapUnit>FPv"
        .4byte "getStart__30NodeObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "getEnd__30NodeObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "get__30NodeObjectMgr<Q24Game7MapUnit>FPv"
        .4byte "getAt__26Container<Q24Game7MapUnit>Fi"
        .4byte "getTo__26Container<Q24Game7MapUnit>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "@28@doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "@28@doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"
        .4byte "@28@doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "@28@doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"
        .4byte "@28@doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"
        .4byte "doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"
        .4byte "doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"
        .4byte "resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv"
    .global "__vt__26ObjectMgr<Q24Game7MapUnit>"
    "__vt__26ObjectMgr<Q24Game7MapUnit>":
        .4byte 0
        .4byte 0
        .4byte "__dt__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q24Game7MapUnit>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__26Container<Q24Game7MapUnit>Fi"
        .4byte "getTo__26Container<Q24Game7MapUnit>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "@28@doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "@28@doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"
        .4byte "@28@doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "@28@doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"
        .4byte "@28@doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"
        .4byte "doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"
        .4byte "doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"
        .4byte "doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"
    .global "__vt__26Container<Q24Game7MapUnit>"
    "__vt__26Container<Q24Game7MapUnit>":
        .4byte 0
        .4byte 0
        .4byte "__dt__26Container<Q24Game7MapUnit>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q24Game7MapUnit>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__26Container<Q24Game7MapUnit>Fi"
        .4byte "getTo__26Container<Q24Game7MapUnit>Fv"
    .global __vt__Q24Game7MapUnit
    __vt__Q24Game7MapUnit:
        .4byte 0
        .4byte 0
        .4byte constructor__Q24Game7MapUnitFv
        .4byte doAnimation__Q24Game7MapUnitFv
        .4byte doEntry__Q24Game7MapUnitFv
        .4byte doSetView__Q24Game7MapUnitFi
        .4byte doViewCalc__Q24Game7MapUnitFv
        .4byte doSimulation__Q24Game7MapUnitFf
        .4byte doDirectDraw__Q24Game7MapUnitFR8Graphics
    .global __vt__Q24Game8DoorLink
    __vt__Q24Game8DoorLink:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game8DoorLinkFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515A78
    lbl_80515A78:
        .skip 0x4
    .global lbl_80515A7C
    lbl_80515A7C:
        .skip 0x4
    .global numRoomCulled__Q24Game10RoomMapMgr
    numRoomCulled__Q24Game10RoomMapMgr:
        .skip 0x4
    .global mUseCylinderViewCulling__Q24Game10RoomMapMgr
    mUseCylinderViewCulling__Q24Game10RoomMapMgr:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519440
    lbl_80519440:
        .4byte 0x00000000
    .global lbl_80519444
    lbl_80519444:
        .4byte 0x47000000
    .global lbl_80519448
    lbl_80519448:
        .4byte 0xC7000000
    .global lbl_8051944C
    lbl_8051944C:
        .4byte 0x432A0000
    .global lbl_80519450
    lbl_80519450:
        .4byte 0x47FA0000
    .global lbl_80519454
    lbl_80519454:
        .4byte 0xC7FA0000
    .global lbl_80519458
    lbl_80519458:
        .float 1.0
    .global lbl_8051945C
    lbl_8051945C:
        .float 0.5
    .global lbl_80519460
    lbl_80519460:
        .4byte 0x41F00000
    .global lbl_80519464
    lbl_80519464:
        .4byte 0x43A00000
    .global lbl_80519468
    lbl_80519468:
        .4byte 0xC2B40000
        .4byte 0x00000000
    .global lbl_80519470
    lbl_80519470:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519478
    lbl_80519478:
        .4byte 0x41200000
    .global lbl_8051947C
    lbl_8051947C:
        .4byte 0x3C800000
    .global lbl_80519480
    lbl_80519480:
        .4byte 0x3F19999A
    .global lbl_80519484
    lbl_80519484:
        .4byte 0x4B435000
    .global lbl_80519488
    lbl_80519488:
        .4byte 0x48A02800
    .global lbl_8051948C
    lbl_8051948C:
        .4byte 0x40490FDB
    .global lbl_80519490
    lbl_80519490:
        .4byte 0x3BB60B61
    .global lbl_80519494
    lbl_80519494:
        .4byte 0x42C80000
    .global lbl_80519498
    lbl_80519498:
        .4byte 0x454E542D
        .4byte 0x4D415000
    .global lbl_805194A0
    lbl_805194A0:
        .4byte 0x726F6F6D
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	801B6468
 * Size:	000024
 */
Door* MapUnitInterface::getDoor(int idx)
{
	return (Door*)m_door.getChildAt(idx);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x118
	  stw       r0, 0x14(r1)
	  bl        0x25B224
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B648C
 * Size:	00001C
 */
void MapUnitInterface::getCellSize(int&, int&)
{
	/*
	lwz      r6, 0x18(r3)
	lhz      r0, 0x94(r6)
	stw      r0, 0(r4)
	lwz      r3, 0x18(r3)
	lhz      r0, 0x96(r3)
	stw      r0, 0(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B64A8
 * Size:	000024
 */
DoorLink* Door::getLink(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x20
	stw      r0, 0x14(r1)
	bl       getChildAt__5CNodeFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void DoorLink::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void DoorLink::read(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void Door::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B64CC
 * Size:	000104
 */
void Door::read(Stream& stream)
{
	m_index     = stream.readInt();
	m_dir       = stream.readInt();
	m_offs      = stream.readInt();
	m_wpIndex   = stream.readInt();
	m_linkCount = stream.readInt();
	for (int i = 0; i < m_linkCount; i++) {
		// inlined constructor
		DoorLink* link = new Game::DoorLink();
		link->m_dist   = stream.readFloat();
		link->m_doorID = stream.readInt();
		int v0         = stream.readInt();

		// TODO: WTF does this evaluate to?
		// neg       r0, r3 <-- -stream.readInt()
		// mr        r4, r31
		// or        r0, r0, r3 <-- (r0 | r3) aka (-v0 | v0)
		// addi      r3, r28, 0x20 # ' '
		// srwi      r0, r0, 31 <-- conversion to byte
		// stb       r0, 0x20(r31)
		link->m_tekiFlag = (-v0 | v0); // < 0?
		// _20 = CNode
		m_rootLink.add(link);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  bl        0x25E59C
	  stw       r3, 0x18(r28)
	  mr        r3, r29
	  bl        0x25E590
	  stw       r3, 0x44(r28)
	  mr        r3, r29
	  bl        0x25E584
	  stw       r3, 0x48(r28)
	  mr        r3, r29
	  bl        0x25E578
	  stw       r3, 0x4C(r28)
	  mr        r3, r29
	  bl        0x25E56C
	  stw       r3, 0x1C(r28)
	  li        r30, 0
	  b         .loc_0xD8

	.loc_0x68:
	  li        r3, 0x24
	  bl        -0x192694
	  mr.       r31, r3
	  beq-      .loc_0x98
	  bl        0x25AE4C
	  lis       r3, 0x804B
	  lfs       f0, -0x4F20(r2)
	  addi      r3, r3, 0x60D4
	  li        r0, 0x1
	  stw       r3, 0x0(r31)
	  stfs      f0, 0x18(r31)
	  stb       r0, 0x20(r31)

	.loc_0x98:
	  mr        r3, r29
	  bl        0x25E844
	  stfs      f1, 0x18(r31)
	  mr        r3, r29
	  bl        0x25E51C
	  stw       r3, 0x1C(r31)
	  mr        r3, r29
	  bl        0x25E510
	  neg       r0, r3
	  mr        r4, r31
	  or        r0, r0, r3
	  addi      r3, r28, 0x20
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x20(r31)
	  bl        0x25AE6C
	  addi      r30, r30, 0x1

	.loc_0xD8:
	  lwz       r0, 0x1C(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x68
	  lwz       r0, 0x24(r1)
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
 * Address:	801B65D0
 * Size:	0000AC
 */
MapUnit::MapUnit(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__Q24Game7MapUnit@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q24Game7MapUnit@l
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r31, r30, 0x10
	stw      r0, 0(r3)
	mr       r3, r31
	bl       __ct__5CNodeFv
	lis      r4, __vt__12MapCollision@ha
	addi     r3, r30, 0x34
	addi     r0, r4, __vt__12MapCollision@l
	stw      r0, 0(r31)
	bl       __ct__Q24Game6SeaMgrFv
	lfs      f1, lbl_80519444@sda21(r2)
	addi     r3, r30, 0xac
	lfs      f0, lbl_80519448@sda21(r2)
	stfs     f1, 0x7c(r30)
	stfs     f1, 0x80(r30)
	stfs     f1, 0x84(r30)
	stfs     f0, 0x88(r30)
	stfs     f0, 0x8c(r30)
	stfs     f0, 0x90(r30)
	bl       __ct__Q24Game14EditorRouteMgrFv
	li       r4, 0
	li       r0, -1
	stw      r4, 0xc(r30)
	mr       r3, r30
	sth      r0, 4(r30)
	stb      r4, 0xa8(r30)
	sth      r4, 0x96(r30)
	sth      r4, 0x94(r30)
	stw      r4, 0x2c(r30)
	stw      r4, 0x30(r30)
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
 * Size:	0000CC
 */
void MapUnit::setupSizeInfo(void)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	801B667C
 * Size:	000030
 */
void MapCollision::getBoundBox(BoundBox&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
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
 * Address:	........
 * Size:	000080
 */
void MapUnit::save(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B66AC
 * Size:	00004C
 */
void MapUnit::load(Stream& stream)
{
	m_cellSize.x = stream.readShort();
	m_cellSize.y = stream.readShort();
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x25E098
	  sth       r3, 0x94(r30)
	  mr        r3, r31
	  bl        0x25E08C
	  sth       r3, 0x96(r30)
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
 * Address:	........
 * Size:	0000B8
 */
MapUnitMgr::MapUnitMgr(void)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	801B66F8
 * Size:	0000C8
 */
NodeObjectMgr<Game::MapUnit>::~NodeObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801B67A4
	lis      r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@ha
	addic.   r0, r30, 0x20
	addi     r3, r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_801B674C
	lis      r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
	addi     r3, r30, 0x20
	addi     r0, r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
	li       r4, 0
	stw      r0, 0x20(r30)
	bl       __dt__5CNodeFv

lbl_801B674C:
	cmplwi   r30, 0
	beq      lbl_801B6794
	lis      r3, "__vt__26ObjectMgr<Q24Game7MapUnit>"@ha
	addi     r3, r3, "__vt__26ObjectMgr<Q24Game7MapUnit>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_801B6794
	lis      r3, "__vt__26Container<Q24Game7MapUnit>"@ha
	addi     r0, r3, "__vt__26Container<Q24Game7MapUnit>"@l
	stw      r0, 0(r30)
	beq      lbl_801B6794
	lis      r4, __vt__16GenericContainer@ha
	mr       r3, r30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801B6794:
	extsh.   r0, r31
	ble      lbl_801B67A4
	mr       r3, r30
	bl       __dl__FPv

lbl_801B67A4:
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
 * Address:	801B67C0
 * Size:	000060
 */
TObjectNode<Game::MapUnit>::~TObjectNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801B6804
	lis      r5, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
	li       r4, 0
	addi     r0, r5, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801B6804
	mr       r3, r30
	bl       __dl__FPv

lbl_801B6804:
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
 * Address:	801B6820
 * Size:	000088
 */
void ObjectMgr<Game::MapUnit>::~ObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801B688C
	lis      r4, "__vt__26ObjectMgr<Q24Game7MapUnit>"@ha
	addi     r4, r4, "__vt__26ObjectMgr<Q24Game7MapUnit>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_801B687C
	lis      r4, "__vt__26Container<Q24Game7MapUnit>"@ha
	addi     r0, r4, "__vt__26Container<Q24Game7MapUnit>"@l
	stw      r0, 0(r30)
	beq      lbl_801B687C
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801B687C:
	extsh.   r0, r31
	ble      lbl_801B688C
	mr       r3, r30
	bl       __dl__FPv

lbl_801B688C:
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
 * Address:	801B68A8
 * Size:	000070
 */
Container<Game::MapUnit>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801B68FC
	lis      r4, "__vt__26Container<Q24Game7MapUnit>"@ha
	addi     r0, r4, "__vt__26Container<Q24Game7MapUnit>"@l
	stw      r0, 0(r30)
	beq      lbl_801B68EC
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801B68EC:
	extsh.   r0, r31
	ble      lbl_801B68FC
	mr       r3, r30
	bl       __dl__FPv

lbl_801B68FC:
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
 * Address:	801B6918
 * Size:	000088
 */
void MapUnitMgr::getAt(int)
{
	/*
	cmpwi    r4, 0
	lwz      r5, 0x30(r3)
	li       r6, 0
	ble      lbl_801B6988
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_801B6970
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_801B6970

lbl_801B6948:
	lwz      r3, 4(r5)
	addi     r6, r6, 8
	lwz      r3, 4(r3)
	lwz      r3, 4(r3)
	lwz      r3, 4(r3)
	lwz      r3, 4(r3)
	lwz      r3, 4(r3)
	lwz      r3, 4(r3)
	lwz      r5, 4(r3)
	bdnz     lbl_801B6948

lbl_801B6970:
	subf     r0, r6, r4
	mtctr    r0
	cmpw     r6, r4
	bge      lbl_801B6988

lbl_801B6980:
	lwz      r5, 4(r5)
	bdnz     lbl_801B6980

lbl_801B6988:
	cmplwi   r5, 0
	beq      lbl_801B6998
	lwz      r3, 0x18(r5)
	blr

lbl_801B6998:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00020C
 */
void MapUnitMgr::findMapUnit(char*)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	801B69A0
 * Size:	00004C
 */
bool Iterator<Game::MapUnit>::isDone()
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
 * Address:	........
 * Size:	000038
 */
void MapUnitMgr::testConstruct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void MapUnitMgr::loadShape(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B69EC
 * Size:	000440
 */
void MapUnitMgr::makeUnit(Game::MapUnit* unit, char* path) { char path[512]; } // Game

sprintf(path, "%s/arc.szs", path);
JKRArchive* archive = JKRArchive::mount(path, 1, nullptr, 1);
P2ASSERTLINE(651, archive);

void* viewModelData = archive.getResource("view.bmd");
P2ASSERT(657, viewModelData);

// unit->_0C = J3DModelData*
unit->_0C = J3DModelLoaderDataBase::load(viewModelData,
                                         0x20000000); // 0x20000000 is some flag
unit->_0C->newSharedDisplayList(0x40000);
unit->makeSharedDL();

namespace SysShape {

void* textureData = archive.getResource("texture.bti");
if (textureData) {
	unit->_30 = textureData;
	unit->_2C = 0;
}
Model::enableMaterialAnim(unit->_0C, 0);

int foundFiles = 0;
unit->_E8      = 0;
for (int i = 0; 0 < 100; i++) {
	sprintf(path, "%s_%d.btk", path, i + 1);

	int pathLen   = strlen(path);
	char* strIter = &path[pathLen];
	if (pathLen) {
		// Backtrack to the last instance of /
		while (*strIter != '/') {
			strIter--;
			pathLen--;
			if (!pathLen) {
				// Once we've reached the start of the string, check if
				// there was a file available
				if (!archive.getResource(strIter)) {
					break;
				}

				foundFiles++;
			}
		}
	}

	if (!archive.getResource(strIter)) {
		break;
	}

	foundFiles++;
}

if (foundFiles) {
	unit->_E8 = foundFiles;
	unit->_EC = new Sys::MatTexAnimation[foundFiles];
	// TODO: Finish first draft of function
}
/*
.loc_0x0:
  stwu      r1, -0x12B0(r1)
  mflr      r0
  lis       r3, 0x8048
  stw       r0, 0x12B4(r1)
  stmw      r25, 0x1294(r1)
  subi      r30, r3, 0x390
  mr        r31, r4
  mr        r27, r5
  addi      r3, r1, 0x8
  addi      r4, r30, 0xBC
  crclr     6, 0x6
  bl        -0xEF5E0
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x19B8FC
  mr.       r29, r3
  bne-      .loc_0x60
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0x28B
  crclr     6, 0x6
  bl        -0x18C408

.loc_0x60:
  mr        r3, r29
  addi      r4, r30, 0xD4
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl
  mr.       r26, r3
  bne-      .loc_0x94
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0x291
  crclr     6, 0x6
  bl        -0x18C43C

.loc_0x94:
  mr        r3, r26
  lis       r4, 0x2000
  bl        -0x1471F4
  stw       r3, 0xC(r31)
  lis       r4, 0x4
  lwz       r3, 0xC(r31)
  bl        -0x1331C0
  lwz       r3, 0xC(r31)
  bl        -0x133070
  mr        r3, r29
  addi      r4, r30, 0xE0
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl
  cmplwi    r3, 0
  beq-      .loc_0xE4
  stw       r3, 0x30(r31)
  li        r0, 0
  stw       r0, 0x2C(r31)

.loc_0xE4:
  lwz       r3, 0xC(r31)
  li        r4, 0
  bl        0x2877C4
  li        r0, 0
  li        r28, 0
  stw       r0, 0xE8(r31)
  li        r26, 0

.loc_0x100:
  mr        r5, r27
  addi      r3, r1, 0x8
  addi      r4, r30, 0xEC
  addi      r6, r26, 0x1
  crclr     6, 0x6
  bl        -0xEF6C8
  addi      r3, r1, 0x8
  bl        -0xEC1F8
  addi      r4, r1, 0x8
  add       r4, r4, r3
  mtctr     r3
  cmpwi     r3, 0
  ble-      .loc_0x154

.loc_0x134:
  lbz       r0, 0x0(r4)
  cmpwi     r0, 0x2F
  bne-      .loc_0x148
  addi      r4, r4, 0x1
  b         .loc_0x154

.loc_0x148:
  subi      r4, r4, 0x1
  subi      r3, r3, 0x1
  bdnz+     .loc_0x134

.loc_0x154:
  lwz       r12, 0x0(r29)
  mr        r3, r29
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl
  cmplwi    r3, 0
  beq-      .loc_0x180
  addi      r26, r26, 0x1
  addi      r28, r28, 0x1
  cmpwi     r26, 0x64
  blt+      .loc_0x100

.loc_0x180:
  cmpwi     r28, 0
  ble-      .loc_0x24C
  rlwinm    r3,r28,4,0,27
  stw       r28, 0xE8(r31)
  addi      r3, r3, 0x10
  bl        -0x192BD4
  lis       r4, 0x8043
  mr        r7, r28
  addi      r4, r4, 0x4134
  li        r5, 0
  li        r6, 0x10
  bl        -0xF51A8
  stw       r3, 0xEC(r31)
  li        r25, 0
  li        r26, 0
  b         .loc_0x244

.loc_0x1C0:
  mr        r5, r27
  addi      r3, r1, 0x8
  addi      r4, r30, 0xEC
  addi      r6, r25, 0x1
  crclr     6, 0x6
  bl        -0xEF788
  addi      r3, r1, 0x8
  bl        -0xEC2B8
  addi      r4, r1, 0x8
  add       r4, r4, r3
  mtctr     r3
  cmpwi     r3, 0
  ble-      .loc_0x214

.loc_0x1F4:
  lbz       r0, 0x0(r4)
  cmpwi     r0, 0x2F
  bne-      .loc_0x208
  addi      r4, r4, 0x1
  b         .loc_0x214

.loc_0x208:
  subi      r4, r4, 0x1
  subi      r3, r3, 0x1
  bdnz+     .loc_0x1F4

.loc_0x214:
  lwz       r12, 0x0(r29)
  mr        r3, r29
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl
  lwz       r0, 0xEC(r31)
  mr        r4, r3
  lwz       r5, 0xC(r31)
  add       r3, r0, r26
  bl        0x27D3FC
  addi      r26, r26, 0x10
  addi      r25, r25, 0x1

.loc_0x244:
  cmpw      r25, r28
  blt+      .loc_0x1C0

.loc_0x24C:
  mr        r5, r27
  addi      r3, r1, 0x8
  addi      r4, r30, 0xF8
  crclr     6, 0x6
  bl        -0xEF810
  lwz       r5, -0x77D4(r13)
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r6, 0x2
  bl        -0x19BB2C
  mr.       r29, r3
  bne-      .loc_0x290
  addi      r3, r30, 0x84
  addi      r5, r30, 0xC8
  li        r4, 0x309
  crclr     6, 0x6
  bl        -0x18C638

.loc_0x290:
  mr        r3, r29
  addi      r4, r30, 0x108
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl
  mr.       r25, r3
  beq-      .loc_0x2F8
  mr        r4, r25
  addi      r3, r1, 0xE68
  li        r5, -0x1
  bl        0x25EC50
  addi      r3, r31, 0x10
  addi      r4, r1, 0xE68
  bl        0x2633AC
  mr        r3, r25
  bl        -0x192BE4
  addi      r3, r31, 0x10
  addi      r4, r31, 0x7C
  lwz       r12, 0x10(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl
  li        r0, 0x1
  stb       r0, 0xA8(r31)
  b         .loc_0x300

.loc_0x2F8:
  li        r0, 0
  stb       r0, 0xA8(r31)

.loc_0x300:
  mr        r3, r29
  addi      r4, r30, 0x114
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl
  mr.       r25, r3
  beq-      .loc_0x364
  li        r3, 0x28
  bl        -0x192E6C
  mr.       r27, r3
  beq-      .loc_0x338
  bl        0x265760
  mr        r27, r3

.loc_0x338:
  mr        r4, r25
  addi      r3, r1, 0xA48
  li        r5, -0x1
  bl        0x25EBC8
  mr        r3, r27
  addi      r4, r1, 0xA48
  bl        0x265A24
  lwz       r4, 0x28(r31)
  mr        r3, r27
  lwz       r4, 0x1C(r4)
  bl        0x265B30

.loc_0x364:
  mr        r3, r29
  addi      r4, r30, 0x120
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl
  cmplwi    r3, 0
  beq-      .loc_0x3B8
  mr        r4, r3
  addi      r3, r1, 0x628
  li        r5, -0x1
  bl        0x25EB7C
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x634(r1)
  bne-      .loc_0x3AC
  li        r0, 0
  stw       r0, 0xA3C(r1)

.loc_0x3AC:
  addi      r3, r31, 0x34
  addi      r4, r1, 0x628
  bl        -0x7104

.loc_0x3B8:
  mr        r3, r29
  addi      r4, r30, 0x130
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl
  cmplwi    r3, 0
  beq-      .loc_0x418
  mr        r4, r3
  addi      r3, r1, 0x208
  li        r5, -0x1
  bl        0x25EB28
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x214(r1)
  bne-      .loc_0x400
  li        r0, 0
  stw       r0, 0x61C(r1)

.loc_0x400:
  addi      r3, r31, 0xAC
  addi      r4, r1, 0x208
  lwz       r12, 0xAC(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl

.loc_0x418:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl
  lmw       r25, 0x1294(r1)
  lwz       r0, 0x12B4(r1)
  mtlr      r0
  addi      r1, r1, 0x12B0
  blr
*/
} // namespace SysShape

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void MapUnitMgr::load(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B6E2C
 * Size:	0000DC
 */
MapRoom::MapRoom(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__Q24Game15TPositionObject@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q24Game15TPositionObject@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	addi     r3, r31, 4
	bl       __ct__Q210SweepPrune6ObjectFv
	lis      r3, __vt__Q24Game10CellObject@ha
	lis      r4, __ct__Q24Game7CellLegFv@ha
	addi     r0, r3, __vt__Q24Game10CellObject@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r3, r31, 0x54
	addi     r4, r4, __ct__Q24Game7CellLegFv@l
	li       r6, 0x14
	li       r7, 4
	bl       __construct_array
	addi     r3, r31, 0xa8
	bl       __ct__Q24Game15CollisionBufferFv
	li       r0, 1
	lis      r3, __vt__Q24Game7MapRoom@ha
	stb      r0, 0x64(r31)
	li       r4, 0
	addi     r0, r3, __vt__Q24Game7MapRoom@l
	addi     r3, r31, 0xd8
	stb      r4, 0x78(r31)
	stb      r4, 0x8c(r31)
	stb      r4, 0xa0(r31)
	stw      r31, 0x60(r31)
	stw      r31, 0x74(r31)
	stw      r31, 0x88(r31)
	stw      r31, 0x9c(r31)
	stw      r4, 0xa4(r31)
	stw      r0, 0(r31)
	stb      r4, 0x188(r31)
	stb      r4, 0x189(r31)
	stw      r4, 0x13c(r31)
	stw      r4, 0x138(r31)
	bl       PSMTXIdentity
	li       r3, -1
	li       r0, 0
	sth      r3, 0x184(r31)
	mr       r3, r31
	stw      r0, 0x180(r31)
	stw      r0, 0x18c(r31)
	stb      r0, 0xbc(r31)
	stw      r0, 0xc0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void MapRoom::countItems(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000170
 */
void MapRoom::countEnemys(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B6F08
 * Size:	000008
 */
u32 ObjectLayoutNode::getExtraCode(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801B6F10
 * Size:	0007B8
 */
void MapRoom::placeObjects(Game::Cave::FloorInfo*, bool)
{
	/*
	stwu     r1, -0x190(r1)
	mflr     r0
	stw      r0, 0x194(r1)
	stmw     r16, 0x150(r1)
	mr       r27, r3
	mr       r29, r4
	lwz      r0, 0xc4(r3)
	cmplwi   r0, 0
	beq      lbl_801B76B4
	addi     r25, r1, 0x88
	addi     r17, r1, 0x7c
	addi     r18, r1, 0x70
	addi     r19, r1, 0x64
	addi     r20, r1, 0x58
	addi     r26, r1, 0x4c
	addi     r21, r1, 0x40
	li       r28, 0
	li       r23, 0

lbl_801B6F58:
	li       r16, 0
	b        lbl_801B7684

lbl_801B6F60:
	lwz      r3, 0xc4(r27)
	mr       r4, r28
	mr       r5, r16
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r30, 0
	mr       r31, r3
	b        lbl_801B7664

lbl_801B6F88:
	cmplwi   r28, 7
	bgt      lbl_801B7660
	lis      r3, lbl_804B5C2C@ha
	addi     r3, r3, lbl_804B5C2C@l
	lwzx     r0, r3, r23
	mtctr    r0
	bctr
	.global  lbl_801B6FA4

lbl_801B6FA4:
	lwz      r3, mgr__Q24Game8ItemHole@sda21(r13)
	bl       birth__Q24Game12TNodeItemMgrFv
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r24, r0
	mr       r5, r25
	addi     r4, r1, 0x80
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	li       r4, 0
	lfs      f5, lbl_80519440@sda21(r2)
	li       r0, 1
	lfs      f4, lbl_80519450@sda21(r2)
	cmplwi   r3, 0
	lfs      f3, lbl_80519454@sda21(r2)
	lfs      f2, lbl_80519458@sda21(r2)
	lfs      f1, 0x80(r1)
	lfs      f0, 0(r25)
	stfs     f5, 0x84(r1)
	stw      r4, 0x12c(r1)
	stfs     f4, 0x130(r1)
	stfs     f3, 0x134(r1)
	stw      r4, 0x128(r1)
	stfs     f5, 0x138(r1)
	stfs     f2, 0x13c(r1)
	stfs     f5, 0x140(r1)
	stb      r0, 0x124(r1)
	stb      r4, 0x125(r1)
	stfs     f1, 0x118(r1)
	stfs     f5, 0x11c(r1)
	stfs     f0, 0x120(r1)
	beq      lbl_801B704C
	stb      r4, 0x124(r1)
	addi     r4, r1, 0x118
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x134(r1)

lbl_801B704C:
	stfs     f5, 0x84(r1)
	li       r3, 0
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_801B706C
	cmpwi    r0, 3
	bne      lbl_801B7070

lbl_801B706C:
	li       r3, 1

lbl_801B7070:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B70A8
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	lis      r3, __vt__Q34Game8ItemHole7InitArg@ha
	addi     r4, r4, __vt__Q24Game15CreatureInitArg@l
	li       r0, 2
	stw      r4, 0x18(r1)
	addi     r5, r3, __vt__Q34Game8ItemHole7InitArg@l
	mr       r3, r24
	addi     r4, r1, 0x18
	stw      r5, 0x18(r1)
	stw      r0, 0x1c(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	b        lbl_801B70B4

lbl_801B70A8:
	mr       r3, r24
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg

lbl_801B70B4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x1e8(r24)
	mr       r3, r24
	addi     r4, r1, 0x80
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r29
	bl       useKaidanBarrel__Q34Game4Cave9FloorInfoFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7660
	lwz      r3, mgr__Q24Game10ItemBarrel@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	mr       r22, r3
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r22
	addi     r4, r1, 0x80
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	b        lbl_801B7660
	.global  lbl_801B7120

lbl_801B7120:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	beq      lbl_801B7660
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r4, 1
	li       r5, 0
	bl       birth__Q34Game9ItemOnyon3MgrFii
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r22, r0
	mr       r5, r17
	addi     r4, r1, 0x74
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80519440@sda21(r2)
	mr       r3, r22
	li       r4, 0
	stfs     f0, 0x78(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x228(r22)
	mr       r3, r22
	addi     r4, r1, 0x74
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	b        lbl_801B7660
	.global  lbl_801B71A4

lbl_801B71A4:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r4, 0
	li       r5, 0
	bl       birth__Q34Game9ItemOnyon3MgrFii
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r22, r0
	mr       r5, r18
	addi     r4, r1, 0x68
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80519440@sda21(r2)
	mr       r3, r22
	li       r4, 0
	stfs     f0, 0x6c(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x228(r22)
	mr       r3, r22
	addi     r4, r1, 0x68
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	b        lbl_801B7660
	.global  lbl_801B7218

lbl_801B7218:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r4, 0
	li       r5, 1
	bl       birth__Q34Game9ItemOnyon3MgrFii
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r22, r0
	mr       r5, r19
	addi     r4, r1, 0x5c
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80519440@sda21(r2)
	mr       r3, r22
	li       r4, 0
	stfs     f0, 0x60(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x228(r22)
	mr       r3, r22
	addi     r4, r1, 0x5c
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	b        lbl_801B7660
	.global  lbl_801B728C

lbl_801B728C:
	lwz      r3, mgr__Q24Game15ItemBigFountain@sda21(r13)
	bl       birth__Q34Game15ItemBigFountain3MgrFv
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r22, r0
	mr       r5, r20
	addi     r4, r1, 0x50
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80519440@sda21(r2)
	li       r3, 0
	lwz      r4, gameSystem__4Game@sda21(r13)
	stfs     f0, 0x54(r1)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_801B72DC
	cmpwi    r0, 3
	bne      lbl_801B72E0

lbl_801B72DC:
	li       r3, 1

lbl_801B72E0:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7318
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	lis      r3, __vt__Q34Game15ItemBigFountain7InitArg@ha
	addi     r4, r4, __vt__Q24Game15CreatureInitArg@l
	li       r0, 3
	stw      r4, 0x10(r1)
	addi     r5, r3, __vt__Q34Game15ItemBigFountain7InitArg@l
	mr       r3, r22
	addi     r4, r1, 0x10
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	b        lbl_801B7324

lbl_801B7318:
	mr       r3, r22
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg

lbl_801B7324:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x1ec(r22)
	mr       r3, r22
	addi     r4, r1, 0x50
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	b        lbl_801B7660
	.global  lbl_801B7350

lbl_801B7350:
	lfs      f0, lbl_80519440@sda21(r2)
	mr       r3, r31
	mr       r5, r26
	addi     r4, r1, 0x44
	stfs     f0, 0x48(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x44
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x48(r1)
	addi     r3, r1, 0xe4
	bl       __ct__Q24Game13EnemyBirthArgFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x44(r1)
	mr       r3, r31
	lfs      f2, 0x48(r1)
	lfs      f0, 0(r26)
	stfs     f1, 0xf0(r1)
	stfs     f3, 0xe4(r1)
	stfs     f2, 0xe8(r1)
	stfs     f0, 0xec(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	sth      r3, 0xfc(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stb      r3, 0xf4(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r22, 1
	lwz      r12, 0(r31)
	li       r24, 0
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x63
	bne      lbl_801B744C
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x6c(r3)
	cmplwi   r0, 0
	beq      lbl_801B7448
	li       r24, 1
	b        lbl_801B744C

lbl_801B7448:
	li       r22, 0

lbl_801B744C:
	clrlwi.  r0, r22, 0x18
	beq      lbl_801B7660
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	addi     r5, r1, 0xe4
	bl       birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
	or.      r22, r3, r3
	beq      lbl_801B7488
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg

lbl_801B7488:
	clrlwi.  r0, r24, 0x18
	beq      lbl_801B7660
	lfs      f1, 0x2c0(r29)
	mr       r3, r22
	bl       setTimer__Q34Game8BlackMan3ObjFf
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r22, 0x114(r3)
	b        lbl_801B7660
	.global  lbl_801B74A8

lbl_801B74A8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 0xbc
	bl       __ct__Q24Game18PelletIndexInitArgFi
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0xbc
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	or.      r24, r3, r3
	beq      lbl_801B7660
	mr       r3, r31
	mr       r5, r21
	lwz      r12, 0(r31)
	addi     r4, r1, 0x38
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801B7538
	lwz      r12, 4(r3)
	addi     r4, r1, 0x38
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x3c(r1)
	mr       r3, r24
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f2, lbl_8051945C@sda21(r2)
	lfs      f0, 0x3c(r1)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x3c(r1)
	b        lbl_801B7540

lbl_801B7538:
	lfs      f0, lbl_80519440@sda21(r2)
	stfs     f0, 0x3c(r1)

lbl_801B7540:
	mr       r3, r24
	addi     r4, r1, 0x38
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80519440@sda21(r2)
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r4, r3, "zero__10Vector3<f>"@l
	stfs     f1, 0x30(r1)
	addi     r3, r1, 0x8c
	addi     r5, r1, 0x2c
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x34(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r24
	addi     r4, r1, 0x8c
	bl       setOrientation__Q24Game6PelletFR7Matrixf
	mr       r3, r24
	bl       allocateTexCaster__Q24Game6PelletFv
	b        lbl_801B7660
	.global  lbl_801B75B4

lbl_801B75B4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, -1
	beq      lbl_801B7660
	lwz      r4, 0xd4(r27)
	slwi     r0, r3, 4
	lis      r3, atanTable___5JMath@ha
	add      r5, r4, r0
	lwz      r4, 0(r5)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x50(r4)
	lfs      f2, 0x54(r4)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	lfs      f1, 4(r5)
	lfs      f2, 0xc(r5)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	lis      r3, __vt__Q24Game15ItemGateInitArg@ha
	addi     r4, r4, __vt__Q24Game15CreatureInitArg@l
	stfs     f1, 0xc(r1)
	addi     r0, r3, __vt__Q24Game15ItemGateInitArg@l
	lwz      r3, itemGateMgr__4Game@sda21(r13)
	stw      r4, 8(r1)
	stw      r0, 8(r1)
	bl       birth__Q24Game11ItemGateMgrFv
	addi     r4, r1, 8
	mr       r22, r3
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r6, 0x18(r31)
	mr       r3, r22
	addi     r4, r1, 0x20
	li       r5, 0
	lwz      r6, 0(r6)
	lfs      f0, 0x1c(r6)
	stfs     f0, 0x204(r22)
	stfs     f0, 0x200(r22)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_801B7660:
	addi     r30, r30, 1

lbl_801B7664:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	blt      lbl_801B6F88
	addi     r16, r16, 1

lbl_801B7684:
	lwz      r3, 0xc4(r27)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r16, r3
	blt      lbl_801B6F60
	addi     r28, r28, 1
	addi     r23, r23, 4
	cmpwi    r28, 8
	blt      lbl_801B6F58

lbl_801B76B4:
	lmw      r16, 0x150(r1)
	lwz      r0, 0x194(r1)
	mtlr     r0
	addi     r1, r1, 0x190
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B76C8
 * Size:	000008
 */
s32 ObjectLayoutNode::getBirthDoorIndex(void) { return -0x1; }

/*
 * --INFO--
 * Address:	801B76D0
 * Size:	000008
 */
u32 ObjectLayoutNode::isFixedBattery(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801B76D8
 * Size:	000008
 */
void ObjectLayoutNode::getDirection(void)
{
	/*
	lfs      f1, lbl_80519440@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B76E0
 * Size:	000004
 */
void ObjectLayoutNode::getBirthPosition(float&, float&) { }

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void getCenterPosition__Q24Game7MapRoomFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
void MapRoom::create(Game::MapUnit*, Matrixf&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void MapRoom::createDoorInfo(Game::MapUnitInterface*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B76E4
 * Size:	000004
 */
RoomDoorInfo::RoomDoorInfo(void) { }

/*
 * --INFO--
 * Address:	801B76E8
 * Size:	0000D4
 */
void MapRoom::doAnimation(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lbz      r0, mUseCylinderViewCulling__Q24Game10RoomMapMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801B777C
	lwz      r3, sys@sda21(r13)
	li       r29, 0
	li       r28, 0
	lwz      r30, 0x24(r3)
	b        lbl_801B7758

lbl_801B771C:
	mr       r3, r30
	mr       r4, r28
	bl       getViewport__8GraphicsFi
	mr       r31, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7754
	lwz      r3, 0x44(r31)
	addi     r4, r27, 0x160
	bl       isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7754
	li       r29, 1
	b        lbl_801B7764

lbl_801B7754:
	addi     r28, r28, 1

lbl_801B7758:
	lwz      r0, 0x264(r30)
	cmpw     r28, r0
	blt      lbl_801B771C

lbl_801B7764:
	clrlwi.  r0, r29, 0x18
	bne      lbl_801B77A8
	lwz      r3, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)
	addi     r0, r3, 1
	stw      r0, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)
	b        lbl_801B77A8

lbl_801B777C:
	lwz      r3, 0x13c(r27)
	addi     r4, r27, 0x140
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B77A8
	lwz      r3, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)
	addi     r0, r3, 1
	stw      r0, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)

lbl_801B77A8:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B77BC
 * Size:	0001F4
 */
void MapRoom::doEntry(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r3
	lbz      r0, mUseCylinderViewCulling__Q24Game10RoomMapMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801B785C
	lwz      r3, sys@sda21(r13)
	li       r28, 0
	li       r27, 0
	lwz      r29, 0x24(r3)
	b        lbl_801B782C

lbl_801B77F0:
	mr       r3, r29
	mr       r4, r27
	bl       getViewport__8GraphicsFi
	mr       r30, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7828
	lwz      r3, 0x44(r30)
	addi     r4, r31, 0x160
	bl       isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7828
	li       r28, 1
	b        lbl_801B7838

lbl_801B7828:
	addi     r27, r27, 1

lbl_801B782C:
	lwz      r0, 0x264(r29)
	cmpw     r27, r0
	blt      lbl_801B77F0

lbl_801B7838:
	clrlwi.  r0, r28, 0x18
	beq      lbl_801B7978
	lwz      r3, 0x13c(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_801B7978

lbl_801B785C:
	lwz      r3, sys@sda21(r13)
	li       r27, 0
	li       r28, 0
	lwz      r29, 0x24(r3)
	b        lbl_801B78AC

lbl_801B7870:
	mr       r3, r29
	mr       r4, r28
	bl       getViewport__8GraphicsFi
	mr       r30, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B78A8
	lwz      r3, 0x44(r30)
	addi     r4, r31, 0x150
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B78A8
	li       r27, 1
	b        lbl_801B78B8

lbl_801B78A8:
	addi     r28, r28, 1

lbl_801B78AC:
	lwz      r0, 0x264(r29)
	cmpw     r28, r0
	blt      lbl_801B7870

lbl_801B78B8:
	clrlwi.  r0, r27, 0x18
	beq      lbl_801B7918
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B7900
	li       r27, 0
	li       r29, 0
	b        lbl_801B78F4

lbl_801B78DC:
	lwz      r0, 0xcc(r31)
	lfs      f1, lbl_80519460@sda21(r2)
	add      r3, r0, r29
	bl       animate__Q23Sys15MatBaseAnimatorFf
	addi     r29, r29, 0xc
	addi     r27, r27, 1

lbl_801B78F4:
	lwz      r0, 0xc8(r31)
	cmpw     r27, r0
	blt      lbl_801B78DC

lbl_801B7900:
	lwz      r3, 0x13c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801B7960

lbl_801B7918:
	lbz      r0, sEntryOptMapRoom__Q24Game12BaseHIOParms@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801B794C
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_801B7940
	cmpwi    r0, 3
	bne      lbl_801B7944

lbl_801B7940:
	li       r3, 1

lbl_801B7944:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B799C

lbl_801B794C:
	lwz      r3, 0x13c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_801B7960:
	lwz      r3, 0x13c(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_801B7978:
	lwz      r3, 0x13c(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x13c(r31)
	lwz      r3, 8(r3)
	bl       diff__8J3DModelFv

lbl_801B799C:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B79B0
 * Size:	000124
 */
void MapRoom::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	clrlwi   r4, r4, 0x10
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x13c(r3)
	bl       setCurrentViewNo__Q28SysShape5ModelFUl
	lwz      r3, sys@sda21(r13)
	li       r30, 0
	li       r4, 0
	lwz      r3, 0x24(r3)
	lwz      r0, 0x264(r3)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801B7A60

lbl_801B79FC:
	cmpw     r4, r31
	bne      lbl_801B7A58
	bl       getViewport__8GraphicsFi
	mr       r31, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7A60
	lbz      r0, mUseCylinderViewCulling__Q24Game10RoomMapMgr@sda21(r13)
	lwz      r3, 0x44(r31)
	cmplwi   r0, 0
	beq      lbl_801B7A40
	addi     r4, r29, 0x160
	bl       isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7A60
	li       r30, 1
	b        lbl_801B7A60

lbl_801B7A40:
	addi     r4, r29, 0x150
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7A60
	li       r30, 1
	b        lbl_801B7A60

lbl_801B7A58:
	addi     r4, r4, 1
	bdnz     lbl_801B79FC

lbl_801B7A60:
	lbz      r0, usePacketCulling__Q24Game8Creature@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801B7AA4
	clrlwi.  r0, r30, 0x18
	beq      lbl_801B7A8C
	lwz      r3, 0x13c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_801B7AB8

lbl_801B7A8C:
	lwz      r3, 0x13c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	b        lbl_801B7AB8

lbl_801B7AA4:
	lwz      r3, 0x13c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_801B7AB8:
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
 * Address:	801B7AD4
 * Size:	000024
 */
void MapRoom::doViewCalc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x13c(r3)
	bl       viewCalc__Q28SysShape5ModelFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B7AF8
 * Size:	000004
 */
void MapRoom::doSimulation(float) { }

/*
 * --INFO--
 * Address:	801B7AFC
 * Size:	000004
 */
void MapRoom::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801B7B00
 * Size:	0001E8
 */
RoomMapMgr::RoomMapMgr(Game::Cave::CaveInfo*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	extsh.   r0, r4
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	beq      lbl_801B7B40
	addi     r0, r29, 0x118
	lis      r3, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r29)
	addi     r0, r3, __vt__16GenericObjectMgr@l
	stw      r0, 0x118(r29)

lbl_801B7B40:
	mr       r3, r29
	li       r4, 0
	bl       __ct__Q24Game6MapMgrFv
	lis      r3, __vt__Q24Game10RoomMapMgr@ha
	addi     r0, r29, 0x118
	addi     r4, r3, __vt__Q24Game10RoomMapMgr@l
	addi     r3, r29, 0x24
	stw      r4, 4(r29)
	addi     r5, r4, 0x68
	lwz      r4, 0(r29)
	stw      r5, 0(r4)
	lwz      r4, 0(r29)
	subf     r0, r4, r0
	stw      r0, 4(r4)
	bl       __ct__Q24Game9CaveVRBoxFv
	addi     r3, r29, 0x40
	bl       __ct__Q23Sys8TriangleFv
	addi     r3, r29, 0xac
	bl       "__ct__30MonoObjectMgr<Q24Game7MapRoom>Fv"
	lfs      f1, lbl_80519444@sda21(r2)
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	lfs      f0, lbl_80519448@sda21(r2)
	stfs     f1, 0xdc(r29)
	addi     r3, r29, 0xfc
	li       r5, 0
	li       r6, 0xc
	stfs     f1, 0xe0(r29)
	li       r7, 2
	stfs     f1, 0xe4(r29)
	stfs     f0, 0xe8(r29)
	stfs     f0, 0xec(r29)
	stfs     f0, 0xf0(r29)
	bl       __construct_array
	lfs      f0, lbl_80519440@sda21(r2)
	li       r3, 0x3c
	stfs     f0, 0xfc(r29)
	stfs     f0, 0x100(r29)
	stfs     f0, 0x104(r29)
	stfs     f0, 0x108(r29)
	stfs     f0, 0x10c(r29)
	stfs     f0, 0x110(r29)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801B7C78
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__26Container<Q24Game7MapUnit>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r5, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__26Container<Q24Game7MapUnit>"@l
	lis      r4, "__vt__26ObjectMgr<Q24Game7MapUnit>"@ha
	lis      r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@ha
	stw      r0, 0(r31)
	li       r0, 0
	addi     r6, r4, "__vt__26ObjectMgr<Q24Game7MapUnit>"@l
	addi     r4, r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@l
	stb      r0, 0x18(r31)
	addi     r0, r5, __vt__16GenericObjectMgr@l
	addi     r28, r31, 0x20
	addi     r5, r6, 0x2c
	stw      r0, 0x1c(r31)
	addi     r0, r4, 0x2c
	mr       r3, r28
	stw      r6, 0(r31)
	stw      r5, 0x1c(r31)
	stw      r4, 0(r31)
	stw      r0, 0x1c(r31)
	bl       __ct__5CNodeFv
	lis      r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
	lis      r3, __vt__Q24Game10MapUnitMgr@ha
	addi     r0, r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
	stw      r0, 0(r28)
	addi     r3, r3, __vt__Q24Game10MapUnitMgr@l
	addi     r0, r3, 0x2c
	stw      r3, 0(r31)
	stw      r0, 0x1c(r31)

lbl_801B7C78:
	stw      r31, 0xa8(r29)
	li       r0, 0
	lfs      f3, lbl_80519444@sda21(r2)
	mr       r3, r29
	lfs      f2, lbl_80519448@sda21(r2)
	stfs     f3, 0xdc(r29)
	lfs      f1, lbl_80519440@sda21(r2)
	stfs     f3, 0xe0(r29)
	lfs      f0, lbl_80519458@sda21(r2)
	stfs     f3, 0xe4(r29)
	stfs     f2, 0xe8(r29)
	stfs     f2, 0xec(r29)
	stfs     f2, 0xf0(r29)
	stw      r30, 0x28(r29)
	stw      r0, 0x2c(r29)
	stw      r0, 0x30(r29)
	stfs     f1, 0x4c(r29)
	stfs     f0, 0x50(r29)
	stfs     f1, 0x54(r29)
	stw      r0, 0x114(r29)
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
 * Address:	801B7CE8
 * Size:	0000A0
 */
void MonoObjectMgr<Game::MapRoom>::~MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801B7D6C
	lis      r4, "__vt__30MonoObjectMgr<Q24Game7MapRoom>"@ha
	addi     r4, r4, "__vt__30MonoObjectMgr<Q24Game7MapRoom>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_801B7D5C
	lis      r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@ha
	addi     r4, r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_801B7D5C
	lis      r4, "__vt__26Container<Q24Game7MapRoom>"@ha
	addi     r0, r4, "__vt__26Container<Q24Game7MapRoom>"@l
	stw      r0, 0(r30)
	beq      lbl_801B7D5C
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801B7D5C:
	extsh.   r0, r31
	ble      lbl_801B7D6C
	mr       r3, r30
	bl       __dl__FPv

lbl_801B7D6C:
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
 * Address:	801B7D88
 * Size:	0001FC
 */
void RoomMapMgr::getMapRoom(short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r3, r3, 0xac
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__25Iterator<Q24Game7MapRoom>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r5, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B7DDC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B7E64

lbl_801B7DDC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B7E48

lbl_801B7DF4:
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
	bne      lbl_801B7E64
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B7E48:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7DF4

lbl_801B7E64:
	extsh    r31, r31
	b        lbl_801B7F4C

lbl_801B7E6C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x184(r3)
	cmpw     r0, r31
	bne      lbl_801B7E90
	b        lbl_801B7F70

lbl_801B7E90:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B7EBC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B7F4C

lbl_801B7EBC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B7F30

lbl_801B7EDC:
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
	bne      lbl_801B7F4C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B7F30:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7EDC

lbl_801B7F4C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B7E6C
	li       r3, 0

lbl_801B7F70:
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
 * Address:	801B7F84
 * Size:	00004C
 */
void Iterator<Game::MapRoom>::isDone()
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
 * Address:	801B7FD0
 * Size:	00000C
 */
CaveVRBox::CaveVRBox(void)
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void CaveVRBox::create(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B7FDC
 * Size:	000A48
 */
void RoomMapMgr::createRandomMap(int, Game::Cave::EditMapUnit*)
{
	/*
	stwu     r1, -0x1530(r1)
	mflr     r0
	lis      r6, lbl_8047FC70@ha
	stw      r0, 0x1534(r1)
	stmw     r21, 0x1504(r1)
	mr       r31, r3
	mr       r28, r4
	mr       r26, r5
	addi     r30, r6, lbl_8047FC70@l
	lwz      r3, 0x28(r3)
	bl       getFloorInfo__Q34Game4Cave8CaveInfoFi
	mr       r29, r3
	stw      r29, 0x2c(r31)
	stw      r28, 0x30(r31)
	bl       getTekiMax__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getTekiInfoNum__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getTekiWeightSum__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getItemMax__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getItemInfoNum__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getItemWeightSum__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getGateMax__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getGateInfoNum__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getGateWeightSum__Q34Game4Cave9FloorInfoFv
	lwz      r5, 0x1a4(r29)
	addi     r3, r1, 0x698
	addi     r4, r30, 0x178
	crclr    6
	bl       sprintf
	li       r0, 0
	addi     r3, r1, 0x698
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r27, r3, r3
	bne      lbl_801B80B8
	addi     r3, r30, 0x84
	addi     r5, r30, 0x198
	addi     r6, r1, 0x698
	li       r4, 0x649
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B80B8:
	mr       r4, r27
	addi     r3, r1, 0x10d8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x10e4(r1)
	bne      lbl_801B80E0
	li       r0, 0
	stw      r0, 0x14ec(r1)

lbl_801B80E0:
	addi     r3, r1, 0x10d8
	bl       readInt__6StreamFv
	mr       r25, r3
	mr       r24, r25
	mulli    r3, r24, 0x16c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game16MapUnitInterfaceFv@ha
	lis      r5, __dt__Q24Game16MapUnitInterfaceFv@ha
	addi     r4, r4, __ct__Q24Game16MapUnitInterfaceFv@l
	mr       r7, r24
	addi     r5, r5, __dt__Q24Game16MapUnitInterfaceFv@l
	li       r6, 0x16c
	bl       __construct_new_array
	mr       r24, r3
	li       r22, 0
	mr       r23, r24
	b        lbl_801B813C

lbl_801B8128:
	mr       r3, r23
	addi     r4, r1, 0x10d8
	bl       read__Q24Game9PartsViewFR6Stream
	addi     r23, r23, 0x16c
	addi     r22, r22, 1

lbl_801B813C:
	cmpw     r22, r25
	blt      lbl_801B8128
	stw      r24, 0xf8(r31)
	addi     r3, r1, 0x498
	addi     r4, r30, 0x1a8
	stw      r25, 0xf4(r31)
	lwz      r5, 0x1c4(r29)
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x498
	bl       DVDConvertPathToEntrynum
	cmpwi    r3, -1
	beq      lbl_801B8200
	li       r0, 0
	addi     r3, r1, 0x498
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r23, r3, r3
	beq      lbl_801B81E8
	mr       r4, r23
	addi     r3, r1, 0xcb8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0xcc4(r1)
	bne      lbl_801B81CC
	li       r0, 0
	stw      r0, 0x10cc(r1)

lbl_801B81CC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       getLightMgr__Q24Game10GameSystemFv
	addi     r4, r1, 0xcb8
	bl       loadParm__Q24Game12GameLightMgrFR6Stream
	mr       r3, r23
	bl       __dla__FPv
	b        lbl_801B8200

lbl_801B81E8:
	addi     r3, r30, 0x84
	addi     r5, r30, 0x1bc
	addi     r6, r1, 0x498
	li       r4, 0x671
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B8200:
	lwz      r5, 0x1e4(r29)
	addi     r3, r1, 0x98
	addi     r4, r30, 0x13c
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x98
	bl       DVDConvertPathToEntrynum
	cmpwi    r3, -1
	beq      lbl_801B8320
	addi     r3, r1, 0x98
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	cmplwi   r3, 0
	beq      lbl_801B8320
	lwz      r12, 0(r3)
	addi     r4, r30, 0x158
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_801B8308
	lis      r4, 0x2000
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lis      r4, 4
	mr       r23, r3
	bl       newSharedDisplayList__12J3DModelDataFUl
	mr       r3, r23
	bl       makeSharedDL__12J3DModelDataFv
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801B829C
	mr       r4, r23
	li       r5, 0
	li       r6, 2
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_801B829C:
	stw      r0, 0x24(r31)
	addi     r3, r1, 0x38
	bl       PSMTXIdentity
	lwz      r4, 0x24(r31)
	addi     r3, r1, 0x38
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x24(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r31)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x24(r31)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
	b        lbl_801B8320

lbl_801B8308:
	addi     r3, r30, 0x84
	addi     r5, r30, 0x164
	addi     r6, r1, 0x98
	li       r4, 0x610
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B8320:
	mr       r22, r24
	li       r21, 0
	b        lbl_801B83EC

lbl_801B832C:
	lwz      r5, 0x14(r22)
	addi     r3, r1, 0x298
	addi     r4, r30, 0x1d0
	crclr    6
	bl       sprintf
	lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r3, r1, 0x298
	li       r4, 1
	li       r6, 2
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r23, r3, r3
	bne      lbl_801B8370
	addi     r3, r30, 0x84
	addi     r5, r30, 0x1f8
	li       r4, 0x697
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B8370:
	mr       r3, r23
	addi     r4, r30, 0x208
	lwz      r12, 0(r23)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_801B83D0
	mr       r4, r3
	addi     r3, r1, 0x898
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x8a4(r1)
	bne      lbl_801B83B8
	li       r0, 0
	stw      r0, 0xcac(r1)

lbl_801B83B8:
	lwz      r3, 0x168(r22)
	addi     r4, r1, 0x898
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801B83D0:
	mr       r3, r23
	lwz      r12, 0(r23)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r22, r22, 0x16c
	addi     r21, r21, 1

lbl_801B83EC:
	cmpw     r21, r25
	blt      lbl_801B832C
	bl       clear__Q24Game17PelletBirthBufferFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x214
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, 0x28(r31)
	bl       getFloorMax__Q34Game4Cave8CaveInfoFv
	addi     r0, r3, -1
	mr       r3, r31
	subf     r0, r28, r0
	mr       r4, r24
	cntlzw   r0, r0
	mr       r5, r25
	srwi     r7, r0, 5
	mr       r6, r29
	mr       r8, r26
	bl
nishimuraCreateRandomMap__Q24Game10RoomMapMgrFPQ24Game16MapUnitInterfaceiPQ34Game4Cave9FloorInfobPQ34Game4Cave11EditMapUnit
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x214
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r27
	bl       __dla__FPv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x228
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r31
	bl       completeUnitData__Q24Game10RoomMapMgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x228
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801B8488
	bl       __ct__Q24Game14EditorRouteMgrFv
	mr       r0, r3

lbl_801B8488:
	stw      r0, 8(r31)
	addi     r4, r30, 0x23c
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r31
	bl       nishimuraPlaceRooms__Q24Game10RoomMapMgrFv
	lwz      r3, 8(r31)
	bl       makeInvertLinks__Q24Game8RouteMgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x23c
	bl       heapStatusEnd__6SystemFPc
	li       r4, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	stw      r4, 0xa0(r31)
	addi     r0, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r4, 0
	stw      r0, 0x28(r1)
	stw      r4, 0x34(r1)
	stw      r4, 0x2c(r1)
	stw      r3, 0x30(r1)
	bne      lbl_801B84FC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B8670

lbl_801B84FC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B8568

lbl_801B8514:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B8670
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_801B8568:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8514
	b        lbl_801B8670

lbl_801B8588:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x186(r3)
	cmpwi    r0, 1
	bne      lbl_801B85B4
	lwz      r3, 0xa0(r31)
	addi     r0, r3, 1
	stw      r0, 0xa0(r31)

lbl_801B85B4:
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_801B85E0
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B8670

lbl_801B85E0:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B8654

lbl_801B8600:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B8670
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_801B8654:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8600

lbl_801B8670:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2c(r1)
	cmplw    r4, r3
	bne      lbl_801B8588
	lwz      r0, 0xa0(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0xa4(r31)
	li       r24, 0
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_801B86CC
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B885C

lbl_801B86CC:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B873C

lbl_801B86E8:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B885C
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_801B873C:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B86E8
	b        lbl_801B885C

lbl_801B875C:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x186(r3)
	cmpwi    r0, 1
	bne      lbl_801B87A0
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xa4(r31)
	stwx     r3, r4, r24
	addi     r24, r24, 4

lbl_801B87A0:
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_801B87CC
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B885C

lbl_801B87CC:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B8840

lbl_801B87EC:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B885C
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_801B8840:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B87EC

lbl_801B885C:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2c(r1)
	cmplw    r4, r3
	bne      lbl_801B875C
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_801B891C
	lfs      f1, lbl_80519458@sda21(r2)
	addi     r3, r1, 0x68
	lfs      f4, lbl_8051945C@sda21(r2)
	addi     r4, r1, 0x1c
	stfs     f1, 0x1c(r1)
	addi     r5, r1, 0x10
	lfs      f0, lbl_80519440@sda21(r2)
	stfs     f1, 0x20(r1)
	stfs     f1, 0x24(r1)
	lfs      f2, 0xe0(r31)
	lfs      f1, 0xec(r31)
	lfs      f6, 0xe4(r31)
	fadds    f3, f2, f1
	lfs      f5, 0xf0(r31)
	lfs      f2, 0xdc(r31)
	lfs      f1, 0xe8(r31)
	fadds    f5, f6, f5
	fmuls    f3, f3, f4
	fadds    f1, f2, f1
	fmuls    f2, f5, f4
	stfs     f3, 0x14(r1)
	fmuls    f1, f1, f4
	stfs     f2, 0x18(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	bl       "makeST__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x24(r31)
	addi     r3, r1, 0x68
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x24(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801B891C:
	lfs      f4, 0xdc(r31)
	lfs      f0, lbl_80519464@sda21(r2)
	lfs      f3, 0xe4(r31)
	fsubs    f1, f4, f0
	lfs      f2, 0xe0(r31)
	fsubs    f3, f3, f0
	fcmpo    cr0, f1, f4
	bge      lbl_801B8940
	stfs     f1, 0xdc(r31)

lbl_801B8940:
	lfs      f0, 0xe0(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_801B8950
	stfs     f2, 0xe0(r31)

lbl_801B8950:
	lfs      f0, 0xe4(r31)
	fcmpo    cr0, f3, f0
	bge      lbl_801B8960
	stfs     f3, 0xe4(r31)

lbl_801B8960:
	lfs      f0, 0xe8(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_801B8970
	stfs     f1, 0xe8(r31)

lbl_801B8970:
	lfs      f0, 0xec(r31)
	fcmpo    cr0, f2, f0
	ble      lbl_801B8980
	stfs     f2, 0xec(r31)

lbl_801B8980:
	lfs      f0, 0xf0(r31)
	fcmpo    cr0, f3, f0
	ble      lbl_801B8990
	stfs     f3, 0xf0(r31)

lbl_801B8990:
	lfs      f2, 0xe8(r31)
	lfs      f1, lbl_80519464@sda21(r2)
	lfs      f3, 0xf0(r31)
	fadds    f2, f2, f1
	lfs      f0, 0xdc(r31)
	fadds    f3, f3, f1
	lfs      f1, 0xec(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_801B89B8
	stfs     f2, 0xdc(r31)

lbl_801B89B8:
	lfs      f0, 0xe0(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_801B89C8
	stfs     f1, 0xe0(r31)

lbl_801B89C8:
	lfs      f0, 0xe4(r31)
	fcmpo    cr0, f3, f0
	bge      lbl_801B89D8
	stfs     f3, 0xe4(r31)

lbl_801B89D8:
	lfs      f0, 0xe8(r31)
	fcmpo    cr0, f2, f0
	ble      lbl_801B89E8
	stfs     f2, 0xe8(r31)

lbl_801B89E8:
	lfs      f0, 0xec(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_801B89F8
	stfs     f1, 0xec(r31)

lbl_801B89F8:
	lfs      f0, 0xf0(r31)
	fcmpo    cr0, f3, f0
	ble      lbl_801B8A08
	stfs     f3, 0xf0(r31)

lbl_801B8A08:
	mr       r3, r31
	bl       deleteTemp__Q24Game10RoomMapMgrFv
	lmw      r21, 0x1504(r1)
	lwz      r0, 0x1534(r1)
	mtlr     r0
	addi     r1, r1, 0x1530
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B8A24
 * Size:	0000EC
 */
MapUnitInterface::~MapUnitInterface(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_801B8AF4
	lis      r3, __vt__Q24Game16MapUnitInterface@ha
	addi     r0, r3, __vt__Q24Game16MapUnitInterface@l
	stw      r0, 0(r31)
	beq      lbl_801B8AE4
	lis      r3, __vt__Q24Game9PartsView@ha
	addic.   r0, r31, 0x118
	addi     r0, r3, __vt__Q24Game9PartsView@l
	stw      r0, 0(r31)
	beq      lbl_801B8A9C
	lis      r4, __vt__Q24Game4Door@ha
	addic.   r3, r31, 0x138
	addi     r0, r4, __vt__Q24Game4Door@l
	stw      r0, 0x118(r31)
	beq      lbl_801B8A90
	lis      r4, __vt__Q24Game8DoorLink@ha
	addi     r0, r4, __vt__Q24Game8DoorLink@l
	stw      r0, 0x138(r31)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8A90:
	addi     r3, r31, 0x118
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8A9C:
	addic.   r0, r31, 0x70
	beq      lbl_801B8AD8
	lis      r4, __vt__Q24Game14EditorRouteMgr@ha
	addic.   r3, r31, 0x90
	addi     r0, r4, __vt__Q24Game14EditorRouteMgr@l
	stw      r0, 0x70(r31)
	beq      lbl_801B8ACC
	lis      r4, __vt__Q34Game14EditorRouteMgr6WPNode@ha
	addi     r0, r4, __vt__Q34Game14EditorRouteMgr6WPNode@l
	stw      r0, 0x90(r31)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8ACC:
	addi     r3, r31, 0x70
	li       r4, 0
	bl       __dt__Q24Game8RouteMgrFv

lbl_801B8AD8:
	mr       r3, r31
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8AE4:
	extsh.   r0, r30
	ble      lbl_801B8AF4
	mr       r3, r31
	bl       __dl__FPv

lbl_801B8AF4:
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
 * Address:	801B8B10
 * Size:	00003C
 */
MapUnitInterface::MapUnitInterface(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game9PartsViewFv
	lis      r4, __vt__Q24Game16MapUnitInterface@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q24Game16MapUnitInterface@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B8B4C
 * Size:	0000DC
 */
PartsView::~PartsView(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801B8C0C
	lis      r3, __vt__Q24Game9PartsView@ha
	addic.   r0, r30, 0x118
	addi     r0, r3, __vt__Q24Game9PartsView@l
	stw      r0, 0(r30)
	beq      lbl_801B8BB4
	lis      r4, __vt__Q24Game4Door@ha
	addic.   r3, r30, 0x138
	addi     r0, r4, __vt__Q24Game4Door@l
	stw      r0, 0x118(r30)
	beq      lbl_801B8BA8
	lis      r4, __vt__Q24Game8DoorLink@ha
	addi     r0, r4, __vt__Q24Game8DoorLink@l
	stw      r0, 0x138(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8BA8:
	addi     r3, r30, 0x118
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8BB4:
	addic.   r0, r30, 0x70
	beq      lbl_801B8BF0
	lis      r4, __vt__Q24Game14EditorRouteMgr@ha
	addic.   r3, r30, 0x90
	addi     r0, r4, __vt__Q24Game14EditorRouteMgr@l
	stw      r0, 0x70(r30)
	beq      lbl_801B8BE4
	lis      r4, __vt__Q34Game14EditorRouteMgr6WPNode@ha
	addi     r0, r4, __vt__Q34Game14EditorRouteMgr6WPNode@l
	stw      r0, 0x90(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8BE4:
	addi     r3, r30, 0x70
	li       r4, 0
	bl       __dt__Q24Game8RouteMgrFv

lbl_801B8BF0:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801B8C0C
	mr       r3, r30
	bl       __dl__FPv

lbl_801B8C0C:
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
 * Address:	801B8C28
 * Size:	000224
 */
void RoomMapMgr::completeUnitData(void)
{
	/*
	stwu     r1, -0x230(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x234(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
	stw      r31, 0x22c(r1)
	cmplwi   r0, 0
	stw      r30, 0x228(r1)
	stw      r29, 0x224(r1)
	mr       r29, r3
	lwz      r3, 0xa8(r3)
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B8C84
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B8D0C

lbl_801B8C84:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B8CF0

lbl_801B8C9C:
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
	bne      lbl_801B8D0C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B8CF0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8C9C

lbl_801B8D0C:
	lis      r3, lbl_8047FEBC@ha
	addi     r31, r3, lbl_8047FEBC@l
	b        lbl_801B8E10

lbl_801B8D18:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r4, r31
	lwz      r5, 8(r30)
	addi     r3, r1, 0x18
	crclr    6
	bl       sprintf
	lwz      r3, 0xa8(r29)
	mr       r4, r30
	addi     r5, r1, 0x18
	bl       makeUnit__Q24Game10MapUnitMgrFPQ24Game7MapUnitPc
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B8D80
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B8E10

lbl_801B8D80:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B8DF4

lbl_801B8DA0:
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
	bne      lbl_801B8E10
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B8DF4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8DA0

lbl_801B8E10:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B8D18
	lwz      r0, 0x234(r1)
	lwz      r31, 0x22c(r1)
	lwz      r30, 0x228(r1)
	lwz      r29, 0x224(r1)
	mtlr     r0
	addi     r1, r1, 0x230
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B8E4C
 * Size:	000234
 */
void RoomMapMgr::setupJUTTextures(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
	stw      r31, 0x2c(r1)
	mr       r31, r3
	cmplwi   r0, 0
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	lwz      r3, 0xa8(r3)
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B8EA8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B903C

lbl_801B8EA8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B8F14

lbl_801B8EC0:
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
	bne      lbl_801B903C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B8F14:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8EC0
	b        lbl_801B903C

lbl_801B8F34:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801B8F7C
	lwz      r4, 0x30(r29)
	li       r0, 0
	li       r5, 0
	stw      r0, 0x28(r30)
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r30)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r30)

lbl_801B8F7C:
	stw      r30, 0x2c(r29)
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B8FAC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B903C

lbl_801B8FAC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9020

lbl_801B8FCC:
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
	bne      lbl_801B903C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9020:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8FCC

lbl_801B903C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B8F34
	mr       r3, r31
	bl       nishimuraSetTexture__Q24Game10RoomMapMgrFv
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
 * Address:	801B9080
 * Size:	0002BC
 */
void RoomMapMgr::useUnit(char*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r5, r5, "__vt__25Iterator<Q24Game7MapUnit>"@l
	stmw     r26, 0x18(r1)
	mr       r30, r3
	cmplwi   r0, 0
	mr       r31, r4
	lwz      r3, 0xa8(r3)
	stw      r5, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B90D8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9250

lbl_801B90D8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9144

lbl_801B90F0:
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
	bne      lbl_801B9250
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9144:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B90F0
	b        lbl_801B9250

lbl_801B9164:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r31
	lwz      r4, 8(r29)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801B9194
	b        lbl_801B9274

lbl_801B9194:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B91C0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9250

lbl_801B91C0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9234

lbl_801B91E0:
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
	bne      lbl_801B9250
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9234:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B91E0

lbl_801B9250:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B9164
	li       r29, 0

lbl_801B9274:
	cmplwi   r29, 0
	mr       r27, r29
	bne      lbl_801B9328
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_801B92A0
	bl       __ct__5CNodeFv
	lis      r3, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
	addi     r0, r3, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
	stw      r0, 0(r29)

lbl_801B92A0:
	li       r26, 0
	li       r28, 0
	b        lbl_801B92E0

lbl_801B92AC:
	lwz      r4, 0xf8(r30)
	addi     r0, r28, 0x18
	mr       r3, r31
	lwzx     r4, r4, r0
	lwz      r4, 8(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801B92D8
	lwz      r3, 0xf8(r30)
	addi     r0, r28, 0x18
	lwzx     r27, r3, r0

lbl_801B92D8:
	addi     r28, r28, 0x16c
	addi     r26, r26, 1

lbl_801B92E0:
	lwz      r0, 0xf4(r30)
	cmpw     r26, r0
	blt      lbl_801B92AC
	cmplwi   r27, 0
	bne      lbl_801B9314
	lis      r3, lbl_8047FCF4@ha
	lis      r4, lbl_8047FED8@ha
	addi     r5, r4, lbl_8047FED8@l
	mr       r6, r31
	addi     r3, r3, lbl_8047FCF4@l
	li       r4, 0x75c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B9314:
	stw      r27, 0x18(r29)
	mr       r4, r29
	lwz      r3, 0xa8(r30)
	addi     r3, r3, 0x20
	bl       add__5CNodeFP5CNode

lbl_801B9328:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B933C
 * Size:	000210
 */
void RoomMapMgr::getTexture(char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	cmplwi   r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	addi     r4, r5, "__vt__25Iterator<Q24Game7MapUnit>"@l
	lwz      r3, 0xa8(r3)
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B9394
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9510

lbl_801B9394:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9400

lbl_801B93AC:
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
	bne      lbl_801B9510
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9400:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B93AC
	b        lbl_801B9510

lbl_801B9420:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r4, r30
	lwz      r3, 8(r3)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801B9454
	lwz      r3, 0x2c(r31)
	b        lbl_801B9534

lbl_801B9454:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B9480
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9510

lbl_801B9480:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B94F4

lbl_801B94A0:
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
	bne      lbl_801B9510
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B94F4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B94A0

lbl_801B9510:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B9420
	li       r3, 0

lbl_801B9534:
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
 * Address:	801B954C
 * Size:	0001F4
 */
void RoomMapMgr::allocRooms(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r31, 0xac
	bl       "alloc__30MonoObjectMgr<Q24Game7MapRoom>Fi"
	li       r0, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B95A8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B970C

lbl_801B95A8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9614

lbl_801B95C0:
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
	bne      lbl_801B970C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9614:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B95C0
	b        lbl_801B970C

lbl_801B9634:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r0, -1
	sth      r0, 0x184(r3)
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B967C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B970C

lbl_801B967C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B96F0

lbl_801B969C:
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
	bne      lbl_801B970C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B96F0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B969C

lbl_801B970C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B9634
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9740
 * Size:	000050
 */
void RoomMapMgr::makeRoom(char*, float, float, int, int, Game::RoomLink*, Game::ObjectLayoutInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  xoris     r5, r5, 0x8000
	  lfd       f3, -0x4EF0(r2)
	  stw       r0, 0x14(r1)
	  lis       r0, 0x4330
	  lfs       f4, -0x4EF8(r2)
	  stw       r5, 0xC(r1)
	  extsh     r5, r6
	  mr        r6, r7
	  mr        r7, r8
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f3
	  fmuls     f3, f4, f0
	  bl        0x3198
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B9790
 * Size:	0003B4
 */
void RoomMapMgr::placeObjects(void)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stmw     r27, 0x6c(r1)
	li       r0, 0
	mr       r31, r3
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	stw      r0, 0x28(r1)
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r0, 0
	stw      r4, 0x1c(r1)
	stw      r0, 0x20(r1)
	stw      r3, 0x24(r1)
	bne      lbl_801B97F4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_801B997C

lbl_801B97F4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_801B9860

lbl_801B980C:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B997C
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)

lbl_801B9860:
	lwz      r12, 0x1c(r1)
	addi     r3, r1, 0x1c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B980C
	b        lbl_801B997C

lbl_801B9880:
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	lwz      r3, 0x28(r31)
	bl       getFloorMax__Q34Game4Cave8CaveInfoFv
	lwz      r0, 0x30(r31)
	addi     r5, r3, -1
	lwz      r4, 0x2c(r31)
	mr       r3, r29
	subf     r0, r0, r5
	cntlzw   r0, r0
	srwi     r5, r0, 5
	bl       placeObjects__Q24Game7MapRoomFPQ34Game4Cave9FloorInfob
	lwz      r0, 0x28(r1)
	cmplwi   r0, 0
	bne      lbl_801B98EC
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_801B997C

lbl_801B98EC:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_801B9960

lbl_801B990C:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B997C
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)

lbl_801B9960:
	lwz      r12, 0x1c(r1)
	addi     r3, r1, 0x1c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B990C

lbl_801B997C:
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x20(r1)
	cmplw    r4, r3
	bne      lbl_801B9880
	lwz      r4, 8(r31)
	cmplwi   r4, 0
	beq      lbl_801B9B20
	lwz      r3, 0x2c(r31)
	lwz      r0, 0x2e8(r3)
	cmpwi    r0, 0
	beq      lbl_801B9B20
	lhz      r0, 0x1c(r4)
	li       r28, -1
	lfd      f30, lbl_80519470@sda21(r2)
	li       r27, -1
	lfs      f31, lbl_80519444@sda21(r2)
	xoris    r30, r0, 0x8000
	lis      r29, 0x4330
	b        lbl_801B9A50

lbl_801B99D8:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r29, 0x30(r1)
	stw      r0, 0x34(r1)
	lfd      f0, 0x30(r1)
	stw      r30, 0x3c(r1)
	fsubs    f0, f0, f30
	stw      r29, 0x38(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x38(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r27, 0x44(r1)
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r29, 0x48(r1)
	stw      r0, 0x4c(r1)
	lfd      f0, 0x48(r1)
	stw      r30, 0x54(r1)
	fsubs    f0, f0, f30
	stw      r29, 0x50(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r28, 0x5c(r1)

lbl_801B9A50:
	cmpw     r27, r28
	beq      lbl_801B99D8
	lwz      r3, 8(r31)
	extsh    r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	stw      r3, 8(r1)
	extsh    r4, r28
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	addi     r27, r1, 8
	li       r28, 0

lbl_801B9A98:
	lwz      r3, mgr__Q24Game13ItemDownFloor@sda21(r13)
	bl       birth__Q34Game13ItemDownFloor3MgrFv
	or.      r29, r3, r3
	beq      lbl_801B9B10
	lwz      r6, 0(r27)
	lis      r4, 0x30303030@ha
	li       r5, 0x14
	li       r0, 1
	lfs      f1, 0x50(r6)
	addi     r3, r29, 0x21c
	lfs      f2, 0x54(r6)
	addi     r4, r4, 0x30303030@l
	lfs      f0, 0x4c(r6)
	stfs     f0, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f2, 0x18(r1)
	stw      r5, 0x1e8(r29)
	sth      r0, 0x204(r29)
	stb      r0, 0x228(r29)
	stb      r0, 0x229(r29)
	bl       setID__4ID32FUl
	mr       r3, r29
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lfs      f0, lbl_80519440@sda21(r2)
	mr       r3, r29
	addi     r4, r1, 0x10
	li       r5, 0
	stfs     f0, 0x200(r29)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_801B9B10:
	addi     r28, r28, 1
	addi     r27, r27, 4
	cmpwi    r28, 2
	blt      lbl_801B9A98

lbl_801B9B20:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	lmw      r27, 0x6c(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9B44
 * Size:	000024
 */
void RoomMapMgr::getBoundBox2d(BoundBox2d&)
{
	/*
	lfs      f1, 0xe4(r3)
	lfs      f0, 0xdc(r3)
	stfs     f0, 0(r4)
	stfs     f1, 4(r4)
	lfs      f1, 0xf0(r3)
	lfs      f0, 0xe8(r3)
	stfs     f0, 8(r4)
	stfs     f1, 0xc(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9B68
 * Size:	000034
 */
void RoomMapMgr::getBoundBox(BoundBox&)
{
	/*
	lfs      f0, 0xdc(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0xe0(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0xe4(r3)
	stfs     f0, 8(r4)
	lfs      f0, 0xe8(r3)
	stfs     f0, 0xc(r4)
	lfs      f0, 0xec(r3)
	stfs     f0, 0x10(r4)
	lfs      f0, 0xf0(r3)
	stfs     f0, 0x14(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9B9C
 * Size:	000004
 */
void RoomMapMgr::drawCollision(Graphics&, Sys::Sphere&) { }

/*
 * --INFO--
 * Address:	801B9BA0
 * Size:	0001F0
 */
void RoomMapMgr::traceMove(Game::MoveInfo&, float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	mr       r28, r4
	lwz      r4, 4(r4)
	fmr      f31, f1
	mr       r27, r3
	lfs      f3, 0(r4)
	li       r31, 1
	lfs      f2, 4(r4)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	lfs      f4, 8(r4)
	lwz      r3, 0(r28)
	fmuls    f4, f4, f4
	lfs      f1, lbl_80519440@sda21(r2)
	fadds    f0, f0, f2
	lfs      f5, 0xc(r3)
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801B9C1C
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_801B9C20
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_801B9C20

lbl_801B9C1C:
	fmr      f2, f1

lbl_801B9C20:
	lfs      f0, lbl_8051945C@sda21(r2)

lbl_801B9C24:
	fmuls    f1, f31, f2
	fcmpo    cr0, f1, f5
	ble      lbl_801B9C40
	slwi     r31, r31, 1
	fmuls    f31, f31, f0
	cmpwi    r31, 4
	ble      lbl_801B9C24

lbl_801B9C40:
	li       r29, 0
	b        lbl_801B9C6C

lbl_801B9C48:
	mr       r3, r27
	fmr      f1, f31
	lwz      r12, 4(r27)
	mr       r4, r28
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	addi     r29, r29, 1

lbl_801B9C6C:
	cmpw     r29, r31
	blt      lbl_801B9C48
	lwz      r3, 0x2c(r27)
	bl       hasHiddenCollision__Q34Game4Cave9FloorInfoFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B9D70
	lwz      r0, 0x44(r28)
	cmplwi   r0, 0
	bne      lbl_801B9D70
	lwz      r3, 0(r28)
	lfs      f0, lbl_80519440@sda21(r2)
	lfs      f1, 4(r3)
	lfs      f2, 0xc(r3)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_801B9D70
	stfs     f2, 4(r3)
	lwz      r3, 4(r28)
	lfs      f2, 4(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_801B9CD8
	lfs      f1, 8(r28)
	fneg     f2, f2
	lfs      f0, lbl_80519458@sda21(r2)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 4(r3)

lbl_801B9CD8:
	lwz      r3, 0(r28)
	addi     r0, r27, 0x40
	lfs      f2, lbl_80519440@sda21(r2)
	lfs      f0, 0(r3)
	lfs      f1, lbl_80519458@sda21(r2)
	stfs     f0, 0x14(r1)
	lfs      f3, 4(r3)
	stfs     f3, 0x18(r1)
	lfs      f0, 8(r3)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0xc(r3)
	fsubs    f0, f3, f0
	stfs     f0, 0x18(r1)
	stw      r0, 0x44(r28)
	stfs     f2, 0x50(r28)
	stfs     f1, 0x54(r28)
	stfs     f2, 0x58(r28)
	stfs     f2, 0x78(r28)
	stfs     f1, 0x7c(r28)
	stfs     f2, 0x80(r28)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x84(r28)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x88(r28)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x8c(r28)
	lwz      r3, 0x10(r28)
	cmplwi   r3, 0
	beq      lbl_801B9D70
	stfs     f2, 8(r1)
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801B9D70:
	mr       r3, r30
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9D90
 * Size:	000024
 */
void RoomMapMgr::hasHiddenCollision(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2c(r3)
	bl       hasHiddenCollision__Q34Game4Cave9FloorInfoFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9DB4
 * Size:	00008C
 */
void RoomMapMgr::constraintBoundBox(Sys::Sphere&)
{
	/*
	lfs      f3, 0(r4)
	lfs      f1, 0xc(r4)
	lfs      f2, 0xdc(r3)
	fsubs    f0, f3, f1
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_801B9DDC
	fadds    f0, f2, f1
	stfs     f0, 0(r4)
	b        lbl_801B9DF8

lbl_801B9DDC:
	fadds    f0, f3, f1
	lfs      f2, 0xe8(r3)
	fcmpo    cr0, f0, f2
	cror     2, 1, 2
	bne      lbl_801B9DF8
	fsubs    f0, f2, f1
	stfs     f0, 0(r4)

lbl_801B9DF8:
	lfs      f3, 8(r4)
	lfs      f1, 0xc(r4)
	lfs      f2, 0xe4(r3)
	fsubs    f0, f3, f1
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_801B9E20
	fadds    f0, f2, f1
	stfs     f0, 8(r4)
	blr

lbl_801B9E20:
	fadds    f0, f3, f1
	lfs      f2, 0xf0(r3)
	fcmpo    cr0, f0, f2
	cror     2, 1, 2
	bnelr
	fsubs    f0, f2, f1
	stfs     f0, 8(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9E40
 * Size:	0001F4
 */
void RoomMapMgr::entryToMapRoomCellMgr(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r3, r3, 0xac
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B9E8C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BA004

lbl_801B9E8C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9EF8

lbl_801B9EA4:
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
	bne      lbl_801BA004
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9EF8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B9EA4
	b        lbl_801BA004

lbl_801B9F18:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, mapRoomCellMgr__4Game@sda21(r13)
	mr       r4, r3
	cmplwi   r0, 0
	beq      lbl_801B9F48
	mr       r3, r0
	addi     r5, r4, 0x190
	bl       entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6Sphere

lbl_801B9F48:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B9F74
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BA004

lbl_801B9F74:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9FE8

lbl_801B9F94:
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
	bne      lbl_801BA004
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9FE8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B9F94

lbl_801BA004:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B9F18
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BA034
 * Size:	000128
 */
void RoomMapMgr::findRoomIndex(Sys::Sphere&)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	addi     r3, r1, 0x20
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r30, r4
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	lwz      r5, mapRoomCellMgr__4Game@sda21(r13)
	li       r0, 1
	stb      r0, 0x3c(r1)
	addi     r3, r1, 0x40
	addi     r4, r1, 0x20
	stw      r5, 0x38(r1)
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x40
	bl       first__Q24Game12CellIteratorFv
	b        lbl_801BA130

lbl_801BA07C:
	addi     r3, r1, 0x40
	bl       __ml__Q24Game12CellIteratorFv
	lfs      f0, 0(r30)
	mr       r31, r3
	addi     r3, r31, 0x108
	addi     r4, r1, 0x14
	stfs     f0, 0x14(r1)
	addi     r5, r1, 8
	lfs      f0, 4(r30)
	stfs     f0, 0x18(r1)
	lfs      f0, 8(r30)
	stfs     f0, 0x1c(r1)
	bl       PSMTXMultVec
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x138(r31)
	lfs      f6, 0xc(r30)
	lfs      f1, 0x7c(r3)
	lfs      f3, 0x84(r3)
	fsubs    f1, f1, f6
	lfs      f4, 0x88(r3)
	lfs      f5, 0x90(r3)
	fsubs    f3, f3, f6
	fadds    f4, f4, f6
	fcmpo    cr0, f1, f2
	fadds    f5, f5, f6
	cror     2, 0, 2
	bne      lbl_801BA128
	fcmpo    cr0, f3, f0
	cror     2, 0, 2
	bne      lbl_801BA128
	fcmpo    cr0, f2, f4
	cror     2, 0, 2
	bne      lbl_801BA128
	fcmpo    cr0, f0, f5
	cror     2, 0, 2
	bne      lbl_801BA128
	lha      r3, 0x184(r31)
	b        lbl_801BA144

lbl_801BA128:
	addi     r3, r1, 0x40
	bl       next__Q24Game12CellIteratorFv

lbl_801BA130:
	addi     r3, r1, 0x40
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA07C
	li       r3, -1

lbl_801BA144:
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
 * Address:	........
 * Size:	00003C
 */
void MapRoom::createGlobalCollision(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801BA15C
 * Size:	0009FC
 */
void RoomMapMgr::createGlobalCollision(void)
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stmw     r18, 0x108(r1)
	mr       r31, r3
	lbz      r0, sMapRoomFinal__Q24Game12BaseHIOParms@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801BA364
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	li       r0, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r0, 0
	stw      r4, 0x4c(r1)
	stw      r0, 0x58(r1)
	stw      r0, 0x50(r1)
	stw      r3, 0x54(r1)
	bne      lbl_801BA1C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)
	b        lbl_801BA338

lbl_801BA1C4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)
	b        lbl_801BA230

lbl_801BA1DC:
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA338
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)

lbl_801BA230:
	lwz      r12, 0x4c(r1)
	addi     r3, r1, 0x4c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA1DC
	b        lbl_801BA338

lbl_801BA250:
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r18, r3
	lwz      r3, 0x138(r3)
	addi     r4, r18, 0xd8
	addi     r3, r3, 0x10
	bl       clone__12MapCollisionFR7Matrixf
	stw      r3, 0xb8(r18)
	lwz      r0, 0x58(r1)
	cmplwi   r0, 0
	bne      lbl_801BA2A8
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)
	b        lbl_801BA338

lbl_801BA2A8:
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)
	b        lbl_801BA31C

lbl_801BA2C8:
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA338
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)

lbl_801BA31C:
	lwz      r12, 0x4c(r1)
	addi     r3, r1, 0x4c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA2C8

lbl_801BA338:
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x50(r1)
	cmplw    r4, r3
	bne      lbl_801BA250
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	b        lbl_801BAB44

lbl_801BA364:
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	li       r3, 0x50
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_801BA3EC
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__23Container<10Vector3<f>>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r4, "__vt__28ArrayContainer<10Vector3<f>>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__23Container<10Vector3<f>>"@l
	lis      r3, __vt__Q23Sys11VertexTable@ha
	li       r6, 0
	stw      r0, 0(r29)
	addi     r5, r4, "__vt__28ArrayContainer<10Vector3<f>>"@l
	li       r4, 1
	addi     r0, r3, __vt__Q23Sys11VertexTable@l
	stb      r6, 0x18(r29)
	lfs      f1, lbl_80519444@sda21(r2)
	stw      r5, 0(r29)
	lfs      f0, lbl_80519448@sda21(r2)
	stb      r4, 0x18(r29)
	stw      r6, 0x20(r29)
	stw      r6, 0x1c(r29)
	stw      r6, 0x24(r29)
	stw      r0, 0(r29)
	stfs     f1, 0x28(r29)
	stfs     f1, 0x2c(r29)
	stfs     f1, 0x30(r29)
	stfs     f0, 0x34(r29)
	stfs     f0, 0x38(r29)
	stfs     f0, 0x3c(r29)

lbl_801BA3EC:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801BA404
	bl       __ct__Q23Sys13TriangleTableFv
	mr       r28, r3

lbl_801BA404:
	lfs      f1, lbl_80519444@sda21(r2)
	li       r0, 0
	lfs      f0, lbl_80519448@sda21(r2)
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r0, 0
	stfs     f1, 0x5c(r1)
	li       r22, 0
	li       r23, 0
	stfs     f1, 0x60(r1)
	stfs     f1, 0x64(r1)
	stfs     f0, 0x68(r1)
	stfs     f0, 0x6c(r1)
	stfs     f0, 0x70(r1)
	stw      r4, 0x3c(r1)
	stw      r0, 0x48(r1)
	stw      r0, 0x40(r1)
	stw      r3, 0x44(r1)
	bne      lbl_801BA46C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_801BA5E8

lbl_801BA46C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_801BA4D8

lbl_801BA484:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA5E8
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_801BA4D8:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA484
	b        lbl_801BA5E8

lbl_801BA4F8:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x138(r3)
	lwz      r0, 0x48(r1)
	lwz      r3, 0x28(r3)
	cmplwi   r0, 0
	lwz      r4, 0x18(r3)
	lwz      r3, 0x1c(r3)
	lwz      r4, 0x20(r4)
	lwz      r0, 0x20(r3)
	add      r22, r22, r4
	add      r23, r23, r0
	bne      lbl_801BA558
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_801BA5E8

lbl_801BA558:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_801BA5CC

lbl_801BA578:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA5E8
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_801BA5CC:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA578

lbl_801BA5E8:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x40(r1)
	cmplw    r4, r3
	bne      lbl_801BA4F8
	mr       r3, r29
	mr       r4, r22
	lwz      r12, 0(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r23
	lwz      r12, 0(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r23, 0x38(r31)
	lwz      r0, 0x38(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x3c(r31)
	li       r18, 0
	b        lbl_801BA678

lbl_801BA654:
	addi     r3, r1, 0x74
	bl       __ct__Q23Sys8TriangleFv
	mr       r3, r28
	addi     r4, r1, 0x74
	lwz      r12, 0(r28)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r18, r18, 1

lbl_801BA678:
	cmpw     r18, r23
	blt      lbl_801BA654
	li       r0, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r0, 0
	stw      r4, 0x2c(r1)
	li       r21, 0
	li       r20, 0
	stw      r0, 0x38(r1)
	stw      r0, 0x30(r1)
	stw      r3, 0x34(r1)
	bne      lbl_801BA6C8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_801BA750

lbl_801BA6C8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_801BA734

lbl_801BA6E0:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA750
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_801BA734:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA6E0

lbl_801BA750:
	li       r23, 0
	mr       r22, r23
	b        lbl_801BA964

lbl_801BA75C:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	li       r24, 0
	lwz      r3, 0x138(r3)
	addi     r25, r30, 0xd8
	li       r18, 0
	lwz      r3, 0x28(r3)
	lwz      r26, 0x18(r3)
	lwz      r19, 0x1c(r3)
	b        lbl_801BA800

lbl_801BA794:
	lwz      r0, 0x24(r26)
	mr       r3, r25
	addi     r4, r1, 0x20
	addi     r5, r1, 8
	add      r6, r0, r18
	lfs      f0, 0(r6)
	stfs     f0, 0x20(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0x24(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x28(r1)
	bl       PSMTXMultVec
	lfs      f2, 8(r1)
	mr       r3, r29
	lfs      f1, 0xc(r1)
	addi     r4, r1, 0x14
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r21, r21, 1
	addi     r18, r18, 0xc
	addi     r24, r24, 1

lbl_801BA800:
	lwz      r0, 0x20(r26)
	cmpw     r24, r0
	blt      lbl_801BA794
	mr       r26, r23
	mr       r24, r22
	li       r18, 0
	li       r25, 0
	b        lbl_801BA898

lbl_801BA820:
	lwz      r0, 0x24(r19)
	mr       r4, r29
	lwz      r3, 0x24(r28)
	add      r5, r0, r25
	lwz      r0, 0(r5)
	add      r27, r3, r26
	mr       r3, r27
	add      r0, r0, r20
	stw      r0, 0(r27)
	lwz      r0, 4(r5)
	add      r0, r0, r20
	stw      r0, 4(r27)
	lwz      r0, 8(r5)
	add      r0, r0, r20
	stw      r0, 8(r27)
	lbz      r0, 0x5c(r5)
	stb      r0, 0x5c(r27)
	bl       makePlanes__Q23Sys8TriangleFRQ23Sys11VertexTable
	mr       r3, r27
	mr       r4, r29
	bl       createSphere__Q23Sys8TriangleFRQ23Sys11VertexTable
	lha      r0, 0x184(r30)
	addi     r18, r18, 1
	lwz      r3, 0x3c(r31)
	addi     r26, r26, 0x60
	addi     r23, r23, 0x60
	addi     r22, r22, 4
	stwx     r0, r3, r24
	addi     r24, r24, 4
	addi     r25, r25, 0x60

lbl_801BA898:
	lwz      r0, 0x20(r19)
	cmpw     r18, r0
	blt      lbl_801BA820
	lwz      r0, 0x38(r1)
	mr       r20, r21
	cmplwi   r0, 0
	bne      lbl_801BA8D4
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_801BA964

lbl_801BA8D4:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_801BA948

lbl_801BA8F4:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA964
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_801BA948:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA8F4

lbl_801BA964:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x30(r1)
	cmplw    r4, r3
	bne      lbl_801BA75C
	lfs      f0, 0x28(r29)
	li       r3, 0x1c
	lfs      f2, lbl_80519478@sda21(r2)
	stfs     f0, 0x5c(r1)
	fsubs    f1, f0, f2
	lfs      f0, 0x2c(r29)
	stfs     f0, 0x60(r1)
	fsubs    f4, f0, f2
	lfs      f0, 0x30(r29)
	stfs     f0, 0x64(r1)
	fsubs    f5, f0, f2
	lfs      f0, 0x34(r29)
	stfs     f0, 0x68(r1)
	fadds    f0, f0, f2
	lfs      f3, 0x38(r29)
	stfs     f3, 0x6c(r1)
	fadds    f6, f3, f2
	lfs      f3, 0x3c(r29)
	fadds    f2, f3, f2
	stfs     f3, 0x70(r1)
	stfs     f1, 0x5c(r1)
	stfs     f4, 0x60(r1)
	stfs     f5, 0x64(r1)
	stfs     f0, 0x68(r1)
	stfs     f6, 0x6c(r1)
	stfs     f2, 0x70(r1)
	bl       __nw__FUl
	or.      r18, r3, r3
	beq      lbl_801BAA08
	bl       __ct__5CNodeFv
	lis      r3, __vt__12MapCollision@ha
	addi     r0, r3, __vt__12MapCollision@l
	stw      r0, 0(r18)

lbl_801BAA08:
	stw      r18, 0x34(r31)
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r18, r3, r3
	beq      lbl_801BAA68
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23Sys10TriDivider@ha
	lis      r3, __vt__Q23Sys11GridDivider@ha
	addi     r0, r4, __vt__Q23Sys10TriDivider@l
	lfs      f1, lbl_80519444@sda21(r2)
	stw      r0, 0(r18)
	addi     r3, r3, __vt__Q23Sys11GridDivider@l
	lfs      f0, lbl_80519448@sda21(r2)
	li       r0, 0
	stw      r3, 0(r18)
	stfs     f1, 0x2c(r18)
	stfs     f1, 0x30(r18)
	stfs     f1, 0x34(r18)
	stfs     f0, 0x38(r18)
	stfs     f0, 0x3c(r18)
	stfs     f0, 0x40(r18)
	stw      r0, 0x28(r18)
	stw      r0, 0x24(r18)
	stw      r0, 0x20(r18)

lbl_801BAA68:
	lwz      r3, 0x34(r31)
	lis      r0, 0x4330
	stw      r0, 0xe0(r1)
	li       r5, 0x30
	lfd      f3, lbl_80519470@sda21(r2)
	li       r6, 0x30
	stw      r18, 0x18(r3)
	lfs      f2, lbl_8051947C@sda21(r2)
	lfs      f4, 0x68(r1)
	lfs      f0, 0x5c(r1)
	lfs      f1, 0x70(r1)
	fsubs    f4, f4, f0
	lfs      f0, 0x64(r1)
	stw      r0, 0xf8(r1)
	fsubs    f0, f1, f0
	fabs     f1, f4
	fabs     f0, f0
	frsp     f1, f1
	frsp     f0, f0
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f1, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	stfd     f0, 0xf0(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xe4(r1)
	lwz      r0, 0xf4(r1)
	lfd      f0, 0xe0(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xfc(r1)
	fsubs    f1, f0, f3
	lfd      f0, 0xf8(r1)
	fmuls    f1, f1, f2
	fsubs    f0, f0, f3
	fctiwz   f1, f1
	fmuls    f0, f0, f2
	stfd     f1, 0xe8(r1)
	fctiwz   f0, f0
	lwz      r0, 0xec(r1)
	stfd     f0, 0x100(r1)
	cmpwi    r0, 0x30
	lwz      r3, 0x104(r1)
	bge      lbl_801BAB18
	mr       r5, r0

lbl_801BAB18:
	cmpwi    r3, 0x30
	bge      lbl_801BAB24
	mr       r6, r3

lbl_801BAB24:
	lwz      r3, 0x34(r31)
	mr       r7, r29
	mr       r8, r28
	addi     r4, r1, 0x5c
	lwz      r3, 0x18(r3)
	bl
create__Q23Sys11GridDividerFR8BoundBoxiiPQ23Sys11VertexTablePQ23Sys13TriangleTable
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv

lbl_801BAB44:
	lmw      r18, 0x108(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801BAB58
 * Size:	0000B8
 */
void addOne__Q23Sys11VertexTableFR10Vector3f(void)
{
	/*
	lwz      r7, 0x1c(r3)
	lwz      r0, 0x20(r3)
	cmpw     r7, r0
	bge      lbl_801BAB94
	lwz      r6, 0x24(r3)
	addi     r5, r7, 1
	mulli    r0, r7, 0xc
	stw      r5, 0x1c(r3)
	lfs      f0, 0(r4)
	add      r5, r6, r0
	stfs     f0, 0(r5)
	lfs      f0, 4(r4)
	stfs     f0, 4(r5)
	lfs      f0, 8(r4)
	stfs     f0, 8(r5)

lbl_801BAB94:
	lfs      f1, 0(r4)
	lfs      f0, 0x28(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_801BABA8
	stfs     f1, 0x28(r3)

lbl_801BABA8:
	lfs      f1, 4(r4)
	lfs      f0, 0x2c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_801BABBC
	stfs     f1, 0x2c(r3)

lbl_801BABBC:
	lfs      f1, 8(r4)
	lfs      f0, 0x30(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_801BABD0
	stfs     f1, 0x30(r3)

lbl_801BABD0:
	lfs      f1, 0(r4)
	lfs      f0, 0x34(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_801BABE4
	stfs     f1, 0x34(r3)

lbl_801BABE4:
	lfs      f1, 4(r4)
	lfs      f0, 0x38(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_801BABF8
	stfs     f1, 0x38(r3)

lbl_801BABF8:
	lfs      f1, 8(r4)
	lfs      f0, 0x3c(r3)
	fcmpo    cr0, f1, f0
	blelr
	stfs     f1, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BAC10
 * Size:	0000E8
 */
void ArrayContainer<Sys::Triangle>::addOne(Sys::Triangle&)
{
	/*
	lwz      r7, 0x1c(r3)
	lwz      r0, 0x20(r3)
	cmpw     r7, r0
	bgelr
	lwz      r6, 0x24(r3)
	addi     r5, r7, 1
	mulli    r0, r7, 0x60
	stw      r5, 0x1c(r3)
	lwz      r3, 0(r4)
	add      r5, r6, r0
	lwz      r0, 4(r4)
	stw      r3, 0(r5)
	stw      r0, 4(r5)
	lwz      r0, 8(r4)
	stw      r0, 8(r5)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r5)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 0x18(r4)
	stfs     f0, 0x18(r5)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x1c(r5)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x20(r5)
	lfs      f0, 0x24(r4)
	stfs     f0, 0x24(r5)
	lfs      f0, 0x28(r4)
	stfs     f0, 0x28(r5)
	lfs      f0, 0x2c(r4)
	stfs     f0, 0x2c(r5)
	lfs      f0, 0x30(r4)
	stfs     f0, 0x30(r5)
	lfs      f0, 0x34(r4)
	stfs     f0, 0x34(r5)
	lfs      f0, 0x38(r4)
	stfs     f0, 0x38(r5)
	lfs      f0, 0x3c(r4)
	stfs     f0, 0x3c(r5)
	lfs      f0, 0x40(r4)
	stfs     f0, 0x40(r5)
	lfs      f0, 0x44(r4)
	stfs     f0, 0x44(r5)
	lfs      f0, 0x48(r4)
	stfs     f0, 0x48(r5)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x4c(r5)
	lfs      f0, 0x50(r4)
	stfs     f0, 0x50(r5)
	lfs      f0, 0x54(r4)
	stfs     f0, 0x54(r5)
	lfs      f0, 0x58(r4)
	stfs     f0, 0x58(r5)
	lbz      r0, 0x5c(r4)
	stb      r0, 0x5c(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BACF8
 * Size:	000068
 */
void ArrayContainer<Sys::Triangle>::alloc(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x60
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys8TriangleFv@ha
	mr       r7, r31
	addi     r4, r4, __ct__Q23Sys8TriangleFv@l
	li       r5, 0
	li       r6, 0x60
	bl       __construct_new_array
	stw      r3, 0x24(r30)
	li       r0, 0
	stw      r31, 0x20(r30)
	stw      r0, 0x1c(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801BAD60
 * Size:	000328
 */
void RoomMapMgr::traceMove_new(Game::MoveInfo&, float)
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
	stmw     r20, 0x50(r1)
	mr       r21, r4
	mr       r20, r3
	lwz      r25, 4(r4)
	lwz      r26, 0(r4)
	lfs      f0, 0(r25)
	lfs      f2, 4(r25)
	mr       r4, r26
	fmuls    f0, f0, f1
	lfs      f26, 0(r26)
	lfs      f3, 8(r25)
	fmuls    f2, f2, f1
	lfs      f27, 4(r26)
	fadds    f0, f26, f0
	lfs      f28, 8(r26)
	fmuls    f1, f3, f1
	fadds    f2, f27, f2
	stfs     f26, 8(r1)
	stfs     f0, 0(r26)
	fadds    f0, f28, f1
	stfs     f2, 4(r26)
	stfs     f0, 8(r26)
	lfs      f1, 4(r26)
	lfs      f2, 8(r26)
	lfs      f0, 0(r26)
	stfs     f27, 0xc(r1)
	stfs     f0, 0(r26)
	stfs     f1, 4(r26)
	stfs     f2, 8(r26)
	lwz      r3, 0x34(r3)
	stfs     f28, 0x10(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r20)
	addi     r29, r1, 0x44
	addi     r28, r1, 0x34
	mr       r24, r3
	lwz      r4, 0x18(r4)
	lwz      r23, 0x18(r4)
	b        lbl_801BB038

lbl_801BAE48:
	li       r22, 0
	li       r30, 0
	b        lbl_801BB028

lbl_801BAE54:
	lwz      r3, 0x34(r20)
	li       r0, 0
	lwz      r4, 0x24(r24)
	lwz      r3, 0x18(r3)
	lwzx     r27, r4, r30
	lwz      r4, 0x1c(r3)
	mulli    r3, r27, 0x60
	lwz      r4, 0x24(r4)
	stb      r0, 0x30(r1)
	add      r31, r4, r3
	stfs     f26, 0x14(r1)
	stfs     f27, 0x18(r1)
	stfs     f28, 0x1c(r1)
	lfs      f0, 0(r26)
	stfs     f0, 0x20(r1)
	lfs      f0, 4(r26)
	stfs     f0, 0x24(r1)
	lfs      f0, 8(r26)
	stfs     f0, 0x28(r1)
	lfs      f0, 0xc(r26)
	stfs     f0, 0x2c(r1)
	lbz      r0, 0x19(r21)
	cmplwi   r0, 0
	beq      lbl_801BAEBC
	li       r0, 1
	stb      r0, 0x30(r1)

lbl_801BAEBC:
	mr       r3, r31
	mr       r4, r23
	addi     r5, r1, 0x14
	bl
intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ33Sys8Triangle11SphereSweep
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BB018
	lwz      r3, 0x3c(r20)
	slwi     r0, r27, 2
	lwzx     r0, r3, r0
	stw      r0, 0x98(r21)
	lfs      f1, 0x48(r1)
	lfs      f0, 0x4c(r1)
	stfs     f1, 0x48(r1)
	lfs      f31, 0(r28)
	stfs     f0, 0x4c(r1)
	lfs      f30, 0x38(r1)
	lwz      r3, 0x10(r21)
	lfs      f29, 0x3c(r1)
	cmplwi   r3, 0
	beq      lbl_801BAF24
	lwz      r12, 0(r3)
	mr       r4, r29
	mr       r5, r28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801BAF24:
	lfs      f1, 0x38(r1)
	lfs      f0, 0x30(r21)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_801BAF58
	stw      r31, 0x44(r21)
	lfs      f0, 0(r28)
	stfs     f0, 0x50(r21)
	lfs      f0, 0x38(r1)
	stfs     f0, 0x54(r21)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x58(r21)
	b        lbl_801BAF8C

lbl_801BAF58:
	fabs     f1, f1
	lfs      f0, 0x2c(r21)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_801BAF8C
	stw      r31, 0x48(r21)
	lfs      f0, 0(r28)
	stfs     f0, 0x5c(r21)
	lfs      f0, 0x38(r1)
	stfs     f0, 0x60(r21)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x64(r21)

lbl_801BAF8C:
	lfs      f4, 0x38(r1)
	lfs      f7, 4(r25)
	lfs      f5, 0(r28)
	fmuls    f0, f4, f7
	lfs      f8, 0(r25)
	lfs      f3, 0x3c(r1)
	lfs      f6, 8(r25)
	fmadds   f2, f5, f8, f0
	lfs      f1, lbl_80519458@sda21(r2)
	lfs      f0, 8(r21)
	fmadds   f2, f3, f6, f2
	fadds    f0, f1, f0
	fmuls    f2, f0, f2
	fmuls    f1, f5, f2
	fmuls    f0, f4, f2
	fmuls    f3, f3, f2
	fsubs    f2, f8, f1
	fsubs    f1, f7, f0
	fsubs    f0, f6, f3
	stfs     f2, 0(r25)
	stfs     f1, 4(r25)
	stfs     f0, 8(r25)
	lfs      f4, 0x40(r1)
	lfs      f1, 0(r26)
	fmuls    f0, f31, f4
	lfs      f3, 4(r26)
	fmuls    f2, f30, f4
	lfs      f5, 8(r26)
	fmuls    f4, f29, f4
	fadds    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f2, f5, f4
	stfs     f0, 0(r26)
	stfs     f1, 4(r26)
	stfs     f2, 8(r26)

lbl_801BB018:
	li       r0, 0
	addi     r22, r22, 1
	stb      r0, debug__Q23Sys8Triangle@sda21(r13)
	addi     r30, r30, 4

lbl_801BB028:
	lwz      r0, 0x1c(r24)
	cmpw     r22, r0
	blt      lbl_801BAE54
	lwz      r24, 4(r24)

lbl_801BB038:
	cmplwi   r24, 0
	bne      lbl_801BAE48
	li       r3, 0
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
	lmw      r20, 0x50(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BB088
 * Size:	000740
 */
void RoomMapMgr::traceMove_original(Game::MoveInfo&, float)
{
	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	lis      r6, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	li       r5, 0
	stw      r0, 0x154(r1)
	addi     r6, r6, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r0, r3, 0xac
	stmw     r14, 0x108(r1)
	mr       r15, r4
	li       r20, 0
	stw      r6, 0x38(r1)
	stw      r5, 0x44(r1)
	stw      r5, 0x3c(r1)
	stw      r0, 0x40(r1)
	lwz      r0, 4(r4)
	lwz      r19, 0(r4)
	mr       r3, r0
	stw      r0, 0xf4(r1)
	lfs      f0, 0(r3)
	lfs      f3, 4(r3)
	fmuls    f0, f0, f1
	lfs      f2, 0(r19)
	lfs      f5, 8(r3)
	fmuls    f3, f3, f1
	lfs      f4, 4(r19)
	fadds    f0, f2, f0
	fmuls    f1, f5, f1
	lfs      f5, 8(r19)
	fadds    f2, f4, f3
	stfs     f0, 0(r19)
	fadds    f1, f5, f1
	stfs     f2, 4(r19)
	stfs     f1, 8(r19)
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_801BB134
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_801BB1C0

lbl_801BB134:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_801BB1A4

lbl_801BB150:
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
	bne      lbl_801BB1C0
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_801BB1A4:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BB150

lbl_801BB1C0:
	addi     r0, r1, 0x68
	stw      r0, 0xf8(r1)
	addi     r0, r1, 0x88
	stw      r0, 0xfc(r1)
	addi     r0, r1, 0x48
	lwz      r14, 0xf8(r1)
	mr       r21, r0
	stw      r0, 0x100(r1)
	lwz      r22, 0xfc(r1)
	b        lbl_801BB5AC

lbl_801BB1E8:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lfs      f0, 8(r19)
	lfs      f1, 0x148(r3)
	lfs      f3, 0x140(r3)
	fsubs    f4, f1, f0
	lfs      f0, 0(r19)
	lfs      f2, 0x14c(r3)
	lfs      f1, 0xc(r19)
	fsubs    f3, f3, f0
	fmuls    f0, f4, f4
	fadds    f2, f2, f1
	fmadds   f1, f3, f3, f0
	fmuls    f0, f2, f2
	fcmpo    cr0, f1, f0
	bgt      lbl_801BB4F0
	lwz      r0, 0x138(r31)
	mr       r4, r19
	addi     r3, r31, 0x108
	addi     r5, r1, 0x20
	stw      r0, 0xf0(r1)
	bl       PSMTXMultVec
	lfs      f1, 0x24(r1)
	mr       r4, r19
	lfs      f2, 0x28(r1)
	lfs      f0, 0x20(r1)
	lwz      r3, 0xf0(r1)
	stfs     f0, 0(r19)
	stfs     f1, 4(r19)
	stfs     f2, 8(r19)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r25, r14
	mr       r24, r22
	mr       r18, r3
	mr       r23, r21
	b        lbl_801BB4B8

lbl_801BB298:
	lwz      r3, 0xf0(r1)
	mr       r28, r25
	mr       r27, r24
	mr       r26, r23
	lwz      r3, 0x28(r3)
	li       r16, 0
	li       r29, 0
	lwz      r17, 0x18(r3)
	b        lbl_801BB4A8

lbl_801BB2BC:
	lwz      r3, 0xf0(r1)
	lwz      r4, 0x24(r18)
	lwz      r5, 0x28(r3)
	lwzx     r3, r4, r29
	lwz      r4, 0x1c(r5)
	lbz      r0, 0x19(r15)
	mulli    r3, r3, 0x60
	lwz      r4, 0x24(r4)
	cmplwi   r0, 0
	add      r30, r4, r3
	beq      lbl_801BB300
	mr       r3, r30
	mr       r4, r17
	mr       r5, r19
	addi     r6, r15, 0x84
	bl
"intersectHard__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<f>"
	b        lbl_801BB314

lbl_801BB300:
	mr       r3, r30
	mr       r4, r17
	mr       r5, r19
	addi     r6, r15, 0x84
	bl
"intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<f>"

lbl_801BB314:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BB498
	addi     r3, r31, 0xd8
	addi     r4, r15, 0x84
	addi     r5, r1, 0x14
	bl       PSMTXMultVec
	lfs      f1, 0x18(r1)
	lfs      f2, 0x1c(r1)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x84(r15)
	stfs     f1, 0x88(r15)
	stfs     f2, 0x8c(r15)
	lfs      f8, 0xc(r30)
	stfs     f8, 0x2c(r1)
	lfs      f7, 0x10(r30)
	stfs     f7, 0x30(r1)
	lfs      f6, 0x14(r30)
	stfs     f6, 0x34(r1)
	lfs      f2, 0x118(r31)
	lfs      f1, 0x11c(r31)
	lfs      f0, 0x120(r31)
	fmuls    f4, f7, f2
	lfs      f5, 0x108(r31)
	fmuls    f2, f7, f1
	lfs      f3, 0x10c(r31)
	fmuls    f0, f7, f0
	lfs      f1, 0x110(r31)
	fmadds   f4, f8, f5, f4
	lfs      f5, 0x128(r31)
	fmadds   f2, f8, f3, f2
	lfs      f3, 0x12c(r31)
	fmadds   f0, f8, f1, f0
	lfs      f1, 0x130(r31)
	fmadds   f4, f6, f5, f4
	fmadds   f2, f6, f3, f2
	fmadds   f0, f6, f1, f0
	stfs     f4, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x10(r15)
	cmplwi   r3, 0
	beq      lbl_801BB3D4
	lwz      r12, 0(r3)
	addi     r4, r15, 0x84
	addi     r5, r1, 0x2c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801BB3D4:
	cmpwi    r20, 8
	bge      lbl_801BB498
	blt      lbl_801BB3FC
	lis      r3, lbl_8047FCF4@ha
	lis      r5, lbl_8047FEEC@ha
	addi     r3, r3, lbl_8047FCF4@l
	li       r4, 0xb28
	addi     r5, r5, lbl_8047FEEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801BB3FC:
	lfs      f1, 4(r19)
	li       r0, 1
	lfs      f0, 0x10(r30)
	addi     r25, r25, 4
	lfs      f9, 0x2c(r1)
	addi     r24, r24, 0xc
	fmuls    f0, f1, f0
	lfs      f3, 0(r19)
	lfs      f2, 0xc(r30)
	addi     r23, r23, 4
	lfs      f8, 0x30(r1)
	addi     r14, r14, 4
	lfs      f7, 0x34(r1)
	fmadds   f0, f3, f2, f0
	lfs      f6, 0xc(r19)
	addi     r22, r22, 0xc
	lfs      f5, 8(r19)
	addi     r21, r21, 4
	lfs      f4, 0x14(r30)
	lfs      f1, 0x18(r30)
	addi     r20, r20, 1
	fmadds   f2, f5, f4, f0
	stfs     f9, 0(r27)
	stb      r0, 0x74(r15)
	fsubs    f1, f2, f1
	lfs      f0, 0x2c(r1)
	stfs     f8, 4(r27)
	fsubs    f1, f6, f1
	stfs     f0, 0x78(r15)
	lfs      f0, 0x30(r1)
	stw      r30, 0(r28)
	addi     r28, r28, 4
	stfs     f0, 0x7c(r15)
	lfs      f0, 0x34(r1)
	stfs     f7, 8(r27)
	addi     r27, r27, 0xc
	stfs     f1, 0(r26)
	addi     r26, r26, 4
	stfs     f0, 0x80(r15)

lbl_801BB498:
	li       r0, 0
	addi     r16, r16, 1
	stb      r0, debug__Q23Sys8Triangle@sda21(r13)
	addi     r29, r29, 4

lbl_801BB4A8:
	lwz      r0, 0x1c(r18)
	cmpw     r16, r0
	blt      lbl_801BB2BC
	lwz      r18, 4(r18)

lbl_801BB4B8:
	cmplwi   r18, 0
	beq      lbl_801BB4C8
	cmpwi    r20, 8
	blt      lbl_801BB298

lbl_801BB4C8:
	mr       r4, r19
	addi     r3, r31, 0xd8
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0(r19)
	stfs     f1, 4(r19)
	stfs     f2, 8(r19)

lbl_801BB4F0:
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_801BB51C
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_801BB5AC

lbl_801BB51C:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_801BB590

lbl_801BB53C:
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
	bne      lbl_801BB5AC
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_801BB590:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BB53C

lbl_801BB5AC:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_801BB1E8
	cmpwi    r20, 0
	bne      lbl_801BB5DC
	li       r3, 0
	b        lbl_801BB7B4

lbl_801BB5DC:
	lfs      f5, lbl_80519440@sda21(r2)
	li       r4, 0
	fmr      f6, f5
	fmr      f7, f5
	fmr      f2, f5
	fmr      f4, f5
	mtctr    r20
	ble      lbl_801BB67C
	lfs      f0, lbl_80519480@sda21(r2)

lbl_801BB600:
	lwz      r3, 0x100(r1)
	lfs      f1, 0(r3)
	fcmpo    cr0, f1, f4
	blt      lbl_801BB654
	lwz      r3, 0xfc(r1)
	fadds    f2, f2, f1
	addi     r4, r4, 1
	lfs      f8, 4(r3)
	lfs      f3, 0(r3)
	lfs      f1, 8(r3)
	fadds    f6, f6, f8
	fcmpo    cr0, f8, f0
	fadds    f5, f5, f3
	fadds    f7, f7, f1
	ble      lbl_801BB654
	lwz      r3, 0xf8(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x44(r15)
	stfs     f3, 0x50(r15)
	stfs     f8, 0x54(r15)
	stfs     f1, 0x58(r15)

lbl_801BB654:
	lwz      r3, 0x100(r1)
	addi     r3, r3, 4
	stw      r3, 0x100(r1)
	lwz      r3, 0xfc(r1)
	addi     r3, r3, 0xc
	stw      r3, 0xfc(r1)
	lwz      r3, 0xf8(r1)
	addi     r3, r3, 4
	stw      r3, 0xf8(r1)
	bdnz     lbl_801BB600

lbl_801BB67C:
	cmpwi    r4, 0
	bne      lbl_801BB68C
	li       r3, 0
	b        lbl_801BB7B4

lbl_801BB68C:
	xoris    r3, r4, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xec(r1)
	lfd      f1, lbl_80519470@sda21(r2)
	stw      r0, 0xe8(r1)
	lfs      f4, lbl_80519458@sda21(r2)
	lfd      f0, 0xe8(r1)
	lfs      f3, lbl_80519440@sda21(r2)
	fsubs    f0, f0, f1
	fdivs    f4, f4, f0
	fmuls    f0, f6, f4
	fmuls    f1, f7, f4
	fmuls    f11, f5, f4
	fmuls    f4, f0, f0
	fmuls    f5, f1, f1
	fmadds   f4, f11, f11, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_801BB6E8
	ble      lbl_801BB6EC
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_801BB6EC

lbl_801BB6E8:
	fmr      f4, f3

lbl_801BB6EC:
	lfs      f3, lbl_80519440@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_801BB70C
	lfs      f3, lbl_80519458@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f11, f11, f3
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3

lbl_801BB70C:
	xoris    r4, r4, 0x8000
	lis      r0, 0x4330
	stw      r4, 0xec(r1)
	lwz      r3, 0xf4(r1)
	stw      r0, 0xe8(r1)
	lfd      f6, lbl_80519470@sda21(r2)
	lfd      f4, 0xe8(r1)
	lfs      f9, 4(r3)
	fsubs    f6, f4, f6
	lfs      f10, 0(r3)
	fmuls    f3, f0, f9
	lwz      r4, 0xf4(r1)
	lfs      f4, lbl_80519458@sda21(r2)
	li       r3, 0
	fdivs    f2, f2, f6
	lfs      f8, 8(r4)
	fmadds   f5, f11, f10, f3
	lfs      f3, 8(r15)
	fmadds   f7, f1, f8, f5
	fadds    f5, f4, f3
	fmuls    f4, f0, f2
	fmuls    f3, f11, f2
	fmuls    f6, f5, f7
	fmuls    f2, f1, f2
	fmuls    f5, f11, f6
	fmuls    f0, f0, f6
	fmuls    f6, f1, f6
	fsubs    f5, f10, f5
	fsubs    f1, f9, f0
	fsubs    f0, f8, f6
	stfs     f5, 0(r4)
	stfs     f1, 4(r4)
	stfs     f0, 8(r4)
	lfs      f0, 0(r19)
	lfs      f1, 4(r19)
	lfs      f5, 8(r19)
	fadds    f0, f0, f3
	fadds    f1, f1, f4
	fadds    f2, f5, f2
	stfs     f0, 0(r19)
	stfs     f1, 4(r19)
	stfs     f2, 8(r19)

lbl_801BB7B4:
	lmw      r14, 0x108(r1)
	lwz      r0, 0x154(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BB7C8
 * Size:	0004F0
 */
void RoomMapMgr::findRayIntersection(Sys::RayIntersectInfo&)
{
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stfd     f25, 0xf0(r1)
	psq_st   f25, 248(r1), 0, qr0
	stfd     f24, 0xe0(r1)
	psq_st   f24, 232(r1), 0, qr0
	stfd     f23, 0xd0(r1)
	psq_st   f23, 216(r1), 0, qr0
	stfd     f22, 0xc0(r1)
	psq_st   f22, 200(r1), 0, qr0
	stfd     f21, 0xb0(r1)
	psq_st   f21, 184(r1), 0, qr0
	stmw     r24, 0x90(r1)
	lis      r6, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	li       r5, 0
	addi     r6, r6, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r0, r3, 0xac
	stw      r6, 0x60(r1)
	mr       r30, r4
	lfs      f4, lbl_8051945C@sda21(r2)
	stw      r5, 0x6c(r1)
	lfs      f0, lbl_80519440@sda21(r2)
	stw      r5, 0x64(r1)
	stw      r0, 0x68(r1)
	lfs      f2, 0(r4)
	stfs     f2, 0x54(r1)
	lfs      f1, 4(r4)
	stfs     f1, 0x58(r1)
	lfs      f3, 8(r4)
	stfs     f3, 0x5c(r1)
	lfs      f1, 0xc(r4)
	stfs     f1, 0x48(r1)
	fadds    f1, f2, f1
	lfs      f2, 0x10(r4)
	fmuls    f30, f1, f4
	stfs     f2, 0x4c(r1)
	lfs      f1, 0x14(r4)
	stfs     f1, 0x50(r1)
	fadds    f3, f3, f1
	lfs      f2, 4(r4)
	lfs      f1, 0x10(r4)
	fmuls    f29, f3, f4
	lfs      f4, 0(r4)
	fsubs    f5, f2, f1
	lfs      f3, 0xc(r4)
	lfs      f2, 8(r4)
	lfs      f1, 0x14(r4)
	fsubs    f3, f4, f3
	fmuls    f4, f5, f5
	fsubs    f2, f2, f1
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801BB8E8
	ble      lbl_801BB8EC
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801BB8EC

lbl_801BB8E8:
	fmr      f31, f0

lbl_801BB8EC:
	lwz      r0, 0x6c(r1)
	li       r31, 0
	lfs      f22, lbl_80519484@sda21(r2)
	cmplwi   r0, 0
	bne      lbl_801BB91C
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_801BBC1C

lbl_801BB91C:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_801BB98C

lbl_801BB938:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BBC1C
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)

lbl_801BB98C:
	lwz      r12, 0x60(r1)
	addi     r3, r1, 0x60
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BB938
	b        lbl_801BBC1C

lbl_801BB9AC:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	lfs      f0, 0x148(r3)
	lfs      f1, 0x140(r3)
	fsubs    f3, f29, f0
	lfs      f0, 0x14c(r3)
	fsubs    f2, f30, f1
	fadds    f0, f0, f31
	fmuls    f1, f3, f3
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_801BBB60
	lwz      r26, 0x138(r29)
	addi     r3, r29, 0x108
	addi     r4, r1, 0x54
	addi     r5, r1, 0x20
	bl       PSMTXMultVec
	lfs      f28, 0x20(r1)
	addi     r3, r29, 0x108
	lfs      f27, 0x24(r1)
	addi     r4, r1, 0x48
	lfs      f26, 0x28(r1)
	addi     r5, r1, 0x14
	bl       PSMTXMultVec
	lfs      f5, 0x18(r1)
	addi     r4, r1, 0x38
	lfs      f6, 0x1c(r1)
	lfs      f4, 0x14(r1)
	fadds    f1, f27, f5
	lfs      f2, lbl_8051945C@sda21(r2)
	fadds    f0, f26, f6
	fadds    f3, f28, f4
	stfs     f28, 0x70(r1)
	fmuls    f1, f1, f2
	fmuls    f0, f0, f2
	stfs     f27, 0x74(r1)
	fmuls    f2, f3, f2
	stfs     f26, 0x78(r1)
	stfs     f4, 0x7c(r1)
	stfs     f5, 0x80(r1)
	stfs     f6, 0x84(r1)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	stfs     f31, 0x44(r1)
	lwz      r3, 0x28(r26)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r25, r3
	b        lbl_801BBB58

lbl_801BBA90:
	li       r24, 0
	li       r27, 0
	b        lbl_801BBB48

lbl_801BBA9C:
	lwz      r4, 0x24(r25)
	mr       r3, r30
	lwz      r5, 0x28(r26)
	lwzx     r0, r4, r27
	lwz      r4, 0x1c(r5)
	mulli    r0, r0, 0x60
	lwz      r4, 0x24(r4)
	add      r28, r4, r0
	mr       r4, r28
	bl       condition__Q23Sys16RayIntersectInfoFRQ23Sys8Triangle
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BBB40
	lfs      f1, 0x18(r30)
	mr       r3, r28
	addi     r4, r1, 0x70
	addi     r5, r1, 0x2c
	bl       "intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BBB40
	lfs      f1, 0x30(r1)
	li       r31, 1
	lfs      f0, 0x2c(r1)
	fsubs    f3, f1, f27
	lfs      f1, 0x34(r1)
	fsubs    f2, f0, f28
	fsubs    f1, f1, f26
	fmuls    f0, f3, f3
	fmadds   f0, f2, f2, f0
	fmadds   f21, f1, f1, f0
	fcmpo    cr0, f21, f22
	bge      lbl_801BBB40
	addi     r3, r29, 0xd8
	addi     r4, r1, 0x2c
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f25, 8(r1)
	fmr      f22, f21
	lfs      f24, 0xc(r1)
	lfs      f23, 0x10(r1)
	lfs      f0, 0x10(r28)
	stfs     f0, 0x48(r30)

lbl_801BBB40:
	addi     r27, r27, 4
	addi     r24, r24, 1

lbl_801BBB48:
	lwz      r0, 0x1c(r25)
	cmpw     r24, r0
	blt      lbl_801BBA9C
	lwz      r25, 4(r25)

lbl_801BBB58:
	cmplwi   r25, 0
	bne      lbl_801BBA90

lbl_801BBB60:
	lwz      r0, 0x6c(r1)
	cmplwi   r0, 0
	bne      lbl_801BBB8C
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_801BBC1C

lbl_801BBB8C:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_801BBC00

lbl_801BBBAC:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BBC1C
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)

lbl_801BBC00:
	lwz      r12, 0x60(r1)
	addi     r3, r1, 0x60
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BBBAC

lbl_801BBC1C:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x64(r1)
	cmplw    r4, r3
	bne      lbl_801BB9AC
	stfs     f25, 0x34(r30)
	mr       r3, r31
	stfs     f24, 0x38(r30)
	stfs     f23, 0x3c(r30)
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	psq_l    f25, 248(r1), 0, qr0
	lfd      f25, 0xf0(r1)
	psq_l    f24, 232(r1), 0, qr0
	lfd      f24, 0xe0(r1)
	psq_l    f23, 216(r1), 0, qr0
	lfd      f23, 0xd0(r1)
	psq_l    f22, 200(r1), 0, qr0
	lfd      f22, 0xc0(r1)
	psq_l    f21, 184(r1), 0, qr0
	lfd      f21, 0xb0(r1)
	lmw      r24, 0x90(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801BBCB8
 * Size:	00008C
 */
void getMinY__Q24Game10RoomMapMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f1, lbl_80519440@sda21(r2)
	li       r5, 0
	stw      r0, 0x44(r1)
	li       r0, 1
	lfs      f3, lbl_80519450@sda21(r2)
	lfs      f2, lbl_80519454@sda21(r2)
	lfs      f0, lbl_80519458@sda21(r2)
	stw      r5, 0x1c(r1)
	stfs     f3, 0x20(r1)
	stfs     f2, 0x24(r1)
	stw      r5, 0x18(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stb      r0, 0x14(r1)
	stb      r5, 0x15(r1)
	lfs      f0, 0(r4)
	stfs     f0, 8(r1)
	lfs      f0, 4(r4)
	stfs     f0, 0xc(r1)
	lfs      f0, 8(r4)
	addi     r4, r1, 8
	stfs     f0, 0x10(r1)
	stb      r5, 0x14(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x44(r1)
	lfs      f1, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801BBD44
 * Size:	000770
 */
void RoomMapMgr::createTriangles(Sys::CreateTriangleArg&)
{
	/*
	stwu     r1, -0x2cd0(r1)
	mflr     r0
	stw      r0, 0x2cd4(r1)
	li       r0, 0x2cc8
	stfd     f31, 0x2cc0(r1)
	psq_stx  f31, r1, r0, 0, qr0
	stmw     r14, 0x2c78(r1)
	mr       r15, r4
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	lfs      f31, 0xc(r15)
	mr       r14, r3
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	addi     r3, r1, 0x864
	li       r5, 0
	li       r6, 0xc
	li       r7, 0x300
	bl       __construct_array
	li       r0, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r14, 0xac
	cmplwi   r0, 0
	stw      r4, 0x30(r1)
	li       r20, 0
	stw      r0, 0x3c(r1)
	stw      r0, 0x34(r1)
	stw      r3, 0x38(r1)
	bne      lbl_801BBDCC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BBE54

lbl_801BBDCC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BBE38

lbl_801BBDE4:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BBE54
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_801BBE38:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BBDE4

lbl_801BBE54:
	addi     r0, r1, 0x464
	addi     r14, r1, 0x64
	stw      r0, 0x2c68(r1)
	li       r0, 0
	stw      r0, 0x2c6c(r1)
	b        lbl_801BC294

lbl_801BBE6C:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lfs      f1, 8(r15)
	lfs      f2, 0x198(r3)
	lfs      f0, 0x19c(r3)
	fsubs    f3, f2, f1
	lfs      f2, 0x190(r3)
	lfs      f1, 0(r15)
	fadds    f0, f0, f31
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_801BC1D8
	lwz      r0, 0x138(r31)
	mr       r4, r15
	addi     r3, r31, 0x108
	addi     r5, r1, 0x14
	stw      r0, 0x2c64(r1)
	bl       PSMTXMultVec
	lfs      f2, 0x14(r1)
	addi     r4, r1, 0x20
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x20(r1)
	lwz      r3, 0x2c64(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f31, 0x2c(r1)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r24, 0x2c6c(r1)
	mr       r19, r3
	lwz      r23, 0x2c68(r1)
	mr       r22, r14
	b        lbl_801BC1D0

lbl_801BBF1C:
	mr       r27, r24
	mr       r26, r23
	mr       r25, r22
	li       r18, 0
	li       r28, 0
	b        lbl_801BC1C0

lbl_801BBF34:
	lwz      r3, 0x2c64(r1)
	addi     r5, r1, 0x20
	lwz      r4, 0x24(r19)
	lwz      r6, 0x28(r3)
	lwzx     r0, r4, r28
	lwz      r3, 0x1c(r6)
	mulli    r0, r0, 0x60
	lwz      r17, 0x18(r6)
	lwz      r3, 0x24(r3)
	mr       r4, r17
	add      r30, r3, r0
	mr       r3, r30
	bl       intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC1B8
	addi     r21, r1, 0x40
	mr       r29, r30
	li       r16, 0

lbl_801BBF7C:
	lwz      r0, 0(r29)
	mr       r4, r21
	lwz      r6, 0x24(r17)
	addi     r3, r31, 0xd8
	mulli    r0, r0, 0xc
	addi     r5, r1, 8
	add      r6, r6, r0
	lfs      f0, 0(r6)
	stfs     f0, 0(r21)
	lfs      f0, 4(r6)
	stfs     f0, 4(r21)
	lfs      f0, 8(r6)
	stfs     f0, 8(r21)
	bl       PSMTXMultVec
	lfs      f0, 8(r1)
	addi     r16, r16, 1
	lfs      f1, 0xc(r1)
	cmpwi    r16, 3
	stfs     f0, 0(r21)
	addi     r29, r29, 4
	lfs      f0, 0x10(r1)
	stfs     f1, 4(r21)
	stfs     f0, 8(r21)
	addi     r21, r21, 0xc
	blt      lbl_801BBF7C
	addi     r3, r1, 0x464
	addi     r4, r1, 0x64
	li       r5, 0
	mtctr    r20
	cmpwi    r20, 0
	ble      lbl_801BC020

lbl_801BBFF8:
	lwz      r0, 0(r3)
	cmplw    r30, r0
	bne      lbl_801BC014
	lwz      r0, 0(r4)
	cmplw    r31, r0
	bne      lbl_801BC014
	li       r5, 1

lbl_801BC014:
	addi     r3, r3, 4
	addi     r4, r4, 4
	bdnz     lbl_801BBFF8

lbl_801BC020:
	clrlwi.  r0, r5, 0x18
	bne      lbl_801BC1B8
	cmpwi    r20, 0x100
	bge      lbl_801BC1CC
	lfs      f5, 0x10(r30)
	lfs      f1, 0xec(r31)
	lfs      f3, 0xe8(r31)
	lfs      f0, 0xf0(r31)
	fmuls    f2, f5, f1
	lfs      f6, 0xc(r30)
	fmuls    f4, f5, f3
	lfs      f3, 0xdc(r31)
	fmuls    f0, f5, f0
	lfs      f5, 0xd8(r31)
	lfs      f1, 0xe0(r31)
	fmadds   f3, f6, f3, f2
	lfs      f7, 0x14(r30)
	fmadds   f5, f6, f5, f4
	lfs      f4, 0xfc(r31)
	fmadds   f1, f6, f1, f0
	lfs      f6, 0xf8(r31)
	lfs      f2, 0x100(r31)
	fmadds   f3, f7, f4, f3
	lfs      f0, 0x14(r15)
	fmadds   f4, f7, f6, f5
	fmadds   f1, f7, f2, f1
	fcmpo    cr0, f3, f0
	ble      lbl_801BC1B8
	lfs      f0, 0x10(r15)
	mulli    r3, r27, 0xc
	addi     r4, r1, 0x864
	stw      r30, 0(r26)
	fmuls    f11, f4, f0
	lfs      f4, 0x40(r1)
	fmuls    f10, f3, f0
	lfs      f5, 0x44(r1)
	add      r4, r4, r3
	fadds    f3, f4, f11
	fmuls    f9, f1, f0
	lfs      f6, 0x48(r1)
	fadds    f7, f5, f10
	stw      r31, 0(r25)
	frsp     f2, f3
	fadds    f8, f6, f9
	lfs      f4, 0x4c(r1)
	frsp     f1, f7
	stfs     f3, 0x40(r1)
	addi     r3, r3, 0xc
	fadds    f3, f4, f11
	stfs     f2, 0(r4)
	frsp     f0, f8
	lfs      f5, 0x50(r1)
	addi     r20, r20, 1
	stfs     f7, 0x44(r1)
	fadds    f7, f5, f10
	lfs      f6, 0x54(r1)
	stfs     f1, 4(r4)
	frsp     f2, f3
	lfs      f4, 0x58(r1)
	addi     r27, r27, 3
	stfs     f8, 0x48(r1)
	fadds    f8, f6, f9
	frsp     f1, f7
	lfs      f5, 0x5c(r1)
	stfs     f0, 8(r4)
	addi     r4, r1, 0x864
	add      r4, r4, r3
	stfs     f2, 0(r4)
	frsp     f0, f8
	lfs      f6, 0x60(r1)
	stfs     f3, 0x4c(r1)
	fadds    f3, f4, f11
	addi     r3, r3, 0xc
	addi     r26, r26, 4
	stfs     f1, 4(r4)
	frsp     f2, f3
	addi     r25, r25, 4
	addi     r24, r24, 3
	stfs     f7, 0x50(r1)
	fadds    f7, f5, f10
	addi     r23, r23, 4
	stfs     f0, 8(r4)
	addi     r4, r1, 0x864
	add      r4, r4, r3
	lwz      r3, 0x2c6c(r1)
	stfs     f8, 0x54(r1)
	fadds    f8, f6, f9
	addi     r3, r3, 3
	frsp     f1, f7
	stfs     f2, 0(r4)
	addi     r22, r22, 4
	frsp     f0, f8
	stw      r3, 0x2c6c(r1)
	addi     r14, r14, 4
	lwz      r3, 0x2c68(r1)
	stfs     f1, 4(r4)
	addi     r3, r3, 4
	stfs     f3, 0x58(r1)
	stfs     f7, 0x5c(r1)
	stfs     f8, 0x60(r1)
	stfs     f0, 8(r4)
	stw      r3, 0x2c68(r1)

lbl_801BC1B8:
	addi     r28, r28, 4
	addi     r18, r18, 1

lbl_801BC1C0:
	lwz      r0, 0x1c(r19)
	cmpw     r18, r0
	blt      lbl_801BBF34

lbl_801BC1CC:
	lwz      r19, 4(r19)

lbl_801BC1D0:
	cmplwi   r19, 0
	bne      lbl_801BBF1C

lbl_801BC1D8:
	lwz      r0, 0x3c(r1)
	cmplwi   r0, 0
	bne      lbl_801BC204
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC294

lbl_801BC204:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC278

lbl_801BC224:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BC294
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_801BC278:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC224

lbl_801BC294:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r1)
	cmplw    r4, r3
	bne      lbl_801BBE6C
	cmpwi    r20, 0
	ble      lbl_801BC490
	mulli    r14, r20, 3
	mulli    r3, r14, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	mr       r7, r14
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	cmpwi    r14, 0
	stw      r3, 0x18(r15)
	li       r16, 0
	ble      lbl_801BC490
	cmpwi    r14, 8
	addi     r3, r14, -8
	ble      lbl_801BC448
	addi     r0, r3, 7
	addi     r5, r1, 0x864
	srwi     r0, r0, 3
	li       r4, 0
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_801BC448

lbl_801BC31C:
	lwz      r0, 0x18(r15)
	addi     r12, r4, 0xc
	lfs      f0, 0(r5)
	addi     r11, r4, 0x18
	add      r3, r0, r4
	addi     r10, r4, 0x24
	stfs     f0, 0(r3)
	addi     r9, r4, 0x30
	addi     r8, r4, 0x3c
	addi     r7, r4, 0x48
	lfs      f0, 4(r5)
	addi     r6, r4, 0x54
	addi     r4, r4, 0x60
	addi     r16, r16, 8
	stfs     f0, 4(r3)
	lfs      f0, 8(r5)
	stfs     f0, 8(r3)
	lwz      r0, 0x18(r15)
	lfs      f0, 0xc(r5)
	add      r12, r0, r12
	stfs     f0, 0(r12)
	lfs      f0, 0x10(r5)
	stfs     f0, 4(r12)
	lfs      f0, 0x14(r5)
	stfs     f0, 8(r12)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x18(r5)
	add      r11, r0, r11
	stfs     f0, 0(r11)
	lfs      f0, 0x1c(r5)
	stfs     f0, 4(r11)
	lfs      f0, 0x20(r5)
	stfs     f0, 8(r11)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x24(r5)
	add      r10, r0, r10
	stfs     f0, 0(r10)
	lfs      f0, 0x28(r5)
	stfs     f0, 4(r10)
	lfs      f0, 0x2c(r5)
	stfs     f0, 8(r10)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x30(r5)
	add      r9, r0, r9
	stfs     f0, 0(r9)
	lfs      f0, 0x34(r5)
	stfs     f0, 4(r9)
	lfs      f0, 0x38(r5)
	stfs     f0, 8(r9)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x3c(r5)
	add      r8, r0, r8
	stfs     f0, 0(r8)
	lfs      f0, 0x40(r5)
	stfs     f0, 4(r8)
	lfs      f0, 0x44(r5)
	stfs     f0, 8(r8)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x48(r5)
	add      r7, r0, r7
	stfs     f0, 0(r7)
	lfs      f0, 0x4c(r5)
	stfs     f0, 4(r7)
	lfs      f0, 0x50(r5)
	stfs     f0, 8(r7)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x54(r5)
	add      r6, r0, r6
	stfs     f0, 0(r6)
	lfs      f0, 0x58(r5)
	stfs     f0, 4(r6)
	lfs      f0, 0x5c(r5)
	addi     r5, r5, 0x60
	stfs     f0, 8(r6)
	bdnz     lbl_801BC31C

lbl_801BC448:
	mulli    r4, r16, 0xc
	addi     r3, r1, 0x864
	subf     r0, r16, r14
	add      r3, r3, r4
	mtctr    r0
	cmpw     r16, r14
	bge      lbl_801BC490

lbl_801BC464:
	lwz      r0, 0x18(r15)
	lfs      f0, 0(r3)
	add      r5, r0, r4
	addi     r4, r4, 0xc
	stfs     f0, 0(r5)
	lfs      f0, 4(r3)
	stfs     f0, 4(r5)
	lfs      f0, 8(r3)
	addi     r3, r3, 0xc
	stfs     f0, 8(r5)
	bdnz     lbl_801BC464

lbl_801BC490:
	stw      r20, 0x1c(r15)
	li       r0, 0x2cc8
	psq_lx   f31, r1, r0, 0, qr0
	lfd      f31, 0x2cc0(r1)
	lmw      r14, 0x2c78(r1)
	lwz      r0, 0x2cd4(r1)
	mtlr     r0
	addi     r1, r1, 0x2cd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BC4B4
 * Size:	000460
 */
void RoomMapMgr::getCurrTri(Game::CurrTriInfo&)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lfs      f0, lbl_80519488@sda21(r2)
	stw      r0, 0x64(r1)
	li       r0, 0
	cmplwi   r0, 0
	stmw     r24, 0x40(r1)
	mr       r25, r3
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	mr       r26, r4
	stfs     f0, 0x18(r4)
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r25, 0xac
	stw      r4, 0x30(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x34(r1)
	stw      r3, 0x38(r1)
	bne      lbl_801BC514
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC894

lbl_801BC514:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC580

lbl_801BC52C:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BC894
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_801BC580:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC52C
	b        lbl_801BC894

lbl_801BC5A0:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lfs      f0, 8(r26)
	lfs      f1, 0x198(r3)
	lfs      f4, 0x19c(r3)
	fsubs    f3, f1, f0
	lfs      f2, 0x190(r3)
	lfs      f1, 0(r26)
	fmuls    f0, f4, f4
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_801BC7D8
	lwz      r29, 0x138(r31)
	mr       r4, r26
	addi     r3, r31, 0x108
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f3, 8(r1)
	addi     r4, r1, 0x14
	lfs      f2, 0xc(r1)
	lfs      f1, 0x10(r1)
	lfs      f0, lbl_80519440@sda21(r2)
	stfs     f3, 0x24(r1)
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f3, 0x14(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	lwz      r3, 0x28(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	b        lbl_801BC7D0

lbl_801BC648:
	li       r27, 0
	li       r30, 0
	b        lbl_801BC7C0

lbl_801BC654:
	lwz      r3, 0x24(r28)
	addi     r4, r1, 0x24
	lwz      r5, 0x28(r29)
	lwzx     r0, r3, r30
	lwz      r3, 0x1c(r5)
	mulli    r0, r0, 0x60
	lwz      r3, 0x24(r3)
	add      r24, r3, r0
	mr       r3, r24
	bl       "insideXZ__Q23Sys8TriangleFR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC7B8
	lfs      f10, 0x28(r1)
	lfs      f0, 0x18(r26)
	fcmpo    cr0, f0, f10
	ble      lbl_801BC720
	stfs     f10, 0x18(r26)
	lbz      r0, 0xc(r26)
	cmplwi   r0, 0
	beq      lbl_801BC720
	stw      r24, 0x14(r26)
	lfs      f0, 0xc(r24)
	stfs     f0, 0x20(r26)
	lfs      f0, 0x10(r24)
	stfs     f0, 0x24(r26)
	lfs      f0, 0x14(r24)
	stfs     f0, 0x28(r26)
	lfs      f7, 0x24(r26)
	lfs      f1, 0x118(r31)
	lfs      f0, 0x11c(r31)
	fmuls    f1, f7, f1
	lfs      f8, 0x20(r26)
	lfs      f4, 0x108(r31)
	fmuls    f2, f7, f0
	lfs      f0, 0x120(r31)
	lfs      f3, 0x10c(r31)
	fmadds   f5, f8, f4, f1
	lfs      f9, 0x28(r26)
	lfs      f6, 0x128(r31)
	fmuls    f0, f7, f0
	lfs      f1, 0x110(r31)
	fmadds   f3, f8, f3, f2
	lfs      f4, 0x12c(r31)
	fmadds   f5, f9, f6, f5
	lfs      f2, 0x130(r31)
	fmadds   f0, f8, f1, f0
	fmadds   f1, f9, f4, f3
	stfs     f5, 0x20(r26)
	fmadds   f0, f9, f2, f0
	stfs     f1, 0x24(r26)
	stfs     f0, 0x28(r26)

lbl_801BC720:
	lfs      f0, 0x1c(r26)
	fcmpo    cr0, f0, f10
	bge      lbl_801BC7B8
	stfs     f10, 0x1c(r26)
	lbz      r0, 0xc(r26)
	cmplwi   r0, 0
	bne      lbl_801BC7B8
	stw      r24, 0x14(r26)
	lfs      f0, 0xc(r24)
	stfs     f0, 0x20(r26)
	lfs      f0, 0x10(r24)
	stfs     f0, 0x24(r26)
	lfs      f0, 0x14(r24)
	stfs     f0, 0x28(r26)
	lfs      f7, 0x24(r26)
	lfs      f1, 0x118(r31)
	lfs      f0, 0x11c(r31)
	fmuls    f1, f7, f1
	lfs      f8, 0x20(r26)
	lfs      f4, 0x108(r31)
	fmuls    f2, f7, f0
	lfs      f0, 0x120(r31)
	lfs      f3, 0x10c(r31)
	fmadds   f5, f8, f4, f1
	lfs      f9, 0x28(r26)
	lfs      f6, 0x128(r31)
	fmuls    f0, f7, f0
	lfs      f1, 0x110(r31)
	fmadds   f3, f8, f3, f2
	lfs      f4, 0x12c(r31)
	fmadds   f5, f9, f6, f5
	lfs      f2, 0x130(r31)
	fmadds   f0, f8, f1, f0
	fmadds   f1, f9, f4, f3
	stfs     f5, 0x20(r26)
	fmadds   f0, f9, f2, f0
	stfs     f1, 0x24(r26)
	stfs     f0, 0x28(r26)

lbl_801BC7B8:
	addi     r30, r30, 4
	addi     r27, r27, 1

lbl_801BC7C0:
	lwz      r0, 0x1c(r28)
	cmpw     r27, r0
	blt      lbl_801BC654
	lwz      r28, 4(r28)

lbl_801BC7D0:
	cmplwi   r28, 0
	bne      lbl_801BC648

lbl_801BC7D8:
	lwz      r0, 0x3c(r1)
	cmplwi   r0, 0
	bne      lbl_801BC804
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC894

lbl_801BC804:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC878

lbl_801BC824:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BC894
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_801BC878:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC824

lbl_801BC894:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r1)
	cmplw    r4, r3
	bne      lbl_801BC5A0
	lwz      r3, 0x2c(r25)
	bl       hasHiddenCollision__Q34Game4Cave9FloorInfoFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC8E8
	lfs      f1, 0x1c(r26)
	lfs      f0, lbl_80519440@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801BC8E8
	stfs     f0, 0x1c(r26)
	addi     r0, r25, 0x40
	stfs     f0, 0x18(r26)
	stw      r0, 0x14(r26)
	b        lbl_801BC900

lbl_801BC8E8:
	lwz      r0, 0x14(r26)
	cmplwi   r0, 0
	bne      lbl_801BC900
	lfs      f0, lbl_80519440@sda21(r2)
	stfs     f0, 0x18(r26)
	stfs     f0, 0x1c(r26)

lbl_801BC900:
	lmw      r24, 0x40(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BC914
 * Size:	0016B8
 */
void RoomMapMgr::makeOneRoom(float, float, float, char*, short, Game::RoomLink*, Game::ObjectLayoutInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2D0(r1)
	  mflr      r0
	  stw       r0, 0x2D4(r1)
	  stfd      f31, 0x2C0(r1)
	  psq_st    f31,0x2C8(r1),0,0
	  stfd      f30, 0x2B0(r1)
	  psq_st    f30,0x2B8(r1),0,0
	  stfd      f29, 0x2A0(r1)
	  psq_st    f29,0x2A8(r1),0,0
	  stfd      f28, 0x290(r1)
	  psq_st    f28,0x298(r1),0,0
	  stfd      f27, 0x280(r1)
	  psq_st    f27,0x288(r1),0,0
	  stmw      r20, 0x250(r1)
	  mr        r29, r3
	  lfs       f0, -0x4ED0(r2)
	  addi      r3, r29, 0xAC
	  lis       r8, 0x8048
	  lwz       r12, 0xAC(r29)
	  fmuls     f0, f0, f3
	  lfs       f3, -0x4ED4(r2)
	  fmr       f28, f1
	  lwz       r12, 0x7C(r12)
	  fmr       f27, f2
	  fmuls     f31, f3, f0
	  mr        r26, r4
	  mr        r21, r5
	  mr        r24, r6
	  mr        r20, r7
	  subi      r30, r8, 0x390
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  lis       r4, 0x804B
	  sth       r21, 0x184(r3)
	  lis       r3, 0x804B
	  subi      r23, r4, 0x5D0C
	  li        r27, 0
	  stw       r24, 0x180(r31)
	  subi      r22, r3, 0x5D48
	  stw       r20, 0xC4(r31)
	  b         .loc_0x1B8

	.loc_0xA8:
	  lwz       r3, 0xC4(r31)
	  mr        r5, r27
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r25, r3
	  sth       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stw       r23, 0x15C(r1)
	  li        r8, 0
	  li        r0, -0x1
	  li        r7, 0xFF
	  li        r6, 0x1
	  sth       r3, 0x8(r1)
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x15C
	  stw       r22, 0x15C(r1)
	  addi      r5, r1, 0x8
	  stb       r8, 0x178(r1)
	  sth       r8, 0x170(r1)
	  stb       r7, 0x172(r1)
	  stw       r8, 0x174(r1)
	  stb       r8, 0x173(r1)
	  stb       r6, 0x160(r1)
	  stb       r8, 0x179(r1)
	  stw       r0, 0x180(r1)
	  stw       r0, 0x17C(r1)
	  stb       r8, 0x17A(r1)
	  stb       r8, 0x17B(r1)
	  bl        -0x4EEB8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x174
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x15C
	  bl        -0x4F380
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x16C
	  lbz       r0, -0x7BE0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x174
	  addi      r3, r1, 0x15C
	  bl        0x809B0
	  b         .loc_0x174

	.loc_0x16C:
	  li        r0, 0
	  sth       r0, 0x8(r1)

	.loc_0x174:
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r20,r3,0,24,31
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, -0x6E20(r13)
	  mr        r5, r20
	  li        r6, 0
	  bl        -0xAF270
	  addi      r27, r27, 0x1

	.loc_0x1B8:
	  lwz       r3, 0xC4(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r27, r3
	  blt+      .loc_0xA8
	  li        r20, 0
	  b         .loc_0x228

	.loc_0x1E0:
	  lwz       r3, 0xC4(r31)
	  mr        r5, r20
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x10C
	  bl        -0x560E4
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x10C
	  bl        -0x4F458
	  addi      r20, r20, 0x1

	.loc_0x228:
	  lwz       r3, 0xC4(r31)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r20, r3
	  blt+      .loc_0x1E0
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x2A0
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2A0
	  lwz       r3, -0x7B88(r13)
	  addi      r4, r1, 0xC
	  bl        0x6B2C4
	  mr.       r4, r3
	  beq-      .loc_0x2A0
	  lwz       r0, 0xC(r1)
	  lwz       r3, -0x6CE0(r13)
	  lha       r5, 0x258(r4)
	  rlwinm    r4,r0,0,24,31
	  bl        -0x4DDFC
	  mr        r4, r3
	  addi      r3, r1, 0x134
	  bl        -0x56160
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x134
	  bl        -0x4F4D4

	.loc_0x2A0:
	  lfs       f0, -0x4F14(r2)
	  addi      r3, r1, 0x214
	  lfs       f1, -0x4F20(r2)
	  addi      r4, r1, 0xD0
	  fmuls     f2, f28, f0
	  stfs      f31, 0xC8(r1)
	  fmuls     f0, f27, f0
	  addi      r5, r1, 0xC4
	  stfs      f1, 0xD4(r1)
	  stfs      f2, 0xD0(r1)
	  stfs      f0, 0xD8(r1)
	  stfs      f1, 0xC4(r1)
	  stfs      f1, 0xCC(r1)
	  bl        0x26BCA0
	  lwz       r3, 0xA8(r29)
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x5EE0
	  cmplwi    r0, 0
	  stw       r4, 0x38(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  bne-      .loc_0x318
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x490

	.loc_0x318:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x384

	.loc_0x330:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x490
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x384:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x330
	  b         .loc_0x490

	.loc_0x3A4:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r21, r3
	  mr        r3, r26
	  lwz       r4, 0x8(r21)
	  bl        -0xF2618
	  cmpwi     r3, 0
	  bne-      .loc_0x3D4
	  b         .loc_0x4B4

	.loc_0x3D4:
	  lwz       r0, 0x44(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x400
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x490

	.loc_0x400:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x474

	.loc_0x420:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x490
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x474:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x420

	.loc_0x490:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x3C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x3A4
	  li        r21, 0

	.loc_0x4B4:
	  stw       r21, 0x138(r31)
	  addi      r3, r1, 0x214
	  addi      r4, r31, 0xD8
	  bl        -0xD2B08
	  addi      r3, r1, 0x214
	  addi      r4, r31, 0x108
	  bl        -0xD29C4
	  li        r3, 0x14
	  bl        -0x198F44
	  mr.       r0, r3
	  beq-      .loc_0x4F4
	  lwz       r4, 0xC(r21)
	  lis       r5, 0x2
	  li        r6, 0x2
	  bl        0x2813D8
	  mr        r0, r3

	.loc_0x4F4:
	  stw       r0, 0x13C(r31)
	  li        r4, 0
	  lwz       r3, 0x13C(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x1566B0
	  lwz       r3, 0x13C(r31)
	  li        r4, 0x200
	  lwz       r3, 0x8(r3)
	  bl        -0x156750
	  lwz       r4, 0x13C(r31)
	  addi      r3, r31, 0xD8
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0xD2B70
	  lwz       r3, 0x13C(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x13C(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x13C(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x156554
	  lwz       r3, 0x13C(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x156690
	  lwz       r0, 0xE8(r21)
	  stw       r0, 0xC8(r31)
	  lwz       r20, 0xC8(r31)
	  mulli     r3, r20, 0xC
	  addi      r3, r3, 0x10
	  bl        -0x198EF0
	  lis       r4, 0x8016
	  mr        r7, r20
	  addi      r4, r4, 0x38EC
	  li        r5, 0
	  li        r6, 0xC
	  bl        -0xFB4C4
	  li        r20, 0
	  stw       r3, 0xCC(r31)
	  mr        r22, r20
	  mr        r23, r20
	  b         .loc_0x5E4

	.loc_0x5B8:
	  lwz       r3, 0xCC(r31)
	  lwz       r0, 0xEC(r21)
	  add       r3, r3, r23
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r22
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r22, r22, 0x10
	  addi      r23, r23, 0xC
	  addi      r20, r20, 0x1

	.loc_0x5E4:
	  lwz       r0, 0xC8(r31)
	  cmpw      r20, r0
	  blt+      .loc_0x5B8
	  lfs       f1, 0x7C(r21)
	  addi      r3, r1, 0x1E4
	  lfs       f0, -0x4F20(r2)
	  addi      r4, r1, 0xD0
	  stfs      f1, 0xF4(r1)
	  addi      r5, r1, 0xB8
	  lfs       f1, 0x80(r21)
	  stfs      f1, 0xF8(r1)
	  lfs       f1, 0x84(r21)
	  stfs      f1, 0xFC(r1)
	  lfs       f1, 0x88(r21)
	  stfs      f1, 0x100(r1)
	  lfs       f1, 0x8C(r21)
	  stfs      f1, 0x104(r1)
	  lfs       f1, 0x90(r21)
	  stfs      f1, 0x108(r1)
	  stfs      f0, 0xB8(r1)
	  stfs      f31, 0xBC(r1)
	  stfs      f0, 0xC0(r1)
	  bl        0x26B938
	  addi      r3, r1, 0xF4
	  addi      r4, r1, 0x1E4
	  bl        0x2560E0
	  lfs       f1, 0xF4(r1)
	  lfs       f0, 0xDC(r29)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x660
	  stfs      f1, 0xDC(r29)

	.loc_0x660:
	  lfs       f1, 0xF8(r1)
	  lfs       f0, 0xE0(r29)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x674
	  stfs      f1, 0xE0(r29)

	.loc_0x674:
	  lfs       f1, 0xFC(r1)
	  lfs       f0, 0xE4(r29)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x688
	  stfs      f1, 0xE4(r29)

	.loc_0x688:
	  lfs       f1, 0x100(r1)
	  lfs       f0, 0xE8(r29)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x69C
	  stfs      f1, 0xE8(r29)

	.loc_0x69C:
	  lfs       f1, 0x104(r1)
	  lfs       f0, 0xEC(r29)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6B0
	  stfs      f1, 0xEC(r29)

	.loc_0x6B0:
	  lfs       f1, 0x108(r1)
	  lfs       f0, 0xF0(r29)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6C4
	  stfs      f1, 0xF0(r29)

	.loc_0x6C4:
	  addi      r3, r1, 0xF4
	  addi      r4, r31, 0x140
	  bl        0x255F94
	  lfs       f0, 0xF8(r1)
	  addi      r3, r1, 0xDC
	  lfs       f2, 0x104(r1)
	  addi      r4, r31, 0x190
	  lfs       f5, 0xF4(r1)
	  lfs       f4, 0xFC(r1)
	  lfs       f3, 0x100(r1)
	  lfs       f1, 0x108(r1)
	  stfs      f0, 0xE0(r1)
	  lfs       f0, -0x4F20(r2)
	  stfs      f2, 0xEC(r1)
	  stfs      f5, 0xDC(r1)
	  stfs      f4, 0xE4(r1)
	  stfs      f3, 0xE8(r1)
	  stfs      f1, 0xF0(r1)
	  stfs      f0, 0xE0(r1)
	  stfs      f0, 0xEC(r1)
	  bl        0x255F4C
	  lwz       r4, 0x13C(r31)
	  addi      r3, r1, 0x78
	  bl        0x2816FC
	  lwz       r5, 0x13C(r31)
	  li        r4, 0
	  lfs       f30, 0x78(r1)
	  lwz       r0, 0xC(r5)
	  lfs       f29, 0x7C(r1)
	  lfs       f28, 0x80(r1)
	  lfs       f27, -0x4F20(r2)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x770

	.loc_0x74C:
	  lwz       r3, 0x10(r5)
	  addi      r0, r4, 0x18
	  lwzx      r3, r3, r0
	  lfs       f0, 0x38(r3)
	  fcmpo     cr0, f27, f0
	  bge-      .loc_0x768
	  fmr       f27, f0

	.loc_0x768:
	  addi      r4, r4, 0x3C
	  bdnz+     .loc_0x74C

	.loc_0x770:
	  mr        r3, r26
	  addi      r4, r30, 0x2BC
	  bl        -0xF29CC
	  cmpwi     r3, 0
	  bne-      .loc_0x78C
	  lfs       f0, -0x4F00(r2)
	  fadds     f27, f27, f0

	.loc_0x78C:
	  lfs       f0, 0xD0(r1)
	  addi      r3, r31, 0x160
	  lfs       f2, 0xD4(r1)
	  addi      r4, r1, 0xAC
	  fadds     f1, f30, f0
	  lfs       f3, 0xD8(r1)
	  fadds     f2, f29, f2
	  lfs       f0, -0x4ECC(r2)
	  fadds     f3, f28, f3
	  addi      r5, r1, 0xA0
	  stfs      f1, 0x150(r31)
	  stfs      f2, 0x154(r31)
	  stfs      f3, 0x158(r31)
	  stfs      f27, 0x15C(r31)
	  lfs       f3, 0x144(r31)
	  lfs       f1, 0x14C(r31)
	  lfs       f2, 0x140(r31)
	  fsubs     f0, f3, f0
	  lfs       f4, 0x148(r31)
	  stfs      f3, 0xA4(r1)
	  stfs      f2, 0xAC(r1)
	  stfs      f3, 0xB0(r1)
	  stfs      f4, 0xB4(r1)
	  stfs      f2, 0xA0(r1)
	  stfs      f4, 0xA8(r1)
	  stfs      f0, 0xA4(r1)
	  bl        0x26455C
	  lwz       r3, 0x10(r29)
	  addi      r4, r21, 0x34
	  addi      r5, r1, 0x214
	  bl        -0xD270
	  mr        r3, r29
	  mr        r4, r21
	  bl        0x109C
	  mr        r27, r3
	  lha       r0, 0x6C(r3)
	  sth       r0, 0x186(r31)
	  stw       r27, 0xC0(r31)
	  lwz       r0, 0x114(r3)
	  stw       r0, 0xD0(r31)
	  lwz       r20, 0xD0(r31)
	  rlwinm    r3,r20,4,0,27
	  addi      r3, r3, 0x10
	  bl        -0x1991A0
	  lis       r4, 0x801B
	  mr        r7, r20
	  addi      r4, r4, 0x76E4
	  li        r5, 0
	  li        r6, 0x10
	  bl        -0xFB774
	  stw       r3, 0xD4(r31)
	  li        r22, 0
	  li        r20, 0x1
	  lhz       r0, 0x6E(r27)
	  sth       r0, 0x188(r31)
	  b         .loc_0x8A4

	.loc_0x86C:
	  mr        r4, r22
	  addi      r3, r27, 0x118
	  bl        0x254514
	  mr        r4, r3
	  addi      r3, r21, 0xAC
	  lwz       r12, 0xAC(r21)
	  lwz       r0, 0x4C(r4)
	  lwz       r12, 0x2C(r12)
	  extsh     r4, r0
	  mtctr     r12
	  bctrl
	  stb       r20, 0x6E(r3)
	  sth       r22, 0x76(r3)
	  addi      r22, r22, 0x1

	.loc_0x8A4:
	  lwz       r0, 0x114(r27)
	  cmpw      r22, r0
	  blt+      .loc_0x86C
	  li        r0, 0
	  lis       r3, 0x804B
	  addi      r4, r3, 0x2380
	  addi      r3, r21, 0xAC
	  cmplwi    r0, 0
	  stw       r4, 0x90(r1)
	  li        r28, 0
	  stw       r0, 0x9C(r1)
	  stw       r0, 0x94(r1)
	  stw       r3, 0x98(r1)
	  bne-      .loc_0x8F4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0xA54

	.loc_0x8F4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x960

	.loc_0x90C:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA54
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0x960:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x90C
	  b         .loc_0xA54

	.loc_0x980:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x9C(r1)
	  addi      r28, r28, 0x1
	  cmplwi    r0, 0
	  bne-      .loc_0x9C4
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0xA54

	.loc_0x9C4:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0xA38

	.loc_0x9E4:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA54
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0xA38:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x9E4

	.loc_0xA54:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x94(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x980
	  rlwinm    r3,r28,2,0,29
	  li        r4, -0x20
	  bl        -0x199398
	  stw       r3, 0x18C(r31)
	  li        r26, 0
	  lwz       r0, 0x9C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xAB0
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x1268

	.loc_0xAB0:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0xB20

	.loc_0xACC:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1268
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0xB20:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xACC
	  b         .loc_0x1268

	.loc_0xB40:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r25, r3
	  lbz       r0, 0x6E(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x10A4
	  lwz       r4, 0x10(r24)
	  li        r23, 0
	  b         .loc_0xB8C

	.loc_0xB70:
	  lhz       r3, 0x18(r4)
	  lha       r0, 0x76(r25)
	  cmpw      r3, r0
	  bne-      .loc_0xB88
	  mr        r23, r4
	  b         .loc_0xB94

	.loc_0xB88:
	  lwz       r4, 0x4(r4)

	.loc_0xB8C:
	  cmplwi    r4, 0
	  bne+      .loc_0xB70

	.loc_0xB94:
	  cmplwi    r23, 0
	  bne-      .loc_0xBB0
	  addi      r3, r30, 0x84
	  addi      r5, r30, 0xC8
	  li        r4, 0xD83
	  crclr     6, 0x6
	  bl        -0x192E80

	.loc_0xBB0:
	  lis       r3, 0x804B
	  li        r0, 0
	  lha       r21, 0x1C(r23)
	  addi      r4, r3, 0x5D28
	  addi      r3, r29, 0xAC
	  cmplwi    r0, 0
	  stw       r4, 0x28(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x2C(r1)
	  stw       r3, 0x30(r1)
	  bne-      .loc_0xBF4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0xD64

	.loc_0xBF4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0xC60

	.loc_0xC0C:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD64
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)

	.loc_0xC60:
	  lwz       r12, 0x28(r1)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xC0C
	  b         .loc_0xD64

	.loc_0xC80:
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x184(r3)
	  cmpw      r0, r21
	  bne-      .loc_0xCA8
	  mr        r21, r3
	  b         .loc_0xD88

	.loc_0xCA8:
	  lwz       r0, 0x34(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xCD4
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0xD64

	.loc_0xCD4:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0xD48

	.loc_0xCF4:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD64
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)

	.loc_0xD48:
	  lwz       r12, 0x28(r1)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xCF4

	.loc_0xD64:
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xC80
	  li        r21, 0

	.loc_0xD88:
	  lha       r4, 0x76(r25)
	  addi      r3, r27, 0x118
	  bl        0x253FF8
	  lwz       r20, 0x28C(r30)
	  cmplwi    r21, 0
	  lwz       r12, 0x290(r30)
	  mr        r22, r3
	  lwz       r11, 0x294(r30)
	  lwz       r10, 0x298(r30)
	  lwz       r9, 0x29C(r30)
	  lwz       r8, 0x2A0(r30)
	  lwz       r7, 0x2A4(r30)
	  lwz       r6, 0x2A8(r30)
	  lwz       r5, 0x2AC(r30)
	  lwz       r4, 0x2B0(r30)
	  lwz       r3, 0x2B4(r30)
	  lwz       r0, 0x2B8(r30)
	  stw       r20, 0x6C(r1)
	  stw       r12, 0x70(r1)
	  lfs       f11, 0x6C(r1)
	  stw       r11, 0x74(r1)
	  lfs       f10, 0x70(r1)
	  stw       r10, 0x60(r1)
	  lfs       f9, 0x74(r1)
	  stw       r9, 0x64(r1)
	  lfs       f8, 0x60(r1)
	  stw       r8, 0x68(r1)
	  lfs       f7, 0x64(r1)
	  stw       r7, 0x54(r1)
	  lfs       f6, 0x68(r1)
	  stw       r6, 0x58(r1)
	  lfs       f5, 0x54(r1)
	  stw       r5, 0x5C(r1)
	  lfs       f4, 0x58(r1)
	  stw       r4, 0x48(r1)
	  lfs       f3, 0x5C(r1)
	  stw       r3, 0x4C(r1)
	  lfs       f2, 0x48(r1)
	  stw       r0, 0x50(r1)
	  lfs       f1, 0x4C(r1)
	  lfs       f0, 0x50(r1)
	  stfs      f11, 0x1B4(r1)
	  stfs      f10, 0x1B8(r1)
	  stfs      f9, 0x1BC(r1)
	  stfs      f8, 0x1C0(r1)
	  stfs      f7, 0x1C4(r1)
	  stfs      f6, 0x1C8(r1)
	  stfs      f5, 0x1CC(r1)
	  stfs      f4, 0x1D0(r1)
	  stfs      f3, 0x1D4(r1)
	  stfs      f2, 0x1D8(r1)
	  stfs      f1, 0x1DC(r1)
	  stfs      f0, 0x1E0(r1)
	  bne-      .loc_0xF3C
	  lha       r4, 0x36(r25)
	  li        r3, 0
	  extsh.    r0, r4
	  blt-      .loc_0xE7C
	  cmpw      r4, r28
	  bge-      .loc_0xE7C
	  li        r3, 0x1

	.loc_0xE7C:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE98
	  addi      r3, r30, 0x84
	  addi      r5, r30, 0xC8
	  li        r4, 0xD98
	  crclr     6, 0x6
	  bl        -0x193168

	.loc_0xE98:
	  li        r3, 0x78
	  bl        -0x19990C
	  mr.       r20, r3
	  beq-      .loc_0xEB0
	  bl        -0x4B11C
	  mr        r20, r3

	.loc_0xEB0:
	  lwz       r3, 0x8(r29)
	  mr        r4, r20
	  bl        -0x48F84
	  lha       r0, 0x36(r25)
	  addi      r3, r1, 0x214
	  lha       r7, 0x36(r20)
	  addi      r4, r25, 0x4C
	  lwz       r6, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  addi      r5, r1, 0x1C
	  stwx      r7, r6, r0
	  lfs       f0, 0x58(r25)
	  stfs      f0, 0x58(r20)
	  bl        -0xD2C20
	  lfs       f1, 0x20(r1)
	  lfs       f2, 0x24(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x4C(r20)
	  stfs      f1, 0x50(r20)
	  stfs      f2, 0x54(r20)
	  lbz       r0, 0x6E(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0xF18
	  lfs       f0, -0x4F20(r2)
	  stfs      f0, 0x50(r20)
	  b         .loc_0xF34

	.loc_0xF18:
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r20, 0x4C
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x50(r20)

	.loc_0xF34:
	  mr        r25, r20
	  b         .loc_0xFC8

	.loc_0xF3C:
	  lwz       r3, 0x138(r21)
	  lwzu      r12, 0xAC(r3)
	  lhz       r0, 0x1A(r23)
	  lwz       r12, 0x2C(r12)
	  extsh     r4, r0
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x18C(r21)
	  mr        r23, r3
	  cmplwi    r0, 0
	  bne-      .loc_0xF7C
	  addi      r3, r30, 0x84
	  addi      r5, r30, 0xC8
	  li        r4, 0xDB0
	  crclr     6, 0x6
	  bl        -0x19324C

	.loc_0xF7C:
	  lha       r0, 0x36(r23)
	  lwz       r4, 0x18C(r21)
	  rlwinm    r3,r0,2,0,29
	  lha       r0, 0x36(r25)
	  lwzx      r4, r4, r3
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  stwx      r4, r3, r0
	  lwz       r3, 0x8(r29)
	  lha       r0, 0x36(r25)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0x2C(r12)
	  lwzx      r0, r4, r0
	  extsh     r4, r0
	  mtctr     r12
	  bctrl
	  mr        r25, r3

	.loc_0xFC8:
	  lwz       r0, 0xD4(r31)
	  li        r3, 0x1C
	  add       r21, r0, r26
	  addi      r26, r26, 0x10
	  stw       r25, 0x0(r21)
	  bl        -0x199A4C
	  mr.       r20, r3
	  beq-      .loc_0x1000
	  lha       r23, 0x184(r31)
	  bl        0x253A90
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2410
	  stw       r0, 0x0(r20)
	  sth       r23, 0x18(r20)

	.loc_0x1000:
	  mr        r4, r20
	  addi      r3, r25, 0x18
	  bl        0x253AEC
	  lfs       f0, -0x4F20(r2)
	  lis       r3, 0x8051
	  addi      r4, r3, 0x41E4
	  stfs      f31, 0x88(r1)
	  addi      r3, r1, 0x184
	  addi      r5, r1, 0x84
	  stfs      f0, 0x84(r1)
	  stfs      f0, 0x8C(r1)
	  bl        0x26AF48
	  lwz       r0, 0x44(r22)
	  addi      r3, r1, 0x1B4
	  lfs       f0, 0x194(r1)
	  mulli     r0, r0, 0xC
	  lfs       f2, 0x198(r1)
	  lfs       f1, 0x184(r1)
	  lfs       f3, 0x19C(r1)
	  add       r3, r3, r0
	  lfs       f6, 0x188(r1)
	  lfs       f4, 0x4(r3)
	  lfs       f8, 0x0(r3)
	  fmuls     f0, f4, f0
	  lfs       f9, 0x8(r3)
	  fmuls     f5, f4, f2
	  lfs       f2, 0x1A4(r1)
	  fmuls     f3, f4, f3
	  lfs       f4, 0x18C(r1)
	  fmadds    f0, f8, f1, f0
	  lfs       f7, 0x1A8(r1)
	  fmadds    f6, f8, f6, f5
	  lfs       f5, 0x1AC(r1)
	  fmadds    f1, f8, f4, f3
	  fmadds    f0, f9, f2, f0
	  fmadds    f2, f9, f7, f6
	  fmadds    f1, f9, f5, f1
	  stfs      f0, 0x4(r21)
	  stfs      f2, 0x8(r21)
	  stfs      f1, 0xC(r21)
	  b         .loc_0x11AC

	.loc_0x10A4:
	  lha       r4, 0x36(r25)
	  li        r3, 0
	  extsh.    r0, r4
	  blt-      .loc_0x10C0
	  cmpw      r4, r28
	  bge-      .loc_0x10C0
	  li        r3, 0x1

	.loc_0x10C0:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x10DC
	  addi      r3, r30, 0x84
	  addi      r5, r30, 0xC8
	  li        r4, 0xDCA
	  crclr     6, 0x6
	  bl        -0x1933AC

	.loc_0x10DC:
	  li        r3, 0x78
	  bl        -0x199B50
	  mr.       r21, r3
	  beq-      .loc_0x10F4
	  bl        -0x4B360
	  mr        r21, r3

	.loc_0x10F4:
	  lwz       r3, 0x8(r29)
	  mr        r4, r21
	  bl        -0x491C8
	  lha       r0, 0x36(r25)
	  addi      r3, r1, 0x214
	  lha       r7, 0x36(r21)
	  addi      r4, r25, 0x4C
	  lwz       r6, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  addi      r5, r1, 0x10
	  stwx      r7, r6, r0
	  lfs       f0, 0x58(r25)
	  stfs      f0, 0x58(r21)
	  bl        -0xD2E64
	  lfs       f1, 0x14(r1)
	  lfs       f2, 0x18(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x4C(r21)
	  stfs      f1, 0x50(r21)
	  stfs      f2, 0x54(r21)
	  lbz       r0, 0x6E(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0x115C
	  lfs       f0, -0x4F20(r2)
	  stfs      f0, 0x50(r21)
	  b         .loc_0x1178

	.loc_0x115C:
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r21, 0x4C
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x50(r21)

	.loc_0x1178:
	  li        r3, 0x1C
	  bl        -0x199BEC
	  mr.       r20, r3
	  beq-      .loc_0x11A0
	  lha       r22, 0x184(r31)
	  bl        0x2538F0
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2410
	  stw       r0, 0x0(r20)
	  sth       r22, 0x18(r20)

	.loc_0x11A0:
	  mr        r4, r20
	  addi      r3, r21, 0x18
	  bl        0x25394C

	.loc_0x11AC:
	  lwz       r0, 0x9C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x11D8
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x1268

	.loc_0x11D8:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x124C

	.loc_0x11F8:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1268
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0x124C:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x11F8

	.loc_0x1268:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x94(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xB40
	  lwz       r0, 0x9C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x12B0
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x165C

	.loc_0x12B0:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x1320

	.loc_0x12CC:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x165C
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0x1320:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x12CC
	  b         .loc_0x165C

	.loc_0x1340:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  lwz       r3, 0x8(r29)
	  lha       r0, 0x36(r22)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0x2C(r12)
	  lwzx      r0, r4, r0
	  extsh     r4, r0
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x6E(r22)
	  mr        r24, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x14E4
	  lha       r23, 0x38(r24)
	  extsh.    r0, r23
	  bne-      .loc_0x145C
	  lha       r3, 0x38(r22)
	  li        r0, 0x2
	  mr        r5, r24
	  li        r6, 0
	  sth       r3, 0x38(r24)
	  li        r4, -0x1
	  mtctr     r0

	.loc_0x13B8:
	  lha       r0, 0x3A(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x13CC
	  sth       r4, 0x3A(r5)
	  b         .loc_0x13DC

	.loc_0x13CC:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3A(r5)

	.loc_0x13DC:
	  lha       r0, 0x3C(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x13F0
	  sth       r4, 0x3C(r5)
	  b         .loc_0x1400

	.loc_0x13F0:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3C(r5)

	.loc_0x1400:
	  lha       r0, 0x3E(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1414
	  sth       r4, 0x3E(r5)
	  b         .loc_0x1424

	.loc_0x1414:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3E(r5)

	.loc_0x1424:
	  lha       r0, 0x40(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1438
	  sth       r4, 0x40(r5)
	  b         .loc_0x1448

	.loc_0x1438:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x40(r5)

	.loc_0x1448:
	  addi      r22, r22, 0x8
	  addi      r5, r5, 0x8
	  addi      r6, r6, 0x3
	  bdnz+     .loc_0x13B8
	  b         .loc_0x15A0

	.loc_0x145C:
	  mr        r21, r22
	  li        r25, 0
	  b         .loc_0x14C8

	.loc_0x1468:
	  add       r20, r23, r25
	  cmpwi     r20, 0x8
	  blt-      .loc_0x1488
	  addi      r3, r30, 0x84
	  addi      r5, r30, 0xC8
	  li        r4, 0xDF4
	  crclr     6, 0x6
	  bl        -0x193758

	.loc_0x1488:
	  lha       r0, 0x3A(r21)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x14A8
	  rlwinm    r3,r20,1,0,30
	  li        r4, -0x1
	  addi      r0, r3, 0x3A
	  sthx      r4, r24, r0
	  b         .loc_0x14C0

	.loc_0x14A8:
	  lwz       r4, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  rlwinm    r3,r20,1,0,30
	  lwzx      r4, r4, r0
	  addi      r0, r3, 0x3A
	  sthx      r4, r24, r0

	.loc_0x14C0:
	  addi      r21, r21, 0x2
	  addi      r25, r25, 0x1

	.loc_0x14C8:
	  lha       r3, 0x38(r22)
	  cmpw      r25, r3
	  blt+      .loc_0x1468
	  lha       r0, 0x38(r24)
	  add       r0, r0, r3
	  sth       r0, 0x38(r24)
	  b         .loc_0x15A0

	.loc_0x14E4:
	  lha       r3, 0x38(r22)
	  li        r0, 0x2
	  mr        r5, r24
	  li        r6, 0
	  sth       r3, 0x38(r24)
	  li        r4, -0x1
	  mtctr     r0

	.loc_0x1500:
	  lha       r0, 0x3A(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1514
	  sth       r4, 0x3A(r5)
	  b         .loc_0x1524

	.loc_0x1514:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3A(r5)

	.loc_0x1524:
	  lha       r0, 0x3C(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1538
	  sth       r4, 0x3C(r5)
	  b         .loc_0x1548

	.loc_0x1538:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3C(r5)

	.loc_0x1548:
	  lha       r0, 0x3E(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x155C
	  sth       r4, 0x3E(r5)
	  b         .loc_0x156C

	.loc_0x155C:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3E(r5)

	.loc_0x156C:
	  lha       r0, 0x40(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1580
	  sth       r4, 0x40(r5)
	  b         .loc_0x1590

	.loc_0x1580:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x40(r5)

	.loc_0x1590:
	  addi      r22, r22, 0x8
	  addi      r5, r5, 0x8
	  addi      r6, r6, 0x3
	  bdnz+     .loc_0x1500

	.loc_0x15A0:
	  lwz       r0, 0x9C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x15CC
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x165C

	.loc_0x15CC:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x1640

	.loc_0x15EC:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x165C
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0x1640:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x15EC

	.loc_0x165C:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x94(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1340
	  psq_l     f31,0x2C8(r1),0,0
	  lfd       f31, 0x2C0(r1)
	  psq_l     f30,0x2B8(r1),0,0
	  lfd       f30, 0x2B0(r1)
	  psq_l     f29,0x2A8(r1),0,0
	  lfd       f29, 0x2A0(r1)
	  psq_l     f28,0x298(r1),0,0
	  lfd       f28, 0x290(r1)
	  psq_l     f27,0x288(r1),0,0
	  lfd       f27, 0x280(r1)
	  lmw       r20, 0x250(r1)
	  lwz       r0, 0x2D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801BDFCC
 * Size:	0001F4
 */
void RoomMapMgr::deleteTemp(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r3, r3, 0xac
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BE01C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE18C

lbl_801BE01C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE088

lbl_801BE034:
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
	bne      lbl_801BE18C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BE088:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BE034
	b        lbl_801BE18C

lbl_801BE0A8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lwz      r3, 0x18c(r3)
	bl       __dla__FPv
	li       r0, 0
	stw      r0, 0x18c(r31)
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801BE0FC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE18C

lbl_801BE0FC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE170

lbl_801BE11C:
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
	bne      lbl_801BE18C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BE170:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BE11C

lbl_801BE18C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BE0A8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE1C0
 * Size:	000094
 */
void RoomMapMgr::getMUI(Game::MapUnit*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_801BE224

lbl_801BE1F0:
	lwz      r4, 0xf8(r28)
	addi     r0, r31, 0x14
	lwz      r3, 8(r29)
	lwzx     r4, r4, r0
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801BE21C
	mulli    r0, r30, 0x16c
	lwz      r3, 0xf8(r28)
	add      r3, r3, r0
	b        lbl_801BE234

lbl_801BE21C:
	addi     r31, r31, 0x16c
	addi     r30, r30, 1

lbl_801BE224:
	lwz      r0, 0xf4(r28)
	cmpw     r30, r0
	blt      lbl_801BE1F0
	li       r3, 0

lbl_801BE234:
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
 * Address:	801BE254
 * Size:	000060
 */
void RoomMapMgr::doAnimation(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0xac
	stw      r0, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)
	lwz      r12, 0xac(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_801BE2A0
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl

lbl_801BE2A0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE2B4
 * Size:	0000DC
 */
void RoomMapMgr::doEntry(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_80519498@sda21
	li       r5, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r6, sys@sda21(r13)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_801BE368
	lwz      r3, 0x10(r30)
	lwz      r31, 0x58(r4)
	cmplwi   r3, 0
	beq      lbl_801BE30C
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_801BE30C:
	mr       r3, r31
	li       r4, 2
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi
	addi     r3, r30, 0xac
	lwz      r12, 0xac(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	beq      lbl_801BE35C
	mr       r3, r31
	li       r4, 6
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi
	lwz      r3, 0x24(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_801BE35C:
	mr       r3, r31
	li       r4, 0
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi

lbl_801BE368:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519498@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
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
 * Address:	801BE390
 * Size:	00007C
 */
void RoomMapMgr::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0xac
	lwz      r12, 0xac(r30)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_801BE3E0
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl

lbl_801BE3E0:
	lwz      r3, 0x24(r30)
	cmplwi   r3, 0
	beq      lbl_801BE3F4
	mr       r4, r31
	bl       setCurrentViewNo__Q28SysShape5ModelFUl

lbl_801BE3F4:
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
 * Address:	801BE40C
 * Size:	000068
 */
void RoomMapMgr::doViewCalc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0xac
	lwz      r12, 0xac(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_801BE450
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl

lbl_801BE450:
	lwz      r3, 0x24(r31)
	cmplwi   r3, 0
	beq      lbl_801BE460
	bl       viewCalc__Q28SysShape5ModelFv

lbl_801BE460:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE474
 * Size:	000004
 */
void RoomMapMgr::doSimulation(float) { }

/*
 * --INFO--
 * Address:	801BE478
 * Size:	000210
 */
void RoomMapMgr::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	bl       initPrimDraw__8GraphicsFP7Matrixf
	li       r0, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r30, 0xac
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BE4E0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE650

lbl_801BE4E0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE54C

lbl_801BE4F8:
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
	bne      lbl_801BE650
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BE54C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BE4F8
	b        lbl_801BE650

lbl_801BE56C:
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
	bne      lbl_801BE5C0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE650

lbl_801BE5C0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE634

lbl_801BE5E0:
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
	bne      lbl_801BE650
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BE634:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BE5E0

lbl_801BE650:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BE56C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801BE688
 * Size:	000024
 */
void getStartPosition__Q24Game10RoomMapMgrFR10Vector3f i(void)
{
	/*
	mulli    r0, r5, 0xc
	add      r3, r3, r0
	lfs      f0, 0xfc(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x100(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0x104(r3)
	stfs     f0, 8(r4)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801BE6AC
 * Size:	000008
 */
u32 RoomMapMgr::getDemoMatrix(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801BE6B4
 * Size:	000084
 */
Door::~Door(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801BE71C
	lis      r3, __vt__Q24Game4Door@ha
	addic.   r0, r30, 0x20
	addi     r0, r3, __vt__Q24Game4Door@l
	stw      r0, 0(r30)
	beq      lbl_801BE700
	lis      r4, __vt__Q24Game8DoorLink@ha
	addi     r3, r30, 0x20
	addi     r0, r4, __vt__Q24Game8DoorLink@l
	li       r4, 0
	stw      r0, 0x20(r30)
	bl       __dt__5CNodeFv

lbl_801BE700:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801BE71C
	mr       r3, r30
	bl       __dl__FPv

lbl_801BE71C:
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
 * Address:	801BE738
 * Size:	000004
 */
void PartsView::constructor(void) { }

/*
 * --INFO--
 * Address:	801BE73C
 * Size:	000004
 */
void PartsView::doSimulation(float) { }

} // namespace Game

/*
 * --INFO--
 * Address:	801BE740
 * Size:	000038
 */
void Iterator<Game::MapRoom>::operator*()
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
 * Address:	801BE778
 * Size:	0000E4
 */
void Iterator<Game::MapRoom>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_801BE7B8
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801BE848

lbl_801BE7B8:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801BE82C

lbl_801BE7D8:
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
	bne      lbl_801BE848
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_801BE82C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BE7D8

lbl_801BE848:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE85C
 * Size:	0000DC
 */
void Iterator<Game::MapRoom>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_801BE898
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801BE924

lbl_801BE898:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801BE908

lbl_801BE8B4:
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
	bne      lbl_801BE924
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_801BE908:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BE8B4

lbl_801BE924:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE938
 * Size:	000070
 */
void Container<Game::MapRoom>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801BE98C
	lis      r4, "__vt__26Container<Q24Game7MapRoom>"@ha
	addi     r0, r4, "__vt__26Container<Q24Game7MapRoom>"@l
	stw      r0, 0(r30)
	beq      lbl_801BE97C
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801BE97C:
	extsh.   r0, r31
	ble      lbl_801BE98C
	mr       r3, r30
	bl       __dl__FPv

lbl_801BE98C:
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
 * Address:	801BE9A8
 * Size:	000088
 */
void ObjectMgr<Game::MapRoom>::~ObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801BEA14
	lis      r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@ha
	addi     r4, r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_801BEA04
	lis      r4, "__vt__26Container<Q24Game7MapRoom>"@ha
	addi     r0, r4, "__vt__26Container<Q24Game7MapRoom>"@l
	stw      r0, 0(r30)
	beq      lbl_801BEA04
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801BEA04:
	extsh.   r0, r31
	ble      lbl_801BEA14
	mr       r3, r30
	bl       __dl__FPv

lbl_801BEA14:
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
 * Address:	801BEA30
 * Size:	000024
 */
void MapRoom::getBoundingSphere(Sys::Sphere&)
{
	/*
	lfs      f0, 0x140(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x144(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0x148(r3)
	stfs     f0, 8(r4)
	lfs      f0, 0x14c(r3)
	stfs     f0, 0xc(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEA54
 * Size:	000008
 */
void MapRoom::getTypeName(void)
{
	/*
	addi     r3, r2, lbl_805194A0@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEA5C
 * Size:	00000C
 */
void MapRoom::getObjType(void)
{
	/*
	lis      r3, 0x0000AAAA@ha
	addi     r3, r3, 0x0000AAAA@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEA68
 * Size:	000008
 */
u32 MapRoom::collisionUpdatable(void) { return 0x0; }

/*
 * --INFO--
 * Address:	801BEA70
 * Size:	00001C
 */
void MapRoom::getPosition(void)
{
	/*
	lfs      f0, 0x140(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x144(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x148(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEA8C
 * Size:	000004
 */
void MapRoom::constructor(void) { }

/*
 * --INFO--
 * Address:	801BEA90
 * Size:	00000C
 */
void ItemGateInitArg::getName(void)
{
	/*
	lis      r3, lbl_8047FF38@ha
	addi     r3, r3, lbl_8047FF38@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEA9C
 * Size:	00000C
 */
void ItemBigFountain::InitArg::getName(void)
{
	/*
	lis      r3, lbl_8047FF48@ha
	addi     r3, r3, lbl_8047FF48@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEAA8
 * Size:	00000C
 */
// void ItemHole::InitArg::getName(void)
// {
// 	/*
// 	lis      r3, lbl_8047FF64@ha
// 	addi     r3, r3, lbl_8047FF64@l
// 	blr
// 	*/
// }

} // namespace Game

/*
 * --INFO--
 * Address:	801BEAB4
 * Size:	000038
 */
void Iterator<Game::MapUnit>::operator*()
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
 * Address:	801BEAEC
 * Size:	0000E4
 */
void Iterator<Game::MapUnit>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_801BEB2C
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801BEBBC

lbl_801BEB2C:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801BEBA0

lbl_801BEB4C:
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
	bne      lbl_801BEBBC
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_801BEBA0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BEB4C

lbl_801BEBBC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEBD0
 * Size:	0000DC
 */
void Iterator<Game::MapUnit>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_801BEC0C
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801BEC98

lbl_801BEC0C:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801BEC7C

lbl_801BEC28:
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
	bne      lbl_801BEC98
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_801BEC7C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BEC28

lbl_801BEC98:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801BECAC
 * Size:	0000E0
 */
MapUnitMgr::~MapUnitMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_801BED70
	lis      r3, __vt__Q24Game10MapUnitMgr@ha
	addi     r3, r3, __vt__Q24Game10MapUnitMgr@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	beq      lbl_801BED60
	lis      r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@ha
	addic.   r0, r31, 0x20
	addi     r3, r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	beq      lbl_801BED18
	lis      r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
	addi     r3, r31, 0x20
	addi     r0, r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
	li       r4, 0
	stw      r0, 0x20(r31)
	bl       __dt__5CNodeFv

lbl_801BED18:
	cmplwi   r31, 0
	beq      lbl_801BED60
	lis      r3, "__vt__26ObjectMgr<Q24Game7MapUnit>"@ha
	addi     r3, r3, "__vt__26ObjectMgr<Q24Game7MapUnit>"@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	beq      lbl_801BED60
	lis      r3, "__vt__26Container<Q24Game7MapUnit>"@ha
	addi     r0, r3, "__vt__26Container<Q24Game7MapUnit>"@l
	stw      r0, 0(r31)
	beq      lbl_801BED60
	lis      r4, __vt__16GenericContainer@ha
	mr       r3, r31
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0(r31)
	bl       __dt__5CNodeFv

lbl_801BED60:
	extsh.   r0, r30
	ble      lbl_801BED70
	mr       r3, r31
	bl       __dl__FPv

lbl_801BED70:
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
 * Address:	801BED8C
 * Size:	000004
 */
void MapUnit::constructor(void) { }

/*
 * --INFO--
 * Address:	801BED90
 * Size:	000004
 */
void MapUnit::doAnimation(void) { }

/*
 * --INFO--
 * Address:	801BED94
 * Size:	000004
 */
void MapUnit::doEntry(void) { }

/*
 * --INFO--
 * Address:	801BED98
 * Size:	000004
 */
void MapUnit::doSetView(int) { }

/*
 * --INFO--
 * Address:	801BED9C
 * Size:	000004
 */
void MapUnit::doViewCalc(void) { }

/*
 * --INFO--
 * Address:	801BEDA0
 * Size:	000004
 */
void MapUnit::doSimulation(float) { }

/*
 * --INFO--
 * Address:	801BEDA4
 * Size:	000004
 */
void MapUnit::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801BEDA8
 * Size:	000060
 */
DoorLink::~DoorLink(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801BEDEC
	lis      r5, __vt__Q24Game8DoorLink@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game8DoorLink@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801BEDEC
	mr       r3, r30
	bl       __dl__FPv

lbl_801BEDEC:
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
 * Address:	801BEE08
 * Size:	000008
 */
void NodeObjectMgr<Game::MapUnit>::get(void*)
{
	/*
	lwz      r3, 0x18(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEE10
 * Size:	000008
 */
void NodeObjectMgr<Game::MapUnit>::getNext(void*)
{
	/*
	lwz      r3, 4(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEE18
 * Size:	000008
 */
void NodeObjectMgr<Game::MapUnit>::getStart()
{
	/*
	lwz      r3, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEE20
 * Size:	000008
 */
u32 NodeObjectMgr<Game::MapUnit>::getEnd() { return 0x0; }

/*
 * --INFO--
 * Address:	801BEE28
 * Size:	000018
 */
void NodeObjectMgr<Game::MapUnit>::resetMgr()
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
 * Address:	801BEE40
 * Size:	000060
 */
void MonoObjectMgr<Game::MapRoom>::birth()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "getEmptyIndex__30MonoObjectMgr<Q24Game7MapRoom>Fv"
	cmpwi    r3, -1
	beq      lbl_801BEE88
	lwz      r6, 0x28(r31)
	li       r0, 0
	lwz      r4, 0x2c(r31)
	mulli    r5, r3, 0x1a0
	stbx     r0, r4, r3
	add      r3, r6, r5
	lwz      r4, 0x20(r31)
	addi     r0, r4, 1
	stw      r0, 0x20(r31)
	b        lbl_801BEE8C

lbl_801BEE88:
	li       r3, 0

lbl_801BEE8C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEEA0
 * Size:	000040
 */
void MonoObjectMgr<Game::MapRoom>::getNext(void*)
{
	/*
	lwz      r5, 0x24(r3)
	addi     r6, r4, 1
	subf     r0, r6, r5
	mtctr    r0
	cmpw     r6, r5
	bge      lbl_801BEED8

lbl_801BEEB8:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r6
	cmplwi   r0, 0
	bne      lbl_801BEED0
	mr       r3, r6
	blr

lbl_801BEED0:
	addi     r6, r6, 1
	bdnz     lbl_801BEEB8

lbl_801BEED8:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEEE0
 * Size:	000030
 */
void MonoObjectMgr<Game::MapRoom>::getStart()
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
 * Address:	801BEF10
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::getEnd()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEF18
 * Size:	000010
 */
void MonoObjectMgr<Game::MapRoom>::getAt(int)
{
	/*
	mulli    r0, r4, 0x1a0
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEF28
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::getTo()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BEF30
 * Size:	000080
 */
void MonoObjectMgr<Game::MapRoom>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801BEF88

lbl_801BEF58:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801BEF80
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_801BEF80:
	addi     r31, r31, 0x1a0
	addi     r30, r30, 1

lbl_801BEF88:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801BEF58
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
 * Address:	801BEFB0
 * Size:	000080
 */
void MonoObjectMgr<Game::MapRoom>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801BF008

lbl_801BEFD8:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801BF000
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_801BF000:
	addi     r31, r31, 0x1a0
	addi     r30, r30, 1

lbl_801BF008:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801BEFD8
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
 * Address:	801BF030
 * Size:	000090
 */
void MonoObjectMgr<Game::MapRoom>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_801BF094

lbl_801BF060:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801BF08C
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl

lbl_801BF08C:
	addi     r31, r31, 0x1a0
	addi     r30, r30, 1

lbl_801BF094:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_801BF060
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
 * Address:	801BF0C0
 * Size:	000080
 */
void MonoObjectMgr<Game::MapRoom>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801BF118

lbl_801BF0E8:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801BF110
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_801BF110:
	addi     r31, r31, 0x1a0
	addi     r30, r30, 1

lbl_801BF118:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801BF0E8
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
 * Address:	801BF140
 * Size:	000090
 */
void MonoObjectMgr<Game::MapRoom>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	li       r31, 0
	stw      r30, 0x10(r1)
	li       r30, 0
	stw      r29, 0xc(r1)
	mr       r29, r3
	b        lbl_801BF1A4

lbl_801BF170:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801BF19C
	lwz      r0, 0x28(r29)
	fmr      f1, f31
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_801BF19C:
	addi     r31, r31, 0x1a0
	addi     r30, r30, 1

lbl_801BF1A4:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801BF170
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BF1D0
 * Size:	000090
 */
void MonoObjectMgr<Game::MapRoom>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_801BF234

lbl_801BF200:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801BF22C
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_801BF22C:
	addi     r31, r31, 0x1a0
	addi     r30, r30, 1

lbl_801BF234:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_801BF200
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
 * Address:	801BF260
 * Size:	000018
 */
void MonoObjectMgr<Game::MapRoom>::resetMgr()
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
 * Address:	801BF278
 * Size:	000030
 */
void MonoObjectMgr<Game::MapRoom>::clearMgr()
{
	/*
	li       r0, 0
	li       r6, 0
	stw      r0, 0x20(r3)
	li       r5, 1
	b        lbl_801BF298

lbl_801BF28C:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_801BF298:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_801BF28C
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BF2A8
 * Size:	000004
 */
void MonoObjectMgr<Game::MapRoom>::onAlloc() { }

/*
 * --INFO--
 * Address:	801BF2AC
 * Size:	00003C
 */
void MonoObjectMgr<Game::MapRoom>::getEmptyIndex()
{
	/*
	lwz      r0, 0x24(r3)
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801BF2E0

lbl_801BF2C0:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r5
	cmplwi   r0, 1
	bne      lbl_801BF2D8
	mr       r3, r5
	blr

lbl_801BF2D8:
	addi     r5, r5, 1
	bdnz     lbl_801BF2C0

lbl_801BF2E0:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BF2E8
 * Size:	000010
 */
void MonoObjectMgr<Game::MapRoom>::get(void*)
{
	/*
	mulli    r0, r4, 0x1a0
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BF2F8
 * Size:	0001E4
 */
void ObjectMgr<Game::MapRoom>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BF340
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF4AC

lbl_801BF340:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF3AC

lbl_801BF358:
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
	bne      lbl_801BF4AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BF3AC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BF358
	b        lbl_801BF4AC

lbl_801BF3CC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801BF41C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF4AC

lbl_801BF41C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF490

lbl_801BF43C:
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
	bne      lbl_801BF4AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BF490:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BF43C

lbl_801BF4AC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BF3CC
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BF4DC
 * Size:	0001E4
 */
void ObjectMgr<Game::MapRoom>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BF524
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF690

lbl_801BF524:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF590

lbl_801BF53C:
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
	bne      lbl_801BF690
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BF590:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BF53C
	b        lbl_801BF690

lbl_801BF5B0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801BF600
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF690

lbl_801BF600:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF674

lbl_801BF620:
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
	bne      lbl_801BF690
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BF674:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BF620

lbl_801BF690:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BF5B0
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BF6C0
 * Size:	0001F4
 */
void ObjectMgr<Game::MapRoom>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__25Iterator<Q24Game7MapRoom>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BF710
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF880

lbl_801BF710:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF77C

lbl_801BF728:
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
	bne      lbl_801BF880
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BF77C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BF728
	b        lbl_801BF880

lbl_801BF79C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801BF7F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF880

lbl_801BF7F0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF864

lbl_801BF810:
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
	bne      lbl_801BF880
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BF864:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BF810

lbl_801BF880:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BF79C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BF8B4
 * Size:	0001E4
 */
void ObjectMgr<Game::MapRoom>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BF8FC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFA68

lbl_801BF8FC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BF968

lbl_801BF914:
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
	bne      lbl_801BFA68
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BF968:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BF914
	b        lbl_801BFA68

lbl_801BF988:
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
	bne      lbl_801BF9D8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFA68

lbl_801BF9D8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFA4C

lbl_801BF9F8:
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
	bne      lbl_801BFA68
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BFA4C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BF9F8

lbl_801BFA68:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BF988
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BFA98
 * Size:	0001F4
 */
void ObjectMgr<Game::MapRoom>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BFAE8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFC58

lbl_801BFAE8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFB54

lbl_801BFB00:
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
	bne      lbl_801BFC58
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BFB54:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BFB00
	b        lbl_801BFC58

lbl_801BFB74:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801BFBC8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFC58

lbl_801BFBC8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFC3C

lbl_801BFBE8:
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
	bne      lbl_801BFC58
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BFC3C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BFBE8

lbl_801BFC58:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BFB74
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BFC8C
 * Size:	0001F4
 */
void ObjectMgr<Game::MapRoom>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__25Iterator<Q24Game7MapRoom>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BFCDC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFE4C

lbl_801BFCDC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFD48

lbl_801BFCF4:
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
	bne      lbl_801BFE4C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BFD48:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BFCF4
	b        lbl_801BFE4C

lbl_801BFD68:
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
	bne      lbl_801BFDBC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFE4C

lbl_801BFDBC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFE30

lbl_801BFDDC:
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
	bne      lbl_801BFE4C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BFE30:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BFDDC

lbl_801BFE4C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BFD68
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BFE80
 * Size:	0001E4
 */
void ObjectMgr<Game::MapUnit>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BFEC8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C0034

lbl_801BFEC8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BFF34

lbl_801BFEE0:
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
	bne      lbl_801C0034
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BFF34:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BFEE0
	b        lbl_801C0034

lbl_801BFF54:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801BFFA4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C0034

lbl_801BFFA4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C0018

lbl_801BFFC4:
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
	bne      lbl_801C0034
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C0018:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BFFC4

lbl_801C0034:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BFF54
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C0064
 * Size:	0001E4
 */
void ObjectMgr<Game::MapUnit>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801C00AC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C0218

lbl_801C00AC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C0118

lbl_801C00C4:
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
	bne      lbl_801C0218
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C0118:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C00C4
	b        lbl_801C0218

lbl_801C0138:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801C0188
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C0218

lbl_801C0188:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C01FC

lbl_801C01A8:
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
	bne      lbl_801C0218
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C01FC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C01A8

lbl_801C0218:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801C0138
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C0248
 * Size:	0001F4
 */
void ObjectMgr<Game::MapUnit>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__25Iterator<Q24Game7MapUnit>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801C0298
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C0408

lbl_801C0298:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C0304

lbl_801C02B0:
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
	bne      lbl_801C0408
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C0304:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C02B0
	b        lbl_801C0408

lbl_801C0324:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801C0378
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C0408

lbl_801C0378:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C03EC

lbl_801C0398:
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
	bne      lbl_801C0408
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C03EC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C0398

lbl_801C0408:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801C0324
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C043C
 * Size:	0001E4
 */
void ObjectMgr<Game::MapUnit>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801C0484
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C05F0

lbl_801C0484:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C04F0

lbl_801C049C:
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
	bne      lbl_801C05F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C04F0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C049C
	b        lbl_801C05F0

lbl_801C0510:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801C0560
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C05F0

lbl_801C0560:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C05D4

lbl_801C0580:
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
	bne      lbl_801C05F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C05D4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C0580

lbl_801C05F0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801C0510
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C0620
 * Size:	0001F4
 */
void ObjectMgr<Game::MapUnit>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801C0670
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C07E0

lbl_801C0670:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C06DC

lbl_801C0688:
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
	bne      lbl_801C07E0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C06DC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C0688
	b        lbl_801C07E0

lbl_801C06FC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801C0750
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C07E0

lbl_801C0750:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C07C4

lbl_801C0770:
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
	bne      lbl_801C07E0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C07C4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C0770

lbl_801C07E0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801C06FC
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C0814
 * Size:	0001F4
 */
void ObjectMgr<Game::MapUnit>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__25Iterator<Q24Game7MapUnit>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801C0864
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C09D4

lbl_801C0864:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C08D0

lbl_801C087C:
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
	bne      lbl_801C09D4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C08D0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C087C
	b        lbl_801C09D4

lbl_801C08F0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801C0944
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C09D4

lbl_801C0944:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801C09B8

lbl_801C0964:
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
	bne      lbl_801C09D4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801C09B8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C0964

lbl_801C09D4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801C08F0
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C0A08
 * Size:	00002C
 */
void Container<Game::MapRoom>::getObject(void*)
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
 * Address:	801C0A34
 * Size:	000008
 */
u32 Container<Game::MapRoom>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	801C0A3C
 * Size:	000008
 */
u32 Container<Game::MapRoom>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	801C0A44
 * Size:	00002C
 */
void Container<Game::MapUnit>::getObject(void*)
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
 * Address:	801C0A70
 * Size:	000008
 */
u32 Container<Game::MapUnit>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	801C0A78
 * Size:	000008
 */
u32 Container<Game::MapUnit>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	801C0A80
 * Size:	000188
 */
void MonoObjectMgr<Game::MapRoom>::alloc(int)
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
	mulli    r3, r29, 0x1a0
	stw      r28, 0x10(r1)
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game7MapRoomFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q24Game7MapRoomFv@l
	li       r5, 0
	li       r6, 0x1a0
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
	ble      lbl_801C0BA0
	cmpwi    r31, 8
	addi     r3, r31, -8
	ble      lbl_801C0B7C
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_801C0B7C

lbl_801C0B14:
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
	bdnz     lbl_801C0B14

lbl_801C0B7C:
	subf     r0, r11, r31
	li       r4, 1
	mtctr    r0
	cmpw     r11, r31
	bge      lbl_801C0BA0

lbl_801C0B90:
	lwz      r3, 0x2c(r30)
	stbx     r4, r3, r11
	addi     r11, r11, 1
	bdnz     lbl_801C0B90

lbl_801C0BA0:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	li       r28, 0
	li       r29, 0
	b        lbl_801C0BE0

lbl_801C0BC0:
	lwz      r0, 0x28(r30)
	add      r3, r0, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 0x1a0
	addi     r28, r28, 1

lbl_801C0BE0:
	cmpw     r28, r31
	blt      lbl_801C0BC0
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
 * Address:	801C0C08
 * Size:	00009C
 */
void MonoObjectMgr<Game::MapRoom>::MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__26Container<Q24Game7MapRoom>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__26Container<Q24Game7MapRoom>"@l
	lis      r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@ha
	lis      r3, "__vt__30MonoObjectMgr<Q24Game7MapRoom>"@ha
	stw      r0, 0(r31)
	li       r8, 0
	addi     r7, r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@l
	addi     r5, r3, "__vt__30MonoObjectMgr<Q24Game7MapRoom>"@l
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
 * Address:	801C0CA4
 * Size:	000028
 */
void __sinit_gameMapParts_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B5C20@ha
	stw      r0, lbl_80515A78@sda21(r13)
	stfsu    f0, lbl_804B5C20@l(r3)
	stfs     f0, lbl_80515A7C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C0CCC
 * Size:	000008
 */
void NodeObjectMgr<Game::MapUnit>::@28 @resetMgr()
{
	/*
	addi     r3, r3, -28
	b        "resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0CD4
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	801C0CDC
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"
	*/
}

/*
 * --INFO--
 * Address:	801C0CE4
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0CEC
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"
	*/
}

/*
 * --INFO--
 * Address:	801C0CF4
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0CFC
 * Size:	000008
 */
void ObjectMgr<Game::MapUnit>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0D04
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28 @resetMgr()
{
	/*
	addi     r3, r3, -28
	b        "resetMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0D0C
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__30MonoObjectMgr<Q24Game7MapRoom>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	801C0D14
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__30MonoObjectMgr<Q24Game7MapRoom>Ff"
	*/
}

/*
 * --INFO--
 * Address:	801C0D1C
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__30MonoObjectMgr<Q24Game7MapRoom>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0D24
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__30MonoObjectMgr<Q24Game7MapRoom>Fi"
	*/
}

/*
 * --INFO--
 * Address:	801C0D2C
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__30MonoObjectMgr<Q24Game7MapRoom>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0D34
 * Size:	000008
 */
void MonoObjectMgr<Game::MapRoom>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__30MonoObjectMgr<Q24Game7MapRoom>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0D3C
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__26ObjectMgr<Q24Game7MapRoom>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	801C0D44
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__26ObjectMgr<Q24Game7MapRoom>Ff"
	*/
}

/*
 * --INFO--
 * Address:	801C0D4C
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__26ObjectMgr<Q24Game7MapRoom>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0D54
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__26ObjectMgr<Q24Game7MapRoom>Fi"
	*/
}

/*
 * --INFO--
 * Address:	801C0D5C
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__26ObjectMgr<Q24Game7MapRoom>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0D64
 * Size:	000008
 */
void ObjectMgr<Game::MapRoom>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__26ObjectMgr<Q24Game7MapRoom>Fv"
	*/
}

/*
 * --INFO--
 * Address:	801C0D6C
 * Size:	000014
 */
void @280 @4 @Game::MapMgr::frozenable(void)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -280
	b        frozenable__Q24Game6MapMgrFv
	*/
}

/*
 * --INFO--
 * Address:	801C0D80
 * Size:	000014
 */
void @280 @4 @Game::RoomMapMgr::doDirectDraw(Graphics&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -280
	b        doDirectDraw__Q24Game10RoomMapMgrFR8Graphics
	*/
}

/*
 * --INFO--
 * Address:	801C0D94
 * Size:	000014
 */
void @280 @4 @Game::RoomMapMgr::doSimulation(float)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -280
	b        doSimulation__Q24Game10RoomMapMgrFf
	*/
}

/*
 * --INFO--
 * Address:	801C0DA8
 * Size:	000014
 */
void @280 @4 @Game::RoomMapMgr::doViewCalc(void)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -280
	b        doViewCalc__Q24Game10RoomMapMgrFv
	*/
}

/*
 * --INFO--
 * Address:	801C0DBC
 * Size:	000014
 */
void @280 @4 @Game::RoomMapMgr::doSetView(int)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -280
	b        doSetView__Q24Game10RoomMapMgrFi
	*/
}

/*
 * --INFO--
 * Address:	801C0DD0
 * Size:	000014
 */
void @280 @4 @Game::RoomMapMgr::doEntry(void)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -280
	b        doEntry__Q24Game10RoomMapMgrFv
	*/
}

/*
 * --INFO--
 * Address:	801C0DE4
 * Size:	000014
 */
void @280 @4 @Game::RoomMapMgr::doAnimation(void)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -280
	b        doAnimation__Q24Game10RoomMapMgrFv
	*/
}
