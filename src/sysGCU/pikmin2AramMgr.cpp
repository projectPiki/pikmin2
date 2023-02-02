#include "types.h"
#include "Pikmin2ARAM.h"
#include "ARAM.h"
#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "og/newScreen/ogUtil.h"
#include "stream.h"

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

Mgr* gPikmin2AramMgr;

/*
 * --INFO--
 * Address:	80455C30
 * Size:	000060
 */
void Mgr::init()
{
	P2ASSERTLINE(190, !gPikmin2AramMgr);
	gPikmin2AramMgr = new Pikmin2ARAM::Mgr;
}

/*
 * --INFO--
 * Address:	80455C90
 * Size:	000018
 */
Mgr::Mgr() { mLoadPermission = false; }

/*
 * --INFO--
 * Address:	80455CA8
 * Size:	000008
 */
void Mgr::setLoadPermission(bool loadPermission) { mLoadPermission = loadPermission; }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
bool Mgr::isEntryOnly()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80455CB0
 * Size:	000060
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

/*
 * --INFO--
 * Address:	80455D10
 * Size:	000024
 */
void Mgr::dump() { gAramMgr->dump(); }

/*
 * --INFO--
 * Address:	80455D34
 * Size:	0001A4
 * Just regswaps left.
 */
void Mgr::loadEnemy()
{
	u8 intrp = OSDisableInterrupts() != 0;
	OSDisableScheduler();

	u32 freeSize = JKRHeap::sSystemHeap->getFreeSize() - 31040;
	P2ASSERTLINE(290, freeSize);

	JKRExpHeap* heap1 = makeExpHeap(freeSize, JKRHeap::sSystemHeap, true);
	P2ASSERTLINE(293, heap1);

	JKRExpHeap* heap2 = makeExpHeap(30880, JKRHeap::sSystemHeap, true);
	P2ASSERTLINE(295, heap2);

	heap1->destroy();
	OSEnableScheduler();
	OSRestoreInterrupts(intrp);

	heap2->becomeCurrentHeap();

	RamStream stream(JKRDvdRipper::loadToMainRAM("/enemy/enemyResList.txt", nullptr, Switch_1, 0, JKRHeap::sCurrentHeap,
	                                             JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr),
	                 -1);
	stream.resetPosition(true, 1);

	JKRAram::sAramObject->mAramHeap->getFreeSize();

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
	/*
	stwu     r1, -0x450(r1)
	mflr     r0
	lis      r4, lbl_8049C410@ha
	stw      r0, 0x454(r1)
	stmw     r27, 0x43c(r1)
	mr       r30, r3
	addi     r28, r4, lbl_8049C410@l
	bl       OSDisableInterrupts
	neg      r0, r3
	or       r0, r0, r3
	srwi     r29, r0, 0x1f
	bl       OSDisableScheduler
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	addic.   r27, r3, -31040
	bne      lbl_80455D88
	addi     r3, r28, 0
	addi     r5, r28, 0x944
	li       r4, 0x122
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455D88:
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r3, r27
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	or.      r27, r3, r3
	bne      lbl_80455DB4
	addi     r3, r28, 0
	addi     r5, r28, 0x944
	li       r4, 0x125
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455DB4:
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x78a0
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	or.      r31, r3, r3
	bne      lbl_80455DE0
	addi     r3, r28, 0
	addi     r5, r28, 0x944
	li       r4, 0x127
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80455DE0:
	mr       r3, r27
	bl       destroy__7JKRHeapFv
	bl       OSEnableScheduler
	mr       r3, r29
	bl       OSRestoreInterrupts
	mr       r3, r31
	bl       becomeCurrentHeap__7JKRHeapFv
	li       r0, 0
	addi     r3, r28, 0x950
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 1
	li       r6, 0
	lwz      r7, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r4, r3
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_80455E50
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_80455E50:
	lwz      r3, sAramObject__7JKRAram@sda21(r13)
	lwz      r3, 0x94(r3)
	bl       getFreeSize__11JKRAramHeapFv

lbl_80455E5C:
	addi     r3, r1, 0x10
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	addi     r4, r2, lbl_80520BE0@sda21
	mr       r27, r3
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_80455E9C
	lbz      r0, 4(r30)
	mr       r4, r27
	lwz      r3, gAramMgr@sda21(r13)
	cntlzw   r0, r0
	srwi     r5, r0, 5
	bl       dvdToAram__Q24ARAM3MgrFPCcb
	b        lbl_80455E5C

lbl_80455E9C:
	bl       OSDisableInterrupts
	neg      r0, r3
	or       r0, r0, r3
	srwi     r30, r0, 0x1f
	bl       OSDisableScheduler
	mr       r3, r31
	bl       destroy__7JKRHeapFv
	bl       OSEnableScheduler
	mr       r3, r30
	bl       OSRestoreInterrupts
	lmw      r27, 0x43c(r1)
	lwz      r0, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x450
	blr
	*/
}

/*
 * --INFO--
 * Address:	80455ED8
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	80455F90
 * Size:	000078
 */
void Mgr::loadDemo()
{
	JKRAram::sAramObject->mAramHeap->getFreeSize();

	for (u32 i = 0; i < 19; i++) {
		gAramMgr->dvdToAram(sAramResDemo[i], !mLoadPermission);
	}
}

/*
 * --INFO--
 * Address:	80456008
 * Size:	000078
 */
void Mgr::loadItem()
{
	JKRAram::sAramObject->mAramHeap->getFreeSize();

	for (u32 i = 0; i < 24; i++) {
		gAramMgr->dvdToAram(sAramResItem[i], !mLoadPermission);
	}
}
} // namespace Pikmin2ARAM
