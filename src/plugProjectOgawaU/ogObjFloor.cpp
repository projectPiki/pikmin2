#include "og/newScreen/Floor.h"
#include "JSystem/J3D/J3DSys.h"
#include "og/newScreen/TitleMsg.h"
#include "og/Screen/AlphaMgr.h"
#include "og/Screen/anime.h"
#include "og/Screen/callbackNodes.h"
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
	switch (m_disp->m_caveID) {
	case 't_01':
	case 't_02':
	case 't_03':
	case 'f_01':
	case 'f_02':
	case 'f_03':
	case 'f_04':
	case 'y_01':
	case 'y_02':
	case 'y_03':
	case 'y_04':
	case 'l_01':
	case 'l_02':
	case 'l_03':
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
	switch (m_disp->m_caveID) {
	case 'c_00':
	case 'c_01':
	case 'c_02':
	case 'c_03':
	case 'c_04':
	case 'c_05':
	case 'c_06':
	case 'c_07':
	case 'c_08':
	case 'c_09':
	case 'c_10':
	case 'c_11':
	case 'c_12':
	case 'c_13':
	case 'c_14':
	case 'c_15':
	case 'c_16':
	case 'c_17':
	case 'c_18':
	case 'c_19':
	case 'c_20':
	case 'c_21':
	case 'c_22':
	case 'c_23':
	case 'c_24':
	case 'c_25':
	case 'c_26':
	case 'c_27':
	case 'c_28':
	case 'c_29':
	case '_uni':
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
	bool ret = false;
	switch (m_disp->m_caveID) {
	case 'vs00':
	case 'vs01':
	case 'vs02':
	case 'vs03':
	case 'vs04':
	case 'vs05':
	case 'vs06':
	case 'vs07':
	case 'vs08':
	case 'vs09':
		ret = true;
	}
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
			u64 tag            = 'Nsub_i00' + i % 10 + (i / 10 * 0x100);
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

	if (isFLOOR()) {
		caveType = FLOOR_Challenge;
	} else if (isCHALLENGE()) {
		caveType = FLOOR_Story;
	} else if (isVS()) {
		caveType = FLOOR_Versus;
	}

	setCaveMsgID(m_disp->m_caveID, m_textTag);

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
	m_sublevelXoffs = m_sublevelPane->m_offset.x;
	m_sublevelYoffs = m_sublevelPane->m_offset.y;
}

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

	if (isFLOOR()) {
		caveType = FLOOR_Story;
	} else if (isCHALLENGE()) {
		caveType = FLOOR_Challenge;
	} else if (isVS()) {
		caveType = FLOOR_Versus;
	}

	m_title->setColor(msVal.m_colors1[caveType], msVal.m_colors2[caveType]);
	m_sublevelMsg->setColor(msVal.m_colors1[caveType], msVal.m_colors2[caveType]);

	J2DPictureEx* pic = m_counterFloor->m_pic1;
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
}

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
