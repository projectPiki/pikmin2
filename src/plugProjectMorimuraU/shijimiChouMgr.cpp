#include "Game/Entities/ShijimiChou.h"
#include "JSystem/JUtility/JUTNameTab.h"
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
	mUpdateMgr   = nullptr;
	mGroupLeader = nullptr;
	mName        = "シジミ蝶マネージャ"; // clam butterfly manager
}

/*
 * --INFO--
 * Address:	8038851C
 * Size:	000150
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

/*
 * --INFO--
 * Address:	80388964
 * Size:	000038
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	mModelData->newSharedDisplayList(0x00040000);
}

/*
 * --INFO--
 * Address:	8038899C
 * Size:	000138
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, 0x80000, mModelType);
	P2ASSERTLINE(71, model);

	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "mat_shijimi_hane_v")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(0x01000000);
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

/*
 * --INFO--
 * Address:	80388B9C
 * Size:	000050
 */
void Mgr::doAnimation()
{
	EnemyMgrBase::doAnimation();
	if (mGroupLeader && CG_PARMS(mGroupLeader)->mDoUpdateAnimation) {
		mUpdateMgr->update();
	}
}

/*
 * --INFO--
 * Address:	80388BEC
 * Size:	000058
 */
void Mgr::fetch(J3DModel* model, f32 p1)
{
	if (mMtxCacheRef) {
		mMtxCacheRef->mCache->_00 = 0.5f + p1;
		mMtxCacheRef->fetch(model);
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

/*
 * --INFO--
 * Address:	80389100
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	803891B8
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	80389270
 * Size:	000198
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
