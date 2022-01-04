#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_ebiMainTitleMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80497880
    lbl_80497880:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x6562694D
        .4byte 0x61696E54
        .4byte 0x69746C65
        .4byte 0x4D677200
        .4byte 0x544D6169
        .4byte 0x6E546974
        .4byte 0x6C654D67
        .4byte 0x723A3A6C
        .4byte 0x6F616452
        .4byte 0x65736F75
        .4byte 0x72636500
        .4byte 0x54546974
        .4byte 0x6C654D65
        .4byte 0x6E753A3A
        .4byte 0x6C6F6164
        .4byte 0x5265736F
        .4byte 0x75726365
        .4byte 0x00000000
        .4byte 0x7469746C
        .4byte 0x652E737A
        .4byte 0x73000000
    .global lbl_804978E0
    lbl_804978E0:
        .4byte 0x6562694D
        .4byte 0x61696E54
        .4byte 0x69746C65
        .4byte 0x4D67722E
        .4byte 0x63707000
    .global lbl_804978F4
    lbl_804978F4:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80497900
    lbl_80497900:
        .4byte 0x41726743
        .4byte 0x6C6F7365
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E9F60
    lbl_804E9F60:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q33ebi6Screen14ArgCloseTMBack
    __vt__Q33ebi6Screen14ArgCloseTMBack:
        .4byte 0
        .4byte 0
        .4byte getName__Q33ebi6Screen8ArgCloseFv
    .global __vt__Q33ebi6Screen8ArgClose
    __vt__Q33ebi6Screen8ArgClose:
        .4byte 0
        .4byte 0
        .4byte getName__Q33ebi6Screen8ArgCloseFv
    .global __vt__Q33ebi6Screen16ArgOpenTitleMenu
    __vt__Q33ebi6Screen16ArgOpenTitleMenu:
        .4byte 0
        .4byte 0
        .4byte getName__Q33ebi6Screen7ArgOpenFv
    .global __vt__Q33ebi6Screen13ArgOpenTMBack
    __vt__Q33ebi6Screen13ArgOpenTMBack:
        .4byte 0
        .4byte 0
        .4byte getName__Q33ebi6Screen7ArgOpenFv
    .global __vt__Q33ebi6Screen7ArgOpen
    __vt__Q33ebi6Screen7ArgOpen:
        .4byte 0
        .4byte 0
        .4byte getName__Q33ebi6Screen7ArgOpenFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516108
    lbl_80516108:
        .skip 0x4
    .global lbl_8051610C
    lbl_8051610C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global kFadeOutTime__Q23ebi13TMainTitleMgr
    kFadeOutTime__Q23ebi13TMainTitleMgr:
        .float 1.0
    .global lbl_8051FE14
    lbl_8051FE14:
        .4byte 0x40A00000
    .global lbl_8051FE18
    lbl_8051FE18:
        .4byte 0x00000000
    .global lbl_8051FE1C
    lbl_8051FE1C:
        .float 1.0
    .global lbl_8051FE20
    lbl_8051FE20:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051FE28
    lbl_8051FE28:
        .asciz "ArgOpen"
*/

namespace ebi {

/*
 * --INFO--
 * Address:	803EA170
 * Size:	0003B4
 */
TMainTitleMgr::TMainTitleMgr(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
	li       r8, 0
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q33ebi6Screen20TScreenBaseInterface@l
	lis      r5, __vt__Q33ebi6Screen10TTitleMenu@ha
	li       r7, 6
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lis      r3, __vt__Q33ebi6Screen11TScreenBase@ha
	stw      r30, 0x18(r1)
	mr       r6, r31
	mr       r30, r6
	stw      r29, 0x14(r1)
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q33ebi6Screen11TScreenBase@l
	lis      r3, __ct__Q33ebi6Screen22TTitleMenu_Object_IconFv@ha
	stw      r0, 0(r6)
	addi     r0, r5, __vt__Q33ebi6Screen10TTitleMenu@l
	addi     r4, r3, __ct__Q33ebi6Screen22TTitleMenu_Object_IconFv@l
	addi     r3, r30, 0x4c
	stw      r8, 4(r6)
	li       r5, 0
	stw      r8, 8(r6)
	li       r6, 0xc
	stw      r0, 0(r30)
	stw      r8, 0x14(r30)
	stw      r8, 0x18(r30)
	stb      r8, 0x40(r30)
	stw      r8, 0x44(r30)
	stw      r8, 0x48(r30)
	bl       __construct_array
	lis      r4, __ct__Q33ebi6Screen22TTitleMenu_Object_IconFv@ha
	addi     r3, r30, 0x94
	addi     r4, r4, __ct__Q33ebi6Screen22TTitleMenu_Object_IconFv@l
	li       r5, 0
	li       r6, 0xc
	li       r7, 6
	bl       __construct_array
	li       r0, 0
	lis      r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
	lis      r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
	stw      r0, 0xdc(r30)
	addi     r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
	addi     r3, r30, 0xa74
	addi     r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r6, 0x3c
	li       r7, 0xc
	bl       __construct_array
	lis      r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
	lis      r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
	addi     r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r6, 0x3c
	addi     r3, r30, 0xd44
	addi     r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r7, 6
	bl       __construct_array
	lis      r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
	lis      r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
	addi     r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r6, 0x3c
	addi     r3, r30, 0xeac
	addi     r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r7, 6
	bl       __construct_array
	lis      r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
	lis      r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
	addi     r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r6, 0x3c
	addi     r3, r30, 0x1014
	addi     r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r7, 6
	bl       __construct_array
	lis      r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
	lis      r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
	addi     r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r6, 0x3c
	addi     r3, r30, 0x117c
	addi     r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r7, 6
	bl       __construct_array
	addi     r29, r30, 0x12e4
	mr       r3, r29
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r6, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r5, __vt__Q23ebi16E2DCallBack_Base@ha
	stw      r0, 0(r29)
	li       r0, 0
	lis      r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
	lis      r3, __vt__12J3DFrameCtrl@ha
	stw      r0, 0x18(r29)
	addi     r0, r6, __vt__Q29P2DScreen12CallBackNode@l
	addi     r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
	li       r6, 1
	stw      r0, 0(r29)
	addi     r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
	addi     r0, r3, __vt__12J3DFrameCtrl@l
	addi     r3, r29, 0x20
	stw      r7, 0(r29)
	li       r4, 0
	stb      r6, 0x1c(r29)
	stw      r5, 0(r29)
	stw      r0, 0x20(r29)
	bl       init__12J3DFrameCtrlFs
	addi     r29, r30, 0x1320
	mr       r3, r29
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r6, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r5, __vt__Q23ebi16E2DCallBack_Base@ha
	stw      r0, 0(r29)
	li       r0, 0
	lis      r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
	lis      r3, __vt__12J3DFrameCtrl@ha
	stw      r0, 0x18(r29)
	addi     r0, r6, __vt__Q29P2DScreen12CallBackNode@l
	addi     r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
	li       r6, 1
	stw      r0, 0(r29)
	addi     r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
	addi     r0, r3, __vt__12J3DFrameCtrl@l
	addi     r3, r29, 0x20
	stw      r7, 0(r29)
	li       r4, 0
	stb      r6, 0x1c(r29)
	stw      r5, 0(r29)
	stw      r0, 0x20(r29)
	bl       init__12J3DFrameCtrlFs
	addi     r30, r30, 0x135c
	mr       r3, r30
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	li       r10, 0
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	stw      r0, 0(r30)
	addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
	lis      r4, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
	lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
	stw      r10, 0x18(r30)
	lis      r9, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
	lis      r8, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
	lis      r7, __vt__Q33ebi6Screen11TScreenBase@ha
	stw      r0, 0(r30)
	addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
	lis      r3, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
	lis      r6, __vt__Q33ebi6Screen11TPressStart@ha
	stw      r0, 0(r30)
	li       r0, 1
	addi     r5, r3, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
	addi     r3, r8, __vt__Q33ebi6Screen20TScreenBaseInterface@l
	stb      r0, 0x1c(r30)
	addi     r0, r9, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
	addi     r8, r7, __vt__Q33ebi6Screen11TScreenBase@l
	addi     r4, r4, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
	stw      r0, 0(r30)
	addi     r0, r6, __vt__Q33ebi6Screen11TPressStart@l
	li       r6, 0x3c
	li       r7, 4
	stw      r3, 0x137c(r31)
	addi     r3, r31, 0x13ac
	stw      r8, 0x137c(r31)
	stw      r10, 0x1380(r31)
	stw      r10, 0x1384(r31)
	stw      r0, 0x137c(r31)
	stw      r10, 0x1388(r31)
	stw      r10, 0x1390(r31)
	stw      r10, 0x13a4(r31)
	stw      r10, 0x13a8(r31)
	bl       __construct_array
	lis      r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
	lis      r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
	addi     r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r6, 0x3c
	addi     r3, r31, 0x149c
	addi     r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
	li       r7, 4
	bl       __construct_array
	lis      r3, __ct__Q23ebi25E2DCallBack_CalcAnimationFv@ha
	lis      r5, __dt__Q23ebi25E2DCallBack_CalcAnimationFv@ha
	addi     r4, r3, __ct__Q23ebi25E2DCallBack_CalcAnimationFv@l
	li       r6, 0x20
	addi     r3, r31, 0x158c
	addi     r5, r5, __dt__Q23ebi25E2DCallBack_CalcAnimationFv@l
	li       r7, 4
	bl       __construct_array
	lis      r4, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
	lis      r3, __vt__Q33ebi6Screen11TScreenBase@ha
	addi     r7, r4, __vt__Q33ebi6Screen20TScreenBaseInterface@l
	lis      r4, __vt__Q33ebi6Screen7TTMBack@ha
	stw      r7, 0x160c(r31)
	addi     r6, r3, __vt__Q33ebi6Screen11TScreenBase@l
	lis      r3, __vt__Q33ebi6Screen13TNintendoLogo@ha
	li       r5, 0
	stw      r6, 0x160c(r31)
	addi     r4, r4, __vt__Q33ebi6Screen7TTMBack@l
	addi     r3, r3, __vt__Q33ebi6Screen13TNintendoLogo@l
	li       r0, 0xff
	stw      r5, 0x1610(r31)
	stw      r5, 0x1614(r31)
	stw      r4, 0x160c(r31)
	stw      r5, 0x1618(r31)
	stw      r5, 0x161c(r31)
	stw      r5, 0x1620(r31)
	stw      r5, 0x161c(r31)
	stw      r5, 0x1620(r31)
	stw      r7, 0x1624(r31)
	stw      r6, 0x1624(r31)
	stw      r5, 0x1628(r31)
	stw      r5, 0x162c(r31)
	stw      r3, 0x1624(r31)
	stw      r5, 0x1630(r31)
	stb      r5, 0x1634(r31)
	stb      r5, 0x1635(r31)
	stb      r5, 0x1636(r31)
	stb      r0, 0x1637(r31)
	stb      r0, 0x1638(r31)
	stw      r5, 0x163c(r31)
	stw      r5, 0x1640(r31)
	stw      r5, 0x1644(r31)
	stw      r5, 0x165c(r31)
	stw      r5, 0x1660(r31)
	bl       globalInstance__Q33ebi5title9TTitleMgrFv
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       init__Q33ebi5title9TTitleMgrFv
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
TPressStart::~TPressStart(void)
{
	// UNUSED FUNCTION
}

} // namespace Screen

/*
 * --INFO--
 * Address:	803EA524
 * Size:	000068
 */
void TMainTitleMgr::setMode(long)
{
	/*
	cmpwi    r4, 2
	beq      lbl_803EA56C
	bge      lbl_803EA540
	cmpwi    r4, 0
	beq      lbl_803EA54C
	bge      lbl_803EA55C
	blr

lbl_803EA540:
	cmpwi    r4, 4
	bgelr
	b        lbl_803EA57C

lbl_803EA54C:
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	li       r0, 0
	stw      r0, 0xf5c(r3)
	blr

lbl_803EA55C:
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	li       r0, 1
	stw      r0, 0xf5c(r3)
	blr

lbl_803EA56C:
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	li       r0, 2
	stw      r0, 0xf5c(r3)
	blr

lbl_803EA57C:
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	li       r0, 3
	stw      r0, 0xf5c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EA58C
 * Size:	000124
 */
void TMainTitleMgr::loadResource(void)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	lis      r4, lbl_80497880@ha
	li       r5, 0
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	addi     r31, r4, lbl_80497880@l
	addi     r4, r31, 0x1c
	stw      r30, 0x118(r1)
	stw      r29, 0x114(r1)
	mr       r29, r3
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x38
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r1, 8
	addi     r4, r31, 0x54
	bl       makeLanguageResName__Q22og9newScreenFPcPCc
	addi     r3, r1, 8
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r30, r3, r3
	bne      lbl_803EA60C
	addi     r3, r31, 0x60
	addi     r5, r31, 0x74
	li       r4, 0x45
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803EA60C:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x38
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r29, 0x137c
	mr       r4, r30
	lwz      r12, 0x137c(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r29, 0x160c
	mr       r4, r30
	lwz      r12, 0x160c(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r29, 0x1624
	mr       r4, r30
	lwz      r12, 0x1624(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       loadResource__Q33ebi5title9TTitleMgrFv
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       initAfterLoadRes__Q33ebi5title9TTitleMgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x1c
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EA6B0
 * Size:	00004C
 */
void TMainTitleMgr::setController(Controller*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       setController__Q33ebi6Screen10TTitleMenuFP10Controller
	stw      r31, 0x1388(r30)
	mr       r4, r31
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       setController__Q33ebi5title9TTitleMgrFP10Controller
	stw      r31, 0x1648(r30)
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
 * Address:	803EA6FC
 * Size:	0000C0
 */
void TMainTitleMgr::start(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x137c
	lwz      r12, 0x137c(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q33ebi6Screen7ArgOpen@ha
	lfs      f0, lbl_8051FE14@sda21(r2)
	addi     r0, r3, __vt__Q33ebi6Screen7ArgOpen@l
	lis      r3, __vt__Q33ebi6Screen13ArgOpenTMBack@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q33ebi6Screen13ArgOpenTMBack@l
	addi     r3, r31, 0x160c
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 0x160c(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x1624
	li       r4, 0
	lwz      r12, 0x1624(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       start__Q33ebi5title9TTitleMgrFv
	li       r0, 1
	li       r3, 0
	stw      r0, 0x1650(r31)
	li       r0, -1
	stb      r3, 0x1655(r31)
	stw      r0, 0x1658(r31)
	stw      r3, 0x163c(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EA7BC
 * Size:	0001F0
 */
void TMainTitleMgr::startMenuSet(long, long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r5, 0x1658(r3)
	lwz      r0, 0x1658(r3)
	cmpwi    r0, 3
	beq      lbl_803EA828
	bge      lbl_803EA800
	cmpwi    r0, 1
	beq      lbl_803EA818
	bge      lbl_803EA820
	cmpwi    r0, 0
	bge      lbl_803EA810
	b        lbl_803EA840

lbl_803EA800:
	cmpwi    r0, 5
	beq      lbl_803EA838
	bge      lbl_803EA840
	b        lbl_803EA830

lbl_803EA810:
	li       r31, 0
	b        lbl_803EA85C

lbl_803EA818:
	li       r31, 2
	b        lbl_803EA85C

lbl_803EA820:
	li       r31, 1
	b        lbl_803EA85C

lbl_803EA828:
	li       r31, 3
	b        lbl_803EA85C

lbl_803EA830:
	li       r31, 4
	b        lbl_803EA85C

lbl_803EA838:
	li       r31, 5
	b        lbl_803EA85C

lbl_803EA840:
	lis      r3, lbl_804978E0@ha
	lis      r5, lbl_804978F4@ha
	addi     r3, r3, lbl_804978E0@l
	li       r4, 0xb1
	addi     r5, r5, lbl_804978F4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803EA85C:
	lis      r3, gGameConfig__4Game@ha
	addi     r3, r3, gGameConfig__4Game@l
	lwz      r0, 0x1c8(r3)
	cmpwi    r0, 0
	beq      lbl_803EA8A4
	lis      r4, __vt__Q33ebi6Screen7ArgOpen@ha
	lis      r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@ha
	addi     r4, r4, __vt__Q33ebi6Screen7ArgOpen@l
	li       r0, 1
	stw      r4, 0x1c(r1)
	addi     r5, r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@l
	mr       r3, r30
	addi     r4, r1, 0x1c
	stw      r5, 0x1c(r1)
	stw      r0, 0x20(r1)
	stw      r31, 0x24(r1)
	bl       openMenuSet__Q33ebi6Screen10TTitleMenuFPQ33ebi6Screen7ArgOpen
	b        lbl_803EA8EC

lbl_803EA8A4:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	bl       isChallengeGamePlayable__Q24Game14PlayCommonDataFv
	clrlwi   r5, r3, 0x18
	lis      r4, __vt__Q33ebi6Screen7ArgOpen@ha
	neg      r0, r5
	lis      r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@ha
	addi     r4, r4, __vt__Q33ebi6Screen7ArgOpen@l
	stw      r31, 0x18(r1)
	or       r5, r0, r5
	addi     r0, r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@l
	stw      r4, 0x10(r1)
	srwi     r5, r5, 0x1f
	mr       r3, r30
	addi     r4, r1, 0x10
	stw      r0, 0x10(r1)
	stw      r5, 0x14(r1)
	bl       openMenuSet__Q33ebi6Screen10TTitleMenuFPQ33ebi6Screen7ArgOpen

lbl_803EA8EC:
	addi     r3, r30, 0x137c
	lwz      r12, 0x137c(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q33ebi6Screen7ArgOpen@ha
	lfs      f0, lbl_8051FE18@sda21(r2)
	addi     r0, r3, __vt__Q33ebi6Screen7ArgOpen@l
	lis      r3, __vt__Q33ebi6Screen13ArgOpenTMBack@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q33ebi6Screen13ArgOpenTMBack@l
	addi     r3, r30, 0x160c
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 0x160c(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1624
	li       r4, 0
	lwz      r12, 0x1624(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       start__Q33ebi5title9TTitleMgrFv
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       setLogo__Q33ebi5title9TTitleMgrFv
	li       r3, 3
	li       r0, 0
	stw      r3, 0x1650(r30)
	lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
	stb      r0, 0x1655(r30)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1640(r30)
	li       r0, 1
	stw      r3, 0x1644(r30)
	stw      r0, 0x163c(r30)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EA9AC
 * Size:	00000C
 */
void TMainTitleMgr::forceQuit(void)
{
	// Generated from stw r0, 0x1650(r3)
	_1650 = 0;
}

/*
 * --INFO--
 * Address:	803EA9B8
 * Size:	000010
 */
void TMainTitleMgr::isFinish(void)
{
	/*
	lwz      r0, 0x1650(r3)
	cntlzw   r0, r0
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void TMainTitleMgr::isAnyKey(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EA9C8
 * Size:	000008
 */
void TMainTitleMgr::getSelectedMenu(void)
{
	/*
	lwz      r3, 0x1658(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EA9D0
 * Size:	0004B0
 */
void TMainTitleMgr::update(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	stb      r0, 0x1654(r3)
	lwz      r0, 0x1650(r3)
	cmpwi    r0, 3
	beq      lbl_803EAC48
	bge      lbl_803EAA10
	cmpwi    r0, 1
	beq      lbl_803EAA1C
	bge      lbl_803EAA50
	b        lbl_803EADF0

lbl_803EAA10:
	cmpwi    r0, 5
	bge      lbl_803EADF0
	b        lbl_803EADC8

lbl_803EAA1C:
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       isPressStart__Q33ebi5title9TTitleMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EADF0
	addi     r3, r31, 0x137c
	li       r4, 0
	lwz      r12, 0x137c(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EAA50:
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       isControllerOK__Q33ebi5title9TTitleMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EAA6C
	li       r0, 1
	stb      r0, 0x138c(r31)
	b        lbl_803EAA74

lbl_803EAA6C:
	li       r0, 0
	stb      r0, 0x138c(r31)

lbl_803EAA74:
	lis      r3, gGameConfig__4Game@ha
	addi     r30, r3, gGameConfig__4Game@l
	lwz      r0, 0x238(r30)
	cmpwi    r0, 0
	beq      lbl_803EAAA4
	lwz      r3, 0x1648(r31)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_803EAAA4
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	bl       resetOn__6SystemFb

lbl_803EAAA4:
	addi     r3, r31, 0x137c
	lwz      r12, 0x137c(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EADF0
	lis      r3, gGameConfig__4Game@ha
	addi     r3, r3, gGameConfig__4Game@l
	lwz      r0, 0x228(r3)
	cmpwi    r0, 0
	beq      lbl_803EAB2C
	li       r0, 1
	lfs      f1, lbl_8051FE1C@sda21(r2)
	stw      r0, 0x1658(r31)
	stb      r0, 0x1654(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x165c(r31)
	lfs      f1, lbl_8051FE1C@sda21(r2)
	stw      r3, 0x1660(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1640(r31)
	li       r4, 2
	li       r0, 4
	stw      r3, 0x1644(r31)
	stw      r4, 0x163c(r31)
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EAB2C:
	lwz      r0, 0x238(r30)
	cmpwi    r0, 0
	beq      lbl_803EAB90
	li       r0, 1
	lfs      f1, lbl_8051FE1C@sda21(r2)
	stw      r0, 0x1658(r31)
	stb      r0, 0x1654(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x165c(r31)
	lfs      f1, lbl_8051FE1C@sda21(r2)
	stw      r3, 0x1660(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1640(r31)
	li       r4, 2
	li       r0, 4
	stw      r3, 0x1644(r31)
	stw      r4, 0x163c(r31)
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EAB90:
	lwz      r0, 0x1c8(r3)
	cmpwi    r0, 0
	beq      lbl_803EABE4
	lis      r3, __vt__Q33ebi6Screen7ArgOpen@ha
	li       r0, 1
	addi     r4, r3, __vt__Q33ebi6Screen7ArgOpen@l
	lis      r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@ha
	stw      r4, 0x1c(r1)
	addi     r5, r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@l
	mr       r3, r31
	addi     r4, r1, 0x1c
	stw      r5, 0x1c(r1)
	stw      r0, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 3
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EABE4:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	bl       isChallengeGamePlayable__Q24Game14PlayCommonDataFv
	clrlwi   r6, r3, 0x18
	lis      r4, __vt__Q33ebi6Screen7ArgOpen@ha
	neg      r5, r6
	lis      r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@ha
	addi     r4, r4, __vt__Q33ebi6Screen7ArgOpen@l
	li       r0, 0
	or       r5, r5, r6
	stw      r4, 0x10(r1)
	srwi     r5, r5, 0x1f
	addi     r3, r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@l
	stw      r3, 0x10(r1)
	mr       r3, r31
	addi     r4, r1, 0x10
	stw      r5, 0x14(r1)
	stw      r0, 0x18(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 3
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EAC48:
	bl       isDecide__Q33ebi6Screen10TTitleMenuFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EAD5C
	lbz      r0, 0x1655(r31)
	cmplwi   r0, 0
	bne      lbl_803EAD5C
	li       r3, 1
	stb      r3, 0x1655(r31)
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 3
	beq      lbl_803EACC0
	bge      lbl_803EAC90
	cmpwi    r0, 1
	beq      lbl_803EACAC
	bge      lbl_803EACB8
	cmpwi    r0, 0
	bge      lbl_803EACA0
	b        lbl_803EACE0

lbl_803EAC90:
	cmpwi    r0, 5
	beq      lbl_803EACD8
	bge      lbl_803EACE0
	b        lbl_803EACCC

lbl_803EACA0:
	li       r0, 0
	stw      r0, 0x1658(r31)
	b        lbl_803EACE0

lbl_803EACAC:
	li       r0, 2
	stw      r0, 0x1658(r31)
	b        lbl_803EACE0

lbl_803EACB8:
	stw      r3, 0x1658(r31)
	b        lbl_803EACE0

lbl_803EACC0:
	li       r0, 3
	stw      r0, 0x1658(r31)
	b        lbl_803EACE0

lbl_803EACCC:
	li       r0, 4
	stw      r0, 0x1658(r31)
	b        lbl_803EACE0

lbl_803EACD8:
	li       r0, 5
	stw      r0, 0x1658(r31)

lbl_803EACE0:
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       breakup__Q33ebi5title9TTitleMgrFv
	lis      r3, __vt__Q33ebi6Screen8ArgClose@ha
	lfs      f0, lbl_8051FE1C@sda21(r2)
	addi     r0, r3, __vt__Q33ebi6Screen8ArgClose@l
	lis      r3, __vt__Q33ebi6Screen14ArgCloseTMBack@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q33ebi6Screen14ArgCloseTMBack@l
	addi     r3, r31, 0x160c
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 0x160c(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       isCancel__Q33ebi6Screen10TTitleMenuFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803EAD5C
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051FE1C@sda21(r2)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1640(r31)
	li       r4, 2
	li       r0, 1
	stw      r3, 0x1644(r31)
	stw      r4, 0x163c(r31)
	stb      r0, 0x1654(r31)

lbl_803EAD5C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r31
	bl       isCancel__Q33ebi6Screen10TTitleMenuFv
	clrlwi.  r0, r30, 0x18
	beq      lbl_803EADF0
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EADB0
	addi     r3, r31, 0x137c
	li       r4, 0
	lwz      r12, 0x137c(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EADB0:
	lwz      r0, 0x1640(r31)
	cmplwi   r0, 0
	bne      lbl_803EADF0
	li       r0, 0
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EADC8:
	lwz      r3, 0x165c(r31)
	cmplwi   r3, 0
	beq      lbl_803EADDC
	addi     r0, r3, -1
	stw      r0, 0x165c(r31)

lbl_803EADDC:
	lwz      r0, 0x165c(r31)
	cmplwi   r0, 0
	bne      lbl_803EADF0
	li       r0, 0
	stw      r0, 0x1650(r31)

lbl_803EADF0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x137c
	lwz      r12, 0x137c(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x160c
	lwz      r12, 0x160c(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x1624
	lwz      r12, 0x1624(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       update__Q33ebi5title9TTitleMgrFv
	lwz      r0, 0x163c(r31)
	cmpwi    r0, 0
	beq      lbl_803EAE68
	lwz      r3, 0x1640(r31)
	cmplwi   r3, 0
	beq      lbl_803EAE68
	addi     r0, r3, -1
	stw      r0, 0x1640(r31)

lbl_803EAE68:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EAE80
 * Size:	000274
 */
void TMainTitleMgr::draw(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	lwz      r0, 0x1650(r3)
	cmpwi    r0, 0
	beq      lbl_803EB0DC
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       draw__Q33ebi5title9TTitleMgrFv
	li       r3, 0
	li       r4, 7
	li       r5, 0
	bl       GXSetZMode
	addi     r3, r30, 0x160c
	lwz      r12, 0x160c(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x137c
	lwz      r12, 0x137c(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1624
	lwz      r12, 0x1624(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x163c(r30)
	cmpwi    r0, 0
	beq      lbl_803EB0DC
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	addi     r31, r3, 0x190
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x163c(r30)
	lwz      r3, 0x1634(r30)
	cmpwi    r0, 2
	stw      r3, 0x18(r1)
	beq      lbl_803EAFD4
	bge      lbl_803EB050
	cmpwi    r0, 1
	bge      lbl_803EAF5C
	b        lbl_803EB050

lbl_803EAF5C:
	lwz      r4, 0x1644(r30)
	cmplwi   r4, 0
	beq      lbl_803EAF9C
	lwz      r3, 0x1640(r30)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lfd      f2, lbl_8051FE20@sda21(r2)
	stw      r3, 0x34(r1)
	lfd      f0, 0x30(r1)
	stw      r4, 0x3c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	fsubs    f0, f0, f2
	fdivs    f2, f1, f0
	b        lbl_803EAFA0

lbl_803EAF9C:
	lfs      f2, lbl_8051FE18@sda21(r2)

lbl_803EAFA0:
	lbz      r3, 0x1638(r30)
	lis      r0, 0x4330
	stw      r0, 0x40(r1)
	lfd      f1, lbl_8051FE20@sda21(r2)
	stw      r3, 0x44(r1)
	lfd      f0, 0x40(r1)
	fsubs    f0, f0, f1
	fmuls    f0, f0, f2
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	stb      r0, 0x1b(r1)
	b        lbl_803EB050

lbl_803EAFD4:
	lwz      r4, 0x1644(r30)
	cmplwi   r4, 0
	beq      lbl_803EB014
	lwz      r3, 0x1640(r30)
	lis      r0, 0x4330
	stw      r0, 0x48(r1)
	lfd      f2, lbl_8051FE20@sda21(r2)
	stw      r3, 0x4c(r1)
	lfd      f0, 0x48(r1)
	stw      r4, 0x44(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x40(r1)
	lfd      f0, 0x40(r1)
	fsubs    f0, f0, f2
	fdivs    f1, f1, f0
	b        lbl_803EB018

lbl_803EB014:
	lfs      f1, lbl_8051FE18@sda21(r2)

lbl_803EB018:
	lbz      r3, 0x1638(r30)
	lis      r0, 0x4330
	lfs      f0, lbl_8051FE1C@sda21(r2)
	stw      r3, 0x3c(r1)
	lfd      f2, lbl_8051FE20@sda21(r2)
	fsubs    f0, f0, f1
	stw      r0, 0x38(r1)
	lfd      f1, 0x38(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	stb      r0, 0x1b(r1)

lbl_803EB050:
	lwz      r0, 0x18(r1)
	mr       r3, r31
	addi     r4, r1, 8
	addi     r5, r1, 0xc
	stw      r0, 0x14(r1)
	addi     r6, r1, 0x10
	addi     r7, r1, 0x14
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_8051FE18@sda21(r2)
	mr       r3, r31
	stw      r4, 0x4c(r1)
	addi     r4, r1, 0x1c
	lfd      f2, lbl_8051FE20@sda21(r2)
	stw      r0, 0x48(r1)
	lfd      f0, 0x48(r1)
	stw      r30, 0x44(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x40(r1)
	lfd      f0, 0x40(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x1c(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x20(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_803EB0DC:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void TMainTitleMgr::showInfo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EB0F4
 * Size:	000070
 */
E2DCallBack_CalcAnimation::E2DCallBack_CalcAnimation(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
	stw      r0, 0(r31)
	li       r0, 0
	lis      r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
	addi     r6, r5, __vt__Q29P2DScreen12CallBackNode@l
	stw      r0, 0x18(r31)
	addi     r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
	li       r4, 1
	addi     r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
	stw      r6, 0(r31)
	mr       r3, r31
	stw      r5, 0(r31)
	stb      r4, 0x1c(r31)
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	00020C
 */
TTitleMenu::~TTitleMenu(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EB164
 * Size:	000004
 */
TTitleMenu_Object_Icon::TTitleMenu_Object_Icon(void) { }

/*
 * --INFO--
 * Address:	803EB168
 * Size:	00000C
 */
void ArgClose::getName(void)
{
	/*
lis      r3, lbl_80497900@ha
addi     r3, r3, lbl_80497900@l
blr
	*/
}

/*
 * --INFO--
 * Address:	803EB174
 * Size:	000008
 */
void ArgOpen::getName(void)
{
	/*
addi     r3, r2, lbl_8051FE28@sda21
blr
	*/
}

} // namespace Screen

} // namespace ebi

/*
 * --INFO--
 * Address:	803EB17C
 * Size:	000028
 */
void __sinit_ebiMainTitleMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804E9F60@ha
	stw      r0, lbl_80516108@sda21(r13)
	stfsu    f0, lbl_804E9F60@l(r3)
	stfs     f0, lbl_8051610C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
