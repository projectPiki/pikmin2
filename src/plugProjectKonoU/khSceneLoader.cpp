#include "kh/khDayEndResult.h"
#include "kh/khWinLose.h"
#include "kh/khCaveResult.h"
#include "kh/khReadyGo.h"
#include "kh/khFinalFloor.h"
#include "kh/khFinalResult.h"
#include "kh/khPayDept.h"
#include "Screen/screenMgr.h"

namespace kh {
namespace Screen {

/**
 * @note Address: 0x803FBAD4
 * @note Size: 0x1F8
 */
::Screen::SceneBase* createScene_Koono(s32 sceneType)
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
