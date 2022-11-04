#include "Dolphin/gd.h"
#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "Dolphin/stl.h"
#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global sDifferedRegister
    sDifferedRegister:
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x01000000
        .4byte 0x10000000
        .4byte 0x20000000
        .4byte 0x02000000
        .4byte 0x08000000
    .global sSizeOfDiffered
    sSizeOfDiffered:
        .4byte 0x0000000D
        .4byte 0x00000015
        .4byte 0x00000078
        .4byte 0x00000037
        .4byte 0x0000000F
        .4byte 0x00000013
        .4byte 0x0000002D
    .global __vt__14J3DShapePacket
    __vt__14J3DShapePacket:
        .4byte 0
        .4byte 0
        .4byte entry__9J3DPacketFP13J3DDrawBuffer
        .4byte draw__14J3DShapePacketFv
        .4byte __dt__14J3DShapePacketFv
    .global __vt__12J3DMatPacket
    __vt__12J3DMatPacket:
        .4byte 0
        .4byte 0
        .4byte entry__12J3DMatPacketFP13J3DDrawBuffer
        .4byte draw__12J3DMatPacketFv
        .4byte __dt__12J3DMatPacketFv
    .global __vt__13J3DDrawPacket
    __vt__13J3DDrawPacket:
        .4byte 0
        .4byte 0
        .4byte entry__9J3DPacketFP13J3DDrawBuffer
        .4byte draw__13J3DDrawPacketFv
        .4byte __dt__13J3DDrawPacketFv
    .global __vt__9J3DPacket
    __vt__9J3DPacket:
        .4byte 0
        .4byte 0
        .4byte entry__9J3DPacketFP13J3DDrawBuffer
        .4byte draw__9J3DPacketFv
        .4byte __dt__9J3DPacketFv

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sGDLObj__17J3DDisplayListObj
    sGDLObj__17J3DDisplayListObj:
        .skip 0x10

    .section .sbss # 0x80514D80 - 0x80516360
    .global sInterruptFlag__17J3DDisplayListObj
    sInterruptFlag__17J3DDisplayListObj:
        .skip 0x8
*/

const u32 sDifferedRegister[7] = { 1, 2, 0x1000000, 0x10000000, 0x20000000, 0x2000000, 0x8000000 };
const u32 sSizeOfDiffered[7]   = { 0xD, 0x15, 0x78, 0x37, 0xF, 0x13, 0x2D };

/*
 * --INFO--
 * Address:	8005F82C
 * Size:	000060
 */
J3DErrType J3DDisplayListObj::newDisplayList(u32 p1)
{
	_0C = ALIGN_NEXT(p1, 0x20);
	_00 = new (0x20) u8[_0C];
	_04 = new (0x20) u8[_0C];
	_08 = 0;
	return JET_Success;
}

/*
 * --INFO--
 * Address:	8005F88C
 * Size:	000058
 */
J3DErrType J3DDisplayListObj::newSingleDisplayList(u32 p1)
{
	_0C = ALIGN_NEXT(p1, 0x20);
	_00 = new (0x20) u8[_0C];
	_04 = _00;
	_08 = 0;
	return JET_Success;
}

/*
 * --INFO--
 * Address:	8005F8E4
 * Size:	000068
 */
J3DErrType J3DDisplayListObj::single_To_Double()
{
	if (_00 == _04) {
		_04 = new (0x20) u8[_0C];
		memcpy(_04, _00, _0C);
		DCStoreRange(_04, _0C);
	}
	return JET_Success;
}

/*
 * --INFO--
 * Address:	8005F94C
 * Size:	000020
 */
void J3DDisplayListObj::setSingleDisplayList(void* p1, u32 p2)
{
	_0C = ALIGN_NEXT(p2, 0x20);
	_00 = (u8*)p1;
	_04 = _00;
	_08 = p2;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void J3DDisplayListObj::swapBuffer()
{
	u8* oldList1 = _00;
	_00          = _04;
	_04          = oldList1;
}

/*
 * --INFO--
 * Address:	8005F96C
 * Size:	00002C
 */
void J3DDisplayListObj::callDL() const { GXCallDisplayList(_00, _08); }

/*
 * --INFO--
 * Address:	8005F998
 * Size:	000060
 */
void J3DDisplayListObj::beginDL()
{
	swapBuffer();
	sInterruptFlag = OSDisableInterrupts();
	GDInitGDLObj(&sGDLObj, _00, _0C);
	__GDCurrentDL = &sGDLObj;
}

/*
 * --INFO--
 * Address:	8005F9F8
 * Size:	00005C
 */
u32 J3DDisplayListObj::endDL()
{
	GDPadCurr32();
	OSRestoreInterrupts(sInterruptFlag);
	_08 = sGDLObj.pDisplayListData - sGDLObj.begin;
	GDFlushCurrToMem();
	__GDCurrentDL = nullptr;
	return _08;
}

/*
 * --INFO--
 * Address:	8005FA54
 * Size:	000060
 */
void J3DDisplayListObj::beginPatch() { beginDL(); }

/*
 * --INFO--
 * Address:	8005FAB4
 * Size:	00003C
 */
u32 J3DDisplayListObj::endPatch()
{
	OSRestoreInterrupts(sInterruptFlag);
	__GDCurrentDL = nullptr;
	return _08;
}

/*
 * --INFO--
 * Address:	8005FAF0
 * Size:	000008
 */
bool J3DPacket::entry(J3DDrawBuffer*) { return true; }

/*
 * --INFO--
 * Address:	8005FAF8
 * Size:	000020
 */
void J3DPacket::addChildPacket(J3DPacket* child)
{
	if (_08 == nullptr) {
		_08 = child;
	} else {
		child->_04 = _08;
		_08        = child;
	}
}

/*
 * --INFO--
 * Address:	8005FB18
 * Size:	000004
 */
void J3DPacket::draw() { }

/*
 * --INFO--
 * Address:	8005FB1C
 * Size:	000048
 * __dt__9J3DPacketFv
 */
J3DPacket::~J3DPacket() { }

/*
 * --INFO--
 * Address:	8005FB64
 * Size:	00005C
 * __dt__13J3DDrawPacketFv
 */
J3DDrawPacket::~J3DDrawPacket() { }

/*
 * --INFO--
 * Address:	8005FBC0
 * Size:	0000A4
 * newDisplayList__13J3DDrawPacketFUl
 */
J3DErrType J3DDrawPacket::newDisplayList(u32 p1)
{
	m_displayList = new J3DDisplayListObj();
	return (m_displayList == nullptr) ? JET_OutOfMemory : m_displayList->newDisplayList(p1);
}

/*
 * --INFO--
 * Address:	8005FC64
 * Size:	00009C
 * newSingleDisplayList__13J3DDrawPacketFUl
 */
J3DErrType J3DDrawPacket::newSingleDisplayList(u32 p1)
{
	m_displayList = new J3DDisplayListObj();
	return (m_displayList == nullptr) ? JET_OutOfMemory : m_displayList->newSingleDisplayList(p1);
}

/*
 * --INFO--
 * Address:	8005FD00
 * Size:	00002C
 * draw__13J3DDrawPacketFv
 */
void J3DDrawPacket::draw() { m_displayList->callDL(); }

/*
 * --INFO--
 * Address:	8005FD2C
 * Size:	00005C
 * __ct__12J3DMatPacketFv
 */
J3DMatPacket::J3DMatPacket()
    : J3DDrawPacket()
    , _28(nullptr)
    , _30(nullptr)
    , _34(0xFFFFFFFF)
    , _38(0)
    , _3C(0)
{
}

/*
 * --INFO--
 * Address:	8005FD88
 * Size:	00006C
 * __dt__12J3DMatPacketFv
 */
J3DMatPacket::~J3DMatPacket() { }

/*
 * --INFO--
 * Address:	8005FDF4
 * Size:	000020
 */
void J3DMatPacket::addShapePacket(J3DShapePacket* shapePacket)
{
	if (_2C == nullptr) {
		_2C = shapePacket;
	} else {
		shapePacket->_04 = _2C;
		_2C              = shapePacket;
	}
}

/*
 * --INFO--
 * Address:	8005FE14
 * Size:	000064
 */
void J3DMatPacket::beginDiff() { _28->m_displayList->beginDL(); }

/*
 * --INFO--
 * Address:	8005FE78
 * Size:	000060
 */
u32 J3DMatPacket::endDiff() { return _28->m_displayList->endDL(); }

/*
 * --INFO--
 * Address:	8005FED8
 * Size:	000024
 * isSame__12J3DMatPacketCFP12J3DMatPacket
 */
bool J3DMatPacket::isSame(J3DMatPacket* other) const { return !(_34 != other->_34 || _34 >> 31); }

/*
 * --INFO--
 * Address:	8005FEFC
 * Size:	000094
 * draw__12J3DMatPacketFv
 */
void J3DMatPacket::draw()
{
	_30->load();
	m_displayList->callDL();
	J3DShapePacket* packet = _2C;
	J3DShape* shape        = packet->_28;
	shape->loadPreDrawSetting();
	for (; packet != nullptr; packet = static_cast<J3DShapePacket*>(packet->_04)) {
		J3DDisplayListObj* dl = packet->m_displayList;
		if (dl != nullptr) {
			dl->callDL();
		}
		// if (packet->m_displayList != nullptr) {
		// 	packet->m_displayList->callDL();
		// }
		packet->drawFast();
	}
	J3DShape::sOldVcdVatCmd = nullptr;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x30(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x20(r31)
	lwz      r3, 0(r4)
	lwz      r4, 8(r4)
	bl       GXCallDisplayList
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r4)
	mr       r31, r4
	bl       loadPreDrawSetting__8J3DShapeCFv
	b        lbl_8005FF6C

lbl_8005FF48:
	lwz      r4, 0x20(r31)
	cmplwi   r4, 0
	beq      lbl_8005FF60
	lwz      r3, 0(r4)
	lwz      r4, 8(r4)
	bl       GXCallDisplayList

lbl_8005FF60:
	mr       r3, r31
	bl       drawFast__14J3DShapePacketFv
	lwz      r31, 4(r31)

lbl_8005FF6C:
	cmplwi   r31, 0
	bne      lbl_8005FF48
	li       r0, 0
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005FF90
 * Size:	000058
 * __ct__14J3DShapePacketFv
 */
J3DShapePacket::J3DShapePacket()
    : J3DDrawPacket()
    , _28(nullptr)
    , _2C(nullptr)
    , _30(nullptr)
    , _34(0)
    , _38(nullptr)
{
}

/*
 * --INFO--
 * Address:	8005FFE8
 * Size:	00006C
 * __dt__14J3DShapePacketFv
 */
J3DShapePacket::~J3DShapePacket() { }

/*
 * --INFO--
 * Address:	80060054
 * Size:	000274
 */
int J3DShapePacket::calcDifferedBufferSize(u32)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, sDifferedRegister@ha
	lis      r5, sSizeOfDiffered@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r5, sSizeOfDiffered@l
	stw      r28, 0x10(r1)
	lwzu     r0, sDifferedRegister@l(r6)
	and.     r0, r30, r0
	beq      lbl_80060098
	lwz      r31, 0(r3)

lbl_80060098:
	addi     r4, r6, 4
	addi     r3, r3, 4
	lwz      r0, 4(r6)
	and.     r0, r30, r0
	beq      lbl_800600B4
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_800600B4:
	lwzu     r0, 4(r4)
	addi     r3, r3, 4
	and.     r0, r30, r0
	beq      lbl_800600CC
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_800600CC:
	lwzu     r0, 4(r4)
	addi     r3, r3, 4
	and.     r0, r30, r0
	beq      lbl_800600E4
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_800600E4:
	lwzu     r0, 4(r4)
	addi     r3, r3, 4
	and.     r0, r30, r0
	beq      lbl_800600FC
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_800600FC:
	lwz      r0, 4(r4)
	addi     r3, r3, 4
	addi     r4, r4, 4
	and.     r0, r30, r0
	beq      lbl_80060118
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_80060118:
	lwz      r0, 4(r4)
	addi     r3, r3, 4
	and.     r0, r30, r0
	beq      lbl_80060130
	lwz      r0, 0(r3)
	add      r31, r31, r0

lbl_80060130:
	rlwinm   r0, r30, 0x1c, 0x1c, 0x1f
	rlwinm.  r28, r30, 0x18, 0x1c, 0x1f
	mulli    r0, r0, 0x48
	add      r31, r31, r0
	beq      lbl_8006018C
	lwz      r3, 0x28(r29)
	lwz      r3, 4(r3)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	cmplw    r28, r3
	ble      lbl_8006016C
	mr       r3, r28

lbl_8006016C:
	rlwinm.  r0, r30, 0, 0x13, 0x13
	beq      lbl_80060184
	mulli    r0, r3, 0x3d
	add      r31, r0, r31
	addi     r31, r31, 0xa
	b        lbl_8006018C

lbl_80060184:
	mulli    r0, r3, 0x35
	add      r31, r31, r0

lbl_8006018C:
	rlwinm.  r28, r30, 0x10, 0x1c, 0x1f
	beq      lbl_80060220
	lwz      r3, 0x28(r29)
	lwz      r3, 4(r3)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 8
	ble      lbl_800601C4
	li       r3, 8
	b        lbl_800601E0

lbl_800601C4:
	lwz      r3, 0x28(r29)
	lwz      r3, 4(r3)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl

lbl_800601E0:
	clrlwi   r0, r3, 0x18
	cmplw    r28, r0
	mr       r3, r0
	ble      lbl_800601F4
	mr       r3, r28

lbl_800601F4:
	rlwinm.  r0, r30, 0, 5, 5
	beq      lbl_80060218
	addi     r0, r3, 1
	srwi     r0, r0, 1
	mulli    r3, r3, 0x37
	mulli    r0, r0, 0x37
	add      r3, r3, r0
	add      r31, r31, r3
	b        lbl_80060220

lbl_80060218:
	mulli    r0, r3, 0x37
	add      r31, r31, r0

lbl_80060220:
	rlwinm.  r28, r30, 0xc, 0x1c, 0x1f
	beq      lbl_800602A0
	lwz      r3, 0x28(r29)
	lwz      r3, 4(r3)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 8
	ble      lbl_80060258
	li       r3, 8
	b        lbl_80060274

lbl_80060258:
	lwz      r3, 0x28(r29)
	lwz      r3, 4(r3)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl

lbl_80060274:
	clrlwi   r0, r3, 0x18
	cmplw    r28, r0
	mr       r4, r0
	ble      lbl_80060288
	mr       r4, r28

lbl_80060288:
	mulli    r3, r4, 0xa
	rlwinm.  r0, r30, 0, 4, 4
	add      r31, r31, r3
	beq      lbl_800602A0
	mulli    r0, r4, 5
	add      r31, r31, r0

lbl_800602A0:
	addi     r0, r31, 0x1f
	lwz      r31, 0x1c(r1)
	rlwinm   r3, r0, 0, 0, 0x1a
	lwz      r0, 0x24(r1)
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
 * Address:	800602C8
 * Size:	000008
 */
// u8 J3DTevBlock::getTevStageNum() const { return 0x1; }

/*
 * --INFO--
 * Address:	800602D0
 * Size:	000008
 */
// u32 J3DTexGenBlock::getTexGenNum() const { return 0x0; }

/*
 * --INFO--
 * Address:	800602D8
 * Size:	0000BC
 */
J3DErrType J3DShapePacket::newDifferedDisplayList(u32 p1)
{
	_34               = p1;
	J3DErrType result = newDisplayList(calcDifferedBufferSize(p1));
	if (result != JET_Success) {
		return result;
	}
	return JET_Success;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r4, 0x34(r3)
	bl       calcDifferedBufferSize__14J3DShapePacketFUl
	mr       r31, r3
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80060320
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)

lbl_80060320:
	stw      r3, 0x20(r30)
	lwz      r30, 0x20(r30)
	cmplwi   r30, 0
	bne      lbl_80060338
	li       r0, 4
	b        lbl_8006036C

lbl_80060338:
	addi     r0, r31, 0x1f
	li       r4, 0x20
	rlwinm   r0, r0, 0, 0, 0x1a
	stw      r0, 0xc(r30)
	lwz      r3, 0xc(r30)
	bl       __nwa__FUli
	stw      r3, 0(r30)
	li       r4, 0x20
	lwz      r3, 0xc(r30)
	bl       __nwa__FUli
	stw      r3, 4(r30)
	li       r0, 0
	stw      r0, 8(r30)

lbl_8006036C:
	cmpwi    r0, 0
	li       r3, 0
	beq      lbl_8006037C
	mr       r3, r0

lbl_8006037C:
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
 * Address:	80060394
 * Size:	000114
 */
J3DErrType J3DShapePacket::newDifferedTexMtx(J3DTexDiffFlag flag)
{
	switch (flag) {
	case TexDiff_0: {
		u32 texGenNum = _28->_04->m_texGenBlock->getTexGenNum();
		_24           = new J3DShapePacket_0x24(texGenNum);
		if (_24 == nullptr) {
			return JET_OutOfMemory;
		}
		break;
	}
	case TexDiff_1:
		_24 = new J3DShapePacket_0x24(8);
		if (_24 == nullptr) {
			return JET_OutOfMemory;
		}
		break;
	default:
		return JET_InvalidArg;
	}
	return JET_Success;
}

/*
 * --INFO--
 * Address:	800604A8
 * Size:	0001B0
 */
void J3DShapePacket::draw()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x10(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	bne      lbl_80060644
	lwz      r0, 0x28(r31)
	cmplwi   r0, 0
	beq      lbl_80060644
	lwz      r3, 0x38(r31)
	addi     r3, r3, 0x88
	bl       setArray__15J3DVertexBufferCFv
	lis      r3, j3dSys@ha
	lwz      r4, 0x38(r31)
	addi     r3, r3, j3dSys@l
	stw      r4, 0x38(r3)
	stw      r31, 0x40(r3)
	lwz      r0, 8(r4)
	rlwinm   r0, r0, 0x1c, 0x1f, 0x1f
	stb      r0, sLODFlag__11J3DShapeMtx@sda21(r13)
	lwz      r3, 0x38(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80060524
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	ori      r0, r0, 4
	stw      r0, 0xc(r3)
	b        lbl_80060534

lbl_80060524:
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0xc(r3)

lbl_80060534:
	lwz      r3, 0x38(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_80060564
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm.  r0, r0, 0x18, 0x1f, 0x1f
	bne      lbl_80060564
	lwz      r0, 0xc(r3)
	ori      r0, r0, 8
	stw      r0, 0xc(r3)
	b        lbl_80060574

lbl_80060564:
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0xc(r3)

lbl_80060574:
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	addi     r0, r4, 0x30
	stw      r0, 0x60(r3)
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	lwz      r0, 4(r4)
	stw      r0, 0x54(r3)
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	lwz      r0, 0x18(r4)
	stw      r0, 0x58(r3)
	lwz      r4, 0x28(r31)
	lbz      r0, 0x34(r4)
	cmplwi   r0, 0
	bne      lbl_800605C4
	lwz      r3, 0x2c(r31)
	lwz      r0, 0x20(r3)
	stw      r0, 0x5c(r4)
	b        lbl_800605DC

lbl_800605C4:
	lwz      r3, 0x2c(r31)
	lwz      r0, 0x64(r4)
	lwz      r3, 0x28(r3)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	stw      r0, 0x5c(r4)

lbl_800605DC:
	lwz      r3, 0x38(r31)
	lwz      r3, 4(r3)
	bl       syncJ3DSysFlags__12J3DModelDataCFv
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_80060610
	lwz      r3, 0x28(r31)
	lwz      r3, 4(r3)
	lwz      r0, 0x28(r3)
	stw      r0, sTexGenBlock__17J3DDifferedTexMtx@sda21(r13)
	lwz      r0, 0x24(r31)
	stw      r0, sTexMtxObj__17J3DDifferedTexMtx@sda21(r13)
	b        lbl_80060618

lbl_80060610:
	li       r0, 0
	stw      r0, sTexGenBlock__17J3DDifferedTexMtx@sda21(r13)

lbl_80060618:
	lwz      r4, 0x20(r31)
	cmplwi   r4, 0
	beq      lbl_80060630
	lwz      r3, 0(r4)
	lwz      r4, 8(r4)
	bl       GXCallDisplayList

lbl_80060630:
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80060644:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80060658
 * Size:	000198
 */
void J3DShapePacket::drawFast()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x10(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	bne      lbl_800607DC
	lwz      r0, 0x28(r31)
	cmplwi   r0, 0
	beq      lbl_800607DC
	lwz      r3, 0x38(r31)
	addi     r3, r3, 0x88
	bl       setArray__15J3DVertexBufferCFv
	lis      r3, j3dSys@ha
	lwz      r4, 0x38(r31)
	addi     r3, r3, j3dSys@l
	stw      r4, 0x38(r3)
	stw      r31, 0x40(r3)
	lwz      r0, 8(r4)
	rlwinm   r0, r0, 0x1c, 0x1f, 0x1f
	stb      r0, sLODFlag__11J3DShapeMtx@sda21(r13)
	lwz      r3, 0x38(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_800606D4
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	ori      r0, r0, 4
	stw      r0, 0xc(r3)
	b        lbl_800606E4

lbl_800606D4:
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0xc(r3)

lbl_800606E4:
	lwz      r3, 0x38(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_80060714
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm.  r0, r0, 0x18, 0x1f, 0x1f
	bne      lbl_80060714
	lwz      r0, 0xc(r3)
	ori      r0, r0, 8
	stw      r0, 0xc(r3)
	b        lbl_80060724

lbl_80060714:
	lwz      r3, 0x28(r31)
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0xc(r3)

lbl_80060724:
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	addi     r0, r4, 0x30
	stw      r0, 0x60(r3)
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	lwz      r0, 4(r4)
	stw      r0, 0x54(r3)
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x28(r31)
	lwz      r0, 0x18(r4)
	stw      r0, 0x58(r3)
	lwz      r4, 0x28(r31)
	lbz      r0, 0x34(r4)
	cmplwi   r0, 0
	bne      lbl_80060774
	lwz      r3, 0x2c(r31)
	lwz      r0, 0x20(r3)
	stw      r0, 0x5c(r4)
	b        lbl_8006078C

lbl_80060774:
	lwz      r3, 0x2c(r31)
	lwz      r0, 0x64(r4)
	lwz      r3, 0x28(r3)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	stw      r0, 0x5c(r4)

lbl_8006078C:
	lwz      r3, 0x38(r31)
	lwz      r3, 4(r3)
	bl       syncJ3DSysFlags__12J3DModelDataCFv
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_800607C0
	lwz      r3, 0x28(r31)
	lwz      r3, 4(r3)
	lwz      r0, 0x28(r3)
	stw      r0, sTexGenBlock__17J3DDifferedTexMtx@sda21(r13)
	lwz      r0, 0x24(r31)
	stw      r0, sTexMtxObj__17J3DDifferedTexMtx@sda21(r13)
	b        lbl_800607C8

lbl_800607C0:
	li       r0, 0
	stw      r0, sTexGenBlock__17J3DDifferedTexMtx@sda21(r13)

lbl_800607C8:
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_800607DC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800607F0
 * Size:	000060
 */
bool J3DMatPacket::entry(J3DDrawBuffer*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r6, r3
	lis      r3, sortFuncTable__13J3DDrawBuffer@ha
	stw      r0, 0x24(r1)
	addi     r0, r3, sortFuncTable__13J3DDrawBuffer@l
	mr       r3, r4
	addi     r12, r1, 8
	lwz      r5, 0xc(r4)
	mr       r4, r6
	mulli    r5, r5, 0xc
	add      r7, r0, r5
	lwz      r6, 0(r7)
	lwz      r5, 4(r7)
	lwz      r0, 8(r7)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
