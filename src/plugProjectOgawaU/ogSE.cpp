#include "og/Sound.h"
#include "PSSystem/PSSystemIF.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"
#include "utilityU.h"

namespace og {

Sound* ogSound;

/**
 * @note Address: 0x8030C9B0
 * @note Size: 0x28
 */
void Sound::setSE(u32 soundID) { PSSystem::spSysIF->playSystemSe(soundID, 0); }

/**
 * @note Address: 0x8030C9D8
 * @note Size: 0x2C
 */
void Sound::setLifeDanger() { PSSystem::spSysIF->playSystemSe(PSSE_SY_LIFE_DANGER, 0); }

/**
 * @note Address: 0x8030CA04
 * @note Size: 0xF4
 */
void Sound::setChimeNoon()
{
	PSSystem::spSysIF->playSystemSe(PSSE_SY_TIME_SIGNAL_NOON, 0);

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Ground* scene = static_cast<PSM::Scene_Ground*>(mgr->getChildScene());
	scene                    = (scene->isGameScene()) ? scene : nullptr;
	scene->changeEnvSE_Noon();
}

/**
 * @note Address: 0x8030CAF8
 * @note Size: 0x2C
 */
void Sound::setChime() { PSSystem::spSysIF->playSystemSe(PSSE_SY_TIME_SIGNAL_SMALL, 0); }

/**
 * @note Address: 0x8030CB24
 * @note Size: 0x2C
 */
void Sound::setDecide() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0); }

/**
 * @note Address: 0x8030CB50
 * @note Size: 0x2C
 */
void Sound::setCancel() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0); }

/**
 * @note Address: 0x8030CB7C
 * @note Size: 0x2C
 */
void Sound::setCursor() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0); }

/**
 * @note Address: 0x8030CBA8
 * @note Size: 0x2C
 */
void Sound::setOpen() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_OPEN, 0); }

/**
 * @note Address: 0x8030CBD4
 * @note Size: 0x2C
 */
void Sound::setClose() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CLOSE, 0); }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void Sound::setPause()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8030CC00
 * @note Size: 0x48
 */
void Sound::setPlusMinus(bool isRepeat)
{
	if (isRepeat) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_PLUS_MINUS_REPEAT, 0);
	} else {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_PLUS_MINUS, 0);
	}
}

/**
 * @note Address: 0x8030CC48
 * @note Size: 0x2C
 */
void Sound::setSMenuLR() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_PLUS_MINUS, 0); }

/**
 * @note Address: 0x8030CC74
 * @note Size: 0x2C
 */
void Sound::setError() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0); }

/**
 * @note Address: 0x8030CCA0
 * @note Size: 0x2C
 */
void Sound::setZoomIn() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ZOOMIN, 0); }

/**
 * @note Address: 0x8030CCCC
 * @note Size: 0x2C
 */
void Sound::setZoomOut() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ZOOMOUT, 0); }

/**
 * @note Address: 0x8030CCF8
 * @note Size: 0x2C
 */
void Sound::setScroll() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_SCROLL, 0); }

/**
 * @note Address: 0x8030CD24
 * @note Size: 0x2C
 */
void Sound::setOpenDoukutu() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0); }

/**
 * @note Address: 0x8030CD50
 * @note Size: 0x2C
 */
void Sound::setSaveCave() { PSSystem::spSysIF->playSystemSe(PSSE_SAVESELECTPAD, 0); }

/**
 * @note Address: 0x8030CD7C
 * @note Size: 0x2C
 */
void Sound::setOpenWMapMenu() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0); }

/**
 * @note Address: 0x8030CDA8
 * @note Size: 0x2C
 */
void Sound::setOpenTotalPoko() { PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_DRAWER_OPEN, 0); }

/**
 * @note Address: 0x8030CDD4
 * @note Size: 0x2C
 */
void Sound::setCloseTotalPoko() { PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_RECEIPT, 0); }

/**
 * @note Address: 0x8030CE00
 * @note Size: 0x2C
 */
void Sound::setPlusTotalPoko() { PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_SUM_UP, 0); }

/**
 * @note Address: 0x8030CE2C
 * @note Size: 0x2C
 */
void Sound::setOpenFinalMsg() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0); }

/**
 * @note Address: 0x8030CE58
 * @note Size: 0x2C
 */
void Sound::setSprayAdd() { PSSystem::spSysIF->playSystemSe(PSSE_SY_STORED_SPRAY, 0); }

/**
 * @note Address: 0x8030CE84
 * @note Size: 0x2C
 */
void Sound::setTimeCarry() { PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_INCRE_SUM, 0); }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void Sound::setSensorSE()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8030CEB0
 * @note Size: 0x2C
 */
void Sound::setGetSensor() { PSSystem::spSysIF->playSystemSe(PSSE_SY_EQUIP_LADER, 0); }

/**
 * @note Address: 0x8030CEDC
 * @note Size: 0x2C
 */
void Sound::setFloorComplete() { PSSystem::spSysIF->playSystemSe(PSSE_SY_FLOOR_COMPLETE, 0); }

/**
 * @note Address: 0x8030CF08
 * @note Size: 0x2C
 */
void Sound::setGraySensor() { PSSystem::spSysIF->playSystemSe(PSSE_SY_LADER_TURN_GRAY, 0); }

/**
 * @note Address: 0x8030CF34
 * @note Size: 0x2C
 */
void Sound::setGetSpray() { PSSystem::spSysIF->playSystemSe(PSSE_SY_EQUIP_SPLAY, 0); }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void Sound::setItemName()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8030CF60
 * @note Size: 0x2C
 */
void Sound::setKanteiExit() { PSSystem::spSysIF->playSystemSe(PSSE_SY_KANTEI_OUT, 0); }

/**
 * @note Address: 0x8030CF8C
 * @note Size: 0x4
 */
void Sound::setFloorTitle() { }

/**
 * @note Address: 0x8030CF90
 * @note Size: 0x2C
 */
void Sound::setVsTitle() { PSSystem::spSysIF->playSystemSe(PSSE_SY_2P_RULE_WAIT, 0); }

/**
 * @note Address: 0x8030CFBC
 * @note Size: 0x2C
 */
void Sound::setBdamaGet() { PSSystem::spSysIF->playSystemSe(PSSE_SY_2P_MARBLE_COUNT, 0); }

/**
 * @note Address: 0x8030CFE8
 * @note Size: 0x4
 */
void Sound::setNaviChange(int) { }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void Sound::setVsTitleAbutton()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xD4
 */
void Sound::stopSound()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8030CFEC
 * @note Size: 0xE0
 */
void Sound::setVsWin1P()
{
	PSStart2DStream(P2_STREAM_SOUND_ID(PSSTR_VS_BEE_WIN_ORI));

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
	scene->stopAllSound(2);
	PSMuteSE_on2D();
}

/**
 * @note Address: 0x8030D0CC
 * @note Size: 0xE0
 */
void Sound::setVsWin2P()
{
	PSStart2DStream(P2_STREAM_SOUND_ID(PSSTR_VS_BEE_WIN_LUI));

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
	scene->stopAllSound(2);
	PSMuteSE_on2D();
}

/**
 * @note Address: 0x8030D1AC
 * @note Size: 0xE0
 */
void Sound::setVsDraw()
{
	PSStart2DStream(P2_STREAM_SOUND_ID(PSSTR_VS_BEE_DROW));

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
	scene->stopAllSound(2);
	PSMuteSE_on2D();
}

/**
 * @note Address: 0x8030D28C
 * @note Size: 0x2C
 */
void Sound::setWarning() { PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_WARNING, 0); }
} // namespace og
