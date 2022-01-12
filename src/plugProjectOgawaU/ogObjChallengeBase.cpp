#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogObjChallengeBase_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804DA058
    lbl_804DA058:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q32og9newScreen16ObjChallengeBase
    __vt__Q32og9newScreen16ObjChallengeBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen16ObjChallengeBaseFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen16ObjChallengeBaseFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte
   doStart__Q32og9newScreen16ObjChallengeBaseFPCQ26Screen13StartSceneArg .4byte
   doEnd__Q32og9newScreen16ObjChallengeBaseFPCQ26Screen11EndSceneArg .4byte
   doCreate__Q26Screen7ObjBaseFP10JKRArchive .4byte
   doUpdateFadein__Q26Screen7ObjBaseFv .4byte
   doUpdateFadeinFinish__Q26Screen7ObjBaseFv .4byte
   doUpdate__Q26Screen7ObjBaseFv .4byte doUpdateFinish__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeout__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q26Screen7ObjBaseFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte
   doCreateAfter__Q32og9newScreen16ObjChallengeBaseFP10JKRArchivePQ32og6Screen18CallBack_CounterRV

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msBaseVal__Q32og9newScreen16ObjChallengeBase
    msBaseVal__Q32og9newScreen16ObjChallengeBase:
        .skip 0x1C

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515EB0
    lbl_80515EB0:
        .skip 0x4
    .global lbl_80515EB4
    lbl_80515EB4:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DF40
    lbl_8051DF40:
        .4byte 0x00000000
    .global lbl_8051DF44
    lbl_8051DF44:
        .float 0.3
    .global lbl_8051DF48
    lbl_8051DF48:
        .float 0.1
        .4byte 0x00000000
*/

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	8032C8A0
 * Size:	000098
 */
ObjChallengeBase::ObjChallengeBase(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen7ObjBaseFv
	lis      r3, __vt__Q32og9newScreen16ObjChallengeBase@ha
	lfs      f0, lbl_8051DF40@sda21(r2)
	addi     r3, r3, __vt__Q32og9newScreen16ObjChallengeBase@l
	li       r5, -1
	stw      r3, 0(r31)
	addi     r3, r3, 0x10
	li       r4, 0
	li       r0, 0xff
	stw      r3, 0x18(r31)
	mr       r3, r31
	stfs     f0, 0x38(r31)
	stfs     f0, 0x3c(r31)
	stw      r5, 0x54(r31)
	stw      r5, 0x58(r31)
	stb      r4, 0x48(r31)
	stb      r4, 0x49(r31)
	stw      r4, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x44(r31)
	stb      r0, 0x54(r31)
	stb      r0, 0x55(r31)
	stb      r0, 0x56(r31)
	stb      r0, 0x57(r31)
	stb      r4, 0x58(r31)
	stb      r4, 0x59(r31)
	stb      r4, 0x5a(r31)
	stb      r4, 0x5b(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032C938
 * Size:	0000AC
 */
ObjChallengeBase::~ObjChallengeBase(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8032C9C8
	lis      r4, __vt__Q32og9newScreen16ObjChallengeBase@ha
	addi     r4, r4, __vt__Q32og9newScreen16ObjChallengeBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_8032C9B8
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_8032C9B8
	lis      r4, __vt__Q26Screen8IObjBase@ha
	addi     r4, r4, __vt__Q26Screen8IObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	bl       del__5CNodeFv
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_8032C9B8:
	extsh.   r0, r31
	ble      lbl_8032C9C8
	mr       r3, r30
	bl       __dl__FPv

lbl_8032C9C8:
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
 * Address:	8032C9E4
 * Size:	0000A0
 */
void ObjChallengeBase::doCreateAfter((JKRArchive*, og::Screen::CallBack_CounterRV*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0xC
	  lwz       r0, 0x6C(r5)
	  stw       r0, 0x4C(r31)
	  lwz       r4, 0x4C(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x138(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xC(r1)
	  addi      r3, r1, 0x8
	  stb       r0, 0x54(r31)
	  lbz       r0, 0xD(r1)
	  stb       r0, 0x55(r31)
	  lbz       r0, 0xE(r1)
	  stb       r0, 0x56(r31)
	  lbz       r0, 0xF(r1)
	  stb       r0, 0x57(r31)
	  lwz       r4, 0x4C(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x134(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x58(r31)
	  lbz       r0, 0x9(r1)
	  stb       r0, 0x59(r31)
	  lbz       r0, 0xA(r1)
	  stb       r0, 0x5A(r31)
	  lbz       r0, 0xB(r1)
	  stb       r0, 0x5B(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032CA84
 * Size:	000014
 */
void ObjChallengeBase::doStart(Screen::StartSceneArg const*)
{
	/*
	lfs      f0, lbl_8051DF40@sda21(r2)
	stfs     f0, 0x38(r3)
	stfs     f0, 0x3c(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032CA98
 * Size:	000010
 */
void ObjChallengeBase::doEnd(Screen::EndSceneArg const*)
{
	/*
	lfs      f0, lbl_8051DF40@sda21(r2)
	stfs     f0, 0x38(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032CAA8
 * Size:	0001D0
 */
void ObjChallengeBase::updateTimer(float, float)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	fmr      f30, f1
	lwz      r0, 0x5c(r3)
	fmr      f31, f2
	cmplwi   r0, 0
	beq      lbl_8032CB3C
	lfs      f2, 0x50(r31)
	lfs      f1, lbl_8051DF40@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8032CB3C
	lwz      r3, sys@sda21(r13)
	fcmpo    cr0, f31, f1
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0x50(r31)
	ble      lbl_8032CB1C
	lfs      f0, 0x50(r31)
	fcmpo    cr0, f0, f1
	bge      lbl_8032CB1C
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setTimeCarry__Q22og5SoundFv

lbl_8032CB1C:
	lfs      f0, lbl_8051DF40@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8032CB34
	fsubs    f0, f30, f31
	stfs     f0, 0x44(r31)
	b        lbl_8032CB40

lbl_8032CB34:
	stfs     f30, 0x44(r31)
	b        lbl_8032CB40

lbl_8032CB3C:
	stfs     f30, 0x44(r31)

lbl_8032CB40:
	lfs      f1, 0x44(r31)
	bl       __cvt_fp2unsigned
	stw      r3, 0x40(r31)
	lis      r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@ha
	addi     r3, r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@l
	lwz      r4, 0x40(r31)
	lwz      r0, 0x10(r3)
	cmplw    r4, r0
	bgt      lbl_8032CBB0
	lwz      r0, 8(r3)
	addi     r4, r1, 0x14
	stw      r0, 0x14(r1)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	lis      r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@ha
	addi     r4, r1, 0x10
	addi     r3, r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@l
	lwz      r0, 0xc(r3)
	stw      r0, 0x10(r1)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl
	b        lbl_8032CBF0

lbl_8032CBB0:
	lwz      r0, 0x54(r31)
	addi     r4, r1, 0xc
	stw      r0, 0xc(r1)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x58(r31)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl

lbl_8032CBF0:
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_8051DF40@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8032CC54
	lwz      r0, 0x40(r31)
	cmplwi   r0, 0x1e
	bne      lbl_8032CC2C
	lbz      r0, 0x48(r31)
	cmplwi   r0, 0
	bne      lbl_8032CC2C
	li       r0, 1
	stb      r0, 0x48(r31)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setChime__Q22og5SoundFv

lbl_8032CC2C:
	lwz      r0, 0x40(r31)
	cmplwi   r0, 0xa
	bne      lbl_8032CC54
	lbz      r0, 0x49(r31)
	cmplwi   r0, 0
	bne      lbl_8032CC54
	li       r0, 1
	stb      r0, 0x49(r31)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setChime__Q22og5SoundFv

lbl_8032CC54:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032CC78
 * Size:	000008
 */
void ObjChallengeBase::setSubLevel(unsigned long a1)
{
	// Generated from stw r4, 0x5C(r3)
	_5C = a1;
}

} // namespace newScreen

namespace Screen {

} // namespace Screen

/*
 * --INFO--
 * Address:	8032CC80
 * Size:	000008
 */
u32 ObjBase::doUpdateFadein(void) { return 0x1; }

/*
 * --INFO--
 * Address:	8032CC88
 * Size:	000004
 */
void ObjBase::doUpdateFadeinFinish(void) { }

/*
 * --INFO--
 * Address:	8032CC8C
 * Size:	000008
 */
u32 ObjBase::doUpdate(void) { return 0x0; }

/*
 * --INFO--
 * Address:	8032CC94
 * Size:	000004
 */
void ObjBase::doUpdateFinish(void) { }

/*
 * --INFO--
 * Address:	8032CC98
 * Size:	000004
 */
void ObjBase::doUpdateFadeoutFinish(void) { }

} // namespace og

/*
 * --INFO--
 * Address:	8032CC9C
 * Size:	00008C
 */
void __sinit_ogObjChallengeBase_cpp(void)
{
	/*
	lis      r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@ha
	lis      r4, __float_nan@ha
	li       r9, -1
	lfs      f2, __float_nan@l(r4)
	addi     r7, r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@l
	lfs      f1, lbl_8051DF44@sda21(r2)
	li       r3, 0xa
	lfs      f0, lbl_8051DF48@sda21(r2)
	lis      r4, lbl_804DA058@ha
	li       r0, 0x1e
	addi     r8, r4, lbl_804DA058@l
	stw      r9, 8(r7)
	li       r6, 0xff
	li       r5, 0
	stw      r9, 0xc(r7)
	li       r4, 0x40
	stw      r9, lbl_80515EB0@sda21(r13)
	stfs     f2, lbl_80515EB4@sda21(r13)
	stfs     f2, 0(r8)
	stfs     f2, 4(r8)
	stfs     f2, 8(r8)
	stfs     f1, 0(r7)
	stfs     f0, 4(r7)
	stb      r6, 8(r7)
	stb      r5, 9(r7)
	stb      r5, 0xa(r7)
	stb      r6, 0xb(r7)
	stb      r4, 0xc(r7)
	stb      r5, 0xd(r7)
	stb      r5, 0xe(r7)
	stb      r5, 0xf(r7)
	stw      r3, 0x10(r7)
	stw      r0, 0x14(r7)
	stw      r3, 0x18(r7)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032CD28
 * Size:	000008
 */
@24 @og::newScreen::ObjChallengeBase::~ObjChallengeBase(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q32og9newScreen16ObjChallengeBaseFv
	*/
}
