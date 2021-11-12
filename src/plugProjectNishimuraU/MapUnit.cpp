#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Cave10AdjustNode
    __vt__Q34Game4Cave10AdjustNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave10AdjustNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A6D8
    lbl_8051A6D8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802427A8
 * Size:	0000A4
 */
Cave::MapUnits::MapUnits(JUTTexture*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0
	stw      r4, 8(r31)
	stw      r3, 0xc(r31)
	stw      r3, 0x10(r31)
	stw      r0, 0x14(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x20(r31)
	lwz      r3, 8(r31)
	cmplwi   r3, 0
	beq      lbl_80242810
	lwz      r3, 0x20(r3)
	lhz      r0, 2(r3)
	srwi     r0, r0, 3
	stw      r0, 0x1c(r31)
	lwz      r3, 8(r31)
	lwz      r3, 0x20(r3)
	lhz      r0, 4(r3)
	srwi     r0, r0, 3
	stw      r0, 0x20(r31)

lbl_80242810:
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80242828
	bl       __ct__Q34Game4Cave8DoorNodeFv
	mr       r0, r3

lbl_80242828:
	stw      r0, 0(r31)
	li       r0, 0
	mr       r3, r31
	stw      r0, 4(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024284C
 * Size:	000060
 */
void Cave::MapUnits::setDoorNum(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x1c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game4Cave10AdjustNodeFv@ha
	lis      r5, __dt__Q34Game4Cave10AdjustNodeFv@ha
	addi     r4, r4, __ct__Q34Game4Cave10AdjustNodeFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game4Cave10AdjustNodeFv@l
	li       r6, 0x1c
	bl       __construct_new_array
	stw      r3, 4(r30)
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
 * Address:	802428AC
 * Size:	000060
 */
Cave::AdjustNode::~AdjustNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802428F0
	lis      r5, __vt__Q34Game4Cave10AdjustNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game4Cave10AdjustNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_802428F0
	mr       r3, r30
	bl       __dl__FPv

lbl_802428F0:
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
 * Address:	8024290C
 * Size:	000008
 */
void Cave::MapUnits::setUnitName(char* a1)
{
	// Generated from stw r4, 0x10(r3)
	_10 = a1;
}

/*
 * --INFO--
 * Address:	80242914
 * Size:	000008
 */
void Cave::MapUnits::setUnitIndex(int a1)
{
	// Generated from stw r4, 0x14(r3)
	_14 = a1;
}

/*
 * --INFO--
 * Address:	8024291C
 * Size:	000008
 */
void Cave::MapUnits::setUnitKind(int a1)
{
	// Generated from stw r4, 0x18(r3)
	_18 = a1;
}

/*
 * --INFO--
 * Address:	80242924
 * Size:	00000C
 */
void Cave::MapUnits::setUnitSize(int, int)
{
	/*
	stw      r4, 0x1c(r3)
	stw      r5, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242930
 * Size:	000008
 */
void Cave::MapUnits::setBaseGenPtr(Game::Cave::BaseGen* a1)
{
	// Generated from stw r4, 0xC(r3)
	_0C = a1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::setUnitTexture(JUTTexture*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitName(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitIndex(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitKind(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitSizeX(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitSizeY(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getBaseGen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Cave::MapUnits::getUnitTexture(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80242938
 * Size:	000064
 */
Cave::UnitInfo::UnitInfo(Game::Cave::MapUnits*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 8(r3)
	li       r3, 0x20
	stw      r0, 0xc(r31)
	stw      r0, 0x10(r31)
	stw      r0, 0x14(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80242978
	bl       __ct__Q34Game4Cave8DoorNodeFv
	mr       r0, r3

lbl_80242978:
	stw      r0, 0(r31)
	li       r0, 0
	mr       r3, r31
	stw      r0, 4(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024299C
 * Size:	00000C
 */
void Cave::UnitInfo::setUnitTexture(JUTTexture*)
{
	/*
	lwz      r3, 8(r3)
	stw      r4, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802429A8
 * Size:	000008
 */
void Cave::UnitInfo::setUnitRotation(int a1)
{
	// Generated from stw r4, 0xC(r3)
	_0C = a1;
}

/*
 * --INFO--
 * Address:	802429B0
 * Size:	0001BC
 */
void Cave::UnitInfo::create(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lwz      r3, 8(r3)
	lwz      r3, 0(r3)
	lwz      r30, 0x10(r3)
	b        lbl_80242A0C

lbl_802429D8:
	li       r3, 0x20
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802429F0
	bl       __ct__Q34Game4Cave8DoorNodeFv
	mr       r4, r3

lbl_802429F0:
	lwz      r0, 0x18(r30)
	stw      r0, 0x18(r4)
	lwz      r0, 0x1c(r30)
	stw      r0, 0x1c(r4)
	lwz      r3, 0(r31)
	bl       add__5CNodeFP5CNode
	lwz      r30, 4(r30)

lbl_80242A0C:
	cmplwi   r30, 0
	bne      lbl_802429D8
	lwz      r3, 8(r31)
	lwz      r0, 4(r3)
	stw      r0, 4(r31)
	lwz      r0, 0xc(r31)
	cmpwi    r0, 0
	beq      lbl_80242A34
	cmpwi    r0, 2
	bne      lbl_80242A50

lbl_80242A34:
	lwz      r3, 8(r31)
	lwz      r0, 0x1c(r3)
	stw      r0, 0x10(r31)
	lwz      r3, 8(r31)
	lwz      r0, 0x20(r3)
	stw      r0, 0x14(r31)
	b        lbl_80242A68

lbl_80242A50:
	lwz      r3, 8(r31)
	lwz      r0, 0x20(r3)
	stw      r0, 0x10(r31)
	lwz      r3, 8(r31)
	lwz      r0, 0x1c(r3)
	stw      r0, 0x14(r31)

lbl_80242A68:
	lwz      r4, 8(r31)
	lwz      r3, 0(r31)
	lwz      r5, 0x1c(r4)
	lwz      r4, 0x20(r4)
	lwz      r6, 0x10(r3)
	addi     r5, r5, -1
	addi     r4, r4, -1
	b        lbl_80242B4C

lbl_80242A88:
	lwz      r7, 0x18(r6)
	lwz      r0, 0xc(r31)
	cmpwi    r7, 0
	add      r3, r7, r0
	slwi     r0, r3, 0x1e
	srwi     r3, r3, 0x1f
	subf     r0, r3, r0
	rotlwi   r0, r0, 2
	add      r0, r0, r3
	stw      r0, 0x18(r6)
	bne      lbl_80242AD4
	cmpwi    r0, 2
	beq      lbl_80242AC4
	cmpwi    r0, 3
	bne      lbl_80242B48

lbl_80242AC4:
	lwz      r0, 0x1c(r6)
	subf     r0, r0, r5
	stw      r0, 0x1c(r6)
	b        lbl_80242B48

lbl_80242AD4:
	cmpwi    r7, 1
	bne      lbl_80242AFC
	cmpwi    r0, 2
	beq      lbl_80242AEC
	cmpwi    r0, 3
	bne      lbl_80242B48

lbl_80242AEC:
	lwz      r0, 0x1c(r6)
	subf     r0, r0, r4
	stw      r0, 0x1c(r6)
	b        lbl_80242B48

lbl_80242AFC:
	cmpwi    r7, 2
	bne      lbl_80242B24
	cmpwi    r0, 0
	beq      lbl_80242B14
	cmpwi    r0, 1
	bne      lbl_80242B48

lbl_80242B14:
	lwz      r0, 0x1c(r6)
	subf     r0, r0, r5
	stw      r0, 0x1c(r6)
	b        lbl_80242B48

lbl_80242B24:
	cmpwi    r7, 3
	bne      lbl_80242B48
	cmpwi    r0, 0
	beq      lbl_80242B3C
	cmpwi    r0, 1
	bne      lbl_80242B48

lbl_80242B3C:
	lwz      r0, 0x1c(r6)
	subf     r0, r0, r4
	stw      r0, 0x1c(r6)

lbl_80242B48:
	lwz      r6, 4(r6)

lbl_80242B4C:
	cmplwi   r6, 0
	bne      lbl_80242A88
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
 * Address:	80242B6C
 * Size:	00000C
 */
void Cave::UnitInfo::getUnitName(void)
{
	/*
	lwz      r3, 8(r3)
	lwz      r3, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Cave::UnitInfo::getUnitIndex(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80242B78
 * Size:	00000C
 */
void Cave::UnitInfo::getUnitKind(void)
{
	/*
	lwz      r3, 8(r3)
	lwz      r3, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242B84
 * Size:	000008
 */
void Cave::UnitInfo::getUnitSizeX(void)
{
	/*
	lwz      r3, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242B8C
 * Size:	000008
 */
void Cave::UnitInfo::getUnitSizeY(void)
{
	/*
	lwz      r3, 0x14(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242B94
 * Size:	000008
 */
void Cave::UnitInfo::getUnitRotation(void)
{
	/*
	lwz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242B9C
 * Size:	000024
 */
void Cave::UnitInfo::getDoorNode(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0(r3)
	bl       getChildAt__5CNodeFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242BC0
 * Size:	00000C
 */
void Cave::UnitInfo::getBaseGen(void)
{
	/*
	lwz      r3, 8(r3)
	lwz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242BCC
 * Size:	00018C
 */
void Cave::UnitInfo::draw(float, float, float, float)
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
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stmw     r24, 0x10(r1)
	lwz      r4, 8(r3)
	fmr      f28, f1
	fmr      f29, f2
	lwz      r4, 8(r4)
	fmr      f30, f3
	fmr      f31, f4
	cmplwi   r4, 0
	beq      lbl_80242D24
	lwz      r0, 0xc(r3)
	li       r31, 0
	li       r30, 0x10
	li       r29, 0x10
	cmpwi    r0, 2
	li       r28, 0
	li       r27, 0
	li       r26, 0
	li       r25, 0x10
	li       r24, 0x10
	beq      lbl_80242C7C
	bge      lbl_80242C5C
	cmpwi    r0, 0
	beq      lbl_80242CB0
	bge      lbl_80242C68
	b        lbl_80242CB0

lbl_80242C5C:
	cmpwi    r0, 4
	bge      lbl_80242CB0
	b        lbl_80242CA0

lbl_80242C68:
	li       r30, 0
	li       r28, 0x10
	li       r27, 0x10
	li       r25, 0
	b        lbl_80242CB0

lbl_80242C7C:
	li       r31, 0x10
	li       r30, 0
	li       r29, 0
	li       r28, 0x10
	li       r27, 0x10
	li       r26, 0x10
	li       r25, 0
	li       r24, 0
	b        lbl_80242CB0

lbl_80242CA0:
	li       r31, 0x10
	li       r29, 0
	li       r26, 0x10
	li       r24, 0

lbl_80242CB0:
	mr       r3, r4
	li       r4, 0
	bl       load__10JUTTextureF11_GXTexMapID
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lis      r3, 0xCC008000@ha
	lfs      f0, lbl_8051A6D8@sda21(r2)
	stfs     f28, 0xCC008000@l(r3)
	stfs     f29, -0x8000(r3)
	stfs     f0, -0x8000(r3)
	stb      r31, -0x8000(r3)
	stb      r27, -0x8000(r3)
	stfs     f30, -0x8000(r3)
	stfs     f29, -0x8000(r3)
	stfs     f0, -0x8000(r3)
	stb      r30, -0x8000(r3)
	stb      r26, -0x8000(r3)
	stfs     f30, -0x8000(r3)
	stfs     f31, -0x8000(r3)
	stfs     f0, -0x8000(r3)
	stb      r29, -0x8000(r3)
	stb      r25, -0x8000(r3)
	stfs     f28, -0x8000(r3)
	stfs     f31, -0x8000(r3)
	stfs     f0, -0x8000(r3)
	stb      r28, -0x8000(r3)
	stb      r24, -0x8000(r3)

lbl_80242D24:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	lmw      r24, 0x10(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}
} // namespace Game
