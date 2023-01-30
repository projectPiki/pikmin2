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
static void _Print(char*, ...) { OSReport(""); }

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
	mPosition.x *= norm;
	mPosition.y *= norm;
	mPosition.z *= norm;

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
			f32 dist             = _distanceBetween(obstaclePos, plantPos);
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
			if (plantNode->_1C > 0) {
				InteractFarmHaero haero(plantNode->mCreature, plantNode->_1C);
				plantNode->mCreature->stimulate(haero);

			} else if (plantNode->_1C < 0) {
				InteractFarmKarero karero(plantNode->mCreature, -plantNode->_1C);
				plantNode->mCreature->stimulate(karero);
			}
		}
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	mr       r31, r3
	lfs      f31, lbl_80517E8C@sda21(r2)
	lwz      r29, 0x58(r3)
	clrlwi   r30, r4, 0x18
	b        lbl_80123CBC

lbl_80123B60:
	lwz      r4, 0x18(r29)
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f30, 0x2c(r1)
	li       r28, 0
	lfs      f29, 0x30(r1)
	lfs      f28, 0x34(r1)
	lwz      r27, 0x40(r31)
	b        lbl_80123C1C

lbl_80123B90:
	lwz      r4, 0x1c(r27)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x24(r1)
	lfs      f1, 0x20(r1)
	fsubs    f2, f0, f29
	lfs      f0, 0x28(r1)
	fsubs    f1, f1, f30
	fsubs    f0, f0, f28
	fmuls    f2, f2, f2
	fmuls    f3, f0, f0
	fmadds   f0, f1, f1, f2
	fadds    f1, f3, f0
	fcmpo    cr0, f1, f31
	ble      lbl_80123BE8
	ble      lbl_80123BEC
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80123BEC

lbl_80123BE8:
	fmr      f1, f31

lbl_80123BEC:
	lwz      r3, 0x20(r27)
	lfs      f2, 0x10(r3)
	fcmpo    cr0, f1, f2
	bge      lbl_80123C18
	lfs      f0, 0x14(r3)
	fmuls    f0, f2, f0
	fcmpo    cr0, f1, f0
	bge      lbl_80123C14
	addi     r28, r28, -1
	b        lbl_80123C18

lbl_80123C14:
	addi     r28, r28, 1

lbl_80123C18:
	lwz      r27, 4(r27)

lbl_80123C1C:
	cmplwi   r27, 0
	bne      lbl_80123B90
	cmplwi   r30, 0
	stw      r28, 0x1c(r29)
	beq      lbl_80123CB8
	lwz      r6, 0x1c(r29)
	cmpwi    r6, 0
	ble      lbl_80123C78
	lwz      r3, 0x18(r29)
	lis      r4, __vt__Q24Game11Interaction@ha
	addi     r0, r4, __vt__Q24Game11Interaction@l
	lis      r4, __vt__Q24Game17InteractFarmHaero@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q24Game17InteractFarmHaero@l
	stw      r3, 0xc(r1)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stw      r6, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_80123CB8

lbl_80123C78:
	bge      lbl_80123CB8
	lwz      r3, 0x18(r29)
	lis      r4, __vt__Q24Game11Interaction@ha
	addi     r0, r4, __vt__Q24Game11Interaction@l
	lis      r4, __vt__Q24Game18InteractFarmKarero@ha
	stw      r0, 0x14(r1)
	addi     r5, r4, __vt__Q24Game18InteractFarmKarero@l
	neg      r0, r6
	stw      r3, 0x18(r1)
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80123CB8:
	lwz      r29, 4(r29)

lbl_80123CBC:
	cmplwi   r29, 0
	bne      lbl_80123B60
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123CF8
 * Size:	000108
 */
void Farm::doDebugDraw(Graphics& gfx)
{
	gfx.initPrimDraw(gfx.mCurrentViewport->getMatrix(false));

	FOREACH_NODE(Obstacle, mObstacleRootNode.mChild, obstacle)
	{
		Vector3f creaturePos = obstacle->mCreature->getPosition();

		gfx._084 = 255;
		gfx._085 = 255;
		gfx._086 = 255;
		gfx._087 = 255;
		gfx.drawSphere(creaturePos, obstacle->mVtxColorControl->_10);

		gfx._084 = 255;
		gfx._085 = 55;
		gfx._086 = 55;
		gfx._087 = 255;
		gfx.drawSphere(creaturePos, obstacle->mVtxColorControl->mPower * obstacle->mVtxColorControl->_10);
	}

	FOREACH_NODE(Obstacle, mObstacleRootNode.mChild, obstacle2) { }
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r3, 0x25c(r4)
	li       r4, 0
	bl       getMatrix__8ViewportFb
	mr       r4, r3
	mr       r3, r30
	bl       initPrimDraw__8GraphicsFP7Matrixf
	lwz      r31, 0x40(r29)
	b        lbl_80123DC8

lbl_80123D38:
	lwz      r4, 0x1c(r31)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	li       r0, 0xff
	lfs      f1, 0x18(r1)
	mr       r3, r30
	lfs      f0, 0x1c(r1)
	addi     r4, r1, 8
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	stb      r0, 0x84(r30)
	stb      r0, 0x85(r30)
	stb      r0, 0x86(r30)
	stb      r0, 0x87(r30)
	lwz      r5, 0x20(r31)
	lfs      f1, 0x10(r5)
	bl       "drawSphere__8GraphicsFR10Vector3<f>f"
	li       r5, 0xff
	li       r0, 0x37
	stb      r5, 0x84(r30)
	mr       r3, r30
	addi     r4, r1, 8
	stb      r0, 0x85(r30)
	stb      r0, 0x86(r30)
	stb      r5, 0x87(r30)
	lwz      r5, 0x20(r31)
	lfs      f1, 0x14(r5)
	lfs      f0, 0x10(r5)
	fmuls    f1, f0, f1
	bl       "drawSphere__8GraphicsFR10Vector3<f>f"
	lwz      r31, 4(r31)

lbl_80123DC8:
	cmplwi   r31, 0
	bne      lbl_80123D38
	lwz      r3, 0x40(r29)
	b        lbl_80123DDC

lbl_80123DD8:
	lwz      r3, 4(r3)

lbl_80123DDC:
	cmplwi   r3, 0
	bne      lbl_80123DD8
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
} // namespace Farm
} // namespace Game
