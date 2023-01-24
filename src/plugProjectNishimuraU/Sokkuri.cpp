#include "Game/Entities/Sokkuri.h"
#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "efx/TJgm.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Sokkuri {

/*
 * --INFO--
 * Address:	802F1264
 * Size:	000130
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	802F1394
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802F1398
 * Size:	00008C
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LifegaugeVisible);
	m_isHiding  = true;
	m_timer     = 0.0f;
	m_nextState = SOKKURI_NULL;
	resetMoveVelocity();
	m_fsm->start(this, SOKKURI_Stay, nullptr);
	doAnimationCullingOff();
}

/*
 * --INFO--
 * Address:	802F1424
 * Size:	000034
 */
void Obj::doUpdate() { m_fsm->exec(this); }

/*
 * --INFO--
 * Address:	802F1458
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802F145C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802F147C
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	m_fsm = fsm;
	m_fsm->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	802F14C8
 * Size:	000118
 */
void Obj::getShadowParam(ShadowParam& param)
{
	if (isAlive() && !isUnderground() && getStateID() != SOKKURI_Appear) {
		param.m_position = m_position;
		param.m_position.y += 2.5f;
		param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);

		if (isEvent(1, EB2_IsEarthquake)) {
			param.m_boundingSphere.m_radius = 50.0f;
		} else {
			param.m_boundingSphere.m_radius = 7.5f;
		}

		param.m_size = 10.0f;
	} else {
		param.m_position                  = m_position;
		param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
		param.m_boundingSphere.m_radius   = 0.1f;
		param.m_size                      = 0.1f;
	}
}

/*
 * --INFO--
 * Address:	802F15E8
 * Size:	00009C
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && creature->isPiki() && !isEvent(0, EB_IsBittered)) {
		int stateID = getStateID();
		if (stateID != SOKKURI_Dead && stateID != SOKKURI_Press) {
			m_fsm->transit(this, SOKKURI_Press, nullptr);
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	802F1684
 * Size:	00009C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && creature->isPiki() && !isEvent(0, EB_IsBittered)) {
		int stateID = getStateID();
		if (stateID != SOKKURI_Dead && stateID != SOKKURI_Press) {
			m_fsm->transit(this, SOKKURI_Press, nullptr);
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	802F1720
 * Size:	0000FC
 */
void Obj::wallCallback(const MoveInfo& moveInfo)
{
	m_targetPosition   = moveInfo.m_reflectPosition;
	m_targetPosition.y = 0.0f;
	m_targetPosition.normalise();

	m_targetPosition.x *= 1000.0f;
	m_targetPosition.y *= 1000.0f;
	m_targetPosition.z *= 1000.0f;

	m_targetPosition.x += m_position.x;
	m_targetPosition.y += m_position.y;
	m_targetPosition.z += m_position.z;
}

/*
 * --INFO--
 * Address:	802F181C
 * Size:	000040
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	enableEvent(0, EB_LifegaugeVisible);
	m_isHiding = false;
}

/*
 * --INFO--
 * Address:	802F185C
 * Size:	000020
 */
void Obj::doFinishStoneState() { EnemyBase::doFinishStoneState(); }

/*
 * --INFO--
 * Address:	802F187C
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(8, nullptr); }

/*
 * --INFO--
 * Address:	802F18A4
 * Size:	0000AC
 */
Vector3f Obj::getOffsetForMapCollision()
{
	if (isAlive()) {
		return Vector3f::zero;
	}

	Vector3f offset = m_model->getJoint("leaf_joint1")->getWorldMatrix()->getBasis(3);
	offset.x -= m_position.x;
	offset.y = 0.0f;
	offset.z -= m_position.z;
	return offset;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
Creature* Obj::getSearchedTarget()
{
	if (gameSystem && gameSystem->m_mode == GSM_PIKLOPEDIA) {
		return EnemyFunc::getNearestPikmin(this, C_PARMS->m_general.m_viewAngle.m_value, C_PARMS->m_general.m_sightRadius.m_value, nullptr,
		                                   nullptr);
	}

	return EnemyFunc::getNearestNavi(this, C_PARMS->m_general.m_viewAngle.m_value, C_PARMS->m_general.m_sightRadius.m_value, nullptr,
	                                 nullptr);
}

/*
 * --INFO--
 * Address:	802F1950
 * Size:	00007C
 */
bool Obj::isAppear()
{
	if (getSearchedTarget()) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802F19CC
 * Size:	0000A8
 */
bool Obj::isDisappear()
{
	if (sqrDistanceXZ(m_position, m_homePosition) < SQUARE(*C_PARMS->m_general.m_homeRadius())) {
		if (!getSearchedTarget()) {
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	802F1A74
 * Size:	0001E0
 */
void Obj::setNextMoveInfo()
{
	f32 travelTime = C_PROPERPARMS.m_fp01.m_value - C_PROPERPARMS.m_fp02.m_value;
	m_timer        = randWeightFloat(travelTime);

	f32 movingAngle = C_PROPERPARMS.m_fp03.m_value - C_PROPERPARMS.m_fp04.m_value;
	f32 randAngle   = randWeightFloat(movingAngle) + getMinAngle();

	randAngle = randAngle * DEG2RAD * PI;

	if (randWeightFloat(1.0f) < 0.5f) {
		randAngle = randAngle + m_faceDir;
	} else {
		randAngle -= m_faceDir;
	}

	m_targetPosition.x = 1000.0f * pikmin2_sinf(randAngle) + m_position.x;
	m_targetPosition.y = m_position.y;
	m_targetPosition.z = 1000.0f * pikmin2_cosf(randAngle) + m_position.z;
}

/*
 * --INFO--
 * Address:	802F1C54
 * Size:	00016C
 */
void Obj::updateMoveState()
{
	if (sqrDistanceXZ(m_position, m_homePosition) > SQUARE(*C_PARMS->m_general.m_territoryRadius())) {
		m_targetPosition = m_homePosition;
	}

	if (m_waterBox) {
		Vector3f velocity    = getVelocity();
		Vector3f newVelocity = velocity;
		newVelocity.y += 5.0f;
		setVelocity(newVelocity);

		m_moveVelocity = adjustVal(m_moveVelocity, C_PROPERPARMS.m_fp21.m_value, 10.0f);

	} else {
		m_moveVelocity = adjustVal(m_moveVelocity, C_PARMS->m_general.m_moveSpeed.m_value, 25.0f);
	}
}

/*
 * --INFO--
 * Address:	802F1DC0
 * Size:	00002C
 */
void Obj::resetMoveVelocity()
{
	if (m_waterBox) {
		m_moveVelocity = C_PROPERPARMS.m_fp21.m_value;
		return;
	}

	m_moveVelocity = C_PARMS->m_general.m_moveSpeed.m_value;
}

/*
 * --INFO--
 * Address:	802F1DEC
 * Size:	000078
 */
void Obj::setNextWaitInfo()
{
	f32 waitTime = C_PROPERPARMS.m_fp12.m_value - C_PROPERPARMS.m_fp13.m_value;
	m_timer      = randWeightFloat(waitTime);
}

/*
 * --INFO--
 * Address:	802F1E64
 * Size:	0000C4
 */
void Obj::createDownEffect(f32 groundScale, f32 waterScale)
{
	if (m_waterBox) {
		if (waterScale > 0.0f) {
			Vector3f position = m_position;
			position.y        = *m_waterBox->getSeaHeightPtr();
			if (position.y - m_position.y < 22.0f) {
				createSplashDownEffect(position, waterScale);
			}
		}
	} else if (groundScale > 0.0f) {
		createDropEffect(m_position, groundScale);
	}
}

/*
 * --INFO--
 * Address:	802F1F28
 * Size:	0000C0
 */
void Obj::createBubbleEffect()
{
	if (m_waterBox) {
		if (getSubmergedDepth() > 10.0f) {
			efx::Arg fxArg(this);
			efx::TJgmBubble bubbleFX;
			bubbleFX.create(&fxArg);
		}
	}
}

/*
 * --INFO--
 * Address:	802F1FE8
 * Size:	000048
 */
void Obj::createEfxHamon()
{
	if (!isUnderground()) {
		EnemyBase::createEfxHamon();
	}
}

} // namespace Sokkuri
} // namespace Game
