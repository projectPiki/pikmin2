#include "Game/Entities/Nest.h"
#include "JSystem/J3D/J3DTransform.h"
#include "LoadResource.h"

namespace Game {
namespace Nest {

static const char enemyNestMgrName[] = "enemyNestMgr";

GXColorS10 mMatColor;

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
	int i    = 0;
	Mtx mtx1 = { { 1.0f, 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.0f, 0.0f } };
	Mtx mtx2;
	GXColorS10 color;
	color.a = 0xFF;
	color.b = 0xFF;
	color.g = 0xFF;
	color.r = 0xFF;

	for (i; i < getMaxObjects(); i++) {
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
			J3DJoint* joint         = modelData->m_jointTree.m_joints[0];
			P2ASSERTLINE(134, joint);

			J3DMaterial* material = joint->m_material;
			P2ASSERTLINE(137, material);

			j3dSys._10C             = (u32)modelData->m_vertexData._18;
			j3dSys._110             = (u32)modelData->m_vertexData._1C;
			j3dSys._114             = (u32)modelData->m_vertexData._24;
			J3DShape::sOldVcdVatCmd = nullptr;
			material->loadSharedDL();
			material->m_shape->loadPreDrawSetting();
			material->calc(mtx1);

			u32 testAlpha = (nest->_2EE - 10);
			color.a       = nest->_2EE;
			color.a       = testAlpha;
			if ((s16)testAlpha < -0xFF) {
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
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stmw     r24, 0x80(r1)
	lis      r5, lbl_80491DD8@ha
	li       r0, 0xff
	addi     r30, r5, lbl_80491DD8@l
	lis      r5, j3dSys@ha
	lwz      r29, 0x338(r30)
	mr       r25, r3
	lwz      r27, 0x33c(r30)
	mr       r26, r4
	lwz      r12, 0x340(r30)
	addi     r31, r5, j3dSys@l
	lwz      r11, 0x344(r30)
	li       r28, 0
	lwz      r10, 0x348(r30)
	lwz      r9, 0x34c(r30)
	lwz      r8, 0x350(r30)
	lwz      r7, 0x354(r30)
	lwz      r6, 0x358(r30)
	lwz      r5, 0x35c(r30)
	lwz      r4, 0x360(r30)
	lwz      r3, 0x364(r30)
	stw      r29, 0x48(r1)
	stw      r27, 0x4c(r1)
	stw      r12, 0x50(r1)
	stw      r11, 0x54(r1)
	stw      r10, 0x58(r1)
	stw      r9, 0x5c(r1)
	stw      r8, 0x60(r1)
	stw      r7, 0x64(r1)
	stw      r6, 0x68(r1)
	stw      r5, 0x6c(r1)
	stw      r4, 0x70(r1)
	stw      r3, 0x74(r1)
	sth      r0, 0x16(r1)
	sth      r0, 0x14(r1)
	sth      r0, 0x12(r1)
	sth      r0, 0x10(r1)
	b        lbl_8036C680

lbl_8036C444:
	mr       r3, r25
	mr       r4, r28
	lwz      r12, 0(r25)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r27, r3, r3
	bne      lbl_8036C478
	addi     r3, r30, 0x318
	addi     r5, r30, 0x32c
	li       r4, 0x6f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036C478:
	mr       r3, r27
	lfs      f31, 0x1f8(r27)
	lwz      r12, 0(r27)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036C67C
	mr       r3, r27
	bl       isCullingOff__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036C67C
	lfs      f0, 0x198(r27)
	mr       r3, r26
	lfs      f1, 0x19c(r27)
	li       r4, 1
	lfs      f2, 0x1a0(r27)
	stfs     f31, 0x48(r1)
	stfs     f31, 0x5c(r1)
	stfs     f31, 0x70(r1)
	stfs     f0, 0x54(r1)
	stfs     f1, 0x64(r1)
	stfs     f2, 0x74(r1)
	bl       getMatrix__8ViewportFb
	addi     r4, r1, 0x48
	addi     r5, r1, 0x18
	bl       PSMTXConcat
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadNrmMtxImm
	lbz      r0, 0x2ec(r27)
	cmplwi   r0, 0
	beq      lbl_8036C510
	lwz      r24, 0x1c(r25)
	b        lbl_8036C514

lbl_8036C510:
	lwz      r24, 0x44(r25)

lbl_8036C514:
	lwz      r3, 0x28(r24)
	lwz      r29, 0(r3)
	cmplwi   r29, 0
	bne      lbl_8036C538
	addi     r3, r30, 0x318
	addi     r5, r30, 0x32c
	li       r4, 0x86
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036C538:
	lwz      r29, 0x58(r29)
	cmplwi   r29, 0
	bne      lbl_8036C558
	addi     r3, r30, 0x318
	addi     r5, r30, 0x32c
	li       r4, 0x89
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036C558:
	lwz      r4, 0xa0(r24)
	li       r0, 0
	mr       r3, r29
	stw      r4, 0x10c(r31)
	lwz      r4, 0xa4(r24)
	stw      r4, 0x110(r31)
	lwz      r4, 0xac(r24)
	stw      r4, 0x114(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r29)
	bl       loadPreDrawSetting__8J3DShapeCFv
	mr       r3, r29
	addi     r4, r1, 0x48
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lha      r4, 0x2ee(r27)
	addi     r3, r4, -10
	sth      r4, 0x16(r1)
	extsh    r0, r3
	cmpwi    r0, -255
	sth      r3, 0x16(r1)
	bge      lbl_8036C60C
	li       r0, -255
	mr       r3, r27
	sth      r0, 0x16(r1)
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	mr       r3, r27
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_8036C60C:
	lwz      r3, 0x2f0(r27)
	lha      r4, 0x16(r1)
	cmpwi    r3, 0
	ble      lbl_8036C64C
	addi     r0, r3, 1
	stw      r0, 0x2f0(r27)
	lwz      r0, 0x2f0(r27)
	cmpwi    r0, 0x50
	ble      lbl_8036C64C
	sth      r4, 0x2ee(r27)
	mr       r3, r27
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_8036C64C:
	lwz      r5, 0x10(r1)
	addi     r4, r1, 8
	lwz      r0, 0x14(r1)
	li       r3, 1
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetTevColorS10
	lwz      r3, 8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8036C67C:
	addi     r28, r28, 1

lbl_8036C680:
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	cmpw     r28, r3
	blt      lbl_8036C444
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	lmw      r24, 0x80(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
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
