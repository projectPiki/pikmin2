#include "Game/Entities/Baby.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/GameSystem.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "Game/EnemyFunc.h"
#include "efx/TBaby.h"

namespace Game {
namespace Baby {

/*
 * --INFO--
 * Address:	8028D470
 * Size:	000140
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;

	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8028D5B0
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8028D5B4
 * Size:	0000B8
 */
void Obj::onInit(CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	disableEvent(0, EB_IsCullable);
	disableEvent(0, EB_ToLeaveCarcass);
	setupEffect();
	resetRandTargetPosition();

	if (gameSystem && gameSystem->m_mode == GSM_PIKLOPEDIA) {
		m_fsm->start(this, BABY_Move, nullptr);
		resetZukanAnimationFrame();
	} else {
		m_fsm->start(this, BABY_Born, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8028D66C
 * Size:	000048
 */
void Obj::doUpdate()
{
	m_fsm->exec(this);
	m_mouthSlots.update();
}

/*
 * --INFO--
 * Address:	8028D6B4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8028D6B8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8028D6D8
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
 * Address:	8028D724
 * Size:	000068
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.m_position = m_position;
	param.m_position.y += 2.5f;

	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_IsEarthquake)) {
		param.m_boundingSphere.m_radius = 50.0f;
	} else {
		param.m_boundingSphere.m_radius = 10.0f;
	}
	param.m_size = 10.0f;
}

/*
 * --INFO--
 * Address:	8028D78C
 * Size:	000074
 */
bool Obj::pressCallBack(Creature* obj, f32 damage, CollPart* part)
{
	if (obj && !isEvent(0, EB_IsBittered) && getStateID() > 2) {
		m_fsm->transit(this, BABY_Press, nullptr);
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	8028D800
 * Size:	000074
 */
bool Obj::hipdropCallBack(Creature* obj, f32 damage, CollPart* part)
{

	if (obj && !isEvent(0, EB_IsBittered) && getStateID() > 2) {
		m_fsm->transit(this, BABY_Press, nullptr);
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	8028D874
 * Size:	000020
 */
void Obj::doStartStoneState() { EnemyBase::doStartStoneState(); }

/*
 * --INFO--
 * Address:	8028D894
 * Size:	00005C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (getStateID() == BABY_Born) {
		m_fsm->transit(this, BABY_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8028D8F0
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	8028D924
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	8028D958
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8028D978
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8028D998
 * Size:	00008C
 */
void Obj::initMouthSlots()
{
	m_mouthSlots.alloc(1);
	m_mouthSlots.setup(0, m_model, "kamu");
	f32 size = 20.0f;
	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->m_radius = size;
	}
}

/*
 * --INFO--
 * Address:	8028DA24
 * Size:	00008C
 */
int Obj::getSlotPikiNum()
{
	int slotnum       = 0;
	MouthSlots* slots = getMouthSlots();
	int max           = slots->getMax();

	for (int i = 0; i < max; i++) {
		if (slots->getSlot(i)->m_stuckCreature) {
			slotnum++;
		}
	}
	return slotnum;
}

/*
 * --INFO--
 * Address:	8028DAB0
 * Size:	000008
 */
MouthSlots* Obj::getMouthSlots() { return &m_mouthSlots; }

/*
 * --INFO--
 * Address:	8028DAB8
 * Size:	00001C
 */
void Obj::resetRandTargetPosition() { m_targetPos = m_position; }

/*
 * --INFO--
 * Address:	8028DAD4
 * Size:	000074
 */
void Obj::resetZukanAnimationFrame()
{
	f32 frame = getMotionFrameMax();
	setMotionFrame(randWeightFloat(frame));
}

/*
 * --INFO--
 * Address:	8028DB48
 * Size:	00020C
 */
void Obj::moveNoTarget()
{
	if (gameSystem && gameSystem->m_mode == GSM_PIKLOPEDIA) {
		if (sqrDistanceXZ(m_position, m_targetPos) < 500.0f) {
			f32 f1  = randWeightFloat(100.0f) + 50.0f;
			f32 ang = JMath::atanTable_.atan2_(m_position.x - m_homePosition.x, m_position.z - m_homePosition.z);
			ang     = randWeightFloat(PI) + ang + HALF_PI;

			m_targetPos.x = f1 * pikmin2_sinf(ang) + m_homePosition.x;
			m_targetPos.y = m_homePosition.y;
			m_targetPos.z = f1 * pikmin2_cosf(ang) + m_homePosition.z;
		}
		Parms* parms = static_cast<Parms*>(m_parms);
		EnemyFunc::walkToTarget(this, m_targetPos, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
		                        parms->m_general.m_rotationalSpeed.m_value);
	} else {
		m_targetVelocity = Vector3f(0.0f);
	}
}

/*
 * --INFO--
 * Address:	8028DD54
 * Size:	0000F4
 */
void Obj::createHoney()
{
	Parms* parms = static_cast<Parms*>(m_parms);
	if (randWeightFloat(1.0f) < parms->m_properParms.m_nectarChance.m_value) {
		ItemHoney::InitArg arg(false, false);

		ItemHoney::Item* item = static_cast<ItemHoney::Item*>(ItemHoney::mgr->birth());
		if (item) {
			item->init(&arg);
			item->setPosition(m_position, false);
			Vector3f velocity(0.0f, 250.0f, 0.0f);
			item->setVelocity(velocity);
		}
	}
}

/*
 * --INFO--
 * Address:	8028DE48
 * Size:	0000B4
 */
void Obj::createEffect() { m_efxBabyBorn = new efx::TBabyBorn(&m_position); }

/*
 * --INFO--
 * Address:	8028DEFC
 * Size:	000004
 */
void Obj::setupEffect() { }

/*
 * --INFO--
 * Address:	8028DF00
 * Size:	000034
 */
void Obj::createBornEffect() { m_efxBabyBorn->create(nullptr); }

/*
 * --INFO--
 * Address:	8028DF34
 * Size:	000030
 */
void Obj::effectDrawOn() { m_efxBabyBorn->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	8028DF64
 * Size:	000030
 */
void Obj::effectDrawOff() { m_efxBabyBorn->startDemoDrawOff(); }

} // namespace Baby
} // namespace Game
