#include "System.h"
#include "Graphics.h"
#include "Viewport.h"
#include "Camera.h"
#include "Game/flockMgr.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_flockMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80481FA0
    lbl_80481FA0:
        .4byte 0x666C6F63
        .4byte 0x6B4D6772
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80481FB0
    lbl_80481FB0:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804BFB60
    lbl_804BFB60:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game12BaseFlockMgr
    __vt__Q24Game12BaseFlockMgr:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte do_update__Q24Game12BaseFlockMgrFv
        .4byte 0
        .4byte doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai
        .4byte isWeed__Q24Game12BaseFlockMgrFi
        .4byte fear__Q24Game12BaseFlockMgrFi
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515BD0
    lbl_80515BD0:
        .skip 0x4
    .global lbl_80515BD4
    lbl_80515BD4:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519EE8
    lbl_80519EE8:
        .4byte 0x46480000
    .global lbl_80519EEC
    lbl_80519EEC:
        .4byte 0x00000000
    .global lbl_80519EF0
    lbl_80519EF0:
        .float 0.5
    .global lbl_80519EF4
    lbl_80519EF4:
        .float 1.0
*/

namespace Game {
/*
 * --INFO--
 * Address:	8020EADC
 * Size:	0000E0
 * https://decomp.me/scratch/LNEhI
 */
void BaseFlockMgr::update()
{
	do_update_boundSphere();

	Graphics* gfx = sys->m_gfx;
	for (int i = 0; i < gfx->m_viewportCount; i++) {
		Viewport* vp = gfx->getViewport(i);

		if (!vp->viewable()) {
			m_isAgentVisible[i] = false;
			continue;
		}

		if (vp->m_camera->isVisible(_0C)) {
			m_isAgentVisible[i] = true;
		} else {
			m_isAgentVisible[i] = false;
		}
	}

	do_update();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	li       r29, 0
	lwz      r30, 0x24(r3)
	b        lbl_8020EB7C

lbl_8020EB1C:
	mr       r3, r30
	mr       r4, r29
	bl       getViewport__8GraphicsFi
	mr       r31, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020EB48
	addi     r0, r29, 0x1c
	li       r3, 0
	stbx     r3, r28, r0
	b        lbl_8020EB78

lbl_8020EB48:
	lwz      r3, 0x44(r31)
	addi     r4, r28, 0xc
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020EB6C
	addi     r0, r29, 0x1c
	li       r3, 1
	stbx     r3, r28, r0
	b        lbl_8020EB78

lbl_8020EB6C:
	addi     r0, r29, 0x1c
	li       r3, 0
	stbx     r3, r28, r0

lbl_8020EB78:
	addi     r29, r29, 1

lbl_8020EB7C:
	lwz      r0, 0x264(r30)
	cmpw     r29, r0
	blt      lbl_8020EB1C
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
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

} // namespace Game

/*
 * --INFO--
 * Address:	8020EBBC
 * Size:	000154
 */
void getNearestFlock__Q24Game12BaseFlockMgrFR10Vector3f(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lfs      f31, lbl_80519EE8@sda21(r2)
	mr       r28, r3
	mr       r29, r4
	li       r31, -1
	li       r30, 0
	b        lbl_8020ECC8

lbl_8020EBF8:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020ECC4
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0xc(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020ECC4
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r3)
	lfs      f0, 4(r29)
	lfs      f3, 8(r3)
	fsubs    f4, f1, f0
	lfs      f2, 8(r29)
	lfs      f1, 0(r3)
	lfs      f0, 0(r29)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80519EEC@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8020ECB0
	ble      lbl_8020ECB4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8020ECB4

lbl_8020ECB0:
	fmr      f1, f0

lbl_8020ECB4:
	fcmpo    cr0, f1, f31
	bge      lbl_8020ECC4
	fmr      f31, f1
	mr       r31, r30

lbl_8020ECC4:
	addi     r30, r30, 1

lbl_8020ECC8:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	blt      lbl_8020EBF8
	mr       r3, r31
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
// void BaseFlockMgr::getRandomFlock(void)
// {
// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8020ED10
 * Size:	00011C
 */
// void BaseFlockMgr::attackFlock(int, float)
// {
/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stfd     f31, 0x18(r1)
fmr      f31, f1
stw      r31, 0x14(r1)
li       r31, 0
stw      r30, 0x10(r1)
or.      r30, r4, r4
stw      r29, 0xc(r1)
mr       r29, r3
blt      lbl_8020ED5C
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
cmpw     r30, r3
bge      lbl_8020ED5C
li       r31, 1

lbl_8020ED5C:
clrlwi.  r0, r31, 0x18
bne      lbl_8020ED80
lis      r3, lbl_80481FA0@ha
lis      r5, lbl_80481FB0@ha
addi     r3, r3, lbl_80481FA0@l
li       r4, 0x5d
addi     r5, r5, lbl_80481FB0@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8020ED80:
mr       r3, r29
mr       r4, r30
lwz      r12, 0(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
mr       r0, r3
mr       r3, r29
lwz      r12, 0(r29)
mr       r31, r0
mr       r4, r30
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_8020EE08
mr       r3, r31
fmr      f1, f31
lwz      r12, 0xc(r31)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_8020EE00
mr       r3, r29
mr       r4, r31
lwz      r12, 0(r29)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
li       r3, 1
b        lbl_8020EE0C

lbl_8020EE00:
li       r3, 0
b        lbl_8020EE0C

lbl_8020EE08:
li       r3, 2

lbl_8020EE0C:
lwz      r0, 0x24(r1)
lfd      f31, 0x18(r1)
lwz      r31, 0x14(r1)
lwz      r30, 0x10(r1)
lwz      r29, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
*/
} // namespace Game

/*
 * --INFO--
 * Address:	8020EE2C
 * Size:	000294
 */
// void BaseFlockMgr::resolveCollision(float)
// {
/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stfd     f30, 0x20(r1)
psq_st   f30, 40(r1), 0, qr0
stmw     r27, 0xc(r1)
fmr      f30, f1
lfs      f0, lbl_80519EF0@sda21(r2)
mr       r27, r3
li       r30, 0
fmuls    f31, f0, f30

lbl_8020EE60:
li       r29, 0
b        lbl_8020F004

lbl_8020EE68:
mr       r3, r27
mr       r4, r29
lwz      r12, 0(r27)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_8020F000
li       r28, 0
b        lbl_8020EFE4

lbl_8020EE90:
mr       r3, r27
mr       r4, r28
lwz      r12, 0(r27)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_8020EFE0
cmpw     r29, r28
beq      lbl_8020EFE0
mr       r3, r27
mr       r4, r29
lwz      r12, 0(r27)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
mr       r31, r3
mr       r3, r27
lwz      r12, 0(r27)
mr       r4, r28
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lfs      f7, 8(r31)
lfs      f0, 8(r3)
lfs      f9, 0(r31)
fsubs    f5, f7, f0
lfs      f1, 0(r3)
lfs      f0, lbl_80519EEC@sda21(r2)
fsubs    f3, f9, f1
lfs      f8, 4(r31)
fmuls    f2, f5, f5
fmuls    f6, f3, f3
fadds    f1, f6, f2
fcmpo    cr0, f1, f0
ble      lbl_8020EF38
fmadds   f1, f3, f3, f2
fcmpo    cr0, f1, f0
ble      lbl_8020EF3C
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_8020EF3C

lbl_8020EF38:
fmr      f1, f0

lbl_8020EF3C:
fcmpo    cr0, f1, f30
bge      lbl_8020EFE0
lfs      f4, lbl_80519EEC@sda21(r2)
fadds    f0, f6, f4
fadds    f0, f2, f0
fcmpo    cr0, f0, f4
ble      lbl_8020EF74
fmadds   f0, f3, f3, f4
fadds    f1, f2, f0
fcmpo    cr0, f1, f4
ble      lbl_8020EF78
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_8020EF78

lbl_8020EF74:
fmr      f1, f4

lbl_8020EF78:
lfs      f0, lbl_80519EEC@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_8020EF98
lfs      f0, lbl_80519EF4@sda21(r2)
fdivs    f0, f0, f1
fmuls    f3, f3, f0
fmuls    f4, f4, f0
fmuls    f5, f5, f0

lbl_8020EF98:
fmuls    f3, f3, f31
fmuls    f4, f4, f31
fmuls    f5, f5, f31
fsubs    f2, f9, f3
fsubs    f1, f8, f4
fsubs    f0, f7, f5
stfs     f2, 0(r31)
stfs     f1, 4(r31)
stfs     f0, 8(r31)
lfs      f0, 0(r3)
lfs      f1, 4(r3)
fadds    f0, f0, f3
lfs      f2, 8(r3)
fadds    f1, f1, f4
fadds    f2, f2, f5
stfs     f0, 0(r3)
stfs     f1, 4(r3)
stfs     f2, 8(r3)

lbl_8020EFE0:
addi     r28, r28, 1

lbl_8020EFE4:
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 8(r12)
mtctr    r12
bctrl
cmpw     r28, r3
blt      lbl_8020EE90

lbl_8020F000:
addi     r29, r29, 1

lbl_8020F004:
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 8(r12)
mtctr    r12
bctrl
cmpw     r29, r3
blt      lbl_8020EE68
addi     r30, r30, 1
cmpwi    r30, 4
blt      lbl_8020EE60
li       r28, 0
b        lbl_8020F080

lbl_8020F034:
mr       r3, r27
mr       r4, r28
lwz      r12, 0(r27)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_8020F07C
mr       r3, r27
mr       r4, r28
lwz      r12, 0(r27)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r12, 0xc(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl

lbl_8020F07C:
addi     r28, r28, 1

lbl_8020F080:
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 8(r12)
mtctr    r12
bctrl
cmpw     r28, r3
blt      lbl_8020F034
psq_l    f31, 56(r1), 0, qr0
lfd      f31, 0x30(r1)
psq_l    f30, 40(r1), 0, qr0
lfd      f30, 0x20(r1)
lmw      r27, 0xc(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
*/
// }

/*
 * --INFO--
 * Address:	8020F0C0
 * Size:	000198
 */
// void BaseFlockMgr::doSimpleDraw(Viewport*, J3DModelData**, int)
// {
/*
stwu     r1, -0x60(r1)
mflr     r0
stw      r0, 0x64(r1)
stmw     r23, 0x3c(r1)
mr       r29, r3
mr       r30, r4
mr       r31, r6
lhz      r0, 0x18(r4)
add      r3, r29, r0
lbz      r0, 0x1c(r3)
cmplwi   r0, 0
beq      lbl_8020F244
lis      r3, j3dSys@ha
mr       r27, r5
addi     r28, r3, j3dSys@l
li       r26, 0
b        lbl_8020F23C

lbl_8020F104:
lwz      r5, 0(r27)
li       r0, 0
lwz      r4, 0x28(r5)
lwz      r3, 0xa0(r5)
lwz      r4, 0(r4)
lwz      r25, 0x58(r4)
stw      r3, 0x10c(r28)
lwz      r3, 0xa4(r5)
stw      r3, 0x110(r28)
lwz      r3, 0xac(r5)
stw      r3, 0x114(r28)
stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
b        lbl_8020F22C

lbl_8020F138:
mr       r3, r25
lwz      r12, 0(r25)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r3, 8(r25)
bl       loadPreDrawSetting__8J3DShapeCFv
li       r24, 0
b        lbl_8020F20C

lbl_8020F15C:
mr       r3, r29
mr       r4, r24
lwz      r12, 0(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
mr       r0, r3
mr       r3, r29
lwz      r12, 0(r29)
mr       r23, r0
mr       r4, r24
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_8020F208
mr       r3, r23
lwz      r12, 0xc(r23)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_8020F208
lbz      r0, 0x40(r23)
cmpw     r0, r26
bne      lbl_8020F208
mr       r3, r30
li       r4, 1
bl       getMatrix__8ViewportFb
addi     r4, r23, 0x10
addi     r5, r1, 8
bl       PSMTXConcat
addi     r3, r1, 8
li       r4, 0
bl       GXLoadPosMtxImm
addi     r3, r1, 8
li       r4, 0
bl       GXLoadNrmMtxImm
lwz      r3, 8(r25)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl

lbl_8020F208:
addi     r24, r24, 1

lbl_8020F20C:
mr       r3, r29
lwz      r12, 0(r29)
lwz      r12, 8(r12)
mtctr    r12
bctrl
cmpw     r24, r3
blt      lbl_8020F15C
lwz      r25, 4(r25)

lbl_8020F22C:
cmplwi   r25, 0
bne      lbl_8020F138
addi     r27, r27, 4
addi     r26, r26, 1

lbl_8020F23C:
cmpw     r26, r31
blt      lbl_8020F104

lbl_8020F244:
lmw      r23, 0x3c(r1)
lwz      r0, 0x64(r1)
mtlr     r0
addi     r1, r1, 0x60
blr
*/
// }

// } // namespace Game

/*
 * --INFO--
 * Address:	8020F258
 * Size:	000028
 */
void __sinit_flockMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804BFB60@ha
	stw      r0, lbl_80515BD0@sda21(r13)
	stfsu    f0, lbl_804BFB60@l(r3)
	stfs     f0, lbl_80515BD4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
