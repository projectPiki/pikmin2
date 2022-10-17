#include "CollInfo.h"
#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "Dolphin/os.h"
#include "Dolphin/stl.h"
#include "Game/EnemyParmsBase.h"
#include "Game/enemyInfo.h"
#include "Game/Nest.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DJointBlock.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTransform.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JUT/JUTException.h"
#include "LoadResource.h"
#include "Matrixf.h"
#include "types.h"
#include "Viewport.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_enemyNestMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80491DD8
    lbl_80491DD8:
        .4byte 0x656E656D
        .4byte 0x794E6573
        .4byte 0x744D6772
        .4byte 0x00000000
    .global lbl_80491DE8
    lbl_80491DE8:
        .4byte 0x9183837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x3A3A5072
        .4byte 0x6F706572
        .4byte 0x74790000
        .4byte 0x66726963
        .4byte 0x74696F6E
        .4byte 0x286E6F74
        .4byte 0x20757365
        .4byte 0x64290000
        .4byte 0x77616C6C
        .4byte 0x5265666C
        .4byte 0x65637469
        .4byte 0x6F6E0000
        .4byte 0x66616365
        .4byte 0x44697241
        .4byte 0x646A7573
        .4byte 0x74000000
        .4byte 0x626F756E
        .4byte 0x63654661
        .4byte 0x63746F72
        .4byte 0x00000000
        .4byte 0x456E656D
        .4byte 0x79506172
        .4byte 0x6D734261
        .4byte 0x73650000
        .4byte 0x83898343
        .4byte 0x837482CC
        .4byte 0x8D8282B3
        .4byte 0x00000000
        .4byte 0x83898343
        .4byte 0x837489F1
        .4byte 0x959C97A6
        .4byte 0x00000000
        .4byte 0x8C7889FA
        .4byte 0x83898343
        .4byte 0x83740000
        .4byte 0x837D8362
        .4byte 0x837682C6
        .4byte 0x82CC9396
        .4byte 0x82E80000
        .4byte 0x837D8362
        .4byte 0x837682C6
        .4byte 0x82CC82A0
        .4byte 0x82BD82E8
        .4byte 0x837C838A
        .4byte 0x83538393
        .4byte 0x82CC9149
        .4byte 0x92E80000
        .4byte 0x8373834E
        .4byte 0x837E8393
        .4byte 0x82C682CC
        .4byte 0x82A082BD
        .4byte 0x82E80000
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x585A0000
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x59000000
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x8374838C
        .4byte 0x815B8380
        .4byte 0x00000000
        .4byte 0x89F1935D
        .4byte 0x91AC9378
        .4byte 0x97A60000
        .4byte 0x89F1935D
        .4byte 0x8DC591E5
        .4byte 0x91AC9378
        .4byte 0x00000000
        .4byte 0x8365838A
        .4byte 0x8367838A
        .4byte 0x815B0000
        .4byte 0x837A815B
        .4byte 0x838094CD
        .4byte 0x88CD0000
        .4byte 0x83768389
        .4byte 0x83438378
        .4byte 0x815B8367
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x8E8B8A45
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x8E8B8A45
        .4byte 0x8A709378
        .4byte 0x00000000
        .4byte 0x92548DF5
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x92548DF5
        .4byte 0x8A709378
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x97CD0000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x94CD88CD
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x97A60000
        .4byte 0x8D558C82
        .4byte 0x89C2945C
        .4byte 0x94CD88CD
        .4byte 0x00000000
        .4byte 0x8D558C82
        .4byte 0x89C2945C
        .4byte 0x8A709378
        .4byte 0x00000000
        .4byte 0x8D558C82
        .4byte 0x83718362
        .4byte 0x836794CD
        .4byte 0x88CD0000
        .4byte 0x8D558C82
        .4byte 0x83718362
        .4byte 0x83678A70
        .4byte 0x93780000
        .4byte 0x8C7889FA
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x90CE89BB
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x83718362
        .4byte 0x83768368
        .4byte 0x838D8362
        .4byte 0x8376835F
        .4byte 0x8381815B
        .4byte 0x83570000
        .4byte 0x926E906B
        .4byte 0x8B4390E2
        .4byte 0x8A6D97A7
        .4byte 0x00000000
        .4byte 0x926E906B
        .4byte 0x8B4390E2
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82600000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x92A39574
        .4byte 0x82500000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82610000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x92A39574
        .4byte 0x82510000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82620000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x92A39574
        .4byte 0x82520000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82630000
        .4byte 0x656E656D
        .4byte 0x792E626D
        .4byte 0x64000000
        .4byte 0x2F656E65
        .4byte 0x6D792F64
        .4byte 0x6174612F
        .4byte 0x4A696775
        .4byte 0x6D6F486F
        .4byte 0x7573652F
        .4byte 0x6D6F6465
        .4byte 0x6C2E737A
        .4byte 0x73000000
        .4byte 0x656E656D
        .4byte 0x794E6573
        .4byte 0x744D6772
        .4byte 0x2E637070
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte 0x25732F65
        .4byte 0x6E656D79
        .4byte 0x436F6C6C
        .4byte 0x2E747874
        .4byte 0x00000000
        .4byte 0x4A696775
        .4byte 0x6D6F486F
        .4byte 0x7573652F
        .4byte 0x656E656D
        .4byte 0x79436F6C
        .4byte 0x6C2E7478
        .4byte 0x74000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Nest3Mgr
    __vt__Q34Game4Nest3Mgr:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q24Game12EnemyMgrBaseFv
        .4byte doEntry__Q24Game12EnemyMgrBaseFv
        .4byte doSetView__Q24Game12EnemyMgrBaseFi
        .4byte doViewCalc__Q24Game12EnemyMgrBaseFv
        .4byte doSimulation__Q24Game12EnemyMgrBaseFf
        .4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
        .4byte doSimpleDraw__Q34Game4Nest3MgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q34Game4Nest3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game4Nest3MgrFv
        .4byte getObject__Q24Game12EnemyMgrBaseFPv
        .4byte getNext__Q24Game12EnemyMgrBaseFPv
        .4byte getStart__Q24Game12EnemyMgrBaseFv
        .4byte getEnd__Q24Game12EnemyMgrBaseFv
        .4byte alloc__Q24Game12EnemyMgrBaseFv
        .4byte birth__Q34Game4Nest3MgrFRQ24Game13EnemyBirthArg
        .4byte getJ3DModelData__Q24Game12EnemyMgrBaseCFv
        .4byte getGenerator__Q24Game12EnemyMgrBaseCFv
        .4byte killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg
        .4byte setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv
        .4byte setDebugParm__Q24Game12EnemyMgrBaseFUl
        .4byte resetDebugParm__Q24Game12EnemyMgrBaseFUl
        .4byte getMaxObjects__Q24Game12EnemyMgrBaseCFv
        .4byte startMovie__Q24Game12EnemyMgrBaseFv
        .4byte endMovie__Q24Game12EnemyMgrBaseFv
        .4byte get__Q24Game12EnemyMgrBaseFPv
        .4byte isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
        .4byte createObj__Q34Game4Nest3MgrFi
        .4byte getEnemy__Q34Game4Nest3MgrFi
        .4byte doAlloc__Q34Game4Nest3MgrFv
        .4byte getEnemyTypeID__Q34Game4Nest3MgrFv
        .4byte createModel__Q24Game12EnemyMgrBaseFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q34Game4Nest3MgrFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q34Game4Nest3MgrFP10JKRArchive
        .4byte loadModelData__Q24Game12EnemyMgrBaseFv
        .4byte loadAnimData__Q34Game4Nest3MgrFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global mMatColor__Q24Game4Nest
    mMatColor__Q24Game4Nest:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("enemyNestMgr"); }

namespace Game {
namespace Nest {

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
	m_modelData2 = nullptr;
	m_name       = "巣マネージャ";
	mMatColor.a  = 0xFF;
	mMatColor.b  = 0xFF;
	mMatColor.g  = 0xFF;
	mMatColor.r  = 0xFF;
}

/*
 * --INFO--
 * Address:	8036C204
 * Size:	000048
 */
void Mgr::doAlloc(void)
{
	EnemyParmsBase* parms = new EnemyParmsBase();
	init(parms);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x7f8
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8036C230
	bl       __ct__Q24Game14EnemyParmsBaseFv
	mr       r4, r3

lbl_8036C230:
	mr       r3, r31
	bl       init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036C24C
 * Size:	000020
 */
Obj* Mgr::birth(Game::EnemyBirthArg& arg) { return static_cast<Obj*>(EnemyMgrBase::birth(arg)); }

/*
 * --INFO--
 * Address:	8036C26C
 * Size:	00012C
 */
void Mgr::loadModelData(JKRArchive* archive)
{
	void* enemyBMD = JKRFileLoader::getGlbResource("enemy.bmd", archive);
	if (enemyBMD) {
		m_modelData = J3DModelLoaderDataBase::load(enemyBMD, 0x20240010);
		m_modelData->newSharedDisplayList(0x40000);
		m_modelData->simpleCalcMaterial(0, &j3dDefaultMtx);
		m_modelData->makeSharedDL();
	}
	LoadResource::ArgAramOnly loadArg("/enemy/data/JigumoHouse/model.szs");
	LoadResource::Node* loadNode = gLoadResourceMgr->mountArchive(loadArg);
	P2ASSERTLINE(73, loadNode != nullptr);
	P2ASSERTLINE(75, loadNode->m_archive != nullptr);
	enemyBMD = JKRFileLoader::getGlbResource("enemy.bmd", loadNode->m_archive);
	if (enemyBMD) {
		m_modelData2 = J3DModelLoaderDataBase::load(enemyBMD, 0x20240010);
		m_modelData2->newSharedDisplayList(0x40000);
		m_modelData2->simpleCalcMaterial(0, &j3dDefaultMtx);
		m_modelData2->makeSharedDL();
	}

	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r5, lbl_80491DD8@ha
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	addi     r30, r5, lbl_80491DD8@l
	stw      r29, 0x44(r1)
	mr       r29, r3
	addi     r3, r30, 0x2e8
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	cmplwi   r3, 0
	beq      lbl_8036C2D8
	lis      r4, 0x20240010@ha
	addi     r4, r4, 0x20240010@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x1c(r29)
	lis      r4, 4
	lwz      r3, 0x1c(r29)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lis      r4, j3dDefaultMtx@ha
	lwz      r3, 0x1c(r29)
	addi     r5, r4, j3dDefaultMtx@l
	li       r4, 0
	bl       simpleCalcMaterial__12J3DModelDataFUsPA4_f
	lwz      r3, 0x1c(r29)
	bl       makeSharedDL__12J3DModelDataFv

lbl_8036C2D8:
	addi     r3, r1, 8
	addi     r4, r30, 0x2f4
	bl       __ct__Q212LoadResource11ArgAramOnlyFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	or.      r31, r3, r3
	bne      lbl_8036C30C
	addi     r3, r30, 0x318
	addi     r5, r30, 0x32c
	li       r4, 0x49
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036C30C:
	lwz      r31, 0x34(r31)
	cmplwi   r31, 0
	bne      lbl_8036C32C
	addi     r3, r30, 0x318
	addi     r5, r30, 0x32c
	li       r4, 0x4b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036C32C:
	mr       r4, r31
	addi     r3, r30, 0x2e8
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	cmplwi   r3, 0
	beq      lbl_8036C378
	lis      r4, 0x20240010@ha
	addi     r4, r4, 0x20240010@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x44(r29)
	lis      r4, 4
	lwz      r3, 0x44(r29)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lis      r4, j3dDefaultMtx@ha
	lwz      r3, 0x44(r29)
	addi     r5, r4, j3dDefaultMtx@l
	li       r4, 0
	bl       simpleCalcMaterial__12J3DModelDataFUsPA4_f
	lwz      r3, 0x44(r29)
	bl       makeSharedDL__12J3DModelDataFv

lbl_8036C378:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r3, 0x1c(r29)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036C398
 * Size:	000320
 */
void Mgr::doSimpleDraw(Viewport* viewport)
{
	// // clang-format off
	// Matrixf matrix(1.0f, 0.0f, 0.0f, 0.0f,
	//                0.0f, 1.0f, 0.0f, 0.0f,
	//                0.0f, 0.0f, 1.0f, 0.0f);
	// // clang-format on
	// matrix.m_matrix.mtxView = {{1.0f, 0.0f, 0.0f, 0.0f},
	//                       {0.0f, 1.0f, 0.0f, 0.0f},
	//                       {0.0f, 0.0f, 1.0f, 0.0f}};
	// matrix.m_matrix.mtxView = {{1.0f, 0.0f, 0.0f}, {0.0f,
	//                       0.0f, 1.0f}, {0.0f, 0.0f,
	//                       0.0f}, {0.0f, 1.0f, 0.0f}};
	const Mtx mtx1 = { { 1.0f, 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.0f, 0.0f } };
	Mtx mtx2;

	Matrixf matrix(mtx1);

	for (int i = 0; i < getMaxObjects(); i++) {
		Obj* enemy = getEnemy(i);
		P2ASSERTLINE(111, enemy != nullptr);
		if (enemy->isAlive() && enemy->isCullingOff()) {
			matrix.m_matrix.structView.tx = enemy->m_homePosition.x;
			matrix.m_matrix.structView.ty = enemy->m_homePosition.y;
			matrix.m_matrix.structView.tz = enemy->m_homePosition.z;
			matrix.m_matrix.structView.xx = enemy->m_scaleModifier;
			matrix.m_matrix.structView.yy = enemy->m_scaleModifier;
			matrix.m_matrix.structView.zz = enemy->m_scaleModifier;
		}
		PSMTXConcat(viewport->getMatrix(true)->m_matrix.mtxView, mtx1, mtx2);
		GXLoadPosMtxImm(mtx2, 0);
		GXLoadNrmMtxImm(mtx2, 0);
		J3DModelData* modelData;
		if (enemy->m_houseType == '\0') {
			modelData = m_modelData2;
		} else {
			modelData = m_modelData;
		}
		P2ASSERTLINE(134, modelData->m_jointTree.m_joints[0] != nullptr);
		J3DMaterial* material = modelData->m_jointTree.m_joints[0]->m_material;
		P2ASSERTLINE(137, material != nullptr);
		// TODO: IDK what's up with J3DVertexData TBH. *shrug*
		j3dSys._10C             = modelData->m_vertexData._18;
		j3dSys._10C             = modelData->m_vertexData._1C;
		j3dSys._114             = modelData->m_vertexData._24;
		J3DShape::sOldVcdVatCmd = nullptr;
		material->loadSharedDL();
		material->m_shape->loadPreDrawSetting();
		material->calc(mtx1);
		// TODO: Strange color calculations
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
 * Address:	8036C6B8
 * Size:	000010
 */
Obj* Mgr::getEnemy(int index)
{
	return &m_objects[index];
	/*
	mulli    r0, r4, 0x304
	lwz      r3, 0x48(r3)
	add      r3, r3, r0
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
			Obj* enemy = getEnemy(i);
			P2ASSERTLINE(201, enemy != nullptr);
			enemy->m_enemyIndexForType = i;
			enemy->m_mgr               = this;
			enemy->m_model             = model;
		}
		m_collPartFactory = CollPartFactory::load(gParmArc, "JigumoHouse/enemyColl.txt");
		P2ASSERTLINE(220, m_collPartFactory != nullptr);
		for (int i = 0; i < getMaxObjects(); i++) {
			Obj* enemy = getEnemy(i);
			P2ASSERTLINE(224, enemy != nullptr);
			enemy->m_collTree = new CollTree();
			enemy->m_collTree->createFromFactory(model, m_collPartFactory, nullptr);
			enemy->m_collTree->attachModel(model);
		}
	}
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	lis      r4, lbl_80491DD8@ha
	stw      r0, 0x124(r1)
	stmw     r27, 0x10c(r1)
	mr       r31, r3
	addi     r29, r4, lbl_80491DD8@l
	bl       isValidEnemyTypeID__Q24Game12EnemyMgrBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036C89C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r3, 0x20(r3)
	lbz      r0, 0(r3)
	extsb.   r0, r0
	bne      lbl_8036C740
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii

lbl_8036C740:
	mr       r5, r3
	addi     r3, r1, 8
	addi     r4, r29, 0x368
	crclr    6
	bl       sprintf
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	li       r27, 0
	mr       r28, r3
	b        lbl_8036C7B8

lbl_8036C774:
	mr       r3, r31
	mr       r4, r27
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	bne      lbl_8036C7A8
	addi     r3, r29, 0x318
	addi     r5, r29, 0x32c
	li       r4, 0xc9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036C7A8:
	stb      r27, 0x1f1(r30)
	addi     r27, r27, 1
	stw      r31, 0x180(r30)
	stw      r28, 0x174(r30)

lbl_8036C7B8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	cmpw     r27, r3
	blt      lbl_8036C774
	lwz      r3, gParmArc__4Game@sda21(r13)
	addi     r4, r29, 0x37c
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	stw      r3, 0x28(r31)
	lwz      r0, 0x28(r31)
	cmplwi   r0, 0
	bne      lbl_8036C804
	addi     r3, r29, 0x318
	addi     r5, r29, 0x32c
	li       r4, 0xdc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036C804:
	li       r27, 0
	b        lbl_8036C880

lbl_8036C80C:
	mr       r3, r31
	mr       r4, r27
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	bne      lbl_8036C840
	addi     r3, r29, 0x318
	addi     r5, r29, 0x32c
	li       r4, 0xe0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8036C840:
	li       r3, 8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8036C858
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_8036C858:
	stw      r0, 0x114(r30)
	mr       r4, r28
	li       r6, 0
	lwz      r3, 0x114(r30)
	lwz      r5, 0x28(r31)
	bl
createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
	lwz      r3, 0x114(r30)
	mr       r4, r28
	bl       attachModel__8CollTreeFPQ28SysShape9MtxObject
	addi     r27, r27, 1

lbl_8036C880:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	cmpw     r27, r3
	blt      lbl_8036C80C

lbl_8036C89C:
	lmw      r27, 0x10c(r1)
	lwz      r0, 0x124(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036C8B0
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Mgr::getEnemyTypeID(void) { return EnemyTypeID::EnemyID_PanHouse; }

// /*
//  * --INFO--
//  * Address:	8036C8B8
//  * Size:	0000B0
//  */
// Mgr::~Mgr(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8036C94C
// 	lis      r3, __vt__Q34Game4Nest3Mgr@ha
// 	addi     r3, r3, __vt__Q34Game4Nest3Mgr@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x38
// 	stw      r0, 4(r30)
// 	beq      lbl_8036C93C
// 	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
// 	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x38
// 	stw      r0, 4(r30)
// 	beq      lbl_8036C93C
// 	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
// 	addic.   r0, r30, 4
// 	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x38
// 	stw      r0, 4(r30)
// 	beq      lbl_8036C93C
// 	lis      r4, __vt__16GenericContainer@ha
// 	addi     r3, r30, 4
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	li       r4, 0
// 	stw      r0, 4(r30)
// 	bl       __dt__5CNodeFv

// lbl_8036C93C:
// 	extsh.   r0, r31
// 	ble      lbl_8036C94C
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8036C94C:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8036C968
 * Size:	000004
 */
void Mgr::loadAnimData(void) { }

/*
 * --INFO--
 * Address:	8036C96C
 * Size:	000060
 */
void Mgr::createObj(int count)
{
	m_objects = new Obj[count];
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x304
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game4Nest3ObjFv@ha
	lis      r5, __dt__Q34Game4Nest3ObjFv@ha
	addi     r4, r4, __ct__Q34Game4Nest3ObjFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game4Nest3ObjFv@l
	li       r6, 0x304
	bl       __construct_new_array
	stw      r3, 0x48(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036C9CC
 * Size:	0000BC
 */
Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_8036CA6C
	lis      r3, __vt__Q34Game4Nest3Obj@ha
	addi     r0, r31, 0x2f4
	addi     r4, r3, __vt__Q34Game4Nest3Obj@l
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x2f8
	stw      r3, 0x178(r31)
	lwz      r3, 0x17c(r31)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r31)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_8036CA5C
	lis      r3, __vt__Q24Game9EnemyBase@ha
	addi     r0, r31, 0x2bc
	addi     r4, r3, __vt__Q24Game9EnemyBase@l
	addi     r3, r31, 0x290
	stw      r4, 0(r31)
	addi     r5, r4, 0x1b0
	addi     r6, r4, 0x2f8
	li       r4, -1
	stw      r5, 0x178(r31)
	lwz      r5, 0x17c(r31)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r31)
	subf     r0, r5, r0
	stw      r0, 0xc(r5)
	bl       __dt__5CNodeFv

lbl_8036CA5C:
	extsh.   r0, r30
	ble      lbl_8036CA6C
	mr       r3, r31
	bl       __dl__FPv

lbl_8036CA6C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Nest
} // namespace Game

/*
 * --INFO--
 * Address:	8036CA88
 * Size:	000004
 */
// void __sinit_enemyNestMgr_cpp(void) { }

// /*
//  * --INFO--
//  * Address:	8036CA8C
//  * Size:	000008
//  */
// @4 @Game::Mgr::~Mgr(void)
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        __dt__Q34Game4Nest3MgrFv
// 	*/
// }
