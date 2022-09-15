#include "Game/MapMgr.h"
#include "Game/WaterBox.h"
#include "MapCollision.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_mapMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
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
        .4byte
   findRayIntersection__Q24Game11ShapeMapMgrFRQ23Sys16RayIntersectInfo .4byte
   traceMove__Q24Game11ShapeMapMgrFRQ24Game8MoveInfof .4byte
   "getMinY__Q24Game11ShapeMapMgrFR10Vector3<f>" .4byte
   getCurrTri__Q24Game11ShapeMapMgrFRQ24Game11CurrTriInfo .4byte
   createTriangles__Q24Game11ShapeMapMgrFRQ23Sys17CreateTriangleArg .4byte
   setupJUTTextures__Q24Game6MapMgrFv .4byte frozenable__Q24Game6MapMgrFv .4byte
   update__Q24Game6MapMgrFv .4byte do_update__Q24Game11ShapeMapMgrFv .4byte
   drawCollision__Q24Game11ShapeMapMgrFR8GraphicsRQ23Sys6Sphere .4byte
   doSimulation__Q24Game6MapMgrFf .4byte doDirectDraw__Q24Game6MapMgrFR8Graphics
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
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
TDispTriangleArray::TDispTriangleArray(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void TDispTriangleArray::alloc(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
TDispTriangle::TDispTriangle(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void TDispTriangleArray::clear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016239C
 * Size:	000044
 */
void TDispTriangleArray::store(Sys::Triangle&, Sys::VertexTable&, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r7, 0(r3)
	lwz      r0, 4(r3)
	cmpw     r7, r0
	bge      lbl_801623D0
	mulli    r0, r7, 0x60
	lwz      r8, 8(r3)
	addi     r7, r7, 1
	stw      r7, 0(r3)
	add      r3, r8, r0
	bl       store__Q24Game13TDispTriangleFRQ23Sys8TriangleRQ23Sys11VertexTablei

lbl_801623D0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801623E0
 * Size:	000044
 */
void TDispTriangleArray::store(Matrixf&, Sys::Triangle&, Sys::VertexTable&, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r8, 0(r3)
	lwz      r0, 4(r3)
	cmpw     r8, r0
	bge      lbl_80162414
	mulli    r0, r8, 0x60
	lwz      r9, 8(r3)
	addi     r8, r8, 1
	stw      r8, 0(r3)
	add      r3, r9, r0
	bl
store__Q24Game13TDispTriangleFR7MatrixfRQ23Sys8TriangleRQ23Sys11VertexTablei

lbl_80162414:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void TDispTriangleArray::draw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80162424
 * Size:	0000C0
 */
void TDispTriangle::store(Sys::Triangle&, Sys::VertexTable&, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r9, r3
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r4, 0(r3)
	addi     r3, r9, 0x30
	lwz      r7, 0(r4)
	lwz      r8, 0x24(r5)
	mulli    r7, r7, 0xc
	add      r7, r8, r7
	lfs      f0, 0(r7)
	stfs     f0, 4(r9)
	lfs      f0, 4(r7)
	stfs     f0, 8(r9)
	lfs      f0, 8(r7)
	stfs     f0, 0xc(r9)
	lwz      r7, 4(r4)
	lwz      r8, 0x24(r5)
	mulli    r7, r7, 0xc
	add      r7, r8, r7
	lfs      f0, 0(r7)
	stfs     f0, 0x10(r9)
	lfs      f0, 4(r7)
	stfs     f0, 0x14(r9)
	lfs      f0, 8(r7)
	stfs     f0, 0x18(r9)
	lwz      r4, 8(r4)
	lwz      r5, 0x24(r5)
	mulli    r4, r4, 0xc
	add      r4, r5, r4
	lfs      f0, 0(r4)
	stfs     f0, 0x1c(r9)
	lfs      f0, 4(r4)
	stfs     f0, 0x20(r9)
	lfs      f0, 8(r4)
	stfs     f0, 0x24(r9)
	stb      r0, 0x28(r9)
	stb      r0, 0x29(r9)
	lhz      r0, 0x28(r9)
	ori      r0, r0, 1
	sth      r0, 0x28(r9)
	stw      r6, 0x2c(r9)
	bl       PSMTXIdentity
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801624E4
 * Size:	000100
 */
void TDispTriangle::store(Matrixf&, Sys::Triangle&, Sys::VertexTable&, int)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r29, r5
	mr       r28, r4
	mr       r27, r3
	mr       r30, r6
	mr       r31, r7
	stw      r29, 0(r3)
	mr       r3, r28
	lwz      r0, 0(r5)
	addi     r5, r1, 0x20
	lwz      r4, 0x24(r6)
	mulli    r0, r0, 0xc
	add      r4, r4, r0
	bl       PSMTXMultVec
	lfs      f1, 0x24(r1)
	mr       r3, r28
	lfs      f2, 0x28(r1)
	addi     r5, r1, 0x14
	lfs      f0, 0x20(r1)
	stfs     f0, 4(r27)
	stfs     f1, 8(r27)
	stfs     f2, 0xc(r27)
	lwz      r0, 4(r29)
	lwz      r4, 0x24(r30)
	mulli    r0, r0, 0xc
	add      r4, r4, r0
	bl       PSMTXMultVec
	lfs      f1, 0x18(r1)
	mr       r3, r28
	lfs      f2, 0x1c(r1)
	addi     r5, r1, 8
	lfs      f0, 0x14(r1)
	stfs     f0, 0x10(r27)
	stfs     f1, 0x14(r27)
	stfs     f2, 0x18(r27)
	lwz      r0, 8(r29)
	lwz      r4, 0x24(r30)
	mulli    r0, r0, 0xc
	add      r4, r4, r0
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	li       r0, 0
	lfs      f2, 0x10(r1)
	mr       r3, r28
	lfs      f0, 8(r1)
	addi     r4, r27, 0x30
	stfs     f0, 0x1c(r27)
	stfs     f1, 0x20(r27)
	stfs     f2, 0x24(r27)
	stb      r0, 0x28(r27)
	stb      r0, 0x29(r27)
	lhz      r0, 0x28(r27)
	ori      r0, r0, 1
	sth      r0, 0x28(r27)
	stw      r31, 0x2c(r27)
	bl       PSMTXCopy
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TDispTriangle::draw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801625E4
 * Size:	000098
 */
MapMgr::MapMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80162614
	addi     r0, r31, 0x24
	lis      r3, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, __vt__16GenericObjectMgr@l
	stw      r0, 0x24(r31)

lbl_80162614:
	lis      r3, __vt__Q24Game6MapMgr@ha
	addi     r0, r31, 0x24
	addi     r4, r3, __vt__Q24Game6MapMgr@l
	li       r3, 0x48
	stw      r4, 4(r31)
	addi     r5, r4, 0x50
	lwz      r4, 0(r31)
	stw      r5, 0(r4)
	lwz      r4, 0(r31)
	subf     r0, r4, r0
	stw      r0, 4(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80162654
	bl       __ct__Q24Game6SeaMgrFv
	mr       r0, r3

lbl_80162654:
	stw      r0, 0x10(r31)
	li       r0, 0
	mr       r3, r31
	stw      r0, 8(r31)
	stw      r0, 0xc(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016267C
 * Size:	00007C
 */
void MapMgr::getStartPosition(Vector3f&, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r5, 0xc(r3)
	cmplwi   r5, 0
	beq      lbl_801626D4
	lfs      f0, 0x38(r5)
	stfs     f0, 0(r31)
	lfs      f0, 0x3c(r5)
	stfs     f0, 4(r31)
	lfs      f0, 0x40(r5)
	stfs     f0, 8(r31)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518868@sda21(r2)
	fadds    f0, f0, f1
	stfs     f0, 4(r31)
	b        lbl_801626E4

lbl_801626D4:
	lfs      f0, lbl_8051886C@sda21(r2)
	stfs     f0, 0(r31)
	stfs     f0, 4(r31)
	stfs     f0, 8(r31)

lbl_801626E4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801626F8
 * Size:	00002C
 */
void MapMgr::getMapRotation()
{
	/*
	lwz      r3, 0xc(r3)
	cmplwi   r3, 0
	beq      lbl_8016271C
	lfs      f1, lbl_80518874@sda21(r2)
	lfs      f0, 0x44(r3)
	lfs      f2, lbl_80518870@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f1, f2, f0
	blr

lbl_8016271C:
	lfs      f1, lbl_8051886C@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80162724
 * Size:	00001C
 */
void MapMgr::getDemoMatrix(void)
{
	/*
	lwz      r3, 0xc(r3)
	cmplwi   r3, 0
	beq      lbl_80162738
	addi     r3, r3, 0xd0
	blr

lbl_80162738:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80162740
 * Size:	000704
 */
void MapMgr::getBestAngle(Vector3f&, float, float)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stfd     f29, 0x150(r1)
	psq_st   f29, 344(r1), 0, qr0
	stfd     f28, 0x140(r1)
	psq_st   f28, 328(r1), 0, qr0
	stfd     f27, 0x130(r1)
	psq_st   f27, 312(r1), 0, qr0
	stfd     f26, 0x120(r1)
	psq_st   f26, 296(r1), 0, qr0
	stfd     f25, 0x110(r1)
	psq_st   f25, 280(r1), 0, qr0
	stfd     f24, 0x100(r1)
	psq_st   f24, 264(r1), 0, qr0
	stmw     r26, 0xe8(r1)
	fmr      f27, f2
	lfs      f0, lbl_8051886C@sda21(r2)
	fmr      f26, f1
	mr       r27, r3
	mr       r26, r4
	fcmpo    cr0, f27, f0
	bgt      lbl_801627C8
	lis      r3, lbl_8047E19C@ha
	lis      r5, lbl_8047E1A8@ha
	addi     r3, r3, lbl_8047E19C@l
	li       r4, 0x1e8
	addi     r5, r5, lbl_8047E1A8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801627C8:
	lfs      f0, 0(r26)
	mr       r3, r27
	addi     r4, r1, 8
	stfs     f0, 8(r1)
	lfs      f0, 4(r26)
	stfs     f0, 0xc(r1)
	lfs      f0, 8(r26)
	stfs     f0, 0x10(r1)
	lwz      r12, 4(r27)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518878@sda21(r2)
	addi     r29, r1, 0x7c
	lfs      f28, lbl_8051886C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	fadds    f0, f0, f1
	lfs      f29, lbl_8051887C@sda21(r2)
	stfs     f28, 0x7c(r1)
	mr       r30, r29
	lfd      f30, lbl_80518898@sda21(r2)
	addi     r26, r3, sincosTable___5JMath@l
	stfs     f0, 0xc(r1)
	li       r28, 0
	lfs      f31, lbl_80518880@sda21(r2)
	lis      r31, 0x4330
	stfs     f28, 0x80(r1)
	lfs      f25, lbl_80518888@sda21(r2)
	stfs     f28, 0x84(r1)
	stfs     f28, 0x88(r1)
	stfs     f28, 0x8c(r1)
	stfs     f28, 0x90(r1)
	stfs     f28, 0x94(r1)
	stfs     f28, 0x98(r1)
	stfs     f28, 0x9c(r1)
	stfs     f28, 0xa0(r1)
	stfs     f28, 0xa4(r1)
	stfs     f28, 0xa8(r1)
	stfs     f28, 0xac(r1)
	stfs     f28, 0xb0(r1)
	stfs     f28, 0xb4(r1)
	stfs     f28, 0xb8(r1)

lbl_80162870:
	xoris    r0, r28, 0x8000
	stw      r31, 0xc0(r1)
	fmr      f1, f27
	stw      r0, 0xc4(r1)
	lfd      f0, 0xc0(r1)
	fsubs    f0, f0, f30
	fmuls    f24, f29, f0
	bl       tan
	frsp     f1, f1
	fmr      f0, f24
	fcmpo    cr0, f24, f28
	fmuls    f6, f26, f1
	bge      lbl_801628A8
	fneg     f0, f24

lbl_801628A8:
	fmuls    f0, f0, f31
	fcmpo    cr0, f24, f28
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r26, r0
	lfs      f0, 4(r3)
	fmuls    f4, f26, f0
	bge      lbl_801628FC
	lfs      f0, lbl_80518884@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f24, f0
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8016291C

lbl_801628FC:
	fmuls    f0, f24, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8016291C:
	fmuls    f1, f26, f0
	lfs      f3, 0x10(r1)
	lfs      f2, 0xc(r1)
	li       r0, 0
	lfs      f0, 8(r1)
	fadds    f5, f4, f3
	fadds    f4, f6, f2
	stfs     f25, 0x6c(r1)
	fadds    f1, f1, f0
	mr       r3, r27
	stw      r0, 0x70(r1)
	addi     r4, r1, 0x54
	stb      r0, 0x74(r1)
	stw      r28, 0x70(r1)
	stfs     f0, 0x54(r1)
	stfs     f2, 0x58(r1)
	stfs     f3, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f4, 0x64(r1)
	stfs     f5, 0x68(r1)
	stfs     f25, 0x6c(r1)
	bl checkBeamCollision__Q24Game6MapMgrFRQ34Game6MapMgr16BeamCollisionArg lfs
f0, 0x78(r1) addi     r28, r28, 1 cmpwi    r28, 0x10 stfs     f0, 0(r30) addi
r30, r30, 4 blt      lbl_80162870 li       r0, 2 addi     r4, r1, 0x14 addi r3,
r1, 0x7c lfs      f1, lbl_8051886C@sda21(r2) li       r5, 0 lfs      f0,
lbl_8051888C@sda21(r2) mtctr    r0

lbl_801629A8:
	addi     r7, r5, 0xf
	addi     r11, r5, 1
	slwi     r6, r7, 0x1c
	slwi     r0, r5, 0x1c
	srwi     r10, r7, 0x1f
	srwi     r9, r5, 0x1f
	subf     r7, r10, r6
	addi     r6, r5, 0x10
	subf     r0, r9, r0
	slwi     r12, r11, 0x1c
	rotlwi   r8, r7, 4
	srwi     r28, r11, 0x1f
	rotlwi   r7, r0, 4
	slwi     r0, r6, 0x1c
	addi     r11, r5, 2
	add      r10, r8, r10
	addi     r8, r5, 0x11
	add      r7, r7, r9
	subf     r27, r28, r12
	slwi     r12, r10, 2
	slwi     r7, r7, 2
	srwi     r9, r6, 0x1f
	addi     r10, r5, 3
	rotlwi   r27, r27, 4
	addi     r6, r5, 0x12
	subf     r0, r9, r0
	add      r27, r27, r28
	lfsx     f3, r3, r12
	lfsx     f2, r3, r7
	rotlwi   r0, r0, 4
	addi     r7, r5, 4
	slwi     r12, r27, 2
	add      r0, r0, r9
	fadds    f3, f3, f2
	slwi     r0, r0, 2
	lfsx     f4, r3, r12
	lfsx     f2, r3, r0
	slwi     r0, r11, 0x1c
	srwi     r12, r11, 0x1f
	subf     r0, r12, r0
	fadds    f5, f4, f3
	rotlwi   r11, r0, 4
	slwi     r0, r8, 0x1c
	srwi     r9, r8, 0x1f
	fadds    f3, f2, f4
	subf     r0, r9, r0
	add      r12, r11, r12
	slwi     r11, r10, 0x1c
	rotlwi   r8, r0, 4
	srwi     r10, r10, 0x1f
	slwi     r12, r12, 2
	slwi     r0, r6, 0x1c
	add      r8, r8, r9
	subf     r9, r10, r11
	slwi     r8, r8, 2
	srwi     r6, r6, 0x1f
	lfsx     f4, r3, r12
	rotlwi   r9, r9, 4
	subf     r0, r6, r0
	lfsx     f2, r3, r8
	fadds    f3, f4, f3
	add      r8, r9, r10
	rotlwi   r0, r0, 4
	fdivs    f5, f5, f0
	slwi     r8, r8, 2
	stfs     f1, 0(r4)
	add      r0, r0, r6
	slwi     r6, r7, 0x1c
	srwi     r7, r7, 0x1f
	subf     r6, r7, r6
	slwi     r0, r0, 2
	rotlwi   r6, r6, 4
	stfs     f5, 0(r4)
	add      r6, r6, r7
	fadds    f4, f2, f4
	lfsx     f5, r3, r8
	slwi     r6, r6, 2
	lfsx     f2, r3, r0
	fdivs    f6, f3, f0
	stfs     f1, 4(r4)
	lfsx     f3, r3, r6
	fadds    f4, f5, f4
	stfs     f6, 4(r4)
	fadds    f2, f2, f5
	stfs     f1, 8(r4)
	fdivs    f4, f4, f0
	fadds    f2, f3, f2
	stfs     f4, 8(r4)
	stfs     f1, 0xc(r4)
	fdivs    f2, f2, f0
	stfs     f2, 0xc(r4)
	addi     r7, r5, 0x13
	addi     r11, r5, 5
	slwi     r0, r7, 0x1c
	addi     r6, r5, 0x14
	srwi     r10, r7, 0x1f
	slwi     r12, r11, 0x1c
	subf     r0, r10, r0
	srwi     r27, r11, 0x1f
	rotlwi   r7, r0, 4
	addi     r9, r5, 6
	add      r11, r7, r10
	slwi     r0, r6, 0x1c
	srwi     r7, r6, 0x1f
	subf     r12, r27, r12
	slwi     r6, r11, 2
	addi     r8, r5, 0x15
	subf     r0, r7, r0
	lfsx     f2, r3, r6
	rotlwi   r11, r12, 4
	srwi     r12, r9, 0x1f
	rotlwi   r0, r0, 4
	fadds    f3, f2, f3
	add      r0, r0, r7
	add      r6, r11, r27
	slwi     r11, r6, 2
	addi     r10, r5, 7
	slwi     r0, r0, 2
	lfsx     f2, r3, r0
	slwi     r0, r9, 0x1c
	subf     r9, r12, r0
	lfsx     f4, r3, r11
	rotlwi   r11, r9, 4
	slwi     r0, r8, 0x1c
	add      r11, r11, r12
	fadds    f6, f4, f3
	slwi     r11, r11, 2
	fadds    f3, f2, f4
	lfsx     f5, r3, r11
	srwi     r8, r8, 0x1f
	subf     r0, r8, r0
	fadds    f4, f5, f3
	rotlwi   r0, r0, 4
	fdivs    f3, f6, f0
	add      r0, r0, r8
	slwi     r0, r0, 2
	slwi     r9, r10, 0x1c
	srwi     r10, r10, 0x1f
	stfs     f1, 0x10(r4)
	subf     r9, r10, r9
	stfs     f3, 0x10(r4)
	lfsx     f2, r3, r0
	addi     r6, r5, 0x16
	slwi     r0, r6, 0x1c
	rotlwi   r8, r9, 4
	srwi     r6, r6, 0x1f
	addi     r7, r5, 8
	subf     r0, r6, r0
	add      r8, r8, r10
	rotlwi   r0, r0, 4
	fadds    f3, f2, f5
	add      r0, r0, r6
	slwi     r8, r8, 2
	slwi     r0, r0, 2
	srwi     r6, r7, 0x1f
	lfsx     f2, r3, r0
	slwi     r0, r7, 0x1c
	lfsx     f5, r3, r8
	subf     r0, r6, r0
	fdivs    f6, f4, f0
	rotlwi   r0, r0, 4
	stfs     f1, 0x14(r4)
	add      r0, r0, r6
	addi     r5, r5, 8
	slwi     r0, r0, 2
	fadds    f4, f5, f3
	stfs     f6, 0x14(r4)
	fadds    f2, f2, f5
	lfsx     f3, r3, r0
	stfs     f1, 0x18(r4)
	fdivs    f4, f4, f0
	fadds    f2, f3, f2
	stfs     f4, 0x18(r4)
	stfs     f1, 0x1c(r4)
	fdivs    f2, f2, f0
	stfs     f2, 0x1c(r4)
	addi     r4, r4, 0x20
	bdnz     lbl_801629A8
	lfs      f7, 0x14(r1)
	li       r0, 2
	lfs      f6, 0x18(r1)
	li       r3, 0
	lfs      f5, 0x1c(r1)
	li       r4, 0
	lfs      f4, 0x20(r1)
	lfs      f3, 0x24(r1)
	lfs      f2, 0x28(r1)
	lfs      f1, 0x2c(r1)
	lfs      f0, 0x30(r1)
	stfs     f7, 0x7c(r1)
	lfs      f7, 0x34(r1)
	stfs     f6, 0x80(r1)
	lfs      f6, 0x38(r1)
	stfs     f5, 0x84(r1)
	lfs      f5, 0x3c(r1)
	stfs     f4, 0x88(r1)
	lfs      f4, 0x40(r1)
	stfs     f3, 0x8c(r1)
	lfs      f3, 0x44(r1)
	stfs     f2, 0x90(r1)
	lfs      f2, 0x48(r1)
	stfs     f1, 0x94(r1)
	lfs      f1, 0x4c(r1)
	stfs     f0, 0x98(r1)
	lfs      f0, 0x50(r1)
	stfs     f7, 0x9c(r1)
	lfs      f7, lbl_80518890@sda21(r2)
	stfs     f6, 0xa0(r1)
	stfs     f5, 0xa4(r1)
	stfs     f4, 0xa8(r1)
	stfs     f3, 0xac(r1)
	stfs     f2, 0xb0(r1)
	stfs     f1, 0xb4(r1)
	stfs     f0, 0xb8(r1)
	mtctr    r0

lbl_80162D04:
	lfs      f0, 0(r29)
	fcmpo    cr0, f7, f0
	ble      lbl_80162D18
	fmr      f7, f0
	mr       r3, r4

lbl_80162D18:
	lfs      f0, 4(r29)
	addi     r4, r4, 1
	fcmpo    cr0, f7, f0
	ble      lbl_80162D30
	fmr      f7, f0
	mr       r3, r4

lbl_80162D30:
	lfs      f0, 8(r29)
	addi     r4, r4, 1
	fcmpo    cr0, f7, f0
	ble      lbl_80162D48
	fmr      f7, f0
	mr       r3, r4

lbl_80162D48:
	lfs      f0, 0xc(r29)
	addi     r4, r4, 1
	fcmpo    cr0, f7, f0
	ble      lbl_80162D60
	fmr      f7, f0
	mr       r3, r4

lbl_80162D60:
	lfs      f0, 0x10(r29)
	addi     r4, r4, 1
	fcmpo    cr0, f7, f0
	ble      lbl_80162D78
	fmr      f7, f0
	mr       r3, r4

lbl_80162D78:
	lfs      f0, 0x14(r29)
	addi     r4, r4, 1
	fcmpo    cr0, f7, f0
	ble      lbl_80162D90
	fmr      f7, f0
	mr       r3, r4

lbl_80162D90:
	lfs      f0, 0x18(r29)
	addi     r4, r4, 1
	fcmpo    cr0, f7, f0
	ble      lbl_80162DA8
	fmr      f7, f0
	mr       r3, r4

lbl_80162DA8:
	lfs      f0, 0x1c(r29)
	addi     r4, r4, 1
	fcmpo    cr0, f7, f0
	ble      lbl_80162DC0
	fmr      f7, f0
	mr       r3, r4

lbl_80162DC0:
	addi     r29, r29, 0x20
	addi     r4, r4, 1
	bdnz     lbl_80162D04
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xdc(r1)
	lfd      f1, lbl_80518898@sda21(r2)
	stw      r0, 0xd8(r1)
	lfs      f2, lbl_8051887C@sda21(r2)
	lfd      f0, 0xd8(r1)
	fsubs    f0, f0, f1
	fmuls    f1, f2, f0
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	psq_l    f28, 328(r1), 0, qr0
	lfd      f28, 0x140(r1)
	psq_l    f27, 312(r1), 0, qr0
	lfd      f27, 0x130(r1)
	psq_l    f26, 296(r1), 0, qr0
	lfd      f26, 0x120(r1)
	psq_l    f25, 280(r1), 0, qr0
	lfd      f25, 0x110(r1)
	psq_l    f24, 264(r1), 0, qr0
	lfd      f24, 0x100(r1)
	lmw      r26, 0xe8(r1)
	lwz      r0, 0x184(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	80162E44
 * Size:	0002A4
 */
void MapMgr::checkBeamCollision(Game::MapMgr::BeamCollisionArg&)
{
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
	stmw     r26, 0xc8(r1)
	li       r0, 0
	lfs      f1, lbl_805188A0@sda21(r2)
	stb      r0, 0x20(r4)
	mr       r27, r4
	lfs      f0, lbl_8051886C@sda21(r2)
	mr       r26, r3
	stfs     f1, 0x24(r4)
	lfs      f2, 0x10(r4)
	lfs      f1, 4(r4)
	lfs      f3, 0x14(r4)
	fsubs    f4, f2, f1
	lfs      f2, 8(r4)
	lfs      f1, 0xc(r4)
	fsubs    f5, f3, f2
	lfs      f7, 0(r4)
	fmuls    f2, f4, f4
	fsubs    f3, f1, f7
	fmuls    f6, f5, f5
	fmadds   f1, f3, f3, f2
	fadds    f2, f6, f1
	fcmpo    cr0, f2, f0
	ble      lbl_80162ED4
	ble      lbl_80162ED8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80162ED8

lbl_80162ED4:
	fmr      f2, f0

lbl_80162ED8:
	lfs      f0, lbl_8051886C@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80162EFC
	lfs      f0, lbl_805188A4@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0
	b        lbl_80162F00

lbl_80162EFC:
	fmr      f2, f0

lbl_80162F00:
	lfs      f29, lbl_8051886C@sda21(r2)
	fcmpu    cr0, f29, f2
	beq      lbl_801630BC
	lfs      f0, lbl_805188A8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f1, 0x18(r27)
	addi     r29, r3, sincosTable___5JMath@l
	fdivs    f6, f2, f0
	lfs      f30, lbl_805188A4@sda21(r2)
	stfs     f7, 0x14(r1)
	addi     r30, r1, 0x14
	lfs      f31, lbl_805188AC@sda21(r2)
	addi     r31, r1, 8
	lfs      f0, 4(r27)
	fmuls    f2, f3, f6
	fmuls    f3, f4, f6
	li       r28, 0
	stfs     f0, 0x18(r1)
	fmuls    f4, f5, f6
	lfs      f0, 8(r27)
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x20(r1)

lbl_80162F58:
	stfs     f2, 8(r1)
	li       r5, 0
	lfs      f0, 0x800(r29)
	li       r0, -1
	stfs     f3, 0xc(r1)
	mr       r3, r26
	fmr      f1, f30
	addi     r4, r1, 0x24
	stfs     f4, 0x10(r1)
	lfs      f2, 0(r27)
	stfs     f2, 0x14(r1)
	lfs      f2, 4(r27)
	stfs     f2, 0x18(r1)
	lfs      f2, 8(r27)
	stfs     f2, 0x1c(r1)
	stw      r30, 0x24(r1)
	stw      r31, 0x28(r1)
	stfs     f30, 0x2c(r1)
	stfs     f29, 0x30(r1)
	stw      r5, 0x34(r1)
	stw      r5, 0x68(r1)
	stb      r5, 0x98(r1)
	stb      r5, 0x3d(r1)
	stb      r5, 0x3c(r1)
	stw      r5, 0x6c(r1)
	stw      r5, 0x38(r1)
	stb      r5, 0xb4(r1)
	stw      r5, 0xb8(r1)
	stfs     f0, 0x50(r1)
	stfs     f31, 0x54(r1)
	stw      r0, 0xbc(r1)
	stw      r5, 0x70(r1)
	stb      r5, 0x3e(r1)
	lwz      r12, 4(r26)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, platMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80163004
	lfs      f1, lbl_805188A4@sda21(r2)
	addi     r4, r1, 0x24
	bl       traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof

lbl_80163004:
	lwz      r0, 0x6c(r1)
	cmplwi   r0, 0
	bne      lbl_80163028
	lwz      r0, 0x68(r1)
	cmplwi   r0, 0
	bne      lbl_80163028
	lwz      r0, 0x70(r1)
	cmplwi   r0, 0
	beq      lbl_80163034

lbl_80163028:
	li       r0, 1
	stb      r0, 0x20(r27)
	b        lbl_80163064

lbl_80163034:
	lfs      f0, 0x14(r1)
	addi     r28, r28, 1
	cmpwi    r28, 0x1e
	stfs     f0, 0(r27)
	lfs      f0, 0x18(r1)
	stfs     f0, 4(r27)
	lfs      f0, 0x1c(r1)
	stfs     f0, 8(r27)
	lfs      f2, 8(r1)
	lfs      f3, 0xc(r1)
	lfs      f4, 0x10(r1)
	blt      lbl_80162F58

lbl_80163064:
	lfs      f1, 0x10(r27)
	lfs      f0, 4(r27)
	lfs      f3, 0x14(r27)
	fsubs    f4, f1, f0
	lfs      f2, 8(r27)
	lfs      f1, 0xc(r27)
	lfs      f0, 0(r27)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_8051886C@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801630B4
	ble      lbl_801630B8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801630B8

lbl_801630B4:
	fmr      f1, f0

lbl_801630B8:
	stfs     f1, 0x24(r27)

lbl_801630BC:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	lmw      r26, 0xc8(r1)
	lwz      r0, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	801630E8
 * Size:	000804
 */
void ShapeMapMgr::load(Game::ShapeMapMgr::LoadArg&)
{
	/*
	stwu     r1, -0x2b30(r1)
	mflr     r0
	lis      r5, lbl_8047E190@ha
	stw      r0, 0x2b34(r1)
	stmw     r26, 0x2b18(r1)
	mr       r31, r3
	mr       r29, r4
	addi     r30, r5, lbl_8047E190@l
	addi     r4, r2, lbl_80518860@sda21
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805188B0@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r5, 0(r29)
	addi     r3, r1, 0x810
	addi     r4, r30, 0x24
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x810
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	cmplwi   r3, 0
	bne      lbl_801631A8
	li       r0, 0xc
	li       r3, 0
	mtctr    r0

lbl_80163164:
	addi     r3, r3, 8
	bdnz     lbl_80163164
	subfic   r0, r3, 0x64
	mtctr    r0
	cmpwi    r3, 0x64
	bge      lbl_80163180

lbl_8016317C:
	bdnz     lbl_8016317C

lbl_80163180:
	lwz      r5, 0(r29)
	addi     r3, r1, 0x810
	addi     r4, r30, 0x30
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x810
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection

lbl_801631A8:
	cmplwi   r3, 0
	bne      lbl_801631C4
	addi     r3, r30, 0xc
	addi     r5, r30, 0x18
	li       r4, 0x2d0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801631C4:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805188B0@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r30, 0x48
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	li       r4, 0
	beq      lbl_80163208
	lwz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_80163208
	li       r4, 1

lbl_80163208:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80163224
	addi     r3, r30, 0xc
	addi     r5, r30, 0x18
	li       r4, 0x2d9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80163224:
	mr       r3, r27
	lis      r4, 0x2004
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lis      r4, 4
	mr       r27, r3
	bl       newSharedDisplayList__12J3DModelDataFUl
	mr       r3, r27
	bl       makeSharedDL__12J3DModelDataFv
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80163268
	mr       r4, r27
	lis      r5, 2
	li       r6, 2
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_80163268:
	stw      r0, 0x34(r31)
	li       r4, 0x200
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	bl       newDifferedDisplayList__8J3DModelFUl
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3c
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x40
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801632EC
	li       r4, 2
	bl       __ct__Q34Game4Farm7FarmMgrFUl
	mr       r0, r3

lbl_801632EC:
	stw      r0, farmMgr__Q24Game4Farm@sda21(r13)
	li       r27, 0

lbl_801632F4:
	addi     r3, r1, 0x610
	addi     r4, r30, 0x54
	addi     r5, r27, 1
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x610
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r4, r3, r3
	beq      lbl_80163330
	lwz      r3, farmMgr__Q24Game4Farm@sda21(r13)
	bl       addFarmBmd__Q34Game4Farm7FarmMgrFPv
	addi     r27, r27, 1
	cmpwi    r27, 0xa
	blt      lbl_801632F4

lbl_80163330:
	lwz      r3, 0x34(r31)
	li       r4, 0
	bl       enableMaterialAnim__Q28SysShape5ModelFi
	li       r0, 0
	li       r27, 0
	stw      r0, 0x24(r31)
	stw      r0, 0x2c(r31)

lbl_8016334C:
	addi     r3, r1, 0x110
	addi     r4, r30, 0x60
	addi     r5, r27, 1
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x110
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	cmplwi   r3, 0
	beq      lbl_8016338C
	lwz      r3, 0x24(r31)
	addi     r27, r27, 1
	cmpwi    r27, 0x64
	addi     r0, r3, 1
	stw      r0, 0x24(r31)
	blt      lbl_8016334C

lbl_8016338C:
	lwz      r0, 0x24(r31)
	cmpwi    r0, 0
	ble      lbl_80163478
	stw      r0, 0x2c(r31)
	lwz      r28, 0x24(r31)
	slwi     r3, r28, 4
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys15MatTexAnimationFv@ha
	mr       r7, r28
	addi     r4, r4, __ct__Q23Sys15MatTexAnimationFv@l
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x28(r31)
	lwz      r28, 0x2c(r31)
	mulli    r3, r28, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys15MatLoopAnimatorFv@ha
	mr       r7, r28
	addi     r4, r4, __ct__Q23Sys15MatLoopAnimatorFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	li       r27, 0
	stw      r3, 0x30(r31)
	mr       r28, r27
	li       r26, 0
	b        lbl_8016346C

lbl_80163404:
	addi     r3, r1, 0x10
	addi     r4, r30, 0x60
	addi     r5, r26, 1
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x10
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r4, 0x34(r31)
	lwz      r0, 0x28(r31)
	lwz      r5, 8(r4)
	mr       r4, r3
	add      r3, r0, r27
	lwz      r5, 4(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	lwz      r3, 0x30(r31)
	lwz      r0, 0x28(r31)
	add      r3, r3, r28
	lwz      r12, 0(r3)
	add      r4, r0, r27
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r27, r27, 0x10
	addi     r28, r28, 0xc
	addi     r26, r26, 1

lbl_8016346C:
	lwz      r0, 0x24(r31)
	cmpw     r26, r0
	blt      lbl_80163404

lbl_80163478:
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r5, 4(r29)
	addi     r3, r1, 0x410
	addi     r4, r30, 0x70
	crclr    6
	bl       sprintf
	li       r0, 0
	addi     r3, r1, 0x410
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
	or.      r28, r3, r3
	beq      lbl_80163520
	mr       r4, r28
	addi     r3, r1, 0x26f0
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x26fc(r1)
	bne      lbl_80163500
	li       r0, 0
	stw      r0, 0x2b04(r1)

lbl_80163500:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80163518
	bl       getLightMgr__Q24Game10GameSystemFv
	addi     r4, r1, 0x26f0
	bl       loadParm__Q24Game12GameLightMgrFR6Stream

lbl_80163518:
	mr       r3, r28
	bl       __dla__FPv

lbl_80163520:
	lwz      r5, 0(r29)
	addi     r3, r1, 0x210
	addi     r4, r30, 0x80
	crclr    6
	bl       sprintf
	lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r3, r1, 0x210
	li       r4, 1
	li       r6, 2
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r28, r3, r3
	beq      lbl_80163684
	mr       r4, r28
	addi     r3, r30, 0x90
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r26, r3, r3
	bne      lbl_80163578
	addi     r3, r30, 0xc
	addi     r5, r30, 0x18
	li       r4, 0x377
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80163578:
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x9c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r4, r26
	addi     r3, r1, 0x22d0
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	addi     r3, r31, 0x38
	addi     r4, r1, 0x22d0
	bl       read__12MapCollisionFR6Stream
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x9c
	bl       heapStatusEnd__6SystemFPc
	mr       r4, r28
	addi     r3, r30, 0xac
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r26, r3, r3
	beq      lbl_80163614
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xbc
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r4, r26
	addi     r3, r1, 0x1eb0
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1ebc(r1)
	bne      lbl_801635FC
	li       r0, 0
	stw      r0, 0x22c4(r1)

lbl_801635FC:
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0x1eb0
	bl       read__Q24Game6SeaMgrFR6Stream
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xbc
	bl       heapStatusEnd__6SystemFPc

lbl_80163614:
	mr       r4, r28
	addi     r3, r30, 0xc8
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r26, r3, r3
	beq      lbl_8016366C
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_80163640
	bl       __ct__Q27MapCode3MgrFv
	mr       r27, r3

lbl_80163640:
	mr       r4, r26
	addi     r3, r1, 0x1a90
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	mr       r3, r27
	addi     r4, r1, 0x1a90
	bl       read__Q27MapCode3MgrFR6Stream
	lwz      r4, 0x50(r31)
	mr       r3, r27
	lwz      r4, 0x1c(r4)
	bl       attachCodes__Q27MapCode3MgrFPQ23Sys13TriangleTable

lbl_8016366C:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_80163808

lbl_80163684:
	li       r0, 0
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	li       r6, 0
	li       r7, 0
	lwz      r3, 0xc(r29)
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r27, r3
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x9c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r4, r27
	addi     r3, r1, 0x1670
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	addi     r3, r31, 0x38
	addi     r4, r1, 0x1670
	bl       read__12MapCollisionFR6Stream
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x9c
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r27
	bl       __dla__FPv
	lwz      r3, 0x10(r29)
	cmplwi   r3, 0
	beq      lbl_80163784
	li       r0, 0
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r27, r3
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xbc
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r4, r27
	addi     r3, r1, 0x1250
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x125c(r1)
	bne      lbl_80163764
	li       r0, 0
	stw      r0, 0x1664(r1)

lbl_80163764:
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0x1250
	bl       read__Q24Game6SeaMgrFR6Stream
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xbc
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r27
	bl       __dla__FPv

lbl_80163784:
	lwz      r3, 0x14(r29)
	cmplwi   r3, 0
	beq      lbl_80163808
	li       r0, 0
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r27, r3
	li       r3, 0x28
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801637D4
	bl       __ct__Q27MapCode3MgrFv
	mr       r28, r3

lbl_801637D4:
	mr       r4, r27
	addi     r3, r1, 0xe30
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	mr       r3, r28
	addi     r4, r1, 0xe30
	bl       read__Q27MapCode3MgrFR6Stream
	lwz      r4, 0x50(r31)
	mr       r3, r28
	lwz      r4, 0x1c(r4)
	bl       attachCodes__Q27MapCode3MgrFPQ23Sys13TriangleTable
	mr       r3, r27
	bl       __dla__FPv

lbl_80163808:
	lwz      r3, 0x1c(r29)
	cmplwi   r3, 0
	beq      lbl_801638CC
	li       r0, 0
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r27, r3
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xd4
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r4, r27
	addi     r3, r1, 0xa10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0xa1c(r1)
	bne      lbl_80163878
	li       r0, 0
	stw      r0, 0xe24(r1)

lbl_80163878:
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	bne      lbl_801638A0
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8016389C
	bl       __ct__Q24Game12GameRouteMgrFv
	mr       r0, r3

lbl_8016389C:
	stw      r0, 8(r31)

lbl_801638A0:
	lwz      r3, 8(r31)
	addi     r4, r1, 0xa10
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xd4
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r27
	bl       __dla__FPv

lbl_801638CC:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518860@sda21
	bl       heapStatusEnd__6SystemFPc
	lmw      r26, 0x2b18(r1)
	lwz      r0, 0x2b34(r1)
	mtlr     r0
	addi     r1, r1, 0x2b30
	blr
	*/
}

namespace Sys {

/*
 * @generated{__ct__Q23Sys15MatLoopAnimatorFv}
 * --INFO--
 * Address:	801638EC
 * Size:	00003C
 */
// MatLoopAnimator::MatLoopAnimator(void)
// {
// 	/*
// stwu     r1, -0x10(r1)
// mflr     r0
// stw      r0, 0x14(r1)
// stw      r31, 0xc(r1)
// mr       r31, r3
// bl       __ct__Q23Sys15MatBaseAnimatorFv
// lis      r4, __vt__Q23Sys15MatLoopAnimator@ha
// mr       r3, r31
// addi     r0, r4, __vt__Q23Sys15MatLoopAnimator@l
// stw      r0, 0(r31)
// lwz      r31, 0xc(r1)
// lwz      r0, 0x14(r1)
// mtlr     r0
// addi     r1, r1, 0x10
// blr
// 	*/
// }

} // namespace Sys

/*
 * --INFO--
 * Address:	80163928
 * Size:	000034
 */
void MapMgr::findWater(Sys::Sphere&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_80163948
	bl       findWater__Q24Game6SeaMgrFRQ23Sys6Sphere
	b        lbl_8016394C

lbl_80163948:
	li       r3, 0

lbl_8016394C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016395C
 * Size:	00009C
 */
void ShapeMapMgr::do_update(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801639DC
	li       r30, 0
	li       r31, 0
	b        lbl_801639AC

lbl_80163994:
	lwz      r0, 0x30(r29)
	lfs      f1, lbl_805188A8@sda21(r2)
	add      r3, r0, r31
	bl       animate__Q23Sys15MatBaseAnimatorFf
	addi     r31, r31, 0xc
	addi     r30, r30, 1

lbl_801639AC:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80163994
	lwz      r3, 0x34(r29)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r29)
	lwz      r3, 8(r3)
	bl       diff__8J3DModelFv

lbl_801639DC:
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
 * Address:	801639F8
 * Size:	000050
 */
void MapMgr::update(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       clearPerfMonitor__Q24Game6MapMgrFv
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_80163A20
	bl       update__Q24Game6SeaMgrFv

lbl_80163A20:
	mr       r3, r31
	lwz      r12, 4(r31)
	lwz      r12, 0x40(r12)
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
 * Address:	80163A48
 * Size:	000004
 */
void MapMgr::do_update(void) { }

/*
 * --INFO--
 * Address:	80163A4C
 * Size:	000018
 */
void MapMgr::clearPerfMonitor()
{
	/*
	li       r0, 0
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000258
 */
void MapMgr::draw2d(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80163A64
 * Size:	0000AC
 */
void ShapeMapMgr::drawCollision(Graphics&, Sys::Sphere&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	li       r4, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	bl       initPrimDraw__8GraphicsFP7Matrixf
	li       r0, 0x32
	li       r5, 0xff
	stb      r0, 0x84(r30)
	li       r0, 0xa
	li       r3, 0x20
	li       r4, 0
	stb      r5, 0x85(r30)
	stb      r0, 0x86(r30)
	stb      r5, 0x87(r30)
	bl       GXSetLineWidth
	lwz      r3, 0x50(r29)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x50(r29)
	cmplwi   r3, 0
	lwz      r5, 0x18(r4)
	lwz      r6, 0x1c(r4)
	beq      lbl_80163AF4
	mr       r4, r30
	li       r7, 1
	bl
draw__Q23Sys12TriIndexListFR8GraphicsRQ23Sys11VertexTableRQ23Sys13TriangleTableb

lbl_80163AF4:
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
 * Address:	80163B10
 * Size:	00002C
 */
void ShapeMapMgr::createTriangles(Sys::CreateTriangleArg&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x38(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80163B3C
 * Size:	000030
 */
void MapCollision::createTriangles(Sys::CreateTriangleArg&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
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

namespace Sys {

/*
 * --INFO--
 * Address:	80163B6C
 * Size:	000004
 */
void TriDivider::createTriangles(Sys::CreateTriangleArg&) { }

} // namespace Sys

/*
 * --INFO--
 * Address:	80163B70
 * Size:	00008C
 */
// void getMinY__Q24Game11ShapeMapMgrFR10Vector3f(void)
float ShapeMapMgr::getMinY(Vector3f&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f1, lbl_8051886C@sda21(r2)
	li       r5, 0
	stw      r0, 0x44(r1)
	li       r0, 1
	lfs      f3, lbl_80518890@sda21(r2)
	lfs      f2, lbl_805188B8@sda21(r2)
	lfs      f0, lbl_805188A4@sda21(r2)
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
	lwzu     r12, 0x38(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	80163BFC
 * Size:	00002C
 */
void ShapeMapMgr::getCurrTri(Game::CurrTriInfo&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x38(r3)
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
 * Address:	80163C28
 * Size:	000038
 */
void ShapeMapMgr::doAnimation(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_80163C50
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl

lbl_80163C50:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80163C60
 * Size:	000060
 */
void ShapeMapMgr::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	clrlwi   r4, r4, 0x10
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x34(r3)
	bl       setCurrentViewNo__Q28SysShape5ModelFUl
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_80163CA8
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl

lbl_80163CA8:
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
 * Address:	80163CC0
 * Size:	00004C
 */
void ShapeMapMgr::doViewCalc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_80163CF0
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl

lbl_80163CF0:
	lwz      r3, 0x34(r31)
	bl       viewCalc__Q28SysShape5ModelFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80163D0C
 * Size:	0000C0
 */
void ShapeMapMgr::doEntry(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_805188BC@sda21
	li       r5, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r6, sys@sda21(r13)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r0, gameSystem__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80163D90
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_80163D5C
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_80163D5C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 2
	bl       setDrawBuffer__Q24Game10GameSystemFi
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	bl       setDrawBuffer__Q24Game10GameSystemFi
	b        lbl_80163DA8

lbl_80163D90:
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80163DA8:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805188BC@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80163DCC
 * Size:	000214
 */
void ShapeMapMgr::findRayIntersection(Sys::RayIntersectInfo&)
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
	stfd     f26, 0x60(r1)
	psq_st   f26, 104(r1), 0, qr0
	stfd     f25, 0x50(r1)
	psq_st   f25, 88(r1), 0, qr0
	stmw     r25, 0x34(r1)
	mr       r26, r4
	lfs      f0, lbl_8051886C@sda21(r2)
	lfs      f30, 4(r4)
	mr       r25, r3
	lfs      f6, 0x10(r4)
	lfs      f31, 0(r4)
	fsubs    f1, f30, f6
	lfs      f7, 0xc(r4)
	lfs      f29, 8(r4)
	lfs      f5, 0x14(r4)
	fsubs    f3, f31, f7
	fmuls    f1, f1, f1
	fsubs    f2, f29, f5
	fmadds   f1, f3, f3, f1
	fmuls    f2, f2, f2
	fadds    f4, f2, f1
	fcmpo    cr0, f4, f0
	ble      lbl_80163E6C
	ble      lbl_80163E70
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_80163E70

lbl_80163E6C:
	fmr      f4, f0

lbl_80163E70:
	fadds    f2, f31, f7
	lfs      f3, lbl_805188C4@sda21(r2)
	fadds    f1, f30, f6
	stfs     f4, 0x20(r1)
	fadds    f0, f29, f5
	addi     r4, r1, 0x14
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x50(r25)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f25, lbl_805188C8@sda21(r2)
	mr       r29, r3
	li       r28, 0
	b        lbl_80163F7C

lbl_80163EC4:
	li       r27, 0
	li       r30, 0
	b        lbl_80163F6C

lbl_80163ED0:
	lwz      r4, 0x24(r29)
	mr       r3, r26
	lwz      r5, 0x50(r25)
	lwzx     r0, r4, r30
	lwz      r4, 0x1c(r5)
	mulli    r0, r0, 0x60
	lwz      r4, 0x24(r4)
	add      r31, r4, r0
	mr       r4, r31
	bl       condition__Q23Sys16RayIntersectInfoFRQ23Sys8Triangle
	clrlwi.  r0, r3, 0x18
	beq      lbl_80163F64
	lfs      f1, 0x18(r26)
	mr       r3, r31
	mr       r4, r26
	addi     r5, r1, 8
	bl       "intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80163F64
	lfs      f4, 0xc(r1)
	li       r28, 1
	lfs      f3, 8(r1)
	fsubs    f0, f4, f30
	lfs      f5, 0x10(r1)
	fsubs    f1, f3, f31
	fsubs    f2, f5, f29
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fmadds   f1, f2, f2, f0
	fcmpo    cr0, f1, f25
	bge      lbl_80163F64
	lfs      f0, 0x10(r31)
	fmr      f28, f3
	fmr      f27, f4
	fmr      f26, f5
	stfs     f0, 0x48(r26)
	fmr      f25, f1

lbl_80163F64:
	addi     r30, r30, 4
	addi     r27, r27, 1

lbl_80163F6C:
	lwz      r0, 0x1c(r29)
	cmpw     r27, r0
	blt      lbl_80163ED0
	lwz      r29, 4(r29)

lbl_80163F7C:
	cmplwi   r29, 0
	bne      lbl_80163EC4
	stfs     f28, 0x34(r26)
	mr       r3, r28
	stfs     f27, 0x38(r26)
	stfs     f26, 0x3c(r26)
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
	psq_l    f26, 104(r1), 0, qr0
	lfd      f26, 0x60(r1)
	psq_l    f25, 88(r1), 0, qr0
	lfd      f25, 0x50(r1)
	lmw      r25, 0x34(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80163FE0
 * Size:	000080
 */
void ShapeMapMgr::getBoundBox2d(BoundBox2d&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f1, lbl_805188CC@sda21(r2)
	stw      r0, 0x34(r1)
	lfs      f0, lbl_805188D0@sda21(r2)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x50(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x14(r1)
	stfs     f0, 8(r31)
	stfs     f1, 0xc(r31)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80164060
 * Size:	000090
 */
void ShapeMapMgr::getBoundBox(BoundBox&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f1, lbl_805188CC@sda21(r2)
	stw      r0, 0x34(r1)
	lfs      f0, lbl_805188D0@sda21(r2)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x50(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0xc(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x10(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x14(r31)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801640F0
 * Size:	000008
 */
bool MapMgr::frozenable(void) { return false; }

/*
 * --INFO--
 * Address:	801640F8
 * Size:	000004
 */
void MapMgr::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801640FC
 * Size:	000004
 */
void MapMgr::doSimulation(float) { }

/*
 * --INFO--
 * Address:	80164100
 * Size:	000008
 */
u32 MapMgr::findRayIntersection(Sys::RayIntersectInfo&) { return 0x0; }

/*
 * --INFO--
 * Address:	80164108
 * Size:	000004
 */
void MapMgr::createTriangles(Sys::CreateTriangleArg&) { }

} // namespace Game

/*
 * --INFO--
 * Address:	8016410C
 * Size:	0001E4
 */
void ObjectMgr<Game::WaterBox>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__26Iterator<Q24Game8WaterBox>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__26Iterator<Q24Game8WaterBox>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80164154
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801642C0

lbl_80164154:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801641C0

lbl_8016416C:
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
	bne      lbl_801642C0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801641C0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016416C
	b        lbl_801642C0

lbl_801641E0:
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
	bne      lbl_80164230
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801642C0

lbl_80164230:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801642A4

lbl_80164250:
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
	bne      lbl_801642C0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801642A4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80164250

lbl_801642C0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801641E0
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801642F0
 * Size:	000004
 */
void WaterBox::doViewCalc(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	801642F4
 * Size:	00004C
 */
void Iterator<Game::WaterBox>::isDone()
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
 * Address:	80164340
 * Size:	0001F4
 */
void ObjectMgr<Game::WaterBox>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__26Iterator<Q24Game8WaterBox>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__26Iterator<Q24Game8WaterBox>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80164390
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80164500

lbl_80164390:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801643FC

lbl_801643A8:
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
	bne      lbl_80164500
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801643FC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801643A8
	b        lbl_80164500

lbl_8016441C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80164470
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80164500

lbl_80164470:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801644E4

lbl_80164490:
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
	bne      lbl_80164500
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801644E4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80164490

lbl_80164500:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8016441C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80164534
 * Size:	000004
 */
void WaterBox::doSetView(int) { }

} // namespace Game

/*
 * --INFO--
 * Address:	80164538
 * Size:	0001E4
 */
void ObjectMgr<Game::WaterBox>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__26Iterator<Q24Game8WaterBox>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__26Iterator<Q24Game8WaterBox>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80164580
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801646EC

lbl_80164580:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801645EC

lbl_80164598:
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
	bne      lbl_801646EC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801645EC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80164598
	b        lbl_801646EC

lbl_8016460C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8016465C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801646EC

lbl_8016465C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801646D0

lbl_8016467C:
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
	bne      lbl_801646EC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801646D0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016467C

lbl_801646EC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8016460C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8016471C
 * Size:	000004
 */
void WaterBox::doEntry(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	80164720
 * Size:	0001E4
 */
void ObjectMgr<Game::WaterBox>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__26Iterator<Q24Game8WaterBox>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__26Iterator<Q24Game8WaterBox>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80164768
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801648D4

lbl_80164768:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801647D4

lbl_80164780:
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
	bne      lbl_801648D4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801647D4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80164780
	b        lbl_801648D4

lbl_801647F4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80164844
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801648D4

lbl_80164844:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801648B8

lbl_80164864:
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
	bne      lbl_801648D4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801648B8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80164864

lbl_801648D4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801647F4
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80164904
 * Size:	000004
 */
void WaterBox::doAnimation(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	80164908
 * Size:	000038
 */
void Iterator<Game::WaterBox>::operator*()
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
 * Address:	80164940
 * Size:	0000E4
 */
void Iterator<Game::WaterBox>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80164980
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80164A10

lbl_80164980:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_801649F4

lbl_801649A0:
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
	bne      lbl_80164A10
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_801649F4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801649A0

lbl_80164A10:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80164A24
 * Size:	0000DC
 */
void Iterator<Game::WaterBox>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80164A60
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80164AEC

lbl_80164A60:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80164AD0

lbl_80164A7C:
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
	bne      lbl_80164AEC
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_80164AD0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80164A7C

lbl_80164AEC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80164B00
 * Size:	000028
 */
void __sinit_mapMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B18A8@ha
	stw      r0, lbl_80515980@sda21(r13)
	stfsu    f0, lbl_804B18A8@l(r3)
	stfs     f0, lbl_80515984@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80164B28
 * Size:	000014
 */
void @36 @4 @Game::MapMgr::frozenable(void)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -36
	b        frozenable__Q24Game6MapMgrFv
	*/
}

/*
 * --INFO--
 * Address:	80164B3C
 * Size:	000014
 */
void @36 @4 @Game::MapMgr::doDirectDraw(Graphics&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -36
	b        doDirectDraw__Q24Game6MapMgrFR8Graphics
	*/
}

/*
 * --INFO--
 * Address:	80164B50
 * Size:	000014
 */
void @36 @4 @Game::MapMgr::doSimulation(float)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -36
	b        doSimulation__Q24Game6MapMgrFf
	*/
}

/*
 * --INFO--
 * Address:	80164B64
 * Size:	000014
 */
void @84 @4 @Game::MapMgr::frozenable(void)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -84
	b        frozenable__Q24Game6MapMgrFv
	*/
}

/*
 * --INFO--
 * Address:	80164B78
 * Size:	000014
 */
void @84 @4 @Game::MapMgr::doDirectDraw(Graphics&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -84
	b        doDirectDraw__Q24Game6MapMgrFR8Graphics
	*/
}

/*
 * --INFO--
 * Address:	80164B8C
 * Size:	000014
 */
void @84 @4 @Game::MapMgr::doSimulation(float)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -84
	b        doSimulation__Q24Game6MapMgrFf
	*/
}

/*
 * --INFO--
 * Address:	80164BA0
 * Size:	000014
 */
void @84 @4 @Game::ShapeMapMgr::doViewCalc(void)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -84
	b        doViewCalc__Q24Game11ShapeMapMgrFv
	*/
}

/*
 * --INFO--
 * Address:	80164BB4
 * Size:	000014
 */
void @84 @4 @Game::ShapeMapMgr::doSetView(int)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -84
	b        doSetView__Q24Game11ShapeMapMgrFi
	*/
}

/*
 * --INFO--
 * Address:	80164BC8
 * Size:	000014
 */
void @84 @4 @Game::ShapeMapMgr::doEntry(void)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -84
	b        doEntry__Q24Game11ShapeMapMgrFv
	*/
}

/*
 * --INFO--
 * Address:	80164BDC
 * Size:	000014
 */
void @84 @4 @Game::ShapeMapMgr::doAnimation(void)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -84
	b        doAnimation__Q24Game11ShapeMapMgrFv
	*/
}
