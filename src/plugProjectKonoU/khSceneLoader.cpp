#include "kh/DayEndResult.h"
#include "kh/WinLose.h"
#include "kh/CaveResult.h"
#include "kh/ReadyGo.h"
#include "kh/FinalFloor.h"
#include "kh/FinalResult.h"
#include "kh/PayDept.h"

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	803FBAD4
 * Size:	0001F8
 */
::Screen::SceneBase* createScene_Koono(long sceneType)
{
	::Screen::SceneBase* base = nullptr;
	switch (sceneType) {
	case SCENE_CAVE_RESULT:
		base = new SceneCaveResult;
		break;

	case SCENE_READY_GO:
		base = new SceneReadyGo;
		break;

	case SCENE_FINAL_FLOOR:
		base = new SceneFinalFloor;
		break;

	case SCENE_DAY_END_RESULT_ITEM:
		base = new SceneDayEndResultItem;
		break;

	case SCENE_DAY_END_RESULT_INC_P:
		base = new SceneDayEndResultIncP;
		break;

	case SCENE_DAY_END_RESULT_MAIL:
		base = new SceneDayEndResultMail;
		break;

	case SCENE_FINAL_RESULT:
		base = new SceneFinalResult;
		break;

	case SCENE_PAY_DEPT:
		base = new ScenePayDept;
		break;

	case SCENE_WIN_LOSE:
		base = new SceneWinLose;
		break;

	case SCENE_WIN_LOSE_REASON:
		base = new SceneWinLoseReason;
		break;

	case SCENE_DAY_END_RESULT_TITL:
		base = new SceneDayEndResultTitl;
		break;
	}

	return base;
}
} // namespace Screen
} // namespace kh
