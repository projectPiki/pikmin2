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

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
Plant::Plant(Creature* creature)
    : CNode("")
    , mCreature(creature)
    , _1C()
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void Plant::sendInteraction()
{
	if (_1C > 0) {
		InteractFarmHaero haero(mCreature, _1C);
		mCreature->stimulate(haero);

	} else if (_1C < 0) {
		InteractFarmKarero karero(mCreature, -_1C);
		mCreature->stimulate(karero);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Plant::doDebugDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
Obstacle::Obstacle(Farm* farm, FieldVtxColorMgr* vtxColorMgr, Game::Creature* creature, f32 p2, f32 p3)
    : CNode("")
    , mFarm(farm)
{
	Vector3f position = creature->getPosition();
	mCreature         = creature;
	mVtxColorControl  = vtxColorMgr->createNewControl(position, p2, p3);
}

/*
 * --INFO--
 * Address:	801234F8
 * Size:	000030
 */
void Obstacle::setPower(f32 power)
{
	mVtxColorControl->mPower = power;
	mFarm->updateObjectRelation(true);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void Obstacle::doDebugDraw(Graphics& gfx)
{
	Vector3f creaturePos = mCreature->getPosition();

	gfx._084 = Color4(255, 255, 255, 255);
	gfx.drawSphere(creaturePos, mVtxColorControl->_10);

	gfx._084 = Color4(255, 55, 55, 255);

	f32 power = mVtxColorControl->mPower;
	power     = mVtxColorControl->_10 * power;
	gfx.drawSphere(creaturePos, power);
}

/*
 * __ct__Q34Game4Farm4FarmFv
 * --INFO--
 * Address:	80123528
 * Size:	0000BC
 */
Farm::Farm()
    : CNode("”_k")
    , mModelData(nullptr)
    , mModel(nullptr)
    , mObstacleRootNode("ObstacleNode")
    , mPlantRootNode("PlantNode")
{
	add(&mObstacleRootNode);
	add(&mPlantRootNode);
}

/*
 * --INFO--
 * Address:	801235E4
 * Size:	000200
 */
void Farm::loadResource(u32 p1, void* mdlData)
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
	mModel = new SysShape::Model(mModelData, 0, p1);
	sys->heapStatusEnd("createModel");

	sys->heapStatusStart("vtxClrAnm", nullptr);
	mVtxColorMgr = new FieldVtxColorMgr(mModelData);
	mVtxColorMgr->initVtxColor();
	add(mVtxColorMgr);
	sys->heapStatusEnd("vtxClrAnm");

	mModel->mJ3dModel->setVtxColorCalc(mVtxColorMgr, DeformAttach_0);
	sys->heapStatusEnd("Farm resource");
}

/*
 * --INFO--
 * Address:	801237E4
 * Size:	000004
 */
void Farm::update() { }

/*
 * --INFO--
 * Address:	801237E8
 * Size:	000034
 */
void Farm::doAnimation() { mModel->mJ3dModel->calc(); }

/*
 * --INFO--
 * Address:	8012381C
 * Size:	000034
 */
void Farm::doEntry() { mModel->mJ3dModel->entry(); }

/*
 * --INFO--
 * Address:	80123850
 * Size:	000024
 */
void Farm::doSetView(u32 viewNumber) { mModel->setCurrentViewNo(viewNumber); }

/*
 * --INFO--
 * Address:	80123874
 * Size:	000024
 */
void Farm::doViewCalc() { mModel->viewCalc(); }

/*
 * --INFO--
 * Address:	80123898
 * Size:	000070
 */
Obstacle* Farm::addObstacle(Creature* creature, f32 p2, f32 p3)
{
	Obstacle* obstacle = createNewObstacle(creature, p2, p3);
	obstacle->setName(creature->getCreatureName());
	mVtxColorMgr->initVtxColor();
	updateObjectRelation(true);
	return obstacle;
}

/*
 * --INFO--
 * Address:	80123914
 * Size:	000114
 */
Obstacle* Farm::createNewObstacle(Creature* creature, f32 p2, f32 p3)
{
	Obstacle* obstacle = new Obstacle(this, mVtxColorMgr, creature, p2, p3);
	mObstacleRootNode.add(obstacle);
	return obstacle;
}

/*
 * --INFO--
 * Address:	80123A28
 * Size:	000044
 */
Plant* Farm::addPlant(Creature* creature)
{
	Plant* plant = createNewPlant(creature);
	updateObjectRelation(true);
	return plant;
}

/*
 * --INFO--
 * Address:	80123A6C
 * Size:	0000B0
 */
Plant* Farm::createNewPlant(Creature* creature)
{
	Plant* plant = new Plant(creature);
	plant->setName(creature->getCreatureName());
	mPlantRootNode.add(plant);
	return plant;
}

/*
 * --INFO--
 * Address:	80123B1C
 * Size:	0001DC
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
			f32 factor           = obstacleNode->mVtxColorControl->_10;
			if (dist < factor) {
				if (dist < factor * obstacleNode->mVtxColorControl->mPower) {
					counter--;
				} else {
					counter++;
				}
			}
		}

		plantNode->_1C = counter;

		if (doInteract) {
			plantNode->sendInteraction();
		}
	}
}

/*
 * --INFO--
 * Address:	80123CF8
 * Size:	000108
 */
void Farm::doDebugDraw(Graphics& gfx)
{
	gfx.initPrimDraw(gfx.mCurrentViewport->getMatrix(false));

	FOREACH_NODE(Obstacle, mObstacleRootNode.mChild, obstacle) { obstacle->doDebugDraw(gfx); }

	FOREACH_NODE(Obstacle, mObstacleRootNode.mChild, obstacle2) { }
}

/*
 * --INFO--
 * Address:	80123E00
 * Size:	0000DC
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

/*
 * --INFO--
 * Address:	80123EDC
 * Size:	000060
 */
Plant::~Plant() { }

/*
 * --INFO--
 * Address:	80123F3C
 * Size:	000060
 */
Obstacle::~Obstacle() { }

/*
 * --INFO--
 * Address:	80123F9C
 * Size:	00007C
 */
Farm::~Farm() { }

} // namespace Farm
} // namespace Game
