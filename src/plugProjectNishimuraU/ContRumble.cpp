#include "Dolphin/pad.h"
#include "Game/rumble.h"
#include "types.h"
/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80484850
    lbl_80484850:
        .4byte 0x3ECCCCCD
        .4byte 0x3F0CCCCD
        .float 1.0
    .global lbl_8048485C
    lbl_8048485C:
        .4byte 0x3E4CCCCD
        .4byte 0x3EB33333
        .float 0.5

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game10RumbleNode
    __vt__Q24Game10RumbleNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game10RumbleNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A968
    lbl_8051A968:
        .4byte 0x00000000
    .global lbl_8051A96C
    lbl_8051A96C:
        .float 1.0
    .global lbl_8051A970
    lbl_8051A970:
        .4byte 0x40400000
    .global lbl_8051A974
    lbl_8051A974:
        .4byte 0x41F00000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80252B20
 * Size:	000158
 */
ContRumble::ContRumble(int p1, int p2)
    : _00(true)
    , _04(p1)
    , _08(0.0f, 0.0f, 0.0f)
    , _14(new RumbleNode())
    , _18(new RumbleNode())
{
	for (int i = 0; i < p2; i++) {
		_18->add(new RumbleNode());
	}
	m_dataMgr = nullptr;
}

/*
 * --INFO--
 * Address:	80252C78
 * Size:	00008C
 */
void ContRumble::init()
{
	_00               = true;
	_08.x             = 0.0f;
	_08.y             = 0.0f;
	_08.z             = 0.0f;
	RumbleNode* node1 = (RumbleNode*)_14->m_child;
	// This assumes that _14's head has at least child node
	while (node1) {
		RumbleNode* node2 = (RumbleNode*)node1->m_next;
		node1->del();
		_18->add(node1);
		node1 = node2;
	}
	PADControlMotor(_04, 2);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_8051A968@sda21(r2)
	stw      r0, 0x24(r1)
	li       r0, 1
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stb      r0, 0(r3)
	stfs     f0, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x10(r3)
	lwz      r3, 0x14(r3)
	lwz      r30, 0x10(r3)
	b        lbl_80252CD4

lbl_80252CB8:
	lwz      r31, 4(r30)
	mr       r3, r30
	bl       del__5CNodeFv
	lwz      r3, 0x18(r29)
	mr       r4, r30
	bl       add__5CNodeFP5CNode
	mr       r30, r31

lbl_80252CD4:
	cmplwi   r30, 0
	bne      lbl_80252CB8
	lwz      r3, 4(r29)
	li       r4, 2
	bl       PADControlMotor
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
 * Address:	80252D04
 * Size:	000290
 */
void ContRumble::update()
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
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lfs      f30, lbl_8051A968@sda21(r2)
	lwz      r3, 0x14(r3)
	fmr      f31, f30
	lwz      r3, 0x10(r3)
	b        lbl_80252E9C

lbl_80252D44:
	lwz      r31, 4(r3)
	mr       r30, r3
	stfs     f31, 0x1c(r3)
	lwz      r6, 0x2c(r3)
	cmplwi   r6, 0
	beq      lbl_80252DF8
	lwz      r3, 0(r6)
	li       r4, 0
	mr       r5, r4
	addic.   r0, r3, -1
	mtctr    r0
	ble      lbl_80252DE4

lbl_80252D74:
	lwz      r3, 4(r6)
	addi     r0, r4, 1
	lfs      f1, 0x24(r30)
	lfsx     f0, r3, r5
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80252DD8
	slwi     r0, r0, 2
	lfsx     f3, r3, r0
	fcmpo    cr0, f1, f3
	bge      lbl_80252DD8
	slwi     r5, r4, 2
	lwz      r4, 8(r6)
	lfsx     f5, r3, r5
	lfs      f2, lbl_8051A96C@sda21(r2)
	fsubs    f4, f1, f5
	lfsx     f0, r4, r0
	fsubs    f3, f3, f5
	lfsx     f1, r4, r5
	fdivs    f3, f4, f3
	fsubs    f2, f2, f3
	fmuls    f0, f3, f0
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1c(r30)
	b        lbl_80252DE4

lbl_80252DD8:
	addi     r5, r5, 4
	addi     r4, r4, 1
	bdnz     lbl_80252D74

lbl_80252DE4:
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x20(r30)
	fmuls    f0, f1, f0
	stfs     f0, 0x1c(r30)
	b        lbl_80252E00

lbl_80252DF8:
	lfs      f0, 0x20(r3)
	stfs     f0, 0x1c(r3)

lbl_80252E00:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x24(r30)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x24(r30)
	lfs      f0, 0x1c(r30)
	fcmpo    cr0, f30, f0
	bge      lbl_80252E24
	fmr      f30, f0

lbl_80252E24:
	lwz      r4, 0x2c(r30)
	cmplwi   r4, 0
	beq      lbl_80252E60
	lwz      r0, 0(r4)
	cmpwi    r0, 0
	ble      lbl_80252E78
	slwi     r3, r0, 2
	lwz      r4, 4(r4)
	addi     r0, r3, -4
	lfs      f1, 0x24(r30)
	lfsx     f0, r4, r0
	fcmpo    cr0, f1, f0
	bge      lbl_80252E78
	li       r0, 0
	b        lbl_80252E7C

lbl_80252E60:
	lfs      f1, 0x24(r30)
	lfs      f0, 0x28(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_80252E78
	li       r0, 0
	b        lbl_80252E7C

lbl_80252E78:
	li       r0, 1

lbl_80252E7C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80252E98
	mr       r3, r30
	bl       del__5CNodeFv
	lwz      r3, 0x18(r29)
	mr       r4, r30
	bl       add__5CNodeFP5CNode

lbl_80252E98:
	mr       r3, r31

lbl_80252E9C:
	cmplwi   r3, 0
	bne      lbl_80252D44
	lfs      f3, lbl_8051A968@sda21(r2)
	fcmpo    cr0, f30, f3
	ble      lbl_80252F24
	lfs      f1, 8(r29)
	lfs      f0, lbl_8051A96C@sda21(r2)
	fadds    f1, f1, f30
	stfs     f1, 8(r29)
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0xc(r29)
	lfs      f1, 0x54(r3)
	fadds    f1, f2, f1
	stfs     f1, 0xc(r29)
	stfs     f3, 0x10(r29)
	lfs      f1, 8(r29)
	fcmpo    cr0, f1, f0
	bge      lbl_80252F00
	lbz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_80252F68
	lwz      r3, 4(r29)
	li       r4, 0
	bl       PADControlMotor
	b        lbl_80252F68

lbl_80252F00:
	fsubs    f0, f1, f0
	stfs     f0, 8(r29)
	lbz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_80252F68
	lwz      r3, 4(r29)
	li       r4, 1
	bl       PADControlMotor
	b        lbl_80252F68

lbl_80252F24:
	stfs     f3, 8(r29)
	lfs      f0, lbl_8051A970@sda21(r2)
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x10(r29)
	lfs      f1, 0x54(r3)
	fadds    f1, f2, f1
	stfs     f1, 0x10(r29)
	lfs      f1, 0x10(r29)
	fcmpo    cr0, f1, f0
	ble      lbl_80252F50
	stfs     f3, 0xc(r29)

lbl_80252F50:
	lbz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_80252F68
	lwz      r3, 4(r29)
	li       r4, 2
	bl       PADControlMotor

lbl_80252F68:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80252F94
 * Size:	000058
 */
void ContRumble::setController(bool p1)
{
	if ((!p1) && _00) {
		PADControlMotor(_04, 2);
	}
	_00 = p1;
}

/*
 * --INFO--
 * Address:	80252FEC
 * Size:	000104
 */
void ContRumble::startRumble(int, float)
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
	stfs     f1, 8(r1)
	lwz      r3, 0x18(r3)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_802530D0
	lwz      r3, 0x1c(r28)
	cmplwi   r3, 0
	beq      lbl_802530D0
	lfs      f1, 0xc(r28)
	lfs      f0, lbl_8051A974@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802530D0
	bl       getRumbleData__Q24Game13RumbleDataMgrFi
	lwz      r4, 0x18(r28)
	mr       r31, r3
	lwz      r30, 0x10(r4)
	mr       r3, r30
	bl       del__5CNodeFv
	cmplwi   r31, 0
	beq      lbl_80253084
	lfs      f1, 8(r1)
	lfs      f0, lbl_8051A968@sda21(r2)
	stw      r29, 0x18(r30)
	stfs     f0, 0x1c(r30)
	stfs     f1, 0x20(r30)
	stfs     f0, 0x24(r30)
	stfs     f0, 0x28(r30)
	stw      r31, 0x2c(r30)
	b        lbl_802530C4

lbl_80253084:
	lfs      f0, lbl_8051A968@sda21(r2)
	mr       r3, r28
	mr       r4, r29
	addi     r5, r1, 8
	stfs     f0, 0xc(r1)
	addi     r6, r1, 0xc
	bl       getRumbleParameter__Q24Game10ContRumbleFiRfRf
	lfs      f2, 0xc(r1)
	lfs      f1, 8(r1)
	lfs      f0, lbl_8051A968@sda21(r2)
	stw      r29, 0x18(r30)
	stfs     f0, 0x1c(r30)
	stfs     f1, 0x20(r30)
	stfs     f0, 0x24(r30)
	stfs     f2, 0x28(r30)
	stw      r31, 0x2c(r30)

lbl_802530C4:
	lwz      r3, 0x14(r28)
	mr       r4, r30
	bl       add__5CNodeFP5CNode

lbl_802530D0:
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
 * Address:	802530F0
 * Size:	000088
 */
void ContRumble::rumbleStop()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x14(r3)
	lwz      r31, 0x10(r3)
	mr       r29, r31
	b        lbl_8025313C

lbl_80253120:
	lwz      r30, 4(r29)
	mr       r3, r29
	bl       del__5CNodeFv
	lwz      r3, 0x18(r28)
	mr       r4, r29
	bl       add__5CNodeFP5CNode
	mr       r29, r30

lbl_8025313C:
	cmplwi   r29, 0
	bne      lbl_80253120
	cmplwi   r31, 0
	beq      lbl_80253158
	lwz      r3, 4(r28)
	li       r4, 2
	bl       PADControlMotor

lbl_80253158:
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
 * Address:	80253178
 * Size:	000090
 */
void ContRumble::rumbleStop(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	lwz      r3, 0x14(r3)
	lwz      r31, 0x10(r3)
	mr       r29, r31
	b        lbl_802531C8

lbl_802531A0:
	lwz      r0, 0x18(r29)
	lwz      r30, 4(r29)
	cmpw     r0, r28
	bne      lbl_802531C4
	mr       r3, r29
	bl       del__5CNodeFv
	lwz      r3, 0x18(r27)
	mr       r4, r29
	bl       add__5CNodeFP5CNode

lbl_802531C4:
	mr       r29, r30

lbl_802531C8:
	cmplwi   r29, 0
	bne      lbl_802531A0
	cmplwi   r31, 0
	beq      lbl_802531F4
	lwz      r3, 0x14(r27)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_802531F4
	lwz      r3, 4(r27)
	li       r4, 2
	bl       PADControlMotor

lbl_802531F4:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80253208
 * Size:	00009C
 */
void ContRumble::getRumbleParameter(int, float&, float&)
{
	/*
	stwu     r1, -0x30(r1)
	lis      r3, 0x55555556@ha
	lis      r7, lbl_80484850@ha
	stw      r31, 0x2c(r1)
	addi     r31, r4, -8
	addi     r10, r7, lbl_80484850@l
	addi     r0, r3, 0x55555556@l
	mulhw    r7, r0, r31
	lwz      r9, 0(r10)
	lwz      r12, 4(r10)
	lis      r4, lbl_8048485C@ha
	lwz      r11, 8(r10)
	addi     r3, r1, 8
	addi     r8, r4, lbl_8048485C@l
	srwi     r0, r7, 0x1f
	add      r7, r7, r0
	stw      r9, 0x14(r1)
	mulli    r0, r7, 3
	lwz      r10, 0(r8)
	lwz      r9, 4(r8)
	addi     r4, r1, 0x14
	lwz      r8, 8(r8)
	slwi     r7, r7, 2
	subf     r0, r0, r31
	stw      r12, 0x18(r1)
	lfs      f1, 0(r5)
	slwi     r0, r0, 2
	stw      r11, 0x1c(r1)
	lfsx     f0, r4, r7
	stw      r10, 8(r1)
	fmuls    f0, f1, f0
	stw      r9, 0xc(r1)
	stw      r8, 0x10(r1)
	stfs     f0, 0(r5)
	lfsx     f0, r3, r0
	stfs     f0, 0(r6)
	lwz      r31, 0x2c(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802532A4
 * Size:	000060
 */
RumbleNode::~RumbleNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802532E8
	lis      r5, __vt__Q24Game10RumbleNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game10RumbleNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_802532E8
	mr       r3, r30
	bl       __dl__FPv

lbl_802532E8:
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
