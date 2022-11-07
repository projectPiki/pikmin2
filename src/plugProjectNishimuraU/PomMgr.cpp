#include "Game/Entities/Pom.h"
#include "Game/generalEnemyMgr.h"
#include "Game/GameSystem.h"
#include "Game/gamePlayData.h"
#include "Game/gameStat.h"
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

			// Emergence cave
			if (section && (section->getCurrFloor() < 2 || section->getCaveID() == 't_01')) {
				const s32 cavePikis = playData->m_caveSaveData.m_cavePikis.getColorSum(Purple);
				const s32 purpPikis = GameStat::getAllPikmins(Purple);

				// Don't generate if above 20 purple Pikmin
				if (purpPikis + cavePikis >= 20) {
					return nullptr;
				}
			}
		} else if (birthArg.m_typeID == EnemyTypeID::EnemyID_WhitePom) { // WHITE CANDYPOP
			BaseGameSection* section = gs->m_section;

			if (section) {
				if (playData->hasMetPikmin(White)) {
					// White flower garden
					if (section->getCurrFloor() < 2 || section->getCaveID() == 'f_02') {
						const s32 cavePikis  = playData->m_caveSaveData.m_cavePikis.getColorSum(White);
						const s32 whitePikis = GameStat::getAllPikmins(White);

						// Don't generate if above 20 white Pikmin
						if (whitePikis + cavePikis >= 20) {
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
	int counter                     = 0;
	for (int i = 0; i < id_count; i++) {
		int enemyNum = generalEnemyMgr->getEnemyNum(ids[i], false);
		for (int j = 0; j < enemyNum; j++, counter++) {
			m_obj[counter].m_pomID = ids[i];
		}
	}
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
