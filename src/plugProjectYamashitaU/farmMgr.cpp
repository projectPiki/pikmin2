#include "float.h"
#include "Game/GameSystem.h"
#include "Game/Navi.h"
#include "System.h"
#include "types.h"
#include "Game/Farm.h"
#include "PSM/Creature.h"
#include "utilityU.h"
#include "nans.h"

namespace Game {
namespace Farm {

/**
 * __ct__Q34Game4Farm7FarmMgrFUl
 * @note Address: 0x80124018
 * @note Size: 0xC0
 */
FarmMgr::FarmMgr(u32 farmType)
    : GenericObjectMgr()
    , CNode("農耕マネージャ")
    , mModelType(farmType)
    , mFarmsRootNode("農耕ポイント")
    , mDirectorUpdator(nullptr)
    , mUnused1(0)
    , mUnused2(0)
{
	add(&mFarmsRootNode);
	mUnused1 = 0;
	mUnused2 = 0;
}

/**
 * @note Address: 0x801240D8
 * @note Size: 0x2C
 */
void FarmMgr::setupSound()
{
	FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm)
	{
		FOREACH_NODE(Obstacle, farm->mObstacleRootNode.mChild, obstacle) { }
	}
}

/**
 * @note Address: 0x80124104
 * @note Size: 0x124
 */
void FarmMgr::doAnimation()
{
	u8 count = 0;
	if (mFarmsRootNode.mChild) {
		FOREACH_NODE(Farm, mFarmsRootNode.mChild, farmNode)
		{
			FOREACH_NODE(Obstacle, farmNode->mObstacleRootNode.mChild, obstacleNode)
			{
				PSM::CreatureObj* soundObj = static_cast<PSM::CreatureObj*>(obstacleNode->mCreature->getJAIObject());
				Navi* navi                 = naviMgr->getActiveNavi();
				if (obstacleNode->mVtxColorControl->mPower <= 0.0f && navi && soundObj->isNear(navi, PSMGetNoukouDist())) {
					if (mDirectorUpdator) {
						mDirectorUpdator->directOn(count);
					}
				} else if (mDirectorUpdator) {
					mDirectorUpdator->directOff(count);
				}
				count++;
			}

			farmNode->update();
			farmNode->doAnimation();
		}
	}

	if (mDirectorUpdator) {
		mDirectorUpdator->frameEndWork();
	}
}

/**
 * @note Address: 0x80124230
 * @note Size: 0x68
 */
void FarmMgr::doEntry()
{
	gameSystem->setDrawBuffer(9);
	if (mFarmsRootNode.mChild) {
		FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm) { farm->doEntry(); }
	}
	gameSystem->setDrawBuffer(0);
}

/**
 * @note Address: 0x80124298
 * @note Size: 0x5C
 */
void FarmMgr::doSetView(int viewportNumber)
{
	if (mFarmsRootNode.mChild) {
		FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm) { farm->doSetView(viewportNumber); }
	}
}

/**
 * @note Address: 0x801242F4
 * @note Size: 0x4C
 */
void FarmMgr::doViewCalc()
{
	if (mFarmsRootNode.mChild) {
		FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm) { farm->doViewCalc(); }
	}
}

/**
 * @note Address: 0x80124340
 * @note Size: 0x4
 */
void FarmMgr::doSimulation(f32) { }

/**
 * @note Address: 0x80124344
 * @note Size: 0x4
 */
void FarmMgr::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80124348
 * @note Size: 0x50
 */
void FarmMgr::doDebugDraw(Graphics& gfx)
{
	FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm) { farm->doDebugDraw(gfx); }
}

/**
 * @note Address: 0x80124398
 * @note Size: 0x68
 */
void FarmMgr::addFarmBmd(void* bmd)
{
	sys->heapStatusStart("FarmMgr Resource", nullptr);
	createNewFarm(bmd);
	sys->heapStatusEnd("FarmMgr Resource");
}

/**
 * @note Address: 0x80124400
 * @note Size: 0x74
 */
Farm* FarmMgr::createNewFarm(void* bmd)
{
	Farm* farm = new Farm();
	farm->loadResource(mModelType, bmd);
	mFarmsRootNode.add(farm);
	return farm;
}

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
Farm* FarmMgr::getNearestFarm(Vector3f& position)
{
	Farm* nearestFarm   = nullptr;
	f32 nearestDistance = FLT_MAX;
	if (mFarmsRootNode.mChild) {
		FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm)
		{
			f32 distance = farm->mPosition.distance(position);
			if (distance < nearestDistance) {
				nearestFarm     = farm;
				nearestDistance = distance;
			}
		}
	}
	return nearestFarm;
}

/**
 * @note Address: 0x80124474
 * @note Size: 0x120
 */
Obstacle* FarmMgr::addObstacle(Creature* creature, f32 radius, f32 power)
{
	Vector3f position = creature->getPosition();
	Farm* farm        = getNearestFarm(position);
	if (farm) {
		return farm->addObstacle(creature, radius, power);
	}
	return nullptr;
}

/**
 * @note Address: 0x80124594
 * @note Size: 0xF0
 */
Plant* FarmMgr::addPlant(Creature* creature)
{
	Vector3f position = creature->getPosition();
	Farm* farm        = getNearestFarm(position);
	if (farm) {
		return farm->addPlant(creature);
	}
	return nullptr;
}

/**
 * @note Address: 0x80124684
 * @note Size: 0x4C
 */
void FarmMgr::initAllFarmObjectNodes()
{
	if (mFarmsRootNode.mChild) {
		FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm) { farm->initAllObjectNodes(); }
	}
}

/**
 * __dt__Q34Game4Farm7FarmMgrFv
 * @note Address: 0x801246D0
 * @note Size: 0x78
 * TODO: Make Weak
 */
FarmMgr::~FarmMgr() { }
} // namespace Farm
} // namespace Game
