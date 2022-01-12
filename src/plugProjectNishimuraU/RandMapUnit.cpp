#include "Game/Cave/RandMapUnit.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80484090
    lbl_80484090:
        .4byte 0x52616E64
        .4byte 0x4D617055
        .4byte 0x6E69742E
        .4byte 0x63707000
    .global lbl_804840A0
    lbl_804840A0:
        .4byte 0x65646974
        .4byte 0x206D6170
        .4byte 0x206E6F6E
        .4byte 0x65203A20
        .4byte 0x25730A00
    .global lbl_804840B4
    lbl_804840B4:
        .4byte 0x00000000
        .4byte 0x00000002
        .4byte 0x00000001

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A760
    lbl_8051A760:
        .4byte 0x00000000
    .global lbl_8051A764
    lbl_8051A764:
        .4byte 0x3C23D70A
    .global lbl_8051A768
    lbl_8051A768:
        .float 1.0
        .4byte 0x00000000
    .global lbl_8051A770
    lbl_8051A770:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051A778
    lbl_8051A778:
        .4byte 0x47000000
    .global lbl_8051A77C
    lbl_8051A77C:
        .4byte 0x40000000
    .global lbl_8051A780
    lbl_8051A780:
        .4byte 0x40800000
        .4byte 0x00000000
*/

namespace Game {
namespace Cave {

/*
 * --INFO--
 * Address:	80245C5C
 * Size:	000030
 */
EditMapUnit::EditMapUnit(void)
{
	/*
	lfs      f0, lbl_8051A760@sda21(r2)
	li       r4, 0
	li       r0, -128
	stfs     f0, 0(r3)
	stw      r4, 4(r3)
	stw      r4, 8(r3)
	stw      r4, 0xc(r3)
	stw      r4, 0x10(r3)
	stw      r4, 0x14(r3)
	stw      r4, 0x18(r3)
	stw      r0, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80245C8C
 * Size:	0000B8
 */
void EditMapUnit::read(char*)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r7, 0
	li       r8, 2
	stw      r31, 0x43c(r1)
	li       r9, 0
	li       r10, 0
	stw      r30, 0x438(r1)
	mr       r30, r4
	li       r4, 0
	stw      r29, 0x434(r1)
	mr       r29, r3
	mr       r3, r30
	stw      r0, 8(r1)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_80245D08
	mr       r4, r31
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	mr       r3, r29
	addi     r4, r1, 0x10
	bl       read__Q34Game4Cave11EditMapUnitFP6Stream
	mr       r3, r31
	bl       __dla__FPv
	b        lbl_80245D28

lbl_80245D08:
	lis      r3, lbl_80484090@ha
	lis      r4, lbl_804840A0@ha
	addi     r5, r4, lbl_804840A0@l
	mr       r6, r30
	addi     r3, r3, lbl_80484090@l
	li       r4, 0x55
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80245D28:
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	lwz      r29, 0x434(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80245D44
 * Size:	0001E8
 */
void EditMapUnit::read(Stream*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 1
	stmw     r25, 0x14(r1)
	mr       r27, r4
	mr       r26, r3
	stw      r0, 0xc(r4)
	lwz      r0, 0xc(r4)
	cmpwi    r0, 1
	bne      lbl_80245D78
	li       r0, 0
	stw      r0, 0x414(r27)

lbl_80245D78:
	mr       r3, r27
	bl       readFloat__6StreamFv
	stfs     f1, 0(r26)
	mr       r3, r27
	bl       readInt__6StreamFv
	stw      r3, 4(r26)
	lwz      r0, 4(r26)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 8(r26)
	lwz      r0, 4(r26)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0xc(r26)
	lwz      r0, 4(r26)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x10(r26)
	lwz      r0, 4(r26)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x14(r26)
	lwz      r0, 4(r26)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x18(r26)
	li       r29, 0
	li       r30, 0
	b        lbl_80245F04

lbl_80245DEC:
	mr       r3, r27
	bl       readInt__6StreamFv
	lwz      r4, 8(r26)
	stwx     r3, r4, r30
	lwz      r3, 8(r26)
	lwzx     r0, r3, r30
	slwi     r3, r0, 2
	bl       __nwa__FUl
	lwz      r4, 0xc(r26)
	stwx     r3, r4, r30
	lwz      r3, 8(r26)
	lwzx     r0, r3, r30
	slwi     r3, r0, 2
	bl       __nwa__FUl
	lwz      r4, 0x10(r26)
	stwx     r3, r4, r30
	lwz      r3, 8(r26)
	lwzx     r0, r3, r30
	slwi     r3, r0, 2
	bl       __nwa__FUl
	lwz      r4, 0x14(r26)
	stwx     r3, r4, r30
	lwz      r3, 8(r26)
	lwzx     r0, r3, r30
	slwi     r3, r0, 2
	bl       __nwa__FUl
	lwz      r4, 0x18(r26)
	li       r28, 0
	li       r31, 0
	stwx     r3, r4, r30
	b        lbl_80245EEC

lbl_80245E68:
	mr       r3, r27
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	mr       r25, r3
	bl       strlen
	addi     r3, r3, 1
	bl       __nwa__FUl
	lwz      r0, 0xc(r26)
	mr       r4, r25
	lwzx     r5, r30, r0
	stwx     r3, r5, r31
	lwz      r0, 0xc(r26)
	lwzx     r3, r30, r0
	lwzx     r3, r3, r31
	bl       strcpy
	mr       r3, r27
	bl       readInt__6StreamFv
	lwz      r0, 0x10(r26)
	lwzx     r4, r30, r0
	stwx     r3, r4, r31
	mr       r3, r27
	bl       readInt__6StreamFv
	lwz      r0, 0x14(r26)
	lwzx     r4, r30, r0
	stwx     r3, r4, r31
	mr       r3, r27
	bl       readInt__6StreamFv
	lwz      r0, 0x18(r26)
	addi     r28, r28, 1
	lwzx     r4, r30, r0
	stwx     r3, r4, r31
	addi     r31, r31, 4

lbl_80245EEC:
	lwz      r0, 8(r26)
	lwzx     r0, r30, r0
	cmpw     r28, r0
	blt      lbl_80245E68
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_80245F04:
	lwz      r0, 4(r26)
	cmpw     r29, r0
	blt      lbl_80245DEC
	li       r0, -128
	stw      r0, 0x1c(r26)
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80245F2C
 * Size:	000054
 */
void EditMapUnit::setEditNumber(int)
{
	/*
	cmpwi    r4, -1
	bne      lbl_80245F3C
	stw      r4, 0x1c(r3)
	blr

lbl_80245F3C:
	lwz      r5, 4(r3)
	cmpwi    r5, 0
	ble      lbl_80245F74
	cmpwi    r4, 0
	bltlr
	addi     r0, r5, -1
	bge      lbl_80245F60
	li       r4, 0
	b        lbl_80245F6C

lbl_80245F60:
	cmpw     r4, r0
	ble      lbl_80245F6C
	mr       r4, r0

lbl_80245F6C:
	stw      r4, 0x1c(r3)
	blr

lbl_80245F74:
	li       r0, -1
	stw      r0, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80245F80
 * Size:	00019C
 */
RandMapUnit::RandMapUnit(MapUnitGenerator*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r26, r4
	mr       r31, r3
	stw      r26, 0x20(r3)
	li       r3, 0xc
	lwz      r4, 0x20(r31)
	lwz      r29, 0x10(r4)
	lwz      r30, 0x28(r4)
	bl       __nwa__FUl
	stw      r3, 0x24(r31)
	li       r27, 0
	li       r28, 0

lbl_80245FBC:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r31)
	addi     r27, r27, 1
	cmpwi    r27, 3
	addi     r29, r29, 0x40
	stwx     r3, r4, r28
	addi     r28, r28, 4
	blt      lbl_80245FBC
	lwz      r3, 0x20(r31)
	lwz      r29, 8(r3)
	cmplwi   r29, 0
	beq      lbl_8024606C
	mr       r3, r29
	bl       getRoomNum__Q34Game4Cave9FloorInfoFv
	stw      r3, 4(r31)
	mr       r3, r29
	bl       getRouteRatio__Q34Game4Cave9FloorInfoFv
	stfs     f1, 8(r31)
	mr       r3, r29
	bl       getCapMax__Q34Game4Cave9FloorInfoFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051A770@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051A764@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051A760@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_80246050
	b        lbl_80246064

lbl_80246050:
	lfs      f0, lbl_8051A768@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80246060
	b        lbl_80246064

lbl_80246060:
	fmr      f0, f1

lbl_80246064:
	stfs     f0, 0x14(r31)
	b        lbl_80246080

lbl_8024606C:
	li       r0, 2
	lfs      f0, lbl_8051A760@sda21(r2)
	stw      r0, 4(r31)
	stfs     f0, 8(r31)
	stfs     f0, 0x14(r31)

lbl_80246080:
	li       r0, 0
	stb      r0, 0xc(r31)
	stw      r0, 0(r31)
	lwz      r3, 0xc(r26)
	lwz      r27, 0x10(r3)
	b        lbl_802460B4

lbl_80246098:
	mr       r3, r27
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	lwz      r0, 0(r31)
	cmpw     r3, r0
	ble      lbl_802460B0
	stw      r3, 0(r31)

lbl_802460B0:
	lwz      r27, 4(r27)

lbl_802460B4:
	cmplwi   r27, 0
	bne      lbl_80246098
	li       r3, 4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802460D8
	mr       r4, r30
	bl       __ct__Q34Game4Cave14RandMapCheckerFPQ34Game4Cave7MapNode
	mr       r0, r3

lbl_802460D8:
	stw      r0, 0x28(r31)
	li       r4, 1
	li       r0, 0
	li       r3, 0x40
	stb      r4, 0xd(r31)
	stw      r0, 0x10(r31)
	bl       __nwa__FUl
	stw      r3, 0x18(r31)
	li       r3, 0x40
	bl       __nwa__FUl
	stw      r3, 0x1c(r31)
	mr       r3, r31
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024611C
 * Size:	0000F4
 */
void RandMapUnit::setMapUnit(void)
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
	lwz      r4, 0x20(r3)
	lwz      r0, 0x30(r4)
	cmplwi   r0, 0
	beq      lbl_80246154
	bl       setEditorMapUnit__Q34Game4Cave11RandMapUnitFv
	b        lbl_80246158

lbl_80246154:
	bl       setFirstMapUnit__Q34Game4Cave11RandMapUnitFv

lbl_80246158:
	mr       r3, r28
	bl       getOpenDoorNum__Q34Game4Cave11RandMapUnitFv
	cmpwi    r3, 0
	beq      lbl_802461F0
	li       r30, 0

lbl_8024616C:
	mr       r3, r28
	bl       getRandMapUnit__Q34Game4Cave11RandMapUnitFv
	or.      r29, r3, r3
	beq      lbl_802461A4
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r31, r3
	mr       r3, r29
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	lwz      r4, 0x18(r29)
	mr       r5, r3
	mr       r3, r28
	mr       r6, r31
	li       r7, 1
	bl       addMap__Q34Game4Cave11RandMapUnitFPQ34Game4Cave8UnitInfoiib

lbl_802461A4:
	mr       r3, r28
	bl       getOpenDoorNum__Q34Game4Cave11RandMapUnitFv
	cmpwi    r3, 0
	bne      lbl_802461E4
	mr       r3, r28
	bl       changeCapToRootLoopMapUnit__Q34Game4Cave11RandMapUnitFv
	mr       r3, r28
	bl       getOpenDoorNum__Q34Game4Cave11RandMapUnitFv
	cmpwi    r3, 0
	bne      lbl_802461E4
	mr       r3, r28
	bl       changeTwoToOneMapUnit__Q34Game4Cave11RandMapUnitFv
	mr       r3, r28
	bl       getOpenDoorNum__Q34Game4Cave11RandMapUnitFv
	cmpwi    r3, 0
	beq      lbl_802461F0

lbl_802461E4:
	addi     r30, r30, 1
	cmpwi    r30, 0x1f4
	blt      lbl_8024616C

lbl_802461F0:
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
 * Address:	80246210
 * Size:	000034
 */
int RandMapUnit::getAliveMapIndex(MapNode*)
{
	/*
	lwz      r5, 0x20(r3)
	li       r3, 0
	lwz      r5, 0x28(r5)
	lwz      r5, 0x10(r5)
	b        lbl_80246234

lbl_80246224:
	cmplw    r4, r5
	beqlr
	lwz      r5, 4(r5)
	addi     r3, r3, 1

lbl_80246234:
	cmplwi   r5, 0
	bne      lbl_80246224
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80246244
 * Size:	0000A0
 */
void RandMapUnit::getTextureSize(int&, int&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r4
	mr       r26, r5
	li       r30, -12800
	li       r29, -12800
	lwz      r3, 0x20(r3)
	lwz      r3, 0x28(r3)
	lwz      r28, 0x10(r3)
	b        lbl_802462C0

lbl_80246274:
	lwz      r3, 0x18(r28)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	mr       r31, r3
	mr       r3, r28
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	add      r27, r3, r31
	lwz      r3, 0x18(r28)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	mr       r31, r3
	mr       r3, r28
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	cmpw     r27, r30
	add      r0, r3, r31
	ble      lbl_802462B0
	mr       r30, r27

lbl_802462B0:
	cmpw     r0, r29
	ble      lbl_802462BC
	mr       r29, r0

lbl_802462BC:
	lwz      r28, 4(r28)

lbl_802462C0:
	cmplwi   r28, 0
	bne      lbl_80246274
	stw      r30, 0(r25)
	stw      r29, 0(r26)
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802462E4
 * Size:	00006C
 */
MapNode* RandMapUnit::getRandMapUnit(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getPartsKindNum__Q34Game4Cave11RandMapUnitFi
	lwz      r0, 4(r31)
	cmpw     r3, r0
	bge      lbl_80246318
	mr       r3, r31
	bl       getNormalRandMapUnit__Q34Game4Cave11RandMapUnitFv
	b        lbl_8024633C

lbl_80246318:
	mr       r3, r31
	bl       createLoopMapNodeCheck__Q34Game4Cave11RandMapUnitFv
	mr       r3, r31
	bl       getLoopRandMapUnit__Q34Game4Cave11RandMapUnitFv
	cmplwi   r3, 0
	beq      lbl_80246334
	b        lbl_8024633C

lbl_80246334:
	mr       r3, r31
	bl       getLoopEndMapUnit__Q34Game4Cave11RandMapUnitFv

lbl_8024633C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80246350
 * Size:	000284
 */
void RandMapUnit::changeCapToRootLoopMapUnit(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stmw     r20, 0x60(r1)
	mr       r31, r3
	addi     r30, r1, 8
	li       r27, 0
	lwz      r3, 0x20(r3)
	lwz      r28, 0x10(r3)
	lwz      r29, 0x28(r3)
	lwz      r26, 0x90(r28)
	b        lbl_802463F0

lbl_80246380:
	lwz      r3, 0x18(r26)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_802463EC
	lwz      r3, 0x18(r26)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_802463EC
	mr       r3, r26
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpwi    r3, 2
	bne      lbl_802463EC
	mr       r3, r26
	li       r4, 0
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 0
	bne      lbl_802463EC
	mr       r3, r26
	li       r4, 1
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 2
	bne      lbl_802463EC
	lwz      r3, 0x18(r26)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	stw      r3, 0(r30)
	addi     r30, r30, 4
	addi     r27, r27, 1

lbl_802463EC:
	lwz      r26, 4(r26)

lbl_802463F0:
	cmplwi   r26, 0
	bne      lbl_80246380
	cmpwi    r27, 0
	beq      lbl_802465C0
	lwz      r26, 0x10(r29)
	b        lbl_802465B8

lbl_80246408:
	lwz      r3, 0x18(r26)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 0
	bne      lbl_802465B4
	mr       r3, r26
	li       r25, 0
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	mr       r3, r26
	mr       r24, r0
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r23, r3
	mr       r22, r24
	mr       r3, r26
	li       r4, 0
	mr       r21, r23
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	mr       r30, r3
	cmpwi    r30, 2
	beq      lbl_80246488
	bge      lbl_8024646C
	cmpwi    r30, 0
	beq      lbl_80246478
	bge      lbl_80246480
	b        lbl_80246494

lbl_8024646C:
	cmpwi    r30, 4
	bge      lbl_80246494
	b        lbl_80246490

lbl_80246478:
	addi     r21, r21, 1
	b        lbl_80246494

lbl_80246480:
	addi     r22, r24, -1
	b        lbl_80246494

lbl_80246488:
	addi     r21, r21, -1
	b        lbl_80246494

lbl_80246490:
	addi     r22, r24, 1

lbl_80246494:
	lwz      r20, 0x10(r29)
	b        lbl_802464E0

lbl_8024649C:
	cmplw    r26, r20
	beq      lbl_802464DC
	lwz      r3, 0x18(r20)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 2
	bne      lbl_802464DC
	mr       r3, r20
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	cmpw     r22, r3
	bne      lbl_802464DC
	mr       r3, r20
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	cmpw     r21, r3
	bne      lbl_802464DC
	mr       r25, r20
	b        lbl_802464E8

lbl_802464DC:
	lwz      r20, 4(r20)

lbl_802464E0:
	cmplwi   r20, 0
	bne      lbl_8024649C

lbl_802464E8:
	cmplwi   r25, 0
	beq      lbl_802465B4
	mr       r3, r31
	mr       r4, r26
	bl       deleteMapNode__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNode
	mr       r3, r31
	mr       r4, r25
	bl       deleteMapNode__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNode
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x4c(r1)
	xoris    r0, r27, 0x8000
	lfd      f2, lbl_8051A770@sda21(r2)
	addi     r3, r1, 8
	stw      r4, 0x48(r1)
	lfs      f0, lbl_8051A778@sda21(r2)
	lfd      f1, 0x48(r1)
	stw      r0, 0x54(r1)
	fsubs    f1, f1, f2
	lwz      r21, 0x90(r28)
	stw      r4, 0x50(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	slwi     r0, r0, 2
	lwzx     r20, r3, r0
	b        lbl_802465AC

lbl_80246568:
	lwz      r3, 0x18(r21)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	cmplw    r3, r20
	bne      lbl_802465A8
	mr       r3, r21
	li       r4, 0
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpw     r30, r3
	bne      lbl_802465A8
	lwz      r4, 0x18(r21)
	mr       r3, r31
	mr       r5, r24
	mr       r6, r23
	li       r7, 1
	bl       addMap__Q34Game4Cave11RandMapUnitFPQ34Game4Cave8UnitInfoiib
	b        lbl_802465C0

lbl_802465A8:
	lwz      r21, 4(r21)

lbl_802465AC:
	cmplwi   r21, 0
	bne      lbl_80246568

lbl_802465B4:
	lwz      r26, 4(r26)

lbl_802465B8:
	cmplwi   r26, 0
	bne      lbl_80246408

lbl_802465C0:
	lmw      r20, 0x60(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	802465D4
 * Size:	000360
 */
void RandMapUnit::changeTwoToOneMapUnit(void)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stmw     r19, 0xac(r1)
	mr       r25, r3
	addi     r30, r1, 0x48
	li       r29, 0
	mr       r21, r30
	li       r28, 0
	lwz      r3, 0x20(r3)
	lwz      r31, 0x10(r3)
	lwz      r24, 0x28(r3)
	lwz      r20, 0x90(r31)
	b        lbl_8024667C

lbl_8024660C:
	lwz      r3, 0x18(r20)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80246678
	lwz      r3, 0x18(r20)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80246678
	mr       r3, r20
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpwi    r3, 2
	bne      lbl_80246678
	mr       r3, r20
	li       r4, 0
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 0
	bne      lbl_80246678
	mr       r3, r20
	li       r4, 1
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 2
	bne      lbl_80246678
	lwz      r3, 0x18(r20)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	stw      r3, 0(r21)
	addi     r21, r21, 4
	addi     r29, r29, 1

lbl_80246678:
	lwz      r20, 4(r20)

lbl_8024667C:
	cmplwi   r20, 0
	bne      lbl_8024660C
	lwz      r20, 0x90(r31)
	addi     r21, r1, 8
	b        lbl_80246700

lbl_80246690:
	lwz      r3, 0x18(r20)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_802466FC
	lwz      r3, 0x18(r20)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 2
	bne      lbl_802466FC
	mr       r3, r20
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpwi    r3, 2
	bne      lbl_802466FC
	mr       r3, r20
	li       r4, 0
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 0
	bne      lbl_802466FC
	mr       r3, r20
	li       r4, 1
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 2
	bne      lbl_802466FC
	lwz      r3, 0x18(r20)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	stw      r3, 0(r21)
	addi     r21, r21, 4
	addi     r28, r28, 1

lbl_802466FC:
	lwz      r20, 4(r20)

lbl_80246700:
	cmplwi   r20, 0
	bne      lbl_80246690
	cmpwi    r29, 0
	beq      lbl_80246920
	cmpwi    r28, 0
	beq      lbl_80246920
	lwz      r3, 0x10(r24)
	b        lbl_80246918

lbl_80246720:
	lwz      r23, 4(r3)
	mr       r27, r3
	mr       r21, r30
	li       r20, 0
	li       r22, 0
	b        lbl_80246758

lbl_80246738:
	lwz      r3, 0x18(r27)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0(r21)
	cmplw    r3, r0
	bne      lbl_80246750
	li       r20, 1

lbl_80246750:
	addi     r21, r21, 4
	addi     r22, r22, 1

lbl_80246758:
	cmpw     r22, r29
	blt      lbl_80246738
	clrlwi.  r0, r20, 0x18
	li       r26, 0
	beq      lbl_802467E0
	li       r21, 0
	li       r22, 0

lbl_80246774:
	cmplwi   r26, 0
	bne      lbl_802467D0
	lwz      r3, 0x28(r27)
	lwzx     r0, r3, r22
	cmplwi   r0, 0
	beq      lbl_802467D0
	mr       r20, r30
	li       r19, 0
	b        lbl_802467C8

lbl_80246798:
	lwz      r0, 0x28(r27)
	lwzx     r3, r22, r0
	lwz      r3, 0x18(r3)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0(r20)
	cmplw    r3, r0
	bne      lbl_802467C0
	lwz      r3, 0x28(r27)
	lwzx     r26, r3, r22
	b        lbl_802467D0

lbl_802467C0:
	addi     r20, r20, 4
	addi     r19, r19, 1

lbl_802467C8:
	cmpw     r19, r29
	blt      lbl_80246798

lbl_802467D0:
	addi     r21, r21, 1
	addi     r22, r22, 0xc
	cmpwi    r21, 2
	blt      lbl_80246774

lbl_802467E0:
	cmplwi   r26, 0
	beq      lbl_80246914
	mr       r3, r26
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r23, r3
	mr       r3, r27
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	cmpw     r3, r23
	bge      lbl_80246808
	mr       r23, r3

lbl_80246808:
	mr       r3, r26
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r22, r3
	mr       r3, r27
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	cmpw     r3, r22
	bge      lbl_80246828
	mr       r22, r3

lbl_80246828:
	mr       r3, r26
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r21, r3
	mr       r3, r27
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	subf     r4, r3, r21
	subf     r0, r21, r3
	or       r0, r4, r0
	mr       r3, r25
	mr       r4, r27
	srwi     r19, r0, 0x1f
	bl       deleteMapNode__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNode
	mr       r3, r25
	mr       r4, r26
	bl       deleteMapNode__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNode
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x8c(r1)
	xoris    r0, r28, 0x8000
	lfd      f2, lbl_8051A770@sda21(r2)
	addi     r3, r1, 8
	stw      r4, 0x88(r1)
	lfs      f0, lbl_8051A778@sda21(r2)
	lfd      f1, 0x88(r1)
	stw      r0, 0x94(r1)
	fsubs    f1, f1, f2
	lwz      r21, 0x90(r31)
	stw      r4, 0x90(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x90(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x98(r1)
	lwz      r0, 0x9c(r1)
	slwi     r0, r0, 2
	lwzx     r20, r3, r0
	b        lbl_80246908

lbl_802468C4:
	lwz      r3, 0x18(r21)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	cmplw    r3, r20
	bne      lbl_80246904
	mr       r3, r21
	li       r4, 0
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpw     r19, r3
	bne      lbl_80246904
	lwz      r4, 0x18(r21)
	mr       r3, r25
	mr       r5, r23
	mr       r6, r22
	li       r7, 1
	bl       addMap__Q34Game4Cave11RandMapUnitFPQ34Game4Cave8UnitInfoiib
	b        lbl_80246910

lbl_80246904:
	lwz      r21, 4(r21)

lbl_80246908:
	cmplwi   r21, 0
	bne      lbl_802468C4

lbl_80246910:
	lwz      r23, 0x10(r24)

lbl_80246914:
	mr       r3, r23

lbl_80246918:
	cmplwi   r3, 0
	bne      lbl_80246720

lbl_80246920:
	lmw      r19, 0xac(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80246934
 * Size:	000144
 */
void RandMapUnit::setEditorMapUnit(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r24, 0x20(r1)
	mr       r24, r3
	lwz      r3, 0x20(r3)
	lwz      r30, 0x30(r3)
	lwz      r31, 0xc(r3)
	lwz      r0, 0x1c(r30)
	cmpwi    r0, 0
	bge      lbl_802469B0
	lwz      r25, 4(r30)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	xoris    r0, r25, 0x8000
	lfd      f2, lbl_8051A770@sda21(r2)
	stw      r4, 8(r1)
	lfs      f0, lbl_8051A778@sda21(r2)
	lfd      f1, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x10(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)

lbl_802469B0:
	lwz      r3, 8(r30)
	slwi     r28, r0, 2
	li       r26, 0
	li       r29, 0
	lwzx     r3, r3, r28
	addi     r27, r3, -1
	b        lbl_80246A54

lbl_802469CC:
	lwz      r25, 0x10(r31)
	b        lbl_80246A44

lbl_802469D4:
	mr       r3, r25
	bl       getDirection__Q34Game4Cave7MapNodeFv
	lwz      r0, 0x10(r30)
	lwzx     r0, r28, r0
	lwzx     r0, r29, r0
	cmpw     r0, r3
	bne      lbl_80246A40
	mr       r3, r25
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	lwz      r0, 0xc(r30)
	lwzx     r0, r28, r0
	lwzx     r4, r29, r0
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80246A40
	lwz      r3, 0x14(r30)
	subf     r0, r26, r27
	lwz      r4, 0x18(r30)
	cntlzw   r0, r0
	lwzx     r5, r28, r3
	mr       r3, r24
	lwzx     r6, r28, r4
	srwi     r7, r0, 5
	lwz      r4, 0x18(r25)
	lwzx     r5, r29, r5
	lwzx     r6, r29, r6
	bl       addMap__Q34Game4Cave11RandMapUnitFPQ34Game4Cave8UnitInfoiib

lbl_80246A40:
	lwz      r25, 4(r25)

lbl_80246A44:
	cmplwi   r25, 0
	bne      lbl_802469D4
	addi     r29, r29, 4
	addi     r26, r26, 1

lbl_80246A54:
	lwz      r0, 8(r30)
	lwzx     r0, r28, r0
	cmpw     r26, r0
	blt      lbl_802469CC
	lmw      r24, 0x20(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80246A78
 * Size:	00006C
 */
void RandMapUnit::setFirstMapUnit(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       getFirstMapUnit__Q34Game4Cave11RandMapUnitFv
	or.      r30, r3, r3
	beq      lbl_80246AC8
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r31, r3
	mr       r3, r30
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	lwz      r4, 0x18(r30)
	mr       r5, r3
	mr       r3, r29
	mr       r6, r31
	li       r7, 1
	bl       addMap__Q34Game4Cave11RandMapUnitFPQ34Game4Cave8UnitInfoiib

lbl_80246AC8:
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
 * Address:	80246AE4
 * Size:	00008C
 */
MapNode* RandMapUnit::getFirstMapUnit(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r3, 0x20(r3)
	lwz      r3, 0x10(r3)
	lwz      r31, 0x50(r3)
	b        lbl_80246B50

lbl_80246B04:
	lwz      r3, 0x18(r31)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_80246B4C
	lwz      r3, 0x10(r3)
	b        lbl_80246B44

lbl_80246B1C:
	lwz      r0, 0x18(r3)
	cmpwi    r0, 7
	bne      lbl_80246B40
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       setOffset__Q34Game4Cave7MapNodeFii
	mr       r3, r31
	b        lbl_80246B5C

lbl_80246B40:
	lwz      r3, 4(r3)

lbl_80246B44:
	cmplwi   r3, 0
	bne      lbl_80246B1C

lbl_80246B4C:
	lwz      r31, 4(r31)

lbl_80246B50:
	cmplwi   r31, 0
	bne      lbl_80246B04
	li       r3, 0

lbl_80246B5C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80246B70
 * Size:	000188
 */
MapNode* RandMapUnit::getNormalRandMapUnit(void)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stmw     r23, 0x7c(r1)
	mr       r31, r3
	bl       getOpenDoorNum__Q34Game4Cave11RandMapUnitFv
	mr       r30, r3
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r8, 0x4330
	stw      r0, 0x64(r1)
	xoris    r0, r30, 0x8000
	lwz      r7, 0x20(r31)
	mr       r3, r31
	stw      r8, 0x60(r1)
	addi     r4, r1, 0x10
	lfd      f2, lbl_8051A770@sda21(r2)
	addi     r5, r1, 0xc
	lfd      f1, 0x60(r1)
	addi     r6, r1, 8
	lfs      f0, lbl_8051A778@sda21(r2)
	fsubs    f1, f1, f2
	stw      r0, 0x6c(r1)
	lwz      r30, 0x10(r7)
	stw      r8, 0x68(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x68(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r7, 0x74(r1)
	bl       getCalcDoorIndex__Q34Game4Cave11RandMapUnitFRiRiRii
	lwz      r4, 0x10(r1)
	mr       r28, r3
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	cmplwi   r28, 0
	mr       r27, r3
	beq      lbl_80246CE0
	cmplwi   r27, 0
	beq      lbl_80246CE0
	mr       r3, r31
	mr       r4, r28
	addi     r5, r1, 0x14
	bl setUnitKindOrder__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNodePi
	li       r26, 0
	addi     r28, r1, 0x14

lbl_80246C2C:
	lwz      r4, 0(r28)
	mr       r3, r31
	bl       setUnitDoorSorting__Q34Game4Cave11RandMapUnitFi
	lwz      r0, 0(r28)
	slwi     r3, r0, 6
	addi     r0, r3, 0x10
	lwzx     r25, r30, r0
	b        lbl_80246CC8

lbl_80246C4C:
	mr       r3, r25
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	mr       r3, r31
	mr       r24, r0
	addi     r4, r1, 0x20
	mr       r5, r24
	bl       setRandomDoorIndex__Q34Game4Cave11RandMapUnitFPii
	addi     r29, r1, 0x20
	li       r23, 0
	b        lbl_80246CBC

lbl_80246C78:
	lwz      r5, 0xc(r1)
	mr       r3, r25
	lwz      r6, 8(r1)
	mr       r4, r27
	lwz      r7, 0(r29)
	bl       isDoorSet__Q34Game4Cave7MapNodeFPQ34Game4Cave8DoorNodeiii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80246CB4
	lwz      r3, 0x28(r31)
	mr       r4, r25
	bl       isPutOnMap__Q34Game4Cave14RandMapCheckerFPQ34Game4Cave7MapNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_80246CB4
	mr       r3, r25
	b        lbl_80246CE4

lbl_80246CB4:
	addi     r29, r29, 4
	addi     r23, r23, 1

lbl_80246CBC:
	cmpw     r23, r24
	blt      lbl_80246C78
	lwz      r25, 4(r25)

lbl_80246CC8:
	cmplwi   r25, 0
	bne      lbl_80246C4C
	addi     r26, r26, 1
	addi     r28, r28, 4
	cmpwi    r26, 3
	blt      lbl_80246C2C

lbl_80246CE0:
	li       r3, 0

lbl_80246CE4:
	lmw      r23, 0x7c(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80246CF8
 * Size:	0000C8
 */
void RandMapUnit::setUnitKindOrder(MapNode*, int*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	lbz      r0, 0xc(r3)
	mr       r31, r5
	lfs      f31, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80246D28
	lfs      f31, lbl_8051A760@sda21(r2)

lbl_80246D28:
	lwz      r3, 0x18(r4)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80246D40
	lfs      f0, lbl_8051A77C@sda21(r2)
	fmuls    f31, f31, f0

lbl_80246D40:
	li       r0, 0
	stw      r0, 8(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051A770@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051A768@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051A778@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_80246D94
	li       r3, 2
	li       r0, 1
	stw      r3, 0(r31)
	stw      r0, 4(r31)
	b        lbl_80246DA4

lbl_80246D94:
	li       r3, 1
	li       r0, 2
	stw      r3, 0(r31)
	stw      r0, 4(r31)

lbl_80246DA4:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80246DC0
 * Size:	000314
 */
void RandMapUnit::setUnitDoorSorting(int)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stmw     r25, 0x64(r1)
	cmpwi    r4, 2
	mr       r30, r3
	bne      lbl_802470B0
	lwz      r5, 0x20(r30)
	slwi     r0, r4, 6
	lwz      r4, 0x10(r5)
	add      r31, r4, r0
	bl       getOpenDoorNum__Q34Game4Cave11RandMapUnitFv
	cmpwi    r3, 4
	bge      lbl_80246ED8
	lwz      r3, 0(r30)
	li       r10, 0
	cmpwi    r3, 0
	ble      lbl_80247010
	cmpwi    r3, 8
	addi     r3, r3, -8
	ble      lbl_80246EA8
	addi     r0, r3, 7
	addi     r9, r1, 8
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80246EA8

lbl_80246E3C:
	lwz      r8, 0(r30)
	addi     r0, r10, 1
	addi     r7, r10, 2
	addi     r6, r10, 3
	subf     r3, r10, r8
	addi     r5, r10, 4
	stw      r3, 0(r9)
	subf     r0, r0, r8
	addi     r4, r10, 5
	addi     r3, r10, 6
	stw      r0, 4(r9)
	addi     r0, r10, 7
	subf     r7, r7, r8
	subf     r6, r6, r8
	stw      r7, 8(r9)
	subf     r5, r5, r8
	subf     r4, r4, r8
	subf     r3, r3, r8
	stw      r6, 0xc(r9)
	subf     r0, r0, r8
	addi     r10, r10, 8
	stw      r5, 0x10(r9)
	stw      r4, 0x14(r9)
	stw      r3, 0x18(r9)
	stw      r0, 0x1c(r9)
	addi     r9, r9, 0x20
	bdnz     lbl_80246E3C

lbl_80246EA8:
	slwi     r0, r10, 2
	addi     r3, r1, 8
	add      r3, r3, r0
	b        lbl_80246EC8

lbl_80246EB8:
	subf     r0, r10, r0
	addi     r10, r10, 1
	stw      r0, 0(r3)
	addi     r3, r3, 4

lbl_80246EC8:
	lwz      r0, 0(r30)
	cmpw     r10, r0
	blt      lbl_80246EB8
	b        lbl_80247010

lbl_80246ED8:
	lwz      r4, 0(r30)
	li       r10, 0
	cmpwi    r4, 0
	ble      lbl_80246F84
	cmpwi    r4, 8
	addi     r4, r4, -8
	ble      lbl_80246F58
	addi     r0, r4, 7
	addi     r9, r1, 8
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_80246F58

lbl_80246F0C:
	addi     r4, r10, 1
	addi     r0, r10, 2
	stw      r4, 0(r9)
	addi     r8, r10, 3
	addi     r7, r10, 4
	addi     r6, r10, 5
	stw      r0, 4(r9)
	addi     r5, r10, 6
	addi     r4, r10, 7
	addi     r0, r10, 8
	stw      r8, 8(r9)
	addi     r10, r10, 8
	stw      r7, 0xc(r9)
	stw      r6, 0x10(r9)
	stw      r5, 0x14(r9)
	stw      r4, 0x18(r9)
	stw      r0, 0x1c(r9)
	addi     r9, r9, 0x20
	bdnz     lbl_80246F0C

lbl_80246F58:
	slwi     r0, r10, 2
	addi     r4, r1, 8
	add      r4, r4, r0
	b        lbl_80246F78

lbl_80246F68:
	addi     r0, r10, 1
	addi     r10, r10, 1
	stw      r0, 0(r4)
	addi     r4, r4, 4

lbl_80246F78:
	lwz      r0, 0(r30)
	cmpw     r10, r0
	blt      lbl_80246F68

lbl_80246F84:
	cmpwi    r3, 0xa
	bge      lbl_80247010
	addi     r28, r1, 8
	lfd      f30, lbl_8051A770@sda21(r2)
	lfs      f31, lbl_8051A778@sda21(r2)
	mr       r26, r28
	li       r25, 0
	lis      r29, 0x4330
	b        lbl_80247004

lbl_80246FA8:
	bl       rand
	xoris    r3, r3, 0x8000
	xoris    r0, r27, 0x8000
	stw      r3, 0x4c(r1)
	addi     r25, r25, 1
	lwz      r4, 0(r28)
	stw      r29, 0x48(r1)
	lfd      f0, 0x48(r1)
	stw      r0, 0x54(r1)
	fsubs    f0, f0, f30
	stw      r29, 0x50(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	slwi     r3, r0, 2
	lwzx     r0, r26, r3
	stw      r0, 0(r28)
	addi     r28, r28, 4
	stwx     r4, r26, r3

lbl_80247004:
	lwz      r27, 0(r30)
	cmpw     r25, r27
	blt      lbl_80246FA8

lbl_80247010:
	addi     r28, r1, 8
	li       r25, 0
	b        lbl_802470A4

lbl_8024701C:
	lwz      r27, 0x10(r31)
	li       r26, 0
	b        lbl_80247044

lbl_80247028:
	mr       r3, r27
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	lwz      r0, 0(r28)
	cmpw     r0, r3
	bne      lbl_80247040
	addi     r26, r26, 1

lbl_80247040:
	lwz      r27, 4(r27)

lbl_80247044:
	cmplwi   r27, 0
	bne      lbl_80247028
	li       r27, 0
	b        lbl_80247094

lbl_80247054:
	lwz      r29, 0x10(r31)
	b        lbl_80247088

lbl_8024705C:
	mr       r3, r29
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	lwz      r0, 0(r28)
	cmpw     r0, r3
	bne      lbl_80247084
	mr       r3, r29
	bl       del__5CNodeFv
	mr       r3, r31
	mr       r4, r29
	bl       add__5CNodeFP5CNode

lbl_80247084:
	lwz      r29, 4(r29)

lbl_80247088:
	cmplwi   r29, 0
	bne      lbl_8024705C
	addi     r27, r27, 1

lbl_80247094:
	cmpw     r27, r26
	blt      lbl_80247054
	addi     r28, r28, 4
	addi     r25, r25, 1

lbl_802470A4:
	lwz      r0, 0(r30)
	cmpw     r25, r0
	blt      lbl_8024701C

lbl_802470B0:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	lmw      r25, 0x64(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802470D4
 * Size:	000164
 */
void RandMapUnit::setRandomDoorIndex(int*, int)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stmw     r26, 0x28(r1)
	or.      r31, r5, r5
	mr       r30, r4
	li       r8, 0
	ble      lbl_80247198
	cmpwi    r31, 8
	addi     r3, r31, -8
	ble      lbl_80247170
	addi     r0, r3, 7
	mr       r7, r30
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80247170

lbl_80247128:
	stw      r8, 0(r7)
	addi     r3, r8, 1
	addi     r0, r8, 2
	addi     r6, r8, 3
	stw      r3, 4(r7)
	addi     r5, r8, 4
	addi     r4, r8, 5
	addi     r3, r8, 6
	stw      r0, 8(r7)
	addi     r0, r8, 7
	addi     r8, r8, 8
	stw      r6, 0xc(r7)
	stw      r5, 0x10(r7)
	stw      r4, 0x14(r7)
	stw      r3, 0x18(r7)
	stw      r0, 0x1c(r7)
	addi     r7, r7, 0x20
	bdnz     lbl_80247128

lbl_80247170:
	slwi     r3, r8, 2
	subf     r0, r8, r31
	add      r3, r30, r3
	mtctr    r0
	cmpw     r8, r31
	bge      lbl_80247198

lbl_80247188:
	stw      r8, 0(r3)
	addi     r3, r3, 4
	addi     r8, r8, 1
	bdnz     lbl_80247188

lbl_80247198:
	lfd      f30, lbl_8051A770@sda21(r2)
	mr       r27, r30
	lfs      f31, lbl_8051A778@sda21(r2)
	xoris    r29, r31, 0x8000
	li       r26, 0
	lis      r28, 0x4330
	b        lbl_8024720C

lbl_802471B4:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r28, 8(r1)
	lwz      r4, 0(r27)
	addi     r26, r26, 1
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r29, 0x14(r1)
	fsubs    f0, f0, f30
	stw      r28, 0x10(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	slwi     r3, r0, 2
	lwzx     r0, r30, r3
	stw      r0, 0(r27)
	addi     r27, r27, 4
	stwx     r4, r30, r3

lbl_8024720C:
	cmpw     r26, r31
	blt      lbl_802471B4
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lmw      r26, 0x28(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80247238
 * Size:	000208
 */
MapNode* RandMapUnit::getLoopRandMapUnit(void)
{
	/*
	stwu     r1, -0x850(r1)
	mflr     r0
	stw      r0, 0x854(r1)
	stmw     r21, 0x824(r1)
	mr       r25, r3
	bl       getOpenDoorNum__Q34Game4Cave11RandMapUnitFv
	mr       r30, r3
	mr       r3, r25
	addi     r4, r1, 0x20
	bl getLoopMapNode__Q34Game4Cave11RandMapUnitFPPQ34Game4Cave7MapNode mr
r31, r3 li       r28, 0 b        lbl_80247420

lbl_8024726C:
	mr       r3, r25
	mr       r7, r28
	addi     r4, r1, 0x14
	addi     r5, r1, 0x10
	addi     r6, r1, 0xc
	bl       getCalcDoorIndex__Q34Game4Cave11RandMapUnitFRiRiRii
	mr       r22, r3
	lwz      r5, 0x14(r1)
	mr       r3, r25
	mr       r4, r22
	bl isLoopMapNodeCheck__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNodei
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024741C
	lwz      r4, 0x14(r1)
	mr       r3, r22
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	lwz      r5, 0x14(r1)
	mr       r27, r3
	lwz      r6, 0x10(r1)
	mr       r3, r25
	lwz      r7, 0xc(r1)
	mr       r4, r22
	addi     r8, r1, 8
	bl
getLinkDoorNodeFirst__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNodeiiiRi
or. r23, r3, r3 beq      lbl_8024741C lwz      r4, 0x14(r1) mr       r3, r22
bl getDoorDirect__Q34Game4Cave7MapNodeFi lwz      r5, 0x14(r1) mr       r24,
r3 lwz r7, 8(r1) mr       r3, r25 mr       r4, r22 mr       r6, r23 bl
getLinkDoorDirection__Q34Game4Cave11RandMapUnitFPQ34Game4Cave7MapNodeiPQ34Game4Cave7MapNodei
	addi     r4, r24, 2
	stw      r3, 0x18(r1)
	slwi     r0, r4, 0x1e
	addi     r29, r1, 0x18
	srwi     r3, r4, 0x1f
	stw      r24, 0x1c(r1)
	subf     r0, r3, r0
	li       r26, 0
	rotlwi   r0, r0, 2
	add      r22, r0, r3

lbl_80247324:
	addi     r23, r1, 0x20
	li       r21, 0
	b        lbl_80247404

lbl_80247330:
	lwz      r3, 0(r23)
	li       r4, 0
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	mr       r24, r3
	lwz      r3, 0(r23)
	li       r4, 1
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpw     r24, r22
	bne      lbl_802473A4
	lwz      r0, 0(r29)
	cmpw     r3, r0
	bne      lbl_802473A4
	lwz      r3, 0(r23)
	mr       r4, r27
	lwz      r5, 0x10(r1)
	li       r7, 0
	lwz      r6, 0xc(r1)
	bl       isDoorSet__Q34Game4Cave7MapNodeFPQ34Game4Cave8DoorNodeiii
	clrlwi.  r0, r3, 0x18
	beq      lbl_802473FC
	lwz      r3, 0x28(r25)
	lwz      r4, 0(r23)
	bl       isPutOnMap__Q34Game4Cave14RandMapCheckerFPQ34Game4Cave7MapNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_802473FC
	slwi     r0, r21, 2
	addi     r3, r1, 0x20
	lwzx     r3, r3, r0
	b        lbl_8024742C

lbl_802473A4:
	cmpw     r3, r22
	bne      lbl_802473FC
	lwz      r0, 0(r29)
	cmpw     r24, r0
	bne      lbl_802473FC
	lwz      r3, 0(r23)
	mr       r4, r27
	lwz      r5, 0x10(r1)
	li       r7, 1
	lwz      r6, 0xc(r1)
	bl       isDoorSet__Q34Game4Cave7MapNodeFPQ34Game4Cave8DoorNodeiii
	clrlwi.  r0, r3, 0x18
	beq      lbl_802473FC
	lwz      r3, 0x28(r25)
	lwz      r4, 0(r23)
	bl       isPutOnMap__Q34Game4Cave14RandMapCheckerFPQ34Game4Cave7MapNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_802473FC
	slwi     r0, r21, 2
	addi     r3, r1, 0x20
	lwzx     r3, r3, r0
	b        lbl_8024742C

lbl_802473FC:
	addi     r23, r23, 4
	addi     r21, r21, 1

lbl_80247404:
	cmpw     r21, r31
	blt      lbl_80247330
	addi     r26, r26, 1
	addi     r29, r29, 4
	cmpwi    r26, 2
	blt      lbl_80247324

lbl_8024741C:
	addi     r28, r28, 1

lbl_80247420:
	cmpw     r28, r30
	blt      lbl_8024726C
	li       r3, 0

lbl_8024742C:
	lmw      r21, 0x824(r1)
	lwz      r0, 0x854(r1)
	mtlr     r0
	addi     r1, r1, 0x850
	blr
	*/
}

/*
 * --INFO--
 * Address:	80247440
 * Size:	0000C8
 */
MapNode* RandMapUnit::getCalcDoorIndex(int&, int&, int&, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r4
	mr       r27, r5
	mr       r28, r6
	mr       r29, r7
	li       r31, 0
	lwz      r3, 0x20(r3)
	lwz      r3, 0x28(r3)
	lwz      r30, 0x10(r3)
	b        lbl_802474E8

lbl_80247474:
	li       r0, 0
	stw      r0, 0(r26)
	b        lbl_802474D0

lbl_80247480:
	mr       r3, r30
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802474C4
	cmpw     r31, r29
	bne      lbl_802474C0
	lwz      r4, 0(r26)
	mr       r3, r30
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	lwz      r4, 0(r26)
	mr       r3, r30
	mr       r5, r27
	mr       r6, r28
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	mr       r3, r30
	b        lbl_802474F4

lbl_802474C0:
	addi     r31, r31, 1

lbl_802474C4:
	lwz      r3, 0(r26)
	addi     r0, r3, 1
	stw      r0, 0(r26)

lbl_802474D0:
	mr       r3, r30
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	lwz      r4, 0(r26)
	cmpw     r4, r3
	blt      lbl_80247480
	lwz      r30, 4(r30)

lbl_802474E8:
	cmplwi   r30, 0
	bne      lbl_80247474
	li       r3, 0

lbl_802474F4:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80247508
 * Size:	00012C
 */
MapNode* RandMapUnit::getLinkDoorNodeFirst(MapNode*, int, int, int, int&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r22, 0x18(r1)
	  mr        r23, r4
	  mr        r22, r3
	  mr        r24, r6
	  mr        r25, r7
	  mr        r26, r8
	  mr        r3, r23
	  mr        r4, r5
	  li        r31, 0xFF
	  bl        -0x4510
	  lwz       r4, 0x20(r22)
	  mr        r30, r3
	  li        r29, 0
	  lwz       r3, 0x28(r4)
	  lwz       r28, 0x10(r3)
	  b         .loc_0x10C

	.loc_0x4C:
	  cmplw     r23, r28
	  beq-      .loc_0x108
	  li        r27, 0
	  b         .loc_0xF8

	.loc_0x5C:
	  mr        r3, r28
	  mr        r4, r27
	  bl        -0x4254
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF4
	  mr        r3, r28
	  mr        r4, r27
	  bl        -0x40FC
	  mr        r3, r28
	  mr        r4, r27
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x8
	  bl        -0x4548
	  lwz       r7, 0xC(r1)
	  mr        r3, r22
	  lwz       r8, 0x8(r1)
	  mr        r4, r30
	  mr        r5, r24
	  mr        r6, r25
	  bl        .loc_0x12C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF4
	  lwz       r3, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sub       r4, r25, r3
	  srawi     r5, r4, 0x1F
	  sub       r0, r24, r0
	  srawi     r3, r0, 0x1F
	  xor       r4, r5, r4
	  xor       r0, r3, r0
	  sub       r4, r4, r5
	  sub       r0, r0, r3
	  add       r0, r0, r4
	  cmpw      r0, r31
	  bge-      .loc_0xF4
	  stw       r27, 0x0(r26)
	  mr        r31, r0
	  mr        r29, r28

	.loc_0xF4:
	  addi      r27, r27, 0x1

	.loc_0xF8:
	  mr        r3, r28
	  bl        -0x35A4
	  cmpw      r27, r3
	  blt+      .loc_0x5C

	.loc_0x108:
	  lwz       r28, 0x4(r28)

	.loc_0x10C:
	  cmplwi    r28, 0
	  bne+      .loc_0x4C
	  mr        r3, r29
	  lmw       r22, 0x18(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x12C:
	*/
}

/*
 * --INFO--
 * Address:	80247634
 * Size:	0000D0
 */
bool RandMapUnit::isInLinkArea(int, int, int, int, int)
{
	/*
	subf     r7, r5, r7
	subf     r8, r6, r8
	srawi    r6, r7, 0x1f
	cmpwi    r4, 2
	srawi    r3, r8, 0x1f
	xor      r5, r6, r7
	xor      r0, r3, r8
	subf     r5, r6, r5
	subf     r0, r3, r0
	beq      lbl_802476BC
	bge      lbl_80247670
	cmpwi    r4, 0
	beq      lbl_8024767C
	bge      lbl_8024769C
	b        lbl_802476FC

lbl_80247670:
	cmpwi    r4, 4
	bge      lbl_802476FC
	b        lbl_802476DC

lbl_8024767C:
	cmpwi    r5, 0xa
	bge      lbl_802476FC
	cmpwi    r0, 0xa
	bge      lbl_802476FC
	cmpwi    r8, 0
	bgt      lbl_802476FC
	li       r3, 1
	blr

lbl_8024769C:
	cmpwi    r5, 0xa
	bge      lbl_802476FC
	cmpwi    r7, 0
	blt      lbl_802476FC
	cmpwi    r0, 0xa
	bge      lbl_802476FC
	li       r3, 1
	blr

lbl_802476BC:
	cmpwi    r5, 0xa
	bge      lbl_802476FC
	cmpwi    r0, 0xa
	bge      lbl_802476FC
	cmpwi    r8, 0
	blt      lbl_802476FC
	li       r3, 1
	blr

lbl_802476DC:
	cmpwi    r5, 0xa
	bge      lbl_802476FC
	cmpwi    r7, 0
	bgt      lbl_802476FC
	cmpwi    r0, 0xa
	bge      lbl_802476FC
	li       r3, 1
	blr

lbl_802476FC:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80247704
 * Size:	000130
 */
i32 RandMapUnit::getLoopMapNode(MapNode**)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stmw     r26, 0x28(r1)
	lwz      r3, 0x20(r3)
	mr       r26, r4
	mr       r30, r26
	li       r28, 0
	lwz      r3, 0x10(r3)
	lwz      r29, 0x90(r3)
	b        lbl_80247780

lbl_80247740:
	lwz      r3, 0x18(r29)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_8024777C
	lwz      r3, 0x18(r29)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_8024777C
	mr       r3, r29
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpwi    r3, 2
	bne      lbl_8024777C
	stw      r29, 0(r30)
	addi     r30, r30, 4
	addi     r28, r28, 1

lbl_8024777C:
	lwz      r29, 4(r29)

lbl_80247780:
	cmplwi   r29, 0
	bne      lbl_80247740
	cmpwi    r28, 0
	beq      lbl_8024780C
	lfd      f30, lbl_8051A770@sda21(r2)
	mr       r29, r26
	lfs      f31, lbl_8051A778@sda21(r2)
	xoris    r31, r28, 0x8000
	li       r27, 0
	lis      r30, 0x4330
	b        lbl_80247804

lbl_802477AC:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 8(r1)
	lwz      r4, 0(r29)
	addi     r27, r27, 1
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r31, 0x14(r1)
	fsubs    f0, f0, f30
	stw      r30, 0x10(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	slwi     r3, r0, 2
	lwzx     r0, r26, r3
	stw      r0, 0(r29)
	addi     r29, r29, 4
	stwx     r4, r26, r3

lbl_80247804:
	cmpw     r27, r28
	blt      lbl_802477AC

lbl_8024780C:
	mr       r3, r28
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lmw      r26, 0x28(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80247834
 * Size:	0000EC
 */
CardinalDirection RandMapUnit::getLinkDoorDirection(MapNode*, int, MapNode*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r31, r5
	  mr        r28, r4
	  mr        r27, r3
	  mr        r29, r6
	  mr        r30, r7
	  mr        r3, r28
	  mr        r4, r31
	  addi      r5, r1, 0x14
	  addi      r6, r1, 0x10
	  bl        -0x481C
	  mr        r3, r29
	  mr        r4, r30
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x8
	  bl        -0x4830
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x4860
	  mr        r31, r3
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x4870
	  cmpwi     r31, 0
	  lwz       r7, 0x14(r1)
	  lwz       r5, 0xC(r1)
	  mr        r4, r3
	  lwz       r6, 0x10(r1)
	  lwz       r0, 0x8(r1)
	  sub       r5, r5, r7
	  sub       r6, r0, r6
	  bne-      .loc_0x98
	  mr        r3, r27
	  bl        .loc_0xEC
	  b         .loc_0xD8

	.loc_0x98:
	  cmpwi     r31, 0x1
	  bne-      .loc_0xAC
	  mr        r3, r27
	  bl        0x104
	  b         .loc_0xD8

	.loc_0xAC:
	  cmpwi     r31, 0x2
	  bne-      .loc_0xC0
	  mr        r3, r27
	  bl        0x1B4
	  b         .loc_0xD8

	.loc_0xC0:
	  cmpwi     r31, 0x3
	  bne-      .loc_0xD4
	  mr        r3, r27
	  bl        0x25C
	  b         .loc_0xD8

	.loc_0xD4:
	  li        r3, -0x1

	.loc_0xD8:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0xEC:
	*/
}

/*
 * --INFO--
 * Address:	80247920
 * Size:	0000BC
 */
CardinalDirection RandMapUnit::getUpToLinkDoorDir(int, int, int)
{
	/*
	cmpwi    r6, -2
	ble      lbl_8024793C
	cmpwi    r5, 0
	li       r3, 1
	bgelr
	li       r3, 3
	blr

lbl_8024793C:
	cmpwi    r5, -1
	bge      lbl_8024794C
	li       r3, 3
	blr

lbl_8024794C:
	bne      lbl_80247970
	cmpwi    r4, 2
	beq      lbl_80247960
	cmpwi    r4, 3
	bne      lbl_80247968

lbl_80247960:
	li       r3, 3
	blr

lbl_80247968:
	li       r3, 0
	blr

lbl_80247970:
	cmpwi    r5, 0
	bne      lbl_80247998
	cmpwi    r4, 0
	beq      lbl_80247988
	cmpwi    r4, 3
	bne      lbl_80247990

lbl_80247988:
	li       r3, 3
	blr

lbl_80247990:
	li       r3, 0
	blr

lbl_80247998:
	cmpwi    r5, 1
	bne      lbl_802479C0
	cmpwi    r4, 1
	beq      lbl_802479B0
	cmpwi    r4, 2
	bne      lbl_802479B8

lbl_802479B0:
	li       r3, 1
	blr

lbl_802479B8:
	li       r3, 0
	blr

lbl_802479C0:
	li       r0, 1
	xor      r0, r5, r0
	srawi    r3, r0, 1
	and      r0, r0, r5
	subf     r0, r0, r3
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	802479DC
 * Size:	0000C4
 */
CardinalDirection RandMapUnit::getRightToLinkDoorDir(int, int, int)
{
	/*
	cmpwi    r5, 0
	bne      lbl_802479FC
	neg      r3, r6
	li       r0, 2
	andc     r3, r3, r6
	srawi    r3, r3, 0x1f
	and      r3, r0, r3
	blr

lbl_802479FC:
	cmpwi    r6, -1
	bge      lbl_80247A0C
	li       r3, 0
	blr

lbl_80247A0C:
	bne      lbl_80247A30
	cmpwi    r4, 0
	beq      lbl_80247A20
	cmpwi    r4, 3
	bne      lbl_80247A28

lbl_80247A20:
	li       r3, 0
	blr

lbl_80247A28:
	li       r3, 1
	blr

lbl_80247A30:
	cmpwi    r6, 0
	bne      lbl_80247A58
	cmpwi    r4, 0
	beq      lbl_80247A48
	cmpwi    r4, 1
	bne      lbl_80247A50

lbl_80247A48:
	li       r3, 0
	blr

lbl_80247A50:
	li       r3, 1
	blr

lbl_80247A58:
	cmpwi    r6, 1
	bne      lbl_80247A80
	cmpwi    r4, 2
	beq      lbl_80247A70
	cmpwi    r4, 3
	bne      lbl_80247A78

lbl_80247A70:
	li       r3, 2
	blr

lbl_80247A78:
	li       r3, 1
	blr

lbl_80247A80:
	li       r0, 1
	xor      r0, r6, r0
	srawi    r3, r0, 1
	and      r0, r0, r6
	subf     r0, r0, r3
	srwi     r3, r0, 0x1f
	addi     r3, r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80247AA0
 * Size:	0000BC
 */
CardinalDirection RandMapUnit::getDownToLinkDoorDir(int, int, int)
{
	/*
	cmpwi    r6, 0
	bne      lbl_80247ABC
	cmpwi    r5, 0
	li       r3, 3
	blelr
	li       r3, 1
	blr

lbl_80247ABC:
	cmpwi    r5, -1
	bge      lbl_80247ACC
	li       r3, 3
	blr

lbl_80247ACC:
	bne      lbl_80247AF0
	cmpwi    r4, 0
	beq      lbl_80247AE0
	cmpwi    r4, 3
	bne      lbl_80247AE8

lbl_80247AE0:
	li       r3, 3
	blr

lbl_80247AE8:
	li       r3, 2
	blr

lbl_80247AF0:
	cmpwi    r5, 0
	bne      lbl_80247B18
	cmpwi    r4, 2
	beq      lbl_80247B08
	cmpwi    r4, 3
	bne      lbl_80247B10

lbl_80247B08:
	li       r3, 3
	blr

lbl_80247B10:
	li       r3, 2
	blr

lbl_80247B18:
	cmpwi    r5, 1
	bne      lbl_80247B40
	cmpwi    r4, 0
	beq      lbl_80247B30
	cmpwi    r4, 1
	bne      lbl_80247B38

lbl_80247B30:
	li       r3, 1
	blr

lbl_80247B38:
	li       r3, 2
	blr

lbl_80247B40:
	li       r4, 1
	srwi     r3, r5, 0x1f
	subfc    r0, r5, r4
	srwi     r0, r4, 0x1f
	subfe    r3, r0, r3
	addi     r3, r3, 2
	blr
	*/
}

/*
 * --INFO--
 * Address:	80247B5C
 * Size:	0000C0
 */
CardinalDirection RandMapUnit::getLeftToLinkDoorDir(int, int, int)
{
	/*
	cmpwi    r5, -2
	ble      lbl_80247B7C
	neg      r3, r6
	li       r0, 2
	andc     r3, r3, r6
	srawi    r3, r3, 0x1f
	and      r3, r0, r3
	blr

lbl_80247B7C:
	cmpwi    r6, -1
	bge      lbl_80247B8C
	li       r3, 0
	blr

lbl_80247B8C:
	bne      lbl_80247BB0
	cmpwi    r4, 0
	beq      lbl_80247BA0
	cmpwi    r4, 1
	bne      lbl_80247BA8

lbl_80247BA0:
	li       r3, 0
	blr

lbl_80247BA8:
	li       r3, 3
	blr

lbl_80247BB0:
	cmpwi    r6, 0
	bne      lbl_80247BD8
	cmpwi    r4, 0
	beq      lbl_80247BC8
	cmpwi    r4, 3
	bne      lbl_80247BD0

lbl_80247BC8:
	li       r3, 0
	blr

lbl_80247BD0:
	li       r3, 3
	blr

lbl_80247BD8:
	cmpwi    r6, 1
	bne      lbl_80247C00
	cmpwi    r4, 1
	beq      lbl_80247BF0
	cmpwi    r4, 2
	bne      lbl_80247BF8

lbl_80247BF0:
	li       r3, 2
	blr

lbl_80247BF8:
	li       r3, 3
	blr

lbl_80247C00:
	li       r4, 1
	srwi     r3, r6, 0x1f
	subfc    r0, r6, r4
	srwi     r0, r4, 0x1f
	subfe    r3, r0, r3
	addi     r3, r3, 3
	blr
	*/
}

/*
 * --INFO--
 * Address:	80247C1C
 * Size:	0002F0
 */
MapNode* RandMapUnit::getLoopEndMapUnit(void)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stmw     r19, 0x7c(r1)
	mr       r21, r3
	li       r20, 0
	lwz      r4, 0x20(r3)
	lwz      r3, 0x28(r4)
	lwz      r31, 0x10(r4)
	lwz      r19, 0x10(r3)
	b        lbl_80247CBC

lbl_80247C58:
	li       r22, 0
	b        lbl_80247CA8

lbl_80247C60:
	mr       r3, r19
	mr       r4, r22
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80247CA4
	cmpwi    r20, 0
	bne      lbl_80247CA0
	mr       r3, r19
	mr       r4, r22
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r3, r19
	mr       r4, r22
	addi     r5, r1, 0xc
	addi     r6, r1, 8
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	b        lbl_80247CC8

lbl_80247CA0:
	addi     r20, r20, 1

lbl_80247CA4:
	addi     r22, r22, 1

lbl_80247CA8:
	mr       r3, r19
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r22, r3
	blt      lbl_80247C60
	lwz      r19, 4(r19)

lbl_80247CBC:
	cmplwi   r19, 0
	bne      lbl_80247C58
	li       r19, 0

lbl_80247CC8:
	mr       r3, r19
	mr       r4, r22
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	lis      r4, lbl_804840B4@ha
	mr       r26, r3
	addi     r5, r4, lbl_804840B4@l
	cmplwi   r19, 0
	lwz      r4, 0(r5)
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 0x10(r1)
	stw      r3, 0x14(r1)
	stw      r0, 0x18(r1)
	beq      lbl_80247EE4
	cmplwi   r26, 0
	beq      lbl_80247EE4
	li       r25, 0
	addi     r29, r1, 0x10

lbl_80247D10:
	li       r24, 0
	b        lbl_80247EC8

lbl_80247D18:
	lwz      r0, 0(r29)
	addi     r23, r24, 1
	slwi     r3, r0, 6
	addi     r0, r3, 0x10
	lwzx     r22, r31, r0
	b        lbl_80247EBC

lbl_80247D30:
	mr       r3, r22
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r23, r3
	bne      lbl_80247EB8
	cmpwi    r23, 0
	li       r7, 0
	ble      lbl_80247DE4
	cmpwi    r23, 8
	addi     r3, r23, -8
	ble      lbl_80247DB8
	addi     r0, r3, 7
	addi     r8, r1, 0x1c
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80247DB8

lbl_80247D70:
	stw      r7, 0(r8)
	addi     r3, r7, 1
	addi     r0, r7, 2
	addi     r6, r7, 3
	stw      r3, 4(r8)
	addi     r5, r7, 4
	addi     r4, r7, 5
	addi     r3, r7, 6
	stw      r0, 8(r8)
	addi     r0, r7, 7
	addi     r7, r7, 8
	stw      r6, 0xc(r8)
	stw      r5, 0x10(r8)
	stw      r4, 0x14(r8)
	stw      r3, 0x18(r8)
	stw      r0, 0x1c(r8)
	addi     r8, r8, 0x20
	bdnz     lbl_80247D70

lbl_80247DB8:
	slwi     r3, r7, 2
	addi     r4, r1, 0x1c
	subf     r0, r7, r23
	add      r4, r4, r3
	mtctr    r0
	cmpw     r7, r23
	bge      lbl_80247DE4

lbl_80247DD4:
	stw      r7, 0(r4)
	addi     r4, r4, 4
	addi     r7, r7, 1
	bdnz     lbl_80247DD4

lbl_80247DE4:
	addi     r28, r1, 0x1c
	lfd      f30, lbl_8051A770@sda21(r2)
	lfs      f31, lbl_8051A778@sda21(r2)
	mr       r30, r28
	xoris    r20, r23, 0x8000
	li       r27, 0
	lis      r19, 0x4330
	b        lbl_80247E5C

lbl_80247E04:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r19, 0x60(r1)
	lwz      r4, 0(r30)
	addi     r27, r27, 1
	stw      r0, 0x64(r1)
	lfd      f0, 0x60(r1)
	stw      r20, 0x6c(r1)
	fsubs    f0, f0, f30
	stw      r19, 0x68(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x68(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	slwi     r3, r0, 2
	lwzx     r0, r28, r3
	stw      r0, 0(r30)
	addi     r30, r30, 4
	stwx     r4, r28, r3

lbl_80247E5C:
	cmpw     r27, r23
	blt      lbl_80247E04
	li       r19, 0
	b        lbl_80247EB0

lbl_80247E6C:
	lwz      r5, 0xc(r1)
	mr       r3, r22
	lwz      r6, 8(r1)
	mr       r4, r26
	lwz      r7, 0(r28)
	bl       isDoorSet__Q34Game4Cave7MapNodeFPQ34Game4Cave8DoorNodeiii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80247EA8
	lwz      r3, 0x28(r21)
	mr       r4, r22
	bl       isPutOnMap__Q34Game4Cave14RandMapCheckerFPQ34Game4Cave7MapNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_80247EA8
	mr       r3, r22
	b        lbl_80247EE8

lbl_80247EA8:
	addi     r28, r28, 4
	addi     r19, r19, 1

lbl_80247EB0:
	cmpw     r19, r23
	blt      lbl_80247E6C

lbl_80247EB8:
	lwz      r22, 4(r22)

lbl_80247EBC:
	cmplwi   r22, 0
	bne      lbl_80247D30
	addi     r24, r24, 1

lbl_80247EC8:
	lwz      r0, 0(r21)
	cmpw     r24, r0
	blt      lbl_80247D18
	addi     r25, r25, 1
	addi     r29, r29, 4
	cmpwi    r25, 3
	blt      lbl_80247D10

lbl_80247EE4:
	li       r3, 0

lbl_80247EE8:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	lmw      r19, 0x7c(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80247F0C
 * Size:	000070
 */
int RandMapUnit::getPartsKindNum(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x20(r3)
	lwz      r3, 0x28(r3)
	lwz      r30, 0x10(r3)
	b        lbl_80247F54

lbl_80247F3C:
	lwz      r3, 0x18(r30)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpw     r29, r3
	bne      lbl_80247F50
	addi     r31, r31, 1

lbl_80247F50:
	lwz      r30, 4(r30)

lbl_80247F54:
	cmplwi   r30, 0
	bne      lbl_80247F3C
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	80247F7C
 * Size:	00008C
 */
int RandMapUnit::getOpenDoorNum(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r3, 0x20(r3)
	lwz      r3, 0x28(r3)
	lwz      r30, 0x10(r3)
	b        lbl_80247FE0

lbl_80247FA8:
	li       r29, 0
	b        lbl_80247FCC

lbl_80247FB0:
	mr       r3, r30
	mr       r4, r29
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80247FC8
	addi     r31, r31, 1

lbl_80247FC8:
	addi     r29, r29, 1

lbl_80247FCC:
	mr       r3, r30
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r29, r3
	blt      lbl_80247FB0
	lwz      r30, 4(r30)

lbl_80247FE0:
	cmplwi   r30, 0
	bne      lbl_80247FA8
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	80248008
 * Size:	0000B4
 */
void RandMapUnit::addMap(UnitInfo*, int, int, bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	mr       r28, r5
	mr       r29, r6
	mr       r30, r7
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80248048
	mr       r4, r27
	bl       __ct__Q34Game4Cave7MapNodeFPQ34Game4Cave8UnitInfo
	mr       r31, r3

lbl_80248048:
	cmplwi   r31, 0
	beq      lbl_80248084
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x10(r31)
	mr       r4, r28
	mr       r5, r29
	stw      r0, 0xc(r31)
	stw      r0, 8(r31)
	stw      r0, 4(r31)
	bl       setOffset__Q34Game4Cave7MapNodeFii
	lwz      r3, 0x20(r26)
	mr       r4, r31
	lwz      r3, 0x28(r3)
	bl       add__5CNodeFP5CNode

lbl_80248084:
	clrlwi.  r0, r30, 0x18
	beq      lbl_802480A8
	mr       r3, r26
	bl       closeDoorCheck__Q34Game4Cave11RandMapUnitFv
	mr       r3, r26
	bl       moveCentre__Q34Game4Cave11RandMapUnitFv
	mr       r3, r26
	mr       r4, r27
	bl changeMapPriority__Q34Game4Cave11RandMapUnitFPQ34Game4Cave8UnitInfo

lbl_802480A8:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802480BC
 * Size:	0003DC
 */
void RandMapUnit::changeMapPriority(UnitInfo*)
{
	/*
	stwu     r1, -0x480(r1)
	mflr     r0
	stw      r0, 0x484(r1)
	stfd     f31, 0x470(r1)
	psq_st   f31, 1144(r1), 0, qr0
	stfd     f30, 0x460(r1)
	psq_st   f30, 1128(r1), 0, qr0
	stfd     f29, 0x450(r1)
	psq_st   f29, 1112(r1), 0, qr0
	stmw     r21, 0x424(r1)
	mr       r21, r4
	mr       r23, r3
	mr       r3, r21
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	lwz      r5, 0x20(r23)
	cmpwi    r3, 1
	slwi     r0, r3, 6
	lwz      r4, 0x10(r5)
	add      r29, r4, r0
	bne      lbl_802483E0
	lwz      r26, 0x28(r5)
	mr       r3, r21
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	lwz      r3, 0x24(r23)
	addi     r30, r1, 0x208
	addi     r31, r1, 8
	li       r0, 8
	lwz      r3, 4(r3)
	mr       r4, r30
	mr       r5, r31
	li       r27, 0
	addi     r28, r3, -4
	mtctr    r0

lbl_80248140:
	li       r0, 0
	stw      r0, 0(r4)
	stw      r0, 0(r5)
	stw      r0, 4(r4)
	stw      r0, 4(r5)
	stw      r0, 8(r4)
	stw      r0, 8(r5)
	stw      r0, 0xc(r4)
	stw      r0, 0xc(r5)
	stw      r0, 0x10(r4)
	stw      r0, 0x10(r5)
	stw      r0, 0x14(r4)
	stw      r0, 0x14(r5)
	stw      r0, 0x18(r4)
	stw      r0, 0x18(r5)
	stw      r0, 0x1c(r4)
	stw      r0, 0x1c(r5)
	stw      r0, 0x20(r4)
	stw      r0, 0x20(r5)
	stw      r0, 0x24(r4)
	stw      r0, 0x24(r5)
	stw      r0, 0x28(r4)
	stw      r0, 0x28(r5)
	stw      r0, 0x2c(r4)
	stw      r0, 0x2c(r5)
	stw      r0, 0x30(r4)
	stw      r0, 0x30(r5)
	stw      r0, 0x34(r4)
	stw      r0, 0x34(r5)
	stw      r0, 0x38(r4)
	stw      r0, 0x38(r5)
	stw      r0, 0x3c(r4)
	addi     r4, r4, 0x40
	stw      r0, 0x3c(r5)
	addi     r5, r5, 0x40
	bdnz     lbl_80248140
	lwz      r23, 0x10(r26)
	mr       r25, r31
	mr       r24, r30
	b        lbl_80248278

lbl_802481E0:
	lwz      r3, 0x18(r23)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80248274
	mr       r26, r31
	li       r22, 1
	li       r21, 0
	b        lbl_80248240

lbl_80248200:
	mr       r3, r23
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	mr       r4, r3
	lwz      r3, 0(r26)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80248238
	slwi     r5, r21, 2
	addi     r4, r1, 0x208
	lwzx     r3, r4, r5
	li       r22, 0
	addi     r0, r3, 1
	stwx     r0, r4, r5
	b        lbl_80248248

lbl_80248238:
	addi     r26, r26, 4
	addi     r21, r21, 1

lbl_80248240:
	cmpw     r21, r27
	blt      lbl_80248200

lbl_80248248:
	clrlwi.  r0, r22, 0x18
	beq      lbl_80248274
	mr       r3, r23
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	lwz      r4, 0(r24)
	addi     r27, r27, 1
	stw      r3, 0(r25)
	addi     r25, r25, 4
	addi     r0, r4, 1
	stw      r0, 0(r24)
	addi     r24, r24, 4

lbl_80248274:
	lwz      r23, 4(r23)

lbl_80248278:
	cmplwi   r23, 0
	bne      lbl_802481E0
	mr       r6, r31
	addi     r3, r27, -1
	li       r9, 0
	b        lbl_802482FC

lbl_80248290:
	addi     r10, r9, 1
	addi     r4, r1, 0x208
	slwi     r7, r10, 2
	addi     r5, r1, 8
	subf     r0, r10, r27
	add      r4, r4, r7
	add      r5, r5, r7
	mtctr    r0
	cmpw     r10, r27
	bge      lbl_802482F0

lbl_802482B8:
	lwz      r7, 0(r30)
	lwz      r8, 0(r4)
	cmpw     r7, r8
	ble      lbl_802482E0
	lwz      r11, 0(r6)
	lwz      r0, 0(r5)
	stw      r8, 0(r30)
	stw      r0, 0(r6)
	stw      r7, 0(r4)
	stw      r11, 0(r5)

lbl_802482E0:
	addi     r4, r4, 4
	addi     r5, r5, 4
	addi     r10, r10, 1
	bdnz     lbl_802482B8

lbl_802482F0:
	addi     r30, r30, 4
	addi     r6, r6, 4
	addi     r9, r9, 1

lbl_802482FC:
	cmpw     r9, r3
	blt      lbl_80248290
	lfd      f29, lbl_8051A770@sda21(r2)
	li       r21, 0
	lfs      f31, lbl_8051A778@sda21(r2)
	lis      r30, 0x4330
	lfs      f30, lbl_8051A780@sda21(r2)
	b        lbl_802483D4

lbl_8024831C:
	li       r22, 0

lbl_80248320:
	lwz      r23, 0x10(r29)
	b        lbl_80248358

lbl_80248328:
	mr       r3, r23
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	lwz      r4, 0(r31)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80248354
	mr       r3, r23
	bl       del__5CNodeFv
	mr       r3, r29
	mr       r4, r23
	bl       add__5CNodeFP5CNode

lbl_80248354:
	lwz      r23, 4(r23)

lbl_80248358:
	cmplwi   r23, 0
	bne      lbl_80248328
	addi     r22, r22, 1
	cmpwi    r22, 4
	blt      lbl_80248320
	li       r22, 0

lbl_80248370:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 0x408(r1)
	mr       r3, r29
	stw      r0, 0x40c(r1)
	lfd      f0, 0x408(r1)
	fsubs    f0, f0, f29
	fdivs    f0, f0, f31
	fmuls    f0, f30, f0
	fctiwz   f0, f0
	stfd     f0, 0x410(r1)
	lwz      r0, 0x414(r1)
	add      r4, r28, r0
	bl       getChildAt__5CNodeFi
	or.      r23, r3, r3
	beq      lbl_802483C0
	bl       del__5CNodeFv
	mr       r3, r29
	mr       r4, r23
	bl       add__5CNodeFP5CNode

lbl_802483C0:
	addi     r22, r22, 1
	cmpwi    r22, 4
	blt      lbl_80248370
	addi     r31, r31, 4
	addi     r21, r21, 1

lbl_802483D4:
	cmpw     r21, r27
	blt      lbl_8024831C
	b        lbl_8024846C

lbl_802483E0:
	lfd      f30, lbl_8051A770@sda21(r2)
	slwi     r24, r3, 2
	lfs      f31, lbl_8051A778@sda21(r2)
	li       r21, 0
	lis      r27, 0x4330
	b        lbl_8024845C

lbl_802483F8:
	bl       rand
	xoris    r3, r3, 0x8000
	xoris    r0, r25, 0x8000
	stw      r3, 0x414(r1)
	mr       r3, r29
	stw      r27, 0x410(r1)
	lfd      f0, 0x410(r1)
	stw      r0, 0x40c(r1)
	fsubs    f0, f0, f30
	stw      r27, 0x408(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x408(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x418(r1)
	lwz      r4, 0x41c(r1)
	bl       getChildAt__5CNodeFi
	or.      r22, r3, r3
	beq      lbl_80248458
	bl       del__5CNodeFv
	mr       r3, r29
	mr       r4, r22
	bl       add__5CNodeFP5CNode

lbl_80248458:
	addi     r21, r21, 1

lbl_8024845C:
	lwz      r0, 0x24(r23)
	lwzx     r25, r24, r0
	cmpw     r21, r25
	blt      lbl_802483F8

lbl_8024846C:
	psq_l    f31, 1144(r1), 0, qr0
	lfd      f31, 0x470(r1)
	psq_l    f30, 1128(r1), 0, qr0
	lfd      f30, 0x460(r1)
	psq_l    f29, 1112(r1), 0, qr0
	lfd      f29, 0x450(r1)
	lmw      r21, 0x424(r1)
	lwz      r0, 0x484(r1)
	mtlr     r0
	addi     r1, r1, 0x480
	blr
	*/
}

/*
 * --INFO--
 * Address:	80248498
 * Size:	00012C
 */
void RandMapUnit::moveCentre(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r22, 8(r1)
	mr       r31, r3
	li       r29, -12800
	li       r28, -12800
	li       r27, 0x3200
	li       r26, 0x3200
	lwz      r3, 0x20(r3)
	lwz      r30, 0x28(r3)
	lwz      r25, 0x10(r30)
	b        lbl_80248538

lbl_802484CC:
	mr       r3, r25
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	lwz      r3, 0x18(r25)
	mr       r24, r0
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	add      r23, r24, r3
	mr       r3, r25
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	lwz      r3, 0x18(r25)
	mr       r22, r0
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	cmpw     r24, r27
	add      r0, r22, r3
	bge      lbl_80248510
	mr       r27, r24

lbl_80248510:
	cmpw     r23, r29
	ble      lbl_8024851C
	mr       r29, r23

lbl_8024851C:
	cmpw     r22, r26
	bge      lbl_80248528
	mr       r26, r22

lbl_80248528:
	cmpw     r0, r28
	ble      lbl_80248534
	mr       r28, r0

lbl_80248534:
	lwz      r25, 4(r25)

lbl_80248538:
	cmplwi   r25, 0
	bne      lbl_802484CC
	lwz      r22, 0x10(r30)
	b        lbl_80248574

lbl_80248548:
	mr       r3, r22
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r30, r3
	mr       r3, r22
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	mr       r3, r22
	subf     r4, r27, r30
	subf     r5, r26, r0
	bl       setOffset__Q34Game4Cave7MapNodeFii
	lwz      r22, 4(r22)

lbl_80248574:
	cmplwi   r22, 0
	bne      lbl_80248548
	lbz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_802485B0
	subf     r0, r27, r29
	cmpwi    r0, 0x23
	ble      lbl_8024859C
	li       r0, 1
	stb      r0, 0xc(r31)

lbl_8024859C:
	subf     r0, r26, r28
	cmpwi    r0, 0x23
	ble      lbl_802485B0
	li       r0, 1
	stb      r0, 0xc(r31)

lbl_802485B0:
	lmw      r22, 8(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802485C4
 * Size:	000134
 */
void RandMapUnit::closeDoorCheck(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	lwz      r3, 0x20(r3)
	lwz      r31, 0x28(r3)
	lwz      r30, 0x10(r31)
	b        lbl_802486DC

lbl_802485E4:
	li       r29, 0
	b        lbl_802486C8

lbl_802485EC:
	mr       r3, r30
	mr       r4, r29
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802486C4
	mr       r3, r30
	mr       r4, r29
	addi     r5, r1, 0x14
	addi     r6, r1, 0x10
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	mr       r3, r30
	mr       r4, r29
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	lwz      r27, 0x10(r31)
	mr       r28, r3
	b        lbl_802486BC

lbl_8024862C:
	cmplw    r30, r27
	beq      lbl_802486B8
	li       r26, 0
	b        lbl_802486A8

lbl_8024863C:
	mr       r3, r27
	mr       r4, r26
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r4, r3
	mr       r3, r28
	bl       isDoorAdjust__Q34Game4Cave8DoorNodeFPQ34Game4Cave8DoorNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_802486A4
	mr       r3, r27
	mr       r4, r26
	addi     r5, r1, 0xc
	addi     r6, r1, 8
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	lwz      r3, 0x14(r1)
	lwz      r0, 0xc(r1)
	cmpw     r3, r0
	bne      lbl_802486A4
	lwz      r3, 0x10(r1)
	lwz      r0, 8(r1)
	cmpw     r3, r0
	bne      lbl_802486A4
	mr       r3, r30
	mr       r4, r29
	mr       r5, r27
	mr       r6, r26
	bl       setDoorClose__Q34Game4Cave7MapNodeFiPQ34Game4Cave7MapNodei

lbl_802486A4:
	addi     r26, r26, 1

lbl_802486A8:
	mr       r3, r27
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r26, r3
	blt      lbl_8024863C

lbl_802486B8:
	lwz      r27, 4(r27)

lbl_802486BC:
	cmplwi   r27, 0
	bne      lbl_8024862C

lbl_802486C4:
	addi     r29, r29, 1

lbl_802486C8:
	mr       r3, r30
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r29, r3
	blt      lbl_802485EC
	lwz      r30, 4(r30)

lbl_802486DC:
	cmplwi   r30, 0
	bne      lbl_802485E4
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802486F8
 * Size:	000038
 */
void RandMapUnit::deleteMapNode(MapNode*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       detachDoorClose__Q34Game4Cave7MapNodeFv
	mr       r3, r31
	bl       del__5CNodeFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80248730
 * Size:	000198
 */
void RandMapUnit::createLoopMapNodeCheck(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r28, r3
	lbz      r0, 0xd(r3)
	cmplwi   r0, 0
	beq      lbl_802488B4
	li       r31, 0
	stb      r31, 0xd(r28)
	lwz      r3, 0x20(r28)
	lwz      r3, 0x28(r3)
	lwz      r27, 0x10(r3)
	b        lbl_802487A0

lbl_80248768:
	li       r29, 0
	b        lbl_8024878C

lbl_80248770:
	mr       r3, r27
	mr       r4, r29
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80248788
	addi     r31, r31, 1

lbl_80248788:
	addi     r29, r29, 1

lbl_8024878C:
	mr       r3, r27
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r29, r3
	blt      lbl_80248770
	lwz      r27, 4(r27)

lbl_802487A0:
	cmplwi   r27, 0
	bne      lbl_80248768
	li       r29, 0
	b        lbl_802488AC

lbl_802487B0:
	lwz      r0, 0x10(r28)
	cmpwi    r0, 0x10
	bge      lbl_802488A8
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051A770@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051A768@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051A778@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, 0x14(r28)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802488A8
	lwz      r3, 0x20(r28)
	li       r26, 0
	lwz      r3, 0x28(r3)
	lwz      r27, 0x10(r3)
	b        lbl_80248870

lbl_8024880C:
	li       r30, 0
	b        lbl_8024885C

lbl_80248814:
	mr       r3, r27
	mr       r4, r30
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80248858
	cmpw     r26, r29
	bne      lbl_80248854
	mr       r3, r27
	mr       r4, r30
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r3, r27
	mr       r4, r30
	addi     r5, r1, 0xc
	addi     r6, r1, 8
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	b        lbl_8024887C

lbl_80248854:
	addi     r26, r26, 1

lbl_80248858:
	addi     r30, r30, 1

lbl_8024885C:
	mr       r3, r27
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r30, r3
	blt      lbl_80248814
	lwz      r27, 4(r27)

lbl_80248870:
	cmplwi   r27, 0
	bne      lbl_8024880C
	li       r27, 0

lbl_8024887C:
	lwz      r0, 0x10(r28)
	lwz      r3, 0x18(r28)
	slwi     r0, r0, 2
	stwx     r27, r3, r0
	lwz      r0, 0x10(r28)
	lwz      r3, 0x1c(r28)
	slwi     r0, r0, 2
	stwx     r30, r3, r0
	lwz      r3, 0x10(r28)
	addi     r0, r3, 1
	stw      r0, 0x10(r28)

lbl_802488A8:
	addi     r29, r29, 1

lbl_802488AC:
	cmpw     r29, r31
	blt      lbl_802487B0

lbl_802488B4:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802488C8
 * Size:	00004C
 */
bool RandMapUnit::isLoopMapNodeCheck(MapNode*, int)
{
	/*
	lwz      r0, 0x10(r3)
	li       r7, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8024890C

lbl_802488DC:
	lwz      r6, 0x18(r3)
	lwzx     r0, r6, r7
	cmplw    r4, r0
	bne      lbl_80248904
	lwz      r6, 0x1c(r3)
	lwzx     r0, r6, r7
	cmpw     r5, r0
	bne      lbl_80248904
	li       r3, 0
	blr

lbl_80248904:
	addi     r7, r7, 4
	bdnz     lbl_802488DC

lbl_8024890C:
	li       r3, 1
	blr
	*/
}
} // namespace Cave
} // namespace Game
