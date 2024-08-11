#include "Game/Entities/TamagoMushi.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "Dolphin/rand.h"

namespace Game {
namespace TamagoMushi {

static const char tamagoMushiMgrName[] = "tamagoMushiMgr";

/**
 * @note Address: 0x8036D988
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "タマゴムシマネージャ"; // egg bug manager
}

/**
 * @note Address: 0x8036D9D8
 * @note Size: 0x100
 */
void Mgr::doAlloc()
{
	init(new Parms);
	mMtxCacheRef = new J3DUMtxCacheRef<J3DUMtxAnmCacheTable>(getCacheTable(getModel(), getTransform()));
}

/**
 * @note Address: 0x8036DD90
 * @note Size: 0x48
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg)
{
	Obj* tamagomushi = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (tamagomushi) {
		tamagomushi->init(nullptr);
		tamagomushi->setLeader(tamagomushi);
	}
	return tamagomushi;
}

/**
 * @note Address: 0x8036DDD8
 * @note Size: 0x58
 */
void Mgr::fetch(J3DModel* model, f32 animationFrame)
{
	if (mMtxCacheRef) {
		mMtxCacheRef->mCache->mAnimationFrame = 0.5f + animationFrame;
		static_cast<J3DUMtxCacheBase*>(mMtxCacheRef)->fetch(model);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 * --INLINED--
 */
int Mgr::getFreeNum()
{
	int freeSlots = 0;
	for (int i = freeSlots; i < getMaxObjects(); i++) {
		EnemyBase* enemy = getEnemy(i);
		if (!enemy->isEvent(0, EB_Alive)) {
			freeSlots++;
		}
	}
	return freeSlots;
}

/**
 * @note Address: 0x8036DE30
 * @note Size: 0xF8
 */
Obj* Mgr::createGroup(EnemyBirthArg& birthArg, int count, Vector3f& velocity)
{
	int freeSlots = getFreeNum();

	if (freeSlots < count) {
		return nullptr;
	}

	EnemyBase* newEnemy = EnemyMgrBase::birth(birthArg);
	if (newEnemy) {
		Obj* leader = static_cast<Obj*>(newEnemy);
		leader->init(nullptr);
		leader->setTypeBall();
		leader->setVelocity(velocity);
		createGroup(leader, count, true);
		return leader;
	}

	return nullptr;
}

/**
 * @note Address: 0x8036DF28
 * @note Size: 0xB0
 */
Obj* Mgr::createGroupByBigFoot(EnemyBirthArg& birthArg, int count, Vector3f& velocity, f32 fallSpeedSpread)
{
	EnemyBase* enemy = EnemyMgrBase::birth(birthArg);

	if (enemy) {
		Obj* leader = OBJ(enemy);
		leader->init(nullptr);
		leader->setTypeBall();
		leader->setVelocity(velocity);
		createGroupByBigFoot(leader, count, true, fallSpeedSpread);
		return leader;
	}

	return nullptr;
}

/**
 * @note Address: 0x8036DFD8
 * @note Size: 0x3AC
 */
void Mgr::createGroup(Obj* leader, int count, bool isExplodeFromObject)
{
	// if appearing from ground, scatter outwards
	// if exploding from egg/RLL, more tightly + explode "inwards" from leader
	f32 distanceOffsetFactor = 45.0f;
	if (isExplodeFromObject) {
		distanceOffsetFactor = -10.0f;
	}

	P2ASSERTLINE(170, leader);
	leader->setLeader(leader);

	EnemyBirthArg birthArg;
	Vector3f leaderPos = leader->getPosition();

	// if appearing from ground, do so at random offsets
	// if exploding from egg/RLL, do so at fixed radius
	f32 birthRadius = 0.5f * randFloat() + 0.5f;
	if (isExplodeFromObject) {
		birthRadius = 1.0f;
	}

	birthArg.mFaceDir  = 0.0f;
	birthArg.mPosition = leaderPos;

	leader->onSetPosition(birthArg.mPosition);

	leader->mFaceDir    = birthArg.mFaceDir;
	leader->mRotation.y = leader->mFaceDir;

	for (int i = 0; i < count - 1; i++) {
		// if appearing from ground, scatter birth radius even more
		if (!isExplodeFromObject) {
			birthRadius = 0.8f * randFloat() + 0.2f;
		}
		birthArg.mPosition = leaderPos;
		birthArg.mFaceDir  = (TAU * (i)) / ((f32)count);

		f32 sinComp = distanceOffsetFactor * sinf(birthArg.mFaceDir);
		birthArg.mPosition.x += birthRadius * sinComp;
		f32 cosComp = distanceOffsetFactor * cosf(birthArg.mFaceDir);
		birthArg.mPosition.z += birthRadius * cosComp;

		// if we're exploding from egg/RLL (or for every second mitite), flip face dir
		if (isExplodeFromObject || (int)(i % 2) == 1) {
			birthArg.mFaceDir *= -1.0f;
		}

		EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
		if (enemy) {
			Obj* tamagomushi = OBJ(enemy);
			tamagomushi->init(nullptr);
			if (isExplodeFromObject) {
				Vector3f leaderVelocity = leader->getVelocity();
				tamagomushi->setVelocity(leaderVelocity);
			}
			tamagomushi->setLeader(leader);
		}
	}
}

/**
 * @note Address: 0x8036E384
 * @note Size: 0x484
 */
void Mgr::createGroupByBigFoot(Obj* leader, int count, bool doSpreadFallSpeeds, f32 fallSpeedSpread)
{
	P2ASSERTLINE(223, leader);
	leader->setLeader(leader);

	EnemyBirthArg birthArg;
	Vector3f leaderPos = leader->getPosition();

	birthArg.mFaceDir  = 0.0f;
	birthArg.mPosition = leaderPos;

	leader->onSetPosition(birthArg.mPosition);

	leader->mFaceDir    = birthArg.mFaceDir;
	leader->mRotation.y = leader->mFaceDir;

	for (int i = 0; i < count - 1; i++) {
		f32 factor = 0.8f * randFloat() + 0.2f;

		birthArg.mFaceDir  = TAU * randFloat();
		birthArg.mPosition = leaderPos;
		f32 angle          = (TAU * (f32)i) / (f32)count;

		birthArg.mPosition.x += (factor * (50.0f * sinf(angle)));
		birthArg.mPosition.z += (factor * (50.0f * cosf(angle)));

		Obj* tamagomushi = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
		if (tamagomushi) {
			tamagomushi->init(nullptr);
			if (doSpreadFallSpeeds) {
				Vector3f leaderVelocity = leader->getVelocity();
				if (i % 3) {
					leaderVelocity.y -= fallSpeedSpread * randFloat();
				} else {
					leaderVelocity.y += fallSpeedSpread * randFloat();
				}

				tamagomushi->setVelocity(leaderVelocity);
			}
			tamagomushi->setLeader(leader);

			tamagomushi->mRotation = Vector3f(TAU * randFloat(), birthArg.mFaceDir, TAU * randFloat());
		}
	}
}

} // namespace TamagoMushi
} // namespace Game
