#include "Game/Entities/ShijimiChou.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ShijimiChou {

static const char shijimiChouMgrName[] = "shijimiChouMgr";

/**
 * @note Address: 0x803884C0
 * @note Size: 0x5C
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mUpdateMgr   = nullptr;
	mGroupLeader = nullptr;
	mName        = "シジミ蝶マネージャ"; // clam butterfly manager
}

/**
 * @note Address: 0x8038851C
 * @note Size: 0x150
 */
void Mgr::doAlloc()
{
	init(new Parms);
	mUpdateMgr = new UpdateMgr;

	int updateCount = getMaxObjects() / 5;
	mUpdateMgr->create(updateCount);

	// this is such a dumb stack of things.
	mMtxCacheRef = new J3DUMtxCacheRef<J3DUMtxAnmCacheTable>(getCacheTable(getModel(), getTransform()));
}

/**
 * @note Address: 0x80388964
 * @note Size: 0x38
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	mModelData->newSharedDisplayList(0x00040000);
}

/**
 * @note Address: 0x8038899C
 * @note Size: 0x138
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_ShareDL, mMtxBufferSize);
	P2ASSERTLINE(71, model);

	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "mat_shijimi_hane_v")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(J3DMDF_DiffColorReg);
		}
	}

	model->updateModel();
	return model;
}

/**
 * @note Address: 0x80388AD4
 * @note Size: 0xC8
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg)
{
	Obj* enemy = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (enemy) {
		Obj* leader = OBJ(enemy);
		birthArg.mPosition.y += CG_PROPERPARMS(leader).mFlightHeight.mValue;

		leader->mHomePosition = birthArg.mPosition;
		leader->onSetPosition(birthArg.mPosition);
		leader->mGroupLeader   = leader;
		leader->mFlyType       = CG_PARMS(leader)->mFlyType;
		leader->mSpawningEnemy = nullptr;

		mGroupLeader = leader;

		createGroup(leader, CG_PARMS(leader)->mGroupCount);
		return leader;

	} else {
		return nullptr;
	}
}

/**
 * @note Address: 0x80388B9C
 * @note Size: 0x50
 */
void Mgr::doAnimation()
{
	EnemyMgrBase::doAnimation();
	if (mGroupLeader && CG_PARMS(mGroupLeader)->mDoUpdateAnimation) {
		mUpdateMgr->update();
	}
}

/**
 * @note Address: 0x80388BEC
 * @note Size: 0x58
 */
void Mgr::fetch(J3DModel* model, f32 p1)
{
	if (mMtxCacheRef) {
		mMtxCacheRef->mCache->mAnimationFrame = 0.5f + p1;
		mMtxCacheRef->fetch(model);
	}
}

/**
 * @note Address: 0x80388C44
 * @note Size: 0x4BC
 */
void Mgr::createGroup(Obj* leader, int count)
{
	EnemyBirthArg birthArg;
	Vector3f leaderPos = leader->getPosition();
	leader->leaderInit();

	birthArg.mPosition.x = leaderPos.x;
	birthArg.mFaceDir    = 0.0f;
	birthArg.mPosition.y = leaderPos.y;
	birthArg.mPosition.z = leaderPos.z;

	f32 factor = 20.0f;
	if (leader->mSpawnSource == SHIJIMISOURCE_BeadyLongLegs) {
		factor = 120.0f;
	}

	rand();

	birthArg.mPosition.x = factor * sinf(birthArg.mFaceDir) + birthArg.mPosition.x;
	birthArg.mPosition.z = factor * cosf(birthArg.mFaceDir) + birthArg.mPosition.z;

	leader->mFaceDir    = birthArg.mFaceDir;
	leader->mRotation.y = leader->mFaceDir;

	f32 leaderTypeCheck = randFloat();
	leader->mSpecType   = SHIJIMITYPE_Red;
	if (leaderTypeCheck < 0.5f) {
		leader->mSpecType = SHIJIMITYPE_Purple;
	}

	Vector3f homePos = leader->mHomePosition;

	for (int i = 0; i < count - 1; i++) {
		birthArg.mPosition = leaderPos;
		birthArg.mFaceDir  = (TAU * (i + 1)) / count;

		if (leader->mSpawnSource == SHIJIMISOURCE_Null) {
			birthArg.mPosition.x += factor * sinf(birthArg.mFaceDir);
			birthArg.mPosition.z += factor * cosf(birthArg.mFaceDir);
		}
		birthArg.mPosition.y += 50.0f * randFloat() - 25.0f;

		f32 redCheck    = CG_PROPERPARMS(leader).mRedSpawnChance.mValue;
		f32 purpleCheck = redCheck + CG_PROPERPARMS(leader).mPurpleSpawnChance.mValue;

		EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
		if (enemy) {
			Obj* chou          = OBJ(enemy);
			chou->mSpawnSource = leader->mSpawnSource;

			f32 typeCheck = randFloat();
			if (typeCheck < redCheck) {
				chou->mSpecType = SHIJIMITYPE_Red;
			} else if (typeCheck < purpleCheck) {
				chou->mSpecType = SHIJIMITYPE_Purple;
			} else {
				chou->mSpecType = SHIJIMITYPE_Yellow;
			}

			if (leader->mSpawnSource == SHIJIMISOURCE_Plants) {
				chou->createAppearEffect();
				chou->mSpecType = SHIJIMITYPE_Yellow;
			}

			chou->mGroupLeader  = leader;
			chou->mFlyType      = leader->getFlyType();
			chou->mHomePosition = homePos;
			chou->init(nullptr);
			chou->mSpawningEnemy = leader->mSpawningEnemy;

			leader->mGroupCount = i + 1;
		}
	}
}

/**
 * @note Address: 0x80389100
 * @note Size: 0xB8
 */
void Mgr::createGroupByBigFoot(EnemyBirthArg& birthArg, int count)
{
	EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
	if (enemy) {
		Obj* chou    = OBJ(enemy);
		mGroupLeader = chou;

		chou->mHomePosition = birthArg.mPosition;
		chou->onSetPosition(birthArg.mPosition);
		chou->mGroupLeader = chou;
		chou->mFlyType     = 0;
		chou->init(nullptr);
		chou->mSpawnSource = SHIJIMISOURCE_BeadyLongLegs;

		createGroup(chou, count);
	}
}

/**
 * @note Address: 0x803891B8
 * @note Size: 0xB8
 */
void Mgr::createGroupByPlants(EnemyBirthArg& birthArg, int count)
{
	EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
	if (enemy) {
		Obj* chou    = OBJ(enemy);
		mGroupLeader = chou;

		chou->mHomePosition = birthArg.mPosition;
		chou->onSetPosition(birthArg.mPosition);
		chou->mGroupLeader = chou;
		chou->mFlyType     = 1;
		chou->init(nullptr);
		chou->mSpawnSource = SHIJIMISOURCE_Plants;

		createGroup(chou, count);
	}
}

/**
 * @note Address: 0x80389270
 * @note Size: 0x198
 */
void Mgr::createGroupByEnemy(EnemyBirthArg& birthArg, EnemyBase* enemy, int count, bool check)
{
	Obj* chou = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (chou) {
		Vector3f birthPos = birthArg.mPosition;
		if (!check && enemy) {
			birthPos.x = -(75.0f * sinf(enemy->getFaceDir()) - birthPos.x);
			birthPos.z = -(75.0f * cosf(enemy->getFaceDir()) - birthPos.z);
		}
		mGroupLeader = chou;

		chou->onSetPosition(birthPos);
		chou->mGroupLeader = chou;
		chou->mFlyType     = 1;
		chou->init(nullptr);
		chou->mSpawnSource   = SHIJIMISOURCE_Enemy;
		chou->mSpawningEnemy = enemy;

		createGroup(chou, count);
	}
}

} // namespace ShijimiChou
} // namespace Game
