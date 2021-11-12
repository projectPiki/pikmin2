
/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28Morimura9TTestBase
    __vt__Q28Morimura9TTestBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura9TTestBaseFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Morimura9TTestBaseFv"
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
        .4byte doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q26Screen7ObjBaseFP10JKRArchive
        .4byte doUpdateFadein__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdate__Q26Screen7ObjBaseFv
        .4byte doUpdateFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q26Screen7ObjBaseFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global mIsSection__Q28Morimura9TTestBase
    mIsSection__Q28Morimura9TTestBase:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    lbl_8051E2F0:
        .float 0.0
    lbl_8051E2F4:
        .float 0.5
    lbl_8051E2F8:
        .float 255.0
    lbl_8051E2FC:
        .float 1.0
*/
#ifndef _MORIMURA_TESTBASE_H
#define _MORIMURA_TESTBASE_H

#include "types.h"
#include "Vector3.h"

#include "Dolphin/string.h"
#include "JSystem/JKR/JKRDisposer.h"

namespace Screen {
struct ObjBase;
} // namespace Screen

namespace Morimura {
struct TTestBase {
	// virtual functions go here

	// _00 vtbl
	ObjBase* _04;         // _04
	ObjBase* _08;         // _08
	ObjBase* _0C;         // _0C
	ObjBase* _10;         // _10
	char* name;           // _14
	JKRDisposer disposer; // _18
	int _30;              // _30
	SceneBase* pOwner;    // _34
	float _38;            // _38
	float _3C;            // _3C
	float _40;            // _40
	uchar _44;            // _44
	uchar _45;            // _45
	char* new_name;       // _46

	TTestBase(char*);
}; // tentatively size 0x4A

} // namespace Morimura

#endif

namespace Morimura {

/*
 * --INFO--
 * Address:	803491C8
 * Size:	000084
 */
TTestBase::TTestBase(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q26Screen7ObjBaseFv
	lis      r3, __vt__Q28Morimura9TTestBase@ha
	lfs      f1, lbl_8051E2F0@sda21(r2)
	addi     r3, r3, __vt__Q28Morimura9TTestBase@l
	lfs      f0, lbl_8051E2F4@sda21(r2)
	stw      r3, 0(r30)
	addi     r3, r3, 0x10
	li       r0, 0
	mr       r4, r31
	stw      r3, 0x18(r30)
	addi     r3, r30, 0x46
	stfs     f1, 0x38(r30)
	stfs     f0, 0x3c(r30)
	stfs     f1, 0x40(r30)
	stb      r0, 0x44(r30)
	stb      r0, 0x45(r30)
	bl       strcpy
	addi     r0, r30, 0x46
	mr       r3, r30
	stw      r0, 0x14(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034924C
 * Size:	000020
 */
void TTestBase::doStart(Screen::StartSceneArg const*)
{
	/*
	lfs      f0, lbl_8051E2F0@sda21(r2)
	li       r0, 0
	stfs     f0, 0x40(r3)
	stfs     f0, 0x38(r3)
	stb      r0, 0x44(r3)
	stb      r0, 0x45(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034926C
 * Size:	000010
 */
void TTestBase::doEnd(Screen::EndSceneArg const*)
{
	/*
	lfs      f0, lbl_8051E2F0@sda21(r2)
	stfs     f0, 0x38(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034927C
 * Size:	0000B0
 */
void TTestBase::doUpdateFadein(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x38(r3)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x38(r3)
	lfs      f0, 0x38(r3)
	lfs      f1, 0x3c(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_803492B8
	stfs     f1, 0x38(r31)

lbl_803492B8:
	lfs      f2, 0x38(r31)
	mr       r3, r31
	lfs      f0, 0x3c(r31)
	lfs      f1, lbl_8051E2F8@sda21(r2)
	fdivs    f0, f2, f0
	stfs     f0, 0x40(r31)
	lfs      f0, 0x40(r31)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	stb      r0, 0x44(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x38(r31)
	lfs      f0, 0x3c(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80349314
	li       r3, 1
	b        lbl_80349318

lbl_80349314:
	li       r3, 0

lbl_80349318:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034932C
 * Size:	00000C
 */
void TTestBase::doUpdateFinish(void)
{
	/*
	lfs      f0, lbl_8051E2F0@sda21(r2)
	stfs     f0, 0x38(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80349338
 * Size:	0000B8
 */
void TTestBase::doUpdateFadeout(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x38(r3)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x38(r3)
	lfs      f0, 0x38(r3)
	lfs      f1, 0x3c(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_80349374
	stfs     f1, 0x38(r31)

lbl_80349374:
	lfs      f1, 0x38(r31)
	mr       r3, r31
	lfs      f0, 0x3c(r31)
	lfs      f2, lbl_8051E2FC@sda21(r2)
	fdivs    f0, f1, f0
	lfs      f1, lbl_8051E2F8@sda21(r2)
	fsubs    f0, f2, f0
	stfs     f0, 0x40(r31)
	lfs      f0, 0x40(r31)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	stb      r0, 0x44(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x38(r31)
	lfs      f0, 0x3c(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803493D8
	li       r3, 1
	b        lbl_803493DC

lbl_803493D8:
	li       r3, 0

lbl_803493DC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803493F0
 * Size:	000008
 */
@24 @Morimura::TTestBase::~TTestBase(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q28Morimura9TTestBaseFv
	*/
}
} // namespace Morimura
