#include "Game/Entities/ShijimiChou.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ShijimiChou {

static const char shijimiChouMgrName[] = "shijimiChouMgr";

/*
 * --INFO--
 * Address:	803884C0
 * Size:	00005C
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_updateMgr   = nullptr;
	m_groupLeader = nullptr;
	m_name        = "シジミ蝶マネージャ"; // clam butterfly manager
}

/*
 * --INFO--
 * Address:	8038851C
 * Size:	000150
 */
void Mgr::doAlloc()
{
	init(new Parms);
	m_updateMgr = new UpdateMgr;

	int updateCount = getMaxObjects() / 5;
	m_updateMgr->create(updateCount);

	// this is such a dumb stack of things.
	m_mtxCacheRef = new J3DUMtxCacheRef<J3DUMtxAnmCacheTable>(getCacheTable(getModel(), getTransform()));
}

/*
 * --INFO--
 * Address:	80388964
 * Size:	000038
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	m_modelData->newSharedDisplayList(0x00040000);
}

/*
 * --INFO--
 * Address:	8038899C
 * Size:	000138
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x80000, m_modelType);
	P2ASSERTLINE(71, model);

	for (u16 i = 0; i < m_modelData->getMaterialCount1(); i++) {
		const char* name = m_modelData->m_materialTable._0C->getName(i);
		if (!strcmp(name, "mat_shijimi_hane_v")) {
			model->m_j3dModel->m_matPackets[i]._2C->newDifferedDisplayList(0x01000000);
		}
	}

	model->updateModel();
	return model;
}

/*
 * --INFO--
 * Address:	80388AD4
 * Size:	0000C8
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg)
{
	Obj* enemy = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (enemy) {
		Obj* leader = static_cast<Obj*>(enemy);
		birthArg.m_position.y += CG_PROPERPARMS(leader).m_fp03.m_value;

		leader->m_homePosition = birthArg.m_position;
		leader->onSetPosition(birthArg.m_position);
		leader->m_groupLeader   = leader;
		leader->m_flyType       = CG_PARMS(leader)->m_flyType;
		leader->m_spawningEnemy = nullptr;

		m_groupLeader = leader;

		createGroup(leader, CG_PARMS(leader)->m_groupCount);
		return leader;

	} else {
		return nullptr;
	}
}

/*
 * --INFO--
 * Address:	80388B9C
 * Size:	000050
 */
void Mgr::doAnimation()
{
	EnemyMgrBase::doAnimation();
	if (m_groupLeader && CG_PARMS(m_groupLeader)->_949) {
		m_updateMgr->update();
	}
}

/*
 * --INFO--
 * Address:	80388BEC
 * Size:	000058
 */
void Mgr::fetch(J3DModel* model, f32 p1)
{
	if (m_mtxCacheRef) {
		m_mtxCacheRef->m_cache->_00 = 0.5f + p1;
		m_mtxCacheRef->fetch(model);
	}
}

/*
 * --INFO--
 * Address:	80388C44
 * Size:	0004BC
 */
void Mgr::createGroup(Obj* leader, int count)
{
	EnemyBirthArg birthArg;
	Vector3f leaderPos = leader->getPosition();
	leader->leaderInit();

	birthArg.m_position.x = leaderPos.x;
	birthArg.m_faceDir    = 0.0f;
	birthArg.m_position.y = leaderPos.y;
	birthArg.m_position.z = leaderPos.z;

	f32 factor = 20.0f;
	if (leader->m_spawnSource == SHIJIMISOURCE_BeadyLongLegs) {
		factor = 120.0f;
	}

	rand();

	birthArg.m_position.x = factor * pikmin2_sinf(birthArg.m_faceDir) + birthArg.m_position.x;
	birthArg.m_position.z = factor * pikmin2_cosf(birthArg.m_faceDir) + birthArg.m_position.z;

	leader->m_faceDir    = birthArg.m_faceDir;
	leader->m_rotation.y = leader->m_faceDir;

	f32 leaderTypeCheck = randFloat();
	leader->m_specType  = SHIJIMITYPE_Red;
	if (leaderTypeCheck < 0.5f) {
		leader->m_specType = SHIJIMITYPE_Purple;
	}

	Vector3f homePos = leader->m_homePosition;

	for (int i = 0; i < count - 1; i++) {
		birthArg.m_position = leaderPos;
		birthArg.m_faceDir  = (TAU * (i + 1)) / count;

		if (leader->m_spawnSource == SHIJIMISOURCE_Null) {
			birthArg.m_position.x += factor * pikmin2_sinf(birthArg.m_faceDir);
			birthArg.m_position.z += factor * pikmin2_cosf(birthArg.m_faceDir);
		}
		birthArg.m_position.y += 50.0f * randFloat() - 25.0f;

		f32 redCheck    = CG_PROPERPARMS(leader).m_fp06.m_value;
		f32 purpleCheck = redCheck + CG_PROPERPARMS(leader).m_fp07.m_value;

		EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
		if (enemy) {
			Obj* chou           = static_cast<Obj*>(enemy);
			chou->m_spawnSource = leader->m_spawnSource;

			f32 typeCheck = randFloat();
			if (typeCheck < redCheck) {
				chou->m_specType = SHIJIMITYPE_Red;
			} else if (typeCheck < purpleCheck) {
				chou->m_specType = SHIJIMITYPE_Purple;
			} else {
				chou->m_specType = SHIJIMITYPE_Yellow;
			}

			if (leader->m_spawnSource == SHIJIMISOURCE_Plants) {
				chou->createAppearEffect();
				chou->m_specType = SHIJIMITYPE_Yellow;
			}

			chou->m_groupLeader  = leader;
			chou->m_flyType      = leader->getFlyType();
			chou->m_homePosition = homePos;
			chou->init(nullptr);
			chou->m_spawningEnemy = leader->m_spawningEnemy;

			leader->m_groupCount = i + 1;
		}
	}
}

/*
 * --INFO--
 * Address:	80389100
 * Size:	0000B8
 */
void Mgr::createGroupByBigFoot(EnemyBirthArg& birthArg, int count)
{
	EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
	if (enemy) {
		Obj* chou     = static_cast<Obj*>(enemy);
		m_groupLeader = chou;

		chou->m_homePosition = birthArg.m_position;
		chou->onSetPosition(birthArg.m_position);
		chou->m_groupLeader = chou;
		chou->m_flyType     = 0;
		chou->init(nullptr);
		chou->m_spawnSource = SHIJIMISOURCE_BeadyLongLegs;

		createGroup(chou, count);
	}
}

/*
 * --INFO--
 * Address:	803891B8
 * Size:	0000B8
 */
void Mgr::createGroupByPlants(EnemyBirthArg& birthArg, int count)
{
	EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
	if (enemy) {
		Obj* chou     = static_cast<Obj*>(enemy);
		m_groupLeader = chou;

		chou->m_homePosition = birthArg.m_position;
		chou->onSetPosition(birthArg.m_position);
		chou->m_groupLeader = chou;
		chou->m_flyType     = 1;
		chou->init(nullptr);
		chou->m_spawnSource = SHIJIMISOURCE_Plants;

		createGroup(chou, count);
	}
}

/*
 * --INFO--
 * Address:	80389270
 * Size:	000198
 */
void Mgr::createGroupByEnemy(EnemyBirthArg& birthArg, EnemyBase* enemy, int count, bool check)
{
	Obj* chou = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (chou) {
		Vector3f birthPos = birthArg.m_position;
		if (!check && enemy) {
			birthPos.x = -(75.0f * pikmin2_sinf(enemy->getFaceDir()) - birthPos.x);
			birthPos.z = -(75.0f * pikmin2_cosf(enemy->getFaceDir()) - birthPos.z);
		}
		m_groupLeader = chou;

		chou->onSetPosition(birthPos);
		chou->m_groupLeader = chou;
		chou->m_flyType     = 1;
		chou->init(nullptr);
		chou->m_spawnSource   = SHIJIMISOURCE_Enemy;
		chou->m_spawningEnemy = enemy;

		createGroup(chou, count);
	}
}

} // namespace ShijimiChou
} // namespace Game
