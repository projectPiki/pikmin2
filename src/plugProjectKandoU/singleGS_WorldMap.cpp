#include "Game/GameSystem.h"
#include "Game/MoviePlayer.h"
#include "Game/Navi.h"
#include "Game/gamePlayData.h"
#include "Screen/Game2DMgr.h"
#include "Game/SingleGame.h"
#include "kh/khWorldMap.h"
#include "PSGame/SceneInfo.h"
#include "PSSystem/PSGame.h"
#include "PSGame/PikScene.h"
#include "TParticle2dMgr.h"
#include "JSystem/J2D/J2DPrint.h"
#include "nans.h"

// probably have this somewhere easy to find
#define MAX_LEVELS 4

static const int unusedArray[] = { 0, 0, 0 };
static const char name[]       = "SingleGS_Game";

static int sParentHeapFreeSize;
static int sParentHeapFreeSize_Last;

namespace Game {

/*
 * --INFO--
 * Address:	8021B94C
 * Size:	0000E4
 */
SingleGame::SelectState::SelectState()
    : State(SGS_Select)
{
	m_controller       = new Controller(JUTGamePad::PORT_0);
	m_dvdLoadCallback  = new Delegate<SelectState>(this, &dvdload);
	m_previousCourseID = -1;
}

/*
 * --INFO--
 * Address:	8021BA30
 * Size:	000098
 */
void SingleGame::SelectState::init(SingleGameSection*, StateArg*)
{
	moviePlayer->reset();
	m_state      = SELECTSTATE_Init;
	m_parentHeap = nullptr;
	m_wMapHeap   = nullptr;
	Screen::gGame2DMgr->m_screenMgr->reset();
	sParentHeapFreeSize_Last = sParentHeapFreeSize;
	sParentHeapFreeSize      = JKRHeap::sCurrentHeap->getFreeSize();
	JKRHeap::sCurrentHeap->getFreeSize();
	JKRHeap::sCurrentHeap->getTotalFreeSize();
	playData->m_deadNaviID[0] = 0;
	naviMgr->clearDeadCount();
	m_newLevelOpen = false;
}

/*
 * --INFO--
 * Address:	8021BAC8
 * Size:	000260
 */
void SingleGame::SelectState::initNext(SingleGameSection* section)
{
	sys->setFrameRate(1);
	m_state = SELECTSTATE_Load;

	m_parentHeap = JKRHeap::sCurrentHeap;
	m_parentHeap->getFreeSize();
	sParentHeapFreeSize = m_parentHeap->getFreeSize();
	m_parentHeap->getFreeSize();
	m_parentHeap->getTotalFreeSize();
	m_wMapHeap = JKRExpHeap::create(m_parentHeap->getFreeSize(), m_parentHeap, true);
	m_wMapHeap->becomeCurrentHeap();

	if (playData->courseOpen(2) && (playData->isStoryFlag(STORY_DebtPaid)) && !playData->courseOpen(3)) {
		playData->openCourse(3);
	}
	if (playData->courseOpen(1)) {
		playData->setDemoFlag(DEMO_First_Globe_Day_End);
		playData->setDemoFlag(DEMO_First_Cave_Return);
	}

	bool anyFirstTimes = false;
	for (int i = 0; i < MAX_LEVELS; i++) {
		if (playData->courseFirstTime(i)) {
			anyFirstTimes = true;
		}
	}
	m_newLevelOpen = anyFirstTimes;

	m_worldMap = new kh::Screen::WorldMap;
	WorldMap::InitArg arg;

	arg.m_dayCount   = gameSystem->m_timeMgr->m_dayCount + 1;
	arg.m_stages     = stageList;
	arg.m_heap       = m_wMapHeap;
	arg.m_controller = m_controller;

	if (m_previousCourseID == -1) {
		arg.m_initialCourseIndex = playData->getCurrentCourseIndex();
	} else {
		arg.m_initialCourseIndex = m_previousCourseID;
	}

	arg.m_hasNewPiklopediaEntries    = playData->m_tekiStatMgr.whatsNew();
	arg.m_hasNewTreasureHoardEntries = playData->hasPelletZukanWhatsNew();
	arg._16                          = section->_228;
	section->_228                    = 1;
	static_cast<Game::WorldMap::Base*>(m_worldMap)->init(arg);

	section->m_displayWiper = section->m_wipeInFader;
	section->m_wipeInFader->start(1.0f);

	section->refreshHIO();
	m_controller->setButtonRepeat(0x3000000, 0x1E, 1);
	sys->dvdLoadUseCallBack(&section->m_dvdThread, m_dvdLoadCallback);
}

/*
 * --INFO--
 * Address:	8021BD2C
 * Size:	00030C
 */
void SingleGame::SelectState::dvdload()
{
	PSGame::SceneInfo info;
	if (m_newLevelOpen) {
		info.m_sceneType = PSGame::SceneInfo::WORLD_MAP_NEWLEVEL;
	} else {
		info.m_sceneType = PSGame::SceneInfo::WORLD_MAP_NORMAL;
	}
	info.m_cameras = 0;

	JUT_ASSERTLINE(394, PSSystem::getSceneMgr(), "PSGetSceneMgr null\n");

	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->newAndSetCurrentScene(&info);
	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->doFirstLoad();
	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->doStartMainSeq();

	if (getCurrentHeap() != m_wMapHeap) {
		JUT_PANICLINE(401, "MOC = Mouse on Cars!\n");
	}

	void* handle = JKRDvdRipper::loadToMainRAM("user/Ebisawa/effect/eff2d_world_map.jpc", nullptr, Switch_0, 0, 0,
	                                           JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr);
	JUT_ASSERTLINE(410, handle, "WORLD_MAP_JPC");
	JPAResourceManager* jpamgr = new JPAResourceManager(handle, getCurrentHeap());
	JPAEmitterManager* jpaemit = new JPAEmitterManager(1000, 256, getCurrentHeap(), 8, 8);
	JUT_ASSERTLINE(416, particle2dMgr, "particle2dMgr null\n");
	particle2dMgr->setSceneEmitterAndResourceManager(jpaemit, jpamgr);

	if (getCurrentHeap() != m_wMapHeap) {
		JUT_PANICLINE(420, "MOC = Mouse on Cars!\n");
	}

	JUT_ASSERTLINE(423, m_worldMap, "mWorldMap null\n");
	static_cast<Game::WorldMap::Base*>(m_worldMap)->loadResource();

	if (getCurrentHeap() != m_wMapHeap) {
		JUT_PANICLINE(427, "MOC = Mouse on Cars!\n");
	}
}

/*
 * --INFO--
 * Address:	8021C03C
 * Size:	0002AC
 */
void SingleGame::SelectState::exec(SingleGameSection* game)
{
	switch (m_state) {
	case SELECTSTATE_Init: {
		initNext(game);
		break;
	}
	case SELECTSTATE_Load: {
		if (game->m_dvdThread.m_mode == 2)
			m_state = SELECTSTATE_Draw;
		break;
	}
	default: {
		if (m_wMapHeap) {
			game->BaseHIOSection::doUpdate();
			WorldMap::UpdateArg arg;
			arg.m_courseInfo = nullptr;
			arg.m_status     = WorldMap::WMapUpdate_0;
			static_cast<Game::WorldMap::Base*>(m_worldMap)->update(arg);

			switch (arg.m_status) {
			case WorldMap::WMapUpdate_GoToLoad: {
				m_previousCourseID = -1;
				ZukanState* state  = static_cast<ZukanState*>(game->m_fsm->getState(SGS_Zukan));
				if (state) {
					state->_110 = -1;
					state->_114 = -1;
				}
				if (arg.m_courseInfo) {
					CourseInfo* info = arg.m_courseInfo;
					game->_228       = 0;
					playData->setPelletZukanOutOfDateAll();
					playData->m_tekiStatMgr.setOutOfDateAll();
					game->m_displayWiper = game->m_wipeInFader;
					game->m_wipeInFader->start(4.0f);
					game->m_currentCourseInfo = info;
					LoadStateArg larg;
					larg._00 = 0;
					larg._01 = 1;
					larg._02 = 0;
					larg._04 = 0;
					transit(game, SGS_Load, &larg);
				}
				break;
			}
			case WorldMap::WMapUpdate_2: {
				ZukanStateArg sarg;
				sarg.m_zukanType = 1;
				sarg.m_courseID  = 0;
				transit(game, SGS_Zukan, &sarg);
				break;
			}
			case WorldMap::WMapUpdate_GoToZukan: {
				ZukanStateArg sarg;
				sarg.m_zukanType = 1;
				sarg.m_courseID  = 0;
				if (arg.m_courseInfo) {
					sarg.m_courseID    = arg.m_courseInfo->m_courseIndex;
					m_previousCourseID = sarg.m_courseID;
				} else {
					sarg.m_courseID = 2;
				}
				transit(game, SGS_Zukan, &sarg);
				break;
			}
			case WorldMap::WMapUpdate_ReturnToTitle: {
				m_previousCourseID = -1;
				ZukanState* state  = static_cast<ZukanState*>(game->m_fsm->getState(SGS_Zukan));
				if (state) {
					state->_110 = -1;
					state->_114 = -1;
				}
				game->_228 = 0;
				game->flow_goto_title();
				return;
			}
			case WorldMap::WMapUpdate_4: {
				ZukanStateArg sarg2;
				sarg2.m_zukanType = 0;
				sarg2.m_courseID  = 0;
				if (arg.m_courseInfo) {
					sarg2.m_courseID   = arg.m_courseInfo->m_courseIndex;
					m_previousCourseID = sarg2.m_courseID;
				} else {
					sarg2.m_courseID = 2;
				}
				transit(game, SGS_Zukan, &sarg2);
				break;
			}
			}
			if (particle2dMgr) {
				particle2dMgr->update();
			}
		}
	}
	}
}

/*
 * --INFO--
 * Address:	8021C2EC
 * Size:	0002D0
 */
void SingleGame::SelectState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (m_wMapHeap && m_state == SELECTSTATE_Draw) {
		gfx.m_orthoGraph.setPort();

		gfx.m_perspGraph.setPort();
		static_cast<Game::WorldMap::Base*>(m_worldMap)->draw1st(gfx);

		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(3, 0);

		gfx.m_perspGraph.setPort();
		static_cast<Game::WorldMap::Base*>(m_worldMap)->draw2nd(gfx);

		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(2, 0);

		gfx.m_perspGraph.setPort();
		static_cast<Game::WorldMap::Base*>(m_worldMap)->draw3rd(gfx);

		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(4, 0);

		gfx.m_perspGraph.setPort();
		static_cast<Game::WorldMap::Base*>(m_worldMap)->draw4th(gfx);

		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(1, 0);

		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(0, 0);

		if (sParentHeapFreeSize && sParentHeapFreeSize_Last && (sParentHeapFreeSize != sParentHeapFreeSize_Last)) {
			gfx.m_orthoGraph.setPort();
			J2DPrint print(JFWSystem::systemFont, 0.0f);
			print.initiate();
			print.m_charColor.set(JUtility::TColor(255, 19, 55, 255));
			print.m_gradientColor.set(JUtility::TColor(0, 0, 0, 255));
			print.m_glyphWidth  = 16.0f;
			print.m_glyphHeight = 16.0f;
			print.print(60.0f, 120.0f, "* %d %d %d", sParentHeapFreeSize_Last - sParentHeapFreeSize, sParentHeapFreeSize_Last,
			            sParentHeapFreeSize);
		}
	}
}

/*
 * --INFO--
 * Address:	8021C5CC
 * Size:	0000F4
 */
void SingleGame::SelectState::cleanup(SingleGameSection* game)
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	mgr->deleteCurrentScene();

	playData->doneWorldMapEffect();
	particle2dMgr->killAll();
	particle2dMgr->clearSceneEmitterAndResourceManager();
	m_wMapHeap->freeAll();
	m_wMapHeap->destroy();
	m_wMapHeap = nullptr;
	m_parentHeap->becomeCurrentHeap();
	sys->setFrameRate(2);
	JUT_ASSERTLINE(732, sParentHeapFreeSize == (int)m_parentHeap->getFreeSize(), "damek\n");
}

} // namespace Game
