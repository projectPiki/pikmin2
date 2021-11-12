#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483EA0
    lbl_80483EA0:
        .asciz "texCaster"
        .skip 2
    .global lbl_80483EAC
    lbl_80483EAC:
        .asciz "texCaster.cpp"
        .skip 2
    .global lbl_80483EBC
    lbl_80483EBC:
        .asciz "P2Assert"
        .skip 3
        .asciz "user/Kando/texCaster/arc.szs"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q29TexCaster6Caster
    __vt__Q29TexCaster6Caster:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29TexCaster6CasterFv
        .4byte getChildCount__5CNodeFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sInstance__Q29TexCaster3Mgr
    sInstance__Q29TexCaster3Mgr:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A5D8
    lbl_8051A5D8:
        .4byte 0x00000000
    .global lbl_8051A5DC
    lbl_8051A5DC:
        .float 1.0
    .global lbl_8051A5E0
    lbl_8051A5E0:
        .4byte 0x437F0000
    .global lbl_8051A5E4
    lbl_8051A5E4:
        .4byte 0x7465782E
        .4byte 0x62746900
    .global lbl_8051A5EC
    lbl_8051A5EC:
        .float 0.1
    .global lbl_8051A5F0
    lbl_8051A5F0:
        .float 0.5
    .global lbl_8051A5F4
    lbl_8051A5F4:
        .4byte 0x3E6147AE
    .global lbl_8051A5F8
    lbl_8051A5F8:
        .4byte 0x3D000000
    .global lbl_8051A5FC
    lbl_8051A5FC:
        .4byte 0x41F00000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
TexCaster::Caster::Caster(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023C95C
 * Size:	000060
 */
TexCaster::Caster::~Caster(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8023C9A0
	lis      r5, __vt__Q29TexCaster6Caster@ha
	li       r4, 0
	addi     r0, r5, __vt__Q29TexCaster6Caster@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8023C9A0
	mr       r3, r30
	bl       __dl__FPv

lbl_8023C9A0:
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
 * Address:	........
 * Size:	000014
 */
void TexCaster::Caster::show(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023C9BC
 * Size:	000014
 */
void TexCaster::Caster::hide(void)
{
	/*
	lfs      f0, lbl_8051A5D8@sda21(r2)
	li       r0, 0
	stfs     f0, 0x40(r3)
	stb      r0, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023C9D0
 * Size:	000080
 */
void TexCaster::Caster::fadein(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	fmr      f31, f1
	lfs      f0, lbl_8051A5D8@sda21(r2)
	mr       r31, r3
	fcmpo    cr0, f31, f0
	bgt      lbl_8023CA18
	lis      r3, lbl_80483EAC@ha
	lis      r5, lbl_80483EBC@ha
	addi     r3, r3, lbl_80483EAC@l
	li       r4, 0x3b
	addi     r5, r5, lbl_80483EBC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023CA18:
	lfs      f1, lbl_8051A5DC@sda21(r2)
	li       r0, 2
	lfs      f0, lbl_8051A5D8@sda21(r2)
	fdivs    f1, f1, f31
	stfs     f1, 0x44(r31)
	stfs     f0, 0x40(r31)
	stb      r0, 0x3c(r31)
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void TexCaster::Caster::fadeout(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void TexCaster::Caster::makeDL(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void TexCaster::Caster::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000138
 */
void TexCaster::Caster::draw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TexCaster::Caster::drawLine(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
TexCaster::Mgr::Mgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
TexCaster::Mgr::~Mgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023CA50
 * Size:	0000A0
 */
void TexCaster::Mgr::globalInstance(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r0, sInstance__Q29TexCaster3Mgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8023CAD8
	li       r3, 0x50
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8023CACC
	li       r0, 0
	addi     r30, r31, 8
	stw      r0, 0(r31)
	mr       r3, r30
	stw      r0, 4(r31)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29TexCaster6Caster@ha
	li       r0, 0
	addi     r3, r3, __vt__Q29TexCaster6Caster@l
	lfs      f0, lbl_8051A5D8@sda21(r2)
	stw      r3, 0(r30)
	stw      r0, 0x28(r30)
	stw      r0, 0x2c(r30)
	stw      r0, 0x30(r30)
	stw      r0, 0x34(r30)
	stw      r0, 0x38(r30)
	stb      r0, 0x3c(r30)
	stfs     f0, 0x40(r30)
	stfs     f0, 0x44(r30)

lbl_8023CACC:
	stw      r31, sInstance__Q29TexCaster3Mgr@sda21(r13)
	mr       r3, r31
	bl       loadResource__Q29TexCaster3MgrFv

lbl_8023CAD8:
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
 * Address:	8023CAF0
 * Size:	00006C
 */
void TexCaster::Mgr::deleteInstance(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, sInstance__Q29TexCaster3Mgr@sda21(r13)
	cmplwi   r31, 0
	beq      lbl_8023CB48
	beq      lbl_8023CB40
	li       r3, 0
	addic.   r0, r31, 8
	stw      r3, sInstance__Q29TexCaster3Mgr@sda21(r13)
	beq      lbl_8023CB38
	lis      r4, __vt__Q29TexCaster6Caster@ha
	addi     r3, r31, 8
	addi     r0, r4, __vt__Q29TexCaster6Caster@l
	li       r4, 0
	stw      r0, 8(r31)
	bl       __dt__5CNodeFv

lbl_8023CB38:
	mr       r3, r31
	bl       __dl__FPv

lbl_8023CB40:
	li       r0, 0
	stw      r0, sInstance__Q29TexCaster3Mgr@sda21(r13)

lbl_8023CB48:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023CB5C
 * Size:	0000E8
 */
void TexCaster::Mgr::loadResource(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80483EA0@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	li       r6, 1
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80483EA0@l
	li       r4, 1
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r31, 0x28
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	cmplwi   r3, 0
	bne      lbl_8023CBB0
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x120
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023CBB0:
	li       r0, 1
	stw      r0, 0(r29)
	lwz      r0, 0(r29)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r29)
	addi     r3, r2, lbl_8051A5E4@sda21
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r30, r3, r3
	bne      lbl_8023CBF0
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x125
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023CBF0:
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8023CC20
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x28(r31)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_8023CC20:
	lwz      r3, 4(r29)
	stw      r31, 0(r3)
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
 * Address:	8023CC44
 * Size:	000550
 */
void TexCaster::Mgr::create(Sys::Sphere&, float)
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
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stfd     f26, 0xb0(r1)
	psq_st   f26, 184(r1), 0, qr0
	stfd     f25, 0xa0(r1)
	psq_st   f25, 168(r1), 0, qr0
	stfd     f24, 0x90(r1)
	psq_st   f24, 152(r1), 0, qr0
	stfd     f23, 0x80(r1)
	psq_st   f23, 136(r1), 0, qr0
	stfd     f22, 0x70(r1)
	psq_st   f22, 120(r1), 0, qr0
	stfd     f21, 0x60(r1)
	psq_st   f21, 104(r1), 0, qr0
	stfd     f20, 0x50(r1)
	psq_st   f20, 88(r1), 0, qr0
	stmw     r23, 0x2c(r1)
	lfs      f0, lbl_8051A5EC@sda21(r2)
	mr       r30, r4
	lfs      f2, lbl_8051A5F0@sda21(r2)
	mr       r29, r3
	stfs     f0, 0x18(r1)
	fmr      f30, f1
	lfs      f0, lbl_8051A5F4@sda21(r2)
	addi     r4, r1, 8
	stfs     f2, 0x1c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lfs      f1, 0(r30)
	stfs     f1, 8(r1)
	lfs      f1, 4(r30)
	stfs     f1, 0xc(r1)
	lfs      f1, 8(r30)
	stfs     f1, 0x10(r1)
	lfs      f1, 0xc(r30)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f2, 0x1c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	cmpwi    r0, 0
	bne      lbl_8023CE7C
	li       r0, 2
	li       r3, 0x58
	stw      r0, 0x24(r1)
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	li       r5, 0
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r6, 0xc
	li       r7, 6
	bl       __construct_new_array
	stw      r3, 0x20(r1)
	lfs      f7, lbl_8051A5D8@sda21(r2)
	lfs      f0, 0(r30)
	lfs      f8, 0xc(r30)
	lfs      f1, 4(r30)
	fsubs    f5, f0, f8
	lfs      f2, 8(r30)
	fsubs    f4, f1, f7
	fsubs    f3, f2, f7
	fsubs    f6, f5, f7
	fsubs    f10, f4, f7
	fadds    f9, f0, f8
	stfs     f6, 0(r3)
	fsubs    f11, f3, f8
	fadds    f1, f1, f7
	stfs     f10, 4(r3)
	fadds    f0, f2, f7
	fadds    f2, f5, f7
	stfs     f11, 8(r3)
	fadds    f5, f4, f7
	fadds    f4, f3, f8
	lwz      r3, 0x20(r1)
	fadds    f3, f9, f7
	fadds    f12, f1, f7
	stfs     f2, 0xc(r3)
	fadds    f13, f0, f8
	fsubs    f2, f9, f7
	stfs     f5, 0x10(r3)
	fsubs    f1, f1, f7
	fsubs    f0, f0, f8
	stfs     f4, 0x14(r3)
	lwz      r3, 0x20(r1)
	stfs     f3, 0x18(r3)
	stfs     f12, 0x1c(r3)
	stfs     f13, 0x20(r3)
	lwz      r3, 0x20(r1)
	stfs     f2, 0x24(r3)
	stfs     f1, 0x28(r3)
	stfs     f0, 0x2c(r3)
	lwz      r3, 0x20(r1)
	stfs     f6, 0x30(r3)
	stfs     f10, 0x34(r3)
	stfs     f11, 0x38(r3)
	lwz      r3, 0x20(r1)
	stfs     f3, 0x3c(r3)
	stfs     f12, 0x40(r3)
	stfs     f13, 0x44(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 4(r3)
	fadds    f0, f1, f0
	stfs     f0, 4(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x10(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x10(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x1c(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x1c(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x28(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x28(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x34(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x34(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x40(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x40(r3)

lbl_8023CE7C:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8023CEC4
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29TexCaster6Caster@ha
	li       r0, 0
	addi     r3, r3, __vt__Q29TexCaster6Caster@l
	lfs      f0, lbl_8051A5D8@sda21(r2)
	stw      r3, 0(r31)
	stw      r0, 0x28(r31)
	stw      r0, 0x2c(r31)
	stw      r0, 0x30(r31)
	stw      r0, 0x34(r31)
	stw      r0, 0x38(r31)
	stb      r0, 0x3c(r31)
	stfs     f0, 0x40(r31)
	stfs     f0, 0x44(r31)

lbl_8023CEC4:
	lfs      f0, 0(r30)
	stfs     f0, 0x18(r31)
	lfs      f0, 4(r30)
	stfs     f0, 0x1c(r31)
	lfs      f0, 8(r30)
	stfs     f0, 0x20(r31)
	lfs      f0, 0xc(r30)
	stfs     f0, 0x24(r31)
	lwz      r0, 0x20(r1)
	stw      r0, 0x2c(r31)
	lwz      r0, 0x24(r1)
	stw      r0, 0x28(r31)
	lwz      r0, 0x28(r31)
	mulli    r0, r0, 6
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x38(r31)
	li       r24, 0
	lfs      f29, lbl_8051A5F0@sda21(r2)
	li       r25, 0
	lfs      f27, lbl_8051A5F8@sda21(r2)
	lfs      f28, lbl_8051A5FC@sda21(r2)
	b        lbl_8023CFE0

lbl_8023CF20:
	lfs      f0, 0xc(r30)
	mulli    r27, r25, 0xc
	lfs      f23, 0(r30)
	mr       r26, r25
	fdivs    f0, f28, f0
	lfs      f22, 8(r30)
	slwi     r28, r25, 3
	li       r23, 0
	fmuls    f31, f27, f0

lbl_8023CF44:
	lwz      r0, 0x2c(r31)
	fmr      f1, f30
	add      r3, r0, r27
	lfs      f2, 0(r3)
	lfs      f0, 8(r3)
	fsubs    f21, f2, f23
	fsubs    f20, f0, f22
	bl       sin
	frsp     f26, f1
	fmr      f1, f30
	bl       cos
	frsp     f25, f1
	fmr      f1, f30
	bl       cos
	frsp     f24, f1
	fmr      f1, f30
	bl       sin
	frsp     f2, f1
	addi     r23, r23, 1
	fmuls    f1, f21, f24
	lwz      r3, 0x38(r31)
	fmuls    f0, f21, f26
	cmpwi    r23, 3
	fmadds   f1, f20, f2, f1
	addi     r0, r28, 4
	fmsubs   f2, f20, f25, f0
	addi     r26, r26, 1
	addi     r27, r27, 0xc
	fmuls    f0, f1, f31
	fmuls    f2, f2, f31
	fadds    f1, f29, f0
	fadds    f0, f29, f2
	stfsx    f1, r3, r28
	addi     r28, r28, 8
	lwz      r3, 0x38(r31)
	stfsx    f0, r3, r0
	blt      lbl_8023CF44
	addi     r25, r25, 3
	addi     r24, r24, 1

lbl_8023CFE0:
	lwz      r0, 0x28(r31)
	cmpw     r24, r0
	blt      lbl_8023CF20
	mulli    r3, r0, 0xc
	li       r4, 0x20
	addi     r0, r3, 0x22
	rlwinm   r0, r0, 0, 0, 0x1a
	stw      r0, 0x34(r31)
	lwz      r3, 0x34(r31)
	bl       __nwa__FUli
	stw      r3, 0x30(r31)
	li       r4, 0
	li       r0, 0x90
	lwz      r8, 0x30(r31)
	mr       r7, r4
	lwz      r3, 0x34(r31)
	addi     r6, r8, 3
	stb      r0, 0(r8)
	add      r5, r8, r3
	lwz      r0, 0x28(r31)
	mulli    r0, r0, 3
	srawi    r0, r0, 8
	stb      r0, 1(r8)
	lwz      r0, 0x28(r31)
	mulli    r0, r0, 3
	stb      r0, 2(r8)
	b        lbl_8023D09C

lbl_8023D04C:
	rlwinm   r8, r7, 0x18, 0x18, 0x1f
	addi     r3, r7, 1
	stb      r8, 0(r6)
	addi     r0, r7, 2
	rlwinm   r9, r3, 0x18, 0x18, 0x1f
	addi     r4, r4, 1
	stb      r7, 1(r6)
	rlwinm   r10, r0, 0x18, 0x18, 0x1f
	stb      r8, 2(r6)
	stb      r7, 3(r6)
	addi     r7, r7, 3
	stb      r9, 4(r6)
	stb      r3, 5(r6)
	stb      r9, 6(r6)
	stb      r3, 7(r6)
	stb      r10, 8(r6)
	stb      r0, 9(r6)
	stb      r10, 0xa(r6)
	stb      r0, 0xb(r6)
	addi     r6, r6, 0xc

lbl_8023D09C:
	lwz      r0, 0x28(r31)
	cmpw     r4, r0
	blt      lbl_8023D04C
	cmplw    r6, r5
	subf     r3, r6, r5
	li       r4, 0
	bge      lbl_8023D104
	rlwinm.  r0, r3, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_8023D0F4

lbl_8023D0C4:
	stb      r4, 0(r6)
	stb      r4, 1(r6)
	stb      r4, 2(r6)
	stb      r4, 3(r6)
	stb      r4, 4(r6)
	stb      r4, 5(r6)
	stb      r4, 6(r6)
	stb      r4, 7(r6)
	addi     r6, r6, 8
	bdnz     lbl_8023D0C4
	andi.    r3, r3, 7
	beq      lbl_8023D104

lbl_8023D0F4:
	mtctr    r3

lbl_8023D0F8:
	stb      r4, 0(r6)
	addi     r6, r6, 1
	bdnz     lbl_8023D0F8

lbl_8023D104:
	lwz      r3, 0x30(r31)
	lwz      r4, 0x34(r31)
	bl       DCFlushRange
	mr       r4, r31
	addi     r3, r29, 8
	bl       add__5CNodeFP5CNode
	mr       r3, r31
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	psq_l    f26, 184(r1), 0, qr0
	lfd      f26, 0xb0(r1)
	psq_l    f25, 168(r1), 0, qr0
	lfd      f25, 0xa0(r1)
	psq_l    f24, 152(r1), 0, qr0
	lfd      f24, 0x90(r1)
	psq_l    f23, 136(r1), 0, qr0
	lfd      f23, 0x80(r1)
	psq_l    f22, 120(r1), 0, qr0
	lfd      f22, 0x70(r1)
	psq_l    f21, 104(r1), 0, qr0
	lfd      f21, 0x60(r1)
	psq_l    f20, 88(r1), 0, qr0
	lfd      f20, 0x50(r1)
	lmw      r23, 0x2c(r1)
	lwz      r0, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void TexCaster::Mgr::getTexture(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void TexCaster::Mgr::drawInit(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023D194
 * Size:	000288
 */
void TexCaster::Mgr::draw(Graphics&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 0
	bl       GXSetCullMode
	bl       GXClearVtxDesc
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 0xf
	li       r5, 8
	li       r6, 2
	li       r7, 0xf
	bl       GXSetTevColorIn
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 3
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 0
	li       r4, 7
	li       r5, 1
	li       r6, 4
	li       r7, 7
	bl       GXSetTevAlphaIn
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r3, 9
	li       r4, 3
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 3
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode
	li       r3, 1
	li       r4, 3
	li       r5, 0
	bl       GXSetZMode
	lwz      r30, 0x18(r30)
	lfs      f31, lbl_8051A5E0@sda21(r2)
	b        lbl_8023D3F4

lbl_8023D2BC:
	lbz      r0, 0x3c(r30)
	cmpwi    r0, 2
	beq      lbl_8023D2DC
	bge      lbl_8023D2D0
	b        lbl_8023D350

lbl_8023D2D0:
	cmpwi    r0, 4
	bge      lbl_8023D350
	b        lbl_8023D318

lbl_8023D2DC:
	lwz      r3, sys@sda21(r13)
	lfs      f3, 0x44(r30)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x40(r30)
	lfs      f0, lbl_8051A5DC@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x40(r30)
	lfs      f1, 0x40(r30)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8023D350
	stfs     f0, 0x40(r30)
	li       r0, 1
	stb      r0, 0x3c(r30)
	b        lbl_8023D350

lbl_8023D318:
	lwz      r3, sys@sda21(r13)
	lfs      f3, 0x44(r30)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x40(r30)
	lfs      f0, lbl_8051A5D8@sda21(r2)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x40(r30)
	lfs      f1, 0x40(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8023D350
	stfs     f0, 0x40(r30)
	li       r0, 0
	stb      r0, 0x3c(r30)

lbl_8023D350:
	lfs      f0, 0x40(r30)
	addi     r4, r1, 0xc
	li       r3, 1
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	stb      r0, 0xb(r1)
	stb      r0, 0xa(r1)
	stb      r0, 9(r1)
	stb      r0, 8(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetTevColor
	lwz      r31, sInstance__Q29TexCaster3Mgr@sda21(r13)
	lwz      r0, 0(r31)
	cmpwi    r0, 0
	bgt      lbl_8023D3B4
	lis      r3, lbl_80483EAC@ha
	lis      r5, lbl_80483EBC@ha
	addi     r3, r3, lbl_80483EAC@l
	li       r4, 0x19a
	addi     r5, r5, lbl_80483EBC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023D3B4:
	lwz      r3, 4(r31)
	li       r4, 0
	lwz      r3, 0(r3)
	bl       load__10JUTTextureF11_GXTexMapID
	lwz      r4, 0x2c(r30)
	li       r3, 9
	li       r5, 0xc
	bl       GXSetArray
	lwz      r4, 0x38(r30)
	li       r3, 0xd
	li       r5, 8
	bl       GXSetArray
	lwz      r3, 0x30(r30)
	lwz      r4, 0x34(r30)
	bl       GXCallDisplayList
	lwz      r30, 4(r30)

lbl_8023D3F4:
	cmplwi   r30, 0
	bne      lbl_8023D2BC
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
