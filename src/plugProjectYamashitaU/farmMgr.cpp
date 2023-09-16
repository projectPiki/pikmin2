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

/*
 * __ct__Q34Game4Farm7FarmMgrFUl
 * --INFO--
 * Address:	80124018
 * Size:	0000C0
 */
FarmMgr::FarmMgr(u32 p1)
    : GenericObjectMgr()
    , CNode("”_kƒ}ƒl[ƒWƒƒ")
    , _1C(p1)
    , mFarmsRootNode("”_kƒ|ƒCƒ“ƒg")
    , mDirectorUpdator(nullptr)
    , _3C(0)
    , _3D(0)
{
	add(&mFarmsRootNode);
	_3C = 0;
	_3D = 0;
}

/*
 * --INFO--
 * Address:	801240D8
 * Size:	00002C
 */
void FarmMgr::setupSound()
{
	FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm)
	{
		FOREACH_NODE(Obstacle, farm->mObstacleRootNode.mChild, obstacle) { }
	}
}

/*
 * --INFO--
 * Address:	80124104
 * Size:	000124
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

/*
 * --INFO--
 * Address:	80124230
 * Size:	000068
 */
void FarmMgr::doEntry()
{
	gameSystem->setDrawBuffer(9);
	if (mFarmsRootNode.mChild) {
		FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm) { farm->doEntry(); }
	}
	gameSystem->setDrawBuffer(0);
}

/*
 * --INFO--
 * Address:	80124298
 * Size:	00005C
 */
void FarmMgr::doSetView(int viewportNumber)
{
	if (mFarmsRootNode.mChild) {
		FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm) { farm->doSetView(viewportNumber); }
	}
}

/*
 * --INFO--
 * Address:	801242F4
 * Size:	00004C
 */
void FarmMgr::doViewCalc()
{
	if (mFarmsRootNode.mChild) {
		FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm) { farm->doViewCalc(); }
	}
}

/*
 * --INFO--
 * Address:	80124340
 * Size:	000004
 */
void FarmMgr::doSimulation(f32) { }

/*
 * --INFO--
 * Address:	80124344
 * Size:	000004
 */
void FarmMgr::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80124348
 * Size:	000050
 */
void FarmMgr::doDebugDraw(Graphics& gfx)
{
	FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm) { farm->doDebugDraw(gfx); }
}

/*
 * --INFO--
 * Address:	80124398
 * Size:	000068
 */
void FarmMgr::addFarmBmd(void* bmd)
{
	sys->heapStatusStart("FarmMgr Resource", nullptr);
	createNewFarm(bmd);
	sys->heapStatusEnd("FarmMgr Resource");
}

/*
 * --INFO--
 * Address:	80124400
 * Size:	000074
 */
Farm* FarmMgr::createNewFarm(void* bmd)
{
	Farm* farm = new Farm();
	farm->loadResource(_1C, bmd);
	mFarmsRootNode.add(farm);
	return farm;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
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

/*
 * --INFO--
 * Address:	80124474
 * Size:	000120
 */
Obstacle* FarmMgr::addObstacle(Creature* creature, f32 p2, f32 p3)
{
	Vector3f position = creature->getPosition();
	Farm* farm        = getNearestFarm(position);
	if (farm) {
		return farm->addObstacle(creature, p2, p3);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80124594
 * Size:	0000F0
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

/*
 * --INFO--
 * Address:	80124684
 * Size:	00004C
 */
void FarmMgr::initAllFarmObjectNodes()
{
	if (mFarmsRootNode.mChild) {
		FOREACH_NODE(Farm, mFarmsRootNode.mChild, farm) { farm->initAllObjectNodes(); }
	}
}

/*
 * __dt__Q34Game4Farm7FarmMgrFv
 * --INFO--
 * Address:	801246D0
 * Size:	000078
 * TODO: Make Weak
 */
FarmMgr::~FarmMgr() { }
} // namespace Farm
} // namespace Game
