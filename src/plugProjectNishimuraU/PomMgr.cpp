#include "Game/Entities/Pom.h"
#include "Game/generalEnemyMgr.h"
#include "Game/GameSystem.h"
#include "Game/gamePlayData.h"
#include "Game/GameStats.h"
#include "Game/Piki.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "nans.h"

namespace Game {
namespace Pom {

static const int somePomArray[] = { 0, 0, 0 };
static const char pomMgrName[]  = "246-PomMgr";

/*
 * --INFO--
 * Address:	80253E8C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ポンガシ草マネージャ"; // pongashi plant manager
}

/*
 * --INFO--
 * Address:	80253EDC
 * Size:	0001F4
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg)
{
	if (gameSystem && gameSystem->m_inCave && gameSystem->m_mode == GSM_STORY_MODE) {
		GameSystem* gs = gameSystem;

		if (birthArg.m_typeID == EnemyTypeID::EnemyID_BlackPom) { // PURPLE CANDYPOP
			BaseGameSection* section = gs->m_section;
			if (section && (section->getCurrFloor() < 2 || section->getCaveID() == 't_01')) { // emergence cave
				int colorSum      = playData->m_caveSaveData._14.getColorSum(Purple);
				int purplePikmins = GameStat::getAllPikmins(Purple);
				if (!(purplePikmins + colorSum < 20)) {
					return nullptr;
				}
			}

		} else if (birthArg.m_typeID == EnemyTypeID::EnemyID_WhitePom) { // WHITE CANDYPOP
			BaseGameSection* section = gs->m_section;
			if (section) {
				if (playData->hasMetPikmin(4)) {
					if (section->getCurrFloor() < 2 || section->getCaveID() == 'f_02') { // white flower garden
						int colorSum     = playData->m_caveSaveData._14.getColorSum(White);
						int whitePikmins = GameStat::getAllPikmins(White);
						if (!(whitePikmins + colorSum < 20)) {
							return nullptr;
						}
					}
				} else if (section->getCaveID() != 'f_02') {
					return nullptr;
				}
			}

		} else if (birthArg.m_typeID == EnemyTypeID::EnemyID_BluePom) { // BLUE CANDYPOP
			if (!playData->hasMetPikmin(Blue)) {
				return nullptr;
			}

		} else if (birthArg.m_typeID == EnemyTypeID::EnemyID_YellowPom) { // YELLOW CANDYPOP
			if (!playData->hasMetPikmin(Yellow)) {
				return nullptr;
			}
		}
	}

	return EnemyMgrBase::birth(birthArg);
}

/*
 * --INFO--
 * Address:	802540D0
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	802542E0
 * Size:	000188
 */
void Mgr::createObj(int count)
{
	m_obj = new Obj[count];

	EnemyTypeID::EEnemyTypeID ids[] = { EnemyTypeID::EnemyID_BluePom,  EnemyTypeID::EnemyID_RedPom,   EnemyTypeID::EnemyID_YellowPom,
		                                EnemyTypeID::EnemyID_BlackPom, EnemyTypeID::EnemyID_WhitePom, EnemyTypeID::EnemyID_RandPom };
	int id_count                    = sizeof(ids) / sizeof(EnemyTypeID::EEnemyTypeID);
	for (int i = 0; i < id_count; i++) {
		int counter  = 0;
		int enemyNum = generalEnemyMgr->getEnemyNum(ids[i], false);
		for (int j = counter; j < enemyNum; j++, counter++) {
			m_obj[j].m_pomID = ids[i];
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	mr       r30, r4
	mulli    r3, r30, 0x300
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game3Pom3ObjFv@ha
	lis      r5, __dt__Q34Game3Pom3ObjFv@ha
	addi     r4, r4, __ct__Q34Game3Pom3ObjFv@l
	mr       r7, r30
	addi     r5, r5, __dt__Q34Game3Pom3ObjFv@l
	li       r6, 0x300
	bl       __construct_new_array
	lis      r4, lbl_80484C98@ha
	stw      r3, 0x44(r31)
	addi     r8, r4, lbl_80484C98@l
	addi     r30, r1, 8
	lwz      r7, 0(r8)
	li       r28, 0
	lwz      r6, 4(r8)
	li       r29, 0
	lwz      r5, 8(r8)
	lwz      r4, 0xc(r8)
	lwz      r3, 0x10(r8)
	lwz      r0, 0x14(r8)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)

lbl_80254374:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r5, 0
	lwz      r4, 0(r30)
	bl       getEnemyNum__Q24Game15GeneralEnemyMgrFib
	clrlwi.  r0, r3, 0x18
	mr       r6, r29
	mr       r3, r0
	ble      lbl_80254438
	rlwinm.  r0, r0, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_80254418

lbl_802543A0:
	lwz      r5, 0(r30)
	addi     r0, r6, 0x2ec
	lwz      r4, 0x44(r31)
	addi     r29, r29, 0x1800
	stwx     r5, r4, r0
	addi     r0, r6, 0x5ec
	lwz      r4, 0x44(r31)
	stwx     r5, r4, r0
	addi     r0, r6, 0x8ec
	lwz      r4, 0x44(r31)
	stwx     r5, r4, r0
	addi     r0, r6, 0xbec
	lwz      r4, 0x44(r31)
	stwx     r5, r4, r0
	addi     r0, r6, 0xeec
	lwz      r4, 0x44(r31)
	stwx     r5, r4, r0
	addi     r0, r6, 0x11ec
	lwz      r4, 0x44(r31)
	stwx     r5, r4, r0
	addi     r0, r6, 0x14ec
	lwz      r4, 0x44(r31)
	stwx     r5, r4, r0
	addi     r0, r6, 0x17ec
	addi     r6, r6, 0x1800
	lwz      r4, 0x44(r31)
	stwx     r5, r4, r0
	bdnz     lbl_802543A0
	andi.    r3, r3, 7
	beq      lbl_80254438

lbl_80254418:
	mtctr    r3

lbl_8025441C:
	lwz      r5, 0(r30)
	addi     r0, r6, 0x2ec
	lwz      r4, 0x44(r31)
	addi     r6, r6, 0x300
	addi     r29, r29, 0x300
	stwx     r5, r4, r0
	bdnz     lbl_8025441C

lbl_80254438:
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 6
	blt      lbl_80254374
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80254524
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	80254534
 * Size:	000138
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x80000, m_modelType);
	P2ASSERTLINE(182, model != nullptr);

	for (u16 i = 0; i < m_modelData->getMaterialCount1(); i++) {
		const char* name = m_modelData->m_materialTable._0C->getName(i);
		if (!strcmp(name, "hanabira1_v")) {
			model->m_j3dModel->m_matPackets[i]._2C->newDifferedDisplayList(0x01000000);
		}
	}

	model->updateModel();
	return model;
}

} // namespace Pom
} // namespace Game
