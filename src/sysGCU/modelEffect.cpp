#include "types.h"
#include "ParticleMgr.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_modelEffect_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049AC20
    lbl_8049AC20:
        .4byte 0x6D6F6465
        .4byte 0x6C456666
        .4byte 0x6563742E
        .4byte 0x63707000
    .global lbl_8049AC30
    lbl_8049AC30:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804ECBA0
    lbl_804ECBA0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__11ModelEffect
    __vt__11ModelEffect:
        .4byte 0
        .4byte 0
        .4byte constructor__11ModelEffectFv
        .4byte doAnimation__11ModelEffectFv
        .4byte doEntry__11ModelEffectFv
        .4byte doSetView__11ModelEffectFi
        .4byte doViewCalc__11ModelEffectFv
        .4byte changeMaterial__11ModelEffectFv
        .4byte 0
        .4byte useCylinderLOD__11ModelEffectFv
        .4byte getLODCylinder__11ModelEffectFRQ23Sys8Cylinder
        .4byte doSimulation__11ModelEffectFf
        .4byte doDirectDraw__11ModelEffectFR8Graphics

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516260
    lbl_80516260:
        .skip 0x4
    .global lbl_80516264
    lbl_80516264:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	8043D49C
 * Size:	00006C
 */
void ModelEffectData::entry()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, particleMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8043D4E8
	lis      r3, lbl_8049AC20@ha
	lis      r5, lbl_8049AC30@ha
	addi     r3, r3, lbl_8049AC20@l
	li       r4, 0x2c
	addi     r5, r5, lbl_8049AC30@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043D4E8:
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r31
	bl       entryModelEffect__11ParticleMgrFP15ModelEffectData
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void ModelEffectData::create(ModelEffectCreateArg*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043D508
 * Size:	00010C
 */
void ModelEffectData::allocModelData(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r31, 0x18(r3)
	lwz      r0, 0x18(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	cmpwi    r31, 0
	stw      r3, 0x1c(r30)
	li       r12, 0
	ble      lbl_8043D5FC
	cmpwi    r31, 8
	addi     r3, r31, -8
	ble      lbl_8043D5D4
	addi     r0, r3, 7
	li       r11, 0
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_8043D5D4

lbl_8043D568:
	lwz      r3, 0x1c(r30)
	li       r10, 0
	addi     r8, r11, 4
	addi     r7, r11, 8
	stwx     r10, r3, r11
	addi     r6, r11, 0xc
	addi     r5, r11, 0x10
	addi     r4, r11, 0x14
	lwz      r9, 0x1c(r30)
	addi     r3, r11, 0x18
	addi     r0, r11, 0x1c
	addi     r11, r11, 0x20
	stwx     r10, r9, r8
	addi     r12, r12, 8
	lwz      r8, 0x1c(r30)
	stwx     r10, r8, r7
	lwz      r7, 0x1c(r30)
	stwx     r10, r7, r6
	lwz      r6, 0x1c(r30)
	stwx     r10, r6, r5
	lwz      r5, 0x1c(r30)
	stwx     r10, r5, r4
	lwz      r4, 0x1c(r30)
	stwx     r10, r4, r3
	lwz      r3, 0x1c(r30)
	stwx     r10, r3, r0
	bdnz     lbl_8043D568

lbl_8043D5D4:
	subf     r0, r12, r31
	slwi     r5, r12, 2
	li       r4, 0
	mtctr    r0
	cmpw     r12, r31
	bge      lbl_8043D5FC

lbl_8043D5EC:
	lwz      r3, 0x1c(r30)
	stwx     r4, r3, r5
	addi     r5, r5, 4
	bdnz     lbl_8043D5EC

lbl_8043D5FC:
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
 * Address:	8043D614
 * Size:	000024
 */
void ParticleMgr::entryModelEffect(ModelEffectData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x60
	stw      r0, 0x14(r1)
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void ParticleMgr::getModelEffectData(unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043D638
 * Size:	00011C
 */
ModelEffect* ParticleMgr::createModelEffect(ModelEffectCreateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	mr       r28, r4
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r29, 0x70(r29)
	mr       r30, r4
	mr       r31, r3
	b        lbl_8043D6AC

lbl_8043D680:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	xor      r4, r30, r4
	xor      r0, r31, r3
	or.      r0, r4, r0
	bne      lbl_8043D6A8
	b        lbl_8043D6B8

lbl_8043D6A8:
	lwz      r29, 4(r29)

lbl_8043D6AC:
	cmplwi   r29, 0
	bne      lbl_8043D680
	li       r29, 0

lbl_8043D6B8:
	cmplwi   r29, 0
	beq      lbl_8043D730
	mr       r3, r29
	mr       r4, r28
	lwz      r12, 0(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_8043D728
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8043D704
	bl       __ct__5CNodeFv
	lis      r3, "__vt__26TObjectNode<11ModelEffect>"@ha
	addi     r0, r3, "__vt__26TObjectNode<11ModelEffect>"@l
	stw      r0, 0(r30)
	stw      r29, 0x18(r30)

lbl_8043D704:
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r30
	addi     r3, r3, 0x3c
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8043D728:
	mr       r3, r29
	b        lbl_8043D734

lbl_8043D730:
	li       r3, 0

lbl_8043D734:
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
 * Address:	........
 * Size:	000178
 */
void ParticleMgr::testCreateModelEffect(int, int, Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043D754
 * Size:	0001A8
 */
void ModelEffect::doAnimation()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r29, r3
	stw      r28, 0x40(r1)
	lwz      r4, 4(r3)
	addi     r3, r29, 8
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 4(r29)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x3a(r29)
	cmplwi   r0, 0
	beq      lbl_8043D7DC
	li       r5, 0
	li       r4, 0
	b        lbl_8043D7C4

lbl_8043D7B8:
	addi     r0, r5, 0x38
	addi     r5, r5, 1
	stbx     r4, r29, r0

lbl_8043D7C4:
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	lwz      r0, 0x264(r3)
	cmpw     r5, r0
	blt      lbl_8043D7B8
	b        lbl_8043D8DC

lbl_8043D7DC:
	mr       r3, r29
	addi     r4, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	li       r30, 0
	lwz      r31, 0x24(r3)
	b        lbl_8043D8D0

lbl_8043D804:
	mr       r3, r31
	mr       r4, r30
	bl       getViewport__8GraphicsFi
	mr       r28, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8043D830
	addi     r0, r30, 0x38
	li       r3, 0
	stbx     r3, r29, r0
	b        lbl_8043D8CC

lbl_8043D830:
	mr       r3, r29
	lwz      r28, 0x44(r28)
	lwz      r12, 0(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8043D89C
	mr       r3, r29
	addi     r4, r1, 0x18
	lwz      r12, 0(r29)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	addi     r4, r1, 0x18
	bl       isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder
	clrlwi.  r0, r3, 0x18
	beq      lbl_8043D88C
	addi     r0, r30, 0x38
	li       r3, 1
	stbx     r3, r29, r0
	b        lbl_8043D8CC

lbl_8043D88C:
	addi     r0, r30, 0x38
	li       r3, 0
	stbx     r3, r29, r0
	b        lbl_8043D8CC

lbl_8043D89C:
	mr       r3, r28
	addi     r4, r1, 8
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_8043D8C0
	addi     r0, r30, 0x38
	li       r3, 1
	stbx     r3, r29, r0
	b        lbl_8043D8CC

lbl_8043D8C0:
	addi     r0, r30, 0x38
	li       r3, 0
	stbx     r3, r29, r0

lbl_8043D8CC:
	addi     r30, r30, 1

lbl_8043D8D0:
	lwz      r0, 0x264(r31)
	cmpw     r30, r0
	blt      lbl_8043D804

lbl_8043D8DC:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043D8FC
 * Size:	000004
 */
void ModelEffect::getLODCylinder(Sys::Cylinder&) { }

/*
 * --INFO--
 * Address:	8043D900
 * Size:	000008
 */
bool ModelEffect::useCylinderLOD() { return false; }

/*
 * --INFO--
 * Address:	8043D908
 * Size:	000098
 */
void ModelEffect::doEntry()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x38(r3)
	cmplwi   r0, 0
	bne      lbl_8043D934
	lbz      r0, 0x39(r31)
	cmplwi   r0, 0
	beq      lbl_8043D94C

lbl_8043D934:
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8043D960

lbl_8043D94C:
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_8043D960:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
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
 * Address:	8043D9A0
 * Size:	000004
 */
void ModelEffect::changeMaterial() { }

/*
 * --INFO--
 * Address:	8043D9A4
 * Size:	000078
 */
void ModelEffect::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 4(r3)
	bl       setCurrentViewNo__Q28SysShape5ModelFUl
	add      r3, r30, r31
	lbz      r0, 0x38(r3)
	cmplwi   r0, 0
	beq      lbl_8043D9F0
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_8043DA04

lbl_8043D9F0:
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_8043DA04:
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
 * Address:	8043DA1C
 * Size:	000024
 */
void ModelEffect::doViewCalc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 4(r3)
	bl       viewCalc__Q28SysShape5ModelFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043DA40
 * Size:	00002C
 */
void ParticleMgr::doAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x1c(r3)
	lwz      r12, 0x64(r12)
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
 * Address:	8043DA6C
 * Size:	00002C
 */
void ParticleMgr::doEntry()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x1c(r3)
	lwz      r12, 0x68(r12)
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
 * Address:	8043DA98
 * Size:	00002C
 */
void ParticleMgr::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x1c(r3)
	lwz      r12, 0x6c(r12)
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
 * Address:	8043DAC4
 * Size:	00002C
 */
void ParticleMgr::doViewCalc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x1c(r3)
	lwz      r12, 0x70(r12)
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
 * Address:	8043DAF0
 * Size:	000028
 */
void __sinit_modelEffect_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804ECBA0@ha
	stw      r0, lbl_80516260@sda21(r13)
	stfsu    f0, lbl_804ECBA0@l(r3)
	stfs     f0, lbl_80516264@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
