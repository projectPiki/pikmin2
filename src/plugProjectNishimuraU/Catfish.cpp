#include "types.h"
#include "Game/Entities/Catfish.h"

namespace Game {
namespace Catfish {

/*
 * Catfish Obj constructor
 *
 * --INFO--
 * Address:	80277008
 * Size:	000090
 */
Obj::Obj() { }

/*
 * Performs base initialisation and sets shadow joint.
 *
 * --INFO--
 * Address:	80277098
 * Size:	00003C
 */
void Obj::onInit(Game::CreatureInitArg* arg)
{
	KochappyBase::Obj::onInit(arg);
	m_shadowJoint = m_model->getJoint("kosi");
}

/*
 * Gets shadow parameters for Obj and stores in input param.
 *
 * --INFO--
 * Address:	802770D4
 * Size:	0000C0
 */
void Obj::getShadowParam(Game::ShadowParam& param)
{
	Matrixf* worldMatrix = m_shadowJoint->getWorldMatrix();

	param.m_position
	    = Vector3f(worldMatrix->m_matrix.mtxView[0][3], worldMatrix->m_matrix.mtxView[1][3], worldMatrix->m_matrix.mtxView[2][3]);

	param.m_position.y -= 10.0f;
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	param.m_boundingSphere.m_radius   = param.m_position.y - m_position.y;

	if (isEvent(1, EB2_1)) {
		param.m_boundingSphere.m_radius += 50.0f;
	} else {
		param.m_boundingSphere.m_radius += 15.0f;
	}

	param.m_size = 15.0f;
}

/*
 * Calls damage calculation upon 'press' (?).
 *
 * --INFO--
 * Address:	80277194
 * Size:	000028
 */
bool Obj::pressCallBack(Game::Creature*, float damage, CollPart*)
{
	EnemyBase::addDamage(damage, 1.0f);
	return false;
}

/*
 * Calls base response upon 'hipdrop' (?).
 *
 * --INFO--
 * Address:	802771BC
 * Size:	000020
 */
bool Obj::hipdropCallBack(Game::Creature* creature, float a2, CollPart* collPart)
{
	return EnemyBase::hipdropCallBack(creature, a2, collPart);
}

/*
 * Initialises mouth slots.
 *
 * --INFO--
 * Address:	802771DC
 * Size:	0000A0
 */
void Obj::initMouthSlots()
{
	m_mouthSlots.alloc(2);
	m_mouthSlots.setup(0, Creature::m_model, "kamu1");
	m_mouthSlots.setup(1, Creature::m_model, "kamu2");

	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->m_radius = 20.0f;
	}
}

/*
 * Resets enemy when bitter state expires.
 *
 * --INFO--
 * Address:	8027727C
 * Size:	000044
 */
void Obj::resetEnemyNonStone()
{
	if (isEvent(0, EB_22)) {
		createDownEffect();
	}

	resetEvent(0, EB_22);
}

/*
 * Calls base 'bounce' effect.
 *
 * --INFO--
 * Address:	802772C0
 * Size:	000028
 */
void Obj::createDownEffect() { EnemyBase::createBounceEffect(m_position, 0.5f); }

} // namespace Catfish
} // namespace Game
