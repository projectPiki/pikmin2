#include "types.h"

/*
    TODO: fix with KabutoMgr (every function is matching)

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C160
    lbl_8047C160:
        .4byte 0x83528360
        .4byte 0x83838362
        .4byte 0x8373815B
        .4byte 0x8378815B
        .4byte 0x8358837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
    .global lbl_8047C180
    lbl_8047C180:
        .4byte 1
        .4byte 44
        .4byte 45
    .global lbl_8047C18C
    lbl_8047C18C:
        .4byte 1
        .4byte 44
        .4byte 45
    .global lbl_8047C198
    lbl_8047C198:
        .4byte 0x6C616D62
        .4byte 0x65727434
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game12KochappyBase3Mgr
    __vt__Q34Game12KochappyBase3Mgr:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q24Game12EnemyMgrBaseFv
        .4byte doEntry__Q24Game12EnemyMgrBaseFv
        .4byte doSetView__Q24Game12EnemyMgrBaseFi
        .4byte doViewCalc__Q24Game12EnemyMgrBaseFv
        .4byte doSimulation__Q24Game12EnemyMgrBaseFf
        .4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q34Game12KochappyBase3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game12KochappyBase3MgrFv
        .4byte getObject__Q24Game12EnemyMgrBaseFPv
        .4byte getNext__Q24Game12EnemyMgrBaseFPv
        .4byte getStart__Q24Game12EnemyMgrBaseFv
        .4byte getEnd__Q24Game12EnemyMgrBaseFv
        .4byte alloc__Q24Game12EnemyMgrBaseFv
        .4byte birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
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
        .4byte 0
        .4byte 0
        .4byte doAlloc__Q24Game12EnemyMgrBaseFv
        .4byte getEnemyTypeID__Q34Game12KochappyBase3MgrFv
        .4byte createModel__Q34Game12KochappyBase3MgrFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q34Game12KochappyBase3MgrFv
        .4byte loadAnimData__Q34Game12KochappyBase3MgrFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
        .4byte 0
        .4byte 0
*/

#include "Game/Entities/KochappyBase.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/JUT/JUTNameTab.h"

namespace Game {
namespace KochappyBase {

/*
 * --INFO--
 * Address:	8012D80C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "コチャッピーベースマネージャ";
}

/*
 * --INFO--
 * Address:	8012D85C
 * Size:	0000C0
 */
void Mgr::loadModelData()
{
	int ids[3] = { EnemyTypeID::EnemyID_Kochappy, EnemyTypeID::EnemyID_BlueKochappy, EnemyTypeID::EnemyID_YellowKochappy };

	for (int i = 0; i < 3; i++) {
		EnemyMgrBase* mgr = generalEnemyMgr->getEnemyMgr(ids[i]);
		if (mgr) {
			J3DModelData* storedModelData = mgr->getJ3DModelData();

			if (storedModelData) {
				m_modelData = storedModelData;
				return;
			}
		}
	}

	EnemyMgrBase::loadModelData();

	m_modelData->newSharedDisplayList(0x40000);
	m_modelData->makeSharedDL();
}

/*
 * --INFO--
 * Address:	8012D91C
 * Size:	0000A0
 */
void Mgr::loadAnimData()
{
	int ids[3] = { EnemyTypeID::EnemyID_Kochappy, EnemyTypeID::EnemyID_BlueKochappy, EnemyTypeID::EnemyID_YellowKochappy };

	for (int i = 0; i < 3; i++) {
		EnemyMgrBase* mgr = generalEnemyMgr->getEnemyMgr(ids[i]);
		if (mgr) {
			SysShape::AnimMgr* storedAnimMgr = mgr->m_animMgr;
			if (storedAnimMgr) {
				m_animMgr = storedAnimMgr;
				return;
			}
		}
	}

	EnemyMgrBase::loadAnimData();
}

/*
 * --INFO--
 * Address:	8012D9BC
 * Size:	00011C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x80000, m_modelType);

	for (u16 i = 0; i < m_modelData->getMaterialCount1(); i++) {
		const char* name = m_modelData->m_materialTable._0C->getName(i);
		if (!strcmp(name, "lambert4")) {
			model->m_j3dModel->m_matPackets[i]._2C->newDifferedDisplayList(0x04020000);
		}
	}

	model->updateModel();
	return model;
}
} // namespace KochappyBase
} // namespace Game