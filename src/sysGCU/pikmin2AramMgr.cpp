#include "Pikmin2ARAM.h"
#include "ARAM.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "og/newScreen/ogUtil.h"
#include "P2Macros.h"
#include "stream.h"

Pikmin2ARAM::Mgr* gPikmin2AramMgr;

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace Pikmin2ARAM {

namespace {
char* sAramResName2D[]
    = { "res_ground.szs",       "res_cave.szs",         "res_s_menu_map.szs", "res_s_menu_pause.szs",         "res_s_menu_item.szs",
	    "res_challenge_1p.szs", "res_challenge_2p.szs", "res_vs.szs",         "res_s_menu_pause_doukutu.szs", "res_s_menu_pause_VS.szs",
	    "res_ana_demo.szs",     "res_contena.szs",      "res_ufo.szs" };

char* sAramResName2DCmn[] = { "/new_screen/cmn/res_map_image_tutorial.szs", "/new_screen/cmn/res_map_image_forest.szs",
	                          "/new_screen/cmn/res_map_image_yakushima.szs", "/new_screen/cmn/res_map_image_last.szs" };

char* sAramResDemo[] = { "/user/Mukki/movie/s00_coursein/demo.szs",
	                     "/user/Mukki/movie/s0B_cv_coursein/demo.szs",
	                     "/user/Mukki/movie/s09_holein/demo.szs",
	                     "/user/Mukki/movie/g2F_appear_hole/demo.szs",
	                     "/user/Mukki/movie/g30_appear_fountain/demo.szs",
	                     "/user/Mukki/movie/s10_suck_treasure/demo.szs",
	                     "/user/Mukki/movie/s17_suck_equipment/demo.szs",
	                     "/user/Mukki/movie/s22_cv_suck_equipment/demo.szs",
	                     "/user/Mukki/movie/s22_cv_suck_treasure/demo.szs",
	                     "/user/Mukki/movie/s01_dayend/demo.szs",
	                     "/user/Mukki/movie/s02_dayend_result/demo.szs",
	                     "/user/Mukki/movie/s03_orimadown/demo.szs",
	                     "/user/Mukki/movie/s04_dayend_orimadown/demo.szs",
	                     "/user/Mukki/movie/s05_pikminzero/demo.szs",
	                     "/user/Mukki/movie/s06_dayend_pikminzero/demo.szs",
	                     "/user/Mukki/movie/s0C_cv_escape/demo.szs",
	                     "/user/Mukki/movie/s0E_return_cave/demo.szs",
	                     "/user/Mukki/movie/s12_cv_giveup/demo.szs",
	                     "/user/Mukki/movie/s21_dayend_takeoff/demo.szs" };

char* sAramResItem[] = { "user/Kando/onyon/arc.szs",
	                     "user/Kando/onyon/texts.szs",
	                     "user/Kando/pod/arc.szs",
	                     "user/Kando/pod/texts.szs",
	                     "user/Kando/pod_gold/arc.szs",
	                     "user/Kando/pod_gold/texts.szs",
	                     "user/Kando/ufo/arc.szs",
	                     "user/Kando/ufo/texts.szs",
	                     "user/Kando/ufo_gold/arc.szs",
	                     "user/Kando/ufo_gold/texts.szs",
	                     "user/Kando/objects/gates/gate-arc.szs",
	                     "user/Kando/objects/gates/gate-texts.szs",
	                     "user/Kando/objects/gates/e-gate-arc.szs",
	                     "user/Kando/objects/gates/e-gate-texts.szs",
	                     "user/Kando/objects/dungeon_hole/arc.szs",
	                     "user/Kando/objects/dungeon_hole/texts.szs",
	                     "user/Kando/objects/pikihead/arc.szs",
	                     "user/Kando/objects/pikihead/texts.szs",
	                     "user/Kando/bridge/s_bridge/arc.szs",
	                     "user/Kando/bridge/s_bridge/texts.szs",
	                     "user/Kando/bridge/slope_u/arc.szs",
	                     "user/Kando/bridge/slope_u/texts.szs",
	                     "user/Kando/bridge/l_bridge/arc.szs",
	                     "user/Kando/bridge/l_bridge/texts.szs" };
} // namespace

static const char unusedQueenModelBtk[] = "/enemy/data/Queen/queenchappy_model.btk";
static const char unusedQueenModelSzs[] = "/enemy/data/Queen/model.szs";
static const char unusedQueenAnim[]     = "/enemy/data/Queen/anim.szs";
static const char unusedTDModelSzs[]    = "/enemy/data/BigTreasure/model.szs";
static const char unusedTDAnim[]        = "/enemy/data/BigTreasure/anim.szs";
static const char unusedBabyModelSzs[]  = "/enemy/data/Baby/model.szs";
static const char unusedBabyAnim[]      = "/enemy/data/Baby/anim.szs";

/**
 * @note Address: 0x80455C30
 * @note Size: 0x60
 */
void Mgr::init()
{
	P2ASSERTLINE(190, !gPikmin2AramMgr);
	gPikmin2AramMgr = new Pikmin2ARAM::Mgr;
}

/**
 * @note Address: 0x80455C90
 * @note Size: 0x18
 */
Mgr::Mgr() { mLoadPermission = false; }

/**
 * @note Address: 0x80455CA8
 * @note Size: 0x8
 */
void Mgr::setLoadPermission(bool loadPermission) { mLoadPermission = loadPermission; }

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
bool Mgr::isEntryOnly()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80455CB0
 * @note Size: 0x60
 */
void Mgr::load()
{
	JKRHeap* heap = JKRHeap::sCurrentHeap;
	loadEnemy();
	load2D();
	loadDemo();
	loadItem();
	dump();
	heap->becomeCurrentHeap();
}

/**
 * @note Address: 0x80455D10
 * @note Size: 0x24
 */
void Mgr::dump() { gAramMgr->dump(); }

/**
 * @note Address: 0x80455D34
 * @note Size: 0x1A4
 * Just regswaps left.
 */
void Mgr::loadEnemy()
{
	u8 intrp = OSDisableInterrupts() != 0;
	OSDisableScheduler();

	u32 freeSize = JKRGetSystemHeap()->getFreeSize() - 31040;
	P2ASSERTLINE(290, freeSize);

	JKRExpHeap* heap1 = makeExpHeap(freeSize, JKRGetSystemHeap(), true);
	P2ASSERTLINE(293, heap1);

	JKRExpHeap* heap2 = makeExpHeap(30880, JKRGetSystemHeap(), true);
	P2ASSERTLINE(295, heap2);

	heap1->destroy();
	OSEnableScheduler();
	OSRestoreInterrupts(intrp);

	heap2->becomeCurrentHeap();

	RamStream stream(JKRLoadToMainRAM("/enemy/enemyResList.txt"), -1);
	stream.setMode(STREAM_MODE_TEXT, 1);

	JKRAram::getAramHeap()->getFreeSize();

	while (true) {
		char* str = stream.readString(nullptr, 0);
		if (strcmp(str, "EOF") == 0) {
			break;
		}
		gAramMgr->dvdToAram(str, !mLoadPermission);
	}

	u8 interrupt2 = OSDisableInterrupts() != 0;
	OSDisableScheduler();
	heap2->destroy();
	OSEnableScheduler();
	OSRestoreInterrupts(interrupt2);
}

/**
 * @note Address: 0x80455ED8
 * @note Size: 0xB8
 */
void Mgr::load2D()
{
	JKRAram::sAramObject->mAramHeap->getFreeSize();

	for (u32 i = 0; i < 13; i++) {
		char langResName[0x100];
		og::newScreen::makeLanguageResName(langResName, sAramResName2D[i]);
		gAramMgr->dvdToAram(langResName, !mLoadPermission);
	}

	for (u32 i = 0; i < 4; i++) {
		gAramMgr->dvdToAram(sAramResName2DCmn[i], !mLoadPermission);
	}
}

/**
 * @note Address: 0x80455F90
 * @note Size: 0x78
 */
void Mgr::loadDemo()
{
	JKRAram::sAramObject->mAramHeap->getFreeSize();

	for (u32 i = 0; i < 19; i++) {
		gAramMgr->dvdToAram(sAramResDemo[i], !mLoadPermission);
	}
}

/**
 * @note Address: 0x80456008
 * @note Size: 0x78
 */
void Mgr::loadItem()
{
	JKRAram::sAramObject->mAramHeap->getFreeSize();

	for (u32 i = 0; i < 24; i++) {
		gAramMgr->dvdToAram(sAramResItem[i], !mLoadPermission);
	}
}
} // namespace Pikmin2ARAM
