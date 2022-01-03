#include "Game/rumble.h"
#include "types.h"
/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80484868
    lbl_80484868:
        .4byte 0x3234362D
        .4byte 0x52756D62
        .4byte 0x6C654D67
        .4byte 0x72000000
    .global lbl_80484878
    lbl_80484878:
        .4byte 0x52756D62
        .4byte 0x6C654D67
        .4byte 0x72000000
        .4byte 0x52756D62
        .4byte 0x6C655061
        .4byte 0x726D7300
        .4byte 0x4D617820
        .4byte 0x44697374
        .4byte 0x616E6365
        .4byte 0x00000000
        .4byte 0x2F757365
        .4byte 0x722F4E69
        .4byte 0x7368696D
        .4byte 0x7572612F
        .4byte 0x52756D62
        .4byte 0x6C652F72
        .4byte 0x756D626C
        .4byte 0x65506172
        .4byte 0x6D732E74
        .4byte 0x78740000
        .4byte 0x2F757365
        .4byte 0x722F4E69
        .4byte 0x7368696D
        .4byte 0x7572612F
        .4byte 0x52756D62
        .4byte 0x6C652F72
        .4byte 0x756D626C
        .4byte 0x65446174
        .4byte 0x612E7478
        .4byte 0x74000000
    .global lbl_804848F0
    lbl_804848F0:
        .4byte 0x52756D62
        .4byte 0x6C654D67
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_80484900
    lbl_80484900:
        .4byte 0x6E6F7420
        .4byte 0x7A756B61
        .4byte 0x6E206D6F
        .4byte 0x64650A00
    .global lbl_80484910
    lbl_80484910:
        .4byte 0x72756D62
        .4byte 0x6C652070
        .4byte 0x6172616D
        .4byte 0x65746572
        .4byte 0x206E6F6E
        .4byte 0x650A0000
    .global lbl_80484928
    lbl_80484928:
        .4byte 0x72756D62
        .4byte 0x6C652064
        .4byte 0x61746120
        .4byte 0x6E6F6E65
        .4byte 0x0A000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game9RumbleMgr
    __vt__Q24Game9RumbleMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game9RumbleMgrFv
        .4byte getChildCount__5CNodeFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global rumbleMgr__4Game
    rumbleMgr__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A978
    lbl_8051A978:
        .4byte 0x443B8000
    .global lbl_8051A97C
    lbl_8051A97C:
        .4byte 0x00000000
    .global lbl_8051A980
    lbl_8051A980:
        .4byte 0x447A0000
    .global lbl_8051A984
    lbl_8051A984:
        .4byte 0x40000000
    .global lbl_8051A988
    lbl_8051A988:
        .float 1.0
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80253304
 * Size:	000048
 */
RumbleMgr::RumbleMgr()
    : CNode()
{
	m_name = "RumbleMgr";
}

/*
 * --INFO--
 * Address:	8025334C
 * Size:	000158
 */
void RumbleMgr::loadResource()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80484868@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r3, 0x38
	stw      r30, 0x18(r1)
	addi     r30, r4, lbl_80484868@l
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_802533D8
	addi     r0, r29, 0x34
	lis      r5, 0x7272646D@ha
	stw      r0, 0(r29)
	li       r3, 0
	addi     r0, r30, 0x1c
	mr       r4, r29
	stw      r3, 4(r29)
	addi     r3, r29, 0xc
	addi     r5, r5, 0x7272646D@l
	addi     r6, r30, 0x28
	stw      r0, 8(r29)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_8051A978@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A97C@sda21(r2)
	stw      r0, 0xc(r29)
	lfs      f0, lbl_8051A980@sda21(r2)
	stfs     f2, 0x24(r29)
	stfs     f1, 0x2c(r29)
	stfs     f0, 0x30(r29)

lbl_802533D8:
	stw      r29, 0x24(r31)
	mr       r3, r31
	addi     r4, r30, 0x38
	bl       readRumbleParms__Q24Game9RumbleMgrFPc
	li       r3, 8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80253400
	bl       __ct__Q24Game13RumbleDataMgrFv
	mr       r0, r3

lbl_80253400:
	stw      r0, 0x28(r31)
	mr       r3, r31
	addi     r4, r30, 0x60
	bl       readRumbleData__Q24Game9RumbleMgrFPc
	li       r0, 1
	li       r3, 8
	stb      r0, 0x18(r31)
	bl       __nwa__FUl
	stw      r3, 0x20(r31)
	li       r3, 8
	bl       __nwa__FUl
	stw      r3, 0x1c(r31)
	li       r30, 0
	mr       r29, r30
	li       r28, 0
	stw      r30, 0x2c(r31)
	stw      r30, 0x30(r31)

lbl_80253444:
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80253464
	mr       r4, r28
	li       r5, 8
	bl       __ct__Q24Game10ContRumbleFii
	mr       r0, r3

lbl_80253464:
	lwz      r3, 0x20(r31)
	addi     r28, r28, 1
	cmpwi    r28, 2
	stwx     r0, r3, r29
	lwz      r3, 0x1c(r31)
	stwx     r30, r3, r29
	addi     r29, r29, 4
	blt      lbl_80253444
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
 * Address:	802534A4
 * Size:	000108
 */
void RumbleMgr::init()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x60(r4)
	cmplwi   r3, 0
	beq      lbl_802534EC
	lbz      r3, 0x3b(r3)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0x18(r31)
	b        lbl_802534F4

lbl_802534EC:
	li       r0, 1
	stb      r0, 0x18(r31)

lbl_802534F4:
	li       r30, 0
	li       r28, 0
	stw      r30, 0x2c(r31)
	mr       r29, r30
	stw      r30, 0x30(r31)

lbl_80253508:
	lwz      r3, 0x20(r31)
	lwz      r0, 0x28(r31)
	lwzx     r3, r3, r29
	stw      r0, 0x1c(r3)
	lwz      r3, 0x20(r31)
	lwzx     r3, r3, r29
	bl       init__Q24Game10ContRumbleFv
	lwz      r3, 0x1c(r31)
	addi     r28, r28, 1
	cmpwi    r28, 2
	stwx     r30, r3, r29
	addi     r29, r29, 4
	blt      lbl_80253508
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8025358C
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_8025358C
	li       r28, 0
	li       r29, 0

lbl_8025355C:
	lwz      r3, naviMgr__4Game@sda21(r13)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1c(r31)
	addi     r28, r28, 1
	cmpwi    r28, 2
	stwx     r3, r4, r29
	addi     r29, r29, 4
	blt      lbl_8025355C

lbl_8025358C:
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
 * Address:	802535AC
 * Size:	0001D4
 */
void RumbleMgr::update()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	bl       isRumbleUpdateOn__Q24Game9RumbleMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80253760
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802536E0
	lwz      r3, 0x44(r3)
	li       r0, 0
	cmpwi    r3, 1
	beq      lbl_802535FC
	cmpwi    r3, 3
	bne      lbl_80253600

lbl_802535FC:
	li       r0, 1

lbl_80253600:
	clrlwi.  r0, r0, 0x18
	bne      lbl_802536E0
	lwz      r0, 0x2c(r31)
	cmplwi   r0, 0
	beq      lbl_80253648
	lwz      r3, 0x20(r31)
	li       r4, 1
	lwz      r3, 0(r3)
	bl       setController__Q24Game10ContRumbleFb
	lwz      r4, 0x2c(r31)
	lwz      r3, 0x20(r31)
	lha      r0, 0x7c(r4)
	lwz      r3, 0(r3)
	stw      r0, 4(r3)
	lwz      r3, 0x20(r31)
	lwz      r3, 0(r3)
	bl       update__Q24Game10ContRumbleFv
	b        lbl_80253760

lbl_80253648:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	mr       r30, r3
	li       r28, 0
	li       r29, 0

lbl_8025365C:
	lwz      r3, 0x1c(r31)
	lwzx     r3, r3, r29
	cmplwi   r3, 0
	beq      lbl_802536B0
	lwz      r0, 0x278(r3)
	cmplwi   r0, 0
	beq      lbl_802536B0
	cmplw    r3, r30
	bne      lbl_802536B0
	lwz      r3, 0x20(r31)
	li       r4, 1
	lwzx     r3, r3, r29
	bl       setController__Q24Game10ContRumbleFb
	lwz      r4, 0x1c(r31)
	lwz      r3, 0x20(r31)
	lwzx     r4, r4, r29
	lwzx     r3, r3, r29
	lwz      r4, 0x278(r4)
	lha      r0, 0x7c(r4)
	stw      r0, 4(r3)
	b        lbl_802536C0

lbl_802536B0:
	lwz      r3, 0x20(r31)
	li       r4, 0
	lwzx     r3, r3, r29
	bl       setController__Q24Game10ContRumbleFb

lbl_802536C0:
	lwz      r3, 0x20(r31)
	lwzx     r3, r3, r29
	bl       update__Q24Game10ContRumbleFv
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 2
	blt      lbl_8025365C
	b        lbl_80253760

lbl_802536E0:
	li       r28, 0
	li       r29, 0

lbl_802536E8:
	lwz      r3, 0x1c(r31)
	lwzx     r3, r3, r29
	cmplwi   r3, 0
	beq      lbl_80253734
	lwz      r0, 0x278(r3)
	cmplwi   r0, 0
	beq      lbl_80253734
	lwz      r3, 0x20(r31)
	li       r4, 1
	lwzx     r3, r3, r29
	bl       setController__Q24Game10ContRumbleFb
	lwz      r4, 0x1c(r31)
	lwz      r3, 0x20(r31)
	lwzx     r4, r4, r29
	lwzx     r3, r3, r29
	lwz      r4, 0x278(r4)
	lha      r0, 0x7c(r4)
	stw      r0, 4(r3)
	b        lbl_80253744

lbl_80253734:
	lwz      r3, 0x20(r31)
	li       r4, 0
	lwzx     r3, r3, r29
	bl       setController__Q24Game10ContRumbleFb

lbl_80253744:
	lwz      r3, 0x20(r31)
	lwzx     r3, r3, r29
	bl       update__Q24Game10ContRumbleFv
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 2
	blt      lbl_802536E8

lbl_80253760:
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
 * Address:	80253780
 * Size:	0001A4
 */
void RumbleMgr::startRumble(int, Vector3f&, int)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_80253910
	lwz      r4, 0x30(r27)
	cmplwi   r4, 0
	beq      lbl_80253838
	lfs      f1, 4(r4)
	lfs      f0, 4(r29)
	lfs      f3, 0(r4)
	fsubs    f4, f1, f0
	lfs      f2, 0(r29)
	lfs      f1, 8(r4)
	lfs      f0, 8(r29)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051A97C@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80253804
	ble      lbl_80253808
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80253808

lbl_80253804:
	fmr      f1, f0

lbl_80253808:
	lfs      f2, lbl_8051A980@sda21(r2)
	fcmpo    cr0, f1, f2
	bge      lbl_80253910
	fsubs    f0, f2, f1
	lwz      r3, 0x20(r27)
	lfs      f1, lbl_8051A984@sda21(r2)
	mr       r4, r28
	lwz      r3, 0(r3)
	fdivs    f0, f0, f2
	fmuls    f1, f1, f0
	bl       startRumble__Q24Game10ContRumbleFif
	b        lbl_80253910

lbl_80253838:
	mr       r5, r6
	addi     r4, r1, 8
	bl       isStartAndEnd__Q24Game9RumbleMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80253910
	lwz      r0, 8(r1)
	mr       r30, r0
	slwi     r31, r0, 2
	b        lbl_80253904

lbl_8025385C:
	lwz      r3, 0x1c(r27)
	lwzx     r4, r3, r31
	cmplwi   r4, 0
	beq      lbl_802538FC
	lwz      r12, 0(r4)
	addi     r3, r1, 0x10
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r29)
	lfs      f0, 0x14(r1)
	lfs      f3, 0(r29)
	fsubs    f4, f1, f0
	lfs      f2, 0x10(r1)
	lfs      f1, 8(r29)
	lfs      f0, 0x18(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051A97C@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802538D0
	ble      lbl_802538D4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802538D4

lbl_802538D0:
	fmr      f1, f0

lbl_802538D4:
	lwz      r3, 0x24(r27)
	lfs      f2, 0x24(r3)
	fcmpo    cr0, f1, f2
	bge      lbl_802538FC
	fsubs    f0, f2, f1
	lwz      r3, 0x20(r27)
	mr       r4, r28
	lwzx     r3, r3, r31
	fdivs    f1, f0, f2
	bl       startRumble__Q24Game10ContRumbleFif

lbl_802538FC:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80253904:
	lwz      r0, 0xc(r1)
	cmpw     r30, r0
	blt      lbl_8025385C

lbl_80253910:
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80253924
 * Size:	0000B8
 */
void RumbleMgr::startRumble(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_802539BC
	lwz      r0, 0x30(r28)
	cmplwi   r0, 0
	beq      lbl_80253974
	lwz      r3, 0x20(r28)
	lfs      f1, lbl_8051A988@sda21(r2)
	lwz      r3, 0(r3)
	bl       startRumble__Q24Game10ContRumbleFif
	b        lbl_802539BC

lbl_80253974:
	addi     r4, r1, 8
	bl       isStartAndEnd__Q24Game9RumbleMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_802539BC
	lwz      r0, 8(r1)
	mr       r30, r0
	slwi     r31, r0, 2
	b        lbl_802539B0

lbl_80253994:
	lwz      r3, 0x20(r28)
	mr       r4, r29
	lfs      f1, lbl_8051A988@sda21(r2)
	lwzx     r3, r3, r31
	bl       startRumble__Q24Game10ContRumbleFif
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_802539B0:
	lwz      r0, 0xc(r1)
	cmpw     r30, r0
	blt      lbl_80253994

lbl_802539BC:
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
 * Address:	802539DC
 * Size:	000094
 */
void RumbleMgr::stopRumble(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_80253A50
	addi     r4, r1, 8
	bl       isStartAndEnd__Q24Game9RumbleMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80253A50
	lwz      r0, 8(r1)
	mr       r30, r0
	slwi     r31, r0, 2
	b        lbl_80253A44

lbl_80253A2C:
	lwz      r3, 0x20(r28)
	mr       r4, r29
	lwzx     r3, r3, r31
	bl       rumbleStop__Q24Game10ContRumbleFi
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80253A44:
	lwz      r0, 0xc(r1)
	cmpw     r30, r0
	blt      lbl_80253A2C

lbl_80253A50:
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
 * Address:	80253A70
 * Size:	000088
 */
void RumbleMgr::stopRumble(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_80253ADC
	mr       r5, r4
	addi     r4, r1, 8
	bl       isStartAndEnd__Q24Game9RumbleMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80253ADC
	lwz      r0, 8(r1)
	mr       r30, r0
	slwi     r31, r0, 2
	b        lbl_80253AD0

lbl_80253ABC:
	lwz      r3, 0x20(r29)
	lwzx     r3, r3, r31
	bl       rumbleStop__Q24Game10ContRumbleFv
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80253AD0:
	lwz      r0, 0xc(r1)
	cmpw     r30, r0
	blt      lbl_80253ABC

lbl_80253ADC:
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
 * Address:	80253AF8
 * Size:	00007C
 */
bool RumbleMgr::isRumbleUpdateOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_80253B40
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80253B40
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	bne      lbl_80253B40
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80253B40
	li       r3, 1
	b        lbl_80253B60

lbl_80253B40:
	li       r31, 0

lbl_80253B44:
	mr       r3, r31
	li       r4, 2
	bl       PADControlMotor
	addi     r31, r31, 1
	cmpwi    r31, 4
	blt      lbl_80253B44
	li       r3, 0

lbl_80253B60:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80253B74
 * Size:	00005C
 */
void RumbleMgr::setZukanRumble(Controller*, Vector3f*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r6, gameSystem__4Game@sda21(r13)
	cmplwi   r6, 0
	beq      lbl_80253BA4
	lwz      r0, 0x44(r6)
	cmpwi    r0, 4
	bne      lbl_80253BA4
	stw      r4, 0x2c(r3)
	stw      r5, 0x30(r3)
	b        lbl_80253BC0

lbl_80253BA4:
	lis      r3, lbl_804848F0@ha
	lis      r5, lbl_80484900@ha
	addi     r3, r3, lbl_804848F0@l
	li       r4, 0x15e
	addi     r5, r5, lbl_80484900@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80253BC0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80253BD0
 * Size:	000068
 */
bool RumbleMgr::isStartAndEnd(int*, int)
{
	/*
	cmpwi    r5, 2
	bne      lbl_80253BF0
	li       r3, 0
	li       r0, 2
	stw      r3, 0(r4)
	li       r3, 1
	stw      r0, 4(r4)
	blr

lbl_80253BF0:
	cmpwi    r5, 0
	bne      lbl_80253C10
	li       r3, 0
	li       r0, 1
	stw      r3, 0(r4)
	li       r3, 1
	stw      r0, 4(r4)
	blr

lbl_80253C10:
	cmpwi    r5, 1
	bne      lbl_80253C30
	li       r3, 1
	li       r0, 2
	stw      r3, 0(r4)
	li       r3, 1
	stw      r0, 4(r4)
	blr

lbl_80253C30:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80253C38
 * Size:	0000C0
 */
void RumbleMgr::readRumbleParms(char*)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r7, 0
	li       r8, 2
	stw      r31, 0x43c(r1)
	li       r9, 0
	li       r10, 0
	stw      r30, 0x438(r1)
	mr       r30, r3
	mr       r3, r4
	li       r4, 0
	stw      r0, 8(r1)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_80253CC4
	mr       r4, r31
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_80253CAC
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_80253CAC:
	lwz      r3, 0x24(r30)
	addi     r4, r1, 0x10
	bl       read__10ParametersFR6Stream
	mr       r3, r31
	bl       __dla__FPv
	b        lbl_80253CE0

lbl_80253CC4:
	lis      r3, lbl_804848F0@ha
	lis      r5, lbl_80484910@ha
	addi     r3, r3, lbl_804848F0@l
	li       r4, 0x199
	addi     r5, r5, lbl_80484910@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80253CE0:
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80253CF8
 * Size:	0000C0
 */
void RumbleMgr::readRumbleData(char*)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r7, 0
	li       r8, 2
	stw      r31, 0x43c(r1)
	li       r9, 0
	li       r10, 0
	stw      r30, 0x438(r1)
	mr       r30, r3
	mr       r3, r4
	li       r4, 0
	stw      r0, 8(r1)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_80253D84
	mr       r4, r31
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_80253D6C
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_80253D6C:
	lwz      r3, 0x28(r30)
	addi     r4, r1, 0x10
	bl       read__Q24Game13RumbleDataMgrFR6Stream
	mr       r3, r31
	bl       __dla__FPv
	b        lbl_80253DA0

lbl_80253D84:
	lis      r3, lbl_804848F0@ha
	lis      r5, lbl_80484928@ha
	addi     r3, r3, lbl_804848F0@l
	li       r4, 0x1b8
	addi     r5, r5, lbl_80484928@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80253DA0:
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80253DB8
 * Size:	000060
 */
RumbleMgr::~RumbleMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80253DFC
	lis      r5, __vt__Q24Game9RumbleMgr@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game9RumbleMgr@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80253DFC
	mr       r3, r30
	bl       __dl__FPv

lbl_80253DFC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
