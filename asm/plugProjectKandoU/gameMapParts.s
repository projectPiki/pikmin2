.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_gameMapParts_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047FC70, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047FC70
.balign 4
.obj lbl_8047FC7C, local
	.asciz "gameMapParts"
.endobj lbl_8047FC7C
.balign 4
.obj lbl_8047FC8C, local
	.asciz "\t# dist/door-id/tekiflag\r\n"
.endobj lbl_8047FC8C
.balign 4
.obj lbl_8047FCA8, local
	.asciz "\t# index\r\n"
.endobj lbl_8047FCA8
.balign 4
.obj lbl_8047FCB4, local
	.asciz "\t# dir/offs/wpindex\r\n"
.endobj lbl_8047FCB4
.balign 4
.obj lbl_8047FCCC, local
	.asciz "\t# door links\r\n"
.endobj lbl_8047FCCC
.balign 4
.obj lbl_8047FCDC, local
	.asciz "\t# dX/dZ ; cell size\r\n"
.endobj lbl_8047FCDC
.balign 4
.obj lbl_8047FCF4, local
	.asciz "gameMapParts.cpp"
.endobj lbl_8047FCF4
.balign 4
.obj lbl_8047FD08, local # Shift-JIS
	.4byte 0x82E082A4
	.4byte 0x8E6782ED
	.4byte 0x82C882A2
	.2byte 0x0A00
.endobj lbl_8047FD08
.balign 4
.obj lbl_8047FD18, local
	.asciz "%s : not found !\n"
.endobj lbl_8047FD18
.balign 4
.obj lbl_8047FD2C, local
	.asciz "%s/arc.szs"
.endobj lbl_8047FD2C
.balign 4
.obj lbl_8047FD38, local
	.asciz "P2Assert"
.endobj lbl_8047FD38
.balign 4
.obj lbl_8047FD44, local
	.asciz "view.bmd"
.endobj lbl_8047FD44
.balign 4
.obj lbl_8047FD50, local
	.asciz "texture.bti"
.endobj lbl_8047FD50
.balign 4
.obj lbl_8047FD5C, local
	.asciz "%s_%d.btk"
.endobj lbl_8047FD5C
.balign 4
.obj lbl_8047FD68, local
	.asciz "%s/texts.szs"
.endobj lbl_8047FD68
.balign 4
.obj lbl_8047FD78, local
	.asciz "grid.bin"
.endobj lbl_8047FD78
.balign 4
.obj lbl_8047FD84, local
	.asciz "mapcode.bin"
.endobj lbl_8047FD84
.balign 4
.obj lbl_8047FD90, local
	.asciz "waterbox.txt"
.endobj lbl_8047FD90
.balign 4
.obj lbl_8047FDA0, local
	.asciz "route.txt"
.endobj lbl_8047FDA0
.balign 4
.obj lbl_8047FDAC, local
	.asciz "user/Kando/map/vrbox/%s.szs"
.endobj lbl_8047FDAC
.balign 4
.obj lbl_8047FDC8, local
	.asciz "model.bmd"
.endobj lbl_8047FDC8
.balign 4
.obj lbl_8047FDD4, local
	.asciz "no model.bmd in %s\n"
.endobj lbl_8047FDD4
.balign 4
.obj lbl_8047FDE8, local
	.asciz "user/Mukki/mapunits/units/%s"
.endobj lbl_8047FDE8
.balign 4
.obj lbl_8047FE08, local
	.asciz "%s not found !\n"
.endobj lbl_8047FE08
.balign 4
.obj lbl_8047FE18, local
	.asciz "user/Abe/cave/%s"
.endobj lbl_8047FE18
.balign 4
.obj lbl_8047FE2C, local
	.asciz "no light file (%s)\n"
.endobj lbl_8047FE2C
.balign 4
.obj lbl_8047FE40, local
	.asciz "user/Mukki/mapunits/arc/%s/texts.szs"
.endobj lbl_8047FE40
.balign 4
.obj lbl_8047FE68, local
	.asciz "no textARc !\n"
.endobj lbl_8047FE68
.balign 4
.obj lbl_8047FE78, local
	.asciz "layout.txt"
.endobj lbl_8047FE78
.balign 4
.obj lbl_8047FE84, local
	.asciz "246-CreateRandomMap"
.endobj lbl_8047FE84
.balign 4
.obj lbl_8047FE98, local
	.asciz "Model and Collision"
.endobj lbl_8047FE98
.balign 4
.obj lbl_8047FEAC, local
	.asciz "246-PlaceRooms"
.endobj lbl_8047FEAC
.balign 4
.obj lbl_8047FEBC, local
	.asciz "user/Mukki/mapunits/arc/%s"
.endobj lbl_8047FEBC
.balign 4
.obj lbl_8047FED8, local
	.asciz "no such unit %s\n"
.endobj lbl_8047FED8
.balign 4
.obj lbl_8047FEEC, local
	.asciz "siboudesu !\n"
.endobj lbl_8047FEEC
.balign 4
.obj lbl_8047FEFC, local
	.float 0.0
	.float 0.0
	.float 1.0
.endobj lbl_8047FEFC
.obj lbl_8047FF08, local
	.float 1.0
	.float 0.0
	.float 0.0
.endobj lbl_8047FF08
.obj lbl_8047FF14, local
	.float 0.0
	.float 0.0
	.float -1.0
.endobj lbl_8047FF14
.obj lbl_8047FF20, local
	.float -1.0
	.float 0.0
	.float 0.0
.endobj lbl_8047FF20
.balign 4
.obj lbl_8047FF2C, local
	.asciz "cap_conc"
.endobj lbl_8047FF2C
.balign 4
.obj lbl_8047FF38, local
	.asciz "ItemGateInitArg"
.endobj lbl_8047FF38
.balign 4
.obj lbl_8047FF48, local
	.asciz "ItemBigFountain::InitArg"
.endobj lbl_8047FF48
.balign 4
.obj lbl_8047FF64, local
	.asciz "ItemHole::InitArg"
.endobj lbl_8047FF64
.balign 4
.obj lbl_8047FF78, local
	.asciz "PelletInitArg"
.endobj lbl_8047FF78
.balign 4
.obj lbl_8047FF88, local
	.asciz "# %d/%d\r\n"
.endobj lbl_8047FF88

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804B5C2C, local
	.4byte .L_801B7350
	.4byte .L_801B74A8
	.4byte .L_801B75B4
	.4byte .L_801B6FA4
	.4byte .L_801B7120
	.4byte .L_801B728C
	.4byte .L_801B71A4
	.4byte .L_801B7218
.endobj lbl_804B5C2C
.obj __vt__Q24Game10RoomMapMgr, global
	.4byte 0
	.4byte 0
	.4byte hasHiddenCollision__Q24Game10RoomMapMgrFv
	.4byte constraintBoundBox__Q24Game10RoomMapMgrFRQ23Sys6Sphere
	.4byte "getStartPosition__Q24Game10RoomMapMgrFR10Vector3<f>i"
	.4byte getDemoMatrix__Q24Game10RoomMapMgrFv
	.4byte getBoundBox2d__Q24Game10RoomMapMgrFR10BoundBox2d
	.4byte getBoundBox__Q24Game10RoomMapMgrFR8BoundBox
	.4byte findRayIntersection__Q24Game10RoomMapMgrFRQ23Sys16RayIntersectInfo
	.4byte traceMove__Q24Game10RoomMapMgrFRQ24Game8MoveInfof
	.4byte "getMinY__Q24Game10RoomMapMgrFR10Vector3<f>"
	.4byte getCurrTri__Q24Game10RoomMapMgrFRQ24Game11CurrTriInfo
	.4byte createTriangles__Q24Game10RoomMapMgrFRQ23Sys17CreateTriangleArg
	.4byte setupJUTTextures__Q24Game10RoomMapMgrFv
	.4byte frozenable__Q24Game6MapMgrFv
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
.endobj __vt__Q24Game10RoomMapMgr
.obj __vt__Q24Game4Door, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game4DoorFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q24Game4Door
.obj __vt__Q24Game16MapUnitInterface, weak
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
.endobj __vt__Q24Game16MapUnitInterface
.obj "__vt__25Iterator<Q24Game7MapRoom>", weak
	.4byte 0
	.4byte 0
	.4byte "first__25Iterator<Q24Game7MapRoom>Fv"
	.4byte "next__25Iterator<Q24Game7MapRoom>Fv"
	.4byte "isDone__25Iterator<Q24Game7MapRoom>Fv"
	.4byte "__ml__25Iterator<Q24Game7MapRoom>Fv"
.endobj "__vt__25Iterator<Q24Game7MapRoom>"
.obj "__vt__26Container<Q24Game7MapRoom>", weak
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
.endobj "__vt__26Container<Q24Game7MapRoom>"
.obj "__vt__26ObjectMgr<Q24Game7MapRoom>", weak
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
.endobj "__vt__26ObjectMgr<Q24Game7MapRoom>"
.obj "__vt__30MonoObjectMgr<Q24Game7MapRoom>", weak
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
.endobj "__vt__30MonoObjectMgr<Q24Game7MapRoom>"
.obj __vt__Q24Game7MapRoom, global
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
.endobj __vt__Q24Game7MapRoom
.obj __vt__Q24Game15ItemGateInitArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q24Game15ItemGateInitArgFv
.endobj __vt__Q24Game15ItemGateInitArg
.obj __vt__Q34Game15ItemBigFountain7InitArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q34Game15ItemBigFountain7InitArgFv
.endobj __vt__Q34Game15ItemBigFountain7InitArg
.obj __vt__Q34Game8ItemHole7InitArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q34Game8ItemHole7InitArgFv
.endobj __vt__Q34Game8ItemHole7InitArg
.obj "__vt__25Iterator<Q24Game7MapUnit>", weak
	.4byte 0
	.4byte 0
	.4byte "first__25Iterator<Q24Game7MapUnit>Fv"
	.4byte "next__25Iterator<Q24Game7MapUnit>Fv"
	.4byte "isDone__25Iterator<Q24Game7MapUnit>Fv"
	.4byte "__ml__25Iterator<Q24Game7MapUnit>Fv"
.endobj "__vt__25Iterator<Q24Game7MapUnit>"
.obj __vt__Q24Game10MapUnitMgr, global
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
.endobj __vt__Q24Game10MapUnitMgr
.obj "__vt__28TObjectNode<Q24Game7MapUnit>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__28TObjectNode<Q24Game7MapUnit>Fv"
	.4byte getChildCount__5CNodeFv
.endobj "__vt__28TObjectNode<Q24Game7MapUnit>"
.obj "__vt__30NodeObjectMgr<Q24Game7MapUnit>", weak
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
.endobj "__vt__30NodeObjectMgr<Q24Game7MapUnit>"
.obj "__vt__26ObjectMgr<Q24Game7MapUnit>", weak
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
.endobj "__vt__26ObjectMgr<Q24Game7MapUnit>"
.obj "__vt__26Container<Q24Game7MapUnit>", weak
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
.endobj "__vt__26Container<Q24Game7MapUnit>"
.obj __vt__Q24Game7MapUnit, weak
	.4byte 0
	.4byte 0
	.4byte constructor__Q24Game7MapUnitFv
	.4byte doAnimation__Q24Game7MapUnitFv
	.4byte doEntry__Q24Game7MapUnitFv
	.4byte doSetView__Q24Game7MapUnitFi
	.4byte doViewCalc__Q24Game7MapUnitFv
	.4byte doSimulation__Q24Game7MapUnitFf
	.4byte doDirectDraw__Q24Game7MapUnitFR8Graphics
.endobj __vt__Q24Game7MapUnit
.obj __vt__Q24Game8DoorLink, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game8DoorLinkFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q24Game8DoorLink

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj numRoomCulled__Q24Game10RoomMapMgr, global
	.skip 0x4
.endobj numRoomCulled__Q24Game10RoomMapMgr
.obj mUseCylinderViewCulling__Q24Game10RoomMapMgr, global
	.skip 0x1
.endobj mUseCylinderViewCulling__Q24Game10RoomMapMgr

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80519440, local
	.float 0.0
.endobj lbl_80519440
.obj lbl_80519444, local
	.float 32768.0
.endobj lbl_80519444
.obj lbl_80519448, local
	.float -32768.0
.endobj lbl_80519448
.obj lbl_8051944C, local
	.float 170.0
.endobj lbl_8051944C
.obj lbl_80519450, local
	.float 128000.0
.endobj lbl_80519450
.obj lbl_80519454, local
	.float -128000.0
.endobj lbl_80519454
.obj lbl_80519458, local
	.float 1.0
.endobj lbl_80519458
.obj lbl_8051945C, local
	.float 0.5
.endobj lbl_8051945C
.obj lbl_80519460, local
	.float 30.0
.endobj lbl_80519460
.obj lbl_80519464, local
	.float 320.0
.endobj lbl_80519464
.obj lbl_80519468, local
	.float -90.0
.endobj lbl_80519468
.balign 8
.obj lbl_80519470, local
	.8byte 0x4330000080000000
.endobj lbl_80519470
.obj lbl_80519478, local
	.float 10.0
.endobj lbl_80519478
.obj lbl_8051947C, local
	.float 0.015625
.endobj lbl_8051947C
.obj lbl_80519480, local
	.float 0.6
.endobj lbl_80519480
.obj lbl_80519484, local
	.float 1.28E7
.endobj lbl_80519484
.obj lbl_80519488, local
	.float 328000.0
.endobj lbl_80519488
.obj lbl_8051948C, local # pi
	.float 3.1415927
.endobj lbl_8051948C
.obj lbl_80519490, local
	.float 0.0055555557
.endobj lbl_80519490
.obj lbl_80519494, local
	.float 100.0
.endobj lbl_80519494
.balign 4
.obj lbl_80519498, local
	.asciz "ENT-MAP"
.endobj lbl_80519498
.balign 4
.obj lbl_805194A0, local
	.asciz "room"
.endobj lbl_805194A0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn getDoor__Q24Game16MapUnitInterfaceFi, global
/* 801B6468 001B33A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B646C 001B33AC  7C 08 02 A6 */	mflr r0
/* 801B6470 001B33B0  38 63 01 18 */	addi r3, r3, 0x118
/* 801B6474 001B33B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B6478 001B33B8  48 25 B2 25 */	bl getChildAt__5CNodeFi
/* 801B647C 001B33BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B6480 001B33C0  7C 08 03 A6 */	mtlr r0
/* 801B6484 001B33C4  38 21 00 10 */	addi r1, r1, 0x10
/* 801B6488 001B33C8  4E 80 00 20 */	blr 
.endfn getDoor__Q24Game16MapUnitInterfaceFi

.fn getCellSize__Q24Game16MapUnitInterfaceFRiRi, global
/* 801B648C 001B33CC  80 C3 00 18 */	lwz r6, 0x18(r3)
/* 801B6490 001B33D0  A0 06 00 94 */	lhz r0, 0x94(r6)
/* 801B6494 001B33D4  90 04 00 00 */	stw r0, 0(r4)
/* 801B6498 001B33D8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801B649C 001B33DC  A0 03 00 96 */	lhz r0, 0x96(r3)
/* 801B64A0 001B33E0  90 05 00 00 */	stw r0, 0(r5)
/* 801B64A4 001B33E4  4E 80 00 20 */	blr 
.endfn getCellSize__Q24Game16MapUnitInterfaceFRiRi

.fn getLink__Q24Game4DoorFi, global
/* 801B64A8 001B33E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B64AC 001B33EC  7C 08 02 A6 */	mflr r0
/* 801B64B0 001B33F0  38 63 00 20 */	addi r3, r3, 0x20
/* 801B64B4 001B33F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B64B8 001B33F8  48 25 B1 E5 */	bl getChildAt__5CNodeFi
/* 801B64BC 001B33FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B64C0 001B3400  7C 08 03 A6 */	mtlr r0
/* 801B64C4 001B3404  38 21 00 10 */	addi r1, r1, 0x10
/* 801B64C8 001B3408  4E 80 00 20 */	blr 
.endfn getLink__Q24Game4DoorFi

.fn read__Q24Game4DoorFR6Stream, global
/* 801B64CC 001B340C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B64D0 001B3410  7C 08 02 A6 */	mflr r0
/* 801B64D4 001B3414  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B64D8 001B3418  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801B64DC 001B341C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801B64E0 001B3420  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801B64E4 001B3424  7C 9D 23 78 */	mr r29, r4
/* 801B64E8 001B3428  93 81 00 10 */	stw r28, 0x10(r1)
/* 801B64EC 001B342C  7C 7C 1B 78 */	mr r28, r3
/* 801B64F0 001B3430  7F A3 EB 78 */	mr r3, r29
/* 801B64F4 001B3434  48 25 E5 9D */	bl readInt__6StreamFv
/* 801B64F8 001B3438  90 7C 00 18 */	stw r3, 0x18(r28)
/* 801B64FC 001B343C  7F A3 EB 78 */	mr r3, r29
/* 801B6500 001B3440  48 25 E5 91 */	bl readInt__6StreamFv
/* 801B6504 001B3444  90 7C 00 44 */	stw r3, 0x44(r28)
/* 801B6508 001B3448  7F A3 EB 78 */	mr r3, r29
/* 801B650C 001B344C  48 25 E5 85 */	bl readInt__6StreamFv
/* 801B6510 001B3450  90 7C 00 48 */	stw r3, 0x48(r28)
/* 801B6514 001B3454  7F A3 EB 78 */	mr r3, r29
/* 801B6518 001B3458  48 25 E5 79 */	bl readInt__6StreamFv
/* 801B651C 001B345C  90 7C 00 4C */	stw r3, 0x4c(r28)
/* 801B6520 001B3460  7F A3 EB 78 */	mr r3, r29
/* 801B6524 001B3464  48 25 E5 6D */	bl readInt__6StreamFv
/* 801B6528 001B3468  90 7C 00 1C */	stw r3, 0x1c(r28)
/* 801B652C 001B346C  3B C0 00 00 */	li r30, 0
/* 801B6530 001B3470  48 00 00 74 */	b .L_801B65A4
.L_801B6534:
/* 801B6534 001B3474  38 60 00 24 */	li r3, 0x24
/* 801B6538 001B3478  4B E6 D9 6D */	bl __nw__FUl
/* 801B653C 001B347C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801B6540 001B3480  41 82 00 24 */	beq .L_801B6564
/* 801B6544 001B3484  48 25 AE 4D */	bl __ct__5CNodeFv
/* 801B6548 001B3488  3C 60 80 4B */	lis r3, __vt__Q24Game8DoorLink@ha
/* 801B654C 001B348C  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B6550 001B3490  38 63 60 D4 */	addi r3, r3, __vt__Q24Game8DoorLink@l
/* 801B6554 001B3494  38 00 00 01 */	li r0, 1
/* 801B6558 001B3498  90 7F 00 00 */	stw r3, 0(r31)
/* 801B655C 001B349C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 801B6560 001B34A0  98 1F 00 20 */	stb r0, 0x20(r31)
.L_801B6564:
/* 801B6564 001B34A4  7F A3 EB 78 */	mr r3, r29
/* 801B6568 001B34A8  48 25 E8 45 */	bl readFloat__6StreamFv
/* 801B656C 001B34AC  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 801B6570 001B34B0  7F A3 EB 78 */	mr r3, r29
/* 801B6574 001B34B4  48 25 E5 1D */	bl readInt__6StreamFv
/* 801B6578 001B34B8  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 801B657C 001B34BC  7F A3 EB 78 */	mr r3, r29
/* 801B6580 001B34C0  48 25 E5 11 */	bl readInt__6StreamFv
/* 801B6584 001B34C4  7C 03 00 D0 */	neg r0, r3
/* 801B6588 001B34C8  7F E4 FB 78 */	mr r4, r31
/* 801B658C 001B34CC  7C 00 1B 78 */	or r0, r0, r3
/* 801B6590 001B34D0  38 7C 00 20 */	addi r3, r28, 0x20
/* 801B6594 001B34D4  54 00 0F FE */	srwi r0, r0, 0x1f
/* 801B6598 001B34D8  98 1F 00 20 */	stb r0, 0x20(r31)
/* 801B659C 001B34DC  48 25 AE 6D */	bl add__5CNodeFP5CNode
/* 801B65A0 001B34E0  3B DE 00 01 */	addi r30, r30, 1
.L_801B65A4:
/* 801B65A4 001B34E4  80 1C 00 1C */	lwz r0, 0x1c(r28)
/* 801B65A8 001B34E8  7C 1E 00 00 */	cmpw r30, r0
/* 801B65AC 001B34EC  41 80 FF 88 */	blt .L_801B6534
/* 801B65B0 001B34F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B65B4 001B34F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801B65B8 001B34F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801B65BC 001B34FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801B65C0 001B3500  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801B65C4 001B3504  7C 08 03 A6 */	mtlr r0
/* 801B65C8 001B3508  38 21 00 20 */	addi r1, r1, 0x20
/* 801B65CC 001B350C  4E 80 00 20 */	blr 
.endfn read__Q24Game4DoorFR6Stream

.fn __ct__Q24Game7MapUnitFv, global
/* 801B65D0 001B3510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B65D4 001B3514  7C 08 02 A6 */	mflr r0
/* 801B65D8 001B3518  3C 80 80 4B */	lis r4, __vt__Q24Game7MapUnit@ha
/* 801B65DC 001B351C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B65E0 001B3520  38 04 60 B0 */	addi r0, r4, __vt__Q24Game7MapUnit@l
/* 801B65E4 001B3524  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B65E8 001B3528  93 C1 00 08 */	stw r30, 8(r1)
/* 801B65EC 001B352C  7C 7E 1B 78 */	mr r30, r3
/* 801B65F0 001B3530  3B FE 00 10 */	addi r31, r30, 0x10
/* 801B65F4 001B3534  90 03 00 00 */	stw r0, 0(r3)
/* 801B65F8 001B3538  7F E3 FB 78 */	mr r3, r31
/* 801B65FC 001B353C  48 25 AD 95 */	bl __ct__5CNodeFv
/* 801B6600 001B3540  3C 80 80 4F */	lis r4, __vt__12MapCollision@ha
/* 801B6604 001B3544  38 7E 00 34 */	addi r3, r30, 0x34
/* 801B6608 001B3548  38 04 B6 F8 */	addi r0, r4, __vt__12MapCollision@l
/* 801B660C 001B354C  90 1F 00 00 */	stw r0, 0(r31)
/* 801B6610 001B3550  4B FF 8D 41 */	bl __ct__Q24Game6SeaMgrFv
/* 801B6614 001B3554  C0 22 B0 E4 */	lfs f1, lbl_80519444@sda21(r2)
/* 801B6618 001B3558  38 7E 00 AC */	addi r3, r30, 0xac
/* 801B661C 001B355C  C0 02 B0 E8 */	lfs f0, lbl_80519448@sda21(r2)
/* 801B6620 001B3560  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 801B6624 001B3564  D0 3E 00 80 */	stfs f1, 0x80(r30)
/* 801B6628 001B3568  D0 3E 00 84 */	stfs f1, 0x84(r30)
/* 801B662C 001B356C  D0 1E 00 88 */	stfs f0, 0x88(r30)
/* 801B6630 001B3570  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 801B6634 001B3574  D0 1E 00 90 */	stfs f0, 0x90(r30)
/* 801B6638 001B3578  4B FB DF 59 */	bl __ct__Q24Game14EditorRouteMgrFv
/* 801B663C 001B357C  38 80 00 00 */	li r4, 0
/* 801B6640 001B3580  38 00 FF FF */	li r0, -1
/* 801B6644 001B3584  90 9E 00 0C */	stw r4, 0xc(r30)
/* 801B6648 001B3588  7F C3 F3 78 */	mr r3, r30
/* 801B664C 001B358C  B0 1E 00 04 */	sth r0, 4(r30)
/* 801B6650 001B3590  98 9E 00 A8 */	stb r4, 0xa8(r30)
/* 801B6654 001B3594  B0 9E 00 96 */	sth r4, 0x96(r30)
/* 801B6658 001B3598  B0 9E 00 94 */	sth r4, 0x94(r30)
/* 801B665C 001B359C  90 9E 00 2C */	stw r4, 0x2c(r30)
/* 801B6660 001B35A0  90 9E 00 30 */	stw r4, 0x30(r30)
/* 801B6664 001B35A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B6668 001B35A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B666C 001B35AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B6670 001B35B0  7C 08 03 A6 */	mtlr r0
/* 801B6674 001B35B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801B6678 001B35B8  4E 80 00 20 */	blr 
.endfn __ct__Q24Game7MapUnitFv

.fn getBoundBox__12MapCollisionFR8BoundBox, weak
/* 801B667C 001B35BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B6680 001B35C0  7C 08 02 A6 */	mflr r0
/* 801B6684 001B35C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B6688 001B35C8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801B668C 001B35CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B6690 001B35D0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801B6694 001B35D4  7D 89 03 A6 */	mtctr r12
/* 801B6698 001B35D8  4E 80 04 21 */	bctrl 
/* 801B669C 001B35DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B66A0 001B35E0  7C 08 03 A6 */	mtlr r0
/* 801B66A4 001B35E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801B66A8 001B35E8  4E 80 00 20 */	blr 
.endfn getBoundBox__12MapCollisionFR8BoundBox

.fn load__Q24Game7MapUnitFR6Stream, global
/* 801B66AC 001B35EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B66B0 001B35F0  7C 08 02 A6 */	mflr r0
/* 801B66B4 001B35F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B66B8 001B35F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B66BC 001B35FC  7C 9F 23 78 */	mr r31, r4
/* 801B66C0 001B3600  93 C1 00 08 */	stw r30, 8(r1)
/* 801B66C4 001B3604  7C 7E 1B 78 */	mr r30, r3
/* 801B66C8 001B3608  7F E3 FB 78 */	mr r3, r31
/* 801B66CC 001B360C  48 25 E0 99 */	bl readShort__6StreamFv
/* 801B66D0 001B3610  B0 7E 00 94 */	sth r3, 0x94(r30)
/* 801B66D4 001B3614  7F E3 FB 78 */	mr r3, r31
/* 801B66D8 001B3618  48 25 E0 8D */	bl readShort__6StreamFv
/* 801B66DC 001B361C  B0 7E 00 96 */	sth r3, 0x96(r30)
/* 801B66E0 001B3620  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B66E4 001B3624  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B66E8 001B3628  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B66EC 001B362C  7C 08 03 A6 */	mtlr r0
/* 801B66F0 001B3630  38 21 00 10 */	addi r1, r1, 0x10
/* 801B66F4 001B3634  4E 80 00 20 */	blr 
.endfn load__Q24Game7MapUnitFR6Stream

.fn "__dt__30NodeObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801B66F8 001B3638  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B66FC 001B363C  7C 08 02 A6 */	mflr r0
/* 801B6700 001B3640  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B6704 001B3644  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B6708 001B3648  7C 9F 23 78 */	mr r31, r4
/* 801B670C 001B364C  93 C1 00 08 */	stw r30, 8(r1)
/* 801B6710 001B3650  7C 7E 1B 79 */	or. r30, r3, r3
/* 801B6714 001B3654  41 82 00 90 */	beq .L_801B67A4
/* 801B6718 001B3658  3C 60 80 4B */	lis r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@ha
/* 801B671C 001B365C  34 1E 00 20 */	addic. r0, r30, 0x20
/* 801B6720 001B3660  38 63 5F 88 */	addi r3, r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@l
/* 801B6724 001B3664  90 7E 00 00 */	stw r3, 0(r30)
/* 801B6728 001B3668  38 03 00 2C */	addi r0, r3, 0x2c
/* 801B672C 001B366C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801B6730 001B3670  41 82 00 1C */	beq .L_801B674C
/* 801B6734 001B3674  3C 80 80 4B */	lis r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
/* 801B6738 001B3678  38 7E 00 20 */	addi r3, r30, 0x20
/* 801B673C 001B367C  38 04 5F 78 */	addi r0, r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
/* 801B6740 001B3680  38 80 00 00 */	li r4, 0
/* 801B6744 001B3684  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801B6748 001B3688  48 25 AE 41 */	bl __dt__5CNodeFv
.L_801B674C:
/* 801B674C 001B368C  28 1E 00 00 */	cmplwi r30, 0
/* 801B6750 001B3690  41 82 00 44 */	beq .L_801B6794
/* 801B6754 001B3694  3C 60 80 4B */	lis r3, "__vt__26ObjectMgr<Q24Game7MapUnit>"@ha
/* 801B6758 001B3698  38 63 60 08 */	addi r3, r3, "__vt__26ObjectMgr<Q24Game7MapUnit>"@l
/* 801B675C 001B369C  90 7E 00 00 */	stw r3, 0(r30)
/* 801B6760 001B36A0  38 03 00 2C */	addi r0, r3, 0x2c
/* 801B6764 001B36A4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801B6768 001B36A8  41 82 00 2C */	beq .L_801B6794
/* 801B676C 001B36AC  3C 60 80 4B */	lis r3, "__vt__26Container<Q24Game7MapUnit>"@ha
/* 801B6770 001B36B0  38 03 60 84 */	addi r0, r3, "__vt__26Container<Q24Game7MapUnit>"@l
/* 801B6774 001B36B4  90 1E 00 00 */	stw r0, 0(r30)
/* 801B6778 001B36B8  41 82 00 1C */	beq .L_801B6794
/* 801B677C 001B36BC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801B6780 001B36C0  7F C3 F3 78 */	mr r3, r30
/* 801B6784 001B36C4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801B6788 001B36C8  38 80 00 00 */	li r4, 0
/* 801B678C 001B36CC  90 1E 00 00 */	stw r0, 0(r30)
/* 801B6790 001B36D0  48 25 AD F9 */	bl __dt__5CNodeFv
.L_801B6794:
/* 801B6794 001B36D4  7F E0 07 35 */	extsh. r0, r31
/* 801B6798 001B36D8  40 81 00 0C */	ble .L_801B67A4
/* 801B679C 001B36DC  7F C3 F3 78 */	mr r3, r30
/* 801B67A0 001B36E0  4B E6 D9 15 */	bl __dl__FPv
.L_801B67A4:
/* 801B67A4 001B36E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B67A8 001B36E8  7F C3 F3 78 */	mr r3, r30
/* 801B67AC 001B36EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B67B0 001B36F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B67B4 001B36F4  7C 08 03 A6 */	mtlr r0
/* 801B67B8 001B36F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801B67BC 001B36FC  4E 80 00 20 */	blr 
.endfn "__dt__30NodeObjectMgr<Q24Game7MapUnit>Fv"

.fn "__dt__28TObjectNode<Q24Game7MapUnit>Fv", weak
/* 801B67C0 001B3700  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B67C4 001B3704  7C 08 02 A6 */	mflr r0
/* 801B67C8 001B3708  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B67CC 001B370C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B67D0 001B3710  7C 9F 23 78 */	mr r31, r4
/* 801B67D4 001B3714  93 C1 00 08 */	stw r30, 8(r1)
/* 801B67D8 001B3718  7C 7E 1B 79 */	or. r30, r3, r3
/* 801B67DC 001B371C  41 82 00 28 */	beq .L_801B6804
/* 801B67E0 001B3720  3C A0 80 4B */	lis r5, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
/* 801B67E4 001B3724  38 80 00 00 */	li r4, 0
/* 801B67E8 001B3728  38 05 5F 78 */	addi r0, r5, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
/* 801B67EC 001B372C  90 1E 00 00 */	stw r0, 0(r30)
/* 801B67F0 001B3730  48 25 AD 99 */	bl __dt__5CNodeFv
/* 801B67F4 001B3734  7F E0 07 35 */	extsh. r0, r31
/* 801B67F8 001B3738  40 81 00 0C */	ble .L_801B6804
/* 801B67FC 001B373C  7F C3 F3 78 */	mr r3, r30
/* 801B6800 001B3740  4B E6 D8 B5 */	bl __dl__FPv
.L_801B6804:
/* 801B6804 001B3744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B6808 001B3748  7F C3 F3 78 */	mr r3, r30
/* 801B680C 001B374C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B6810 001B3750  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B6814 001B3754  7C 08 03 A6 */	mtlr r0
/* 801B6818 001B3758  38 21 00 10 */	addi r1, r1, 0x10
/* 801B681C 001B375C  4E 80 00 20 */	blr 
.endfn "__dt__28TObjectNode<Q24Game7MapUnit>Fv"

.fn "__dt__26ObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801B6820 001B3760  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B6824 001B3764  7C 08 02 A6 */	mflr r0
/* 801B6828 001B3768  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B682C 001B376C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B6830 001B3770  7C 9F 23 78 */	mr r31, r4
/* 801B6834 001B3774  93 C1 00 08 */	stw r30, 8(r1)
/* 801B6838 001B3778  7C 7E 1B 79 */	or. r30, r3, r3
/* 801B683C 001B377C  41 82 00 50 */	beq .L_801B688C
/* 801B6840 001B3780  3C 80 80 4B */	lis r4, "__vt__26ObjectMgr<Q24Game7MapUnit>"@ha
/* 801B6844 001B3784  38 84 60 08 */	addi r4, r4, "__vt__26ObjectMgr<Q24Game7MapUnit>"@l
/* 801B6848 001B3788  90 9E 00 00 */	stw r4, 0(r30)
/* 801B684C 001B378C  38 04 00 2C */	addi r0, r4, 0x2c
/* 801B6850 001B3790  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801B6854 001B3794  41 82 00 28 */	beq .L_801B687C
/* 801B6858 001B3798  3C 80 80 4B */	lis r4, "__vt__26Container<Q24Game7MapUnit>"@ha
/* 801B685C 001B379C  38 04 60 84 */	addi r0, r4, "__vt__26Container<Q24Game7MapUnit>"@l
/* 801B6860 001B37A0  90 1E 00 00 */	stw r0, 0(r30)
/* 801B6864 001B37A4  41 82 00 18 */	beq .L_801B687C
/* 801B6868 001B37A8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801B686C 001B37AC  38 80 00 00 */	li r4, 0
/* 801B6870 001B37B0  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801B6874 001B37B4  90 1E 00 00 */	stw r0, 0(r30)
/* 801B6878 001B37B8  48 25 AD 11 */	bl __dt__5CNodeFv
.L_801B687C:
/* 801B687C 001B37BC  7F E0 07 35 */	extsh. r0, r31
/* 801B6880 001B37C0  40 81 00 0C */	ble .L_801B688C
/* 801B6884 001B37C4  7F C3 F3 78 */	mr r3, r30
/* 801B6888 001B37C8  4B E6 D8 2D */	bl __dl__FPv
.L_801B688C:
/* 801B688C 001B37CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B6890 001B37D0  7F C3 F3 78 */	mr r3, r30
/* 801B6894 001B37D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B6898 001B37D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B689C 001B37DC  7C 08 03 A6 */	mtlr r0
/* 801B68A0 001B37E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801B68A4 001B37E4  4E 80 00 20 */	blr 
.endfn "__dt__26ObjectMgr<Q24Game7MapUnit>Fv"

.fn "__dt__26Container<Q24Game7MapUnit>Fv", weak
/* 801B68A8 001B37E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B68AC 001B37EC  7C 08 02 A6 */	mflr r0
/* 801B68B0 001B37F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B68B4 001B37F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B68B8 001B37F8  7C 9F 23 78 */	mr r31, r4
/* 801B68BC 001B37FC  93 C1 00 08 */	stw r30, 8(r1)
/* 801B68C0 001B3800  7C 7E 1B 79 */	or. r30, r3, r3
/* 801B68C4 001B3804  41 82 00 38 */	beq .L_801B68FC
/* 801B68C8 001B3808  3C 80 80 4B */	lis r4, "__vt__26Container<Q24Game7MapUnit>"@ha
/* 801B68CC 001B380C  38 04 60 84 */	addi r0, r4, "__vt__26Container<Q24Game7MapUnit>"@l
/* 801B68D0 001B3810  90 1E 00 00 */	stw r0, 0(r30)
/* 801B68D4 001B3814  41 82 00 18 */	beq .L_801B68EC
/* 801B68D8 001B3818  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801B68DC 001B381C  38 80 00 00 */	li r4, 0
/* 801B68E0 001B3820  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801B68E4 001B3824  90 1E 00 00 */	stw r0, 0(r30)
/* 801B68E8 001B3828  48 25 AC A1 */	bl __dt__5CNodeFv
.L_801B68EC:
/* 801B68EC 001B382C  7F E0 07 35 */	extsh. r0, r31
/* 801B68F0 001B3830  40 81 00 0C */	ble .L_801B68FC
/* 801B68F4 001B3834  7F C3 F3 78 */	mr r3, r30
/* 801B68F8 001B3838  4B E6 D7 BD */	bl __dl__FPv
.L_801B68FC:
/* 801B68FC 001B383C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B6900 001B3840  7F C3 F3 78 */	mr r3, r30
/* 801B6904 001B3844  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B6908 001B3848  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B690C 001B384C  7C 08 03 A6 */	mtlr r0
/* 801B6910 001B3850  38 21 00 10 */	addi r1, r1, 0x10
/* 801B6914 001B3854  4E 80 00 20 */	blr 
.endfn "__dt__26Container<Q24Game7MapUnit>Fv"

.fn getAt__Q24Game10MapUnitMgrFi, global
/* 801B6918 001B3858  2C 04 00 00 */	cmpwi r4, 0
/* 801B691C 001B385C  80 A3 00 30 */	lwz r5, 0x30(r3)
/* 801B6920 001B3860  38 C0 00 00 */	li r6, 0
/* 801B6924 001B3864  40 81 00 64 */	ble .L_801B6988
/* 801B6928 001B3868  2C 04 00 08 */	cmpwi r4, 8
/* 801B692C 001B386C  38 64 FF F8 */	addi r3, r4, -8
/* 801B6930 001B3870  40 81 00 40 */	ble .L_801B6970
/* 801B6934 001B3874  38 03 00 07 */	addi r0, r3, 7
/* 801B6938 001B3878  54 00 E8 FE */	srwi r0, r0, 3
/* 801B693C 001B387C  7C 09 03 A6 */	mtctr r0
/* 801B6940 001B3880  2C 03 00 00 */	cmpwi r3, 0
/* 801B6944 001B3884  40 81 00 2C */	ble .L_801B6970
.L_801B6948:
/* 801B6948 001B3888  80 65 00 04 */	lwz r3, 4(r5)
/* 801B694C 001B388C  38 C6 00 08 */	addi r6, r6, 8
/* 801B6950 001B3890  80 63 00 04 */	lwz r3, 4(r3)
/* 801B6954 001B3894  80 63 00 04 */	lwz r3, 4(r3)
/* 801B6958 001B3898  80 63 00 04 */	lwz r3, 4(r3)
/* 801B695C 001B389C  80 63 00 04 */	lwz r3, 4(r3)
/* 801B6960 001B38A0  80 63 00 04 */	lwz r3, 4(r3)
/* 801B6964 001B38A4  80 63 00 04 */	lwz r3, 4(r3)
/* 801B6968 001B38A8  80 A3 00 04 */	lwz r5, 4(r3)
/* 801B696C 001B38AC  42 00 FF DC */	bdnz .L_801B6948
.L_801B6970:
/* 801B6970 001B38B0  7C 06 20 50 */	subf r0, r6, r4
/* 801B6974 001B38B4  7C 09 03 A6 */	mtctr r0
/* 801B6978 001B38B8  7C 06 20 00 */	cmpw r6, r4
/* 801B697C 001B38BC  40 80 00 0C */	bge .L_801B6988
.L_801B6980:
/* 801B6980 001B38C0  80 A5 00 04 */	lwz r5, 4(r5)
/* 801B6984 001B38C4  42 00 FF FC */	bdnz .L_801B6980
.L_801B6988:
/* 801B6988 001B38C8  28 05 00 00 */	cmplwi r5, 0
/* 801B698C 001B38CC  41 82 00 0C */	beq .L_801B6998
/* 801B6990 001B38D0  80 65 00 18 */	lwz r3, 0x18(r5)
/* 801B6994 001B38D4  4E 80 00 20 */	blr 
.L_801B6998:
/* 801B6998 001B38D8  38 60 00 00 */	li r3, 0
/* 801B699C 001B38DC  4E 80 00 20 */	blr 
.endfn getAt__Q24Game10MapUnitMgrFi

.fn "isDone__25Iterator<Q24Game7MapUnit>Fv", weak
/* 801B69A0 001B38E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B69A4 001B38E4  7C 08 02 A6 */	mflr r0
/* 801B69A8 001B38E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B69AC 001B38EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B69B0 001B38F0  7C 7F 1B 78 */	mr r31, r3
/* 801B69B4 001B38F4  80 63 00 08 */	lwz r3, 8(r3)
/* 801B69B8 001B38F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B69BC 001B38FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B69C0 001B3900  7D 89 03 A6 */	mtctr r12
/* 801B69C4 001B3904  4E 80 04 21 */	bctrl 
/* 801B69C8 001B3908  80 1F 00 04 */	lwz r0, 4(r31)
/* 801B69CC 001B390C  7C 00 18 50 */	subf r0, r0, r3
/* 801B69D0 001B3910  7C 00 00 34 */	cntlzw r0, r0
/* 801B69D4 001B3914  54 03 D9 7E */	srwi r3, r0, 5
/* 801B69D8 001B3918  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B69DC 001B391C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B69E0 001B3920  7C 08 03 A6 */	mtlr r0
/* 801B69E4 001B3924  38 21 00 10 */	addi r1, r1, 0x10
/* 801B69E8 001B3928  4E 80 00 20 */	blr 
.endfn "isDone__25Iterator<Q24Game7MapUnit>Fv"

.fn makeUnit__Q24Game10MapUnitMgrFPQ24Game7MapUnitPc, global
/* 801B69EC 001B392C  94 21 ED 50 */	stwu r1, -0x12b0(r1)
/* 801B69F0 001B3930  7C 08 02 A6 */	mflr r0
/* 801B69F4 001B3934  3C 60 80 48 */	lis r3, lbl_8047FC70@ha
/* 801B69F8 001B3938  90 01 12 B4 */	stw r0, 0x12b4(r1)
/* 801B69FC 001B393C  BF 21 12 94 */	stmw r25, 0x1294(r1)
/* 801B6A00 001B3940  3B C3 FC 70 */	addi r30, r3, lbl_8047FC70@l
/* 801B6A04 001B3944  7C 9F 23 78 */	mr r31, r4
/* 801B6A08 001B3948  7C BB 2B 78 */	mr r27, r5
/* 801B6A0C 001B394C  38 61 00 08 */	addi r3, r1, 8
/* 801B6A10 001B3950  38 9E 00 BC */	addi r4, r30, 0xbc
/* 801B6A14 001B3954  4C C6 31 82 */	crclr 6
/* 801B6A18 001B3958  4B F1 0A 21 */	bl sprintf
/* 801B6A1C 001B395C  38 61 00 08 */	addi r3, r1, 8
/* 801B6A20 001B3960  38 80 00 01 */	li r4, 1
/* 801B6A24 001B3964  38 A0 00 00 */	li r5, 0
/* 801B6A28 001B3968  38 C0 00 01 */	li r6, 1
/* 801B6A2C 001B396C  4B E6 47 05 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 801B6A30 001B3970  7C 7D 1B 79 */	or. r29, r3, r3
/* 801B6A34 001B3974  40 82 00 18 */	bne .L_801B6A4C
/* 801B6A38 001B3978  38 7E 00 84 */	addi r3, r30, 0x84
/* 801B6A3C 001B397C  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 801B6A40 001B3980  38 80 02 8B */	li r4, 0x28b
/* 801B6A44 001B3984  4C C6 31 82 */	crclr 6
/* 801B6A48 001B3988  4B E7 3B F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801B6A4C:
/* 801B6A4C 001B398C  7F A3 EB 78 */	mr r3, r29
/* 801B6A50 001B3990  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 801B6A54 001B3994  81 9D 00 00 */	lwz r12, 0(r29)
/* 801B6A58 001B3998  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B6A5C 001B399C  7D 89 03 A6 */	mtctr r12
/* 801B6A60 001B39A0  4E 80 04 21 */	bctrl 
/* 801B6A64 001B39A4  7C 7A 1B 79 */	or. r26, r3, r3
/* 801B6A68 001B39A8  40 82 00 18 */	bne .L_801B6A80
/* 801B6A6C 001B39AC  38 7E 00 84 */	addi r3, r30, 0x84
/* 801B6A70 001B39B0  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 801B6A74 001B39B4  38 80 02 91 */	li r4, 0x291
/* 801B6A78 001B39B8  4C C6 31 82 */	crclr 6
/* 801B6A7C 001B39BC  4B E7 3B C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801B6A80:
/* 801B6A80 001B39C0  7F 43 D3 78 */	mr r3, r26
/* 801B6A84 001B39C4  3C 80 20 00 */	lis r4, 0x2000
/* 801B6A88 001B39C8  4B EB 8E 0D */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 801B6A8C 001B39CC  90 7F 00 0C */	stw r3, 0xc(r31)
/* 801B6A90 001B39D0  3C 80 00 04 */	lis r4, 4
/* 801B6A94 001B39D4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801B6A98 001B39D8  4B EC CE 41 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801B6A9C 001B39DC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801B6AA0 001B39E0  4B EC CF 91 */	bl makeSharedDL__12J3DModelDataFv
/* 801B6AA4 001B39E4  7F A3 EB 78 */	mr r3, r29
/* 801B6AA8 001B39E8  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 801B6AAC 001B39EC  81 9D 00 00 */	lwz r12, 0(r29)
/* 801B6AB0 001B39F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B6AB4 001B39F4  7D 89 03 A6 */	mtctr r12
/* 801B6AB8 001B39F8  4E 80 04 21 */	bctrl 
/* 801B6ABC 001B39FC  28 03 00 00 */	cmplwi r3, 0
/* 801B6AC0 001B3A00  41 82 00 10 */	beq .L_801B6AD0
/* 801B6AC4 001B3A04  90 7F 00 30 */	stw r3, 0x30(r31)
/* 801B6AC8 001B3A08  38 00 00 00 */	li r0, 0
/* 801B6ACC 001B3A0C  90 1F 00 2C */	stw r0, 0x2c(r31)
.L_801B6AD0:
/* 801B6AD0 001B3A10  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801B6AD4 001B3A14  38 80 00 00 */	li r4, 0
/* 801B6AD8 001B3A18  48 28 77 C5 */	bl enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
/* 801B6ADC 001B3A1C  38 00 00 00 */	li r0, 0
/* 801B6AE0 001B3A20  3B 80 00 00 */	li r28, 0
/* 801B6AE4 001B3A24  90 1F 00 E8 */	stw r0, 0xe8(r31)
/* 801B6AE8 001B3A28  3B 40 00 00 */	li r26, 0
.L_801B6AEC:
/* 801B6AEC 001B3A2C  7F 65 DB 78 */	mr r5, r27
/* 801B6AF0 001B3A30  38 61 00 08 */	addi r3, r1, 8
/* 801B6AF4 001B3A34  38 9E 00 EC */	addi r4, r30, 0xec
/* 801B6AF8 001B3A38  38 DA 00 01 */	addi r6, r26, 1
/* 801B6AFC 001B3A3C  4C C6 31 82 */	crclr 6
/* 801B6B00 001B3A40  4B F1 09 39 */	bl sprintf
/* 801B6B04 001B3A44  38 61 00 08 */	addi r3, r1, 8
/* 801B6B08 001B3A48  4B F1 3E 09 */	bl strlen
/* 801B6B0C 001B3A4C  38 81 00 08 */	addi r4, r1, 8
/* 801B6B10 001B3A50  7C 84 1A 14 */	add r4, r4, r3
/* 801B6B14 001B3A54  7C 69 03 A6 */	mtctr r3
/* 801B6B18 001B3A58  2C 03 00 00 */	cmpwi r3, 0
/* 801B6B1C 001B3A5C  40 81 00 24 */	ble .L_801B6B40
.L_801B6B20:
/* 801B6B20 001B3A60  88 04 00 00 */	lbz r0, 0(r4)
/* 801B6B24 001B3A64  2C 00 00 2F */	cmpwi r0, 0x2f
/* 801B6B28 001B3A68  40 82 00 0C */	bne .L_801B6B34
/* 801B6B2C 001B3A6C  38 84 00 01 */	addi r4, r4, 1
/* 801B6B30 001B3A70  48 00 00 10 */	b .L_801B6B40
.L_801B6B34:
/* 801B6B34 001B3A74  38 84 FF FF */	addi r4, r4, -1
/* 801B6B38 001B3A78  38 63 FF FF */	addi r3, r3, -1
/* 801B6B3C 001B3A7C  42 00 FF E4 */	bdnz .L_801B6B20
.L_801B6B40:
/* 801B6B40 001B3A80  81 9D 00 00 */	lwz r12, 0(r29)
/* 801B6B44 001B3A84  7F A3 EB 78 */	mr r3, r29
/* 801B6B48 001B3A88  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B6B4C 001B3A8C  7D 89 03 A6 */	mtctr r12
/* 801B6B50 001B3A90  4E 80 04 21 */	bctrl 
/* 801B6B54 001B3A94  28 03 00 00 */	cmplwi r3, 0
/* 801B6B58 001B3A98  41 82 00 14 */	beq .L_801B6B6C
/* 801B6B5C 001B3A9C  3B 5A 00 01 */	addi r26, r26, 1
/* 801B6B60 001B3AA0  3B 9C 00 01 */	addi r28, r28, 1
/* 801B6B64 001B3AA4  2C 1A 00 64 */	cmpwi r26, 0x64
/* 801B6B68 001B3AA8  41 80 FF 84 */	blt .L_801B6AEC
.L_801B6B6C:
/* 801B6B6C 001B3AAC  2C 1C 00 00 */	cmpwi r28, 0
/* 801B6B70 001B3AB0  40 81 00 C8 */	ble .L_801B6C38
/* 801B6B74 001B3AB4  57 83 20 36 */	slwi r3, r28, 4
/* 801B6B78 001B3AB8  93 9F 00 E8 */	stw r28, 0xe8(r31)
/* 801B6B7C 001B3ABC  38 63 00 10 */	addi r3, r3, 0x10
/* 801B6B80 001B3AC0  4B E6 D4 2D */	bl __nwa__FUl
/* 801B6B84 001B3AC4  3C 80 80 43 */	lis r4, __ct__Q23Sys15MatTexAnimationFv@ha
/* 801B6B88 001B3AC8  7F 87 E3 78 */	mr r7, r28
/* 801B6B8C 001B3ACC  38 84 41 34 */	addi r4, r4, __ct__Q23Sys15MatTexAnimationFv@l
/* 801B6B90 001B3AD0  38 A0 00 00 */	li r5, 0
/* 801B6B94 001B3AD4  38 C0 00 10 */	li r6, 0x10
/* 801B6B98 001B3AD8  4B F0 AE 59 */	bl __construct_new_array
/* 801B6B9C 001B3ADC  90 7F 00 EC */	stw r3, 0xec(r31)
/* 801B6BA0 001B3AE0  3B 20 00 00 */	li r25, 0
/* 801B6BA4 001B3AE4  3B 40 00 00 */	li r26, 0
/* 801B6BA8 001B3AE8  48 00 00 88 */	b .L_801B6C30
.L_801B6BAC:
/* 801B6BAC 001B3AEC  7F 65 DB 78 */	mr r5, r27
/* 801B6BB0 001B3AF0  38 61 00 08 */	addi r3, r1, 8
/* 801B6BB4 001B3AF4  38 9E 00 EC */	addi r4, r30, 0xec
/* 801B6BB8 001B3AF8  38 D9 00 01 */	addi r6, r25, 1
/* 801B6BBC 001B3AFC  4C C6 31 82 */	crclr 6
/* 801B6BC0 001B3B00  4B F1 08 79 */	bl sprintf
/* 801B6BC4 001B3B04  38 61 00 08 */	addi r3, r1, 8
/* 801B6BC8 001B3B08  4B F1 3D 49 */	bl strlen
/* 801B6BCC 001B3B0C  38 81 00 08 */	addi r4, r1, 8
/* 801B6BD0 001B3B10  7C 84 1A 14 */	add r4, r4, r3
/* 801B6BD4 001B3B14  7C 69 03 A6 */	mtctr r3
/* 801B6BD8 001B3B18  2C 03 00 00 */	cmpwi r3, 0
/* 801B6BDC 001B3B1C  40 81 00 24 */	ble .L_801B6C00
.L_801B6BE0:
/* 801B6BE0 001B3B20  88 04 00 00 */	lbz r0, 0(r4)
/* 801B6BE4 001B3B24  2C 00 00 2F */	cmpwi r0, 0x2f
/* 801B6BE8 001B3B28  40 82 00 0C */	bne .L_801B6BF4
/* 801B6BEC 001B3B2C  38 84 00 01 */	addi r4, r4, 1
/* 801B6BF0 001B3B30  48 00 00 10 */	b .L_801B6C00
.L_801B6BF4:
/* 801B6BF4 001B3B34  38 84 FF FF */	addi r4, r4, -1
/* 801B6BF8 001B3B38  38 63 FF FF */	addi r3, r3, -1
/* 801B6BFC 001B3B3C  42 00 FF E4 */	bdnz .L_801B6BE0
.L_801B6C00:
/* 801B6C00 001B3B40  81 9D 00 00 */	lwz r12, 0(r29)
/* 801B6C04 001B3B44  7F A3 EB 78 */	mr r3, r29
/* 801B6C08 001B3B48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B6C0C 001B3B4C  7D 89 03 A6 */	mtctr r12
/* 801B6C10 001B3B50  4E 80 04 21 */	bctrl 
/* 801B6C14 001B3B54  80 1F 00 EC */	lwz r0, 0xec(r31)
/* 801B6C18 001B3B58  7C 64 1B 78 */	mr r4, r3
/* 801B6C1C 001B3B5C  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 801B6C20 001B3B60  7C 60 D2 14 */	add r3, r0, r26
/* 801B6C24 001B3B64  48 27 D3 FD */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 801B6C28 001B3B68  3B 5A 00 10 */	addi r26, r26, 0x10
/* 801B6C2C 001B3B6C  3B 39 00 01 */	addi r25, r25, 1
.L_801B6C30:
/* 801B6C30 001B3B70  7C 19 E0 00 */	cmpw r25, r28
/* 801B6C34 001B3B74  41 80 FF 78 */	blt .L_801B6BAC
.L_801B6C38:
/* 801B6C38 001B3B78  7F 65 DB 78 */	mr r5, r27
/* 801B6C3C 001B3B7C  38 61 00 08 */	addi r3, r1, 8
/* 801B6C40 001B3B80  38 9E 00 F8 */	addi r4, r30, 0xf8
/* 801B6C44 001B3B84  4C C6 31 82 */	crclr 6
/* 801B6C48 001B3B88  4B F1 07 F1 */	bl sprintf
/* 801B6C4C 001B3B8C  80 AD 88 2C */	lwz r5, sCurrentHeap__7JKRHeap@sda21(r13)
/* 801B6C50 001B3B90  38 61 00 08 */	addi r3, r1, 8
/* 801B6C54 001B3B94  38 80 00 01 */	li r4, 1
/* 801B6C58 001B3B98  38 C0 00 02 */	li r6, 2
/* 801B6C5C 001B3B9C  4B E6 44 D5 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 801B6C60 001B3BA0  7C 7D 1B 79 */	or. r29, r3, r3
/* 801B6C64 001B3BA4  40 82 00 18 */	bne .L_801B6C7C
/* 801B6C68 001B3BA8  38 7E 00 84 */	addi r3, r30, 0x84
/* 801B6C6C 001B3BAC  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 801B6C70 001B3BB0  38 80 03 09 */	li r4, 0x309
/* 801B6C74 001B3BB4  4C C6 31 82 */	crclr 6
/* 801B6C78 001B3BB8  4B E7 39 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801B6C7C:
/* 801B6C7C 001B3BBC  7F A3 EB 78 */	mr r3, r29
/* 801B6C80 001B3BC0  38 9E 01 08 */	addi r4, r30, 0x108
/* 801B6C84 001B3BC4  81 9D 00 00 */	lwz r12, 0(r29)
/* 801B6C88 001B3BC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B6C8C 001B3BCC  7D 89 03 A6 */	mtctr r12
/* 801B6C90 001B3BD0  4E 80 04 21 */	bctrl 
/* 801B6C94 001B3BD4  7C 79 1B 79 */	or. r25, r3, r3
/* 801B6C98 001B3BD8  41 82 00 4C */	beq .L_801B6CE4
/* 801B6C9C 001B3BDC  7F 24 CB 78 */	mr r4, r25
/* 801B6CA0 001B3BE0  38 61 0E 68 */	addi r3, r1, 0xe68
/* 801B6CA4 001B3BE4  38 A0 FF FF */	li r5, -1
/* 801B6CA8 001B3BE8  48 25 EC 51 */	bl __ct__9RamStreamFPvi
/* 801B6CAC 001B3BEC  38 7F 00 10 */	addi r3, r31, 0x10
/* 801B6CB0 001B3BF0  38 81 0E 68 */	addi r4, r1, 0xe68
/* 801B6CB4 001B3BF4  48 26 33 AD */	bl read__12MapCollisionFR6Stream
/* 801B6CB8 001B3BF8  7F 23 CB 78 */	mr r3, r25
/* 801B6CBC 001B3BFC  4B E6 D4 1D */	bl __dla__FPv
/* 801B6CC0 001B3C00  38 7F 00 10 */	addi r3, r31, 0x10
/* 801B6CC4 001B3C04  38 9F 00 7C */	addi r4, r31, 0x7c
/* 801B6CC8 001B3C08  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 801B6CCC 001B3C0C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B6CD0 001B3C10  7D 89 03 A6 */	mtctr r12
/* 801B6CD4 001B3C14  4E 80 04 21 */	bctrl 
/* 801B6CD8 001B3C18  38 00 00 01 */	li r0, 1
/* 801B6CDC 001B3C1C  98 1F 00 A8 */	stb r0, 0xa8(r31)
/* 801B6CE0 001B3C20  48 00 00 0C */	b .L_801B6CEC
.L_801B6CE4:
/* 801B6CE4 001B3C24  38 00 00 00 */	li r0, 0
/* 801B6CE8 001B3C28  98 1F 00 A8 */	stb r0, 0xa8(r31)
.L_801B6CEC:
/* 801B6CEC 001B3C2C  7F A3 EB 78 */	mr r3, r29
/* 801B6CF0 001B3C30  38 9E 01 14 */	addi r4, r30, 0x114
/* 801B6CF4 001B3C34  81 9D 00 00 */	lwz r12, 0(r29)
/* 801B6CF8 001B3C38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B6CFC 001B3C3C  7D 89 03 A6 */	mtctr r12
/* 801B6D00 001B3C40  4E 80 04 21 */	bctrl 
/* 801B6D04 001B3C44  7C 79 1B 79 */	or. r25, r3, r3
/* 801B6D08 001B3C48  41 82 00 48 */	beq .L_801B6D50
/* 801B6D0C 001B3C4C  38 60 00 28 */	li r3, 0x28
/* 801B6D10 001B3C50  4B E6 D1 95 */	bl __nw__FUl
/* 801B6D14 001B3C54  7C 7B 1B 79 */	or. r27, r3, r3
/* 801B6D18 001B3C58  41 82 00 0C */	beq .L_801B6D24
/* 801B6D1C 001B3C5C  48 26 57 61 */	bl __ct__Q27MapCode3MgrFv
/* 801B6D20 001B3C60  7C 7B 1B 78 */	mr r27, r3
.L_801B6D24:
/* 801B6D24 001B3C64  7F 24 CB 78 */	mr r4, r25
/* 801B6D28 001B3C68  38 61 0A 48 */	addi r3, r1, 0xa48
/* 801B6D2C 001B3C6C  38 A0 FF FF */	li r5, -1
/* 801B6D30 001B3C70  48 25 EB C9 */	bl __ct__9RamStreamFPvi
/* 801B6D34 001B3C74  7F 63 DB 78 */	mr r3, r27
/* 801B6D38 001B3C78  38 81 0A 48 */	addi r4, r1, 0xa48
/* 801B6D3C 001B3C7C  48 26 5A 25 */	bl read__Q27MapCode3MgrFR6Stream
/* 801B6D40 001B3C80  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 801B6D44 001B3C84  7F 63 DB 78 */	mr r3, r27
/* 801B6D48 001B3C88  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 801B6D4C 001B3C8C  48 26 5B 31 */	bl attachCodes__Q27MapCode3MgrFPQ23Sys13TriangleTable
.L_801B6D50:
/* 801B6D50 001B3C90  7F A3 EB 78 */	mr r3, r29
/* 801B6D54 001B3C94  38 9E 01 20 */	addi r4, r30, 0x120
/* 801B6D58 001B3C98  81 9D 00 00 */	lwz r12, 0(r29)
/* 801B6D5C 001B3C9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B6D60 001B3CA0  7D 89 03 A6 */	mtctr r12
/* 801B6D64 001B3CA4  4E 80 04 21 */	bctrl 
/* 801B6D68 001B3CA8  28 03 00 00 */	cmplwi r3, 0
/* 801B6D6C 001B3CAC  41 82 00 38 */	beq .L_801B6DA4
/* 801B6D70 001B3CB0  7C 64 1B 78 */	mr r4, r3
/* 801B6D74 001B3CB4  38 61 06 28 */	addi r3, r1, 0x628
/* 801B6D78 001B3CB8  38 A0 FF FF */	li r5, -1
/* 801B6D7C 001B3CBC  48 25 EB 7D */	bl __ct__9RamStreamFPvi
/* 801B6D80 001B3CC0  38 00 00 01 */	li r0, 1
/* 801B6D84 001B3CC4  2C 00 00 01 */	cmpwi r0, 1
/* 801B6D88 001B3CC8  90 01 06 34 */	stw r0, 0x634(r1)
/* 801B6D8C 001B3CCC  40 82 00 0C */	bne .L_801B6D98
/* 801B6D90 001B3CD0  38 00 00 00 */	li r0, 0
/* 801B6D94 001B3CD4  90 01 0A 3C */	stw r0, 0xa3c(r1)
.L_801B6D98:
/* 801B6D98 001B3CD8  38 7F 00 34 */	addi r3, r31, 0x34
/* 801B6D9C 001B3CDC  38 81 06 28 */	addi r4, r1, 0x628
/* 801B6DA0 001B3CE0  4B FF 8E FD */	bl read__Q24Game6SeaMgrFR6Stream
.L_801B6DA4:
/* 801B6DA4 001B3CE4  7F A3 EB 78 */	mr r3, r29
/* 801B6DA8 001B3CE8  38 9E 01 30 */	addi r4, r30, 0x130
/* 801B6DAC 001B3CEC  81 9D 00 00 */	lwz r12, 0(r29)
/* 801B6DB0 001B3CF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B6DB4 001B3CF4  7D 89 03 A6 */	mtctr r12
/* 801B6DB8 001B3CF8  4E 80 04 21 */	bctrl 
/* 801B6DBC 001B3CFC  28 03 00 00 */	cmplwi r3, 0
/* 801B6DC0 001B3D00  41 82 00 44 */	beq .L_801B6E04
/* 801B6DC4 001B3D04  7C 64 1B 78 */	mr r4, r3
/* 801B6DC8 001B3D08  38 61 02 08 */	addi r3, r1, 0x208
/* 801B6DCC 001B3D0C  38 A0 FF FF */	li r5, -1
/* 801B6DD0 001B3D10  48 25 EB 29 */	bl __ct__9RamStreamFPvi
/* 801B6DD4 001B3D14  38 00 00 01 */	li r0, 1
/* 801B6DD8 001B3D18  2C 00 00 01 */	cmpwi r0, 1
/* 801B6DDC 001B3D1C  90 01 02 14 */	stw r0, 0x214(r1)
/* 801B6DE0 001B3D20  40 82 00 0C */	bne .L_801B6DEC
/* 801B6DE4 001B3D24  38 00 00 00 */	li r0, 0
/* 801B6DE8 001B3D28  90 01 06 1C */	stw r0, 0x61c(r1)
.L_801B6DEC:
/* 801B6DEC 001B3D2C  38 7F 00 AC */	addi r3, r31, 0xac
/* 801B6DF0 001B3D30  38 81 02 08 */	addi r4, r1, 0x208
/* 801B6DF4 001B3D34  81 9F 00 AC */	lwz r12, 0xac(r31)
/* 801B6DF8 001B3D38  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801B6DFC 001B3D3C  7D 89 03 A6 */	mtctr r12
/* 801B6E00 001B3D40  4E 80 04 21 */	bctrl 
.L_801B6E04:
/* 801B6E04 001B3D44  7F A3 EB 78 */	mr r3, r29
/* 801B6E08 001B3D48  81 9D 00 00 */	lwz r12, 0(r29)
/* 801B6E0C 001B3D4C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801B6E10 001B3D50  7D 89 03 A6 */	mtctr r12
/* 801B6E14 001B3D54  4E 80 04 21 */	bctrl 
/* 801B6E18 001B3D58  BB 21 12 94 */	lmw r25, 0x1294(r1)
/* 801B6E1C 001B3D5C  80 01 12 B4 */	lwz r0, 0x12b4(r1)
/* 801B6E20 001B3D60  7C 08 03 A6 */	mtlr r0
/* 801B6E24 001B3D64  38 21 12 B0 */	addi r1, r1, 0x12b0
/* 801B6E28 001B3D68  4E 80 00 20 */	blr 
.endfn makeUnit__Q24Game10MapUnitMgrFPQ24Game7MapUnitPc

.fn __ct__Q24Game7MapRoomFv, global
/* 801B6E2C 001B3D6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B6E30 001B3D70  7C 08 02 A6 */	mflr r0
/* 801B6E34 001B3D74  3C 80 80 4B */	lis r4, __vt__Q24Game15TPositionObject@ha
/* 801B6E38 001B3D78  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B6E3C 001B3D7C  38 04 02 A4 */	addi r0, r4, __vt__Q24Game15TPositionObject@l
/* 801B6E40 001B3D80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B6E44 001B3D84  7C 7F 1B 78 */	mr r31, r3
/* 801B6E48 001B3D88  90 03 00 00 */	stw r0, 0(r3)
/* 801B6E4C 001B3D8C  38 7F 00 04 */	addi r3, r31, 4
/* 801B6E50 001B3D90  48 08 59 29 */	bl __ct__Q210SweepPrune6ObjectFv
/* 801B6E54 001B3D94  3C 60 80 4B */	lis r3, __vt__Q24Game10CellObject@ha
/* 801B6E58 001B3D98  3C 80 80 14 */	lis r4, __ct__Q24Game7CellLegFv@ha
/* 801B6E5C 001B3D9C  38 03 02 78 */	addi r0, r3, __vt__Q24Game10CellObject@l
/* 801B6E60 001B3DA0  38 A0 00 00 */	li r5, 0
/* 801B6E64 001B3DA4  90 1F 00 00 */	stw r0, 0(r31)
/* 801B6E68 001B3DA8  38 7F 00 54 */	addi r3, r31, 0x54
/* 801B6E6C 001B3DAC  38 84 AF B0 */	addi r4, r4, __ct__Q24Game7CellLegFv@l
/* 801B6E70 001B3DB0  38 C0 00 14 */	li r6, 0x14
/* 801B6E74 001B3DB4  38 E0 00 04 */	li r7, 4
/* 801B6E78 001B3DB8  4B F0 A9 C5 */	bl __construct_array
/* 801B6E7C 001B3DBC  38 7F 00 A8 */	addi r3, r31, 0xa8
/* 801B6E80 001B3DC0  4B F9 FF 99 */	bl __ct__Q24Game15CollisionBufferFv
/* 801B6E84 001B3DC4  38 00 00 01 */	li r0, 1
/* 801B6E88 001B3DC8  3C 60 80 4B */	lis r3, __vt__Q24Game7MapRoom@ha
/* 801B6E8C 001B3DCC  98 1F 00 64 */	stb r0, 0x64(r31)
/* 801B6E90 001B3DD0  38 80 00 00 */	li r4, 0
/* 801B6E94 001B3DD4  38 03 5E 74 */	addi r0, r3, __vt__Q24Game7MapRoom@l
/* 801B6E98 001B3DD8  38 7F 00 D8 */	addi r3, r31, 0xd8
/* 801B6E9C 001B3DDC  98 9F 00 78 */	stb r4, 0x78(r31)
/* 801B6EA0 001B3DE0  98 9F 00 8C */	stb r4, 0x8c(r31)
/* 801B6EA4 001B3DE4  98 9F 00 A0 */	stb r4, 0xa0(r31)
/* 801B6EA8 001B3DE8  93 FF 00 60 */	stw r31, 0x60(r31)
/* 801B6EAC 001B3DEC  93 FF 00 74 */	stw r31, 0x74(r31)
/* 801B6EB0 001B3DF0  93 FF 00 88 */	stw r31, 0x88(r31)
/* 801B6EB4 001B3DF4  93 FF 00 9C */	stw r31, 0x9c(r31)
/* 801B6EB8 001B3DF8  90 9F 00 A4 */	stw r4, 0xa4(r31)
/* 801B6EBC 001B3DFC  90 1F 00 00 */	stw r0, 0(r31)
/* 801B6EC0 001B3E00  98 9F 01 88 */	stb r4, 0x188(r31)
/* 801B6EC4 001B3E04  98 9F 01 89 */	stb r4, 0x189(r31)
/* 801B6EC8 001B3E08  90 9F 01 3C */	stw r4, 0x13c(r31)
/* 801B6ECC 001B3E0C  90 9F 01 38 */	stw r4, 0x138(r31)
/* 801B6ED0 001B3E10  4B F3 33 D1 */	bl PSMTXIdentity
/* 801B6ED4 001B3E14  38 60 FF FF */	li r3, -1
/* 801B6ED8 001B3E18  38 00 00 00 */	li r0, 0
/* 801B6EDC 001B3E1C  B0 7F 01 84 */	sth r3, 0x184(r31)
/* 801B6EE0 001B3E20  7F E3 FB 78 */	mr r3, r31
/* 801B6EE4 001B3E24  90 1F 01 80 */	stw r0, 0x180(r31)
/* 801B6EE8 001B3E28  90 1F 01 8C */	stw r0, 0x18c(r31)
/* 801B6EEC 001B3E2C  98 1F 00 BC */	stb r0, 0xbc(r31)
/* 801B6EF0 001B3E30  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 801B6EF4 001B3E34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B6EF8 001B3E38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B6EFC 001B3E3C  7C 08 03 A6 */	mtlr r0
/* 801B6F00 001B3E40  38 21 00 10 */	addi r1, r1, 0x10
/* 801B6F04 001B3E44  4E 80 00 20 */	blr 
.endfn __ct__Q24Game7MapRoomFv

.fn getExtraCode__Q24Game16ObjectLayoutNodeFv, weak
/* 801B6F08 001B3E48  38 60 00 00 */	li r3, 0
/* 801B6F0C 001B3E4C  4E 80 00 20 */	blr 
.endfn getExtraCode__Q24Game16ObjectLayoutNodeFv

.fn placeObjects__Q24Game7MapRoomFPQ34Game4Cave9FloorInfob, global
/* 801B6F10 001B3E50  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 801B6F14 001B3E54  7C 08 02 A6 */	mflr r0
/* 801B6F18 001B3E58  90 01 01 94 */	stw r0, 0x194(r1)
/* 801B6F1C 001B3E5C  BE 01 01 50 */	stmw r16, 0x150(r1)
/* 801B6F20 001B3E60  7C 7B 1B 78 */	mr r27, r3
/* 801B6F24 001B3E64  7C 9D 23 78 */	mr r29, r4
/* 801B6F28 001B3E68  80 03 00 C4 */	lwz r0, 0xc4(r3)
/* 801B6F2C 001B3E6C  28 00 00 00 */	cmplwi r0, 0
/* 801B6F30 001B3E70  41 82 07 84 */	beq .L_801B76B4
/* 801B6F34 001B3E74  3B 21 00 88 */	addi r25, r1, 0x88
/* 801B6F38 001B3E78  3A 21 00 7C */	addi r17, r1, 0x7c
/* 801B6F3C 001B3E7C  3A 41 00 70 */	addi r18, r1, 0x70
/* 801B6F40 001B3E80  3A 61 00 64 */	addi r19, r1, 0x64
/* 801B6F44 001B3E84  3A 81 00 58 */	addi r20, r1, 0x58
/* 801B6F48 001B3E88  3B 41 00 4C */	addi r26, r1, 0x4c
/* 801B6F4C 001B3E8C  3A A1 00 40 */	addi r21, r1, 0x40
/* 801B6F50 001B3E90  3B 80 00 00 */	li r28, 0
/* 801B6F54 001B3E94  3A E0 00 00 */	li r23, 0
.L_801B6F58:
/* 801B6F58 001B3E98  3A 00 00 00 */	li r16, 0
/* 801B6F5C 001B3E9C  48 00 07 28 */	b .L_801B7684
.L_801B6F60:
/* 801B6F60 001B3EA0  80 7B 00 C4 */	lwz r3, 0xc4(r27)
/* 801B6F64 001B3EA4  7F 84 E3 78 */	mr r4, r28
/* 801B6F68 001B3EA8  7E 05 83 78 */	mr r5, r16
/* 801B6F6C 001B3EAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B6F70 001B3EB0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801B6F74 001B3EB4  7D 89 03 A6 */	mtctr r12
/* 801B6F78 001B3EB8  4E 80 04 21 */	bctrl 
/* 801B6F7C 001B3EBC  3B C0 00 00 */	li r30, 0
/* 801B6F80 001B3EC0  7C 7F 1B 78 */	mr r31, r3
/* 801B6F84 001B3EC4  48 00 06 E0 */	b .L_801B7664
.L_801B6F88:
/* 801B6F88 001B3EC8  28 1C 00 07 */	cmplwi r28, 7
/* 801B6F8C 001B3ECC  41 81 06 D4 */	bgt .L_801B7660
/* 801B6F90 001B3ED0  3C 60 80 4B */	lis r3, lbl_804B5C2C@ha
/* 801B6F94 001B3ED4  38 63 5C 2C */	addi r3, r3, lbl_804B5C2C@l
/* 801B6F98 001B3ED8  7C 03 B8 2E */	lwzx r0, r3, r23
/* 801B6F9C 001B3EDC  7C 09 03 A6 */	mtctr r0
/* 801B6FA0 001B3EE0  4E 80 04 20 */	bctr 
.L_801B6FA4:
/* 801B6FA4 001B3EE4  80 6D 94 48 */	lwz r3, mgr__Q24Game8ItemHole@sda21(r13)
/* 801B6FA8 001B3EE8  48 01 67 E5 */	bl birth__Q24Game12TNodeItemMgrFv
/* 801B6FAC 001B3EEC  7C 60 1B 78 */	mr r0, r3
/* 801B6FB0 001B3EF0  7F E3 FB 78 */	mr r3, r31
/* 801B6FB4 001B3EF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B6FB8 001B3EF8  7C 18 03 78 */	mr r24, r0
/* 801B6FBC 001B3EFC  7F 25 CB 78 */	mr r5, r25
/* 801B6FC0 001B3F00  38 81 00 80 */	addi r4, r1, 0x80
/* 801B6FC4 001B3F04  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801B6FC8 001B3F08  7D 89 03 A6 */	mtctr r12
/* 801B6FCC 001B3F0C  4E 80 04 21 */	bctrl 
/* 801B6FD0 001B3F10  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801B6FD4 001B3F14  38 80 00 00 */	li r4, 0
/* 801B6FD8 001B3F18  C0 A2 B0 E0 */	lfs f5, lbl_80519440@sda21(r2)
/* 801B6FDC 001B3F1C  38 00 00 01 */	li r0, 1
/* 801B6FE0 001B3F20  C0 82 B0 F0 */	lfs f4, lbl_80519450@sda21(r2)
/* 801B6FE4 001B3F24  28 03 00 00 */	cmplwi r3, 0
/* 801B6FE8 001B3F28  C0 62 B0 F4 */	lfs f3, lbl_80519454@sda21(r2)
/* 801B6FEC 001B3F2C  C0 42 B0 F8 */	lfs f2, lbl_80519458@sda21(r2)
/* 801B6FF0 001B3F30  C0 21 00 80 */	lfs f1, 0x80(r1)
/* 801B6FF4 001B3F34  C0 19 00 00 */	lfs f0, 0(r25)
/* 801B6FF8 001B3F38  D0 A1 00 84 */	stfs f5, 0x84(r1)
/* 801B6FFC 001B3F3C  90 81 01 2C */	stw r4, 0x12c(r1)
/* 801B7000 001B3F40  D0 81 01 30 */	stfs f4, 0x130(r1)
/* 801B7004 001B3F44  D0 61 01 34 */	stfs f3, 0x134(r1)
/* 801B7008 001B3F48  90 81 01 28 */	stw r4, 0x128(r1)
/* 801B700C 001B3F4C  D0 A1 01 38 */	stfs f5, 0x138(r1)
/* 801B7010 001B3F50  D0 41 01 3C */	stfs f2, 0x13c(r1)
/* 801B7014 001B3F54  D0 A1 01 40 */	stfs f5, 0x140(r1)
/* 801B7018 001B3F58  98 01 01 24 */	stb r0, 0x124(r1)
/* 801B701C 001B3F5C  98 81 01 25 */	stb r4, 0x125(r1)
/* 801B7020 001B3F60  D0 21 01 18 */	stfs f1, 0x118(r1)
/* 801B7024 001B3F64  D0 A1 01 1C */	stfs f5, 0x11c(r1)
/* 801B7028 001B3F68  D0 01 01 20 */	stfs f0, 0x120(r1)
/* 801B702C 001B3F6C  41 82 00 20 */	beq .L_801B704C
/* 801B7030 001B3F70  98 81 01 24 */	stb r4, 0x124(r1)
/* 801B7034 001B3F74  38 81 01 18 */	addi r4, r1, 0x118
/* 801B7038 001B3F78  81 83 00 04 */	lwz r12, 4(r3)
/* 801B703C 001B3F7C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801B7040 001B3F80  7D 89 03 A6 */	mtctr r12
/* 801B7044 001B3F84  4E 80 04 21 */	bctrl 
/* 801B7048 001B3F88  C0 A1 01 34 */	lfs f5, 0x134(r1)
.L_801B704C:
/* 801B704C 001B3F8C  D0 A1 00 84 */	stfs f5, 0x84(r1)
/* 801B7050 001B3F90  38 60 00 00 */	li r3, 0
/* 801B7054 001B3F94  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801B7058 001B3F98  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801B705C 001B3F9C  2C 00 00 02 */	cmpwi r0, 2
/* 801B7060 001B3FA0  41 82 00 0C */	beq .L_801B706C
/* 801B7064 001B3FA4  2C 00 00 03 */	cmpwi r0, 3
/* 801B7068 001B3FA8  40 82 00 08 */	bne .L_801B7070
.L_801B706C:
/* 801B706C 001B3FAC  38 60 00 01 */	li r3, 1
.L_801B7070:
/* 801B7070 001B3FB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7074 001B3FB4  41 82 00 34 */	beq .L_801B70A8
/* 801B7078 001B3FB8  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 801B707C 001B3FBC  3C 60 80 4B */	lis r3, __vt__Q34Game8ItemHole7InitArg@ha
/* 801B7080 001B3FC0  38 84 A2 F4 */	addi r4, r4, __vt__Q24Game15CreatureInitArg@l
/* 801B7084 001B3FC4  38 00 00 02 */	li r0, 2
/* 801B7088 001B3FC8  90 81 00 18 */	stw r4, 0x18(r1)
/* 801B708C 001B3FCC  38 A3 5E D4 */	addi r5, r3, __vt__Q34Game8ItemHole7InitArg@l
/* 801B7090 001B3FD0  7F 03 C3 78 */	mr r3, r24
/* 801B7094 001B3FD4  38 81 00 18 */	addi r4, r1, 0x18
/* 801B7098 001B3FD8  90 A1 00 18 */	stw r5, 0x18(r1)
/* 801B709C 001B3FDC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801B70A0 001B3FE0  4B F8 3F 29 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801B70A4 001B3FE4  48 00 00 10 */	b .L_801B70B4
.L_801B70A8:
/* 801B70A8 001B3FE8  7F 03 C3 78 */	mr r3, r24
/* 801B70AC 001B3FEC  38 80 00 00 */	li r4, 0
/* 801B70B0 001B3FF0  4B F8 3F 19 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
.L_801B70B4:
/* 801B70B4 001B3FF4  7F E3 FB 78 */	mr r3, r31
/* 801B70B8 001B3FF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B70BC 001B3FFC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B70C0 001B4000  7D 89 03 A6 */	mtctr r12
/* 801B70C4 001B4004  4E 80 04 21 */	bctrl 
/* 801B70C8 001B4008  D0 38 01 E8 */	stfs f1, 0x1e8(r24)
/* 801B70CC 001B400C  7F 03 C3 78 */	mr r3, r24
/* 801B70D0 001B4010  38 81 00 80 */	addi r4, r1, 0x80
/* 801B70D4 001B4014  38 A0 00 00 */	li r5, 0
/* 801B70D8 001B4018  4B F8 40 D1 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801B70DC 001B401C  7F A3 EB 78 */	mr r3, r29
/* 801B70E0 001B4020  48 01 FF E5 */	bl useKaidanBarrel__Q34Game4Cave9FloorInfoFv
/* 801B70E4 001B4024  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B70E8 001B4028  41 82 05 78 */	beq .L_801B7660
/* 801B70EC 001B402C  80 6D 94 F0 */	lwz r3, mgr__Q24Game10ItemBarrel@sda21(r13)
/* 801B70F0 001B4030  81 83 00 00 */	lwz r12, 0(r3)
/* 801B70F4 001B4034  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 801B70F8 001B4038  7D 89 03 A6 */	mtctr r12
/* 801B70FC 001B403C  4E 80 04 21 */	bctrl 
/* 801B7100 001B4040  38 80 00 00 */	li r4, 0
/* 801B7104 001B4044  7C 76 1B 78 */	mr r22, r3
/* 801B7108 001B4048  4B F8 3E C1 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801B710C 001B404C  7E C3 B3 78 */	mr r3, r22
/* 801B7110 001B4050  38 81 00 80 */	addi r4, r1, 0x80
/* 801B7114 001B4054  38 A0 00 00 */	li r5, 0
/* 801B7118 001B4058  4B F8 40 91 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801B711C 001B405C  48 00 05 44 */	b .L_801B7660
.L_801B7120:
/* 801B7120 001B4060  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801B7124 001B4064  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801B7128 001B4068  2C 00 00 01 */	cmpwi r0, 1
/* 801B712C 001B406C  41 82 05 34 */	beq .L_801B7660
/* 801B7130 001B4070  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801B7134 001B4074  38 80 00 01 */	li r4, 1
/* 801B7138 001B4078  38 A0 00 00 */	li r5, 0
/* 801B713C 001B407C  4B FC 3D A1 */	bl birth__Q34Game9ItemOnyon3MgrFii
/* 801B7140 001B4080  7C 60 1B 78 */	mr r0, r3
/* 801B7144 001B4084  7F E3 FB 78 */	mr r3, r31
/* 801B7148 001B4088  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B714C 001B408C  7C 16 03 78 */	mr r22, r0
/* 801B7150 001B4090  7E 25 8B 78 */	mr r5, r17
/* 801B7154 001B4094  38 81 00 74 */	addi r4, r1, 0x74
/* 801B7158 001B4098  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801B715C 001B409C  7D 89 03 A6 */	mtctr r12
/* 801B7160 001B40A0  4E 80 04 21 */	bctrl 
/* 801B7164 001B40A4  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B7168 001B40A8  7E C3 B3 78 */	mr r3, r22
/* 801B716C 001B40AC  38 80 00 00 */	li r4, 0
/* 801B7170 001B40B0  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 801B7174 001B40B4  4B F8 3E 55 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801B7178 001B40B8  7F E3 FB 78 */	mr r3, r31
/* 801B717C 001B40BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B7180 001B40C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B7184 001B40C4  7D 89 03 A6 */	mtctr r12
/* 801B7188 001B40C8  4E 80 04 21 */	bctrl 
/* 801B718C 001B40CC  D0 36 02 28 */	stfs f1, 0x228(r22)
/* 801B7190 001B40D0  7E C3 B3 78 */	mr r3, r22
/* 801B7194 001B40D4  38 81 00 74 */	addi r4, r1, 0x74
/* 801B7198 001B40D8  38 A0 00 00 */	li r5, 0
/* 801B719C 001B40DC  4B F8 40 0D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801B71A0 001B40E0  48 00 04 C0 */	b .L_801B7660
.L_801B71A4:
/* 801B71A4 001B40E4  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801B71A8 001B40E8  38 80 00 00 */	li r4, 0
/* 801B71AC 001B40EC  38 A0 00 00 */	li r5, 0
/* 801B71B0 001B40F0  4B FC 3D 2D */	bl birth__Q34Game9ItemOnyon3MgrFii
/* 801B71B4 001B40F4  7C 60 1B 78 */	mr r0, r3
/* 801B71B8 001B40F8  7F E3 FB 78 */	mr r3, r31
/* 801B71BC 001B40FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B71C0 001B4100  7C 16 03 78 */	mr r22, r0
/* 801B71C4 001B4104  7E 45 93 78 */	mr r5, r18
/* 801B71C8 001B4108  38 81 00 68 */	addi r4, r1, 0x68
/* 801B71CC 001B410C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801B71D0 001B4110  7D 89 03 A6 */	mtctr r12
/* 801B71D4 001B4114  4E 80 04 21 */	bctrl 
/* 801B71D8 001B4118  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B71DC 001B411C  7E C3 B3 78 */	mr r3, r22
/* 801B71E0 001B4120  38 80 00 00 */	li r4, 0
/* 801B71E4 001B4124  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 801B71E8 001B4128  4B F8 3D E1 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801B71EC 001B412C  7F E3 FB 78 */	mr r3, r31
/* 801B71F0 001B4130  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B71F4 001B4134  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B71F8 001B4138  7D 89 03 A6 */	mtctr r12
/* 801B71FC 001B413C  4E 80 04 21 */	bctrl 
/* 801B7200 001B4140  D0 36 02 28 */	stfs f1, 0x228(r22)
/* 801B7204 001B4144  7E C3 B3 78 */	mr r3, r22
/* 801B7208 001B4148  38 81 00 68 */	addi r4, r1, 0x68
/* 801B720C 001B414C  38 A0 00 00 */	li r5, 0
/* 801B7210 001B4150  4B F8 3F 99 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801B7214 001B4154  48 00 04 4C */	b .L_801B7660
.L_801B7218:
/* 801B7218 001B4158  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801B721C 001B415C  38 80 00 00 */	li r4, 0
/* 801B7220 001B4160  38 A0 00 01 */	li r5, 1
/* 801B7224 001B4164  4B FC 3C B9 */	bl birth__Q34Game9ItemOnyon3MgrFii
/* 801B7228 001B4168  7C 60 1B 78 */	mr r0, r3
/* 801B722C 001B416C  7F E3 FB 78 */	mr r3, r31
/* 801B7230 001B4170  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B7234 001B4174  7C 16 03 78 */	mr r22, r0
/* 801B7238 001B4178  7E 65 9B 78 */	mr r5, r19
/* 801B723C 001B417C  38 81 00 5C */	addi r4, r1, 0x5c
/* 801B7240 001B4180  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801B7244 001B4184  7D 89 03 A6 */	mtctr r12
/* 801B7248 001B4188  4E 80 04 21 */	bctrl 
/* 801B724C 001B418C  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B7250 001B4190  7E C3 B3 78 */	mr r3, r22
/* 801B7254 001B4194  38 80 00 00 */	li r4, 0
/* 801B7258 001B4198  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 801B725C 001B419C  4B F8 3D 6D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801B7260 001B41A0  7F E3 FB 78 */	mr r3, r31
/* 801B7264 001B41A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B7268 001B41A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B726C 001B41AC  7D 89 03 A6 */	mtctr r12
/* 801B7270 001B41B0  4E 80 04 21 */	bctrl 
/* 801B7274 001B41B4  D0 36 02 28 */	stfs f1, 0x228(r22)
/* 801B7278 001B41B8  7E C3 B3 78 */	mr r3, r22
/* 801B727C 001B41BC  38 81 00 5C */	addi r4, r1, 0x5c
/* 801B7280 001B41C0  38 A0 00 00 */	li r5, 0
/* 801B7284 001B41C4  4B F8 3F 25 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801B7288 001B41C8  48 00 03 D8 */	b .L_801B7660
.L_801B728C:
/* 801B728C 001B41CC  80 6D 94 B0 */	lwz r3, mgr__Q24Game15ItemBigFountain@sda21(r13)
/* 801B7290 001B41D0  48 03 66 A5 */	bl birth__Q34Game15ItemBigFountain3MgrFv
/* 801B7294 001B41D4  7C 60 1B 78 */	mr r0, r3
/* 801B7298 001B41D8  7F E3 FB 78 */	mr r3, r31
/* 801B729C 001B41DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B72A0 001B41E0  7C 16 03 78 */	mr r22, r0
/* 801B72A4 001B41E4  7E 85 A3 78 */	mr r5, r20
/* 801B72A8 001B41E8  38 81 00 50 */	addi r4, r1, 0x50
/* 801B72AC 001B41EC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801B72B0 001B41F0  7D 89 03 A6 */	mtctr r12
/* 801B72B4 001B41F4  4E 80 04 21 */	bctrl 
/* 801B72B8 001B41F8  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B72BC 001B41FC  38 60 00 00 */	li r3, 0
/* 801B72C0 001B4200  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801B72C4 001B4204  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 801B72C8 001B4208  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801B72CC 001B420C  2C 00 00 02 */	cmpwi r0, 2
/* 801B72D0 001B4210  41 82 00 0C */	beq .L_801B72DC
/* 801B72D4 001B4214  2C 00 00 03 */	cmpwi r0, 3
/* 801B72D8 001B4218  40 82 00 08 */	bne .L_801B72E0
.L_801B72DC:
/* 801B72DC 001B421C  38 60 00 01 */	li r3, 1
.L_801B72E0:
/* 801B72E0 001B4220  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B72E4 001B4224  41 82 00 34 */	beq .L_801B7318
/* 801B72E8 001B4228  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 801B72EC 001B422C  3C 60 80 4B */	lis r3, __vt__Q34Game15ItemBigFountain7InitArg@ha
/* 801B72F0 001B4230  38 84 A2 F4 */	addi r4, r4, __vt__Q24Game15CreatureInitArg@l
/* 801B72F4 001B4234  38 00 00 03 */	li r0, 3
/* 801B72F8 001B4238  90 81 00 10 */	stw r4, 0x10(r1)
/* 801B72FC 001B423C  38 A3 5E C8 */	addi r5, r3, __vt__Q34Game15ItemBigFountain7InitArg@l
/* 801B7300 001B4240  7E C3 B3 78 */	mr r3, r22
/* 801B7304 001B4244  38 81 00 10 */	addi r4, r1, 0x10
/* 801B7308 001B4248  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801B730C 001B424C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B7310 001B4250  4B F8 3C B9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801B7314 001B4254  48 00 00 10 */	b .L_801B7324
.L_801B7318:
/* 801B7318 001B4258  7E C3 B3 78 */	mr r3, r22
/* 801B731C 001B425C  38 80 00 00 */	li r4, 0
/* 801B7320 001B4260  4B F8 3C A9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
.L_801B7324:
/* 801B7324 001B4264  7F E3 FB 78 */	mr r3, r31
/* 801B7328 001B4268  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B732C 001B426C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B7330 001B4270  7D 89 03 A6 */	mtctr r12
/* 801B7334 001B4274  4E 80 04 21 */	bctrl 
/* 801B7338 001B4278  D0 36 01 EC */	stfs f1, 0x1ec(r22)
/* 801B733C 001B427C  7E C3 B3 78 */	mr r3, r22
/* 801B7340 001B4280  38 81 00 50 */	addi r4, r1, 0x50
/* 801B7344 001B4284  38 A0 00 00 */	li r5, 0
/* 801B7348 001B4288  4B F8 3E 61 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801B734C 001B428C  48 00 03 14 */	b .L_801B7660
.L_801B7350:
/* 801B7350 001B4290  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B7354 001B4294  7F E3 FB 78 */	mr r3, r31
/* 801B7358 001B4298  7F 45 D3 78 */	mr r5, r26
/* 801B735C 001B429C  38 81 00 44 */	addi r4, r1, 0x44
/* 801B7360 001B42A0  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801B7364 001B42A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B7368 001B42A8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801B736C 001B42AC  7D 89 03 A6 */	mtctr r12
/* 801B7370 001B42B0  4E 80 04 21 */	bctrl 
/* 801B7374 001B42B4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801B7378 001B42B8  38 81 00 44 */	addi r4, r1, 0x44
/* 801B737C 001B42BC  81 83 00 04 */	lwz r12, 4(r3)
/* 801B7380 001B42C0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801B7384 001B42C4  7D 89 03 A6 */	mtctr r12
/* 801B7388 001B42C8  4E 80 04 21 */	bctrl 
/* 801B738C 001B42CC  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801B7390 001B42D0  38 61 00 E4 */	addi r3, r1, 0xe4
/* 801B7394 001B42D4  4B F7 78 91 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 801B7398 001B42D8  7F E3 FB 78 */	mr r3, r31
/* 801B739C 001B42DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B73A0 001B42E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B73A4 001B42E4  7D 89 03 A6 */	mtctr r12
/* 801B73A8 001B42E8  4E 80 04 21 */	bctrl 
/* 801B73AC 001B42EC  C0 61 00 44 */	lfs f3, 0x44(r1)
/* 801B73B0 001B42F0  7F E3 FB 78 */	mr r3, r31
/* 801B73B4 001B42F4  C0 41 00 48 */	lfs f2, 0x48(r1)
/* 801B73B8 001B42F8  C0 1A 00 00 */	lfs f0, 0(r26)
/* 801B73BC 001B42FC  D0 21 00 F0 */	stfs f1, 0xf0(r1)
/* 801B73C0 001B4300  D0 61 00 E4 */	stfs f3, 0xe4(r1)
/* 801B73C4 001B4304  D0 41 00 E8 */	stfs f2, 0xe8(r1)
/* 801B73C8 001B4308  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 801B73CC 001B430C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B73D0 001B4310  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801B73D4 001B4314  7D 89 03 A6 */	mtctr r12
/* 801B73D8 001B4318  4E 80 04 21 */	bctrl 
/* 801B73DC 001B431C  B0 61 00 FC */	sth r3, 0xfc(r1)
/* 801B73E0 001B4320  7F E3 FB 78 */	mr r3, r31
/* 801B73E4 001B4324  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B73E8 001B4328  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B73EC 001B432C  7D 89 03 A6 */	mtctr r12
/* 801B73F0 001B4330  4E 80 04 21 */	bctrl 
/* 801B73F4 001B4334  98 61 00 F4 */	stb r3, 0xf4(r1)
/* 801B73F8 001B4338  7F E3 FB 78 */	mr r3, r31
/* 801B73FC 001B433C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B7400 001B4340  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801B7404 001B4344  7D 89 03 A6 */	mtctr r12
/* 801B7408 001B4348  4E 80 04 21 */	bctrl 
/* 801B740C 001B434C  7F E3 FB 78 */	mr r3, r31
/* 801B7410 001B4350  3A C0 00 01 */	li r22, 1
/* 801B7414 001B4354  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B7418 001B4358  3B 00 00 00 */	li r24, 0
/* 801B741C 001B435C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B7420 001B4360  7D 89 03 A6 */	mtctr r12
/* 801B7424 001B4364  4E 80 04 21 */	bctrl 
/* 801B7428 001B4368  2C 03 00 63 */	cmpwi r3, 0x63
/* 801B742C 001B436C  40 82 00 20 */	bne .L_801B744C
/* 801B7430 001B4370  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801B7434 001B4374  88 03 00 6C */	lbz r0, 0x6c(r3)
/* 801B7438 001B4378  28 00 00 00 */	cmplwi r0, 0
/* 801B743C 001B437C  41 82 00 0C */	beq .L_801B7448
/* 801B7440 001B4380  3B 00 00 01 */	li r24, 1
/* 801B7444 001B4384  48 00 00 08 */	b .L_801B744C
.L_801B7448:
/* 801B7448 001B4388  3A C0 00 00 */	li r22, 0
.L_801B744C:
/* 801B744C 001B438C  56 C0 06 3F */	clrlwi. r0, r22, 0x18
/* 801B7450 001B4390  41 82 02 10 */	beq .L_801B7660
/* 801B7454 001B4394  7F E3 FB 78 */	mr r3, r31
/* 801B7458 001B4398  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B745C 001B439C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B7460 001B43A0  7D 89 03 A6 */	mtctr r12
/* 801B7464 001B43A4  4E 80 04 21 */	bctrl 
/* 801B7468 001B43A8  7C 64 1B 78 */	mr r4, r3
/* 801B746C 001B43AC  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 801B7470 001B43B0  38 A1 00 E4 */	addi r5, r1, 0xe4
/* 801B7474 001B43B4  4B F5 60 4D */	bl birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
/* 801B7478 001B43B8  7C 76 1B 79 */	or. r22, r3, r3
/* 801B747C 001B43BC  41 82 00 0C */	beq .L_801B7488
/* 801B7480 001B43C0  38 80 00 00 */	li r4, 0
/* 801B7484 001B43C4  4B F8 3B 45 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
.L_801B7488:
/* 801B7488 001B43C8  57 00 06 3F */	clrlwi. r0, r24, 0x18
/* 801B748C 001B43CC  41 82 01 D4 */	beq .L_801B7660
/* 801B7490 001B43D0  C0 3D 02 C0 */	lfs f1, 0x2c0(r29)
/* 801B7494 001B43D4  7E C3 B3 78 */	mr r3, r22
/* 801B7498 001B43D8  48 1F 35 2D */	bl setTimer__Q34Game8BlackMan3ObjFf
/* 801B749C 001B43DC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801B74A0 001B43E0  92 C3 01 14 */	stw r22, 0x114(r3)
/* 801B74A4 001B43E4  48 00 01 BC */	b .L_801B7660
.L_801B74A8:
/* 801B74A8 001B43E8  7F E3 FB 78 */	mr r3, r31
/* 801B74AC 001B43EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B74B0 001B43F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B74B4 001B43F4  7D 89 03 A6 */	mtctr r12
/* 801B74B8 001B43F8  4E 80 04 21 */	bctrl 
/* 801B74BC 001B43FC  7C 64 1B 78 */	mr r4, r3
/* 801B74C0 001B4400  38 61 00 BC */	addi r3, r1, 0xbc
/* 801B74C4 001B4404  4B FA F5 81 */	bl __ct__Q24Game18PelletIndexInitArgFi
/* 801B74C8 001B4408  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801B74CC 001B440C  38 81 00 BC */	addi r4, r1, 0xbc
/* 801B74D0 001B4410  4B FB 5F F1 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801B74D4 001B4414  7C 78 1B 79 */	or. r24, r3, r3
/* 801B74D8 001B4418  41 82 01 88 */	beq .L_801B7660
/* 801B74DC 001B441C  7F E3 FB 78 */	mr r3, r31
/* 801B74E0 001B4420  7E A5 AB 78 */	mr r5, r21
/* 801B74E4 001B4424  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B74E8 001B4428  38 81 00 38 */	addi r4, r1, 0x38
/* 801B74EC 001B442C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801B74F0 001B4430  7D 89 03 A6 */	mtctr r12
/* 801B74F4 001B4434  4E 80 04 21 */	bctrl 
/* 801B74F8 001B4438  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801B74FC 001B443C  28 03 00 00 */	cmplwi r3, 0
/* 801B7500 001B4440  41 82 00 38 */	beq .L_801B7538
/* 801B7504 001B4444  81 83 00 04 */	lwz r12, 4(r3)
/* 801B7508 001B4448  38 81 00 38 */	addi r4, r1, 0x38
/* 801B750C 001B444C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801B7510 001B4450  7D 89 03 A6 */	mtctr r12
/* 801B7514 001B4454  4E 80 04 21 */	bctrl 
/* 801B7518 001B4458  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801B751C 001B445C  7F 03 C3 78 */	mr r3, r24
/* 801B7520 001B4460  4B FA F4 B5 */	bl getCylinderHeight__Q24Game6PelletFv
/* 801B7524 001B4464  C0 42 B0 FC */	lfs f2, lbl_8051945C@sda21(r2)
/* 801B7528 001B4468  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 801B752C 001B446C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801B7530 001B4470  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 801B7534 001B4474  48 00 00 0C */	b .L_801B7540
.L_801B7538:
/* 801B7538 001B4478  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B753C 001B447C  D0 01 00 3C */	stfs f0, 0x3c(r1)
.L_801B7540:
/* 801B7540 001B4480  7F 03 C3 78 */	mr r3, r24
/* 801B7544 001B4484  38 81 00 38 */	addi r4, r1, 0x38
/* 801B7548 001B4488  38 A0 00 00 */	li r5, 0
/* 801B754C 001B448C  4B F8 3C 5D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801B7550 001B4490  7F E3 FB 78 */	mr r3, r31
/* 801B7554 001B4494  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B7558 001B4498  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B755C 001B449C  7D 89 03 A6 */	mtctr r12
/* 801B7560 001B44A0  4E 80 04 21 */	bctrl 
/* 801B7564 001B44A4  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B7568 001B44A8  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801B756C 001B44AC  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 801B7570 001B44B0  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801B7574 001B44B4  38 61 00 8C */	addi r3, r1, 0x8c
/* 801B7578 001B44B8  38 A1 00 2C */	addi r5, r1, 0x2c
/* 801B757C 001B44BC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801B7580 001B44C0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801B7584 001B44C4  48 27 13 05 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801B7588 001B44C8  7F E3 FB 78 */	mr r3, r31
/* 801B758C 001B44CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B7590 001B44D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B7594 001B44D4  7D 89 03 A6 */	mtctr r12
/* 801B7598 001B44D8  4E 80 04 21 */	bctrl 
/* 801B759C 001B44DC  7F 03 C3 78 */	mr r3, r24
/* 801B75A0 001B44E0  38 81 00 8C */	addi r4, r1, 0x8c
/* 801B75A4 001B44E4  4B FB 0F 29 */	bl setOrientation__Q24Game6PelletFR7Matrixf
/* 801B75A8 001B44E8  7F 03 C3 78 */	mr r3, r24
/* 801B75AC 001B44EC  4B FB 09 CD */	bl allocateTexCaster__Q24Game6PelletFv
/* 801B75B0 001B44F0  48 00 00 B0 */	b .L_801B7660
.L_801B75B4:
/* 801B75B4 001B44F4  7F E3 FB 78 */	mr r3, r31
/* 801B75B8 001B44F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B75BC 001B44FC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B75C0 001B4500  7D 89 03 A6 */	mtctr r12
/* 801B75C4 001B4504  4E 80 04 21 */	bctrl 
/* 801B75C8 001B4508  2C 03 FF FF */	cmpwi r3, -1
/* 801B75CC 001B450C  41 82 00 94 */	beq .L_801B7660
/* 801B75D0 001B4510  80 9B 00 D4 */	lwz r4, 0xd4(r27)
/* 801B75D4 001B4514  54 60 20 36 */	slwi r0, r3, 4
/* 801B75D8 001B4518  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 801B75DC 001B451C  7C A4 02 14 */	add r5, r4, r0
/* 801B75E0 001B4520  80 85 00 00 */	lwz r4, 0(r5)
/* 801B75E4 001B4524  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 801B75E8 001B4528  C0 24 00 50 */	lfs f1, 0x50(r4)
/* 801B75EC 001B452C  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 801B75F0 001B4530  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 801B75F4 001B4534  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801B75F8 001B4538  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 801B75FC 001B453C  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 801B7600 001B4540  C0 25 00 04 */	lfs f1, 4(r5)
/* 801B7604 001B4544  C0 45 00 0C */	lfs f2, 0xc(r5)
/* 801B7608 001B4548  4B E7 DB 01 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 801B760C 001B454C  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 801B7610 001B4550  3C 60 80 4B */	lis r3, __vt__Q24Game15ItemGateInitArg@ha
/* 801B7614 001B4554  38 84 A2 F4 */	addi r4, r4, __vt__Q24Game15CreatureInitArg@l
/* 801B7618 001B4558  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801B761C 001B455C  38 03 5E BC */	addi r0, r3, __vt__Q24Game15ItemGateInitArg@l
/* 801B7620 001B4560  80 6D 94 30 */	lwz r3, itemGateMgr__4Game@sda21(r13)
/* 801B7624 001B4564  90 81 00 08 */	stw r4, 8(r1)
/* 801B7628 001B4568  90 01 00 08 */	stw r0, 8(r1)
/* 801B762C 001B456C  48 01 19 61 */	bl birth__Q24Game11ItemGateMgrFv
/* 801B7630 001B4570  38 81 00 08 */	addi r4, r1, 8
/* 801B7634 001B4574  7C 76 1B 78 */	mr r22, r3
/* 801B7638 001B4578  4B F8 39 91 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801B763C 001B457C  80 DF 00 18 */	lwz r6, 0x18(r31)
/* 801B7640 001B4580  7E C3 B3 78 */	mr r3, r22
/* 801B7644 001B4584  38 81 00 20 */	addi r4, r1, 0x20
/* 801B7648 001B4588  38 A0 00 00 */	li r5, 0
/* 801B764C 001B458C  80 C6 00 00 */	lwz r6, 0(r6)
/* 801B7650 001B4590  C0 06 00 1C */	lfs f0, 0x1c(r6)
/* 801B7654 001B4594  D0 16 02 04 */	stfs f0, 0x204(r22)
/* 801B7658 001B4598  D0 16 02 00 */	stfs f0, 0x200(r22)
/* 801B765C 001B459C  4B F8 3B 4D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
.L_801B7660:
/* 801B7660 001B45A0  3B DE 00 01 */	addi r30, r30, 1
.L_801B7664:
/* 801B7664 001B45A4  7F E3 FB 78 */	mr r3, r31
/* 801B7668 001B45A8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801B766C 001B45AC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B7670 001B45B0  7D 89 03 A6 */	mtctr r12
/* 801B7674 001B45B4  4E 80 04 21 */	bctrl 
/* 801B7678 001B45B8  7C 1E 18 00 */	cmpw r30, r3
/* 801B767C 001B45BC  41 80 F9 0C */	blt .L_801B6F88
/* 801B7680 001B45C0  3A 10 00 01 */	addi r16, r16, 1
.L_801B7684:
/* 801B7684 001B45C4  80 7B 00 C4 */	lwz r3, 0xc4(r27)
/* 801B7688 001B45C8  7F 84 E3 78 */	mr r4, r28
/* 801B768C 001B45CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7690 001B45D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B7694 001B45D4  7D 89 03 A6 */	mtctr r12
/* 801B7698 001B45D8  4E 80 04 21 */	bctrl 
/* 801B769C 001B45DC  7C 10 18 00 */	cmpw r16, r3
/* 801B76A0 001B45E0  41 80 F8 C0 */	blt .L_801B6F60
/* 801B76A4 001B45E4  3B 9C 00 01 */	addi r28, r28, 1
/* 801B76A8 001B45E8  3A F7 00 04 */	addi r23, r23, 4
/* 801B76AC 001B45EC  2C 1C 00 08 */	cmpwi r28, 8
/* 801B76B0 001B45F0  41 80 F8 A8 */	blt .L_801B6F58
.L_801B76B4:
/* 801B76B4 001B45F4  BA 01 01 50 */	lmw r16, 0x150(r1)
/* 801B76B8 001B45F8  80 01 01 94 */	lwz r0, 0x194(r1)
/* 801B76BC 001B45FC  7C 08 03 A6 */	mtlr r0
/* 801B76C0 001B4600  38 21 01 90 */	addi r1, r1, 0x190
/* 801B76C4 001B4604  4E 80 00 20 */	blr 
.endfn placeObjects__Q24Game7MapRoomFPQ34Game4Cave9FloorInfob

.fn getBirthDoorIndex__Q24Game16ObjectLayoutNodeFv, weak
/* 801B76C8 001B4608  38 60 FF FF */	li r3, -1
/* 801B76CC 001B460C  4E 80 00 20 */	blr 
.endfn getBirthDoorIndex__Q24Game16ObjectLayoutNodeFv

.fn isFixedBattery__Q24Game16ObjectLayoutNodeFv, weak
/* 801B76D0 001B4610  38 60 00 00 */	li r3, 0
/* 801B76D4 001B4614  4E 80 00 20 */	blr 
.endfn isFixedBattery__Q24Game16ObjectLayoutNodeFv

.fn getDirection__Q24Game16ObjectLayoutNodeFv, weak
/* 801B76D8 001B4618  C0 22 B0 E0 */	lfs f1, lbl_80519440@sda21(r2)
/* 801B76DC 001B461C  4E 80 00 20 */	blr 
.endfn getDirection__Q24Game16ObjectLayoutNodeFv

.fn getBirthPosition__Q24Game16ObjectLayoutNodeFRfRf, weak
/* 801B76E0 001B4620  4E 80 00 20 */	blr 
.endfn getBirthPosition__Q24Game16ObjectLayoutNodeFRfRf

.fn __ct__Q24Game12RoomDoorInfoFv, weak
/* 801B76E4 001B4624  4E 80 00 20 */	blr 
.endfn __ct__Q24Game12RoomDoorInfoFv

.fn doAnimation__Q24Game7MapRoomFv, global
/* 801B76E8 001B4628  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B76EC 001B462C  7C 08 02 A6 */	mflr r0
/* 801B76F0 001B4630  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B76F4 001B4634  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801B76F8 001B4638  7C 7B 1B 78 */	mr r27, r3
/* 801B76FC 001B463C  88 0D 94 04 */	lbz r0, mUseCylinderViewCulling__Q24Game10RoomMapMgr@sda21(r13)
/* 801B7700 001B4640  28 00 00 00 */	cmplwi r0, 0
/* 801B7704 001B4644  41 82 00 78 */	beq .L_801B777C
/* 801B7708 001B4648  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801B770C 001B464C  3B A0 00 00 */	li r29, 0
/* 801B7710 001B4650  3B 80 00 00 */	li r28, 0
/* 801B7714 001B4654  83 C3 00 24 */	lwz r30, 0x24(r3)
/* 801B7718 001B4658  48 00 00 40 */	b .L_801B7758
.L_801B771C:
/* 801B771C 001B465C  7F C3 F3 78 */	mr r3, r30
/* 801B7720 001B4660  7F 84 E3 78 */	mr r4, r28
/* 801B7724 001B4664  48 26 DE CD */	bl getViewport__8GraphicsFi
/* 801B7728 001B4668  7C 7F 1B 78 */	mr r31, r3
/* 801B772C 001B466C  48 26 DB 15 */	bl viewable__8ViewportFv
/* 801B7730 001B4670  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7734 001B4674  41 82 00 20 */	beq .L_801B7754
/* 801B7738 001B4678  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 801B773C 001B467C  38 9B 01 60 */	addi r4, r27, 0x160
/* 801B7740 001B4680  48 26 2A C1 */	bl isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder
/* 801B7744 001B4684  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7748 001B4688  41 82 00 0C */	beq .L_801B7754
/* 801B774C 001B468C  3B A0 00 01 */	li r29, 1
/* 801B7750 001B4690  48 00 00 14 */	b .L_801B7764
.L_801B7754:
/* 801B7754 001B4694  3B 9C 00 01 */	addi r28, r28, 1
.L_801B7758:
/* 801B7758 001B4698  80 1E 02 64 */	lwz r0, 0x264(r30)
/* 801B775C 001B469C  7C 1C 00 00 */	cmpw r28, r0
/* 801B7760 001B46A0  41 80 FF BC */	blt .L_801B771C
.L_801B7764:
/* 801B7764 001B46A4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 801B7768 001B46A8  40 82 00 40 */	bne .L_801B77A8
/* 801B776C 001B46AC  80 6D 94 00 */	lwz r3, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)
/* 801B7770 001B46B0  38 03 00 01 */	addi r0, r3, 1
/* 801B7774 001B46B4  90 0D 94 00 */	stw r0, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)
/* 801B7778 001B46B8  48 00 00 30 */	b .L_801B77A8
.L_801B777C:
/* 801B777C 001B46BC  80 7B 01 3C */	lwz r3, 0x13c(r27)
/* 801B7780 001B46C0  38 9B 01 40 */	addi r4, r27, 0x140
/* 801B7784 001B46C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7788 001B46C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B778C 001B46CC  7D 89 03 A6 */	mtctr r12
/* 801B7790 001B46D0  4E 80 04 21 */	bctrl 
/* 801B7794 001B46D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7798 001B46D8  40 82 00 10 */	bne .L_801B77A8
/* 801B779C 001B46DC  80 6D 94 00 */	lwz r3, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)
/* 801B77A0 001B46E0  38 03 00 01 */	addi r0, r3, 1
/* 801B77A4 001B46E4  90 0D 94 00 */	stw r0, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)
.L_801B77A8:
/* 801B77A8 001B46E8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801B77AC 001B46EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B77B0 001B46F0  7C 08 03 A6 */	mtlr r0
/* 801B77B4 001B46F4  38 21 00 20 */	addi r1, r1, 0x20
/* 801B77B8 001B46F8  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game7MapRoomFv

.fn doEntry__Q24Game7MapRoomFv, global
/* 801B77BC 001B46FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B77C0 001B4700  7C 08 02 A6 */	mflr r0
/* 801B77C4 001B4704  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B77C8 001B4708  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801B77CC 001B470C  7C 7F 1B 78 */	mr r31, r3
/* 801B77D0 001B4710  88 0D 94 04 */	lbz r0, mUseCylinderViewCulling__Q24Game10RoomMapMgr@sda21(r13)
/* 801B77D4 001B4714  28 00 00 00 */	cmplwi r0, 0
/* 801B77D8 001B4718  41 82 00 84 */	beq .L_801B785C
/* 801B77DC 001B471C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801B77E0 001B4720  3B 80 00 00 */	li r28, 0
/* 801B77E4 001B4724  3B 60 00 00 */	li r27, 0
/* 801B77E8 001B4728  83 A3 00 24 */	lwz r29, 0x24(r3)
/* 801B77EC 001B472C  48 00 00 40 */	b .L_801B782C
.L_801B77F0:
/* 801B77F0 001B4730  7F A3 EB 78 */	mr r3, r29
/* 801B77F4 001B4734  7F 64 DB 78 */	mr r4, r27
/* 801B77F8 001B4738  48 26 DD F9 */	bl getViewport__8GraphicsFi
/* 801B77FC 001B473C  7C 7E 1B 78 */	mr r30, r3
/* 801B7800 001B4740  48 26 DA 41 */	bl viewable__8ViewportFv
/* 801B7804 001B4744  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7808 001B4748  41 82 00 20 */	beq .L_801B7828
/* 801B780C 001B474C  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 801B7810 001B4750  38 9F 01 60 */	addi r4, r31, 0x160
/* 801B7814 001B4754  48 26 29 ED */	bl isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder
/* 801B7818 001B4758  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B781C 001B475C  41 82 00 0C */	beq .L_801B7828
/* 801B7820 001B4760  3B 80 00 01 */	li r28, 1
/* 801B7824 001B4764  48 00 00 14 */	b .L_801B7838
.L_801B7828:
/* 801B7828 001B4768  3B 7B 00 01 */	addi r27, r27, 1
.L_801B782C:
/* 801B782C 001B476C  80 1D 02 64 */	lwz r0, 0x264(r29)
/* 801B7830 001B4770  7C 1B 00 00 */	cmpw r27, r0
/* 801B7834 001B4774  41 80 FF BC */	blt .L_801B77F0
.L_801B7838:
/* 801B7838 001B4778  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 801B783C 001B477C  41 82 01 3C */	beq .L_801B7978
/* 801B7840 001B4780  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801B7844 001B4784  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7848 001B4788  81 83 00 00 */	lwz r12, 0(r3)
/* 801B784C 001B478C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801B7850 001B4790  7D 89 03 A6 */	mtctr r12
/* 801B7854 001B4794  4E 80 04 21 */	bctrl 
/* 801B7858 001B4798  48 00 01 20 */	b .L_801B7978
.L_801B785C:
/* 801B785C 001B479C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801B7860 001B47A0  3B 60 00 00 */	li r27, 0
/* 801B7864 001B47A4  3B 80 00 00 */	li r28, 0
/* 801B7868 001B47A8  83 A3 00 24 */	lwz r29, 0x24(r3)
/* 801B786C 001B47AC  48 00 00 40 */	b .L_801B78AC
.L_801B7870:
/* 801B7870 001B47B0  7F A3 EB 78 */	mr r3, r29
/* 801B7874 001B47B4  7F 84 E3 78 */	mr r4, r28
/* 801B7878 001B47B8  48 26 DD 79 */	bl getViewport__8GraphicsFi
/* 801B787C 001B47BC  7C 7E 1B 78 */	mr r30, r3
/* 801B7880 001B47C0  48 26 D9 C1 */	bl viewable__8ViewportFv
/* 801B7884 001B47C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7888 001B47C8  41 82 00 20 */	beq .L_801B78A8
/* 801B788C 001B47CC  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 801B7890 001B47D0  38 9F 01 50 */	addi r4, r31, 0x150
/* 801B7894 001B47D4  48 26 28 FD */	bl isVisible__9CullPlaneFRQ23Sys6Sphere
/* 801B7898 001B47D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B789C 001B47DC  41 82 00 0C */	beq .L_801B78A8
/* 801B78A0 001B47E0  3B 60 00 01 */	li r27, 1
/* 801B78A4 001B47E4  48 00 00 14 */	b .L_801B78B8
.L_801B78A8:
/* 801B78A8 001B47E8  3B 9C 00 01 */	addi r28, r28, 1
.L_801B78AC:
/* 801B78AC 001B47EC  80 1D 02 64 */	lwz r0, 0x264(r29)
/* 801B78B0 001B47F0  7C 1C 00 00 */	cmpw r28, r0
/* 801B78B4 001B47F4  41 80 FF BC */	blt .L_801B7870
.L_801B78B8:
/* 801B78B8 001B47F8  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 801B78BC 001B47FC  41 82 00 5C */	beq .L_801B7918
/* 801B78C0 001B4800  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801B78C4 001B4804  4B FF D7 05 */	bl paused__Q24Game10GameSystemFv
/* 801B78C8 001B4808  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B78CC 001B480C  40 82 00 34 */	bne .L_801B7900
/* 801B78D0 001B4810  3B 60 00 00 */	li r27, 0
/* 801B78D4 001B4814  3B A0 00 00 */	li r29, 0
/* 801B78D8 001B4818  48 00 00 1C */	b .L_801B78F4
.L_801B78DC:
/* 801B78DC 001B481C  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 801B78E0 001B4820  C0 22 B1 00 */	lfs f1, lbl_80519460@sda21(r2)
/* 801B78E4 001B4824  7C 60 EA 14 */	add r3, r0, r29
/* 801B78E8 001B4828  48 27 CC 65 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 801B78EC 001B482C  3B BD 00 0C */	addi r29, r29, 0xc
/* 801B78F0 001B4830  3B 7B 00 01 */	addi r27, r27, 1
.L_801B78F4:
/* 801B78F4 001B4834  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 801B78F8 001B4838  7C 1B 00 00 */	cmpw r27, r0
/* 801B78FC 001B483C  41 80 FF E0 */	blt .L_801B78DC
.L_801B7900:
/* 801B7900 001B4840  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801B7904 001B4844  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7908 001B4848  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B790C 001B484C  7D 89 03 A6 */	mtctr r12
/* 801B7910 001B4850  4E 80 04 21 */	bctrl 
/* 801B7914 001B4854  48 00 00 4C */	b .L_801B7960
.L_801B7918:
/* 801B7918 001B4858  88 0D 84 69 */	lbz r0, sEntryOptMapRoom__Q24Game12BaseHIOParms@sda21(r13)
/* 801B791C 001B485C  28 00 00 00 */	cmplwi r0, 0
/* 801B7920 001B4860  41 82 00 2C */	beq .L_801B794C
/* 801B7924 001B4864  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801B7928 001B4868  38 60 00 00 */	li r3, 0
/* 801B792C 001B486C  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801B7930 001B4870  2C 00 00 01 */	cmpwi r0, 1
/* 801B7934 001B4874  41 82 00 0C */	beq .L_801B7940
/* 801B7938 001B4878  2C 00 00 03 */	cmpwi r0, 3
/* 801B793C 001B487C  40 82 00 08 */	bne .L_801B7944
.L_801B7940:
/* 801B7940 001B4880  38 60 00 01 */	li r3, 1
.L_801B7944:
/* 801B7944 001B4884  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7948 001B4888  41 82 00 54 */	beq .L_801B799C
.L_801B794C:
/* 801B794C 001B488C  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801B7950 001B4890  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7954 001B4894  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B7958 001B4898  7D 89 03 A6 */	mtctr r12
/* 801B795C 001B489C  4E 80 04 21 */	bctrl 
.L_801B7960:
/* 801B7960 001B48A0  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801B7964 001B48A4  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7968 001B48A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B796C 001B48AC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801B7970 001B48B0  7D 89 03 A6 */	mtctr r12
/* 801B7974 001B48B4  4E 80 04 21 */	bctrl 
.L_801B7978:
/* 801B7978 001B48B8  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801B797C 001B48BC  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7980 001B48C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7984 001B48C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B7988 001B48C8  7D 89 03 A6 */	mtctr r12
/* 801B798C 001B48CC  4E 80 04 21 */	bctrl 
/* 801B7990 001B48D0  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801B7994 001B48D4  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7998 001B48D8  4B EA F2 D5 */	bl diff__8J3DModelFv
.L_801B799C:
/* 801B799C 001B48DC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801B79A0 001B48E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B79A4 001B48E4  7C 08 03 A6 */	mtlr r0
/* 801B79A8 001B48E8  38 21 00 20 */	addi r1, r1, 0x20
/* 801B79AC 001B48EC  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game7MapRoomFv

.fn doSetView__Q24Game7MapRoomFi, global
/* 801B79B0 001B48F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B79B4 001B48F4  7C 08 02 A6 */	mflr r0
/* 801B79B8 001B48F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B79BC 001B48FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801B79C0 001B4900  7C 9F 23 78 */	mr r31, r4
/* 801B79C4 001B4904  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 801B79C8 001B4908  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801B79CC 001B490C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801B79D0 001B4910  7C 7D 1B 78 */	mr r29, r3
/* 801B79D4 001B4914  80 63 01 3C */	lwz r3, 0x13c(r3)
/* 801B79D8 001B4918  48 28 76 E9 */	bl setCurrentViewNo__Q28SysShape5ModelFUl
/* 801B79DC 001B491C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801B79E0 001B4920  3B C0 00 00 */	li r30, 0
/* 801B79E4 001B4924  38 80 00 00 */	li r4, 0
/* 801B79E8 001B4928  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801B79EC 001B492C  80 03 02 64 */	lwz r0, 0x264(r3)
/* 801B79F0 001B4930  7C 09 03 A6 */	mtctr r0
/* 801B79F4 001B4934  2C 00 00 00 */	cmpwi r0, 0
/* 801B79F8 001B4938  40 81 00 68 */	ble .L_801B7A60
.L_801B79FC:
/* 801B79FC 001B493C  7C 04 F8 00 */	cmpw r4, r31
/* 801B7A00 001B4940  40 82 00 58 */	bne .L_801B7A58
/* 801B7A04 001B4944  48 26 DB ED */	bl getViewport__8GraphicsFi
/* 801B7A08 001B4948  7C 7F 1B 78 */	mr r31, r3
/* 801B7A0C 001B494C  48 26 D8 35 */	bl viewable__8ViewportFv
/* 801B7A10 001B4950  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7A14 001B4954  41 82 00 4C */	beq .L_801B7A60
/* 801B7A18 001B4958  88 0D 94 04 */	lbz r0, mUseCylinderViewCulling__Q24Game10RoomMapMgr@sda21(r13)
/* 801B7A1C 001B495C  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 801B7A20 001B4960  28 00 00 00 */	cmplwi r0, 0
/* 801B7A24 001B4964  41 82 00 1C */	beq .L_801B7A40
/* 801B7A28 001B4968  38 9D 01 60 */	addi r4, r29, 0x160
/* 801B7A2C 001B496C  48 26 27 D5 */	bl isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder
/* 801B7A30 001B4970  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7A34 001B4974  41 82 00 2C */	beq .L_801B7A60
/* 801B7A38 001B4978  3B C0 00 01 */	li r30, 1
/* 801B7A3C 001B497C  48 00 00 24 */	b .L_801B7A60
.L_801B7A40:
/* 801B7A40 001B4980  38 9D 01 50 */	addi r4, r29, 0x150
/* 801B7A44 001B4984  48 26 27 4D */	bl isVisible__9CullPlaneFRQ23Sys6Sphere
/* 801B7A48 001B4988  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7A4C 001B498C  41 82 00 14 */	beq .L_801B7A60
/* 801B7A50 001B4990  3B C0 00 01 */	li r30, 1
/* 801B7A54 001B4994  48 00 00 0C */	b .L_801B7A60
.L_801B7A58:
/* 801B7A58 001B4998  38 84 00 01 */	addi r4, r4, 1
/* 801B7A5C 001B499C  42 00 FF A0 */	bdnz .L_801B79FC
.L_801B7A60:
/* 801B7A60 001B49A0  88 0D 84 00 */	lbz r0, usePacketCulling__Q24Game8Creature@sda21(r13)
/* 801B7A64 001B49A4  28 00 00 00 */	cmplwi r0, 0
/* 801B7A68 001B49A8  41 82 00 3C */	beq .L_801B7AA4
/* 801B7A6C 001B49AC  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 801B7A70 001B49B0  41 82 00 1C */	beq .L_801B7A8C
/* 801B7A74 001B49B4  80 7D 01 3C */	lwz r3, 0x13c(r29)
/* 801B7A78 001B49B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7A7C 001B49BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801B7A80 001B49C0  7D 89 03 A6 */	mtctr r12
/* 801B7A84 001B49C4  4E 80 04 21 */	bctrl 
/* 801B7A88 001B49C8  48 00 00 30 */	b .L_801B7AB8
.L_801B7A8C:
/* 801B7A8C 001B49CC  80 7D 01 3C */	lwz r3, 0x13c(r29)
/* 801B7A90 001B49D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7A94 001B49D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B7A98 001B49D8  7D 89 03 A6 */	mtctr r12
/* 801B7A9C 001B49DC  4E 80 04 21 */	bctrl 
/* 801B7AA0 001B49E0  48 00 00 18 */	b .L_801B7AB8
.L_801B7AA4:
/* 801B7AA4 001B49E4  80 7D 01 3C */	lwz r3, 0x13c(r29)
/* 801B7AA8 001B49E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7AAC 001B49EC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801B7AB0 001B49F0  7D 89 03 A6 */	mtctr r12
/* 801B7AB4 001B49F4  4E 80 04 21 */	bctrl 
.L_801B7AB8:
/* 801B7AB8 001B49F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B7ABC 001B49FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801B7AC0 001B4A00  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801B7AC4 001B4A04  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801B7AC8 001B4A08  7C 08 03 A6 */	mtlr r0
/* 801B7ACC 001B4A0C  38 21 00 20 */	addi r1, r1, 0x20
/* 801B7AD0 001B4A10  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game7MapRoomFi

.fn doViewCalc__Q24Game7MapRoomFv, global
/* 801B7AD4 001B4A14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B7AD8 001B4A18  7C 08 02 A6 */	mflr r0
/* 801B7ADC 001B4A1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B7AE0 001B4A20  80 63 01 3C */	lwz r3, 0x13c(r3)
/* 801B7AE4 001B4A24  48 28 75 75 */	bl viewCalc__Q28SysShape5ModelFv
/* 801B7AE8 001B4A28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B7AEC 001B4A2C  7C 08 03 A6 */	mtlr r0
/* 801B7AF0 001B4A30  38 21 00 10 */	addi r1, r1, 0x10
/* 801B7AF4 001B4A34  4E 80 00 20 */	blr 
.endfn doViewCalc__Q24Game7MapRoomFv

.fn doSimulation__Q24Game7MapRoomFf, global
/* 801B7AF8 001B4A38  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game7MapRoomFf

.fn doDirectDraw__Q24Game7MapRoomFR8Graphics, global
/* 801B7AFC 001B4A3C  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game7MapRoomFR8Graphics

.fn __ct__Q24Game10RoomMapMgrFPQ34Game4Cave8CaveInfo, global
/* 801B7B00 001B4A40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B7B04 001B4A44  7C 08 02 A6 */	mflr r0
/* 801B7B08 001B4A48  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B7B0C 001B4A4C  7C 80 07 35 */	extsh. r0, r4
/* 801B7B10 001B4A50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801B7B14 001B4A54  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801B7B18 001B4A58  7C BE 2B 78 */	mr r30, r5
/* 801B7B1C 001B4A5C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801B7B20 001B4A60  7C 7D 1B 78 */	mr r29, r3
/* 801B7B24 001B4A64  93 81 00 10 */	stw r28, 0x10(r1)
/* 801B7B28 001B4A68  41 82 00 18 */	beq .L_801B7B40
/* 801B7B2C 001B4A6C  38 1D 01 18 */	addi r0, r29, 0x118
/* 801B7B30 001B4A70  3C 60 80 4B */	lis r3, __vt__16GenericObjectMgr@ha
/* 801B7B34 001B4A74  90 1D 00 00 */	stw r0, 0(r29)
/* 801B7B38 001B4A78  38 03 B5 F0 */	addi r0, r3, __vt__16GenericObjectMgr@l
/* 801B7B3C 001B4A7C  90 1D 01 18 */	stw r0, 0x118(r29)
.L_801B7B40:
/* 801B7B40 001B4A80  7F A3 EB 78 */	mr r3, r29
/* 801B7B44 001B4A84  38 80 00 00 */	li r4, 0
/* 801B7B48 001B4A88  4B FA AA 9D */	bl __ct__Q24Game6MapMgrFv
/* 801B7B4C 001B4A8C  3C 60 80 4B */	lis r3, __vt__Q24Game10RoomMapMgr@ha
/* 801B7B50 001B4A90  38 1D 01 18 */	addi r0, r29, 0x118
/* 801B7B54 001B4A94  38 83 5C 4C */	addi r4, r3, __vt__Q24Game10RoomMapMgr@l
/* 801B7B58 001B4A98  38 7D 00 24 */	addi r3, r29, 0x24
/* 801B7B5C 001B4A9C  90 9D 00 04 */	stw r4, 4(r29)
/* 801B7B60 001B4AA0  38 A4 00 68 */	addi r5, r4, 0x68
/* 801B7B64 001B4AA4  80 9D 00 00 */	lwz r4, 0(r29)
/* 801B7B68 001B4AA8  90 A4 00 00 */	stw r5, 0(r4)
/* 801B7B6C 001B4AAC  80 9D 00 00 */	lwz r4, 0(r29)
/* 801B7B70 001B4AB0  7C 04 00 50 */	subf r0, r4, r0
/* 801B7B74 001B4AB4  90 04 00 04 */	stw r0, 4(r4)
/* 801B7B78 001B4AB8  48 00 04 59 */	bl __ct__Q24Game9CaveVRBoxFv
/* 801B7B7C 001B4ABC  38 7D 00 40 */	addi r3, r29, 0x40
/* 801B7B80 001B4AC0  48 25 ED 71 */	bl __ct__Q23Sys8TriangleFv
/* 801B7B84 001B4AC4  38 7D 00 AC */	addi r3, r29, 0xac
/* 801B7B88 001B4AC8  48 00 90 81 */	bl "__ct__30MonoObjectMgr<Q24Game7MapRoom>Fv"
/* 801B7B8C 001B4ACC  C0 22 B0 E4 */	lfs f1, lbl_80519444@sda21(r2)
/* 801B7B90 001B4AD0  3C 60 80 12 */	lis r3, "__ct__10Vector3<f>Fv"@ha
/* 801B7B94 001B4AD4  38 83 F3 48 */	addi r4, r3, "__ct__10Vector3<f>Fv"@l
/* 801B7B98 001B4AD8  C0 02 B0 E8 */	lfs f0, lbl_80519448@sda21(r2)
/* 801B7B9C 001B4ADC  D0 3D 00 DC */	stfs f1, 0xdc(r29)
/* 801B7BA0 001B4AE0  38 7D 00 FC */	addi r3, r29, 0xfc
/* 801B7BA4 001B4AE4  38 A0 00 00 */	li r5, 0
/* 801B7BA8 001B4AE8  38 C0 00 0C */	li r6, 0xc
/* 801B7BAC 001B4AEC  D0 3D 00 E0 */	stfs f1, 0xe0(r29)
/* 801B7BB0 001B4AF0  38 E0 00 02 */	li r7, 2
/* 801B7BB4 001B4AF4  D0 3D 00 E4 */	stfs f1, 0xe4(r29)
/* 801B7BB8 001B4AF8  D0 1D 00 E8 */	stfs f0, 0xe8(r29)
/* 801B7BBC 001B4AFC  D0 1D 00 EC */	stfs f0, 0xec(r29)
/* 801B7BC0 001B4B00  D0 1D 00 F0 */	stfs f0, 0xf0(r29)
/* 801B7BC4 001B4B04  4B F0 9C 79 */	bl __construct_array
/* 801B7BC8 001B4B08  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B7BCC 001B4B0C  38 60 00 3C */	li r3, 0x3c
/* 801B7BD0 001B4B10  D0 1D 00 FC */	stfs f0, 0xfc(r29)
/* 801B7BD4 001B4B14  D0 1D 01 00 */	stfs f0, 0x100(r29)
/* 801B7BD8 001B4B18  D0 1D 01 04 */	stfs f0, 0x104(r29)
/* 801B7BDC 001B4B1C  D0 1D 01 08 */	stfs f0, 0x108(r29)
/* 801B7BE0 001B4B20  D0 1D 01 0C */	stfs f0, 0x10c(r29)
/* 801B7BE4 001B4B24  D0 1D 01 10 */	stfs f0, 0x110(r29)
/* 801B7BE8 001B4B28  4B E6 C2 BD */	bl __nw__FUl
/* 801B7BEC 001B4B2C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801B7BF0 001B4B30  41 82 00 88 */	beq .L_801B7C78
/* 801B7BF4 001B4B34  48 25 97 9D */	bl __ct__5CNodeFv
/* 801B7BF8 001B4B38  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801B7BFC 001B4B3C  3C 60 80 4B */	lis r3, "__vt__26Container<Q24Game7MapUnit>"@ha
/* 801B7C00 001B4B40  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801B7C04 001B4B44  3C A0 80 4B */	lis r5, __vt__16GenericObjectMgr@ha
/* 801B7C08 001B4B48  90 1F 00 00 */	stw r0, 0(r31)
/* 801B7C0C 001B4B4C  38 03 60 84 */	addi r0, r3, "__vt__26Container<Q24Game7MapUnit>"@l
/* 801B7C10 001B4B50  3C 80 80 4B */	lis r4, "__vt__26ObjectMgr<Q24Game7MapUnit>"@ha
/* 801B7C14 001B4B54  3C 60 80 4B */	lis r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@ha
/* 801B7C18 001B4B58  90 1F 00 00 */	stw r0, 0(r31)
/* 801B7C1C 001B4B5C  38 00 00 00 */	li r0, 0
/* 801B7C20 001B4B60  38 C4 60 08 */	addi r6, r4, "__vt__26ObjectMgr<Q24Game7MapUnit>"@l
/* 801B7C24 001B4B64  38 83 5F 88 */	addi r4, r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@l
/* 801B7C28 001B4B68  98 1F 00 18 */	stb r0, 0x18(r31)
/* 801B7C2C 001B4B6C  38 05 B5 F0 */	addi r0, r5, __vt__16GenericObjectMgr@l
/* 801B7C30 001B4B70  3B 9F 00 20 */	addi r28, r31, 0x20
/* 801B7C34 001B4B74  38 A6 00 2C */	addi r5, r6, 0x2c
/* 801B7C38 001B4B78  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801B7C3C 001B4B7C  38 04 00 2C */	addi r0, r4, 0x2c
/* 801B7C40 001B4B80  7F 83 E3 78 */	mr r3, r28
/* 801B7C44 001B4B84  90 DF 00 00 */	stw r6, 0(r31)
/* 801B7C48 001B4B88  90 BF 00 1C */	stw r5, 0x1c(r31)
/* 801B7C4C 001B4B8C  90 9F 00 00 */	stw r4, 0(r31)
/* 801B7C50 001B4B90  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801B7C54 001B4B94  48 25 97 3D */	bl __ct__5CNodeFv
/* 801B7C58 001B4B98  3C 80 80 4B */	lis r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
/* 801B7C5C 001B4B9C  3C 60 80 4B */	lis r3, __vt__Q24Game10MapUnitMgr@ha
/* 801B7C60 001B4BA0  38 04 5F 78 */	addi r0, r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
/* 801B7C64 001B4BA4  90 1C 00 00 */	stw r0, 0(r28)
/* 801B7C68 001B4BA8  38 63 5E F8 */	addi r3, r3, __vt__Q24Game10MapUnitMgr@l
/* 801B7C6C 001B4BAC  38 03 00 2C */	addi r0, r3, 0x2c
/* 801B7C70 001B4BB0  90 7F 00 00 */	stw r3, 0(r31)
/* 801B7C74 001B4BB4  90 1F 00 1C */	stw r0, 0x1c(r31)
.L_801B7C78:
/* 801B7C78 001B4BB8  93 FD 00 A8 */	stw r31, 0xa8(r29)
/* 801B7C7C 001B4BBC  38 00 00 00 */	li r0, 0
/* 801B7C80 001B4BC0  C0 62 B0 E4 */	lfs f3, lbl_80519444@sda21(r2)
/* 801B7C84 001B4BC4  7F A3 EB 78 */	mr r3, r29
/* 801B7C88 001B4BC8  C0 42 B0 E8 */	lfs f2, lbl_80519448@sda21(r2)
/* 801B7C8C 001B4BCC  D0 7D 00 DC */	stfs f3, 0xdc(r29)
/* 801B7C90 001B4BD0  C0 22 B0 E0 */	lfs f1, lbl_80519440@sda21(r2)
/* 801B7C94 001B4BD4  D0 7D 00 E0 */	stfs f3, 0xe0(r29)
/* 801B7C98 001B4BD8  C0 02 B0 F8 */	lfs f0, lbl_80519458@sda21(r2)
/* 801B7C9C 001B4BDC  D0 7D 00 E4 */	stfs f3, 0xe4(r29)
/* 801B7CA0 001B4BE0  D0 5D 00 E8 */	stfs f2, 0xe8(r29)
/* 801B7CA4 001B4BE4  D0 5D 00 EC */	stfs f2, 0xec(r29)
/* 801B7CA8 001B4BE8  D0 5D 00 F0 */	stfs f2, 0xf0(r29)
/* 801B7CAC 001B4BEC  93 DD 00 28 */	stw r30, 0x28(r29)
/* 801B7CB0 001B4BF0  90 1D 00 2C */	stw r0, 0x2c(r29)
/* 801B7CB4 001B4BF4  90 1D 00 30 */	stw r0, 0x30(r29)
/* 801B7CB8 001B4BF8  D0 3D 00 4C */	stfs f1, 0x4c(r29)
/* 801B7CBC 001B4BFC  D0 1D 00 50 */	stfs f0, 0x50(r29)
/* 801B7CC0 001B4C00  D0 3D 00 54 */	stfs f1, 0x54(r29)
/* 801B7CC4 001B4C04  90 1D 01 14 */	stw r0, 0x114(r29)
/* 801B7CC8 001B4C08  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801B7CCC 001B4C0C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801B7CD0 001B4C10  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801B7CD4 001B4C14  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801B7CD8 001B4C18  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B7CDC 001B4C1C  7C 08 03 A6 */	mtlr r0
/* 801B7CE0 001B4C20  38 21 00 20 */	addi r1, r1, 0x20
/* 801B7CE4 001B4C24  4E 80 00 20 */	blr 
.endfn __ct__Q24Game10RoomMapMgrFPQ34Game4Cave8CaveInfo

.fn "__dt__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801B7CE8 001B4C28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B7CEC 001B4C2C  7C 08 02 A6 */	mflr r0
/* 801B7CF0 001B4C30  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B7CF4 001B4C34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B7CF8 001B4C38  7C 9F 23 78 */	mr r31, r4
/* 801B7CFC 001B4C3C  93 C1 00 08 */	stw r30, 8(r1)
/* 801B7D00 001B4C40  7C 7E 1B 79 */	or. r30, r3, r3
/* 801B7D04 001B4C44  41 82 00 68 */	beq .L_801B7D6C
/* 801B7D08 001B4C48  3C 80 80 4B */	lis r4, "__vt__30MonoObjectMgr<Q24Game7MapRoom>"@ha
/* 801B7D0C 001B4C4C  38 84 5D E8 */	addi r4, r4, "__vt__30MonoObjectMgr<Q24Game7MapRoom>"@l
/* 801B7D10 001B4C50  90 9E 00 00 */	stw r4, 0(r30)
/* 801B7D14 001B4C54  38 04 00 2C */	addi r0, r4, 0x2c
/* 801B7D18 001B4C58  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801B7D1C 001B4C5C  41 82 00 40 */	beq .L_801B7D5C
/* 801B7D20 001B4C60  3C 80 80 4B */	lis r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@ha
/* 801B7D24 001B4C64  38 84 5D 6C */	addi r4, r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@l
/* 801B7D28 001B4C68  90 9E 00 00 */	stw r4, 0(r30)
/* 801B7D2C 001B4C6C  38 04 00 2C */	addi r0, r4, 0x2c
/* 801B7D30 001B4C70  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801B7D34 001B4C74  41 82 00 28 */	beq .L_801B7D5C
/* 801B7D38 001B4C78  3C 80 80 4B */	lis r4, "__vt__26Container<Q24Game7MapRoom>"@ha
/* 801B7D3C 001B4C7C  38 04 5D 40 */	addi r0, r4, "__vt__26Container<Q24Game7MapRoom>"@l
/* 801B7D40 001B4C80  90 1E 00 00 */	stw r0, 0(r30)
/* 801B7D44 001B4C84  41 82 00 18 */	beq .L_801B7D5C
/* 801B7D48 001B4C88  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801B7D4C 001B4C8C  38 80 00 00 */	li r4, 0
/* 801B7D50 001B4C90  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801B7D54 001B4C94  90 1E 00 00 */	stw r0, 0(r30)
/* 801B7D58 001B4C98  48 25 98 31 */	bl __dt__5CNodeFv
.L_801B7D5C:
/* 801B7D5C 001B4C9C  7F E0 07 35 */	extsh. r0, r31
/* 801B7D60 001B4CA0  40 81 00 0C */	ble .L_801B7D6C
/* 801B7D64 001B4CA4  7F C3 F3 78 */	mr r3, r30
/* 801B7D68 001B4CA8  4B E6 C3 4D */	bl __dl__FPv
.L_801B7D6C:
/* 801B7D6C 001B4CAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B7D70 001B4CB0  7F C3 F3 78 */	mr r3, r30
/* 801B7D74 001B4CB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B7D78 001B4CB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B7D7C 001B4CBC  7C 08 03 A6 */	mtlr r0
/* 801B7D80 001B4CC0  38 21 00 10 */	addi r1, r1, 0x10
/* 801B7D84 001B4CC4  4E 80 00 20 */	blr 
.endfn "__dt__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn getMapRoom__Q24Game10RoomMapMgrFs, global
/* 801B7D88 001B4CC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B7D8C 001B4CCC  7C 08 02 A6 */	mflr r0
/* 801B7D90 001B4CD0  3C A0 80 4B */	lis r5, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801B7D94 001B4CD4  38 63 00 AC */	addi r3, r3, 0xac
/* 801B7D98 001B4CD8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B7D9C 001B4CDC  38 00 00 00 */	li r0, 0
/* 801B7DA0 001B4CE0  38 A5 5D 28 */	addi r5, r5, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801B7DA4 001B4CE4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801B7DA8 001B4CE8  28 00 00 00 */	cmplwi r0, 0
/* 801B7DAC 001B4CEC  7C 9F 23 78 */	mr r31, r4
/* 801B7DB0 001B4CF0  90 A1 00 08 */	stw r5, 8(r1)
/* 801B7DB4 001B4CF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B7DB8 001B4CF8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801B7DBC 001B4CFC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801B7DC0 001B4D00  40 82 00 1C */	bne .L_801B7DDC
/* 801B7DC4 001B4D04  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7DC8 001B4D08  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B7DCC 001B4D0C  7D 89 03 A6 */	mtctr r12
/* 801B7DD0 001B4D10  4E 80 04 21 */	bctrl 
/* 801B7DD4 001B4D14  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B7DD8 001B4D18  48 00 00 8C */	b .L_801B7E64
.L_801B7DDC:
/* 801B7DDC 001B4D1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7DE0 001B4D20  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B7DE4 001B4D24  7D 89 03 A6 */	mtctr r12
/* 801B7DE8 001B4D28  4E 80 04 21 */	bctrl 
/* 801B7DEC 001B4D2C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B7DF0 001B4D30  48 00 00 58 */	b .L_801B7E48
.L_801B7DF4:
/* 801B7DF4 001B4D34  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B7DF8 001B4D38  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B7DFC 001B4D3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7E00 001B4D40  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B7E04 001B4D44  7D 89 03 A6 */	mtctr r12
/* 801B7E08 001B4D48  4E 80 04 21 */	bctrl 
/* 801B7E0C 001B4D4C  7C 64 1B 78 */	mr r4, r3
/* 801B7E10 001B4D50  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B7E14 001B4D54  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7E18 001B4D58  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B7E1C 001B4D5C  7D 89 03 A6 */	mtctr r12
/* 801B7E20 001B4D60  4E 80 04 21 */	bctrl 
/* 801B7E24 001B4D64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7E28 001B4D68  40 82 00 3C */	bne .L_801B7E64
/* 801B7E2C 001B4D6C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B7E30 001B4D70  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B7E34 001B4D74  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7E38 001B4D78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B7E3C 001B4D7C  7D 89 03 A6 */	mtctr r12
/* 801B7E40 001B4D80  4E 80 04 21 */	bctrl 
/* 801B7E44 001B4D84  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B7E48:
/* 801B7E48 001B4D88  81 81 00 08 */	lwz r12, 8(r1)
/* 801B7E4C 001B4D8C  38 61 00 08 */	addi r3, r1, 8
/* 801B7E50 001B4D90  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B7E54 001B4D94  7D 89 03 A6 */	mtctr r12
/* 801B7E58 001B4D98  4E 80 04 21 */	bctrl 
/* 801B7E5C 001B4D9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7E60 001B4DA0  41 82 FF 94 */	beq .L_801B7DF4
.L_801B7E64:
/* 801B7E64 001B4DA4  7F FF 07 34 */	extsh r31, r31
/* 801B7E68 001B4DA8  48 00 00 E4 */	b .L_801B7F4C
.L_801B7E6C:
/* 801B7E6C 001B4DAC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B7E70 001B4DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7E74 001B4DB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B7E78 001B4DB8  7D 89 03 A6 */	mtctr r12
/* 801B7E7C 001B4DBC  4E 80 04 21 */	bctrl 
/* 801B7E80 001B4DC0  A8 03 01 84 */	lha r0, 0x184(r3)
/* 801B7E84 001B4DC4  7C 00 F8 00 */	cmpw r0, r31
/* 801B7E88 001B4DC8  40 82 00 08 */	bne .L_801B7E90
/* 801B7E8C 001B4DCC  48 00 00 E4 */	b .L_801B7F70
.L_801B7E90:
/* 801B7E90 001B4DD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B7E94 001B4DD4  28 00 00 00 */	cmplwi r0, 0
/* 801B7E98 001B4DD8  40 82 00 24 */	bne .L_801B7EBC
/* 801B7E9C 001B4DDC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B7EA0 001B4DE0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B7EA4 001B4DE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7EA8 001B4DE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B7EAC 001B4DEC  7D 89 03 A6 */	mtctr r12
/* 801B7EB0 001B4DF0  4E 80 04 21 */	bctrl 
/* 801B7EB4 001B4DF4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B7EB8 001B4DF8  48 00 00 94 */	b .L_801B7F4C
.L_801B7EBC:
/* 801B7EBC 001B4DFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B7EC0 001B4E00  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B7EC4 001B4E04  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7EC8 001B4E08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B7ECC 001B4E0C  7D 89 03 A6 */	mtctr r12
/* 801B7ED0 001B4E10  4E 80 04 21 */	bctrl 
/* 801B7ED4 001B4E14  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B7ED8 001B4E18  48 00 00 58 */	b .L_801B7F30
.L_801B7EDC:
/* 801B7EDC 001B4E1C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B7EE0 001B4E20  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B7EE4 001B4E24  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7EE8 001B4E28  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B7EEC 001B4E2C  7D 89 03 A6 */	mtctr r12
/* 801B7EF0 001B4E30  4E 80 04 21 */	bctrl 
/* 801B7EF4 001B4E34  7C 64 1B 78 */	mr r4, r3
/* 801B7EF8 001B4E38  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B7EFC 001B4E3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7F00 001B4E40  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B7F04 001B4E44  7D 89 03 A6 */	mtctr r12
/* 801B7F08 001B4E48  4E 80 04 21 */	bctrl 
/* 801B7F0C 001B4E4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7F10 001B4E50  40 82 00 3C */	bne .L_801B7F4C
/* 801B7F14 001B4E54  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B7F18 001B4E58  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B7F1C 001B4E5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7F20 001B4E60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B7F24 001B4E64  7D 89 03 A6 */	mtctr r12
/* 801B7F28 001B4E68  4E 80 04 21 */	bctrl 
/* 801B7F2C 001B4E6C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B7F30:
/* 801B7F30 001B4E70  81 81 00 08 */	lwz r12, 8(r1)
/* 801B7F34 001B4E74  38 61 00 08 */	addi r3, r1, 8
/* 801B7F38 001B4E78  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B7F3C 001B4E7C  7D 89 03 A6 */	mtctr r12
/* 801B7F40 001B4E80  4E 80 04 21 */	bctrl 
/* 801B7F44 001B4E84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B7F48 001B4E88  41 82 FF 94 */	beq .L_801B7EDC
.L_801B7F4C:
/* 801B7F4C 001B4E8C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B7F50 001B4E90  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7F54 001B4E94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B7F58 001B4E98  7D 89 03 A6 */	mtctr r12
/* 801B7F5C 001B4E9C  4E 80 04 21 */	bctrl 
/* 801B7F60 001B4EA0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B7F64 001B4EA4  7C 04 18 40 */	cmplw r4, r3
/* 801B7F68 001B4EA8  40 82 FF 04 */	bne .L_801B7E6C
/* 801B7F6C 001B4EAC  38 60 00 00 */	li r3, 0
.L_801B7F70:
/* 801B7F70 001B4EB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B7F74 001B4EB4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801B7F78 001B4EB8  7C 08 03 A6 */	mtlr r0
/* 801B7F7C 001B4EBC  38 21 00 20 */	addi r1, r1, 0x20
/* 801B7F80 001B4EC0  4E 80 00 20 */	blr 
.endfn getMapRoom__Q24Game10RoomMapMgrFs

.fn "isDone__25Iterator<Q24Game7MapRoom>Fv", weak
/* 801B7F84 001B4EC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B7F88 001B4EC8  7C 08 02 A6 */	mflr r0
/* 801B7F8C 001B4ECC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B7F90 001B4ED0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B7F94 001B4ED4  7C 7F 1B 78 */	mr r31, r3
/* 801B7F98 001B4ED8  80 63 00 08 */	lwz r3, 8(r3)
/* 801B7F9C 001B4EDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B7FA0 001B4EE0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B7FA4 001B4EE4  7D 89 03 A6 */	mtctr r12
/* 801B7FA8 001B4EE8  4E 80 04 21 */	bctrl 
/* 801B7FAC 001B4EEC  80 1F 00 04 */	lwz r0, 4(r31)
/* 801B7FB0 001B4EF0  7C 00 18 50 */	subf r0, r0, r3
/* 801B7FB4 001B4EF4  7C 00 00 34 */	cntlzw r0, r0
/* 801B7FB8 001B4EF8  54 03 D9 7E */	srwi r3, r0, 5
/* 801B7FBC 001B4EFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B7FC0 001B4F00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B7FC4 001B4F04  7C 08 03 A6 */	mtlr r0
/* 801B7FC8 001B4F08  38 21 00 10 */	addi r1, r1, 0x10
/* 801B7FCC 001B4F0C  4E 80 00 20 */	blr 
.endfn "isDone__25Iterator<Q24Game7MapRoom>Fv"

.fn __ct__Q24Game9CaveVRBoxFv, global
/* 801B7FD0 001B4F10  38 00 00 00 */	li r0, 0
/* 801B7FD4 001B4F14  90 03 00 00 */	stw r0, 0(r3)
/* 801B7FD8 001B4F18  4E 80 00 20 */	blr 
.endfn __ct__Q24Game9CaveVRBoxFv

.fn createRandomMap__Q24Game10RoomMapMgrFiPQ34Game4Cave11EditMapUnit, global
/* 801B7FDC 001B4F1C  94 21 EA D0 */	stwu r1, -0x1530(r1)
/* 801B7FE0 001B4F20  7C 08 02 A6 */	mflr r0
/* 801B7FE4 001B4F24  3C C0 80 48 */	lis r6, lbl_8047FC70@ha
/* 801B7FE8 001B4F28  90 01 15 34 */	stw r0, 0x1534(r1)
/* 801B7FEC 001B4F2C  BE A1 15 04 */	stmw r21, 0x1504(r1)
/* 801B7FF0 001B4F30  7C 7F 1B 78 */	mr r31, r3
/* 801B7FF4 001B4F34  7C 9C 23 78 */	mr r28, r4
/* 801B7FF8 001B4F38  7C BA 2B 78 */	mr r26, r5
/* 801B7FFC 001B4F3C  3B C6 FC 70 */	addi r30, r6, lbl_8047FC70@l
/* 801B8000 001B4F40  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801B8004 001B4F44  48 01 F4 F5 */	bl getFloorInfo__Q34Game4Cave8CaveInfoFi
/* 801B8008 001B4F48  7C 7D 1B 78 */	mr r29, r3
/* 801B800C 001B4F4C  93 BF 00 2C */	stw r29, 0x2c(r31)
/* 801B8010 001B4F50  93 9F 00 30 */	stw r28, 0x30(r31)
/* 801B8014 001B4F54  48 01 EC D1 */	bl getTekiMax__Q34Game4Cave9FloorInfoFv
/* 801B8018 001B4F58  7F A3 EB 78 */	mr r3, r29
/* 801B801C 001B4F5C  48 01 EC D1 */	bl getTekiInfoNum__Q34Game4Cave9FloorInfoFv
/* 801B8020 001B4F60  7F A3 EB 78 */	mr r3, r29
/* 801B8024 001B4F64  48 01 ED 89 */	bl getTekiWeightSum__Q34Game4Cave9FloorInfoFv
/* 801B8028 001B4F68  7F A3 EB 78 */	mr r3, r29
/* 801B802C 001B4F6C  48 01 ED A5 */	bl getItemMax__Q34Game4Cave9FloorInfoFv
/* 801B8030 001B4F70  7F A3 EB 78 */	mr r3, r29
/* 801B8034 001B4F74  48 01 ED A5 */	bl getItemInfoNum__Q34Game4Cave9FloorInfoFv
/* 801B8038 001B4F78  7F A3 EB 78 */	mr r3, r29
/* 801B803C 001B4F7C  48 01 EE 5D */	bl getItemWeightSum__Q34Game4Cave9FloorInfoFv
/* 801B8040 001B4F80  7F A3 EB 78 */	mr r3, r29
/* 801B8044 001B4F84  48 01 EE 79 */	bl getGateMax__Q34Game4Cave9FloorInfoFv
/* 801B8048 001B4F88  7F A3 EB 78 */	mr r3, r29
/* 801B804C 001B4F8C  48 01 EE 79 */	bl getGateInfoNum__Q34Game4Cave9FloorInfoFv
/* 801B8050 001B4F90  7F A3 EB 78 */	mr r3, r29
/* 801B8054 001B4F94  48 01 EF 31 */	bl getGateWeightSum__Q34Game4Cave9FloorInfoFv
/* 801B8058 001B4F98  80 BD 01 A4 */	lwz r5, 0x1a4(r29)
/* 801B805C 001B4F9C  38 61 06 98 */	addi r3, r1, 0x698
/* 801B8060 001B4FA0  38 9E 01 78 */	addi r4, r30, 0x178
/* 801B8064 001B4FA4  4C C6 31 82 */	crclr 6
/* 801B8068 001B4FA8  4B F0 F3 D1 */	bl sprintf
/* 801B806C 001B4FAC  38 00 00 00 */	li r0, 0
/* 801B8070 001B4FB0  38 61 06 98 */	addi r3, r1, 0x698
/* 801B8074 001B4FB4  90 01 00 08 */	stw r0, 8(r1)
/* 801B8078 001B4FB8  38 80 00 00 */	li r4, 0
/* 801B807C 001B4FBC  38 A0 00 00 */	li r5, 0
/* 801B8080 001B4FC0  38 C0 00 00 */	li r6, 0
/* 801B8084 001B4FC4  38 E0 00 00 */	li r7, 0
/* 801B8088 001B4FC8  39 00 00 02 */	li r8, 2
/* 801B808C 001B4FCC  39 20 00 00 */	li r9, 0
/* 801B8090 001B4FD0  39 40 00 00 */	li r10, 0
/* 801B8094 001B4FD4  4B E6 70 F5 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801B8098 001B4FD8  7C 7B 1B 79 */	or. r27, r3, r3
/* 801B809C 001B4FDC  40 82 00 1C */	bne .L_801B80B8
/* 801B80A0 001B4FE0  38 7E 00 84 */	addi r3, r30, 0x84
/* 801B80A4 001B4FE4  38 BE 01 98 */	addi r5, r30, 0x198
/* 801B80A8 001B4FE8  38 C1 06 98 */	addi r6, r1, 0x698
/* 801B80AC 001B4FEC  38 80 06 49 */	li r4, 0x649
/* 801B80B0 001B4FF0  4C C6 31 82 */	crclr 6
/* 801B80B4 001B4FF4  4B E7 25 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801B80B8:
/* 801B80B8 001B4FF8  7F 64 DB 78 */	mr r4, r27
/* 801B80BC 001B4FFC  38 61 10 D8 */	addi r3, r1, 0x10d8
/* 801B80C0 001B5000  38 A0 FF FF */	li r5, -1
/* 801B80C4 001B5004  48 25 D8 35 */	bl __ct__9RamStreamFPvi
/* 801B80C8 001B5008  38 00 00 01 */	li r0, 1
/* 801B80CC 001B500C  2C 00 00 01 */	cmpwi r0, 1
/* 801B80D0 001B5010  90 01 10 E4 */	stw r0, 0x10e4(r1)
/* 801B80D4 001B5014  40 82 00 0C */	bne .L_801B80E0
/* 801B80D8 001B5018  38 00 00 00 */	li r0, 0
/* 801B80DC 001B501C  90 01 14 EC */	stw r0, 0x14ec(r1)
.L_801B80E0:
/* 801B80E0 001B5020  38 61 10 D8 */	addi r3, r1, 0x10d8
/* 801B80E4 001B5024  48 25 C9 AD */	bl readInt__6StreamFv
/* 801B80E8 001B5028  7C 79 1B 78 */	mr r25, r3
/* 801B80EC 001B502C  7F 38 CB 78 */	mr r24, r25
/* 801B80F0 001B5030  1C 78 01 6C */	mulli r3, r24, 0x16c
/* 801B80F4 001B5034  38 63 00 10 */	addi r3, r3, 0x10
/* 801B80F8 001B5038  4B E6 BE B5 */	bl __nwa__FUl
/* 801B80FC 001B503C  3C 80 80 1C */	lis r4, __ct__Q24Game16MapUnitInterfaceFv@ha
/* 801B8100 001B5040  3C A0 80 1C */	lis r5, __dt__Q24Game16MapUnitInterfaceFv@ha
/* 801B8104 001B5044  38 84 8B 10 */	addi r4, r4, __ct__Q24Game16MapUnitInterfaceFv@l
/* 801B8108 001B5048  7F 07 C3 78 */	mr r7, r24
/* 801B810C 001B504C  38 A5 8A 24 */	addi r5, r5, __dt__Q24Game16MapUnitInterfaceFv@l
/* 801B8110 001B5050  38 C0 01 6C */	li r6, 0x16c
/* 801B8114 001B5054  4B F0 98 DD */	bl __construct_new_array
/* 801B8118 001B5058  7C 78 1B 78 */	mr r24, r3
/* 801B811C 001B505C  3A C0 00 00 */	li r22, 0
/* 801B8120 001B5060  7F 17 C3 78 */	mr r23, r24
/* 801B8124 001B5064  48 00 00 18 */	b .L_801B813C
.L_801B8128:
/* 801B8128 001B5068  7E E3 BB 78 */	mr r3, r23
/* 801B812C 001B506C  38 81 10 D8 */	addi r4, r1, 0x10d8
/* 801B8130 001B5070  48 07 A4 21 */	bl read__Q24Game9PartsViewFR6Stream
/* 801B8134 001B5074  3A F7 01 6C */	addi r23, r23, 0x16c
/* 801B8138 001B5078  3A D6 00 01 */	addi r22, r22, 1
.L_801B813C:
/* 801B813C 001B507C  7C 16 C8 00 */	cmpw r22, r25
/* 801B8140 001B5080  41 80 FF E8 */	blt .L_801B8128
/* 801B8144 001B5084  93 1F 00 F8 */	stw r24, 0xf8(r31)
/* 801B8148 001B5088  38 61 04 98 */	addi r3, r1, 0x498
/* 801B814C 001B508C  38 9E 01 A8 */	addi r4, r30, 0x1a8
/* 801B8150 001B5090  93 3F 00 F4 */	stw r25, 0xf4(r31)
/* 801B8154 001B5094  80 BD 01 C4 */	lwz r5, 0x1c4(r29)
/* 801B8158 001B5098  4C C6 31 82 */	crclr 6
/* 801B815C 001B509C  4B F0 F2 DD */	bl sprintf
/* 801B8160 001B50A0  38 61 04 98 */	addi r3, r1, 0x498
/* 801B8164 001B50A4  4B F2 40 01 */	bl DVDConvertPathToEntrynum
/* 801B8168 001B50A8  2C 03 FF FF */	cmpwi r3, -1
/* 801B816C 001B50AC  41 82 00 94 */	beq .L_801B8200
/* 801B8170 001B50B0  38 00 00 00 */	li r0, 0
/* 801B8174 001B50B4  38 61 04 98 */	addi r3, r1, 0x498
/* 801B8178 001B50B8  90 01 00 08 */	stw r0, 8(r1)
/* 801B817C 001B50BC  38 80 00 00 */	li r4, 0
/* 801B8180 001B50C0  38 A0 00 00 */	li r5, 0
/* 801B8184 001B50C4  38 C0 00 00 */	li r6, 0
/* 801B8188 001B50C8  38 E0 00 00 */	li r7, 0
/* 801B818C 001B50CC  39 00 00 02 */	li r8, 2
/* 801B8190 001B50D0  39 20 00 00 */	li r9, 0
/* 801B8194 001B50D4  39 40 00 00 */	li r10, 0
/* 801B8198 001B50D8  4B E6 6F F1 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801B819C 001B50DC  7C 77 1B 79 */	or. r23, r3, r3
/* 801B81A0 001B50E0  41 82 00 48 */	beq .L_801B81E8
/* 801B81A4 001B50E4  7E E4 BB 78 */	mr r4, r23
/* 801B81A8 001B50E8  38 61 0C B8 */	addi r3, r1, 0xcb8
/* 801B81AC 001B50EC  38 A0 FF FF */	li r5, -1
/* 801B81B0 001B50F0  48 25 D7 49 */	bl __ct__9RamStreamFPvi
/* 801B81B4 001B50F4  38 00 00 01 */	li r0, 1
/* 801B81B8 001B50F8  2C 00 00 01 */	cmpwi r0, 1
/* 801B81BC 001B50FC  90 01 0C C4 */	stw r0, 0xcc4(r1)
/* 801B81C0 001B5100  40 82 00 0C */	bne .L_801B81CC
/* 801B81C4 001B5104  38 00 00 00 */	li r0, 0
/* 801B81C8 001B5108  90 01 10 CC */	stw r0, 0x10cc(r1)
.L_801B81CC:
/* 801B81CC 001B510C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801B81D0 001B5110  4B FF CE 9D */	bl getLightMgr__Q24Game10GameSystemFv
/* 801B81D4 001B5114  38 81 0C B8 */	addi r4, r1, 0xcb8
/* 801B81D8 001B5118  4B F6 73 C9 */	bl loadParm__Q24Game12GameLightMgrFR6Stream
/* 801B81DC 001B511C  7E E3 BB 78 */	mr r3, r23
/* 801B81E0 001B5120  4B E6 BE F9 */	bl __dla__FPv
/* 801B81E4 001B5124  48 00 00 1C */	b .L_801B8200
.L_801B81E8:
/* 801B81E8 001B5128  38 7E 00 84 */	addi r3, r30, 0x84
/* 801B81EC 001B512C  38 BE 01 BC */	addi r5, r30, 0x1bc
/* 801B81F0 001B5130  38 C1 04 98 */	addi r6, r1, 0x498
/* 801B81F4 001B5134  38 80 06 71 */	li r4, 0x671
/* 801B81F8 001B5138  4C C6 31 82 */	crclr 6
/* 801B81FC 001B513C  4B E7 24 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801B8200:
/* 801B8200 001B5140  80 BD 01 E4 */	lwz r5, 0x1e4(r29)
/* 801B8204 001B5144  38 61 00 98 */	addi r3, r1, 0x98
/* 801B8208 001B5148  38 9E 01 3C */	addi r4, r30, 0x13c
/* 801B820C 001B514C  4C C6 31 82 */	crclr 6
/* 801B8210 001B5150  4B F0 F2 29 */	bl sprintf
/* 801B8214 001B5154  38 61 00 98 */	addi r3, r1, 0x98
/* 801B8218 001B5158  4B F2 3F 4D */	bl DVDConvertPathToEntrynum
/* 801B821C 001B515C  2C 03 FF FF */	cmpwi r3, -1
/* 801B8220 001B5160  41 82 01 00 */	beq .L_801B8320
/* 801B8224 001B5164  38 61 00 98 */	addi r3, r1, 0x98
/* 801B8228 001B5168  38 80 00 01 */	li r4, 1
/* 801B822C 001B516C  38 A0 00 00 */	li r5, 0
/* 801B8230 001B5170  38 C0 00 01 */	li r6, 1
/* 801B8234 001B5174  4B E6 2E FD */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 801B8238 001B5178  28 03 00 00 */	cmplwi r3, 0
/* 801B823C 001B517C  41 82 00 E4 */	beq .L_801B8320
/* 801B8240 001B5180  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8244 001B5184  38 9E 01 58 */	addi r4, r30, 0x158
/* 801B8248 001B5188  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B824C 001B518C  7D 89 03 A6 */	mtctr r12
/* 801B8250 001B5190  4E 80 04 21 */	bctrl 
/* 801B8254 001B5194  28 03 00 00 */	cmplwi r3, 0
/* 801B8258 001B5198  41 82 00 B0 */	beq .L_801B8308
/* 801B825C 001B519C  3C 80 20 00 */	lis r4, 0x2000
/* 801B8260 001B51A0  4B EB 76 35 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 801B8264 001B51A4  3C 80 00 04 */	lis r4, 4
/* 801B8268 001B51A8  7C 77 1B 78 */	mr r23, r3
/* 801B826C 001B51AC  4B EC B6 6D */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801B8270 001B51B0  7E E3 BB 78 */	mr r3, r23
/* 801B8274 001B51B4  4B EC B7 BD */	bl makeSharedDL__12J3DModelDataFv
/* 801B8278 001B51B8  38 60 00 14 */	li r3, 0x14
/* 801B827C 001B51BC  4B E6 BC 29 */	bl __nw__FUl
/* 801B8280 001B51C0  7C 60 1B 79 */	or. r0, r3, r3
/* 801B8284 001B51C4  41 82 00 18 */	beq .L_801B829C
/* 801B8288 001B51C8  7E E4 BB 78 */	mr r4, r23
/* 801B828C 001B51CC  38 A0 00 00 */	li r5, 0
/* 801B8290 001B51D0  38 C0 00 02 */	li r6, 2
/* 801B8294 001B51D4  48 28 5F 45 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801B8298 001B51D8  7C 60 1B 78 */	mr r0, r3
.L_801B829C:
/* 801B829C 001B51DC  90 1F 00 24 */	stw r0, 0x24(r31)
/* 801B82A0 001B51E0  38 61 00 38 */	addi r3, r1, 0x38
/* 801B82A4 001B51E4  4B F3 1F FD */	bl PSMTXIdentity
/* 801B82A8 001B51E8  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801B82AC 001B51EC  38 61 00 38 */	addi r3, r1, 0x38
/* 801B82B0 001B51F0  80 84 00 08 */	lwz r4, 8(r4)
/* 801B82B4 001B51F4  38 84 00 24 */	addi r4, r4, 0x24
/* 801B82B8 001B51F8  4B F3 20 15 */	bl PSMTXCopy
/* 801B82BC 001B51FC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801B82C0 001B5200  80 63 00 08 */	lwz r3, 8(r3)
/* 801B82C4 001B5204  81 83 00 00 */	lwz r12, 0(r3)
/* 801B82C8 001B5208  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B82CC 001B520C  7D 89 03 A6 */	mtctr r12
/* 801B82D0 001B5210  4E 80 04 21 */	bctrl 
/* 801B82D4 001B5214  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801B82D8 001B5218  80 63 00 08 */	lwz r3, 8(r3)
/* 801B82DC 001B521C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B82E0 001B5220  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B82E4 001B5224  7D 89 03 A6 */	mtctr r12
/* 801B82E8 001B5228  4E 80 04 21 */	bctrl 
/* 801B82EC 001B522C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801B82F0 001B5230  80 63 00 08 */	lwz r3, 8(r3)
/* 801B82F4 001B5234  4B EA E6 31 */	bl makeDL__8J3DModelFv
/* 801B82F8 001B5238  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801B82FC 001B523C  80 63 00 08 */	lwz r3, 8(r3)
/* 801B8300 001B5240  4B EA E4 F5 */	bl lock__8J3DModelFv
/* 801B8304 001B5244  48 00 00 1C */	b .L_801B8320
.L_801B8308:
/* 801B8308 001B5248  38 7E 00 84 */	addi r3, r30, 0x84
/* 801B830C 001B524C  38 BE 01 64 */	addi r5, r30, 0x164
/* 801B8310 001B5250  38 C1 00 98 */	addi r6, r1, 0x98
/* 801B8314 001B5254  38 80 06 10 */	li r4, 0x610
/* 801B8318 001B5258  4C C6 31 82 */	crclr 6
/* 801B831C 001B525C  4B E7 23 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801B8320:
/* 801B8320 001B5260  7F 16 C3 78 */	mr r22, r24
/* 801B8324 001B5264  3A A0 00 00 */	li r21, 0
/* 801B8328 001B5268  48 00 00 C4 */	b .L_801B83EC
.L_801B832C:
/* 801B832C 001B526C  80 B6 00 14 */	lwz r5, 0x14(r22)
/* 801B8330 001B5270  38 61 02 98 */	addi r3, r1, 0x298
/* 801B8334 001B5274  38 9E 01 D0 */	addi r4, r30, 0x1d0
/* 801B8338 001B5278  4C C6 31 82 */	crclr 6
/* 801B833C 001B527C  4B F0 F0 FD */	bl sprintf
/* 801B8340 001B5280  80 AD 88 2C */	lwz r5, sCurrentHeap__7JKRHeap@sda21(r13)
/* 801B8344 001B5284  38 61 02 98 */	addi r3, r1, 0x298
/* 801B8348 001B5288  38 80 00 01 */	li r4, 1
/* 801B834C 001B528C  38 C0 00 02 */	li r6, 2
/* 801B8350 001B5290  4B E6 2D E1 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 801B8354 001B5294  7C 77 1B 79 */	or. r23, r3, r3
/* 801B8358 001B5298  40 82 00 18 */	bne .L_801B8370
/* 801B835C 001B529C  38 7E 00 84 */	addi r3, r30, 0x84
/* 801B8360 001B52A0  38 BE 01 F8 */	addi r5, r30, 0x1f8
/* 801B8364 001B52A4  38 80 06 97 */	li r4, 0x697
/* 801B8368 001B52A8  4C C6 31 82 */	crclr 6
/* 801B836C 001B52AC  4B E7 22 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801B8370:
/* 801B8370 001B52B0  7E E3 BB 78 */	mr r3, r23
/* 801B8374 001B52B4  38 9E 02 08 */	addi r4, r30, 0x208
/* 801B8378 001B52B8  81 97 00 00 */	lwz r12, 0(r23)
/* 801B837C 001B52BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8380 001B52C0  7D 89 03 A6 */	mtctr r12
/* 801B8384 001B52C4  4E 80 04 21 */	bctrl 
/* 801B8388 001B52C8  28 03 00 00 */	cmplwi r3, 0
/* 801B838C 001B52CC  41 82 00 44 */	beq .L_801B83D0
/* 801B8390 001B52D0  7C 64 1B 78 */	mr r4, r3
/* 801B8394 001B52D4  38 61 08 98 */	addi r3, r1, 0x898
/* 801B8398 001B52D8  38 A0 FF FF */	li r5, -1
/* 801B839C 001B52DC  48 25 D5 5D */	bl __ct__9RamStreamFPvi
/* 801B83A0 001B52E0  38 00 00 01 */	li r0, 1
/* 801B83A4 001B52E4  2C 00 00 01 */	cmpwi r0, 1
/* 801B83A8 001B52E8  90 01 08 A4 */	stw r0, 0x8a4(r1)
/* 801B83AC 001B52EC  40 82 00 0C */	bne .L_801B83B8
/* 801B83B0 001B52F0  38 00 00 00 */	li r0, 0
/* 801B83B4 001B52F4  90 01 0C AC */	stw r0, 0xcac(r1)
.L_801B83B8:
/* 801B83B8 001B52F8  80 76 01 68 */	lwz r3, 0x168(r22)
/* 801B83BC 001B52FC  38 81 08 98 */	addi r4, r1, 0x898
/* 801B83C0 001B5300  81 83 00 00 */	lwz r12, 0(r3)
/* 801B83C4 001B5304  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B83C8 001B5308  7D 89 03 A6 */	mtctr r12
/* 801B83CC 001B530C  4E 80 04 21 */	bctrl 
.L_801B83D0:
/* 801B83D0 001B5310  7E E3 BB 78 */	mr r3, r23
/* 801B83D4 001B5314  81 97 00 00 */	lwz r12, 0(r23)
/* 801B83D8 001B5318  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801B83DC 001B531C  7D 89 03 A6 */	mtctr r12
/* 801B83E0 001B5320  4E 80 04 21 */	bctrl 
/* 801B83E4 001B5324  3A D6 01 6C */	addi r22, r22, 0x16c
/* 801B83E8 001B5328  3A B5 00 01 */	addi r21, r21, 1
.L_801B83EC:
/* 801B83EC 001B532C  7C 15 C8 00 */	cmpw r21, r25
/* 801B83F0 001B5330  41 80 FF 3C */	blt .L_801B832C
/* 801B83F4 001B5334  48 08 50 29 */	bl clear__Q24Game17PelletBirthBufferFv
/* 801B83F8 001B5338  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801B83FC 001B533C  38 9E 02 14 */	addi r4, r30, 0x214
/* 801B8400 001B5340  38 A0 00 00 */	li r5, 0
/* 801B8404 001B5344  48 26 AF 59 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801B8408 001B5348  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 801B840C 001B534C  48 01 F0 E5 */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 801B8410 001B5350  38 03 FF FF */	addi r0, r3, -1
/* 801B8414 001B5354  7F E3 FB 78 */	mr r3, r31
/* 801B8418 001B5358  7C 1C 00 50 */	subf r0, r28, r0
/* 801B841C 001B535C  7F 04 C3 78 */	mr r4, r24
/* 801B8420 001B5360  7C 00 00 34 */	cntlzw r0, r0
/* 801B8424 001B5364  7F 25 CB 78 */	mr r5, r25
/* 801B8428 001B5368  54 07 D9 7E */	srwi r7, r0, 5
/* 801B842C 001B536C  7F A6 EB 78 */	mr r6, r29
/* 801B8430 001B5370  7F 48 D3 78 */	mr r8, r26
/* 801B8434 001B5374  48 09 41 B1 */	bl nishimuraCreateRandomMap__Q24Game10RoomMapMgrFPQ24Game16MapUnitInterfaceiPQ34Game4Cave9FloorInfobPQ34Game4Cave11EditMapUnit
/* 801B8438 001B5378  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801B843C 001B537C  38 9E 02 14 */	addi r4, r30, 0x214
/* 801B8440 001B5380  48 26 AF 25 */	bl heapStatusEnd__6SystemFPc
/* 801B8444 001B5384  7F 63 DB 78 */	mr r3, r27
/* 801B8448 001B5388  4B E6 BC 91 */	bl __dla__FPv
/* 801B844C 001B538C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801B8450 001B5390  38 9E 02 28 */	addi r4, r30, 0x228
/* 801B8454 001B5394  38 A0 00 00 */	li r5, 0
/* 801B8458 001B5398  48 26 AF 05 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801B845C 001B539C  7F E3 FB 78 */	mr r3, r31
/* 801B8460 001B53A0  48 00 07 C9 */	bl completeUnitData__Q24Game10RoomMapMgrFv
/* 801B8464 001B53A4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801B8468 001B53A8  38 9E 02 28 */	addi r4, r30, 0x228
/* 801B846C 001B53AC  48 26 AE F9 */	bl heapStatusEnd__6SystemFPc
/* 801B8470 001B53B0  38 60 00 3C */	li r3, 0x3c
/* 801B8474 001B53B4  4B E6 BA 31 */	bl __nw__FUl
/* 801B8478 001B53B8  7C 60 1B 79 */	or. r0, r3, r3
/* 801B847C 001B53BC  41 82 00 0C */	beq .L_801B8488
/* 801B8480 001B53C0  4B FB C1 11 */	bl __ct__Q24Game14EditorRouteMgrFv
/* 801B8484 001B53C4  7C 60 1B 78 */	mr r0, r3
.L_801B8488:
/* 801B8488 001B53C8  90 1F 00 08 */	stw r0, 8(r31)
/* 801B848C 001B53CC  38 9E 02 3C */	addi r4, r30, 0x23c
/* 801B8490 001B53D0  38 A0 00 00 */	li r5, 0
/* 801B8494 001B53D4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801B8498 001B53D8  48 26 AE C5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801B849C 001B53DC  7F E3 FB 78 */	mr r3, r31
/* 801B84A0 001B53E0  48 09 42 35 */	bl nishimuraPlaceRooms__Q24Game10RoomMapMgrFv
/* 801B84A4 001B53E4  80 7F 00 08 */	lwz r3, 8(r31)
/* 801B84A8 001B53E8  4B FB A5 3D */	bl makeInvertLinks__Q24Game8RouteMgrFv
/* 801B84AC 001B53EC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801B84B0 001B53F0  38 9E 02 3C */	addi r4, r30, 0x23c
/* 801B84B4 001B53F4  48 26 AE B1 */	bl heapStatusEnd__6SystemFPc
/* 801B84B8 001B53F8  38 80 00 00 */	li r4, 0
/* 801B84BC 001B53FC  3C 60 80 4B */	lis r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801B84C0 001B5400  90 9F 00 A0 */	stw r4, 0xa0(r31)
/* 801B84C4 001B5404  38 03 5D 28 */	addi r0, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801B84C8 001B5408  38 7F 00 AC */	addi r3, r31, 0xac
/* 801B84CC 001B540C  28 04 00 00 */	cmplwi r4, 0
/* 801B84D0 001B5410  90 01 00 28 */	stw r0, 0x28(r1)
/* 801B84D4 001B5414  90 81 00 34 */	stw r4, 0x34(r1)
/* 801B84D8 001B5418  90 81 00 2C */	stw r4, 0x2c(r1)
/* 801B84DC 001B541C  90 61 00 30 */	stw r3, 0x30(r1)
/* 801B84E0 001B5420  40 82 00 1C */	bne .L_801B84FC
/* 801B84E4 001B5424  81 83 00 00 */	lwz r12, 0(r3)
/* 801B84E8 001B5428  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B84EC 001B542C  7D 89 03 A6 */	mtctr r12
/* 801B84F0 001B5430  4E 80 04 21 */	bctrl 
/* 801B84F4 001B5434  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801B84F8 001B5438  48 00 01 78 */	b .L_801B8670
.L_801B84FC:
/* 801B84FC 001B543C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8500 001B5440  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B8504 001B5444  7D 89 03 A6 */	mtctr r12
/* 801B8508 001B5448  4E 80 04 21 */	bctrl 
/* 801B850C 001B544C  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801B8510 001B5450  48 00 00 58 */	b .L_801B8568
.L_801B8514:
/* 801B8514 001B5454  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B8518 001B5458  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B851C 001B545C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8520 001B5460  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B8524 001B5464  7D 89 03 A6 */	mtctr r12
/* 801B8528 001B5468  4E 80 04 21 */	bctrl 
/* 801B852C 001B546C  7C 64 1B 78 */	mr r4, r3
/* 801B8530 001B5470  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801B8534 001B5474  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8538 001B5478  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B853C 001B547C  7D 89 03 A6 */	mtctr r12
/* 801B8540 001B5480  4E 80 04 21 */	bctrl 
/* 801B8544 001B5484  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8548 001B5488  40 82 01 28 */	bne .L_801B8670
/* 801B854C 001B548C  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B8550 001B5490  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B8554 001B5494  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8558 001B5498  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B855C 001B549C  7D 89 03 A6 */	mtctr r12
/* 801B8560 001B54A0  4E 80 04 21 */	bctrl 
/* 801B8564 001B54A4  90 61 00 2C */	stw r3, 0x2c(r1)
.L_801B8568:
/* 801B8568 001B54A8  81 81 00 28 */	lwz r12, 0x28(r1)
/* 801B856C 001B54AC  38 61 00 28 */	addi r3, r1, 0x28
/* 801B8570 001B54B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B8574 001B54B4  7D 89 03 A6 */	mtctr r12
/* 801B8578 001B54B8  4E 80 04 21 */	bctrl 
/* 801B857C 001B54BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8580 001B54C0  41 82 FF 94 */	beq .L_801B8514
/* 801B8584 001B54C4  48 00 00 EC */	b .L_801B8670
.L_801B8588:
/* 801B8588 001B54C8  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B858C 001B54CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8590 001B54D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B8594 001B54D4  7D 89 03 A6 */	mtctr r12
/* 801B8598 001B54D8  4E 80 04 21 */	bctrl 
/* 801B859C 001B54DC  A8 03 01 86 */	lha r0, 0x186(r3)
/* 801B85A0 001B54E0  2C 00 00 01 */	cmpwi r0, 1
/* 801B85A4 001B54E4  40 82 00 10 */	bne .L_801B85B4
/* 801B85A8 001B54E8  80 7F 00 A0 */	lwz r3, 0xa0(r31)
/* 801B85AC 001B54EC  38 03 00 01 */	addi r0, r3, 1
/* 801B85B0 001B54F0  90 1F 00 A0 */	stw r0, 0xa0(r31)
.L_801B85B4:
/* 801B85B4 001B54F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801B85B8 001B54F8  28 00 00 00 */	cmplwi r0, 0
/* 801B85BC 001B54FC  40 82 00 24 */	bne .L_801B85E0
/* 801B85C0 001B5500  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B85C4 001B5504  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B85C8 001B5508  81 83 00 00 */	lwz r12, 0(r3)
/* 801B85CC 001B550C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B85D0 001B5510  7D 89 03 A6 */	mtctr r12
/* 801B85D4 001B5514  4E 80 04 21 */	bctrl 
/* 801B85D8 001B5518  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801B85DC 001B551C  48 00 00 94 */	b .L_801B8670
.L_801B85E0:
/* 801B85E0 001B5520  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B85E4 001B5524  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B85E8 001B5528  81 83 00 00 */	lwz r12, 0(r3)
/* 801B85EC 001B552C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B85F0 001B5530  7D 89 03 A6 */	mtctr r12
/* 801B85F4 001B5534  4E 80 04 21 */	bctrl 
/* 801B85F8 001B5538  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801B85FC 001B553C  48 00 00 58 */	b .L_801B8654
.L_801B8600:
/* 801B8600 001B5540  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B8604 001B5544  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B8608 001B5548  81 83 00 00 */	lwz r12, 0(r3)
/* 801B860C 001B554C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B8610 001B5550  7D 89 03 A6 */	mtctr r12
/* 801B8614 001B5554  4E 80 04 21 */	bctrl 
/* 801B8618 001B5558  7C 64 1B 78 */	mr r4, r3
/* 801B861C 001B555C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801B8620 001B5560  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8624 001B5564  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B8628 001B5568  7D 89 03 A6 */	mtctr r12
/* 801B862C 001B556C  4E 80 04 21 */	bctrl 
/* 801B8630 001B5570  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8634 001B5574  40 82 00 3C */	bne .L_801B8670
/* 801B8638 001B5578  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B863C 001B557C  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B8640 001B5580  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8644 001B5584  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8648 001B5588  7D 89 03 A6 */	mtctr r12
/* 801B864C 001B558C  4E 80 04 21 */	bctrl 
/* 801B8650 001B5590  90 61 00 2C */	stw r3, 0x2c(r1)
.L_801B8654:
/* 801B8654 001B5594  81 81 00 28 */	lwz r12, 0x28(r1)
/* 801B8658 001B5598  38 61 00 28 */	addi r3, r1, 0x28
/* 801B865C 001B559C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B8660 001B55A0  7D 89 03 A6 */	mtctr r12
/* 801B8664 001B55A4  4E 80 04 21 */	bctrl 
/* 801B8668 001B55A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B866C 001B55AC  41 82 FF 94 */	beq .L_801B8600
.L_801B8670:
/* 801B8670 001B55B0  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B8674 001B55B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8678 001B55B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B867C 001B55BC  7D 89 03 A6 */	mtctr r12
/* 801B8680 001B55C0  4E 80 04 21 */	bctrl 
/* 801B8684 001B55C4  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B8688 001B55C8  7C 04 18 40 */	cmplw r4, r3
/* 801B868C 001B55CC  40 82 FE FC */	bne .L_801B8588
/* 801B8690 001B55D0  80 1F 00 A0 */	lwz r0, 0xa0(r31)
/* 801B8694 001B55D4  54 03 10 3A */	slwi r3, r0, 2
/* 801B8698 001B55D8  4B E6 B9 15 */	bl __nwa__FUl
/* 801B869C 001B55DC  90 7F 00 A4 */	stw r3, 0xa4(r31)
/* 801B86A0 001B55E0  3B 00 00 00 */	li r24, 0
/* 801B86A4 001B55E4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801B86A8 001B55E8  28 00 00 00 */	cmplwi r0, 0
/* 801B86AC 001B55EC  40 82 00 20 */	bne .L_801B86CC
/* 801B86B0 001B55F0  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B86B4 001B55F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B86B8 001B55F8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B86BC 001B55FC  7D 89 03 A6 */	mtctr r12
/* 801B86C0 001B5600  4E 80 04 21 */	bctrl 
/* 801B86C4 001B5604  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801B86C8 001B5608  48 00 01 94 */	b .L_801B885C
.L_801B86CC:
/* 801B86CC 001B560C  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B86D0 001B5610  81 83 00 00 */	lwz r12, 0(r3)
/* 801B86D4 001B5614  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B86D8 001B5618  7D 89 03 A6 */	mtctr r12
/* 801B86DC 001B561C  4E 80 04 21 */	bctrl 
/* 801B86E0 001B5620  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801B86E4 001B5624  48 00 00 58 */	b .L_801B873C
.L_801B86E8:
/* 801B86E8 001B5628  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B86EC 001B562C  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B86F0 001B5630  81 83 00 00 */	lwz r12, 0(r3)
/* 801B86F4 001B5634  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B86F8 001B5638  7D 89 03 A6 */	mtctr r12
/* 801B86FC 001B563C  4E 80 04 21 */	bctrl 
/* 801B8700 001B5640  7C 64 1B 78 */	mr r4, r3
/* 801B8704 001B5644  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801B8708 001B5648  81 83 00 00 */	lwz r12, 0(r3)
/* 801B870C 001B564C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B8710 001B5650  7D 89 03 A6 */	mtctr r12
/* 801B8714 001B5654  4E 80 04 21 */	bctrl 
/* 801B8718 001B5658  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B871C 001B565C  40 82 01 40 */	bne .L_801B885C
/* 801B8720 001B5660  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B8724 001B5664  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B8728 001B5668  81 83 00 00 */	lwz r12, 0(r3)
/* 801B872C 001B566C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8730 001B5670  7D 89 03 A6 */	mtctr r12
/* 801B8734 001B5674  4E 80 04 21 */	bctrl 
/* 801B8738 001B5678  90 61 00 2C */	stw r3, 0x2c(r1)
.L_801B873C:
/* 801B873C 001B567C  81 81 00 28 */	lwz r12, 0x28(r1)
/* 801B8740 001B5680  38 61 00 28 */	addi r3, r1, 0x28
/* 801B8744 001B5684  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B8748 001B5688  7D 89 03 A6 */	mtctr r12
/* 801B874C 001B568C  4E 80 04 21 */	bctrl 
/* 801B8750 001B5690  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8754 001B5694  41 82 FF 94 */	beq .L_801B86E8
/* 801B8758 001B5698  48 00 01 04 */	b .L_801B885C
.L_801B875C:
/* 801B875C 001B569C  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B8760 001B56A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8764 001B56A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B8768 001B56A8  7D 89 03 A6 */	mtctr r12
/* 801B876C 001B56AC  4E 80 04 21 */	bctrl 
/* 801B8770 001B56B0  A8 03 01 86 */	lha r0, 0x186(r3)
/* 801B8774 001B56B4  2C 00 00 01 */	cmpwi r0, 1
/* 801B8778 001B56B8  40 82 00 28 */	bne .L_801B87A0
/* 801B877C 001B56BC  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B8780 001B56C0  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B8784 001B56C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8788 001B56C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B878C 001B56CC  7D 89 03 A6 */	mtctr r12
/* 801B8790 001B56D0  4E 80 04 21 */	bctrl 
/* 801B8794 001B56D4  80 9F 00 A4 */	lwz r4, 0xa4(r31)
/* 801B8798 001B56D8  7C 64 C1 2E */	stwx r3, r4, r24
/* 801B879C 001B56DC  3B 18 00 04 */	addi r24, r24, 4
.L_801B87A0:
/* 801B87A0 001B56E0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801B87A4 001B56E4  28 00 00 00 */	cmplwi r0, 0
/* 801B87A8 001B56E8  40 82 00 24 */	bne .L_801B87CC
/* 801B87AC 001B56EC  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B87B0 001B56F0  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B87B4 001B56F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B87B8 001B56F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B87BC 001B56FC  7D 89 03 A6 */	mtctr r12
/* 801B87C0 001B5700  4E 80 04 21 */	bctrl 
/* 801B87C4 001B5704  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801B87C8 001B5708  48 00 00 94 */	b .L_801B885C
.L_801B87CC:
/* 801B87CC 001B570C  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B87D0 001B5710  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B87D4 001B5714  81 83 00 00 */	lwz r12, 0(r3)
/* 801B87D8 001B5718  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B87DC 001B571C  7D 89 03 A6 */	mtctr r12
/* 801B87E0 001B5720  4E 80 04 21 */	bctrl 
/* 801B87E4 001B5724  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801B87E8 001B5728  48 00 00 58 */	b .L_801B8840
.L_801B87EC:
/* 801B87EC 001B572C  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B87F0 001B5730  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B87F4 001B5734  81 83 00 00 */	lwz r12, 0(r3)
/* 801B87F8 001B5738  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B87FC 001B573C  7D 89 03 A6 */	mtctr r12
/* 801B8800 001B5740  4E 80 04 21 */	bctrl 
/* 801B8804 001B5744  7C 64 1B 78 */	mr r4, r3
/* 801B8808 001B5748  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801B880C 001B574C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8810 001B5750  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B8814 001B5754  7D 89 03 A6 */	mtctr r12
/* 801B8818 001B5758  4E 80 04 21 */	bctrl 
/* 801B881C 001B575C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8820 001B5760  40 82 00 3C */	bne .L_801B885C
/* 801B8824 001B5764  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B8828 001B5768  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B882C 001B576C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8830 001B5770  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8834 001B5774  7D 89 03 A6 */	mtctr r12
/* 801B8838 001B5778  4E 80 04 21 */	bctrl 
/* 801B883C 001B577C  90 61 00 2C */	stw r3, 0x2c(r1)
.L_801B8840:
/* 801B8840 001B5780  81 81 00 28 */	lwz r12, 0x28(r1)
/* 801B8844 001B5784  38 61 00 28 */	addi r3, r1, 0x28
/* 801B8848 001B5788  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B884C 001B578C  7D 89 03 A6 */	mtctr r12
/* 801B8850 001B5790  4E 80 04 21 */	bctrl 
/* 801B8854 001B5794  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8858 001B5798  41 82 FF 94 */	beq .L_801B87EC
.L_801B885C:
/* 801B885C 001B579C  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801B8860 001B57A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8864 001B57A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B8868 001B57A8  7D 89 03 A6 */	mtctr r12
/* 801B886C 001B57AC  4E 80 04 21 */	bctrl 
/* 801B8870 001B57B0  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801B8874 001B57B4  7C 04 18 40 */	cmplw r4, r3
/* 801B8878 001B57B8  40 82 FE E4 */	bne .L_801B875C
/* 801B887C 001B57BC  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 801B8880 001B57C0  28 00 00 00 */	cmplwi r0, 0
/* 801B8884 001B57C4  41 82 00 98 */	beq .L_801B891C
/* 801B8888 001B57C8  C0 22 B0 F8 */	lfs f1, lbl_80519458@sda21(r2)
/* 801B888C 001B57CC  38 61 00 68 */	addi r3, r1, 0x68
/* 801B8890 001B57D0  C0 82 B0 FC */	lfs f4, lbl_8051945C@sda21(r2)
/* 801B8894 001B57D4  38 81 00 1C */	addi r4, r1, 0x1c
/* 801B8898 001B57D8  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801B889C 001B57DC  38 A1 00 10 */	addi r5, r1, 0x10
/* 801B88A0 001B57E0  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B88A4 001B57E4  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 801B88A8 001B57E8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 801B88AC 001B57EC  C0 5F 00 E0 */	lfs f2, 0xe0(r31)
/* 801B88B0 001B57F0  C0 3F 00 EC */	lfs f1, 0xec(r31)
/* 801B88B4 001B57F4  C0 DF 00 E4 */	lfs f6, 0xe4(r31)
/* 801B88B8 001B57F8  EC 62 08 2A */	fadds f3, f2, f1
/* 801B88BC 001B57FC  C0 BF 00 F0 */	lfs f5, 0xf0(r31)
/* 801B88C0 001B5800  C0 5F 00 DC */	lfs f2, 0xdc(r31)
/* 801B88C4 001B5804  C0 3F 00 E8 */	lfs f1, 0xe8(r31)
/* 801B88C8 001B5808  EC A6 28 2A */	fadds f5, f6, f5
/* 801B88CC 001B580C  EC 63 01 32 */	fmuls f3, f3, f4
/* 801B88D0 001B5810  EC 22 08 2A */	fadds f1, f2, f1
/* 801B88D4 001B5814  EC 45 01 32 */	fmuls f2, f5, f4
/* 801B88D8 001B5818  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 801B88DC 001B581C  EC 21 01 32 */	fmuls f1, f1, f4
/* 801B88E0 001B5820  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801B88E4 001B5824  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801B88E8 001B5828  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801B88EC 001B582C  48 26 FC 75 */	bl "makeST__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801B88F0 001B5830  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801B88F4 001B5834  38 61 00 68 */	addi r3, r1, 0x68
/* 801B88F8 001B5838  80 84 00 08 */	lwz r4, 8(r4)
/* 801B88FC 001B583C  38 84 00 24 */	addi r4, r4, 0x24
/* 801B8900 001B5840  4B F3 19 CD */	bl PSMTXCopy
/* 801B8904 001B5844  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801B8908 001B5848  80 63 00 08 */	lwz r3, 8(r3)
/* 801B890C 001B584C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8910 001B5850  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B8914 001B5854  7D 89 03 A6 */	mtctr r12
/* 801B8918 001B5858  4E 80 04 21 */	bctrl 
.L_801B891C:
/* 801B891C 001B585C  C0 9F 00 DC */	lfs f4, 0xdc(r31)
/* 801B8920 001B5860  C0 02 B1 04 */	lfs f0, lbl_80519464@sda21(r2)
/* 801B8924 001B5864  C0 7F 00 E4 */	lfs f3, 0xe4(r31)
/* 801B8928 001B5868  EC 24 00 28 */	fsubs f1, f4, f0
/* 801B892C 001B586C  C0 5F 00 E0 */	lfs f2, 0xe0(r31)
/* 801B8930 001B5870  EC 63 00 28 */	fsubs f3, f3, f0
/* 801B8934 001B5874  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 801B8938 001B5878  40 80 00 08 */	bge .L_801B8940
/* 801B893C 001B587C  D0 3F 00 DC */	stfs f1, 0xdc(r31)
.L_801B8940:
/* 801B8940 001B5880  C0 1F 00 E0 */	lfs f0, 0xe0(r31)
/* 801B8944 001B5884  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801B8948 001B5888  40 80 00 08 */	bge .L_801B8950
/* 801B894C 001B588C  D0 5F 00 E0 */	stfs f2, 0xe0(r31)
.L_801B8950:
/* 801B8950 001B5890  C0 1F 00 E4 */	lfs f0, 0xe4(r31)
/* 801B8954 001B5894  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801B8958 001B5898  40 80 00 08 */	bge .L_801B8960
/* 801B895C 001B589C  D0 7F 00 E4 */	stfs f3, 0xe4(r31)
.L_801B8960:
/* 801B8960 001B58A0  C0 1F 00 E8 */	lfs f0, 0xe8(r31)
/* 801B8964 001B58A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801B8968 001B58A8  40 81 00 08 */	ble .L_801B8970
/* 801B896C 001B58AC  D0 3F 00 E8 */	stfs f1, 0xe8(r31)
.L_801B8970:
/* 801B8970 001B58B0  C0 1F 00 EC */	lfs f0, 0xec(r31)
/* 801B8974 001B58B4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801B8978 001B58B8  40 81 00 08 */	ble .L_801B8980
/* 801B897C 001B58BC  D0 5F 00 EC */	stfs f2, 0xec(r31)
.L_801B8980:
/* 801B8980 001B58C0  C0 1F 00 F0 */	lfs f0, 0xf0(r31)
/* 801B8984 001B58C4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801B8988 001B58C8  40 81 00 08 */	ble .L_801B8990
/* 801B898C 001B58CC  D0 7F 00 F0 */	stfs f3, 0xf0(r31)
.L_801B8990:
/* 801B8990 001B58D0  C0 5F 00 E8 */	lfs f2, 0xe8(r31)
/* 801B8994 001B58D4  C0 22 B1 04 */	lfs f1, lbl_80519464@sda21(r2)
/* 801B8998 001B58D8  C0 7F 00 F0 */	lfs f3, 0xf0(r31)
/* 801B899C 001B58DC  EC 42 08 2A */	fadds f2, f2, f1
/* 801B89A0 001B58E0  C0 1F 00 DC */	lfs f0, 0xdc(r31)
/* 801B89A4 001B58E4  EC 63 08 2A */	fadds f3, f3, f1
/* 801B89A8 001B58E8  C0 3F 00 EC */	lfs f1, 0xec(r31)
/* 801B89AC 001B58EC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801B89B0 001B58F0  40 80 00 08 */	bge .L_801B89B8
/* 801B89B4 001B58F4  D0 5F 00 DC */	stfs f2, 0xdc(r31)
.L_801B89B8:
/* 801B89B8 001B58F8  C0 1F 00 E0 */	lfs f0, 0xe0(r31)
/* 801B89BC 001B58FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801B89C0 001B5900  40 80 00 08 */	bge .L_801B89C8
/* 801B89C4 001B5904  D0 3F 00 E0 */	stfs f1, 0xe0(r31)
.L_801B89C8:
/* 801B89C8 001B5908  C0 1F 00 E4 */	lfs f0, 0xe4(r31)
/* 801B89CC 001B590C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801B89D0 001B5910  40 80 00 08 */	bge .L_801B89D8
/* 801B89D4 001B5914  D0 7F 00 E4 */	stfs f3, 0xe4(r31)
.L_801B89D8:
/* 801B89D8 001B5918  C0 1F 00 E8 */	lfs f0, 0xe8(r31)
/* 801B89DC 001B591C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801B89E0 001B5920  40 81 00 08 */	ble .L_801B89E8
/* 801B89E4 001B5924  D0 5F 00 E8 */	stfs f2, 0xe8(r31)
.L_801B89E8:
/* 801B89E8 001B5928  C0 1F 00 EC */	lfs f0, 0xec(r31)
/* 801B89EC 001B592C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801B89F0 001B5930  40 81 00 08 */	ble .L_801B89F8
/* 801B89F4 001B5934  D0 3F 00 EC */	stfs f1, 0xec(r31)
.L_801B89F8:
/* 801B89F8 001B5938  C0 1F 00 F0 */	lfs f0, 0xf0(r31)
/* 801B89FC 001B593C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801B8A00 001B5940  40 81 00 08 */	ble .L_801B8A08
/* 801B8A04 001B5944  D0 7F 00 F0 */	stfs f3, 0xf0(r31)
.L_801B8A08:
/* 801B8A08 001B5948  7F E3 FB 78 */	mr r3, r31
/* 801B8A0C 001B594C  48 00 55 C1 */	bl deleteTemp__Q24Game10RoomMapMgrFv
/* 801B8A10 001B5950  BA A1 15 04 */	lmw r21, 0x1504(r1)
/* 801B8A14 001B5954  80 01 15 34 */	lwz r0, 0x1534(r1)
/* 801B8A18 001B5958  7C 08 03 A6 */	mtlr r0
/* 801B8A1C 001B595C  38 21 15 30 */	addi r1, r1, 0x1530
/* 801B8A20 001B5960  4E 80 00 20 */	blr 
.endfn createRandomMap__Q24Game10RoomMapMgrFiPQ34Game4Cave11EditMapUnit

.fn __dt__Q24Game16MapUnitInterfaceFv, weak
/* 801B8A24 001B5964  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B8A28 001B5968  7C 08 02 A6 */	mflr r0
/* 801B8A2C 001B596C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B8A30 001B5970  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B8A34 001B5974  7C 7F 1B 79 */	or. r31, r3, r3
/* 801B8A38 001B5978  93 C1 00 08 */	stw r30, 8(r1)
/* 801B8A3C 001B597C  7C 9E 23 78 */	mr r30, r4
/* 801B8A40 001B5980  41 82 00 B4 */	beq .L_801B8AF4
/* 801B8A44 001B5984  3C 60 80 4B */	lis r3, __vt__Q24Game16MapUnitInterface@ha
/* 801B8A48 001B5988  38 03 5C FC */	addi r0, r3, __vt__Q24Game16MapUnitInterface@l
/* 801B8A4C 001B598C  90 1F 00 00 */	stw r0, 0(r31)
/* 801B8A50 001B5990  41 82 00 94 */	beq .L_801B8AE4
/* 801B8A54 001B5994  3C 60 80 4C */	lis r3, __vt__Q24Game9PartsView@ha
/* 801B8A58 001B5998  34 1F 01 18 */	addic. r0, r31, 0x118
/* 801B8A5C 001B599C  38 03 13 40 */	addi r0, r3, __vt__Q24Game9PartsView@l
/* 801B8A60 001B59A0  90 1F 00 00 */	stw r0, 0(r31)
/* 801B8A64 001B59A4  41 82 00 38 */	beq .L_801B8A9C
/* 801B8A68 001B59A8  3C 80 80 4B */	lis r4, __vt__Q24Game4Door@ha
/* 801B8A6C 001B59AC  34 7F 01 38 */	addic. r3, r31, 0x138
/* 801B8A70 001B59B0  38 04 5C EC */	addi r0, r4, __vt__Q24Game4Door@l
/* 801B8A74 001B59B4  90 1F 01 18 */	stw r0, 0x118(r31)
/* 801B8A78 001B59B8  41 82 00 18 */	beq .L_801B8A90
/* 801B8A7C 001B59BC  3C 80 80 4B */	lis r4, __vt__Q24Game8DoorLink@ha
/* 801B8A80 001B59C0  38 04 60 D4 */	addi r0, r4, __vt__Q24Game8DoorLink@l
/* 801B8A84 001B59C4  90 1F 01 38 */	stw r0, 0x138(r31)
/* 801B8A88 001B59C8  38 80 00 00 */	li r4, 0
/* 801B8A8C 001B59CC  48 25 8A FD */	bl __dt__5CNodeFv
.L_801B8A90:
/* 801B8A90 001B59D0  38 7F 01 18 */	addi r3, r31, 0x118
/* 801B8A94 001B59D4  38 80 00 00 */	li r4, 0
/* 801B8A98 001B59D8  48 25 8A F1 */	bl __dt__5CNodeFv
.L_801B8A9C:
/* 801B8A9C 001B59DC  34 1F 00 70 */	addic. r0, r31, 0x70
/* 801B8AA0 001B59E0  41 82 00 38 */	beq .L_801B8AD8
/* 801B8AA4 001B59E4  3C 80 80 4B */	lis r4, __vt__Q24Game14EditorRouteMgr@ha
/* 801B8AA8 001B59E8  34 7F 00 90 */	addic. r3, r31, 0x90
/* 801B8AAC 001B59EC  38 04 23 00 */	addi r0, r4, __vt__Q24Game14EditorRouteMgr@l
/* 801B8AB0 001B59F0  90 1F 00 70 */	stw r0, 0x70(r31)
/* 801B8AB4 001B59F4  41 82 00 18 */	beq .L_801B8ACC
/* 801B8AB8 001B59F8  3C 80 80 4B */	lis r4, __vt__Q34Game14EditorRouteMgr6WPNode@ha
/* 801B8ABC 001B59FC  38 04 23 38 */	addi r0, r4, __vt__Q34Game14EditorRouteMgr6WPNode@l
/* 801B8AC0 001B5A00  90 1F 00 90 */	stw r0, 0x90(r31)
/* 801B8AC4 001B5A04  38 80 00 00 */	li r4, 0
/* 801B8AC8 001B5A08  48 25 8A C1 */	bl __dt__5CNodeFv
.L_801B8ACC:
/* 801B8ACC 001B5A0C  38 7F 00 70 */	addi r3, r31, 0x70
/* 801B8AD0 001B5A10  38 80 00 00 */	li r4, 0
/* 801B8AD4 001B5A14  4B FB 9E 91 */	bl __dt__Q24Game8RouteMgrFv
.L_801B8AD8:
/* 801B8AD8 001B5A18  7F E3 FB 78 */	mr r3, r31
/* 801B8ADC 001B5A1C  38 80 00 00 */	li r4, 0
/* 801B8AE0 001B5A20  48 25 8A A9 */	bl __dt__5CNodeFv
.L_801B8AE4:
/* 801B8AE4 001B5A24  7F C0 07 35 */	extsh. r0, r30
/* 801B8AE8 001B5A28  40 81 00 0C */	ble .L_801B8AF4
/* 801B8AEC 001B5A2C  7F E3 FB 78 */	mr r3, r31
/* 801B8AF0 001B5A30  4B E6 B5 C5 */	bl __dl__FPv
.L_801B8AF4:
/* 801B8AF4 001B5A34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B8AF8 001B5A38  7F E3 FB 78 */	mr r3, r31
/* 801B8AFC 001B5A3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B8B00 001B5A40  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B8B04 001B5A44  7C 08 03 A6 */	mtlr r0
/* 801B8B08 001B5A48  38 21 00 10 */	addi r1, r1, 0x10
/* 801B8B0C 001B5A4C  4E 80 00 20 */	blr 
.endfn __dt__Q24Game16MapUnitInterfaceFv

.fn __ct__Q24Game16MapUnitInterfaceFv, weak
/* 801B8B10 001B5A50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B8B14 001B5A54  7C 08 02 A6 */	mflr r0
/* 801B8B18 001B5A58  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B8B1C 001B5A5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B8B20 001B5A60  7C 7F 1B 78 */	mr r31, r3
/* 801B8B24 001B5A64  48 07 98 19 */	bl __ct__Q24Game9PartsViewFv
/* 801B8B28 001B5A68  3C 80 80 4B */	lis r4, __vt__Q24Game16MapUnitInterface@ha
/* 801B8B2C 001B5A6C  7F E3 FB 78 */	mr r3, r31
/* 801B8B30 001B5A70  38 04 5C FC */	addi r0, r4, __vt__Q24Game16MapUnitInterface@l
/* 801B8B34 001B5A74  90 1F 00 00 */	stw r0, 0(r31)
/* 801B8B38 001B5A78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B8B3C 001B5A7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B8B40 001B5A80  7C 08 03 A6 */	mtlr r0
/* 801B8B44 001B5A84  38 21 00 10 */	addi r1, r1, 0x10
/* 801B8B48 001B5A88  4E 80 00 20 */	blr 
.endfn __ct__Q24Game16MapUnitInterfaceFv

.fn __dt__Q24Game9PartsViewFv, weak
/* 801B8B4C 001B5A8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B8B50 001B5A90  7C 08 02 A6 */	mflr r0
/* 801B8B54 001B5A94  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B8B58 001B5A98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B8B5C 001B5A9C  7C 9F 23 78 */	mr r31, r4
/* 801B8B60 001B5AA0  93 C1 00 08 */	stw r30, 8(r1)
/* 801B8B64 001B5AA4  7C 7E 1B 79 */	or. r30, r3, r3
/* 801B8B68 001B5AA8  41 82 00 A4 */	beq .L_801B8C0C
/* 801B8B6C 001B5AAC  3C 60 80 4C */	lis r3, __vt__Q24Game9PartsView@ha
/* 801B8B70 001B5AB0  34 1E 01 18 */	addic. r0, r30, 0x118
/* 801B8B74 001B5AB4  38 03 13 40 */	addi r0, r3, __vt__Q24Game9PartsView@l
/* 801B8B78 001B5AB8  90 1E 00 00 */	stw r0, 0(r30)
/* 801B8B7C 001B5ABC  41 82 00 38 */	beq .L_801B8BB4
/* 801B8B80 001B5AC0  3C 80 80 4B */	lis r4, __vt__Q24Game4Door@ha
/* 801B8B84 001B5AC4  34 7E 01 38 */	addic. r3, r30, 0x138
/* 801B8B88 001B5AC8  38 04 5C EC */	addi r0, r4, __vt__Q24Game4Door@l
/* 801B8B8C 001B5ACC  90 1E 01 18 */	stw r0, 0x118(r30)
/* 801B8B90 001B5AD0  41 82 00 18 */	beq .L_801B8BA8
/* 801B8B94 001B5AD4  3C 80 80 4B */	lis r4, __vt__Q24Game8DoorLink@ha
/* 801B8B98 001B5AD8  38 04 60 D4 */	addi r0, r4, __vt__Q24Game8DoorLink@l
/* 801B8B9C 001B5ADC  90 1E 01 38 */	stw r0, 0x138(r30)
/* 801B8BA0 001B5AE0  38 80 00 00 */	li r4, 0
/* 801B8BA4 001B5AE4  48 25 89 E5 */	bl __dt__5CNodeFv
.L_801B8BA8:
/* 801B8BA8 001B5AE8  38 7E 01 18 */	addi r3, r30, 0x118
/* 801B8BAC 001B5AEC  38 80 00 00 */	li r4, 0
/* 801B8BB0 001B5AF0  48 25 89 D9 */	bl __dt__5CNodeFv
.L_801B8BB4:
/* 801B8BB4 001B5AF4  34 1E 00 70 */	addic. r0, r30, 0x70
/* 801B8BB8 001B5AF8  41 82 00 38 */	beq .L_801B8BF0
/* 801B8BBC 001B5AFC  3C 80 80 4B */	lis r4, __vt__Q24Game14EditorRouteMgr@ha
/* 801B8BC0 001B5B00  34 7E 00 90 */	addic. r3, r30, 0x90
/* 801B8BC4 001B5B04  38 04 23 00 */	addi r0, r4, __vt__Q24Game14EditorRouteMgr@l
/* 801B8BC8 001B5B08  90 1E 00 70 */	stw r0, 0x70(r30)
/* 801B8BCC 001B5B0C  41 82 00 18 */	beq .L_801B8BE4
/* 801B8BD0 001B5B10  3C 80 80 4B */	lis r4, __vt__Q34Game14EditorRouteMgr6WPNode@ha
/* 801B8BD4 001B5B14  38 04 23 38 */	addi r0, r4, __vt__Q34Game14EditorRouteMgr6WPNode@l
/* 801B8BD8 001B5B18  90 1E 00 90 */	stw r0, 0x90(r30)
/* 801B8BDC 001B5B1C  38 80 00 00 */	li r4, 0
/* 801B8BE0 001B5B20  48 25 89 A9 */	bl __dt__5CNodeFv
.L_801B8BE4:
/* 801B8BE4 001B5B24  38 7E 00 70 */	addi r3, r30, 0x70
/* 801B8BE8 001B5B28  38 80 00 00 */	li r4, 0
/* 801B8BEC 001B5B2C  4B FB 9D 79 */	bl __dt__Q24Game8RouteMgrFv
.L_801B8BF0:
/* 801B8BF0 001B5B30  7F C3 F3 78 */	mr r3, r30
/* 801B8BF4 001B5B34  38 80 00 00 */	li r4, 0
/* 801B8BF8 001B5B38  48 25 89 91 */	bl __dt__5CNodeFv
/* 801B8BFC 001B5B3C  7F E0 07 35 */	extsh. r0, r31
/* 801B8C00 001B5B40  40 81 00 0C */	ble .L_801B8C0C
/* 801B8C04 001B5B44  7F C3 F3 78 */	mr r3, r30
/* 801B8C08 001B5B48  4B E6 B4 AD */	bl __dl__FPv
.L_801B8C0C:
/* 801B8C0C 001B5B4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B8C10 001B5B50  7F C3 F3 78 */	mr r3, r30
/* 801B8C14 001B5B54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B8C18 001B5B58  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B8C1C 001B5B5C  7C 08 03 A6 */	mtlr r0
/* 801B8C20 001B5B60  38 21 00 10 */	addi r1, r1, 0x10
/* 801B8C24 001B5B64  4E 80 00 20 */	blr 
.endfn __dt__Q24Game9PartsViewFv

.fn completeUnitData__Q24Game10RoomMapMgrFv, global
/* 801B8C28 001B5B68  94 21 FD D0 */	stwu r1, -0x230(r1)
/* 801B8C2C 001B5B6C  7C 08 02 A6 */	mflr r0
/* 801B8C30 001B5B70  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801B8C34 001B5B74  90 01 02 34 */	stw r0, 0x234(r1)
/* 801B8C38 001B5B78  38 00 00 00 */	li r0, 0
/* 801B8C3C 001B5B7C  38 84 5E E0 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801B8C40 001B5B80  93 E1 02 2C */	stw r31, 0x22c(r1)
/* 801B8C44 001B5B84  28 00 00 00 */	cmplwi r0, 0
/* 801B8C48 001B5B88  93 C1 02 28 */	stw r30, 0x228(r1)
/* 801B8C4C 001B5B8C  93 A1 02 24 */	stw r29, 0x224(r1)
/* 801B8C50 001B5B90  7C 7D 1B 78 */	mr r29, r3
/* 801B8C54 001B5B94  80 63 00 A8 */	lwz r3, 0xa8(r3)
/* 801B8C58 001B5B98  90 81 00 08 */	stw r4, 8(r1)
/* 801B8C5C 001B5B9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B8C60 001B5BA0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801B8C64 001B5BA4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801B8C68 001B5BA8  40 82 00 1C */	bne .L_801B8C84
/* 801B8C6C 001B5BAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8C70 001B5BB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B8C74 001B5BB4  7D 89 03 A6 */	mtctr r12
/* 801B8C78 001B5BB8  4E 80 04 21 */	bctrl 
/* 801B8C7C 001B5BBC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B8C80 001B5BC0  48 00 00 8C */	b .L_801B8D0C
.L_801B8C84:
/* 801B8C84 001B5BC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8C88 001B5BC8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B8C8C 001B5BCC  7D 89 03 A6 */	mtctr r12
/* 801B8C90 001B5BD0  4E 80 04 21 */	bctrl 
/* 801B8C94 001B5BD4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B8C98 001B5BD8  48 00 00 58 */	b .L_801B8CF0
.L_801B8C9C:
/* 801B8C9C 001B5BDC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8CA0 001B5BE0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8CA4 001B5BE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8CA8 001B5BE8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B8CAC 001B5BEC  7D 89 03 A6 */	mtctr r12
/* 801B8CB0 001B5BF0  4E 80 04 21 */	bctrl 
/* 801B8CB4 001B5BF4  7C 64 1B 78 */	mr r4, r3
/* 801B8CB8 001B5BF8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B8CBC 001B5BFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8CC0 001B5C00  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B8CC4 001B5C04  7D 89 03 A6 */	mtctr r12
/* 801B8CC8 001B5C08  4E 80 04 21 */	bctrl 
/* 801B8CCC 001B5C0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8CD0 001B5C10  40 82 00 3C */	bne .L_801B8D0C
/* 801B8CD4 001B5C14  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8CD8 001B5C18  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8CDC 001B5C1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8CE0 001B5C20  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8CE4 001B5C24  7D 89 03 A6 */	mtctr r12
/* 801B8CE8 001B5C28  4E 80 04 21 */	bctrl 
/* 801B8CEC 001B5C2C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B8CF0:
/* 801B8CF0 001B5C30  81 81 00 08 */	lwz r12, 8(r1)
/* 801B8CF4 001B5C34  38 61 00 08 */	addi r3, r1, 8
/* 801B8CF8 001B5C38  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B8CFC 001B5C3C  7D 89 03 A6 */	mtctr r12
/* 801B8D00 001B5C40  4E 80 04 21 */	bctrl 
/* 801B8D04 001B5C44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8D08 001B5C48  41 82 FF 94 */	beq .L_801B8C9C
.L_801B8D0C:
/* 801B8D0C 001B5C4C  3C 60 80 48 */	lis r3, lbl_8047FEBC@ha
/* 801B8D10 001B5C50  3B E3 FE BC */	addi r31, r3, lbl_8047FEBC@l
/* 801B8D14 001B5C54  48 00 00 FC */	b .L_801B8E10
.L_801B8D18:
/* 801B8D18 001B5C58  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8D1C 001B5C5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8D20 001B5C60  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B8D24 001B5C64  7D 89 03 A6 */	mtctr r12
/* 801B8D28 001B5C68  4E 80 04 21 */	bctrl 
/* 801B8D2C 001B5C6C  7C 7E 1B 78 */	mr r30, r3
/* 801B8D30 001B5C70  7F E4 FB 78 */	mr r4, r31
/* 801B8D34 001B5C74  80 BE 00 08 */	lwz r5, 8(r30)
/* 801B8D38 001B5C78  38 61 00 18 */	addi r3, r1, 0x18
/* 801B8D3C 001B5C7C  4C C6 31 82 */	crclr 6
/* 801B8D40 001B5C80  4B F0 E6 F9 */	bl sprintf
/* 801B8D44 001B5C84  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 801B8D48 001B5C88  7F C4 F3 78 */	mr r4, r30
/* 801B8D4C 001B5C8C  38 A1 00 18 */	addi r5, r1, 0x18
/* 801B8D50 001B5C90  4B FF DC 9D */	bl makeUnit__Q24Game10MapUnitMgrFPQ24Game7MapUnitPc
/* 801B8D54 001B5C94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B8D58 001B5C98  28 00 00 00 */	cmplwi r0, 0
/* 801B8D5C 001B5C9C  40 82 00 24 */	bne .L_801B8D80
/* 801B8D60 001B5CA0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8D64 001B5CA4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8D68 001B5CA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8D6C 001B5CAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8D70 001B5CB0  7D 89 03 A6 */	mtctr r12
/* 801B8D74 001B5CB4  4E 80 04 21 */	bctrl 
/* 801B8D78 001B5CB8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B8D7C 001B5CBC  48 00 00 94 */	b .L_801B8E10
.L_801B8D80:
/* 801B8D80 001B5CC0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8D84 001B5CC4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8D88 001B5CC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8D8C 001B5CCC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8D90 001B5CD0  7D 89 03 A6 */	mtctr r12
/* 801B8D94 001B5CD4  4E 80 04 21 */	bctrl 
/* 801B8D98 001B5CD8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B8D9C 001B5CDC  48 00 00 58 */	b .L_801B8DF4
.L_801B8DA0:
/* 801B8DA0 001B5CE0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8DA4 001B5CE4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8DA8 001B5CE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8DAC 001B5CEC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B8DB0 001B5CF0  7D 89 03 A6 */	mtctr r12
/* 801B8DB4 001B5CF4  4E 80 04 21 */	bctrl 
/* 801B8DB8 001B5CF8  7C 64 1B 78 */	mr r4, r3
/* 801B8DBC 001B5CFC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B8DC0 001B5D00  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8DC4 001B5D04  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B8DC8 001B5D08  7D 89 03 A6 */	mtctr r12
/* 801B8DCC 001B5D0C  4E 80 04 21 */	bctrl 
/* 801B8DD0 001B5D10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8DD4 001B5D14  40 82 00 3C */	bne .L_801B8E10
/* 801B8DD8 001B5D18  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8DDC 001B5D1C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8DE0 001B5D20  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8DE4 001B5D24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8DE8 001B5D28  7D 89 03 A6 */	mtctr r12
/* 801B8DEC 001B5D2C  4E 80 04 21 */	bctrl 
/* 801B8DF0 001B5D30  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B8DF4:
/* 801B8DF4 001B5D34  81 81 00 08 */	lwz r12, 8(r1)
/* 801B8DF8 001B5D38  38 61 00 08 */	addi r3, r1, 8
/* 801B8DFC 001B5D3C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B8E00 001B5D40  7D 89 03 A6 */	mtctr r12
/* 801B8E04 001B5D44  4E 80 04 21 */	bctrl 
/* 801B8E08 001B5D48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8E0C 001B5D4C  41 82 FF 94 */	beq .L_801B8DA0
.L_801B8E10:
/* 801B8E10 001B5D50  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8E14 001B5D54  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8E18 001B5D58  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B8E1C 001B5D5C  7D 89 03 A6 */	mtctr r12
/* 801B8E20 001B5D60  4E 80 04 21 */	bctrl 
/* 801B8E24 001B5D64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8E28 001B5D68  7C 04 18 40 */	cmplw r4, r3
/* 801B8E2C 001B5D6C  40 82 FE EC */	bne .L_801B8D18
/* 801B8E30 001B5D70  80 01 02 34 */	lwz r0, 0x234(r1)
/* 801B8E34 001B5D74  83 E1 02 2C */	lwz r31, 0x22c(r1)
/* 801B8E38 001B5D78  83 C1 02 28 */	lwz r30, 0x228(r1)
/* 801B8E3C 001B5D7C  83 A1 02 24 */	lwz r29, 0x224(r1)
/* 801B8E40 001B5D80  7C 08 03 A6 */	mtlr r0
/* 801B8E44 001B5D84  38 21 02 30 */	addi r1, r1, 0x230
/* 801B8E48 001B5D88  4E 80 00 20 */	blr 
.endfn completeUnitData__Q24Game10RoomMapMgrFv

.fn setupJUTTextures__Q24Game10RoomMapMgrFv, global
/* 801B8E4C 001B5D8C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801B8E50 001B5D90  7C 08 02 A6 */	mflr r0
/* 801B8E54 001B5D94  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801B8E58 001B5D98  90 01 00 34 */	stw r0, 0x34(r1)
/* 801B8E5C 001B5D9C  38 00 00 00 */	li r0, 0
/* 801B8E60 001B5DA0  38 84 5E E0 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801B8E64 001B5DA4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801B8E68 001B5DA8  7C 7F 1B 78 */	mr r31, r3
/* 801B8E6C 001B5DAC  28 00 00 00 */	cmplwi r0, 0
/* 801B8E70 001B5DB0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801B8E74 001B5DB4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801B8E78 001B5DB8  80 63 00 A8 */	lwz r3, 0xa8(r3)
/* 801B8E7C 001B5DBC  90 81 00 08 */	stw r4, 8(r1)
/* 801B8E80 001B5DC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B8E84 001B5DC4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801B8E88 001B5DC8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801B8E8C 001B5DCC  40 82 00 1C */	bne .L_801B8EA8
/* 801B8E90 001B5DD0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8E94 001B5DD4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B8E98 001B5DD8  7D 89 03 A6 */	mtctr r12
/* 801B8E9C 001B5DDC  4E 80 04 21 */	bctrl 
/* 801B8EA0 001B5DE0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B8EA4 001B5DE4  48 00 01 98 */	b .L_801B903C
.L_801B8EA8:
/* 801B8EA8 001B5DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8EAC 001B5DEC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B8EB0 001B5DF0  7D 89 03 A6 */	mtctr r12
/* 801B8EB4 001B5DF4  4E 80 04 21 */	bctrl 
/* 801B8EB8 001B5DF8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B8EBC 001B5DFC  48 00 00 58 */	b .L_801B8F14
.L_801B8EC0:
/* 801B8EC0 001B5E00  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8EC4 001B5E04  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8EC8 001B5E08  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8ECC 001B5E0C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B8ED0 001B5E10  7D 89 03 A6 */	mtctr r12
/* 801B8ED4 001B5E14  4E 80 04 21 */	bctrl 
/* 801B8ED8 001B5E18  7C 64 1B 78 */	mr r4, r3
/* 801B8EDC 001B5E1C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B8EE0 001B5E20  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8EE4 001B5E24  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B8EE8 001B5E28  7D 89 03 A6 */	mtctr r12
/* 801B8EEC 001B5E2C  4E 80 04 21 */	bctrl 
/* 801B8EF0 001B5E30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8EF4 001B5E34  40 82 01 48 */	bne .L_801B903C
/* 801B8EF8 001B5E38  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8EFC 001B5E3C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8F00 001B5E40  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8F04 001B5E44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8F08 001B5E48  7D 89 03 A6 */	mtctr r12
/* 801B8F0C 001B5E4C  4E 80 04 21 */	bctrl 
/* 801B8F10 001B5E50  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B8F14:
/* 801B8F14 001B5E54  81 81 00 08 */	lwz r12, 8(r1)
/* 801B8F18 001B5E58  38 61 00 08 */	addi r3, r1, 8
/* 801B8F1C 001B5E5C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B8F20 001B5E60  7D 89 03 A6 */	mtctr r12
/* 801B8F24 001B5E64  4E 80 04 21 */	bctrl 
/* 801B8F28 001B5E68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B8F2C 001B5E6C  41 82 FF 94 */	beq .L_801B8EC0
/* 801B8F30 001B5E70  48 00 01 0C */	b .L_801B903C
.L_801B8F34:
/* 801B8F34 001B5E74  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8F38 001B5E78  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8F3C 001B5E7C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B8F40 001B5E80  7D 89 03 A6 */	mtctr r12
/* 801B8F44 001B5E84  4E 80 04 21 */	bctrl 
/* 801B8F48 001B5E88  7C 7D 1B 78 */	mr r29, r3
/* 801B8F4C 001B5E8C  38 60 00 40 */	li r3, 0x40
/* 801B8F50 001B5E90  4B E6 AF 55 */	bl __nw__FUl
/* 801B8F54 001B5E94  7C 7E 1B 79 */	or. r30, r3, r3
/* 801B8F58 001B5E98  41 82 00 24 */	beq .L_801B8F7C
/* 801B8F5C 001B5E9C  80 9D 00 30 */	lwz r4, 0x30(r29)
/* 801B8F60 001B5EA0  38 00 00 00 */	li r0, 0
/* 801B8F64 001B5EA4  38 A0 00 00 */	li r5, 0
/* 801B8F68 001B5EA8  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801B8F6C 001B5EAC  4B E7 A1 19 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 801B8F70 001B5EB0  88 1E 00 3B */	lbz r0, 0x3b(r30)
/* 801B8F74 001B5EB4  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 801B8F78 001B5EB8  98 1E 00 3B */	stb r0, 0x3b(r30)
.L_801B8F7C:
/* 801B8F7C 001B5EBC  93 DD 00 2C */	stw r30, 0x2c(r29)
/* 801B8F80 001B5EC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B8F84 001B5EC4  28 00 00 00 */	cmplwi r0, 0
/* 801B8F88 001B5EC8  40 82 00 24 */	bne .L_801B8FAC
/* 801B8F8C 001B5ECC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8F90 001B5ED0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8F94 001B5ED4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8F98 001B5ED8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8F9C 001B5EDC  7D 89 03 A6 */	mtctr r12
/* 801B8FA0 001B5EE0  4E 80 04 21 */	bctrl 
/* 801B8FA4 001B5EE4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B8FA8 001B5EE8  48 00 00 94 */	b .L_801B903C
.L_801B8FAC:
/* 801B8FAC 001B5EEC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8FB0 001B5EF0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8FB4 001B5EF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8FB8 001B5EF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B8FBC 001B5EFC  7D 89 03 A6 */	mtctr r12
/* 801B8FC0 001B5F00  4E 80 04 21 */	bctrl 
/* 801B8FC4 001B5F04  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B8FC8 001B5F08  48 00 00 58 */	b .L_801B9020
.L_801B8FCC:
/* 801B8FCC 001B5F0C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B8FD0 001B5F10  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B8FD4 001B5F14  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8FD8 001B5F18  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B8FDC 001B5F1C  7D 89 03 A6 */	mtctr r12
/* 801B8FE0 001B5F20  4E 80 04 21 */	bctrl 
/* 801B8FE4 001B5F24  7C 64 1B 78 */	mr r4, r3
/* 801B8FE8 001B5F28  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B8FEC 001B5F2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B8FF0 001B5F30  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B8FF4 001B5F34  7D 89 03 A6 */	mtctr r12
/* 801B8FF8 001B5F38  4E 80 04 21 */	bctrl 
/* 801B8FFC 001B5F3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9000 001B5F40  40 82 00 3C */	bne .L_801B903C
/* 801B9004 001B5F44  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9008 001B5F48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B900C 001B5F4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9010 001B5F50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9014 001B5F54  7D 89 03 A6 */	mtctr r12
/* 801B9018 001B5F58  4E 80 04 21 */	bctrl 
/* 801B901C 001B5F5C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B9020:
/* 801B9020 001B5F60  81 81 00 08 */	lwz r12, 8(r1)
/* 801B9024 001B5F64  38 61 00 08 */	addi r3, r1, 8
/* 801B9028 001B5F68  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B902C 001B5F6C  7D 89 03 A6 */	mtctr r12
/* 801B9030 001B5F70  4E 80 04 21 */	bctrl 
/* 801B9034 001B5F74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9038 001B5F78  41 82 FF 94 */	beq .L_801B8FCC
.L_801B903C:
/* 801B903C 001B5F7C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9040 001B5F80  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9044 001B5F84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B9048 001B5F88  7D 89 03 A6 */	mtctr r12
/* 801B904C 001B5F8C  4E 80 04 21 */	bctrl 
/* 801B9050 001B5F90  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9054 001B5F94  7C 04 18 40 */	cmplw r4, r3
/* 801B9058 001B5F98  40 82 FE DC */	bne .L_801B8F34
/* 801B905C 001B5F9C  7F E3 FB 78 */	mr r3, r31
/* 801B9060 001B5FA0  48 09 37 91 */	bl nishimuraSetTexture__Q24Game10RoomMapMgrFv
/* 801B9064 001B5FA4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801B9068 001B5FA8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801B906C 001B5FAC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801B9070 001B5FB0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801B9074 001B5FB4  7C 08 03 A6 */	mtlr r0
/* 801B9078 001B5FB8  38 21 00 30 */	addi r1, r1, 0x30
/* 801B907C 001B5FBC  4E 80 00 20 */	blr 
.endfn setupJUTTextures__Q24Game10RoomMapMgrFv

.fn useUnit__Q24Game10RoomMapMgrFPc, global
/* 801B9080 001B5FC0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801B9084 001B5FC4  7C 08 02 A6 */	mflr r0
/* 801B9088 001B5FC8  3C A0 80 4B */	lis r5, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801B908C 001B5FCC  90 01 00 34 */	stw r0, 0x34(r1)
/* 801B9090 001B5FD0  38 00 00 00 */	li r0, 0
/* 801B9094 001B5FD4  38 A5 5E E0 */	addi r5, r5, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801B9098 001B5FD8  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 801B909C 001B5FDC  7C 7E 1B 78 */	mr r30, r3
/* 801B90A0 001B5FE0  28 00 00 00 */	cmplwi r0, 0
/* 801B90A4 001B5FE4  7C 9F 23 78 */	mr r31, r4
/* 801B90A8 001B5FE8  80 63 00 A8 */	lwz r3, 0xa8(r3)
/* 801B90AC 001B5FEC  90 A1 00 08 */	stw r5, 8(r1)
/* 801B90B0 001B5FF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B90B4 001B5FF4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801B90B8 001B5FF8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801B90BC 001B5FFC  40 82 00 1C */	bne .L_801B90D8
/* 801B90C0 001B6000  81 83 00 00 */	lwz r12, 0(r3)
/* 801B90C4 001B6004  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B90C8 001B6008  7D 89 03 A6 */	mtctr r12
/* 801B90CC 001B600C  4E 80 04 21 */	bctrl 
/* 801B90D0 001B6010  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B90D4 001B6014  48 00 01 7C */	b .L_801B9250
.L_801B90D8:
/* 801B90D8 001B6018  81 83 00 00 */	lwz r12, 0(r3)
/* 801B90DC 001B601C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B90E0 001B6020  7D 89 03 A6 */	mtctr r12
/* 801B90E4 001B6024  4E 80 04 21 */	bctrl 
/* 801B90E8 001B6028  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B90EC 001B602C  48 00 00 58 */	b .L_801B9144
.L_801B90F0:
/* 801B90F0 001B6030  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B90F4 001B6034  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B90F8 001B6038  81 83 00 00 */	lwz r12, 0(r3)
/* 801B90FC 001B603C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B9100 001B6040  7D 89 03 A6 */	mtctr r12
/* 801B9104 001B6044  4E 80 04 21 */	bctrl 
/* 801B9108 001B6048  7C 64 1B 78 */	mr r4, r3
/* 801B910C 001B604C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B9110 001B6050  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9114 001B6054  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B9118 001B6058  7D 89 03 A6 */	mtctr r12
/* 801B911C 001B605C  4E 80 04 21 */	bctrl 
/* 801B9120 001B6060  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9124 001B6064  40 82 01 2C */	bne .L_801B9250
/* 801B9128 001B6068  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B912C 001B606C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9130 001B6070  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9134 001B6074  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9138 001B6078  7D 89 03 A6 */	mtctr r12
/* 801B913C 001B607C  4E 80 04 21 */	bctrl 
/* 801B9140 001B6080  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B9144:
/* 801B9144 001B6084  81 81 00 08 */	lwz r12, 8(r1)
/* 801B9148 001B6088  38 61 00 08 */	addi r3, r1, 8
/* 801B914C 001B608C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B9150 001B6090  7D 89 03 A6 */	mtctr r12
/* 801B9154 001B6094  4E 80 04 21 */	bctrl 
/* 801B9158 001B6098  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B915C 001B609C  41 82 FF 94 */	beq .L_801B90F0
/* 801B9160 001B60A0  48 00 00 F0 */	b .L_801B9250
.L_801B9164:
/* 801B9164 001B60A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9168 001B60A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B916C 001B60AC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B9170 001B60B0  7D 89 03 A6 */	mtctr r12
/* 801B9174 001B60B4  4E 80 04 21 */	bctrl 
/* 801B9178 001B60B8  7C 7D 1B 78 */	mr r29, r3
/* 801B917C 001B60BC  7F E3 FB 78 */	mr r3, r31
/* 801B9180 001B60C0  80 9D 00 08 */	lwz r4, 8(r29)
/* 801B9184 001B60C4  4B F1 15 3D */	bl strcmp
/* 801B9188 001B60C8  2C 03 00 00 */	cmpwi r3, 0
/* 801B918C 001B60CC  40 82 00 08 */	bne .L_801B9194
/* 801B9190 001B60D0  48 00 00 E4 */	b .L_801B9274
.L_801B9194:
/* 801B9194 001B60D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B9198 001B60D8  28 00 00 00 */	cmplwi r0, 0
/* 801B919C 001B60DC  40 82 00 24 */	bne .L_801B91C0
/* 801B91A0 001B60E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B91A4 001B60E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B91A8 001B60E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B91AC 001B60EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B91B0 001B60F0  7D 89 03 A6 */	mtctr r12
/* 801B91B4 001B60F4  4E 80 04 21 */	bctrl 
/* 801B91B8 001B60F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B91BC 001B60FC  48 00 00 94 */	b .L_801B9250
.L_801B91C0:
/* 801B91C0 001B6100  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B91C4 001B6104  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B91C8 001B6108  81 83 00 00 */	lwz r12, 0(r3)
/* 801B91CC 001B610C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B91D0 001B6110  7D 89 03 A6 */	mtctr r12
/* 801B91D4 001B6114  4E 80 04 21 */	bctrl 
/* 801B91D8 001B6118  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B91DC 001B611C  48 00 00 58 */	b .L_801B9234
.L_801B91E0:
/* 801B91E0 001B6120  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B91E4 001B6124  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B91E8 001B6128  81 83 00 00 */	lwz r12, 0(r3)
/* 801B91EC 001B612C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B91F0 001B6130  7D 89 03 A6 */	mtctr r12
/* 801B91F4 001B6134  4E 80 04 21 */	bctrl 
/* 801B91F8 001B6138  7C 64 1B 78 */	mr r4, r3
/* 801B91FC 001B613C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B9200 001B6140  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9204 001B6144  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B9208 001B6148  7D 89 03 A6 */	mtctr r12
/* 801B920C 001B614C  4E 80 04 21 */	bctrl 
/* 801B9210 001B6150  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9214 001B6154  40 82 00 3C */	bne .L_801B9250
/* 801B9218 001B6158  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B921C 001B615C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9220 001B6160  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9224 001B6164  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9228 001B6168  7D 89 03 A6 */	mtctr r12
/* 801B922C 001B616C  4E 80 04 21 */	bctrl 
/* 801B9230 001B6170  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B9234:
/* 801B9234 001B6174  81 81 00 08 */	lwz r12, 8(r1)
/* 801B9238 001B6178  38 61 00 08 */	addi r3, r1, 8
/* 801B923C 001B617C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B9240 001B6180  7D 89 03 A6 */	mtctr r12
/* 801B9244 001B6184  4E 80 04 21 */	bctrl 
/* 801B9248 001B6188  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B924C 001B618C  41 82 FF 94 */	beq .L_801B91E0
.L_801B9250:
/* 801B9250 001B6190  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9254 001B6194  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9258 001B6198  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B925C 001B619C  7D 89 03 A6 */	mtctr r12
/* 801B9260 001B61A0  4E 80 04 21 */	bctrl 
/* 801B9264 001B61A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9268 001B61A8  7C 04 18 40 */	cmplw r4, r3
/* 801B926C 001B61AC  40 82 FE F8 */	bne .L_801B9164
/* 801B9270 001B61B0  3B A0 00 00 */	li r29, 0
.L_801B9274:
/* 801B9274 001B61B4  28 1D 00 00 */	cmplwi r29, 0
/* 801B9278 001B61B8  7F BB EB 78 */	mr r27, r29
/* 801B927C 001B61BC  40 82 00 AC */	bne .L_801B9328
/* 801B9280 001B61C0  38 60 00 1C */	li r3, 0x1c
/* 801B9284 001B61C4  4B E6 AC 21 */	bl __nw__FUl
/* 801B9288 001B61C8  7C 7D 1B 79 */	or. r29, r3, r3
/* 801B928C 001B61CC  41 82 00 14 */	beq .L_801B92A0
/* 801B9290 001B61D0  48 25 81 01 */	bl __ct__5CNodeFv
/* 801B9294 001B61D4  3C 60 80 4B */	lis r3, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
/* 801B9298 001B61D8  38 03 5F 78 */	addi r0, r3, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
/* 801B929C 001B61DC  90 1D 00 00 */	stw r0, 0(r29)
.L_801B92A0:
/* 801B92A0 001B61E0  3B 40 00 00 */	li r26, 0
/* 801B92A4 001B61E4  3B 80 00 00 */	li r28, 0
/* 801B92A8 001B61E8  48 00 00 38 */	b .L_801B92E0
.L_801B92AC:
/* 801B92AC 001B61EC  80 9E 00 F8 */	lwz r4, 0xf8(r30)
/* 801B92B0 001B61F0  38 1C 00 18 */	addi r0, r28, 0x18
/* 801B92B4 001B61F4  7F E3 FB 78 */	mr r3, r31
/* 801B92B8 001B61F8  7C 84 00 2E */	lwzx r4, r4, r0
/* 801B92BC 001B61FC  80 84 00 08 */	lwz r4, 8(r4)
/* 801B92C0 001B6200  4B F1 14 01 */	bl strcmp
/* 801B92C4 001B6204  2C 03 00 00 */	cmpwi r3, 0
/* 801B92C8 001B6208  40 82 00 10 */	bne .L_801B92D8
/* 801B92CC 001B620C  80 7E 00 F8 */	lwz r3, 0xf8(r30)
/* 801B92D0 001B6210  38 1C 00 18 */	addi r0, r28, 0x18
/* 801B92D4 001B6214  7F 63 00 2E */	lwzx r27, r3, r0
.L_801B92D8:
/* 801B92D8 001B6218  3B 9C 01 6C */	addi r28, r28, 0x16c
/* 801B92DC 001B621C  3B 5A 00 01 */	addi r26, r26, 1
.L_801B92E0:
/* 801B92E0 001B6220  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 801B92E4 001B6224  7C 1A 00 00 */	cmpw r26, r0
/* 801B92E8 001B6228  41 80 FF C4 */	blt .L_801B92AC
/* 801B92EC 001B622C  28 1B 00 00 */	cmplwi r27, 0
/* 801B92F0 001B6230  40 82 00 24 */	bne .L_801B9314
/* 801B92F4 001B6234  3C 60 80 48 */	lis r3, lbl_8047FCF4@ha
/* 801B92F8 001B6238  3C 80 80 48 */	lis r4, lbl_8047FED8@ha
/* 801B92FC 001B623C  38 A4 FE D8 */	addi r5, r4, lbl_8047FED8@l
/* 801B9300 001B6240  7F E6 FB 78 */	mr r6, r31
/* 801B9304 001B6244  38 63 FC F4 */	addi r3, r3, lbl_8047FCF4@l
/* 801B9308 001B6248  38 80 07 5C */	li r4, 0x75c
/* 801B930C 001B624C  4C C6 31 82 */	crclr 6
/* 801B9310 001B6250  4B E7 13 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801B9314:
/* 801B9314 001B6254  93 7D 00 18 */	stw r27, 0x18(r29)
/* 801B9318 001B6258  7F A4 EB 78 */	mr r4, r29
/* 801B931C 001B625C  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 801B9320 001B6260  38 63 00 20 */	addi r3, r3, 0x20
/* 801B9324 001B6264  48 25 80 E5 */	bl add__5CNodeFP5CNode
.L_801B9328:
/* 801B9328 001B6268  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 801B932C 001B626C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801B9330 001B6270  7C 08 03 A6 */	mtlr r0
/* 801B9334 001B6274  38 21 00 30 */	addi r1, r1, 0x30
/* 801B9338 001B6278  4E 80 00 20 */	blr 
.endfn useUnit__Q24Game10RoomMapMgrFPc

.fn getTexture__Q24Game10RoomMapMgrFPc, global
/* 801B933C 001B627C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B9340 001B6280  7C 08 02 A6 */	mflr r0
/* 801B9344 001B6284  3C A0 80 4B */	lis r5, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801B9348 001B6288  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B934C 001B628C  38 00 00 00 */	li r0, 0
/* 801B9350 001B6290  28 00 00 00 */	cmplwi r0, 0
/* 801B9354 001B6294  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801B9358 001B6298  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801B935C 001B629C  7C 9E 23 78 */	mr r30, r4
/* 801B9360 001B62A0  38 85 5E E0 */	addi r4, r5, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801B9364 001B62A4  80 63 00 A8 */	lwz r3, 0xa8(r3)
/* 801B9368 001B62A8  90 81 00 08 */	stw r4, 8(r1)
/* 801B936C 001B62AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B9370 001B62B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801B9374 001B62B4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801B9378 001B62B8  40 82 00 1C */	bne .L_801B9394
/* 801B937C 001B62BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9380 001B62C0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B9384 001B62C4  7D 89 03 A6 */	mtctr r12
/* 801B9388 001B62C8  4E 80 04 21 */	bctrl 
/* 801B938C 001B62CC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B9390 001B62D0  48 00 01 80 */	b .L_801B9510
.L_801B9394:
/* 801B9394 001B62D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9398 001B62D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B939C 001B62DC  7D 89 03 A6 */	mtctr r12
/* 801B93A0 001B62E0  4E 80 04 21 */	bctrl 
/* 801B93A4 001B62E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B93A8 001B62E8  48 00 00 58 */	b .L_801B9400
.L_801B93AC:
/* 801B93AC 001B62EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B93B0 001B62F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B93B4 001B62F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B93B8 001B62F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B93BC 001B62FC  7D 89 03 A6 */	mtctr r12
/* 801B93C0 001B6300  4E 80 04 21 */	bctrl 
/* 801B93C4 001B6304  7C 64 1B 78 */	mr r4, r3
/* 801B93C8 001B6308  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B93CC 001B630C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B93D0 001B6310  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B93D4 001B6314  7D 89 03 A6 */	mtctr r12
/* 801B93D8 001B6318  4E 80 04 21 */	bctrl 
/* 801B93DC 001B631C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B93E0 001B6320  40 82 01 30 */	bne .L_801B9510
/* 801B93E4 001B6324  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B93E8 001B6328  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B93EC 001B632C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B93F0 001B6330  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B93F4 001B6334  7D 89 03 A6 */	mtctr r12
/* 801B93F8 001B6338  4E 80 04 21 */	bctrl 
/* 801B93FC 001B633C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B9400:
/* 801B9400 001B6340  81 81 00 08 */	lwz r12, 8(r1)
/* 801B9404 001B6344  38 61 00 08 */	addi r3, r1, 8
/* 801B9408 001B6348  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B940C 001B634C  7D 89 03 A6 */	mtctr r12
/* 801B9410 001B6350  4E 80 04 21 */	bctrl 
/* 801B9414 001B6354  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9418 001B6358  41 82 FF 94 */	beq .L_801B93AC
/* 801B941C 001B635C  48 00 00 F4 */	b .L_801B9510
.L_801B9420:
/* 801B9420 001B6360  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9424 001B6364  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9428 001B6368  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B942C 001B636C  7D 89 03 A6 */	mtctr r12
/* 801B9430 001B6370  4E 80 04 21 */	bctrl 
/* 801B9434 001B6374  7C 7F 1B 78 */	mr r31, r3
/* 801B9438 001B6378  7F C4 F3 78 */	mr r4, r30
/* 801B943C 001B637C  80 63 00 08 */	lwz r3, 8(r3)
/* 801B9440 001B6380  4B F1 12 81 */	bl strcmp
/* 801B9444 001B6384  2C 03 00 00 */	cmpwi r3, 0
/* 801B9448 001B6388  40 82 00 0C */	bne .L_801B9454
/* 801B944C 001B638C  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 801B9450 001B6390  48 00 00 E4 */	b .L_801B9534
.L_801B9454:
/* 801B9454 001B6394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B9458 001B6398  28 00 00 00 */	cmplwi r0, 0
/* 801B945C 001B639C  40 82 00 24 */	bne .L_801B9480
/* 801B9460 001B63A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9464 001B63A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9468 001B63A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B946C 001B63AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9470 001B63B0  7D 89 03 A6 */	mtctr r12
/* 801B9474 001B63B4  4E 80 04 21 */	bctrl 
/* 801B9478 001B63B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B947C 001B63BC  48 00 00 94 */	b .L_801B9510
.L_801B9480:
/* 801B9480 001B63C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9484 001B63C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9488 001B63C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B948C 001B63CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9490 001B63D0  7D 89 03 A6 */	mtctr r12
/* 801B9494 001B63D4  4E 80 04 21 */	bctrl 
/* 801B9498 001B63D8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B949C 001B63DC  48 00 00 58 */	b .L_801B94F4
.L_801B94A0:
/* 801B94A0 001B63E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B94A4 001B63E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B94A8 001B63E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B94AC 001B63EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B94B0 001B63F0  7D 89 03 A6 */	mtctr r12
/* 801B94B4 001B63F4  4E 80 04 21 */	bctrl 
/* 801B94B8 001B63F8  7C 64 1B 78 */	mr r4, r3
/* 801B94BC 001B63FC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B94C0 001B6400  81 83 00 00 */	lwz r12, 0(r3)
/* 801B94C4 001B6404  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B94C8 001B6408  7D 89 03 A6 */	mtctr r12
/* 801B94CC 001B640C  4E 80 04 21 */	bctrl 
/* 801B94D0 001B6410  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B94D4 001B6414  40 82 00 3C */	bne .L_801B9510
/* 801B94D8 001B6418  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B94DC 001B641C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B94E0 001B6420  81 83 00 00 */	lwz r12, 0(r3)
/* 801B94E4 001B6424  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B94E8 001B6428  7D 89 03 A6 */	mtctr r12
/* 801B94EC 001B642C  4E 80 04 21 */	bctrl 
/* 801B94F0 001B6430  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B94F4:
/* 801B94F4 001B6434  81 81 00 08 */	lwz r12, 8(r1)
/* 801B94F8 001B6438  38 61 00 08 */	addi r3, r1, 8
/* 801B94FC 001B643C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B9500 001B6440  7D 89 03 A6 */	mtctr r12
/* 801B9504 001B6444  4E 80 04 21 */	bctrl 
/* 801B9508 001B6448  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B950C 001B644C  41 82 FF 94 */	beq .L_801B94A0
.L_801B9510:
/* 801B9510 001B6450  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9514 001B6454  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9518 001B6458  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B951C 001B645C  7D 89 03 A6 */	mtctr r12
/* 801B9520 001B6460  4E 80 04 21 */	bctrl 
/* 801B9524 001B6464  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9528 001B6468  7C 04 18 40 */	cmplw r4, r3
/* 801B952C 001B646C  40 82 FE F4 */	bne .L_801B9420
/* 801B9530 001B6470  38 60 00 00 */	li r3, 0
.L_801B9534:
/* 801B9534 001B6474  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B9538 001B6478  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801B953C 001B647C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801B9540 001B6480  7C 08 03 A6 */	mtlr r0
/* 801B9544 001B6484  38 21 00 20 */	addi r1, r1, 0x20
/* 801B9548 001B6488  4E 80 00 20 */	blr 
.endfn getTexture__Q24Game10RoomMapMgrFPc

.fn allocRooms__Q24Game10RoomMapMgrFi, global
/* 801B954C 001B648C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B9550 001B6490  7C 08 02 A6 */	mflr r0
/* 801B9554 001B6494  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B9558 001B6498  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801B955C 001B649C  7C 7F 1B 78 */	mr r31, r3
/* 801B9560 001B64A0  38 7F 00 AC */	addi r3, r31, 0xac
/* 801B9564 001B64A4  48 00 75 1D */	bl "alloc__30MonoObjectMgr<Q24Game7MapRoom>Fi"
/* 801B9568 001B64A8  38 00 00 00 */	li r0, 0
/* 801B956C 001B64AC  3C 60 80 4B */	lis r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801B9570 001B64B0  38 83 5D 28 */	addi r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801B9574 001B64B4  38 7F 00 AC */	addi r3, r31, 0xac
/* 801B9578 001B64B8  28 00 00 00 */	cmplwi r0, 0
/* 801B957C 001B64BC  90 81 00 08 */	stw r4, 8(r1)
/* 801B9580 001B64C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B9584 001B64C4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801B9588 001B64C8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801B958C 001B64CC  40 82 00 1C */	bne .L_801B95A8
/* 801B9590 001B64D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9594 001B64D4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B9598 001B64D8  7D 89 03 A6 */	mtctr r12
/* 801B959C 001B64DC  4E 80 04 21 */	bctrl 
/* 801B95A0 001B64E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B95A4 001B64E4  48 00 01 68 */	b .L_801B970C
.L_801B95A8:
/* 801B95A8 001B64E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B95AC 001B64EC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B95B0 001B64F0  7D 89 03 A6 */	mtctr r12
/* 801B95B4 001B64F4  4E 80 04 21 */	bctrl 
/* 801B95B8 001B64F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B95BC 001B64FC  48 00 00 58 */	b .L_801B9614
.L_801B95C0:
/* 801B95C0 001B6500  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B95C4 001B6504  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B95C8 001B6508  81 83 00 00 */	lwz r12, 0(r3)
/* 801B95CC 001B650C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B95D0 001B6510  7D 89 03 A6 */	mtctr r12
/* 801B95D4 001B6514  4E 80 04 21 */	bctrl 
/* 801B95D8 001B6518  7C 64 1B 78 */	mr r4, r3
/* 801B95DC 001B651C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B95E0 001B6520  81 83 00 00 */	lwz r12, 0(r3)
/* 801B95E4 001B6524  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B95E8 001B6528  7D 89 03 A6 */	mtctr r12
/* 801B95EC 001B652C  4E 80 04 21 */	bctrl 
/* 801B95F0 001B6530  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B95F4 001B6534  40 82 01 18 */	bne .L_801B970C
/* 801B95F8 001B6538  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B95FC 001B653C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9600 001B6540  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9604 001B6544  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9608 001B6548  7D 89 03 A6 */	mtctr r12
/* 801B960C 001B654C  4E 80 04 21 */	bctrl 
/* 801B9610 001B6550  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B9614:
/* 801B9614 001B6554  81 81 00 08 */	lwz r12, 8(r1)
/* 801B9618 001B6558  38 61 00 08 */	addi r3, r1, 8
/* 801B961C 001B655C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B9620 001B6560  7D 89 03 A6 */	mtctr r12
/* 801B9624 001B6564  4E 80 04 21 */	bctrl 
/* 801B9628 001B6568  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B962C 001B656C  41 82 FF 94 */	beq .L_801B95C0
/* 801B9630 001B6570  48 00 00 DC */	b .L_801B970C
.L_801B9634:
/* 801B9634 001B6574  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9638 001B6578  81 83 00 00 */	lwz r12, 0(r3)
/* 801B963C 001B657C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B9640 001B6580  7D 89 03 A6 */	mtctr r12
/* 801B9644 001B6584  4E 80 04 21 */	bctrl 
/* 801B9648 001B6588  38 00 FF FF */	li r0, -1
/* 801B964C 001B658C  B0 03 01 84 */	sth r0, 0x184(r3)
/* 801B9650 001B6590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B9654 001B6594  28 00 00 00 */	cmplwi r0, 0
/* 801B9658 001B6598  40 82 00 24 */	bne .L_801B967C
/* 801B965C 001B659C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9660 001B65A0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9664 001B65A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9668 001B65A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B966C 001B65AC  7D 89 03 A6 */	mtctr r12
/* 801B9670 001B65B0  4E 80 04 21 */	bctrl 
/* 801B9674 001B65B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B9678 001B65B8  48 00 00 94 */	b .L_801B970C
.L_801B967C:
/* 801B967C 001B65BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9680 001B65C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9684 001B65C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9688 001B65C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B968C 001B65CC  7D 89 03 A6 */	mtctr r12
/* 801B9690 001B65D0  4E 80 04 21 */	bctrl 
/* 801B9694 001B65D4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B9698 001B65D8  48 00 00 58 */	b .L_801B96F0
.L_801B969C:
/* 801B969C 001B65DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B96A0 001B65E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B96A4 001B65E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B96A8 001B65E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B96AC 001B65EC  7D 89 03 A6 */	mtctr r12
/* 801B96B0 001B65F0  4E 80 04 21 */	bctrl 
/* 801B96B4 001B65F4  7C 64 1B 78 */	mr r4, r3
/* 801B96B8 001B65F8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B96BC 001B65FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B96C0 001B6600  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B96C4 001B6604  7D 89 03 A6 */	mtctr r12
/* 801B96C8 001B6608  4E 80 04 21 */	bctrl 
/* 801B96CC 001B660C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B96D0 001B6610  40 82 00 3C */	bne .L_801B970C
/* 801B96D4 001B6614  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B96D8 001B6618  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B96DC 001B661C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B96E0 001B6620  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B96E4 001B6624  7D 89 03 A6 */	mtctr r12
/* 801B96E8 001B6628  4E 80 04 21 */	bctrl 
/* 801B96EC 001B662C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B96F0:
/* 801B96F0 001B6630  81 81 00 08 */	lwz r12, 8(r1)
/* 801B96F4 001B6634  38 61 00 08 */	addi r3, r1, 8
/* 801B96F8 001B6638  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B96FC 001B663C  7D 89 03 A6 */	mtctr r12
/* 801B9700 001B6640  4E 80 04 21 */	bctrl 
/* 801B9704 001B6644  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9708 001B6648  41 82 FF 94 */	beq .L_801B969C
.L_801B970C:
/* 801B970C 001B664C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9710 001B6650  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9714 001B6654  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B9718 001B6658  7D 89 03 A6 */	mtctr r12
/* 801B971C 001B665C  4E 80 04 21 */	bctrl 
/* 801B9720 001B6660  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9724 001B6664  7C 04 18 40 */	cmplw r4, r3
/* 801B9728 001B6668  40 82 FF 0C */	bne .L_801B9634
/* 801B972C 001B666C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B9730 001B6670  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801B9734 001B6674  7C 08 03 A6 */	mtlr r0
/* 801B9738 001B6678  38 21 00 20 */	addi r1, r1, 0x20
/* 801B973C 001B667C  4E 80 00 20 */	blr 
.endfn allocRooms__Q24Game10RoomMapMgrFi

.fn makeRoom__Q24Game10RoomMapMgrFPcffiiPQ24Game8RoomLinkPQ24Game16ObjectLayoutInfo, global
/* 801B9740 001B6680  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B9744 001B6684  7C 08 02 A6 */	mflr r0
/* 801B9748 001B6688  6C A5 80 00 */	xoris r5, r5, 0x8000
/* 801B974C 001B668C  C8 62 B1 10 */	lfd f3, lbl_80519470@sda21(r2)
/* 801B9750 001B6690  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B9754 001B6694  3C 00 43 30 */	lis r0, 0x4330
/* 801B9758 001B6698  C0 82 B1 08 */	lfs f4, lbl_80519468@sda21(r2)
/* 801B975C 001B669C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 801B9760 001B66A0  7C C5 07 34 */	extsh r5, r6
/* 801B9764 001B66A4  7C E6 3B 78 */	mr r6, r7
/* 801B9768 001B66A8  7D 07 43 78 */	mr r7, r8
/* 801B976C 001B66AC  90 01 00 08 */	stw r0, 8(r1)
/* 801B9770 001B66B0  C8 01 00 08 */	lfd f0, 8(r1)
/* 801B9774 001B66B4  EC 00 18 28 */	fsubs f0, f0, f3
/* 801B9778 001B66B8  EC 64 00 32 */	fmuls f3, f4, f0
/* 801B977C 001B66BC  48 00 31 99 */	bl makeOneRoom__Q24Game10RoomMapMgrFfffPcsPQ24Game8RoomLinkPQ24Game16ObjectLayoutInfo
/* 801B9780 001B66C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B9784 001B66C4  7C 08 03 A6 */	mtlr r0
/* 801B9788 001B66C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801B978C 001B66CC  4E 80 00 20 */	blr 
.endfn makeRoom__Q24Game10RoomMapMgrFPcffiiPQ24Game8RoomLinkPQ24Game16ObjectLayoutInfo

.fn placeObjects__Q24Game10RoomMapMgrFv, global
/* 801B9790 001B66D0  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 801B9794 001B66D4  7C 08 02 A6 */	mflr r0
/* 801B9798 001B66D8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801B979C 001B66DC  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 801B97A0 001B66E0  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 801B97A4 001B66E4  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 801B97A8 001B66E8  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 801B97AC 001B66EC  BF 61 00 6C */	stmw r27, 0x6c(r1)
/* 801B97B0 001B66F0  38 00 00 00 */	li r0, 0
/* 801B97B4 001B66F4  7C 7F 1B 78 */	mr r31, r3
/* 801B97B8 001B66F8  3C 60 80 4B */	lis r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801B97BC 001B66FC  90 01 00 28 */	stw r0, 0x28(r1)
/* 801B97C0 001B6700  38 83 5D 28 */	addi r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801B97C4 001B6704  38 7F 00 AC */	addi r3, r31, 0xac
/* 801B97C8 001B6708  28 00 00 00 */	cmplwi r0, 0
/* 801B97CC 001B670C  90 81 00 1C */	stw r4, 0x1c(r1)
/* 801B97D0 001B6710  90 01 00 20 */	stw r0, 0x20(r1)
/* 801B97D4 001B6714  90 61 00 24 */	stw r3, 0x24(r1)
/* 801B97D8 001B6718  40 82 00 1C */	bne .L_801B97F4
/* 801B97DC 001B671C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B97E0 001B6720  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B97E4 001B6724  7D 89 03 A6 */	mtctr r12
/* 801B97E8 001B6728  4E 80 04 21 */	bctrl 
/* 801B97EC 001B672C  90 61 00 20 */	stw r3, 0x20(r1)
/* 801B97F0 001B6730  48 00 01 8C */	b .L_801B997C
.L_801B97F4:
/* 801B97F4 001B6734  81 83 00 00 */	lwz r12, 0(r3)
/* 801B97F8 001B6738  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B97FC 001B673C  7D 89 03 A6 */	mtctr r12
/* 801B9800 001B6740  4E 80 04 21 */	bctrl 
/* 801B9804 001B6744  90 61 00 20 */	stw r3, 0x20(r1)
/* 801B9808 001B6748  48 00 00 58 */	b .L_801B9860
.L_801B980C:
/* 801B980C 001B674C  80 61 00 24 */	lwz r3, 0x24(r1)
/* 801B9810 001B6750  80 81 00 20 */	lwz r4, 0x20(r1)
/* 801B9814 001B6754  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9818 001B6758  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B981C 001B675C  7D 89 03 A6 */	mtctr r12
/* 801B9820 001B6760  4E 80 04 21 */	bctrl 
/* 801B9824 001B6764  7C 64 1B 78 */	mr r4, r3
/* 801B9828 001B6768  80 61 00 28 */	lwz r3, 0x28(r1)
/* 801B982C 001B676C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9830 001B6770  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B9834 001B6774  7D 89 03 A6 */	mtctr r12
/* 801B9838 001B6778  4E 80 04 21 */	bctrl 
/* 801B983C 001B677C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9840 001B6780  40 82 01 3C */	bne .L_801B997C
/* 801B9844 001B6784  80 61 00 24 */	lwz r3, 0x24(r1)
/* 801B9848 001B6788  80 81 00 20 */	lwz r4, 0x20(r1)
/* 801B984C 001B678C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9850 001B6790  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9854 001B6794  7D 89 03 A6 */	mtctr r12
/* 801B9858 001B6798  4E 80 04 21 */	bctrl 
/* 801B985C 001B679C  90 61 00 20 */	stw r3, 0x20(r1)
.L_801B9860:
/* 801B9860 001B67A0  81 81 00 1C */	lwz r12, 0x1c(r1)
/* 801B9864 001B67A4  38 61 00 1C */	addi r3, r1, 0x1c
/* 801B9868 001B67A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B986C 001B67AC  7D 89 03 A6 */	mtctr r12
/* 801B9870 001B67B0  4E 80 04 21 */	bctrl 
/* 801B9874 001B67B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9878 001B67B8  41 82 FF 94 */	beq .L_801B980C
/* 801B987C 001B67BC  48 00 01 00 */	b .L_801B997C
.L_801B9880:
/* 801B9880 001B67C0  80 61 00 24 */	lwz r3, 0x24(r1)
/* 801B9884 001B67C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9888 001B67C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B988C 001B67CC  7D 89 03 A6 */	mtctr r12
/* 801B9890 001B67D0  4E 80 04 21 */	bctrl 
/* 801B9894 001B67D4  7C 7D 1B 78 */	mr r29, r3
/* 801B9898 001B67D8  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 801B989C 001B67DC  48 01 DC 55 */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 801B98A0 001B67E0  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 801B98A4 001B67E4  38 A3 FF FF */	addi r5, r3, -1
/* 801B98A8 001B67E8  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 801B98AC 001B67EC  7F A3 EB 78 */	mr r3, r29
/* 801B98B0 001B67F0  7C 00 28 50 */	subf r0, r0, r5
/* 801B98B4 001B67F4  7C 00 00 34 */	cntlzw r0, r0
/* 801B98B8 001B67F8  54 05 D9 7E */	srwi r5, r0, 5
/* 801B98BC 001B67FC  4B FF D6 55 */	bl placeObjects__Q24Game7MapRoomFPQ34Game4Cave9FloorInfob
/* 801B98C0 001B6800  80 01 00 28 */	lwz r0, 0x28(r1)
/* 801B98C4 001B6804  28 00 00 00 */	cmplwi r0, 0
/* 801B98C8 001B6808  40 82 00 24 */	bne .L_801B98EC
/* 801B98CC 001B680C  80 61 00 24 */	lwz r3, 0x24(r1)
/* 801B98D0 001B6810  80 81 00 20 */	lwz r4, 0x20(r1)
/* 801B98D4 001B6814  81 83 00 00 */	lwz r12, 0(r3)
/* 801B98D8 001B6818  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B98DC 001B681C  7D 89 03 A6 */	mtctr r12
/* 801B98E0 001B6820  4E 80 04 21 */	bctrl 
/* 801B98E4 001B6824  90 61 00 20 */	stw r3, 0x20(r1)
/* 801B98E8 001B6828  48 00 00 94 */	b .L_801B997C
.L_801B98EC:
/* 801B98EC 001B682C  80 61 00 24 */	lwz r3, 0x24(r1)
/* 801B98F0 001B6830  80 81 00 20 */	lwz r4, 0x20(r1)
/* 801B98F4 001B6834  81 83 00 00 */	lwz r12, 0(r3)
/* 801B98F8 001B6838  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B98FC 001B683C  7D 89 03 A6 */	mtctr r12
/* 801B9900 001B6840  4E 80 04 21 */	bctrl 
/* 801B9904 001B6844  90 61 00 20 */	stw r3, 0x20(r1)
/* 801B9908 001B6848  48 00 00 58 */	b .L_801B9960
.L_801B990C:
/* 801B990C 001B684C  80 61 00 24 */	lwz r3, 0x24(r1)
/* 801B9910 001B6850  80 81 00 20 */	lwz r4, 0x20(r1)
/* 801B9914 001B6854  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9918 001B6858  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B991C 001B685C  7D 89 03 A6 */	mtctr r12
/* 801B9920 001B6860  4E 80 04 21 */	bctrl 
/* 801B9924 001B6864  7C 64 1B 78 */	mr r4, r3
/* 801B9928 001B6868  80 61 00 28 */	lwz r3, 0x28(r1)
/* 801B992C 001B686C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9930 001B6870  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B9934 001B6874  7D 89 03 A6 */	mtctr r12
/* 801B9938 001B6878  4E 80 04 21 */	bctrl 
/* 801B993C 001B687C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9940 001B6880  40 82 00 3C */	bne .L_801B997C
/* 801B9944 001B6884  80 61 00 24 */	lwz r3, 0x24(r1)
/* 801B9948 001B6888  80 81 00 20 */	lwz r4, 0x20(r1)
/* 801B994C 001B688C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9950 001B6890  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9954 001B6894  7D 89 03 A6 */	mtctr r12
/* 801B9958 001B6898  4E 80 04 21 */	bctrl 
/* 801B995C 001B689C  90 61 00 20 */	stw r3, 0x20(r1)
.L_801B9960:
/* 801B9960 001B68A0  81 81 00 1C */	lwz r12, 0x1c(r1)
/* 801B9964 001B68A4  38 61 00 1C */	addi r3, r1, 0x1c
/* 801B9968 001B68A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B996C 001B68AC  7D 89 03 A6 */	mtctr r12
/* 801B9970 001B68B0  4E 80 04 21 */	bctrl 
/* 801B9974 001B68B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9978 001B68B8  41 82 FF 94 */	beq .L_801B990C
.L_801B997C:
/* 801B997C 001B68BC  80 61 00 24 */	lwz r3, 0x24(r1)
/* 801B9980 001B68C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9984 001B68C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B9988 001B68C8  7D 89 03 A6 */	mtctr r12
/* 801B998C 001B68CC  4E 80 04 21 */	bctrl 
/* 801B9990 001B68D0  80 81 00 20 */	lwz r4, 0x20(r1)
/* 801B9994 001B68D4  7C 04 18 40 */	cmplw r4, r3
/* 801B9998 001B68D8  40 82 FE E8 */	bne .L_801B9880
/* 801B999C 001B68DC  80 9F 00 08 */	lwz r4, 8(r31)
/* 801B99A0 001B68E0  28 04 00 00 */	cmplwi r4, 0
/* 801B99A4 001B68E4  41 82 01 7C */	beq .L_801B9B20
/* 801B99A8 001B68E8  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 801B99AC 001B68EC  80 03 02 E8 */	lwz r0, 0x2e8(r3)
/* 801B99B0 001B68F0  2C 00 00 00 */	cmpwi r0, 0
/* 801B99B4 001B68F4  41 82 01 6C */	beq .L_801B9B20
/* 801B99B8 001B68F8  A0 04 00 1C */	lhz r0, 0x1c(r4)
/* 801B99BC 001B68FC  3B 80 FF FF */	li r28, -1
/* 801B99C0 001B6900  CB C2 B1 10 */	lfd f30, lbl_80519470@sda21(r2)
/* 801B99C4 001B6904  3B 60 FF FF */	li r27, -1
/* 801B99C8 001B6908  C3 E2 B0 E4 */	lfs f31, lbl_80519444@sda21(r2)
/* 801B99CC 001B690C  6C 1E 80 00 */	xoris r30, r0, 0x8000
/* 801B99D0 001B6910  3F A0 43 30 */	lis r29, 0x4330
/* 801B99D4 001B6914  48 00 00 7C */	b .L_801B9A50
.L_801B99D8:
/* 801B99D8 001B6918  4B F0 FB C9 */	bl rand
/* 801B99DC 001B691C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801B99E0 001B6920  93 A1 00 30 */	stw r29, 0x30(r1)
/* 801B99E4 001B6924  90 01 00 34 */	stw r0, 0x34(r1)
/* 801B99E8 001B6928  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 801B99EC 001B692C  93 C1 00 3C */	stw r30, 0x3c(r1)
/* 801B99F0 001B6930  EC 00 F0 28 */	fsubs f0, f0, f30
/* 801B99F4 001B6934  93 A1 00 38 */	stw r29, 0x38(r1)
/* 801B99F8 001B6938  EC 20 F8 24 */	fdivs f1, f0, f31
/* 801B99FC 001B693C  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 801B9A00 001B6940  EC 00 F0 28 */	fsubs f0, f0, f30
/* 801B9A04 001B6944  EC 00 00 72 */	fmuls f0, f0, f1
/* 801B9A08 001B6948  FC 00 00 1E */	fctiwz f0, f0
/* 801B9A0C 001B694C  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 801B9A10 001B6950  83 61 00 44 */	lwz r27, 0x44(r1)
/* 801B9A14 001B6954  4B F0 FB 8D */	bl rand
/* 801B9A18 001B6958  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801B9A1C 001B695C  93 A1 00 48 */	stw r29, 0x48(r1)
/* 801B9A20 001B6960  90 01 00 4C */	stw r0, 0x4c(r1)
/* 801B9A24 001B6964  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 801B9A28 001B6968  93 C1 00 54 */	stw r30, 0x54(r1)
/* 801B9A2C 001B696C  EC 00 F0 28 */	fsubs f0, f0, f30
/* 801B9A30 001B6970  93 A1 00 50 */	stw r29, 0x50(r1)
/* 801B9A34 001B6974  EC 20 F8 24 */	fdivs f1, f0, f31
/* 801B9A38 001B6978  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 801B9A3C 001B697C  EC 00 F0 28 */	fsubs f0, f0, f30
/* 801B9A40 001B6980  EC 00 00 72 */	fmuls f0, f0, f1
/* 801B9A44 001B6984  FC 00 00 1E */	fctiwz f0, f0
/* 801B9A48 001B6988  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 801B9A4C 001B698C  83 81 00 5C */	lwz r28, 0x5c(r1)
.L_801B9A50:
/* 801B9A50 001B6990  7C 1B E0 00 */	cmpw r27, r28
/* 801B9A54 001B6994  41 82 FF 84 */	beq .L_801B99D8
/* 801B9A58 001B6998  80 7F 00 08 */	lwz r3, 8(r31)
/* 801B9A5C 001B699C  7F 64 07 34 */	extsh r4, r27
/* 801B9A60 001B69A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9A64 001B69A4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801B9A68 001B69A8  7D 89 03 A6 */	mtctr r12
/* 801B9A6C 001B69AC  4E 80 04 21 */	bctrl 
/* 801B9A70 001B69B0  90 61 00 08 */	stw r3, 8(r1)
/* 801B9A74 001B69B4  7F 84 07 34 */	extsh r4, r28
/* 801B9A78 001B69B8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801B9A7C 001B69BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9A80 001B69C0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801B9A84 001B69C4  7D 89 03 A6 */	mtctr r12
/* 801B9A88 001B69C8  4E 80 04 21 */	bctrl 
/* 801B9A8C 001B69CC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B9A90 001B69D0  3B 61 00 08 */	addi r27, r1, 8
/* 801B9A94 001B69D4  3B 80 00 00 */	li r28, 0
.L_801B9A98:
/* 801B9A98 001B69D8  80 6D 94 E0 */	lwz r3, mgr__Q24Game13ItemDownFloor@sda21(r13)
/* 801B9A9C 001B69DC  48 03 CB E9 */	bl birth__Q34Game13ItemDownFloor3MgrFv
/* 801B9AA0 001B69E0  7C 7D 1B 79 */	or. r29, r3, r3
/* 801B9AA4 001B69E4  41 82 00 6C */	beq .L_801B9B10
/* 801B9AA8 001B69E8  80 DB 00 00 */	lwz r6, 0(r27)
/* 801B9AAC 001B69EC  3C 80 30 30 */	lis r4, 0x30303030@ha
/* 801B9AB0 001B69F0  38 A0 00 14 */	li r5, 0x14
/* 801B9AB4 001B69F4  38 00 00 01 */	li r0, 1
/* 801B9AB8 001B69F8  C0 26 00 50 */	lfs f1, 0x50(r6)
/* 801B9ABC 001B69FC  38 7D 02 1C */	addi r3, r29, 0x21c
/* 801B9AC0 001B6A00  C0 46 00 54 */	lfs f2, 0x54(r6)
/* 801B9AC4 001B6A04  38 84 30 30 */	addi r4, r4, 0x30303030@l
/* 801B9AC8 001B6A08  C0 06 00 4C */	lfs f0, 0x4c(r6)
/* 801B9ACC 001B6A0C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801B9AD0 001B6A10  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 801B9AD4 001B6A14  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801B9AD8 001B6A18  90 BD 01 E8 */	stw r5, 0x1e8(r29)
/* 801B9ADC 001B6A1C  B0 1D 02 04 */	sth r0, 0x204(r29)
/* 801B9AE0 001B6A20  98 1D 02 28 */	stb r0, 0x228(r29)
/* 801B9AE4 001B6A24  98 1D 02 29 */	stb r0, 0x229(r29)
/* 801B9AE8 001B6A28  48 25 97 F1 */	bl setID__4ID32FUl
/* 801B9AEC 001B6A2C  7F A3 EB 78 */	mr r3, r29
/* 801B9AF0 001B6A30  38 80 00 00 */	li r4, 0
/* 801B9AF4 001B6A34  4B F8 14 D5 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801B9AF8 001B6A38  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B9AFC 001B6A3C  7F A3 EB 78 */	mr r3, r29
/* 801B9B00 001B6A40  38 81 00 10 */	addi r4, r1, 0x10
/* 801B9B04 001B6A44  38 A0 00 00 */	li r5, 0
/* 801B9B08 001B6A48  D0 1D 02 00 */	stfs f0, 0x200(r29)
/* 801B9B0C 001B6A4C  4B F8 16 9D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
.L_801B9B10:
/* 801B9B10 001B6A50  3B 9C 00 01 */	addi r28, r28, 1
/* 801B9B14 001B6A54  3B 7B 00 04 */	addi r27, r27, 4
/* 801B9B18 001B6A58  2C 1C 00 02 */	cmpwi r28, 2
/* 801B9B1C 001B6A5C  41 80 FF 7C */	blt .L_801B9A98
.L_801B9B20:
/* 801B9B20 001B6A60  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 801B9B24 001B6A64  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 801B9B28 001B6A68  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 801B9B2C 001B6A6C  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 801B9B30 001B6A70  BB 61 00 6C */	lmw r27, 0x6c(r1)
/* 801B9B34 001B6A74  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 801B9B38 001B6A78  7C 08 03 A6 */	mtlr r0
/* 801B9B3C 001B6A7C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 801B9B40 001B6A80  4E 80 00 20 */	blr 
.endfn placeObjects__Q24Game10RoomMapMgrFv

.fn getBoundBox2d__Q24Game10RoomMapMgrFR10BoundBox2d, global
/* 801B9B44 001B6A84  C0 23 00 E4 */	lfs f1, 0xe4(r3)
/* 801B9B48 001B6A88  C0 03 00 DC */	lfs f0, 0xdc(r3)
/* 801B9B4C 001B6A8C  D0 04 00 00 */	stfs f0, 0(r4)
/* 801B9B50 001B6A90  D0 24 00 04 */	stfs f1, 4(r4)
/* 801B9B54 001B6A94  C0 23 00 F0 */	lfs f1, 0xf0(r3)
/* 801B9B58 001B6A98  C0 03 00 E8 */	lfs f0, 0xe8(r3)
/* 801B9B5C 001B6A9C  D0 04 00 08 */	stfs f0, 8(r4)
/* 801B9B60 001B6AA0  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 801B9B64 001B6AA4  4E 80 00 20 */	blr 
.endfn getBoundBox2d__Q24Game10RoomMapMgrFR10BoundBox2d

.fn getBoundBox__Q24Game10RoomMapMgrFR8BoundBox, global
/* 801B9B68 001B6AA8  C0 03 00 DC */	lfs f0, 0xdc(r3)
/* 801B9B6C 001B6AAC  D0 04 00 00 */	stfs f0, 0(r4)
/* 801B9B70 001B6AB0  C0 03 00 E0 */	lfs f0, 0xe0(r3)
/* 801B9B74 001B6AB4  D0 04 00 04 */	stfs f0, 4(r4)
/* 801B9B78 001B6AB8  C0 03 00 E4 */	lfs f0, 0xe4(r3)
/* 801B9B7C 001B6ABC  D0 04 00 08 */	stfs f0, 8(r4)
/* 801B9B80 001B6AC0  C0 03 00 E8 */	lfs f0, 0xe8(r3)
/* 801B9B84 001B6AC4  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 801B9B88 001B6AC8  C0 03 00 EC */	lfs f0, 0xec(r3)
/* 801B9B8C 001B6ACC  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 801B9B90 001B6AD0  C0 03 00 F0 */	lfs f0, 0xf0(r3)
/* 801B9B94 001B6AD4  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 801B9B98 001B6AD8  4E 80 00 20 */	blr 
.endfn getBoundBox__Q24Game10RoomMapMgrFR8BoundBox

.fn drawCollision__Q24Game10RoomMapMgrFR8GraphicsRQ23Sys6Sphere, global
/* 801B9B9C 001B6ADC  4E 80 00 20 */	blr 
.endfn drawCollision__Q24Game10RoomMapMgrFR8GraphicsRQ23Sys6Sphere

.fn traceMove__Q24Game10RoomMapMgrFRQ24Game8MoveInfof, global
/* 801B9BA0 001B6AE0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801B9BA4 001B6AE4  7C 08 02 A6 */	mflr r0
/* 801B9BA8 001B6AE8  90 01 00 54 */	stw r0, 0x54(r1)
/* 801B9BAC 001B6AEC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801B9BB0 001B6AF0  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801B9BB4 001B6AF4  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 801B9BB8 001B6AF8  7C 9C 23 78 */	mr r28, r4
/* 801B9BBC 001B6AFC  80 84 00 04 */	lwz r4, 4(r4)
/* 801B9BC0 001B6B00  FF E0 08 90 */	fmr f31, f1
/* 801B9BC4 001B6B04  7C 7B 1B 78 */	mr r27, r3
/* 801B9BC8 001B6B08  C0 64 00 00 */	lfs f3, 0(r4)
/* 801B9BCC 001B6B0C  3B E0 00 01 */	li r31, 1
/* 801B9BD0 001B6B10  C0 44 00 04 */	lfs f2, 4(r4)
/* 801B9BD4 001B6B14  EC 03 00 F2 */	fmuls f0, f3, f3
/* 801B9BD8 001B6B18  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801B9BDC 001B6B1C  C0 84 00 08 */	lfs f4, 8(r4)
/* 801B9BE0 001B6B20  80 7C 00 00 */	lwz r3, 0(r28)
/* 801B9BE4 001B6B24  EC 84 01 32 */	fmuls f4, f4, f4
/* 801B9BE8 001B6B28  C0 22 B0 E0 */	lfs f1, lbl_80519440@sda21(r2)
/* 801B9BEC 001B6B2C  EC 00 10 2A */	fadds f0, f0, f2
/* 801B9BF0 001B6B30  C0 A3 00 0C */	lfs f5, 0xc(r3)
/* 801B9BF4 001B6B34  EC 04 00 2A */	fadds f0, f4, f0
/* 801B9BF8 001B6B38  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801B9BFC 001B6B3C  40 81 00 20 */	ble .L_801B9C1C
/* 801B9C00 001B6B40  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 801B9C04 001B6B44  EC 44 00 2A */	fadds f2, f4, f0
/* 801B9C08 001B6B48  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801B9C0C 001B6B4C  40 81 00 14 */	ble .L_801B9C20
/* 801B9C10 001B6B50  FC 00 10 34 */	frsqrte f0, f2
/* 801B9C14 001B6B54  EC 40 00 B2 */	fmuls f2, f0, f2
/* 801B9C18 001B6B58  48 00 00 08 */	b .L_801B9C20
.L_801B9C1C:
/* 801B9C1C 001B6B5C  FC 40 08 90 */	fmr f2, f1
.L_801B9C20:
/* 801B9C20 001B6B60  C0 02 B0 FC */	lfs f0, lbl_8051945C@sda21(r2)
.L_801B9C24:
/* 801B9C24 001B6B64  EC 3F 00 B2 */	fmuls f1, f31, f2
/* 801B9C28 001B6B68  FC 01 28 40 */	fcmpo cr0, f1, f5
/* 801B9C2C 001B6B6C  40 81 00 14 */	ble .L_801B9C40
/* 801B9C30 001B6B70  57 FF 08 3C */	slwi r31, r31, 1
/* 801B9C34 001B6B74  EF FF 00 32 */	fmuls f31, f31, f0
/* 801B9C38 001B6B78  2C 1F 00 04 */	cmpwi r31, 4
/* 801B9C3C 001B6B7C  40 81 FF E8 */	ble .L_801B9C24
.L_801B9C40:
/* 801B9C40 001B6B80  3B A0 00 00 */	li r29, 0
/* 801B9C44 001B6B84  48 00 00 28 */	b .L_801B9C6C
.L_801B9C48:
/* 801B9C48 001B6B88  7F 63 DB 78 */	mr r3, r27
/* 801B9C4C 001B6B8C  FC 20 F8 90 */	fmr f1, f31
/* 801B9C50 001B6B90  81 9B 00 04 */	lwz r12, 4(r27)
/* 801B9C54 001B6B94  7F 84 E3 78 */	mr r4, r28
/* 801B9C58 001B6B98  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 801B9C5C 001B6B9C  7D 89 03 A6 */	mtctr r12
/* 801B9C60 001B6BA0  4E 80 04 21 */	bctrl 
/* 801B9C64 001B6BA4  7C 7E 1B 78 */	mr r30, r3
/* 801B9C68 001B6BA8  3B BD 00 01 */	addi r29, r29, 1
.L_801B9C6C:
/* 801B9C6C 001B6BAC  7C 1D F8 00 */	cmpw r29, r31
/* 801B9C70 001B6BB0  41 80 FF D8 */	blt .L_801B9C48
/* 801B9C74 001B6BB4  80 7B 00 2C */	lwz r3, 0x2c(r27)
/* 801B9C78 001B6BB8  48 01 D0 59 */	bl hasHiddenCollision__Q34Game4Cave9FloorInfoFv
/* 801B9C7C 001B6BBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9C80 001B6BC0  41 82 00 F0 */	beq .L_801B9D70
/* 801B9C84 001B6BC4  80 1C 00 44 */	lwz r0, 0x44(r28)
/* 801B9C88 001B6BC8  28 00 00 00 */	cmplwi r0, 0
/* 801B9C8C 001B6BCC  40 82 00 E4 */	bne .L_801B9D70
/* 801B9C90 001B6BD0  80 7C 00 00 */	lwz r3, 0(r28)
/* 801B9C94 001B6BD4  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801B9C98 001B6BD8  C0 23 00 04 */	lfs f1, 4(r3)
/* 801B9C9C 001B6BDC  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 801B9CA0 001B6BE0  EC 21 10 28 */	fsubs f1, f1, f2
/* 801B9CA4 001B6BE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801B9CA8 001B6BE8  40 80 00 C8 */	bge .L_801B9D70
/* 801B9CAC 001B6BEC  D0 43 00 04 */	stfs f2, 4(r3)
/* 801B9CB0 001B6BF0  80 7C 00 04 */	lwz r3, 4(r28)
/* 801B9CB4 001B6BF4  C0 43 00 04 */	lfs f2, 4(r3)
/* 801B9CB8 001B6BF8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801B9CBC 001B6BFC  40 80 00 1C */	bge .L_801B9CD8
/* 801B9CC0 001B6C00  C0 3C 00 08 */	lfs f1, 8(r28)
/* 801B9CC4 001B6C04  FC 40 10 50 */	fneg f2, f2
/* 801B9CC8 001B6C08  C0 02 B0 F8 */	lfs f0, lbl_80519458@sda21(r2)
/* 801B9CCC 001B6C0C  EC 01 00 28 */	fsubs f0, f1, f0
/* 801B9CD0 001B6C10  EC 02 00 32 */	fmuls f0, f2, f0
/* 801B9CD4 001B6C14  D0 03 00 04 */	stfs f0, 4(r3)
.L_801B9CD8:
/* 801B9CD8 001B6C18  80 7C 00 00 */	lwz r3, 0(r28)
/* 801B9CDC 001B6C1C  38 1B 00 40 */	addi r0, r27, 0x40
/* 801B9CE0 001B6C20  C0 42 B0 E0 */	lfs f2, lbl_80519440@sda21(r2)
/* 801B9CE4 001B6C24  C0 03 00 00 */	lfs f0, 0(r3)
/* 801B9CE8 001B6C28  C0 22 B0 F8 */	lfs f1, lbl_80519458@sda21(r2)
/* 801B9CEC 001B6C2C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801B9CF0 001B6C30  C0 63 00 04 */	lfs f3, 4(r3)
/* 801B9CF4 001B6C34  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 801B9CF8 001B6C38  C0 03 00 08 */	lfs f0, 8(r3)
/* 801B9CFC 001B6C3C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801B9D00 001B6C40  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 801B9D04 001B6C44  EC 03 00 28 */	fsubs f0, f3, f0
/* 801B9D08 001B6C48  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801B9D0C 001B6C4C  90 1C 00 44 */	stw r0, 0x44(r28)
/* 801B9D10 001B6C50  D0 5C 00 50 */	stfs f2, 0x50(r28)
/* 801B9D14 001B6C54  D0 3C 00 54 */	stfs f1, 0x54(r28)
/* 801B9D18 001B6C58  D0 5C 00 58 */	stfs f2, 0x58(r28)
/* 801B9D1C 001B6C5C  D0 5C 00 78 */	stfs f2, 0x78(r28)
/* 801B9D20 001B6C60  D0 3C 00 7C */	stfs f1, 0x7c(r28)
/* 801B9D24 001B6C64  D0 5C 00 80 */	stfs f2, 0x80(r28)
/* 801B9D28 001B6C68  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801B9D2C 001B6C6C  D0 1C 00 84 */	stfs f0, 0x84(r28)
/* 801B9D30 001B6C70  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801B9D34 001B6C74  D0 1C 00 88 */	stfs f0, 0x88(r28)
/* 801B9D38 001B6C78  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801B9D3C 001B6C7C  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 801B9D40 001B6C80  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 801B9D44 001B6C84  28 03 00 00 */	cmplwi r3, 0
/* 801B9D48 001B6C88  41 82 00 28 */	beq .L_801B9D70
/* 801B9D4C 001B6C8C  D0 41 00 08 */	stfs f2, 8(r1)
/* 801B9D50 001B6C90  38 81 00 14 */	addi r4, r1, 0x14
/* 801B9D54 001B6C94  38 A1 00 08 */	addi r5, r1, 8
/* 801B9D58 001B6C98  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801B9D5C 001B6C9C  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 801B9D60 001B6CA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9D64 001B6CA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B9D68 001B6CA8  7D 89 03 A6 */	mtctr r12
/* 801B9D6C 001B6CAC  4E 80 04 21 */	bctrl 
.L_801B9D70:
/* 801B9D70 001B6CB0  7F C3 F3 78 */	mr r3, r30
/* 801B9D74 001B6CB4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801B9D78 001B6CB8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801B9D7C 001B6CBC  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 801B9D80 001B6CC0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801B9D84 001B6CC4  7C 08 03 A6 */	mtlr r0
/* 801B9D88 001B6CC8  38 21 00 50 */	addi r1, r1, 0x50
/* 801B9D8C 001B6CCC  4E 80 00 20 */	blr 
.endfn traceMove__Q24Game10RoomMapMgrFRQ24Game8MoveInfof

.fn hasHiddenCollision__Q24Game10RoomMapMgrFv, global
/* 801B9D90 001B6CD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B9D94 001B6CD4  7C 08 02 A6 */	mflr r0
/* 801B9D98 001B6CD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B9D9C 001B6CDC  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 801B9DA0 001B6CE0  48 01 CF 31 */	bl hasHiddenCollision__Q34Game4Cave9FloorInfoFv
/* 801B9DA4 001B6CE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B9DA8 001B6CE8  7C 08 03 A6 */	mtlr r0
/* 801B9DAC 001B6CEC  38 21 00 10 */	addi r1, r1, 0x10
/* 801B9DB0 001B6CF0  4E 80 00 20 */	blr 
.endfn hasHiddenCollision__Q24Game10RoomMapMgrFv

.fn constraintBoundBox__Q24Game10RoomMapMgrFRQ23Sys6Sphere, global
/* 801B9DB4 001B6CF4  C0 64 00 00 */	lfs f3, 0(r4)
/* 801B9DB8 001B6CF8  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 801B9DBC 001B6CFC  C0 43 00 DC */	lfs f2, 0xdc(r3)
/* 801B9DC0 001B6D00  EC 03 08 28 */	fsubs f0, f3, f1
/* 801B9DC4 001B6D04  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801B9DC8 001B6D08  4C 40 13 82 */	cror 2, 0, 2
/* 801B9DCC 001B6D0C  40 82 00 10 */	bne .L_801B9DDC
/* 801B9DD0 001B6D10  EC 02 08 2A */	fadds f0, f2, f1
/* 801B9DD4 001B6D14  D0 04 00 00 */	stfs f0, 0(r4)
/* 801B9DD8 001B6D18  48 00 00 20 */	b .L_801B9DF8
.L_801B9DDC:
/* 801B9DDC 001B6D1C  EC 03 08 2A */	fadds f0, f3, f1
/* 801B9DE0 001B6D20  C0 43 00 E8 */	lfs f2, 0xe8(r3)
/* 801B9DE4 001B6D24  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801B9DE8 001B6D28  4C 41 13 82 */	cror 2, 1, 2
/* 801B9DEC 001B6D2C  40 82 00 0C */	bne .L_801B9DF8
/* 801B9DF0 001B6D30  EC 02 08 28 */	fsubs f0, f2, f1
/* 801B9DF4 001B6D34  D0 04 00 00 */	stfs f0, 0(r4)
.L_801B9DF8:
/* 801B9DF8 001B6D38  C0 64 00 08 */	lfs f3, 8(r4)
/* 801B9DFC 001B6D3C  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 801B9E00 001B6D40  C0 43 00 E4 */	lfs f2, 0xe4(r3)
/* 801B9E04 001B6D44  EC 03 08 28 */	fsubs f0, f3, f1
/* 801B9E08 001B6D48  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801B9E0C 001B6D4C  4C 40 13 82 */	cror 2, 0, 2
/* 801B9E10 001B6D50  40 82 00 10 */	bne .L_801B9E20
/* 801B9E14 001B6D54  EC 02 08 2A */	fadds f0, f2, f1
/* 801B9E18 001B6D58  D0 04 00 08 */	stfs f0, 8(r4)
/* 801B9E1C 001B6D5C  4E 80 00 20 */	blr 
.L_801B9E20:
/* 801B9E20 001B6D60  EC 03 08 2A */	fadds f0, f3, f1
/* 801B9E24 001B6D64  C0 43 00 F0 */	lfs f2, 0xf0(r3)
/* 801B9E28 001B6D68  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801B9E2C 001B6D6C  4C 41 13 82 */	cror 2, 1, 2
/* 801B9E30 001B6D70  4C 82 00 20 */	bnelr 
/* 801B9E34 001B6D74  EC 02 08 28 */	fsubs f0, f2, f1
/* 801B9E38 001B6D78  D0 04 00 08 */	stfs f0, 8(r4)
/* 801B9E3C 001B6D7C  4E 80 00 20 */	blr 
.endfn constraintBoundBox__Q24Game10RoomMapMgrFRQ23Sys6Sphere

.fn entryToMapRoomCellMgr__Q24Game10RoomMapMgrFv, global
/* 801B9E40 001B6D80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B9E44 001B6D84  7C 08 02 A6 */	mflr r0
/* 801B9E48 001B6D88  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801B9E4C 001B6D8C  38 63 00 AC */	addi r3, r3, 0xac
/* 801B9E50 001B6D90  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B9E54 001B6D94  38 00 00 00 */	li r0, 0
/* 801B9E58 001B6D98  38 84 5D 28 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801B9E5C 001B6D9C  28 00 00 00 */	cmplwi r0, 0
/* 801B9E60 001B6DA0  90 81 00 08 */	stw r4, 8(r1)
/* 801B9E64 001B6DA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B9E68 001B6DA8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801B9E6C 001B6DAC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801B9E70 001B6DB0  40 82 00 1C */	bne .L_801B9E8C
/* 801B9E74 001B6DB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9E78 001B6DB8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B9E7C 001B6DBC  7D 89 03 A6 */	mtctr r12
/* 801B9E80 001B6DC0  4E 80 04 21 */	bctrl 
/* 801B9E84 001B6DC4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B9E88 001B6DC8  48 00 01 7C */	b .L_801BA004
.L_801B9E8C:
/* 801B9E8C 001B6DCC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9E90 001B6DD0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B9E94 001B6DD4  7D 89 03 A6 */	mtctr r12
/* 801B9E98 001B6DD8  4E 80 04 21 */	bctrl 
/* 801B9E9C 001B6DDC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B9EA0 001B6DE0  48 00 00 58 */	b .L_801B9EF8
.L_801B9EA4:
/* 801B9EA4 001B6DE4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9EA8 001B6DE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9EAC 001B6DEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9EB0 001B6DF0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B9EB4 001B6DF4  7D 89 03 A6 */	mtctr r12
/* 801B9EB8 001B6DF8  4E 80 04 21 */	bctrl 
/* 801B9EBC 001B6DFC  7C 64 1B 78 */	mr r4, r3
/* 801B9EC0 001B6E00  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B9EC4 001B6E04  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9EC8 001B6E08  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B9ECC 001B6E0C  7D 89 03 A6 */	mtctr r12
/* 801B9ED0 001B6E10  4E 80 04 21 */	bctrl 
/* 801B9ED4 001B6E14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9ED8 001B6E18  40 82 01 2C */	bne .L_801BA004
/* 801B9EDC 001B6E1C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9EE0 001B6E20  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9EE4 001B6E24  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9EE8 001B6E28  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9EEC 001B6E2C  7D 89 03 A6 */	mtctr r12
/* 801B9EF0 001B6E30  4E 80 04 21 */	bctrl 
/* 801B9EF4 001B6E34  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B9EF8:
/* 801B9EF8 001B6E38  81 81 00 08 */	lwz r12, 8(r1)
/* 801B9EFC 001B6E3C  38 61 00 08 */	addi r3, r1, 8
/* 801B9F00 001B6E40  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B9F04 001B6E44  7D 89 03 A6 */	mtctr r12
/* 801B9F08 001B6E48  4E 80 04 21 */	bctrl 
/* 801B9F0C 001B6E4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9F10 001B6E50  41 82 FF 94 */	beq .L_801B9EA4
/* 801B9F14 001B6E54  48 00 00 F0 */	b .L_801BA004
.L_801B9F18:
/* 801B9F18 001B6E58  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9F1C 001B6E5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9F20 001B6E60  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B9F24 001B6E64  7D 89 03 A6 */	mtctr r12
/* 801B9F28 001B6E68  4E 80 04 21 */	bctrl 
/* 801B9F2C 001B6E6C  80 0D 92 D0 */	lwz r0, mapRoomCellMgr__4Game@sda21(r13)
/* 801B9F30 001B6E70  7C 64 1B 78 */	mr r4, r3
/* 801B9F34 001B6E74  28 00 00 00 */	cmplwi r0, 0
/* 801B9F38 001B6E78  41 82 00 10 */	beq .L_801B9F48
/* 801B9F3C 001B6E7C  7C 03 03 78 */	mr r3, r0
/* 801B9F40 001B6E80  38 A4 01 90 */	addi r5, r4, 0x190
/* 801B9F44 001B6E84  4B F9 E5 DD */	bl entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6Sphere
.L_801B9F48:
/* 801B9F48 001B6E88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B9F4C 001B6E8C  28 00 00 00 */	cmplwi r0, 0
/* 801B9F50 001B6E90  40 82 00 24 */	bne .L_801B9F74
/* 801B9F54 001B6E94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9F58 001B6E98  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9F5C 001B6E9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9F60 001B6EA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9F64 001B6EA4  7D 89 03 A6 */	mtctr r12
/* 801B9F68 001B6EA8  4E 80 04 21 */	bctrl 
/* 801B9F6C 001B6EAC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B9F70 001B6EB0  48 00 00 94 */	b .L_801BA004
.L_801B9F74:
/* 801B9F74 001B6EB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9F78 001B6EB8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9F7C 001B6EBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9F80 001B6EC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9F84 001B6EC4  7D 89 03 A6 */	mtctr r12
/* 801B9F88 001B6EC8  4E 80 04 21 */	bctrl 
/* 801B9F8C 001B6ECC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B9F90 001B6ED0  48 00 00 58 */	b .L_801B9FE8
.L_801B9F94:
/* 801B9F94 001B6ED4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9F98 001B6ED8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9F9C 001B6EDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9FA0 001B6EE0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B9FA4 001B6EE4  7D 89 03 A6 */	mtctr r12
/* 801B9FA8 001B6EE8  4E 80 04 21 */	bctrl 
/* 801B9FAC 001B6EEC  7C 64 1B 78 */	mr r4, r3
/* 801B9FB0 001B6EF0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B9FB4 001B6EF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9FB8 001B6EF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B9FBC 001B6EFC  7D 89 03 A6 */	mtctr r12
/* 801B9FC0 001B6F00  4E 80 04 21 */	bctrl 
/* 801B9FC4 001B6F04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B9FC8 001B6F08  40 82 00 3C */	bne .L_801BA004
/* 801B9FCC 001B6F0C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B9FD0 001B6F10  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B9FD4 001B6F14  81 83 00 00 */	lwz r12, 0(r3)
/* 801B9FD8 001B6F18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B9FDC 001B6F1C  7D 89 03 A6 */	mtctr r12
/* 801B9FE0 001B6F20  4E 80 04 21 */	bctrl 
/* 801B9FE4 001B6F24  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B9FE8:
/* 801B9FE8 001B6F28  81 81 00 08 */	lwz r12, 8(r1)
/* 801B9FEC 001B6F2C  38 61 00 08 */	addi r3, r1, 8
/* 801B9FF0 001B6F30  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B9FF4 001B6F34  7D 89 03 A6 */	mtctr r12
/* 801B9FF8 001B6F38  4E 80 04 21 */	bctrl 
/* 801B9FFC 001B6F3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA000 001B6F40  41 82 FF 94 */	beq .L_801B9F94
.L_801BA004:
/* 801BA004 001B6F44  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BA008 001B6F48  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA00C 001B6F4C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BA010 001B6F50  7D 89 03 A6 */	mtctr r12
/* 801BA014 001B6F54  4E 80 04 21 */	bctrl 
/* 801BA018 001B6F58  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BA01C 001B6F5C  7C 04 18 40 */	cmplw r4, r3
/* 801BA020 001B6F60  40 82 FE F8 */	bne .L_801B9F18
/* 801BA024 001B6F64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BA028 001B6F68  7C 08 03 A6 */	mtlr r0
/* 801BA02C 001B6F6C  38 21 00 20 */	addi r1, r1, 0x20
/* 801BA030 001B6F70  4E 80 00 20 */	blr 
.endfn entryToMapRoomCellMgr__Q24Game10RoomMapMgrFv

.fn findRoomIndex__Q24Game10RoomMapMgrFRQ23Sys6Sphere, global
/* 801BA034 001B6F74  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 801BA038 001B6F78  7C 08 02 A6 */	mflr r0
/* 801BA03C 001B6F7C  90 01 00 94 */	stw r0, 0x94(r1)
/* 801BA040 001B6F80  38 61 00 20 */	addi r3, r1, 0x20
/* 801BA044 001B6F84  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 801BA048 001B6F88  93 C1 00 88 */	stw r30, 0x88(r1)
/* 801BA04C 001B6F8C  7C 9E 23 78 */	mr r30, r4
/* 801BA050 001B6F90  48 07 43 51 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 801BA054 001B6F94  80 AD 92 D0 */	lwz r5, mapRoomCellMgr__4Game@sda21(r13)
/* 801BA058 001B6F98  38 00 00 01 */	li r0, 1
/* 801BA05C 001B6F9C  98 01 00 3C */	stb r0, 0x3c(r1)
/* 801BA060 001B6FA0  38 61 00 40 */	addi r3, r1, 0x40
/* 801BA064 001B6FA4  38 81 00 20 */	addi r4, r1, 0x20
/* 801BA068 001B6FA8  90 A1 00 38 */	stw r5, 0x38(r1)
/* 801BA06C 001B6FAC  48 07 43 75 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 801BA070 001B6FB0  38 61 00 40 */	addi r3, r1, 0x40
/* 801BA074 001B6FB4  48 07 43 E9 */	bl first__Q24Game12CellIteratorFv
/* 801BA078 001B6FB8  48 00 00 B8 */	b .L_801BA130
.L_801BA07C:
/* 801BA07C 001B6FBC  38 61 00 40 */	addi r3, r1, 0x40
/* 801BA080 001B6FC0  48 07 44 C5 */	bl __ml__Q24Game12CellIteratorFv
/* 801BA084 001B6FC4  C0 1E 00 00 */	lfs f0, 0(r30)
/* 801BA088 001B6FC8  7C 7F 1B 78 */	mr r31, r3
/* 801BA08C 001B6FCC  38 7F 01 08 */	addi r3, r31, 0x108
/* 801BA090 001B6FD0  38 81 00 14 */	addi r4, r1, 0x14
/* 801BA094 001B6FD4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801BA098 001B6FD8  38 A1 00 08 */	addi r5, r1, 8
/* 801BA09C 001B6FDC  C0 1E 00 04 */	lfs f0, 4(r30)
/* 801BA0A0 001B6FE0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801BA0A4 001B6FE4  C0 1E 00 08 */	lfs f0, 8(r30)
/* 801BA0A8 001B6FE8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801BA0AC 001B6FEC  4B F3 0B 2D */	bl PSMTXMultVec
/* 801BA0B0 001B6FF0  C0 41 00 08 */	lfs f2, 8(r1)
/* 801BA0B4 001B6FF4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801BA0B8 001B6FF8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801BA0BC 001B6FFC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 801BA0C0 001B7000  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 801BA0C4 001B7004  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801BA0C8 001B7008  80 7F 01 38 */	lwz r3, 0x138(r31)
/* 801BA0CC 001B700C  C0 DE 00 0C */	lfs f6, 0xc(r30)
/* 801BA0D0 001B7010  C0 23 00 7C */	lfs f1, 0x7c(r3)
/* 801BA0D4 001B7014  C0 63 00 84 */	lfs f3, 0x84(r3)
/* 801BA0D8 001B7018  EC 21 30 28 */	fsubs f1, f1, f6
/* 801BA0DC 001B701C  C0 83 00 88 */	lfs f4, 0x88(r3)
/* 801BA0E0 001B7020  C0 A3 00 90 */	lfs f5, 0x90(r3)
/* 801BA0E4 001B7024  EC 63 30 28 */	fsubs f3, f3, f6
/* 801BA0E8 001B7028  EC 84 30 2A */	fadds f4, f4, f6
/* 801BA0EC 001B702C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 801BA0F0 001B7030  EC A5 30 2A */	fadds f5, f5, f6
/* 801BA0F4 001B7034  4C 40 13 82 */	cror 2, 0, 2
/* 801BA0F8 001B7038  40 82 00 30 */	bne .L_801BA128
/* 801BA0FC 001B703C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801BA100 001B7040  4C 40 13 82 */	cror 2, 0, 2
/* 801BA104 001B7044  40 82 00 24 */	bne .L_801BA128
/* 801BA108 001B7048  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 801BA10C 001B704C  4C 40 13 82 */	cror 2, 0, 2
/* 801BA110 001B7050  40 82 00 18 */	bne .L_801BA128
/* 801BA114 001B7054  FC 00 28 40 */	fcmpo cr0, f0, f5
/* 801BA118 001B7058  4C 40 13 82 */	cror 2, 0, 2
/* 801BA11C 001B705C  40 82 00 0C */	bne .L_801BA128
/* 801BA120 001B7060  A8 7F 01 84 */	lha r3, 0x184(r31)
/* 801BA124 001B7064  48 00 00 20 */	b .L_801BA144
.L_801BA128:
/* 801BA128 001B7068  38 61 00 40 */	addi r3, r1, 0x40
/* 801BA12C 001B706C  48 07 43 D5 */	bl next__Q24Game12CellIteratorFv
.L_801BA130:
/* 801BA130 001B7070  38 61 00 40 */	addi r3, r1, 0x40
/* 801BA134 001B7074  48 07 44 01 */	bl isDone__Q24Game12CellIteratorFv
/* 801BA138 001B7078  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA13C 001B707C  41 82 FF 40 */	beq .L_801BA07C
/* 801BA140 001B7080  38 60 FF FF */	li r3, -1
.L_801BA144:
/* 801BA144 001B7084  80 01 00 94 */	lwz r0, 0x94(r1)
/* 801BA148 001B7088  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 801BA14C 001B708C  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 801BA150 001B7090  7C 08 03 A6 */	mtlr r0
/* 801BA154 001B7094  38 21 00 90 */	addi r1, r1, 0x90
/* 801BA158 001B7098  4E 80 00 20 */	blr 
.endfn findRoomIndex__Q24Game10RoomMapMgrFRQ23Sys6Sphere

.fn createGlobalCollision__Q24Game10RoomMapMgrFv, global
/* 801BA15C 001B709C  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 801BA160 001B70A0  7C 08 02 A6 */	mflr r0
/* 801BA164 001B70A4  90 01 01 44 */	stw r0, 0x144(r1)
/* 801BA168 001B70A8  BE 41 01 08 */	stmw r18, 0x108(r1)
/* 801BA16C 001B70AC  7C 7F 1B 78 */	mr r31, r3
/* 801BA170 001B70B0  88 0D 84 6C */	lbz r0, sMapRoomFinal__Q24Game12BaseHIOParms@sda21(r13)
/* 801BA174 001B70B4  28 00 00 00 */	cmplwi r0, 0
/* 801BA178 001B70B8  40 82 01 EC */	bne .L_801BA364
/* 801BA17C 001B70BC  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 801BA180 001B70C0  4B E6 96 61 */	bl getTotalFreeSize__7JKRHeapFv
/* 801BA184 001B70C4  38 00 00 00 */	li r0, 0
/* 801BA188 001B70C8  3C 60 80 4B */	lis r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BA18C 001B70CC  38 83 5D 28 */	addi r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BA190 001B70D0  38 7F 00 AC */	addi r3, r31, 0xac
/* 801BA194 001B70D4  28 00 00 00 */	cmplwi r0, 0
/* 801BA198 001B70D8  90 81 00 4C */	stw r4, 0x4c(r1)
/* 801BA19C 001B70DC  90 01 00 58 */	stw r0, 0x58(r1)
/* 801BA1A0 001B70E0  90 01 00 50 */	stw r0, 0x50(r1)
/* 801BA1A4 001B70E4  90 61 00 54 */	stw r3, 0x54(r1)
/* 801BA1A8 001B70E8  40 82 00 1C */	bne .L_801BA1C4
/* 801BA1AC 001B70EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA1B0 001B70F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BA1B4 001B70F4  7D 89 03 A6 */	mtctr r12
/* 801BA1B8 001B70F8  4E 80 04 21 */	bctrl 
/* 801BA1BC 001B70FC  90 61 00 50 */	stw r3, 0x50(r1)
/* 801BA1C0 001B7100  48 00 01 78 */	b .L_801BA338
.L_801BA1C4:
/* 801BA1C4 001B7104  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA1C8 001B7108  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BA1CC 001B710C  7D 89 03 A6 */	mtctr r12
/* 801BA1D0 001B7110  4E 80 04 21 */	bctrl 
/* 801BA1D4 001B7114  90 61 00 50 */	stw r3, 0x50(r1)
/* 801BA1D8 001B7118  48 00 00 58 */	b .L_801BA230
.L_801BA1DC:
/* 801BA1DC 001B711C  80 61 00 54 */	lwz r3, 0x54(r1)
/* 801BA1E0 001B7120  80 81 00 50 */	lwz r4, 0x50(r1)
/* 801BA1E4 001B7124  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA1E8 001B7128  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BA1EC 001B712C  7D 89 03 A6 */	mtctr r12
/* 801BA1F0 001B7130  4E 80 04 21 */	bctrl 
/* 801BA1F4 001B7134  7C 64 1B 78 */	mr r4, r3
/* 801BA1F8 001B7138  80 61 00 58 */	lwz r3, 0x58(r1)
/* 801BA1FC 001B713C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA200 001B7140  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BA204 001B7144  7D 89 03 A6 */	mtctr r12
/* 801BA208 001B7148  4E 80 04 21 */	bctrl 
/* 801BA20C 001B714C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA210 001B7150  40 82 01 28 */	bne .L_801BA338
/* 801BA214 001B7154  80 61 00 54 */	lwz r3, 0x54(r1)
/* 801BA218 001B7158  80 81 00 50 */	lwz r4, 0x50(r1)
/* 801BA21C 001B715C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA220 001B7160  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA224 001B7164  7D 89 03 A6 */	mtctr r12
/* 801BA228 001B7168  4E 80 04 21 */	bctrl 
/* 801BA22C 001B716C  90 61 00 50 */	stw r3, 0x50(r1)
.L_801BA230:
/* 801BA230 001B7170  81 81 00 4C */	lwz r12, 0x4c(r1)
/* 801BA234 001B7174  38 61 00 4C */	addi r3, r1, 0x4c
/* 801BA238 001B7178  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BA23C 001B717C  7D 89 03 A6 */	mtctr r12
/* 801BA240 001B7180  4E 80 04 21 */	bctrl 
/* 801BA244 001B7184  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA248 001B7188  41 82 FF 94 */	beq .L_801BA1DC
/* 801BA24C 001B718C  48 00 00 EC */	b .L_801BA338
.L_801BA250:
/* 801BA250 001B7190  80 61 00 54 */	lwz r3, 0x54(r1)
/* 801BA254 001B7194  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA258 001B7198  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BA25C 001B719C  7D 89 03 A6 */	mtctr r12
/* 801BA260 001B71A0  4E 80 04 21 */	bctrl 
/* 801BA264 001B71A4  7C 72 1B 78 */	mr r18, r3
/* 801BA268 001B71A8  80 63 01 38 */	lwz r3, 0x138(r3)
/* 801BA26C 001B71AC  38 92 00 D8 */	addi r4, r18, 0xd8
/* 801BA270 001B71B0  38 63 00 10 */	addi r3, r3, 0x10
/* 801BA274 001B71B4  48 25 FE A1 */	bl clone__12MapCollisionFR7Matrixf
/* 801BA278 001B71B8  90 72 00 B8 */	stw r3, 0xb8(r18)
/* 801BA27C 001B71BC  80 01 00 58 */	lwz r0, 0x58(r1)
/* 801BA280 001B71C0  28 00 00 00 */	cmplwi r0, 0
/* 801BA284 001B71C4  40 82 00 24 */	bne .L_801BA2A8
/* 801BA288 001B71C8  80 61 00 54 */	lwz r3, 0x54(r1)
/* 801BA28C 001B71CC  80 81 00 50 */	lwz r4, 0x50(r1)
/* 801BA290 001B71D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA294 001B71D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA298 001B71D8  7D 89 03 A6 */	mtctr r12
/* 801BA29C 001B71DC  4E 80 04 21 */	bctrl 
/* 801BA2A0 001B71E0  90 61 00 50 */	stw r3, 0x50(r1)
/* 801BA2A4 001B71E4  48 00 00 94 */	b .L_801BA338
.L_801BA2A8:
/* 801BA2A8 001B71E8  80 61 00 54 */	lwz r3, 0x54(r1)
/* 801BA2AC 001B71EC  80 81 00 50 */	lwz r4, 0x50(r1)
/* 801BA2B0 001B71F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA2B4 001B71F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA2B8 001B71F8  7D 89 03 A6 */	mtctr r12
/* 801BA2BC 001B71FC  4E 80 04 21 */	bctrl 
/* 801BA2C0 001B7200  90 61 00 50 */	stw r3, 0x50(r1)
/* 801BA2C4 001B7204  48 00 00 58 */	b .L_801BA31C
.L_801BA2C8:
/* 801BA2C8 001B7208  80 61 00 54 */	lwz r3, 0x54(r1)
/* 801BA2CC 001B720C  80 81 00 50 */	lwz r4, 0x50(r1)
/* 801BA2D0 001B7210  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA2D4 001B7214  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BA2D8 001B7218  7D 89 03 A6 */	mtctr r12
/* 801BA2DC 001B721C  4E 80 04 21 */	bctrl 
/* 801BA2E0 001B7220  7C 64 1B 78 */	mr r4, r3
/* 801BA2E4 001B7224  80 61 00 58 */	lwz r3, 0x58(r1)
/* 801BA2E8 001B7228  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA2EC 001B722C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BA2F0 001B7230  7D 89 03 A6 */	mtctr r12
/* 801BA2F4 001B7234  4E 80 04 21 */	bctrl 
/* 801BA2F8 001B7238  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA2FC 001B723C  40 82 00 3C */	bne .L_801BA338
/* 801BA300 001B7240  80 61 00 54 */	lwz r3, 0x54(r1)
/* 801BA304 001B7244  80 81 00 50 */	lwz r4, 0x50(r1)
/* 801BA308 001B7248  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA30C 001B724C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA310 001B7250  7D 89 03 A6 */	mtctr r12
/* 801BA314 001B7254  4E 80 04 21 */	bctrl 
/* 801BA318 001B7258  90 61 00 50 */	stw r3, 0x50(r1)
.L_801BA31C:
/* 801BA31C 001B725C  81 81 00 4C */	lwz r12, 0x4c(r1)
/* 801BA320 001B7260  38 61 00 4C */	addi r3, r1, 0x4c
/* 801BA324 001B7264  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BA328 001B7268  7D 89 03 A6 */	mtctr r12
/* 801BA32C 001B726C  4E 80 04 21 */	bctrl 
/* 801BA330 001B7270  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA334 001B7274  41 82 FF 94 */	beq .L_801BA2C8
.L_801BA338:
/* 801BA338 001B7278  80 61 00 54 */	lwz r3, 0x54(r1)
/* 801BA33C 001B727C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA340 001B7280  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BA344 001B7284  7D 89 03 A6 */	mtctr r12
/* 801BA348 001B7288  4E 80 04 21 */	bctrl 
/* 801BA34C 001B728C  80 81 00 50 */	lwz r4, 0x50(r1)
/* 801BA350 001B7290  7C 04 18 40 */	cmplw r4, r3
/* 801BA354 001B7294  40 82 FE FC */	bne .L_801BA250
/* 801BA358 001B7298  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 801BA35C 001B729C  4B E6 94 85 */	bl getTotalFreeSize__7JKRHeapFv
/* 801BA360 001B72A0  48 00 07 E4 */	b .L_801BAB44
.L_801BA364:
/* 801BA364 001B72A4  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 801BA368 001B72A8  4B E6 94 79 */	bl getTotalFreeSize__7JKRHeapFv
/* 801BA36C 001B72AC  38 60 00 50 */	li r3, 0x50
/* 801BA370 001B72B0  4B E6 9B 35 */	bl __nw__FUl
/* 801BA374 001B72B4  7C 7D 1B 79 */	or. r29, r3, r3
/* 801BA378 001B72B8  41 82 00 74 */	beq .L_801BA3EC
/* 801BA37C 001B72BC  48 25 70 15 */	bl __ct__5CNodeFv
/* 801BA380 001B72C0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801BA384 001B72C4  3C 60 80 4B */	lis r3, "__vt__23Container<10Vector3<f>>"@ha
/* 801BA388 001B72C8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801BA38C 001B72CC  3C 80 80 4B */	lis r4, "__vt__28ArrayContainer<10Vector3<f>>"@ha
/* 801BA390 001B72D0  90 1D 00 00 */	stw r0, 0(r29)
/* 801BA394 001B72D4  38 03 00 2C */	addi r0, r3, "__vt__23Container<10Vector3<f>>"@l
/* 801BA398 001B72D8  3C 60 80 4F */	lis r3, __vt__Q23Sys11VertexTable@ha
/* 801BA39C 001B72DC  38 C0 00 00 */	li r6, 0
/* 801BA3A0 001B72E0  90 1D 00 00 */	stw r0, 0(r29)
/* 801BA3A4 001B72E4  38 A4 FF E4 */	addi r5, r4, "__vt__28ArrayContainer<10Vector3<f>>"@l
/* 801BA3A8 001B72E8  38 80 00 01 */	li r4, 1
/* 801BA3AC 001B72EC  38 03 B5 C0 */	addi r0, r3, __vt__Q23Sys11VertexTable@l
/* 801BA3B0 001B72F0  98 DD 00 18 */	stb r6, 0x18(r29)
/* 801BA3B4 001B72F4  C0 22 B0 E4 */	lfs f1, lbl_80519444@sda21(r2)
/* 801BA3B8 001B72F8  90 BD 00 00 */	stw r5, 0(r29)
/* 801BA3BC 001B72FC  C0 02 B0 E8 */	lfs f0, lbl_80519448@sda21(r2)
/* 801BA3C0 001B7300  98 9D 00 18 */	stb r4, 0x18(r29)
/* 801BA3C4 001B7304  90 DD 00 20 */	stw r6, 0x20(r29)
/* 801BA3C8 001B7308  90 DD 00 1C */	stw r6, 0x1c(r29)
/* 801BA3CC 001B730C  90 DD 00 24 */	stw r6, 0x24(r29)
/* 801BA3D0 001B7310  90 1D 00 00 */	stw r0, 0(r29)
/* 801BA3D4 001B7314  D0 3D 00 28 */	stfs f1, 0x28(r29)
/* 801BA3D8 001B7318  D0 3D 00 2C */	stfs f1, 0x2c(r29)
/* 801BA3DC 001B731C  D0 3D 00 30 */	stfs f1, 0x30(r29)
/* 801BA3E0 001B7320  D0 1D 00 34 */	stfs f0, 0x34(r29)
/* 801BA3E4 001B7324  D0 1D 00 38 */	stfs f0, 0x38(r29)
/* 801BA3E8 001B7328  D0 1D 00 3C */	stfs f0, 0x3c(r29)
.L_801BA3EC:
/* 801BA3EC 001B732C  38 60 00 28 */	li r3, 0x28
/* 801BA3F0 001B7330  4B E6 9A B5 */	bl __nw__FUl
/* 801BA3F4 001B7334  7C 7C 1B 79 */	or. r28, r3, r3
/* 801BA3F8 001B7338  41 82 00 0C */	beq .L_801BA404
/* 801BA3FC 001B733C  48 25 F5 81 */	bl __ct__Q23Sys13TriangleTableFv
/* 801BA400 001B7340  7C 7C 1B 78 */	mr r28, r3
.L_801BA404:
/* 801BA404 001B7344  C0 22 B0 E4 */	lfs f1, lbl_80519444@sda21(r2)
/* 801BA408 001B7348  38 00 00 00 */	li r0, 0
/* 801BA40C 001B734C  C0 02 B0 E8 */	lfs f0, lbl_80519448@sda21(r2)
/* 801BA410 001B7350  3C 60 80 4B */	lis r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BA414 001B7354  38 83 5D 28 */	addi r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BA418 001B7358  38 7F 00 AC */	addi r3, r31, 0xac
/* 801BA41C 001B735C  28 00 00 00 */	cmplwi r0, 0
/* 801BA420 001B7360  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 801BA424 001B7364  3A C0 00 00 */	li r22, 0
/* 801BA428 001B7368  3A E0 00 00 */	li r23, 0
/* 801BA42C 001B736C  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 801BA430 001B7370  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 801BA434 001B7374  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 801BA438 001B7378  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 801BA43C 001B737C  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 801BA440 001B7380  90 81 00 3C */	stw r4, 0x3c(r1)
/* 801BA444 001B7384  90 01 00 48 */	stw r0, 0x48(r1)
/* 801BA448 001B7388  90 01 00 40 */	stw r0, 0x40(r1)
/* 801BA44C 001B738C  90 61 00 44 */	stw r3, 0x44(r1)
/* 801BA450 001B7390  40 82 00 1C */	bne .L_801BA46C
/* 801BA454 001B7394  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA458 001B7398  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BA45C 001B739C  7D 89 03 A6 */	mtctr r12
/* 801BA460 001B73A0  4E 80 04 21 */	bctrl 
/* 801BA464 001B73A4  90 61 00 40 */	stw r3, 0x40(r1)
/* 801BA468 001B73A8  48 00 01 80 */	b .L_801BA5E8
.L_801BA46C:
/* 801BA46C 001B73AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA470 001B73B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BA474 001B73B4  7D 89 03 A6 */	mtctr r12
/* 801BA478 001B73B8  4E 80 04 21 */	bctrl 
/* 801BA47C 001B73BC  90 61 00 40 */	stw r3, 0x40(r1)
/* 801BA480 001B73C0  48 00 00 58 */	b .L_801BA4D8
.L_801BA484:
/* 801BA484 001B73C4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BA488 001B73C8  80 81 00 40 */	lwz r4, 0x40(r1)
/* 801BA48C 001B73CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA490 001B73D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BA494 001B73D4  7D 89 03 A6 */	mtctr r12
/* 801BA498 001B73D8  4E 80 04 21 */	bctrl 
/* 801BA49C 001B73DC  7C 64 1B 78 */	mr r4, r3
/* 801BA4A0 001B73E0  80 61 00 48 */	lwz r3, 0x48(r1)
/* 801BA4A4 001B73E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA4A8 001B73E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BA4AC 001B73EC  7D 89 03 A6 */	mtctr r12
/* 801BA4B0 001B73F0  4E 80 04 21 */	bctrl 
/* 801BA4B4 001B73F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA4B8 001B73F8  40 82 01 30 */	bne .L_801BA5E8
/* 801BA4BC 001B73FC  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BA4C0 001B7400  80 81 00 40 */	lwz r4, 0x40(r1)
/* 801BA4C4 001B7404  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA4C8 001B7408  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA4CC 001B740C  7D 89 03 A6 */	mtctr r12
/* 801BA4D0 001B7410  4E 80 04 21 */	bctrl 
/* 801BA4D4 001B7414  90 61 00 40 */	stw r3, 0x40(r1)
.L_801BA4D8:
/* 801BA4D8 001B7418  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 801BA4DC 001B741C  38 61 00 3C */	addi r3, r1, 0x3c
/* 801BA4E0 001B7420  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BA4E4 001B7424  7D 89 03 A6 */	mtctr r12
/* 801BA4E8 001B7428  4E 80 04 21 */	bctrl 
/* 801BA4EC 001B742C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA4F0 001B7430  41 82 FF 94 */	beq .L_801BA484
/* 801BA4F4 001B7434  48 00 00 F4 */	b .L_801BA5E8
.L_801BA4F8:
/* 801BA4F8 001B7438  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BA4FC 001B743C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA500 001B7440  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BA504 001B7444  7D 89 03 A6 */	mtctr r12
/* 801BA508 001B7448  4E 80 04 21 */	bctrl 
/* 801BA50C 001B744C  80 63 01 38 */	lwz r3, 0x138(r3)
/* 801BA510 001B7450  80 01 00 48 */	lwz r0, 0x48(r1)
/* 801BA514 001B7454  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801BA518 001B7458  28 00 00 00 */	cmplwi r0, 0
/* 801BA51C 001B745C  80 83 00 18 */	lwz r4, 0x18(r3)
/* 801BA520 001B7460  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 801BA524 001B7464  80 84 00 20 */	lwz r4, 0x20(r4)
/* 801BA528 001B7468  80 03 00 20 */	lwz r0, 0x20(r3)
/* 801BA52C 001B746C  7E D6 22 14 */	add r22, r22, r4
/* 801BA530 001B7470  7E F7 02 14 */	add r23, r23, r0
/* 801BA534 001B7474  40 82 00 24 */	bne .L_801BA558
/* 801BA538 001B7478  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BA53C 001B747C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 801BA540 001B7480  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA544 001B7484  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA548 001B7488  7D 89 03 A6 */	mtctr r12
/* 801BA54C 001B748C  4E 80 04 21 */	bctrl 
/* 801BA550 001B7490  90 61 00 40 */	stw r3, 0x40(r1)
/* 801BA554 001B7494  48 00 00 94 */	b .L_801BA5E8
.L_801BA558:
/* 801BA558 001B7498  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BA55C 001B749C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 801BA560 001B74A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA564 001B74A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA568 001B74A8  7D 89 03 A6 */	mtctr r12
/* 801BA56C 001B74AC  4E 80 04 21 */	bctrl 
/* 801BA570 001B74B0  90 61 00 40 */	stw r3, 0x40(r1)
/* 801BA574 001B74B4  48 00 00 58 */	b .L_801BA5CC
.L_801BA578:
/* 801BA578 001B74B8  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BA57C 001B74BC  80 81 00 40 */	lwz r4, 0x40(r1)
/* 801BA580 001B74C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA584 001B74C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BA588 001B74C8  7D 89 03 A6 */	mtctr r12
/* 801BA58C 001B74CC  4E 80 04 21 */	bctrl 
/* 801BA590 001B74D0  7C 64 1B 78 */	mr r4, r3
/* 801BA594 001B74D4  80 61 00 48 */	lwz r3, 0x48(r1)
/* 801BA598 001B74D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA59C 001B74DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BA5A0 001B74E0  7D 89 03 A6 */	mtctr r12
/* 801BA5A4 001B74E4  4E 80 04 21 */	bctrl 
/* 801BA5A8 001B74E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA5AC 001B74EC  40 82 00 3C */	bne .L_801BA5E8
/* 801BA5B0 001B74F0  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BA5B4 001B74F4  80 81 00 40 */	lwz r4, 0x40(r1)
/* 801BA5B8 001B74F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA5BC 001B74FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA5C0 001B7500  7D 89 03 A6 */	mtctr r12
/* 801BA5C4 001B7504  4E 80 04 21 */	bctrl 
/* 801BA5C8 001B7508  90 61 00 40 */	stw r3, 0x40(r1)
.L_801BA5CC:
/* 801BA5CC 001B750C  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 801BA5D0 001B7510  38 61 00 3C */	addi r3, r1, 0x3c
/* 801BA5D4 001B7514  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BA5D8 001B7518  7D 89 03 A6 */	mtctr r12
/* 801BA5DC 001B751C  4E 80 04 21 */	bctrl 
/* 801BA5E0 001B7520  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA5E4 001B7524  41 82 FF 94 */	beq .L_801BA578
.L_801BA5E8:
/* 801BA5E8 001B7528  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BA5EC 001B752C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA5F0 001B7530  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BA5F4 001B7534  7D 89 03 A6 */	mtctr r12
/* 801BA5F8 001B7538  4E 80 04 21 */	bctrl 
/* 801BA5FC 001B753C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 801BA600 001B7540  7C 04 18 40 */	cmplw r4, r3
/* 801BA604 001B7544  40 82 FE F4 */	bne .L_801BA4F8
/* 801BA608 001B7548  7F A3 EB 78 */	mr r3, r29
/* 801BA60C 001B754C  7E C4 B3 78 */	mr r4, r22
/* 801BA610 001B7550  81 9D 00 00 */	lwz r12, 0(r29)
/* 801BA614 001B7554  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801BA618 001B7558  7D 89 03 A6 */	mtctr r12
/* 801BA61C 001B755C  4E 80 04 21 */	bctrl 
/* 801BA620 001B7560  7F 83 E3 78 */	mr r3, r28
/* 801BA624 001B7564  7E E4 BB 78 */	mr r4, r23
/* 801BA628 001B7568  81 9C 00 00 */	lwz r12, 0(r28)
/* 801BA62C 001B756C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801BA630 001B7570  7D 89 03 A6 */	mtctr r12
/* 801BA634 001B7574  4E 80 04 21 */	bctrl 
/* 801BA638 001B7578  92 FF 00 38 */	stw r23, 0x38(r31)
/* 801BA63C 001B757C  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 801BA640 001B7580  54 03 10 3A */	slwi r3, r0, 2
/* 801BA644 001B7584  4B E6 99 69 */	bl __nwa__FUl
/* 801BA648 001B7588  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 801BA64C 001B758C  3A 40 00 00 */	li r18, 0
/* 801BA650 001B7590  48 00 00 28 */	b .L_801BA678
.L_801BA654:
/* 801BA654 001B7594  38 61 00 74 */	addi r3, r1, 0x74
/* 801BA658 001B7598  48 25 C2 99 */	bl __ct__Q23Sys8TriangleFv
/* 801BA65C 001B759C  7F 83 E3 78 */	mr r3, r28
/* 801BA660 001B75A0  38 81 00 74 */	addi r4, r1, 0x74
/* 801BA664 001B75A4  81 9C 00 00 */	lwz r12, 0(r28)
/* 801BA668 001B75A8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801BA66C 001B75AC  7D 89 03 A6 */	mtctr r12
/* 801BA670 001B75B0  4E 80 04 21 */	bctrl 
/* 801BA674 001B75B4  3A 52 00 01 */	addi r18, r18, 1
.L_801BA678:
/* 801BA678 001B75B8  7C 12 B8 00 */	cmpw r18, r23
/* 801BA67C 001B75BC  41 80 FF D8 */	blt .L_801BA654
/* 801BA680 001B75C0  38 00 00 00 */	li r0, 0
/* 801BA684 001B75C4  3C 60 80 4B */	lis r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BA688 001B75C8  38 83 5D 28 */	addi r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BA68C 001B75CC  38 7F 00 AC */	addi r3, r31, 0xac
/* 801BA690 001B75D0  28 00 00 00 */	cmplwi r0, 0
/* 801BA694 001B75D4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 801BA698 001B75D8  3A A0 00 00 */	li r21, 0
/* 801BA69C 001B75DC  3A 80 00 00 */	li r20, 0
/* 801BA6A0 001B75E0  90 01 00 38 */	stw r0, 0x38(r1)
/* 801BA6A4 001B75E4  90 01 00 30 */	stw r0, 0x30(r1)
/* 801BA6A8 001B75E8  90 61 00 34 */	stw r3, 0x34(r1)
/* 801BA6AC 001B75EC  40 82 00 1C */	bne .L_801BA6C8
/* 801BA6B0 001B75F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA6B4 001B75F4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BA6B8 001B75F8  7D 89 03 A6 */	mtctr r12
/* 801BA6BC 001B75FC  4E 80 04 21 */	bctrl 
/* 801BA6C0 001B7600  90 61 00 30 */	stw r3, 0x30(r1)
/* 801BA6C4 001B7604  48 00 00 8C */	b .L_801BA750
.L_801BA6C8:
/* 801BA6C8 001B7608  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA6CC 001B760C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BA6D0 001B7610  7D 89 03 A6 */	mtctr r12
/* 801BA6D4 001B7614  4E 80 04 21 */	bctrl 
/* 801BA6D8 001B7618  90 61 00 30 */	stw r3, 0x30(r1)
/* 801BA6DC 001B761C  48 00 00 58 */	b .L_801BA734
.L_801BA6E0:
/* 801BA6E0 001B7620  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801BA6E4 001B7624  80 81 00 30 */	lwz r4, 0x30(r1)
/* 801BA6E8 001B7628  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA6EC 001B762C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BA6F0 001B7630  7D 89 03 A6 */	mtctr r12
/* 801BA6F4 001B7634  4E 80 04 21 */	bctrl 
/* 801BA6F8 001B7638  7C 64 1B 78 */	mr r4, r3
/* 801BA6FC 001B763C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BA700 001B7640  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA704 001B7644  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BA708 001B7648  7D 89 03 A6 */	mtctr r12
/* 801BA70C 001B764C  4E 80 04 21 */	bctrl 
/* 801BA710 001B7650  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA714 001B7654  40 82 00 3C */	bne .L_801BA750
/* 801BA718 001B7658  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801BA71C 001B765C  80 81 00 30 */	lwz r4, 0x30(r1)
/* 801BA720 001B7660  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA724 001B7664  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA728 001B7668  7D 89 03 A6 */	mtctr r12
/* 801BA72C 001B766C  4E 80 04 21 */	bctrl 
/* 801BA730 001B7670  90 61 00 30 */	stw r3, 0x30(r1)
.L_801BA734:
/* 801BA734 001B7674  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 801BA738 001B7678  38 61 00 2C */	addi r3, r1, 0x2c
/* 801BA73C 001B767C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BA740 001B7680  7D 89 03 A6 */	mtctr r12
/* 801BA744 001B7684  4E 80 04 21 */	bctrl 
/* 801BA748 001B7688  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA74C 001B768C  41 82 FF 94 */	beq .L_801BA6E0
.L_801BA750:
/* 801BA750 001B7690  3A E0 00 00 */	li r23, 0
/* 801BA754 001B7694  7E F6 BB 78 */	mr r22, r23
/* 801BA758 001B7698  48 00 02 0C */	b .L_801BA964
.L_801BA75C:
/* 801BA75C 001B769C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801BA760 001B76A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA764 001B76A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BA768 001B76A8  7D 89 03 A6 */	mtctr r12
/* 801BA76C 001B76AC  4E 80 04 21 */	bctrl 
/* 801BA770 001B76B0  7C 7E 1B 78 */	mr r30, r3
/* 801BA774 001B76B4  3B 00 00 00 */	li r24, 0
/* 801BA778 001B76B8  80 63 01 38 */	lwz r3, 0x138(r3)
/* 801BA77C 001B76BC  3B 3E 00 D8 */	addi r25, r30, 0xd8
/* 801BA780 001B76C0  3A 40 00 00 */	li r18, 0
/* 801BA784 001B76C4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801BA788 001B76C8  83 43 00 18 */	lwz r26, 0x18(r3)
/* 801BA78C 001B76CC  82 63 00 1C */	lwz r19, 0x1c(r3)
/* 801BA790 001B76D0  48 00 00 70 */	b .L_801BA800
.L_801BA794:
/* 801BA794 001B76D4  80 1A 00 24 */	lwz r0, 0x24(r26)
/* 801BA798 001B76D8  7F 23 CB 78 */	mr r3, r25
/* 801BA79C 001B76DC  38 81 00 20 */	addi r4, r1, 0x20
/* 801BA7A0 001B76E0  38 A1 00 08 */	addi r5, r1, 8
/* 801BA7A4 001B76E4  7C C0 92 14 */	add r6, r0, r18
/* 801BA7A8 001B76E8  C0 06 00 00 */	lfs f0, 0(r6)
/* 801BA7AC 001B76EC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801BA7B0 001B76F0  C0 06 00 04 */	lfs f0, 4(r6)
/* 801BA7B4 001B76F4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801BA7B8 001B76F8  C0 06 00 08 */	lfs f0, 8(r6)
/* 801BA7BC 001B76FC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801BA7C0 001B7700  4B F3 04 19 */	bl PSMTXMultVec
/* 801BA7C4 001B7704  C0 41 00 08 */	lfs f2, 8(r1)
/* 801BA7C8 001B7708  7F A3 EB 78 */	mr r3, r29
/* 801BA7CC 001B770C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801BA7D0 001B7710  38 81 00 14 */	addi r4, r1, 0x14
/* 801BA7D4 001B7714  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801BA7D8 001B7718  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 801BA7DC 001B771C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 801BA7E0 001B7720  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801BA7E4 001B7724  81 9D 00 00 */	lwz r12, 0(r29)
/* 801BA7E8 001B7728  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801BA7EC 001B772C  7D 89 03 A6 */	mtctr r12
/* 801BA7F0 001B7730  4E 80 04 21 */	bctrl 
/* 801BA7F4 001B7734  3A B5 00 01 */	addi r21, r21, 1
/* 801BA7F8 001B7738  3A 52 00 0C */	addi r18, r18, 0xc
/* 801BA7FC 001B773C  3B 18 00 01 */	addi r24, r24, 1
.L_801BA800:
/* 801BA800 001B7740  80 1A 00 20 */	lwz r0, 0x20(r26)
/* 801BA804 001B7744  7C 18 00 00 */	cmpw r24, r0
/* 801BA808 001B7748  41 80 FF 8C */	blt .L_801BA794
/* 801BA80C 001B774C  7E FA BB 78 */	mr r26, r23
/* 801BA810 001B7750  7E D8 B3 78 */	mr r24, r22
/* 801BA814 001B7754  3A 40 00 00 */	li r18, 0
/* 801BA818 001B7758  3B 20 00 00 */	li r25, 0
/* 801BA81C 001B775C  48 00 00 7C */	b .L_801BA898
.L_801BA820:
/* 801BA820 001B7760  80 13 00 24 */	lwz r0, 0x24(r19)
/* 801BA824 001B7764  7F A4 EB 78 */	mr r4, r29
/* 801BA828 001B7768  80 7C 00 24 */	lwz r3, 0x24(r28)
/* 801BA82C 001B776C  7C A0 CA 14 */	add r5, r0, r25
/* 801BA830 001B7770  80 05 00 00 */	lwz r0, 0(r5)
/* 801BA834 001B7774  7F 63 D2 14 */	add r27, r3, r26
/* 801BA838 001B7778  7F 63 DB 78 */	mr r3, r27
/* 801BA83C 001B777C  7C 00 A2 14 */	add r0, r0, r20
/* 801BA840 001B7780  90 1B 00 00 */	stw r0, 0(r27)
/* 801BA844 001B7784  80 05 00 04 */	lwz r0, 4(r5)
/* 801BA848 001B7788  7C 00 A2 14 */	add r0, r0, r20
/* 801BA84C 001B778C  90 1B 00 04 */	stw r0, 4(r27)
/* 801BA850 001B7790  80 05 00 08 */	lwz r0, 8(r5)
/* 801BA854 001B7794  7C 00 A2 14 */	add r0, r0, r20
/* 801BA858 001B7798  90 1B 00 08 */	stw r0, 8(r27)
/* 801BA85C 001B779C  88 05 00 5C */	lbz r0, 0x5c(r5)
/* 801BA860 001B77A0  98 1B 00 5C */	stb r0, 0x5c(r27)
/* 801BA864 001B77A4  48 25 D4 11 */	bl makePlanes__Q23Sys8TriangleFRQ23Sys11VertexTable
/* 801BA868 001B77A8  7F 63 DB 78 */	mr r3, r27
/* 801BA86C 001B77AC  7F A4 EB 78 */	mr r4, r29
/* 801BA870 001B77B0  48 25 C0 E9 */	bl createSphere__Q23Sys8TriangleFRQ23Sys11VertexTable
/* 801BA874 001B77B4  A8 1E 01 84 */	lha r0, 0x184(r30)
/* 801BA878 001B77B8  3A 52 00 01 */	addi r18, r18, 1
/* 801BA87C 001B77BC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801BA880 001B77C0  3B 5A 00 60 */	addi r26, r26, 0x60
/* 801BA884 001B77C4  3A F7 00 60 */	addi r23, r23, 0x60
/* 801BA888 001B77C8  3A D6 00 04 */	addi r22, r22, 4
/* 801BA88C 001B77CC  7C 03 C1 2E */	stwx r0, r3, r24
/* 801BA890 001B77D0  3B 18 00 04 */	addi r24, r24, 4
/* 801BA894 001B77D4  3B 39 00 60 */	addi r25, r25, 0x60
.L_801BA898:
/* 801BA898 001B77D8  80 13 00 20 */	lwz r0, 0x20(r19)
/* 801BA89C 001B77DC  7C 12 00 00 */	cmpw r18, r0
/* 801BA8A0 001B77E0  41 80 FF 80 */	blt .L_801BA820
/* 801BA8A4 001B77E4  80 01 00 38 */	lwz r0, 0x38(r1)
/* 801BA8A8 001B77E8  7E B4 AB 78 */	mr r20, r21
/* 801BA8AC 001B77EC  28 00 00 00 */	cmplwi r0, 0
/* 801BA8B0 001B77F0  40 82 00 24 */	bne .L_801BA8D4
/* 801BA8B4 001B77F4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801BA8B8 001B77F8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 801BA8BC 001B77FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA8C0 001B7800  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA8C4 001B7804  7D 89 03 A6 */	mtctr r12
/* 801BA8C8 001B7808  4E 80 04 21 */	bctrl 
/* 801BA8CC 001B780C  90 61 00 30 */	stw r3, 0x30(r1)
/* 801BA8D0 001B7810  48 00 00 94 */	b .L_801BA964
.L_801BA8D4:
/* 801BA8D4 001B7814  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801BA8D8 001B7818  80 81 00 30 */	lwz r4, 0x30(r1)
/* 801BA8DC 001B781C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA8E0 001B7820  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA8E4 001B7824  7D 89 03 A6 */	mtctr r12
/* 801BA8E8 001B7828  4E 80 04 21 */	bctrl 
/* 801BA8EC 001B782C  90 61 00 30 */	stw r3, 0x30(r1)
/* 801BA8F0 001B7830  48 00 00 58 */	b .L_801BA948
.L_801BA8F4:
/* 801BA8F4 001B7834  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801BA8F8 001B7838  80 81 00 30 */	lwz r4, 0x30(r1)
/* 801BA8FC 001B783C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA900 001B7840  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BA904 001B7844  7D 89 03 A6 */	mtctr r12
/* 801BA908 001B7848  4E 80 04 21 */	bctrl 
/* 801BA90C 001B784C  7C 64 1B 78 */	mr r4, r3
/* 801BA910 001B7850  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BA914 001B7854  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA918 001B7858  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BA91C 001B785C  7D 89 03 A6 */	mtctr r12
/* 801BA920 001B7860  4E 80 04 21 */	bctrl 
/* 801BA924 001B7864  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA928 001B7868  40 82 00 3C */	bne .L_801BA964
/* 801BA92C 001B786C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801BA930 001B7870  80 81 00 30 */	lwz r4, 0x30(r1)
/* 801BA934 001B7874  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA938 001B7878  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BA93C 001B787C  7D 89 03 A6 */	mtctr r12
/* 801BA940 001B7880  4E 80 04 21 */	bctrl 
/* 801BA944 001B7884  90 61 00 30 */	stw r3, 0x30(r1)
.L_801BA948:
/* 801BA948 001B7888  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 801BA94C 001B788C  38 61 00 2C */	addi r3, r1, 0x2c
/* 801BA950 001B7890  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BA954 001B7894  7D 89 03 A6 */	mtctr r12
/* 801BA958 001B7898  4E 80 04 21 */	bctrl 
/* 801BA95C 001B789C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BA960 001B78A0  41 82 FF 94 */	beq .L_801BA8F4
.L_801BA964:
/* 801BA964 001B78A4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801BA968 001B78A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BA96C 001B78AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BA970 001B78B0  7D 89 03 A6 */	mtctr r12
/* 801BA974 001B78B4  4E 80 04 21 */	bctrl 
/* 801BA978 001B78B8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 801BA97C 001B78BC  7C 04 18 40 */	cmplw r4, r3
/* 801BA980 001B78C0  40 82 FD DC */	bne .L_801BA75C
/* 801BA984 001B78C4  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 801BA988 001B78C8  38 60 00 1C */	li r3, 0x1c
/* 801BA98C 001B78CC  C0 42 B1 18 */	lfs f2, lbl_80519478@sda21(r2)
/* 801BA990 001B78D0  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801BA994 001B78D4  EC 20 10 28 */	fsubs f1, f0, f2
/* 801BA998 001B78D8  C0 1D 00 2C */	lfs f0, 0x2c(r29)
/* 801BA99C 001B78DC  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 801BA9A0 001B78E0  EC 80 10 28 */	fsubs f4, f0, f2
/* 801BA9A4 001B78E4  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 801BA9A8 001B78E8  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 801BA9AC 001B78EC  EC A0 10 28 */	fsubs f5, f0, f2
/* 801BA9B0 001B78F0  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 801BA9B4 001B78F4  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 801BA9B8 001B78F8  EC 00 10 2A */	fadds f0, f0, f2
/* 801BA9BC 001B78FC  C0 7D 00 38 */	lfs f3, 0x38(r29)
/* 801BA9C0 001B7900  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 801BA9C4 001B7904  EC C3 10 2A */	fadds f6, f3, f2
/* 801BA9C8 001B7908  C0 7D 00 3C */	lfs f3, 0x3c(r29)
/* 801BA9CC 001B790C  EC 43 10 2A */	fadds f2, f3, f2
/* 801BA9D0 001B7910  D0 61 00 70 */	stfs f3, 0x70(r1)
/* 801BA9D4 001B7914  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 801BA9D8 001B7918  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 801BA9DC 001B791C  D0 A1 00 64 */	stfs f5, 0x64(r1)
/* 801BA9E0 001B7920  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 801BA9E4 001B7924  D0 C1 00 6C */	stfs f6, 0x6c(r1)
/* 801BA9E8 001B7928  D0 41 00 70 */	stfs f2, 0x70(r1)
/* 801BA9EC 001B792C  4B E6 94 B9 */	bl __nw__FUl
/* 801BA9F0 001B7930  7C 72 1B 79 */	or. r18, r3, r3
/* 801BA9F4 001B7934  41 82 00 14 */	beq .L_801BAA08
/* 801BA9F8 001B7938  48 25 69 99 */	bl __ct__5CNodeFv
/* 801BA9FC 001B793C  3C 60 80 4F */	lis r3, __vt__12MapCollision@ha
/* 801BAA00 001B7940  38 03 B6 F8 */	addi r0, r3, __vt__12MapCollision@l
/* 801BAA04 001B7944  90 12 00 00 */	stw r0, 0(r18)
.L_801BAA08:
/* 801BAA08 001B7948  92 5F 00 34 */	stw r18, 0x34(r31)
/* 801BAA0C 001B794C  38 60 00 4C */	li r3, 0x4c
/* 801BAA10 001B7950  4B E6 94 95 */	bl __nw__FUl
/* 801BAA14 001B7954  7C 72 1B 79 */	or. r18, r3, r3
/* 801BAA18 001B7958  41 82 00 50 */	beq .L_801BAA68
/* 801BAA1C 001B795C  48 25 69 75 */	bl __ct__5CNodeFv
/* 801BAA20 001B7960  3C 80 80 4F */	lis r4, __vt__Q23Sys10TriDivider@ha
/* 801BAA24 001B7964  3C 60 80 4F */	lis r3, __vt__Q23Sys11GridDivider@ha
/* 801BAA28 001B7968  38 04 BA 10 */	addi r0, r4, __vt__Q23Sys10TriDivider@l
/* 801BAA2C 001B796C  C0 22 B0 E4 */	lfs f1, lbl_80519444@sda21(r2)
/* 801BAA30 001B7970  90 12 00 00 */	stw r0, 0(r18)
/* 801BAA34 001B7974  38 63 B6 C4 */	addi r3, r3, __vt__Q23Sys11GridDivider@l
/* 801BAA38 001B7978  C0 02 B0 E8 */	lfs f0, lbl_80519448@sda21(r2)
/* 801BAA3C 001B797C  38 00 00 00 */	li r0, 0
/* 801BAA40 001B7980  90 72 00 00 */	stw r3, 0(r18)
/* 801BAA44 001B7984  D0 32 00 2C */	stfs f1, 0x2c(r18)
/* 801BAA48 001B7988  D0 32 00 30 */	stfs f1, 0x30(r18)
/* 801BAA4C 001B798C  D0 32 00 34 */	stfs f1, 0x34(r18)
/* 801BAA50 001B7990  D0 12 00 38 */	stfs f0, 0x38(r18)
/* 801BAA54 001B7994  D0 12 00 3C */	stfs f0, 0x3c(r18)
/* 801BAA58 001B7998  D0 12 00 40 */	stfs f0, 0x40(r18)
/* 801BAA5C 001B799C  90 12 00 28 */	stw r0, 0x28(r18)
/* 801BAA60 001B79A0  90 12 00 24 */	stw r0, 0x24(r18)
/* 801BAA64 001B79A4  90 12 00 20 */	stw r0, 0x20(r18)
.L_801BAA68:
/* 801BAA68 001B79A8  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 801BAA6C 001B79AC  3C 00 43 30 */	lis r0, 0x4330
/* 801BAA70 001B79B0  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 801BAA74 001B79B4  38 A0 00 30 */	li r5, 0x30
/* 801BAA78 001B79B8  C8 62 B1 10 */	lfd f3, lbl_80519470@sda21(r2)
/* 801BAA7C 001B79BC  38 C0 00 30 */	li r6, 0x30
/* 801BAA80 001B79C0  92 43 00 18 */	stw r18, 0x18(r3)
/* 801BAA84 001B79C4  C0 42 B1 1C */	lfs f2, lbl_8051947C@sda21(r2)
/* 801BAA88 001B79C8  C0 81 00 68 */	lfs f4, 0x68(r1)
/* 801BAA8C 001B79CC  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 801BAA90 001B79D0  C0 21 00 70 */	lfs f1, 0x70(r1)
/* 801BAA94 001B79D4  EC 84 00 28 */	fsubs f4, f4, f0
/* 801BAA98 001B79D8  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 801BAA9C 001B79DC  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 801BAAA0 001B79E0  EC 01 00 28 */	fsubs f0, f1, f0
/* 801BAAA4 001B79E4  FC 20 22 10 */	fabs f1, f4
/* 801BAAA8 001B79E8  FC 00 02 10 */	fabs f0, f0
/* 801BAAAC 001B79EC  FC 20 08 18 */	frsp f1, f1
/* 801BAAB0 001B79F0  FC 00 00 18 */	frsp f0, f0
/* 801BAAB4 001B79F4  FC 20 08 1E */	fctiwz f1, f1
/* 801BAAB8 001B79F8  FC 00 00 1E */	fctiwz f0, f0
/* 801BAABC 001B79FC  D8 21 00 D8 */	stfd f1, 0xd8(r1)
/* 801BAAC0 001B7A00  80 01 00 DC */	lwz r0, 0xdc(r1)
/* 801BAAC4 001B7A04  D8 01 00 F0 */	stfd f0, 0xf0(r1)
/* 801BAAC8 001B7A08  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801BAACC 001B7A0C  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801BAAD0 001B7A10  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 801BAAD4 001B7A14  C8 01 00 E0 */	lfd f0, 0xe0(r1)
/* 801BAAD8 001B7A18  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801BAADC 001B7A1C  90 01 00 FC */	stw r0, 0xfc(r1)
/* 801BAAE0 001B7A20  EC 20 18 28 */	fsubs f1, f0, f3
/* 801BAAE4 001B7A24  C8 01 00 F8 */	lfd f0, 0xf8(r1)
/* 801BAAE8 001B7A28  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801BAAEC 001B7A2C  EC 00 18 28 */	fsubs f0, f0, f3
/* 801BAAF0 001B7A30  FC 20 08 1E */	fctiwz f1, f1
/* 801BAAF4 001B7A34  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801BAAF8 001B7A38  D8 21 00 E8 */	stfd f1, 0xe8(r1)
/* 801BAAFC 001B7A3C  FC 00 00 1E */	fctiwz f0, f0
/* 801BAB00 001B7A40  80 01 00 EC */	lwz r0, 0xec(r1)
/* 801BAB04 001B7A44  D8 01 01 00 */	stfd f0, 0x100(r1)
/* 801BAB08 001B7A48  2C 00 00 30 */	cmpwi r0, 0x30
/* 801BAB0C 001B7A4C  80 61 01 04 */	lwz r3, 0x104(r1)
/* 801BAB10 001B7A50  40 80 00 08 */	bge .L_801BAB18
/* 801BAB14 001B7A54  7C 05 03 78 */	mr r5, r0
.L_801BAB18:
/* 801BAB18 001B7A58  2C 03 00 30 */	cmpwi r3, 0x30
/* 801BAB1C 001B7A5C  40 80 00 08 */	bge .L_801BAB24
/* 801BAB20 001B7A60  7C 66 1B 78 */	mr r6, r3
.L_801BAB24:
/* 801BAB24 001B7A64  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 801BAB28 001B7A68  7F A7 EB 78 */	mr r7, r29
/* 801BAB2C 001B7A6C  7F 88 E3 78 */	mr r8, r28
/* 801BAB30 001B7A70  38 81 00 5C */	addi r4, r1, 0x5c
/* 801BAB34 001B7A74  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801BAB38 001B7A78  48 25 E0 A9 */	bl create__Q23Sys11GridDividerFR8BoundBoxiiPQ23Sys11VertexTablePQ23Sys13TriangleTable
/* 801BAB3C 001B7A7C  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 801BAB40 001B7A80  4B E6 8C A1 */	bl getTotalFreeSize__7JKRHeapFv
.L_801BAB44:
/* 801BAB44 001B7A84  BA 41 01 08 */	lmw r18, 0x108(r1)
/* 801BAB48 001B7A88  80 01 01 44 */	lwz r0, 0x144(r1)
/* 801BAB4C 001B7A8C  7C 08 03 A6 */	mtlr r0
/* 801BAB50 001B7A90  38 21 01 40 */	addi r1, r1, 0x140
/* 801BAB54 001B7A94  4E 80 00 20 */	blr 
.endfn createGlobalCollision__Q24Game10RoomMapMgrFv

.fn "addOne__Q23Sys11VertexTableFR10Vector3<f>", weak
/* 801BAB58 001B7A98  80 E3 00 1C */	lwz r7, 0x1c(r3)
/* 801BAB5C 001B7A9C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 801BAB60 001B7AA0  7C 07 00 00 */	cmpw r7, r0
/* 801BAB64 001B7AA4  40 80 00 30 */	bge .L_801BAB94
/* 801BAB68 001B7AA8  80 C3 00 24 */	lwz r6, 0x24(r3)
/* 801BAB6C 001B7AAC  38 A7 00 01 */	addi r5, r7, 1
/* 801BAB70 001B7AB0  1C 07 00 0C */	mulli r0, r7, 0xc
/* 801BAB74 001B7AB4  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 801BAB78 001B7AB8  C0 04 00 00 */	lfs f0, 0(r4)
/* 801BAB7C 001B7ABC  7C A6 02 14 */	add r5, r6, r0
/* 801BAB80 001B7AC0  D0 05 00 00 */	stfs f0, 0(r5)
/* 801BAB84 001B7AC4  C0 04 00 04 */	lfs f0, 4(r4)
/* 801BAB88 001B7AC8  D0 05 00 04 */	stfs f0, 4(r5)
/* 801BAB8C 001B7ACC  C0 04 00 08 */	lfs f0, 8(r4)
/* 801BAB90 001B7AD0  D0 05 00 08 */	stfs f0, 8(r5)
.L_801BAB94:
/* 801BAB94 001B7AD4  C0 24 00 00 */	lfs f1, 0(r4)
/* 801BAB98 001B7AD8  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 801BAB9C 001B7ADC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BABA0 001B7AE0  40 80 00 08 */	bge .L_801BABA8
/* 801BABA4 001B7AE4  D0 23 00 28 */	stfs f1, 0x28(r3)
.L_801BABA8:
/* 801BABA8 001B7AE8  C0 24 00 04 */	lfs f1, 4(r4)
/* 801BABAC 001B7AEC  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 801BABB0 001B7AF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BABB4 001B7AF4  40 80 00 08 */	bge .L_801BABBC
/* 801BABB8 001B7AF8  D0 23 00 2C */	stfs f1, 0x2c(r3)
.L_801BABBC:
/* 801BABBC 001B7AFC  C0 24 00 08 */	lfs f1, 8(r4)
/* 801BABC0 001B7B00  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 801BABC4 001B7B04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BABC8 001B7B08  40 80 00 08 */	bge .L_801BABD0
/* 801BABCC 001B7B0C  D0 23 00 30 */	stfs f1, 0x30(r3)
.L_801BABD0:
/* 801BABD0 001B7B10  C0 24 00 00 */	lfs f1, 0(r4)
/* 801BABD4 001B7B14  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 801BABD8 001B7B18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BABDC 001B7B1C  40 81 00 08 */	ble .L_801BABE4
/* 801BABE0 001B7B20  D0 23 00 34 */	stfs f1, 0x34(r3)
.L_801BABE4:
/* 801BABE4 001B7B24  C0 24 00 04 */	lfs f1, 4(r4)
/* 801BABE8 001B7B28  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 801BABEC 001B7B2C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BABF0 001B7B30  40 81 00 08 */	ble .L_801BABF8
/* 801BABF4 001B7B34  D0 23 00 38 */	stfs f1, 0x38(r3)
.L_801BABF8:
/* 801BABF8 001B7B38  C0 24 00 08 */	lfs f1, 8(r4)
/* 801BABFC 001B7B3C  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 801BAC00 001B7B40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BAC04 001B7B44  4C 81 00 20 */	blelr 
/* 801BAC08 001B7B48  D0 23 00 3C */	stfs f1, 0x3c(r3)
/* 801BAC0C 001B7B4C  4E 80 00 20 */	blr 
.endfn "addOne__Q23Sys11VertexTableFR10Vector3<f>"

.fn "addOne__31ArrayContainer<Q23Sys8Triangle>FRQ23Sys8Triangle", weak
/* 801BAC10 001B7B50  80 E3 00 1C */	lwz r7, 0x1c(r3)
/* 801BAC14 001B7B54  80 03 00 20 */	lwz r0, 0x20(r3)
/* 801BAC18 001B7B58  7C 07 00 00 */	cmpw r7, r0
/* 801BAC1C 001B7B5C  4C 80 00 20 */	bgelr 
/* 801BAC20 001B7B60  80 C3 00 24 */	lwz r6, 0x24(r3)
/* 801BAC24 001B7B64  38 A7 00 01 */	addi r5, r7, 1
/* 801BAC28 001B7B68  1C 07 00 60 */	mulli r0, r7, 0x60
/* 801BAC2C 001B7B6C  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 801BAC30 001B7B70  80 64 00 00 */	lwz r3, 0(r4)
/* 801BAC34 001B7B74  7C A6 02 14 */	add r5, r6, r0
/* 801BAC38 001B7B78  80 04 00 04 */	lwz r0, 4(r4)
/* 801BAC3C 001B7B7C  90 65 00 00 */	stw r3, 0(r5)
/* 801BAC40 001B7B80  90 05 00 04 */	stw r0, 4(r5)
/* 801BAC44 001B7B84  80 04 00 08 */	lwz r0, 8(r4)
/* 801BAC48 001B7B88  90 05 00 08 */	stw r0, 8(r5)
/* 801BAC4C 001B7B8C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801BAC50 001B7B90  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 801BAC54 001B7B94  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 801BAC58 001B7B98  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 801BAC5C 001B7B9C  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 801BAC60 001B7BA0  D0 05 00 14 */	stfs f0, 0x14(r5)
/* 801BAC64 001B7BA4  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 801BAC68 001B7BA8  D0 05 00 18 */	stfs f0, 0x18(r5)
/* 801BAC6C 001B7BAC  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 801BAC70 001B7BB0  D0 05 00 1C */	stfs f0, 0x1c(r5)
/* 801BAC74 001B7BB4  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 801BAC78 001B7BB8  D0 05 00 20 */	stfs f0, 0x20(r5)
/* 801BAC7C 001B7BBC  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 801BAC80 001B7BC0  D0 05 00 24 */	stfs f0, 0x24(r5)
/* 801BAC84 001B7BC4  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 801BAC88 001B7BC8  D0 05 00 28 */	stfs f0, 0x28(r5)
/* 801BAC8C 001B7BCC  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 801BAC90 001B7BD0  D0 05 00 2C */	stfs f0, 0x2c(r5)
/* 801BAC94 001B7BD4  C0 04 00 30 */	lfs f0, 0x30(r4)
/* 801BAC98 001B7BD8  D0 05 00 30 */	stfs f0, 0x30(r5)
/* 801BAC9C 001B7BDC  C0 04 00 34 */	lfs f0, 0x34(r4)
/* 801BACA0 001B7BE0  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 801BACA4 001B7BE4  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 801BACA8 001B7BE8  D0 05 00 38 */	stfs f0, 0x38(r5)
/* 801BACAC 001B7BEC  C0 04 00 3C */	lfs f0, 0x3c(r4)
/* 801BACB0 001B7BF0  D0 05 00 3C */	stfs f0, 0x3c(r5)
/* 801BACB4 001B7BF4  C0 04 00 40 */	lfs f0, 0x40(r4)
/* 801BACB8 001B7BF8  D0 05 00 40 */	stfs f0, 0x40(r5)
/* 801BACBC 001B7BFC  C0 04 00 44 */	lfs f0, 0x44(r4)
/* 801BACC0 001B7C00  D0 05 00 44 */	stfs f0, 0x44(r5)
/* 801BACC4 001B7C04  C0 04 00 48 */	lfs f0, 0x48(r4)
/* 801BACC8 001B7C08  D0 05 00 48 */	stfs f0, 0x48(r5)
/* 801BACCC 001B7C0C  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 801BACD0 001B7C10  D0 05 00 4C */	stfs f0, 0x4c(r5)
/* 801BACD4 001B7C14  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 801BACD8 001B7C18  D0 05 00 50 */	stfs f0, 0x50(r5)
/* 801BACDC 001B7C1C  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 801BACE0 001B7C20  D0 05 00 54 */	stfs f0, 0x54(r5)
/* 801BACE4 001B7C24  C0 04 00 58 */	lfs f0, 0x58(r4)
/* 801BACE8 001B7C28  D0 05 00 58 */	stfs f0, 0x58(r5)
/* 801BACEC 001B7C2C  88 04 00 5C */	lbz r0, 0x5c(r4)
/* 801BACF0 001B7C30  98 05 00 5C */	stb r0, 0x5c(r5)
/* 801BACF4 001B7C34  4E 80 00 20 */	blr 
.endfn "addOne__31ArrayContainer<Q23Sys8Triangle>FRQ23Sys8Triangle"

.fn "alloc__31ArrayContainer<Q23Sys8Triangle>Fi", weak
/* 801BACF8 001B7C38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BACFC 001B7C3C  7C 08 02 A6 */	mflr r0
/* 801BAD00 001B7C40  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BAD04 001B7C44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BAD08 001B7C48  7C 9F 23 78 */	mr r31, r4
/* 801BAD0C 001B7C4C  93 C1 00 08 */	stw r30, 8(r1)
/* 801BAD10 001B7C50  7C 7E 1B 78 */	mr r30, r3
/* 801BAD14 001B7C54  1C 7F 00 60 */	mulli r3, r31, 0x60
/* 801BAD18 001B7C58  38 63 00 10 */	addi r3, r3, 0x10
/* 801BAD1C 001B7C5C  4B E6 92 91 */	bl __nwa__FUl
/* 801BAD20 001B7C60  3C 80 80 41 */	lis r4, __ct__Q23Sys8TriangleFv@ha
/* 801BAD24 001B7C64  7F E7 FB 78 */	mr r7, r31
/* 801BAD28 001B7C68  38 84 68 F0 */	addi r4, r4, __ct__Q23Sys8TriangleFv@l
/* 801BAD2C 001B7C6C  38 A0 00 00 */	li r5, 0
/* 801BAD30 001B7C70  38 C0 00 60 */	li r6, 0x60
/* 801BAD34 001B7C74  4B F0 6C BD */	bl __construct_new_array
/* 801BAD38 001B7C78  90 7E 00 24 */	stw r3, 0x24(r30)
/* 801BAD3C 001B7C7C  38 00 00 00 */	li r0, 0
/* 801BAD40 001B7C80  93 FE 00 20 */	stw r31, 0x20(r30)
/* 801BAD44 001B7C84  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801BAD48 001B7C88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BAD4C 001B7C8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801BAD50 001B7C90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BAD54 001B7C94  7C 08 03 A6 */	mtlr r0
/* 801BAD58 001B7C98  38 21 00 10 */	addi r1, r1, 0x10
/* 801BAD5C 001B7C9C  4E 80 00 20 */	blr 
.endfn "alloc__31ArrayContainer<Q23Sys8Triangle>Fi"

.fn traceMove_new__Q24Game10RoomMapMgrFRQ24Game8MoveInfof, global
/* 801BAD60 001B7CA0  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 801BAD64 001B7CA4  7C 08 02 A6 */	mflr r0
/* 801BAD68 001B7CA8  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801BAD6C 001B7CAC  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 801BAD70 001B7CB0  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 801BAD74 001B7CB4  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 801BAD78 001B7CB8  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 801BAD7C 001B7CBC  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 801BAD80 001B7CC0  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 801BAD84 001B7CC4  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 801BAD88 001B7CC8  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 801BAD8C 001B7CCC  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 801BAD90 001B7CD0  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 801BAD94 001B7CD4  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 801BAD98 001B7CD8  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 801BAD9C 001B7CDC  BE 81 00 50 */	stmw r20, 0x50(r1)
/* 801BADA0 001B7CE0  7C 95 23 78 */	mr r21, r4
/* 801BADA4 001B7CE4  7C 74 1B 78 */	mr r20, r3
/* 801BADA8 001B7CE8  83 24 00 04 */	lwz r25, 4(r4)
/* 801BADAC 001B7CEC  83 44 00 00 */	lwz r26, 0(r4)
/* 801BADB0 001B7CF0  C0 19 00 00 */	lfs f0, 0(r25)
/* 801BADB4 001B7CF4  C0 59 00 04 */	lfs f2, 4(r25)
/* 801BADB8 001B7CF8  7F 44 D3 78 */	mr r4, r26
/* 801BADBC 001B7CFC  EC 00 00 72 */	fmuls f0, f0, f1
/* 801BADC0 001B7D00  C3 5A 00 00 */	lfs f26, 0(r26)
/* 801BADC4 001B7D04  C0 79 00 08 */	lfs f3, 8(r25)
/* 801BADC8 001B7D08  EC 42 00 72 */	fmuls f2, f2, f1
/* 801BADCC 001B7D0C  C3 7A 00 04 */	lfs f27, 4(r26)
/* 801BADD0 001B7D10  EC 1A 00 2A */	fadds f0, f26, f0
/* 801BADD4 001B7D14  C3 9A 00 08 */	lfs f28, 8(r26)
/* 801BADD8 001B7D18  EC 23 00 72 */	fmuls f1, f3, f1
/* 801BADDC 001B7D1C  EC 5B 10 2A */	fadds f2, f27, f2
/* 801BADE0 001B7D20  D3 41 00 08 */	stfs f26, 8(r1)
/* 801BADE4 001B7D24  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801BADE8 001B7D28  EC 1C 08 2A */	fadds f0, f28, f1
/* 801BADEC 001B7D2C  D0 5A 00 04 */	stfs f2, 4(r26)
/* 801BADF0 001B7D30  D0 1A 00 08 */	stfs f0, 8(r26)
/* 801BADF4 001B7D34  C0 3A 00 04 */	lfs f1, 4(r26)
/* 801BADF8 001B7D38  C0 5A 00 08 */	lfs f2, 8(r26)
/* 801BADFC 001B7D3C  C0 1A 00 00 */	lfs f0, 0(r26)
/* 801BAE00 001B7D40  D3 61 00 0C */	stfs f27, 0xc(r1)
/* 801BAE04 001B7D44  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801BAE08 001B7D48  D0 3A 00 04 */	stfs f1, 4(r26)
/* 801BAE0C 001B7D4C  D0 5A 00 08 */	stfs f2, 8(r26)
/* 801BAE10 001B7D50  80 63 00 34 */	lwz r3, 0x34(r3)
/* 801BAE14 001B7D54  D3 81 00 10 */	stfs f28, 0x10(r1)
/* 801BAE18 001B7D58  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801BAE1C 001B7D5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BAE20 001B7D60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BAE24 001B7D64  7D 89 03 A6 */	mtctr r12
/* 801BAE28 001B7D68  4E 80 04 21 */	bctrl 
/* 801BAE2C 001B7D6C  80 94 00 34 */	lwz r4, 0x34(r20)
/* 801BAE30 001B7D70  3B A1 00 44 */	addi r29, r1, 0x44
/* 801BAE34 001B7D74  3B 81 00 34 */	addi r28, r1, 0x34
/* 801BAE38 001B7D78  7C 78 1B 78 */	mr r24, r3
/* 801BAE3C 001B7D7C  80 84 00 18 */	lwz r4, 0x18(r4)
/* 801BAE40 001B7D80  82 E4 00 18 */	lwz r23, 0x18(r4)
/* 801BAE44 001B7D84  48 00 01 F4 */	b .L_801BB038
.L_801BAE48:
/* 801BAE48 001B7D88  3A C0 00 00 */	li r22, 0
/* 801BAE4C 001B7D8C  3B C0 00 00 */	li r30, 0
/* 801BAE50 001B7D90  48 00 01 D8 */	b .L_801BB028
.L_801BAE54:
/* 801BAE54 001B7D94  80 74 00 34 */	lwz r3, 0x34(r20)
/* 801BAE58 001B7D98  38 00 00 00 */	li r0, 0
/* 801BAE5C 001B7D9C  80 98 00 24 */	lwz r4, 0x24(r24)
/* 801BAE60 001B7DA0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801BAE64 001B7DA4  7F 64 F0 2E */	lwzx r27, r4, r30
/* 801BAE68 001B7DA8  80 83 00 1C */	lwz r4, 0x1c(r3)
/* 801BAE6C 001B7DAC  1C 7B 00 60 */	mulli r3, r27, 0x60
/* 801BAE70 001B7DB0  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801BAE74 001B7DB4  98 01 00 30 */	stb r0, 0x30(r1)
/* 801BAE78 001B7DB8  7F E4 1A 14 */	add r31, r4, r3
/* 801BAE7C 001B7DBC  D3 41 00 14 */	stfs f26, 0x14(r1)
/* 801BAE80 001B7DC0  D3 61 00 18 */	stfs f27, 0x18(r1)
/* 801BAE84 001B7DC4  D3 81 00 1C */	stfs f28, 0x1c(r1)
/* 801BAE88 001B7DC8  C0 1A 00 00 */	lfs f0, 0(r26)
/* 801BAE8C 001B7DCC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801BAE90 001B7DD0  C0 1A 00 04 */	lfs f0, 4(r26)
/* 801BAE94 001B7DD4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801BAE98 001B7DD8  C0 1A 00 08 */	lfs f0, 8(r26)
/* 801BAE9C 001B7DDC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801BAEA0 001B7DE0  C0 1A 00 0C */	lfs f0, 0xc(r26)
/* 801BAEA4 001B7DE4  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801BAEA8 001B7DE8  88 15 00 19 */	lbz r0, 0x19(r21)
/* 801BAEAC 001B7DEC  28 00 00 00 */	cmplwi r0, 0
/* 801BAEB0 001B7DF0  41 82 00 0C */	beq .L_801BAEBC
/* 801BAEB4 001B7DF4  38 00 00 01 */	li r0, 1
/* 801BAEB8 001B7DF8  98 01 00 30 */	stb r0, 0x30(r1)
.L_801BAEBC:
/* 801BAEBC 001B7DFC  7F E3 FB 78 */	mr r3, r31
/* 801BAEC0 001B7E00  7E E4 BB 78 */	mr r4, r23
/* 801BAEC4 001B7E04  38 A1 00 14 */	addi r5, r1, 0x14
/* 801BAEC8 001B7E08  48 26 1B 05 */	bl intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ33Sys8Triangle11SphereSweep
/* 801BAECC 001B7E0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BAED0 001B7E10  41 82 01 48 */	beq .L_801BB018
/* 801BAED4 001B7E14  80 74 00 3C */	lwz r3, 0x3c(r20)
/* 801BAED8 001B7E18  57 60 10 3A */	slwi r0, r27, 2
/* 801BAEDC 001B7E1C  7C 03 00 2E */	lwzx r0, r3, r0
/* 801BAEE0 001B7E20  90 15 00 98 */	stw r0, 0x98(r21)
/* 801BAEE4 001B7E24  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 801BAEE8 001B7E28  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 801BAEEC 001B7E2C  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801BAEF0 001B7E30  C3 FC 00 00 */	lfs f31, 0(r28)
/* 801BAEF4 001B7E34  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801BAEF8 001B7E38  C3 C1 00 38 */	lfs f30, 0x38(r1)
/* 801BAEFC 001B7E3C  80 75 00 10 */	lwz r3, 0x10(r21)
/* 801BAF00 001B7E40  C3 A1 00 3C */	lfs f29, 0x3c(r1)
/* 801BAF04 001B7E44  28 03 00 00 */	cmplwi r3, 0
/* 801BAF08 001B7E48  41 82 00 1C */	beq .L_801BAF24
/* 801BAF0C 001B7E4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BAF10 001B7E50  7F A4 EB 78 */	mr r4, r29
/* 801BAF14 001B7E54  7F 85 E3 78 */	mr r5, r28
/* 801BAF18 001B7E58  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BAF1C 001B7E5C  7D 89 03 A6 */	mtctr r12
/* 801BAF20 001B7E60  4E 80 04 21 */	bctrl 
.L_801BAF24:
/* 801BAF24 001B7E64  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 801BAF28 001B7E68  C0 15 00 30 */	lfs f0, 0x30(r21)
/* 801BAF2C 001B7E6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BAF30 001B7E70  4C 41 13 82 */	cror 2, 1, 2
/* 801BAF34 001B7E74  40 82 00 24 */	bne .L_801BAF58
/* 801BAF38 001B7E78  93 F5 00 44 */	stw r31, 0x44(r21)
/* 801BAF3C 001B7E7C  C0 1C 00 00 */	lfs f0, 0(r28)
/* 801BAF40 001B7E80  D0 15 00 50 */	stfs f0, 0x50(r21)
/* 801BAF44 001B7E84  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 801BAF48 001B7E88  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 801BAF4C 001B7E8C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 801BAF50 001B7E90  D0 15 00 58 */	stfs f0, 0x58(r21)
/* 801BAF54 001B7E94  48 00 00 38 */	b .L_801BAF8C
.L_801BAF58:
/* 801BAF58 001B7E98  FC 20 0A 10 */	fabs f1, f1
/* 801BAF5C 001B7E9C  C0 15 00 2C */	lfs f0, 0x2c(r21)
/* 801BAF60 001B7EA0  FC 20 08 18 */	frsp f1, f1
/* 801BAF64 001B7EA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BAF68 001B7EA8  4C 40 13 82 */	cror 2, 0, 2
/* 801BAF6C 001B7EAC  40 82 00 20 */	bne .L_801BAF8C
/* 801BAF70 001B7EB0  93 F5 00 48 */	stw r31, 0x48(r21)
/* 801BAF74 001B7EB4  C0 1C 00 00 */	lfs f0, 0(r28)
/* 801BAF78 001B7EB8  D0 15 00 5C */	stfs f0, 0x5c(r21)
/* 801BAF7C 001B7EBC  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 801BAF80 001B7EC0  D0 15 00 60 */	stfs f0, 0x60(r21)
/* 801BAF84 001B7EC4  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 801BAF88 001B7EC8  D0 15 00 64 */	stfs f0, 0x64(r21)
.L_801BAF8C:
/* 801BAF8C 001B7ECC  C0 81 00 38 */	lfs f4, 0x38(r1)
/* 801BAF90 001B7ED0  C0 F9 00 04 */	lfs f7, 4(r25)
/* 801BAF94 001B7ED4  C0 BC 00 00 */	lfs f5, 0(r28)
/* 801BAF98 001B7ED8  EC 04 01 F2 */	fmuls f0, f4, f7
/* 801BAF9C 001B7EDC  C1 19 00 00 */	lfs f8, 0(r25)
/* 801BAFA0 001B7EE0  C0 61 00 3C */	lfs f3, 0x3c(r1)
/* 801BAFA4 001B7EE4  C0 D9 00 08 */	lfs f6, 8(r25)
/* 801BAFA8 001B7EE8  EC 45 02 3A */	fmadds f2, f5, f8, f0
/* 801BAFAC 001B7EEC  C0 22 B0 F8 */	lfs f1, lbl_80519458@sda21(r2)
/* 801BAFB0 001B7EF0  C0 15 00 08 */	lfs f0, 8(r21)
/* 801BAFB4 001B7EF4  EC 43 11 BA */	fmadds f2, f3, f6, f2
/* 801BAFB8 001B7EF8  EC 01 00 2A */	fadds f0, f1, f0
/* 801BAFBC 001B7EFC  EC 40 00 B2 */	fmuls f2, f0, f2
/* 801BAFC0 001B7F00  EC 25 00 B2 */	fmuls f1, f5, f2
/* 801BAFC4 001B7F04  EC 04 00 B2 */	fmuls f0, f4, f2
/* 801BAFC8 001B7F08  EC 63 00 B2 */	fmuls f3, f3, f2
/* 801BAFCC 001B7F0C  EC 48 08 28 */	fsubs f2, f8, f1
/* 801BAFD0 001B7F10  EC 27 00 28 */	fsubs f1, f7, f0
/* 801BAFD4 001B7F14  EC 06 18 28 */	fsubs f0, f6, f3
/* 801BAFD8 001B7F18  D0 59 00 00 */	stfs f2, 0(r25)
/* 801BAFDC 001B7F1C  D0 39 00 04 */	stfs f1, 4(r25)
/* 801BAFE0 001B7F20  D0 19 00 08 */	stfs f0, 8(r25)
/* 801BAFE4 001B7F24  C0 81 00 40 */	lfs f4, 0x40(r1)
/* 801BAFE8 001B7F28  C0 3A 00 00 */	lfs f1, 0(r26)
/* 801BAFEC 001B7F2C  EC 1F 01 32 */	fmuls f0, f31, f4
/* 801BAFF0 001B7F30  C0 7A 00 04 */	lfs f3, 4(r26)
/* 801BAFF4 001B7F34  EC 5E 01 32 */	fmuls f2, f30, f4
/* 801BAFF8 001B7F38  C0 BA 00 08 */	lfs f5, 8(r26)
/* 801BAFFC 001B7F3C  EC 9D 01 32 */	fmuls f4, f29, f4
/* 801BB000 001B7F40  EC 01 00 2A */	fadds f0, f1, f0
/* 801BB004 001B7F44  EC 23 10 2A */	fadds f1, f3, f2
/* 801BB008 001B7F48  EC 45 20 2A */	fadds f2, f5, f4
/* 801BB00C 001B7F4C  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801BB010 001B7F50  D0 3A 00 04 */	stfs f1, 4(r26)
/* 801BB014 001B7F54  D0 5A 00 08 */	stfs f2, 8(r26)
.L_801BB018:
/* 801BB018 001B7F58  38 00 00 00 */	li r0, 0
/* 801BB01C 001B7F5C  3A D6 00 01 */	addi r22, r22, 1
/* 801BB020 001B7F60  98 0D 9A D0 */	stb r0, debug__Q23Sys8Triangle@sda21(r13)
/* 801BB024 001B7F64  3B DE 00 04 */	addi r30, r30, 4
.L_801BB028:
/* 801BB028 001B7F68  80 18 00 1C */	lwz r0, 0x1c(r24)
/* 801BB02C 001B7F6C  7C 16 00 00 */	cmpw r22, r0
/* 801BB030 001B7F70  41 80 FE 24 */	blt .L_801BAE54
/* 801BB034 001B7F74  83 18 00 04 */	lwz r24, 4(r24)
.L_801BB038:
/* 801BB038 001B7F78  28 18 00 00 */	cmplwi r24, 0
/* 801BB03C 001B7F7C  40 82 FE 0C */	bne .L_801BAE48
/* 801BB040 001B7F80  38 60 00 00 */	li r3, 0
/* 801BB044 001B7F84  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 801BB048 001B7F88  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 801BB04C 001B7F8C  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 801BB050 001B7F90  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 801BB054 001B7F94  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 801BB058 001B7F98  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 801BB05C 001B7F9C  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 801BB060 001B7FA0  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 801BB064 001B7FA4  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 801BB068 001B7FA8  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 801BB06C 001B7FAC  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 801BB070 001B7FB0  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 801BB074 001B7FB4  BA 81 00 50 */	lmw r20, 0x50(r1)
/* 801BB078 001B7FB8  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 801BB07C 001B7FBC  7C 08 03 A6 */	mtlr r0
/* 801BB080 001B7FC0  38 21 00 E0 */	addi r1, r1, 0xe0
/* 801BB084 001B7FC4  4E 80 00 20 */	blr 
.endfn traceMove_new__Q24Game10RoomMapMgrFRQ24Game8MoveInfof

.fn traceMove_original__Q24Game10RoomMapMgrFRQ24Game8MoveInfof, global
/* 801BB088 001B7FC8  94 21 FE B0 */	stwu r1, -0x150(r1)
/* 801BB08C 001B7FCC  7C 08 02 A6 */	mflr r0
/* 801BB090 001B7FD0  3C C0 80 4B */	lis r6, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BB094 001B7FD4  38 A0 00 00 */	li r5, 0
/* 801BB098 001B7FD8  90 01 01 54 */	stw r0, 0x154(r1)
/* 801BB09C 001B7FDC  38 C6 5D 28 */	addi r6, r6, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BB0A0 001B7FE0  38 03 00 AC */	addi r0, r3, 0xac
/* 801BB0A4 001B7FE4  BD C1 01 08 */	stmw r14, 0x108(r1)
/* 801BB0A8 001B7FE8  7C 8F 23 78 */	mr r15, r4
/* 801BB0AC 001B7FEC  3A 80 00 00 */	li r20, 0
/* 801BB0B0 001B7FF0  90 C1 00 38 */	stw r6, 0x38(r1)
/* 801BB0B4 001B7FF4  90 A1 00 44 */	stw r5, 0x44(r1)
/* 801BB0B8 001B7FF8  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 801BB0BC 001B7FFC  90 01 00 40 */	stw r0, 0x40(r1)
/* 801BB0C0 001B8000  80 04 00 04 */	lwz r0, 4(r4)
/* 801BB0C4 001B8004  82 64 00 00 */	lwz r19, 0(r4)
/* 801BB0C8 001B8008  7C 03 03 78 */	mr r3, r0
/* 801BB0CC 001B800C  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801BB0D0 001B8010  C0 03 00 00 */	lfs f0, 0(r3)
/* 801BB0D4 001B8014  C0 63 00 04 */	lfs f3, 4(r3)
/* 801BB0D8 001B8018  EC 00 00 72 */	fmuls f0, f0, f1
/* 801BB0DC 001B801C  C0 53 00 00 */	lfs f2, 0(r19)
/* 801BB0E0 001B8020  C0 A3 00 08 */	lfs f5, 8(r3)
/* 801BB0E4 001B8024  EC 63 00 72 */	fmuls f3, f3, f1
/* 801BB0E8 001B8028  C0 93 00 04 */	lfs f4, 4(r19)
/* 801BB0EC 001B802C  EC 02 00 2A */	fadds f0, f2, f0
/* 801BB0F0 001B8030  EC 25 00 72 */	fmuls f1, f5, f1
/* 801BB0F4 001B8034  C0 B3 00 08 */	lfs f5, 8(r19)
/* 801BB0F8 001B8038  EC 44 18 2A */	fadds f2, f4, f3
/* 801BB0FC 001B803C  D0 13 00 00 */	stfs f0, 0(r19)
/* 801BB100 001B8040  EC 25 08 2A */	fadds f1, f5, f1
/* 801BB104 001B8044  D0 53 00 04 */	stfs f2, 4(r19)
/* 801BB108 001B8048  D0 33 00 08 */	stfs f1, 8(r19)
/* 801BB10C 001B804C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801BB110 001B8050  28 00 00 00 */	cmplwi r0, 0
/* 801BB114 001B8054  40 82 00 20 */	bne .L_801BB134
/* 801BB118 001B8058  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BB11C 001B805C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB120 001B8060  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BB124 001B8064  7D 89 03 A6 */	mtctr r12
/* 801BB128 001B8068  4E 80 04 21 */	bctrl 
/* 801BB12C 001B806C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801BB130 001B8070  48 00 00 90 */	b .L_801BB1C0
.L_801BB134:
/* 801BB134 001B8074  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BB138 001B8078  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB13C 001B807C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BB140 001B8080  7D 89 03 A6 */	mtctr r12
/* 801BB144 001B8084  4E 80 04 21 */	bctrl 
/* 801BB148 001B8088  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801BB14C 001B808C  48 00 00 58 */	b .L_801BB1A4
.L_801BB150:
/* 801BB150 001B8090  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BB154 001B8094  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BB158 001B8098  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB15C 001B809C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BB160 001B80A0  7D 89 03 A6 */	mtctr r12
/* 801BB164 001B80A4  4E 80 04 21 */	bctrl 
/* 801BB168 001B80A8  7C 64 1B 78 */	mr r4, r3
/* 801BB16C 001B80AC  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BB170 001B80B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB174 001B80B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BB178 001B80B8  7D 89 03 A6 */	mtctr r12
/* 801BB17C 001B80BC  4E 80 04 21 */	bctrl 
/* 801BB180 001B80C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BB184 001B80C4  40 82 00 3C */	bne .L_801BB1C0
/* 801BB188 001B80C8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BB18C 001B80CC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BB190 001B80D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB194 001B80D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BB198 001B80D8  7D 89 03 A6 */	mtctr r12
/* 801BB19C 001B80DC  4E 80 04 21 */	bctrl 
/* 801BB1A0 001B80E0  90 61 00 3C */	stw r3, 0x3c(r1)
.L_801BB1A4:
/* 801BB1A4 001B80E4  81 81 00 38 */	lwz r12, 0x38(r1)
/* 801BB1A8 001B80E8  38 61 00 38 */	addi r3, r1, 0x38
/* 801BB1AC 001B80EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BB1B0 001B80F0  7D 89 03 A6 */	mtctr r12
/* 801BB1B4 001B80F4  4E 80 04 21 */	bctrl 
/* 801BB1B8 001B80F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BB1BC 001B80FC  41 82 FF 94 */	beq .L_801BB150
.L_801BB1C0:
/* 801BB1C0 001B8100  38 01 00 68 */	addi r0, r1, 0x68
/* 801BB1C4 001B8104  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 801BB1C8 001B8108  38 01 00 88 */	addi r0, r1, 0x88
/* 801BB1CC 001B810C  90 01 00 FC */	stw r0, 0xfc(r1)
/* 801BB1D0 001B8110  38 01 00 48 */	addi r0, r1, 0x48
/* 801BB1D4 001B8114  81 C1 00 F8 */	lwz r14, 0xf8(r1)
/* 801BB1D8 001B8118  7C 15 03 78 */	mr r21, r0
/* 801BB1DC 001B811C  90 01 01 00 */	stw r0, 0x100(r1)
/* 801BB1E0 001B8120  82 C1 00 FC */	lwz r22, 0xfc(r1)
/* 801BB1E4 001B8124  48 00 03 C8 */	b .L_801BB5AC
.L_801BB1E8:
/* 801BB1E8 001B8128  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BB1EC 001B812C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB1F0 001B8130  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BB1F4 001B8134  7D 89 03 A6 */	mtctr r12
/* 801BB1F8 001B8138  4E 80 04 21 */	bctrl 
/* 801BB1FC 001B813C  7C 7F 1B 78 */	mr r31, r3
/* 801BB200 001B8140  C0 13 00 08 */	lfs f0, 8(r19)
/* 801BB204 001B8144  C0 23 01 48 */	lfs f1, 0x148(r3)
/* 801BB208 001B8148  C0 63 01 40 */	lfs f3, 0x140(r3)
/* 801BB20C 001B814C  EC 81 00 28 */	fsubs f4, f1, f0
/* 801BB210 001B8150  C0 13 00 00 */	lfs f0, 0(r19)
/* 801BB214 001B8154  C0 43 01 4C */	lfs f2, 0x14c(r3)
/* 801BB218 001B8158  C0 33 00 0C */	lfs f1, 0xc(r19)
/* 801BB21C 001B815C  EC 63 00 28 */	fsubs f3, f3, f0
/* 801BB220 001B8160  EC 04 01 32 */	fmuls f0, f4, f4
/* 801BB224 001B8164  EC 42 08 2A */	fadds f2, f2, f1
/* 801BB228 001B8168  EC 23 00 FA */	fmadds f1, f3, f3, f0
/* 801BB22C 001B816C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 801BB230 001B8170  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BB234 001B8174  41 81 02 BC */	bgt .L_801BB4F0
/* 801BB238 001B8178  80 1F 01 38 */	lwz r0, 0x138(r31)
/* 801BB23C 001B817C  7E 64 9B 78 */	mr r4, r19
/* 801BB240 001B8180  38 7F 01 08 */	addi r3, r31, 0x108
/* 801BB244 001B8184  38 A1 00 20 */	addi r5, r1, 0x20
/* 801BB248 001B8188  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 801BB24C 001B818C  4B F2 F9 8D */	bl PSMTXMultVec
/* 801BB250 001B8190  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801BB254 001B8194  7E 64 9B 78 */	mr r4, r19
/* 801BB258 001B8198  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 801BB25C 001B819C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 801BB260 001B81A0  80 61 00 F0 */	lwz r3, 0xf0(r1)
/* 801BB264 001B81A4  D0 13 00 00 */	stfs f0, 0(r19)
/* 801BB268 001B81A8  D0 33 00 04 */	stfs f1, 4(r19)
/* 801BB26C 001B81AC  D0 53 00 08 */	stfs f2, 8(r19)
/* 801BB270 001B81B0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801BB274 001B81B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB278 001B81B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BB27C 001B81BC  7D 89 03 A6 */	mtctr r12
/* 801BB280 001B81C0  4E 80 04 21 */	bctrl 
/* 801BB284 001B81C4  7D D9 73 78 */	mr r25, r14
/* 801BB288 001B81C8  7E D8 B3 78 */	mr r24, r22
/* 801BB28C 001B81CC  7C 72 1B 78 */	mr r18, r3
/* 801BB290 001B81D0  7E B7 AB 78 */	mr r23, r21
/* 801BB294 001B81D4  48 00 02 24 */	b .L_801BB4B8
.L_801BB298:
/* 801BB298 001B81D8  80 61 00 F0 */	lwz r3, 0xf0(r1)
/* 801BB29C 001B81DC  7F 3C CB 78 */	mr r28, r25
/* 801BB2A0 001B81E0  7F 1B C3 78 */	mr r27, r24
/* 801BB2A4 001B81E4  7E FA BB 78 */	mr r26, r23
/* 801BB2A8 001B81E8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801BB2AC 001B81EC  3A 00 00 00 */	li r16, 0
/* 801BB2B0 001B81F0  3B A0 00 00 */	li r29, 0
/* 801BB2B4 001B81F4  82 23 00 18 */	lwz r17, 0x18(r3)
/* 801BB2B8 001B81F8  48 00 01 F0 */	b .L_801BB4A8
.L_801BB2BC:
/* 801BB2BC 001B81FC  80 61 00 F0 */	lwz r3, 0xf0(r1)
/* 801BB2C0 001B8200  80 92 00 24 */	lwz r4, 0x24(r18)
/* 801BB2C4 001B8204  80 A3 00 28 */	lwz r5, 0x28(r3)
/* 801BB2C8 001B8208  7C 64 E8 2E */	lwzx r3, r4, r29
/* 801BB2CC 001B820C  80 85 00 1C */	lwz r4, 0x1c(r5)
/* 801BB2D0 001B8210  88 0F 00 19 */	lbz r0, 0x19(r15)
/* 801BB2D4 001B8214  1C 63 00 60 */	mulli r3, r3, 0x60
/* 801BB2D8 001B8218  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801BB2DC 001B821C  28 00 00 00 */	cmplwi r0, 0
/* 801BB2E0 001B8220  7F C4 1A 14 */	add r30, r4, r3
/* 801BB2E4 001B8224  41 82 00 1C */	beq .L_801BB300
/* 801BB2E8 001B8228  7F C3 F3 78 */	mr r3, r30
/* 801BB2EC 001B822C  7E 24 8B 78 */	mr r4, r17
/* 801BB2F0 001B8230  7E 65 9B 78 */	mr r5, r19
/* 801BB2F4 001B8234  38 CF 00 84 */	addi r6, r15, 0x84
/* 801BB2F8 001B8238  48 25 C5 99 */	bl "intersectHard__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<f>"
/* 801BB2FC 001B823C  48 00 00 18 */	b .L_801BB314
.L_801BB300:
/* 801BB300 001B8240  7F C3 F3 78 */	mr r3, r30
/* 801BB304 001B8244  7E 24 8B 78 */	mr r4, r17
/* 801BB308 001B8248  7E 65 9B 78 */	mr r5, r19
/* 801BB30C 001B824C  38 CF 00 84 */	addi r6, r15, 0x84
/* 801BB310 001B8250  48 25 C2 89 */	bl "intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<f>"
.L_801BB314:
/* 801BB314 001B8254  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BB318 001B8258  41 82 01 80 */	beq .L_801BB498
/* 801BB31C 001B825C  38 7F 00 D8 */	addi r3, r31, 0xd8
/* 801BB320 001B8260  38 8F 00 84 */	addi r4, r15, 0x84
/* 801BB324 001B8264  38 A1 00 14 */	addi r5, r1, 0x14
/* 801BB328 001B8268  4B F2 F8 B1 */	bl PSMTXMultVec
/* 801BB32C 001B826C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801BB330 001B8270  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 801BB334 001B8274  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801BB338 001B8278  D0 0F 00 84 */	stfs f0, 0x84(r15)
/* 801BB33C 001B827C  D0 2F 00 88 */	stfs f1, 0x88(r15)
/* 801BB340 001B8280  D0 4F 00 8C */	stfs f2, 0x8c(r15)
/* 801BB344 001B8284  C1 1E 00 0C */	lfs f8, 0xc(r30)
/* 801BB348 001B8288  D1 01 00 2C */	stfs f8, 0x2c(r1)
/* 801BB34C 001B828C  C0 FE 00 10 */	lfs f7, 0x10(r30)
/* 801BB350 001B8290  D0 E1 00 30 */	stfs f7, 0x30(r1)
/* 801BB354 001B8294  C0 DE 00 14 */	lfs f6, 0x14(r30)
/* 801BB358 001B8298  D0 C1 00 34 */	stfs f6, 0x34(r1)
/* 801BB35C 001B829C  C0 5F 01 18 */	lfs f2, 0x118(r31)
/* 801BB360 001B82A0  C0 3F 01 1C */	lfs f1, 0x11c(r31)
/* 801BB364 001B82A4  C0 1F 01 20 */	lfs f0, 0x120(r31)
/* 801BB368 001B82A8  EC 87 00 B2 */	fmuls f4, f7, f2
/* 801BB36C 001B82AC  C0 BF 01 08 */	lfs f5, 0x108(r31)
/* 801BB370 001B82B0  EC 47 00 72 */	fmuls f2, f7, f1
/* 801BB374 001B82B4  C0 7F 01 0C */	lfs f3, 0x10c(r31)
/* 801BB378 001B82B8  EC 07 00 32 */	fmuls f0, f7, f0
/* 801BB37C 001B82BC  C0 3F 01 10 */	lfs f1, 0x110(r31)
/* 801BB380 001B82C0  EC 88 21 7A */	fmadds f4, f8, f5, f4
/* 801BB384 001B82C4  C0 BF 01 28 */	lfs f5, 0x128(r31)
/* 801BB388 001B82C8  EC 48 10 FA */	fmadds f2, f8, f3, f2
/* 801BB38C 001B82CC  C0 7F 01 2C */	lfs f3, 0x12c(r31)
/* 801BB390 001B82D0  EC 08 00 7A */	fmadds f0, f8, f1, f0
/* 801BB394 001B82D4  C0 3F 01 30 */	lfs f1, 0x130(r31)
/* 801BB398 001B82D8  EC 86 21 7A */	fmadds f4, f6, f5, f4
/* 801BB39C 001B82DC  EC 46 10 FA */	fmadds f2, f6, f3, f2
/* 801BB3A0 001B82E0  EC 06 00 7A */	fmadds f0, f6, f1, f0
/* 801BB3A4 001B82E4  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 801BB3A8 001B82E8  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 801BB3AC 001B82EC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801BB3B0 001B82F0  80 6F 00 10 */	lwz r3, 0x10(r15)
/* 801BB3B4 001B82F4  28 03 00 00 */	cmplwi r3, 0
/* 801BB3B8 001B82F8  41 82 00 1C */	beq .L_801BB3D4
/* 801BB3BC 001B82FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB3C0 001B8300  38 8F 00 84 */	addi r4, r15, 0x84
/* 801BB3C4 001B8304  38 A1 00 2C */	addi r5, r1, 0x2c
/* 801BB3C8 001B8308  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BB3CC 001B830C  7D 89 03 A6 */	mtctr r12
/* 801BB3D0 001B8310  4E 80 04 21 */	bctrl 
.L_801BB3D4:
/* 801BB3D4 001B8314  2C 14 00 08 */	cmpwi r20, 8
/* 801BB3D8 001B8318  40 80 00 C0 */	bge .L_801BB498
/* 801BB3DC 001B831C  41 80 00 20 */	blt .L_801BB3FC
/* 801BB3E0 001B8320  3C 60 80 48 */	lis r3, lbl_8047FCF4@ha
/* 801BB3E4 001B8324  3C A0 80 48 */	lis r5, lbl_8047FEEC@ha
/* 801BB3E8 001B8328  38 63 FC F4 */	addi r3, r3, lbl_8047FCF4@l
/* 801BB3EC 001B832C  38 80 0B 28 */	li r4, 0xb28
/* 801BB3F0 001B8330  38 A5 FE EC */	addi r5, r5, lbl_8047FEEC@l
/* 801BB3F4 001B8334  4C C6 31 82 */	crclr 6
/* 801BB3F8 001B8338  4B E6 F2 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801BB3FC:
/* 801BB3FC 001B833C  C0 33 00 04 */	lfs f1, 4(r19)
/* 801BB400 001B8340  38 00 00 01 */	li r0, 1
/* 801BB404 001B8344  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 801BB408 001B8348  3B 39 00 04 */	addi r25, r25, 4
/* 801BB40C 001B834C  C1 21 00 2C */	lfs f9, 0x2c(r1)
/* 801BB410 001B8350  3B 18 00 0C */	addi r24, r24, 0xc
/* 801BB414 001B8354  EC 01 00 32 */	fmuls f0, f1, f0
/* 801BB418 001B8358  C0 73 00 00 */	lfs f3, 0(r19)
/* 801BB41C 001B835C  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 801BB420 001B8360  3A F7 00 04 */	addi r23, r23, 4
/* 801BB424 001B8364  C1 01 00 30 */	lfs f8, 0x30(r1)
/* 801BB428 001B8368  39 CE 00 04 */	addi r14, r14, 4
/* 801BB42C 001B836C  C0 E1 00 34 */	lfs f7, 0x34(r1)
/* 801BB430 001B8370  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 801BB434 001B8374  C0 D3 00 0C */	lfs f6, 0xc(r19)
/* 801BB438 001B8378  3A D6 00 0C */	addi r22, r22, 0xc
/* 801BB43C 001B837C  C0 B3 00 08 */	lfs f5, 8(r19)
/* 801BB440 001B8380  3A B5 00 04 */	addi r21, r21, 4
/* 801BB444 001B8384  C0 9E 00 14 */	lfs f4, 0x14(r30)
/* 801BB448 001B8388  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 801BB44C 001B838C  3A 94 00 01 */	addi r20, r20, 1
/* 801BB450 001B8390  EC 45 01 3A */	fmadds f2, f5, f4, f0
/* 801BB454 001B8394  D1 3B 00 00 */	stfs f9, 0(r27)
/* 801BB458 001B8398  98 0F 00 74 */	stb r0, 0x74(r15)
/* 801BB45C 001B839C  EC 22 08 28 */	fsubs f1, f2, f1
/* 801BB460 001B83A0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 801BB464 001B83A4  D1 1B 00 04 */	stfs f8, 4(r27)
/* 801BB468 001B83A8  EC 26 08 28 */	fsubs f1, f6, f1
/* 801BB46C 001B83AC  D0 0F 00 78 */	stfs f0, 0x78(r15)
/* 801BB470 001B83B0  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 801BB474 001B83B4  93 DC 00 00 */	stw r30, 0(r28)
/* 801BB478 001B83B8  3B 9C 00 04 */	addi r28, r28, 4
/* 801BB47C 001B83BC  D0 0F 00 7C */	stfs f0, 0x7c(r15)
/* 801BB480 001B83C0  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 801BB484 001B83C4  D0 FB 00 08 */	stfs f7, 8(r27)
/* 801BB488 001B83C8  3B 7B 00 0C */	addi r27, r27, 0xc
/* 801BB48C 001B83CC  D0 3A 00 00 */	stfs f1, 0(r26)
/* 801BB490 001B83D0  3B 5A 00 04 */	addi r26, r26, 4
/* 801BB494 001B83D4  D0 0F 00 80 */	stfs f0, 0x80(r15)
.L_801BB498:
/* 801BB498 001B83D8  38 00 00 00 */	li r0, 0
/* 801BB49C 001B83DC  3A 10 00 01 */	addi r16, r16, 1
/* 801BB4A0 001B83E0  98 0D 9A D0 */	stb r0, debug__Q23Sys8Triangle@sda21(r13)
/* 801BB4A4 001B83E4  3B BD 00 04 */	addi r29, r29, 4
.L_801BB4A8:
/* 801BB4A8 001B83E8  80 12 00 1C */	lwz r0, 0x1c(r18)
/* 801BB4AC 001B83EC  7C 10 00 00 */	cmpw r16, r0
/* 801BB4B0 001B83F0  41 80 FE 0C */	blt .L_801BB2BC
/* 801BB4B4 001B83F4  82 52 00 04 */	lwz r18, 4(r18)
.L_801BB4B8:
/* 801BB4B8 001B83F8  28 12 00 00 */	cmplwi r18, 0
/* 801BB4BC 001B83FC  41 82 00 0C */	beq .L_801BB4C8
/* 801BB4C0 001B8400  2C 14 00 08 */	cmpwi r20, 8
/* 801BB4C4 001B8404  41 80 FD D4 */	blt .L_801BB298
.L_801BB4C8:
/* 801BB4C8 001B8408  7E 64 9B 78 */	mr r4, r19
/* 801BB4CC 001B840C  38 7F 00 D8 */	addi r3, r31, 0xd8
/* 801BB4D0 001B8410  38 A1 00 08 */	addi r5, r1, 8
/* 801BB4D4 001B8414  4B F2 F7 05 */	bl PSMTXMultVec
/* 801BB4D8 001B8418  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801BB4DC 001B841C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801BB4E0 001B8420  C0 01 00 08 */	lfs f0, 8(r1)
/* 801BB4E4 001B8424  D0 13 00 00 */	stfs f0, 0(r19)
/* 801BB4E8 001B8428  D0 33 00 04 */	stfs f1, 4(r19)
/* 801BB4EC 001B842C  D0 53 00 08 */	stfs f2, 8(r19)
.L_801BB4F0:
/* 801BB4F0 001B8430  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801BB4F4 001B8434  28 00 00 00 */	cmplwi r0, 0
/* 801BB4F8 001B8438  40 82 00 24 */	bne .L_801BB51C
/* 801BB4FC 001B843C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BB500 001B8440  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BB504 001B8444  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB508 001B8448  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BB50C 001B844C  7D 89 03 A6 */	mtctr r12
/* 801BB510 001B8450  4E 80 04 21 */	bctrl 
/* 801BB514 001B8454  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801BB518 001B8458  48 00 00 94 */	b .L_801BB5AC
.L_801BB51C:
/* 801BB51C 001B845C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BB520 001B8460  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BB524 001B8464  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB528 001B8468  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BB52C 001B846C  7D 89 03 A6 */	mtctr r12
/* 801BB530 001B8470  4E 80 04 21 */	bctrl 
/* 801BB534 001B8474  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801BB538 001B8478  48 00 00 58 */	b .L_801BB590
.L_801BB53C:
/* 801BB53C 001B847C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BB540 001B8480  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BB544 001B8484  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB548 001B8488  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BB54C 001B848C  7D 89 03 A6 */	mtctr r12
/* 801BB550 001B8490  4E 80 04 21 */	bctrl 
/* 801BB554 001B8494  7C 64 1B 78 */	mr r4, r3
/* 801BB558 001B8498  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BB55C 001B849C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB560 001B84A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BB564 001B84A4  7D 89 03 A6 */	mtctr r12
/* 801BB568 001B84A8  4E 80 04 21 */	bctrl 
/* 801BB56C 001B84AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BB570 001B84B0  40 82 00 3C */	bne .L_801BB5AC
/* 801BB574 001B84B4  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BB578 001B84B8  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BB57C 001B84BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB580 001B84C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BB584 001B84C4  7D 89 03 A6 */	mtctr r12
/* 801BB588 001B84C8  4E 80 04 21 */	bctrl 
/* 801BB58C 001B84CC  90 61 00 3C */	stw r3, 0x3c(r1)
.L_801BB590:
/* 801BB590 001B84D0  81 81 00 38 */	lwz r12, 0x38(r1)
/* 801BB594 001B84D4  38 61 00 38 */	addi r3, r1, 0x38
/* 801BB598 001B84D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BB59C 001B84DC  7D 89 03 A6 */	mtctr r12
/* 801BB5A0 001B84E0  4E 80 04 21 */	bctrl 
/* 801BB5A4 001B84E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BB5A8 001B84E8  41 82 FF 94 */	beq .L_801BB53C
.L_801BB5AC:
/* 801BB5AC 001B84EC  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BB5B0 001B84F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB5B4 001B84F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BB5B8 001B84F8  7D 89 03 A6 */	mtctr r12
/* 801BB5BC 001B84FC  4E 80 04 21 */	bctrl 
/* 801BB5C0 001B8500  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BB5C4 001B8504  7C 04 18 40 */	cmplw r4, r3
/* 801BB5C8 001B8508  40 82 FC 20 */	bne .L_801BB1E8
/* 801BB5CC 001B850C  2C 14 00 00 */	cmpwi r20, 0
/* 801BB5D0 001B8510  40 82 00 0C */	bne .L_801BB5DC
/* 801BB5D4 001B8514  38 60 00 00 */	li r3, 0
/* 801BB5D8 001B8518  48 00 01 DC */	b .L_801BB7B4
.L_801BB5DC:
/* 801BB5DC 001B851C  C0 A2 B0 E0 */	lfs f5, lbl_80519440@sda21(r2)
/* 801BB5E0 001B8520  38 80 00 00 */	li r4, 0
/* 801BB5E4 001B8524  FC C0 28 90 */	fmr f6, f5
/* 801BB5E8 001B8528  FC E0 28 90 */	fmr f7, f5
/* 801BB5EC 001B852C  FC 40 28 90 */	fmr f2, f5
/* 801BB5F0 001B8530  FC 80 28 90 */	fmr f4, f5
/* 801BB5F4 001B8534  7E 89 03 A6 */	mtctr r20
/* 801BB5F8 001B8538  40 81 00 84 */	ble .L_801BB67C
/* 801BB5FC 001B853C  C0 02 B1 20 */	lfs f0, lbl_80519480@sda21(r2)
.L_801BB600:
/* 801BB600 001B8540  80 61 01 00 */	lwz r3, 0x100(r1)
/* 801BB604 001B8544  C0 23 00 00 */	lfs f1, 0(r3)
/* 801BB608 001B8548  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 801BB60C 001B854C  41 80 00 48 */	blt .L_801BB654
/* 801BB610 001B8550  80 61 00 FC */	lwz r3, 0xfc(r1)
/* 801BB614 001B8554  EC 42 08 2A */	fadds f2, f2, f1
/* 801BB618 001B8558  38 84 00 01 */	addi r4, r4, 1
/* 801BB61C 001B855C  C1 03 00 04 */	lfs f8, 4(r3)
/* 801BB620 001B8560  C0 63 00 00 */	lfs f3, 0(r3)
/* 801BB624 001B8564  C0 23 00 08 */	lfs f1, 8(r3)
/* 801BB628 001B8568  EC C6 40 2A */	fadds f6, f6, f8
/* 801BB62C 001B856C  FC 08 00 40 */	fcmpo cr0, f8, f0
/* 801BB630 001B8570  EC A5 18 2A */	fadds f5, f5, f3
/* 801BB634 001B8574  EC E7 08 2A */	fadds f7, f7, f1
/* 801BB638 001B8578  40 81 00 1C */	ble .L_801BB654
/* 801BB63C 001B857C  80 61 00 F8 */	lwz r3, 0xf8(r1)
/* 801BB640 001B8580  80 03 00 00 */	lwz r0, 0(r3)
/* 801BB644 001B8584  90 0F 00 44 */	stw r0, 0x44(r15)
/* 801BB648 001B8588  D0 6F 00 50 */	stfs f3, 0x50(r15)
/* 801BB64C 001B858C  D1 0F 00 54 */	stfs f8, 0x54(r15)
/* 801BB650 001B8590  D0 2F 00 58 */	stfs f1, 0x58(r15)
.L_801BB654:
/* 801BB654 001B8594  80 61 01 00 */	lwz r3, 0x100(r1)
/* 801BB658 001B8598  38 63 00 04 */	addi r3, r3, 4
/* 801BB65C 001B859C  90 61 01 00 */	stw r3, 0x100(r1)
/* 801BB660 001B85A0  80 61 00 FC */	lwz r3, 0xfc(r1)
/* 801BB664 001B85A4  38 63 00 0C */	addi r3, r3, 0xc
/* 801BB668 001B85A8  90 61 00 FC */	stw r3, 0xfc(r1)
/* 801BB66C 001B85AC  80 61 00 F8 */	lwz r3, 0xf8(r1)
/* 801BB670 001B85B0  38 63 00 04 */	addi r3, r3, 4
/* 801BB674 001B85B4  90 61 00 F8 */	stw r3, 0xf8(r1)
/* 801BB678 001B85B8  42 00 FF 88 */	bdnz .L_801BB600
.L_801BB67C:
/* 801BB67C 001B85BC  2C 04 00 00 */	cmpwi r4, 0
/* 801BB680 001B85C0  40 82 00 0C */	bne .L_801BB68C
/* 801BB684 001B85C4  38 60 00 00 */	li r3, 0
/* 801BB688 001B85C8  48 00 01 2C */	b .L_801BB7B4
.L_801BB68C:
/* 801BB68C 001B85CC  6C 83 80 00 */	xoris r3, r4, 0x8000
/* 801BB690 001B85D0  3C 00 43 30 */	lis r0, 0x4330
/* 801BB694 001B85D4  90 61 00 EC */	stw r3, 0xec(r1)
/* 801BB698 001B85D8  C8 22 B1 10 */	lfd f1, lbl_80519470@sda21(r2)
/* 801BB69C 001B85DC  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 801BB6A0 001B85E0  C0 82 B0 F8 */	lfs f4, lbl_80519458@sda21(r2)
/* 801BB6A4 001B85E4  C8 01 00 E8 */	lfd f0, 0xe8(r1)
/* 801BB6A8 001B85E8  C0 62 B0 E0 */	lfs f3, lbl_80519440@sda21(r2)
/* 801BB6AC 001B85EC  EC 00 08 28 */	fsubs f0, f0, f1
/* 801BB6B0 001B85F0  EC 84 00 24 */	fdivs f4, f4, f0
/* 801BB6B4 001B85F4  EC 06 01 32 */	fmuls f0, f6, f4
/* 801BB6B8 001B85F8  EC 27 01 32 */	fmuls f1, f7, f4
/* 801BB6BC 001B85FC  ED 65 01 32 */	fmuls f11, f5, f4
/* 801BB6C0 001B8600  EC 80 00 32 */	fmuls f4, f0, f0
/* 801BB6C4 001B8604  EC A1 00 72 */	fmuls f5, f1, f1
/* 801BB6C8 001B8608  EC 8B 22 FA */	fmadds f4, f11, f11, f4
/* 801BB6CC 001B860C  EC 85 20 2A */	fadds f4, f5, f4
/* 801BB6D0 001B8610  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 801BB6D4 001B8614  40 81 00 14 */	ble .L_801BB6E8
/* 801BB6D8 001B8618  40 81 00 14 */	ble .L_801BB6EC
/* 801BB6DC 001B861C  FC 60 20 34 */	frsqrte f3, f4
/* 801BB6E0 001B8620  EC 83 01 32 */	fmuls f4, f3, f4
/* 801BB6E4 001B8624  48 00 00 08 */	b .L_801BB6EC
.L_801BB6E8:
/* 801BB6E8 001B8628  FC 80 18 90 */	fmr f4, f3
.L_801BB6EC:
/* 801BB6EC 001B862C  C0 62 B0 E0 */	lfs f3, lbl_80519440@sda21(r2)
/* 801BB6F0 001B8630  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 801BB6F4 001B8634  40 81 00 18 */	ble .L_801BB70C
/* 801BB6F8 001B8638  C0 62 B0 F8 */	lfs f3, lbl_80519458@sda21(r2)
/* 801BB6FC 001B863C  EC 63 20 24 */	fdivs f3, f3, f4
/* 801BB700 001B8640  ED 6B 00 F2 */	fmuls f11, f11, f3
/* 801BB704 001B8644  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801BB708 001B8648  EC 21 00 F2 */	fmuls f1, f1, f3
.L_801BB70C:
/* 801BB70C 001B864C  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 801BB710 001B8650  3C 00 43 30 */	lis r0, 0x4330
/* 801BB714 001B8654  90 81 00 EC */	stw r4, 0xec(r1)
/* 801BB718 001B8658  80 61 00 F4 */	lwz r3, 0xf4(r1)
/* 801BB71C 001B865C  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 801BB720 001B8660  C8 C2 B1 10 */	lfd f6, lbl_80519470@sda21(r2)
/* 801BB724 001B8664  C8 81 00 E8 */	lfd f4, 0xe8(r1)
/* 801BB728 001B8668  C1 23 00 04 */	lfs f9, 4(r3)
/* 801BB72C 001B866C  EC C4 30 28 */	fsubs f6, f4, f6
/* 801BB730 001B8670  C1 43 00 00 */	lfs f10, 0(r3)
/* 801BB734 001B8674  EC 60 02 72 */	fmuls f3, f0, f9
/* 801BB738 001B8678  80 81 00 F4 */	lwz r4, 0xf4(r1)
/* 801BB73C 001B867C  C0 82 B0 F8 */	lfs f4, lbl_80519458@sda21(r2)
/* 801BB740 001B8680  38 60 00 00 */	li r3, 0
/* 801BB744 001B8684  EC 42 30 24 */	fdivs f2, f2, f6
/* 801BB748 001B8688  C1 04 00 08 */	lfs f8, 8(r4)
/* 801BB74C 001B868C  EC AB 1A BA */	fmadds f5, f11, f10, f3
/* 801BB750 001B8690  C0 6F 00 08 */	lfs f3, 8(r15)
/* 801BB754 001B8694  EC E1 2A 3A */	fmadds f7, f1, f8, f5
/* 801BB758 001B8698  EC A4 18 2A */	fadds f5, f4, f3
/* 801BB75C 001B869C  EC 80 00 B2 */	fmuls f4, f0, f2
/* 801BB760 001B86A0  EC 6B 00 B2 */	fmuls f3, f11, f2
/* 801BB764 001B86A4  EC C5 01 F2 */	fmuls f6, f5, f7
/* 801BB768 001B86A8  EC 41 00 B2 */	fmuls f2, f1, f2
/* 801BB76C 001B86AC  EC AB 01 B2 */	fmuls f5, f11, f6
/* 801BB770 001B86B0  EC 00 01 B2 */	fmuls f0, f0, f6
/* 801BB774 001B86B4  EC C1 01 B2 */	fmuls f6, f1, f6
/* 801BB778 001B86B8  EC AA 28 28 */	fsubs f5, f10, f5
/* 801BB77C 001B86BC  EC 29 00 28 */	fsubs f1, f9, f0
/* 801BB780 001B86C0  EC 08 30 28 */	fsubs f0, f8, f6
/* 801BB784 001B86C4  D0 A4 00 00 */	stfs f5, 0(r4)
/* 801BB788 001B86C8  D0 24 00 04 */	stfs f1, 4(r4)
/* 801BB78C 001B86CC  D0 04 00 08 */	stfs f0, 8(r4)
/* 801BB790 001B86D0  C0 13 00 00 */	lfs f0, 0(r19)
/* 801BB794 001B86D4  C0 33 00 04 */	lfs f1, 4(r19)
/* 801BB798 001B86D8  C0 B3 00 08 */	lfs f5, 8(r19)
/* 801BB79C 001B86DC  EC 00 18 2A */	fadds f0, f0, f3
/* 801BB7A0 001B86E0  EC 21 20 2A */	fadds f1, f1, f4
/* 801BB7A4 001B86E4  EC 45 10 2A */	fadds f2, f5, f2
/* 801BB7A8 001B86E8  D0 13 00 00 */	stfs f0, 0(r19)
/* 801BB7AC 001B86EC  D0 33 00 04 */	stfs f1, 4(r19)
/* 801BB7B0 001B86F0  D0 53 00 08 */	stfs f2, 8(r19)
.L_801BB7B4:
/* 801BB7B4 001B86F4  B9 C1 01 08 */	lmw r14, 0x108(r1)
/* 801BB7B8 001B86F8  80 01 01 54 */	lwz r0, 0x154(r1)
/* 801BB7BC 001B86FC  7C 08 03 A6 */	mtlr r0
/* 801BB7C0 001B8700  38 21 01 50 */	addi r1, r1, 0x150
/* 801BB7C4 001B8704  4E 80 00 20 */	blr 
.endfn traceMove_original__Q24Game10RoomMapMgrFRQ24Game8MoveInfof

.fn findRayIntersection__Q24Game10RoomMapMgrFRQ23Sys16RayIntersectInfo, global
/* 801BB7C8 001B8708  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 801BB7CC 001B870C  7C 08 02 A6 */	mflr r0
/* 801BB7D0 001B8710  90 01 01 64 */	stw r0, 0x164(r1)
/* 801BB7D4 001B8714  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 801BB7D8 001B8718  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 801BB7DC 001B871C  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 801BB7E0 001B8720  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 801BB7E4 001B8724  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 801BB7E8 001B8728  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 801BB7EC 001B872C  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 801BB7F0 001B8730  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 801BB7F4 001B8734  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 801BB7F8 001B8738  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 801BB7FC 001B873C  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 801BB800 001B8740  F3 41 01 08 */	psq_st f26, 264(r1), 0, qr0
/* 801BB804 001B8744  DB 21 00 F0 */	stfd f25, 0xf0(r1)
/* 801BB808 001B8748  F3 21 00 F8 */	psq_st f25, 248(r1), 0, qr0
/* 801BB80C 001B874C  DB 01 00 E0 */	stfd f24, 0xe0(r1)
/* 801BB810 001B8750  F3 01 00 E8 */	psq_st f24, 232(r1), 0, qr0
/* 801BB814 001B8754  DA E1 00 D0 */	stfd f23, 0xd0(r1)
/* 801BB818 001B8758  F2 E1 00 D8 */	psq_st f23, 216(r1), 0, qr0
/* 801BB81C 001B875C  DA C1 00 C0 */	stfd f22, 0xc0(r1)
/* 801BB820 001B8760  F2 C1 00 C8 */	psq_st f22, 200(r1), 0, qr0
/* 801BB824 001B8764  DA A1 00 B0 */	stfd f21, 0xb0(r1)
/* 801BB828 001B8768  F2 A1 00 B8 */	psq_st f21, 184(r1), 0, qr0
/* 801BB82C 001B876C  BF 01 00 90 */	stmw r24, 0x90(r1)
/* 801BB830 001B8770  3C C0 80 4B */	lis r6, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BB834 001B8774  38 A0 00 00 */	li r5, 0
/* 801BB838 001B8778  38 C6 5D 28 */	addi r6, r6, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BB83C 001B877C  38 03 00 AC */	addi r0, r3, 0xac
/* 801BB840 001B8780  90 C1 00 60 */	stw r6, 0x60(r1)
/* 801BB844 001B8784  7C 9E 23 78 */	mr r30, r4
/* 801BB848 001B8788  C0 82 B0 FC */	lfs f4, lbl_8051945C@sda21(r2)
/* 801BB84C 001B878C  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 801BB850 001B8790  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801BB854 001B8794  90 A1 00 64 */	stw r5, 0x64(r1)
/* 801BB858 001B8798  90 01 00 68 */	stw r0, 0x68(r1)
/* 801BB85C 001B879C  C0 44 00 00 */	lfs f2, 0(r4)
/* 801BB860 001B87A0  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 801BB864 001B87A4  C0 24 00 04 */	lfs f1, 4(r4)
/* 801BB868 001B87A8  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 801BB86C 001B87AC  C0 64 00 08 */	lfs f3, 8(r4)
/* 801BB870 001B87B0  D0 61 00 5C */	stfs f3, 0x5c(r1)
/* 801BB874 001B87B4  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 801BB878 001B87B8  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801BB87C 001B87BC  EC 22 08 2A */	fadds f1, f2, f1
/* 801BB880 001B87C0  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 801BB884 001B87C4  EF C1 01 32 */	fmuls f30, f1, f4
/* 801BB888 001B87C8  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 801BB88C 001B87CC  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 801BB890 001B87D0  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 801BB894 001B87D4  EC 63 08 2A */	fadds f3, f3, f1
/* 801BB898 001B87D8  C0 44 00 04 */	lfs f2, 4(r4)
/* 801BB89C 001B87DC  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 801BB8A0 001B87E0  EF A3 01 32 */	fmuls f29, f3, f4
/* 801BB8A4 001B87E4  C0 84 00 00 */	lfs f4, 0(r4)
/* 801BB8A8 001B87E8  EC A2 08 28 */	fsubs f5, f2, f1
/* 801BB8AC 001B87EC  C0 64 00 0C */	lfs f3, 0xc(r4)
/* 801BB8B0 001B87F0  C0 44 00 08 */	lfs f2, 8(r4)
/* 801BB8B4 001B87F4  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 801BB8B8 001B87F8  EC 64 18 28 */	fsubs f3, f4, f3
/* 801BB8BC 001B87FC  EC 85 01 72 */	fmuls f4, f5, f5
/* 801BB8C0 001B8800  EC 42 08 28 */	fsubs f2, f2, f1
/* 801BB8C4 001B8804  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 801BB8C8 001B8808  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801BB8CC 001B880C  EF E2 08 2A */	fadds f31, f2, f1
/* 801BB8D0 001B8810  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801BB8D4 001B8814  40 81 00 14 */	ble .L_801BB8E8
/* 801BB8D8 001B8818  40 81 00 14 */	ble .L_801BB8EC
/* 801BB8DC 001B881C  FC 00 F8 34 */	frsqrte f0, f31
/* 801BB8E0 001B8820  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801BB8E4 001B8824  48 00 00 08 */	b .L_801BB8EC
.L_801BB8E8:
/* 801BB8E8 001B8828  FF E0 00 90 */	fmr f31, f0
.L_801BB8EC:
/* 801BB8EC 001B882C  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 801BB8F0 001B8830  3B E0 00 00 */	li r31, 0
/* 801BB8F4 001B8834  C2 C2 B1 24 */	lfs f22, lbl_80519484@sda21(r2)
/* 801BB8F8 001B8838  28 00 00 00 */	cmplwi r0, 0
/* 801BB8FC 001B883C  40 82 00 20 */	bne .L_801BB91C
/* 801BB900 001B8840  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801BB904 001B8844  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB908 001B8848  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BB90C 001B884C  7D 89 03 A6 */	mtctr r12
/* 801BB910 001B8850  4E 80 04 21 */	bctrl 
/* 801BB914 001B8854  90 61 00 64 */	stw r3, 0x64(r1)
/* 801BB918 001B8858  48 00 03 04 */	b .L_801BBC1C
.L_801BB91C:
/* 801BB91C 001B885C  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801BB920 001B8860  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB924 001B8864  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BB928 001B8868  7D 89 03 A6 */	mtctr r12
/* 801BB92C 001B886C  4E 80 04 21 */	bctrl 
/* 801BB930 001B8870  90 61 00 64 */	stw r3, 0x64(r1)
/* 801BB934 001B8874  48 00 00 58 */	b .L_801BB98C
.L_801BB938:
/* 801BB938 001B8878  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801BB93C 001B887C  80 81 00 64 */	lwz r4, 0x64(r1)
/* 801BB940 001B8880  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB944 001B8884  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BB948 001B8888  7D 89 03 A6 */	mtctr r12
/* 801BB94C 001B888C  4E 80 04 21 */	bctrl 
/* 801BB950 001B8890  7C 64 1B 78 */	mr r4, r3
/* 801BB954 001B8894  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 801BB958 001B8898  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB95C 001B889C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BB960 001B88A0  7D 89 03 A6 */	mtctr r12
/* 801BB964 001B88A4  4E 80 04 21 */	bctrl 
/* 801BB968 001B88A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BB96C 001B88AC  40 82 02 B0 */	bne .L_801BBC1C
/* 801BB970 001B88B0  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801BB974 001B88B4  80 81 00 64 */	lwz r4, 0x64(r1)
/* 801BB978 001B88B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB97C 001B88BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BB980 001B88C0  7D 89 03 A6 */	mtctr r12
/* 801BB984 001B88C4  4E 80 04 21 */	bctrl 
/* 801BB988 001B88C8  90 61 00 64 */	stw r3, 0x64(r1)
.L_801BB98C:
/* 801BB98C 001B88CC  81 81 00 60 */	lwz r12, 0x60(r1)
/* 801BB990 001B88D0  38 61 00 60 */	addi r3, r1, 0x60
/* 801BB994 001B88D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BB998 001B88D8  7D 89 03 A6 */	mtctr r12
/* 801BB99C 001B88DC  4E 80 04 21 */	bctrl 
/* 801BB9A0 001B88E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BB9A4 001B88E4  41 82 FF 94 */	beq .L_801BB938
/* 801BB9A8 001B88E8  48 00 02 74 */	b .L_801BBC1C
.L_801BB9AC:
/* 801BB9AC 001B88EC  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801BB9B0 001B88F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BB9B4 001B88F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BB9B8 001B88F8  7D 89 03 A6 */	mtctr r12
/* 801BB9BC 001B88FC  4E 80 04 21 */	bctrl 
/* 801BB9C0 001B8900  7C 7D 1B 78 */	mr r29, r3
/* 801BB9C4 001B8904  C0 03 01 48 */	lfs f0, 0x148(r3)
/* 801BB9C8 001B8908  C0 23 01 40 */	lfs f1, 0x140(r3)
/* 801BB9CC 001B890C  EC 7D 00 28 */	fsubs f3, f29, f0
/* 801BB9D0 001B8910  C0 03 01 4C */	lfs f0, 0x14c(r3)
/* 801BB9D4 001B8914  EC 5E 08 28 */	fsubs f2, f30, f1
/* 801BB9D8 001B8918  EC 00 F8 2A */	fadds f0, f0, f31
/* 801BB9DC 001B891C  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801BB9E0 001B8920  EC 00 00 32 */	fmuls f0, f0, f0
/* 801BB9E4 001B8924  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801BB9E8 001B8928  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BB9EC 001B892C  41 81 01 74 */	bgt .L_801BBB60
/* 801BB9F0 001B8930  83 5D 01 38 */	lwz r26, 0x138(r29)
/* 801BB9F4 001B8934  38 7D 01 08 */	addi r3, r29, 0x108
/* 801BB9F8 001B8938  38 81 00 54 */	addi r4, r1, 0x54
/* 801BB9FC 001B893C  38 A1 00 20 */	addi r5, r1, 0x20
/* 801BBA00 001B8940  4B F2 F1 D9 */	bl PSMTXMultVec
/* 801BBA04 001B8944  C3 81 00 20 */	lfs f28, 0x20(r1)
/* 801BBA08 001B8948  38 7D 01 08 */	addi r3, r29, 0x108
/* 801BBA0C 001B894C  C3 61 00 24 */	lfs f27, 0x24(r1)
/* 801BBA10 001B8950  38 81 00 48 */	addi r4, r1, 0x48
/* 801BBA14 001B8954  C3 41 00 28 */	lfs f26, 0x28(r1)
/* 801BBA18 001B8958  38 A1 00 14 */	addi r5, r1, 0x14
/* 801BBA1C 001B895C  4B F2 F1 BD */	bl PSMTXMultVec
/* 801BBA20 001B8960  C0 A1 00 18 */	lfs f5, 0x18(r1)
/* 801BBA24 001B8964  38 81 00 38 */	addi r4, r1, 0x38
/* 801BBA28 001B8968  C0 C1 00 1C */	lfs f6, 0x1c(r1)
/* 801BBA2C 001B896C  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 801BBA30 001B8970  EC 3B 28 2A */	fadds f1, f27, f5
/* 801BBA34 001B8974  C0 42 B0 FC */	lfs f2, lbl_8051945C@sda21(r2)
/* 801BBA38 001B8978  EC 1A 30 2A */	fadds f0, f26, f6
/* 801BBA3C 001B897C  EC 7C 20 2A */	fadds f3, f28, f4
/* 801BBA40 001B8980  D3 81 00 70 */	stfs f28, 0x70(r1)
/* 801BBA44 001B8984  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801BBA48 001B8988  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801BBA4C 001B898C  D3 61 00 74 */	stfs f27, 0x74(r1)
/* 801BBA50 001B8990  EC 43 00 B2 */	fmuls f2, f3, f2
/* 801BBA54 001B8994  D3 41 00 78 */	stfs f26, 0x78(r1)
/* 801BBA58 001B8998  D0 81 00 7C */	stfs f4, 0x7c(r1)
/* 801BBA5C 001B899C  D0 A1 00 80 */	stfs f5, 0x80(r1)
/* 801BBA60 001B89A0  D0 C1 00 84 */	stfs f6, 0x84(r1)
/* 801BBA64 001B89A4  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 801BBA68 001B89A8  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801BBA6C 001B89AC  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 801BBA70 001B89B0  D3 E1 00 44 */	stfs f31, 0x44(r1)
/* 801BBA74 001B89B4  80 7A 00 28 */	lwz r3, 0x28(r26)
/* 801BBA78 001B89B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBA7C 001B89BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BBA80 001B89C0  7D 89 03 A6 */	mtctr r12
/* 801BBA84 001B89C4  4E 80 04 21 */	bctrl 
/* 801BBA88 001B89C8  7C 79 1B 78 */	mr r25, r3
/* 801BBA8C 001B89CC  48 00 00 CC */	b .L_801BBB58
.L_801BBA90:
/* 801BBA90 001B89D0  3B 00 00 00 */	li r24, 0
/* 801BBA94 001B89D4  3B 60 00 00 */	li r27, 0
/* 801BBA98 001B89D8  48 00 00 B0 */	b .L_801BBB48
.L_801BBA9C:
/* 801BBA9C 001B89DC  80 99 00 24 */	lwz r4, 0x24(r25)
/* 801BBAA0 001B89E0  7F C3 F3 78 */	mr r3, r30
/* 801BBAA4 001B89E4  80 BA 00 28 */	lwz r5, 0x28(r26)
/* 801BBAA8 001B89E8  7C 04 D8 2E */	lwzx r0, r4, r27
/* 801BBAAC 001B89EC  80 85 00 1C */	lwz r4, 0x1c(r5)
/* 801BBAB0 001B89F0  1C 00 00 60 */	mulli r0, r0, 0x60
/* 801BBAB4 001B89F4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801BBAB8 001B89F8  7F 84 02 14 */	add r28, r4, r0
/* 801BBABC 001B89FC  7F 84 E3 78 */	mr r4, r28
/* 801BBAC0 001B8A00  48 25 C6 7D */	bl condition__Q23Sys16RayIntersectInfoFRQ23Sys8Triangle
/* 801BBAC4 001B8A04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BBAC8 001B8A08  41 82 00 78 */	beq .L_801BBB40
/* 801BBACC 001B8A0C  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 801BBAD0 001B8A10  7F 83 E3 78 */	mr r3, r28
/* 801BBAD4 001B8A14  38 81 00 70 */	addi r4, r1, 0x70
/* 801BBAD8 001B8A18  38 A1 00 2C */	addi r5, r1, 0x2c
/* 801BBADC 001B8A1C  48 25 B1 6D */	bl "intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<f>"
/* 801BBAE0 001B8A20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BBAE4 001B8A24  41 82 00 5C */	beq .L_801BBB40
/* 801BBAE8 001B8A28  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 801BBAEC 001B8A2C  3B E0 00 01 */	li r31, 1
/* 801BBAF0 001B8A30  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 801BBAF4 001B8A34  EC 61 D8 28 */	fsubs f3, f1, f27
/* 801BBAF8 001B8A38  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 801BBAFC 001B8A3C  EC 40 E0 28 */	fsubs f2, f0, f28
/* 801BBB00 001B8A40  EC 21 D0 28 */	fsubs f1, f1, f26
/* 801BBB04 001B8A44  EC 03 00 F2 */	fmuls f0, f3, f3
/* 801BBB08 001B8A48  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 801BBB0C 001B8A4C  EE A1 00 7A */	fmadds f21, f1, f1, f0
/* 801BBB10 001B8A50  FC 15 B0 40 */	fcmpo cr0, f21, f22
/* 801BBB14 001B8A54  40 80 00 2C */	bge .L_801BBB40
/* 801BBB18 001B8A58  38 7D 00 D8 */	addi r3, r29, 0xd8
/* 801BBB1C 001B8A5C  38 81 00 2C */	addi r4, r1, 0x2c
/* 801BBB20 001B8A60  38 A1 00 08 */	addi r5, r1, 8
/* 801BBB24 001B8A64  4B F2 F0 B5 */	bl PSMTXMultVec
/* 801BBB28 001B8A68  C3 21 00 08 */	lfs f25, 8(r1)
/* 801BBB2C 001B8A6C  FE C0 A8 90 */	fmr f22, f21
/* 801BBB30 001B8A70  C3 01 00 0C */	lfs f24, 0xc(r1)
/* 801BBB34 001B8A74  C2 E1 00 10 */	lfs f23, 0x10(r1)
/* 801BBB38 001B8A78  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 801BBB3C 001B8A7C  D0 1E 00 48 */	stfs f0, 0x48(r30)
.L_801BBB40:
/* 801BBB40 001B8A80  3B 7B 00 04 */	addi r27, r27, 4
/* 801BBB44 001B8A84  3B 18 00 01 */	addi r24, r24, 1
.L_801BBB48:
/* 801BBB48 001B8A88  80 19 00 1C */	lwz r0, 0x1c(r25)
/* 801BBB4C 001B8A8C  7C 18 00 00 */	cmpw r24, r0
/* 801BBB50 001B8A90  41 80 FF 4C */	blt .L_801BBA9C
/* 801BBB54 001B8A94  83 39 00 04 */	lwz r25, 4(r25)
.L_801BBB58:
/* 801BBB58 001B8A98  28 19 00 00 */	cmplwi r25, 0
/* 801BBB5C 001B8A9C  40 82 FF 34 */	bne .L_801BBA90
.L_801BBB60:
/* 801BBB60 001B8AA0  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 801BBB64 001B8AA4  28 00 00 00 */	cmplwi r0, 0
/* 801BBB68 001B8AA8  40 82 00 24 */	bne .L_801BBB8C
/* 801BBB6C 001B8AAC  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801BBB70 001B8AB0  80 81 00 64 */	lwz r4, 0x64(r1)
/* 801BBB74 001B8AB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBB78 001B8AB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BBB7C 001B8ABC  7D 89 03 A6 */	mtctr r12
/* 801BBB80 001B8AC0  4E 80 04 21 */	bctrl 
/* 801BBB84 001B8AC4  90 61 00 64 */	stw r3, 0x64(r1)
/* 801BBB88 001B8AC8  48 00 00 94 */	b .L_801BBC1C
.L_801BBB8C:
/* 801BBB8C 001B8ACC  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801BBB90 001B8AD0  80 81 00 64 */	lwz r4, 0x64(r1)
/* 801BBB94 001B8AD4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBB98 001B8AD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BBB9C 001B8ADC  7D 89 03 A6 */	mtctr r12
/* 801BBBA0 001B8AE0  4E 80 04 21 */	bctrl 
/* 801BBBA4 001B8AE4  90 61 00 64 */	stw r3, 0x64(r1)
/* 801BBBA8 001B8AE8  48 00 00 58 */	b .L_801BBC00
.L_801BBBAC:
/* 801BBBAC 001B8AEC  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801BBBB0 001B8AF0  80 81 00 64 */	lwz r4, 0x64(r1)
/* 801BBBB4 001B8AF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBBB8 001B8AF8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BBBBC 001B8AFC  7D 89 03 A6 */	mtctr r12
/* 801BBBC0 001B8B00  4E 80 04 21 */	bctrl 
/* 801BBBC4 001B8B04  7C 64 1B 78 */	mr r4, r3
/* 801BBBC8 001B8B08  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 801BBBCC 001B8B0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBBD0 001B8B10  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BBBD4 001B8B14  7D 89 03 A6 */	mtctr r12
/* 801BBBD8 001B8B18  4E 80 04 21 */	bctrl 
/* 801BBBDC 001B8B1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BBBE0 001B8B20  40 82 00 3C */	bne .L_801BBC1C
/* 801BBBE4 001B8B24  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801BBBE8 001B8B28  80 81 00 64 */	lwz r4, 0x64(r1)
/* 801BBBEC 001B8B2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBBF0 001B8B30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BBBF4 001B8B34  7D 89 03 A6 */	mtctr r12
/* 801BBBF8 001B8B38  4E 80 04 21 */	bctrl 
/* 801BBBFC 001B8B3C  90 61 00 64 */	stw r3, 0x64(r1)
.L_801BBC00:
/* 801BBC00 001B8B40  81 81 00 60 */	lwz r12, 0x60(r1)
/* 801BBC04 001B8B44  38 61 00 60 */	addi r3, r1, 0x60
/* 801BBC08 001B8B48  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BBC0C 001B8B4C  7D 89 03 A6 */	mtctr r12
/* 801BBC10 001B8B50  4E 80 04 21 */	bctrl 
/* 801BBC14 001B8B54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BBC18 001B8B58  41 82 FF 94 */	beq .L_801BBBAC
.L_801BBC1C:
/* 801BBC1C 001B8B5C  80 61 00 68 */	lwz r3, 0x68(r1)
/* 801BBC20 001B8B60  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBC24 001B8B64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BBC28 001B8B68  7D 89 03 A6 */	mtctr r12
/* 801BBC2C 001B8B6C  4E 80 04 21 */	bctrl 
/* 801BBC30 001B8B70  80 81 00 64 */	lwz r4, 0x64(r1)
/* 801BBC34 001B8B74  7C 04 18 40 */	cmplw r4, r3
/* 801BBC38 001B8B78  40 82 FD 74 */	bne .L_801BB9AC
/* 801BBC3C 001B8B7C  D3 3E 00 34 */	stfs f25, 0x34(r30)
/* 801BBC40 001B8B80  7F E3 FB 78 */	mr r3, r31
/* 801BBC44 001B8B84  D3 1E 00 38 */	stfs f24, 0x38(r30)
/* 801BBC48 001B8B88  D2 FE 00 3C */	stfs f23, 0x3c(r30)
/* 801BBC4C 001B8B8C  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 801BBC50 001B8B90  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 801BBC54 001B8B94  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 801BBC58 001B8B98  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 801BBC5C 001B8B9C  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 801BBC60 001B8BA0  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 801BBC64 001B8BA4  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 801BBC68 001B8BA8  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 801BBC6C 001B8BAC  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 801BBC70 001B8BB0  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 801BBC74 001B8BB4  E3 41 01 08 */	psq_l f26, 264(r1), 0, qr0
/* 801BBC78 001B8BB8  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 801BBC7C 001B8BBC  E3 21 00 F8 */	psq_l f25, 248(r1), 0, qr0
/* 801BBC80 001B8BC0  CB 21 00 F0 */	lfd f25, 0xf0(r1)
/* 801BBC84 001B8BC4  E3 01 00 E8 */	psq_l f24, 232(r1), 0, qr0
/* 801BBC88 001B8BC8  CB 01 00 E0 */	lfd f24, 0xe0(r1)
/* 801BBC8C 001B8BCC  E2 E1 00 D8 */	psq_l f23, 216(r1), 0, qr0
/* 801BBC90 001B8BD0  CA E1 00 D0 */	lfd f23, 0xd0(r1)
/* 801BBC94 001B8BD4  E2 C1 00 C8 */	psq_l f22, 200(r1), 0, qr0
/* 801BBC98 001B8BD8  CA C1 00 C0 */	lfd f22, 0xc0(r1)
/* 801BBC9C 001B8BDC  E2 A1 00 B8 */	psq_l f21, 184(r1), 0, qr0
/* 801BBCA0 001B8BE0  CA A1 00 B0 */	lfd f21, 0xb0(r1)
/* 801BBCA4 001B8BE4  BB 01 00 90 */	lmw r24, 0x90(r1)
/* 801BBCA8 001B8BE8  80 01 01 64 */	lwz r0, 0x164(r1)
/* 801BBCAC 001B8BEC  7C 08 03 A6 */	mtlr r0
/* 801BBCB0 001B8BF0  38 21 01 60 */	addi r1, r1, 0x160
/* 801BBCB4 001B8BF4  4E 80 00 20 */	blr 
.endfn findRayIntersection__Q24Game10RoomMapMgrFRQ23Sys16RayIntersectInfo

.fn "getMinY__Q24Game10RoomMapMgrFR10Vector3<f>", global
/* 801BBCB8 001B8BF8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801BBCBC 001B8BFC  7C 08 02 A6 */	mflr r0
/* 801BBCC0 001B8C00  C0 22 B0 E0 */	lfs f1, lbl_80519440@sda21(r2)
/* 801BBCC4 001B8C04  38 A0 00 00 */	li r5, 0
/* 801BBCC8 001B8C08  90 01 00 44 */	stw r0, 0x44(r1)
/* 801BBCCC 001B8C0C  38 00 00 01 */	li r0, 1
/* 801BBCD0 001B8C10  C0 62 B0 F0 */	lfs f3, lbl_80519450@sda21(r2)
/* 801BBCD4 001B8C14  C0 42 B0 F4 */	lfs f2, lbl_80519454@sda21(r2)
/* 801BBCD8 001B8C18  C0 02 B0 F8 */	lfs f0, lbl_80519458@sda21(r2)
/* 801BBCDC 001B8C1C  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 801BBCE0 001B8C20  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 801BBCE4 001B8C24  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 801BBCE8 001B8C28  90 A1 00 18 */	stw r5, 0x18(r1)
/* 801BBCEC 001B8C2C  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 801BBCF0 001B8C30  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801BBCF4 001B8C34  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801BBCF8 001B8C38  98 01 00 14 */	stb r0, 0x14(r1)
/* 801BBCFC 001B8C3C  98 A1 00 15 */	stb r5, 0x15(r1)
/* 801BBD00 001B8C40  C0 04 00 00 */	lfs f0, 0(r4)
/* 801BBD04 001B8C44  D0 01 00 08 */	stfs f0, 8(r1)
/* 801BBD08 001B8C48  C0 04 00 04 */	lfs f0, 4(r4)
/* 801BBD0C 001B8C4C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801BBD10 001B8C50  C0 04 00 08 */	lfs f0, 8(r4)
/* 801BBD14 001B8C54  38 81 00 08 */	addi r4, r1, 8
/* 801BBD18 001B8C58  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801BBD1C 001B8C5C  98 A1 00 14 */	stb r5, 0x14(r1)
/* 801BBD20 001B8C60  81 83 00 04 */	lwz r12, 4(r3)
/* 801BBD24 001B8C64  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801BBD28 001B8C68  7D 89 03 A6 */	mtctr r12
/* 801BBD2C 001B8C6C  4E 80 04 21 */	bctrl 
/* 801BBD30 001B8C70  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801BBD34 001B8C74  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801BBD38 001B8C78  7C 08 03 A6 */	mtlr r0
/* 801BBD3C 001B8C7C  38 21 00 40 */	addi r1, r1, 0x40
/* 801BBD40 001B8C80  4E 80 00 20 */	blr 
.endfn "getMinY__Q24Game10RoomMapMgrFR10Vector3<f>"

.fn createTriangles__Q24Game10RoomMapMgrFRQ23Sys17CreateTriangleArg, global
/* 801BBD44 001B8C84  94 21 D3 30 */	stwu r1, -0x2cd0(r1)
/* 801BBD48 001B8C88  7C 08 02 A6 */	mflr r0
/* 801BBD4C 001B8C8C  90 01 2C D4 */	stw r0, 0x2cd4(r1)
/* 801BBD50 001B8C90  38 00 2C C8 */	li r0, 0x2cc8
/* 801BBD54 001B8C94  DB E1 2C C0 */	stfd f31, 0x2cc0(r1)
/* 801BBD58 001B8C98  13 E1 00 0E */	psq_stx f31, r1, r0, 0, qr0
/* 801BBD5C 001B8C9C  BD C1 2C 78 */	stmw r14, 0x2c78(r1)
/* 801BBD60 001B8CA0  7C 8F 23 78 */	mr r15, r4
/* 801BBD64 001B8CA4  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 801BBD68 001B8CA8  C3 EF 00 0C */	lfs f31, 0xc(r15)
/* 801BBD6C 001B8CAC  7C 6E 1B 78 */	mr r14, r3
/* 801BBD70 001B8CB0  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 801BBD74 001B8CB4  38 61 08 64 */	addi r3, r1, 0x864
/* 801BBD78 001B8CB8  38 A0 00 00 */	li r5, 0
/* 801BBD7C 001B8CBC  38 C0 00 0C */	li r6, 0xc
/* 801BBD80 001B8CC0  38 E0 03 00 */	li r7, 0x300
/* 801BBD84 001B8CC4  4B F0 5A B9 */	bl __construct_array
/* 801BBD88 001B8CC8  38 00 00 00 */	li r0, 0
/* 801BBD8C 001B8CCC  3C 60 80 4B */	lis r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BBD90 001B8CD0  38 83 5D 28 */	addi r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BBD94 001B8CD4  38 6E 00 AC */	addi r3, r14, 0xac
/* 801BBD98 001B8CD8  28 00 00 00 */	cmplwi r0, 0
/* 801BBD9C 001B8CDC  90 81 00 30 */	stw r4, 0x30(r1)
/* 801BBDA0 001B8CE0  3A 80 00 00 */	li r20, 0
/* 801BBDA4 001B8CE4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801BBDA8 001B8CE8  90 01 00 34 */	stw r0, 0x34(r1)
/* 801BBDAC 001B8CEC  90 61 00 38 */	stw r3, 0x38(r1)
/* 801BBDB0 001B8CF0  40 82 00 1C */	bne .L_801BBDCC
/* 801BBDB4 001B8CF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBDB8 001B8CF8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BBDBC 001B8CFC  7D 89 03 A6 */	mtctr r12
/* 801BBDC0 001B8D00  4E 80 04 21 */	bctrl 
/* 801BBDC4 001B8D04  90 61 00 34 */	stw r3, 0x34(r1)
/* 801BBDC8 001B8D08  48 00 00 8C */	b .L_801BBE54
.L_801BBDCC:
/* 801BBDCC 001B8D0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBDD0 001B8D10  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BBDD4 001B8D14  7D 89 03 A6 */	mtctr r12
/* 801BBDD8 001B8D18  4E 80 04 21 */	bctrl 
/* 801BBDDC 001B8D1C  90 61 00 34 */	stw r3, 0x34(r1)
/* 801BBDE0 001B8D20  48 00 00 58 */	b .L_801BBE38
.L_801BBDE4:
/* 801BBDE4 001B8D24  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BBDE8 001B8D28  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BBDEC 001B8D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBDF0 001B8D30  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BBDF4 001B8D34  7D 89 03 A6 */	mtctr r12
/* 801BBDF8 001B8D38  4E 80 04 21 */	bctrl 
/* 801BBDFC 001B8D3C  7C 64 1B 78 */	mr r4, r3
/* 801BBE00 001B8D40  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 801BBE04 001B8D44  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBE08 001B8D48  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BBE0C 001B8D4C  7D 89 03 A6 */	mtctr r12
/* 801BBE10 001B8D50  4E 80 04 21 */	bctrl 
/* 801BBE14 001B8D54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BBE18 001B8D58  40 82 00 3C */	bne .L_801BBE54
/* 801BBE1C 001B8D5C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BBE20 001B8D60  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BBE24 001B8D64  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBE28 001B8D68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BBE2C 001B8D6C  7D 89 03 A6 */	mtctr r12
/* 801BBE30 001B8D70  4E 80 04 21 */	bctrl 
/* 801BBE34 001B8D74  90 61 00 34 */	stw r3, 0x34(r1)
.L_801BBE38:
/* 801BBE38 001B8D78  81 81 00 30 */	lwz r12, 0x30(r1)
/* 801BBE3C 001B8D7C  38 61 00 30 */	addi r3, r1, 0x30
/* 801BBE40 001B8D80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BBE44 001B8D84  7D 89 03 A6 */	mtctr r12
/* 801BBE48 001B8D88  4E 80 04 21 */	bctrl 
/* 801BBE4C 001B8D8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BBE50 001B8D90  41 82 FF 94 */	beq .L_801BBDE4
.L_801BBE54:
/* 801BBE54 001B8D94  38 01 04 64 */	addi r0, r1, 0x464
/* 801BBE58 001B8D98  39 C1 00 64 */	addi r14, r1, 0x64
/* 801BBE5C 001B8D9C  90 01 2C 68 */	stw r0, 0x2c68(r1)
/* 801BBE60 001B8DA0  38 00 00 00 */	li r0, 0
/* 801BBE64 001B8DA4  90 01 2C 6C */	stw r0, 0x2c6c(r1)
/* 801BBE68 001B8DA8  48 00 04 2C */	b .L_801BC294
.L_801BBE6C:
/* 801BBE6C 001B8DAC  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BBE70 001B8DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBE74 001B8DB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BBE78 001B8DB8  7D 89 03 A6 */	mtctr r12
/* 801BBE7C 001B8DBC  4E 80 04 21 */	bctrl 
/* 801BBE80 001B8DC0  7C 7F 1B 78 */	mr r31, r3
/* 801BBE84 001B8DC4  C0 2F 00 08 */	lfs f1, 8(r15)
/* 801BBE88 001B8DC8  C0 43 01 98 */	lfs f2, 0x198(r3)
/* 801BBE8C 001B8DCC  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 801BBE90 001B8DD0  EC 62 08 28 */	fsubs f3, f2, f1
/* 801BBE94 001B8DD4  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 801BBE98 001B8DD8  C0 2F 00 00 */	lfs f1, 0(r15)
/* 801BBE9C 001B8DDC  EC 00 F8 2A */	fadds f0, f0, f31
/* 801BBEA0 001B8DE0  EC 42 08 28 */	fsubs f2, f2, f1
/* 801BBEA4 001B8DE4  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801BBEA8 001B8DE8  EC 00 00 32 */	fmuls f0, f0, f0
/* 801BBEAC 001B8DEC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801BBEB0 001B8DF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BBEB4 001B8DF4  41 81 03 24 */	bgt .L_801BC1D8
/* 801BBEB8 001B8DF8  80 1F 01 38 */	lwz r0, 0x138(r31)
/* 801BBEBC 001B8DFC  7D E4 7B 78 */	mr r4, r15
/* 801BBEC0 001B8E00  38 7F 01 08 */	addi r3, r31, 0x108
/* 801BBEC4 001B8E04  38 A1 00 14 */	addi r5, r1, 0x14
/* 801BBEC8 001B8E08  90 01 2C 64 */	stw r0, 0x2c64(r1)
/* 801BBECC 001B8E0C  4B F2 ED 0D */	bl PSMTXMultVec
/* 801BBED0 001B8E10  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801BBED4 001B8E14  38 81 00 20 */	addi r4, r1, 0x20
/* 801BBED8 001B8E18  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801BBEDC 001B8E1C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801BBEE0 001B8E20  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 801BBEE4 001B8E24  80 61 2C 64 */	lwz r3, 0x2c64(r1)
/* 801BBEE8 001B8E28  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 801BBEEC 001B8E2C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801BBEF0 001B8E30  D3 E1 00 2C */	stfs f31, 0x2c(r1)
/* 801BBEF4 001B8E34  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801BBEF8 001B8E38  81 83 00 00 */	lwz r12, 0(r3)
/* 801BBEFC 001B8E3C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BBF00 001B8E40  7D 89 03 A6 */	mtctr r12
/* 801BBF04 001B8E44  4E 80 04 21 */	bctrl 
/* 801BBF08 001B8E48  83 01 2C 6C */	lwz r24, 0x2c6c(r1)
/* 801BBF0C 001B8E4C  7C 73 1B 78 */	mr r19, r3
/* 801BBF10 001B8E50  82 E1 2C 68 */	lwz r23, 0x2c68(r1)
/* 801BBF14 001B8E54  7D D6 73 78 */	mr r22, r14
/* 801BBF18 001B8E58  48 00 02 B8 */	b .L_801BC1D0
.L_801BBF1C:
/* 801BBF1C 001B8E5C  7F 1B C3 78 */	mr r27, r24
/* 801BBF20 001B8E60  7E FA BB 78 */	mr r26, r23
/* 801BBF24 001B8E64  7E D9 B3 78 */	mr r25, r22
/* 801BBF28 001B8E68  3A 40 00 00 */	li r18, 0
/* 801BBF2C 001B8E6C  3B 80 00 00 */	li r28, 0
/* 801BBF30 001B8E70  48 00 02 90 */	b .L_801BC1C0
.L_801BBF34:
/* 801BBF34 001B8E74  80 61 2C 64 */	lwz r3, 0x2c64(r1)
/* 801BBF38 001B8E78  38 A1 00 20 */	addi r5, r1, 0x20
/* 801BBF3C 001B8E7C  80 93 00 24 */	lwz r4, 0x24(r19)
/* 801BBF40 001B8E80  80 C3 00 28 */	lwz r6, 0x28(r3)
/* 801BBF44 001B8E84  7C 04 E0 2E */	lwzx r0, r4, r28
/* 801BBF48 001B8E88  80 66 00 1C */	lwz r3, 0x1c(r6)
/* 801BBF4C 001B8E8C  1C 00 00 60 */	mulli r0, r0, 0x60
/* 801BBF50 001B8E90  82 26 00 18 */	lwz r17, 0x18(r6)
/* 801BBF54 001B8E94  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801BBF58 001B8E98  7E 24 8B 78 */	mr r4, r17
/* 801BBF5C 001B8E9C  7F C3 02 14 */	add r30, r3, r0
/* 801BBF60 001B8EA0  7F C3 F3 78 */	mr r3, r30
/* 801BBF64 001B8EA4  48 25 B3 89 */	bl intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6Sphere
/* 801BBF68 001B8EA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BBF6C 001B8EAC  41 82 02 4C */	beq .L_801BC1B8
/* 801BBF70 001B8EB0  3A A1 00 40 */	addi r21, r1, 0x40
/* 801BBF74 001B8EB4  7F DD F3 78 */	mr r29, r30
/* 801BBF78 001B8EB8  3A 00 00 00 */	li r16, 0
.L_801BBF7C:
/* 801BBF7C 001B8EBC  80 1D 00 00 */	lwz r0, 0(r29)
/* 801BBF80 001B8EC0  7E A4 AB 78 */	mr r4, r21
/* 801BBF84 001B8EC4  80 D1 00 24 */	lwz r6, 0x24(r17)
/* 801BBF88 001B8EC8  38 7F 00 D8 */	addi r3, r31, 0xd8
/* 801BBF8C 001B8ECC  1C 00 00 0C */	mulli r0, r0, 0xc
/* 801BBF90 001B8ED0  38 A1 00 08 */	addi r5, r1, 8
/* 801BBF94 001B8ED4  7C C6 02 14 */	add r6, r6, r0
/* 801BBF98 001B8ED8  C0 06 00 00 */	lfs f0, 0(r6)
/* 801BBF9C 001B8EDC  D0 15 00 00 */	stfs f0, 0(r21)
/* 801BBFA0 001B8EE0  C0 06 00 04 */	lfs f0, 4(r6)
/* 801BBFA4 001B8EE4  D0 15 00 04 */	stfs f0, 4(r21)
/* 801BBFA8 001B8EE8  C0 06 00 08 */	lfs f0, 8(r6)
/* 801BBFAC 001B8EEC  D0 15 00 08 */	stfs f0, 8(r21)
/* 801BBFB0 001B8EF0  4B F2 EC 29 */	bl PSMTXMultVec
/* 801BBFB4 001B8EF4  C0 01 00 08 */	lfs f0, 8(r1)
/* 801BBFB8 001B8EF8  3A 10 00 01 */	addi r16, r16, 1
/* 801BBFBC 001B8EFC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801BBFC0 001B8F00  2C 10 00 03 */	cmpwi r16, 3
/* 801BBFC4 001B8F04  D0 15 00 00 */	stfs f0, 0(r21)
/* 801BBFC8 001B8F08  3B BD 00 04 */	addi r29, r29, 4
/* 801BBFCC 001B8F0C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801BBFD0 001B8F10  D0 35 00 04 */	stfs f1, 4(r21)
/* 801BBFD4 001B8F14  D0 15 00 08 */	stfs f0, 8(r21)
/* 801BBFD8 001B8F18  3A B5 00 0C */	addi r21, r21, 0xc
/* 801BBFDC 001B8F1C  41 80 FF A0 */	blt .L_801BBF7C
/* 801BBFE0 001B8F20  38 61 04 64 */	addi r3, r1, 0x464
/* 801BBFE4 001B8F24  38 81 00 64 */	addi r4, r1, 0x64
/* 801BBFE8 001B8F28  38 A0 00 00 */	li r5, 0
/* 801BBFEC 001B8F2C  7E 89 03 A6 */	mtctr r20
/* 801BBFF0 001B8F30  2C 14 00 00 */	cmpwi r20, 0
/* 801BBFF4 001B8F34  40 81 00 2C */	ble .L_801BC020
.L_801BBFF8:
/* 801BBFF8 001B8F38  80 03 00 00 */	lwz r0, 0(r3)
/* 801BBFFC 001B8F3C  7C 1E 00 40 */	cmplw r30, r0
/* 801BC000 001B8F40  40 82 00 14 */	bne .L_801BC014
/* 801BC004 001B8F44  80 04 00 00 */	lwz r0, 0(r4)
/* 801BC008 001B8F48  7C 1F 00 40 */	cmplw r31, r0
/* 801BC00C 001B8F4C  40 82 00 08 */	bne .L_801BC014
/* 801BC010 001B8F50  38 A0 00 01 */	li r5, 1
.L_801BC014:
/* 801BC014 001B8F54  38 63 00 04 */	addi r3, r3, 4
/* 801BC018 001B8F58  38 84 00 04 */	addi r4, r4, 4
/* 801BC01C 001B8F5C  42 00 FF DC */	bdnz .L_801BBFF8
.L_801BC020:
/* 801BC020 001B8F60  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 801BC024 001B8F64  40 82 01 94 */	bne .L_801BC1B8
/* 801BC028 001B8F68  2C 14 01 00 */	cmpwi r20, 0x100
/* 801BC02C 001B8F6C  40 80 01 A0 */	bge .L_801BC1CC
/* 801BC030 001B8F70  C0 BE 00 10 */	lfs f5, 0x10(r30)
/* 801BC034 001B8F74  C0 3F 00 EC */	lfs f1, 0xec(r31)
/* 801BC038 001B8F78  C0 7F 00 E8 */	lfs f3, 0xe8(r31)
/* 801BC03C 001B8F7C  C0 1F 00 F0 */	lfs f0, 0xf0(r31)
/* 801BC040 001B8F80  EC 45 00 72 */	fmuls f2, f5, f1
/* 801BC044 001B8F84  C0 DE 00 0C */	lfs f6, 0xc(r30)
/* 801BC048 001B8F88  EC 85 00 F2 */	fmuls f4, f5, f3
/* 801BC04C 001B8F8C  C0 7F 00 DC */	lfs f3, 0xdc(r31)
/* 801BC050 001B8F90  EC 05 00 32 */	fmuls f0, f5, f0
/* 801BC054 001B8F94  C0 BF 00 D8 */	lfs f5, 0xd8(r31)
/* 801BC058 001B8F98  C0 3F 00 E0 */	lfs f1, 0xe0(r31)
/* 801BC05C 001B8F9C  EC 66 10 FA */	fmadds f3, f6, f3, f2
/* 801BC060 001B8FA0  C0 FE 00 14 */	lfs f7, 0x14(r30)
/* 801BC064 001B8FA4  EC A6 21 7A */	fmadds f5, f6, f5, f4
/* 801BC068 001B8FA8  C0 9F 00 FC */	lfs f4, 0xfc(r31)
/* 801BC06C 001B8FAC  EC 26 00 7A */	fmadds f1, f6, f1, f0
/* 801BC070 001B8FB0  C0 DF 00 F8 */	lfs f6, 0xf8(r31)
/* 801BC074 001B8FB4  C0 5F 01 00 */	lfs f2, 0x100(r31)
/* 801BC078 001B8FB8  EC 67 19 3A */	fmadds f3, f7, f4, f3
/* 801BC07C 001B8FBC  C0 0F 00 14 */	lfs f0, 0x14(r15)
/* 801BC080 001B8FC0  EC 87 29 BA */	fmadds f4, f7, f6, f5
/* 801BC084 001B8FC4  EC 27 08 BA */	fmadds f1, f7, f2, f1
/* 801BC088 001B8FC8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801BC08C 001B8FCC  40 81 01 2C */	ble .L_801BC1B8
/* 801BC090 001B8FD0  C0 0F 00 10 */	lfs f0, 0x10(r15)
/* 801BC094 001B8FD4  1C 7B 00 0C */	mulli r3, r27, 0xc
/* 801BC098 001B8FD8  38 81 08 64 */	addi r4, r1, 0x864
/* 801BC09C 001B8FDC  93 DA 00 00 */	stw r30, 0(r26)
/* 801BC0A0 001B8FE0  ED 64 00 32 */	fmuls f11, f4, f0
/* 801BC0A4 001B8FE4  C0 81 00 40 */	lfs f4, 0x40(r1)
/* 801BC0A8 001B8FE8  ED 43 00 32 */	fmuls f10, f3, f0
/* 801BC0AC 001B8FEC  C0 A1 00 44 */	lfs f5, 0x44(r1)
/* 801BC0B0 001B8FF0  7C 84 1A 14 */	add r4, r4, r3
/* 801BC0B4 001B8FF4  EC 64 58 2A */	fadds f3, f4, f11
/* 801BC0B8 001B8FF8  ED 21 00 32 */	fmuls f9, f1, f0
/* 801BC0BC 001B8FFC  C0 C1 00 48 */	lfs f6, 0x48(r1)
/* 801BC0C0 001B9000  EC E5 50 2A */	fadds f7, f5, f10
/* 801BC0C4 001B9004  93 F9 00 00 */	stw r31, 0(r25)
/* 801BC0C8 001B9008  FC 40 18 18 */	frsp f2, f3
/* 801BC0CC 001B900C  ED 06 48 2A */	fadds f8, f6, f9
/* 801BC0D0 001B9010  C0 81 00 4C */	lfs f4, 0x4c(r1)
/* 801BC0D4 001B9014  FC 20 38 18 */	frsp f1, f7
/* 801BC0D8 001B9018  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 801BC0DC 001B901C  38 63 00 0C */	addi r3, r3, 0xc
/* 801BC0E0 001B9020  EC 64 58 2A */	fadds f3, f4, f11
/* 801BC0E4 001B9024  D0 44 00 00 */	stfs f2, 0(r4)
/* 801BC0E8 001B9028  FC 00 40 18 */	frsp f0, f8
/* 801BC0EC 001B902C  C0 A1 00 50 */	lfs f5, 0x50(r1)
/* 801BC0F0 001B9030  3A 94 00 01 */	addi r20, r20, 1
/* 801BC0F4 001B9034  D0 E1 00 44 */	stfs f7, 0x44(r1)
/* 801BC0F8 001B9038  EC E5 50 2A */	fadds f7, f5, f10
/* 801BC0FC 001B903C  C0 C1 00 54 */	lfs f6, 0x54(r1)
/* 801BC100 001B9040  D0 24 00 04 */	stfs f1, 4(r4)
/* 801BC104 001B9044  FC 40 18 18 */	frsp f2, f3
/* 801BC108 001B9048  C0 81 00 58 */	lfs f4, 0x58(r1)
/* 801BC10C 001B904C  3B 7B 00 03 */	addi r27, r27, 3
/* 801BC110 001B9050  D1 01 00 48 */	stfs f8, 0x48(r1)
/* 801BC114 001B9054  ED 06 48 2A */	fadds f8, f6, f9
/* 801BC118 001B9058  FC 20 38 18 */	frsp f1, f7
/* 801BC11C 001B905C  C0 A1 00 5C */	lfs f5, 0x5c(r1)
/* 801BC120 001B9060  D0 04 00 08 */	stfs f0, 8(r4)
/* 801BC124 001B9064  38 81 08 64 */	addi r4, r1, 0x864
/* 801BC128 001B9068  7C 84 1A 14 */	add r4, r4, r3
/* 801BC12C 001B906C  D0 44 00 00 */	stfs f2, 0(r4)
/* 801BC130 001B9070  FC 00 40 18 */	frsp f0, f8
/* 801BC134 001B9074  C0 C1 00 60 */	lfs f6, 0x60(r1)
/* 801BC138 001B9078  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 801BC13C 001B907C  EC 64 58 2A */	fadds f3, f4, f11
/* 801BC140 001B9080  38 63 00 0C */	addi r3, r3, 0xc
/* 801BC144 001B9084  3B 5A 00 04 */	addi r26, r26, 4
/* 801BC148 001B9088  D0 24 00 04 */	stfs f1, 4(r4)
/* 801BC14C 001B908C  FC 40 18 18 */	frsp f2, f3
/* 801BC150 001B9090  3B 39 00 04 */	addi r25, r25, 4
/* 801BC154 001B9094  3B 18 00 03 */	addi r24, r24, 3
/* 801BC158 001B9098  D0 E1 00 50 */	stfs f7, 0x50(r1)
/* 801BC15C 001B909C  EC E5 50 2A */	fadds f7, f5, f10
/* 801BC160 001B90A0  3A F7 00 04 */	addi r23, r23, 4
/* 801BC164 001B90A4  D0 04 00 08 */	stfs f0, 8(r4)
/* 801BC168 001B90A8  38 81 08 64 */	addi r4, r1, 0x864
/* 801BC16C 001B90AC  7C 84 1A 14 */	add r4, r4, r3
/* 801BC170 001B90B0  80 61 2C 6C */	lwz r3, 0x2c6c(r1)
/* 801BC174 001B90B4  D1 01 00 54 */	stfs f8, 0x54(r1)
/* 801BC178 001B90B8  ED 06 48 2A */	fadds f8, f6, f9
/* 801BC17C 001B90BC  38 63 00 03 */	addi r3, r3, 3
/* 801BC180 001B90C0  FC 20 38 18 */	frsp f1, f7
/* 801BC184 001B90C4  D0 44 00 00 */	stfs f2, 0(r4)
/* 801BC188 001B90C8  3A D6 00 04 */	addi r22, r22, 4
/* 801BC18C 001B90CC  FC 00 40 18 */	frsp f0, f8
/* 801BC190 001B90D0  90 61 2C 6C */	stw r3, 0x2c6c(r1)
/* 801BC194 001B90D4  39 CE 00 04 */	addi r14, r14, 4
/* 801BC198 001B90D8  80 61 2C 68 */	lwz r3, 0x2c68(r1)
/* 801BC19C 001B90DC  D0 24 00 04 */	stfs f1, 4(r4)
/* 801BC1A0 001B90E0  38 63 00 04 */	addi r3, r3, 4
/* 801BC1A4 001B90E4  D0 61 00 58 */	stfs f3, 0x58(r1)
/* 801BC1A8 001B90E8  D0 E1 00 5C */	stfs f7, 0x5c(r1)
/* 801BC1AC 001B90EC  D1 01 00 60 */	stfs f8, 0x60(r1)
/* 801BC1B0 001B90F0  D0 04 00 08 */	stfs f0, 8(r4)
/* 801BC1B4 001B90F4  90 61 2C 68 */	stw r3, 0x2c68(r1)
.L_801BC1B8:
/* 801BC1B8 001B90F8  3B 9C 00 04 */	addi r28, r28, 4
/* 801BC1BC 001B90FC  3A 52 00 01 */	addi r18, r18, 1
.L_801BC1C0:
/* 801BC1C0 001B9100  80 13 00 1C */	lwz r0, 0x1c(r19)
/* 801BC1C4 001B9104  7C 12 00 00 */	cmpw r18, r0
/* 801BC1C8 001B9108  41 80 FD 6C */	blt .L_801BBF34
.L_801BC1CC:
/* 801BC1CC 001B910C  82 73 00 04 */	lwz r19, 4(r19)
.L_801BC1D0:
/* 801BC1D0 001B9110  28 13 00 00 */	cmplwi r19, 0
/* 801BC1D4 001B9114  40 82 FD 48 */	bne .L_801BBF1C
.L_801BC1D8:
/* 801BC1D8 001B9118  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 801BC1DC 001B911C  28 00 00 00 */	cmplwi r0, 0
/* 801BC1E0 001B9120  40 82 00 24 */	bne .L_801BC204
/* 801BC1E4 001B9124  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC1E8 001B9128  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC1EC 001B912C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC1F0 001B9130  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BC1F4 001B9134  7D 89 03 A6 */	mtctr r12
/* 801BC1F8 001B9138  4E 80 04 21 */	bctrl 
/* 801BC1FC 001B913C  90 61 00 34 */	stw r3, 0x34(r1)
/* 801BC200 001B9140  48 00 00 94 */	b .L_801BC294
.L_801BC204:
/* 801BC204 001B9144  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC208 001B9148  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC20C 001B914C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC210 001B9150  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BC214 001B9154  7D 89 03 A6 */	mtctr r12
/* 801BC218 001B9158  4E 80 04 21 */	bctrl 
/* 801BC21C 001B915C  90 61 00 34 */	stw r3, 0x34(r1)
/* 801BC220 001B9160  48 00 00 58 */	b .L_801BC278
.L_801BC224:
/* 801BC224 001B9164  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC228 001B9168  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC22C 001B916C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC230 001B9170  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BC234 001B9174  7D 89 03 A6 */	mtctr r12
/* 801BC238 001B9178  4E 80 04 21 */	bctrl 
/* 801BC23C 001B917C  7C 64 1B 78 */	mr r4, r3
/* 801BC240 001B9180  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 801BC244 001B9184  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC248 001B9188  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BC24C 001B918C  7D 89 03 A6 */	mtctr r12
/* 801BC250 001B9190  4E 80 04 21 */	bctrl 
/* 801BC254 001B9194  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BC258 001B9198  40 82 00 3C */	bne .L_801BC294
/* 801BC25C 001B919C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC260 001B91A0  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC264 001B91A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC268 001B91A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BC26C 001B91AC  7D 89 03 A6 */	mtctr r12
/* 801BC270 001B91B0  4E 80 04 21 */	bctrl 
/* 801BC274 001B91B4  90 61 00 34 */	stw r3, 0x34(r1)
.L_801BC278:
/* 801BC278 001B91B8  81 81 00 30 */	lwz r12, 0x30(r1)
/* 801BC27C 001B91BC  38 61 00 30 */	addi r3, r1, 0x30
/* 801BC280 001B91C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BC284 001B91C4  7D 89 03 A6 */	mtctr r12
/* 801BC288 001B91C8  4E 80 04 21 */	bctrl 
/* 801BC28C 001B91CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BC290 001B91D0  41 82 FF 94 */	beq .L_801BC224
.L_801BC294:
/* 801BC294 001B91D4  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC298 001B91D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC29C 001B91DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BC2A0 001B91E0  7D 89 03 A6 */	mtctr r12
/* 801BC2A4 001B91E4  4E 80 04 21 */	bctrl 
/* 801BC2A8 001B91E8  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC2AC 001B91EC  7C 04 18 40 */	cmplw r4, r3
/* 801BC2B0 001B91F0  40 82 FB BC */	bne .L_801BBE6C
/* 801BC2B4 001B91F4  2C 14 00 00 */	cmpwi r20, 0
/* 801BC2B8 001B91F8  40 81 01 D8 */	ble .L_801BC490
/* 801BC2BC 001B91FC  1D D4 00 03 */	mulli r14, r20, 3
/* 801BC2C0 001B9200  1C 6E 00 0C */	mulli r3, r14, 0xc
/* 801BC2C4 001B9204  38 63 00 10 */	addi r3, r3, 0x10
/* 801BC2C8 001B9208  4B E6 7C E5 */	bl __nwa__FUl
/* 801BC2CC 001B920C  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 801BC2D0 001B9210  7D C7 73 78 */	mr r7, r14
/* 801BC2D4 001B9214  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 801BC2D8 001B9218  38 A0 00 00 */	li r5, 0
/* 801BC2DC 001B921C  38 C0 00 0C */	li r6, 0xc
/* 801BC2E0 001B9220  4B F0 57 11 */	bl __construct_new_array
/* 801BC2E4 001B9224  2C 0E 00 00 */	cmpwi r14, 0
/* 801BC2E8 001B9228  90 6F 00 18 */	stw r3, 0x18(r15)
/* 801BC2EC 001B922C  3A 00 00 00 */	li r16, 0
/* 801BC2F0 001B9230  40 81 01 A0 */	ble .L_801BC490
/* 801BC2F4 001B9234  2C 0E 00 08 */	cmpwi r14, 8
/* 801BC2F8 001B9238  38 6E FF F8 */	addi r3, r14, -8
/* 801BC2FC 001B923C  40 81 01 4C */	ble .L_801BC448
/* 801BC300 001B9240  38 03 00 07 */	addi r0, r3, 7
/* 801BC304 001B9244  38 A1 08 64 */	addi r5, r1, 0x864
/* 801BC308 001B9248  54 00 E8 FE */	srwi r0, r0, 3
/* 801BC30C 001B924C  38 80 00 00 */	li r4, 0
/* 801BC310 001B9250  7C 09 03 A6 */	mtctr r0
/* 801BC314 001B9254  2C 03 00 00 */	cmpwi r3, 0
/* 801BC318 001B9258  40 81 01 30 */	ble .L_801BC448
.L_801BC31C:
/* 801BC31C 001B925C  80 0F 00 18 */	lwz r0, 0x18(r15)
/* 801BC320 001B9260  39 84 00 0C */	addi r12, r4, 0xc
/* 801BC324 001B9264  C0 05 00 00 */	lfs f0, 0(r5)
/* 801BC328 001B9268  39 64 00 18 */	addi r11, r4, 0x18
/* 801BC32C 001B926C  7C 60 22 14 */	add r3, r0, r4
/* 801BC330 001B9270  39 44 00 24 */	addi r10, r4, 0x24
/* 801BC334 001B9274  D0 03 00 00 */	stfs f0, 0(r3)
/* 801BC338 001B9278  39 24 00 30 */	addi r9, r4, 0x30
/* 801BC33C 001B927C  39 04 00 3C */	addi r8, r4, 0x3c
/* 801BC340 001B9280  38 E4 00 48 */	addi r7, r4, 0x48
/* 801BC344 001B9284  C0 05 00 04 */	lfs f0, 4(r5)
/* 801BC348 001B9288  38 C4 00 54 */	addi r6, r4, 0x54
/* 801BC34C 001B928C  38 84 00 60 */	addi r4, r4, 0x60
/* 801BC350 001B9290  3A 10 00 08 */	addi r16, r16, 8
/* 801BC354 001B9294  D0 03 00 04 */	stfs f0, 4(r3)
/* 801BC358 001B9298  C0 05 00 08 */	lfs f0, 8(r5)
/* 801BC35C 001B929C  D0 03 00 08 */	stfs f0, 8(r3)
/* 801BC360 001B92A0  80 0F 00 18 */	lwz r0, 0x18(r15)
/* 801BC364 001B92A4  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 801BC368 001B92A8  7D 80 62 14 */	add r12, r0, r12
/* 801BC36C 001B92AC  D0 0C 00 00 */	stfs f0, 0(r12)
/* 801BC370 001B92B0  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 801BC374 001B92B4  D0 0C 00 04 */	stfs f0, 4(r12)
/* 801BC378 001B92B8  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 801BC37C 001B92BC  D0 0C 00 08 */	stfs f0, 8(r12)
/* 801BC380 001B92C0  80 0F 00 18 */	lwz r0, 0x18(r15)
/* 801BC384 001B92C4  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 801BC388 001B92C8  7D 60 5A 14 */	add r11, r0, r11
/* 801BC38C 001B92CC  D0 0B 00 00 */	stfs f0, 0(r11)
/* 801BC390 001B92D0  C0 05 00 1C */	lfs f0, 0x1c(r5)
/* 801BC394 001B92D4  D0 0B 00 04 */	stfs f0, 4(r11)
/* 801BC398 001B92D8  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 801BC39C 001B92DC  D0 0B 00 08 */	stfs f0, 8(r11)
/* 801BC3A0 001B92E0  80 0F 00 18 */	lwz r0, 0x18(r15)
/* 801BC3A4 001B92E4  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 801BC3A8 001B92E8  7D 40 52 14 */	add r10, r0, r10
/* 801BC3AC 001B92EC  D0 0A 00 00 */	stfs f0, 0(r10)
/* 801BC3B0 001B92F0  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 801BC3B4 001B92F4  D0 0A 00 04 */	stfs f0, 4(r10)
/* 801BC3B8 001B92F8  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 801BC3BC 001B92FC  D0 0A 00 08 */	stfs f0, 8(r10)
/* 801BC3C0 001B9300  80 0F 00 18 */	lwz r0, 0x18(r15)
/* 801BC3C4 001B9304  C0 05 00 30 */	lfs f0, 0x30(r5)
/* 801BC3C8 001B9308  7D 20 4A 14 */	add r9, r0, r9
/* 801BC3CC 001B930C  D0 09 00 00 */	stfs f0, 0(r9)
/* 801BC3D0 001B9310  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 801BC3D4 001B9314  D0 09 00 04 */	stfs f0, 4(r9)
/* 801BC3D8 001B9318  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 801BC3DC 001B931C  D0 09 00 08 */	stfs f0, 8(r9)
/* 801BC3E0 001B9320  80 0F 00 18 */	lwz r0, 0x18(r15)
/* 801BC3E4 001B9324  C0 05 00 3C */	lfs f0, 0x3c(r5)
/* 801BC3E8 001B9328  7D 00 42 14 */	add r8, r0, r8
/* 801BC3EC 001B932C  D0 08 00 00 */	stfs f0, 0(r8)
/* 801BC3F0 001B9330  C0 05 00 40 */	lfs f0, 0x40(r5)
/* 801BC3F4 001B9334  D0 08 00 04 */	stfs f0, 4(r8)
/* 801BC3F8 001B9338  C0 05 00 44 */	lfs f0, 0x44(r5)
/* 801BC3FC 001B933C  D0 08 00 08 */	stfs f0, 8(r8)
/* 801BC400 001B9340  80 0F 00 18 */	lwz r0, 0x18(r15)
/* 801BC404 001B9344  C0 05 00 48 */	lfs f0, 0x48(r5)
/* 801BC408 001B9348  7C E0 3A 14 */	add r7, r0, r7
/* 801BC40C 001B934C  D0 07 00 00 */	stfs f0, 0(r7)
/* 801BC410 001B9350  C0 05 00 4C */	lfs f0, 0x4c(r5)
/* 801BC414 001B9354  D0 07 00 04 */	stfs f0, 4(r7)
/* 801BC418 001B9358  C0 05 00 50 */	lfs f0, 0x50(r5)
/* 801BC41C 001B935C  D0 07 00 08 */	stfs f0, 8(r7)
/* 801BC420 001B9360  80 0F 00 18 */	lwz r0, 0x18(r15)
/* 801BC424 001B9364  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 801BC428 001B9368  7C C0 32 14 */	add r6, r0, r6
/* 801BC42C 001B936C  D0 06 00 00 */	stfs f0, 0(r6)
/* 801BC430 001B9370  C0 05 00 58 */	lfs f0, 0x58(r5)
/* 801BC434 001B9374  D0 06 00 04 */	stfs f0, 4(r6)
/* 801BC438 001B9378  C0 05 00 5C */	lfs f0, 0x5c(r5)
/* 801BC43C 001B937C  38 A5 00 60 */	addi r5, r5, 0x60
/* 801BC440 001B9380  D0 06 00 08 */	stfs f0, 8(r6)
/* 801BC444 001B9384  42 00 FE D8 */	bdnz .L_801BC31C
.L_801BC448:
/* 801BC448 001B9388  1C 90 00 0C */	mulli r4, r16, 0xc
/* 801BC44C 001B938C  38 61 08 64 */	addi r3, r1, 0x864
/* 801BC450 001B9390  7C 10 70 50 */	subf r0, r16, r14
/* 801BC454 001B9394  7C 63 22 14 */	add r3, r3, r4
/* 801BC458 001B9398  7C 09 03 A6 */	mtctr r0
/* 801BC45C 001B939C  7C 10 70 00 */	cmpw r16, r14
/* 801BC460 001B93A0  40 80 00 30 */	bge .L_801BC490
.L_801BC464:
/* 801BC464 001B93A4  80 0F 00 18 */	lwz r0, 0x18(r15)
/* 801BC468 001B93A8  C0 03 00 00 */	lfs f0, 0(r3)
/* 801BC46C 001B93AC  7C A0 22 14 */	add r5, r0, r4
/* 801BC470 001B93B0  38 84 00 0C */	addi r4, r4, 0xc
/* 801BC474 001B93B4  D0 05 00 00 */	stfs f0, 0(r5)
/* 801BC478 001B93B8  C0 03 00 04 */	lfs f0, 4(r3)
/* 801BC47C 001B93BC  D0 05 00 04 */	stfs f0, 4(r5)
/* 801BC480 001B93C0  C0 03 00 08 */	lfs f0, 8(r3)
/* 801BC484 001B93C4  38 63 00 0C */	addi r3, r3, 0xc
/* 801BC488 001B93C8  D0 05 00 08 */	stfs f0, 8(r5)
/* 801BC48C 001B93CC  42 00 FF D8 */	bdnz .L_801BC464
.L_801BC490:
/* 801BC490 001B93D0  92 8F 00 1C */	stw r20, 0x1c(r15)
/* 801BC494 001B93D4  38 00 2C C8 */	li r0, 0x2cc8
/* 801BC498 001B93D8  13 E1 00 0C */	psq_lx f31, r1, r0, 0, qr0
/* 801BC49C 001B93DC  CB E1 2C C0 */	lfd f31, 0x2cc0(r1)
/* 801BC4A0 001B93E0  B9 C1 2C 78 */	lmw r14, 0x2c78(r1)
/* 801BC4A4 001B93E4  80 01 2C D4 */	lwz r0, 0x2cd4(r1)
/* 801BC4A8 001B93E8  7C 08 03 A6 */	mtlr r0
/* 801BC4AC 001B93EC  38 21 2C D0 */	addi r1, r1, 0x2cd0
/* 801BC4B0 001B93F0  4E 80 00 20 */	blr 
.endfn createTriangles__Q24Game10RoomMapMgrFRQ23Sys17CreateTriangleArg

.fn getCurrTri__Q24Game10RoomMapMgrFRQ24Game11CurrTriInfo, global
/* 801BC4B4 001B93F4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801BC4B8 001B93F8  7C 08 02 A6 */	mflr r0
/* 801BC4BC 001B93FC  C0 02 B1 28 */	lfs f0, lbl_80519488@sda21(r2)
/* 801BC4C0 001B9400  90 01 00 64 */	stw r0, 0x64(r1)
/* 801BC4C4 001B9404  38 00 00 00 */	li r0, 0
/* 801BC4C8 001B9408  28 00 00 00 */	cmplwi r0, 0
/* 801BC4CC 001B940C  BF 01 00 40 */	stmw r24, 0x40(r1)
/* 801BC4D0 001B9410  7C 79 1B 78 */	mr r25, r3
/* 801BC4D4 001B9414  3C 60 80 4B */	lis r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BC4D8 001B9418  7C 9A 23 78 */	mr r26, r4
/* 801BC4DC 001B941C  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 801BC4E0 001B9420  38 83 5D 28 */	addi r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BC4E4 001B9424  38 79 00 AC */	addi r3, r25, 0xac
/* 801BC4E8 001B9428  90 81 00 30 */	stw r4, 0x30(r1)
/* 801BC4EC 001B942C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801BC4F0 001B9430  90 01 00 34 */	stw r0, 0x34(r1)
/* 801BC4F4 001B9434  90 61 00 38 */	stw r3, 0x38(r1)
/* 801BC4F8 001B9438  40 82 00 1C */	bne .L_801BC514
/* 801BC4FC 001B943C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC500 001B9440  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BC504 001B9444  7D 89 03 A6 */	mtctr r12
/* 801BC508 001B9448  4E 80 04 21 */	bctrl 
/* 801BC50C 001B944C  90 61 00 34 */	stw r3, 0x34(r1)
/* 801BC510 001B9450  48 00 03 84 */	b .L_801BC894
.L_801BC514:
/* 801BC514 001B9454  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC518 001B9458  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BC51C 001B945C  7D 89 03 A6 */	mtctr r12
/* 801BC520 001B9460  4E 80 04 21 */	bctrl 
/* 801BC524 001B9464  90 61 00 34 */	stw r3, 0x34(r1)
/* 801BC528 001B9468  48 00 00 58 */	b .L_801BC580
.L_801BC52C:
/* 801BC52C 001B946C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC530 001B9470  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC534 001B9474  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC538 001B9478  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BC53C 001B947C  7D 89 03 A6 */	mtctr r12
/* 801BC540 001B9480  4E 80 04 21 */	bctrl 
/* 801BC544 001B9484  7C 64 1B 78 */	mr r4, r3
/* 801BC548 001B9488  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 801BC54C 001B948C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC550 001B9490  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BC554 001B9494  7D 89 03 A6 */	mtctr r12
/* 801BC558 001B9498  4E 80 04 21 */	bctrl 
/* 801BC55C 001B949C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BC560 001B94A0  40 82 03 34 */	bne .L_801BC894
/* 801BC564 001B94A4  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC568 001B94A8  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC56C 001B94AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC570 001B94B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BC574 001B94B4  7D 89 03 A6 */	mtctr r12
/* 801BC578 001B94B8  4E 80 04 21 */	bctrl 
/* 801BC57C 001B94BC  90 61 00 34 */	stw r3, 0x34(r1)
.L_801BC580:
/* 801BC580 001B94C0  81 81 00 30 */	lwz r12, 0x30(r1)
/* 801BC584 001B94C4  38 61 00 30 */	addi r3, r1, 0x30
/* 801BC588 001B94C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BC58C 001B94CC  7D 89 03 A6 */	mtctr r12
/* 801BC590 001B94D0  4E 80 04 21 */	bctrl 
/* 801BC594 001B94D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BC598 001B94D8  41 82 FF 94 */	beq .L_801BC52C
/* 801BC59C 001B94DC  48 00 02 F8 */	b .L_801BC894
.L_801BC5A0:
/* 801BC5A0 001B94E0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC5A4 001B94E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC5A8 001B94E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BC5AC 001B94EC  7D 89 03 A6 */	mtctr r12
/* 801BC5B0 001B94F0  4E 80 04 21 */	bctrl 
/* 801BC5B4 001B94F4  7C 7F 1B 78 */	mr r31, r3
/* 801BC5B8 001B94F8  C0 1A 00 08 */	lfs f0, 8(r26)
/* 801BC5BC 001B94FC  C0 23 01 98 */	lfs f1, 0x198(r3)
/* 801BC5C0 001B9500  C0 83 01 9C */	lfs f4, 0x19c(r3)
/* 801BC5C4 001B9504  EC 61 00 28 */	fsubs f3, f1, f0
/* 801BC5C8 001B9508  C0 43 01 90 */	lfs f2, 0x190(r3)
/* 801BC5CC 001B950C  C0 3A 00 00 */	lfs f1, 0(r26)
/* 801BC5D0 001B9510  EC 04 01 32 */	fmuls f0, f4, f4
/* 801BC5D4 001B9514  EC 42 08 28 */	fsubs f2, f2, f1
/* 801BC5D8 001B9518  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801BC5DC 001B951C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801BC5E0 001B9520  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BC5E4 001B9524  41 81 01 F4 */	bgt .L_801BC7D8
/* 801BC5E8 001B9528  83 BF 01 38 */	lwz r29, 0x138(r31)
/* 801BC5EC 001B952C  7F 44 D3 78 */	mr r4, r26
/* 801BC5F0 001B9530  38 7F 01 08 */	addi r3, r31, 0x108
/* 801BC5F4 001B9534  38 A1 00 08 */	addi r5, r1, 8
/* 801BC5F8 001B9538  4B F2 E5 E1 */	bl PSMTXMultVec
/* 801BC5FC 001B953C  C0 61 00 08 */	lfs f3, 8(r1)
/* 801BC600 001B9540  38 81 00 14 */	addi r4, r1, 0x14
/* 801BC604 001B9544  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801BC608 001B9548  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801BC60C 001B954C  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801BC610 001B9550  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 801BC614 001B9554  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 801BC618 001B9558  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 801BC61C 001B955C  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 801BC620 001B9560  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801BC624 001B9564  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801BC628 001B9568  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801BC62C 001B956C  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 801BC630 001B9570  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC634 001B9574  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BC638 001B9578  7D 89 03 A6 */	mtctr r12
/* 801BC63C 001B957C  4E 80 04 21 */	bctrl 
/* 801BC640 001B9580  7C 7C 1B 78 */	mr r28, r3
/* 801BC644 001B9584  48 00 01 8C */	b .L_801BC7D0
.L_801BC648:
/* 801BC648 001B9588  3B 60 00 00 */	li r27, 0
/* 801BC64C 001B958C  3B C0 00 00 */	li r30, 0
/* 801BC650 001B9590  48 00 01 70 */	b .L_801BC7C0
.L_801BC654:
/* 801BC654 001B9594  80 7C 00 24 */	lwz r3, 0x24(r28)
/* 801BC658 001B9598  38 81 00 24 */	addi r4, r1, 0x24
/* 801BC65C 001B959C  80 BD 00 28 */	lwz r5, 0x28(r29)
/* 801BC660 001B95A0  7C 03 F0 2E */	lwzx r0, r3, r30
/* 801BC664 001B95A4  80 65 00 1C */	lwz r3, 0x1c(r5)
/* 801BC668 001B95A8  1C 00 00 60 */	mulli r0, r0, 0x60
/* 801BC66C 001B95AC  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801BC670 001B95B0  7F 03 02 14 */	add r24, r3, r0
/* 801BC674 001B95B4  7F 03 C3 78 */	mr r3, r24
/* 801BC678 001B95B8  48 25 B5 11 */	bl "insideXZ__Q23Sys8TriangleFR10Vector3<f>"
/* 801BC67C 001B95BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BC680 001B95C0  41 82 01 38 */	beq .L_801BC7B8
/* 801BC684 001B95C4  C1 41 00 28 */	lfs f10, 0x28(r1)
/* 801BC688 001B95C8  C0 1A 00 18 */	lfs f0, 0x18(r26)
/* 801BC68C 001B95CC  FC 00 50 40 */	fcmpo cr0, f0, f10
/* 801BC690 001B95D0  40 81 00 90 */	ble .L_801BC720
/* 801BC694 001B95D4  D1 5A 00 18 */	stfs f10, 0x18(r26)
/* 801BC698 001B95D8  88 1A 00 0C */	lbz r0, 0xc(r26)
/* 801BC69C 001B95DC  28 00 00 00 */	cmplwi r0, 0
/* 801BC6A0 001B95E0  41 82 00 80 */	beq .L_801BC720
/* 801BC6A4 001B95E4  93 1A 00 14 */	stw r24, 0x14(r26)
/* 801BC6A8 001B95E8  C0 18 00 0C */	lfs f0, 0xc(r24)
/* 801BC6AC 001B95EC  D0 1A 00 20 */	stfs f0, 0x20(r26)
/* 801BC6B0 001B95F0  C0 18 00 10 */	lfs f0, 0x10(r24)
/* 801BC6B4 001B95F4  D0 1A 00 24 */	stfs f0, 0x24(r26)
/* 801BC6B8 001B95F8  C0 18 00 14 */	lfs f0, 0x14(r24)
/* 801BC6BC 001B95FC  D0 1A 00 28 */	stfs f0, 0x28(r26)
/* 801BC6C0 001B9600  C0 FA 00 24 */	lfs f7, 0x24(r26)
/* 801BC6C4 001B9604  C0 3F 01 18 */	lfs f1, 0x118(r31)
/* 801BC6C8 001B9608  C0 1F 01 1C */	lfs f0, 0x11c(r31)
/* 801BC6CC 001B960C  EC 27 00 72 */	fmuls f1, f7, f1
/* 801BC6D0 001B9610  C1 1A 00 20 */	lfs f8, 0x20(r26)
/* 801BC6D4 001B9614  C0 9F 01 08 */	lfs f4, 0x108(r31)
/* 801BC6D8 001B9618  EC 47 00 32 */	fmuls f2, f7, f0
/* 801BC6DC 001B961C  C0 1F 01 20 */	lfs f0, 0x120(r31)
/* 801BC6E0 001B9620  C0 7F 01 0C */	lfs f3, 0x10c(r31)
/* 801BC6E4 001B9624  EC A8 09 3A */	fmadds f5, f8, f4, f1
/* 801BC6E8 001B9628  C1 3A 00 28 */	lfs f9, 0x28(r26)
/* 801BC6EC 001B962C  C0 DF 01 28 */	lfs f6, 0x128(r31)
/* 801BC6F0 001B9630  EC 07 00 32 */	fmuls f0, f7, f0
/* 801BC6F4 001B9634  C0 3F 01 10 */	lfs f1, 0x110(r31)
/* 801BC6F8 001B9638  EC 68 10 FA */	fmadds f3, f8, f3, f2
/* 801BC6FC 001B963C  C0 9F 01 2C */	lfs f4, 0x12c(r31)
/* 801BC700 001B9640  EC A9 29 BA */	fmadds f5, f9, f6, f5
/* 801BC704 001B9644  C0 5F 01 30 */	lfs f2, 0x130(r31)
/* 801BC708 001B9648  EC 08 00 7A */	fmadds f0, f8, f1, f0
/* 801BC70C 001B964C  EC 29 19 3A */	fmadds f1, f9, f4, f3
/* 801BC710 001B9650  D0 BA 00 20 */	stfs f5, 0x20(r26)
/* 801BC714 001B9654  EC 09 00 BA */	fmadds f0, f9, f2, f0
/* 801BC718 001B9658  D0 3A 00 24 */	stfs f1, 0x24(r26)
/* 801BC71C 001B965C  D0 1A 00 28 */	stfs f0, 0x28(r26)
.L_801BC720:
/* 801BC720 001B9660  C0 1A 00 1C */	lfs f0, 0x1c(r26)
/* 801BC724 001B9664  FC 00 50 40 */	fcmpo cr0, f0, f10
/* 801BC728 001B9668  40 80 00 90 */	bge .L_801BC7B8
/* 801BC72C 001B966C  D1 5A 00 1C */	stfs f10, 0x1c(r26)
/* 801BC730 001B9670  88 1A 00 0C */	lbz r0, 0xc(r26)
/* 801BC734 001B9674  28 00 00 00 */	cmplwi r0, 0
/* 801BC738 001B9678  40 82 00 80 */	bne .L_801BC7B8
/* 801BC73C 001B967C  93 1A 00 14 */	stw r24, 0x14(r26)
/* 801BC740 001B9680  C0 18 00 0C */	lfs f0, 0xc(r24)
/* 801BC744 001B9684  D0 1A 00 20 */	stfs f0, 0x20(r26)
/* 801BC748 001B9688  C0 18 00 10 */	lfs f0, 0x10(r24)
/* 801BC74C 001B968C  D0 1A 00 24 */	stfs f0, 0x24(r26)
/* 801BC750 001B9690  C0 18 00 14 */	lfs f0, 0x14(r24)
/* 801BC754 001B9694  D0 1A 00 28 */	stfs f0, 0x28(r26)
/* 801BC758 001B9698  C0 FA 00 24 */	lfs f7, 0x24(r26)
/* 801BC75C 001B969C  C0 3F 01 18 */	lfs f1, 0x118(r31)
/* 801BC760 001B96A0  C0 1F 01 1C */	lfs f0, 0x11c(r31)
/* 801BC764 001B96A4  EC 27 00 72 */	fmuls f1, f7, f1
/* 801BC768 001B96A8  C1 1A 00 20 */	lfs f8, 0x20(r26)
/* 801BC76C 001B96AC  C0 9F 01 08 */	lfs f4, 0x108(r31)
/* 801BC770 001B96B0  EC 47 00 32 */	fmuls f2, f7, f0
/* 801BC774 001B96B4  C0 1F 01 20 */	lfs f0, 0x120(r31)
/* 801BC778 001B96B8  C0 7F 01 0C */	lfs f3, 0x10c(r31)
/* 801BC77C 001B96BC  EC A8 09 3A */	fmadds f5, f8, f4, f1
/* 801BC780 001B96C0  C1 3A 00 28 */	lfs f9, 0x28(r26)
/* 801BC784 001B96C4  C0 DF 01 28 */	lfs f6, 0x128(r31)
/* 801BC788 001B96C8  EC 07 00 32 */	fmuls f0, f7, f0
/* 801BC78C 001B96CC  C0 3F 01 10 */	lfs f1, 0x110(r31)
/* 801BC790 001B96D0  EC 68 10 FA */	fmadds f3, f8, f3, f2
/* 801BC794 001B96D4  C0 9F 01 2C */	lfs f4, 0x12c(r31)
/* 801BC798 001B96D8  EC A9 29 BA */	fmadds f5, f9, f6, f5
/* 801BC79C 001B96DC  C0 5F 01 30 */	lfs f2, 0x130(r31)
/* 801BC7A0 001B96E0  EC 08 00 7A */	fmadds f0, f8, f1, f0
/* 801BC7A4 001B96E4  EC 29 19 3A */	fmadds f1, f9, f4, f3
/* 801BC7A8 001B96E8  D0 BA 00 20 */	stfs f5, 0x20(r26)
/* 801BC7AC 001B96EC  EC 09 00 BA */	fmadds f0, f9, f2, f0
/* 801BC7B0 001B96F0  D0 3A 00 24 */	stfs f1, 0x24(r26)
/* 801BC7B4 001B96F4  D0 1A 00 28 */	stfs f0, 0x28(r26)
.L_801BC7B8:
/* 801BC7B8 001B96F8  3B DE 00 04 */	addi r30, r30, 4
/* 801BC7BC 001B96FC  3B 7B 00 01 */	addi r27, r27, 1
.L_801BC7C0:
/* 801BC7C0 001B9700  80 1C 00 1C */	lwz r0, 0x1c(r28)
/* 801BC7C4 001B9704  7C 1B 00 00 */	cmpw r27, r0
/* 801BC7C8 001B9708  41 80 FE 8C */	blt .L_801BC654
/* 801BC7CC 001B970C  83 9C 00 04 */	lwz r28, 4(r28)
.L_801BC7D0:
/* 801BC7D0 001B9710  28 1C 00 00 */	cmplwi r28, 0
/* 801BC7D4 001B9714  40 82 FE 74 */	bne .L_801BC648
.L_801BC7D8:
/* 801BC7D8 001B9718  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 801BC7DC 001B971C  28 00 00 00 */	cmplwi r0, 0
/* 801BC7E0 001B9720  40 82 00 24 */	bne .L_801BC804
/* 801BC7E4 001B9724  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC7E8 001B9728  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC7EC 001B972C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC7F0 001B9730  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BC7F4 001B9734  7D 89 03 A6 */	mtctr r12
/* 801BC7F8 001B9738  4E 80 04 21 */	bctrl 
/* 801BC7FC 001B973C  90 61 00 34 */	stw r3, 0x34(r1)
/* 801BC800 001B9740  48 00 00 94 */	b .L_801BC894
.L_801BC804:
/* 801BC804 001B9744  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC808 001B9748  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC80C 001B974C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC810 001B9750  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BC814 001B9754  7D 89 03 A6 */	mtctr r12
/* 801BC818 001B9758  4E 80 04 21 */	bctrl 
/* 801BC81C 001B975C  90 61 00 34 */	stw r3, 0x34(r1)
/* 801BC820 001B9760  48 00 00 58 */	b .L_801BC878
.L_801BC824:
/* 801BC824 001B9764  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC828 001B9768  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC82C 001B976C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC830 001B9770  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BC834 001B9774  7D 89 03 A6 */	mtctr r12
/* 801BC838 001B9778  4E 80 04 21 */	bctrl 
/* 801BC83C 001B977C  7C 64 1B 78 */	mr r4, r3
/* 801BC840 001B9780  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 801BC844 001B9784  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC848 001B9788  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BC84C 001B978C  7D 89 03 A6 */	mtctr r12
/* 801BC850 001B9790  4E 80 04 21 */	bctrl 
/* 801BC854 001B9794  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BC858 001B9798  40 82 00 3C */	bne .L_801BC894
/* 801BC85C 001B979C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC860 001B97A0  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC864 001B97A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC868 001B97A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BC86C 001B97AC  7D 89 03 A6 */	mtctr r12
/* 801BC870 001B97B0  4E 80 04 21 */	bctrl 
/* 801BC874 001B97B4  90 61 00 34 */	stw r3, 0x34(r1)
.L_801BC878:
/* 801BC878 001B97B8  81 81 00 30 */	lwz r12, 0x30(r1)
/* 801BC87C 001B97BC  38 61 00 30 */	addi r3, r1, 0x30
/* 801BC880 001B97C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BC884 001B97C4  7D 89 03 A6 */	mtctr r12
/* 801BC888 001B97C8  4E 80 04 21 */	bctrl 
/* 801BC88C 001B97CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BC890 001B97D0  41 82 FF 94 */	beq .L_801BC824
.L_801BC894:
/* 801BC894 001B97D4  80 61 00 38 */	lwz r3, 0x38(r1)
/* 801BC898 001B97D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC89C 001B97DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BC8A0 001B97E0  7D 89 03 A6 */	mtctr r12
/* 801BC8A4 001B97E4  4E 80 04 21 */	bctrl 
/* 801BC8A8 001B97E8  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801BC8AC 001B97EC  7C 04 18 40 */	cmplw r4, r3
/* 801BC8B0 001B97F0  40 82 FC F0 */	bne .L_801BC5A0
/* 801BC8B4 001B97F4  80 79 00 2C */	lwz r3, 0x2c(r25)
/* 801BC8B8 001B97F8  48 01 A4 19 */	bl hasHiddenCollision__Q34Game4Cave9FloorInfoFv
/* 801BC8BC 001B97FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BC8C0 001B9800  41 82 00 28 */	beq .L_801BC8E8
/* 801BC8C4 001B9804  C0 3A 00 1C */	lfs f1, 0x1c(r26)
/* 801BC8C8 001B9808  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801BC8CC 001B980C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BC8D0 001B9810  40 80 00 18 */	bge .L_801BC8E8
/* 801BC8D4 001B9814  D0 1A 00 1C */	stfs f0, 0x1c(r26)
/* 801BC8D8 001B9818  38 19 00 40 */	addi r0, r25, 0x40
/* 801BC8DC 001B981C  D0 1A 00 18 */	stfs f0, 0x18(r26)
/* 801BC8E0 001B9820  90 1A 00 14 */	stw r0, 0x14(r26)
/* 801BC8E4 001B9824  48 00 00 1C */	b .L_801BC900
.L_801BC8E8:
/* 801BC8E8 001B9828  80 1A 00 14 */	lwz r0, 0x14(r26)
/* 801BC8EC 001B982C  28 00 00 00 */	cmplwi r0, 0
/* 801BC8F0 001B9830  40 82 00 10 */	bne .L_801BC900
/* 801BC8F4 001B9834  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801BC8F8 001B9838  D0 1A 00 18 */	stfs f0, 0x18(r26)
/* 801BC8FC 001B983C  D0 1A 00 1C */	stfs f0, 0x1c(r26)
.L_801BC900:
/* 801BC900 001B9840  BB 01 00 40 */	lmw r24, 0x40(r1)
/* 801BC904 001B9844  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801BC908 001B9848  7C 08 03 A6 */	mtlr r0
/* 801BC90C 001B984C  38 21 00 60 */	addi r1, r1, 0x60
/* 801BC910 001B9850  4E 80 00 20 */	blr 
.endfn getCurrTri__Q24Game10RoomMapMgrFRQ24Game11CurrTriInfo

.fn makeOneRoom__Q24Game10RoomMapMgrFfffPcsPQ24Game8RoomLinkPQ24Game16ObjectLayoutInfo, global
/* 801BC914 001B9854  94 21 FD 30 */	stwu r1, -0x2d0(r1)
/* 801BC918 001B9858  7C 08 02 A6 */	mflr r0
/* 801BC91C 001B985C  90 01 02 D4 */	stw r0, 0x2d4(r1)
/* 801BC920 001B9860  DB E1 02 C0 */	stfd f31, 0x2c0(r1)
/* 801BC924 001B9864  F3 E1 02 C8 */	psq_st f31, 712(r1), 0, qr0
/* 801BC928 001B9868  DB C1 02 B0 */	stfd f30, 0x2b0(r1)
/* 801BC92C 001B986C  F3 C1 02 B8 */	psq_st f30, 696(r1), 0, qr0
/* 801BC930 001B9870  DB A1 02 A0 */	stfd f29, 0x2a0(r1)
/* 801BC934 001B9874  F3 A1 02 A8 */	psq_st f29, 680(r1), 0, qr0
/* 801BC938 001B9878  DB 81 02 90 */	stfd f28, 0x290(r1)
/* 801BC93C 001B987C  F3 81 02 98 */	psq_st f28, 664(r1), 0, qr0
/* 801BC940 001B9880  DB 61 02 80 */	stfd f27, 0x280(r1)
/* 801BC944 001B9884  F3 61 02 88 */	psq_st f27, 648(r1), 0, qr0
/* 801BC948 001B9888  BE 81 02 50 */	stmw r20, 0x250(r1)
/* 801BC94C 001B988C  7C 7D 1B 78 */	mr r29, r3
/* 801BC950 001B9890  C0 02 B1 30 */	lfs f0, lbl_80519490@sda21(r2)
/* 801BC954 001B9894  38 7D 00 AC */	addi r3, r29, 0xac
/* 801BC958 001B9898  3D 00 80 48 */	lis r8, lbl_8047FC70@ha
/* 801BC95C 001B989C  81 9D 00 AC */	lwz r12, 0xac(r29)
/* 801BC960 001B98A0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801BC964 001B98A4  C0 62 B1 2C */	lfs f3, lbl_8051948C@sda21(r2)
/* 801BC968 001B98A8  FF 80 08 90 */	fmr f28, f1
/* 801BC96C 001B98AC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801BC970 001B98B0  FF 60 10 90 */	fmr f27, f2
/* 801BC974 001B98B4  EF E3 00 32 */	fmuls f31, f3, f0
/* 801BC978 001B98B8  7C 9A 23 78 */	mr r26, r4
/* 801BC97C 001B98BC  7C B5 2B 78 */	mr r21, r5
/* 801BC980 001B98C0  7C D8 33 78 */	mr r24, r6
/* 801BC984 001B98C4  7C F4 3B 78 */	mr r20, r7
/* 801BC988 001B98C8  3B C8 FC 70 */	addi r30, r8, lbl_8047FC70@l
/* 801BC98C 001B98CC  7D 89 03 A6 */	mtctr r12
/* 801BC990 001B98D0  4E 80 04 21 */	bctrl 
/* 801BC994 001B98D4  7C 7F 1B 78 */	mr r31, r3
/* 801BC998 001B98D8  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 801BC99C 001B98DC  B2 A3 01 84 */	sth r21, 0x184(r3)
/* 801BC9A0 001B98E0  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 801BC9A4 001B98E4  3A E4 A2 F4 */	addi r23, r4, __vt__Q24Game15CreatureInitArg@l
/* 801BC9A8 001B98E8  3B 60 00 00 */	li r27, 0
/* 801BC9AC 001B98EC  93 1F 01 80 */	stw r24, 0x180(r31)
/* 801BC9B0 001B98F0  3A C3 A2 B8 */	addi r22, r3, __vt__Q24Game13PelletInitArg@l
/* 801BC9B4 001B98F4  92 9F 00 C4 */	stw r20, 0xc4(r31)
/* 801BC9B8 001B98F8  48 00 01 14 */	b .L_801BCACC
.L_801BC9BC:
/* 801BC9BC 001B98FC  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 801BC9C0 001B9900  7F 65 DB 78 */	mr r5, r27
/* 801BC9C4 001B9904  38 80 00 00 */	li r4, 0
/* 801BC9C8 001B9908  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC9CC 001B990C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801BC9D0 001B9910  7D 89 03 A6 */	mtctr r12
/* 801BC9D4 001B9914  4E 80 04 21 */	bctrl 
/* 801BC9D8 001B9918  38 00 00 00 */	li r0, 0
/* 801BC9DC 001B991C  7C 79 1B 78 */	mr r25, r3
/* 801BC9E0 001B9920  B0 01 00 08 */	sth r0, 8(r1)
/* 801BC9E4 001B9924  81 83 00 00 */	lwz r12, 0(r3)
/* 801BC9E8 001B9928  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801BC9EC 001B992C  7D 89 03 A6 */	mtctr r12
/* 801BC9F0 001B9930  4E 80 04 21 */	bctrl 
/* 801BC9F4 001B9934  92 E1 01 5C */	stw r23, 0x15c(r1)
/* 801BC9F8 001B9938  39 00 00 00 */	li r8, 0
/* 801BC9FC 001B993C  38 00 FF FF */	li r0, -1
/* 801BCA00 001B9940  38 E0 00 FF */	li r7, 0xff
/* 801BCA04 001B9944  38 C0 00 01 */	li r6, 1
/* 801BCA08 001B9948  B0 61 00 08 */	sth r3, 8(r1)
/* 801BCA0C 001B994C  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801BCA10 001B9950  38 81 01 5C */	addi r4, r1, 0x15c
/* 801BCA14 001B9954  92 C1 01 5C */	stw r22, 0x15c(r1)
/* 801BCA18 001B9958  38 A1 00 08 */	addi r5, r1, 8
/* 801BCA1C 001B995C  99 01 01 78 */	stb r8, 0x178(r1)
/* 801BCA20 001B9960  B1 01 01 70 */	sth r8, 0x170(r1)
/* 801BCA24 001B9964  98 E1 01 72 */	stb r7, 0x172(r1)
/* 801BCA28 001B9968  91 01 01 74 */	stw r8, 0x174(r1)
/* 801BCA2C 001B996C  99 01 01 73 */	stb r8, 0x173(r1)
/* 801BCA30 001B9970  98 C1 01 60 */	stb r6, 0x160(r1)
/* 801BCA34 001B9974  99 01 01 79 */	stb r8, 0x179(r1)
/* 801BCA38 001B9978  90 01 01 80 */	stw r0, 0x180(r1)
/* 801BCA3C 001B997C  90 01 01 7C */	stw r0, 0x17c(r1)
/* 801BCA40 001B9980  99 01 01 7A */	stb r8, 0x17a(r1)
/* 801BCA44 001B9984  99 01 01 7B */	stb r8, 0x17b(r1)
/* 801BCA48 001B9988  4B FB 11 49 */	bl makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode
/* 801BCA4C 001B998C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BCA50 001B9990  41 82 00 38 */	beq .L_801BCA88
/* 801BCA54 001B9994  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801BCA58 001B9998  38 81 01 5C */	addi r4, r1, 0x15c
/* 801BCA5C 001B999C  4B FB 0C 81 */	bl setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801BCA60 001B99A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BCA64 001B99A4  41 82 00 1C */	beq .L_801BCA80
/* 801BCA68 001B99A8  88 0D 84 20 */	lbz r0, sFromTekiEnable__Q24Game6Pellet@sda21(r13)
/* 801BCA6C 001B99AC  28 00 00 00 */	cmplwi r0, 0
/* 801BCA70 001B99B0  41 82 00 18 */	beq .L_801BCA88
/* 801BCA74 001B99B4  38 61 01 5C */	addi r3, r1, 0x15c
/* 801BCA78 001B99B8  48 08 09 B1 */	bl entry__Q24Game17PelletBirthBufferFRQ24Game13PelletInitArg
/* 801BCA7C 001B99BC  48 00 00 0C */	b .L_801BCA88
.L_801BCA80:
/* 801BCA80 001B99C0  38 00 00 00 */	li r0, 0
/* 801BCA84 001B99C4  B0 01 00 08 */	sth r0, 8(r1)
.L_801BCA88:
/* 801BCA88 001B99C8  7F 23 CB 78 */	mr r3, r25
/* 801BCA8C 001B99CC  81 99 00 00 */	lwz r12, 0(r25)
/* 801BCA90 001B99D0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BCA94 001B99D4  7D 89 03 A6 */	mtctr r12
/* 801BCA98 001B99D8  4E 80 04 21 */	bctrl 
/* 801BCA9C 001B99DC  54 74 06 3E */	clrlwi r20, r3, 0x18
/* 801BCAA0 001B99E0  7F 23 CB 78 */	mr r3, r25
/* 801BCAA4 001B99E4  81 99 00 00 */	lwz r12, 0(r25)
/* 801BCAA8 001B99E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BCAAC 001B99EC  7D 89 03 A6 */	mtctr r12
/* 801BCAB0 001B99F0  4E 80 04 21 */	bctrl 
/* 801BCAB4 001B99F4  7C 64 1B 78 */	mr r4, r3
/* 801BCAB8 001B99F8  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 801BCABC 001B99FC  7E 85 A3 78 */	mr r5, r20
/* 801BCAC0 001B9A00  38 C0 00 00 */	li r6, 0
/* 801BCAC4 001B9A04  4B F5 0D 91 */	bl addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
/* 801BCAC8 001B9A08  3B 7B 00 01 */	addi r27, r27, 1
.L_801BCACC:
/* 801BCACC 001B9A0C  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 801BCAD0 001B9A10  38 80 00 00 */	li r4, 0
/* 801BCAD4 001B9A14  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCAD8 001B9A18  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BCADC 001B9A1C  7D 89 03 A6 */	mtctr r12
/* 801BCAE0 001B9A20  4E 80 04 21 */	bctrl 
/* 801BCAE4 001B9A24  7C 1B 18 00 */	cmpw r27, r3
/* 801BCAE8 001B9A28  41 80 FE D4 */	blt .L_801BC9BC
/* 801BCAEC 001B9A2C  3A 80 00 00 */	li r20, 0
/* 801BCAF0 001B9A30  48 00 00 4C */	b .L_801BCB3C
.L_801BCAF4:
/* 801BCAF4 001B9A34  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 801BCAF8 001B9A38  7E 85 A3 78 */	mr r5, r20
/* 801BCAFC 001B9A3C  38 80 00 01 */	li r4, 1
/* 801BCB00 001B9A40  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCB04 001B9A44  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801BCB08 001B9A48  7D 89 03 A6 */	mtctr r12
/* 801BCB0C 001B9A4C  4E 80 04 21 */	bctrl 
/* 801BCB10 001B9A50  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCB14 001B9A54  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BCB18 001B9A58  7D 89 03 A6 */	mtctr r12
/* 801BCB1C 001B9A5C  4E 80 04 21 */	bctrl 
/* 801BCB20 001B9A60  7C 64 1B 78 */	mr r4, r3
/* 801BCB24 001B9A64  38 61 01 0C */	addi r3, r1, 0x10c
/* 801BCB28 001B9A68  4B FA 9F 1D */	bl __ct__Q24Game18PelletIndexInitArgFi
/* 801BCB2C 001B9A6C  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801BCB30 001B9A70  38 81 01 0C */	addi r4, r1, 0x10c
/* 801BCB34 001B9A74  4B FB 0B A9 */	bl setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801BCB38 001B9A78  3A 94 00 01 */	addi r20, r20, 1
.L_801BCB3C:
/* 801BCB3C 001B9A7C  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 801BCB40 001B9A80  38 80 00 01 */	li r4, 1
/* 801BCB44 001B9A84  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCB48 001B9A88  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BCB4C 001B9A8C  7D 89 03 A6 */	mtctr r12
/* 801BCB50 001B9A90  4E 80 04 21 */	bctrl 
/* 801BCB54 001B9A94  7C 14 18 00 */	cmpw r20, r3
/* 801BCB58 001B9A98  41 80 FF 9C */	blt .L_801BCAF4
/* 801BCB5C 001B9A9C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801BCB60 001B9AA0  28 03 00 00 */	cmplwi r3, 0
/* 801BCB64 001B9AA4  41 82 00 50 */	beq .L_801BCBB4
/* 801BCB68 001B9AA8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801BCB6C 001B9AAC  2C 00 00 01 */	cmpwi r0, 1
/* 801BCB70 001B9AB0  40 82 00 44 */	bne .L_801BCBB4
/* 801BCB74 001B9AB4  80 6D 84 78 */	lwz r3, cCoin__13VsOtakaraName@sda21(r13)
/* 801BCB78 001B9AB8  38 81 00 0C */	addi r4, r1, 0xc
/* 801BCB7C 001B9ABC  48 06 B2 C5 */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801BCB80 001B9AC0  7C 64 1B 79 */	or. r4, r3, r3
/* 801BCB84 001B9AC4  41 82 00 30 */	beq .L_801BCBB4
/* 801BCB88 001B9AC8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801BCB8C 001B9ACC  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801BCB90 001B9AD0  A8 A4 02 58 */	lha r5, 0x258(r4)
/* 801BCB94 001B9AD4  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 801BCB98 001B9AD8  4B FB 22 05 */	bl encode__Q24Game9PelletMgrFUci
/* 801BCB9C 001B9ADC  7C 64 1B 78 */	mr r4, r3
/* 801BCBA0 001B9AE0  38 61 01 34 */	addi r3, r1, 0x134
/* 801BCBA4 001B9AE4  4B FA 9E A1 */	bl __ct__Q24Game18PelletIndexInitArgFi
/* 801BCBA8 001B9AE8  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801BCBAC 001B9AEC  38 81 01 34 */	addi r4, r1, 0x134
/* 801BCBB0 001B9AF0  4B FB 0B 2D */	bl setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg
.L_801BCBB4:
/* 801BCBB4 001B9AF4  C0 02 B0 EC */	lfs f0, lbl_8051944C@sda21(r2)
/* 801BCBB8 001B9AF8  38 61 02 14 */	addi r3, r1, 0x214
/* 801BCBBC 001B9AFC  C0 22 B0 E0 */	lfs f1, lbl_80519440@sda21(r2)
/* 801BCBC0 001B9B00  38 81 00 D0 */	addi r4, r1, 0xd0
/* 801BCBC4 001B9B04  EC 5C 00 32 */	fmuls f2, f28, f0
/* 801BCBC8 001B9B08  D3 E1 00 C8 */	stfs f31, 0xc8(r1)
/* 801BCBCC 001B9B0C  EC 1B 00 32 */	fmuls f0, f27, f0
/* 801BCBD0 001B9B10  38 A1 00 C4 */	addi r5, r1, 0xc4
/* 801BCBD4 001B9B14  D0 21 00 D4 */	stfs f1, 0xd4(r1)
/* 801BCBD8 001B9B18  D0 41 00 D0 */	stfs f2, 0xd0(r1)
/* 801BCBDC 001B9B1C  D0 01 00 D8 */	stfs f0, 0xd8(r1)
/* 801BCBE0 001B9B20  D0 21 00 C4 */	stfs f1, 0xc4(r1)
/* 801BCBE4 001B9B24  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 801BCBE8 001B9B28  48 26 BC A1 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801BCBEC 001B9B2C  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 801BCBF0 001B9B30  38 00 00 00 */	li r0, 0
/* 801BCBF4 001B9B34  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801BCBF8 001B9B38  38 84 5E E0 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801BCBFC 001B9B3C  28 00 00 00 */	cmplwi r0, 0
/* 801BCC00 001B9B40  90 81 00 38 */	stw r4, 0x38(r1)
/* 801BCC04 001B9B44  90 01 00 44 */	stw r0, 0x44(r1)
/* 801BCC08 001B9B48  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801BCC0C 001B9B4C  90 61 00 40 */	stw r3, 0x40(r1)
/* 801BCC10 001B9B50  40 82 00 1C */	bne .L_801BCC2C
/* 801BCC14 001B9B54  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCC18 001B9B58  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BCC1C 001B9B5C  7D 89 03 A6 */	mtctr r12
/* 801BCC20 001B9B60  4E 80 04 21 */	bctrl 
/* 801BCC24 001B9B64  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801BCC28 001B9B68  48 00 01 7C */	b .L_801BCDA4
.L_801BCC2C:
/* 801BCC2C 001B9B6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCC30 001B9B70  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BCC34 001B9B74  7D 89 03 A6 */	mtctr r12
/* 801BCC38 001B9B78  4E 80 04 21 */	bctrl 
/* 801BCC3C 001B9B7C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801BCC40 001B9B80  48 00 00 58 */	b .L_801BCC98
.L_801BCC44:
/* 801BCC44 001B9B84  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BCC48 001B9B88  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BCC4C 001B9B8C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCC50 001B9B90  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BCC54 001B9B94  7D 89 03 A6 */	mtctr r12
/* 801BCC58 001B9B98  4E 80 04 21 */	bctrl 
/* 801BCC5C 001B9B9C  7C 64 1B 78 */	mr r4, r3
/* 801BCC60 001B9BA0  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BCC64 001B9BA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCC68 001B9BA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BCC6C 001B9BAC  7D 89 03 A6 */	mtctr r12
/* 801BCC70 001B9BB0  4E 80 04 21 */	bctrl 
/* 801BCC74 001B9BB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BCC78 001B9BB8  40 82 01 2C */	bne .L_801BCDA4
/* 801BCC7C 001B9BBC  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BCC80 001B9BC0  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BCC84 001B9BC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCC88 001B9BC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BCC8C 001B9BCC  7D 89 03 A6 */	mtctr r12
/* 801BCC90 001B9BD0  4E 80 04 21 */	bctrl 
/* 801BCC94 001B9BD4  90 61 00 3C */	stw r3, 0x3c(r1)
.L_801BCC98:
/* 801BCC98 001B9BD8  81 81 00 38 */	lwz r12, 0x38(r1)
/* 801BCC9C 001B9BDC  38 61 00 38 */	addi r3, r1, 0x38
/* 801BCCA0 001B9BE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BCCA4 001B9BE4  7D 89 03 A6 */	mtctr r12
/* 801BCCA8 001B9BE8  4E 80 04 21 */	bctrl 
/* 801BCCAC 001B9BEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BCCB0 001B9BF0  41 82 FF 94 */	beq .L_801BCC44
/* 801BCCB4 001B9BF4  48 00 00 F0 */	b .L_801BCDA4
.L_801BCCB8:
/* 801BCCB8 001B9BF8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BCCBC 001B9BFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCCC0 001B9C00  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BCCC4 001B9C04  7D 89 03 A6 */	mtctr r12
/* 801BCCC8 001B9C08  4E 80 04 21 */	bctrl 
/* 801BCCCC 001B9C0C  7C 75 1B 78 */	mr r21, r3
/* 801BCCD0 001B9C10  7F 43 D3 78 */	mr r3, r26
/* 801BCCD4 001B9C14  80 95 00 08 */	lwz r4, 8(r21)
/* 801BCCD8 001B9C18  4B F0 D9 E9 */	bl strcmp
/* 801BCCDC 001B9C1C  2C 03 00 00 */	cmpwi r3, 0
/* 801BCCE0 001B9C20  40 82 00 08 */	bne .L_801BCCE8
/* 801BCCE4 001B9C24  48 00 00 E4 */	b .L_801BCDC8
.L_801BCCE8:
/* 801BCCE8 001B9C28  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801BCCEC 001B9C2C  28 00 00 00 */	cmplwi r0, 0
/* 801BCCF0 001B9C30  40 82 00 24 */	bne .L_801BCD14
/* 801BCCF4 001B9C34  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BCCF8 001B9C38  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BCCFC 001B9C3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCD00 001B9C40  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BCD04 001B9C44  7D 89 03 A6 */	mtctr r12
/* 801BCD08 001B9C48  4E 80 04 21 */	bctrl 
/* 801BCD0C 001B9C4C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801BCD10 001B9C50  48 00 00 94 */	b .L_801BCDA4
.L_801BCD14:
/* 801BCD14 001B9C54  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BCD18 001B9C58  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BCD1C 001B9C5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCD20 001B9C60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BCD24 001B9C64  7D 89 03 A6 */	mtctr r12
/* 801BCD28 001B9C68  4E 80 04 21 */	bctrl 
/* 801BCD2C 001B9C6C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801BCD30 001B9C70  48 00 00 58 */	b .L_801BCD88
.L_801BCD34:
/* 801BCD34 001B9C74  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BCD38 001B9C78  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BCD3C 001B9C7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCD40 001B9C80  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BCD44 001B9C84  7D 89 03 A6 */	mtctr r12
/* 801BCD48 001B9C88  4E 80 04 21 */	bctrl 
/* 801BCD4C 001B9C8C  7C 64 1B 78 */	mr r4, r3
/* 801BCD50 001B9C90  80 61 00 44 */	lwz r3, 0x44(r1)
/* 801BCD54 001B9C94  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCD58 001B9C98  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BCD5C 001B9C9C  7D 89 03 A6 */	mtctr r12
/* 801BCD60 001B9CA0  4E 80 04 21 */	bctrl 
/* 801BCD64 001B9CA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BCD68 001B9CA8  40 82 00 3C */	bne .L_801BCDA4
/* 801BCD6C 001B9CAC  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BCD70 001B9CB0  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BCD74 001B9CB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCD78 001B9CB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BCD7C 001B9CBC  7D 89 03 A6 */	mtctr r12
/* 801BCD80 001B9CC0  4E 80 04 21 */	bctrl 
/* 801BCD84 001B9CC4  90 61 00 3C */	stw r3, 0x3c(r1)
.L_801BCD88:
/* 801BCD88 001B9CC8  81 81 00 38 */	lwz r12, 0x38(r1)
/* 801BCD8C 001B9CCC  38 61 00 38 */	addi r3, r1, 0x38
/* 801BCD90 001B9CD0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BCD94 001B9CD4  7D 89 03 A6 */	mtctr r12
/* 801BCD98 001B9CD8  4E 80 04 21 */	bctrl 
/* 801BCD9C 001B9CDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BCDA0 001B9CE0  41 82 FF 94 */	beq .L_801BCD34
.L_801BCDA4:
/* 801BCDA4 001B9CE4  80 61 00 40 */	lwz r3, 0x40(r1)
/* 801BCDA8 001B9CE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCDAC 001B9CEC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BCDB0 001B9CF0  7D 89 03 A6 */	mtctr r12
/* 801BCDB4 001B9CF4  4E 80 04 21 */	bctrl 
/* 801BCDB8 001B9CF8  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 801BCDBC 001B9CFC  7C 04 18 40 */	cmplw r4, r3
/* 801BCDC0 001B9D00  40 82 FE F8 */	bne .L_801BCCB8
/* 801BCDC4 001B9D04  3A A0 00 00 */	li r21, 0
.L_801BCDC8:
/* 801BCDC8 001B9D08  92 BF 01 38 */	stw r21, 0x138(r31)
/* 801BCDCC 001B9D0C  38 61 02 14 */	addi r3, r1, 0x214
/* 801BCDD0 001B9D10  38 9F 00 D8 */	addi r4, r31, 0xd8
/* 801BCDD4 001B9D14  4B F2 D4 F9 */	bl PSMTXCopy
/* 801BCDD8 001B9D18  38 61 02 14 */	addi r3, r1, 0x214
/* 801BCDDC 001B9D1C  38 9F 01 08 */	addi r4, r31, 0x108
/* 801BCDE0 001B9D20  4B F2 D6 3D */	bl PSMTXInverse
/* 801BCDE4 001B9D24  38 60 00 14 */	li r3, 0x14
/* 801BCDE8 001B9D28  4B E6 70 BD */	bl __nw__FUl
/* 801BCDEC 001B9D2C  7C 60 1B 79 */	or. r0, r3, r3
/* 801BCDF0 001B9D30  41 82 00 18 */	beq .L_801BCE08
/* 801BCDF4 001B9D34  80 95 00 0C */	lwz r4, 0xc(r21)
/* 801BCDF8 001B9D38  3C A0 00 02 */	lis r5, 2
/* 801BCDFC 001B9D3C  38 C0 00 02 */	li r6, 2
/* 801BCE00 001B9D40  48 28 13 D9 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801BCE04 001B9D44  7C 60 1B 78 */	mr r0, r3
.L_801BCE08:
/* 801BCE08 001B9D48  90 1F 01 3C */	stw r0, 0x13c(r31)
/* 801BCE0C 001B9D4C  38 80 00 00 */	li r4, 0
/* 801BCE10 001B9D50  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801BCE14 001B9D54  80 63 00 08 */	lwz r3, 8(r3)
/* 801BCE18 001B9D58  4B EA 99 51 */	bl newDifferedTexMtx__8J3DModelF14J3DTexDiffFlag
/* 801BCE1C 001B9D5C  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801BCE20 001B9D60  38 80 02 00 */	li r4, 0x200
/* 801BCE24 001B9D64  80 63 00 08 */	lwz r3, 8(r3)
/* 801BCE28 001B9D68  4B EA 98 B1 */	bl newDifferedDisplayList__8J3DModelFUl
/* 801BCE2C 001B9D6C  80 9F 01 3C */	lwz r4, 0x13c(r31)
/* 801BCE30 001B9D70  38 7F 00 D8 */	addi r3, r31, 0xd8
/* 801BCE34 001B9D74  80 84 00 08 */	lwz r4, 8(r4)
/* 801BCE38 001B9D78  38 84 00 24 */	addi r4, r4, 0x24
/* 801BCE3C 001B9D7C  4B F2 D4 91 */	bl PSMTXCopy
/* 801BCE40 001B9D80  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801BCE44 001B9D84  80 63 00 08 */	lwz r3, 8(r3)
/* 801BCE48 001B9D88  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCE4C 001B9D8C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BCE50 001B9D90  7D 89 03 A6 */	mtctr r12
/* 801BCE54 001B9D94  4E 80 04 21 */	bctrl 
/* 801BCE58 001B9D98  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801BCE5C 001B9D9C  80 63 00 08 */	lwz r3, 8(r3)
/* 801BCE60 001B9DA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCE64 001B9DA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BCE68 001B9DA8  7D 89 03 A6 */	mtctr r12
/* 801BCE6C 001B9DAC  4E 80 04 21 */	bctrl 
/* 801BCE70 001B9DB0  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801BCE74 001B9DB4  80 63 00 08 */	lwz r3, 8(r3)
/* 801BCE78 001B9DB8  4B EA 9A AD */	bl makeDL__8J3DModelFv
/* 801BCE7C 001B9DBC  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 801BCE80 001B9DC0  80 63 00 08 */	lwz r3, 8(r3)
/* 801BCE84 001B9DC4  4B EA 99 71 */	bl lock__8J3DModelFv
/* 801BCE88 001B9DC8  80 15 00 E8 */	lwz r0, 0xe8(r21)
/* 801BCE8C 001B9DCC  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 801BCE90 001B9DD0  82 9F 00 C8 */	lwz r20, 0xc8(r31)
/* 801BCE94 001B9DD4  1C 74 00 0C */	mulli r3, r20, 0xc
/* 801BCE98 001B9DD8  38 63 00 10 */	addi r3, r3, 0x10
/* 801BCE9C 001B9DDC  4B E6 71 11 */	bl __nwa__FUl
/* 801BCEA0 001B9DE0  3C 80 80 16 */	lis r4, __ct__Q23Sys15MatLoopAnimatorFv@ha
/* 801BCEA4 001B9DE4  7E 87 A3 78 */	mr r7, r20
/* 801BCEA8 001B9DE8  38 84 38 EC */	addi r4, r4, __ct__Q23Sys15MatLoopAnimatorFv@l
/* 801BCEAC 001B9DEC  38 A0 00 00 */	li r5, 0
/* 801BCEB0 001B9DF0  38 C0 00 0C */	li r6, 0xc
/* 801BCEB4 001B9DF4  4B F0 4B 3D */	bl __construct_new_array
/* 801BCEB8 001B9DF8  3A 80 00 00 */	li r20, 0
/* 801BCEBC 001B9DFC  90 7F 00 CC */	stw r3, 0xcc(r31)
/* 801BCEC0 001B9E00  7E 96 A3 78 */	mr r22, r20
/* 801BCEC4 001B9E04  7E 97 A3 78 */	mr r23, r20
/* 801BCEC8 001B9E08  48 00 00 30 */	b .L_801BCEF8
.L_801BCECC:
/* 801BCECC 001B9E0C  80 7F 00 CC */	lwz r3, 0xcc(r31)
/* 801BCED0 001B9E10  80 15 00 EC */	lwz r0, 0xec(r21)
/* 801BCED4 001B9E14  7C 63 BA 14 */	add r3, r3, r23
/* 801BCED8 001B9E18  81 83 00 00 */	lwz r12, 0(r3)
/* 801BCEDC 001B9E1C  7C 80 B2 14 */	add r4, r0, r22
/* 801BCEE0 001B9E20  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BCEE4 001B9E24  7D 89 03 A6 */	mtctr r12
/* 801BCEE8 001B9E28  4E 80 04 21 */	bctrl 
/* 801BCEEC 001B9E2C  3A D6 00 10 */	addi r22, r22, 0x10
/* 801BCEF0 001B9E30  3A F7 00 0C */	addi r23, r23, 0xc
/* 801BCEF4 001B9E34  3A 94 00 01 */	addi r20, r20, 1
.L_801BCEF8:
/* 801BCEF8 001B9E38  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 801BCEFC 001B9E3C  7C 14 00 00 */	cmpw r20, r0
/* 801BCF00 001B9E40  41 80 FF CC */	blt .L_801BCECC
/* 801BCF04 001B9E44  C0 35 00 7C */	lfs f1, 0x7c(r21)
/* 801BCF08 001B9E48  38 61 01 E4 */	addi r3, r1, 0x1e4
/* 801BCF0C 001B9E4C  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801BCF10 001B9E50  38 81 00 D0 */	addi r4, r1, 0xd0
/* 801BCF14 001B9E54  D0 21 00 F4 */	stfs f1, 0xf4(r1)
/* 801BCF18 001B9E58  38 A1 00 B8 */	addi r5, r1, 0xb8
/* 801BCF1C 001B9E5C  C0 35 00 80 */	lfs f1, 0x80(r21)
/* 801BCF20 001B9E60  D0 21 00 F8 */	stfs f1, 0xf8(r1)
/* 801BCF24 001B9E64  C0 35 00 84 */	lfs f1, 0x84(r21)
/* 801BCF28 001B9E68  D0 21 00 FC */	stfs f1, 0xfc(r1)
/* 801BCF2C 001B9E6C  C0 35 00 88 */	lfs f1, 0x88(r21)
/* 801BCF30 001B9E70  D0 21 01 00 */	stfs f1, 0x100(r1)
/* 801BCF34 001B9E74  C0 35 00 8C */	lfs f1, 0x8c(r21)
/* 801BCF38 001B9E78  D0 21 01 04 */	stfs f1, 0x104(r1)
/* 801BCF3C 001B9E7C  C0 35 00 90 */	lfs f1, 0x90(r21)
/* 801BCF40 001B9E80  D0 21 01 08 */	stfs f1, 0x108(r1)
/* 801BCF44 001B9E84  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 801BCF48 001B9E88  D3 E1 00 BC */	stfs f31, 0xbc(r1)
/* 801BCF4C 001B9E8C  D0 01 00 C0 */	stfs f0, 0xc0(r1)
/* 801BCF50 001B9E90  48 26 B9 39 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801BCF54 001B9E94  38 61 00 F4 */	addi r3, r1, 0xf4
/* 801BCF58 001B9E98  38 81 01 E4 */	addi r4, r1, 0x1e4
/* 801BCF5C 001B9E9C  48 25 60 E1 */	bl transform__8BoundBoxFR7Matrixf
/* 801BCF60 001B9EA0  C0 21 00 F4 */	lfs f1, 0xf4(r1)
/* 801BCF64 001B9EA4  C0 1D 00 DC */	lfs f0, 0xdc(r29)
/* 801BCF68 001B9EA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BCF6C 001B9EAC  40 80 00 08 */	bge .L_801BCF74
/* 801BCF70 001B9EB0  D0 3D 00 DC */	stfs f1, 0xdc(r29)
.L_801BCF74:
/* 801BCF74 001B9EB4  C0 21 00 F8 */	lfs f1, 0xf8(r1)
/* 801BCF78 001B9EB8  C0 1D 00 E0 */	lfs f0, 0xe0(r29)
/* 801BCF7C 001B9EBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BCF80 001B9EC0  40 80 00 08 */	bge .L_801BCF88
/* 801BCF84 001B9EC4  D0 3D 00 E0 */	stfs f1, 0xe0(r29)
.L_801BCF88:
/* 801BCF88 001B9EC8  C0 21 00 FC */	lfs f1, 0xfc(r1)
/* 801BCF8C 001B9ECC  C0 1D 00 E4 */	lfs f0, 0xe4(r29)
/* 801BCF90 001B9ED0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BCF94 001B9ED4  40 80 00 08 */	bge .L_801BCF9C
/* 801BCF98 001B9ED8  D0 3D 00 E4 */	stfs f1, 0xe4(r29)
.L_801BCF9C:
/* 801BCF9C 001B9EDC  C0 21 01 00 */	lfs f1, 0x100(r1)
/* 801BCFA0 001B9EE0  C0 1D 00 E8 */	lfs f0, 0xe8(r29)
/* 801BCFA4 001B9EE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BCFA8 001B9EE8  40 81 00 08 */	ble .L_801BCFB0
/* 801BCFAC 001B9EEC  D0 3D 00 E8 */	stfs f1, 0xe8(r29)
.L_801BCFB0:
/* 801BCFB0 001B9EF0  C0 21 01 04 */	lfs f1, 0x104(r1)
/* 801BCFB4 001B9EF4  C0 1D 00 EC */	lfs f0, 0xec(r29)
/* 801BCFB8 001B9EF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BCFBC 001B9EFC  40 81 00 08 */	ble .L_801BCFC4
/* 801BCFC0 001B9F00  D0 3D 00 EC */	stfs f1, 0xec(r29)
.L_801BCFC4:
/* 801BCFC4 001B9F04  C0 21 01 08 */	lfs f1, 0x108(r1)
/* 801BCFC8 001B9F08  C0 1D 00 F0 */	lfs f0, 0xf0(r29)
/* 801BCFCC 001B9F0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801BCFD0 001B9F10  40 81 00 08 */	ble .L_801BCFD8
/* 801BCFD4 001B9F14  D0 3D 00 F0 */	stfs f1, 0xf0(r29)
.L_801BCFD8:
/* 801BCFD8 001B9F18  38 61 00 F4 */	addi r3, r1, 0xf4
/* 801BCFDC 001B9F1C  38 9F 01 40 */	addi r4, r31, 0x140
/* 801BCFE0 001B9F20  48 25 5F 95 */	bl makeBoundSphere__8BoundBoxFRQ23Sys6Sphere
/* 801BCFE4 001B9F24  C0 01 00 F8 */	lfs f0, 0xf8(r1)
/* 801BCFE8 001B9F28  38 61 00 DC */	addi r3, r1, 0xdc
/* 801BCFEC 001B9F2C  C0 41 01 04 */	lfs f2, 0x104(r1)
/* 801BCFF0 001B9F30  38 9F 01 90 */	addi r4, r31, 0x190
/* 801BCFF4 001B9F34  C0 A1 00 F4 */	lfs f5, 0xf4(r1)
/* 801BCFF8 001B9F38  C0 81 00 FC */	lfs f4, 0xfc(r1)
/* 801BCFFC 001B9F3C  C0 61 01 00 */	lfs f3, 0x100(r1)
/* 801BD000 001B9F40  C0 21 01 08 */	lfs f1, 0x108(r1)
/* 801BD004 001B9F44  D0 01 00 E0 */	stfs f0, 0xe0(r1)
/* 801BD008 001B9F48  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801BD00C 001B9F4C  D0 41 00 EC */	stfs f2, 0xec(r1)
/* 801BD010 001B9F50  D0 A1 00 DC */	stfs f5, 0xdc(r1)
/* 801BD014 001B9F54  D0 81 00 E4 */	stfs f4, 0xe4(r1)
/* 801BD018 001B9F58  D0 61 00 E8 */	stfs f3, 0xe8(r1)
/* 801BD01C 001B9F5C  D0 21 00 F0 */	stfs f1, 0xf0(r1)
/* 801BD020 001B9F60  D0 01 00 E0 */	stfs f0, 0xe0(r1)
/* 801BD024 001B9F64  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 801BD028 001B9F68  48 25 5F 4D */	bl makeBoundSphere__8BoundBoxFRQ23Sys6Sphere
/* 801BD02C 001B9F6C  80 9F 01 3C */	lwz r4, 0x13c(r31)
/* 801BD030 001B9F70  38 61 00 78 */	addi r3, r1, 0x78
/* 801BD034 001B9F74  48 28 16 FD */	bl getRoughCenter__Q28SysShape5ModelFv
/* 801BD038 001B9F78  80 BF 01 3C */	lwz r5, 0x13c(r31)
/* 801BD03C 001B9F7C  38 80 00 00 */	li r4, 0
/* 801BD040 001B9F80  C3 C1 00 78 */	lfs f30, 0x78(r1)
/* 801BD044 001B9F84  80 05 00 0C */	lwz r0, 0xc(r5)
/* 801BD048 001B9F88  C3 A1 00 7C */	lfs f29, 0x7c(r1)
/* 801BD04C 001B9F8C  C3 81 00 80 */	lfs f28, 0x80(r1)
/* 801BD050 001B9F90  C3 62 B0 E0 */	lfs f27, lbl_80519440@sda21(r2)
/* 801BD054 001B9F94  7C 09 03 A6 */	mtctr r0
/* 801BD058 001B9F98  2C 00 00 00 */	cmpwi r0, 0
/* 801BD05C 001B9F9C  40 81 00 28 */	ble .L_801BD084
.L_801BD060:
/* 801BD060 001B9FA0  80 65 00 10 */	lwz r3, 0x10(r5)
/* 801BD064 001B9FA4  38 04 00 18 */	addi r0, r4, 0x18
/* 801BD068 001B9FA8  7C 63 00 2E */	lwzx r3, r3, r0
/* 801BD06C 001B9FAC  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 801BD070 001B9FB0  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 801BD074 001B9FB4  40 80 00 08 */	bge .L_801BD07C
/* 801BD078 001B9FB8  FF 60 00 90 */	fmr f27, f0
.L_801BD07C:
/* 801BD07C 001B9FBC  38 84 00 3C */	addi r4, r4, 0x3c
/* 801BD080 001B9FC0  42 00 FF E0 */	bdnz .L_801BD060
.L_801BD084:
/* 801BD084 001B9FC4  7F 43 D3 78 */	mr r3, r26
/* 801BD088 001B9FC8  38 9E 02 BC */	addi r4, r30, 0x2bc
/* 801BD08C 001B9FCC  4B F0 D6 35 */	bl strcmp
/* 801BD090 001B9FD0  2C 03 00 00 */	cmpwi r3, 0
/* 801BD094 001B9FD4  40 82 00 0C */	bne .L_801BD0A0
/* 801BD098 001B9FD8  C0 02 B1 00 */	lfs f0, lbl_80519460@sda21(r2)
/* 801BD09C 001B9FDC  EF 7B 00 2A */	fadds f27, f27, f0
.L_801BD0A0:
/* 801BD0A0 001B9FE0  C0 01 00 D0 */	lfs f0, 0xd0(r1)
/* 801BD0A4 001B9FE4  38 7F 01 60 */	addi r3, r31, 0x160
/* 801BD0A8 001B9FE8  C0 41 00 D4 */	lfs f2, 0xd4(r1)
/* 801BD0AC 001B9FEC  38 81 00 AC */	addi r4, r1, 0xac
/* 801BD0B0 001B9FF0  EC 3E 00 2A */	fadds f1, f30, f0
/* 801BD0B4 001B9FF4  C0 61 00 D8 */	lfs f3, 0xd8(r1)
/* 801BD0B8 001B9FF8  EC 5D 10 2A */	fadds f2, f29, f2
/* 801BD0BC 001B9FFC  C0 02 B1 34 */	lfs f0, lbl_80519494@sda21(r2)
/* 801BD0C0 001BA000  EC 7C 18 2A */	fadds f3, f28, f3
/* 801BD0C4 001BA004  38 A1 00 A0 */	addi r5, r1, 0xa0
/* 801BD0C8 001BA008  D0 3F 01 50 */	stfs f1, 0x150(r31)
/* 801BD0CC 001BA00C  D0 5F 01 54 */	stfs f2, 0x154(r31)
/* 801BD0D0 001BA010  D0 7F 01 58 */	stfs f3, 0x158(r31)
/* 801BD0D4 001BA014  D3 7F 01 5C */	stfs f27, 0x15c(r31)
/* 801BD0D8 001BA018  C0 7F 01 44 */	lfs f3, 0x144(r31)
/* 801BD0DC 001BA01C  C0 3F 01 4C */	lfs f1, 0x14c(r31)
/* 801BD0E0 001BA020  C0 5F 01 40 */	lfs f2, 0x140(r31)
/* 801BD0E4 001BA024  EC 03 00 28 */	fsubs f0, f3, f0
/* 801BD0E8 001BA028  C0 9F 01 48 */	lfs f4, 0x148(r31)
/* 801BD0EC 001BA02C  D0 61 00 A4 */	stfs f3, 0xa4(r1)
/* 801BD0F0 001BA030  D0 41 00 AC */	stfs f2, 0xac(r1)
/* 801BD0F4 001BA034  D0 61 00 B0 */	stfs f3, 0xb0(r1)
/* 801BD0F8 001BA038  D0 81 00 B4 */	stfs f4, 0xb4(r1)
/* 801BD0FC 001BA03C  D0 41 00 A0 */	stfs f2, 0xa0(r1)
/* 801BD100 001BA040  D0 81 00 A8 */	stfs f4, 0xa8(r1)
/* 801BD104 001BA044  D0 01 00 A4 */	stfs f0, 0xa4(r1)
/* 801BD108 001BA048  48 26 45 5D */	bl "set__Q23Sys8CylinderFRC10Vector3<f>RC10Vector3<f>f"
/* 801BD10C 001BA04C  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801BD110 001BA050  38 95 00 34 */	addi r4, r21, 0x34
/* 801BD114 001BA054  38 A1 02 14 */	addi r5, r1, 0x214
/* 801BD118 001BA058  4B FF 2D 91 */	bl addSeaMgr__Q24Game6SeaMgrFPQ24Game6SeaMgrR7Matrixf
/* 801BD11C 001BA05C  7F A3 EB 78 */	mr r3, r29
/* 801BD120 001BA060  7E A4 AB 78 */	mr r4, r21
/* 801BD124 001BA064  48 00 10 9D */	bl getMUI__Q24Game10RoomMapMgrFPQ24Game7MapUnit
/* 801BD128 001BA068  7C 7B 1B 78 */	mr r27, r3
/* 801BD12C 001BA06C  A8 03 00 6C */	lha r0, 0x6c(r3)
/* 801BD130 001BA070  B0 1F 01 86 */	sth r0, 0x186(r31)
/* 801BD134 001BA074  93 7F 00 C0 */	stw r27, 0xc0(r31)
/* 801BD138 001BA078  80 03 01 14 */	lwz r0, 0x114(r3)
/* 801BD13C 001BA07C  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 801BD140 001BA080  82 9F 00 D0 */	lwz r20, 0xd0(r31)
/* 801BD144 001BA084  56 83 20 36 */	slwi r3, r20, 4
/* 801BD148 001BA088  38 63 00 10 */	addi r3, r3, 0x10
/* 801BD14C 001BA08C  4B E6 6E 61 */	bl __nwa__FUl
/* 801BD150 001BA090  3C 80 80 1B */	lis r4, __ct__Q24Game12RoomDoorInfoFv@ha
/* 801BD154 001BA094  7E 87 A3 78 */	mr r7, r20
/* 801BD158 001BA098  38 84 76 E4 */	addi r4, r4, __ct__Q24Game12RoomDoorInfoFv@l
/* 801BD15C 001BA09C  38 A0 00 00 */	li r5, 0
/* 801BD160 001BA0A0  38 C0 00 10 */	li r6, 0x10
/* 801BD164 001BA0A4  4B F0 48 8D */	bl __construct_new_array
/* 801BD168 001BA0A8  90 7F 00 D4 */	stw r3, 0xd4(r31)
/* 801BD16C 001BA0AC  3A C0 00 00 */	li r22, 0
/* 801BD170 001BA0B0  3A 80 00 01 */	li r20, 1
/* 801BD174 001BA0B4  A0 1B 00 6E */	lhz r0, 0x6e(r27)
/* 801BD178 001BA0B8  B0 1F 01 88 */	sth r0, 0x188(r31)
/* 801BD17C 001BA0BC  48 00 00 3C */	b .L_801BD1B8
.L_801BD180:
/* 801BD180 001BA0C0  7E C4 B3 78 */	mr r4, r22
/* 801BD184 001BA0C4  38 7B 01 18 */	addi r3, r27, 0x118
/* 801BD188 001BA0C8  48 25 45 15 */	bl getChildAt__5CNodeFi
/* 801BD18C 001BA0CC  7C 64 1B 78 */	mr r4, r3
/* 801BD190 001BA0D0  38 75 00 AC */	addi r3, r21, 0xac
/* 801BD194 001BA0D4  81 95 00 AC */	lwz r12, 0xac(r21)
/* 801BD198 001BA0D8  80 04 00 4C */	lwz r0, 0x4c(r4)
/* 801BD19C 001BA0DC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801BD1A0 001BA0E0  7C 04 07 34 */	extsh r4, r0
/* 801BD1A4 001BA0E4  7D 89 03 A6 */	mtctr r12
/* 801BD1A8 001BA0E8  4E 80 04 21 */	bctrl 
/* 801BD1AC 001BA0EC  9A 83 00 6E */	stb r20, 0x6e(r3)
/* 801BD1B0 001BA0F0  B2 C3 00 76 */	sth r22, 0x76(r3)
/* 801BD1B4 001BA0F4  3A D6 00 01 */	addi r22, r22, 1
.L_801BD1B8:
/* 801BD1B8 001BA0F8  80 1B 01 14 */	lwz r0, 0x114(r27)
/* 801BD1BC 001BA0FC  7C 16 00 00 */	cmpw r22, r0
/* 801BD1C0 001BA100  41 80 FF C0 */	blt .L_801BD180
/* 801BD1C4 001BA104  38 00 00 00 */	li r0, 0
/* 801BD1C8 001BA108  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8WayPoint>"@ha
/* 801BD1CC 001BA10C  38 83 23 80 */	addi r4, r3, "__vt__26Iterator<Q24Game8WayPoint>"@l
/* 801BD1D0 001BA110  38 75 00 AC */	addi r3, r21, 0xac
/* 801BD1D4 001BA114  28 00 00 00 */	cmplwi r0, 0
/* 801BD1D8 001BA118  90 81 00 90 */	stw r4, 0x90(r1)
/* 801BD1DC 001BA11C  3B 80 00 00 */	li r28, 0
/* 801BD1E0 001BA120  90 01 00 9C */	stw r0, 0x9c(r1)
/* 801BD1E4 001BA124  90 01 00 94 */	stw r0, 0x94(r1)
/* 801BD1E8 001BA128  90 61 00 98 */	stw r3, 0x98(r1)
/* 801BD1EC 001BA12C  40 82 00 1C */	bne .L_801BD208
/* 801BD1F0 001BA130  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD1F4 001BA134  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BD1F8 001BA138  7D 89 03 A6 */	mtctr r12
/* 801BD1FC 001BA13C  4E 80 04 21 */	bctrl 
/* 801BD200 001BA140  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BD204 001BA144  48 00 01 64 */	b .L_801BD368
.L_801BD208:
/* 801BD208 001BA148  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD20C 001BA14C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BD210 001BA150  7D 89 03 A6 */	mtctr r12
/* 801BD214 001BA154  4E 80 04 21 */	bctrl 
/* 801BD218 001BA158  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BD21C 001BA15C  48 00 00 58 */	b .L_801BD274
.L_801BD220:
/* 801BD220 001BA160  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD224 001BA164  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BD228 001BA168  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD22C 001BA16C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BD230 001BA170  7D 89 03 A6 */	mtctr r12
/* 801BD234 001BA174  4E 80 04 21 */	bctrl 
/* 801BD238 001BA178  7C 64 1B 78 */	mr r4, r3
/* 801BD23C 001BA17C  80 61 00 9C */	lwz r3, 0x9c(r1)
/* 801BD240 001BA180  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD244 001BA184  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BD248 001BA188  7D 89 03 A6 */	mtctr r12
/* 801BD24C 001BA18C  4E 80 04 21 */	bctrl 
/* 801BD250 001BA190  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD254 001BA194  40 82 01 14 */	bne .L_801BD368
/* 801BD258 001BA198  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD25C 001BA19C  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BD260 001BA1A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD264 001BA1A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BD268 001BA1A8  7D 89 03 A6 */	mtctr r12
/* 801BD26C 001BA1AC  4E 80 04 21 */	bctrl 
/* 801BD270 001BA1B0  90 61 00 94 */	stw r3, 0x94(r1)
.L_801BD274:
/* 801BD274 001BA1B4  81 81 00 90 */	lwz r12, 0x90(r1)
/* 801BD278 001BA1B8  38 61 00 90 */	addi r3, r1, 0x90
/* 801BD27C 001BA1BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BD280 001BA1C0  7D 89 03 A6 */	mtctr r12
/* 801BD284 001BA1C4  4E 80 04 21 */	bctrl 
/* 801BD288 001BA1C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD28C 001BA1CC  41 82 FF 94 */	beq .L_801BD220
/* 801BD290 001BA1D0  48 00 00 D8 */	b .L_801BD368
.L_801BD294:
/* 801BD294 001BA1D4  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD298 001BA1D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD29C 001BA1DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BD2A0 001BA1E0  7D 89 03 A6 */	mtctr r12
/* 801BD2A4 001BA1E4  4E 80 04 21 */	bctrl 
/* 801BD2A8 001BA1E8  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 801BD2AC 001BA1EC  3B 9C 00 01 */	addi r28, r28, 1
/* 801BD2B0 001BA1F0  28 00 00 00 */	cmplwi r0, 0
/* 801BD2B4 001BA1F4  40 82 00 24 */	bne .L_801BD2D8
/* 801BD2B8 001BA1F8  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD2BC 001BA1FC  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BD2C0 001BA200  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD2C4 001BA204  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BD2C8 001BA208  7D 89 03 A6 */	mtctr r12
/* 801BD2CC 001BA20C  4E 80 04 21 */	bctrl 
/* 801BD2D0 001BA210  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BD2D4 001BA214  48 00 00 94 */	b .L_801BD368
.L_801BD2D8:
/* 801BD2D8 001BA218  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD2DC 001BA21C  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BD2E0 001BA220  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD2E4 001BA224  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BD2E8 001BA228  7D 89 03 A6 */	mtctr r12
/* 801BD2EC 001BA22C  4E 80 04 21 */	bctrl 
/* 801BD2F0 001BA230  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BD2F4 001BA234  48 00 00 58 */	b .L_801BD34C
.L_801BD2F8:
/* 801BD2F8 001BA238  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD2FC 001BA23C  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BD300 001BA240  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD304 001BA244  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BD308 001BA248  7D 89 03 A6 */	mtctr r12
/* 801BD30C 001BA24C  4E 80 04 21 */	bctrl 
/* 801BD310 001BA250  7C 64 1B 78 */	mr r4, r3
/* 801BD314 001BA254  80 61 00 9C */	lwz r3, 0x9c(r1)
/* 801BD318 001BA258  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD31C 001BA25C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BD320 001BA260  7D 89 03 A6 */	mtctr r12
/* 801BD324 001BA264  4E 80 04 21 */	bctrl 
/* 801BD328 001BA268  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD32C 001BA26C  40 82 00 3C */	bne .L_801BD368
/* 801BD330 001BA270  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD334 001BA274  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BD338 001BA278  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD33C 001BA27C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BD340 001BA280  7D 89 03 A6 */	mtctr r12
/* 801BD344 001BA284  4E 80 04 21 */	bctrl 
/* 801BD348 001BA288  90 61 00 94 */	stw r3, 0x94(r1)
.L_801BD34C:
/* 801BD34C 001BA28C  81 81 00 90 */	lwz r12, 0x90(r1)
/* 801BD350 001BA290  38 61 00 90 */	addi r3, r1, 0x90
/* 801BD354 001BA294  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BD358 001BA298  7D 89 03 A6 */	mtctr r12
/* 801BD35C 001BA29C  4E 80 04 21 */	bctrl 
/* 801BD360 001BA2A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD364 001BA2A4  41 82 FF 94 */	beq .L_801BD2F8
.L_801BD368:
/* 801BD368 001BA2A8  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD36C 001BA2AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD370 001BA2B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BD374 001BA2B4  7D 89 03 A6 */	mtctr r12
/* 801BD378 001BA2B8  4E 80 04 21 */	bctrl 
/* 801BD37C 001BA2BC  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BD380 001BA2C0  7C 04 18 40 */	cmplw r4, r3
/* 801BD384 001BA2C4  40 82 FF 10 */	bne .L_801BD294
/* 801BD388 001BA2C8  57 83 10 3A */	slwi r3, r28, 2
/* 801BD38C 001BA2CC  38 80 FF E0 */	li r4, -32
/* 801BD390 001BA2D0  4B E6 6C 69 */	bl __nwa__FUli
/* 801BD394 001BA2D4  90 7F 01 8C */	stw r3, 0x18c(r31)
/* 801BD398 001BA2D8  3B 40 00 00 */	li r26, 0
/* 801BD39C 001BA2DC  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 801BD3A0 001BA2E0  28 00 00 00 */	cmplwi r0, 0
/* 801BD3A4 001BA2E4  40 82 00 20 */	bne .L_801BD3C4
/* 801BD3A8 001BA2E8  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD3AC 001BA2EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD3B0 001BA2F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BD3B4 001BA2F4  7D 89 03 A6 */	mtctr r12
/* 801BD3B8 001BA2F8  4E 80 04 21 */	bctrl 
/* 801BD3BC 001BA2FC  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BD3C0 001BA300  48 00 07 BC */	b .L_801BDB7C
.L_801BD3C4:
/* 801BD3C4 001BA304  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD3C8 001BA308  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD3CC 001BA30C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BD3D0 001BA310  7D 89 03 A6 */	mtctr r12
/* 801BD3D4 001BA314  4E 80 04 21 */	bctrl 
/* 801BD3D8 001BA318  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BD3DC 001BA31C  48 00 00 58 */	b .L_801BD434
.L_801BD3E0:
/* 801BD3E0 001BA320  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD3E4 001BA324  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BD3E8 001BA328  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD3EC 001BA32C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BD3F0 001BA330  7D 89 03 A6 */	mtctr r12
/* 801BD3F4 001BA334  4E 80 04 21 */	bctrl 
/* 801BD3F8 001BA338  7C 64 1B 78 */	mr r4, r3
/* 801BD3FC 001BA33C  80 61 00 9C */	lwz r3, 0x9c(r1)
/* 801BD400 001BA340  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD404 001BA344  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BD408 001BA348  7D 89 03 A6 */	mtctr r12
/* 801BD40C 001BA34C  4E 80 04 21 */	bctrl 
/* 801BD410 001BA350  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD414 001BA354  40 82 07 68 */	bne .L_801BDB7C
/* 801BD418 001BA358  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD41C 001BA35C  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BD420 001BA360  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD424 001BA364  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BD428 001BA368  7D 89 03 A6 */	mtctr r12
/* 801BD42C 001BA36C  4E 80 04 21 */	bctrl 
/* 801BD430 001BA370  90 61 00 94 */	stw r3, 0x94(r1)
.L_801BD434:
/* 801BD434 001BA374  81 81 00 90 */	lwz r12, 0x90(r1)
/* 801BD438 001BA378  38 61 00 90 */	addi r3, r1, 0x90
/* 801BD43C 001BA37C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BD440 001BA380  7D 89 03 A6 */	mtctr r12
/* 801BD444 001BA384  4E 80 04 21 */	bctrl 
/* 801BD448 001BA388  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD44C 001BA38C  41 82 FF 94 */	beq .L_801BD3E0
/* 801BD450 001BA390  48 00 07 2C */	b .L_801BDB7C
.L_801BD454:
/* 801BD454 001BA394  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BD458 001BA398  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD45C 001BA39C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BD460 001BA3A0  7D 89 03 A6 */	mtctr r12
/* 801BD464 001BA3A4  4E 80 04 21 */	bctrl 
/* 801BD468 001BA3A8  7C 79 1B 78 */	mr r25, r3
/* 801BD46C 001BA3AC  88 03 00 6E */	lbz r0, 0x6e(r3)
/* 801BD470 001BA3B0  28 00 00 00 */	cmplwi r0, 0
/* 801BD474 001BA3B4  41 82 05 44 */	beq .L_801BD9B8
/* 801BD478 001BA3B8  80 98 00 10 */	lwz r4, 0x10(r24)
/* 801BD47C 001BA3BC  3A E0 00 00 */	li r23, 0
/* 801BD480 001BA3C0  48 00 00 20 */	b .L_801BD4A0
.L_801BD484:
/* 801BD484 001BA3C4  A0 64 00 18 */	lhz r3, 0x18(r4)
/* 801BD488 001BA3C8  A8 19 00 76 */	lha r0, 0x76(r25)
/* 801BD48C 001BA3CC  7C 03 00 00 */	cmpw r3, r0
/* 801BD490 001BA3D0  40 82 00 0C */	bne .L_801BD49C
/* 801BD494 001BA3D4  7C 97 23 78 */	mr r23, r4
/* 801BD498 001BA3D8  48 00 00 10 */	b .L_801BD4A8
.L_801BD49C:
/* 801BD49C 001BA3DC  80 84 00 04 */	lwz r4, 4(r4)
.L_801BD4A0:
/* 801BD4A0 001BA3E0  28 04 00 00 */	cmplwi r4, 0
/* 801BD4A4 001BA3E4  40 82 FF E0 */	bne .L_801BD484
.L_801BD4A8:
/* 801BD4A8 001BA3E8  28 17 00 00 */	cmplwi r23, 0
/* 801BD4AC 001BA3EC  40 82 00 18 */	bne .L_801BD4C4
/* 801BD4B0 001BA3F0  38 7E 00 84 */	addi r3, r30, 0x84
/* 801BD4B4 001BA3F4  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 801BD4B8 001BA3F8  38 80 0D 83 */	li r4, 0xd83
/* 801BD4BC 001BA3FC  4C C6 31 82 */	crclr 6
/* 801BD4C0 001BA400  4B E6 D1 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801BD4C4:
/* 801BD4C4 001BA404  3C 60 80 4B */	lis r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BD4C8 001BA408  38 00 00 00 */	li r0, 0
/* 801BD4CC 001BA40C  AA B7 00 1C */	lha r21, 0x1c(r23)
/* 801BD4D0 001BA410  38 83 5D 28 */	addi r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BD4D4 001BA414  38 7D 00 AC */	addi r3, r29, 0xac
/* 801BD4D8 001BA418  28 00 00 00 */	cmplwi r0, 0
/* 801BD4DC 001BA41C  90 81 00 28 */	stw r4, 0x28(r1)
/* 801BD4E0 001BA420  90 01 00 34 */	stw r0, 0x34(r1)
/* 801BD4E4 001BA424  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801BD4E8 001BA428  90 61 00 30 */	stw r3, 0x30(r1)
/* 801BD4EC 001BA42C  40 82 00 1C */	bne .L_801BD508
/* 801BD4F0 001BA430  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD4F4 001BA434  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BD4F8 001BA438  7D 89 03 A6 */	mtctr r12
/* 801BD4FC 001BA43C  4E 80 04 21 */	bctrl 
/* 801BD500 001BA440  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801BD504 001BA444  48 00 01 74 */	b .L_801BD678
.L_801BD508:
/* 801BD508 001BA448  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD50C 001BA44C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BD510 001BA450  7D 89 03 A6 */	mtctr r12
/* 801BD514 001BA454  4E 80 04 21 */	bctrl 
/* 801BD518 001BA458  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801BD51C 001BA45C  48 00 00 58 */	b .L_801BD574
.L_801BD520:
/* 801BD520 001BA460  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801BD524 001BA464  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801BD528 001BA468  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD52C 001BA46C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BD530 001BA470  7D 89 03 A6 */	mtctr r12
/* 801BD534 001BA474  4E 80 04 21 */	bctrl 
/* 801BD538 001BA478  7C 64 1B 78 */	mr r4, r3
/* 801BD53C 001BA47C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801BD540 001BA480  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD544 001BA484  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BD548 001BA488  7D 89 03 A6 */	mtctr r12
/* 801BD54C 001BA48C  4E 80 04 21 */	bctrl 
/* 801BD550 001BA490  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD554 001BA494  40 82 01 24 */	bne .L_801BD678
/* 801BD558 001BA498  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801BD55C 001BA49C  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801BD560 001BA4A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD564 001BA4A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BD568 001BA4A8  7D 89 03 A6 */	mtctr r12
/* 801BD56C 001BA4AC  4E 80 04 21 */	bctrl 
/* 801BD570 001BA4B0  90 61 00 2C */	stw r3, 0x2c(r1)
.L_801BD574:
/* 801BD574 001BA4B4  81 81 00 28 */	lwz r12, 0x28(r1)
/* 801BD578 001BA4B8  38 61 00 28 */	addi r3, r1, 0x28
/* 801BD57C 001BA4BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BD580 001BA4C0  7D 89 03 A6 */	mtctr r12
/* 801BD584 001BA4C4  4E 80 04 21 */	bctrl 
/* 801BD588 001BA4C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD58C 001BA4CC  41 82 FF 94 */	beq .L_801BD520
/* 801BD590 001BA4D0  48 00 00 E8 */	b .L_801BD678
.L_801BD594:
/* 801BD594 001BA4D4  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801BD598 001BA4D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD59C 001BA4DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BD5A0 001BA4E0  7D 89 03 A6 */	mtctr r12
/* 801BD5A4 001BA4E4  4E 80 04 21 */	bctrl 
/* 801BD5A8 001BA4E8  A8 03 01 84 */	lha r0, 0x184(r3)
/* 801BD5AC 001BA4EC  7C 00 A8 00 */	cmpw r0, r21
/* 801BD5B0 001BA4F0  40 82 00 0C */	bne .L_801BD5BC
/* 801BD5B4 001BA4F4  7C 75 1B 78 */	mr r21, r3
/* 801BD5B8 001BA4F8  48 00 00 E4 */	b .L_801BD69C
.L_801BD5BC:
/* 801BD5BC 001BA4FC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801BD5C0 001BA500  28 00 00 00 */	cmplwi r0, 0
/* 801BD5C4 001BA504  40 82 00 24 */	bne .L_801BD5E8
/* 801BD5C8 001BA508  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801BD5CC 001BA50C  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801BD5D0 001BA510  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD5D4 001BA514  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BD5D8 001BA518  7D 89 03 A6 */	mtctr r12
/* 801BD5DC 001BA51C  4E 80 04 21 */	bctrl 
/* 801BD5E0 001BA520  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801BD5E4 001BA524  48 00 00 94 */	b .L_801BD678
.L_801BD5E8:
/* 801BD5E8 001BA528  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801BD5EC 001BA52C  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801BD5F0 001BA530  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD5F4 001BA534  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BD5F8 001BA538  7D 89 03 A6 */	mtctr r12
/* 801BD5FC 001BA53C  4E 80 04 21 */	bctrl 
/* 801BD600 001BA540  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801BD604 001BA544  48 00 00 58 */	b .L_801BD65C
.L_801BD608:
/* 801BD608 001BA548  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801BD60C 001BA54C  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801BD610 001BA550  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD614 001BA554  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BD618 001BA558  7D 89 03 A6 */	mtctr r12
/* 801BD61C 001BA55C  4E 80 04 21 */	bctrl 
/* 801BD620 001BA560  7C 64 1B 78 */	mr r4, r3
/* 801BD624 001BA564  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801BD628 001BA568  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD62C 001BA56C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BD630 001BA570  7D 89 03 A6 */	mtctr r12
/* 801BD634 001BA574  4E 80 04 21 */	bctrl 
/* 801BD638 001BA578  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD63C 001BA57C  40 82 00 3C */	bne .L_801BD678
/* 801BD640 001BA580  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801BD644 001BA584  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801BD648 001BA588  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD64C 001BA58C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BD650 001BA590  7D 89 03 A6 */	mtctr r12
/* 801BD654 001BA594  4E 80 04 21 */	bctrl 
/* 801BD658 001BA598  90 61 00 2C */	stw r3, 0x2c(r1)
.L_801BD65C:
/* 801BD65C 001BA59C  81 81 00 28 */	lwz r12, 0x28(r1)
/* 801BD660 001BA5A0  38 61 00 28 */	addi r3, r1, 0x28
/* 801BD664 001BA5A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BD668 001BA5A8  7D 89 03 A6 */	mtctr r12
/* 801BD66C 001BA5AC  4E 80 04 21 */	bctrl 
/* 801BD670 001BA5B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD674 001BA5B4  41 82 FF 94 */	beq .L_801BD608
.L_801BD678:
/* 801BD678 001BA5B8  80 61 00 30 */	lwz r3, 0x30(r1)
/* 801BD67C 001BA5BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD680 001BA5C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BD684 001BA5C4  7D 89 03 A6 */	mtctr r12
/* 801BD688 001BA5C8  4E 80 04 21 */	bctrl 
/* 801BD68C 001BA5CC  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 801BD690 001BA5D0  7C 04 18 40 */	cmplw r4, r3
/* 801BD694 001BA5D4  40 82 FF 00 */	bne .L_801BD594
/* 801BD698 001BA5D8  3A A0 00 00 */	li r21, 0
.L_801BD69C:
/* 801BD69C 001BA5DC  A8 99 00 76 */	lha r4, 0x76(r25)
/* 801BD6A0 001BA5E0  38 7B 01 18 */	addi r3, r27, 0x118
/* 801BD6A4 001BA5E4  48 25 3F F9 */	bl getChildAt__5CNodeFi
/* 801BD6A8 001BA5E8  82 9E 02 8C */	lwz r20, 0x28c(r30)
/* 801BD6AC 001BA5EC  28 15 00 00 */	cmplwi r21, 0
/* 801BD6B0 001BA5F0  81 9E 02 90 */	lwz r12, 0x290(r30)
/* 801BD6B4 001BA5F4  7C 76 1B 78 */	mr r22, r3
/* 801BD6B8 001BA5F8  81 7E 02 94 */	lwz r11, 0x294(r30)
/* 801BD6BC 001BA5FC  81 5E 02 98 */	lwz r10, 0x298(r30)
/* 801BD6C0 001BA600  81 3E 02 9C */	lwz r9, 0x29c(r30)
/* 801BD6C4 001BA604  81 1E 02 A0 */	lwz r8, 0x2a0(r30)
/* 801BD6C8 001BA608  80 FE 02 A4 */	lwz r7, 0x2a4(r30)
/* 801BD6CC 001BA60C  80 DE 02 A8 */	lwz r6, 0x2a8(r30)
/* 801BD6D0 001BA610  80 BE 02 AC */	lwz r5, 0x2ac(r30)
/* 801BD6D4 001BA614  80 9E 02 B0 */	lwz r4, 0x2b0(r30)
/* 801BD6D8 001BA618  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 801BD6DC 001BA61C  80 1E 02 B8 */	lwz r0, 0x2b8(r30)
/* 801BD6E0 001BA620  92 81 00 6C */	stw r20, 0x6c(r1)
/* 801BD6E4 001BA624  91 81 00 70 */	stw r12, 0x70(r1)
/* 801BD6E8 001BA628  C1 61 00 6C */	lfs f11, 0x6c(r1)
/* 801BD6EC 001BA62C  91 61 00 74 */	stw r11, 0x74(r1)
/* 801BD6F0 001BA630  C1 41 00 70 */	lfs f10, 0x70(r1)
/* 801BD6F4 001BA634  91 41 00 60 */	stw r10, 0x60(r1)
/* 801BD6F8 001BA638  C1 21 00 74 */	lfs f9, 0x74(r1)
/* 801BD6FC 001BA63C  91 21 00 64 */	stw r9, 0x64(r1)
/* 801BD700 001BA640  C1 01 00 60 */	lfs f8, 0x60(r1)
/* 801BD704 001BA644  91 01 00 68 */	stw r8, 0x68(r1)
/* 801BD708 001BA648  C0 E1 00 64 */	lfs f7, 0x64(r1)
/* 801BD70C 001BA64C  90 E1 00 54 */	stw r7, 0x54(r1)
/* 801BD710 001BA650  C0 C1 00 68 */	lfs f6, 0x68(r1)
/* 801BD714 001BA654  90 C1 00 58 */	stw r6, 0x58(r1)
/* 801BD718 001BA658  C0 A1 00 54 */	lfs f5, 0x54(r1)
/* 801BD71C 001BA65C  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 801BD720 001BA660  C0 81 00 58 */	lfs f4, 0x58(r1)
/* 801BD724 001BA664  90 81 00 48 */	stw r4, 0x48(r1)
/* 801BD728 001BA668  C0 61 00 5C */	lfs f3, 0x5c(r1)
/* 801BD72C 001BA66C  90 61 00 4C */	stw r3, 0x4c(r1)
/* 801BD730 001BA670  C0 41 00 48 */	lfs f2, 0x48(r1)
/* 801BD734 001BA674  90 01 00 50 */	stw r0, 0x50(r1)
/* 801BD738 001BA678  C0 21 00 4C */	lfs f1, 0x4c(r1)
/* 801BD73C 001BA67C  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 801BD740 001BA680  D1 61 01 B4 */	stfs f11, 0x1b4(r1)
/* 801BD744 001BA684  D1 41 01 B8 */	stfs f10, 0x1b8(r1)
/* 801BD748 001BA688  D1 21 01 BC */	stfs f9, 0x1bc(r1)
/* 801BD74C 001BA68C  D1 01 01 C0 */	stfs f8, 0x1c0(r1)
/* 801BD750 001BA690  D0 E1 01 C4 */	stfs f7, 0x1c4(r1)
/* 801BD754 001BA694  D0 C1 01 C8 */	stfs f6, 0x1c8(r1)
/* 801BD758 001BA698  D0 A1 01 CC */	stfs f5, 0x1cc(r1)
/* 801BD75C 001BA69C  D0 81 01 D0 */	stfs f4, 0x1d0(r1)
/* 801BD760 001BA6A0  D0 61 01 D4 */	stfs f3, 0x1d4(r1)
/* 801BD764 001BA6A4  D0 41 01 D8 */	stfs f2, 0x1d8(r1)
/* 801BD768 001BA6A8  D0 21 01 DC */	stfs f1, 0x1dc(r1)
/* 801BD76C 001BA6AC  D0 01 01 E0 */	stfs f0, 0x1e0(r1)
/* 801BD770 001BA6B0  40 82 00 E0 */	bne .L_801BD850
/* 801BD774 001BA6B4  A8 99 00 36 */	lha r4, 0x36(r25)
/* 801BD778 001BA6B8  38 60 00 00 */	li r3, 0
/* 801BD77C 001BA6BC  7C 80 07 35 */	extsh. r0, r4
/* 801BD780 001BA6C0  41 80 00 10 */	blt .L_801BD790
/* 801BD784 001BA6C4  7C 04 E0 00 */	cmpw r4, r28
/* 801BD788 001BA6C8  40 80 00 08 */	bge .L_801BD790
/* 801BD78C 001BA6CC  38 60 00 01 */	li r3, 1
.L_801BD790:
/* 801BD790 001BA6D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD794 001BA6D4  40 82 00 18 */	bne .L_801BD7AC
/* 801BD798 001BA6D8  38 7E 00 84 */	addi r3, r30, 0x84
/* 801BD79C 001BA6DC  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 801BD7A0 001BA6E0  38 80 0D 98 */	li r4, 0xd98
/* 801BD7A4 001BA6E4  4C C6 31 82 */	crclr 6
/* 801BD7A8 001BA6E8  4B E6 CE 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801BD7AC:
/* 801BD7AC 001BA6EC  38 60 00 78 */	li r3, 0x78
/* 801BD7B0 001BA6F0  4B E6 66 F5 */	bl __nw__FUl
/* 801BD7B4 001BA6F4  7C 74 1B 79 */	or. r20, r3, r3
/* 801BD7B8 001BA6F8  41 82 00 0C */	beq .L_801BD7C4
/* 801BD7BC 001BA6FC  4B FB 4E E5 */	bl __ct__Q24Game8WayPointFv
/* 801BD7C0 001BA700  7C 74 1B 78 */	mr r20, r3
.L_801BD7C4:
/* 801BD7C4 001BA704  80 7D 00 08 */	lwz r3, 8(r29)
/* 801BD7C8 001BA708  7E 84 A3 78 */	mr r4, r20
/* 801BD7CC 001BA70C  4B FB 70 7D */	bl addWayPoint__Q24Game14EditorRouteMgrFPQ24Game8WayPoint
/* 801BD7D0 001BA710  A8 19 00 36 */	lha r0, 0x36(r25)
/* 801BD7D4 001BA714  38 61 02 14 */	addi r3, r1, 0x214
/* 801BD7D8 001BA718  A8 F4 00 36 */	lha r7, 0x36(r20)
/* 801BD7DC 001BA71C  38 99 00 4C */	addi r4, r25, 0x4c
/* 801BD7E0 001BA720  80 DF 01 8C */	lwz r6, 0x18c(r31)
/* 801BD7E4 001BA724  54 00 10 3A */	slwi r0, r0, 2
/* 801BD7E8 001BA728  38 A1 00 1C */	addi r5, r1, 0x1c
/* 801BD7EC 001BA72C  7C E6 01 2E */	stwx r7, r6, r0
/* 801BD7F0 001BA730  C0 19 00 58 */	lfs f0, 0x58(r25)
/* 801BD7F4 001BA734  D0 14 00 58 */	stfs f0, 0x58(r20)
/* 801BD7F8 001BA738  4B F2 D3 E1 */	bl PSMTXMultVec
/* 801BD7FC 001BA73C  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 801BD800 001BA740  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 801BD804 001BA744  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801BD808 001BA748  D0 14 00 4C */	stfs f0, 0x4c(r20)
/* 801BD80C 001BA74C  D0 34 00 50 */	stfs f1, 0x50(r20)
/* 801BD810 001BA750  D0 54 00 54 */	stfs f2, 0x54(r20)
/* 801BD814 001BA754  88 19 00 6E */	lbz r0, 0x6e(r25)
/* 801BD818 001BA758  28 00 00 00 */	cmplwi r0, 0
/* 801BD81C 001BA75C  41 82 00 10 */	beq .L_801BD82C
/* 801BD820 001BA760  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801BD824 001BA764  D0 14 00 50 */	stfs f0, 0x50(r20)
/* 801BD828 001BA768  48 00 00 20 */	b .L_801BD848
.L_801BD82C:
/* 801BD82C 001BA76C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801BD830 001BA770  38 94 00 4C */	addi r4, r20, 0x4c
/* 801BD834 001BA774  81 83 00 04 */	lwz r12, 4(r3)
/* 801BD838 001BA778  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801BD83C 001BA77C  7D 89 03 A6 */	mtctr r12
/* 801BD840 001BA780  4E 80 04 21 */	bctrl 
/* 801BD844 001BA784  D0 34 00 50 */	stfs f1, 0x50(r20)
.L_801BD848:
/* 801BD848 001BA788  7E 99 A3 78 */	mr r25, r20
/* 801BD84C 001BA78C  48 00 00 90 */	b .L_801BD8DC
.L_801BD850:
/* 801BD850 001BA790  80 75 01 38 */	lwz r3, 0x138(r21)
/* 801BD854 001BA794  85 83 00 AC */	lwzu r12, 0xac(r3)
/* 801BD858 001BA798  A0 17 00 1A */	lhz r0, 0x1a(r23)
/* 801BD85C 001BA79C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801BD860 001BA7A0  7C 04 07 34 */	extsh r4, r0
/* 801BD864 001BA7A4  7D 89 03 A6 */	mtctr r12
/* 801BD868 001BA7A8  4E 80 04 21 */	bctrl 
/* 801BD86C 001BA7AC  80 15 01 8C */	lwz r0, 0x18c(r21)
/* 801BD870 001BA7B0  7C 77 1B 78 */	mr r23, r3
/* 801BD874 001BA7B4  28 00 00 00 */	cmplwi r0, 0
/* 801BD878 001BA7B8  40 82 00 18 */	bne .L_801BD890
/* 801BD87C 001BA7BC  38 7E 00 84 */	addi r3, r30, 0x84
/* 801BD880 001BA7C0  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 801BD884 001BA7C4  38 80 0D B0 */	li r4, 0xdb0
/* 801BD888 001BA7C8  4C C6 31 82 */	crclr 6
/* 801BD88C 001BA7CC  4B E6 CD B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801BD890:
/* 801BD890 001BA7D0  A8 17 00 36 */	lha r0, 0x36(r23)
/* 801BD894 001BA7D4  80 95 01 8C */	lwz r4, 0x18c(r21)
/* 801BD898 001BA7D8  54 03 10 3A */	slwi r3, r0, 2
/* 801BD89C 001BA7DC  A8 19 00 36 */	lha r0, 0x36(r25)
/* 801BD8A0 001BA7E0  7C 84 18 2E */	lwzx r4, r4, r3
/* 801BD8A4 001BA7E4  80 7F 01 8C */	lwz r3, 0x18c(r31)
/* 801BD8A8 001BA7E8  54 00 10 3A */	slwi r0, r0, 2
/* 801BD8AC 001BA7EC  7C 83 01 2E */	stwx r4, r3, r0
/* 801BD8B0 001BA7F0  80 7D 00 08 */	lwz r3, 8(r29)
/* 801BD8B4 001BA7F4  A8 19 00 36 */	lha r0, 0x36(r25)
/* 801BD8B8 001BA7F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BD8BC 001BA7FC  80 9F 01 8C */	lwz r4, 0x18c(r31)
/* 801BD8C0 001BA800  54 00 10 3A */	slwi r0, r0, 2
/* 801BD8C4 001BA804  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801BD8C8 001BA808  7C 04 00 2E */	lwzx r0, r4, r0
/* 801BD8CC 001BA80C  7C 04 07 34 */	extsh r4, r0
/* 801BD8D0 001BA810  7D 89 03 A6 */	mtctr r12
/* 801BD8D4 001BA814  4E 80 04 21 */	bctrl 
/* 801BD8D8 001BA818  7C 79 1B 78 */	mr r25, r3
.L_801BD8DC:
/* 801BD8DC 001BA81C  80 1F 00 D4 */	lwz r0, 0xd4(r31)
/* 801BD8E0 001BA820  38 60 00 1C */	li r3, 0x1c
/* 801BD8E4 001BA824  7E A0 D2 14 */	add r21, r0, r26
/* 801BD8E8 001BA828  3B 5A 00 10 */	addi r26, r26, 0x10
/* 801BD8EC 001BA82C  93 35 00 00 */	stw r25, 0(r21)
/* 801BD8F0 001BA830  4B E6 65 B5 */	bl __nw__FUl
/* 801BD8F4 001BA834  7C 74 1B 79 */	or. r20, r3, r3
/* 801BD8F8 001BA838  41 82 00 1C */	beq .L_801BD914
/* 801BD8FC 001BA83C  AA FF 01 84 */	lha r23, 0x184(r31)
/* 801BD900 001BA840  48 25 3A 91 */	bl __ct__5CNodeFv
/* 801BD904 001BA844  3C 60 80 4B */	lis r3, __vt__Q34Game8WayPoint8RoomList@ha
/* 801BD908 001BA848  38 03 24 10 */	addi r0, r3, __vt__Q34Game8WayPoint8RoomList@l
/* 801BD90C 001BA84C  90 14 00 00 */	stw r0, 0(r20)
/* 801BD910 001BA850  B2 F4 00 18 */	sth r23, 0x18(r20)
.L_801BD914:
/* 801BD914 001BA854  7E 84 A3 78 */	mr r4, r20
/* 801BD918 001BA858  38 79 00 18 */	addi r3, r25, 0x18
/* 801BD91C 001BA85C  48 25 3A ED */	bl add__5CNodeFP5CNode
/* 801BD920 001BA860  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801BD924 001BA864  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801BD928 001BA868  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 801BD92C 001BA86C  D3 E1 00 88 */	stfs f31, 0x88(r1)
/* 801BD930 001BA870  38 61 01 84 */	addi r3, r1, 0x184
/* 801BD934 001BA874  38 A1 00 84 */	addi r5, r1, 0x84
/* 801BD938 001BA878  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 801BD93C 001BA87C  D0 01 00 8C */	stfs f0, 0x8c(r1)
/* 801BD940 001BA880  48 26 AF 49 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801BD944 001BA884  80 16 00 44 */	lwz r0, 0x44(r22)
/* 801BD948 001BA888  38 61 01 B4 */	addi r3, r1, 0x1b4
/* 801BD94C 001BA88C  C0 01 01 94 */	lfs f0, 0x194(r1)
/* 801BD950 001BA890  1C 00 00 0C */	mulli r0, r0, 0xc
/* 801BD954 001BA894  C0 41 01 98 */	lfs f2, 0x198(r1)
/* 801BD958 001BA898  C0 21 01 84 */	lfs f1, 0x184(r1)
/* 801BD95C 001BA89C  C0 61 01 9C */	lfs f3, 0x19c(r1)
/* 801BD960 001BA8A0  7C 63 02 14 */	add r3, r3, r0
/* 801BD964 001BA8A4  C0 C1 01 88 */	lfs f6, 0x188(r1)
/* 801BD968 001BA8A8  C0 83 00 04 */	lfs f4, 4(r3)
/* 801BD96C 001BA8AC  C1 03 00 00 */	lfs f8, 0(r3)
/* 801BD970 001BA8B0  EC 04 00 32 */	fmuls f0, f4, f0
/* 801BD974 001BA8B4  C1 23 00 08 */	lfs f9, 8(r3)
/* 801BD978 001BA8B8  EC A4 00 B2 */	fmuls f5, f4, f2
/* 801BD97C 001BA8BC  C0 41 01 A4 */	lfs f2, 0x1a4(r1)
/* 801BD980 001BA8C0  EC 64 00 F2 */	fmuls f3, f4, f3
/* 801BD984 001BA8C4  C0 81 01 8C */	lfs f4, 0x18c(r1)
/* 801BD988 001BA8C8  EC 08 00 7A */	fmadds f0, f8, f1, f0
/* 801BD98C 001BA8CC  C0 E1 01 A8 */	lfs f7, 0x1a8(r1)
/* 801BD990 001BA8D0  EC C8 29 BA */	fmadds f6, f8, f6, f5
/* 801BD994 001BA8D4  C0 A1 01 AC */	lfs f5, 0x1ac(r1)
/* 801BD998 001BA8D8  EC 28 19 3A */	fmadds f1, f8, f4, f3
/* 801BD99C 001BA8DC  EC 09 00 BA */	fmadds f0, f9, f2, f0
/* 801BD9A0 001BA8E0  EC 49 31 FA */	fmadds f2, f9, f7, f6
/* 801BD9A4 001BA8E4  EC 29 09 7A */	fmadds f1, f9, f5, f1
/* 801BD9A8 001BA8E8  D0 15 00 04 */	stfs f0, 4(r21)
/* 801BD9AC 001BA8EC  D0 55 00 08 */	stfs f2, 8(r21)
/* 801BD9B0 001BA8F0  D0 35 00 0C */	stfs f1, 0xc(r21)
/* 801BD9B4 001BA8F4  48 00 01 0C */	b .L_801BDAC0
.L_801BD9B8:
/* 801BD9B8 001BA8F8  A8 99 00 36 */	lha r4, 0x36(r25)
/* 801BD9BC 001BA8FC  38 60 00 00 */	li r3, 0
/* 801BD9C0 001BA900  7C 80 07 35 */	extsh. r0, r4
/* 801BD9C4 001BA904  41 80 00 10 */	blt .L_801BD9D4
/* 801BD9C8 001BA908  7C 04 E0 00 */	cmpw r4, r28
/* 801BD9CC 001BA90C  40 80 00 08 */	bge .L_801BD9D4
/* 801BD9D0 001BA910  38 60 00 01 */	li r3, 1
.L_801BD9D4:
/* 801BD9D4 001BA914  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BD9D8 001BA918  40 82 00 18 */	bne .L_801BD9F0
/* 801BD9DC 001BA91C  38 7E 00 84 */	addi r3, r30, 0x84
/* 801BD9E0 001BA920  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 801BD9E4 001BA924  38 80 0D CA */	li r4, 0xdca
/* 801BD9E8 001BA928  4C C6 31 82 */	crclr 6
/* 801BD9EC 001BA92C  4B E6 CC 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801BD9F0:
/* 801BD9F0 001BA930  38 60 00 78 */	li r3, 0x78
/* 801BD9F4 001BA934  4B E6 64 B1 */	bl __nw__FUl
/* 801BD9F8 001BA938  7C 75 1B 79 */	or. r21, r3, r3
/* 801BD9FC 001BA93C  41 82 00 0C */	beq .L_801BDA08
/* 801BDA00 001BA940  4B FB 4C A1 */	bl __ct__Q24Game8WayPointFv
/* 801BDA04 001BA944  7C 75 1B 78 */	mr r21, r3
.L_801BDA08:
/* 801BDA08 001BA948  80 7D 00 08 */	lwz r3, 8(r29)
/* 801BDA0C 001BA94C  7E A4 AB 78 */	mr r4, r21
/* 801BDA10 001BA950  4B FB 6E 39 */	bl addWayPoint__Q24Game14EditorRouteMgrFPQ24Game8WayPoint
/* 801BDA14 001BA954  A8 19 00 36 */	lha r0, 0x36(r25)
/* 801BDA18 001BA958  38 61 02 14 */	addi r3, r1, 0x214
/* 801BDA1C 001BA95C  A8 F5 00 36 */	lha r7, 0x36(r21)
/* 801BDA20 001BA960  38 99 00 4C */	addi r4, r25, 0x4c
/* 801BDA24 001BA964  80 DF 01 8C */	lwz r6, 0x18c(r31)
/* 801BDA28 001BA968  54 00 10 3A */	slwi r0, r0, 2
/* 801BDA2C 001BA96C  38 A1 00 10 */	addi r5, r1, 0x10
/* 801BDA30 001BA970  7C E6 01 2E */	stwx r7, r6, r0
/* 801BDA34 001BA974  C0 19 00 58 */	lfs f0, 0x58(r25)
/* 801BDA38 001BA978  D0 15 00 58 */	stfs f0, 0x58(r21)
/* 801BDA3C 001BA97C  4B F2 D1 9D */	bl PSMTXMultVec
/* 801BDA40 001BA980  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 801BDA44 001BA984  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 801BDA48 001BA988  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801BDA4C 001BA98C  D0 15 00 4C */	stfs f0, 0x4c(r21)
/* 801BDA50 001BA990  D0 35 00 50 */	stfs f1, 0x50(r21)
/* 801BDA54 001BA994  D0 55 00 54 */	stfs f2, 0x54(r21)
/* 801BDA58 001BA998  88 19 00 6E */	lbz r0, 0x6e(r25)
/* 801BDA5C 001BA99C  28 00 00 00 */	cmplwi r0, 0
/* 801BDA60 001BA9A0  41 82 00 10 */	beq .L_801BDA70
/* 801BDA64 001BA9A4  C0 02 B0 E0 */	lfs f0, lbl_80519440@sda21(r2)
/* 801BDA68 001BA9A8  D0 15 00 50 */	stfs f0, 0x50(r21)
/* 801BDA6C 001BA9AC  48 00 00 20 */	b .L_801BDA8C
.L_801BDA70:
/* 801BDA70 001BA9B0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801BDA74 001BA9B4  38 95 00 4C */	addi r4, r21, 0x4c
/* 801BDA78 001BA9B8  81 83 00 04 */	lwz r12, 4(r3)
/* 801BDA7C 001BA9BC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801BDA80 001BA9C0  7D 89 03 A6 */	mtctr r12
/* 801BDA84 001BA9C4  4E 80 04 21 */	bctrl 
/* 801BDA88 001BA9C8  D0 35 00 50 */	stfs f1, 0x50(r21)
.L_801BDA8C:
/* 801BDA8C 001BA9CC  38 60 00 1C */	li r3, 0x1c
/* 801BDA90 001BA9D0  4B E6 64 15 */	bl __nw__FUl
/* 801BDA94 001BA9D4  7C 74 1B 79 */	or. r20, r3, r3
/* 801BDA98 001BA9D8  41 82 00 1C */	beq .L_801BDAB4
/* 801BDA9C 001BA9DC  AA DF 01 84 */	lha r22, 0x184(r31)
/* 801BDAA0 001BA9E0  48 25 38 F1 */	bl __ct__5CNodeFv
/* 801BDAA4 001BA9E4  3C 60 80 4B */	lis r3, __vt__Q34Game8WayPoint8RoomList@ha
/* 801BDAA8 001BA9E8  38 03 24 10 */	addi r0, r3, __vt__Q34Game8WayPoint8RoomList@l
/* 801BDAAC 001BA9EC  90 14 00 00 */	stw r0, 0(r20)
/* 801BDAB0 001BA9F0  B2 D4 00 18 */	sth r22, 0x18(r20)
.L_801BDAB4:
/* 801BDAB4 001BA9F4  7E 84 A3 78 */	mr r4, r20
/* 801BDAB8 001BA9F8  38 75 00 18 */	addi r3, r21, 0x18
/* 801BDABC 001BA9FC  48 25 39 4D */	bl add__5CNodeFP5CNode
.L_801BDAC0:
/* 801BDAC0 001BAA00  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 801BDAC4 001BAA04  28 00 00 00 */	cmplwi r0, 0
/* 801BDAC8 001BAA08  40 82 00 24 */	bne .L_801BDAEC
/* 801BDACC 001BAA0C  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDAD0 001BAA10  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDAD4 001BAA14  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDAD8 001BAA18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BDADC 001BAA1C  7D 89 03 A6 */	mtctr r12
/* 801BDAE0 001BAA20  4E 80 04 21 */	bctrl 
/* 801BDAE4 001BAA24  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BDAE8 001BAA28  48 00 00 94 */	b .L_801BDB7C
.L_801BDAEC:
/* 801BDAEC 001BAA2C  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDAF0 001BAA30  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDAF4 001BAA34  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDAF8 001BAA38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BDAFC 001BAA3C  7D 89 03 A6 */	mtctr r12
/* 801BDB00 001BAA40  4E 80 04 21 */	bctrl 
/* 801BDB04 001BAA44  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BDB08 001BAA48  48 00 00 58 */	b .L_801BDB60
.L_801BDB0C:
/* 801BDB0C 001BAA4C  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDB10 001BAA50  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDB14 001BAA54  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDB18 001BAA58  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BDB1C 001BAA5C  7D 89 03 A6 */	mtctr r12
/* 801BDB20 001BAA60  4E 80 04 21 */	bctrl 
/* 801BDB24 001BAA64  7C 64 1B 78 */	mr r4, r3
/* 801BDB28 001BAA68  80 61 00 9C */	lwz r3, 0x9c(r1)
/* 801BDB2C 001BAA6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDB30 001BAA70  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BDB34 001BAA74  7D 89 03 A6 */	mtctr r12
/* 801BDB38 001BAA78  4E 80 04 21 */	bctrl 
/* 801BDB3C 001BAA7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BDB40 001BAA80  40 82 00 3C */	bne .L_801BDB7C
/* 801BDB44 001BAA84  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDB48 001BAA88  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDB4C 001BAA8C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDB50 001BAA90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BDB54 001BAA94  7D 89 03 A6 */	mtctr r12
/* 801BDB58 001BAA98  4E 80 04 21 */	bctrl 
/* 801BDB5C 001BAA9C  90 61 00 94 */	stw r3, 0x94(r1)
.L_801BDB60:
/* 801BDB60 001BAAA0  81 81 00 90 */	lwz r12, 0x90(r1)
/* 801BDB64 001BAAA4  38 61 00 90 */	addi r3, r1, 0x90
/* 801BDB68 001BAAA8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BDB6C 001BAAAC  7D 89 03 A6 */	mtctr r12
/* 801BDB70 001BAAB0  4E 80 04 21 */	bctrl 
/* 801BDB74 001BAAB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BDB78 001BAAB8  41 82 FF 94 */	beq .L_801BDB0C
.L_801BDB7C:
/* 801BDB7C 001BAABC  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDB80 001BAAC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDB84 001BAAC4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BDB88 001BAAC8  7D 89 03 A6 */	mtctr r12
/* 801BDB8C 001BAACC  4E 80 04 21 */	bctrl 
/* 801BDB90 001BAAD0  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDB94 001BAAD4  7C 04 18 40 */	cmplw r4, r3
/* 801BDB98 001BAAD8  40 82 F8 BC */	bne .L_801BD454
/* 801BDB9C 001BAADC  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 801BDBA0 001BAAE0  28 00 00 00 */	cmplwi r0, 0
/* 801BDBA4 001BAAE4  40 82 00 20 */	bne .L_801BDBC4
/* 801BDBA8 001BAAE8  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDBAC 001BAAEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDBB0 001BAAF0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BDBB4 001BAAF4  7D 89 03 A6 */	mtctr r12
/* 801BDBB8 001BAAF8  4E 80 04 21 */	bctrl 
/* 801BDBBC 001BAAFC  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BDBC0 001BAB00  48 00 03 B0 */	b .L_801BDF70
.L_801BDBC4:
/* 801BDBC4 001BAB04  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDBC8 001BAB08  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDBCC 001BAB0C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BDBD0 001BAB10  7D 89 03 A6 */	mtctr r12
/* 801BDBD4 001BAB14  4E 80 04 21 */	bctrl 
/* 801BDBD8 001BAB18  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BDBDC 001BAB1C  48 00 00 58 */	b .L_801BDC34
.L_801BDBE0:
/* 801BDBE0 001BAB20  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDBE4 001BAB24  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDBE8 001BAB28  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDBEC 001BAB2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BDBF0 001BAB30  7D 89 03 A6 */	mtctr r12
/* 801BDBF4 001BAB34  4E 80 04 21 */	bctrl 
/* 801BDBF8 001BAB38  7C 64 1B 78 */	mr r4, r3
/* 801BDBFC 001BAB3C  80 61 00 9C */	lwz r3, 0x9c(r1)
/* 801BDC00 001BAB40  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDC04 001BAB44  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BDC08 001BAB48  7D 89 03 A6 */	mtctr r12
/* 801BDC0C 001BAB4C  4E 80 04 21 */	bctrl 
/* 801BDC10 001BAB50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BDC14 001BAB54  40 82 03 5C */	bne .L_801BDF70
/* 801BDC18 001BAB58  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDC1C 001BAB5C  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDC20 001BAB60  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDC24 001BAB64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BDC28 001BAB68  7D 89 03 A6 */	mtctr r12
/* 801BDC2C 001BAB6C  4E 80 04 21 */	bctrl 
/* 801BDC30 001BAB70  90 61 00 94 */	stw r3, 0x94(r1)
.L_801BDC34:
/* 801BDC34 001BAB74  81 81 00 90 */	lwz r12, 0x90(r1)
/* 801BDC38 001BAB78  38 61 00 90 */	addi r3, r1, 0x90
/* 801BDC3C 001BAB7C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BDC40 001BAB80  7D 89 03 A6 */	mtctr r12
/* 801BDC44 001BAB84  4E 80 04 21 */	bctrl 
/* 801BDC48 001BAB88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BDC4C 001BAB8C  41 82 FF 94 */	beq .L_801BDBE0
/* 801BDC50 001BAB90  48 00 03 20 */	b .L_801BDF70
.L_801BDC54:
/* 801BDC54 001BAB94  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDC58 001BAB98  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDC5C 001BAB9C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BDC60 001BABA0  7D 89 03 A6 */	mtctr r12
/* 801BDC64 001BABA4  4E 80 04 21 */	bctrl 
/* 801BDC68 001BABA8  7C 76 1B 78 */	mr r22, r3
/* 801BDC6C 001BABAC  80 7D 00 08 */	lwz r3, 8(r29)
/* 801BDC70 001BABB0  A8 16 00 36 */	lha r0, 0x36(r22)
/* 801BDC74 001BABB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDC78 001BABB8  80 9F 01 8C */	lwz r4, 0x18c(r31)
/* 801BDC7C 001BABBC  54 00 10 3A */	slwi r0, r0, 2
/* 801BDC80 001BABC0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801BDC84 001BABC4  7C 04 00 2E */	lwzx r0, r4, r0
/* 801BDC88 001BABC8  7C 04 07 34 */	extsh r4, r0
/* 801BDC8C 001BABCC  7D 89 03 A6 */	mtctr r12
/* 801BDC90 001BABD0  4E 80 04 21 */	bctrl 
/* 801BDC94 001BABD4  88 16 00 6E */	lbz r0, 0x6e(r22)
/* 801BDC98 001BABD8  7C 78 1B 78 */	mr r24, r3
/* 801BDC9C 001BABDC  28 00 00 00 */	cmplwi r0, 0
/* 801BDCA0 001BABE0  41 82 01 58 */	beq .L_801BDDF8
/* 801BDCA4 001BABE4  AA F8 00 38 */	lha r23, 0x38(r24)
/* 801BDCA8 001BABE8  7E E0 07 35 */	extsh. r0, r23
/* 801BDCAC 001BABEC  40 82 00 C4 */	bne .L_801BDD70
/* 801BDCB0 001BABF0  A8 76 00 38 */	lha r3, 0x38(r22)
/* 801BDCB4 001BABF4  38 00 00 02 */	li r0, 2
/* 801BDCB8 001BABF8  7F 05 C3 78 */	mr r5, r24
/* 801BDCBC 001BABFC  38 C0 00 00 */	li r6, 0
/* 801BDCC0 001BAC00  B0 78 00 38 */	sth r3, 0x38(r24)
/* 801BDCC4 001BAC04  38 80 FF FF */	li r4, -1
/* 801BDCC8 001BAC08  7C 09 03 A6 */	mtctr r0
.L_801BDCCC:
/* 801BDCCC 001BAC0C  A8 16 00 3A */	lha r0, 0x3a(r22)
/* 801BDCD0 001BAC10  2C 00 FF FF */	cmpwi r0, -1
/* 801BDCD4 001BAC14  40 82 00 0C */	bne .L_801BDCE0
/* 801BDCD8 001BAC18  B0 85 00 3A */	sth r4, 0x3a(r5)
/* 801BDCDC 001BAC1C  48 00 00 14 */	b .L_801BDCF0
.L_801BDCE0:
/* 801BDCE0 001BAC20  80 7F 01 8C */	lwz r3, 0x18c(r31)
/* 801BDCE4 001BAC24  54 00 10 3A */	slwi r0, r0, 2
/* 801BDCE8 001BAC28  7C 03 00 2E */	lwzx r0, r3, r0
/* 801BDCEC 001BAC2C  B0 05 00 3A */	sth r0, 0x3a(r5)
.L_801BDCF0:
/* 801BDCF0 001BAC30  A8 16 00 3C */	lha r0, 0x3c(r22)
/* 801BDCF4 001BAC34  2C 00 FF FF */	cmpwi r0, -1
/* 801BDCF8 001BAC38  40 82 00 0C */	bne .L_801BDD04
/* 801BDCFC 001BAC3C  B0 85 00 3C */	sth r4, 0x3c(r5)
/* 801BDD00 001BAC40  48 00 00 14 */	b .L_801BDD14
.L_801BDD04:
/* 801BDD04 001BAC44  80 7F 01 8C */	lwz r3, 0x18c(r31)
/* 801BDD08 001BAC48  54 00 10 3A */	slwi r0, r0, 2
/* 801BDD0C 001BAC4C  7C 03 00 2E */	lwzx r0, r3, r0
/* 801BDD10 001BAC50  B0 05 00 3C */	sth r0, 0x3c(r5)
.L_801BDD14:
/* 801BDD14 001BAC54  A8 16 00 3E */	lha r0, 0x3e(r22)
/* 801BDD18 001BAC58  2C 00 FF FF */	cmpwi r0, -1
/* 801BDD1C 001BAC5C  40 82 00 0C */	bne .L_801BDD28
/* 801BDD20 001BAC60  B0 85 00 3E */	sth r4, 0x3e(r5)
/* 801BDD24 001BAC64  48 00 00 14 */	b .L_801BDD38
.L_801BDD28:
/* 801BDD28 001BAC68  80 7F 01 8C */	lwz r3, 0x18c(r31)
/* 801BDD2C 001BAC6C  54 00 10 3A */	slwi r0, r0, 2
/* 801BDD30 001BAC70  7C 03 00 2E */	lwzx r0, r3, r0
/* 801BDD34 001BAC74  B0 05 00 3E */	sth r0, 0x3e(r5)
.L_801BDD38:
/* 801BDD38 001BAC78  A8 16 00 40 */	lha r0, 0x40(r22)
/* 801BDD3C 001BAC7C  2C 00 FF FF */	cmpwi r0, -1
/* 801BDD40 001BAC80  40 82 00 0C */	bne .L_801BDD4C
/* 801BDD44 001BAC84  B0 85 00 40 */	sth r4, 0x40(r5)
/* 801BDD48 001BAC88  48 00 00 14 */	b .L_801BDD5C
.L_801BDD4C:
/* 801BDD4C 001BAC8C  80 7F 01 8C */	lwz r3, 0x18c(r31)
/* 801BDD50 001BAC90  54 00 10 3A */	slwi r0, r0, 2
/* 801BDD54 001BAC94  7C 03 00 2E */	lwzx r0, r3, r0
/* 801BDD58 001BAC98  B0 05 00 40 */	sth r0, 0x40(r5)
.L_801BDD5C:
/* 801BDD5C 001BAC9C  3A D6 00 08 */	addi r22, r22, 8
/* 801BDD60 001BACA0  38 A5 00 08 */	addi r5, r5, 8
/* 801BDD64 001BACA4  38 C6 00 03 */	addi r6, r6, 3
/* 801BDD68 001BACA8  42 00 FF 64 */	bdnz .L_801BDCCC
/* 801BDD6C 001BACAC  48 00 01 48 */	b .L_801BDEB4
.L_801BDD70:
/* 801BDD70 001BACB0  7E D5 B3 78 */	mr r21, r22
/* 801BDD74 001BACB4  3B 20 00 00 */	li r25, 0
/* 801BDD78 001BACB8  48 00 00 64 */	b .L_801BDDDC
.L_801BDD7C:
/* 801BDD7C 001BACBC  7E 97 CA 14 */	add r20, r23, r25
/* 801BDD80 001BACC0  2C 14 00 08 */	cmpwi r20, 8
/* 801BDD84 001BACC4  41 80 00 18 */	blt .L_801BDD9C
/* 801BDD88 001BACC8  38 7E 00 84 */	addi r3, r30, 0x84
/* 801BDD8C 001BACCC  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 801BDD90 001BACD0  38 80 0D F4 */	li r4, 0xdf4
/* 801BDD94 001BACD4  4C C6 31 82 */	crclr 6
/* 801BDD98 001BACD8  4B E6 C8 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801BDD9C:
/* 801BDD9C 001BACDC  A8 15 00 3A */	lha r0, 0x3a(r21)
/* 801BDDA0 001BACE0  2C 00 FF FF */	cmpwi r0, -1
/* 801BDDA4 001BACE4  40 82 00 18 */	bne .L_801BDDBC
/* 801BDDA8 001BACE8  56 83 08 3C */	slwi r3, r20, 1
/* 801BDDAC 001BACEC  38 80 FF FF */	li r4, -1
/* 801BDDB0 001BACF0  38 03 00 3A */	addi r0, r3, 0x3a
/* 801BDDB4 001BACF4  7C 98 03 2E */	sthx r4, r24, r0
/* 801BDDB8 001BACF8  48 00 00 1C */	b .L_801BDDD4
.L_801BDDBC:
/* 801BDDBC 001BACFC  80 9F 01 8C */	lwz r4, 0x18c(r31)
/* 801BDDC0 001BAD00  54 00 10 3A */	slwi r0, r0, 2
/* 801BDDC4 001BAD04  56 83 08 3C */	slwi r3, r20, 1
/* 801BDDC8 001BAD08  7C 84 00 2E */	lwzx r4, r4, r0
/* 801BDDCC 001BAD0C  38 03 00 3A */	addi r0, r3, 0x3a
/* 801BDDD0 001BAD10  7C 98 03 2E */	sthx r4, r24, r0
.L_801BDDD4:
/* 801BDDD4 001BAD14  3A B5 00 02 */	addi r21, r21, 2
/* 801BDDD8 001BAD18  3B 39 00 01 */	addi r25, r25, 1
.L_801BDDDC:
/* 801BDDDC 001BAD1C  A8 76 00 38 */	lha r3, 0x38(r22)
/* 801BDDE0 001BAD20  7C 19 18 00 */	cmpw r25, r3
/* 801BDDE4 001BAD24  41 80 FF 98 */	blt .L_801BDD7C
/* 801BDDE8 001BAD28  A8 18 00 38 */	lha r0, 0x38(r24)
/* 801BDDEC 001BAD2C  7C 00 1A 14 */	add r0, r0, r3
/* 801BDDF0 001BAD30  B0 18 00 38 */	sth r0, 0x38(r24)
/* 801BDDF4 001BAD34  48 00 00 C0 */	b .L_801BDEB4
.L_801BDDF8:
/* 801BDDF8 001BAD38  A8 76 00 38 */	lha r3, 0x38(r22)
/* 801BDDFC 001BAD3C  38 00 00 02 */	li r0, 2
/* 801BDE00 001BAD40  7F 05 C3 78 */	mr r5, r24
/* 801BDE04 001BAD44  38 C0 00 00 */	li r6, 0
/* 801BDE08 001BAD48  B0 78 00 38 */	sth r3, 0x38(r24)
/* 801BDE0C 001BAD4C  38 80 FF FF */	li r4, -1
/* 801BDE10 001BAD50  7C 09 03 A6 */	mtctr r0
.L_801BDE14:
/* 801BDE14 001BAD54  A8 16 00 3A */	lha r0, 0x3a(r22)
/* 801BDE18 001BAD58  2C 00 FF FF */	cmpwi r0, -1
/* 801BDE1C 001BAD5C  40 82 00 0C */	bne .L_801BDE28
/* 801BDE20 001BAD60  B0 85 00 3A */	sth r4, 0x3a(r5)
/* 801BDE24 001BAD64  48 00 00 14 */	b .L_801BDE38
.L_801BDE28:
/* 801BDE28 001BAD68  80 7F 01 8C */	lwz r3, 0x18c(r31)
/* 801BDE2C 001BAD6C  54 00 10 3A */	slwi r0, r0, 2
/* 801BDE30 001BAD70  7C 03 00 2E */	lwzx r0, r3, r0
/* 801BDE34 001BAD74  B0 05 00 3A */	sth r0, 0x3a(r5)
.L_801BDE38:
/* 801BDE38 001BAD78  A8 16 00 3C */	lha r0, 0x3c(r22)
/* 801BDE3C 001BAD7C  2C 00 FF FF */	cmpwi r0, -1
/* 801BDE40 001BAD80  40 82 00 0C */	bne .L_801BDE4C
/* 801BDE44 001BAD84  B0 85 00 3C */	sth r4, 0x3c(r5)
/* 801BDE48 001BAD88  48 00 00 14 */	b .L_801BDE5C
.L_801BDE4C:
/* 801BDE4C 001BAD8C  80 7F 01 8C */	lwz r3, 0x18c(r31)
/* 801BDE50 001BAD90  54 00 10 3A */	slwi r0, r0, 2
/* 801BDE54 001BAD94  7C 03 00 2E */	lwzx r0, r3, r0
/* 801BDE58 001BAD98  B0 05 00 3C */	sth r0, 0x3c(r5)
.L_801BDE5C:
/* 801BDE5C 001BAD9C  A8 16 00 3E */	lha r0, 0x3e(r22)
/* 801BDE60 001BADA0  2C 00 FF FF */	cmpwi r0, -1
/* 801BDE64 001BADA4  40 82 00 0C */	bne .L_801BDE70
/* 801BDE68 001BADA8  B0 85 00 3E */	sth r4, 0x3e(r5)
/* 801BDE6C 001BADAC  48 00 00 14 */	b .L_801BDE80
.L_801BDE70:
/* 801BDE70 001BADB0  80 7F 01 8C */	lwz r3, 0x18c(r31)
/* 801BDE74 001BADB4  54 00 10 3A */	slwi r0, r0, 2
/* 801BDE78 001BADB8  7C 03 00 2E */	lwzx r0, r3, r0
/* 801BDE7C 001BADBC  B0 05 00 3E */	sth r0, 0x3e(r5)
.L_801BDE80:
/* 801BDE80 001BADC0  A8 16 00 40 */	lha r0, 0x40(r22)
/* 801BDE84 001BADC4  2C 00 FF FF */	cmpwi r0, -1
/* 801BDE88 001BADC8  40 82 00 0C */	bne .L_801BDE94
/* 801BDE8C 001BADCC  B0 85 00 40 */	sth r4, 0x40(r5)
/* 801BDE90 001BADD0  48 00 00 14 */	b .L_801BDEA4
.L_801BDE94:
/* 801BDE94 001BADD4  80 7F 01 8C */	lwz r3, 0x18c(r31)
/* 801BDE98 001BADD8  54 00 10 3A */	slwi r0, r0, 2
/* 801BDE9C 001BADDC  7C 03 00 2E */	lwzx r0, r3, r0
/* 801BDEA0 001BADE0  B0 05 00 40 */	sth r0, 0x40(r5)
.L_801BDEA4:
/* 801BDEA4 001BADE4  3A D6 00 08 */	addi r22, r22, 8
/* 801BDEA8 001BADE8  38 A5 00 08 */	addi r5, r5, 8
/* 801BDEAC 001BADEC  38 C6 00 03 */	addi r6, r6, 3
/* 801BDEB0 001BADF0  42 00 FF 64 */	bdnz .L_801BDE14
.L_801BDEB4:
/* 801BDEB4 001BADF4  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 801BDEB8 001BADF8  28 00 00 00 */	cmplwi r0, 0
/* 801BDEBC 001BADFC  40 82 00 24 */	bne .L_801BDEE0
/* 801BDEC0 001BAE00  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDEC4 001BAE04  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDEC8 001BAE08  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDECC 001BAE0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BDED0 001BAE10  7D 89 03 A6 */	mtctr r12
/* 801BDED4 001BAE14  4E 80 04 21 */	bctrl 
/* 801BDED8 001BAE18  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BDEDC 001BAE1C  48 00 00 94 */	b .L_801BDF70
.L_801BDEE0:
/* 801BDEE0 001BAE20  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDEE4 001BAE24  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDEE8 001BAE28  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDEEC 001BAE2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BDEF0 001BAE30  7D 89 03 A6 */	mtctr r12
/* 801BDEF4 001BAE34  4E 80 04 21 */	bctrl 
/* 801BDEF8 001BAE38  90 61 00 94 */	stw r3, 0x94(r1)
/* 801BDEFC 001BAE3C  48 00 00 58 */	b .L_801BDF54
.L_801BDF00:
/* 801BDF00 001BAE40  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDF04 001BAE44  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDF08 001BAE48  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDF0C 001BAE4C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BDF10 001BAE50  7D 89 03 A6 */	mtctr r12
/* 801BDF14 001BAE54  4E 80 04 21 */	bctrl 
/* 801BDF18 001BAE58  7C 64 1B 78 */	mr r4, r3
/* 801BDF1C 001BAE5C  80 61 00 9C */	lwz r3, 0x9c(r1)
/* 801BDF20 001BAE60  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDF24 001BAE64  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BDF28 001BAE68  7D 89 03 A6 */	mtctr r12
/* 801BDF2C 001BAE6C  4E 80 04 21 */	bctrl 
/* 801BDF30 001BAE70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BDF34 001BAE74  40 82 00 3C */	bne .L_801BDF70
/* 801BDF38 001BAE78  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDF3C 001BAE7C  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDF40 001BAE80  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDF44 001BAE84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BDF48 001BAE88  7D 89 03 A6 */	mtctr r12
/* 801BDF4C 001BAE8C  4E 80 04 21 */	bctrl 
/* 801BDF50 001BAE90  90 61 00 94 */	stw r3, 0x94(r1)
.L_801BDF54:
/* 801BDF54 001BAE94  81 81 00 90 */	lwz r12, 0x90(r1)
/* 801BDF58 001BAE98  38 61 00 90 */	addi r3, r1, 0x90
/* 801BDF5C 001BAE9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BDF60 001BAEA0  7D 89 03 A6 */	mtctr r12
/* 801BDF64 001BAEA4  4E 80 04 21 */	bctrl 
/* 801BDF68 001BAEA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BDF6C 001BAEAC  41 82 FF 94 */	beq .L_801BDF00
.L_801BDF70:
/* 801BDF70 001BAEB0  80 61 00 98 */	lwz r3, 0x98(r1)
/* 801BDF74 001BAEB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BDF78 001BAEB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BDF7C 001BAEBC  7D 89 03 A6 */	mtctr r12
/* 801BDF80 001BAEC0  4E 80 04 21 */	bctrl 
/* 801BDF84 001BAEC4  80 81 00 94 */	lwz r4, 0x94(r1)
/* 801BDF88 001BAEC8  7C 04 18 40 */	cmplw r4, r3
/* 801BDF8C 001BAECC  40 82 FC C8 */	bne .L_801BDC54
/* 801BDF90 001BAED0  E3 E1 02 C8 */	psq_l f31, 712(r1), 0, qr0
/* 801BDF94 001BAED4  CB E1 02 C0 */	lfd f31, 0x2c0(r1)
/* 801BDF98 001BAED8  E3 C1 02 B8 */	psq_l f30, 696(r1), 0, qr0
/* 801BDF9C 001BAEDC  CB C1 02 B0 */	lfd f30, 0x2b0(r1)
/* 801BDFA0 001BAEE0  E3 A1 02 A8 */	psq_l f29, 680(r1), 0, qr0
/* 801BDFA4 001BAEE4  CB A1 02 A0 */	lfd f29, 0x2a0(r1)
/* 801BDFA8 001BAEE8  E3 81 02 98 */	psq_l f28, 664(r1), 0, qr0
/* 801BDFAC 001BAEEC  CB 81 02 90 */	lfd f28, 0x290(r1)
/* 801BDFB0 001BAEF0  E3 61 02 88 */	psq_l f27, 648(r1), 0, qr0
/* 801BDFB4 001BAEF4  CB 61 02 80 */	lfd f27, 0x280(r1)
/* 801BDFB8 001BAEF8  BA 81 02 50 */	lmw r20, 0x250(r1)
/* 801BDFBC 001BAEFC  80 01 02 D4 */	lwz r0, 0x2d4(r1)
/* 801BDFC0 001BAF00  7C 08 03 A6 */	mtlr r0
/* 801BDFC4 001BAF04  38 21 02 D0 */	addi r1, r1, 0x2d0
/* 801BDFC8 001BAF08  4E 80 00 20 */	blr 
.endfn makeOneRoom__Q24Game10RoomMapMgrFfffPcsPQ24Game8RoomLinkPQ24Game16ObjectLayoutInfo

.fn deleteTemp__Q24Game10RoomMapMgrFv, global
/* 801BDFCC 001BAF0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BDFD0 001BAF10  7C 08 02 A6 */	mflr r0
/* 801BDFD4 001BAF14  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BDFD8 001BAF18  38 63 00 AC */	addi r3, r3, 0xac
/* 801BDFDC 001BAF1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BDFE0 001BAF20  38 00 00 00 */	li r0, 0
/* 801BDFE4 001BAF24  38 84 5D 28 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BDFE8 001BAF28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BDFEC 001BAF2C  28 00 00 00 */	cmplwi r0, 0
/* 801BDFF0 001BAF30  90 81 00 08 */	stw r4, 8(r1)
/* 801BDFF4 001BAF34  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BDFF8 001BAF38  90 01 00 0C */	stw r0, 0xc(r1)
/* 801BDFFC 001BAF3C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801BE000 001BAF40  40 82 00 1C */	bne .L_801BE01C
/* 801BE004 001BAF44  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE008 001BAF48  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BE00C 001BAF4C  7D 89 03 A6 */	mtctr r12
/* 801BE010 001BAF50  4E 80 04 21 */	bctrl 
/* 801BE014 001BAF54  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BE018 001BAF58  48 00 01 74 */	b .L_801BE18C
.L_801BE01C:
/* 801BE01C 001BAF5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE020 001BAF60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BE024 001BAF64  7D 89 03 A6 */	mtctr r12
/* 801BE028 001BAF68  4E 80 04 21 */	bctrl 
/* 801BE02C 001BAF6C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BE030 001BAF70  48 00 00 58 */	b .L_801BE088
.L_801BE034:
/* 801BE034 001BAF74  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE038 001BAF78  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE03C 001BAF7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE040 001BAF80  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BE044 001BAF84  7D 89 03 A6 */	mtctr r12
/* 801BE048 001BAF88  4E 80 04 21 */	bctrl 
/* 801BE04C 001BAF8C  7C 64 1B 78 */	mr r4, r3
/* 801BE050 001BAF90  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BE054 001BAF94  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE058 001BAF98  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BE05C 001BAF9C  7D 89 03 A6 */	mtctr r12
/* 801BE060 001BAFA0  4E 80 04 21 */	bctrl 
/* 801BE064 001BAFA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE068 001BAFA8  40 82 01 24 */	bne .L_801BE18C
/* 801BE06C 001BAFAC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE070 001BAFB0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE074 001BAFB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE078 001BAFB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE07C 001BAFBC  7D 89 03 A6 */	mtctr r12
/* 801BE080 001BAFC0  4E 80 04 21 */	bctrl 
/* 801BE084 001BAFC4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BE088:
/* 801BE088 001BAFC8  81 81 00 08 */	lwz r12, 8(r1)
/* 801BE08C 001BAFCC  38 61 00 08 */	addi r3, r1, 8
/* 801BE090 001BAFD0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BE094 001BAFD4  7D 89 03 A6 */	mtctr r12
/* 801BE098 001BAFD8  4E 80 04 21 */	bctrl 
/* 801BE09C 001BAFDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE0A0 001BAFE0  41 82 FF 94 */	beq .L_801BE034
/* 801BE0A4 001BAFE4  48 00 00 E8 */	b .L_801BE18C
.L_801BE0A8:
/* 801BE0A8 001BAFE8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE0AC 001BAFEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE0B0 001BAFF0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BE0B4 001BAFF4  7D 89 03 A6 */	mtctr r12
/* 801BE0B8 001BAFF8  4E 80 04 21 */	bctrl 
/* 801BE0BC 001BAFFC  7C 7F 1B 78 */	mr r31, r3
/* 801BE0C0 001BB000  80 63 01 8C */	lwz r3, 0x18c(r3)
/* 801BE0C4 001BB004  4B E6 60 15 */	bl __dla__FPv
/* 801BE0C8 001BB008  38 00 00 00 */	li r0, 0
/* 801BE0CC 001BB00C  90 1F 01 8C */	stw r0, 0x18c(r31)
/* 801BE0D0 001BB010  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE0D4 001BB014  28 00 00 00 */	cmplwi r0, 0
/* 801BE0D8 001BB018  40 82 00 24 */	bne .L_801BE0FC
/* 801BE0DC 001BB01C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE0E0 001BB020  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE0E4 001BB024  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE0E8 001BB028  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE0EC 001BB02C  7D 89 03 A6 */	mtctr r12
/* 801BE0F0 001BB030  4E 80 04 21 */	bctrl 
/* 801BE0F4 001BB034  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BE0F8 001BB038  48 00 00 94 */	b .L_801BE18C
.L_801BE0FC:
/* 801BE0FC 001BB03C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE100 001BB040  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE104 001BB044  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE108 001BB048  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE10C 001BB04C  7D 89 03 A6 */	mtctr r12
/* 801BE110 001BB050  4E 80 04 21 */	bctrl 
/* 801BE114 001BB054  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BE118 001BB058  48 00 00 58 */	b .L_801BE170
.L_801BE11C:
/* 801BE11C 001BB05C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE120 001BB060  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE124 001BB064  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE128 001BB068  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BE12C 001BB06C  7D 89 03 A6 */	mtctr r12
/* 801BE130 001BB070  4E 80 04 21 */	bctrl 
/* 801BE134 001BB074  7C 64 1B 78 */	mr r4, r3
/* 801BE138 001BB078  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BE13C 001BB07C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE140 001BB080  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BE144 001BB084  7D 89 03 A6 */	mtctr r12
/* 801BE148 001BB088  4E 80 04 21 */	bctrl 
/* 801BE14C 001BB08C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE150 001BB090  40 82 00 3C */	bne .L_801BE18C
/* 801BE154 001BB094  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE158 001BB098  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE15C 001BB09C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE160 001BB0A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE164 001BB0A4  7D 89 03 A6 */	mtctr r12
/* 801BE168 001BB0A8  4E 80 04 21 */	bctrl 
/* 801BE16C 001BB0AC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BE170:
/* 801BE170 001BB0B0  81 81 00 08 */	lwz r12, 8(r1)
/* 801BE174 001BB0B4  38 61 00 08 */	addi r3, r1, 8
/* 801BE178 001BB0B8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BE17C 001BB0BC  7D 89 03 A6 */	mtctr r12
/* 801BE180 001BB0C0  4E 80 04 21 */	bctrl 
/* 801BE184 001BB0C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE188 001BB0C8  41 82 FF 94 */	beq .L_801BE11C
.L_801BE18C:
/* 801BE18C 001BB0CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE190 001BB0D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE194 001BB0D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BE198 001BB0D8  7D 89 03 A6 */	mtctr r12
/* 801BE19C 001BB0DC  4E 80 04 21 */	bctrl 
/* 801BE1A0 001BB0E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE1A4 001BB0E4  7C 04 18 40 */	cmplw r4, r3
/* 801BE1A8 001BB0E8  40 82 FF 00 */	bne .L_801BE0A8
/* 801BE1AC 001BB0EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BE1B0 001BB0F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BE1B4 001BB0F4  7C 08 03 A6 */	mtlr r0
/* 801BE1B8 001BB0F8  38 21 00 20 */	addi r1, r1, 0x20
/* 801BE1BC 001BB0FC  4E 80 00 20 */	blr 
.endfn deleteTemp__Q24Game10RoomMapMgrFv

.fn getMUI__Q24Game10RoomMapMgrFPQ24Game7MapUnit, global
/* 801BE1C0 001BB100  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BE1C4 001BB104  7C 08 02 A6 */	mflr r0
/* 801BE1C8 001BB108  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BE1CC 001BB10C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BE1D0 001BB110  3B E0 00 00 */	li r31, 0
/* 801BE1D4 001BB114  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801BE1D8 001BB118  3B C0 00 00 */	li r30, 0
/* 801BE1DC 001BB11C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801BE1E0 001BB120  7C 9D 23 78 */	mr r29, r4
/* 801BE1E4 001BB124  93 81 00 10 */	stw r28, 0x10(r1)
/* 801BE1E8 001BB128  7C 7C 1B 78 */	mr r28, r3
/* 801BE1EC 001BB12C  48 00 00 38 */	b .L_801BE224
.L_801BE1F0:
/* 801BE1F0 001BB130  80 9C 00 F8 */	lwz r4, 0xf8(r28)
/* 801BE1F4 001BB134  38 1F 00 14 */	addi r0, r31, 0x14
/* 801BE1F8 001BB138  80 7D 00 08 */	lwz r3, 8(r29)
/* 801BE1FC 001BB13C  7C 84 00 2E */	lwzx r4, r4, r0
/* 801BE200 001BB140  4B F0 C4 C1 */	bl strcmp
/* 801BE204 001BB144  2C 03 00 00 */	cmpwi r3, 0
/* 801BE208 001BB148  40 82 00 14 */	bne .L_801BE21C
/* 801BE20C 001BB14C  1C 1E 01 6C */	mulli r0, r30, 0x16c
/* 801BE210 001BB150  80 7C 00 F8 */	lwz r3, 0xf8(r28)
/* 801BE214 001BB154  7C 63 02 14 */	add r3, r3, r0
/* 801BE218 001BB158  48 00 00 1C */	b .L_801BE234
.L_801BE21C:
/* 801BE21C 001BB15C  3B FF 01 6C */	addi r31, r31, 0x16c
/* 801BE220 001BB160  3B DE 00 01 */	addi r30, r30, 1
.L_801BE224:
/* 801BE224 001BB164  80 1C 00 F4 */	lwz r0, 0xf4(r28)
/* 801BE228 001BB168  7C 1E 00 00 */	cmpw r30, r0
/* 801BE22C 001BB16C  41 80 FF C4 */	blt .L_801BE1F0
/* 801BE230 001BB170  38 60 00 00 */	li r3, 0
.L_801BE234:
/* 801BE234 001BB174  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BE238 001BB178  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BE23C 001BB17C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801BE240 001BB180  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801BE244 001BB184  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801BE248 001BB188  7C 08 03 A6 */	mtlr r0
/* 801BE24C 001BB18C  38 21 00 20 */	addi r1, r1, 0x20
/* 801BE250 001BB190  4E 80 00 20 */	blr 
.endfn getMUI__Q24Game10RoomMapMgrFPQ24Game7MapUnit

.fn doAnimation__Q24Game10RoomMapMgrFv, global
/* 801BE254 001BB194  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BE258 001BB198  7C 08 02 A6 */	mflr r0
/* 801BE25C 001BB19C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE260 001BB1A0  38 00 00 00 */	li r0, 0
/* 801BE264 001BB1A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BE268 001BB1A8  7C 7F 1B 78 */	mr r31, r3
/* 801BE26C 001BB1AC  38 7F 00 AC */	addi r3, r31, 0xac
/* 801BE270 001BB1B0  90 0D 94 00 */	stw r0, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)
/* 801BE274 001BB1B4  81 9F 00 AC */	lwz r12, 0xac(r31)
/* 801BE278 001BB1B8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801BE27C 001BB1BC  7D 89 03 A6 */	mtctr r12
/* 801BE280 001BB1C0  4E 80 04 21 */	bctrl 
/* 801BE284 001BB1C4  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 801BE288 001BB1C8  28 03 00 00 */	cmplwi r3, 0
/* 801BE28C 001BB1CC  41 82 00 14 */	beq .L_801BE2A0
/* 801BE290 001BB1D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE294 001BB1D4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801BE298 001BB1D8  7D 89 03 A6 */	mtctr r12
/* 801BE29C 001BB1DC  4E 80 04 21 */	bctrl 
.L_801BE2A0:
/* 801BE2A0 001BB1E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE2A4 001BB1E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BE2A8 001BB1E8  7C 08 03 A6 */	mtlr r0
/* 801BE2AC 001BB1EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801BE2B0 001BB1F0  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game10RoomMapMgrFv

.fn doEntry__Q24Game10RoomMapMgrFv, global
/* 801BE2B4 001BB1F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BE2B8 001BB1F8  7C 08 02 A6 */	mflr r0
/* 801BE2BC 001BB1FC  38 82 B1 38 */	addi r4, r2, lbl_80519498@sda21
/* 801BE2C0 001BB200  38 A0 00 01 */	li r5, 1
/* 801BE2C4 001BB204  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE2C8 001BB208  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BE2CC 001BB20C  93 C1 00 08 */	stw r30, 8(r1)
/* 801BE2D0 001BB210  7C 7E 1B 78 */	mr r30, r3
/* 801BE2D4 001BB214  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 801BE2D8 001BB218  80 66 00 28 */	lwz r3, 0x28(r6)
/* 801BE2DC 001BB21C  48 26 C8 1D */	bl _start__9SysTimersFPcb
/* 801BE2E0 001BB220  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801BE2E4 001BB224  28 04 00 00 */	cmplwi r4, 0
/* 801BE2E8 001BB228  41 82 00 80 */	beq .L_801BE368
/* 801BE2EC 001BB22C  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 801BE2F0 001BB230  83 E4 00 58 */	lwz r31, 0x58(r4)
/* 801BE2F4 001BB234  28 03 00 00 */	cmplwi r3, 0
/* 801BE2F8 001BB238  41 82 00 14 */	beq .L_801BE30C
/* 801BE2FC 001BB23C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE300 001BB240  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801BE304 001BB244  7D 89 03 A6 */	mtctr r12
/* 801BE308 001BB248  4E 80 04 21 */	bctrl 
.L_801BE30C:
/* 801BE30C 001BB24C  7F E3 FB 78 */	mr r3, r31
/* 801BE310 001BB250  38 80 00 02 */	li r4, 2
/* 801BE314 001BB254  4B F9 31 49 */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
/* 801BE318 001BB258  38 7E 00 AC */	addi r3, r30, 0xac
/* 801BE31C 001BB25C  81 9E 00 AC */	lwz r12, 0xac(r30)
/* 801BE320 001BB260  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801BE324 001BB264  7D 89 03 A6 */	mtctr r12
/* 801BE328 001BB268  4E 80 04 21 */	bctrl 
/* 801BE32C 001BB26C  80 1E 00 24 */	lwz r0, 0x24(r30)
/* 801BE330 001BB270  28 00 00 00 */	cmplwi r0, 0
/* 801BE334 001BB274  41 82 00 28 */	beq .L_801BE35C
/* 801BE338 001BB278  7F E3 FB 78 */	mr r3, r31
/* 801BE33C 001BB27C  38 80 00 06 */	li r4, 6
/* 801BE340 001BB280  4B F9 31 1D */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
/* 801BE344 001BB284  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 801BE348 001BB288  80 63 00 08 */	lwz r3, 8(r3)
/* 801BE34C 001BB28C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE350 001BB290  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801BE354 001BB294  7D 89 03 A6 */	mtctr r12
/* 801BE358 001BB298  4E 80 04 21 */	bctrl 
.L_801BE35C:
/* 801BE35C 001BB29C  7F E3 FB 78 */	mr r3, r31
/* 801BE360 001BB2A0  38 80 00 00 */	li r4, 0
/* 801BE364 001BB2A4  4B F9 30 F9 */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
.L_801BE368:
/* 801BE368 001BB2A8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801BE36C 001BB2AC  38 82 B1 38 */	addi r4, r2, lbl_80519498@sda21
/* 801BE370 001BB2B0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801BE374 001BB2B4  48 26 C7 89 */	bl _stop__9SysTimersFPc
/* 801BE378 001BB2B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE37C 001BB2BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BE380 001BB2C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801BE384 001BB2C4  7C 08 03 A6 */	mtlr r0
/* 801BE388 001BB2C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801BE38C 001BB2CC  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game10RoomMapMgrFv

.fn doSetView__Q24Game10RoomMapMgrFi, global
/* 801BE390 001BB2D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BE394 001BB2D4  7C 08 02 A6 */	mflr r0
/* 801BE398 001BB2D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE39C 001BB2DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BE3A0 001BB2E0  7C 9F 23 78 */	mr r31, r4
/* 801BE3A4 001BB2E4  93 C1 00 08 */	stw r30, 8(r1)
/* 801BE3A8 001BB2E8  7C 7E 1B 78 */	mr r30, r3
/* 801BE3AC 001BB2EC  38 7E 00 AC */	addi r3, r30, 0xac
/* 801BE3B0 001BB2F0  81 9E 00 AC */	lwz r12, 0xac(r30)
/* 801BE3B4 001BB2F4  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801BE3B8 001BB2F8  7D 89 03 A6 */	mtctr r12
/* 801BE3BC 001BB2FC  4E 80 04 21 */	bctrl 
/* 801BE3C0 001BB300  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 801BE3C4 001BB304  28 03 00 00 */	cmplwi r3, 0
/* 801BE3C8 001BB308  41 82 00 18 */	beq .L_801BE3E0
/* 801BE3CC 001BB30C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE3D0 001BB310  7F E4 FB 78 */	mr r4, r31
/* 801BE3D4 001BB314  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801BE3D8 001BB318  7D 89 03 A6 */	mtctr r12
/* 801BE3DC 001BB31C  4E 80 04 21 */	bctrl 
.L_801BE3E0:
/* 801BE3E0 001BB320  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 801BE3E4 001BB324  28 03 00 00 */	cmplwi r3, 0
/* 801BE3E8 001BB328  41 82 00 0C */	beq .L_801BE3F4
/* 801BE3EC 001BB32C  7F E4 FB 78 */	mr r4, r31
/* 801BE3F0 001BB330  48 28 0C D1 */	bl setCurrentViewNo__Q28SysShape5ModelFUl
.L_801BE3F4:
/* 801BE3F4 001BB334  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE3F8 001BB338  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BE3FC 001BB33C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801BE400 001BB340  7C 08 03 A6 */	mtlr r0
/* 801BE404 001BB344  38 21 00 10 */	addi r1, r1, 0x10
/* 801BE408 001BB348  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game10RoomMapMgrFi

.fn doViewCalc__Q24Game10RoomMapMgrFv, global
/* 801BE40C 001BB34C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BE410 001BB350  7C 08 02 A6 */	mflr r0
/* 801BE414 001BB354  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE418 001BB358  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BE41C 001BB35C  7C 7F 1B 78 */	mr r31, r3
/* 801BE420 001BB360  38 7F 00 AC */	addi r3, r31, 0xac
/* 801BE424 001BB364  81 9F 00 AC */	lwz r12, 0xac(r31)
/* 801BE428 001BB368  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 801BE42C 001BB36C  7D 89 03 A6 */	mtctr r12
/* 801BE430 001BB370  4E 80 04 21 */	bctrl 
/* 801BE434 001BB374  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 801BE438 001BB378  28 03 00 00 */	cmplwi r3, 0
/* 801BE43C 001BB37C  41 82 00 14 */	beq .L_801BE450
/* 801BE440 001BB380  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE444 001BB384  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 801BE448 001BB388  7D 89 03 A6 */	mtctr r12
/* 801BE44C 001BB38C  4E 80 04 21 */	bctrl 
.L_801BE450:
/* 801BE450 001BB390  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801BE454 001BB394  28 03 00 00 */	cmplwi r3, 0
/* 801BE458 001BB398  41 82 00 08 */	beq .L_801BE460
/* 801BE45C 001BB39C  48 28 0B FD */	bl viewCalc__Q28SysShape5ModelFv
.L_801BE460:
/* 801BE460 001BB3A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE464 001BB3A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BE468 001BB3A8  7C 08 03 A6 */	mtlr r0
/* 801BE46C 001BB3AC  38 21 00 10 */	addi r1, r1, 0x10
/* 801BE470 001BB3B0  4E 80 00 20 */	blr 
.endfn doViewCalc__Q24Game10RoomMapMgrFv

.fn doSimulation__Q24Game10RoomMapMgrFf, global
/* 801BE474 001BB3B4  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game10RoomMapMgrFf

.fn doDirectDraw__Q24Game10RoomMapMgrFR8Graphics, global
/* 801BE478 001BB3B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BE47C 001BB3BC  7C 08 02 A6 */	mflr r0
/* 801BE480 001BB3C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BE484 001BB3C4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BE488 001BB3C8  7C 9F 23 78 */	mr r31, r4
/* 801BE48C 001BB3CC  38 80 00 00 */	li r4, 0
/* 801BE490 001BB3D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801BE494 001BB3D4  7C 7E 1B 78 */	mr r30, r3
/* 801BE498 001BB3D8  7F E3 FB 78 */	mr r3, r31
/* 801BE49C 001BB3DC  48 26 73 81 */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 801BE4A0 001BB3E0  38 00 00 00 */	li r0, 0
/* 801BE4A4 001BB3E4  3C 60 80 4B */	lis r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BE4A8 001BB3E8  38 83 5D 28 */	addi r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BE4AC 001BB3EC  38 7E 00 AC */	addi r3, r30, 0xac
/* 801BE4B0 001BB3F0  28 00 00 00 */	cmplwi r0, 0
/* 801BE4B4 001BB3F4  90 81 00 08 */	stw r4, 8(r1)
/* 801BE4B8 001BB3F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE4BC 001BB3FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801BE4C0 001BB400  90 61 00 10 */	stw r3, 0x10(r1)
/* 801BE4C4 001BB404  40 82 00 1C */	bne .L_801BE4E0
/* 801BE4C8 001BB408  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE4CC 001BB40C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BE4D0 001BB410  7D 89 03 A6 */	mtctr r12
/* 801BE4D4 001BB414  4E 80 04 21 */	bctrl 
/* 801BE4D8 001BB418  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BE4DC 001BB41C  48 00 01 74 */	b .L_801BE650
.L_801BE4E0:
/* 801BE4E0 001BB420  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE4E4 001BB424  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BE4E8 001BB428  7D 89 03 A6 */	mtctr r12
/* 801BE4EC 001BB42C  4E 80 04 21 */	bctrl 
/* 801BE4F0 001BB430  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BE4F4 001BB434  48 00 00 58 */	b .L_801BE54C
.L_801BE4F8:
/* 801BE4F8 001BB438  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE4FC 001BB43C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE500 001BB440  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE504 001BB444  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BE508 001BB448  7D 89 03 A6 */	mtctr r12
/* 801BE50C 001BB44C  4E 80 04 21 */	bctrl 
/* 801BE510 001BB450  7C 64 1B 78 */	mr r4, r3
/* 801BE514 001BB454  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BE518 001BB458  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE51C 001BB45C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BE520 001BB460  7D 89 03 A6 */	mtctr r12
/* 801BE524 001BB464  4E 80 04 21 */	bctrl 
/* 801BE528 001BB468  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE52C 001BB46C  40 82 01 24 */	bne .L_801BE650
/* 801BE530 001BB470  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE534 001BB474  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE538 001BB478  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE53C 001BB47C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE540 001BB480  7D 89 03 A6 */	mtctr r12
/* 801BE544 001BB484  4E 80 04 21 */	bctrl 
/* 801BE548 001BB488  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BE54C:
/* 801BE54C 001BB48C  81 81 00 08 */	lwz r12, 8(r1)
/* 801BE550 001BB490  38 61 00 08 */	addi r3, r1, 8
/* 801BE554 001BB494  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BE558 001BB498  7D 89 03 A6 */	mtctr r12
/* 801BE55C 001BB49C  4E 80 04 21 */	bctrl 
/* 801BE560 001BB4A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE564 001BB4A4  41 82 FF 94 */	beq .L_801BE4F8
/* 801BE568 001BB4A8  48 00 00 E8 */	b .L_801BE650
.L_801BE56C:
/* 801BE56C 001BB4AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE570 001BB4B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE574 001BB4B4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BE578 001BB4B8  7D 89 03 A6 */	mtctr r12
/* 801BE57C 001BB4BC  4E 80 04 21 */	bctrl 
/* 801BE580 001BB4C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE584 001BB4C4  7F E4 FB 78 */	mr r4, r31
/* 801BE588 001BB4C8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801BE58C 001BB4CC  7D 89 03 A6 */	mtctr r12
/* 801BE590 001BB4D0  4E 80 04 21 */	bctrl 
/* 801BE594 001BB4D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE598 001BB4D8  28 00 00 00 */	cmplwi r0, 0
/* 801BE59C 001BB4DC  40 82 00 24 */	bne .L_801BE5C0
/* 801BE5A0 001BB4E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE5A4 001BB4E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE5A8 001BB4E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE5AC 001BB4EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE5B0 001BB4F0  7D 89 03 A6 */	mtctr r12
/* 801BE5B4 001BB4F4  4E 80 04 21 */	bctrl 
/* 801BE5B8 001BB4F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BE5BC 001BB4FC  48 00 00 94 */	b .L_801BE650
.L_801BE5C0:
/* 801BE5C0 001BB500  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE5C4 001BB504  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE5C8 001BB508  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE5CC 001BB50C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE5D0 001BB510  7D 89 03 A6 */	mtctr r12
/* 801BE5D4 001BB514  4E 80 04 21 */	bctrl 
/* 801BE5D8 001BB518  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BE5DC 001BB51C  48 00 00 58 */	b .L_801BE634
.L_801BE5E0:
/* 801BE5E0 001BB520  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE5E4 001BB524  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE5E8 001BB528  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE5EC 001BB52C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BE5F0 001BB530  7D 89 03 A6 */	mtctr r12
/* 801BE5F4 001BB534  4E 80 04 21 */	bctrl 
/* 801BE5F8 001BB538  7C 64 1B 78 */	mr r4, r3
/* 801BE5FC 001BB53C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BE600 001BB540  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE604 001BB544  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BE608 001BB548  7D 89 03 A6 */	mtctr r12
/* 801BE60C 001BB54C  4E 80 04 21 */	bctrl 
/* 801BE610 001BB550  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE614 001BB554  40 82 00 3C */	bne .L_801BE650
/* 801BE618 001BB558  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE61C 001BB55C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE620 001BB560  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE624 001BB564  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE628 001BB568  7D 89 03 A6 */	mtctr r12
/* 801BE62C 001BB56C  4E 80 04 21 */	bctrl 
/* 801BE630 001BB570  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BE634:
/* 801BE634 001BB574  81 81 00 08 */	lwz r12, 8(r1)
/* 801BE638 001BB578  38 61 00 08 */	addi r3, r1, 8
/* 801BE63C 001BB57C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BE640 001BB580  7D 89 03 A6 */	mtctr r12
/* 801BE644 001BB584  4E 80 04 21 */	bctrl 
/* 801BE648 001BB588  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE64C 001BB58C  41 82 FF 94 */	beq .L_801BE5E0
.L_801BE650:
/* 801BE650 001BB590  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BE654 001BB594  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE658 001BB598  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BE65C 001BB59C  7D 89 03 A6 */	mtctr r12
/* 801BE660 001BB5A0  4E 80 04 21 */	bctrl 
/* 801BE664 001BB5A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BE668 001BB5A8  7C 04 18 40 */	cmplw r4, r3
/* 801BE66C 001BB5AC  40 82 FF 00 */	bne .L_801BE56C
/* 801BE670 001BB5B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BE674 001BB5B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BE678 001BB5B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801BE67C 001BB5BC  7C 08 03 A6 */	mtlr r0
/* 801BE680 001BB5C0  38 21 00 20 */	addi r1, r1, 0x20
/* 801BE684 001BB5C4  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game10RoomMapMgrFR8Graphics

.fn "getStartPosition__Q24Game10RoomMapMgrFR10Vector3<f>i", weak
/* 801BE688 001BB5C8  1C 05 00 0C */	mulli r0, r5, 0xc
/* 801BE68C 001BB5CC  7C 63 02 14 */	add r3, r3, r0
/* 801BE690 001BB5D0  C0 03 00 FC */	lfs f0, 0xfc(r3)
/* 801BE694 001BB5D4  D0 04 00 00 */	stfs f0, 0(r4)
/* 801BE698 001BB5D8  C0 03 01 00 */	lfs f0, 0x100(r3)
/* 801BE69C 001BB5DC  D0 04 00 04 */	stfs f0, 4(r4)
/* 801BE6A0 001BB5E0  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 801BE6A4 001BB5E4  D0 04 00 08 */	stfs f0, 8(r4)
/* 801BE6A8 001BB5E8  4E 80 00 20 */	blr 
.endfn "getStartPosition__Q24Game10RoomMapMgrFR10Vector3<f>i"

.fn getDemoMatrix__Q24Game10RoomMapMgrFv, weak
/* 801BE6AC 001BB5EC  38 60 00 00 */	li r3, 0
/* 801BE6B0 001BB5F0  4E 80 00 20 */	blr 
.endfn getDemoMatrix__Q24Game10RoomMapMgrFv

.fn __dt__Q24Game4DoorFv, weak
/* 801BE6B4 001BB5F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BE6B8 001BB5F8  7C 08 02 A6 */	mflr r0
/* 801BE6BC 001BB5FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE6C0 001BB600  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BE6C4 001BB604  7C 9F 23 78 */	mr r31, r4
/* 801BE6C8 001BB608  93 C1 00 08 */	stw r30, 8(r1)
/* 801BE6CC 001BB60C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801BE6D0 001BB610  41 82 00 4C */	beq .L_801BE71C
/* 801BE6D4 001BB614  3C 60 80 4B */	lis r3, __vt__Q24Game4Door@ha
/* 801BE6D8 001BB618  34 1E 00 20 */	addic. r0, r30, 0x20
/* 801BE6DC 001BB61C  38 03 5C EC */	addi r0, r3, __vt__Q24Game4Door@l
/* 801BE6E0 001BB620  90 1E 00 00 */	stw r0, 0(r30)
/* 801BE6E4 001BB624  41 82 00 1C */	beq .L_801BE700
/* 801BE6E8 001BB628  3C 80 80 4B */	lis r4, __vt__Q24Game8DoorLink@ha
/* 801BE6EC 001BB62C  38 7E 00 20 */	addi r3, r30, 0x20
/* 801BE6F0 001BB630  38 04 60 D4 */	addi r0, r4, __vt__Q24Game8DoorLink@l
/* 801BE6F4 001BB634  38 80 00 00 */	li r4, 0
/* 801BE6F8 001BB638  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801BE6FC 001BB63C  48 25 2E 8D */	bl __dt__5CNodeFv
.L_801BE700:
/* 801BE700 001BB640  7F C3 F3 78 */	mr r3, r30
/* 801BE704 001BB644  38 80 00 00 */	li r4, 0
/* 801BE708 001BB648  48 25 2E 81 */	bl __dt__5CNodeFv
/* 801BE70C 001BB64C  7F E0 07 35 */	extsh. r0, r31
/* 801BE710 001BB650  40 81 00 0C */	ble .L_801BE71C
/* 801BE714 001BB654  7F C3 F3 78 */	mr r3, r30
/* 801BE718 001BB658  4B E6 59 9D */	bl __dl__FPv
.L_801BE71C:
/* 801BE71C 001BB65C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE720 001BB660  7F C3 F3 78 */	mr r3, r30
/* 801BE724 001BB664  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BE728 001BB668  83 C1 00 08 */	lwz r30, 8(r1)
/* 801BE72C 001BB66C  7C 08 03 A6 */	mtlr r0
/* 801BE730 001BB670  38 21 00 10 */	addi r1, r1, 0x10
/* 801BE734 001BB674  4E 80 00 20 */	blr 
.endfn __dt__Q24Game4DoorFv

.fn constructor__Q24Game9PartsViewFv, weak
/* 801BE738 001BB678  4E 80 00 20 */	blr 
.endfn constructor__Q24Game9PartsViewFv

.fn doSimulation__Q24Game9PartsViewFf, weak
/* 801BE73C 001BB67C  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game9PartsViewFf

.fn "__ml__25Iterator<Q24Game7MapRoom>Fv", weak
/* 801BE740 001BB680  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BE744 001BB684  7C 08 02 A6 */	mflr r0
/* 801BE748 001BB688  7C 64 1B 78 */	mr r4, r3
/* 801BE74C 001BB68C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE750 001BB690  80 63 00 08 */	lwz r3, 8(r3)
/* 801BE754 001BB694  80 84 00 04 */	lwz r4, 4(r4)
/* 801BE758 001BB698  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE75C 001BB69C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BE760 001BB6A0  7D 89 03 A6 */	mtctr r12
/* 801BE764 001BB6A4  4E 80 04 21 */	bctrl 
/* 801BE768 001BB6A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE76C 001BB6AC  7C 08 03 A6 */	mtlr r0
/* 801BE770 001BB6B0  38 21 00 10 */	addi r1, r1, 0x10
/* 801BE774 001BB6B4  4E 80 00 20 */	blr 
.endfn "__ml__25Iterator<Q24Game7MapRoom>Fv"

.fn "next__25Iterator<Q24Game7MapRoom>Fv", weak
/* 801BE778 001BB6B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BE77C 001BB6BC  7C 08 02 A6 */	mflr r0
/* 801BE780 001BB6C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE784 001BB6C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BE788 001BB6C8  7C 7F 1B 78 */	mr r31, r3
/* 801BE78C 001BB6CC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801BE790 001BB6D0  28 00 00 00 */	cmplwi r0, 0
/* 801BE794 001BB6D4  40 82 00 24 */	bne .L_801BE7B8
/* 801BE798 001BB6D8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BE79C 001BB6DC  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BE7A0 001BB6E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE7A4 001BB6E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE7A8 001BB6E8  7D 89 03 A6 */	mtctr r12
/* 801BE7AC 001BB6EC  4E 80 04 21 */	bctrl 
/* 801BE7B0 001BB6F0  90 7F 00 04 */	stw r3, 4(r31)
/* 801BE7B4 001BB6F4  48 00 00 94 */	b .L_801BE848
.L_801BE7B8:
/* 801BE7B8 001BB6F8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BE7BC 001BB6FC  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BE7C0 001BB700  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE7C4 001BB704  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE7C8 001BB708  7D 89 03 A6 */	mtctr r12
/* 801BE7CC 001BB70C  4E 80 04 21 */	bctrl 
/* 801BE7D0 001BB710  90 7F 00 04 */	stw r3, 4(r31)
/* 801BE7D4 001BB714  48 00 00 58 */	b .L_801BE82C
.L_801BE7D8:
/* 801BE7D8 001BB718  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BE7DC 001BB71C  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BE7E0 001BB720  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE7E4 001BB724  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BE7E8 001BB728  7D 89 03 A6 */	mtctr r12
/* 801BE7EC 001BB72C  4E 80 04 21 */	bctrl 
/* 801BE7F0 001BB730  7C 64 1B 78 */	mr r4, r3
/* 801BE7F4 001BB734  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801BE7F8 001BB738  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE7FC 001BB73C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BE800 001BB740  7D 89 03 A6 */	mtctr r12
/* 801BE804 001BB744  4E 80 04 21 */	bctrl 
/* 801BE808 001BB748  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE80C 001BB74C  40 82 00 3C */	bne .L_801BE848
/* 801BE810 001BB750  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BE814 001BB754  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BE818 001BB758  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE81C 001BB75C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE820 001BB760  7D 89 03 A6 */	mtctr r12
/* 801BE824 001BB764  4E 80 04 21 */	bctrl 
/* 801BE828 001BB768  90 7F 00 04 */	stw r3, 4(r31)
.L_801BE82C:
/* 801BE82C 001BB76C  7F E3 FB 78 */	mr r3, r31
/* 801BE830 001BB770  81 9F 00 00 */	lwz r12, 0(r31)
/* 801BE834 001BB774  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BE838 001BB778  7D 89 03 A6 */	mtctr r12
/* 801BE83C 001BB77C  4E 80 04 21 */	bctrl 
/* 801BE840 001BB780  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE844 001BB784  41 82 FF 94 */	beq .L_801BE7D8
.L_801BE848:
/* 801BE848 001BB788  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE84C 001BB78C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BE850 001BB790  7C 08 03 A6 */	mtlr r0
/* 801BE854 001BB794  38 21 00 10 */	addi r1, r1, 0x10
/* 801BE858 001BB798  4E 80 00 20 */	blr 
.endfn "next__25Iterator<Q24Game7MapRoom>Fv"

.fn "first__25Iterator<Q24Game7MapRoom>Fv", weak
/* 801BE85C 001BB79C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BE860 001BB7A0  7C 08 02 A6 */	mflr r0
/* 801BE864 001BB7A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE868 001BB7A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BE86C 001BB7AC  7C 7F 1B 78 */	mr r31, r3
/* 801BE870 001BB7B0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801BE874 001BB7B4  28 00 00 00 */	cmplwi r0, 0
/* 801BE878 001BB7B8  40 82 00 20 */	bne .L_801BE898
/* 801BE87C 001BB7BC  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BE880 001BB7C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE884 001BB7C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BE888 001BB7C8  7D 89 03 A6 */	mtctr r12
/* 801BE88C 001BB7CC  4E 80 04 21 */	bctrl 
/* 801BE890 001BB7D0  90 7F 00 04 */	stw r3, 4(r31)
/* 801BE894 001BB7D4  48 00 00 90 */	b .L_801BE924
.L_801BE898:
/* 801BE898 001BB7D8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BE89C 001BB7DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE8A0 001BB7E0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BE8A4 001BB7E4  7D 89 03 A6 */	mtctr r12
/* 801BE8A8 001BB7E8  4E 80 04 21 */	bctrl 
/* 801BE8AC 001BB7EC  90 7F 00 04 */	stw r3, 4(r31)
/* 801BE8B0 001BB7F0  48 00 00 58 */	b .L_801BE908
.L_801BE8B4:
/* 801BE8B4 001BB7F4  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BE8B8 001BB7F8  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BE8BC 001BB7FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE8C0 001BB800  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BE8C4 001BB804  7D 89 03 A6 */	mtctr r12
/* 801BE8C8 001BB808  4E 80 04 21 */	bctrl 
/* 801BE8CC 001BB80C  7C 64 1B 78 */	mr r4, r3
/* 801BE8D0 001BB810  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801BE8D4 001BB814  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE8D8 001BB818  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BE8DC 001BB81C  7D 89 03 A6 */	mtctr r12
/* 801BE8E0 001BB820  4E 80 04 21 */	bctrl 
/* 801BE8E4 001BB824  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE8E8 001BB828  40 82 00 3C */	bne .L_801BE924
/* 801BE8EC 001BB82C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BE8F0 001BB830  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BE8F4 001BB834  81 83 00 00 */	lwz r12, 0(r3)
/* 801BE8F8 001BB838  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BE8FC 001BB83C  7D 89 03 A6 */	mtctr r12
/* 801BE900 001BB840  4E 80 04 21 */	bctrl 
/* 801BE904 001BB844  90 7F 00 04 */	stw r3, 4(r31)
.L_801BE908:
/* 801BE908 001BB848  7F E3 FB 78 */	mr r3, r31
/* 801BE90C 001BB84C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801BE910 001BB850  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BE914 001BB854  7D 89 03 A6 */	mtctr r12
/* 801BE918 001BB858  4E 80 04 21 */	bctrl 
/* 801BE91C 001BB85C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BE920 001BB860  41 82 FF 94 */	beq .L_801BE8B4
.L_801BE924:
/* 801BE924 001BB864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE928 001BB868  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BE92C 001BB86C  7C 08 03 A6 */	mtlr r0
/* 801BE930 001BB870  38 21 00 10 */	addi r1, r1, 0x10
/* 801BE934 001BB874  4E 80 00 20 */	blr 
.endfn "first__25Iterator<Q24Game7MapRoom>Fv"

.fn "__dt__26Container<Q24Game7MapRoom>Fv", weak
/* 801BE938 001BB878  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BE93C 001BB87C  7C 08 02 A6 */	mflr r0
/* 801BE940 001BB880  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE944 001BB884  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BE948 001BB888  7C 9F 23 78 */	mr r31, r4
/* 801BE94C 001BB88C  93 C1 00 08 */	stw r30, 8(r1)
/* 801BE950 001BB890  7C 7E 1B 79 */	or. r30, r3, r3
/* 801BE954 001BB894  41 82 00 38 */	beq .L_801BE98C
/* 801BE958 001BB898  3C 80 80 4B */	lis r4, "__vt__26Container<Q24Game7MapRoom>"@ha
/* 801BE95C 001BB89C  38 04 5D 40 */	addi r0, r4, "__vt__26Container<Q24Game7MapRoom>"@l
/* 801BE960 001BB8A0  90 1E 00 00 */	stw r0, 0(r30)
/* 801BE964 001BB8A4  41 82 00 18 */	beq .L_801BE97C
/* 801BE968 001BB8A8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801BE96C 001BB8AC  38 80 00 00 */	li r4, 0
/* 801BE970 001BB8B0  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801BE974 001BB8B4  90 1E 00 00 */	stw r0, 0(r30)
/* 801BE978 001BB8B8  48 25 2C 11 */	bl __dt__5CNodeFv
.L_801BE97C:
/* 801BE97C 001BB8BC  7F E0 07 35 */	extsh. r0, r31
/* 801BE980 001BB8C0  40 81 00 0C */	ble .L_801BE98C
/* 801BE984 001BB8C4  7F C3 F3 78 */	mr r3, r30
/* 801BE988 001BB8C8  4B E6 57 2D */	bl __dl__FPv
.L_801BE98C:
/* 801BE98C 001BB8CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BE990 001BB8D0  7F C3 F3 78 */	mr r3, r30
/* 801BE994 001BB8D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BE998 001BB8D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801BE99C 001BB8DC  7C 08 03 A6 */	mtlr r0
/* 801BE9A0 001BB8E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801BE9A4 001BB8E4  4E 80 00 20 */	blr 
.endfn "__dt__26Container<Q24Game7MapRoom>Fv"

.fn "__dt__26ObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BE9A8 001BB8E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BE9AC 001BB8EC  7C 08 02 A6 */	mflr r0
/* 801BE9B0 001BB8F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BE9B4 001BB8F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BE9B8 001BB8F8  7C 9F 23 78 */	mr r31, r4
/* 801BE9BC 001BB8FC  93 C1 00 08 */	stw r30, 8(r1)
/* 801BE9C0 001BB900  7C 7E 1B 79 */	or. r30, r3, r3
/* 801BE9C4 001BB904  41 82 00 50 */	beq .L_801BEA14
/* 801BE9C8 001BB908  3C 80 80 4B */	lis r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@ha
/* 801BE9CC 001BB90C  38 84 5D 6C */	addi r4, r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@l
/* 801BE9D0 001BB910  90 9E 00 00 */	stw r4, 0(r30)
/* 801BE9D4 001BB914  38 04 00 2C */	addi r0, r4, 0x2c
/* 801BE9D8 001BB918  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801BE9DC 001BB91C  41 82 00 28 */	beq .L_801BEA04
/* 801BE9E0 001BB920  3C 80 80 4B */	lis r4, "__vt__26Container<Q24Game7MapRoom>"@ha
/* 801BE9E4 001BB924  38 04 5D 40 */	addi r0, r4, "__vt__26Container<Q24Game7MapRoom>"@l
/* 801BE9E8 001BB928  90 1E 00 00 */	stw r0, 0(r30)
/* 801BE9EC 001BB92C  41 82 00 18 */	beq .L_801BEA04
/* 801BE9F0 001BB930  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801BE9F4 001BB934  38 80 00 00 */	li r4, 0
/* 801BE9F8 001BB938  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801BE9FC 001BB93C  90 1E 00 00 */	stw r0, 0(r30)
/* 801BEA00 001BB940  48 25 2B 89 */	bl __dt__5CNodeFv
.L_801BEA04:
/* 801BEA04 001BB944  7F E0 07 35 */	extsh. r0, r31
/* 801BEA08 001BB948  40 81 00 0C */	ble .L_801BEA14
/* 801BEA0C 001BB94C  7F C3 F3 78 */	mr r3, r30
/* 801BEA10 001BB950  4B E6 56 A5 */	bl __dl__FPv
.L_801BEA14:
/* 801BEA14 001BB954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BEA18 001BB958  7F C3 F3 78 */	mr r3, r30
/* 801BEA1C 001BB95C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BEA20 001BB960  83 C1 00 08 */	lwz r30, 8(r1)
/* 801BEA24 001BB964  7C 08 03 A6 */	mtlr r0
/* 801BEA28 001BB968  38 21 00 10 */	addi r1, r1, 0x10
/* 801BEA2C 001BB96C  4E 80 00 20 */	blr 
.endfn "__dt__26ObjectMgr<Q24Game7MapRoom>Fv"

.fn getBoundingSphere__Q24Game7MapRoomFRQ23Sys6Sphere, weak
/* 801BEA30 001BB970  C0 03 01 40 */	lfs f0, 0x140(r3)
/* 801BEA34 001BB974  D0 04 00 00 */	stfs f0, 0(r4)
/* 801BEA38 001BB978  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 801BEA3C 001BB97C  D0 04 00 04 */	stfs f0, 4(r4)
/* 801BEA40 001BB980  C0 03 01 48 */	lfs f0, 0x148(r3)
/* 801BEA44 001BB984  D0 04 00 08 */	stfs f0, 8(r4)
/* 801BEA48 001BB988  C0 03 01 4C */	lfs f0, 0x14c(r3)
/* 801BEA4C 001BB98C  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 801BEA50 001BB990  4E 80 00 20 */	blr 
.endfn getBoundingSphere__Q24Game7MapRoomFRQ23Sys6Sphere

.fn getTypeName__Q24Game7MapRoomFv, weak
/* 801BEA54 001BB994  38 62 B1 40 */	addi r3, r2, lbl_805194A0@sda21
/* 801BEA58 001BB998  4E 80 00 20 */	blr 
.endfn getTypeName__Q24Game7MapRoomFv

.fn getObjType__Q24Game7MapRoomFv, weak
/* 801BEA5C 001BB99C  3C 60 00 01 */	lis r3, 0x0000AAAA@ha
/* 801BEA60 001BB9A0  38 63 AA AA */	addi r3, r3, 0x0000AAAA@l
/* 801BEA64 001BB9A4  4E 80 00 20 */	blr 
.endfn getObjType__Q24Game7MapRoomFv

.fn collisionUpdatable__Q24Game7MapRoomFv, weak
/* 801BEA68 001BB9A8  38 60 00 00 */	li r3, 0
/* 801BEA6C 001BB9AC  4E 80 00 20 */	blr 
.endfn collisionUpdatable__Q24Game7MapRoomFv

.fn getPosition__Q24Game7MapRoomFv, weak
/* 801BEA70 001BB9B0  C0 04 01 40 */	lfs f0, 0x140(r4)
/* 801BEA74 001BB9B4  D0 03 00 00 */	stfs f0, 0(r3)
/* 801BEA78 001BB9B8  C0 04 01 44 */	lfs f0, 0x144(r4)
/* 801BEA7C 001BB9BC  D0 03 00 04 */	stfs f0, 4(r3)
/* 801BEA80 001BB9C0  C0 04 01 48 */	lfs f0, 0x148(r4)
/* 801BEA84 001BB9C4  D0 03 00 08 */	stfs f0, 8(r3)
/* 801BEA88 001BB9C8  4E 80 00 20 */	blr 
.endfn getPosition__Q24Game7MapRoomFv

.fn constructor__Q24Game7MapRoomFv, weak
/* 801BEA8C 001BB9CC  4E 80 00 20 */	blr 
.endfn constructor__Q24Game7MapRoomFv

.fn getName__Q24Game15ItemGateInitArgFv, weak
/* 801BEA90 001BB9D0  3C 60 80 48 */	lis r3, lbl_8047FF38@ha
/* 801BEA94 001BB9D4  38 63 FF 38 */	addi r3, r3, lbl_8047FF38@l
/* 801BEA98 001BB9D8  4E 80 00 20 */	blr 
.endfn getName__Q24Game15ItemGateInitArgFv

.fn getName__Q34Game15ItemBigFountain7InitArgFv, weak
/* 801BEA9C 001BB9DC  3C 60 80 48 */	lis r3, lbl_8047FF48@ha
/* 801BEAA0 001BB9E0  38 63 FF 48 */	addi r3, r3, lbl_8047FF48@l
/* 801BEAA4 001BB9E4  4E 80 00 20 */	blr 
.endfn getName__Q34Game15ItemBigFountain7InitArgFv

.fn getName__Q34Game8ItemHole7InitArgFv, weak
/* 801BEAA8 001BB9E8  3C 60 80 48 */	lis r3, lbl_8047FF64@ha
/* 801BEAAC 001BB9EC  38 63 FF 64 */	addi r3, r3, lbl_8047FF64@l
/* 801BEAB0 001BB9F0  4E 80 00 20 */	blr 
.endfn getName__Q34Game8ItemHole7InitArgFv

.fn "__ml__25Iterator<Q24Game7MapUnit>Fv", weak
/* 801BEAB4 001BB9F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BEAB8 001BB9F8  7C 08 02 A6 */	mflr r0
/* 801BEABC 001BB9FC  7C 64 1B 78 */	mr r4, r3
/* 801BEAC0 001BBA00  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BEAC4 001BBA04  80 63 00 08 */	lwz r3, 8(r3)
/* 801BEAC8 001BBA08  80 84 00 04 */	lwz r4, 4(r4)
/* 801BEACC 001BBA0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEAD0 001BBA10  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BEAD4 001BBA14  7D 89 03 A6 */	mtctr r12
/* 801BEAD8 001BBA18  4E 80 04 21 */	bctrl 
/* 801BEADC 001BBA1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BEAE0 001BBA20  7C 08 03 A6 */	mtlr r0
/* 801BEAE4 001BBA24  38 21 00 10 */	addi r1, r1, 0x10
/* 801BEAE8 001BBA28  4E 80 00 20 */	blr 
.endfn "__ml__25Iterator<Q24Game7MapUnit>Fv"

.fn "next__25Iterator<Q24Game7MapUnit>Fv", weak
/* 801BEAEC 001BBA2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BEAF0 001BBA30  7C 08 02 A6 */	mflr r0
/* 801BEAF4 001BBA34  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BEAF8 001BBA38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BEAFC 001BBA3C  7C 7F 1B 78 */	mr r31, r3
/* 801BEB00 001BBA40  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801BEB04 001BBA44  28 00 00 00 */	cmplwi r0, 0
/* 801BEB08 001BBA48  40 82 00 24 */	bne .L_801BEB2C
/* 801BEB0C 001BBA4C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BEB10 001BBA50  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BEB14 001BBA54  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEB18 001BBA58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BEB1C 001BBA5C  7D 89 03 A6 */	mtctr r12
/* 801BEB20 001BBA60  4E 80 04 21 */	bctrl 
/* 801BEB24 001BBA64  90 7F 00 04 */	stw r3, 4(r31)
/* 801BEB28 001BBA68  48 00 00 94 */	b .L_801BEBBC
.L_801BEB2C:
/* 801BEB2C 001BBA6C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BEB30 001BBA70  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BEB34 001BBA74  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEB38 001BBA78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BEB3C 001BBA7C  7D 89 03 A6 */	mtctr r12
/* 801BEB40 001BBA80  4E 80 04 21 */	bctrl 
/* 801BEB44 001BBA84  90 7F 00 04 */	stw r3, 4(r31)
/* 801BEB48 001BBA88  48 00 00 58 */	b .L_801BEBA0
.L_801BEB4C:
/* 801BEB4C 001BBA8C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BEB50 001BBA90  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BEB54 001BBA94  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEB58 001BBA98  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BEB5C 001BBA9C  7D 89 03 A6 */	mtctr r12
/* 801BEB60 001BBAA0  4E 80 04 21 */	bctrl 
/* 801BEB64 001BBAA4  7C 64 1B 78 */	mr r4, r3
/* 801BEB68 001BBAA8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801BEB6C 001BBAAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEB70 001BBAB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BEB74 001BBAB4  7D 89 03 A6 */	mtctr r12
/* 801BEB78 001BBAB8  4E 80 04 21 */	bctrl 
/* 801BEB7C 001BBABC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BEB80 001BBAC0  40 82 00 3C */	bne .L_801BEBBC
/* 801BEB84 001BBAC4  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BEB88 001BBAC8  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BEB8C 001BBACC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEB90 001BBAD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BEB94 001BBAD4  7D 89 03 A6 */	mtctr r12
/* 801BEB98 001BBAD8  4E 80 04 21 */	bctrl 
/* 801BEB9C 001BBADC  90 7F 00 04 */	stw r3, 4(r31)
.L_801BEBA0:
/* 801BEBA0 001BBAE0  7F E3 FB 78 */	mr r3, r31
/* 801BEBA4 001BBAE4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801BEBA8 001BBAE8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BEBAC 001BBAEC  7D 89 03 A6 */	mtctr r12
/* 801BEBB0 001BBAF0  4E 80 04 21 */	bctrl 
/* 801BEBB4 001BBAF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BEBB8 001BBAF8  41 82 FF 94 */	beq .L_801BEB4C
.L_801BEBBC:
/* 801BEBBC 001BBAFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BEBC0 001BBB00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BEBC4 001BBB04  7C 08 03 A6 */	mtlr r0
/* 801BEBC8 001BBB08  38 21 00 10 */	addi r1, r1, 0x10
/* 801BEBCC 001BBB0C  4E 80 00 20 */	blr 
.endfn "next__25Iterator<Q24Game7MapUnit>Fv"

.fn "first__25Iterator<Q24Game7MapUnit>Fv", weak
/* 801BEBD0 001BBB10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BEBD4 001BBB14  7C 08 02 A6 */	mflr r0
/* 801BEBD8 001BBB18  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BEBDC 001BBB1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BEBE0 001BBB20  7C 7F 1B 78 */	mr r31, r3
/* 801BEBE4 001BBB24  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801BEBE8 001BBB28  28 00 00 00 */	cmplwi r0, 0
/* 801BEBEC 001BBB2C  40 82 00 20 */	bne .L_801BEC0C
/* 801BEBF0 001BBB30  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BEBF4 001BBB34  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEBF8 001BBB38  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BEBFC 001BBB3C  7D 89 03 A6 */	mtctr r12
/* 801BEC00 001BBB40  4E 80 04 21 */	bctrl 
/* 801BEC04 001BBB44  90 7F 00 04 */	stw r3, 4(r31)
/* 801BEC08 001BBB48  48 00 00 90 */	b .L_801BEC98
.L_801BEC0C:
/* 801BEC0C 001BBB4C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BEC10 001BBB50  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEC14 001BBB54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BEC18 001BBB58  7D 89 03 A6 */	mtctr r12
/* 801BEC1C 001BBB5C  4E 80 04 21 */	bctrl 
/* 801BEC20 001BBB60  90 7F 00 04 */	stw r3, 4(r31)
/* 801BEC24 001BBB64  48 00 00 58 */	b .L_801BEC7C
.L_801BEC28:
/* 801BEC28 001BBB68  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BEC2C 001BBB6C  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BEC30 001BBB70  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEC34 001BBB74  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BEC38 001BBB78  7D 89 03 A6 */	mtctr r12
/* 801BEC3C 001BBB7C  4E 80 04 21 */	bctrl 
/* 801BEC40 001BBB80  7C 64 1B 78 */	mr r4, r3
/* 801BEC44 001BBB84  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801BEC48 001BBB88  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEC4C 001BBB8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BEC50 001BBB90  7D 89 03 A6 */	mtctr r12
/* 801BEC54 001BBB94  4E 80 04 21 */	bctrl 
/* 801BEC58 001BBB98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BEC5C 001BBB9C  40 82 00 3C */	bne .L_801BEC98
/* 801BEC60 001BBBA0  80 7F 00 08 */	lwz r3, 8(r31)
/* 801BEC64 001BBBA4  80 9F 00 04 */	lwz r4, 4(r31)
/* 801BEC68 001BBBA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEC6C 001BBBAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BEC70 001BBBB0  7D 89 03 A6 */	mtctr r12
/* 801BEC74 001BBBB4  4E 80 04 21 */	bctrl 
/* 801BEC78 001BBBB8  90 7F 00 04 */	stw r3, 4(r31)
.L_801BEC7C:
/* 801BEC7C 001BBBBC  7F E3 FB 78 */	mr r3, r31
/* 801BEC80 001BBBC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801BEC84 001BBBC4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BEC88 001BBBC8  7D 89 03 A6 */	mtctr r12
/* 801BEC8C 001BBBCC  4E 80 04 21 */	bctrl 
/* 801BEC90 001BBBD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BEC94 001BBBD4  41 82 FF 94 */	beq .L_801BEC28
.L_801BEC98:
/* 801BEC98 001BBBD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BEC9C 001BBBDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BECA0 001BBBE0  7C 08 03 A6 */	mtlr r0
/* 801BECA4 001BBBE4  38 21 00 10 */	addi r1, r1, 0x10
/* 801BECA8 001BBBE8  4E 80 00 20 */	blr 
.endfn "first__25Iterator<Q24Game7MapUnit>Fv"

.fn __dt__Q24Game10MapUnitMgrFv, weak
/* 801BECAC 001BBBEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BECB0 001BBBF0  7C 08 02 A6 */	mflr r0
/* 801BECB4 001BBBF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BECB8 001BBBF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BECBC 001BBBFC  7C 7F 1B 79 */	or. r31, r3, r3
/* 801BECC0 001BBC00  93 C1 00 08 */	stw r30, 8(r1)
/* 801BECC4 001BBC04  7C 9E 23 78 */	mr r30, r4
/* 801BECC8 001BBC08  41 82 00 A8 */	beq .L_801BED70
/* 801BECCC 001BBC0C  3C 60 80 4B */	lis r3, __vt__Q24Game10MapUnitMgr@ha
/* 801BECD0 001BBC10  38 63 5E F8 */	addi r3, r3, __vt__Q24Game10MapUnitMgr@l
/* 801BECD4 001BBC14  90 7F 00 00 */	stw r3, 0(r31)
/* 801BECD8 001BBC18  38 03 00 2C */	addi r0, r3, 0x2c
/* 801BECDC 001BBC1C  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801BECE0 001BBC20  41 82 00 80 */	beq .L_801BED60
/* 801BECE4 001BBC24  3C 60 80 4B */	lis r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@ha
/* 801BECE8 001BBC28  34 1F 00 20 */	addic. r0, r31, 0x20
/* 801BECEC 001BBC2C  38 63 5F 88 */	addi r3, r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@l
/* 801BECF0 001BBC30  90 7F 00 00 */	stw r3, 0(r31)
/* 801BECF4 001BBC34  38 03 00 2C */	addi r0, r3, 0x2c
/* 801BECF8 001BBC38  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801BECFC 001BBC3C  41 82 00 1C */	beq .L_801BED18
/* 801BED00 001BBC40  3C 80 80 4B */	lis r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
/* 801BED04 001BBC44  38 7F 00 20 */	addi r3, r31, 0x20
/* 801BED08 001BBC48  38 04 5F 78 */	addi r0, r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
/* 801BED0C 001BBC4C  38 80 00 00 */	li r4, 0
/* 801BED10 001BBC50  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801BED14 001BBC54  48 25 28 75 */	bl __dt__5CNodeFv
.L_801BED18:
/* 801BED18 001BBC58  28 1F 00 00 */	cmplwi r31, 0
/* 801BED1C 001BBC5C  41 82 00 44 */	beq .L_801BED60
/* 801BED20 001BBC60  3C 60 80 4B */	lis r3, "__vt__26ObjectMgr<Q24Game7MapUnit>"@ha
/* 801BED24 001BBC64  38 63 60 08 */	addi r3, r3, "__vt__26ObjectMgr<Q24Game7MapUnit>"@l
/* 801BED28 001BBC68  90 7F 00 00 */	stw r3, 0(r31)
/* 801BED2C 001BBC6C  38 03 00 2C */	addi r0, r3, 0x2c
/* 801BED30 001BBC70  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801BED34 001BBC74  41 82 00 2C */	beq .L_801BED60
/* 801BED38 001BBC78  3C 60 80 4B */	lis r3, "__vt__26Container<Q24Game7MapUnit>"@ha
/* 801BED3C 001BBC7C  38 03 60 84 */	addi r0, r3, "__vt__26Container<Q24Game7MapUnit>"@l
/* 801BED40 001BBC80  90 1F 00 00 */	stw r0, 0(r31)
/* 801BED44 001BBC84  41 82 00 1C */	beq .L_801BED60
/* 801BED48 001BBC88  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801BED4C 001BBC8C  7F E3 FB 78 */	mr r3, r31
/* 801BED50 001BBC90  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801BED54 001BBC94  38 80 00 00 */	li r4, 0
/* 801BED58 001BBC98  90 1F 00 00 */	stw r0, 0(r31)
/* 801BED5C 001BBC9C  48 25 28 2D */	bl __dt__5CNodeFv
.L_801BED60:
/* 801BED60 001BBCA0  7F C0 07 35 */	extsh. r0, r30
/* 801BED64 001BBCA4  40 81 00 0C */	ble .L_801BED70
/* 801BED68 001BBCA8  7F E3 FB 78 */	mr r3, r31
/* 801BED6C 001BBCAC  4B E6 53 49 */	bl __dl__FPv
.L_801BED70:
/* 801BED70 001BBCB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BED74 001BBCB4  7F E3 FB 78 */	mr r3, r31
/* 801BED78 001BBCB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BED7C 001BBCBC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801BED80 001BBCC0  7C 08 03 A6 */	mtlr r0
/* 801BED84 001BBCC4  38 21 00 10 */	addi r1, r1, 0x10
/* 801BED88 001BBCC8  4E 80 00 20 */	blr 
.endfn __dt__Q24Game10MapUnitMgrFv

.fn constructor__Q24Game7MapUnitFv, weak
/* 801BED8C 001BBCCC  4E 80 00 20 */	blr 
.endfn constructor__Q24Game7MapUnitFv

.fn doAnimation__Q24Game7MapUnitFv, weak
/* 801BED90 001BBCD0  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game7MapUnitFv

.fn doEntry__Q24Game7MapUnitFv, weak
/* 801BED94 001BBCD4  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game7MapUnitFv

.fn doSetView__Q24Game7MapUnitFi, weak
/* 801BED98 001BBCD8  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game7MapUnitFi

.fn doViewCalc__Q24Game7MapUnitFv, weak
/* 801BED9C 001BBCDC  4E 80 00 20 */	blr 
.endfn doViewCalc__Q24Game7MapUnitFv

.fn doSimulation__Q24Game7MapUnitFf, weak
/* 801BEDA0 001BBCE0  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game7MapUnitFf

.fn doDirectDraw__Q24Game7MapUnitFR8Graphics, weak
/* 801BEDA4 001BBCE4  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game7MapUnitFR8Graphics

.fn __dt__Q24Game8DoorLinkFv, weak
/* 801BEDA8 001BBCE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BEDAC 001BBCEC  7C 08 02 A6 */	mflr r0
/* 801BEDB0 001BBCF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BEDB4 001BBCF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BEDB8 001BBCF8  7C 9F 23 78 */	mr r31, r4
/* 801BEDBC 001BBCFC  93 C1 00 08 */	stw r30, 8(r1)
/* 801BEDC0 001BBD00  7C 7E 1B 79 */	or. r30, r3, r3
/* 801BEDC4 001BBD04  41 82 00 28 */	beq .L_801BEDEC
/* 801BEDC8 001BBD08  3C A0 80 4B */	lis r5, __vt__Q24Game8DoorLink@ha
/* 801BEDCC 001BBD0C  38 80 00 00 */	li r4, 0
/* 801BEDD0 001BBD10  38 05 60 D4 */	addi r0, r5, __vt__Q24Game8DoorLink@l
/* 801BEDD4 001BBD14  90 1E 00 00 */	stw r0, 0(r30)
/* 801BEDD8 001BBD18  48 25 27 B1 */	bl __dt__5CNodeFv
/* 801BEDDC 001BBD1C  7F E0 07 35 */	extsh. r0, r31
/* 801BEDE0 001BBD20  40 81 00 0C */	ble .L_801BEDEC
/* 801BEDE4 001BBD24  7F C3 F3 78 */	mr r3, r30
/* 801BEDE8 001BBD28  4B E6 52 CD */	bl __dl__FPv
.L_801BEDEC:
/* 801BEDEC 001BBD2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BEDF0 001BBD30  7F C3 F3 78 */	mr r3, r30
/* 801BEDF4 001BBD34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BEDF8 001BBD38  83 C1 00 08 */	lwz r30, 8(r1)
/* 801BEDFC 001BBD3C  7C 08 03 A6 */	mtlr r0
/* 801BEE00 001BBD40  38 21 00 10 */	addi r1, r1, 0x10
/* 801BEE04 001BBD44  4E 80 00 20 */	blr 
.endfn __dt__Q24Game8DoorLinkFv

.fn "get__30NodeObjectMgr<Q24Game7MapUnit>FPv", weak
/* 801BEE08 001BBD48  80 64 00 18 */	lwz r3, 0x18(r4)
/* 801BEE0C 001BBD4C  4E 80 00 20 */	blr 
.endfn "get__30NodeObjectMgr<Q24Game7MapUnit>FPv"

.fn "getNext__30NodeObjectMgr<Q24Game7MapUnit>FPv", weak
/* 801BEE10 001BBD50  80 64 00 04 */	lwz r3, 4(r4)
/* 801BEE14 001BBD54  4E 80 00 20 */	blr 
.endfn "getNext__30NodeObjectMgr<Q24Game7MapUnit>FPv"

.fn "getStart__30NodeObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801BEE18 001BBD58  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801BEE1C 001BBD5C  4E 80 00 20 */	blr 
.endfn "getStart__30NodeObjectMgr<Q24Game7MapUnit>Fv"

.fn "getEnd__30NodeObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801BEE20 001BBD60  38 60 00 00 */	li r3, 0
/* 801BEE24 001BBD64  4E 80 00 20 */	blr 
.endfn "getEnd__30NodeObjectMgr<Q24Game7MapUnit>Fv"

.fn "resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801BEE28 001BBD68  38 00 00 00 */	li r0, 0
/* 801BEE2C 001BBD6C  90 03 00 30 */	stw r0, 0x30(r3)
/* 801BEE30 001BBD70  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801BEE34 001BBD74  90 03 00 28 */	stw r0, 0x28(r3)
/* 801BEE38 001BBD78  90 03 00 24 */	stw r0, 0x24(r3)
/* 801BEE3C 001BBD7C  4E 80 00 20 */	blr 
.endfn "resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv"

.fn "birth__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BEE40 001BBD80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BEE44 001BBD84  7C 08 02 A6 */	mflr r0
/* 801BEE48 001BBD88  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BEE4C 001BBD8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801BEE50 001BBD90  7C 7F 1B 78 */	mr r31, r3
/* 801BEE54 001BBD94  48 00 04 59 */	bl "getEmptyIndex__30MonoObjectMgr<Q24Game7MapRoom>Fv"
/* 801BEE58 001BBD98  2C 03 FF FF */	cmpwi r3, -1
/* 801BEE5C 001BBD9C  41 82 00 2C */	beq .L_801BEE88
/* 801BEE60 001BBDA0  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 801BEE64 001BBDA4  38 00 00 00 */	li r0, 0
/* 801BEE68 001BBDA8  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 801BEE6C 001BBDAC  1C A3 01 A0 */	mulli r5, r3, 0x1a0
/* 801BEE70 001BBDB0  7C 04 19 AE */	stbx r0, r4, r3
/* 801BEE74 001BBDB4  7C 66 2A 14 */	add r3, r6, r5
/* 801BEE78 001BBDB8  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 801BEE7C 001BBDBC  38 04 00 01 */	addi r0, r4, 1
/* 801BEE80 001BBDC0  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801BEE84 001BBDC4  48 00 00 08 */	b .L_801BEE8C
.L_801BEE88:
/* 801BEE88 001BBDC8  38 60 00 00 */	li r3, 0
.L_801BEE8C:
/* 801BEE8C 001BBDCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BEE90 001BBDD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801BEE94 001BBDD4  7C 08 03 A6 */	mtlr r0
/* 801BEE98 001BBDD8  38 21 00 10 */	addi r1, r1, 0x10
/* 801BEE9C 001BBDDC  4E 80 00 20 */	blr 
.endfn "birth__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "getNext__30MonoObjectMgr<Q24Game7MapRoom>FPv", weak
/* 801BEEA0 001BBDE0  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 801BEEA4 001BBDE4  38 C4 00 01 */	addi r6, r4, 1
/* 801BEEA8 001BBDE8  7C 06 28 50 */	subf r0, r6, r5
/* 801BEEAC 001BBDEC  7C 09 03 A6 */	mtctr r0
/* 801BEEB0 001BBDF0  7C 06 28 00 */	cmpw r6, r5
/* 801BEEB4 001BBDF4  40 80 00 24 */	bge .L_801BEED8
.L_801BEEB8:
/* 801BEEB8 001BBDF8  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801BEEBC 001BBDFC  7C 04 30 AE */	lbzx r0, r4, r6
/* 801BEEC0 001BBE00  28 00 00 00 */	cmplwi r0, 0
/* 801BEEC4 001BBE04  40 82 00 0C */	bne .L_801BEED0
/* 801BEEC8 001BBE08  7C C3 33 78 */	mr r3, r6
/* 801BEECC 001BBE0C  4E 80 00 20 */	blr 
.L_801BEED0:
/* 801BEED0 001BBE10  38 C6 00 01 */	addi r6, r6, 1
/* 801BEED4 001BBE14  42 00 FF E4 */	bdnz .L_801BEEB8
.L_801BEED8:
/* 801BEED8 001BBE18  7C A3 2B 78 */	mr r3, r5
/* 801BEEDC 001BBE1C  4E 80 00 20 */	blr 
.endfn "getNext__30MonoObjectMgr<Q24Game7MapRoom>FPv"

.fn "getStart__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BEEE0 001BBE20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801BEEE4 001BBE24  7C 08 02 A6 */	mflr r0
/* 801BEEE8 001BBE28  38 80 FF FF */	li r4, -1
/* 801BEEEC 001BBE2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BEEF0 001BBE30  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEEF4 001BBE34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BEEF8 001BBE38  7D 89 03 A6 */	mtctr r12
/* 801BEEFC 001BBE3C  4E 80 04 21 */	bctrl 
/* 801BEF00 001BBE40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BEF04 001BBE44  7C 08 03 A6 */	mtlr r0
/* 801BEF08 001BBE48  38 21 00 10 */	addi r1, r1, 0x10
/* 801BEF0C 001BBE4C  4E 80 00 20 */	blr 
.endfn "getStart__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "getEnd__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BEF10 001BBE50  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801BEF14 001BBE54  4E 80 00 20 */	blr 
.endfn "getEnd__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "getAt__30MonoObjectMgr<Q24Game7MapRoom>Fi", weak
/* 801BEF18 001BBE58  1C 04 01 A0 */	mulli r0, r4, 0x1a0
/* 801BEF1C 001BBE5C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801BEF20 001BBE60  7C 63 02 14 */	add r3, r3, r0
/* 801BEF24 001BBE64  4E 80 00 20 */	blr 
.endfn "getAt__30MonoObjectMgr<Q24Game7MapRoom>Fi"

.fn "getTo__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BEF28 001BBE68  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801BEF2C 001BBE6C  4E 80 00 20 */	blr 
.endfn "getTo__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "doAnimation__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BEF30 001BBE70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BEF34 001BBE74  7C 08 02 A6 */	mflr r0
/* 801BEF38 001BBE78  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BEF3C 001BBE7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BEF40 001BBE80  3B E0 00 00 */	li r31, 0
/* 801BEF44 001BBE84  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801BEF48 001BBE88  3B C0 00 00 */	li r30, 0
/* 801BEF4C 001BBE8C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801BEF50 001BBE90  7C 7D 1B 78 */	mr r29, r3
/* 801BEF54 001BBE94  48 00 00 34 */	b .L_801BEF88
.L_801BEF58:
/* 801BEF58 001BBE98  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801BEF5C 001BBE9C  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801BEF60 001BBEA0  28 00 00 00 */	cmplwi r0, 0
/* 801BEF64 001BBEA4  40 82 00 1C */	bne .L_801BEF80
/* 801BEF68 001BBEA8  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801BEF6C 001BBEAC  7C 60 FA 14 */	add r3, r0, r31
/* 801BEF70 001BBEB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEF74 001BBEB4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801BEF78 001BBEB8  7D 89 03 A6 */	mtctr r12
/* 801BEF7C 001BBEBC  4E 80 04 21 */	bctrl 
.L_801BEF80:
/* 801BEF80 001BBEC0  3B FF 01 A0 */	addi r31, r31, 0x1a0
/* 801BEF84 001BBEC4  3B DE 00 01 */	addi r30, r30, 1
.L_801BEF88:
/* 801BEF88 001BBEC8  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801BEF8C 001BBECC  7C 1E 00 00 */	cmpw r30, r0
/* 801BEF90 001BBED0  41 80 FF C8 */	blt .L_801BEF58
/* 801BEF94 001BBED4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BEF98 001BBED8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BEF9C 001BBEDC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801BEFA0 001BBEE0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801BEFA4 001BBEE4  7C 08 03 A6 */	mtlr r0
/* 801BEFA8 001BBEE8  38 21 00 20 */	addi r1, r1, 0x20
/* 801BEFAC 001BBEEC  4E 80 00 20 */	blr 
.endfn "doAnimation__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "doEntry__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BEFB0 001BBEF0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BEFB4 001BBEF4  7C 08 02 A6 */	mflr r0
/* 801BEFB8 001BBEF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BEFBC 001BBEFC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BEFC0 001BBF00  3B E0 00 00 */	li r31, 0
/* 801BEFC4 001BBF04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801BEFC8 001BBF08  3B C0 00 00 */	li r30, 0
/* 801BEFCC 001BBF0C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801BEFD0 001BBF10  7C 7D 1B 78 */	mr r29, r3
/* 801BEFD4 001BBF14  48 00 00 34 */	b .L_801BF008
.L_801BEFD8:
/* 801BEFD8 001BBF18  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801BEFDC 001BBF1C  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801BEFE0 001BBF20  28 00 00 00 */	cmplwi r0, 0
/* 801BEFE4 001BBF24  40 82 00 1C */	bne .L_801BF000
/* 801BEFE8 001BBF28  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801BEFEC 001BBF2C  7C 60 FA 14 */	add r3, r0, r31
/* 801BEFF0 001BBF30  81 83 00 00 */	lwz r12, 0(r3)
/* 801BEFF4 001BBF34  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801BEFF8 001BBF38  7D 89 03 A6 */	mtctr r12
/* 801BEFFC 001BBF3C  4E 80 04 21 */	bctrl 
.L_801BF000:
/* 801BF000 001BBF40  3B FF 01 A0 */	addi r31, r31, 0x1a0
/* 801BF004 001BBF44  3B DE 00 01 */	addi r30, r30, 1
.L_801BF008:
/* 801BF008 001BBF48  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801BF00C 001BBF4C  7C 1E 00 00 */	cmpw r30, r0
/* 801BF010 001BBF50  41 80 FF C8 */	blt .L_801BEFD8
/* 801BF014 001BBF54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BF018 001BBF58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BF01C 001BBF5C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801BF020 001BBF60  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801BF024 001BBF64  7C 08 03 A6 */	mtlr r0
/* 801BF028 001BBF68  38 21 00 20 */	addi r1, r1, 0x20
/* 801BF02C 001BBF6C  4E 80 00 20 */	blr 
.endfn "doEntry__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "doSetView__30MonoObjectMgr<Q24Game7MapRoom>Fi", weak
/* 801BF030 001BBF70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BF034 001BBF74  7C 08 02 A6 */	mflr r0
/* 801BF038 001BBF78  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BF03C 001BBF7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BF040 001BBF80  3B E0 00 00 */	li r31, 0
/* 801BF044 001BBF84  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801BF048 001BBF88  3B C0 00 00 */	li r30, 0
/* 801BF04C 001BBF8C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801BF050 001BBF90  7C 9D 23 78 */	mr r29, r4
/* 801BF054 001BBF94  93 81 00 10 */	stw r28, 0x10(r1)
/* 801BF058 001BBF98  7C 7C 1B 78 */	mr r28, r3
/* 801BF05C 001BBF9C  48 00 00 38 */	b .L_801BF094
.L_801BF060:
/* 801BF060 001BBFA0  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801BF064 001BBFA4  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801BF068 001BBFA8  28 00 00 00 */	cmplwi r0, 0
/* 801BF06C 001BBFAC  40 82 00 20 */	bne .L_801BF08C
/* 801BF070 001BBFB0  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801BF074 001BBFB4  7F A4 EB 78 */	mr r4, r29
/* 801BF078 001BBFB8  7C 60 FA 14 */	add r3, r0, r31
/* 801BF07C 001BBFBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF080 001BBFC0  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 801BF084 001BBFC4  7D 89 03 A6 */	mtctr r12
/* 801BF088 001BBFC8  4E 80 04 21 */	bctrl 
.L_801BF08C:
/* 801BF08C 001BBFCC  3B FF 01 A0 */	addi r31, r31, 0x1a0
/* 801BF090 001BBFD0  3B DE 00 01 */	addi r30, r30, 1
.L_801BF094:
/* 801BF094 001BBFD4  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801BF098 001BBFD8  7C 1E 00 00 */	cmpw r30, r0
/* 801BF09C 001BBFDC  41 80 FF C4 */	blt .L_801BF060
/* 801BF0A0 001BBFE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BF0A4 001BBFE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BF0A8 001BBFE8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801BF0AC 001BBFEC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801BF0B0 001BBFF0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801BF0B4 001BBFF4  7C 08 03 A6 */	mtlr r0
/* 801BF0B8 001BBFF8  38 21 00 20 */	addi r1, r1, 0x20
/* 801BF0BC 001BBFFC  4E 80 00 20 */	blr 
.endfn "doSetView__30MonoObjectMgr<Q24Game7MapRoom>Fi"

.fn "doViewCalc__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BF0C0 001BC000  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BF0C4 001BC004  7C 08 02 A6 */	mflr r0
/* 801BF0C8 001BC008  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BF0CC 001BC00C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BF0D0 001BC010  3B E0 00 00 */	li r31, 0
/* 801BF0D4 001BC014  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801BF0D8 001BC018  3B C0 00 00 */	li r30, 0
/* 801BF0DC 001BC01C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801BF0E0 001BC020  7C 7D 1B 78 */	mr r29, r3
/* 801BF0E4 001BC024  48 00 00 34 */	b .L_801BF118
.L_801BF0E8:
/* 801BF0E8 001BC028  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801BF0EC 001BC02C  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801BF0F0 001BC030  28 00 00 00 */	cmplwi r0, 0
/* 801BF0F4 001BC034  40 82 00 1C */	bne .L_801BF110
/* 801BF0F8 001BC038  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801BF0FC 001BC03C  7C 60 FA 14 */	add r3, r0, r31
/* 801BF100 001BC040  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF104 001BC044  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801BF108 001BC048  7D 89 03 A6 */	mtctr r12
/* 801BF10C 001BC04C  4E 80 04 21 */	bctrl 
.L_801BF110:
/* 801BF110 001BC050  3B FF 01 A0 */	addi r31, r31, 0x1a0
/* 801BF114 001BC054  3B DE 00 01 */	addi r30, r30, 1
.L_801BF118:
/* 801BF118 001BC058  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801BF11C 001BC05C  7C 1E 00 00 */	cmpw r30, r0
/* 801BF120 001BC060  41 80 FF C8 */	blt .L_801BF0E8
/* 801BF124 001BC064  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BF128 001BC068  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BF12C 001BC06C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801BF130 001BC070  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801BF134 001BC074  7C 08 03 A6 */	mtlr r0
/* 801BF138 001BC078  38 21 00 20 */	addi r1, r1, 0x20
/* 801BF13C 001BC07C  4E 80 00 20 */	blr 
.endfn "doViewCalc__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "doSimulation__30MonoObjectMgr<Q24Game7MapRoom>Ff", weak
/* 801BF140 001BC080  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BF144 001BC084  7C 08 02 A6 */	mflr r0
/* 801BF148 001BC088  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BF14C 001BC08C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801BF150 001BC090  FF E0 08 90 */	fmr f31, f1
/* 801BF154 001BC094  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801BF158 001BC098  3B E0 00 00 */	li r31, 0
/* 801BF15C 001BC09C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801BF160 001BC0A0  3B C0 00 00 */	li r30, 0
/* 801BF164 001BC0A4  93 A1 00 0C */	stw r29, 0xc(r1)
/* 801BF168 001BC0A8  7C 7D 1B 78 */	mr r29, r3
/* 801BF16C 001BC0AC  48 00 00 38 */	b .L_801BF1A4
.L_801BF170:
/* 801BF170 001BC0B0  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801BF174 001BC0B4  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801BF178 001BC0B8  28 00 00 00 */	cmplwi r0, 0
/* 801BF17C 001BC0BC  40 82 00 20 */	bne .L_801BF19C
/* 801BF180 001BC0C0  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801BF184 001BC0C4  FC 20 F8 90 */	fmr f1, f31
/* 801BF188 001BC0C8  7C 60 FA 14 */	add r3, r0, r31
/* 801BF18C 001BC0CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF190 001BC0D0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801BF194 001BC0D4  7D 89 03 A6 */	mtctr r12
/* 801BF198 001BC0D8  4E 80 04 21 */	bctrl 
.L_801BF19C:
/* 801BF19C 001BC0DC  3B FF 01 A0 */	addi r31, r31, 0x1a0
/* 801BF1A0 001BC0E0  3B DE 00 01 */	addi r30, r30, 1
.L_801BF1A4:
/* 801BF1A4 001BC0E4  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801BF1A8 001BC0E8  7C 1E 00 00 */	cmpw r30, r0
/* 801BF1AC 001BC0EC  41 80 FF C4 */	blt .L_801BF170
/* 801BF1B0 001BC0F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BF1B4 001BC0F4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801BF1B8 001BC0F8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801BF1BC 001BC0FC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801BF1C0 001BC100  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 801BF1C4 001BC104  7C 08 03 A6 */	mtlr r0
/* 801BF1C8 001BC108  38 21 00 20 */	addi r1, r1, 0x20
/* 801BF1CC 001BC10C  4E 80 00 20 */	blr 
.endfn "doSimulation__30MonoObjectMgr<Q24Game7MapRoom>Ff"

.fn "doDirectDraw__30MonoObjectMgr<Q24Game7MapRoom>FR8Graphics", weak
/* 801BF1D0 001BC110  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BF1D4 001BC114  7C 08 02 A6 */	mflr r0
/* 801BF1D8 001BC118  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BF1DC 001BC11C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BF1E0 001BC120  3B E0 00 00 */	li r31, 0
/* 801BF1E4 001BC124  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801BF1E8 001BC128  3B C0 00 00 */	li r30, 0
/* 801BF1EC 001BC12C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801BF1F0 001BC130  7C 9D 23 78 */	mr r29, r4
/* 801BF1F4 001BC134  93 81 00 10 */	stw r28, 0x10(r1)
/* 801BF1F8 001BC138  7C 7C 1B 78 */	mr r28, r3
/* 801BF1FC 001BC13C  48 00 00 38 */	b .L_801BF234
.L_801BF200:
/* 801BF200 001BC140  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801BF204 001BC144  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801BF208 001BC148  28 00 00 00 */	cmplwi r0, 0
/* 801BF20C 001BC14C  40 82 00 20 */	bne .L_801BF22C
/* 801BF210 001BC150  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801BF214 001BC154  7F A4 EB 78 */	mr r4, r29
/* 801BF218 001BC158  7C 60 FA 14 */	add r3, r0, r31
/* 801BF21C 001BC15C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF220 001BC160  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801BF224 001BC164  7D 89 03 A6 */	mtctr r12
/* 801BF228 001BC168  4E 80 04 21 */	bctrl 
.L_801BF22C:
/* 801BF22C 001BC16C  3B FF 01 A0 */	addi r31, r31, 0x1a0
/* 801BF230 001BC170  3B DE 00 01 */	addi r30, r30, 1
.L_801BF234:
/* 801BF234 001BC174  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801BF238 001BC178  7C 1E 00 00 */	cmpw r30, r0
/* 801BF23C 001BC17C  41 80 FF C4 */	blt .L_801BF200
/* 801BF240 001BC180  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BF244 001BC184  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BF248 001BC188  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801BF24C 001BC18C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801BF250 001BC190  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801BF254 001BC194  7C 08 03 A6 */	mtlr r0
/* 801BF258 001BC198  38 21 00 20 */	addi r1, r1, 0x20
/* 801BF25C 001BC19C  4E 80 00 20 */	blr 
.endfn "doDirectDraw__30MonoObjectMgr<Q24Game7MapRoom>FR8Graphics"

.fn "resetMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BF260 001BC1A0  38 00 00 00 */	li r0, 0
/* 801BF264 001BC1A4  90 03 00 28 */	stw r0, 0x28(r3)
/* 801BF268 001BC1A8  90 03 00 24 */	stw r0, 0x24(r3)
/* 801BF26C 001BC1AC  90 03 00 20 */	stw r0, 0x20(r3)
/* 801BF270 001BC1B0  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801BF274 001BC1B4  4E 80 00 20 */	blr 
.endfn "resetMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "clearMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BF278 001BC1B8  38 00 00 00 */	li r0, 0
/* 801BF27C 001BC1BC  38 C0 00 00 */	li r6, 0
/* 801BF280 001BC1C0  90 03 00 20 */	stw r0, 0x20(r3)
/* 801BF284 001BC1C4  38 A0 00 01 */	li r5, 1
/* 801BF288 001BC1C8  48 00 00 10 */	b .L_801BF298
.L_801BF28C:
/* 801BF28C 001BC1CC  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801BF290 001BC1D0  7C A4 31 AE */	stbx r5, r4, r6
/* 801BF294 001BC1D4  38 C6 00 01 */	addi r6, r6, 1
.L_801BF298:
/* 801BF298 001BC1D8  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801BF29C 001BC1DC  7C 06 00 00 */	cmpw r6, r0
/* 801BF2A0 001BC1E0  41 80 FF EC */	blt .L_801BF28C
/* 801BF2A4 001BC1E4  4E 80 00 20 */	blr 
.endfn "clearMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "onAlloc__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BF2A8 001BC1E8  4E 80 00 20 */	blr 
.endfn "onAlloc__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "getEmptyIndex__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BF2AC 001BC1EC  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801BF2B0 001BC1F0  38 A0 00 00 */	li r5, 0
/* 801BF2B4 001BC1F4  7C 09 03 A6 */	mtctr r0
/* 801BF2B8 001BC1F8  2C 00 00 00 */	cmpwi r0, 0
/* 801BF2BC 001BC1FC  40 81 00 24 */	ble .L_801BF2E0
.L_801BF2C0:
/* 801BF2C0 001BC200  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801BF2C4 001BC204  7C 04 28 AE */	lbzx r0, r4, r5
/* 801BF2C8 001BC208  28 00 00 01 */	cmplwi r0, 1
/* 801BF2CC 001BC20C  40 82 00 0C */	bne .L_801BF2D8
/* 801BF2D0 001BC210  7C A3 2B 78 */	mr r3, r5
/* 801BF2D4 001BC214  4E 80 00 20 */	blr 
.L_801BF2D8:
/* 801BF2D8 001BC218  38 A5 00 01 */	addi r5, r5, 1
/* 801BF2DC 001BC21C  42 00 FF E4 */	bdnz .L_801BF2C0
.L_801BF2E0:
/* 801BF2E0 001BC220  38 60 FF FF */	li r3, -1
/* 801BF2E4 001BC224  4E 80 00 20 */	blr 
.endfn "getEmptyIndex__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "get__30MonoObjectMgr<Q24Game7MapRoom>FPv", weak
/* 801BF2E8 001BC228  1C 04 01 A0 */	mulli r0, r4, 0x1a0
/* 801BF2EC 001BC22C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801BF2F0 001BC230  7C 63 02 14 */	add r3, r3, r0
/* 801BF2F4 001BC234  4E 80 00 20 */	blr 
.endfn "get__30MonoObjectMgr<Q24Game7MapRoom>FPv"

.fn "doAnimation__26ObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BF2F8 001BC238  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BF2FC 001BC23C  7C 08 02 A6 */	mflr r0
/* 801BF300 001BC240  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BF304 001BC244  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BF308 001BC248  38 00 00 00 */	li r0, 0
/* 801BF30C 001BC24C  38 84 5D 28 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BF310 001BC250  28 00 00 00 */	cmplwi r0, 0
/* 801BF314 001BC254  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BF318 001BC258  90 81 00 08 */	stw r4, 8(r1)
/* 801BF31C 001BC25C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801BF320 001BC260  90 61 00 10 */	stw r3, 0x10(r1)
/* 801BF324 001BC264  40 82 00 1C */	bne .L_801BF340
/* 801BF328 001BC268  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF32C 001BC26C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BF330 001BC270  7D 89 03 A6 */	mtctr r12
/* 801BF334 001BC274  4E 80 04 21 */	bctrl 
/* 801BF338 001BC278  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF33C 001BC27C  48 00 01 70 */	b .L_801BF4AC
.L_801BF340:
/* 801BF340 001BC280  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF344 001BC284  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BF348 001BC288  7D 89 03 A6 */	mtctr r12
/* 801BF34C 001BC28C  4E 80 04 21 */	bctrl 
/* 801BF350 001BC290  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF354 001BC294  48 00 00 58 */	b .L_801BF3AC
.L_801BF358:
/* 801BF358 001BC298  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF35C 001BC29C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF360 001BC2A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF364 001BC2A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF368 001BC2A8  7D 89 03 A6 */	mtctr r12
/* 801BF36C 001BC2AC  4E 80 04 21 */	bctrl 
/* 801BF370 001BC2B0  7C 64 1B 78 */	mr r4, r3
/* 801BF374 001BC2B4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BF378 001BC2B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF37C 001BC2BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BF380 001BC2C0  7D 89 03 A6 */	mtctr r12
/* 801BF384 001BC2C4  4E 80 04 21 */	bctrl 
/* 801BF388 001BC2C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF38C 001BC2CC  40 82 01 20 */	bne .L_801BF4AC
/* 801BF390 001BC2D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF394 001BC2D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF398 001BC2D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF39C 001BC2DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF3A0 001BC2E0  7D 89 03 A6 */	mtctr r12
/* 801BF3A4 001BC2E4  4E 80 04 21 */	bctrl 
/* 801BF3A8 001BC2E8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BF3AC:
/* 801BF3AC 001BC2EC  81 81 00 08 */	lwz r12, 8(r1)
/* 801BF3B0 001BC2F0  38 61 00 08 */	addi r3, r1, 8
/* 801BF3B4 001BC2F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BF3B8 001BC2F8  7D 89 03 A6 */	mtctr r12
/* 801BF3BC 001BC2FC  4E 80 04 21 */	bctrl 
/* 801BF3C0 001BC300  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF3C4 001BC304  41 82 FF 94 */	beq .L_801BF358
/* 801BF3C8 001BC308  48 00 00 E4 */	b .L_801BF4AC
.L_801BF3CC:
/* 801BF3CC 001BC30C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF3D0 001BC310  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF3D4 001BC314  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF3D8 001BC318  7D 89 03 A6 */	mtctr r12
/* 801BF3DC 001BC31C  4E 80 04 21 */	bctrl 
/* 801BF3E0 001BC320  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF3E4 001BC324  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801BF3E8 001BC328  7D 89 03 A6 */	mtctr r12
/* 801BF3EC 001BC32C  4E 80 04 21 */	bctrl 
/* 801BF3F0 001BC330  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BF3F4 001BC334  28 00 00 00 */	cmplwi r0, 0
/* 801BF3F8 001BC338  40 82 00 24 */	bne .L_801BF41C
/* 801BF3FC 001BC33C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF400 001BC340  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF404 001BC344  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF408 001BC348  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF40C 001BC34C  7D 89 03 A6 */	mtctr r12
/* 801BF410 001BC350  4E 80 04 21 */	bctrl 
/* 801BF414 001BC354  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF418 001BC358  48 00 00 94 */	b .L_801BF4AC
.L_801BF41C:
/* 801BF41C 001BC35C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF420 001BC360  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF424 001BC364  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF428 001BC368  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF42C 001BC36C  7D 89 03 A6 */	mtctr r12
/* 801BF430 001BC370  4E 80 04 21 */	bctrl 
/* 801BF434 001BC374  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF438 001BC378  48 00 00 58 */	b .L_801BF490
.L_801BF43C:
/* 801BF43C 001BC37C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF440 001BC380  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF444 001BC384  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF448 001BC388  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF44C 001BC38C  7D 89 03 A6 */	mtctr r12
/* 801BF450 001BC390  4E 80 04 21 */	bctrl 
/* 801BF454 001BC394  7C 64 1B 78 */	mr r4, r3
/* 801BF458 001BC398  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BF45C 001BC39C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF460 001BC3A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BF464 001BC3A4  7D 89 03 A6 */	mtctr r12
/* 801BF468 001BC3A8  4E 80 04 21 */	bctrl 
/* 801BF46C 001BC3AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF470 001BC3B0  40 82 00 3C */	bne .L_801BF4AC
/* 801BF474 001BC3B4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF478 001BC3B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF47C 001BC3BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF480 001BC3C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF484 001BC3C4  7D 89 03 A6 */	mtctr r12
/* 801BF488 001BC3C8  4E 80 04 21 */	bctrl 
/* 801BF48C 001BC3CC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BF490:
/* 801BF490 001BC3D0  81 81 00 08 */	lwz r12, 8(r1)
/* 801BF494 001BC3D4  38 61 00 08 */	addi r3, r1, 8
/* 801BF498 001BC3D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BF49C 001BC3DC  7D 89 03 A6 */	mtctr r12
/* 801BF4A0 001BC3E0  4E 80 04 21 */	bctrl 
/* 801BF4A4 001BC3E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF4A8 001BC3E8  41 82 FF 94 */	beq .L_801BF43C
.L_801BF4AC:
/* 801BF4AC 001BC3EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF4B0 001BC3F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF4B4 001BC3F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BF4B8 001BC3F8  7D 89 03 A6 */	mtctr r12
/* 801BF4BC 001BC3FC  4E 80 04 21 */	bctrl 
/* 801BF4C0 001BC400  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF4C4 001BC404  7C 04 18 40 */	cmplw r4, r3
/* 801BF4C8 001BC408  40 82 FF 04 */	bne .L_801BF3CC
/* 801BF4CC 001BC40C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BF4D0 001BC410  7C 08 03 A6 */	mtlr r0
/* 801BF4D4 001BC414  38 21 00 20 */	addi r1, r1, 0x20
/* 801BF4D8 001BC418  4E 80 00 20 */	blr 
.endfn "doAnimation__26ObjectMgr<Q24Game7MapRoom>Fv"

.fn "doEntry__26ObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BF4DC 001BC41C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BF4E0 001BC420  7C 08 02 A6 */	mflr r0
/* 801BF4E4 001BC424  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BF4E8 001BC428  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BF4EC 001BC42C  38 00 00 00 */	li r0, 0
/* 801BF4F0 001BC430  38 84 5D 28 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BF4F4 001BC434  28 00 00 00 */	cmplwi r0, 0
/* 801BF4F8 001BC438  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BF4FC 001BC43C  90 81 00 08 */	stw r4, 8(r1)
/* 801BF500 001BC440  90 01 00 0C */	stw r0, 0xc(r1)
/* 801BF504 001BC444  90 61 00 10 */	stw r3, 0x10(r1)
/* 801BF508 001BC448  40 82 00 1C */	bne .L_801BF524
/* 801BF50C 001BC44C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF510 001BC450  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BF514 001BC454  7D 89 03 A6 */	mtctr r12
/* 801BF518 001BC458  4E 80 04 21 */	bctrl 
/* 801BF51C 001BC45C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF520 001BC460  48 00 01 70 */	b .L_801BF690
.L_801BF524:
/* 801BF524 001BC464  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF528 001BC468  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BF52C 001BC46C  7D 89 03 A6 */	mtctr r12
/* 801BF530 001BC470  4E 80 04 21 */	bctrl 
/* 801BF534 001BC474  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF538 001BC478  48 00 00 58 */	b .L_801BF590
.L_801BF53C:
/* 801BF53C 001BC47C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF540 001BC480  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF544 001BC484  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF548 001BC488  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF54C 001BC48C  7D 89 03 A6 */	mtctr r12
/* 801BF550 001BC490  4E 80 04 21 */	bctrl 
/* 801BF554 001BC494  7C 64 1B 78 */	mr r4, r3
/* 801BF558 001BC498  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BF55C 001BC49C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF560 001BC4A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BF564 001BC4A4  7D 89 03 A6 */	mtctr r12
/* 801BF568 001BC4A8  4E 80 04 21 */	bctrl 
/* 801BF56C 001BC4AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF570 001BC4B0  40 82 01 20 */	bne .L_801BF690
/* 801BF574 001BC4B4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF578 001BC4B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF57C 001BC4BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF580 001BC4C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF584 001BC4C4  7D 89 03 A6 */	mtctr r12
/* 801BF588 001BC4C8  4E 80 04 21 */	bctrl 
/* 801BF58C 001BC4CC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BF590:
/* 801BF590 001BC4D0  81 81 00 08 */	lwz r12, 8(r1)
/* 801BF594 001BC4D4  38 61 00 08 */	addi r3, r1, 8
/* 801BF598 001BC4D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BF59C 001BC4DC  7D 89 03 A6 */	mtctr r12
/* 801BF5A0 001BC4E0  4E 80 04 21 */	bctrl 
/* 801BF5A4 001BC4E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF5A8 001BC4E8  41 82 FF 94 */	beq .L_801BF53C
/* 801BF5AC 001BC4EC  48 00 00 E4 */	b .L_801BF690
.L_801BF5B0:
/* 801BF5B0 001BC4F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF5B4 001BC4F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF5B8 001BC4F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF5BC 001BC4FC  7D 89 03 A6 */	mtctr r12
/* 801BF5C0 001BC500  4E 80 04 21 */	bctrl 
/* 801BF5C4 001BC504  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF5C8 001BC508  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801BF5CC 001BC50C  7D 89 03 A6 */	mtctr r12
/* 801BF5D0 001BC510  4E 80 04 21 */	bctrl 
/* 801BF5D4 001BC514  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BF5D8 001BC518  28 00 00 00 */	cmplwi r0, 0
/* 801BF5DC 001BC51C  40 82 00 24 */	bne .L_801BF600
/* 801BF5E0 001BC520  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF5E4 001BC524  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF5E8 001BC528  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF5EC 001BC52C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF5F0 001BC530  7D 89 03 A6 */	mtctr r12
/* 801BF5F4 001BC534  4E 80 04 21 */	bctrl 
/* 801BF5F8 001BC538  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF5FC 001BC53C  48 00 00 94 */	b .L_801BF690
.L_801BF600:
/* 801BF600 001BC540  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF604 001BC544  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF608 001BC548  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF60C 001BC54C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF610 001BC550  7D 89 03 A6 */	mtctr r12
/* 801BF614 001BC554  4E 80 04 21 */	bctrl 
/* 801BF618 001BC558  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF61C 001BC55C  48 00 00 58 */	b .L_801BF674
.L_801BF620:
/* 801BF620 001BC560  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF624 001BC564  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF628 001BC568  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF62C 001BC56C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF630 001BC570  7D 89 03 A6 */	mtctr r12
/* 801BF634 001BC574  4E 80 04 21 */	bctrl 
/* 801BF638 001BC578  7C 64 1B 78 */	mr r4, r3
/* 801BF63C 001BC57C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BF640 001BC580  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF644 001BC584  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BF648 001BC588  7D 89 03 A6 */	mtctr r12
/* 801BF64C 001BC58C  4E 80 04 21 */	bctrl 
/* 801BF650 001BC590  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF654 001BC594  40 82 00 3C */	bne .L_801BF690
/* 801BF658 001BC598  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF65C 001BC59C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF660 001BC5A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF664 001BC5A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF668 001BC5A8  7D 89 03 A6 */	mtctr r12
/* 801BF66C 001BC5AC  4E 80 04 21 */	bctrl 
/* 801BF670 001BC5B0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BF674:
/* 801BF674 001BC5B4  81 81 00 08 */	lwz r12, 8(r1)
/* 801BF678 001BC5B8  38 61 00 08 */	addi r3, r1, 8
/* 801BF67C 001BC5BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BF680 001BC5C0  7D 89 03 A6 */	mtctr r12
/* 801BF684 001BC5C4  4E 80 04 21 */	bctrl 
/* 801BF688 001BC5C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF68C 001BC5CC  41 82 FF 94 */	beq .L_801BF620
.L_801BF690:
/* 801BF690 001BC5D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF694 001BC5D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF698 001BC5D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BF69C 001BC5DC  7D 89 03 A6 */	mtctr r12
/* 801BF6A0 001BC5E0  4E 80 04 21 */	bctrl 
/* 801BF6A4 001BC5E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF6A8 001BC5E8  7C 04 18 40 */	cmplw r4, r3
/* 801BF6AC 001BC5EC  40 82 FF 04 */	bne .L_801BF5B0
/* 801BF6B0 001BC5F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BF6B4 001BC5F4  7C 08 03 A6 */	mtlr r0
/* 801BF6B8 001BC5F8  38 21 00 20 */	addi r1, r1, 0x20
/* 801BF6BC 001BC5FC  4E 80 00 20 */	blr 
.endfn "doEntry__26ObjectMgr<Q24Game7MapRoom>Fv"

.fn "doSetView__26ObjectMgr<Q24Game7MapRoom>Fi", weak
/* 801BF6C0 001BC600  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BF6C4 001BC604  7C 08 02 A6 */	mflr r0
/* 801BF6C8 001BC608  3C A0 80 4B */	lis r5, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BF6CC 001BC60C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BF6D0 001BC610  38 00 00 00 */	li r0, 0
/* 801BF6D4 001BC614  38 A5 5D 28 */	addi r5, r5, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BF6D8 001BC618  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BF6DC 001BC61C  28 00 00 00 */	cmplwi r0, 0
/* 801BF6E0 001BC620  7C 9F 23 78 */	mr r31, r4
/* 801BF6E4 001BC624  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BF6E8 001BC628  90 A1 00 08 */	stw r5, 8(r1)
/* 801BF6EC 001BC62C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801BF6F0 001BC630  90 61 00 10 */	stw r3, 0x10(r1)
/* 801BF6F4 001BC634  40 82 00 1C */	bne .L_801BF710
/* 801BF6F8 001BC638  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF6FC 001BC63C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BF700 001BC640  7D 89 03 A6 */	mtctr r12
/* 801BF704 001BC644  4E 80 04 21 */	bctrl 
/* 801BF708 001BC648  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF70C 001BC64C  48 00 01 74 */	b .L_801BF880
.L_801BF710:
/* 801BF710 001BC650  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF714 001BC654  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BF718 001BC658  7D 89 03 A6 */	mtctr r12
/* 801BF71C 001BC65C  4E 80 04 21 */	bctrl 
/* 801BF720 001BC660  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF724 001BC664  48 00 00 58 */	b .L_801BF77C
.L_801BF728:
/* 801BF728 001BC668  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF72C 001BC66C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF730 001BC670  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF734 001BC674  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF738 001BC678  7D 89 03 A6 */	mtctr r12
/* 801BF73C 001BC67C  4E 80 04 21 */	bctrl 
/* 801BF740 001BC680  7C 64 1B 78 */	mr r4, r3
/* 801BF744 001BC684  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BF748 001BC688  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF74C 001BC68C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BF750 001BC690  7D 89 03 A6 */	mtctr r12
/* 801BF754 001BC694  4E 80 04 21 */	bctrl 
/* 801BF758 001BC698  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF75C 001BC69C  40 82 01 24 */	bne .L_801BF880
/* 801BF760 001BC6A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF764 001BC6A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF768 001BC6A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF76C 001BC6AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF770 001BC6B0  7D 89 03 A6 */	mtctr r12
/* 801BF774 001BC6B4  4E 80 04 21 */	bctrl 
/* 801BF778 001BC6B8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BF77C:
/* 801BF77C 001BC6BC  81 81 00 08 */	lwz r12, 8(r1)
/* 801BF780 001BC6C0  38 61 00 08 */	addi r3, r1, 8
/* 801BF784 001BC6C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BF788 001BC6C8  7D 89 03 A6 */	mtctr r12
/* 801BF78C 001BC6CC  4E 80 04 21 */	bctrl 
/* 801BF790 001BC6D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF794 001BC6D4  41 82 FF 94 */	beq .L_801BF728
/* 801BF798 001BC6D8  48 00 00 E8 */	b .L_801BF880
.L_801BF79C:
/* 801BF79C 001BC6DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF7A0 001BC6E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF7A4 001BC6E4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF7A8 001BC6E8  7D 89 03 A6 */	mtctr r12
/* 801BF7AC 001BC6EC  4E 80 04 21 */	bctrl 
/* 801BF7B0 001BC6F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF7B4 001BC6F4  7F E4 FB 78 */	mr r4, r31
/* 801BF7B8 001BC6F8  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 801BF7BC 001BC6FC  7D 89 03 A6 */	mtctr r12
/* 801BF7C0 001BC700  4E 80 04 21 */	bctrl 
/* 801BF7C4 001BC704  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BF7C8 001BC708  28 00 00 00 */	cmplwi r0, 0
/* 801BF7CC 001BC70C  40 82 00 24 */	bne .L_801BF7F0
/* 801BF7D0 001BC710  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF7D4 001BC714  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF7D8 001BC718  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF7DC 001BC71C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF7E0 001BC720  7D 89 03 A6 */	mtctr r12
/* 801BF7E4 001BC724  4E 80 04 21 */	bctrl 
/* 801BF7E8 001BC728  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF7EC 001BC72C  48 00 00 94 */	b .L_801BF880
.L_801BF7F0:
/* 801BF7F0 001BC730  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF7F4 001BC734  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF7F8 001BC738  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF7FC 001BC73C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF800 001BC740  7D 89 03 A6 */	mtctr r12
/* 801BF804 001BC744  4E 80 04 21 */	bctrl 
/* 801BF808 001BC748  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF80C 001BC74C  48 00 00 58 */	b .L_801BF864
.L_801BF810:
/* 801BF810 001BC750  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF814 001BC754  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF818 001BC758  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF81C 001BC75C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF820 001BC760  7D 89 03 A6 */	mtctr r12
/* 801BF824 001BC764  4E 80 04 21 */	bctrl 
/* 801BF828 001BC768  7C 64 1B 78 */	mr r4, r3
/* 801BF82C 001BC76C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BF830 001BC770  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF834 001BC774  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BF838 001BC778  7D 89 03 A6 */	mtctr r12
/* 801BF83C 001BC77C  4E 80 04 21 */	bctrl 
/* 801BF840 001BC780  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF844 001BC784  40 82 00 3C */	bne .L_801BF880
/* 801BF848 001BC788  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF84C 001BC78C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF850 001BC790  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF854 001BC794  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF858 001BC798  7D 89 03 A6 */	mtctr r12
/* 801BF85C 001BC79C  4E 80 04 21 */	bctrl 
/* 801BF860 001BC7A0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BF864:
/* 801BF864 001BC7A4  81 81 00 08 */	lwz r12, 8(r1)
/* 801BF868 001BC7A8  38 61 00 08 */	addi r3, r1, 8
/* 801BF86C 001BC7AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BF870 001BC7B0  7D 89 03 A6 */	mtctr r12
/* 801BF874 001BC7B4  4E 80 04 21 */	bctrl 
/* 801BF878 001BC7B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF87C 001BC7BC  41 82 FF 94 */	beq .L_801BF810
.L_801BF880:
/* 801BF880 001BC7C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF884 001BC7C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF888 001BC7C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BF88C 001BC7CC  7D 89 03 A6 */	mtctr r12
/* 801BF890 001BC7D0  4E 80 04 21 */	bctrl 
/* 801BF894 001BC7D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF898 001BC7D8  7C 04 18 40 */	cmplw r4, r3
/* 801BF89C 001BC7DC  40 82 FF 00 */	bne .L_801BF79C
/* 801BF8A0 001BC7E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BF8A4 001BC7E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BF8A8 001BC7E8  7C 08 03 A6 */	mtlr r0
/* 801BF8AC 001BC7EC  38 21 00 20 */	addi r1, r1, 0x20
/* 801BF8B0 001BC7F0  4E 80 00 20 */	blr 
.endfn "doSetView__26ObjectMgr<Q24Game7MapRoom>Fi"

.fn "doViewCalc__26ObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801BF8B4 001BC7F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BF8B8 001BC7F8  7C 08 02 A6 */	mflr r0
/* 801BF8BC 001BC7FC  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BF8C0 001BC800  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BF8C4 001BC804  38 00 00 00 */	li r0, 0
/* 801BF8C8 001BC808  38 84 5D 28 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BF8CC 001BC80C  28 00 00 00 */	cmplwi r0, 0
/* 801BF8D0 001BC810  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BF8D4 001BC814  90 81 00 08 */	stw r4, 8(r1)
/* 801BF8D8 001BC818  90 01 00 0C */	stw r0, 0xc(r1)
/* 801BF8DC 001BC81C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801BF8E0 001BC820  40 82 00 1C */	bne .L_801BF8FC
/* 801BF8E4 001BC824  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF8E8 001BC828  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BF8EC 001BC82C  7D 89 03 A6 */	mtctr r12
/* 801BF8F0 001BC830  4E 80 04 21 */	bctrl 
/* 801BF8F4 001BC834  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF8F8 001BC838  48 00 01 70 */	b .L_801BFA68
.L_801BF8FC:
/* 801BF8FC 001BC83C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF900 001BC840  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BF904 001BC844  7D 89 03 A6 */	mtctr r12
/* 801BF908 001BC848  4E 80 04 21 */	bctrl 
/* 801BF90C 001BC84C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF910 001BC850  48 00 00 58 */	b .L_801BF968
.L_801BF914:
/* 801BF914 001BC854  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF918 001BC858  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF91C 001BC85C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF920 001BC860  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF924 001BC864  7D 89 03 A6 */	mtctr r12
/* 801BF928 001BC868  4E 80 04 21 */	bctrl 
/* 801BF92C 001BC86C  7C 64 1B 78 */	mr r4, r3
/* 801BF930 001BC870  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BF934 001BC874  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF938 001BC878  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BF93C 001BC87C  7D 89 03 A6 */	mtctr r12
/* 801BF940 001BC880  4E 80 04 21 */	bctrl 
/* 801BF944 001BC884  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF948 001BC888  40 82 01 20 */	bne .L_801BFA68
/* 801BF94C 001BC88C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF950 001BC890  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF954 001BC894  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF958 001BC898  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF95C 001BC89C  7D 89 03 A6 */	mtctr r12
/* 801BF960 001BC8A0  4E 80 04 21 */	bctrl 
/* 801BF964 001BC8A4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BF968:
/* 801BF968 001BC8A8  81 81 00 08 */	lwz r12, 8(r1)
/* 801BF96C 001BC8AC  38 61 00 08 */	addi r3, r1, 8
/* 801BF970 001BC8B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BF974 001BC8B4  7D 89 03 A6 */	mtctr r12
/* 801BF978 001BC8B8  4E 80 04 21 */	bctrl 
/* 801BF97C 001BC8BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BF980 001BC8C0  41 82 FF 94 */	beq .L_801BF914
/* 801BF984 001BC8C4  48 00 00 E4 */	b .L_801BFA68
.L_801BF988:
/* 801BF988 001BC8C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF98C 001BC8CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF990 001BC8D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BF994 001BC8D4  7D 89 03 A6 */	mtctr r12
/* 801BF998 001BC8D8  4E 80 04 21 */	bctrl 
/* 801BF99C 001BC8DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF9A0 001BC8E0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801BF9A4 001BC8E4  7D 89 03 A6 */	mtctr r12
/* 801BF9A8 001BC8E8  4E 80 04 21 */	bctrl 
/* 801BF9AC 001BC8EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BF9B0 001BC8F0  28 00 00 00 */	cmplwi r0, 0
/* 801BF9B4 001BC8F4  40 82 00 24 */	bne .L_801BF9D8
/* 801BF9B8 001BC8F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF9BC 001BC8FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF9C0 001BC900  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF9C4 001BC904  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF9C8 001BC908  7D 89 03 A6 */	mtctr r12
/* 801BF9CC 001BC90C  4E 80 04 21 */	bctrl 
/* 801BF9D0 001BC910  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF9D4 001BC914  48 00 00 94 */	b .L_801BFA68
.L_801BF9D8:
/* 801BF9D8 001BC918  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF9DC 001BC91C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BF9E0 001BC920  81 83 00 00 */	lwz r12, 0(r3)
/* 801BF9E4 001BC924  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BF9E8 001BC928  7D 89 03 A6 */	mtctr r12
/* 801BF9EC 001BC92C  4E 80 04 21 */	bctrl 
/* 801BF9F0 001BC930  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BF9F4 001BC934  48 00 00 58 */	b .L_801BFA4C
.L_801BF9F8:
/* 801BF9F8 001BC938  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BF9FC 001BC93C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFA00 001BC940  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFA04 001BC944  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BFA08 001BC948  7D 89 03 A6 */	mtctr r12
/* 801BFA0C 001BC94C  4E 80 04 21 */	bctrl 
/* 801BFA10 001BC950  7C 64 1B 78 */	mr r4, r3
/* 801BFA14 001BC954  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BFA18 001BC958  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFA1C 001BC95C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BFA20 001BC960  7D 89 03 A6 */	mtctr r12
/* 801BFA24 001BC964  4E 80 04 21 */	bctrl 
/* 801BFA28 001BC968  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFA2C 001BC96C  40 82 00 3C */	bne .L_801BFA68
/* 801BFA30 001BC970  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFA34 001BC974  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFA38 001BC978  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFA3C 001BC97C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFA40 001BC980  7D 89 03 A6 */	mtctr r12
/* 801BFA44 001BC984  4E 80 04 21 */	bctrl 
/* 801BFA48 001BC988  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BFA4C:
/* 801BFA4C 001BC98C  81 81 00 08 */	lwz r12, 8(r1)
/* 801BFA50 001BC990  38 61 00 08 */	addi r3, r1, 8
/* 801BFA54 001BC994  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BFA58 001BC998  7D 89 03 A6 */	mtctr r12
/* 801BFA5C 001BC99C  4E 80 04 21 */	bctrl 
/* 801BFA60 001BC9A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFA64 001BC9A4  41 82 FF 94 */	beq .L_801BF9F8
.L_801BFA68:
/* 801BFA68 001BC9A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFA6C 001BC9AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFA70 001BC9B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BFA74 001BC9B4  7D 89 03 A6 */	mtctr r12
/* 801BFA78 001BC9B8  4E 80 04 21 */	bctrl 
/* 801BFA7C 001BC9BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFA80 001BC9C0  7C 04 18 40 */	cmplw r4, r3
/* 801BFA84 001BC9C4  40 82 FF 04 */	bne .L_801BF988
/* 801BFA88 001BC9C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BFA8C 001BC9CC  7C 08 03 A6 */	mtlr r0
/* 801BFA90 001BC9D0  38 21 00 20 */	addi r1, r1, 0x20
/* 801BFA94 001BC9D4  4E 80 00 20 */	blr 
.endfn "doViewCalc__26ObjectMgr<Q24Game7MapRoom>Fv"

.fn "doSimulation__26ObjectMgr<Q24Game7MapRoom>Ff", weak
/* 801BFA98 001BC9D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BFA9C 001BC9DC  7C 08 02 A6 */	mflr r0
/* 801BFAA0 001BC9E0  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BFAA4 001BC9E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BFAA8 001BC9E8  38 00 00 00 */	li r0, 0
/* 801BFAAC 001BC9EC  38 84 5D 28 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BFAB0 001BC9F0  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801BFAB4 001BC9F4  FF E0 08 90 */	fmr f31, f1
/* 801BFAB8 001BC9F8  28 00 00 00 */	cmplwi r0, 0
/* 801BFABC 001BC9FC  90 81 00 08 */	stw r4, 8(r1)
/* 801BFAC0 001BCA00  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BFAC4 001BCA04  90 01 00 0C */	stw r0, 0xc(r1)
/* 801BFAC8 001BCA08  90 61 00 10 */	stw r3, 0x10(r1)
/* 801BFACC 001BCA0C  40 82 00 1C */	bne .L_801BFAE8
/* 801BFAD0 001BCA10  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFAD4 001BCA14  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BFAD8 001BCA18  7D 89 03 A6 */	mtctr r12
/* 801BFADC 001BCA1C  4E 80 04 21 */	bctrl 
/* 801BFAE0 001BCA20  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFAE4 001BCA24  48 00 01 74 */	b .L_801BFC58
.L_801BFAE8:
/* 801BFAE8 001BCA28  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFAEC 001BCA2C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BFAF0 001BCA30  7D 89 03 A6 */	mtctr r12
/* 801BFAF4 001BCA34  4E 80 04 21 */	bctrl 
/* 801BFAF8 001BCA38  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFAFC 001BCA3C  48 00 00 58 */	b .L_801BFB54
.L_801BFB00:
/* 801BFB00 001BCA40  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFB04 001BCA44  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFB08 001BCA48  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFB0C 001BCA4C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BFB10 001BCA50  7D 89 03 A6 */	mtctr r12
/* 801BFB14 001BCA54  4E 80 04 21 */	bctrl 
/* 801BFB18 001BCA58  7C 64 1B 78 */	mr r4, r3
/* 801BFB1C 001BCA5C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BFB20 001BCA60  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFB24 001BCA64  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BFB28 001BCA68  7D 89 03 A6 */	mtctr r12
/* 801BFB2C 001BCA6C  4E 80 04 21 */	bctrl 
/* 801BFB30 001BCA70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFB34 001BCA74  40 82 01 24 */	bne .L_801BFC58
/* 801BFB38 001BCA78  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFB3C 001BCA7C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFB40 001BCA80  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFB44 001BCA84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFB48 001BCA88  7D 89 03 A6 */	mtctr r12
/* 801BFB4C 001BCA8C  4E 80 04 21 */	bctrl 
/* 801BFB50 001BCA90  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BFB54:
/* 801BFB54 001BCA94  81 81 00 08 */	lwz r12, 8(r1)
/* 801BFB58 001BCA98  38 61 00 08 */	addi r3, r1, 8
/* 801BFB5C 001BCA9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BFB60 001BCAA0  7D 89 03 A6 */	mtctr r12
/* 801BFB64 001BCAA4  4E 80 04 21 */	bctrl 
/* 801BFB68 001BCAA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFB6C 001BCAAC  41 82 FF 94 */	beq .L_801BFB00
/* 801BFB70 001BCAB0  48 00 00 E8 */	b .L_801BFC58
.L_801BFB74:
/* 801BFB74 001BCAB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFB78 001BCAB8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFB7C 001BCABC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BFB80 001BCAC0  7D 89 03 A6 */	mtctr r12
/* 801BFB84 001BCAC4  4E 80 04 21 */	bctrl 
/* 801BFB88 001BCAC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFB8C 001BCACC  FC 20 F8 90 */	fmr f1, f31
/* 801BFB90 001BCAD0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801BFB94 001BCAD4  7D 89 03 A6 */	mtctr r12
/* 801BFB98 001BCAD8  4E 80 04 21 */	bctrl 
/* 801BFB9C 001BCADC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BFBA0 001BCAE0  28 00 00 00 */	cmplwi r0, 0
/* 801BFBA4 001BCAE4  40 82 00 24 */	bne .L_801BFBC8
/* 801BFBA8 001BCAE8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFBAC 001BCAEC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFBB0 001BCAF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFBB4 001BCAF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFBB8 001BCAF8  7D 89 03 A6 */	mtctr r12
/* 801BFBBC 001BCAFC  4E 80 04 21 */	bctrl 
/* 801BFBC0 001BCB00  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFBC4 001BCB04  48 00 00 94 */	b .L_801BFC58
.L_801BFBC8:
/* 801BFBC8 001BCB08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFBCC 001BCB0C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFBD0 001BCB10  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFBD4 001BCB14  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFBD8 001BCB18  7D 89 03 A6 */	mtctr r12
/* 801BFBDC 001BCB1C  4E 80 04 21 */	bctrl 
/* 801BFBE0 001BCB20  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFBE4 001BCB24  48 00 00 58 */	b .L_801BFC3C
.L_801BFBE8:
/* 801BFBE8 001BCB28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFBEC 001BCB2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFBF0 001BCB30  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFBF4 001BCB34  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BFBF8 001BCB38  7D 89 03 A6 */	mtctr r12
/* 801BFBFC 001BCB3C  4E 80 04 21 */	bctrl 
/* 801BFC00 001BCB40  7C 64 1B 78 */	mr r4, r3
/* 801BFC04 001BCB44  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BFC08 001BCB48  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFC0C 001BCB4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BFC10 001BCB50  7D 89 03 A6 */	mtctr r12
/* 801BFC14 001BCB54  4E 80 04 21 */	bctrl 
/* 801BFC18 001BCB58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFC1C 001BCB5C  40 82 00 3C */	bne .L_801BFC58
/* 801BFC20 001BCB60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFC24 001BCB64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFC28 001BCB68  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFC2C 001BCB6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFC30 001BCB70  7D 89 03 A6 */	mtctr r12
/* 801BFC34 001BCB74  4E 80 04 21 */	bctrl 
/* 801BFC38 001BCB78  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BFC3C:
/* 801BFC3C 001BCB7C  81 81 00 08 */	lwz r12, 8(r1)
/* 801BFC40 001BCB80  38 61 00 08 */	addi r3, r1, 8
/* 801BFC44 001BCB84  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BFC48 001BCB88  7D 89 03 A6 */	mtctr r12
/* 801BFC4C 001BCB8C  4E 80 04 21 */	bctrl 
/* 801BFC50 001BCB90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFC54 001BCB94  41 82 FF 94 */	beq .L_801BFBE8
.L_801BFC58:
/* 801BFC58 001BCB98  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFC5C 001BCB9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFC60 001BCBA0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BFC64 001BCBA4  7D 89 03 A6 */	mtctr r12
/* 801BFC68 001BCBA8  4E 80 04 21 */	bctrl 
/* 801BFC6C 001BCBAC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFC70 001BCBB0  7C 04 18 40 */	cmplw r4, r3
/* 801BFC74 001BCBB4  40 82 FF 00 */	bne .L_801BFB74
/* 801BFC78 001BCBB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BFC7C 001BCBBC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801BFC80 001BCBC0  7C 08 03 A6 */	mtlr r0
/* 801BFC84 001BCBC4  38 21 00 20 */	addi r1, r1, 0x20
/* 801BFC88 001BCBC8  4E 80 00 20 */	blr 
.endfn "doSimulation__26ObjectMgr<Q24Game7MapRoom>Ff"

.fn "doDirectDraw__26ObjectMgr<Q24Game7MapRoom>FR8Graphics", weak
/* 801BFC8C 001BCBCC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BFC90 001BCBD0  7C 08 02 A6 */	mflr r0
/* 801BFC94 001BCBD4  3C A0 80 4B */	lis r5, "__vt__25Iterator<Q24Game7MapRoom>"@ha
/* 801BFC98 001BCBD8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BFC9C 001BCBDC  38 00 00 00 */	li r0, 0
/* 801BFCA0 001BCBE0  38 A5 5D 28 */	addi r5, r5, "__vt__25Iterator<Q24Game7MapRoom>"@l
/* 801BFCA4 001BCBE4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BFCA8 001BCBE8  28 00 00 00 */	cmplwi r0, 0
/* 801BFCAC 001BCBEC  7C 9F 23 78 */	mr r31, r4
/* 801BFCB0 001BCBF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BFCB4 001BCBF4  90 A1 00 08 */	stw r5, 8(r1)
/* 801BFCB8 001BCBF8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801BFCBC 001BCBFC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801BFCC0 001BCC00  40 82 00 1C */	bne .L_801BFCDC
/* 801BFCC4 001BCC04  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFCC8 001BCC08  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BFCCC 001BCC0C  7D 89 03 A6 */	mtctr r12
/* 801BFCD0 001BCC10  4E 80 04 21 */	bctrl 
/* 801BFCD4 001BCC14  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFCD8 001BCC18  48 00 01 74 */	b .L_801BFE4C
.L_801BFCDC:
/* 801BFCDC 001BCC1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFCE0 001BCC20  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BFCE4 001BCC24  7D 89 03 A6 */	mtctr r12
/* 801BFCE8 001BCC28  4E 80 04 21 */	bctrl 
/* 801BFCEC 001BCC2C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFCF0 001BCC30  48 00 00 58 */	b .L_801BFD48
.L_801BFCF4:
/* 801BFCF4 001BCC34  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFCF8 001BCC38  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFCFC 001BCC3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFD00 001BCC40  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BFD04 001BCC44  7D 89 03 A6 */	mtctr r12
/* 801BFD08 001BCC48  4E 80 04 21 */	bctrl 
/* 801BFD0C 001BCC4C  7C 64 1B 78 */	mr r4, r3
/* 801BFD10 001BCC50  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BFD14 001BCC54  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFD18 001BCC58  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BFD1C 001BCC5C  7D 89 03 A6 */	mtctr r12
/* 801BFD20 001BCC60  4E 80 04 21 */	bctrl 
/* 801BFD24 001BCC64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFD28 001BCC68  40 82 01 24 */	bne .L_801BFE4C
/* 801BFD2C 001BCC6C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFD30 001BCC70  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFD34 001BCC74  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFD38 001BCC78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFD3C 001BCC7C  7D 89 03 A6 */	mtctr r12
/* 801BFD40 001BCC80  4E 80 04 21 */	bctrl 
/* 801BFD44 001BCC84  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BFD48:
/* 801BFD48 001BCC88  81 81 00 08 */	lwz r12, 8(r1)
/* 801BFD4C 001BCC8C  38 61 00 08 */	addi r3, r1, 8
/* 801BFD50 001BCC90  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BFD54 001BCC94  7D 89 03 A6 */	mtctr r12
/* 801BFD58 001BCC98  4E 80 04 21 */	bctrl 
/* 801BFD5C 001BCC9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFD60 001BCCA0  41 82 FF 94 */	beq .L_801BFCF4
/* 801BFD64 001BCCA4  48 00 00 E8 */	b .L_801BFE4C
.L_801BFD68:
/* 801BFD68 001BCCA8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFD6C 001BCCAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFD70 001BCCB0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BFD74 001BCCB4  7D 89 03 A6 */	mtctr r12
/* 801BFD78 001BCCB8  4E 80 04 21 */	bctrl 
/* 801BFD7C 001BCCBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFD80 001BCCC0  7F E4 FB 78 */	mr r4, r31
/* 801BFD84 001BCCC4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801BFD88 001BCCC8  7D 89 03 A6 */	mtctr r12
/* 801BFD8C 001BCCCC  4E 80 04 21 */	bctrl 
/* 801BFD90 001BCCD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BFD94 001BCCD4  28 00 00 00 */	cmplwi r0, 0
/* 801BFD98 001BCCD8  40 82 00 24 */	bne .L_801BFDBC
/* 801BFD9C 001BCCDC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFDA0 001BCCE0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFDA4 001BCCE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFDA8 001BCCE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFDAC 001BCCEC  7D 89 03 A6 */	mtctr r12
/* 801BFDB0 001BCCF0  4E 80 04 21 */	bctrl 
/* 801BFDB4 001BCCF4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFDB8 001BCCF8  48 00 00 94 */	b .L_801BFE4C
.L_801BFDBC:
/* 801BFDBC 001BCCFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFDC0 001BCD00  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFDC4 001BCD04  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFDC8 001BCD08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFDCC 001BCD0C  7D 89 03 A6 */	mtctr r12
/* 801BFDD0 001BCD10  4E 80 04 21 */	bctrl 
/* 801BFDD4 001BCD14  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFDD8 001BCD18  48 00 00 58 */	b .L_801BFE30
.L_801BFDDC:
/* 801BFDDC 001BCD1C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFDE0 001BCD20  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFDE4 001BCD24  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFDE8 001BCD28  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BFDEC 001BCD2C  7D 89 03 A6 */	mtctr r12
/* 801BFDF0 001BCD30  4E 80 04 21 */	bctrl 
/* 801BFDF4 001BCD34  7C 64 1B 78 */	mr r4, r3
/* 801BFDF8 001BCD38  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BFDFC 001BCD3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFE00 001BCD40  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BFE04 001BCD44  7D 89 03 A6 */	mtctr r12
/* 801BFE08 001BCD48  4E 80 04 21 */	bctrl 
/* 801BFE0C 001BCD4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFE10 001BCD50  40 82 00 3C */	bne .L_801BFE4C
/* 801BFE14 001BCD54  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFE18 001BCD58  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFE1C 001BCD5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFE20 001BCD60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFE24 001BCD64  7D 89 03 A6 */	mtctr r12
/* 801BFE28 001BCD68  4E 80 04 21 */	bctrl 
/* 801BFE2C 001BCD6C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BFE30:
/* 801BFE30 001BCD70  81 81 00 08 */	lwz r12, 8(r1)
/* 801BFE34 001BCD74  38 61 00 08 */	addi r3, r1, 8
/* 801BFE38 001BCD78  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BFE3C 001BCD7C  7D 89 03 A6 */	mtctr r12
/* 801BFE40 001BCD80  4E 80 04 21 */	bctrl 
/* 801BFE44 001BCD84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFE48 001BCD88  41 82 FF 94 */	beq .L_801BFDDC
.L_801BFE4C:
/* 801BFE4C 001BCD8C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFE50 001BCD90  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFE54 001BCD94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801BFE58 001BCD98  7D 89 03 A6 */	mtctr r12
/* 801BFE5C 001BCD9C  4E 80 04 21 */	bctrl 
/* 801BFE60 001BCDA0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFE64 001BCDA4  7C 04 18 40 */	cmplw r4, r3
/* 801BFE68 001BCDA8  40 82 FF 00 */	bne .L_801BFD68
/* 801BFE6C 001BCDAC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BFE70 001BCDB0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BFE74 001BCDB4  7C 08 03 A6 */	mtlr r0
/* 801BFE78 001BCDB8  38 21 00 20 */	addi r1, r1, 0x20
/* 801BFE7C 001BCDBC  4E 80 00 20 */	blr 
.endfn "doDirectDraw__26ObjectMgr<Q24Game7MapRoom>FR8Graphics"

.fn "doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801BFE80 001BCDC0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BFE84 001BCDC4  7C 08 02 A6 */	mflr r0
/* 801BFE88 001BCDC8  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801BFE8C 001BCDCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801BFE90 001BCDD0  38 00 00 00 */	li r0, 0
/* 801BFE94 001BCDD4  38 84 5E E0 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801BFE98 001BCDD8  28 00 00 00 */	cmplwi r0, 0
/* 801BFE9C 001BCDDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801BFEA0 001BCDE0  90 81 00 08 */	stw r4, 8(r1)
/* 801BFEA4 001BCDE4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801BFEA8 001BCDE8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801BFEAC 001BCDEC  40 82 00 1C */	bne .L_801BFEC8
/* 801BFEB0 001BCDF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFEB4 001BCDF4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BFEB8 001BCDF8  7D 89 03 A6 */	mtctr r12
/* 801BFEBC 001BCDFC  4E 80 04 21 */	bctrl 
/* 801BFEC0 001BCE00  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFEC4 001BCE04  48 00 01 70 */	b .L_801C0034
.L_801BFEC8:
/* 801BFEC8 001BCE08  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFECC 001BCE0C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801BFED0 001BCE10  7D 89 03 A6 */	mtctr r12
/* 801BFED4 001BCE14  4E 80 04 21 */	bctrl 
/* 801BFED8 001BCE18  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFEDC 001BCE1C  48 00 00 58 */	b .L_801BFF34
.L_801BFEE0:
/* 801BFEE0 001BCE20  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFEE4 001BCE24  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFEE8 001BCE28  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFEEC 001BCE2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BFEF0 001BCE30  7D 89 03 A6 */	mtctr r12
/* 801BFEF4 001BCE34  4E 80 04 21 */	bctrl 
/* 801BFEF8 001BCE38  7C 64 1B 78 */	mr r4, r3
/* 801BFEFC 001BCE3C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BFF00 001BCE40  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFF04 001BCE44  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BFF08 001BCE48  7D 89 03 A6 */	mtctr r12
/* 801BFF0C 001BCE4C  4E 80 04 21 */	bctrl 
/* 801BFF10 001BCE50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFF14 001BCE54  40 82 01 20 */	bne .L_801C0034
/* 801BFF18 001BCE58  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFF1C 001BCE5C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFF20 001BCE60  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFF24 001BCE64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFF28 001BCE68  7D 89 03 A6 */	mtctr r12
/* 801BFF2C 001BCE6C  4E 80 04 21 */	bctrl 
/* 801BFF30 001BCE70  90 61 00 0C */	stw r3, 0xc(r1)
.L_801BFF34:
/* 801BFF34 001BCE74  81 81 00 08 */	lwz r12, 8(r1)
/* 801BFF38 001BCE78  38 61 00 08 */	addi r3, r1, 8
/* 801BFF3C 001BCE7C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801BFF40 001BCE80  7D 89 03 A6 */	mtctr r12
/* 801BFF44 001BCE84  4E 80 04 21 */	bctrl 
/* 801BFF48 001BCE88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFF4C 001BCE8C  41 82 FF 94 */	beq .L_801BFEE0
/* 801BFF50 001BCE90  48 00 00 E4 */	b .L_801C0034
.L_801BFF54:
/* 801BFF54 001BCE94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFF58 001BCE98  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFF5C 001BCE9C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BFF60 001BCEA0  7D 89 03 A6 */	mtctr r12
/* 801BFF64 001BCEA4  4E 80 04 21 */	bctrl 
/* 801BFF68 001BCEA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFF6C 001BCEAC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801BFF70 001BCEB0  7D 89 03 A6 */	mtctr r12
/* 801BFF74 001BCEB4  4E 80 04 21 */	bctrl 
/* 801BFF78 001BCEB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801BFF7C 001BCEBC  28 00 00 00 */	cmplwi r0, 0
/* 801BFF80 001BCEC0  40 82 00 24 */	bne .L_801BFFA4
/* 801BFF84 001BCEC4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFF88 001BCEC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFF8C 001BCECC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFF90 001BCED0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFF94 001BCED4  7D 89 03 A6 */	mtctr r12
/* 801BFF98 001BCED8  4E 80 04 21 */	bctrl 
/* 801BFF9C 001BCEDC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFFA0 001BCEE0  48 00 00 94 */	b .L_801C0034
.L_801BFFA4:
/* 801BFFA4 001BCEE4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFFA8 001BCEE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFFAC 001BCEEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFFB0 001BCEF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801BFFB4 001BCEF4  7D 89 03 A6 */	mtctr r12
/* 801BFFB8 001BCEF8  4E 80 04 21 */	bctrl 
/* 801BFFBC 001BCEFC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801BFFC0 001BCF00  48 00 00 58 */	b .L_801C0018
.L_801BFFC4:
/* 801BFFC4 001BCF04  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801BFFC8 001BCF08  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801BFFCC 001BCF0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFFD0 001BCF10  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801BFFD4 001BCF14  7D 89 03 A6 */	mtctr r12
/* 801BFFD8 001BCF18  4E 80 04 21 */	bctrl 
/* 801BFFDC 001BCF1C  7C 64 1B 78 */	mr r4, r3
/* 801BFFE0 001BCF20  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801BFFE4 001BCF24  81 83 00 00 */	lwz r12, 0(r3)
/* 801BFFE8 001BCF28  81 8C 00 08 */	lwz r12, 8(r12)
/* 801BFFEC 001BCF2C  7D 89 03 A6 */	mtctr r12
/* 801BFFF0 001BCF30  4E 80 04 21 */	bctrl 
/* 801BFFF4 001BCF34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801BFFF8 001BCF38  40 82 00 3C */	bne .L_801C0034
/* 801BFFFC 001BCF3C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0000 001BCF40  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0004 001BCF44  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0008 001BCF48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C000C 001BCF4C  7D 89 03 A6 */	mtctr r12
/* 801C0010 001BCF50  4E 80 04 21 */	bctrl 
/* 801C0014 001BCF54  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C0018:
/* 801C0018 001BCF58  81 81 00 08 */	lwz r12, 8(r1)
/* 801C001C 001BCF5C  38 61 00 08 */	addi r3, r1, 8
/* 801C0020 001BCF60  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C0024 001BCF64  7D 89 03 A6 */	mtctr r12
/* 801C0028 001BCF68  4E 80 04 21 */	bctrl 
/* 801C002C 001BCF6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C0030 001BCF70  41 82 FF 94 */	beq .L_801BFFC4
.L_801C0034:
/* 801C0034 001BCF74  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0038 001BCF78  81 83 00 00 */	lwz r12, 0(r3)
/* 801C003C 001BCF7C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C0040 001BCF80  7D 89 03 A6 */	mtctr r12
/* 801C0044 001BCF84  4E 80 04 21 */	bctrl 
/* 801C0048 001BCF88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C004C 001BCF8C  7C 04 18 40 */	cmplw r4, r3
/* 801C0050 001BCF90  40 82 FF 04 */	bne .L_801BFF54
/* 801C0054 001BCF94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C0058 001BCF98  7C 08 03 A6 */	mtlr r0
/* 801C005C 001BCF9C  38 21 00 20 */	addi r1, r1, 0x20
/* 801C0060 001BCFA0  4E 80 00 20 */	blr 
.endfn "doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"

.fn "doEntry__26ObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801C0064 001BCFA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C0068 001BCFA8  7C 08 02 A6 */	mflr r0
/* 801C006C 001BCFAC  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801C0070 001BCFB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C0074 001BCFB4  38 00 00 00 */	li r0, 0
/* 801C0078 001BCFB8  38 84 5E E0 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801C007C 001BCFBC  28 00 00 00 */	cmplwi r0, 0
/* 801C0080 001BCFC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0084 001BCFC4  90 81 00 08 */	stw r4, 8(r1)
/* 801C0088 001BCFC8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C008C 001BCFCC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C0090 001BCFD0  40 82 00 1C */	bne .L_801C00AC
/* 801C0094 001BCFD4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0098 001BCFD8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C009C 001BCFDC  7D 89 03 A6 */	mtctr r12
/* 801C00A0 001BCFE0  4E 80 04 21 */	bctrl 
/* 801C00A4 001BCFE4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C00A8 001BCFE8  48 00 01 70 */	b .L_801C0218
.L_801C00AC:
/* 801C00AC 001BCFEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C00B0 001BCFF0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C00B4 001BCFF4  7D 89 03 A6 */	mtctr r12
/* 801C00B8 001BCFF8  4E 80 04 21 */	bctrl 
/* 801C00BC 001BCFFC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C00C0 001BD000  48 00 00 58 */	b .L_801C0118
.L_801C00C4:
/* 801C00C4 001BD004  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C00C8 001BD008  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C00CC 001BD00C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C00D0 001BD010  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C00D4 001BD014  7D 89 03 A6 */	mtctr r12
/* 801C00D8 001BD018  4E 80 04 21 */	bctrl 
/* 801C00DC 001BD01C  7C 64 1B 78 */	mr r4, r3
/* 801C00E0 001BD020  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C00E4 001BD024  81 83 00 00 */	lwz r12, 0(r3)
/* 801C00E8 001BD028  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C00EC 001BD02C  7D 89 03 A6 */	mtctr r12
/* 801C00F0 001BD030  4E 80 04 21 */	bctrl 
/* 801C00F4 001BD034  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C00F8 001BD038  40 82 01 20 */	bne .L_801C0218
/* 801C00FC 001BD03C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0100 001BD040  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0104 001BD044  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0108 001BD048  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C010C 001BD04C  7D 89 03 A6 */	mtctr r12
/* 801C0110 001BD050  4E 80 04 21 */	bctrl 
/* 801C0114 001BD054  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C0118:
/* 801C0118 001BD058  81 81 00 08 */	lwz r12, 8(r1)
/* 801C011C 001BD05C  38 61 00 08 */	addi r3, r1, 8
/* 801C0120 001BD060  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C0124 001BD064  7D 89 03 A6 */	mtctr r12
/* 801C0128 001BD068  4E 80 04 21 */	bctrl 
/* 801C012C 001BD06C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C0130 001BD070  41 82 FF 94 */	beq .L_801C00C4
/* 801C0134 001BD074  48 00 00 E4 */	b .L_801C0218
.L_801C0138:
/* 801C0138 001BD078  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C013C 001BD07C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0140 001BD080  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C0144 001BD084  7D 89 03 A6 */	mtctr r12
/* 801C0148 001BD088  4E 80 04 21 */	bctrl 
/* 801C014C 001BD08C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0150 001BD090  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C0154 001BD094  7D 89 03 A6 */	mtctr r12
/* 801C0158 001BD098  4E 80 04 21 */	bctrl 
/* 801C015C 001BD09C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0160 001BD0A0  28 00 00 00 */	cmplwi r0, 0
/* 801C0164 001BD0A4  40 82 00 24 */	bne .L_801C0188
/* 801C0168 001BD0A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C016C 001BD0AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0170 001BD0B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0174 001BD0B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0178 001BD0B8  7D 89 03 A6 */	mtctr r12
/* 801C017C 001BD0BC  4E 80 04 21 */	bctrl 
/* 801C0180 001BD0C0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0184 001BD0C4  48 00 00 94 */	b .L_801C0218
.L_801C0188:
/* 801C0188 001BD0C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C018C 001BD0CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0190 001BD0D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0194 001BD0D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0198 001BD0D8  7D 89 03 A6 */	mtctr r12
/* 801C019C 001BD0DC  4E 80 04 21 */	bctrl 
/* 801C01A0 001BD0E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C01A4 001BD0E4  48 00 00 58 */	b .L_801C01FC
.L_801C01A8:
/* 801C01A8 001BD0E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C01AC 001BD0EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C01B0 001BD0F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C01B4 001BD0F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C01B8 001BD0F8  7D 89 03 A6 */	mtctr r12
/* 801C01BC 001BD0FC  4E 80 04 21 */	bctrl 
/* 801C01C0 001BD100  7C 64 1B 78 */	mr r4, r3
/* 801C01C4 001BD104  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C01C8 001BD108  81 83 00 00 */	lwz r12, 0(r3)
/* 801C01CC 001BD10C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C01D0 001BD110  7D 89 03 A6 */	mtctr r12
/* 801C01D4 001BD114  4E 80 04 21 */	bctrl 
/* 801C01D8 001BD118  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C01DC 001BD11C  40 82 00 3C */	bne .L_801C0218
/* 801C01E0 001BD120  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C01E4 001BD124  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C01E8 001BD128  81 83 00 00 */	lwz r12, 0(r3)
/* 801C01EC 001BD12C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C01F0 001BD130  7D 89 03 A6 */	mtctr r12
/* 801C01F4 001BD134  4E 80 04 21 */	bctrl 
/* 801C01F8 001BD138  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C01FC:
/* 801C01FC 001BD13C  81 81 00 08 */	lwz r12, 8(r1)
/* 801C0200 001BD140  38 61 00 08 */	addi r3, r1, 8
/* 801C0204 001BD144  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C0208 001BD148  7D 89 03 A6 */	mtctr r12
/* 801C020C 001BD14C  4E 80 04 21 */	bctrl 
/* 801C0210 001BD150  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C0214 001BD154  41 82 FF 94 */	beq .L_801C01A8
.L_801C0218:
/* 801C0218 001BD158  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C021C 001BD15C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0220 001BD160  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C0224 001BD164  7D 89 03 A6 */	mtctr r12
/* 801C0228 001BD168  4E 80 04 21 */	bctrl 
/* 801C022C 001BD16C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0230 001BD170  7C 04 18 40 */	cmplw r4, r3
/* 801C0234 001BD174  40 82 FF 04 */	bne .L_801C0138
/* 801C0238 001BD178  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C023C 001BD17C  7C 08 03 A6 */	mtlr r0
/* 801C0240 001BD180  38 21 00 20 */	addi r1, r1, 0x20
/* 801C0244 001BD184  4E 80 00 20 */	blr 
.endfn "doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"

.fn "doSetView__26ObjectMgr<Q24Game7MapUnit>Fi", weak
/* 801C0248 001BD188  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C024C 001BD18C  7C 08 02 A6 */	mflr r0
/* 801C0250 001BD190  3C A0 80 4B */	lis r5, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801C0254 001BD194  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C0258 001BD198  38 00 00 00 */	li r0, 0
/* 801C025C 001BD19C  38 A5 5E E0 */	addi r5, r5, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801C0260 001BD1A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C0264 001BD1A4  28 00 00 00 */	cmplwi r0, 0
/* 801C0268 001BD1A8  7C 9F 23 78 */	mr r31, r4
/* 801C026C 001BD1AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0270 001BD1B0  90 A1 00 08 */	stw r5, 8(r1)
/* 801C0274 001BD1B4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C0278 001BD1B8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C027C 001BD1BC  40 82 00 1C */	bne .L_801C0298
/* 801C0280 001BD1C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0284 001BD1C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C0288 001BD1C8  7D 89 03 A6 */	mtctr r12
/* 801C028C 001BD1CC  4E 80 04 21 */	bctrl 
/* 801C0290 001BD1D0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0294 001BD1D4  48 00 01 74 */	b .L_801C0408
.L_801C0298:
/* 801C0298 001BD1D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C029C 001BD1DC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C02A0 001BD1E0  7D 89 03 A6 */	mtctr r12
/* 801C02A4 001BD1E4  4E 80 04 21 */	bctrl 
/* 801C02A8 001BD1E8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C02AC 001BD1EC  48 00 00 58 */	b .L_801C0304
.L_801C02B0:
/* 801C02B0 001BD1F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C02B4 001BD1F4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C02B8 001BD1F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C02BC 001BD1FC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C02C0 001BD200  7D 89 03 A6 */	mtctr r12
/* 801C02C4 001BD204  4E 80 04 21 */	bctrl 
/* 801C02C8 001BD208  7C 64 1B 78 */	mr r4, r3
/* 801C02CC 001BD20C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C02D0 001BD210  81 83 00 00 */	lwz r12, 0(r3)
/* 801C02D4 001BD214  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C02D8 001BD218  7D 89 03 A6 */	mtctr r12
/* 801C02DC 001BD21C  4E 80 04 21 */	bctrl 
/* 801C02E0 001BD220  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C02E4 001BD224  40 82 01 24 */	bne .L_801C0408
/* 801C02E8 001BD228  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C02EC 001BD22C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C02F0 001BD230  81 83 00 00 */	lwz r12, 0(r3)
/* 801C02F4 001BD234  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C02F8 001BD238  7D 89 03 A6 */	mtctr r12
/* 801C02FC 001BD23C  4E 80 04 21 */	bctrl 
/* 801C0300 001BD240  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C0304:
/* 801C0304 001BD244  81 81 00 08 */	lwz r12, 8(r1)
/* 801C0308 001BD248  38 61 00 08 */	addi r3, r1, 8
/* 801C030C 001BD24C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C0310 001BD250  7D 89 03 A6 */	mtctr r12
/* 801C0314 001BD254  4E 80 04 21 */	bctrl 
/* 801C0318 001BD258  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C031C 001BD25C  41 82 FF 94 */	beq .L_801C02B0
/* 801C0320 001BD260  48 00 00 E8 */	b .L_801C0408
.L_801C0324:
/* 801C0324 001BD264  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0328 001BD268  81 83 00 00 */	lwz r12, 0(r3)
/* 801C032C 001BD26C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C0330 001BD270  7D 89 03 A6 */	mtctr r12
/* 801C0334 001BD274  4E 80 04 21 */	bctrl 
/* 801C0338 001BD278  81 83 00 00 */	lwz r12, 0(r3)
/* 801C033C 001BD27C  7F E4 FB 78 */	mr r4, r31
/* 801C0340 001BD280  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0344 001BD284  7D 89 03 A6 */	mtctr r12
/* 801C0348 001BD288  4E 80 04 21 */	bctrl 
/* 801C034C 001BD28C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0350 001BD290  28 00 00 00 */	cmplwi r0, 0
/* 801C0354 001BD294  40 82 00 24 */	bne .L_801C0378
/* 801C0358 001BD298  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C035C 001BD29C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0360 001BD2A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0364 001BD2A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0368 001BD2A8  7D 89 03 A6 */	mtctr r12
/* 801C036C 001BD2AC  4E 80 04 21 */	bctrl 
/* 801C0370 001BD2B0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0374 001BD2B4  48 00 00 94 */	b .L_801C0408
.L_801C0378:
/* 801C0378 001BD2B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C037C 001BD2BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0380 001BD2C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0384 001BD2C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0388 001BD2C8  7D 89 03 A6 */	mtctr r12
/* 801C038C 001BD2CC  4E 80 04 21 */	bctrl 
/* 801C0390 001BD2D0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0394 001BD2D4  48 00 00 58 */	b .L_801C03EC
.L_801C0398:
/* 801C0398 001BD2D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C039C 001BD2DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C03A0 001BD2E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C03A4 001BD2E4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C03A8 001BD2E8  7D 89 03 A6 */	mtctr r12
/* 801C03AC 001BD2EC  4E 80 04 21 */	bctrl 
/* 801C03B0 001BD2F0  7C 64 1B 78 */	mr r4, r3
/* 801C03B4 001BD2F4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C03B8 001BD2F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C03BC 001BD2FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C03C0 001BD300  7D 89 03 A6 */	mtctr r12
/* 801C03C4 001BD304  4E 80 04 21 */	bctrl 
/* 801C03C8 001BD308  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C03CC 001BD30C  40 82 00 3C */	bne .L_801C0408
/* 801C03D0 001BD310  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C03D4 001BD314  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C03D8 001BD318  81 83 00 00 */	lwz r12, 0(r3)
/* 801C03DC 001BD31C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C03E0 001BD320  7D 89 03 A6 */	mtctr r12
/* 801C03E4 001BD324  4E 80 04 21 */	bctrl 
/* 801C03E8 001BD328  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C03EC:
/* 801C03EC 001BD32C  81 81 00 08 */	lwz r12, 8(r1)
/* 801C03F0 001BD330  38 61 00 08 */	addi r3, r1, 8
/* 801C03F4 001BD334  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C03F8 001BD338  7D 89 03 A6 */	mtctr r12
/* 801C03FC 001BD33C  4E 80 04 21 */	bctrl 
/* 801C0400 001BD340  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C0404 001BD344  41 82 FF 94 */	beq .L_801C0398
.L_801C0408:
/* 801C0408 001BD348  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C040C 001BD34C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0410 001BD350  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C0414 001BD354  7D 89 03 A6 */	mtctr r12
/* 801C0418 001BD358  4E 80 04 21 */	bctrl 
/* 801C041C 001BD35C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0420 001BD360  7C 04 18 40 */	cmplw r4, r3
/* 801C0424 001BD364  40 82 FF 00 */	bne .L_801C0324
/* 801C0428 001BD368  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C042C 001BD36C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C0430 001BD370  7C 08 03 A6 */	mtlr r0
/* 801C0434 001BD374  38 21 00 20 */	addi r1, r1, 0x20
/* 801C0438 001BD378  4E 80 00 20 */	blr 
.endfn "doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"

.fn "doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801C043C 001BD37C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C0440 001BD380  7C 08 02 A6 */	mflr r0
/* 801C0444 001BD384  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801C0448 001BD388  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C044C 001BD38C  38 00 00 00 */	li r0, 0
/* 801C0450 001BD390  38 84 5E E0 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801C0454 001BD394  28 00 00 00 */	cmplwi r0, 0
/* 801C0458 001BD398  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C045C 001BD39C  90 81 00 08 */	stw r4, 8(r1)
/* 801C0460 001BD3A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C0464 001BD3A4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C0468 001BD3A8  40 82 00 1C */	bne .L_801C0484
/* 801C046C 001BD3AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0470 001BD3B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C0474 001BD3B4  7D 89 03 A6 */	mtctr r12
/* 801C0478 001BD3B8  4E 80 04 21 */	bctrl 
/* 801C047C 001BD3BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0480 001BD3C0  48 00 01 70 */	b .L_801C05F0
.L_801C0484:
/* 801C0484 001BD3C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0488 001BD3C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C048C 001BD3CC  7D 89 03 A6 */	mtctr r12
/* 801C0490 001BD3D0  4E 80 04 21 */	bctrl 
/* 801C0494 001BD3D4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0498 001BD3D8  48 00 00 58 */	b .L_801C04F0
.L_801C049C:
/* 801C049C 001BD3DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C04A0 001BD3E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C04A4 001BD3E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C04A8 001BD3E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C04AC 001BD3EC  7D 89 03 A6 */	mtctr r12
/* 801C04B0 001BD3F0  4E 80 04 21 */	bctrl 
/* 801C04B4 001BD3F4  7C 64 1B 78 */	mr r4, r3
/* 801C04B8 001BD3F8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C04BC 001BD3FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C04C0 001BD400  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C04C4 001BD404  7D 89 03 A6 */	mtctr r12
/* 801C04C8 001BD408  4E 80 04 21 */	bctrl 
/* 801C04CC 001BD40C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C04D0 001BD410  40 82 01 20 */	bne .L_801C05F0
/* 801C04D4 001BD414  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C04D8 001BD418  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C04DC 001BD41C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C04E0 001BD420  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C04E4 001BD424  7D 89 03 A6 */	mtctr r12
/* 801C04E8 001BD428  4E 80 04 21 */	bctrl 
/* 801C04EC 001BD42C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C04F0:
/* 801C04F0 001BD430  81 81 00 08 */	lwz r12, 8(r1)
/* 801C04F4 001BD434  38 61 00 08 */	addi r3, r1, 8
/* 801C04F8 001BD438  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C04FC 001BD43C  7D 89 03 A6 */	mtctr r12
/* 801C0500 001BD440  4E 80 04 21 */	bctrl 
/* 801C0504 001BD444  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C0508 001BD448  41 82 FF 94 */	beq .L_801C049C
/* 801C050C 001BD44C  48 00 00 E4 */	b .L_801C05F0
.L_801C0510:
/* 801C0510 001BD450  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0514 001BD454  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0518 001BD458  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C051C 001BD45C  7D 89 03 A6 */	mtctr r12
/* 801C0520 001BD460  4E 80 04 21 */	bctrl 
/* 801C0524 001BD464  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0528 001BD468  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C052C 001BD46C  7D 89 03 A6 */	mtctr r12
/* 801C0530 001BD470  4E 80 04 21 */	bctrl 
/* 801C0534 001BD474  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0538 001BD478  28 00 00 00 */	cmplwi r0, 0
/* 801C053C 001BD47C  40 82 00 24 */	bne .L_801C0560
/* 801C0540 001BD480  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0544 001BD484  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0548 001BD488  81 83 00 00 */	lwz r12, 0(r3)
/* 801C054C 001BD48C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0550 001BD490  7D 89 03 A6 */	mtctr r12
/* 801C0554 001BD494  4E 80 04 21 */	bctrl 
/* 801C0558 001BD498  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C055C 001BD49C  48 00 00 94 */	b .L_801C05F0
.L_801C0560:
/* 801C0560 001BD4A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0564 001BD4A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0568 001BD4A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C056C 001BD4AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0570 001BD4B0  7D 89 03 A6 */	mtctr r12
/* 801C0574 001BD4B4  4E 80 04 21 */	bctrl 
/* 801C0578 001BD4B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C057C 001BD4BC  48 00 00 58 */	b .L_801C05D4
.L_801C0580:
/* 801C0580 001BD4C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0584 001BD4C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0588 001BD4C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C058C 001BD4CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C0590 001BD4D0  7D 89 03 A6 */	mtctr r12
/* 801C0594 001BD4D4  4E 80 04 21 */	bctrl 
/* 801C0598 001BD4D8  7C 64 1B 78 */	mr r4, r3
/* 801C059C 001BD4DC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C05A0 001BD4E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C05A4 001BD4E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C05A8 001BD4E8  7D 89 03 A6 */	mtctr r12
/* 801C05AC 001BD4EC  4E 80 04 21 */	bctrl 
/* 801C05B0 001BD4F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C05B4 001BD4F4  40 82 00 3C */	bne .L_801C05F0
/* 801C05B8 001BD4F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C05BC 001BD4FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C05C0 001BD500  81 83 00 00 */	lwz r12, 0(r3)
/* 801C05C4 001BD504  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C05C8 001BD508  7D 89 03 A6 */	mtctr r12
/* 801C05CC 001BD50C  4E 80 04 21 */	bctrl 
/* 801C05D0 001BD510  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C05D4:
/* 801C05D4 001BD514  81 81 00 08 */	lwz r12, 8(r1)
/* 801C05D8 001BD518  38 61 00 08 */	addi r3, r1, 8
/* 801C05DC 001BD51C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C05E0 001BD520  7D 89 03 A6 */	mtctr r12
/* 801C05E4 001BD524  4E 80 04 21 */	bctrl 
/* 801C05E8 001BD528  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C05EC 001BD52C  41 82 FF 94 */	beq .L_801C0580
.L_801C05F0:
/* 801C05F0 001BD530  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C05F4 001BD534  81 83 00 00 */	lwz r12, 0(r3)
/* 801C05F8 001BD538  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C05FC 001BD53C  7D 89 03 A6 */	mtctr r12
/* 801C0600 001BD540  4E 80 04 21 */	bctrl 
/* 801C0604 001BD544  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0608 001BD548  7C 04 18 40 */	cmplw r4, r3
/* 801C060C 001BD54C  40 82 FF 04 */	bne .L_801C0510
/* 801C0610 001BD550  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C0614 001BD554  7C 08 03 A6 */	mtlr r0
/* 801C0618 001BD558  38 21 00 20 */	addi r1, r1, 0x20
/* 801C061C 001BD55C  4E 80 00 20 */	blr 
.endfn "doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"

.fn "doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff", weak
/* 801C0620 001BD560  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C0624 001BD564  7C 08 02 A6 */	mflr r0
/* 801C0628 001BD568  3C 80 80 4B */	lis r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801C062C 001BD56C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C0630 001BD570  38 00 00 00 */	li r0, 0
/* 801C0634 001BD574  38 84 5E E0 */	addi r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801C0638 001BD578  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801C063C 001BD57C  FF E0 08 90 */	fmr f31, f1
/* 801C0640 001BD580  28 00 00 00 */	cmplwi r0, 0
/* 801C0644 001BD584  90 81 00 08 */	stw r4, 8(r1)
/* 801C0648 001BD588  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C064C 001BD58C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C0650 001BD590  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C0654 001BD594  40 82 00 1C */	bne .L_801C0670
/* 801C0658 001BD598  81 83 00 00 */	lwz r12, 0(r3)
/* 801C065C 001BD59C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C0660 001BD5A0  7D 89 03 A6 */	mtctr r12
/* 801C0664 001BD5A4  4E 80 04 21 */	bctrl 
/* 801C0668 001BD5A8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C066C 001BD5AC  48 00 01 74 */	b .L_801C07E0
.L_801C0670:
/* 801C0670 001BD5B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0674 001BD5B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C0678 001BD5B8  7D 89 03 A6 */	mtctr r12
/* 801C067C 001BD5BC  4E 80 04 21 */	bctrl 
/* 801C0680 001BD5C0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0684 001BD5C4  48 00 00 58 */	b .L_801C06DC
.L_801C0688:
/* 801C0688 001BD5C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C068C 001BD5CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0690 001BD5D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0694 001BD5D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C0698 001BD5D8  7D 89 03 A6 */	mtctr r12
/* 801C069C 001BD5DC  4E 80 04 21 */	bctrl 
/* 801C06A0 001BD5E0  7C 64 1B 78 */	mr r4, r3
/* 801C06A4 001BD5E4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C06A8 001BD5E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C06AC 001BD5EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C06B0 001BD5F0  7D 89 03 A6 */	mtctr r12
/* 801C06B4 001BD5F4  4E 80 04 21 */	bctrl 
/* 801C06B8 001BD5F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C06BC 001BD5FC  40 82 01 24 */	bne .L_801C07E0
/* 801C06C0 001BD600  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C06C4 001BD604  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C06C8 001BD608  81 83 00 00 */	lwz r12, 0(r3)
/* 801C06CC 001BD60C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C06D0 001BD610  7D 89 03 A6 */	mtctr r12
/* 801C06D4 001BD614  4E 80 04 21 */	bctrl 
/* 801C06D8 001BD618  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C06DC:
/* 801C06DC 001BD61C  81 81 00 08 */	lwz r12, 8(r1)
/* 801C06E0 001BD620  38 61 00 08 */	addi r3, r1, 8
/* 801C06E4 001BD624  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C06E8 001BD628  7D 89 03 A6 */	mtctr r12
/* 801C06EC 001BD62C  4E 80 04 21 */	bctrl 
/* 801C06F0 001BD630  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C06F4 001BD634  41 82 FF 94 */	beq .L_801C0688
/* 801C06F8 001BD638  48 00 00 E8 */	b .L_801C07E0
.L_801C06FC:
/* 801C06FC 001BD63C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0700 001BD640  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0704 001BD644  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C0708 001BD648  7D 89 03 A6 */	mtctr r12
/* 801C070C 001BD64C  4E 80 04 21 */	bctrl 
/* 801C0710 001BD650  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0714 001BD654  FC 20 F8 90 */	fmr f1, f31
/* 801C0718 001BD658  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C071C 001BD65C  7D 89 03 A6 */	mtctr r12
/* 801C0720 001BD660  4E 80 04 21 */	bctrl 
/* 801C0724 001BD664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0728 001BD668  28 00 00 00 */	cmplwi r0, 0
/* 801C072C 001BD66C  40 82 00 24 */	bne .L_801C0750
/* 801C0730 001BD670  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0734 001BD674  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0738 001BD678  81 83 00 00 */	lwz r12, 0(r3)
/* 801C073C 001BD67C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0740 001BD680  7D 89 03 A6 */	mtctr r12
/* 801C0744 001BD684  4E 80 04 21 */	bctrl 
/* 801C0748 001BD688  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C074C 001BD68C  48 00 00 94 */	b .L_801C07E0
.L_801C0750:
/* 801C0750 001BD690  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0754 001BD694  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0758 001BD698  81 83 00 00 */	lwz r12, 0(r3)
/* 801C075C 001BD69C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0760 001BD6A0  7D 89 03 A6 */	mtctr r12
/* 801C0764 001BD6A4  4E 80 04 21 */	bctrl 
/* 801C0768 001BD6A8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C076C 001BD6AC  48 00 00 58 */	b .L_801C07C4
.L_801C0770:
/* 801C0770 001BD6B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0774 001BD6B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0778 001BD6B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C077C 001BD6BC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C0780 001BD6C0  7D 89 03 A6 */	mtctr r12
/* 801C0784 001BD6C4  4E 80 04 21 */	bctrl 
/* 801C0788 001BD6C8  7C 64 1B 78 */	mr r4, r3
/* 801C078C 001BD6CC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C0790 001BD6D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0794 001BD6D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C0798 001BD6D8  7D 89 03 A6 */	mtctr r12
/* 801C079C 001BD6DC  4E 80 04 21 */	bctrl 
/* 801C07A0 001BD6E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C07A4 001BD6E4  40 82 00 3C */	bne .L_801C07E0
/* 801C07A8 001BD6E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C07AC 001BD6EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C07B0 001BD6F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C07B4 001BD6F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C07B8 001BD6F8  7D 89 03 A6 */	mtctr r12
/* 801C07BC 001BD6FC  4E 80 04 21 */	bctrl 
/* 801C07C0 001BD700  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C07C4:
/* 801C07C4 001BD704  81 81 00 08 */	lwz r12, 8(r1)
/* 801C07C8 001BD708  38 61 00 08 */	addi r3, r1, 8
/* 801C07CC 001BD70C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C07D0 001BD710  7D 89 03 A6 */	mtctr r12
/* 801C07D4 001BD714  4E 80 04 21 */	bctrl 
/* 801C07D8 001BD718  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C07DC 001BD71C  41 82 FF 94 */	beq .L_801C0770
.L_801C07E0:
/* 801C07E0 001BD720  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C07E4 001BD724  81 83 00 00 */	lwz r12, 0(r3)
/* 801C07E8 001BD728  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C07EC 001BD72C  7D 89 03 A6 */	mtctr r12
/* 801C07F0 001BD730  4E 80 04 21 */	bctrl 
/* 801C07F4 001BD734  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C07F8 001BD738  7C 04 18 40 */	cmplw r4, r3
/* 801C07FC 001BD73C  40 82 FF 00 */	bne .L_801C06FC
/* 801C0800 001BD740  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C0804 001BD744  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801C0808 001BD748  7C 08 03 A6 */	mtlr r0
/* 801C080C 001BD74C  38 21 00 20 */	addi r1, r1, 0x20
/* 801C0810 001BD750  4E 80 00 20 */	blr 
.endfn "doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"

.fn "doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics", weak
/* 801C0814 001BD754  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C0818 001BD758  7C 08 02 A6 */	mflr r0
/* 801C081C 001BD75C  3C A0 80 4B */	lis r5, "__vt__25Iterator<Q24Game7MapUnit>"@ha
/* 801C0820 001BD760  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C0824 001BD764  38 00 00 00 */	li r0, 0
/* 801C0828 001BD768  38 A5 5E E0 */	addi r5, r5, "__vt__25Iterator<Q24Game7MapUnit>"@l
/* 801C082C 001BD76C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C0830 001BD770  28 00 00 00 */	cmplwi r0, 0
/* 801C0834 001BD774  7C 9F 23 78 */	mr r31, r4
/* 801C0838 001BD778  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C083C 001BD77C  90 A1 00 08 */	stw r5, 8(r1)
/* 801C0840 001BD780  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C0844 001BD784  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C0848 001BD788  40 82 00 1C */	bne .L_801C0864
/* 801C084C 001BD78C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0850 001BD790  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C0854 001BD794  7D 89 03 A6 */	mtctr r12
/* 801C0858 001BD798  4E 80 04 21 */	bctrl 
/* 801C085C 001BD79C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0860 001BD7A0  48 00 01 74 */	b .L_801C09D4
.L_801C0864:
/* 801C0864 001BD7A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0868 001BD7A8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C086C 001BD7AC  7D 89 03 A6 */	mtctr r12
/* 801C0870 001BD7B0  4E 80 04 21 */	bctrl 
/* 801C0874 001BD7B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0878 001BD7B8  48 00 00 58 */	b .L_801C08D0
.L_801C087C:
/* 801C087C 001BD7BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0880 001BD7C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C0884 001BD7C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0888 001BD7C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C088C 001BD7CC  7D 89 03 A6 */	mtctr r12
/* 801C0890 001BD7D0  4E 80 04 21 */	bctrl 
/* 801C0894 001BD7D4  7C 64 1B 78 */	mr r4, r3
/* 801C0898 001BD7D8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C089C 001BD7DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C08A0 001BD7E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C08A4 001BD7E4  7D 89 03 A6 */	mtctr r12
/* 801C08A8 001BD7E8  4E 80 04 21 */	bctrl 
/* 801C08AC 001BD7EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C08B0 001BD7F0  40 82 01 24 */	bne .L_801C09D4
/* 801C08B4 001BD7F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C08B8 001BD7F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C08BC 001BD7FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C08C0 001BD800  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C08C4 001BD804  7D 89 03 A6 */	mtctr r12
/* 801C08C8 001BD808  4E 80 04 21 */	bctrl 
/* 801C08CC 001BD80C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C08D0:
/* 801C08D0 001BD810  81 81 00 08 */	lwz r12, 8(r1)
/* 801C08D4 001BD814  38 61 00 08 */	addi r3, r1, 8
/* 801C08D8 001BD818  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C08DC 001BD81C  7D 89 03 A6 */	mtctr r12
/* 801C08E0 001BD820  4E 80 04 21 */	bctrl 
/* 801C08E4 001BD824  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C08E8 001BD828  41 82 FF 94 */	beq .L_801C087C
/* 801C08EC 001BD82C  48 00 00 E8 */	b .L_801C09D4
.L_801C08F0:
/* 801C08F0 001BD830  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C08F4 001BD834  81 83 00 00 */	lwz r12, 0(r3)
/* 801C08F8 001BD838  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C08FC 001BD83C  7D 89 03 A6 */	mtctr r12
/* 801C0900 001BD840  4E 80 04 21 */	bctrl 
/* 801C0904 001BD844  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0908 001BD848  7F E4 FB 78 */	mr r4, r31
/* 801C090C 001BD84C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C0910 001BD850  7D 89 03 A6 */	mtctr r12
/* 801C0914 001BD854  4E 80 04 21 */	bctrl 
/* 801C0918 001BD858  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C091C 001BD85C  28 00 00 00 */	cmplwi r0, 0
/* 801C0920 001BD860  40 82 00 24 */	bne .L_801C0944
/* 801C0924 001BD864  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0928 001BD868  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C092C 001BD86C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0930 001BD870  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0934 001BD874  7D 89 03 A6 */	mtctr r12
/* 801C0938 001BD878  4E 80 04 21 */	bctrl 
/* 801C093C 001BD87C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0940 001BD880  48 00 00 94 */	b .L_801C09D4
.L_801C0944:
/* 801C0944 001BD884  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0948 001BD888  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C094C 001BD88C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0950 001BD890  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C0954 001BD894  7D 89 03 A6 */	mtctr r12
/* 801C0958 001BD898  4E 80 04 21 */	bctrl 
/* 801C095C 001BD89C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C0960 001BD8A0  48 00 00 58 */	b .L_801C09B8
.L_801C0964:
/* 801C0964 001BD8A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C0968 001BD8A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C096C 001BD8AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0970 001BD8B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C0974 001BD8B4  7D 89 03 A6 */	mtctr r12
/* 801C0978 001BD8B8  4E 80 04 21 */	bctrl 
/* 801C097C 001BD8BC  7C 64 1B 78 */	mr r4, r3
/* 801C0980 001BD8C0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C0984 001BD8C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0988 001BD8C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C098C 001BD8CC  7D 89 03 A6 */	mtctr r12
/* 801C0990 001BD8D0  4E 80 04 21 */	bctrl 
/* 801C0994 001BD8D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C0998 001BD8D8  40 82 00 3C */	bne .L_801C09D4
/* 801C099C 001BD8DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C09A0 001BD8E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C09A4 001BD8E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C09A8 001BD8E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C09AC 001BD8EC  7D 89 03 A6 */	mtctr r12
/* 801C09B0 001BD8F0  4E 80 04 21 */	bctrl 
/* 801C09B4 001BD8F4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C09B8:
/* 801C09B8 001BD8F8  81 81 00 08 */	lwz r12, 8(r1)
/* 801C09BC 001BD8FC  38 61 00 08 */	addi r3, r1, 8
/* 801C09C0 001BD900  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C09C4 001BD904  7D 89 03 A6 */	mtctr r12
/* 801C09C8 001BD908  4E 80 04 21 */	bctrl 
/* 801C09CC 001BD90C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C09D0 001BD910  41 82 FF 94 */	beq .L_801C0964
.L_801C09D4:
/* 801C09D4 001BD914  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C09D8 001BD918  81 83 00 00 */	lwz r12, 0(r3)
/* 801C09DC 001BD91C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C09E0 001BD920  7D 89 03 A6 */	mtctr r12
/* 801C09E4 001BD924  4E 80 04 21 */	bctrl 
/* 801C09E8 001BD928  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C09EC 001BD92C  7C 04 18 40 */	cmplw r4, r3
/* 801C09F0 001BD930  40 82 FF 00 */	bne .L_801C08F0
/* 801C09F4 001BD934  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C09F8 001BD938  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C09FC 001BD93C  7C 08 03 A6 */	mtlr r0
/* 801C0A00 001BD940  38 21 00 20 */	addi r1, r1, 0x20
/* 801C0A04 001BD944  4E 80 00 20 */	blr 
.endfn "doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"

.fn "getObject__26Container<Q24Game7MapRoom>FPv", weak
/* 801C0A08 001BD948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C0A0C 001BD94C  7C 08 02 A6 */	mflr r0
/* 801C0A10 001BD950  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0A14 001BD954  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0A18 001BD958  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C0A1C 001BD95C  7D 89 03 A6 */	mtctr r12
/* 801C0A20 001BD960  4E 80 04 21 */	bctrl 
/* 801C0A24 001BD964  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0A28 001BD968  7C 08 03 A6 */	mtlr r0
/* 801C0A2C 001BD96C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C0A30 001BD970  4E 80 00 20 */	blr 
.endfn "getObject__26Container<Q24Game7MapRoom>FPv"

.fn "getAt__26Container<Q24Game7MapRoom>Fi", weak
/* 801C0A34 001BD974  38 60 00 00 */	li r3, 0
/* 801C0A38 001BD978  4E 80 00 20 */	blr 
.endfn "getAt__26Container<Q24Game7MapRoom>Fi"

.fn "getTo__26Container<Q24Game7MapRoom>Fv", weak
/* 801C0A3C 001BD97C  38 60 00 00 */	li r3, 0
/* 801C0A40 001BD980  4E 80 00 20 */	blr 
.endfn "getTo__26Container<Q24Game7MapRoom>Fv"

.fn "getObject__26Container<Q24Game7MapUnit>FPv", weak
/* 801C0A44 001BD984  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C0A48 001BD988  7C 08 02 A6 */	mflr r0
/* 801C0A4C 001BD98C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0A50 001BD990  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0A54 001BD994  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C0A58 001BD998  7D 89 03 A6 */	mtctr r12
/* 801C0A5C 001BD99C  4E 80 04 21 */	bctrl 
/* 801C0A60 001BD9A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0A64 001BD9A4  7C 08 03 A6 */	mtlr r0
/* 801C0A68 001BD9A8  38 21 00 10 */	addi r1, r1, 0x10
/* 801C0A6C 001BD9AC  4E 80 00 20 */	blr 
.endfn "getObject__26Container<Q24Game7MapUnit>FPv"

.fn "getAt__26Container<Q24Game7MapUnit>Fi", weak
/* 801C0A70 001BD9B0  38 60 00 00 */	li r3, 0
/* 801C0A74 001BD9B4  4E 80 00 20 */	blr 
.endfn "getAt__26Container<Q24Game7MapUnit>Fi"

.fn "getTo__26Container<Q24Game7MapUnit>Fv", weak
/* 801C0A78 001BD9B8  38 60 00 00 */	li r3, 0
/* 801C0A7C 001BD9BC  4E 80 00 20 */	blr 
.endfn "getTo__26Container<Q24Game7MapUnit>Fv"

.fn "alloc__30MonoObjectMgr<Q24Game7MapRoom>Fi", weak
/* 801C0A80 001BD9C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C0A84 001BD9C4  7C 08 02 A6 */	mflr r0
/* 801C0A88 001BD9C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C0A8C 001BD9CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C0A90 001BD9D0  7C 9F 23 78 */	mr r31, r4
/* 801C0A94 001BD9D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C0A98 001BD9D8  7C 7E 1B 78 */	mr r30, r3
/* 801C0A9C 001BD9DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C0AA0 001BD9E0  7F FD FB 78 */	mr r29, r31
/* 801C0AA4 001BD9E4  1C 7D 01 A0 */	mulli r3, r29, 0x1a0
/* 801C0AA8 001BD9E8  93 81 00 10 */	stw r28, 0x10(r1)
/* 801C0AAC 001BD9EC  38 63 00 10 */	addi r3, r3, 0x10
/* 801C0AB0 001BD9F0  4B E6 34 FD */	bl __nwa__FUl
/* 801C0AB4 001BD9F4  3C 80 80 1B */	lis r4, __ct__Q24Game7MapRoomFv@ha
/* 801C0AB8 001BD9F8  7F A7 EB 78 */	mr r7, r29
/* 801C0ABC 001BD9FC  38 84 6E 2C */	addi r4, r4, __ct__Q24Game7MapRoomFv@l
/* 801C0AC0 001BDA00  38 A0 00 00 */	li r5, 0
/* 801C0AC4 001BDA04  38 C0 01 A0 */	li r6, 0x1a0
/* 801C0AC8 001BDA08  4B F0 0F 29 */	bl __construct_new_array
/* 801C0ACC 001BDA0C  90 7E 00 28 */	stw r3, 0x28(r30)
/* 801C0AD0 001BDA10  38 00 00 00 */	li r0, 0
/* 801C0AD4 001BDA14  7F A3 EB 78 */	mr r3, r29
/* 801C0AD8 001BDA18  93 FE 00 24 */	stw r31, 0x24(r30)
/* 801C0ADC 001BDA1C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801C0AE0 001BDA20  4B E6 34 CD */	bl __nwa__FUl
/* 801C0AE4 001BDA24  2C 1F 00 00 */	cmpwi r31, 0
/* 801C0AE8 001BDA28  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 801C0AEC 001BDA2C  39 60 00 00 */	li r11, 0
/* 801C0AF0 001BDA30  40 81 00 B0 */	ble .L_801C0BA0
/* 801C0AF4 001BDA34  2C 1F 00 08 */	cmpwi r31, 8
/* 801C0AF8 001BDA38  38 7F FF F8 */	addi r3, r31, -8
/* 801C0AFC 001BDA3C  40 81 00 80 */	ble .L_801C0B7C
/* 801C0B00 001BDA40  38 03 00 07 */	addi r0, r3, 7
/* 801C0B04 001BDA44  54 00 E8 FE */	srwi r0, r0, 3
/* 801C0B08 001BDA48  7C 09 03 A6 */	mtctr r0
/* 801C0B0C 001BDA4C  2C 03 00 00 */	cmpwi r3, 0
/* 801C0B10 001BDA50  40 81 00 6C */	ble .L_801C0B7C
.L_801C0B14:
/* 801C0B14 001BDA54  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801C0B18 001BDA58  39 40 00 01 */	li r10, 1
/* 801C0B1C 001BDA5C  39 0B 00 01 */	addi r8, r11, 1
/* 801C0B20 001BDA60  38 EB 00 02 */	addi r7, r11, 2
/* 801C0B24 001BDA64  7D 43 59 AE */	stbx r10, r3, r11
/* 801C0B28 001BDA68  38 CB 00 03 */	addi r6, r11, 3
/* 801C0B2C 001BDA6C  38 AB 00 04 */	addi r5, r11, 4
/* 801C0B30 001BDA70  38 8B 00 05 */	addi r4, r11, 5
/* 801C0B34 001BDA74  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 801C0B38 001BDA78  38 6B 00 06 */	addi r3, r11, 6
/* 801C0B3C 001BDA7C  38 0B 00 07 */	addi r0, r11, 7
/* 801C0B40 001BDA80  39 6B 00 08 */	addi r11, r11, 8
/* 801C0B44 001BDA84  7D 49 41 AE */	stbx r10, r9, r8
/* 801C0B48 001BDA88  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 801C0B4C 001BDA8C  7D 48 39 AE */	stbx r10, r8, r7
/* 801C0B50 001BDA90  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 801C0B54 001BDA94  7D 47 31 AE */	stbx r10, r7, r6
/* 801C0B58 001BDA98  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 801C0B5C 001BDA9C  7D 46 29 AE */	stbx r10, r6, r5
/* 801C0B60 001BDAA0  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 801C0B64 001BDAA4  7D 45 21 AE */	stbx r10, r5, r4
/* 801C0B68 001BDAA8  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 801C0B6C 001BDAAC  7D 44 19 AE */	stbx r10, r4, r3
/* 801C0B70 001BDAB0  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801C0B74 001BDAB4  7D 43 01 AE */	stbx r10, r3, r0
/* 801C0B78 001BDAB8  42 00 FF 9C */	bdnz .L_801C0B14
.L_801C0B7C:
/* 801C0B7C 001BDABC  7C 0B F8 50 */	subf r0, r11, r31
/* 801C0B80 001BDAC0  38 80 00 01 */	li r4, 1
/* 801C0B84 001BDAC4  7C 09 03 A6 */	mtctr r0
/* 801C0B88 001BDAC8  7C 0B F8 00 */	cmpw r11, r31
/* 801C0B8C 001BDACC  40 80 00 14 */	bge .L_801C0BA0
.L_801C0B90:
/* 801C0B90 001BDAD0  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801C0B94 001BDAD4  7C 83 59 AE */	stbx r4, r3, r11
/* 801C0B98 001BDAD8  39 6B 00 01 */	addi r11, r11, 1
/* 801C0B9C 001BDADC  42 00 FF F4 */	bdnz .L_801C0B90
.L_801C0BA0:
/* 801C0BA0 001BDAE0  7F C3 F3 78 */	mr r3, r30
/* 801C0BA4 001BDAE4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801C0BA8 001BDAE8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801C0BAC 001BDAEC  7D 89 03 A6 */	mtctr r12
/* 801C0BB0 001BDAF0  4E 80 04 21 */	bctrl 
/* 801C0BB4 001BDAF4  3B 80 00 00 */	li r28, 0
/* 801C0BB8 001BDAF8  3B A0 00 00 */	li r29, 0
/* 801C0BBC 001BDAFC  48 00 00 24 */	b .L_801C0BE0
.L_801C0BC0:
/* 801C0BC0 001BDB00  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 801C0BC4 001BDB04  7C 60 EA 14 */	add r3, r0, r29
/* 801C0BC8 001BDB08  81 83 00 00 */	lwz r12, 0(r3)
/* 801C0BCC 001BDB0C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801C0BD0 001BDB10  7D 89 03 A6 */	mtctr r12
/* 801C0BD4 001BDB14  4E 80 04 21 */	bctrl 
/* 801C0BD8 001BDB18  3B BD 01 A0 */	addi r29, r29, 0x1a0
/* 801C0BDC 001BDB1C  3B 9C 00 01 */	addi r28, r28, 1
.L_801C0BE0:
/* 801C0BE0 001BDB20  7C 1C F8 00 */	cmpw r28, r31
/* 801C0BE4 001BDB24  41 80 FF DC */	blt .L_801C0BC0
/* 801C0BE8 001BDB28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C0BEC 001BDB2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C0BF0 001BDB30  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C0BF4 001BDB34  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C0BF8 001BDB38  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801C0BFC 001BDB3C  7C 08 03 A6 */	mtlr r0
/* 801C0C00 001BDB40  38 21 00 20 */	addi r1, r1, 0x20
/* 801C0C04 001BDB44  4E 80 00 20 */	blr 
.endfn "alloc__30MonoObjectMgr<Q24Game7MapRoom>Fi"

.fn "__ct__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801C0C08 001BDB48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C0C0C 001BDB4C  7C 08 02 A6 */	mflr r0
/* 801C0C10 001BDB50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0C14 001BDB54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C0C18 001BDB58  7C 7F 1B 78 */	mr r31, r3
/* 801C0C1C 001BDB5C  48 25 07 75 */	bl __ct__5CNodeFv
/* 801C0C20 001BDB60  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801C0C24 001BDB64  3C 60 80 4B */	lis r3, "__vt__26Container<Q24Game7MapRoom>"@ha
/* 801C0C28 001BDB68  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801C0C2C 001BDB6C  3C C0 80 4B */	lis r6, __vt__16GenericObjectMgr@ha
/* 801C0C30 001BDB70  90 1F 00 00 */	stw r0, 0(r31)
/* 801C0C34 001BDB74  38 03 5D 40 */	addi r0, r3, "__vt__26Container<Q24Game7MapRoom>"@l
/* 801C0C38 001BDB78  3C 80 80 4B */	lis r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@ha
/* 801C0C3C 001BDB7C  3C 60 80 4B */	lis r3, "__vt__30MonoObjectMgr<Q24Game7MapRoom>"@ha
/* 801C0C40 001BDB80  90 1F 00 00 */	stw r0, 0(r31)
/* 801C0C44 001BDB84  39 00 00 00 */	li r8, 0
/* 801C0C48 001BDB88  38 E4 5D 6C */	addi r7, r4, "__vt__26ObjectMgr<Q24Game7MapRoom>"@l
/* 801C0C4C 001BDB8C  38 A3 5D E8 */	addi r5, r3, "__vt__30MonoObjectMgr<Q24Game7MapRoom>"@l
/* 801C0C50 001BDB90  99 1F 00 18 */	stb r8, 0x18(r31)
/* 801C0C54 001BDB94  38 06 B5 F0 */	addi r0, r6, __vt__16GenericObjectMgr@l
/* 801C0C58 001BDB98  38 C7 00 2C */	addi r6, r7, 0x2c
/* 801C0C5C 001BDB9C  38 85 00 2C */	addi r4, r5, 0x2c
/* 801C0C60 001BDBA0  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801C0C64 001BDBA4  38 00 00 01 */	li r0, 1
/* 801C0C68 001BDBA8  7F E3 FB 78 */	mr r3, r31
/* 801C0C6C 001BDBAC  90 FF 00 00 */	stw r7, 0(r31)
/* 801C0C70 001BDBB0  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 801C0C74 001BDBB4  90 BF 00 00 */	stw r5, 0(r31)
/* 801C0C78 001BDBB8  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 801C0C7C 001BDBBC  98 1F 00 18 */	stb r0, 0x18(r31)
/* 801C0C80 001BDBC0  91 1F 00 24 */	stw r8, 0x24(r31)
/* 801C0C84 001BDBC4  91 1F 00 20 */	stw r8, 0x20(r31)
/* 801C0C88 001BDBC8  91 1F 00 28 */	stw r8, 0x28(r31)
/* 801C0C8C 001BDBCC  91 1F 00 2C */	stw r8, 0x2c(r31)
/* 801C0C90 001BDBD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C0C94 001BDBD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0C98 001BDBD8  7C 08 03 A6 */	mtlr r0
/* 801C0C9C 001BDBDC  38 21 00 10 */	addi r1, r1, 0x10
/* 801C0CA0 001BDBE0  4E 80 00 20 */	blr 
.endfn "__ct__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn __sinit_gameMapParts_cpp, local
/* 801C0CA4 001BDBE4  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801C0CA8 001BDBE8  38 00 FF FF */	li r0, -1
/* 801C0CAC 001BDBEC  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801C0CB0 001BDBF0  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 801C0CB4 001BDBF4  90 0D 93 F8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 801C0CB8 001BDBF8  D4 03 5C 20 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 801C0CBC 001BDBFC  D0 0D 93 FC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 801C0CC0 001BDC00  D0 03 00 04 */	stfs f0, 4(r3)
/* 801C0CC4 001BDC04  D0 03 00 08 */	stfs f0, 8(r3)
/* 801C0CC8 001BDC08  4E 80 00 20 */	blr 
.endfn __sinit_gameMapParts_cpp

.fn "@28@resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801C0CCC 001BDC0C  38 63 FF E4 */	addi r3, r3, -28
/* 801C0CD0 001BDC10  4B FF E1 58 */	b "resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv"
.endfn "@28@resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv"

.fn "@28@doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics", weak
/* 801C0CD4 001BDC14  38 63 FF E4 */	addi r3, r3, -28
/* 801C0CD8 001BDC18  4B FF FB 3C */	b "doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"
.endfn "@28@doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"

.fn "@28@doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff", weak
/* 801C0CDC 001BDC1C  38 63 FF E4 */	addi r3, r3, -28
/* 801C0CE0 001BDC20  4B FF F9 40 */	b "doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"
.endfn "@28@doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"

.fn "@28@doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801C0CE4 001BDC24  38 63 FF E4 */	addi r3, r3, -28
/* 801C0CE8 001BDC28  4B FF F7 54 */	b "doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"
.endfn "@28@doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"

.fn "@28@doSetView__26ObjectMgr<Q24Game7MapUnit>Fi", weak
/* 801C0CEC 001BDC2C  38 63 FF E4 */	addi r3, r3, -28
/* 801C0CF0 001BDC30  4B FF F5 58 */	b "doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"
.endfn "@28@doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"

.fn "@28@doEntry__26ObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801C0CF4 001BDC34  38 63 FF E4 */	addi r3, r3, -28
/* 801C0CF8 001BDC38  4B FF F3 6C */	b "doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"
.endfn "@28@doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"

.fn "@28@doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv", weak
/* 801C0CFC 001BDC3C  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D00 001BDC40  4B FF F1 80 */	b "doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"
.endfn "@28@doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"

.fn "@28@resetMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801C0D04 001BDC44  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D08 001BDC48  4B FF E5 58 */	b "resetMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv"
.endfn "@28@resetMgr__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "@28@doDirectDraw__30MonoObjectMgr<Q24Game7MapRoom>FR8Graphics", weak
/* 801C0D0C 001BDC4C  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D10 001BDC50  4B FF E4 C0 */	b "doDirectDraw__30MonoObjectMgr<Q24Game7MapRoom>FR8Graphics"
.endfn "@28@doDirectDraw__30MonoObjectMgr<Q24Game7MapRoom>FR8Graphics"

.fn "@28@doSimulation__30MonoObjectMgr<Q24Game7MapRoom>Ff", weak
/* 801C0D14 001BDC54  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D18 001BDC58  4B FF E4 28 */	b "doSimulation__30MonoObjectMgr<Q24Game7MapRoom>Ff"
.endfn "@28@doSimulation__30MonoObjectMgr<Q24Game7MapRoom>Ff"

.fn "@28@doViewCalc__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801C0D1C 001BDC5C  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D20 001BDC60  4B FF E3 A0 */	b "doViewCalc__30MonoObjectMgr<Q24Game7MapRoom>Fv"
.endfn "@28@doViewCalc__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "@28@doSetView__30MonoObjectMgr<Q24Game7MapRoom>Fi", weak
/* 801C0D24 001BDC64  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D28 001BDC68  4B FF E3 08 */	b "doSetView__30MonoObjectMgr<Q24Game7MapRoom>Fi"
.endfn "@28@doSetView__30MonoObjectMgr<Q24Game7MapRoom>Fi"

.fn "@28@doEntry__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801C0D2C 001BDC6C  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D30 001BDC70  4B FF E2 80 */	b "doEntry__30MonoObjectMgr<Q24Game7MapRoom>Fv"
.endfn "@28@doEntry__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "@28@doAnimation__30MonoObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801C0D34 001BDC74  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D38 001BDC78  4B FF E1 F8 */	b "doAnimation__30MonoObjectMgr<Q24Game7MapRoom>Fv"
.endfn "@28@doAnimation__30MonoObjectMgr<Q24Game7MapRoom>Fv"

.fn "@28@doDirectDraw__26ObjectMgr<Q24Game7MapRoom>FR8Graphics", weak
/* 801C0D3C 001BDC7C  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D40 001BDC80  4B FF EF 4C */	b "doDirectDraw__26ObjectMgr<Q24Game7MapRoom>FR8Graphics"
.endfn "@28@doDirectDraw__26ObjectMgr<Q24Game7MapRoom>FR8Graphics"

.fn "@28@doSimulation__26ObjectMgr<Q24Game7MapRoom>Ff", weak
/* 801C0D44 001BDC84  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D48 001BDC88  4B FF ED 50 */	b "doSimulation__26ObjectMgr<Q24Game7MapRoom>Ff"
.endfn "@28@doSimulation__26ObjectMgr<Q24Game7MapRoom>Ff"

.fn "@28@doViewCalc__26ObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801C0D4C 001BDC8C  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D50 001BDC90  4B FF EB 64 */	b "doViewCalc__26ObjectMgr<Q24Game7MapRoom>Fv"
.endfn "@28@doViewCalc__26ObjectMgr<Q24Game7MapRoom>Fv"

.fn "@28@doSetView__26ObjectMgr<Q24Game7MapRoom>Fi", weak
/* 801C0D54 001BDC94  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D58 001BDC98  4B FF E9 68 */	b "doSetView__26ObjectMgr<Q24Game7MapRoom>Fi"
.endfn "@28@doSetView__26ObjectMgr<Q24Game7MapRoom>Fi"

.fn "@28@doEntry__26ObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801C0D5C 001BDC9C  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D60 001BDCA0  4B FF E7 7C */	b "doEntry__26ObjectMgr<Q24Game7MapRoom>Fv"
.endfn "@28@doEntry__26ObjectMgr<Q24Game7MapRoom>Fv"

.fn "@28@doAnimation__26ObjectMgr<Q24Game7MapRoom>Fv", weak
/* 801C0D64 001BDCA4  38 63 FF E4 */	addi r3, r3, -28
/* 801C0D68 001BDCA8  4B FF E5 90 */	b "doAnimation__26ObjectMgr<Q24Game7MapRoom>Fv"
.endfn "@28@doAnimation__26ObjectMgr<Q24Game7MapRoom>Fv"

.fn "@280@4@frozenable__Q24Game6MapMgrFv", weak
/* 801C0D6C 001BDCAC  39 60 00 04 */	li r11, 4
/* 801C0D70 001BDCB0  7D 63 58 2E */	lwzx r11, r3, r11
/* 801C0D74 001BDCB4  7C 63 5A 14 */	add r3, r3, r11
/* 801C0D78 001BDCB8  38 63 FE E8 */	addi r3, r3, -280
/* 801C0D7C 001BDCBC  4B FA 33 74 */	b frozenable__Q24Game6MapMgrFv
.endfn "@280@4@frozenable__Q24Game6MapMgrFv"

.fn "@280@4@doDirectDraw__Q24Game10RoomMapMgrFR8Graphics", weak
/* 801C0D80 001BDCC0  39 60 00 04 */	li r11, 4
/* 801C0D84 001BDCC4  7D 63 58 2E */	lwzx r11, r3, r11
/* 801C0D88 001BDCC8  7C 63 5A 14 */	add r3, r3, r11
/* 801C0D8C 001BDCCC  38 63 FE E8 */	addi r3, r3, -280
/* 801C0D90 001BDCD0  4B FF D6 E8 */	b doDirectDraw__Q24Game10RoomMapMgrFR8Graphics
.endfn "@280@4@doDirectDraw__Q24Game10RoomMapMgrFR8Graphics"

.fn "@280@4@doSimulation__Q24Game10RoomMapMgrFf", weak
/* 801C0D94 001BDCD4  39 60 00 04 */	li r11, 4
/* 801C0D98 001BDCD8  7D 63 58 2E */	lwzx r11, r3, r11
/* 801C0D9C 001BDCDC  7C 63 5A 14 */	add r3, r3, r11
/* 801C0DA0 001BDCE0  38 63 FE E8 */	addi r3, r3, -280
/* 801C0DA4 001BDCE4  4B FF D6 D0 */	b doSimulation__Q24Game10RoomMapMgrFf
.endfn "@280@4@doSimulation__Q24Game10RoomMapMgrFf"

.fn "@280@4@doViewCalc__Q24Game10RoomMapMgrFv", weak
/* 801C0DA8 001BDCE8  39 60 00 04 */	li r11, 4
/* 801C0DAC 001BDCEC  7D 63 58 2E */	lwzx r11, r3, r11
/* 801C0DB0 001BDCF0  7C 63 5A 14 */	add r3, r3, r11
/* 801C0DB4 001BDCF4  38 63 FE E8 */	addi r3, r3, -280
/* 801C0DB8 001BDCF8  4B FF D6 54 */	b doViewCalc__Q24Game10RoomMapMgrFv
.endfn "@280@4@doViewCalc__Q24Game10RoomMapMgrFv"

.fn "@280@4@doSetView__Q24Game10RoomMapMgrFi", weak
/* 801C0DBC 001BDCFC  39 60 00 04 */	li r11, 4
/* 801C0DC0 001BDD00  7D 63 58 2E */	lwzx r11, r3, r11
/* 801C0DC4 001BDD04  7C 63 5A 14 */	add r3, r3, r11
/* 801C0DC8 001BDD08  38 63 FE E8 */	addi r3, r3, -280
/* 801C0DCC 001BDD0C  4B FF D5 C4 */	b doSetView__Q24Game10RoomMapMgrFi
.endfn "@280@4@doSetView__Q24Game10RoomMapMgrFi"

.fn "@280@4@doEntry__Q24Game10RoomMapMgrFv", weak
/* 801C0DD0 001BDD10  39 60 00 04 */	li r11, 4
/* 801C0DD4 001BDD14  7D 63 58 2E */	lwzx r11, r3, r11
/* 801C0DD8 001BDD18  7C 63 5A 14 */	add r3, r3, r11
/* 801C0DDC 001BDD1C  38 63 FE E8 */	addi r3, r3, -280
/* 801C0DE0 001BDD20  4B FF D4 D4 */	b doEntry__Q24Game10RoomMapMgrFv
.endfn "@280@4@doEntry__Q24Game10RoomMapMgrFv"

.fn "@280@4@doAnimation__Q24Game10RoomMapMgrFv", weak
/* 801C0DE4 001BDD24  39 60 00 04 */	li r11, 4
/* 801C0DE8 001BDD28  7D 63 58 2E */	lwzx r11, r3, r11
/* 801C0DEC 001BDD2C  7C 63 5A 14 */	add r3, r3, r11
/* 801C0DF0 001BDD30  38 63 FE E8 */	addi r3, r3, -280
/* 801C0DF4 001BDD34  4B FF D4 60 */	b doAnimation__Q24Game10RoomMapMgrFv
.endfn "@280@4@doAnimation__Q24Game10RoomMapMgrFv"
