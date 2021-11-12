#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80481B98
    lbl_80481B98:
        .4byte 0x67656E50
        .4byte 0x656C6C65
        .4byte 0x74000000
    .global lbl_80481BA4
    lbl_80481BA4:
        .4byte 0x6F626A65
        .4byte 0x63742074
        .4byte 0x79706500
    .global lbl_80481BB0
    lbl_80481BB0:
        .4byte 0x50454C4C
        .4byte 0x45542082
        .4byte 0xF0835A83
        .4byte 0x62836700
    .global lbl_80481BC0
    lbl_80481BC0:
        .4byte 0x50454C4C
        .4byte 0x455482F0
        .4byte 0x94AD90B6
        .4byte 0x00000000
        .4byte 0x0923206D
        .4byte 0x67722069
        .4byte 0x640D0A00
        .4byte 0x09232072
        .4byte 0x6F746174
        .4byte 0x696F6E0D
        .4byte 0x0A000000
        .4byte 0x09232070
        .4byte 0x656C6C65
        .4byte 0x74206C6F
        .4byte 0x63616C20
        .4byte 0x76657273
        .4byte 0x696F6E0D
        .4byte 0x0A000000
    .global lbl_80481C08
    lbl_80481C08:
        .4byte 0x67656E50
        .4byte 0x656C6C65
        .4byte 0x742E6370
        .4byte 0x70000000
    .global lbl_80481C18
    lbl_80481C18:
        .asciz "no basePelletMgr for %d\n"
        .skip 3
    .global lbl_80481C34
    lbl_80481C34:
        .asciz "mgr%d:%d"
        .skip 3
    .global lbl_80481C40
    lbl_80481C40:
        .asciz "GENERATOR ERR\n"
        .skip 1

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game9GenPellet
    __vt__Q24Game9GenPellet:
        .4byte 0
        .4byte 0
        .4byte doWrite__Q24Game9GenPelletFR6Stream
        .4byte ramSaveParameters__Q24Game9GenPelletFR6Stream
        .4byte ramLoadParameters__Q24Game9GenPelletFR6Stream
        .4byte doEvent__Q24Game9GenPelletFUl
        .4byte doRead__Q24Game9GenPelletFR6Stream
        .4byte update__Q24Game9GenObjectFPQ24Game9Generator
        .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
        .4byte getLatestVersion__Q24Game9GenObjectFv
        .4byte getShape__Q24Game9GenPelletFv
        .4byte updateUseList__Q24Game9GenPelletFPQ24Game9Generatori
        .4byte generate__Q24Game9GenPelletFPQ24Game9Generator
        .4byte birth__Q24Game9GenPelletFPQ24Game6GenArg
        .4byte "generatorMakeMatrix__Q24Game9GenPelletFR7MatrixfR10Vector3<f>"
        .4byte getDebugInfo__Q24Game9GenPelletFPc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519D40
    lbl_80519D40:
        .4byte 0x00000000
    .global lbl_80519D44
    lbl_80519D44:
        .4byte 0x40490FDB
    .global lbl_80519D48
    lbl_80519D48:
        .4byte 0x3BB60B61
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
GenPellet::GenPellet(void)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	8020278C
 * Size:	00009C
 */
void makePellet()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x40
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80202810
	addi     r0, r31, 0x3c
	lis      r5, lbl_80481BA4@ha
	lis      r4, lbl_80481BB0@ha
	lis      r8, 0x70656C74@ha
	addi     r6, r5, lbl_80481BA4@l
	stw      r0, 0(r31)
	addi     r7, r4, lbl_80481BB0@l
	addi     r5, r8, 0x70656C74@l
	li       r4, 0
	bl       __ct__Q24Game7GenBaseFUlPcPc
	lis      r3, __vt__Q24Game9GenObject@ha
	lis      r4, __vt__Q24Game9GenPellet@ha
	addi     r0, r3, __vt__Q24Game9GenObject@l
	li       r3, 0xff
	stw      r0, 0xc(r31)
	addi     r4, r4, __vt__Q24Game9GenPellet@l
	lfs      f0, lbl_80519D40@sda21(r2)
	li       r0, 0
	stw      r4, 0xc(r31)
	stb      r3, 0x24(r31)
	stfs     f0, 0x30(r31)
	stfs     f0, 0x2c(r31)
	stfs     f0, 0x28(r31)
	stw      r0, 0x34(r31)
	stw      r0, 0x38(r31)

lbl_80202810:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80202828
 * Size:	00008C
 */
void GenPellet::initialise(void)
{
	/*
	lwz      r8, factory__Q24Game16GenObjectFactory@sda21(r13)
	lwz      r5, 0(r8)
	lwz      r0, 4(r8)
	cmpw     r5, r0
	bgelr
	lis      r4, 0x70656C74@ha
	lwz      r3, 8(r8)
	addi     r4, r4, 0x70656C74@l
	slwi     r0, r5, 4
	stwx     r4, r3, r0
	lis      r5, makePellet__Fv@ha
	lis      r4, lbl_80481BC0@ha
	lis      r3, 0x30303030@ha
	lwz      r0, 0(r8)
	addi     r7, r5, makePellet__Fv@l
	lwz      r6, 8(r8)
	addi     r5, r4, lbl_80481BC0@l
	slwi     r0, r0, 4
	addi     r4, r3, 0x30303030@l
	add      r3, r6, r0
	stw      r7, 4(r3)
	lwz      r0, 0(r8)
	lwz      r3, 8(r8)
	slwi     r0, r0, 4
	add      r3, r3, r0
	stw      r5, 8(r3)
	lwz      r0, 0(r8)
	lwz      r3, 8(r8)
	slwi     r0, r0, 4
	add      r3, r3, r0
	stw      r4, 0xc(r3)
	lwz      r3, 0(r8)
	addi     r0, r3, 1
	stw      r0, 0(r8)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802028B4
 * Size:	00006C
 */
void GenPellet::doEvent(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r0, r31, 0x24
	cmplw    r4, r0
	bne      lbl_8020290C
	lwz      r3, 0x38(r31)
	cmplwi   r3, 0
	beq      lbl_802028E4
	bl       __dl__FPv

lbl_802028E4:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	lbz      r4, 0x24(r31)
	bl       getMgrByID__Q24Game9PelletMgrFUc
	stw      r3, 0x34(r31)
	lwz      r3, 0x34(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r31)

lbl_8020290C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80202920
 * Size:	000068
 */
void generatorMakeMatrix__Q24Game9GenPelletFR7MatrixfR10Vector3f(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f3, lbl_80519D48@sda21(r2)
	stw      r0, 0x24(r1)
	mr       r0, r4
	mr       r4, r5
	lfs      f4, lbl_80519D44@sda21(r2)
	lfs      f2, 0x2c(r3)
	addi     r5, r1, 8
	lfs      f1, 0x30(r3)
	lfs      f0, 0x28(r3)
	fmuls    f2, f3, f2
	fmuls    f1, f3, f1
	mr       r3, r0
	fmuls    f0, f3, f0
	fmuls    f2, f4, f2
	fmuls    f1, f4, f1
	fmuls    f0, f4, f0
	stfs     f2, 0xc(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0x10(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80202988
 * Size:	000050
 */
void GenPellet::getShape(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x34(r3)
	cmplwi   r0, 0
	beq      lbl_802029C4
	lwz      r4, 0x38(r3)
	cmplwi   r4, 0
	beq      lbl_802029C4
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	b        lbl_802029C8

lbl_802029C4:
	li       r3, 0

lbl_802029C8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802029D8
 * Size:	000138
 */
void GenPellet::doWrite(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, lbl_80481B98@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r5, lbl_80481B98@l
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r3, 0x34(r3)
	cmplwi   r3, 0
	beq      lbl_80202AF4
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r30
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r30)
	mr       r3, r30
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x24(r29)
	mr       r3, r30
	bl       writeByte__6StreamFUc
	mr       r3, r30
	addi     r4, r31, 0x38
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r30)
	mr       r3, r30
	bl       textWriteTab__6StreamFi
	lfs      f1, 0x28(r29)
	mr       r3, r30
	bl       writeFloat__6StreamFf
	lfs      f1, 0x2c(r29)
	mr       r3, r30
	bl       writeFloat__6StreamFf
	lfs      f1, 0x30(r29)
	mr       r3, r30
	bl       writeFloat__6StreamFf
	mr       r3, r30
	addi     r4, r31, 0x44
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r3, 0x34(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 8
	mr       r4, r0
	bl       __ct__4ID32FUl
	mr       r4, r30
	addi     r3, r1, 8
	bl       write__4ID32FR6Stream
	mr       r3, r30
	addi     r4, r31, 0x54
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r3, 0x34(r29)
	mr       r4, r30
	lwz      r5, 0x38(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       textEndGroup__6StreamFv

lbl_80202AF4:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80202B10
 * Size:	000118
 */
void GenPellet::doRead(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x38(r3)
	cmplwi   r3, 0
	beq      lbl_80202B44
	bl       __dl__FPv
	li       r0, 0
	stw      r0, 0x38(r30)

lbl_80202B44:
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x34(r30)
	bl       readByte__6StreamFv
	stb      r3, 0x24(r30)
	lwz      r3, pelletMgr__4Game@sda21(r13)
	lbz      r4, 0x24(r30)
	bl       getMgrByID__Q24Game9PelletMgrFUc
	stw      r3, 0x34(r30)
	lwz      r0, 0x34(r30)
	cmplwi   r0, 0
	beq      lbl_80202B80
	lbz      r0, 0x24(r30)
	cmplwi   r0, 0xff
	bne      lbl_80202BA0

lbl_80202B80:
	lis      r3, lbl_80481C08@ha
	lis      r4, lbl_80481C18@ha
	addi     r5, r4, lbl_80481C18@l
	lbz      r6, 0x24(r30)
	addi     r3, r3, lbl_80481C08@l
	li       r4, 0xa1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80202BA0:
	lwz      r3, 0x34(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r30)
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0x28(r30)
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0x2c(r30)
	mr       r3, r31
	bl       readFloat__6StreamFv
	stfs     f1, 0x30(r30)
	addi     r3, r1, 8
	bl       __ct__4ID32Fv
	mr       r4, r31
	addi     r3, r1, 8
	bl       read__4ID32FR6Stream
	lwz      r3, 0x34(r30)
	mr       r4, r31
	lwz      r5, 0x38(r30)
	lwz      r12, 0(r3)
	lwz      r6, 0x10(r1)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80202C28
 * Size:	000004
 */
void GenPellet::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	80202C2C
 * Size:	000004
 */
void GenPellet::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	80202C30
 * Size:	000058
 */
void GenPellet::updateUseList(Game::Generator*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, pelletMgr__4Game@sda21(r13)
	lbz      r4, 0x24(r31)
	bl       getMgrByID__Q24Game9PelletMgrFUc
	stw      r3, 0x34(r31)
	lwz      r4, 0x38(r31)
	lwz      r3, 0x34(r31)
	lwz      r4, 0(r4)
	bl       setUse__Q24Game13BasePelletMgrFi
	lwz      r4, 0x38(r31)
	lwz      r3, 0x34(r31)
	lwz      r4, 0(r4)
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80202C88
 * Size:	000078
 */
void GenPellet::generate(Game::Generator*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__Q24Game15CreatureInitArg@ha
	lis      r5, __vt__Q24Game6GenArg@ha
	stw      r0, 0x24(r1)
	addi     r6, r6, __vt__Q24Game15CreatureInitArg@l
	addi     r0, r5, __vt__Q24Game6GenArg@l
	lfs      f1, 0x9c(r4)
	lfs      f0, 0xa8(r4)
	lfs      f3, 0x98(r4)
	fadds    f4, f1, f0
	lfs      f2, 0xa4(r4)
	lfs      f1, 0x94(r4)
	lfs      f0, 0xa0(r4)
	fadds    f2, f3, f2
	addi     r4, r1, 8
	fadds    f0, f1, f0
	stw      r6, 8(r1)
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f2, 0x10(r1)
	stfs     f4, 0x14(r1)
	lwz      r12, 0xc(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80202D00
 * Size:	000040
 */
void GenPellet::getDebugInfo(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_80481C34@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, lbl_80481C34@l
	lwz      r6, 0x38(r3)
	lbz      r5, 0x24(r3)
	mr       r3, r4
	lwz      r6, 0(r6)
	mr       r4, r0
	crclr    6
	bl       sprintf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80202D40
 * Size:	0000D4
 */
void GenPellet::birth(Game::GenArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	mr       r6, r3
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	li       r31, 0
	lwz      r3, 0x34(r3)
	cmplwi   r3, 0
	beq      lbl_80202DFC
	lfs      f0, 4(r4)
	addi     r5, r1, 8
	lfs      f3, lbl_80519D48@sda21(r2)
	stfs     f0, 0x14(r1)
	lfs      f4, lbl_80519D44@sda21(r2)
	lfs      f0, 8(r4)
	stfs     f0, 0x18(r1)
	lfs      f0, 0xc(r4)
	addi     r4, r1, 0x14
	stfs     f0, 0x1c(r1)
	lfs      f2, 0x30(r6)
	lfs      f1, 0x2c(r6)
	lfs      f0, 0x28(r6)
	fmuls    f2, f3, f2
	fmuls    f1, f3, f1
	fmuls    f0, f3, f0
	fmuls    f2, f4, f2
	fmuls    f1, f4, f1
	fmuls    f0, f4, f0
	stfs     f2, 0x10(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r6, 0x38(r6)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80202DE0
	bl       allocateTexCaster__Q24Game6PelletFv
	b        lbl_80202DFC

lbl_80202DE0:
	lis      r3, lbl_80481C08@ha
	lis      r5, lbl_80481C40@ha
	addi     r3, r3, lbl_80481C08@l
	li       r4, 0xf5
	addi     r5, r5, lbl_80481C40@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80202DFC:
	lwz      r0, 0x34(r1)
	mr       r3, r31
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
} // namespace Game
