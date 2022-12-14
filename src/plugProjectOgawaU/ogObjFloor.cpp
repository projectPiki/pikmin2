#include "og/newScreen/Floor.h"
#include "JSystem/J3D/J3DSys.h"
#include "og/newScreen/TitleMsg.h"
#include "og/Screen/AlphaMgr.h"
#include "og/Screen/anime.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "P2DScreen.h"
#include "System.h"
#include "TParticle2dMgr.h"
#include "Dolphin/rand.h"

namespace og {
namespace newScreen {

u64 vsRuleMsgId[6] = {
	'2021_00', // "An advisory: You can't carry your own Gyro Block."
	'2022_00', // "An advisory: Pikmin lost to opposing Pikmin will become seeds."
	'2023_00', // "An advisory: Roulette creatures vanish when you defeat them."
	'2024_00', // "An advisory: Use your sprays wisely to turn the tide of battle!"
	'2025_00', // "An advisory: You can't pluck, throw, or spray while engaging enemy Pikmin."
	'2026_00'  // "An advisory: Get a clover for one roulette spin. You can store up to four."
};

/*
 * __ct
 * --INFO--
 * Address:	8031A3C8
 * Size:	0000E8
 */
ObjFloor::ObjFloor(const char* name)
    : m_fadeLevel(0.0f)
    , m_alpha(0.0f)
{
	m_name         = name;
	m_disp         = nullptr;
	m_screenName   = nullptr;
	m_screenFont   = nullptr;
	m_sublevelPane = nullptr;
	m_timer        = msVal._0C;
	m_doFadeout    = false;
	m_color.set(0, 0, 0, 255);
	m_doEnd            = 0;
	m_BackgroundAlpha  = 0.0f;
	m_sublevelXoffs    = 0.0f;
	m_sublevelYoffs    = 0.0f;
	m_counterFloor     = nullptr;
	m_anims            = nullptr;
	m_screenRules      = nullptr;
	m_ruleMesgPane     = nullptr;
	m_isButtonShown    = false;
	m_buttonPane       = nullptr;
	m_loadingPane      = nullptr;
	m_buttonAlphaTimer = 1.0f;
	sprintf(m_textTag, "");
}

/*
 * --INFO--
 * Address:	8031A4B0
 * Size:	0000AC
 */
ObjFloor::~ObjFloor() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 * True if caveID is a story cave, false otherwise
 */
bool newScreen::ObjFloor::isFLOOR()
{
	bool ret = false;
	if (m_disp->m_caveID < 't_04' && 't_01' <= m_disp->m_caveID || m_disp->m_caveID < 'f_05' && 'f_01' <= m_disp->m_caveID
	    || m_disp->m_caveID < 'y_05' && 'y_01' <= m_disp->m_caveID || m_disp->m_caveID < 'l_04' && 'l_01' <= m_disp->m_caveID) {
		ret = true;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 * True if caveID is a Challenge Mode level, false otherwise
 */
bool newScreen::ObjFloor::isCHALLENGE()
{
	bool ret = false;
	if (m_disp->m_caveID < 'c_0:' && 'c_00' <= m_disp->m_caveID || m_disp->m_caveID < 'c_1:' && 'c_10' <= m_disp->m_caveID
	    || m_disp->m_caveID < 'c_2:' && 'c_20' <= m_disp->m_caveID || m_disp->m_caveID == '_uni') {
		ret = true;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 * True if caveID is a VS stage, false otherwise
 */
inline bool newScreen::ObjFloor::isVS()
{
	bool ret = ((m_disp->m_caveID < (int)'vs0:') && (m_disp->m_caveID >= (int)'vs00'));
	return ret;
}

/*
 * --INFO--
 * Address:	8031A55C
 * Size:	000460
 */
void ObjFloor::setCaveMsgID(u32 caveid, char* buffer)
{
	char* cave_msg;
	switch (caveid) {
	case 't_01':              // tutorial
		cave_msg = "8395_00"; // "Emergence Cave"
		break;
	case 't_02':
		cave_msg = "8399_00"; // "Subterranean Complex"
		break;
	case 't_03':
		cave_msg = "8400_00"; // "Frontier Cavern"
		break;
	case 'f_01':              // forest
		cave_msg = "8396_00"; // "Hole of Beasts"
		break;
	case 'f_02':
		cave_msg = "8398_00"; // "White Flower Garden"
		break;
	case 'f_03':
		cave_msg = "8401_00"; // "Bulblax Kingdom"
		break;
	case 'f_04':
		cave_msg = "8410_00"; // "Snagret Hole"
		break;
	case 'y_01':              // yakushima
		cave_msg = "8397_00"; // "Citadel of Spiders"
		break;
	case 'y_02':
		cave_msg = "8402_00"; // "Glutton's Kitchen"
		break;
	case 'y_03':
		cave_msg = "8403_00"; // "Shower Room"
		break;
	case 'y_04':
		cave_msg = "8411_00"; // "Submerged Castle"
		break;
	case 'l_01':              // last
		cave_msg = "8412_00"; // "Cavern of Chaos"
		break;
	case 'l_02':
		cave_msg = "8413_00"; // "Hole of Heroes"
		break;
	case 'l_03':
		cave_msg = "8414_00"; // "Dream Den"
		break;
	case 'c_00':              // challenge mode stages
		cave_msg = "4900_00"; // "Explorer's Cave"
		break;
	case 'c_01':
		cave_msg = "4901_00"; // "Brawny Abyss"
		break;
	case 'c_02':
		cave_msg = "4902_00"; // "Concrete Maze"
		break;
	case 'c_03':
		cave_msg = "4903_00"; // "Creator's Garden"
		break;
	case 'c_04':
		cave_msg = "4904_00"; // "The Giant's Bath"
		break;
	case 'c_05':
		cave_msg = "4905_00"; // "Lost Toy Box"
		break;
	case 'c_06':
		cave_msg = "4906_00"; // "Twilight Garden"
		break;
	case 'c_07':
		cave_msg = "4907_00"; // "Cavernous Abyss"
		break;
	case 'c_08':
		cave_msg = "4908_00"; // "Secret Testing Range"
		break;
	case 'c_09':
		cave_msg = "4909_00"; // "Emperor's Realm"
		break;
	case 'c_10':
		cave_msg = "4910_00"; // "Cryptic Cavern"
		break;
	case 'c_11':
		cave_msg = "4911_00"; // "Red Chasm"
		break;
	case 'c_12':
		cave_msg = "4912_00"; // "Collector's Room"
		break;
	case 'c_13':
		cave_msg = "4913_00"; // "Hidden Garden"
		break;
	case 'c_14':
		cave_msg = "4914_00"; // "Trampled Garden"
		break;
	case 'c_15':
		cave_msg = "4915_00"; // "Hot House"
		break;
	case 'c_16':
		cave_msg = "4916_00"; // "Breeding Ground"
		break;
	case 'c_17':
		cave_msg = "4917_00"; // "Green Hole"
		break;
	case 'c_18':
		cave_msg = "4918_00"; // "Hazard Training"
		break;
	case 'c_19':
		cave_msg = "4919_00"; // "Three Color Training"
		break;
	case 'c_20':
		cave_msg = "4920_00"; // "Novice Training"
		break;
	case 'c_21':
		cave_msg = "4921_00"; // "Snack Pit"
		break;
	case 'c_22':
		cave_msg = "4922_00"; // "Sniper Room"
		break;
	case 'c_23':
		cave_msg = "4923_00"; // "Dweevil Nest"
		break;
	case 'c_24':
		cave_msg = "4924_00"; // "Cave of Snarls"
		break;
	case 'c_25':
		cave_msg = "4925_00"; // "Abduction Den"
		break;
	case 'c_26':
		cave_msg = "4926_00"; // "Bully Den"
		break;
	case 'c_27':
		cave_msg = "4927_00"; // "Subterranean Lair"
		break;
	case 'c_28':
		cave_msg = "4928_00"; // "Cave of Pain"
		break;
	case 'c_29':
		cave_msg = "4929_00"; // "Rumbling Grotto"
		break;
	case 'vs00':              // versus stages
		cave_msg = "4770_00"; // "Battle Field"
		break;
	case 'vs01':
		cave_msg = "4771_00"; // "Colosseum"
		break;
	case 'vs02':
		cave_msg = "4772_00"; // "Carpet Plain"
		break;
	case 'vs03':
		cave_msg = "4773_00"; // "Hostile Territory"
		break;
	case 'vs04':
		cave_msg = "4774_00"; // "War Path"
		break;
	case 'vs05':
		cave_msg = "4775_00"; // "Rusty Gulch"
		break;
	case 'vs06':
		cave_msg = "4776_00"; // "Brawl Yard"
		break;
	case 'vs07':
		cave_msg = "4777_00"; // "Angle Maze"
		break;
	case 'vs08':
		cave_msg = "4778_00"; // "Dim Labyrinth"
		break;
	case 'vs09':
		cave_msg = "4779_00"; // "Tile Lands"
		break;
	case '_uni':              // test id
		cave_msg = "9996_00"; // "Test Message 9996"
		break;
	default:
		cave_msg = "8395_00"; // "Emergence Cave"
	}
	sprintf(buffer, "%s", cave_msg);
}

/*
 * --INFO--
 * Address:	8031A9BC
 * Size:	0008C0
 */
void ObjFloor::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberFloor* disp = static_cast<og::Screen::DispMemberFloor*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_FLOOR)) {
		m_disp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		m_disp = new og::Screen::DispMemberFloor;

	} else {
		JUT_PANICLINE(452, "ERR! in ObjFloor CreateŽ¸”sI\n");
	}

	m_screenFont = new P2DScreen::Mgr_tuning;
	if (sys->m_region == System::LANG_JAPANESE) {
		m_screenFont->set("new_font_0.blo", 0x1040000, arc);
	} else {
		m_screenFont->set("new_font_0_eng_pal.blo", 0x1040000, arc);
	}

	m_screenName = new P2DScreen::Mgr_tuning;
	m_screenName->set("font_name.blo", 0x1040000, arc);

	if (isVS()) { // needs fixing
		m_screenRules = new P2DScreen::Mgr_tuning;
		m_screenRules->set("vs_title_rule_window.blo", 0x1040000, arc);
		m_ruleMesgPane = og::Screen::TagSearch(m_screenRules, 'Trule_m5');
		m_buttonPane   = og::Screen::TagSearch(m_screenRules, 'Pabutton');
		m_loadingPane  = og::Screen::TagSearch(m_screenRules, 'Tloading');
		m_buttonPane->hide();
		m_loadingPane->show();

		for (int i = 0; i < 6; i++) {
			u64 tag            = 'Nsub_i00' + (i + i % 10); // not quite but closer
			m_rulesPaneList[i] = og::Screen::TagSearch(m_screenRules, tag);
			m_rulesPaneList[i]->hide();
		}
		int ruleMsgIndex;
		if (msVal.m_shouldNotRandomizeRuleMsgMaybe) {
			ruleMsgIndex = msVal.m_ruleMsgIndex;
		} else {
			ruleMsgIndex = randFloat() * 6.0f;
		}

		m_ruleMesgPane->setMsgID(vsRuleMsgId[ruleMsgIndex]);
		m_rulesPaneList[ruleMsgIndex]->show();
		m_buttonAlpha = new og::Screen::AlphaMgr;
	} else {
		m_screenRules  = nullptr;
		m_ruleMesgPane = nullptr;
	}

	if (m_screenName) {
		J2DPane* fc_c = m_screenName->search('fc_c');
		if (fc_c->getParentPane()) {
			fc_c->getParentPane()->removeChild(fc_c);
		}
		m_counterFloor = og::Screen::setCallBack_CounterRV(m_screenName, 'fc_r', 'fc_l', 'fc_l', &m_disp->m_sublevel, 3, 2, false, arc);
		m_counterFloor->setCenteringMode(Screen::CallBack_CounterRV::ECM_UNKNOWN_2);
	}

	og::Screen::setAlphaScreen(m_screenName);

	if (m_screenRules) {
		og::Screen::setAlphaScreen(m_screenRules);
	}

	if (m_screenRules) {
		og::Screen::setCallBackMessage(m_screenRules);
	}

	if (m_screenRules) {
		m_anims = new og::Screen::AnimGroup(2);
		registAnimGroupScreen(m_anims, arc, m_screenRules, "vs_title_rule_window.btk", 1.0f);
		registAnimGroupScreen(m_anims, arc, m_screenRules, "vs_title_rule_window_02.btk", 1.0f);
		m_anims->setFrame(0.0f);
		m_anims->setRepeat(true);
		m_anims->setSpeed(1.0f);
		m_anims->start();
	}

	int caveType = 0;
	int caveID   = m_disp->m_caveID;

	if (isFLOOR()) { // needs fixing
		caveType = FLOOR_Story;
	} else if (isCHALLENGE()) { // needs fixing
		caveType = FLOOR_Challenge;
	} else if (isVS()) { // needs fixing
		caveType = FLOOR_Versus;
	}

	setCaveMsgID(caveID, m_textTag);

	switch (caveType) {
	case FLOOR_Challenge:
		m_title            = new TitleMsgDrop(m_screenFont, m_screenName->search('title'), m_textTag);
		m_title->m_yOffset = msVal._50;
		break;

	case FLOOR_Story:
		TitleMsgWave* msg = new TitleMsgWave(m_screenFont, m_screenName->search('title'), m_textTag);
		msg->setParam(msVal._40, msVal._44, msVal._48, msVal._4C);
		msg->m_yOffset = msVal._54;
		m_title        = msg;
		break;

	case FLOOR_Versus:
		m_title            = new TitleMsgClash(m_screenFont, m_screenName->search('title'), m_textTag);
		m_title->m_yOffset = msVal._58;
		break;

	default:
		m_title = new TitleMsg(m_screenFont, m_screenName->search('title'), m_textTag);
		break;
	}

	m_title->setCentering(TitleMsg::ECM_2);
	m_title->init();

	m_sublevelMsg = new TitleMsg(m_screenFont, m_screenName->search('chika'), "8382_00"); // "Sublevel"
	m_sublevelMsg->setCentering(TitleMsg::ECM_1);

	m_sublevelPane  = m_screenName->search('kaisuu');
	m_sublevelXoffs = m_sublevelPane->_0D4.x;
	m_sublevelYoffs = m_sublevelPane->_0D4.y;

	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r5, lbl_8048EBA8@ha
	stw      r0, 0x54(r1)
	stmw     r24, 0x30(r1)
	mr       r31, r3
	mr       r29, r4
	addi     r30, r5, lbl_8048EBA8@l
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4C4F4F52@ha
	li       r5, 0x46
	mr       r24, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4C4F4F52@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031AA0C
	stw      r24, 0x38(r31)
	b        lbl_8031AA9C

lbl_8031AA0C:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x554D4D59@ha
	mr       r3, r24
	li       r5, 0x44
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x554D4D59@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031AA88
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8031AA80
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r5, __vt__Q32og6Screen15DispMemberFloor@ha
	addi     r0, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r4, 0x745F3031@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r5, __vt__Q32og6Screen15DispMemberFloor@l
	li       r5, 0x37
	stw      r7, 4(r3)
	addi     r0, r4, 0x745F3031@l
	stw      r6, 0(r3)
	stw      r5, 8(r3)
	stb      r7, 0x10(r3)
	stb      r7, 0x11(r3)
	stw      r0, 0xc(r3)
	stb      r7, 0x12(r3)

lbl_8031AA80:
	stw      r3, 0x38(r31)
	b        lbl_8031AA9C

lbl_8031AA88:
	addi     r3, r30, 0
	addi     r5, r30, 0x10
	li       r4, 0x1c4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031AA9C:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031AAB4
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031AAB4:
	stw      r0, 0x4c(r31)
	lwz      r3, sys@sda21(r13)
	lwz      r0, 0xd4(r3)
	cmpwi    r0, 5
	bne      lbl_8031AAE0
	lwz      r3, 0x4c(r31)
	mr       r6, r29
	addi     r4, r30, 0x30
	lis      r5, 0x104
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	b        lbl_8031AAF4

lbl_8031AAE0:
	lwz      r3, 0x4c(r31)
	mr       r6, r29
	addi     r4, r30, 0x40
	lis      r5, 0x104
	bl       set__9J2DScreenFPCcUlP10JKRArchive

lbl_8031AAF4:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031AB0C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031AB0C:
	stw      r0, 0x48(r31)
	mr       r6, r29
	addi     r4, r30, 0x58
	lis      r5, 0x104
	lwz      r3, 0x48(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lwz      r4, 0x38(r31)
	lis      r3, 0x7673303A@ha
	addi     r0, r3, 0x7673303A@l
	li       r5, 0
	lwz      r4, 0xc(r4)
	cmpw     r4, r0
	bge      lbl_8031AB54
	addi     r0, r3, 0x3030
	cmpw     r4, r0
	bge      lbl_8031AB50
	b        lbl_8031AB54

lbl_8031AB50:
	li       r5, 1

lbl_8031AB54:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8031AD30
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031AB74
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031AB74:
	stw      r0, 0x50(r31)
	mr       r6, r29
	addi     r4, r30, 0x68
	lis      r5, 0x104
	lwz      r3, 0x50(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lis      r5, 0x655F6D35@ha
	lis      r4, 0x5472756C@ha
	lwz      r3, 0x50(r31)
	addi     r6, r5, 0x655F6D35@l
	addi     r5, r4, 0x5472756C@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x8c(r31)
	lis      r5, 0x74746F6E@ha
	lis      r4, 0x50616275@ha
	lwz      r3, 0x50(r31)
	addi     r6, r5, 0x74746F6E@l
	addi     r5, r4, 0x50616275@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0xac(r31)
	lis      r5, 0x64696E67@ha
	lis      r4, 0x546C6F61@ha
	lwz      r3, 0x50(r31)
	addi     r6, r5, 0x64696E67@l
	addi     r5, r4, 0x546C6F61@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0xb0(r31)
	lis      r5, 0x66666667@ha
	lis      r4, 0x5F693030@ha
	lis      r3, 0x4E737562@ha
	lwz      r6, 0xac(r31)
	li       r7, 0
	li       r0, 1
	mr       r25, r31
	stb      r7, 0xb0(r6)
	addi     r26, r5, 0x66666667@l
	addi     r27, r4, 0x5F693030@l
	addi     r28, r3, 0x4E737562@l
	lwz      r3, 0xb0(r31)
	li       r24, 0
	stb      r0, 0xb0(r3)

lbl_8031AC18:
	mulhw    r7, r26, r24
	lwz      r3, 0x50(r31)
	srawi    r0, r7, 2
	srwi     r4, r0, 0x1f
	add      r0, r0, r4
	mulli    r0, r0, 0xa
	subf     r4, r0, r24
	srawi    r0, r4, 0x1f
	addc     r6, r4, r27
	adde     r5, r0, r28
	srawi    r0, r7, 2
	srwi     r4, r0, 0x1f
	add      r0, r0, r4
	slwi     r4, r0, 8
	srawi    r0, r4, 0x1f
	addc     r6, r6, r4
	adde     r5, r5, r0
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x90(r25)
	addi     r24, r24, 1
	cmpwi    r24, 6
	li       r0, 0
	lwz      r3, 0x90(r25)
	addi     r25, r25, 4
	stb      r0, 0xb0(r3)
	blt      lbl_8031AC18
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lbz      r0, 0x79(r3)
	cmplwi   r0, 0
	beq      lbl_8031AC9C
	lwz      r4, 0x74(r3)
	b        lbl_8031ACD8

lbl_8031AC9C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051DB70@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_8051DB60@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_8051DB64@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r4, 0x2c(r1)

lbl_8031ACD8:
	lis      r3, vsRuleMsgId__Q22og9newScreen@ha
	slwi     r0, r4, 2
	slwi     r6, r4, 3
	lwz      r5, 0x8c(r31)
	addi     r3, r3, vsRuleMsgId__Q22og9newScreen@l
	add      r4, r31, r0
	add      r7, r3, r6
	li       r0, 1
	lwz      r6, 0(r7)
	li       r3, 0x18
	lwz      r7, 4(r7)
	stw      r7, 0x1c(r5)
	stw      r6, 0x18(r5)
	lwz      r4, 0x90(r4)
	stb      r0, 0xb0(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031AD28
	bl       __ct__Q32og6Screen8AlphaMgrFv
	mr       r0, r3

lbl_8031AD28:
	stw      r0, 0xb4(r31)
	b        lbl_8031AD3C

lbl_8031AD30:
	li       r0, 0
	stw      r0, 0x50(r31)
	stw      r0, 0x8c(r31)

lbl_8031AD3C:
	lwz      r3, 0x48(r31)
	cmplwi   r3, 0
	beq      lbl_8031ADE0
	lwz      r12, 0(r3)
	lis      r4, 0x66635F63@ha
	addi     r6, r4, 0x66635F63@l
	li       r5, 0
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r24, r3
	bl       getParentPane__7J2DPaneFv
	cmplwi   r3, 0
	beq      lbl_8031AD84
	mr       r3, r24
	bl       getParentPane__7J2DPaneFv
	mr       r4, r24
	bl       removeChild__7J2DPaneFP7J2DPane

lbl_8031AD84:
	lwz      r4, 0x38(r31)
	lis      r3, 0x66635F6C@ha
	addi     r8, r3, 0x66635F6C@l
	li       r5, 3
	addi     r0, r4, 8
	li       r4, 2
	stw      r0, 8(r1)
	li       r0, 0
	mr       r10, r8
	addi     r6, r3, 0x5f72
	stw      r5, 0xc(r1)
	li       r5, 0
	li       r7, 0
	li       r9, 0
	stw      r4, 0x10(r1)
	stw      r0, 0x14(r1)
	stw      r29, 0x18(r1)
	lwz      r3, 0x48(r31)
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
	stw      r3, 0x54(r31)
	li       r4, 2
	lwz      r3, 0x54(r31)
	bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode

lbl_8031ADE0:
	lwz      r3, 0x48(r31)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	lwz      r3, 0x50(r31)
	cmplwi   r3, 0
	beq      lbl_8031ADF8
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane

lbl_8031ADF8:
	lwz      r3, 0x50(r31)
	cmplwi   r3, 0
	beq      lbl_8031AE08
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr

lbl_8031AE08:
	lwz      r0, 0x50(r31)
	cmplwi   r0, 0
	beq      lbl_8031AE90
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031AE30
	li       r4, 2
	bl       __ct__Q32og6Screen9AnimGroupFi
	mr       r0, r3

lbl_8031AE30:
	stw      r0, 0x88(r31)
	mr       r4, r29
	lfs      f1, lbl_8051D99C@sda21(r2)
	addi     r6, r30, 0x84
	lwz      r3, 0x88(r31)
	lwz      r5, 0x50(r31)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lwz      r3, 0x88(r31)
	mr       r4, r29
	lwz      r5, 0x50(r31)
	addi     r6, r30, 0xa0
	lfs      f1, lbl_8051D99C@sda21(r2)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lwz      r3, 0x88(r31)
	lfs      f1, lbl_8051D998@sda21(r2)
	bl       setFrame__Q32og6Screen9AnimGroupFf
	lwz      r3, 0x88(r31)
	li       r4, 1
	bl       setRepeat__Q32og6Screen9AnimGroupFb
	lwz      r3, 0x88(r31)
	lfs      f1, lbl_8051D99C@sda21(r2)
	bl       setSpeed__Q32og6Screen9AnimGroupFf
	lwz      r3, 0x88(r31)
	bl       start__Q32og6Screen9AnimGroupFv

lbl_8031AE90:
	lwz      r3, 0x38(r31)
	lis      r5, 0x745F3031@ha
	addi     r0, r5, 0x745F3031@l
	li       r24, 0
	lwz      r4, 0xc(r3)
	li       r6, 0
	cmpw     r4, r0
	bge      lbl_8031AEF0
	lis      r3, 0x6C5F3031@ha
	addi     r0, r3, 0x6C5F3031@l
	cmpw     r4, r0
	bge      lbl_8031AEE0
	lis      r3, 0x665F3035@ha
	addi     r0, r3, 0x665F3035@l
	cmpw     r4, r0
	bge      lbl_8031AF20
	addi     r0, r3, 0x3031
	cmpw     r4, r0
	bge      lbl_8031AF1C
	b        lbl_8031AF20

lbl_8031AEE0:
	addi     r0, r3, 0x3034
	cmpw     r4, r0
	bge      lbl_8031AF20
	b        lbl_8031AF1C

lbl_8031AEF0:
	lis      r3, 0x795F3031@ha
	addi     r0, r3, 0x795F3031@l
	cmpw     r4, r0
	bge      lbl_8031AF10
	addi     r0, r5, 0x3034
	cmpw     r4, r0
	bge      lbl_8031AF20
	b        lbl_8031AF1C

lbl_8031AF10:
	addi     r0, r3, 0x3035
	cmpw     r4, r0
	bge      lbl_8031AF20

lbl_8031AF1C:
	li       r6, 1

lbl_8031AF20:
	clrlwi.  r0, r6, 0x18
	beq      lbl_8031AF30
	li       r24, 1
	b        lbl_8031AFE4

lbl_8031AF30:
	lis      r3, 0x635F3130@ha
	li       r5, 0
	addi     r0, r3, 0x635F3130@l
	cmpw     r4, r0
	bge      lbl_8031AF74
	addi     r0, r3, 0x3030
	cmpw     r4, r0
	bge      lbl_8031AF64
	lis      r3, 0x5F756E69@ha
	addi     r0, r3, 0x5F756E69@l
	cmpw     r4, r0
	beq      lbl_8031AF9C
	b        lbl_8031AFA0

lbl_8031AF64:
	addi     r0, r3, 0x303a
	cmpw     r4, r0
	bge      lbl_8031AFA0
	b        lbl_8031AF9C

lbl_8031AF74:
	addi     r0, r3, 0x3230
	cmpw     r4, r0
	bge      lbl_8031AF90
	addi     r0, r3, 0x313a
	cmpw     r4, r0
	bge      lbl_8031AFA0
	b        lbl_8031AF9C

lbl_8031AF90:
	addi     r0, r3, 0x323a
	cmpw     r4, r0
	bge      lbl_8031AFA0

lbl_8031AF9C:
	li       r5, 1

lbl_8031AFA0:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8031AFB0
	li       r24, 0
	b        lbl_8031AFE4

lbl_8031AFB0:
	lis      r3, 0x7673303A@ha
	li       r5, 0
	addi     r0, r3, 0x7673303A@l
	cmpw     r4, r0
	bge      lbl_8031AFD8
	addi     r0, r3, 0x3030
	cmpw     r4, r0
	bge      lbl_8031AFD4
	b        lbl_8031AFD8

lbl_8031AFD4:
	li       r5, 1

lbl_8031AFD8:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8031AFE4
	li       r24, 2

lbl_8031AFE4:
	mr       r3, r31
	addi     r5, r31, 0x3c
	bl       setCaveMsgID__Q32og9newScreen8ObjFloorFUlPc
	cmpwi    r24, 1
	beq      lbl_8031B014
	bge      lbl_8031B008
	cmpwi    r24, 0
	bge      lbl_8031B078
	b        lbl_8031B168

lbl_8031B008:
	cmpwi    r24, 3
	bge      lbl_8031B168
	b        lbl_8031B104

lbl_8031B014:
	li       r3, 0x13e4
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8031B05C
	lwz      r3, 0x48(r31)
	lis      r4, 0x69746C65@ha
	addi     r6, r4, 0x69746C65@l
	li       r5, 0x74
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r31)
	mr       r5, r3
	mr       r3, r24
	addi     r6, r31, 0x3c
	bl       __ct__Q32og9newScreen12TitleMsgDropFP9J2DScreenP7J2DPanePc
	mr       r24, r3

lbl_8031B05C:
	stw      r24, 0x74(r31)
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, 0x50(r3)
	lwz      r3, 0x74(r31)
	stfs     f0, 0x7dc(r3)
	b        lbl_8031B1B4

lbl_8031B078:
	li       r3, 0xbf8
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8031B0C0
	lwz      r3, 0x48(r31)
	lis      r4, 0x69746C65@ha
	addi     r6, r4, 0x69746C65@l
	li       r5, 0x74
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r31)
	mr       r5, r3
	mr       r3, r24
	addi     r6, r31, 0x3c
	bl       __ct__Q32og9newScreen12TitleMsgWaveFP9J2DScreenP7J2DPanePc
	mr       r24, r3

lbl_8031B0C0:
	mr       r3, r24
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	lwz      r12, 0(r24)
	addi     r4, r4, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f1, 0x40(r4)
	lwz      r12, 0x18(r12)
	lfs      f2, 0x44(r4)
	lfs      f3, 0x48(r4)
	lfs      f4, 0x4c(r4)
	mtctr    r12
	bctrl
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, 0x54(r3)
	stfs     f0, 0x7dc(r24)
	stw      r24, 0x74(r31)
	b        lbl_8031B1B4

lbl_8031B104:
	li       r3, 0x9ec
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8031B14C
	lwz      r3, 0x48(r31)
	lis      r4, 0x69746C65@ha
	addi     r6, r4, 0x69746C65@l
	li       r5, 0x74
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r31)
	mr       r5, r3
	mr       r3, r24
	addi     r6, r31, 0x3c
	bl       __ct__Q32og9newScreen13TitleMsgClashFP9J2DScreenP7J2DPanePc
	mr       r24, r3

lbl_8031B14C:
	stw      r24, 0x74(r31)
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, 0x58(r3)
	lwz      r3, 0x74(r31)
	stfs     f0, 0x7dc(r3)
	b        lbl_8031B1B4

lbl_8031B168:
	li       r3, 0x7e4
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8031B1B0
	lwz      r3, 0x48(r31)
	lis      r4, 0x69746C65@ha
	addi     r6, r4, 0x69746C65@l
	li       r5, 0x74
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r31)
	mr       r5, r3
	mr       r3, r24
	addi     r6, r31, 0x3c
	bl       __ct__Q32og9newScreen8TitleMsgFP9J2DScreenP7J2DPanePc
	mr       r24, r3

lbl_8031B1B0:
	stw      r24, 0x74(r31)

lbl_8031B1B4:
	lwz      r3, 0x74(r31)
	li       r4, 2
	bl
setCentering__Q32og9newScreen8TitleMsgFQ42og9newScreen8TitleMsg13EnumCentering
	lwz      r3, 0x74(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r3, 0x7e4
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8031B21C
	lwz      r3, 0x48(r31)
	lis      r4, 0x68696B61@ha
	addi     r6, r4, 0x68696B61@l
	li       r5, 0x63
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r31)
	mr       r5, r3
	mr       r3, r24
	addi     r6, r2, lbl_8051DB68@sda21
	bl       __ct__Q32og9newScreen8TitleMsgFP9J2DScreenP7J2DPanePc
	mr       r24, r3

lbl_8031B21C:
	stw      r24, 0x78(r31)
	li       r4, 1
	lwz      r3, 0x78(r31)
	bl
setCentering__Q32og9newScreen8TitleMsgFQ42og9newScreen8TitleMsg13EnumCentering
	lwz      r3, 0x48(r31)
	lis      r4, 0x69737575@ha
	addi     r6, r4, 0x69737575@l
	li       r5, 0x6b61
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x7c(r31)
	lwz      r3, 0x7c(r31)
	lfs      f0, 0xd4(r3)
	stfs     f0, 0x80(r31)
	lwz      r3, 0x7c(r31)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x84(r31)
	lmw      r24, 0x30(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031B27C
 * Size:	000004
 */
void TitleMsg::init() { }

/*
 * --INFO--
 * Address:	8031B280
 * Size:	000598
 */
bool newScreen::ObjFloor::commonUpdate()
{
	bool ret                             = false;
	og::Screen::DispMemberFloor* disp    = nullptr;
	og::Screen::DispMemberBase* baseDisp = getDispMember();
	if (baseDisp->isID(OWNER_OGA, MEMBER_FLOOR)) {
		disp = static_cast<og::Screen::DispMemberFloor*>(baseDisp);
	}

	bool vs = isVS();
	if (vs && disp && !m_isButtonShown && disp->m_enableButton) {
		m_isButtonShown = true;
		m_buttonPane->show();
		m_buttonAlpha->setBlinkArea(0.5f, 1.0f);
		m_buttonAlpha->blink(1.0f);
	}

	if (m_screenRules) {
		if (m_isButtonShown) {
			u8 alphaCalc = m_buttonAlpha->calc();
			m_buttonPane->setAlpha(alphaCalc);
			if (m_buttonAlphaTimer > 0.0f) {
				m_buttonAlphaTimer -= sys->m_deltaTime / 0.5f;
				if (m_buttonAlphaTimer < 0.0f) {
					m_buttonAlphaTimer = 0.0f;
				}
			}
			m_loadingPane->setAlpha(m_buttonAlphaTimer * 255.0f);
		}
		m_anims->update();
	}

	if (!vs) {
		f32 subX = m_sublevelXoffs + msVal._2C;
		f32 subY = m_sublevelYoffs + msVal._30;
		if (disp->m_sublevel < 10) {
			subX += msVal._3C;
		}
		m_sublevelPane->setOffset(subX, subY);
		m_sublevelPane->updateScale(msVal._34);
	}

	if (m_screenRules) {
		m_screenRules->update();
	}

	int caveType = 0;
	int caveID   = m_disp->m_caveID;

	if (isFLOOR()) { // needs fixing
		caveType = FLOOR_Story;
	} else if (isCHALLENGE()) { // needs fixing
		caveType = FLOOR_Challenge;
	} else if (isVS()) { // needs fixing
		caveType = FLOOR_Versus;
	}

	m_title->setColor(msVal.m_colors1[caveType], msVal.m_colors2[caveType]);
	m_sublevelMsg->setColor(msVal.m_colors1[caveType], msVal.m_colors2[caveType]);

	J2DPictureEx* pic = m_counterFloor->_6C;
	pic->setWhite(msVal.m_colors1[caveType]);
	pic->setBlack(msVal.m_colors2[caveType]);

	if (vs) {
		m_screenName->setXY(msVal._20, msVal._24);
		m_screenName->scaleScreen(msVal._28);
	} else {
		m_screenName->setXY(msVal._10, msVal._14);
		m_screenName->scaleScreen(msVal._18);
	}
	m_screenName->update();
	m_title->update();
	m_sublevelMsg->update();

	if (m_doFadeout) {
		m_timer -= sys->m_deltaTime;
		if (m_timer < 0.0f)
			ret = true;
	} else {
		og::Screen::DispMemberFloor* disp2 = static_cast<og::Screen::DispMemberFloor*>(getDispMember());
		if (disp2->isID(OWNER_OGA, MEMBER_FLOOR)) {
			if (disp2->m_doEnd) {
				m_doFadeout = true;
				m_doEnd     = true;
				m_title->end();
			}
			if (disp2->m_doForceEnd) {
				m_doEnd = true;
			}
		}
	}
	return ret;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r28, r3
	li       r30, 0
	li       r29, 0
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4C4F4F52@ha
	li       r5, 0x46
	mr       r26, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4C4F4F52@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031B2C8
	mr       r29, r26

lbl_8031B2C8:
	lwz      r4, 0x38(r28)
	lis      r3, 0x7673303A@ha
	addi     r0, r3, 0x7673303A@l
	li       r31, 0
	lwz      r4, 0xc(r4)
	cmpw     r4, r0
	bge      lbl_8031B2F8
	addi     r0, r3, 0x3030
	cmpw     r4, r0
	bge      lbl_8031B2F4
	b        lbl_8031B2F8

lbl_8031B2F4:
	li       r31, 1

lbl_8031B2F8:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8031B34C
	cmplwi   r29, 0
	beq      lbl_8031B34C
	lbz      r0, 0xa8(r28)
	cmplwi   r0, 0
	bne      lbl_8031B34C
	lbz      r0, 0x12(r29)
	cmplwi   r0, 0
	beq      lbl_8031B34C
	li       r0, 1
	lfs      f1, lbl_8051DB78@sda21(r2)
	stb      r0, 0xa8(r28)
	lfs      f2, lbl_8051D99C@sda21(r2)
	lwz      r3, 0xac(r28)
	stb      r0, 0xb0(r3)
	lwz      r3, 0xb4(r28)
	bl       setBlinkArea__Q32og6Screen8AlphaMgrFff
	lwz      r3, 0xb4(r28)
	lfs      f1, lbl_8051D99C@sda21(r2)
	bl       blink__Q32og6Screen8AlphaMgrFf

lbl_8031B34C:
	lwz      r0, 0x50(r28)
	cmplwi   r0, 0
	beq      lbl_8031B3F4
	lbz      r0, 0xa8(r28)
	cmplwi   r0, 0
	beq      lbl_8031B3EC
	lwz      r3, 0xb4(r28)
	bl       calc__Q32og6Screen8AlphaMgrFv
	mr       r0, r3
	lwz      r3, 0xac(r28)
	mr       r4, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0xb8(r28)
	lfs      f2, lbl_8051D998@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_8031B3C0
	lwz      r3, sys@sda21(r13)
	lfs      f0, lbl_8051DB78@sda21(r2)
	lfs      f1, 0x54(r3)
	fdivs    f0, f1, f0
	fsubs    f0, f3, f0
	stfs     f0, 0xb8(r28)
	lfs      f0, 0xb8(r28)
	fcmpo    cr0, f0, f2
	bge      lbl_8031B3C0
	stfs     f2, 0xb8(r28)

lbl_8031B3C0:
	lfs      f1, lbl_8051DB7C@sda21(r2)
	lfs      f0, 0xb8(r28)
	lwz      r3, 0xb0(r28)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	mtctr    r12
	bctrl

lbl_8031B3EC:
	lwz      r3, 0x88(r28)
	bl       update__Q32og6Screen9AnimGroupFv

lbl_8031B3F4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_8031B474
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	lwz      r0, 8(r29)
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f3, 0x80(r28)
	lfs      f2, 0x2c(r3)
	cmplwi   r0, 0xa
	lfs      f1, 0x84(r28)
	lfs      f0, 0x30(r3)
	fadds    f2, f3, f2
	fadds    f1, f1, f0
	bge      lbl_8031B430
	lfs      f0, 0x3c(r3)
	fadds    f2, f2, f0

lbl_8031B430:
	lwz      r3, 0x7c(r28)
	stfs     f2, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	lwz      r3, 0x7c(r28)
	addi     r4, r4, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, 0x34(r4)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8031B474:
	lwz      r3, 0x50(r28)
	cmplwi   r3, 0
	beq      lbl_8031B490
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_8031B490:
	lwz      r5, 0x38(r28)
	lis      r6, 0x745F3031@ha
	addi     r4, r6, 0x745F3031@l
	li       r3, 0
	lwz      r0, 0xc(r5)
	li       r7, 0
	cmpw     r0, r4
	bge      lbl_8031B4F0
	lis      r4, 0x6C5F3031@ha
	addi     r5, r4, 0x6C5F3031@l
	cmpw     r0, r5
	bge      lbl_8031B4E0
	lis      r4, 0x665F3035@ha
	addi     r5, r4, 0x665F3035@l
	cmpw     r0, r5
	bge      lbl_8031B520
	addi     r4, r4, 0x3031
	cmpw     r0, r4
	bge      lbl_8031B51C
	b        lbl_8031B520

lbl_8031B4E0:
	addi     r4, r4, 0x3034
	cmpw     r0, r4
	bge      lbl_8031B520
	b        lbl_8031B51C

lbl_8031B4F0:
	lis      r4, 0x795F3031@ha
	addi     r5, r4, 0x795F3031@l
	cmpw     r0, r5
	bge      lbl_8031B510
	addi     r4, r6, 0x3034
	cmpw     r0, r4
	bge      lbl_8031B520
	b        lbl_8031B51C

lbl_8031B510:
	addi     r4, r4, 0x3035
	cmpw     r0, r4
	bge      lbl_8031B520

lbl_8031B51C:
	li       r7, 1

lbl_8031B520:
	clrlwi.  r4, r7, 0x18
	beq      lbl_8031B530
	li       r3, 0
	b        lbl_8031B5E4

lbl_8031B530:
	lis      r5, 0x635F3130@ha
	li       r6, 0
	addi     r4, r5, 0x635F3130@l
	cmpw     r0, r4
	bge      lbl_8031B574
	addi     r4, r5, 0x3030
	cmpw     r0, r4
	bge      lbl_8031B564
	lis      r4, 0x5F756E69@ha
	addi     r4, r4, 0x5F756E69@l
	cmpw     r0, r4
	beq      lbl_8031B59C
	b        lbl_8031B5A0

lbl_8031B564:
	addi     r4, r5, 0x303a
	cmpw     r0, r4
	bge      lbl_8031B5A0
	b        lbl_8031B59C

lbl_8031B574:
	addi     r4, r5, 0x3230
	cmpw     r0, r4
	bge      lbl_8031B590
	addi     r4, r5, 0x313a
	cmpw     r0, r4
	bge      lbl_8031B5A0
	b        lbl_8031B59C

lbl_8031B590:
	addi     r4, r5, 0x323a
	cmpw     r0, r4
	bge      lbl_8031B5A0

lbl_8031B59C:
	li       r6, 1

lbl_8031B5A0:
	clrlwi.  r4, r6, 0x18
	beq      lbl_8031B5B0
	li       r3, 1
	b        lbl_8031B5E4

lbl_8031B5B0:
	lis      r4, 0x7673303A@ha
	li       r6, 0
	addi     r5, r4, 0x7673303A@l
	cmpw     r0, r5
	bge      lbl_8031B5D8
	addi     r4, r4, 0x3030
	cmpw     r0, r4
	bge      lbl_8031B5D4
	b        lbl_8031B5D8

lbl_8031B5D4:
	li       r6, 1

lbl_8031B5D8:
	clrlwi.  r0, r6, 0x18
	beq      lbl_8031B5E4
	li       r3, 2

lbl_8031B5E4:
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	slwi     r26, r3, 2
	addi     r0, r4, msVal__Q32og9newScreen8ObjFloor@l
	lwz      r3, 0x74(r28)
	add      r4, r0, r26
	addi     r27, r4, 0x5c
	addi     r29, r4, 0x68
	mr       r4, r27
	mr       r5, r29
	bl setColor__Q32og9newScreen8TitleMsgFRQ28JUtility6TColorRQ28JUtility6TColor
	lwz      r3, 0x78(r28)
	mr       r4, r27
	mr       r5, r29
	bl setColor__Q32og9newScreen8TitleMsgFRQ28JUtility6TColorRQ28JUtility6TColor
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	lwz      r5, 0x54(r28)
	addi     r0, r3, msVal__Q32og9newScreen8ObjFloor@l
	addi     r4, r1, 0xc
	add      r3, r0, r26
	lwz      r27, 0x6c(r5)
	lwz      r0, 0x5c(r3)
	mr       r3, r27
	stw      r0, 0xc(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	mr       r3, r27
	addi     r0, r4, msVal__Q32og9newScreen8ObjFloor@l
	addi     r4, r1, 8
	add      r5, r0, r26
	lwz      r0, 0x68(r5)
	stw      r0, 8(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r31, 0x18
	beq      lbl_8031B6D4
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f2, 0x20(r3)
	lfs      f4, 0x24(r3)
	fadds    f3, f2, f1
	lwz      r4, 0x48(r28)
	fadds    f2, f4, f0
	lfs      f1, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stfs     f3, 0x140(r4)
	stfs     f2, 0x144(r4)
	lfs      f2, 0x28(r3)
	lwz      r3, 0x48(r28)
	fmuls    f1, f2, f1
	fmuls    f0, f2, f0
	stfs     f1, 0x138(r3)
	stfs     f0, 0x13c(r3)
	b        lbl_8031B720

lbl_8031B6D4:
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f2, 0x10(r3)
	lfs      f4, 0x14(r3)
	fadds    f3, f2, f1
	lwz      r4, 0x48(r28)
	fadds    f2, f4, f0
	lfs      f1, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stfs     f3, 0x140(r4)
	stfs     f2, 0x144(r4)
	lfs      f2, 0x18(r3)
	lwz      r3, 0x48(r28)
	fmuls    f1, f2, f1
	fmuls    f0, f2, f0
	stfs     f1, 0x138(r3)
	stfs     f0, 0x13c(r3)

lbl_8031B720:
	lwz      r3, 0x48(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x74(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x78(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x64(r28)
	cmplwi   r0, 0
	beq      lbl_8031B794
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x60(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051D998@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x60(r28)
	lfs      f1, 0x60(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_8031B800
	li       r30, 1
	b        lbl_8031B800

lbl_8031B794:
	mr       r3, r28
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4C4F4F52@ha
	mr       r29, r3
	li       r5, 0x46
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4C4F4F52@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031B800
	lbz      r0, 0x10(r29)
	cmplwi   r0, 0
	beq      lbl_8031B7EC
	li       r0, 1
	stb      r0, 0x64(r28)
	stb      r0, 0x6c(r28)
	lwz      r3, 0x74(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8031B7EC:
	lbz      r0, 0x11(r29)
	cmplwi   r0, 0
	beq      lbl_8031B800
	li       r0, 1
	stb      r0, 0x6c(r28)

lbl_8031B800:
	mr       r3, r30
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031B818
 * Size:	000004
 */
void TitleMsg::end() { }

/*
 * --INFO--
 * Address:	8031B81C
 * Size:	000004
 */
void TitleMsg::update() { }

/*
 * --INFO--
 * Address:	8031B820
 * Size:	000020
 */
bool newScreen::ObjFloor::doUpdate() { return commonUpdate(); }

/*
 * --INFO--
 * Address:	8031B840
 * Size:	00019C
 */
void ObjFloor::doDraw(Graphics& gfx)
{
	j3dSys.reinitGX();
	drawBG(gfx);

	J2DPerspGraph* graf = &gfx.m_perspGraph;

	if (m_screenRules) {
		m_screenRules->setAlpha(m_alpha * 255.0f);
		m_screenRules->draw(gfx, *graf);
	}
	gfx.m_perspGraph.setPort();
	particle2dMgr->draw(2, 0);
	m_screenName->setAlpha(m_alpha * 255.0f);
	m_screenName->draw(gfx, *graf);
	graf->setPort();

	if (!isVS()) { // needs fixing
		m_sublevelPane->show();
	} else {
		m_sublevelPane->hide();
	}

	graf->setPort();
	j3dSys.reinitGX();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r5, j3dSys@l
	bl       reinitGX__6J3DSysFv
	mr       r3, r29
	mr       r4, r30
	bl       drawBG__Q32og9newScreen8ObjFloorFR8Graphics
	lwz      r3, 0x50(r29)
	addi     r31, r30, 0x190
	cmplwi   r3, 0
	beq      lbl_8031B8CC
	lfs      f1, lbl_8051DB7C@sda21(r2)
	lfs      f0, 0x5c(r29)
	lwz      r12, 0(r3)
	fmuls    f0, f1, f0
	lwz      r12, 0x24(r12)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x50(r29)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl

lbl_8031B8CC:
	addi     r3, r30, 0x190
	lwz      r12, 0x190(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 2
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	lfs      f1, lbl_8051DB7C@sda21(r2)
	lfs      f0, 0x5c(r29)
	lwz      r3, 0x48(r29)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r29)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x38(r29)
	lis      r3, 0x7673303A@ha
	addi     r0, r3, 0x7673303A@l
	li       r5, 0
	lwz      r4, 0xc(r4)
	cmpw     r4, r0
	bge      lbl_8031B97C
	addi     r0, r3, 0x3030
	cmpw     r4, r0
	bge      lbl_8031B978
	b        lbl_8031B97C

lbl_8031B978:
	li       r5, 1

lbl_8031B97C:
	clrlwi.  r0, r5, 0x18
	bne      lbl_8031B994
	lwz      r3, 0x7c(r29)
	li       r0, 1
	stb      r0, 0xb0(r3)
	b        lbl_8031B9A0

lbl_8031B994:
	lwz      r3, 0x7c(r29)
	li       r0, 0
	stb      r0, 0xb0(r3)

lbl_8031B9A0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	bl       reinitGX__6J3DSysFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031B9DC
 * Size:	000034
 */
bool newScreen::ObjFloor::doStart(::Screen::StartSceneArg const* arg)
{
	m_fadeLevel = 0.0f;
	m_alpha     = 0.0f;
	particle2dMgr->killAll();
	return true;
}

/*
 * --INFO--
 * Address:	8031BA10
 * Size:	000010
 */
bool newScreen::ObjFloor::doEnd(::Screen::EndSceneArg const* arg)
{
	m_fadeLevel = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8031BA20
 * Size:	000004
 */
void ObjFloor::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	8031BA24
 * Size:	000030
 */
void ObjFloor::doUpdateFinish()
{
	m_fadeLevel = 0.0f;
	particle2dMgr->killGroup(2);
}

/*
 * --INFO--
 * Address:	8031BA54
 * Size:	000004
 */
void ObjFloor::doUpdateFadeoutFinish() { }

/*
 * --INFO--
 * Address:	8031BA58
 * Size:	000074
 */
bool newScreen::ObjFloor::doUpdateFadein()
{
	bool result = false;
	m_fadeLevel += sys->m_deltaTime;
	if (m_fadeLevel > msVal._04) {
		m_fadeLevel = msVal._04;
		result      = true;
	}
	m_alpha = m_fadeLevel / msVal._04;
	commonUpdate();
	return result;
}

/*
 * --INFO--
 * Address:	8031BACC
 * Size:	000088
 */
bool newScreen::ObjFloor::doUpdateFadeout()
{
	bool check = false;
	m_fadeLevel += sys->m_deltaTime;

	if (m_fadeLevel > msVal._08) {
		m_fadeLevel = msVal._08;
		if (!m_doEnd) {
			check = true;
		}
	}
	m_alpha = 1.0f - m_fadeLevel / msVal._08;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	8031BB54
 * Size:	000168
 */
void ObjFloor::drawBG(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.m_perspGraph;
	if (m_doEnd) {
		m_BackgroundAlpha += sys->m_deltaTime;
		f32 temp = 1.0f - m_BackgroundAlpha / msVal._00;
		if (temp > 0.0f) {
			m_color.a = temp * 255.0f;
		} else {
			m_color.a = 0;
			m_doEnd   = false;
		}
	}

	if (m_color.a != 0) {
		graf->setPort();
		u16 w = System::getRenderModeObj()->fbWidth;
		u16 h = System::getRenderModeObj()->efbHeight;
		graf->setColor(m_color);
		GXSetAlphaUpdate(GX_FALSE);

		f32 offs = 0.0f;
		JGeometry::TBox2f box(0.0f, 0.0f, offs + w, offs + h);
		graf->fillBox(box);
	}
}

ObjFloor::StaticValues ObjFloor::msVal;

} // namespace newScreen
} // namespace og
