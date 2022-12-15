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
ActTeki::ActTeki(Game::Piki* piki)
    : Action(piki)
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

	m_moveSpeed = 0.0f;

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
	else if (m_followingTeki->isTeki() && m_followingTeki->isEvent(0, Game::EB_Bittered)
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

	f32 distance = _distanceBetweenCheck(destPos, sourcePos);

	Game::Footmarks* fm = m_followingTeki->getFootmarks();
	if (fm == nullptr) {
		return;
	}

	Game::Footmark* currentFm = m_followMark;
	float dist                = 12800.0f;
	if (currentFm) {
		dist = _distanceBetween(destPos, currentFm->m_position);
	}

	m_followMark = fm->get(0);
	for (int i = fm->_08 - 1; i >= 0; i--) {
		Game::Footmark* curMark = fm->get(i);

		f32 curDist = _distanceBetweenCheckDouble(destPos, curMark->m_position); // sure.

		if (dist > curDist && curDist < 100.0f) {
			m_followMark = curMark;
			break;
		}
	}

	if (!m_followMark) {
		return;
	}

	_28 = 0;

	if (distance > 100.0f) {
		m_moveSpeed = 1.0f;
	} else {
		m_moveSpeed = (0.5f * randFloat()) + 0.5f;
	}
}

/*
 * --INFO--
 * Address:	80212FD4
 * Size:	000344
 * TODO
 */
void ActTeki::test_0()
{
	switch (_28) {
	case 1: {
		Vector3f sourcePos = m_parent->getPosition();
		Vector3f destPos   = m_followingTeki->getPosition();

		f32 distance = _distanceBetween2(destPos, sourcePos);

		_20 -= sys->m_deltaTime;

		Game::Piki* piki = m_parent;
		piki->m_velocity = Vector3f(0.0f);

		if (_20 <= 0.0f || distance > 100.0f) {
			makeTarget();
		}

		break;
	}

	case 0: {
		Vector3f sourcePos = m_parent->getPosition();
		Vector3f destPos   = m_followMark->m_position;

		Vector3f dir = destPos - sourcePos;
		f32 dist     = dir.normalise();

		if (dist > 100.0f) {
			makeTarget();
		} else if (dist < 50.0f) {
			Game::Piki* piki = m_parent;
			piki->m_velocity = Vector3f(0, 0, 0);
			_28              = 1;
			setTimer();
			return;
		}

		if (dist < 50.0f) {
			Vector3f velDir = m_followingTeki->getVelocity();

			_normalise(velDir);

			dir = dir * 0.5f + velDir * 0.5f;

			m_parent->setSpeed(m_moveSpeed, dir);
			return;
		}

		m_parent->setSpeed(m_moveSpeed, dir);
		break;
	}

	default:
		break;
	}
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

	f32 dist = _distanceBetween2(themPos, thisPos);

	f32 weight;
	if (dist < 100.0f) {
		weight = 0.3f;
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
	Vector3f creaturePos = event.m_collidingCreature->getPosition();
	Vector3f parentPos   = m_parent->getPosition();

	Vector3f sep = parentPos - creaturePos;
	f32 dotProd  = dot(_2C, sep);
	_44          = dotProd;
	if (dotProd > 0.0f) {
		_44 = 0.1f;
	} else {
		_44 = -0.1f;
	}
}
} // namespace PikiAI
