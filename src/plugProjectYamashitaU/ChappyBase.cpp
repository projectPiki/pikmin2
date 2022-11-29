#include "Game/Entities/ChappyBase.h"
#include "Game/EnemyFunc.h"
#include "Game/rumble.h"
#include "efx/THanacho.h"
#include "efx/TEnemyDownSmoke.h"
#include "efx/TEnemyDownWat.h"

namespace Game {
namespace ChappyBase {

/*
 * --INFO--
 * Address:	8012A950
 * Size:	00015C
 */
Obj::Obj()
    : m_FSM(nullptr)
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8012AAAC
 * Size:	000044
 */
void Obj::birth(Vector3f& position, f32 p1)
{
	EnemyBase::birth(position, p1);
	m_shadowJoint = m_model->getJoint("ago");
	_2CC          = 0.0f;
}

/*
 * --INFO--
 * Address:	8012AAF0
 * Size:	000004
 */
void Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8012AAF4
 * Size:	000080
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	m_lodParm.m_far        = 0.2f;
	m_lodParm.m_close      = 0.075f;
	m_lodParm.m_isCylinder = false;

	SleepArg sleepArg;
	sleepArg._00 = true;

	setupEffect();
	m_FSM->start(this, CHAPPY_Sleep, &sleepArg);
}

/*
 * --INFO--
 * Address:	8012AB74
 * Size:	000034
 */
void Obj::doUpdate() { m_FSM->exec(this); }

/*
 * --INFO--
 * Address:	8012ABA8
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8012ABAC
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8012ABCC
 * Size:	0000C8
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat = m_shadowJoint->getWorldMatrix();
	if (worldMat) {
		shadowParam.m_position = worldMat->getBasis(3);
		shadowParam.m_position.y -= 17.5f;
		f32 minY = 5.0f + m_position.y;
		if (shadowParam.m_position.y < minY) {
			shadowParam.m_position.y = minY;
		}
	} else {
		shadowParam.m_position = m_position;
	}

	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.m_boundingSphere.m_radius   = 100.0f;
	shadowParam.m_size                      = 32.0f;
}

/*
 * --INFO--
 * Address:	8012AC94
 * Size:	000040
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	f32 scale;
	if (collpart) {
		scale = 1.0f;
	} else {
		scale = 0.2f;
		damage *= 0.25f;
	}

	addDamage(damage, scale);
	return true;
}

/*
 * --INFO--
 * Address:	8012ACD4
 * Size:	000150
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	bool isColliding   = false;
	Creature* creature = collEvent.m_collidingCreature;
	if (creature) {
		if (creature->isTeki()) {
			EnemyTypeID::EEnemyTypeID enemyID = static_cast<EnemyBase*>(creature)->getEnemyTypeID();
			if ((static_cast<EnemyBase*>(creature)->m_sfxEmotion == EMOTE_Excitement) || (enemyID == EnemyTypeID::EnemyID_PanModoki)
			    || (enemyID == EnemyTypeID::EnemyID_OoPanModoki)
			    || (creature->isLivingThing() && (enemyID != EnemyTypeID::EnemyID_Kochappy) && (enemyID != EnemyTypeID::EnemyID_Chappy)
			        && (enemyID != EnemyTypeID::EnemyID_YellowKochappy) && (enemyID != EnemyTypeID::EnemyID_YellowChappy)
			        && (enemyID != EnemyTypeID::EnemyID_BlueKochappy) && (enemyID != EnemyTypeID::EnemyID_BlueChappy)
			        && (enemyID != EnemyTypeID::EnemyID_Pelplant) && (enemyID != EnemyTypeID::EnemyID_Egg)
			        && (enemyID != EnemyTypeID::EnemyID_ShijimiChou))) {
				isColliding = true;
			}
		} else if (creature->isPellet()) {
			if (static_cast<Pellet*>(creature)->isCarried()) {
				isColliding = true;
			}
		} else {
			isColliding = true;
		}
	}

	if (isColliding) {
		EnemyBase::collisionCallback(collEvent);
	}
}

/*
 * --INFO--
 * Address:	8012AE24
 * Size:	000050
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (getStateID() == CHAPPY_Sleep) {
		finishSleepEffect();
	}
}

/*
 * --INFO--
 * Address:	8012AE74
 * Size:	000004
 */
void Obj::doFinishStoneState() { }

/*
 * --INFO--
 * Address:	8012AE78
 * Size:	000064
 */
Vector3f Obj::getOffsetForMapCollision()
{
	Vector3f offset;
	Matrixf* worldMat = m_shadowJoint->getWorldMatrix();

	offset.x = worldMat->m_matrix.mtxView[0][3];
	offset.x -= m_position.x;

	offset.z = worldMat->m_matrix.mtxView[2][3];
	offset.z -= m_position.z;

	offset.y = 0.0f;

	return offset;
}

/*
 * --INFO--
 * Address:	8012AEDC
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(5, nullptr); }

/*
 * --INFO--
 * Address:	8012AF04
 * Size:	0000DC
 */
void Obj::initMouthSlots()
{
	m_mouthSlots.alloc(5);
	m_mouthSlots.setup(0, m_model, "kamu1");
	m_mouthSlots.setup(1, m_model, "kamu2");
	m_mouthSlots.setup(2, m_model, "kamu3");
	m_mouthSlots.setup(3, m_model, "kamu4");
	m_mouthSlots.setup(4, m_model, "kamu5");

	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->m_radius = 35.0f;
	}
}

/*
 * --INFO--
 * Address:	8012AFE0
 * Size:	000064
 */
void Obj::initWalkSmokeEffect()
{
	m_walkSmokeMgr.alloc(2);
	m_walkSmokeMgr.setup(0, m_model, "asiL", 10.0f);
	m_walkSmokeMgr.setup(1, m_model, "asiR", 10.0f);
}

/*
 * --INFO--
 * Address:	8012B044
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &m_walkSmokeMgr; }

/*
 * --INFO--
 * Address:	8012B04C
 * Size:	000200
 */
bool Obj::isWakeup()
{
	bool shouldWakeup = false;

	switch (getEnemyTypeID()) {
	case EnemyTypeID::EnemyID_BlueChappy: // Orange bulborb
		f32 radius = C_PROPERPARMS.m_bulborbWakeRadius.m_value;
		Sys::Sphere detectionSphere(m_position, radius);

		CellIteratorArg iterArg(detectionSphere);
		CellIterator i(iterArg);
		CI_LOOP(i)
		{
			Creature* c = static_cast<Creature*>(*i);

			// If the creature is an alive navigator or Piki
			if (c->isAlive() && (c->isNavi() || c->isPiki())) {
				radius = C_PROPERPARMS.m_bulborbWakeRadius.m_value;
				if (isCreatureWithinRange(c, radius)) {
					// And within the private radius, then wakeup
					shouldWakeup = true;
					break;
				}
			}
		}
		break;
	default:
		if (isEvent(0, EB_Damage) || isEvent(0, EB_Collision)) {
			shouldWakeup = true;
		}
		break;
	}

	return shouldWakeup;
}

/*
 * --INFO--
 * Address:	8012B24C
 * Size:	0000B0
 */
void Obj::setCollEvent(CollEvent& collEvent)
{
	Creature* creature = nullptr;
	if (collEvent.m_collidingCreature->isPellet()) {
		creature = collEvent.m_collidingCreature;
	}

	if ((creature == nullptr) || ((creature != nullptr) && creature->isAlive() && static_cast<Pellet*>(creature)->isCarried())) {
		EnemyBase::setCollEvent(collEvent);
	}
}

/*
 * --INFO--
 * Address:	8012B2FC
 * Size:	0000C8
 */
void Obj::flickStatePikmin()
{
	Parms* stickParms = C_PARMS;
	EnemyFunc::flickStickPikmin(this, stickParms->m_general.m_shakeRateMaybe.m_value, stickParms->m_general.m_shakeKnockback.m_value,
	                            stickParms->m_general.m_shakeDamage.m_value, getFaceDir(), nullptr);

	Parms* nearPikiParms = C_PARMS;
	EnemyFunc::flickNearbyPikmin(this, nearPikiParms->m_general.m_shakeRange.m_value, nearPikiParms->m_general.m_shakeKnockback.m_value,
	                             nearPikiParms->m_general.m_shakeDamage.m_value, getFaceDir(), nullptr);

	Parms* nearNaviParms = C_PARMS;
	EnemyFunc::flickNearbyNavi(this, nearNaviParms->m_general.m_shakeRange.m_value, nearNaviParms->m_general.m_shakeKnockback.m_value,
	                           nearNaviParms->m_general.m_shakeDamage.m_value, getFaceDir(), nullptr);
}

/*
 * --INFO--
 * Address:	8012B3C4
 * Size:	0001A4
 */
void Obj::flickAttackBomb()
{
	Vector3f effectPos = m_position;
	effectPos += m_commonEffectOffset;

	if (m_waterBox) {
		effectPos.y = *m_waterBox->getSeaHeightPtr();
		efx::ArgScale argWater(effectPos, 1.0f);
		efx::TEnemyDownWat downWatEffect;
		downWatEffect.create(&argWater);
	} else {
		efx::Arg argLand(effectPos);
		efx::TEnemyDownSmoke downSmokeEffect;
		downSmokeEffect._0C = 0.75f;
		downSmokeEffect.create(&argLand);
	}

	rumbleMgr->startRumble(11, effectPos, 2);
}

/*
 * --INFO--
 * Address:	8012B568
 * Size:	000060
 */
void Obj::flickAttackFail()
{
	Parms* parms = C_PARMS;
	EnemyFunc::flickStickPikmin(this, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
	                            parms->m_general.m_shakeDamage.m_value, getFaceDir(), nullptr);
}

/*
 * --INFO--
 * Address:	8012B5C8
 * Size:	000024
 */
void Obj::eatAttackPikmin() { EnemyFunc::eatPikmin(this, nullptr); }

/*
 * --INFO--
 * Address:	8012B5EC
 * Size:	0000B0
 */
void Obj::createEffect() { m_efxHanacho = new efx::THanachoN; }

/*
 * --INFO--
 * Address:	8012B720
 * Size:	000050
 */
void Obj::setupEffect()
{
	SysShape::Joint* headJoint = m_model->getJoint("head");
	if (headJoint) {
		Matrixf* worldMat = headJoint->getWorldMatrix();
		if (worldMat) {
			m_efxHanacho->m_mtx = worldMat;
		}
	}
}

/*
 * --INFO--
 * Address:	8012B770
 * Size:	000034
 */
void Obj::startSleepEffect() { static_cast<efx::THanachoN*>(m_efxHanacho)->create(nullptr); }

/*
 * --INFO--
 * Address:	8012B7A4
 * Size:	000030
 */
void Obj::finishSleepEffect() { static_cast<efx::THanachoN*>(m_efxHanacho)->fade(); }

} // namespace ChappyBase
} // namespace Game

namespace efx {
THanachoN::~THanachoN() { }
} // namespace efx
