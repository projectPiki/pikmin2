#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80482138
    lbl_80482138:
        .asciz "aiTeki.cpp"
        .skip 1
    .global lbl_80482144
    lbl_80482144:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26PikiAI7ActTeki
    __vt__Q26PikiAI7ActTeki:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI7ActTekiFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI7ActTekiFv
        .4byte cleanup__Q26PikiAI7ActTekiFv
        .4byte emotion_success__Q26PikiAI7ActTekiFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI7ActTekiFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI7ActTekiFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI7ActTekiFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI7ActTekiFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0 .4byte
   "@72@4@onKeyEvent__Q26PikiAI7ActTekiFRCQ28SysShape8KeyEvent" .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519F68
    lbl_80519F68:
        .4byte 0x54656B69
        .4byte 0x00000000
    .global lbl_80519F70
    lbl_80519F70:
        .4byte 0x00000000
    .global lbl_80519F74
    lbl_80519F74:
        .4byte 0x46480000
    .global lbl_80519F78
    lbl_80519F78:
        .4byte 0x42C80000
    .global lbl_80519F7C
    lbl_80519F7C:
        .float 1.0
    .global lbl_80519F80
    lbl_80519F80:
        .4byte 0x47000000
    .global lbl_80519F84
    lbl_80519F84:
        .float 0.5
    .global lbl_80519F88
    lbl_80519F88:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519F90
    lbl_80519F90:
        .4byte 0x42480000
    .global lbl_80519F94
    lbl_80519F94:
        .4byte 0x41200000
    .global lbl_80519F98
    lbl_80519F98:
        .float 0.3
    .global lbl_80519F9C
    lbl_80519F9C:
        .float 0.1
    .global lbl_80519FA0
    lbl_80519FA0:
        .4byte 0xBDCCCCCD
        .4byte 0x00000000
*/

#include "PikiAI.h"
#include "Game/EnemyBase.h"
#include "Game/enemyInfo.h"
#include "Game/gameStat.h"
#include "Game/PikiState.h"
#include "Game/Footmark.h"
#include "Dolphin/rand.h"

namespace PikiAI {
/*
 * --INFO--
 * Address:	8021295C
 * Size:	000090
 */
ActTeki::ActTeki(Game::Piki* p)
    : Action(p)
{
	m_name          = "Teki";
	m_followingTeki = 0;
	m_followMark    = nullptr;
}

/*
 * --INFO--
 * Address:	802129EC
 * Size:	00010C
 */
void ActTeki::init(PikiAI::ActionArg* arg)
{
	CreatureActionArg* cArg = static_cast<CreatureActionArg*>(arg);
	P2ASSERTLINE(91, cArg);

	m_followingTeki = static_cast<Game::EnemyBase*>(cArg->m_creature);

	_2C = Vector3f(0.0f, 0.0f, 0.0f);

	_38 = 0.0f;
	_3C = 0.0f;
	_40 = 0.0f;

	_44          = 0.0f;
	m_followMark = 0;
	_20          = 0.0f;

	_28 = 1;
	_1C = -1;

	_24 = 0.0f;

	m_toPanicFinish = false;
	if (m_followingTeki->isTeki() && m_followingTeki->getEnemyTypeID() == Game::EnemyTypeID::EnemyID_LeafChappy) {
		m_toPanicFinish = true;
	}

	m_toEmote = false;
	m_parent->startMotion(30, 30, nullptr, nullptr);
}

/*
 * --INFO--
 * Address:	80212AF8
 * Size:	000178
 */
int ActTeki::exec()
{
	// Panic after parent death
	if (!m_followingTeki->isAlive()) {
		if (m_toPanicFinish) {
			m_toPanicFinish = false;

			if (!Game::BaseHIOParms::sTekiChappyFlag) {
				Game::GameStat::alivePikis.inc(m_parent);
			}
		}

		if (m_parent->getStateID() != Game::PIKISTATE_Panic) {
			Game::PanicStateArg arg;
			arg.m_panicType = PIKIPANIC_Panic;
			m_parent->m_fsm->transit(m_parent, Game::PIKISTATE_Panic, &arg);
		}

		return 1;
	}

	// If the beetle is flying, we will just wait around until he comes back
	if (m_followingTeki->isFlying()) {
		m_toEmote = true;
		return 0;
	}
	// If the beetle is bittered, just wait until he comes back
	else if (m_followingTeki->isTeki() && m_followingTeki->m_events.m_flags[0].typeView & Game::EB_Bittered
	         && m_followingTeki->getEnemyTypeID() == Game::EnemyTypeID::EnemyID_Fuefuki) {
		m_toEmote = true;
		return 0;
	}

	// Reset the timer
	Game::InteractFuefukiTimerReset timerReset(m_parent);
	m_followingTeki->stimulate(timerReset);
	test_0();
	return 1;
}

/*
 * --INFO--
 * Address:	80212C70
 * Size:	000050
 */
void ActTeki::emotion_success()
{
	if (m_toEmote) {
		Game::EmotionStateArg arg(EMOTE_Excitement);
		m_parent->m_fsm->transit(m_parent, Game::PIKISTATE_Emotion, &arg);
	}
}

/*
 * --INFO--
 * Address:	80212CC0
 * Size:	000314
 * TODO
 */
void ActTeki::makeTarget()
{
	Vector3f sourcePos = m_parent->getPosition();
	Vector3f destPos   = m_followingTeki->getPosition();

	f32 distance = _distanceBetween(sourcePos, destPos);
	if (distance <= 0.0f) {
		distance = 0.0f;
	}

	Game::Footmarks* fm = m_followingTeki->getFootmarks();
	if (fm == nullptr) {
		return;
	}

	float dist = 12800.0f;
	if (m_followMark) {
		dist = _distanceBetween(sourcePos, destPos);
	}

	m_followMark = fm->get(0);
	for (int i = m_followMark->m_flags; i >= 0; i--) {
		Game::Footmark* curMark = fm->get(i);

		f32 curDist = _distanceBetween(sourcePos, curMark->m_position);
		if (curDist <= 0.0f) {
			curDist = 0.0f;
		}

		if (dist > curDist && curDist < 100.0f) {
			m_followMark = curMark;
			break;
		}
	}

	if (m_followMark) {
		_28 = 0;

		if (distance > 100.0f) {
			_24 = 1.0f;
		} else {
			_24 = 0.5 * randFloat() + 0.5f;
		}
	}
}

/*
 * --INFO--
 * Address:	80212FD4
 * Size:	000344
 */
void ActTeki::test_0()
{
	switch (_28) {
	case 1: {
		Vector3f sourcePos = m_parent->getPosition();
		Vector3f destPos   = m_followingTeki->getPosition();

		f32 distance = (sourcePos - destPos).length();

		_20 -= sys->m_deltaTime;

		Game::Piki* piki = m_parent;
		piki->m_velocity = Vector3f(0, 0, 0);

		break;
	}
	case 0:
	default:
		break;
	}

	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r0, 0x28(r3)
	cmpwi    r0, 1
	beq      lbl_8021301C
	bge      lbl_802132EC
	cmpwi    r0, 0
	bge      lbl_802130F0
	b        lbl_802132EC

lbl_8021301C:
	lwz      r4, 4(r31)
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x20
	lfs      f31, 0x2c(r1)
	lwz      r12, 0(r4)
	lfs      f30, 0x30(r1)
	lwz      r12, 8(r12)
	lfs      f29, 0x34(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x24(r1)
	lfs      f2, 0x20(r1)
	fsubs    f3, f0, f30
	lfs      f1, 0x28(r1)
	fsubs    f2, f2, f31
	lfs      f0, lbl_80519F70@sda21(r2)
	fsubs    f1, f1, f29
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f3, f4, f1
	fcmpo    cr0, f3, f0
	ble      lbl_8021309C
	ble      lbl_802130A0
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802130A0

lbl_8021309C:
	fmr      f3, f0

lbl_802130A0:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x20(r31)
	lfs      f0, 0x54(r3)
	lfs      f1, lbl_80519F70@sda21(r2)
	fsubs    f0, f2, f0
	stfs     f0, 0x20(r31)
	lwz      r3, 4(r31)
	stfs     f1, 0x1e4(r3)
	stfs     f1, 0x1e8(r3)
	stfs     f1, 0x1ec(r3)
	lfs      f0, 0x20(r31)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	beq      lbl_802130E4
	lfs      f0, lbl_80519F78@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_802132EC

lbl_802130E4:
	mr       r3, r31
	bl       makeTarget__Q26PikiAI7ActTekiFv
	b        lbl_802132EC

lbl_802130F0:
	lwz      r4, 4(r31)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	lfs      f2, 0x18(r1)
	lfs      f3, 4(r3)
	lfs      f1, 0(r3)
	lfs      f0, 0x14(r1)
	fsubs    f4, f3, f2
	lfs      f3, 8(r3)
	fsubs    f2, f1, f0
	lfs      f0, 0x1c(r1)
	fmuls    f5, f4, f4
	lfs      f1, lbl_80519F70@sda21(r2)
	fsubs    f3, f3, f0
	stfs     f4, 0x3c(r1)
	fmuls    f0, f2, f2
	stfs     f2, 0x38(r1)
	fmuls    f4, f3, f3
	stfs     f3, 0x40(r1)
	fadds    f0, f0, f5
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80213178
	fmadds   f0, f2, f2, f5
	fadds    f31, f4, f0
	fcmpo    cr0, f31, f1
	ble      lbl_8021317C
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_8021317C

lbl_80213178:
	fmr      f31, f1

lbl_8021317C:
	lfs      f0, lbl_80519F70@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802131B8
	lfs      f0, lbl_80519F7C@sda21(r2)
	lfs      f2, 0x38(r1)
	fdivs    f3, f0, f31
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	b        lbl_802131BC

lbl_802131B8:
	fmr      f31, f0

lbl_802131BC:
	lfs      f0, lbl_80519F78@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802131D4
	mr       r3, r31
	bl       makeTarget__Q26PikiAI7ActTekiFv
	b        lbl_80213208

lbl_802131D4:
	lfs      f0, lbl_80519F90@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80213208
	lwz      r4, 4(r31)
	li       r0, 1
	lfs      f0, lbl_80519F70@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	stw      r0, 0x28(r31)
	bl       setTimer__Q26PikiAI7ActTekiFv
	b        lbl_802132EC

lbl_80213208:
	lfs      f0, lbl_80519F90@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_802132DC
	lwz      r4, 0x10(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f7, 0xc(r1)
	lfs      f3, 0x10(r1)
	fmuls    f1, f7, f7
	lfs      f8, 8(r1)
	fmuls    f2, f3, f3
	lfs      f0, lbl_80519F70@sda21(r2)
	fmadds   f1, f8, f8, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80213264
	ble      lbl_80213268
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80213268

lbl_80213264:
	fmr      f1, f0

lbl_80213268:
	lfs      f0, lbl_80519F70@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80213288
	lfs      f0, lbl_80519F7C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f8, f8, f0
	fmuls    f7, f7, f0
	fmuls    f3, f3, f0

lbl_80213288:
	lfs      f6, lbl_80519F84@sda21(r2)
	addi     r4, r1, 0x38
	lfs      f2, 0x40(r1)
	lfs      f1, 0x3c(r1)
	fmuls    f4, f3, f6
	lfs      f0, 0x38(r1)
	fmuls    f5, f2, f6
	fmuls    f3, f1, f6
	fmuls    f2, f7, f6
	fadds    f4, f5, f4
	fmuls    f1, f0, f6
	fmuls    f0, f8, f6
	fadds    f2, f3, f2
	stfs     f4, 0x40(r1)
	fadds    f0, f1, f0
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x38(r1)
	lwz      r3, 4(r31)
	lfs      f1, 0x24(r31)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	b        lbl_802132EC

lbl_802132DC:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x38
	lfs      f1, 0x24(r31)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"

lbl_802132EC:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80213318
 * Size:	000058
 */
void ActTeki::doDirectDraw(Graphics& gfx)
{
	if (m_followMark) {
		gfx._084 = -1;
		gfx._085 = 100;
		gfx._086 = 10;
		gfx._087 = -1;
		gfx.drawSphere(m_followMark->m_position, 10.0f);
	}
}

/*
 * --INFO--
 * Address:	80213370
 * Size:	000130
 */
void ActTeki::setTimer()
{
	Vector3f thisPos = m_parent->getPosition();
	Vector3f themPos = m_followingTeki->getPosition();

	// INLINE, REGSWAPS
	f32 dist = _distanceBetween2(themPos, thisPos);

	f32 weight;
	if (dist < 100.0f) {
		weight = 0.30000001f;
	} else {
		weight = 0.1f;
	}

	_20 = weight * (0.5f * randFloat() + 1.0f);
}

/*
 * --INFO--
 * Address:	802134A0
 * Size:	000004
 */
void ActTeki::cleanup() { }

/*
 * --INFO--
 * Address:	802134A4
 * Size:	0000E8
 */
void ActTeki::collisionCallback(Game::Piki* piki, Game::CollEvent& event)
{
	Vector3f thisPos = m_parent->getPosition();
	Vector3f themPos = m_followingTeki->getPosition();

	// INLINE, REGSWAPS
	// wtf?
	f32 length = (_2C * (themPos - thisPos)).magnitude();
	if (length > 0.0f) {
		_44 = -0.1f;
	} else {
		_44 = 0.1f;
	}
}
} // namespace PikiAI
