#include "types.h"
#include "Game/EnemyStone.h"
#include "Game/generalEnemyMgr.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "nans.h"

namespace Game {
namespace EnemyStone {

/*
 * --INFO--
 * Address:	80129B30
 * Size:	0000A8
 */
Obj::Obj(EnemyBase* enemy, Info* info)
    : m_info(info)
    , m_enemy(enemy)
    , m_flags(0)
{
	resetFlags();
	m_nodeArray[0].clearRelations();
	m_nodeArray[1].clearRelations();
}

/*
 * --INFO--
 * Address:	80129BD8
 * Size:	000104
 */
bool Obj::start()
{
	resetFlags();
	bool result = false;

	if (generalEnemyMgr->m_stoneMgr.regist(this)) {
		setFlag(STONE_Unk6);
		f32 appearVal = 0.0f;
		f32 normVal   = 1.0f / (f32)m_info->m_infoCnt;

		for (int i = 0; i < 2; i++) {
			DrawInfo* currInfo = static_cast<DrawInfo*>(m_nodeArray[i].m_child);

			while (currInfo) {
				DrawInfo* nextInfo = static_cast<DrawInfo*>(currInfo->m_next);
				currInfo->appear(m_enemy, appearVal);
				appearVal -= normVal;
				currInfo = nextInfo;
			}
		}

		result = true;
	}
	return result;
}

/*
 * --INFO--
 * Address:	80129CDC
 * Size:	0000E0
 */
void Obj::shake()
{
	if (!isFlag(STONE_Shake)) {
		setFlag(STONE_Shake);

		f32 shakeVal = 0.0;                      // supplied to shake
		f32 normVal  = 1.0f / m_info->m_infoCnt; // used to adjust shake for next DrawInfo node

		for (int i = 0; i < 2; i++) {
			DrawInfo* currInfo = (DrawInfo*)m_nodeArray[i].m_child;

			while (currInfo != nullptr) {
				DrawInfo* nextInfo = (DrawInfo*)currInfo->m_next;
				currInfo->shake(m_enemy, shakeVal);
				shakeVal -= normVal;
				currInfo = nextInfo;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Obj::updateDrawInfo()
{
	for (int i = 0; i < 2; i++) {
		DrawInfo* currInfo = (DrawInfo*)m_nodeArray[i].m_child;

		while (currInfo != nullptr) {
			DrawInfo* nextInfo = (DrawInfo*)currInfo->m_next;
			currInfo->update(m_enemy);
			currInfo = nextInfo;
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Obj::fitDrawInfo()
{
	for (int i = 0; i < 2; i++) {
		DrawInfo* currInfo = (DrawInfo*)m_nodeArray[i].m_child;

		while (currInfo != nullptr) {
			DrawInfo* nextInfo = (DrawInfo*)currInfo->m_next;
			currInfo->fit(m_enemy);
			currInfo = nextInfo;
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Obj::disappearDrawInfo()
{
	for (int i = 0; i < 2; i++) {
		DrawInfo* currInfo = (DrawInfo*)m_nodeArray[i].m_child;

		while (currInfo != nullptr) {
			DrawInfo* nextInfo = (DrawInfo*)currInfo->m_next;
			currInfo->disappear(m_enemy);
			currInfo = nextInfo;
		}
	}
}

/*
 * --INFO--
 * Address:	80129DBC
 * Size:	0002A8
 */
void Obj::update()
{
	updateDrawInfo();

	if (!isFlag(STONE_Fit)) {
		m_enemy->m_soundObj->startSound(PSSE_EN_DOPING_GAS_FREEZE, 0);
		if (checkDrawInfoState(2)) {
			setFlag(STONE_Fit);
			fitDrawInfo();
		}

	} else if (!isFlag(STONE_HasViewedDemo)) {
		if (checkDrawInfoState(4)) {
			setFlag(STONE_HasViewedDemo);
			if (gameSystem->m_mode == GSM_STORY_MODE && gameSystem->m_flags & 0x20 && !playData->isDemoFlag(DEMO_First_Bitter_Use)) {
				if (moviePlayer) {
					MoviePlayArg playArg("g1B_black_doping", nullptr, nullptr, 0);
					playArg.m_origin            = m_enemy->getPosition();
					playArg.m_angle             = m_enemy->getFaceDir();
					moviePlayer->m_targetObject = m_enemy;
					moviePlayer->play(playArg);
					playData->setDemoFlag(DEMO_First_Bitter_Use);
				}
			}
		}

	} else if (isFlag(STONE_Shake)) {
		if (checkDrawInfoState(6)) {
			disappearDrawInfo();
			m_enemy->m_soundObj->startSound(PSSE_EN_DOPING_ROCK_BREAK, 0);
			setFlag(STONE_Break);
			generalEnemyMgr->m_stoneMgr.release(this);
		}
	}
}

/*
 * --INFO--
 * Address:	8012A064
 * Size:	000088
 */
bool Obj::checkDrawInfoState(int state)
{
	for (int i = 0; i < 2; i++) {
		DrawInfo* currInfo = (DrawInfo*)m_nodeArray[i].m_child;

		while (currInfo != nullptr) { // loop through all child DrawInfos and 'update' each one
			DrawInfo* nextInfo = (DrawInfo*)currInfo->m_next;
			if (currInfo->getStateID() != state) {
				return false;
			}
			currInfo = nextInfo;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	8012A0EC
 * Size:	0000B4
 */
void Obj::dead()
{
	for (int i = 0; i < 2; i++) {
		DrawInfo* currInfo = (DrawInfo*)m_nodeArray[i].m_child;

		while (currInfo) {
			DrawInfo* nextInfo = (DrawInfo*)currInfo->m_next;
			currInfo->dead(m_enemy);
			currInfo = nextInfo;
		}
	}

	m_enemy->m_soundObj->startSound(PSSE_EN_DOPING_ROCK_BREAK, 0);
	setFlag(STONE_Break);
	generalEnemyMgr->m_stoneMgr.release(this);
}

} // namespace EnemyStone
} // namespace Game
