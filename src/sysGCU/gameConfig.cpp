#include "Dolphin/stl.h"
#include "Dolphin/string.h"
#include "System.h"
#include "types.h"
#include "Game/GameConfig.h"

// TODO: How is this string actually (not) used?
DEFINE__PRINT("gameConfig");
void fakeMatch_printGameConfig() { printf("gameConfig"); }

namespace Game {

GameConfig gGameConfig;

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
// void GameConfig::setConstSetting()
// {
// 	// UNUSED FUNCTION
// }

/*
 * __ct__Q24Game10GameConfigFv
 * --INFO--
 * Address:	80432170
 * Size:	000130
 */
GameConfig::GameConfig()
    : m_parms()
{
#if MATCHING
	// I suspect the double-loading might be from an earlier revision of the
	// parms....
	m_parms.m_gamePrint.m_data        = 0;
	m_parms.m_Print.m_data            = 0;
	m_parms.m_ogawaPrint.m_data       = 0;
	m_parms.m_shimizuPrint.m_data     = 0;
	m_parms.m_yamashitaPrint.m_data   = 0;
	m_parms.m_kandoPrint.m_data       = 0;
	m_parms.m_nishimuraPrint.m_data   = 0;
	m_parms.m_morimuraPrint.m_data    = 0;
	m_parms.m_ebisawaPrint.m_data     = 0;
	m_parms.m_psoundPrint.m_data      = 0;
	m_parms.m_shortCutUp.m_data       = -1;
	m_parms.m_shortCutDown.m_data     = -1;
	m_parms.m_shortCutLeft.m_data     = -1;
	m_parms.m_shortCutRight.m_data    = -1;
	m_parms.m_allocAllEnemy.m_data    = 0;
	m_parms.m_AI.m_data               = 0;
	m_parms.m_timers.m_data           = 0;
	m_parms.m_mukki_cherry.m_data     = 0;
	m_parms.m_marioClubDevelop.m_data = 0;
	m_parms.m_heapStatusPrint.m_data  = 0;
	m_parms.m_publicity.m_data        = 1;
	m_parms.m_mapparts_path.m_data    = "";
	m_parms.m_pelletMultiLang.m_data  = 1;
	m_parms.m_vsTest.m_data           = 0;
#endif
	m_parms.m_autosaveOff.m_data      = 0;
	m_parms.m_gamePrint.m_data        = 0;
	m_parms.m_Print.m_data            = 0;
	m_parms.m_ogawaPrint.m_data       = 0;
	m_parms.m_shimizuPrint.m_data     = 0;
	m_parms.m_yamashitaPrint.m_data   = 0;
	m_parms.m_kandoPrint.m_data       = 0;
	m_parms.m_nishimuraPrint.m_data   = 0;
	m_parms.m_morimuraPrint.m_data    = 0;
	m_parms.m_ebisawaPrint.m_data     = 0;
	m_parms.m_psoundPrint.m_data      = 0;
	m_parms.m_shortCutUp.m_data       = -1;
	m_parms.m_shortCutDown.m_data     = -1;
	m_parms.m_shortCutLeft.m_data     = -1;
	m_parms.m_shortCutRight.m_data    = -1;
	m_parms.m_allocAllEnemy.m_data    = 0;
	m_parms.m_AI.m_data               = 0;
	m_parms.m_E3version.m_data        = 0;
	m_parms.m_timers.m_data           = 0;
	m_parms.m_mukki_cherry.m_data     = 0;
	m_parms.m_marioClubDevelop.m_data = 0;
	m_parms.m_heapStatusPrint.m_data  = 0;
	m_parms.m_publicity.m_data        = 1;
	m_parms.m_mapparts_path.m_data    = "";
	m_parms.m_language.m_data         = "";
	m_parms.m_pelletMultiLang.m_data  = 1;
	m_parms.m_vsTest.m_data           = 0;
	m_parms.m_heapFreeSize.m_data     = 1;
	m_parms.m_KFesVersion.m_data      = 0;
#if BUILDTARGET == USAFINAL
	m_parms.m_nintendoVersion.m_data = 0;
#elif BUILDTARGET == USADEMO1
	m_parms.m_nintendoVersion.m_data = 1;
#endif
	m_parms.m_vsDeathType.m_data          = 1;
	m_parms.m_vsHiba.m_data               = 0;
	m_parms.m_vsY.m_data                  = 0;
	m_parms.m_baseGameNewCheck.m_data     = 0;
	m_parms.m_vsDebugSelectPattern.m_data = 0;
	m_parms.m_vsFifo.m_data               = 0;
}

/*
 * --INFO--
 * Address:	804322A0
 * Size:	000070
 */
// WEAK - in header.
// GameConfig::Parms::~Parms() { }

/*
 * __ct__Q34Game10GameConfig5ParmsFv
 * --INFO--
 * Address:	80432310
 * Size:	000460
 */
// WEAK - in header.
// GameConfig::Parms::Parms()
//     : TagParameters("GameConfig")
//     , m_gamePrint(this, "gamePrint")
//     , m_Print(this, "Print")
//     , m_ogawaPrint(this, "ogawaPrint")
//     , m_shimizuPrint(this, "shimizuPrint")
//     , m_yamashitaPrint(this, "yamashitaPrint")
//     , m_kandoPrint(this, "kandoPrint")
//     , m_nishimuraPrint(this, "nishimuraPrint")
//     , m_ebisawaPrint(this, "ebisawaPrint")
//     , m_morimuraPrint(this, "morimuraPrint")
//     , m_konoPrint(this, "konoPrint")
//     , m_fujinoPrint(this, "fujinoPrint")
//     , m_psoundPrint(this, "psoundPrint")
//     , m_shortCutUp(this, "shortCutUp")
//     , m_shortCutDown(this, "shortCutDown")
//     , m_shortCutLeft(this, "shortCutLeft")
//     , m_shortCutRight(this, "shortCutRight")
//     , m_allocAllEnemy(this, "allocAllEnemy")
//     , m_mapparts_path(this, "mapparts_path")
//     , m_publicity(this, "publicity")
//     , m_pelletMultiLang(this, "pelletMultiLang")
//     , m_AI(this, "AI")
//     , m_timers(this, "timers")
//     , m_vsTest(this, "vsTest")
//     , m_vsDeathType(this, "vsDeathType")
//     , m_vsHiba(this, "vsHiba")
//     , m_vsY(this, "vsY")
//     , m_E3version(this, "E3version")
//     , m_mukki_cherry(this, "mukki_cherry")
//     , m_marioClubDevelop(this, "marioClubDevelop")
//     , m_heapStatusPrint(this, "heapStatusPrint")
//     , m_heapFreeSize(this, "heapFreeSize")
//     , m_baseGameNewCheck(this, "baseGameNewCheck")
//     , m_KFesVersion(this, "KFesVersion")
//     , m_nintendoVersion(this, "nintendoVersion")
//     , m_language(this, "language")
//     , m_autosaveOff(this, "autosaveOff")
//     , m_vsDebugSelectPattern(this, "vsDebugSelectPattern")
//     , m_vsFifo(this, "vsFifo")
// {
// }

/*
 * --INFO--
 * Address:	80432770
 * Size:	000128
 */
bool GameConfig::load(char*)
{
	if (strcmp(gGameConfig.m_parms.m_language.m_data, "eng") == 0) {
		sys->m_region = System::LANG_ENGLISH;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "fra") == 0) {
		sys->m_region = System::LANG_FRENCH;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "ger") == 0) {
		sys->m_region = System::LANG_GERMAN;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "hol") == 0) {
		sys->m_region = System::LANG_ENGLISH;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "ita") == 0) {
		sys->m_region = System::LANG_ITALIAN;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "jpn") == 0) {
		sys->m_region = System::LANG_JAPANESE;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "spa") == 0) {
		sys->m_region = System::LANG_SPANISH;
	}
	return false;
}

// /*
//  * sinit
//  * --INFO--
//  * Address:	80432898
//  * Size:	00003C
//  */
// void __sinit_gameConfig_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r3, gGameConfig__4Game@ha
// 	stw      r0, 0x14(r1)
// 	addi     r3, r3, gGameConfig__4Game@l
// 	bl       __ct__Q24Game10GameConfigFv
// 	lis      r4, __dt__Q24Game10GameConfigFv@ha
// 	lis      r5, lbl_804F7C38@ha
// 	addi     r4, r4, __dt__Q24Game10GameConfigFv@l
// 	addi     r5, r5, lbl_804F7C38@l
// 	bl       __register_global_object
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * __dt__Q24Game10GameConfigFv
 * --INFO--
 * Address:	804328D4
 * Size:	000074
 */
// GameConfig::~GameConfig(void) {}

} // namespace Game
