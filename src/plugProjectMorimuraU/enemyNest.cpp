#include "Dolphin/os.h"
#include "Game/Entities/Nest.h"
#include "Game/enemyInfo.h"
#include "Game/shadowMgr.h"
#include "Vector3.h"
#include "types.h"

namespace Game {
namespace Nest {
/*
 * --INFO--
 * Address:	8036CA94
 * Size:	000034
 */
// void birth__Q34Game4Nest3ObjFR10Vector3f f()
void Obj::birth(Vector3f& position, float p2)
{
	EnemyBase::birth(position, p2);
	m_houseType = 1;
}

/*
 * --INFO--
 * Address:	8036CAC8
 * Size:	00011C
 */
void Obj::onInit(Game::CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	_2EE           = 0xFF;
	_2F0           = 0;
	m_homePosition = m_position;
	disableEvent(0, EB_ToLeaveCarcass);
	disableEvent(0, EB_IsDamageAnimAllowed);
	disableEvent(0, EB_IsDeathEffectEnabled);
	disableEvent(0, EB_IsPlatformCollsAllowed);
	enableEvent(0, EB_IsImmuneBitter);

	setEmotionNone();
	if (shadowMgr) {
		shadowMgr->killShadow(this);
	}
	_2BC                        = m_objMatrix;
	_2BC.m_matrix.structView.ty = m_position.y - 10.0f;
}

/*
 * ct__
 * --INFO--
 * Address:	8036CBE4
 * Size:	000098
 */
Obj::Obj()
    : EnemyBase()
    , m_houseType(1)
{
}

/*
 * --INFO--
 * Address:	8036CC7C
 * Size:	000020
 */
void Obj::setHouseType(int enemyID)
{
	if (enemyID == EnemyTypeID::EnemyID_Jigumo) {
		m_houseType = 0;
	} else {
		m_houseType = 1;
	}
}
} // namespace Nest
} // namespace Game
