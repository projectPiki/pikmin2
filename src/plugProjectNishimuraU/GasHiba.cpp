#include "Game/Entities/GasHiba.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/Entities/ItemGate.h"
#include "efx/TGasuHiba.h"
#include "Dolphin/rand.h"

namespace Game {
namespace GasHiba {

/*
 * --INFO--
 * Address:	8026D14C
 * Size:	000138
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8026D284
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8026D288
 * Size:	000100
 */
void Obj::onInit(CreatureInitArg* args)
{
	EnemyBase::onInit(args);
	resetEvent(0, EB_13);
	resetEvent(0, EB_LeaveCarcass);
	resetEvent(0, EB_9);
	hardConstraintOn();
	setEvent(0, EB_BitterImmune);

	setEmotionNone();
	shadowMgr->killShadow(this);
	m_timer = 0.0f;
	resetBridgeGateCheck();
	m_isAlive = false;
	setupLodParms();

	f32 r = randWeightFloat(C_PROPERPARMS.m_waitTime.m_value);
	WaitStateArg arg;
	arg.m_waitTimer = r;
	m_FSM->start(this, GASHIBA_Wait, &arg);
}

/*
 * --INFO--
 * Address:	8026D388
 * Size:	000034
 */
void Obj::doUpdate() { m_FSM->exec(this); }

/*
 * --INFO--
 * Address:	8026D3BC
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8026D3C0
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8026D3E0
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	m_FSM = fsm;
	m_FSM->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	8026D42C
 * Size:	000038
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.m_position                  = m_position;
	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.m_boundingSphere.m_radius   = 1.0f;
	shadowParam.m_size                      = 1.0f;
}

/*
 * --INFO--
 * Address:	8026D464
 * Size:	0000C8
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if ((creature) && !creature->isNavi()) {
		Vector3f position = creature->getPosition();
		position.y -= m_position.y;

		Parms* parms = C_PARMS;
		if ((position.y < parms->m_general.m_fp20.m_value) && (position.y > -parms->m_general.m_fp21.m_value)) {
			addDamage(damage, 1.0f);
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	8026D52C
 * Size:	000030
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/*
 * --INFO--
 * Address:	8026D55C
 * Size:	000030
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/*
 * --INFO--
 * Address:	8026D58C
 * Size:	000034
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	damageCallBack(creature, damage, nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	8026D5C0
 * Size:	0001D0
 */
void Obj::interactGasAttack()
{
	Parms* parms = C_PARMS;
	f32 max      = m_position.y + parms->m_general.m_fp20.m_value;
	f32 min      = m_position.y - parms->m_general.m_fp21.m_value;
	f32 radSqr   = SQUARE(parms->m_general.m_fp22.m_value);

	Sys::Sphere sphere(m_position);
	sphere.m_radius = parms->m_general.m_fp22.m_value;

	CellIteratorArg arg(sphere);
	arg._1C = true;

	CellIterator iterator(arg);
	CI_LOOP(iterator)
	{
		Creature* creature = static_cast<Creature*>(*iterator);

		if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
			Vector3f position = creature->getPosition();
			if ((max > position.y) && (min < position.y)) {
				Vector2f delta;
				getDistance2D(position, delta);
				if (SQUARE(delta.x) + SQUARE(delta.y) < radSqr) {
					InteractGas gas(this, C_PARMS->m_general.m_attackDamage.m_value);
					creature->stimulate(gas);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8026D790
 * Size:	000018
 */
void Obj::resetBridgeGateCheck()
{
	m_isBridgeGate = true;
	m_bridge       = nullptr;
	m_gate         = nullptr;
}

/*
 * --INFO--
 * Address:	8026D7A8
 * Size:	0005B0
 */
void Obj::setInitLivingThing()
{
	if (m_isBridgeGate) {
		m_isBridgeGate = false;
		m_bridge       = nullptr;
		m_gate         = nullptr;

		if (gameSystem != nullptr && !gameSystem->m_inCave && gameSystem->m_mode == GSM_STORY_MODE) {
			if (ItemBridge::mgr != nullptr) {
				Iterator<BaseItem> bridgeIter(ItemBridge::mgr);

				CI_LOOP(bridgeIter)
				{
					ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(*bridgeIter);
					Vector3f bridgePos       = bridge->getPosition();
					f32 yDist                = bridgePos.y - m_position.y;
					yDist                    = (yDist > 0.0f) ? yDist : -yDist;

					if (yDist < 25.0f) {
						f32 xDist = bridgePos.x - m_position.x;
						xDist     = (xDist > 0.0f) ? xDist : -xDist;

						if (xDist < 75.0f) {
							f32 zDist = bridgePos.z - m_position.z;
							zDist     = (zDist > 0.0f) ? zDist : -zDist;

							if (zDist < 75.0f) {
								m_bridge = bridge;
								break;
							}
						}
					}
				}
			}

			if (itemGateMgr != nullptr && m_bridge == nullptr) {
				Iterator<ItemGate> gateIter(&itemGateMgr->m_nodeObjectMgr);

				CI_LOOP(gateIter)
				{
					ItemGate* gate   = *gateIter;
					Vector3f gatePos = gate->getPosition();
					f32 yDist        = gatePos.y - m_position.y;
					yDist            = (yDist > 0.0f) ? yDist : -yDist;

					if (yDist < 25.0f) {
						f32 xDist = gatePos.x - m_position.x;
						xDist     = (xDist > 0.0f) ? xDist : -xDist;

						if (xDist < 75.0f) {
							f32 zDist = gatePos.z - m_position.z;
							zDist     = (zDist > 0.0f) ? zDist : -zDist;

							if (zDist < 75.0f) {
								m_gate = gate;
								break;
							}
						}
					}
				}
			}
		}

		if (m_bridge != nullptr || m_gate != nullptr) {
			m_isAlive = false;
		} else {
			m_isAlive = true;
		}
	}
}

/*
 * --INFO--
 * Address:	8026DD58
 * Size:	00009C
 */
void Obj::updateLivingThing()
{
	if (!isLivingThing()) {
		if (m_bridge) {
			if (m_bridge->m_stagesRemaining != 0) {
				m_isAlive = true;
			}

		} else if (m_gate) {
			if (!m_gate->isAlive()) {
				m_isAlive = true;
			}

		} else {
			m_isAlive = true;
		}
	}
}

/*
 * --INFO--
 * Address:	8026DDFC
 * Size:	000024
 */
void Obj::setupLodParms()
{
	m_lodParm.m_far        = C_PARMS->m_properParms.m_lodNear.m_value;
	m_lodParm.m_close      = C_PARMS->m_properParms.m_lodMiddle.m_value;
	m_lodParm.m_isCylinder = false;
}

/*
 * --INFO--
 * Address:	8026DE20
 * Size:	00002C
 */
void Obj::updateEfxLod() { m_efxGas->setRateLOD(m_lod.m_flags & (AILOD_FLAG_IS_MID | AILOD_FLAG_IS_FAR)); }

/*
 * --INFO--
 * Address:	8026DE4C
 * Size:	00005C
 */
void Obj::createEffect() { m_efxGas = new efx::TGasuHiba; }

/*
 * --INFO--
 * Address:	8026DEA8
 * Size:	0000A0
 */
void Obj::startGasEffect()
{
	bool underground = false;
	if ((gameSystem) && (!gameSystem->m_inCave)) {
		underground = true;
	}
	efx::ArgGasuHiba arg(m_position);
	arg.m_isUnderground = underground;
	m_efxGas->create(&arg);
}

/*
 * --INFO--
 * Address:	8026DF48
 * Size:	000030
 */
void Obj::finishGasEffect() { m_efxGas->fade(); }

/*
 * --INFO--
 * Address:	8026DF78
 * Size:	000044
 */
void Obj::generatorKill()
{
	if (m_generator) {
		m_generator->informDeath(this);
		m_generator = nullptr;
	}
}

} // namespace GasHiba
} // namespace Game
