.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_mapMgr_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8047E190
lbl_8047E190:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global lbl_8047E19C
lbl_8047E19C:
	.4byte 0x6D61704D
	.4byte 0x67722E63
	.4byte 0x70700000
.global lbl_8047E1A8
lbl_8047E1A8:
	.asciz "P2Assert"
	.skip 3
	.4byte 0x25732F61
	.4byte 0x72632E73
	.4byte 0x7A730000
	.4byte 0x25732F61
	.4byte 0x72632E61
	.4byte 0x72630000
	.4byte 0x6D617020
	.4byte 0x6D6F6465
	.4byte 0x6C000000
	.4byte 0x6D6F6465
	.4byte 0x6C2E626D
	.4byte 0x64000000
	.4byte 0x6661726D
	.4byte 0x5F25642E
	.4byte 0x626D6400
	.4byte 0x74657861
	.4byte 0x6E6D5F25
	.4byte 0x642E6274
	.4byte 0x6B000000
	.4byte 0x25732F6C
	.4byte 0x69676874
	.4byte 0x2E696E69
	.4byte 0x00000000
	.4byte 0x25732F74
	.4byte 0x65787473
	.4byte 0x2E737A73
	.4byte 0x00000000
	.4byte 0x67726964
	.4byte 0x2E62696E
	.4byte 0x00000000
	.4byte 0x6D617020
	.4byte 0x636F6C6C
	.4byte 0x6973696F
	.4byte 0x6E000000
	.4byte 0x77617465
	.4byte 0x72626F78
	.4byte 0x2E747874
	.4byte 0x00000000
	.4byte 0x77617465
	.4byte 0x72626F78
	.4byte 0x00000000
	.4byte 0x6D617063
	.4byte 0x6F64652E
	.4byte 0x62696E00
	.4byte 0x726F7574
	.4byte 0x65496E66
	.4byte 0x6F000000
	.4byte 0x6C6F6F70
	.4byte 0x2061762E
	.4byte 0x20252E31
	.4byte 0x66000000
	.4byte 0x25642025
	.4byte 0x64202564
	.4byte 0x3C25643E
	.4byte 0x00000000
	.4byte 0x74726973
	.4byte 0x2061762E
	.4byte 0x20252E31
	.4byte 0x66000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804B18A8
lbl_804B18A8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q24Game11ShapeMapMgr
__vt__Q24Game11ShapeMapMgr:
	.4byte 0
	.4byte 0
	.4byte hasHiddenCollision__Q24Game6MapMgrFv
	.4byte constraintBoundBox__Q24Game6MapMgrFRQ23Sys6Sphere
	.4byte "getStartPosition__Q24Game6MapMgrFR10Vector3<f>i"
	.4byte getDemoMatrix__Q24Game6MapMgrFv
	.4byte getBoundBox2d__Q24Game11ShapeMapMgrFR10BoundBox2d
	.4byte getBoundBox__Q24Game11ShapeMapMgrFR8BoundBox
	.4byte findRayIntersection__Q24Game11ShapeMapMgrFRQ23Sys16RayIntersectInfo
	.4byte traceMove__Q24Game11ShapeMapMgrFRQ24Game8MoveInfof
	.4byte "getMinY__Q24Game11ShapeMapMgrFR10Vector3<f>"
	.4byte getCurrTri__Q24Game11ShapeMapMgrFRQ24Game11CurrTriInfo
	.4byte createTriangles__Q24Game11ShapeMapMgrFRQ23Sys17CreateTriangleArg
	.4byte setupJUTTextures__Q24Game6MapMgrFv
	.4byte frozenable__Q24Game6MapMgrFv
	.4byte update__Q24Game6MapMgrFv
	.4byte do_update__Q24Game11ShapeMapMgrFv
	.4byte drawCollision__Q24Game11ShapeMapMgrFR8GraphicsRQ23Sys6Sphere
	.4byte doSimulation__Q24Game6MapMgrFf
	.4byte doDirectDraw__Q24Game6MapMgrFR8Graphics
	.4byte doAnimation__Q24Game11ShapeMapMgrFv
	.4byte doSetView__Q24Game11ShapeMapMgrFi
	.4byte doViewCalc__Q24Game11ShapeMapMgrFv
	.4byte doEntry__Q24Game11ShapeMapMgrFv
	.4byte 0
	.4byte 0
	.4byte "@84@4@doAnimation__Q24Game11ShapeMapMgrFv"
	.4byte "@84@4@doEntry__Q24Game11ShapeMapMgrFv"
	.4byte "@84@4@doSetView__Q24Game11ShapeMapMgrFi"
	.4byte "@84@4@doViewCalc__Q24Game11ShapeMapMgrFv"
	.4byte "@84@4@doSimulation__Q24Game6MapMgrFf"
	.4byte "@84@4@doDirectDraw__Q24Game6MapMgrFR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte "@84@4@frozenable__Q24Game6MapMgrFv"
	.4byte getMatrixLoadType__16GenericObjectMgrFv
.global __vt__Q24Game6MapMgr
__vt__Q24Game6MapMgr:
	.4byte 0
	.4byte 0
	.4byte hasHiddenCollision__Q24Game6MapMgrFv
	.4byte constraintBoundBox__Q24Game6MapMgrFRQ23Sys6Sphere
	.4byte "getStartPosition__Q24Game6MapMgrFR10Vector3<f>i"
	.4byte getDemoMatrix__Q24Game6MapMgrFv
	.4byte 0
	.4byte 0
	.4byte findRayIntersection__Q24Game6MapMgrFRQ23Sys16RayIntersectInfo
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte createTriangles__Q24Game6MapMgrFRQ23Sys17CreateTriangleArg
	.4byte setupJUTTextures__Q24Game6MapMgrFv
	.4byte frozenable__Q24Game6MapMgrFv
	.4byte update__Q24Game6MapMgrFv
	.4byte do_update__Q24Game6MapMgrFv
	.4byte 0
	.4byte doSimulation__Q24Game6MapMgrFf
	.4byte doDirectDraw__Q24Game6MapMgrFR8Graphics
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte doEntry__16GenericObjectMgrFv
	.4byte 0
	.4byte 0
	.4byte "@36@4@doSimulation__Q24Game6MapMgrFf"
	.4byte "@36@4@doDirectDraw__Q24Game6MapMgrFR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte "@36@4@frozenable__Q24Game6MapMgrFv"
	.4byte getMatrixLoadType__16GenericObjectMgrFv
.global "__vt__26Iterator<Q24Game8WaterBox>"
"__vt__26Iterator<Q24Game8WaterBox>":
	.4byte 0
	.4byte 0
	.4byte "first__26Iterator<Q24Game8WaterBox>Fv"
	.4byte "next__26Iterator<Q24Game8WaterBox>Fv"
	.4byte "isDone__26Iterator<Q24Game8WaterBox>Fv"
	.4byte "__ml__26Iterator<Q24Game8WaterBox>Fv"
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515980
lbl_80515980:
	.skip 0x4
.global lbl_80515984
lbl_80515984:
	.skip 0x4
.global mapMgr__4Game
mapMgr__4Game:
	.skip 0x4
.global traceMoveDebug__Q24Game6MapMgr
traceMoveDebug__Q24Game6MapMgr:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80518860
lbl_80518860:
	.4byte 0x6D61704D
	.4byte 0x67720000
.global lbl_80518868
lbl_80518868:
	.4byte 0x41080000
.global lbl_8051886C
lbl_8051886C:
	.4byte 0x00000000
.global lbl_80518870
lbl_80518870:
	.4byte 0x40490FDB
.global lbl_80518874
lbl_80518874:
	.4byte 0x3BB60B61
.global lbl_80518878
lbl_80518878:
	.4byte 0x41700000
.global lbl_8051887C
lbl_8051887C:
	.4byte 0x3EC90FDB
.global lbl_80518880
lbl_80518880:
	.4byte 0x43A2F983
.global lbl_80518884
lbl_80518884:
	.4byte 0xC3A2F983
.global lbl_80518888
lbl_80518888:
	.4byte 0x41200000
.global lbl_8051888C
lbl_8051888C:
	.4byte 0x40400000
.global lbl_80518890
lbl_80518890:
	.4byte 0x47FA0000
	.4byte 0x00000000
.global lbl_80518898
lbl_80518898:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_805188A0
lbl_805188A0:
	.4byte 0x51BA43B7
.global lbl_805188A4
lbl_805188A4:
	.float 1.0
.global lbl_805188A8
lbl_805188A8:
	.4byte 0x41F00000
.global lbl_805188AC
lbl_805188AC:
	.4byte 0x3F19999A
.global lbl_805188B0
lbl_805188B0:
	.4byte 0x6D617020
	.4byte 0x61726300
.global lbl_805188B8
lbl_805188B8:
	.4byte 0xC7FA0000
.global lbl_805188BC
lbl_805188BC:
	.4byte 0x454E542D
	.4byte 0x4D415000
.global lbl_805188C4
lbl_805188C4:
	.float 0.5
.global lbl_805188C8
lbl_805188C8:
	.4byte 0x4B435000
.global lbl_805188CC
lbl_805188CC:
	.4byte 0x47000000
.global lbl_805188D0
lbl_805188D0:
	.4byte 0xC7000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global store__Q24Game18TDispTriangleArrayFRQ23Sys8TriangleRQ23Sys11VertexTablei
store__Q24Game18TDispTriangleArrayFRQ23Sys8TriangleRQ23Sys11VertexTablei:
/* 8016239C 0015F2DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801623A0 0015F2E0  7C 08 02 A6 */	mflr r0
/* 801623A4 0015F2E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801623A8 0015F2E8  80 E3 00 00 */	lwz r7, 0(r3)
/* 801623AC 0015F2EC  80 03 00 04 */	lwz r0, 4(r3)
/* 801623B0 0015F2F0  7C 07 00 00 */	cmpw r7, r0
/* 801623B4 0015F2F4  40 80 00 1C */	bge .L_801623D0
/* 801623B8 0015F2F8  1C 07 00 60 */	mulli r0, r7, 0x60
/* 801623BC 0015F2FC  81 03 00 08 */	lwz r8, 8(r3)
/* 801623C0 0015F300  38 E7 00 01 */	addi r7, r7, 1
/* 801623C4 0015F304  90 E3 00 00 */	stw r7, 0(r3)
/* 801623C8 0015F308  7C 68 02 14 */	add r3, r8, r0
/* 801623CC 0015F30C  48 00 00 59 */	bl store__Q24Game13TDispTriangleFRQ23Sys8TriangleRQ23Sys11VertexTablei
.L_801623D0:
/* 801623D0 0015F310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801623D4 0015F314  7C 08 03 A6 */	mtlr r0
/* 801623D8 0015F318  38 21 00 10 */	addi r1, r1, 0x10
/* 801623DC 0015F31C  4E 80 00 20 */	blr 

.global store__Q24Game18TDispTriangleArrayFR7MatrixfRQ23Sys8TriangleRQ23Sys11VertexTablei
store__Q24Game18TDispTriangleArrayFR7MatrixfRQ23Sys8TriangleRQ23Sys11VertexTablei:
/* 801623E0 0015F320  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801623E4 0015F324  7C 08 02 A6 */	mflr r0
/* 801623E8 0015F328  90 01 00 14 */	stw r0, 0x14(r1)
/* 801623EC 0015F32C  81 03 00 00 */	lwz r8, 0(r3)
/* 801623F0 0015F330  80 03 00 04 */	lwz r0, 4(r3)
/* 801623F4 0015F334  7C 08 00 00 */	cmpw r8, r0
/* 801623F8 0015F338  40 80 00 1C */	bge .L_80162414
/* 801623FC 0015F33C  1C 08 00 60 */	mulli r0, r8, 0x60
/* 80162400 0015F340  81 23 00 08 */	lwz r9, 8(r3)
/* 80162404 0015F344  39 08 00 01 */	addi r8, r8, 1
/* 80162408 0015F348  91 03 00 00 */	stw r8, 0(r3)
/* 8016240C 0015F34C  7C 69 02 14 */	add r3, r9, r0
/* 80162410 0015F350  48 00 00 D5 */	bl store__Q24Game13TDispTriangleFR7MatrixfRQ23Sys8TriangleRQ23Sys11VertexTablei
.L_80162414:
/* 80162414 0015F354  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80162418 0015F358  7C 08 03 A6 */	mtlr r0
/* 8016241C 0015F35C  38 21 00 10 */	addi r1, r1, 0x10
/* 80162420 0015F360  4E 80 00 20 */	blr 

.global store__Q24Game13TDispTriangleFRQ23Sys8TriangleRQ23Sys11VertexTablei
store__Q24Game13TDispTriangleFRQ23Sys8TriangleRQ23Sys11VertexTablei:
/* 80162424 0015F364  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80162428 0015F368  7C 08 02 A6 */	mflr r0
/* 8016242C 0015F36C  7C 69 1B 78 */	mr r9, r3
/* 80162430 0015F370  90 01 00 14 */	stw r0, 0x14(r1)
/* 80162434 0015F374  38 00 00 00 */	li r0, 0
/* 80162438 0015F378  90 83 00 00 */	stw r4, 0(r3)
/* 8016243C 0015F37C  38 69 00 30 */	addi r3, r9, 0x30
/* 80162440 0015F380  80 E4 00 00 */	lwz r7, 0(r4)
/* 80162444 0015F384  81 05 00 24 */	lwz r8, 0x24(r5)
/* 80162448 0015F388  1C E7 00 0C */	mulli r7, r7, 0xc
/* 8016244C 0015F38C  7C E8 3A 14 */	add r7, r8, r7
/* 80162450 0015F390  C0 07 00 00 */	lfs f0, 0(r7)
/* 80162454 0015F394  D0 09 00 04 */	stfs f0, 4(r9)
/* 80162458 0015F398  C0 07 00 04 */	lfs f0, 4(r7)
/* 8016245C 0015F39C  D0 09 00 08 */	stfs f0, 8(r9)
/* 80162460 0015F3A0  C0 07 00 08 */	lfs f0, 8(r7)
/* 80162464 0015F3A4  D0 09 00 0C */	stfs f0, 0xc(r9)
/* 80162468 0015F3A8  80 E4 00 04 */	lwz r7, 4(r4)
/* 8016246C 0015F3AC  81 05 00 24 */	lwz r8, 0x24(r5)
/* 80162470 0015F3B0  1C E7 00 0C */	mulli r7, r7, 0xc
/* 80162474 0015F3B4  7C E8 3A 14 */	add r7, r8, r7
/* 80162478 0015F3B8  C0 07 00 00 */	lfs f0, 0(r7)
/* 8016247C 0015F3BC  D0 09 00 10 */	stfs f0, 0x10(r9)
/* 80162480 0015F3C0  C0 07 00 04 */	lfs f0, 4(r7)
/* 80162484 0015F3C4  D0 09 00 14 */	stfs f0, 0x14(r9)
/* 80162488 0015F3C8  C0 07 00 08 */	lfs f0, 8(r7)
/* 8016248C 0015F3CC  D0 09 00 18 */	stfs f0, 0x18(r9)
/* 80162490 0015F3D0  80 84 00 08 */	lwz r4, 8(r4)
/* 80162494 0015F3D4  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80162498 0015F3D8  1C 84 00 0C */	mulli r4, r4, 0xc
/* 8016249C 0015F3DC  7C 85 22 14 */	add r4, r5, r4
/* 801624A0 0015F3E0  C0 04 00 00 */	lfs f0, 0(r4)
/* 801624A4 0015F3E4  D0 09 00 1C */	stfs f0, 0x1c(r9)
/* 801624A8 0015F3E8  C0 04 00 04 */	lfs f0, 4(r4)
/* 801624AC 0015F3EC  D0 09 00 20 */	stfs f0, 0x20(r9)
/* 801624B0 0015F3F0  C0 04 00 08 */	lfs f0, 8(r4)
/* 801624B4 0015F3F4  D0 09 00 24 */	stfs f0, 0x24(r9)
/* 801624B8 0015F3F8  98 09 00 28 */	stb r0, 0x28(r9)
/* 801624BC 0015F3FC  98 09 00 29 */	stb r0, 0x29(r9)
/* 801624C0 0015F400  A0 09 00 28 */	lhz r0, 0x28(r9)
/* 801624C4 0015F404  60 00 00 01 */	ori r0, r0, 1
/* 801624C8 0015F408  B0 09 00 28 */	sth r0, 0x28(r9)
/* 801624CC 0015F40C  90 C9 00 2C */	stw r6, 0x2c(r9)
/* 801624D0 0015F410  4B F8 7D D1 */	bl PSMTXIdentity
/* 801624D4 0015F414  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801624D8 0015F418  7C 08 03 A6 */	mtlr r0
/* 801624DC 0015F41C  38 21 00 10 */	addi r1, r1, 0x10
/* 801624E0 0015F420  4E 80 00 20 */	blr 

.global store__Q24Game13TDispTriangleFR7MatrixfRQ23Sys8TriangleRQ23Sys11VertexTablei
store__Q24Game13TDispTriangleFR7MatrixfRQ23Sys8TriangleRQ23Sys11VertexTablei:
/* 801624E4 0015F424  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801624E8 0015F428  7C 08 02 A6 */	mflr r0
/* 801624EC 0015F42C  90 01 00 54 */	stw r0, 0x54(r1)
/* 801624F0 0015F430  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 801624F4 0015F434  7C BD 2B 78 */	mr r29, r5
/* 801624F8 0015F438  7C 9C 23 78 */	mr r28, r4
/* 801624FC 0015F43C  7C 7B 1B 78 */	mr r27, r3
/* 80162500 0015F440  7C DE 33 78 */	mr r30, r6
/* 80162504 0015F444  7C FF 3B 78 */	mr r31, r7
/* 80162508 0015F448  93 A3 00 00 */	stw r29, 0(r3)
/* 8016250C 0015F44C  7F 83 E3 78 */	mr r3, r28
/* 80162510 0015F450  80 05 00 00 */	lwz r0, 0(r5)
/* 80162514 0015F454  38 A1 00 20 */	addi r5, r1, 0x20
/* 80162518 0015F458  80 86 00 24 */	lwz r4, 0x24(r6)
/* 8016251C 0015F45C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80162520 0015F460  7C 84 02 14 */	add r4, r4, r0
/* 80162524 0015F464  4B F8 86 B5 */	bl PSMTXMultVec
/* 80162528 0015F468  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8016252C 0015F46C  7F 83 E3 78 */	mr r3, r28
/* 80162530 0015F470  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 80162534 0015F474  38 A1 00 14 */	addi r5, r1, 0x14
/* 80162538 0015F478  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8016253C 0015F47C  D0 1B 00 04 */	stfs f0, 4(r27)
/* 80162540 0015F480  D0 3B 00 08 */	stfs f1, 8(r27)
/* 80162544 0015F484  D0 5B 00 0C */	stfs f2, 0xc(r27)
/* 80162548 0015F488  80 1D 00 04 */	lwz r0, 4(r29)
/* 8016254C 0015F48C  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 80162550 0015F490  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80162554 0015F494  7C 84 02 14 */	add r4, r4, r0
/* 80162558 0015F498  4B F8 86 81 */	bl PSMTXMultVec
/* 8016255C 0015F49C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80162560 0015F4A0  7F 83 E3 78 */	mr r3, r28
/* 80162564 0015F4A4  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80162568 0015F4A8  38 A1 00 08 */	addi r5, r1, 8
/* 8016256C 0015F4AC  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80162570 0015F4B0  D0 1B 00 10 */	stfs f0, 0x10(r27)
/* 80162574 0015F4B4  D0 3B 00 14 */	stfs f1, 0x14(r27)
/* 80162578 0015F4B8  D0 5B 00 18 */	stfs f2, 0x18(r27)
/* 8016257C 0015F4BC  80 1D 00 08 */	lwz r0, 8(r29)
/* 80162580 0015F4C0  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 80162584 0015F4C4  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80162588 0015F4C8  7C 84 02 14 */	add r4, r4, r0
/* 8016258C 0015F4CC  4B F8 86 4D */	bl PSMTXMultVec
/* 80162590 0015F4D0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80162594 0015F4D4  38 00 00 00 */	li r0, 0
/* 80162598 0015F4D8  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8016259C 0015F4DC  7F 83 E3 78 */	mr r3, r28
/* 801625A0 0015F4E0  C0 01 00 08 */	lfs f0, 8(r1)
/* 801625A4 0015F4E4  38 9B 00 30 */	addi r4, r27, 0x30
/* 801625A8 0015F4E8  D0 1B 00 1C */	stfs f0, 0x1c(r27)
/* 801625AC 0015F4EC  D0 3B 00 20 */	stfs f1, 0x20(r27)
/* 801625B0 0015F4F0  D0 5B 00 24 */	stfs f2, 0x24(r27)
/* 801625B4 0015F4F4  98 1B 00 28 */	stb r0, 0x28(r27)
/* 801625B8 0015F4F8  98 1B 00 29 */	stb r0, 0x29(r27)
/* 801625BC 0015F4FC  A0 1B 00 28 */	lhz r0, 0x28(r27)
/* 801625C0 0015F500  60 00 00 01 */	ori r0, r0, 1
/* 801625C4 0015F504  B0 1B 00 28 */	sth r0, 0x28(r27)
/* 801625C8 0015F508  93 FB 00 2C */	stw r31, 0x2c(r27)
/* 801625CC 0015F50C  4B F8 7D 01 */	bl PSMTXCopy
/* 801625D0 0015F510  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 801625D4 0015F514  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801625D8 0015F518  7C 08 03 A6 */	mtlr r0
/* 801625DC 0015F51C  38 21 00 50 */	addi r1, r1, 0x50
/* 801625E0 0015F520  4E 80 00 20 */	blr 

.global __ct__Q24Game6MapMgrFv
__ct__Q24Game6MapMgrFv:
/* 801625E4 0015F524  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801625E8 0015F528  7C 08 02 A6 */	mflr r0
/* 801625EC 0015F52C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801625F0 0015F530  7C 80 07 35 */	extsh. r0, r4
/* 801625F4 0015F534  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801625F8 0015F538  7C 7F 1B 78 */	mr r31, r3
/* 801625FC 0015F53C  41 82 00 18 */	beq .L_80162614
/* 80162600 0015F540  38 1F 00 24 */	addi r0, r31, 0x24
/* 80162604 0015F544  3C 60 80 4B */	lis r3, __vt__16GenericObjectMgr@ha
/* 80162608 0015F548  90 1F 00 00 */	stw r0, 0(r31)
/* 8016260C 0015F54C  38 03 B5 F0 */	addi r0, r3, __vt__16GenericObjectMgr@l
/* 80162610 0015F550  90 1F 00 24 */	stw r0, 0x24(r31)
.L_80162614:
/* 80162614 0015F554  3C 60 80 4B */	lis r3, __vt__Q24Game6MapMgr@ha
/* 80162618 0015F558  38 1F 00 24 */	addi r0, r31, 0x24
/* 8016261C 0015F55C  38 83 19 4C */	addi r4, r3, __vt__Q24Game6MapMgr@l
/* 80162620 0015F560  38 60 00 48 */	li r3, 0x48
/* 80162624 0015F564  90 9F 00 04 */	stw r4, 4(r31)
/* 80162628 0015F568  38 A4 00 50 */	addi r5, r4, 0x50
/* 8016262C 0015F56C  80 9F 00 00 */	lwz r4, 0(r31)
/* 80162630 0015F570  90 A4 00 00 */	stw r5, 0(r4)
/* 80162634 0015F574  80 9F 00 00 */	lwz r4, 0(r31)
/* 80162638 0015F578  7C 04 00 50 */	subf r0, r4, r0
/* 8016263C 0015F57C  90 04 00 04 */	stw r0, 4(r4)
/* 80162640 0015F580  4B EC 18 65 */	bl __nw__FUl
/* 80162644 0015F584  7C 60 1B 79 */	or. r0, r3, r3
/* 80162648 0015F588  41 82 00 0C */	beq .L_80162654
/* 8016264C 0015F58C  48 04 CD 05 */	bl __ct__Q24Game6SeaMgrFv
/* 80162650 0015F590  7C 60 1B 78 */	mr r0, r3
.L_80162654:
/* 80162654 0015F594  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80162658 0015F598  38 00 00 00 */	li r0, 0
/* 8016265C 0015F59C  7F E3 FB 78 */	mr r3, r31
/* 80162660 0015F5A0  90 1F 00 08 */	stw r0, 8(r31)
/* 80162664 0015F5A4  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80162668 0015F5A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016266C 0015F5AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80162670 0015F5B0  7C 08 03 A6 */	mtlr r0
/* 80162674 0015F5B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80162678 0015F5B8  4E 80 00 20 */	blr 

.global "getStartPosition__Q24Game6MapMgrFR10Vector3<f>i"
"getStartPosition__Q24Game6MapMgrFR10Vector3<f>i":
/* 8016267C 0015F5BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80162680 0015F5C0  7C 08 02 A6 */	mflr r0
/* 80162684 0015F5C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80162688 0015F5C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016268C 0015F5CC  7C 9F 23 78 */	mr r31, r4
/* 80162690 0015F5D0  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 80162694 0015F5D4  28 05 00 00 */	cmplwi r5, 0
/* 80162698 0015F5D8  41 82 00 3C */	beq .L_801626D4
/* 8016269C 0015F5DC  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 801626A0 0015F5E0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801626A4 0015F5E4  C0 05 00 3C */	lfs f0, 0x3c(r5)
/* 801626A8 0015F5E8  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801626AC 0015F5EC  C0 05 00 40 */	lfs f0, 0x40(r5)
/* 801626B0 0015F5F0  D0 1F 00 08 */	stfs f0, 8(r31)
/* 801626B4 0015F5F4  81 83 00 04 */	lwz r12, 4(r3)
/* 801626B8 0015F5F8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801626BC 0015F5FC  7D 89 03 A6 */	mtctr r12
/* 801626C0 0015F600  4E 80 04 21 */	bctrl 
/* 801626C4 0015F604  C0 02 A5 08 */	lfs f0, lbl_80518868@sda21(r2)
/* 801626C8 0015F608  EC 00 08 2A */	fadds f0, f0, f1
/* 801626CC 0015F60C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801626D0 0015F610  48 00 00 14 */	b .L_801626E4
.L_801626D4:
/* 801626D4 0015F614  C0 02 A5 0C */	lfs f0, lbl_8051886C@sda21(r2)
/* 801626D8 0015F618  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801626DC 0015F61C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801626E0 0015F620  D0 1F 00 08 */	stfs f0, 8(r31)
.L_801626E4:
/* 801626E4 0015F624  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801626E8 0015F628  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801626EC 0015F62C  7C 08 03 A6 */	mtlr r0
/* 801626F0 0015F630  38 21 00 10 */	addi r1, r1, 0x10
/* 801626F4 0015F634  4E 80 00 20 */	blr 

.global getMapRotation__Q24Game6MapMgrFv
getMapRotation__Q24Game6MapMgrFv:
/* 801626F8 0015F638  80 63 00 0C */	lwz r3, 0xc(r3)
/* 801626FC 0015F63C  28 03 00 00 */	cmplwi r3, 0
/* 80162700 0015F640  41 82 00 1C */	beq .L_8016271C
/* 80162704 0015F644  C0 22 A5 14 */	lfs f1, lbl_80518874@sda21(r2)
/* 80162708 0015F648  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 8016270C 0015F64C  C0 42 A5 10 */	lfs f2, lbl_80518870@sda21(r2)
/* 80162710 0015F650  EC 01 00 32 */	fmuls f0, f1, f0
/* 80162714 0015F654  EC 22 00 32 */	fmuls f1, f2, f0
/* 80162718 0015F658  4E 80 00 20 */	blr 
.L_8016271C:
/* 8016271C 0015F65C  C0 22 A5 0C */	lfs f1, lbl_8051886C@sda21(r2)
/* 80162720 0015F660  4E 80 00 20 */	blr 

.global getDemoMatrix__Q24Game6MapMgrFv
getDemoMatrix__Q24Game6MapMgrFv:
/* 80162724 0015F664  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80162728 0015F668  28 03 00 00 */	cmplwi r3, 0
/* 8016272C 0015F66C  41 82 00 0C */	beq .L_80162738
/* 80162730 0015F670  38 63 00 D0 */	addi r3, r3, 0xd0
/* 80162734 0015F674  4E 80 00 20 */	blr 
.L_80162738:
/* 80162738 0015F678  38 60 00 00 */	li r3, 0
/* 8016273C 0015F67C  4E 80 00 20 */	blr 

.global "getBestAngle__Q24Game6MapMgrFR10Vector3<f>ff"
"getBestAngle__Q24Game6MapMgrFR10Vector3<f>ff":
/* 80162740 0015F680  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 80162744 0015F684  7C 08 02 A6 */	mflr r0
/* 80162748 0015F688  90 01 01 84 */	stw r0, 0x184(r1)
/* 8016274C 0015F68C  DB E1 01 70 */	stfd f31, 0x170(r1)
/* 80162750 0015F690  F3 E1 01 78 */	psq_st f31, 376(r1), 0, qr0
/* 80162754 0015F694  DB C1 01 60 */	stfd f30, 0x160(r1)
/* 80162758 0015F698  F3 C1 01 68 */	psq_st f30, 360(r1), 0, qr0
/* 8016275C 0015F69C  DB A1 01 50 */	stfd f29, 0x150(r1)
/* 80162760 0015F6A0  F3 A1 01 58 */	psq_st f29, 344(r1), 0, qr0
/* 80162764 0015F6A4  DB 81 01 40 */	stfd f28, 0x140(r1)
/* 80162768 0015F6A8  F3 81 01 48 */	psq_st f28, 328(r1), 0, qr0
/* 8016276C 0015F6AC  DB 61 01 30 */	stfd f27, 0x130(r1)
/* 80162770 0015F6B0  F3 61 01 38 */	psq_st f27, 312(r1), 0, qr0
/* 80162774 0015F6B4  DB 41 01 20 */	stfd f26, 0x120(r1)
/* 80162778 0015F6B8  F3 41 01 28 */	psq_st f26, 296(r1), 0, qr0
/* 8016277C 0015F6BC  DB 21 01 10 */	stfd f25, 0x110(r1)
/* 80162780 0015F6C0  F3 21 01 18 */	psq_st f25, 280(r1), 0, qr0
/* 80162784 0015F6C4  DB 01 01 00 */	stfd f24, 0x100(r1)
/* 80162788 0015F6C8  F3 01 01 08 */	psq_st f24, 264(r1), 0, qr0
/* 8016278C 0015F6CC  BF 41 00 E8 */	stmw r26, 0xe8(r1)
/* 80162790 0015F6D0  FF 60 10 90 */	fmr f27, f2
/* 80162794 0015F6D4  C0 02 A5 0C */	lfs f0, lbl_8051886C@sda21(r2)
/* 80162798 0015F6D8  FF 40 08 90 */	fmr f26, f1
/* 8016279C 0015F6DC  7C 7B 1B 78 */	mr r27, r3
/* 801627A0 0015F6E0  7C 9A 23 78 */	mr r26, r4
/* 801627A4 0015F6E4  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 801627A8 0015F6E8  41 81 00 20 */	bgt .L_801627C8
/* 801627AC 0015F6EC  3C 60 80 48 */	lis r3, lbl_8047E19C@ha
/* 801627B0 0015F6F0  3C A0 80 48 */	lis r5, lbl_8047E1A8@ha
/* 801627B4 0015F6F4  38 63 E1 9C */	addi r3, r3, lbl_8047E19C@l
/* 801627B8 0015F6F8  38 80 01 E8 */	li r4, 0x1e8
/* 801627BC 0015F6FC  38 A5 E1 A8 */	addi r5, r5, lbl_8047E1A8@l
/* 801627C0 0015F700  4C C6 31 82 */	crclr 6
/* 801627C4 0015F704  4B EC 7E 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801627C8:
/* 801627C8 0015F708  C0 1A 00 00 */	lfs f0, 0(r26)
/* 801627CC 0015F70C  7F 63 DB 78 */	mr r3, r27
/* 801627D0 0015F710  38 81 00 08 */	addi r4, r1, 8
/* 801627D4 0015F714  D0 01 00 08 */	stfs f0, 8(r1)
/* 801627D8 0015F718  C0 1A 00 04 */	lfs f0, 4(r26)
/* 801627DC 0015F71C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801627E0 0015F720  C0 1A 00 08 */	lfs f0, 8(r26)
/* 801627E4 0015F724  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801627E8 0015F728  81 9B 00 04 */	lwz r12, 4(r27)
/* 801627EC 0015F72C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801627F0 0015F730  7D 89 03 A6 */	mtctr r12
/* 801627F4 0015F734  4E 80 04 21 */	bctrl 
/* 801627F8 0015F738  C0 02 A5 18 */	lfs f0, lbl_80518878@sda21(r2)
/* 801627FC 0015F73C  3B A1 00 7C */	addi r29, r1, 0x7c
/* 80162800 0015F740  C3 82 A5 0C */	lfs f28, lbl_8051886C@sda21(r2)
/* 80162804 0015F744  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80162808 0015F748  EC 00 08 2A */	fadds f0, f0, f1
/* 8016280C 0015F74C  C3 A2 A5 1C */	lfs f29, lbl_8051887C@sda21(r2)
/* 80162810 0015F750  D3 81 00 7C */	stfs f28, 0x7c(r1)
/* 80162814 0015F754  7F BE EB 78 */	mr r30, r29
/* 80162818 0015F758  CB C2 A5 38 */	lfd f30, lbl_80518898@sda21(r2)
/* 8016281C 0015F75C  3B 43 71 A0 */	addi r26, r3, sincosTable___5JMath@l
/* 80162820 0015F760  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80162824 0015F764  3B 80 00 00 */	li r28, 0
/* 80162828 0015F768  C3 E2 A5 20 */	lfs f31, lbl_80518880@sda21(r2)
/* 8016282C 0015F76C  3F E0 43 30 */	lis r31, 0x4330
/* 80162830 0015F770  D3 81 00 80 */	stfs f28, 0x80(r1)
/* 80162834 0015F774  C3 22 A5 28 */	lfs f25, lbl_80518888@sda21(r2)
/* 80162838 0015F778  D3 81 00 84 */	stfs f28, 0x84(r1)
/* 8016283C 0015F77C  D3 81 00 88 */	stfs f28, 0x88(r1)
/* 80162840 0015F780  D3 81 00 8C */	stfs f28, 0x8c(r1)
/* 80162844 0015F784  D3 81 00 90 */	stfs f28, 0x90(r1)
/* 80162848 0015F788  D3 81 00 94 */	stfs f28, 0x94(r1)
/* 8016284C 0015F78C  D3 81 00 98 */	stfs f28, 0x98(r1)
/* 80162850 0015F790  D3 81 00 9C */	stfs f28, 0x9c(r1)
/* 80162854 0015F794  D3 81 00 A0 */	stfs f28, 0xa0(r1)
/* 80162858 0015F798  D3 81 00 A4 */	stfs f28, 0xa4(r1)
/* 8016285C 0015F79C  D3 81 00 A8 */	stfs f28, 0xa8(r1)
/* 80162860 0015F7A0  D3 81 00 AC */	stfs f28, 0xac(r1)
/* 80162864 0015F7A4  D3 81 00 B0 */	stfs f28, 0xb0(r1)
/* 80162868 0015F7A8  D3 81 00 B4 */	stfs f28, 0xb4(r1)
/* 8016286C 0015F7AC  D3 81 00 B8 */	stfs f28, 0xb8(r1)
.L_80162870:
/* 80162870 0015F7B0  6F 80 80 00 */	xoris r0, r28, 0x8000
/* 80162874 0015F7B4  93 E1 00 C0 */	stw r31, 0xc0(r1)
/* 80162878 0015F7B8  FC 20 D8 90 */	fmr f1, f27
/* 8016287C 0015F7BC  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80162880 0015F7C0  C8 01 00 C0 */	lfd f0, 0xc0(r1)
/* 80162884 0015F7C4  EC 00 F0 28 */	fsubs f0, f0, f30
/* 80162888 0015F7C8  EF 1D 00 32 */	fmuls f24, f29, f0
/* 8016288C 0015F7CC  4B F6 D0 69 */	bl tan
/* 80162890 0015F7D0  FC 20 08 18 */	frsp f1, f1
/* 80162894 0015F7D4  FC 00 C0 90 */	fmr f0, f24
/* 80162898 0015F7D8  FC 18 E0 40 */	fcmpo cr0, f24, f28
/* 8016289C 0015F7DC  EC DA 00 72 */	fmuls f6, f26, f1
/* 801628A0 0015F7E0  40 80 00 08 */	bge .L_801628A8
/* 801628A4 0015F7E4  FC 00 C0 50 */	fneg f0, f24
.L_801628A8:
/* 801628A8 0015F7E8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801628AC 0015F7EC  FC 18 E0 40 */	fcmpo cr0, f24, f28
/* 801628B0 0015F7F0  FC 00 00 1E */	fctiwz f0, f0
/* 801628B4 0015F7F4  D8 01 00 C8 */	stfd f0, 0xc8(r1)
/* 801628B8 0015F7F8  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 801628BC 0015F7FC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801628C0 0015F800  7C 7A 02 14 */	add r3, r26, r0
/* 801628C4 0015F804  C0 03 00 04 */	lfs f0, 4(r3)
/* 801628C8 0015F808  EC 9A 00 32 */	fmuls f4, f26, f0
/* 801628CC 0015F80C  40 80 00 30 */	bge .L_801628FC
/* 801628D0 0015F810  C0 02 A5 24 */	lfs f0, lbl_80518884@sda21(r2)
/* 801628D4 0015F814  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801628D8 0015F818  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801628DC 0015F81C  EC 18 00 32 */	fmuls f0, f24, f0
/* 801628E0 0015F820  FC 00 00 1E */	fctiwz f0, f0
/* 801628E4 0015F824  D8 01 00 D0 */	stfd f0, 0xd0(r1)
/* 801628E8 0015F828  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 801628EC 0015F82C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801628F0 0015F830  7C 03 04 2E */	lfsx f0, r3, r0
/* 801628F4 0015F834  FC 00 00 50 */	fneg f0, f0
/* 801628F8 0015F838  48 00 00 24 */	b .L_8016291C
.L_801628FC:
/* 801628FC 0015F83C  EC 18 07 F2 */	fmuls f0, f24, f31
/* 80162900 0015F840  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80162904 0015F844  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80162908 0015F848  FC 00 00 1E */	fctiwz f0, f0
/* 8016290C 0015F84C  D8 01 00 D8 */	stfd f0, 0xd8(r1)
/* 80162910 0015F850  80 01 00 DC */	lwz r0, 0xdc(r1)
/* 80162914 0015F854  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80162918 0015F858  7C 03 04 2E */	lfsx f0, r3, r0
.L_8016291C:
/* 8016291C 0015F85C  EC 3A 00 32 */	fmuls f1, f26, f0
/* 80162920 0015F860  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 80162924 0015F864  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80162928 0015F868  38 00 00 00 */	li r0, 0
/* 8016292C 0015F86C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80162930 0015F870  EC A4 18 2A */	fadds f5, f4, f3
/* 80162934 0015F874  EC 86 10 2A */	fadds f4, f6, f2
/* 80162938 0015F878  D3 21 00 6C */	stfs f25, 0x6c(r1)
/* 8016293C 0015F87C  EC 21 00 2A */	fadds f1, f1, f0
/* 80162940 0015F880  7F 63 DB 78 */	mr r3, r27
/* 80162944 0015F884  90 01 00 70 */	stw r0, 0x70(r1)
/* 80162948 0015F888  38 81 00 54 */	addi r4, r1, 0x54
/* 8016294C 0015F88C  98 01 00 74 */	stb r0, 0x74(r1)
/* 80162950 0015F890  93 81 00 70 */	stw r28, 0x70(r1)
/* 80162954 0015F894  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80162958 0015F898  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 8016295C 0015F89C  D0 61 00 5C */	stfs f3, 0x5c(r1)
/* 80162960 0015F8A0  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 80162964 0015F8A4  D0 81 00 64 */	stfs f4, 0x64(r1)
/* 80162968 0015F8A8  D0 A1 00 68 */	stfs f5, 0x68(r1)
/* 8016296C 0015F8AC  D3 21 00 6C */	stfs f25, 0x6c(r1)
/* 80162970 0015F8B0  48 00 04 D5 */	bl checkBeamCollision__Q24Game6MapMgrFRQ34Game6MapMgr16BeamCollisionArg
/* 80162974 0015F8B4  C0 01 00 78 */	lfs f0, 0x78(r1)
/* 80162978 0015F8B8  3B 9C 00 01 */	addi r28, r28, 1
/* 8016297C 0015F8BC  2C 1C 00 10 */	cmpwi r28, 0x10
/* 80162980 0015F8C0  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80162984 0015F8C4  3B DE 00 04 */	addi r30, r30, 4
/* 80162988 0015F8C8  41 80 FE E8 */	blt .L_80162870
/* 8016298C 0015F8CC  38 00 00 02 */	li r0, 2
/* 80162990 0015F8D0  38 81 00 14 */	addi r4, r1, 0x14
/* 80162994 0015F8D4  38 61 00 7C */	addi r3, r1, 0x7c
/* 80162998 0015F8D8  C0 22 A5 0C */	lfs f1, lbl_8051886C@sda21(r2)
/* 8016299C 0015F8DC  38 A0 00 00 */	li r5, 0
/* 801629A0 0015F8E0  C0 02 A5 2C */	lfs f0, lbl_8051888C@sda21(r2)
/* 801629A4 0015F8E4  7C 09 03 A6 */	mtctr r0
.L_801629A8:
/* 801629A8 0015F8E8  38 E5 00 0F */	addi r7, r5, 0xf
/* 801629AC 0015F8EC  39 65 00 01 */	addi r11, r5, 1
/* 801629B0 0015F8F0  54 E6 E0 06 */	slwi r6, r7, 0x1c
/* 801629B4 0015F8F4  54 A0 E0 06 */	slwi r0, r5, 0x1c
/* 801629B8 0015F8F8  54 EA 0F FE */	srwi r10, r7, 0x1f
/* 801629BC 0015F8FC  54 A9 0F FE */	srwi r9, r5, 0x1f
/* 801629C0 0015F900  7C EA 30 50 */	subf r7, r10, r6
/* 801629C4 0015F904  38 C5 00 10 */	addi r6, r5, 0x10
/* 801629C8 0015F908  7C 09 00 50 */	subf r0, r9, r0
/* 801629CC 0015F90C  55 6C E0 06 */	slwi r12, r11, 0x1c
/* 801629D0 0015F910  54 E8 20 3E */	rotlwi r8, r7, 4
/* 801629D4 0015F914  55 7C 0F FE */	srwi r28, r11, 0x1f
/* 801629D8 0015F918  54 07 20 3E */	rotlwi r7, r0, 4
/* 801629DC 0015F91C  54 C0 E0 06 */	slwi r0, r6, 0x1c
/* 801629E0 0015F920  39 65 00 02 */	addi r11, r5, 2
/* 801629E4 0015F924  7D 48 52 14 */	add r10, r8, r10
/* 801629E8 0015F928  39 05 00 11 */	addi r8, r5, 0x11
/* 801629EC 0015F92C  7C E7 4A 14 */	add r7, r7, r9
/* 801629F0 0015F930  7F 7C 60 50 */	subf r27, r28, r12
/* 801629F4 0015F934  55 4C 10 3A */	slwi r12, r10, 2
/* 801629F8 0015F938  54 E7 10 3A */	slwi r7, r7, 2
/* 801629FC 0015F93C  54 C9 0F FE */	srwi r9, r6, 0x1f
/* 80162A00 0015F940  39 45 00 03 */	addi r10, r5, 3
/* 80162A04 0015F944  57 7B 20 3E */	rotlwi r27, r27, 4
/* 80162A08 0015F948  38 C5 00 12 */	addi r6, r5, 0x12
/* 80162A0C 0015F94C  7C 09 00 50 */	subf r0, r9, r0
/* 80162A10 0015F950  7F 7B E2 14 */	add r27, r27, r28
/* 80162A14 0015F954  7C 63 64 2E */	lfsx f3, r3, r12
/* 80162A18 0015F958  7C 43 3C 2E */	lfsx f2, r3, r7
/* 80162A1C 0015F95C  54 00 20 3E */	rotlwi r0, r0, 4
/* 80162A20 0015F960  38 E5 00 04 */	addi r7, r5, 4
/* 80162A24 0015F964  57 6C 10 3A */	slwi r12, r27, 2
/* 80162A28 0015F968  7C 00 4A 14 */	add r0, r0, r9
/* 80162A2C 0015F96C  EC 63 10 2A */	fadds f3, f3, f2
/* 80162A30 0015F970  54 00 10 3A */	slwi r0, r0, 2
/* 80162A34 0015F974  7C 83 64 2E */	lfsx f4, r3, r12
/* 80162A38 0015F978  7C 43 04 2E */	lfsx f2, r3, r0
/* 80162A3C 0015F97C  55 60 E0 06 */	slwi r0, r11, 0x1c
/* 80162A40 0015F980  55 6C 0F FE */	srwi r12, r11, 0x1f
/* 80162A44 0015F984  7C 0C 00 50 */	subf r0, r12, r0
/* 80162A48 0015F988  EC A4 18 2A */	fadds f5, f4, f3
/* 80162A4C 0015F98C  54 0B 20 3E */	rotlwi r11, r0, 4
/* 80162A50 0015F990  55 00 E0 06 */	slwi r0, r8, 0x1c
/* 80162A54 0015F994  55 09 0F FE */	srwi r9, r8, 0x1f
/* 80162A58 0015F998  EC 62 20 2A */	fadds f3, f2, f4
/* 80162A5C 0015F99C  7C 09 00 50 */	subf r0, r9, r0
/* 80162A60 0015F9A0  7D 8B 62 14 */	add r12, r11, r12
/* 80162A64 0015F9A4  55 4B E0 06 */	slwi r11, r10, 0x1c
/* 80162A68 0015F9A8  54 08 20 3E */	rotlwi r8, r0, 4
/* 80162A6C 0015F9AC  55 4A 0F FE */	srwi r10, r10, 0x1f
/* 80162A70 0015F9B0  55 8C 10 3A */	slwi r12, r12, 2
/* 80162A74 0015F9B4  54 C0 E0 06 */	slwi r0, r6, 0x1c
/* 80162A78 0015F9B8  7D 08 4A 14 */	add r8, r8, r9
/* 80162A7C 0015F9BC  7D 2A 58 50 */	subf r9, r10, r11
/* 80162A80 0015F9C0  55 08 10 3A */	slwi r8, r8, 2
/* 80162A84 0015F9C4  54 C6 0F FE */	srwi r6, r6, 0x1f
/* 80162A88 0015F9C8  7C 83 64 2E */	lfsx f4, r3, r12
/* 80162A8C 0015F9CC  55 29 20 3E */	rotlwi r9, r9, 4
/* 80162A90 0015F9D0  7C 06 00 50 */	subf r0, r6, r0
/* 80162A94 0015F9D4  7C 43 44 2E */	lfsx f2, r3, r8
/* 80162A98 0015F9D8  EC 64 18 2A */	fadds f3, f4, f3
/* 80162A9C 0015F9DC  7D 09 52 14 */	add r8, r9, r10
/* 80162AA0 0015F9E0  54 00 20 3E */	rotlwi r0, r0, 4
/* 80162AA4 0015F9E4  EC A5 00 24 */	fdivs f5, f5, f0
/* 80162AA8 0015F9E8  55 08 10 3A */	slwi r8, r8, 2
/* 80162AAC 0015F9EC  D0 24 00 00 */	stfs f1, 0(r4)
/* 80162AB0 0015F9F0  7C 00 32 14 */	add r0, r0, r6
/* 80162AB4 0015F9F4  54 E6 E0 06 */	slwi r6, r7, 0x1c
/* 80162AB8 0015F9F8  54 E7 0F FE */	srwi r7, r7, 0x1f
/* 80162ABC 0015F9FC  7C C7 30 50 */	subf r6, r7, r6
/* 80162AC0 0015FA00  54 00 10 3A */	slwi r0, r0, 2
/* 80162AC4 0015FA04  54 C6 20 3E */	rotlwi r6, r6, 4
/* 80162AC8 0015FA08  D0 A4 00 00 */	stfs f5, 0(r4)
/* 80162ACC 0015FA0C  7C C6 3A 14 */	add r6, r6, r7
/* 80162AD0 0015FA10  EC 82 20 2A */	fadds f4, f2, f4
/* 80162AD4 0015FA14  7C A3 44 2E */	lfsx f5, r3, r8
/* 80162AD8 0015FA18  54 C6 10 3A */	slwi r6, r6, 2
/* 80162ADC 0015FA1C  7C 43 04 2E */	lfsx f2, r3, r0
/* 80162AE0 0015FA20  EC C3 00 24 */	fdivs f6, f3, f0
/* 80162AE4 0015FA24  D0 24 00 04 */	stfs f1, 4(r4)
/* 80162AE8 0015FA28  7C 63 34 2E */	lfsx f3, r3, r6
/* 80162AEC 0015FA2C  EC 85 20 2A */	fadds f4, f5, f4
/* 80162AF0 0015FA30  D0 C4 00 04 */	stfs f6, 4(r4)
/* 80162AF4 0015FA34  EC 42 28 2A */	fadds f2, f2, f5
/* 80162AF8 0015FA38  D0 24 00 08 */	stfs f1, 8(r4)
/* 80162AFC 0015FA3C  EC 84 00 24 */	fdivs f4, f4, f0
/* 80162B00 0015FA40  EC 43 10 2A */	fadds f2, f3, f2
/* 80162B04 0015FA44  D0 84 00 08 */	stfs f4, 8(r4)
/* 80162B08 0015FA48  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 80162B0C 0015FA4C  EC 42 00 24 */	fdivs f2, f2, f0
/* 80162B10 0015FA50  D0 44 00 0C */	stfs f2, 0xc(r4)
/* 80162B14 0015FA54  38 E5 00 13 */	addi r7, r5, 0x13
/* 80162B18 0015FA58  39 65 00 05 */	addi r11, r5, 5
/* 80162B1C 0015FA5C  54 E0 E0 06 */	slwi r0, r7, 0x1c
/* 80162B20 0015FA60  38 C5 00 14 */	addi r6, r5, 0x14
/* 80162B24 0015FA64  54 EA 0F FE */	srwi r10, r7, 0x1f
/* 80162B28 0015FA68  55 6C E0 06 */	slwi r12, r11, 0x1c
/* 80162B2C 0015FA6C  7C 0A 00 50 */	subf r0, r10, r0
/* 80162B30 0015FA70  55 7B 0F FE */	srwi r27, r11, 0x1f
/* 80162B34 0015FA74  54 07 20 3E */	rotlwi r7, r0, 4
/* 80162B38 0015FA78  39 25 00 06 */	addi r9, r5, 6
/* 80162B3C 0015FA7C  7D 67 52 14 */	add r11, r7, r10
/* 80162B40 0015FA80  54 C0 E0 06 */	slwi r0, r6, 0x1c
/* 80162B44 0015FA84  54 C7 0F FE */	srwi r7, r6, 0x1f
/* 80162B48 0015FA88  7D 9B 60 50 */	subf r12, r27, r12
/* 80162B4C 0015FA8C  55 66 10 3A */	slwi r6, r11, 2
/* 80162B50 0015FA90  39 05 00 15 */	addi r8, r5, 0x15
/* 80162B54 0015FA94  7C 07 00 50 */	subf r0, r7, r0
/* 80162B58 0015FA98  7C 43 34 2E */	lfsx f2, r3, r6
/* 80162B5C 0015FA9C  55 8B 20 3E */	rotlwi r11, r12, 4
/* 80162B60 0015FAA0  55 2C 0F FE */	srwi r12, r9, 0x1f
/* 80162B64 0015FAA4  54 00 20 3E */	rotlwi r0, r0, 4
/* 80162B68 0015FAA8  EC 62 18 2A */	fadds f3, f2, f3
/* 80162B6C 0015FAAC  7C 00 3A 14 */	add r0, r0, r7
/* 80162B70 0015FAB0  7C CB DA 14 */	add r6, r11, r27
/* 80162B74 0015FAB4  54 CB 10 3A */	slwi r11, r6, 2
/* 80162B78 0015FAB8  39 45 00 07 */	addi r10, r5, 7
/* 80162B7C 0015FABC  54 00 10 3A */	slwi r0, r0, 2
/* 80162B80 0015FAC0  7C 43 04 2E */	lfsx f2, r3, r0
/* 80162B84 0015FAC4  55 20 E0 06 */	slwi r0, r9, 0x1c
/* 80162B88 0015FAC8  7D 2C 00 50 */	subf r9, r12, r0
/* 80162B8C 0015FACC  7C 83 5C 2E */	lfsx f4, r3, r11
/* 80162B90 0015FAD0  55 2B 20 3E */	rotlwi r11, r9, 4
/* 80162B94 0015FAD4  55 00 E0 06 */	slwi r0, r8, 0x1c
/* 80162B98 0015FAD8  7D 6B 62 14 */	add r11, r11, r12
/* 80162B9C 0015FADC  EC C4 18 2A */	fadds f6, f4, f3
/* 80162BA0 0015FAE0  55 6B 10 3A */	slwi r11, r11, 2
/* 80162BA4 0015FAE4  EC 62 20 2A */	fadds f3, f2, f4
/* 80162BA8 0015FAE8  7C A3 5C 2E */	lfsx f5, r3, r11
/* 80162BAC 0015FAEC  55 08 0F FE */	srwi r8, r8, 0x1f
/* 80162BB0 0015FAF0  7C 08 00 50 */	subf r0, r8, r0
/* 80162BB4 0015FAF4  EC 85 18 2A */	fadds f4, f5, f3
/* 80162BB8 0015FAF8  54 00 20 3E */	rotlwi r0, r0, 4
/* 80162BBC 0015FAFC  EC 66 00 24 */	fdivs f3, f6, f0
/* 80162BC0 0015FB00  7C 00 42 14 */	add r0, r0, r8
/* 80162BC4 0015FB04  54 00 10 3A */	slwi r0, r0, 2
/* 80162BC8 0015FB08  55 49 E0 06 */	slwi r9, r10, 0x1c
/* 80162BCC 0015FB0C  55 4A 0F FE */	srwi r10, r10, 0x1f
/* 80162BD0 0015FB10  D0 24 00 10 */	stfs f1, 0x10(r4)
/* 80162BD4 0015FB14  7D 2A 48 50 */	subf r9, r10, r9
/* 80162BD8 0015FB18  D0 64 00 10 */	stfs f3, 0x10(r4)
/* 80162BDC 0015FB1C  7C 43 04 2E */	lfsx f2, r3, r0
/* 80162BE0 0015FB20  38 C5 00 16 */	addi r6, r5, 0x16
/* 80162BE4 0015FB24  54 C0 E0 06 */	slwi r0, r6, 0x1c
/* 80162BE8 0015FB28  55 28 20 3E */	rotlwi r8, r9, 4
/* 80162BEC 0015FB2C  54 C6 0F FE */	srwi r6, r6, 0x1f
/* 80162BF0 0015FB30  38 E5 00 08 */	addi r7, r5, 8
/* 80162BF4 0015FB34  7C 06 00 50 */	subf r0, r6, r0
/* 80162BF8 0015FB38  7D 08 52 14 */	add r8, r8, r10
/* 80162BFC 0015FB3C  54 00 20 3E */	rotlwi r0, r0, 4
/* 80162C00 0015FB40  EC 62 28 2A */	fadds f3, f2, f5
/* 80162C04 0015FB44  7C 00 32 14 */	add r0, r0, r6
/* 80162C08 0015FB48  55 08 10 3A */	slwi r8, r8, 2
/* 80162C0C 0015FB4C  54 00 10 3A */	slwi r0, r0, 2
/* 80162C10 0015FB50  54 E6 0F FE */	srwi r6, r7, 0x1f
/* 80162C14 0015FB54  7C 43 04 2E */	lfsx f2, r3, r0
/* 80162C18 0015FB58  54 E0 E0 06 */	slwi r0, r7, 0x1c
/* 80162C1C 0015FB5C  7C A3 44 2E */	lfsx f5, r3, r8
/* 80162C20 0015FB60  7C 06 00 50 */	subf r0, r6, r0
/* 80162C24 0015FB64  EC C4 00 24 */	fdivs f6, f4, f0
/* 80162C28 0015FB68  54 00 20 3E */	rotlwi r0, r0, 4
/* 80162C2C 0015FB6C  D0 24 00 14 */	stfs f1, 0x14(r4)
/* 80162C30 0015FB70  7C 00 32 14 */	add r0, r0, r6
/* 80162C34 0015FB74  38 A5 00 08 */	addi r5, r5, 8
/* 80162C38 0015FB78  54 00 10 3A */	slwi r0, r0, 2
/* 80162C3C 0015FB7C  EC 85 18 2A */	fadds f4, f5, f3
/* 80162C40 0015FB80  D0 C4 00 14 */	stfs f6, 0x14(r4)
/* 80162C44 0015FB84  EC 42 28 2A */	fadds f2, f2, f5
/* 80162C48 0015FB88  7C 63 04 2E */	lfsx f3, r3, r0
/* 80162C4C 0015FB8C  D0 24 00 18 */	stfs f1, 0x18(r4)
/* 80162C50 0015FB90  EC 84 00 24 */	fdivs f4, f4, f0
/* 80162C54 0015FB94  EC 43 10 2A */	fadds f2, f3, f2
/* 80162C58 0015FB98  D0 84 00 18 */	stfs f4, 0x18(r4)
/* 80162C5C 0015FB9C  D0 24 00 1C */	stfs f1, 0x1c(r4)
/* 80162C60 0015FBA0  EC 42 00 24 */	fdivs f2, f2, f0
/* 80162C64 0015FBA4  D0 44 00 1C */	stfs f2, 0x1c(r4)
/* 80162C68 0015FBA8  38 84 00 20 */	addi r4, r4, 0x20
/* 80162C6C 0015FBAC  42 00 FD 3C */	bdnz .L_801629A8
/* 80162C70 0015FBB0  C0 E1 00 14 */	lfs f7, 0x14(r1)
/* 80162C74 0015FBB4  38 00 00 02 */	li r0, 2
/* 80162C78 0015FBB8  C0 C1 00 18 */	lfs f6, 0x18(r1)
/* 80162C7C 0015FBBC  38 60 00 00 */	li r3, 0
/* 80162C80 0015FBC0  C0 A1 00 1C */	lfs f5, 0x1c(r1)
/* 80162C84 0015FBC4  38 80 00 00 */	li r4, 0
/* 80162C88 0015FBC8  C0 81 00 20 */	lfs f4, 0x20(r1)
/* 80162C8C 0015FBCC  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 80162C90 0015FBD0  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 80162C94 0015FBD4  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 80162C98 0015FBD8  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80162C9C 0015FBDC  D0 E1 00 7C */	stfs f7, 0x7c(r1)
/* 80162CA0 0015FBE0  C0 E1 00 34 */	lfs f7, 0x34(r1)
/* 80162CA4 0015FBE4  D0 C1 00 80 */	stfs f6, 0x80(r1)
/* 80162CA8 0015FBE8  C0 C1 00 38 */	lfs f6, 0x38(r1)
/* 80162CAC 0015FBEC  D0 A1 00 84 */	stfs f5, 0x84(r1)
/* 80162CB0 0015FBF0  C0 A1 00 3C */	lfs f5, 0x3c(r1)
/* 80162CB4 0015FBF4  D0 81 00 88 */	stfs f4, 0x88(r1)
/* 80162CB8 0015FBF8  C0 81 00 40 */	lfs f4, 0x40(r1)
/* 80162CBC 0015FBFC  D0 61 00 8C */	stfs f3, 0x8c(r1)
/* 80162CC0 0015FC00  C0 61 00 44 */	lfs f3, 0x44(r1)
/* 80162CC4 0015FC04  D0 41 00 90 */	stfs f2, 0x90(r1)
/* 80162CC8 0015FC08  C0 41 00 48 */	lfs f2, 0x48(r1)
/* 80162CCC 0015FC0C  D0 21 00 94 */	stfs f1, 0x94(r1)
/* 80162CD0 0015FC10  C0 21 00 4C */	lfs f1, 0x4c(r1)
/* 80162CD4 0015FC14  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80162CD8 0015FC18  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 80162CDC 0015FC1C  D0 E1 00 9C */	stfs f7, 0x9c(r1)
/* 80162CE0 0015FC20  C0 E2 A5 30 */	lfs f7, lbl_80518890@sda21(r2)
/* 80162CE4 0015FC24  D0 C1 00 A0 */	stfs f6, 0xa0(r1)
/* 80162CE8 0015FC28  D0 A1 00 A4 */	stfs f5, 0xa4(r1)
/* 80162CEC 0015FC2C  D0 81 00 A8 */	stfs f4, 0xa8(r1)
/* 80162CF0 0015FC30  D0 61 00 AC */	stfs f3, 0xac(r1)
/* 80162CF4 0015FC34  D0 41 00 B0 */	stfs f2, 0xb0(r1)
/* 80162CF8 0015FC38  D0 21 00 B4 */	stfs f1, 0xb4(r1)
/* 80162CFC 0015FC3C  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 80162D00 0015FC40  7C 09 03 A6 */	mtctr r0
.L_80162D04:
/* 80162D04 0015FC44  C0 1D 00 00 */	lfs f0, 0(r29)
/* 80162D08 0015FC48  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80162D0C 0015FC4C  40 81 00 0C */	ble .L_80162D18
/* 80162D10 0015FC50  FC E0 00 90 */	fmr f7, f0
/* 80162D14 0015FC54  7C 83 23 78 */	mr r3, r4
.L_80162D18:
/* 80162D18 0015FC58  C0 1D 00 04 */	lfs f0, 4(r29)
/* 80162D1C 0015FC5C  38 84 00 01 */	addi r4, r4, 1
/* 80162D20 0015FC60  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80162D24 0015FC64  40 81 00 0C */	ble .L_80162D30
/* 80162D28 0015FC68  FC E0 00 90 */	fmr f7, f0
/* 80162D2C 0015FC6C  7C 83 23 78 */	mr r3, r4
.L_80162D30:
/* 80162D30 0015FC70  C0 1D 00 08 */	lfs f0, 8(r29)
/* 80162D34 0015FC74  38 84 00 01 */	addi r4, r4, 1
/* 80162D38 0015FC78  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80162D3C 0015FC7C  40 81 00 0C */	ble .L_80162D48
/* 80162D40 0015FC80  FC E0 00 90 */	fmr f7, f0
/* 80162D44 0015FC84  7C 83 23 78 */	mr r3, r4
.L_80162D48:
/* 80162D48 0015FC88  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 80162D4C 0015FC8C  38 84 00 01 */	addi r4, r4, 1
/* 80162D50 0015FC90  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80162D54 0015FC94  40 81 00 0C */	ble .L_80162D60
/* 80162D58 0015FC98  FC E0 00 90 */	fmr f7, f0
/* 80162D5C 0015FC9C  7C 83 23 78 */	mr r3, r4
.L_80162D60:
/* 80162D60 0015FCA0  C0 1D 00 10 */	lfs f0, 0x10(r29)
/* 80162D64 0015FCA4  38 84 00 01 */	addi r4, r4, 1
/* 80162D68 0015FCA8  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80162D6C 0015FCAC  40 81 00 0C */	ble .L_80162D78
/* 80162D70 0015FCB0  FC E0 00 90 */	fmr f7, f0
/* 80162D74 0015FCB4  7C 83 23 78 */	mr r3, r4
.L_80162D78:
/* 80162D78 0015FCB8  C0 1D 00 14 */	lfs f0, 0x14(r29)
/* 80162D7C 0015FCBC  38 84 00 01 */	addi r4, r4, 1
/* 80162D80 0015FCC0  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80162D84 0015FCC4  40 81 00 0C */	ble .L_80162D90
/* 80162D88 0015FCC8  FC E0 00 90 */	fmr f7, f0
/* 80162D8C 0015FCCC  7C 83 23 78 */	mr r3, r4
.L_80162D90:
/* 80162D90 0015FCD0  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 80162D94 0015FCD4  38 84 00 01 */	addi r4, r4, 1
/* 80162D98 0015FCD8  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80162D9C 0015FCDC  40 81 00 0C */	ble .L_80162DA8
/* 80162DA0 0015FCE0  FC E0 00 90 */	fmr f7, f0
/* 80162DA4 0015FCE4  7C 83 23 78 */	mr r3, r4
.L_80162DA8:
/* 80162DA8 0015FCE8  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 80162DAC 0015FCEC  38 84 00 01 */	addi r4, r4, 1
/* 80162DB0 0015FCF0  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80162DB4 0015FCF4  40 81 00 0C */	ble .L_80162DC0
/* 80162DB8 0015FCF8  FC E0 00 90 */	fmr f7, f0
/* 80162DBC 0015FCFC  7C 83 23 78 */	mr r3, r4
.L_80162DC0:
/* 80162DC0 0015FD00  3B BD 00 20 */	addi r29, r29, 0x20
/* 80162DC4 0015FD04  38 84 00 01 */	addi r4, r4, 1
/* 80162DC8 0015FD08  42 00 FF 3C */	bdnz .L_80162D04
/* 80162DCC 0015FD0C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80162DD0 0015FD10  3C 00 43 30 */	lis r0, 0x4330
/* 80162DD4 0015FD14  90 61 00 DC */	stw r3, 0xdc(r1)
/* 80162DD8 0015FD18  C8 22 A5 38 */	lfd f1, lbl_80518898@sda21(r2)
/* 80162DDC 0015FD1C  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 80162DE0 0015FD20  C0 42 A5 1C */	lfs f2, lbl_8051887C@sda21(r2)
/* 80162DE4 0015FD24  C8 01 00 D8 */	lfd f0, 0xd8(r1)
/* 80162DE8 0015FD28  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162DEC 0015FD2C  EC 22 00 32 */	fmuls f1, f2, f0
/* 80162DF0 0015FD30  E3 E1 01 78 */	psq_l f31, 376(r1), 0, qr0
/* 80162DF4 0015FD34  CB E1 01 70 */	lfd f31, 0x170(r1)
/* 80162DF8 0015FD38  E3 C1 01 68 */	psq_l f30, 360(r1), 0, qr0
/* 80162DFC 0015FD3C  CB C1 01 60 */	lfd f30, 0x160(r1)
/* 80162E00 0015FD40  E3 A1 01 58 */	psq_l f29, 344(r1), 0, qr0
/* 80162E04 0015FD44  CB A1 01 50 */	lfd f29, 0x150(r1)
/* 80162E08 0015FD48  E3 81 01 48 */	psq_l f28, 328(r1), 0, qr0
/* 80162E0C 0015FD4C  CB 81 01 40 */	lfd f28, 0x140(r1)
/* 80162E10 0015FD50  E3 61 01 38 */	psq_l f27, 312(r1), 0, qr0
/* 80162E14 0015FD54  CB 61 01 30 */	lfd f27, 0x130(r1)
/* 80162E18 0015FD58  E3 41 01 28 */	psq_l f26, 296(r1), 0, qr0
/* 80162E1C 0015FD5C  CB 41 01 20 */	lfd f26, 0x120(r1)
/* 80162E20 0015FD60  E3 21 01 18 */	psq_l f25, 280(r1), 0, qr0
/* 80162E24 0015FD64  CB 21 01 10 */	lfd f25, 0x110(r1)
/* 80162E28 0015FD68  E3 01 01 08 */	psq_l f24, 264(r1), 0, qr0
/* 80162E2C 0015FD6C  CB 01 01 00 */	lfd f24, 0x100(r1)
/* 80162E30 0015FD70  BB 41 00 E8 */	lmw r26, 0xe8(r1)
/* 80162E34 0015FD74  80 01 01 84 */	lwz r0, 0x184(r1)
/* 80162E38 0015FD78  7C 08 03 A6 */	mtlr r0
/* 80162E3C 0015FD7C  38 21 01 80 */	addi r1, r1, 0x180
/* 80162E40 0015FD80  4E 80 00 20 */	blr 

.global checkBeamCollision__Q24Game6MapMgrFRQ34Game6MapMgr16BeamCollisionArg
checkBeamCollision__Q24Game6MapMgrFRQ34Game6MapMgr16BeamCollisionArg:
/* 80162E44 0015FD84  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80162E48 0015FD88  7C 08 02 A6 */	mflr r0
/* 80162E4C 0015FD8C  90 01 01 14 */	stw r0, 0x114(r1)
/* 80162E50 0015FD90  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 80162E54 0015FD94  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 80162E58 0015FD98  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 80162E5C 0015FD9C  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 80162E60 0015FDA0  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 80162E64 0015FDA4  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 80162E68 0015FDA8  BF 41 00 C8 */	stmw r26, 0xc8(r1)
/* 80162E6C 0015FDAC  38 00 00 00 */	li r0, 0
/* 80162E70 0015FDB0  C0 22 A5 40 */	lfs f1, lbl_805188A0@sda21(r2)
/* 80162E74 0015FDB4  98 04 00 20 */	stb r0, 0x20(r4)
/* 80162E78 0015FDB8  7C 9B 23 78 */	mr r27, r4
/* 80162E7C 0015FDBC  C0 02 A5 0C */	lfs f0, lbl_8051886C@sda21(r2)
/* 80162E80 0015FDC0  7C 7A 1B 78 */	mr r26, r3
/* 80162E84 0015FDC4  D0 24 00 24 */	stfs f1, 0x24(r4)
/* 80162E88 0015FDC8  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 80162E8C 0015FDCC  C0 24 00 04 */	lfs f1, 4(r4)
/* 80162E90 0015FDD0  C0 64 00 14 */	lfs f3, 0x14(r4)
/* 80162E94 0015FDD4  EC 82 08 28 */	fsubs f4, f2, f1
/* 80162E98 0015FDD8  C0 44 00 08 */	lfs f2, 8(r4)
/* 80162E9C 0015FDDC  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 80162EA0 0015FDE0  EC A3 10 28 */	fsubs f5, f3, f2
/* 80162EA4 0015FDE4  C0 E4 00 00 */	lfs f7, 0(r4)
/* 80162EA8 0015FDE8  EC 44 01 32 */	fmuls f2, f4, f4
/* 80162EAC 0015FDEC  EC 61 38 28 */	fsubs f3, f1, f7
/* 80162EB0 0015FDF0  EC C5 01 72 */	fmuls f6, f5, f5
/* 80162EB4 0015FDF4  EC 23 10 FA */	fmadds f1, f3, f3, f2
/* 80162EB8 0015FDF8  EC 46 08 2A */	fadds f2, f6, f1
/* 80162EBC 0015FDFC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80162EC0 0015FE00  40 81 00 14 */	ble .L_80162ED4
/* 80162EC4 0015FE04  40 81 00 14 */	ble .L_80162ED8
/* 80162EC8 0015FE08  FC 00 10 34 */	frsqrte f0, f2
/* 80162ECC 0015FE0C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80162ED0 0015FE10  48 00 00 08 */	b .L_80162ED8
.L_80162ED4:
/* 80162ED4 0015FE14  FC 40 00 90 */	fmr f2, f0
.L_80162ED8:
/* 80162ED8 0015FE18  C0 02 A5 0C */	lfs f0, lbl_8051886C@sda21(r2)
/* 80162EDC 0015FE1C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80162EE0 0015FE20  40 81 00 1C */	ble .L_80162EFC
/* 80162EE4 0015FE24  C0 02 A5 44 */	lfs f0, lbl_805188A4@sda21(r2)
/* 80162EE8 0015FE28  EC 00 10 24 */	fdivs f0, f0, f2
/* 80162EEC 0015FE2C  EC 63 00 32 */	fmuls f3, f3, f0
/* 80162EF0 0015FE30  EC 84 00 32 */	fmuls f4, f4, f0
/* 80162EF4 0015FE34  EC A5 00 32 */	fmuls f5, f5, f0
/* 80162EF8 0015FE38  48 00 00 08 */	b .L_80162F00
.L_80162EFC:
/* 80162EFC 0015FE3C  FC 40 00 90 */	fmr f2, f0
.L_80162F00:
/* 80162F00 0015FE40  C3 A2 A5 0C */	lfs f29, lbl_8051886C@sda21(r2)
/* 80162F04 0015FE44  FC 1D 10 00 */	fcmpu cr0, f29, f2
/* 80162F08 0015FE48  41 82 01 B4 */	beq .L_801630BC
/* 80162F0C 0015FE4C  C0 02 A5 48 */	lfs f0, lbl_805188A8@sda21(r2)
/* 80162F10 0015FE50  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80162F14 0015FE54  C0 3B 00 18 */	lfs f1, 0x18(r27)
/* 80162F18 0015FE58  3B A3 71 A0 */	addi r29, r3, sincosTable___5JMath@l
/* 80162F1C 0015FE5C  EC C2 00 24 */	fdivs f6, f2, f0
/* 80162F20 0015FE60  C3 C2 A5 44 */	lfs f30, lbl_805188A4@sda21(r2)
/* 80162F24 0015FE64  D0 E1 00 14 */	stfs f7, 0x14(r1)
/* 80162F28 0015FE68  3B C1 00 14 */	addi r30, r1, 0x14
/* 80162F2C 0015FE6C  C3 E2 A5 4C */	lfs f31, lbl_805188AC@sda21(r2)
/* 80162F30 0015FE70  3B E1 00 08 */	addi r31, r1, 8
/* 80162F34 0015FE74  C0 1B 00 04 */	lfs f0, 4(r27)
/* 80162F38 0015FE78  EC 43 01 B2 */	fmuls f2, f3, f6
/* 80162F3C 0015FE7C  EC 64 01 B2 */	fmuls f3, f4, f6
/* 80162F40 0015FE80  3B 80 00 00 */	li r28, 0
/* 80162F44 0015FE84  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80162F48 0015FE88  EC 85 01 B2 */	fmuls f4, f5, f6
/* 80162F4C 0015FE8C  C0 1B 00 08 */	lfs f0, 8(r27)
/* 80162F50 0015FE90  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80162F54 0015FE94  D0 21 00 20 */	stfs f1, 0x20(r1)
.L_80162F58:
/* 80162F58 0015FE98  D0 41 00 08 */	stfs f2, 8(r1)
/* 80162F5C 0015FE9C  38 A0 00 00 */	li r5, 0
/* 80162F60 0015FEA0  C0 1D 08 00 */	lfs f0, 0x800(r29)
/* 80162F64 0015FEA4  38 00 FF FF */	li r0, -1
/* 80162F68 0015FEA8  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 80162F6C 0015FEAC  7F 43 D3 78 */	mr r3, r26
/* 80162F70 0015FEB0  FC 20 F0 90 */	fmr f1, f30
/* 80162F74 0015FEB4  38 81 00 24 */	addi r4, r1, 0x24
/* 80162F78 0015FEB8  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 80162F7C 0015FEBC  C0 5B 00 00 */	lfs f2, 0(r27)
/* 80162F80 0015FEC0  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80162F84 0015FEC4  C0 5B 00 04 */	lfs f2, 4(r27)
/* 80162F88 0015FEC8  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80162F8C 0015FECC  C0 5B 00 08 */	lfs f2, 8(r27)
/* 80162F90 0015FED0  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80162F94 0015FED4  93 C1 00 24 */	stw r30, 0x24(r1)
/* 80162F98 0015FED8  93 E1 00 28 */	stw r31, 0x28(r1)
/* 80162F9C 0015FEDC  D3 C1 00 2C */	stfs f30, 0x2c(r1)
/* 80162FA0 0015FEE0  D3 A1 00 30 */	stfs f29, 0x30(r1)
/* 80162FA4 0015FEE4  90 A1 00 34 */	stw r5, 0x34(r1)
/* 80162FA8 0015FEE8  90 A1 00 68 */	stw r5, 0x68(r1)
/* 80162FAC 0015FEEC  98 A1 00 98 */	stb r5, 0x98(r1)
/* 80162FB0 0015FEF0  98 A1 00 3D */	stb r5, 0x3d(r1)
/* 80162FB4 0015FEF4  98 A1 00 3C */	stb r5, 0x3c(r1)
/* 80162FB8 0015FEF8  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 80162FBC 0015FEFC  90 A1 00 38 */	stw r5, 0x38(r1)
/* 80162FC0 0015FF00  98 A1 00 B4 */	stb r5, 0xb4(r1)
/* 80162FC4 0015FF04  90 A1 00 B8 */	stw r5, 0xb8(r1)
/* 80162FC8 0015FF08  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80162FCC 0015FF0C  D3 E1 00 54 */	stfs f31, 0x54(r1)
/* 80162FD0 0015FF10  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80162FD4 0015FF14  90 A1 00 70 */	stw r5, 0x70(r1)
/* 80162FD8 0015FF18  98 A1 00 3E */	stb r5, 0x3e(r1)
/* 80162FDC 0015FF1C  81 9A 00 04 */	lwz r12, 4(r26)
/* 80162FE0 0015FF20  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80162FE4 0015FF24  7D 89 03 A6 */	mtctr r12
/* 80162FE8 0015FF28  4E 80 04 21 */	bctrl 
/* 80162FEC 0015FF2C  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 80162FF0 0015FF30  28 03 00 00 */	cmplwi r3, 0
/* 80162FF4 0015FF34  41 82 00 10 */	beq .L_80163004
/* 80162FF8 0015FF38  C0 22 A5 44 */	lfs f1, lbl_805188A4@sda21(r2)
/* 80162FFC 0015FF3C  38 81 00 24 */	addi r4, r1, 0x24
/* 80163000 0015FF40  48 06 2B B9 */	bl traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
.L_80163004:
/* 80163004 0015FF44  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80163008 0015FF48  28 00 00 00 */	cmplwi r0, 0
/* 8016300C 0015FF4C  40 82 00 1C */	bne .L_80163028
/* 80163010 0015FF50  80 01 00 68 */	lwz r0, 0x68(r1)
/* 80163014 0015FF54  28 00 00 00 */	cmplwi r0, 0
/* 80163018 0015FF58  40 82 00 10 */	bne .L_80163028
/* 8016301C 0015FF5C  80 01 00 70 */	lwz r0, 0x70(r1)
/* 80163020 0015FF60  28 00 00 00 */	cmplwi r0, 0
/* 80163024 0015FF64  41 82 00 10 */	beq .L_80163034
.L_80163028:
/* 80163028 0015FF68  38 00 00 01 */	li r0, 1
/* 8016302C 0015FF6C  98 1B 00 20 */	stb r0, 0x20(r27)
/* 80163030 0015FF70  48 00 00 34 */	b .L_80163064
.L_80163034:
/* 80163034 0015FF74  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80163038 0015FF78  3B 9C 00 01 */	addi r28, r28, 1
/* 8016303C 0015FF7C  2C 1C 00 1E */	cmpwi r28, 0x1e
/* 80163040 0015FF80  D0 1B 00 00 */	stfs f0, 0(r27)
/* 80163044 0015FF84  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80163048 0015FF88  D0 1B 00 04 */	stfs f0, 4(r27)
/* 8016304C 0015FF8C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80163050 0015FF90  D0 1B 00 08 */	stfs f0, 8(r27)
/* 80163054 0015FF94  C0 41 00 08 */	lfs f2, 8(r1)
/* 80163058 0015FF98  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8016305C 0015FF9C  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 80163060 0015FFA0  41 80 FE F8 */	blt .L_80162F58
.L_80163064:
/* 80163064 0015FFA4  C0 3B 00 10 */	lfs f1, 0x10(r27)
/* 80163068 0015FFA8  C0 1B 00 04 */	lfs f0, 4(r27)
/* 8016306C 0015FFAC  C0 7B 00 14 */	lfs f3, 0x14(r27)
/* 80163070 0015FFB0  EC 81 00 28 */	fsubs f4, f1, f0
/* 80163074 0015FFB4  C0 5B 00 08 */	lfs f2, 8(r27)
/* 80163078 0015FFB8  C0 3B 00 0C */	lfs f1, 0xc(r27)
/* 8016307C 0015FFBC  C0 1B 00 00 */	lfs f0, 0(r27)
/* 80163080 0015FFC0  EC 43 10 28 */	fsubs f2, f3, f2
/* 80163084 0015FFC4  EC 64 01 32 */	fmuls f3, f4, f4
/* 80163088 0015FFC8  EC 21 00 28 */	fsubs f1, f1, f0
/* 8016308C 0015FFCC  C0 02 A5 0C */	lfs f0, lbl_8051886C@sda21(r2)
/* 80163090 0015FFD0  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80163094 0015FFD4  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 80163098 0015FFD8  EC 22 08 2A */	fadds f1, f2, f1
/* 8016309C 0015FFDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801630A0 0015FFE0  40 81 00 14 */	ble .L_801630B4
/* 801630A4 0015FFE4  40 81 00 14 */	ble .L_801630B8
/* 801630A8 0015FFE8  FC 00 08 34 */	frsqrte f0, f1
/* 801630AC 0015FFEC  EC 20 00 72 */	fmuls f1, f0, f1
/* 801630B0 0015FFF0  48 00 00 08 */	b .L_801630B8
.L_801630B4:
/* 801630B4 0015FFF4  FC 20 00 90 */	fmr f1, f0
.L_801630B8:
/* 801630B8 0015FFF8  D0 3B 00 24 */	stfs f1, 0x24(r27)
.L_801630BC:
/* 801630BC 0015FFFC  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 801630C0 00160000  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 801630C4 00160004  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 801630C8 00160008  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 801630CC 0016000C  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 801630D0 00160010  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 801630D4 00160014  BB 41 00 C8 */	lmw r26, 0xc8(r1)
/* 801630D8 00160018  80 01 01 14 */	lwz r0, 0x114(r1)
/* 801630DC 0016001C  7C 08 03 A6 */	mtlr r0
/* 801630E0 00160020  38 21 01 10 */	addi r1, r1, 0x110
/* 801630E4 00160024  4E 80 00 20 */	blr 

.global load__Q24Game11ShapeMapMgrFRQ34Game11ShapeMapMgr7LoadArg
load__Q24Game11ShapeMapMgrFRQ34Game11ShapeMapMgr7LoadArg:
/* 801630E8 00160028  94 21 D4 D0 */	stwu r1, -0x2b30(r1)
/* 801630EC 0016002C  7C 08 02 A6 */	mflr r0
/* 801630F0 00160030  3C A0 80 48 */	lis r5, lbl_8047E190@ha
/* 801630F4 00160034  90 01 2B 34 */	stw r0, 0x2b34(r1)
/* 801630F8 00160038  BF 41 2B 18 */	stmw r26, 0x2b18(r1)
/* 801630FC 0016003C  7C 7F 1B 78 */	mr r31, r3
/* 80163100 00160040  7C 9D 23 78 */	mr r29, r4
/* 80163104 00160044  3B C5 E1 90 */	addi r30, r5, lbl_8047E190@l
/* 80163108 00160048  38 82 A5 00 */	addi r4, r2, lbl_80518860@sda21
/* 8016310C 0016004C  38 A0 00 00 */	li r5, 0
/* 80163110 00160050  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80163114 00160054  48 2C 02 49 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80163118 00160058  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8016311C 0016005C  38 82 A5 50 */	addi r4, r2, lbl_805188B0@sda21
/* 80163120 00160060  38 A0 00 00 */	li r5, 0
/* 80163124 00160064  48 2C 02 39 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80163128 00160068  80 BD 00 00 */	lwz r5, 0(r29)
/* 8016312C 0016006C  38 61 08 10 */	addi r3, r1, 0x810
/* 80163130 00160070  38 9E 00 24 */	addi r4, r30, 0x24
/* 80163134 00160074  4C C6 31 82 */	crclr 6
/* 80163138 00160078  4B F6 43 01 */	bl sprintf
/* 8016313C 0016007C  38 61 08 10 */	addi r3, r1, 0x810
/* 80163140 00160080  38 80 00 01 */	li r4, 1
/* 80163144 00160084  38 A0 00 00 */	li r5, 0
/* 80163148 00160088  38 C0 00 01 */	li r6, 1
/* 8016314C 0016008C  4B EB 7F E5 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 80163150 00160090  28 03 00 00 */	cmplwi r3, 0
/* 80163154 00160094  40 82 00 54 */	bne .L_801631A8
/* 80163158 00160098  38 00 00 0C */	li r0, 0xc
/* 8016315C 0016009C  38 60 00 00 */	li r3, 0
/* 80163160 001600A0  7C 09 03 A6 */	mtctr r0
.L_80163164:
/* 80163164 001600A4  38 63 00 08 */	addi r3, r3, 8
/* 80163168 001600A8  42 00 FF FC */	bdnz .L_80163164
/* 8016316C 001600AC  20 03 00 64 */	subfic r0, r3, 0x64
/* 80163170 001600B0  7C 09 03 A6 */	mtctr r0
/* 80163174 001600B4  2C 03 00 64 */	cmpwi r3, 0x64
/* 80163178 001600B8  40 80 00 08 */	bge .L_80163180
.L_8016317C:
/* 8016317C 001600BC  42 00 00 00 */	bdnz .L_8016317C
.L_80163180:
/* 80163180 001600C0  80 BD 00 00 */	lwz r5, 0(r29)
/* 80163184 001600C4  38 61 08 10 */	addi r3, r1, 0x810
/* 80163188 001600C8  38 9E 00 30 */	addi r4, r30, 0x30
/* 8016318C 001600CC  4C C6 31 82 */	crclr 6
/* 80163190 001600D0  4B F6 42 A9 */	bl sprintf
/* 80163194 001600D4  38 61 08 10 */	addi r3, r1, 0x810
/* 80163198 001600D8  38 80 00 01 */	li r4, 1
/* 8016319C 001600DC  38 A0 00 00 */	li r5, 0
/* 801631A0 001600E0  38 C0 00 01 */	li r6, 1
/* 801631A4 001600E4  4B EB 7F 8D */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
.L_801631A8:
/* 801631A8 001600E8  28 03 00 00 */	cmplwi r3, 0
/* 801631AC 001600EC  40 82 00 18 */	bne .L_801631C4
/* 801631B0 001600F0  38 7E 00 0C */	addi r3, r30, 0xc
/* 801631B4 001600F4  38 BE 00 18 */	addi r5, r30, 0x18
/* 801631B8 001600F8  38 80 02 D0 */	li r4, 0x2d0
/* 801631BC 001600FC  4C C6 31 82 */	crclr 6
/* 801631C0 00160100  4B EC 74 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801631C4:
/* 801631C4 00160104  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801631C8 00160108  38 82 A5 50 */	addi r4, r2, lbl_805188B0@sda21
/* 801631CC 0016010C  48 2C 01 99 */	bl heapStatusEnd__6SystemFPc
/* 801631D0 00160110  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801631D4 00160114  38 9E 00 3C */	addi r4, r30, 0x3c
/* 801631D8 00160118  38 A0 00 00 */	li r5, 0
/* 801631DC 0016011C  48 2C 01 81 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801631E0 00160120  38 7E 00 48 */	addi r3, r30, 0x48
/* 801631E4 00160124  38 80 00 00 */	li r4, 0
/* 801631E8 00160128  4B EB FE 31 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 801631EC 0016012C  7C 7B 1B 79 */	or. r27, r3, r3
/* 801631F0 00160130  38 80 00 00 */	li r4, 0
/* 801631F4 00160134  41 82 00 14 */	beq .L_80163208
/* 801631F8 00160138  80 1D 00 00 */	lwz r0, 0(r29)
/* 801631FC 0016013C  28 00 00 00 */	cmplwi r0, 0
/* 80163200 00160140  41 82 00 08 */	beq .L_80163208
/* 80163204 00160144  38 80 00 01 */	li r4, 1
.L_80163208:
/* 80163208 00160148  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8016320C 0016014C  40 82 00 18 */	bne .L_80163224
/* 80163210 00160150  38 7E 00 0C */	addi r3, r30, 0xc
/* 80163214 00160154  38 BE 00 18 */	addi r5, r30, 0x18
/* 80163218 00160158  38 80 02 D9 */	li r4, 0x2d9
/* 8016321C 0016015C  4C C6 31 82 */	crclr 6
/* 80163220 00160160  4B EC 74 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80163224:
/* 80163224 00160164  7F 63 DB 78 */	mr r3, r27
/* 80163228 00160168  3C 80 20 04 */	lis r4, 0x2004
/* 8016322C 0016016C  4B F0 C6 69 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 80163230 00160170  3C 80 00 04 */	lis r4, 4
/* 80163234 00160174  7C 7B 1B 78 */	mr r27, r3
/* 80163238 00160178  4B F2 06 A1 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 8016323C 0016017C  7F 63 DB 78 */	mr r3, r27
/* 80163240 00160180  4B F2 07 F1 */	bl makeSharedDL__12J3DModelDataFv
/* 80163244 00160184  38 60 00 14 */	li r3, 0x14
/* 80163248 00160188  4B EC 0C 5D */	bl __nw__FUl
/* 8016324C 0016018C  7C 60 1B 79 */	or. r0, r3, r3
/* 80163250 00160190  41 82 00 18 */	beq .L_80163268
/* 80163254 00160194  7F 64 DB 78 */	mr r4, r27
/* 80163258 00160198  3C A0 00 02 */	lis r5, 2
/* 8016325C 0016019C  38 C0 00 02 */	li r6, 2
/* 80163260 001601A0  48 2D AF 79 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 80163264 001601A4  7C 60 1B 78 */	mr r0, r3
.L_80163268:
/* 80163268 001601A8  90 1F 00 34 */	stw r0, 0x34(r31)
/* 8016326C 001601AC  38 80 02 00 */	li r4, 0x200
/* 80163270 001601B0  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 80163274 001601B4  80 63 00 08 */	lwz r3, 8(r3)
/* 80163278 001601B8  4B F0 34 61 */	bl newDifferedDisplayList__8J3DModelFUl
/* 8016327C 001601BC  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 80163280 001601C0  80 63 00 08 */	lwz r3, 8(r3)
/* 80163284 001601C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80163288 001601C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8016328C 001601CC  7D 89 03 A6 */	mtctr r12
/* 80163290 001601D0  4E 80 04 21 */	bctrl 
/* 80163294 001601D4  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 80163298 001601D8  80 63 00 08 */	lwz r3, 8(r3)
/* 8016329C 001601DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801632A0 001601E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801632A4 001601E4  7D 89 03 A6 */	mtctr r12
/* 801632A8 001601E8  4E 80 04 21 */	bctrl 
/* 801632AC 001601EC  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 801632B0 001601F0  80 63 00 08 */	lwz r3, 8(r3)
/* 801632B4 001601F4  4B F0 36 71 */	bl makeDL__8J3DModelFv
/* 801632B8 001601F8  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 801632BC 001601FC  80 63 00 08 */	lwz r3, 8(r3)
/* 801632C0 00160200  4B F0 35 35 */	bl lock__8J3DModelFv
/* 801632C4 00160204  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801632C8 00160208  38 9E 00 3C */	addi r4, r30, 0x3c
/* 801632CC 0016020C  48 2C 00 99 */	bl heapStatusEnd__6SystemFPc
/* 801632D0 00160210  38 60 00 40 */	li r3, 0x40
/* 801632D4 00160214  4B EC 0B D1 */	bl __nw__FUl
/* 801632D8 00160218  7C 60 1B 79 */	or. r0, r3, r3
/* 801632DC 0016021C  41 82 00 10 */	beq .L_801632EC
/* 801632E0 00160220  38 80 00 02 */	li r4, 2
/* 801632E4 00160224  4B FC 0D 35 */	bl __ct__Q34Game4Farm7FarmMgrFUl
/* 801632E8 00160228  7C 60 1B 78 */	mr r0, r3
.L_801632EC:
/* 801632EC 0016022C  90 0D 91 D8 */	stw r0, farmMgr__Q24Game4Farm@sda21(r13)
/* 801632F0 00160230  3B 60 00 00 */	li r27, 0
.L_801632F4:
/* 801632F4 00160234  38 61 06 10 */	addi r3, r1, 0x610
/* 801632F8 00160238  38 9E 00 54 */	addi r4, r30, 0x54
/* 801632FC 0016023C  38 BB 00 01 */	addi r5, r27, 1
/* 80163300 00160240  4C C6 31 82 */	crclr 6
/* 80163304 00160244  4B F6 41 35 */	bl sprintf
/* 80163308 00160248  38 61 06 10 */	addi r3, r1, 0x610
/* 8016330C 0016024C  38 80 00 00 */	li r4, 0
/* 80163310 00160250  4B EB FD 09 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 80163314 00160254  7C 64 1B 79 */	or. r4, r3, r3
/* 80163318 00160258  41 82 00 18 */	beq .L_80163330
/* 8016331C 0016025C  80 6D 91 D8 */	lwz r3, farmMgr__Q24Game4Farm@sda21(r13)
/* 80163320 00160260  4B FC 10 79 */	bl addFarmBmd__Q34Game4Farm7FarmMgrFPv
/* 80163324 00160264  3B 7B 00 01 */	addi r27, r27, 1
/* 80163328 00160268  2C 1B 00 0A */	cmpwi r27, 0xa
/* 8016332C 0016026C  41 80 FF C8 */	blt .L_801632F4
.L_80163330:
/* 80163330 00160270  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 80163334 00160274  38 80 00 00 */	li r4, 0
/* 80163338 00160278  48 2D B0 E1 */	bl enableMaterialAnim__Q28SysShape5ModelFi
/* 8016333C 0016027C  38 00 00 00 */	li r0, 0
/* 80163340 00160280  3B 60 00 00 */	li r27, 0
/* 80163344 00160284  90 1F 00 24 */	stw r0, 0x24(r31)
/* 80163348 00160288  90 1F 00 2C */	stw r0, 0x2c(r31)
.L_8016334C:
/* 8016334C 0016028C  38 61 01 10 */	addi r3, r1, 0x110
/* 80163350 00160290  38 9E 00 60 */	addi r4, r30, 0x60
/* 80163354 00160294  38 BB 00 01 */	addi r5, r27, 1
/* 80163358 00160298  4C C6 31 82 */	crclr 6
/* 8016335C 0016029C  4B F6 40 DD */	bl sprintf
/* 80163360 001602A0  38 61 01 10 */	addi r3, r1, 0x110
/* 80163364 001602A4  38 80 00 00 */	li r4, 0
/* 80163368 001602A8  4B EB FC B1 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 8016336C 001602AC  28 03 00 00 */	cmplwi r3, 0
/* 80163370 001602B0  41 82 00 1C */	beq .L_8016338C
/* 80163374 001602B4  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80163378 001602B8  3B 7B 00 01 */	addi r27, r27, 1
/* 8016337C 001602BC  2C 1B 00 64 */	cmpwi r27, 0x64
/* 80163380 001602C0  38 03 00 01 */	addi r0, r3, 1
/* 80163384 001602C4  90 1F 00 24 */	stw r0, 0x24(r31)
/* 80163388 001602C8  41 80 FF C4 */	blt .L_8016334C
.L_8016338C:
/* 8016338C 001602CC  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 80163390 001602D0  2C 00 00 00 */	cmpwi r0, 0
/* 80163394 001602D4  40 81 00 E4 */	ble .L_80163478
/* 80163398 001602D8  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8016339C 001602DC  83 9F 00 24 */	lwz r28, 0x24(r31)
/* 801633A0 001602E0  57 83 20 36 */	slwi r3, r28, 4
/* 801633A4 001602E4  38 63 00 10 */	addi r3, r3, 0x10
/* 801633A8 001602E8  4B EC 0C 05 */	bl __nwa__FUl
/* 801633AC 001602EC  3C 80 80 43 */	lis r4, __ct__Q23Sys15MatTexAnimationFv@ha
/* 801633B0 001602F0  7F 87 E3 78 */	mr r7, r28
/* 801633B4 001602F4  38 84 41 34 */	addi r4, r4, __ct__Q23Sys15MatTexAnimationFv@l
/* 801633B8 001602F8  38 A0 00 00 */	li r5, 0
/* 801633BC 001602FC  38 C0 00 10 */	li r6, 0x10
/* 801633C0 00160300  4B F5 E6 31 */	bl __construct_new_array
/* 801633C4 00160304  90 7F 00 28 */	stw r3, 0x28(r31)
/* 801633C8 00160308  83 9F 00 2C */	lwz r28, 0x2c(r31)
/* 801633CC 0016030C  1C 7C 00 0C */	mulli r3, r28, 0xc
/* 801633D0 00160310  38 63 00 10 */	addi r3, r3, 0x10
/* 801633D4 00160314  4B EC 0B D9 */	bl __nwa__FUl
/* 801633D8 00160318  3C 80 80 16 */	lis r4, __ct__Q23Sys15MatLoopAnimatorFv@ha
/* 801633DC 0016031C  7F 87 E3 78 */	mr r7, r28
/* 801633E0 00160320  38 84 38 EC */	addi r4, r4, __ct__Q23Sys15MatLoopAnimatorFv@l
/* 801633E4 00160324  38 A0 00 00 */	li r5, 0
/* 801633E8 00160328  38 C0 00 0C */	li r6, 0xc
/* 801633EC 0016032C  4B F5 E6 05 */	bl __construct_new_array
/* 801633F0 00160330  3B 60 00 00 */	li r27, 0
/* 801633F4 00160334  90 7F 00 30 */	stw r3, 0x30(r31)
/* 801633F8 00160338  7F 7C DB 78 */	mr r28, r27
/* 801633FC 0016033C  3B 40 00 00 */	li r26, 0
/* 80163400 00160340  48 00 00 6C */	b .L_8016346C
.L_80163404:
/* 80163404 00160344  38 61 00 10 */	addi r3, r1, 0x10
/* 80163408 00160348  38 9E 00 60 */	addi r4, r30, 0x60
/* 8016340C 0016034C  38 BA 00 01 */	addi r5, r26, 1
/* 80163410 00160350  4C C6 31 82 */	crclr 6
/* 80163414 00160354  4B F6 40 25 */	bl sprintf
/* 80163418 00160358  38 61 00 10 */	addi r3, r1, 0x10
/* 8016341C 0016035C  38 80 00 00 */	li r4, 0
/* 80163420 00160360  4B EB FB F9 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 80163424 00160364  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 80163428 00160368  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 8016342C 0016036C  80 A4 00 08 */	lwz r5, 8(r4)
/* 80163430 00160370  7C 64 1B 78 */	mr r4, r3
/* 80163434 00160374  7C 60 DA 14 */	add r3, r0, r27
/* 80163438 00160378  80 A5 00 04 */	lwz r5, 4(r5)
/* 8016343C 0016037C  48 2D 0B E5 */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 80163440 00160380  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 80163444 00160384  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 80163448 00160388  7C 63 E2 14 */	add r3, r3, r28
/* 8016344C 0016038C  81 83 00 00 */	lwz r12, 0(r3)
/* 80163450 00160390  7C 80 DA 14 */	add r4, r0, r27
/* 80163454 00160394  81 8C 00 08 */	lwz r12, 8(r12)
/* 80163458 00160398  7D 89 03 A6 */	mtctr r12
/* 8016345C 0016039C  4E 80 04 21 */	bctrl 
/* 80163460 001603A0  3B 7B 00 10 */	addi r27, r27, 0x10
/* 80163464 001603A4  3B 9C 00 0C */	addi r28, r28, 0xc
/* 80163468 001603A8  3B 5A 00 01 */	addi r26, r26, 1
.L_8016346C:
/* 8016346C 001603AC  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 80163470 001603B0  7C 1A 00 00 */	cmpw r26, r0
/* 80163474 001603B4  41 80 FF 90 */	blt .L_80163404
.L_80163478:
/* 80163478 001603B8  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8016347C 001603BC  80 63 00 08 */	lwz r3, 8(r3)
/* 80163480 001603C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80163484 001603C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80163488 001603C8  7D 89 03 A6 */	mtctr r12
/* 8016348C 001603CC  4E 80 04 21 */	bctrl 
/* 80163490 001603D0  80 BD 00 04 */	lwz r5, 4(r29)
/* 80163494 001603D4  38 61 04 10 */	addi r3, r1, 0x410
/* 80163498 001603D8  38 9E 00 70 */	addi r4, r30, 0x70
/* 8016349C 001603DC  4C C6 31 82 */	crclr 6
/* 801634A0 001603E0  4B F6 3F 99 */	bl sprintf
/* 801634A4 001603E4  38 00 00 00 */	li r0, 0
/* 801634A8 001603E8  38 61 04 10 */	addi r3, r1, 0x410
/* 801634AC 001603EC  90 01 00 08 */	stw r0, 8(r1)
/* 801634B0 001603F0  38 80 00 00 */	li r4, 0
/* 801634B4 001603F4  38 A0 00 00 */	li r5, 0
/* 801634B8 001603F8  38 C0 00 00 */	li r6, 0
/* 801634BC 001603FC  38 E0 00 00 */	li r7, 0
/* 801634C0 00160400  39 00 00 02 */	li r8, 2
/* 801634C4 00160404  39 20 00 00 */	li r9, 0
/* 801634C8 00160408  39 40 00 00 */	li r10, 0
/* 801634CC 0016040C  4B EB BC BD */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801634D0 00160410  7C 7C 1B 79 */	or. r28, r3, r3
/* 801634D4 00160414  41 82 00 4C */	beq .L_80163520
/* 801634D8 00160418  7F 84 E3 78 */	mr r4, r28
/* 801634DC 0016041C  38 61 26 F0 */	addi r3, r1, 0x26f0
/* 801634E0 00160420  38 A0 FF FF */	li r5, -1
/* 801634E4 00160424  48 2B 24 15 */	bl __ct__9RamStreamFPvi
/* 801634E8 00160428  38 00 00 01 */	li r0, 1
/* 801634EC 0016042C  2C 00 00 01 */	cmpwi r0, 1
/* 801634F0 00160430  90 01 26 FC */	stw r0, 0x26fc(r1)
/* 801634F4 00160434  40 82 00 0C */	bne .L_80163500
/* 801634F8 00160438  38 00 00 00 */	li r0, 0
/* 801634FC 0016043C  90 01 2B 04 */	stw r0, 0x2b04(r1)
.L_80163500:
/* 80163500 00160440  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80163504 00160444  28 03 00 00 */	cmplwi r3, 0
/* 80163508 00160448  41 82 00 10 */	beq .L_80163518
/* 8016350C 0016044C  48 05 1B 61 */	bl getLightMgr__Q24Game10GameSystemFv
/* 80163510 00160450  38 81 26 F0 */	addi r4, r1, 0x26f0
/* 80163514 00160454  4B FB C0 8D */	bl loadParm__Q24Game12GameLightMgrFR6Stream
.L_80163518:
/* 80163518 00160458  7F 83 E3 78 */	mr r3, r28
/* 8016351C 0016045C  4B EC 0B BD */	bl __dla__FPv
.L_80163520:
/* 80163520 00160460  80 BD 00 00 */	lwz r5, 0(r29)
/* 80163524 00160464  38 61 02 10 */	addi r3, r1, 0x210
/* 80163528 00160468  38 9E 00 80 */	addi r4, r30, 0x80
/* 8016352C 0016046C  4C C6 31 82 */	crclr 6
/* 80163530 00160470  4B F6 3F 09 */	bl sprintf
/* 80163534 00160474  80 AD 88 2C */	lwz r5, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80163538 00160478  38 61 02 10 */	addi r3, r1, 0x210
/* 8016353C 0016047C  38 80 00 01 */	li r4, 1
/* 80163540 00160480  38 C0 00 02 */	li r6, 2
/* 80163544 00160484  4B EB 7B ED */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 80163548 00160488  7C 7C 1B 79 */	or. r28, r3, r3
/* 8016354C 0016048C  41 82 01 38 */	beq .L_80163684
/* 80163550 00160490  7F 84 E3 78 */	mr r4, r28
/* 80163554 00160494  38 7E 00 90 */	addi r3, r30, 0x90
/* 80163558 00160498  4B EB FA C1 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 8016355C 0016049C  7C 7A 1B 79 */	or. r26, r3, r3
/* 80163560 001604A0  40 82 00 18 */	bne .L_80163578
/* 80163564 001604A4  38 7E 00 0C */	addi r3, r30, 0xc
/* 80163568 001604A8  38 BE 00 18 */	addi r5, r30, 0x18
/* 8016356C 001604AC  38 80 03 77 */	li r4, 0x377
/* 80163570 001604B0  4C C6 31 82 */	crclr 6
/* 80163574 001604B4  4B EC 70 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80163578:
/* 80163578 001604B8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8016357C 001604BC  38 9E 00 9C */	addi r4, r30, 0x9c
/* 80163580 001604C0  38 A0 00 00 */	li r5, 0
/* 80163584 001604C4  48 2B FD D9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80163588 001604C8  7F 44 D3 78 */	mr r4, r26
/* 8016358C 001604CC  38 61 22 D0 */	addi r3, r1, 0x22d0
/* 80163590 001604D0  38 A0 FF FF */	li r5, -1
/* 80163594 001604D4  48 2B 23 65 */	bl __ct__9RamStreamFPvi
/* 80163598 001604D8  38 7F 00 38 */	addi r3, r31, 0x38
/* 8016359C 001604DC  38 81 22 D0 */	addi r4, r1, 0x22d0
/* 801635A0 001604E0  48 2B 6A C1 */	bl read__12MapCollisionFR6Stream
/* 801635A4 001604E4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801635A8 001604E8  38 9E 00 9C */	addi r4, r30, 0x9c
/* 801635AC 001604EC  48 2B FD B9 */	bl heapStatusEnd__6SystemFPc
/* 801635B0 001604F0  7F 84 E3 78 */	mr r4, r28
/* 801635B4 001604F4  38 7E 00 AC */	addi r3, r30, 0xac
/* 801635B8 001604F8  4B EB FA 61 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 801635BC 001604FC  7C 7A 1B 79 */	or. r26, r3, r3
/* 801635C0 00160500  41 82 00 54 */	beq .L_80163614
/* 801635C4 00160504  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801635C8 00160508  38 9E 00 BC */	addi r4, r30, 0xbc
/* 801635CC 0016050C  38 A0 00 00 */	li r5, 0
/* 801635D0 00160510  48 2B FD 8D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801635D4 00160514  7F 44 D3 78 */	mr r4, r26
/* 801635D8 00160518  38 61 1E B0 */	addi r3, r1, 0x1eb0
/* 801635DC 0016051C  38 A0 FF FF */	li r5, -1
/* 801635E0 00160520  48 2B 23 19 */	bl __ct__9RamStreamFPvi
/* 801635E4 00160524  38 00 00 01 */	li r0, 1
/* 801635E8 00160528  2C 00 00 01 */	cmpwi r0, 1
/* 801635EC 0016052C  90 01 1E BC */	stw r0, 0x1ebc(r1)
/* 801635F0 00160530  40 82 00 0C */	bne .L_801635FC
/* 801635F4 00160534  38 00 00 00 */	li r0, 0
/* 801635F8 00160538  90 01 22 C4 */	stw r0, 0x22c4(r1)
.L_801635FC:
/* 801635FC 0016053C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80163600 00160540  38 81 1E B0 */	addi r4, r1, 0x1eb0
/* 80163604 00160544  48 04 C6 99 */	bl read__Q24Game6SeaMgrFR6Stream
/* 80163608 00160548  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8016360C 0016054C  38 9E 00 BC */	addi r4, r30, 0xbc
/* 80163610 00160550  48 2B FD 55 */	bl heapStatusEnd__6SystemFPc
.L_80163614:
/* 80163614 00160554  7F 84 E3 78 */	mr r4, r28
/* 80163618 00160558  38 7E 00 C8 */	addi r3, r30, 0xc8
/* 8016361C 0016055C  4B EB F9 FD */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 80163620 00160560  7C 7A 1B 79 */	or. r26, r3, r3
/* 80163624 00160564  41 82 00 48 */	beq .L_8016366C
/* 80163628 00160568  38 60 00 28 */	li r3, 0x28
/* 8016362C 0016056C  4B EC 08 79 */	bl __nw__FUl
/* 80163630 00160570  7C 7B 1B 79 */	or. r27, r3, r3
/* 80163634 00160574  41 82 00 0C */	beq .L_80163640
/* 80163638 00160578  48 2B 8E 45 */	bl __ct__Q27MapCode3MgrFv
/* 8016363C 0016057C  7C 7B 1B 78 */	mr r27, r3
.L_80163640:
/* 80163640 00160580  7F 44 D3 78 */	mr r4, r26
/* 80163644 00160584  38 61 1A 90 */	addi r3, r1, 0x1a90
/* 80163648 00160588  38 A0 FF FF */	li r5, -1
/* 8016364C 0016058C  48 2B 22 AD */	bl __ct__9RamStreamFPvi
/* 80163650 00160590  7F 63 DB 78 */	mr r3, r27
/* 80163654 00160594  38 81 1A 90 */	addi r4, r1, 0x1a90
/* 80163658 00160598  48 2B 91 09 */	bl read__Q27MapCode3MgrFR6Stream
/* 8016365C 0016059C  80 9F 00 50 */	lwz r4, 0x50(r31)
/* 80163660 001605A0  7F 63 DB 78 */	mr r3, r27
/* 80163664 001605A4  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 80163668 001605A8  48 2B 92 15 */	bl attachCodes__Q27MapCode3MgrFPQ23Sys13TriangleTable
.L_8016366C:
/* 8016366C 001605AC  7F 83 E3 78 */	mr r3, r28
/* 80163670 001605B0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80163674 001605B4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80163678 001605B8  7D 89 03 A6 */	mtctr r12
/* 8016367C 001605BC  4E 80 04 21 */	bctrl 
/* 80163680 001605C0  48 00 01 88 */	b .L_80163808
.L_80163684:
/* 80163684 001605C4  38 00 00 00 */	li r0, 0
/* 80163688 001605C8  38 80 00 00 */	li r4, 0
/* 8016368C 001605CC  90 01 00 08 */	stw r0, 8(r1)
/* 80163690 001605D0  38 A0 00 00 */	li r5, 0
/* 80163694 001605D4  38 C0 00 00 */	li r6, 0
/* 80163698 001605D8  38 E0 00 00 */	li r7, 0
/* 8016369C 001605DC  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 801636A0 001605E0  39 00 00 02 */	li r8, 2
/* 801636A4 001605E4  39 20 00 00 */	li r9, 0
/* 801636A8 001605E8  39 40 00 00 */	li r10, 0
/* 801636AC 001605EC  4B EB BA DD */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801636B0 001605F0  7C 7B 1B 78 */	mr r27, r3
/* 801636B4 001605F4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801636B8 001605F8  38 9E 00 9C */	addi r4, r30, 0x9c
/* 801636BC 001605FC  38 A0 00 00 */	li r5, 0
/* 801636C0 00160600  48 2B FC 9D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801636C4 00160604  7F 64 DB 78 */	mr r4, r27
/* 801636C8 00160608  38 61 16 70 */	addi r3, r1, 0x1670
/* 801636CC 0016060C  38 A0 FF FF */	li r5, -1
/* 801636D0 00160610  48 2B 22 29 */	bl __ct__9RamStreamFPvi
/* 801636D4 00160614  38 7F 00 38 */	addi r3, r31, 0x38
/* 801636D8 00160618  38 81 16 70 */	addi r4, r1, 0x1670
/* 801636DC 0016061C  48 2B 69 85 */	bl read__12MapCollisionFR6Stream
/* 801636E0 00160620  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801636E4 00160624  38 9E 00 9C */	addi r4, r30, 0x9c
/* 801636E8 00160628  48 2B FC 7D */	bl heapStatusEnd__6SystemFPc
/* 801636EC 0016062C  7F 63 DB 78 */	mr r3, r27
/* 801636F0 00160630  4B EC 09 E9 */	bl __dla__FPv
/* 801636F4 00160634  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801636F8 00160638  28 03 00 00 */	cmplwi r3, 0
/* 801636FC 0016063C  41 82 00 88 */	beq .L_80163784
/* 80163700 00160640  38 00 00 00 */	li r0, 0
/* 80163704 00160644  38 80 00 00 */	li r4, 0
/* 80163708 00160648  90 01 00 08 */	stw r0, 8(r1)
/* 8016370C 0016064C  38 A0 00 00 */	li r5, 0
/* 80163710 00160650  38 C0 00 00 */	li r6, 0
/* 80163714 00160654  38 E0 00 00 */	li r7, 0
/* 80163718 00160658  39 00 00 02 */	li r8, 2
/* 8016371C 0016065C  39 20 00 00 */	li r9, 0
/* 80163720 00160660  39 40 00 00 */	li r10, 0
/* 80163724 00160664  4B EB BA 65 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 80163728 00160668  7C 7B 1B 78 */	mr r27, r3
/* 8016372C 0016066C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80163730 00160670  38 9E 00 BC */	addi r4, r30, 0xbc
/* 80163734 00160674  38 A0 00 00 */	li r5, 0
/* 80163738 00160678  48 2B FC 25 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8016373C 0016067C  7F 64 DB 78 */	mr r4, r27
/* 80163740 00160680  38 61 12 50 */	addi r3, r1, 0x1250
/* 80163744 00160684  38 A0 FF FF */	li r5, -1
/* 80163748 00160688  48 2B 21 B1 */	bl __ct__9RamStreamFPvi
/* 8016374C 0016068C  38 00 00 01 */	li r0, 1
/* 80163750 00160690  2C 00 00 01 */	cmpwi r0, 1
/* 80163754 00160694  90 01 12 5C */	stw r0, 0x125c(r1)
/* 80163758 00160698  40 82 00 0C */	bne .L_80163764
/* 8016375C 0016069C  38 00 00 00 */	li r0, 0
/* 80163760 001606A0  90 01 16 64 */	stw r0, 0x1664(r1)
.L_80163764:
/* 80163764 001606A4  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80163768 001606A8  38 81 12 50 */	addi r4, r1, 0x1250
/* 8016376C 001606AC  48 04 C5 31 */	bl read__Q24Game6SeaMgrFR6Stream
/* 80163770 001606B0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80163774 001606B4  38 9E 00 BC */	addi r4, r30, 0xbc
/* 80163778 001606B8  48 2B FB ED */	bl heapStatusEnd__6SystemFPc
/* 8016377C 001606BC  7F 63 DB 78 */	mr r3, r27
/* 80163780 001606C0  4B EC 09 59 */	bl __dla__FPv
.L_80163784:
/* 80163784 001606C4  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80163788 001606C8  28 03 00 00 */	cmplwi r3, 0
/* 8016378C 001606CC  41 82 00 7C */	beq .L_80163808
/* 80163790 001606D0  38 00 00 00 */	li r0, 0
/* 80163794 001606D4  38 80 00 00 */	li r4, 0
/* 80163798 001606D8  90 01 00 08 */	stw r0, 8(r1)
/* 8016379C 001606DC  38 A0 00 00 */	li r5, 0
/* 801637A0 001606E0  38 C0 00 00 */	li r6, 0
/* 801637A4 001606E4  38 E0 00 00 */	li r7, 0
/* 801637A8 001606E8  39 00 00 02 */	li r8, 2
/* 801637AC 001606EC  39 20 00 00 */	li r9, 0
/* 801637B0 001606F0  39 40 00 00 */	li r10, 0
/* 801637B4 001606F4  4B EB B9 D5 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801637B8 001606F8  7C 7B 1B 78 */	mr r27, r3
/* 801637BC 001606FC  38 60 00 28 */	li r3, 0x28
/* 801637C0 00160700  4B EC 06 E5 */	bl __nw__FUl
/* 801637C4 00160704  7C 7C 1B 79 */	or. r28, r3, r3
/* 801637C8 00160708  41 82 00 0C */	beq .L_801637D4
/* 801637CC 0016070C  48 2B 8C B1 */	bl __ct__Q27MapCode3MgrFv
/* 801637D0 00160710  7C 7C 1B 78 */	mr r28, r3
.L_801637D4:
/* 801637D4 00160714  7F 64 DB 78 */	mr r4, r27
/* 801637D8 00160718  38 61 0E 30 */	addi r3, r1, 0xe30
/* 801637DC 0016071C  38 A0 FF FF */	li r5, -1
/* 801637E0 00160720  48 2B 21 19 */	bl __ct__9RamStreamFPvi
/* 801637E4 00160724  7F 83 E3 78 */	mr r3, r28
/* 801637E8 00160728  38 81 0E 30 */	addi r4, r1, 0xe30
/* 801637EC 0016072C  48 2B 8F 75 */	bl read__Q27MapCode3MgrFR6Stream
/* 801637F0 00160730  80 9F 00 50 */	lwz r4, 0x50(r31)
/* 801637F4 00160734  7F 83 E3 78 */	mr r3, r28
/* 801637F8 00160738  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 801637FC 0016073C  48 2B 90 81 */	bl attachCodes__Q27MapCode3MgrFPQ23Sys13TriangleTable
/* 80163800 00160740  7F 63 DB 78 */	mr r3, r27
/* 80163804 00160744  4B EC 08 D5 */	bl __dla__FPv
.L_80163808:
/* 80163808 00160748  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 8016380C 0016074C  28 03 00 00 */	cmplwi r3, 0
/* 80163810 00160750  41 82 00 BC */	beq .L_801638CC
/* 80163814 00160754  38 00 00 00 */	li r0, 0
/* 80163818 00160758  38 80 00 00 */	li r4, 0
/* 8016381C 0016075C  90 01 00 08 */	stw r0, 8(r1)
/* 80163820 00160760  38 A0 00 00 */	li r5, 0
/* 80163824 00160764  38 C0 00 00 */	li r6, 0
/* 80163828 00160768  38 E0 00 00 */	li r7, 0
/* 8016382C 0016076C  39 00 00 02 */	li r8, 2
/* 80163830 00160770  39 20 00 00 */	li r9, 0
/* 80163834 00160774  39 40 00 00 */	li r10, 0
/* 80163838 00160778  4B EB B9 51 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8016383C 0016077C  7C 7B 1B 78 */	mr r27, r3
/* 80163840 00160780  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80163844 00160784  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 80163848 00160788  38 A0 00 00 */	li r5, 0
/* 8016384C 0016078C  48 2B FB 11 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80163850 00160790  7F 64 DB 78 */	mr r4, r27
/* 80163854 00160794  38 61 0A 10 */	addi r3, r1, 0xa10
/* 80163858 00160798  38 A0 FF FF */	li r5, -1
/* 8016385C 0016079C  48 2B 20 9D */	bl __ct__9RamStreamFPvi
/* 80163860 001607A0  38 00 00 01 */	li r0, 1
/* 80163864 001607A4  2C 00 00 01 */	cmpwi r0, 1
/* 80163868 001607A8  90 01 0A 1C */	stw r0, 0xa1c(r1)
/* 8016386C 001607AC  40 82 00 0C */	bne .L_80163878
/* 80163870 001607B0  38 00 00 00 */	li r0, 0
/* 80163874 001607B4  90 01 0E 24 */	stw r0, 0xe24(r1)
.L_80163878:
/* 80163878 001607B8  80 1F 00 08 */	lwz r0, 8(r31)
/* 8016387C 001607BC  28 00 00 00 */	cmplwi r0, 0
/* 80163880 001607C0  40 82 00 20 */	bne .L_801638A0
/* 80163884 001607C4  38 60 00 24 */	li r3, 0x24
/* 80163888 001607C8  4B EC 06 1D */	bl __nw__FUl
/* 8016388C 001607CC  7C 60 1B 79 */	or. r0, r3, r3
/* 80163890 001607D0  41 82 00 0C */	beq .L_8016389C
/* 80163894 001607D4  48 01 0A 01 */	bl __ct__Q24Game12GameRouteMgrFv
/* 80163898 001607D8  7C 60 1B 78 */	mr r0, r3
.L_8016389C:
/* 8016389C 001607DC  90 1F 00 08 */	stw r0, 8(r31)
.L_801638A0:
/* 801638A0 001607E0  80 7F 00 08 */	lwz r3, 8(r31)
/* 801638A4 001607E4  38 81 0A 10 */	addi r4, r1, 0xa10
/* 801638A8 001607E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801638AC 001607EC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801638B0 001607F0  7D 89 03 A6 */	mtctr r12
/* 801638B4 001607F4  4E 80 04 21 */	bctrl 
/* 801638B8 001607F8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801638BC 001607FC  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 801638C0 00160800  48 2B FA A5 */	bl heapStatusEnd__6SystemFPc
/* 801638C4 00160804  7F 63 DB 78 */	mr r3, r27
/* 801638C8 00160808  4B EC 08 11 */	bl __dla__FPv
.L_801638CC:
/* 801638CC 0016080C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801638D0 00160810  38 82 A5 00 */	addi r4, r2, lbl_80518860@sda21
/* 801638D4 00160814  48 2B FA 91 */	bl heapStatusEnd__6SystemFPc
/* 801638D8 00160818  BB 41 2B 18 */	lmw r26, 0x2b18(r1)
/* 801638DC 0016081C  80 01 2B 34 */	lwz r0, 0x2b34(r1)
/* 801638E0 00160820  7C 08 03 A6 */	mtlr r0
/* 801638E4 00160824  38 21 2B 30 */	addi r1, r1, 0x2b30
/* 801638E8 00160828  4E 80 00 20 */	blr 

.global __ct__Q23Sys15MatLoopAnimatorFv
__ct__Q23Sys15MatLoopAnimatorFv:
/* 801638EC 0016082C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801638F0 00160830  7C 08 02 A6 */	mflr r0
/* 801638F4 00160834  90 01 00 14 */	stw r0, 0x14(r1)
/* 801638F8 00160838  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801638FC 0016083C  7C 7F 1B 78 */	mr r31, r3
/* 80163900 00160840  48 2D 0A 55 */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 80163904 00160844  3C 80 80 4F */	lis r4, __vt__Q23Sys15MatLoopAnimator@ha
/* 80163908 00160848  7F E3 FB 78 */	mr r3, r31
/* 8016390C 0016084C  38 04 C4 8C */	addi r0, r4, __vt__Q23Sys15MatLoopAnimator@l
/* 80163910 00160850  90 1F 00 00 */	stw r0, 0(r31)
/* 80163914 00160854  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80163918 00160858  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016391C 0016085C  7C 08 03 A6 */	mtlr r0
/* 80163920 00160860  38 21 00 10 */	addi r1, r1, 0x10
/* 80163924 00160864  4E 80 00 20 */	blr 

.global findWater__Q24Game6MapMgrFRQ23Sys6Sphere
findWater__Q24Game6MapMgrFRQ23Sys6Sphere:
/* 80163928 00160868  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016392C 0016086C  7C 08 02 A6 */	mflr r0
/* 80163930 00160870  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163934 00160874  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80163938 00160878  28 03 00 00 */	cmplwi r3, 0
/* 8016393C 0016087C  41 82 00 0C */	beq .L_80163948
/* 80163940 00160880  48 04 BF 2D */	bl findWater__Q24Game6SeaMgrFRQ23Sys6Sphere
/* 80163944 00160884  48 00 00 08 */	b .L_8016394C
.L_80163948:
/* 80163948 00160888  38 60 00 00 */	li r3, 0
.L_8016394C:
/* 8016394C 0016088C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163950 00160890  7C 08 03 A6 */	mtlr r0
/* 80163954 00160894  38 21 00 10 */	addi r1, r1, 0x10
/* 80163958 00160898  4E 80 00 20 */	blr 

.global do_update__Q24Game11ShapeMapMgrFv
do_update__Q24Game11ShapeMapMgrFv:
/* 8016395C 0016089C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80163960 001608A0  7C 08 02 A6 */	mflr r0
/* 80163964 001608A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80163968 001608A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016396C 001608AC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80163970 001608B0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80163974 001608B4  7C 7D 1B 78 */	mr r29, r3
/* 80163978 001608B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8016397C 001608BC  48 05 16 4D */	bl paused__Q24Game10GameSystemFv
/* 80163980 001608C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80163984 001608C4  40 82 00 58 */	bne .L_801639DC
/* 80163988 001608C8  3B C0 00 00 */	li r30, 0
/* 8016398C 001608CC  3B E0 00 00 */	li r31, 0
/* 80163990 001608D0  48 00 00 1C */	b .L_801639AC
.L_80163994:
/* 80163994 001608D4  80 1D 00 30 */	lwz r0, 0x30(r29)
/* 80163998 001608D8  C0 22 A5 48 */	lfs f1, lbl_805188A8@sda21(r2)
/* 8016399C 001608DC  7C 60 FA 14 */	add r3, r0, r31
/* 801639A0 001608E0  48 2D 0B AD */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 801639A4 001608E4  3B FF 00 0C */	addi r31, r31, 0xc
/* 801639A8 001608E8  3B DE 00 01 */	addi r30, r30, 1
.L_801639AC:
/* 801639AC 001608EC  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801639B0 001608F0  7C 1E 00 00 */	cmpw r30, r0
/* 801639B4 001608F4  41 80 FF E0 */	blt .L_80163994
/* 801639B8 001608F8  80 7D 00 34 */	lwz r3, 0x34(r29)
/* 801639BC 001608FC  80 63 00 08 */	lwz r3, 8(r3)
/* 801639C0 00160900  81 83 00 00 */	lwz r12, 0(r3)
/* 801639C4 00160904  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801639C8 00160908  7D 89 03 A6 */	mtctr r12
/* 801639CC 0016090C  4E 80 04 21 */	bctrl 
/* 801639D0 00160910  80 7D 00 34 */	lwz r3, 0x34(r29)
/* 801639D4 00160914  80 63 00 08 */	lwz r3, 8(r3)
/* 801639D8 00160918  4B F0 32 95 */	bl diff__8J3DModelFv
.L_801639DC:
/* 801639DC 0016091C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801639E0 00160920  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801639E4 00160924  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801639E8 00160928  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801639EC 0016092C  7C 08 03 A6 */	mtlr r0
/* 801639F0 00160930  38 21 00 20 */	addi r1, r1, 0x20
/* 801639F4 00160934  4E 80 00 20 */	blr 

.global update__Q24Game6MapMgrFv
update__Q24Game6MapMgrFv:
/* 801639F8 00160938  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801639FC 0016093C  7C 08 02 A6 */	mflr r0
/* 80163A00 00160940  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163A04 00160944  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80163A08 00160948  7C 7F 1B 78 */	mr r31, r3
/* 80163A0C 0016094C  48 00 00 41 */	bl clearPerfMonitor__Q24Game6MapMgrFv
/* 80163A10 00160950  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80163A14 00160954  28 03 00 00 */	cmplwi r3, 0
/* 80163A18 00160958  41 82 00 08 */	beq .L_80163A20
/* 80163A1C 0016095C  48 04 B3 71 */	bl update__Q24Game6SeaMgrFv
.L_80163A20:
/* 80163A20 00160960  7F E3 FB 78 */	mr r3, r31
/* 80163A24 00160964  81 9F 00 04 */	lwz r12, 4(r31)
/* 80163A28 00160968  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80163A2C 0016096C  7D 89 03 A6 */	mtctr r12
/* 80163A30 00160970  4E 80 04 21 */	bctrl 
/* 80163A34 00160974  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163A38 00160978  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80163A3C 0016097C  7C 08 03 A6 */	mtlr r0
/* 80163A40 00160980  38 21 00 10 */	addi r1, r1, 0x10
/* 80163A44 00160984  4E 80 00 20 */	blr 

.global do_update__Q24Game6MapMgrFv
do_update__Q24Game6MapMgrFv:
/* 80163A48 00160988  4E 80 00 20 */	blr 

.global clearPerfMonitor__Q24Game6MapMgrFv
clearPerfMonitor__Q24Game6MapMgrFv:
/* 80163A4C 0016098C  38 00 00 00 */	li r0, 0
/* 80163A50 00160990  90 03 00 14 */	stw r0, 0x14(r3)
/* 80163A54 00160994  90 03 00 18 */	stw r0, 0x18(r3)
/* 80163A58 00160998  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80163A5C 0016099C  90 03 00 20 */	stw r0, 0x20(r3)
/* 80163A60 001609A0  4E 80 00 20 */	blr 

.global drawCollision__Q24Game11ShapeMapMgrFR8GraphicsRQ23Sys6Sphere
drawCollision__Q24Game11ShapeMapMgrFR8GraphicsRQ23Sys6Sphere:
/* 80163A64 001609A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80163A68 001609A8  7C 08 02 A6 */	mflr r0
/* 80163A6C 001609AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80163A70 001609B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80163A74 001609B4  7C BF 2B 78 */	mr r31, r5
/* 80163A78 001609B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80163A7C 001609BC  7C 9E 23 78 */	mr r30, r4
/* 80163A80 001609C0  38 80 00 00 */	li r4, 0
/* 80163A84 001609C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80163A88 001609C8  7C 7D 1B 78 */	mr r29, r3
/* 80163A8C 001609CC  7F C3 F3 78 */	mr r3, r30
/* 80163A90 001609D0  48 2C 1D 8D */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 80163A94 001609D4  38 00 00 32 */	li r0, 0x32
/* 80163A98 001609D8  38 A0 00 FF */	li r5, 0xff
/* 80163A9C 001609DC  98 1E 00 84 */	stb r0, 0x84(r30)
/* 80163AA0 001609E0  38 00 00 0A */	li r0, 0xa
/* 80163AA4 001609E4  38 60 00 20 */	li r3, 0x20
/* 80163AA8 001609E8  38 80 00 00 */	li r4, 0
/* 80163AAC 001609EC  98 BE 00 85 */	stb r5, 0x85(r30)
/* 80163AB0 001609F0  98 1E 00 86 */	stb r0, 0x86(r30)
/* 80163AB4 001609F4  98 BE 00 87 */	stb r5, 0x87(r30)
/* 80163AB8 001609F8  4B F8 20 29 */	bl GXSetLineWidth
/* 80163ABC 001609FC  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 80163AC0 00160A00  7F E4 FB 78 */	mr r4, r31
/* 80163AC4 00160A04  81 83 00 00 */	lwz r12, 0(r3)
/* 80163AC8 00160A08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80163ACC 00160A0C  7D 89 03 A6 */	mtctr r12
/* 80163AD0 00160A10  4E 80 04 21 */	bctrl 
/* 80163AD4 00160A14  80 9D 00 50 */	lwz r4, 0x50(r29)
/* 80163AD8 00160A18  28 03 00 00 */	cmplwi r3, 0
/* 80163ADC 00160A1C  80 A4 00 18 */	lwz r5, 0x18(r4)
/* 80163AE0 00160A20  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 80163AE4 00160A24  41 82 00 10 */	beq .L_80163AF4
/* 80163AE8 00160A28  7F C4 F3 78 */	mr r4, r30
/* 80163AEC 00160A2C  38 E0 00 01 */	li r7, 1
/* 80163AF0 00160A30  48 2B 5E 89 */	bl draw__Q23Sys12TriIndexListFR8GraphicsRQ23Sys11VertexTableRQ23Sys13TriangleTableb
.L_80163AF4:
/* 80163AF4 00160A34  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80163AF8 00160A38  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80163AFC 00160A3C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80163B00 00160A40  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80163B04 00160A44  7C 08 03 A6 */	mtlr r0
/* 80163B08 00160A48  38 21 00 20 */	addi r1, r1, 0x20
/* 80163B0C 00160A4C  4E 80 00 20 */	blr 

.global createTriangles__Q24Game11ShapeMapMgrFRQ23Sys17CreateTriangleArg
createTriangles__Q24Game11ShapeMapMgrFRQ23Sys17CreateTriangleArg:
/* 80163B10 00160A50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80163B14 00160A54  7C 08 02 A6 */	mflr r0
/* 80163B18 00160A58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163B1C 00160A5C  85 83 00 38 */	lwzu r12, 0x38(r3)
/* 80163B20 00160A60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80163B24 00160A64  7D 89 03 A6 */	mtctr r12
/* 80163B28 00160A68  4E 80 04 21 */	bctrl 
/* 80163B2C 00160A6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163B30 00160A70  7C 08 03 A6 */	mtlr r0
/* 80163B34 00160A74  38 21 00 10 */	addi r1, r1, 0x10
/* 80163B38 00160A78  4E 80 00 20 */	blr 

.global createTriangles__12MapCollisionFRQ23Sys17CreateTriangleArg
createTriangles__12MapCollisionFRQ23Sys17CreateTriangleArg:
/* 80163B3C 00160A7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80163B40 00160A80  7C 08 02 A6 */	mflr r0
/* 80163B44 00160A84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163B48 00160A88  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80163B4C 00160A8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80163B50 00160A90  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80163B54 00160A94  7D 89 03 A6 */	mtctr r12
/* 80163B58 00160A98  4E 80 04 21 */	bctrl 
/* 80163B5C 00160A9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163B60 00160AA0  7C 08 03 A6 */	mtlr r0
/* 80163B64 00160AA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80163B68 00160AA8  4E 80 00 20 */	blr 

.global createTriangles__Q23Sys10TriDividerFRQ23Sys17CreateTriangleArg
createTriangles__Q23Sys10TriDividerFRQ23Sys17CreateTriangleArg:
/* 80163B6C 00160AAC  4E 80 00 20 */	blr 

.global "getMinY__Q24Game11ShapeMapMgrFR10Vector3<f>"
"getMinY__Q24Game11ShapeMapMgrFR10Vector3<f>":
/* 80163B70 00160AB0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80163B74 00160AB4  7C 08 02 A6 */	mflr r0
/* 80163B78 00160AB8  C0 22 A5 0C */	lfs f1, lbl_8051886C@sda21(r2)
/* 80163B7C 00160ABC  38 A0 00 00 */	li r5, 0
/* 80163B80 00160AC0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80163B84 00160AC4  38 00 00 01 */	li r0, 1
/* 80163B88 00160AC8  C0 62 A5 30 */	lfs f3, lbl_80518890@sda21(r2)
/* 80163B8C 00160ACC  C0 42 A5 58 */	lfs f2, lbl_805188B8@sda21(r2)
/* 80163B90 00160AD0  C0 02 A5 44 */	lfs f0, lbl_805188A4@sda21(r2)
/* 80163B94 00160AD4  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 80163B98 00160AD8  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 80163B9C 00160ADC  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80163BA0 00160AE0  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80163BA4 00160AE4  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80163BA8 00160AE8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80163BAC 00160AEC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80163BB0 00160AF0  98 01 00 14 */	stb r0, 0x14(r1)
/* 80163BB4 00160AF4  98 A1 00 15 */	stb r5, 0x15(r1)
/* 80163BB8 00160AF8  C0 04 00 00 */	lfs f0, 0(r4)
/* 80163BBC 00160AFC  D0 01 00 08 */	stfs f0, 8(r1)
/* 80163BC0 00160B00  C0 04 00 04 */	lfs f0, 4(r4)
/* 80163BC4 00160B04  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80163BC8 00160B08  C0 04 00 08 */	lfs f0, 8(r4)
/* 80163BCC 00160B0C  38 81 00 08 */	addi r4, r1, 8
/* 80163BD0 00160B10  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80163BD4 00160B14  98 A1 00 14 */	stb r5, 0x14(r1)
/* 80163BD8 00160B18  85 83 00 38 */	lwzu r12, 0x38(r3)
/* 80163BDC 00160B1C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80163BE0 00160B20  7D 89 03 A6 */	mtctr r12
/* 80163BE4 00160B24  4E 80 04 21 */	bctrl 
/* 80163BE8 00160B28  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80163BEC 00160B2C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80163BF0 00160B30  7C 08 03 A6 */	mtlr r0
/* 80163BF4 00160B34  38 21 00 40 */	addi r1, r1, 0x40
/* 80163BF8 00160B38  4E 80 00 20 */	blr 

.global getCurrTri__Q24Game11ShapeMapMgrFRQ24Game11CurrTriInfo
getCurrTri__Q24Game11ShapeMapMgrFRQ24Game11CurrTriInfo:
/* 80163BFC 00160B3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80163C00 00160B40  7C 08 02 A6 */	mflr r0
/* 80163C04 00160B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163C08 00160B48  85 83 00 38 */	lwzu r12, 0x38(r3)
/* 80163C0C 00160B4C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80163C10 00160B50  7D 89 03 A6 */	mtctr r12
/* 80163C14 00160B54  4E 80 04 21 */	bctrl 
/* 80163C18 00160B58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163C1C 00160B5C  7C 08 03 A6 */	mtlr r0
/* 80163C20 00160B60  38 21 00 10 */	addi r1, r1, 0x10
/* 80163C24 00160B64  4E 80 00 20 */	blr 

.global doAnimation__Q24Game11ShapeMapMgrFv
doAnimation__Q24Game11ShapeMapMgrFv:
/* 80163C28 00160B68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80163C2C 00160B6C  7C 08 02 A6 */	mflr r0
/* 80163C30 00160B70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163C34 00160B74  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80163C38 00160B78  28 03 00 00 */	cmplwi r3, 0
/* 80163C3C 00160B7C  41 82 00 14 */	beq .L_80163C50
/* 80163C40 00160B80  81 83 00 00 */	lwz r12, 0(r3)
/* 80163C44 00160B84  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80163C48 00160B88  7D 89 03 A6 */	mtctr r12
/* 80163C4C 00160B8C  4E 80 04 21 */	bctrl 
.L_80163C50:
/* 80163C50 00160B90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163C54 00160B94  7C 08 03 A6 */	mtlr r0
/* 80163C58 00160B98  38 21 00 10 */	addi r1, r1, 0x10
/* 80163C5C 00160B9C  4E 80 00 20 */	blr 

.global doSetView__Q24Game11ShapeMapMgrFi
doSetView__Q24Game11ShapeMapMgrFi:
/* 80163C60 00160BA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80163C64 00160BA4  7C 08 02 A6 */	mflr r0
/* 80163C68 00160BA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163C6C 00160BAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80163C70 00160BB0  7C 9F 23 78 */	mr r31, r4
/* 80163C74 00160BB4  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 80163C78 00160BB8  93 C1 00 08 */	stw r30, 8(r1)
/* 80163C7C 00160BBC  7C 7E 1B 78 */	mr r30, r3
/* 80163C80 00160BC0  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80163C84 00160BC4  48 2D B4 3D */	bl setCurrentViewNo__Q28SysShape5ModelFUl
/* 80163C88 00160BC8  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80163C8C 00160BCC  28 03 00 00 */	cmplwi r3, 0
/* 80163C90 00160BD0  41 82 00 18 */	beq .L_80163CA8
/* 80163C94 00160BD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80163C98 00160BD8  7F E4 FB 78 */	mr r4, r31
/* 80163C9C 00160BDC  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80163CA0 00160BE0  7D 89 03 A6 */	mtctr r12
/* 80163CA4 00160BE4  4E 80 04 21 */	bctrl 
.L_80163CA8:
/* 80163CA8 00160BE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163CAC 00160BEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80163CB0 00160BF0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80163CB4 00160BF4  7C 08 03 A6 */	mtlr r0
/* 80163CB8 00160BF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80163CBC 00160BFC  4E 80 00 20 */	blr 

.global doViewCalc__Q24Game11ShapeMapMgrFv
doViewCalc__Q24Game11ShapeMapMgrFv:
/* 80163CC0 00160C00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80163CC4 00160C04  7C 08 02 A6 */	mflr r0
/* 80163CC8 00160C08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163CCC 00160C0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80163CD0 00160C10  7C 7F 1B 78 */	mr r31, r3
/* 80163CD4 00160C14  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80163CD8 00160C18  28 03 00 00 */	cmplwi r3, 0
/* 80163CDC 00160C1C  41 82 00 14 */	beq .L_80163CF0
/* 80163CE0 00160C20  81 83 00 00 */	lwz r12, 0(r3)
/* 80163CE4 00160C24  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80163CE8 00160C28  7D 89 03 A6 */	mtctr r12
/* 80163CEC 00160C2C  4E 80 04 21 */	bctrl 
.L_80163CF0:
/* 80163CF0 00160C30  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 80163CF4 00160C34  48 2D B3 65 */	bl viewCalc__Q28SysShape5ModelFv
/* 80163CF8 00160C38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163CFC 00160C3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80163D00 00160C40  7C 08 03 A6 */	mtlr r0
/* 80163D04 00160C44  38 21 00 10 */	addi r1, r1, 0x10
/* 80163D08 00160C48  4E 80 00 20 */	blr 

.global doEntry__Q24Game11ShapeMapMgrFv
doEntry__Q24Game11ShapeMapMgrFv:
/* 80163D0C 00160C4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80163D10 00160C50  7C 08 02 A6 */	mflr r0
/* 80163D14 00160C54  38 82 A5 5C */	addi r4, r2, lbl_805188BC@sda21
/* 80163D18 00160C58  38 A0 00 01 */	li r5, 1
/* 80163D1C 00160C5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163D20 00160C60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80163D24 00160C64  7C 7F 1B 78 */	mr r31, r3
/* 80163D28 00160C68  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 80163D2C 00160C6C  80 66 00 28 */	lwz r3, 0x28(r6)
/* 80163D30 00160C70  48 2C 6D C9 */	bl _start__9SysTimersFPcb
/* 80163D34 00160C74  80 0D 93 E8 */	lwz r0, gameSystem__4Game@sda21(r13)
/* 80163D38 00160C78  28 00 00 00 */	cmplwi r0, 0
/* 80163D3C 00160C7C  41 82 00 54 */	beq .L_80163D90
/* 80163D40 00160C80  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80163D44 00160C84  28 03 00 00 */	cmplwi r3, 0
/* 80163D48 00160C88  41 82 00 14 */	beq .L_80163D5C
/* 80163D4C 00160C8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80163D50 00160C90  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80163D54 00160C94  7D 89 03 A6 */	mtctr r12
/* 80163D58 00160C98  4E 80 04 21 */	bctrl 
.L_80163D5C:
/* 80163D5C 00160C9C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80163D60 00160CA0  38 80 00 02 */	li r4, 2
/* 80163D64 00160CA4  48 05 12 DD */	bl setDrawBuffer__Q24Game10GameSystemFi
/* 80163D68 00160CA8  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 80163D6C 00160CAC  80 63 00 08 */	lwz r3, 8(r3)
/* 80163D70 00160CB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80163D74 00160CB4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80163D78 00160CB8  7D 89 03 A6 */	mtctr r12
/* 80163D7C 00160CBC  4E 80 04 21 */	bctrl 
/* 80163D80 00160CC0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80163D84 00160CC4  38 80 00 00 */	li r4, 0
/* 80163D88 00160CC8  48 05 12 B9 */	bl setDrawBuffer__Q24Game10GameSystemFi
/* 80163D8C 00160CCC  48 00 00 1C */	b .L_80163DA8
.L_80163D90:
/* 80163D90 00160CD0  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 80163D94 00160CD4  80 63 00 08 */	lwz r3, 8(r3)
/* 80163D98 00160CD8  81 83 00 00 */	lwz r12, 0(r3)
/* 80163D9C 00160CDC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80163DA0 00160CE0  7D 89 03 A6 */	mtctr r12
/* 80163DA4 00160CE4  4E 80 04 21 */	bctrl 
.L_80163DA8:
/* 80163DA8 00160CE8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80163DAC 00160CEC  38 82 A5 5C */	addi r4, r2, lbl_805188BC@sda21
/* 80163DB0 00160CF0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80163DB4 00160CF4  48 2C 6D 49 */	bl _stop__9SysTimersFPc
/* 80163DB8 00160CF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163DBC 00160CFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80163DC0 00160D00  7C 08 03 A6 */	mtlr r0
/* 80163DC4 00160D04  38 21 00 10 */	addi r1, r1, 0x10
/* 80163DC8 00160D08  4E 80 00 20 */	blr 

.global findRayIntersection__Q24Game11ShapeMapMgrFRQ23Sys16RayIntersectInfo
findRayIntersection__Q24Game11ShapeMapMgrFRQ23Sys16RayIntersectInfo:
/* 80163DCC 00160D0C  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80163DD0 00160D10  7C 08 02 A6 */	mflr r0
/* 80163DD4 00160D14  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80163DD8 00160D18  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 80163DDC 00160D1C  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 80163DE0 00160D20  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 80163DE4 00160D24  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 80163DE8 00160D28  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 80163DEC 00160D2C  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 80163DF0 00160D30  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 80163DF4 00160D34  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 80163DF8 00160D38  DB 61 00 70 */	stfd f27, 0x70(r1)
/* 80163DFC 00160D3C  F3 61 00 78 */	psq_st f27, 120(r1), 0, qr0
/* 80163E00 00160D40  DB 41 00 60 */	stfd f26, 0x60(r1)
/* 80163E04 00160D44  F3 41 00 68 */	psq_st f26, 104(r1), 0, qr0
/* 80163E08 00160D48  DB 21 00 50 */	stfd f25, 0x50(r1)
/* 80163E0C 00160D4C  F3 21 00 58 */	psq_st f25, 88(r1), 0, qr0
/* 80163E10 00160D50  BF 21 00 34 */	stmw r25, 0x34(r1)
/* 80163E14 00160D54  7C 9A 23 78 */	mr r26, r4
/* 80163E18 00160D58  C0 02 A5 0C */	lfs f0, lbl_8051886C@sda21(r2)
/* 80163E1C 00160D5C  C3 C4 00 04 */	lfs f30, 4(r4)
/* 80163E20 00160D60  7C 79 1B 78 */	mr r25, r3
/* 80163E24 00160D64  C0 C4 00 10 */	lfs f6, 0x10(r4)
/* 80163E28 00160D68  C3 E4 00 00 */	lfs f31, 0(r4)
/* 80163E2C 00160D6C  EC 3E 30 28 */	fsubs f1, f30, f6
/* 80163E30 00160D70  C0 E4 00 0C */	lfs f7, 0xc(r4)
/* 80163E34 00160D74  C3 A4 00 08 */	lfs f29, 8(r4)
/* 80163E38 00160D78  C0 A4 00 14 */	lfs f5, 0x14(r4)
/* 80163E3C 00160D7C  EC 7F 38 28 */	fsubs f3, f31, f7
/* 80163E40 00160D80  EC 21 00 72 */	fmuls f1, f1, f1
/* 80163E44 00160D84  EC 5D 28 28 */	fsubs f2, f29, f5
/* 80163E48 00160D88  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80163E4C 00160D8C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80163E50 00160D90  EC 82 08 2A */	fadds f4, f2, f1
/* 80163E54 00160D94  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80163E58 00160D98  40 81 00 14 */	ble .L_80163E6C
/* 80163E5C 00160D9C  40 81 00 14 */	ble .L_80163E70
/* 80163E60 00160DA0  FC 00 20 34 */	frsqrte f0, f4
/* 80163E64 00160DA4  EC 80 01 32 */	fmuls f4, f0, f4
/* 80163E68 00160DA8  48 00 00 08 */	b .L_80163E70
.L_80163E6C:
/* 80163E6C 00160DAC  FC 80 00 90 */	fmr f4, f0
.L_80163E70:
/* 80163E70 00160DB0  EC 5F 38 2A */	fadds f2, f31, f7
/* 80163E74 00160DB4  C0 62 A5 64 */	lfs f3, lbl_805188C4@sda21(r2)
/* 80163E78 00160DB8  EC 3E 30 2A */	fadds f1, f30, f6
/* 80163E7C 00160DBC  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 80163E80 00160DC0  EC 1D 28 2A */	fadds f0, f29, f5
/* 80163E84 00160DC4  38 81 00 14 */	addi r4, r1, 0x14
/* 80163E88 00160DC8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80163E8C 00160DCC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80163E90 00160DD0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80163E94 00160DD4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80163E98 00160DD8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80163E9C 00160DDC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80163EA0 00160DE0  80 79 00 50 */	lwz r3, 0x50(r25)
/* 80163EA4 00160DE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80163EA8 00160DE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80163EAC 00160DEC  7D 89 03 A6 */	mtctr r12
/* 80163EB0 00160DF0  4E 80 04 21 */	bctrl 
/* 80163EB4 00160DF4  C3 22 A5 68 */	lfs f25, lbl_805188C8@sda21(r2)
/* 80163EB8 00160DF8  7C 7D 1B 78 */	mr r29, r3
/* 80163EBC 00160DFC  3B 80 00 00 */	li r28, 0
/* 80163EC0 00160E00  48 00 00 BC */	b .L_80163F7C
.L_80163EC4:
/* 80163EC4 00160E04  3B 60 00 00 */	li r27, 0
/* 80163EC8 00160E08  3B C0 00 00 */	li r30, 0
/* 80163ECC 00160E0C  48 00 00 A0 */	b .L_80163F6C
.L_80163ED0:
/* 80163ED0 00160E10  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 80163ED4 00160E14  7F 43 D3 78 */	mr r3, r26
/* 80163ED8 00160E18  80 B9 00 50 */	lwz r5, 0x50(r25)
/* 80163EDC 00160E1C  7C 04 F0 2E */	lwzx r0, r4, r30
/* 80163EE0 00160E20  80 85 00 1C */	lwz r4, 0x1c(r5)
/* 80163EE4 00160E24  1C 00 00 60 */	mulli r0, r0, 0x60
/* 80163EE8 00160E28  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80163EEC 00160E2C  7F E4 02 14 */	add r31, r4, r0
/* 80163EF0 00160E30  7F E4 FB 78 */	mr r4, r31
/* 80163EF4 00160E34  48 2B 42 49 */	bl condition__Q23Sys16RayIntersectInfoFRQ23Sys8Triangle
/* 80163EF8 00160E38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80163EFC 00160E3C  41 82 00 68 */	beq .L_80163F64
/* 80163F00 00160E40  C0 3A 00 18 */	lfs f1, 0x18(r26)
/* 80163F04 00160E44  7F E3 FB 78 */	mr r3, r31
/* 80163F08 00160E48  7F 44 D3 78 */	mr r4, r26
/* 80163F0C 00160E4C  38 A1 00 08 */	addi r5, r1, 8
/* 80163F10 00160E50  48 2B 2D 39 */	bl "intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<f>"
/* 80163F14 00160E54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80163F18 00160E58  41 82 00 4C */	beq .L_80163F64
/* 80163F1C 00160E5C  C0 81 00 0C */	lfs f4, 0xc(r1)
/* 80163F20 00160E60  3B 80 00 01 */	li r28, 1
/* 80163F24 00160E64  C0 61 00 08 */	lfs f3, 8(r1)
/* 80163F28 00160E68  EC 04 F0 28 */	fsubs f0, f4, f30
/* 80163F2C 00160E6C  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 80163F30 00160E70  EC 23 F8 28 */	fsubs f1, f3, f31
/* 80163F34 00160E74  EC 45 E8 28 */	fsubs f2, f5, f29
/* 80163F38 00160E78  EC 00 00 32 */	fmuls f0, f0, f0
/* 80163F3C 00160E7C  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 80163F40 00160E80  EC 22 00 BA */	fmadds f1, f2, f2, f0
/* 80163F44 00160E84  FC 01 C8 40 */	fcmpo cr0, f1, f25
/* 80163F48 00160E88  40 80 00 1C */	bge .L_80163F64
/* 80163F4C 00160E8C  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80163F50 00160E90  FF 80 18 90 */	fmr f28, f3
/* 80163F54 00160E94  FF 60 20 90 */	fmr f27, f4
/* 80163F58 00160E98  FF 40 28 90 */	fmr f26, f5
/* 80163F5C 00160E9C  D0 1A 00 48 */	stfs f0, 0x48(r26)
/* 80163F60 00160EA0  FF 20 08 90 */	fmr f25, f1
.L_80163F64:
/* 80163F64 00160EA4  3B DE 00 04 */	addi r30, r30, 4
/* 80163F68 00160EA8  3B 7B 00 01 */	addi r27, r27, 1
.L_80163F6C:
/* 80163F6C 00160EAC  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 80163F70 00160EB0  7C 1B 00 00 */	cmpw r27, r0
/* 80163F74 00160EB4  41 80 FF 5C */	blt .L_80163ED0
/* 80163F78 00160EB8  83 BD 00 04 */	lwz r29, 4(r29)
.L_80163F7C:
/* 80163F7C 00160EBC  28 1D 00 00 */	cmplwi r29, 0
/* 80163F80 00160EC0  40 82 FF 44 */	bne .L_80163EC4
/* 80163F84 00160EC4  D3 9A 00 34 */	stfs f28, 0x34(r26)
/* 80163F88 00160EC8  7F 83 E3 78 */	mr r3, r28
/* 80163F8C 00160ECC  D3 7A 00 38 */	stfs f27, 0x38(r26)
/* 80163F90 00160ED0  D3 5A 00 3C */	stfs f26, 0x3c(r26)
/* 80163F94 00160ED4  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 80163F98 00160ED8  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 80163F9C 00160EDC  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 80163FA0 00160EE0  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 80163FA4 00160EE4  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 80163FA8 00160EE8  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 80163FAC 00160EEC  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 80163FB0 00160EF0  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 80163FB4 00160EF4  E3 61 00 78 */	psq_l f27, 120(r1), 0, qr0
/* 80163FB8 00160EF8  CB 61 00 70 */	lfd f27, 0x70(r1)
/* 80163FBC 00160EFC  E3 41 00 68 */	psq_l f26, 104(r1), 0, qr0
/* 80163FC0 00160F00  CB 41 00 60 */	lfd f26, 0x60(r1)
/* 80163FC4 00160F04  E3 21 00 58 */	psq_l f25, 88(r1), 0, qr0
/* 80163FC8 00160F08  CB 21 00 50 */	lfd f25, 0x50(r1)
/* 80163FCC 00160F0C  BB 21 00 34 */	lmw r25, 0x34(r1)
/* 80163FD0 00160F10  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 80163FD4 00160F14  7C 08 03 A6 */	mtlr r0
/* 80163FD8 00160F18  38 21 00 C0 */	addi r1, r1, 0xc0
/* 80163FDC 00160F1C  4E 80 00 20 */	blr 

.global getBoundBox2d__Q24Game11ShapeMapMgrFR10BoundBox2d
getBoundBox2d__Q24Game11ShapeMapMgrFR10BoundBox2d:
/* 80163FE0 00160F20  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80163FE4 00160F24  7C 08 02 A6 */	mflr r0
/* 80163FE8 00160F28  C0 22 A5 6C */	lfs f1, lbl_805188CC@sda21(r2)
/* 80163FEC 00160F2C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80163FF0 00160F30  C0 02 A5 70 */	lfs f0, lbl_805188D0@sda21(r2)
/* 80163FF4 00160F34  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80163FF8 00160F38  7C 9F 23 78 */	mr r31, r4
/* 80163FFC 00160F3C  38 81 00 08 */	addi r4, r1, 8
/* 80164000 00160F40  D0 21 00 08 */	stfs f1, 8(r1)
/* 80164004 00160F44  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80164008 00160F48  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8016400C 00160F4C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80164010 00160F50  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80164014 00160F54  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80164018 00160F58  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016401C 00160F5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80164020 00160F60  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80164024 00160F64  7D 89 03 A6 */	mtctr r12
/* 80164028 00160F68  4E 80 04 21 */	bctrl 
/* 8016402C 00160F6C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80164030 00160F70  C0 01 00 08 */	lfs f0, 8(r1)
/* 80164034 00160F74  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80164038 00160F78  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8016403C 00160F7C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80164040 00160F80  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80164044 00160F84  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80164048 00160F88  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 8016404C 00160F8C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80164050 00160F90  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80164054 00160F94  7C 08 03 A6 */	mtlr r0
/* 80164058 00160F98  38 21 00 30 */	addi r1, r1, 0x30
/* 8016405C 00160F9C  4E 80 00 20 */	blr 

.global getBoundBox__Q24Game11ShapeMapMgrFR8BoundBox
getBoundBox__Q24Game11ShapeMapMgrFR8BoundBox:
/* 80164060 00160FA0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80164064 00160FA4  7C 08 02 A6 */	mflr r0
/* 80164068 00160FA8  C0 22 A5 6C */	lfs f1, lbl_805188CC@sda21(r2)
/* 8016406C 00160FAC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80164070 00160FB0  C0 02 A5 70 */	lfs f0, lbl_805188D0@sda21(r2)
/* 80164074 00160FB4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80164078 00160FB8  7C 9F 23 78 */	mr r31, r4
/* 8016407C 00160FBC  38 81 00 08 */	addi r4, r1, 8
/* 80164080 00160FC0  D0 21 00 08 */	stfs f1, 8(r1)
/* 80164084 00160FC4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80164088 00160FC8  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8016408C 00160FCC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80164090 00160FD0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80164094 00160FD4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80164098 00160FD8  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016409C 00160FDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801640A0 00160FE0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801640A4 00160FE4  7D 89 03 A6 */	mtctr r12
/* 801640A8 00160FE8  4E 80 04 21 */	bctrl 
/* 801640AC 00160FEC  C0 01 00 08 */	lfs f0, 8(r1)
/* 801640B0 00160FF0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801640B4 00160FF4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801640B8 00160FF8  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801640BC 00160FFC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801640C0 00161000  D0 1F 00 08 */	stfs f0, 8(r31)
/* 801640C4 00161004  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801640C8 00161008  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 801640CC 0016100C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801640D0 00161010  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 801640D4 00161014  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801640D8 00161018  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 801640DC 0016101C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801640E0 00161020  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801640E4 00161024  7C 08 03 A6 */	mtlr r0
/* 801640E8 00161028  38 21 00 30 */	addi r1, r1, 0x30
/* 801640EC 0016102C  4E 80 00 20 */	blr 

.global frozenable__Q24Game6MapMgrFv
frozenable__Q24Game6MapMgrFv:
/* 801640F0 00161030  38 60 00 00 */	li r3, 0
/* 801640F4 00161034  4E 80 00 20 */	blr 

.global doDirectDraw__Q24Game6MapMgrFR8Graphics
doDirectDraw__Q24Game6MapMgrFR8Graphics:
/* 801640F8 00161038  4E 80 00 20 */	blr 

.global doSimulation__Q24Game6MapMgrFf
doSimulation__Q24Game6MapMgrFf:
/* 801640FC 0016103C  4E 80 00 20 */	blr 

.global findRayIntersection__Q24Game6MapMgrFRQ23Sys16RayIntersectInfo
findRayIntersection__Q24Game6MapMgrFRQ23Sys16RayIntersectInfo:
/* 80164100 00161040  38 60 00 00 */	li r3, 0
/* 80164104 00161044  4E 80 00 20 */	blr 

.global createTriangles__Q24Game6MapMgrFRQ23Sys17CreateTriangleArg
createTriangles__Q24Game6MapMgrFRQ23Sys17CreateTriangleArg:
/* 80164108 00161048  4E 80 00 20 */	blr 

.global "doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
"doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv":
/* 8016410C 0016104C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80164110 00161050  7C 08 02 A6 */	mflr r0
/* 80164114 00161054  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8WaterBox>"@ha
/* 80164118 00161058  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016411C 0016105C  38 00 00 00 */	li r0, 0
/* 80164120 00161060  38 84 19 D4 */	addi r4, r4, "__vt__26Iterator<Q24Game8WaterBox>"@l
/* 80164124 00161064  28 00 00 00 */	cmplwi r0, 0
/* 80164128 00161068  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016412C 0016106C  90 81 00 08 */	stw r4, 8(r1)
/* 80164130 00161070  90 01 00 0C */	stw r0, 0xc(r1)
/* 80164134 00161074  90 61 00 10 */	stw r3, 0x10(r1)
/* 80164138 00161078  40 82 00 1C */	bne .L_80164154
/* 8016413C 0016107C  81 83 00 00 */	lwz r12, 0(r3)
/* 80164140 00161080  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80164144 00161084  7D 89 03 A6 */	mtctr r12
/* 80164148 00161088  4E 80 04 21 */	bctrl 
/* 8016414C 0016108C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80164150 00161090  48 00 01 70 */	b .L_801642C0
.L_80164154:
/* 80164154 00161094  81 83 00 00 */	lwz r12, 0(r3)
/* 80164158 00161098  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8016415C 0016109C  7D 89 03 A6 */	mtctr r12
/* 80164160 001610A0  4E 80 04 21 */	bctrl 
/* 80164164 001610A4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80164168 001610A8  48 00 00 58 */	b .L_801641C0
.L_8016416C:
/* 8016416C 001610AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164170 001610B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164174 001610B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80164178 001610B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016417C 001610BC  7D 89 03 A6 */	mtctr r12
/* 80164180 001610C0  4E 80 04 21 */	bctrl 
/* 80164184 001610C4  7C 64 1B 78 */	mr r4, r3
/* 80164188 001610C8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016418C 001610CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80164190 001610D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80164194 001610D4  7D 89 03 A6 */	mtctr r12
/* 80164198 001610D8  4E 80 04 21 */	bctrl 
/* 8016419C 001610DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801641A0 001610E0  40 82 01 20 */	bne .L_801642C0
/* 801641A4 001610E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801641A8 001610E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801641AC 001610EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801641B0 001610F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801641B4 001610F4  7D 89 03 A6 */	mtctr r12
/* 801641B8 001610F8  4E 80 04 21 */	bctrl 
/* 801641BC 001610FC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801641C0:
/* 801641C0 00161100  81 81 00 08 */	lwz r12, 8(r1)
/* 801641C4 00161104  38 61 00 08 */	addi r3, r1, 8
/* 801641C8 00161108  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801641CC 0016110C  7D 89 03 A6 */	mtctr r12
/* 801641D0 00161110  4E 80 04 21 */	bctrl 
/* 801641D4 00161114  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801641D8 00161118  41 82 FF 94 */	beq .L_8016416C
/* 801641DC 0016111C  48 00 00 E4 */	b .L_801642C0
.L_801641E0:
/* 801641E0 00161120  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801641E4 00161124  81 83 00 00 */	lwz r12, 0(r3)
/* 801641E8 00161128  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801641EC 0016112C  7D 89 03 A6 */	mtctr r12
/* 801641F0 00161130  4E 80 04 21 */	bctrl 
/* 801641F4 00161134  81 83 00 00 */	lwz r12, 0(r3)
/* 801641F8 00161138  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801641FC 0016113C  7D 89 03 A6 */	mtctr r12
/* 80164200 00161140  4E 80 04 21 */	bctrl 
/* 80164204 00161144  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80164208 00161148  28 00 00 00 */	cmplwi r0, 0
/* 8016420C 0016114C  40 82 00 24 */	bne .L_80164230
/* 80164210 00161150  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164214 00161154  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164218 00161158  81 83 00 00 */	lwz r12, 0(r3)
/* 8016421C 0016115C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80164220 00161160  7D 89 03 A6 */	mtctr r12
/* 80164224 00161164  4E 80 04 21 */	bctrl 
/* 80164228 00161168  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016422C 0016116C  48 00 00 94 */	b .L_801642C0
.L_80164230:
/* 80164230 00161170  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164234 00161174  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164238 00161178  81 83 00 00 */	lwz r12, 0(r3)
/* 8016423C 0016117C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80164240 00161180  7D 89 03 A6 */	mtctr r12
/* 80164244 00161184  4E 80 04 21 */	bctrl 
/* 80164248 00161188  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016424C 0016118C  48 00 00 58 */	b .L_801642A4
.L_80164250:
/* 80164250 00161190  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164254 00161194  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164258 00161198  81 83 00 00 */	lwz r12, 0(r3)
/* 8016425C 0016119C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80164260 001611A0  7D 89 03 A6 */	mtctr r12
/* 80164264 001611A4  4E 80 04 21 */	bctrl 
/* 80164268 001611A8  7C 64 1B 78 */	mr r4, r3
/* 8016426C 001611AC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80164270 001611B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80164274 001611B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80164278 001611B8  7D 89 03 A6 */	mtctr r12
/* 8016427C 001611BC  4E 80 04 21 */	bctrl 
/* 80164280 001611C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80164284 001611C4  40 82 00 3C */	bne .L_801642C0
/* 80164288 001611C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016428C 001611CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164290 001611D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80164294 001611D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80164298 001611D8  7D 89 03 A6 */	mtctr r12
/* 8016429C 001611DC  4E 80 04 21 */	bctrl 
/* 801642A0 001611E0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801642A4:
/* 801642A4 001611E4  81 81 00 08 */	lwz r12, 8(r1)
/* 801642A8 001611E8  38 61 00 08 */	addi r3, r1, 8
/* 801642AC 001611EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801642B0 001611F0  7D 89 03 A6 */	mtctr r12
/* 801642B4 001611F4  4E 80 04 21 */	bctrl 
/* 801642B8 001611F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801642BC 001611FC  41 82 FF 94 */	beq .L_80164250
.L_801642C0:
/* 801642C0 00161200  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801642C4 00161204  81 83 00 00 */	lwz r12, 0(r3)
/* 801642C8 00161208  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801642CC 0016120C  7D 89 03 A6 */	mtctr r12
/* 801642D0 00161210  4E 80 04 21 */	bctrl 
/* 801642D4 00161214  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801642D8 00161218  7C 04 18 40 */	cmplw r4, r3
/* 801642DC 0016121C  40 82 FF 04 */	bne .L_801641E0
/* 801642E0 00161220  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801642E4 00161224  7C 08 03 A6 */	mtlr r0
/* 801642E8 00161228  38 21 00 20 */	addi r1, r1, 0x20
/* 801642EC 0016122C  4E 80 00 20 */	blr 

.global doViewCalc__Q24Game8WaterBoxFv
doViewCalc__Q24Game8WaterBoxFv:
/* 801642F0 00161230  4E 80 00 20 */	blr 

.global "isDone__26Iterator<Q24Game8WaterBox>Fv"
"isDone__26Iterator<Q24Game8WaterBox>Fv":
/* 801642F4 00161234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801642F8 00161238  7C 08 02 A6 */	mflr r0
/* 801642FC 0016123C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80164300 00161240  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80164304 00161244  7C 7F 1B 78 */	mr r31, r3
/* 80164308 00161248  80 63 00 08 */	lwz r3, 8(r3)
/* 8016430C 0016124C  81 83 00 00 */	lwz r12, 0(r3)
/* 80164310 00161250  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80164314 00161254  7D 89 03 A6 */	mtctr r12
/* 80164318 00161258  4E 80 04 21 */	bctrl 
/* 8016431C 0016125C  80 1F 00 04 */	lwz r0, 4(r31)
/* 80164320 00161260  7C 00 18 50 */	subf r0, r0, r3
/* 80164324 00161264  7C 00 00 34 */	cntlzw r0, r0
/* 80164328 00161268  54 03 D9 7E */	srwi r3, r0, 5
/* 8016432C 0016126C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80164330 00161270  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80164334 00161274  7C 08 03 A6 */	mtlr r0
/* 80164338 00161278  38 21 00 10 */	addi r1, r1, 0x10
/* 8016433C 0016127C  4E 80 00 20 */	blr 

.global "doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
"doSetView__27ObjectMgr<Q24Game8WaterBox>Fi":
/* 80164340 00161280  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80164344 00161284  7C 08 02 A6 */	mflr r0
/* 80164348 00161288  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8WaterBox>"@ha
/* 8016434C 0016128C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80164350 00161290  38 00 00 00 */	li r0, 0
/* 80164354 00161294  38 A5 19 D4 */	addi r5, r5, "__vt__26Iterator<Q24Game8WaterBox>"@l
/* 80164358 00161298  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016435C 0016129C  28 00 00 00 */	cmplwi r0, 0
/* 80164360 001612A0  7C 9F 23 78 */	mr r31, r4
/* 80164364 001612A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80164368 001612A8  90 A1 00 08 */	stw r5, 8(r1)
/* 8016436C 001612AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80164370 001612B0  90 61 00 10 */	stw r3, 0x10(r1)
/* 80164374 001612B4  40 82 00 1C */	bne .L_80164390
/* 80164378 001612B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016437C 001612BC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80164380 001612C0  7D 89 03 A6 */	mtctr r12
/* 80164384 001612C4  4E 80 04 21 */	bctrl 
/* 80164388 001612C8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016438C 001612CC  48 00 01 74 */	b .L_80164500
.L_80164390:
/* 80164390 001612D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80164394 001612D4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80164398 001612D8  7D 89 03 A6 */	mtctr r12
/* 8016439C 001612DC  4E 80 04 21 */	bctrl 
/* 801643A0 001612E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801643A4 001612E4  48 00 00 58 */	b .L_801643FC
.L_801643A8:
/* 801643A8 001612E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801643AC 001612EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801643B0 001612F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801643B4 001612F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801643B8 001612F8  7D 89 03 A6 */	mtctr r12
/* 801643BC 001612FC  4E 80 04 21 */	bctrl 
/* 801643C0 00161300  7C 64 1B 78 */	mr r4, r3
/* 801643C4 00161304  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801643C8 00161308  81 83 00 00 */	lwz r12, 0(r3)
/* 801643CC 0016130C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801643D0 00161310  7D 89 03 A6 */	mtctr r12
/* 801643D4 00161314  4E 80 04 21 */	bctrl 
/* 801643D8 00161318  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801643DC 0016131C  40 82 01 24 */	bne .L_80164500
/* 801643E0 00161320  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801643E4 00161324  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801643E8 00161328  81 83 00 00 */	lwz r12, 0(r3)
/* 801643EC 0016132C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801643F0 00161330  7D 89 03 A6 */	mtctr r12
/* 801643F4 00161334  4E 80 04 21 */	bctrl 
/* 801643F8 00161338  90 61 00 0C */	stw r3, 0xc(r1)
.L_801643FC:
/* 801643FC 0016133C  81 81 00 08 */	lwz r12, 8(r1)
/* 80164400 00161340  38 61 00 08 */	addi r3, r1, 8
/* 80164404 00161344  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80164408 00161348  7D 89 03 A6 */	mtctr r12
/* 8016440C 0016134C  4E 80 04 21 */	bctrl 
/* 80164410 00161350  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80164414 00161354  41 82 FF 94 */	beq .L_801643A8
/* 80164418 00161358  48 00 00 E8 */	b .L_80164500
.L_8016441C:
/* 8016441C 0016135C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164420 00161360  81 83 00 00 */	lwz r12, 0(r3)
/* 80164424 00161364  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80164428 00161368  7D 89 03 A6 */	mtctr r12
/* 8016442C 0016136C  4E 80 04 21 */	bctrl 
/* 80164430 00161370  81 83 00 00 */	lwz r12, 0(r3)
/* 80164434 00161374  7F E4 FB 78 */	mr r4, r31
/* 80164438 00161378  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8016443C 0016137C  7D 89 03 A6 */	mtctr r12
/* 80164440 00161380  4E 80 04 21 */	bctrl 
/* 80164444 00161384  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80164448 00161388  28 00 00 00 */	cmplwi r0, 0
/* 8016444C 0016138C  40 82 00 24 */	bne .L_80164470
/* 80164450 00161390  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164454 00161394  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164458 00161398  81 83 00 00 */	lwz r12, 0(r3)
/* 8016445C 0016139C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80164460 001613A0  7D 89 03 A6 */	mtctr r12
/* 80164464 001613A4  4E 80 04 21 */	bctrl 
/* 80164468 001613A8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016446C 001613AC  48 00 00 94 */	b .L_80164500
.L_80164470:
/* 80164470 001613B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164474 001613B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164478 001613B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016447C 001613BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80164480 001613C0  7D 89 03 A6 */	mtctr r12
/* 80164484 001613C4  4E 80 04 21 */	bctrl 
/* 80164488 001613C8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016448C 001613CC  48 00 00 58 */	b .L_801644E4
.L_80164490:
/* 80164490 001613D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164494 001613D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164498 001613D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016449C 001613DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801644A0 001613E0  7D 89 03 A6 */	mtctr r12
/* 801644A4 001613E4  4E 80 04 21 */	bctrl 
/* 801644A8 001613E8  7C 64 1B 78 */	mr r4, r3
/* 801644AC 001613EC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801644B0 001613F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801644B4 001613F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801644B8 001613F8  7D 89 03 A6 */	mtctr r12
/* 801644BC 001613FC  4E 80 04 21 */	bctrl 
/* 801644C0 00161400  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801644C4 00161404  40 82 00 3C */	bne .L_80164500
/* 801644C8 00161408  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801644CC 0016140C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801644D0 00161410  81 83 00 00 */	lwz r12, 0(r3)
/* 801644D4 00161414  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801644D8 00161418  7D 89 03 A6 */	mtctr r12
/* 801644DC 0016141C  4E 80 04 21 */	bctrl 
/* 801644E0 00161420  90 61 00 0C */	stw r3, 0xc(r1)
.L_801644E4:
/* 801644E4 00161424  81 81 00 08 */	lwz r12, 8(r1)
/* 801644E8 00161428  38 61 00 08 */	addi r3, r1, 8
/* 801644EC 0016142C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801644F0 00161430  7D 89 03 A6 */	mtctr r12
/* 801644F4 00161434  4E 80 04 21 */	bctrl 
/* 801644F8 00161438  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801644FC 0016143C  41 82 FF 94 */	beq .L_80164490
.L_80164500:
/* 80164500 00161440  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164504 00161444  81 83 00 00 */	lwz r12, 0(r3)
/* 80164508 00161448  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8016450C 0016144C  7D 89 03 A6 */	mtctr r12
/* 80164510 00161450  4E 80 04 21 */	bctrl 
/* 80164514 00161454  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164518 00161458  7C 04 18 40 */	cmplw r4, r3
/* 8016451C 0016145C  40 82 FF 00 */	bne .L_8016441C
/* 80164520 00161460  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80164524 00161464  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80164528 00161468  7C 08 03 A6 */	mtlr r0
/* 8016452C 0016146C  38 21 00 20 */	addi r1, r1, 0x20
/* 80164530 00161470  4E 80 00 20 */	blr 

.global doSetView__Q24Game8WaterBoxFi
doSetView__Q24Game8WaterBoxFi:
/* 80164534 00161474  4E 80 00 20 */	blr 

.global "doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
"doEntry__27ObjectMgr<Q24Game8WaterBox>Fv":
/* 80164538 00161478  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016453C 0016147C  7C 08 02 A6 */	mflr r0
/* 80164540 00161480  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8WaterBox>"@ha
/* 80164544 00161484  90 01 00 24 */	stw r0, 0x24(r1)
/* 80164548 00161488  38 00 00 00 */	li r0, 0
/* 8016454C 0016148C  38 84 19 D4 */	addi r4, r4, "__vt__26Iterator<Q24Game8WaterBox>"@l
/* 80164550 00161490  28 00 00 00 */	cmplwi r0, 0
/* 80164554 00161494  90 01 00 14 */	stw r0, 0x14(r1)
/* 80164558 00161498  90 81 00 08 */	stw r4, 8(r1)
/* 8016455C 0016149C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80164560 001614A0  90 61 00 10 */	stw r3, 0x10(r1)
/* 80164564 001614A4  40 82 00 1C */	bne .L_80164580
/* 80164568 001614A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016456C 001614AC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80164570 001614B0  7D 89 03 A6 */	mtctr r12
/* 80164574 001614B4  4E 80 04 21 */	bctrl 
/* 80164578 001614B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016457C 001614BC  48 00 01 70 */	b .L_801646EC
.L_80164580:
/* 80164580 001614C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80164584 001614C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80164588 001614C8  7D 89 03 A6 */	mtctr r12
/* 8016458C 001614CC  4E 80 04 21 */	bctrl 
/* 80164590 001614D0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80164594 001614D4  48 00 00 58 */	b .L_801645EC
.L_80164598:
/* 80164598 001614D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8016459C 001614DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801645A0 001614E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801645A4 001614E4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801645A8 001614E8  7D 89 03 A6 */	mtctr r12
/* 801645AC 001614EC  4E 80 04 21 */	bctrl 
/* 801645B0 001614F0  7C 64 1B 78 */	mr r4, r3
/* 801645B4 001614F4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801645B8 001614F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801645BC 001614FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801645C0 00161500  7D 89 03 A6 */	mtctr r12
/* 801645C4 00161504  4E 80 04 21 */	bctrl 
/* 801645C8 00161508  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801645CC 0016150C  40 82 01 20 */	bne .L_801646EC
/* 801645D0 00161510  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801645D4 00161514  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801645D8 00161518  81 83 00 00 */	lwz r12, 0(r3)
/* 801645DC 0016151C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801645E0 00161520  7D 89 03 A6 */	mtctr r12
/* 801645E4 00161524  4E 80 04 21 */	bctrl 
/* 801645E8 00161528  90 61 00 0C */	stw r3, 0xc(r1)
.L_801645EC:
/* 801645EC 0016152C  81 81 00 08 */	lwz r12, 8(r1)
/* 801645F0 00161530  38 61 00 08 */	addi r3, r1, 8
/* 801645F4 00161534  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801645F8 00161538  7D 89 03 A6 */	mtctr r12
/* 801645FC 0016153C  4E 80 04 21 */	bctrl 
/* 80164600 00161540  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80164604 00161544  41 82 FF 94 */	beq .L_80164598
/* 80164608 00161548  48 00 00 E4 */	b .L_801646EC
.L_8016460C:
/* 8016460C 0016154C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164610 00161550  81 83 00 00 */	lwz r12, 0(r3)
/* 80164614 00161554  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80164618 00161558  7D 89 03 A6 */	mtctr r12
/* 8016461C 0016155C  4E 80 04 21 */	bctrl 
/* 80164620 00161560  81 83 00 00 */	lwz r12, 0(r3)
/* 80164624 00161564  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80164628 00161568  7D 89 03 A6 */	mtctr r12
/* 8016462C 0016156C  4E 80 04 21 */	bctrl 
/* 80164630 00161570  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80164634 00161574  28 00 00 00 */	cmplwi r0, 0
/* 80164638 00161578  40 82 00 24 */	bne .L_8016465C
/* 8016463C 0016157C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164640 00161580  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164644 00161584  81 83 00 00 */	lwz r12, 0(r3)
/* 80164648 00161588  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016464C 0016158C  7D 89 03 A6 */	mtctr r12
/* 80164650 00161590  4E 80 04 21 */	bctrl 
/* 80164654 00161594  90 61 00 0C */	stw r3, 0xc(r1)
/* 80164658 00161598  48 00 00 94 */	b .L_801646EC
.L_8016465C:
/* 8016465C 0016159C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164660 001615A0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164664 001615A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80164668 001615A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8016466C 001615AC  7D 89 03 A6 */	mtctr r12
/* 80164670 001615B0  4E 80 04 21 */	bctrl 
/* 80164674 001615B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80164678 001615B8  48 00 00 58 */	b .L_801646D0
.L_8016467C:
/* 8016467C 001615BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164680 001615C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164684 001615C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80164688 001615C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8016468C 001615CC  7D 89 03 A6 */	mtctr r12
/* 80164690 001615D0  4E 80 04 21 */	bctrl 
/* 80164694 001615D4  7C 64 1B 78 */	mr r4, r3
/* 80164698 001615D8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016469C 001615DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801646A0 001615E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801646A4 001615E4  7D 89 03 A6 */	mtctr r12
/* 801646A8 001615E8  4E 80 04 21 */	bctrl 
/* 801646AC 001615EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801646B0 001615F0  40 82 00 3C */	bne .L_801646EC
/* 801646B4 001615F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801646B8 001615F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801646BC 001615FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801646C0 00161600  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801646C4 00161604  7D 89 03 A6 */	mtctr r12
/* 801646C8 00161608  4E 80 04 21 */	bctrl 
/* 801646CC 0016160C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801646D0:
/* 801646D0 00161610  81 81 00 08 */	lwz r12, 8(r1)
/* 801646D4 00161614  38 61 00 08 */	addi r3, r1, 8
/* 801646D8 00161618  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801646DC 0016161C  7D 89 03 A6 */	mtctr r12
/* 801646E0 00161620  4E 80 04 21 */	bctrl 
/* 801646E4 00161624  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801646E8 00161628  41 82 FF 94 */	beq .L_8016467C
.L_801646EC:
/* 801646EC 0016162C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801646F0 00161630  81 83 00 00 */	lwz r12, 0(r3)
/* 801646F4 00161634  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801646F8 00161638  7D 89 03 A6 */	mtctr r12
/* 801646FC 0016163C  4E 80 04 21 */	bctrl 
/* 80164700 00161640  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164704 00161644  7C 04 18 40 */	cmplw r4, r3
/* 80164708 00161648  40 82 FF 04 */	bne .L_8016460C
/* 8016470C 0016164C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80164710 00161650  7C 08 03 A6 */	mtlr r0
/* 80164714 00161654  38 21 00 20 */	addi r1, r1, 0x20
/* 80164718 00161658  4E 80 00 20 */	blr 

.global doEntry__Q24Game8WaterBoxFv
doEntry__Q24Game8WaterBoxFv:
/* 8016471C 0016165C  4E 80 00 20 */	blr 

.global "doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
"doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv":
/* 80164720 00161660  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80164724 00161664  7C 08 02 A6 */	mflr r0
/* 80164728 00161668  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8WaterBox>"@ha
/* 8016472C 0016166C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80164730 00161670  38 00 00 00 */	li r0, 0
/* 80164734 00161674  38 84 19 D4 */	addi r4, r4, "__vt__26Iterator<Q24Game8WaterBox>"@l
/* 80164738 00161678  28 00 00 00 */	cmplwi r0, 0
/* 8016473C 0016167C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80164740 00161680  90 81 00 08 */	stw r4, 8(r1)
/* 80164744 00161684  90 01 00 0C */	stw r0, 0xc(r1)
/* 80164748 00161688  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016474C 0016168C  40 82 00 1C */	bne .L_80164768
/* 80164750 00161690  81 83 00 00 */	lwz r12, 0(r3)
/* 80164754 00161694  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80164758 00161698  7D 89 03 A6 */	mtctr r12
/* 8016475C 0016169C  4E 80 04 21 */	bctrl 
/* 80164760 001616A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80164764 001616A4  48 00 01 70 */	b .L_801648D4
.L_80164768:
/* 80164768 001616A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016476C 001616AC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80164770 001616B0  7D 89 03 A6 */	mtctr r12
/* 80164774 001616B4  4E 80 04 21 */	bctrl 
/* 80164778 001616B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8016477C 001616BC  48 00 00 58 */	b .L_801647D4
.L_80164780:
/* 80164780 001616C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164784 001616C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80164788 001616C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016478C 001616CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80164790 001616D0  7D 89 03 A6 */	mtctr r12
/* 80164794 001616D4  4E 80 04 21 */	bctrl 
/* 80164798 001616D8  7C 64 1B 78 */	mr r4, r3
/* 8016479C 001616DC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801647A0 001616E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801647A4 001616E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801647A8 001616E8  7D 89 03 A6 */	mtctr r12
/* 801647AC 001616EC  4E 80 04 21 */	bctrl 
/* 801647B0 001616F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801647B4 001616F4  40 82 01 20 */	bne .L_801648D4
/* 801647B8 001616F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801647BC 001616FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801647C0 00161700  81 83 00 00 */	lwz r12, 0(r3)
/* 801647C4 00161704  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801647C8 00161708  7D 89 03 A6 */	mtctr r12
/* 801647CC 0016170C  4E 80 04 21 */	bctrl 
/* 801647D0 00161710  90 61 00 0C */	stw r3, 0xc(r1)
.L_801647D4:
/* 801647D4 00161714  81 81 00 08 */	lwz r12, 8(r1)
/* 801647D8 00161718  38 61 00 08 */	addi r3, r1, 8
/* 801647DC 0016171C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801647E0 00161720  7D 89 03 A6 */	mtctr r12
/* 801647E4 00161724  4E 80 04 21 */	bctrl 
/* 801647E8 00161728  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801647EC 0016172C  41 82 FF 94 */	beq .L_80164780
/* 801647F0 00161730  48 00 00 E4 */	b .L_801648D4
.L_801647F4:
/* 801647F4 00161734  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801647F8 00161738  81 83 00 00 */	lwz r12, 0(r3)
/* 801647FC 0016173C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80164800 00161740  7D 89 03 A6 */	mtctr r12
/* 80164804 00161744  4E 80 04 21 */	bctrl 
/* 80164808 00161748  81 83 00 00 */	lwz r12, 0(r3)
/* 8016480C 0016174C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80164810 00161750  7D 89 03 A6 */	mtctr r12
/* 80164814 00161754  4E 80 04 21 */	bctrl 
/* 80164818 00161758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016481C 0016175C  28 00 00 00 */	cmplwi r0, 0
/* 80164820 00161760  40 82 00 24 */	bne .L_80164844
/* 80164824 00161764  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164828 00161768  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016482C 0016176C  81 83 00 00 */	lwz r12, 0(r3)
/* 80164830 00161770  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80164834 00161774  7D 89 03 A6 */	mtctr r12
/* 80164838 00161778  4E 80 04 21 */	bctrl 
/* 8016483C 0016177C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80164840 00161780  48 00 00 94 */	b .L_801648D4
.L_80164844:
/* 80164844 00161784  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164848 00161788  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016484C 0016178C  81 83 00 00 */	lwz r12, 0(r3)
/* 80164850 00161790  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80164854 00161794  7D 89 03 A6 */	mtctr r12
/* 80164858 00161798  4E 80 04 21 */	bctrl 
/* 8016485C 0016179C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80164860 001617A0  48 00 00 58 */	b .L_801648B8
.L_80164864:
/* 80164864 001617A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80164868 001617A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016486C 001617AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80164870 001617B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80164874 001617B4  7D 89 03 A6 */	mtctr r12
/* 80164878 001617B8  4E 80 04 21 */	bctrl 
/* 8016487C 001617BC  7C 64 1B 78 */	mr r4, r3
/* 80164880 001617C0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80164884 001617C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80164888 001617C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8016488C 001617CC  7D 89 03 A6 */	mtctr r12
/* 80164890 001617D0  4E 80 04 21 */	bctrl 
/* 80164894 001617D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80164898 001617D8  40 82 00 3C */	bne .L_801648D4
/* 8016489C 001617DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801648A0 001617E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801648A4 001617E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801648A8 001617E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801648AC 001617EC  7D 89 03 A6 */	mtctr r12
/* 801648B0 001617F0  4E 80 04 21 */	bctrl 
/* 801648B4 001617F4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801648B8:
/* 801648B8 001617F8  81 81 00 08 */	lwz r12, 8(r1)
/* 801648BC 001617FC  38 61 00 08 */	addi r3, r1, 8
/* 801648C0 00161800  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801648C4 00161804  7D 89 03 A6 */	mtctr r12
/* 801648C8 00161808  4E 80 04 21 */	bctrl 
/* 801648CC 0016180C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801648D0 00161810  41 82 FF 94 */	beq .L_80164864
.L_801648D4:
/* 801648D4 00161814  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801648D8 00161818  81 83 00 00 */	lwz r12, 0(r3)
/* 801648DC 0016181C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801648E0 00161820  7D 89 03 A6 */	mtctr r12
/* 801648E4 00161824  4E 80 04 21 */	bctrl 
/* 801648E8 00161828  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801648EC 0016182C  7C 04 18 40 */	cmplw r4, r3
/* 801648F0 00161830  40 82 FF 04 */	bne .L_801647F4
/* 801648F4 00161834  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801648F8 00161838  7C 08 03 A6 */	mtlr r0
/* 801648FC 0016183C  38 21 00 20 */	addi r1, r1, 0x20
/* 80164900 00161840  4E 80 00 20 */	blr 

.global doAnimation__Q24Game8WaterBoxFv
doAnimation__Q24Game8WaterBoxFv:
/* 80164904 00161844  4E 80 00 20 */	blr 

.global "__ml__26Iterator<Q24Game8WaterBox>Fv"
"__ml__26Iterator<Q24Game8WaterBox>Fv":
/* 80164908 00161848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016490C 0016184C  7C 08 02 A6 */	mflr r0
/* 80164910 00161850  7C 64 1B 78 */	mr r4, r3
/* 80164914 00161854  90 01 00 14 */	stw r0, 0x14(r1)
/* 80164918 00161858  80 63 00 08 */	lwz r3, 8(r3)
/* 8016491C 0016185C  80 84 00 04 */	lwz r4, 4(r4)
/* 80164920 00161860  81 83 00 00 */	lwz r12, 0(r3)
/* 80164924 00161864  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80164928 00161868  7D 89 03 A6 */	mtctr r12
/* 8016492C 0016186C  4E 80 04 21 */	bctrl 
/* 80164930 00161870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80164934 00161874  7C 08 03 A6 */	mtlr r0
/* 80164938 00161878  38 21 00 10 */	addi r1, r1, 0x10
/* 8016493C 0016187C  4E 80 00 20 */	blr 

.global "next__26Iterator<Q24Game8WaterBox>Fv"
"next__26Iterator<Q24Game8WaterBox>Fv":
/* 80164940 00161880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80164944 00161884  7C 08 02 A6 */	mflr r0
/* 80164948 00161888  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016494C 0016188C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80164950 00161890  7C 7F 1B 78 */	mr r31, r3
/* 80164954 00161894  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80164958 00161898  28 00 00 00 */	cmplwi r0, 0
/* 8016495C 0016189C  40 82 00 24 */	bne .L_80164980
/* 80164960 001618A0  80 7F 00 08 */	lwz r3, 8(r31)
/* 80164964 001618A4  80 9F 00 04 */	lwz r4, 4(r31)
/* 80164968 001618A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016496C 001618AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80164970 001618B0  7D 89 03 A6 */	mtctr r12
/* 80164974 001618B4  4E 80 04 21 */	bctrl 
/* 80164978 001618B8  90 7F 00 04 */	stw r3, 4(r31)
/* 8016497C 001618BC  48 00 00 94 */	b .L_80164A10
.L_80164980:
/* 80164980 001618C0  80 7F 00 08 */	lwz r3, 8(r31)
/* 80164984 001618C4  80 9F 00 04 */	lwz r4, 4(r31)
/* 80164988 001618C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8016498C 001618CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80164990 001618D0  7D 89 03 A6 */	mtctr r12
/* 80164994 001618D4  4E 80 04 21 */	bctrl 
/* 80164998 001618D8  90 7F 00 04 */	stw r3, 4(r31)
/* 8016499C 001618DC  48 00 00 58 */	b .L_801649F4
.L_801649A0:
/* 801649A0 001618E0  80 7F 00 08 */	lwz r3, 8(r31)
/* 801649A4 001618E4  80 9F 00 04 */	lwz r4, 4(r31)
/* 801649A8 001618E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801649AC 001618EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801649B0 001618F0  7D 89 03 A6 */	mtctr r12
/* 801649B4 001618F4  4E 80 04 21 */	bctrl 
/* 801649B8 001618F8  7C 64 1B 78 */	mr r4, r3
/* 801649BC 001618FC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801649C0 00161900  81 83 00 00 */	lwz r12, 0(r3)
/* 801649C4 00161904  81 8C 00 08 */	lwz r12, 8(r12)
/* 801649C8 00161908  7D 89 03 A6 */	mtctr r12
/* 801649CC 0016190C  4E 80 04 21 */	bctrl 
/* 801649D0 00161910  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801649D4 00161914  40 82 00 3C */	bne .L_80164A10
/* 801649D8 00161918  80 7F 00 08 */	lwz r3, 8(r31)
/* 801649DC 0016191C  80 9F 00 04 */	lwz r4, 4(r31)
/* 801649E0 00161920  81 83 00 00 */	lwz r12, 0(r3)
/* 801649E4 00161924  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801649E8 00161928  7D 89 03 A6 */	mtctr r12
/* 801649EC 0016192C  4E 80 04 21 */	bctrl 
/* 801649F0 00161930  90 7F 00 04 */	stw r3, 4(r31)
.L_801649F4:
/* 801649F4 00161934  7F E3 FB 78 */	mr r3, r31
/* 801649F8 00161938  81 9F 00 00 */	lwz r12, 0(r31)
/* 801649FC 0016193C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80164A00 00161940  7D 89 03 A6 */	mtctr r12
/* 80164A04 00161944  4E 80 04 21 */	bctrl 
/* 80164A08 00161948  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80164A0C 0016194C  41 82 FF 94 */	beq .L_801649A0
.L_80164A10:
/* 80164A10 00161950  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80164A14 00161954  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80164A18 00161958  7C 08 03 A6 */	mtlr r0
/* 80164A1C 0016195C  38 21 00 10 */	addi r1, r1, 0x10
/* 80164A20 00161960  4E 80 00 20 */	blr 

.global "first__26Iterator<Q24Game8WaterBox>Fv"
"first__26Iterator<Q24Game8WaterBox>Fv":
/* 80164A24 00161964  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80164A28 00161968  7C 08 02 A6 */	mflr r0
/* 80164A2C 0016196C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80164A30 00161970  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80164A34 00161974  7C 7F 1B 78 */	mr r31, r3
/* 80164A38 00161978  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80164A3C 0016197C  28 00 00 00 */	cmplwi r0, 0
/* 80164A40 00161980  40 82 00 20 */	bne .L_80164A60
/* 80164A44 00161984  80 7F 00 08 */	lwz r3, 8(r31)
/* 80164A48 00161988  81 83 00 00 */	lwz r12, 0(r3)
/* 80164A4C 0016198C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80164A50 00161990  7D 89 03 A6 */	mtctr r12
/* 80164A54 00161994  4E 80 04 21 */	bctrl 
/* 80164A58 00161998  90 7F 00 04 */	stw r3, 4(r31)
/* 80164A5C 0016199C  48 00 00 90 */	b .L_80164AEC
.L_80164A60:
/* 80164A60 001619A0  80 7F 00 08 */	lwz r3, 8(r31)
/* 80164A64 001619A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80164A68 001619A8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80164A6C 001619AC  7D 89 03 A6 */	mtctr r12
/* 80164A70 001619B0  4E 80 04 21 */	bctrl 
/* 80164A74 001619B4  90 7F 00 04 */	stw r3, 4(r31)
/* 80164A78 001619B8  48 00 00 58 */	b .L_80164AD0
.L_80164A7C:
/* 80164A7C 001619BC  80 7F 00 08 */	lwz r3, 8(r31)
/* 80164A80 001619C0  80 9F 00 04 */	lwz r4, 4(r31)
/* 80164A84 001619C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80164A88 001619C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80164A8C 001619CC  7D 89 03 A6 */	mtctr r12
/* 80164A90 001619D0  4E 80 04 21 */	bctrl 
/* 80164A94 001619D4  7C 64 1B 78 */	mr r4, r3
/* 80164A98 001619D8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80164A9C 001619DC  81 83 00 00 */	lwz r12, 0(r3)
/* 80164AA0 001619E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80164AA4 001619E4  7D 89 03 A6 */	mtctr r12
/* 80164AA8 001619E8  4E 80 04 21 */	bctrl 
/* 80164AAC 001619EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80164AB0 001619F0  40 82 00 3C */	bne .L_80164AEC
/* 80164AB4 001619F4  80 7F 00 08 */	lwz r3, 8(r31)
/* 80164AB8 001619F8  80 9F 00 04 */	lwz r4, 4(r31)
/* 80164ABC 001619FC  81 83 00 00 */	lwz r12, 0(r3)
/* 80164AC0 00161A00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80164AC4 00161A04  7D 89 03 A6 */	mtctr r12
/* 80164AC8 00161A08  4E 80 04 21 */	bctrl 
/* 80164ACC 00161A0C  90 7F 00 04 */	stw r3, 4(r31)
.L_80164AD0:
/* 80164AD0 00161A10  7F E3 FB 78 */	mr r3, r31
/* 80164AD4 00161A14  81 9F 00 00 */	lwz r12, 0(r31)
/* 80164AD8 00161A18  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80164ADC 00161A1C  7D 89 03 A6 */	mtctr r12
/* 80164AE0 00161A20  4E 80 04 21 */	bctrl 
/* 80164AE4 00161A24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80164AE8 00161A28  41 82 FF 94 */	beq .L_80164A7C
.L_80164AEC:
/* 80164AEC 00161A2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80164AF0 00161A30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80164AF4 00161A34  7C 08 03 A6 */	mtlr r0
/* 80164AF8 00161A38  38 21 00 10 */	addi r1, r1, 0x10
/* 80164AFC 00161A3C  4E 80 00 20 */	blr 

.global __sinit_mapMgr_cpp
__sinit_mapMgr_cpp:
/* 80164B00 00161A40  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80164B04 00161A44  38 00 FF FF */	li r0, -1
/* 80164B08 00161A48  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80164B0C 00161A4C  3C 60 80 4B */	lis r3, lbl_804B18A8@ha
/* 80164B10 00161A50  90 0D 93 00 */	stw r0, lbl_80515980@sda21(r13)
/* 80164B14 00161A54  D4 03 18 A8 */	stfsu f0, lbl_804B18A8@l(r3)
/* 80164B18 00161A58  D0 0D 93 04 */	stfs f0, lbl_80515984@sda21(r13)
/* 80164B1C 00161A5C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80164B20 00161A60  D0 03 00 08 */	stfs f0, 8(r3)
/* 80164B24 00161A64  4E 80 00 20 */	blr 

.global "@36@4@frozenable__Q24Game6MapMgrFv"
"@36@4@frozenable__Q24Game6MapMgrFv":
/* 80164B28 00161A68  39 60 00 04 */	li r11, 4
/* 80164B2C 00161A6C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80164B30 00161A70  7C 63 5A 14 */	add r3, r3, r11
/* 80164B34 00161A74  38 63 FF DC */	addi r3, r3, -36
/* 80164B38 00161A78  4B FF F5 B8 */	b frozenable__Q24Game6MapMgrFv

.global "@36@4@doDirectDraw__Q24Game6MapMgrFR8Graphics"
"@36@4@doDirectDraw__Q24Game6MapMgrFR8Graphics":
/* 80164B3C 00161A7C  39 60 00 04 */	li r11, 4
/* 80164B40 00161A80  7D 63 58 2E */	lwzx r11, r3, r11
/* 80164B44 00161A84  7C 63 5A 14 */	add r3, r3, r11
/* 80164B48 00161A88  38 63 FF DC */	addi r3, r3, -36
/* 80164B4C 00161A8C  4B FF F5 AC */	b doDirectDraw__Q24Game6MapMgrFR8Graphics

.global "@36@4@doSimulation__Q24Game6MapMgrFf"
"@36@4@doSimulation__Q24Game6MapMgrFf":
/* 80164B50 00161A90  39 60 00 04 */	li r11, 4
/* 80164B54 00161A94  7D 63 58 2E */	lwzx r11, r3, r11
/* 80164B58 00161A98  7C 63 5A 14 */	add r3, r3, r11
/* 80164B5C 00161A9C  38 63 FF DC */	addi r3, r3, -36
/* 80164B60 00161AA0  4B FF F5 9C */	b doSimulation__Q24Game6MapMgrFf

.global "@84@4@frozenable__Q24Game6MapMgrFv"
"@84@4@frozenable__Q24Game6MapMgrFv":
/* 80164B64 00161AA4  39 60 00 04 */	li r11, 4
/* 80164B68 00161AA8  7D 63 58 2E */	lwzx r11, r3, r11
/* 80164B6C 00161AAC  7C 63 5A 14 */	add r3, r3, r11
/* 80164B70 00161AB0  38 63 FF AC */	addi r3, r3, -84
/* 80164B74 00161AB4  4B FF F5 7C */	b frozenable__Q24Game6MapMgrFv

.global "@84@4@doDirectDraw__Q24Game6MapMgrFR8Graphics"
"@84@4@doDirectDraw__Q24Game6MapMgrFR8Graphics":
/* 80164B78 00161AB8  39 60 00 04 */	li r11, 4
/* 80164B7C 00161ABC  7D 63 58 2E */	lwzx r11, r3, r11
/* 80164B80 00161AC0  7C 63 5A 14 */	add r3, r3, r11
/* 80164B84 00161AC4  38 63 FF AC */	addi r3, r3, -84
/* 80164B88 00161AC8  4B FF F5 70 */	b doDirectDraw__Q24Game6MapMgrFR8Graphics

.global "@84@4@doSimulation__Q24Game6MapMgrFf"
"@84@4@doSimulation__Q24Game6MapMgrFf":
/* 80164B8C 00161ACC  39 60 00 04 */	li r11, 4
/* 80164B90 00161AD0  7D 63 58 2E */	lwzx r11, r3, r11
/* 80164B94 00161AD4  7C 63 5A 14 */	add r3, r3, r11
/* 80164B98 00161AD8  38 63 FF AC */	addi r3, r3, -84
/* 80164B9C 00161ADC  4B FF F5 60 */	b doSimulation__Q24Game6MapMgrFf

.global "@84@4@doViewCalc__Q24Game11ShapeMapMgrFv"
"@84@4@doViewCalc__Q24Game11ShapeMapMgrFv":
/* 80164BA0 00161AE0  39 60 00 04 */	li r11, 4
/* 80164BA4 00161AE4  7D 63 58 2E */	lwzx r11, r3, r11
/* 80164BA8 00161AE8  7C 63 5A 14 */	add r3, r3, r11
/* 80164BAC 00161AEC  38 63 FF AC */	addi r3, r3, -84
/* 80164BB0 00161AF0  4B FF F1 10 */	b doViewCalc__Q24Game11ShapeMapMgrFv

.global "@84@4@doSetView__Q24Game11ShapeMapMgrFi"
"@84@4@doSetView__Q24Game11ShapeMapMgrFi":
/* 80164BB4 00161AF4  39 60 00 04 */	li r11, 4
/* 80164BB8 00161AF8  7D 63 58 2E */	lwzx r11, r3, r11
/* 80164BBC 00161AFC  7C 63 5A 14 */	add r3, r3, r11
/* 80164BC0 00161B00  38 63 FF AC */	addi r3, r3, -84
/* 80164BC4 00161B04  4B FF F0 9C */	b doSetView__Q24Game11ShapeMapMgrFi

.global "@84@4@doEntry__Q24Game11ShapeMapMgrFv"
"@84@4@doEntry__Q24Game11ShapeMapMgrFv":
/* 80164BC8 00161B08  39 60 00 04 */	li r11, 4
/* 80164BCC 00161B0C  7D 63 58 2E */	lwzx r11, r3, r11
/* 80164BD0 00161B10  7C 63 5A 14 */	add r3, r3, r11
/* 80164BD4 00161B14  38 63 FF AC */	addi r3, r3, -84
/* 80164BD8 00161B18  4B FF F1 34 */	b doEntry__Q24Game11ShapeMapMgrFv

.global "@84@4@doAnimation__Q24Game11ShapeMapMgrFv"
"@84@4@doAnimation__Q24Game11ShapeMapMgrFv":
/* 80164BDC 00161B1C  39 60 00 04 */	li r11, 4
/* 80164BE0 00161B20  7D 63 58 2E */	lwzx r11, r3, r11
/* 80164BE4 00161B24  7C 63 5A 14 */	add r3, r3, r11
/* 80164BE8 00161B28  38 63 FF AC */	addi r3, r3, -84
/* 80164BEC 00161B2C  4B FF F0 3C */	b doAnimation__Q24Game11ShapeMapMgrFv
