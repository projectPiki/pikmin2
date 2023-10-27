#include "Game/Entities/Nest.h"
#include "JSystem/J3D/J3DTransform.h"
#include "LoadResource.h"

namespace Game {
namespace Nest {

static const char enemyNestMgrName[] = "enemyNestMgr";

J2DGXColorS10 mMatColor;

/*
 * __ct
 * --INFO--
 * Address:	8036C194
 * Size:	000070
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mJigumoHouseData = nullptr;
	mName            = "巣マネージャ"; // 'nest manager'
	mMatColor.a      = 0xFF;
	mMatColor.b      = 0xFF;
	mMatColor.g      = 0xFF;
	mMatColor.r      = 0xFF;
}

/*
 * --INFO--
 * Address:	8036C204
 * Size:	000048
 */
void Mgr::doAlloc() { init(new EnemyParmsBase); }

/*
 * --INFO--
 * Address:	8036C24C
 * Size:	000020
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/*
 * --INFO--
 * Address:	8036C26C
 * Size:	00012C
 */
J3DModelData* Mgr::loadModelData(JKRArchive* archive)
{
	void* enemyBMD = JKRFileLoader::getGlbResource("enemy.bmd", archive);

	if (enemyBMD) {
		mModelData = J3DModelLoaderDataBase::load(enemyBMD, 0x20240010);
		mModelData->newSharedDisplayList(0x40000);
		mModelData->simpleCalcMaterial(0, j3dDefaultMtx);
		mModelData->makeSharedDL();
	}

	LoadResource::ArgAramOnly loadArg("/enemy/data/JigumoHouse/model.szs");
	LoadResource::Node* jigumoLoadNode = gLoadResourceMgr->mountArchive(loadArg);

	P2ASSERTLINE(73, jigumoLoadNode);
	JKRArchive* jigumoArc = jigumoLoadNode->mArchive;
	P2ASSERTLINE(75, jigumoArc);

	enemyBMD = JKRFileLoader::getGlbResource("enemy.bmd", jigumoArc);
	if (enemyBMD) {
		mJigumoHouseData = J3DModelLoaderDataBase::load(enemyBMD, 0x20240010);
		mJigumoHouseData->newSharedDisplayList(0x40000);
		mJigumoHouseData->simpleCalcMaterial(0, j3dDefaultMtx);
		mJigumoHouseData->makeSharedDL();
	}

	return mModelData;
}

/*
 * --INFO--
 * Address:	8036C398
 * Size:	000320
 */
// regswaps
void Mgr::doSimpleDraw(Viewport* viewport)
{
	Mtx matMtx = { { 1.0f, 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.0f, 0.0f } };
	Mtx gxMtx;
	GXColorS10 color;
	color.a = 255;
	color.b = 255;
	color.g = 255;
	color.r = 255;

	for (int i = 0; i < getMaxObjects(); i++) {
		Obj* nest = static_cast<Obj*>(getEnemy(i));

		P2ASSERTLINE(111, nest);

		f32 scaleMod = nest->mScaleModifier;
		if (nest->isAlive() && nest->isCullingOff()) {
			Vector3f homePos = nest->mHomePosition;
			matMtx[0][0]     = scaleMod;
			matMtx[1][1]     = scaleMod;
			matMtx[2][2]     = scaleMod;
			matMtx[0][3]     = homePos.x;
			matMtx[1][3]     = homePos.y;
			matMtx[2][3]     = homePos.z;

			PSMTXConcat(viewport->getMatrix(true)->mMatrix.mtxView, matMtx, gxMtx);
			GXLoadPosMtxImm(gxMtx, 0);
			GXLoadNrmMtxImm(gxMtx, 0);

			// if we're a breadbug nest, use base model; if we're a crawmad nest, use special model
			J3DModelData* modelData = (nest->mHouseType) ? mModelData : mJigumoHouseData;
			J3DJoint* joint         = modelData->getJointNodePointer(0);
			P2ASSERTLINE(134, joint);

			J3DMaterial* material = joint->getMesh();
			P2ASSERTLINE(137, material);

			J3DVertexData* vtxData = modelData->getVertexData();
			j3dSys.setVtxPos(vtxData->getVtxPosArray());
			j3dSys.setVtxNrm(vtxData->getVtxNrmArray());
			j3dSys.setVtxCol(vtxData->getVtxColorArray(0));
			J3DShape::sOldVcdVatCmd = nullptr;
			material->loadSharedDL();
			material->mShape->loadPreDrawSetting();
			material->calc(matMtx);

			color.a = nest->mAlpha;
			color.a -= 10;
			if (color.a < -255) {
				color.a = -255;
				nest->kill(nullptr);
				nest->setAlive(false);
				nest->setAtari(false);
			}

			s16 alpha = color.a;
			if (nest->mDeathTimer > 0) {
				nest->mDeathTimer++; // if we've started dying, keep dying

				// if we're sufficiently 'dead', start decrementing alpha value to make nest invisible
				if (nest->mDeathTimer > 80) {
					nest->mAlpha = alpha;
					nest->setAtari(false);
				}
			}
			GXSetTevColorS10(GX_TEVREG0, color);

			material->mShape->simpleDrawCache();
		}
	}
}

/*
 * --INFO--
 * Address:	8036C6C8
 * Size:	0001E8
 */
void Mgr::initObjects()
{
	char path[256];
	if (isValidEnemyTypeID()) {
		char* collisionFolder = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF)->mCollName;
		if (*collisionFolder == '\0') {
			collisionFolder = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
		}

		sprintf(path, "%s/enemyColl.txt", collisionFolder);
		SysShape::Model* model = createModel();

		for (int i = 0; i < getMaxObjects(); i++) {
			Obj* enemy = static_cast<Obj*>(getEnemy(i));
			P2ASSERTLINE(201, enemy);
			enemy->mCreatureID = i;
			enemy->mMgr        = this;
			enemy->mModel      = model;
		}

		mCollPartFactory = CollPartFactory::load(gParmArc, "JigumoHouse/enemyColl.txt");
		P2ASSERTLINE(220, mCollPartFactory);

		for (int i = 0; i < getMaxObjects(); i++) {
			Obj* enemy = static_cast<Obj*>(getEnemy(i));
			P2ASSERTLINE(224, enemy);
			enemy->mCollTree = new CollTree();
			enemy->mCollTree->createFromFactory(model, mCollPartFactory, nullptr);
			enemy->mCollTree->attachModel(model);
		}
	}
}

} // namespace Nest
} // namespace Game
