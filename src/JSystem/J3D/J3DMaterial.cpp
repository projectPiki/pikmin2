#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__17J3DLockedMaterial
    __vt__17J3DLockedMaterial:
        .4byte 0
        .4byte 0
        .4byte calc__17J3DLockedMaterialFPA4_Cf
        .4byte calcDiffTexMtx__11J3DMaterialFPA4_Cf
        .4byte makeDisplayList__17J3DLockedMaterialFv
        .4byte makeSharedDisplayList__17J3DLockedMaterialFv
        .4byte load__17J3DLockedMaterialFv
        .4byte loadSharedDL__17J3DLockedMaterialFv
        .4byte patch__17J3DLockedMaterialFv
        .4byte diff__17J3DLockedMaterialFUl
        .4byte reset__17J3DLockedMaterialFv
        .4byte change__17J3DLockedMaterialFv
    .global __vt__18J3DPatchedMaterial
    __vt__18J3DPatchedMaterial:
        .4byte 0
        .4byte 0
        .4byte calc__11J3DMaterialFPA4_Cf
        .4byte calcDiffTexMtx__11J3DMaterialFPA4_Cf
        .4byte makeDisplayList__18J3DPatchedMaterialFv
        .4byte makeSharedDisplayList__18J3DPatchedMaterialFv
        .4byte load__18J3DPatchedMaterialFv
        .4byte loadSharedDL__18J3DPatchedMaterialFv
        .4byte patch__11J3DMaterialFv
        .4byte diff__11J3DMaterialFUl
        .4byte reset__18J3DPatchedMaterialFv
        .4byte change__18J3DPatchedMaterialFv
    .global __vt__11J3DMaterial
    __vt__11J3DMaterial:
        .4byte 0
        .4byte 0
        .4byte calc__11J3DMaterialFPA4_Cf
        .4byte calcDiffTexMtx__11J3DMaterialFPA4_Cf
        .4byte makeDisplayList__11J3DMaterialFv
        .4byte makeSharedDisplayList__11J3DMaterialFv
        .4byte load__11J3DMaterialFv
        .4byte loadSharedDL__11J3DMaterialFv
        .4byte patch__11J3DMaterialFv
        .4byte diff__11J3DMaterialFUl
        .4byte reset__11J3DMaterialFv
        .4byte change__11J3DMaterialFv
    .global __vt__10J3DPEBlock
    __vt__10J3DPEBlock:
        .4byte 0
        .4byte 0
        .4byte reset__10J3DPEBlockFP10J3DPEBlock
        .4byte 0
        .4byte patch__10J3DPEBlockFv
        .4byte diff__10J3DPEBlockFUl
        .4byte diffFog__10J3DPEBlockFv
        .4byte diffBlend__10J3DPEBlockFv
        .4byte countDLSize__10J3DPEBlockFv
        .4byte 0
        .4byte setFog__10J3DPEBlockF6J3DFog
        .4byte setFog__10J3DPEBlockFP6J3DFog
        .4byte getFog__10J3DPEBlockFv
        .4byte setAlphaComp__10J3DPEBlockFPC12J3DAlphaComp
        .4byte setAlphaComp__10J3DPEBlockFRC12J3DAlphaComp
        .4byte getAlphaComp__10J3DPEBlockFv
        .4byte setBlend__10J3DPEBlockFPC8J3DBlend
        .4byte setBlend__10J3DPEBlockFRC8J3DBlend
        .4byte getBlend__10J3DPEBlockFv
        .4byte setZMode__10J3DPEBlockFPC8J3DZMode
        .4byte setZMode__10J3DPEBlockF8J3DZMode
        .4byte getZMode__10J3DPEBlockFv
        .4byte setZCompLoc__10J3DPEBlockFPCUc
        .4byte setZCompLoc__10J3DPEBlockFUc
        .4byte getZCompLoc__10J3DPEBlockCFv
        .4byte setDither__10J3DPEBlockFPCUc
        .4byte setDither__10J3DPEBlockFUc
        .4byte getDither__10J3DPEBlockCFv
        .4byte getFogOffset__10J3DPEBlockCFv
        .4byte setFogOffset__10J3DPEBlockFUl
        .4byte __dt__10J3DPEBlockFv
    .global __vt__15J3DIndBlockNull
    __vt__15J3DIndBlockNull:
        .4byte 0
        .4byte 0
        .4byte reset__15J3DIndBlockNullFP11J3DIndBlock
        .4byte diff__15J3DIndBlockNullFUl
        .4byte load__15J3DIndBlockNullFv
        .4byte countDLSize__11J3DIndBlockFv
        .4byte getType__15J3DIndBlockNullFv
        .4byte setIndTexStageNum__11J3DIndBlockFUc
        .4byte getIndTexStageNum__11J3DIndBlockCFv
        .4byte setIndTexOrder__11J3DIndBlockFUl14J3DIndTexOrder
        .4byte setIndTexOrder__11J3DIndBlockFUlPC14J3DIndTexOrder
        .4byte getIndTexOrder__11J3DIndBlockFUl
        .4byte setIndTexMtx__11J3DIndBlockFUlPC12J3DIndTexMtx
        .4byte setIndTexMtx__11J3DIndBlockFUl12J3DIndTexMtx
        .4byte getIndTexMtx__11J3DIndBlockFUl
        .4byte setIndTexCoordScale__11J3DIndBlockFUlPC19J3DIndTexCoordScale
        .4byte setIndTexCoordScale__11J3DIndBlockFUl19J3DIndTexCoordScale
        .4byte getIndTexCoordScale__11J3DIndBlockFUl
        .4byte __dt__15J3DIndBlockNullFv
    .global __vt__11J3DIndBlock
    __vt__11J3DIndBlock:
        .4byte 0
        .4byte 0
        .4byte reset__11J3DIndBlockFP11J3DIndBlock
        .4byte 0
        .4byte 0
        .4byte countDLSize__11J3DIndBlockFv
        .4byte 0
        .4byte setIndTexStageNum__11J3DIndBlockFUc
        .4byte getIndTexStageNum__11J3DIndBlockCFv
        .4byte setIndTexOrder__11J3DIndBlockFUl14J3DIndTexOrder
        .4byte setIndTexOrder__11J3DIndBlockFUlPC14J3DIndTexOrder
        .4byte getIndTexOrder__11J3DIndBlockFUl
        .4byte setIndTexMtx__11J3DIndBlockFUlPC12J3DIndTexMtx
        .4byte setIndTexMtx__11J3DIndBlockFUl12J3DIndTexMtx
        .4byte getIndTexMtx__11J3DIndBlockFUl
        .4byte setIndTexCoordScale__11J3DIndBlockFUlPC19J3DIndTexCoordScale
        .4byte setIndTexCoordScale__11J3DIndBlockFUl19J3DIndTexCoordScale
        .4byte getIndTexCoordScale__11J3DIndBlockFUl
        .4byte __dt__11J3DIndBlockFv
    .global __vt__14J3DTexGenBlock
    __vt__14J3DTexGenBlock:
        .4byte 0
        .4byte 0
        .4byte reset__14J3DTexGenBlockFP14J3DTexGenBlock
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte countDLSize__14J3DTexGenBlockFv
        .4byte 0
        .4byte setTexGenNum__14J3DTexGenBlockFPCUl
        .4byte setTexGenNum__14J3DTexGenBlockFUl
        .4byte getTexGenNum__14J3DTexGenBlockCFv
        .4byte setTexCoord__14J3DTexGenBlockFUlPC11J3DTexCoord
        .4byte getTexCoord__14J3DTexGenBlockFUl
        .4byte setTexMtx__14J3DTexGenBlockFUlP9J3DTexMtx
        .4byte getTexMtx__14J3DTexGenBlockFUl
        .4byte setNBTScale__14J3DTexGenBlockFPC11J3DNBTScale
        .4byte setNBTScale__14J3DTexGenBlockF11J3DNBTScale
        .4byte getNBTScale__14J3DTexGenBlockFv
        .4byte getTexMtxOffset__14J3DTexGenBlockCFv
        .4byte setTexMtxOffset__14J3DTexGenBlockFUl
        .4byte __dt__14J3DTexGenBlockFv
    .global __vt__13J3DColorBlock
    __vt__13J3DColorBlock:
        .4byte 0
        .4byte 0
        .4byte load__13J3DColorBlockFv
        .4byte reset__13J3DColorBlockFP13J3DColorBlock
        .4byte patch__13J3DColorBlockFv
        .4byte patchMatColor__13J3DColorBlockFv
        .4byte patchLight__13J3DColorBlockFv
        .4byte diff__13J3DColorBlockFUl
        .4byte diffMatColor__13J3DColorBlockFv
        .4byte diffLight__13J3DColorBlockFv
        .4byte countDLSize__13J3DColorBlockFv
        .4byte 0
        .4byte setMatColor__13J3DColorBlockFUlPC10J3DGXColor
        .4byte setMatColor__13J3DColorBlockFUl10J3DGXColor
        .4byte getMatColor__13J3DColorBlockFUl
        .4byte setAmbColor__13J3DColorBlockFUlPC10J3DGXColor
        .4byte setAmbColor__13J3DColorBlockFUl10J3DGXColor
        .4byte getAmbColor__13J3DColorBlockFUl
        .4byte setColorChanNum__13J3DColorBlockFUc
        .4byte setColorChanNum__13J3DColorBlockFPCUc
        .4byte getColorChanNum__13J3DColorBlockCFv
        .4byte setColorChan__13J3DColorBlockFUlRC12J3DColorChan
        .4byte setColorChan__13J3DColorBlockFUlPC12J3DColorChan
        .4byte getColorChan__13J3DColorBlockFUl
        .4byte setLight__13J3DColorBlockFUlP11J3DLightObj
        .4byte getLight__13J3DColorBlockFUl
        .4byte setCullMode__13J3DColorBlockFPCUc
        .4byte setCullMode__13J3DColorBlockFUc
        .4byte getCullMode__13J3DColorBlockCFv
        .4byte getMatColorOffset__13J3DColorBlockCFv
        .4byte getColorChanOffset__13J3DColorBlockCFv
        .4byte setMatColorOffset__13J3DColorBlockFUl
        .4byte setColorChanOffset__13J3DColorBlockFUl
        .4byte __dt__13J3DColorBlockFv
*/

/*
 * --INFO--
 * Address:	800614E0
 * Size:	000200
 */
void J3DMaterial::createColorBlock(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, 0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	beq      lbl_80061528
	bge      lbl_80061518
	lis      r4, 0x80000001@ha
	addi     r0, r4, 0x80000001@l
	cmpw     r3, r0
	bge      lbl_800616C4
	b        lbl_80061624

lbl_80061518:
	lis      r0, 0x4000
	cmpw     r3, r0
	beq      lbl_80061598
	b        lbl_800616C4

lbl_80061528:
	li       r3, 0x20
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80061590
	lis      r4, __vt__13J3DColorBlock@ha
	lis      r3, __vt__21J3DColorBlockLightOff@ha
	addi     r0, r4, __vt__13J3DColorBlock@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__21J3DColorBlockLightOff@l
	lis      r4, __ct__10J3DGXColorFv@ha
	addi     r3, r31, 4
	stw      r0, 0(r31)
	addi     r4, r4, __ct__10J3DGXColorFv@l
	li       r6, 4
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__12J3DColorChanFv@ha
	addi     r3, r31, 0xe
	addi     r4, r4, __ct__12J3DColorChanFv@l
	li       r5, 0
	li       r6, 2
	li       r7, 4
	bl       __construct_array
	mr       r3, r31
	bl       initialize__21J3DColorBlockLightOffFv

lbl_80061590:
	mr       r5, r31
	b        lbl_800616C4

lbl_80061598:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8006161C
	lis      r4, __vt__13J3DColorBlock@ha
	lis      r3, __vt__20J3DColorBlockLightOn@ha
	addi     r0, r4, __vt__13J3DColorBlock@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__20J3DColorBlockLightOn@l
	lis      r4, __ct__10J3DGXColorFv@ha
	addi     r3, r31, 4
	stw      r0, 0(r31)
	addi     r4, r4, __ct__10J3DGXColorFv@l
	li       r6, 4
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__10J3DGXColorFv@ha
	addi     r3, r31, 0xc
	addi     r4, r4, __ct__10J3DGXColorFv@l
	li       r5, 0
	li       r6, 4
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__12J3DColorChanFv@ha
	addi     r3, r31, 0x16
	addi     r4, r4, __ct__12J3DColorChanFv@l
	li       r5, 0
	li       r6, 2
	li       r7, 4
	bl       __construct_array
	mr       r3, r31
	bl       initialize__20J3DColorBlockLightOnFv

lbl_8006161C:
	mr       r5, r31
	b        lbl_800616C4

lbl_80061624:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_800616C0
	lis      r4, __vt__13J3DColorBlock@ha
	lis      r3, __vt__21J3DColorBlockLightOff@ha
	addi     r0, r4, __vt__13J3DColorBlock@l
	mr       r30, r31
	stw      r0, 0(r31)
	addi     r0, r3, __vt__21J3DColorBlockLightOff@l
	lis      r3, __ct__10J3DGXColorFv@ha
	li       r5, 0
	stw      r0, 0(r31)
	addi     r4, r3, __ct__10J3DGXColorFv@l
	addi     r3, r31, 4
	li       r6, 4
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__12J3DColorChanFv@ha
	addi     r3, r31, 0xe
	addi     r4, r4, __ct__12J3DColorChanFv@l
	li       r5, 0
	li       r6, 2
	li       r7, 4
	bl       __construct_array
	mr       r3, r31
	bl       initialize__21J3DColorBlockLightOffFv
	lis      r3, __vt__22J3DColorBlockAmbientOn@ha
	lis      r4, __ct__10J3DGXColorFv@ha
	addi     r0, r3, __vt__22J3DColorBlockAmbientOn@l
	li       r5, 0
	stw      r0, 0(r30)
	addi     r3, r30, 0x20
	addi     r4, r4, __ct__10J3DGXColorFv@l
	li       r6, 4
	li       r7, 2
	bl       __construct_array
	mr       r3, r30
	bl       initialize__22J3DColorBlockAmbientOnFv

lbl_800616C0:
	mr       r5, r31

lbl_800616C4:
	lwz      r0, 0x14(r1)
	mr       r3, r5
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800616E0
 * Size:	00005C
 */
J3DColorBlockLightOff::~J3DColorBlockLightOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80061724
	lis      r3, __vt__21J3DColorBlockLightOff@ha
	addi     r0, r3, __vt__21J3DColorBlockLightOff@l
	stw      r0, 0(r31)
	beq      lbl_80061714
	lis      r3, __vt__13J3DColorBlock@ha
	addi     r0, r3, __vt__13J3DColorBlock@l
	stw      r0, 0(r31)

lbl_80061714:
	extsh.   r0, r4
	ble      lbl_80061724
	mr       r3, r31
	bl       __dl__FPv

lbl_80061724:
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
 * Address:	8006173C
 * Size:	0000B4
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
 * Address:	800617F0
 * Size:	000004
 */
J3DGXColor::J3DGXColor() { }

/*
 * --INFO--
 * Address:	800617F4
 * Size:	000048
 */
J3DColorBlock::~J3DColorBlock()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80061824
	lis      r5, __vt__13J3DColorBlock@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__13J3DColorBlock@l
	stw      r0, 0(r31)
	ble      lbl_80061824
	bl       __dl__FPv

lbl_80061824:
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
 * Address:	8006183C
 * Size:	000164
 */
void J3DMaterial::createTexGenBlock(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lis      r0, 0x800
	cmpw     r3, r0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	beq      lbl_8006186C
	bge      lbl_800618FC
	cmpwi    r3, 0
	beq      lbl_800618FC
	b        lbl_800618FC

lbl_8006186C:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_800618F4
	lis      r4, __vt__14J3DTexGenBlock@ha
	lis      r3, __vt__21J3DTexGenBlockPatched@ha
	addi     r0, r4, __vt__14J3DTexGenBlock@l
	mr       r30, r31
	stw      r0, 0(r31)
	addi     r0, r3, __vt__21J3DTexGenBlockPatched@l
	lis      r3, __ct__11J3DTexCoordFv@ha
	li       r5, 0
	stw      r0, 0(r31)
	addi     r4, r3, __ct__11J3DTexCoordFv@l
	addi     r3, r31, 8
	li       r6, 6
	li       r7, 8
	bl       __construct_array
	mr       r3, r31
	bl       initialize__21J3DTexGenBlockPatchedFv
	lis      r3, __vt__15J3DTexGenBlock4@ha
	lis      r4, j3dDefaultNBTScaleInfo@ha
	addi     r0, r3, __vt__15J3DTexGenBlock4@l
	stw      r0, 0(r30)
	mr       r3, r30
	lbzu     r0, j3dDefaultNBTScaleInfo@l(r4)
	stb      r0, 0x5c(r30)
	lfs      f0, 4(r4)
	stfs     f0, 0x60(r30)
	lfs      f0, 8(r4)
	stfs     f0, 0x64(r30)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x68(r30)
	bl       initialize__15J3DTexGenBlock4Fv

lbl_800618F4:
	mr       r3, r31
	b        lbl_80061988

lbl_800618FC:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80061984
	lis      r4, __vt__14J3DTexGenBlock@ha
	lis      r3, __vt__21J3DTexGenBlockPatched@ha
	addi     r0, r4, __vt__14J3DTexGenBlock@l
	mr       r30, r31
	stw      r0, 0(r31)
	addi     r0, r3, __vt__21J3DTexGenBlockPatched@l
	lis      r3, __ct__11J3DTexCoordFv@ha
	li       r5, 0
	stw      r0, 0(r31)
	addi     r4, r3, __ct__11J3DTexCoordFv@l
	addi     r3, r30, 8
	li       r6, 6
	li       r7, 8
	bl       __construct_array
	mr       r3, r30
	bl       initialize__21J3DTexGenBlockPatchedFv
	lis      r3, __vt__19J3DTexGenBlockBasic@ha
	lis      r4, j3dDefaultNBTScaleInfo@ha
	addi     r0, r3, __vt__19J3DTexGenBlockBasic@l
	stw      r0, 0(r31)
	mr       r3, r31
	lbzu     r0, j3dDefaultNBTScaleInfo@l(r4)
	stb      r0, 0x5c(r31)
	lfs      f0, 4(r4)
	stfs     f0, 0x60(r31)
	lfs      f0, 8(r4)
	stfs     f0, 0x64(r31)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x68(r31)
	bl       initialize__19J3DTexGenBlockBasicFv

lbl_80061984:
	mr       r3, r31

lbl_80061988:
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
 * Address:	800619A0
 * Size:	00005C
 */
J3DTexGenBlockPatched::~J3DTexGenBlockPatched()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800619E4
	lis      r3, __vt__21J3DTexGenBlockPatched@ha
	addi     r0, r3, __vt__21J3DTexGenBlockPatched@l
	stw      r0, 0(r31)
	beq      lbl_800619D4
	lis      r3, __vt__14J3DTexGenBlock@ha
	addi     r0, r3, __vt__14J3DTexGenBlock@l
	stw      r0, 0(r31)

lbl_800619D4:
	extsh.   r0, r4
	ble      lbl_800619E4
	mr       r3, r31
	bl       __dl__FPv

lbl_800619E4:
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
 * Address:	800619FC
 * Size:	000028
 */
J3DTexCoord::J3DTexCoord()
{
	/*
	lis      r4, j3dDefaultTexCoordInfo@ha
	lbzu     r0, j3dDefaultTexCoordInfo@l(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	lbz      r0, 2(r3)
	sth      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80061A24
 * Size:	000048
 */
J3DTexGenBlock::~J3DTexGenBlock()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80061A54
	lis      r5, __vt__14J3DTexGenBlock@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__14J3DTexGenBlock@l
	stw      r0, 0(r31)
	ble      lbl_80061A54
	bl       __dl__FPv

lbl_80061A54:
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
 * Address:	80061A6C
 * Size:	000374
 */
void J3DMaterial::createTevBlock(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, 1
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	bgt      lbl_80061B14
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80061B0C
	lis      r4, __vt__11J3DTevBlock@ha
	lis      r3, __vt__12J3DTevBlock1@ha
	addi     r0, r4, __vt__11J3DTevBlock@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__12J3DTevBlock1@l
	lis      r4, __ct__11J3DTevOrderFv@ha
	addi     r3, r31, 0xa
	stw      r0, 0(r31)
	addi     r4, r4, __ct__11J3DTevOrderFv@l
	li       r6, 4
	li       r7, 1
	bl       __construct_array
	lis      r4, __ct__11J3DTevStageFv@ha
	addi     r3, r31, 0xe
	addi     r4, r4, __ct__11J3DTevStageFv@l
	li       r5, 0
	li       r6, 8
	li       r7, 1
	bl       __construct_array
	lis      r4, __ct__14J3DIndTevStageFv@ha
	addi     r3, r31, 0x18
	addi     r4, r4, __ct__14J3DIndTevStageFv@l
	li       r5, 0
	li       r6, 4
	li       r7, 1
	bl       __construct_array
	mr       r3, r31
	bl       initialize__12J3DTevBlock1Fv

lbl_80061B0C:
	mr       r0, r31
	b        lbl_80061DC8

lbl_80061B14:
	cmpwi    r3, 2
	bne      lbl_80061BFC
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80061BF4
	lis      r4, __vt__11J3DTevBlock@ha
	lis      r3, __vt__12J3DTevBlock2@ha
	addi     r0, r4, __vt__11J3DTevBlock@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__12J3DTevBlock2@l
	lis      r4, __ct__11J3DTevOrderFv@ha
	addi     r3, r31, 0xc
	stw      r0, 0(r31)
	addi     r4, r4, __ct__11J3DTevOrderFv@l
	li       r6, 4
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__13J3DGXColorS10Fv@ha
	addi     r3, r31, 0x14
	addi     r4, r4, __ct__13J3DGXColorS10Fv@l
	li       r5, 0
	li       r6, 8
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__11J3DTevStageFv@ha
	addi     r3, r31, 0x35
	addi     r4, r4, __ct__11J3DTevStageFv@l
	li       r5, 0
	li       r6, 8
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__10J3DGXColorFv@ha
	addi     r3, r31, 0x45
	addi     r4, r4, __ct__10J3DGXColorFv@l
	li       r5, 0
	li       r6, 4
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__19J3DTevSwapModeTableFv@ha
	addi     r3, r31, 0x59
	addi     r4, r4, __ct__19J3DTevSwapModeTableFv@l
	li       r5, 0
	li       r6, 1
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__14J3DIndTevStageFv@ha
	addi     r3, r31, 0x60
	addi     r4, r4, __ct__14J3DIndTevStageFv@l
	li       r5, 0
	li       r6, 4
	li       r7, 2
	bl       __construct_array
	mr       r3, r31
	bl       initialize__12J3DTevBlock2Fv

lbl_80061BF4:
	mr       r0, r31
	b        lbl_80061DC8

lbl_80061BFC:
	cmpwi    r3, 4
	bgt      lbl_80061CE4
	li       r3, 0x94
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80061CDC
	lis      r4, __vt__11J3DTevBlock@ha
	lis      r3, __vt__12J3DTevBlock4@ha
	addi     r0, r4, __vt__11J3DTevBlock@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__12J3DTevBlock4@l
	lis      r4, __ct__11J3DTevOrderFv@ha
	addi     r3, r31, 0x10
	stw      r0, 0(r31)
	addi     r4, r4, __ct__11J3DTevOrderFv@l
	li       r6, 4
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__11J3DTevStageFv@ha
	addi     r3, r31, 0x21
	addi     r4, r4, __ct__11J3DTevStageFv@l
	li       r5, 0
	li       r6, 8
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__13J3DGXColorS10Fv@ha
	addi     r3, r31, 0x42
	addi     r4, r4, __ct__13J3DGXColorS10Fv@l
	li       r5, 0
	li       r6, 8
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__10J3DGXColorFv@ha
	addi     r3, r31, 0x62
	addi     r4, r4, __ct__10J3DGXColorFv@l
	li       r5, 0
	li       r6, 4
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__19J3DTevSwapModeTableFv@ha
	addi     r3, r31, 0x7a
	addi     r4, r4, __ct__19J3DTevSwapModeTableFv@l
	li       r5, 0
	li       r6, 1
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__14J3DIndTevStageFv@ha
	addi     r3, r31, 0x80
	addi     r4, r4, __ct__14J3DIndTevStageFv@l
	li       r5, 0
	li       r6, 4
	li       r7, 4
	bl       __construct_array
	mr       r3, r31
	bl       initialize__12J3DTevBlock4Fv

lbl_80061CDC:
	mr       r0, r31
	b        lbl_80061DC8

lbl_80061CE4:
	cmpwi    r3, 0x10
	bgt      lbl_80061DC8
	li       r3, 0x174
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80061DC4
	lis      r4, __vt__11J3DTevBlock@ha
	lis      r3, __vt__13J3DTevBlock16@ha
	addi     r0, r4, __vt__11J3DTevBlock@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__13J3DTevBlock16@l
	lis      r4, __ct__11J3DTevOrderFv@ha
	addi     r3, r31, 0x18
	stw      r0, 0(r31)
	addi     r4, r4, __ct__11J3DTevOrderFv@l
	li       r6, 4
	li       r7, 0x10
	bl       __construct_array
	lis      r4, __ct__11J3DTevStageFv@ha
	addi     r3, r31, 0x59
	addi     r4, r4, __ct__11J3DTevStageFv@l
	li       r5, 0
	li       r6, 8
	li       r7, 0x10
	bl       __construct_array
	lis      r4, __ct__13J3DGXColorS10Fv@ha
	addi     r3, r31, 0xda
	addi     r4, r4, __ct__13J3DGXColorS10Fv@l
	li       r5, 0
	li       r6, 8
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__10J3DGXColorFv@ha
	addi     r3, r31, 0xfa
	addi     r4, r4, __ct__10J3DGXColorFv@l
	li       r5, 0
	li       r6, 4
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__19J3DTevSwapModeTableFv@ha
	addi     r3, r31, 0x12a
	addi     r4, r4, __ct__19J3DTevSwapModeTableFv@l
	li       r5, 0
	li       r6, 1
	li       r7, 4
	bl       __construct_array
	lis      r4, __ct__14J3DIndTevStageFv@ha
	addi     r3, r31, 0x130
	addi     r4, r4, __ct__14J3DIndTevStageFv@l
	li       r5, 0
	li       r6, 4
	li       r7, 0x10
	bl       __construct_array
	mr       r3, r31
	bl       initialize__13J3DTevBlock16Fv

lbl_80061DC4:
	mr       r0, r31

lbl_80061DC8:
	mr       r3, r0
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80061DE0
 * Size:	00000C
 */
J3DTevSwapModeTable::J3DTevSwapModeTable()
{
	/*
	lbz      r0, j3dDefaultTevSwapTableID@sda21(r2)
	stb      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80061DEC
 * Size:	000004
 */
J3DGXColorS10::J3DGXColorS10() { }

/*
 * --INFO--
 * Address:	80061DF0
 * Size:	0000E4
 */
J3DIndTevStage::J3DIndTevStage()
{
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
 * Address:	80062114
 * Size:	000020
 */
J3DTevOrder::J3DTevOrder()
{
	/*
	lbz      r0, j3dDefaultTevOrderInfoNull@sda21(r2)
	addi     r4, r2, j3dDefaultTevOrderInfoNull@sda21
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062134
 * Size:	000048
 */
J3DTevBlock::~J3DTevBlock()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80062164
	lis      r5, __vt__11J3DTevBlock@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__11J3DTevBlock@l
	stw      r0, 0(r31)
	ble      lbl_80062164
	bl       __dl__FPv

lbl_80062164:
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
 * Address:	8006217C
 * Size:	0000E8
 */
void J3DMaterial::createIndBlock(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	beq      lbl_80062228
	li       r3, 0x7c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80062220
	lis      r4, __vt__11J3DIndBlock@ha
	lis      r3, __vt__15J3DIndBlockFull@ha
	addi     r0, r4, __vt__11J3DIndBlock@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r0, r3, __vt__15J3DIndBlockFull@l
	lis      r4, __ct__14J3DIndTexOrderFv@ha
	addi     r3, r31, 5
	stw      r0, 0(r31)
	addi     r4, r4, __ct__14J3DIndTexOrderFv@l
	li       r6, 4
	li       r7, 4
	bl       __construct_array
	lis      r3, __ct__12J3DIndTexMtxFv@ha
	lis      r5, __dt__12J3DIndTexMtxFv@ha
	addi     r4, r3, __ct__12J3DIndTexMtxFv@l
	li       r6, 0x1c
	addi     r3, r31, 0x18
	addi     r5, r5, __dt__12J3DIndTexMtxFv@l
	li       r7, 3
	bl       __construct_array
	lis      r3, __ct__19J3DIndTexCoordScaleFv@ha
	lis      r5, __dt__19J3DIndTexCoordScaleFv@ha
	addi     r4, r3, __ct__19J3DIndTexCoordScaleFv@l
	li       r6, 4
	addi     r3, r31, 0x6c
	addi     r5, r5, __dt__19J3DIndTexCoordScaleFv@l
	li       r7, 4
	bl       __construct_array
	mr       r3, r31
	bl       initialize__15J3DIndBlockFullFv

lbl_80062220:
	mr       r3, r31
	b        lbl_80062250

lbl_80062228:
	li       r3, 4
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80062250
	lis      r5, __vt__11J3DIndBlock@ha
	lis      r4, __vt__15J3DIndBlockNull@ha
	addi     r0, r5, __vt__11J3DIndBlock@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__15J3DIndBlockNull@l
	stw      r0, 0(r3)

lbl_80062250:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062264
 * Size:	00003C
 */
J3DIndTexCoordScale::~J3DIndTexCoordScale()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80062288
	extsh.   r0, r4
	ble      lbl_80062288
	bl       __dl__FPv

lbl_80062288:
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
 * Address:	800622A0
 * Size:	000018
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
 * Address:	800622B8
 * Size:	00003C
 */
J3DIndTexMtx::~J3DIndTexMtx()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800622DC
	extsh.   r0, r4
	ble      lbl_800622DC
	bl       __dl__FPv

lbl_800622DC:
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
 * Address:	800622F4
 * Size:	000040
 */
J3DIndTexMtx::J3DIndTexMtx()
{
	/*
	lis      r4, j3dDefaultIndTexMtxInfo@ha
	lfsu     f0, j3dDefaultIndTexMtxInfo@l(r4)
	stfs     f0, 0(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x14(r3)
	lbz      r0, 0x18(r4)
	stb      r0, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062334
 * Size:	000018
 */
J3DIndTexOrder::J3DIndTexOrder()
{
	/*
	lbz      r0, j3dDefaultIndTexOrderNull@sda21(r2)
	addi     r4, r2, j3dDefaultIndTexOrderNull@sda21
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006234C
 * Size:	000048
 */
J3DIndBlock::~J3DIndBlock()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8006237C
	lis      r5, __vt__11J3DIndBlock@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__11J3DIndBlock@l
	stw      r0, 0(r31)
	ble      lbl_8006237C
	bl       __dl__FPv

lbl_8006237C:
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
 * Address:	80062394
 * Size:	00027C
 */
void J3DMaterial::createPEBlock(unsigned long, unsigned long)
{
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
 */
J3DPEBlock::~J3DPEBlock()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80062640
	lis      r5, __vt__10J3DPEBlock@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__10J3DPEBlock@l
	stw      r0, 0(r31)
	ble      lbl_80062640
	bl       __dl__FPv

lbl_80062640:
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
 * Address:	80062658
 * Size:	000050
 */
void J3DMaterial::calcSizeColorBlock(unsigned long)
{
	/*
	cmpwi    r3, 0
	li       r5, 0
	beq      lbl_8006268C
	bge      lbl_8006267C
	lis      r4, 0x80000001@ha
	addi     r0, r4, 0x80000001@l
	cmpw     r3, r0
	bge      lbl_800626A0
	b        lbl_8006269C

lbl_8006267C:
	lis      r0, 0x4000
	cmpw     r3, r0
	beq      lbl_80062694
	b        lbl_800626A0

lbl_8006268C:
	li       r5, 0x20
	b        lbl_800626A0

lbl_80062694:
	li       r5, 0x4c
	b        lbl_800626A0

lbl_8006269C:
	li       r5, 0x28

lbl_800626A0:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	800626A8
 * Size:	00002C
 */
void J3DMaterial::calcSizeTexGenBlock(unsigned long)
{
	/*
	lis      r0, 0x800
	cmpw     r3, r0
	beq      lbl_800626C4
	bge      lbl_800626CC
	cmpwi    r3, 0
	beq      lbl_800626CC
	b        lbl_800626CC

lbl_800626C4:
	li       r3, 0x6c
	blr

lbl_800626CC:
	li       r3, 0x6c
	blr
	*/
}

/*
 * --INFO--
 * Address:	800626D4
 * Size:	000048
 */
void J3DMaterial::calcSizeTevBlock(int)
{
	/*
	cmpwi    r3, 1
	li       r0, 0
	bgt      lbl_800626E8
	li       r0, 0x1c
	b        lbl_80062714

lbl_800626E8:
	cmpwi    r3, 2
	bne      lbl_800626F8
	li       r0, 0x6c
	b        lbl_80062714

lbl_800626F8:
	cmpwi    r3, 4
	bgt      lbl_80062708
	li       r0, 0x94
	b        lbl_80062714

lbl_80062708:
	cmpwi    r3, 0x10
	bgt      lbl_80062714
	li       r0, 0x174

lbl_80062714:
	mr       r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006271C
 * Size:	000014
 */
void J3DMaterial::calcSizeIndBlock(int)
{
	/*
	cmpwi    r3, 0
	li       r3, 4
	beqlr
	li       r3, 0x7c
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062730
 * Size:	000068
 */
void J3DMaterial::calcSizePEBlock(unsigned long, unsigned long)
{
	/*
	cmplwi   r3, 0
	li       r5, 0
	bne      lbl_8006276C
	clrlwi.  r0, r4, 0x1f
	beq      lbl_8006274C
	li       r5, 4
	b        lbl_80062790

lbl_8006274C:
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	beq      lbl_8006275C
	li       r5, 4
	b        lbl_80062790

lbl_8006275C:
	rlwinm.  r0, r4, 0, 0x1d, 0x1d
	beq      lbl_80062790
	li       r5, 4
	b        lbl_80062790

lbl_8006276C:
	addis    r0, r3, 0xf000
	cmplwi   r0, 0
	bne      lbl_80062780
	li       r5, 0x40
	b        lbl_80062790

lbl_80062780:
	addis    r0, r3, 0xe000
	cmplwi   r0, 0
	bne      lbl_80062790
	li       r5, 0x10

lbl_80062790:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062798
 * Size:	000050
 */
void J3DMaterial::initialize()
{
	/*
	li       r6, 0
	lis      r4, 0x0000FFFF@ha
	stw      r6, 8(r3)
	li       r5, 1
	addi     r0, r4, 0x0000FFFF@l
	stw      r6, 4(r3)
	stw      r6, 0xc(r3)
	stw      r5, 0x10(r3)
	sth      r0, 0x14(r3)
	stw      r6, 0x18(r3)
	stw      r6, 0x20(r3)
	stw      r6, 0x24(r3)
	stw      r6, 0x28(r3)
	stw      r6, 0x2c(r3)
	stw      r6, 0x30(r3)
	stw      r6, 0x34(r3)
	stw      r6, 0x38(r3)
	stw      r6, 0x3c(r3)
	stw      r6, 0x48(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800627E8
 * Size:	0000BC
 */
void J3DMaterial::countDLSize()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lwz      r3, 0x24(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	lwz      r3, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	add      r31, r31, r3
	lwz      r3, 0x30(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	add      r31, r31, r3
	lwz      r3, 0x34(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	add      r3, r31, r3
	addi     r0, r3, 0x1f
	add      r0, r30, r0
	rlwinm   r3, r0, 0, 0, 0x1a
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
 * Address:	800628A4
 * Size:	000008
 */
u32 J3DTexGenBlock::countDLSize() { return 0x0; }

/*
 * --INFO--
 * Address:	800628AC
 * Size:	000008
 */
u32 J3DColorBlock::countDLSize() { return 0x0; }

/*
 * --INFO--
 * Address:	800628B4
 * Size:	000008
 */
u32 J3DTevBlock::countDLSize() { return 0x0; }

/*
 * --INFO--
 * Address:	800628BC
 * Size:	000008
 */
u32 J3DIndBlock::countDLSize() { return 0x0; }

/*
 * --INFO--
 * Address:	800628C4
 * Size:	000008
 */
u32 J3DPEBlock::countDLSize() { return 0x0; }

/*
 * --INFO--
 * Address:	800628CC
 * Size:	000004
 */
void J3DColorBlock::load() { }

/*
 * --INFO--
 * Address:	800628D0
 * Size:	000008
 */
u32 J3DColorBlock::getCullMode() const { return 0x2; }

/*
 * --INFO--
 * Address:	800628D8
 * Size:	000008
 */
u32 J3DIndBlock::getIndTexStageNum() const { return 0x0; }

/*
 * --INFO--
 * Address:	800628E0
 * Size:	000008
 */
u32 J3DColorBlock::getColorChanNum() const { return 0x0; }

/*
 * --INFO--
 * Address:	800628E8
 * Size:	000004
 */
void J3DTevBlock::load() { }

/*
 * --INFO--
 * Address:	800628EC
 * Size:	0002F8
 */
void J3DMaterial::makeDisplayList()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r30, r3
	addi     r3, r4, j3dSys@l
	lwz      r4, 0x3c(r3)
	lwz      r0, 0x10(r4)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80062BD0
	lwz      r0, 0x20(r30)
	stw      r0, 0x34(r4)
	lwz      r3, 0x3c(r3)
	lwz      r31, 0x20(r3)
	mr       r3, r31
	bl       beginDL__17J3DDisplayListObjFv
	lwz      r3, 0x2c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	clrlwi   r26, r3, 0x18
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	lwz      r3, 0x2c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	lwz      r3, 0x24(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi   r3, r3, 0x18
	mr       r4, r29
	mr       r5, r28
	mr       r6, r27
	mr       r7, r26
	bl       J3DGDSetGenMode__FUcUcUcUc11_GXCullMode
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r8, 0x10
	li       r7, 0
	li       r6, 9
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r8, 0x10
	li       r7, 0
	li       r6, 0x3f
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	mr       r3, r31
	bl       endDL__17J3DDisplayListObjFv

lbl_80062BD0:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062BE4
 * Size:	0002D4
 */
void J3DMaterial::makeSharedDisplayList()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r30, r3
	lwz      r31, 0x48(r3)
	mr       r3, r31
	bl       beginDL__17J3DDisplayListObjFv
	lwz      r3, 0x2c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	clrlwi   r26, r3, 0x18
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	lwz      r3, 0x2c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	lwz      r3, 0x24(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi   r3, r3, 0x18
	mr       r4, r29
	mr       r5, r28
	mr       r6, r27
	mr       r7, r26
	bl       J3DGDSetGenMode__FUcUcUcUc11_GXCullMode
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r8, 0x10
	li       r7, 0
	li       r6, 9
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r8, 0x10
	li       r7, 0
	li       r6, 0x3f
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	mr       r3, r31
	bl       endDL__17J3DDisplayListObjFv
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062EB8
 * Size:	000050
 */
void J3DMaterial::load()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, j3dSys@l
	lwz      r0, 0x34(r4)
	lwz      r5, 0x10(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	stw      r5, 0x54(r4)
	bne      lbl_80062EF8
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	bl       loadNBTScale__FR11J3DNBTScale

lbl_80062EF8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062F08
 * Size:	000008
 */
u32 J3DTexGenBlock::getNBTScale() { return 0x0; }

/*
 * --INFO--
 * Address:	80062F10
 * Size:	000064
 */
void J3DMaterial::loadSharedDL()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r4, j3dSys@l
	lwz      r0, 0x34(r3)
	lwz      r4, 0x10(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	stw      r4, 0x54(r3)
	bne      lbl_80062F60
	lwz      r3, 0x48(r31)
	bl       callDL__17J3DDisplayListObjCFv
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	bl       loadNBTScale__FR11J3DNBTScale

lbl_80062F60:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80062F74
 * Size:	000098
 */
void J3DMaterial::patch()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, j3dSys@l
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x20(r3)
	lwz      r3, 0x3c(r31)
	stw      r0, 0x34(r3)
	lwz      r3, 0x3c(r31)
	lwz      r3, 0x20(r3)
	bl       beginPatch__17J3DDisplayListObjFv
	lwz      r3, 0x2c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c(r31)
	lwz      r3, 0x20(r3)
	bl       endPatch__17J3DDisplayListObjFv
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
 * Address:	8006300C
 * Size:	000004
 */
void J3DColorBlock::patch() { }

/*
 * --INFO--
 * Address:	80063010
 * Size:	000004
 */
void J3DTevBlock::patch() { }

/*
 * --INFO--
 * Address:	80063014
 * Size:	0001FC
 */
void J3DMaterial::diff(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	addi     r31, r5, j3dSys@l
	mr       r29, r3
	mr       r30, r4
	lwz      r3, 0x3c(r31)
	lwz      r4, 0x28(r3)
	lwz      r0, 0x20(r4)
	cmplwi   r0, 0
	beq      lbl_800631FC
	bl       beginDiff__12J3DMatPacketFv
	lwz      r3, 0x2c(r29)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r29)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r29)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	rlwinm.  r0, r30, 0, 6, 6
	beq      lbl_800631C4
	lwz      r3, 0x30(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	lwz      r3, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	lwz      r3, 0x28(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi   r3, r3, 0x18
	mr       r4, r28
	mr       r5, r27
	bl       J3DGDSetGenMode_3Param__FUcUcUc
	lwz      r3, 0x28(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r8, 0x10
	li       r7, 0
	li       r6, 0x3f
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)

lbl_800631C4:
	lwz      r3, 0x28(r29)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r29)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c(r31)
	bl       endDiff__12J3DMatPacketFv

lbl_800631FC:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80063210
 * Size:	000004
 */
void J3DColorBlock::diff(unsigned long) { }

/*
 * --INFO--
 * Address:	80063214
 * Size:	000004
 */
void J3DPEBlock::diff(unsigned long) { }

/*
 * --INFO--
 * Address:	80063218
 * Size:	000078
 */
void J3DMaterial::calc(const float (*)[4])
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r5, j3dSys@l
	lwz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 1, 1
	beq      lbl_80063258
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_8006326C

lbl_80063258:
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8006326C:
	mr       r3, r31
	bl       calcCurrentMtx__11J3DMaterialFv
	mr       r3, r31
	bl       setCurrentMtx__11J3DMaterialFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80063290
 * Size:	00005C
 */
void J3DMaterial::calcDiffTexMtx(const float (*)[4])
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0x14(r1)
	addi     r5, r5, j3dSys@l
	lwz      r0, 0x34(r5)
	rlwinm.  r0, r0, 0, 1, 1
	beq      lbl_800632C8
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	b        lbl_800632DC

lbl_800632C8:
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_800632DC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800632EC
 * Size:	000018
 */
void J3DMaterial::setCurrentMtx()
{
	/*
	lwz      r4, 8(r3)
	lwz      r0, 0x40(r3)
	stw      r0, 0x40(r4)
	lwz      r0, 0x44(r3)
	stw      r0, 0x44(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80063304
 * Size:	000294
 */
void J3DMaterial::calcCurrentMtx()
{
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
 * Address:	80063598
 * Size:	000008
 */
u32 J3DTexGenBlock::getTexCoord(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	800635A0
 * Size:	000004
 */
void J3DPEBlock::reset(J3DPEBlock*) { }

/*
 * --INFO--
 * Address:	800635A4
 * Size:	000004
 */
void J3DIndBlock::reset(J3DIndBlock*) { }

/*
 * --INFO--
 * Address:	800635A8
 * Size:	000004
 */
void J3DTevBlock::reset(J3DTevBlock*) { }

/*
 * --INFO--
 * Address:	800635AC
 * Size:	000004
 */
void J3DTexGenBlock::reset(J3DTexGenBlock*) { }

/*
 * --INFO--
 * Address:	800635B0
 * Size:	000004
 */
void J3DColorBlock::reset(J3DColorBlock*) { }

/*
 * --INFO--
 * Address:	800635B4
 * Size:	0000E4
 */
void J3DMaterial::reset()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x20(r3)
	nor      r0, r3, r3
	rlwinm.  r0, r0, 0, 0, 0
	bne      lbl_80063680
	clrlwi   r3, r3, 1
	li       r0, 0
	stw      r3, 0x20(r30)
	lwz      r3, 0x38(r30)
	lwz      r3, 0x10(r3)
	stw      r3, 0x10(r30)
	lwz      r3, 0x38(r30)
	lwz      r3, 0x18(r3)
	stw      r3, 0x18(r30)
	stw      r0, 0x3c(r30)
	lwz      r3, 0x24(r30)
	lwz      r31, 0x38(r30)
	lwz      r12, 0(r3)
	lwz      r4, 0x24(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x28(r30)
	lwz      r4, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r30)
	lwz      r4, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r30)
	lwz      r4, 0x30(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r30)
	lwz      r4, 0x34(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80063680:
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
 * Address:	80063698
 * Size:	000020
 */
void J3DMaterial::change()
{
	/*
	lwz      r4, 0x20(r3)
	rlwinm.  r0, r4, 0, 0, 1
	bnelr
	oris     r4, r4, 0x8000
	li       r0, 0
	stw      r4, 0x20(r3)
	stw      r0, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800636B8
 * Size:	000094
 */
void J3DMaterial::newSharedDisplayList(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x48(r3)
	cmplwi   r0, 0
	bne      lbl_80063730
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80063704
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)

lbl_80063704:
	stw      r3, 0x48(r30)
	lwz      r3, 0x48(r30)
	cmplwi   r3, 0
	bne      lbl_8006371C
	li       r3, 4
	b        lbl_80063734

lbl_8006371C:
	mr       r4, r31
	bl       newDisplayList__17J3DDisplayListObjFUl
	cmpwi    r3, 0
	beq      lbl_80063730
	b        lbl_80063734

lbl_80063730:
	li       r3, 0

lbl_80063734:
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
 * Address:	8006374C
 * Size:	000094
 */
void J3DMaterial::newSingleSharedDisplayList(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x48(r3)
	cmplwi   r0, 0
	bne      lbl_800637C4
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80063798
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)

lbl_80063798:
	stw      r3, 0x48(r30)
	lwz      r3, 0x48(r30)
	cmplwi   r3, 0
	bne      lbl_800637B0
	li       r3, 4
	b        lbl_800637C8

lbl_800637B0:
	mr       r4, r31
	bl       newSingleDisplayList__17J3DDisplayListObjFUl
	cmpwi    r3, 0
	beq      lbl_800637C4
	b        lbl_800637C8

lbl_800637C4:
	li       r3, 0

lbl_800637C8:
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
 * Address:	800637E0
 * Size:	000050
 */
void J3DPatchedMaterial::initialize()
{
	/*
	li       r6, 0
	lis      r4, 0x0000FFFF@ha
	stw      r6, 8(r3)
	li       r5, 1
	addi     r0, r4, 0x0000FFFF@l
	stw      r6, 4(r3)
	stw      r6, 0xc(r3)
	stw      r5, 0x10(r3)
	sth      r0, 0x14(r3)
	stw      r6, 0x18(r3)
	stw      r6, 0x20(r3)
	stw      r6, 0x24(r3)
	stw      r6, 0x28(r3)
	stw      r6, 0x2c(r3)
	stw      r6, 0x30(r3)
	stw      r6, 0x34(r3)
	stw      r6, 0x38(r3)
	stw      r6, 0x3c(r3)
	stw      r6, 0x48(r3)
	blr
	*/
}

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
 */
void J3DPatchedMaterial::load()
{
	/*
	lis      r4, j3dSys@ha
	lwz      r5, 0x10(r3)
	addi     r3, r4, j3dSys@l
	lwz      r0, 0x34(r3)
	stw      r5, 0x54(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	blr
	*/
}

/*
 * --INFO--
 * Address:	80063854
 * Size:	000040
 */
void J3DPatchedMaterial::loadSharedDL()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, j3dSys@l
	lwz      r0, 0x34(r4)
	lwz      r5, 0x10(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	stw      r5, 0x54(r4)
	bne      lbl_80063884
	lwz      r3, 0x48(r3)
	bl       callDL__17J3DDisplayListObjCFv

lbl_80063884:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
 */
void J3DLockedMaterial::initialize()
{
	/*
	li       r6, 0
	lis      r4, 0x0000FFFF@ha
	stw      r6, 8(r3)
	li       r5, 1
	addi     r0, r4, 0x0000FFFF@l
	stw      r6, 4(r3)
	stw      r6, 0xc(r3)
	stw      r5, 0x10(r3)
	sth      r0, 0x14(r3)
	stw      r6, 0x18(r3)
	stw      r6, 0x20(r3)
	stw      r6, 0x24(r3)
	stw      r6, 0x28(r3)
	stw      r6, 0x2c(r3)
	stw      r6, 0x30(r3)
	stw      r6, 0x34(r3)
	stw      r6, 0x38(r3)
	stw      r6, 0x3c(r3)
	stw      r6, 0x48(r3)
	blr
	*/
}

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
 */
void J3DLockedMaterial::load()
{
	/*
	lis      r4, j3dSys@ha
	lwz      r5, 0x10(r3)
	addi     r3, r4, j3dSys@l
	lwz      r0, 0x34(r3)
	stw      r5, 0x54(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	blr
	*/
}

/*
 * --INFO--
 * Address:	80063910
 * Size:	000040
 */
void J3DLockedMaterial::loadSharedDL()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, j3dSys@l
	lwz      r0, 0x34(r4)
	lwz      r5, 0x10(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	stw      r5, 0x54(r4)
	bne      lbl_80063940
	lwz      r3, 0x48(r3)
	bl       callDL__17J3DDisplayListObjCFv

lbl_80063940:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
void J3DLockedMaterial::diff(unsigned long) { }

/*
 * --INFO--
 * Address:	80063958
 * Size:	000004
 */
void J3DLockedMaterial::calc(const float (*)[4]) { }

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

/*
 * --INFO--
 * Address:	80063964
 * Size:	000004
 */
void J3DPEBlock::patch() { }

/*
 * --INFO--
 * Address:	80063968
 * Size:	000004
 */
void J3DPEBlock::diffFog() { }

/*
 * --INFO--
 * Address:	8006396C
 * Size:	000004
 */
void J3DPEBlock::diffBlend() { }

/*
 * --INFO--
 * Address:	80063970
 * Size:	000004
 */
void J3DPEBlock::setFog(J3DFog*) { }

/*
 * --INFO--
 * Address:	80063974
 * Size:	000004
 */
void J3DPEBlock::setFog(J3DFog) { }

/*
 * --INFO--
 * Address:	80063978
 * Size:	000008
 */
u32 J3DPEBlock::getFog() { return 0x0; }

/*
 * --INFO--
 * Address:	80063980
 * Size:	000004
 */
void J3DPEBlock::setAlphaComp(const J3DAlphaComp&) { }

/*
 * --INFO--
 * Address:	80063984
 * Size:	000004
 */
void J3DPEBlock::setAlphaComp(const J3DAlphaComp*) { }

/*
 * --INFO--
 * Address:	80063988
 * Size:	000008
 */
u32 J3DPEBlock::getAlphaComp() { return 0x0; }

/*
 * --INFO--
 * Address:	80063990
 * Size:	000004
 */
void J3DPEBlock::setBlend(const J3DBlend&) { }

/*
 * --INFO--
 * Address:	80063994
 * Size:	000004
 */
void J3DPEBlock::setBlend(const J3DBlend*) { }

/*
 * --INFO--
 * Address:	80063998
 * Size:	000008
 */
u32 J3DPEBlock::getBlend() { return 0x0; }

/*
 * --INFO--
 * Address:	800639A0
 * Size:	000004
 */
void J3DPEBlock::setZMode(J3DZMode) { }

/*
 * --INFO--
 * Address:	800639A4
 * Size:	000004
 */
void J3DPEBlock::setZMode(const J3DZMode*) { }

/*
 * --INFO--
 * Address:	800639A8
 * Size:	000008
 */
u32 J3DPEBlock::getZMode() { return 0x0; }

/*
 * --INFO--
 * Address:	800639B0
 * Size:	000004
 */
void J3DPEBlock::setZCompLoc(unsigned char) { }

/*
 * --INFO--
 * Address:	800639B4
 * Size:	000004
 */
void J3DPEBlock::setZCompLoc(const unsigned char*) { }

/*
 * --INFO--
 * Address:	800639B8
 * Size:	000008
 */
u32 J3DPEBlock::getZCompLoc() const { return 0x0; }

/*
 * --INFO--
 * Address:	800639C0
 * Size:	000004
 */
void J3DPEBlock::setDither(unsigned char) { }

/*
 * --INFO--
 * Address:	800639C4
 * Size:	000004
 */
void J3DPEBlock::setDither(const unsigned char*) { }

/*
 * --INFO--
 * Address:	800639C8
 * Size:	000008
 */
u32 J3DPEBlock::getDither() const { return 0x0; }

/*
 * --INFO--
 * Address:	800639D0
 * Size:	000008
 */
u32 J3DPEBlock::getFogOffset() const { return 0x0; }

/*
 * --INFO--
 * Address:	800639D8
 * Size:	000004
 */
void J3DPEBlock::setFogOffset(unsigned long) { }

/*
 * --INFO--
 * Address:	800639DC
 * Size:	000004
 */
void J3DIndBlockNull::diff(unsigned long) { }

/*
 * --INFO--
 * Address:	800639E0
 * Size:	000004
 */
void J3DIndBlockNull::load() { }

/*
 * --INFO--
 * Address:	800639E4
 * Size:	000004
 */
void J3DIndBlockNull::reset(J3DIndBlock*) { }

/*
 * --INFO--
 * Address:	800639E8
 * Size:	00000C
 */
void J3DIndBlockNull::getType()
{
	/*
	lis      r3, 0x49424C4E@ha
	addi     r3, r3, 0x49424C4E@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	800639F4
 * Size:	00005C
 */
J3DIndBlockNull::~J3DIndBlockNull()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80063A38
	lis      r3, __vt__15J3DIndBlockNull@ha
	addi     r0, r3, __vt__15J3DIndBlockNull@l
	stw      r0, 0(r31)
	beq      lbl_80063A28
	lis      r3, __vt__11J3DIndBlock@ha
	addi     r0, r3, __vt__11J3DIndBlock@l
	stw      r0, 0(r31)

lbl_80063A28:
	extsh.   r0, r4
	ble      lbl_80063A38
	mr       r3, r31
	bl       __dl__FPv

lbl_80063A38:
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
 * Address:	80063A50
 * Size:	000004
 */
void J3DIndBlock::setIndTexStageNum(unsigned char) { }

/*
 * --INFO--
 * Address:	80063A54
 * Size:	000004
 */
void J3DIndBlock::setIndTexOrder(unsigned long, const J3DIndTexOrder*) { }

/*
 * --INFO--
 * Address:	80063A58
 * Size:	000004
 */
void J3DIndBlock::setIndTexOrder(unsigned long, J3DIndTexOrder) { }

/*
 * --INFO--
 * Address:	80063A5C
 * Size:	000008
 */
u32 J3DIndBlock::getIndTexOrder(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	80063A64
 * Size:	000004
 */
void J3DIndBlock::setIndTexMtx(unsigned long, J3DIndTexMtx) { }

/*
 * --INFO--
 * Address:	80063A68
 * Size:	000004
 */
void J3DIndBlock::setIndTexMtx(unsigned long, const J3DIndTexMtx*) { }

/*
 * --INFO--
 * Address:	80063A6C
 * Size:	000008
 */
u32 J3DIndBlock::getIndTexMtx(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	80063A74
 * Size:	000004
 */
void J3DIndBlock::setIndTexCoordScale(unsigned long, J3DIndTexCoordScale) { }

/*
 * --INFO--
 * Address:	80063A78
 * Size:	000004
 */
void J3DIndBlock::setIndTexCoordScale(unsigned long, const J3DIndTexCoordScale*)
{
}

/*
 * --INFO--
 * Address:	80063A7C
 * Size:	000008
 */
u32 J3DIndBlock::getIndTexCoordScale(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	80063A84
 * Size:	000004
 */
void J3DTexGenBlock::setTexGenNum(unsigned long) { }

/*
 * --INFO--
 * Address:	80063A88
 * Size:	000004
 */
void J3DTexGenBlock::setTexGenNum(const unsigned long*) { }

/*
 * --INFO--
 * Address:	80063A8C
 * Size:	000004
 */
void J3DTexGenBlock::setTexCoord(unsigned long, const J3DTexCoord*) { }

/*
 * --INFO--
 * Address:	80063A90
 * Size:	000004
 */
void J3DTexGenBlock::setTexMtx(unsigned long, J3DTexMtx*) { }

/*
 * --INFO--
 * Address:	80063A94
 * Size:	000008
 */
u32 J3DTexGenBlock::getTexMtx(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	80063A9C
 * Size:	000004
 */
void J3DTexGenBlock::setNBTScale(J3DNBTScale) { }

/*
 * --INFO--
 * Address:	80063AA0
 * Size:	000004
 */
void J3DTexGenBlock::setNBTScale(const J3DNBTScale*) { }

/*
 * --INFO--
 * Address:	80063AA4
 * Size:	000008
 */
u32 J3DTexGenBlock::getTexMtxOffset() const { return 0x0; }

/*
 * --INFO--
 * Address:	80063AAC
 * Size:	000004
 */
void J3DTexGenBlock::setTexMtxOffset(unsigned long) { }

/*
 * --INFO--
 * Address:	80063AB0
 * Size:	000004
 */
void J3DColorBlock::patchMatColor() { }

/*
 * --INFO--
 * Address:	80063AB4
 * Size:	000004
 */
void J3DColorBlock::patchLight() { }

/*
 * --INFO--
 * Address:	80063AB8
 * Size:	000004
 */
void J3DColorBlock::diffMatColor() { }

/*
 * --INFO--
 * Address:	80063ABC
 * Size:	000004
 */
void J3DColorBlock::diffLight() { }

/*
 * --INFO--
 * Address:	80063AC0
 * Size:	000004
 */
void J3DColorBlock::setMatColor(unsigned long, J3DGXColor) { }

/*
 * --INFO--
 * Address:	80063AC4
 * Size:	000004
 */
void J3DColorBlock::setMatColor(unsigned long, const J3DGXColor*) { }

/*
 * --INFO--
 * Address:	80063AC8
 * Size:	000008
 */
u32 J3DColorBlock::getMatColor(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	80063AD0
 * Size:	000004
 */
void J3DColorBlock::setAmbColor(unsigned long, J3DGXColor) { }

/*
 * --INFO--
 * Address:	80063AD4
 * Size:	000004
 */
void J3DColorBlock::setAmbColor(unsigned long, const J3DGXColor*) { }

/*
 * --INFO--
 * Address:	80063AD8
 * Size:	000008
 */
u32 J3DColorBlock::getAmbColor(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	80063AE0
 * Size:	000004
 */
void J3DColorBlock::setColorChanNum(const unsigned char*) { }

/*
 * --INFO--
 * Address:	80063AE4
 * Size:	000004
 */
void J3DColorBlock::setColorChanNum(unsigned char) { }

/*
 * --INFO--
 * Address:	80063AE8
 * Size:	000004
 */
void J3DColorBlock::setColorChan(unsigned long, const J3DColorChan*) { }

/*
 * --INFO--
 * Address:	80063AEC
 * Size:	000004
 */
void J3DColorBlock::setColorChan(unsigned long, const J3DColorChan&) { }

/*
 * --INFO--
 * Address:	80063AF0
 * Size:	000008
 */
u32 J3DColorBlock::getColorChan(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	80063AF8
 * Size:	000004
 */
void J3DColorBlock::setLight(unsigned long, J3DLightObj*) { }

/*
 * --INFO--
 * Address:	80063AFC
 * Size:	000008
 */
u32 J3DColorBlock::getLight(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	80063B04
 * Size:	000004
 */
void J3DColorBlock::setCullMode(unsigned char) { }

/*
 * --INFO--
 * Address:	80063B08
 * Size:	000004
 */
void J3DColorBlock::setCullMode(const unsigned char*) { }

/*
 * --INFO--
 * Address:	80063B0C
 * Size:	000008
 */
u32 J3DColorBlock::getMatColorOffset() const { return 0x0; }

/*
 * --INFO--
 * Address:	80063B14
 * Size:	000008
 */
u32 J3DColorBlock::getColorChanOffset() const { return 0x0; }

/*
 * --INFO--
 * Address:	80063B1C
 * Size:	000004
 */
void J3DColorBlock::setMatColorOffset(unsigned long) { }

/*
 * --INFO--
 * Address:	80063B20
 * Size:	000004
 */
void J3DColorBlock::setColorChanOffset(unsigned long) { }
