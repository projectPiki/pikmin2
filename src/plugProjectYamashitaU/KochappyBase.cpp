#include "types.h"
#include "Game/Entities/KochappyBase.h"
#include "Game/gamePlayData.h"

namespace Game {
namespace KochappyBase {

/*
 * --INFO--
 * Address:	8012DAE8
 * Size:	000148
 */
Obj::Obj()
    : m_FSM(nullptr)
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	8012DC30
 * Size:	000068
 */
void Obj::birth(Vector3f& position, f32 p1)
{
	EnemyBase::birth(position, p1);
	m_FSM->start(this, KOCHAPPY_Wait, (WaitArg*)'rand');
	m_shadowJoint = m_model->getJoint("ago");
	_2CC          = 0.0f;
}

/*
 * --INFO--
 * Address:	8012DC98
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8012DC9C
 * Size:	000068
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	m_shadowJoint = m_model->getJoint("ago");
	_2CC          = 0.0f;
	m_FSM->start(this, KOCHAPPY_Wait, (WaitArg*)'rand');
}

/*
 * --INFO--
 * Address:	8012DD04
 * Size:	000088
 */
void Obj::doUpdate()
{
	m_FSM->exec(this);

	if (!playData->isDemoFlag(DEMO_Meet_Red_Pikmin)) {
		m_simVelocity = Vector3f::zero;
		m_impVelocity = m_simVelocity;
	}
}

/*
 * --INFO--
 * Address:	8012DD8C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8012DD90
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8012DDB0
 * Size:	000088
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* mat             = m_shadowJoint->getWorldMatrix();
	shadowParam.m_position   = Vector3f(mat->m_matrix.mtxView[0][3], mat->m_matrix.mtxView[1][3], mat->m_matrix.mtxView[2][3]);
	shadowParam.m_position.y = 2.0f + m_position.y;

	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.m_boundingSphere.m_radius   = 100.0f;

	shadowParam.m_size = 10.0f;
}

/*
 * --INFO--
 * Address:	8012DE38
 * Size:	000040
 */
void Obj::bounceCallback(Sys::Triangle* triangle)
{
	if (getStateID() == 0) {
		setEvent(0, EB_Constraint);
	}
}

/*
 * --INFO--
 * Address:	8012DE78
 * Size:	0000A0
 */
bool Obj::pressCallBack(Game::Creature* creature, float p1, CollPart* collpart)
{
	if (creature->isPiki() && isAlive()) {
		if (!isEvent(0, EB_Bittered)) {
			m_FSM->transit(this, KOCHAPPY_Press, nullptr);
			return true;
		}
		return false;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8012DF18
 * Size:	000020
 */
void Obj::doStartStoneState() { EnemyBase::doStartStoneState(); }

/*
 * --INFO--
 * Address:	8012DF38
 * Size:	000004
 */
void Obj::doFinishStoneState() { }

/*
 * --INFO--
 * Address:	8012DF3C
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
 * Address:	8012DFA0
 * Size:	000028
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(5, nullptr); }

/*
 * --INFO--
 * Address:	8012DFC8
 * Size:	00008C
 */
void Obj::initMouthSlots()
{
	m_mouthSlots.alloc(1);
	m_mouthSlots.setup(0, m_model, "kamu");

	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->m_radius = 15.0f;
	}
}

/*
 * --INFO--
 * Address:	8012E054
 * Size:	00008C
 */
void Obj::initWalkSmokeEffect()
{
	if ((m_model->getJoint("asiL") != nullptr) && (m_model->getJoint("asiR") != nullptr)) {
		m_walkSmokeMgr.alloc(2);
		m_walkSmokeMgr.setup(0, m_model, "asiL", 4.0f);
		m_walkSmokeMgr.setup(1, m_model, "asiR", 4.0f);
	}
}

/*
 * --INFO--
 * Address:	8012E0E0
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &m_walkSmokeMgr; }

} // namespace KochappyBase
} // namespace Game
