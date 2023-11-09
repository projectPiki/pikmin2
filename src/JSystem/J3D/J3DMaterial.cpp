#include "JSystem/J3D/J3DMaterial.h"
#include "Dolphin/gd.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DColorBlock.h"
#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DGD.h"
#include "JSystem/J3D/J3DInd.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DPE.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTypes.h"

/*
 * --INFO--
 * Address:	800614E0
 * Size:	000200
 */
J3DColorBlock* J3DMaterial::createColorBlock(u32 type)
{
	J3DColorBlock* result = nullptr;
	switch (type) {
	case 0:
		result = new J3DColorBlockLightOff;
		break;
	case 0x40000000:
		result = new J3DColorBlockLightOn;
		break;
	case 0x80000000:
		result = new J3DColorBlockAmbientOn;
		break;
	}
	return result;
}

/*
 * --INFO--
 * Address:	8006173C
 * Size:	0000B4
 * __ct__12J3DColorChanFv
 */
J3DColorChan::J3DColorChan()
{
	/*
	addi     r8, r2, j3dDefaultColorChanInfo@sda21
	lis      r4, 0x0000FFFF@ha
	lbz      r10, 5(r8)
	addi     r4, r4, 0x0000FFFF@l
	lbz      r0, 2(r8)
	lbz      r5, j3dDefaultColorChanInfo@sda21(r2)
	subf     r7, r4, r10
	subf     r6, r10, r4
	lbz      r4, 1(r8)
	nor      r6, r7, r6
	rlwinm   r7, r5, 1, 0xf, 0x1e
	srawi    r5, r6, 0x1f
	lbz      r9, 4(r8)
	andc     r5, r10, r5
	or       r4, r7, r4
	rlwinm   r6, r4, 0, 0x1a, 0x18
	rlwinm   r11, r0, 7, 0x12, 0x12
	rlwinm   r5, r5, 6, 0x12, 0x19
	cntlzw   r4, r9
	or       r12, r6, r5
	lbz      r6, 3(r8)
	rlwinm   r5, r4, 0x1b, 0x1f, 0x1f
	neg      r4, r9
	rlwimi   r12, r0, 2, 0x1d, 0x1d
	rlwinm   r10, r0, 7, 0x11, 0x11
	rlwimi   r12, r0, 2, 0x1c, 0x1c
	neg      r5, r5
	andc     r5, r6, r5
	subfic   r6, r9, 2
	rlwimi   r12, r0, 2, 0x1b, 0x1b
	or       r4, r4, r9
	rlwimi   r12, r0, 2, 0x1a, 0x1a
	slwi     r7, r5, 7
	rlwimi   r12, r0, 7, 0x14, 0x14
	addi     r5, r9, -2
	rlwimi   r12, r0, 7, 0x13, 0x13
	rlwimi   r11, r12, 0, 0x13, 0x1f
	or       r0, r6, r5
	rlwimi   r10, r11, 0, 0x12, 0x1f
	rlwinm   r5, r10, 0, 0x19, 0x16
	or       r5, r5, r7
	rlwimi   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r5, r4, 0xb, 0x15, 0x15
	sth      r5, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006183C
 * Size:	000164
 */
J3DTexGenBlock* J3DMaterial::createTexGenBlock(u32 flags)
{
	J3DTexGenBlock* result = nullptr;
	switch (flags) {
	case J3DMLF_28:
		return new J3DTexGenBlock4();
	case 0:
	default:
		return new J3DTexGenBlockBasic();
	}
}

/*
 * --INFO--
 * Address:	80061A6C
 * Size:	000374
 */
J3DTevBlock* J3DMaterial::createTevBlock(int stageCount)
{
	J3DTevBlock* block = nullptr;
	if (stageCount <= 1) {
		block = new J3DTevBlock1();
	} else if (stageCount == 2) {
		block = new J3DTevBlock2();
	} else if (stageCount <= 4) {
		block = new J3DTevBlock4();
	} else if (stageCount <= 16) {
		block = new J3DTevBlock16();
	}
	return block;
}

/*
 * --INFO--
 * Address:	80061DE0
 * Size:	00000C
 */
J3DTevSwapModeTable::J3DTevSwapModeTable() { _00 = j3dDefaultTevSwapTableID; }

/*
 * --INFO--
 * Address:	80061DF0
 * Size:	0000E4
 * __ct__14J3DIndTevStageFv
 */
J3DIndTevStage::J3DIndTevStage()
{
	_1E = j3dDefaultIndTevStageInfo[0]._00;
	_1C = j3dDefaultIndTevStageInfo[1]._00;
	_19 = j3dDefaultIndTevStageInfo[2]._00;
	_13 = j3dDefaultIndTevStageInfo[3]._00;
	_10 = j3dDefaultIndTevStageInfo[4]._00;
	_0C = j3dDefaultIndTevStageInfo[5]._00;
	_0D = j3dDefaultIndTevStageInfo[6]._00;
	_17 = j3dDefaultIndTevStageInfo[7]._00;
	/*
	li       r0, 0
	lis      r4, j3dDefaultIndTevStageInfo@ha
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbzu     r0, j3dDefaultIndTevStageInfo@l(r4)
	rlwinm   r5, r5, 0, 0, 0x1d
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 1(r4)
	rlwinm   r5, r5, 0, 0x1e, 0x1b
	slwi     r0, r0, 2
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 2(r4)
	rlwinm   r5, r5, 0, 0x1c, 0x18
	slwi     r0, r0, 4
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 3(r4)
	rlwinm   r5, r5, 0, 0x17, 0x12
	slwi     r0, r0, 9
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 4(r4)
	rlwinm   r5, r5, 0, 0x13, 0xf
	slwi     r0, r0, 0xd
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 5(r4)
	rlwinm   r5, r5, 0, 0x10, 0xc
	slwi     r0, r0, 0x10
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 6(r4)
	rlwinm   r5, r5, 0, 0xc, 0xa
	slwi     r0, r0, 0x14
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 7(r4)
	rlwinm   r5, r5, 0, 0xd, 0xb
	slwi     r0, r0, 0x13
	or       r0, r5, r0
	stw      r0, 0(r3)
	lbz      r0, 8(r4)
	lwz      r5, 0(r3)
	slwi     r0, r0, 7
	rlwinm   r4, r5, 0, 0x19, 0x16
	or       r0, r4, r0
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80061ED4
 * Size:	000068
 * __ct__11J3DTevStageFv
 */
J3DTevStage::J3DTevStage()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, j3dDefaultTevStageInfo@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, j3dDefaultTevStageInfo@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setTevStageInfo__11J3DTevStageFRC15J3DTevStageInfo
	addi     r3, r2, j3dDefaultTevSwapMode@sda21
	lbz      r4, 7(r31)
	lbz      r0, 1(r3)
	mr       r3, r31
	rlwinm   r4, r4, 0, 0x1e, 0x1b
	slwi     r0, r0, 2
	or       r0, r4, r0
	stb      r0, 7(r31)
	lbz      r4, 7(r31)
	lbz      r0, j3dDefaultTevSwapMode@sda21(r2)
	rlwinm   r4, r4, 0, 0, 0x1d
	or       r0, r4, r0
	stb      r0, 7(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80061F3C
 * Size:	0001D8
 */
void J3DTevStage::setTevStageInfo(const J3DTevStageInfo&)
{
	/*
	stwu     r1, -0x10(r1)
	lbz      r6, 5(r4)
	stw      r31, 0xc(r1)
	rlwinm   r0, r6, 2, 0x16, 0x1d
	cmplwi   r6, 1
	lbz      r5, 1(r3)
	lbz      r9, 9(r4)
	rlwinm   r5, r5, 0, 0x1e, 0x1c
	lbz      r8, 8(r4)
	or       r0, r5, r0
	lbz      r7, 6(r4)
	stb      r0, 1(r3)
	lbz      r0, 7(r4)
	bgt      lbl_80061F9C
	lbz      r5, 1(r3)
	rlwinm   r0, r0, 4, 0x14, 0x1b
	rlwinm   r5, r5, 0, 0x1c, 0x19
	or       r0, r5, r0
	stb      r0, 1(r3)
	lbz      r0, 1(r3)
	rlwinm   r0, r0, 0, 0, 0x1d
	or       r0, r0, r7
	stb      r0, 1(r3)
	b        lbl_80061FB8

lbl_80061F9C:
	lbz      r0, 1(r3)
	rlwimi   r0, r6, 3, 0x1a, 0x1b
	stb      r0, 1(r3)
	lbz      r0, 1(r3)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	stb      r0, 1(r3)

lbl_80061FB8:
	lbz      r0, 1(r3)
	rlwinm   r5, r8, 3, 0x15, 0x1c
	rlwinm   r10, r9, 6, 0x12, 0x19
	lbz      r12, 0xc(r4)
	rlwinm   r6, r0, 0, 0x1d, 0x1b
	lbz      r0, 0xe(r4)
	or       r5, r6, r5
	lbz      r6, 1(r4)
	stb      r5, 1(r3)
	rlwinm   r9, r12, 7, 0x11, 0x18
	lbz      r5, 3(r4)
	slwi     r8, r6, 4
	lbz      r11, 1(r3)
	cmplwi   r0, 1
	lbz      r7, 2(r4)
	slwi     r6, r5, 4
	rlwimi   r10, r11, 0, 0x1a, 0x1f
	lbz      r5, 4(r4)
	stb      r10, 1(r3)
	or       r7, r8, r7
	or       r6, r6, r5
	lbz      r5, 0xa(r4)
	stb      r7, 2(r3)
	rlwinm   r10, r12, 0x1f, 0x19, 0x1f
	lbz      r7, 0xb(r4)
	slwi     r5, r5, 5
	stb      r6, 3(r3)
	rlwinm   r11, r7, 2, 0x16, 0x1d
	lbz      r8, 0xd(r4)
	lbz      r6, 6(r3)
	rlwinm   r7, r0, 2, 0x16, 0x1d
	lbz      r31, 0x10(r4)
	rlwinm   r8, r8, 4, 0x14, 0x1b
	rlwimi   r5, r6, 0, 0x1b, 0x1f
	lbz      r6, 0x12(r4)
	stb      r5, 6(r3)
	lbz      r5, 0x11(r4)
	lbz      r12, 6(r3)
	rlwinm   r12, r12, 0, 0x1e, 0x1a
	or       r11, r12, r11
	lbz      r12, 0xf(r4)
	stb      r11, 6(r3)
	lbz      r4, 6(r3)
	rlwinm   r4, r4, 0, 0, 0x1d
	or       r4, r4, r10
	stb      r4, 6(r3)
	lbz      r4, 7(r3)
	rlwimi   r9, r4, 0, 0x19, 0x1f
	stb      r9, 7(r3)
	lbz      r4, 7(r3)
	rlwinm   r4, r4, 0, 0x1c, 0x18
	or       r4, r4, r8
	stb      r4, 7(r3)
	lbz      r4, 5(r3)
	rlwinm   r4, r4, 0, 0x1e, 0x1c
	or       r4, r4, r7
	stb      r4, 5(r3)
	bgt      lbl_800620C8
	lbz      r4, 5(r3)
	rlwinm   r0, r31, 4, 0x14, 0x1b
	rlwinm   r4, r4, 0, 0, 0x1d
	or       r4, r4, r12
	stb      r4, 5(r3)
	lbz      r4, 5(r3)
	rlwinm   r4, r4, 0, 0x1c, 0x19
	or       r0, r4, r0
	stb      r0, 5(r3)
	b        lbl_800620E4

lbl_800620C8:
	lbz      r4, 5(r3)
	rlwimi   r4, r0, 3, 0x1a, 0x1b
	stb      r4, 5(r3)
	lbz      r0, 5(r3)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	stb      r0, 5(r3)

lbl_800620E4:
	lbz      r7, 5(r3)
	rlwinm   r4, r5, 3, 0x15, 0x1c
	rlwinm   r0, r6, 6, 0x12, 0x19
	rlwinm   r5, r7, 0, 0x1d, 0x1b
	or       r4, r5, r4
	stb      r4, 5(r3)
	lbz      r4, 5(r3)
	rlwimi   r0, r4, 0, 0x1a, 0x1f
	stb      r0, 5(r3)
	lwz      r31, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006217C
 * Size:	0000E8
 */
J3DIndBlock* J3DMaterial::createIndBlock(int stageCount)
{
	if (stageCount != 0) {
		return new J3DIndBlockFull();
	}
	return new J3DIndBlockNull();
}

/*
 * --INFO--
 * Address:	800622A0
 * Size:	000018
 * __ct__19J3DIndTexCoordScaleFv
 */
J3DIndTexCoordScale::J3DIndTexCoordScale()
{
	/*
	lbz      r0, j3dDefaultIndTexCoordScaleInfo@sda21(r2)
	addi     r4, r2, j3dDefaultIndTexCoordScaleInfo@sda21
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062394
 * Size:	00027C
 */
J3DPEBlock* J3DMaterial::createPEBlock(u32 a1, u32 a2)
{
	J3DPEBlock* rv = nullptr;
	if (a1 == 0) {
		if (a2 & 1) {
			return new J3DPEBlockOpa();
		} else if (a2 & 2) {
			return new J3DPEBlockTexEdge();
		} else if (a2 & 4) {
			return new J3DPEBlockXlu();
		}
	}

	if (a1 == 0x10000000) {
		rv = new J3DPEBlockFull();
	} else if (a1 == 0x20000000) {
		rv = new J3DPEBlockFogOff();
	}
	return rv;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r3, 0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bne      lbl_8006244C
	clrlwi.  r0, r4, 0x1f
	beq      lbl_800623E4
	li       r3, 4
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800625FC
	lis      r5, __vt__10J3DPEBlock@ha
	lis      r4, __vt__13J3DPEBlockOpa@ha
	addi     r0, r5, __vt__10J3DPEBlock@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__13J3DPEBlockOpa@l
	stw      r0, 0(r3)
	b        lbl_800625FC

lbl_800623E4:
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	beq      lbl_80062418
	li       r3, 4
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800625FC
	lis      r5, __vt__10J3DPEBlock@ha
	lis      r4, __vt__17J3DPEBlockTexEdge@ha
	addi     r0, r5, __vt__10J3DPEBlock@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__17J3DPEBlockTexEdge@l
	stw      r0, 0(r3)
	b        lbl_800625FC

lbl_80062418:
	rlwinm.  r0, r4, 0, 0x1d, 0x1d
	beq      lbl_8006244C
	li       r3, 4
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_800625FC
	lis      r5, __vt__10J3DPEBlock@ha
	lis      r4, __vt__13J3DPEBlockXlu@ha
	addi     r0, r5, __vt__10J3DPEBlock@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__13J3DPEBlockXlu@l
	stw      r0, 0(r3)
	b        lbl_800625FC

lbl_8006244C:
	addis    r0, r3, 0xf000
	cmplwi   r0, 0
	bne      lbl_8006257C
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80062574
	lis      r4, __vt__10J3DPEBlock@ha
	lis      r5, __vt__14J3DPEBlockFull@ha
	addi     r0, r4, __vt__10J3DPEBlock@l
	lhz      r6, j3dDefaultAlphaCmpID@sda21(r2)
	stw      r0, 0(r31)
	addi     r0, r5, __vt__14J3DPEBlockFull@l
	lis      r4, j3dDefaultFogInfo@ha
	addi     r5, r2, j3dDefaultBlendInfo@sda21
	stw      r0, 0(r31)
	addi     r8, r4, j3dDefaultFogInfo@l
	li       r4, 0
	lhz      r0, j3dDefaultZModeID@sda21(r2)
	lbz      r7, 0(r8)
	stb      r7, 4(r31)
	lbz      r7, 1(r8)
	stb      r7, 5(r31)
	lhz      r7, 2(r8)
	sth      r7, 6(r31)
	lfs      f0, 4(r8)
	stfs     f0, 8(r31)
	lfs      f0, 8(r8)
	stfs     f0, 0xc(r31)
	lfs      f0, 0xc(r8)
	stfs     f0, 0x10(r31)
	lfs      f0, 0x10(r8)
	stfs     f0, 0x14(r31)
	lbz      r7, 0x14(r8)
	stb      r7, 0x18(r31)
	lbz      r7, 0x15(r8)
	stb      r7, 0x19(r31)
	lbz      r7, 0x16(r8)
	stb      r7, 0x1a(r31)
	lbz      r7, 0x17(r8)
	stb      r7, 0x1b(r31)
	lhz      r7, 0x18(r8)
	sth      r7, 0x1c(r31)
	lhz      r7, 0x1a(r8)
	sth      r7, 0x1e(r31)
	lhz      r7, 0x1c(r8)
	sth      r7, 0x20(r31)
	lhz      r7, 0x1e(r8)
	sth      r7, 0x22(r31)
	lhz      r7, 0x20(r8)
	sth      r7, 0x24(r31)
	lhz      r7, 0x22(r8)
	sth      r7, 0x26(r31)
	lhz      r7, 0x24(r8)
	sth      r7, 0x28(r31)
	lhz      r7, 0x26(r8)
	sth      r7, 0x2a(r31)
	lhz      r7, 0x28(r8)
	sth      r7, 0x2c(r31)
	lhz      r7, 0x2a(r8)
	sth      r7, 0x2e(r31)
	sth      r6, 0x30(r31)
	stb      r4, 0x32(r31)
	stb      r4, 0x33(r31)
	lbz      r4, j3dDefaultBlendInfo@sda21(r2)
	stb      r4, 0x34(r31)
	lbz      r4, 1(r5)
	stb      r4, 0x35(r31)
	lbz      r4, 2(r5)
	stb      r4, 0x36(r31)
	lbz      r4, 3(r5)
	stb      r4, 0x37(r31)
	sth      r0, 0x38(r31)
	bl       initialize__14J3DPEBlockFullFv

lbl_80062574:
	mr       r5, r31
	b        lbl_800625F8

lbl_8006257C:
	addis    r0, r3, 0xe000
	cmplwi   r0, 0
	bne      lbl_800625F8
	li       r3, 0x10
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_800625F4
	lis      r5, __vt__10J3DPEBlock@ha
	lis      r4, __vt__16J3DPEBlockFogOff@ha
	addi     r0, r5, __vt__10J3DPEBlock@l
	lhz      r6, j3dDefaultAlphaCmpID@sda21(r2)
	stw      r0, 0(r31)
	addi     r0, r4, __vt__16J3DPEBlockFogOff@l
	li       r4, 0
	addi     r5, r2, j3dDefaultBlendInfo@sda21
	stw      r0, 0(r31)
	lhz      r0, j3dDefaultZModeID@sda21(r2)
	sth      r6, 4(r31)
	stb      r4, 6(r31)
	stb      r4, 7(r31)
	lbz      r4, j3dDefaultBlendInfo@sda21(r2)
	stb      r4, 8(r31)
	lbz      r4, 1(r5)
	stb      r4, 9(r31)
	lbz      r4, 2(r5)
	stb      r4, 0xa(r31)
	lbz      r4, 3(r5)
	stb      r4, 0xb(r31)
	sth      r0, 0xc(r31)
	bl       initialize__16J3DPEBlockFogOffFv

lbl_800625F4:
	mr       r5, r31

lbl_800625F8:
	mr       r3, r5

lbl_800625FC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062610
 * Size:	000048
 * __dt__10J3DPEBlockFv
 */
// J3DPEBlock::~J3DPEBlock() { }

/*
 * --INFO--
 * Address:	80062658
 * Size:	000050
 */
u32 J3DMaterial::calcSizeColorBlock(u32 flags)
{
	u32 size = 0;
	switch (flags) {
	case 0x0:
		size = sizeof(J3DColorBlockLightOff);
		break;
	case 0x40000000:
		size = sizeof(J3DColorBlockLightOn);
		break;
	case 0x80000000:
		size = sizeof(J3DColorBlockAmbientOn);
		break;
	}
	return size;
}

/*
 * --INFO--
 * Address:	800626A8
 * Size:	00002C
 */
u32 J3DMaterial::calcSizeTexGenBlock(u32 flags)
{
	switch (flags) {
	case J3DMLF_28:
		return sizeof(J3DTexGenBlock4);
	case 0:
	default:
		return sizeof(J3DTexGenBlockBasic);
	}
}

/*
 * --INFO--
 * Address:	800626D4
 * Size:	000048
 */
u32 J3DMaterial::calcSizeTevBlock(int count)
{
	u32 result = 0;
	if (count <= 1) {
		result = sizeof(J3DTevBlock1);
	} else if (count == 2) {
		result = sizeof(J3DTevBlock2);
	} else if (count <= 4) {
		result = sizeof(J3DTevBlock4);
	} else if (count <= 16) {
		result = sizeof(J3DTevBlock16);
	}
	// switch (count) {
	// 	case 0:
	// 	case 1:
	// 		result = sizeof(J3DTevBlock1);
	// 		break;
	// 	case 2:
	// 		result = sizeof(J3DTevBlock2);
	// 		break;
	// 	case 3:
	// 	case 4:
	// 		result = sizeof(J3DTevBlock4);
	// 		break;
	// 	case 5:
	// 	case 6:
	// 	case 7:
	// 	case 8:
	// 	case 9:
	// 	case 10:
	// 	case 11:
	// 	case 12:
	// 	case 13:
	// 	case 14:
	// 	case 15:
	// 	case 16:
	// 		result = sizeof(J3DTevBlock16);
	// 		break;
	// }
	return result;
}

/*
 * --INFO--
 * Address:	8006271C
 * Size:	000014
 */
u32 J3DMaterial::calcSizeIndBlock(int count)
{
	if (count != 0) {
		return sizeof(J3DIndBlockFull);
	} else {
		return sizeof(J3DIndBlockNull);
	}
}

/*
 * --INFO--
 * Address:	80062730
 * Size:	000068
 * TODO: Sizeofs with the correct types
 */
u32 J3DMaterial::calcSizePEBlock(u32 flags, u32 p2)
{
	u32 size = 0;
	if (flags == 0) {
		if ((p2 & 1) != 0) {
			size = 4;
		} else if ((p2 & 2) != 0) {
			size = 4;
		} else if ((p2 & 4) != 0) {
			size = 4;
		}
	} else if (flags == 0x10000000) {
		size = sizeof(J3DPEBlockFull);
	} else if (flags == 0x20000000) {
		size = sizeof(J3DPEBlockFogOff);
	}
	return size;
}

/*
 * --INFO--
 * Address:	80062798
 * Size:	000050
 * initialize__11J3DMaterialFv
 */
void J3DMaterial::initialize()
{
	mShape        = nullptr;
	mNext         = nullptr;
	mJoint        = nullptr;
	mMaterialMode = 1;
	mIndex        = -1;
	mInvalid      = 0;
	mDiffFlag     = 0;
	mColorBlock   = nullptr;
	mTexGenBlock  = nullptr;
	mTevBlock     = nullptr;
	mIndBlock     = nullptr;
	mPEBlock      = nullptr;
	mOrigMaterial = nullptr;
	mMaterialAnm  = nullptr;
	mSharedDLObj  = nullptr;
}

/*
 * --INFO--
 * Address:	800627E8
 * Size:	0000BC
 * countDLSize__11J3DMaterialFv
 */
u32 J3DMaterial::countDLSize()
{
	return ALIGN_NEXT(+mColorBlock->countDLSize() + mTexGenBlock->countDLSize() + mTevBlock->countDLSize() + mIndBlock->countDLSize()
	                      + mPEBlock->countDLSize(),
	                  0x20);
}

// Unused?
void J3DMaterial::makeDisplayList_private(J3DDisplayListObj* obj)
{
	obj->beginDL();
	mTevBlock->load();
	mIndBlock->load();
	mPEBlock->load();
	J3DGDSetGenMode(mTexGenBlock->getTexGenNum(), mColorBlock->getColorChanNum(), mTevBlock->getTevStageNum(),
	                mIndBlock->getIndTexStageNum(), (GXCullMode)(u8)mColorBlock->getCullMode());
	mTexGenBlock->load();
	mColorBlock->load();
	J3DGDSetNumChans(mColorBlock->getColorChanNum());
	J3DGDSetNumTexGens(mTexGenBlock->getTexGenNum());
	obj->endDL();
}

/*
 * --INFO--
 * Address:	800628EC
 * Size:	0002F8
 */
void J3DMaterial::makeDisplayList()
{
	if (!j3dSys.getMatPacket()->isLocked()) {
		j3dSys.getMatPacket()->mDiffFlag = mDiffFlag;
		makeDisplayList_private(j3dSys.getMatPacket()->getDisplayListObj());
	}
}

/*
 * --INFO--
 * Address:	80062BE4
 * Size:	0002D4
 */
void J3DMaterial::makeSharedDisplayList() { makeDisplayList_private(mSharedDLObj); }

/*
 * --INFO--
 * Address:	80062EB8
 * Size:	000050
 * load__11J3DMaterialFv
 */
void J3DMaterial::load()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (!j3dSys.checkFlag(2)) {
		loadNBTScale(*mTexGenBlock->getNBTScale());
	}
}

/*
 * --INFO--
 * Address:	80062F10
 * Size:	000064
 * loadSharedDL__11J3DMaterialFv
 */
void J3DMaterial::loadSharedDL()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (!j3dSys.checkFlag(2)) {
		mSharedDLObj->callDL();
		loadNBTScale(*mTexGenBlock->getNBTScale());
	}
}

/*
 * --INFO--
 * Address:	80062F74
 * Size:	000098
 * patch__11J3DMaterialFv
 */
void J3DMaterial::patch()
{
	j3dSys.getMatPacket()->mDiffFlag = mDiffFlag;
	j3dSys.getMatPacket()->beginPatch();
	mTevBlock->patch();
	mColorBlock->patch();
	mTexGenBlock->patch();
	j3dSys.getMatPacket()->endPatch();
}

/*
 * --INFO--
 * Address:	80063014
 * Size:	0001FC
 */
void J3DMaterial::diff(u32 p1)
{
	if (j3dSys.getMatPacket()->isEnabled_Diff()) {
		j3dSys.getMatPacket()->beginDiff();
		mTevBlock->diff(p1);
		mIndBlock->diff(p1);
		mPEBlock->diff(p1);
		if (p1 & 0x2000000) {
			J3DGDSetGenMode_3Param(mTexGenBlock->getTexGenNum(), mTevBlock->getTevStageNum(), mIndBlock->getIndTexStageNum());
			J3DGDSetNumTexGens(mTexGenBlock->getTexGenNum());
		}
		mTexGenBlock->diff(p1);
		mColorBlock->diff(p1);
		j3dSys.getMatPacket()->endDiff();
	}
}

/*
 * --INFO--
 * Address:	80063218
 * Size:	000078
 * calc__11J3DMaterialFPA4_Cf
 */
void J3DMaterial::calc(const Mtx mtx)
{
	if (j3dSys.checkFlag(0x40000000)) {
		mTexGenBlock->calcPostTexMtx(mtx);
	} else {
		mTexGenBlock->calc(mtx);
	}

	calcCurrentMtx();
	setCurrentMtx();
}

/*
 * --INFO--
 * Address:	80063290
 * Size:	00005C
 * calcDiffTexMtx__11J3DMaterialFPA4_Cf
 */
void J3DMaterial::calcDiffTexMtx(const Mtx mtx)
{
	if (j3dSys.checkFlag(0x40000000)) {
		mTexGenBlock->calcPostTexMtxWithoutViewMtx(mtx);
	} else {
		mTexGenBlock->calcWithoutViewMtx(mtx);
	}
}

/*
 * --INFO--
 * Address:	800632EC
 * Size:	000018
 * setCurrentMtx__11J3DMaterialFv
 */
void J3DMaterial::setCurrentMtx() { mShape->setCurrentMtx(mCurrentMtx); }

/*
 * --INFO--
 * Address:	80063304
 * Size:	000294
 */
void J3DMaterial::calcCurrentMtx()
{
	if (!j3dSys.checkFlag(0x40000000)) {
		mCurrentMtx.setCurrentTexMtx(mTexGenBlock->getTexCoord(0)->getTexGenMtx(), mTexGenBlock->getTexCoord(1)->getTexGenMtx(),
		                             mTexGenBlock->getTexCoord(2)->getTexGenMtx(), mTexGenBlock->getTexCoord(3)->getTexGenMtx(),
		                             mTexGenBlock->getTexCoord(4)->getTexGenMtx(), mTexGenBlock->getTexCoord(5)->getTexGenMtx(),
		                             mTexGenBlock->getTexCoord(6)->getTexGenMtx(), mTexGenBlock->getTexCoord(7)->getTexGenMtx());
	} else {
		mCurrentMtx.setCurrentTexMtx(mTexGenBlock->getTexCoord(0)->getTexMtxReg(), mTexGenBlock->getTexCoord(1)->getTexMtxReg(),
		                             mTexGenBlock->getTexCoord(2)->getTexMtxReg(), mTexGenBlock->getTexCoord(3)->getTexMtxReg(),
		                             mTexGenBlock->getTexCoord(4)->getTexMtxReg(), mTexGenBlock->getTexCoord(5)->getTexMtxReg(),
		                             mTexGenBlock->getTexCoord(6)->getTexMtxReg(), mTexGenBlock->getTexCoord(7)->getTexMtxReg());
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r30, r3
	addi     r3, r4, j3dSys@l
	lwz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 1, 1
	bne      lbl_8006344C
	lwz      r3, 0x28(r30)
	li       r4, 7
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r31, 2(r3)
	li       r4, 6
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r29, 2(r3)
	li       r4, 5
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r28, 2(r3)
	li       r4, 4
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r27, 2(r3)
	li       r4, 3
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r26, 2(r3)
	li       r4, 2
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r25, 2(r3)
	li       r4, 1
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r24, 2(r3)
	li       r4, 0
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r4, 2(r3)
	rlwinm   r0, r28, 6, 0x12, 0x19
	rlwinm   r3, r24, 0xc, 0xc, 0x13
	rlwinm   r5, r25, 0x12, 6, 0xd
	slwi     r4, r4, 6
	slwi     r6, r26, 0x18
	or       r4, r4, r3
	rlwinm   r3, r29, 0xc, 0xc, 0x13
	or       r4, r5, r4
	or       r0, r27, r0
	or       r5, r6, r4
	rlwinm   r4, r31, 0x12, 6, 0xd
	or       r0, r3, r0
	stw      r5, 0x40(r30)
	or       r0, r4, r0
	stw      r0, 0x44(r30)
	b        lbl_80063584

lbl_8006344C:
	lwz      r3, 0x28(r30)
	li       r4, 7
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 6
	lwz      r3, 0x28(r30)
	clrlwi   r31, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 5
	lwz      r3, 0x28(r30)
	clrlwi   r24, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 4
	lwz      r3, 0x28(r30)
	clrlwi   r25, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 3
	lwz      r3, 0x28(r30)
	clrlwi   r26, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 2
	lwz      r3, 0x28(r30)
	clrlwi   r27, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 1
	lwz      r3, 0x28(r30)
	clrlwi   r28, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r3)
	li       r4, 0
	lwz      r3, 0x28(r30)
	clrlwi   r29, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lhz      r4, 4(r3)
	rlwinm   r0, r25, 6, 0x12, 0x19
	rlwinm   r3, r29, 0xc, 0xc, 0x13
	rlwinm   r5, r28, 0x12, 6, 0xd
	rlwinm   r4, r4, 6, 0x12, 0x19
	slwi     r6, r27, 0x18
	or       r4, r4, r3
	rlwinm   r3, r24, 0xc, 0xc, 0x13
	or       r4, r5, r4
	or       r0, r26, r0
	or       r5, r6, r4
	rlwinm   r4, r31, 0x12, 6, 0xd
	or       r0, r3, r0
	stw      r5, 0x40(r30)
	or       r0, r4, r0
	stw      r0, 0x44(r30)

lbl_80063584:
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800635B4
 * Size:	0000E4
 * reset__11J3DMaterialFv
 */
void J3DMaterial::reset()
{
	if ((~mDiffFlag & 0x80000000) == 0) {
		mDiffFlag &= ~0x80000000;
		mMaterialMode = mOrigMaterial->mMaterialMode;
		mInvalid      = mOrigMaterial->mInvalid;
		mMaterialAnm  = nullptr;
		// copy(mOrigMaterial);
	}
}

/*
 * --INFO--
 * Address:	80063698
 * Size:	000020
 */
void J3DMaterial::change()
{
	if ((mDiffFlag & 0xc0000000) == 0) {
		mDiffFlag |= 0x80000000;
		mMaterialAnm = nullptr;
	}
}

/*
 * --INFO--
 * Address:	800636B8
 * Size:	000094
 */
J3DErrType J3DMaterial::newSharedDisplayList(u32 p1)
{
	if (mSharedDLObj == nullptr) {
		mSharedDLObj = new J3DDisplayListObj;
		if (mSharedDLObj == nullptr) {
			return JET_OutOfMemory;
		}
		J3DErrType res = mSharedDLObj->newDisplayList(p1);
		switch (res) {
		case JET_Success:
			break;
		default:
			return res;
		}
	}
	return JET_Success;
}

/*
 * --INFO--
 * Address:	8006374C
 * Size:	000094
 */
J3DErrType J3DMaterial::newSingleSharedDisplayList(u32 p1)
{
	if (mSharedDLObj == nullptr) {
		mSharedDLObj = new J3DDisplayListObj;
		if (mSharedDLObj == nullptr) {
			return JET_OutOfMemory;
		}
		J3DErrType res = mSharedDLObj->newSingleDisplayList(p1);
		switch (res) {
		case JET_Success:
			break;
		default:
			return res;
		}
	}
	return JET_Success;
}

/*
 * --INFO--
 * Address:	800637E0
 * Size:	000050
 * initialize__18J3DPatchedMaterialFv
 */
void J3DPatchedMaterial::initialize() { J3DMaterial::initialize(); }

/*
 * --INFO--
 * Address:	80063830
 * Size:	000004
 */
void J3DPatchedMaterial::makeDisplayList() { }

/*
 * --INFO--
 * Address:	80063834
 * Size:	000004
 */
void J3DPatchedMaterial::makeSharedDisplayList() { }

/*
 * --INFO--
 * Address:	80063838
 * Size:	00001C
 * load__18J3DPatchedMaterialFv
 */
void J3DPatchedMaterial::load()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (j3dSys.checkFlag(2)) {
		return;
	}
}

/*
 * --INFO--
 * Address:	80063854
 * Size:	000040
 * loadSharedDL__18J3DPatchedMaterialFv
 */
void J3DPatchedMaterial::loadSharedDL()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (!j3dSys.checkFlag(0x02))
		mSharedDLObj->callDL();
}

/*
 * --INFO--
 * Address:	80063894
 * Size:	000004
 */
void J3DPatchedMaterial::reset() { }

/*
 * --INFO--
 * Address:	80063898
 * Size:	000004
 */
void J3DPatchedMaterial::change() { }

/*
 * --INFO--
 * Address:	8006389C
 * Size:	000050
 * initialize__17J3DLockedMaterialFv
 */
void J3DLockedMaterial::initialize() { J3DMaterial::initialize(); }

/*
 * --INFO--
 * Address:	800638EC
 * Size:	000004
 */
void J3DLockedMaterial::makeDisplayList() { }

/*
 * --INFO--
 * Address:	800638F0
 * Size:	000004
 */
void J3DLockedMaterial::makeSharedDisplayList() { }

/*
 * --INFO--
 * Address:	800638F4
 * Size:	00001C
 * load__17J3DLockedMaterialFv
 */
void J3DLockedMaterial::load()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (j3dSys.checkFlag(2)) {
		return;
	}
}

/*
 * --INFO--
 * Address:	80063910
 * Size:	000040
 * loadSharedDL__17J3DLockedMaterialFv
 */
void J3DLockedMaterial::loadSharedDL()
{
	j3dSys.setMaterialMode(mMaterialMode);
	if (!j3dSys.checkFlag(0x02))
		mSharedDLObj->callDL();
}

/*
 * --INFO--
 * Address:	80063950
 * Size:	000004
 */
void J3DLockedMaterial::patch() { }

/*
 * --INFO--
 * Address:	80063954
 * Size:	000004
 */
void J3DLockedMaterial::diff(u32) { }

/*
 * --INFO--
 * Address:	80063958
 * Size:	000004
 */
void J3DLockedMaterial::calc(const Mtx) { }

/*
 * --INFO--
 * Address:	8006395C
 * Size:	000004
 */
void J3DLockedMaterial::reset() { }

/*
 * --INFO--
 * Address:	80063960
 * Size:	000004
 */
void J3DLockedMaterial::change() { }
