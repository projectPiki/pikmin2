#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_treasureLightMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C530
    lbl_8047C530:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x82A895F3
        .4byte 0x83898343
        .4byte 0x83670000
        .4byte 0x83818343
        .4byte 0x83938389
        .4byte 0x83438367
        .4byte 0x00000000
        .4byte 0x83588379
        .4byte 0x834C8385
        .4byte 0x83892D83
        .4byte 0x89834383
        .4byte 0x67000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804AFA80
    lbl_804AFA80:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q213TreasureLight3Mgr
    __vt__Q213TreasureLight3Mgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q213TreasureLight3MgrFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q213TreasureLight3MgrFv
        .4byte set__Q213TreasureLight3MgrFR8Graphics
        .4byte set__Q213TreasureLight3MgrFR7Matrixf
        .4byte drawDebugInfo__Q213TreasureLight3MgrFR8Graphics
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805158D8
    lbl_805158D8:
        .skip 0x4
    .global lbl_805158DC
    lbl_805158DC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805181D0
    lbl_805181D0:
        .4byte 0x43960000
    .global lbl_805181D4
    lbl_805181D4:
        .4byte 0x43A50000
    .global lbl_805181D8
    lbl_805181D8:
        .4byte 0x00000000
    .global lbl_805181DC
    lbl_805181DC:
        .float -1.0
    .global lbl_805181E0
    lbl_805181E0:
        .4byte 0x42200000
    .global lbl_805181E4
    lbl_805181E4:
        .4byte 0x40490FDB
    .global lbl_805181E8
    lbl_805181E8:
        .4byte 0x3BB60B61
    .global lbl_805181EC
    lbl_805181EC:
        .4byte 0x453B8000
    .global lbl_805181F0
    lbl_805181F0:
        .float 1.0
    .global lbl_805181F4
    lbl_805181F4:
        .4byte 0x3F59999A
*/

/*
 * --INFO--
 * Address:	8013286C
 * Size:	000150
 */
TreasureLight::Mgr::Mgr()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8047C530@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	addi     r30, r4, lbl_8047C530@l
	addi     r4, r30, 0xc
	bl       __ct__8LightMgrFPc
	lis      r3, __vt__Q213TreasureLight3Mgr@ha
	lfs      f1, lbl_805181D0@sda21(r2)
	addi     r0, r3, __vt__Q213TreasureLight3Mgr@l
	lfs      f0, lbl_805181D4@sda21(r2)
	stw      r0, 0(r31)
	li       r3, 0x58
	stfs     f1, 0x58(r31)
	stfs     f0, 0x5c(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801328F4
	li       r0, 0xff
	addi     r4, r30, 0x18
	stb      r0, 0x10(r1)
	addi     r7, r1, 0x14
	li       r5, 1
	li       r6, 2
	stb      r0, 0x11(r1)
	stb      r0, 0x12(r1)
	stb      r0, 0x13(r1)
	lwz      r0, 0x10(r1)
	stw      r0, 0x14(r1)
	bl       __ct__8LightObjFPc10_GXLightID14ELightTypeFlagQ28JUtility6TColor
	mr       r0, r3

lbl_801328F4:
	stw      r0, 0x50(r31)
	li       r0, 3
	lfs      f1, lbl_805181D8@sda21(r2)
	mr       r3, r31
	lwz      r4, 0x50(r31)
	lfs      f0, lbl_805181DC@sda21(r2)
	stb      r0, 0x49(r4)
	lwz      r4, 0x50(r31)
	stfs     f1, 0x28(r4)
	stfs     f0, 0x2c(r4)
	stfs     f1, 0x30(r4)
	lwz      r4, 0x50(r31)
	bl       registLightObj__8LightMgrFP8LightObj
	li       r3, 0x58
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8013296C
	li       r0, 0xff
	addi     r4, r30, 0x28
	stb      r0, 8(r1)
	addi     r7, r1, 0xc
	li       r5, 0x80
	li       r6, 4
	stb      r0, 9(r1)
	stb      r0, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       __ct__8LightObjFPc10_GXLightID14ELightTypeFlagQ28JUtility6TColor
	mr       r0, r3

lbl_8013296C:
	stw      r0, 0x54(r31)
	mr       r3, r31
	lfs      f0, lbl_805181E0@sda21(r2)
	lwz      r4, 0x54(r31)
	stfs     f0, 0x4c(r4)
	lwz      r4, 0x54(r31)
	bl       registLightObj__8LightMgrFP8LightObj
	li       r4, 0x32
	li       r0, 0xff
	stb      r4, 0x30(r31)
	mr       r3, r31
	stb      r4, 0x31(r31)
	stb      r4, 0x32(r31)
	stb      r0, 0x33(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801329BC
 * Size:	000004
 */
void TreasureLight::Mgr::update() { }

/*
 * --INFO--
 * Address:	801329C0
 * Size:	000044
 */
void TreasureLight::Mgr::set(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       setCommonProc__Q213TreasureLight3MgrFv
	mr       r3, r30
	mr       r4, r31
	bl       set__8LightMgrFR8Graphics
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
 * Address:	80132A04
 * Size:	000044
 */
void TreasureLight::Mgr::set(Matrixf&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       setCommonProc__Q213TreasureLight3MgrFv
	mr       r3, r30
	mr       r4, r31
	bl       set__8LightMgrFR7Matrixf
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
 * Address:	80132A48
 * Size:	000184
 */
void TreasureLight::Mgr::setCommonProc()
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
	stfd     f27, 0x20(r1)
	psq_st   f27, 40(r1), 0, qr0
	stfd     f26, 0x10(r1)
	psq_st   f26, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f2, lbl_805181E8@sda21(r2)
	lfs      f1, 0x58(r3)
	lfs      f0, 0x5c(r3)
	fmuls    f1, f2, f1
	lfs      f3, lbl_805181E4@sda21(r2)
	fmuls    f0, f2, f0
	fmuls    f26, f3, f1
	fmuls    f27, f3, f0
	fmr      f1, f26
	bl       pikmin2_sinf__Ff
	fmr      f31, f1
	fmr      f1, f27
	bl       pikmin2_cosf__Ff
	lfs      f0, lbl_805181EC@sda21(r2)
	fmuls    f0, f0, f1
	fmr      f1, f27
	fmuls    f30, f0, f31
	bl       pikmin2_sinf__Ff
	lfs      f0, lbl_805181EC@sda21(r2)
	fneg     f0, f0
	fmuls    f29, f0, f1
	fmr      f1, f26
	bl       pikmin2_cosf__Ff
	fmr      f31, f1
	fmr      f1, f27
	bl       pikmin2_cosf__Ff
	lfs      f0, lbl_805181EC@sda21(r2)
	fneg     f27, f29
	fneg     f28, f30
	fmuls    f1, f0, f1
	fmuls    f0, f27, f27
	fmuls    f31, f1, f31
	fmadds   f0, f28, f28, f0
	fneg     f26, f31
	fmadds   f1, f26, f26, f0
	bl       pikmin2_sqrtf__Ff
	lfs      f0, lbl_805181D8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80132B3C
	lfs      f0, lbl_805181F0@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0

lbl_80132B3C:
	lwz      r3, 0x50(r31)
	lfs      f0, lbl_805181F4@sda21(r2)
	stfs     f30, 0x1c(r3)
	stfs     f29, 0x20(r3)
	stfs     f31, 0x24(r3)
	lwz      r3, 0x50(r31)
	stfs     f28, 0x28(r3)
	stfs     f27, 0x2c(r3)
	stfs     f26, 0x30(r3)
	lwz      r3, 0x50(r31)
	stfs     f0, 0x40(r3)
	lwz      r3, 0x54(r31)
	stfs     f30, 0x1c(r3)
	stfs     f29, 0x20(r3)
	stfs     f31, 0x24(r3)
	lwz      r3, 0x54(r31)
	stfs     f28, 0x28(r3)
	stfs     f27, 0x2c(r3)
	stfs     f26, 0x30(r3)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	psq_l    f27, 40(r1), 0, qr0
	lfd      f27, 0x20(r1)
	psq_l    f26, 24(r1), 0, qr0
	lfd      f26, 0x10(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80132BCC
 * Size:	000020
 */
void TreasureLight::Mgr::drawDebugInfo(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       drawDebugInfo__8LightMgrFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80132BEC
 * Size:	0000A0
 */
TreasureLight::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80132C70
	lis      r3, __vt__Q213TreasureLight3Mgr@ha
	addi     r0, r3, __vt__Q213TreasureLight3Mgr@l
	stw      r0, 0(r30)
	beq      lbl_80132C60
	lis      r4, __vt__8LightMgr@ha
	addi     r3, r30, 0x34
	addi     r0, r4, __vt__8LightMgr@l
	li       r4, -1
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	addic.   r0, r30, 0x18
	beq      lbl_80132C54
	lis      r4, __vt__15AmbientLightObj@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__15AmbientLightObj@l
	li       r4, 0
	stw      r0, 0x18(r30)
	bl       __dt__5CNodeFv

lbl_80132C54:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_80132C60:
	extsh.   r0, r31
	ble      lbl_80132C70
	mr       r3, r30
	bl       __dl__FPv

lbl_80132C70:
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
 * Address:	80132C8C
 * Size:	000028
 */
void __sinit_treasureLightMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804AFA80@ha
	stw      r0, lbl_805158D8@sda21(r13)
	stfsu    f0, lbl_804AFA80@l(r3)
	stfs     f0, lbl_805158DC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
