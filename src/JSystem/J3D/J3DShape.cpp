#include "JSystem/J3D/J3DShape.h"
#include "Dolphin/gd.h"
#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "JSystem/J3D/J3DGD.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DVertexData.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8J3DShape
    __vt__8J3DShape:
        .4byte 0
        .4byte 0
        .4byte draw__8J3DShapeCFv
        .4byte drawFast__8J3DShapeCFv
        .4byte simpleDraw__8J3DShapeCFv
        .4byte simpleDrawCache__8J3DShapeCFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sOldVcdVatCmd__8J3DShape
    sOldVcdVatCmd__8J3DShape:
        .skip 0x4
    .global sEnvelopeFlag__8J3DShape
    sEnvelopeFlag__8J3DShape:
        .skip 0x4
    .global sInterruptFlag$1728
    sInterruptFlag$1728:
        .skip 0x4
    .global init$1729
    init$1729:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805169A8
    lbl_805169A8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80060850
 * Size:	000070
 */
void J3DShape::initialize()
{
	_04     = nullptr;
	m_id    = 0xFFFF;
	_0A     = 0;
	m_flags = 0;
	_10     = 0.0f;
	_14.set(0.0f, 0.0f, 0.0f);
	_20.set(0.0f, 0.0f, 0.0f);
	_30           = nullptr;
	_38           = nullptr;
	_3C           = nullptr;
	m_vtxData     = nullptr;
	m_drawMtxData = nullptr;
	m_flagList    = nullptr;
	m_tree1       = nullptr;
	m_tree2       = nullptr;
	_60           = &j3dDefaultViewNo;
	m_mode        = 0;
	_48           = 0;
}

/*
 * --INFO--
 * Address:	800608C0
 * Size:	000078
 */
void J3DShape::calcNBTScale(const Vec& p1, float (*p2)[3][3], float (*p3)[3][3])
{
	for (u16 i = 0; i < _0A; i++) {
		_38[i]->calcNBTScale(p1, p2, p3);
	}
}

/*
 * --INFO--
 * Address:	80060938
 * Size:	000080
 */
int J3DShape::countBumpMtxNum() const
{
	int count = 0;
	for (u16 i = 0; i < _0A; i++) {
		count += _38[i]->getUseMtxNum();
	}
	return count;
}

/*
 * --INFO--
 * Address:	800609B8
 * Size:	0000EC
 */
bool J3DShape::isSameVcdVatCmd(J3DShape* other)
{
	u8* otherVatCmd = other->_2C;
	u8* thisVatCmd  = _2C;
	// TODO: is the 0xC0 a sizeof?
	for (int i = 0; i < 0xC0; i++) {
		if (otherVatCmd[i] != thisVatCmd[i]) {
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	80060AA4
 * Size:	0002FC
 */
void J3DShape::makeVtxArrayCmd()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	li       r0, 0
	stw      r31, 0x5c(r1)
	addi     r31, r1, 0x14
	stw      r30, 0x58(r1)
	addi     r30, r1, 8
	stw      r29, 0x54(r1)
	lwz      r4, 0x4c(r3)
	stb      r0, 8(r1)
	lwz      r4, 0x14(r4)
	stw      r0, 0x14(r1)
	stb      r0, 9(r1)
	stw      r0, 0x18(r1)
	stb      r0, 0xa(r1)
	stw      r0, 0x1c(r1)
	stb      r0, 0xb(r1)
	stw      r0, 0x20(r1)
	stb      r0, 0xc(r1)
	stw      r0, 0x24(r1)
	stb      r0, 0xd(r1)
	stw      r0, 0x28(r1)
	stb      r0, 0xe(r1)
	stw      r0, 0x2c(r1)
	stb      r0, 0xf(r1)
	stw      r0, 0x30(r1)
	stb      r0, 0x10(r1)
	stw      r0, 0x34(r1)
	stb      r0, 0x11(r1)
	stw      r0, 0x38(r1)
	stb      r0, 0x12(r1)
	stw      r0, 0x3c(r1)
	stb      r0, 0x13(r1)
	stw      r0, 0x40(r1)
	b        lbl_80060CC0

lbl_80060B34:
	cmpwi    r6, 0xa
	beq      lbl_80060BC4
	bge      lbl_80060B4C
	cmpwi    r6, 9
	bge      lbl_80060B60
	b        lbl_80060CBC

lbl_80060B4C:
	cmpwi    r6, 0x15
	bge      lbl_80060CBC
	cmpwi    r6, 0xd
	bge      lbl_80060C64
	b        lbl_80060C28

lbl_80060B60:
	lwz      r0, 8(r4)
	cmpwi    r0, 4
	bne      lbl_80060B80
	addi     r5, r1, 8
	addi     r0, r6, -9
	li       r6, 0xc
	stbx     r6, r5, r0
	b        lbl_80060B90

lbl_80060B80:
	addi     r5, r1, 8
	addi     r0, r6, -9
	li       r6, 6
	stbx     r6, r5, r0

lbl_80060B90:
	lwz      r9, 0x4c(r3)
	addi     r7, r1, 0x14
	lwz      r5, 0(r4)
	lwz      r8, 0x18(r9)
	lbz      r0, 0xc(r4)
	slwi     r5, r5, 2
	addi     r6, r5, -36
	stb      r0, 0x4c(r9)
	lwz      r0, 8(r4)
	lwz      r5, 0x4c(r3)
	stwx     r8, r7, r6
	stw      r0, 0x50(r5)
	b        lbl_80060CBC

lbl_80060BC4:
	lwz      r0, 8(r4)
	cmpwi    r0, 4
	bne      lbl_80060BE4
	addi     r5, r1, 8
	addi     r0, r6, -9
	li       r6, 0xc
	stbx     r6, r5, r0
	b        lbl_80060BF4

lbl_80060BE4:
	addi     r5, r1, 8
	addi     r0, r6, -9
	li       r6, 6
	stbx     r6, r5, r0

lbl_80060BF4:
	lwz      r9, 0x4c(r3)
	addi     r7, r1, 0x14
	lwz      r5, 0(r4)
	lwz      r8, 0x1c(r9)
	lbz      r0, 0xc(r4)
	slwi     r5, r5, 2
	addi     r6, r5, -36
	stb      r0, 0x54(r9)
	lwz      r0, 8(r4)
	lwz      r5, 0x4c(r3)
	stwx     r8, r7, r6
	stw      r0, 0x58(r5)
	b        lbl_80060CBC

lbl_80060C28:
	lwz      r5, 0(r4)
	addi     r8, r6, -9
	lwz      r7, 0x4c(r3)
	addi     r9, r1, 8
	addi     r0, r5, -11
	slwi     r6, r5, 2
	rlwinm   r5, r0, 2, 0x16, 0x1d
	li       r10, 4
	addi     r0, r5, 0x24
	stbx     r10, r9, r8
	lwzx     r7, r7, r0
	addi     r5, r1, 0x14
	addi     r0, r6, -36
	stwx     r7, r5, r0
	b        lbl_80060CBC

lbl_80060C64:
	lwz      r0, 8(r4)
	cmpwi    r0, 4
	bne      lbl_80060C84
	addi     r5, r1, 8
	addi     r0, r6, -9
	li       r6, 8
	stbx     r6, r5, r0
	b        lbl_80060C94

lbl_80060C84:
	addi     r5, r1, 8
	addi     r0, r6, -9
	li       r6, 4
	stbx     r6, r5, r0

lbl_80060C94:
	lwz      r6, 0(r4)
	addi     r5, r1, 0x14
	lwz      r8, 0x4c(r3)
	addi     r0, r6, -13
	slwi     r6, r6, 2
	rlwinm   r7, r0, 2, 0x16, 0x1d
	addi     r7, r7, 0x2c
	addi     r0, r6, -36
	lwzx     r6, r8, r7
	stwx     r6, r5, r0

lbl_80060CBC:
	addi     r4, r4, 0x10

lbl_80060CC0:
	lwz      r6, 0(r4)
	cmpwi    r6, 0xff
	bne      lbl_80060B34
	lwz      r6, 0x30(r3)
	li       r0, 0
	stb      r0, 0x48(r3)
	b        lbl_80060D34

lbl_80060CDC:
	cmpwi    r4, 0x19
	bne      lbl_80060D14
	lwz      r0, 4(r6)
	cmpwi    r0, 0
	beq      lbl_80060D14
	li       r4, 1
	lbz      r0, 9(r1)
	stb      r4, 0x34(r3)
	mulli    r5, r0, 3
	lwz      r4, 0x4c(r3)
	lwz      r0, 0x20(r4)
	stb      r5, 9(r1)
	stw      r0, 0x18(r1)
	b        lbl_80060D30

lbl_80060D14:
	cmpwi    r4, 0
	bne      lbl_80060D30
	lwz      r0, 4(r6)
	cmpwi    r0, 0
	beq      lbl_80060D30
	li       r0, 1
	stb      r0, 0x48(r3)

lbl_80060D30:
	addi     r6, r6, 8

lbl_80060D34:
	lwz      r4, 0(r6)
	cmpwi    r4, 0xff
	bne      lbl_80060CDC
	li       r29, 0

lbl_80060D44:
	lwz      r4, 0(r31)
	cmplwi   r4, 0
	beq      lbl_80060D60
	lbz      r5, 0(r30)
	addi     r3, r29, 9
	bl       GDSetArray
	b        lbl_80060D70

lbl_80060D60:
	lbz      r5, 0(r30)
	addi     r3, r29, 9
	li       r4, 0
	bl       GDSetArrayRaw

lbl_80060D70:
	addi     r29, r29, 1
	addi     r30, r30, 1
	cmplwi   r29, 0xc
	addi     r31, r31, 4
	blt      lbl_80060D44
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80060DA0
 * Size:	0000A0
 */
void J3DShape::makeVcdVatCmd()
{
	static int sInterruptFlag = OSDisableInterrupts();
	OSDisableScheduler();
	GDCurrentDL displayList;
	// TODO: Is 0xC0 a sizeof something?
	GDInitGDLObj(&displayList, _2C, 0xC0);
	__GDCurrentDL = &displayList;
	GDSetVtxDescv(_30);
	makeVtxArrayCmd();
	J3DGDSetVtxAttrFmtv(GX_VTXFMT0, m_vtxData->_14, m_mode);
	GDPadCurr32();
	GDFlushCurrToMem();
	__GDCurrentDL = nullptr;
	OSEnableScheduler();
	OSRestoreInterrupts(sInterruptFlag);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, init$1729@sda21(r13)
	extsb.   r0, r0
	bne      lbl_80060DD0
	bl       OSDisableInterrupts
	li       r0, 1
	stw      r3, sInterruptFlag$1728@sda21(r13)
	stb      r0, init$1729@sda21(r13)

lbl_80060DD0:
	bl       OSDisableScheduler
	lwz      r4, 0x2c(r31)
	addi     r3, r1, 8
	li       r5, 0xc0
	bl       GDInitGDLObj
	addi     r0, r1, 8
	stw      r0, __GDCurrentDL@sda21(r13)
	lwz      r3, 0x30(r31)
	bl       GDSetVtxDescv
	mr       r3, r31
	bl       makeVtxArrayCmd__8J3DShapeFv
	lwz      r4, 0x4c(r31)
	li       r3, 0
	lbz      r5, 0x34(r31)
	lwz      r4, 0x14(r4)
	bl       J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb
	bl       GDPadCurr32
	bl       GDFlushCurrToMem
	li       r0, 0
	stw      r0, __GDCurrentDL@sda21(r13)
	bl       OSEnableScheduler
	lwz      r3, sInterruptFlag$1728@sda21(r13)
	bl       OSRestoreInterrupts
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80060E40
 * Size:	0000A0
 */
void J3DShape::loadPreDrawSetting() const
{
	if (sOldVcdVatCmd != _2C) {
		// TODO: Is 0xC0 a sizeof?
		GXCallDisplayList(_2C, 0xC0);
		sOldVcdVatCmd = _2C;
	}
	GXWGFifo.u8  = 0x08;
	GXWGFifo.u8  = 0x30;
	GXWGFifo.u32 = _40;
	GXWGFifo.u8  = 0x08;
	GXWGFifo.u8  = 0x40;
	GXWGFifo.u32 = _44;
	GXWGFifo.u8  = 0x10;
	GXWGFifo.u16 = 0x0001;
	GXWGFifo.u16 = 0x1018;
	GXWGFifo.u32 = _40;
	GXWGFifo.u32 = _44;

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2c(r3)
	lwz      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	cmplw    r0, r3
	beq      lbl_80060E74
	li       r4, 0xc0
	bl       GXCallDisplayList
	lwz      r0, 0x2c(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)

lbl_80060E74:
	li       r9, 8
	lis      r8, 0xCC008000@ha
	stb      r9, 0xCC008000@l(r8)
	li       r0, 0x30
	lwz      r3, 0x40(r31)
	li       r7, 0x40
	stb      r0, -0x8000(r8)
	li       r6, 0x10
	lwz      r10, 0x44(r31)
	li       r5, 1
	stw      r3, -0x8000(r8)
	li       r4, 0x1018
	lwz      r3, 0x40(r31)
	stb      r9, -0x8000(r8)
	lwz      r0, 0x44(r31)
	stb      r7, -0x8000(r8)
	stw      r10, -0x8000(r8)
	stb      r6, -0x8000(r8)
	sth      r5, -0x8000(r8)
	sth      r4, -0x8000(r8)
	stw      r3, -0x8000(r8)
	stw      r0, -0x8000(r8)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80060EE0
 * Size:	000278
 */
void J3DShape::drawFast() const
{
	// if (sOldVcdVatCmd != _2C) {
	// 	GXCallDisplayList(_2C, 0xC0);
	// 	sOldVcdVatCmd = _2C;
	// }
	// if (sEnvelopeFlag != 0 && _48 == 0) {
	// 	GXWGFifo.u8  = 0x08;
	// 	GXWGFifo.u8  = 0x30;
	// 	GXWGFifo.u32 = _40;
	// 	GXWGFifo.u8  = 0x08;
	// 	GXWGFifo.u8  = 0x40;
	// 	GXWGFifo.u32 = _44;
	// 	GXWGFifo.u8  = 0x10;
	// 	GXWGFifo.u16 = 0x0001;
	// 	GXWGFifo.u16 = 0x1018;
	// 	GXWGFifo.u32 = _40;
	// 	GXWGFifo.u32 = _44;
	// }
	// J3DShapeMtx::sCurrentPipeline = m_flags >> 2 & 7;
	// GXWGFifo.u8                   = 0x08;
	// GXWGFifo.u8                   = 0xA0;
	// GXWGFifo.u32                  = j3dSys._10C & 0x7FFFFFFF;
	// if (m_mode == 0) {
	// 	GXWGFifo.u8  = 0x08;
	// 	GXWGFifo.u8  = 0xA1;
	// 	GXWGFifo.u32 = j3dSys._110 & 0x7FFFFFFF;
	// }
	// GXWGFifo.u8  = 0x08;
	// GXWGFifo.u8  = 0xA2;
	// GXWGFifo.u32 = j3dSys._114 & 0x7FFFFFFF;
	// j3dSys._104  = m_tree1[*_60];
	// GXSetArray(0x15, j3dSys._104, 0x30);
	// j3dSys._108 = m_tree2[*_60];
	// GXSetArray(0x16, j3dSys._108, 0x30);
	// J3DShapeMtx::sCurrentScaleFlag = m_flagList;
	// J3DShapeMtx::sNBTFlag          = m_mode;
	// sEnvelopeFlag                  = _48;
	// J3DShapeMtx::sTexMtxLoadType   = m_flags & 0xF000;
	// if ((m_flags & 0x200) == 0) {
	// 	if (J3DShapeMtx::sLODFlag != 0) {
	// 		J3DShapeMtx::resetMtxLoadCache();
	// 	}
	// 	for (u32 i = 0; i < _0A; i++) {
	// 		if (_38[i] != nullptr) {
	// 			_38[i]->load();
	// 		}
	// 		if (_3C[i] != nullptr) {
	// 			_3C[i]->draw();
	// 		}
	// 	}
	// } else {
	// 	J3DFifoLoadPosMtxImm(j3dSys.m_shapePacket->_30, 0);
	// 	J3DFifoLoadNrmMtxImm(j3dSys.m_shapePacket->_30, 0);
	// 	for (u32 i = 0; i < _0A; i++) {
	// 		if (_3C[i] != nullptr) {
	// 			_3C[i]->draw();
	// 		}
	// 	}
	// }

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2c(r3)
	lwz      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	cmplw    r0, r3
	beq      lbl_80060F14
	li       r4, 0xc0
	bl       GXCallDisplayList
	lwz      r0, 0x2c(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)

lbl_80060F14:
	lbz      r0, sEnvelopeFlag__8J3DShape@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80060F84
	lbz      r0, 0x48(r31)
	cmplwi   r0, 0
	bne      lbl_80060F84
	li       r9, 8
	lis      r8, 0xCC008000@ha
	stb      r9, 0xCC008000@l(r8)
	li       r0, 0x30
	lwz      r3, 0x40(r31)
	li       r7, 0x40
	stb      r0, -0x8000(r8)
	li       r6, 0x10
	lwz      r10, 0x44(r31)
	li       r5, 1
	stw      r3, -0x8000(r8)
	li       r4, 0x1018
	lwz      r3, 0x40(r31)
	stb      r9, -0x8000(r8)
	lwz      r0, 0x44(r31)
	stb      r7, -0x8000(r8)
	stw      r10, -0x8000(r8)
	stb      r6, -0x8000(r8)
	sth      r5, -0x8000(r8)
	sth      r4, -0x8000(r8)
	stw      r3, -0x8000(r8)
	stw      r0, -0x8000(r8)

lbl_80060F84:
	lwz      r4, 0xc(r31)
	lis      r3, j3dSys@ha
	lbz      r0, 0x34(r31)
	li       r6, 8
	rlwinm   r4, r4, 0x1e, 0x1d, 0x1f
	lis      r5, 0xCC008000@ha
	stw      r4, sCurrentPipeline__11J3DShapeMtx@sda21(r13)
	li       r4, 0xa0
	addi     r3, r3, j3dSys@l
	cmplwi   r0, 0
	stb      r6, 0xCC008000@l(r5)
	stb      r4, -0x8000(r5)
	lwz      r0, 0x10c(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r5)
	bne      lbl_80060FDC
	stb      r6, -0x8000(r5)
	li       r0, 0xa1
	stb      r0, -0x8000(r5)
	lwz      r0, 0x110(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r5)

lbl_80060FDC:
	li       r0, 8
	lis      r8, 0xCC008000@ha
	stb      r0, 0xCC008000@l(r8)
	li       r0, 0xa2
	lis      r3, j3dSys@ha
	lwz      r4, 0x60(r31)
	stb      r0, -0x8000(r8)
	addi     r7, r3, j3dSys@l
	lwz      r6, 0x58(r31)
	li       r3, 0x15
	lwz      r0, 0x114(r7)
	li       r5, 0x30
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r8)
	lwz      r0, 0(r4)
	slwi     r0, r0, 2
	lwzx     r4, r6, r0
	stw      r4, 0x104(r7)
	bl       GXSetArray
	lwz      r4, 0x60(r31)
	lis      r3, j3dSys@ha
	addi     r6, r3, j3dSys@l
	lwz      r7, 0x5c(r31)
	lwz      r0, 0(r4)
	li       r3, 0x16
	li       r5, 0x24
	slwi     r0, r0, 2
	lwzx     r4, r7, r0
	stw      r4, 0x108(r6)
	bl       GXSetArray
	lwz      r3, 0xc(r31)
	lwz      r6, 0x54(r31)
	lbz      r5, 0x34(r31)
	rlwinm.  r0, r3, 0, 0x16, 0x16
	lbz      r4, 0x48(r31)
	rlwinm   r3, r3, 0, 0x10, 0x13
	stw      r6, sCurrentScaleFlag__11J3DShapeMtx@sda21(r13)
	stb      r5, sNBTFlag__11J3DShapeMtx@sda21(r13)
	stb      r4, sEnvelopeFlag__8J3DShape@sda21(r13)
	stw      r3, sTexMtxLoadType__11J3DShapeMtx@sda21(r13)
	bne      lbl_800610E8
	lbz      r0, sLODFlag__11J3DShapeMtx@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80061090
	bl       resetMtxLoadCache__11J3DShapeMtxFv

lbl_80061090:
	lhz      r28, 0xa(r31)
	li       r27, 0
	lwz      r29, 0x38(r31)
	lwz      r30, 0x3c(r31)
	b        lbl_800610D8

lbl_800610A4:
	rlwinm   r31, r27, 2, 0xe, 0x1d
	lwzx     r3, r29, r31
	cmplwi   r3, 0
	beq      lbl_800610C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_800610C4:
	lwzx     r3, r30, r31
	cmplwi   r3, 0
	beq      lbl_800610D4
	bl       draw__12J3DShapeDrawCFv

lbl_800610D4:
	addi     r27, r27, 1

lbl_800610D8:
	clrlwi   r0, r27, 0x10
	cmplw    r0, r28
	blt      lbl_800610A4
	b        lbl_80061144

lbl_800610E8:
	lis      r3, j3dSys@ha
	li       r4, 0
	addi     r30, r3, j3dSys@l
	lwz      r3, 0x40(r30)
	lwz      r3, 0x30(r3)
	bl       J3DFifoLoadPosMtxImm__FPA4_fUl
	lwz      r3, 0x40(r30)
	li       r4, 0
	lwz      r3, 0x30(r3)
	bl       J3DFifoLoadNrmMtxImm__FPA4_fUl
	lhz      r27, 0xa(r31)
	li       r28, 0
	lwz      r31, 0x3c(r31)
	b        lbl_80061138

lbl_80061120:
	rlwinm   r0, r28, 2, 0xe, 0x1d
	lwzx     r3, r31, r0
	cmplwi   r3, 0
	beq      lbl_80061134
	bl       draw__12J3DShapeDrawCFv

lbl_80061134:
	addi     r28, r28, 1

lbl_80061138:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r27
	blt      lbl_80061120

lbl_80061144:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80061158
 * Size:	0000B8
 * draw__8J3DShapeCFv
 */
void J3DShape::draw() const
{
	sOldVcdVatCmd = nullptr;
	if (_2C != sOldVcdVatCmd) {
		// TODO: Is 0xC0 a sizeof?
		GXCallDisplayList(_2C, 0xC0);
		sOldVcdVatCmd = _2C;
	}
	GXWGFifo.u8  = 0x08;
	GXWGFifo.u8  = 0x30;
	GXWGFifo.u32 = _40;
	GXWGFifo.u8  = 0x08;
	GXWGFifo.u8  = 0x40;
	GXWGFifo.u32 = _44;
	GXWGFifo.u8  = 0x10;
	GXWGFifo.u16 = 0x0001;
	GXWGFifo.u16 = 0x1018;
	GXWGFifo.u32 = _40;
	GXWGFifo.u32 = _44;
	drawFast();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2c(r3)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	cmplw    r0, r3
	beq      lbl_80061190
	li       r4, 0xc0
	bl       GXCallDisplayList
	lwz      r0, 0x2c(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)

lbl_80061190:
	li       r10, 8
	lis      r9, 0xCC008000@ha
	stb      r10, 0xCC008000@l(r9)
	li       r0, 0x30
	lwz      r3, 0x40(r31)
	li       r8, 0x40
	stb      r0, -0x8000(r9)
	li       r7, 0x10
	lwz      r11, 0x44(r31)
	li       r6, 1
	stw      r3, -0x8000(r9)
	li       r5, 0x1018
	lwz      r4, 0x40(r31)
	mr       r3, r31
	stb      r10, -0x8000(r9)
	lwz      r0, 0x44(r31)
	stb      r8, -0x8000(r9)
	stw      r11, -0x8000(r9)
	stb      r7, -0x8000(r9)
	sth      r6, -0x8000(r9)
	sth      r5, -0x8000(r9)
	stw      r4, -0x8000(r9)
	stw      r0, -0x8000(r9)
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
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
 * Address:	80061210
 * Size:	000160
 */
void J3DShape::simpleDraw() const
{
	sOldVcdVatCmd = nullptr;
	if (sOldVcdVatCmd != _2C) {
		GXCallDisplayList(_2C, 0xC0);
		sOldVcdVatCmd = _2C;
	}
	GXWGFifo.u8                   = 0x08;
	GXWGFifo.u8                   = 0x30;
	GXWGFifo.u32                  = _40;
	GXWGFifo.u8                   = 0x08;
	GXWGFifo.u8                   = 0x40;
	GXWGFifo.u32                  = _44;
	J3DShapeMtx::sCurrentPipeline = m_flags >> 2 & 7;
	GXWGFifo.u8                   = 0x10;
	GXWGFifo.u16                  = 0x0001;
	GXWGFifo.u16                  = 0x1018;
	GXWGFifo.u32                  = _40;
	GXWGFifo.u32                  = _44;
	GXWGFifo.u8                   = 0x08;
	GXWGFifo.u8                   = 0xA0;
	GXWGFifo.u32                  = j3dSys._10C & 0x7FFFFFFF;
	if (m_mode == 0) {
		GXWGFifo.u8  = 0x08;
		GXWGFifo.u8  = 0xA1;
		GXWGFifo.u32 = j3dSys._110 & 0x7FFFFFFF;
	}
	GXWGFifo.u8  = 0x08;
	GXWGFifo.u8  = 0xA2;
	GXWGFifo.u32 = j3dSys._114 & 0x7FFFFFFF;
	for (u32 i = 0; i < _0A; i++) {
		if (_3C[i] != nullptr) {
			_3C[i]->draw();
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x2c(r3)
	stw      r30, 0x18(r1)
	cmplw    r0, r3
	stw      r29, 0x14(r1)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	beq      lbl_80061250
	li       r4, 0xc0
	bl       GXCallDisplayList
	lwz      r0, 0x2c(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)

lbl_80061250:
	li       r12, 8
	lis      r11, 0xCC008000@ha
	stb      r12, 0xCC008000@l(r11)
	li       r0, 0x30
	lis      r3, j3dSys@ha
	lwz      r5, 0x40(r31)
	stb      r0, -0x8000(r11)
	li       r10, 0x40
	lbz      r0, 0x34(r31)
	li       r9, 0x10
	stw      r5, -0x8000(r11)
	li       r8, 1
	cmplwi   r0, 0
	lwz      r4, 0xc(r31)
	stb      r12, -0x8000(r11)
	li       r7, 0x1018
	rlwinm   r5, r4, 0x1e, 0x1d, 0x1f
	lwz      r30, 0x44(r31)
	stb      r10, -0x8000(r11)
	li       r4, 0xa0
	lwz      r6, 0x40(r31)
	addi     r3, r3, j3dSys@l
	stw      r30, -0x8000(r11)
	lwz      r0, 0x44(r31)
	stb      r9, -0x8000(r11)
	sth      r8, -0x8000(r11)
	sth      r7, -0x8000(r11)
	stw      r6, -0x8000(r11)
	stw      r0, -0x8000(r11)
	stw      r5, sCurrentPipeline__11J3DShapeMtx@sda21(r13)
	stb      r12, -0x8000(r11)
	stb      r4, -0x8000(r11)
	lwz      r0, 0x10c(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r11)
	bne      lbl_800612F8
	stb      r12, -0x8000(r11)
	li       r0, 0xa1
	stb      r0, -0x8000(r11)
	lwz      r0, 0x110(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r11)

lbl_800612F8:
	li       r0, 8
	lis      r4, 0xCC008000@ha
	stb      r0, 0xCC008000@l(r4)
	li       r0, 0xa2
	lis      r3, j3dSys@ha
	lhz      r30, 0xa(r31)
	stb      r0, -0x8000(r4)
	addi     r3, r3, j3dSys@l
	lwz      r31, 0x3c(r31)
	li       r29, 0
	lwz      r0, 0x114(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r4)
	b        lbl_80061348

lbl_80061330:
	rlwinm   r0, r29, 2, 0xe, 0x1d
	lwzx     r3, r31, r0
	cmplwi   r3, 0
	beq      lbl_80061344
	bl       draw__12J3DShapeDrawCFv

lbl_80061344:
	addi     r29, r29, 1

lbl_80061348:
	clrlwi   r0, r29, 0x10
	cmplw    r0, r30
	blt      lbl_80061330
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
 * Address:	80061370
 * Size:	000170
 */
void J3DShape::simpleDrawCache() const
{
	if (sOldVcdVatCmd != _2C) {
		GXCallDisplayList(_2C, 0xC0);
		sOldVcdVatCmd = _2C;
	}
	if (sEnvelopeFlag && _48 == 0) {
		HW_REG(GXFIFO_ADDR, u8)  = 0x08;
		HW_REG(GXFIFO_ADDR, u8)  = 0x30;
		HW_REG(GXFIFO_ADDR, u32) = _40;
		HW_REG(GXFIFO_ADDR, u8)  = 0x08;
		HW_REG(GXFIFO_ADDR, u8)  = 0x40;
		HW_REG(GXFIFO_ADDR, u32) = _44;
		HW_REG(GXFIFO_ADDR, u8)  = 0x10;
		HW_REG(GXFIFO_ADDR, u16) = 1;
		HW_REG(GXFIFO_ADDR, u16) = 0x1018;
		HW_REG(GXFIFO_ADDR, u32) = _40;
		HW_REG(GXFIFO_ADDR, u32) = _44;
	}
	HW_REG(GXFIFO_ADDR, u8)  = 0x08;
	HW_REG(GXFIFO_ADDR, u8)  = 0xA0;
	HW_REG(GXFIFO_ADDR, u32) = j3dSys._10C & 0x7FFFFFFF;
	if (m_mode == 0) {
		HW_REG(GXFIFO_ADDR, u8)  = 0x08;
		HW_REG(GXFIFO_ADDR, u8)  = 0xA1;
		HW_REG(GXFIFO_ADDR, u32) = j3dSys._110 & 0x7FFFFFFF;
	}
	HW_REG(GXFIFO_ADDR, u8)  = 0x08;
	HW_REG(GXFIFO_ADDR, u8)  = 0xA2;
	HW_REG(GXFIFO_ADDR, u32) = j3dSys._114 & 0x7FFFFFFF;
	for (u16 i = 0; i < _0A; ++i) {
		if (_3C[i]) {
			_3C[i]->draw();
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x2c(r3)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	cmplw    r0, r3
	beq      lbl_800613AC
	li       r4, 0xc0
	bl       GXCallDisplayList
	lwz      r0, 0x2c(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)

lbl_800613AC:
	lbz      r0, sEnvelopeFlag__8J3DShape@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8006141C
	lbz      r0, 0x48(r31)
	cmplwi   r0, 0
	bne      lbl_8006141C
	li       r9, 8
	lis      r8, 0xCC008000@ha
	stb      r9, 0xCC008000@l(r8)
	li       r0, 0x30
	lwz      r3, 0x40(r31)
	li       r7, 0x40
	stb      r0, -0x8000(r8)
	li       r6, 0x10
	lwz      r10, 0x44(r31)
	li       r5, 1
	stw      r3, -0x8000(r8)
	li       r4, 0x1018
	lwz      r3, 0x40(r31)
	stb      r9, -0x8000(r8)
	lwz      r0, 0x44(r31)
	stb      r7, -0x8000(r8)
	stw      r10, -0x8000(r8)
	stb      r6, -0x8000(r8)
	sth      r5, -0x8000(r8)
	sth      r4, -0x8000(r8)
	stw      r3, -0x8000(r8)
	stw      r0, -0x8000(r8)

lbl_8006141C:
	li       r6, 8
	lis      r5, 0xCC008000@ha
	stb      r6, 0xCC008000@l(r5)
	li       r4, 0xa0
	lis      r3, j3dSys@ha
	lbz      r0, 0x34(r31)
	stb      r4, -0x8000(r5)
	addi     r3, r3, j3dSys@l
	cmplwi   r0, 0
	lwz      r0, 0x10c(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r5)
	bne      lbl_80061468
	stb      r6, -0x8000(r5)
	li       r0, 0xa1
	stb      r0, -0x8000(r5)
	lwz      r0, 0x110(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r5)

lbl_80061468:
	li       r0, 8
	lis      r4, 0xCC008000@ha
	stb      r0, 0xCC008000@l(r4)
	li       r0, 0xa2
	lis      r3, j3dSys@ha
	lhz      r30, 0xa(r31)
	stb      r0, -0x8000(r4)
	addi     r3, r3, j3dSys@l
	lwz      r31, 0x3c(r31)
	li       r29, 0
	lwz      r0, 0x114(r3)
	clrlwi   r0, r0, 1
	stw      r0, -0x8000(r4)
	b        lbl_800614B8

lbl_800614A0:
	rlwinm   r0, r29, 2, 0xe, 0x1d
	lwzx     r3, r31, r0
	cmplwi   r3, 0
	beq      lbl_800614B4
	bl       draw__12J3DShapeDrawCFv

lbl_800614B4:
	addi     r29, r29, 1

lbl_800614B8:
	clrlwi   r0, r29, 0x10
	cmplw    r0, r30
	blt      lbl_800614A0
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
