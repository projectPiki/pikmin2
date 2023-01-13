#include "Game/Entities/Fuefuki.h"
#include "Game/Interaction.h"
#include "Game/Footmark.h"
#include "Game/GameSystem.h"
#include "Game/Piki.h"
#include "Game/PikiMgr.h"
#include "Game/MapMgr.h"
#include "efx/TFuebugOnpa.h"
#include "Dolphin/rand.h"
#include "Radar.h"

namespace Game {

/*
 * --INFO--
 * Address:	8029C1C4
 * Size:	000058
 */
bool InteractFuefukiTimerReset::actEnemy(EnemyBase* enemy)
{
	if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_Fuefuki) {
		static_cast<Fuefuki::Obj*>(enemy)->_2D4 = 5.0f;
		return true;
	}

	return false;
}

namespace Fuefuki {

/*
 * --INFO--
 * Address:	8029C21C
 * Size:	000140
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
	createFootmarks();
	createEffect();
}

/*
 * --INFO--
 * Address:	8029C35C
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8029C360
 * Size:	000030
 */
void Obj::birth(Vector3f& position, f32 angle)
{
	EnemyBase::birth(position, angle);
	if (Radar::mgr) {
		Radar::mgr->bornFuefuki();
	}
}

/*
 * --INFO--
 * Address:	8029C390
 * Size:	000088
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	m_dropGroup = 0;
	_2C0        = 0;
	resetAppearTimer();
	m_airborneTimer = 0.0f;
	resetWhisleTimer(true);
	_2D4                    = 0.0f;
	m_whistleRadiusModifier = 0.0f;

	m_stateID = FUEFUKI_NULL;
	m_fsm->start(this, FUEFUKI_Land, nullptr);
}

/*
 * --INFO--
 * Address:	8029C418
 * Size:	000054
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishWhisleEffect();
	if (Radar::mgr) {
		Radar::mgr->dieFuefuki();
	}

	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	8029C46C
 * Size:	000078
 */
void Obj::doUpdate()
{
	m_fsm->exec(this);
	m_appearTimer += sys->m_deltaTime;
	if (_2D4 > 0.0f) {
		_2D4--;
	}

	updateFootmarks();
}

/*
 * --INFO--
 * Address:	8029C4E4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8029C4E8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8029C508
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
 * Address:	8029C554
 * Size:	0000A4
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Sys::Sphere sphere;
	getBoundingSphere(sphere);
	param.m_position.x                = sphere.m_position.x;
	param.m_position.y                = m_position.y + 5.0f;
	param.m_position.z                = sphere.m_position.z;
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_IsEarthquake)) {
		param.m_boundingSphere.m_radius = 75.0f;
	} else {
		param.m_boundingSphere.m_radius = 50.0f;
	}

	param.m_size = 15.0f;
}

/*
 * --INFO--
 * Address:	8029C5F8
 * Size:	000068
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && _2C0 && !isEvent(0, EB_IsBittered)) {
		m_fsm->transit(this, FUEFUKI_Struggle, nullptr);
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	8029C660
 * Size:	000068
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && _2C0 && !isEvent(0, EB_IsBittered)) {
		m_fsm->transit(this, FUEFUKI_Struggle, nullptr);
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	8029C6C8
 * Size:	000044
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (m_whistleRadiusModifier > 0.0f) {
		finishWhisleEffect();
	}
}

/*
 * --INFO--
 * Address:	8029C70C
 * Size:	000044
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (m_whistleRadiusModifier > 0.0f) {
		startWhisle();
	}
}

/*
 * --INFO--
 * Address:	8029C750
 * Size:	000044
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	if (m_whistleRadiusModifier > 0.0f) {
		finishWhisleEffect();
	}
}

/*
 * --INFO--
 * Address:	8029C794
 * Size:	000044
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (m_whistleRadiusModifier > 0.0f) {
		startWhisle();
	}
}

/*
 * --INFO--
 * Address:	8029C7D8
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	8029C80C
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	8029C840
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(9, nullptr); }

/*
 * --INFO--
 * Address:	8029C868
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8029C888
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8029C8A8
 * Size:	0000C0
 */
Vector3f Obj::getOffsetForMapCollision()
{
	int stateID = getStateID();
	if (stateID == FUEFUKI_Dead || stateID == FUEFUKI_Struggle) {
		Sys::Sphere sphere;
		getBoundingSphere(sphere);
		sphere.m_position.x -= m_position.x;
		sphere.m_position.y = 0.0f;
		sphere.m_position.z -= m_position.z;
		return sphere.m_position;

	} else {
		return Vector3f::zero;
	}
}

/*
 * --INFO--
 * Address:	8029C968
 * Size:	000078
 */
void Obj::resetAppearTimer()
{
	f32 weight    = C_PROPERPARMS.m_maxGroundTime.m_value - C_PROPERPARMS.m_minGroundTime.m_value;
	m_appearTimer = randWeightFloat(weight);
}

/*
 * --INFO--
 * Address:	8029C9E0
 * Size:	00002C
 */
void Obj::resetWhisleTimer(bool check)
{
	if (check) {
		m_whistleTimer = C_PROPERPARMS.m_fp12.m_value - C_PROPERPARMS.m_fp11.m_value;
	} else {
		m_whistleTimer = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8029CA0C
 * Size:	000078
 */
bool Obj::isWhisleTimeMax()
{
	if (_2D4 > 0.0f) {
		if (m_stuckPikminCount != 0) {
			if (m_whistleTimer > C_PROPERPARMS.m_fp12.m_value) {
				return true;
			}
		} else if (m_whistleTimer > C_PROPERPARMS.m_fp13.m_value) {
			return true;
		}
	} else if (m_whistleTimer > C_PROPERPARMS.m_fp12.m_value) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8029CA84
 * Size:	000038
 */
void Obj::startWhisle()
{
	disableEvent(0, EB_IsCullable);
	m_whistleTimer          = 0.0f;
	m_whistleRadiusModifier = 0.0f;
	startWhisleEffect();
}

/*
 * --INFO--
 * Address:	8029CABC
 * Size:	000324
 */
void Obj::updateWhisle()
{
	m_whistleRadiusModifier += sys->m_deltaTime;
	if (m_whistleRadiusModifier > 1.0f) {
		m_whistleRadiusModifier = 1.0f;
	}

	f32 whistleRadius = m_whistleRadiusModifier * C_PARMS->m_general.m_attackRadius.m_value;
	updateWhisleEffect(whistleRadius);

	f32 whistleDiameter = whistleRadius * whistleRadius;
	Iterator<Piki> iter(pikiMgr);

	CI_LOOP(iter)
	{
		Piki* currPiki = (*iter);
		if (currPiki->isAlive() && currPiki->isPikmin() && !currPiki->isStickToMouth() && !currPiki->isMyPikmin(this)) {
			Vector3f pikiPos = currPiki->getPosition();
			if (sqrDistanceXZ(m_position, pikiPos) < whistleDiameter) {
				InteractFueFuki whistle(this);
				currPiki->stimulate(whistle);
			}
		}
	}

	if (Radar::mgr) {
		Radar::mgr->fuefuki();
	}
}

/*
 * --INFO--
 * Address:	8029CDE0
 * Size:	000038
 */
void Obj::finishWhisle()
{
	enableEvent(0, EB_IsCullable);
	m_whistleTimer          = 0.0f;
	m_whistleRadiusModifier = 0.0f;
	finishWhisleEffect();
}

/*
 * --INFO--
 * Address:	8029CE18
 * Size:	0002A0
 */
void Obj::setTargetPosition(bool check)
{
	f32 randDist;
	f32 randAngle;
	if (check) {
		randAngle = randWeightFloat(TAU);
		if (gameSystem && gameSystem->m_isInCave) {
			randDist = randWeightFloat(25.0f) + 50.0f;
		} else {
			f32 range = (C_PARMS->m_general.m_territoryRadius.m_value - C_PARMS->m_general.m_homeRadius.m_value);
			randDist  = C_PARMS->m_general.m_homeRadius.m_value + randWeightFloat(range);
		}
	} else {
		f32 range = (C_PARMS->m_general.m_territoryRadius.m_value - C_PARMS->m_general.m_homeRadius.m_value);
		randDist  = C_PARMS->m_general.m_homeRadius.m_value + randWeightFloat(range);
		f32 ang1  = randWeightFloat(PI);
		f32 ang2  = JMath::atanTable_.atan2_(m_position.x - m_homePosition.x, m_position.z - m_homePosition.z);
		f32 ang3  = HALF_PI;
		randAngle = ang2 + ang1 + ang3; // dumb fix for regswap
	}

	m_targetPosition = Vector3f(randDist * pikmin2_sinf(randAngle) + m_homePosition.x, m_homePosition.y,
	                            randDist * pikmin2_cosf(randAngle) + m_homePosition.z);

	if (check) {
		m_targetPosition.y = mapMgr->getMinY(m_targetPosition);
	}
}

/*
 * --INFO--
 * Address:	8029D0B8
 * Size:	0001E0
 */
bool Obj::isJumpAway()
{
	if (m_appearTimer > C_PROPERPARMS.m_maxGroundTime.m_value) {
		return true;
	}

	if (!(_2D4 > 0.0f)) {
		f32 privRad = C_PARMS->m_general.m_privateRadius.m_value;
		Sys::Sphere sphere(m_position, privRad);
		f32 privateDiameter = privRad * privRad;

		CellIteratorArg iterArg(sphere);
		iterArg._1C = 1;

		CellIterator iter(iterArg);

		CI_LOOP(iter)
		{
			Creature* creature = static_cast<Creature*>(*iter);
			if (creature->isAlive()) {
				bool creatureCheck = creature->isNavi();
				if (!creatureCheck) {
					if (creature->isPiki() && static_cast<FakePiki*>(creature)->isPikmin()
					    && !static_cast<Piki*>(creature)->isStickToMouth() && !static_cast<Piki*>(creature)->isMyPikmin(this)) {
						creatureCheck = true;
					}
				}

				if (creatureCheck) {
					Vector3f creaturePos = creature->getPosition();
					if (sqrDistanceXZ(m_position, creaturePos) < privateDiameter) {
						m_appearTimer = C_PROPERPARMS.m_maxGroundTime.m_value;
						return true;
					}
				}
			}
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8029D298
 * Size:	000048
 */
bool Obj::isArriveTarget()
{
	if (m_wallTriangle || sqrDistanceXZ(m_position, m_targetPosition) < 625.0f) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8029D2E0
 * Size:	000050
 */
void Obj::createFootmarks()
{
	m_footmarks = new Footmarks;
	m_footmarks->alloc(10);
}

/*
 * --INFO--
 * Address:	8029D330
 * Size:	0000BC
 */
void Obj::updateFootmarks()
{
	f32 timer = (m_footmarks->_10 - (int)gameSystem->m_frameTimer);

	timer = (timer > 0.0f) ? timer : -timer;

	if (timer > 2.5f) {
		Footmark mark;
		mark.m_position = getPosition();
		m_footmarks->add(mark);
	}
}

/*
 * --INFO--
 * Address:	8029D3EC
 * Size:	00019C
 */
void Obj::createEffect()
{
	m_efxWhistle = new efx::TCursor(PID_Cursor_NULL);
	m_efxWhistle->init(3, 10);
	m_efxOnpa = new efx::TFuebugOnpa;
}

/*
 * --INFO--
 * Address:	8029D588
 * Size:	00009C
 */
void Obj::startWhisleEffect()
{
	efx::ArgCursor argCursor(m_position, 0.0f);
	m_efxWhistle->create(&argCursor);

	m_efxOnpa->m_position = &m_position;
	m_efxOnpa->create(nullptr);
}

/*
 * --INFO--
 * Address:	8029D624
 * Size:	000078
 */
void Obj::updateWhisleEffect(f32 scale)
{
	efx::ArgCursor argCursor(m_position, scale);
	m_efxWhistle->update(&argCursor);
	m_efxWhistle->m_angleSpeed = C_PARMS->m_general.m_attackHitAngle.m_value;
}

/*
 * --INFO--
 * Address:	8029D69C
 * Size:	000050
 */
void Obj::finishWhisleEffect()
{
	m_efxWhistle->fade();
	m_efxOnpa->fade();
}

/*
 * --INFO--
 * Address:	8029D718
 * Size:	000078
 */
void Obj::createDownEffect(f32 scale)
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	Vector3f position(boundingSphere.m_position.x, m_position.y, boundingSphere.m_position.z);
	createBounceEffect(position, scale);
}

/*
 * --INFO--
 * Address:	8029D790
 * Size:	000048
 */
void Obj::createEfxHamon()
{
	if (!isFlying()) {
		EnemyBase::createEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	8029D7D8
 * Size:	000050
 */
void Obj::effectDrawOn()
{
	m_efxWhistle->m_oneEmitter.endDemoDrawOn();
	m_efxOnpa->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	8029D844
 * Size:	000050
 */
void Obj::effectDrawOff()
{
	m_efxWhistle->m_oneEmitter.startDemoDrawOff();
	m_efxOnpa->startDemoDrawOff();
}

} // namespace Fuefuki
} // namespace Game
