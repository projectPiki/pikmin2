#include "types.h"
#include "Game/WalkSmokeEffect.h"
#include "JSystem/JUT/JUTException.h"
#include "Game/EnemyBase.h"
#include "Game/MapMgr.h"
#include "SysShape/Model.h"
#include "SysShape/Joint.h"
#include "efx/TEnemyWalkSmoke.h"

const char filename[] = "walkSmoke";

namespace Game {
namespace WalkSmokeEffect {

/*
 * --INFO--
 * Address:	8012A320
 * Size:	000034
 */
Obj::Obj()
{
	_00        = false;
	m_matrix   = nullptr;
	_08        = 0.0f;
	m_position = Vector3f::zero;
}

void Obj::update(EnemyBase* enemy)
{
	Vector3f vec;
	m_matrix->getTranslation(vec);
	vec.y -= _08;

	if (_00 == false) {
		if ((vec.y - m_position.y) < 0.0f) {
			if (vec.y < mapMgr->getMinY(vec)) {
				if (!enemy->inWater()) {
					float scaleMod                    = enemy->m_scaleModifier;
					EnemyTypeID::EEnemyTypeID enemyID = enemy->getEnemyTypeID();

					efx::ArgEnemyType effectArg(vec, enemyID, scaleMod);
					efx::TEnemyWalkSmoke walkSmoke;
					walkSmoke.create(&effectArg);
				}
				_00 = true;
			}
		}
	} else if (vec.y > mapMgr->getMinY(vec)) {
		_00 = false;
	}
	m_position = vec;
}

/*
 * --INFO--
 * Address:	8012A354
 * Size:	000010
 */
Mgr::Mgr()
{
	m_objCount = 0;
	m_objects  = nullptr;
}

/*
 * --INFO--
 * Address:	8012A364
 * Size:	0000B4
 */
void Mgr::alloc(int count)
{
	if (m_objects == nullptr) {
		m_objCount = count;
		m_objects  = new Obj[m_objCount];

		if (m_objects == nullptr) {
			// failed to allocate an object array
			JUT_PANICLINE(168, "alloc error\n");
		}

	} else {
		// object array already allocated
		JUT_PANICLINE(173, "second alloc");
	}
}

/*
 * --INFO--
 * Address:	8012A418
 * Size:	0001C8
 */
void Mgr::update(Game::EnemyBase* enemy)
{
	for (int i = 0; i < m_objCount; i++) {
		m_objects[i].update(enemy);
	}
}

/*
 * --INFO--
 * Address:	8012A5E0
 * Size:	000090
 */
void Mgr::setup(int objIdx, SysShape::Model* model, char* name, float p1)
{
	Matrixf* worldMat = model->getJoint(name)->getWorldMatrix();

	Obj* obj      = &m_objects[objIdx];
	obj->m_matrix = worldMat;
	obj->_08      = p1;

	obj->m_matrix->getTranslation(obj->m_position);

	obj->_00 = true;
}
} // namespace WalkSmokeEffect
} // namespace Game
