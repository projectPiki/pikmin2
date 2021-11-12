#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048E030
    lbl_8048E030:
        .asciz "PSGame.h"
        .skip 3
        .asciz "P2Assert"
        .skip 3
        .asciz "PSScene.h"
        .skip 2
        .asciz "get sound scene at\ninvalid timming\n"

    .section .sbss # 0x80514D80 - 0x80516360
    .global ogSound__2og
    ogSound__2og:
        .skip 0x8
*/

namespace og {

/*
 * --INFO--
 * Address:	8030C9B0
 * Size:	000028
 */
void Sound::setSE(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030C9D8
 * Size:	00002C
 */
void Sound::setLifeDanger(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1819
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CA04
 * Size:	0000F4
 */
void Sound::setChimeNoon(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8048E030@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8048E030@l
	li       r4, 0x1816
	stw      r30, 8(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8030CA50
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030CA50:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8030CA70
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030CA70:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8030CA90
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030CA90:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_8030CAB4
	addi     r3, r31, 0x18
	addi     r5, r31, 0x24
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030CAB4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8030CAD4
	b        lbl_8030CAD8

lbl_8030CAD4:
	li       r30, 0

lbl_8030CAD8:
	mr       r3, r30
	bl       changeEnvSE_Noon__Q23PSM12Scene_GroundFv
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
 * Address:	8030CAF8
 * Size:	00002C
 */
void Sound::setChime(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1815
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CB24
 * Size:	00002C
 */
void Sound::setDecide(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1800
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CB50
 * Size:	00002C
 */
void Sound::setCancel(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1801
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CB7C
 * Size:	00002C
 */
void Sound::setCursor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1802
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CBA8
 * Size:	00002C
 */
void Sound::setOpen(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1803
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CBD4
 * Size:	00002C
 */
void Sound::setClose(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1804
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Sound::setPause(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030CC00
 * Size:	000048
 */
void Sound::setPlusMinus(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	beq      lbl_8030CC28
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1020
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8030CC38

lbl_8030CC28:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1806
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_8030CC38:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CC48
 * Size:	00002C
 */
void Sound::setSMenuLR(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1806
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CC74
 * Size:	00002C
 */
void Sound::setError(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1807
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CCA0
 * Size:	00002C
 */
void Sound::setZoomIn(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1008
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CCCC
 * Size:	00002C
 */
void Sound::setZoomOut(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1009
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CCF8
 * Size:	00002C
 */
void Sound::setScroll(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x100a
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CD24
 * Size:	00002C
 */
void Sound::setOpenDoukutu(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1811
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CD50
 * Size:	00002C
 */
void Sound::setSaveCave(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x4006
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CD7C
 * Size:	00002C
 */
void Sound::setOpenWMapMenu(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1811
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CDA8
 * Size:	00002C
 */
void Sound::setOpenTotalPoko(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1813
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CDD4
 * Size:	00002C
 */
void Sound::setCloseTotalPoko(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x181d
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CE00
 * Size:	00002C
 */
void Sound::setPlusTotalPoko(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1814
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CE2C
 * Size:	00002C
 */
void Sound::setOpenFinalMsg(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1811
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CE58
 * Size:	00002C
 */
void Sound::setSprayAdd(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1832
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CE84
 * Size:	00002C
 */
void Sound::setTimeCarry(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1829
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Sound::setSensorSE(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030CEB0
 * Size:	00002C
 */
void Sound::setGetSensor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x187e
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CEDC
 * Size:	00002C
 */
void Sound::setFloorComplete(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1886
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CF08
 * Size:	00002C
 */
void Sound::setGraySensor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1881
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CF34
 * Size:	00002C
 */
void Sound::setGetSpray(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1880
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Sound::setItemName(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030CF60
 * Size:	00002C
 */
void Sound::setKanteiExit(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1892
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CF8C
 * Size:	000004
 */
void Sound::setFloorTitle(void) { }

/*
 * --INFO--
 * Address:	8030CF90
 * Size:	00002C
 */
void Sound::setVsTitle(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x108b
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CFBC
 * Size:	00002C
 */
void Sound::setBdamaGet(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1889
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030CFE8
 * Size:	000004
 */
void Sound::setNaviChange(int) { }

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Sound::setVsTitleAbutton(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void Sound::stopSound(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030CFEC
 * Size:	0000E0
 */
void Sound::setVsWin1P(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, 0xC0011043@ha
	lis      r4, lbl_8048E030@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, 0xC0011043@l
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8048E030@l
	stw      r30, 8(r1)
	bl       PSStart2DStream__FUl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8030D034
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D034:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8030D054
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D054:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8030D074
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D074:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_8030D098
	addi     r3, r31, 0x18
	addi     r5, r31, 0x24
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D098:
	mr       r3, r30
	li       r4, 2
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	bl       PSMuteSE_on2D__Fv
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
 * Address:	8030D0CC
 * Size:	0000E0
 */
void Sound::setVsWin2P(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, 0xC0011044@ha
	lis      r4, lbl_8048E030@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, 0xC0011044@l
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8048E030@l
	stw      r30, 8(r1)
	bl       PSStart2DStream__FUl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8030D114
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D114:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8030D134
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D134:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8030D154
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D154:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_8030D178
	addi     r3, r31, 0x18
	addi     r5, r31, 0x24
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D178:
	mr       r3, r30
	li       r4, 2
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	bl       PSMuteSE_on2D__Fv
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
 * Address:	8030D1AC
 * Size:	0000E0
 */
void Sound::setVsDraw(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, 0xC0011045@ha
	lis      r4, lbl_8048E030@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, 0xC0011045@l
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8048E030@l
	stw      r30, 8(r1)
	bl       PSStart2DStream__FUl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8030D1F4
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D1F4:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8030D214
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D214:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8030D234
	addi     r3, r31, 0x18
	addi     r5, r31, 0xc
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D234:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_8030D258
	addi     r3, r31, 0x18
	addi     r5, r31, 0x24
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030D258:
	mr       r3, r30
	li       r4, 2
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	bl       PSMuteSE_on2D__Fv
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
 * Address:	8030D28C
 * Size:	00002C
 */
void Sound::setWarning(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1893
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace og
