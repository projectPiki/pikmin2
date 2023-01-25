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
Mgr::Mgr(int p1, u8 p2)
    : EnemyMgrBase(p1, p2)
{
	m_houseModelData = nullptr;
	m_name           = "巣マネージャ"; // 'nest manager'
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
		m_modelData = J3DModelLoaderDataBase::load(enemyBMD, 0x20240010);
		m_modelData->newSharedDisplayList(0x40000);
		m_modelData->simpleCalcMaterial(0, j3dDefaultMtx);
		m_modelData->makeSharedDL();
	}

	LoadResource::ArgAramOnly loadArg("/enemy/data/JigumoHouse/model.szs");
	LoadResource::Node* loadNode = gLoadResourceMgr->mountArchive(loadArg);

	P2ASSERTLINE(73, loadNode);
	JKRArchive* nodeArchive = loadNode->m_archive;
	P2ASSERTLINE(75, nodeArchive);

	enemyBMD = JKRFileLoader::getGlbResource("enemy.bmd", nodeArchive);
	if (enemyBMD) {
		m_houseModelData = J3DModelLoaderDataBase::load(enemyBMD, 0x20240010);
		m_houseModelData->newSharedDisplayList(0x40000);
		m_houseModelData->simpleCalcMaterial(0, j3dDefaultMtx);
		m_houseModelData->makeSharedDL();
	}

	return m_modelData;
}

/*
 * --INFO--
 * Address:	8036C398
 * Size:	000320
 */
// regswaps
void Mgr::doSimpleDraw(Viewport* viewport)
{
	Mtx mtx1 = { { 1.0f, 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.0f, 0.0f } };
	Mtx mtx2;
	GXColorS10 color;
	color.a = 0xFF;
	color.b = 0xFF;
	color.g = 0xFF;
	color.r = 0xFF;

	for (int i = 0; i < getMaxObjects(); i++) {
		Obj* nest = static_cast<Obj*>(getEnemy(i));

		P2ASSERTLINE(111, nest);

		f32 scaleMod = nest->m_scaleModifier;
		if (nest->isAlive() && nest->isCullingOff()) {
			Vector3f homePos = nest->m_homePosition;
			mtx1[0][0]       = scaleMod;
			mtx1[1][1]       = scaleMod;
			mtx1[2][2]       = scaleMod;
			mtx1[0][3]       = homePos.x;
			mtx1[1][3]       = homePos.y;
			mtx1[2][3]       = homePos.z;

			PSMTXConcat(viewport->getMatrix(true)->m_matrix.mtxView, mtx1, mtx2);
			GXLoadPosMtxImm(mtx2, 0);
			GXLoadNrmMtxImm(mtx2, 0);

			J3DModelData* modelData = (nest->m_houseType) ? m_modelData : m_houseModelData;
			J3DJoint* joint         = modelData->getJointNodePointer(0);
			P2ASSERTLINE(134, joint);

			J3DMaterial* material = joint->getMesh();
			P2ASSERTLINE(137, material);

			J3DVertexData* vtxData = modelData->getVertexData();
			j3dSys.setVtxPos(vtxData->getVtXPosArray());
			j3dSys.setVtxNrm(vtxData->getVtxNrmArray());
			j3dSys.setVtxCol(vtxData->getVtxColorArray(0));
			J3DShape::sOldVcdVatCmd = nullptr;
			material->loadSharedDL();
			material->m_shape->loadPreDrawSetting();
			material->calc(mtx1);

			color.a = nest->_2EE;
			color.a -= 10;
			if (color.a < -0xFF) {
				color.a = -0xFF;
				nest->kill(nullptr);
				nest->setAlive(false);
				nest->setAtari(false);
			}

			s16 alpha = color.a;
			if (nest->_2F0 > 0) {
				nest->_2F0++;
				if (nest->_2F0 > 80) {
					nest->_2EE = alpha;
					nest->setAtari(false);
				}
			}
			GXSetTevColorS10(GX_TEVREG0, color);

			material->m_shape->simpleDrawCache();
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
		char* collisionFolder = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF)->m_collName;
		if (*collisionFolder == '\0') {
			collisionFolder = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
		}

		sprintf(path, "%s/enemyColl.txt", collisionFolder);
		SysShape::Model* model = createModel();

		for (int i = 0; i < getMaxObjects(); i++) {
			Obj* enemy = static_cast<Obj*>(getEnemy(i));
			P2ASSERTLINE(201, enemy);
			enemy->m_creatureID = i;
			enemy->m_mgr        = this;
			enemy->m_model      = model;
		}

		m_collPartFactory = CollPartFactory::load(gParmArc, "JigumoHouse/enemyColl.txt");
		P2ASSERTLINE(220, m_collPartFactory);

		for (int i = 0; i < getMaxObjects(); i++) {
			Obj* enemy = static_cast<Obj*>(getEnemy(i));
			P2ASSERTLINE(224, enemy);
			enemy->m_collTree = new CollTree();
			enemy->m_collTree->createFromFactory(model, m_collPartFactory, nullptr);
			enemy->m_collTree->attachModel(model);
		}
	}
}

} // namespace Nest
} // namespace Game
