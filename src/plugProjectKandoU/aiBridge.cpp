#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804820A8
    lbl_804820A8:
        .4byte 0x61637442
        .4byte 0x72696467
        .4byte 0x65000000
        .4byte 0x41637442
        .4byte 0x72696467
        .4byte 0x65417267
        .4byte 0x00000000
        .4byte 0x61694272
        .4byte 0x69646765
        .4byte 0x2E637070
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x53746963
        .4byte 0x6B417474
        .4byte 0x61636B41
        .4byte 0x6374696F
        .4byte 0x6E417267
        .4byte 0x00000000
        .4byte 0x476F746F
        .4byte 0x506F7341
        .4byte 0x6374696F
        .4byte 0x6E417267
        .4byte 0x00000000
        .4byte 0x466F6C6C
        .4byte 0x6F775665
        .4byte 0x63746F72
        .4byte 0x4669656C
        .4byte 0x64416374
        .4byte 0x696F6E41
        .4byte 0x72670000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26PikiAI9ActBridge
    __vt__Q26PikiAI9ActBridge:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI9ActBridgeFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI9ActBridgeFv
        .4byte cleanup__Q26PikiAI9ActBridgeFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI9ActBridgeFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI9ActBridgeFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI9ActBridgeFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI9ActBridgeFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0
        .4byte "@52@4@onKeyEvent__Q26PikiAI9ActBridgeFRCQ28SysShape8KeyEvent"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519F58
    lbl_80519F58:
        .4byte 0x42726964
        .4byte 0x67650000
    .global lbl_80519F60
    lbl_80519F60:
        .float 0.5
        .4byte 0x00000000
*/

#include "Dolphin/rand.h"
#include "Dolphin/string.h"

#include "JSystem/JUT/JUTException.h"

#include "Game/Navi.h"
#include "Game/Piki.h"
#include "Game/rumble.h"
#include "Game/CollEvent.h"
#include "Game/Interaction.h"
#include "Game/gameStat.h"

#include "PikiAI.h"

namespace PikiAI {
/*
 * --INFO--
 * Address:	80212288
 * Size:	0000FC
 */
ActBridge::ActBridge(Game::Piki* parent)
    : Action(parent)
{
	_30 = 0;

	m_stickAttack = new ActStickAttack(parent);
	m_gotoPos     = new ActGotoPos(parent);
	m_followField = new ActFollowVectorField(parent);

	m_info = "Bridge";
}

/*
 * --INFO--
 * Address:	80212384
 * Size:	0000C8
 */
void ActBridge::init(PikiAI::ActionArg* actionArg)
{
	ActBridgeArg* arg = (ActBridgeArg*)actionArg;
	P2ASSERTLINE(62, (arg) && strcmp("ActBridgeArg", arg->getName()));

	Game::GameStat::workPikis->inc(m_parent);

	_10 = arg->_04;
	_30 = 0;

	initFollow();

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	lis      r4, lbl_804820A8@ha
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r31, r4, lbl_804820A8@l
	beq      lbl_802123E8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0xc
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_802123E8
	li       r30, 1

lbl_802123E8:
	clrlwi.  r0, r30, 0x18
	bne      lbl_80212404
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x2c
	li       r4, 0x3e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80212404:
	lis      r3, workPikis__Q24Game8GameStat@ha
	lwz      r4, 4(r28)
	addi     r3, r3, workPikis__Q24Game8GameStat@l
	bl       inc__Q34Game8GameStat15PikiNaviCounterFPQ24Game4Piki
	lwz      r4, 4(r29)
	li       r0, 0
	mr       r3, r28
	stw      r4, 0x10(r28)
	stb      r0, 0x30(r28)
	bl       initFollow__Q26PikiAI9ActBridgeFv
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
 * Address:	8021244C
 * Size:	000068
 */
void ActBridge::initFollow(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	addi     r4, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lwz      r5, 0x10(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI26FollowVectorFieldActionArg@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q26PikiAI26FollowVectorFieldActionArg@l
	stw      r0, 8(r1)
	stw      r5, 0xc(r1)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	sth      r0, 0x14(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void ActBridge::initGoto(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void ActBridge::initStickAttack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void ActBridge::calcAttackPos(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802124B4
 * Size:	00031C
 */
s32 ActBridge::exec(void)
{
	return 0;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802124F4
	li       r0, 0
	li       r3, 0
	stb      r0, 0x30(r31)
	b        lbl_802127BC

lbl_802124F4:
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80212518
	li       r3, 2
	b        lbl_802127BC

lbl_80212518:
	lhz      r0, 0x14(r31)
	cmpwi    r0, 1
	beq      lbl_80212630
	bge      lbl_80212534
	cmpwi    r0, 0
	bge      lbl_802126F0
	b        lbl_802127B0

lbl_80212534:
	cmpwi    r0, 3
	bge      lbl_802127B0
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_80212568
	li       r3, 0
	b        lbl_802127BC

lbl_80212568:
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	beq      lbl_8021258C
	cmpwi    r3, 2
	bne      lbl_80212624

lbl_8021258C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x30(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 4
	li       r3, -1
	stw      r4, 0x30(r1)
	li       r4, 0
	stfs     f1, 0x34(r1)
	stw      r5, 0x38(r1)
	stw      r3, 0x3c(r1)
	stb      r0, 0x40(r1)
	lbz      r0, 0x30(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802125F0
	lwz      r3, 4(r31)
	lfs      f0, lbl_80519F60@sda21(r2)
	lfs      f1, 0xd0(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802125F0
	li       r4, 1

lbl_802125F0:
	clrlwi.  r0, r4, 0x18
	beq      lbl_80212600
	li       r0, 0x19
	stw      r0, 0x3c(r1)

lbl_80212600:
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x30
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_802127B0

lbl_80212624:
	li       r0, 0
	stb      r0, 0x30(r31)
	b        lbl_802127BC

lbl_80212630:
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_802126E4
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x1c(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 4
	li       r3, -1
	stw      r4, 0x1c(r1)
	li       r4, 0
	stfs     f1, 0x20(r1)
	stw      r5, 0x24(r1)
	stw      r3, 0x28(r1)
	stb      r0, 0x2c(r1)
	lbz      r0, 0x30(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802126B0
	lwz      r3, 4(r31)
	lfs      f0, lbl_80519F60@sda21(r2)
	lfs      f1, 0xd0(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802126B0
	li       r4, 1

lbl_802126B0:
	clrlwi.  r0, r4, 0x18
	beq      lbl_802126C0
	li       r0, 0x19
	stw      r0, 0x28(r1)

lbl_802126C0:
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x1c
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_802127B0

lbl_802126E4:
	li       r0, 0
	stb      r0, 0x30(r31)
	b        lbl_802127BC

lbl_802126F0:
	lwz      r3, 0x1c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_802127A4
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 4
	li       r3, -1
	stw      r4, 8(r1)
	li       r4, 0
	stfs     f1, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r3, 0x14(r1)
	stb      r0, 0x18(r1)
	lbz      r0, 0x30(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80212770
	lwz      r3, 4(r31)
	lfs      f0, lbl_80519F60@sda21(r2)
	lfs      f1, 0xd0(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80212770
	li       r4, 1

lbl_80212770:
	clrlwi.  r0, r4, 0x18
	beq      lbl_80212780
	li       r0, 0x19
	stw      r0, 0x14(r1)

lbl_80212780:
	lwz      r3, 0x18(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_802127B0

lbl_802127A4:
	li       r0, 0
	stb      r0, 0x30(r31)
	b        lbl_802127BC

lbl_802127B0:
	li       r0, 0
	li       r3, 1
	stb      r0, 0x30(r31)

lbl_802127BC:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802127D0
 * Size:	00005C
 */
void ActBridge::cleanup(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, workPikis__Q24Game8GameStat@ha
	lwz      r4, 4(r31)
	addi     r3, r3, workPikis__Q24Game8GameStat@l
	bl       dec__Q34Game8GameStat15PikiNaviCounterFPQ24Game4Piki
	lhz      r0, 0x14(r31)
	cmpwi    r0, 2
	beq      lbl_80212804
	b        lbl_80212818

lbl_80212804:
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80212818:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021282C
 * Size:	000110
 */
void ActBridge::platCallback(Game::Piki*, Game::PlatEvent&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x10(r5)
	lwz      r0, 0x10(r31)
	lwz      r4, 0(r5)
	cmplw    r3, r0
	bne      lbl_80212888
	lwz      r3, 0x100(r4)
	addis    r0, r3, 0x9d8e
	cmplwi   r0, 0x626b
	bne      lbl_80212874
	lbz      r0, 0x30(r31)
	ori      r0, r0, 1
	stb      r0, 0x30(r31)
	b        lbl_80212888

lbl_80212874:
	cmplwi   r0, 0x5f5f
	bne      lbl_80212888
	lbz      r0, 0x30(r31)
	ori      r0, r0, 2
	stb      r0, 0x30(r31)

lbl_80212888:
	lhz      r0, 0x14(r31)
	cmplwi   r0, 1
	bne      lbl_80212928
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 4
	li       r3, -1
	stw      r4, 8(r1)
	li       r4, 0
	stfs     f1, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r3, 0x14(r1)
	stb      r0, 0x18(r1)
	lbz      r0, 0x30(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802128F8
	lwz      r3, 4(r31)
	lfs      f0, lbl_80519F60@sda21(r2)
	lfs      f1, 0xd0(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802128F8
	li       r4, 1

lbl_802128F8:
	clrlwi.  r0, r4, 0x18
	beq      lbl_80212908
	li       r0, 0x19
	stw      r0, 0x14(r1)

lbl_80212908:
	lwz      r3, 0x18(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x14(r31)

lbl_80212928:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021293C
 * Size:	000004
 */
void ActBridge::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	80212940
 * Size:	000004
 */
void ActBridge::bounceCallback(Game::Piki*, Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	80212944
 * Size:	000004
 */
void ActBridge::onKeyEvent(SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	80212948
 * Size:	000014
 */
// void @52 @4 @PikiAI::ActBridge::onKeyEvent(SysShape::KeyEvent const&)
// {
// 	/*
// 	li       r11, 4
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -52
// 	b        onKeyEvent__Q26PikiAI9ActBridgeFRCQ28SysShape8KeyEvent
// 	*/
// }
} // namespace PikiAI
