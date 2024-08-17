#include "Graphics.h"
#include "Game/Farm.h"
#include "Game/Creature.h"
#include "Game/FieldVtxColorMgr.h"
#include "Game/Interaction.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "System.h"
#include "Vector3.h"
#include "Viewport.h"
#include "types.h"

namespace Game {
namespace Farm {

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
Plant::Plant(Creature* creature)
    : CNode("")
    , mCreature(creature)
    , mCurrentPower()
{
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void Plant::sendInteraction()
{
	if (mCurrentPower > 0) {
		InteractFarmHaero haero(mCreature, mCurrentPower);
		mCreature->stimulate(haero);

	} else if (mCurrentPower < 0) {
		InteractFarmKarero karero(mCreature, -mCurrentPower);
		mCreature->stimulate(karero);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void Plant::doDebugDraw(Graphics& gfx) { }

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
Obstacle::Obstacle(Farm* farm, FieldVtxColorMgr* vtxColorMgr, Game::Creature* creature, f32 radius, f32 power)
    : CNode("")
    , mFarm(farm)
{
	Vector3f position = creature->getPosition();
	mCreature         = creature;
	mVtxColorControl  = vtxColorMgr->createNewControl(position, radius, power);
}

/**
 * @note Address: 0x801234F8
 * @note Size: 0x30
 */
void Obstacle::setPower(f32 power)
{
	mVtxColorControl->mPower = power;
	mFarm->updateObjectRelation(true);
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
void Obstacle::doDebugDraw(Graphics& gfx)
{
	Vector3f creaturePos = mCreature->getPosition();

	gfx.mDrawColor = Color4(255, 255, 255, 255);
	gfx.drawSphere(creaturePos, mVtxColorControl->mRadius);

	gfx.mDrawColor = Color4(255, 55, 55, 255);

	f32 power = mVtxColorControl->mPower;
	power     = mVtxColorControl->mRadius * power;
	gfx.drawSphere(creaturePos, power);
}

/**
 * __ct__Q34Game4Farm4FarmFv
 * @note Address: 0x80123528
 * @note Size: 0xBC
 */
Farm::Farm()
    : CNode("農耕")
    , mModelData(nullptr)
    , mModel(nullptr)
    , mObstacleRootNode("ObstacleNode")
    , mPlantRootNode("PlantNode")
{
	add(&mObstacleRootNode);
	add(&mPlantRootNode);
}

/**
 * @note Address: 0x801235E4
 * @note Size: 0x200
 */
void Farm::loadResource(u32 modelType, void* mdlData)
{
	sys->heapStatusStart("Farm resource", nullptr);
	sys->heapStatusStart("mdlData", nullptr);
	mModelData = J3DModelLoaderDataBase::load(mdlData, 0x20000000);
	sys->heapStatusEnd("mdlData");
	mPosition = Vector3f(0.0f);

	Vector3f* vtxPos = (Vector3f*)mModelData->getVtxPosArray();
	for (u16 i = 0; (u32)i < mModelData->getVertexData()->getVtxNum(); i++) {
		mPosition.x += (vtxPos)[i].x;
		mPosition.y += (vtxPos)[i].y;
		mPosition.z += (vtxPos)[i].z;
	}

	f32 norm = 1.0f / mModelData->getVertexData()->getVtxNum();
	mPosition *= norm;

	sys->heapStatusStart("createModel", nullptr);
	mModel = new SysShape::Model(mModelData, 0, modelType);
	sys->heapStatusEnd("createModel");

	sys->heapStatusStart("vtxClrAnm", nullptr);
	mVtxColorMgr = new FieldVtxColorMgr(mModelData);
	mVtxColorMgr->initVtxColor();
	add(mVtxColorMgr);
	sys->heapStatusEnd("vtxClrAnm");

	mModel->mJ3dModel->setVtxColorCalc(mVtxColorMgr, DeformAttach_0);
	sys->heapStatusEnd("Farm resource");
}

/**
 * @note Address: 0x801237E4
 * @note Size: 0x4
 */
void Farm::update() { }

/**
 * @note Address: 0x801237E8
 * @note Size: 0x34
 */
void Farm::doAnimation() { mModel->mJ3dModel->calc(); }

/**
 * @note Address: 0x8012381C
 * @note Size: 0x34
 */
void Farm::doEntry() { mModel->mJ3dModel->entry(); }

/**
 * @note Address: 0x80123850
 * @note Size: 0x24
 */
void Farm::doSetView(u32 viewNumber) { mModel->setCurrentViewNo(viewNumber); }

/**
 * @note Address: 0x80123874
 * @note Size: 0x24
 */
void Farm::doViewCalc() { mModel->viewCalc(); }

/**
 * @note Address: 0x80123898
 * @note Size: 0x70
 */
Obstacle* Farm::addObstacle(Creature* creature, f32 radius, f32 power)
{
	Obstacle* obstacle = createNewObstacle(creature, radius, power);
	obstacle->setName(creature->getCreatureName());
	mVtxColorMgr->initVtxColor();
	updateObjectRelation(true);
	return obstacle;
}

/**
 * @note Address: 0x80123914
 * @note Size: 0x114
 */
Obstacle* Farm::createNewObstacle(Creature* creature, f32 radius, f32 power)
{
	Obstacle* obstacle = new Obstacle(this, mVtxColorMgr, creature, radius, power);
	mObstacleRootNode.add(obstacle);
	return obstacle;
}

/**
 * @note Address: 0x80123A28
 * @note Size: 0x44
 */
Plant* Farm::addPlant(Creature* creature)
{
	Plant* plant = createNewPlant(creature);
	updateObjectRelation(true);
	return plant;
}

/**
 * @note Address: 0x80123A6C
 * @note Size: 0xB0
 */
Plant* Farm::createNewPlant(Creature* creature)
{
	Plant* plant = new Plant(creature);
	plant->setName(creature->getCreatureName());
	mPlantRootNode.add(plant);
	return plant;
}

/**
 * @note Address: 0x80123B1C
 * @note Size: 0x1DC
 */
void Farm::updateObjectRelation(bool doInteract)
{
	FOREACH_NODE(Plant, mPlantRootNode.mChild, plantNode)
	{
		Vector3f plantPos = plantNode->mCreature->getPosition();
		int counter       = 0;
		FOREACH_NODE(Obstacle, mObstacleRootNode.mChild, obstacleNode)
		{
			Vector3f obstaclePos = obstacleNode->mCreature->getPosition();
			f32 dist             = obstaclePos.distance(plantPos);
			f32 factor           = obstacleNode->mVtxColorControl->mRadius;
			if (dist < factor) {
				if (dist < factor * obstacleNode->mVtxColorControl->mPower) {
					counter--;
				} else {
					counter++;
				}
			}
		}

		plantNode->mCurrentPower = counter;

		if (doInteract) {
			plantNode->sendInteraction();
		}
	}
}

/**
 * @note Address: 0x80123CF8
 * @note Size: 0x108
 */
void Farm::doDebugDraw(Graphics& gfx)
{
	gfx.initPrimDraw(gfx.mCurrentViewport->getMatrix(false));

	FOREACH_NODE(Obstacle, mObstacleRootNode.mChild, obstacle) { obstacle->doDebugDraw(gfx); }

	FOREACH_NODE(Obstacle, mObstacleRootNode.mChild, obstacle2) { }
}

/**
 * @note Address: 0x80123E00
 * @note Size: 0xDC
 */
void Farm::initAllObjectNodes()
{
	CNode* obstacleNode = mObstacleRootNode.mChild;
	while (obstacleNode) {
		CNode* nextObstacleNode = obstacleNode->mNext;
		obstacleNode->del();
		delete obstacleNode;
		obstacleNode = nextObstacleNode;
	}

	CNode* plantNode = mPlantRootNode.mChild;
	while (plantNode) {
		CNode* nextPlantNode = plantNode->mNext;
		plantNode->del();
		delete plantNode;
		plantNode = nextPlantNode;
	}

	mObstacleRootNode.clearRelations();
	mPlantRootNode.clearRelations();
}

// TODO: Make the below functions weak in headers

/**
 * @note Address: 0x80123EDC
 * @note Size: 0x60
 */
Plant::~Plant() { }

/**
 * @note Address: 0x80123F3C
 * @note Size: 0x60
 */
Obstacle::~Obstacle() { }

/**
 * @note Address: 0x80123F9C
 * @note Size: 0x7C
 */
Farm::~Farm() { }

} // namespace Farm
} // namespace Game
